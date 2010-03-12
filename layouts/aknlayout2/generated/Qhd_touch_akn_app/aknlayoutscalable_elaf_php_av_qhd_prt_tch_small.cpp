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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001aac6 };

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
0x7b02,	// (0x000225c8) Screen

0x7b16,	// (0x000225dc) application_window_ParamLimits

0x7b16,	// (0x000225dc) application_window

0x7b30,	// (0x000225f6) screen_g1

0x5add,	// (0x000205a3) area_bottom_pane_ParamLimits

0x5add,	// (0x000205a3) area_bottom_pane

0x5b9d,	// (0x00020663) area_top_pane_ParamLimits

0x5b9d,	// (0x00020663) area_top_pane

0x5c31,	// (0x000206f7) main_pane_ParamLimits

0x5c31,	// (0x000206f7) main_pane

0x7b3a,	// (0x00022600) misc_graphics

0x94e0,	// (0x00023fa6) battery_pane_ParamLimits

0x94e0,	// (0x00023fa6) battery_pane

0xa231,	// (0x00024cf7) bg_status_flat_pane_g8

0xa239,	// (0x00024cff) bg_status_flat_pane_g9

0x95a2,	// (0x00024068) context_pane_ParamLimits

0x95a2,	// (0x00024068) context_pane

0x96b8,	// (0x0002417e) navi_pane_ParamLimits

0x96b8,	// (0x0002417e) navi_pane

0x9736,	// (0x000241fc) signal_pane_ParamLimits

0x9736,	// (0x000241fc) signal_pane

0x0008,

0xf87f,	// (0x0002a345) bg_status_flat_pane_g

0x97a3,	// (0x00024269) status_pane_g1_ParamLimits

0x97a3,	// (0x00024269) status_pane_g1

0x97af,	// (0x00024275) status_pane_g2_ParamLimits

0x97af,	// (0x00024275) status_pane_g2

0x97bb,	// (0x00024281) status_pane_g3_ParamLimits

0x97bb,	// (0x00024281) status_pane_g3

0x0004,

0xf7a6,	// (0x0002a26c) status_pane_g_ParamLimits

0xf7a6,	// (0x0002a26c) status_pane_g

0x97ef,	// (0x000242b5) title_pane_ParamLimits

0x97ef,	// (0x000242b5) title_pane

0x982c,	// (0x000242f2) uni_indicator_pane_ParamLimits

0x982c,	// (0x000242f2) uni_indicator_pane

0x9408,	// (0x00023ece) bg_list_pane_ParamLimits

0x9408,	// (0x00023ece) bg_list_pane

0x521b,	// (0x0001fce1) find_pane

0x9428,	// (0x00023eee) listscroll_app_pane_ParamLimits

0x9428,	// (0x00023eee) listscroll_app_pane

0x9434,	// (0x00023efa) listscroll_form_pane

0x5223,	// (0x0001fce9) listscroll_gen_pane_ParamLimits

0x5223,	// (0x0001fce9) listscroll_gen_pane

0x9434,	// (0x00023efa) listscroll_set_pane

0x8676,	// (0x0002313c) main_idle_act_pane

0x910e,	// (0x00023bd4) main_idle_trad_pane

0x910e,	// (0x00023bd4) main_list_empty_pane

0x944e,	// (0x00023f14) main_midp_pane

0x945a,	// (0x00023f20) main_pane_g1_ParamLimits

0x945a,	// (0x00023f20) main_pane_g1

0x64f0,	// (0x00020fb6) popup_ai_message_window_ParamLimits

0x64f0,	// (0x00020fb6) popup_ai_message_window

0x6596,	// (0x0002105c) popup_fep_china_uni_window_ParamLimits

0x6596,	// (0x0002105c) popup_fep_china_uni_window

0x65f2,	// (0x000210b8) popup_fep_japan_candidate_window_ParamLimits

0x65f2,	// (0x000210b8) popup_fep_japan_candidate_window

0x6612,	// (0x000210d8) popup_fep_japan_predictive_window_ParamLimits

0x6612,	// (0x000210d8) popup_fep_japan_predictive_window

0x6642,	// (0x00021108) popup_find_window

0x664f,	// (0x00021115) popup_grid_graphic_window_ParamLimits

0x664f,	// (0x00021115) popup_grid_graphic_window

0x6677,	// (0x0002113d) popup_large_graphic_colour_window

0x669d,	// (0x00021163) popup_menu_window_ParamLimits

0x669d,	// (0x00021163) popup_menu_window

0x6855,	// (0x0002131b) popup_note_image_window

0x6841,	// (0x00021307) popup_note_wait_window_ParamLimits

0x6841,	// (0x00021307) popup_note_wait_window

0x6841,	// (0x00021307) popup_note_window_ParamLimits

0x6841,	// (0x00021307) popup_note_window

0x68ab,	// (0x00021371) popup_query_code_window_ParamLimits

0x68ab,	// (0x00021371) popup_query_code_window

0x68bf,	// (0x00021385) popup_query_data_code_window_ParamLimits

0x68bf,	// (0x00021385) popup_query_data_code_window

0x68dc,	// (0x000213a2) popup_query_data_window_ParamLimits

0x68dc,	// (0x000213a2) popup_query_data_window

0x68f8,	// (0x000213be) popup_query_sat_info_window_ParamLimits

0x68f8,	// (0x000213be) popup_query_sat_info_window

0x6931,	// (0x000213f7) popup_snote_single_graphic_window_ParamLimits

0x6931,	// (0x000213f7) popup_snote_single_graphic_window

0x6931,	// (0x000213f7) popup_snote_single_text_window_ParamLimits

0x6931,	// (0x000213f7) popup_snote_single_text_window

0x6946,	// (0x0002140c) popup_sub_window_general

0x6a76,	// (0x0002153c) popup_window_general_ParamLimits

0x6a76,	// (0x0002153c) popup_window_general

0x9468,	// (0x00023f2e) power_save_pane

0x6390,	// (0x00020e56) control_pane_g1_ParamLimits

0x6390,	// (0x00020e56) control_pane_g1

0x63b7,	// (0x00020e7d) control_pane_g2_ParamLimits

0x63b7,	// (0x00020e7d) control_pane_g2

0x93cb,	// (0x00023e91) control_pane_g3_ParamLimits

0x93cb,	// (0x00023e91) control_pane_g3

0x0007,

0xf78e,	// (0x0002a254) control_pane_g_ParamLimits

0xf78e,	// (0x0002a254) control_pane_g

0x63fd,	// (0x00020ec3) control_pane_t1_ParamLimits

0x63fd,	// (0x00020ec3) control_pane_t1

0x6449,	// (0x00020f0f) control_pane_t2_ParamLimits

0x6449,	// (0x00020f0f) control_pane_t2

0x0002,

0xf79f,	// (0x0002a265) control_pane_t_ParamLimits

0xf79f,	// (0x0002a265) control_pane_t

0x92ec,	// (0x00023db2) navi_navi_volume_pane_cp1

0x92f5,	// (0x00023dbb) status_small_icon_pane

0x92fd,	// (0x00023dc3) status_small_pane_g1_ParamLimits

0x92fd,	// (0x00023dc3) status_small_pane_g1

0x9331,	// (0x00023df7) status_small_pane_g2_ParamLimits

0x9331,	// (0x00023df7) status_small_pane_g2

0x933d,	// (0x00023e03) status_small_pane_g3_ParamLimits

0x933d,	// (0x00023e03) status_small_pane_g3

0x9349,	// (0x00023e0f) status_small_pane_g4_ParamLimits

0x9349,	// (0x00023e0f) status_small_pane_g4

0x9355,	// (0x00023e1b) status_small_pane_g5_ParamLimits

0x9355,	// (0x00023e1b) status_small_pane_g5

0x9364,	// (0x00023e2a) status_small_pane_g6_ParamLimits

0x9364,	// (0x00023e2a) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002a243) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002a243) status_small_pane_g

0x9394,	// (0x00023e5a) status_small_pane_t1

0x93b7,	// (0x00023e7d) status_small_wait_pane_ParamLimits

0x93b7,	// (0x00023e7d) status_small_wait_pane

0x8b6f,	// (0x00023635) aid_levels_signal_ParamLimits

0x8b6f,	// (0x00023635) aid_levels_signal

0x8b7e,	// (0x00023644) signal_pane_g1_ParamLimits

0x8b7e,	// (0x00023644) signal_pane_g1

0x8b93,	// (0x00023659) signal_pane_g2_ParamLimits

0x8b93,	// (0x00023659) signal_pane_g2

0x0003,

0xf70e,	// (0x0002a1d4) signal_pane_g_ParamLimits

0xf70e,	// (0x0002a1d4) signal_pane_g

0x8bcb,	// (0x00023691) context_pane_g1

0x7b44,	// (0x0002260a) title_pane_g1

0x7b7a,	// (0x00022640) title_pane_t1

0x7be2,	// (0x000226a8) title_pane_t2

0x7c08,	// (0x000226ce) title_pane_t3

0x0002,

0xf55d,	// (0x0002a023) title_pane_t

0x9844,	// (0x0002430a) aid_levels_battery_ParamLimits

0x9844,	// (0x0002430a) aid_levels_battery

0x9855,	// (0x0002431b) battery_pane_g1_ParamLimits

0x9855,	// (0x0002431b) battery_pane_g1

0x986b,	// (0x00024331) battery_pane_g2_ParamLimits

0x986b,	// (0x00024331) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002a277) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002a277) battery_pane_g

0xab67,	// (0x0002562d) uni_indicator_pane_g1

0xab7c,	// (0x00025642) uni_indicator_pane_g2

0xab92,	// (0x00025658) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0002a3ed) uni_indicator_pane_g

0x8f80,	// (0x00023a46) navi_icon_pane_ParamLimits

0x8f80,	// (0x00023a46) navi_icon_pane

0x8ec9,	// (0x0002398f) navi_midp_pane

0x8f9c,	// (0x00023a62) navi_navi_pane

0x8fa6,	// (0x00023a6c) navi_text_pane_ParamLimits

0x8fa6,	// (0x00023a6c) navi_text_pane

0x7b30,	// (0x000225f6) status_small_wait_pane_g1

0x8037,	// (0x00022afd) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0002a3e8) status_small_wait_pane_g

0xa88c,	// (0x00025352) navi_navi_icon_text_pane

0xa894,	// (0x0002535a) navi_navi_pane_g1_ParamLimits

0xa894,	// (0x0002535a) navi_navi_pane_g1

0xa8a6,	// (0x0002536c) navi_navi_pane_g2_ParamLimits

0xa8a6,	// (0x0002536c) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0002a3b6) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0002a3b6) navi_navi_pane_g

0xa8b8,	// (0x0002537e) navi_navi_tabs_pane

0xa8c1,	// (0x00025387) navi_navi_text_pane

0xa88c,	// (0x00025352) navi_navi_volume_pane

0xa868,	// (0x0002532e) navi_text_pane_t1

0xa85c,	// (0x00025322) navi_icon_pane_g1

0xa7af,	// (0x00025275) navi_navi_text_pane_t1

0x6d0a,	// (0x000217d0) navi_navi_volume_pane_g1

0x6d12,	// (0x000217d8) volume_small_pane

0xa715,	// (0x000251db) navi_navi_icon_text_pane_g1

0xa71d,	// (0x000251e3) navi_navi_icon_text_pane_t1

0x8f9c,	// (0x00023a62) navi_tabs_2_long_pane

0x8f9c,	// (0x00023a62) navi_tabs_2_pane

0x8f9c,	// (0x00023a62) navi_tabs_3_long_pane

0x8f9c,	// (0x00023a62) navi_tabs_3_pane

0x8f9c,	// (0x00023a62) navi_tabs_4_pane

0x6cea,	// (0x000217b0) tabs_2_active_pane_ParamLimits

0x6cea,	// (0x000217b0) tabs_2_active_pane

0x6cfa,	// (0x000217c0) tabs_2_passive_pane_ParamLimits

0x6cfa,	// (0x000217c0) tabs_2_passive_pane

0x6cb8,	// (0x0002177e) tabs_3_active_pane_ParamLimits

0x6cb8,	// (0x0002177e) tabs_3_active_pane

0x6cc8,	// (0x0002178e) tabs_3_passive_pane_ParamLimits

0x6cc8,	// (0x0002178e) tabs_3_passive_pane

0x6cd9,	// (0x0002179f) tabs_3_passive_pane_cp_ParamLimits

0x6cd9,	// (0x0002179f) tabs_3_passive_pane_cp

0x6c74,	// (0x0002173a) tabs_4_active_pane_ParamLimits

0x6c74,	// (0x0002173a) tabs_4_active_pane

0x6c85,	// (0x0002174b) tabs_4_passive_pane_ParamLimits

0x6c85,	// (0x0002174b) tabs_4_passive_pane

0x6c96,	// (0x0002175c) tabs_4_passive_pane_cp_ParamLimits

0x6c96,	// (0x0002175c) tabs_4_passive_pane_cp

0x6ca7,	// (0x0002176d) tabs_4_passive_pane_cp2_ParamLimits

0x6ca7,	// (0x0002176d) tabs_4_passive_pane_cp2

0x6c50,	// (0x00021716) tabs_2_long_active_pane_ParamLimits

0x6c50,	// (0x00021716) tabs_2_long_active_pane

0x6c62,	// (0x00021728) tabs_2_long_passive_pane_ParamLimits

0x6c62,	// (0x00021728) tabs_2_long_passive_pane

0x6c11,	// (0x000216d7) tabs_3_long_active_pane_ParamLimits

0x6c11,	// (0x000216d7) tabs_3_long_active_pane

0x6c24,	// (0x000216ea) tabs_3_long_passive_pane_ParamLimits

0x6c24,	// (0x000216ea) tabs_3_long_passive_pane

0x6c3d,	// (0x00021703) tabs_3_long_passive_pane_cp_ParamLimits

0x6c3d,	// (0x00021703) tabs_3_long_passive_pane_cp

0x6bb7,	// (0x0002167d) volume_small_pane_g1

0x6bc0,	// (0x00021686) volume_small_pane_g2

0x6bc9,	// (0x0002168f) volume_small_pane_g3

0x6bd2,	// (0x00021698) volume_small_pane_g4

0x6bdb,	// (0x000216a1) volume_small_pane_g5

0x6be4,	// (0x000216aa) volume_small_pane_g6

0x6bed,	// (0x000216b3) volume_small_pane_g7

0x6bf6,	// (0x000216bc) volume_small_pane_g8

0x6bff,	// (0x000216c5) volume_small_pane_g9

0x6c08,	// (0x000216ce) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0002a382) volume_small_pane_g

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp2_ParamLimits

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp2

0x7c28,	// (0x000226ee) tabs_3_active_pane_g1

0x7c30,	// (0x000226f6) tabs_3_active_pane_t1

0x7c1a,	// (0x000226e0) bg_passive_tab_pane_cp2_ParamLimits

0x7c1a,	// (0x000226e0) bg_passive_tab_pane_cp2

0x7c28,	// (0x000226ee) tabs_3_passive_pane_g1

0x7c30,	// (0x000226f6) tabs_3_passive_pane_t1

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp3_ParamLimits

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp3

0x7c42,	// (0x00022708) tabs_4_active_pane_g1

0x7c4a,	// (0x00022710) tabs_4_active_pane_t1

0x7c1a,	// (0x000226e0) bg_passive_tab_pane_cp3_ParamLimits

0x7c1a,	// (0x000226e0) bg_passive_tab_pane_cp3

0x7c42,	// (0x00022708) tabs_4_1_passive_pane_g1

0x7c4a,	// (0x00022710) tabs_4_1_passive_pane_t1

0x944e,	// (0x00023f14) list_highlight_pane_cp2

0xae32,	// (0x000258f8) list_set_pane_ParamLimits

0xae32,	// (0x000258f8) list_set_pane

0xaed8,	// (0x0002599e) main_pane_set_t1_ParamLimits

0xaed8,	// (0x0002599e) main_pane_set_t1

0xaef8,	// (0x000259be) main_pane_set_t2_ParamLimits

0xaef8,	// (0x000259be) main_pane_set_t2

0xaf0c,	// (0x000259d2) main_pane_set_t3_ParamLimits

0xaf0c,	// (0x000259d2) main_pane_set_t3

0xaf1e,	// (0x000259e4) main_pane_set_t4_ParamLimits

0xaf1e,	// (0x000259e4) main_pane_set_t4

0x0003,

0xf98c,	// (0x0002a452) main_pane_set_t_ParamLimits

0xf98c,	// (0x0002a452) main_pane_set_t

0xaf30,	// (0x000259f6) setting_code_pane

0xaf3c,	// (0x00025a02) setting_slider_graphic_pane

0xaf3c,	// (0x00025a02) setting_slider_pane

0xaf3c,	// (0x00025a02) setting_text_pane

0xaf3c,	// (0x00025a02) setting_volume_pane

0x5e76,	// (0x0002093c) volume_set_pane

0x7c1a,	// (0x000226e0) bg_set_opt_pane_cp

0x5e7e,	// (0x00020944) setting_slider_pane_t1

0x5e97,	// (0x0002095d) setting_slider_pane_t2

0x5eb1,	// (0x00020977) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002a02a) setting_slider_pane_t

0x5ec9,	// (0x0002098f) slider_set_pane

0x7b3a,	// (0x00022600) bg_set_opt_pane_cp2

0x7c5c,	// (0x00022722) setting_slider_graphic_pane_g1

0x5edf,	// (0x000209a5) setting_slider_graphic_pane_t1

0x5eef,	// (0x000209b5) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002a031) setting_slider_graphic_pane_t

0x5eff,	// (0x000209c5) slider_set_pane_cp

0x7b3a,	// (0x00022600) input_focus_pane_cp1

0xadf1,	// (0x000258b7) list_set_text_pane

0x7b30,	// (0x000225f6) setting_text_pane_g1

0x7b3a,	// (0x00022600) input_focus_pane_cp2

0x7b30,	// (0x000225f6) setting_code_pane_g1

0x7c65,	// (0x0002272b) setting_code_pane_t1

0x4a48,	// (0x0001f50e) set_text_pane_t1_ParamLimits

0x4a48,	// (0x0001f50e) set_text_pane_t1

0x84ed,	// (0x00022fb3) set_opt_bg_pane_g1

0x84f5,	// (0x00022fbb) set_opt_bg_pane_g2

0xadcb,	// (0x00025891) set_opt_bg_pane_g3

0x8505,	// (0x00022fcb) set_opt_bg_pane_g4

0x850d,	// (0x00022fd3) set_opt_bg_pane_g5

0x8515,	// (0x00022fdb) set_opt_bg_pane_g6

0xadd5,	// (0x0002589b) set_opt_bg_pane_g7

0xaddd,	// (0x000258a3) set_opt_bg_pane_g8

0xade7,	// (0x000258ad) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0002a43f) set_opt_bg_pane_g

0xad7c,	// (0x00025842) slider_set_pane_g1

0x6d7f,	// (0x00021845) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0002a430) slider_set_pane_g

0x6d1b,	// (0x000217e1) volume_set_pane_g1

0x6d23,	// (0x000217e9) volume_set_pane_g2

0x6d2b,	// (0x000217f1) volume_set_pane_g3

0x6d33,	// (0x000217f9) volume_set_pane_g4

0x6d3b,	// (0x00021801) volume_set_pane_g5

0x6d43,	// (0x00021809) volume_set_pane_g6

0x6d4b,	// (0x00021811) volume_set_pane_g7

0x6d53,	// (0x00021819) volume_set_pane_g8

0x6d5b,	// (0x00021821) volume_set_pane_g9

0x6d63,	// (0x00021829) volume_set_pane_g10

0x0009,

0xf942,	// (0x0002a408) volume_set_pane_g

0x7c73,	// (0x00022739) indicator_pane_ParamLimits

0x7c73,	// (0x00022739) indicator_pane

0x7c7f,	// (0x00022745) main_idle_pane_g2_ParamLimits

0x7c7f,	// (0x00022745) main_idle_pane_g2

0x7ca7,	// (0x0002276d) main_pane_idle_g1_ParamLimits

0x7ca7,	// (0x0002276d) main_pane_idle_g1

0x7cb4,	// (0x0002277a) popup_clock_digital_analogue_window_ParamLimits

0x7cb4,	// (0x0002277a) popup_clock_digital_analogue_window

0x7ccb,	// (0x00022791) soft_indicator_pane_ParamLimits

0x7ccb,	// (0x00022791) soft_indicator_pane

0x7cd7,	// (0x0002279d) wallpaper_pane_ParamLimits

0x7cd7,	// (0x0002279d) wallpaper_pane

0x7b30,	// (0x000225f6) wallpaper_pane_g1

0x7ceb,	// (0x000227b1) indicator_pane_g1_ParamLimits

0x7ceb,	// (0x000227b1) indicator_pane_g1

0xb1cb,	// (0x00025c91) navi_navi_icon_text_pane_srt_g1

0x7d06,	// (0x000227cc) soft_indicator_pane_t1

0x7d20,	// (0x000227e6) aid_ps_area_pane

0x7d31,	// (0x000227f7) aid_ps_clock_pane

0x7d3f,	// (0x00022805) aid_ps_indicator_pane

0x7d4b,	// (0x00022811) indicator_ps_pane_ParamLimits

0x7d4b,	// (0x00022811) indicator_ps_pane

0x7d5a,	// (0x00022820) power_save_pane_g1_ParamLimits

0x7d5a,	// (0x00022820) power_save_pane_g1

0x7d66,	// (0x0002282c) power_save_pane_g2_ParamLimits

0x7d66,	// (0x0002282c) power_save_pane_g2

0x5a91,	// (0x00020557) aid_navinavi_width_pane

0x7d20,	// (0x000227e6) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002a036) power_save_pane_g_ParamLimits

0xf570,	// (0x0002a036) power_save_pane_g

0x7d74,	// (0x0002283a) power_save_pane_t1_ParamLimits

0x7d74,	// (0x0002283a) power_save_pane_t1

0x7d31,	// (0x000227f7) aid_ps_clock_pane_ParamLimits

0x7d3f,	// (0x00022805) aid_ps_indicator_pane_ParamLimits

0x7d86,	// (0x0002284c) power_save_pane_t4_ParamLimits

0x7d86,	// (0x0002284c) power_save_pane_t4

0x0001,

0xf575,	// (0x0002a03b) power_save_pane_t_ParamLimits

0xf575,	// (0x0002a03b) power_save_pane_t

0x7db0,	// (0x00022876) power_save_t3_ParamLimits

0x7db0,	// (0x00022876) power_save_t3

0x7d9b,	// (0x00022861) power_save_t2_ParamLimits

0x7d9b,	// (0x00022861) power_save_t2

0x7dc5,	// (0x0002288b) indicator_ps_pane_g1

0x7dce,	// (0x00022894) ai_gene_pane_ParamLimits

0x7dce,	// (0x00022894) ai_gene_pane

0x7dda,	// (0x000228a0) ai_links_pane_ParamLimits

0x7dda,	// (0x000228a0) ai_links_pane

0x7de6,	// (0x000228ac) indicator_pane_cp1_ParamLimits

0x7de6,	// (0x000228ac) indicator_pane_cp1

0x7df2,	// (0x000228b8) main_pane_idle_g1_cp_ParamLimits

0x7df2,	// (0x000228b8) main_pane_idle_g1_cp

0x7dfe,	// (0x000228c4) popup_ai_links_title_window

0x7e07,	// (0x000228cd) soft_indicator_pane_cp1_ParamLimits

0x7e07,	// (0x000228cd) soft_indicator_pane_cp1

0xab55,	// (0x0002561b) ai_links_pane_g1

0xab5e,	// (0x00025624) grid_ai_links_pane

0xab38,	// (0x000255fe) ai_gene_pane_1

0xab43,	// (0x00025609) ai_gene_pane_2

0xab4c,	// (0x00025612) list_highlight_pane_cp4

0xab1c,	// (0x000255e2) cell_ai_link_pane_ParamLimits

0xab1c,	// (0x000255e2) cell_ai_link_pane

0xab14,	// (0x000255da) cell_ai_link_pane_g1

0x8037,	// (0x00022afd) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0002a3e3) cell_ai_link_pane_g

0x7b3a,	// (0x00022600) grid_highlight_cp2

0x7b3a,	// (0x00022600) bg_popup_sub_pane_cp1

0x7e21,	// (0x000228e7) popup_ai_links_title_window_t1

0xaa62,	// (0x00025528) ai_gene_pane_1_g1_ParamLimits

0xaa62,	// (0x00025528) ai_gene_pane_1_g1

0xaa6e,	// (0x00025534) ai_gene_pane_1_g2_ParamLimits

0xaa6e,	// (0x00025534) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0002a3d9) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0002a3d9) ai_gene_pane_1_g

0xaa7b,	// (0x00025541) ai_gene_pane_1_t1_ParamLimits

0xaa7b,	// (0x00025541) ai_gene_pane_1_t1

0xaaaf,	// (0x00025575) grid_ai_soft_ind_pane

0xaa4d,	// (0x00025513) ai_gene_pane_2_t1_ParamLimits

0xaa4d,	// (0x00025513) ai_gene_pane_2_t1

0x7e30,	// (0x000228f6) main_pane_empty_t1_ParamLimits

0x7e30,	// (0x000228f6) main_pane_empty_t1

0x7e48,	// (0x0002290e) main_pane_empty_t2_ParamLimits

0x7e48,	// (0x0002290e) main_pane_empty_t2

0x7e5d,	// (0x00022923) main_pane_empty_t3_ParamLimits

0x7e5d,	// (0x00022923) main_pane_empty_t3

0x7e6f,	// (0x00022935) main_pane_empty_t4_ParamLimits

0x7e6f,	// (0x00022935) main_pane_empty_t4

0x7e81,	// (0x00022947) main_pane_empty_t5_ParamLimits

0x7e81,	// (0x00022947) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002a040) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002a040) main_pane_empty_t

0x853e,	// (0x00023004) bg_popup_window_pane_ParamLimits

0x853e,	// (0x00023004) bg_popup_window_pane

0xa7bd,	// (0x00025283) find_popup_pane_cp2_ParamLimits

0xa7bd,	// (0x00025283) find_popup_pane_cp2

0xa7c9,	// (0x0002528f) heading_pane_ParamLimits

0xa7c9,	// (0x0002528f) heading_pane

0x7b3a,	// (0x00022600) bg_popup_sub_pane

0xa737,	// (0x000251fd) bg_popup_window_pane_g1_ParamLimits

0xa737,	// (0x000251fd) bg_popup_window_pane_g1

0xa743,	// (0x00025209) bg_popup_window_pane_g2_ParamLimits

0xa743,	// (0x00025209) bg_popup_window_pane_g2

0xa74f,	// (0x00025215) bg_popup_window_pane_g3_ParamLimits

0xa74f,	// (0x00025215) bg_popup_window_pane_g3

0xa75b,	// (0x00025221) bg_popup_window_pane_g4_ParamLimits

0xa75b,	// (0x00025221) bg_popup_window_pane_g4

0xa767,	// (0x0002522d) bg_popup_window_pane_g5_ParamLimits

0xa767,	// (0x0002522d) bg_popup_window_pane_g5

0xa773,	// (0x00025239) bg_popup_window_pane_g6_ParamLimits

0xa773,	// (0x00025239) bg_popup_window_pane_g6

0xa77f,	// (0x00025245) bg_popup_window_pane_g7_ParamLimits

0xa77f,	// (0x00025245) bg_popup_window_pane_g7

0xa78b,	// (0x00025251) bg_popup_window_pane_g8_ParamLimits

0xa78b,	// (0x00025251) bg_popup_window_pane_g8

0xa797,	// (0x0002525d) bg_popup_window_pane_g9_ParamLimits

0xa797,	// (0x0002525d) bg_popup_window_pane_g9

0xa7a3,	// (0x00025269) bg_popup_window_pane_g10_ParamLimits

0xa7a3,	// (0x00025269) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0002a3a1) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0002a3a1) bg_popup_window_pane_g

0xa6cc,	// (0x00025192) bg_popup_heading_pane_ParamLimits

0xa6cc,	// (0x00025192) bg_popup_heading_pane

0x6dc5,	// (0x0002188b) tabs_4_passive_pane_cp_srt_ParamLimits

0x6dc5,	// (0x0002188b) tabs_4_passive_pane_cp_srt

0x6dd7,	// (0x0002189d) tabs_4_passive_pane_srt_ParamLimits

0xa6e0,	// (0x000251a6) heading_pane_g2

0x6dd7,	// (0x0002189d) tabs_4_passive_pane_srt

0x944e,	// (0x00023f14) bg_passive_tab_pane_cp3_srt_ParamLimits

0x944e,	// (0x00023f14) bg_passive_tab_pane_cp3_srt

0xa6e8,	// (0x000251ae) heading_pane_t1_ParamLimits

0xa6e8,	// (0x000251ae) heading_pane_t1

0xa6ff,	// (0x000251c5) heading_pane_t2_ParamLimits

0xa6ff,	// (0x000251c5) heading_pane_t2

0x0001,

0xf8d6,	// (0x0002a39c) heading_pane_t_ParamLimits

0xf8d6,	// (0x0002a39c) heading_pane_t

0xa1f9,	// (0x00024cbf) bg_popup_heading_pane_g1

0xa2a8,	// (0x00024d6e) bg_popup_heading_pane_g2

0xa2b2,	// (0x00024d78) bg_popup_heading_pane_g3

0xa2bc,	// (0x00024d82) bg_popup_heading_pane_g4

0xa2c6,	// (0x00024d8c) bg_popup_heading_pane_g5

0xa2d0,	// (0x00024d96) bg_popup_heading_pane_g6

0xa2d8,	// (0x00024d9e) bg_popup_heading_pane_g7

0xa2e0,	// (0x00024da6) bg_popup_heading_pane_g8

0xa2ea,	// (0x00024db0) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0002a358) bg_popup_heading_pane_g

0x9943,	// (0x00024409) bg_popup_sub_pane_g1

0x994b,	// (0x00024411) bg_popup_sub_pane_g2

0x9953,	// (0x00024419) bg_popup_sub_pane_g3

0x995b,	// (0x00024421) bg_popup_sub_pane_g4

0x9963,	// (0x00024429) bg_popup_sub_pane_g5

0x996b,	// (0x00024431) bg_popup_sub_pane_g6

0x9973,	// (0x00024439) bg_popup_sub_pane_g7

0x997b,	// (0x00024441) bg_popup_sub_pane_g8

0x9983,	// (0x00024449) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0002a332) bg_popup_sub_pane_g

0x7e95,	// (0x0002295b) bg_popup_window_pane_cp5_ParamLimits

0x7e95,	// (0x0002295b) bg_popup_window_pane_cp5

0x7eb1,	// (0x00022977) popup_note_window_g1_ParamLimits

0x7eb1,	// (0x00022977) popup_note_window_g1

0x7ebd,	// (0x00022983) popup_note_window_t1_ParamLimits

0x7ebd,	// (0x00022983) popup_note_window_t1

0x7ed3,	// (0x00022999) popup_note_window_t2_ParamLimits

0x7ed3,	// (0x00022999) popup_note_window_t2

0x7ee9,	// (0x000229af) popup_note_window_t3_ParamLimits

0x7ee9,	// (0x000229af) popup_note_window_t3

0x7eff,	// (0x000229c5) popup_note_window_t4_ParamLimits

0x7eff,	// (0x000229c5) popup_note_window_t4

0x7f27,	// (0x000229ed) popup_note_window_t5_ParamLimits

0x7f27,	// (0x000229ed) popup_note_window_t5

0x0004,

0xf585,	// (0x0002a04b) popup_note_window_t_ParamLimits

0xf585,	// (0x0002a04b) popup_note_window_t

0x7f4b,	// (0x00022a11) bg_popup_window_pane_cp6_ParamLimits

0x7f4b,	// (0x00022a11) bg_popup_window_pane_cp6

0xa175,	// (0x00024c3b) popup_note_image_window_g1_ParamLimits

0xa175,	// (0x00024c3b) popup_note_image_window_g1

0xa181,	// (0x00024c47) popup_note_image_window_g2_ParamLimits

0xa181,	// (0x00024c47) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0002a326) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0002a326) popup_note_image_window_g

0xa19a,	// (0x00024c60) popup_note_image_window_t1_ParamLimits

0xa19a,	// (0x00024c60) popup_note_image_window_t1

0xa1b3,	// (0x00024c79) popup_note_image_window_t2_ParamLimits

0xa1b3,	// (0x00024c79) popup_note_image_window_t2

0xa1cc,	// (0x00024c92) popup_note_image_window_t3_ParamLimits

0xa1cc,	// (0x00024c92) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0002a32b) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0002a32b) popup_note_image_window_t

0xa036,	// (0x00024afc) bg_popup_window_pane_cp7_ParamLimits

0xa036,	// (0x00024afc) bg_popup_window_pane_cp7

0xa066,	// (0x00024b2c) popup_note_wait_window_g1_ParamLimits

0xa066,	// (0x00024b2c) popup_note_wait_window_g1

0xa072,	// (0x00024b38) popup_note_wait_window_g2_ParamLimits

0xa072,	// (0x00024b38) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0002a314) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0002a314) popup_note_wait_window_g

0xa08a,	// (0x00024b50) popup_note_wait_window_t1_ParamLimits

0xa08a,	// (0x00024b50) popup_note_wait_window_t1

0xa0b1,	// (0x00024b77) popup_note_wait_window_t2_ParamLimits

0xa0b1,	// (0x00024b77) popup_note_wait_window_t2

0xa0ce,	// (0x00024b94) popup_note_wait_window_t3_ParamLimits

0xa0ce,	// (0x00024b94) popup_note_wait_window_t3

0xa0e1,	// (0x00024ba7) popup_note_wait_window_t4_ParamLimits

0xa0e1,	// (0x00024ba7) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0002a31b) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0002a31b) popup_note_wait_window_t

0xa106,	// (0x00024bcc) wait_bar_pane_ParamLimits

0xa106,	// (0x00024bcc) wait_bar_pane

0x7b3a,	// (0x00022600) wait_anim_pane

0x7b3a,	// (0x00022600) wait_border_pane

0x7b30,	// (0x000225f6) wait_anim_pane_g1

0x7b30,	// (0x000225f6) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002a1cf) wait_anim_pane_g

0x9fda,	// (0x00024aa0) wait_border_pane_g1

0x9fe5,	// (0x00024aab) wait_border_pane_g2

0x9fee,	// (0x00024ab4) wait_border_pane_g3

0x0002,

0xf847,	// (0x0002a30d) wait_border_pane_g

0x9e45,	// (0x0002490b) bg_popup_window_pane_cp16_ParamLimits

0x9e45,	// (0x0002490b) bg_popup_window_pane_cp16

0x9f45,	// (0x00024a0b) indicator_popup_pane_cp4_ParamLimits

0x9f45,	// (0x00024a0b) indicator_popup_pane_cp4

0x9f59,	// (0x00024a1f) popup_query_data_window_t1_ParamLimits

0x9f59,	// (0x00024a1f) popup_query_data_window_t1

0x9f6b,	// (0x00024a31) popup_query_data_window_t2_ParamLimits

0x9f6b,	// (0x00024a31) popup_query_data_window_t2

0x9f84,	// (0x00024a4a) popup_query_data_window_t3_ParamLimits

0x9f84,	// (0x00024a4a) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0002a306) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0002a306) popup_query_data_window_t

0x9f9e,	// (0x00024a64) query_popup_data_pane_ParamLimits

0x9f9e,	// (0x00024a64) query_popup_data_pane

0x9fb2,	// (0x00024a78) query_popup_data_pane_cp1_ParamLimits

0x9fb2,	// (0x00024a78) query_popup_data_pane_cp1

0x9e45,	// (0x0002490b) bg_popup_window_pane_cp10_ParamLimits

0x9e45,	// (0x0002490b) bg_popup_window_pane_cp10

0x9e77,	// (0x0002493d) indicator_popup_pane_ParamLimits

0x9e77,	// (0x0002493d) indicator_popup_pane

0x9e99,	// (0x0002495f) popup_query_code_window_t1_ParamLimits

0x9e99,	// (0x0002495f) popup_query_code_window_t1

0x9eb3,	// (0x00024979) popup_query_code_window_t2_ParamLimits

0x9eb3,	// (0x00024979) popup_query_code_window_t2

0x9efc,	// (0x000249c2) popup_query_code_window_t3_ParamLimits

0x9efc,	// (0x000249c2) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0002a2ff) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0002a2ff) popup_query_code_window_t

0x9f2b,	// (0x000249f1) query_popup_pane_ParamLimits

0x9f2b,	// (0x000249f1) query_popup_pane

0x7f4b,	// (0x00022a11) bg_popup_window_pane_cp15_ParamLimits

0x7f4b,	// (0x00022a11) bg_popup_window_pane_cp15

0x7f69,	// (0x00022a2f) indicator_popup_pane_cp1_ParamLimits

0x7f69,	// (0x00022a2f) indicator_popup_pane_cp1

0x7f7c,	// (0x00022a42) indicator_popup_pane_cp2_ParamLimits

0x7f7c,	// (0x00022a42) indicator_popup_pane_cp2

0x7f8f,	// (0x00022a55) popup_query_data_code_window_g1_ParamLimits

0x7f8f,	// (0x00022a55) popup_query_data_code_window_g1

0x7fa2,	// (0x00022a68) popup_query_data_code_window_t1_ParamLimits

0x7fa2,	// (0x00022a68) popup_query_data_code_window_t1

0x7fb4,	// (0x00022a7a) popup_query_data_code_window_t2_ParamLimits

0x7fb4,	// (0x00022a7a) popup_query_data_code_window_t2

0x7fc6,	// (0x00022a8c) popup_query_data_code_window_t3_ParamLimits

0x7fc6,	// (0x00022a8c) popup_query_data_code_window_t3

0x7fdc,	// (0x00022aa2) popup_query_data_code_window_t4_ParamLimits

0x7fdc,	// (0x00022aa2) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002a056) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002a056) popup_query_data_code_window_t

0x6ae0,	// (0x000215a6) list_single_midp_graphic_pane_g3

0x7ff4,	// (0x00022aba) query_popup_data_pane_cp2_ParamLimits

0x8007,	// (0x00022acd) query_popup_pane_cp2_ParamLimits

0x8007,	// (0x00022acd) query_popup_pane_cp2

0x7b3a,	// (0x00022600) bg_popup_window_pane_cp11

0x9e3d,	// (0x00024903) heading_pane_cp5

0x80ef,	// (0x00022bb5) listscroll_popup_info_pane

0x7b3a,	// (0x00022600) input_focus_pane_cp3

0x801a,	// (0x00022ae0) query_popup_pane_t1

0x8028,	// (0x00022aee) list_popup_info_pane_ParamLimits

0x8028,	// (0x00022aee) list_popup_info_pane

0x8037,	// (0x00022afd) listscroll_popup_info_pane_g1

0x803f,	// (0x00022b05) scroll_pane_cp7

0x8049,	// (0x00022b0f) popup_info_list_pane_t1_ParamLimits

0x8049,	// (0x00022b0f) popup_info_list_pane_t1

0x8063,	// (0x00022b29) popup_info_list_pane_t2_ParamLimits

0x8063,	// (0x00022b29) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002a05f) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002a05f) popup_info_list_pane_t

0x7b3a,	// (0x00022600) bg_popup_window_pane_cp12

0xb1e5,	// (0x00025cab) find_popup_pane

0x7c1a,	// (0x000226e0) bg_popup_window_pane_cp3

0x807d,	// (0x00022b43) heading_pane_cp3

0x8089,	// (0x00022b4f) listscroll_popup_graphic_pane

0x7b3a,	// (0x00022600) bg_popup_window_pane_cp4

0x80e5,	// (0x00022bab) heading_pane_cp4

0x80ef,	// (0x00022bb5) listscroll_popup_colour_pane

0x80f7,	// (0x00022bbd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x80f7,	// (0x00022bbd) cell_large_graphic_colour_none_popup_pane

0x810b,	// (0x00022bd1) grid_large_graphic_colour_popup_pane_ParamLimits

0x810b,	// (0x00022bd1) grid_large_graphic_colour_popup_pane

0x8137,	// (0x00022bfd) listscroll_popup_colour_pane_g1_ParamLimits

0x8137,	// (0x00022bfd) listscroll_popup_colour_pane_g1

0x814e,	// (0x00022c14) listscroll_popup_colour_pane_g2_ParamLimits

0x814e,	// (0x00022c14) listscroll_popup_colour_pane_g2

0x8165,	// (0x00022c2b) listscroll_popup_colour_pane_g3_ParamLimits

0x8165,	// (0x00022c2b) listscroll_popup_colour_pane_g3

0x8175,	// (0x00022c3b) listscroll_popup_colour_pane_g4_ParamLimits

0x8175,	// (0x00022c3b) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002a064) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002a064) listscroll_popup_colour_pane_g

0x8189,	// (0x00022c4f) scroll_pane_cp6_ParamLimits

0x8189,	// (0x00022c4f) scroll_pane_cp6

0x819b,	// (0x00022c61) cell_large_graphic_colour_popup_pane_ParamLimits

0x819b,	// (0x00022c61) cell_large_graphic_colour_popup_pane

0x81ba,	// (0x00022c80) cell_large_graphic_colour_none_popup_pane_t1

0x7b3a,	// (0x00022600) grid_highlight_pane_cp5

0x81c9,	// (0x00022c8f) cell_large_graphic_colour_popup_pane_g1

0x81d1,	// (0x00022c97) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002a06d) cell_large_graphic_colour_popup_pane_g

0x81d9,	// (0x00022c9f) cell_large_graphic_colour_popup_pane_g2_copy1

0x81e2,	// (0x00022ca8) grid_highlight_pane_cp4

0x81ea,	// (0x00022cb0) bg_popup_window_pane_cp8_ParamLimits

0x81ea,	// (0x00022cb0) bg_popup_window_pane_cp8

0x8205,	// (0x00022ccb) popup_snote_single_text_window_g1_ParamLimits

0x8205,	// (0x00022ccb) popup_snote_single_text_window_g1

0x8217,	// (0x00022cdd) popup_snote_single_text_window_t1_ParamLimits

0x8217,	// (0x00022cdd) popup_snote_single_text_window_t1

0x822a,	// (0x00022cf0) popup_snote_single_text_window_t2_ParamLimits

0x822a,	// (0x00022cf0) popup_snote_single_text_window_t2

0x823d,	// (0x00022d03) popup_snote_single_text_window_t3_ParamLimits

0x823d,	// (0x00022d03) popup_snote_single_text_window_t3

0x8276,	// (0x00022d3c) popup_snote_single_text_window_t4_ParamLimits

0x8276,	// (0x00022d3c) popup_snote_single_text_window_t4

0x82aa,	// (0x00022d70) popup_snote_single_text_window_t5_ParamLimits

0x82aa,	// (0x00022d70) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002a072) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002a072) popup_snote_single_text_window_t

0x82d9,	// (0x00022d9f) bg_popup_window_pane_cp9_ParamLimits

0x82d9,	// (0x00022d9f) bg_popup_window_pane_cp9

0x8205,	// (0x00022ccb) popup_snote_single_graphic_window_g1_ParamLimits

0x8205,	// (0x00022ccb) popup_snote_single_graphic_window_g1

0x82e7,	// (0x00022dad) popup_snote_single_graphic_window_g2_ParamLimits

0x82e7,	// (0x00022dad) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002a07d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002a07d) popup_snote_single_graphic_window_g

0x82f3,	// (0x00022db9) popup_snote_single_graphic_window_t1_ParamLimits

0x82f3,	// (0x00022db9) popup_snote_single_graphic_window_t1

0x8306,	// (0x00022dcc) popup_snote_single_graphic_window_t2_ParamLimits

0x8306,	// (0x00022dcc) popup_snote_single_graphic_window_t2

0x8319,	// (0x00022ddf) popup_snote_single_graphic_window_t3_ParamLimits

0x8319,	// (0x00022ddf) popup_snote_single_graphic_window_t3

0x8352,	// (0x00022e18) popup_snote_single_graphic_window_t4_ParamLimits

0x8352,	// (0x00022e18) popup_snote_single_graphic_window_t4

0x8386,	// (0x00022e4c) popup_snote_single_graphic_window_t5_ParamLimits

0x8386,	// (0x00022e4c) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002a082) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002a082) popup_snote_single_graphic_window_t

0xb129,	// (0x00025bef) grid_graphic_popup_pane_ParamLimits

0xb129,	// (0x00025bef) grid_graphic_popup_pane

0xb151,	// (0x00025c17) listscroll_popup_graphic_pane_g1_ParamLimits

0xb151,	// (0x00025c17) listscroll_popup_graphic_pane_g1

0xb165,	// (0x00025c2b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb165,	// (0x00025c2b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0002a47c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0002a47c) listscroll_popup_graphic_pane_g

0xb179,	// (0x00025c3f) scroll_pane_cp5

0xb0d2,	// (0x00025b98) cell_graphic_popup_pane_ParamLimits

0xb0d2,	// (0x00025b98) cell_graphic_popup_pane

0xb0b3,	// (0x00025b79) cell_graphic_popup_pane_g1

0xb0bb,	// (0x00025b81) cell_graphic_popup_pane_g2

0x81d9,	// (0x00022c9f) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0002a475) cell_graphic_popup_pane_g

0xb0c4,	// (0x00025b8a) cell_graphic_popup_pane_t2

0x81e2,	// (0x00022ca8) grid_highlight_pane_cp3

0x83c7,	// (0x00022e8d) list_gen_pane_ParamLimits

0x83c7,	// (0x00022e8d) list_gen_pane

0x83f9,	// (0x00022ebf) scroll_pane

0xb00b,	// (0x00025ad1) bg_list_pane_g1_ParamLimits

0xb00b,	// (0x00025ad1) bg_list_pane_g1

0xb028,	// (0x00025aee) bg_list_pane_g2_ParamLimits

0xb028,	// (0x00025aee) bg_list_pane_g2

0xb03d,	// (0x00025b03) bg_list_pane_g3_ParamLimits

0xb03d,	// (0x00025b03) bg_list_pane_g3

0xb051,	// (0x00025b17) bg_list_pane_g4_ParamLimits

0xb051,	// (0x00025b17) bg_list_pane_g4

0xb065,	// (0x00025b2b) bg_list_pane_g5_ParamLimits

0xb065,	// (0x00025b2b) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0002a46a) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0002a46a) bg_list_pane_g

0xafc2,	// (0x00025a88) list_double2_graphic_large_graphic_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double2_graphic_large_graphic_pane

0xafc2,	// (0x00025a88) list_double2_graphic_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double2_graphic_pane

0xafc2,	// (0x00025a88) list_double2_large_graphic_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double2_large_graphic_pane

0x53b2,	// (0x0001fe78) list_double2_pane_ParamLimits

0x53b2,	// (0x0001fe78) list_double2_pane

0xafc2,	// (0x00025a88) list_double_graphic_heading_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double_graphic_heading_pane

0xafc2,	// (0x00025a88) list_double_graphic_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double_graphic_pane

0xafc2,	// (0x00025a88) list_double_heading_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double_heading_pane

0xafc2,	// (0x00025a88) list_double_large_graphic_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double_large_graphic_pane

0xafc2,	// (0x00025a88) list_double_number_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double_number_pane

0xafc2,	// (0x00025a88) list_double_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double_pane

0xafc2,	// (0x00025a88) list_double_time_pane_ParamLimits

0xafc2,	// (0x00025a88) list_double_time_pane

0xafc2,	// (0x00025a88) list_setting_number_pane_ParamLimits

0xafc2,	// (0x00025a88) list_setting_number_pane

0xafc2,	// (0x00025a88) list_setting_pane_ParamLimits

0xafc2,	// (0x00025a88) list_setting_pane

0x53ed,	// (0x0001feb3) list_single_2graphic_pane_ParamLimits

0x53ed,	// (0x0001feb3) list_single_2graphic_pane

0x53ed,	// (0x0001feb3) list_single_graphic_heading_pane_ParamLimits

0x53ed,	// (0x0001feb3) list_single_graphic_heading_pane

0x53ed,	// (0x0001feb3) list_single_graphic_pane_ParamLimits

0x53ed,	// (0x0001feb3) list_single_graphic_pane

0x53ed,	// (0x0001feb3) list_single_heading_pane_ParamLimits

0x53ed,	// (0x0001feb3) list_single_heading_pane

0x5448,	// (0x0001ff0e) list_single_large_graphic_pane_ParamLimits

0x5448,	// (0x0001ff0e) list_single_large_graphic_pane

0x53ed,	// (0x0001feb3) list_single_number_heading_pane_ParamLimits

0x53ed,	// (0x0001feb3) list_single_number_heading_pane

0x53ed,	// (0x0001feb3) list_single_number_pane_ParamLimits

0x53ed,	// (0x0001feb3) list_single_number_pane

0x53ed,	// (0x0001feb3) list_single_pane_ParamLimits

0x53ed,	// (0x0001feb3) list_single_pane

0x7b3a,	// (0x00022600) list_highlight_pane_cp1

0x4a6f,	// (0x0001f535) list_single_pane_g1_ParamLimits

0x4a6f,	// (0x0001f535) list_single_pane_g1

0x4a7b,	// (0x0001f541) list_single_pane_g2_ParamLimits

0x4a7b,	// (0x0001f541) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002a094) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002a094) list_single_pane_g

0x539c,	// (0x0001fe62) list_single_pane_t1_ParamLimits

0x539c,	// (0x0001fe62) list_single_pane_t1

0x4a6f,	// (0x0001f535) list_single_number_pane_g1_ParamLimits

0x4a6f,	// (0x0001f535) list_single_number_pane_g1

0x4a7b,	// (0x0001f541) list_single_number_pane_g2_ParamLimits

0x4a7b,	// (0x0001f541) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002a094) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002a094) list_single_number_pane_g

0x5346,	// (0x0001fe0c) list_single_number_pane_t1_ParamLimits

0x5346,	// (0x0001fe0c) list_single_number_pane_t1

0x535c,	// (0x0001fe22) list_single_number_pane_t2_ParamLimits

0x535c,	// (0x0001fe22) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0002a42b) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0002a42b) list_single_number_pane_t

0x4a63,	// (0x0001f529) list_single_graphic_pane_g1_ParamLimits

0x4a63,	// (0x0001f529) list_single_graphic_pane_g1

0x4a6f,	// (0x0001f535) list_single_graphic_pane_g2_ParamLimits

0x4a6f,	// (0x0001f535) list_single_graphic_pane_g2

0x4a7b,	// (0x0001f541) list_single_graphic_pane_g3_ParamLimits

0x4a7b,	// (0x0001f541) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002a08d) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002a08d) list_single_graphic_pane_g

0x4a87,	// (0x0001f54d) list_single_graphic_pane_t1_ParamLimits

0x4a87,	// (0x0001f54d) list_single_graphic_pane_t1

0x4a6f,	// (0x0001f535) list_single_heading_pane_g1_ParamLimits

0x4a6f,	// (0x0001f535) list_single_heading_pane_g1

0x4a7b,	// (0x0001f541) list_single_heading_pane_g2_ParamLimits

0x4a7b,	// (0x0001f541) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002a094) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002a094) list_single_heading_pane_g

0x4a9d,	// (0x0001f563) list_single_heading_pane_t1_ParamLimits

0x4a9d,	// (0x0001f563) list_single_heading_pane_t1

0x4ab3,	// (0x0001f579) list_single_heading_pane_t2_ParamLimits

0x4ab3,	// (0x0001f579) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002a099) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002a099) list_single_heading_pane_t

0x4a6f,	// (0x0001f535) list_single_number_heading_pane_g1_ParamLimits

0x4a6f,	// (0x0001f535) list_single_number_heading_pane_g1

0x4a7b,	// (0x0001f541) list_single_number_heading_pane_g2_ParamLimits

0x4a7b,	// (0x0001f541) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002a094) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002a094) list_single_number_heading_pane_g

0x4a9d,	// (0x0001f563) list_single_number_heading_pane_t1_ParamLimits

0x4a9d,	// (0x0001f563) list_single_number_heading_pane_t1

0x4ac5,	// (0x0001f58b) list_single_number_heading_pane_t2_ParamLimits

0x4ac5,	// (0x0001f58b) list_single_number_heading_pane_t2

0x4ad7,	// (0x0001f59d) list_single_number_heading_pane_t3_ParamLimits

0x4ad7,	// (0x0001f59d) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002a09e) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002a09e) list_single_number_heading_pane_t

0x4ae9,	// (0x0001f5af) list_single_graphic_heading_pane_g1_ParamLimits

0x4ae9,	// (0x0001f5af) list_single_graphic_heading_pane_g1

0x4af5,	// (0x0001f5bb) list_single_graphic_heading_pane_g4_ParamLimits

0x4af5,	// (0x0001f5bb) list_single_graphic_heading_pane_g4

0x4a7b,	// (0x0001f541) list_single_graphic_heading_pane_g5_ParamLimits

0x4a7b,	// (0x0001f541) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002a0a5) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002a0a5) list_single_graphic_heading_pane_g

0x4a9d,	// (0x0001f563) list_single_graphic_heading_pane_t1_ParamLimits

0x4a9d,	// (0x0001f563) list_single_graphic_heading_pane_t1

0x4b06,	// (0x0001f5cc) list_single_graphic_heading_pane_t2_ParamLimits

0x4b06,	// (0x0001f5cc) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002a0ac) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002a0ac) list_single_graphic_heading_pane_t

0x4b18,	// (0x0001f5de) list_single_large_graphic_pane_g1_ParamLimits

0x4b18,	// (0x0001f5de) list_single_large_graphic_pane_g1

0x4b24,	// (0x0001f5ea) list_single_large_graphic_pane_g2_ParamLimits

0x4b24,	// (0x0001f5ea) list_single_large_graphic_pane_g2

0x4b30,	// (0x0001f5f6) list_single_large_graphic_pane_g3_ParamLimits

0x4b30,	// (0x0001f5f6) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002a0b1) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002a0b1) list_single_large_graphic_pane_g

0x9fe5,	// (0x00024aab) wait_border_pane_g2_copy1

0x4b3c,	// (0x0001f602) list_single_large_graphic_pane_g4_cp2

0x4b44,	// (0x0001f60a) list_single_large_graphic_pane_t1_ParamLimits

0x4b44,	// (0x0001f60a) list_single_large_graphic_pane_t1

0x4b5a,	// (0x0001f620) list_double_pane_g1_ParamLimits

0x4b5a,	// (0x0001f620) list_double_pane_g1

0x4b66,	// (0x0001f62c) list_double_pane_g2_ParamLimits

0x4b66,	// (0x0001f62c) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002a0b8) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002a0b8) list_double_pane_g

0x4b72,	// (0x0001f638) list_double_pane_t1_ParamLimits

0x4b72,	// (0x0001f638) list_double_pane_t1

0x4b88,	// (0x0001f64e) list_double_pane_t2_ParamLimits

0x4b88,	// (0x0001f64e) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002a0bd) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002a0bd) list_double_pane_t

0x4b9a,	// (0x0001f660) list_double2_pane_g1_ParamLimits

0x4b9a,	// (0x0001f660) list_double2_pane_g1

0x4bab,	// (0x0001f671) list_double2_pane_g2_ParamLimits

0x4bab,	// (0x0001f671) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002a0c2) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002a0c2) list_double2_pane_g

0x4bb7,	// (0x0001f67d) list_double2_pane_t1_ParamLimits

0x4bb7,	// (0x0001f67d) list_double2_pane_t1

0x4bcd,	// (0x0001f693) list_double2_pane_t2_ParamLimits

0x4bcd,	// (0x0001f693) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002a0c7) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002a0c7) list_double2_pane_t

0x4b5a,	// (0x0001f620) list_double_number_pane_g1_ParamLimits

0x4b5a,	// (0x0001f620) list_double_number_pane_g1

0x4b66,	// (0x0001f62c) list_double_number_pane_g2_ParamLimits

0x4b66,	// (0x0001f62c) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002a0b8) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002a0b8) list_double_number_pane_g

0x4bdf,	// (0x0001f6a5) list_double_number_pane_t1_ParamLimits

0x4bdf,	// (0x0001f6a5) list_double_number_pane_t1

0x4bf1,	// (0x0001f6b7) list_double_number_pane_t2_ParamLimits

0x4bf1,	// (0x0001f6b7) list_double_number_pane_t2

0x4c07,	// (0x0001f6cd) list_double_number_pane_t3_ParamLimits

0x4c07,	// (0x0001f6cd) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002a0cc) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002a0cc) list_double_number_pane_t

0x4c19,	// (0x0001f6df) list_double_graphic_pane_g1_ParamLimits

0x4c19,	// (0x0001f6df) list_double_graphic_pane_g1

0x4c25,	// (0x0001f6eb) list_double_graphic_pane_g2_ParamLimits

0x4c25,	// (0x0001f6eb) list_double_graphic_pane_g2

0x4c34,	// (0x0001f6fa) list_double_graphic_pane_g3_ParamLimits

0x4c34,	// (0x0001f6fa) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002a0d3) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002a0d3) list_double_graphic_pane_g

0x4c4c,	// (0x0001f712) list_double_graphic_pane_t1_ParamLimits

0x4c4c,	// (0x0001f712) list_double_graphic_pane_t1

0x4c62,	// (0x0001f728) list_double_graphic_pane_t2_ParamLimits

0x4c62,	// (0x0001f728) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002a0dc) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002a0dc) list_double_graphic_pane_t

0x4c74,	// (0x0001f73a) list_double2_graphic_pane_g1_ParamLimits

0x4c74,	// (0x0001f73a) list_double2_graphic_pane_g1

0x4c80,	// (0x0001f746) list_double2_graphic_pane_g2_ParamLimits

0x4c80,	// (0x0001f746) list_double2_graphic_pane_g2

0x4c8c,	// (0x0001f752) list_double2_graphic_pane_g3_ParamLimits

0x4c8c,	// (0x0001f752) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002a0e1) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002a0e1) list_double2_graphic_pane_g

0x4c98,	// (0x0001f75e) list_double2_graphic_pane_t1_ParamLimits

0x4c98,	// (0x0001f75e) list_double2_graphic_pane_t1

0x4cae,	// (0x0001f774) list_double2_graphic_pane_t2_ParamLimits

0x4cae,	// (0x0001f774) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002a0e8) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002a0e8) list_double2_graphic_pane_t

0x4cc0,	// (0x0001f786) list_double_large_graphic_pane_g1_ParamLimits

0x4cc0,	// (0x0001f786) list_double_large_graphic_pane_g1

0x4ce9,	// (0x0001f7af) list_double_large_graphic_pane_g2_ParamLimits

0x4ce9,	// (0x0001f7af) list_double_large_graphic_pane_g2

0x4b66,	// (0x0001f62c) list_double_large_graphic_pane_g3_ParamLimits

0x4b66,	// (0x0001f62c) list_double_large_graphic_pane_g3

0x4cfa,	// (0x0001f7c0) list_double_large_graphic_pane_g4_ParamLimits

0x4cfa,	// (0x0001f7c0) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002a0ed) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002a0ed) list_double_large_graphic_pane_g

0x4d1f,	// (0x0001f7e5) list_double_large_graphic_pane_t1_ParamLimits

0x4d1f,	// (0x0001f7e5) list_double_large_graphic_pane_t1

0x4d38,	// (0x0001f7fe) list_double_large_graphic_pane_t2_ParamLimits

0x4d38,	// (0x0001f7fe) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002a0f8) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002a0f8) list_double_large_graphic_pane_t

0x4d4a,	// (0x0001f810) list_double2_large_graphic_pane_g1_ParamLimits

0x4d4a,	// (0x0001f810) list_double2_large_graphic_pane_g1

0x4d56,	// (0x0001f81c) list_double2_large_graphic_pane_g2_ParamLimits

0x4d56,	// (0x0001f81c) list_double2_large_graphic_pane_g2

0x4c8c,	// (0x0001f752) list_double2_large_graphic_pane_g3_ParamLimits

0x4c8c,	// (0x0001f752) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002a0fd) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002a0fd) list_double2_large_graphic_pane_g

0x4d67,	// (0x0001f82d) list_double2_large_graphic_pane_t1_ParamLimits

0x4d67,	// (0x0001f82d) list_double2_large_graphic_pane_t1

0x4d7d,	// (0x0001f843) list_double2_large_graphic_pane_t2_ParamLimits

0x4d7d,	// (0x0001f843) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002a104) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002a104) list_double2_large_graphic_pane_t

0x4d8f,	// (0x0001f855) list_double_heading_pane_g1_ParamLimits

0x4d8f,	// (0x0001f855) list_double_heading_pane_g1

0x4da0,	// (0x0001f866) list_double_heading_pane_g2_ParamLimits

0x4da0,	// (0x0001f866) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002a109) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002a109) list_double_heading_pane_g

0x4dac,	// (0x0001f872) list_double_heading_pane_t1_ParamLimits

0x4dac,	// (0x0001f872) list_double_heading_pane_t1

0x4dc2,	// (0x0001f888) list_double_heading_pane_t2_ParamLimits

0x4dc2,	// (0x0001f888) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002a10e) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002a10e) list_double_heading_pane_t

0x4c74,	// (0x0001f73a) list_double_graphic_heading_pane_g1_ParamLimits

0x4c74,	// (0x0001f73a) list_double_graphic_heading_pane_g1

0x4d8f,	// (0x0001f855) list_double_graphic_heading_pane_g2_ParamLimits

0x4d8f,	// (0x0001f855) list_double_graphic_heading_pane_g2

0x4da0,	// (0x0001f866) list_double_graphic_heading_pane_g3_ParamLimits

0x4da0,	// (0x0001f866) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002a113) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002a113) list_double_graphic_heading_pane_g

0x4dd4,	// (0x0001f89a) list_double_graphic_heading_pane_t1_ParamLimits

0x4dd4,	// (0x0001f89a) list_double_graphic_heading_pane_t1

0x4cae,	// (0x0001f774) list_double_graphic_heading_pane_t2_ParamLimits

0x4cae,	// (0x0001f774) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002a11a) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002a11a) list_double_graphic_heading_pane_t

0x4ce9,	// (0x0001f7af) list_double_time_pane_g1_ParamLimits

0x4ce9,	// (0x0001f7af) list_double_time_pane_g1

0x4b66,	// (0x0001f62c) list_double_time_pane_g2_ParamLimits

0x4b66,	// (0x0001f62c) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002a11f) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002a11f) list_double_time_pane_g

0x4dea,	// (0x0001f8b0) list_double_time_pane_t1_ParamLimits

0x4dea,	// (0x0001f8b0) list_double_time_pane_t1

0x4e00,	// (0x0001f8c6) list_double_time_pane_t2_ParamLimits

0x4e00,	// (0x0001f8c6) list_double_time_pane_t2

0x4e12,	// (0x0001f8d8) list_double_time_pane_t3_ParamLimits

0x4e12,	// (0x0001f8d8) list_double_time_pane_t3

0x4e24,	// (0x0001f8ea) list_double_time_pane_t4_ParamLimits

0x4e24,	// (0x0001f8ea) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002a124) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002a124) list_double_time_pane_t

0x4c80,	// (0x0001f746) list_setting_pane_g1_ParamLimits

0x4c80,	// (0x0001f746) list_setting_pane_g1

0x4c8c,	// (0x0001f752) list_setting_pane_g2_ParamLimits

0x4c8c,	// (0x0001f752) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002a12d) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002a12d) list_setting_pane_g

0x4e36,	// (0x0001f8fc) list_setting_pane_t1_ParamLimits

0x4e36,	// (0x0001f8fc) list_setting_pane_t1

0x4e50,	// (0x0001f916) list_setting_pane_t2_ParamLimits

0x4e50,	// (0x0001f916) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002a132) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002a132) list_setting_pane_t

0x4e8f,	// (0x0001f955) set_value_pane_cp_ParamLimits

0x4e8f,	// (0x0001f955) set_value_pane_cp

0x4e9b,	// (0x0001f961) list_setting_number_pane_g1_ParamLimits

0x4e9b,	// (0x0001f961) list_setting_number_pane_g1

0x4ea7,	// (0x0001f96d) list_setting_number_pane_g2_ParamLimits

0x4ea7,	// (0x0001f96d) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002a139) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002a139) list_setting_number_pane_g

0x4eb3,	// (0x0001f979) list_setting_number_pane_t1_ParamLimits

0x4eb3,	// (0x0001f979) list_setting_number_pane_t1

0x4ecc,	// (0x0001f992) list_setting_number_pane_t2_ParamLimits

0x4ecc,	// (0x0001f992) list_setting_number_pane_t2

0x4ee6,	// (0x0001f9ac) list_setting_number_pane_t3_ParamLimits

0x4ee6,	// (0x0001f9ac) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002a13e) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002a13e) list_setting_number_pane_t

0x4e8f,	// (0x0001f955) set_value_pane_ParamLimits

0x4e8f,	// (0x0001f955) set_value_pane

0x842d,	// (0x00022ef3) bg_set_opt_pane_ParamLimits

0x842d,	// (0x00022ef3) bg_set_opt_pane

0x4f29,	// (0x0001f9ef) set_value_pane_t1

0x844e,	// (0x00022f14) slider_set_pane_cp3

0x8457,	// (0x00022f1d) volume_small_pane_cp

0x8460,	// (0x00022f26) list_form_gen_pane

0x8469,	// (0x00022f2f) scroll_pane_cp8

0x4f3f,	// (0x0001fa05) form_field_data_pane_ParamLimits

0x4f3f,	// (0x0001fa05) form_field_data_pane

0x4f5f,	// (0x0001fa25) form_field_data_wide_pane_ParamLimits

0x4f5f,	// (0x0001fa25) form_field_data_wide_pane

0x4f80,	// (0x0001fa46) form_field_popup_pane_ParamLimits

0x4f80,	// (0x0001fa46) form_field_popup_pane

0x4fa0,	// (0x0001fa66) form_field_popup_wide_pane_ParamLimits

0x4fa0,	// (0x0001fa66) form_field_popup_wide_pane

0x4fbd,	// (0x0001fa83) form_field_slider_pane_ParamLimits

0x4fbd,	// (0x0001fa83) form_field_slider_pane

0x4fd0,	// (0x0001fa96) form_field_slider_wide_pane_ParamLimits

0x4fd0,	// (0x0001fa96) form_field_slider_wide_pane

0x847a,	// (0x00022f40) data_form_pane

0x4fed,	// (0x0001fab3) form_field_data_pane_t1

0x8486,	// (0x00022f4c) input_focus_pane

0x8494,	// (0x00022f5a) data_form_wide_pane

0x5011,	// (0x0001fad7) form_field_data_wide_pane_t1

0x81f7,	// (0x00022cbd) input_focus_pane_cp6

0x5033,	// (0x0001faf9) form_field_popup_pane_t1

0x8486,	// (0x00022f4c) input_focus_pane_cp7

0x84c0,	// (0x00022f86) list_form_pane

0x5053,	// (0x0001fb19) form_field_popup_wide_pane_t1

0x8486,	// (0x00022f4c) input_focus_pane_cp8

0x84cc,	// (0x00022f92) list_form_wide_pane

0x5070,	// (0x0001fb36) form_field_slider_pane_t1_ParamLimits

0x5070,	// (0x0001fb36) form_field_slider_pane_t1

0x5086,	// (0x0001fb4c) form_field_slider_pane_t2_ParamLimits

0x5086,	// (0x0001fb4c) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002a14e) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002a14e) form_field_slider_pane_t

0x7e95,	// (0x0002295b) input_focus_pane_cp9_ParamLimits

0x7e95,	// (0x0002295b) input_focus_pane_cp9

0x509b,	// (0x0001fb61) slider_cont_pane_ParamLimits

0x509b,	// (0x0001fb61) slider_cont_pane

0x84db,	// (0x00022fa1) form_field_slider_wide_pane_t1_ParamLimits

0x84db,	// (0x00022fa1) form_field_slider_wide_pane_t1

0x50af,	// (0x0001fb75) form_field_slider_wide_pane_t2_ParamLimits

0x50af,	// (0x0001fb75) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002a153) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002a153) form_field_slider_wide_pane_t

0x7e95,	// (0x0002295b) input_focus_pane_cp10_ParamLimits

0x7e95,	// (0x0002295b) input_focus_pane_cp10

0x50c1,	// (0x0001fb87) slider_cont_pane_cp1_ParamLimits

0x50c1,	// (0x0001fb87) slider_cont_pane_cp1

0x50d5,	// (0x0001fb9b) slider_form_pane_cp

0x84ed,	// (0x00022fb3) input_focus_pane_g1

0x84f5,	// (0x00022fbb) input_focus_pane_g2

0x84fd,	// (0x00022fc3) input_focus_pane_g3

0x8505,	// (0x00022fcb) input_focus_pane_g4

0x850d,	// (0x00022fd3) input_focus_pane_g5

0x8515,	// (0x00022fdb) input_focus_pane_g6

0x851d,	// (0x00022fe3) input_focus_pane_g7

0x8525,	// (0x00022feb) input_focus_pane_g8

0x852d,	// (0x00022ff3) input_focus_pane_g9

0x7b30,	// (0x000225f6) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002a158) input_focus_pane_g

0x9fee,	// (0x00024ab4) wait_border_pane_g3_copy1

0x50dd,	// (0x0001fba3) data_form_pane_t1

0x7b30,	// (0x000225f6) wait_anim_pane_g1_copy1

0x536e,	// (0x0001fe34) data_form_wide_pane_t1

0x50f8,	// (0x0001fbbe) list_form_graphic_pane_cp_ParamLimits

0x50f8,	// (0x0001fbbe) list_form_graphic_pane_cp

0xaf66,	// (0x00025a2c) slider_form_pane_g1

0xaf6f,	// (0x00025a35) slider_form_pane_g2

0x0006,

0xf995,	// (0x0002a45b) slider_form_pane_g

0x5111,	// (0x0001fbd7) list_form_graphic_pane_ParamLimits

0x5111,	// (0x0001fbd7) list_form_graphic_pane

0x512d,	// (0x0001fbf3) list_form_graphic_pane_g1

0x5135,	// (0x0001fbfb) list_form_graphic_pane_t1_ParamLimits

0x5135,	// (0x0001fbfb) list_form_graphic_pane_t1

0x7c1a,	// (0x000226e0) list_highlight_pane_cp5_ParamLimits

0x7c1a,	// (0x000226e0) list_highlight_pane_cp5

0x514a,	// (0x0001fc10) find_pane_g1

0x8535,	// (0x00022ffb) input_find_pane

0x5153,	// (0x0001fc19) input_find_pane_g1_ParamLimits

0x5153,	// (0x0001fc19) input_find_pane_g1

0x515f,	// (0x0001fc25) input_find_pane_t1_ParamLimits

0x515f,	// (0x0001fc25) input_find_pane_t1

0x5174,	// (0x0001fc3a) input_find_pane_t2_ParamLimits

0x5174,	// (0x0001fc3a) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002a16d) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002a16d) input_find_pane_t

0x853e,	// (0x00023004) input_focus_pane_cp5_ParamLimits

0x853e,	// (0x00023004) input_focus_pane_cp5

0x8558,	// (0x0002301e) bg_popup_window_pane_cp2_ParamLimits

0x8558,	// (0x0002301e) bg_popup_window_pane_cp2

0x8565,	// (0x0002302b) listscroll_menu_pane_ParamLimits

0x8565,	// (0x0002302b) listscroll_menu_pane

0x8571,	// (0x00023037) popup_submenu_window_ParamLimits

0x8571,	// (0x00023037) popup_submenu_window

0x859d,	// (0x00023063) find_popup_pane_g1

0x85a5,	// (0x0002306b) input_popup_find_pane_cp

0x853e,	// (0x00023004) input_focus_pane_cp4_ParamLimits

0x853e,	// (0x00023004) input_focus_pane_cp4

0x85bb,	// (0x00023081) input_popup_find_pane_t1_ParamLimits

0x85bb,	// (0x00023081) input_popup_find_pane_t1

0x7b3a,	// (0x00022600) bg_popup_sub_pane_cp

0x85e9,	// (0x000230af) listscroll_popup_sub_pane

0x85f1,	// (0x000230b7) list_submenu_pane_ParamLimits

0x85f1,	// (0x000230b7) list_submenu_pane

0x8602,	// (0x000230c8) scroll_pane_cp4

0x860a,	// (0x000230d0) list_single_popup_submenu_pane_ParamLimits

0x860a,	// (0x000230d0) list_single_popup_submenu_pane

0x861e,	// (0x000230e4) list_single_popup_submenu_pane_g1

0x8626,	// (0x000230ec) list_single_popup_submenu_pane_t1_ParamLimits

0x8626,	// (0x000230ec) list_single_popup_submenu_pane_t1

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp1_ParamLimits

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp1

0x863b,	// (0x00023101) tabs_2_active_pane_g1

0x8643,	// (0x00023109) tabs_2_active_pane_t1

0x7c1a,	// (0x000226e0) bg_passive_tab_pane_cp1_ParamLimits

0x7c1a,	// (0x000226e0) bg_passive_tab_pane_cp1

0x863b,	// (0x00023101) tabs_2_passive_pane_g1

0x8643,	// (0x00023109) tabs_2_passive_pane_t1

0x8655,	// (0x0002311b) bg_active_tab_pane_cp4

0x8663,	// (0x00023129) tabs_2_long_active_pane_t1

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp4

0x998b,	// (0x00024451) list_single_midp_graphic_pane_g4_ParamLimits

0x8655,	// (0x0002311b) bg_active_tab_pane_cp5

0x8682,	// (0x00023148) tabs_3_long_active_pane_t1

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp5

0x998b,	// (0x00024451) list_single_midp_graphic_pane_g4

0x7c1a,	// (0x000226e0) bg_popup_window_pane_cp13_ParamLimits

0x7c1a,	// (0x000226e0) bg_popup_window_pane_cp13

0x869d,	// (0x00023163) listscroll_popup_fast_pane_ParamLimits

0x869d,	// (0x00023163) listscroll_popup_fast_pane

0x86ac,	// (0x00023172) grid_popup_fast_pane_ParamLimits

0x86ac,	// (0x00023172) grid_popup_fast_pane

0x86be,	// (0x00023184) scroll_pane_cp9_ParamLimits

0x86be,	// (0x00023184) scroll_pane_cp9

0xc898,	// (0x0002735e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc898,	// (0x0002735e) list_single_graphic_hl_pane_t1_cp2

0x86e2,	// (0x000231a8) input_focus_pane_cp20_ParamLimits

0x86e2,	// (0x000231a8) input_focus_pane_cp20

0x86f0,	// (0x000231b6) query_popup_data_pane_t1_ParamLimits

0x86f0,	// (0x000231b6) query_popup_data_pane_t1

0x8703,	// (0x000231c9) query_popup_data_pane_t2_ParamLimits

0x8703,	// (0x000231c9) query_popup_data_pane_t2

0x8749,	// (0x0002320f) query_popup_data_pane_t3_ParamLimits

0x8749,	// (0x0002320f) query_popup_data_pane_t3

0x878a,	// (0x00023250) query_popup_data_pane_t4_ParamLimits

0x878a,	// (0x00023250) query_popup_data_pane_t4

0x87c6,	// (0x0002328c) query_popup_data_pane_t5_ParamLimits

0x87c6,	// (0x0002328c) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002a172) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002a172) query_popup_data_pane_t

0x84ed,	// (0x00022fb3) bg_set_opt_pane_g1

0x84f5,	// (0x00022fbb) bg_set_opt_pane_g2

0x84fd,	// (0x00022fc3) bg_set_opt_pane_g3

0x8505,	// (0x00022fcb) bg_set_opt_pane_g4

0x850d,	// (0x00022fd3) bg_set_opt_pane_g5

0x8515,	// (0x00022fdb) bg_set_opt_pane_g6

0x851d,	// (0x00022fe3) bg_set_opt_pane_g7

0x8525,	// (0x00022feb) bg_set_opt_pane_g8

0x852d,	// (0x00022ff3) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002a17d) bg_set_opt_pane_g

0x61a6,	// (0x00020c6c) control_top_pane_stacon_ParamLimits

0x61a6,	// (0x00020c6c) control_top_pane_stacon

0x61f9,	// (0x00020cbf) signal_pane_stacon_ParamLimits

0x61f9,	// (0x00020cbf) signal_pane_stacon

0x8da7,	// (0x0002386d) stacon_top_pane_g1_ParamLimits

0x8da7,	// (0x0002386d) stacon_top_pane_g1

0x621e,	// (0x00020ce4) title_pane_stacon_ParamLimits

0x621e,	// (0x00020ce4) title_pane_stacon

0x6248,	// (0x00020d0e) uni_indicator_pane_stacon_ParamLimits

0x6248,	// (0x00020d0e) uni_indicator_pane_stacon

0x625d,	// (0x00020d23) battery_pane_stacon_ParamLimits

0x625d,	// (0x00020d23) battery_pane_stacon

0x62a1,	// (0x00020d67) control_bottom_pane_stacon_ParamLimits

0x62a1,	// (0x00020d67) control_bottom_pane_stacon

0x62c4,	// (0x00020d8a) navi_pane_stacon_ParamLimits

0x62c4,	// (0x00020d8a) navi_pane_stacon

0x8dc9,	// (0x0002388f) stacon_bottom_pane_g1_ParamLimits

0x8dc9,	// (0x0002388f) stacon_bottom_pane_g1

0x5f07,	// (0x000209cd) aid_levels_signal_lsc_ParamLimits

0x5f07,	// (0x000209cd) aid_levels_signal_lsc

0x5f1e,	// (0x000209e4) signal_pane_stacon_g1_ParamLimits

0x5f1e,	// (0x000209e4) signal_pane_stacon_g1

0x5f32,	// (0x000209f8) signal_pane_stacon_g2_ParamLimits

0x5f32,	// (0x000209f8) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002a190) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002a190) signal_pane_stacon_g

0x5f67,	// (0x00020a2d) title_pane_stacon_t1_ParamLimits

0x5f67,	// (0x00020a2d) title_pane_stacon_t1

0x880a,	// (0x000232d0) uni_indicator_pane_stacon_g1

0x8814,	// (0x000232da) uni_indicator_pane_stacon_g2

0x881e,	// (0x000232e4) uni_indicator_pane_stacon_g3

0x8828,	// (0x000232ee) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002a19c) uni_indicator_pane_stacon_g

0x5f8c,	// (0x00020a52) control_top_pane_stacon_g1

0x5f94,	// (0x00020a5a) control_top_pane_stacon_t1_ParamLimits

0x5f94,	// (0x00020a5a) control_top_pane_stacon_t1

0x5fcb,	// (0x00020a91) aid_levels_battery_lsc_ParamLimits

0x5fcb,	// (0x00020a91) aid_levels_battery_lsc

0x5fe3,	// (0x00020aa9) battery_pane_stacon_g1_ParamLimits

0x5fe3,	// (0x00020aa9) battery_pane_stacon_g1

0x5ff6,	// (0x00020abc) battery_pane_stacon_g2_ParamLimits

0x5ff6,	// (0x00020abc) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002a1a5) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002a1a5) battery_pane_stacon_g

0x6034,	// (0x00020afa) navi_icon_pane_stacon

0x6048,	// (0x00020b0e) navi_navi_pane_stacon

0x6034,	// (0x00020afa) navi_text_pane_stacon

0x5f8c,	// (0x00020a52) control_bottom_pane_stacon_g1

0x605c,	// (0x00020b22) control_bottom_pane_stacon_t1_ParamLimits

0x605c,	// (0x00020b22) control_bottom_pane_stacon_t1

0x884c,	// (0x00023312) grid_app_pane_ParamLimits

0x884c,	// (0x00023312) grid_app_pane

0x8870,	// (0x00023336) scroll_pane_cp15_ParamLimits

0x8870,	// (0x00023336) scroll_pane_cp15

0x8885,	// (0x0002334b) cell_app_pane_ParamLimits

0x8885,	// (0x0002334b) cell_app_pane

0x88a9,	// (0x0002336f) cell_app_pane_g1_ParamLimits

0x88a9,	// (0x0002336f) cell_app_pane_g1

0x88c9,	// (0x0002338f) cell_app_pane_g2_ParamLimits

0x88c9,	// (0x0002338f) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002a1aa) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002a1aa) cell_app_pane_g

0x88d5,	// (0x0002339b) cell_app_pane_t1_ParamLimits

0x88d5,	// (0x0002339b) cell_app_pane_t1

0x88ec,	// (0x000233b2) grid_highlight_pane_ParamLimits

0x88ec,	// (0x000233b2) grid_highlight_pane

0x84ed,	// (0x00022fb3) cell_highlight_pane_g1

0x84f5,	// (0x00022fbb) cell_highlight_pane_g2

0x84fd,	// (0x00022fc3) cell_highlight_pane_g3

0x8505,	// (0x00022fcb) cell_highlight_pane_g4

0x850d,	// (0x00022fd3) cell_highlight_pane_g5

0x8515,	// (0x00022fdb) cell_highlight_pane_g6

0x851d,	// (0x00022fe3) cell_highlight_pane_g7

0x8525,	// (0x00022feb) cell_highlight_pane_g8

0x852d,	// (0x00022ff3) cell_highlight_pane_g9

0x7b30,	// (0x000225f6) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002a158) cell_highlight_pane_g

0x88fd,	// (0x000233c3) bg_scroll_pane

0x60a6,	// (0x00020b6c) scroll_handle_pane

0x8944,	// (0x0002340a) scroll_bg_pane_g1

0x8959,	// (0x0002341f) scroll_bg_pane_g2

0x8971,	// (0x00023437) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002a1af) scroll_bg_pane_g

0x8986,	// (0x0002344c) scroll_handle_focus_pane_ParamLimits

0x8986,	// (0x0002344c) scroll_handle_focus_pane

0x8944,	// (0x0002340a) scroll_handle_pane_g1

0x8993,	// (0x00023459) scroll_handle_pane_g2

0x8971,	// (0x00023437) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002a1b6) scroll_handle_pane_g

0x853e,	// (0x00023004) bg_popup_sub_pane_cp21_ParamLimits

0x853e,	// (0x00023004) bg_popup_sub_pane_cp21

0x89a7,	// (0x0002346d) popup_fep_japan_predictive_window_t1_ParamLimits

0x89a7,	// (0x0002346d) popup_fep_japan_predictive_window_t1

0x89c1,	// (0x00023487) popup_fep_japan_predictive_window_t2_ParamLimits

0x89c1,	// (0x00023487) popup_fep_japan_predictive_window_t2

0x89f4,	// (0x000234ba) popup_fep_japan_predictive_window_t3_ParamLimits

0x89f4,	// (0x000234ba) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002a1bd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002a1bd) popup_fep_japan_predictive_window_t

0x7b3a,	// (0x00022600) bg_popup_sub_pane_cp23

0x8a2b,	// (0x000234f1) listscroll_japin_cand_pane

0x8a33,	// (0x000234f9) popup_fep_japan_candidate_window_t1

0x8a41,	// (0x00023507) candidate_pane_ParamLimits

0x8a41,	// (0x00023507) candidate_pane

0x8a53,	// (0x00023519) scroll_pane_cp30

0x8a5b,	// (0x00023521) list_single_popup_jap_candidate_pane_ParamLimits

0x8a5b,	// (0x00023521) list_single_popup_jap_candidate_pane

0x7b3a,	// (0x00022600) list_highlight_pane_cp30

0x8a70,	// (0x00023536) list_single_popup_jap_candidate_pane_t1

0x8a7f,	// (0x00023545) level_1_signal

0x8a8c,	// (0x00023552) level_2_signal

0x8a99,	// (0x0002355f) level_3_signal

0x8aa6,	// (0x0002356c) level_4_signal

0x8ab3,	// (0x00023579) level_5_signal

0x8ac0,	// (0x00023586) level_6_signal

0x8acd,	// (0x00023593) level_7_signal

0x8a7f,	// (0x00023545) level_1_battery

0x8a8c,	// (0x00023552) level_2_battery

0x8a99,	// (0x0002355f) level_3_battery

0x8aa6,	// (0x0002356c) level_4_battery

0x8ab3,	// (0x00023579) level_5_battery

0x8ac0,	// (0x00023586) level_6_battery

0x8acd,	// (0x00023593) level_7_battery

0x8af2,	// (0x000235b8) list_menu_pane_ParamLimits

0x8af2,	// (0x000235b8) list_menu_pane

0x8b08,	// (0x000235ce) scroll_pane_cp25_ParamLimits

0x8b08,	// (0x000235ce) scroll_pane_cp25

0x8b21,	// (0x000235e7) list_double2_graphic_pane_cp2_ParamLimits

0x8b21,	// (0x000235e7) list_double2_graphic_pane_cp2

0x8b21,	// (0x000235e7) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b21,	// (0x000235e7) list_double2_large_graphic_pane_cp2

0x8b21,	// (0x000235e7) list_double2_pane_cp2_ParamLimits

0x8b21,	// (0x000235e7) list_double2_pane_cp2

0x8b21,	// (0x000235e7) list_double_graphic_pane_cp2_ParamLimits

0x8b21,	// (0x000235e7) list_double_graphic_pane_cp2

0x8b21,	// (0x000235e7) list_double_large_graphic_pane_cp2_ParamLimits

0x8b21,	// (0x000235e7) list_double_large_graphic_pane_cp2

0x8b21,	// (0x000235e7) list_double_number_pane_cp2_ParamLimits

0x8b21,	// (0x000235e7) list_double_number_pane_cp2

0x8b21,	// (0x000235e7) list_double_pane_cp2_ParamLimits

0x8b21,	// (0x000235e7) list_double_pane_cp2

0x8b45,	// (0x0002360b) list_single_2graphic_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_2graphic_pane_cp2

0x8b45,	// (0x0002360b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_graphic_heading_pane_cp2

0x8b45,	// (0x0002360b) list_single_graphic_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_graphic_pane_cp2

0x8b45,	// (0x0002360b) list_single_heading_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_heading_pane_cp2

0x8b5e,	// (0x00023624) list_single_large_graphic_pane_cp2_ParamLimits

0x8b5e,	// (0x00023624) list_single_large_graphic_pane_cp2

0x8b45,	// (0x0002360b) list_single_number_heading_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_number_heading_pane_cp2

0x8b45,	// (0x0002360b) list_single_number_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_number_pane_cp2

0x8b45,	// (0x0002360b) list_single_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_pane_cp2

0x8bd4,	// (0x0002369a) bg_popup_sub_pane_cp22

0x6158,	// (0x00020c1e) popup_side_volume_key_window_g1

0x6182,	// (0x00020c48) popup_side_volume_key_window_t1

0x619e,	// (0x00020c64) volume_small_pane_cp1

0x7e95,	// (0x0002295b) bg_popup_sub_pane_cp24_ParamLimits

0x7e95,	// (0x0002295b) bg_popup_sub_pane_cp24

0x8bea,	// (0x000236b0) fep_china_uni_candidate_pane_ParamLimits

0x8bea,	// (0x000236b0) fep_china_uni_candidate_pane

0x8c20,	// (0x000236e6) fep_china_uni_entry_pane

0x8c30,	// (0x000236f6) popup_fep_china_uni_window_g1

0x8c4c,	// (0x00023712) fep_china_uni_entry_pane_g1

0x8c54,	// (0x0002371a) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002a1ee) fep_china_uni_entry_pane_g

0x8c5c,	// (0x00023722) fep_entry_item_pane

0x8c66,	// (0x0002372c) fep_candidate_item_pane

0x8c6e,	// (0x00023734) fep_china_uni_candidate_pane_g1

0x8c76,	// (0x0002373c) fep_china_uni_candidate_pane_g2

0x8c7e,	// (0x00023744) fep_china_uni_candidate_pane_g3

0x8c86,	// (0x0002374c) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002a1f3) fep_china_uni_candidate_pane_g

0x7b30,	// (0x000225f6) fep_entry_item_pane_g1

0x8c8e,	// (0x00023754) fep_entry_item_pane_t1_ParamLimits

0x8c8e,	// (0x00023754) fep_entry_item_pane_t1

0x8ca4,	// (0x0002376a) fep_candidate_item_pane_t1_ParamLimits

0x8ca4,	// (0x0002376a) fep_candidate_item_pane_t1

0x8cb9,	// (0x0002377f) fep_candidate_item_pane_t2_ParamLimits

0x8cb9,	// (0x0002377f) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002a1fc) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002a1fc) fep_candidate_item_pane_t

0x7c1a,	// (0x000226e0) list_highlight_pane_cp31_ParamLimits

0x7c1a,	// (0x000226e0) list_highlight_pane_cp31

0x8ccb,	// (0x00023791) level_1_signal_lsc

0x8cd4,	// (0x0002379a) level_2_signal_lsc

0x8cdd,	// (0x000237a3) level_3_signal_lsc

0x8ce6,	// (0x000237ac) level_4_signal_lsc

0x8cef,	// (0x000237b5) level_5_signal_lsc

0x8cf8,	// (0x000237be) level_6_signal_lsc

0x8d01,	// (0x000237c7) level_7_signal_lsc

0x8d01,	// (0x000237c7) level_1_battery_lsc

0x8d0a,	// (0x000237d0) level_2_battery_lsc

0x8d13,	// (0x000237d9) level_3_battery_lsc

0x8d1c,	// (0x000237e2) level_4_battery_lsc

0x8d25,	// (0x000237eb) level_5_battery_lsc

0x8d2e,	// (0x000237f4) level_6_battery_lsc

0x8ccb,	// (0x00023791) level_7_battery_lsc

0x8d37,	// (0x000237fd) scroll_handle_focus_pane_g1

0x8d40,	// (0x00023806) scroll_handle_focus_pane_g2

0x8d49,	// (0x0002380f) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002a201) scroll_handle_focus_pane_g

0x5189,	// (0x0001fc4f) list_single_2graphic_pane_g1_ParamLimits

0x5189,	// (0x0001fc4f) list_single_2graphic_pane_g1

0x4af5,	// (0x0001f5bb) list_single_2graphic_pane_g2_ParamLimits

0x4af5,	// (0x0001f5bb) list_single_2graphic_pane_g2

0x4a7b,	// (0x0001f541) list_single_2graphic_pane_g3_ParamLimits

0x4a7b,	// (0x0001f541) list_single_2graphic_pane_g3

0x5195,	// (0x0001fc5b) list_single_2graphic_pane_g4_ParamLimits

0x5195,	// (0x0001fc5b) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002a208) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002a208) list_single_2graphic_pane_g

0x51a1,	// (0x0001fc67) list_single_2graphic_pane_t1_ParamLimits

0x51a1,	// (0x0001fc67) list_single_2graphic_pane_t1

0x51cf,	// (0x0001fc95) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x51cf,	// (0x0001fc95) list_double2_graphic_large_graphic_pane_g1

0x4d56,	// (0x0001f81c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4d56,	// (0x0001f81c) list_double2_graphic_large_graphic_pane_g2

0x4c8c,	// (0x0001f752) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4c8c,	// (0x0001f752) list_double2_graphic_large_graphic_pane_g3

0x51df,	// (0x0001fca5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x51df,	// (0x0001fca5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002a211) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002a211) list_double2_graphic_large_graphic_pane_g

0x51eb,	// (0x0001fcb1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x51eb,	// (0x0001fcb1) list_double2_graphic_large_graphic_pane_t1

0x5201,	// (0x0001fcc7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5201,	// (0x0001fcc7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002a21a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002a21a) list_double2_graphic_large_graphic_pane_t

0x8e91,	// (0x00023957) popup_fast_swap_window_ParamLimits

0x8e91,	// (0x00023957) popup_fast_swap_window

0x8ead,	// (0x00023973) popup_side_volume_key_window

0x8ec9,	// (0x0002398f) stacon_top_pane

0x8ed3,	// (0x00023999) status_pane_ParamLimits

0x8ed3,	// (0x00023999) status_pane

0x8ec9,	// (0x0002398f) status_small_pane

0x7b3a,	// (0x00022600) control_pane

0x7b3a,	// (0x00022600) stacon_bottom_pane

0x8469,	// (0x00022f2f) scroll_pane_cp121

0x8460,	// (0x00022f26) set_content_pane

0x8d52,	// (0x00023818) bg_active_tab_pane_g1_cp1

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp1

0x8d64,	// (0x0002382a) bg_active_tab_pane_g3_cp1

0x8d52,	// (0x00023818) bg_passive_tab_pane_g1_cp1

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp1

0x8d64,	// (0x0002382a) bg_passive_tab_pane_g3_cp1

0x8d6d,	// (0x00023833) bg_active_tab_pane_g1_cp2

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp2

0x8d76,	// (0x0002383c) bg_active_tab_pane_g3_cp2

0x8d6d,	// (0x00023833) bg_passive_tab_pane_g1_cp2

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp2

0x8d76,	// (0x0002383c) bg_passive_tab_pane_g3_cp2

0x8d7f,	// (0x00023845) bg_active_tab_pane_g1_cp3

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp3

0x8d88,	// (0x0002384e) bg_active_tab_pane_g3_cp3

0x8d7f,	// (0x00023845) bg_passive_tab_pane_g1_cp3

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp3

0x8d88,	// (0x0002384e) bg_passive_tab_pane_g3_cp3

0x8d91,	// (0x00023857) bg_active_tab_pane_g1_cp4

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp4

0x8d9c,	// (0x00023862) bg_active_tab_pane_g3_cp4

0x8d91,	// (0x00023857) bg_passive_tab_pane_g1_cp4

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp4

0x8d9c,	// (0x00023862) bg_passive_tab_pane_g3_cp4

0x8de5,	// (0x000238ab) bg_active_tab_pane_g1_cp5

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp5

0x8dee,	// (0x000238b4) bg_active_tab_pane_g3_cp5

0x8de5,	// (0x000238ab) bg_passive_tab_pane_g1_cp5

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp5

0x8dee,	// (0x000238b4) bg_passive_tab_pane_g3_cp5

0x8df7,	// (0x000238bd) list_set_graphic_pane_ParamLimits

0x8df7,	// (0x000238bd) list_set_graphic_pane

0x7b3a,	// (0x00022600) bg_set_opt_pane_cp4

0x8e14,	// (0x000238da) list_set_graphic_pane_g1_ParamLimits

0x8e14,	// (0x000238da) list_set_graphic_pane_g1

0x8e20,	// (0x000238e6) list_set_graphic_pane_g2_ParamLimits

0x8e20,	// (0x000238e6) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002a21f) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002a21f) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0002a599) volume_small_pane_cp_g

0x8e44,	// (0x0002390a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e44,	// (0x0002390a) list_double2_large_graphic_pane_g1_cp2

0x8e50,	// (0x00023916) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e50,	// (0x00023916) list_double2_large_graphic_pane_g2_cp2

0x8e61,	// (0x00023927) list_double2_large_graphic_pane_g3_cp2

0x8e69,	// (0x0002392f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e69,	// (0x0002392f) list_double2_large_graphic_pane_t1_cp2

0x8e7f,	// (0x00023945) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8e7f,	// (0x00023945) list_double2_large_graphic_pane_t2_cp2

0xaac1,	// (0x00025587) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaac1,	// (0x00025587) list_double_large_graphic_pane_g1_cp2

0xaad2,	// (0x00025598) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaad2,	// (0x00025598) list_double_large_graphic_pane_g2_cp2

0x8fef,	// (0x00023ab5) list_double_large_graphic_pane_g3_cp2

0xaae3,	// (0x000255a9) list_double_large_graphic_pane_g4_cp

0xaaeb,	// (0x000255b1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaaeb,	// (0x000255b1) list_double_large_graphic_pane_t1_cp2

0xab02,	// (0x000255c8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab02,	// (0x000255c8) list_double_large_graphic_pane_t2_cp2

0x8ee1,	// (0x000239a7) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ee1,	// (0x000239a7) list_double2_graphic_pane_g1_cp2

0x8eef,	// (0x000239b5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8eef,	// (0x000239b5) list_double2_graphic_pane_g2_cp2

0x8f00,	// (0x000239c6) list_double2_graphic_pane_g3_cp2

0x8f0a,	// (0x000239d0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f0a,	// (0x000239d0) list_double2_graphic_pane_t1_cp2

0x8f20,	// (0x000239e6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f20,	// (0x000239e6) list_double2_graphic_pane_t2_cp2

0x8f32,	// (0x000239f8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f32,	// (0x000239f8) list_single_number_heading_pane_g1_cp2

0x8f3e,	// (0x00023a04) list_single_number_heading_pane_g2_cp2

0x8f46,	// (0x00023a0c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f46,	// (0x00023a0c) list_single_number_heading_pane_t1_cp2

0x8f5c,	// (0x00023a22) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f5c,	// (0x00023a22) list_single_number_heading_pane_t2_cp2

0x8f6e,	// (0x00023a34) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8f6e,	// (0x00023a34) list_single_number_heading_pane_t3_cp2

0x8f32,	// (0x000239f8) list_single_heading_pane_g1_cp2_ParamLimits

0x8f32,	// (0x000239f8) list_single_heading_pane_g1_cp2

0x8f3e,	// (0x00023a04) list_single_heading_pane_g2_cp2

0x8f46,	// (0x00023a0c) list_single_heading_pane_t1_cp2_ParamLimits

0x8f46,	// (0x00023a0c) list_single_heading_pane_t1_cp2

0xa8c9,	// (0x0002538f) list_single_heading_pane_t2_cp2_ParamLimits

0xa8c9,	// (0x0002538f) list_single_heading_pane_t2_cp2

0xa811,	// (0x000252d7) list_double_graphic_pane_g1_cp2_ParamLimits

0xa811,	// (0x000252d7) list_double_graphic_pane_g1_cp2

0xa81d,	// (0x000252e3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa81d,	// (0x000252e3) list_double_graphic_pane_g2_cp2

0xa82c,	// (0x000252f2) list_double_graphic_pane_g3_cp2

0xa834,	// (0x000252fa) list_double_graphic_pane_t1_cp2_ParamLimits

0xa834,	// (0x000252fa) list_double_graphic_pane_t1_cp2

0xa84a,	// (0x00025310) list_double_graphic_pane_t2_cp2_ParamLimits

0xa84a,	// (0x00025310) list_double_graphic_pane_t2_cp2

0x8fe3,	// (0x00023aa9) list_double_number_pane_g1_cp2_ParamLimits

0x8fe3,	// (0x00023aa9) list_double_number_pane_g1_cp2

0x8fef,	// (0x00023ab5) list_double_number_pane_g2_cp2

0xa7d5,	// (0x0002529b) list_double_number_pane_t1_cp2_ParamLimits

0xa7d5,	// (0x0002529b) list_double_number_pane_t1_cp2

0xa7e9,	// (0x000252af) list_double_number_pane_t2_cp2_ParamLimits

0xa7e9,	// (0x000252af) list_double_number_pane_t2_cp2

0xa7ff,	// (0x000252c5) list_double_number_pane_t3_cp2_ParamLimits

0xa7ff,	// (0x000252c5) list_double_number_pane_t3_cp2

0xa6be,	// (0x00025184) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6be,	// (0x00025184) list_single_graphic_pane_g1_cp2

0x9047,	// (0x00023b0d) list_single_graphic_pane_g2_cp2_ParamLimits

0x9047,	// (0x00023b0d) list_single_graphic_pane_g2_cp2

0x9053,	// (0x00023b19) list_single_graphic_pane_g3_cp2

0xa694,	// (0x0002515a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa694,	// (0x0002515a) list_single_graphic_pane_t1_cp2

0x9047,	// (0x00023b0d) list_single_number_pane_g1_cp2_ParamLimits

0x9047,	// (0x00023b0d) list_single_number_pane_g1_cp2

0x9053,	// (0x00023b19) list_single_number_pane_g2_cp2

0xa694,	// (0x0002515a) list_single_number_pane_t1_cp2_ParamLimits

0xa694,	// (0x0002515a) list_single_number_pane_t1_cp2

0xa6aa,	// (0x00025170) list_single_number_pane_t2_cp2_ParamLimits

0xa6aa,	// (0x00025170) list_single_number_pane_t2_cp2

0x8e50,	// (0x00023916) list_double2_pane_g1_cp2_ParamLimits

0x8e50,	// (0x00023916) list_double2_pane_g1_cp2

0x8e61,	// (0x00023927) list_double2_pane_g2_cp2

0x8fbb,	// (0x00023a81) list_double2_pane_t1_cp2_ParamLimits

0x8fbb,	// (0x00023a81) list_double2_pane_t1_cp2

0x8fd1,	// (0x00023a97) list_double2_pane_t2_cp2_ParamLimits

0x8fd1,	// (0x00023a97) list_double2_pane_t2_cp2

0x8fe3,	// (0x00023aa9) list_double_pane_g1_cp2_ParamLimits

0x8fe3,	// (0x00023aa9) list_double_pane_g1_cp2

0x8fef,	// (0x00023ab5) list_double_pane_g2_cp2

0x8ff7,	// (0x00023abd) list_double_pane_t1_cp2_ParamLimits

0x8ff7,	// (0x00023abd) list_double_pane_t1_cp2

0x900d,	// (0x00023ad3) list_double_pane_t2_cp2_ParamLimits

0x900d,	// (0x00023ad3) list_double_pane_t2_cp2

0x9037,	// (0x00023afd) list_single_pane_cp2_g3

0x9047,	// (0x00023b0d) list_single_pane_g1_cp2_ParamLimits

0x9047,	// (0x00023b0d) list_single_pane_g1_cp2

0x9053,	// (0x00023b19) list_single_pane_g2_cp2

0x905b,	// (0x00023b21) list_single_pane_t1_cp2_ParamLimits

0x905b,	// (0x00023b21) list_single_pane_t1_cp2

0x9073,	// (0x00023b39) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9073,	// (0x00023b39) list_single_large_graphic_pane_g1_cp2

0x907f,	// (0x00023b45) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x907f,	// (0x00023b45) list_single_large_graphic_pane_g2_cp2

0x908b,	// (0x00023b51) list_single_large_graphic_pane_g3_cp2

0x9093,	// (0x00023b59) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9093,	// (0x00023b59) list_single_large_graphic_pane_g4_cp1

0x90ad,	// (0x00023b73) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90ad,	// (0x00023b73) list_single_large_graphic_pane_t1_cp2

0xa660,	// (0x00025126) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa660,	// (0x00025126) list_single_graphic_heading_pane_g1_cp2

0xa62d,	// (0x000250f3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa62d,	// (0x000250f3) list_single_graphic_heading_pane_g4_cp2

0x9053,	// (0x00023b19) list_single_graphic_heading_pane_g5_cp2

0xa66c,	// (0x00025132) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa66c,	// (0x00025132) list_single_graphic_heading_pane_t1_cp2

0xa682,	// (0x00025148) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa682,	// (0x00025148) list_single_graphic_heading_pane_t2_cp2

0xa621,	// (0x000250e7) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa621,	// (0x000250e7) list_single_2graphic_pane_g1_cp2

0xa62d,	// (0x000250f3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa62d,	// (0x000250f3) list_single_2graphic_pane_g2_cp2

0x9053,	// (0x00023b19) list_single_2graphic_pane_g3_cp2

0xa63e,	// (0x00025104) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa63e,	// (0x00025104) list_single_2graphic_pane_g4_cp2

0xa64a,	// (0x00025110) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa64a,	// (0x00025110) list_single_2graphic_pane_t1_cp2

0x7b30,	// (0x000225f6) list_highlight_pane_g10_cp1

0xa1f9,	// (0x00024cbf) list_highlight_pane_g1_cp1

0xa201,	// (0x00024cc7) list_highlight_pane_g2_cp1

0xa209,	// (0x00024ccf) list_highlight_pane_g3_cp1

0xa211,	// (0x00024cd7) list_highlight_pane_g4_cp1

0xa219,	// (0x00024cdf) list_highlight_pane_g5_cp1

0xa221,	// (0x00024ce7) list_highlight_pane_g6_cp1

0xa229,	// (0x00024cef) list_highlight_pane_g7_cp1

0xa231,	// (0x00024cf7) list_highlight_pane_g8_cp1

0xa239,	// (0x00024cff) list_highlight_pane_g9_cp1

0xa119,	// (0x00024bdf) form_field_slider_pane_t3

0xa127,	// (0x00024bed) form_field_slider_pane_t4

0xa135,	// (0x00024bfb) slider_form_pane_ParamLimits

0xa135,	// (0x00024bfb) slider_form_pane

0x7b3a,	// (0x00022600) control_abbreviations

0x7b3a,	// (0x00022600) control_conventions

0x7b3a,	// (0x00022600) control_definitions

0x7b3a,	// (0x00022600) format_table_attribute

0xa913,	// (0x000253d9) bg_popup_preview_window_pane_g9

0x7b3a,	// (0x00022600) format_table_data2

0x7b3a,	// (0x00022600) format_table_data3

0x7b3a,	// (0x00022600) format_table_data_example

0x0008,

0x7b3a,	// (0x00022600) intro_purpose

0xf8f5,	// (0x0002a3bb) bg_popup_preview_window_pane_g

0x7b3a,	// (0x00022600) texts_category

0x7b3a,	// (0x00022600) texts_graphics

0x90c3,	// (0x00023b89) text_digital

0x90d2,	// (0x00023b98) text_primary

0x90e1,	// (0x00023ba7) text_primary_small

0x90f0,	// (0x00023bb6) text_secondary

0x90ff,	// (0x00023bc5) text_title

0xb087,	// (0x00025b4d) bg_passive_tab_pane_g1_cp3_srt

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp3_srt

0xb090,	// (0x00025b56) bg_passive_tab_pane_g3_cp3_srt

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp3_srt

0xb099,	// (0x00025b5f) tabs_4_active_pane_srt_g1

0xb0a1,	// (0x00025b67) tabs_4_active_pane_srt_t1_ParamLimits

0xb0a1,	// (0x00025b67) tabs_4_active_pane_srt_t1

0xb087,	// (0x00025b4d) bg_active_tab_pane_g1_cp3_copy1

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp3_copy1

0xb090,	// (0x00025b56) bg_active_tab_pane_g3_cp3_copy1

0x7c1a,	// (0x000226e0) tabs_2_long_active_pane_srt_ParamLimits

0x7c1a,	// (0x000226e0) tabs_2_long_active_pane_srt

0x7c1a,	// (0x000226e0) tabs_2_long_passive_pane_srt_ParamLimits

0x7c1a,	// (0x000226e0) tabs_2_long_passive_pane_srt

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp4_srt

0xad57,	// (0x0002581d) bg_passive_tab_pane_g1_cp4_srt

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp4_srt

0xad60,	// (0x00025826) bg_passive_tab_pane_g3_cp4_srt

0x8655,	// (0x0002311b) bg_active_tab_pane_cp4_srt_ParamLimits

0x8655,	// (0x0002311b) bg_active_tab_pane_cp4_srt

0xad69,	// (0x0002582f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad69,	// (0x0002582f) tabs_2_long_active_pane_srt_t1

0xad57,	// (0x0002581d) bg_active_tab_pane_g1_cp4_srt

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp4_srt

0xad60,	// (0x00025826) bg_active_tab_pane_g3_cp4_srt

0x7e95,	// (0x0002295b) tabs_3_long_active_pane_srt_ParamLimits

0x7e95,	// (0x0002295b) tabs_3_long_active_pane_srt

0x7e95,	// (0x0002295b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7e95,	// (0x0002295b) tabs_3_long_passive_pane_cp_srt

0x7e95,	// (0x0002295b) tabs_3_long_passive_pane_srt_ParamLimits

0x7e95,	// (0x0002295b) tabs_3_long_passive_pane_srt

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp5_srt

0x8de5,	// (0x000238ab) bg_passive_tab_pane_g1_cp5_srt

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp5_srt

0x8dee,	// (0x000238b4) bg_passive_tab_pane_g3_cp5_srt

0x8655,	// (0x0002311b) bg_active_tab_pane_cp5_srt_ParamLimits

0x8655,	// (0x0002311b) bg_active_tab_pane_cp5_srt

0xad45,	// (0x0002580b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad45,	// (0x0002580b) tabs_3_long_active_pane_srt_t1

0x8de5,	// (0x000238ab) bg_active_tab_pane_g1_cp5_srt

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp5_srt

0x8dee,	// (0x000238b4) bg_active_tab_pane_g3_cp5_srt

0xad37,	// (0x000257fd) navi_text_pane_srt_t1

0xad2f,	// (0x000257f5) navi_icon_pane_srt_g1

0x92c6,	// (0x00023d8c) midp_editing_number_pane_srt

0x910e,	// (0x00023bd4) midp_ticker_pane_srt

0x92ce,	// (0x00023d94) midp_ticker_pane_srt_g1

0x92d6,	// (0x00023d9c) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002a23e) midp_ticker_pane_srt_g

0x92de,	// (0x00023da4) midp_ticker_pane_srt_t1

0xad20,	// (0x000257e6) midp_editing_number_pane_t1_copy1

0x8676,	// (0x0002313c) listscroll_midp_pane

0x8676,	// (0x0002313c) midp_form_pane

0x9178,	// (0x00023c3e) midp_info_popup_window_ParamLimits

0x9178,	// (0x00023c3e) midp_info_popup_window

0x853e,	// (0x00023004) bg_popup_sub_pane_cp50_ParamLimits

0x853e,	// (0x00023004) bg_popup_sub_pane_cp50

0x9e31,	// (0x000248f7) listscroll_midp_info_pane_ParamLimits

0x9e31,	// (0x000248f7) listscroll_midp_info_pane

0x9e19,	// (0x000248df) listscroll_form_midp_pane_ParamLimits

0x9e19,	// (0x000248df) listscroll_form_midp_pane

0x9e25,	// (0x000248eb) scroll_bar_cp050

0x9df9,	// (0x000248bf) list_midp_pane

0xbb1f,	// (0x000265e5) signal_pane_g2_cp

0x9d33,	// (0x000247f9) listscroll_midp_info_pane_t1_ParamLimits

0x9d33,	// (0x000247f9) listscroll_midp_info_pane_t1

0x9d4b,	// (0x00024811) listscroll_midp_info_pane_t2_ParamLimits

0x9d4b,	// (0x00024811) listscroll_midp_info_pane_t2

0x9d89,	// (0x0002484f) listscroll_midp_info_pane_t3_ParamLimits

0x9d89,	// (0x0002484f) listscroll_midp_info_pane_t3

0x9dc3,	// (0x00024889) listscroll_midp_info_pane_t4_ParamLimits

0x9dc3,	// (0x00024889) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0002a2f6) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0002a2f6) listscroll_midp_info_pane_t

0x8602,	// (0x000230c8) scroll_pane_cp21

0x9cd1,	// (0x00024797) form_midp_field_choice_group_pane

0x9cda,	// (0x000247a0) form_midp_field_text_pane

0x9d19,	// (0x000247df) form_midp_field_time_pane

0x9d21,	// (0x000247e7) form_midp_gauge_slider_pane

0x9d2a,	// (0x000247f0) form_midp_gauge_wait_pane

0x7b3a,	// (0x00022600) form_midp_image_pane

0x5314,	// (0x0001fdda) list_single_midp_pane_ParamLimits

0x5314,	// (0x0001fdda) list_single_midp_pane

0x9c89,	// (0x0002474f) form_midp_field_text_pane_t1

0x9a47,	// (0x0002450d) input_focus_pane_cp050

0x9cc0,	// (0x00024786) list_midp_form_text_pane

0x9c58,	// (0x0002471e) form_midp_field_choice_group_pane_t1

0x9c66,	// (0x0002472c) input_focus_pane_cp051

0x9c7a,	// (0x00024740) list_midp_choice_pane

0x7b3a,	// (0x00022600) status_idle_pane

0x9c3c,	// (0x00024702) form_midp_field_time_pane_t1

0x7b30,	// (0x000225f6) wait_anim_pane_g2_copy1

0x9c4a,	// (0x00024710) form_midp_field_time_pane_t2

0x0001,

0x9226,	// (0x00023cec) aid_navinavi_width_2_pane

0xf82b,	// (0x0002a2f1) form_midp_field_time_pane_t

0x7b3a,	// (0x00022600) input_focus_pane_cp052

0x7b3a,	// (0x00022600) bg_input_focus_pane_cp040

0x9bf0,	// (0x000246b6) form_midp_gauge_slider_pane_t1

0x9bfe,	// (0x000246c4) form_midp_gauge_slider_pane_t2

0x9c0c,	// (0x000246d2) form_midp_gauge_slider_pane_t3

0x9c1a,	// (0x000246e0) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0002a2e8) form_midp_gauge_slider_pane_t

0x9c34,	// (0x000246fa) form_midp_slider_pane

0x7c1a,	// (0x000226e0) bg_input_focus_pane_cp041_ParamLimits

0x7c1a,	// (0x000226e0) bg_input_focus_pane_cp041

0x9bbd,	// (0x00024683) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bbd,	// (0x00024683) form_midp_gauge_wait_pane_t1

0x9bcf,	// (0x00024695) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bcf,	// (0x00024695) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0002a2e3) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0002a2e3) form_midp_gauge_wait_pane_t

0x9be1,	// (0x000246a7) form_midp_wait_pane_ParamLimits

0x9be1,	// (0x000246a7) form_midp_wait_pane

0x9b87,	// (0x0002464d) form_midp_image_pane_g1

0x9b90,	// (0x00024656) form_midp_image_pane_t1

0x9b9f,	// (0x00024665) form_midp_image_pane_t2

0x9bae,	// (0x00024674) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0002a2dc) form_midp_image_pane_t

0x9b7e,	// (0x00024644) list_single_midp_pane_g1

0x5305,	// (0x0001fdcb) list_single_midp_pane_t1

0x9b56,	// (0x0002461c) list_midp_form_item_pane_ParamLimits

0x9b56,	// (0x0002461c) list_midp_form_item_pane

0x91ce,	// (0x00023c94) list_midp_form_item_pane_t1

0x91dd,	// (0x00023ca3) midp_ticker_pane_g1

0x91e9,	// (0x00023caf) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002a224) midp_ticker_pane_g

0x91f5,	// (0x00023cbb) midp_ticker_pane_t1

0xafb3,	// (0x00025a79) midp_editing_number_pane_t1

0xaf91,	// (0x00025a57) midp_editing_number_pane

0xafa0,	// (0x00025a66) midp_ticker_pane

0xad10,	// (0x000257d6) ai_message_heading_pane

0x7b3a,	// (0x00022600) bg_popup_window_pane_cp14

0xad18,	// (0x000257de) listscroll_ai_message_pane

0xac9a,	// (0x00025760) ai_message_heading_pane_g1_ParamLimits

0xac9a,	// (0x00025760) ai_message_heading_pane_g1

0xaca6,	// (0x0002576c) ai_message_heading_pane_g2_ParamLimits

0xaca6,	// (0x0002576c) ai_message_heading_pane_g2

0xacb2,	// (0x00025778) ai_message_heading_pane_g3_ParamLimits

0xacb2,	// (0x00025778) ai_message_heading_pane_g3

0xacbe,	// (0x00025784) ai_message_heading_pane_g4_ParamLimits

0xacbe,	// (0x00025784) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0002a41d) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0002a41d) ai_message_heading_pane_g

0xacca,	// (0x00025790) ai_message_heading_pane_t1_ParamLimits

0xacca,	// (0x00025790) ai_message_heading_pane_t1

0xace4,	// (0x000257aa) ai_message_heading_pane_t2_ParamLimits

0xace4,	// (0x000257aa) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0002a426) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0002a426) ai_message_heading_pane_t

0xacf6,	// (0x000257bc) bg_popup_heading_pane_cp1_ParamLimits

0xacf6,	// (0x000257bc) bg_popup_heading_pane_cp1

0xac88,	// (0x0002574e) list_ai_message_pane_ParamLimits

0xac88,	// (0x0002574e) list_ai_message_pane

0x8602,	// (0x000230c8) scroll_pane_cp10

0xac24,	// (0x000256ea) list_ai_message_pane_g1

0xac2c,	// (0x000256f2) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0002a3fa) list_ai_message_pane_g

0xac34,	// (0x000256fa) list_ai_message_pane_t1_ParamLimits

0xac34,	// (0x000256fa) list_ai_message_pane_t1

0xac49,	// (0x0002570f) list_ai_message_pane_t2_ParamLimits

0xac49,	// (0x0002570f) list_ai_message_pane_t2

0xac5e,	// (0x00025724) list_ai_message_pane_t3_ParamLimits

0xac5e,	// (0x00025724) list_ai_message_pane_t3

0xac73,	// (0x00025739) list_ai_message_pane_t4_ParamLimits

0xac73,	// (0x00025739) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0002a3ff) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0002a3ff) list_ai_message_pane_t

0xac0f,	// (0x000256d5) cell_ai_soft_ind_pane_ParamLimits

0xac0f,	// (0x000256d5) cell_ai_soft_ind_pane

0x9207,	// (0x00023ccd) cell_ai_soft_ind_pane_g1_ParamLimits

0x9207,	// (0x00023ccd) cell_ai_soft_ind_pane_g1

0x7b3a,	// (0x00022600) grid_highlight_cp1

0x9214,	// (0x00023cda) text_secondary_cp56_ParamLimits

0x9214,	// (0x00023cda) text_secondary_cp56

0xabe4,	// (0x000256aa) example_general_pane_ParamLimits

0xabe4,	// (0x000256aa) example_general_pane

0xabf0,	// (0x000256b6) example_parent_pane_g1_ParamLimits

0xabf0,	// (0x000256b6) example_parent_pane_g1

0xabfc,	// (0x000256c2) example_parent_pane_t1_ParamLimits

0xabfc,	// (0x000256c2) example_parent_pane_t1

0x6863,	// (0x00021329) popup_preview_text_window_ParamLimits

0x6863,	// (0x00021329) popup_preview_text_window

0x903f,	// (0x00023b05) list_single_pane_cp2_g4

0x7f4b,	// (0x00022a11) bg_popup_preview_window_pane_ParamLimits

0x7f4b,	// (0x00022a11) bg_popup_preview_window_pane

0xa91b,	// (0x000253e1) popup_preview_text_window_t1_ParamLimits

0xa91b,	// (0x000253e1) popup_preview_text_window_t1

0xa939,	// (0x000253ff) popup_preview_text_window_t2_ParamLimits

0xa939,	// (0x000253ff) popup_preview_text_window_t2

0xa982,	// (0x00025448) popup_preview_text_window_t3_ParamLimits

0xa982,	// (0x00025448) popup_preview_text_window_t3

0xa9c7,	// (0x0002548d) popup_preview_text_window_t4_ParamLimits

0xa9c7,	// (0x0002548d) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0002a3ce) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0002a3ce) popup_preview_text_window_t

0xaa45,	// (0x0002550b) scroll_pane_cp11

0x9943,	// (0x00024409) bg_popup_preview_window_pane_g1

0xa8db,	// (0x000253a1) bg_popup_preview_window_pane_g2

0xa8e3,	// (0x000253a9) bg_popup_preview_window_pane_g3

0xa8eb,	// (0x000253b1) bg_popup_preview_window_pane_g4

0xa8f3,	// (0x000253b9) bg_popup_preview_window_pane_g5

0xa8fb,	// (0x000253c1) bg_popup_preview_window_pane_g6

0xa903,	// (0x000253c9) bg_popup_preview_window_pane_g7

0xa90b,	// (0x000253d1) bg_popup_preview_window_pane_g8

0x5a9d,	// (0x00020563) aid_popup_width_pane

0x6841,	// (0x00021307) popup_midp_note_alarm_window_ParamLimits

0x6841,	// (0x00021307) popup_midp_note_alarm_window

0x847a,	// (0x00022f40) data_form_pane_ParamLimits

0x4fe3,	// (0x0001faa9) form_field_data_pane_g1

0x4fed,	// (0x0001fab3) form_field_data_pane_t1_ParamLimits

0x8486,	// (0x00022f4c) input_focus_pane_ParamLimits

0x8494,	// (0x00022f5a) data_form_wide_pane_ParamLimits

0x5005,	// (0x0001facb) form_field_data_wide_pane_g1

0x5011,	// (0x0001fad7) form_field_data_wide_pane_t1_ParamLimits

0x81f7,	// (0x00022cbd) input_focus_pane_cp6_ParamLimits

0x85af,	// (0x00023075) input_popup_find_pane_g1_ParamLimits

0x85af,	// (0x00023075) input_popup_find_pane_g1

0x6007,	// (0x00020acd) aid_navi_side_left_pane

0x601c,	// (0x00020ae2) aid_navi_side_right_pane

0xa2f4,	// (0x00024dba) bg_popup_window_pane_cp30_ParamLimits

0xa2f4,	// (0x00024dba) bg_popup_window_pane_cp30

0xa36e,	// (0x00024e34) popup_midp_note_alarm_window_g1_ParamLimits

0xa36e,	// (0x00024e34) popup_midp_note_alarm_window_g1

0xa39e,	// (0x00024e64) popup_midp_note_alarm_window_t1_ParamLimits

0xa39e,	// (0x00024e64) popup_midp_note_alarm_window_t1

0xa43f,	// (0x00024f05) popup_midp_note_alarm_window_t2_ParamLimits

0xa43f,	// (0x00024f05) popup_midp_note_alarm_window_t2

0xa4ed,	// (0x00024fb3) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ed,	// (0x00024fb3) popup_midp_note_alarm_window_t3

0xa51f,	// (0x00024fe5) popup_midp_note_alarm_window_t4_ParamLimits

0xa51f,	// (0x00024fe5) popup_midp_note_alarm_window_t4

0xa545,	// (0x0002500b) popup_midp_note_alarm_window_t5_ParamLimits

0xa545,	// (0x0002500b) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0002a36b) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0002a36b) popup_midp_note_alarm_window_t

0xa5f1,	// (0x000250b7) wait_bar_pane_cp1_ParamLimits

0xa5f1,	// (0x000250b7) wait_bar_pane_cp1

0x7b3a,	// (0x00022600) wait_anim_pane_copy1

0x7b3a,	// (0x00022600) wait_border_pane_copy1

0x9fda,	// (0x00024aa0) wait_border_pane_g1_copy1

0x502b,	// (0x0001faf1) form_field_popup_pane_g1

0x5033,	// (0x0001faf9) form_field_popup_pane_t1_ParamLimits

0x8486,	// (0x00022f4c) input_focus_pane_cp7_ParamLimits

0x84c0,	// (0x00022f86) list_form_pane_ParamLimits

0x504b,	// (0x0001fb11) form_field_popup_wide_pane_g1

0x5053,	// (0x0001fb19) form_field_popup_wide_pane_t1_ParamLimits

0x8486,	// (0x00022f4c) input_focus_pane_cp8_ParamLimits

0x84cc,	// (0x00022f92) list_form_wide_pane_ParamLimits

0xb113,	// (0x00025bd9) aid_size_cell_graphic_pane

0x50dd,	// (0x0001fba3) data_form_pane_t1_ParamLimits

0x536e,	// (0x0001fe34) data_form_wide_pane_t1_ParamLimits

0x9521,	// (0x00023fe7) bg_status_flat_pane

0x7b7a,	// (0x00022640) title_pane_t1_ParamLimits

0x7be2,	// (0x000226a8) title_pane_t2_ParamLimits

0x7c08,	// (0x000226ce) title_pane_t3_ParamLimits

0xf55d,	// (0x0002a023) title_pane_t_ParamLimits

0x8a7f,	// (0x00023545) level_1_signal_ParamLimits

0x8a8c,	// (0x00023552) level_2_signal_ParamLimits

0x8a99,	// (0x0002355f) level_3_signal_ParamLimits

0x8aa6,	// (0x0002356c) level_4_signal_ParamLimits

0x8ab3,	// (0x00023579) level_5_signal_ParamLimits

0x8ac0,	// (0x00023586) level_6_signal_ParamLimits

0x8acd,	// (0x00023593) level_7_signal_ParamLimits

0x8a7f,	// (0x00023545) level_1_battery_ParamLimits

0x8a8c,	// (0x00023552) level_2_battery_ParamLimits

0x8a99,	// (0x0002355f) level_3_battery_ParamLimits

0x8aa6,	// (0x0002356c) level_4_battery_ParamLimits

0x8ab3,	// (0x00023579) level_5_battery_ParamLimits

0x8ac0,	// (0x00023586) level_6_battery_ParamLimits

0x8acd,	// (0x00023593) level_7_battery_ParamLimits

0xa1f9,	// (0x00024cbf) bg_status_flat_pane_g1

0xa201,	// (0x00024cc7) bg_status_flat_pane_g2

0xa209,	// (0x00024ccf) bg_status_flat_pane_g3

0xa211,	// (0x00024cd7) bg_status_flat_pane_g4

0xa219,	// (0x00024cdf) bg_status_flat_pane_g5

0xa221,	// (0x00024ce7) bg_status_flat_pane_g6

0xa229,	// (0x00024cef) bg_status_flat_pane_g7

0x7c30,	// (0x000226f6) tabs_3_active_pane_t1_ParamLimits

0x7c30,	// (0x000226f6) tabs_3_passive_pane_t1_ParamLimits

0x7c4a,	// (0x00022710) tabs_4_active_pane_t1_ParamLimits

0x7c4a,	// (0x00022710) tabs_4_1_passive_pane_t1_ParamLimits

0x8643,	// (0x00023109) tabs_2_active_pane_t1_ParamLimits

0x8643,	// (0x00023109) tabs_2_passive_pane_t1_ParamLimits

0x8655,	// (0x0002311b) bg_active_tab_pane_cp4_ParamLimits

0x8663,	// (0x00023129) tabs_2_long_active_pane_t1_ParamLimits

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp4_ParamLimits

0x6b04,	// (0x000215ca) list_single_midp_graphic_pane_t1_ParamLimits

0x8655,	// (0x0002311b) bg_active_tab_pane_cp5_ParamLimits

0x8682,	// (0x00023148) tabs_3_long_active_pane_t1_ParamLimits

0x8676,	// (0x0002313c) bg_passive_tab_pane_cp5_ParamLimits

0x6b04,	// (0x000215ca) list_single_midp_graphic_pane_t1

0x9521,	// (0x00023fe7) bg_status_flat_pane_ParamLimits

0x95e4,	// (0x000240aa) indicator_pane_cp2_ParamLimits

0x95e4,	// (0x000240aa) indicator_pane_cp2

0x9709,	// (0x000241cf) navi_pane_srt_ParamLimits

0x9709,	// (0x000241cf) navi_pane_srt

0x972d,	// (0x000241f3) popup_clock_digital_analogue_window_cp1

0x7cf7,	// (0x000227bd) indicator_pane_t1

0x910e,	// (0x00023bd4) copy_highlight_pane

0x910e,	// (0x00023bd4) cursor_graphics_pane

0x910e,	// (0x00023bd4) graphic_within_text_pane

0x910e,	// (0x00023bd4) link_highlight_pane

0xaa08,	// (0x000254ce) popup_preview_text_window_t5_ParamLimits

0xaa08,	// (0x000254ce) popup_preview_text_window_t5

0x922e,	// (0x00023cf4) cursor_digital_pane

0x922e,	// (0x00023cf4) cursor_primary_pane

0x923f,	// (0x00023d05) cursor_primary_small_pane

0x9247,	// (0x00023d0d) cursor_secondary_pane

0x924f,	// (0x00023d15) cursor_title_pane

0x922e,	// (0x00023cf4) link_highlight_digital_pane

0x9236,	// (0x00023cfc) link_highlight_primary_pane

0x923f,	// (0x00023d05) link_highlight_primary_small_pane

0x9247,	// (0x00023d0d) link_highlight_secondary_pane

0x924f,	// (0x00023d15) link_highlight_title_pane

0x922e,	// (0x00023cf4) copy_highlight_digital_pane

0x922e,	// (0x00023cf4) copy_highlight_primary_pane

0x923f,	// (0x00023d05) copy_highlight_primary_small_pane

0x9247,	// (0x00023d0d) copy_highlight_secondary_pane

0x924f,	// (0x00023d15) copy_highlight_title_pane

0x9247,	// (0x00023d0d) graphic_text_digital_pane

0xa297,	// (0x00024d5d) graphic_text_primary_pane

0xa2a0,	// (0x00024d66) graphic_text_primary_small_pane

0x923f,	// (0x00023d05) graphic_text_secondary_pane

0x922e,	// (0x00023cf4) graphic_text_title_pane

0x9257,	// (0x00023d1d) cursor_primary_pane_g1

0xa289,	// (0x00024d4f) cursor_text_primary_t1

0xa271,	// (0x00024d37) cursor_primary_small_pane_g1

0xa27b,	// (0x00024d41) cursor_text_primary_small_t1

0xa259,	// (0x00024d1f) cursor_primary_small_pane_g1_copy1

0xa263,	// (0x00024d29) cursor_text_primary_small_t1_copy1

0xa241,	// (0x00024d07) cursor_text_title_t1

0xa24f,	// (0x00024d15) cursor_title_pane_g1

0x9257,	// (0x00023d1d) cursor_digital_pane_g1

0x9261,	// (0x00023d27) cursor_text_digital_t1

0x9286,	// (0x00023d4c) link_highlight_primary_pane_g1

0xa1ea,	// (0x00024cb0) link_highlight_primary_pane_t1

0x926f,	// (0x00023d35) link_highlight_primary_small_pane_g1

0x9277,	// (0x00023d3d) link_highlight_primary_small_pane_t1

0x9286,	// (0x00023d4c) link_highlight_secondary_pane_g1

0x928e,	// (0x00023d54) link_highlight_secondary_pane_t1

0xa15e,	// (0x00024c24) link_highlight_title_pane_g1

0xa166,	// (0x00024c2c) link_highlight_title_pane_t1

0xa147,	// (0x00024c0d) link_highlight_digital_pane_g1

0xa14f,	// (0x00024c15) link_highlight_digital_pane_t1

0xa01f,	// (0x00024ae5) copy_highlight_primary_pane_g1

0xa027,	// (0x00024aed) copy_highlight_primary_pane_t1

0x9ff9,	// (0x00024abf) copy_highlight_primary_small_pane_g1

0xa010,	// (0x00024ad6) copy_highlight_primary_small_pane_t1

0x929d,	// (0x00023d63) copy_highlight_secondary_pane_g1

0x92a5,	// (0x00023d6b) copy_highlight_secondary_pane_t1

0x9ff9,	// (0x00024abf) copy_highlight_title_pane_g1

0xa001,	// (0x00024ac7) copy_highlight_title_pane_t1

0xa01f,	// (0x00024ae5) copy_highlight_digital_pane_g1

0xb2dd,	// (0x00025da3) copy_highlight_digital_pane_t1

0xb231,	// (0x00025cf7) graphic_text_primary_pane_g1

0xb2c1,	// (0x00025d87) graphic_text_primary_pane_t1

0xb2cf,	// (0x00025d95) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0002a49a) graphic_text_primary_pane_t

0xb29d,	// (0x00025d63) graphic_text_primary_small_pane_g1

0xb2a5,	// (0x00025d6b) graphic_text_primary_small_pane_t1

0xb2b3,	// (0x00025d79) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0002a495) graphic_text_primary_small_pane_t

0xb279,	// (0x00025d3f) graphic_text_secondary_pane_g1

0xb281,	// (0x00025d47) graphic_text_secondary_pane_t1

0xb28f,	// (0x00025d55) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0002a490) graphic_text_secondary_pane_t

0xb255,	// (0x00025d1b) graphic_text_title_pane_g1

0xb25d,	// (0x00025d23) graphic_text_title_pane_t1

0xb26b,	// (0x00025d31) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0002a48b) graphic_text_title_pane_t

0xb231,	// (0x00025cf7) graphic_text_digital_pane_g1

0xb239,	// (0x00025cff) graphic_text_digital_pane_t1

0xb247,	// (0x00025d0d) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0002a486) graphic_text_digital_pane_t

0x7c1a,	// (0x000226e0) navi_icon_pane_srt_ParamLimits

0x7c1a,	// (0x000226e0) navi_icon_pane_srt

0x7b3a,	// (0x00022600) navi_midp_pane_srt

0x7b3a,	// (0x00022600) navi_navi_pane_srt

0x7c1a,	// (0x000226e0) navi_text_pane_srt_ParamLimits

0x7c1a,	// (0x000226e0) navi_text_pane_srt

0xb1fc,	// (0x00025cc2) navi_navi_icon_text_pane_srt

0xb204,	// (0x00025cca) navi_navi_pane_srt_g1_ParamLimits

0xb204,	// (0x00025cca) navi_navi_pane_srt_g1

0xb216,	// (0x00025cdc) navi_navi_pane_srt_g2_ParamLimits

0xb216,	// (0x00025cdc) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0002a481) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0002a481) navi_navi_pane_srt_g

0xb228,	// (0x00025cee) navi_navi_tabs_pane_srt

0xb1fc,	// (0x00025cc2) navi_navi_text_pane_srt

0xb1fc,	// (0x00025cc2) navi_navi_volume_pane_srt

0xb1ed,	// (0x00025cb3) navi_navi_text_pane_srt_t1

0x6e3c,	// (0x00021902) navi_navi_volume_pane_srt_g1

0x6e44,	// (0x0002190a) volume_small_pane_srt_ParamLimits

0x6e44,	// (0x0002190a) volume_small_pane_srt

0x62e7,	// (0x00020dad) volume_small_pane_srt_g1_ParamLimits

0x62e7,	// (0x00020dad) volume_small_pane_srt_g1

0x62f7,	// (0x00020dbd) volume_small_pane_srt_g2_ParamLimits

0x62f7,	// (0x00020dbd) volume_small_pane_srt_g2

0x6308,	// (0x00020dce) volume_small_pane_srt_g3_ParamLimits

0x6308,	// (0x00020dce) volume_small_pane_srt_g3

0x6319,	// (0x00020ddf) volume_small_pane_srt_g4_ParamLimits

0x6319,	// (0x00020ddf) volume_small_pane_srt_g4

0x632a,	// (0x00020df0) volume_small_pane_srt_g5_ParamLimits

0x632a,	// (0x00020df0) volume_small_pane_srt_g5

0x633b,	// (0x00020e01) volume_small_pane_srt_g6_ParamLimits

0x633b,	// (0x00020e01) volume_small_pane_srt_g6

0x634c,	// (0x00020e12) volume_small_pane_srt_g7_ParamLimits

0x634c,	// (0x00020e12) volume_small_pane_srt_g7

0x635d,	// (0x00020e23) volume_small_pane_srt_g8_ParamLimits

0x635d,	// (0x00020e23) volume_small_pane_srt_g8

0x636e,	// (0x00020e34) volume_small_pane_srt_g9_ParamLimits

0x636e,	// (0x00020e34) volume_small_pane_srt_g9

0x637f,	// (0x00020e45) volume_small_pane_srt_g10_ParamLimits

0x637f,	// (0x00020e45) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002a229) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002a229) volume_small_pane_srt_g

0x7ff4,	// (0x00022aba) query_popup_data_pane_cp2

0xb1d3,	// (0x00025c99) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1d3,	// (0x00025c99) navi_navi_icon_text_pane_srt_t1

0xa297,	// (0x00024d5d) navi_tabs_2_long_pane_srt

0xa297,	// (0x00024d5d) navi_tabs_2_pane_srt

0xa297,	// (0x00024d5d) navi_tabs_3_long_pane_srt

0xa297,	// (0x00024d5d) navi_tabs_3_pane_srt

0xa297,	// (0x00024d5d) navi_tabs_4_pane_srt

0x6e1c,	// (0x000218e2) tabs_2_active_pane_srt_ParamLimits

0x6e1c,	// (0x000218e2) tabs_2_active_pane_srt

0x6e2c,	// (0x000218f2) tabs_2_passive_pane_srt_ParamLimits

0x6e2c,	// (0x000218f2) tabs_2_passive_pane_srt

0x944e,	// (0x00023f14) bg_passive_tab_pane_cp1_srt_ParamLimits

0x944e,	// (0x00023f14) bg_passive_tab_pane_cp1_srt

0xb19f,	// (0x00025c65) bg_passive_tab_pane_g1_cp1_srt

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp1_srt

0xb1a8,	// (0x00025c6e) bg_passive_tab_pane_g3_cp1_srt

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp1_srt

0xb1b1,	// (0x00025c77) tabs_2_active_pane_srt_g1

0xb1b9,	// (0x00025c7f) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b9,	// (0x00025c7f) tabs_2_active_pane_srt_t1

0xb19f,	// (0x00025c65) bg_active_tab_pane_g1_cp1_srt

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp1_srt

0xb1a8,	// (0x00025c6e) bg_active_tab_pane_g3_cp1_srt

0x6de9,	// (0x000218af) tabs_3_active_pane_srt_ParamLimits

0x6de9,	// (0x000218af) tabs_3_active_pane_srt

0x6dfa,	// (0x000218c0) tabs_3_passive_pane_cp_srt_ParamLimits

0x6dfa,	// (0x000218c0) tabs_3_passive_pane_cp_srt

0x6e0b,	// (0x000218d1) tabs_3_passive_pane_srt_ParamLimits

0x6e0b,	// (0x000218d1) tabs_3_passive_pane_srt

0x944e,	// (0x00023f14) bg_passive_tab_pane_cp2_srt_ParamLimits

0x944e,	// (0x00023f14) bg_passive_tab_pane_cp2_srt

0x92b4,	// (0x00023d7a) bg_passive_tab_pane_g1_cp2_srt

0x8d5b,	// (0x00023821) bg_passive_tab_pane_g2_cp2_srt

0x92bd,	// (0x00023d83) bg_passive_tab_pane_g3_cp2_srt

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c1a,	// (0x000226e0) bg_active_tab_pane_cp2_srt

0xb185,	// (0x00025c4b) tabs_3_active_pane_srt_g1

0xb18d,	// (0x00025c53) tabs_3_active_pane_srt_t1_ParamLimits

0xb18d,	// (0x00025c53) tabs_3_active_pane_srt_t1

0x92b4,	// (0x00023d7a) bg_active_tab_pane_g1_cp2_srt

0x8d5b,	// (0x00023821) bg_active_tab_pane_g2_cp2_srt

0x92bd,	// (0x00023d83) bg_active_tab_pane_g3_cp2_srt

0x6da1,	// (0x00021867) tabs_4_active_pane_srt_ParamLimits

0x6da1,	// (0x00021867) tabs_4_active_pane_srt

0x6db3,	// (0x00021879) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6db3,	// (0x00021879) tabs_4_passive_pane_cp2_srt

0x64e0,	// (0x00020fa6) aid_size_cell_toolbar

0x8676,	// (0x0002313c) main_idle_act_pane_ParamLimits

0x6677,	// (0x0002113d) popup_large_graphic_colour_window_ParamLimits

0x69de,	// (0x000214a4) popup_toolbar_window_ParamLimits

0x69de,	// (0x000214a4) popup_toolbar_window

0xafdd,	// (0x00025aa3) list_single_graphic_2heading_pane_ParamLimits

0xafdd,	// (0x00025aa3) list_single_graphic_2heading_pane

0x8832,	// (0x000232f8) aid_size_cell_apps_grid_lsc_pane

0x8844,	// (0x0002330a) aid_size_cell_apps_grid_prt_pane

0x944e,	// (0x00023f14) bg_wml_button_pane_cp1_ParamLimits

0x944e,	// (0x00023f14) bg_wml_button_pane_cp1

0x9c89,	// (0x0002474f) form_midp_field_text_pane_t1_ParamLimits

0x9a47,	// (0x0002450d) input_focus_pane_cp050_ParamLimits

0x9cc0,	// (0x00024786) list_midp_form_text_pane_ParamLimits

0x9c66,	// (0x0002472c) input_focus_pane_cp051_ParamLimits

0x9c7a,	// (0x00024740) list_midp_choice_pane_ParamLimits

0x9b00,	// (0x000245c6) list_single_2graphic_pane_cp3_ParamLimits

0x9b00,	// (0x000245c6) list_single_2graphic_pane_cp3

0x9b24,	// (0x000245ea) list_single_midp_graphic_pane_ParamLimits

0x9b24,	// (0x000245ea) list_single_midp_graphic_pane

0x523f,	// (0x0001fd05) list_single_graphic_2heading_pane_g1_ParamLimits

0x523f,	// (0x0001fd05) list_single_graphic_2heading_pane_g1

0x524b,	// (0x0001fd11) list_single_graphic_2heading_pane_g4_ParamLimits

0x524b,	// (0x0001fd11) list_single_graphic_2heading_pane_g4

0x5257,	// (0x0001fd1d) list_single_graphic_2heading_pane_g5_ParamLimits

0x5257,	// (0x0001fd1d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002a27c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002a27c) list_single_graphic_2heading_pane_g

0x5263,	// (0x0001fd29) list_single_graphic_2heading_pane_t1_ParamLimits

0x5263,	// (0x0001fd29) list_single_graphic_2heading_pane_t1

0x5277,	// (0x0001fd3d) list_single_graphic_2heading_pane_t2_ParamLimits

0x5277,	// (0x0001fd3d) list_single_graphic_2heading_pane_t2

0x5293,	// (0x0001fd59) list_single_graphic_2heading_pane_t3_ParamLimits

0x5293,	// (0x0001fd59) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002a283) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002a283) list_single_graphic_2heading_pane_t

0x9881,	// (0x00024347) bg_popup_sub_pane_cp2

0x98ab,	// (0x00024371) grid_toobar_pane

0x6a8b,	// (0x00021551) cell_toolbar_pane_ParamLimits

0x6a8b,	// (0x00021551) cell_toolbar_pane

0x98e7,	// (0x000243ad) cell_toolbar_pane_g1_ParamLimits

0x98e7,	// (0x000243ad) cell_toolbar_pane_g1

0x98fb,	// (0x000243c1) cell_toolbar_pane_g2_ParamLimits

0x98fb,	// (0x000243c1) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0002a291) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0002a291) cell_toolbar_pane_g

0x991d,	// (0x000243e3) grid_highlight_pane_cp2_ParamLimits

0x991d,	// (0x000243e3) grid_highlight_pane_cp2

0x9937,	// (0x000243fd) toolbar_button_pane

0x9943,	// (0x00024409) toolbar_button_pane_g1

0x994b,	// (0x00024411) toolbar_button_pane_g2

0x9953,	// (0x00024419) toolbar_button_pane_g3

0x995b,	// (0x00024421) toolbar_button_pane_g4

0x9963,	// (0x00024429) toolbar_button_pane_g5

0x996b,	// (0x00024431) toolbar_button_pane_g6

0x9973,	// (0x00024439) toolbar_button_pane_g7

0x997b,	// (0x00024441) toolbar_button_pane_g8

0x9983,	// (0x00024449) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0002a296) toolbar_button_pane_g

0x6ac3,	// (0x00021589) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6ac3,	// (0x00021589) list_single_2graphic_pane_g1_cp3

0x6acf,	// (0x00021595) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6acf,	// (0x00021595) list_single_2graphic_pane_g2_cp3

0x6ae0,	// (0x000215a6) list_single_2graphic_pane_g3_cp3

0x998b,	// (0x00024451) list_single_2graphic_pane_g4_cp3_ParamLimits

0x998b,	// (0x00024451) list_single_2graphic_pane_g4_cp3

0x6ae8,	// (0x000215ae) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6ae8,	// (0x000215ae) list_single_2graphic_pane_t1_cp3

0x8bf6,	// (0x000236bc) list_single_midp_graphic_pane_g2_ParamLimits

0x8bf6,	// (0x000236bc) list_single_midp_graphic_pane_g2

0x64e8,	// (0x00020fae) aid_zoom_text_primary

0x5213,	// (0x0001fcd9) aid_zoom_text_secondary

0x9371,	// (0x00023e37) status_small_pane_g7_ParamLimits

0x9371,	// (0x00023e37) status_small_pane_g7

0x9394,	// (0x00023e5a) status_small_pane_t1_ParamLimits

0x7b51,	// (0x00022617) title_pane_g2

0x0003,

0xf554,	// (0x0002a01a) title_pane_g

0x8095,	// (0x00022b5b) aid_size_cell_colour_1_pane_ParamLimits

0x8095,	// (0x00022b5b) aid_size_cell_colour_1_pane

0x80a9,	// (0x00022b6f) aid_size_cell_colour_2_pane_ParamLimits

0x80a9,	// (0x00022b6f) aid_size_cell_colour_2_pane

0x80bd,	// (0x00022b83) aid_size_cell_colour_3_pane_ParamLimits

0x80bd,	// (0x00022b83) aid_size_cell_colour_3_pane

0x80d1,	// (0x00022b97) aid_size_cell_colour_4_pane_ParamLimits

0x80d1,	// (0x00022b97) aid_size_cell_colour_4_pane

0x5f43,	// (0x00020a09) title_pane_stacon_g1_ParamLimits

0x5f43,	// (0x00020a09) title_pane_stacon_g1

0xa07e,	// (0x00024b44) popup_note_wait_window_g3_ParamLimits

0xa07e,	// (0x00024b44) popup_note_wait_window_g3

0xa0f4,	// (0x00024bba) popup_note_wait_window_t5_ParamLimits

0xa0f4,	// (0x00024bba) popup_note_wait_window_t5

0x7b3a,	// (0x00022600) main_feb_china_hwr_fs_writing_pane

0x655c,	// (0x00021022) popup_feb_china_hwr_fs_window_ParamLimits

0x655c,	// (0x00021022) popup_feb_china_hwr_fs_window

0x6b1a,	// (0x000215e0) aid_size_cell_hwr_fs_ParamLimits

0x6b1a,	// (0x000215e0) aid_size_cell_hwr_fs

0x9a47,	// (0x0002450d) bg_popup_sub_pane_cp3_ParamLimits

0x9a47,	// (0x0002450d) bg_popup_sub_pane_cp3

0x6b2f,	// (0x000215f5) grid_hwr_fs_pane_ParamLimits

0x6b2f,	// (0x000215f5) grid_hwr_fs_pane

0x6b47,	// (0x0002160d) linegrid_hwr_fs_pane_ParamLimits

0x6b47,	// (0x0002160d) linegrid_hwr_fs_pane

0x6b57,	// (0x0002161d) cell_hwr_fs_pane_ParamLimits

0x6b57,	// (0x0002161d) cell_hwr_fs_pane

0x9a53,	// (0x00024519) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a53,	// (0x00024519) linegrid_hwr_fs_pane_g1

0x9a5f,	// (0x00024525) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a5f,	// (0x00024525) linegrid_hwr_fs_pane_g2

0x9a71,	// (0x00024537) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a71,	// (0x00024537) linegrid_hwr_fs_pane_g3

0x6b79,	// (0x0002163f) linegrid_hwr_fs_pane_g4_ParamLimits

0x6b79,	// (0x0002163f) linegrid_hwr_fs_pane_g4

0x6b93,	// (0x00021659) linegrid_hwr_fs_pane_g5_ParamLimits

0x6b93,	// (0x00021659) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0002a2c1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002a2c1) linegrid_hwr_fs_pane_g

0x9a7d,	// (0x00024543) cell_hwr_fs_pane_g1_ParamLimits

0x9a7d,	// (0x00024543) cell_hwr_fs_pane_g1

0x97bb,	// (0x00024281) cell_hwr_fs_pane_g2_ParamLimits

0x97bb,	// (0x00024281) cell_hwr_fs_pane_g2

0x9a93,	// (0x00024559) cell_hwr_fs_pane_g3_ParamLimits

0x9a93,	// (0x00024559) cell_hwr_fs_pane_g3

0x9aa0,	// (0x00024566) cell_hwr_fs_pane_g4_ParamLimits

0x9aa0,	// (0x00024566) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0002a2cc) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0002a2cc) cell_hwr_fs_pane_g

0x6ba9,	// (0x0002166f) cell_hwr_fs_pane_t1

0x7b3a,	// (0x00022600) grid_highlight_pane_cp6

0x7b3a,	// (0x00022600) main_idle_act2_pane

0x85e9,	// (0x000230af) aid_inside_area_popup_secondary

0xa72b,	// (0x000251f1) aid_inside_area_window_primary_ParamLimits

0xa72b,	// (0x000251f1) aid_inside_area_window_primary

0xb2ec,	// (0x00025db2) ai2_news_ticker_pane

0xb2f4,	// (0x00025dba) aid_size_cell_ai1_link_ParamLimits

0xb2f4,	// (0x00025dba) aid_size_cell_ai1_link

0xb30e,	// (0x00025dd4) popup_ai2_data_window_ParamLimits

0xb30e,	// (0x00025dd4) popup_ai2_data_window

0xb324,	// (0x00025dea) popup_ai2_link_window_ParamLimits

0xb324,	// (0x00025dea) popup_ai2_link_window

0x9a47,	// (0x0002450d) bg_popup_sub_pane_cp4_ParamLimits

0x9a47,	// (0x0002450d) bg_popup_sub_pane_cp4

0xb338,	// (0x00025dfe) grid_ai2_link_pane_ParamLimits

0xb338,	// (0x00025dfe) grid_ai2_link_pane

0xb34f,	// (0x00025e15) popup_ai2_link_window_g1_ParamLimits

0xb34f,	// (0x00025e15) popup_ai2_link_window_g1

0xb35b,	// (0x00025e21) popup_ai2_link_window_g2_ParamLimits

0xb35b,	// (0x00025e21) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0002a49f) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0002a49f) popup_ai2_link_window_g

0xb36a,	// (0x00025e30) ai2_mp_button_pane

0xb372,	// (0x00025e38) ai2_mp_volume_pane

0x9c66,	// (0x0002472c) bg_popup_sub_pane_cp5_ParamLimits

0x9c66,	// (0x0002472c) bg_popup_sub_pane_cp5

0xb37a,	// (0x00025e40) heading_ai2_gene_pane_ParamLimits

0xb37a,	// (0x00025e40) heading_ai2_gene_pane

0xb386,	// (0x00025e4c) list_ai2_gene_pane_ParamLimits

0xb386,	// (0x00025e4c) list_ai2_gene_pane

0xb3ce,	// (0x00025e94) cell_ai2_link_pane_ParamLimits

0xb3ce,	// (0x00025e94) cell_ai2_link_pane

0xb3e4,	// (0x00025eaa) cell_ai2_link_pane_g1

0x7b3a,	// (0x00022600) grid_highlight_pane_cp7

0x6e59,	// (0x0002191f) ai2_mp_volume_pane_g1

0xb4b4,	// (0x00025f7a) ai2_mp_volume_pane_g2

0xb429,	// (0x00025eef) list_ai2_gene_pane_t1

0xb4bc,	// (0x00025f82) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0002a4b8) ai2_mp_volume_pane_g

0x6e61,	// (0x00021927) volume_small_pane_cp3

0xb4c4,	// (0x00025f8a) aid_size_cell_ai2_button

0xb4cc,	// (0x00025f92) grid_ai2_button_pane

0xb4d5,	// (0x00025f9b) cell_ai2_button_pane_ParamLimits

0xb4d5,	// (0x00025f9b) cell_ai2_button_pane

0x7b30,	// (0x000225f6) cell_ai2_button_pane_g1

0x7b3a,	// (0x00022600) grid_highlight_pane_cp8

0xb474,	// (0x00025f3a) ai2_gene_pane_t1_ParamLimits

0xb474,	// (0x00025f3a) ai2_gene_pane_t1

0x64d6,	// (0x00020f9c) aid_height_parent_landscape

0xadf9,	// (0x000258bf) aid_height_set_list

0xae0a,	// (0x000258d0) aid_size_parent

0xb113,	// (0x00025bd9) aid_size_cell_graphic_pane_ParamLimits

0xb396,	// (0x00025e5c) popup_ai2_data_window_g1_ParamLimits

0xb396,	// (0x00025e5c) popup_ai2_data_window_g1

0xb3a2,	// (0x00025e68) ai2_news_ticker_pane_g1

0xb3aa,	// (0x00025e70) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0002a4a4) ai2_news_ticker_pane_g

0xb3b2,	// (0x00025e78) ai2_news_ticker_pane_t1

0xb3c0,	// (0x00025e86) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0002a4a9) ai2_news_ticker_pane_t

0xb3ed,	// (0x00025eb3) heading_ai2_gene_pane_g1

0xb3f5,	// (0x00025ebb) heading_ai2_gene_pane_t1_ParamLimits

0xb3f5,	// (0x00025ebb) heading_ai2_gene_pane_t1

0xb40a,	// (0x00025ed0) list_highlight_pane_cp6

0xb412,	// (0x00025ed8) ai2_gene_pane_ParamLimits

0xb412,	// (0x00025ed8) ai2_gene_pane

0xb437,	// (0x00025efd) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0002a4ae) list_ai2_gene_pane_t

0xb445,	// (0x00025f0b) list_highlight_pane_cp8_ParamLimits

0xb445,	// (0x00025f0b) list_highlight_pane_cp8

0xb456,	// (0x00025f1c) ai2_gene_pane_g1_ParamLimits

0xb456,	// (0x00025f1c) ai2_gene_pane_g1

0xb468,	// (0x00025f2e) ai2_gene_pane_g2_ParamLimits

0xb468,	// (0x00025f2e) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0002a4b3) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0002a4b3) ai2_gene_pane_g

0x841c,	// (0x00022ee2) scroll_pane_cp12

0x6495,	// (0x00020f5b) control_pane_t3_ParamLimits

0x6495,	// (0x00020f5b) control_pane_t3

0x9385,	// (0x00023e4b) status_small_pane_g8_ParamLimits

0x9385,	// (0x00023e4b) status_small_pane_g8

0x6642,	// (0x00021108) popup_find_window_ParamLimits

0x6855,	// (0x0002131b) popup_note_image_window_ParamLimits

0x523f,	// (0x0001fd05) list_double2_graphic_pane_vc_g1_ParamLimits

0x523f,	// (0x0001fd05) list_double2_graphic_pane_vc_g1

0x52ab,	// (0x0001fd71) list_double2_graphic_pane_vc_g2_ParamLimits

0x52ab,	// (0x0001fd71) list_double2_graphic_pane_vc_g2

0x52b7,	// (0x0001fd7d) list_double2_graphic_pane_vc_g3_ParamLimits

0x52b7,	// (0x0001fd7d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0002a28a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002a28a) list_double2_graphic_pane_vc_g

0x52c3,	// (0x0001fd89) list_double2_graphic_pane_vc_t1_ParamLimits

0x52c3,	// (0x0001fd89) list_double2_graphic_pane_vc_t1

0x524b,	// (0x0001fd11) list_single_heading_pane_vc_g1_ParamLimits

0x524b,	// (0x0001fd11) list_single_heading_pane_vc_g1

0x5257,	// (0x0001fd1d) list_single_heading_pane_vc_g2_ParamLimits

0x5257,	// (0x0001fd1d) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002a2ab) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002a2ab) list_single_heading_pane_vc_g

0x52d9,	// (0x0001fd9f) list_single_heading_pane_vc_t1_ParamLimits

0x52d9,	// (0x0001fd9f) list_single_heading_pane_vc_t1

0x52f1,	// (0x0001fdb7) list_single_heading_pane_vc_t2_ParamLimits

0x52f1,	// (0x0001fdb7) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0002a2b0) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0002a2b0) list_single_heading_pane_vc_t

0x9997,	// (0x0002445d) list_setting_number_pane_vc_g1_ParamLimits

0x9997,	// (0x0002445d) list_setting_number_pane_vc_g1

0x99a3,	// (0x00024469) list_setting_number_pane_vc_g2_ParamLimits

0x99a3,	// (0x00024469) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002a2b5) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002a2b5) list_setting_number_pane_vc_g

0x99af,	// (0x00024475) list_setting_number_pane_vc_t1_ParamLimits

0x99af,	// (0x00024475) list_setting_number_pane_vc_t1

0x99c3,	// (0x00024489) list_setting_number_pane_vc_t2_ParamLimits

0x99c3,	// (0x00024489) list_setting_number_pane_vc_t2

0x99df,	// (0x000244a5) list_setting_number_pane_vc_t3_ParamLimits

0x99df,	// (0x000244a5) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0002a2ba) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0002a2ba) list_setting_number_pane_vc_t

0x9a0b,	// (0x000244d1) set_value_pane_vc_ParamLimits

0x9a0b,	// (0x000244d1) set_value_pane_vc

0xafdd,	// (0x00025aa3) list_double2_graphic_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double2_graphic_pane_vc

0xafdd,	// (0x00025aa3) list_double2_large_graphic_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double2_large_graphic_pane_vc

0xafdd,	// (0x00025aa3) list_double2_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double2_pane_vc

0xafdd,	// (0x00025aa3) list_double_graphic_heading_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double_graphic_heading_pane_vc

0xafdd,	// (0x00025aa3) list_double_graphic_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double_graphic_pane_vc

0xafdd,	// (0x00025aa3) list_double_heading_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double_heading_pane_vc

0xafdd,	// (0x00025aa3) list_double_large_graphic_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double_large_graphic_pane_vc

0xafdd,	// (0x00025aa3) list_double_number_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double_number_pane_vc

0xafdd,	// (0x00025aa3) list_double_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double_pane_vc

0xafdd,	// (0x00025aa3) list_double_time_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_double_time_pane_vc

0xafdd,	// (0x00025aa3) list_setting_number_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_setting_number_pane_vc

0xafdd,	// (0x00025aa3) list_setting_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_setting_pane_vc

0xafdd,	// (0x00025aa3) list_single_graphic_heading_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_single_graphic_heading_pane_vc

0xafdd,	// (0x00025aa3) list_single_heading_pane_vc_ParamLimits

0xafdd,	// (0x00025aa3) list_single_heading_pane_vc

0x53ce,	// (0x0001fe94) list_single_number_heading_pane_vc_ParamLimits

0x53ce,	// (0x0001fe94) list_single_number_heading_pane_vc

0x546a,	// (0x0001ff30) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x546a,	// (0x0001ff30) list_double_graphic_heading_pane_vc_g1

0x524b,	// (0x0001fd11) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x524b,	// (0x0001fd11) list_double_graphic_heading_pane_vc_g2

0x5257,	// (0x0001fd1d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5257,	// (0x0001fd1d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x0002a4bf) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0002a4bf) list_double_graphic_heading_pane_vc_g

0x5476,	// (0x0001ff3c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5476,	// (0x0001ff3c) list_double_graphic_heading_pane_vc_t1

0x52d9,	// (0x0001fd9f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x52d9,	// (0x0001fd9f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x0002a4c6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x0002a4c6) list_double_graphic_heading_pane_vc_t

0x9997,	// (0x0002445d) list_setting_pane_vc_g1_ParamLimits

0x9997,	// (0x0002445d) list_setting_pane_vc_g1

0x99a3,	// (0x00024469) list_setting_pane_vc_g2_ParamLimits

0x99a3,	// (0x00024469) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002a2b5) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002a2b5) list_setting_pane_vc_g

0xb715,	// (0x000261db) list_setting_pane_vc_t1_ParamLimits

0xb715,	// (0x000261db) list_setting_pane_vc_t1

0xb731,	// (0x000261f7) list_setting_pane_vc_t2_ParamLimits

0xb731,	// (0x000261f7) list_setting_pane_vc_t2

0x0001,

0xfa2e,	// (0x0002a4f4) list_setting_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002a4f4) list_setting_pane_vc_t

0x9a0b,	// (0x000244d1) set_value_pane_cp_vc_ParamLimits

0x9a0b,	// (0x000244d1) set_value_pane_cp_vc

0x524b,	// (0x0001fd11) list_single_number_heading_pane_vc_g1_ParamLimits

0x524b,	// (0x0001fd11) list_single_number_heading_pane_vc_g1

0x5257,	// (0x0001fd1d) list_single_number_heading_pane_vc_g2_ParamLimits

0x5257,	// (0x0001fd1d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002a2ab) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002a2ab) list_single_number_heading_pane_vc_g

0x52d9,	// (0x0001fd9f) list_single_number_heading_pane_vc_t1_ParamLimits

0x52d9,	// (0x0001fd9f) list_single_number_heading_pane_vc_t1

0x548a,	// (0x0001ff50) list_single_number_heading_pane_vc_t2_ParamLimits

0x548a,	// (0x0001ff50) list_single_number_heading_pane_vc_t2

0x549e,	// (0x0001ff64) list_single_number_heading_pane_vc_t3_ParamLimits

0x549e,	// (0x0001ff64) list_single_number_heading_pane_vc_t3

0x0002,

0xfa33,	// (0x0002a4f9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002a4f9) list_single_number_heading_pane_vc_t

0x523f,	// (0x0001fd05) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x523f,	// (0x0001fd05) list_single_graphic_heading_pane_vc_g1

0x524b,	// (0x0001fd11) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x524b,	// (0x0001fd11) list_single_graphic_heading_pane_vc_g4

0x5257,	// (0x0001fd1d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5257,	// (0x0001fd1d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x0002a27c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002a27c) list_single_graphic_heading_pane_vc_g

0x52d9,	// (0x0001fd9f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x52d9,	// (0x0001fd9f) list_single_graphic_heading_pane_vc_t1

0x54b0,	// (0x0001ff76) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x54b0,	// (0x0001ff76) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3a,	// (0x0002a500) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0002a500) list_single_graphic_heading_pane_vc_t

0x524b,	// (0x0001fd11) list_double2_pane_vc_g1_ParamLimits

0x524b,	// (0x0001fd11) list_double2_pane_vc_g1

0x5257,	// (0x0001fd1d) list_double2_pane_vc_g2_ParamLimits

0x5257,	// (0x0001fd1d) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002a2ab) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002a2ab) list_double2_pane_vc_g

0x54c4,	// (0x0001ff8a) list_double2_pane_vc_t1_ParamLimits

0x54c4,	// (0x0001ff8a) list_double2_pane_vc_t1

0x54da,	// (0x0001ffa0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x54da,	// (0x0001ffa0) list_double2_large_graphic_pane_vc_g1

0x524b,	// (0x0001fd11) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x524b,	// (0x0001fd11) list_double2_large_graphic_pane_vc_g2

0x5257,	// (0x0001fd1d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5257,	// (0x0001fd1d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3f,	// (0x0002a505) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3f,	// (0x0002a505) list_double2_large_graphic_pane_vc_g

0x54e6,	// (0x0001ffac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x54e6,	// (0x0001ffac) list_double2_large_graphic_pane_vc_t1

0x54fc,	// (0x0001ffc2) list_double_time_pane_vc_g1_ParamLimits

0x54fc,	// (0x0001ffc2) list_double_time_pane_vc_g1

0x5508,	// (0x0001ffce) list_double_time_pane_vc_g2_ParamLimits

0x5508,	// (0x0001ffce) list_double_time_pane_vc_g2

0x0001,

0xfa46,	// (0x0002a50c) list_double_time_pane_vc_g_ParamLimits

0xfa46,	// (0x0002a50c) list_double_time_pane_vc_g

0x5514,	// (0x0001ffda) list_double_time_pane_vc_t1_ParamLimits

0x5514,	// (0x0001ffda) list_double_time_pane_vc_t1

0x5538,	// (0x0001fffe) list_double_time_pane_vc_t2_ParamLimits

0x5538,	// (0x0001fffe) list_double_time_pane_vc_t2

0x5582,	// (0x00020048) list_double_time_pane_vc_t3_ParamLimits

0x5582,	// (0x00020048) list_double_time_pane_vc_t3

0x5594,	// (0x0002005a) list_double_time_pane_vc_t4_ParamLimits

0x5594,	// (0x0002005a) list_double_time_pane_vc_t4

0x0003,

0xfa4b,	// (0x0002a511) list_double_time_pane_vc_t_ParamLimits

0xfa4b,	// (0x0002a511) list_double_time_pane_vc_t

0x524b,	// (0x0001fd11) list_double_pane_vc_g1_ParamLimits

0x524b,	// (0x0001fd11) list_double_pane_vc_g1

0x5257,	// (0x0001fd1d) list_double_pane_vc_g2_ParamLimits

0x5257,	// (0x0001fd1d) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002a2ab) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002a2ab) list_double_pane_vc_g

0x55b9,	// (0x0002007f) list_double_pane_vc_t1_ParamLimits

0x55b9,	// (0x0002007f) list_double_pane_vc_t1

0x55cd,	// (0x00020093) list_double_pane_vc_t2_ParamLimits

0x55cd,	// (0x00020093) list_double_pane_vc_t2

0x0001,

0xfa54,	// (0x0002a51a) list_double_pane_vc_t_ParamLimits

0xfa54,	// (0x0002a51a) list_double_pane_vc_t

0x524b,	// (0x0001fd11) list_double_number_pane_vc_g1_ParamLimits

0x524b,	// (0x0001fd11) list_double_number_pane_vc_g1

0x5257,	// (0x0001fd1d) list_double_number_pane_vc_g2_ParamLimits

0x5257,	// (0x0001fd1d) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002a2ab) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002a2ab) list_double_number_pane_vc_g

0x55e5,	// (0x000200ab) list_double_number_pane_vc_t1_ParamLimits

0x55e5,	// (0x000200ab) list_double_number_pane_vc_t1

0x55f9,	// (0x000200bf) list_double_number_pane_vc_t2_ParamLimits

0x55f9,	// (0x000200bf) list_double_number_pane_vc_t2

0x55cd,	// (0x00020093) list_double_number_pane_vc_t3_ParamLimits

0x55cd,	// (0x00020093) list_double_number_pane_vc_t3

0x0002,

0xfa59,	// (0x0002a51f) list_double_number_pane_vc_t_ParamLimits

0xfa59,	// (0x0002a51f) list_double_number_pane_vc_t

0x560d,	// (0x000200d3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x560d,	// (0x000200d3) list_double_large_graphic_pane_vc_g1

0x561e,	// (0x000200e4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x561e,	// (0x000200e4) list_double_large_graphic_pane_vc_g2

0x5257,	// (0x0001fd1d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5257,	// (0x0001fd1d) list_double_large_graphic_pane_vc_g3

0x562d,	// (0x000200f3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x562d,	// (0x000200f3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa60,	// (0x0002a526) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa60,	// (0x0002a526) list_double_large_graphic_pane_vc_g

0x5639,	// (0x000200ff) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5639,	// (0x000200ff) list_double_large_graphic_pane_vc_t1

0x5652,	// (0x00020118) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5652,	// (0x00020118) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa69,	// (0x0002a52f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa69,	// (0x0002a52f) list_double_large_graphic_pane_vc_t

0x524b,	// (0x0001fd11) list_double_heading_pane_vc_g1_ParamLimits

0x524b,	// (0x0001fd11) list_double_heading_pane_vc_g1

0x5257,	// (0x0001fd1d) list_double_heading_pane_vc_g2_ParamLimits

0x5257,	// (0x0001fd1d) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002a2ab) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002a2ab) list_double_heading_pane_vc_g

0x566b,	// (0x00020131) list_double_heading_pane_vc_t1_ParamLimits

0x566b,	// (0x00020131) list_double_heading_pane_vc_t1

0x52d9,	// (0x0001fd9f) list_double_heading_pane_vc_t2_ParamLimits

0x52d9,	// (0x0001fd9f) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0002a534) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0002a534) list_double_heading_pane_vc_t

0x567f,	// (0x00020145) list_double_graphic_pane_vc_g1_ParamLimits

0x567f,	// (0x00020145) list_double_graphic_pane_vc_g1

0x568f,	// (0x00020155) list_double_graphic_pane_vc_g2_ParamLimits

0x568f,	// (0x00020155) list_double_graphic_pane_vc_g2

0x569e,	// (0x00020164) list_double_graphic_pane_vc_g3_ParamLimits

0x569e,	// (0x00020164) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0002a539) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0002a539) list_double_graphic_pane_vc_g

0x56aa,	// (0x00020170) list_double_graphic_pane_vc_t1_ParamLimits

0x56aa,	// (0x00020170) list_double_graphic_pane_vc_t1

0x55cd,	// (0x00020093) list_double_graphic_pane_vc_t2_ParamLimits

0x55cd,	// (0x00020093) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0002a540) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0002a540) list_double_graphic_pane_vc_t

0x5aa9,	// (0x0002056f) aid_size_cell_fastswap

0x5ab1,	// (0x00020577) aid_size_cell_touch_ParamLimits

0x5ab1,	// (0x00020577) aid_size_cell_touch

0x5d0c,	// (0x000207d2) popup_fast_swap_wide_window_ParamLimits

0x5d0c,	// (0x000207d2) popup_fast_swap_wide_window

0x5e16,	// (0x000208dc) touch_pane_ParamLimits

0x5e16,	// (0x000208dc) touch_pane

0x8472,	// (0x00022f38) button_value_adjust_pane_cp2

0x4f37,	// (0x0001f9fd) button_value_adjust_pane_cp4

0x4f57,	// (0x0001fa1d) form_field_data_pane_cp2

0x4f76,	// (0x0001fa3c) form_field_data_wide_pane_cp2

0x88fd,	// (0x000233c3) bg_scroll_pane_ParamLimits

0x60a6,	// (0x00020b6c) scroll_handle_pane_ParamLimits

0x60ba,	// (0x00020b80) scroll_sc2_down_pane_ParamLimits

0x60ba,	// (0x00020b80) scroll_sc2_down_pane

0x892e,	// (0x000233f4) scroll_sc2_up_pane_ParamLimits

0x892e,	// (0x000233f4) scroll_sc2_up_pane

0xbbf2,	// (0x000266b8) grid_wheel_folder_pane_g1_ParamLimits

0xbbf2,	// (0x000266b8) grid_wheel_folder_pane_g1

0x627f,	// (0x00020d45) clock_nsta_pane_cp2_ParamLimits

0x627f,	// (0x00020d45) clock_nsta_pane_cp2

0x8676,	// (0x0002313c) listscroll_midp_pane_ParamLimits

0x9116,	// (0x00023bdc) midp_canvas_pane

0x9400,	// (0x00023ec6) nsta_clock_indic_pane

0x9434,	// (0x00023efa) listscroll_form_pane_vc

0x943c,	// (0x00023f02) listscroll_set_pane_vc_ParamLimits

0x943c,	// (0x00023f02) listscroll_set_pane_vc

0x953d,	// (0x00024003) clock_nsta_pane

0x95b2,	// (0x00024078) indicator_nsta_pane

0x9881,	// (0x00024347) bg_popup_sub_pane_cp2_ParamLimits

0x9895,	// (0x0002435b) find_pane_cp2_ParamLimits

0x9895,	// (0x0002435b) find_pane_cp2

0x98ab,	// (0x00024371) grid_toobar_pane_ParamLimits

0x9a1b,	// (0x000244e1) list_form_gen_pane_vc_ParamLimits

0x9a1b,	// (0x000244e1) list_form_gen_pane_vc

0x9a31,	// (0x000244f7) scroll_pane_cp8_vc_ParamLimits

0x9a31,	// (0x000244f7) scroll_pane_cp8_vc

0x9aad,	// (0x00024573) data_form_wide_pane_vc_ParamLimits

0x9aad,	// (0x00024573) data_form_wide_pane_vc

0x9ab9,	// (0x0002457f) form_field_data_wide_pane_vc_g1

0x9ac1,	// (0x00024587) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ac1,	// (0x00024587) form_field_data_wide_pane_vc_t1

0x8486,	// (0x00022f4c) input_focus_pane_cp6_vc_ParamLimits

0x8486,	// (0x00022f4c) input_focus_pane_cp6_vc

0x9df9,	// (0x000248bf) list_midp_pane_ParamLimits

0x9e05,	// (0x000248cb) scroll_pane_cp16_ParamLimits

0x9e05,	// (0x000248cb) scroll_pane_cp16

0x9e53,	// (0x00024919) button_value_adjust_pane_ParamLimits

0x9e53,	// (0x00024919) button_value_adjust_pane

0xae1c,	// (0x000258e2) button_value_adjust_pane_cp6_ParamLimits

0xae1c,	// (0x000258e2) button_value_adjust_pane_cp6

0xaf46,	// (0x00025a0c) settings_code_pane_cp_ParamLimits

0xaf46,	// (0x00025a0c) settings_code_pane_cp

0x7b30,	// (0x000225f6) cell_touch_pane_g1

0x7b30,	// (0x000225f6) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002a1cf) cell_touch_pane_g

0xb4e7,	// (0x00025fad) cell_touch_pane_cp_ParamLimits

0xb4e7,	// (0x00025fad) cell_touch_pane_cp

0xb4f7,	// (0x00025fbd) cell_touch_pane_ParamLimits

0xb4f7,	// (0x00025fbd) cell_touch_pane

0x7b30,	// (0x000225f6) scroll_sc2_down_pane_g1

0x7b30,	// (0x000225f6) scroll_sc2_up_pane_g1

0x7b3a,	// (0x00022600) bg_set_opt_pane_cp4_vc

0xb509,	// (0x00025fcf) list_set_graphic_pane_vc_g1_ParamLimits

0xb509,	// (0x00025fcf) list_set_graphic_pane_vc_g1

0xb515,	// (0x00025fdb) list_set_graphic_pane_vc_g2_ParamLimits

0xb515,	// (0x00025fdb) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x0002a4cb) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x0002a4cb) list_set_graphic_pane_vc_g

0xb521,	// (0x00025fe7) text_primary_small_cp13_vc_ParamLimits

0xb521,	// (0x00025fe7) text_primary_small_cp13_vc

0xb539,	// (0x00025fff) list_set_graphic_pane_vc_ParamLimits

0xb539,	// (0x00025fff) list_set_graphic_pane_vc

0x7b3a,	// (0x00022600) input_focus_pane_cp2_vc

0x7b30,	// (0x000225f6) setting_code_pane_vc_g1

0x7c65,	// (0x0002272b) setting_code_pane_vc_t1

0xb54b,	// (0x00026011) set_text_pane_vc_t1_ParamLimits

0xb54b,	// (0x00026011) set_text_pane_vc_t1

0x7b3a,	// (0x00022600) input_focus_pane_cp1_vc

0xb566,	// (0x0002602c) list_set_text_pane_vc

0x7b30,	// (0x000225f6) setting_text_pane_vc_g1

0x7b3a,	// (0x00022600) bg_set_opt_pane_cp2_vc

0x7c5c,	// (0x00022722) setting_slider_graphic_pane_vc_g1

0xb570,	// (0x00026036) setting_slider_graphic_pane_vc_t1

0xb580,	// (0x00026046) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x0002a4d0) setting_slider_graphic_pane_vc_t

0xb590,	// (0x00026056) slider_set_pane_cp_vc

0xb598,	// (0x0002605e) slider_set_pane_vc_g1

0xb5a1,	// (0x00026067) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0002a4d5) slider_set_pane_vc_g

0x84ed,	// (0x00022fb3) set_opt_bg_pane_g1_copy1

0x84f5,	// (0x00022fbb) set_opt_bg_pane_g2_copy1

0xb5cd,	// (0x00026093) set_opt_bg_pane_g3_copy1

0x8505,	// (0x00022fcb) set_opt_bg_pane_g4_copy1

0x850d,	// (0x00022fd3) set_opt_bg_pane_g5_copy1

0x8515,	// (0x00022fdb) set_opt_bg_pane_g6_copy1

0xb5d7,	// (0x0002609d) set_opt_bg_pane_g7_copy1

0xb5df,	// (0x000260a5) set_opt_bg_pane_g8_copy1

0xb5e9,	// (0x000260af) set_opt_bg_pane_g9_copy1

0x7b3a,	// (0x00022600) bg_set_opt_pane_cp_vc

0xb5f3,	// (0x000260b9) setting_slider_pane_vc_t1

0xb602,	// (0x000260c8) setting_slider_pane_vc_t2

0xb612,	// (0x000260d8) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0002a4e4) setting_slider_pane_vc_t

0xb622,	// (0x000260e8) slider_set_pane_vc

0x6bb7,	// (0x0002167d) volume_set_pane_vc_g1

0x6bc0,	// (0x00021686) volume_set_pane_vc_g2

0x6bc9,	// (0x0002168f) volume_set_pane_vc_g3

0x6bd2,	// (0x00021698) volume_set_pane_vc_g4

0x6bdb,	// (0x000216a1) volume_set_pane_vc_g5

0x6be4,	// (0x000216aa) volume_set_pane_vc_g6

0x6bed,	// (0x000216b3) volume_set_pane_vc_g7

0x6bf6,	// (0x000216bc) volume_set_pane_vc_g8

0x6bff,	// (0x000216c5) volume_set_pane_vc_g9

0x6c08,	// (0x000216ce) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x0002a382) volume_set_pane_vc_g

0xb62a,	// (0x000260f0) volume_set_pane_vc

0xb632,	// (0x000260f8) button_value_adjust_pane_cp1_vc

0xb63c,	// (0x00026102) list_highlight_pane_cp2_vc

0xb645,	// (0x0002610b) list_set_pane_vc_ParamLimits

0xb645,	// (0x0002610b) list_set_pane_vc

0xb6a3,	// (0x00026169) main_pane_set_vc_t1_ParamLimits

0xb6a3,	// (0x00026169) main_pane_set_vc_t1

0xb6b8,	// (0x0002617e) main_pane_set_vc_t2_ParamLimits

0xb6b8,	// (0x0002617e) main_pane_set_vc_t2

0xb6ca,	// (0x00026190) main_pane_set_vc_t3_ParamLimits

0xb6ca,	// (0x00026190) main_pane_set_vc_t3

0xb6de,	// (0x000261a4) main_pane_set_vc_t4_ParamLimits

0xb6de,	// (0x000261a4) main_pane_set_vc_t4

0x0003,

0xfa25,	// (0x0002a4eb) main_pane_set_vc_t_ParamLimits

0xfa25,	// (0x0002a4eb) main_pane_set_vc_t

0xb6f2,	// (0x000261b8) setting_code_pane_vc_ParamLimits

0xb6f2,	// (0x000261b8) setting_code_pane_vc

0xb703,	// (0x000261c9) setting_slider_graphic_pane_vc

0xb703,	// (0x000261c9) setting_slider_pane_vc

0xb703,	// (0x000261c9) setting_text_pane_vc

0xb703,	// (0x000261c9) setting_volume_pane_vc

0xb70d,	// (0x000261d3) scroll_pane_cp121_vc

0x8460,	// (0x00022f26) set_content_pane_vc

0xb74d,	// (0x00026213) button_value_adjust_pane_g1

0xb756,	// (0x0002621c) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0002a545) button_value_adjust_pane_g

0xb75f,	// (0x00026225) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb75f,	// (0x00026225) form_field_slider_wide_pane_vc_t1

0xb773,	// (0x00026239) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb773,	// (0x00026239) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0002a54a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0002a54a) form_field_slider_wide_pane_vc_t

0x7e95,	// (0x0002295b) input_focus_pane_cp10_vc_ParamLimits

0x7e95,	// (0x0002295b) input_focus_pane_cp10_vc

0xb7a1,	// (0x00026267) slider_cont_pane_cp1_vc_ParamLimits

0xb7a1,	// (0x00026267) slider_cont_pane_cp1_vc

0xb7b3,	// (0x00026279) slider_form_pane_g1_cp2

0xb5a1,	// (0x00026067) slider_form_pane_g2_cp2

0xb7e0,	// (0x000262a6) form_field_slider_pane_vc_t3

0xb7ee,	// (0x000262b4) form_field_slider_pane_vc_t4

0xb7fc,	// (0x000262c2) slider_form_pane_vc_ParamLimits

0xb7fc,	// (0x000262c2) slider_form_pane_vc

0xb809,	// (0x000262cf) form_field_slider_pane_vc_t1_ParamLimits

0xb809,	// (0x000262cf) form_field_slider_pane_vc_t1

0xb773,	// (0x00026239) form_field_slider_pane_vc_t2_ParamLimits

0xb773,	// (0x00026239) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0002a55c) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0002a55c) form_field_slider_pane_vc_t

0x7e95,	// (0x0002295b) input_focus_pane_cp9_vc_ParamLimits

0x7e95,	// (0x0002295b) input_focus_pane_cp9_vc

0xb825,	// (0x000262eb) slider_cont_pane_vc_ParamLimits

0xb825,	// (0x000262eb) slider_cont_pane_vc

0xb839,	// (0x000262ff) list_form_graphic_pane_cp_vc_ParamLimits

0xb839,	// (0x000262ff) list_form_graphic_pane_cp_vc

0x9ab9,	// (0x0002457f) form_field_popup_wide_pane_vc_g1

0xb84e,	// (0x00026314) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb84e,	// (0x00026314) form_field_popup_wide_pane_vc_t1

0x8486,	// (0x00022f4c) input_focus_pane_cp8_vc_ParamLimits

0x8486,	// (0x00022f4c) input_focus_pane_cp8_vc

0xb893,	// (0x00026359) list_form_wide_pane_vc_ParamLimits

0xb893,	// (0x00026359) list_form_wide_pane_vc

0xb89f,	// (0x00026365) list_form_graphic_pane_vc_g1

0xb8a7,	// (0x0002636d) list_form_graphic_pane_vc_t1_ParamLimits

0xb8a7,	// (0x0002636d) list_form_graphic_pane_vc_t1

0x7c1a,	// (0x000226e0) list_highlight_pane_cp5_vc_ParamLimits

0x7c1a,	// (0x000226e0) list_highlight_pane_cp5_vc

0xb8c3,	// (0x00026389) list_form_graphic_pane_vc_ParamLimits

0xb8c3,	// (0x00026389) list_form_graphic_pane_vc

0x9ab9,	// (0x0002457f) form_field_popup_pane_vc_g1

0xb8d9,	// (0x0002639f) form_field_popup_pane_vc_t1_ParamLimits

0xb8d9,	// (0x0002639f) form_field_popup_pane_vc_t1

0x8486,	// (0x00022f4c) input_focus_pane_cp7_vc_ParamLimits

0x8486,	// (0x00022f4c) input_focus_pane_cp7_vc

0xb8f0,	// (0x000263b6) list_form_pane_vc_ParamLimits

0xb8f0,	// (0x000263b6) list_form_pane_vc

0xb8fc,	// (0x000263c2) data_form_pane_vc_t1_ParamLimits

0xb8fc,	// (0x000263c2) data_form_pane_vc_t1

0x84ed,	// (0x00022fb3) input_focus_pane_vc_g1

0x84f5,	// (0x00022fbb) input_focus_pane_vc_g2

0x84fd,	// (0x00022fc3) input_focus_pane_vc_g3

0x8505,	// (0x00022fcb) input_focus_pane_vc_g4

0x850d,	// (0x00022fd3) input_focus_pane_vc_g5

0x8515,	// (0x00022fdb) input_focus_pane_vc_g6

0x851d,	// (0x00022fe3) input_focus_pane_vc_g7

0x8525,	// (0x00022feb) input_focus_pane_vc_g8

0x852d,	// (0x00022ff3) input_focus_pane_vc_g9

0x7b30,	// (0x000225f6) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002a158) input_focus_pane_vc_g

0x9aad,	// (0x00024573) data_form_pane_vc_ParamLimits

0x9aad,	// (0x00024573) data_form_pane_vc

0x9ab9,	// (0x0002457f) form_field_data_pane_vc_g1

0xb917,	// (0x000263dd) form_field_data_pane_vc_t1_ParamLimits

0xb917,	// (0x000263dd) form_field_data_pane_vc_t1

0x8486,	// (0x00022f4c) input_focus_pane_vc_ParamLimits

0x8486,	// (0x00022f4c) input_focus_pane_vc

0xb931,	// (0x000263f7) button_value_adjust_pane_cp3_vc

0xb939,	// (0x000263ff) button_value_adjust_pane_cp5_vc

0xb941,	// (0x00026407) form_field_data_pane_vc_ParamLimits

0xb941,	// (0x00026407) form_field_data_pane_vc

0xb958,	// (0x0002641e) form_field_data_pane_vc_cp2

0xb960,	// (0x00026426) form_field_data_wide_pane_vc_ParamLimits

0xb960,	// (0x00026426) form_field_data_wide_pane_vc

0xb976,	// (0x0002643c) form_field_data_wide_pane_vc_cp2

0xb97e,	// (0x00026444) form_field_popup_pane_vc_ParamLimits

0xb97e,	// (0x00026444) form_field_popup_pane_vc

0xb995,	// (0x0002645b) form_field_popup_wide_pane_vc_ParamLimits

0xb995,	// (0x0002645b) form_field_popup_wide_pane_vc

0xb9ab,	// (0x00026471) form_field_slider_pane_vc_ParamLimits

0xb9ab,	// (0x00026471) form_field_slider_pane_vc

0xb9be,	// (0x00026484) form_field_slider_wide_pane_vc_ParamLimits

0xb9be,	// (0x00026484) form_field_slider_wide_pane_vc

0xb9d1,	// (0x00026497) grid_touch_1_pane_ParamLimits

0xb9d1,	// (0x00026497) grid_touch_1_pane

0xb9dd,	// (0x000264a3) grid_touch_2_pane_ParamLimits

0xb9dd,	// (0x000264a3) grid_touch_2_pane

0x93cb,	// (0x00023e91) touch_pane_g1_ParamLimits

0x93cb,	// (0x00023e91) touch_pane_g1

0xb9f5,	// (0x000264bb) cell_app_pane_cp_wide_ParamLimits

0xb9f5,	// (0x000264bb) cell_app_pane_cp_wide

0xba06,	// (0x000264cc) grid_popup_fast_wide_pane_ParamLimits

0xba06,	// (0x000264cc) grid_popup_fast_wide_pane

0xba1a,	// (0x000264e0) scroll_pane_cp19_ParamLimits

0xba1a,	// (0x000264e0) scroll_pane_cp19

0x7b3a,	// (0x00022600) bg_popup_window_pane_cp20

0xba2e,	// (0x000264f4) listscroll_popup_fast_wide_pane

0x7c1a,	// (0x000226e0) grid_indicator_nsta_pane

0xba36,	// (0x000264fc) clock_nsta_pane_g1

0xba3f,	// (0x00026505) clock_nsta_pane_t1

0xba5b,	// (0x00026521) cell_indicator_nsta_pane_ParamLimits

0xba5b,	// (0x00026521) cell_indicator_nsta_pane

0xba93,	// (0x00026559) cell_indicator_nsta_pane_g1

0xbaa1,	// (0x00026567) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0002a56d) cell_indicator_nsta_pane_g

0xbab7,	// (0x0002657d) clock_nsta_pane_cp

0xbabf,	// (0x00026585) indicator_nsta_pane_cp

0xbac8,	// (0x0002658e) nsta_clock_indic_pane_g1

0x7ce3,	// (0x000227a9) grid_indicator_pane

0x8a23,	// (0x000234e9) scroll_pane_cp29

0x61ce,	// (0x00020c94) indicator_nsta_pane_cp2_ParamLimits

0x61ce,	// (0x00020c94) indicator_nsta_pane_cp2

0x7c1a,	// (0x000226e0) main_apps_wheel_pane

0x9cda,	// (0x000247a0) form_midp_field_text_pane_ParamLimits

0x9e25,	// (0x000248eb) scroll_bar_cp050_ParamLimits

0xbb31,	// (0x000265f7) cell_indicator_pane_ParamLimits

0xbb31,	// (0x000265f7) cell_indicator_pane

0xbb48,	// (0x0002660e) cell_indicator_pane_g1

0xbb52,	// (0x00026618) grid_wheel_folder_pane_ParamLimits

0xbb52,	// (0x00026618) grid_wheel_folder_pane

0xbb66,	// (0x0002662c) list_wheel_apps_pane_ParamLimits

0xbb66,	// (0x0002662c) list_wheel_apps_pane

0xbb77,	// (0x0002663d) main_apps_wheel_pane_g1_ParamLimits

0xbb77,	// (0x0002663d) main_apps_wheel_pane_g1

0xbb8b,	// (0x00026651) main_apps_wheel_pane_g2_ParamLimits

0xbb8b,	// (0x00026651) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0002a589) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0002a589) main_apps_wheel_pane_g

0xbba3,	// (0x00026669) main_apps_wheel_pane_t1_ParamLimits

0xbba3,	// (0x00026669) main_apps_wheel_pane_t1

0xbbc6,	// (0x0002668c) list_wheel_apps_pane_g1

0xbbce,	// (0x00026694) list_wheel_apps_pane_g2

0xbbd6,	// (0x0002669c) list_wheel_apps_pane_g3

0xbbde,	// (0x000266a4) list_wheel_apps_pane_g4

0xbbe8,	// (0x000266ae) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0002a58e) list_wheel_apps_pane_g

0x8f8e,	// (0x00023a54) navi_icon_text_pane

0x9470,	// (0x00023f36) aid_fill_nsta

0xbc0b,	// (0x000266d1) navi_icon_text_pane_g1

0xbc17,	// (0x000266dd) navi_icon_text_pane_t1

0x8e2c,	// (0x000238f2) list_set_graphic_pane_t1_ParamLimits

0x8e2c,	// (0x000238f2) list_set_graphic_pane_t1

0xa574,	// (0x0002503a) popup_midp_note_alarm_window_t6_ParamLimits

0xa574,	// (0x0002503a) popup_midp_note_alarm_window_t6

0xa586,	// (0x0002504c) popup_midp_note_alarm_window_t7_ParamLimits

0xa586,	// (0x0002504c) popup_midp_note_alarm_window_t7

0xa598,	// (0x0002505e) popup_midp_note_alarm_window_t8_ParamLimits

0xa598,	// (0x0002505e) popup_midp_note_alarm_window_t8

0xa5aa,	// (0x00025070) popup_midp_note_alarm_window_t9_ParamLimits

0xa5aa,	// (0x00025070) popup_midp_note_alarm_window_t9

0xa5bc,	// (0x00025082) popup_midp_note_alarm_window_t10_ParamLimits

0xa5bc,	// (0x00025082) popup_midp_note_alarm_window_t10

0xa5ce,	// (0x00025094) popup_midp_note_alarm_window_t11_ParamLimits

0xa5ce,	// (0x00025094) popup_midp_note_alarm_window_t11

0xa5e0,	// (0x000250a6) scroll_pane_cp17_ParamLimits

0xa5e0,	// (0x000250a6) scroll_pane_cp17

0x6bb7,	// (0x0002167d) volume_small_pane_cp_g1

0x6e6a,	// (0x00021930) volume_small_pane_cp_g2

0x6e73,	// (0x00021939) volume_small_pane_cp_g3

0x6e7c,	// (0x00021942) volume_small_pane_cp_g4

0x6e85,	// (0x0002194b) volume_small_pane_cp_g5

0x6e8e,	// (0x00021954) volume_small_pane_cp_g6

0x6e97,	// (0x0002195d) volume_small_pane_cp_g7

0x6ea0,	// (0x00021966) volume_small_pane_cp_g8

0x6ea9,	// (0x0002196f) volume_small_pane_cp_g9

0x6eb2,	// (0x00021978) volume_small_pane_cp_g10

0x91dd,	// (0x00023ca3) midp_ticker_pane_g1_ParamLimits

0x91e9,	// (0x00023caf) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002a224) midp_ticker_pane_g_ParamLimits

0x91f5,	// (0x00023cbb) midp_ticker_pane_t1_ParamLimits

0x9486,	// (0x00023f4c) aid_fill_nsta_2

0x9e11,	// (0x000248d7) list_form2_midp_pane

0xaf91,	// (0x00025a57) midp_editing_number_pane_ParamLimits

0xafa0,	// (0x00025a66) midp_ticker_pane_ParamLimits

0xbc29,	// (0x000266ef) form2_midp_field_pane

0xbc4d,	// (0x00026713) scroll_pane_cp51

0xbc6d,	// (0x00026733) form2_midp_button_pane_ParamLimits

0xbc6d,	// (0x00026733) form2_midp_button_pane

0xbc7f,	// (0x00026745) form2_midp_content_pane_ParamLimits

0xbc7f,	// (0x00026745) form2_midp_content_pane

0xbc99,	// (0x0002675f) form2_midp_field_choice_group_pane

0xbca1,	// (0x00026767) form2_midp_field_pane_g1

0xbca9,	// (0x0002676f) form2_midp_field_pane_g2

0xbcb1,	// (0x00026777) form2_midp_field_pane_g3

0xbcb9,	// (0x0002677f) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0002a5b3) form2_midp_field_pane_g

0xbcc1,	// (0x00026787) form2_midp_gauge_slider_pane

0xbcc9,	// (0x0002678f) form2_midp_gauge_wait_pane

0xbcd1,	// (0x00026797) form2_midp_image_pane_ParamLimits

0xbcd1,	// (0x00026797) form2_midp_image_pane

0xbcec,	// (0x000267b2) form2_midp_label_pane_ParamLimits

0xbcec,	// (0x000267b2) form2_midp_label_pane

0xbd05,	// (0x000267cb) form2_midp_label_pane_cp_ParamLimits

0xbd05,	// (0x000267cb) form2_midp_label_pane_cp

0xbd26,	// (0x000267ec) form2_midp_string_pane_ParamLimits

0xbd26,	// (0x000267ec) form2_midp_string_pane

0x56be,	// (0x00020184) form2_midp_text_pane_ParamLimits

0x56be,	// (0x00020184) form2_midp_text_pane

0xbd38,	// (0x000267fe) form2_midp_time_pane

0xbd48,	// (0x0002680e) input_focus_pane_cp51_ParamLimits

0xbd48,	// (0x0002680e) input_focus_pane_cp51

0xbd60,	// (0x00026826) form2_midp_label_pane_t1_ParamLimits

0xbd60,	// (0x00026826) form2_midp_label_pane_t1

0x56d9,	// (0x0002019f) form2_mdip_text_pane_t1_ParamLimits

0x56d9,	// (0x0002019f) form2_mdip_text_pane_t1

0x56f7,	// (0x000201bd) form2_midp_time_pane_t1

0xbda9,	// (0x0002686f) form2_midp_gauge_slider_pane_t1

0xbdbb,	// (0x00026881) form2_midp_gauge_slider_pane_t2

0xbdcd,	// (0x00026893) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0002a5bc) form2_midp_gauge_slider_pane_t

0xbddf,	// (0x000268a5) form2_midp_slider_pane

0xbdeb,	// (0x000268b1) form2_midp_gauge_wait_pane_t1

0xbdf9,	// (0x000268bf) form2_midp_wait_pane_ParamLimits

0xbdf9,	// (0x000268bf) form2_midp_wait_pane

0x9b00,	// (0x000245c6) list_single_2graphic_pane_cp4_ParamLimits

0x9b00,	// (0x000245c6) list_single_2graphic_pane_cp4

0xbe24,	// (0x000268ea) list_single_midp_graphic_pane_cp_ParamLimits

0xbe24,	// (0x000268ea) list_single_midp_graphic_pane_cp

0x7b3a,	// (0x00022600) list_highlight_pane_cp20

0xbe53,	// (0x00026919) list_single_2graphic_pane_g1_cp4

0xbe5b,	// (0x00026921) list_single_2graphic_pane_g2_cp4

0xbe63,	// (0x00026929) list_single_2graphic_pane_t1_cp4

0x7c1a,	// (0x000226e0) list_highlight_pane_cp21

0xbe72,	// (0x00026938) list_single_midp_graphic_pane_g4_cp

0xbe81,	// (0x00026947) list_single_midp_graphic_pane_t1_cp

0xbe96,	// (0x0002695c) form2_mdip_string_pane_t1_ParamLimits

0xbe96,	// (0x0002695c) form2_mdip_string_pane_t1

0x7b3a,	// (0x00022600) bg_wml_button_pane_cp2

0x7b30,	// (0x000225f6) form2_midp_image_pane_g1

0x4d0a,	// (0x0001f7d0) list_double_large_graphic_pane_g5_ParamLimits

0x4d0a,	// (0x0001f7d0) list_double_large_graphic_pane_g5

0x8676,	// (0x0002313c) midp_form_pane_ParamLimits

0x7c1a,	// (0x000226e0) main_apps_wheel_pane_ParamLimits

0x687b,	// (0x00021341) popup_preview_window_ParamLimits

0x687b,	// (0x00021341) popup_preview_window

0x6a36,	// (0x000214fc) popup_touch_info_window_ParamLimits

0x6a36,	// (0x000214fc) popup_touch_info_window

0x6a54,	// (0x0002151a) popup_touch_menu_window_ParamLimits

0x6a54,	// (0x0002151a) popup_touch_menu_window

0x7b26,	// (0x000225ec) bg_popup_sub_pane_cp6

0xbf8f,	// (0x00026a55) list_touch_menu_pane

0xbf97,	// (0x00026a5d) list_single_touch_menu_pane_ParamLimits

0xbf97,	// (0x00026a5d) list_single_touch_menu_pane

0xbfad,	// (0x00026a73) list_single_touch_menu_pane_t1

0x7c1a,	// (0x000226e0) bg_popup_sub_pane_cp7_ParamLimits

0x7c1a,	// (0x000226e0) bg_popup_sub_pane_cp7

0xbfbb,	// (0x00026a81) heading_sub_pane

0xbfc3,	// (0x00026a89) list_touch_info_pane_ParamLimits

0xbfc3,	// (0x00026a89) list_touch_info_pane

0xbfd2,	// (0x00026a98) list_single_touch_info_pane_ParamLimits

0xbfd2,	// (0x00026a98) list_single_touch_info_pane

0xbfe4,	// (0x00026aaa) list_single_touch_info_pane_t1

0xbff2,	// (0x00026ab8) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0002a5ca) list_single_touch_info_pane_t

0x910e,	// (0x00023bd4) bg_popup_heading_pane_cp

0xc000,	// (0x00026ac6) heading_sub_pane_t1

0x9a47,	// (0x0002450d) bg_popup_preview_window_pane_cp_ParamLimits

0x9a47,	// (0x0002450d) bg_popup_preview_window_pane_cp

0xbfbb,	// (0x00026a81) heading_preview_pane

0xbfc3,	// (0x00026a89) list_preview_pane_ParamLimits

0xbfc3,	// (0x00026a89) list_preview_pane

0xc00e,	// (0x00026ad4) popup_preview_window_g1

0xbfd2,	// (0x00026a98) list_single_preview_pane_ParamLimits

0xbfd2,	// (0x00026a98) list_single_preview_pane

0xc016,	// (0x00026adc) list_single_preview_pane_g1

0xc01e,	// (0x00026ae4) list_single_preview_pane_t1

0xbfe4,	// (0x00026aaa) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0002a5cf) list_single_preview_pane_t

0xc02c,	// (0x00026af2) bg_popup_heading_pane_cp2_ParamLimits

0xc02c,	// (0x00026af2) bg_popup_heading_pane_cp2

0xc042,	// (0x00026b08) heading_preview_pane_g1

0xc04a,	// (0x00026b10) heading_preview_pane_t1_ParamLimits

0xc04a,	// (0x00026b10) heading_preview_pane_t1

0x7d06,	// (0x000227cc) soft_indicator_pane_t1_ParamLimits

0x83f9,	// (0x00022ebf) scroll_pane_ParamLimits

0x891c,	// (0x000233e2) scroll_sc2_left_pane

0x8925,	// (0x000233eb) scroll_sc2_right_pane

0x8944,	// (0x0002340a) scroll_bg_pane_g1_ParamLimits

0x8959,	// (0x0002341f) scroll_bg_pane_g2_ParamLimits

0x8971,	// (0x00023437) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002a1af) scroll_bg_pane_g_ParamLimits

0x8944,	// (0x0002340a) scroll_handle_pane_g1_ParamLimits

0x8993,	// (0x00023459) scroll_handle_pane_g2_ParamLimits

0x8971,	// (0x00023437) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002a1b6) scroll_handle_pane_g_ParamLimits

0x64fe,	// (0x00020fc4) popup_choice_list_window_ParamLimits

0x64fe,	// (0x00020fc4) popup_choice_list_window

0x988d,	// (0x00024353) choice_list_pane

0x990f,	// (0x000243d5) cell_toolbar_pane_t1

0x9937,	// (0x000243fd) toolbar_button_pane_ParamLimits

0xaa9a,	// (0x00025560) ai_gene_pane_1_t2_ParamLimits

0xaa9a,	// (0x00025560) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0002a3de) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0002a3de) ai_gene_pane_1_t

0xc067,	// (0x00026b2d) scroll_sc2_left_pane_g1

0xc067,	// (0x00026b2d) scroll_sc2_right_pane_g1

0x944e,	// (0x00023f14) bg_popup_sub_pane_cp10

0xc071,	// (0x00026b37) list_choice_list_pane

0xc08a,	// (0x00026b50) list_single_choice_list_pane_ParamLimits

0xc08a,	// (0x00026b50) list_single_choice_list_pane

0xc09d,	// (0x00026b63) list_single_choice_list_pane_g1

0x8626,	// (0x000230ec) list_single_choice_list_pane_t1_ParamLimits

0x8626,	// (0x000230ec) list_single_choice_list_pane_t1

0xc0a5,	// (0x00026b6b) choice_list_pane_g1

0xc0ad,	// (0x00026b73) choice_list_pane_t1

0x7b26,	// (0x000225ec) input_focus_pane_cp11

0x87fd,	// (0x000232c3) title_pane_stacon_g2_ParamLimits

0x87fd,	// (0x000232c3) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002a195) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002a195) title_pane_stacon_g

0x910e,	// (0x00023bd4) cursor_press_pane

0x65aa,	// (0x00021070) popup_fep_hwr_window_ParamLimits

0x65aa,	// (0x00021070) popup_fep_hwr_window

0x6624,	// (0x000210ea) popup_fep_vkb_window_ParamLimits

0x6624,	// (0x000210ea) popup_fep_vkb_window

0xc0bb,	// (0x00026b81) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0002a5f8) fep_vkb_side_pane_g_ParamLimits

0x6ef4,	// (0x000219ba) fep_hwr_candidate_pane_ParamLimits

0x6ef4,	// (0x000219ba) fep_hwr_candidate_pane

0x6f1e,	// (0x000219e4) fep_hwr_side_pane_ParamLimits

0x6f1e,	// (0x000219e4) fep_hwr_side_pane

0x6f3e,	// (0x00021a04) fep_hwr_top_pane_ParamLimits

0x6f3e,	// (0x00021a04) fep_hwr_top_pane

0x6f56,	// (0x00021a1c) fep_hwr_write_pane_ParamLimits

0x6f56,	// (0x00021a1c) fep_hwr_write_pane

0xfb32,	// (0x0002a5f8) fep_vkb_side_pane_g

0xc0c3,	// (0x00026b89) fep_hwr_top_pane_g1

0xc0d5,	// (0x00026b9b) fep_hwr_top_pane_g2

0x6f82,	// (0x00021a48) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0002a5d4) fep_hwr_top_pane_g

0x6f97,	// (0x00021a5d) fep_hwr_top_text_pane

0x8aea,	// (0x000235b0) fep_hwr_top_text_pane_g1

0xc10b,	// (0x00026bd1) fep_hwr_top_text_pane_t1

0x708d,	// (0x00021b53) fep_hwr_candidate_pane_g1

0xc35e,	// (0x00026e24) fep_vkb_keypad_pane_g3_ParamLimits

0xc35e,	// (0x00026e24) fep_vkb_keypad_pane_g3

0xc386,	// (0x00026e4c) fep_vkb_keypad_pane_g4_ParamLimits

0xc386,	// (0x00026e4c) fep_vkb_keypad_pane_g4

0xc3f5,	// (0x00026ebb) fep_vkb_bottom_pane_g2_ParamLimits

0xc3f5,	// (0x00026ebb) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0002a5ff) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0002a5ff) fep_vkb_bottom_pane_g

0xc067,	// (0x00026b2d) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0002a609) cell_vkb_side_pane_g

0xc480,	// (0x00026f46) cell_vkb_side_pane_t1

0xc48e,	// (0x00026f54) cell_vkb_side_pane_t1_copy1

0xc067,	// (0x00026b2d) bg_fep_vkb_candidate_pane_g2

0xc5ba,	// (0x00027080) cell_vkb_candidate_pane_ParamLimits

0xc119,	// (0x00026bdf) aid_size_cell_vkb_ParamLimits

0xc119,	// (0x00026bdf) aid_size_cell_vkb

0xc5ba,	// (0x00027080) cell_vkb_candidate_pane

0x70a7,	// (0x00021b6d) bg_popup_fep_shadow_pane_g1

0xc1a7,	// (0x00026c6d) fep_vkb_bottom_pane_ParamLimits

0xc1a7,	// (0x00026c6d) fep_vkb_bottom_pane

0xc1dd,	// (0x00026ca3) fep_vkb_candidate_pane_ParamLimits

0xc1dd,	// (0x00026ca3) fep_vkb_candidate_pane

0xc1f9,	// (0x00026cbf) fep_vkb_keypad_pane_ParamLimits

0xc1f9,	// (0x00026cbf) fep_vkb_keypad_pane

0xc23f,	// (0x00026d05) fep_vkb_side_pane_ParamLimits

0xc23f,	// (0x00026d05) fep_vkb_side_pane

0xc27b,	// (0x00026d41) fep_vkb_top_pane_ParamLimits

0xc27b,	// (0x00026d41) fep_vkb_top_pane

0xc2b7,	// (0x00026d7d) fep_vkb_top_pane_g1_ParamLimits

0xc2b7,	// (0x00026d7d) fep_vkb_top_pane_g1

0xc2c6,	// (0x00026d8c) fep_vkb_top_pane_g2_ParamLimits

0xc2c6,	// (0x00026d8c) fep_vkb_top_pane_g2

0xc2d5,	// (0x00026d9b) fep_vkb_top_pane_g3_ParamLimits

0xc2d5,	// (0x00026d9b) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0002a5ef) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0002a5ef) fep_vkb_top_pane_g

0xc2f3,	// (0x00026db9) fep_vkb_top_text_pane_ParamLimits

0xc2f3,	// (0x00026db9) fep_vkb_top_text_pane

0xc304,	// (0x00026dca) fep_vkb_side_pane_g1_ParamLimits

0xc304,	// (0x00026dca) fep_vkb_side_pane_g1

0xc34d,	// (0x00026e13) grid_vkb_side_pane_ParamLimits

0xc34d,	// (0x00026e13) grid_vkb_side_pane

0x70af,	// (0x00021b75) bg_popup_fep_shadow_pane_g2

0x70b8,	// (0x00021b7e) bg_popup_fep_shadow_pane_g3

0x70c0,	// (0x00021b86) bg_popup_fep_shadow_pane_g4

0x70c9,	// (0x00021b8f) bg_popup_fep_shadow_pane_g5

0x70d3,	// (0x00021b99) bg_popup_fep_shadow_pane_g6

0x70db,	// (0x00021ba1) bg_popup_fep_shadow_pane_g7

0x850d,	// (0x00022fd3) bg_popup_fep_shadow_pane_g8

0xc3a4,	// (0x00026e6a) grid_vkb_keypad_number_pane_ParamLimits

0xc3a4,	// (0x00026e6a) grid_vkb_keypad_number_pane

0xc3b4,	// (0x00026e7a) grid_vkb_keypad_pane_ParamLimits

0xc3b4,	// (0x00026e7a) grid_vkb_keypad_pane

0xc3da,	// (0x00026ea0) fep_vkb_bottom_pane_g1_ParamLimits

0xc3da,	// (0x00026ea0) fep_vkb_bottom_pane_g1

0xc403,	// (0x00026ec9) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc403,	// (0x00026ec9) grid_vkb_keypad_bottom_left_pane

0xc418,	// (0x00026ede) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc418,	// (0x00026ede) grid_vkb_keypad_bottom_right_pane

0xc42d,	// (0x00026ef3) fep_vkb_top_text_pane_g1

0xc448,	// (0x00026f0e) fep_vkb_top_text_pane_t1

0xc45d,	// (0x00026f23) cell_vkb_side_pane_ParamLimits

0xc45d,	// (0x00026f23) cell_vkb_side_pane

0xc067,	// (0x00026b2d) cell_vkb_side_pane_g1

0xc49c,	// (0x00026f62) cell_vkb_keypad_pane_ParamLimits

0xc49c,	// (0x00026f62) cell_vkb_keypad_pane

0xc511,	// (0x00026fd7) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0002a61c) bg_popup_fep_shadow_pane_g

0xc067,	// (0x00026b2d) cell_hwr_side_pane_g1

0xc067,	// (0x00026b2d) cell_hwr_side_pane_g2

0xc51b,	// (0x00026fe1) cell_vkb_keypad_pane_t1

0xc529,	// (0x00026fef) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc529,	// (0x00026fef) cell_vkb_keypad_bottom_left_pane

0xc546,	// (0x0002700c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc546,	// (0x0002700c) cell_vkb_keypad_bottom_right_pane

0xc067,	// (0x00026b2d) cell_vkb_keypad_bottom_left_pane_g1

0xc067,	// (0x00026b2d) cell_vkb_keypad_bottom_right_pane_g1

0xc57f,	// (0x00027045) cell_vkb_keypad_number_pane_ParamLimits

0xc57f,	// (0x00027045) cell_vkb_keypad_number_pane

0xc59e,	// (0x00027064) cell_vkb_keypad_number_pane_g1

0xc5a8,	// (0x0002706e) cell_vkb_keypad_number_pane_g2

0xc5b1,	// (0x00027077) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0002a60e) cell_vkb_keypad_number_pane_g

0xc51b,	// (0x00026fe1) cell_vkb_keypad_number_pane_t1

0xc5d5,	// (0x0002709b) fep_vkb_candidate_pane_g1

0x0001,

0xfb43,	// (0x0002a609) cell_hwr_side_pane_g

0xc5ee,	// (0x000270b4) cell_hwr_side_pane_t1

0x70ed,	// (0x00021bb3) cell_hwr_side_pane_t1_copy1

0xc2e5,	// (0x00026dab) cell_hwr_candidate_pane_g1

0x70fb,	// (0x00021bc1) cell_hwr_candidate_pane_t1

0xc067,	// (0x00026b2d) cell_vkb_candidate_pane_g2

0xc674,	// (0x0002713a) cell_vkb_candidate_pane_t1

0x6ebb,	// (0x00021981) bg_popup_fep_shadow_pane_ParamLimits

0x6ebb,	// (0x00021981) bg_popup_fep_shadow_pane

0x1e29,	// (0x0001c8ef) bg_fep_hwr_top_pane_g4

0xc0e7,	// (0x00026bad) bg_hwr_side_pane_g1_ParamLimits

0xc0e7,	// (0x00026bad) bg_hwr_side_pane_g1

0x6fd3,	// (0x00021a99) cell_hwr_side_pane_ParamLimits

0x6fd3,	// (0x00021a99) cell_hwr_side_pane

0x700e,	// (0x00021ad4) fep_hwr_write_pane_g1_ParamLimits

0x700e,	// (0x00021ad4) fep_hwr_write_pane_g1

0x701b,	// (0x00021ae1) fep_hwr_write_pane_g2_ParamLimits

0x701b,	// (0x00021ae1) fep_hwr_write_pane_g2

0x7028,	// (0x00021aee) fep_hwr_write_pane_g3_ParamLimits

0x7028,	// (0x00021aee) fep_hwr_write_pane_g3

0x7036,	// (0x00021afc) fep_hwr_write_pane_g4_ParamLimits

0x7036,	// (0x00021afc) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0002a5db) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0002a5db) fep_hwr_write_pane_g

0x1e29,	// (0x0001c8ef) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1e29,	// (0x0001c8ef) bg_fep_hwr_candidate_pane_g2

0x704b,	// (0x00021b11) cell_hwr_candidate_pane_ParamLimits

0x704b,	// (0x00021b11) cell_hwr_candidate_pane

0x708d,	// (0x00021b53) fep_hwr_candidate_pane_g1_ParamLimits

0xc147,	// (0x00026c0d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc147,	// (0x00026c0d) bg_popup_fep_shadow_pane_cp2

0xc2e5,	// (0x00026dab) fep_vkb_top_pane_g4_ParamLimits

0xc2e5,	// (0x00026dab) fep_vkb_top_pane_g4

0xc32b,	// (0x00026df1) fep_vkb_side_pane_g2_ParamLimits

0xc32b,	// (0x00026df1) fep_vkb_side_pane_g2

0x4e64,	// (0x0001f92a) list_setting_pane_t4_ParamLimits

0x4e64,	// (0x0001f92a) list_setting_pane_t4

0x4efe,	// (0x0001f9c4) list_setting_number_pane_t5_ParamLimits

0x4efe,	// (0x0001f9c4) list_setting_number_pane_t5

0x8b31,	// (0x000235f7) list_double_heading_pane_cp2_ParamLimits

0x8b31,	// (0x000235f7) list_double_heading_pane_cp2

0x84a0,	// (0x00022f66) list_double_heading_pane_g1_cp2_ParamLimits

0x84a0,	// (0x00022f66) list_double_heading_pane_g1_cp2

0x84ac,	// (0x00022f72) list_double_heading_pane_g2_cp2_ParamLimits

0x84ac,	// (0x00022f72) list_double_heading_pane_g2_cp2

0xc682,	// (0x00027148) list_double_heading_pane_t1_cp2_ParamLimits

0xc682,	// (0x00027148) list_double_heading_pane_t1_cp2

0xc698,	// (0x0002715e) list_double_heading_pane_t2_cp2_ParamLimits

0xc698,	// (0x0002715e) list_double_heading_pane_t2_cp2

0x7b0e,	// (0x000225d4) aid_value_unit2

0x5d66,	// (0x0002082c) popup_preview_fixed_window

0x7ea3,	// (0x00022969) bg_popup_preview_window_pane_cp02

0xc6aa,	// (0x00027170) list_preview_fixed_pane

0xc6f0,	// (0x000271b6) list_empty_pane_fp_ParamLimits

0xc6f0,	// (0x000271b6) list_empty_pane_fp

0xc6f0,	// (0x000271b6) list_single_cale_day_pane_fp_ParamLimits

0xc6f0,	// (0x000271b6) list_single_cale_day_pane_fp

0xc6f0,	// (0x000271b6) list_single_graphic_heading_pane_fp_ParamLimits

0xc6f0,	// (0x000271b6) list_single_graphic_heading_pane_fp

0xc6f0,	// (0x000271b6) list_single_graphic_pane_fp_ParamLimits

0xc6f0,	// (0x000271b6) list_single_graphic_pane_fp

0xc6f0,	// (0x000271b6) list_single_heading_pane_fp_ParamLimits

0xc6f0,	// (0x000271b6) list_single_heading_pane_fp

0xc6f0,	// (0x000271b6) list_single_pane_fp_ParamLimits

0xc6f0,	// (0x000271b6) list_single_pane_fp

0xc705,	// (0x000271cb) list_single_pane_fp_g1_ParamLimits

0xc705,	// (0x000271cb) list_single_pane_fp_g1

0x570a,	// (0x000201d0) list_single_pane_fp_g2_ParamLimits

0x570a,	// (0x000201d0) list_single_pane_fp_g2

0x5716,	// (0x000201dc) list_single_pane_fp_g3_ParamLimits

0x5716,	// (0x000201dc) list_single_pane_fp_g3

0xc711,	// (0x000271d7) list_single_pane_fp_g4_ParamLimits

0xc711,	// (0x000271d7) list_single_pane_fp_g4

0x0003,

0xfb77,	// (0x0002a63d) list_single_pane_fp_g_ParamLimits

0xfb77,	// (0x0002a63d) list_single_pane_fp_g

0x572a,	// (0x000201f0) list_single_pane_fp_t1_ParamLimits

0x572a,	// (0x000201f0) list_single_pane_fp_t1

0x5741,	// (0x00020207) list_single_graphic_pane_fp_g1_ParamLimits

0x5741,	// (0x00020207) list_single_graphic_pane_fp_g1

0xc705,	// (0x000271cb) list_single_graphic_pane_fp_g2_ParamLimits

0xc705,	// (0x000271cb) list_single_graphic_pane_fp_g2

0x570a,	// (0x000201d0) list_single_graphic_pane_fp_g3_ParamLimits

0x570a,	// (0x000201d0) list_single_graphic_pane_fp_g3

0x5716,	// (0x000201dc) list_single_graphic_pane_fp_g4_ParamLimits

0x5716,	// (0x000201dc) list_single_graphic_pane_fp_g4

0xc711,	// (0x000271d7) list_single_graphic_pane_fp_g5_ParamLimits

0xc711,	// (0x000271d7) list_single_graphic_pane_fp_g5

0x0004,

0xfb80,	// (0x0002a646) list_single_graphic_pane_fp_g_ParamLimits

0xfb80,	// (0x0002a646) list_single_graphic_pane_fp_g

0x574d,	// (0x00020213) list_single_graphic_pane_fp_t1_ParamLimits

0x574d,	// (0x00020213) list_single_graphic_pane_fp_t1

0x5741,	// (0x00020207) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5741,	// (0x00020207) list_single_graphic_heading_pane_fp_g1

0xc705,	// (0x000271cb) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc705,	// (0x000271cb) list_single_graphic_heading_pane_fp_g2

0x570a,	// (0x000201d0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x570a,	// (0x000201d0) list_single_graphic_heading_pane_fp_g3

0x5716,	// (0x000201dc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5716,	// (0x000201dc) list_single_graphic_heading_pane_fp_g4

0xc711,	// (0x000271d7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc711,	// (0x000271d7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0002a646) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0002a646) list_single_graphic_heading_pane_fp_g

0x5763,	// (0x00020229) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5763,	// (0x00020229) list_single_graphic_heading_pane_fp_t1

0x5779,	// (0x0002023f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5779,	// (0x0002023f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x0002a651) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x0002a651) list_single_graphic_heading_pane_fp_t

0x578b,	// (0x00020251) list_single_cale_day_pane_fp_g1_ParamLimits

0x578b,	// (0x00020251) list_single_cale_day_pane_fp_g1

0xc71d,	// (0x000271e3) list_single_cale_day_pane_fp_g2_ParamLimits

0xc71d,	// (0x000271e3) list_single_cale_day_pane_fp_g2

0x57c3,	// (0x00020289) list_single_cale_day_pane_fp_g3_ParamLimits

0x57c3,	// (0x00020289) list_single_cale_day_pane_fp_g3

0x57eb,	// (0x000202b1) list_single_cale_day_pane_fp_g4_ParamLimits

0x57eb,	// (0x000202b1) list_single_cale_day_pane_fp_g4

0x580f,	// (0x000202d5) list_single_cale_day_pane_fp_g5_ParamLimits

0x580f,	// (0x000202d5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb90,	// (0x0002a656) list_single_cale_day_pane_fp_g_ParamLimits

0xfb90,	// (0x0002a656) list_single_cale_day_pane_fp_g

0x5833,	// (0x000202f9) list_single_cale_day_pane_fp_t1_ParamLimits

0x5833,	// (0x000202f9) list_single_cale_day_pane_fp_t1

0x5859,	// (0x0002031f) list_single_cale_day_pane_fp_t2_ParamLimits

0x5859,	// (0x0002031f) list_single_cale_day_pane_fp_t2

0x5872,	// (0x00020338) list_single_cale_day_pane_fp_t3_ParamLimits

0x5872,	// (0x00020338) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9b,	// (0x0002a661) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9b,	// (0x0002a661) list_single_cale_day_pane_fp_t

0xc705,	// (0x000271cb) list_empty_pane_fp_g1_ParamLimits

0xc705,	// (0x000271cb) list_empty_pane_fp_g1

0x588b,	// (0x00020351) list_empty_pane_fp_t1

0x5899,	// (0x0002035f) list_empty_pane_fp_t2

0x0001,

0xfba2,	// (0x0002a668) list_empty_pane_fp_t

0xc705,	// (0x000271cb) list_single_heading_pane_fp_g1_ParamLimits

0xc705,	// (0x000271cb) list_single_heading_pane_fp_g1

0x570a,	// (0x000201d0) list_single_heading_pane_fp_g2_ParamLimits

0x570a,	// (0x000201d0) list_single_heading_pane_fp_g2

0x5716,	// (0x000201dc) list_single_heading_pane_fp_g3_ParamLimits

0x5716,	// (0x000201dc) list_single_heading_pane_fp_g3

0x0002,

0xfba7,	// (0x0002a66d) list_single_heading_pane_fp_g_ParamLimits

0xfba7,	// (0x0002a66d) list_single_heading_pane_fp_g

0x58a7,	// (0x0002036d) list_single_heading_pane_fp_t1_ParamLimits

0x58a7,	// (0x0002036d) list_single_heading_pane_fp_t1

0x58b9,	// (0x0002037f) list_single_heading_pane_fp_t2_ParamLimits

0x58b9,	// (0x0002037f) list_single_heading_pane_fp_t2

0x0001,

0xfbae,	// (0x0002a674) list_single_heading_pane_fp_t_ParamLimits

0xfbae,	// (0x0002a674) list_single_heading_pane_fp_t

0x8694,	// (0x0002315a) aid_size_cell_fast

0x7e13,	// (0x000228d9) soft_indicator_pane_cp1_t1

0x86d1,	// (0x00023197) cell_app_pane_cp2_ParamLimits

0x86d1,	// (0x00023197) cell_app_pane_cp2

0x6edd,	// (0x000219a3) fep_hwr_candidate_drop_down_list_pane

0x1e37,	// (0x0001c8fd) fep_hwr_candidate_pane_g3_ParamLimits

0x1e37,	// (0x0001c8fd) fep_hwr_candidate_pane_g3

0x1e44,	// (0x0001c90a) fep_hwr_candidate_pane_g4_ParamLimits

0x1e44,	// (0x0001c90a) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0002a5e8) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0002a5e8) fep_hwr_candidate_pane_g

0xc1cc,	// (0x00026c92) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1cc,	// (0x00026c92) fep_vkb_candidate_drop_down_list_pane

0xc5dd,	// (0x000270a3) fep_vkb_candidate_pane_g3

0xc5e5,	// (0x000270ab) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0002a615) fep_vkb_candidate_pane_g

0xc2e5,	// (0x00026dab) cell_hwr_candidate_pane_g1_ParamLimits

0xc5fc,	// (0x000270c2) cell_hwr_candidate_pane_g3_ParamLimits

0xc5fc,	// (0x000270c2) cell_hwr_candidate_pane_g3

0xc61d,	// (0x000270e3) cell_hwr_candidate_pane_g4_ParamLimits

0xc61d,	// (0x000270e3) cell_hwr_candidate_pane_g4

0x0002,

0xfb69,	// (0x0002a62f) cell_hwr_candidate_pane_g_ParamLimits

0xfb69,	// (0x0002a62f) cell_hwr_candidate_pane_g

0xc63e,	// (0x00027104) cell_vkb_candidate_pane_g3_ParamLimits

0xc63e,	// (0x00027104) cell_vkb_candidate_pane_g3

0xc659,	// (0x0002711f) cell_vkb_candidate_pane_g4_ParamLimits

0xc659,	// (0x0002711f) cell_vkb_candidate_pane_g4

0xc729,	// (0x000271ef) cell_app_pane_cp2_g1_ParamLimits

0xc729,	// (0x000271ef) cell_app_pane_cp2_g1

0xc747,	// (0x0002720d) cell_app_pane_cp2_g2_ParamLimits

0xc747,	// (0x0002720d) cell_app_pane_cp2_g2

0x0001,

0xfbb3,	// (0x0002a679) cell_app_pane_cp2_g_ParamLimits

0xfbb3,	// (0x0002a679) cell_app_pane_cp2_g

0xc753,	// (0x00027219) cell_app_pane_cp2_t1_ParamLimits

0xc753,	// (0x00027219) cell_app_pane_cp2_t1

0x8486,	// (0x00022f4c) grid_highlight_pane_cp1_ParamLimits

0x8486,	// (0x00022f4c) grid_highlight_pane_cp1

0x7119,	// (0x00021bdf) cell_hwr_candidate_pane_cp1_ParamLimits

0x7119,	// (0x00021bdf) cell_hwr_candidate_pane_cp1

0xc2e5,	// (0x00026dab) fep_hwr_candidate_drop_down_list_pane_g1

0xc765,	// (0x0002722b) fep_hwr_candidate_drop_down_list_pane_g2

0xc772,	// (0x00027238) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0002a67e) fep_hwr_candidate_drop_down_list_pane_g

0x7138,	// (0x00021bfe) fep_hwr_candidate_drop_down_list_scroll_pane

0x7141,	// (0x00021c07) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7141,	// (0x00021c07) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x714e,	// (0x00021c14) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x714e,	// (0x00021c14) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x715b,	// (0x00021c21) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x715b,	// (0x00021c21) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc63e,	// (0x00027104) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc63e,	// (0x00027104) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc659,	// (0x0002711f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc659,	// (0x0002711f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7168,	// (0x00021c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7168,	// (0x00021c2e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7183,	// (0x00021c49) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7183,	// (0x00021c49) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x719e,	// (0x00021c64) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x719e,	// (0x00021c64) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbf,	// (0x0002a685) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbf,	// (0x0002a685) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc77f,	// (0x00027245) cell_vkb_candidate_pane_cp1_ParamLimits

0xc77f,	// (0x00027245) cell_vkb_candidate_pane_cp1

0xc2e5,	// (0x00026dab) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) fep_vkb_candidate_drop_down_list_pane_g1

0xc765,	// (0x0002722b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc765,	// (0x0002722b) fep_vkb_candidate_drop_down_list_pane_g2

0xc772,	// (0x00027238) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc772,	// (0x00027238) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb8,	// (0x0002a67e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb8,	// (0x0002a67e) fep_vkb_candidate_drop_down_list_pane_g

0xc79f,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc79f,	// (0x00027265) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7ac,	// (0x00027272) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7ac,	// (0x00027272) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7b9,	// (0x0002727f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7b9,	// (0x0002727f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7c5,	// (0x0002728b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7c5,	// (0x0002728b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5fc,	// (0x000270c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5fc,	// (0x000270c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc61d,	// (0x000270e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc61d,	// (0x000270e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc7d1,	// (0x00027297) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc7d1,	// (0x00027297) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7f2,	// (0x000272b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7f2,	// (0x000272b8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc813,	// (0x000272d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc813,	// (0x000272d9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0002a696) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0002a696) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b44,	// (0x0002260a) title_pane_g1_ParamLimits

0x7b51,	// (0x00022617) title_pane_g2_ParamLimits

0xf554,	// (0x0002a01a) title_pane_g_ParamLimits

0x8ada,	// (0x000235a0) aid_call2_pane

0x8ae2,	// (0x000235a8) aid_call_pane

0x8aea,	// (0x000235b0) popup_clock_analogue_window_g1

0x8aea,	// (0x000235b0) popup_clock_analogue_window_g2

0x60cf,	// (0x00020b95) popup_clock_analogue_window_g3

0x60d8,	// (0x00020b9e) popup_clock_analogue_window_g4

0x7b30,	// (0x000225f6) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002a1c4) popup_clock_analogue_window_g

0x60e0,	// (0x00020ba6) popup_clock_analogue_window_t1

0x60ee,	// (0x00020bb4) clock_digital_number_pane_ParamLimits

0x60ee,	// (0x00020bb4) clock_digital_number_pane

0x60fa,	// (0x00020bc0) clock_digital_number_pane_cp02_ParamLimits

0x60fa,	// (0x00020bc0) clock_digital_number_pane_cp02

0x6106,	// (0x00020bcc) clock_digital_number_pane_cp03_ParamLimits

0x6106,	// (0x00020bcc) clock_digital_number_pane_cp03

0x6112,	// (0x00020bd8) clock_digital_number_pane_cp04_ParamLimits

0x6112,	// (0x00020bd8) clock_digital_number_pane_cp04

0x611e,	// (0x00020be4) clock_digital_separator_pane_ParamLimits

0x611e,	// (0x00020be4) clock_digital_separator_pane

0x612a,	// (0x00020bf0) popup_clock_digital_window_t1_ParamLimits

0x612a,	// (0x00020bf0) popup_clock_digital_window_t1

0x7b30,	// (0x000225f6) clock_digital_number_pane_g1

0x7b30,	// (0x000225f6) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002a1cf) clock_digital_number_pane_g

0x7b30,	// (0x000225f6) clock_digital_separator_pane_g1

0x7b30,	// (0x000225f6) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002a1cf) clock_digital_separator_pane_g

0x9470,	// (0x00023f36) aid_fill_nsta_ParamLimits

0x95b2,	// (0x00024078) indicator_nsta_pane_ParamLimits

0x9725,	// (0x000241eb) popup_clock_analogue_window

0x9725,	// (0x000241eb) popup_clock_digital_window

0x7c1a,	// (0x000226e0) grid_indicator_nsta_pane_ParamLimits

0xba4d,	// (0x00026513) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0002a568) clock_nsta_pane_t

0x6093,	// (0x00020b59) aid_size_max_handle

0x609d,	// (0x00020b63) aid_size_min_handle

0x910e,	// (0x00023bd4) editor_scroll_pane

0xc82e,	// (0x000272f4) ex_editor_pane

0x8602,	// (0x000230c8) scroll_pane_cp13

0x8425,	// (0x00022eeb) scroll_pane_cp14

0x8b19,	// (0x000235df) scroll_pane_cp36

0x8b45,	// (0x0002360b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8b45,	// (0x0002360b) list_single_graphic_hl_pane_cp2

0xafef,	// (0x00025ab5) list_single_graphic_hl_pane_ParamLimits

0xafef,	// (0x00025ab5) list_single_graphic_hl_pane

0x58cf,	// (0x00020395) aid_size_min_hl_cp1

0xc836,	// (0x000272fc) list_highlight_pane_cp34_ParamLimits

0xc836,	// (0x000272fc) list_highlight_pane_cp34

0xc847,	// (0x0002730d) list_single_graphic_hl_pane_g1_ParamLimits

0xc847,	// (0x0002730d) list_single_graphic_hl_pane_g1

0x58d8,	// (0x0002039e) list_single_graphic_hl_pane_g2_ParamLimits

0x58d8,	// (0x0002039e) list_single_graphic_hl_pane_g2

0x58d8,	// (0x0002039e) list_single_graphic_hl_pane_g3_ParamLimits

0x58d8,	// (0x0002039e) list_single_graphic_hl_pane_g3

0x52ab,	// (0x0001fd71) list_single_graphic_hl_pane_g4_ParamLimits

0x52ab,	// (0x0001fd71) list_single_graphic_hl_pane_g4

0x58e4,	// (0x000203aa) list_single_graphic_hl_pane_g5_ParamLimits

0x58e4,	// (0x000203aa) list_single_graphic_hl_pane_g5

0x0004,

0xfbe1,	// (0x0002a6a7) list_single_graphic_hl_pane_g_ParamLimits

0xfbe1,	// (0x0002a6a7) list_single_graphic_hl_pane_g

0x58f8,	// (0x000203be) list_single_graphic_hl_pane_t1_ParamLimits

0x58f8,	// (0x000203be) list_single_graphic_hl_pane_t1

0xc854,	// (0x0002731a) aid_size_min_hl_cp2

0xc85d,	// (0x00027323) list_highlight_pane_cp34_cp2_ParamLimits

0xc85d,	// (0x00027323) list_highlight_pane_cp34_cp2

0xc847,	// (0x0002730d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc847,	// (0x0002730d) list_single_graphic_hl_pane_g1_cp2

0xc86a,	// (0x00027330) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc86a,	// (0x00027330) list_single_graphic_hl_pane_g2_cp2

0xc876,	// (0x0002733c) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc876,	// (0x0002733c) list_single_graphic_hl_pane_g3_cp2

0x9c28,	// (0x000246ee) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9c28,	// (0x000246ee) list_single_graphic_hl_pane_g4_cp2

0xc884,	// (0x0002734a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc884,	// (0x0002734a) list_single_graphic_hl_pane_g5_cp2

0x63da,	// (0x00020ea0) control_pane_g4_ParamLimits

0x63da,	// (0x00020ea0) control_pane_g4

0x944e,	// (0x00023f14) bg_popup_sub_pane_cp10_ParamLimits

0xc071,	// (0x00026b37) list_choice_list_pane_ParamLimits

0xc080,	// (0x00026b46) scroll_pane_cp23

0x7ea3,	// (0x00022969) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6aa,	// (0x00027170) list_preview_fixed_pane_ParamLimits

0xc6c0,	// (0x00027186) list_preview_fixed_pane_cp_ParamLimits

0xc6c0,	// (0x00027186) list_preview_fixed_pane_cp

0xc6cc,	// (0x00027192) popup_preview_fixed_window_g1_ParamLimits

0xc6cc,	// (0x00027192) popup_preview_fixed_window_g1

0xc6d8,	// (0x0002719e) popup_preview_fixed_window_g2_ParamLimits

0xc6d8,	// (0x0002719e) popup_preview_fixed_window_g2

0x0002,

0xfb70,	// (0x0002a636) popup_preview_fixed_window_g_ParamLimits

0xfb70,	// (0x0002a636) popup_preview_fixed_window_g

0x6007,	// (0x00020acd) aid_navi_side_left_pane_ParamLimits

0x601c,	// (0x00020ae2) aid_navi_side_right_pane_ParamLimits

0x6034,	// (0x00020afa) navi_icon_pane_stacon_ParamLimits

0x6048,	// (0x00020b0e) navi_navi_pane_stacon_ParamLimits

0x6034,	// (0x00020afa) navi_text_pane_stacon_ParamLimits

0x7b26,	// (0x000225ec) main_text_info_pane

0xc8ae,	// (0x00027374) listscroll_text_info_pane

0xc8b6,	// (0x0002737c) list_text_info_pane_ParamLimits

0xc8b6,	// (0x0002737c) list_text_info_pane

0xc8c5,	// (0x0002738b) scroll_pane_cp24_ParamLimits

0xc8c5,	// (0x0002738b) scroll_pane_cp24

0xc8e3,	// (0x000273a9) list_text_info_pane_t1_ParamLimits

0xc8e3,	// (0x000273a9) list_text_info_pane_t1

0x651c,	// (0x00020fe2) popup_fast_swap2_window_ParamLimits

0x651c,	// (0x00020fe2) popup_fast_swap2_window

0xc914,	// (0x000273da) aid_size_cell_fast2

0x7b26,	// (0x000225ec) bg_popup_window_pane_cp17

0x9e3d,	// (0x00024903) heading_pane_cp2

0x80ef,	// (0x00022bb5) listscroll_fast2_pane

0xc91e,	// (0x000273e4) grid_fast2_pane

0xc928,	// (0x000273ee) listscroll_fast2_pane_g1

0xc930,	// (0x000273f6) listscroll_fast2_pane_g2

0x0001,

0xfbec,	// (0x0002a6b2) listscroll_fast2_pane_g

0x8602,	// (0x000230c8) scroll_pane_cp26

0xc93a,	// (0x00027400) cell_fast2_pane_ParamLimits

0xc93a,	// (0x00027400) cell_fast2_pane

0xc94f,	// (0x00027415) cell_fast2_pane_g1

0xc958,	// (0x0002741e) cell_fast2_pane_g2

0xc961,	// (0x00027427) cell_fast2_pane_g3

0x0002,

0xfbf1,	// (0x0002a6b7) cell_fast2_pane_g

0x81e2,	// (0x00022ca8) grid_highlight_pane_cp9

0x81f7,	// (0x00022cbd) main_eswt_pane_ParamLimits

0x81f7,	// (0x00022cbd) main_eswt_pane

0xc8da,	// (0x000273a0) list_single_text_info_pane

0xc969,	// (0x0002742f) eswt_ctrl_button_pane

0xc969,	// (0x0002742f) eswt_ctrl_canvas_pane

0xc971,	// (0x00027437) eswt_ctrl_combo_pane

0xc969,	// (0x0002742f) eswt_ctrl_default_pane

0xc969,	// (0x0002742f) eswt_ctrl_label_pane

0xc979,	// (0x0002743f) eswt_ctrl_wait_pane

0xc981,	// (0x00027447) eswt_shell_pane

0x7b26,	// (0x000225ec) listscroll_eswt_app_pane

0xc9a1,	// (0x00027467) popup_eswt_tasktip_window_ParamLimits

0xc9a1,	// (0x00027467) popup_eswt_tasktip_window

0x9a47,	// (0x0002450d) bg_popup_window_pane_cp18

0xc9b2,	// (0x00027478) eswt_control_pane_g1_ParamLimits

0xc9b2,	// (0x00027478) eswt_control_pane_g1

0xc9bf,	// (0x00027485) eswt_control_pane_g2_ParamLimits

0xc9bf,	// (0x00027485) eswt_control_pane_g2

0xc9cc,	// (0x00027492) eswt_control_pane_g3_ParamLimits

0xc9cc,	// (0x00027492) eswt_control_pane_g3

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_ParamLimits

0xc9d9,	// (0x0002749f) eswt_control_pane_g4

0x0003,

0xfbf8,	// (0x0002a6be) eswt_control_pane_g_ParamLimits

0xfbf8,	// (0x0002a6be) eswt_control_pane_g

0x8486,	// (0x00022f4c) bg_button_pane_ParamLimits

0x8486,	// (0x00022f4c) bg_button_pane

0x81f7,	// (0x00022cbd) common_borders_pane_copy2_ParamLimits

0x81f7,	// (0x00022cbd) common_borders_pane_copy2

0xc9e6,	// (0x000274ac) control_button_pane_g1_ParamLimits

0xc9e6,	// (0x000274ac) control_button_pane_g1

0xc9f2,	// (0x000274b8) control_button_pane_g2_ParamLimits

0xc9f2,	// (0x000274b8) control_button_pane_g2

0xc9fe,	// (0x000274c4) control_button_pane_g3_ParamLimits

0xc9fe,	// (0x000274c4) control_button_pane_g3

0x0002,

0xfc01,	// (0x0002a6c7) control_button_pane_g_ParamLimits

0xfc01,	// (0x0002a6c7) control_button_pane_g

0xca12,	// (0x000274d8) control_button_pane_t1

0xca20,	// (0x000274e6) control_button_pane_t2

0x0001,

0xfc08,	// (0x0002a6ce) control_button_pane_t

0x9943,	// (0x00024409) bg_button_pane_g1

0x994b,	// (0x00024411) bg_button_pane_g2

0x9953,	// (0x00024419) bg_button_pane_g3

0x995b,	// (0x00024421) bg_button_pane_g4

0x9963,	// (0x00024429) bg_button_pane_g5

0x996b,	// (0x00024431) bg_button_pane_g6

0x9973,	// (0x00024439) bg_button_pane_g7

0x997b,	// (0x00024441) bg_button_pane_g8

0x9983,	// (0x00024449) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0002a332) bg_button_pane_g

0xc02c,	// (0x00026af2) common_borders_pane_ParamLimits

0xc02c,	// (0x00026af2) common_borders_pane

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy1_ParamLimits

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy1

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy1_ParamLimits

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy1

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy1_ParamLimits

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy1

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy1_ParamLimits

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy1

0xc067,	// (0x00026b2d) bg_eswt_ctrl_canvas_pane_g1

0xc02c,	// (0x00026af2) common_borders_pane_cp2_ParamLimits

0xc02c,	// (0x00026af2) common_borders_pane_cp2

0xc02c,	// (0x00026af2) common_borders_pane_cp3_ParamLimits

0xc02c,	// (0x00026af2) common_borders_pane_cp3

0xca2e,	// (0x000274f4) separator_horizontal_pane

0xca36,	// (0x000274fc) separator_vertical_pane

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy2_ParamLimits

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy2

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy2_ParamLimits

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy2

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy2_ParamLimits

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy2

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy2_ParamLimits

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy2

0x7b26,	// (0x000225ec) common_borders_pane_cp4

0xca3f,	// (0x00027505) separator_horizontal_pane_g1

0xca48,	// (0x0002750e) separator_horizontal_pane_g2

0xca51,	// (0x00027517) separator_horizontal_pane_g3

0x0002,

0xfc0d,	// (0x0002a6d3) separator_horizontal_pane_g

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy3_ParamLimits

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy3

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy3_ParamLimits

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy3

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy3_ParamLimits

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy3

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy3_ParamLimits

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy3

0x7b26,	// (0x000225ec) common_borders_pane_cp5

0xca5a,	// (0x00027520) separator_vertical_pane_g1

0xca63,	// (0x00027529) separator_vertical_pane_g2

0xca6c,	// (0x00027532) separator_vertical_pane_g3

0x0002,

0xfc14,	// (0x0002a6da) separator_vertical_pane_g

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy4_ParamLimits

0xc9b2,	// (0x00027478) eswt_control_pane_g1_copy4

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy4_ParamLimits

0xc9bf,	// (0x00027485) eswt_control_pane_g2_copy4

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy4_ParamLimits

0xc9cc,	// (0x00027492) eswt_control_pane_g3_copy4

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy4_ParamLimits

0xc9d9,	// (0x0002749f) eswt_control_pane_g4_copy4

0xca75,	// (0x0002753b) eswt_ctrl_combo_button_pane

0xca7d,	// (0x00027543) eswt_ctrl_input_pane

0xca85,	// (0x0002754b) popup_choice_list_window_cp70

0xca8d,	// (0x00027553) eswt_ctrl_input_pane_t1

0x7b26,	// (0x000225ec) input_focus_pane_cp70

0xc02c,	// (0x00026af2) bg_button_pane_cp70_ParamLimits

0xc02c,	// (0x00026af2) bg_button_pane_cp70

0xca9b,	// (0x00027561) eswt_ctrl_combo_button_pane_g1

0xcaa3,	// (0x00027569) wait_bar_pane_cp70

0x9a47,	// (0x0002450d) bg_popup_window_pane_cp70_ParamLimits

0x9a47,	// (0x0002450d) bg_popup_window_pane_cp70

0xcaab,	// (0x00027571) popup_eswt_tasktip_window_t1

0xcac1,	// (0x00027587) wait_bar_pane_cp71_ParamLimits

0xcac1,	// (0x00027587) wait_bar_pane_cp71

0xcacd,	// (0x00027593) grid_eswt_app_pane

0x8925,	// (0x000233eb) scroll_pane_cp70

0xcad6,	// (0x0002759c) cell_eswt_app_pane_ParamLimits

0xcad6,	// (0x0002759c) cell_eswt_app_pane

0xcb06,	// (0x000275cc) cell_eswt_app_pane_g1_ParamLimits

0xcb06,	// (0x000275cc) cell_eswt_app_pane_g1

0xcb35,	// (0x000275fb) cell_eswt_app_pane_g2_ParamLimits

0xcb35,	// (0x000275fb) cell_eswt_app_pane_g2

0x0001,

0xfc1b,	// (0x0002a6e1) cell_eswt_app_pane_g_ParamLimits

0xfc1b,	// (0x0002a6e1) cell_eswt_app_pane_g

0xcb5e,	// (0x00027624) cell_eswt_app_pane_t1_ParamLimits

0xcb5e,	// (0x00027624) cell_eswt_app_pane_t1

0xcb90,	// (0x00027656) grid_highlight_pane_cp70_ParamLimits

0xcb90,	// (0x00027656) grid_highlight_pane_cp70

0x8fe3,	// (0x00023aa9) set_content_pane_g1

0x93ae,	// (0x00023e74) status_small_volume_pane

0x71b9,	// (0x00021c7f) status_small_volume_pane_g1

0x71c1,	// (0x00021c87) volume_small2_pane

0x71ca,	// (0x00021c90) volume_small2_pane_g1

0x71d3,	// (0x00021c99) volume_small2_pane_g2

0x71dc,	// (0x00021ca2) volume_small2_pane_g3

0x71e5,	// (0x00021cab) volume_small2_pane_g4

0x71ee,	// (0x00021cb4) volume_small2_pane_g5

0x71f7,	// (0x00021cbd) volume_small2_pane_g6

0x7200,	// (0x00021cc6) volume_small2_pane_g7

0x7209,	// (0x00021ccf) volume_small2_pane_g8

0x7212,	// (0x00021cd8) volume_small2_pane_g9

0x721b,	// (0x00021ce1) volume_small2_pane_g10

0x0009,

0xfc20,	// (0x0002a6e6) volume_small2_pane_g

0xc42d,	// (0x00026ef3) fep_vkb_top_text_pane_g1_ParamLimits

0xc448,	// (0x00026f0e) fep_vkb_top_text_pane_t1_ParamLimits

0xc6e4,	// (0x000271aa) popup_preview_fixed_window_g3_ParamLimits

0xc6e4,	// (0x000271aa) popup_preview_fixed_window_g3

0x69c9,	// (0x0002148f) popup_toolbar_trans_pane

0xadf9,	// (0x000258bf) aid_height_set_list_ParamLimits

0xae0a,	// (0x000258d0) aid_size_parent_ParamLimits

0x944e,	// (0x00023f14) list_highlight_pane_cp2_ParamLimits

0x8fe3,	// (0x00023aa9) set_content_pane_g1_ParamLimits

0x542d,	// (0x0001fef3) list_single_image_pane_ParamLimits

0x542d,	// (0x0001fef3) list_single_image_pane

0xcb9c,	// (0x00027662) aid_size_cell_image_ParamLimits

0xcb9c,	// (0x00027662) aid_size_cell_image

0xcba9,	// (0x0002766f) grid_single_image_pane_ParamLimits

0xcba9,	// (0x0002766f) grid_single_image_pane

0x8bf6,	// (0x000236bc) list_single_image_pane_g1_ParamLimits

0x8bf6,	// (0x000236bc) list_single_image_pane_g1

0xcbb7,	// (0x0002767d) list_single_image_pane_g2_ParamLimits

0xcbb7,	// (0x0002767d) list_single_image_pane_g2

0x0001,

0xfc35,	// (0x0002a6fb) list_single_image_pane_g_ParamLimits

0xfc35,	// (0x0002a6fb) list_single_image_pane_g

0x8c02,	// (0x000236c8) list_single_image_pane_t1_ParamLimits

0x8c02,	// (0x000236c8) list_single_image_pane_t1

0xcbcb,	// (0x00027691) cell_image_list_pane_ParamLimits

0xcbcb,	// (0x00027691) cell_image_list_pane

0xcbde,	// (0x000276a4) cell_image_list_pane_g1

0xcbe7,	// (0x000276ad) cell_image_list_pane_g2

0x0001,

0xfc3a,	// (0x0002a700) cell_image_list_pane_g

0xcbf0,	// (0x000276b6) aid_size_cell_tb_trans_pane

0x8486,	// (0x00022f4c) bg_tb_trans_pane

0xcc02,	// (0x000276c8) grid_tb_trans_pane

0x9943,	// (0x00024409) bg_tb_trans_pane_g1

0x994b,	// (0x00024411) bg_tb_trans_pane_g2

0x9953,	// (0x00024419) bg_tb_trans_pane_g3

0x995b,	// (0x00024421) bg_tb_trans_pane_g4

0x9963,	// (0x00024429) bg_tb_trans_pane_g5

0x997b,	// (0x00024441) bg_tb_trans_pane_g6

0x9983,	// (0x00024449) bg_tb_trans_pane_g7

0x996b,	// (0x00024431) bg_tb_trans_pane_g8

0x9973,	// (0x00024439) bg_tb_trans_pane_g9

0x0008,

0xfc3f,	// (0x0002a705) bg_tb_trans_pane_g

0xcc16,	// (0x000276dc) cell_toolbar_trans_pane_ParamLimits

0xcc16,	// (0x000276dc) cell_toolbar_trans_pane

0xc067,	// (0x00026b2d) cell_toolbar_trans_pane_g1

0xbc31,	// (0x000266f7) list_form2_midp_pane_t1

0xbc3f,	// (0x00026705) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0002a5ae) list_form2_midp_pane_t

0xbc4d,	// (0x00026713) scroll_pane_cp51_ParamLimits

0xbe09,	// (0x000268cf) form2_midp_wait_pane_g1

0xbe12,	// (0x000268d8) form2_midp_wait_pane_g2

0xbe1b,	// (0x000268e1) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0002a5c3) form2_midp_wait_pane_g

0x7c1a,	// (0x000226e0) list_highlight_pane_cp21_ParamLimits

0xbe72,	// (0x00026938) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe81,	// (0x00026947) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x53ce,	// (0x0001fe94) list_single_2graphic_im_pane_ParamLimits

0x53ce,	// (0x0001fe94) list_single_2graphic_im_pane

0xcc3c,	// (0x00027702) list_single_2graphic_im_pane_g1_ParamLimits

0xcc3c,	// (0x00027702) list_single_2graphic_im_pane_g1

0xcc4d,	// (0x00027713) list_single_2graphic_im_pane_g2_ParamLimits

0xcc4d,	// (0x00027713) list_single_2graphic_im_pane_g2

0xcc59,	// (0x0002771f) list_single_2graphic_im_pane_g3_ParamLimits

0xcc59,	// (0x0002771f) list_single_2graphic_im_pane_g3

0x0003,

0xfc52,	// (0x0002a718) list_single_2graphic_im_pane_g_ParamLimits

0xfc52,	// (0x0002a718) list_single_2graphic_im_pane_g

0xcc79,	// (0x0002773f) list_single_2graphic_im_pane_t1_ParamLimits

0xcc79,	// (0x0002773f) list_single_2graphic_im_pane_t1

0xc6f0,	// (0x000271b6) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6f0,	// (0x000271b6) list_single_graphic_2heading_pane_fp

0x5741,	// (0x00020207) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5741,	// (0x00020207) list_single_graphic_2heading_pane_fp_g1

0xc705,	// (0x000271cb) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc705,	// (0x000271cb) list_single_graphic_2heading_pane_fp_g2

0x570a,	// (0x000201d0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x570a,	// (0x000201d0) list_single_graphic_2heading_pane_fp_g3

0x5716,	// (0x000201dc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5716,	// (0x000201dc) list_single_graphic_2heading_pane_fp_g4

0xc711,	// (0x000271d7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc711,	// (0x000271d7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb80,	// (0x0002a646) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb80,	// (0x0002a646) list_single_graphic_2heading_pane_fp_g

0x590e,	// (0x000203d4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x590e,	// (0x000203d4) list_single_graphic_2heading_pane_fp_t1

0x5779,	// (0x0002023f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5779,	// (0x0002023f) list_single_graphic_2heading_pane_fp_t2

0x5924,	// (0x000203ea) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5924,	// (0x000203ea) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5b,	// (0x0002a721) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5b,	// (0x0002a721) list_single_graphic_2heading_pane_fp_t

0xc0f3,	// (0x00026bb9) fep_hwr_write_pane_g5_ParamLimits

0xc0f3,	// (0x00026bb9) fep_hwr_write_pane_g5

0xc0ff,	// (0x00026bc5) fep_hwr_write_pane_g6_ParamLimits

0xc0ff,	// (0x00026bc5) fep_hwr_write_pane_g6

0xc981,	// (0x00027447) eswt_shell_pane_ParamLimits

0x9a47,	// (0x0002450d) bg_popup_window_pane_cp18_ParamLimits

0xad10,	// (0x000257d6) heading_pane_cp70

0xcaab,	// (0x00027571) popup_eswt_tasktip_window_t1_ParamLimits

0x94c5,	// (0x00023f8b) aid_touch_tab_arrow_left

0x94d1,	// (0x00023f97) aid_touch_tab_arrow_right

0x7b62,	// (0x00022628) title_pane_g3_ParamLimits

0x7b62,	// (0x00022628) title_pane_g3

0x8445,	// (0x00022f0b) set_value_pane_g1

0x69c9,	// (0x0002148f) popup_toolbar_trans_pane_ParamLimits

0xcbf0,	// (0x000276b6) aid_size_cell_tb_trans_pane_ParamLimits

0x8486,	// (0x00022f4c) bg_tb_trans_pane_ParamLimits

0xcc02,	// (0x000276c8) grid_tb_trans_pane_ParamLimits

0x7ea3,	// (0x00022969) cont_note_pane_ParamLimits

0x7ea3,	// (0x00022969) cont_note_pane

0x81f7,	// (0x00022cbd) cont_snote2_single_text_pane_ParamLimits

0x81f7,	// (0x00022cbd) cont_snote2_single_text_pane

0x81f7,	// (0x00022cbd) cont_snote2_single_graphic_pane_ParamLimits

0x81f7,	// (0x00022cbd) cont_snote2_single_graphic_pane

0xa058,	// (0x00024b1e) cont_note_wait_pane_ParamLimits

0xa058,	// (0x00024b1e) cont_note_wait_pane

0xa058,	// (0x00024b1e) cont_note_image_pane_ParamLimits

0xa058,	// (0x00024b1e) cont_note_image_pane

0xccaa,	// (0x00027770) popup_note2_window_g1_ParamLimits

0xccaa,	// (0x00027770) popup_note2_window_g1

0xccdb,	// (0x000277a1) popup_note2_window_t1_ParamLimits

0xccdb,	// (0x000277a1) popup_note2_window_t1

0xcd20,	// (0x000277e6) popup_note2_window_t2_ParamLimits

0xcd20,	// (0x000277e6) popup_note2_window_t2

0xcd65,	// (0x0002782b) popup_note2_window_t3_ParamLimits

0xcd65,	// (0x0002782b) popup_note2_window_t3

0xcdaa,	// (0x00027870) popup_note2_window_t4_ParamLimits

0xcdaa,	// (0x00027870) popup_note2_window_t4

0x7f27,	// (0x000229ed) popup_note2_window_t5_ParamLimits

0x7f27,	// (0x000229ed) popup_note2_window_t5

0x0004,

0xfc67,	// (0x0002a72d) popup_note2_window_t_ParamLimits

0xfc67,	// (0x0002a72d) popup_note2_window_t

0xcdd9,	// (0x0002789f) popup_note2_image_window_g1_ParamLimits

0xcdd9,	// (0x0002789f) popup_note2_image_window_g1

0xcde5,	// (0x000278ab) popup_note2_image_window_g2_ParamLimits

0xcde5,	// (0x000278ab) popup_note2_image_window_g2

0x0001,

0xfc72,	// (0x0002a738) popup_note2_image_window_g_ParamLimits

0xfc72,	// (0x0002a738) popup_note2_image_window_g

0xcdf7,	// (0x000278bd) popup_note2_image_window_t1_ParamLimits

0xcdf7,	// (0x000278bd) popup_note2_image_window_t1

0xce0f,	// (0x000278d5) popup_note2_image_window_t2_ParamLimits

0xce0f,	// (0x000278d5) popup_note2_image_window_t2

0xce27,	// (0x000278ed) popup_note2_image_window_t3_ParamLimits

0xce27,	// (0x000278ed) popup_note2_image_window_t3

0x0002,

0xfc77,	// (0x0002a73d) popup_note2_image_window_t_ParamLimits

0xfc77,	// (0x0002a73d) popup_note2_image_window_t

0xa066,	// (0x00024b2c) popup_note2_wait_window_g1_ParamLimits

0xa066,	// (0x00024b2c) popup_note2_wait_window_g1

0xce43,	// (0x00027909) popup_note2_wait_window_g2_ParamLimits

0xce43,	// (0x00027909) popup_note2_wait_window_g2

0xa07e,	// (0x00024b44) popup_note2_wait_window_g3_ParamLimits

0xa07e,	// (0x00024b44) popup_note2_wait_window_g3

0x0002,

0xfc7e,	// (0x0002a744) popup_note2_wait_window_g_ParamLimits

0xfc7e,	// (0x0002a744) popup_note2_wait_window_g

0xce4f,	// (0x00027915) popup_note2_wait_window_t1_ParamLimits

0xce4f,	// (0x00027915) popup_note2_wait_window_t1

0xce6d,	// (0x00027933) popup_note2_wait_window_t2_ParamLimits

0xce6d,	// (0x00027933) popup_note2_wait_window_t2

0xce8b,	// (0x00027951) popup_note2_wait_window_t3_ParamLimits

0xce8b,	// (0x00027951) popup_note2_wait_window_t3

0xce9d,	// (0x00027963) popup_note2_wait_window_t4_ParamLimits

0xce9d,	// (0x00027963) popup_note2_wait_window_t4

0x0003,

0xfc85,	// (0x0002a74b) popup_note2_wait_window_t_ParamLimits

0xfc85,	// (0x0002a74b) popup_note2_wait_window_t

0xceaf,	// (0x00027975) wait_bar2_pane_ParamLimits

0xceaf,	// (0x00027975) wait_bar2_pane

0xcec7,	// (0x0002798d) popup_snote2_single_text_window_g1_ParamLimits

0xcec7,	// (0x0002798d) popup_snote2_single_text_window_g1

0xceef,	// (0x000279b5) popup_snote2_single_text_window_t1_ParamLimits

0xceef,	// (0x000279b5) popup_snote2_single_text_window_t1

0xcf3b,	// (0x00027a01) popup_snote2_single_text_window_t2_ParamLimits

0xcf3b,	// (0x00027a01) popup_snote2_single_text_window_t2

0xcf87,	// (0x00027a4d) popup_snote2_single_text_window_t3_ParamLimits

0xcf87,	// (0x00027a4d) popup_snote2_single_text_window_t3

0xcfc8,	// (0x00027a8e) popup_snote2_single_text_window_t4_ParamLimits

0xcfc8,	// (0x00027a8e) popup_snote2_single_text_window_t4

0xcffe,	// (0x00027ac4) popup_snote2_single_text_window_t5_ParamLimits

0xcffe,	// (0x00027ac4) popup_snote2_single_text_window_t5

0x0004,

0xfc8e,	// (0x0002a754) popup_snote2_single_text_window_t_ParamLimits

0xfc8e,	// (0x0002a754) popup_snote2_single_text_window_t

0xd029,	// (0x00027aef) popup_snote2_single_graphic_window_g1_ParamLimits

0xd029,	// (0x00027aef) popup_snote2_single_graphic_window_g1

0xd051,	// (0x00027b17) popup_snote2_single_graphic_window_g2_ParamLimits

0xd051,	// (0x00027b17) popup_snote2_single_graphic_window_g2

0x0001,

0xfc99,	// (0x0002a75f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc99,	// (0x0002a75f) popup_snote2_single_graphic_window_g

0xd079,	// (0x00027b3f) popup_snote2_single_graphic_window_t1_ParamLimits

0xd079,	// (0x00027b3f) popup_snote2_single_graphic_window_t1

0xd0c5,	// (0x00027b8b) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0c5,	// (0x00027b8b) popup_snote2_single_graphic_window_t2

0xcf87,	// (0x00027a4d) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf87,	// (0x00027a4d) popup_snote2_single_graphic_window_t3

0xcfc8,	// (0x00027a8e) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfc8,	// (0x00027a8e) popup_snote2_single_graphic_window_t4

0xcffe,	// (0x00027ac4) popup_snote2_single_graphic_window_t5_ParamLimits

0xcffe,	// (0x00027ac4) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9e,	// (0x0002a764) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9e,	// (0x0002a764) popup_snote2_single_graphic_window_t

0xbb10,	// (0x000265d6) clock_nsta_pane_cp2_t1

0xbb10,	// (0x000265d6) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0002a584) clock_nsta_pane_cp2_t

0x5005,	// (0x0001facb) form_field_data_wide_pane_g1_ParamLimits

0x84a0,	// (0x00022f66) form_field_data_wide_pane_g2_ParamLimits

0x84a0,	// (0x00022f66) form_field_data_wide_pane_g2

0x84ac,	// (0x00022f72) form_field_data_wide_pane_g3_ParamLimits

0x84ac,	// (0x00022f72) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002a147) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002a147) form_field_data_wide_pane_g

0xb9e9,	// (0x000264af) grid_touch_3_pane_ParamLimits

0xb9e9,	// (0x000264af) grid_touch_3_pane

0xd111,	// (0x00027bd7) cell_touch_3_pane_ParamLimits

0xd111,	// (0x00027bd7) cell_touch_3_pane

0xc067,	// (0x00026b2d) cell_touch_3_pane_g1

0xc067,	// (0x00026b2d) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0002a609) cell_touch_3_pane_g

0x7f59,	// (0x00022a1f) cont_query_data_pane

0x7f61,	// (0x00022a27) cont_query_data_pane_cp1

0xd13f,	// (0x00027c05) button_value_adjust_pane_cp7

0xd147,	// (0x00027c0d) query_popup_pane_cp3

0x8bd4,	// (0x0002369a) bg_popup_sub_pane_cp22_ParamLimits

0x6149,	// (0x00020c0f) navi_navi_volume_pane_cp2

0x6164,	// (0x00020c2a) popup_side_volume_key_window_g2

0x6173,	// (0x00020c39) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002a1dd) popup_side_volume_key_window_g

0x6190,	// (0x00020c56) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002a1e4) popup_side_volume_key_window_t

0x8ead,	// (0x00023973) popup_side_volume_key_window_ParamLimits

0x4c40,	// (0x0001f706) list_double_graphic_pane_g4_ParamLimits

0x4c40,	// (0x0001f706) list_double_graphic_pane_g4

0x540d,	// (0x0001fed3) list_single_2heading_msg_pane_ParamLimits

0x540d,	// (0x0001fed3) list_single_2heading_msg_pane

0x5944,	// (0x0002040a) list_single_2heading_msg_pane_g1_ParamLimits

0x5944,	// (0x0002040a) list_single_2heading_msg_pane_g1

0x4a6f,	// (0x0001f535) list_single_2heading_msg_pane_g2_ParamLimits

0x4a6f,	// (0x0001f535) list_single_2heading_msg_pane_g2

0x5950,	// (0x00020416) list_single_2heading_msg_pane_g3_ParamLimits

0x5950,	// (0x00020416) list_single_2heading_msg_pane_g3

0x595c,	// (0x00020422) list_single_2heading_msg_pane_g4_ParamLimits

0x595c,	// (0x00020422) list_single_2heading_msg_pane_g4

0x0003,

0xfca9,	// (0x0002a76f) list_single_2heading_msg_pane_g_ParamLimits

0xfca9,	// (0x0002a76f) list_single_2heading_msg_pane_g

0x5974,	// (0x0002043a) list_single_2heading_msg_pane_t1_ParamLimits

0x5974,	// (0x0002043a) list_single_2heading_msg_pane_t1

0x599c,	// (0x00020462) list_single_2heading_msg_pane_t2_ParamLimits

0x599c,	// (0x00020462) list_single_2heading_msg_pane_t2

0x59d0,	// (0x00020496) list_single_2heading_msg_pane_t3_ParamLimits

0x59d0,	// (0x00020496) list_single_2heading_msg_pane_t3

0x5a09,	// (0x000204cf) list_single_2heading_msg_pane_t4_ParamLimits

0x5a09,	// (0x000204cf) list_single_2heading_msg_pane_t4

0x0003,

0xfcb2,	// (0x0002a778) list_single_2heading_msg_pane_t_ParamLimits

0xfcb2,	// (0x0002a778) list_single_2heading_msg_pane_t

0x7b6e,	// (0x00022634) title_pane_g4_ParamLimits

0x7b6e,	// (0x00022634) title_pane_g4

0x5f57,	// (0x00020a1d) title_pane_stacon_g3_ParamLimits

0x5f57,	// (0x00020a1d) title_pane_stacon_g3

0xcc6d,	// (0x00027733) list_single_2graphic_im_pane_g4_ParamLimits

0xcc6d,	// (0x00027733) list_single_2graphic_im_pane_g4

0xaab7,	// (0x0002557d) popup_side_volume_key_window_cp

0xb300,	// (0x00025dc6) main_idle_act2_pane_t1

0x6abb,	// (0x00021581) toolbar_button_pane_g10

0x83ef,	// (0x00022eb5) popup_toolbar_window_cp1

0xbb01,	// (0x000265c7) clock_nsta_pane_cp_t1

0xbb01,	// (0x000265c7) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0002a57f) clock_nsta_pane_cp_t

0x6149,	// (0x00020c0f) navi_navi_volume_pane_cp2_ParamLimits

0x6158,	// (0x00020c1e) popup_side_volume_key_window_g1_ParamLimits

0x6164,	// (0x00020c2a) popup_side_volume_key_window_g2_ParamLimits

0x6173,	// (0x00020c39) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002a1dd) popup_side_volume_key_window_g_ParamLimits

0x6ec9,	// (0x0002198f) fep_hwr_aid_pane

0x1e29,	// (0x0001c8ef) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c3,	// (0x00026b89) fep_hwr_top_pane_g1_ParamLimits

0xc0d5,	// (0x00026b9b) fep_hwr_top_pane_g2_ParamLimits

0x6f82,	// (0x00021a48) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0002a5d4) fep_hwr_top_pane_g_ParamLimits

0x6f97,	// (0x00021a5d) fep_hwr_top_text_pane_ParamLimits

0xa87a,	// (0x00025340) aid_touch_tab_arrow_arrow_2

0xa883,	// (0x00025349) aid_touch_tab_arrow_left_2

0x6edd,	// (0x000219a3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f14,	// (0x000219da) fep_hwr_prediction_pane

0xc235,	// (0x00026cfb) fep_vkb_prediction_pane

0xc339,	// (0x00026dff) fep_vkb_side_pane_g3_ParamLimits

0xc339,	// (0x00026dff) fep_vkb_side_pane_g3

0xc2e5,	// (0x00026dab) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc765,	// (0x0002722b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc772,	// (0x00027238) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb8,	// (0x0002a67e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd16c,	// (0x00027c32) fep_hwr_prediction_pane_g1

0x7224,	// (0x00021cea) fep_hwr_prediction_pane_g2

0x722c,	// (0x00021cf2) fep_hwr_prediction_pane_g3

0x7234,	// (0x00021cfa) fep_hwr_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0002a781) fep_hwr_prediction_pane_g

0xd16c,	// (0x00027c32) fep_vkb_prediction_pane_g1

0xd176,	// (0x00027c3c) fep_vkb_prediction_pane_g2

0xd17e,	// (0x00027c44) fep_vkb_prediction_pane_g3

0xd186,	// (0x00027c4c) fep_vkb_prediction_pane_g4

0x0003,

0xfcc4,	// (0x0002a78a) fep_vkb_prediction_pane_g

0xad89,	// (0x0002584f) slider_set_pane_g3

0xad9d,	// (0x00025863) slider_set_pane_g4

0xadb5,	// (0x0002587b) slider_set_pane_g5

0xad89,	// (0x0002584f) slider_set_pane_g6

0x6d8b,	// (0x00021851) slider_set_pane_g7

0xaf6f,	// (0x00025a35) slider_form_pane_g3

0xaf78,	// (0x00025a3e) slider_form_pane_g4

0xaf80,	// (0x00025a46) slider_form_pane_g5

0xaf6f,	// (0x00025a35) slider_form_pane_g6

0xaf88,	// (0x00025a4e) slider_form_pane_g7

0xb5a9,	// (0x0002606f) slider_set_pane_vc_g3

0xb5b2,	// (0x00026078) slider_set_pane_vc_g4

0xb5bb,	// (0x00026081) slider_set_pane_vc_g5

0xb5a9,	// (0x0002606f) slider_set_pane_vc_g6

0xb5c4,	// (0x0002608a) slider_set_pane_vc_g7

0xb7bc,	// (0x00026282) slider_form_pane_vc_g1

0xb7c5,	// (0x0002628b) slider_form_pane_vc_g2

0xb7ce,	// (0x00026294) slider_form_pane_vc_g3

0xb7bc,	// (0x00026282) slider_form_pane_vc_g4

0xb7d7,	// (0x0002629d) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0002a551) slider_form_pane_vc_g

0x7b26,	// (0x000225ec) main_idle_act3_pane

0xd18e,	// (0x00027c54) ai3_links_pane

0xd197,	// (0x00027c5d) popup_ai3_data_window_ParamLimits

0xd197,	// (0x00027c5d) popup_ai3_data_window

0x7b26,	// (0x000225ec) grid_ai3_links_pane

0xd1b1,	// (0x00027c77) cell_ai3_links_pane_ParamLimits

0xd1b1,	// (0x00027c77) cell_ai3_links_pane

0xd1c9,	// (0x00027c8f) bg_popup_sub_pane_cp11

0xd1d6,	// (0x00027c9c) cell_ai3_links_pane_g1

0x7b26,	// (0x000225ec) bg_popup_sub_pane_cp12

0xd1fb,	// (0x00027cc1) heading_ai3_data_pane

0xd203,	// (0x00027cc9) list_ai3_gene_pane

0xd20f,	// (0x00027cd5) popup_ai3_data_window_g1

0xd217,	// (0x00027cdd) heading_ai3_data_pane_g1

0xd21f,	// (0x00027ce5) heading_ai3_data_pane_t1

0xd22d,	// (0x00027cf3) list_double_ai3_gene_pane_ParamLimits

0xd22d,	// (0x00027cf3) list_double_ai3_gene_pane

0xd23a,	// (0x00027d00) list_single_ai3_gene_pane_ParamLimits

0xd23a,	// (0x00027d00) list_single_ai3_gene_pane

0xc02c,	// (0x00026af2) list_highlight_pane_cp7_ParamLimits

0xc02c,	// (0x00026af2) list_highlight_pane_cp7

0xd247,	// (0x00027d0d) list_single_a13_gene_pane_t1_ParamLimits

0xd247,	// (0x00027d0d) list_single_a13_gene_pane_t1

0xd25e,	// (0x00027d24) list_single_ai3_gene_pane_g1

0xd267,	// (0x00027d2d) list_single_ai3_gene_pane_g2

0x0001,

0xfccd,	// (0x0002a793) list_single_ai3_gene_pane_g

0xd26f,	// (0x00027d35) list_double_ai3_gene_pane_g1_ParamLimits

0xd26f,	// (0x00027d35) list_double_ai3_gene_pane_g1

0xd27b,	// (0x00027d41) list_double_ai3_gene_pane_t1_ParamLimits

0xd27b,	// (0x00027d41) list_double_ai3_gene_pane_t1

0xd297,	// (0x00027d5d) list_double_ai3_gene_pane_t2_ParamLimits

0xd297,	// (0x00027d5d) list_double_ai3_gene_pane_t2

0xd2ad,	// (0x00027d73) list_double_ai3_gene_pane_t3_ParamLimits

0xd2ad,	// (0x00027d73) list_double_ai3_gene_pane_t3

0x0002,

0xfcd2,	// (0x0002a798) list_double_ai3_gene_pane_t_ParamLimits

0xfcd2,	// (0x0002a798) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x593a,	// (0x00020400) aid_size_min_col_2

0xd158,	// (0x00027c1e) aid_size_min_msg_ParamLimits

0xd158,	// (0x00027c1e) aid_size_min_msg

0xc439,	// (0x00026eff) fep_vkb_top_text_pane_g2_ParamLimits

0xc439,	// (0x00026eff) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0002a604) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0002a604) fep_vkb_top_text_pane_g

0x7b26,	// (0x000225ec) main_hc_apps_shell_pane

0xd2ca,	// (0x00027d90) grid_hc_apps_pane_ParamLimits

0xd2ca,	// (0x00027d90) grid_hc_apps_pane

0xd2d9,	// (0x00027d9f) list_hc_apps_pane

0xd2e1,	// (0x00027da7) scroll_pane_cp37_ParamLimits

0xd2e1,	// (0x00027da7) scroll_pane_cp37

0xd2ed,	// (0x00027db3) cell_hc_apps_pane_ParamLimits

0xd2ed,	// (0x00027db3) cell_hc_apps_pane

0xd39b,	// (0x00027e61) cell_hc_apps_pane_g1_ParamLimits

0xd39b,	// (0x00027e61) cell_hc_apps_pane_g1

0xd3cc,	// (0x00027e92) cell_hc_apps_pane_g2_ParamLimits

0xd3cc,	// (0x00027e92) cell_hc_apps_pane_g2

0xd3e8,	// (0x00027eae) cell_hc_apps_pane_g3_ParamLimits

0xd3e8,	// (0x00027eae) cell_hc_apps_pane_g3

0x0002,

0xfcd9,	// (0x0002a79f) cell_hc_apps_pane_g_ParamLimits

0xfcd9,	// (0x0002a79f) cell_hc_apps_pane_g

0xd40a,	// (0x00027ed0) cell_hc_apps_pane_t1_ParamLimits

0xd40a,	// (0x00027ed0) cell_hc_apps_pane_t1

0x7ea3,	// (0x00022969) grid_highlight_pane_cp10_ParamLimits

0x7ea3,	// (0x00022969) grid_highlight_pane_cp10

0xd44a,	// (0x00027f10) list_single_hc_apps_pane_ParamLimits

0xd44a,	// (0x00027f10) list_single_hc_apps_pane

0xd4a6,	// (0x00027f6c) list_single_hc_apps_pane_g1

0x5a2e,	// (0x000204f4) list_single_hc_apps_pane_g2

0x0001,

0xfce0,	// (0x0002a7a6) list_single_hc_apps_pane_g

0x5a47,	// (0x0002050d) list_single_hc_apps_pane_g2_copy1

0x5a63,	// (0x00020529) list_single_hc_apps_pane_t1

0x7c1a,	// (0x000226e0) bg_set_opt_pane_cp_ParamLimits

0x5e7e,	// (0x00020944) setting_slider_pane_t1_ParamLimits

0x5e97,	// (0x0002095d) setting_slider_pane_t2_ParamLimits

0x5eb1,	// (0x00020977) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002a02a) setting_slider_pane_t_ParamLimits

0x5ec9,	// (0x0002098f) slider_set_pane_ParamLimits

0x63ee,	// (0x00020eb4) control_pane_g5_ParamLimits

0x63ee,	// (0x00020eb4) control_pane_g5

0xad7c,	// (0x00025842) slider_set_pane_g1_ParamLimits

0x6d7f,	// (0x00021845) slider_set_pane_g2_ParamLimits

0xad89,	// (0x0002584f) slider_set_pane_g3_ParamLimits

0xad9d,	// (0x00025863) slider_set_pane_g4_ParamLimits

0xadb5,	// (0x0002587b) slider_set_pane_g5_ParamLimits

0xad89,	// (0x0002584f) slider_set_pane_g6_ParamLimits

0x6d8b,	// (0x00021851) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0002a430) slider_set_pane_g_ParamLimits

0x8f8e,	// (0x00023a54) navi_icon_text_pane_ParamLimits

0x9486,	// (0x00023f4c) aid_fill_nsta_2_ParamLimits

0x94c5,	// (0x00023f8b) aid_touch_tab_arrow_left_ParamLimits

0x94d1,	// (0x00023f97) aid_touch_tab_arrow_right_ParamLimits

0x953d,	// (0x00024003) clock_nsta_pane_ParamLimits

0xa85c,	// (0x00025322) navi_icon_pane_g1_ParamLimits

0xa868,	// (0x0002532e) navi_text_pane_t1_ParamLimits

0xbc0b,	// (0x000266d1) navi_icon_text_pane_g1_ParamLimits

0xbc17,	// (0x000266dd) navi_icon_text_pane_t1_ParamLimits

0xd4a6,	// (0x00027f6c) list_single_hc_apps_pane_g1_ParamLimits

0x5a2e,	// (0x000204f4) list_single_hc_apps_pane_g2_ParamLimits

0xfce0,	// (0x0002a7a6) list_single_hc_apps_pane_g_ParamLimits

0x5a47,	// (0x0002050d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a63,	// (0x00020529) list_single_hc_apps_pane_t1_ParamLimits

0x5d92,	// (0x00020858) popup_toolbar2_fixed_window_ParamLimits

0x5d92,	// (0x00020858) popup_toolbar2_fixed_window

0x69bf,	// (0x00021485) popup_toolbar2_float_window

0x7b26,	// (0x000225ec) bg_popup_sub_pane_cp27

0xd4bf,	// (0x00027f85) grid_toolbar2_float_pane

0x7b26,	// (0x000225ec) bg_popup_sub_pane_cp26

0xd4bf,	// (0x00027f85) grid_toolbar2_fixed_pane

0xd4c7,	// (0x00027f8d) cell_toolbar2_fixed_pane_ParamLimits

0xd4c7,	// (0x00027f8d) cell_toolbar2_fixed_pane

0xd4d7,	// (0x00027f9d) cell_toolbar2_fixed_pane_g1

0xd4e0,	// (0x00027fa6) toolbar2_fixed_button_pane

0x9943,	// (0x00024409) toolbar2_fixed_button_pane_g1

0x994b,	// (0x00024411) toolbar2_fixed_button_pane_g2

0x9953,	// (0x00024419) toolbar2_fixed_button_pane_g3

0x995b,	// (0x00024421) toolbar2_fixed_button_pane_g4

0x9963,	// (0x00024429) toolbar2_fixed_button_pane_g5

0x996b,	// (0x00024431) toolbar2_fixed_button_pane_g6

0x9973,	// (0x00024439) toolbar2_fixed_button_pane_g7

0x997b,	// (0x00024441) toolbar2_fixed_button_pane_g8

0x9983,	// (0x00024449) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0002a332) toolbar2_fixed_button_pane_g

0xd4e8,	// (0x00027fae) cell_toolbar2_float_pane_ParamLimits

0xd4e8,	// (0x00027fae) cell_toolbar2_float_pane

0xd4f9,	// (0x00027fbf) cell_toolbar2_float_pane_g1

0xd4e0,	// (0x00027fa6) toolbar2_fixed_button_pane_cp

0xc195,	// (0x00026c5b) fep_vkb_accented_list_pane_ParamLimits

0xc195,	// (0x00026c5b) fep_vkb_accented_list_pane

0x70e5,	// (0x00021bab) bg_popup_fep_shadow_pane_g9

0x910e,	// (0x00023bd4) bg_popup_fep_shadow_pane_cp3

0x85e9,	// (0x000230af) list_accented_list_pane

0xd502,	// (0x00027fc8) list_single_accented_list_pane_ParamLimits

0xd502,	// (0x00027fc8) list_single_accented_list_pane

0x910e,	// (0x00023bd4) list_highlight_pane_cp10

0xd513,	// (0x00027fd9) list_single_accented_list_pane_t1

0x690f,	// (0x000213d5) popup_slider_window_ParamLimits

0x690f,	// (0x000213d5) popup_slider_window

0xd14f,	// (0x00027c15) aid_indentation_list_msg

0xd5cd,	// (0x00028093) bg_popup_window_pane_cp19

0xd637,	// (0x000280fd) popup_slider_window_g1

0xd653,	// (0x00028119) popup_slider_window_g2

0xd66f,	// (0x00028135) popup_slider_window_g3

0x0005,

0xfce5,	// (0x0002a7ab) popup_slider_window_g

0xd6cb,	// (0x00028191) popup_slider_window_t1

0xd73f,	// (0x00028205) small_volume_slider_vertical_pane

0xc067,	// (0x00026b2d) small_volume_slider_vertical_pane_g1

0xc067,	// (0x00026b2d) small_volume_slider_vertical_pane_g2

0xd75b,	// (0x00028221) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf7,	// (0x0002a7bd) small_volume_slider_vertical_pane_g

0x5b54,	// (0x0002061a) area_side_right_pane_ParamLimits

0x5b54,	// (0x0002061a) area_side_right_pane

0x723c,	// (0x00021d02) aid_size_side_button_ParamLimits

0x723c,	// (0x00021d02) aid_size_side_button

0x7250,	// (0x00021d16) grid_sctrl_middle_pane_ParamLimits

0x7250,	// (0x00021d16) grid_sctrl_middle_pane

0x7270,	// (0x00021d36) sctrl_sk_bottom_pane

0x7281,	// (0x00021d47) sctrl_sk_top_pane

0x7293,	// (0x00021d59) aid_touch_sctrl_top

0x7ea3,	// (0x00022969) bg_sctrl_sk_pane_ParamLimits

0x7ea3,	// (0x00022969) bg_sctrl_sk_pane

0x72a0,	// (0x00021d66) sctrl_sk_top_pane_g1

0x72ad,	// (0x00021d73) sctrl_sk_top_pane_t1

0x7293,	// (0x00021d59) aid_touch_sctrl_bottom

0x7ea3,	// (0x00022969) bg_sctrl_sk_pane_cp_ParamLimits

0x7ea3,	// (0x00022969) bg_sctrl_sk_pane_cp

0x72c8,	// (0x00021d8e) sctrl_sk_bottom_pane_g1

0x72ad,	// (0x00021d73) sctrl_sk_bottom_pane_t1

0x72d1,	// (0x00021d97) cell_sctrl_middle_pane_ParamLimits

0x72d1,	// (0x00021d97) cell_sctrl_middle_pane

0x72ec,	// (0x00021db2) aid_touch_sctrl_middle_ParamLimits

0x72ec,	// (0x00021db2) aid_touch_sctrl_middle

0x8486,	// (0x00022f4c) bg_sctrl_middle_pane_ParamLimits

0x8486,	// (0x00022f4c) bg_sctrl_middle_pane

0xc2e5,	// (0x00026dab) cell_sctrl_middle_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) cell_sctrl_middle_pane_g1

0x72fe,	// (0x00021dc4) cell_sctrl_middle_pane_g2_ParamLimits

0x72fe,	// (0x00021dc4) cell_sctrl_middle_pane_g2

0x0001,

0xfd03,	// (0x0002a7c9) cell_sctrl_middle_pane_g_ParamLimits

0xfd03,	// (0x0002a7c9) cell_sctrl_middle_pane_g

0x9943,	// (0x00024409) bg_sctrl_middle_pane_g1

0x994b,	// (0x00024411) bg_sctrl_middle_pane_g2

0x9953,	// (0x00024419) bg_sctrl_middle_pane_g3

0x995b,	// (0x00024421) bg_sctrl_middle_pane_g4

0x9963,	// (0x00024429) bg_sctrl_middle_pane_g5

0x996b,	// (0x00024431) bg_sctrl_middle_pane_g6

0x9973,	// (0x00024439) bg_sctrl_middle_pane_g7

0x997b,	// (0x00024441) bg_sctrl_middle_pane_g8

0x0007,

0xfd08,	// (0x0002a7ce) bg_sctrl_middle_pane_g

0x9983,	// (0x00024449) bg_sctrl_middle_pane_g8_copy1

0x9943,	// (0x00024409) bg_sctrl_sk_pane_g1

0x994b,	// (0x00024411) bg_sctrl_sk_pane_g2

0x9953,	// (0x00024419) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0002a332) bg_sctrl_sk_pane_g

0x83b5,	// (0x00022e7b) aid_size_touch_scroll_bar

0x995b,	// (0x00024421) bg_sctrl_sk_pane_g4

0x9963,	// (0x00024429) bg_sctrl_sk_pane_g5

0x996b,	// (0x00024431) bg_sctrl_sk_pane_g6

0x9973,	// (0x00024439) bg_sctrl_sk_pane_g7

0x997b,	// (0x00024441) bg_sctrl_sk_pane_g8

0x9983,	// (0x00024449) bg_sctrl_sk_pane_g9

0x657a,	// (0x00021040) popup_fep_china_hwr2_fs_candidate_window

0x6584,	// (0x0002104a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6584,	// (0x0002104a) popup_fep_china_hwr2_fs_control_window

0xc2e5,	// (0x00026dab) sctrl_sk_top_pane_g2

0x0001,

0xfcfe,	// (0x0002a7c4) sctrl_sk_top_pane_g

0xd764,	// (0x0002822a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd764,	// (0x0002822a) aid_fep_china_hwr2_fs_cell

0xd776,	// (0x0002823c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd776,	// (0x0002823c) bg_popup_fep_shadow_pane_cp4

0xd78d,	// (0x00028253) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd78d,	// (0x00028253) bg_popup_fep_shadow_pane_cp5

0xd79f,	// (0x00028265) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd79f,	// (0x00028265) popup_fep_china_hwr2_fs_control_bar_grid

0xd7af,	// (0x00028275) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7b7,	// (0x0002827d) aid_fep_china_hwr2_fs_candi_cell

0x7b26,	// (0x000225ec) bg_popup_fep_shadow_pane_cp6

0xd7c1,	// (0x00028287) popup_fep_china_hwr2_fs_candidate_grid

0xd7cb,	// (0x00028291) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7cb,	// (0x00028291) cell_fep_china_hwr2_fs_funtion_grid

0xc067,	// (0x00026b2d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7e3,	// (0x000282a9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7e3,	// (0x000282a9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7f1,	// (0x000282b7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7f1,	// (0x000282b7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd19,	// (0x0002a7df) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd19,	// (0x0002a7df) cell_fep_china_hwr2_fs_funtion_grid_g

0xd807,	// (0x000282cd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd807,	// (0x000282cd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd81c,	// (0x000282e2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd81c,	// (0x000282e2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1e,	// (0x0002a7e4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1e,	// (0x0002a7e4) cell_fep_china_hwr2_fs_funtion_grid_t

0xd838,	// (0x000282fe) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd840,	// (0x00028306) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd848,	// (0x0002830e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd23,	// (0x0002a7e9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd850,	// (0x00028316) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd850,	// (0x00028316) cell_fep_china_hwr2_fs_candidate_grid

0xd869,	// (0x0002832f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd871,	// (0x00028337) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc067,	// (0x00026b2d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc067,	// (0x00026b2d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0002a609) cell_fep_china_hwr2_fs_candidate_grid_g

0xd879,	// (0x0002833f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x954a,	// (0x00024010) clock_nsta_pane_cp_24_ParamLimits

0x954a,	// (0x00024010) clock_nsta_pane_cp_24

0x95c8,	// (0x0002408e) indicator_nsta_pane_cp_24_ParamLimits

0x95c8,	// (0x0002408e) indicator_nsta_pane_cp_24

0xa6d8,	// (0x0002519e) heading_pane_g1

0x0001,

0xf8d1,	// (0x0002a397) heading_pane_g

0xb149,	// (0x00025c0f) grid_sct_catagory_button_pane

0xb179,	// (0x00025c3f) scroll_pane_cp5_ParamLimits

0xbc59,	// (0x0002671f) button_value_adjust_pane_cp5_ParamLimits

0xbc59,	// (0x0002671f) button_value_adjust_pane_cp5

0xbd38,	// (0x000267fe) form2_midp_time_pane_ParamLimits

0xd887,	// (0x0002834d) cell_sct_catagory_button_pane_ParamLimits

0xd887,	// (0x0002834d) cell_sct_catagory_button_pane

0xc02c,	// (0x00026af2) bg_button_pane_cp01_ParamLimits

0xc02c,	// (0x00026af2) bg_button_pane_cp01

0xc067,	// (0x00026b2d) cell_sct_catagory_button_pane_g1

0x694e,	// (0x00021414) popup_tb_extension_window

0xd899,	// (0x0002835f) aid_size_cell_ext_ParamLimits

0xd899,	// (0x0002835f) aid_size_cell_ext

0x7ea3,	// (0x00022969) bg_tb_trans_pane_cp1_ParamLimits

0x7ea3,	// (0x00022969) bg_tb_trans_pane_cp1

0xd8b9,	// (0x0002837f) grid_tb_ext_pane_ParamLimits

0xd8b9,	// (0x0002837f) grid_tb_ext_pane

0xd8e9,	// (0x000283af) cell_tb_ext_pane_ParamLimits

0xd8e9,	// (0x000283af) cell_tb_ext_pane

0xd900,	// (0x000283c6) cell_tb_ext_pane_g1_ParamLimits

0xd900,	// (0x000283c6) cell_tb_ext_pane_g1

0xd91d,	// (0x000283e3) cell_tb_ext_pane_t1

0x7ea3,	// (0x00022969) list_highlight_pane_cp11_ParamLimits

0x7ea3,	// (0x00022969) list_highlight_pane_cp11

0x5db1,	// (0x00020877) popup_uni_indicator_window_ParamLimits

0x5db1,	// (0x00020877) popup_uni_indicator_window

0x8486,	// (0x00022f4c) bg_popup_sub_pane_cp14

0xd938,	// (0x000283fe) list_uniindi_pane

0xd944,	// (0x0002840a) uniindi_top_pane

0x7ea3,	// (0x00022969) bg_uniindi_top_pane

0xd963,	// (0x00028429) uniindi_top_pane_g1

0xd979,	// (0x0002843f) uniindi_top_pane_g2

0x0003,

0xfd2a,	// (0x0002a7f0) uniindi_top_pane_g

0xd9a3,	// (0x00028469) uniindi_top_pane_t1

0xd9cd,	// (0x00028493) list_single_uniindi_pane_ParamLimits

0xd9cd,	// (0x00028493) list_single_uniindi_pane

0xc067,	// (0x00026b2d) bg_uniindi_top_pane_g1

0xd9e0,	// (0x000284a6) list_single_uniindi_pane_g1

0xd9f3,	// (0x000284b9) list_single_uniindi_pane_t1

0x7b26,	// (0x000225ec) control_bg_pane

0xda18,	// (0x000284de) bg_sctrl_sk_pane_cp1

0xda21,	// (0x000284e7) bg_sctrl_sk_pane_cp2

0xda2a,	// (0x000284f0) control_bg_pane_g1

0xda33,	// (0x000284f9) control_bg_pane_g2

0x0001,

0xfd33,	// (0x0002a7f9) control_bg_pane_g

0xba93,	// (0x00026559) cell_indicator_nsta_pane_g1_ParamLimits

0xbaa1,	// (0x00026567) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0002a56d) cell_indicator_nsta_pane_g_ParamLimits

0x56f7,	// (0x000201bd) form2_midp_time_pane_t1_ParamLimits

0x81f7,	// (0x00022cbd) main_idle_act4_pane_ParamLimits

0x81f7,	// (0x00022cbd) main_idle_act4_pane

0x694e,	// (0x00021414) popup_tb_extension_window_ParamLimits

0xd8d9,	// (0x0002839f) tb_ext_find_pane_ParamLimits

0xd8d9,	// (0x0002839f) tb_ext_find_pane

0xda3c,	// (0x00028502) ai_gene_pane_1_cp1

0x9247,	// (0x00023d0d) ai_gene_pane_2_cp1

0xda44,	// (0x0002850a) list_single_idle_plugin_calendar_pane

0xda4d,	// (0x00028513) list_single_idle_plugin_notification_pane

0xda56,	// (0x0002851c) list_single_idle_plugin_player_pane

0xda5f,	// (0x00028525) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda5f,	// (0x00028525) list_single_idle_plugin_shortcut_pane

0xda81,	// (0x00028547) main_idle_act4_pane_t1

0xda93,	// (0x00028559) main_idle_act4_pane_t2

0x0001,

0xfd38,	// (0x0002a7fe) main_idle_act4_pane_t

0xdaa5,	// (0x0002856b) middle_sk_idle_act4_pane_ParamLimits

0xdaa5,	// (0x0002856b) middle_sk_idle_act4_pane

0xdabb,	// (0x00028581) popup_clock_digital_analogue_window_cp2

0xdad5,	// (0x0002859b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdad5,	// (0x0002859b) shortcut_wheel_idle_act4_pane

0xc067,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g1

0xc067,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g2

0xc067,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g3

0xc067,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g4

0xc067,	// (0x00026b2d) shortcut_wheel_idle_act4_pane_g5

0xdae9,	// (0x000285af) shortcut_wheel_idle_act4_pane_g6

0xdaf1,	// (0x000285b7) shortcut_wheel_idle_act4_pane_g7

0xdaf9,	// (0x000285bf) shortcut_wheel_idle_act4_pane_g8

0xdb01,	// (0x000285c7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3d,	// (0x0002a803) shortcut_wheel_idle_act4_pane_g

0xc2e5,	// (0x00026dab) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) middle_sk_idle_act4_pane_g1

0xdb65,	// (0x0002862b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb65,	// (0x0002862b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd60,	// (0x0002a826) middle_sk_idle_act4_pane_g_ParamLimits

0xfd60,	// (0x0002a826) middle_sk_idle_act4_pane_g

0xdb71,	// (0x00028637) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb71,	// (0x00028637) middle_sk_idle_act4_pane_t1

0xdb8e,	// (0x00028654) grid_ai_shortcut_pane_ParamLimits

0xdb8e,	// (0x00028654) grid_ai_shortcut_pane

0xdba7,	// (0x0002866d) list_highlight_pane_cp16_ParamLimits

0xdba7,	// (0x0002866d) list_highlight_pane_cp16

0xdbb4,	// (0x0002867a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbb4,	// (0x0002867a) list_single_idle_plugin_shortcut_pane_g1

0xdbc0,	// (0x00028686) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbc0,	// (0x00028686) list_single_idle_plugin_shortcut_pane_g2

0xdbd8,	// (0x0002869e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbd8,	// (0x0002869e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd65,	// (0x0002a82b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd65,	// (0x0002a82b) list_single_idle_plugin_shortcut_pane_g

0xdbeb,	// (0x000286b1) cell_ai_shortcut_pane_ParamLimits

0xdbeb,	// (0x000286b1) cell_ai_shortcut_pane

0xdc0f,	// (0x000286d5) cell_ai_shortcut_pane_g1_ParamLimits

0xdc0f,	// (0x000286d5) cell_ai_shortcut_pane_g1

0xda3c,	// (0x00028502) ai_gene_pane_1_cp2

0xdc31,	// (0x000286f7) ai_gene_pane_2_cp2

0xdc39,	// (0x000286ff) list_highlight_pane_cp15

0xdc42,	// (0x00028708) list_single_idle_plugin_calendar_pane_g1

0xdc39,	// (0x000286ff) list_highlight_pane_cp17

0xdc4a,	// (0x00028710) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc52,	// (0x00028718) list_single_idle_plugin_player_pane_g1

0xb3a2,	// (0x00025e68) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6c,	// (0x0002a832) list_single_idle_plugin_player_pane_g

0xdc5a,	// (0x00028720) list_single_idle_plugin_player_pane_t1

0xdc68,	// (0x0002872e) list_single_idle_plugin_player_pane_t2

0xdc76,	// (0x0002873c) list_single_idle_plugin_player_pane_t3

0xdc84,	// (0x0002874a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd71,	// (0x0002a837) list_single_idle_plugin_player_pane_t

0xdc92,	// (0x00028758) wait_bar_pane_cp15

0xdc9a,	// (0x00028760) grid_ai_notification_pane

0xb3a2,	// (0x00025e68) list_single_idle_plugin_notification_pane_g1

0xdca3,	// (0x00028769) cell_ai_notification_pane_ParamLimits

0xdca3,	// (0x00028769) cell_ai_notification_pane

0xdcb0,	// (0x00028776) cell_ai_notification_pane_g1

0xdcb8,	// (0x0002877e) cell_ai_notification_pane_t1

0xdcc6,	// (0x0002878c) tb_ext_find_button_pane

0xdcce,	// (0x00028794) tb_ext_find_pane_g1

0xdcd6,	// (0x0002879c) tb_ext_find_pane_t1

0x8aea,	// (0x000235b0) tb_ext_find_button_pane_g1

0xdce4,	// (0x000287aa) tb_ext_find_button_pane_g2

0x0001,

0xfd7a,	// (0x0002a840) tb_ext_find_button_pane_g

0xda81,	// (0x00028547) main_idle_act4_pane_t1_ParamLimits

0xda93,	// (0x00028559) main_idle_act4_pane_t2_ParamLimits

0xfd38,	// (0x0002a7fe) main_idle_act4_pane_t_ParamLimits

0xdabb,	// (0x00028581) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdac9,	// (0x0002858f) sat_plugin_idle_act4_pane_ParamLimits

0xdac9,	// (0x0002858f) sat_plugin_idle_act4_pane

0xdced,	// (0x000287b3) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdced,	// (0x000287b3) sat_plugin_idle_act4_pane_t1

0xdd00,	// (0x000287c6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd00,	// (0x000287c6) sat_plugin_idle_act4_pane_t2

0xdd13,	// (0x000287d9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd13,	// (0x000287d9) sat_plugin_idle_act4_pane_t3

0xdd26,	// (0x000287ec) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd26,	// (0x000287ec) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7f,	// (0x0002a845) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7f,	// (0x0002a845) sat_plugin_idle_act4_pane_t

0x5cec,	// (0x000207b2) popup_battery_window_ParamLimits

0x5cec,	// (0x000207b2) popup_battery_window

0x7ea3,	// (0x00022969) bg_popup_sub_pane_cp25_ParamLimits

0x7ea3,	// (0x00022969) bg_popup_sub_pane_cp25

0xdd39,	// (0x000287ff) popup_battery_window_g1_ParamLimits

0xdd39,	// (0x000287ff) popup_battery_window_g1

0xdd45,	// (0x0002880b) popup_battery_window_t1_ParamLimits

0xdd45,	// (0x0002880b) popup_battery_window_t1

0xdd57,	// (0x0002881d) popup_battery_window_t2_ParamLimits

0xdd57,	// (0x0002881d) popup_battery_window_t2

0x0001,

0xfd88,	// (0x0002a84e) popup_battery_window_t_ParamLimits

0xfd88,	// (0x0002a84e) popup_battery_window_t

0x9116,	// (0x00023bdc) midp_canvas_pane_ParamLimits

0x918b,	// (0x00023c51) midp_keypad_pane_ParamLimits

0x918b,	// (0x00023c51) midp_keypad_pane

0x944e,	// (0x00023f14) main_midp_pane_ParamLimits

0xbb1f,	// (0x000265e5) signal_pane_g2_cp_ParamLimits

0xdd74,	// (0x0002883a) aid_size_cell_midp_keypad_ParamLimits

0xdd74,	// (0x0002883a) aid_size_cell_midp_keypad

0xdd8e,	// (0x00028854) midp_keyp_game_grid_pane_ParamLimits

0xdd8e,	// (0x00028854) midp_keyp_game_grid_pane

0xddae,	// (0x00028874) midp_keyp_rocker_pane_ParamLimits

0xddae,	// (0x00028874) midp_keyp_rocker_pane

0xddd9,	// (0x0002889f) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x0002889f) midp_keyp_sk_left_pane

0xde33,	// (0x000288f9) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x000288f9) midp_keyp_sk_right_pane

0x7b26,	// (0x000225ec) bg_button_pane_cp03

0xde8d,	// (0x00028953) midp_keyp_sk_left_pane_g1

0x7b26,	// (0x000225ec) bg_button_pane_cp04

0xde8d,	// (0x00028953) midp_keyp_sk_right_pane_g1

0xc067,	// (0x00026b2d) midp_keyp_rocker_pane_g1

0xde96,	// (0x0002895c) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x0002895c) keyp_game_cell_pane

0x7b26,	// (0x000225ec) bg_button_pane_cp02

0xdea9,	// (0x0002896f) keyp_game_cell_pane_g1

0x5d30,	// (0x000207f6) popup_fep_vkb2_window_ParamLimits

0x5d30,	// (0x000207f6) popup_fep_vkb2_window

0x731c,	// (0x00021de2) aid_size_cell_vkb2_ParamLimits

0x731c,	// (0x00021de2) aid_size_cell_vkb2

0x7370,	// (0x00021e36) popup_fep_vkb2_window_g1_ParamLimits

0x7370,	// (0x00021e36) popup_fep_vkb2_window_g1

0x73b8,	// (0x00021e7e) vkb2_area_bottom_pane_ParamLimits

0x73b8,	// (0x00021e7e) vkb2_area_bottom_pane

0x7404,	// (0x00021eca) vkb2_area_keypad_pane_ParamLimits

0x7404,	// (0x00021eca) vkb2_area_keypad_pane

0x7446,	// (0x00021f0c) vkb2_area_top_pane_ParamLimits

0x7446,	// (0x00021f0c) vkb2_area_top_pane

0x74c0,	// (0x00021f86) vkb2_top_entry_pane_ParamLimits

0x74c0,	// (0x00021f86) vkb2_top_entry_pane

0x74ea,	// (0x00021fb0) vkb2_top_grid_left_pane_ParamLimits

0x74ea,	// (0x00021fb0) vkb2_top_grid_left_pane

0x7508,	// (0x00021fce) vkb2_top_grid_right_pane_ParamLimits

0x7508,	// (0x00021fce) vkb2_top_grid_right_pane

0x7526,	// (0x00021fec) vkb2_cell_keypad_pane_ParamLimits

0x7526,	// (0x00021fec) vkb2_cell_keypad_pane

0x75f7,	// (0x000220bd) vkb2_area_bottom_grid_pane_ParamLimits

0x75f7,	// (0x000220bd) vkb2_area_bottom_grid_pane

0x761d,	// (0x000220e3) vkb2_area_bottom_pane_g1_ParamLimits

0x761d,	// (0x000220e3) vkb2_area_bottom_pane_g1

0x7641,	// (0x00022107) vkb2_area_bottom_pane_g2_ParamLimits

0x7641,	// (0x00022107) vkb2_area_bottom_pane_g2

0x766f,	// (0x00022135) vkb2_area_bottom_pane_g3_ParamLimits

0x766f,	// (0x00022135) vkb2_area_bottom_pane_g3

0x0002,

0xfd8d,	// (0x0002a853) vkb2_area_bottom_pane_g_ParamLimits

0xfd8d,	// (0x0002a853) vkb2_area_bottom_pane_g

0x76d0,	// (0x00022196) vkb2_top_cell_left_pane_ParamLimits

0x76d0,	// (0x00022196) vkb2_top_cell_left_pane

0xdeba,	// (0x00028980) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x00028980) vkb2_top_entry_pane_g1

0xdec8,	// (0x0002898e) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x0002898e) vkb2_top_entry_pane_t1

0xdefa,	// (0x000289c0) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x000289c0) vkb2_top_entry_pane_t2

0xdf2c,	// (0x000289f2) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x000289f2) vkb2_top_entry_pane_t3

0x0002,

0xfd94,	// (0x0002a85a) vkb2_top_entry_pane_t_ParamLimits

0xfd94,	// (0x0002a85a) vkb2_top_entry_pane_t

0x771d,	// (0x000221e3) vkb2_top_grid_right_pane_g1_ParamLimits

0x771d,	// (0x000221e3) vkb2_top_grid_right_pane_g1

0x7733,	// (0x000221f9) vkb2_top_grid_right_pane_g2_ParamLimits

0x7733,	// (0x000221f9) vkb2_top_grid_right_pane_g2

0x774b,	// (0x00022211) vkb2_top_grid_right_pane_g3_ParamLimits

0x774b,	// (0x00022211) vkb2_top_grid_right_pane_g3

0x7763,	// (0x00022229) vkb2_top_grid_right_pane_g4_ParamLimits

0x7763,	// (0x00022229) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9b,	// (0x0002a861) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9b,	// (0x0002a861) vkb2_top_grid_right_pane_g

0x7779,	// (0x0002223f) vkb2_top_cell_left_pane_g1

0x7790,	// (0x00022256) vkb2_cell_keypad_pane_g1_ParamLimits

0x7790,	// (0x00022256) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x00028a16) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x00028a16) vkb2_cell_keypad_pane_t1

0x779e,	// (0x00022264) vkb2_cell_bottom_grid_pane_ParamLimits

0x779e,	// (0x00022264) vkb2_cell_bottom_grid_pane

0x77d7,	// (0x0002229d) vkb2_cell_bottom_grid_pane_g1

0xdb09,	// (0x000285cf) aid_call2_pane_cp02

0xdb11,	// (0x000285d7) aid_call_pane_cp02

0xdb19,	// (0x000285df) clock_digital_number_pane_cp10

0xdb21,	// (0x000285e7) clock_digital_number_pane_cp11

0xdb29,	// (0x000285ef) clock_digital_number_pane_cp12

0xdb31,	// (0x000285f7) clock_digital_number_pane_cp13

0xdb39,	// (0x000285ff) clock_digital_separator_pane_cp10

0x8aea,	// (0x000235b0) popup_clock_digital_analogue_window_cp2_g1

0x8aea,	// (0x000235b0) popup_clock_digital_analogue_window_cp2_g2

0xdb41,	// (0x00028607) popup_clock_digital_analogue_window_cp2_g3

0x8aea,	// (0x000235b0) popup_clock_digital_analogue_window_cp2_g4

0xdb41,	// (0x00028607) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd50,	// (0x0002a816) popup_clock_digital_analogue_window_cp2_g

0xdb49,	// (0x0002860f) popup_clock_digital_analogue_window_cp2_t1

0xdb57,	// (0x0002861d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5b,	// (0x0002a821) popup_clock_digital_analogue_window_cp2_t

0xc067,	// (0x00026b2d) clock_digital_number_pane_cp10_g1

0xc067,	// (0x00026b2d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0002a609) clock_digital_number_pane_cp10_g

0xc067,	// (0x00026b2d) clock_digital_separator_pane_cp10_g1

0xc067,	// (0x00026b2d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0002a609) clock_digital_separator_pane_cp10_g

0xd985,	// (0x0002844b) uniindi_top_pane_g3

0xd996,	// (0x0002845c) uniindi_top_pane_g4

0x75b1,	// (0x00022077) vkb2_row_keypad_pane_ParamLimits

0x75b1,	// (0x00022077) vkb2_row_keypad_pane

0x77f3,	// (0x000222b9) vkb2_cell_t_keypad_pane_ParamLimits

0x77f3,	// (0x000222b9) vkb2_cell_t_keypad_pane

0x7803,	// (0x000222c9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7803,	// (0x000222c9) vkb2_cell_t_keypad_pane_cp08

0x7816,	// (0x000222dc) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7816,	// (0x000222dc) vkb2_cell_t_keypad_pane_cp09

0x782a,	// (0x000222f0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x782a,	// (0x000222f0) vkb2_cell_t_keypad_pane_cp01

0x783b,	// (0x00022301) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x783b,	// (0x00022301) vkb2_cell_t_keypad_pane_cp02

0x784c,	// (0x00022312) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x784c,	// (0x00022312) vkb2_cell_t_keypad_pane_cp03

0x785d,	// (0x00022323) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x785d,	// (0x00022323) vkb2_cell_t_keypad_pane_cp04

0x786e,	// (0x00022334) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x786e,	// (0x00022334) vkb2_cell_t_keypad_pane_cp05

0x787f,	// (0x00022345) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x787f,	// (0x00022345) vkb2_cell_t_keypad_pane_cp06

0x7890,	// (0x00022356) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7890,	// (0x00022356) vkb2_cell_t_keypad_pane_cp07

0x78a1,	// (0x00022367) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x78a1,	// (0x00022367) vkb2_cell_t_keypad_pane_cp10

0xc2e5,	// (0x00026dab) vkb2_cell_t_keypad_pane_g1

0xdf67,	// (0x00028a2d) vkb2_cell_t_keypad_pane_t1

0x7b26,	// (0x000225ec) popup_grid_graphic2_window

0xdf79,	// (0x00028a3f) aid_size_cell_graphic2_ParamLimits

0xdf79,	// (0x00028a3f) aid_size_cell_graphic2

0xdfb1,	// (0x00028a77) bg_popup_window_pane_cp21_ParamLimits

0xdfb1,	// (0x00028a77) bg_popup_window_pane_cp21

0xdfbf,	// (0x00028a85) graphic2_pages_pane_ParamLimits

0xdfbf,	// (0x00028a85) graphic2_pages_pane

0xe005,	// (0x00028acb) grid_graphic2_control_pane_ParamLimits

0xe005,	// (0x00028acb) grid_graphic2_control_pane

0xe043,	// (0x00028b09) grid_graphic2_pane_ParamLimits

0xe043,	// (0x00028b09) grid_graphic2_pane

0xe0b7,	// (0x00028b7d) cell_graphic2_pane

0x7b26,	// (0x000225ec) main_comp_mode_pane

0xd203,	// (0x00027cc9) list_ai3_gene_pane_ParamLimits

0xd5cd,	// (0x00028093) bg_popup_window_pane_cp19_ParamLimits

0xd5d9,	// (0x0002809f) bg_touch_area_indi_pane_ParamLimits

0xd5d9,	// (0x0002809f) bg_touch_area_indi_pane

0xd5ef,	// (0x000280b5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5ef,	// (0x000280b5) bg_touch_area_indi_pane_cp01

0xd605,	// (0x000280cb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd605,	// (0x000280cb) bg_touch_area_indi_pane_cp02

0xd61d,	// (0x000280e3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd61d,	// (0x000280e3) bg_touch_area_indi_pane_cp03

0xd637,	// (0x000280fd) popup_slider_window_g1_ParamLimits

0xd653,	// (0x00028119) popup_slider_window_g2_ParamLimits

0xd66f,	// (0x00028135) popup_slider_window_g3_ParamLimits

0xfce5,	// (0x0002a7ab) popup_slider_window_g_ParamLimits

0xd6cb,	// (0x00028191) popup_slider_window_t1_ParamLimits

0xd73f,	// (0x00028205) small_volume_slider_vertical_pane_ParamLimits

0xe0b7,	// (0x00028b7d) cell_graphic2_pane_ParamLimits

0xe105,	// (0x00028bcb) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x00028bcb) bg_button_pane_cp10

0xe118,	// (0x00028bde) bg_button_pane_cp11_ParamLimits

0xe118,	// (0x00028bde) bg_button_pane_cp11

0xe12b,	// (0x00028bf1) graphic2_pages_pane_g1_ParamLimits

0xe12b,	// (0x00028bf1) graphic2_pages_pane_g1

0xe146,	// (0x00028c0c) graphic2_pages_pane_g2_ParamLimits

0xe146,	// (0x00028c0c) graphic2_pages_pane_g2

0x0001,

0xfda9,	// (0x0002a86f) graphic2_pages_pane_g_ParamLimits

0xfda9,	// (0x0002a86f) graphic2_pages_pane_g

0xe15e,	// (0x00028c24) graphic2_pages_pane_t1_ParamLimits

0xe15e,	// (0x00028c24) graphic2_pages_pane_t1

0xe176,	// (0x00028c3c) cell_graphic2_control_pane_ParamLimits

0xe176,	// (0x00028c3c) cell_graphic2_control_pane

0xe197,	// (0x00028c5d) cell_graphic2_pane_g1_ParamLimits

0xe197,	// (0x00028c5d) cell_graphic2_pane_g1

0xe1a4,	// (0x00028c6a) cell_graphic2_pane_g2_ParamLimits

0xe1a4,	// (0x00028c6a) cell_graphic2_pane_g2

0xe1b1,	// (0x00028c77) cell_graphic2_pane_g3_ParamLimits

0xe1b1,	// (0x00028c77) cell_graphic2_pane_g3

0xe1be,	// (0x00028c84) cell_graphic2_pane_g4_ParamLimits

0xe1be,	// (0x00028c84) cell_graphic2_pane_g4

0xe1cb,	// (0x00028c91) cell_graphic2_pane_g5_ParamLimits

0xe1cb,	// (0x00028c91) cell_graphic2_pane_g5

0x0004,

0xfdae,	// (0x0002a874) cell_graphic2_pane_g_ParamLimits

0xfdae,	// (0x0002a874) cell_graphic2_pane_g

0xe1e6,	// (0x00028cac) cell_graphic2_pane_t1_ParamLimits

0xe1e6,	// (0x00028cac) cell_graphic2_pane_t1

0x9a47,	// (0x0002450d) grid_highlight_pane_cp11_ParamLimits

0x9a47,	// (0x0002450d) grid_highlight_pane_cp11

0x7ea3,	// (0x00022969) bg_button_pane_cp05

0xe20f,	// (0x00028cd5) cell_graphic2_control_pane_g1

0xc067,	// (0x00026b2d) bg_touch_area_indi_pane_g1

0xe237,	// (0x00028cfd) aid_cmod_rocker_key_size

0xe241,	// (0x00028d07) aid_cmode_itu_key_size

0xe24b,	// (0x00028d11) main_cmode_video_pane

0xe255,	// (0x00028d1b) main_comp_mode_itu_pane

0xe261,	// (0x00028d27) main_comp_mode_rocker_pane

0xe26d,	// (0x00028d33) cell_cmode_rocker_pane_ParamLimits

0xe26d,	// (0x00028d33) cell_cmode_rocker_pane

0xe27f,	// (0x00028d45) cell_cmode_itu_pane_ParamLimits

0xe27f,	// (0x00028d45) cell_cmode_itu_pane

0x8486,	// (0x00022f4c) bg_button_pane_cp06_ParamLimits

0x8486,	// (0x00022f4c) bg_button_pane_cp06

0xc2e5,	// (0x00026dab) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) cell_cmode_rocker_pane_g1

0xd7e3,	// (0x000282a9) cell_cmode_rocker_pane_g2_ParamLimits

0xd7e3,	// (0x000282a9) cell_cmode_rocker_pane_g2

0x0001,

0xfdbe,	// (0x0002a884) cell_cmode_rocker_pane_g_ParamLimits

0xfdbe,	// (0x0002a884) cell_cmode_rocker_pane_g

0x7b26,	// (0x000225ec) bg_button_pane_cp07

0xe294,	// (0x00028d5a) cell_cmode_itu_pane_g1

0xe29d,	// (0x00028d63) cell_cmode_itu_pane_t1

0xe2ab,	// (0x00028d71) cell_cmode_itu_pane_t2

0x0001,

0xfdc3,	// (0x0002a889) cell_cmode_itu_pane_t

0xda08,	// (0x000284ce) aid_touch_ctrl_left

0xda10,	// (0x000284d6) aid_touch_ctrl_right

0x7b26,	// (0x000225ec) compa_mode_pane

0xe2b9,	// (0x00028d7f) aid_cmod_rocker_key_size_cp

0xe2c3,	// (0x00028d89) aid_cmode_itu_key_size_cp

0xe2cd,	// (0x00028d93) compa_mode_pane_g1

0xe2d5,	// (0x00028d9b) compa_mode_pane_g2

0xe2dd,	// (0x00028da3) compa_mode_pane_g3

0x0002,

0xfdc8,	// (0x0002a88e) compa_mode_pane_g

0xe2e5,	// (0x00028dab) main_comp_mode_itu_pane_cp

0xe2ed,	// (0x00028db3) main_comp_mode_rocker_pane_cp

0xe2f5,	// (0x00028dbb) cell_cmode_itu_pane_cp_ParamLimits

0xe2f5,	// (0x00028dbb) cell_cmode_itu_pane_cp

0xe30a,	// (0x00028dd0) cell_cmode_rocker_pane_cp_ParamLimits

0xe30a,	// (0x00028dd0) cell_cmode_rocker_pane_cp

0x8486,	// (0x00022f4c) bg_button_pane_cp06_cp_ParamLimits

0x8486,	// (0x00022f4c) bg_button_pane_cp06_cp

0xc2e5,	// (0x00026dab) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e5,	// (0x00026dab) cell_cmode_rocker_pane_g1_cp

0xc067,	// (0x00026b2d) cell_cmode_rocker_pane_g2_cp

0x7b26,	// (0x000225ec) bg_button_pane_cp07_cp

0xaf6f,	// (0x00025a35) cell_cmode_itu_pane_g1_cp

0xe31c,	// (0x00028de2) cell_cmode_itu_pane_t1_cp

0xe31c,	// (0x00028de2) cell_cmode_itu_pane_t2_cp

0xaf5c,	// (0x00025a22) settings_code_pane_cp2

0x7c1a,	// (0x000226e0) bg_popup_window_pane_cp3_ParamLimits

0x807d,	// (0x00022b43) heading_pane_cp3_ParamLimits

0x8089,	// (0x00022b4f) listscroll_popup_graphic_pane_ParamLimits

0x6ec9,	// (0x0002198f) fep_hwr_aid_pane_ParamLimits

0x7293,	// (0x00021d59) aid_touch_sctrl_top_ParamLimits

0x72a0,	// (0x00021d66) sctrl_sk_top_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) sctrl_sk_top_pane_g2_ParamLimits

0xfcfe,	// (0x0002a7c4) sctrl_sk_top_pane_g_ParamLimits

0x72ad,	// (0x00021d73) sctrl_sk_top_pane_t1_ParamLimits

0x7293,	// (0x00021d59) aid_touch_sctrl_bottom_ParamLimits

0x72ad,	// (0x00021d73) sctrl_sk_bottom_pane_t1_ParamLimits

0xd951,	// (0x00028417) aid_area_touch_clock

0x7488,	// (0x00021f4e) aid_vkb2_area_top_pane_cell_ParamLimits

0x7488,	// (0x00021f4e) aid_vkb2_area_top_pane_cell

0x75d3,	// (0x00022099) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x75d3,	// (0x00022099) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x00028978) popup_char_count_window

0xe32a,	// (0x00028df0) popup_char_count_window_g1

0xe333,	// (0x00028df9) popup_char_count_window_g2

0xe33c,	// (0x00028e02) popup_char_count_window_g3

0x0002,

0xfdcf,	// (0x0002a895) popup_char_count_window_g

0xe345,	// (0x00028e0b) popup_char_count_window_t1

0x734e,	// (0x00021e14) popup_fep_char_preview_window_ParamLimits

0x734e,	// (0x00021e14) popup_fep_char_preview_window

0x74a6,	// (0x00021f6c) vkb2_top_candi_pane_ParamLimits

0x74a6,	// (0x00021f6c) vkb2_top_candi_pane

0xe353,	// (0x00028e19) cell_vkb2_top_candi_pane_ParamLimits

0xe353,	// (0x00028e19) cell_vkb2_top_candi_pane

0xa058,	// (0x00024b1e) bg_popup_fep_char_preview_window_ParamLimits

0xa058,	// (0x00024b1e) bg_popup_fep_char_preview_window

0x78b6,	// (0x0002237c) popup_fep_char_preview_window_t1_ParamLimits

0x78b6,	// (0x0002237c) popup_fep_char_preview_window_t1

0xe3a0,	// (0x00028e66) bg_popup_fep_char_preview_window_g1

0xe3a8,	// (0x00028e6e) bg_popup_fep_char_preview_window_g2

0xe3b0,	// (0x00028e76) bg_popup_fep_char_preview_window_g3

0xe3b8,	// (0x00028e7e) bg_popup_fep_char_preview_window_g4

0xe3c0,	// (0x00028e86) bg_popup_fep_char_preview_window_g5

0x78f0,	// (0x000223b6) bg_popup_fep_char_preview_window_g6

0xe3c8,	// (0x00028e8e) bg_popup_fep_char_preview_window_g7

0xe3d0,	// (0x00028e96) bg_popup_fep_char_preview_window_g8

0xe3d8,	// (0x00028e9e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd6,	// (0x0002a89c) bg_popup_fep_char_preview_window_g

0xc2e5,	// (0x00026dab) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) cell_vkb2_top_candi_pane_g1

0xc5fc,	// (0x000270c2) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5fc,	// (0x000270c2) cell_vkb2_top_candi_pane_g2

0xc61d,	// (0x000270e3) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc61d,	// (0x000270e3) cell_vkb2_top_candi_pane_g3

0x78f8,	// (0x000223be) cell_vkb2_top_candi_pane_g4_ParamLimits

0x78f8,	// (0x000223be) cell_vkb2_top_candi_pane_g4

0xe3e0,	// (0x00028ea6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3e0,	// (0x00028ea6) cell_vkb2_top_candi_pane_g5

0xd7e3,	// (0x000282a9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7e3,	// (0x000282a9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde9,	// (0x0002a8af) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde9,	// (0x0002a8af) cell_vkb2_top_candi_pane_g

0x7919,	// (0x000223df) cell_vkb2_top_candi_pane_t1

0x6d6b,	// (0x00021831) aid_size_touch_slider_mark_ParamLimits

0x6d6b,	// (0x00021831) aid_size_touch_slider_mark

0xdff5,	// (0x00028abb) grid_graphic2_catg_pane_ParamLimits

0xdff5,	// (0x00028abb) grid_graphic2_catg_pane

0xe093,	// (0x00028b59) popup_grid_graphic2_window_t1_ParamLimits

0xe093,	// (0x00028b59) popup_grid_graphic2_window_t1

0xe0a5,	// (0x00028b6b) popup_grid_graphic2_window_t2_ParamLimits

0xe0a5,	// (0x00028b6b) popup_grid_graphic2_window_t2

0x0001,

0xfda4,	// (0x0002a86a) popup_grid_graphic2_window_t_ParamLimits

0xfda4,	// (0x0002a86a) popup_grid_graphic2_window_t

0x7ea3,	// (0x00022969) bg_button_pane_cp05_ParamLimits

0xe20f,	// (0x00028cd5) cell_graphic2_control_pane_g1_ParamLimits

0xe401,	// (0x00028ec7) cell_graphic2_catg_pane_ParamLimits

0xe401,	// (0x00028ec7) cell_graphic2_catg_pane

0x7b26,	// (0x000225ec) bg_button_pane_cp12

0xe413,	// (0x00028ed9) cell_graphic2_catg_pane_g1

0xd91d,	// (0x000283e3) cell_tb_ext_pane_t1_ParamLimits

0x76f0,	// (0x000221b6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x76f0,	// (0x000221b6) vkb2_top_cell_right_narrow_pane

0x7708,	// (0x000221ce) vkb2_top_cell_right_wide_pane_ParamLimits

0x7708,	// (0x000221ce) vkb2_top_cell_right_wide_pane

0x6ebb,	// (0x00021981) bg_vkb2_func_pane_ParamLimits

0x6ebb,	// (0x00021981) bg_vkb2_func_pane

0x7779,	// (0x0002223f) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ebb,	// (0x00021981) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ebb,	// (0x00021981) bg_vkb2_fuc_pane_cp03

0x77d7,	// (0x0002229d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x994b,	// (0x00024411) bg_vkb2_func_pane_g1

0x9953,	// (0x00024419) bg_vkb2_func_pane_g2

0x9963,	// (0x00024429) bg_vkb2_func_pane_g3

0x995b,	// (0x00024421) bg_vkb2_func_pane_g4

0x996b,	// (0x00024431) bg_vkb2_func_pane_g5

0x9973,	// (0x00024439) bg_vkb2_func_pane_g6

0x997b,	// (0x00024441) bg_vkb2_func_pane_g7

0x9983,	// (0x00024449) bg_vkb2_func_pane_g8

0x9943,	// (0x00024409) bg_vkb2_func_pane_g9

0x0008,

0xfdf6,	// (0x0002a8bc) bg_vkb2_func_pane_g

0x6ebb,	// (0x00021981) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ebb,	// (0x00021981) bg_vkb2_fuc_pane_cp01

0x7779,	// (0x0002223f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7779,	// (0x0002223f) vkb2_top_cell_right_wide_pane_g1

0x6ebb,	// (0x00021981) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ebb,	// (0x00021981) bg_vkb2_fuc_pane_cp02

0x77d7,	// (0x0002229d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x77d7,	// (0x0002229d) vkb2_top_cell_right_narrow_pane_g1

0xd551,	// (0x00028017) aid_touch_area_decrease_ParamLimits

0xd551,	// (0x00028017) aid_touch_area_decrease

0xd56f,	// (0x00028035) aid_touch_area_increase_ParamLimits

0xd56f,	// (0x00028035) aid_touch_area_increase

0xd57b,	// (0x00028041) aid_touch_area_mute_ParamLimits

0xd57b,	// (0x00028041) aid_touch_area_mute

0xd59f,	// (0x00028065) aid_touch_area_slider_ParamLimits

0xd59f,	// (0x00028065) aid_touch_area_slider

0xd68b,	// (0x00028151) popup_slider_window_g4_ParamLimits

0xd68b,	// (0x00028151) popup_slider_window_g4

0xd697,	// (0x0002815d) popup_slider_window_g5_ParamLimits

0xd697,	// (0x0002815d) popup_slider_window_g5

0xd6b9,	// (0x0002817f) popup_slider_window_g6_ParamLimits

0xd6b9,	// (0x0002817f) popup_slider_window_g6

0xd6f9,	// (0x000281bf) popup_slider_window_t2_ParamLimits

0xd6f9,	// (0x000281bf) popup_slider_window_t2

0x0001,

0xfcf2,	// (0x0002a7b8) popup_slider_window_t_ParamLimits

0xfcf2,	// (0x0002a7b8) popup_slider_window_t

0xd711,	// (0x000281d7) slider_pane_ParamLimits

0xd711,	// (0x000281d7) slider_pane

0xe41c,	// (0x00028ee2) slider_pane_g1_ParamLimits

0xe41c,	// (0x00028ee2) slider_pane_g1

0xe430,	// (0x00028ef6) slider_pane_g2_ParamLimits

0xe430,	// (0x00028ef6) slider_pane_g2

0xe446,	// (0x00028f0c) slider_pane_g3_ParamLimits

0xe446,	// (0x00028f0c) slider_pane_g3

0x0003,

0xfe09,	// (0x0002a8cf) slider_pane_g_ParamLimits

0xfe09,	// (0x0002a8cf) slider_pane_g

0x69aa,	// (0x00021470) popup_tb_float_extension_window_ParamLimits

0x69aa,	// (0x00021470) popup_tb_float_extension_window

0xe472,	// (0x00028f38) aid_size_cell_tb_float_ext

0x7b26,	// (0x000225ec) bg_popup_sub_window_cp28

0xe47e,	// (0x00028f44) grid_tb_float_ext_pane

0xe488,	// (0x00028f4e) cell_tb_float_ext_pane_ParamLimits

0xe488,	// (0x00028f4e) cell_tb_float_ext_pane

0xe4a2,	// (0x00028f68) cell_tb_float_ext_pane_g1

0xe4ab,	// (0x00028f71) grid_highlight_pane_cp12

0x6ffc,	// (0x00021ac2) cell_last_hwr_side_pane_ParamLimits

0x6ffc,	// (0x00021ac2) cell_last_hwr_side_pane

0xc067,	// (0x00026b2d) cell_last_hwr_side_pane_g1

0xe4b4,	// (0x00028f7a) cell_last_hwr_side_pane_g2

0x0001,

0xfe12,	// (0x0002a8d8) cell_last_hwr_side_pane_g

0x769f,	// (0x00022165) vkb2_area_bottom_space_btn_pane_ParamLimits

0x769f,	// (0x00022165) vkb2_area_bottom_space_btn_pane

0xc2e5,	// (0x00026dab) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf67,	// (0x00028a2d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7919,	// (0x000223df) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7938,	// (0x000223fe) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7938,	// (0x000223fe) vkb2_area_bottom_space_btn_pane_g1

0x7972,	// (0x00022438) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7972,	// (0x00022438) vkb2_area_bottom_space_btn_pane_g2

0x79a8,	// (0x0002246e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x79a8,	// (0x0002246e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe17,	// (0x0002a8dd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe17,	// (0x0002a8dd) vkb2_area_bottom_space_btn_pane_g

0x6f70,	// (0x00021a36) cel_fep_hwr_func_pane_ParamLimits

0x6f70,	// (0x00021a36) cel_fep_hwr_func_pane

0x6fac,	// (0x00021a72) cell_hwr_side_button_pane_ParamLimits

0x6fac,	// (0x00021a72) cell_hwr_side_button_pane

0xd951,	// (0x00028417) aid_area_touch_clock_ParamLimits

0x7ea3,	// (0x00022969) bg_uniindi_top_pane_ParamLimits

0xd963,	// (0x00028429) uniindi_top_pane_g1_ParamLimits

0xd979,	// (0x0002843f) uniindi_top_pane_g2_ParamLimits

0xd985,	// (0x0002844b) uniindi_top_pane_g3_ParamLimits

0xd996,	// (0x0002845c) uniindi_top_pane_g4_ParamLimits

0xfd2a,	// (0x0002a7f0) uniindi_top_pane_g_ParamLimits

0xd9a3,	// (0x00028469) uniindi_top_pane_t1_ParamLimits

0x7ea3,	// (0x00022969) bg_vkb2_func_pane_cp01_ParamLimits

0x7ea3,	// (0x00022969) bg_vkb2_func_pane_cp01

0xe4bd,	// (0x00028f83) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4bd,	// (0x00028f83) cel_fep_hwr_func_pane_g1

0x7ea3,	// (0x00022969) bg_vkb2_func_pane_cp02_ParamLimits

0x7ea3,	// (0x00022969) bg_vkb2_func_pane_cp02

0xe4bd,	// (0x00028f83) cell_hwr_side_button_pane_g1_ParamLimits

0xe4bd,	// (0x00028f83) cell_hwr_side_button_pane_g1

0x97c7,	// (0x0002428d) status_pane_g4_ParamLimits

0x97c7,	// (0x0002428d) status_pane_g4

0x97e1,	// (0x000242a7) status_pane_t1

0xbda1,	// (0x00026867) form2_midp_gauge_slider_cont_pane

0xbda9,	// (0x0002686f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbdbb,	// (0x00026881) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdcd,	// (0x00026893) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0002a5bc) form2_midp_gauge_slider_pane_t_ParamLimits

0xbddf,	// (0x000268a5) form2_midp_slider_pane_ParamLimits

0x730e,	// (0x00021dd4) aid_size_cell_func_vkb2_ParamLimits

0x730e,	// (0x00021dd4) aid_size_cell_func_vkb2

0xe45e,	// (0x00028f24) slider_pane_g4_ParamLimits

0xe45e,	// (0x00028f24) slider_pane_g4

0x79f2,	// (0x000224b8) form2_midp_gauge_slider_pane_t2_cp01

0x7a00,	// (0x000224c6) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a00,	// (0x000224c6) form2_midp_gauge_slider_pane_t3_cp01

0x7a1d,	// (0x000224e3) form2_midp_slider_pane_cp01

0x7b26,	// (0x000225ec) navi_smil_pane

0xe4f6,	// (0x00028fbc) navi_smil_pane_g1

0xe4fe,	// (0x00028fc4) navi_smil_pane_t1

0xe4cb,	// (0x00028f91) form2_midp_slider_pane_g1

0xe4d4,	// (0x00028f9a) form2_midp_slider_pane_g2

0xe4dc,	// (0x00028fa2) form2_midp_slider_pane_g3

0xe4cb,	// (0x00028f91) form2_midp_slider_pane_g4

0xe4e4,	// (0x00028faa) form2_midp_slider_pane_g5

0x0004,

0xfe20,	// (0x0002a8e6) form2_midp_slider_pane_g

0x79e2,	// (0x000224a8) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x79e2,	// (0x000224a8) vkb2_area_bottom_space_btn_pane_g4

0x9604,	// (0x000240ca) lc0_navi_pane_ParamLimits

0x9604,	// (0x000240ca) lc0_navi_pane

0x967a,	// (0x00024140) lc0_stat_indi_pane_ParamLimits

0x967a,	// (0x00024140) lc0_stat_indi_pane

0x9691,	// (0x00024157) ls0_title_pane_ParamLimits

0x9691,	// (0x00024157) ls0_title_pane

0x8486,	// (0x00022f4c) bg_popup_sub_pane_cp14_ParamLimits

0xd938,	// (0x000283fe) list_uniindi_pane_ParamLimits

0xd944,	// (0x0002840a) uniindi_top_pane_ParamLimits

0xd9e0,	// (0x000284a6) list_single_uniindi_pane_g1_ParamLimits

0xd9f3,	// (0x000284b9) list_single_uniindi_pane_t1_ParamLimits

0x7a26,	// (0x000224ec) lc0_stat_clock_pane_ParamLimits

0x7a26,	// (0x000224ec) lc0_stat_clock_pane

0xe50c,	// (0x00028fd2) lc0_stat_indi_pane_g1_ParamLimits

0xe50c,	// (0x00028fd2) lc0_stat_indi_pane_g1

0xe519,	// (0x00028fdf) lc0_stat_indi_pane_g2_ParamLimits

0xe519,	// (0x00028fdf) lc0_stat_indi_pane_g2

0x0001,

0xfe2b,	// (0x0002a8f1) lc0_stat_indi_pane_g_ParamLimits

0xfe2b,	// (0x0002a8f1) lc0_stat_indi_pane_g

0x7a33,	// (0x000224f9) lc0_uni_indicator_pane_ParamLimits

0x7a33,	// (0x000224f9) lc0_uni_indicator_pane

0xe526,	// (0x00028fec) ls0_title_pane_g1_ParamLimits

0xe526,	// (0x00028fec) ls0_title_pane_g1

0xe53a,	// (0x00029000) ls0_title_pane_t1_ParamLimits

0xe53a,	// (0x00029000) ls0_title_pane_t1

0x7a40,	// (0x00022506) lc0_uni_indicator_pane_g1_ParamLimits

0x7a40,	// (0x00022506) lc0_uni_indicator_pane_g1

0xe570,	// (0x00029036) lc0_stat_clock_pane_t1

0x7b26,	// (0x000225ec) main_ai5_pane

0xe57e,	// (0x00029044) ai5_sk_pane_ParamLimits

0xe57e,	// (0x00029044) ai5_sk_pane

0xe58b,	// (0x00029051) cell_ai5_widget_pane_ParamLimits

0xe58b,	// (0x00029051) cell_ai5_widget_pane

0xe641,	// (0x00029107) aid_size_cell_widget_grid

0xe657,	// (0x0002911d) bg_ai5_widget_pane_ParamLimits

0xe657,	// (0x0002911d) bg_ai5_widget_pane

0xe6c1,	// (0x00029187) cell_ai5_widget_pane_g2

0xe6d1,	// (0x00029197) cell_ai5_widget_pane_g3

0xe6f0,	// (0x000291b6) cell_ai5_widget_pane_g4

0xe6fc,	// (0x000291c2) cell_ai5_widget_pane_g5

0xe708,	// (0x000291ce) cell_ai5_widget_pane_g6

0xe714,	// (0x000291da) cell_ai5_widget_pane_g7

0xe75c,	// (0x00029222) cell_ai5_widget_pane_t1_ParamLimits

0xe75c,	// (0x00029222) cell_ai5_widget_pane_t1

0xe779,	// (0x0002923f) cell_ai5_widget_pane_t2_ParamLimits

0xe779,	// (0x0002923f) cell_ai5_widget_pane_t2

0xe791,	// (0x00029257) cell_ai5_widget_pane_t3_ParamLimits

0xe791,	// (0x00029257) cell_ai5_widget_pane_t3

0xe7a9,	// (0x0002926f) cell_ai5_widget_pane_t4_ParamLimits

0xe7a9,	// (0x0002926f) cell_ai5_widget_pane_t4

0xe7c3,	// (0x00029289) cell_ai5_widget_pane_t5_ParamLimits

0xe7c3,	// (0x00029289) cell_ai5_widget_pane_t5

0xe7e2,	// (0x000292a8) cell_ai5_widget_pane_t6_ParamLimits

0xe7e2,	// (0x000292a8) cell_ai5_widget_pane_t6

0xe7f4,	// (0x000292ba) cell_ai5_widget_pane_t7_ParamLimits

0xe7f4,	// (0x000292ba) cell_ai5_widget_pane_t7

0xe80d,	// (0x000292d3) cell_ai5_widget_pane_t8_ParamLimits

0xe80d,	// (0x000292d3) cell_ai5_widget_pane_t8

0x0009,

0xfe45,	// (0x0002a90b) cell_ai5_widget_pane_t_ParamLimits

0xfe45,	// (0x0002a90b) cell_ai5_widget_pane_t

0xe859,	// (0x0002931f) grid_ai5_widget_pane

0x8486,	// (0x00022f4c) highlight_cell_ai5_widget_pane_ParamLimits

0x8486,	// (0x00022f4c) highlight_cell_ai5_widget_pane

0xe871,	// (0x00029337) ai5_sk_left_pane

0xe87b,	// (0x00029341) ai5_sk_middle_pane

0xe885,	// (0x0002934b) ai5_sk_right_pane

0xe88f,	// (0x00029355) bg_ai5_widget_pane_g1_ParamLimits

0xe88f,	// (0x00029355) bg_ai5_widget_pane_g1

0xe89b,	// (0x00029361) bg_ai5_widget_pane_g2_ParamLimits

0xe89b,	// (0x00029361) bg_ai5_widget_pane_g2

0xe8a7,	// (0x0002936d) bg_ai5_widget_pane_g3_ParamLimits

0xe8a7,	// (0x0002936d) bg_ai5_widget_pane_g3

0xe8b3,	// (0x00029379) bg_ai5_widget_pane_g4_ParamLimits

0xe8b3,	// (0x00029379) bg_ai5_widget_pane_g4

0xe8bf,	// (0x00029385) bg_ai5_widget_pane_g5_ParamLimits

0xe8bf,	// (0x00029385) bg_ai5_widget_pane_g5

0xe8cb,	// (0x00029391) bg_ai5_widget_pane_g6_ParamLimits

0xe8cb,	// (0x00029391) bg_ai5_widget_pane_g6

0xe8d7,	// (0x0002939d) bg_ai5_widget_pane_g7_ParamLimits

0xe8d7,	// (0x0002939d) bg_ai5_widget_pane_g7

0xe8e3,	// (0x000293a9) bg_ai5_widget_pane_g8_ParamLimits

0xe8e3,	// (0x000293a9) bg_ai5_widget_pane_g8

0xe8ef,	// (0x000293b5) bg_ai5_widget_pane_g9_ParamLimits

0xe8ef,	// (0x000293b5) bg_ai5_widget_pane_g9

0x0008,

0xfe5a,	// (0x0002a920) bg_ai5_widget_pane_g_ParamLimits

0xfe5a,	// (0x0002a920) bg_ai5_widget_pane_g

0xe922,	// (0x000293e8) cell_shortcut_ai5_widget_pane_ParamLimits

0xe922,	// (0x000293e8) cell_shortcut_ai5_widget_pane

0x910e,	// (0x00023bd4) bg_cell_shortcut_ai5_widget_pane

0xe933,	// (0x000293f9) cell_grid_ai5_widget_pane_g1

0xe93c,	// (0x00029402) highlight_cell_shortcut_ai5_widget_pane

0x9953,	// (0x00024419) ai5_sk_left_pane_g1

0xe944,	// (0x0002940a) ai5_sk_left_pane_g2

0xe94c,	// (0x00029412) ai5_sk_left_pane_g3

0xe954,	// (0x0002941a) ai5_sk_left_pane_g4

0x0003,

0xfe6d,	// (0x0002a933) ai5_sk_left_pane_g

0xe95c,	// (0x00029422) ai5_sk_left_pane_t1

0x994b,	// (0x00024411) ai5_sk_right_pane_g1

0xe96a,	// (0x00029430) ai5_sk_right_pane_g2

0xe972,	// (0x00029438) ai5_sk_right_pane_g3

0xe97a,	// (0x00029440) ai5_sk_right_pane_g4

0x0003,

0xfe76,	// (0x0002a93c) ai5_sk_right_pane_g

0xe982,	// (0x00029448) ai5_sk_right_pane_t1

0x994b,	// (0x00024411) ai5_sk_middle_pane_g1

0x9953,	// (0x00024419) ai5_sk_middle_pane_g2

0x996b,	// (0x00024431) ai5_sk_middle_pane_g3

0xe972,	// (0x00029438) ai5_sk_middle_pane_g4

0xe94c,	// (0x00029412) ai5_sk_middle_pane_g5

0xe990,	// (0x00029456) ai5_sk_middle_pane_g6

0xe998,	// (0x0002945e) ai5_sk_middle_pane_g7

0x0006,

0xfe7f,	// (0x0002a945) ai5_sk_middle_pane_g

0x9494,	// (0x00023f5a) aid_touch_area_size_lc0_ParamLimits

0x9494,	// (0x00023f5a) aid_touch_area_size_lc0

0x70fb,	// (0x00021bc1) cell_hwr_candidate_pane_t1_ParamLimits

0x94b0,	// (0x00023f76) aid_touch_navi_pane

0x9779,	// (0x0002423f) status_dt_navi_pane_ParamLimits

0x9779,	// (0x0002423f) status_dt_navi_pane

0x9786,	// (0x0002424c) status_dt_sta_pane_ParamLimits

0x9786,	// (0x0002424c) status_dt_sta_pane

0xe9a0,	// (0x00029466) dt_sta_controll_pane

0xe9ad,	// (0x00029473) dt_sta_indi_pane

0xe9ba,	// (0x00029480) dt_sta_title_pane

0x7ea3,	// (0x00022969) bg_dt_sta_indi_pane_ParamLimits

0x7ea3,	// (0x00022969) bg_dt_sta_indi_pane

0xe9cb,	// (0x00029491) dt_sta_battery_pane

0xe9d3,	// (0x00029499) dt_sta_indi_pane_g1

0xe9dc,	// (0x000294a2) dt_sta_indi_pane_g2

0xe9e5,	// (0x000294ab) dt_sta_indi_pane_g3

0x0002,

0x002e,	// (0x0001aaf4) dt_sta_indi_pane_g

0xe9ee,	// (0x000294b4) dt_sta_signal_pane

0x8486,	// (0x00022f4c) bg_dt_sta_title_pane_ParamLimits

0x8486,	// (0x00022f4c) bg_dt_sta_title_pane

0xe9f7,	// (0x000294bd) dt_sta_title_pane_g1

0xe9ff,	// (0x000294c5) dt_sta_title_pane_t1_ParamLimits

0xe9ff,	// (0x000294c5) dt_sta_title_pane_t1

0x7b26,	// (0x000225ec) bg_dt_sta_control_pane

0xea14,	// (0x000294da) dt_sta_controll_pane_g1

0xea1d,	// (0x000294e3) bg_dt_sta_title_pane_g1

0xea26,	// (0x000294ec) bg_dt_sta_title_pane_g2

0xea2f,	// (0x000294f5) bg_dt_sta_title_pane_g3

0x0002,

0x0035,	// (0x0001aafb) bg_dt_sta_title_pane_g

0xc067,	// (0x00026b2d) bg_dt_sta_indi_pane_g1

0xea38,	// (0x000294fe) dt_sta_signal_pane_g1

0xea40,	// (0x00029506) dt_sta_signal_pane_g2

0x0001,

0x003c,	// (0x0001ab02) dt_sta_signal_pane_g

0xea48,	// (0x0002950e) dt_sta_battery_pane_g1

0xea51,	// (0x00029517) dt_sta_battery_pane_t1

0xc067,	// (0x00026b2d) bg_dt_sta_control_pane_g1

0x8c18,	// (0x000236de) fep_china_uni_eep_pane

0x8c20,	// (0x000236e6) fep_china_uni_entry_pane_ParamLimits

0x8c30,	// (0x000236f6) popup_fep_china_uni_window_g1_ParamLimits

0x8c40,	// (0x00023706) popup_fep_china_uni_window_g2_ParamLimits

0x8c40,	// (0x00023706) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002a1e9) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002a1e9) popup_fep_china_uni_window_g

0xea60,	// (0x00029526) fep_china_uni_eep_pane_g1

0xea68,	// (0x0002952e) fep_china_uni_eep_pane_t1

0xe4ed,	// (0x00028fb3) aid_touch_area_size_smil_player

0x95fc,	// (0x000240c2) lc0_clock_pane

0x97d5,	// (0x0002429b) status_pane_g5_ParamLimits

0x97d5,	// (0x0002429b) status_pane_g5

0x666f,	// (0x00021135) popup_keymap_window

0x979b,	// (0x00024261) status_icon_pane

0xe6d1,	// (0x00029197) cell_ai5_widget_pane_g3_ParamLimits

0xe6f0,	// (0x000291b6) cell_ai5_widget_pane_g4_ParamLimits

0xe6fc,	// (0x000291c2) cell_ai5_widget_pane_g5_ParamLimits

0xe720,	// (0x000291e6) cell_ai5_widget_pane_g8_ParamLimits

0xe720,	// (0x000291e6) cell_ai5_widget_pane_g8

0xe734,	// (0x000291fa) cell_ai5_widget_pane_g9_ParamLimits

0xe734,	// (0x000291fa) cell_ai5_widget_pane_g9

0xe748,	// (0x0002920e) cell_ai5_widget_pane_g10_ParamLimits

0xe748,	// (0x0002920e) cell_ai5_widget_pane_g10

0xea77,	// (0x0002953d) status_icon_pane_g1

0x7b26,	// (0x000225ec) bg_popup_sub_pane_cp13

0xea7f,	// (0x00029545) popup_keymap_window_t1

0x93d9,	// (0x00023e9f) control_pane_g6_ParamLimits

0x93d9,	// (0x00023e9f) control_pane_g6

0x93e6,	// (0x00023eac) control_pane_g7_ParamLimits

0x93e6,	// (0x00023eac) control_pane_g7

0x93f3,	// (0x00023eb9) control_pane_g8_ParamLimits

0x93f3,	// (0x00023eb9) control_pane_g8

0xe9a0,	// (0x00029466) dt_sta_controll_pane_ParamLimits

0xe9ad,	// (0x00029473) dt_sta_indi_pane_ParamLimits

0xe9ba,	// (0x00029480) dt_sta_title_pane_ParamLimits

0x83be,	// (0x00022e84) aid_size_touch_scroll_bar_cale

0x5d00,	// (0x000207c6) popup_discreet_window_ParamLimits

0x5d00,	// (0x000207c6) popup_discreet_window

0x5d88,	// (0x0002084e) popup_sk_window

0xa058,	// (0x00024b1e) bg_popup_sub_pane_cp28_ParamLimits

0xa058,	// (0x00024b1e) bg_popup_sub_pane_cp28

0xea8d,	// (0x00029553) popup_discreet_window_g1_ParamLimits

0xea8d,	// (0x00029553) popup_discreet_window_g1

0xeaad,	// (0x00029573) popup_discreet_window_t1_ParamLimits

0xeaad,	// (0x00029573) popup_discreet_window_t1

0xeacb,	// (0x00029591) popup_discreet_window_t2_ParamLimits

0xeacb,	// (0x00029591) popup_discreet_window_t2

0x0002,

0x0041,	// (0x0001ab07) popup_discreet_window_t_ParamLimits

0x0041,	// (0x0001ab07) popup_discreet_window_t

0x7a54,	// (0x0002251a) popup_sk_window_g1

0x7a5e,	// (0x00022524) popup_sk_window_g2

0x0001,

0xfe8e,	// (0x0002a954) popup_sk_window_g

0x7a68,	// (0x0002252e) popup_sk_window_t1

0x7a76,	// (0x0002253c) popup_sk_window_t1_copy1

0xe6c1,	// (0x00029187) cell_ai5_widget_pane_g2_ParamLimits

0xe81f,	// (0x000292e5) cell_ai5_widget_pane_t9_ParamLimits

0xe81f,	// (0x000292e5) cell_ai5_widget_pane_t9

0x7b26,	// (0x000225ec) main_fep_fshwr2_pane

0x7a84,	// (0x0002254a) aid_fshwr2_btn_pane

0x7a90,	// (0x00022556) aid_fshwr2_syb_pane

0x7aa1,	// (0x00022567) aid_fshwr2_txt_pane

0x7aad,	// (0x00022573) fshwr2_func_candi_pane

0x7ac2,	// (0x00022588) fshwr2_hwr_syb_pane

0x7ad9,	// (0x0002259f) fshwr2_icf_pane

0x7b26,	// (0x000225ec) fshwr2_icf_bg_pane

0xeb1d,	// (0x000295e3) fshwr2_icf_pane_t1_ParamLimits

0xeb1d,	// (0x000295e3) fshwr2_icf_pane_t1

0xc067,	// (0x00026b2d) fshwr2_func_candi_pane_g1

0xeb34,	// (0x000295fa) fshwr2_func_candi_row_pane_ParamLimits

0xeb34,	// (0x000295fa) fshwr2_func_candi_row_pane

0xeb45,	// (0x0002960b) cell_fshwr2_syb_pane_ParamLimits

0xeb45,	// (0x0002960b) cell_fshwr2_syb_pane

0xc2e5,	// (0x00026dab) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) fshwr2_hwr_syb_pane_g1

0x7b26,	// (0x000225ec) bg_popup_call_pane_cp01

0xeb5f,	// (0x00029625) fshwr2_func_candi_cell_pane_ParamLimits

0xeb5f,	// (0x00029625) fshwr2_func_candi_cell_pane

0xeb90,	// (0x00029656) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb90,	// (0x00029656) fshwr2_func_candi_cell_bg_pane

0xebaa,	// (0x00029670) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaa,	// (0x00029670) fshwr2_func_candi_cell_pane_g1

0xebd2,	// (0x00029698) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd2,	// (0x00029698) fshwr2_func_candi_cell_pane_t1

0x7b26,	// (0x000225ec) bg_button_pane_cp08

0x910e,	// (0x00023bd4) cell_fshwr2_syb_bg_pane

0xebe5,	// (0x000296ab) cell_fshwr2_syb_bg_pane_g1

0xebed,	// (0x000296b3) cell_fshwr2_syb_bg_pane_t1

0x8486,	// (0x00022f4c) main_tmo_pane

0xab67,	// (0x0002562d) uni_indicator_pane_g1_ParamLimits

0xab7c,	// (0x00025642) uni_indicator_pane_g2_ParamLimits

0xab92,	// (0x00025658) uni_indicator_pane_g3_ParamLimits

0xaba8,	// (0x0002566e) uni_indicator_pane_g4_ParamLimits

0xaba8,	// (0x0002566e) uni_indicator_pane_g4

0xabbc,	// (0x00025682) uni_indicator_pane_g5_ParamLimits

0xabbc,	// (0x00025682) uni_indicator_pane_g5

0xabd0,	// (0x00025696) uni_indicator_pane_g6_ParamLimits

0xabd0,	// (0x00025696) uni_indicator_pane_g6

0xf927,	// (0x0002a3ed) uni_indicator_pane_g_ParamLimits

0xd52d,	// (0x00027ff3) popup_tmo_note_window_ParamLimits

0xd52d,	// (0x00027ff3) popup_tmo_note_window

0x8486,	// (0x00022f4c) fshwr2_bg_pane

0xebc3,	// (0x00029689) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc3,	// (0x00029689) fshwr2_func_candi_cell_pane_g2

0x0001,

0x004d,	// (0x0001ab13) fshwr2_func_candi_cell_pane_g_ParamLimits

0x004d,	// (0x0001ab13) fshwr2_func_candi_cell_pane_g

0xc067,	// (0x00026b2d) bg_popup_window_pane_cp01

0xebfc,	// (0x000296c2) bg_popup_window_pane_g1_cp01

0xec05,	// (0x000296cb) bg_popup_window_pane_cp22_ParamLimits

0xec05,	// (0x000296cb) bg_popup_window_pane_cp22

0xec13,	// (0x000296d9) listscroll_tmo_link_pane_ParamLimits

0xec13,	// (0x000296d9) listscroll_tmo_link_pane

0xec53,	// (0x00029719) popup_tmo_note_window_g1_ParamLimits

0xec53,	// (0x00029719) popup_tmo_note_window_g1

0xec60,	// (0x00029726) tmo_note_info_pane_ParamLimits

0xec60,	// (0x00029726) tmo_note_info_pane

0xec7a,	// (0x00029740) list_tmo_note_info_pane_g1_ParamLimits

0xec7a,	// (0x00029740) list_tmo_note_info_pane_g1

0xec91,	// (0x00029757) list_tmo_note_info_pane_g2_ParamLimits

0xec91,	// (0x00029757) list_tmo_note_info_pane_g2

0x0001,

0x0052,	// (0x0001ab18) list_tmo_note_info_pane_g_ParamLimits

0x0052,	// (0x0001ab18) list_tmo_note_info_pane_g

0xecad,	// (0x00029773) list_tmo_note_info_text_pane_ParamLimits

0xecad,	// (0x00029773) list_tmo_note_info_text_pane

0xed2e,	// (0x000297f4) list_tmo_link_pane

0xed3b,	// (0x00029801) scroll_pane_cp20

0xed48,	// (0x0002980e) list_single_tmo_link_pane_ParamLimits

0xed48,	// (0x0002980e) list_single_tmo_link_pane

0xed58,	// (0x0002981e) list_single_tmo_link_pane_t1

0xed66,	// (0x0002982c) list_tmo_note_info_text_pane_t1_ParamLimits

0xed66,	// (0x0002982c) list_tmo_note_info_text_pane_t1

0x854c,	// (0x00023012) aid_size_touch_scroll_bar_cp01_ParamLimits

0x854c,	// (0x00023012) aid_size_touch_scroll_bar_cp01

0x5068,	// (0x0001fb2e) aid_size_touch_slider_marker

0x5d70,	// (0x00020836) popup_settings_window_ParamLimits

0x5d70,	// (0x00020836) popup_settings_window

0x5237,	// (0x0001fcfd) popup_candi_list_indi_window

0x94b0,	// (0x00023f76) aid_touch_navi_pane_ParamLimits

0x7267,	// (0x00021d2d) rs_clock_indi_pane

0x7270,	// (0x00021d36) sctrl_sk_bottom_pane_ParamLimits

0x7281,	// (0x00021d47) sctrl_sk_top_pane_ParamLimits

0x7368,	// (0x00021e2e) popup_fep_tooltip_window

0xe641,	// (0x00029107) aid_size_cell_widget_grid_ParamLimits

0xe6b5,	// (0x0002917b) cell_ai5_widget_pane_g1_ParamLimits

0xe6b5,	// (0x0002917b) cell_ai5_widget_pane_g1

0xe708,	// (0x000291ce) cell_ai5_widget_pane_g6_ParamLimits

0xe714,	// (0x000291da) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe30,	// (0x0002a8f6) cell_ai5_widget_pane_g_ParamLimits

0xfe30,	// (0x0002a8f6) cell_ai5_widget_pane_g

0xe843,	// (0x00029309) cell_ai5_widget_pane_t10_ParamLimits

0xe843,	// (0x00029309) cell_ai5_widget_pane_t10

0xe859,	// (0x0002931f) grid_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x000293c1) cell_contacts_ai5_widget_pane_ParamLimits

0xe8fb,	// (0x000293c1) cell_contacts_ai5_widget_pane

0xeae0,	// (0x000295a6) popup_discreet_window_t3_ParamLimits

0xeae0,	// (0x000295a6) popup_discreet_window_t3

0x7aee,	// (0x000225b4) popup_fshwr2_char_preview_window_ParamLimits

0x7aee,	// (0x000225b4) popup_fshwr2_char_preview_window

0xeccb,	// (0x00029791) tmo_note_info_pane_t1

0xece0,	// (0x000297a6) tmo_note_info_pane_t2

0xecf5,	// (0x000297bb) tmo_note_info_pane_t3

0xed0a,	// (0x000297d0) tmo_note_info_pane_t4

0xed1c,	// (0x000297e2) tmo_note_info_pane_t5

0x0004,

0x0057,	// (0x0001ab1d) tmo_note_info_pane_t

0xed2e,	// (0x000297f4) list_tmo_link_pane_ParamLimits

0xed3b,	// (0x00029801) scroll_pane_cp20_ParamLimits

0x7b26,	// (0x000225ec) bg_popup_fep_char_preview_window_cp01

0xed7f,	// (0x00029845) popup_fshwr2_char_preview_window_t1

0xed8d,	// (0x00029853) popup_candi_list_indi_window_g1

0xed96,	// (0x0002985c) bg_cell_contacts_ai5_widget_pane

0xeda2,	// (0x00029868) cell_contacts_ai5_widget_pane_g1

0xedb6,	// (0x0002987c) cell_contacts_ai5_widget_pane_g2

0xedc2,	// (0x00029888) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0062,	// (0x0001ab28) cell_contacts_ai5_widget_pane_g

0xedd5,	// (0x0002989b) cell_contacts_ai5_widget_pane_t1

0x8486,	// (0x00022f4c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee4c,	// (0x00029912) settings_container_pane

0x910e,	// (0x00023bd4) listscroll_set_pane_copy1

0xb70d,	// (0x000261d3) scroll_pane_cp121_copy1

0xee58,	// (0x0002991e) set_content_pane_copy1

0xee60,	// (0x00029926) aid_height_set_list_copy1_ParamLimits

0xee60,	// (0x00029926) aid_height_set_list_copy1

0xae0a,	// (0x000258d0) aid_size_parent_copy1_ParamLimits

0xae0a,	// (0x000258d0) aid_size_parent_copy1

0xee6c,	// (0x00029932) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee6c,	// (0x00029932) button_value_adjust_pane_cp6_copy1

0x944e,	// (0x00023f14) list_highlight_pane_cp2_copy1_ParamLimits

0x944e,	// (0x00023f14) list_highlight_pane_cp2_copy1

0xee80,	// (0x00029946) list_set_pane_copy1_ParamLimits

0xee80,	// (0x00029946) list_set_pane_copy1

0xede7,	// (0x000298ad) main_pane_set_t1_copy1_ParamLimits

0xede7,	// (0x000298ad) main_pane_set_t1_copy1

0xee21,	// (0x000298e7) main_pane_set_t2_copy1_ParamLimits

0xee21,	// (0x000298e7) main_pane_set_t2_copy1

0xef2d,	// (0x000299f3) main_pane_set_t3_copy1

0xef3b,	// (0x00029a01) main_pane_set_t4_copy1

0xee40,	// (0x00029906) set_content_pane_g1_copy1_ParamLimits

0xee40,	// (0x00029906) set_content_pane_g1_copy1

0xef49,	// (0x00029a0f) setting_code_pane_copy1

0xef51,	// (0x00029a17) setting_slider_graphic_pane_copy1

0xef51,	// (0x00029a17) setting_slider_pane_copy1

0xef51,	// (0x00029a17) setting_text_pane_copy1

0xef51,	// (0x00029a17) setting_volume_pane_copy1

0xef49,	// (0x00029a0f) settings_code_pane_cp2_copy1

0xef59,	// (0x00029a1f) settings_code_pane_cp_copy1_ParamLimits

0xef59,	// (0x00029a1f) settings_code_pane_cp_copy1

0xef6d,	// (0x00029a33) volume_set_pane_copy1

0xef75,	// (0x00029a3b) volume_set_pane_g10_copy1

0xef7d,	// (0x00029a43) volume_set_pane_g1_copy1

0xef85,	// (0x00029a4b) volume_set_pane_g2_copy1

0xef8d,	// (0x00029a53) volume_set_pane_g3_copy1

0xef95,	// (0x00029a5b) volume_set_pane_g4_copy1

0xef9d,	// (0x00029a63) volume_set_pane_g5_copy1

0xefa5,	// (0x00029a6b) volume_set_pane_g6_copy1

0xefad,	// (0x00029a73) volume_set_pane_g7_copy1

0xefb5,	// (0x00029a7b) volume_set_pane_g8_copy1

0xefbd,	// (0x00029a83) volume_set_pane_g9_copy1

0x7c1a,	// (0x000226e0) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c1a,	// (0x000226e0) bg_set_opt_pane_cp_copy1

0xefc5,	// (0x00029a8b) setting_slider_pane_t1_copy1_ParamLimits

0xefc5,	// (0x00029a8b) setting_slider_pane_t1_copy1

0xefe3,	// (0x00029aa9) setting_slider_pane_t2_copy1_ParamLimits

0xefe3,	// (0x00029aa9) setting_slider_pane_t2_copy1

0xeffd,	// (0x00029ac3) setting_slider_pane_t3_copy1_ParamLimits

0xeffd,	// (0x00029ac3) setting_slider_pane_t3_copy1

0xf015,	// (0x00029adb) slider_set_pane_copy1_ParamLimits

0xf015,	// (0x00029adb) slider_set_pane_copy1

0x84ed,	// (0x00022fb3) set_opt_bg_pane_g1_copy2

0x84f5,	// (0x00022fbb) set_opt_bg_pane_g2_copy2

0xf02b,	// (0x00029af1) set_opt_bg_pane_g3_copy2

0x8505,	// (0x00022fcb) set_opt_bg_pane_g4_copy2

0x850d,	// (0x00022fd3) set_opt_bg_pane_g5_copy2

0x8515,	// (0x00022fdb) set_opt_bg_pane_g6_copy2

0xf035,	// (0x00029afb) set_opt_bg_pane_g7_copy2

0xf03d,	// (0x00029b03) set_opt_bg_pane_g8_copy2

0xf047,	// (0x00029b0d) set_opt_bg_pane_g9_copy2

0xf051,	// (0x00029b17) aid_size_touch_slider_mark_copy1_ParamLimits

0xf051,	// (0x00029b17) aid_size_touch_slider_mark_copy1

0xf065,	// (0x00029b2b) slider_set_pane_g1_copy1

0xf06e,	// (0x00029b34) slider_set_pane_g2_copy1

0xad89,	// (0x0002584f) slider_set_pane_g3_copy1_ParamLimits

0xad89,	// (0x0002584f) slider_set_pane_g3_copy1

0xad9d,	// (0x00025863) slider_set_pane_g4_copy1_ParamLimits

0xad9d,	// (0x00025863) slider_set_pane_g4_copy1

0xadb5,	// (0x0002587b) slider_set_pane_g5_copy1_ParamLimits

0xadb5,	// (0x0002587b) slider_set_pane_g5_copy1

0xad89,	// (0x0002584f) slider_set_pane_g6_copy1_ParamLimits

0xad89,	// (0x0002584f) slider_set_pane_g6_copy1

0xf076,	// (0x00029b3c) slider_set_pane_g7_copy1_ParamLimits

0xf076,	// (0x00029b3c) slider_set_pane_g7_copy1

0x7b3a,	// (0x00022600) bg_set_opt_pane_cp2_copy1

0xf08c,	// (0x00029b52) setting_slider_graphic_pane_g1_copy1

0xf095,	// (0x00029b5b) setting_slider_graphic_pane_t1_copy1

0xf0a5,	// (0x00029b6b) setting_slider_graphic_pane_t2_copy1

0xf0b5,	// (0x00029b7b) slider_set_pane_cp_copy1

0xf0c5,	// (0x00029b8b) input_focus_pane_cp1_copy1

0xf0ce,	// (0x00029b94) list_set_text_pane_copy1

0xf0d6,	// (0x00029b9c) setting_text_pane_g1_copy1

0x4a48,	// (0x0001f50e) set_text_pane_t1_copy1

0xf0c5,	// (0x00029b8b) input_focus_pane_cp2_copy1

0xf0d6,	// (0x00029b9c) setting_code_pane_g1_copy1

0xf0df,	// (0x00029ba5) setting_code_pane_t1_copy1

0xf0ed,	// (0x00029bb3) list_set_graphic_pane_copy1

0x7b3a,	// (0x00022600) bg_set_opt_pane_cp4_copy1

0x8e14,	// (0x000238da) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e14,	// (0x000238da) list_set_graphic_pane_g1_copy1

0xf0ff,	// (0x00029bc5) list_set_graphic_pane_g2_copy1

0x8e2c,	// (0x000238f2) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e2c,	// (0x000238f2) list_set_graphic_pane_t1_copy1

0xc067,	// (0x00026b2d) rs_clock_indi_pane_g1

0xf107,	// (0x00029bcd) rs_clock_indi_pane_t1

0xf115,	// (0x00029bdb) rs_indi_pane

0xf11d,	// (0x00029be3) rs_indi_pane_g1

0xf126,	// (0x00029bec) rs_indi_pane_g2

0xf12f,	// (0x00029bf5) rs_indi_pane_g3

0x0002,

0x0069,	// (0x0001ab2f) rs_indi_pane_g

0x910e,	// (0x00023bd4) bg_popup_preview_window_pane_cp03

0xf138,	// (0x00029bfe) popup_fep_tooltip_window_t1

0xccce,	// (0x00027794) popup_note2_window_g2_ParamLimits

0xccce,	// (0x00027794) popup_note2_window_g2

0x0001,

0xfc62,	// (0x0002a728) popup_note2_window_g_ParamLimits

0xfc62,	// (0x0002a728) popup_note2_window_g

0xd1c9,	// (0x00027c8f) bg_popup_sub_pane_cp11_ParamLimits

0xd1d6,	// (0x00027c9c) cell_ai3_links_pane_g1_ParamLimits

0xd1ed,	// (0x00027cb3) cell_ai3_links_pane_t1

0x4a48,	// (0x0001f50e) set_text_pane_t1_copy1_ParamLimits

0x901f,	// (0x00023ae5) cell_graphic_popup_pane_cp2_ParamLimits

0x901f,	// (0x00023ae5) cell_graphic_popup_pane_cp2

0xf146,	// (0x00029c0c) cell_graphic_popup_pane_g1_cp2

0x81d1,	// (0x00022c97) cell_graphic_popup_pane_g2_cp2

0xf14e,	// (0x00029c14) cell_graphic_popup_pane_g3_cp2

0xf156,	// (0x00029c1c) cell_graphic_popup_pane_t2_cp2

0x81e2,	// (0x00022ca8) grid_highlight_pane_cp3_cp2

0x8832,	// (0x000232f8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8486,	// (0x00022f4c) main_tmo_pane_ParamLimits

0xd521,	// (0x00027fe7) popup_tmo_big_image_note_window

0xe6a5,	// (0x0002916b) cell_ai5_widget_list_pane

0xe6ad,	// (0x00029173) cell_ai5_widget_lrg_icon_pane

0xeccb,	// (0x00029791) tmo_note_info_pane_t1_ParamLimits

0xece0,	// (0x000297a6) tmo_note_info_pane_t2_ParamLimits

0xecf5,	// (0x000297bb) tmo_note_info_pane_t3_ParamLimits

0xed0a,	// (0x000297d0) tmo_note_info_pane_t4_ParamLimits

0xed1c,	// (0x000297e2) tmo_note_info_pane_t5_ParamLimits

0x0057,	// (0x0001ab1d) tmo_note_info_pane_t_ParamLimits

0xee4c,	// (0x00029912) settings_container_pane_ParamLimits

0xf0bd,	// (0x00029b83) indicator_popup_pane_cp5

0xf0bd,	// (0x00029b83) indicator_popup_pane_cp6

0xf0ed,	// (0x00029bb3) list_set_graphic_pane_copy1_ParamLimits

0x7b26,	// (0x000225ec) bg_popup_window_pane_cp23

0xf164,	// (0x00029c2a) popup_tmo_big_image_note_window_g1

0xf16e,	// (0x00029c34) popup_tmo_big_image_note_window_t1

0xf17e,	// (0x00029c44) popup_tmo_big_image_note_window_t2

0xf18e,	// (0x00029c54) popup_tmo_big_image_note_window_t3

0x0002,

0x0070,	// (0x0001ab36) popup_tmo_big_image_note_window_t

0xf19e,	// (0x00029c64) cell_ai5_widget_lrg_icon_pane_g1

0xf1a6,	// (0x00029c6c) cell_ai5_widget_lrg_icon_pane_t1

0xf1b4,	// (0x00029c7a) cell_ai5_widget_list_row_pane_ParamLimits

0xf1b4,	// (0x00029c7a) cell_ai5_widget_list_row_pane

0xf1cd,	// (0x00029c93) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1cd,	// (0x00029c93) cell_ai5_widget_list_row_pane_g1

0xf1da,	// (0x00029ca0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1da,	// (0x00029ca0) cell_ai5_widget_list_row_pane_t1

0xf1f2,	// (0x00029cb8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1f2,	// (0x00029cb8) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0077,	// (0x0001ab3d) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0077,	// (0x0001ab3d) cell_ai5_widget_list_row_pane_t

0x7b26,	// (0x000225ec) main_fep_vtchi_ss_pane

0xf229,	// (0x00029cef) popup_fep_char_pre_window

0xf231,	// (0x00029cf7) popup_fep_ituss_window

0xf252,	// (0x00029d18) popup_fep_vkbss_window

0xf271,	// (0x00029d37) grid_vkbss_keypad_pane_ParamLimits

0xf271,	// (0x00029d37) grid_vkbss_keypad_pane

0xf281,	// (0x00029d47) ituss_keypad_pane

0xf29d,	// (0x00029d63) aid_vkbss_key_offset_ParamLimits

0xf29d,	// (0x00029d63) aid_vkbss_key_offset

0xf2a9,	// (0x00029d6f) cell_vkbss_key_pane_ParamLimits

0xf2a9,	// (0x00029d6f) cell_vkbss_key_pane

0xf2bf,	// (0x00029d85) bg_cell_vkbss_key_g1_ParamLimits

0xf2bf,	// (0x00029d85) bg_cell_vkbss_key_g1

0xf2cb,	// (0x00029d91) cell_vkbss_key_3p_pane_ParamLimits

0xf2cb,	// (0x00029d91) cell_vkbss_key_3p_pane

0xf2e5,	// (0x00029dab) cell_vkbss_key_g1_ParamLimits

0xf2e5,	// (0x00029dab) cell_vkbss_key_g1

0xf2ff,	// (0x00029dc5) cell_vkbss_key_t1_ParamLimits

0xf2ff,	// (0x00029dc5) cell_vkbss_key_t1

0xf32a,	// (0x00029df0) cell_ituss_key_pane_ParamLimits

0xf32a,	// (0x00029df0) cell_ituss_key_pane

0xf33b,	// (0x00029e01) bg_cell_ituss_key_g1_ParamLimits

0xf33b,	// (0x00029e01) bg_cell_ituss_key_g1

0xf347,	// (0x00029e0d) cell_ituss_key_pane_g1_ParamLimits

0xf347,	// (0x00029e0d) cell_ituss_key_pane_g1

0xf361,	// (0x00029e27) cell_ituss_key_pane_g2_ParamLimits

0xf361,	// (0x00029e27) cell_ituss_key_pane_g2

0x0001,

0x007e,	// (0x0001ab44) cell_ituss_key_pane_g_ParamLimits

0x007e,	// (0x0001ab44) cell_ituss_key_pane_g

0xf38c,	// (0x00029e52) cell_ituss_key_t1_ParamLimits

0xf38c,	// (0x00029e52) cell_ituss_key_t1

0xf3ba,	// (0x00029e80) cell_ituss_key_t2_ParamLimits

0xf3ba,	// (0x00029e80) cell_ituss_key_t2

0xf3eb,	// (0x00029eb1) cell_ituss_key_t3_ParamLimits

0xf3eb,	// (0x00029eb1) cell_ituss_key_t3

0xf41c,	// (0x00029ee2) cell_ituss_key_t4_ParamLimits

0xf41c,	// (0x00029ee2) cell_ituss_key_t4

0x0003,

0x0083,	// (0x0001ab49) cell_ituss_key_t_ParamLimits

0x0083,	// (0x0001ab49) cell_ituss_key_t

0xf44d,	// (0x00029f13) cell_vkbss_key_3p_pane_g1

0xf455,	// (0x00029f1b) cell_vkbss_key_3p_pane_g2

0xf45d,	// (0x00029f23) cell_vkbss_key_3p_pane_g3

0x0002,

0x008c,	// (0x0001ab52) cell_vkbss_key_3p_pane_g

0x7b26,	// (0x000225ec) bg_popup_fep_char_preview_window_cp02

0xf465,	// (0x00029f2b) popup_fep_char_pre_window_t1

0xe637,	// (0x000290fd) main_ai5_sk_pane

0xed96,	// (0x0002985c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda2,	// (0x00029868) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb6,	// (0x0002987c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc2,	// (0x00029888) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0062,	// (0x0001ab28) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd5,	// (0x0002989b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8486,	// (0x00022f4c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf474,	// (0x00029f3a) main_ai5_sk_pane_g1

0x9e91,	// (0x00024957) popup_query_code_window_g1

0xf247,	// (0x00029d0d) popup_fep_vkb_icf_pane

0xf25b,	// (0x00029d21) popup_fep_vtchi_icf_pane

0x8486,	// (0x00022f4c) bg_icf_pane

0xf47d,	// (0x00029f43) list_vkb_icf_pane

0x8486,	// (0x00022f4c) bg_icf_pane_cp01

0xf489,	// (0x00029f4f) vtchi_icf_list_pane

0xf49a,	// (0x00029f60) list_vkb_icf_pane_t1_ParamLimits

0xf49a,	// (0x00029f60) list_vkb_icf_pane_t1

0xf4b1,	// (0x00029f77) vtchi_icf_list_pane_t1_ParamLimits

0xf4b1,	// (0x00029f77) vtchi_icf_list_pane_t1

0xf231,	// (0x00029cf7) popup_fep_ituss_window_ParamLimits

0xf25b,	// (0x00029d21) popup_fep_vtchi_icf_pane_ParamLimits

0xf281,	// (0x00029d47) ituss_keypad_pane_ParamLimits

0xf291,	// (0x00029d57) ituss_sks_pane

0x8486,	// (0x00022f4c) bg_icf_pane_ParamLimits

0xf21a,	// (0x00029ce0) icf_edit_indi_pane_ParamLimits

0xf21a,	// (0x00029ce0) icf_edit_indi_pane

0xf47d,	// (0x00029f43) list_vkb_icf_pane_ParamLimits

0x8486,	// (0x00022f4c) bg_icf_pane_cp01_ParamLimits

0xf21a,	// (0x00029ce0) icf_edit_indi_pane_cp01_ParamLimits

0xf21a,	// (0x00029ce0) icf_edit_indi_pane_cp01

0xf491,	// (0x00029f57) vtchi_query_pane

0xc2e5,	// (0x00026dab) icf_edit_indi_pane_g1_ParamLimits

0xc2e5,	// (0x00026dab) icf_edit_indi_pane_g1

0xf537,	// (0x00029ffd) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x00029ffd) icf_edit_indi_pane_g2

0x0001,

0xfe93,	// (0x0002a959) icf_edit_indi_pane_g_ParamLimits

0xfe93,	// (0x0002a959) icf_edit_indi_pane_g

0xf546,	// (0x0002a00c) icf_edit_indi_pane_t1

0xf4cd,	// (0x00029f93) bg_input_focus_pane_cp042

0x83b5,	// (0x00022e7b) vtchi_button_pane

0xf4d6,	// (0x00029f9c) vtchi_query_pane_t1

0xf4e4,	// (0x00029faa) vtchi_query_pane_t2

0xf4f2,	// (0x00029fb8) vtchi_query_pane_t3

0x0002,

0x0093,	// (0x0001ab59) vtchi_query_pane_t

0x7b26,	// (0x000225ec) bg_button_pane_cp13

0xf500,	// (0x00029fc6) vtchi_button_pane_g1

0xf508,	// (0x00029fce) ituss_sks_pane_g1

0xf513,	// (0x00029fd9) ituss_sks_pane_g2

0x0001,

0x009a,	// (0x0001ab60) ituss_sks_pane_g

0xf51b,	// (0x00029fe1) ituss_sks_pane_t1

0xf529,	// (0x00029fef) ituss_sks_pane_t2

0x0001,

0x009f,	// (0x0001ab65) ituss_sks_pane_t

0xbad0,	// (0x00026596) indicator_nsta_pane_cp_g1

0xbad9,	// (0x0002659f) indicator_nsta_pane_cp_g2

0xbae1,	// (0x000265a7) indicator_nsta_pane_cp_g3

0xbae9,	// (0x000265af) indicator_nsta_pane_cp_g4

0xbaf1,	// (0x000265b7) indicator_nsta_pane_cp_g5

0xbaf9,	// (0x000265bf) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0002a572) indicator_nsta_pane_cp_g

0xe1fc,	// (0x00028cc2) cell_graphic2_pane_t2_ParamLimits

0xe1fc,	// (0x00028cc2) cell_graphic2_pane_t2

0x0001,

0xfdb9,	// (0x0002a87f) cell_graphic2_pane_t_ParamLimits

0xfdb9,	// (0x0002a87f) cell_graphic2_pane_t

0xe229,	// (0x00028cef) cell_graphic2_control_pane_t1

0x8ba8,	// (0x0002366e) signal_pane_g3_ParamLimits

0x8ba8,	// (0x0002366e) signal_pane_g3

0x8bb7,	// (0x0002367d) signal_pane_g4_ParamLimits

0x8bb7,	// (0x0002367d) signal_pane_g4

0xf204,	// (0x00029cca) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf204,	// (0x00029cca) cell_ai5_widget_list_row_pane_t3

0xf37a,	// (0x00029e40) cell_ituss_key_pane_t1_ParamLimits

0xf37a,	// (0x00029e40) cell_ituss_key_pane_t1

0x9ad8,	// (0x0002459e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ad8,	// (0x0002459e) form_field_data_wide_pane_vc_t2

0x9aec,	// (0x000245b2) form_field_data_wide_pane_vc_t3_ParamLimits

0x9aec,	// (0x000245b2) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0002a2d5) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0002a2d5) form_field_data_wide_pane_vc_t

0xb787,	// (0x0002624d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb787,	// (0x0002624d) form_field_slider_wide_pane_vc_t3

0xb865,	// (0x0002632b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb865,	// (0x0002632b) form_field_popup_wide_pane_vc_t2

0xb87c,	// (0x00026342) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb87c,	// (0x00026342) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0002a561) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0002a561) form_field_popup_wide_pane_vc_t

0x7a84,	// (0x0002254a) aid_fshwr2_btn_pane_ParamLimits

0x7a90,	// (0x00022556) aid_fshwr2_syb_pane_ParamLimits

0x7aa1,	// (0x00022567) aid_fshwr2_txt_pane_ParamLimits

0x8486,	// (0x00022f4c) fshwr2_bg_pane_ParamLimits

0x7aad,	// (0x00022573) fshwr2_func_candi_pane_ParamLimits

0x7ac2,	// (0x00022588) fshwr2_hwr_syb_pane_ParamLimits

0x7ad9,	// (0x0002259f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

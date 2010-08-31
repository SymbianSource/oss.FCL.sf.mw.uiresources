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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001a6ff };

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
0x76fb,	// (0x00021dfa) Screen

0x770f,	// (0x00021e0e) application_window_ParamLimits

0x770f,	// (0x00021e0e) application_window

0x7729,	// (0x00021e28) screen_g1

0x5cad,	// (0x000203ac) area_bottom_pane_ParamLimits

0x5cad,	// (0x000203ac) area_bottom_pane

0x5d6d,	// (0x0002046c) area_top_pane_ParamLimits

0x5d6d,	// (0x0002046c) area_top_pane

0x5e01,	// (0x00020500) main_pane_ParamLimits

0x5e01,	// (0x00020500) main_pane

0x7733,	// (0x00021e32) misc_graphics

0x967f,	// (0x00023d7e) battery_pane_ParamLimits

0x967f,	// (0x00023d7e) battery_pane

0xa392,	// (0x00024a91) bg_status_flat_pane_g8

0xa39a,	// (0x00024a99) bg_status_flat_pane_g9

0x9741,	// (0x00023e40) context_pane_ParamLimits

0x9741,	// (0x00023e40) context_pane

0x9857,	// (0x00023f56) navi_pane_ParamLimits

0x9857,	// (0x00023f56) navi_pane

0x98d4,	// (0x00023fd3) signal_pane_ParamLimits

0x98d4,	// (0x00023fd3) signal_pane

0x0008,

0xf88a,	// (0x00029f89) bg_status_flat_pane_g

0x9941,	// (0x00024040) status_pane_g1_ParamLimits

0x9941,	// (0x00024040) status_pane_g1

0x9955,	// (0x00024054) status_pane_g2_ParamLimits

0x9955,	// (0x00024054) status_pane_g2

0x9961,	// (0x00024060) status_pane_g3_ParamLimits

0x9961,	// (0x00024060) status_pane_g3

0x0004,

0xf7b8,	// (0x00029eb7) status_pane_g_ParamLimits

0xf7b8,	// (0x00029eb7) status_pane_g

0x9995,	// (0x00024094) title_pane_ParamLimits

0x9995,	// (0x00024094) title_pane

0x99d2,	// (0x000240d1) uni_indicator_pane_ParamLimits

0x99d2,	// (0x000240d1) uni_indicator_pane

0x9004,	// (0x00023703) bg_list_pane_ParamLimits

0x9004,	// (0x00023703) bg_list_pane

0x5424,	// (0x0001fb23) find_pane

0x9024,	// (0x00023723) listscroll_app_pane_ParamLimits

0x9024,	// (0x00023723) listscroll_app_pane

0x9030,	// (0x0002372f) listscroll_form_pane

0x542c,	// (0x0001fb2b) listscroll_gen_pane_ParamLimits

0x542c,	// (0x0001fb2b) listscroll_gen_pane

0x9030,	// (0x0002372f) listscroll_set_pane

0x826d,	// (0x0002296c) main_idle_act_pane

0x8ce4,	// (0x000233e3) main_idle_trad_pane

0x8ce4,	// (0x000233e3) main_list_empty_pane

0x904a,	// (0x00023749) main_midp_pane

0x9056,	// (0x00023755) main_pane_g1_ParamLimits

0x9056,	// (0x00023755) main_pane_g1

0x9064,	// (0x00023763) popup_ai_message_window_ParamLimits

0x9064,	// (0x00023763) popup_ai_message_window

0x9106,	// (0x00023805) popup_fep_china_uni_window_ParamLimits

0x9106,	// (0x00023805) popup_fep_china_uni_window

0x9162,	// (0x00023861) popup_fep_japan_candidate_window_ParamLimits

0x9162,	// (0x00023861) popup_fep_japan_candidate_window

0x9182,	// (0x00023881) popup_fep_japan_predictive_window_ParamLimits

0x9182,	// (0x00023881) popup_fep_japan_predictive_window

0x91b2,	// (0x000238b1) popup_find_window

0x91bf,	// (0x000238be) popup_grid_graphic_window_ParamLimits

0x91bf,	// (0x000238be) popup_grid_graphic_window

0x91e7,	// (0x000238e6) popup_large_graphic_colour_window

0x920d,	// (0x0002390c) popup_menu_window_ParamLimits

0x920d,	// (0x0002390c) popup_menu_window

0x93c5,	// (0x00023ac4) popup_note_image_window

0x93b1,	// (0x00023ab0) popup_note_wait_window_ParamLimits

0x93b1,	// (0x00023ab0) popup_note_wait_window

0x93b1,	// (0x00023ab0) popup_note_window_ParamLimits

0x93b1,	// (0x00023ab0) popup_note_window

0x941b,	// (0x00023b1a) popup_query_code_window_ParamLimits

0x941b,	// (0x00023b1a) popup_query_code_window

0x942f,	// (0x00023b2e) popup_query_data_code_window_ParamLimits

0x942f,	// (0x00023b2e) popup_query_data_code_window

0x944c,	// (0x00023b4b) popup_query_data_window_ParamLimits

0x944c,	// (0x00023b4b) popup_query_data_window

0x9468,	// (0x00023b67) popup_query_sat_info_window_ParamLimits

0x9468,	// (0x00023b67) popup_query_sat_info_window

0x94a1,	// (0x00023ba0) popup_snote_single_graphic_window_ParamLimits

0x94a1,	// (0x00023ba0) popup_snote_single_graphic_window

0x94a1,	// (0x00023ba0) popup_snote_single_text_window_ParamLimits

0x94a1,	// (0x00023ba0) popup_snote_single_text_window

0x94b6,	// (0x00023bb5) popup_sub_window_general

0x95e6,	// (0x00023ce5) popup_window_general_ParamLimits

0x95e6,	// (0x00023ce5) popup_window_general

0x95fb,	// (0x00023cfa) power_save_pane

0x6560,	// (0x00020c5f) control_pane_g1_ParamLimits

0x6560,	// (0x00020c5f) control_pane_g1

0x6589,	// (0x00020c88) control_pane_g2_ParamLimits

0x6589,	// (0x00020c88) control_pane_g2

0x8fad,	// (0x000236ac) control_pane_g3_ParamLimits

0x8fad,	// (0x000236ac) control_pane_g3

0x0007,

0xf7a0,	// (0x00029e9f) control_pane_g_ParamLimits

0xf7a0,	// (0x00029e9f) control_pane_g

0x65d0,	// (0x00020ccf) control_pane_t1_ParamLimits

0x65d0,	// (0x00020ccf) control_pane_t1

0x6622,	// (0x00020d21) control_pane_t2_ParamLimits

0x6622,	// (0x00020d21) control_pane_t2

0x0002,

0xf7b1,	// (0x00029eb0) control_pane_t_ParamLimits

0xf7b1,	// (0x00029eb0) control_pane_t

0x8ece,	// (0x000235cd) navi_navi_volume_pane_cp1

0x8ed7,	// (0x000235d6) status_small_icon_pane

0x8edf,	// (0x000235de) status_small_pane_g1_ParamLimits

0x8edf,	// (0x000235de) status_small_pane_g1

0x8f13,	// (0x00023612) status_small_pane_g2_ParamLimits

0x8f13,	// (0x00023612) status_small_pane_g2

0x8f1f,	// (0x0002361e) status_small_pane_g3_ParamLimits

0x8f1f,	// (0x0002361e) status_small_pane_g3

0x8f2b,	// (0x0002362a) status_small_pane_g4_ParamLimits

0x8f2b,	// (0x0002362a) status_small_pane_g4

0x8f37,	// (0x00023636) status_small_pane_g5_ParamLimits

0x8f37,	// (0x00023636) status_small_pane_g5

0x8f46,	// (0x00023645) status_small_pane_g6_ParamLimits

0x8f46,	// (0x00023645) status_small_pane_g6

0x0007,

0xf78f,	// (0x00029e8e) status_small_pane_g_ParamLimits

0xf78f,	// (0x00029e8e) status_small_pane_g

0x8f76,	// (0x00023675) status_small_pane_t1

0x8f99,	// (0x00023698) status_small_wait_pane_ParamLimits

0x8f99,	// (0x00023698) status_small_wait_pane

0x8787,	// (0x00022e86) aid_levels_signal_ParamLimits

0x8787,	// (0x00022e86) aid_levels_signal

0x8799,	// (0x00022e98) signal_pane_g1_ParamLimits

0x8799,	// (0x00022e98) signal_pane_g1

0x87ae,	// (0x00022ead) signal_pane_g2_ParamLimits

0x87ae,	// (0x00022ead) signal_pane_g2

0x0001,

0xf724,	// (0x00029e23) signal_pane_g_ParamLimits

0xf724,	// (0x00029e23) signal_pane_g

0x87c3,	// (0x00022ec2) context_pane_g1

0x773d,	// (0x00021e3c) title_pane_g1

0x7773,	// (0x00021e72) title_pane_t1

0x77db,	// (0x00021eda) title_pane_t2

0x7801,	// (0x00021f00) title_pane_t3

0x0002,

0xf573,	// (0x00029c72) title_pane_t

0x99ea,	// (0x000240e9) aid_levels_battery_ParamLimits

0x99ea,	// (0x000240e9) aid_levels_battery

0x99fe,	// (0x000240fd) battery_pane_g1_ParamLimits

0x99fe,	// (0x000240fd) battery_pane_g1

0x9a14,	// (0x00024113) battery_pane_g2_ParamLimits

0x9a14,	// (0x00024113) battery_pane_g2

0x0001,

0xf7c3,	// (0x00029ec2) battery_pane_g_ParamLimits

0xf7c3,	// (0x00029ec2) battery_pane_g

0xacda,	// (0x000253d9) uni_indicator_pane_g1

0xacef,	// (0x000253ee) uni_indicator_pane_g2

0xad05,	// (0x00025404) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002a031) uni_indicator_pane_g

0x8b56,	// (0x00023255) navi_icon_pane_ParamLimits

0x8b56,	// (0x00023255) navi_icon_pane

0x8a9f,	// (0x0002319e) navi_midp_pane

0x8b72,	// (0x00023271) navi_navi_pane

0x8b7c,	// (0x0002327b) navi_text_pane_ParamLimits

0x8b7c,	// (0x0002327b) navi_text_pane

0x7729,	// (0x00021e28) status_small_wait_pane_g1

0x7c30,	// (0x0002232f) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0002a02c) status_small_wait_pane_g

0xa9ff,	// (0x000250fe) navi_navi_icon_text_pane

0xaa07,	// (0x00025106) navi_navi_pane_g1_ParamLimits

0xaa07,	// (0x00025106) navi_navi_pane_g1

0xaa19,	// (0x00025118) navi_navi_pane_g2_ParamLimits

0xaa19,	// (0x00025118) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00029ffa) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00029ffa) navi_navi_pane_g

0xaa2b,	// (0x0002512a) navi_navi_tabs_pane

0xaa34,	// (0x00025133) navi_navi_text_pane

0xa9ff,	// (0x000250fe) navi_navi_volume_pane

0xa9d8,	// (0x000250d7) navi_text_pane_t1

0xa9c9,	// (0x000250c8) navi_icon_pane_g1

0xa91c,	// (0x0002501b) navi_navi_text_pane_t1

0x6934,	// (0x00021033) navi_navi_volume_pane_g1

0x693c,	// (0x0002103b) volume_small_pane

0xa882,	// (0x00024f81) navi_navi_icon_text_pane_g1

0xa88a,	// (0x00024f89) navi_navi_icon_text_pane_t1

0x8b72,	// (0x00023271) navi_tabs_2_long_pane

0x8b72,	// (0x00023271) navi_tabs_2_pane

0x8b72,	// (0x00023271) navi_tabs_3_long_pane

0x8b72,	// (0x00023271) navi_tabs_3_pane

0x8b72,	// (0x00023271) navi_tabs_4_pane

0x6914,	// (0x00021013) tabs_2_active_pane_ParamLimits

0x6914,	// (0x00021013) tabs_2_active_pane

0x6924,	// (0x00021023) tabs_2_passive_pane_ParamLimits

0x6924,	// (0x00021023) tabs_2_passive_pane

0x68e2,	// (0x00020fe1) tabs_3_active_pane_ParamLimits

0x68e2,	// (0x00020fe1) tabs_3_active_pane

0x68f2,	// (0x00020ff1) tabs_3_passive_pane_ParamLimits

0x68f2,	// (0x00020ff1) tabs_3_passive_pane

0x6903,	// (0x00021002) tabs_3_passive_pane_cp_ParamLimits

0x6903,	// (0x00021002) tabs_3_passive_pane_cp

0x689e,	// (0x00020f9d) tabs_4_active_pane_ParamLimits

0x689e,	// (0x00020f9d) tabs_4_active_pane

0x68af,	// (0x00020fae) tabs_4_passive_pane_ParamLimits

0x68af,	// (0x00020fae) tabs_4_passive_pane

0x68c0,	// (0x00020fbf) tabs_4_passive_pane_cp_ParamLimits

0x68c0,	// (0x00020fbf) tabs_4_passive_pane_cp

0x68d1,	// (0x00020fd0) tabs_4_passive_pane_cp2_ParamLimits

0x68d1,	// (0x00020fd0) tabs_4_passive_pane_cp2

0x687a,	// (0x00020f79) tabs_2_long_active_pane_ParamLimits

0x687a,	// (0x00020f79) tabs_2_long_active_pane

0x688c,	// (0x00020f8b) tabs_2_long_passive_pane_ParamLimits

0x688c,	// (0x00020f8b) tabs_2_long_passive_pane

0x683b,	// (0x00020f3a) tabs_3_long_active_pane_ParamLimits

0x683b,	// (0x00020f3a) tabs_3_long_active_pane

0x684e,	// (0x00020f4d) tabs_3_long_passive_pane_ParamLimits

0x684e,	// (0x00020f4d) tabs_3_long_passive_pane

0x6867,	// (0x00020f66) tabs_3_long_passive_pane_cp_ParamLimits

0x6867,	// (0x00020f66) tabs_3_long_passive_pane_cp

0x67e1,	// (0x00020ee0) volume_small_pane_g1

0x67ea,	// (0x00020ee9) volume_small_pane_g2

0x67f3,	// (0x00020ef2) volume_small_pane_g3

0x67fc,	// (0x00020efb) volume_small_pane_g4

0x6805,	// (0x00020f04) volume_small_pane_g5

0x680e,	// (0x00020f0d) volume_small_pane_g6

0x6817,	// (0x00020f16) volume_small_pane_g7

0x6820,	// (0x00020f1f) volume_small_pane_g8

0x6829,	// (0x00020f28) volume_small_pane_g9

0x6832,	// (0x00020f31) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00029fc6) volume_small_pane_g

0x7813,	// (0x00021f12) bg_active_tab_pane_cp2_ParamLimits

0x7813,	// (0x00021f12) bg_active_tab_pane_cp2

0x7821,	// (0x00021f20) tabs_3_active_pane_g1

0x7829,	// (0x00021f28) tabs_3_active_pane_t1

0x7813,	// (0x00021f12) bg_passive_tab_pane_cp2_ParamLimits

0x7813,	// (0x00021f12) bg_passive_tab_pane_cp2

0x7821,	// (0x00021f20) tabs_3_passive_pane_g1

0x7829,	// (0x00021f28) tabs_3_passive_pane_t1

0x7813,	// (0x00021f12) bg_active_tab_pane_cp3_ParamLimits

0x7813,	// (0x00021f12) bg_active_tab_pane_cp3

0x783b,	// (0x00021f3a) tabs_4_active_pane_g1

0x7843,	// (0x00021f42) tabs_4_active_pane_t1

0x7813,	// (0x00021f12) bg_passive_tab_pane_cp3_ParamLimits

0x7813,	// (0x00021f12) bg_passive_tab_pane_cp3

0x783b,	// (0x00021f3a) tabs_4_1_passive_pane_g1

0x7843,	// (0x00021f42) tabs_4_1_passive_pane_t1

0x904a,	// (0x00023749) list_highlight_pane_cp2

0xaf63,	// (0x00025662) list_set_pane_ParamLimits

0xaf63,	// (0x00025662) list_set_pane

0xb009,	// (0x00025708) main_pane_set_t1_ParamLimits

0xb009,	// (0x00025708) main_pane_set_t1

0xb029,	// (0x00025728) main_pane_set_t2_ParamLimits

0xb029,	// (0x00025728) main_pane_set_t2

0xb03d,	// (0x0002573c) main_pane_set_t3_ParamLimits

0xb03d,	// (0x0002573c) main_pane_set_t3

0xb04f,	// (0x0002574e) main_pane_set_t4_ParamLimits

0xb04f,	// (0x0002574e) main_pane_set_t4

0x0003,

0xf997,	// (0x0002a096) main_pane_set_t_ParamLimits

0xf997,	// (0x0002a096) main_pane_set_t

0xb061,	// (0x00025760) setting_code_pane

0xb06d,	// (0x0002576c) setting_slider_graphic_pane

0xb06d,	// (0x0002576c) setting_slider_pane

0xb06d,	// (0x0002576c) setting_text_pane

0xb06d,	// (0x0002576c) setting_volume_pane

0x6046,	// (0x00020745) volume_set_pane

0x7813,	// (0x00021f12) bg_set_opt_pane_cp

0x604e,	// (0x0002074d) setting_slider_pane_t1

0x6067,	// (0x00020766) setting_slider_pane_t2

0x6081,	// (0x00020780) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00029c79) setting_slider_pane_t

0x6099,	// (0x00020798) slider_set_pane

0x7733,	// (0x00021e32) bg_set_opt_pane_cp2

0x7855,	// (0x00021f54) setting_slider_graphic_pane_g1

0x60af,	// (0x000207ae) setting_slider_graphic_pane_t1

0x60bf,	// (0x000207be) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00029c80) setting_slider_graphic_pane_t

0x60cf,	// (0x000207ce) slider_set_pane_cp

0x7733,	// (0x00021e32) input_focus_pane_cp1

0xaf22,	// (0x00025621) list_set_text_pane

0x7729,	// (0x00021e28) setting_text_pane_g1

0x7733,	// (0x00021e32) input_focus_pane_cp2

0x7729,	// (0x00021e28) setting_code_pane_g1

0x785e,	// (0x00021f5d) setting_code_pane_t1

0x4c51,	// (0x0001f350) set_text_pane_t1_ParamLimits

0x4c51,	// (0x0001f350) set_text_pane_t1

0x80e6,	// (0x000227e5) set_opt_bg_pane_g1

0x80ee,	// (0x000227ed) set_opt_bg_pane_g2

0xaefc,	// (0x000255fb) set_opt_bg_pane_g3

0x80fe,	// (0x000227fd) set_opt_bg_pane_g4

0x8106,	// (0x00022805) set_opt_bg_pane_g5

0x810e,	// (0x0002280d) set_opt_bg_pane_g6

0xaf06,	// (0x00025605) set_opt_bg_pane_g7

0xaf0e,	// (0x0002560d) set_opt_bg_pane_g8

0xaf18,	// (0x00025617) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002a083) set_opt_bg_pane_g

0xaeef,	// (0x000255ee) slider_set_pane_g1

0x69a9,	// (0x000210a8) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002a074) slider_set_pane_g

0x6945,	// (0x00021044) volume_set_pane_g1

0x694d,	// (0x0002104c) volume_set_pane_g2

0x6955,	// (0x00021054) volume_set_pane_g3

0x695d,	// (0x0002105c) volume_set_pane_g4

0x6965,	// (0x00021064) volume_set_pane_g5

0x696d,	// (0x0002106c) volume_set_pane_g6

0x6975,	// (0x00021074) volume_set_pane_g7

0x697d,	// (0x0002107c) volume_set_pane_g8

0x6985,	// (0x00021084) volume_set_pane_g9

0x698d,	// (0x0002108c) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0002a04c) volume_set_pane_g

0x786c,	// (0x00021f6b) indicator_pane_ParamLimits

0x786c,	// (0x00021f6b) indicator_pane

0x7878,	// (0x00021f77) main_idle_pane_g2_ParamLimits

0x7878,	// (0x00021f77) main_idle_pane_g2

0x78a0,	// (0x00021f9f) main_pane_idle_g1_ParamLimits

0x78a0,	// (0x00021f9f) main_pane_idle_g1

0x78ad,	// (0x00021fac) popup_clock_digital_analogue_window_ParamLimits

0x78ad,	// (0x00021fac) popup_clock_digital_analogue_window

0x78c4,	// (0x00021fc3) soft_indicator_pane_ParamLimits

0x78c4,	// (0x00021fc3) soft_indicator_pane

0x78d0,	// (0x00021fcf) wallpaper_pane_ParamLimits

0x78d0,	// (0x00021fcf) wallpaper_pane

0x7729,	// (0x00021e28) wallpaper_pane_g1

0x78e4,	// (0x00021fe3) indicator_pane_g1_ParamLimits

0x78e4,	// (0x00021fe3) indicator_pane_g1

0xb2f2,	// (0x000259f1) navi_navi_icon_text_pane_srt_g1

0x78ff,	// (0x00021ffe) soft_indicator_pane_t1

0x7919,	// (0x00022018) aid_ps_area_pane

0x792a,	// (0x00022029) aid_ps_clock_pane

0x7938,	// (0x00022037) aid_ps_indicator_pane

0x7944,	// (0x00022043) indicator_ps_pane_ParamLimits

0x7944,	// (0x00022043) indicator_ps_pane

0x7953,	// (0x00022052) power_save_pane_g1_ParamLimits

0x7953,	// (0x00022052) power_save_pane_g1

0x795f,	// (0x0002205e) power_save_pane_g2_ParamLimits

0x795f,	// (0x0002205e) power_save_pane_g2

0x5c61,	// (0x00020360) aid_navinavi_width_pane

0x7919,	// (0x00022018) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00029c85) power_save_pane_g_ParamLimits

0xf586,	// (0x00029c85) power_save_pane_g

0x796d,	// (0x0002206c) power_save_pane_t1_ParamLimits

0x796d,	// (0x0002206c) power_save_pane_t1

0x792a,	// (0x00022029) aid_ps_clock_pane_ParamLimits

0x7938,	// (0x00022037) aid_ps_indicator_pane_ParamLimits

0x797f,	// (0x0002207e) power_save_pane_t4_ParamLimits

0x797f,	// (0x0002207e) power_save_pane_t4

0x0001,

0xf58b,	// (0x00029c8a) power_save_pane_t_ParamLimits

0xf58b,	// (0x00029c8a) power_save_pane_t

0x79a9,	// (0x000220a8) power_save_t3_ParamLimits

0x79a9,	// (0x000220a8) power_save_t3

0x7994,	// (0x00022093) power_save_t2_ParamLimits

0x7994,	// (0x00022093) power_save_t2

0x79be,	// (0x000220bd) indicator_ps_pane_g1

0x79c7,	// (0x000220c6) ai_gene_pane_ParamLimits

0x79c7,	// (0x000220c6) ai_gene_pane

0x79d3,	// (0x000220d2) ai_links_pane_ParamLimits

0x79d3,	// (0x000220d2) ai_links_pane

0x79df,	// (0x000220de) indicator_pane_cp1_ParamLimits

0x79df,	// (0x000220de) indicator_pane_cp1

0x79eb,	// (0x000220ea) main_pane_idle_g1_cp_ParamLimits

0x79eb,	// (0x000220ea) main_pane_idle_g1_cp

0x79f7,	// (0x000220f6) popup_ai_links_title_window

0x7a00,	// (0x000220ff) soft_indicator_pane_cp1_ParamLimits

0x7a00,	// (0x000220ff) soft_indicator_pane_cp1

0xacc8,	// (0x000253c7) ai_links_pane_g1

0xacd1,	// (0x000253d0) grid_ai_links_pane

0xacab,	// (0x000253aa) ai_gene_pane_1

0xacb6,	// (0x000253b5) ai_gene_pane_2

0xacbf,	// (0x000253be) list_highlight_pane_cp4

0xac8f,	// (0x0002538e) cell_ai_link_pane_ParamLimits

0xac8f,	// (0x0002538e) cell_ai_link_pane

0xac87,	// (0x00025386) cell_ai_link_pane_g1

0x7c30,	// (0x0002232f) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0002a027) cell_ai_link_pane_g

0x7733,	// (0x00021e32) grid_highlight_cp2

0x7733,	// (0x00021e32) bg_popup_sub_pane_cp1

0x7a1a,	// (0x00022119) popup_ai_links_title_window_t1

0xabd5,	// (0x000252d4) ai_gene_pane_1_g1_ParamLimits

0xabd5,	// (0x000252d4) ai_gene_pane_1_g1

0xabe1,	// (0x000252e0) ai_gene_pane_1_g2_ParamLimits

0xabe1,	// (0x000252e0) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0002a01d) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0002a01d) ai_gene_pane_1_g

0xabee,	// (0x000252ed) ai_gene_pane_1_t1_ParamLimits

0xabee,	// (0x000252ed) ai_gene_pane_1_t1

0xac22,	// (0x00025321) grid_ai_soft_ind_pane

0xabc0,	// (0x000252bf) ai_gene_pane_2_t1_ParamLimits

0xabc0,	// (0x000252bf) ai_gene_pane_2_t1

0x7a29,	// (0x00022128) main_pane_empty_t1_ParamLimits

0x7a29,	// (0x00022128) main_pane_empty_t1

0x7a41,	// (0x00022140) main_pane_empty_t2_ParamLimits

0x7a41,	// (0x00022140) main_pane_empty_t2

0x7a56,	// (0x00022155) main_pane_empty_t3_ParamLimits

0x7a56,	// (0x00022155) main_pane_empty_t3

0x7a68,	// (0x00022167) main_pane_empty_t4_ParamLimits

0x7a68,	// (0x00022167) main_pane_empty_t4

0x7a7a,	// (0x00022179) main_pane_empty_t5_ParamLimits

0x7a7a,	// (0x00022179) main_pane_empty_t5

0x0004,

0xf590,	// (0x00029c8f) main_pane_empty_t_ParamLimits

0xf590,	// (0x00029c8f) main_pane_empty_t

0x8137,	// (0x00022836) bg_popup_window_pane_ParamLimits

0x8137,	// (0x00022836) bg_popup_window_pane

0xa92a,	// (0x00025029) find_popup_pane_cp2_ParamLimits

0xa92a,	// (0x00025029) find_popup_pane_cp2

0xa936,	// (0x00025035) heading_pane_ParamLimits

0xa936,	// (0x00025035) heading_pane

0x7733,	// (0x00021e32) bg_popup_sub_pane

0xa8a4,	// (0x00024fa3) bg_popup_window_pane_g1_ParamLimits

0xa8a4,	// (0x00024fa3) bg_popup_window_pane_g1

0xa8b0,	// (0x00024faf) bg_popup_window_pane_g2_ParamLimits

0xa8b0,	// (0x00024faf) bg_popup_window_pane_g2

0xa8bc,	// (0x00024fbb) bg_popup_window_pane_g3_ParamLimits

0xa8bc,	// (0x00024fbb) bg_popup_window_pane_g3

0xa8c8,	// (0x00024fc7) bg_popup_window_pane_g4_ParamLimits

0xa8c8,	// (0x00024fc7) bg_popup_window_pane_g4

0xa8d4,	// (0x00024fd3) bg_popup_window_pane_g5_ParamLimits

0xa8d4,	// (0x00024fd3) bg_popup_window_pane_g5

0xa8e0,	// (0x00024fdf) bg_popup_window_pane_g6_ParamLimits

0xa8e0,	// (0x00024fdf) bg_popup_window_pane_g6

0xa8ec,	// (0x00024feb) bg_popup_window_pane_g7_ParamLimits

0xa8ec,	// (0x00024feb) bg_popup_window_pane_g7

0xa8f8,	// (0x00024ff7) bg_popup_window_pane_g8_ParamLimits

0xa8f8,	// (0x00024ff7) bg_popup_window_pane_g8

0xa904,	// (0x00025003) bg_popup_window_pane_g9_ParamLimits

0xa904,	// (0x00025003) bg_popup_window_pane_g9

0xa910,	// (0x0002500f) bg_popup_window_pane_g10_ParamLimits

0xa910,	// (0x0002500f) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00029fe5) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00029fe5) bg_popup_window_pane_g

0xa839,	// (0x00024f38) bg_popup_heading_pane_ParamLimits

0xa839,	// (0x00024f38) bg_popup_heading_pane

0x6a31,	// (0x00021130) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a31,	// (0x00021130) tabs_4_passive_pane_cp_srt

0x6a43,	// (0x00021142) tabs_4_passive_pane_srt_ParamLimits

0xa84d,	// (0x00024f4c) heading_pane_g2

0x6a43,	// (0x00021142) tabs_4_passive_pane_srt

0x904a,	// (0x00023749) bg_passive_tab_pane_cp3_srt_ParamLimits

0x904a,	// (0x00023749) bg_passive_tab_pane_cp3_srt

0xa855,	// (0x00024f54) heading_pane_t1_ParamLimits

0xa855,	// (0x00024f54) heading_pane_t1

0xa86c,	// (0x00024f6b) heading_pane_t2_ParamLimits

0xa86c,	// (0x00024f6b) heading_pane_t2

0x0001,

0xf8e1,	// (0x00029fe0) heading_pane_t_ParamLimits

0xf8e1,	// (0x00029fe0) heading_pane_t

0xa35a,	// (0x00024a59) bg_popup_heading_pane_g1

0xa409,	// (0x00024b08) bg_popup_heading_pane_g2

0xa413,	// (0x00024b12) bg_popup_heading_pane_g3

0xa41d,	// (0x00024b1c) bg_popup_heading_pane_g4

0xa427,	// (0x00024b26) bg_popup_heading_pane_g5

0xa431,	// (0x00024b30) bg_popup_heading_pane_g6

0xa439,	// (0x00024b38) bg_popup_heading_pane_g7

0xa441,	// (0x00024b40) bg_popup_heading_pane_g8

0xa44b,	// (0x00024b4a) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x00029f9c) bg_popup_heading_pane_g

0x9aec,	// (0x000241eb) bg_popup_sub_pane_g1

0x9af4,	// (0x000241f3) bg_popup_sub_pane_g2

0x9afc,	// (0x000241fb) bg_popup_sub_pane_g3

0x9b04,	// (0x00024203) bg_popup_sub_pane_g4

0x9b0c,	// (0x0002420b) bg_popup_sub_pane_g5

0x9b14,	// (0x00024213) bg_popup_sub_pane_g6

0x9b1c,	// (0x0002421b) bg_popup_sub_pane_g7

0x9b24,	// (0x00024223) bg_popup_sub_pane_g8

0x9b2c,	// (0x0002422b) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00029f76) bg_popup_sub_pane_g

0x7a8e,	// (0x0002218d) bg_popup_window_pane_cp5_ParamLimits

0x7a8e,	// (0x0002218d) bg_popup_window_pane_cp5

0x7aaa,	// (0x000221a9) popup_note_window_g1_ParamLimits

0x7aaa,	// (0x000221a9) popup_note_window_g1

0x7ab6,	// (0x000221b5) popup_note_window_t1_ParamLimits

0x7ab6,	// (0x000221b5) popup_note_window_t1

0x7acc,	// (0x000221cb) popup_note_window_t2_ParamLimits

0x7acc,	// (0x000221cb) popup_note_window_t2

0x7ae2,	// (0x000221e1) popup_note_window_t3_ParamLimits

0x7ae2,	// (0x000221e1) popup_note_window_t3

0x7af8,	// (0x000221f7) popup_note_window_t4_ParamLimits

0x7af8,	// (0x000221f7) popup_note_window_t4

0x7b20,	// (0x0002221f) popup_note_window_t5_ParamLimits

0x7b20,	// (0x0002221f) popup_note_window_t5

0x0004,

0xf59b,	// (0x00029c9a) popup_note_window_t_ParamLimits

0xf59b,	// (0x00029c9a) popup_note_window_t

0x7b44,	// (0x00022243) bg_popup_window_pane_cp6_ParamLimits

0x7b44,	// (0x00022243) bg_popup_window_pane_cp6

0xa2d6,	// (0x000249d5) popup_note_image_window_g1_ParamLimits

0xa2d6,	// (0x000249d5) popup_note_image_window_g1

0xa2e2,	// (0x000249e1) popup_note_image_window_g2_ParamLimits

0xa2e2,	// (0x000249e1) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00029f6a) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00029f6a) popup_note_image_window_g

0xa2fb,	// (0x000249fa) popup_note_image_window_t1_ParamLimits

0xa2fb,	// (0x000249fa) popup_note_image_window_t1

0xa314,	// (0x00024a13) popup_note_image_window_t2_ParamLimits

0xa314,	// (0x00024a13) popup_note_image_window_t2

0xa32d,	// (0x00024a2c) popup_note_image_window_t3_ParamLimits

0xa32d,	// (0x00024a2c) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00029f6f) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00029f6f) popup_note_image_window_t

0xa197,	// (0x00024896) bg_popup_window_pane_cp7_ParamLimits

0xa197,	// (0x00024896) bg_popup_window_pane_cp7

0xa1c7,	// (0x000248c6) popup_note_wait_window_g1_ParamLimits

0xa1c7,	// (0x000248c6) popup_note_wait_window_g1

0xa1d3,	// (0x000248d2) popup_note_wait_window_g2_ParamLimits

0xa1d3,	// (0x000248d2) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00029f58) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00029f58) popup_note_wait_window_g

0xa1eb,	// (0x000248ea) popup_note_wait_window_t1_ParamLimits

0xa1eb,	// (0x000248ea) popup_note_wait_window_t1

0xa212,	// (0x00024911) popup_note_wait_window_t2_ParamLimits

0xa212,	// (0x00024911) popup_note_wait_window_t2

0xa22f,	// (0x0002492e) popup_note_wait_window_t3_ParamLimits

0xa22f,	// (0x0002492e) popup_note_wait_window_t3

0xa242,	// (0x00024941) popup_note_wait_window_t4_ParamLimits

0xa242,	// (0x00024941) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00029f5f) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00029f5f) popup_note_wait_window_t

0xa267,	// (0x00024966) wait_bar_pane_ParamLimits

0xa267,	// (0x00024966) wait_bar_pane

0x7733,	// (0x00021e32) wait_anim_pane

0x7733,	// (0x00021e32) wait_border_pane

0x7729,	// (0x00021e28) wait_anim_pane_g1

0x7729,	// (0x00021e28) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x00029e1e) wait_anim_pane_g

0xa13b,	// (0x0002483a) wait_border_pane_g1

0xa146,	// (0x00024845) wait_border_pane_g2

0xa14f,	// (0x0002484e) wait_border_pane_g3

0x0002,

0xf852,	// (0x00029f51) wait_border_pane_g

0x9fa6,	// (0x000246a5) bg_popup_window_pane_cp16_ParamLimits

0x9fa6,	// (0x000246a5) bg_popup_window_pane_cp16

0xa0a6,	// (0x000247a5) indicator_popup_pane_cp4_ParamLimits

0xa0a6,	// (0x000247a5) indicator_popup_pane_cp4

0xa0ba,	// (0x000247b9) popup_query_data_window_t1_ParamLimits

0xa0ba,	// (0x000247b9) popup_query_data_window_t1

0xa0cc,	// (0x000247cb) popup_query_data_window_t2_ParamLimits

0xa0cc,	// (0x000247cb) popup_query_data_window_t2

0xa0e5,	// (0x000247e4) popup_query_data_window_t3_ParamLimits

0xa0e5,	// (0x000247e4) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00029f4a) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00029f4a) popup_query_data_window_t

0xa0ff,	// (0x000247fe) query_popup_data_pane_ParamLimits

0xa0ff,	// (0x000247fe) query_popup_data_pane

0xa113,	// (0x00024812) query_popup_data_pane_cp1_ParamLimits

0xa113,	// (0x00024812) query_popup_data_pane_cp1

0x9fa6,	// (0x000246a5) bg_popup_window_pane_cp10_ParamLimits

0x9fa6,	// (0x000246a5) bg_popup_window_pane_cp10

0x9fd8,	// (0x000246d7) indicator_popup_pane_ParamLimits

0x9fd8,	// (0x000246d7) indicator_popup_pane

0x9ffa,	// (0x000246f9) popup_query_code_window_t1_ParamLimits

0x9ffa,	// (0x000246f9) popup_query_code_window_t1

0xa014,	// (0x00024713) popup_query_code_window_t2_ParamLimits

0xa014,	// (0x00024713) popup_query_code_window_t2

0xa05d,	// (0x0002475c) popup_query_code_window_t3_ParamLimits

0xa05d,	// (0x0002475c) popup_query_code_window_t3

0x0002,

0xf844,	// (0x00029f43) popup_query_code_window_t_ParamLimits

0xf844,	// (0x00029f43) popup_query_code_window_t

0xa08c,	// (0x0002478b) query_popup_pane_ParamLimits

0xa08c,	// (0x0002478b) query_popup_pane

0x7b44,	// (0x00022243) bg_popup_window_pane_cp15_ParamLimits

0x7b44,	// (0x00022243) bg_popup_window_pane_cp15

0x7b62,	// (0x00022261) indicator_popup_pane_cp1_ParamLimits

0x7b62,	// (0x00022261) indicator_popup_pane_cp1

0x7b75,	// (0x00022274) indicator_popup_pane_cp2_ParamLimits

0x7b75,	// (0x00022274) indicator_popup_pane_cp2

0x7b88,	// (0x00022287) popup_query_data_code_window_g1_ParamLimits

0x7b88,	// (0x00022287) popup_query_data_code_window_g1

0x7b9b,	// (0x0002229a) popup_query_data_code_window_t1_ParamLimits

0x7b9b,	// (0x0002229a) popup_query_data_code_window_t1

0x7bad,	// (0x000222ac) popup_query_data_code_window_t2_ParamLimits

0x7bad,	// (0x000222ac) popup_query_data_code_window_t2

0x7bbf,	// (0x000222be) popup_query_data_code_window_t3_ParamLimits

0x7bbf,	// (0x000222be) popup_query_data_code_window_t3

0x7bd5,	// (0x000222d4) popup_query_data_code_window_t4_ParamLimits

0x7bd5,	// (0x000222d4) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00029ca5) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00029ca5) popup_query_data_code_window_t

0x670a,	// (0x00020e09) list_single_midp_graphic_pane_g3

0x7bed,	// (0x000222ec) query_popup_data_pane_cp2_ParamLimits

0x7c00,	// (0x000222ff) query_popup_pane_cp2_ParamLimits

0x7c00,	// (0x000222ff) query_popup_pane_cp2

0x7733,	// (0x00021e32) bg_popup_window_pane_cp11

0x9f9e,	// (0x0002469d) heading_pane_cp5

0x7ce8,	// (0x000223e7) listscroll_popup_info_pane

0x7733,	// (0x00021e32) input_focus_pane_cp3

0x7c13,	// (0x00022312) query_popup_pane_t1

0x7c21,	// (0x00022320) list_popup_info_pane_ParamLimits

0x7c21,	// (0x00022320) list_popup_info_pane

0x7c30,	// (0x0002232f) listscroll_popup_info_pane_g1

0x7c38,	// (0x00022337) scroll_pane_cp7

0x7c42,	// (0x00022341) popup_info_list_pane_t1_ParamLimits

0x7c42,	// (0x00022341) popup_info_list_pane_t1

0x7c5c,	// (0x0002235b) popup_info_list_pane_t2_ParamLimits

0x7c5c,	// (0x0002235b) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00029cae) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00029cae) popup_info_list_pane_t

0x7733,	// (0x00021e32) bg_popup_window_pane_cp12

0xb30c,	// (0x00025a0b) find_popup_pane

0x7813,	// (0x00021f12) bg_popup_window_pane_cp3

0x7c76,	// (0x00022375) heading_pane_cp3

0x7c82,	// (0x00022381) listscroll_popup_graphic_pane

0x7733,	// (0x00021e32) bg_popup_window_pane_cp4

0x7cde,	// (0x000223dd) heading_pane_cp4

0x7ce8,	// (0x000223e7) listscroll_popup_colour_pane

0x7cf0,	// (0x000223ef) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7cf0,	// (0x000223ef) cell_large_graphic_colour_none_popup_pane

0x7d04,	// (0x00022403) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d04,	// (0x00022403) grid_large_graphic_colour_popup_pane

0x7d30,	// (0x0002242f) listscroll_popup_colour_pane_g1_ParamLimits

0x7d30,	// (0x0002242f) listscroll_popup_colour_pane_g1

0x7d47,	// (0x00022446) listscroll_popup_colour_pane_g2_ParamLimits

0x7d47,	// (0x00022446) listscroll_popup_colour_pane_g2

0x7d5e,	// (0x0002245d) listscroll_popup_colour_pane_g3_ParamLimits

0x7d5e,	// (0x0002245d) listscroll_popup_colour_pane_g3

0x7d6e,	// (0x0002246d) listscroll_popup_colour_pane_g4_ParamLimits

0x7d6e,	// (0x0002246d) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00029cb3) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00029cb3) listscroll_popup_colour_pane_g

0x7d82,	// (0x00022481) scroll_pane_cp6_ParamLimits

0x7d82,	// (0x00022481) scroll_pane_cp6

0x7d94,	// (0x00022493) cell_large_graphic_colour_popup_pane_ParamLimits

0x7d94,	// (0x00022493) cell_large_graphic_colour_popup_pane

0x7db3,	// (0x000224b2) cell_large_graphic_colour_none_popup_pane_t1

0x7733,	// (0x00021e32) grid_highlight_pane_cp5

0x7dc2,	// (0x000224c1) cell_large_graphic_colour_popup_pane_g1

0x7dca,	// (0x000224c9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00029cbc) cell_large_graphic_colour_popup_pane_g

0x7dd2,	// (0x000224d1) cell_large_graphic_colour_popup_pane_g2_copy1

0x7ddb,	// (0x000224da) grid_highlight_pane_cp4

0x7de3,	// (0x000224e2) bg_popup_window_pane_cp8_ParamLimits

0x7de3,	// (0x000224e2) bg_popup_window_pane_cp8

0x7dfe,	// (0x000224fd) popup_snote_single_text_window_g1_ParamLimits

0x7dfe,	// (0x000224fd) popup_snote_single_text_window_g1

0x7e10,	// (0x0002250f) popup_snote_single_text_window_t1_ParamLimits

0x7e10,	// (0x0002250f) popup_snote_single_text_window_t1

0x7e23,	// (0x00022522) popup_snote_single_text_window_t2_ParamLimits

0x7e23,	// (0x00022522) popup_snote_single_text_window_t2

0x7e36,	// (0x00022535) popup_snote_single_text_window_t3_ParamLimits

0x7e36,	// (0x00022535) popup_snote_single_text_window_t3

0x7e6f,	// (0x0002256e) popup_snote_single_text_window_t4_ParamLimits

0x7e6f,	// (0x0002256e) popup_snote_single_text_window_t4

0x7ea3,	// (0x000225a2) popup_snote_single_text_window_t5_ParamLimits

0x7ea3,	// (0x000225a2) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00029cc1) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00029cc1) popup_snote_single_text_window_t

0x7ed2,	// (0x000225d1) bg_popup_window_pane_cp9_ParamLimits

0x7ed2,	// (0x000225d1) bg_popup_window_pane_cp9

0x7dfe,	// (0x000224fd) popup_snote_single_graphic_window_g1_ParamLimits

0x7dfe,	// (0x000224fd) popup_snote_single_graphic_window_g1

0x7ee0,	// (0x000225df) popup_snote_single_graphic_window_g2_ParamLimits

0x7ee0,	// (0x000225df) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00029ccc) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00029ccc) popup_snote_single_graphic_window_g

0x7eec,	// (0x000225eb) popup_snote_single_graphic_window_t1_ParamLimits

0x7eec,	// (0x000225eb) popup_snote_single_graphic_window_t1

0x7eff,	// (0x000225fe) popup_snote_single_graphic_window_t2_ParamLimits

0x7eff,	// (0x000225fe) popup_snote_single_graphic_window_t2

0x7f12,	// (0x00022611) popup_snote_single_graphic_window_t3_ParamLimits

0x7f12,	// (0x00022611) popup_snote_single_graphic_window_t3

0x7f4b,	// (0x0002264a) popup_snote_single_graphic_window_t4_ParamLimits

0x7f4b,	// (0x0002264a) popup_snote_single_graphic_window_t4

0x7f7f,	// (0x0002267e) popup_snote_single_graphic_window_t5_ParamLimits

0x7f7f,	// (0x0002267e) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00029cd1) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00029cd1) popup_snote_single_graphic_window_t

0xb250,	// (0x0002594f) grid_graphic_popup_pane_ParamLimits

0xb250,	// (0x0002594f) grid_graphic_popup_pane

0xb278,	// (0x00025977) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x00025977) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x0002598b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x0002598b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0002a0c0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0002a0c0) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x0002599f) scroll_pane_cp5

0xb1f9,	// (0x000258f8) cell_graphic_popup_pane_ParamLimits

0xb1f9,	// (0x000258f8) cell_graphic_popup_pane

0xb1da,	// (0x000258d9) cell_graphic_popup_pane_g1

0xb1e2,	// (0x000258e1) cell_graphic_popup_pane_g2

0x7dd2,	// (0x000224d1) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0002a0b9) cell_graphic_popup_pane_g

0xb1eb,	// (0x000258ea) cell_graphic_popup_pane_t2

0x7ddb,	// (0x000224da) grid_highlight_pane_cp3

0x7fc0,	// (0x000226bf) list_gen_pane_ParamLimits

0x7fc0,	// (0x000226bf) list_gen_pane

0x7ff2,	// (0x000226f1) scroll_pane

0xb13c,	// (0x0002583b) bg_list_pane_g1_ParamLimits

0xb13c,	// (0x0002583b) bg_list_pane_g1

0xb157,	// (0x00025856) bg_list_pane_g2_ParamLimits

0xb157,	// (0x00025856) bg_list_pane_g2

0xb16a,	// (0x00025869) bg_list_pane_g3_ParamLimits

0xb16a,	// (0x00025869) bg_list_pane_g3

0xb17c,	// (0x0002587b) bg_list_pane_g4_ParamLimits

0xb17c,	// (0x0002587b) bg_list_pane_g4

0xb18e,	// (0x0002588d) bg_list_pane_g5_ParamLimits

0xb18e,	// (0x0002588d) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0002a0ae) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0002a0ae) bg_list_pane_g

0xb0f3,	// (0x000257f2) list_double2_graphic_large_graphic_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double2_graphic_large_graphic_pane

0xb0f3,	// (0x000257f2) list_double2_graphic_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double2_graphic_pane

0xb0f3,	// (0x000257f2) list_double2_large_graphic_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double2_large_graphic_pane

0x55b9,	// (0x0001fcb8) list_double2_pane_ParamLimits

0x55b9,	// (0x0001fcb8) list_double2_pane

0xb0f3,	// (0x000257f2) list_double_graphic_heading_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double_graphic_heading_pane

0xb0f3,	// (0x000257f2) list_double_graphic_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double_graphic_pane

0xb0f3,	// (0x000257f2) list_double_heading_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double_heading_pane

0xb0f3,	// (0x000257f2) list_double_large_graphic_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double_large_graphic_pane

0xb0f3,	// (0x000257f2) list_double_number_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double_number_pane

0xb0f3,	// (0x000257f2) list_double_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double_pane

0xb0f3,	// (0x000257f2) list_double_time_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_double_time_pane

0xb0f3,	// (0x000257f2) list_setting_number_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_setting_number_pane

0xb0f3,	// (0x000257f2) list_setting_pane_ParamLimits

0xb0f3,	// (0x000257f2) list_setting_pane

0x55f4,	// (0x0001fcf3) list_single_2graphic_pane_ParamLimits

0x55f4,	// (0x0001fcf3) list_single_2graphic_pane

0x55f4,	// (0x0001fcf3) list_single_graphic_heading_pane_ParamLimits

0x55f4,	// (0x0001fcf3) list_single_graphic_heading_pane

0x55f4,	// (0x0001fcf3) list_single_graphic_pane_ParamLimits

0x55f4,	// (0x0001fcf3) list_single_graphic_pane

0x55f4,	// (0x0001fcf3) list_single_heading_pane_ParamLimits

0x55f4,	// (0x0001fcf3) list_single_heading_pane

0x564f,	// (0x0001fd4e) list_single_large_graphic_pane_ParamLimits

0x564f,	// (0x0001fd4e) list_single_large_graphic_pane

0x55f4,	// (0x0001fcf3) list_single_number_heading_pane_ParamLimits

0x55f4,	// (0x0001fcf3) list_single_number_heading_pane

0x55f4,	// (0x0001fcf3) list_single_number_pane_ParamLimits

0x55f4,	// (0x0001fcf3) list_single_number_pane

0x55f4,	// (0x0001fcf3) list_single_pane_ParamLimits

0x55f4,	// (0x0001fcf3) list_single_pane

0x7733,	// (0x00021e32) list_highlight_pane_cp1

0x4c78,	// (0x0001f377) list_single_pane_g1_ParamLimits

0x4c78,	// (0x0001f377) list_single_pane_g1

0x4c84,	// (0x0001f383) list_single_pane_g2_ParamLimits

0x4c84,	// (0x0001f383) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00029ce3) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00029ce3) list_single_pane_g

0x55a3,	// (0x0001fca2) list_single_pane_t1_ParamLimits

0x55a3,	// (0x0001fca2) list_single_pane_t1

0x4c78,	// (0x0001f377) list_single_number_pane_g1_ParamLimits

0x4c78,	// (0x0001f377) list_single_number_pane_g1

0x4c84,	// (0x0001f383) list_single_number_pane_g2_ParamLimits

0x4c84,	// (0x0001f383) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00029ce3) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00029ce3) list_single_number_pane_g

0x554d,	// (0x0001fc4c) list_single_number_pane_t1_ParamLimits

0x554d,	// (0x0001fc4c) list_single_number_pane_t1

0x5563,	// (0x0001fc62) list_single_number_pane_t2_ParamLimits

0x5563,	// (0x0001fc62) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0002a06f) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0002a06f) list_single_number_pane_t

0x4c6c,	// (0x0001f36b) list_single_graphic_pane_g1_ParamLimits

0x4c6c,	// (0x0001f36b) list_single_graphic_pane_g1

0x4c78,	// (0x0001f377) list_single_graphic_pane_g2_ParamLimits

0x4c78,	// (0x0001f377) list_single_graphic_pane_g2

0x4c84,	// (0x0001f383) list_single_graphic_pane_g3_ParamLimits

0x4c84,	// (0x0001f383) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00029cdc) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00029cdc) list_single_graphic_pane_g

0x4c90,	// (0x0001f38f) list_single_graphic_pane_t1_ParamLimits

0x4c90,	// (0x0001f38f) list_single_graphic_pane_t1

0x4c78,	// (0x0001f377) list_single_heading_pane_g1_ParamLimits

0x4c78,	// (0x0001f377) list_single_heading_pane_g1

0x4c84,	// (0x0001f383) list_single_heading_pane_g2_ParamLimits

0x4c84,	// (0x0001f383) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00029ce3) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00029ce3) list_single_heading_pane_g

0x4ca6,	// (0x0001f3a5) list_single_heading_pane_t1_ParamLimits

0x4ca6,	// (0x0001f3a5) list_single_heading_pane_t1

0x4cbc,	// (0x0001f3bb) list_single_heading_pane_t2_ParamLimits

0x4cbc,	// (0x0001f3bb) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00029ce8) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00029ce8) list_single_heading_pane_t

0x4c78,	// (0x0001f377) list_single_number_heading_pane_g1_ParamLimits

0x4c78,	// (0x0001f377) list_single_number_heading_pane_g1

0x4c84,	// (0x0001f383) list_single_number_heading_pane_g2_ParamLimits

0x4c84,	// (0x0001f383) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00029ce3) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00029ce3) list_single_number_heading_pane_g

0x4ca6,	// (0x0001f3a5) list_single_number_heading_pane_t1_ParamLimits

0x4ca6,	// (0x0001f3a5) list_single_number_heading_pane_t1

0x4cce,	// (0x0001f3cd) list_single_number_heading_pane_t2_ParamLimits

0x4cce,	// (0x0001f3cd) list_single_number_heading_pane_t2

0x4ce0,	// (0x0001f3df) list_single_number_heading_pane_t3_ParamLimits

0x4ce0,	// (0x0001f3df) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00029ced) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00029ced) list_single_number_heading_pane_t

0x4cf2,	// (0x0001f3f1) list_single_graphic_heading_pane_g1_ParamLimits

0x4cf2,	// (0x0001f3f1) list_single_graphic_heading_pane_g1

0x4cfe,	// (0x0001f3fd) list_single_graphic_heading_pane_g4_ParamLimits

0x4cfe,	// (0x0001f3fd) list_single_graphic_heading_pane_g4

0x4c84,	// (0x0001f383) list_single_graphic_heading_pane_g5_ParamLimits

0x4c84,	// (0x0001f383) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00029cf4) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00029cf4) list_single_graphic_heading_pane_g

0x4ca6,	// (0x0001f3a5) list_single_graphic_heading_pane_t1_ParamLimits

0x4ca6,	// (0x0001f3a5) list_single_graphic_heading_pane_t1

0x4d0f,	// (0x0001f40e) list_single_graphic_heading_pane_t2_ParamLimits

0x4d0f,	// (0x0001f40e) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00029cfb) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00029cfb) list_single_graphic_heading_pane_t

0x4d21,	// (0x0001f420) list_single_large_graphic_pane_g1_ParamLimits

0x4d21,	// (0x0001f420) list_single_large_graphic_pane_g1

0x4d2d,	// (0x0001f42c) list_single_large_graphic_pane_g2_ParamLimits

0x4d2d,	// (0x0001f42c) list_single_large_graphic_pane_g2

0x4d39,	// (0x0001f438) list_single_large_graphic_pane_g3_ParamLimits

0x4d39,	// (0x0001f438) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00029d00) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00029d00) list_single_large_graphic_pane_g

0xa146,	// (0x00024845) wait_border_pane_g2_copy1

0x4d45,	// (0x0001f444) list_single_large_graphic_pane_g4_cp2

0x4d4d,	// (0x0001f44c) list_single_large_graphic_pane_t1_ParamLimits

0x4d4d,	// (0x0001f44c) list_single_large_graphic_pane_t1

0x4d63,	// (0x0001f462) list_double_pane_g1_ParamLimits

0x4d63,	// (0x0001f462) list_double_pane_g1

0x4d6f,	// (0x0001f46e) list_double_pane_g2_ParamLimits

0x4d6f,	// (0x0001f46e) list_double_pane_g2

0x0001,

0xf608,	// (0x00029d07) list_double_pane_g_ParamLimits

0xf608,	// (0x00029d07) list_double_pane_g

0x4d7b,	// (0x0001f47a) list_double_pane_t1_ParamLimits

0x4d7b,	// (0x0001f47a) list_double_pane_t1

0x4d91,	// (0x0001f490) list_double_pane_t2_ParamLimits

0x4d91,	// (0x0001f490) list_double_pane_t2

0x0001,

0xf60d,	// (0x00029d0c) list_double_pane_t_ParamLimits

0xf60d,	// (0x00029d0c) list_double_pane_t

0x4da3,	// (0x0001f4a2) list_double2_pane_g1_ParamLimits

0x4da3,	// (0x0001f4a2) list_double2_pane_g1

0x4db4,	// (0x0001f4b3) list_double2_pane_g2_ParamLimits

0x4db4,	// (0x0001f4b3) list_double2_pane_g2

0x0001,

0xf612,	// (0x00029d11) list_double2_pane_g_ParamLimits

0xf612,	// (0x00029d11) list_double2_pane_g

0x4dc0,	// (0x0001f4bf) list_double2_pane_t1_ParamLimits

0x4dc0,	// (0x0001f4bf) list_double2_pane_t1

0x4dd6,	// (0x0001f4d5) list_double2_pane_t2_ParamLimits

0x4dd6,	// (0x0001f4d5) list_double2_pane_t2

0x0001,

0xf617,	// (0x00029d16) list_double2_pane_t_ParamLimits

0xf617,	// (0x00029d16) list_double2_pane_t

0x4d63,	// (0x0001f462) list_double_number_pane_g1_ParamLimits

0x4d63,	// (0x0001f462) list_double_number_pane_g1

0x4d6f,	// (0x0001f46e) list_double_number_pane_g2_ParamLimits

0x4d6f,	// (0x0001f46e) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00029d07) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00029d07) list_double_number_pane_g

0x4de8,	// (0x0001f4e7) list_double_number_pane_t1_ParamLimits

0x4de8,	// (0x0001f4e7) list_double_number_pane_t1

0x4dfa,	// (0x0001f4f9) list_double_number_pane_t2_ParamLimits

0x4dfa,	// (0x0001f4f9) list_double_number_pane_t2

0x4e10,	// (0x0001f50f) list_double_number_pane_t3_ParamLimits

0x4e10,	// (0x0001f50f) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00029d1b) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00029d1b) list_double_number_pane_t

0x4e22,	// (0x0001f521) list_double_graphic_pane_g1_ParamLimits

0x4e22,	// (0x0001f521) list_double_graphic_pane_g1

0x4e2e,	// (0x0001f52d) list_double_graphic_pane_g2_ParamLimits

0x4e2e,	// (0x0001f52d) list_double_graphic_pane_g2

0x4e3d,	// (0x0001f53c) list_double_graphic_pane_g3_ParamLimits

0x4e3d,	// (0x0001f53c) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00029d22) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00029d22) list_double_graphic_pane_g

0x4e55,	// (0x0001f554) list_double_graphic_pane_t1_ParamLimits

0x4e55,	// (0x0001f554) list_double_graphic_pane_t1

0x4e6b,	// (0x0001f56a) list_double_graphic_pane_t2_ParamLimits

0x4e6b,	// (0x0001f56a) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00029d2b) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00029d2b) list_double_graphic_pane_t

0x4e7d,	// (0x0001f57c) list_double2_graphic_pane_g1_ParamLimits

0x4e7d,	// (0x0001f57c) list_double2_graphic_pane_g1

0x4e89,	// (0x0001f588) list_double2_graphic_pane_g2_ParamLimits

0x4e89,	// (0x0001f588) list_double2_graphic_pane_g2

0x4e95,	// (0x0001f594) list_double2_graphic_pane_g3_ParamLimits

0x4e95,	// (0x0001f594) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00029d30) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00029d30) list_double2_graphic_pane_g

0x4ea1,	// (0x0001f5a0) list_double2_graphic_pane_t1_ParamLimits

0x4ea1,	// (0x0001f5a0) list_double2_graphic_pane_t1

0x4eb7,	// (0x0001f5b6) list_double2_graphic_pane_t2_ParamLimits

0x4eb7,	// (0x0001f5b6) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00029d37) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00029d37) list_double2_graphic_pane_t

0x4ec9,	// (0x0001f5c8) list_double_large_graphic_pane_g1_ParamLimits

0x4ec9,	// (0x0001f5c8) list_double_large_graphic_pane_g1

0x4ef2,	// (0x0001f5f1) list_double_large_graphic_pane_g2_ParamLimits

0x4ef2,	// (0x0001f5f1) list_double_large_graphic_pane_g2

0x4d6f,	// (0x0001f46e) list_double_large_graphic_pane_g3_ParamLimits

0x4d6f,	// (0x0001f46e) list_double_large_graphic_pane_g3

0x4f03,	// (0x0001f602) list_double_large_graphic_pane_g4_ParamLimits

0x4f03,	// (0x0001f602) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00029d3c) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00029d3c) list_double_large_graphic_pane_g

0x4f28,	// (0x0001f627) list_double_large_graphic_pane_t1_ParamLimits

0x4f28,	// (0x0001f627) list_double_large_graphic_pane_t1

0x4f41,	// (0x0001f640) list_double_large_graphic_pane_t2_ParamLimits

0x4f41,	// (0x0001f640) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00029d47) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00029d47) list_double_large_graphic_pane_t

0x4f53,	// (0x0001f652) list_double2_large_graphic_pane_g1_ParamLimits

0x4f53,	// (0x0001f652) list_double2_large_graphic_pane_g1

0x4f5f,	// (0x0001f65e) list_double2_large_graphic_pane_g2_ParamLimits

0x4f5f,	// (0x0001f65e) list_double2_large_graphic_pane_g2

0x4e95,	// (0x0001f594) list_double2_large_graphic_pane_g3_ParamLimits

0x4e95,	// (0x0001f594) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00029d4c) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00029d4c) list_double2_large_graphic_pane_g

0x4f70,	// (0x0001f66f) list_double2_large_graphic_pane_t1_ParamLimits

0x4f70,	// (0x0001f66f) list_double2_large_graphic_pane_t1

0x4f86,	// (0x0001f685) list_double2_large_graphic_pane_t2_ParamLimits

0x4f86,	// (0x0001f685) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00029d53) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00029d53) list_double2_large_graphic_pane_t

0x4f98,	// (0x0001f697) list_double_heading_pane_g1_ParamLimits

0x4f98,	// (0x0001f697) list_double_heading_pane_g1

0x4fa9,	// (0x0001f6a8) list_double_heading_pane_g2_ParamLimits

0x4fa9,	// (0x0001f6a8) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00029d58) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00029d58) list_double_heading_pane_g

0x4fb5,	// (0x0001f6b4) list_double_heading_pane_t1_ParamLimits

0x4fb5,	// (0x0001f6b4) list_double_heading_pane_t1

0x4fcb,	// (0x0001f6ca) list_double_heading_pane_t2_ParamLimits

0x4fcb,	// (0x0001f6ca) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00029d5d) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00029d5d) list_double_heading_pane_t

0x4e7d,	// (0x0001f57c) list_double_graphic_heading_pane_g1_ParamLimits

0x4e7d,	// (0x0001f57c) list_double_graphic_heading_pane_g1

0x4f98,	// (0x0001f697) list_double_graphic_heading_pane_g2_ParamLimits

0x4f98,	// (0x0001f697) list_double_graphic_heading_pane_g2

0x4fa9,	// (0x0001f6a8) list_double_graphic_heading_pane_g3_ParamLimits

0x4fa9,	// (0x0001f6a8) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00029d62) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00029d62) list_double_graphic_heading_pane_g

0x4fdd,	// (0x0001f6dc) list_double_graphic_heading_pane_t1_ParamLimits

0x4fdd,	// (0x0001f6dc) list_double_graphic_heading_pane_t1

0x4eb7,	// (0x0001f5b6) list_double_graphic_heading_pane_t2_ParamLimits

0x4eb7,	// (0x0001f5b6) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00029d69) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00029d69) list_double_graphic_heading_pane_t

0x4ef2,	// (0x0001f5f1) list_double_time_pane_g1_ParamLimits

0x4ef2,	// (0x0001f5f1) list_double_time_pane_g1

0x4d6f,	// (0x0001f46e) list_double_time_pane_g2_ParamLimits

0x4d6f,	// (0x0001f46e) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00029d6e) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00029d6e) list_double_time_pane_g

0x4ff3,	// (0x0001f6f2) list_double_time_pane_t1_ParamLimits

0x4ff3,	// (0x0001f6f2) list_double_time_pane_t1

0x5009,	// (0x0001f708) list_double_time_pane_t2_ParamLimits

0x5009,	// (0x0001f708) list_double_time_pane_t2

0x501b,	// (0x0001f71a) list_double_time_pane_t3_ParamLimits

0x501b,	// (0x0001f71a) list_double_time_pane_t3

0x502d,	// (0x0001f72c) list_double_time_pane_t4_ParamLimits

0x502d,	// (0x0001f72c) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00029d73) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00029d73) list_double_time_pane_t

0x4e89,	// (0x0001f588) list_setting_pane_g1_ParamLimits

0x4e89,	// (0x0001f588) list_setting_pane_g1

0x4e95,	// (0x0001f594) list_setting_pane_g2_ParamLimits

0x4e95,	// (0x0001f594) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00029d7c) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00029d7c) list_setting_pane_g

0x503f,	// (0x0001f73e) list_setting_pane_t1_ParamLimits

0x503f,	// (0x0001f73e) list_setting_pane_t1

0x5059,	// (0x0001f758) list_setting_pane_t2_ParamLimits

0x5059,	// (0x0001f758) list_setting_pane_t2

0x0002,

0xf682,	// (0x00029d81) list_setting_pane_t_ParamLimits

0xf682,	// (0x00029d81) list_setting_pane_t

0x5098,	// (0x0001f797) set_value_pane_cp_ParamLimits

0x5098,	// (0x0001f797) set_value_pane_cp

0x50a4,	// (0x0001f7a3) list_setting_number_pane_g1_ParamLimits

0x50a4,	// (0x0001f7a3) list_setting_number_pane_g1

0x50b0,	// (0x0001f7af) list_setting_number_pane_g2_ParamLimits

0x50b0,	// (0x0001f7af) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x00029d88) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x00029d88) list_setting_number_pane_g

0x50bc,	// (0x0001f7bb) list_setting_number_pane_t1_ParamLimits

0x50bc,	// (0x0001f7bb) list_setting_number_pane_t1

0x50d5,	// (0x0001f7d4) list_setting_number_pane_t2_ParamLimits

0x50d5,	// (0x0001f7d4) list_setting_number_pane_t2

0x50ef,	// (0x0001f7ee) list_setting_number_pane_t3_ParamLimits

0x50ef,	// (0x0001f7ee) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x00029d8d) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x00029d8d) list_setting_number_pane_t

0x5098,	// (0x0001f797) set_value_pane_ParamLimits

0x5098,	// (0x0001f797) set_value_pane

0x8026,	// (0x00022725) bg_set_opt_pane_ParamLimits

0x8026,	// (0x00022725) bg_set_opt_pane

0x5132,	// (0x0001f831) set_value_pane_t1

0x8047,	// (0x00022746) slider_set_pane_cp3

0x8050,	// (0x0002274f) volume_small_pane_cp

0x8059,	// (0x00022758) list_form_gen_pane

0x8062,	// (0x00022761) scroll_pane_cp8

0x5148,	// (0x0001f847) form_field_data_pane_ParamLimits

0x5148,	// (0x0001f847) form_field_data_pane

0x5168,	// (0x0001f867) form_field_data_wide_pane_ParamLimits

0x5168,	// (0x0001f867) form_field_data_wide_pane

0x5189,	// (0x0001f888) form_field_popup_pane_ParamLimits

0x5189,	// (0x0001f888) form_field_popup_pane

0x51a9,	// (0x0001f8a8) form_field_popup_wide_pane_ParamLimits

0x51a9,	// (0x0001f8a8) form_field_popup_wide_pane

0x51c6,	// (0x0001f8c5) form_field_slider_pane_ParamLimits

0x51c6,	// (0x0001f8c5) form_field_slider_pane

0x51d9,	// (0x0001f8d8) form_field_slider_wide_pane_ParamLimits

0x51d9,	// (0x0001f8d8) form_field_slider_wide_pane

0x8073,	// (0x00022772) data_form_pane

0x51f6,	// (0x0001f8f5) form_field_data_pane_t1

0x807f,	// (0x0002277e) input_focus_pane

0x808d,	// (0x0002278c) data_form_wide_pane

0x521a,	// (0x0001f919) form_field_data_wide_pane_t1

0x7df0,	// (0x000224ef) input_focus_pane_cp6

0x523c,	// (0x0001f93b) form_field_popup_pane_t1

0x807f,	// (0x0002277e) input_focus_pane_cp7

0x80b9,	// (0x000227b8) list_form_pane

0x525c,	// (0x0001f95b) form_field_popup_wide_pane_t1

0x807f,	// (0x0002277e) input_focus_pane_cp8

0x80c5,	// (0x000227c4) list_form_wide_pane

0x5279,	// (0x0001f978) form_field_slider_pane_t1_ParamLimits

0x5279,	// (0x0001f978) form_field_slider_pane_t1

0x528f,	// (0x0001f98e) form_field_slider_pane_t2_ParamLimits

0x528f,	// (0x0001f98e) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x00029d9d) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x00029d9d) form_field_slider_pane_t

0x7a8e,	// (0x0002218d) input_focus_pane_cp9_ParamLimits

0x7a8e,	// (0x0002218d) input_focus_pane_cp9

0x52a4,	// (0x0001f9a3) slider_cont_pane_ParamLimits

0x52a4,	// (0x0001f9a3) slider_cont_pane

0x80d4,	// (0x000227d3) form_field_slider_wide_pane_t1_ParamLimits

0x80d4,	// (0x000227d3) form_field_slider_wide_pane_t1

0x52b8,	// (0x0001f9b7) form_field_slider_wide_pane_t2_ParamLimits

0x52b8,	// (0x0001f9b7) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x00029da2) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x00029da2) form_field_slider_wide_pane_t

0x7a8e,	// (0x0002218d) input_focus_pane_cp10_ParamLimits

0x7a8e,	// (0x0002218d) input_focus_pane_cp10

0x52ca,	// (0x0001f9c9) slider_cont_pane_cp1_ParamLimits

0x52ca,	// (0x0001f9c9) slider_cont_pane_cp1

0x52de,	// (0x0001f9dd) slider_form_pane_cp

0x80e6,	// (0x000227e5) input_focus_pane_g1

0x80ee,	// (0x000227ed) input_focus_pane_g2

0x80f6,	// (0x000227f5) input_focus_pane_g3

0x80fe,	// (0x000227fd) input_focus_pane_g4

0x8106,	// (0x00022805) input_focus_pane_g5

0x810e,	// (0x0002280d) input_focus_pane_g6

0x8116,	// (0x00022815) input_focus_pane_g7

0x811e,	// (0x0002281d) input_focus_pane_g8

0x8126,	// (0x00022825) input_focus_pane_g9

0x7729,	// (0x00021e28) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x00029da7) input_focus_pane_g

0xa14f,	// (0x0002484e) wait_border_pane_g3_copy1

0x52e6,	// (0x0001f9e5) data_form_pane_t1

0x7729,	// (0x00021e28) wait_anim_pane_g1_copy1

0x5575,	// (0x0001fc74) data_form_wide_pane_t1

0x5301,	// (0x0001fa00) list_form_graphic_pane_cp_ParamLimits

0x5301,	// (0x0001fa00) list_form_graphic_pane_cp

0xb097,	// (0x00025796) slider_form_pane_g1

0xb0a0,	// (0x0002579f) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0002a09f) slider_form_pane_g

0x531a,	// (0x0001fa19) list_form_graphic_pane_ParamLimits

0x531a,	// (0x0001fa19) list_form_graphic_pane

0x5336,	// (0x0001fa35) list_form_graphic_pane_g1

0x533e,	// (0x0001fa3d) list_form_graphic_pane_t1_ParamLimits

0x533e,	// (0x0001fa3d) list_form_graphic_pane_t1

0x7813,	// (0x00021f12) list_highlight_pane_cp5_ParamLimits

0x7813,	// (0x00021f12) list_highlight_pane_cp5

0x5353,	// (0x0001fa52) find_pane_g1

0x812e,	// (0x0002282d) input_find_pane

0x535c,	// (0x0001fa5b) input_find_pane_g1_ParamLimits

0x535c,	// (0x0001fa5b) input_find_pane_g1

0x5368,	// (0x0001fa67) input_find_pane_t1_ParamLimits

0x5368,	// (0x0001fa67) input_find_pane_t1

0x537d,	// (0x0001fa7c) input_find_pane_t2_ParamLimits

0x537d,	// (0x0001fa7c) input_find_pane_t2

0x0001,

0xf6bd,	// (0x00029dbc) input_find_pane_t_ParamLimits

0xf6bd,	// (0x00029dbc) input_find_pane_t

0x8137,	// (0x00022836) input_focus_pane_cp5_ParamLimits

0x8137,	// (0x00022836) input_focus_pane_cp5

0x8151,	// (0x00022850) bg_popup_window_pane_cp2_ParamLimits

0x8151,	// (0x00022850) bg_popup_window_pane_cp2

0x815e,	// (0x0002285d) listscroll_menu_pane_ParamLimits

0x815e,	// (0x0002285d) listscroll_menu_pane

0x816a,	// (0x00022869) popup_submenu_window_ParamLimits

0x816a,	// (0x00022869) popup_submenu_window

0x8194,	// (0x00022893) find_popup_pane_g1

0x819c,	// (0x0002289b) input_popup_find_pane_cp

0x8137,	// (0x00022836) input_focus_pane_cp4_ParamLimits

0x8137,	// (0x00022836) input_focus_pane_cp4

0x81b2,	// (0x000228b1) input_popup_find_pane_t1_ParamLimits

0x81b2,	// (0x000228b1) input_popup_find_pane_t1

0x7733,	// (0x00021e32) bg_popup_sub_pane_cp

0x81e0,	// (0x000228df) listscroll_popup_sub_pane

0x81e8,	// (0x000228e7) list_submenu_pane_ParamLimits

0x81e8,	// (0x000228e7) list_submenu_pane

0x81f9,	// (0x000228f8) scroll_pane_cp4

0x8201,	// (0x00022900) list_single_popup_submenu_pane_ParamLimits

0x8201,	// (0x00022900) list_single_popup_submenu_pane

0x8215,	// (0x00022914) list_single_popup_submenu_pane_g1

0x821d,	// (0x0002291c) list_single_popup_submenu_pane_t1_ParamLimits

0x821d,	// (0x0002291c) list_single_popup_submenu_pane_t1

0x7813,	// (0x00021f12) bg_active_tab_pane_cp1_ParamLimits

0x7813,	// (0x00021f12) bg_active_tab_pane_cp1

0x8232,	// (0x00022931) tabs_2_active_pane_g1

0x823a,	// (0x00022939) tabs_2_active_pane_t1

0x7813,	// (0x00021f12) bg_passive_tab_pane_cp1_ParamLimits

0x7813,	// (0x00021f12) bg_passive_tab_pane_cp1

0x8232,	// (0x00022931) tabs_2_passive_pane_g1

0x823a,	// (0x00022939) tabs_2_passive_pane_t1

0x824c,	// (0x0002294b) bg_active_tab_pane_cp4

0x825a,	// (0x00022959) tabs_2_long_active_pane_t1

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp4

0x9643,	// (0x00023d42) list_single_midp_graphic_pane_g4_ParamLimits

0x824c,	// (0x0002294b) bg_active_tab_pane_cp5

0x8279,	// (0x00022978) tabs_3_long_active_pane_t1

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp5

0x9643,	// (0x00023d42) list_single_midp_graphic_pane_g4

0x7813,	// (0x00021f12) bg_popup_window_pane_cp13_ParamLimits

0x7813,	// (0x00021f12) bg_popup_window_pane_cp13

0x8294,	// (0x00022993) listscroll_popup_fast_pane_ParamLimits

0x8294,	// (0x00022993) listscroll_popup_fast_pane

0x82a3,	// (0x000229a2) grid_popup_fast_pane_ParamLimits

0x82a3,	// (0x000229a2) grid_popup_fast_pane

0x82b5,	// (0x000229b4) scroll_pane_cp9_ParamLimits

0x82b5,	// (0x000229b4) scroll_pane_cp9

0xc980,	// (0x0002707f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc980,	// (0x0002707f) list_single_graphic_hl_pane_t1_cp2

0x82d9,	// (0x000229d8) input_focus_pane_cp20_ParamLimits

0x82d9,	// (0x000229d8) input_focus_pane_cp20

0x82e7,	// (0x000229e6) query_popup_data_pane_t1_ParamLimits

0x82e7,	// (0x000229e6) query_popup_data_pane_t1

0x82fa,	// (0x000229f9) query_popup_data_pane_t2_ParamLimits

0x82fa,	// (0x000229f9) query_popup_data_pane_t2

0x8340,	// (0x00022a3f) query_popup_data_pane_t3_ParamLimits

0x8340,	// (0x00022a3f) query_popup_data_pane_t3

0x8381,	// (0x00022a80) query_popup_data_pane_t4_ParamLimits

0x8381,	// (0x00022a80) query_popup_data_pane_t4

0x83bd,	// (0x00022abc) query_popup_data_pane_t5_ParamLimits

0x83bd,	// (0x00022abc) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x00029dc1) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x00029dc1) query_popup_data_pane_t

0x80e6,	// (0x000227e5) bg_set_opt_pane_g1

0x80ee,	// (0x000227ed) bg_set_opt_pane_g2

0x80f6,	// (0x000227f5) bg_set_opt_pane_g3

0x80fe,	// (0x000227fd) bg_set_opt_pane_g4

0x8106,	// (0x00022805) bg_set_opt_pane_g5

0x810e,	// (0x0002280d) bg_set_opt_pane_g6

0x8116,	// (0x00022815) bg_set_opt_pane_g7

0x811e,	// (0x0002281d) bg_set_opt_pane_g8

0x8126,	// (0x00022825) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00029dcc) bg_set_opt_pane_g

0x6376,	// (0x00020a75) control_top_pane_stacon_ParamLimits

0x6376,	// (0x00020a75) control_top_pane_stacon

0x63c9,	// (0x00020ac8) signal_pane_stacon_ParamLimits

0x63c9,	// (0x00020ac8) signal_pane_stacon

0x897d,	// (0x0002307c) stacon_top_pane_g1_ParamLimits

0x897d,	// (0x0002307c) stacon_top_pane_g1

0x63ee,	// (0x00020aed) title_pane_stacon_ParamLimits

0x63ee,	// (0x00020aed) title_pane_stacon

0x6418,	// (0x00020b17) uni_indicator_pane_stacon_ParamLimits

0x6418,	// (0x00020b17) uni_indicator_pane_stacon

0x642d,	// (0x00020b2c) battery_pane_stacon_ParamLimits

0x642d,	// (0x00020b2c) battery_pane_stacon

0x6471,	// (0x00020b70) control_bottom_pane_stacon_ParamLimits

0x6471,	// (0x00020b70) control_bottom_pane_stacon

0x6494,	// (0x00020b93) navi_pane_stacon_ParamLimits

0x6494,	// (0x00020b93) navi_pane_stacon

0x899f,	// (0x0002309e) stacon_bottom_pane_g1_ParamLimits

0x899f,	// (0x0002309e) stacon_bottom_pane_g1

0x60d7,	// (0x000207d6) aid_levels_signal_lsc_ParamLimits

0x60d7,	// (0x000207d6) aid_levels_signal_lsc

0x60ee,	// (0x000207ed) signal_pane_stacon_g1_ParamLimits

0x60ee,	// (0x000207ed) signal_pane_stacon_g1

0x6102,	// (0x00020801) signal_pane_stacon_g2_ParamLimits

0x6102,	// (0x00020801) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x00029ddf) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00029ddf) signal_pane_stacon_g

0x6137,	// (0x00020836) title_pane_stacon_t1_ParamLimits

0x6137,	// (0x00020836) title_pane_stacon_t1

0x8401,	// (0x00022b00) uni_indicator_pane_stacon_g1

0x840b,	// (0x00022b0a) uni_indicator_pane_stacon_g2

0x8415,	// (0x00022b14) uni_indicator_pane_stacon_g3

0x841f,	// (0x00022b1e) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x00029deb) uni_indicator_pane_stacon_g

0x615c,	// (0x0002085b) control_top_pane_stacon_g1

0x6164,	// (0x00020863) control_top_pane_stacon_t1_ParamLimits

0x6164,	// (0x00020863) control_top_pane_stacon_t1

0x619b,	// (0x0002089a) aid_levels_battery_lsc_ParamLimits

0x619b,	// (0x0002089a) aid_levels_battery_lsc

0x61b3,	// (0x000208b2) battery_pane_stacon_g1_ParamLimits

0x61b3,	// (0x000208b2) battery_pane_stacon_g1

0x61c6,	// (0x000208c5) battery_pane_stacon_g2_ParamLimits

0x61c6,	// (0x000208c5) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x00029df4) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x00029df4) battery_pane_stacon_g

0x6204,	// (0x00020903) navi_icon_pane_stacon

0x6218,	// (0x00020917) navi_navi_pane_stacon

0x6204,	// (0x00020903) navi_text_pane_stacon

0x615c,	// (0x0002085b) control_bottom_pane_stacon_g1

0x622c,	// (0x0002092b) control_bottom_pane_stacon_t1_ParamLimits

0x622c,	// (0x0002092b) control_bottom_pane_stacon_t1

0x8443,	// (0x00022b42) grid_app_pane_ParamLimits

0x8443,	// (0x00022b42) grid_app_pane

0x8467,	// (0x00022b66) scroll_pane_cp15_ParamLimits

0x8467,	// (0x00022b66) scroll_pane_cp15

0x847c,	// (0x00022b7b) cell_app_pane_ParamLimits

0x847c,	// (0x00022b7b) cell_app_pane

0x84a0,	// (0x00022b9f) cell_app_pane_g1_ParamLimits

0x84a0,	// (0x00022b9f) cell_app_pane_g1

0x84c4,	// (0x00022bc3) cell_app_pane_g2_ParamLimits

0x84c4,	// (0x00022bc3) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x00029df9) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x00029df9) cell_app_pane_g

0x84d0,	// (0x00022bcf) cell_app_pane_t1_ParamLimits

0x84d0,	// (0x00022bcf) cell_app_pane_t1

0x84e7,	// (0x00022be6) grid_highlight_pane_ParamLimits

0x84e7,	// (0x00022be6) grid_highlight_pane

0x80e6,	// (0x000227e5) cell_highlight_pane_g1

0x80ee,	// (0x000227ed) cell_highlight_pane_g2

0x80f6,	// (0x000227f5) cell_highlight_pane_g3

0x80fe,	// (0x000227fd) cell_highlight_pane_g4

0x8106,	// (0x00022805) cell_highlight_pane_g5

0x810e,	// (0x0002280d) cell_highlight_pane_g6

0x8116,	// (0x00022815) cell_highlight_pane_g7

0x811e,	// (0x0002281d) cell_highlight_pane_g8

0x8126,	// (0x00022825) cell_highlight_pane_g9

0x7729,	// (0x00021e28) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x00029da7) cell_highlight_pane_g

0x84f8,	// (0x00022bf7) bg_scroll_pane

0x6276,	// (0x00020975) scroll_handle_pane

0x853f,	// (0x00022c3e) scroll_bg_pane_g1

0x8554,	// (0x00022c53) scroll_bg_pane_g2

0x856c,	// (0x00022c6b) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x00029dfe) scroll_bg_pane_g

0x8581,	// (0x00022c80) scroll_handle_focus_pane_ParamLimits

0x8581,	// (0x00022c80) scroll_handle_focus_pane

0x853f,	// (0x00022c3e) scroll_handle_pane_g1

0x858e,	// (0x00022c8d) scroll_handle_pane_g2

0x856c,	// (0x00022c6b) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x00029e05) scroll_handle_pane_g

0x8137,	// (0x00022836) bg_popup_sub_pane_cp21_ParamLimits

0x8137,	// (0x00022836) bg_popup_sub_pane_cp21

0x85a2,	// (0x00022ca1) popup_fep_japan_predictive_window_t1_ParamLimits

0x85a2,	// (0x00022ca1) popup_fep_japan_predictive_window_t1

0x85bc,	// (0x00022cbb) popup_fep_japan_predictive_window_t2_ParamLimits

0x85bc,	// (0x00022cbb) popup_fep_japan_predictive_window_t2

0x85ef,	// (0x00022cee) popup_fep_japan_predictive_window_t3_ParamLimits

0x85ef,	// (0x00022cee) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x00029e0c) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x00029e0c) popup_fep_japan_predictive_window_t

0x7733,	// (0x00021e32) bg_popup_sub_pane_cp23

0x8626,	// (0x00022d25) listscroll_japin_cand_pane

0x862e,	// (0x00022d2d) popup_fep_japan_candidate_window_t1

0x863c,	// (0x00022d3b) candidate_pane_ParamLimits

0x863c,	// (0x00022d3b) candidate_pane

0x864e,	// (0x00022d4d) scroll_pane_cp30

0x8656,	// (0x00022d55) list_single_popup_jap_candidate_pane_ParamLimits

0x8656,	// (0x00022d55) list_single_popup_jap_candidate_pane

0x7733,	// (0x00021e32) list_highlight_pane_cp30

0x866b,	// (0x00022d6a) list_single_popup_jap_candidate_pane_t1

0x867a,	// (0x00022d79) level_1_signal

0x8687,	// (0x00022d86) level_2_signal

0x8694,	// (0x00022d93) level_3_signal

0x86a1,	// (0x00022da0) level_4_signal

0x86ae,	// (0x00022dad) level_5_signal

0x86bb,	// (0x00022dba) level_6_signal

0x86c8,	// (0x00022dc7) level_7_signal

0x867a,	// (0x00022d79) level_1_battery

0x8687,	// (0x00022d86) level_2_battery

0x8694,	// (0x00022d93) level_3_battery

0x86a1,	// (0x00022da0) level_4_battery

0x86ae,	// (0x00022dad) level_5_battery

0x86bb,	// (0x00022dba) level_6_battery

0x86c8,	// (0x00022dc7) level_7_battery

0x870f,	// (0x00022e0e) list_menu_pane_ParamLimits

0x870f,	// (0x00022e0e) list_menu_pane

0x8720,	// (0x00022e1f) scroll_pane_cp25_ParamLimits

0x8720,	// (0x00022e1f) scroll_pane_cp25

0x8739,	// (0x00022e38) list_double2_graphic_pane_cp2_ParamLimits

0x8739,	// (0x00022e38) list_double2_graphic_pane_cp2

0x8739,	// (0x00022e38) list_double2_large_graphic_pane_cp2_ParamLimits

0x8739,	// (0x00022e38) list_double2_large_graphic_pane_cp2

0x8739,	// (0x00022e38) list_double2_pane_cp2_ParamLimits

0x8739,	// (0x00022e38) list_double2_pane_cp2

0x8739,	// (0x00022e38) list_double_graphic_pane_cp2_ParamLimits

0x8739,	// (0x00022e38) list_double_graphic_pane_cp2

0x8739,	// (0x00022e38) list_double_large_graphic_pane_cp2_ParamLimits

0x8739,	// (0x00022e38) list_double_large_graphic_pane_cp2

0x8739,	// (0x00022e38) list_double_number_pane_cp2_ParamLimits

0x8739,	// (0x00022e38) list_double_number_pane_cp2

0x8739,	// (0x00022e38) list_double_pane_cp2_ParamLimits

0x8739,	// (0x00022e38) list_double_pane_cp2

0x875d,	// (0x00022e5c) list_single_2graphic_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_2graphic_pane_cp2

0x875d,	// (0x00022e5c) list_single_graphic_heading_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_graphic_heading_pane_cp2

0x875d,	// (0x00022e5c) list_single_graphic_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_graphic_pane_cp2

0x875d,	// (0x00022e5c) list_single_heading_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_heading_pane_cp2

0x8776,	// (0x00022e75) list_single_large_graphic_pane_cp2_ParamLimits

0x8776,	// (0x00022e75) list_single_large_graphic_pane_cp2

0x875d,	// (0x00022e5c) list_single_number_heading_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_number_heading_pane_cp2

0x875d,	// (0x00022e5c) list_single_number_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_number_pane_cp2

0x875d,	// (0x00022e5c) list_single_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_pane_cp2

0x87cc,	// (0x00022ecb) bg_popup_sub_pane_cp22

0x6328,	// (0x00020a27) popup_side_volume_key_window_g1

0x6352,	// (0x00020a51) popup_side_volume_key_window_t1

0x636e,	// (0x00020a6d) volume_small_pane_cp1

0x7a8e,	// (0x0002218d) bg_popup_sub_pane_cp24_ParamLimits

0x7a8e,	// (0x0002218d) bg_popup_sub_pane_cp24

0x87e2,	// (0x00022ee1) fep_china_uni_candidate_pane_ParamLimits

0x87e2,	// (0x00022ee1) fep_china_uni_candidate_pane

0x87f6,	// (0x00022ef5) fep_china_uni_entry_pane

0x8806,	// (0x00022f05) popup_fep_china_uni_window_g1

0x8822,	// (0x00022f21) fep_china_uni_entry_pane_g1

0x882a,	// (0x00022f29) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00029e39) fep_china_uni_entry_pane_g

0x8832,	// (0x00022f31) fep_entry_item_pane

0x883c,	// (0x00022f3b) fep_candidate_item_pane

0x8844,	// (0x00022f43) fep_china_uni_candidate_pane_g1

0x884c,	// (0x00022f4b) fep_china_uni_candidate_pane_g2

0x8854,	// (0x00022f53) fep_china_uni_candidate_pane_g3

0x885c,	// (0x00022f5b) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00029e3e) fep_china_uni_candidate_pane_g

0x7729,	// (0x00021e28) fep_entry_item_pane_g1

0x8864,	// (0x00022f63) fep_entry_item_pane_t1_ParamLimits

0x8864,	// (0x00022f63) fep_entry_item_pane_t1

0x887a,	// (0x00022f79) fep_candidate_item_pane_t1_ParamLimits

0x887a,	// (0x00022f79) fep_candidate_item_pane_t1

0x888f,	// (0x00022f8e) fep_candidate_item_pane_t2_ParamLimits

0x888f,	// (0x00022f8e) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00029e47) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00029e47) fep_candidate_item_pane_t

0x7813,	// (0x00021f12) list_highlight_pane_cp31_ParamLimits

0x7813,	// (0x00021f12) list_highlight_pane_cp31

0x88a1,	// (0x00022fa0) level_1_signal_lsc

0x88aa,	// (0x00022fa9) level_2_signal_lsc

0x88b3,	// (0x00022fb2) level_3_signal_lsc

0x88bc,	// (0x00022fbb) level_4_signal_lsc

0x88c5,	// (0x00022fc4) level_5_signal_lsc

0x88ce,	// (0x00022fcd) level_6_signal_lsc

0x88d7,	// (0x00022fd6) level_7_signal_lsc

0x88d7,	// (0x00022fd6) level_1_battery_lsc

0x88e0,	// (0x00022fdf) level_2_battery_lsc

0x88e9,	// (0x00022fe8) level_3_battery_lsc

0x88f2,	// (0x00022ff1) level_4_battery_lsc

0x88fb,	// (0x00022ffa) level_5_battery_lsc

0x8904,	// (0x00023003) level_6_battery_lsc

0x88a1,	// (0x00022fa0) level_7_battery_lsc

0x890d,	// (0x0002300c) scroll_handle_focus_pane_g1

0x8916,	// (0x00023015) scroll_handle_focus_pane_g2

0x891f,	// (0x0002301e) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00029e4c) scroll_handle_focus_pane_g

0x5392,	// (0x0001fa91) list_single_2graphic_pane_g1_ParamLimits

0x5392,	// (0x0001fa91) list_single_2graphic_pane_g1

0x4cfe,	// (0x0001f3fd) list_single_2graphic_pane_g2_ParamLimits

0x4cfe,	// (0x0001f3fd) list_single_2graphic_pane_g2

0x4c84,	// (0x0001f383) list_single_2graphic_pane_g3_ParamLimits

0x4c84,	// (0x0001f383) list_single_2graphic_pane_g3

0x539e,	// (0x0001fa9d) list_single_2graphic_pane_g4_ParamLimits

0x539e,	// (0x0001fa9d) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00029e53) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00029e53) list_single_2graphic_pane_g

0x53aa,	// (0x0001faa9) list_single_2graphic_pane_t1_ParamLimits

0x53aa,	// (0x0001faa9) list_single_2graphic_pane_t1

0x53d8,	// (0x0001fad7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x53d8,	// (0x0001fad7) list_double2_graphic_large_graphic_pane_g1

0x4f5f,	// (0x0001f65e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f5f,	// (0x0001f65e) list_double2_graphic_large_graphic_pane_g2

0x4e95,	// (0x0001f594) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4e95,	// (0x0001f594) list_double2_graphic_large_graphic_pane_g3

0x53e8,	// (0x0001fae7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x53e8,	// (0x0001fae7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00029e5c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00029e5c) list_double2_graphic_large_graphic_pane_g

0x53f4,	// (0x0001faf3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x53f4,	// (0x0001faf3) list_double2_graphic_large_graphic_pane_t1

0x540a,	// (0x0001fb09) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x540a,	// (0x0001fb09) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00029e65) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00029e65) list_double2_graphic_large_graphic_pane_t

0x8a67,	// (0x00023166) popup_fast_swap_window_ParamLimits

0x8a67,	// (0x00023166) popup_fast_swap_window

0x8a83,	// (0x00023182) popup_side_volume_key_window

0x8a9f,	// (0x0002319e) stacon_top_pane

0x8aa9,	// (0x000231a8) status_pane_ParamLimits

0x8aa9,	// (0x000231a8) status_pane

0x8a9f,	// (0x0002319e) status_small_pane

0x7733,	// (0x00021e32) control_pane

0x7733,	// (0x00021e32) stacon_bottom_pane

0x8062,	// (0x00022761) scroll_pane_cp121

0x8059,	// (0x00022758) set_content_pane

0x8928,	// (0x00023027) bg_active_tab_pane_g1_cp1

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp1

0x893a,	// (0x00023039) bg_active_tab_pane_g3_cp1

0x8928,	// (0x00023027) bg_passive_tab_pane_g1_cp1

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp1

0x893a,	// (0x00023039) bg_passive_tab_pane_g3_cp1

0x8943,	// (0x00023042) bg_active_tab_pane_g1_cp2

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp2

0x894c,	// (0x0002304b) bg_active_tab_pane_g3_cp2

0x8943,	// (0x00023042) bg_passive_tab_pane_g1_cp2

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp2

0x894c,	// (0x0002304b) bg_passive_tab_pane_g3_cp2

0x8955,	// (0x00023054) bg_active_tab_pane_g1_cp3

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp3

0x895e,	// (0x0002305d) bg_active_tab_pane_g3_cp3

0x8955,	// (0x00023054) bg_passive_tab_pane_g1_cp3

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp3

0x895e,	// (0x0002305d) bg_passive_tab_pane_g3_cp3

0x8967,	// (0x00023066) bg_active_tab_pane_g1_cp4

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp4

0x8972,	// (0x00023071) bg_active_tab_pane_g3_cp4

0x8967,	// (0x00023066) bg_passive_tab_pane_g1_cp4

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp4

0x8972,	// (0x00023071) bg_passive_tab_pane_g3_cp4

0x89bb,	// (0x000230ba) bg_active_tab_pane_g1_cp5

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp5

0x89c4,	// (0x000230c3) bg_active_tab_pane_g3_cp5

0x89bb,	// (0x000230ba) bg_passive_tab_pane_g1_cp5

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp5

0x89c4,	// (0x000230c3) bg_passive_tab_pane_g3_cp5

0x89cd,	// (0x000230cc) list_set_graphic_pane_ParamLimits

0x89cd,	// (0x000230cc) list_set_graphic_pane

0x7733,	// (0x00021e32) bg_set_opt_pane_cp4

0x89ea,	// (0x000230e9) list_set_graphic_pane_g1_ParamLimits

0x89ea,	// (0x000230e9) list_set_graphic_pane_g1

0x89f6,	// (0x000230f5) list_set_graphic_pane_g2_ParamLimits

0x89f6,	// (0x000230f5) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00029e6a) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00029e6a) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0002a1d4) volume_small_pane_cp_g

0x8a1a,	// (0x00023119) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a1a,	// (0x00023119) list_double2_large_graphic_pane_g1_cp2

0x8a26,	// (0x00023125) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a26,	// (0x00023125) list_double2_large_graphic_pane_g2_cp2

0x8a37,	// (0x00023136) list_double2_large_graphic_pane_g3_cp2

0x8a3f,	// (0x0002313e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a3f,	// (0x0002313e) list_double2_large_graphic_pane_t1_cp2

0x8a55,	// (0x00023154) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a55,	// (0x00023154) list_double2_large_graphic_pane_t2_cp2

0xac34,	// (0x00025333) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xac34,	// (0x00025333) list_double_large_graphic_pane_g1_cp2

0xac45,	// (0x00025344) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac45,	// (0x00025344) list_double_large_graphic_pane_g2_cp2

0x8bc5,	// (0x000232c4) list_double_large_graphic_pane_g3_cp2

0xac56,	// (0x00025355) list_double_large_graphic_pane_g4_cp

0xac5e,	// (0x0002535d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac5e,	// (0x0002535d) list_double_large_graphic_pane_t1_cp2

0xac75,	// (0x00025374) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac75,	// (0x00025374) list_double_large_graphic_pane_t2_cp2

0x8ab7,	// (0x000231b6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ab7,	// (0x000231b6) list_double2_graphic_pane_g1_cp2

0x8ac5,	// (0x000231c4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8ac5,	// (0x000231c4) list_double2_graphic_pane_g2_cp2

0x8ad6,	// (0x000231d5) list_double2_graphic_pane_g3_cp2

0x8ae0,	// (0x000231df) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8ae0,	// (0x000231df) list_double2_graphic_pane_t1_cp2

0x8af6,	// (0x000231f5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8af6,	// (0x000231f5) list_double2_graphic_pane_t2_cp2

0x8b08,	// (0x00023207) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b08,	// (0x00023207) list_single_number_heading_pane_g1_cp2

0x8b14,	// (0x00023213) list_single_number_heading_pane_g2_cp2

0x8b1c,	// (0x0002321b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b1c,	// (0x0002321b) list_single_number_heading_pane_t1_cp2

0x8b32,	// (0x00023231) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b32,	// (0x00023231) list_single_number_heading_pane_t2_cp2

0x8b44,	// (0x00023243) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b44,	// (0x00023243) list_single_number_heading_pane_t3_cp2

0x8b08,	// (0x00023207) list_single_heading_pane_g1_cp2_ParamLimits

0x8b08,	// (0x00023207) list_single_heading_pane_g1_cp2

0x8b14,	// (0x00023213) list_single_heading_pane_g2_cp2

0x8b1c,	// (0x0002321b) list_single_heading_pane_t1_cp2_ParamLimits

0x8b1c,	// (0x0002321b) list_single_heading_pane_t1_cp2

0xaa3c,	// (0x0002513b) list_single_heading_pane_t2_cp2_ParamLimits

0xaa3c,	// (0x0002513b) list_single_heading_pane_t2_cp2

0xa97e,	// (0x0002507d) list_double_graphic_pane_g1_cp2_ParamLimits

0xa97e,	// (0x0002507d) list_double_graphic_pane_g1_cp2

0xa98a,	// (0x00025089) list_double_graphic_pane_g2_cp2_ParamLimits

0xa98a,	// (0x00025089) list_double_graphic_pane_g2_cp2

0xa999,	// (0x00025098) list_double_graphic_pane_g3_cp2

0xa9a1,	// (0x000250a0) list_double_graphic_pane_t1_cp2_ParamLimits

0xa9a1,	// (0x000250a0) list_double_graphic_pane_t1_cp2

0xa9b7,	// (0x000250b6) list_double_graphic_pane_t2_cp2_ParamLimits

0xa9b7,	// (0x000250b6) list_double_graphic_pane_t2_cp2

0x8bb9,	// (0x000232b8) list_double_number_pane_g1_cp2_ParamLimits

0x8bb9,	// (0x000232b8) list_double_number_pane_g1_cp2

0x8bc5,	// (0x000232c4) list_double_number_pane_g2_cp2

0xa942,	// (0x00025041) list_double_number_pane_t1_cp2_ParamLimits

0xa942,	// (0x00025041) list_double_number_pane_t1_cp2

0xa956,	// (0x00025055) list_double_number_pane_t2_cp2_ParamLimits

0xa956,	// (0x00025055) list_double_number_pane_t2_cp2

0xa96c,	// (0x0002506b) list_double_number_pane_t3_cp2_ParamLimits

0xa96c,	// (0x0002506b) list_double_number_pane_t3_cp2

0xa82b,	// (0x00024f2a) list_single_graphic_pane_g1_cp2_ParamLimits

0xa82b,	// (0x00024f2a) list_single_graphic_pane_g1_cp2

0x8c1d,	// (0x0002331c) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c1d,	// (0x0002331c) list_single_graphic_pane_g2_cp2

0x8c29,	// (0x00023328) list_single_graphic_pane_g3_cp2

0xa801,	// (0x00024f00) list_single_graphic_pane_t1_cp2_ParamLimits

0xa801,	// (0x00024f00) list_single_graphic_pane_t1_cp2

0x8c1d,	// (0x0002331c) list_single_number_pane_g1_cp2_ParamLimits

0x8c1d,	// (0x0002331c) list_single_number_pane_g1_cp2

0x8c29,	// (0x00023328) list_single_number_pane_g2_cp2

0xa801,	// (0x00024f00) list_single_number_pane_t1_cp2_ParamLimits

0xa801,	// (0x00024f00) list_single_number_pane_t1_cp2

0xa817,	// (0x00024f16) list_single_number_pane_t2_cp2_ParamLimits

0xa817,	// (0x00024f16) list_single_number_pane_t2_cp2

0x8a26,	// (0x00023125) list_double2_pane_g1_cp2_ParamLimits

0x8a26,	// (0x00023125) list_double2_pane_g1_cp2

0x8a37,	// (0x00023136) list_double2_pane_g2_cp2

0x8b91,	// (0x00023290) list_double2_pane_t1_cp2_ParamLimits

0x8b91,	// (0x00023290) list_double2_pane_t1_cp2

0x8ba7,	// (0x000232a6) list_double2_pane_t2_cp2_ParamLimits

0x8ba7,	// (0x000232a6) list_double2_pane_t2_cp2

0x8bb9,	// (0x000232b8) list_double_pane_g1_cp2_ParamLimits

0x8bb9,	// (0x000232b8) list_double_pane_g1_cp2

0x8bc5,	// (0x000232c4) list_double_pane_g2_cp2

0x8bcd,	// (0x000232cc) list_double_pane_t1_cp2_ParamLimits

0x8bcd,	// (0x000232cc) list_double_pane_t1_cp2

0x8be3,	// (0x000232e2) list_double_pane_t2_cp2_ParamLimits

0x8be3,	// (0x000232e2) list_double_pane_t2_cp2

0x8c0d,	// (0x0002330c) list_single_pane_cp2_g3

0x8c1d,	// (0x0002331c) list_single_pane_g1_cp2_ParamLimits

0x8c1d,	// (0x0002331c) list_single_pane_g1_cp2

0x8c29,	// (0x00023328) list_single_pane_g2_cp2

0x8c31,	// (0x00023330) list_single_pane_t1_cp2_ParamLimits

0x8c31,	// (0x00023330) list_single_pane_t1_cp2

0x8c49,	// (0x00023348) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c49,	// (0x00023348) list_single_large_graphic_pane_g1_cp2

0x8c55,	// (0x00023354) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8c55,	// (0x00023354) list_single_large_graphic_pane_g2_cp2

0x8c61,	// (0x00023360) list_single_large_graphic_pane_g3_cp2

0x8c69,	// (0x00023368) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8c69,	// (0x00023368) list_single_large_graphic_pane_g4_cp1

0x8c83,	// (0x00023382) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8c83,	// (0x00023382) list_single_large_graphic_pane_t1_cp2

0xa7cd,	// (0x00024ecc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa7cd,	// (0x00024ecc) list_single_graphic_heading_pane_g1_cp2

0xa79a,	// (0x00024e99) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa79a,	// (0x00024e99) list_single_graphic_heading_pane_g4_cp2

0x8c29,	// (0x00023328) list_single_graphic_heading_pane_g5_cp2

0xa7d9,	// (0x00024ed8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7d9,	// (0x00024ed8) list_single_graphic_heading_pane_t1_cp2

0xa7ef,	// (0x00024eee) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7ef,	// (0x00024eee) list_single_graphic_heading_pane_t2_cp2

0xa78e,	// (0x00024e8d) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa78e,	// (0x00024e8d) list_single_2graphic_pane_g1_cp2

0xa79a,	// (0x00024e99) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa79a,	// (0x00024e99) list_single_2graphic_pane_g2_cp2

0x8c29,	// (0x00023328) list_single_2graphic_pane_g3_cp2

0xa7ab,	// (0x00024eaa) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa7ab,	// (0x00024eaa) list_single_2graphic_pane_g4_cp2

0xa7b7,	// (0x00024eb6) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa7b7,	// (0x00024eb6) list_single_2graphic_pane_t1_cp2

0x7729,	// (0x00021e28) list_highlight_pane_g10_cp1

0xa35a,	// (0x00024a59) list_highlight_pane_g1_cp1

0xa362,	// (0x00024a61) list_highlight_pane_g2_cp1

0xa36a,	// (0x00024a69) list_highlight_pane_g3_cp1

0xa372,	// (0x00024a71) list_highlight_pane_g4_cp1

0xa37a,	// (0x00024a79) list_highlight_pane_g5_cp1

0xa382,	// (0x00024a81) list_highlight_pane_g6_cp1

0xa38a,	// (0x00024a89) list_highlight_pane_g7_cp1

0xa392,	// (0x00024a91) list_highlight_pane_g8_cp1

0xa39a,	// (0x00024a99) list_highlight_pane_g9_cp1

0xa27a,	// (0x00024979) form_field_slider_pane_t3

0xa288,	// (0x00024987) form_field_slider_pane_t4

0xa296,	// (0x00024995) slider_form_pane_ParamLimits

0xa296,	// (0x00024995) slider_form_pane

0x7733,	// (0x00021e32) control_abbreviations

0x7733,	// (0x00021e32) control_conventions

0x7733,	// (0x00021e32) control_definitions

0x7733,	// (0x00021e32) format_table_attribute

0xaa86,	// (0x00025185) bg_popup_preview_window_pane_g9

0x7733,	// (0x00021e32) format_table_data2

0x7733,	// (0x00021e32) format_table_data3

0x7733,	// (0x00021e32) format_table_data_example

0x0008,

0x7733,	// (0x00021e32) intro_purpose

0xf900,	// (0x00029fff) bg_popup_preview_window_pane_g

0x7733,	// (0x00021e32) texts_category

0x7733,	// (0x00021e32) texts_graphics

0x8c99,	// (0x00023398) text_digital

0x8ca8,	// (0x000233a7) text_primary

0x8cb7,	// (0x000233b6) text_primary_small

0x8cc6,	// (0x000233c5) text_secondary

0x8cd5,	// (0x000233d4) text_title

0xb1ae,	// (0x000258ad) bg_passive_tab_pane_g1_cp3_srt

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp3_srt

0xb1b7,	// (0x000258b6) bg_passive_tab_pane_g3_cp3_srt

0x7813,	// (0x00021f12) bg_active_tab_pane_cp3_srt_ParamLimits

0x7813,	// (0x00021f12) bg_active_tab_pane_cp3_srt

0xb1c0,	// (0x000258bf) tabs_4_active_pane_srt_g1

0xb1c8,	// (0x000258c7) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c8,	// (0x000258c7) tabs_4_active_pane_srt_t1

0xb1ae,	// (0x000258ad) bg_active_tab_pane_g1_cp3_copy1

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp3_copy1

0xb1b7,	// (0x000258b6) bg_active_tab_pane_g3_cp3_copy1

0x7813,	// (0x00021f12) tabs_2_long_active_pane_srt_ParamLimits

0x7813,	// (0x00021f12) tabs_2_long_active_pane_srt

0x7813,	// (0x00021f12) tabs_2_long_passive_pane_srt_ParamLimits

0x7813,	// (0x00021f12) tabs_2_long_passive_pane_srt

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp4_srt

0xaeca,	// (0x000255c9) bg_passive_tab_pane_g1_cp4_srt

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp4_srt

0xaed3,	// (0x000255d2) bg_passive_tab_pane_g3_cp4_srt

0x824c,	// (0x0002294b) bg_active_tab_pane_cp4_srt_ParamLimits

0x824c,	// (0x0002294b) bg_active_tab_pane_cp4_srt

0xaedc,	// (0x000255db) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaedc,	// (0x000255db) tabs_2_long_active_pane_srt_t1

0xaeca,	// (0x000255c9) bg_active_tab_pane_g1_cp4_srt

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp4_srt

0xaed3,	// (0x000255d2) bg_active_tab_pane_g3_cp4_srt

0x7a8e,	// (0x0002218d) tabs_3_long_active_pane_srt_ParamLimits

0x7a8e,	// (0x0002218d) tabs_3_long_active_pane_srt

0x7a8e,	// (0x0002218d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7a8e,	// (0x0002218d) tabs_3_long_passive_pane_cp_srt

0x7a8e,	// (0x0002218d) tabs_3_long_passive_pane_srt_ParamLimits

0x7a8e,	// (0x0002218d) tabs_3_long_passive_pane_srt

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp5_srt

0x89bb,	// (0x000230ba) bg_passive_tab_pane_g1_cp5_srt

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp5_srt

0x89c4,	// (0x000230c3) bg_passive_tab_pane_g3_cp5_srt

0x824c,	// (0x0002294b) bg_active_tab_pane_cp5_srt_ParamLimits

0x824c,	// (0x0002294b) bg_active_tab_pane_cp5_srt

0xaeb8,	// (0x000255b7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaeb8,	// (0x000255b7) tabs_3_long_active_pane_srt_t1

0x89bb,	// (0x000230ba) bg_active_tab_pane_g1_cp5_srt

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp5_srt

0x89c4,	// (0x000230c3) bg_active_tab_pane_g3_cp5_srt

0xaeaa,	// (0x000255a9) navi_text_pane_srt_t1

0xaea2,	// (0x000255a1) navi_icon_pane_srt_g1

0x8ea8,	// (0x000235a7) midp_editing_number_pane_srt

0x8ce4,	// (0x000233e3) midp_ticker_pane_srt

0x8eb0,	// (0x000235af) midp_ticker_pane_srt_g1

0x8eb8,	// (0x000235b7) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x00029e89) midp_ticker_pane_srt_g

0x8ec0,	// (0x000235bf) midp_ticker_pane_srt_t1

0xae93,	// (0x00025592) midp_editing_number_pane_t1_copy1

0x8cec,	// (0x000233eb) listscroll_midp_pane

0x8cec,	// (0x000233eb) midp_form_pane

0x8d5a,	// (0x00023459) midp_info_popup_window_ParamLimits

0x8d5a,	// (0x00023459) midp_info_popup_window

0x8137,	// (0x00022836) bg_popup_sub_pane_cp50_ParamLimits

0x8137,	// (0x00022836) bg_popup_sub_pane_cp50

0x9f92,	// (0x00024691) listscroll_midp_info_pane_ParamLimits

0x9f92,	// (0x00024691) listscroll_midp_info_pane

0x9f7a,	// (0x00024679) listscroll_form_midp_pane_ParamLimits

0x9f7a,	// (0x00024679) listscroll_form_midp_pane

0x9f86,	// (0x00024685) scroll_bar_cp050

0x9f5a,	// (0x00024659) list_midp_pane

0xbbca,	// (0x000262c9) signal_pane_g2_cp

0x9e94,	// (0x00024593) listscroll_midp_info_pane_t1_ParamLimits

0x9e94,	// (0x00024593) listscroll_midp_info_pane_t1

0x9eac,	// (0x000245ab) listscroll_midp_info_pane_t2_ParamLimits

0x9eac,	// (0x000245ab) listscroll_midp_info_pane_t2

0x9eea,	// (0x000245e9) listscroll_midp_info_pane_t3_ParamLimits

0x9eea,	// (0x000245e9) listscroll_midp_info_pane_t3

0x9f24,	// (0x00024623) listscroll_midp_info_pane_t4_ParamLimits

0x9f24,	// (0x00024623) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00029f3a) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00029f3a) listscroll_midp_info_pane_t

0x81f9,	// (0x000228f8) scroll_pane_cp21

0x9e32,	// (0x00024531) form_midp_field_choice_group_pane

0x9e3b,	// (0x0002453a) form_midp_field_text_pane

0x9e7a,	// (0x00024579) form_midp_field_time_pane

0x9e82,	// (0x00024581) form_midp_gauge_slider_pane

0x9e8b,	// (0x0002458a) form_midp_gauge_wait_pane

0x7733,	// (0x00021e32) form_midp_image_pane

0x551b,	// (0x0001fc1a) list_single_midp_pane_ParamLimits

0x551b,	// (0x0001fc1a) list_single_midp_pane

0x9dea,	// (0x000244e9) form_midp_field_text_pane_t1

0x9bdc,	// (0x000242db) input_focus_pane_cp050

0x9e21,	// (0x00024520) list_midp_form_text_pane

0x9db9,	// (0x000244b8) form_midp_field_choice_group_pane_t1

0x9dc7,	// (0x000244c6) input_focus_pane_cp051

0x9ddb,	// (0x000244da) list_midp_choice_pane

0x7733,	// (0x00021e32) status_idle_pane

0x9d9d,	// (0x0002449c) form_midp_field_time_pane_t1

0x7729,	// (0x00021e28) wait_anim_pane_g2_copy1

0x9dab,	// (0x000244aa) form_midp_field_time_pane_t2

0x0001,

0x8e08,	// (0x00023507) aid_navinavi_width_2_pane

0xf836,	// (0x00029f35) form_midp_field_time_pane_t

0x7733,	// (0x00021e32) input_focus_pane_cp052

0x7733,	// (0x00021e32) bg_input_focus_pane_cp040

0x9d5d,	// (0x0002445c) form_midp_gauge_slider_pane_t1

0x9d6b,	// (0x0002446a) form_midp_gauge_slider_pane_t2

0x9d79,	// (0x00024478) form_midp_gauge_slider_pane_t3

0x9d87,	// (0x00024486) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00029f2c) form_midp_gauge_slider_pane_t

0x9d95,	// (0x00024494) form_midp_slider_pane

0x7813,	// (0x00021f12) bg_input_focus_pane_cp041_ParamLimits

0x7813,	// (0x00021f12) bg_input_focus_pane_cp041

0x9d2a,	// (0x00024429) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d2a,	// (0x00024429) form_midp_gauge_wait_pane_t1

0x9d3c,	// (0x0002443b) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d3c,	// (0x0002443b) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00029f27) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00029f27) form_midp_gauge_wait_pane_t

0x9d4e,	// (0x0002444d) form_midp_wait_pane_ParamLimits

0x9d4e,	// (0x0002444d) form_midp_wait_pane

0x9cf4,	// (0x000243f3) form_midp_image_pane_g1

0x9cfd,	// (0x000243fc) form_midp_image_pane_t1

0x9d0c,	// (0x0002440b) form_midp_image_pane_t2

0x9d1b,	// (0x0002441a) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00029f20) form_midp_image_pane_t

0x9ceb,	// (0x000243ea) list_single_midp_pane_g1

0x550c,	// (0x0001fc0b) list_single_midp_pane_t1

0x9cc3,	// (0x000243c2) list_midp_form_item_pane_ParamLimits

0x9cc3,	// (0x000243c2) list_midp_form_item_pane

0x8db0,	// (0x000234af) list_midp_form_item_pane_t1

0x8dbf,	// (0x000234be) midp_ticker_pane_g1

0x8dcb,	// (0x000234ca) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00029e6f) midp_ticker_pane_g

0x8dd7,	// (0x000234d6) midp_ticker_pane_t1

0xb0e4,	// (0x000257e3) midp_editing_number_pane_t1

0xb0c2,	// (0x000257c1) midp_editing_number_pane

0xb0d1,	// (0x000257d0) midp_ticker_pane

0xae83,	// (0x00025582) ai_message_heading_pane

0x7733,	// (0x00021e32) bg_popup_window_pane_cp14

0xae8b,	// (0x0002558a) listscroll_ai_message_pane

0xae0d,	// (0x0002550c) ai_message_heading_pane_g1_ParamLimits

0xae0d,	// (0x0002550c) ai_message_heading_pane_g1

0xae19,	// (0x00025518) ai_message_heading_pane_g2_ParamLimits

0xae19,	// (0x00025518) ai_message_heading_pane_g2

0xae25,	// (0x00025524) ai_message_heading_pane_g3_ParamLimits

0xae25,	// (0x00025524) ai_message_heading_pane_g3

0xae31,	// (0x00025530) ai_message_heading_pane_g4_ParamLimits

0xae31,	// (0x00025530) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002a061) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002a061) ai_message_heading_pane_g

0xae3d,	// (0x0002553c) ai_message_heading_pane_t1_ParamLimits

0xae3d,	// (0x0002553c) ai_message_heading_pane_t1

0xae57,	// (0x00025556) ai_message_heading_pane_t2_ParamLimits

0xae57,	// (0x00025556) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0002a06a) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0002a06a) ai_message_heading_pane_t

0xae69,	// (0x00025568) bg_popup_heading_pane_cp1_ParamLimits

0xae69,	// (0x00025568) bg_popup_heading_pane_cp1

0xadfb,	// (0x000254fa) list_ai_message_pane_ParamLimits

0xadfb,	// (0x000254fa) list_ai_message_pane

0x81f9,	// (0x000228f8) scroll_pane_cp10

0xad97,	// (0x00025496) list_ai_message_pane_g1

0xad9f,	// (0x0002549e) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0002a03e) list_ai_message_pane_g

0xada7,	// (0x000254a6) list_ai_message_pane_t1_ParamLimits

0xada7,	// (0x000254a6) list_ai_message_pane_t1

0xadbc,	// (0x000254bb) list_ai_message_pane_t2_ParamLimits

0xadbc,	// (0x000254bb) list_ai_message_pane_t2

0xadd1,	// (0x000254d0) list_ai_message_pane_t3_ParamLimits

0xadd1,	// (0x000254d0) list_ai_message_pane_t3

0xade6,	// (0x000254e5) list_ai_message_pane_t4_ParamLimits

0xade6,	// (0x000254e5) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002a043) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002a043) list_ai_message_pane_t

0xad82,	// (0x00025481) cell_ai_soft_ind_pane_ParamLimits

0xad82,	// (0x00025481) cell_ai_soft_ind_pane

0x8de9,	// (0x000234e8) cell_ai_soft_ind_pane_g1_ParamLimits

0x8de9,	// (0x000234e8) cell_ai_soft_ind_pane_g1

0x7733,	// (0x00021e32) grid_highlight_cp1

0x8df6,	// (0x000234f5) text_secondary_cp56_ParamLimits

0x8df6,	// (0x000234f5) text_secondary_cp56

0xad57,	// (0x00025456) example_general_pane_ParamLimits

0xad57,	// (0x00025456) example_general_pane

0xad63,	// (0x00025462) example_parent_pane_g1_ParamLimits

0xad63,	// (0x00025462) example_parent_pane_g1

0xad6f,	// (0x0002546e) example_parent_pane_t1_ParamLimits

0xad6f,	// (0x0002546e) example_parent_pane_t1

0x93d3,	// (0x00023ad2) popup_preview_text_window_ParamLimits

0x93d3,	// (0x00023ad2) popup_preview_text_window

0x8c15,	// (0x00023314) list_single_pane_cp2_g4

0x7b44,	// (0x00022243) bg_popup_preview_window_pane_ParamLimits

0x7b44,	// (0x00022243) bg_popup_preview_window_pane

0xaa8e,	// (0x0002518d) popup_preview_text_window_t1_ParamLimits

0xaa8e,	// (0x0002518d) popup_preview_text_window_t1

0xaaac,	// (0x000251ab) popup_preview_text_window_t2_ParamLimits

0xaaac,	// (0x000251ab) popup_preview_text_window_t2

0xaaf5,	// (0x000251f4) popup_preview_text_window_t3_ParamLimits

0xaaf5,	// (0x000251f4) popup_preview_text_window_t3

0xab3a,	// (0x00025239) popup_preview_text_window_t4_ParamLimits

0xab3a,	// (0x00025239) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002a012) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002a012) popup_preview_text_window_t

0xabb8,	// (0x000252b7) scroll_pane_cp11

0x9aec,	// (0x000241eb) bg_popup_preview_window_pane_g1

0xaa4e,	// (0x0002514d) bg_popup_preview_window_pane_g2

0xaa56,	// (0x00025155) bg_popup_preview_window_pane_g3

0xaa5e,	// (0x0002515d) bg_popup_preview_window_pane_g4

0xaa66,	// (0x00025165) bg_popup_preview_window_pane_g5

0xaa6e,	// (0x0002516d) bg_popup_preview_window_pane_g6

0xaa76,	// (0x00025175) bg_popup_preview_window_pane_g7

0xaa7e,	// (0x0002517d) bg_popup_preview_window_pane_g8

0x5c6d,	// (0x0002036c) aid_popup_width_pane

0x93b1,	// (0x00023ab0) popup_midp_note_alarm_window_ParamLimits

0x93b1,	// (0x00023ab0) popup_midp_note_alarm_window

0x8073,	// (0x00022772) data_form_pane_ParamLimits

0x51ec,	// (0x0001f8eb) form_field_data_pane_g1

0x51f6,	// (0x0001f8f5) form_field_data_pane_t1_ParamLimits

0x807f,	// (0x0002277e) input_focus_pane_ParamLimits

0x808d,	// (0x0002278c) data_form_wide_pane_ParamLimits

0x520e,	// (0x0001f90d) form_field_data_wide_pane_g1

0x521a,	// (0x0001f919) form_field_data_wide_pane_t1_ParamLimits

0x7df0,	// (0x000224ef) input_focus_pane_cp6_ParamLimits

0x81a6,	// (0x000228a5) input_popup_find_pane_g1_ParamLimits

0x81a6,	// (0x000228a5) input_popup_find_pane_g1

0x61d7,	// (0x000208d6) aid_navi_side_left_pane

0x61ec,	// (0x000208eb) aid_navi_side_right_pane

0xa455,	// (0x00024b54) bg_popup_window_pane_cp30_ParamLimits

0xa455,	// (0x00024b54) bg_popup_window_pane_cp30

0xa4cf,	// (0x00024bce) popup_midp_note_alarm_window_g1_ParamLimits

0xa4cf,	// (0x00024bce) popup_midp_note_alarm_window_g1

0xa50b,	// (0x00024c0a) popup_midp_note_alarm_window_t1_ParamLimits

0xa50b,	// (0x00024c0a) popup_midp_note_alarm_window_t1

0xa5ac,	// (0x00024cab) popup_midp_note_alarm_window_t2_ParamLimits

0xa5ac,	// (0x00024cab) popup_midp_note_alarm_window_t2

0xa65a,	// (0x00024d59) popup_midp_note_alarm_window_t3_ParamLimits

0xa65a,	// (0x00024d59) popup_midp_note_alarm_window_t3

0xa68c,	// (0x00024d8b) popup_midp_note_alarm_window_t4_ParamLimits

0xa68c,	// (0x00024d8b) popup_midp_note_alarm_window_t4

0xa6b2,	// (0x00024db1) popup_midp_note_alarm_window_t5_ParamLimits

0xa6b2,	// (0x00024db1) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x00029faf) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x00029faf) popup_midp_note_alarm_window_t

0xa75e,	// (0x00024e5d) wait_bar_pane_cp1_ParamLimits

0xa75e,	// (0x00024e5d) wait_bar_pane_cp1

0x7733,	// (0x00021e32) wait_anim_pane_copy1

0x7733,	// (0x00021e32) wait_border_pane_copy1

0xa13b,	// (0x0002483a) wait_border_pane_g1_copy1

0x5234,	// (0x0001f933) form_field_popup_pane_g1

0x523c,	// (0x0001f93b) form_field_popup_pane_t1_ParamLimits

0x807f,	// (0x0002277e) input_focus_pane_cp7_ParamLimits

0x80b9,	// (0x000227b8) list_form_pane_ParamLimits

0x5254,	// (0x0001f953) form_field_popup_wide_pane_g1

0x525c,	// (0x0001f95b) form_field_popup_wide_pane_t1_ParamLimits

0x807f,	// (0x0002277e) input_focus_pane_cp8_ParamLimits

0x80c5,	// (0x000227c4) list_form_wide_pane_ParamLimits

0xb23a,	// (0x00025939) aid_size_cell_graphic_pane

0x52e6,	// (0x0001f9e5) data_form_pane_t1_ParamLimits

0x5575,	// (0x0001fc74) data_form_wide_pane_t1_ParamLimits

0x96c0,	// (0x00023dbf) bg_status_flat_pane

0x7773,	// (0x00021e72) title_pane_t1_ParamLimits

0x77db,	// (0x00021eda) title_pane_t2_ParamLimits

0x7801,	// (0x00021f00) title_pane_t3_ParamLimits

0xf573,	// (0x00029c72) title_pane_t_ParamLimits

0x867a,	// (0x00022d79) level_1_signal_ParamLimits

0x8687,	// (0x00022d86) level_2_signal_ParamLimits

0x8694,	// (0x00022d93) level_3_signal_ParamLimits

0x86a1,	// (0x00022da0) level_4_signal_ParamLimits

0x86ae,	// (0x00022dad) level_5_signal_ParamLimits

0x86bb,	// (0x00022dba) level_6_signal_ParamLimits

0x86c8,	// (0x00022dc7) level_7_signal_ParamLimits

0x867a,	// (0x00022d79) level_1_battery_ParamLimits

0x8687,	// (0x00022d86) level_2_battery_ParamLimits

0x8694,	// (0x00022d93) level_3_battery_ParamLimits

0x86a1,	// (0x00022da0) level_4_battery_ParamLimits

0x86ae,	// (0x00022dad) level_5_battery_ParamLimits

0x86bb,	// (0x00022dba) level_6_battery_ParamLimits

0x86c8,	// (0x00022dc7) level_7_battery_ParamLimits

0xa35a,	// (0x00024a59) bg_status_flat_pane_g1

0xa362,	// (0x00024a61) bg_status_flat_pane_g2

0xa36a,	// (0x00024a69) bg_status_flat_pane_g3

0xa372,	// (0x00024a71) bg_status_flat_pane_g4

0xa37a,	// (0x00024a79) bg_status_flat_pane_g5

0xa382,	// (0x00024a81) bg_status_flat_pane_g6

0xa38a,	// (0x00024a89) bg_status_flat_pane_g7

0x7829,	// (0x00021f28) tabs_3_active_pane_t1_ParamLimits

0x7829,	// (0x00021f28) tabs_3_passive_pane_t1_ParamLimits

0x7843,	// (0x00021f42) tabs_4_active_pane_t1_ParamLimits

0x7843,	// (0x00021f42) tabs_4_1_passive_pane_t1_ParamLimits

0x823a,	// (0x00022939) tabs_2_active_pane_t1_ParamLimits

0x823a,	// (0x00022939) tabs_2_passive_pane_t1_ParamLimits

0x824c,	// (0x0002294b) bg_active_tab_pane_cp4_ParamLimits

0x825a,	// (0x00022959) tabs_2_long_active_pane_t1_ParamLimits

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp4_ParamLimits

0x672e,	// (0x00020e2d) list_single_midp_graphic_pane_t1_ParamLimits

0x824c,	// (0x0002294b) bg_active_tab_pane_cp5_ParamLimits

0x8279,	// (0x00022978) tabs_3_long_active_pane_t1_ParamLimits

0x826d,	// (0x0002296c) bg_passive_tab_pane_cp5_ParamLimits

0x672e,	// (0x00020e2d) list_single_midp_graphic_pane_t1

0x96c0,	// (0x00023dbf) bg_status_flat_pane_ParamLimits

0x9783,	// (0x00023e82) indicator_pane_cp2_ParamLimits

0x9783,	// (0x00023e82) indicator_pane_cp2

0x98a7,	// (0x00023fa6) navi_pane_srt_ParamLimits

0x98a7,	// (0x00023fa6) navi_pane_srt

0x98cb,	// (0x00023fca) popup_clock_digital_analogue_window_cp1

0x78f0,	// (0x00021fef) indicator_pane_t1

0x8ce4,	// (0x000233e3) copy_highlight_pane

0x8ce4,	// (0x000233e3) cursor_graphics_pane

0x8ce4,	// (0x000233e3) graphic_within_text_pane

0x8ce4,	// (0x000233e3) link_highlight_pane

0xab7b,	// (0x0002527a) popup_preview_text_window_t5_ParamLimits

0xab7b,	// (0x0002527a) popup_preview_text_window_t5

0x8e10,	// (0x0002350f) cursor_digital_pane

0x8e10,	// (0x0002350f) cursor_primary_pane

0x8e21,	// (0x00023520) cursor_primary_small_pane

0x8e29,	// (0x00023528) cursor_secondary_pane

0x8e31,	// (0x00023530) cursor_title_pane

0x8e10,	// (0x0002350f) link_highlight_digital_pane

0x8e18,	// (0x00023517) link_highlight_primary_pane

0x8e21,	// (0x00023520) link_highlight_primary_small_pane

0x8e29,	// (0x00023528) link_highlight_secondary_pane

0x8e31,	// (0x00023530) link_highlight_title_pane

0x8e10,	// (0x0002350f) copy_highlight_digital_pane

0x8e10,	// (0x0002350f) copy_highlight_primary_pane

0x8e21,	// (0x00023520) copy_highlight_primary_small_pane

0x8e29,	// (0x00023528) copy_highlight_secondary_pane

0x8e31,	// (0x00023530) copy_highlight_title_pane

0x8e29,	// (0x00023528) graphic_text_digital_pane

0xa3f8,	// (0x00024af7) graphic_text_primary_pane

0xa401,	// (0x00024b00) graphic_text_primary_small_pane

0x8e21,	// (0x00023520) graphic_text_secondary_pane

0x8e10,	// (0x0002350f) graphic_text_title_pane

0x8e39,	// (0x00023538) cursor_primary_pane_g1

0xa3ea,	// (0x00024ae9) cursor_text_primary_t1

0xa3d2,	// (0x00024ad1) cursor_primary_small_pane_g1

0xa3dc,	// (0x00024adb) cursor_text_primary_small_t1

0xa3ba,	// (0x00024ab9) cursor_primary_small_pane_g1_copy1

0xa3c4,	// (0x00024ac3) cursor_text_primary_small_t1_copy1

0xa3a2,	// (0x00024aa1) cursor_text_title_t1

0xa3b0,	// (0x00024aaf) cursor_title_pane_g1

0x8e39,	// (0x00023538) cursor_digital_pane_g1

0x8e43,	// (0x00023542) cursor_text_digital_t1

0x8e68,	// (0x00023567) link_highlight_primary_pane_g1

0xa34b,	// (0x00024a4a) link_highlight_primary_pane_t1

0x8e51,	// (0x00023550) link_highlight_primary_small_pane_g1

0x8e59,	// (0x00023558) link_highlight_primary_small_pane_t1

0x8e68,	// (0x00023567) link_highlight_secondary_pane_g1

0x8e70,	// (0x0002356f) link_highlight_secondary_pane_t1

0xa2bf,	// (0x000249be) link_highlight_title_pane_g1

0xa2c7,	// (0x000249c6) link_highlight_title_pane_t1

0xa2a8,	// (0x000249a7) link_highlight_digital_pane_g1

0xa2b0,	// (0x000249af) link_highlight_digital_pane_t1

0xa180,	// (0x0002487f) copy_highlight_primary_pane_g1

0xa188,	// (0x00024887) copy_highlight_primary_pane_t1

0xa15a,	// (0x00024859) copy_highlight_primary_small_pane_g1

0xa171,	// (0x00024870) copy_highlight_primary_small_pane_t1

0x8e7f,	// (0x0002357e) copy_highlight_secondary_pane_g1

0x8e87,	// (0x00023586) copy_highlight_secondary_pane_t1

0xa15a,	// (0x00024859) copy_highlight_title_pane_g1

0xa162,	// (0x00024861) copy_highlight_title_pane_t1

0xa180,	// (0x0002487f) copy_highlight_digital_pane_g1

0xb404,	// (0x00025b03) copy_highlight_digital_pane_t1

0xb358,	// (0x00025a57) graphic_text_primary_pane_g1

0xb3e8,	// (0x00025ae7) graphic_text_primary_pane_t1

0xb3f6,	// (0x00025af5) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0002a0de) graphic_text_primary_pane_t

0xb3c4,	// (0x00025ac3) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x00025acb) graphic_text_primary_small_pane_t1

0xb3da,	// (0x00025ad9) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0002a0d9) graphic_text_primary_small_pane_t

0xb3a0,	// (0x00025a9f) graphic_text_secondary_pane_g1

0xb3a8,	// (0x00025aa7) graphic_text_secondary_pane_t1

0xb3b6,	// (0x00025ab5) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0002a0d4) graphic_text_secondary_pane_t

0xb37c,	// (0x00025a7b) graphic_text_title_pane_g1

0xb384,	// (0x00025a83) graphic_text_title_pane_t1

0xb392,	// (0x00025a91) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0002a0cf) graphic_text_title_pane_t

0xb358,	// (0x00025a57) graphic_text_digital_pane_g1

0xb360,	// (0x00025a5f) graphic_text_digital_pane_t1

0xb36e,	// (0x00025a6d) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0002a0ca) graphic_text_digital_pane_t

0x7813,	// (0x00021f12) navi_icon_pane_srt_ParamLimits

0x7813,	// (0x00021f12) navi_icon_pane_srt

0x7733,	// (0x00021e32) navi_midp_pane_srt

0x7733,	// (0x00021e32) navi_navi_pane_srt

0x7813,	// (0x00021f12) navi_text_pane_srt_ParamLimits

0x7813,	// (0x00021f12) navi_text_pane_srt

0xb323,	// (0x00025a22) navi_navi_icon_text_pane_srt

0xb32b,	// (0x00025a2a) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x00025a2a) navi_navi_pane_srt_g1

0xb33d,	// (0x00025a3c) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x00025a3c) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0002a0c5) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0002a0c5) navi_navi_pane_srt_g

0xb34f,	// (0x00025a4e) navi_navi_tabs_pane_srt

0xb323,	// (0x00025a22) navi_navi_text_pane_srt

0xb323,	// (0x00025a22) navi_navi_volume_pane_srt

0xb314,	// (0x00025a13) navi_navi_text_pane_srt_t1

0x6aa8,	// (0x000211a7) navi_navi_volume_pane_srt_g1

0x6ab0,	// (0x000211af) volume_small_pane_srt_ParamLimits

0x6ab0,	// (0x000211af) volume_small_pane_srt

0x64b7,	// (0x00020bb6) volume_small_pane_srt_g1_ParamLimits

0x64b7,	// (0x00020bb6) volume_small_pane_srt_g1

0x64c7,	// (0x00020bc6) volume_small_pane_srt_g2_ParamLimits

0x64c7,	// (0x00020bc6) volume_small_pane_srt_g2

0x64d8,	// (0x00020bd7) volume_small_pane_srt_g3_ParamLimits

0x64d8,	// (0x00020bd7) volume_small_pane_srt_g3

0x64e9,	// (0x00020be8) volume_small_pane_srt_g4_ParamLimits

0x64e9,	// (0x00020be8) volume_small_pane_srt_g4

0x64fa,	// (0x00020bf9) volume_small_pane_srt_g5_ParamLimits

0x64fa,	// (0x00020bf9) volume_small_pane_srt_g5

0x650b,	// (0x00020c0a) volume_small_pane_srt_g6_ParamLimits

0x650b,	// (0x00020c0a) volume_small_pane_srt_g6

0x651c,	// (0x00020c1b) volume_small_pane_srt_g7_ParamLimits

0x651c,	// (0x00020c1b) volume_small_pane_srt_g7

0x652d,	// (0x00020c2c) volume_small_pane_srt_g8_ParamLimits

0x652d,	// (0x00020c2c) volume_small_pane_srt_g8

0x653e,	// (0x00020c3d) volume_small_pane_srt_g9_ParamLimits

0x653e,	// (0x00020c3d) volume_small_pane_srt_g9

0x654f,	// (0x00020c4e) volume_small_pane_srt_g10_ParamLimits

0x654f,	// (0x00020c4e) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00029e74) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00029e74) volume_small_pane_srt_g

0x7bed,	// (0x000222ec) query_popup_data_pane_cp2

0xb2fa,	// (0x000259f9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x000259f9) navi_navi_icon_text_pane_srt_t1

0xa3f8,	// (0x00024af7) navi_tabs_2_long_pane_srt

0xa3f8,	// (0x00024af7) navi_tabs_2_pane_srt

0xa3f8,	// (0x00024af7) navi_tabs_3_long_pane_srt

0xa3f8,	// (0x00024af7) navi_tabs_3_pane_srt

0xa3f8,	// (0x00024af7) navi_tabs_4_pane_srt

0x6a88,	// (0x00021187) tabs_2_active_pane_srt_ParamLimits

0x6a88,	// (0x00021187) tabs_2_active_pane_srt

0x6a98,	// (0x00021197) tabs_2_passive_pane_srt_ParamLimits

0x6a98,	// (0x00021197) tabs_2_passive_pane_srt

0x904a,	// (0x00023749) bg_passive_tab_pane_cp1_srt_ParamLimits

0x904a,	// (0x00023749) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x000259c5) bg_passive_tab_pane_g1_cp1_srt

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000259ce) bg_passive_tab_pane_g3_cp1_srt

0x7813,	// (0x00021f12) bg_active_tab_pane_cp1_srt_ParamLimits

0x7813,	// (0x00021f12) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x000259d7) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x000259df) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x000259df) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x000259c5) bg_active_tab_pane_g1_cp1_srt

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000259ce) bg_active_tab_pane_g3_cp1_srt

0x6a55,	// (0x00021154) tabs_3_active_pane_srt_ParamLimits

0x6a55,	// (0x00021154) tabs_3_active_pane_srt

0x6a66,	// (0x00021165) tabs_3_passive_pane_cp_srt_ParamLimits

0x6a66,	// (0x00021165) tabs_3_passive_pane_cp_srt

0x6a77,	// (0x00021176) tabs_3_passive_pane_srt_ParamLimits

0x6a77,	// (0x00021176) tabs_3_passive_pane_srt

0x904a,	// (0x00023749) bg_passive_tab_pane_cp2_srt_ParamLimits

0x904a,	// (0x00023749) bg_passive_tab_pane_cp2_srt

0x8e96,	// (0x00023595) bg_passive_tab_pane_g1_cp2_srt

0x8931,	// (0x00023030) bg_passive_tab_pane_g2_cp2_srt

0x8e9f,	// (0x0002359e) bg_passive_tab_pane_g3_cp2_srt

0x7813,	// (0x00021f12) bg_active_tab_pane_cp2_srt_ParamLimits

0x7813,	// (0x00021f12) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x000259ab) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x000259b3) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x000259b3) tabs_3_active_pane_srt_t1

0x8e96,	// (0x00023595) bg_active_tab_pane_g1_cp2_srt

0x8931,	// (0x00023030) bg_active_tab_pane_g2_cp2_srt

0x8e9f,	// (0x0002359e) bg_active_tab_pane_g3_cp2_srt

0x6a0d,	// (0x0002110c) tabs_4_active_pane_srt_ParamLimits

0x6a0d,	// (0x0002110c) tabs_4_active_pane_srt

0x6a1f,	// (0x0002111e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a1f,	// (0x0002111e) tabs_4_passive_pane_cp2_srt

0x8ff4,	// (0x000236f3) aid_size_cell_toolbar

0x826d,	// (0x0002296c) main_idle_act_pane_ParamLimits

0x91e7,	// (0x000238e6) popup_large_graphic_colour_window_ParamLimits

0x954e,	// (0x00023c4d) popup_toolbar_window_ParamLimits

0x954e,	// (0x00023c4d) popup_toolbar_window

0xb10e,	// (0x0002580d) list_single_graphic_2heading_pane_ParamLimits

0xb10e,	// (0x0002580d) list_single_graphic_2heading_pane

0x8429,	// (0x00022b28) aid_size_cell_apps_grid_lsc_pane

0x843b,	// (0x00022b3a) aid_size_cell_apps_grid_prt_pane

0x904a,	// (0x00023749) bg_wml_button_pane_cp1_ParamLimits

0x904a,	// (0x00023749) bg_wml_button_pane_cp1

0x9dea,	// (0x000244e9) form_midp_field_text_pane_t1_ParamLimits

0x9bdc,	// (0x000242db) input_focus_pane_cp050_ParamLimits

0x9e21,	// (0x00024520) list_midp_form_text_pane_ParamLimits

0x9dc7,	// (0x000244c6) input_focus_pane_cp051_ParamLimits

0x9ddb,	// (0x000244da) list_midp_choice_pane_ParamLimits

0x9c6d,	// (0x0002436c) list_single_2graphic_pane_cp3_ParamLimits

0x9c6d,	// (0x0002436c) list_single_2graphic_pane_cp3

0x9c91,	// (0x00024390) list_single_midp_graphic_pane_ParamLimits

0x9c91,	// (0x00024390) list_single_midp_graphic_pane

0x5448,	// (0x0001fb47) list_single_graphic_2heading_pane_g1_ParamLimits

0x5448,	// (0x0001fb47) list_single_graphic_2heading_pane_g1

0x5454,	// (0x0001fb53) list_single_graphic_2heading_pane_g4_ParamLimits

0x5454,	// (0x0001fb53) list_single_graphic_2heading_pane_g4

0x5460,	// (0x0001fb5f) list_single_graphic_2heading_pane_g5_ParamLimits

0x5460,	// (0x0001fb5f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x00029ec7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x00029ec7) list_single_graphic_2heading_pane_g

0x546c,	// (0x0001fb6b) list_single_graphic_2heading_pane_t1_ParamLimits

0x546c,	// (0x0001fb6b) list_single_graphic_2heading_pane_t1

0x5480,	// (0x0001fb7f) list_single_graphic_2heading_pane_t2_ParamLimits

0x5480,	// (0x0001fb7f) list_single_graphic_2heading_pane_t2

0x549c,	// (0x0001fb9b) list_single_graphic_2heading_pane_t3_ParamLimits

0x549c,	// (0x0001fb9b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x00029ece) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x00029ece) list_single_graphic_2heading_pane_t

0x9a2a,	// (0x00024129) bg_popup_sub_pane_cp2

0x9a54,	// (0x00024153) grid_toobar_pane

0x66b5,	// (0x00020db4) cell_toolbar_pane_ParamLimits

0x66b5,	// (0x00020db4) cell_toolbar_pane

0x9a90,	// (0x0002418f) cell_toolbar_pane_g1_ParamLimits

0x9a90,	// (0x0002418f) cell_toolbar_pane_g1

0x9aa4,	// (0x000241a3) cell_toolbar_pane_g2_ParamLimits

0x9aa4,	// (0x000241a3) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x00029edc) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x00029edc) cell_toolbar_pane_g

0x9ac6,	// (0x000241c5) grid_highlight_pane_cp2_ParamLimits

0x9ac6,	// (0x000241c5) grid_highlight_pane_cp2

0x9ae0,	// (0x000241df) toolbar_button_pane

0x9aec,	// (0x000241eb) toolbar_button_pane_g1

0x9af4,	// (0x000241f3) toolbar_button_pane_g2

0x9afc,	// (0x000241fb) toolbar_button_pane_g3

0x9b04,	// (0x00024203) toolbar_button_pane_g4

0x9b0c,	// (0x0002420b) toolbar_button_pane_g5

0x9b14,	// (0x00024213) toolbar_button_pane_g6

0x9b1c,	// (0x0002421b) toolbar_button_pane_g7

0x9b24,	// (0x00024223) toolbar_button_pane_g8

0x9b2c,	// (0x0002422b) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x00029ee1) toolbar_button_pane_g

0x66ed,	// (0x00020dec) list_single_2graphic_pane_g1_cp3_ParamLimits

0x66ed,	// (0x00020dec) list_single_2graphic_pane_g1_cp3

0x66f9,	// (0x00020df8) list_single_2graphic_pane_g2_cp3_ParamLimits

0x66f9,	// (0x00020df8) list_single_2graphic_pane_g2_cp3

0x670a,	// (0x00020e09) list_single_2graphic_pane_g3_cp3

0x9643,	// (0x00023d42) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9643,	// (0x00023d42) list_single_2graphic_pane_g4_cp3

0x6712,	// (0x00020e11) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6712,	// (0x00020e11) list_single_2graphic_pane_t1_cp3

0x86d5,	// (0x00022dd4) list_single_midp_graphic_pane_g2_ParamLimits

0x86d5,	// (0x00022dd4) list_single_midp_graphic_pane_g2

0x8ffc,	// (0x000236fb) aid_zoom_text_primary

0x541c,	// (0x0001fb1b) aid_zoom_text_secondary

0x8f53,	// (0x00023652) status_small_pane_g7_ParamLimits

0x8f53,	// (0x00023652) status_small_pane_g7

0x8f76,	// (0x00023675) status_small_pane_t1_ParamLimits

0x774a,	// (0x00021e49) title_pane_g2

0x0003,

0xf56a,	// (0x00029c69) title_pane_g

0x7c8e,	// (0x0002238d) aid_size_cell_colour_1_pane_ParamLimits

0x7c8e,	// (0x0002238d) aid_size_cell_colour_1_pane

0x7ca2,	// (0x000223a1) aid_size_cell_colour_2_pane_ParamLimits

0x7ca2,	// (0x000223a1) aid_size_cell_colour_2_pane

0x7cb6,	// (0x000223b5) aid_size_cell_colour_3_pane_ParamLimits

0x7cb6,	// (0x000223b5) aid_size_cell_colour_3_pane

0x7cca,	// (0x000223c9) aid_size_cell_colour_4_pane_ParamLimits

0x7cca,	// (0x000223c9) aid_size_cell_colour_4_pane

0x6113,	// (0x00020812) title_pane_stacon_g1_ParamLimits

0x6113,	// (0x00020812) title_pane_stacon_g1

0xa1df,	// (0x000248de) popup_note_wait_window_g3_ParamLimits

0xa1df,	// (0x000248de) popup_note_wait_window_g3

0xa255,	// (0x00024954) popup_note_wait_window_t5_ParamLimits

0xa255,	// (0x00024954) popup_note_wait_window_t5

0x7733,	// (0x00021e32) main_feb_china_hwr_fs_writing_pane

0x90cc,	// (0x000237cb) popup_feb_china_hwr_fs_window_ParamLimits

0x90cc,	// (0x000237cb) popup_feb_china_hwr_fs_window

0x6744,	// (0x00020e43) aid_size_cell_hwr_fs_ParamLimits

0x6744,	// (0x00020e43) aid_size_cell_hwr_fs

0x9bdc,	// (0x000242db) bg_popup_sub_pane_cp3_ParamLimits

0x9bdc,	// (0x000242db) bg_popup_sub_pane_cp3

0x6759,	// (0x00020e58) grid_hwr_fs_pane_ParamLimits

0x6759,	// (0x00020e58) grid_hwr_fs_pane

0x6771,	// (0x00020e70) linegrid_hwr_fs_pane_ParamLimits

0x6771,	// (0x00020e70) linegrid_hwr_fs_pane

0x6781,	// (0x00020e80) cell_hwr_fs_pane_ParamLimits

0x6781,	// (0x00020e80) cell_hwr_fs_pane

0x9be8,	// (0x000242e7) linegrid_hwr_fs_pane_g1_ParamLimits

0x9be8,	// (0x000242e7) linegrid_hwr_fs_pane_g1

0x9bf4,	// (0x000242f3) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bf4,	// (0x000242f3) linegrid_hwr_fs_pane_g2

0x9c06,	// (0x00024305) linegrid_hwr_fs_pane_g3_ParamLimits

0x9c06,	// (0x00024305) linegrid_hwr_fs_pane_g3

0x67a3,	// (0x00020ea2) linegrid_hwr_fs_pane_g4_ParamLimits

0x67a3,	// (0x00020ea2) linegrid_hwr_fs_pane_g4

0x67bd,	// (0x00020ebc) linegrid_hwr_fs_pane_g5_ParamLimits

0x67bd,	// (0x00020ebc) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00029f0c) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00029f0c) linegrid_hwr_fs_pane_g

0x9c12,	// (0x00024311) cell_hwr_fs_pane_g1_ParamLimits

0x9c12,	// (0x00024311) cell_hwr_fs_pane_g1

0x9961,	// (0x00024060) cell_hwr_fs_pane_g2_ParamLimits

0x9961,	// (0x00024060) cell_hwr_fs_pane_g2

0x9c28,	// (0x00024327) cell_hwr_fs_pane_g3_ParamLimits

0x9c28,	// (0x00024327) cell_hwr_fs_pane_g3

0x9c35,	// (0x00024334) cell_hwr_fs_pane_g4_ParamLimits

0x9c35,	// (0x00024334) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00029f17) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00029f17) cell_hwr_fs_pane_g

0x67d3,	// (0x00020ed2) cell_hwr_fs_pane_t1

0x7733,	// (0x00021e32) grid_highlight_pane_cp6

0x7733,	// (0x00021e32) main_idle_act2_pane

0x81e0,	// (0x000228df) aid_inside_area_popup_secondary

0xa898,	// (0x00024f97) aid_inside_area_window_primary_ParamLimits

0xa898,	// (0x00024f97) aid_inside_area_window_primary

0xb413,	// (0x00025b12) ai2_news_ticker_pane

0xb41b,	// (0x00025b1a) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x00025b1a) aid_size_cell_ai1_link

0xb435,	// (0x00025b34) popup_ai2_data_window_ParamLimits

0xb435,	// (0x00025b34) popup_ai2_data_window

0xb44b,	// (0x00025b4a) popup_ai2_link_window_ParamLimits

0xb44b,	// (0x00025b4a) popup_ai2_link_window

0x9bdc,	// (0x000242db) bg_popup_sub_pane_cp4_ParamLimits

0x9bdc,	// (0x000242db) bg_popup_sub_pane_cp4

0xb45f,	// (0x00025b5e) grid_ai2_link_pane_ParamLimits

0xb45f,	// (0x00025b5e) grid_ai2_link_pane

0xb476,	// (0x00025b75) popup_ai2_link_window_g1_ParamLimits

0xb476,	// (0x00025b75) popup_ai2_link_window_g1

0xb482,	// (0x00025b81) popup_ai2_link_window_g2_ParamLimits

0xb482,	// (0x00025b81) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0002a0e3) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0002a0e3) popup_ai2_link_window_g

0xb491,	// (0x00025b90) ai2_mp_button_pane

0xb499,	// (0x00025b98) ai2_mp_volume_pane

0x9dc7,	// (0x000244c6) bg_popup_sub_pane_cp5_ParamLimits

0x9dc7,	// (0x000244c6) bg_popup_sub_pane_cp5

0xb4a1,	// (0x00025ba0) heading_ai2_gene_pane_ParamLimits

0xb4a1,	// (0x00025ba0) heading_ai2_gene_pane

0xb4ad,	// (0x00025bac) list_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x00025bac) list_ai2_gene_pane

0xb4f5,	// (0x00025bf4) cell_ai2_link_pane_ParamLimits

0xb4f5,	// (0x00025bf4) cell_ai2_link_pane

0xb50b,	// (0x00025c0a) cell_ai2_link_pane_g1

0x7733,	// (0x00021e32) grid_highlight_pane_cp7

0x6ac5,	// (0x000211c4) ai2_mp_volume_pane_g1

0xb5db,	// (0x00025cda) ai2_mp_volume_pane_g2

0xb550,	// (0x00025c4f) list_ai2_gene_pane_t1

0xb5e3,	// (0x00025ce2) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0002a0fc) ai2_mp_volume_pane_g

0x6acd,	// (0x000211cc) volume_small_pane_cp3

0xb5eb,	// (0x00025cea) aid_size_cell_ai2_button

0xb5f3,	// (0x00025cf2) grid_ai2_button_pane

0xb5fc,	// (0x00025cfb) cell_ai2_button_pane_ParamLimits

0xb5fc,	// (0x00025cfb) cell_ai2_button_pane

0x7729,	// (0x00021e28) cell_ai2_button_pane_g1

0x7733,	// (0x00021e32) grid_highlight_pane_cp8

0xb59b,	// (0x00025c9a) ai2_gene_pane_t1_ParamLimits

0xb59b,	// (0x00025c9a) ai2_gene_pane_t1

0x8fea,	// (0x000236e9) aid_height_parent_landscape

0xaf2a,	// (0x00025629) aid_height_set_list

0xaf3b,	// (0x0002563a) aid_size_parent

0xb23a,	// (0x00025939) aid_size_cell_graphic_pane_ParamLimits

0xb4bd,	// (0x00025bbc) popup_ai2_data_window_g1_ParamLimits

0xb4bd,	// (0x00025bbc) popup_ai2_data_window_g1

0xb4c9,	// (0x00025bc8) ai2_news_ticker_pane_g1

0xb4d1,	// (0x00025bd0) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0002a0e8) ai2_news_ticker_pane_g

0xb4d9,	// (0x00025bd8) ai2_news_ticker_pane_t1

0xb4e7,	// (0x00025be6) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0002a0ed) ai2_news_ticker_pane_t

0xb514,	// (0x00025c13) heading_ai2_gene_pane_g1

0xb51c,	// (0x00025c1b) heading_ai2_gene_pane_t1_ParamLimits

0xb51c,	// (0x00025c1b) heading_ai2_gene_pane_t1

0xb531,	// (0x00025c30) list_highlight_pane_cp6

0xb539,	// (0x00025c38) ai2_gene_pane_ParamLimits

0xb539,	// (0x00025c38) ai2_gene_pane

0xb55e,	// (0x00025c5d) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0002a0f2) list_ai2_gene_pane_t

0xb56c,	// (0x00025c6b) list_highlight_pane_cp8_ParamLimits

0xb56c,	// (0x00025c6b) list_highlight_pane_cp8

0xb57d,	// (0x00025c7c) ai2_gene_pane_g1_ParamLimits

0xb57d,	// (0x00025c7c) ai2_gene_pane_g1

0xb58f,	// (0x00025c8e) ai2_gene_pane_g2_ParamLimits

0xb58f,	// (0x00025c8e) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0002a0f7) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0002a0f7) ai2_gene_pane_g

0x8015,	// (0x00022714) scroll_pane_cp12

0x6674,	// (0x00020d73) control_pane_t3_ParamLimits

0x6674,	// (0x00020d73) control_pane_t3

0x8f67,	// (0x00023666) status_small_pane_g8_ParamLimits

0x8f67,	// (0x00023666) status_small_pane_g8

0x91b2,	// (0x000238b1) popup_find_window_ParamLimits

0x93c5,	// (0x00023ac4) popup_note_image_window_ParamLimits

0x5448,	// (0x0001fb47) list_double2_graphic_pane_vc_g1_ParamLimits

0x5448,	// (0x0001fb47) list_double2_graphic_pane_vc_g1

0x54b4,	// (0x0001fbb3) list_double2_graphic_pane_vc_g2_ParamLimits

0x54b4,	// (0x0001fbb3) list_double2_graphic_pane_vc_g2

0x54c0,	// (0x0001fbbf) list_double2_graphic_pane_vc_g3_ParamLimits

0x54c0,	// (0x0001fbbf) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x00029ed5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x00029ed5) list_double2_graphic_pane_vc_g

0x54cc,	// (0x0001fbcb) list_double2_graphic_pane_vc_t1_ParamLimits

0x54cc,	// (0x0001fbcb) list_double2_graphic_pane_vc_t1

0x5454,	// (0x0001fb53) list_single_heading_pane_vc_g1_ParamLimits

0x5454,	// (0x0001fb53) list_single_heading_pane_vc_g1

0x5460,	// (0x0001fb5f) list_single_heading_pane_vc_g2_ParamLimits

0x5460,	// (0x0001fb5f) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x00029ef6) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x00029ef6) list_single_heading_pane_vc_g

0x54e2,	// (0x0001fbe1) list_single_heading_pane_vc_t1_ParamLimits

0x54e2,	// (0x0001fbe1) list_single_heading_pane_vc_t1

0x54f8,	// (0x0001fbf7) list_single_heading_pane_vc_t2_ParamLimits

0x54f8,	// (0x0001fbf7) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00029efb) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00029efb) list_single_heading_pane_vc_t

0x9b34,	// (0x00024233) list_setting_number_pane_vc_g1_ParamLimits

0x9b34,	// (0x00024233) list_setting_number_pane_vc_g1

0x9b40,	// (0x0002423f) list_setting_number_pane_vc_g2_ParamLimits

0x9b40,	// (0x0002423f) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x00029f00) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x00029f00) list_setting_number_pane_vc_g

0x9b4c,	// (0x0002424b) list_setting_number_pane_vc_t1_ParamLimits

0x9b4c,	// (0x0002424b) list_setting_number_pane_vc_t1

0x9b60,	// (0x0002425f) list_setting_number_pane_vc_t2_ParamLimits

0x9b60,	// (0x0002425f) list_setting_number_pane_vc_t2

0x9b7c,	// (0x0002427b) list_setting_number_pane_vc_t3_ParamLimits

0x9b7c,	// (0x0002427b) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00029f05) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00029f05) list_setting_number_pane_vc_t

0x9ba2,	// (0x000242a1) set_value_pane_vc_ParamLimits

0x9ba2,	// (0x000242a1) set_value_pane_vc

0xb10e,	// (0x0002580d) list_double2_graphic_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double2_graphic_pane_vc

0xb10e,	// (0x0002580d) list_double2_large_graphic_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double2_large_graphic_pane_vc

0xb10e,	// (0x0002580d) list_double2_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double2_pane_vc

0xb10e,	// (0x0002580d) list_double_graphic_heading_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double_graphic_heading_pane_vc

0xb10e,	// (0x0002580d) list_double_graphic_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double_graphic_pane_vc

0xb10e,	// (0x0002580d) list_double_heading_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double_heading_pane_vc

0xb10e,	// (0x0002580d) list_double_large_graphic_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double_large_graphic_pane_vc

0xb10e,	// (0x0002580d) list_double_number_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double_number_pane_vc

0xb10e,	// (0x0002580d) list_double_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double_pane_vc

0xb10e,	// (0x0002580d) list_double_time_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_double_time_pane_vc

0xb10e,	// (0x0002580d) list_setting_number_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_setting_number_pane_vc

0xb10e,	// (0x0002580d) list_setting_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_setting_pane_vc

0xb10e,	// (0x0002580d) list_single_graphic_heading_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_single_graphic_heading_pane_vc

0xb10e,	// (0x0002580d) list_single_heading_pane_vc_ParamLimits

0xb10e,	// (0x0002580d) list_single_heading_pane_vc

0x55d5,	// (0x0001fcd4) list_single_number_heading_pane_vc_ParamLimits

0x55d5,	// (0x0001fcd4) list_single_number_heading_pane_vc

0x5671,	// (0x0001fd70) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5671,	// (0x0001fd70) list_double_graphic_heading_pane_vc_g1

0x5454,	// (0x0001fb53) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5454,	// (0x0001fb53) list_double_graphic_heading_pane_vc_g2

0x5460,	// (0x0001fb5f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5460,	// (0x0001fb5f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0002a103) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002a103) list_double_graphic_heading_pane_vc_g

0x567d,	// (0x0001fd7c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x567d,	// (0x0001fd7c) list_double_graphic_heading_pane_vc_t1

0x54e2,	// (0x0001fbe1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x54e2,	// (0x0001fbe1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002a10a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0002a10a) list_double_graphic_heading_pane_vc_t

0x9b34,	// (0x00024233) list_setting_pane_vc_g1_ParamLimits

0x9b34,	// (0x00024233) list_setting_pane_vc_g1

0x9b40,	// (0x0002423f) list_setting_pane_vc_g2_ParamLimits

0x9b40,	// (0x0002423f) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x00029f00) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x00029f00) list_setting_pane_vc_g

0xb834,	// (0x00025f33) list_setting_pane_vc_t1_ParamLimits

0xb834,	// (0x00025f33) list_setting_pane_vc_t1

0xb848,	// (0x00025f47) list_setting_pane_vc_t2_ParamLimits

0xb848,	// (0x00025f47) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0002a138) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0002a138) list_setting_pane_vc_t

0x9ba2,	// (0x000242a1) set_value_pane_cp_vc_ParamLimits

0x9ba2,	// (0x000242a1) set_value_pane_cp_vc

0x5454,	// (0x0001fb53) list_single_number_heading_pane_vc_g1_ParamLimits

0x5454,	// (0x0001fb53) list_single_number_heading_pane_vc_g1

0x5460,	// (0x0001fb5f) list_single_number_heading_pane_vc_g2_ParamLimits

0x5460,	// (0x0001fb5f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x00029ef6) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x00029ef6) list_single_number_heading_pane_vc_g

0x54e2,	// (0x0001fbe1) list_single_number_heading_pane_vc_t1_ParamLimits

0x54e2,	// (0x0001fbe1) list_single_number_heading_pane_vc_t1

0x5691,	// (0x0001fd90) list_single_number_heading_pane_vc_t2_ParamLimits

0x5691,	// (0x0001fd90) list_single_number_heading_pane_vc_t2

0x56a5,	// (0x0001fda4) list_single_number_heading_pane_vc_t3_ParamLimits

0x56a5,	// (0x0001fda4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0002a13d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002a13d) list_single_number_heading_pane_vc_t

0x5448,	// (0x0001fb47) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5448,	// (0x0001fb47) list_single_graphic_heading_pane_vc_g1

0x5454,	// (0x0001fb53) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5454,	// (0x0001fb53) list_single_graphic_heading_pane_vc_g4

0x5460,	// (0x0001fb5f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5460,	// (0x0001fb5f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c8,	// (0x00029ec7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c8,	// (0x00029ec7) list_single_graphic_heading_pane_vc_g

0x54e2,	// (0x0001fbe1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x54e2,	// (0x0001fbe1) list_single_graphic_heading_pane_vc_t1

0x56b7,	// (0x0001fdb6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x56b7,	// (0x0001fdb6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0002a144) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0002a144) list_single_graphic_heading_pane_vc_t

0x5454,	// (0x0001fb53) list_double2_pane_vc_g1_ParamLimits

0x5454,	// (0x0001fb53) list_double2_pane_vc_g1

0x5460,	// (0x0001fb5f) list_double2_pane_vc_g2_ParamLimits

0x5460,	// (0x0001fb5f) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x00029ef6) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x00029ef6) list_double2_pane_vc_g

0x56cb,	// (0x0001fdca) list_double2_pane_vc_t1_ParamLimits

0x56cb,	// (0x0001fdca) list_double2_pane_vc_t1

0x56e1,	// (0x0001fde0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x56e1,	// (0x0001fde0) list_double2_large_graphic_pane_vc_g1

0x5454,	// (0x0001fb53) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5454,	// (0x0001fb53) list_double2_large_graphic_pane_vc_g2

0x5460,	// (0x0001fb5f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5460,	// (0x0001fb5f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0002a149) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0002a149) list_double2_large_graphic_pane_vc_g

0x56ed,	// (0x0001fdec) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x56ed,	// (0x0001fdec) list_double2_large_graphic_pane_vc_t1

0x5703,	// (0x0001fe02) list_double_time_pane_vc_g1_ParamLimits

0x5703,	// (0x0001fe02) list_double_time_pane_vc_g1

0x570f,	// (0x0001fe0e) list_double_time_pane_vc_g2_ParamLimits

0x570f,	// (0x0001fe0e) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0002a150) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0002a150) list_double_time_pane_vc_g

0x571b,	// (0x0001fe1a) list_double_time_pane_vc_t1_ParamLimits

0x571b,	// (0x0001fe1a) list_double_time_pane_vc_t1

0x5734,	// (0x0001fe33) list_double_time_pane_vc_t2_ParamLimits

0x5734,	// (0x0001fe33) list_double_time_pane_vc_t2

0x576f,	// (0x0001fe6e) list_double_time_pane_vc_t3_ParamLimits

0x576f,	// (0x0001fe6e) list_double_time_pane_vc_t3

0x5787,	// (0x0001fe86) list_double_time_pane_vc_t4_ParamLimits

0x5787,	// (0x0001fe86) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0002a155) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0002a155) list_double_time_pane_vc_t

0x5454,	// (0x0001fb53) list_double_pane_vc_g1_ParamLimits

0x5454,	// (0x0001fb53) list_double_pane_vc_g1

0x5460,	// (0x0001fb5f) list_double_pane_vc_g2_ParamLimits

0x5460,	// (0x0001fb5f) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x00029ef6) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x00029ef6) list_double_pane_vc_g

0x579b,	// (0x0001fe9a) list_double_pane_vc_t1_ParamLimits

0x579b,	// (0x0001fe9a) list_double_pane_vc_t1

0x57ad,	// (0x0001feac) list_double_pane_vc_t2_ParamLimits

0x57ad,	// (0x0001feac) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0002a15e) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002a15e) list_double_pane_vc_t

0x5454,	// (0x0001fb53) list_double_number_pane_vc_g1_ParamLimits

0x5454,	// (0x0001fb53) list_double_number_pane_vc_g1

0x5460,	// (0x0001fb5f) list_double_number_pane_vc_g2_ParamLimits

0x5460,	// (0x0001fb5f) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x00029ef6) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x00029ef6) list_double_number_pane_vc_g

0x57c5,	// (0x0001fec4) list_double_number_pane_vc_t1_ParamLimits

0x57c5,	// (0x0001fec4) list_double_number_pane_vc_t1

0x57d9,	// (0x0001fed8) list_double_number_pane_vc_t2_ParamLimits

0x57d9,	// (0x0001fed8) list_double_number_pane_vc_t2

0x57ad,	// (0x0001feac) list_double_number_pane_vc_t3_ParamLimits

0x57ad,	// (0x0001feac) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0002a163) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0002a163) list_double_number_pane_vc_t

0x57eb,	// (0x0001feea) list_double_large_graphic_pane_vc_g1_ParamLimits

0x57eb,	// (0x0001feea) list_double_large_graphic_pane_vc_g1

0x57f7,	// (0x0001fef6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x57f7,	// (0x0001fef6) list_double_large_graphic_pane_vc_g2

0x5460,	// (0x0001fb5f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5460,	// (0x0001fb5f) list_double_large_graphic_pane_vc_g3

0x5806,	// (0x0001ff05) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5806,	// (0x0001ff05) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0002a16a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0002a16a) list_double_large_graphic_pane_vc_g

0x5812,	// (0x0001ff11) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5812,	// (0x0001ff11) list_double_large_graphic_pane_vc_t1

0x5824,	// (0x0001ff23) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5824,	// (0x0001ff23) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0002a173) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0002a173) list_double_large_graphic_pane_vc_t

0x5454,	// (0x0001fb53) list_double_heading_pane_vc_g1_ParamLimits

0x5454,	// (0x0001fb53) list_double_heading_pane_vc_g1

0x5460,	// (0x0001fb5f) list_double_heading_pane_vc_g2_ParamLimits

0x5460,	// (0x0001fb5f) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x00029ef6) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x00029ef6) list_double_heading_pane_vc_g

0x583d,	// (0x0001ff3c) list_double_heading_pane_vc_t1_ParamLimits

0x583d,	// (0x0001ff3c) list_double_heading_pane_vc_t1

0x54e2,	// (0x0001fbe1) list_double_heading_pane_vc_t2_ParamLimits

0x54e2,	// (0x0001fbe1) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0002a178) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0002a178) list_double_heading_pane_vc_t

0x5851,	// (0x0001ff50) list_double_graphic_pane_vc_g1_ParamLimits

0x5851,	// (0x0001ff50) list_double_graphic_pane_vc_g1

0x5861,	// (0x0001ff60) list_double_graphic_pane_vc_g2_ParamLimits

0x5861,	// (0x0001ff60) list_double_graphic_pane_vc_g2

0x5870,	// (0x0001ff6f) list_double_graphic_pane_vc_g3_ParamLimits

0x5870,	// (0x0001ff6f) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0002a17d) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0002a17d) list_double_graphic_pane_vc_g

0x587c,	// (0x0001ff7b) list_double_graphic_pane_vc_t1_ParamLimits

0x587c,	// (0x0001ff7b) list_double_graphic_pane_vc_t1

0x57ad,	// (0x0001feac) list_double_graphic_pane_vc_t2_ParamLimits

0x57ad,	// (0x0001feac) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0002a184) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0002a184) list_double_graphic_pane_vc_t

0x5c79,	// (0x00020378) aid_size_cell_fastswap

0x5c81,	// (0x00020380) aid_size_cell_touch_ParamLimits

0x5c81,	// (0x00020380) aid_size_cell_touch

0x5edc,	// (0x000205db) popup_fast_swap_wide_window_ParamLimits

0x5edc,	// (0x000205db) popup_fast_swap_wide_window

0x5fe6,	// (0x000206e5) touch_pane_ParamLimits

0x5fe6,	// (0x000206e5) touch_pane

0x806b,	// (0x0002276a) button_value_adjust_pane_cp2

0x5140,	// (0x0001f83f) button_value_adjust_pane_cp4

0x5160,	// (0x0001f85f) form_field_data_pane_cp2

0x517f,	// (0x0001f87e) form_field_data_wide_pane_cp2

0x84f8,	// (0x00022bf7) bg_scroll_pane_ParamLimits

0x6276,	// (0x00020975) scroll_handle_pane_ParamLimits

0x628a,	// (0x00020989) scroll_sc2_down_pane_ParamLimits

0x628a,	// (0x00020989) scroll_sc2_down_pane

0x8529,	// (0x00022c28) scroll_sc2_up_pane_ParamLimits

0x8529,	// (0x00022c28) scroll_sc2_up_pane

0xbc9d,	// (0x0002639c) grid_wheel_folder_pane_g1_ParamLimits

0xbc9d,	// (0x0002639c) grid_wheel_folder_pane_g1

0x644f,	// (0x00020b4e) clock_nsta_pane_cp2_ParamLimits

0x644f,	// (0x00020b4e) clock_nsta_pane_cp2

0x8cec,	// (0x000233eb) listscroll_midp_pane_ParamLimits

0x8cf8,	// (0x000233f7) midp_canvas_pane

0x8fe2,	// (0x000236e1) nsta_clock_indic_pane

0x9030,	// (0x0002372f) listscroll_form_pane_vc

0x9038,	// (0x00023737) listscroll_set_pane_vc_ParamLimits

0x9038,	// (0x00023737) listscroll_set_pane_vc

0x96dc,	// (0x00023ddb) clock_nsta_pane

0x9751,	// (0x00023e50) indicator_nsta_pane

0x9a2a,	// (0x00024129) bg_popup_sub_pane_cp2_ParamLimits

0x9a3e,	// (0x0002413d) find_pane_cp2_ParamLimits

0x9a3e,	// (0x0002413d) find_pane_cp2

0x9a54,	// (0x00024153) grid_toobar_pane_ParamLimits

0x9bb0,	// (0x000242af) list_form_gen_pane_vc_ParamLimits

0x9bb0,	// (0x000242af) list_form_gen_pane_vc

0x9bc6,	// (0x000242c5) scroll_pane_cp8_vc_ParamLimits

0x9bc6,	// (0x000242c5) scroll_pane_cp8_vc

0x9c42,	// (0x00024341) data_form_wide_pane_vc_ParamLimits

0x9c42,	// (0x00024341) data_form_wide_pane_vc

0x9c4e,	// (0x0002434d) form_field_data_wide_pane_vc_g1

0x9c56,	// (0x00024355) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c56,	// (0x00024355) form_field_data_wide_pane_vc_t1

0x807f,	// (0x0002277e) input_focus_pane_cp6_vc_ParamLimits

0x807f,	// (0x0002277e) input_focus_pane_cp6_vc

0x9f5a,	// (0x00024659) list_midp_pane_ParamLimits

0x9f66,	// (0x00024665) scroll_pane_cp16_ParamLimits

0x9f66,	// (0x00024665) scroll_pane_cp16

0x9fb4,	// (0x000246b3) button_value_adjust_pane_ParamLimits

0x9fb4,	// (0x000246b3) button_value_adjust_pane

0xaf4d,	// (0x0002564c) button_value_adjust_pane_cp6_ParamLimits

0xaf4d,	// (0x0002564c) button_value_adjust_pane_cp6

0xb077,	// (0x00025776) settings_code_pane_cp_ParamLimits

0xb077,	// (0x00025776) settings_code_pane_cp

0x7729,	// (0x00021e28) cell_touch_pane_g1

0x7729,	// (0x00021e28) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x00029e1e) cell_touch_pane_g

0xb60e,	// (0x00025d0d) cell_touch_pane_cp_ParamLimits

0xb60e,	// (0x00025d0d) cell_touch_pane_cp

0xb61e,	// (0x00025d1d) cell_touch_pane_ParamLimits

0xb61e,	// (0x00025d1d) cell_touch_pane

0x7729,	// (0x00021e28) scroll_sc2_down_pane_g1

0x7729,	// (0x00021e28) scroll_sc2_up_pane_g1

0x7733,	// (0x00021e32) bg_set_opt_pane_cp4_vc

0xb630,	// (0x00025d2f) list_set_graphic_pane_vc_g1_ParamLimits

0xb630,	// (0x00025d2f) list_set_graphic_pane_vc_g1

0xb63c,	// (0x00025d3b) list_set_graphic_pane_vc_g2_ParamLimits

0xb63c,	// (0x00025d3b) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0002a10f) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0002a10f) list_set_graphic_pane_vc_g

0xb648,	// (0x00025d47) text_primary_small_cp13_vc_ParamLimits

0xb648,	// (0x00025d47) text_primary_small_cp13_vc

0xb660,	// (0x00025d5f) list_set_graphic_pane_vc_ParamLimits

0xb660,	// (0x00025d5f) list_set_graphic_pane_vc

0x7733,	// (0x00021e32) input_focus_pane_cp2_vc

0x7729,	// (0x00021e28) setting_code_pane_vc_g1

0xb674,	// (0x00025d73) setting_code_pane_vc_t1

0xb682,	// (0x00025d81) set_text_pane_vc_t1_ParamLimits

0xb682,	// (0x00025d81) set_text_pane_vc_t1

0x7733,	// (0x00021e32) input_focus_pane_cp1_vc

0xb69d,	// (0x00025d9c) list_set_text_pane_vc

0x7729,	// (0x00021e28) setting_text_pane_vc_g1

0x7733,	// (0x00021e32) bg_set_opt_pane_cp2_vc

0xb6a7,	// (0x00025da6) setting_slider_graphic_pane_vc_g1

0xb6af,	// (0x00025dae) setting_slider_graphic_pane_vc_t1

0xb6bd,	// (0x00025dbc) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0002a114) setting_slider_graphic_pane_vc_t

0xb6cb,	// (0x00025dca) slider_set_pane_cp_vc

0xb6d3,	// (0x00025dd2) slider_set_pane_vc_g1

0xb6dc,	// (0x00025ddb) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0002a119) slider_set_pane_vc_g

0x80e6,	// (0x000227e5) set_opt_bg_pane_g1_copy1

0x80ee,	// (0x000227ed) set_opt_bg_pane_g2_copy1

0xb708,	// (0x00025e07) set_opt_bg_pane_g3_copy1

0x80fe,	// (0x000227fd) set_opt_bg_pane_g4_copy1

0x8106,	// (0x00022805) set_opt_bg_pane_g5_copy1

0x810e,	// (0x0002280d) set_opt_bg_pane_g6_copy1

0xb712,	// (0x00025e11) set_opt_bg_pane_g7_copy1

0xb71a,	// (0x00025e19) set_opt_bg_pane_g8_copy1

0xb724,	// (0x00025e23) set_opt_bg_pane_g9_copy1

0x7733,	// (0x00021e32) bg_set_opt_pane_cp_vc

0xb72e,	// (0x00025e2d) setting_slider_pane_vc_t1

0xb6af,	// (0x00025dae) setting_slider_pane_vc_t2

0xb6bd,	// (0x00025dbc) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0002a128) setting_slider_pane_vc_t

0xb6cb,	// (0x00025dca) slider_set_pane_vc

0x67e1,	// (0x00020ee0) volume_set_pane_vc_g1

0x67ea,	// (0x00020ee9) volume_set_pane_vc_g2

0x67f3,	// (0x00020ef2) volume_set_pane_vc_g3

0x67fc,	// (0x00020efb) volume_set_pane_vc_g4

0x6805,	// (0x00020f04) volume_set_pane_vc_g5

0x680e,	// (0x00020f0d) volume_set_pane_vc_g6

0x6817,	// (0x00020f16) volume_set_pane_vc_g7

0x6820,	// (0x00020f1f) volume_set_pane_vc_g8

0x6829,	// (0x00020f28) volume_set_pane_vc_g9

0x6832,	// (0x00020f31) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x00029fc6) volume_set_pane_vc_g

0xb73d,	// (0x00025e3c) volume_set_pane_vc

0xb745,	// (0x00025e44) button_value_adjust_pane_cp1_vc

0xb74f,	// (0x00025e4e) list_highlight_pane_cp2_vc

0xb758,	// (0x00025e57) list_set_pane_vc_ParamLimits

0xb758,	// (0x00025e57) list_set_pane_vc

0xb7c2,	// (0x00025ec1) main_pane_set_vc_t1_ParamLimits

0xb7c2,	// (0x00025ec1) main_pane_set_vc_t1

0xb7d7,	// (0x00025ed6) main_pane_set_vc_t2_ParamLimits

0xb7d7,	// (0x00025ed6) main_pane_set_vc_t2

0xb7e9,	// (0x00025ee8) main_pane_set_vc_t3_ParamLimits

0xb7e9,	// (0x00025ee8) main_pane_set_vc_t3

0xb7fd,	// (0x00025efc) main_pane_set_vc_t4_ParamLimits

0xb7fd,	// (0x00025efc) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0002a12f) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0002a12f) main_pane_set_vc_t

0xb811,	// (0x00025f10) setting_code_pane_vc_ParamLimits

0xb811,	// (0x00025f10) setting_code_pane_vc

0xb822,	// (0x00025f21) setting_slider_graphic_pane_vc

0xb822,	// (0x00025f21) setting_slider_pane_vc

0xb822,	// (0x00025f21) setting_text_pane_vc

0xb822,	// (0x00025f21) setting_volume_pane_vc

0xb82c,	// (0x00025f2b) scroll_pane_cp121_vc

0x8059,	// (0x00022758) set_content_pane_vc

0xb86a,	// (0x00025f69) button_value_adjust_pane_g1

0xb873,	// (0x00025f72) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0002a189) button_value_adjust_pane_g

0xb87c,	// (0x00025f7b) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb87c,	// (0x00025f7b) form_field_slider_wide_pane_vc_t1

0xb890,	// (0x00025f8f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb890,	// (0x00025f8f) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0002a18e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0002a18e) form_field_slider_wide_pane_vc_t

0x7a8e,	// (0x0002218d) input_focus_pane_cp10_vc_ParamLimits

0x7a8e,	// (0x0002218d) input_focus_pane_cp10_vc

0xb8a2,	// (0x00025fa1) slider_cont_pane_cp1_vc_ParamLimits

0xb8a2,	// (0x00025fa1) slider_cont_pane_cp1_vc

0xb6d3,	// (0x00025dd2) slider_form_pane_g1_cp2

0xb6dc,	// (0x00025ddb) slider_form_pane_g2_cp2

0xb8bb,	// (0x00025fba) form_field_slider_pane_vc_t3

0xb8c9,	// (0x00025fc8) form_field_slider_pane_vc_t4

0xb8d7,	// (0x00025fd6) slider_form_pane_vc_ParamLimits

0xb8d7,	// (0x00025fd6) slider_form_pane_vc

0xb8e4,	// (0x00025fe3) form_field_slider_pane_vc_t1_ParamLimits

0xb8e4,	// (0x00025fe3) form_field_slider_pane_vc_t1

0xb890,	// (0x00025f8f) form_field_slider_pane_vc_t2_ParamLimits

0xb890,	// (0x00025f8f) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002a19e) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002a19e) form_field_slider_pane_vc_t

0x7a8e,	// (0x0002218d) input_focus_pane_cp9_vc_ParamLimits

0x7a8e,	// (0x0002218d) input_focus_pane_cp9_vc

0xb900,	// (0x00025fff) slider_cont_pane_vc_ParamLimits

0xb900,	// (0x00025fff) slider_cont_pane_vc

0xb912,	// (0x00026011) list_form_graphic_pane_cp_vc_ParamLimits

0xb912,	// (0x00026011) list_form_graphic_pane_cp_vc

0x9c4e,	// (0x0002434d) form_field_popup_wide_pane_vc_g1

0xb927,	// (0x00026026) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb927,	// (0x00026026) form_field_popup_wide_pane_vc_t1

0x807f,	// (0x0002277e) input_focus_pane_cp8_vc_ParamLimits

0x807f,	// (0x0002277e) input_focus_pane_cp8_vc

0xb93e,	// (0x0002603d) list_form_wide_pane_vc_ParamLimits

0xb93e,	// (0x0002603d) list_form_wide_pane_vc

0xb94a,	// (0x00026049) list_form_graphic_pane_vc_g1

0xb952,	// (0x00026051) list_form_graphic_pane_vc_t1_ParamLimits

0xb952,	// (0x00026051) list_form_graphic_pane_vc_t1

0x7813,	// (0x00021f12) list_highlight_pane_cp5_vc_ParamLimits

0x7813,	// (0x00021f12) list_highlight_pane_cp5_vc

0xb96e,	// (0x0002606d) list_form_graphic_pane_vc_ParamLimits

0xb96e,	// (0x0002606d) list_form_graphic_pane_vc

0x9c4e,	// (0x0002434d) form_field_popup_pane_vc_g1

0xb984,	// (0x00026083) form_field_popup_pane_vc_t1_ParamLimits

0xb984,	// (0x00026083) form_field_popup_pane_vc_t1

0x807f,	// (0x0002277e) input_focus_pane_cp7_vc_ParamLimits

0x807f,	// (0x0002277e) input_focus_pane_cp7_vc

0xb99b,	// (0x0002609a) list_form_pane_vc_ParamLimits

0xb99b,	// (0x0002609a) list_form_pane_vc

0xb9a7,	// (0x000260a6) data_form_pane_vc_t1_ParamLimits

0xb9a7,	// (0x000260a6) data_form_pane_vc_t1

0x80e6,	// (0x000227e5) input_focus_pane_vc_g1

0x80ee,	// (0x000227ed) input_focus_pane_vc_g2

0x80f6,	// (0x000227f5) input_focus_pane_vc_g3

0x80fe,	// (0x000227fd) input_focus_pane_vc_g4

0x8106,	// (0x00022805) input_focus_pane_vc_g5

0x810e,	// (0x0002280d) input_focus_pane_vc_g6

0x8116,	// (0x00022815) input_focus_pane_vc_g7

0x811e,	// (0x0002281d) input_focus_pane_vc_g8

0x8126,	// (0x00022825) input_focus_pane_vc_g9

0x7729,	// (0x00021e28) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x00029da7) input_focus_pane_vc_g

0x9c42,	// (0x00024341) data_form_pane_vc_ParamLimits

0x9c42,	// (0x00024341) data_form_pane_vc

0x9c4e,	// (0x0002434d) form_field_data_pane_vc_g1

0xb9c2,	// (0x000260c1) form_field_data_pane_vc_t1_ParamLimits

0xb9c2,	// (0x000260c1) form_field_data_pane_vc_t1

0x807f,	// (0x0002277e) input_focus_pane_vc_ParamLimits

0x807f,	// (0x0002277e) input_focus_pane_vc

0xb9dc,	// (0x000260db) button_value_adjust_pane_cp3_vc

0xb9e4,	// (0x000260e3) button_value_adjust_pane_cp5_vc

0xb9ec,	// (0x000260eb) form_field_data_pane_vc_ParamLimits

0xb9ec,	// (0x000260eb) form_field_data_pane_vc

0xba03,	// (0x00026102) form_field_data_pane_vc_cp2

0xba0b,	// (0x0002610a) form_field_data_wide_pane_vc_ParamLimits

0xba0b,	// (0x0002610a) form_field_data_wide_pane_vc

0xba21,	// (0x00026120) form_field_data_wide_pane_vc_cp2

0xba29,	// (0x00026128) form_field_popup_pane_vc_ParamLimits

0xba29,	// (0x00026128) form_field_popup_pane_vc

0xba40,	// (0x0002613f) form_field_popup_wide_pane_vc_ParamLimits

0xba40,	// (0x0002613f) form_field_popup_wide_pane_vc

0xba56,	// (0x00026155) form_field_slider_pane_vc_ParamLimits

0xba56,	// (0x00026155) form_field_slider_pane_vc

0xba69,	// (0x00026168) form_field_slider_wide_pane_vc_ParamLimits

0xba69,	// (0x00026168) form_field_slider_wide_pane_vc

0xba7c,	// (0x0002617b) grid_touch_1_pane_ParamLimits

0xba7c,	// (0x0002617b) grid_touch_1_pane

0xba88,	// (0x00026187) grid_touch_2_pane_ParamLimits

0xba88,	// (0x00026187) grid_touch_2_pane

0x8fad,	// (0x000236ac) touch_pane_g1_ParamLimits

0x8fad,	// (0x000236ac) touch_pane_g1

0xbaa0,	// (0x0002619f) cell_app_pane_cp_wide_ParamLimits

0xbaa0,	// (0x0002619f) cell_app_pane_cp_wide

0xbab1,	// (0x000261b0) grid_popup_fast_wide_pane_ParamLimits

0xbab1,	// (0x000261b0) grid_popup_fast_wide_pane

0xbac5,	// (0x000261c4) scroll_pane_cp19_ParamLimits

0xbac5,	// (0x000261c4) scroll_pane_cp19

0x7733,	// (0x00021e32) bg_popup_window_pane_cp20

0xbad9,	// (0x000261d8) listscroll_popup_fast_wide_pane

0x7813,	// (0x00021f12) grid_indicator_nsta_pane

0xbae1,	// (0x000261e0) clock_nsta_pane_g1

0xbaea,	// (0x000261e9) clock_nsta_pane_t1

0xbb06,	// (0x00026205) cell_indicator_nsta_pane_ParamLimits

0xbb06,	// (0x00026205) cell_indicator_nsta_pane

0xbb3e,	// (0x0002623d) cell_indicator_nsta_pane_g1

0xbb4c,	// (0x0002624b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0002a1a8) cell_indicator_nsta_pane_g

0xbb62,	// (0x00026261) clock_nsta_pane_cp

0xbb6a,	// (0x00026269) indicator_nsta_pane_cp

0xbb73,	// (0x00026272) nsta_clock_indic_pane_g1

0x78dc,	// (0x00021fdb) grid_indicator_pane

0x861e,	// (0x00022d1d) scroll_pane_cp29

0x639e,	// (0x00020a9d) indicator_nsta_pane_cp2_ParamLimits

0x639e,	// (0x00020a9d) indicator_nsta_pane_cp2

0x7813,	// (0x00021f12) main_apps_wheel_pane

0x9e3b,	// (0x0002453a) form_midp_field_text_pane_ParamLimits

0x9f86,	// (0x00024685) scroll_bar_cp050_ParamLimits

0xbbdc,	// (0x000262db) cell_indicator_pane_ParamLimits

0xbbdc,	// (0x000262db) cell_indicator_pane

0xbbf3,	// (0x000262f2) cell_indicator_pane_g1

0xbbfd,	// (0x000262fc) grid_wheel_folder_pane_ParamLimits

0xbbfd,	// (0x000262fc) grid_wheel_folder_pane

0xbc11,	// (0x00026310) list_wheel_apps_pane_ParamLimits

0xbc11,	// (0x00026310) list_wheel_apps_pane

0xbc22,	// (0x00026321) main_apps_wheel_pane_g1_ParamLimits

0xbc22,	// (0x00026321) main_apps_wheel_pane_g1

0xbc36,	// (0x00026335) main_apps_wheel_pane_g2_ParamLimits

0xbc36,	// (0x00026335) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0002a1c4) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0002a1c4) main_apps_wheel_pane_g

0xbc4e,	// (0x0002634d) main_apps_wheel_pane_t1_ParamLimits

0xbc4e,	// (0x0002634d) main_apps_wheel_pane_t1

0xbc71,	// (0x00026370) list_wheel_apps_pane_g1

0xbc79,	// (0x00026378) list_wheel_apps_pane_g2

0xbc81,	// (0x00026380) list_wheel_apps_pane_g3

0xbc89,	// (0x00026388) list_wheel_apps_pane_g4

0xbc93,	// (0x00026392) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0002a1c9) list_wheel_apps_pane_g

0x8b64,	// (0x00023263) navi_icon_text_pane

0x9603,	// (0x00023d02) aid_fill_nsta

0xbcb6,	// (0x000263b5) navi_icon_text_pane_g1

0xbcc5,	// (0x000263c4) navi_icon_text_pane_t1

0x8a02,	// (0x00023101) list_set_graphic_pane_t1_ParamLimits

0x8a02,	// (0x00023101) list_set_graphic_pane_t1

0xa6e1,	// (0x00024de0) popup_midp_note_alarm_window_t6_ParamLimits

0xa6e1,	// (0x00024de0) popup_midp_note_alarm_window_t6

0xa6f3,	// (0x00024df2) popup_midp_note_alarm_window_t7_ParamLimits

0xa6f3,	// (0x00024df2) popup_midp_note_alarm_window_t7

0xa705,	// (0x00024e04) popup_midp_note_alarm_window_t8_ParamLimits

0xa705,	// (0x00024e04) popup_midp_note_alarm_window_t8

0xa717,	// (0x00024e16) popup_midp_note_alarm_window_t9_ParamLimits

0xa717,	// (0x00024e16) popup_midp_note_alarm_window_t9

0xa729,	// (0x00024e28) popup_midp_note_alarm_window_t10_ParamLimits

0xa729,	// (0x00024e28) popup_midp_note_alarm_window_t10

0xa73b,	// (0x00024e3a) popup_midp_note_alarm_window_t11_ParamLimits

0xa73b,	// (0x00024e3a) popup_midp_note_alarm_window_t11

0xa74d,	// (0x00024e4c) scroll_pane_cp17_ParamLimits

0xa74d,	// (0x00024e4c) scroll_pane_cp17

0x67e1,	// (0x00020ee0) volume_small_pane_cp_g1

0x6ad6,	// (0x000211d5) volume_small_pane_cp_g2

0x6adf,	// (0x000211de) volume_small_pane_cp_g3

0x6ae8,	// (0x000211e7) volume_small_pane_cp_g4

0x6af1,	// (0x000211f0) volume_small_pane_cp_g5

0x6afa,	// (0x000211f9) volume_small_pane_cp_g6

0x6b03,	// (0x00021202) volume_small_pane_cp_g7

0x6b0c,	// (0x0002120b) volume_small_pane_cp_g8

0x6b15,	// (0x00021214) volume_small_pane_cp_g9

0x6b1e,	// (0x0002121d) volume_small_pane_cp_g10

0x8dbf,	// (0x000234be) midp_ticker_pane_g1_ParamLimits

0x8dcb,	// (0x000234ca) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00029e6f) midp_ticker_pane_g_ParamLimits

0x8dd7,	// (0x000234d6) midp_ticker_pane_t1_ParamLimits

0x9619,	// (0x00023d18) aid_fill_nsta_2

0x9f72,	// (0x00024671) list_form2_midp_pane

0xb0c2,	// (0x000257c1) midp_editing_number_pane_ParamLimits

0xb0d1,	// (0x000257d0) midp_ticker_pane_ParamLimits

0xbcda,	// (0x000263d9) form2_midp_field_pane

0xbcfe,	// (0x000263fd) scroll_pane_cp51

0xbd1e,	// (0x0002641d) form2_midp_button_pane_ParamLimits

0xbd1e,	// (0x0002641d) form2_midp_button_pane

0xbd30,	// (0x0002642f) form2_midp_content_pane_ParamLimits

0xbd30,	// (0x0002642f) form2_midp_content_pane

0xbd4a,	// (0x00026449) form2_midp_field_choice_group_pane

0xbd52,	// (0x00026451) form2_midp_field_pane_g1

0xbd5a,	// (0x00026459) form2_midp_field_pane_g2

0xbd62,	// (0x00026461) form2_midp_field_pane_g3

0xbd6a,	// (0x00026469) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0002a1ee) form2_midp_field_pane_g

0xbd72,	// (0x00026471) form2_midp_gauge_slider_pane

0xbd7a,	// (0x00026479) form2_midp_gauge_wait_pane

0xbd82,	// (0x00026481) form2_midp_image_pane_ParamLimits

0xbd82,	// (0x00026481) form2_midp_image_pane

0xbd9d,	// (0x0002649c) form2_midp_label_pane_ParamLimits

0xbd9d,	// (0x0002649c) form2_midp_label_pane

0xbdb6,	// (0x000264b5) form2_midp_label_pane_cp_ParamLimits

0xbdb6,	// (0x000264b5) form2_midp_label_pane_cp

0xbdd7,	// (0x000264d6) form2_midp_string_pane_ParamLimits

0xbdd7,	// (0x000264d6) form2_midp_string_pane

0x588e,	// (0x0001ff8d) form2_midp_text_pane_ParamLimits

0x588e,	// (0x0001ff8d) form2_midp_text_pane

0xbde9,	// (0x000264e8) form2_midp_time_pane

0xbdf9,	// (0x000264f8) input_focus_pane_cp51_ParamLimits

0xbdf9,	// (0x000264f8) input_focus_pane_cp51

0xbe11,	// (0x00026510) form2_midp_label_pane_t1_ParamLimits

0xbe11,	// (0x00026510) form2_midp_label_pane_t1

0x58a9,	// (0x0001ffa8) form2_mdip_text_pane_t1_ParamLimits

0x58a9,	// (0x0001ffa8) form2_mdip_text_pane_t1

0x58c7,	// (0x0001ffc6) form2_midp_time_pane_t1

0xbe5a,	// (0x00026559) form2_midp_gauge_slider_pane_t1

0xbe6c,	// (0x0002656b) form2_midp_gauge_slider_pane_t2

0xbe7e,	// (0x0002657d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0002a1f7) form2_midp_gauge_slider_pane_t

0xbe90,	// (0x0002658f) form2_midp_slider_pane

0xbe9c,	// (0x0002659b) form2_midp_gauge_wait_pane_t1

0xbeaa,	// (0x000265a9) form2_midp_wait_pane_ParamLimits

0xbeaa,	// (0x000265a9) form2_midp_wait_pane

0x9c6d,	// (0x0002436c) list_single_2graphic_pane_cp4_ParamLimits

0x9c6d,	// (0x0002436c) list_single_2graphic_pane_cp4

0xbed5,	// (0x000265d4) list_single_midp_graphic_pane_cp_ParamLimits

0xbed5,	// (0x000265d4) list_single_midp_graphic_pane_cp

0x7733,	// (0x00021e32) list_highlight_pane_cp20

0xbf04,	// (0x00026603) list_single_2graphic_pane_g1_cp4

0xbf0c,	// (0x0002660b) list_single_2graphic_pane_g2_cp4

0xbf14,	// (0x00026613) list_single_2graphic_pane_t1_cp4

0x7813,	// (0x00021f12) list_highlight_pane_cp21

0xbf23,	// (0x00026622) list_single_midp_graphic_pane_g4_cp

0xbf32,	// (0x00026631) list_single_midp_graphic_pane_t1_cp

0xbf47,	// (0x00026646) form2_mdip_string_pane_t1_ParamLimits

0xbf47,	// (0x00026646) form2_mdip_string_pane_t1

0x7733,	// (0x00021e32) bg_wml_button_pane_cp2

0x7729,	// (0x00021e28) form2_midp_image_pane_g1

0x4f13,	// (0x0001f612) list_double_large_graphic_pane_g5_ParamLimits

0x4f13,	// (0x0001f612) list_double_large_graphic_pane_g5

0x8cec,	// (0x000233eb) midp_form_pane_ParamLimits

0x7813,	// (0x00021f12) main_apps_wheel_pane_ParamLimits

0x93eb,	// (0x00023aea) popup_preview_window_ParamLimits

0x93eb,	// (0x00023aea) popup_preview_window

0x95a6,	// (0x00023ca5) popup_touch_info_window_ParamLimits

0x95a6,	// (0x00023ca5) popup_touch_info_window

0x95c4,	// (0x00023cc3) popup_touch_menu_window_ParamLimits

0x95c4,	// (0x00023cc3) popup_touch_menu_window

0x771f,	// (0x00021e1e) bg_popup_sub_pane_cp6

0xc040,	// (0x0002673f) list_touch_menu_pane

0xc048,	// (0x00026747) list_single_touch_menu_pane_ParamLimits

0xc048,	// (0x00026747) list_single_touch_menu_pane

0xc05f,	// (0x0002675e) list_single_touch_menu_pane_t1

0x7813,	// (0x00021f12) bg_popup_sub_pane_cp7_ParamLimits

0x7813,	// (0x00021f12) bg_popup_sub_pane_cp7

0xc06d,	// (0x0002676c) heading_sub_pane

0xc075,	// (0x00026774) list_touch_info_pane_ParamLimits

0xc075,	// (0x00026774) list_touch_info_pane

0xc084,	// (0x00026783) list_single_touch_info_pane_ParamLimits

0xc084,	// (0x00026783) list_single_touch_info_pane

0xc096,	// (0x00026795) list_single_touch_info_pane_t1

0xc0a4,	// (0x000267a3) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0002a205) list_single_touch_info_pane_t

0x8ce4,	// (0x000233e3) bg_popup_heading_pane_cp

0xc0b2,	// (0x000267b1) heading_sub_pane_t1

0x9bdc,	// (0x000242db) bg_popup_preview_window_pane_cp_ParamLimits

0x9bdc,	// (0x000242db) bg_popup_preview_window_pane_cp

0xc06d,	// (0x0002676c) heading_preview_pane

0xc075,	// (0x00026774) list_preview_pane_ParamLimits

0xc075,	// (0x00026774) list_preview_pane

0xc0c0,	// (0x000267bf) popup_preview_window_g1

0xc084,	// (0x00026783) list_single_preview_pane_ParamLimits

0xc084,	// (0x00026783) list_single_preview_pane

0xc0c8,	// (0x000267c7) list_single_preview_pane_g1

0xc0d0,	// (0x000267cf) list_single_preview_pane_t1

0xc096,	// (0x00026795) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0002a20a) list_single_preview_pane_t

0xc0de,	// (0x000267dd) bg_popup_heading_pane_cp2_ParamLimits

0xc0de,	// (0x000267dd) bg_popup_heading_pane_cp2

0xc0f4,	// (0x000267f3) heading_preview_pane_g1

0xc0fc,	// (0x000267fb) heading_preview_pane_t1_ParamLimits

0xc0fc,	// (0x000267fb) heading_preview_pane_t1

0x78ff,	// (0x00021ffe) soft_indicator_pane_t1_ParamLimits

0x7ff2,	// (0x000226f1) scroll_pane_ParamLimits

0x8517,	// (0x00022c16) scroll_sc2_left_pane

0x8520,	// (0x00022c1f) scroll_sc2_right_pane

0x853f,	// (0x00022c3e) scroll_bg_pane_g1_ParamLimits

0x8554,	// (0x00022c53) scroll_bg_pane_g2_ParamLimits

0x856c,	// (0x00022c6b) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x00029dfe) scroll_bg_pane_g_ParamLimits

0x853f,	// (0x00022c3e) scroll_handle_pane_g1_ParamLimits

0x858e,	// (0x00022c8d) scroll_handle_pane_g2_ParamLimits

0x856c,	// (0x00022c6b) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x00029e05) scroll_handle_pane_g_ParamLimits

0x9072,	// (0x00023771) popup_choice_list_window_ParamLimits

0x9072,	// (0x00023771) popup_choice_list_window

0x9a36,	// (0x00024135) choice_list_pane

0x9ab8,	// (0x000241b7) cell_toolbar_pane_t1

0x9ae0,	// (0x000241df) toolbar_button_pane_ParamLimits

0xac0d,	// (0x0002530c) ai_gene_pane_1_t2_ParamLimits

0xac0d,	// (0x0002530c) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002a022) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002a022) ai_gene_pane_1_t

0xc119,	// (0x00026818) scroll_sc2_left_pane_g1

0xc119,	// (0x00026818) scroll_sc2_right_pane_g1

0x904a,	// (0x00023749) bg_popup_sub_pane_cp10

0xc123,	// (0x00026822) list_choice_list_pane

0xc13a,	// (0x00026839) list_single_choice_list_pane_ParamLimits

0xc13a,	// (0x00026839) list_single_choice_list_pane

0xc14e,	// (0x0002684d) list_single_choice_list_pane_g1

0xc156,	// (0x00026855) list_single_choice_list_pane_t1_ParamLimits

0xc156,	// (0x00026855) list_single_choice_list_pane_t1

0xc16b,	// (0x0002686a) choice_list_pane_g1

0xc173,	// (0x00026872) choice_list_pane_t1

0x771f,	// (0x00021e1e) input_focus_pane_cp11

0x83f4,	// (0x00022af3) title_pane_stacon_g2_ParamLimits

0x83f4,	// (0x00022af3) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x00029de4) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00029de4) title_pane_stacon_g

0x8ce4,	// (0x000233e3) cursor_press_pane

0x911a,	// (0x00023819) popup_fep_hwr_window_ParamLimits

0x911a,	// (0x00023819) popup_fep_hwr_window

0x9194,	// (0x00023893) popup_fep_vkb_window_ParamLimits

0x9194,	// (0x00023893) popup_fep_vkb_window

0xc181,	// (0x00026880) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002a233) fep_vkb_side_pane_g_ParamLimits

0x6b52,	// (0x00021251) fep_hwr_candidate_pane_ParamLimits

0x6b52,	// (0x00021251) fep_hwr_candidate_pane

0x6b7c,	// (0x0002127b) fep_hwr_side_pane_ParamLimits

0x6b7c,	// (0x0002127b) fep_hwr_side_pane

0x6b9c,	// (0x0002129b) fep_hwr_top_pane_ParamLimits

0x6b9c,	// (0x0002129b) fep_hwr_top_pane

0x6bb4,	// (0x000212b3) fep_hwr_write_pane_ParamLimits

0x6bb4,	// (0x000212b3) fep_hwr_write_pane

0xfb34,	// (0x0002a233) fep_vkb_side_pane_g

0xc189,	// (0x00026888) fep_hwr_top_pane_g1

0xc19b,	// (0x0002689a) fep_hwr_top_pane_g2

0x6be0,	// (0x000212df) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0002a20f) fep_hwr_top_pane_g

0x6bf5,	// (0x000212f4) fep_hwr_top_text_pane

0x8707,	// (0x00022e06) fep_hwr_top_text_pane_g1

0xc1d1,	// (0x000268d0) fep_hwr_top_text_pane_t1

0x6ceb,	// (0x000213ea) fep_hwr_candidate_pane_g1

0xc424,	// (0x00026b23) fep_vkb_keypad_pane_g3_ParamLimits

0xc424,	// (0x00026b23) fep_vkb_keypad_pane_g3

0xc44c,	// (0x00026b4b) fep_vkb_keypad_pane_g4_ParamLimits

0xc44c,	// (0x00026b4b) fep_vkb_keypad_pane_g4

0xc4bb,	// (0x00026bba) fep_vkb_bottom_pane_g2_ParamLimits

0xc4bb,	// (0x00026bba) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0002a23a) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0002a23a) fep_vkb_bottom_pane_g

0xc119,	// (0x00026818) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002a244) cell_vkb_side_pane_g

0xc546,	// (0x00026c45) cell_vkb_side_pane_t1

0xc554,	// (0x00026c53) cell_vkb_side_pane_t1_copy1

0xc119,	// (0x00026818) bg_fep_vkb_candidate_pane_g2

0xc680,	// (0x00026d7f) cell_vkb_candidate_pane_ParamLimits

0xc1df,	// (0x000268de) aid_size_cell_vkb_ParamLimits

0xc1df,	// (0x000268de) aid_size_cell_vkb

0xc680,	// (0x00026d7f) cell_vkb_candidate_pane

0x6d05,	// (0x00021404) bg_popup_fep_shadow_pane_g1

0xc26d,	// (0x0002696c) fep_vkb_bottom_pane_ParamLimits

0xc26d,	// (0x0002696c) fep_vkb_bottom_pane

0xc2a3,	// (0x000269a2) fep_vkb_candidate_pane_ParamLimits

0xc2a3,	// (0x000269a2) fep_vkb_candidate_pane

0xc2bf,	// (0x000269be) fep_vkb_keypad_pane_ParamLimits

0xc2bf,	// (0x000269be) fep_vkb_keypad_pane

0xc305,	// (0x00026a04) fep_vkb_side_pane_ParamLimits

0xc305,	// (0x00026a04) fep_vkb_side_pane

0xc341,	// (0x00026a40) fep_vkb_top_pane_ParamLimits

0xc341,	// (0x00026a40) fep_vkb_top_pane

0xc37d,	// (0x00026a7c) fep_vkb_top_pane_g1_ParamLimits

0xc37d,	// (0x00026a7c) fep_vkb_top_pane_g1

0xc38c,	// (0x00026a8b) fep_vkb_top_pane_g2_ParamLimits

0xc38c,	// (0x00026a8b) fep_vkb_top_pane_g2

0xc39b,	// (0x00026a9a) fep_vkb_top_pane_g3_ParamLimits

0xc39b,	// (0x00026a9a) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0002a22a) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0002a22a) fep_vkb_top_pane_g

0xc3b9,	// (0x00026ab8) fep_vkb_top_text_pane_ParamLimits

0xc3b9,	// (0x00026ab8) fep_vkb_top_text_pane

0xc3ca,	// (0x00026ac9) fep_vkb_side_pane_g1_ParamLimits

0xc3ca,	// (0x00026ac9) fep_vkb_side_pane_g1

0xc413,	// (0x00026b12) grid_vkb_side_pane_ParamLimits

0xc413,	// (0x00026b12) grid_vkb_side_pane

0x6d0d,	// (0x0002140c) bg_popup_fep_shadow_pane_g2

0x6d16,	// (0x00021415) bg_popup_fep_shadow_pane_g3

0x6d1e,	// (0x0002141d) bg_popup_fep_shadow_pane_g4

0x6d27,	// (0x00021426) bg_popup_fep_shadow_pane_g5

0x6d31,	// (0x00021430) bg_popup_fep_shadow_pane_g6

0x6d39,	// (0x00021438) bg_popup_fep_shadow_pane_g7

0x8106,	// (0x00022805) bg_popup_fep_shadow_pane_g8

0xc46a,	// (0x00026b69) grid_vkb_keypad_number_pane_ParamLimits

0xc46a,	// (0x00026b69) grid_vkb_keypad_number_pane

0xc47a,	// (0x00026b79) grid_vkb_keypad_pane_ParamLimits

0xc47a,	// (0x00026b79) grid_vkb_keypad_pane

0xc4a0,	// (0x00026b9f) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a0,	// (0x00026b9f) fep_vkb_bottom_pane_g1

0xc4c9,	// (0x00026bc8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4c9,	// (0x00026bc8) grid_vkb_keypad_bottom_left_pane

0xc4de,	// (0x00026bdd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4de,	// (0x00026bdd) grid_vkb_keypad_bottom_right_pane

0xc4f3,	// (0x00026bf2) fep_vkb_top_text_pane_g1

0xc50e,	// (0x00026c0d) fep_vkb_top_text_pane_t1

0xc523,	// (0x00026c22) cell_vkb_side_pane_ParamLimits

0xc523,	// (0x00026c22) cell_vkb_side_pane

0xc119,	// (0x00026818) cell_vkb_side_pane_g1

0xc562,	// (0x00026c61) cell_vkb_keypad_pane_ParamLimits

0xc562,	// (0x00026c61) cell_vkb_keypad_pane

0xc5d7,	// (0x00026cd6) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0002a257) bg_popup_fep_shadow_pane_g

0xc119,	// (0x00026818) cell_hwr_side_pane_g1

0xc119,	// (0x00026818) cell_hwr_side_pane_g2

0xc5e1,	// (0x00026ce0) cell_vkb_keypad_pane_t1

0xc5ef,	// (0x00026cee) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5ef,	// (0x00026cee) cell_vkb_keypad_bottom_left_pane

0xc60c,	// (0x00026d0b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc60c,	// (0x00026d0b) cell_vkb_keypad_bottom_right_pane

0xc119,	// (0x00026818) cell_vkb_keypad_bottom_left_pane_g1

0xc119,	// (0x00026818) cell_vkb_keypad_bottom_right_pane_g1

0xc645,	// (0x00026d44) cell_vkb_keypad_number_pane_ParamLimits

0xc645,	// (0x00026d44) cell_vkb_keypad_number_pane

0xc664,	// (0x00026d63) cell_vkb_keypad_number_pane_g1

0xc66e,	// (0x00026d6d) cell_vkb_keypad_number_pane_g2

0xc677,	// (0x00026d76) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0002a249) cell_vkb_keypad_number_pane_g

0xc5e1,	// (0x00026ce0) cell_vkb_keypad_number_pane_t1

0xc69b,	// (0x00026d9a) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0002a244) cell_hwr_side_pane_g

0xc6b4,	// (0x00026db3) cell_hwr_side_pane_t1

0x6d4b,	// (0x0002144a) cell_hwr_side_pane_t1_copy1

0xc3ab,	// (0x00026aaa) cell_hwr_candidate_pane_g1

0x6d59,	// (0x00021458) cell_hwr_candidate_pane_t1

0xc119,	// (0x00026818) cell_vkb_candidate_pane_g2

0xc719,	// (0x00026e18) cell_vkb_candidate_pane_t1

0xc82b,	// (0x00026f2a) bg_popup_fep_shadow_pane_ParamLimits

0xc82b,	// (0x00026f2a) bg_popup_fep_shadow_pane

0x13bb,	// (0x0001baba) bg_fep_hwr_top_pane_g4

0xc1ad,	// (0x000268ac) bg_hwr_side_pane_g1_ParamLimits

0xc1ad,	// (0x000268ac) bg_hwr_side_pane_g1

0x6c31,	// (0x00021330) cell_hwr_side_pane_ParamLimits

0x6c31,	// (0x00021330) cell_hwr_side_pane

0x6c6c,	// (0x0002136b) fep_hwr_write_pane_g1_ParamLimits

0x6c6c,	// (0x0002136b) fep_hwr_write_pane_g1

0x6c79,	// (0x00021378) fep_hwr_write_pane_g2_ParamLimits

0x6c79,	// (0x00021378) fep_hwr_write_pane_g2

0x6c86,	// (0x00021385) fep_hwr_write_pane_g3_ParamLimits

0x6c86,	// (0x00021385) fep_hwr_write_pane_g3

0x6c94,	// (0x00021393) fep_hwr_write_pane_g4_ParamLimits

0x6c94,	// (0x00021393) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002a216) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002a216) fep_hwr_write_pane_g

0x13bb,	// (0x0001baba) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x13bb,	// (0x0001baba) bg_fep_hwr_candidate_pane_g2

0x6ca9,	// (0x000213a8) cell_hwr_candidate_pane_ParamLimits

0x6ca9,	// (0x000213a8) cell_hwr_candidate_pane

0x6ceb,	// (0x000213ea) fep_hwr_candidate_pane_g1_ParamLimits

0xc20d,	// (0x0002690c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc20d,	// (0x0002690c) bg_popup_fep_shadow_pane_cp2

0xc3ab,	// (0x00026aaa) fep_vkb_top_pane_g4_ParamLimits

0xc3ab,	// (0x00026aaa) fep_vkb_top_pane_g4

0xc3f1,	// (0x00026af0) fep_vkb_side_pane_g2_ParamLimits

0xc3f1,	// (0x00026af0) fep_vkb_side_pane_g2

0x506d,	// (0x0001f76c) list_setting_pane_t4_ParamLimits

0x506d,	// (0x0001f76c) list_setting_pane_t4

0x5107,	// (0x0001f806) list_setting_number_pane_t5_ParamLimits

0x5107,	// (0x0001f806) list_setting_number_pane_t5

0x8749,	// (0x00022e48) list_double_heading_pane_cp2_ParamLimits

0x8749,	// (0x00022e48) list_double_heading_pane_cp2

0x8099,	// (0x00022798) list_double_heading_pane_g1_cp2_ParamLimits

0x8099,	// (0x00022798) list_double_heading_pane_g1_cp2

0x80a5,	// (0x000227a4) list_double_heading_pane_g2_cp2_ParamLimits

0x80a5,	// (0x000227a4) list_double_heading_pane_g2_cp2

0xc727,	// (0x00026e26) list_double_heading_pane_t1_cp2_ParamLimits

0xc727,	// (0x00026e26) list_double_heading_pane_t1_cp2

0xc73d,	// (0x00026e3c) list_double_heading_pane_t2_cp2_ParamLimits

0xc73d,	// (0x00026e3c) list_double_heading_pane_t2_cp2

0x7707,	// (0x00021e06) aid_value_unit2

0x5f36,	// (0x00020635) popup_preview_fixed_window

0x7a9c,	// (0x0002219b) bg_popup_preview_window_pane_cp02

0xc74f,	// (0x00026e4e) list_preview_fixed_pane

0xc795,	// (0x00026e94) list_empty_pane_fp_ParamLimits

0xc795,	// (0x00026e94) list_empty_pane_fp

0xc795,	// (0x00026e94) list_single_cale_day_pane_fp_ParamLimits

0xc795,	// (0x00026e94) list_single_cale_day_pane_fp

0xc795,	// (0x00026e94) list_single_graphic_heading_pane_fp_ParamLimits

0xc795,	// (0x00026e94) list_single_graphic_heading_pane_fp

0xc795,	// (0x00026e94) list_single_graphic_pane_fp_ParamLimits

0xc795,	// (0x00026e94) list_single_graphic_pane_fp

0xc795,	// (0x00026e94) list_single_heading_pane_fp_ParamLimits

0xc795,	// (0x00026e94) list_single_heading_pane_fp

0xc795,	// (0x00026e94) list_single_pane_fp_ParamLimits

0xc795,	// (0x00026e94) list_single_pane_fp

0xc7aa,	// (0x00026ea9) list_single_pane_fp_g1_ParamLimits

0xc7aa,	// (0x00026ea9) list_single_pane_fp_g1

0x58da,	// (0x0001ffd9) list_single_pane_fp_g2_ParamLimits

0x58da,	// (0x0001ffd9) list_single_pane_fp_g2

0x58e6,	// (0x0001ffe5) list_single_pane_fp_g3_ParamLimits

0x58e6,	// (0x0001ffe5) list_single_pane_fp_g3

0xc7b6,	// (0x00026eb5) list_single_pane_fp_g4_ParamLimits

0xc7b6,	// (0x00026eb5) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0002a278) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0002a278) list_single_pane_fp_g

0x58fa,	// (0x0001fff9) list_single_pane_fp_t1_ParamLimits

0x58fa,	// (0x0001fff9) list_single_pane_fp_t1

0x5911,	// (0x00020010) list_single_graphic_pane_fp_g1_ParamLimits

0x5911,	// (0x00020010) list_single_graphic_pane_fp_g1

0xc7aa,	// (0x00026ea9) list_single_graphic_pane_fp_g2_ParamLimits

0xc7aa,	// (0x00026ea9) list_single_graphic_pane_fp_g2

0x58da,	// (0x0001ffd9) list_single_graphic_pane_fp_g3_ParamLimits

0x58da,	// (0x0001ffd9) list_single_graphic_pane_fp_g3

0x58e6,	// (0x0001ffe5) list_single_graphic_pane_fp_g4_ParamLimits

0x58e6,	// (0x0001ffe5) list_single_graphic_pane_fp_g4

0xc7b6,	// (0x00026eb5) list_single_graphic_pane_fp_g5_ParamLimits

0xc7b6,	// (0x00026eb5) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a281) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a281) list_single_graphic_pane_fp_g

0x591d,	// (0x0002001c) list_single_graphic_pane_fp_t1_ParamLimits

0x591d,	// (0x0002001c) list_single_graphic_pane_fp_t1

0x5911,	// (0x00020010) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5911,	// (0x00020010) list_single_graphic_heading_pane_fp_g1

0xc7aa,	// (0x00026ea9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7aa,	// (0x00026ea9) list_single_graphic_heading_pane_fp_g2

0x58da,	// (0x0001ffd9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x58da,	// (0x0001ffd9) list_single_graphic_heading_pane_fp_g3

0x58e6,	// (0x0001ffe5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x58e6,	// (0x0001ffe5) list_single_graphic_heading_pane_fp_g4

0xc7b6,	// (0x00026eb5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7b6,	// (0x00026eb5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a281) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a281) list_single_graphic_heading_pane_fp_g

0x5933,	// (0x00020032) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5933,	// (0x00020032) list_single_graphic_heading_pane_fp_t1

0x5949,	// (0x00020048) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5949,	// (0x00020048) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0002a28c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002a28c) list_single_graphic_heading_pane_fp_t

0x595b,	// (0x0002005a) list_single_cale_day_pane_fp_g1_ParamLimits

0x595b,	// (0x0002005a) list_single_cale_day_pane_fp_g1

0xc7c2,	// (0x00026ec1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7c2,	// (0x00026ec1) list_single_cale_day_pane_fp_g2

0x5993,	// (0x00020092) list_single_cale_day_pane_fp_g3_ParamLimits

0x5993,	// (0x00020092) list_single_cale_day_pane_fp_g3

0x59bb,	// (0x000200ba) list_single_cale_day_pane_fp_g4_ParamLimits

0x59bb,	// (0x000200ba) list_single_cale_day_pane_fp_g4

0x59df,	// (0x000200de) list_single_cale_day_pane_fp_g5_ParamLimits

0x59df,	// (0x000200de) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0002a291) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0002a291) list_single_cale_day_pane_fp_g

0x5a03,	// (0x00020102) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a03,	// (0x00020102) list_single_cale_day_pane_fp_t1

0x5a29,	// (0x00020128) list_single_cale_day_pane_fp_t2_ParamLimits

0x5a29,	// (0x00020128) list_single_cale_day_pane_fp_t2

0x5a42,	// (0x00020141) list_single_cale_day_pane_fp_t3_ParamLimits

0x5a42,	// (0x00020141) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0002a29c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0002a29c) list_single_cale_day_pane_fp_t

0xc7aa,	// (0x00026ea9) list_empty_pane_fp_g1_ParamLimits

0xc7aa,	// (0x00026ea9) list_empty_pane_fp_g1

0x5a5b,	// (0x0002015a) list_empty_pane_fp_t1

0x5a69,	// (0x00020168) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0002a2a3) list_empty_pane_fp_t

0xc7aa,	// (0x00026ea9) list_single_heading_pane_fp_g1_ParamLimits

0xc7aa,	// (0x00026ea9) list_single_heading_pane_fp_g1

0x58da,	// (0x0001ffd9) list_single_heading_pane_fp_g2_ParamLimits

0x58da,	// (0x0001ffd9) list_single_heading_pane_fp_g2

0x58e6,	// (0x0001ffe5) list_single_heading_pane_fp_g3_ParamLimits

0x58e6,	// (0x0001ffe5) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0002a2a8) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002a2a8) list_single_heading_pane_fp_g

0x5a77,	// (0x00020176) list_single_heading_pane_fp_t1_ParamLimits

0x5a77,	// (0x00020176) list_single_heading_pane_fp_t1

0x5a89,	// (0x00020188) list_single_heading_pane_fp_t2_ParamLimits

0x5a89,	// (0x00020188) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0002a2af) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0002a2af) list_single_heading_pane_fp_t

0x828b,	// (0x0002298a) aid_size_cell_fast

0x7a0c,	// (0x0002210b) soft_indicator_pane_cp1_t1

0x82c8,	// (0x000229c7) cell_app_pane_cp2_ParamLimits

0x82c8,	// (0x000229c7) cell_app_pane_cp2

0x6b3b,	// (0x0002123a) fep_hwr_candidate_drop_down_list_pane

0x13c9,	// (0x0001bac8) fep_hwr_candidate_pane_g3_ParamLimits

0x13c9,	// (0x0001bac8) fep_hwr_candidate_pane_g3

0x13d6,	// (0x0001bad5) fep_hwr_candidate_pane_g4_ParamLimits

0x13d6,	// (0x0001bad5) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002a223) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002a223) fep_hwr_candidate_pane_g

0xc292,	// (0x00026991) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc292,	// (0x00026991) fep_vkb_candidate_drop_down_list_pane

0xc6a3,	// (0x00026da2) fep_vkb_candidate_pane_g3

0xc6ab,	// (0x00026daa) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0002a250) fep_vkb_candidate_pane_g

0xc3ab,	// (0x00026aaa) cell_hwr_candidate_pane_g1_ParamLimits

0xc6c2,	// (0x00026dc1) cell_hwr_candidate_pane_g3_ParamLimits

0xc6c2,	// (0x00026dc1) cell_hwr_candidate_pane_g3

0xc839,	// (0x00026f38) cell_hwr_candidate_pane_g4_ParamLimits

0xc839,	// (0x00026f38) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0002a26a) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0002a26a) cell_hwr_candidate_pane_g

0xc6e3,	// (0x00026de2) cell_vkb_candidate_pane_g3_ParamLimits

0xc6e3,	// (0x00026de2) cell_vkb_candidate_pane_g3

0xc6fe,	// (0x00026dfd) cell_vkb_candidate_pane_g4_ParamLimits

0xc6fe,	// (0x00026dfd) cell_vkb_candidate_pane_g4

0xc7ce,	// (0x00026ecd) cell_app_pane_cp2_g1_ParamLimits

0xc7ce,	// (0x00026ecd) cell_app_pane_cp2_g1

0xc7ec,	// (0x00026eeb) cell_app_pane_cp2_g2_ParamLimits

0xc7ec,	// (0x00026eeb) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0002a2b4) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0002a2b4) cell_app_pane_cp2_g

0xc7f8,	// (0x00026ef7) cell_app_pane_cp2_t1_ParamLimits

0xc7f8,	// (0x00026ef7) cell_app_pane_cp2_t1

0x807f,	// (0x0002277e) grid_highlight_pane_cp1_ParamLimits

0x807f,	// (0x0002277e) grid_highlight_pane_cp1

0x6d77,	// (0x00021476) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d77,	// (0x00021476) cell_hwr_candidate_pane_cp1

0xc3ab,	// (0x00026aaa) fep_hwr_candidate_drop_down_list_pane_g1

0xc80a,	// (0x00026f09) fep_hwr_candidate_drop_down_list_pane_g2

0xc85a,	// (0x00026f59) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002a2b9) fep_hwr_candidate_drop_down_list_pane_g

0x6d96,	// (0x00021495) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d9f,	// (0x0002149e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d9f,	// (0x0002149e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6dac,	// (0x000214ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6dac,	// (0x000214ab) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6db9,	// (0x000214b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6db9,	// (0x000214b8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6e3,	// (0x00026de2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6e3,	// (0x00026de2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6fe,	// (0x00026dfd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6fe,	// (0x00026dfd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6dc6,	// (0x000214c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6dc6,	// (0x000214c5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6de1,	// (0x000214e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6de1,	// (0x000214e0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6dfc,	// (0x000214fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6dfc,	// (0x000214fb) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0002a2c0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0002a2c0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc867,	// (0x00026f66) cell_vkb_candidate_pane_cp1_ParamLimits

0xc867,	// (0x00026f66) cell_vkb_candidate_pane_cp1

0xc3ab,	// (0x00026aaa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) fep_vkb_candidate_drop_down_list_pane_g1

0xc80a,	// (0x00026f09) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc80a,	// (0x00026f09) fep_vkb_candidate_drop_down_list_pane_g2

0xc85a,	// (0x00026f59) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc85a,	// (0x00026f59) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002a2b9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0002a2b9) fep_vkb_candidate_drop_down_list_pane_g

0xc887,	// (0x00026f86) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc887,	// (0x00026f86) fep_vkb_candidate_drop_down_list_scroll_pane

0xc894,	// (0x00026f93) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc894,	// (0x00026f93) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc8a1,	// (0x00026fa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc8a1,	// (0x00026fa0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc8ad,	// (0x00026fac) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc8ad,	// (0x00026fac) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6c2,	// (0x00026dc1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6c2,	// (0x00026dc1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc839,	// (0x00026f38) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc839,	// (0x00026f38) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc8b9,	// (0x00026fb8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc8b9,	// (0x00026fb8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8da,	// (0x00026fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8da,	// (0x00026fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8fb,	// (0x00026ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8fb,	// (0x00026ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0002a2d1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0002a2d1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x773d,	// (0x00021e3c) title_pane_g1_ParamLimits

0x774a,	// (0x00021e49) title_pane_g2_ParamLimits

0xf56a,	// (0x00029c69) title_pane_g_ParamLimits

0x86f7,	// (0x00022df6) aid_call2_pane

0x86ff,	// (0x00022dfe) aid_call_pane

0x8707,	// (0x00022e06) popup_clock_analogue_window_g1

0x8707,	// (0x00022e06) popup_clock_analogue_window_g2

0x629f,	// (0x0002099e) popup_clock_analogue_window_g3

0x62a8,	// (0x000209a7) popup_clock_analogue_window_g4

0x7729,	// (0x00021e28) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x00029e13) popup_clock_analogue_window_g

0x62b0,	// (0x000209af) popup_clock_analogue_window_t1

0x62be,	// (0x000209bd) clock_digital_number_pane_ParamLimits

0x62be,	// (0x000209bd) clock_digital_number_pane

0x62ca,	// (0x000209c9) clock_digital_number_pane_cp02_ParamLimits

0x62ca,	// (0x000209c9) clock_digital_number_pane_cp02

0x62d6,	// (0x000209d5) clock_digital_number_pane_cp03_ParamLimits

0x62d6,	// (0x000209d5) clock_digital_number_pane_cp03

0x62e2,	// (0x000209e1) clock_digital_number_pane_cp04_ParamLimits

0x62e2,	// (0x000209e1) clock_digital_number_pane_cp04

0x62ee,	// (0x000209ed) clock_digital_separator_pane_ParamLimits

0x62ee,	// (0x000209ed) clock_digital_separator_pane

0x62fa,	// (0x000209f9) popup_clock_digital_window_t1_ParamLimits

0x62fa,	// (0x000209f9) popup_clock_digital_window_t1

0x7729,	// (0x00021e28) clock_digital_number_pane_g1

0x7729,	// (0x00021e28) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x00029e1e) clock_digital_number_pane_g

0x7729,	// (0x00021e28) clock_digital_separator_pane_g1

0x7729,	// (0x00021e28) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x00029e1e) clock_digital_separator_pane_g

0x9603,	// (0x00023d02) aid_fill_nsta_ParamLimits

0x9751,	// (0x00023e50) indicator_nsta_pane_ParamLimits

0x98c3,	// (0x00023fc2) popup_clock_analogue_window

0x98c3,	// (0x00023fc2) popup_clock_digital_window

0x7813,	// (0x00021f12) grid_indicator_nsta_pane_ParamLimits

0xbaf8,	// (0x000261f7) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002a1a3) clock_nsta_pane_t

0x6263,	// (0x00020962) aid_size_max_handle

0x626d,	// (0x0002096c) aid_size_min_handle

0x8ce4,	// (0x000233e3) editor_scroll_pane

0xc916,	// (0x00027015) ex_editor_pane

0x81f9,	// (0x000228f8) scroll_pane_cp13

0x801e,	// (0x0002271d) scroll_pane_cp14

0x8731,	// (0x00022e30) scroll_pane_cp36

0x875d,	// (0x00022e5c) list_single_graphic_hl_pane_cp2_ParamLimits

0x875d,	// (0x00022e5c) list_single_graphic_hl_pane_cp2

0xb120,	// (0x0002581f) list_single_graphic_hl_pane_ParamLimits

0xb120,	// (0x0002581f) list_single_graphic_hl_pane

0x5a9f,	// (0x0002019e) aid_size_min_hl_cp1

0xc91e,	// (0x0002701d) list_highlight_pane_cp34_ParamLimits

0xc91e,	// (0x0002701d) list_highlight_pane_cp34

0xc92f,	// (0x0002702e) list_single_graphic_hl_pane_g1_ParamLimits

0xc92f,	// (0x0002702e) list_single_graphic_hl_pane_g1

0x5aa8,	// (0x000201a7) list_single_graphic_hl_pane_g2_ParamLimits

0x5aa8,	// (0x000201a7) list_single_graphic_hl_pane_g2

0x5aa8,	// (0x000201a7) list_single_graphic_hl_pane_g3_ParamLimits

0x5aa8,	// (0x000201a7) list_single_graphic_hl_pane_g3

0x54b4,	// (0x0001fbb3) list_single_graphic_hl_pane_g4_ParamLimits

0x54b4,	// (0x0001fbb3) list_single_graphic_hl_pane_g4

0x5ab4,	// (0x000201b3) list_single_graphic_hl_pane_g5_ParamLimits

0x5ab4,	// (0x000201b3) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x0002a2e2) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x0002a2e2) list_single_graphic_hl_pane_g

0x5ac8,	// (0x000201c7) list_single_graphic_hl_pane_t1_ParamLimits

0x5ac8,	// (0x000201c7) list_single_graphic_hl_pane_t1

0xc93c,	// (0x0002703b) aid_size_min_hl_cp2

0xc945,	// (0x00027044) list_highlight_pane_cp34_cp2_ParamLimits

0xc945,	// (0x00027044) list_highlight_pane_cp34_cp2

0xc92f,	// (0x0002702e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc92f,	// (0x0002702e) list_single_graphic_hl_pane_g1_cp2

0xc952,	// (0x00027051) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc952,	// (0x00027051) list_single_graphic_hl_pane_g2_cp2

0xc95e,	// (0x0002705d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc95e,	// (0x0002705d) list_single_graphic_hl_pane_g3_cp2

0xa4ff,	// (0x00024bfe) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa4ff,	// (0x00024bfe) list_single_graphic_hl_pane_g4_cp2

0xc96c,	// (0x0002706b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc96c,	// (0x0002706b) list_single_graphic_hl_pane_g5_cp2

0x65ac,	// (0x00020cab) control_pane_g4_ParamLimits

0x65ac,	// (0x00020cab) control_pane_g4

0x904a,	// (0x00023749) bg_popup_sub_pane_cp10_ParamLimits

0xc123,	// (0x00026822) list_choice_list_pane_ParamLimits

0xc132,	// (0x00026831) scroll_pane_cp23

0x7a9c,	// (0x0002219b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc74f,	// (0x00026e4e) list_preview_fixed_pane_ParamLimits

0xc765,	// (0x00026e64) list_preview_fixed_pane_cp_ParamLimits

0xc765,	// (0x00026e64) list_preview_fixed_pane_cp

0xc771,	// (0x00026e70) popup_preview_fixed_window_g1_ParamLimits

0xc771,	// (0x00026e70) popup_preview_fixed_window_g1

0xc77d,	// (0x00026e7c) popup_preview_fixed_window_g2_ParamLimits

0xc77d,	// (0x00026e7c) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0002a271) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0002a271) popup_preview_fixed_window_g

0x61d7,	// (0x000208d6) aid_navi_side_left_pane_ParamLimits

0x61ec,	// (0x000208eb) aid_navi_side_right_pane_ParamLimits

0x6204,	// (0x00020903) navi_icon_pane_stacon_ParamLimits

0x6218,	// (0x00020917) navi_navi_pane_stacon_ParamLimits

0x6204,	// (0x00020903) navi_text_pane_stacon_ParamLimits

0x771f,	// (0x00021e1e) main_text_info_pane

0xc996,	// (0x00027095) listscroll_text_info_pane

0xc99e,	// (0x0002709d) list_text_info_pane_ParamLimits

0xc99e,	// (0x0002709d) list_text_info_pane

0xc9ad,	// (0x000270ac) scroll_pane_cp24_ParamLimits

0xc9ad,	// (0x000270ac) scroll_pane_cp24

0xc9cb,	// (0x000270ca) list_text_info_pane_t1_ParamLimits

0xc9cb,	// (0x000270ca) list_text_info_pane_t1

0x908c,	// (0x0002378b) popup_fast_swap2_window_ParamLimits

0x908c,	// (0x0002378b) popup_fast_swap2_window

0xc9fc,	// (0x000270fb) aid_size_cell_fast2

0x771f,	// (0x00021e1e) bg_popup_window_pane_cp17

0x9f9e,	// (0x0002469d) heading_pane_cp2

0x7ce8,	// (0x000223e7) listscroll_fast2_pane

0xca06,	// (0x00027105) grid_fast2_pane

0xca10,	// (0x0002710f) listscroll_fast2_pane_g1

0xca18,	// (0x00027117) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x0002a2ed) listscroll_fast2_pane_g

0x81f9,	// (0x000228f8) scroll_pane_cp26

0xca22,	// (0x00027121) cell_fast2_pane_ParamLimits

0xca22,	// (0x00027121) cell_fast2_pane

0xca37,	// (0x00027136) cell_fast2_pane_g1

0xca40,	// (0x0002713f) cell_fast2_pane_g2

0xca49,	// (0x00027148) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x0002a2f2) cell_fast2_pane_g

0x7ddb,	// (0x000224da) grid_highlight_pane_cp9

0x7df0,	// (0x000224ef) main_eswt_pane_ParamLimits

0x7df0,	// (0x000224ef) main_eswt_pane

0xc9c2,	// (0x000270c1) list_single_text_info_pane

0xca51,	// (0x00027150) eswt_ctrl_button_pane

0xca51,	// (0x00027150) eswt_ctrl_canvas_pane

0xca59,	// (0x00027158) eswt_ctrl_combo_pane

0xca51,	// (0x00027150) eswt_ctrl_default_pane

0xca51,	// (0x00027150) eswt_ctrl_label_pane

0xca61,	// (0x00027160) eswt_ctrl_wait_pane

0xca69,	// (0x00027168) eswt_shell_pane

0x771f,	// (0x00021e1e) listscroll_eswt_app_pane

0xca89,	// (0x00027188) popup_eswt_tasktip_window_ParamLimits

0xca89,	// (0x00027188) popup_eswt_tasktip_window

0x9bdc,	// (0x000242db) bg_popup_window_pane_cp18

0xca9a,	// (0x00027199) eswt_control_pane_g1_ParamLimits

0xca9a,	// (0x00027199) eswt_control_pane_g1

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_ParamLimits

0xcaa7,	// (0x000271a6) eswt_control_pane_g2

0xcab4,	// (0x000271b3) eswt_control_pane_g3_ParamLimits

0xcab4,	// (0x000271b3) eswt_control_pane_g3

0xcac1,	// (0x000271c0) eswt_control_pane_g4_ParamLimits

0xcac1,	// (0x000271c0) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0002a2f9) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0002a2f9) eswt_control_pane_g

0x807f,	// (0x0002277e) bg_button_pane_ParamLimits

0x807f,	// (0x0002277e) bg_button_pane

0x7df0,	// (0x000224ef) common_borders_pane_copy2_ParamLimits

0x7df0,	// (0x000224ef) common_borders_pane_copy2

0xcace,	// (0x000271cd) control_button_pane_g1_ParamLimits

0xcace,	// (0x000271cd) control_button_pane_g1

0xcada,	// (0x000271d9) control_button_pane_g2_ParamLimits

0xcada,	// (0x000271d9) control_button_pane_g2

0xcae6,	// (0x000271e5) control_button_pane_g3_ParamLimits

0xcae6,	// (0x000271e5) control_button_pane_g3

0x0002,

0xfc03,	// (0x0002a302) control_button_pane_g_ParamLimits

0xfc03,	// (0x0002a302) control_button_pane_g

0xcafa,	// (0x000271f9) control_button_pane_t1

0xcb08,	// (0x00027207) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0002a309) control_button_pane_t

0x9aec,	// (0x000241eb) bg_button_pane_g1

0x9af4,	// (0x000241f3) bg_button_pane_g2

0x9afc,	// (0x000241fb) bg_button_pane_g3

0x9b04,	// (0x00024203) bg_button_pane_g4

0x9b0c,	// (0x0002420b) bg_button_pane_g5

0x9b14,	// (0x00024213) bg_button_pane_g6

0x9b1c,	// (0x0002421b) bg_button_pane_g7

0x9b24,	// (0x00024223) bg_button_pane_g8

0x9b2c,	// (0x0002422b) bg_button_pane_g9

0x0008,

0xf877,	// (0x00029f76) bg_button_pane_g

0xc0de,	// (0x000267dd) common_borders_pane_ParamLimits

0xc0de,	// (0x000267dd) common_borders_pane

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy1_ParamLimits

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy1

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy1_ParamLimits

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy1

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy1_ParamLimits

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy1

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy1_ParamLimits

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy1

0xc119,	// (0x00026818) bg_eswt_ctrl_canvas_pane_g1

0xc0de,	// (0x000267dd) common_borders_pane_cp2_ParamLimits

0xc0de,	// (0x000267dd) common_borders_pane_cp2

0xc0de,	// (0x000267dd) common_borders_pane_cp3_ParamLimits

0xc0de,	// (0x000267dd) common_borders_pane_cp3

0xcb16,	// (0x00027215) separator_horizontal_pane

0xcb1e,	// (0x0002721d) separator_vertical_pane

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy2_ParamLimits

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy2

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy2_ParamLimits

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy2

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy2_ParamLimits

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy2

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy2_ParamLimits

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy2

0x771f,	// (0x00021e1e) common_borders_pane_cp4

0xcb27,	// (0x00027226) separator_horizontal_pane_g1

0xcb30,	// (0x0002722f) separator_horizontal_pane_g2

0xcb39,	// (0x00027238) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x0002a30e) separator_horizontal_pane_g

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy3_ParamLimits

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy3

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy3_ParamLimits

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy3

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy3_ParamLimits

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy3

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy3_ParamLimits

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy3

0x771f,	// (0x00021e1e) common_borders_pane_cp5

0xcb42,	// (0x00027241) separator_vertical_pane_g1

0xcb4b,	// (0x0002724a) separator_vertical_pane_g2

0xcb54,	// (0x00027253) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0002a315) separator_vertical_pane_g

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy4_ParamLimits

0xca9a,	// (0x00027199) eswt_control_pane_g1_copy4

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy4_ParamLimits

0xcaa7,	// (0x000271a6) eswt_control_pane_g2_copy4

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy4_ParamLimits

0xcab4,	// (0x000271b3) eswt_control_pane_g3_copy4

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy4_ParamLimits

0xcac1,	// (0x000271c0) eswt_control_pane_g4_copy4

0xcb5d,	// (0x0002725c) eswt_ctrl_combo_button_pane

0xcb65,	// (0x00027264) eswt_ctrl_input_pane

0xcb6d,	// (0x0002726c) popup_choice_list_window_cp70

0xcb75,	// (0x00027274) eswt_ctrl_input_pane_t1

0x771f,	// (0x00021e1e) input_focus_pane_cp70

0xc0de,	// (0x000267dd) bg_button_pane_cp70_ParamLimits

0xc0de,	// (0x000267dd) bg_button_pane_cp70

0xcb83,	// (0x00027282) eswt_ctrl_combo_button_pane_g1

0xcb8b,	// (0x0002728a) wait_bar_pane_cp70

0x9bdc,	// (0x000242db) bg_popup_window_pane_cp70_ParamLimits

0x9bdc,	// (0x000242db) bg_popup_window_pane_cp70

0xcb93,	// (0x00027292) popup_eswt_tasktip_window_t1

0xcba9,	// (0x000272a8) wait_bar_pane_cp71_ParamLimits

0xcba9,	// (0x000272a8) wait_bar_pane_cp71

0xcbb5,	// (0x000272b4) grid_eswt_app_pane

0x8520,	// (0x00022c1f) scroll_pane_cp70

0xcbbe,	// (0x000272bd) cell_eswt_app_pane_ParamLimits

0xcbbe,	// (0x000272bd) cell_eswt_app_pane

0xcbee,	// (0x000272ed) cell_eswt_app_pane_g1_ParamLimits

0xcbee,	// (0x000272ed) cell_eswt_app_pane_g1

0xcc1d,	// (0x0002731c) cell_eswt_app_pane_g2_ParamLimits

0xcc1d,	// (0x0002731c) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0002a31c) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0002a31c) cell_eswt_app_pane_g

0xcc46,	// (0x00027345) cell_eswt_app_pane_t1_ParamLimits

0xcc46,	// (0x00027345) cell_eswt_app_pane_t1

0xcc78,	// (0x00027377) grid_highlight_pane_cp70_ParamLimits

0xcc78,	// (0x00027377) grid_highlight_pane_cp70

0x8bb9,	// (0x000232b8) set_content_pane_g1

0x8f90,	// (0x0002368f) status_small_volume_pane

0x6e17,	// (0x00021516) status_small_volume_pane_g1

0x6e1f,	// (0x0002151e) volume_small2_pane

0x6e28,	// (0x00021527) volume_small2_pane_g1

0x6e31,	// (0x00021530) volume_small2_pane_g2

0x6e3a,	// (0x00021539) volume_small2_pane_g3

0x6e43,	// (0x00021542) volume_small2_pane_g4

0x6e4c,	// (0x0002154b) volume_small2_pane_g5

0x6e55,	// (0x00021554) volume_small2_pane_g6

0x6e5e,	// (0x0002155d) volume_small2_pane_g7

0x6e67,	// (0x00021566) volume_small2_pane_g8

0x6e70,	// (0x0002156f) volume_small2_pane_g9

0x6e79,	// (0x00021578) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x0002a321) volume_small2_pane_g

0xc4f3,	// (0x00026bf2) fep_vkb_top_text_pane_g1_ParamLimits

0xc50e,	// (0x00026c0d) fep_vkb_top_text_pane_t1_ParamLimits

0xc789,	// (0x00026e88) popup_preview_fixed_window_g3_ParamLimits

0xc789,	// (0x00026e88) popup_preview_fixed_window_g3

0x9539,	// (0x00023c38) popup_toolbar_trans_pane

0xaf2a,	// (0x00025629) aid_height_set_list_ParamLimits

0xaf3b,	// (0x0002563a) aid_size_parent_ParamLimits

0x904a,	// (0x00023749) list_highlight_pane_cp2_ParamLimits

0x8bb9,	// (0x000232b8) set_content_pane_g1_ParamLimits

0x5634,	// (0x0001fd33) list_single_image_pane_ParamLimits

0x5634,	// (0x0001fd33) list_single_image_pane

0xcc84,	// (0x00027383) aid_size_cell_image_ParamLimits

0xcc84,	// (0x00027383) aid_size_cell_image

0xcc91,	// (0x00027390) grid_single_image_pane_ParamLimits

0xcc91,	// (0x00027390) grid_single_image_pane

0x86d5,	// (0x00022dd4) list_single_image_pane_g1_ParamLimits

0x86d5,	// (0x00022dd4) list_single_image_pane_g1

0xc817,	// (0x00026f16) list_single_image_pane_g2_ParamLimits

0xc817,	// (0x00026f16) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0002a336) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0002a336) list_single_image_pane_g

0x86e1,	// (0x00022de0) list_single_image_pane_t1_ParamLimits

0x86e1,	// (0x00022de0) list_single_image_pane_t1

0xcc9f,	// (0x0002739e) cell_image_list_pane_ParamLimits

0xcc9f,	// (0x0002739e) cell_image_list_pane

0xccb2,	// (0x000273b1) cell_image_list_pane_g1

0xccbb,	// (0x000273ba) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0002a33b) cell_image_list_pane_g

0xccc4,	// (0x000273c3) aid_size_cell_tb_trans_pane

0x807f,	// (0x0002277e) bg_tb_trans_pane

0xccd6,	// (0x000273d5) grid_tb_trans_pane

0x9aec,	// (0x000241eb) bg_tb_trans_pane_g1

0x9af4,	// (0x000241f3) bg_tb_trans_pane_g2

0x9afc,	// (0x000241fb) bg_tb_trans_pane_g3

0x9b04,	// (0x00024203) bg_tb_trans_pane_g4

0x9b0c,	// (0x0002420b) bg_tb_trans_pane_g5

0x9b24,	// (0x00024223) bg_tb_trans_pane_g6

0x9b2c,	// (0x0002422b) bg_tb_trans_pane_g7

0x9b14,	// (0x00024213) bg_tb_trans_pane_g8

0x9b1c,	// (0x0002421b) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0002a340) bg_tb_trans_pane_g

0xccea,	// (0x000273e9) cell_toolbar_trans_pane_ParamLimits

0xccea,	// (0x000273e9) cell_toolbar_trans_pane

0xc119,	// (0x00026818) cell_toolbar_trans_pane_g1

0xbce2,	// (0x000263e1) list_form2_midp_pane_t1

0xbcf0,	// (0x000263ef) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0002a1e9) list_form2_midp_pane_t

0xbcfe,	// (0x000263fd) scroll_pane_cp51_ParamLimits

0xbeba,	// (0x000265b9) form2_midp_wait_pane_g1

0xbec3,	// (0x000265c2) form2_midp_wait_pane_g2

0xbecc,	// (0x000265cb) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0002a1fe) form2_midp_wait_pane_g

0x7813,	// (0x00021f12) list_highlight_pane_cp21_ParamLimits

0xbf23,	// (0x00026622) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf32,	// (0x00026631) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x55d5,	// (0x0001fcd4) list_single_2graphic_im_pane_ParamLimits

0x55d5,	// (0x0001fcd4) list_single_2graphic_im_pane

0xcd10,	// (0x0002740f) list_single_2graphic_im_pane_g1_ParamLimits

0xcd10,	// (0x0002740f) list_single_2graphic_im_pane_g1

0xcd21,	// (0x00027420) list_single_2graphic_im_pane_g2_ParamLimits

0xcd21,	// (0x00027420) list_single_2graphic_im_pane_g2

0xcd2d,	// (0x0002742c) list_single_2graphic_im_pane_g3_ParamLimits

0xcd2d,	// (0x0002742c) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x0002a353) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x0002a353) list_single_2graphic_im_pane_g

0xcd4d,	// (0x0002744c) list_single_2graphic_im_pane_t1_ParamLimits

0xcd4d,	// (0x0002744c) list_single_2graphic_im_pane_t1

0xc795,	// (0x00026e94) list_single_graphic_2heading_pane_fp_ParamLimits

0xc795,	// (0x00026e94) list_single_graphic_2heading_pane_fp

0x5911,	// (0x00020010) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5911,	// (0x00020010) list_single_graphic_2heading_pane_fp_g1

0xc7aa,	// (0x00026ea9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7aa,	// (0x00026ea9) list_single_graphic_2heading_pane_fp_g2

0x58da,	// (0x0001ffd9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x58da,	// (0x0001ffd9) list_single_graphic_2heading_pane_fp_g3

0x58e6,	// (0x0001ffe5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x58e6,	// (0x0001ffe5) list_single_graphic_2heading_pane_fp_g4

0xc7b6,	// (0x00026eb5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7b6,	// (0x00026eb5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002a281) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002a281) list_single_graphic_2heading_pane_fp_g

0x5ade,	// (0x000201dd) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5ade,	// (0x000201dd) list_single_graphic_2heading_pane_fp_t1

0x5949,	// (0x00020048) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5949,	// (0x00020048) list_single_graphic_2heading_pane_fp_t2

0x5af4,	// (0x000201f3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5af4,	// (0x000201f3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0002a35c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0002a35c) list_single_graphic_2heading_pane_fp_t

0xc1b9,	// (0x000268b8) fep_hwr_write_pane_g5_ParamLimits

0xc1b9,	// (0x000268b8) fep_hwr_write_pane_g5

0xc1c5,	// (0x000268c4) fep_hwr_write_pane_g6_ParamLimits

0xc1c5,	// (0x000268c4) fep_hwr_write_pane_g6

0xca69,	// (0x00027168) eswt_shell_pane_ParamLimits

0x9bdc,	// (0x000242db) bg_popup_window_pane_cp18_ParamLimits

0xae83,	// (0x00025582) heading_pane_cp70

0xcb93,	// (0x00027292) popup_eswt_tasktip_window_t1_ParamLimits

0x9664,	// (0x00023d63) aid_touch_tab_arrow_left

0x9670,	// (0x00023d6f) aid_touch_tab_arrow_right

0x775b,	// (0x00021e5a) title_pane_g3_ParamLimits

0x775b,	// (0x00021e5a) title_pane_g3

0x803e,	// (0x0002273d) set_value_pane_g1

0x9539,	// (0x00023c38) popup_toolbar_trans_pane_ParamLimits

0xccc4,	// (0x000273c3) aid_size_cell_tb_trans_pane_ParamLimits

0x807f,	// (0x0002277e) bg_tb_trans_pane_ParamLimits

0xccd6,	// (0x000273d5) grid_tb_trans_pane_ParamLimits

0x7a9c,	// (0x0002219b) cont_note_pane_ParamLimits

0x7a9c,	// (0x0002219b) cont_note_pane

0x7df0,	// (0x000224ef) cont_snote2_single_text_pane_ParamLimits

0x7df0,	// (0x000224ef) cont_snote2_single_text_pane

0x7df0,	// (0x000224ef) cont_snote2_single_graphic_pane_ParamLimits

0x7df0,	// (0x000224ef) cont_snote2_single_graphic_pane

0xa1b9,	// (0x000248b8) cont_note_wait_pane_ParamLimits

0xa1b9,	// (0x000248b8) cont_note_wait_pane

0xa1b9,	// (0x000248b8) cont_note_image_pane_ParamLimits

0xa1b9,	// (0x000248b8) cont_note_image_pane

0xcd7e,	// (0x0002747d) popup_note2_window_g1_ParamLimits

0xcd7e,	// (0x0002747d) popup_note2_window_g1

0xcdaf,	// (0x000274ae) popup_note2_window_t1_ParamLimits

0xcdaf,	// (0x000274ae) popup_note2_window_t1

0xcdf4,	// (0x000274f3) popup_note2_window_t2_ParamLimits

0xcdf4,	// (0x000274f3) popup_note2_window_t2

0xce39,	// (0x00027538) popup_note2_window_t3_ParamLimits

0xce39,	// (0x00027538) popup_note2_window_t3

0xce7e,	// (0x0002757d) popup_note2_window_t4_ParamLimits

0xce7e,	// (0x0002757d) popup_note2_window_t4

0x7b20,	// (0x0002221f) popup_note2_window_t5_ParamLimits

0x7b20,	// (0x0002221f) popup_note2_window_t5

0x0004,

0xfc69,	// (0x0002a368) popup_note2_window_t_ParamLimits

0xfc69,	// (0x0002a368) popup_note2_window_t

0xcead,	// (0x000275ac) popup_note2_image_window_g1_ParamLimits

0xcead,	// (0x000275ac) popup_note2_image_window_g1

0xceb9,	// (0x000275b8) popup_note2_image_window_g2_ParamLimits

0xceb9,	// (0x000275b8) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x0002a373) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x0002a373) popup_note2_image_window_g

0xcecb,	// (0x000275ca) popup_note2_image_window_t1_ParamLimits

0xcecb,	// (0x000275ca) popup_note2_image_window_t1

0xcee3,	// (0x000275e2) popup_note2_image_window_t2_ParamLimits

0xcee3,	// (0x000275e2) popup_note2_image_window_t2

0xcefb,	// (0x000275fa) popup_note2_image_window_t3_ParamLimits

0xcefb,	// (0x000275fa) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x0002a378) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x0002a378) popup_note2_image_window_t

0xa1c7,	// (0x000248c6) popup_note2_wait_window_g1_ParamLimits

0xa1c7,	// (0x000248c6) popup_note2_wait_window_g1

0xcf17,	// (0x00027616) popup_note2_wait_window_g2_ParamLimits

0xcf17,	// (0x00027616) popup_note2_wait_window_g2

0xa1df,	// (0x000248de) popup_note2_wait_window_g3_ParamLimits

0xa1df,	// (0x000248de) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x0002a37f) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x0002a37f) popup_note2_wait_window_g

0xcf23,	// (0x00027622) popup_note2_wait_window_t1_ParamLimits

0xcf23,	// (0x00027622) popup_note2_wait_window_t1

0xcf41,	// (0x00027640) popup_note2_wait_window_t2_ParamLimits

0xcf41,	// (0x00027640) popup_note2_wait_window_t2

0xcf5f,	// (0x0002765e) popup_note2_wait_window_t3_ParamLimits

0xcf5f,	// (0x0002765e) popup_note2_wait_window_t3

0xcf71,	// (0x00027670) popup_note2_wait_window_t4_ParamLimits

0xcf71,	// (0x00027670) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002a386) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002a386) popup_note2_wait_window_t

0xcf83,	// (0x00027682) wait_bar2_pane_ParamLimits

0xcf83,	// (0x00027682) wait_bar2_pane

0xcf9b,	// (0x0002769a) popup_snote2_single_text_window_g1_ParamLimits

0xcf9b,	// (0x0002769a) popup_snote2_single_text_window_g1

0xcfc3,	// (0x000276c2) popup_snote2_single_text_window_t1_ParamLimits

0xcfc3,	// (0x000276c2) popup_snote2_single_text_window_t1

0xd00f,	// (0x0002770e) popup_snote2_single_text_window_t2_ParamLimits

0xd00f,	// (0x0002770e) popup_snote2_single_text_window_t2

0xd05b,	// (0x0002775a) popup_snote2_single_text_window_t3_ParamLimits

0xd05b,	// (0x0002775a) popup_snote2_single_text_window_t3

0xd09c,	// (0x0002779b) popup_snote2_single_text_window_t4_ParamLimits

0xd09c,	// (0x0002779b) popup_snote2_single_text_window_t4

0xd0d2,	// (0x000277d1) popup_snote2_single_text_window_t5_ParamLimits

0xd0d2,	// (0x000277d1) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002a38f) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002a38f) popup_snote2_single_text_window_t

0xd0fd,	// (0x000277fc) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0fd,	// (0x000277fc) popup_snote2_single_graphic_window_g1

0xd125,	// (0x00027824) popup_snote2_single_graphic_window_g2_ParamLimits

0xd125,	// (0x00027824) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002a39a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002a39a) popup_snote2_single_graphic_window_g

0xd14d,	// (0x0002784c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd14d,	// (0x0002784c) popup_snote2_single_graphic_window_t1

0xd199,	// (0x00027898) popup_snote2_single_graphic_window_t2_ParamLimits

0xd199,	// (0x00027898) popup_snote2_single_graphic_window_t2

0xd05b,	// (0x0002775a) popup_snote2_single_graphic_window_t3_ParamLimits

0xd05b,	// (0x0002775a) popup_snote2_single_graphic_window_t3

0xd09c,	// (0x0002779b) popup_snote2_single_graphic_window_t4_ParamLimits

0xd09c,	// (0x0002779b) popup_snote2_single_graphic_window_t4

0xd0d2,	// (0x000277d1) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0d2,	// (0x000277d1) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002a39f) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002a39f) popup_snote2_single_graphic_window_t

0xbbbb,	// (0x000262ba) clock_nsta_pane_cp2_t1

0xbbbb,	// (0x000262ba) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0002a1bf) clock_nsta_pane_cp2_t

0x520e,	// (0x0001f90d) form_field_data_wide_pane_g1_ParamLimits

0x8099,	// (0x00022798) form_field_data_wide_pane_g2_ParamLimits

0x8099,	// (0x00022798) form_field_data_wide_pane_g2

0x80a5,	// (0x000227a4) form_field_data_wide_pane_g3_ParamLimits

0x80a5,	// (0x000227a4) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x00029d96) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x00029d96) form_field_data_wide_pane_g

0xba94,	// (0x00026193) grid_touch_3_pane_ParamLimits

0xba94,	// (0x00026193) grid_touch_3_pane

0xd1e5,	// (0x000278e4) cell_touch_3_pane_ParamLimits

0xd1e5,	// (0x000278e4) cell_touch_3_pane

0xc119,	// (0x00026818) cell_touch_3_pane_g1

0xc119,	// (0x00026818) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002a244) cell_touch_3_pane_g

0x7b52,	// (0x00022251) cont_query_data_pane

0x7b5a,	// (0x00022259) cont_query_data_pane_cp1

0xd213,	// (0x00027912) button_value_adjust_pane_cp7

0xd21b,	// (0x0002791a) query_popup_pane_cp3

0x87cc,	// (0x00022ecb) bg_popup_sub_pane_cp22_ParamLimits

0x6319,	// (0x00020a18) navi_navi_volume_pane_cp2

0x6334,	// (0x00020a33) popup_side_volume_key_window_g2

0x6343,	// (0x00020a42) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00029e28) popup_side_volume_key_window_g

0x6360,	// (0x00020a5f) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00029e2f) popup_side_volume_key_window_t

0x8a83,	// (0x00023182) popup_side_volume_key_window_ParamLimits

0x4e49,	// (0x0001f548) list_double_graphic_pane_g4_ParamLimits

0x4e49,	// (0x0001f548) list_double_graphic_pane_g4

0x5614,	// (0x0001fd13) list_single_2heading_msg_pane_ParamLimits

0x5614,	// (0x0001fd13) list_single_2heading_msg_pane

0x5b14,	// (0x00020213) list_single_2heading_msg_pane_g1_ParamLimits

0x5b14,	// (0x00020213) list_single_2heading_msg_pane_g1

0x4c78,	// (0x0001f377) list_single_2heading_msg_pane_g2_ParamLimits

0x4c78,	// (0x0001f377) list_single_2heading_msg_pane_g2

0x5b20,	// (0x0002021f) list_single_2heading_msg_pane_g3_ParamLimits

0x5b20,	// (0x0002021f) list_single_2heading_msg_pane_g3

0x5b2c,	// (0x0002022b) list_single_2heading_msg_pane_g4_ParamLimits

0x5b2c,	// (0x0002022b) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002a3aa) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002a3aa) list_single_2heading_msg_pane_g

0x5b44,	// (0x00020243) list_single_2heading_msg_pane_t1_ParamLimits

0x5b44,	// (0x00020243) list_single_2heading_msg_pane_t1

0x5b6c,	// (0x0002026b) list_single_2heading_msg_pane_t2_ParamLimits

0x5b6c,	// (0x0002026b) list_single_2heading_msg_pane_t2

0x5ba0,	// (0x0002029f) list_single_2heading_msg_pane_t3_ParamLimits

0x5ba0,	// (0x0002029f) list_single_2heading_msg_pane_t3

0x5bd9,	// (0x000202d8) list_single_2heading_msg_pane_t4_ParamLimits

0x5bd9,	// (0x000202d8) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002a3b3) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002a3b3) list_single_2heading_msg_pane_t

0x7767,	// (0x00021e66) title_pane_g4_ParamLimits

0x7767,	// (0x00021e66) title_pane_g4

0x6127,	// (0x00020826) title_pane_stacon_g3_ParamLimits

0x6127,	// (0x00020826) title_pane_stacon_g3

0xcd41,	// (0x00027440) list_single_2graphic_im_pane_g4_ParamLimits

0xcd41,	// (0x00027440) list_single_2graphic_im_pane_g4

0xac2a,	// (0x00025329) popup_side_volume_key_window_cp

0xb427,	// (0x00025b26) main_idle_act2_pane_t1

0x66e5,	// (0x00020de4) toolbar_button_pane_g10

0x7fe8,	// (0x000226e7) popup_toolbar_window_cp1

0xbbac,	// (0x000262ab) clock_nsta_pane_cp_t1

0xbbac,	// (0x000262ab) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0002a1ba) clock_nsta_pane_cp_t

0x6319,	// (0x00020a18) navi_navi_volume_pane_cp2_ParamLimits

0x6328,	// (0x00020a27) popup_side_volume_key_window_g1_ParamLimits

0x6334,	// (0x00020a33) popup_side_volume_key_window_g2_ParamLimits

0x6343,	// (0x00020a42) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00029e28) popup_side_volume_key_window_g_ParamLimits

0x6b27,	// (0x00021226) fep_hwr_aid_pane

0x13bb,	// (0x0001baba) bg_fep_hwr_top_pane_g4_ParamLimits

0xc189,	// (0x00026888) fep_hwr_top_pane_g1_ParamLimits

0xc19b,	// (0x0002689a) fep_hwr_top_pane_g2_ParamLimits

0x6be0,	// (0x000212df) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0002a20f) fep_hwr_top_pane_g_ParamLimits

0x6bf5,	// (0x000212f4) fep_hwr_top_text_pane_ParamLimits

0xa9ed,	// (0x000250ec) aid_touch_tab_arrow_arrow_2

0xa9f6,	// (0x000250f5) aid_touch_tab_arrow_left_2

0x6b3b,	// (0x0002123a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b72,	// (0x00021271) fep_hwr_prediction_pane

0xc2fb,	// (0x000269fa) fep_vkb_prediction_pane

0xc3ff,	// (0x00026afe) fep_vkb_side_pane_g3_ParamLimits

0xc3ff,	// (0x00026afe) fep_vkb_side_pane_g3

0xc3ab,	// (0x00026aaa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc80a,	// (0x00026f09) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc85a,	// (0x00026f59) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0002a2b9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd240,	// (0x0002793f) fep_hwr_prediction_pane_g1

0x6e82,	// (0x00021581) fep_hwr_prediction_pane_g2

0x6e8a,	// (0x00021589) fep_hwr_prediction_pane_g3

0x6e92,	// (0x00021591) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002a3bc) fep_hwr_prediction_pane_g

0xd240,	// (0x0002793f) fep_vkb_prediction_pane_g1

0xd24a,	// (0x00027949) fep_vkb_prediction_pane_g2

0xd252,	// (0x00027951) fep_vkb_prediction_pane_g3

0xd25a,	// (0x00027959) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002a3c5) fep_vkb_prediction_pane_g

0x69b5,	// (0x000210b4) slider_set_pane_g3

0x69c9,	// (0x000210c8) slider_set_pane_g4

0x69e1,	// (0x000210e0) slider_set_pane_g5

0x69b5,	// (0x000210b4) slider_set_pane_g6

0x69f7,	// (0x000210f6) slider_set_pane_g7

0xb0a0,	// (0x0002579f) slider_form_pane_g3

0xb0a9,	// (0x000257a8) slider_form_pane_g4

0xb0b1,	// (0x000257b0) slider_form_pane_g5

0xb0a0,	// (0x0002579f) slider_form_pane_g6

0xb0b9,	// (0x000257b8) slider_form_pane_g7

0xb6e4,	// (0x00025de3) slider_set_pane_vc_g3

0xb6ed,	// (0x00025dec) slider_set_pane_vc_g4

0xb6f6,	// (0x00025df5) slider_set_pane_vc_g5

0xb6e4,	// (0x00025de3) slider_set_pane_vc_g6

0xb6ff,	// (0x00025dfe) slider_set_pane_vc_g7

0xb6e4,	// (0x00025de3) slider_form_pane_vc_g1

0xb6ed,	// (0x00025dec) slider_form_pane_vc_g2

0xb6f6,	// (0x00025df5) slider_form_pane_vc_g3

0xb6e4,	// (0x00025de3) slider_form_pane_vc_g4

0xb8b2,	// (0x00025fb1) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002a193) slider_form_pane_vc_g

0x771f,	// (0x00021e1e) main_idle_act3_pane

0xd262,	// (0x00027961) ai3_links_pane

0xd26b,	// (0x0002796a) popup_ai3_data_window_ParamLimits

0xd26b,	// (0x0002796a) popup_ai3_data_window

0x771f,	// (0x00021e1e) grid_ai3_links_pane

0xd285,	// (0x00027984) cell_ai3_links_pane_ParamLimits

0xd285,	// (0x00027984) cell_ai3_links_pane

0xd29d,	// (0x0002799c) bg_popup_sub_pane_cp11

0xd2aa,	// (0x000279a9) cell_ai3_links_pane_g1

0x771f,	// (0x00021e1e) bg_popup_sub_pane_cp12

0xd2cf,	// (0x000279ce) heading_ai3_data_pane

0xd2d7,	// (0x000279d6) list_ai3_gene_pane

0xd2e3,	// (0x000279e2) popup_ai3_data_window_g1

0xd2eb,	// (0x000279ea) heading_ai3_data_pane_g1

0xd2f3,	// (0x000279f2) heading_ai3_data_pane_t1

0xd301,	// (0x00027a00) list_double_ai3_gene_pane_ParamLimits

0xd301,	// (0x00027a00) list_double_ai3_gene_pane

0xd30e,	// (0x00027a0d) list_single_ai3_gene_pane_ParamLimits

0xd30e,	// (0x00027a0d) list_single_ai3_gene_pane

0xc0de,	// (0x000267dd) list_highlight_pane_cp7_ParamLimits

0xc0de,	// (0x000267dd) list_highlight_pane_cp7

0xd31b,	// (0x00027a1a) list_single_a13_gene_pane_t1_ParamLimits

0xd31b,	// (0x00027a1a) list_single_a13_gene_pane_t1

0xd332,	// (0x00027a31) list_single_ai3_gene_pane_g1

0xd33b,	// (0x00027a3a) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002a3ce) list_single_ai3_gene_pane_g

0xd343,	// (0x00027a42) list_double_ai3_gene_pane_g1_ParamLimits

0xd343,	// (0x00027a42) list_double_ai3_gene_pane_g1

0xd34f,	// (0x00027a4e) list_double_ai3_gene_pane_t1_ParamLimits

0xd34f,	// (0x00027a4e) list_double_ai3_gene_pane_t1

0xd36b,	// (0x00027a6a) list_double_ai3_gene_pane_t2_ParamLimits

0xd36b,	// (0x00027a6a) list_double_ai3_gene_pane_t2

0xd381,	// (0x00027a80) list_double_ai3_gene_pane_t3_ParamLimits

0xd381,	// (0x00027a80) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002a3d3) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002a3d3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b0a,	// (0x00020209) aid_size_min_col_2

0xd22c,	// (0x0002792b) aid_size_min_msg_ParamLimits

0xd22c,	// (0x0002792b) aid_size_min_msg

0xc4ff,	// (0x00026bfe) fep_vkb_top_text_pane_g2_ParamLimits

0xc4ff,	// (0x00026bfe) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0002a23f) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0002a23f) fep_vkb_top_text_pane_g

0x771f,	// (0x00021e1e) main_hc_apps_shell_pane

0xd39e,	// (0x00027a9d) grid_hc_apps_pane_ParamLimits

0xd39e,	// (0x00027a9d) grid_hc_apps_pane

0xd3ad,	// (0x00027aac) list_hc_apps_pane

0xd3b5,	// (0x00027ab4) scroll_pane_cp37_ParamLimits

0xd3b5,	// (0x00027ab4) scroll_pane_cp37

0xd3c1,	// (0x00027ac0) cell_hc_apps_pane_ParamLimits

0xd3c1,	// (0x00027ac0) cell_hc_apps_pane

0xd46f,	// (0x00027b6e) cell_hc_apps_pane_g1_ParamLimits

0xd46f,	// (0x00027b6e) cell_hc_apps_pane_g1

0xd4a0,	// (0x00027b9f) cell_hc_apps_pane_g2_ParamLimits

0xd4a0,	// (0x00027b9f) cell_hc_apps_pane_g2

0xd4bc,	// (0x00027bbb) cell_hc_apps_pane_g3_ParamLimits

0xd4bc,	// (0x00027bbb) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002a3da) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002a3da) cell_hc_apps_pane_g

0xd4de,	// (0x00027bdd) cell_hc_apps_pane_t1_ParamLimits

0xd4de,	// (0x00027bdd) cell_hc_apps_pane_t1

0x7a9c,	// (0x0002219b) grid_highlight_pane_cp10_ParamLimits

0x7a9c,	// (0x0002219b) grid_highlight_pane_cp10

0xd51e,	// (0x00027c1d) list_single_hc_apps_pane_ParamLimits

0xd51e,	// (0x00027c1d) list_single_hc_apps_pane

0xd57a,	// (0x00027c79) list_single_hc_apps_pane_g1

0x5bfe,	// (0x000202fd) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002a3e1) list_single_hc_apps_pane_g

0x5c17,	// (0x00020316) list_single_hc_apps_pane_g2_copy1

0x5c33,	// (0x00020332) list_single_hc_apps_pane_t1

0x7813,	// (0x00021f12) bg_set_opt_pane_cp_ParamLimits

0x604e,	// (0x0002074d) setting_slider_pane_t1_ParamLimits

0x6067,	// (0x00020766) setting_slider_pane_t2_ParamLimits

0x6081,	// (0x00020780) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00029c79) setting_slider_pane_t_ParamLimits

0x6099,	// (0x00020798) slider_set_pane_ParamLimits

0x65c1,	// (0x00020cc0) control_pane_g5_ParamLimits

0x65c1,	// (0x00020cc0) control_pane_g5

0xaeef,	// (0x000255ee) slider_set_pane_g1_ParamLimits

0x69a9,	// (0x000210a8) slider_set_pane_g2_ParamLimits

0x69b5,	// (0x000210b4) slider_set_pane_g3_ParamLimits

0x69c9,	// (0x000210c8) slider_set_pane_g4_ParamLimits

0x69e1,	// (0x000210e0) slider_set_pane_g5_ParamLimits

0x69b5,	// (0x000210b4) slider_set_pane_g6_ParamLimits

0x69f7,	// (0x000210f6) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002a074) slider_set_pane_g_ParamLimits

0x8b64,	// (0x00023263) navi_icon_text_pane_ParamLimits

0x9619,	// (0x00023d18) aid_fill_nsta_2_ParamLimits

0x9664,	// (0x00023d63) aid_touch_tab_arrow_left_ParamLimits

0x9670,	// (0x00023d6f) aid_touch_tab_arrow_right_ParamLimits

0x96dc,	// (0x00023ddb) clock_nsta_pane_ParamLimits

0xa9c9,	// (0x000250c8) navi_icon_pane_g1_ParamLimits

0xa9d8,	// (0x000250d7) navi_text_pane_t1_ParamLimits

0xbcb6,	// (0x000263b5) navi_icon_text_pane_g1_ParamLimits

0xbcc5,	// (0x000263c4) navi_icon_text_pane_t1_ParamLimits

0xd57a,	// (0x00027c79) list_single_hc_apps_pane_g1_ParamLimits

0x5bfe,	// (0x000202fd) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002a3e1) list_single_hc_apps_pane_g_ParamLimits

0x5c17,	// (0x00020316) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c33,	// (0x00020332) list_single_hc_apps_pane_t1_ParamLimits

0x5f62,	// (0x00020661) popup_toolbar2_fixed_window_ParamLimits

0x5f62,	// (0x00020661) popup_toolbar2_fixed_window

0x952f,	// (0x00023c2e) popup_toolbar2_float_window

0x771f,	// (0x00021e1e) bg_popup_sub_pane_cp27

0xd593,	// (0x00027c92) grid_toolbar2_float_pane

0x771f,	// (0x00021e1e) bg_popup_sub_pane_cp26

0xd593,	// (0x00027c92) grid_toolbar2_fixed_pane

0xd59b,	// (0x00027c9a) cell_toolbar2_fixed_pane_ParamLimits

0xd59b,	// (0x00027c9a) cell_toolbar2_fixed_pane

0xd5ab,	// (0x00027caa) cell_toolbar2_fixed_pane_g1

0xd5b4,	// (0x00027cb3) toolbar2_fixed_button_pane

0x9aec,	// (0x000241eb) toolbar2_fixed_button_pane_g1

0x9af4,	// (0x000241f3) toolbar2_fixed_button_pane_g2

0x9afc,	// (0x000241fb) toolbar2_fixed_button_pane_g3

0x9b04,	// (0x00024203) toolbar2_fixed_button_pane_g4

0x9b0c,	// (0x0002420b) toolbar2_fixed_button_pane_g5

0x9b14,	// (0x00024213) toolbar2_fixed_button_pane_g6

0x9b1c,	// (0x0002421b) toolbar2_fixed_button_pane_g7

0x9b24,	// (0x00024223) toolbar2_fixed_button_pane_g8

0x9b2c,	// (0x0002422b) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00029f76) toolbar2_fixed_button_pane_g

0xd5bc,	// (0x00027cbb) cell_toolbar2_float_pane_ParamLimits

0xd5bc,	// (0x00027cbb) cell_toolbar2_float_pane

0xd5cd,	// (0x00027ccc) cell_toolbar2_float_pane_g1

0xd5b4,	// (0x00027cb3) toolbar2_fixed_button_pane_cp

0xc25b,	// (0x0002695a) fep_vkb_accented_list_pane_ParamLimits

0xc25b,	// (0x0002695a) fep_vkb_accented_list_pane

0x6d43,	// (0x00021442) bg_popup_fep_shadow_pane_g9

0x8ce4,	// (0x000233e3) bg_popup_fep_shadow_pane_cp3

0x81e0,	// (0x000228df) list_accented_list_pane

0xd5d6,	// (0x00027cd5) list_single_accented_list_pane_ParamLimits

0xd5d6,	// (0x00027cd5) list_single_accented_list_pane

0x8ce4,	// (0x000233e3) list_highlight_pane_cp10

0xd5e7,	// (0x00027ce6) list_single_accented_list_pane_t1

0x947f,	// (0x00023b7e) popup_slider_window_ParamLimits

0x947f,	// (0x00023b7e) popup_slider_window

0xd223,	// (0x00027922) aid_indentation_list_msg

0xd6a1,	// (0x00027da0) bg_popup_window_pane_cp19

0xd70b,	// (0x00027e0a) popup_slider_window_g1

0xd727,	// (0x00027e26) popup_slider_window_g2

0xd743,	// (0x00027e42) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002a3e6) popup_slider_window_g

0xd79f,	// (0x00027e9e) popup_slider_window_t1

0xd813,	// (0x00027f12) small_volume_slider_vertical_pane

0xc119,	// (0x00026818) small_volume_slider_vertical_pane_g1

0xc119,	// (0x00026818) small_volume_slider_vertical_pane_g2

0xd82f,	// (0x00027f2e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002a3f8) small_volume_slider_vertical_pane_g

0x5d24,	// (0x00020423) area_side_right_pane_ParamLimits

0x5d24,	// (0x00020423) area_side_right_pane

0x6e9a,	// (0x00021599) aid_size_side_button_ParamLimits

0x6e9a,	// (0x00021599) aid_size_side_button

0x6eae,	// (0x000215ad) grid_sctrl_middle_pane_ParamLimits

0x6eae,	// (0x000215ad) grid_sctrl_middle_pane

0x6ece,	// (0x000215cd) sctrl_sk_bottom_pane

0x6edf,	// (0x000215de) sctrl_sk_top_pane

0x6ef1,	// (0x000215f0) aid_touch_sctrl_top

0x7a9c,	// (0x0002219b) bg_sctrl_sk_pane_ParamLimits

0x7a9c,	// (0x0002219b) bg_sctrl_sk_pane

0x6efe,	// (0x000215fd) sctrl_sk_top_pane_g1

0x6f0b,	// (0x0002160a) sctrl_sk_top_pane_t1

0x6ef1,	// (0x000215f0) aid_touch_sctrl_bottom

0x7a9c,	// (0x0002219b) bg_sctrl_sk_pane_cp_ParamLimits

0x7a9c,	// (0x0002219b) bg_sctrl_sk_pane_cp

0x6f26,	// (0x00021625) sctrl_sk_bottom_pane_g1

0x6f0b,	// (0x0002160a) sctrl_sk_bottom_pane_t1

0x6f2f,	// (0x0002162e) cell_sctrl_middle_pane_ParamLimits

0x6f2f,	// (0x0002162e) cell_sctrl_middle_pane

0x6f4a,	// (0x00021649) aid_touch_sctrl_middle_ParamLimits

0x6f4a,	// (0x00021649) aid_touch_sctrl_middle

0x807f,	// (0x0002277e) bg_sctrl_middle_pane_ParamLimits

0x807f,	// (0x0002277e) bg_sctrl_middle_pane

0xc3ab,	// (0x00026aaa) cell_sctrl_middle_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) cell_sctrl_middle_pane_g1

0x6f5c,	// (0x0002165b) cell_sctrl_middle_pane_g2_ParamLimits

0x6f5c,	// (0x0002165b) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002a404) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002a404) cell_sctrl_middle_pane_g

0x9aec,	// (0x000241eb) bg_sctrl_middle_pane_g1

0x9af4,	// (0x000241f3) bg_sctrl_middle_pane_g2

0x9afc,	// (0x000241fb) bg_sctrl_middle_pane_g3

0x9b04,	// (0x00024203) bg_sctrl_middle_pane_g4

0x9b0c,	// (0x0002420b) bg_sctrl_middle_pane_g5

0x9b14,	// (0x00024213) bg_sctrl_middle_pane_g6

0x9b1c,	// (0x0002421b) bg_sctrl_middle_pane_g7

0x9b24,	// (0x00024223) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002a409) bg_sctrl_middle_pane_g

0x9b2c,	// (0x0002422b) bg_sctrl_middle_pane_g8_copy1

0x9aec,	// (0x000241eb) bg_sctrl_sk_pane_g1

0x9af4,	// (0x000241f3) bg_sctrl_sk_pane_g2

0x9afc,	// (0x000241fb) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00029f76) bg_sctrl_sk_pane_g

0x7fae,	// (0x000226ad) aid_size_touch_scroll_bar

0x9b04,	// (0x00024203) bg_sctrl_sk_pane_g4

0x9b0c,	// (0x0002420b) bg_sctrl_sk_pane_g5

0x9b14,	// (0x00024213) bg_sctrl_sk_pane_g6

0x9b1c,	// (0x0002421b) bg_sctrl_sk_pane_g7

0x9b24,	// (0x00024223) bg_sctrl_sk_pane_g8

0x9b2c,	// (0x0002422b) bg_sctrl_sk_pane_g9

0x90ea,	// (0x000237e9) popup_fep_china_hwr2_fs_candidate_window

0x90f4,	// (0x000237f3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x90f4,	// (0x000237f3) popup_fep_china_hwr2_fs_control_window

0xc3ab,	// (0x00026aaa) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002a3ff) sctrl_sk_top_pane_g

0xd838,	// (0x00027f37) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd838,	// (0x00027f37) aid_fep_china_hwr2_fs_cell

0xd84a,	// (0x00027f49) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd84a,	// (0x00027f49) bg_popup_fep_shadow_pane_cp4

0xd861,	// (0x00027f60) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd861,	// (0x00027f60) bg_popup_fep_shadow_pane_cp5

0xd873,	// (0x00027f72) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd873,	// (0x00027f72) popup_fep_china_hwr2_fs_control_bar_grid

0xd883,	// (0x00027f82) popup_fep_china_hwr2_fs_control_funtion_grid

0xd88b,	// (0x00027f8a) aid_fep_china_hwr2_fs_candi_cell

0x771f,	// (0x00021e1e) bg_popup_fep_shadow_pane_cp6

0xd895,	// (0x00027f94) popup_fep_china_hwr2_fs_candidate_grid

0xd89f,	// (0x00027f9e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd89f,	// (0x00027f9e) cell_fep_china_hwr2_fs_funtion_grid

0xc119,	// (0x00026818) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8b7,	// (0x00027fb6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8b7,	// (0x00027fb6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8c5,	// (0x00027fc4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8c5,	// (0x00027fc4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002a41a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002a41a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8db,	// (0x00027fda) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8db,	// (0x00027fda) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8f0,	// (0x00027fef) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8f0,	// (0x00027fef) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002a41f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002a41f) cell_fep_china_hwr2_fs_funtion_grid_t

0xd90c,	// (0x0002800b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd914,	// (0x00028013) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd91c,	// (0x0002801b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002a424) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd924,	// (0x00028023) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd924,	// (0x00028023) cell_fep_china_hwr2_fs_candidate_grid

0xd93d,	// (0x0002803c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd945,	// (0x00028044) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc119,	// (0x00026818) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc119,	// (0x00026818) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002a244) cell_fep_china_hwr2_fs_candidate_grid_g

0xd94d,	// (0x0002804c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x96e9,	// (0x00023de8) clock_nsta_pane_cp_24_ParamLimits

0x96e9,	// (0x00023de8) clock_nsta_pane_cp_24

0x9767,	// (0x00023e66) indicator_nsta_pane_cp_24_ParamLimits

0x9767,	// (0x00023e66) indicator_nsta_pane_cp_24

0xa845,	// (0x00024f44) heading_pane_g1

0x0001,

0xf8dc,	// (0x00029fdb) heading_pane_g

0xb270,	// (0x0002596f) grid_sct_catagory_button_pane

0xb2a0,	// (0x0002599f) scroll_pane_cp5_ParamLimits

0xbd0a,	// (0x00026409) button_value_adjust_pane_cp5_ParamLimits

0xbd0a,	// (0x00026409) button_value_adjust_pane_cp5

0xbde9,	// (0x000264e8) form2_midp_time_pane_ParamLimits

0xd95b,	// (0x0002805a) cell_sct_catagory_button_pane_ParamLimits

0xd95b,	// (0x0002805a) cell_sct_catagory_button_pane

0xc0de,	// (0x000267dd) bg_button_pane_cp01_ParamLimits

0xc0de,	// (0x000267dd) bg_button_pane_cp01

0xc119,	// (0x00026818) cell_sct_catagory_button_pane_g1

0x94be,	// (0x00023bbd) popup_tb_extension_window

0xd96d,	// (0x0002806c) aid_size_cell_ext_ParamLimits

0xd96d,	// (0x0002806c) aid_size_cell_ext

0x7a9c,	// (0x0002219b) bg_tb_trans_pane_cp1_ParamLimits

0x7a9c,	// (0x0002219b) bg_tb_trans_pane_cp1

0xd98d,	// (0x0002808c) grid_tb_ext_pane_ParamLimits

0xd98d,	// (0x0002808c) grid_tb_ext_pane

0xd9bb,	// (0x000280ba) cell_tb_ext_pane_ParamLimits

0xd9bb,	// (0x000280ba) cell_tb_ext_pane

0xd9d2,	// (0x000280d1) cell_tb_ext_pane_g1_ParamLimits

0xd9d2,	// (0x000280d1) cell_tb_ext_pane_g1

0xd9ef,	// (0x000280ee) cell_tb_ext_pane_t1

0x7a9c,	// (0x0002219b) list_highlight_pane_cp11_ParamLimits

0x7a9c,	// (0x0002219b) list_highlight_pane_cp11

0x5f81,	// (0x00020680) popup_uni_indicator_window_ParamLimits

0x5f81,	// (0x00020680) popup_uni_indicator_window

0x807f,	// (0x0002277e) bg_popup_sub_pane_cp14

0xda0a,	// (0x00028109) list_uniindi_pane

0xda16,	// (0x00028115) uniindi_top_pane

0x7a9c,	// (0x0002219b) bg_uniindi_top_pane

0xda35,	// (0x00028134) uniindi_top_pane_g1

0xda4b,	// (0x0002814a) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002a42b) uniindi_top_pane_g

0xda75,	// (0x00028174) uniindi_top_pane_t1

0xda9f,	// (0x0002819e) list_single_uniindi_pane_ParamLimits

0xda9f,	// (0x0002819e) list_single_uniindi_pane

0xc119,	// (0x00026818) bg_uniindi_top_pane_g1

0xdab2,	// (0x000281b1) list_single_uniindi_pane_g1

0xdac5,	// (0x000281c4) list_single_uniindi_pane_t1

0x771f,	// (0x00021e1e) control_bg_pane

0xdaea,	// (0x000281e9) bg_sctrl_sk_pane_cp1

0xdaf3,	// (0x000281f2) bg_sctrl_sk_pane_cp2

0xdafc,	// (0x000281fb) control_bg_pane_g1

0xdb05,	// (0x00028204) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002a434) control_bg_pane_g

0xbb3e,	// (0x0002623d) cell_indicator_nsta_pane_g1_ParamLimits

0xbb4c,	// (0x0002624b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0002a1a8) cell_indicator_nsta_pane_g_ParamLimits

0x58c7,	// (0x0001ffc6) form2_midp_time_pane_t1_ParamLimits

0x7df0,	// (0x000224ef) main_idle_act4_pane_ParamLimits

0x7df0,	// (0x000224ef) main_idle_act4_pane

0x94be,	// (0x00023bbd) popup_tb_extension_window_ParamLimits

0xd9ab,	// (0x000280aa) tb_ext_find_pane_ParamLimits

0xd9ab,	// (0x000280aa) tb_ext_find_pane

0xdb0e,	// (0x0002820d) ai_gene_pane_1_cp1

0x8e29,	// (0x00023528) ai_gene_pane_2_cp1

0xdb16,	// (0x00028215) list_single_idle_plugin_calendar_pane

0xdb1f,	// (0x0002821e) list_single_idle_plugin_notification_pane

0xdb28,	// (0x00028227) list_single_idle_plugin_player_pane

0xdb31,	// (0x00028230) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb31,	// (0x00028230) list_single_idle_plugin_shortcut_pane

0xdb53,	// (0x00028252) main_idle_act4_pane_t1

0xdb65,	// (0x00028264) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002a439) main_idle_act4_pane_t

0xdb77,	// (0x00028276) middle_sk_idle_act4_pane_ParamLimits

0xdb77,	// (0x00028276) middle_sk_idle_act4_pane

0xdb8d,	// (0x0002828c) popup_clock_digital_analogue_window_cp2

0xdba7,	// (0x000282a6) shortcut_wheel_idle_act4_pane_ParamLimits

0xdba7,	// (0x000282a6) shortcut_wheel_idle_act4_pane

0xc119,	// (0x00026818) shortcut_wheel_idle_act4_pane_g1

0xc119,	// (0x00026818) shortcut_wheel_idle_act4_pane_g2

0xc119,	// (0x00026818) shortcut_wheel_idle_act4_pane_g3

0xc119,	// (0x00026818) shortcut_wheel_idle_act4_pane_g4

0xc119,	// (0x00026818) shortcut_wheel_idle_act4_pane_g5

0xdbbb,	// (0x000282ba) shortcut_wheel_idle_act4_pane_g6

0xdbc3,	// (0x000282c2) shortcut_wheel_idle_act4_pane_g7

0xdbcb,	// (0x000282ca) shortcut_wheel_idle_act4_pane_g8

0xdbd3,	// (0x000282d2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002a43e) shortcut_wheel_idle_act4_pane_g

0xc3ab,	// (0x00026aaa) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) middle_sk_idle_act4_pane_g1

0xdc37,	// (0x00028336) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc37,	// (0x00028336) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002a461) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002a461) middle_sk_idle_act4_pane_g

0xdc43,	// (0x00028342) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc43,	// (0x00028342) middle_sk_idle_act4_pane_t1

0xdc60,	// (0x0002835f) grid_ai_shortcut_pane_ParamLimits

0xdc60,	// (0x0002835f) grid_ai_shortcut_pane

0xdc79,	// (0x00028378) list_highlight_pane_cp16_ParamLimits

0xdc79,	// (0x00028378) list_highlight_pane_cp16

0xdc86,	// (0x00028385) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc86,	// (0x00028385) list_single_idle_plugin_shortcut_pane_g1

0xdc92,	// (0x00028391) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc92,	// (0x00028391) list_single_idle_plugin_shortcut_pane_g2

0xdcaa,	// (0x000283a9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcaa,	// (0x000283a9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002a466) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002a466) list_single_idle_plugin_shortcut_pane_g

0xdcbd,	// (0x000283bc) cell_ai_shortcut_pane_ParamLimits

0xdcbd,	// (0x000283bc) cell_ai_shortcut_pane

0xdce1,	// (0x000283e0) cell_ai_shortcut_pane_g1_ParamLimits

0xdce1,	// (0x000283e0) cell_ai_shortcut_pane_g1

0xdb0e,	// (0x0002820d) ai_gene_pane_1_cp2

0xdd03,	// (0x00028402) ai_gene_pane_2_cp2

0xdd0b,	// (0x0002840a) list_highlight_pane_cp15

0xdd14,	// (0x00028413) list_single_idle_plugin_calendar_pane_g1

0xdd0b,	// (0x0002840a) list_highlight_pane_cp17

0xdd1c,	// (0x0002841b) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd24,	// (0x00028423) list_single_idle_plugin_player_pane_g1

0xb4c9,	// (0x00025bc8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002a46d) list_single_idle_plugin_player_pane_g

0xdd2c,	// (0x0002842b) list_single_idle_plugin_player_pane_t1

0xdd3a,	// (0x00028439) list_single_idle_plugin_player_pane_t2

0xdd48,	// (0x00028447) list_single_idle_plugin_player_pane_t3

0xdd56,	// (0x00028455) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002a472) list_single_idle_plugin_player_pane_t

0xdd64,	// (0x00028463) wait_bar_pane_cp15

0xdd6c,	// (0x0002846b) grid_ai_notification_pane

0xb4c9,	// (0x00025bc8) list_single_idle_plugin_notification_pane_g1

0xdd75,	// (0x00028474) cell_ai_notification_pane_ParamLimits

0xdd75,	// (0x00028474) cell_ai_notification_pane

0xdd82,	// (0x00028481) cell_ai_notification_pane_g1

0xdd8a,	// (0x00028489) cell_ai_notification_pane_t1

0xdd98,	// (0x00028497) tb_ext_find_button_pane

0xdda0,	// (0x0002849f) tb_ext_find_pane_g1

0xdda8,	// (0x000284a7) tb_ext_find_pane_t1

0x8707,	// (0x00022e06) tb_ext_find_button_pane_g1

0xddb6,	// (0x000284b5) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002a47b) tb_ext_find_button_pane_g

0xdb53,	// (0x00028252) main_idle_act4_pane_t1_ParamLimits

0xdb65,	// (0x00028264) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002a439) main_idle_act4_pane_t_ParamLimits

0xdb8d,	// (0x0002828c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb9b,	// (0x0002829a) sat_plugin_idle_act4_pane_ParamLimits

0xdb9b,	// (0x0002829a) sat_plugin_idle_act4_pane

0xddbf,	// (0x000284be) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddbf,	// (0x000284be) sat_plugin_idle_act4_pane_t1

0xddd2,	// (0x000284d1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddd2,	// (0x000284d1) sat_plugin_idle_act4_pane_t2

0xdde5,	// (0x000284e4) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdde5,	// (0x000284e4) sat_plugin_idle_act4_pane_t3

0xddf8,	// (0x000284f7) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddf8,	// (0x000284f7) sat_plugin_idle_act4_pane_t4

0x0003,

0x000d,	// (0x0001a70c) sat_plugin_idle_act4_pane_t_ParamLimits

0x000d,	// (0x0001a70c) sat_plugin_idle_act4_pane_t

0x5ebc,	// (0x000205bb) popup_battery_window_ParamLimits

0x5ebc,	// (0x000205bb) popup_battery_window

0x7a9c,	// (0x0002219b) bg_popup_sub_pane_cp25_ParamLimits

0x7a9c,	// (0x0002219b) bg_popup_sub_pane_cp25

0xde0b,	// (0x0002850a) popup_battery_window_g1_ParamLimits

0xde0b,	// (0x0002850a) popup_battery_window_g1

0xde17,	// (0x00028516) popup_battery_window_t1_ParamLimits

0xde17,	// (0x00028516) popup_battery_window_t1

0xde29,	// (0x00028528) popup_battery_window_t2_ParamLimits

0xde29,	// (0x00028528) popup_battery_window_t2

0x0001,

0x0016,	// (0x0001a715) popup_battery_window_t_ParamLimits

0x0016,	// (0x0001a715) popup_battery_window_t

0x8cf8,	// (0x000233f7) midp_canvas_pane_ParamLimits

0x8d6d,	// (0x0002346c) midp_keypad_pane_ParamLimits

0x8d6d,	// (0x0002346c) midp_keypad_pane

0x904a,	// (0x00023749) main_midp_pane_ParamLimits

0xbbca,	// (0x000262c9) signal_pane_g2_cp_ParamLimits

0xde46,	// (0x00028545) aid_size_cell_midp_keypad_ParamLimits

0xde46,	// (0x00028545) aid_size_cell_midp_keypad

0xde60,	// (0x0002855f) midp_keyp_game_grid_pane_ParamLimits

0xde60,	// (0x0002855f) midp_keyp_game_grid_pane

0xde80,	// (0x0002857f) midp_keyp_rocker_pane_ParamLimits

0xde80,	// (0x0002857f) midp_keyp_rocker_pane

0xdeb9,	// (0x000285b8) midp_keyp_sk_left_pane_ParamLimits

0xdeb9,	// (0x000285b8) midp_keyp_sk_left_pane

0xdf13,	// (0x00028612) midp_keyp_sk_right_pane_ParamLimits

0xdf13,	// (0x00028612) midp_keyp_sk_right_pane

0x771f,	// (0x00021e1e) bg_button_pane_cp03

0xdf6d,	// (0x0002866c) midp_keyp_sk_left_pane_g1

0x771f,	// (0x00021e1e) bg_button_pane_cp04

0xdf6d,	// (0x0002866c) midp_keyp_sk_right_pane_g1

0xc119,	// (0x00026818) midp_keyp_rocker_pane_g1

0xdf76,	// (0x00028675) keyp_game_cell_pane_ParamLimits

0xdf76,	// (0x00028675) keyp_game_cell_pane

0x771f,	// (0x00021e1e) bg_button_pane_cp02

0xdf89,	// (0x00028688) keyp_game_cell_pane_g1

0x5f00,	// (0x000205ff) popup_fep_vkb2_window_ParamLimits

0x5f00,	// (0x000205ff) popup_fep_vkb2_window

0x6f7d,	// (0x0002167c) aid_size_cell_vkb2_ParamLimits

0x6f7d,	// (0x0002167c) aid_size_cell_vkb2

0x6fd1,	// (0x000216d0) popup_fep_vkb2_window_g1_ParamLimits

0x6fd1,	// (0x000216d0) popup_fep_vkb2_window_g1

0x7019,	// (0x00021718) vkb2_area_bottom_pane_ParamLimits

0x7019,	// (0x00021718) vkb2_area_bottom_pane

0x7065,	// (0x00021764) vkb2_area_keypad_pane_ParamLimits

0x7065,	// (0x00021764) vkb2_area_keypad_pane

0x70a7,	// (0x000217a6) vkb2_area_top_pane_ParamLimits

0x70a7,	// (0x000217a6) vkb2_area_top_pane

0x7121,	// (0x00021820) vkb2_top_entry_pane_ParamLimits

0x7121,	// (0x00021820) vkb2_top_entry_pane

0x714b,	// (0x0002184a) vkb2_top_grid_left_pane_ParamLimits

0x714b,	// (0x0002184a) vkb2_top_grid_left_pane

0x7169,	// (0x00021868) vkb2_top_grid_right_pane_ParamLimits

0x7169,	// (0x00021868) vkb2_top_grid_right_pane

0x7187,	// (0x00021886) vkb2_cell_keypad_pane_ParamLimits

0x7187,	// (0x00021886) vkb2_cell_keypad_pane

0x7258,	// (0x00021957) vkb2_area_bottom_grid_pane_ParamLimits

0x7258,	// (0x00021957) vkb2_area_bottom_grid_pane

0x727e,	// (0x0002197d) vkb2_area_bottom_pane_g1_ParamLimits

0x727e,	// (0x0002197d) vkb2_area_bottom_pane_g1

0x72a2,	// (0x000219a1) vkb2_area_bottom_pane_g2_ParamLimits

0x72a2,	// (0x000219a1) vkb2_area_bottom_pane_g2

0x72d0,	// (0x000219cf) vkb2_area_bottom_pane_g3_ParamLimits

0x72d0,	// (0x000219cf) vkb2_area_bottom_pane_g3

0x0002,

0xfd81,	// (0x0002a480) vkb2_area_bottom_pane_g_ParamLimits

0xfd81,	// (0x0002a480) vkb2_area_bottom_pane_g

0x7331,	// (0x00021a30) vkb2_top_cell_left_pane_ParamLimits

0x7331,	// (0x00021a30) vkb2_top_cell_left_pane

0xdf9a,	// (0x00028699) vkb2_top_entry_pane_g1_ParamLimits

0xdf9a,	// (0x00028699) vkb2_top_entry_pane_g1

0xdfa8,	// (0x000286a7) vkb2_top_entry_pane_t1_ParamLimits

0xdfa8,	// (0x000286a7) vkb2_top_entry_pane_t1

0xdfda,	// (0x000286d9) vkb2_top_entry_pane_t2_ParamLimits

0xdfda,	// (0x000286d9) vkb2_top_entry_pane_t2

0xe00c,	// (0x0002870b) vkb2_top_entry_pane_t3_ParamLimits

0xe00c,	// (0x0002870b) vkb2_top_entry_pane_t3

0x0002,

0x0022,	// (0x0001a721) vkb2_top_entry_pane_t_ParamLimits

0x0022,	// (0x0001a721) vkb2_top_entry_pane_t

0x737e,	// (0x00021a7d) vkb2_top_grid_right_pane_g1_ParamLimits

0x737e,	// (0x00021a7d) vkb2_top_grid_right_pane_g1

0x7394,	// (0x00021a93) vkb2_top_grid_right_pane_g2_ParamLimits

0x7394,	// (0x00021a93) vkb2_top_grid_right_pane_g2

0x73ac,	// (0x00021aab) vkb2_top_grid_right_pane_g3_ParamLimits

0x73ac,	// (0x00021aab) vkb2_top_grid_right_pane_g3

0x73c4,	// (0x00021ac3) vkb2_top_grid_right_pane_g4_ParamLimits

0x73c4,	// (0x00021ac3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd88,	// (0x0002a487) vkb2_top_grid_right_pane_g_ParamLimits

0xfd88,	// (0x0002a487) vkb2_top_grid_right_pane_g

0x73da,	// (0x00021ad9) vkb2_top_cell_left_pane_g1

0x73f1,	// (0x00021af0) vkb2_cell_keypad_pane_g1_ParamLimits

0x73f1,	// (0x00021af0) vkb2_cell_keypad_pane_g1

0xe030,	// (0x0002872f) vkb2_cell_keypad_pane_t1_ParamLimits

0xe030,	// (0x0002872f) vkb2_cell_keypad_pane_t1

0x73ff,	// (0x00021afe) vkb2_cell_bottom_grid_pane_ParamLimits

0x73ff,	// (0x00021afe) vkb2_cell_bottom_grid_pane

0x7438,	// (0x00021b37) vkb2_cell_bottom_grid_pane_g1

0xdbdb,	// (0x000282da) aid_call2_pane_cp02

0xdbe3,	// (0x000282e2) aid_call_pane_cp02

0xdbeb,	// (0x000282ea) clock_digital_number_pane_cp10

0xdbf3,	// (0x000282f2) clock_digital_number_pane_cp11

0xdbfb,	// (0x000282fa) clock_digital_number_pane_cp12

0xdc03,	// (0x00028302) clock_digital_number_pane_cp13

0xdc0b,	// (0x0002830a) clock_digital_separator_pane_cp10

0x8707,	// (0x00022e06) popup_clock_digital_analogue_window_cp2_g1

0x8707,	// (0x00022e06) popup_clock_digital_analogue_window_cp2_g2

0xdc13,	// (0x00028312) popup_clock_digital_analogue_window_cp2_g3

0x8707,	// (0x00022e06) popup_clock_digital_analogue_window_cp2_g4

0xdc13,	// (0x00028312) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002a451) popup_clock_digital_analogue_window_cp2_g

0xdc1b,	// (0x0002831a) popup_clock_digital_analogue_window_cp2_t1

0xdc29,	// (0x00028328) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002a45c) popup_clock_digital_analogue_window_cp2_t

0xc119,	// (0x00026818) clock_digital_number_pane_cp10_g1

0xc119,	// (0x00026818) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002a244) clock_digital_number_pane_cp10_g

0xc119,	// (0x00026818) clock_digital_separator_pane_cp10_g1

0xc119,	// (0x00026818) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002a244) clock_digital_separator_pane_cp10_g

0xda57,	// (0x00028156) uniindi_top_pane_g3

0xda68,	// (0x00028167) uniindi_top_pane_g4

0x7212,	// (0x00021911) vkb2_row_keypad_pane_ParamLimits

0x7212,	// (0x00021911) vkb2_row_keypad_pane

0x7454,	// (0x00021b53) vkb2_cell_t_keypad_pane_ParamLimits

0x7454,	// (0x00021b53) vkb2_cell_t_keypad_pane

0x7464,	// (0x00021b63) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7464,	// (0x00021b63) vkb2_cell_t_keypad_pane_cp08

0x7477,	// (0x00021b76) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7477,	// (0x00021b76) vkb2_cell_t_keypad_pane_cp09

0x748b,	// (0x00021b8a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x748b,	// (0x00021b8a) vkb2_cell_t_keypad_pane_cp01

0x749c,	// (0x00021b9b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x749c,	// (0x00021b9b) vkb2_cell_t_keypad_pane_cp02

0x74ad,	// (0x00021bac) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74ad,	// (0x00021bac) vkb2_cell_t_keypad_pane_cp03

0x74be,	// (0x00021bbd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74be,	// (0x00021bbd) vkb2_cell_t_keypad_pane_cp04

0x74cf,	// (0x00021bce) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74cf,	// (0x00021bce) vkb2_cell_t_keypad_pane_cp05

0x74e0,	// (0x00021bdf) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74e0,	// (0x00021bdf) vkb2_cell_t_keypad_pane_cp06

0x74f1,	// (0x00021bf0) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74f1,	// (0x00021bf0) vkb2_cell_t_keypad_pane_cp07

0x7502,	// (0x00021c01) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7502,	// (0x00021c01) vkb2_cell_t_keypad_pane_cp10

0xc3ab,	// (0x00026aaa) vkb2_cell_t_keypad_pane_g1

0xe047,	// (0x00028746) vkb2_cell_t_keypad_pane_t1

0x771f,	// (0x00021e1e) popup_grid_graphic2_window

0xe059,	// (0x00028758) aid_size_cell_graphic2_ParamLimits

0xe059,	// (0x00028758) aid_size_cell_graphic2

0xc82b,	// (0x00026f2a) bg_popup_window_pane_cp21_ParamLimits

0xc82b,	// (0x00026f2a) bg_popup_window_pane_cp21

0xe085,	// (0x00028784) graphic2_pages_pane_ParamLimits

0xe085,	// (0x00028784) graphic2_pages_pane

0xe0cb,	// (0x000287ca) grid_graphic2_control_pane_ParamLimits

0xe0cb,	// (0x000287ca) grid_graphic2_control_pane

0xe0f9,	// (0x000287f8) grid_graphic2_pane_ParamLimits

0xe0f9,	// (0x000287f8) grid_graphic2_pane

0xe159,	// (0x00028858) cell_graphic2_pane

0x771f,	// (0x00021e1e) main_comp_mode_pane

0xd2d7,	// (0x000279d6) list_ai3_gene_pane_ParamLimits

0xd6a1,	// (0x00027da0) bg_popup_window_pane_cp19_ParamLimits

0xd6ad,	// (0x00027dac) bg_touch_area_indi_pane_ParamLimits

0xd6ad,	// (0x00027dac) bg_touch_area_indi_pane

0xd6c3,	// (0x00027dc2) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6c3,	// (0x00027dc2) bg_touch_area_indi_pane_cp01

0xd6d9,	// (0x00027dd8) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6d9,	// (0x00027dd8) bg_touch_area_indi_pane_cp02

0xd6f1,	// (0x00027df0) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6f1,	// (0x00027df0) bg_touch_area_indi_pane_cp03

0xd70b,	// (0x00027e0a) popup_slider_window_g1_ParamLimits

0xd727,	// (0x00027e26) popup_slider_window_g2_ParamLimits

0xd743,	// (0x00027e42) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002a3e6) popup_slider_window_g_ParamLimits

0xd79f,	// (0x00027e9e) popup_slider_window_t1_ParamLimits

0xd813,	// (0x00027f12) small_volume_slider_vertical_pane_ParamLimits

0xe159,	// (0x00028858) cell_graphic2_pane_ParamLimits

0xe1a8,	// (0x000288a7) bg_button_pane_cp10_ParamLimits

0xe1a8,	// (0x000288a7) bg_button_pane_cp10

0xe1bb,	// (0x000288ba) bg_button_pane_cp11_ParamLimits

0xe1bb,	// (0x000288ba) bg_button_pane_cp11

0xe1ce,	// (0x000288cd) graphic2_pages_pane_g1_ParamLimits

0xe1ce,	// (0x000288cd) graphic2_pages_pane_g1

0xe1e9,	// (0x000288e8) graphic2_pages_pane_g2_ParamLimits

0xe1e9,	// (0x000288e8) graphic2_pages_pane_g2

0x0001,

0x0037,	// (0x0001a736) graphic2_pages_pane_g_ParamLimits

0x0037,	// (0x0001a736) graphic2_pages_pane_g

0xe201,	// (0x00028900) graphic2_pages_pane_t1_ParamLimits

0xe201,	// (0x00028900) graphic2_pages_pane_t1

0xe219,	// (0x00028918) cell_graphic2_control_pane_ParamLimits

0xe219,	// (0x00028918) cell_graphic2_control_pane

0xe233,	// (0x00028932) cell_graphic2_pane_g1_ParamLimits

0xe233,	// (0x00028932) cell_graphic2_pane_g1

0xe240,	// (0x0002893f) cell_graphic2_pane_g2_ParamLimits

0xe240,	// (0x0002893f) cell_graphic2_pane_g2

0xe24d,	// (0x0002894c) cell_graphic2_pane_g3_ParamLimits

0xe24d,	// (0x0002894c) cell_graphic2_pane_g3

0xe25a,	// (0x00028959) cell_graphic2_pane_g4_ParamLimits

0xe25a,	// (0x00028959) cell_graphic2_pane_g4

0xe267,	// (0x00028966) cell_graphic2_pane_g5_ParamLimits

0xe267,	// (0x00028966) cell_graphic2_pane_g5

0x0004,

0x003c,	// (0x0001a73b) cell_graphic2_pane_g_ParamLimits

0x003c,	// (0x0001a73b) cell_graphic2_pane_g

0xe282,	// (0x00028981) cell_graphic2_pane_t1_ParamLimits

0xe282,	// (0x00028981) cell_graphic2_pane_t1

0x9bdc,	// (0x000242db) grid_highlight_pane_cp11_ParamLimits

0x9bdc,	// (0x000242db) grid_highlight_pane_cp11

0x807f,	// (0x0002277e) bg_button_pane_cp05

0xe2ab,	// (0x000289aa) cell_graphic2_control_pane_g1

0xc119,	// (0x00026818) bg_touch_area_indi_pane_g1

0xe2b8,	// (0x000289b7) aid_cmod_rocker_key_size

0xe2c2,	// (0x000289c1) aid_cmode_itu_key_size

0xe2cc,	// (0x000289cb) main_cmode_video_pane

0xe2d6,	// (0x000289d5) main_comp_mode_itu_pane

0xe2e2,	// (0x000289e1) main_comp_mode_rocker_pane

0xe2ee,	// (0x000289ed) cell_cmode_rocker_pane_ParamLimits

0xe2ee,	// (0x000289ed) cell_cmode_rocker_pane

0xe300,	// (0x000289ff) cell_cmode_itu_pane_ParamLimits

0xe300,	// (0x000289ff) cell_cmode_itu_pane

0x807f,	// (0x0002277e) bg_button_pane_cp06_ParamLimits

0x807f,	// (0x0002277e) bg_button_pane_cp06

0xc3ab,	// (0x00026aaa) cell_cmode_rocker_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) cell_cmode_rocker_pane_g1

0xd8b7,	// (0x00027fb6) cell_cmode_rocker_pane_g2_ParamLimits

0xd8b7,	// (0x00027fb6) cell_cmode_rocker_pane_g2

0x0001,

0xfd91,	// (0x0002a490) cell_cmode_rocker_pane_g_ParamLimits

0xfd91,	// (0x0002a490) cell_cmode_rocker_pane_g

0x771f,	// (0x00021e1e) bg_button_pane_cp07

0xe315,	// (0x00028a14) cell_cmode_itu_pane_g1

0xe31e,	// (0x00028a1d) cell_cmode_itu_pane_t1

0xe32c,	// (0x00028a2b) cell_cmode_itu_pane_t2

0x0001,

0xfd96,	// (0x0002a495) cell_cmode_itu_pane_t

0xdada,	// (0x000281d9) aid_touch_ctrl_left

0xdae2,	// (0x000281e1) aid_touch_ctrl_right

0x771f,	// (0x00021e1e) compa_mode_pane

0xe33a,	// (0x00028a39) aid_cmod_rocker_key_size_cp

0xe344,	// (0x00028a43) aid_cmode_itu_key_size_cp

0xe34e,	// (0x00028a4d) compa_mode_pane_g1

0xe356,	// (0x00028a55) compa_mode_pane_g2

0xe35e,	// (0x00028a5d) compa_mode_pane_g3

0x0002,

0xfd9b,	// (0x0002a49a) compa_mode_pane_g

0xe366,	// (0x00028a65) main_comp_mode_itu_pane_cp

0xe36e,	// (0x00028a6d) main_comp_mode_rocker_pane_cp

0xe376,	// (0x00028a75) cell_cmode_itu_pane_cp_ParamLimits

0xe376,	// (0x00028a75) cell_cmode_itu_pane_cp

0xe38b,	// (0x00028a8a) cell_cmode_rocker_pane_cp_ParamLimits

0xe38b,	// (0x00028a8a) cell_cmode_rocker_pane_cp

0x807f,	// (0x0002277e) bg_button_pane_cp06_cp_ParamLimits

0x807f,	// (0x0002277e) bg_button_pane_cp06_cp

0xc3ab,	// (0x00026aaa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3ab,	// (0x00026aaa) cell_cmode_rocker_pane_g1_cp

0xc119,	// (0x00026818) cell_cmode_rocker_pane_g2_cp

0x771f,	// (0x00021e1e) bg_button_pane_cp07_cp

0xb0a0,	// (0x0002579f) cell_cmode_itu_pane_g1_cp

0xe39d,	// (0x00028a9c) cell_cmode_itu_pane_t1_cp

0xe39d,	// (0x00028a9c) cell_cmode_itu_pane_t2_cp

0xb08d,	// (0x0002578c) settings_code_pane_cp2

0x7813,	// (0x00021f12) bg_popup_window_pane_cp3_ParamLimits

0x7c76,	// (0x00022375) heading_pane_cp3_ParamLimits

0x7c82,	// (0x00022381) listscroll_popup_graphic_pane_ParamLimits

0x6b27,	// (0x00021226) fep_hwr_aid_pane_ParamLimits

0x6ef1,	// (0x000215f0) aid_touch_sctrl_top_ParamLimits

0x6efe,	// (0x000215fd) sctrl_sk_top_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002a3ff) sctrl_sk_top_pane_g_ParamLimits

0x6f0b,	// (0x0002160a) sctrl_sk_top_pane_t1_ParamLimits

0x6ef1,	// (0x000215f0) aid_touch_sctrl_bottom_ParamLimits

0x6f0b,	// (0x0002160a) sctrl_sk_bottom_pane_t1_ParamLimits

0xda23,	// (0x00028122) aid_area_touch_clock

0x70e9,	// (0x000217e8) aid_vkb2_area_top_pane_cell_ParamLimits

0x70e9,	// (0x000217e8) aid_vkb2_area_top_pane_cell

0x7234,	// (0x00021933) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7234,	// (0x00021933) aid_vkb2_area_bottom_pane_cell

0xdf92,	// (0x00028691) popup_char_count_window

0xe3ab,	// (0x00028aaa) popup_char_count_window_g1

0xe3b4,	// (0x00028ab3) popup_char_count_window_g2

0xe3bd,	// (0x00028abc) popup_char_count_window_g3

0x0002,

0xfda2,	// (0x0002a4a1) popup_char_count_window_g

0xe3c6,	// (0x00028ac5) popup_char_count_window_t1

0x6faf,	// (0x000216ae) popup_fep_char_preview_window_ParamLimits

0x6faf,	// (0x000216ae) popup_fep_char_preview_window

0x7107,	// (0x00021806) vkb2_top_candi_pane_ParamLimits

0x7107,	// (0x00021806) vkb2_top_candi_pane

0xe3d4,	// (0x00028ad3) cell_vkb2_top_candi_pane_ParamLimits

0xe3d4,	// (0x00028ad3) cell_vkb2_top_candi_pane

0xa1b9,	// (0x000248b8) bg_popup_fep_char_preview_window_ParamLimits

0xa1b9,	// (0x000248b8) bg_popup_fep_char_preview_window

0x7517,	// (0x00021c16) popup_fep_char_preview_window_t1_ParamLimits

0x7517,	// (0x00021c16) popup_fep_char_preview_window_t1

0xe421,	// (0x00028b20) bg_popup_fep_char_preview_window_g1

0xe429,	// (0x00028b28) bg_popup_fep_char_preview_window_g2

0xe431,	// (0x00028b30) bg_popup_fep_char_preview_window_g3

0xe439,	// (0x00028b38) bg_popup_fep_char_preview_window_g4

0xe441,	// (0x00028b40) bg_popup_fep_char_preview_window_g5

0x7551,	// (0x00021c50) bg_popup_fep_char_preview_window_g6

0xe449,	// (0x00028b48) bg_popup_fep_char_preview_window_g7

0xe451,	// (0x00028b50) bg_popup_fep_char_preview_window_g8

0xe459,	// (0x00028b58) bg_popup_fep_char_preview_window_g9

0x0008,

0xfda9,	// (0x0002a4a8) bg_popup_fep_char_preview_window_g

0xc3ab,	// (0x00026aaa) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) cell_vkb2_top_candi_pane_g1

0xc6c2,	// (0x00026dc1) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc6c2,	// (0x00026dc1) cell_vkb2_top_candi_pane_g2

0xc839,	// (0x00026f38) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc839,	// (0x00026f38) cell_vkb2_top_candi_pane_g3

0x7559,	// (0x00021c58) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7559,	// (0x00021c58) cell_vkb2_top_candi_pane_g4

0xe461,	// (0x00028b60) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe461,	// (0x00028b60) cell_vkb2_top_candi_pane_g5

0xd8b7,	// (0x00027fb6) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd8b7,	// (0x00027fb6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbc,	// (0x0002a4bb) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbc,	// (0x0002a4bb) cell_vkb2_top_candi_pane_g

0x757a,	// (0x00021c79) cell_vkb2_top_candi_pane_t1

0x6995,	// (0x00021094) aid_size_touch_slider_mark_ParamLimits

0x6995,	// (0x00021094) aid_size_touch_slider_mark

0xe0bb,	// (0x000287ba) grid_graphic2_catg_pane_ParamLimits

0xe0bb,	// (0x000287ba) grid_graphic2_catg_pane

0xe135,	// (0x00028834) popup_grid_graphic2_window_t1_ParamLimits

0xe135,	// (0x00028834) popup_grid_graphic2_window_t1

0xe147,	// (0x00028846) popup_grid_graphic2_window_t2_ParamLimits

0xe147,	// (0x00028846) popup_grid_graphic2_window_t2

0x0001,

0x0032,	// (0x0001a731) popup_grid_graphic2_window_t_ParamLimits

0x0032,	// (0x0001a731) popup_grid_graphic2_window_t

0x807f,	// (0x0002277e) bg_button_pane_cp05_ParamLimits

0xe2ab,	// (0x000289aa) cell_graphic2_control_pane_g1_ParamLimits

0xe482,	// (0x00028b81) cell_graphic2_catg_pane_ParamLimits

0xe482,	// (0x00028b81) cell_graphic2_catg_pane

0x771f,	// (0x00021e1e) bg_button_pane_cp12

0xe494,	// (0x00028b93) cell_graphic2_catg_pane_g1

0xd9ef,	// (0x000280ee) cell_tb_ext_pane_t1_ParamLimits

0x7351,	// (0x00021a50) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7351,	// (0x00021a50) vkb2_top_cell_right_narrow_pane

0x7369,	// (0x00021a68) vkb2_top_cell_right_wide_pane_ParamLimits

0x7369,	// (0x00021a68) vkb2_top_cell_right_wide_pane

0xc82b,	// (0x00026f2a) bg_vkb2_func_pane_ParamLimits

0xc82b,	// (0x00026f2a) bg_vkb2_func_pane

0x73da,	// (0x00021ad9) vkb2_top_cell_left_pane_g1_ParamLimits

0xc82b,	// (0x00026f2a) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc82b,	// (0x00026f2a) bg_vkb2_fuc_pane_cp03

0x7438,	// (0x00021b37) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9af4,	// (0x000241f3) bg_vkb2_func_pane_g1

0x9afc,	// (0x000241fb) bg_vkb2_func_pane_g2

0x9b0c,	// (0x0002420b) bg_vkb2_func_pane_g3

0x9b04,	// (0x00024203) bg_vkb2_func_pane_g4

0x9b14,	// (0x00024213) bg_vkb2_func_pane_g5

0x9b1c,	// (0x0002421b) bg_vkb2_func_pane_g6

0x9b24,	// (0x00024223) bg_vkb2_func_pane_g7

0x9b2c,	// (0x0002422b) bg_vkb2_func_pane_g8

0x9aec,	// (0x000241eb) bg_vkb2_func_pane_g9

0x0008,

0xfdc9,	// (0x0002a4c8) bg_vkb2_func_pane_g

0xc82b,	// (0x00026f2a) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc82b,	// (0x00026f2a) bg_vkb2_fuc_pane_cp01

0x73da,	// (0x00021ad9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73da,	// (0x00021ad9) vkb2_top_cell_right_wide_pane_g1

0xc82b,	// (0x00026f2a) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc82b,	// (0x00026f2a) bg_vkb2_fuc_pane_cp02

0x7438,	// (0x00021b37) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7438,	// (0x00021b37) vkb2_top_cell_right_narrow_pane_g1

0xd625,	// (0x00027d24) aid_touch_area_decrease_ParamLimits

0xd625,	// (0x00027d24) aid_touch_area_decrease

0xd643,	// (0x00027d42) aid_touch_area_increase_ParamLimits

0xd643,	// (0x00027d42) aid_touch_area_increase

0xd64f,	// (0x00027d4e) aid_touch_area_mute_ParamLimits

0xd64f,	// (0x00027d4e) aid_touch_area_mute

0xd673,	// (0x00027d72) aid_touch_area_slider_ParamLimits

0xd673,	// (0x00027d72) aid_touch_area_slider

0xd75f,	// (0x00027e5e) popup_slider_window_g4_ParamLimits

0xd75f,	// (0x00027e5e) popup_slider_window_g4

0xd76b,	// (0x00027e6a) popup_slider_window_g5_ParamLimits

0xd76b,	// (0x00027e6a) popup_slider_window_g5

0xd78d,	// (0x00027e8c) popup_slider_window_g6_ParamLimits

0xd78d,	// (0x00027e8c) popup_slider_window_g6

0xd7cd,	// (0x00027ecc) popup_slider_window_t2_ParamLimits

0xd7cd,	// (0x00027ecc) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002a3f3) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002a3f3) popup_slider_window_t

0xd7e5,	// (0x00027ee4) slider_pane_ParamLimits

0xd7e5,	// (0x00027ee4) slider_pane

0xe49d,	// (0x00028b9c) slider_pane_g1_ParamLimits

0xe49d,	// (0x00028b9c) slider_pane_g1

0xe4b1,	// (0x00028bb0) slider_pane_g2_ParamLimits

0xe4b1,	// (0x00028bb0) slider_pane_g2

0xe4c7,	// (0x00028bc6) slider_pane_g3_ParamLimits

0xe4c7,	// (0x00028bc6) slider_pane_g3

0x0003,

0x0097,	// (0x0001a796) slider_pane_g_ParamLimits

0x0097,	// (0x0001a796) slider_pane_g

0x951a,	// (0x00023c19) popup_tb_float_extension_window_ParamLimits

0x951a,	// (0x00023c19) popup_tb_float_extension_window

0xe4f3,	// (0x00028bf2) aid_size_cell_tb_float_ext

0x771f,	// (0x00021e1e) bg_popup_sub_window_cp28

0xe4ff,	// (0x00028bfe) grid_tb_float_ext_pane

0xe509,	// (0x00028c08) cell_tb_float_ext_pane_ParamLimits

0xe509,	// (0x00028c08) cell_tb_float_ext_pane

0xe523,	// (0x00028c22) cell_tb_float_ext_pane_g1

0xe52c,	// (0x00028c2b) grid_highlight_pane_cp12

0x6c5a,	// (0x00021359) cell_last_hwr_side_pane_ParamLimits

0x6c5a,	// (0x00021359) cell_last_hwr_side_pane

0xc119,	// (0x00026818) cell_last_hwr_side_pane_g1

0xe535,	// (0x00028c34) cell_last_hwr_side_pane_g2

0x0001,

0xfddc,	// (0x0002a4db) cell_last_hwr_side_pane_g

0x7300,	// (0x000219ff) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7300,	// (0x000219ff) vkb2_area_bottom_space_btn_pane

0xc3ab,	// (0x00026aaa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe047,	// (0x00028746) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x757a,	// (0x00021c79) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7599,	// (0x00021c98) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7599,	// (0x00021c98) vkb2_area_bottom_space_btn_pane_g1

0x75d3,	// (0x00021cd2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x75d3,	// (0x00021cd2) vkb2_area_bottom_space_btn_pane_g2

0x7609,	// (0x00021d08) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7609,	// (0x00021d08) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde1,	// (0x0002a4e0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde1,	// (0x0002a4e0) vkb2_area_bottom_space_btn_pane_g

0x6bce,	// (0x000212cd) cel_fep_hwr_func_pane_ParamLimits

0x6bce,	// (0x000212cd) cel_fep_hwr_func_pane

0x6c0a,	// (0x00021309) cell_hwr_side_button_pane_ParamLimits

0x6c0a,	// (0x00021309) cell_hwr_side_button_pane

0xda23,	// (0x00028122) aid_area_touch_clock_ParamLimits

0x7a9c,	// (0x0002219b) bg_uniindi_top_pane_ParamLimits

0xda35,	// (0x00028134) uniindi_top_pane_g1_ParamLimits

0xda4b,	// (0x0002814a) uniindi_top_pane_g2_ParamLimits

0xda57,	// (0x00028156) uniindi_top_pane_g3_ParamLimits

0xda68,	// (0x00028167) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002a42b) uniindi_top_pane_g_ParamLimits

0xda75,	// (0x00028174) uniindi_top_pane_t1_ParamLimits

0x7a9c,	// (0x0002219b) bg_vkb2_func_pane_cp01_ParamLimits

0x7a9c,	// (0x0002219b) bg_vkb2_func_pane_cp01

0xe53e,	// (0x00028c3d) cel_fep_hwr_func_pane_g1_ParamLimits

0xe53e,	// (0x00028c3d) cel_fep_hwr_func_pane_g1

0x7a9c,	// (0x0002219b) bg_vkb2_func_pane_cp02_ParamLimits

0x7a9c,	// (0x0002219b) bg_vkb2_func_pane_cp02

0xe53e,	// (0x00028c3d) cell_hwr_side_button_pane_g1_ParamLimits

0xe53e,	// (0x00028c3d) cell_hwr_side_button_pane_g1

0x996d,	// (0x0002406c) status_pane_g4_ParamLimits

0x996d,	// (0x0002406c) status_pane_g4

0x9987,	// (0x00024086) status_pane_t1

0xbe52,	// (0x00026551) form2_midp_gauge_slider_cont_pane

0xbe5a,	// (0x00026559) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe6c,	// (0x0002656b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe7e,	// (0x0002657d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0002a1f7) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe90,	// (0x0002658f) form2_midp_slider_pane_ParamLimits

0x6f6f,	// (0x0002166e) aid_size_cell_func_vkb2_ParamLimits

0x6f6f,	// (0x0002166e) aid_size_cell_func_vkb2

0xe4df,	// (0x00028bde) slider_pane_g4_ParamLimits

0xe4df,	// (0x00028bde) slider_pane_g4

0x7653,	// (0x00021d52) form2_midp_gauge_slider_pane_t2_cp01

0x7661,	// (0x00021d60) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7661,	// (0x00021d60) form2_midp_gauge_slider_pane_t3_cp01

0x767e,	// (0x00021d7d) form2_midp_slider_pane_cp01

0x771f,	// (0x00021e1e) navi_smil_pane

0xe577,	// (0x00028c76) navi_smil_pane_g1

0xe57f,	// (0x00028c7e) navi_smil_pane_t1

0xe54c,	// (0x00028c4b) form2_midp_slider_pane_g1

0xe555,	// (0x00028c54) form2_midp_slider_pane_g2

0xe55d,	// (0x00028c5c) form2_midp_slider_pane_g3

0xe54c,	// (0x00028c4b) form2_midp_slider_pane_g4

0xe565,	// (0x00028c64) form2_midp_slider_pane_g5

0x0004,

0x00ae,	// (0x0001a7ad) form2_midp_slider_pane_g

0x7643,	// (0x00021d42) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7643,	// (0x00021d42) vkb2_area_bottom_space_btn_pane_g4

0x97a3,	// (0x00023ea2) lc0_navi_pane_ParamLimits

0x97a3,	// (0x00023ea2) lc0_navi_pane

0x9819,	// (0x00023f18) lc0_stat_indi_pane_ParamLimits

0x9819,	// (0x00023f18) lc0_stat_indi_pane

0x9830,	// (0x00023f2f) ls0_title_pane_ParamLimits

0x9830,	// (0x00023f2f) ls0_title_pane

0x807f,	// (0x0002277e) bg_popup_sub_pane_cp14_ParamLimits

0xda0a,	// (0x00028109) list_uniindi_pane_ParamLimits

0xda16,	// (0x00028115) uniindi_top_pane_ParamLimits

0xdab2,	// (0x000281b1) list_single_uniindi_pane_g1_ParamLimits

0xdac5,	// (0x000281c4) list_single_uniindi_pane_t1_ParamLimits

0x7687,	// (0x00021d86) lc0_stat_clock_pane_ParamLimits

0x7687,	// (0x00021d86) lc0_stat_clock_pane

0xe58d,	// (0x00028c8c) lc0_stat_indi_pane_g1_ParamLimits

0xe58d,	// (0x00028c8c) lc0_stat_indi_pane_g1

0xe59a,	// (0x00028c99) lc0_stat_indi_pane_g2_ParamLimits

0xe59a,	// (0x00028c99) lc0_stat_indi_pane_g2

0x0001,

0x00b9,	// (0x0001a7b8) lc0_stat_indi_pane_g_ParamLimits

0x00b9,	// (0x0001a7b8) lc0_stat_indi_pane_g

0x7694,	// (0x00021d93) lc0_uni_indicator_pane_ParamLimits

0x7694,	// (0x00021d93) lc0_uni_indicator_pane

0xe5a7,	// (0x00028ca6) ls0_title_pane_g1_ParamLimits

0xe5a7,	// (0x00028ca6) ls0_title_pane_g1

0xe5bb,	// (0x00028cba) ls0_title_pane_t1_ParamLimits

0xe5bb,	// (0x00028cba) ls0_title_pane_t1

0x76a1,	// (0x00021da0) lc0_uni_indicator_pane_g1_ParamLimits

0x76a1,	// (0x00021da0) lc0_uni_indicator_pane_g1

0xe5f1,	// (0x00028cf0) lc0_stat_clock_pane_t1

0x771f,	// (0x00021e1e) main_ai5_pane

0xe5ff,	// (0x00028cfe) ai5_sk_pane_ParamLimits

0xe5ff,	// (0x00028cfe) ai5_sk_pane

0xe60c,	// (0x00028d0b) cell_ai5_widget_pane_ParamLimits

0xe60c,	// (0x00028d0b) cell_ai5_widget_pane

0xe68e,	// (0x00028d8d) aid_size_cell_widget_grid

0xe6a2,	// (0x00028da1) bg_ai5_widget_pane_ParamLimits

0xe6a2,	// (0x00028da1) bg_ai5_widget_pane

0xe6ca,	// (0x00028dc9) cell_ai5_widget_pane_g2

0xe6da,	// (0x00028dd9) cell_ai5_widget_pane_g3

0xe6f9,	// (0x00028df8) cell_ai5_widget_pane_g4

0xe705,	// (0x00028e04) cell_ai5_widget_pane_g5

0xe711,	// (0x00028e10) cell_ai5_widget_pane_g6

0xe71d,	// (0x00028e1c) cell_ai5_widget_pane_g7

0xe765,	// (0x00028e64) cell_ai5_widget_pane_t1_ParamLimits

0xe765,	// (0x00028e64) cell_ai5_widget_pane_t1

0xe782,	// (0x00028e81) cell_ai5_widget_pane_t2_ParamLimits

0xe782,	// (0x00028e81) cell_ai5_widget_pane_t2

0xe79a,	// (0x00028e99) cell_ai5_widget_pane_t3_ParamLimits

0xe79a,	// (0x00028e99) cell_ai5_widget_pane_t3

0xe7b2,	// (0x00028eb1) cell_ai5_widget_pane_t4_ParamLimits

0xe7b2,	// (0x00028eb1) cell_ai5_widget_pane_t4

0xe7cc,	// (0x00028ecb) cell_ai5_widget_pane_t5_ParamLimits

0xe7cc,	// (0x00028ecb) cell_ai5_widget_pane_t5

0xe7eb,	// (0x00028eea) cell_ai5_widget_pane_t6_ParamLimits

0xe7eb,	// (0x00028eea) cell_ai5_widget_pane_t6

0xe7fd,	// (0x00028efc) cell_ai5_widget_pane_t7_ParamLimits

0xe7fd,	// (0x00028efc) cell_ai5_widget_pane_t7

0xe816,	// (0x00028f15) cell_ai5_widget_pane_t8_ParamLimits

0xe816,	// (0x00028f15) cell_ai5_widget_pane_t8

0x0009,

0x00d3,	// (0x0001a7d2) cell_ai5_widget_pane_t_ParamLimits

0x00d3,	// (0x0001a7d2) cell_ai5_widget_pane_t

0xe862,	// (0x00028f61) grid_ai5_widget_pane

0x807f,	// (0x0002277e) highlight_cell_ai5_widget_pane_ParamLimits

0x807f,	// (0x0002277e) highlight_cell_ai5_widget_pane

0xe87a,	// (0x00028f79) ai5_sk_left_pane

0xe884,	// (0x00028f83) ai5_sk_middle_pane

0xe88e,	// (0x00028f8d) ai5_sk_right_pane

0xe898,	// (0x00028f97) bg_ai5_widget_pane_g1_ParamLimits

0xe898,	// (0x00028f97) bg_ai5_widget_pane_g1

0xe8a4,	// (0x00028fa3) bg_ai5_widget_pane_g2_ParamLimits

0xe8a4,	// (0x00028fa3) bg_ai5_widget_pane_g2

0xe8b0,	// (0x00028faf) bg_ai5_widget_pane_g3_ParamLimits

0xe8b0,	// (0x00028faf) bg_ai5_widget_pane_g3

0xe8bc,	// (0x00028fbb) bg_ai5_widget_pane_g4_ParamLimits

0xe8bc,	// (0x00028fbb) bg_ai5_widget_pane_g4

0xe8c8,	// (0x00028fc7) bg_ai5_widget_pane_g5_ParamLimits

0xe8c8,	// (0x00028fc7) bg_ai5_widget_pane_g5

0xe8d4,	// (0x00028fd3) bg_ai5_widget_pane_g6_ParamLimits

0xe8d4,	// (0x00028fd3) bg_ai5_widget_pane_g6

0xe8e0,	// (0x00028fdf) bg_ai5_widget_pane_g7_ParamLimits

0xe8e0,	// (0x00028fdf) bg_ai5_widget_pane_g7

0xe8ec,	// (0x00028feb) bg_ai5_widget_pane_g8_ParamLimits

0xe8ec,	// (0x00028feb) bg_ai5_widget_pane_g8

0xe8f8,	// (0x00028ff7) bg_ai5_widget_pane_g9_ParamLimits

0xe8f8,	// (0x00028ff7) bg_ai5_widget_pane_g9

0x0008,

0x00e8,	// (0x0001a7e7) bg_ai5_widget_pane_g_ParamLimits

0x00e8,	// (0x0001a7e7) bg_ai5_widget_pane_g

0xe92b,	// (0x0002902a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe92b,	// (0x0002902a) cell_shortcut_ai5_widget_pane

0x78dc,	// (0x00021fdb) bg_cell_shortcut_ai5_widget_pane

0xe93c,	// (0x0002903b) cell_grid_ai5_widget_pane_g1

0xe945,	// (0x00029044) highlight_cell_shortcut_ai5_widget_pane

0x9afc,	// (0x000241fb) ai5_sk_left_pane_g1

0xe94d,	// (0x0002904c) ai5_sk_left_pane_g2

0xe955,	// (0x00029054) ai5_sk_left_pane_g3

0xe95d,	// (0x0002905c) ai5_sk_left_pane_g4

0x0003,

0xfdea,	// (0x0002a4e9) ai5_sk_left_pane_g

0xe965,	// (0x00029064) ai5_sk_left_pane_t1

0x9af4,	// (0x000241f3) ai5_sk_right_pane_g1

0xe973,	// (0x00029072) ai5_sk_right_pane_g2

0xe97b,	// (0x0002907a) ai5_sk_right_pane_g3

0xe983,	// (0x00029082) ai5_sk_right_pane_g4

0x0003,

0xfdf3,	// (0x0002a4f2) ai5_sk_right_pane_g

0xe98b,	// (0x0002908a) ai5_sk_right_pane_t1

0x9af4,	// (0x000241f3) ai5_sk_middle_pane_g1

0x9afc,	// (0x000241fb) ai5_sk_middle_pane_g2

0x9b14,	// (0x00024213) ai5_sk_middle_pane_g3

0xe97b,	// (0x0002907a) ai5_sk_middle_pane_g4

0xe955,	// (0x00029054) ai5_sk_middle_pane_g5

0xe999,	// (0x00029098) ai5_sk_middle_pane_g6

0xe9a1,	// (0x000290a0) ai5_sk_middle_pane_g7

0x0006,

0xfdfc,	// (0x0002a4fb) ai5_sk_middle_pane_g

0x9627,	// (0x00023d26) aid_touch_area_size_lc0_ParamLimits

0x9627,	// (0x00023d26) aid_touch_area_size_lc0

0x6d59,	// (0x00021458) cell_hwr_candidate_pane_t1_ParamLimits

0x964f,	// (0x00023d4e) aid_touch_navi_pane

0x9917,	// (0x00024016) status_dt_navi_pane_ParamLimits

0x9917,	// (0x00024016) status_dt_navi_pane

0x9924,	// (0x00024023) status_dt_sta_pane_ParamLimits

0x9924,	// (0x00024023) status_dt_sta_pane

0xe9a9,	// (0x000290a8) dt_sta_controll_pane

0xe9b6,	// (0x000290b5) dt_sta_indi_pane

0xe9c7,	// (0x000290c6) dt_sta_title_pane

0x7a9c,	// (0x0002219b) bg_dt_sta_indi_pane_ParamLimits

0x7a9c,	// (0x0002219b) bg_dt_sta_indi_pane

0xe9da,	// (0x000290d9) dt_sta_battery_pane

0xe9e2,	// (0x000290e1) dt_sta_indi_pane_g1

0xe9eb,	// (0x000290ea) dt_sta_indi_pane_g2

0xe9f4,	// (0x000290f3) dt_sta_indi_pane_g3

0x0002,

0x011c,	// (0x0001a81b) dt_sta_indi_pane_g

0xe9fd,	// (0x000290fc) dt_sta_signal_pane

0x807f,	// (0x0002277e) bg_dt_sta_title_pane_ParamLimits

0x807f,	// (0x0002277e) bg_dt_sta_title_pane

0xea06,	// (0x00029105) dt_sta_title_pane_g1

0xea0e,	// (0x0002910d) dt_sta_title_pane_t1_ParamLimits

0xea0e,	// (0x0002910d) dt_sta_title_pane_t1

0x771f,	// (0x00021e1e) bg_dt_sta_control_pane

0xea23,	// (0x00029122) dt_sta_controll_pane_g1

0xea2c,	// (0x0002912b) bg_dt_sta_title_pane_g1

0xea35,	// (0x00029134) bg_dt_sta_title_pane_g2

0xea3e,	// (0x0002913d) bg_dt_sta_title_pane_g3

0x0002,

0x0123,	// (0x0001a822) bg_dt_sta_title_pane_g

0xc119,	// (0x00026818) bg_dt_sta_indi_pane_g1

0xea47,	// (0x00029146) dt_sta_signal_pane_g1

0xea4f,	// (0x0002914e) dt_sta_signal_pane_g2

0x0001,

0x012a,	// (0x0001a829) dt_sta_signal_pane_g

0xea57,	// (0x00029156) dt_sta_battery_pane_g1

0xea60,	// (0x0002915f) dt_sta_battery_pane_t1

0xc119,	// (0x00026818) bg_dt_sta_control_pane_g1

0x87ee,	// (0x00022eed) fep_china_uni_eep_pane

0x87f6,	// (0x00022ef5) fep_china_uni_entry_pane_ParamLimits

0x8806,	// (0x00022f05) popup_fep_china_uni_window_g1_ParamLimits

0x8816,	// (0x00022f15) popup_fep_china_uni_window_g2_ParamLimits

0x8816,	// (0x00022f15) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x00029e34) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x00029e34) popup_fep_china_uni_window_g

0xea6f,	// (0x0002916e) fep_china_uni_eep_pane_g1

0xea77,	// (0x00029176) fep_china_uni_eep_pane_t1

0xe56e,	// (0x00028c6d) aid_touch_area_size_smil_player

0x979b,	// (0x00023e9a) lc0_clock_pane

0x997b,	// (0x0002407a) status_pane_g5_ParamLimits

0x997b,	// (0x0002407a) status_pane_g5

0x91df,	// (0x000238de) popup_keymap_window

0x9939,	// (0x00024038) status_icon_pane

0xe6da,	// (0x00028dd9) cell_ai5_widget_pane_g3_ParamLimits

0xe6f9,	// (0x00028df8) cell_ai5_widget_pane_g4_ParamLimits

0xe705,	// (0x00028e04) cell_ai5_widget_pane_g5_ParamLimits

0xe729,	// (0x00028e28) cell_ai5_widget_pane_g8_ParamLimits

0xe729,	// (0x00028e28) cell_ai5_widget_pane_g8

0xe73d,	// (0x00028e3c) cell_ai5_widget_pane_g9_ParamLimits

0xe73d,	// (0x00028e3c) cell_ai5_widget_pane_g9

0xe751,	// (0x00028e50) cell_ai5_widget_pane_g10_ParamLimits

0xe751,	// (0x00028e50) cell_ai5_widget_pane_g10

0xea86,	// (0x00029185) status_icon_pane_g1

0x771f,	// (0x00021e1e) bg_popup_sub_pane_cp13

0xea8e,	// (0x0002918d) popup_keymap_window_t1

0x8fbb,	// (0x000236ba) control_pane_g6_ParamLimits

0x8fbb,	// (0x000236ba) control_pane_g6

0x8fc8,	// (0x000236c7) control_pane_g7_ParamLimits

0x8fc8,	// (0x000236c7) control_pane_g7

0x8fd5,	// (0x000236d4) control_pane_g8_ParamLimits

0x8fd5,	// (0x000236d4) control_pane_g8

0xe9a9,	// (0x000290a8) dt_sta_controll_pane_ParamLimits

0xe9b6,	// (0x000290b5) dt_sta_indi_pane_ParamLimits

0xe9c7,	// (0x000290c6) dt_sta_title_pane_ParamLimits

0x7fb7,	// (0x000226b6) aid_size_touch_scroll_bar_cale

0x5ed0,	// (0x000205cf) popup_discreet_window_ParamLimits

0x5ed0,	// (0x000205cf) popup_discreet_window

0x5f58,	// (0x00020657) popup_sk_window

0xa1b9,	// (0x000248b8) bg_popup_sub_pane_cp28_ParamLimits

0xa1b9,	// (0x000248b8) bg_popup_sub_pane_cp28

0xea9c,	// (0x0002919b) popup_discreet_window_g1_ParamLimits

0xea9c,	// (0x0002919b) popup_discreet_window_g1

0xeabc,	// (0x000291bb) popup_discreet_window_t1_ParamLimits

0xeabc,	// (0x000291bb) popup_discreet_window_t1

0xeada,	// (0x000291d9) popup_discreet_window_t2_ParamLimits

0xeada,	// (0x000291d9) popup_discreet_window_t2

0x0002,

0x012f,	// (0x0001a82e) popup_discreet_window_t_ParamLimits

0x012f,	// (0x0001a82e) popup_discreet_window_t

0x76b5,	// (0x00021db4) popup_sk_window_g1

0x76bf,	// (0x00021dbe) popup_sk_window_g2

0x0001,

0xfe0b,	// (0x0002a50a) popup_sk_window_g

0xeb2c,	// (0x0002922b) popup_sk_window_t1

0xeb3a,	// (0x00029239) popup_sk_window_t1_copy1

0xe6ca,	// (0x00028dc9) cell_ai5_widget_pane_g2_ParamLimits

0xe828,	// (0x00028f27) cell_ai5_widget_pane_t9_ParamLimits

0xe828,	// (0x00028f27) cell_ai5_widget_pane_t9

0x771f,	// (0x00021e1e) main_fep_fshwr2_pane

0xeb48,	// (0x00029247) aid_fshwr2_btn_pane

0xeb50,	// (0x0002924f) aid_fshwr2_syb_pane

0xeb58,	// (0x00029257) aid_fshwr2_txt_pane

0xeb60,	// (0x0002925f) fshwr2_func_candi_pane

0xeb6c,	// (0x0002926b) fshwr2_hwr_syb_pane

0xeb78,	// (0x00029277) fshwr2_icf_pane

0x771f,	// (0x00021e1e) fshwr2_icf_bg_pane

0xeb96,	// (0x00029295) fshwr2_icf_pane_t1_ParamLimits

0xeb96,	// (0x00029295) fshwr2_icf_pane_t1

0xc119,	// (0x00026818) fshwr2_func_candi_pane_g1

0xebad,	// (0x000292ac) fshwr2_func_candi_row_pane_ParamLimits

0xebad,	// (0x000292ac) fshwr2_func_candi_row_pane

0xebbe,	// (0x000292bd) cell_fshwr2_syb_pane_ParamLimits

0xebbe,	// (0x000292bd) cell_fshwr2_syb_pane

0xc3ab,	// (0x00026aaa) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) fshwr2_hwr_syb_pane_g1

0x771f,	// (0x00021e1e) bg_popup_call_pane_cp01

0xebd8,	// (0x000292d7) fshwr2_func_candi_cell_pane_ParamLimits

0xebd8,	// (0x000292d7) fshwr2_func_candi_cell_pane

0xec09,	// (0x00029308) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec09,	// (0x00029308) fshwr2_func_candi_cell_bg_pane

0xec23,	// (0x00029322) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec23,	// (0x00029322) fshwr2_func_candi_cell_pane_g1

0xec4b,	// (0x0002934a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec4b,	// (0x0002934a) fshwr2_func_candi_cell_pane_t1

0x771f,	// (0x00021e1e) bg_button_pane_cp08

0x8ce4,	// (0x000233e3) cell_fshwr2_syb_bg_pane

0xec5e,	// (0x0002935d) cell_fshwr2_syb_bg_pane_g1

0xec66,	// (0x00029365) cell_fshwr2_syb_bg_pane_t1

0x807f,	// (0x0002277e) main_tmo_pane

0xacda,	// (0x000253d9) uni_indicator_pane_g1_ParamLimits

0xacef,	// (0x000253ee) uni_indicator_pane_g2_ParamLimits

0xad05,	// (0x00025404) uni_indicator_pane_g3_ParamLimits

0xad1b,	// (0x0002541a) uni_indicator_pane_g4_ParamLimits

0xad1b,	// (0x0002541a) uni_indicator_pane_g4

0xad2f,	// (0x0002542e) uni_indicator_pane_g5_ParamLimits

0xad2f,	// (0x0002542e) uni_indicator_pane_g5

0xad43,	// (0x00025442) uni_indicator_pane_g6_ParamLimits

0xad43,	// (0x00025442) uni_indicator_pane_g6

0xf932,	// (0x0002a031) uni_indicator_pane_g_ParamLimits

0xd601,	// (0x00027d00) popup_tmo_note_window_ParamLimits

0xd601,	// (0x00027d00) popup_tmo_note_window

0x771f,	// (0x00021e1e) fshwr2_bg_pane

0xec3c,	// (0x0002933b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec3c,	// (0x0002933b) fshwr2_func_candi_cell_pane_g2

0x0001,

0x013b,	// (0x0001a83a) fshwr2_func_candi_cell_pane_g_ParamLimits

0x013b,	// (0x0001a83a) fshwr2_func_candi_cell_pane_g

0xc119,	// (0x00026818) bg_popup_window_pane_cp01

0xec75,	// (0x00029374) bg_popup_window_pane_g1_cp01

0xec7e,	// (0x0002937d) bg_popup_window_pane_cp22_ParamLimits

0xec7e,	// (0x0002937d) bg_popup_window_pane_cp22

0xec8c,	// (0x0002938b) listscroll_tmo_link_pane_ParamLimits

0xec8c,	// (0x0002938b) listscroll_tmo_link_pane

0xeccc,	// (0x000293cb) popup_tmo_note_window_g1_ParamLimits

0xeccc,	// (0x000293cb) popup_tmo_note_window_g1

0xecd9,	// (0x000293d8) tmo_note_info_pane_ParamLimits

0xecd9,	// (0x000293d8) tmo_note_info_pane

0xecf3,	// (0x000293f2) list_tmo_note_info_pane_g1_ParamLimits

0xecf3,	// (0x000293f2) list_tmo_note_info_pane_g1

0xed0a,	// (0x00029409) list_tmo_note_info_pane_g2_ParamLimits

0xed0a,	// (0x00029409) list_tmo_note_info_pane_g2

0x0001,

0x0140,	// (0x0001a83f) list_tmo_note_info_pane_g_ParamLimits

0x0140,	// (0x0001a83f) list_tmo_note_info_pane_g

0xed26,	// (0x00029425) list_tmo_note_info_text_pane_ParamLimits

0xed26,	// (0x00029425) list_tmo_note_info_text_pane

0xeda7,	// (0x000294a6) list_tmo_link_pane

0xedb4,	// (0x000294b3) scroll_pane_cp20

0xedc1,	// (0x000294c0) list_single_tmo_link_pane_ParamLimits

0xedc1,	// (0x000294c0) list_single_tmo_link_pane

0xedd1,	// (0x000294d0) list_single_tmo_link_pane_t1

0xeddf,	// (0x000294de) list_tmo_note_info_text_pane_t1_ParamLimits

0xeddf,	// (0x000294de) list_tmo_note_info_text_pane_t1

0x8145,	// (0x00022844) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8145,	// (0x00022844) aid_size_touch_scroll_bar_cp01

0x5271,	// (0x0001f970) aid_size_touch_slider_marker

0x5f40,	// (0x0002063f) popup_settings_window_ParamLimits

0x5f40,	// (0x0002063f) popup_settings_window

0x5440,	// (0x0001fb3f) popup_candi_list_indi_window

0x964f,	// (0x00023d4e) aid_touch_navi_pane_ParamLimits

0x6ec5,	// (0x000215c4) rs_clock_indi_pane

0x6ece,	// (0x000215cd) sctrl_sk_bottom_pane_ParamLimits

0x6edf,	// (0x000215de) sctrl_sk_top_pane_ParamLimits

0x6fc9,	// (0x000216c8) popup_fep_tooltip_window

0xe68e,	// (0x00028d8d) aid_size_cell_widget_grid_ParamLimits

0xe6be,	// (0x00028dbd) cell_ai5_widget_pane_g1_ParamLimits

0xe6be,	// (0x00028dbd) cell_ai5_widget_pane_g1

0xe711,	// (0x00028e10) cell_ai5_widget_pane_g6_ParamLimits

0xe71d,	// (0x00028e1c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x00be,	// (0x0001a7bd) cell_ai5_widget_pane_g_ParamLimits

0x00be,	// (0x0001a7bd) cell_ai5_widget_pane_g

0xe84c,	// (0x00028f4b) cell_ai5_widget_pane_t10_ParamLimits

0xe84c,	// (0x00028f4b) cell_ai5_widget_pane_t10

0xe862,	// (0x00028f61) grid_ai5_widget_pane_ParamLimits

0xe904,	// (0x00029003) cell_contacts_ai5_widget_pane_ParamLimits

0xe904,	// (0x00029003) cell_contacts_ai5_widget_pane

0xeaef,	// (0x000291ee) popup_discreet_window_t3_ParamLimits

0xeaef,	// (0x000291ee) popup_discreet_window_t3

0xeb82,	// (0x00029281) popup_fshwr2_char_preview_window_ParamLimits

0xeb82,	// (0x00029281) popup_fshwr2_char_preview_window

0xed44,	// (0x00029443) tmo_note_info_pane_t1

0xed59,	// (0x00029458) tmo_note_info_pane_t2

0xed6e,	// (0x0002946d) tmo_note_info_pane_t3

0xed83,	// (0x00029482) tmo_note_info_pane_t4

0xed95,	// (0x00029494) tmo_note_info_pane_t5

0x0004,

0x0145,	// (0x0001a844) tmo_note_info_pane_t

0xeda7,	// (0x000294a6) list_tmo_link_pane_ParamLimits

0xedb4,	// (0x000294b3) scroll_pane_cp20_ParamLimits

0x771f,	// (0x00021e1e) bg_popup_fep_char_preview_window_cp01

0xedf8,	// (0x000294f7) popup_fshwr2_char_preview_window_t1

0xee06,	// (0x00029505) popup_candi_list_indi_window_g1

0xee0f,	// (0x0002950e) bg_cell_contacts_ai5_widget_pane

0xee1b,	// (0x0002951a) cell_contacts_ai5_widget_pane_g1

0xee2f,	// (0x0002952e) cell_contacts_ai5_widget_pane_g2

0xee3e,	// (0x0002953d) cell_contacts_ai5_widget_pane_g3

0x0002,

0x0150,	// (0x0001a84f) cell_contacts_ai5_widget_pane_g

0xee51,	// (0x00029550) cell_contacts_ai5_widget_pane_t1

0x807f,	// (0x0002277e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeecb,	// (0x000295ca) settings_container_pane

0x8ce4,	// (0x000233e3) listscroll_set_pane_copy1

0xb82c,	// (0x00025f2b) scroll_pane_cp121_copy1

0xeed7,	// (0x000295d6) set_content_pane_copy1

0xeedf,	// (0x000295de) aid_height_set_list_copy1_ParamLimits

0xeedf,	// (0x000295de) aid_height_set_list_copy1

0xaf3b,	// (0x0002563a) aid_size_parent_copy1_ParamLimits

0xaf3b,	// (0x0002563a) aid_size_parent_copy1

0xeeeb,	// (0x000295ea) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeeeb,	// (0x000295ea) button_value_adjust_pane_cp6_copy1

0x904a,	// (0x00023749) list_highlight_pane_cp2_copy1_ParamLimits

0x904a,	// (0x00023749) list_highlight_pane_cp2_copy1

0xeeff,	// (0x000295fe) list_set_pane_copy1_ParamLimits

0xeeff,	// (0x000295fe) list_set_pane_copy1

0xee66,	// (0x00029565) main_pane_set_t1_copy1_ParamLimits

0xee66,	// (0x00029565) main_pane_set_t1_copy1

0xeea0,	// (0x0002959f) main_pane_set_t2_copy1_ParamLimits

0xeea0,	// (0x0002959f) main_pane_set_t2_copy1

0xefac,	// (0x000296ab) main_pane_set_t3_copy1

0xefba,	// (0x000296b9) main_pane_set_t4_copy1

0xeebf,	// (0x000295be) set_content_pane_g1_copy1_ParamLimits

0xeebf,	// (0x000295be) set_content_pane_g1_copy1

0xefc8,	// (0x000296c7) setting_code_pane_copy1

0xefd2,	// (0x000296d1) setting_slider_graphic_pane_copy1

0xefd2,	// (0x000296d1) setting_slider_pane_copy1

0xefd2,	// (0x000296d1) setting_text_pane_copy1

0xefdc,	// (0x000296db) setting_volume_pane_copy1

0xefe5,	// (0x000296e4) settings_code_pane_cp2_copy1

0xefed,	// (0x000296ec) settings_code_pane_cp_copy1_ParamLimits

0xefed,	// (0x000296ec) settings_code_pane_cp_copy1

0xf001,	// (0x00029700) volume_set_pane_copy1

0xf009,	// (0x00029708) volume_set_pane_g10_copy1

0xf011,	// (0x00029710) volume_set_pane_g1_copy1

0xf019,	// (0x00029718) volume_set_pane_g2_copy1

0xf021,	// (0x00029720) volume_set_pane_g3_copy1

0xf029,	// (0x00029728) volume_set_pane_g4_copy1

0xf031,	// (0x00029730) volume_set_pane_g5_copy1

0xf039,	// (0x00029738) volume_set_pane_g6_copy1

0xf041,	// (0x00029740) volume_set_pane_g7_copy1

0xf049,	// (0x00029748) volume_set_pane_g8_copy1

0xf051,	// (0x00029750) volume_set_pane_g9_copy1

0x7813,	// (0x00021f12) bg_set_opt_pane_cp_copy1_ParamLimits

0x7813,	// (0x00021f12) bg_set_opt_pane_cp_copy1

0xf059,	// (0x00029758) setting_slider_pane_t1_copy1_ParamLimits

0xf059,	// (0x00029758) setting_slider_pane_t1_copy1

0xf077,	// (0x00029776) setting_slider_pane_t2_copy1_ParamLimits

0xf077,	// (0x00029776) setting_slider_pane_t2_copy1

0xf091,	// (0x00029790) setting_slider_pane_t3_copy1_ParamLimits

0xf091,	// (0x00029790) setting_slider_pane_t3_copy1

0xf0a9,	// (0x000297a8) slider_set_pane_copy1_ParamLimits

0xf0a9,	// (0x000297a8) slider_set_pane_copy1

0x80e6,	// (0x000227e5) set_opt_bg_pane_g1_copy2

0x80ee,	// (0x000227ed) set_opt_bg_pane_g2_copy2

0xf0bf,	// (0x000297be) set_opt_bg_pane_g3_copy2

0x80fe,	// (0x000227fd) set_opt_bg_pane_g4_copy2

0x8106,	// (0x00022805) set_opt_bg_pane_g5_copy2

0x810e,	// (0x0002280d) set_opt_bg_pane_g6_copy2

0xf0c9,	// (0x000297c8) set_opt_bg_pane_g7_copy2

0xf0d1,	// (0x000297d0) set_opt_bg_pane_g8_copy2

0xf0db,	// (0x000297da) set_opt_bg_pane_g9_copy2

0x76c9,	// (0x00021dc8) aid_size_touch_slider_mark_copy1_ParamLimits

0x76c9,	// (0x00021dc8) aid_size_touch_slider_mark_copy1

0xf0e5,	// (0x000297e4) slider_set_pane_g1_copy1

0x76dd,	// (0x00021ddc) slider_set_pane_g2_copy1

0x69b5,	// (0x000210b4) slider_set_pane_g3_copy1_ParamLimits

0x69b5,	// (0x000210b4) slider_set_pane_g3_copy1

0x69c9,	// (0x000210c8) slider_set_pane_g4_copy1_ParamLimits

0x69c9,	// (0x000210c8) slider_set_pane_g4_copy1

0x69e1,	// (0x000210e0) slider_set_pane_g5_copy1_ParamLimits

0x69e1,	// (0x000210e0) slider_set_pane_g5_copy1

0x69b5,	// (0x000210b4) slider_set_pane_g6_copy1_ParamLimits

0x69b5,	// (0x000210b4) slider_set_pane_g6_copy1

0x76e5,	// (0x00021de4) slider_set_pane_g7_copy1_ParamLimits

0x76e5,	// (0x00021de4) slider_set_pane_g7_copy1

0x7733,	// (0x00021e32) bg_set_opt_pane_cp2_copy1

0xf0ee,	// (0x000297ed) setting_slider_graphic_pane_g1_copy1

0xf0f7,	// (0x000297f6) setting_slider_graphic_pane_t1_copy1

0xf107,	// (0x00029806) setting_slider_graphic_pane_t2_copy1

0xf117,	// (0x00029816) slider_set_pane_cp_copy1

0xf127,	// (0x00029826) input_focus_pane_cp1_copy1

0xf130,	// (0x0002982f) list_set_text_pane_copy1

0xf138,	// (0x00029837) setting_text_pane_g1_copy1

0x4c51,	// (0x0001f350) set_text_pane_t1_copy1

0xf127,	// (0x00029826) input_focus_pane_cp2_copy1

0xf138,	// (0x00029837) setting_code_pane_g1_copy1

0xf141,	// (0x00029840) setting_code_pane_t1_copy1

0xf14f,	// (0x0002984e) list_set_graphic_pane_copy1

0x7733,	// (0x00021e32) bg_set_opt_pane_cp4_copy1

0x89ea,	// (0x000230e9) list_set_graphic_pane_g1_copy1_ParamLimits

0x89ea,	// (0x000230e9) list_set_graphic_pane_g1_copy1

0xf161,	// (0x00029860) list_set_graphic_pane_g2_copy1

0x8a02,	// (0x00023101) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a02,	// (0x00023101) list_set_graphic_pane_t1_copy1

0xc119,	// (0x00026818) rs_clock_indi_pane_g1

0xf169,	// (0x00029868) rs_clock_indi_pane_t1

0xe9da,	// (0x000290d9) rs_indi_pane

0xf177,	// (0x00029876) rs_indi_pane_g1

0xf180,	// (0x0002987f) rs_indi_pane_g2

0xf189,	// (0x00029888) rs_indi_pane_g3

0x0002,

0x0157,	// (0x0001a856) rs_indi_pane_g

0x8ce4,	// (0x000233e3) bg_popup_preview_window_pane_cp03

0xf192,	// (0x00029891) popup_fep_tooltip_window_t1

0xcda2,	// (0x000274a1) popup_note2_window_g2_ParamLimits

0xcda2,	// (0x000274a1) popup_note2_window_g2

0x0001,

0xfc64,	// (0x0002a363) popup_note2_window_g_ParamLimits

0xfc64,	// (0x0002a363) popup_note2_window_g

0xd29d,	// (0x0002799c) bg_popup_sub_pane_cp11_ParamLimits

0xd2aa,	// (0x000279a9) cell_ai3_links_pane_g1_ParamLimits

0xd2c1,	// (0x000279c0) cell_ai3_links_pane_t1

0x4c51,	// (0x0001f350) set_text_pane_t1_copy1_ParamLimits

0x8bf5,	// (0x000232f4) cell_graphic_popup_pane_cp2_ParamLimits

0x8bf5,	// (0x000232f4) cell_graphic_popup_pane_cp2

0xf1a0,	// (0x0002989f) cell_graphic_popup_pane_g1_cp2

0x7dca,	// (0x000224c9) cell_graphic_popup_pane_g2_cp2

0xf1a8,	// (0x000298a7) cell_graphic_popup_pane_g3_cp2

0xf1b0,	// (0x000298af) cell_graphic_popup_pane_t2_cp2

0x7ddb,	// (0x000224da) grid_highlight_pane_cp3_cp2

0x8429,	// (0x00022b28) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x807f,	// (0x0002277e) main_tmo_pane_ParamLimits

0xd5f5,	// (0x00027cf4) popup_tmo_big_image_note_window

0xe6ae,	// (0x00028dad) cell_ai5_widget_list_pane

0xe6b6,	// (0x00028db5) cell_ai5_widget_lrg_icon_pane

0xed44,	// (0x00029443) tmo_note_info_pane_t1_ParamLimits

0xed59,	// (0x00029458) tmo_note_info_pane_t2_ParamLimits

0xed6e,	// (0x0002946d) tmo_note_info_pane_t3_ParamLimits

0xed83,	// (0x00029482) tmo_note_info_pane_t4_ParamLimits

0xed95,	// (0x00029494) tmo_note_info_pane_t5_ParamLimits

0x0145,	// (0x0001a844) tmo_note_info_pane_t_ParamLimits

0xeecb,	// (0x000295ca) settings_container_pane_ParamLimits

0xf11f,	// (0x0002981e) indicator_popup_pane_cp5

0xf11f,	// (0x0002981e) indicator_popup_pane_cp6

0xf14f,	// (0x0002984e) list_set_graphic_pane_copy1_ParamLimits

0x771f,	// (0x00021e1e) bg_popup_window_pane_cp23

0xf1be,	// (0x000298bd) popup_tmo_big_image_note_window_g1

0xf1c8,	// (0x000298c7) popup_tmo_big_image_note_window_t1

0xf1d8,	// (0x000298d7) popup_tmo_big_image_note_window_t2

0xf1e8,	// (0x000298e7) popup_tmo_big_image_note_window_t3

0x0002,

0x015e,	// (0x0001a85d) popup_tmo_big_image_note_window_t

0xf1f8,	// (0x000298f7) cell_ai5_widget_lrg_icon_pane_g1

0xf200,	// (0x000298ff) cell_ai5_widget_lrg_icon_pane_t1

0xf20e,	// (0x0002990d) cell_ai5_widget_list_row_pane_ParamLimits

0xf20e,	// (0x0002990d) cell_ai5_widget_list_row_pane

0xf227,	// (0x00029926) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf227,	// (0x00029926) cell_ai5_widget_list_row_pane_g1

0xf234,	// (0x00029933) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf234,	// (0x00029933) cell_ai5_widget_list_row_pane_t1

0xf24c,	// (0x0002994b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24c,	// (0x0002994b) cell_ai5_widget_list_row_pane_t2

0x0001,

0x0165,	// (0x0001a864) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0165,	// (0x0001a864) cell_ai5_widget_list_row_pane_t

0x771f,	// (0x00021e1e) main_fep_vtchi_ss_pane

0xf25e,	// (0x0002995d) popup_fep_char_pre_window

0xf266,	// (0x00029965) popup_fep_ituss_window

0xf287,	// (0x00029986) popup_fep_vkbss_window

0xf2a6,	// (0x000299a5) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x000299a5) grid_vkbss_keypad_pane

0xf2b6,	// (0x000299b5) ituss_keypad_pane

0xf2cf,	// (0x000299ce) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x000299ce) aid_vkbss_key_offset

0xf2db,	// (0x000299da) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x000299da) cell_vkbss_key_pane

0xf2f1,	// (0x000299f0) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x000299f0) bg_cell_vkbss_key_g1

0xf2fd,	// (0x000299fc) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x000299fc) cell_vkbss_key_3p_pane

0xf317,	// (0x00029a16) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x00029a16) cell_vkbss_key_g1

0xf331,	// (0x00029a30) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x00029a30) cell_vkbss_key_t1

0xf35c,	// (0x00029a5b) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x00029a5b) cell_ituss_key_pane

0xf36c,	// (0x00029a6b) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x00029a6b) bg_cell_ituss_key_g1

0xf378,	// (0x00029a77) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x00029a77) cell_ituss_key_pane_g1

0xf384,	// (0x00029a83) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x00029a83) cell_ituss_key_pane_g2

0x0001,

0x016a,	// (0x0001a869) cell_ituss_key_pane_g_ParamLimits

0x016a,	// (0x0001a869) cell_ituss_key_pane_g

0xf39d,	// (0x00029a9c) cell_ituss_key_t1_ParamLimits

0xf39d,	// (0x00029a9c) cell_ituss_key_t1

0xf3cb,	// (0x00029aca) cell_ituss_key_t2_ParamLimits

0xf3cb,	// (0x00029aca) cell_ituss_key_t2

0xf3fc,	// (0x00029afb) cell_ituss_key_t3_ParamLimits

0xf3fc,	// (0x00029afb) cell_ituss_key_t3

0xf42d,	// (0x00029b2c) cell_ituss_key_t4_ParamLimits

0xf42d,	// (0x00029b2c) cell_ituss_key_t4

0x0003,

0x016f,	// (0x0001a86e) cell_ituss_key_t_ParamLimits

0x016f,	// (0x0001a86e) cell_ituss_key_t

0xf45e,	// (0x00029b5d) cell_vkbss_key_3p_pane_g1

0xf466,	// (0x00029b65) cell_vkbss_key_3p_pane_g2

0xf46e,	// (0x00029b6d) cell_vkbss_key_3p_pane_g3

0x0002,

0x0178,	// (0x0001a877) cell_vkbss_key_3p_pane_g

0x771f,	// (0x00021e1e) bg_popup_fep_char_preview_window_cp02

0xf476,	// (0x00029b75) popup_fep_char_pre_window_t1

0xe684,	// (0x00028d83) main_ai5_sk_pane

0xee0f,	// (0x0002950e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee1b,	// (0x0002951a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee2f,	// (0x0002952e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee3e,	// (0x0002953d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0x0150,	// (0x0001a84f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee51,	// (0x00029550) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x807f,	// (0x0002277e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf485,	// (0x00029b84) main_ai5_sk_pane_g1

0x9ff2,	// (0x000246f1) popup_query_code_window_g1

0xf27c,	// (0x0002997b) popup_fep_vkb_icf_pane

0xf290,	// (0x0002998f) popup_fep_vtchi_icf_pane

0x807f,	// (0x0002277e) bg_icf_pane

0xf49d,	// (0x00029b9c) list_vkb_icf_pane

0x807f,	// (0x0002277e) bg_icf_pane_cp01

0xd5b4,	// (0x00027cb3) vtchi_icf_list_pane

0xf4bd,	// (0x00029bbc) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00029bbc) list_vkb_icf_pane_t1

0xf4d4,	// (0x00029bd3) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00029bd3) vtchi_icf_list_pane_t1

0xf266,	// (0x00029965) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0002998f) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x000299b5) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x000299c5) ituss_sks_pane

0x807f,	// (0x0002277e) bg_icf_pane_ParamLimits

0xf48e,	// (0x00029b8d) icf_edit_indi_pane_ParamLimits

0xf48e,	// (0x00029b8d) icf_edit_indi_pane

0xf49d,	// (0x00029b9c) list_vkb_icf_pane_ParamLimits

0x807f,	// (0x0002277e) bg_icf_pane_cp01_ParamLimits

0xf4a9,	// (0x00029ba8) icf_edit_indi_pane_cp01_ParamLimits

0xf4a9,	// (0x00029ba8) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00029bb4) vtchi_query_pane

0xc3ab,	// (0x00026aaa) icf_edit_indi_pane_g1_ParamLimits

0xc3ab,	// (0x00026aaa) icf_edit_indi_pane_g1

0xf4f0,	// (0x00029bef) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00029bef) icf_edit_indi_pane_g2

0x0001,

0xfe10,	// (0x0002a50f) icf_edit_indi_pane_g_ParamLimits

0xfe10,	// (0x0002a50f) icf_edit_indi_pane_g

0xf4fc,	// (0x00029bfb) icf_edit_indi_pane_t1

0xf50a,	// (0x00029c09) bg_input_focus_pane_cp042

0x7fae,	// (0x000226ad) vtchi_button_pane

0xf513,	// (0x00029c12) vtchi_query_pane_t1

0xf521,	// (0x00029c20) vtchi_query_pane_t2

0xf52f,	// (0x00029c2e) vtchi_query_pane_t3

0x0002,

0x0184,	// (0x0001a883) vtchi_query_pane_t

0x771f,	// (0x00021e1e) bg_button_pane_cp13

0xf53d,	// (0x00029c3c) vtchi_button_pane_g1

0xdafc,	// (0x000281fb) ituss_sks_pane_g1

0xf545,	// (0x00029c44) ituss_sks_pane_g2

0x0001,

0x018b,	// (0x0001a88a) ituss_sks_pane_g

0xf54e,	// (0x00029c4d) ituss_sks_pane_t1

0xf55c,	// (0x00029c5b) ituss_sks_pane_t2

0x0001,

0x0190,	// (0x0001a88f) ituss_sks_pane_t

0xbb7b,	// (0x0002627a) indicator_nsta_pane_cp_g1

0xbb84,	// (0x00026283) indicator_nsta_pane_cp_g2

0xbb8c,	// (0x0002628b) indicator_nsta_pane_cp_g3

0xbb94,	// (0x00026293) indicator_nsta_pane_cp_g4

0xbb9c,	// (0x0002629b) indicator_nsta_pane_cp_g5

0xbba4,	// (0x000262a3) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0002a1ad) indicator_nsta_pane_cp_g

0xe298,	// (0x00028997) cell_graphic2_pane_t2_ParamLimits

0xe298,	// (0x00028997) cell_graphic2_pane_t2

0x0001,

0x0047,	// (0x0001a746) cell_graphic2_pane_t_ParamLimits

0x0047,	// (0x0001a746) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00010e73 };

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
0x061c,	// (0x0001148f) Screen

0x0630,	// (0x000114a3) application_window_ParamLimits

0x0630,	// (0x000114a3) application_window

0x064a,	// (0x000114bd) screen_g1

0xd121,	// (0x0001df94) area_bottom_pane_ParamLimits

0xd121,	// (0x0001df94) area_bottom_pane

0xd1e1,	// (0x0001e054) area_top_pane_ParamLimits

0xd1e1,	// (0x0001e054) area_top_pane

0xd275,	// (0x0001e0e8) main_pane_ParamLimits

0xd275,	// (0x0001e0e8) main_pane

0x0654,	// (0x000114c7) misc_graphics

0x2704,	// (0x00013577) battery_pane_ParamLimits

0x2704,	// (0x00013577) battery_pane

0x34e2,	// (0x00014355) bg_status_flat_pane_g8

0x34ea,	// (0x0001435d) bg_status_flat_pane_g9

0x27c6,	// (0x00013639) context_pane_ParamLimits

0x27c6,	// (0x00013639) context_pane

0x28dc,	// (0x0001374f) navi_pane_ParamLimits

0x28dc,	// (0x0001374f) navi_pane

0x2960,	// (0x000137d3) signal_pane_ParamLimits

0x2960,	// (0x000137d3) signal_pane

0x0008,

0xf878,	// (0x000206eb) bg_status_flat_pane_g

0x29cd,	// (0x00013840) status_pane_g1_ParamLimits

0x29cd,	// (0x00013840) status_pane_g1

0x29d9,	// (0x0001384c) status_pane_g2_ParamLimits

0x29d9,	// (0x0001384c) status_pane_g2

0x29e5,	// (0x00013858) status_pane_g3_ParamLimits

0x29e5,	// (0x00013858) status_pane_g3

0x0004,

0xf7a6,	// (0x00020619) status_pane_g_ParamLimits

0xf7a6,	// (0x00020619) status_pane_g

0x2a19,	// (0x0001388c) title_pane_ParamLimits

0x2a19,	// (0x0001388c) title_pane

0x2a56,	// (0x000138c9) uni_indicator_pane_ParamLimits

0x2a56,	// (0x000138c9) uni_indicator_pane

0x261c,	// (0x0001348f) bg_list_pane_ParamLimits

0x261c,	// (0x0001348f) bg_list_pane

0xc773,	// (0x0001d5e6) find_pane

0x2644,	// (0x000134b7) listscroll_app_pane_ParamLimits

0x2644,	// (0x000134b7) listscroll_app_pane

0x2650,	// (0x000134c3) listscroll_form_pane

0xc77b,	// (0x0001d5ee) listscroll_gen_pane_ParamLimits

0xc77b,	// (0x0001d5ee) listscroll_gen_pane

0xdb29,	// (0x0001e99c) listscroll_set_pane

0x1832,	// (0x000126a5) main_idle_act_pane

0x2326,	// (0x00013199) main_idle_trad_pane

0x2326,	// (0x00013199) main_list_empty_pane

0x266a,	// (0x000134dd) main_midp_pane

0x2676,	// (0x000134e9) main_pane_g1_ParamLimits

0x2676,	// (0x000134e9) main_pane_g1

0xdb31,	// (0x0001e9a4) popup_ai_message_window_ParamLimits

0xdb31,	// (0x0001e9a4) popup_ai_message_window

0xdbd5,	// (0x0001ea48) popup_fep_china_uni_window_ParamLimits

0xdbd5,	// (0x0001ea48) popup_fep_china_uni_window

0xdc2f,	// (0x0001eaa2) popup_fep_japan_candidate_window_ParamLimits

0xdc2f,	// (0x0001eaa2) popup_fep_japan_candidate_window

0xdc4d,	// (0x0001eac0) popup_fep_japan_predictive_window_ParamLimits

0xdc4d,	// (0x0001eac0) popup_fep_japan_predictive_window

0xdc7d,	// (0x0001eaf0) popup_find_window

0xdc8a,	// (0x0001eafd) popup_grid_graphic_window_ParamLimits

0xdc8a,	// (0x0001eafd) popup_grid_graphic_window

0xdcb2,	// (0x0001eb25) popup_large_graphic_colour_window

0xdcd8,	// (0x0001eb4b) popup_menu_window_ParamLimits

0xdcd8,	// (0x0001eb4b) popup_menu_window

0xde92,	// (0x0001ed05) popup_note_image_window

0xde7e,	// (0x0001ecf1) popup_note_wait_window_ParamLimits

0xde7e,	// (0x0001ecf1) popup_note_wait_window

0xde7e,	// (0x0001ecf1) popup_note_window_ParamLimits

0xde7e,	// (0x0001ecf1) popup_note_window

0xdee8,	// (0x0001ed5b) popup_query_code_window_ParamLimits

0xdee8,	// (0x0001ed5b) popup_query_code_window

0xdefc,	// (0x0001ed6f) popup_query_data_code_window_ParamLimits

0xdefc,	// (0x0001ed6f) popup_query_data_code_window

0xdf17,	// (0x0001ed8a) popup_query_data_window_ParamLimits

0xdf17,	// (0x0001ed8a) popup_query_data_window

0xdf31,	// (0x0001eda4) popup_query_sat_info_window_ParamLimits

0xdf31,	// (0x0001eda4) popup_query_sat_info_window

0xdf6a,	// (0x0001eddd) popup_snote_single_graphic_window_ParamLimits

0xdf6a,	// (0x0001eddd) popup_snote_single_graphic_window

0xdf6a,	// (0x0001eddd) popup_snote_single_text_window_ParamLimits

0xdf6a,	// (0x0001eddd) popup_snote_single_text_window

0xdf7f,	// (0x0001edf2) popup_sub_window_general

0xe0ad,	// (0x0001ef20) popup_window_general_ParamLimits

0xe0ad,	// (0x0001ef20) popup_window_general

0x268c,	// (0x000134ff) power_save_pane

0xd9c7,	// (0x0001e83a) control_pane_g1_ParamLimits

0xd9c7,	// (0x0001e83a) control_pane_g1

0xd9ee,	// (0x0001e861) control_pane_g2_ParamLimits

0xd9ee,	// (0x0001e861) control_pane_g2

0x25df,	// (0x00013452) control_pane_g3_ParamLimits

0x25df,	// (0x00013452) control_pane_g3

0x0007,

0xf78e,	// (0x00020601) control_pane_g_ParamLimits

0xf78e,	// (0x00020601) control_pane_g

0xda36,	// (0x0001e8a9) control_pane_t1_ParamLimits

0xda36,	// (0x0001e8a9) control_pane_t1

0xda82,	// (0x0001e8f5) control_pane_t2_ParamLimits

0xda82,	// (0x0001e8f5) control_pane_t2

0x0002,

0xf79f,	// (0x00020612) control_pane_t_ParamLimits

0xf79f,	// (0x00020612) control_pane_t

0x2500,	// (0x00013373) navi_navi_volume_pane_cp1

0x2509,	// (0x0001337c) status_small_icon_pane

0x2511,	// (0x00013384) status_small_pane_g1_ParamLimits

0x2511,	// (0x00013384) status_small_pane_g1

0x2545,	// (0x000133b8) status_small_pane_g2_ParamLimits

0x2545,	// (0x000133b8) status_small_pane_g2

0x2551,	// (0x000133c4) status_small_pane_g3_ParamLimits

0x2551,	// (0x000133c4) status_small_pane_g3

0x255d,	// (0x000133d0) status_small_pane_g4_ParamLimits

0x255d,	// (0x000133d0) status_small_pane_g4

0x2569,	// (0x000133dc) status_small_pane_g5_ParamLimits

0x2569,	// (0x000133dc) status_small_pane_g5

0x2578,	// (0x000133eb) status_small_pane_g6_ParamLimits

0x2578,	// (0x000133eb) status_small_pane_g6

0x0007,

0xf77d,	// (0x000205f0) status_small_pane_g_ParamLimits

0xf77d,	// (0x000205f0) status_small_pane_g

0x25a8,	// (0x0001341b) status_small_pane_t1

0x25cb,	// (0x0001343e) status_small_wait_pane_ParamLimits

0x25cb,	// (0x0001343e) status_small_wait_pane

0x1d22,	// (0x00012b95) aid_levels_signal_ParamLimits

0x1d22,	// (0x00012b95) aid_levels_signal

0x1d34,	// (0x00012ba7) signal_pane_g1_ParamLimits

0x1d34,	// (0x00012ba7) signal_pane_g1

0x1d49,	// (0x00012bbc) signal_pane_g2_ParamLimits

0x1d49,	// (0x00012bbc) signal_pane_g2

0x0003,

0xf70e,	// (0x00020581) signal_pane_g_ParamLimits

0xf70e,	// (0x00020581) signal_pane_g

0x1d83,	// (0x00012bf6) context_pane_g1

0x065e,	// (0x000114d1) title_pane_g1

0x0694,	// (0x00011507) title_pane_t1

0x06fc,	// (0x0001156f) title_pane_t2

0x0722,	// (0x00011595) title_pane_t3

0x0002,

0xf55d,	// (0x000203d0) title_pane_t

0x2a6e,	// (0x000138e1) aid_levels_battery_ParamLimits

0x2a6e,	// (0x000138e1) aid_levels_battery

0x2a82,	// (0x000138f5) battery_pane_g1_ParamLimits

0x2a82,	// (0x000138f5) battery_pane_g1

0x2a98,	// (0x0001390b) battery_pane_g2_ParamLimits

0x2a98,	// (0x0001390b) battery_pane_g2

0x0001,

0xf7b1,	// (0x00020624) battery_pane_g_ParamLimits

0xf7b1,	// (0x00020624) battery_pane_g

0x3e16,	// (0x00014c89) uni_indicator_pane_g1

0x3e2d,	// (0x00014ca0) uni_indicator_pane_g2

0x3e40,	// (0x00014cb3) uni_indicator_pane_g3

0x0005,

0xf920,	// (0x00020793) uni_indicator_pane_g

0x21a4,	// (0x00013017) navi_icon_pane_ParamLimits

0x21a4,	// (0x00013017) navi_icon_pane

0x20ed,	// (0x00012f60) navi_midp_pane

0x21c0,	// (0x00013033) navi_navi_pane

0x21ca,	// (0x0001303d) navi_text_pane_ParamLimits

0x21ca,	// (0x0001303d) navi_text_pane

0x064a,	// (0x000114bd) status_small_wait_pane_g1

0x0b5f,	// (0x000119d2) status_small_wait_pane_g2

0x0001,

0xf91b,	// (0x0002078e) status_small_wait_pane_g

0x3b3d,	// (0x000149b0) navi_navi_icon_text_pane

0x3b57,	// (0x000149ca) navi_navi_pane_g1_ParamLimits

0x3b57,	// (0x000149ca) navi_navi_pane_g1

0x3b45,	// (0x000149b8) navi_navi_pane_g2_ParamLimits

0x3b45,	// (0x000149b8) navi_navi_pane_g2

0x0001,

0xf8e9,	// (0x0002075c) navi_navi_pane_g_ParamLimits

0xf8e9,	// (0x0002075c) navi_navi_pane_g

0x3b69,	// (0x000149dc) navi_navi_tabs_pane

0x3b72,	// (0x000149e5) navi_navi_text_pane

0x3b3d,	// (0x000149b0) navi_navi_volume_pane

0x3b19,	// (0x0001498c) navi_text_pane_t1

0x3b0d,	// (0x00014980) navi_icon_pane_g1

0x3a60,	// (0x000148d3) navi_navi_text_pane_t1

0xe33d,	// (0x0001f1b0) navi_navi_volume_pane_g1

0xe345,	// (0x0001f1b8) volume_small_pane

0x39c6,	// (0x00014839) navi_navi_icon_text_pane_g1

0x39ce,	// (0x00014841) navi_navi_icon_text_pane_t1

0x21c0,	// (0x00013033) navi_tabs_2_long_pane

0x21c0,	// (0x00013033) navi_tabs_2_pane

0x21c0,	// (0x00013033) navi_tabs_3_long_pane

0x21c0,	// (0x00013033) navi_tabs_3_pane

0x21c0,	// (0x00013033) navi_tabs_4_pane

0xe31d,	// (0x0001f190) tabs_2_active_pane_ParamLimits

0xe31d,	// (0x0001f190) tabs_2_active_pane

0xe32d,	// (0x0001f1a0) tabs_2_passive_pane_ParamLimits

0xe32d,	// (0x0001f1a0) tabs_2_passive_pane

0xe2eb,	// (0x0001f15e) tabs_3_active_pane_ParamLimits

0xe2eb,	// (0x0001f15e) tabs_3_active_pane

0xe2fb,	// (0x0001f16e) tabs_3_passive_pane_ParamLimits

0xe2fb,	// (0x0001f16e) tabs_3_passive_pane

0xe30c,	// (0x0001f17f) tabs_3_passive_pane_cp_ParamLimits

0xe30c,	// (0x0001f17f) tabs_3_passive_pane_cp

0xe2a7,	// (0x0001f11a) tabs_4_active_pane_ParamLimits

0xe2a7,	// (0x0001f11a) tabs_4_active_pane

0xe2b8,	// (0x0001f12b) tabs_4_passive_pane_ParamLimits

0xe2b8,	// (0x0001f12b) tabs_4_passive_pane

0xe2c9,	// (0x0001f13c) tabs_4_passive_pane_cp_ParamLimits

0xe2c9,	// (0x0001f13c) tabs_4_passive_pane_cp

0xe2da,	// (0x0001f14d) tabs_4_passive_pane_cp2_ParamLimits

0xe2da,	// (0x0001f14d) tabs_4_passive_pane_cp2

0xe283,	// (0x0001f0f6) tabs_2_long_active_pane_ParamLimits

0xe283,	// (0x0001f0f6) tabs_2_long_active_pane

0xe295,	// (0x0001f108) tabs_2_long_passive_pane_ParamLimits

0xe295,	// (0x0001f108) tabs_2_long_passive_pane

0xe24a,	// (0x0001f0bd) tabs_3_long_active_pane_ParamLimits

0xe24a,	// (0x0001f0bd) tabs_3_long_active_pane

0xe25d,	// (0x0001f0d0) tabs_3_long_passive_pane_ParamLimits

0xe25d,	// (0x0001f0d0) tabs_3_long_passive_pane

0xe270,	// (0x0001f0e3) tabs_3_long_passive_pane_cp_ParamLimits

0xe270,	// (0x0001f0e3) tabs_3_long_passive_pane_cp

0xe1f0,	// (0x0001f063) volume_small_pane_g1

0xe1f9,	// (0x0001f06c) volume_small_pane_g2

0xe202,	// (0x0001f075) volume_small_pane_g3

0xe20b,	// (0x0001f07e) volume_small_pane_g4

0xe214,	// (0x0001f087) volume_small_pane_g5

0xe21d,	// (0x0001f090) volume_small_pane_g6

0xe226,	// (0x0001f099) volume_small_pane_g7

0xe22f,	// (0x0001f0a2) volume_small_pane_g8

0xe238,	// (0x0001f0ab) volume_small_pane_g9

0xe241,	// (0x0001f0b4) volume_small_pane_g10

0x0009,

0xf8b5,	// (0x00020728) volume_small_pane_g

0x0734,	// (0x000115a7) bg_active_tab_pane_cp2_ParamLimits

0x0734,	// (0x000115a7) bg_active_tab_pane_cp2

0x0742,	// (0x000115b5) tabs_3_active_pane_g1

0x074a,	// (0x000115bd) tabs_3_active_pane_t1

0x0734,	// (0x000115a7) bg_passive_tab_pane_cp2_ParamLimits

0x0734,	// (0x000115a7) bg_passive_tab_pane_cp2

0x0742,	// (0x000115b5) tabs_3_passive_pane_g1

0x074a,	// (0x000115bd) tabs_3_passive_pane_t1

0x0734,	// (0x000115a7) bg_active_tab_pane_cp3_ParamLimits

0x0734,	// (0x000115a7) bg_active_tab_pane_cp3

0x075c,	// (0x000115cf) tabs_4_active_pane_g1

0x0764,	// (0x000115d7) tabs_4_active_pane_t1

0x0734,	// (0x000115a7) bg_passive_tab_pane_cp3_ParamLimits

0x0734,	// (0x000115a7) bg_passive_tab_pane_cp3

0x075c,	// (0x000115cf) tabs_4_1_passive_pane_g1

0x0764,	// (0x000115d7) tabs_4_1_passive_pane_t1

0x266a,	// (0x000134dd) list_highlight_pane_cp2

0x4093,	// (0x00014f06) list_set_pane_ParamLimits

0x4093,	// (0x00014f06) list_set_pane

0x4139,	// (0x00014fac) main_pane_set_t1_ParamLimits

0x4139,	// (0x00014fac) main_pane_set_t1

0x4159,	// (0x00014fcc) main_pane_set_t2_ParamLimits

0x4159,	// (0x00014fcc) main_pane_set_t2

0x416d,	// (0x00014fe0) main_pane_set_t3_ParamLimits

0x416d,	// (0x00014fe0) main_pane_set_t3

0x417f,	// (0x00014ff2) main_pane_set_t4_ParamLimits

0x417f,	// (0x00014ff2) main_pane_set_t4

0x0003,

0xf985,	// (0x000207f8) main_pane_set_t_ParamLimits

0xf985,	// (0x000207f8) main_pane_set_t

0x4191,	// (0x00015004) setting_code_pane

0x419b,	// (0x0001500e) setting_slider_graphic_pane

0x419b,	// (0x0001500e) setting_slider_pane

0x419b,	// (0x0001500e) setting_text_pane

0x419b,	// (0x0001500e) setting_volume_pane

0xd4b6,	// (0x0001e329) volume_set_pane

0x0734,	// (0x000115a7) bg_set_opt_pane_cp

0xd4be,	// (0x0001e331) setting_slider_pane_t1

0xd4d7,	// (0x0001e34a) setting_slider_pane_t2

0xd4f1,	// (0x0001e364) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000203d7) setting_slider_pane_t

0xd509,	// (0x0001e37c) slider_set_pane

0x0654,	// (0x000114c7) bg_set_opt_pane_cp2

0x0776,	// (0x000115e9) setting_slider_graphic_pane_g1

0xd51f,	// (0x0001e392) setting_slider_graphic_pane_t1

0xd52f,	// (0x0001e3a2) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000203de) setting_slider_graphic_pane_t

0xd53f,	// (0x0001e3b2) slider_set_pane_cp

0x0654,	// (0x000114c7) input_focus_pane_cp1

0x4052,	// (0x00014ec5) list_set_text_pane

0x064a,	// (0x000114bd) setting_text_pane_g1

0x0654,	// (0x000114c7) input_focus_pane_cp2

0x064a,	// (0x000114bd) setting_code_pane_g1

0x077f,	// (0x000115f2) setting_code_pane_t1

0xbff2,	// (0x0001ce65) set_text_pane_t1_ParamLimits

0xbff2,	// (0x0001ce65) set_text_pane_t1

0x161d,	// (0x00012490) set_opt_bg_pane_g1

0x1625,	// (0x00012498) set_opt_bg_pane_g2

0x4032,	// (0x00014ea5) set_opt_bg_pane_g3

0x1635,	// (0x000124a8) set_opt_bg_pane_g4

0x163d,	// (0x000124b0) set_opt_bg_pane_g5

0x1645,	// (0x000124b8) set_opt_bg_pane_g6

0x403a,	// (0x00014ead) set_opt_bg_pane_g7

0x4042,	// (0x00014eb5) set_opt_bg_pane_g8

0x404a,	// (0x00014ebd) set_opt_bg_pane_g9

0x0008,

0xf972,	// (0x000207e5) set_opt_bg_pane_g

0x4025,	// (0x00014e98) slider_set_pane_g1

0xe3b2,	// (0x0001f225) slider_set_pane_g2

0x0006,

0xf963,	// (0x000207d6) slider_set_pane_g

0xe34e,	// (0x0001f1c1) volume_set_pane_g1

0xe356,	// (0x0001f1c9) volume_set_pane_g2

0xe35e,	// (0x0001f1d1) volume_set_pane_g3

0xe366,	// (0x0001f1d9) volume_set_pane_g4

0xe36e,	// (0x0001f1e1) volume_set_pane_g5

0xe376,	// (0x0001f1e9) volume_set_pane_g6

0xe37e,	// (0x0001f1f1) volume_set_pane_g7

0xe386,	// (0x0001f1f9) volume_set_pane_g8

0xe38e,	// (0x0001f201) volume_set_pane_g9

0xe396,	// (0x0001f209) volume_set_pane_g10

0x0009,

0xf93b,	// (0x000207ae) volume_set_pane_g

0x07a7,	// (0x0001161a) indicator_pane_ParamLimits

0x07a7,	// (0x0001161a) indicator_pane

0x07b3,	// (0x00011626) main_idle_pane_g2_ParamLimits

0x07b3,	// (0x00011626) main_idle_pane_g2

0x07db,	// (0x0001164e) main_pane_idle_g1_ParamLimits

0x07db,	// (0x0001164e) main_pane_idle_g1

0x07e8,	// (0x0001165b) popup_clock_digital_analogue_window_ParamLimits

0x07e8,	// (0x0001165b) popup_clock_digital_analogue_window

0x07ff,	// (0x00011672) soft_indicator_pane_ParamLimits

0x07ff,	// (0x00011672) soft_indicator_pane

0x080b,	// (0x0001167e) wallpaper_pane_ParamLimits

0x080b,	// (0x0001167e) wallpaper_pane

0x064a,	// (0x000114bd) wallpaper_pane_g1

0x081f,	// (0x00011692) indicator_pane_g1_ParamLimits

0x081f,	// (0x00011692) indicator_pane_g1

0x454f,	// (0x000153c2) navi_navi_icon_text_pane_srt_g1

0x083a,	// (0x000116ad) soft_indicator_pane_t1

0x0854,	// (0x000116c7) aid_ps_area_pane

0x0865,	// (0x000116d8) aid_ps_clock_pane

0x0873,	// (0x000116e6) aid_ps_indicator_pane

0x087f,	// (0x000116f2) indicator_ps_pane_ParamLimits

0x087f,	// (0x000116f2) indicator_ps_pane

0x088e,	// (0x00011701) power_save_pane_g1_ParamLimits

0x088e,	// (0x00011701) power_save_pane_g1

0x089a,	// (0x0001170d) power_save_pane_g2_ParamLimits

0x089a,	// (0x0001170d) power_save_pane_g2

0xd0d5,	// (0x0001df48) aid_navinavi_width_pane

0x0854,	// (0x000116c7) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000203e3) power_save_pane_g_ParamLimits

0xf570,	// (0x000203e3) power_save_pane_g

0x08a8,	// (0x0001171b) power_save_pane_t1_ParamLimits

0x08a8,	// (0x0001171b) power_save_pane_t1

0x0865,	// (0x000116d8) aid_ps_clock_pane_ParamLimits

0x0873,	// (0x000116e6) aid_ps_indicator_pane_ParamLimits

0x08ba,	// (0x0001172d) power_save_pane_t4_ParamLimits

0x08ba,	// (0x0001172d) power_save_pane_t4

0x0001,

0xf575,	// (0x000203e8) power_save_pane_t_ParamLimits

0xf575,	// (0x000203e8) power_save_pane_t

0x08e4,	// (0x00011757) power_save_t3_ParamLimits

0x08e4,	// (0x00011757) power_save_t3

0x08cf,	// (0x00011742) power_save_t2_ParamLimits

0x08cf,	// (0x00011742) power_save_t2

0x08f9,	// (0x0001176c) indicator_ps_pane_g1

0x0902,	// (0x00011775) ai_gene_pane_ParamLimits

0x0902,	// (0x00011775) ai_gene_pane

0x090e,	// (0x00011781) ai_links_pane_ParamLimits

0x090e,	// (0x00011781) ai_links_pane

0x091a,	// (0x0001178d) indicator_pane_cp1_ParamLimits

0x091a,	// (0x0001178d) indicator_pane_cp1

0x0926,	// (0x00011799) main_pane_idle_g1_cp_ParamLimits

0x0926,	// (0x00011799) main_pane_idle_g1_cp

0x0932,	// (0x000117a5) popup_ai_links_title_window

0x093b,	// (0x000117ae) soft_indicator_pane_cp1_ParamLimits

0x093b,	// (0x000117ae) soft_indicator_pane_cp1

0x3e04,	// (0x00014c77) ai_links_pane_g1

0x3e0d,	// (0x00014c80) grid_ai_links_pane

0x3de7,	// (0x00014c5a) ai_gene_pane_1

0x3df2,	// (0x00014c65) ai_gene_pane_2

0x3dfb,	// (0x00014c6e) list_highlight_pane_cp4

0x3dcb,	// (0x00014c3e) cell_ai_link_pane_ParamLimits

0x3dcb,	// (0x00014c3e) cell_ai_link_pane

0x3dc3,	// (0x00014c36) cell_ai_link_pane_g1

0x0b5f,	// (0x000119d2) cell_ai_link_pane_g2

0x0001,

0xf916,	// (0x00020789) cell_ai_link_pane_g

0x0654,	// (0x000114c7) grid_highlight_cp2

0x0654,	// (0x000114c7) bg_popup_sub_pane_cp1

0x0955,	// (0x000117c8) popup_ai_links_title_window_t1

0x3d13,	// (0x00014b86) ai_gene_pane_1_g1_ParamLimits

0x3d13,	// (0x00014b86) ai_gene_pane_1_g1

0x3d1f,	// (0x00014b92) ai_gene_pane_1_g2_ParamLimits

0x3d1f,	// (0x00014b92) ai_gene_pane_1_g2

0x0001,

0xf90c,	// (0x0002077f) ai_gene_pane_1_g_ParamLimits

0xf90c,	// (0x0002077f) ai_gene_pane_1_g

0x3d2c,	// (0x00014b9f) ai_gene_pane_1_t1_ParamLimits

0x3d2c,	// (0x00014b9f) ai_gene_pane_1_t1

0x3d60,	// (0x00014bd3) grid_ai_soft_ind_pane

0x3cfe,	// (0x00014b71) ai_gene_pane_2_t1_ParamLimits

0x3cfe,	// (0x00014b71) ai_gene_pane_2_t1

0x0964,	// (0x000117d7) main_pane_empty_t1_ParamLimits

0x0964,	// (0x000117d7) main_pane_empty_t1

0x097c,	// (0x000117ef) main_pane_empty_t2_ParamLimits

0x097c,	// (0x000117ef) main_pane_empty_t2

0x0991,	// (0x00011804) main_pane_empty_t3_ParamLimits

0x0991,	// (0x00011804) main_pane_empty_t3

0x09a3,	// (0x00011816) main_pane_empty_t4_ParamLimits

0x09a3,	// (0x00011816) main_pane_empty_t4

0x09b5,	// (0x00011828) main_pane_empty_t5_ParamLimits

0x09b5,	// (0x00011828) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000203ed) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000203ed) main_pane_empty_t

0x16fc,	// (0x0001256f) bg_popup_window_pane_ParamLimits

0x16fc,	// (0x0001256f) bg_popup_window_pane

0x3a6e,	// (0x000148e1) find_popup_pane_cp2_ParamLimits

0x3a6e,	// (0x000148e1) find_popup_pane_cp2

0x3a7a,	// (0x000148ed) heading_pane_ParamLimits

0x3a7a,	// (0x000148ed) heading_pane

0x0654,	// (0x000114c7) bg_popup_sub_pane

0x39e8,	// (0x0001485b) bg_popup_window_pane_g1_ParamLimits

0x39e8,	// (0x0001485b) bg_popup_window_pane_g1

0x39f4,	// (0x00014867) bg_popup_window_pane_g2_ParamLimits

0x39f4,	// (0x00014867) bg_popup_window_pane_g2

0x3a00,	// (0x00014873) bg_popup_window_pane_g3_ParamLimits

0x3a00,	// (0x00014873) bg_popup_window_pane_g3

0x3a0c,	// (0x0001487f) bg_popup_window_pane_g4_ParamLimits

0x3a0c,	// (0x0001487f) bg_popup_window_pane_g4

0x3a18,	// (0x0001488b) bg_popup_window_pane_g5_ParamLimits

0x3a18,	// (0x0001488b) bg_popup_window_pane_g5

0x3a24,	// (0x00014897) bg_popup_window_pane_g6_ParamLimits

0x3a24,	// (0x00014897) bg_popup_window_pane_g6

0x3a30,	// (0x000148a3) bg_popup_window_pane_g7_ParamLimits

0x3a30,	// (0x000148a3) bg_popup_window_pane_g7

0x3a3c,	// (0x000148af) bg_popup_window_pane_g8_ParamLimits

0x3a3c,	// (0x000148af) bg_popup_window_pane_g8

0x3a48,	// (0x000148bb) bg_popup_window_pane_g9_ParamLimits

0x3a48,	// (0x000148bb) bg_popup_window_pane_g9

0x3a54,	// (0x000148c7) bg_popup_window_pane_g10_ParamLimits

0x3a54,	// (0x000148c7) bg_popup_window_pane_g10

0x0009,

0xf8d4,	// (0x00020747) bg_popup_window_pane_g_ParamLimits

0xf8d4,	// (0x00020747) bg_popup_window_pane_g

0x397d,	// (0x000147f0) bg_popup_heading_pane_ParamLimits

0x397d,	// (0x000147f0) bg_popup_heading_pane

0xe3f8,	// (0x0001f26b) tabs_4_passive_pane_cp_srt_ParamLimits

0xe3f8,	// (0x0001f26b) tabs_4_passive_pane_cp_srt

0xe40a,	// (0x0001f27d) tabs_4_passive_pane_srt_ParamLimits

0x3991,	// (0x00014804) heading_pane_g2

0xe40a,	// (0x0001f27d) tabs_4_passive_pane_srt

0x266a,	// (0x000134dd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x266a,	// (0x000134dd) bg_passive_tab_pane_cp3_srt

0x3999,	// (0x0001480c) heading_pane_t1_ParamLimits

0x3999,	// (0x0001480c) heading_pane_t1

0x39b0,	// (0x00014823) heading_pane_t2_ParamLimits

0x39b0,	// (0x00014823) heading_pane_t2

0x0001,

0xf8cf,	// (0x00020742) heading_pane_t_ParamLimits

0xf8cf,	// (0x00020742) heading_pane_t

0x34aa,	// (0x0001431d) bg_popup_heading_pane_g1

0x3559,	// (0x000143cc) bg_popup_heading_pane_g2

0x3563,	// (0x000143d6) bg_popup_heading_pane_g3

0x356d,	// (0x000143e0) bg_popup_heading_pane_g4

0x3577,	// (0x000143ea) bg_popup_heading_pane_g5

0x3581,	// (0x000143f4) bg_popup_heading_pane_g6

0x3589,	// (0x000143fc) bg_popup_heading_pane_g7

0x3591,	// (0x00014404) bg_popup_heading_pane_g8

0x359b,	// (0x0001440e) bg_popup_heading_pane_g9

0x0008,

0xf88b,	// (0x000206fe) bg_popup_heading_pane_g

0x2b86,	// (0x000139f9) bg_popup_sub_pane_g1

0x2b96,	// (0x00013a09) bg_popup_sub_pane_g2

0x2b8e,	// (0x00013a01) bg_popup_sub_pane_g3

0x2ba6,	// (0x00013a19) bg_popup_sub_pane_g4

0x2b9e,	// (0x00013a11) bg_popup_sub_pane_g5

0x2bae,	// (0x00013a21) bg_popup_sub_pane_g6

0x2bb6,	// (0x00013a29) bg_popup_sub_pane_g7

0x2bc6,	// (0x00013a39) bg_popup_sub_pane_g8

0x2bbe,	// (0x00013a31) bg_popup_sub_pane_g9

0x0008,

0xf865,	// (0x000206d8) bg_popup_sub_pane_g

0x09c9,	// (0x0001183c) bg_popup_window_pane_cp5_ParamLimits

0x09c9,	// (0x0001183c) bg_popup_window_pane_cp5

0x09e5,	// (0x00011858) popup_note_window_g1_ParamLimits

0x09e5,	// (0x00011858) popup_note_window_g1

0x09f1,	// (0x00011864) popup_note_window_t1_ParamLimits

0x09f1,	// (0x00011864) popup_note_window_t1

0x0a03,	// (0x00011876) popup_note_window_t2_ParamLimits

0x0a03,	// (0x00011876) popup_note_window_t2

0x0a15,	// (0x00011888) popup_note_window_t3_ParamLimits

0x0a15,	// (0x00011888) popup_note_window_t3

0x0a27,	// (0x0001189a) popup_note_window_t4_ParamLimits

0x0a27,	// (0x0001189a) popup_note_window_t4

0x0a4f,	// (0x000118c2) popup_note_window_t5_ParamLimits

0x0a4f,	// (0x000118c2) popup_note_window_t5

0x0004,

0xf585,	// (0x000203f8) popup_note_window_t_ParamLimits

0xf585,	// (0x000203f8) popup_note_window_t

0x0a73,	// (0x000118e6) bg_popup_window_pane_cp6_ParamLimits

0x0a73,	// (0x000118e6) bg_popup_window_pane_cp6

0x341e,	// (0x00014291) popup_note_image_window_g1_ParamLimits

0x341e,	// (0x00014291) popup_note_image_window_g1

0x342a,	// (0x0001429d) popup_note_image_window_g2_ParamLimits

0x342a,	// (0x0001429d) popup_note_image_window_g2

0x0001,

0xf859,	// (0x000206cc) popup_note_image_window_g_ParamLimits

0xf859,	// (0x000206cc) popup_note_image_window_g

0x3443,	// (0x000142b6) popup_note_image_window_t1_ParamLimits

0x3443,	// (0x000142b6) popup_note_image_window_t1

0x345c,	// (0x000142cf) popup_note_image_window_t2_ParamLimits

0x345c,	// (0x000142cf) popup_note_image_window_t2

0x3475,	// (0x000142e8) popup_note_image_window_t3_ParamLimits

0x3475,	// (0x000142e8) popup_note_image_window_t3

0x0002,

0xf85e,	// (0x000206d1) popup_note_image_window_t_ParamLimits

0xf85e,	// (0x000206d1) popup_note_image_window_t

0x32df,	// (0x00014152) bg_popup_window_pane_cp7_ParamLimits

0x32df,	// (0x00014152) bg_popup_window_pane_cp7

0x330f,	// (0x00014182) popup_note_wait_window_g1_ParamLimits

0x330f,	// (0x00014182) popup_note_wait_window_g1

0x331b,	// (0x0001418e) popup_note_wait_window_g2_ParamLimits

0x331b,	// (0x0001418e) popup_note_wait_window_g2

0x0002,

0xf847,	// (0x000206ba) popup_note_wait_window_g_ParamLimits

0xf847,	// (0x000206ba) popup_note_wait_window_g

0x3333,	// (0x000141a6) popup_note_wait_window_t1_ParamLimits

0x3333,	// (0x000141a6) popup_note_wait_window_t1

0x335a,	// (0x000141cd) popup_note_wait_window_t2_ParamLimits

0x335a,	// (0x000141cd) popup_note_wait_window_t2

0x3377,	// (0x000141ea) popup_note_wait_window_t3_ParamLimits

0x3377,	// (0x000141ea) popup_note_wait_window_t3

0x338a,	// (0x000141fd) popup_note_wait_window_t4_ParamLimits

0x338a,	// (0x000141fd) popup_note_wait_window_t4

0x0004,

0xf84e,	// (0x000206c1) popup_note_wait_window_t_ParamLimits

0xf84e,	// (0x000206c1) popup_note_wait_window_t

0x33af,	// (0x00014222) wait_bar_pane_ParamLimits

0x33af,	// (0x00014222) wait_bar_pane

0x0654,	// (0x000114c7) wait_anim_pane

0x0654,	// (0x000114c7) wait_border_pane

0x064a,	// (0x000114bd) wait_anim_pane_g1

0x064a,	// (0x000114bd) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002057c) wait_anim_pane_g

0x3283,	// (0x000140f6) wait_border_pane_g1

0x328e,	// (0x00014101) wait_border_pane_g2

0x3297,	// (0x0001410a) wait_border_pane_g3

0x0002,

0xf840,	// (0x000206b3) wait_border_pane_g

0x30f3,	// (0x00013f66) bg_popup_window_pane_cp16_ParamLimits

0x30f3,	// (0x00013f66) bg_popup_window_pane_cp16

0x31f3,	// (0x00014066) indicator_popup_pane_cp4_ParamLimits

0x31f3,	// (0x00014066) indicator_popup_pane_cp4

0x3207,	// (0x0001407a) popup_query_data_window_t1_ParamLimits

0x3207,	// (0x0001407a) popup_query_data_window_t1

0x3219,	// (0x0001408c) popup_query_data_window_t2_ParamLimits

0x3219,	// (0x0001408c) popup_query_data_window_t2

0x3232,	// (0x000140a5) popup_query_data_window_t3_ParamLimits

0x3232,	// (0x000140a5) popup_query_data_window_t3

0x0002,

0xf839,	// (0x000206ac) popup_query_data_window_t_ParamLimits

0xf839,	// (0x000206ac) popup_query_data_window_t

0x324c,	// (0x000140bf) query_popup_data_pane_ParamLimits

0x324c,	// (0x000140bf) query_popup_data_pane

0x3260,	// (0x000140d3) query_popup_data_pane_cp1_ParamLimits

0x3260,	// (0x000140d3) query_popup_data_pane_cp1

0x30f3,	// (0x00013f66) bg_popup_window_pane_cp10_ParamLimits

0x30f3,	// (0x00013f66) bg_popup_window_pane_cp10

0x3125,	// (0x00013f98) indicator_popup_pane_ParamLimits

0x3125,	// (0x00013f98) indicator_popup_pane

0x3147,	// (0x00013fba) popup_query_code_window_t1_ParamLimits

0x3147,	// (0x00013fba) popup_query_code_window_t1

0x3161,	// (0x00013fd4) popup_query_code_window_t2_ParamLimits

0x3161,	// (0x00013fd4) popup_query_code_window_t2

0x31aa,	// (0x0001401d) popup_query_code_window_t3_ParamLimits

0x31aa,	// (0x0001401d) popup_query_code_window_t3

0x0002,

0xf832,	// (0x000206a5) popup_query_code_window_t_ParamLimits

0xf832,	// (0x000206a5) popup_query_code_window_t

0x31d9,	// (0x0001404c) query_popup_pane_ParamLimits

0x31d9,	// (0x0001404c) query_popup_pane

0x0a73,	// (0x000118e6) bg_popup_window_pane_cp15_ParamLimits

0x0a73,	// (0x000118e6) bg_popup_window_pane_cp15

0x0a91,	// (0x00011904) indicator_popup_pane_cp1_ParamLimits

0x0a91,	// (0x00011904) indicator_popup_pane_cp1

0x0aa4,	// (0x00011917) indicator_popup_pane_cp2_ParamLimits

0x0aa4,	// (0x00011917) indicator_popup_pane_cp2

0x0ab7,	// (0x0001192a) popup_query_data_code_window_g1_ParamLimits

0x0ab7,	// (0x0001192a) popup_query_data_code_window_g1

0x0aca,	// (0x0001193d) popup_query_data_code_window_t1_ParamLimits

0x0aca,	// (0x0001193d) popup_query_data_code_window_t1

0x0adc,	// (0x0001194f) popup_query_data_code_window_t2_ParamLimits

0x0adc,	// (0x0001194f) popup_query_data_code_window_t2

0x0aee,	// (0x00011961) popup_query_data_code_window_t3_ParamLimits

0x0aee,	// (0x00011961) popup_query_data_code_window_t3

0x0b04,	// (0x00011977) popup_query_data_code_window_t4_ParamLimits

0x0b04,	// (0x00011977) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00020403) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00020403) popup_query_data_code_window_t

0x2162,	// (0x00012fd5) list_single_midp_graphic_pane_g3

0x0b1c,	// (0x0001198f) query_popup_data_pane_cp2_ParamLimits

0x0b2f,	// (0x000119a2) query_popup_pane_cp2_ParamLimits

0x0b2f,	// (0x000119a2) query_popup_pane_cp2

0x0654,	// (0x000114c7) bg_popup_window_pane_cp11

0x30eb,	// (0x00013f5e) heading_pane_cp5

0x0c17,	// (0x00011a8a) listscroll_popup_info_pane

0x0654,	// (0x000114c7) input_focus_pane_cp3

0x0b42,	// (0x000119b5) query_popup_pane_t1

0x0b50,	// (0x000119c3) list_popup_info_pane_ParamLimits

0x0b50,	// (0x000119c3) list_popup_info_pane

0x0b5f,	// (0x000119d2) listscroll_popup_info_pane_g1

0x0b67,	// (0x000119da) scroll_pane_cp7

0x0b71,	// (0x000119e4) popup_info_list_pane_t1_ParamLimits

0x0b71,	// (0x000119e4) popup_info_list_pane_t1

0x0b8b,	// (0x000119fe) popup_info_list_pane_t2_ParamLimits

0x0b8b,	// (0x000119fe) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002040c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002040c) popup_info_list_pane_t

0x0654,	// (0x000114c7) bg_popup_window_pane_cp12

0x4569,	// (0x000153dc) find_popup_pane

0x0734,	// (0x000115a7) bg_popup_window_pane_cp3

0x0ba5,	// (0x00011a18) heading_pane_cp3

0x0bb1,	// (0x00011a24) listscroll_popup_graphic_pane

0x0654,	// (0x000114c7) bg_popup_window_pane_cp4

0x0c0d,	// (0x00011a80) heading_pane_cp4

0x0c17,	// (0x00011a8a) listscroll_popup_colour_pane

0x0c1f,	// (0x00011a92) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0c1f,	// (0x00011a92) cell_large_graphic_colour_none_popup_pane

0x0c33,	// (0x00011aa6) grid_large_graphic_colour_popup_pane_ParamLimits

0x0c33,	// (0x00011aa6) grid_large_graphic_colour_popup_pane

0x0c5b,	// (0x00011ace) listscroll_popup_colour_pane_g1_ParamLimits

0x0c5b,	// (0x00011ace) listscroll_popup_colour_pane_g1

0x0c72,	// (0x00011ae5) listscroll_popup_colour_pane_g2_ParamLimits

0x0c72,	// (0x00011ae5) listscroll_popup_colour_pane_g2

0x0c89,	// (0x00011afc) listscroll_popup_colour_pane_g3_ParamLimits

0x0c89,	// (0x00011afc) listscroll_popup_colour_pane_g3

0x0c99,	// (0x00011b0c) listscroll_popup_colour_pane_g4_ParamLimits

0x0c99,	// (0x00011b0c) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00020411) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00020411) listscroll_popup_colour_pane_g

0x0ca8,	// (0x00011b1b) scroll_pane_cp6_ParamLimits

0x0ca8,	// (0x00011b1b) scroll_pane_cp6

0x0cba,	// (0x00011b2d) cell_large_graphic_colour_popup_pane_ParamLimits

0x0cba,	// (0x00011b2d) cell_large_graphic_colour_popup_pane

0x0cd9,	// (0x00011b4c) cell_large_graphic_colour_none_popup_pane_t1

0x0654,	// (0x000114c7) grid_highlight_pane_cp5

0x0ce8,	// (0x00011b5b) cell_large_graphic_colour_popup_pane_g1

0x0cf0,	// (0x00011b63) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002041a) cell_large_graphic_colour_popup_pane_g

0x0cf8,	// (0x00011b6b) cell_large_graphic_colour_popup_pane_g2_copy1

0x0d01,	// (0x00011b74) grid_highlight_pane_cp4

0x0d09,	// (0x00011b7c) bg_popup_window_pane_cp8_ParamLimits

0x0d09,	// (0x00011b7c) bg_popup_window_pane_cp8

0x0d24,	// (0x00011b97) popup_snote_single_text_window_g1_ParamLimits

0x0d24,	// (0x00011b97) popup_snote_single_text_window_g1

0x0d36,	// (0x00011ba9) popup_snote_single_text_window_t1_ParamLimits

0x0d36,	// (0x00011ba9) popup_snote_single_text_window_t1

0x0d49,	// (0x00011bbc) popup_snote_single_text_window_t2_ParamLimits

0x0d49,	// (0x00011bbc) popup_snote_single_text_window_t2

0x0d5c,	// (0x00011bcf) popup_snote_single_text_window_t3_ParamLimits

0x0d5c,	// (0x00011bcf) popup_snote_single_text_window_t3

0x0d95,	// (0x00011c08) popup_snote_single_text_window_t4_ParamLimits

0x0d95,	// (0x00011c08) popup_snote_single_text_window_t4

0x0dc9,	// (0x00011c3c) popup_snote_single_text_window_t5_ParamLimits

0x0dc9,	// (0x00011c3c) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002041f) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002041f) popup_snote_single_text_window_t

0x0df8,	// (0x00011c6b) bg_popup_window_pane_cp9_ParamLimits

0x0df8,	// (0x00011c6b) bg_popup_window_pane_cp9

0x0d24,	// (0x00011b97) popup_snote_single_graphic_window_g1_ParamLimits

0x0d24,	// (0x00011b97) popup_snote_single_graphic_window_g1

0x0e06,	// (0x00011c79) popup_snote_single_graphic_window_g2_ParamLimits

0x0e06,	// (0x00011c79) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002042a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002042a) popup_snote_single_graphic_window_g

0x0e12,	// (0x00011c85) popup_snote_single_graphic_window_t1_ParamLimits

0x0e12,	// (0x00011c85) popup_snote_single_graphic_window_t1

0x0e25,	// (0x00011c98) popup_snote_single_graphic_window_t2_ParamLimits

0x0e25,	// (0x00011c98) popup_snote_single_graphic_window_t2

0x0e38,	// (0x00011cab) popup_snote_single_graphic_window_t3_ParamLimits

0x0e38,	// (0x00011cab) popup_snote_single_graphic_window_t3

0x0e71,	// (0x00011ce4) popup_snote_single_graphic_window_t4_ParamLimits

0x0e71,	// (0x00011ce4) popup_snote_single_graphic_window_t4

0x0ea5,	// (0x00011d18) popup_snote_single_graphic_window_t5_ParamLimits

0x0ea5,	// (0x00011d18) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002042f) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002042f) popup_snote_single_graphic_window_t

0x446b,	// (0x000152de) grid_graphic_popup_pane_ParamLimits

0x446b,	// (0x000152de) grid_graphic_popup_pane

0x4493,	// (0x00015306) listscroll_popup_graphic_pane_g1_ParamLimits

0x4493,	// (0x00015306) listscroll_popup_graphic_pane_g1

0x44a7,	// (0x0001531a) listscroll_popup_graphic_pane_g2_ParamLimits

0x44a7,	// (0x0001531a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9af,	// (0x00020822) listscroll_popup_graphic_pane_g_ParamLimits

0xf9af,	// (0x00020822) listscroll_popup_graphic_pane_g

0x44bb,	// (0x0001532e) scroll_pane_cp5

0x4416,	// (0x00015289) cell_graphic_popup_pane_ParamLimits

0x4416,	// (0x00015289) cell_graphic_popup_pane

0x43f7,	// (0x0001526a) cell_graphic_popup_pane_g1

0x43ff,	// (0x00015272) cell_graphic_popup_pane_g2

0x0cf8,	// (0x00011b6b) cell_graphic_popup_pane_g3

0x0002,

0xf9a8,	// (0x0002081b) cell_graphic_popup_pane_g

0x4408,	// (0x0001527b) cell_graphic_popup_pane_t2

0x0d01,	// (0x00011b74) grid_highlight_pane_cp3

0x0ee6,	// (0x00011d59) list_gen_pane_ParamLimits

0x0ee6,	// (0x00011d59) list_gen_pane

0x0f18,	// (0x00011d8b) scroll_pane

0x4359,	// (0x000151cc) bg_list_pane_g1_ParamLimits

0x4359,	// (0x000151cc) bg_list_pane_g1

0x4374,	// (0x000151e7) bg_list_pane_g2_ParamLimits

0x4374,	// (0x000151e7) bg_list_pane_g2

0x4387,	// (0x000151fa) bg_list_pane_g3_ParamLimits

0x4387,	// (0x000151fa) bg_list_pane_g3

0x4399,	// (0x0001520c) bg_list_pane_g4_ParamLimits

0x4399,	// (0x0001520c) bg_list_pane_g4

0x43ab,	// (0x0001521e) bg_list_pane_g5_ParamLimits

0x43ab,	// (0x0001521e) bg_list_pane_g5

0x0004,

0xf99d,	// (0x00020810) bg_list_pane_g_ParamLimits

0xf99d,	// (0x00020810) bg_list_pane_g

0xc956,	// (0x0001d7c9) list_double2_graphic_large_graphic_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double2_graphic_large_graphic_pane

0xc956,	// (0x0001d7c9) list_double2_graphic_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double2_graphic_pane

0xc956,	// (0x0001d7c9) list_double2_large_graphic_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double2_large_graphic_pane

0xc956,	// (0x0001d7c9) list_double2_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double2_pane

0xc956,	// (0x0001d7c9) list_double_graphic_heading_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double_graphic_heading_pane

0xc956,	// (0x0001d7c9) list_double_graphic_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double_graphic_pane

0xc956,	// (0x0001d7c9) list_double_heading_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double_heading_pane

0xc956,	// (0x0001d7c9) list_double_large_graphic_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double_large_graphic_pane

0xc956,	// (0x0001d7c9) list_double_number_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double_number_pane

0xc956,	// (0x0001d7c9) list_double_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double_pane

0xc956,	// (0x0001d7c9) list_double_time_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_double_time_pane

0xc956,	// (0x0001d7c9) list_setting_number_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_setting_number_pane

0xc956,	// (0x0001d7c9) list_setting_pane_ParamLimits

0xc956,	// (0x0001d7c9) list_setting_pane

0xc998,	// (0x0001d80b) list_single_2graphic_pane_ParamLimits

0xc998,	// (0x0001d80b) list_single_2graphic_pane

0xc998,	// (0x0001d80b) list_single_graphic_heading_pane_ParamLimits

0xc998,	// (0x0001d80b) list_single_graphic_heading_pane

0xc998,	// (0x0001d80b) list_single_graphic_pane_ParamLimits

0xc998,	// (0x0001d80b) list_single_graphic_pane

0xc998,	// (0x0001d80b) list_single_heading_pane_ParamLimits

0xc998,	// (0x0001d80b) list_single_heading_pane

0xca21,	// (0x0001d894) list_single_large_graphic_pane_ParamLimits

0xca21,	// (0x0001d894) list_single_large_graphic_pane

0xc998,	// (0x0001d80b) list_single_number_heading_pane_ParamLimits

0xc998,	// (0x0001d80b) list_single_number_heading_pane

0xc998,	// (0x0001d80b) list_single_number_pane_ParamLimits

0xc998,	// (0x0001d80b) list_single_number_pane

0xc998,	// (0x0001d80b) list_single_pane_ParamLimits

0xc998,	// (0x0001d80b) list_single_pane

0x0654,	// (0x000114c7) list_highlight_pane_cp1

0xc018,	// (0x0001ce8b) list_single_pane_g1_ParamLimits

0xc018,	// (0x0001ce8b) list_single_pane_g1

0xc024,	// (0x0001ce97) list_single_pane_g2_ParamLimits

0xc024,	// (0x0001ce97) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00020441) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00020441) list_single_pane_g

0xc940,	// (0x0001d7b3) list_single_pane_t1_ParamLimits

0xc940,	// (0x0001d7b3) list_single_pane_t1

0xc018,	// (0x0001ce8b) list_single_number_pane_g1_ParamLimits

0xc018,	// (0x0001ce8b) list_single_number_pane_g1

0xc024,	// (0x0001ce97) list_single_number_pane_g2_ParamLimits

0xc024,	// (0x0001ce97) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00020441) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00020441) list_single_number_pane_g

0xc8ea,	// (0x0001d75d) list_single_number_pane_t1_ParamLimits

0xc8ea,	// (0x0001d75d) list_single_number_pane_t1

0xc900,	// (0x0001d773) list_single_number_pane_t2_ParamLimits

0xc900,	// (0x0001d773) list_single_number_pane_t2

0x0001,

0xf95e,	// (0x000207d1) list_single_number_pane_t_ParamLimits

0xf95e,	// (0x000207d1) list_single_number_pane_t

0xc00c,	// (0x0001ce7f) list_single_graphic_pane_g1_ParamLimits

0xc00c,	// (0x0001ce7f) list_single_graphic_pane_g1

0xc018,	// (0x0001ce8b) list_single_graphic_pane_g2_ParamLimits

0xc018,	// (0x0001ce8b) list_single_graphic_pane_g2

0xc024,	// (0x0001ce97) list_single_graphic_pane_g3_ParamLimits

0xc024,	// (0x0001ce97) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002043a) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002043a) list_single_graphic_pane_g

0xc030,	// (0x0001cea3) list_single_graphic_pane_t1_ParamLimits

0xc030,	// (0x0001cea3) list_single_graphic_pane_t1

0xc018,	// (0x0001ce8b) list_single_heading_pane_g1_ParamLimits

0xc018,	// (0x0001ce8b) list_single_heading_pane_g1

0xc024,	// (0x0001ce97) list_single_heading_pane_g2_ParamLimits

0xc024,	// (0x0001ce97) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00020441) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00020441) list_single_heading_pane_g

0xc046,	// (0x0001ceb9) list_single_heading_pane_t1_ParamLimits

0xc046,	// (0x0001ceb9) list_single_heading_pane_t1

0xc05c,	// (0x0001cecf) list_single_heading_pane_t2_ParamLimits

0xc05c,	// (0x0001cecf) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00020446) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00020446) list_single_heading_pane_t

0xc018,	// (0x0001ce8b) list_single_number_heading_pane_g1_ParamLimits

0xc018,	// (0x0001ce8b) list_single_number_heading_pane_g1

0xc024,	// (0x0001ce97) list_single_number_heading_pane_g2_ParamLimits

0xc024,	// (0x0001ce97) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00020441) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00020441) list_single_number_heading_pane_g

0xc046,	// (0x0001ceb9) list_single_number_heading_pane_t1_ParamLimits

0xc046,	// (0x0001ceb9) list_single_number_heading_pane_t1

0xc06e,	// (0x0001cee1) list_single_number_heading_pane_t2_ParamLimits

0xc06e,	// (0x0001cee1) list_single_number_heading_pane_t2

0xc080,	// (0x0001cef3) list_single_number_heading_pane_t3_ParamLimits

0xc080,	// (0x0001cef3) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002044b) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002044b) list_single_number_heading_pane_t

0xc092,	// (0x0001cf05) list_single_graphic_heading_pane_g1_ParamLimits

0xc092,	// (0x0001cf05) list_single_graphic_heading_pane_g1

0xc09e,	// (0x0001cf11) list_single_graphic_heading_pane_g4_ParamLimits

0xc09e,	// (0x0001cf11) list_single_graphic_heading_pane_g4

0xc024,	// (0x0001ce97) list_single_graphic_heading_pane_g5_ParamLimits

0xc024,	// (0x0001ce97) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00020452) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00020452) list_single_graphic_heading_pane_g

0xc046,	// (0x0001ceb9) list_single_graphic_heading_pane_t1_ParamLimits

0xc046,	// (0x0001ceb9) list_single_graphic_heading_pane_t1

0xc0af,	// (0x0001cf22) list_single_graphic_heading_pane_t2_ParamLimits

0xc0af,	// (0x0001cf22) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00020459) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00020459) list_single_graphic_heading_pane_t

0xc0c1,	// (0x0001cf34) list_single_large_graphic_pane_g1_ParamLimits

0xc0c1,	// (0x0001cf34) list_single_large_graphic_pane_g1

0xc0cd,	// (0x0001cf40) list_single_large_graphic_pane_g2_ParamLimits

0xc0cd,	// (0x0001cf40) list_single_large_graphic_pane_g2

0xc0d9,	// (0x0001cf4c) list_single_large_graphic_pane_g3_ParamLimits

0xc0d9,	// (0x0001cf4c) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002045e) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002045e) list_single_large_graphic_pane_g

0x328e,	// (0x00014101) wait_border_pane_g2_copy1

0xc0e5,	// (0x0001cf58) list_single_large_graphic_pane_g4_cp2

0xc0ed,	// (0x0001cf60) list_single_large_graphic_pane_t1_ParamLimits

0xc0ed,	// (0x0001cf60) list_single_large_graphic_pane_t1

0xc103,	// (0x0001cf76) list_double_pane_g1_ParamLimits

0xc103,	// (0x0001cf76) list_double_pane_g1

0xc10f,	// (0x0001cf82) list_double_pane_g2_ParamLimits

0xc10f,	// (0x0001cf82) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00020465) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00020465) list_double_pane_g

0xc11b,	// (0x0001cf8e) list_double_pane_t1_ParamLimits

0xc11b,	// (0x0001cf8e) list_double_pane_t1

0xc131,	// (0x0001cfa4) list_double_pane_t2_ParamLimits

0xc131,	// (0x0001cfa4) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002046a) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002046a) list_double_pane_t

0xc143,	// (0x0001cfb6) list_double2_pane_g1_ParamLimits

0xc143,	// (0x0001cfb6) list_double2_pane_g1

0xc154,	// (0x0001cfc7) list_double2_pane_g2_ParamLimits

0xc154,	// (0x0001cfc7) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002046f) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002046f) list_double2_pane_g

0xc160,	// (0x0001cfd3) list_double2_pane_t1_ParamLimits

0xc160,	// (0x0001cfd3) list_double2_pane_t1

0xc176,	// (0x0001cfe9) list_double2_pane_t2_ParamLimits

0xc176,	// (0x0001cfe9) list_double2_pane_t2

0x0001,

0xf601,	// (0x00020474) list_double2_pane_t_ParamLimits

0xf601,	// (0x00020474) list_double2_pane_t

0xc103,	// (0x0001cf76) list_double_number_pane_g1_ParamLimits

0xc103,	// (0x0001cf76) list_double_number_pane_g1

0xc10f,	// (0x0001cf82) list_double_number_pane_g2_ParamLimits

0xc10f,	// (0x0001cf82) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00020465) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00020465) list_double_number_pane_g

0xc188,	// (0x0001cffb) list_double_number_pane_t1_ParamLimits

0xc188,	// (0x0001cffb) list_double_number_pane_t1

0xc19a,	// (0x0001d00d) list_double_number_pane_t2_ParamLimits

0xc19a,	// (0x0001d00d) list_double_number_pane_t2

0xc1b0,	// (0x0001d023) list_double_number_pane_t3_ParamLimits

0xc1b0,	// (0x0001d023) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00020479) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00020479) list_double_number_pane_t

0xc1c2,	// (0x0001d035) list_double_graphic_pane_g1_ParamLimits

0xc1c2,	// (0x0001d035) list_double_graphic_pane_g1

0xc1ce,	// (0x0001d041) list_double_graphic_pane_g2_ParamLimits

0xc1ce,	// (0x0001d041) list_double_graphic_pane_g2

0xc1dd,	// (0x0001d050) list_double_graphic_pane_g3_ParamLimits

0xc1dd,	// (0x0001d050) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00020480) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00020480) list_double_graphic_pane_g

0xc1f5,	// (0x0001d068) list_double_graphic_pane_t1_ParamLimits

0xc1f5,	// (0x0001d068) list_double_graphic_pane_t1

0xc20b,	// (0x0001d07e) list_double_graphic_pane_t2_ParamLimits

0xc20b,	// (0x0001d07e) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00020489) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00020489) list_double_graphic_pane_t

0xc21d,	// (0x0001d090) list_double2_graphic_pane_g1_ParamLimits

0xc21d,	// (0x0001d090) list_double2_graphic_pane_g1

0xc103,	// (0x0001cf76) list_double2_graphic_pane_g2_ParamLimits

0xc103,	// (0x0001cf76) list_double2_graphic_pane_g2

0xc10f,	// (0x0001cf82) list_double2_graphic_pane_g3_ParamLimits

0xc10f,	// (0x0001cf82) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002048e) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002048e) list_double2_graphic_pane_g

0xc229,	// (0x0001d09c) list_double2_graphic_pane_t1_ParamLimits

0xc229,	// (0x0001d09c) list_double2_graphic_pane_t1

0xc23f,	// (0x0001d0b2) list_double2_graphic_pane_t2_ParamLimits

0xc23f,	// (0x0001d0b2) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00020495) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00020495) list_double2_graphic_pane_t

0xc251,	// (0x0001d0c4) list_double_large_graphic_pane_g1_ParamLimits

0xc251,	// (0x0001d0c4) list_double_large_graphic_pane_g1

0xc270,	// (0x0001d0e3) list_double_large_graphic_pane_g2_ParamLimits

0xc270,	// (0x0001d0e3) list_double_large_graphic_pane_g2

0xc10f,	// (0x0001cf82) list_double_large_graphic_pane_g3_ParamLimits

0xc10f,	// (0x0001cf82) list_double_large_graphic_pane_g3

0xc281,	// (0x0001d0f4) list_double_large_graphic_pane_g4_ParamLimits

0xc281,	// (0x0001d0f4) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002049a) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002049a) list_double_large_graphic_pane_g

0xc2a9,	// (0x0001d11c) list_double_large_graphic_pane_t1_ParamLimits

0xc2a9,	// (0x0001d11c) list_double_large_graphic_pane_t1

0xc2c2,	// (0x0001d135) list_double_large_graphic_pane_t2_ParamLimits

0xc2c2,	// (0x0001d135) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x000204a5) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x000204a5) list_double_large_graphic_pane_t

0xc2d4,	// (0x0001d147) list_double2_large_graphic_pane_g1_ParamLimits

0xc2d4,	// (0x0001d147) list_double2_large_graphic_pane_g1

0xc143,	// (0x0001cfb6) list_double2_large_graphic_pane_g2_ParamLimits

0xc143,	// (0x0001cfb6) list_double2_large_graphic_pane_g2

0xc154,	// (0x0001cfc7) list_double2_large_graphic_pane_g3_ParamLimits

0xc154,	// (0x0001cfc7) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x000204aa) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x000204aa) list_double2_large_graphic_pane_g

0xc2e0,	// (0x0001d153) list_double2_large_graphic_pane_t1_ParamLimits

0xc2e0,	// (0x0001d153) list_double2_large_graphic_pane_t1

0xc2f6,	// (0x0001d169) list_double2_large_graphic_pane_t2_ParamLimits

0xc2f6,	// (0x0001d169) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x000204b1) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x000204b1) list_double2_large_graphic_pane_t

0xc308,	// (0x0001d17b) list_double_heading_pane_g1_ParamLimits

0xc308,	// (0x0001d17b) list_double_heading_pane_g1

0xc319,	// (0x0001d18c) list_double_heading_pane_g2_ParamLimits

0xc319,	// (0x0001d18c) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x000204b6) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x000204b6) list_double_heading_pane_g

0xc325,	// (0x0001d198) list_double_heading_pane_t1_ParamLimits

0xc325,	// (0x0001d198) list_double_heading_pane_t1

0xc176,	// (0x0001cfe9) list_double_heading_pane_t2_ParamLimits

0xc176,	// (0x0001cfe9) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x000204bb) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x000204bb) list_double_heading_pane_t

0xc21d,	// (0x0001d090) list_double_graphic_heading_pane_g1_ParamLimits

0xc21d,	// (0x0001d090) list_double_graphic_heading_pane_g1

0xc308,	// (0x0001d17b) list_double_graphic_heading_pane_g2_ParamLimits

0xc308,	// (0x0001d17b) list_double_graphic_heading_pane_g2

0xc319,	// (0x0001d18c) list_double_graphic_heading_pane_g3_ParamLimits

0xc319,	// (0x0001d18c) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x000204c0) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x000204c0) list_double_graphic_heading_pane_g

0xc33b,	// (0x0001d1ae) list_double_graphic_heading_pane_t1_ParamLimits

0xc33b,	// (0x0001d1ae) list_double_graphic_heading_pane_t1

0xc23f,	// (0x0001d0b2) list_double_graphic_heading_pane_t2_ParamLimits

0xc23f,	// (0x0001d0b2) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x000204c7) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x000204c7) list_double_graphic_heading_pane_t

0xc270,	// (0x0001d0e3) list_double_time_pane_g1_ParamLimits

0xc270,	// (0x0001d0e3) list_double_time_pane_g1

0xc10f,	// (0x0001cf82) list_double_time_pane_g2_ParamLimits

0xc10f,	// (0x0001cf82) list_double_time_pane_g2

0x0001,

0xf659,	// (0x000204cc) list_double_time_pane_g_ParamLimits

0xf659,	// (0x000204cc) list_double_time_pane_g

0xc351,	// (0x0001d1c4) list_double_time_pane_t1_ParamLimits

0xc351,	// (0x0001d1c4) list_double_time_pane_t1

0xc367,	// (0x0001d1da) list_double_time_pane_t2_ParamLimits

0xc367,	// (0x0001d1da) list_double_time_pane_t2

0xc379,	// (0x0001d1ec) list_double_time_pane_t3_ParamLimits

0xc379,	// (0x0001d1ec) list_double_time_pane_t3

0xc38b,	// (0x0001d1fe) list_double_time_pane_t4_ParamLimits

0xc38b,	// (0x0001d1fe) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x000204d1) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x000204d1) list_double_time_pane_t

0xc39d,	// (0x0001d210) list_setting_pane_g1_ParamLimits

0xc39d,	// (0x0001d210) list_setting_pane_g1

0xc319,	// (0x0001d18c) list_setting_pane_g2_ParamLimits

0xc319,	// (0x0001d18c) list_setting_pane_g2

0x0001,

0xf667,	// (0x000204da) list_setting_pane_g_ParamLimits

0xf667,	// (0x000204da) list_setting_pane_g

0xc3a9,	// (0x0001d21c) list_setting_pane_t1_ParamLimits

0xc3a9,	// (0x0001d21c) list_setting_pane_t1

0xc3c0,	// (0x0001d233) list_setting_pane_t2_ParamLimits

0xc3c0,	// (0x0001d233) list_setting_pane_t2

0x0002,

0xf66c,	// (0x000204df) list_setting_pane_t_ParamLimits

0xf66c,	// (0x000204df) list_setting_pane_t

0xc3fd,	// (0x0001d270) set_value_pane_cp_ParamLimits

0xc3fd,	// (0x0001d270) set_value_pane_cp

0xc409,	// (0x0001d27c) list_setting_number_pane_g1_ParamLimits

0xc409,	// (0x0001d27c) list_setting_number_pane_g1

0xc415,	// (0x0001d288) list_setting_number_pane_g2_ParamLimits

0xc415,	// (0x0001d288) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x000204e6) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x000204e6) list_setting_number_pane_g

0xc421,	// (0x0001d294) list_setting_number_pane_t1_ParamLimits

0xc421,	// (0x0001d294) list_setting_number_pane_t1

0xc435,	// (0x0001d2a8) list_setting_number_pane_t2_ParamLimits

0xc435,	// (0x0001d2a8) list_setting_number_pane_t2

0xc44c,	// (0x0001d2bf) list_setting_number_pane_t3_ParamLimits

0xc44c,	// (0x0001d2bf) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x000204eb) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x000204eb) list_setting_number_pane_t

0xc3fd,	// (0x0001d270) set_value_pane_ParamLimits

0xc3fd,	// (0x0001d270) set_value_pane

0x13c3,	// (0x00012236) bg_set_opt_pane_ParamLimits

0x13c3,	// (0x00012236) bg_set_opt_pane

0xc48f,	// (0x0001d302) set_value_pane_t1

0x13f2,	// (0x00012265) slider_set_pane_cp3

0x13fb,	// (0x0001226e) volume_small_pane_cp

0x1404,	// (0x00012277) list_form_gen_pane

0x140d,	// (0x00012280) scroll_pane_cp8

0xc4a5,	// (0x0001d318) form_field_data_pane_ParamLimits

0xc4a5,	// (0x0001d318) form_field_data_pane

0xc4c5,	// (0x0001d338) form_field_data_wide_pane_ParamLimits

0xc4c5,	// (0x0001d338) form_field_data_wide_pane

0xc4e6,	// (0x0001d359) form_field_popup_pane_ParamLimits

0xc4e6,	// (0x0001d359) form_field_popup_pane

0xc504,	// (0x0001d377) form_field_popup_wide_pane_ParamLimits

0xc504,	// (0x0001d377) form_field_popup_wide_pane

0xc521,	// (0x0001d394) form_field_slider_pane_ParamLimits

0xc521,	// (0x0001d394) form_field_slider_pane

0xc534,	// (0x0001d3a7) form_field_slider_wide_pane_ParamLimits

0xc534,	// (0x0001d3a7) form_field_slider_wide_pane

0x14c0,	// (0x00012333) data_form_pane

0xc551,	// (0x0001d3c4) form_field_data_pane_t1

0x14f0,	// (0x00012363) input_focus_pane

0xc56b,	// (0x0001d3de) data_form_wide_pane

0xc588,	// (0x0001d3fb) form_field_data_wide_pane_t1

0x0d16,	// (0x00011b89) input_focus_pane_cp6

0xc5aa,	// (0x0001d41d) form_field_popup_pane_t1

0x14f0,	// (0x00012363) input_focus_pane_cp7

0x1563,	// (0x000123d6) list_form_pane

0xc5cc,	// (0x0001d43f) form_field_popup_wide_pane_t1

0x14f0,	// (0x00012363) input_focus_pane_cp8

0x158c,	// (0x000123ff) list_form_wide_pane

0xc5e9,	// (0x0001d45c) form_field_slider_pane_t1_ParamLimits

0xc5e9,	// (0x0001d45c) form_field_slider_pane_t1

0xc5fd,	// (0x0001d470) form_field_slider_pane_t2_ParamLimits

0xc5fd,	// (0x0001d470) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x000204fb) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x000204fb) form_field_slider_pane_t

0x09c9,	// (0x0001183c) input_focus_pane_cp9_ParamLimits

0x09c9,	// (0x0001183c) input_focus_pane_cp9

0xc60f,	// (0x0001d482) slider_cont_pane_ParamLimits

0xc60f,	// (0x0001d482) slider_cont_pane

0x15dd,	// (0x00012450) form_field_slider_wide_pane_t1_ParamLimits

0x15dd,	// (0x00012450) form_field_slider_wide_pane_t1

0xc623,	// (0x0001d496) form_field_slider_wide_pane_t2_ParamLimits

0xc623,	// (0x0001d496) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00020500) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00020500) form_field_slider_wide_pane_t

0x09c9,	// (0x0001183c) input_focus_pane_cp10_ParamLimits

0x09c9,	// (0x0001183c) input_focus_pane_cp10

0xc635,	// (0x0001d4a8) slider_cont_pane_cp1_ParamLimits

0xc635,	// (0x0001d4a8) slider_cont_pane_cp1

0xc649,	// (0x0001d4bc) slider_form_pane_cp

0x161d,	// (0x00012490) input_focus_pane_g1

0x1625,	// (0x00012498) input_focus_pane_g2

0x162d,	// (0x000124a0) input_focus_pane_g3

0x1635,	// (0x000124a8) input_focus_pane_g4

0x163d,	// (0x000124b0) input_focus_pane_g5

0x1645,	// (0x000124b8) input_focus_pane_g6

0x164d,	// (0x000124c0) input_focus_pane_g7

0x1655,	// (0x000124c8) input_focus_pane_g8

0x165d,	// (0x000124d0) input_focus_pane_g9

0x064a,	// (0x000114bd) input_focus_pane_g10

0x0009,

0xf692,	// (0x00020505) input_focus_pane_g

0x3297,	// (0x0001410a) wait_border_pane_g3_copy1

0xc651,	// (0x0001d4c4) data_form_pane_t1

0x064a,	// (0x000114bd) wait_anim_pane_g1_copy1

0xc912,	// (0x0001d785) data_form_wide_pane_t1

0xc66c,	// (0x0001d4df) list_form_graphic_pane_cp_ParamLimits

0xc66c,	// (0x0001d4df) list_form_graphic_pane_cp

0x41c3,	// (0x00015036) slider_form_pane_g1

0x41cc,	// (0x0001503f) slider_form_pane_g2

0x0006,

0xf98e,	// (0x00020801) slider_form_pane_g

0xc66c,	// (0x0001d4df) list_form_graphic_pane_ParamLimits

0xc66c,	// (0x0001d4df) list_form_graphic_pane

0xc683,	// (0x0001d4f6) list_form_graphic_pane_g1

0xc68b,	// (0x0001d4fe) list_form_graphic_pane_t1_ParamLimits

0xc68b,	// (0x0001d4fe) list_form_graphic_pane_t1

0x0734,	// (0x000115a7) list_highlight_pane_cp5_ParamLimits

0x0734,	// (0x000115a7) list_highlight_pane_cp5

0xc6a0,	// (0x0001d513) find_pane_g1

0x16bd,	// (0x00012530) input_find_pane

0xc6a9,	// (0x0001d51c) input_find_pane_g1_ParamLimits

0xc6a9,	// (0x0001d51c) input_find_pane_g1

0xc6b5,	// (0x0001d528) input_find_pane_t1_ParamLimits

0xc6b5,	// (0x0001d528) input_find_pane_t1

0xc6ca,	// (0x0001d53d) input_find_pane_t2_ParamLimits

0xc6ca,	// (0x0001d53d) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002051a) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002051a) input_find_pane_t

0x16fc,	// (0x0001256f) input_focus_pane_cp5_ParamLimits

0x16fc,	// (0x0001256f) input_focus_pane_cp5

0x1716,	// (0x00012589) bg_popup_window_pane_cp2_ParamLimits

0x1716,	// (0x00012589) bg_popup_window_pane_cp2

0x1723,	// (0x00012596) listscroll_menu_pane_ParamLimits

0x1723,	// (0x00012596) listscroll_menu_pane

0x172f,	// (0x000125a2) popup_submenu_window_ParamLimits

0x172f,	// (0x000125a2) popup_submenu_window

0x1757,	// (0x000125ca) find_popup_pane_g1

0x175f,	// (0x000125d2) input_popup_find_pane_cp

0x16fc,	// (0x0001256f) input_focus_pane_cp4_ParamLimits

0x16fc,	// (0x0001256f) input_focus_pane_cp4

0x1777,	// (0x000125ea) input_popup_find_pane_t1_ParamLimits

0x1777,	// (0x000125ea) input_popup_find_pane_t1

0x0654,	// (0x000114c7) bg_popup_sub_pane_cp

0x17a5,	// (0x00012618) listscroll_popup_sub_pane

0x17ad,	// (0x00012620) list_submenu_pane_ParamLimits

0x17ad,	// (0x00012620) list_submenu_pane

0x17be,	// (0x00012631) scroll_pane_cp4

0x17c6,	// (0x00012639) list_single_popup_submenu_pane_ParamLimits

0x17c6,	// (0x00012639) list_single_popup_submenu_pane

0x17da,	// (0x0001264d) list_single_popup_submenu_pane_g1

0x17e2,	// (0x00012655) list_single_popup_submenu_pane_t1_ParamLimits

0x17e2,	// (0x00012655) list_single_popup_submenu_pane_t1

0x0734,	// (0x000115a7) bg_active_tab_pane_cp1_ParamLimits

0x0734,	// (0x000115a7) bg_active_tab_pane_cp1

0x17f7,	// (0x0001266a) tabs_2_active_pane_g1

0x17ff,	// (0x00012672) tabs_2_active_pane_t1

0x0734,	// (0x000115a7) bg_passive_tab_pane_cp1_ParamLimits

0x0734,	// (0x000115a7) bg_passive_tab_pane_cp1

0x17f7,	// (0x0001266a) tabs_2_passive_pane_g1

0x17ff,	// (0x00012672) tabs_2_passive_pane_t1

0x1811,	// (0x00012684) bg_active_tab_pane_cp4

0x181f,	// (0x00012692) tabs_2_long_active_pane_t1

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp4

0xe117,	// (0x0001ef8a) list_single_midp_graphic_pane_g4_ParamLimits

0x1811,	// (0x00012684) bg_active_tab_pane_cp5

0x183e,	// (0x000126b1) tabs_3_long_active_pane_t1

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp5

0xe117,	// (0x0001ef8a) list_single_midp_graphic_pane_g4

0x0734,	// (0x000115a7) bg_popup_window_pane_cp13_ParamLimits

0x0734,	// (0x000115a7) bg_popup_window_pane_cp13

0x1859,	// (0x000126cc) listscroll_popup_fast_pane_ParamLimits

0x1859,	// (0x000126cc) listscroll_popup_fast_pane

0x1865,	// (0x000126d8) grid_popup_fast_pane_ParamLimits

0x1865,	// (0x000126d8) grid_popup_fast_pane

0x1877,	// (0x000126ea) scroll_pane_cp9_ParamLimits

0x1877,	// (0x000126ea) scroll_pane_cp9

0x6089,	// (0x00016efc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6089,	// (0x00016efc) list_single_graphic_hl_pane_t1_cp2

0x189b,	// (0x0001270e) input_focus_pane_cp20_ParamLimits

0x189b,	// (0x0001270e) input_focus_pane_cp20

0x18a9,	// (0x0001271c) query_popup_data_pane_t1_ParamLimits

0x18a9,	// (0x0001271c) query_popup_data_pane_t1

0x18bc,	// (0x0001272f) query_popup_data_pane_t2_ParamLimits

0x18bc,	// (0x0001272f) query_popup_data_pane_t2

0x1902,	// (0x00012775) query_popup_data_pane_t3_ParamLimits

0x1902,	// (0x00012775) query_popup_data_pane_t3

0x1943,	// (0x000127b6) query_popup_data_pane_t4_ParamLimits

0x1943,	// (0x000127b6) query_popup_data_pane_t4

0x197f,	// (0x000127f2) query_popup_data_pane_t5_ParamLimits

0x197f,	// (0x000127f2) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002051f) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002051f) query_popup_data_pane_t

0x161d,	// (0x00012490) bg_set_opt_pane_g1

0x1625,	// (0x00012498) bg_set_opt_pane_g2

0x162d,	// (0x000124a0) bg_set_opt_pane_g3

0x1635,	// (0x000124a8) bg_set_opt_pane_g4

0x163d,	// (0x000124b0) bg_set_opt_pane_g5

0x1645,	// (0x000124b8) bg_set_opt_pane_g6

0x164d,	// (0x000124c0) bg_set_opt_pane_g7

0x1655,	// (0x000124c8) bg_set_opt_pane_g8

0x165d,	// (0x000124d0) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002052a) bg_set_opt_pane_g

0xd7dd,	// (0x0001e650) control_top_pane_stacon_ParamLimits

0xd7dd,	// (0x0001e650) control_top_pane_stacon

0xd830,	// (0x0001e6a3) signal_pane_stacon_ParamLimits

0xd830,	// (0x0001e6a3) signal_pane_stacon

0x1fcc,	// (0x00012e3f) stacon_top_pane_g1_ParamLimits

0x1fcc,	// (0x00012e3f) stacon_top_pane_g1

0xd855,	// (0x0001e6c8) title_pane_stacon_ParamLimits

0xd855,	// (0x0001e6c8) title_pane_stacon

0xd87f,	// (0x0001e6f2) uni_indicator_pane_stacon_ParamLimits

0xd87f,	// (0x0001e6f2) uni_indicator_pane_stacon

0xd894,	// (0x0001e707) battery_pane_stacon_ParamLimits

0xd894,	// (0x0001e707) battery_pane_stacon

0xd8d8,	// (0x0001e74b) control_bottom_pane_stacon_ParamLimits

0xd8d8,	// (0x0001e74b) control_bottom_pane_stacon

0xd8fb,	// (0x0001e76e) navi_pane_stacon_ParamLimits

0xd8fb,	// (0x0001e76e) navi_pane_stacon

0x1fee,	// (0x00012e61) stacon_bottom_pane_g1_ParamLimits

0x1fee,	// (0x00012e61) stacon_bottom_pane_g1

0xd547,	// (0x0001e3ba) aid_levels_signal_lsc_ParamLimits

0xd547,	// (0x0001e3ba) aid_levels_signal_lsc

0xd55e,	// (0x0001e3d1) signal_pane_stacon_g1_ParamLimits

0xd55e,	// (0x0001e3d1) signal_pane_stacon_g1

0xd572,	// (0x0001e3e5) signal_pane_stacon_g2_ParamLimits

0xd572,	// (0x0001e3e5) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002053d) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002053d) signal_pane_stacon_g

0xd5a7,	// (0x0001e41a) title_pane_stacon_t1_ParamLimits

0xd5a7,	// (0x0001e41a) title_pane_stacon_t1

0x19d7,	// (0x0001284a) uni_indicator_pane_stacon_g1

0x19e1,	// (0x00012854) uni_indicator_pane_stacon_g2

0x19c3,	// (0x00012836) uni_indicator_pane_stacon_g3

0x19cd,	// (0x00012840) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00020549) uni_indicator_pane_stacon_g

0xd5cc,	// (0x0001e43f) control_top_pane_stacon_g1

0xd5d4,	// (0x0001e447) control_top_pane_stacon_t1_ParamLimits

0xd5d4,	// (0x0001e447) control_top_pane_stacon_t1

0xd60b,	// (0x0001e47e) aid_levels_battery_lsc_ParamLimits

0xd60b,	// (0x0001e47e) aid_levels_battery_lsc

0xd623,	// (0x0001e496) battery_pane_stacon_g1_ParamLimits

0xd623,	// (0x0001e496) battery_pane_stacon_g1

0xd636,	// (0x0001e4a9) battery_pane_stacon_g2_ParamLimits

0xd636,	// (0x0001e4a9) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00020552) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00020552) battery_pane_stacon_g

0xd674,	// (0x0001e4e7) navi_icon_pane_stacon

0xd688,	// (0x0001e4fb) navi_navi_pane_stacon

0xd674,	// (0x0001e4e7) navi_text_pane_stacon

0xd5cc,	// (0x0001e43f) control_bottom_pane_stacon_g1

0xd69c,	// (0x0001e50f) control_bottom_pane_stacon_t1_ParamLimits

0xd69c,	// (0x0001e50f) control_bottom_pane_stacon_t1

0x1a05,	// (0x00012878) grid_app_pane_ParamLimits

0x1a05,	// (0x00012878) grid_app_pane

0x1a27,	// (0x0001289a) scroll_pane_cp15_ParamLimits

0x1a27,	// (0x0001289a) scroll_pane_cp15

0x1a3a,	// (0x000128ad) cell_app_pane_ParamLimits

0x1a3a,	// (0x000128ad) cell_app_pane

0x1a60,	// (0x000128d3) cell_app_pane_g1_ParamLimits

0x1a60,	// (0x000128d3) cell_app_pane_g1

0x1a80,	// (0x000128f3) cell_app_pane_g2_ParamLimits

0x1a80,	// (0x000128f3) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00020557) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00020557) cell_app_pane_g

0x1a8c,	// (0x000128ff) cell_app_pane_t1_ParamLimits

0x1a8c,	// (0x000128ff) cell_app_pane_t1

0x1aa3,	// (0x00012916) grid_highlight_pane_ParamLimits

0x1aa3,	// (0x00012916) grid_highlight_pane

0x161d,	// (0x00012490) cell_highlight_pane_g1

0x1625,	// (0x00012498) cell_highlight_pane_g2

0x162d,	// (0x000124a0) cell_highlight_pane_g3

0x1635,	// (0x000124a8) cell_highlight_pane_g4

0x163d,	// (0x000124b0) cell_highlight_pane_g5

0x1645,	// (0x000124b8) cell_highlight_pane_g6

0x164d,	// (0x000124c0) cell_highlight_pane_g7

0x1655,	// (0x000124c8) cell_highlight_pane_g8

0x165d,	// (0x000124d0) cell_highlight_pane_g9

0x064a,	// (0x000114bd) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00020505) cell_highlight_pane_g

0x1ab4,	// (0x00012927) bg_scroll_pane

0xd6e6,	// (0x0001e559) scroll_handle_pane

0x1afb,	// (0x0001296e) scroll_bg_pane_g1

0x1b10,	// (0x00012983) scroll_bg_pane_g2

0x1b28,	// (0x0001299b) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002055c) scroll_bg_pane_g

0x1b3d,	// (0x000129b0) scroll_handle_focus_pane_ParamLimits

0x1b3d,	// (0x000129b0) scroll_handle_focus_pane

0x1afb,	// (0x0001296e) scroll_handle_pane_g1

0x1b4a,	// (0x000129bd) scroll_handle_pane_g2

0x1b28,	// (0x0001299b) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00020563) scroll_handle_pane_g

0x16fc,	// (0x0001256f) bg_popup_sub_pane_cp21_ParamLimits

0x16fc,	// (0x0001256f) bg_popup_sub_pane_cp21

0x1b5e,	// (0x000129d1) popup_fep_japan_predictive_window_t1_ParamLimits

0x1b5e,	// (0x000129d1) popup_fep_japan_predictive_window_t1

0x1b78,	// (0x000129eb) popup_fep_japan_predictive_window_t2_ParamLimits

0x1b78,	// (0x000129eb) popup_fep_japan_predictive_window_t2

0x1bab,	// (0x00012a1e) popup_fep_japan_predictive_window_t3_ParamLimits

0x1bab,	// (0x00012a1e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002056a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002056a) popup_fep_japan_predictive_window_t

0x0654,	// (0x000114c7) bg_popup_sub_pane_cp23

0x1be2,	// (0x00012a55) listscroll_japin_cand_pane

0x1bea,	// (0x00012a5d) popup_fep_japan_candidate_window_t1

0x1bf8,	// (0x00012a6b) candidate_pane_ParamLimits

0x1bf8,	// (0x00012a6b) candidate_pane

0x1c0a,	// (0x00012a7d) scroll_pane_cp30

0x1c12,	// (0x00012a85) list_single_popup_jap_candidate_pane_ParamLimits

0x1c12,	// (0x00012a85) list_single_popup_jap_candidate_pane

0x0654,	// (0x000114c7) list_highlight_pane_cp30

0x1c26,	// (0x00012a99) list_single_popup_jap_candidate_pane_t1

0x1c35,	// (0x00012aa8) level_1_signal

0x1c42,	// (0x00012ab5) level_2_signal

0x1c4f,	// (0x00012ac2) level_3_signal

0x1c5c,	// (0x00012acf) level_4_signal

0x1c69,	// (0x00012adc) level_5_signal

0x1c76,	// (0x00012ae9) level_6_signal

0x1c83,	// (0x00012af6) level_7_signal

0x1c35,	// (0x00012aa8) level_1_battery

0x1c42,	// (0x00012ab5) level_2_battery

0x1c4f,	// (0x00012ac2) level_3_battery

0x1c5c,	// (0x00012acf) level_4_battery

0x1c69,	// (0x00012adc) level_5_battery

0x1c76,	// (0x00012ae9) level_6_battery

0x1c83,	// (0x00012af6) level_7_battery

0x1ca8,	// (0x00012b1b) list_menu_pane_ParamLimits

0x1ca8,	// (0x00012b1b) list_menu_pane

0x1cbe,	// (0x00012b31) scroll_pane_cp25_ParamLimits

0x1cbe,	// (0x00012b31) scroll_pane_cp25

0x1cd7,	// (0x00012b4a) list_double2_graphic_pane_cp2_ParamLimits

0x1cd7,	// (0x00012b4a) list_double2_graphic_pane_cp2

0x1cd7,	// (0x00012b4a) list_double2_large_graphic_pane_cp2_ParamLimits

0x1cd7,	// (0x00012b4a) list_double2_large_graphic_pane_cp2

0x1cd7,	// (0x00012b4a) list_double2_pane_cp2_ParamLimits

0x1cd7,	// (0x00012b4a) list_double2_pane_cp2

0x1cd7,	// (0x00012b4a) list_double_graphic_pane_cp2_ParamLimits

0x1cd7,	// (0x00012b4a) list_double_graphic_pane_cp2

0x1cd7,	// (0x00012b4a) list_double_large_graphic_pane_cp2_ParamLimits

0x1cd7,	// (0x00012b4a) list_double_large_graphic_pane_cp2

0x1cd7,	// (0x00012b4a) list_double_number_pane_cp2_ParamLimits

0x1cd7,	// (0x00012b4a) list_double_number_pane_cp2

0x1cd7,	// (0x00012b4a) list_double_pane_cp2_ParamLimits

0x1cd7,	// (0x00012b4a) list_double_pane_cp2

0x1cfb,	// (0x00012b6e) list_single_2graphic_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_2graphic_pane_cp2

0x1cfb,	// (0x00012b6e) list_single_graphic_heading_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_graphic_heading_pane_cp2

0x1cfb,	// (0x00012b6e) list_single_graphic_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_graphic_pane_cp2

0x1cfb,	// (0x00012b6e) list_single_heading_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_heading_pane_cp2

0x1d11,	// (0x00012b84) list_single_large_graphic_pane_cp2_ParamLimits

0x1d11,	// (0x00012b84) list_single_large_graphic_pane_cp2

0x1cfb,	// (0x00012b6e) list_single_number_heading_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_number_heading_pane_cp2

0x1cfb,	// (0x00012b6e) list_single_number_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_number_pane_cp2

0x1cfb,	// (0x00012b6e) list_single_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_pane_cp2

0x1d8c,	// (0x00012bff) bg_popup_sub_pane_cp22

0xd795,	// (0x0001e608) popup_side_volume_key_window_g1

0xd7b9,	// (0x0001e62c) popup_side_volume_key_window_t1

0xd7d5,	// (0x0001e648) volume_small_pane_cp1

0x09c9,	// (0x0001183c) bg_popup_sub_pane_cp24_ParamLimits

0x09c9,	// (0x0001183c) bg_popup_sub_pane_cp24

0x1da2,	// (0x00012c15) fep_china_uni_candidate_pane_ParamLimits

0x1da2,	// (0x00012c15) fep_china_uni_candidate_pane

0x1db6,	// (0x00012c29) fep_china_uni_entry_pane

0x1dc6,	// (0x00012c39) popup_fep_china_uni_window_g1

0x1de2,	// (0x00012c55) fep_china_uni_entry_pane_g1

0x1dea,	// (0x00012c5d) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002059b) fep_china_uni_entry_pane_g

0x1df2,	// (0x00012c65) fep_entry_item_pane

0x1dfc,	// (0x00012c6f) fep_candidate_item_pane

0x1e04,	// (0x00012c77) fep_china_uni_candidate_pane_g1

0x1e0c,	// (0x00012c7f) fep_china_uni_candidate_pane_g2

0x1e14,	// (0x00012c87) fep_china_uni_candidate_pane_g3

0x1e1c,	// (0x00012c8f) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x000205a0) fep_china_uni_candidate_pane_g

0x064a,	// (0x000114bd) fep_entry_item_pane_g1

0x1e24,	// (0x00012c97) fep_entry_item_pane_t1_ParamLimits

0x1e24,	// (0x00012c97) fep_entry_item_pane_t1

0x1e3a,	// (0x00012cad) fep_candidate_item_pane_t1_ParamLimits

0x1e3a,	// (0x00012cad) fep_candidate_item_pane_t1

0x1e4f,	// (0x00012cc2) fep_candidate_item_pane_t2_ParamLimits

0x1e4f,	// (0x00012cc2) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x000205a9) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x000205a9) fep_candidate_item_pane_t

0x0734,	// (0x000115a7) list_highlight_pane_cp31_ParamLimits

0x0734,	// (0x000115a7) list_highlight_pane_cp31

0x1e61,	// (0x00012cd4) level_1_signal_lsc

0x1e6a,	// (0x00012cdd) level_2_signal_lsc

0x1e73,	// (0x00012ce6) level_3_signal_lsc

0x1e7c,	// (0x00012cef) level_4_signal_lsc

0x1e85,	// (0x00012cf8) level_5_signal_lsc

0x1e8e,	// (0x00012d01) level_6_signal_lsc

0x1e97,	// (0x00012d0a) level_7_signal_lsc

0x1e97,	// (0x00012d0a) level_1_battery_lsc

0x1ea0,	// (0x00012d13) level_2_battery_lsc

0x1ea9,	// (0x00012d1c) level_3_battery_lsc

0x1eb2,	// (0x00012d25) level_4_battery_lsc

0x1ebb,	// (0x00012d2e) level_5_battery_lsc

0x1ec4,	// (0x00012d37) level_6_battery_lsc

0x1e61,	// (0x00012cd4) level_7_battery_lsc

0x1ecd,	// (0x00012d40) scroll_handle_focus_pane_g1

0x1ed6,	// (0x00012d49) scroll_handle_focus_pane_g2

0x1edf,	// (0x00012d52) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x000205ae) scroll_handle_focus_pane_g

0xc6df,	// (0x0001d552) list_single_2graphic_pane_g1_ParamLimits

0xc6df,	// (0x0001d552) list_single_2graphic_pane_g1

0xc09e,	// (0x0001cf11) list_single_2graphic_pane_g2_ParamLimits

0xc09e,	// (0x0001cf11) list_single_2graphic_pane_g2

0xc024,	// (0x0001ce97) list_single_2graphic_pane_g3_ParamLimits

0xc024,	// (0x0001ce97) list_single_2graphic_pane_g3

0xc6eb,	// (0x0001d55e) list_single_2graphic_pane_g4_ParamLimits

0xc6eb,	// (0x0001d55e) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x000205b5) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x000205b5) list_single_2graphic_pane_g

0xc6f7,	// (0x0001d56a) list_single_2graphic_pane_t1_ParamLimits

0xc6f7,	// (0x0001d56a) list_single_2graphic_pane_t1

0xc725,	// (0x0001d598) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc725,	// (0x0001d598) list_double2_graphic_large_graphic_pane_g1

0xc143,	// (0x0001cfb6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc143,	// (0x0001cfb6) list_double2_graphic_large_graphic_pane_g2

0xc154,	// (0x0001cfc7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc154,	// (0x0001cfc7) list_double2_graphic_large_graphic_pane_g3

0xc737,	// (0x0001d5aa) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc737,	// (0x0001d5aa) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x000205be) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x000205be) list_double2_graphic_large_graphic_pane_g

0xc743,	// (0x0001d5b6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc743,	// (0x0001d5b6) list_double2_graphic_large_graphic_pane_t1

0xc759,	// (0x0001d5cc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc759,	// (0x0001d5cc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x000205c7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x000205c7) list_double2_graphic_large_graphic_pane_t

0x20b7,	// (0x00012f2a) popup_fast_swap_window_ParamLimits

0x20b7,	// (0x00012f2a) popup_fast_swap_window

0x20d3,	// (0x00012f46) popup_side_volume_key_window

0x20ed,	// (0x00012f60) stacon_top_pane

0x20f7,	// (0x00012f6a) status_pane_ParamLimits

0x20f7,	// (0x00012f6a) status_pane

0x20ed,	// (0x00012f60) status_small_pane

0x0654,	// (0x000114c7) control_pane

0x0654,	// (0x000114c7) stacon_bottom_pane

0x140d,	// (0x00012280) scroll_pane_cp121

0x1404,	// (0x00012277) set_content_pane

0x1f89,	// (0x00012dfc) bg_active_tab_pane_g1_cp1

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp1

0x1f77,	// (0x00012dea) bg_active_tab_pane_g3_cp1

0x1f89,	// (0x00012dfc) bg_passive_tab_pane_g1_cp1

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp1

0x1f77,	// (0x00012dea) bg_passive_tab_pane_g3_cp1

0x1f9b,	// (0x00012e0e) bg_active_tab_pane_g1_cp2

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp2

0x1f92,	// (0x00012e05) bg_active_tab_pane_g3_cp2

0x1f9b,	// (0x00012e0e) bg_passive_tab_pane_g1_cp2

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp2

0x1f92,	// (0x00012e05) bg_passive_tab_pane_g3_cp2

0x1fad,	// (0x00012e20) bg_active_tab_pane_g1_cp3

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp3

0x1fa4,	// (0x00012e17) bg_active_tab_pane_g3_cp3

0x1fad,	// (0x00012e20) bg_passive_tab_pane_g1_cp3

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp3

0x1fa4,	// (0x00012e17) bg_passive_tab_pane_g3_cp3

0x1fc1,	// (0x00012e34) bg_active_tab_pane_g1_cp4

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp4

0x1fb6,	// (0x00012e29) bg_active_tab_pane_g3_cp4

0x1fc1,	// (0x00012e34) bg_passive_tab_pane_g1_cp4

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp4

0x1fb6,	// (0x00012e29) bg_passive_tab_pane_g3_cp4

0x2013,	// (0x00012e86) bg_active_tab_pane_g1_cp5

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp5

0x200a,	// (0x00012e7d) bg_active_tab_pane_g3_cp5

0x2013,	// (0x00012e86) bg_passive_tab_pane_g1_cp5

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp5

0x200a,	// (0x00012e7d) bg_passive_tab_pane_g3_cp5

0x201c,	// (0x00012e8f) list_set_graphic_pane_ParamLimits

0x201c,	// (0x00012e8f) list_set_graphic_pane

0x0654,	// (0x000114c7) bg_set_opt_pane_cp4

0x203c,	// (0x00012eaf) list_set_graphic_pane_g1_ParamLimits

0x203c,	// (0x00012eaf) list_set_graphic_pane_g1

0x2048,	// (0x00012ebb) list_set_graphic_pane_g2_ParamLimits

0x2048,	// (0x00012ebb) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x000205cc) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x000205cc) list_set_graphic_pane_g

0x0009,

0xfae1,	// (0x00020954) volume_small_pane_cp_g

0x206a,	// (0x00012edd) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x206a,	// (0x00012edd) list_double2_large_graphic_pane_g1_cp2

0x2076,	// (0x00012ee9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2076,	// (0x00012ee9) list_double2_large_graphic_pane_g2_cp2

0x2087,	// (0x00012efa) list_double2_large_graphic_pane_g3_cp2

0x208f,	// (0x00012f02) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x208f,	// (0x00012f02) list_double2_large_graphic_pane_t1_cp2

0x20a5,	// (0x00012f18) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x20a5,	// (0x00012f18) list_double2_large_graphic_pane_t2_cp2

0x3d70,	// (0x00014be3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3d70,	// (0x00014be3) list_double_large_graphic_pane_g1_cp2

0x3d81,	// (0x00014bf4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3d81,	// (0x00014bf4) list_double_large_graphic_pane_g2_cp2

0x2213,	// (0x00013086) list_double_large_graphic_pane_g3_cp2

0x3d92,	// (0x00014c05) list_double_large_graphic_pane_g4_cp

0x3d9a,	// (0x00014c0d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3d9a,	// (0x00014c0d) list_double_large_graphic_pane_t1_cp2

0x3db1,	// (0x00014c24) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3db1,	// (0x00014c24) list_double_large_graphic_pane_t2_cp2

0x2105,	// (0x00012f78) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2105,	// (0x00012f78) list_double2_graphic_pane_g1_cp2

0x2113,	// (0x00012f86) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2113,	// (0x00012f86) list_double2_graphic_pane_g2_cp2

0x2124,	// (0x00012f97) list_double2_graphic_pane_g3_cp2

0x212e,	// (0x00012fa1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x212e,	// (0x00012fa1) list_double2_graphic_pane_t1_cp2

0x2144,	// (0x00012fb7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2144,	// (0x00012fb7) list_double2_graphic_pane_t2_cp2

0x2156,	// (0x00012fc9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2156,	// (0x00012fc9) list_single_number_heading_pane_g1_cp2

0x2162,	// (0x00012fd5) list_single_number_heading_pane_g2_cp2

0x216a,	// (0x00012fdd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x216a,	// (0x00012fdd) list_single_number_heading_pane_t1_cp2

0x2180,	// (0x00012ff3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2180,	// (0x00012ff3) list_single_number_heading_pane_t2_cp2

0x2192,	// (0x00013005) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2192,	// (0x00013005) list_single_number_heading_pane_t3_cp2

0x2156,	// (0x00012fc9) list_single_heading_pane_g1_cp2_ParamLimits

0x2156,	// (0x00012fc9) list_single_heading_pane_g1_cp2

0x2162,	// (0x00012fd5) list_single_heading_pane_g2_cp2

0x216a,	// (0x00012fdd) list_single_heading_pane_t1_cp2_ParamLimits

0x216a,	// (0x00012fdd) list_single_heading_pane_t1_cp2

0x3b7a,	// (0x000149ed) list_single_heading_pane_t2_cp2_ParamLimits

0x3b7a,	// (0x000149ed) list_single_heading_pane_t2_cp2

0x3ac2,	// (0x00014935) list_double_graphic_pane_g1_cp2_ParamLimits

0x3ac2,	// (0x00014935) list_double_graphic_pane_g1_cp2

0x3ace,	// (0x00014941) list_double_graphic_pane_g2_cp2_ParamLimits

0x3ace,	// (0x00014941) list_double_graphic_pane_g2_cp2

0x3add,	// (0x00014950) list_double_graphic_pane_g3_cp2

0x3ae5,	// (0x00014958) list_double_graphic_pane_t1_cp2_ParamLimits

0x3ae5,	// (0x00014958) list_double_graphic_pane_t1_cp2

0x3afb,	// (0x0001496e) list_double_graphic_pane_t2_cp2_ParamLimits

0x3afb,	// (0x0001496e) list_double_graphic_pane_t2_cp2

0x2207,	// (0x0001307a) list_double_number_pane_g1_cp2_ParamLimits

0x2207,	// (0x0001307a) list_double_number_pane_g1_cp2

0x2213,	// (0x00013086) list_double_number_pane_g2_cp2

0x3a86,	// (0x000148f9) list_double_number_pane_t1_cp2_ParamLimits

0x3a86,	// (0x000148f9) list_double_number_pane_t1_cp2

0x3a9a,	// (0x0001490d) list_double_number_pane_t2_cp2_ParamLimits

0x3a9a,	// (0x0001490d) list_double_number_pane_t2_cp2

0x3ab0,	// (0x00014923) list_double_number_pane_t3_cp2_ParamLimits

0x3ab0,	// (0x00014923) list_double_number_pane_t3_cp2

0x396f,	// (0x000147e2) list_single_graphic_pane_g1_cp2_ParamLimits

0x396f,	// (0x000147e2) list_single_graphic_pane_g1_cp2

0x0f58,	// (0x00011dcb) list_single_graphic_pane_g2_cp2_ParamLimits

0x0f58,	// (0x00011dcb) list_single_graphic_pane_g2_cp2

0x226b,	// (0x000130de) list_single_graphic_pane_g3_cp2

0x3945,	// (0x000147b8) list_single_graphic_pane_t1_cp2_ParamLimits

0x3945,	// (0x000147b8) list_single_graphic_pane_t1_cp2

0x0f58,	// (0x00011dcb) list_single_number_pane_g1_cp2_ParamLimits

0x0f58,	// (0x00011dcb) list_single_number_pane_g1_cp2

0x226b,	// (0x000130de) list_single_number_pane_g2_cp2

0x3945,	// (0x000147b8) list_single_number_pane_t1_cp2_ParamLimits

0x3945,	// (0x000147b8) list_single_number_pane_t1_cp2

0x395b,	// (0x000147ce) list_single_number_pane_t2_cp2_ParamLimits

0x395b,	// (0x000147ce) list_single_number_pane_t2_cp2

0x2076,	// (0x00012ee9) list_double2_pane_g1_cp2_ParamLimits

0x2076,	// (0x00012ee9) list_double2_pane_g1_cp2

0x2087,	// (0x00012efa) list_double2_pane_g2_cp2

0x21df,	// (0x00013052) list_double2_pane_t1_cp2_ParamLimits

0x21df,	// (0x00013052) list_double2_pane_t1_cp2

0x21f5,	// (0x00013068) list_double2_pane_t2_cp2_ParamLimits

0x21f5,	// (0x00013068) list_double2_pane_t2_cp2

0x2207,	// (0x0001307a) list_double_pane_g1_cp2_ParamLimits

0x2207,	// (0x0001307a) list_double_pane_g1_cp2

0x2213,	// (0x00013086) list_double_pane_g2_cp2

0x221b,	// (0x0001308e) list_double_pane_t1_cp2_ParamLimits

0x221b,	// (0x0001308e) list_double_pane_t1_cp2

0x2231,	// (0x000130a4) list_double_pane_t2_cp2_ParamLimits

0x2231,	// (0x000130a4) list_double_pane_t2_cp2

0x225b,	// (0x000130ce) list_single_pane_cp2_g3

0x0f58,	// (0x00011dcb) list_single_pane_g1_cp2_ParamLimits

0x0f58,	// (0x00011dcb) list_single_pane_g1_cp2

0x226b,	// (0x000130de) list_single_pane_g2_cp2

0x2273,	// (0x000130e6) list_single_pane_t1_cp2_ParamLimits

0x2273,	// (0x000130e6) list_single_pane_t1_cp2

0x228b,	// (0x000130fe) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x228b,	// (0x000130fe) list_single_large_graphic_pane_g1_cp2

0x2297,	// (0x0001310a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2297,	// (0x0001310a) list_single_large_graphic_pane_g2_cp2

0x22a3,	// (0x00013116) list_single_large_graphic_pane_g3_cp2

0x22ab,	// (0x0001311e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x22ab,	// (0x0001311e) list_single_large_graphic_pane_g4_cp1

0x22c5,	// (0x00013138) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x22c5,	// (0x00013138) list_single_large_graphic_pane_t1_cp2

0x3911,	// (0x00014784) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3911,	// (0x00014784) list_single_graphic_heading_pane_g1_cp2

0x38de,	// (0x00014751) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x38de,	// (0x00014751) list_single_graphic_heading_pane_g4_cp2

0x226b,	// (0x000130de) list_single_graphic_heading_pane_g5_cp2

0x391d,	// (0x00014790) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x391d,	// (0x00014790) list_single_graphic_heading_pane_t1_cp2

0x3933,	// (0x000147a6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3933,	// (0x000147a6) list_single_graphic_heading_pane_t2_cp2

0x38d2,	// (0x00014745) list_single_2graphic_pane_g1_cp2_ParamLimits

0x38d2,	// (0x00014745) list_single_2graphic_pane_g1_cp2

0x38de,	// (0x00014751) list_single_2graphic_pane_g2_cp2_ParamLimits

0x38de,	// (0x00014751) list_single_2graphic_pane_g2_cp2

0x226b,	// (0x000130de) list_single_2graphic_pane_g3_cp2

0x38ef,	// (0x00014762) list_single_2graphic_pane_g4_cp2_ParamLimits

0x38ef,	// (0x00014762) list_single_2graphic_pane_g4_cp2

0x38fb,	// (0x0001476e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x38fb,	// (0x0001476e) list_single_2graphic_pane_t1_cp2

0x064a,	// (0x000114bd) list_highlight_pane_g10_cp1

0x34aa,	// (0x0001431d) list_highlight_pane_g1_cp1

0x34b2,	// (0x00014325) list_highlight_pane_g2_cp1

0x34ba,	// (0x0001432d) list_highlight_pane_g3_cp1

0x34c2,	// (0x00014335) list_highlight_pane_g4_cp1

0x34ca,	// (0x0001433d) list_highlight_pane_g5_cp1

0x34d2,	// (0x00014345) list_highlight_pane_g6_cp1

0x34da,	// (0x0001434d) list_highlight_pane_g7_cp1

0x34e2,	// (0x00014355) list_highlight_pane_g8_cp1

0x34ea,	// (0x0001435d) list_highlight_pane_g9_cp1

0x33c2,	// (0x00014235) form_field_slider_pane_t3

0x33d0,	// (0x00014243) form_field_slider_pane_t4

0x33de,	// (0x00014251) slider_form_pane_ParamLimits

0x33de,	// (0x00014251) slider_form_pane

0x0654,	// (0x000114c7) control_abbreviations

0x0654,	// (0x000114c7) control_conventions

0x0654,	// (0x000114c7) control_definitions

0x0654,	// (0x000114c7) format_table_attribute

0x3bc4,	// (0x00014a37) bg_popup_preview_window_pane_g9

0x0654,	// (0x000114c7) format_table_data2

0x0654,	// (0x000114c7) format_table_data3

0x0654,	// (0x000114c7) format_table_data_example

0x0008,

0x0654,	// (0x000114c7) intro_purpose

0xf8ee,	// (0x00020761) bg_popup_preview_window_pane_g

0x0654,	// (0x000114c7) texts_category

0x0654,	// (0x000114c7) texts_graphics

0x22db,	// (0x0001314e) text_digital

0x22ea,	// (0x0001315d) text_primary

0x22f9,	// (0x0001316c) text_primary_small

0x2308,	// (0x0001317b) text_secondary

0x2317,	// (0x0001318a) text_title

0x43d4,	// (0x00015247) bg_passive_tab_pane_g1_cp3_srt

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp3_srt

0x43cb,	// (0x0001523e) bg_passive_tab_pane_g3_cp3_srt

0x0734,	// (0x000115a7) bg_active_tab_pane_cp3_srt_ParamLimits

0x0734,	// (0x000115a7) bg_active_tab_pane_cp3_srt

0x43dd,	// (0x00015250) tabs_4_active_pane_srt_g1

0x43e5,	// (0x00015258) tabs_4_active_pane_srt_t1_ParamLimits

0x43e5,	// (0x00015258) tabs_4_active_pane_srt_t1

0x43d4,	// (0x00015247) bg_active_tab_pane_g1_cp3_copy1

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp3_copy1

0x43cb,	// (0x0001523e) bg_active_tab_pane_g3_cp3_copy1

0x0734,	// (0x000115a7) tabs_2_long_active_pane_srt_ParamLimits

0x0734,	// (0x000115a7) tabs_2_long_active_pane_srt

0x0734,	// (0x000115a7) tabs_2_long_passive_pane_srt_ParamLimits

0x0734,	// (0x000115a7) tabs_2_long_passive_pane_srt

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp4_srt

0x4009,	// (0x00014e7c) bg_passive_tab_pane_g1_cp4_srt

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp4_srt

0x4000,	// (0x00014e73) bg_passive_tab_pane_g3_cp4_srt

0x1811,	// (0x00012684) bg_active_tab_pane_cp4_srt_ParamLimits

0x1811,	// (0x00012684) bg_active_tab_pane_cp4_srt

0x4012,	// (0x00014e85) tabs_2_long_active_pane_srt_t1_ParamLimits

0x4012,	// (0x00014e85) tabs_2_long_active_pane_srt_t1

0x4009,	// (0x00014e7c) bg_active_tab_pane_g1_cp4_srt

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp4_srt

0x4000,	// (0x00014e73) bg_active_tab_pane_g3_cp4_srt

0x09c9,	// (0x0001183c) tabs_3_long_active_pane_srt_ParamLimits

0x09c9,	// (0x0001183c) tabs_3_long_active_pane_srt

0x09c9,	// (0x0001183c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x09c9,	// (0x0001183c) tabs_3_long_passive_pane_cp_srt

0x09c9,	// (0x0001183c) tabs_3_long_passive_pane_srt_ParamLimits

0x09c9,	// (0x0001183c) tabs_3_long_passive_pane_srt

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp5_srt

0x2013,	// (0x00012e86) bg_passive_tab_pane_g1_cp5_srt

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp5_srt

0x200a,	// (0x00012e7d) bg_passive_tab_pane_g3_cp5_srt

0x1811,	// (0x00012684) bg_active_tab_pane_cp5_srt_ParamLimits

0x1811,	// (0x00012684) bg_active_tab_pane_cp5_srt

0x3fee,	// (0x00014e61) tabs_3_long_active_pane_srt_t1_ParamLimits

0x3fee,	// (0x00014e61) tabs_3_long_active_pane_srt_t1

0x2013,	// (0x00012e86) bg_active_tab_pane_g1_cp5_srt

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp5_srt

0x200a,	// (0x00012e7d) bg_active_tab_pane_g3_cp5_srt

0x3fe0,	// (0x00014e53) navi_text_pane_srt_t1

0x3fd8,	// (0x00014e4b) navi_icon_pane_srt_g1

0x24da,	// (0x0001334d) midp_editing_number_pane_srt

0x2326,	// (0x00013199) midp_ticker_pane_srt

0x24e2,	// (0x00013355) midp_ticker_pane_srt_g1

0x24ea,	// (0x0001335d) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x000205eb) midp_ticker_pane_srt_g

0x24f2,	// (0x00013365) midp_ticker_pane_srt_t1

0x3fc9,	// (0x00014e3c) midp_editing_number_pane_t1_copy1

0x1832,	// (0x000126a5) listscroll_midp_pane

0x1832,	// (0x000126a5) midp_form_pane

0x2392,	// (0x00013205) midp_info_popup_window_ParamLimits

0x2392,	// (0x00013205) midp_info_popup_window

0x16fc,	// (0x0001256f) bg_popup_sub_pane_cp50_ParamLimits

0x16fc,	// (0x0001256f) bg_popup_sub_pane_cp50

0x30df,	// (0x00013f52) listscroll_midp_info_pane_ParamLimits

0x30df,	// (0x00013f52) listscroll_midp_info_pane

0x30c7,	// (0x00013f3a) listscroll_form_midp_pane_ParamLimits

0x30c7,	// (0x00013f3a) listscroll_form_midp_pane

0x30d3,	// (0x00013f46) scroll_bar_cp050

0x30a7,	// (0x00013f1a) list_midp_pane

0x50ca,	// (0x00015f3d) signal_pane_g2_cp

0x2fe1,	// (0x00013e54) listscroll_midp_info_pane_t1_ParamLimits

0x2fe1,	// (0x00013e54) listscroll_midp_info_pane_t1

0x2ff9,	// (0x00013e6c) listscroll_midp_info_pane_t2_ParamLimits

0x2ff9,	// (0x00013e6c) listscroll_midp_info_pane_t2

0x3037,	// (0x00013eaa) listscroll_midp_info_pane_t3_ParamLimits

0x3037,	// (0x00013eaa) listscroll_midp_info_pane_t3

0x3071,	// (0x00013ee4) listscroll_midp_info_pane_t4_ParamLimits

0x3071,	// (0x00013ee4) listscroll_midp_info_pane_t4

0x0003,

0xf829,	// (0x0002069c) listscroll_midp_info_pane_t_ParamLimits

0xf829,	// (0x0002069c) listscroll_midp_info_pane_t

0x17be,	// (0x00012631) scroll_pane_cp21

0x2f83,	// (0x00013df6) form_midp_field_choice_group_pane

0x2f8c,	// (0x00013dff) form_midp_field_text_pane

0x2fc7,	// (0x00013e3a) form_midp_field_time_pane

0x2fcf,	// (0x00013e42) form_midp_gauge_slider_pane

0x2fd8,	// (0x00013e4b) form_midp_gauge_wait_pane

0x0654,	// (0x000114c7) form_midp_image_pane

0xc8b0,	// (0x0001d723) list_single_midp_pane_ParamLimits

0xc8b0,	// (0x0001d723) list_single_midp_pane

0x2f01,	// (0x00013d74) form_midp_field_text_pane_t1

0x2caa,	// (0x00013b1d) input_focus_pane_cp050

0x2f3c,	// (0x00013daf) list_midp_form_text_pane

0x2ed0,	// (0x00013d43) form_midp_field_choice_group_pane_t1

0x2ede,	// (0x00013d51) input_focus_pane_cp051

0x2ef2,	// (0x00013d65) list_midp_choice_pane

0x0654,	// (0x000114c7) status_idle_pane

0x2eb4,	// (0x00013d27) form_midp_field_time_pane_t1

0x064a,	// (0x000114bd) wait_anim_pane_g2_copy1

0x2ec2,	// (0x00013d35) form_midp_field_time_pane_t2

0x0001,

0x2442,	// (0x000132b5) aid_navinavi_width_2_pane

0xf824,	// (0x00020697) form_midp_field_time_pane_t

0x0654,	// (0x000114c7) input_focus_pane_cp052

0x0654,	// (0x000114c7) bg_input_focus_pane_cp040

0x2e74,	// (0x00013ce7) form_midp_gauge_slider_pane_t1

0x2e82,	// (0x00013cf5) form_midp_gauge_slider_pane_t2

0x2e90,	// (0x00013d03) form_midp_gauge_slider_pane_t3

0x2e9e,	// (0x00013d11) form_midp_gauge_slider_pane_t4

0x0003,

0xf81b,	// (0x0002068e) form_midp_gauge_slider_pane_t

0x2eac,	// (0x00013d1f) form_midp_slider_pane

0x0734,	// (0x000115a7) bg_input_focus_pane_cp041_ParamLimits

0x0734,	// (0x000115a7) bg_input_focus_pane_cp041

0x2e41,	// (0x00013cb4) form_midp_gauge_wait_pane_t1_ParamLimits

0x2e41,	// (0x00013cb4) form_midp_gauge_wait_pane_t1

0x2e53,	// (0x00013cc6) form_midp_gauge_wait_pane_t2_ParamLimits

0x2e53,	// (0x00013cc6) form_midp_gauge_wait_pane_t2

0x0001,

0xf816,	// (0x00020689) form_midp_gauge_wait_pane_t_ParamLimits

0xf816,	// (0x00020689) form_midp_gauge_wait_pane_t

0x2e65,	// (0x00013cd8) form_midp_wait_pane_ParamLimits

0x2e65,	// (0x00013cd8) form_midp_wait_pane

0x2e0b,	// (0x00013c7e) form_midp_image_pane_g1

0x2e14,	// (0x00013c87) form_midp_image_pane_t1

0x2e23,	// (0x00013c96) form_midp_image_pane_t2

0x2e32,	// (0x00013ca5) form_midp_image_pane_t3

0x0002,

0xf80f,	// (0x00020682) form_midp_image_pane_t

0x2df3,	// (0x00013c66) list_single_midp_pane_g1

0xc8a1,	// (0x0001d714) list_single_midp_pane_t1

0x2dc4,	// (0x00013c37) list_midp_form_item_pane_ParamLimits

0x2dc4,	// (0x00013c37) list_midp_form_item_pane

0x23ea,	// (0x0001325d) list_midp_form_item_pane_t1

0x23f9,	// (0x0001326c) midp_ticker_pane_g1

0x2405,	// (0x00013278) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x000205d1) midp_ticker_pane_g

0x2411,	// (0x00013284) midp_ticker_pane_t1

0x4243,	// (0x000150b6) midp_editing_number_pane_t1

0x4221,	// (0x00015094) midp_editing_number_pane

0x4230,	// (0x000150a3) midp_ticker_pane

0x3fa7,	// (0x00014e1a) ai_message_heading_pane

0x0654,	// (0x000114c7) bg_popup_window_pane_cp14

0x3faf,	// (0x00014e22) listscroll_ai_message_pane

0x3f31,	// (0x00014da4) ai_message_heading_pane_g1_ParamLimits

0x3f31,	// (0x00014da4) ai_message_heading_pane_g1

0x3f3d,	// (0x00014db0) ai_message_heading_pane_g2_ParamLimits

0x3f3d,	// (0x00014db0) ai_message_heading_pane_g2

0x3f49,	// (0x00014dbc) ai_message_heading_pane_g3_ParamLimits

0x3f49,	// (0x00014dbc) ai_message_heading_pane_g3

0x3f55,	// (0x00014dc8) ai_message_heading_pane_g4_ParamLimits

0x3f55,	// (0x00014dc8) ai_message_heading_pane_g4

0x0003,

0xf950,	// (0x000207c3) ai_message_heading_pane_g_ParamLimits

0xf950,	// (0x000207c3) ai_message_heading_pane_g

0x3f61,	// (0x00014dd4) ai_message_heading_pane_t1_ParamLimits

0x3f61,	// (0x00014dd4) ai_message_heading_pane_t1

0x3f7b,	// (0x00014dee) ai_message_heading_pane_t2_ParamLimits

0x3f7b,	// (0x00014dee) ai_message_heading_pane_t2

0x0001,

0xf959,	// (0x000207cc) ai_message_heading_pane_t_ParamLimits

0xf959,	// (0x000207cc) ai_message_heading_pane_t

0x3f8d,	// (0x00014e00) bg_popup_heading_pane_cp1_ParamLimits

0x3f8d,	// (0x00014e00) bg_popup_heading_pane_cp1

0x3f1f,	// (0x00014d92) list_ai_message_pane_ParamLimits

0x3f1f,	// (0x00014d92) list_ai_message_pane

0x17be,	// (0x00012631) scroll_pane_cp10

0x3ebb,	// (0x00014d2e) list_ai_message_pane_g1

0x3ec3,	// (0x00014d36) list_ai_message_pane_g2

0x0001,

0xf92d,	// (0x000207a0) list_ai_message_pane_g

0x3ecb,	// (0x00014d3e) list_ai_message_pane_t1_ParamLimits

0x3ecb,	// (0x00014d3e) list_ai_message_pane_t1

0x3ee0,	// (0x00014d53) list_ai_message_pane_t2_ParamLimits

0x3ee0,	// (0x00014d53) list_ai_message_pane_t2

0x3ef5,	// (0x00014d68) list_ai_message_pane_t3_ParamLimits

0x3ef5,	// (0x00014d68) list_ai_message_pane_t3

0x3f0a,	// (0x00014d7d) list_ai_message_pane_t4_ParamLimits

0x3f0a,	// (0x00014d7d) list_ai_message_pane_t4

0x0003,

0xf932,	// (0x000207a5) list_ai_message_pane_t_ParamLimits

0xf932,	// (0x000207a5) list_ai_message_pane_t

0x3ea5,	// (0x00014d18) cell_ai_soft_ind_pane_ParamLimits

0x3ea5,	// (0x00014d18) cell_ai_soft_ind_pane

0x2423,	// (0x00013296) cell_ai_soft_ind_pane_g1_ParamLimits

0x2423,	// (0x00013296) cell_ai_soft_ind_pane_g1

0x0654,	// (0x000114c7) grid_highlight_cp1

0x2430,	// (0x000132a3) text_secondary_cp56_ParamLimits

0x2430,	// (0x000132a3) text_secondary_cp56

0x3e7a,	// (0x00014ced) example_general_pane_ParamLimits

0x3e7a,	// (0x00014ced) example_general_pane

0x3e86,	// (0x00014cf9) example_parent_pane_g1_ParamLimits

0x3e86,	// (0x00014cf9) example_parent_pane_g1

0x3e92,	// (0x00014d05) example_parent_pane_t1_ParamLimits

0x3e92,	// (0x00014d05) example_parent_pane_t1

0xdea0,	// (0x0001ed13) popup_preview_text_window_ParamLimits

0xdea0,	// (0x0001ed13) popup_preview_text_window

0x2263,	// (0x000130d6) list_single_pane_cp2_g4

0x0a73,	// (0x000118e6) bg_popup_preview_window_pane_ParamLimits

0x0a73,	// (0x000118e6) bg_popup_preview_window_pane

0x3bcc,	// (0x00014a3f) popup_preview_text_window_t1_ParamLimits

0x3bcc,	// (0x00014a3f) popup_preview_text_window_t1

0x3bea,	// (0x00014a5d) popup_preview_text_window_t2_ParamLimits

0x3bea,	// (0x00014a5d) popup_preview_text_window_t2

0x3c33,	// (0x00014aa6) popup_preview_text_window_t3_ParamLimits

0x3c33,	// (0x00014aa6) popup_preview_text_window_t3

0x3c78,	// (0x00014aeb) popup_preview_text_window_t4_ParamLimits

0x3c78,	// (0x00014aeb) popup_preview_text_window_t4

0x0004,

0xf901,	// (0x00020774) popup_preview_text_window_t_ParamLimits

0xf901,	// (0x00020774) popup_preview_text_window_t

0x3cf6,	// (0x00014b69) scroll_pane_cp11

0x2b86,	// (0x000139f9) bg_popup_preview_window_pane_g1

0x3b8c,	// (0x000149ff) bg_popup_preview_window_pane_g2

0x3b94,	// (0x00014a07) bg_popup_preview_window_pane_g3

0x3b9c,	// (0x00014a0f) bg_popup_preview_window_pane_g4

0x3ba4,	// (0x00014a17) bg_popup_preview_window_pane_g5

0x3bac,	// (0x00014a1f) bg_popup_preview_window_pane_g6

0x3bb4,	// (0x00014a27) bg_popup_preview_window_pane_g7

0x3bbc,	// (0x00014a2f) bg_popup_preview_window_pane_g8

0xd0e1,	// (0x0001df54) aid_popup_width_pane

0xde7e,	// (0x0001ecf1) popup_midp_note_alarm_window_ParamLimits

0xde7e,	// (0x0001ecf1) popup_midp_note_alarm_window

0x14c0,	// (0x00012333) data_form_pane_ParamLimits

0xc547,	// (0x0001d3ba) form_field_data_pane_g1

0xc551,	// (0x0001d3c4) form_field_data_pane_t1_ParamLimits

0x14f0,	// (0x00012363) input_focus_pane_ParamLimits

0xc56b,	// (0x0001d3de) data_form_wide_pane_ParamLimits

0xc57c,	// (0x0001d3ef) form_field_data_wide_pane_g1

0xc588,	// (0x0001d3fb) form_field_data_wide_pane_t1_ParamLimits

0x0d16,	// (0x00011b89) input_focus_pane_cp6_ParamLimits

0x1769,	// (0x000125dc) input_popup_find_pane_g1_ParamLimits

0x1769,	// (0x000125dc) input_popup_find_pane_g1

0xd647,	// (0x0001e4ba) aid_navi_side_left_pane

0xd65c,	// (0x0001e4cf) aid_navi_side_right_pane

0x35a5,	// (0x00014418) bg_popup_window_pane_cp30_ParamLimits

0x35a5,	// (0x00014418) bg_popup_window_pane_cp30

0x361f,	// (0x00014492) popup_midp_note_alarm_window_g1_ParamLimits

0x361f,	// (0x00014492) popup_midp_note_alarm_window_g1

0x364f,	// (0x000144c2) popup_midp_note_alarm_window_t1_ParamLimits

0x364f,	// (0x000144c2) popup_midp_note_alarm_window_t1

0x36f0,	// (0x00014563) popup_midp_note_alarm_window_t2_ParamLimits

0x36f0,	// (0x00014563) popup_midp_note_alarm_window_t2

0x379e,	// (0x00014611) popup_midp_note_alarm_window_t3_ParamLimits

0x379e,	// (0x00014611) popup_midp_note_alarm_window_t3

0x37d0,	// (0x00014643) popup_midp_note_alarm_window_t4_ParamLimits

0x37d0,	// (0x00014643) popup_midp_note_alarm_window_t4

0x37f6,	// (0x00014669) popup_midp_note_alarm_window_t5_ParamLimits

0x37f6,	// (0x00014669) popup_midp_note_alarm_window_t5

0x000a,

0xf89e,	// (0x00020711) popup_midp_note_alarm_window_t_ParamLimits

0xf89e,	// (0x00020711) popup_midp_note_alarm_window_t

0x38a2,	// (0x00014715) wait_bar_pane_cp1_ParamLimits

0x38a2,	// (0x00014715) wait_bar_pane_cp1

0x0654,	// (0x000114c7) wait_anim_pane_copy1

0x0654,	// (0x000114c7) wait_border_pane_copy1

0x3283,	// (0x000140f6) wait_border_pane_g1_copy1

0xc5a2,	// (0x0001d415) form_field_popup_pane_g1

0xc5aa,	// (0x0001d41d) form_field_popup_pane_t1_ParamLimits

0x14f0,	// (0x00012363) input_focus_pane_cp7_ParamLimits

0x1563,	// (0x000123d6) list_form_pane_ParamLimits

0xc5c4,	// (0x0001d437) form_field_popup_wide_pane_g1

0xc5cc,	// (0x0001d43f) form_field_popup_wide_pane_t1_ParamLimits

0x14f0,	// (0x00012363) input_focus_pane_cp8_ParamLimits

0x158c,	// (0x000123ff) list_form_wide_pane_ParamLimits

0x4455,	// (0x000152c8) aid_size_cell_graphic_pane

0xc651,	// (0x0001d4c4) data_form_pane_t1_ParamLimits

0xc912,	// (0x0001d785) data_form_wide_pane_t1_ParamLimits

0x2745,	// (0x000135b8) bg_status_flat_pane

0x0694,	// (0x00011507) title_pane_t1_ParamLimits

0x06fc,	// (0x0001156f) title_pane_t2_ParamLimits

0x0722,	// (0x00011595) title_pane_t3_ParamLimits

0xf55d,	// (0x000203d0) title_pane_t_ParamLimits

0x1c35,	// (0x00012aa8) level_1_signal_ParamLimits

0x1c42,	// (0x00012ab5) level_2_signal_ParamLimits

0x1c4f,	// (0x00012ac2) level_3_signal_ParamLimits

0x1c5c,	// (0x00012acf) level_4_signal_ParamLimits

0x1c69,	// (0x00012adc) level_5_signal_ParamLimits

0x1c76,	// (0x00012ae9) level_6_signal_ParamLimits

0x1c83,	// (0x00012af6) level_7_signal_ParamLimits

0x1c35,	// (0x00012aa8) level_1_battery_ParamLimits

0x1c42,	// (0x00012ab5) level_2_battery_ParamLimits

0x1c4f,	// (0x00012ac2) level_3_battery_ParamLimits

0x1c5c,	// (0x00012acf) level_4_battery_ParamLimits

0x1c69,	// (0x00012adc) level_5_battery_ParamLimits

0x1c76,	// (0x00012ae9) level_6_battery_ParamLimits

0x1c83,	// (0x00012af6) level_7_battery_ParamLimits

0x34aa,	// (0x0001431d) bg_status_flat_pane_g1

0x34b2,	// (0x00014325) bg_status_flat_pane_g2

0x34ba,	// (0x0001432d) bg_status_flat_pane_g3

0x34c2,	// (0x00014335) bg_status_flat_pane_g4

0x34ca,	// (0x0001433d) bg_status_flat_pane_g5

0x34d2,	// (0x00014345) bg_status_flat_pane_g6

0x34da,	// (0x0001434d) bg_status_flat_pane_g7

0x074a,	// (0x000115bd) tabs_3_active_pane_t1_ParamLimits

0x074a,	// (0x000115bd) tabs_3_passive_pane_t1_ParamLimits

0x0764,	// (0x000115d7) tabs_4_active_pane_t1_ParamLimits

0x0764,	// (0x000115d7) tabs_4_1_passive_pane_t1_ParamLimits

0x17ff,	// (0x00012672) tabs_2_active_pane_t1_ParamLimits

0x17ff,	// (0x00012672) tabs_2_passive_pane_t1_ParamLimits

0x1811,	// (0x00012684) bg_active_tab_pane_cp4_ParamLimits

0x181f,	// (0x00012692) tabs_2_long_active_pane_t1_ParamLimits

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp4_ParamLimits

0xe13d,	// (0x0001efb0) list_single_midp_graphic_pane_t1_ParamLimits

0x1811,	// (0x00012684) bg_active_tab_pane_cp5_ParamLimits

0x183e,	// (0x000126b1) tabs_3_long_active_pane_t1_ParamLimits

0x1832,	// (0x000126a5) bg_passive_tab_pane_cp5_ParamLimits

0xe13d,	// (0x0001efb0) list_single_midp_graphic_pane_t1

0x2745,	// (0x000135b8) bg_status_flat_pane_ParamLimits

0x2808,	// (0x0001367b) indicator_pane_cp2_ParamLimits

0x2808,	// (0x0001367b) indicator_pane_cp2

0x2933,	// (0x000137a6) navi_pane_srt_ParamLimits

0x2933,	// (0x000137a6) navi_pane_srt

0x2957,	// (0x000137ca) popup_clock_digital_analogue_window_cp1

0x082b,	// (0x0001169e) indicator_pane_t1

0x2326,	// (0x00013199) copy_highlight_pane

0x2326,	// (0x00013199) cursor_graphics_pane

0x2326,	// (0x00013199) graphic_within_text_pane

0x2326,	// (0x00013199) link_highlight_pane

0x3cb9,	// (0x00014b2c) popup_preview_text_window_t5_ParamLimits

0x3cb9,	// (0x00014b2c) popup_preview_text_window_t5

0x244a,	// (0x000132bd) cursor_digital_pane

0x244a,	// (0x000132bd) cursor_primary_pane

0x245b,	// (0x000132ce) cursor_primary_small_pane

0x2463,	// (0x000132d6) cursor_secondary_pane

0x246b,	// (0x000132de) cursor_title_pane

0x244a,	// (0x000132bd) link_highlight_digital_pane

0x2452,	// (0x000132c5) link_highlight_primary_pane

0x245b,	// (0x000132ce) link_highlight_primary_small_pane

0x2463,	// (0x000132d6) link_highlight_secondary_pane

0x246b,	// (0x000132de) link_highlight_title_pane

0x244a,	// (0x000132bd) copy_highlight_digital_pane

0x244a,	// (0x000132bd) copy_highlight_primary_pane

0x245b,	// (0x000132ce) copy_highlight_primary_small_pane

0x2463,	// (0x000132d6) copy_highlight_secondary_pane

0x246b,	// (0x000132de) copy_highlight_title_pane

0x2463,	// (0x000132d6) graphic_text_digital_pane

0x3548,	// (0x000143bb) graphic_text_primary_pane

0x3551,	// (0x000143c4) graphic_text_primary_small_pane

0x245b,	// (0x000132ce) graphic_text_secondary_pane

0x244a,	// (0x000132bd) graphic_text_title_pane

0x2473,	// (0x000132e6) cursor_primary_pane_g1

0x353a,	// (0x000143ad) cursor_text_primary_t1

0x3522,	// (0x00014395) cursor_primary_small_pane_g1

0x352c,	// (0x0001439f) cursor_text_primary_small_t1

0x350a,	// (0x0001437d) cursor_primary_small_pane_g1_copy1

0x3514,	// (0x00014387) cursor_text_primary_small_t1_copy1

0x34f2,	// (0x00014365) cursor_text_title_t1

0x3500,	// (0x00014373) cursor_title_pane_g1

0x2473,	// (0x000132e6) cursor_digital_pane_g1

0x247d,	// (0x000132f0) cursor_text_digital_t1

0x3493,	// (0x00014306) link_highlight_primary_pane_g1

0x349b,	// (0x0001430e) link_highlight_primary_pane_t1

0x248b,	// (0x000132fe) link_highlight_primary_small_pane_g1

0x2493,	// (0x00013306) link_highlight_primary_small_pane_t1

0x248b,	// (0x000132fe) link_highlight_secondary_pane_g1

0x24a2,	// (0x00013315) link_highlight_secondary_pane_t1

0x3407,	// (0x0001427a) link_highlight_title_pane_g1

0x340f,	// (0x00014282) link_highlight_title_pane_t1

0x33f0,	// (0x00014263) link_highlight_digital_pane_g1

0x33f8,	// (0x0001426b) link_highlight_digital_pane_t1

0x32c8,	// (0x0001413b) copy_highlight_primary_pane_g1

0x32d0,	// (0x00014143) copy_highlight_primary_pane_t1

0x32a2,	// (0x00014115) copy_highlight_primary_small_pane_g1

0x32b9,	// (0x0001412c) copy_highlight_primary_small_pane_t1

0x24b1,	// (0x00013324) copy_highlight_secondary_pane_g1

0x24b9,	// (0x0001332c) copy_highlight_secondary_pane_t1

0x32a2,	// (0x00014115) copy_highlight_title_pane_g1

0x32aa,	// (0x0001411d) copy_highlight_title_pane_t1

0x32c8,	// (0x0001413b) copy_highlight_digital_pane_g1

0x4661,	// (0x000154d4) copy_highlight_digital_pane_t1

0x45b5,	// (0x00015428) graphic_text_primary_pane_g1

0x4645,	// (0x000154b8) graphic_text_primary_pane_t1

0x4653,	// (0x000154c6) graphic_text_primary_pane_t2

0x0001,

0xf9cd,	// (0x00020840) graphic_text_primary_pane_t

0x4621,	// (0x00015494) graphic_text_primary_small_pane_g1

0x4629,	// (0x0001549c) graphic_text_primary_small_pane_t1

0x4637,	// (0x000154aa) graphic_text_primary_small_pane_t2

0x0001,

0xf9c8,	// (0x0002083b) graphic_text_primary_small_pane_t

0x45fd,	// (0x00015470) graphic_text_secondary_pane_g1

0x4605,	// (0x00015478) graphic_text_secondary_pane_t1

0x4613,	// (0x00015486) graphic_text_secondary_pane_t2

0x0001,

0xf9c3,	// (0x00020836) graphic_text_secondary_pane_t

0x45d9,	// (0x0001544c) graphic_text_title_pane_g1

0x45e1,	// (0x00015454) graphic_text_title_pane_t1

0x45ef,	// (0x00015462) graphic_text_title_pane_t2

0x0001,

0xf9be,	// (0x00020831) graphic_text_title_pane_t

0x45b5,	// (0x00015428) graphic_text_digital_pane_g1

0x45bd,	// (0x00015430) graphic_text_digital_pane_t1

0x45cb,	// (0x0001543e) graphic_text_digital_pane_t2

0x0001,

0xf9b9,	// (0x0002082c) graphic_text_digital_pane_t

0x0734,	// (0x000115a7) navi_icon_pane_srt_ParamLimits

0x0734,	// (0x000115a7) navi_icon_pane_srt

0x0654,	// (0x000114c7) navi_midp_pane_srt

0x0654,	// (0x000114c7) navi_navi_pane_srt

0x0734,	// (0x000115a7) navi_text_pane_srt_ParamLimits

0x0734,	// (0x000115a7) navi_text_pane_srt

0x4580,	// (0x000153f3) navi_navi_icon_text_pane_srt

0x459a,	// (0x0001540d) navi_navi_pane_srt_g1_ParamLimits

0x459a,	// (0x0001540d) navi_navi_pane_srt_g1

0x4588,	// (0x000153fb) navi_navi_pane_srt_g2_ParamLimits

0x4588,	// (0x000153fb) navi_navi_pane_srt_g2

0x0001,

0xf9b4,	// (0x00020827) navi_navi_pane_srt_g_ParamLimits

0xf9b4,	// (0x00020827) navi_navi_pane_srt_g

0x45ac,	// (0x0001541f) navi_navi_tabs_pane_srt

0x4580,	// (0x000153f3) navi_navi_text_pane_srt

0x4580,	// (0x000153f3) navi_navi_volume_pane_srt

0x4571,	// (0x000153e4) navi_navi_text_pane_srt_t1

0xe46f,	// (0x0001f2e2) navi_navi_volume_pane_srt_g1

0xe477,	// (0x0001f2ea) volume_small_pane_srt_ParamLimits

0xe477,	// (0x0001f2ea) volume_small_pane_srt

0xd91e,	// (0x0001e791) volume_small_pane_srt_g1_ParamLimits

0xd91e,	// (0x0001e791) volume_small_pane_srt_g1

0xd92e,	// (0x0001e7a1) volume_small_pane_srt_g2_ParamLimits

0xd92e,	// (0x0001e7a1) volume_small_pane_srt_g2

0xd93f,	// (0x0001e7b2) volume_small_pane_srt_g3_ParamLimits

0xd93f,	// (0x0001e7b2) volume_small_pane_srt_g3

0xd950,	// (0x0001e7c3) volume_small_pane_srt_g4_ParamLimits

0xd950,	// (0x0001e7c3) volume_small_pane_srt_g4

0xd961,	// (0x0001e7d4) volume_small_pane_srt_g5_ParamLimits

0xd961,	// (0x0001e7d4) volume_small_pane_srt_g5

0xd972,	// (0x0001e7e5) volume_small_pane_srt_g6_ParamLimits

0xd972,	// (0x0001e7e5) volume_small_pane_srt_g6

0xd983,	// (0x0001e7f6) volume_small_pane_srt_g7_ParamLimits

0xd983,	// (0x0001e7f6) volume_small_pane_srt_g7

0xd994,	// (0x0001e807) volume_small_pane_srt_g8_ParamLimits

0xd994,	// (0x0001e807) volume_small_pane_srt_g8

0xd9a5,	// (0x0001e818) volume_small_pane_srt_g9_ParamLimits

0xd9a5,	// (0x0001e818) volume_small_pane_srt_g9

0xd9b6,	// (0x0001e829) volume_small_pane_srt_g10_ParamLimits

0xd9b6,	// (0x0001e829) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x000205d6) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x000205d6) volume_small_pane_srt_g

0x0b1c,	// (0x0001198f) query_popup_data_pane_cp2

0x4557,	// (0x000153ca) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4557,	// (0x000153ca) navi_navi_icon_text_pane_srt_t1

0x3548,	// (0x000143bb) navi_tabs_2_long_pane_srt

0x3548,	// (0x000143bb) navi_tabs_2_pane_srt

0x3548,	// (0x000143bb) navi_tabs_3_long_pane_srt

0x3548,	// (0x000143bb) navi_tabs_3_pane_srt

0x3548,	// (0x000143bb) navi_tabs_4_pane_srt

0xe44f,	// (0x0001f2c2) tabs_2_active_pane_srt_ParamLimits

0xe44f,	// (0x0001f2c2) tabs_2_active_pane_srt

0xe45f,	// (0x0001f2d2) tabs_2_passive_pane_srt_ParamLimits

0xe45f,	// (0x0001f2d2) tabs_2_passive_pane_srt

0x266a,	// (0x000134dd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x266a,	// (0x000134dd) bg_passive_tab_pane_cp1_srt

0x452c,	// (0x0001539f) bg_passive_tab_pane_g1_cp1_srt

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp1_srt

0x4523,	// (0x00015396) bg_passive_tab_pane_g3_cp1_srt

0x0734,	// (0x000115a7) bg_active_tab_pane_cp1_srt_ParamLimits

0x0734,	// (0x000115a7) bg_active_tab_pane_cp1_srt

0x4535,	// (0x000153a8) tabs_2_active_pane_srt_g1

0x453d,	// (0x000153b0) tabs_2_active_pane_srt_t1_ParamLimits

0x453d,	// (0x000153b0) tabs_2_active_pane_srt_t1

0x452c,	// (0x0001539f) bg_active_tab_pane_g1_cp1_srt

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp1_srt

0x4523,	// (0x00015396) bg_active_tab_pane_g3_cp1_srt

0xe41c,	// (0x0001f28f) tabs_3_active_pane_srt_ParamLimits

0xe41c,	// (0x0001f28f) tabs_3_active_pane_srt

0xe42d,	// (0x0001f2a0) tabs_3_passive_pane_cp_srt_ParamLimits

0xe42d,	// (0x0001f2a0) tabs_3_passive_pane_cp_srt

0xe43e,	// (0x0001f2b1) tabs_3_passive_pane_srt_ParamLimits

0xe43e,	// (0x0001f2b1) tabs_3_passive_pane_srt

0x266a,	// (0x000134dd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x266a,	// (0x000134dd) bg_passive_tab_pane_cp2_srt

0x24d1,	// (0x00013344) bg_passive_tab_pane_g1_cp2_srt

0x1f80,	// (0x00012df3) bg_passive_tab_pane_g2_cp2_srt

0x24c8,	// (0x0001333b) bg_passive_tab_pane_g3_cp2_srt

0x0734,	// (0x000115a7) bg_active_tab_pane_cp2_srt_ParamLimits

0x0734,	// (0x000115a7) bg_active_tab_pane_cp2_srt

0x4509,	// (0x0001537c) tabs_3_active_pane_srt_g1

0x4511,	// (0x00015384) tabs_3_active_pane_srt_t1_ParamLimits

0x4511,	// (0x00015384) tabs_3_active_pane_srt_t1

0x24d1,	// (0x00013344) bg_active_tab_pane_g1_cp2_srt

0x1f80,	// (0x00012df3) bg_active_tab_pane_g2_cp2_srt

0x24c8,	// (0x0001333b) bg_active_tab_pane_g3_cp2_srt

0xe3d4,	// (0x0001f247) tabs_4_active_pane_srt_ParamLimits

0xe3d4,	// (0x0001f247) tabs_4_active_pane_srt

0xe3e6,	// (0x0001f259) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe3e6,	// (0x0001f259) tabs_4_passive_pane_cp2_srt

0xdb19,	// (0x0001e98c) aid_size_cell_toolbar

0x1832,	// (0x000126a5) main_idle_act_pane_ParamLimits

0xdcb2,	// (0x0001eb25) popup_large_graphic_colour_window_ParamLimits

0xe017,	// (0x0001ee8a) popup_toolbar_window_ParamLimits

0xe017,	// (0x0001ee8a) popup_toolbar_window

0x426e,	// (0x000150e1) list_single_graphic_2heading_pane_ParamLimits

0x426e,	// (0x000150e1) list_single_graphic_2heading_pane

0x19eb,	// (0x0001285e) aid_size_cell_apps_grid_lsc_pane

0x19fd,	// (0x00012870) aid_size_cell_apps_grid_prt_pane

0x266a,	// (0x000134dd) bg_wml_button_pane_cp1_ParamLimits

0x266a,	// (0x000134dd) bg_wml_button_pane_cp1

0x2f01,	// (0x00013d74) form_midp_field_text_pane_t1_ParamLimits

0x2caa,	// (0x00013b1d) input_focus_pane_cp050_ParamLimits

0x2f3c,	// (0x00013daf) list_midp_form_text_pane_ParamLimits

0x2ede,	// (0x00013d51) input_focus_pane_cp051_ParamLimits

0x2ef2,	// (0x00013d65) list_midp_choice_pane_ParamLimits

0x2d60,	// (0x00013bd3) list_single_2graphic_pane_cp3_ParamLimits

0x2d60,	// (0x00013bd3) list_single_2graphic_pane_cp3

0x2d8b,	// (0x00013bfe) list_single_midp_graphic_pane_ParamLimits

0x2d8b,	// (0x00013bfe) list_single_midp_graphic_pane

0xc797,	// (0x0001d60a) list_single_graphic_2heading_pane_g1_ParamLimits

0xc797,	// (0x0001d60a) list_single_graphic_2heading_pane_g1

0xc0cd,	// (0x0001cf40) list_single_graphic_2heading_pane_g4_ParamLimits

0xc0cd,	// (0x0001cf40) list_single_graphic_2heading_pane_g4

0xc0d9,	// (0x0001cf4c) list_single_graphic_2heading_pane_g5_ParamLimits

0xc0d9,	// (0x0001cf4c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00020629) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00020629) list_single_graphic_2heading_pane_g

0xc7a3,	// (0x0001d616) list_single_graphic_2heading_pane_t1_ParamLimits

0xc7a3,	// (0x0001d616) list_single_graphic_2heading_pane_t1

0xc7b7,	// (0x0001d62a) list_single_graphic_2heading_pane_t2_ParamLimits

0xc7b7,	// (0x0001d62a) list_single_graphic_2heading_pane_t2

0xc7d1,	// (0x0001d644) list_single_graphic_2heading_pane_t3_ParamLimits

0xc7d1,	// (0x0001d644) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00020630) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00020630) list_single_graphic_2heading_pane_t

0x2aae,	// (0x00013921) bg_popup_sub_pane_cp2

0x2ad8,	// (0x0001394b) grid_toobar_pane

0xe0c2,	// (0x0001ef35) cell_toolbar_pane_ParamLimits

0xe0c2,	// (0x0001ef35) cell_toolbar_pane

0x2b2a,	// (0x0001399d) cell_toolbar_pane_g1_ParamLimits

0x2b2a,	// (0x0001399d) cell_toolbar_pane_g1

0x2b3e,	// (0x000139b1) cell_toolbar_pane_g2_ParamLimits

0x2b3e,	// (0x000139b1) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x00020637) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x00020637) cell_toolbar_pane_g

0x2b60,	// (0x000139d3) grid_highlight_pane_cp2_ParamLimits

0x2b60,	// (0x000139d3) grid_highlight_pane_cp2

0x2b7a,	// (0x000139ed) toolbar_button_pane

0x2b86,	// (0x000139f9) toolbar_button_pane_g1

0x2b96,	// (0x00013a09) toolbar_button_pane_g2

0x2b8e,	// (0x00013a01) toolbar_button_pane_g3

0x2ba6,	// (0x00013a19) toolbar_button_pane_g4

0x2b9e,	// (0x00013a11) toolbar_button_pane_g5

0x2bae,	// (0x00013a21) toolbar_button_pane_g6

0x2bb6,	// (0x00013a29) toolbar_button_pane_g7

0x2bc6,	// (0x00013a39) toolbar_button_pane_g8

0x2bbe,	// (0x00013a31) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x0002063c) toolbar_button_pane_g

0xe0fa,	// (0x0001ef6d) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe0fa,	// (0x0001ef6d) list_single_2graphic_pane_g1_cp3

0xe106,	// (0x0001ef79) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe106,	// (0x0001ef79) list_single_2graphic_pane_g2_cp3

0x2162,	// (0x00012fd5) list_single_2graphic_pane_g3_cp3

0xe117,	// (0x0001ef8a) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe117,	// (0x0001ef8a) list_single_2graphic_pane_g4_cp3

0xe123,	// (0x0001ef96) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe123,	// (0x0001ef96) list_single_2graphic_pane_t1_cp3

0x2156,	// (0x00012fc9) list_single_midp_graphic_pane_g2_ParamLimits

0x2156,	// (0x00012fc9) list_single_midp_graphic_pane_g2

0xdb21,	// (0x0001e994) aid_zoom_text_primary

0xc76b,	// (0x0001d5de) aid_zoom_text_secondary

0x2585,	// (0x000133f8) status_small_pane_g7_ParamLimits

0x2585,	// (0x000133f8) status_small_pane_g7

0x25a8,	// (0x0001341b) status_small_pane_t1_ParamLimits

0x066b,	// (0x000114de) title_pane_g2

0x0003,

0xf554,	// (0x000203c7) title_pane_g

0x0bbd,	// (0x00011a30) aid_size_cell_colour_1_pane_ParamLimits

0x0bbd,	// (0x00011a30) aid_size_cell_colour_1_pane

0x0bd1,	// (0x00011a44) aid_size_cell_colour_2_pane_ParamLimits

0x0bd1,	// (0x00011a44) aid_size_cell_colour_2_pane

0x0be5,	// (0x00011a58) aid_size_cell_colour_3_pane_ParamLimits

0x0be5,	// (0x00011a58) aid_size_cell_colour_3_pane

0x0bf9,	// (0x00011a6c) aid_size_cell_colour_4_pane_ParamLimits

0x0bf9,	// (0x00011a6c) aid_size_cell_colour_4_pane

0xd583,	// (0x0001e3f6) title_pane_stacon_g1_ParamLimits

0xd583,	// (0x0001e3f6) title_pane_stacon_g1

0x3327,	// (0x0001419a) popup_note_wait_window_g3_ParamLimits

0x3327,	// (0x0001419a) popup_note_wait_window_g3

0x339d,	// (0x00014210) popup_note_wait_window_t5_ParamLimits

0x339d,	// (0x00014210) popup_note_wait_window_t5

0x0654,	// (0x000114c7) main_feb_china_hwr_fs_writing_pane

0xdb9b,	// (0x0001ea0e) popup_feb_china_hwr_fs_window_ParamLimits

0xdb9b,	// (0x0001ea0e) popup_feb_china_hwr_fs_window

0xe153,	// (0x0001efc6) aid_size_cell_hwr_fs_ParamLimits

0xe153,	// (0x0001efc6) aid_size_cell_hwr_fs

0x2caa,	// (0x00013b1d) bg_popup_sub_pane_cp3_ParamLimits

0x2caa,	// (0x00013b1d) bg_popup_sub_pane_cp3

0xe168,	// (0x0001efdb) grid_hwr_fs_pane_ParamLimits

0xe168,	// (0x0001efdb) grid_hwr_fs_pane

0xe180,	// (0x0001eff3) linegrid_hwr_fs_pane_ParamLimits

0xe180,	// (0x0001eff3) linegrid_hwr_fs_pane

0xe190,	// (0x0001f003) cell_hwr_fs_pane_ParamLimits

0xe190,	// (0x0001f003) cell_hwr_fs_pane

0x2cb6,	// (0x00013b29) linegrid_hwr_fs_pane_g1_ParamLimits

0x2cb6,	// (0x00013b29) linegrid_hwr_fs_pane_g1

0x2cc2,	// (0x00013b35) linegrid_hwr_fs_pane_g2_ParamLimits

0x2cc2,	// (0x00013b35) linegrid_hwr_fs_pane_g2

0x2cd4,	// (0x00013b47) linegrid_hwr_fs_pane_g3_ParamLimits

0x2cd4,	// (0x00013b47) linegrid_hwr_fs_pane_g3

0xe1b2,	// (0x0001f025) linegrid_hwr_fs_pane_g4_ParamLimits

0xe1b2,	// (0x0001f025) linegrid_hwr_fs_pane_g4

0xe1cc,	// (0x0001f03f) linegrid_hwr_fs_pane_g5_ParamLimits

0xe1cc,	// (0x0001f03f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f4,	// (0x00020667) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x00020667) linegrid_hwr_fs_pane_g

0x2ce0,	// (0x00013b53) cell_hwr_fs_pane_g1_ParamLimits

0x2ce0,	// (0x00013b53) cell_hwr_fs_pane_g1

0x29e5,	// (0x00013858) cell_hwr_fs_pane_g2_ParamLimits

0x29e5,	// (0x00013858) cell_hwr_fs_pane_g2

0x2cf6,	// (0x00013b69) cell_hwr_fs_pane_g3_ParamLimits

0x2cf6,	// (0x00013b69) cell_hwr_fs_pane_g3

0x2d03,	// (0x00013b76) cell_hwr_fs_pane_g4_ParamLimits

0x2d03,	// (0x00013b76) cell_hwr_fs_pane_g4

0x0003,

0xf7ff,	// (0x00020672) cell_hwr_fs_pane_g_ParamLimits

0xf7ff,	// (0x00020672) cell_hwr_fs_pane_g

0xe1e2,	// (0x0001f055) cell_hwr_fs_pane_t1

0x0654,	// (0x000114c7) grid_highlight_pane_cp6

0x0654,	// (0x000114c7) main_idle_act2_pane

0x17a5,	// (0x00012618) aid_inside_area_popup_secondary

0x39dc,	// (0x0001484f) aid_inside_area_window_primary_ParamLimits

0x39dc,	// (0x0001484f) aid_inside_area_window_primary

0x4670,	// (0x000154e3) ai2_news_ticker_pane

0x4678,	// (0x000154eb) aid_size_cell_ai1_link_ParamLimits

0x4678,	// (0x000154eb) aid_size_cell_ai1_link

0x4692,	// (0x00015505) popup_ai2_data_window_ParamLimits

0x4692,	// (0x00015505) popup_ai2_data_window

0x46a6,	// (0x00015519) popup_ai2_link_window_ParamLimits

0x46a6,	// (0x00015519) popup_ai2_link_window

0x2caa,	// (0x00013b1d) bg_popup_sub_pane_cp4_ParamLimits

0x2caa,	// (0x00013b1d) bg_popup_sub_pane_cp4

0x46ba,	// (0x0001552d) grid_ai2_link_pane_ParamLimits

0x46ba,	// (0x0001552d) grid_ai2_link_pane

0x46d1,	// (0x00015544) popup_ai2_link_window_g1_ParamLimits

0x46d1,	// (0x00015544) popup_ai2_link_window_g1

0x46dd,	// (0x00015550) popup_ai2_link_window_g2_ParamLimits

0x46dd,	// (0x00015550) popup_ai2_link_window_g2

0x0001,

0xf9d2,	// (0x00020845) popup_ai2_link_window_g_ParamLimits

0xf9d2,	// (0x00020845) popup_ai2_link_window_g

0x46ec,	// (0x0001555f) ai2_mp_button_pane

0x46f4,	// (0x00015567) ai2_mp_volume_pane

0x2ede,	// (0x00013d51) bg_popup_sub_pane_cp5_ParamLimits

0x2ede,	// (0x00013d51) bg_popup_sub_pane_cp5

0x46fc,	// (0x0001556f) heading_ai2_gene_pane_ParamLimits

0x46fc,	// (0x0001556f) heading_ai2_gene_pane

0x4708,	// (0x0001557b) list_ai2_gene_pane_ParamLimits

0x4708,	// (0x0001557b) list_ai2_gene_pane

0x4750,	// (0x000155c3) cell_ai2_link_pane_ParamLimits

0x4750,	// (0x000155c3) cell_ai2_link_pane

0x4766,	// (0x000155d9) cell_ai2_link_pane_g1

0x0654,	// (0x000114c7) grid_highlight_pane_cp7

0xe48c,	// (0x0001f2ff) ai2_mp_volume_pane_g1

0x483f,	// (0x000156b2) ai2_mp_volume_pane_g2

0x47ac,	// (0x0001561f) list_ai2_gene_pane_t1

0x4837,	// (0x000156aa) ai2_mp_volume_pane_g3

0x0002,

0xf9eb,	// (0x0002085e) ai2_mp_volume_pane_g

0xe494,	// (0x0001f307) volume_small_pane_cp3

0x4847,	// (0x000156ba) aid_size_cell_ai2_button

0x484f,	// (0x000156c2) grid_ai2_button_pane

0x4858,	// (0x000156cb) cell_ai2_button_pane_ParamLimits

0x4858,	// (0x000156cb) cell_ai2_button_pane

0x064a,	// (0x000114bd) cell_ai2_button_pane_g1

0x0654,	// (0x000114c7) grid_highlight_pane_cp8

0x47f7,	// (0x0001566a) ai2_gene_pane_t1_ParamLimits

0x47f7,	// (0x0001566a) ai2_gene_pane_t1

0xdb0f,	// (0x0001e982) aid_height_parent_landscape

0x405a,	// (0x00014ecd) aid_height_set_list

0x406b,	// (0x00014ede) aid_size_parent

0x4455,	// (0x000152c8) aid_size_cell_graphic_pane_ParamLimits

0x4718,	// (0x0001558b) popup_ai2_data_window_g1_ParamLimits

0x4718,	// (0x0001558b) popup_ai2_data_window_g1

0x4724,	// (0x00015597) ai2_news_ticker_pane_g1

0x472c,	// (0x0001559f) ai2_news_ticker_pane_g2

0x0001,

0xf9d7,	// (0x0002084a) ai2_news_ticker_pane_g

0x4734,	// (0x000155a7) ai2_news_ticker_pane_t1

0x4742,	// (0x000155b5) ai2_news_ticker_pane_t2

0x0001,

0xf9dc,	// (0x0002084f) ai2_news_ticker_pane_t

0x476f,	// (0x000155e2) heading_ai2_gene_pane_g1

0x4777,	// (0x000155ea) heading_ai2_gene_pane_t1_ParamLimits

0x4777,	// (0x000155ea) heading_ai2_gene_pane_t1

0x478c,	// (0x000155ff) list_highlight_pane_cp6

0x4794,	// (0x00015607) ai2_gene_pane_ParamLimits

0x4794,	// (0x00015607) ai2_gene_pane

0x47ba,	// (0x0001562d) list_ai2_gene_pane_t2

0x0001,

0xf9e1,	// (0x00020854) list_ai2_gene_pane_t

0x47c8,	// (0x0001563b) list_highlight_pane_cp8_ParamLimits

0x47c8,	// (0x0001563b) list_highlight_pane_cp8

0x47d9,	// (0x0001564c) ai2_gene_pane_g1_ParamLimits

0x47d9,	// (0x0001564c) ai2_gene_pane_g1

0x47eb,	// (0x0001565e) ai2_gene_pane_g2_ParamLimits

0x47eb,	// (0x0001565e) ai2_gene_pane_g2

0x0001,

0xf9e6,	// (0x00020859) ai2_gene_pane_g_ParamLimits

0xf9e6,	// (0x00020859) ai2_gene_pane_g

0x0f3b,	// (0x00011dae) scroll_pane_cp12

0xdace,	// (0x0001e941) control_pane_t3_ParamLimits

0xdace,	// (0x0001e941) control_pane_t3

0x2599,	// (0x0001340c) status_small_pane_g8_ParamLimits

0x2599,	// (0x0001340c) status_small_pane_g8

0xdc7d,	// (0x0001eaf0) popup_find_window_ParamLimits

0xde92,	// (0x0001ed05) popup_note_image_window_ParamLimits

0xc797,	// (0x0001d60a) list_double2_graphic_pane_vc_g1_ParamLimits

0xc797,	// (0x0001d60a) list_double2_graphic_pane_vc_g1

0xc0cd,	// (0x0001cf40) list_double2_graphic_pane_vc_g2_ParamLimits

0xc0cd,	// (0x0001cf40) list_double2_graphic_pane_vc_g2

0xc0d9,	// (0x0001cf4c) list_double2_graphic_pane_vc_g3_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x00020629) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x00020629) list_double2_graphic_pane_vc_g

0xc7e9,	// (0x0001d65c) list_double2_graphic_pane_vc_t1_ParamLimits

0xc7e9,	// (0x0001d65c) list_double2_graphic_pane_vc_t1

0xc0cd,	// (0x0001cf40) list_single_heading_pane_vc_g1_ParamLimits

0xc0cd,	// (0x0001cf40) list_single_heading_pane_vc_g1

0xc0d9,	// (0x0001cf4c) list_single_heading_pane_vc_g2_ParamLimits

0xc0d9,	// (0x0001cf4c) list_single_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x00020651) list_single_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x00020651) list_single_heading_pane_vc_g

0xc7ff,	// (0x0001d672) list_single_heading_pane_vc_t1_ParamLimits

0xc7ff,	// (0x0001d672) list_single_heading_pane_vc_t1

0xc815,	// (0x0001d688) list_single_heading_pane_vc_t2_ParamLimits

0xc815,	// (0x0001d688) list_single_heading_pane_vc_t2

0x0001,

0xf7e3,	// (0x00020656) list_single_heading_pane_vc_t_ParamLimits

0xf7e3,	// (0x00020656) list_single_heading_pane_vc_t

0xc831,	// (0x0001d6a4) list_setting_number_pane_vc_g1_ParamLimits

0xc831,	// (0x0001d6a4) list_setting_number_pane_vc_g1

0xc83d,	// (0x0001d6b0) list_setting_number_pane_vc_g2_ParamLimits

0xc83d,	// (0x0001d6b0) list_setting_number_pane_vc_g2

0x0001,

0xf7e8,	// (0x0002065b) list_setting_number_pane_vc_g_ParamLimits

0xf7e8,	// (0x0002065b) list_setting_number_pane_vc_g

0xc849,	// (0x0001d6bc) list_setting_number_pane_vc_t1_ParamLimits

0xc849,	// (0x0001d6bc) list_setting_number_pane_vc_t1

0xc85d,	// (0x0001d6d0) list_setting_number_pane_vc_t2_ParamLimits

0xc85d,	// (0x0001d6d0) list_setting_number_pane_vc_t2

0xc877,	// (0x0001d6ea) list_setting_number_pane_vc_t3_ParamLimits

0xc877,	// (0x0001d6ea) list_setting_number_pane_vc_t3

0x0002,

0xf7ed,	// (0x00020660) list_setting_number_pane_vc_t_ParamLimits

0xf7ed,	// (0x00020660) list_setting_number_pane_vc_t

0xc891,	// (0x0001d704) set_value_pane_vc_ParamLimits

0xc891,	// (0x0001d704) set_value_pane_vc

0x426e,	// (0x000150e1) list_double2_graphic_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double2_graphic_pane_vc

0x426e,	// (0x000150e1) list_double2_large_graphic_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double2_large_graphic_pane_vc

0x426e,	// (0x000150e1) list_double2_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double2_pane_vc

0x426e,	// (0x000150e1) list_double_graphic_heading_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double_graphic_heading_pane_vc

0x426e,	// (0x000150e1) list_double_graphic_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double_graphic_pane_vc

0x426e,	// (0x000150e1) list_double_heading_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double_heading_pane_vc

0x426e,	// (0x000150e1) list_double_large_graphic_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double_large_graphic_pane_vc

0x426e,	// (0x000150e1) list_double_number_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double_number_pane_vc

0x426e,	// (0x000150e1) list_double_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double_pane_vc

0x426e,	// (0x000150e1) list_double_time_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_double_time_pane_vc

0x426e,	// (0x000150e1) list_setting_number_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_setting_number_pane_vc

0x426e,	// (0x000150e1) list_setting_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_setting_pane_vc

0x426e,	// (0x000150e1) list_single_graphic_heading_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_single_graphic_heading_pane_vc

0x426e,	// (0x000150e1) list_single_heading_pane_vc_ParamLimits

0x426e,	// (0x000150e1) list_single_heading_pane_vc

0xc975,	// (0x0001d7e8) list_single_number_heading_pane_vc_ParamLimits

0xc975,	// (0x0001d7e8) list_single_number_heading_pane_vc

0xca47,	// (0x0001d8ba) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xca47,	// (0x0001d8ba) list_double_graphic_heading_pane_vc_g1

0xc0cd,	// (0x0001cf40) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc0cd,	// (0x0001cf40) list_double_graphic_heading_pane_vc_g2

0xc0d9,	// (0x0001cf4c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f2,	// (0x00020865) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f2,	// (0x00020865) list_double_graphic_heading_pane_vc_g

0xca53,	// (0x0001d8c6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xca53,	// (0x0001d8c6) list_double_graphic_heading_pane_vc_t1

0xca6f,	// (0x0001d8e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xca6f,	// (0x0001d8e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0002086c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0002086c) list_double_graphic_heading_pane_vc_t

0xc831,	// (0x0001d6a4) list_setting_pane_vc_g1_ParamLimits

0xc831,	// (0x0001d6a4) list_setting_pane_vc_g1

0xc83d,	// (0x0001d6b0) list_setting_pane_vc_g2_ParamLimits

0xc83d,	// (0x0001d6b0) list_setting_pane_vc_g2

0x0001,

0xf7e8,	// (0x0002065b) list_setting_pane_vc_g_ParamLimits

0xf7e8,	// (0x0002065b) list_setting_pane_vc_g

0xca87,	// (0x0001d8fa) list_setting_pane_vc_t1_ParamLimits

0xca87,	// (0x0001d8fa) list_setting_pane_vc_t1

0xcaa1,	// (0x0001d914) list_setting_pane_vc_t2_ParamLimits

0xcaa1,	// (0x0001d914) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x000208af) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x000208af) list_setting_pane_vc_t

0xc891,	// (0x0001d704) set_value_pane_cp_vc_ParamLimits

0xc891,	// (0x0001d704) set_value_pane_cp_vc

0xc0cd,	// (0x0001cf40) list_single_number_heading_pane_vc_g1_ParamLimits

0xc0cd,	// (0x0001cf40) list_single_number_heading_pane_vc_g1

0xc0d9,	// (0x0001cf4c) list_single_number_heading_pane_vc_g2_ParamLimits

0xc0d9,	// (0x0001cf4c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x00020651) list_single_number_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x00020651) list_single_number_heading_pane_vc_g

0xc7ff,	// (0x0001d672) list_single_number_heading_pane_vc_t1_ParamLimits

0xc7ff,	// (0x0001d672) list_single_number_heading_pane_vc_t1

0xcab9,	// (0x0001d92c) list_single_number_heading_pane_vc_t2_ParamLimits

0xcab9,	// (0x0001d92c) list_single_number_heading_pane_vc_t2

0xcacd,	// (0x0001d940) list_single_number_heading_pane_vc_t3_ParamLimits

0xcacd,	// (0x0001d940) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x000208b4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x000208b4) list_single_number_heading_pane_vc_t

0xc797,	// (0x0001d60a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc797,	// (0x0001d60a) list_single_graphic_heading_pane_vc_g1

0xc0cd,	// (0x0001cf40) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc0cd,	// (0x0001cf40) list_single_graphic_heading_pane_vc_g4

0xc0d9,	// (0x0001cf4c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc0d9,	// (0x0001cf4c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x00020629) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x00020629) list_single_graphic_heading_pane_vc_g

0xc7ff,	// (0x0001d672) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xc7ff,	// (0x0001d672) list_single_graphic_heading_pane_vc_t1

0xcadf,	// (0x0001d952) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xcadf,	// (0x0001d952) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x000208bb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x000208bb) list_single_graphic_heading_pane_vc_t

0xc0cd,	// (0x0001cf40) list_double2_pane_vc_g1_ParamLimits

0xc0cd,	// (0x0001cf40) list_double2_pane_vc_g1

0xc0d9,	// (0x0001cf4c) list_double2_pane_vc_g2_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double2_pane_vc_g2

0x0001,

0xf7de,	// (0x00020651) list_double2_pane_vc_g_ParamLimits

0xf7de,	// (0x00020651) list_double2_pane_vc_g

0xcaf3,	// (0x0001d966) list_double2_pane_vc_t1_ParamLimits

0xcaf3,	// (0x0001d966) list_double2_pane_vc_t1

0xcb09,	// (0x0001d97c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcb09,	// (0x0001d97c) list_double2_large_graphic_pane_vc_g1

0xc0cd,	// (0x0001cf40) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc0cd,	// (0x0001cf40) list_double2_large_graphic_pane_vc_g2

0xc0d9,	// (0x0001cf4c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4d,	// (0x000208c0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x000208c0) list_double2_large_graphic_pane_vc_g

0xcb15,	// (0x0001d988) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xcb15,	// (0x0001d988) list_double2_large_graphic_pane_vc_t1

0xcb2b,	// (0x0001d99e) list_double_time_pane_vc_g1_ParamLimits

0xcb2b,	// (0x0001d99e) list_double_time_pane_vc_g1

0xcb37,	// (0x0001d9aa) list_double_time_pane_vc_g2_ParamLimits

0xcb37,	// (0x0001d9aa) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x000208c7) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x000208c7) list_double_time_pane_vc_g

0xcb43,	// (0x0001d9b6) list_double_time_pane_vc_t1_ParamLimits

0xcb43,	// (0x0001d9b6) list_double_time_pane_vc_t1

0xcb67,	// (0x0001d9da) list_double_time_pane_vc_t2_ParamLimits

0xcb67,	// (0x0001d9da) list_double_time_pane_vc_t2

0xcbb1,	// (0x0001da24) list_double_time_pane_vc_t3_ParamLimits

0xcbb1,	// (0x0001da24) list_double_time_pane_vc_t3

0xcbc3,	// (0x0001da36) list_double_time_pane_vc_t4_ParamLimits

0xcbc3,	// (0x0001da36) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x000208cc) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x000208cc) list_double_time_pane_vc_t

0xc0cd,	// (0x0001cf40) list_double_pane_vc_g1_ParamLimits

0xc0cd,	// (0x0001cf40) list_double_pane_vc_g1

0xc0d9,	// (0x0001cf4c) list_double_pane_vc_g2_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double_pane_vc_g2

0x0001,

0xf7de,	// (0x00020651) list_double_pane_vc_g_ParamLimits

0xf7de,	// (0x00020651) list_double_pane_vc_g

0xcbd7,	// (0x0001da4a) list_double_pane_vc_t1_ParamLimits

0xcbd7,	// (0x0001da4a) list_double_pane_vc_t1

0xcbeb,	// (0x0001da5e) list_double_pane_vc_t2_ParamLimits

0xcbeb,	// (0x0001da5e) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x000208d5) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x000208d5) list_double_pane_vc_t

0xc0cd,	// (0x0001cf40) list_double_number_pane_vc_g1_ParamLimits

0xc0cd,	// (0x0001cf40) list_double_number_pane_vc_g1

0xc0d9,	// (0x0001cf4c) list_double_number_pane_vc_g2_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double_number_pane_vc_g2

0x0001,

0xf7de,	// (0x00020651) list_double_number_pane_vc_g_ParamLimits

0xf7de,	// (0x00020651) list_double_number_pane_vc_g

0xcc03,	// (0x0001da76) list_double_number_pane_vc_t1_ParamLimits

0xcc03,	// (0x0001da76) list_double_number_pane_vc_t1

0xcc15,	// (0x0001da88) list_double_number_pane_vc_t2_ParamLimits

0xcc15,	// (0x0001da88) list_double_number_pane_vc_t2

0xcbeb,	// (0x0001da5e) list_double_number_pane_vc_t3_ParamLimits

0xcbeb,	// (0x0001da5e) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x000208da) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x000208da) list_double_number_pane_vc_t

0xcc29,	// (0x0001da9c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcc29,	// (0x0001da9c) list_double_large_graphic_pane_vc_g1

0xcc35,	// (0x0001daa8) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcc35,	// (0x0001daa8) list_double_large_graphic_pane_vc_g2

0xc0d9,	// (0x0001cf4c) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double_large_graphic_pane_vc_g3

0xcc44,	// (0x0001dab7) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcc44,	// (0x0001dab7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x000208e1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x000208e1) list_double_large_graphic_pane_vc_g

0xcc50,	// (0x0001dac3) list_double_large_graphic_pane_vc_t1_ParamLimits

0xcc50,	// (0x0001dac3) list_double_large_graphic_pane_vc_t1

0xcc64,	// (0x0001dad7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcc64,	// (0x0001dad7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x000208ea) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x000208ea) list_double_large_graphic_pane_vc_t

0xc0cd,	// (0x0001cf40) list_double_heading_pane_vc_g1_ParamLimits

0xc0cd,	// (0x0001cf40) list_double_heading_pane_vc_g1

0xc0d9,	// (0x0001cf4c) list_double_heading_pane_vc_g2_ParamLimits

0xc0d9,	// (0x0001cf4c) list_double_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x00020651) list_double_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x00020651) list_double_heading_pane_vc_g

0xcc7d,	// (0x0001daf0) list_double_heading_pane_vc_t1_ParamLimits

0xcc7d,	// (0x0001daf0) list_double_heading_pane_vc_t1

0xc7ff,	// (0x0001d672) list_double_heading_pane_vc_t2_ParamLimits

0xc7ff,	// (0x0001d672) list_double_heading_pane_vc_t2

0x0001,

0xfa7c,	// (0x000208ef) list_double_heading_pane_vc_t_ParamLimits

0xfa7c,	// (0x000208ef) list_double_heading_pane_vc_t

0xcc91,	// (0x0001db04) list_double_graphic_pane_vc_g1_ParamLimits

0xcc91,	// (0x0001db04) list_double_graphic_pane_vc_g1

0xcca1,	// (0x0001db14) list_double_graphic_pane_vc_g2_ParamLimits

0xcca1,	// (0x0001db14) list_double_graphic_pane_vc_g2

0xccb0,	// (0x0001db23) list_double_graphic_pane_vc_g3_ParamLimits

0xccb0,	// (0x0001db23) list_double_graphic_pane_vc_g3

0x0002,

0xfa81,	// (0x000208f4) list_double_graphic_pane_vc_g_ParamLimits

0xfa81,	// (0x000208f4) list_double_graphic_pane_vc_g

0xccbc,	// (0x0001db2f) list_double_graphic_pane_vc_t1_ParamLimits

0xccbc,	// (0x0001db2f) list_double_graphic_pane_vc_t1

0xccd0,	// (0x0001db43) list_double_graphic_pane_vc_t2_ParamLimits

0xccd0,	// (0x0001db43) list_double_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x000208fb) list_double_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x000208fb) list_double_graphic_pane_vc_t

0xd0ed,	// (0x0001df60) aid_size_cell_fastswap

0xd0f5,	// (0x0001df68) aid_size_cell_touch_ParamLimits

0xd0f5,	// (0x0001df68) aid_size_cell_touch

0xd350,	// (0x0001e1c3) popup_fast_swap_wide_window_ParamLimits

0xd350,	// (0x0001e1c3) popup_fast_swap_wide_window

0xd456,	// (0x0001e2c9) touch_pane_ParamLimits

0xd456,	// (0x0001e2c9) touch_pane

0x1416,	// (0x00012289) button_value_adjust_pane_cp2

0xc49d,	// (0x0001d310) button_value_adjust_pane_cp4

0xc4bd,	// (0x0001d330) form_field_data_pane_cp2

0xc4dc,	// (0x0001d34f) form_field_data_wide_pane_cp2

0x1ab4,	// (0x00012927) bg_scroll_pane_ParamLimits

0xd6e6,	// (0x0001e559) scroll_handle_pane_ParamLimits

0xd6fa,	// (0x0001e56d) scroll_sc2_down_pane_ParamLimits

0xd6fa,	// (0x0001e56d) scroll_sc2_down_pane

0x1ae5,	// (0x00012958) scroll_sc2_up_pane_ParamLimits

0x1ae5,	// (0x00012958) scroll_sc2_up_pane

0x51a5,	// (0x00016018) grid_wheel_folder_pane_g1_ParamLimits

0x51a5,	// (0x00016018) grid_wheel_folder_pane_g1

0xd8b6,	// (0x0001e729) clock_nsta_pane_cp2_ParamLimits

0xd8b6,	// (0x0001e729) clock_nsta_pane_cp2

0x1832,	// (0x000126a5) listscroll_midp_pane_ParamLimits

0x232e,	// (0x000131a1) midp_canvas_pane

0x2614,	// (0x00013487) nsta_clock_indic_pane

0x2650,	// (0x000134c3) listscroll_form_pane_vc

0x2658,	// (0x000134cb) listscroll_set_pane_vc_ParamLimits

0x2658,	// (0x000134cb) listscroll_set_pane_vc

0x2761,	// (0x000135d4) clock_nsta_pane

0x27d6,	// (0x00013649) indicator_nsta_pane

0x2aae,	// (0x00013921) bg_popup_sub_pane_cp2_ParamLimits

0x2ac2,	// (0x00013935) find_pane_cp2_ParamLimits

0x2ac2,	// (0x00013935) find_pane_cp2

0x2ad8,	// (0x0001394b) grid_toobar_pane_ParamLimits

0x2c7e,	// (0x00013af1) list_form_gen_pane_vc_ParamLimits

0x2c7e,	// (0x00013af1) list_form_gen_pane_vc

0x2c94,	// (0x00013b07) scroll_pane_cp8_vc_ParamLimits

0x2c94,	// (0x00013b07) scroll_pane_cp8_vc

0x2d10,	// (0x00013b83) data_form_wide_pane_vc_ParamLimits

0x2d10,	// (0x00013b83) data_form_wide_pane_vc

0x2d1c,	// (0x00013b8f) form_field_data_wide_pane_vc_g1

0x2d24,	// (0x00013b97) form_field_data_wide_pane_vc_t1_ParamLimits

0x2d24,	// (0x00013b97) form_field_data_wide_pane_vc_t1

0x14f0,	// (0x00012363) input_focus_pane_cp6_vc_ParamLimits

0x14f0,	// (0x00012363) input_focus_pane_cp6_vc

0x30a7,	// (0x00013f1a) list_midp_pane_ParamLimits

0x30b3,	// (0x00013f26) scroll_pane_cp16_ParamLimits

0x30b3,	// (0x00013f26) scroll_pane_cp16

0x3101,	// (0x00013f74) button_value_adjust_pane_ParamLimits

0x3101,	// (0x00013f74) button_value_adjust_pane

0x407d,	// (0x00014ef0) button_value_adjust_pane_cp6_ParamLimits

0x407d,	// (0x00014ef0) button_value_adjust_pane_cp6

0x41a3,	// (0x00015016) settings_code_pane_cp_ParamLimits

0x41a3,	// (0x00015016) settings_code_pane_cp

0x064a,	// (0x000114bd) cell_touch_pane_g1

0x064a,	// (0x000114bd) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002057c) cell_touch_pane_g

0x486a,	// (0x000156dd) cell_touch_pane_cp_ParamLimits

0x486a,	// (0x000156dd) cell_touch_pane_cp

0x487a,	// (0x000156ed) cell_touch_pane_ParamLimits

0x487a,	// (0x000156ed) cell_touch_pane

0x064a,	// (0x000114bd) scroll_sc2_down_pane_g1

0x064a,	// (0x000114bd) scroll_sc2_up_pane_g1

0x0654,	// (0x000114c7) bg_set_opt_pane_cp4_vc

0x48e3,	// (0x00015756) list_set_graphic_pane_vc_g1_ParamLimits

0x48e3,	// (0x00015756) list_set_graphic_pane_vc_g1

0x48ef,	// (0x00015762) list_set_graphic_pane_vc_g2_ParamLimits

0x48ef,	// (0x00015762) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x00020871) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x00020871) list_set_graphic_pane_vc_g

0x48fb,	// (0x0001576e) text_primary_small_cp13_vc_ParamLimits

0x48fb,	// (0x0001576e) text_primary_small_cp13_vc

0x4913,	// (0x00015786) list_set_graphic_pane_vc_ParamLimits

0x4913,	// (0x00015786) list_set_graphic_pane_vc

0x0654,	// (0x000114c7) input_focus_pane_cp2_vc

0x064a,	// (0x000114bd) setting_code_pane_vc_g1

0x077f,	// (0x000115f2) setting_code_pane_vc_t1

0x4926,	// (0x00015799) set_text_pane_vc_t1_ParamLimits

0x4926,	// (0x00015799) set_text_pane_vc_t1

0x0654,	// (0x000114c7) input_focus_pane_cp1_vc

0x4943,	// (0x000157b6) list_set_text_pane_vc

0x064a,	// (0x000114bd) setting_text_pane_vc_g1

0x0654,	// (0x000114c7) bg_set_opt_pane_cp2_vc

0x0776,	// (0x000115e9) setting_slider_graphic_pane_vc_g1

0x494d,	// (0x000157c0) setting_slider_graphic_pane_vc_t1

0x495d,	// (0x000157d0) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x00020876) setting_slider_graphic_pane_vc_t

0x496d,	// (0x000157e0) slider_set_pane_cp_vc

0x4975,	// (0x000157e8) slider_set_pane_vc_g1

0x497e,	// (0x000157f1) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0002087b) slider_set_pane_vc_g

0x161d,	// (0x00012490) set_opt_bg_pane_g1_copy1

0x1625,	// (0x00012498) set_opt_bg_pane_g2_copy1

0x49aa,	// (0x0001581d) set_opt_bg_pane_g3_copy1

0x1635,	// (0x000124a8) set_opt_bg_pane_g4_copy1

0x163d,	// (0x000124b0) set_opt_bg_pane_g5_copy1

0x1645,	// (0x000124b8) set_opt_bg_pane_g6_copy1

0x49b2,	// (0x00015825) set_opt_bg_pane_g7_copy1

0x49bc,	// (0x0001582f) set_opt_bg_pane_g8_copy1

0x49c4,	// (0x00015837) set_opt_bg_pane_g9_copy1

0x0654,	// (0x000114c7) bg_set_opt_pane_cp_vc

0x49cc,	// (0x0001583f) setting_slider_pane_vc_t1

0x49db,	// (0x0001584e) setting_slider_pane_vc_t2

0x49eb,	// (0x0001585e) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0002088a) setting_slider_pane_vc_t

0x49fb,	// (0x0001586e) slider_set_pane_vc

0xe1f0,	// (0x0001f063) volume_set_pane_vc_g1

0xe49d,	// (0x0001f310) volume_set_pane_vc_g2

0xe4a6,	// (0x0001f319) volume_set_pane_vc_g3

0xe4af,	// (0x0001f322) volume_set_pane_vc_g4

0xe4b8,	// (0x0001f32b) volume_set_pane_vc_g5

0xe4c1,	// (0x0001f334) volume_set_pane_vc_g6

0xe21d,	// (0x0001f090) volume_set_pane_vc_g7

0xe4ca,	// (0x0001f33d) volume_set_pane_vc_g8

0xe4d3,	// (0x0001f346) volume_set_pane_vc_g9

0xe4dc,	// (0x0001f34f) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x00020891) volume_set_pane_vc_g

0x4a03,	// (0x00015876) volume_set_pane_vc

0x4a0b,	// (0x0001587e) button_value_adjust_pane_cp1_vc

0x4a15,	// (0x00015888) list_highlight_pane_cp2_vc

0x4a1e,	// (0x00015891) list_set_pane_vc_ParamLimits

0x4a1e,	// (0x00015891) list_set_pane_vc

0x4a7c,	// (0x000158ef) main_pane_set_vc_t1_ParamLimits

0x4a7c,	// (0x000158ef) main_pane_set_vc_t1

0x4a91,	// (0x00015904) main_pane_set_vc_t2_ParamLimits

0x4a91,	// (0x00015904) main_pane_set_vc_t2

0x4aa3,	// (0x00015916) main_pane_set_vc_t3_ParamLimits

0x4aa3,	// (0x00015916) main_pane_set_vc_t3

0x4ab5,	// (0x00015928) main_pane_set_vc_t4_ParamLimits

0x4ab5,	// (0x00015928) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x000208a6) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x000208a6) main_pane_set_vc_t

0x4ac7,	// (0x0001593a) setting_code_pane_vc_ParamLimits

0x4ac7,	// (0x0001593a) setting_code_pane_vc

0x4ad6,	// (0x00015949) setting_slider_graphic_pane_vc

0x4ad6,	// (0x00015949) setting_slider_pane_vc

0x4ad6,	// (0x00015949) setting_text_pane_vc

0x4ad6,	// (0x00015949) setting_volume_pane_vc

0x4ade,	// (0x00015951) scroll_pane_cp121_vc

0x1404,	// (0x00012277) set_content_pane_vc

0x4d07,	// (0x00015b7a) button_value_adjust_pane_g1

0x4d10,	// (0x00015b83) button_value_adjust_pane_g2

0x0001,

0xfa8d,	// (0x00020900) button_value_adjust_pane_g

0x4d19,	// (0x00015b8c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4d19,	// (0x00015b8c) form_field_slider_wide_pane_vc_t1

0x4d2d,	// (0x00015ba0) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4d2d,	// (0x00015ba0) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa92,	// (0x00020905) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x00020905) form_field_slider_wide_pane_vc_t

0x09c9,	// (0x0001183c) input_focus_pane_cp10_vc_ParamLimits

0x09c9,	// (0x0001183c) input_focus_pane_cp10_vc

0x4d59,	// (0x00015bcc) slider_cont_pane_cp1_vc_ParamLimits

0x4d59,	// (0x00015bcc) slider_cont_pane_cp1_vc

0x4d69,	// (0x00015bdc) slider_form_pane_g1_cp2

0x497e,	// (0x000157f1) slider_form_pane_g2_cp2

0x4d96,	// (0x00015c09) form_field_slider_pane_vc_t3

0x4da4,	// (0x00015c17) form_field_slider_pane_vc_t4

0x4db2,	// (0x00015c25) slider_form_pane_vc_ParamLimits

0x4db2,	// (0x00015c25) slider_form_pane_vc

0x4dbf,	// (0x00015c32) form_field_slider_pane_vc_t1_ParamLimits

0x4dbf,	// (0x00015c32) form_field_slider_pane_vc_t1

0x4d2d,	// (0x00015ba0) form_field_slider_pane_vc_t2_ParamLimits

0x4d2d,	// (0x00015ba0) form_field_slider_pane_vc_t2

0x0001,

0xfaa4,	// (0x00020917) form_field_slider_pane_vc_t_ParamLimits

0xfaa4,	// (0x00020917) form_field_slider_pane_vc_t

0x09c9,	// (0x0001183c) input_focus_pane_cp9_vc_ParamLimits

0x09c9,	// (0x0001183c) input_focus_pane_cp9_vc

0x4ddb,	// (0x00015c4e) slider_cont_pane_vc_ParamLimits

0x4ddb,	// (0x00015c4e) slider_cont_pane_vc

0x4ded,	// (0x00015c60) list_form_graphic_pane_cp_vc_ParamLimits

0x4ded,	// (0x00015c60) list_form_graphic_pane_cp_vc

0x2d1c,	// (0x00013b8f) form_field_popup_wide_pane_vc_g1

0x4e02,	// (0x00015c75) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4e02,	// (0x00015c75) form_field_popup_wide_pane_vc_t1

0x14f0,	// (0x00012363) input_focus_pane_cp8_vc_ParamLimits

0x14f0,	// (0x00012363) input_focus_pane_cp8_vc

0x4e47,	// (0x00015cba) list_form_wide_pane_vc_ParamLimits

0x4e47,	// (0x00015cba) list_form_wide_pane_vc

0x4e53,	// (0x00015cc6) list_form_graphic_pane_vc_g1

0x4e5b,	// (0x00015cce) list_form_graphic_pane_vc_t1_ParamLimits

0x4e5b,	// (0x00015cce) list_form_graphic_pane_vc_t1

0x0734,	// (0x000115a7) list_highlight_pane_cp5_vc_ParamLimits

0x0734,	// (0x000115a7) list_highlight_pane_cp5_vc

0x4e77,	// (0x00015cea) list_form_graphic_pane_vc_ParamLimits

0x4e77,	// (0x00015cea) list_form_graphic_pane_vc

0x2d1c,	// (0x00013b8f) form_field_popup_pane_vc_g1

0x4e8d,	// (0x00015d00) form_field_popup_pane_vc_t1_ParamLimits

0x4e8d,	// (0x00015d00) form_field_popup_pane_vc_t1

0x14f0,	// (0x00012363) input_focus_pane_cp7_vc_ParamLimits

0x14f0,	// (0x00012363) input_focus_pane_cp7_vc

0x4ea4,	// (0x00015d17) list_form_pane_vc_ParamLimits

0x4ea4,	// (0x00015d17) list_form_pane_vc

0x4eb0,	// (0x00015d23) data_form_pane_vc_t1_ParamLimits

0x4eb0,	// (0x00015d23) data_form_pane_vc_t1

0x161d,	// (0x00012490) input_focus_pane_vc_g1

0x1625,	// (0x00012498) input_focus_pane_vc_g2

0x162d,	// (0x000124a0) input_focus_pane_vc_g3

0x1635,	// (0x000124a8) input_focus_pane_vc_g4

0x163d,	// (0x000124b0) input_focus_pane_vc_g5

0x1645,	// (0x000124b8) input_focus_pane_vc_g6

0x164d,	// (0x000124c0) input_focus_pane_vc_g7

0x1655,	// (0x000124c8) input_focus_pane_vc_g8

0x165d,	// (0x000124d0) input_focus_pane_vc_g9

0x064a,	// (0x000114bd) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00020505) input_focus_pane_vc_g

0x2d10,	// (0x00013b83) data_form_pane_vc_ParamLimits

0x2d10,	// (0x00013b83) data_form_pane_vc

0x2d1c,	// (0x00013b8f) form_field_data_pane_vc_g1

0x4ecb,	// (0x00015d3e) form_field_data_pane_vc_t1_ParamLimits

0x4ecb,	// (0x00015d3e) form_field_data_pane_vc_t1

0x14f0,	// (0x00012363) input_focus_pane_vc_ParamLimits

0x14f0,	// (0x00012363) input_focus_pane_vc

0x4ee5,	// (0x00015d58) button_value_adjust_pane_cp3_vc

0x4eed,	// (0x00015d60) button_value_adjust_pane_cp5_vc

0x4ef5,	// (0x00015d68) form_field_data_pane_vc_ParamLimits

0x4ef5,	// (0x00015d68) form_field_data_pane_vc

0x4f0c,	// (0x00015d7f) form_field_data_pane_vc_cp2

0x4f14,	// (0x00015d87) form_field_data_wide_pane_vc_ParamLimits

0x4f14,	// (0x00015d87) form_field_data_wide_pane_vc

0x4f2a,	// (0x00015d9d) form_field_data_wide_pane_vc_cp2

0x4f32,	// (0x00015da5) form_field_popup_pane_vc_ParamLimits

0x4f32,	// (0x00015da5) form_field_popup_pane_vc

0x4f49,	// (0x00015dbc) form_field_popup_wide_pane_vc_ParamLimits

0x4f49,	// (0x00015dbc) form_field_popup_wide_pane_vc

0x4f5f,	// (0x00015dd2) form_field_slider_pane_vc_ParamLimits

0x4f5f,	// (0x00015dd2) form_field_slider_pane_vc

0x4f72,	// (0x00015de5) form_field_slider_wide_pane_vc_ParamLimits

0x4f72,	// (0x00015de5) form_field_slider_wide_pane_vc

0x4f85,	// (0x00015df8) grid_touch_1_pane_ParamLimits

0x4f85,	// (0x00015df8) grid_touch_1_pane

0x4f91,	// (0x00015e04) grid_touch_2_pane_ParamLimits

0x4f91,	// (0x00015e04) grid_touch_2_pane

0x25df,	// (0x00013452) touch_pane_g1_ParamLimits

0x25df,	// (0x00013452) touch_pane_g1

0x4fa9,	// (0x00015e1c) cell_app_pane_cp_wide_ParamLimits

0x4fa9,	// (0x00015e1c) cell_app_pane_cp_wide

0x4fba,	// (0x00015e2d) grid_popup_fast_wide_pane_ParamLimits

0x4fba,	// (0x00015e2d) grid_popup_fast_wide_pane

0x4fce,	// (0x00015e41) scroll_pane_cp19_ParamLimits

0x4fce,	// (0x00015e41) scroll_pane_cp19

0x0654,	// (0x000114c7) bg_popup_window_pane_cp20

0x4fe2,	// (0x00015e55) listscroll_popup_fast_wide_pane

0x0734,	// (0x000115a7) grid_indicator_nsta_pane

0x4fea,	// (0x00015e5d) clock_nsta_pane_g1

0x4ff3,	// (0x00015e66) clock_nsta_pane_t1

0x500f,	// (0x00015e82) cell_indicator_nsta_pane_ParamLimits

0x500f,	// (0x00015e82) cell_indicator_nsta_pane

0x5047,	// (0x00015eba) cell_indicator_nsta_pane_g1

0x5055,	// (0x00015ec8) cell_indicator_nsta_pane_g2

0x0001,

0xfab5,	// (0x00020928) cell_indicator_nsta_pane_g

0x506b,	// (0x00015ede) clock_nsta_pane_cp

0x5073,	// (0x00015ee6) indicator_nsta_pane_cp

0x507b,	// (0x00015eee) nsta_clock_indic_pane_g1

0x0817,	// (0x0001168a) grid_indicator_pane

0x1bda,	// (0x00012a4d) scroll_pane_cp29

0xd805,	// (0x0001e678) indicator_nsta_pane_cp2_ParamLimits

0xd805,	// (0x0001e678) indicator_nsta_pane_cp2

0x0734,	// (0x000115a7) main_apps_wheel_pane

0x2f8c,	// (0x00013dff) form_midp_field_text_pane_ParamLimits

0x30d3,	// (0x00013f46) scroll_bar_cp050_ParamLimits

0x50dc,	// (0x00015f4f) cell_indicator_pane_ParamLimits

0x50dc,	// (0x00015f4f) cell_indicator_pane

0x50f7,	// (0x00015f6a) cell_indicator_pane_g1

0x5101,	// (0x00015f74) grid_wheel_folder_pane_ParamLimits

0x5101,	// (0x00015f74) grid_wheel_folder_pane

0x5117,	// (0x00015f8a) list_wheel_apps_pane_ParamLimits

0x5117,	// (0x00015f8a) list_wheel_apps_pane

0x5128,	// (0x00015f9b) main_apps_wheel_pane_g1_ParamLimits

0x5128,	// (0x00015f9b) main_apps_wheel_pane_g1

0x513c,	// (0x00015faf) main_apps_wheel_pane_g2_ParamLimits

0x513c,	// (0x00015faf) main_apps_wheel_pane_g2

0x0001,

0xfad1,	// (0x00020944) main_apps_wheel_pane_g_ParamLimits

0xfad1,	// (0x00020944) main_apps_wheel_pane_g

0x5154,	// (0x00015fc7) main_apps_wheel_pane_t1_ParamLimits

0x5154,	// (0x00015fc7) main_apps_wheel_pane_t1

0x5177,	// (0x00015fea) list_wheel_apps_pane_g1

0x517f,	// (0x00015ff2) list_wheel_apps_pane_g2

0x5187,	// (0x00015ffa) list_wheel_apps_pane_g3

0x5191,	// (0x00016004) list_wheel_apps_pane_g4

0x519b,	// (0x0001600e) list_wheel_apps_pane_g5

0x0004,

0xfad6,	// (0x00020949) list_wheel_apps_pane_g

0x21b2,	// (0x00013025) navi_icon_text_pane

0x2694,	// (0x00013507) aid_fill_nsta

0x51be,	// (0x00016031) navi_icon_text_pane_g1

0x51ca,	// (0x0001603d) navi_icon_text_pane_t1

0x2054,	// (0x00012ec7) list_set_graphic_pane_t1_ParamLimits

0x2054,	// (0x00012ec7) list_set_graphic_pane_t1

0x3825,	// (0x00014698) popup_midp_note_alarm_window_t6_ParamLimits

0x3825,	// (0x00014698) popup_midp_note_alarm_window_t6

0x3837,	// (0x000146aa) popup_midp_note_alarm_window_t7_ParamLimits

0x3837,	// (0x000146aa) popup_midp_note_alarm_window_t7

0x3849,	// (0x000146bc) popup_midp_note_alarm_window_t8_ParamLimits

0x3849,	// (0x000146bc) popup_midp_note_alarm_window_t8

0x385b,	// (0x000146ce) popup_midp_note_alarm_window_t9_ParamLimits

0x385b,	// (0x000146ce) popup_midp_note_alarm_window_t9

0x386d,	// (0x000146e0) popup_midp_note_alarm_window_t10_ParamLimits

0x386d,	// (0x000146e0) popup_midp_note_alarm_window_t10

0x387f,	// (0x000146f2) popup_midp_note_alarm_window_t11_ParamLimits

0x387f,	// (0x000146f2) popup_midp_note_alarm_window_t11

0x3891,	// (0x00014704) scroll_pane_cp17_ParamLimits

0x3891,	// (0x00014704) scroll_pane_cp17

0xe1f0,	// (0x0001f063) volume_small_pane_cp_g1

0xe4e5,	// (0x0001f358) volume_small_pane_cp_g2

0xe4ee,	// (0x0001f361) volume_small_pane_cp_g3

0xe202,	// (0x0001f075) volume_small_pane_cp_g4

0xe4f7,	// (0x0001f36a) volume_small_pane_cp_g5

0xe4b8,	// (0x0001f32b) volume_small_pane_cp_g6

0xe214,	// (0x0001f087) volume_small_pane_cp_g7

0xe500,	// (0x0001f373) volume_small_pane_cp_g8

0xe509,	// (0x0001f37c) volume_small_pane_cp_g9

0xe226,	// (0x0001f099) volume_small_pane_cp_g10

0x23f9,	// (0x0001326c) midp_ticker_pane_g1_ParamLimits

0x2405,	// (0x00013278) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x000205d1) midp_ticker_pane_g_ParamLimits

0x2411,	// (0x00013284) midp_ticker_pane_t1_ParamLimits

0x26aa,	// (0x0001351d) aid_fill_nsta_2

0x30bf,	// (0x00013f32) list_form2_midp_pane

0x4221,	// (0x00015094) midp_editing_number_pane_ParamLimits

0x4230,	// (0x000150a3) midp_ticker_pane_ParamLimits

0x51dc,	// (0x0001604f) form2_midp_field_pane

0x5200,	// (0x00016073) scroll_pane_cp51

0x5220,	// (0x00016093) form2_midp_button_pane_ParamLimits

0x5220,	// (0x00016093) form2_midp_button_pane

0x5232,	// (0x000160a5) form2_midp_content_pane_ParamLimits

0x5232,	// (0x000160a5) form2_midp_content_pane

0x524c,	// (0x000160bf) form2_midp_field_choice_group_pane

0x5254,	// (0x000160c7) form2_midp_field_pane_g1

0x525c,	// (0x000160cf) form2_midp_field_pane_g2

0x5264,	// (0x000160d7) form2_midp_field_pane_g3

0x526c,	// (0x000160df) form2_midp_field_pane_g4

0x0003,

0xfafb,	// (0x0002096e) form2_midp_field_pane_g

0x5274,	// (0x000160e7) form2_midp_gauge_slider_pane

0x527c,	// (0x000160ef) form2_midp_gauge_wait_pane

0x5284,	// (0x000160f7) form2_midp_image_pane_ParamLimits

0x5284,	// (0x000160f7) form2_midp_image_pane

0x529f,	// (0x00016112) form2_midp_label_pane_ParamLimits

0x529f,	// (0x00016112) form2_midp_label_pane

0x52b8,	// (0x0001612b) form2_midp_label_pane_cp_ParamLimits

0x52b8,	// (0x0001612b) form2_midp_label_pane_cp

0x52d9,	// (0x0001614c) form2_midp_string_pane_ParamLimits

0x52d9,	// (0x0001614c) form2_midp_string_pane

0xcce8,	// (0x0001db5b) form2_midp_text_pane_ParamLimits

0xcce8,	// (0x0001db5b) form2_midp_text_pane

0x5306,	// (0x00016179) form2_midp_time_pane

0x5316,	// (0x00016189) input_focus_pane_cp51_ParamLimits

0x5316,	// (0x00016189) input_focus_pane_cp51

0x532e,	// (0x000161a1) form2_midp_label_pane_t1_ParamLimits

0x532e,	// (0x000161a1) form2_midp_label_pane_t1

0xcd01,	// (0x0001db74) form2_mdip_text_pane_t1_ParamLimits

0xcd01,	// (0x0001db74) form2_mdip_text_pane_t1

0xcd1f,	// (0x0001db92) form2_midp_time_pane_t1

0x53a5,	// (0x00016218) form2_midp_gauge_slider_pane_t1

0x53b7,	// (0x0001622a) form2_midp_gauge_slider_pane_t2

0x53c9,	// (0x0001623c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb04,	// (0x00020977) form2_midp_gauge_slider_pane_t

0x53db,	// (0x0001624e) form2_midp_slider_pane

0x53e7,	// (0x0001625a) form2_midp_gauge_wait_pane_t1

0x53f5,	// (0x00016268) form2_midp_wait_pane_ParamLimits

0x53f5,	// (0x00016268) form2_midp_wait_pane

0x5421,	// (0x00016294) list_single_2graphic_pane_cp4_ParamLimits

0x5421,	// (0x00016294) list_single_2graphic_pane_cp4

0x2d8b,	// (0x00013bfe) list_single_midp_graphic_pane_cp_ParamLimits

0x2d8b,	// (0x00013bfe) list_single_midp_graphic_pane_cp

0x0654,	// (0x000114c7) list_highlight_pane_cp20

0x544f,	// (0x000162c2) list_single_2graphic_pane_g1_cp4

0x476f,	// (0x000155e2) list_single_2graphic_pane_g2_cp4

0x5457,	// (0x000162ca) list_single_2graphic_pane_t1_cp4

0x0734,	// (0x000115a7) list_highlight_pane_cp21

0x5466,	// (0x000162d9) list_single_midp_graphic_pane_g4_cp

0x5475,	// (0x000162e8) list_single_midp_graphic_pane_t1_cp

0x548a,	// (0x000162fd) form2_mdip_string_pane_t1_ParamLimits

0x548a,	// (0x000162fd) form2_mdip_string_pane_t1

0x0654,	// (0x000114c7) bg_wml_button_pane_cp2

0x064a,	// (0x000114bd) form2_midp_image_pane_g1

0xc294,	// (0x0001d107) list_double_large_graphic_pane_g5_ParamLimits

0xc294,	// (0x0001d107) list_double_large_graphic_pane_g5

0x1832,	// (0x000126a5) midp_form_pane_ParamLimits

0x0734,	// (0x000115a7) main_apps_wheel_pane_ParamLimits

0xdeb8,	// (0x0001ed2b) popup_preview_window_ParamLimits

0xdeb8,	// (0x0001ed2b) popup_preview_window

0xe06f,	// (0x0001eee2) popup_touch_info_window_ParamLimits

0xe06f,	// (0x0001eee2) popup_touch_info_window

0xe08d,	// (0x0001ef00) popup_touch_menu_window_ParamLimits

0xe08d,	// (0x0001ef00) popup_touch_menu_window

0x0640,	// (0x000114b3) bg_popup_sub_pane_cp6

0x55ad,	// (0x00016420) list_touch_menu_pane

0x55b5,	// (0x00016428) list_single_touch_menu_pane_ParamLimits

0x55b5,	// (0x00016428) list_single_touch_menu_pane

0x55c9,	// (0x0001643c) list_single_touch_menu_pane_t1

0x0734,	// (0x000115a7) bg_popup_sub_pane_cp7_ParamLimits

0x0734,	// (0x000115a7) bg_popup_sub_pane_cp7

0x55d7,	// (0x0001644a) heading_sub_pane

0x55df,	// (0x00016452) list_touch_info_pane_ParamLimits

0x55df,	// (0x00016452) list_touch_info_pane

0x55ee,	// (0x00016461) list_single_touch_info_pane_ParamLimits

0x55ee,	// (0x00016461) list_single_touch_info_pane

0x5600,	// (0x00016473) list_single_touch_info_pane_t1

0x560e,	// (0x00016481) list_single_touch_info_pane_t2

0x0001,

0xfb12,	// (0x00020985) list_single_touch_info_pane_t

0x2326,	// (0x00013199) bg_popup_heading_pane_cp

0x561c,	// (0x0001648f) heading_sub_pane_t1

0x2caa,	// (0x00013b1d) bg_popup_preview_window_pane_cp_ParamLimits

0x2caa,	// (0x00013b1d) bg_popup_preview_window_pane_cp

0x55d7,	// (0x0001644a) heading_preview_pane

0x55df,	// (0x00016452) list_preview_pane_ParamLimits

0x55df,	// (0x00016452) list_preview_pane

0x562a,	// (0x0001649d) popup_preview_window_g1

0x55ee,	// (0x00016461) list_single_preview_pane_ParamLimits

0x55ee,	// (0x00016461) list_single_preview_pane

0x5632,	// (0x000164a5) list_single_preview_pane_g1

0x563a,	// (0x000164ad) list_single_preview_pane_t1

0x5600,	// (0x00016473) list_single_preview_pane_t2

0x0001,

0xfb17,	// (0x0002098a) list_single_preview_pane_t

0x5648,	// (0x000164bb) bg_popup_heading_pane_cp2_ParamLimits

0x5648,	// (0x000164bb) bg_popup_heading_pane_cp2

0x565e,	// (0x000164d1) heading_preview_pane_g1

0x5666,	// (0x000164d9) heading_preview_pane_t1_ParamLimits

0x5666,	// (0x000164d9) heading_preview_pane_t1

0x083a,	// (0x000116ad) soft_indicator_pane_t1_ParamLimits

0x0f18,	// (0x00011d8b) scroll_pane_ParamLimits

0x1adc,	// (0x0001294f) scroll_sc2_left_pane

0x1ad3,	// (0x00012946) scroll_sc2_right_pane

0x1afb,	// (0x0001296e) scroll_bg_pane_g1_ParamLimits

0x1b10,	// (0x00012983) scroll_bg_pane_g2_ParamLimits

0x1b28,	// (0x0001299b) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002055c) scroll_bg_pane_g_ParamLimits

0x1afb,	// (0x0001296e) scroll_handle_pane_g1_ParamLimits

0x1b4a,	// (0x000129bd) scroll_handle_pane_g2_ParamLimits

0x1b28,	// (0x0001299b) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00020563) scroll_handle_pane_g_ParamLimits

0xdb3f,	// (0x0001e9b2) popup_choice_list_window_ParamLimits

0xdb3f,	// (0x0001e9b2) popup_choice_list_window

0x2aba,	// (0x0001392d) choice_list_pane

0x2b52,	// (0x000139c5) cell_toolbar_pane_t1

0x2b7a,	// (0x000139ed) toolbar_button_pane_ParamLimits

0x3d4b,	// (0x00014bbe) ai_gene_pane_1_t2_ParamLimits

0x3d4b,	// (0x00014bbe) ai_gene_pane_1_t2

0x0001,

0xf911,	// (0x00020784) ai_gene_pane_1_t_ParamLimits

0xf911,	// (0x00020784) ai_gene_pane_1_t

0x5683,	// (0x000164f6) scroll_sc2_left_pane_g1

0x5683,	// (0x000164f6) scroll_sc2_right_pane_g1

0x266a,	// (0x000134dd) bg_popup_sub_pane_cp10

0x568d,	// (0x00016500) list_choice_list_pane

0x56a6,	// (0x00016519) list_single_choice_list_pane_ParamLimits

0x56a6,	// (0x00016519) list_single_choice_list_pane

0x56b9,	// (0x0001652c) list_single_choice_list_pane_g1

0x17e2,	// (0x00012655) list_single_choice_list_pane_t1_ParamLimits

0x17e2,	// (0x00012655) list_single_choice_list_pane_t1

0x56c1,	// (0x00016534) choice_list_pane_g1

0x56c9,	// (0x0001653c) choice_list_pane_t1

0x0640,	// (0x000114b3) input_focus_pane_cp11

0x19b6,	// (0x00012829) title_pane_stacon_g2_ParamLimits

0x19b6,	// (0x00012829) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00020542) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00020542) title_pane_stacon_g

0x2326,	// (0x00013199) cursor_press_pane

0xdbe7,	// (0x0001ea5a) popup_fep_hwr_window_ParamLimits

0xdbe7,	// (0x0001ea5a) popup_fep_hwr_window

0xdc5f,	// (0x0001ead2) popup_fep_vkb_window_ParamLimits

0xdc5f,	// (0x0001ead2) popup_fep_vkb_window

0x56d7,	// (0x0001654a) cursor_press_pane_g1

0x0002,

0xfb40,	// (0x000209b3) fep_vkb_side_pane_g_ParamLimits

0xe54b,	// (0x0001f3be) fep_hwr_candidate_pane_ParamLimits

0xe54b,	// (0x0001f3be) fep_hwr_candidate_pane

0xe575,	// (0x0001f3e8) fep_hwr_side_pane_ParamLimits

0xe575,	// (0x0001f3e8) fep_hwr_side_pane

0xe595,	// (0x0001f408) fep_hwr_top_pane_ParamLimits

0xe595,	// (0x0001f408) fep_hwr_top_pane

0xe5ad,	// (0x0001f420) fep_hwr_write_pane_ParamLimits

0xe5ad,	// (0x0001f420) fep_hwr_write_pane

0xfb40,	// (0x000209b3) fep_vkb_side_pane_g

0x56f1,	// (0x00016564) fep_hwr_top_pane_g1

0x56df,	// (0x00016552) fep_hwr_top_pane_g2

0xe5d9,	// (0x0001f44c) fep_hwr_top_pane_g3

0x0002,

0xfb1c,	// (0x0002098f) fep_hwr_top_pane_g

0xe5ee,	// (0x0001f461) fep_hwr_top_text_pane

0x1ca0,	// (0x00012b13) fep_hwr_top_text_pane_g1

0x5727,	// (0x0001659a) fep_hwr_top_text_pane_t1

0xe6e4,	// (0x0001f557) fep_hwr_candidate_pane_g1

0x596a,	// (0x000167dd) fep_vkb_keypad_pane_g3_ParamLimits

0x596a,	// (0x000167dd) fep_vkb_keypad_pane_g3

0x5992,	// (0x00016805) fep_vkb_keypad_pane_g4_ParamLimits

0x5992,	// (0x00016805) fep_vkb_keypad_pane_g4

0x5a01,	// (0x00016874) fep_vkb_bottom_pane_g2_ParamLimits

0x5a01,	// (0x00016874) fep_vkb_bottom_pane_g2

0x0001,

0xfb47,	// (0x000209ba) fep_vkb_bottom_pane_g_ParamLimits

0xfb47,	// (0x000209ba) fep_vkb_bottom_pane_g

0x5683,	// (0x000164f6) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x000209c4) cell_vkb_side_pane_g

0x5a8c,	// (0x000168ff) cell_vkb_side_pane_t1

0x5a9a,	// (0x0001690d) cell_vkb_side_pane_t1_copy1

0x5683,	// (0x000164f6) bg_fep_vkb_candidate_pane_g2

0x5bc6,	// (0x00016a39) cell_vkb_candidate_pane_ParamLimits

0x5735,	// (0x000165a8) aid_size_cell_vkb_ParamLimits

0x5735,	// (0x000165a8) aid_size_cell_vkb

0x5bc6,	// (0x00016a39) cell_vkb_candidate_pane

0xe6fe,	// (0x0001f571) bg_popup_fep_shadow_pane_g1

0x57c1,	// (0x00016634) fep_vkb_bottom_pane_ParamLimits

0x57c1,	// (0x00016634) fep_vkb_bottom_pane

0x57f7,	// (0x0001666a) fep_vkb_candidate_pane_ParamLimits

0x57f7,	// (0x0001666a) fep_vkb_candidate_pane

0x5813,	// (0x00016686) fep_vkb_keypad_pane_ParamLimits

0x5813,	// (0x00016686) fep_vkb_keypad_pane

0x5852,	// (0x000166c5) fep_vkb_side_pane_ParamLimits

0x5852,	// (0x000166c5) fep_vkb_side_pane

0x588e,	// (0x00016701) fep_vkb_top_pane_ParamLimits

0x588e,	// (0x00016701) fep_vkb_top_pane

0x58c3,	// (0x00016736) fep_vkb_top_pane_g1_ParamLimits

0x58c3,	// (0x00016736) fep_vkb_top_pane_g1

0x58d2,	// (0x00016745) fep_vkb_top_pane_g2_ParamLimits

0x58d2,	// (0x00016745) fep_vkb_top_pane_g2

0x58e1,	// (0x00016754) fep_vkb_top_pane_g3_ParamLimits

0x58e1,	// (0x00016754) fep_vkb_top_pane_g3

0x0003,

0xfb37,	// (0x000209aa) fep_vkb_top_pane_g_ParamLimits

0xfb37,	// (0x000209aa) fep_vkb_top_pane_g

0x58ff,	// (0x00016772) fep_vkb_top_text_pane_ParamLimits

0x58ff,	// (0x00016772) fep_vkb_top_text_pane

0x5910,	// (0x00016783) fep_vkb_side_pane_g1_ParamLimits

0x5910,	// (0x00016783) fep_vkb_side_pane_g1

0x5959,	// (0x000167cc) grid_vkb_side_pane_ParamLimits

0x5959,	// (0x000167cc) grid_vkb_side_pane

0xe706,	// (0x0001f579) bg_popup_fep_shadow_pane_g2

0xe70f,	// (0x0001f582) bg_popup_fep_shadow_pane_g3

0xe717,	// (0x0001f58a) bg_popup_fep_shadow_pane_g4

0xe720,	// (0x0001f593) bg_popup_fep_shadow_pane_g5

0xe72a,	// (0x0001f59d) bg_popup_fep_shadow_pane_g6

0xe732,	// (0x0001f5a5) bg_popup_fep_shadow_pane_g7

0x163d,	// (0x000124b0) bg_popup_fep_shadow_pane_g8

0x59b0,	// (0x00016823) grid_vkb_keypad_number_pane_ParamLimits

0x59b0,	// (0x00016823) grid_vkb_keypad_number_pane

0x59c0,	// (0x00016833) grid_vkb_keypad_pane_ParamLimits

0x59c0,	// (0x00016833) grid_vkb_keypad_pane

0x59e6,	// (0x00016859) fep_vkb_bottom_pane_g1_ParamLimits

0x59e6,	// (0x00016859) fep_vkb_bottom_pane_g1

0x5a0f,	// (0x00016882) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5a0f,	// (0x00016882) grid_vkb_keypad_bottom_left_pane

0x5a24,	// (0x00016897) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5a24,	// (0x00016897) grid_vkb_keypad_bottom_right_pane

0x5a39,	// (0x000168ac) fep_vkb_top_text_pane_g1

0x5a54,	// (0x000168c7) fep_vkb_top_text_pane_t1

0x5a69,	// (0x000168dc) cell_vkb_side_pane_ParamLimits

0x5a69,	// (0x000168dc) cell_vkb_side_pane

0x5683,	// (0x000164f6) cell_vkb_side_pane_g1

0x5aa8,	// (0x0001691b) cell_vkb_keypad_pane_ParamLimits

0x5aa8,	// (0x0001691b) cell_vkb_keypad_pane

0x5b1d,	// (0x00016990) cell_vkb_keypad_pane_g1

0x0008,

0xfb64,	// (0x000209d7) bg_popup_fep_shadow_pane_g

0x5683,	// (0x000164f6) cell_hwr_side_pane_g1

0x5683,	// (0x000164f6) cell_hwr_side_pane_g2

0x5b27,	// (0x0001699a) cell_vkb_keypad_pane_t1

0x5b35,	// (0x000169a8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x5b35,	// (0x000169a8) cell_vkb_keypad_bottom_left_pane

0x5b52,	// (0x000169c5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x5b52,	// (0x000169c5) cell_vkb_keypad_bottom_right_pane

0x5683,	// (0x000164f6) cell_vkb_keypad_bottom_left_pane_g1

0x5683,	// (0x000164f6) cell_vkb_keypad_bottom_right_pane_g1

0x5b8b,	// (0x000169fe) cell_vkb_keypad_number_pane_ParamLimits

0x5b8b,	// (0x000169fe) cell_vkb_keypad_number_pane

0x5baa,	// (0x00016a1d) cell_vkb_keypad_number_pane_g1

0x5bb4,	// (0x00016a27) cell_vkb_keypad_number_pane_g2

0x5bbd,	// (0x00016a30) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb56,	// (0x000209c9) cell_vkb_keypad_number_pane_g

0x5b27,	// (0x0001699a) cell_vkb_keypad_number_pane_t1

0x5be1,	// (0x00016a54) fep_vkb_candidate_pane_g1

0x0001,

0xfb51,	// (0x000209c4) cell_hwr_side_pane_g

0x5bfa,	// (0x00016a6d) cell_hwr_side_pane_t1

0xe744,	// (0x0001f5b7) cell_hwr_side_pane_t1_copy1

0x58f1,	// (0x00016764) cell_hwr_candidate_pane_g1

0xe752,	// (0x0001f5c5) cell_hwr_candidate_pane_t1

0x5683,	// (0x000164f6) cell_vkb_candidate_pane_g2

0x5c3e,	// (0x00016ab1) cell_vkb_candidate_pane_t1

0xe512,	// (0x0001f385) bg_popup_fep_shadow_pane_ParamLimits

0xe512,	// (0x0001f385) bg_popup_fep_shadow_pane

0x9804,	// (0x0001a677) bg_fep_hwr_top_pane_g4

0x5703,	// (0x00016576) bg_hwr_side_pane_g1_ParamLimits

0x5703,	// (0x00016576) bg_hwr_side_pane_g1

0xe62a,	// (0x0001f49d) cell_hwr_side_pane_ParamLimits

0xe62a,	// (0x0001f49d) cell_hwr_side_pane

0xe665,	// (0x0001f4d8) fep_hwr_write_pane_g1_ParamLimits

0xe665,	// (0x0001f4d8) fep_hwr_write_pane_g1

0xe672,	// (0x0001f4e5) fep_hwr_write_pane_g2_ParamLimits

0xe672,	// (0x0001f4e5) fep_hwr_write_pane_g2

0xe67f,	// (0x0001f4f2) fep_hwr_write_pane_g3_ParamLimits

0xe67f,	// (0x0001f4f2) fep_hwr_write_pane_g3

0xe68d,	// (0x0001f500) fep_hwr_write_pane_g4_ParamLimits

0xe68d,	// (0x0001f500) fep_hwr_write_pane_g4

0x0005,

0xfb23,	// (0x00020996) fep_hwr_write_pane_g_ParamLimits

0xfb23,	// (0x00020996) fep_hwr_write_pane_g

0x9804,	// (0x0001a677) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9804,	// (0x0001a677) bg_fep_hwr_candidate_pane_g2

0xe6a2,	// (0x0001f515) cell_hwr_candidate_pane_ParamLimits

0xe6a2,	// (0x0001f515) cell_hwr_candidate_pane

0xe6e4,	// (0x0001f557) fep_hwr_candidate_pane_g1_ParamLimits

0x5763,	// (0x000165d6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5763,	// (0x000165d6) bg_popup_fep_shadow_pane_cp2

0x58f1,	// (0x00016764) fep_vkb_top_pane_g4_ParamLimits

0x58f1,	// (0x00016764) fep_vkb_top_pane_g4

0x5937,	// (0x000167aa) fep_vkb_side_pane_g2_ParamLimits

0x5937,	// (0x000167aa) fep_vkb_side_pane_g2

0xc3d2,	// (0x0001d245) list_setting_pane_t4_ParamLimits

0xc3d2,	// (0x0001d245) list_setting_pane_t4

0xc464,	// (0x0001d2d7) list_setting_number_pane_t5_ParamLimits

0xc464,	// (0x0001d2d7) list_setting_number_pane_t5

0x1ce7,	// (0x00012b5a) list_double_heading_pane_cp2_ParamLimits

0x1ce7,	// (0x00012b5a) list_double_heading_pane_cp2

0x1169,	// (0x00011fdc) list_double_heading_pane_g1_cp2_ParamLimits

0x1169,	// (0x00011fdc) list_double_heading_pane_g1_cp2

0x1516,	// (0x00012389) list_double_heading_pane_g2_cp2_ParamLimits

0x1516,	// (0x00012389) list_double_heading_pane_g2_cp2

0x5c4c,	// (0x00016abf) list_double_heading_pane_t1_cp2_ParamLimits

0x5c4c,	// (0x00016abf) list_double_heading_pane_t1_cp2

0x5c62,	// (0x00016ad5) list_double_heading_pane_t2_cp2_ParamLimits

0x5c62,	// (0x00016ad5) list_double_heading_pane_t2_cp2

0x0628,	// (0x0001149b) aid_value_unit2

0xd39c,	// (0x0001e20f) popup_preview_fixed_window

0x09d7,	// (0x0001184a) bg_popup_preview_window_pane_cp02

0x5c74,	// (0x00016ae7) list_preview_fixed_pane

0x5cba,	// (0x00016b2d) list_empty_pane_fp_ParamLimits

0x5cba,	// (0x00016b2d) list_empty_pane_fp

0x5cba,	// (0x00016b2d) list_single_cale_day_pane_fp_ParamLimits

0x5cba,	// (0x00016b2d) list_single_cale_day_pane_fp

0x5cba,	// (0x00016b2d) list_single_graphic_heading_pane_fp_ParamLimits

0x5cba,	// (0x00016b2d) list_single_graphic_heading_pane_fp

0x5cba,	// (0x00016b2d) list_single_graphic_pane_fp_ParamLimits

0x5cba,	// (0x00016b2d) list_single_graphic_pane_fp

0x5cba,	// (0x00016b2d) list_single_heading_pane_fp_ParamLimits

0x5cba,	// (0x00016b2d) list_single_heading_pane_fp

0x5cba,	// (0x00016b2d) list_single_pane_fp_ParamLimits

0x5cba,	// (0x00016b2d) list_single_pane_fp

0x5cd0,	// (0x00016b43) list_single_pane_fp_g1_ParamLimits

0x5cd0,	// (0x00016b43) list_single_pane_fp_g1

0xc103,	// (0x0001cf76) list_single_pane_fp_g2_ParamLimits

0xc103,	// (0x0001cf76) list_single_pane_fp_g2

0xcd32,	// (0x0001dba5) list_single_pane_fp_g3_ParamLimits

0xcd32,	// (0x0001dba5) list_single_pane_fp_g3

0x5cdc,	// (0x00016b4f) list_single_pane_fp_g4_ParamLimits

0x5cdc,	// (0x00016b4f) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x000209f8) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x000209f8) list_single_pane_fp_g

0xcd46,	// (0x0001dbb9) list_single_pane_fp_t1_ParamLimits

0xcd46,	// (0x0001dbb9) list_single_pane_fp_t1

0xcd5d,	// (0x0001dbd0) list_single_graphic_pane_fp_g1_ParamLimits

0xcd5d,	// (0x0001dbd0) list_single_graphic_pane_fp_g1

0x5cd0,	// (0x00016b43) list_single_graphic_pane_fp_g2_ParamLimits

0x5cd0,	// (0x00016b43) list_single_graphic_pane_fp_g2

0xc103,	// (0x0001cf76) list_single_graphic_pane_fp_g3_ParamLimits

0xc103,	// (0x0001cf76) list_single_graphic_pane_fp_g3

0xcd32,	// (0x0001dba5) list_single_graphic_pane_fp_g4_ParamLimits

0xcd32,	// (0x0001dba5) list_single_graphic_pane_fp_g4

0x5cdc,	// (0x00016b4f) list_single_graphic_pane_fp_g5_ParamLimits

0x5cdc,	// (0x00016b4f) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00020a01) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00020a01) list_single_graphic_pane_fp_g

0xcd69,	// (0x0001dbdc) list_single_graphic_pane_fp_t1_ParamLimits

0xcd69,	// (0x0001dbdc) list_single_graphic_pane_fp_t1

0xcd5d,	// (0x0001dbd0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xcd5d,	// (0x0001dbd0) list_single_graphic_heading_pane_fp_g1

0x5cd0,	// (0x00016b43) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5cd0,	// (0x00016b43) list_single_graphic_heading_pane_fp_g2

0xc103,	// (0x0001cf76) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc103,	// (0x0001cf76) list_single_graphic_heading_pane_fp_g3

0xcd32,	// (0x0001dba5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xcd32,	// (0x0001dba5) list_single_graphic_heading_pane_fp_g4

0x5cdc,	// (0x00016b4f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5cdc,	// (0x00016b4f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00020a01) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00020a01) list_single_graphic_heading_pane_fp_g

0xcd7f,	// (0x0001dbf2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xcd7f,	// (0x0001dbf2) list_single_graphic_heading_pane_fp_t1

0xcd95,	// (0x0001dc08) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xcd95,	// (0x0001dc08) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00020a0c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00020a0c) list_single_graphic_heading_pane_fp_t

0xcda7,	// (0x0001dc1a) list_single_cale_day_pane_fp_g1_ParamLimits

0xcda7,	// (0x0001dc1a) list_single_cale_day_pane_fp_g1

0x5d81,	// (0x00016bf4) list_single_cale_day_pane_fp_g2_ParamLimits

0x5d81,	// (0x00016bf4) list_single_cale_day_pane_fp_g2

0xcddf,	// (0x0001dc52) list_single_cale_day_pane_fp_g3_ParamLimits

0xcddf,	// (0x0001dc52) list_single_cale_day_pane_fp_g3

0xce07,	// (0x0001dc7a) list_single_cale_day_pane_fp_g4_ParamLimits

0xce07,	// (0x0001dc7a) list_single_cale_day_pane_fp_g4

0xce2b,	// (0x0001dc9e) list_single_cale_day_pane_fp_g5_ParamLimits

0xce2b,	// (0x0001dc9e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00020a11) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00020a11) list_single_cale_day_pane_fp_g

0xce4f,	// (0x0001dcc2) list_single_cale_day_pane_fp_t1_ParamLimits

0xce4f,	// (0x0001dcc2) list_single_cale_day_pane_fp_t1

0xce75,	// (0x0001dce8) list_single_cale_day_pane_fp_t2_ParamLimits

0xce75,	// (0x0001dce8) list_single_cale_day_pane_fp_t2

0xce8e,	// (0x0001dd01) list_single_cale_day_pane_fp_t3_ParamLimits

0xce8e,	// (0x0001dd01) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00020a1c) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00020a1c) list_single_cale_day_pane_fp_t

0x5cd0,	// (0x00016b43) list_empty_pane_fp_g1_ParamLimits

0x5cd0,	// (0x00016b43) list_empty_pane_fp_g1

0xcea7,	// (0x0001dd1a) list_empty_pane_fp_t1

0xceb5,	// (0x0001dd28) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00020a23) list_empty_pane_fp_t

0x5cd0,	// (0x00016b43) list_single_heading_pane_fp_g1_ParamLimits

0x5cd0,	// (0x00016b43) list_single_heading_pane_fp_g1

0xc103,	// (0x0001cf76) list_single_heading_pane_fp_g2_ParamLimits

0xc103,	// (0x0001cf76) list_single_heading_pane_fp_g2

0xcd32,	// (0x0001dba5) list_single_heading_pane_fp_g3_ParamLimits

0xcd32,	// (0x0001dba5) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00020a28) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00020a28) list_single_heading_pane_fp_g

0xcec3,	// (0x0001dd36) list_single_heading_pane_fp_t1_ParamLimits

0xcec3,	// (0x0001dd36) list_single_heading_pane_fp_t1

0xced5,	// (0x0001dd48) list_single_heading_pane_fp_t2_ParamLimits

0xced5,	// (0x0001dd48) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00020a2f) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00020a2f) list_single_heading_pane_fp_t

0x1850,	// (0x000126c3) aid_size_cell_fast

0x0947,	// (0x000117ba) soft_indicator_pane_cp1_t1

0x188a,	// (0x000126fd) cell_app_pane_cp2_ParamLimits

0x188a,	// (0x000126fd) cell_app_pane_cp2

0xe534,	// (0x0001f3a7) fep_hwr_candidate_drop_down_list_pane

0x9812,	// (0x0001a685) fep_hwr_candidate_pane_g3_ParamLimits

0x9812,	// (0x0001a685) fep_hwr_candidate_pane_g3

0x981f,	// (0x0001a692) fep_hwr_candidate_pane_g4_ParamLimits

0x981f,	// (0x0001a692) fep_hwr_candidate_pane_g4

0x0002,

0xfb30,	// (0x000209a3) fep_hwr_candidate_pane_g_ParamLimits

0xfb30,	// (0x000209a3) fep_hwr_candidate_pane_g

0x57e6,	// (0x00016659) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x57e6,	// (0x00016659) fep_vkb_candidate_drop_down_list_pane

0x5be9,	// (0x00016a5c) fep_vkb_candidate_pane_g3

0x5bf1,	// (0x00016a64) fep_vkb_candidate_pane_g4

0x0002,

0xfb5d,	// (0x000209d0) fep_vkb_candidate_pane_g

0x58f1,	// (0x00016764) cell_hwr_candidate_pane_g1_ParamLimits

0x5f41,	// (0x00016db4) cell_hwr_candidate_pane_g3_ParamLimits

0x5f41,	// (0x00016db4) cell_hwr_candidate_pane_g3

0x5f62,	// (0x00016dd5) cell_hwr_candidate_pane_g4_ParamLimits

0x5f62,	// (0x00016dd5) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x000209ea) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x000209ea) cell_hwr_candidate_pane_g

0x5c08,	// (0x00016a7b) cell_vkb_candidate_pane_g3_ParamLimits

0x5c08,	// (0x00016a7b) cell_vkb_candidate_pane_g3

0x5c23,	// (0x00016a96) cell_vkb_candidate_pane_g4_ParamLimits

0x5c23,	// (0x00016a96) cell_vkb_candidate_pane_g4

0x5e99,	// (0x00016d0c) cell_app_pane_cp2_g1_ParamLimits

0x5e99,	// (0x00016d0c) cell_app_pane_cp2_g1

0x5eb7,	// (0x00016d2a) cell_app_pane_cp2_g2_ParamLimits

0x5eb7,	// (0x00016d2a) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00020a34) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00020a34) cell_app_pane_cp2_g

0x5ec3,	// (0x00016d36) cell_app_pane_cp2_t1_ParamLimits

0x5ec3,	// (0x00016d36) cell_app_pane_cp2_t1

0x14f0,	// (0x00012363) grid_highlight_pane_cp1_ParamLimits

0x14f0,	// (0x00012363) grid_highlight_pane_cp1

0xe770,	// (0x0001f5e3) cell_hwr_candidate_pane_cp1_ParamLimits

0xe770,	// (0x0001f5e3) cell_hwr_candidate_pane_cp1

0x58f1,	// (0x00016764) fep_hwr_candidate_drop_down_list_pane_g1

0x5ef5,	// (0x00016d68) fep_hwr_candidate_drop_down_list_pane_g2

0x5f02,	// (0x00016d75) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00020a39) fep_hwr_candidate_drop_down_list_pane_g

0xe78f,	// (0x0001f602) fep_hwr_candidate_drop_down_list_scroll_pane

0xe798,	// (0x0001f60b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe798,	// (0x0001f60b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe7a5,	// (0x0001f618) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe7a5,	// (0x0001f618) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe7b2,	// (0x0001f625) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe7b2,	// (0x0001f625) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5c08,	// (0x00016a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5c08,	// (0x00016a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5c23,	// (0x00016a96) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5c23,	// (0x00016a96) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe7bf,	// (0x0001f632) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe7bf,	// (0x0001f632) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe7da,	// (0x0001f64d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe7da,	// (0x0001f64d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe7f5,	// (0x0001f668) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe7f5,	// (0x0001f668) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00020a40) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00020a40) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5ed5,	// (0x00016d48) cell_vkb_candidate_pane_cp1_ParamLimits

0x5ed5,	// (0x00016d48) cell_vkb_candidate_pane_cp1

0x58f1,	// (0x00016764) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x58f1,	// (0x00016764) fep_vkb_candidate_drop_down_list_pane_g1

0x5ef5,	// (0x00016d68) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5ef5,	// (0x00016d68) fep_vkb_candidate_drop_down_list_pane_g2

0x5f02,	// (0x00016d75) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5f02,	// (0x00016d75) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00020a39) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc6,	// (0x00020a39) fep_vkb_candidate_drop_down_list_pane_g

0x5f0f,	// (0x00016d82) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5f0f,	// (0x00016d82) fep_vkb_candidate_drop_down_list_scroll_pane

0x5f1c,	// (0x00016d8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5f1c,	// (0x00016d8f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5f29,	// (0x00016d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5f29,	// (0x00016d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5f35,	// (0x00016da8) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5f35,	// (0x00016da8) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5f41,	// (0x00016db4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5f41,	// (0x00016db4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5f62,	// (0x00016dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5f62,	// (0x00016dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5f83,	// (0x00016df6) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5f83,	// (0x00016df6) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5fa4,	// (0x00016e17) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5fa4,	// (0x00016e17) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5fc5,	// (0x00016e38) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5fc5,	// (0x00016e38) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x00020a51) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x00020a51) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x065e,	// (0x000114d1) title_pane_g1_ParamLimits

0x066b,	// (0x000114de) title_pane_g2_ParamLimits

0xf554,	// (0x000203c7) title_pane_g_ParamLimits

0x1c98,	// (0x00012b0b) aid_call2_pane

0x1c90,	// (0x00012b03) aid_call_pane

0x1ca0,	// (0x00012b13) popup_clock_analogue_window_g1

0x1ca0,	// (0x00012b13) popup_clock_analogue_window_g2

0xd70f,	// (0x0001e582) popup_clock_analogue_window_g3

0xd718,	// (0x0001e58b) popup_clock_analogue_window_g4

0x064a,	// (0x000114bd) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00020571) popup_clock_analogue_window_g

0xd720,	// (0x0001e593) popup_clock_analogue_window_t1

0xd72e,	// (0x0001e5a1) clock_digital_number_pane_ParamLimits

0xd72e,	// (0x0001e5a1) clock_digital_number_pane

0xd73a,	// (0x0001e5ad) clock_digital_number_pane_cp02_ParamLimits

0xd73a,	// (0x0001e5ad) clock_digital_number_pane_cp02

0xd746,	// (0x0001e5b9) clock_digital_number_pane_cp03_ParamLimits

0xd746,	// (0x0001e5b9) clock_digital_number_pane_cp03

0xd752,	// (0x0001e5c5) clock_digital_number_pane_cp04_ParamLimits

0xd752,	// (0x0001e5c5) clock_digital_number_pane_cp04

0xd75e,	// (0x0001e5d1) clock_digital_separator_pane_ParamLimits

0xd75e,	// (0x0001e5d1) clock_digital_separator_pane

0xd76a,	// (0x0001e5dd) popup_clock_digital_window_t1_ParamLimits

0xd76a,	// (0x0001e5dd) popup_clock_digital_window_t1

0x064a,	// (0x000114bd) clock_digital_number_pane_g1

0x064a,	// (0x000114bd) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002057c) clock_digital_number_pane_g

0x064a,	// (0x000114bd) clock_digital_separator_pane_g1

0x064a,	// (0x000114bd) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002057c) clock_digital_separator_pane_g

0x2694,	// (0x00013507) aid_fill_nsta_ParamLimits

0x27d6,	// (0x00013649) indicator_nsta_pane_ParamLimits

0x294f,	// (0x000137c2) popup_clock_analogue_window

0x294f,	// (0x000137c2) popup_clock_digital_window

0x0734,	// (0x000115a7) grid_indicator_nsta_pane_ParamLimits

0x5001,	// (0x00015e74) clock_nsta_pane_t2

0x0001,

0xfab0,	// (0x00020923) clock_nsta_pane_t

0xd6d3,	// (0x0001e546) aid_size_max_handle

0xd6dd,	// (0x0001e550) aid_size_min_handle

0x2326,	// (0x00013199) editor_scroll_pane

0x5fe0,	// (0x00016e53) ex_editor_pane

0x17be,	// (0x00012631) scroll_pane_cp13

0x0f44,	// (0x00011db7) scroll_pane_cp14

0x1ccf,	// (0x00012b42) scroll_pane_cp36

0x1cfb,	// (0x00012b6e) list_single_graphic_hl_pane_cp2_ParamLimits

0x1cfb,	// (0x00012b6e) list_single_graphic_hl_pane_cp2

0xc9e0,	// (0x0001d853) list_single_graphic_hl_pane_ParamLimits

0xc9e0,	// (0x0001d853) list_single_graphic_hl_pane

0xceeb,	// (0x0001dd5e) aid_size_min_hl_cp1

0x5ff1,	// (0x00016e64) list_highlight_pane_cp34_ParamLimits

0x5ff1,	// (0x00016e64) list_highlight_pane_cp34

0x6002,	// (0x00016e75) list_single_graphic_hl_pane_g1_ParamLimits

0x6002,	// (0x00016e75) list_single_graphic_hl_pane_g1

0xcef4,	// (0x0001dd67) list_single_graphic_hl_pane_g2_ParamLimits

0xcef4,	// (0x0001dd67) list_single_graphic_hl_pane_g2

0xcef4,	// (0x0001dd67) list_single_graphic_hl_pane_g3_ParamLimits

0xcef4,	// (0x0001dd67) list_single_graphic_hl_pane_g3

0xcf00,	// (0x0001dd73) list_single_graphic_hl_pane_g4_ParamLimits

0xcf00,	// (0x0001dd73) list_single_graphic_hl_pane_g4

0xcf0c,	// (0x0001dd7f) list_single_graphic_hl_pane_g5_ParamLimits

0xcf0c,	// (0x0001dd7f) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x00020a62) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x00020a62) list_single_graphic_hl_pane_g

0xcf20,	// (0x0001dd93) list_single_graphic_hl_pane_t1_ParamLimits

0xcf20,	// (0x0001dd93) list_single_graphic_hl_pane_t1

0x6045,	// (0x00016eb8) aid_size_min_hl_cp2

0x604e,	// (0x00016ec1) list_highlight_pane_cp34_cp2_ParamLimits

0x604e,	// (0x00016ec1) list_highlight_pane_cp34_cp2

0x6002,	// (0x00016e75) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6002,	// (0x00016e75) list_single_graphic_hl_pane_g1_cp2

0x605b,	// (0x00016ece) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x605b,	// (0x00016ece) list_single_graphic_hl_pane_g2_cp2

0x6067,	// (0x00016eda) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6067,	// (0x00016eda) list_single_graphic_hl_pane_g3_cp2

0x0f58,	// (0x00011dcb) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0f58,	// (0x00011dcb) list_single_graphic_hl_pane_g4_cp2

0x6075,	// (0x00016ee8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6075,	// (0x00016ee8) list_single_graphic_hl_pane_g5_cp2

0xda15,	// (0x0001e888) control_pane_g4_ParamLimits

0xda15,	// (0x0001e888) control_pane_g4

0x266a,	// (0x000134dd) bg_popup_sub_pane_cp10_ParamLimits

0x568d,	// (0x00016500) list_choice_list_pane_ParamLimits

0x569c,	// (0x0001650f) scroll_pane_cp23

0x09d7,	// (0x0001184a) bg_popup_preview_window_pane_cp02_ParamLimits

0x5c74,	// (0x00016ae7) list_preview_fixed_pane_ParamLimits

0x5c8a,	// (0x00016afd) list_preview_fixed_pane_cp_ParamLimits

0x5c8a,	// (0x00016afd) list_preview_fixed_pane_cp

0x5c96,	// (0x00016b09) popup_preview_fixed_window_g1_ParamLimits

0x5c96,	// (0x00016b09) popup_preview_fixed_window_g1

0x5ca2,	// (0x00016b15) popup_preview_fixed_window_g2_ParamLimits

0x5ca2,	// (0x00016b15) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x000209f1) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x000209f1) popup_preview_fixed_window_g

0xd647,	// (0x0001e4ba) aid_navi_side_left_pane_ParamLimits

0xd65c,	// (0x0001e4cf) aid_navi_side_right_pane_ParamLimits

0xd674,	// (0x0001e4e7) navi_icon_pane_stacon_ParamLimits

0xd688,	// (0x0001e4fb) navi_navi_pane_stacon_ParamLimits

0xd674,	// (0x0001e4e7) navi_text_pane_stacon_ParamLimits

0x0640,	// (0x000114b3) main_text_info_pane

0x609f,	// (0x00016f12) listscroll_text_info_pane

0x60a7,	// (0x00016f1a) list_text_info_pane_ParamLimits

0x60a7,	// (0x00016f1a) list_text_info_pane

0x60b6,	// (0x00016f29) scroll_pane_cp24_ParamLimits

0x60b6,	// (0x00016f29) scroll_pane_cp24

0x60d4,	// (0x00016f47) list_text_info_pane_t1_ParamLimits

0x60d4,	// (0x00016f47) list_text_info_pane_t1

0xdb5b,	// (0x0001e9ce) popup_fast_swap2_window_ParamLimits

0xdb5b,	// (0x0001e9ce) popup_fast_swap2_window

0x6109,	// (0x00016f7c) aid_size_cell_fast2

0x0640,	// (0x000114b3) bg_popup_window_pane_cp17

0x30eb,	// (0x00013f5e) heading_pane_cp2

0x0c17,	// (0x00011a8a) listscroll_fast2_pane

0x6113,	// (0x00016f86) grid_fast2_pane

0x611d,	// (0x00016f90) listscroll_fast2_pane_g1

0x6125,	// (0x00016f98) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x00020a6d) listscroll_fast2_pane_g

0x17be,	// (0x00012631) scroll_pane_cp26

0x612f,	// (0x00016fa2) cell_fast2_pane_ParamLimits

0x612f,	// (0x00016fa2) cell_fast2_pane

0x6144,	// (0x00016fb7) cell_fast2_pane_g1

0x614d,	// (0x00016fc0) cell_fast2_pane_g2

0x6156,	// (0x00016fc9) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x00020a72) cell_fast2_pane_g

0x0d01,	// (0x00011b74) grid_highlight_pane_cp9

0x0d16,	// (0x00011b89) main_eswt_pane_ParamLimits

0x0d16,	// (0x00011b89) main_eswt_pane

0x60cb,	// (0x00016f3e) list_single_text_info_pane

0x615e,	// (0x00016fd1) eswt_ctrl_button_pane

0x615e,	// (0x00016fd1) eswt_ctrl_canvas_pane

0x6166,	// (0x00016fd9) eswt_ctrl_combo_pane

0x615e,	// (0x00016fd1) eswt_ctrl_default_pane

0x615e,	// (0x00016fd1) eswt_ctrl_label_pane

0x616e,	// (0x00016fe1) eswt_ctrl_wait_pane

0x6176,	// (0x00016fe9) eswt_shell_pane

0x0640,	// (0x000114b3) listscroll_eswt_app_pane

0x6196,	// (0x00017009) popup_eswt_tasktip_window_ParamLimits

0x6196,	// (0x00017009) popup_eswt_tasktip_window

0x2caa,	// (0x00013b1d) bg_popup_window_pane_cp18

0x61a7,	// (0x0001701a) eswt_control_pane_g1_ParamLimits

0x61a7,	// (0x0001701a) eswt_control_pane_g1

0x61b4,	// (0x00017027) eswt_control_pane_g2_ParamLimits

0x61b4,	// (0x00017027) eswt_control_pane_g2

0x61c1,	// (0x00017034) eswt_control_pane_g3_ParamLimits

0x61c1,	// (0x00017034) eswt_control_pane_g3

0x61ce,	// (0x00017041) eswt_control_pane_g4_ParamLimits

0x61ce,	// (0x00017041) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x00020a79) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x00020a79) eswt_control_pane_g

0x14f0,	// (0x00012363) bg_button_pane_ParamLimits

0x14f0,	// (0x00012363) bg_button_pane

0x0d16,	// (0x00011b89) common_borders_pane_copy2_ParamLimits

0x0d16,	// (0x00011b89) common_borders_pane_copy2

0x61db,	// (0x0001704e) control_button_pane_g1_ParamLimits

0x61db,	// (0x0001704e) control_button_pane_g1

0x61e7,	// (0x0001705a) control_button_pane_g2_ParamLimits

0x61e7,	// (0x0001705a) control_button_pane_g2

0x61f3,	// (0x00017066) control_button_pane_g3_ParamLimits

0x61f3,	// (0x00017066) control_button_pane_g3

0x0002,

0xfc0f,	// (0x00020a82) control_button_pane_g_ParamLimits

0xfc0f,	// (0x00020a82) control_button_pane_g

0x6207,	// (0x0001707a) control_button_pane_t1

0x6215,	// (0x00017088) control_button_pane_t2

0x0001,

0xfc16,	// (0x00020a89) control_button_pane_t

0x2b86,	// (0x000139f9) bg_button_pane_g1

0x2b96,	// (0x00013a09) bg_button_pane_g2

0x2b8e,	// (0x00013a01) bg_button_pane_g3

0x2ba6,	// (0x00013a19) bg_button_pane_g4

0x2b9e,	// (0x00013a11) bg_button_pane_g5

0x2bae,	// (0x00013a21) bg_button_pane_g6

0x2bb6,	// (0x00013a29) bg_button_pane_g7

0x2bc6,	// (0x00013a39) bg_button_pane_g8

0x2bbe,	// (0x00013a31) bg_button_pane_g9

0x0008,

0xf865,	// (0x000206d8) bg_button_pane_g

0x5648,	// (0x000164bb) common_borders_pane_ParamLimits

0x5648,	// (0x000164bb) common_borders_pane

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy1_ParamLimits

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy1

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy1_ParamLimits

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy1

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy1_ParamLimits

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy1

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy1_ParamLimits

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy1

0x5683,	// (0x000164f6) bg_eswt_ctrl_canvas_pane_g1

0x5648,	// (0x000164bb) common_borders_pane_cp2_ParamLimits

0x5648,	// (0x000164bb) common_borders_pane_cp2

0x5648,	// (0x000164bb) common_borders_pane_cp3_ParamLimits

0x5648,	// (0x000164bb) common_borders_pane_cp3

0x6223,	// (0x00017096) separator_horizontal_pane

0x622b,	// (0x0001709e) separator_vertical_pane

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy2_ParamLimits

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy2

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy2_ParamLimits

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy2

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy2_ParamLimits

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy2

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy2_ParamLimits

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy2

0x0640,	// (0x000114b3) common_borders_pane_cp4

0x6234,	// (0x000170a7) separator_horizontal_pane_g1

0x623d,	// (0x000170b0) separator_horizontal_pane_g2

0x6246,	// (0x000170b9) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x00020a8e) separator_horizontal_pane_g

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy3_ParamLimits

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy3

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy3_ParamLimits

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy3

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy3_ParamLimits

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy3

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy3_ParamLimits

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy3

0x0640,	// (0x000114b3) common_borders_pane_cp5

0x624f,	// (0x000170c2) separator_vertical_pane_g1

0x6258,	// (0x000170cb) separator_vertical_pane_g2

0x6261,	// (0x000170d4) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x00020a95) separator_vertical_pane_g

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy4_ParamLimits

0x61a7,	// (0x0001701a) eswt_control_pane_g1_copy4

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy4_ParamLimits

0x61b4,	// (0x00017027) eswt_control_pane_g2_copy4

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy4_ParamLimits

0x61c1,	// (0x00017034) eswt_control_pane_g3_copy4

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy4_ParamLimits

0x61ce,	// (0x00017041) eswt_control_pane_g4_copy4

0x626a,	// (0x000170dd) eswt_ctrl_combo_button_pane

0x6272,	// (0x000170e5) eswt_ctrl_input_pane

0x627a,	// (0x000170ed) popup_choice_list_window_cp70

0x6282,	// (0x000170f5) eswt_ctrl_input_pane_t1

0x0640,	// (0x000114b3) input_focus_pane_cp70

0x5648,	// (0x000164bb) bg_button_pane_cp70_ParamLimits

0x5648,	// (0x000164bb) bg_button_pane_cp70

0x6290,	// (0x00017103) eswt_ctrl_combo_button_pane_g1

0x6298,	// (0x0001710b) wait_bar_pane_cp70

0x2caa,	// (0x00013b1d) bg_popup_window_pane_cp70_ParamLimits

0x2caa,	// (0x00013b1d) bg_popup_window_pane_cp70

0x62a0,	// (0x00017113) popup_eswt_tasktip_window_t1

0x62b6,	// (0x00017129) wait_bar_pane_cp71_ParamLimits

0x62b6,	// (0x00017129) wait_bar_pane_cp71

0x62c2,	// (0x00017135) grid_eswt_app_pane

0x1ad3,	// (0x00012946) scroll_pane_cp70

0x62cb,	// (0x0001713e) cell_eswt_app_pane_ParamLimits

0x62cb,	// (0x0001713e) cell_eswt_app_pane

0x62ff,	// (0x00017172) cell_eswt_app_pane_g1_ParamLimits

0x62ff,	// (0x00017172) cell_eswt_app_pane_g1

0x632e,	// (0x000171a1) cell_eswt_app_pane_g2_ParamLimits

0x632e,	// (0x000171a1) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x00020a9c) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x00020a9c) cell_eswt_app_pane_g

0x6352,	// (0x000171c5) cell_eswt_app_pane_t1_ParamLimits

0x6352,	// (0x000171c5) cell_eswt_app_pane_t1

0x6384,	// (0x000171f7) grid_highlight_pane_cp70_ParamLimits

0x6384,	// (0x000171f7) grid_highlight_pane_cp70

0x2207,	// (0x0001307a) set_content_pane_g1

0x25c2,	// (0x00013435) status_small_volume_pane

0xe810,	// (0x0001f683) status_small_volume_pane_g1

0xe818,	// (0x0001f68b) volume_small2_pane

0xe821,	// (0x0001f694) volume_small2_pane_g1

0xe82a,	// (0x0001f69d) volume_small2_pane_g2

0xe833,	// (0x0001f6a6) volume_small2_pane_g3

0xe83c,	// (0x0001f6af) volume_small2_pane_g4

0xe845,	// (0x0001f6b8) volume_small2_pane_g5

0xe84e,	// (0x0001f6c1) volume_small2_pane_g6

0xe857,	// (0x0001f6ca) volume_small2_pane_g7

0xe860,	// (0x0001f6d3) volume_small2_pane_g8

0xe869,	// (0x0001f6dc) volume_small2_pane_g9

0xe872,	// (0x0001f6e5) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x00020aa1) volume_small2_pane_g

0x5a39,	// (0x000168ac) fep_vkb_top_text_pane_g1_ParamLimits

0x5a54,	// (0x000168c7) fep_vkb_top_text_pane_t1_ParamLimits

0x5cae,	// (0x00016b21) popup_preview_fixed_window_g3_ParamLimits

0x5cae,	// (0x00016b21) popup_preview_fixed_window_g3

0xe002,	// (0x0001ee75) popup_toolbar_trans_pane

0x405a,	// (0x00014ecd) aid_height_set_list_ParamLimits

0x406b,	// (0x00014ede) aid_size_parent_ParamLimits

0x266a,	// (0x000134dd) list_highlight_pane_cp2_ParamLimits

0x2207,	// (0x0001307a) set_content_pane_g1_ParamLimits

0xca02,	// (0x0001d875) list_single_image_pane_ParamLimits

0xca02,	// (0x0001d875) list_single_image_pane

0x6390,	// (0x00017203) aid_size_cell_image_ParamLimits

0x6390,	// (0x00017203) aid_size_cell_image

0x639d,	// (0x00017210) grid_single_image_pane_ParamLimits

0x639d,	// (0x00017210) grid_single_image_pane

0x63a9,	// (0x0001721c) list_single_image_pane_g1_ParamLimits

0x63a9,	// (0x0001721c) list_single_image_pane_g1

0x63b5,	// (0x00017228) list_single_image_pane_g2_ParamLimits

0x63b5,	// (0x00017228) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x00020ab6) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x00020ab6) list_single_image_pane_g

0x63c9,	// (0x0001723c) list_single_image_pane_t1_ParamLimits

0x63c9,	// (0x0001723c) list_single_image_pane_t1

0x63df,	// (0x00017252) cell_image_list_pane_ParamLimits

0x63df,	// (0x00017252) cell_image_list_pane

0x63f3,	// (0x00017266) cell_image_list_pane_g1

0x63fc,	// (0x0001726f) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x00020abb) cell_image_list_pane_g

0x6405,	// (0x00017278) aid_size_cell_tb_trans_pane

0x14f0,	// (0x00012363) bg_tb_trans_pane

0x6417,	// (0x0001728a) grid_tb_trans_pane

0x2b86,	// (0x000139f9) bg_tb_trans_pane_g1

0x2b96,	// (0x00013a09) bg_tb_trans_pane_g2

0x2b8e,	// (0x00013a01) bg_tb_trans_pane_g3

0x2ba6,	// (0x00013a19) bg_tb_trans_pane_g4

0x2b9e,	// (0x00013a11) bg_tb_trans_pane_g5

0x2bc6,	// (0x00013a39) bg_tb_trans_pane_g6

0x2bbe,	// (0x00013a31) bg_tb_trans_pane_g7

0x2bae,	// (0x00013a21) bg_tb_trans_pane_g8

0x2bb6,	// (0x00013a29) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x00020ac0) bg_tb_trans_pane_g

0x642b,	// (0x0001729e) cell_toolbar_trans_pane_ParamLimits

0x642b,	// (0x0001729e) cell_toolbar_trans_pane

0x5683,	// (0x000164f6) cell_toolbar_trans_pane_g1

0x51e4,	// (0x00016057) list_form2_midp_pane_t1

0x51f2,	// (0x00016065) list_form2_midp_pane_t2

0x0001,

0xfaf6,	// (0x00020969) list_form2_midp_pane_t

0x5200,	// (0x00016073) scroll_pane_cp51_ParamLimits

0x5406,	// (0x00016279) form2_midp_wait_pane_g1

0x540f,	// (0x00016282) form2_midp_wait_pane_g2

0x5418,	// (0x0001628b) form2_midp_wait_pane_g3

0x0002,

0xfb0b,	// (0x0002097e) form2_midp_wait_pane_g

0x0734,	// (0x000115a7) list_highlight_pane_cp21_ParamLimits

0x5466,	// (0x000162d9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5475,	// (0x000162e8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc975,	// (0x0001d7e8) list_single_2graphic_im_pane_ParamLimits

0xc975,	// (0x0001d7e8) list_single_2graphic_im_pane

0x6451,	// (0x000172c4) list_single_2graphic_im_pane_g1_ParamLimits

0x6451,	// (0x000172c4) list_single_2graphic_im_pane_g1

0x6462,	// (0x000172d5) list_single_2graphic_im_pane_g2_ParamLimits

0x6462,	// (0x000172d5) list_single_2graphic_im_pane_g2

0x646e,	// (0x000172e1) list_single_2graphic_im_pane_g3_ParamLimits

0x646e,	// (0x000172e1) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x00020ad3) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x00020ad3) list_single_2graphic_im_pane_g

0x648e,	// (0x00017301) list_single_2graphic_im_pane_t1_ParamLimits

0x648e,	// (0x00017301) list_single_2graphic_im_pane_t1

0x5cba,	// (0x00016b2d) list_single_graphic_2heading_pane_fp_ParamLimits

0x5cba,	// (0x00016b2d) list_single_graphic_2heading_pane_fp

0xcd5d,	// (0x0001dbd0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xcd5d,	// (0x0001dbd0) list_single_graphic_2heading_pane_fp_g1

0x5cd0,	// (0x00016b43) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5cd0,	// (0x00016b43) list_single_graphic_2heading_pane_fp_g2

0xc103,	// (0x0001cf76) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc103,	// (0x0001cf76) list_single_graphic_2heading_pane_fp_g3

0xcd32,	// (0x0001dba5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xcd32,	// (0x0001dba5) list_single_graphic_2heading_pane_fp_g4

0x5cdc,	// (0x00016b4f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5cdc,	// (0x00016b4f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00020a01) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00020a01) list_single_graphic_2heading_pane_fp_g

0xcf36,	// (0x0001dda9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcf36,	// (0x0001dda9) list_single_graphic_2heading_pane_fp_t1

0xcd95,	// (0x0001dc08) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xcd95,	// (0x0001dc08) list_single_graphic_2heading_pane_fp_t2

0xcf4c,	// (0x0001ddbf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcf4c,	// (0x0001ddbf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x00020adc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x00020adc) list_single_graphic_2heading_pane_fp_t

0x570f,	// (0x00016582) fep_hwr_write_pane_g5_ParamLimits

0x570f,	// (0x00016582) fep_hwr_write_pane_g5

0x571b,	// (0x0001658e) fep_hwr_write_pane_g6_ParamLimits

0x571b,	// (0x0001658e) fep_hwr_write_pane_g6

0x6176,	// (0x00016fe9) eswt_shell_pane_ParamLimits

0x2caa,	// (0x00013b1d) bg_popup_window_pane_cp18_ParamLimits

0x3fa7,	// (0x00014e1a) heading_pane_cp70

0x62a0,	// (0x00017113) popup_eswt_tasktip_window_t1_ParamLimits

0x26e9,	// (0x0001355c) aid_touch_tab_arrow_left

0x26f5,	// (0x00013568) aid_touch_tab_arrow_right

0x067c,	// (0x000114ef) title_pane_g3_ParamLimits

0x067c,	// (0x000114ef) title_pane_g3

0x13db,	// (0x0001224e) set_value_pane_g1

0xe002,	// (0x0001ee75) popup_toolbar_trans_pane_ParamLimits

0x6405,	// (0x00017278) aid_size_cell_tb_trans_pane_ParamLimits

0x14f0,	// (0x00012363) bg_tb_trans_pane_ParamLimits

0x6417,	// (0x0001728a) grid_tb_trans_pane_ParamLimits

0x09d7,	// (0x0001184a) cont_note_pane_ParamLimits

0x09d7,	// (0x0001184a) cont_note_pane

0x0d16,	// (0x00011b89) cont_snote2_single_text_pane_ParamLimits

0x0d16,	// (0x00011b89) cont_snote2_single_text_pane

0x0d16,	// (0x00011b89) cont_snote2_single_graphic_pane_ParamLimits

0x0d16,	// (0x00011b89) cont_snote2_single_graphic_pane

0x3301,	// (0x00014174) cont_note_wait_pane_ParamLimits

0x3301,	// (0x00014174) cont_note_wait_pane

0x3301,	// (0x00014174) cont_note_image_pane_ParamLimits

0x3301,	// (0x00014174) cont_note_image_pane

0x64eb,	// (0x0001735e) popup_note2_window_g1_ParamLimits

0x64eb,	// (0x0001735e) popup_note2_window_g1

0x651c,	// (0x0001738f) popup_note2_window_t1_ParamLimits

0x651c,	// (0x0001738f) popup_note2_window_t1

0x6561,	// (0x000173d4) popup_note2_window_t2_ParamLimits

0x6561,	// (0x000173d4) popup_note2_window_t2

0x65a6,	// (0x00017419) popup_note2_window_t3_ParamLimits

0x65a6,	// (0x00017419) popup_note2_window_t3

0x65eb,	// (0x0001745e) popup_note2_window_t4_ParamLimits

0x65eb,	// (0x0001745e) popup_note2_window_t4

0x0a4f,	// (0x000118c2) popup_note2_window_t5_ParamLimits

0x0a4f,	// (0x000118c2) popup_note2_window_t5

0x0004,

0xfc75,	// (0x00020ae8) popup_note2_window_t_ParamLimits

0xfc75,	// (0x00020ae8) popup_note2_window_t

0x661a,	// (0x0001748d) popup_note2_image_window_g1_ParamLimits

0x661a,	// (0x0001748d) popup_note2_image_window_g1

0x6626,	// (0x00017499) popup_note2_image_window_g2_ParamLimits

0x6626,	// (0x00017499) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x00020af3) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x00020af3) popup_note2_image_window_g

0x6638,	// (0x000174ab) popup_note2_image_window_t1_ParamLimits

0x6638,	// (0x000174ab) popup_note2_image_window_t1

0x6650,	// (0x000174c3) popup_note2_image_window_t2_ParamLimits

0x6650,	// (0x000174c3) popup_note2_image_window_t2

0x6668,	// (0x000174db) popup_note2_image_window_t3_ParamLimits

0x6668,	// (0x000174db) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x00020af8) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x00020af8) popup_note2_image_window_t

0x330f,	// (0x00014182) popup_note2_wait_window_g1_ParamLimits

0x330f,	// (0x00014182) popup_note2_wait_window_g1

0x6684,	// (0x000174f7) popup_note2_wait_window_g2_ParamLimits

0x6684,	// (0x000174f7) popup_note2_wait_window_g2

0x3327,	// (0x0001419a) popup_note2_wait_window_g3_ParamLimits

0x3327,	// (0x0001419a) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x00020aff) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x00020aff) popup_note2_wait_window_g

0x6690,	// (0x00017503) popup_note2_wait_window_t1_ParamLimits

0x6690,	// (0x00017503) popup_note2_wait_window_t1

0x66ae,	// (0x00017521) popup_note2_wait_window_t2_ParamLimits

0x66ae,	// (0x00017521) popup_note2_wait_window_t2

0x66cc,	// (0x0001753f) popup_note2_wait_window_t3_ParamLimits

0x66cc,	// (0x0001753f) popup_note2_wait_window_t3

0x66de,	// (0x00017551) popup_note2_wait_window_t4_ParamLimits

0x66de,	// (0x00017551) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x00020b06) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x00020b06) popup_note2_wait_window_t

0x66f0,	// (0x00017563) wait_bar2_pane_ParamLimits

0x66f0,	// (0x00017563) wait_bar2_pane

0x6708,	// (0x0001757b) popup_snote2_single_text_window_g1_ParamLimits

0x6708,	// (0x0001757b) popup_snote2_single_text_window_g1

0x6730,	// (0x000175a3) popup_snote2_single_text_window_t1_ParamLimits

0x6730,	// (0x000175a3) popup_snote2_single_text_window_t1

0x677c,	// (0x000175ef) popup_snote2_single_text_window_t2_ParamLimits

0x677c,	// (0x000175ef) popup_snote2_single_text_window_t2

0x67c8,	// (0x0001763b) popup_snote2_single_text_window_t3_ParamLimits

0x67c8,	// (0x0001763b) popup_snote2_single_text_window_t3

0x6809,	// (0x0001767c) popup_snote2_single_text_window_t4_ParamLimits

0x6809,	// (0x0001767c) popup_snote2_single_text_window_t4

0x683f,	// (0x000176b2) popup_snote2_single_text_window_t5_ParamLimits

0x683f,	// (0x000176b2) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x00020b0f) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x00020b0f) popup_snote2_single_text_window_t

0x686a,	// (0x000176dd) popup_snote2_single_graphic_window_g1_ParamLimits

0x686a,	// (0x000176dd) popup_snote2_single_graphic_window_g1

0x6892,	// (0x00017705) popup_snote2_single_graphic_window_g2_ParamLimits

0x6892,	// (0x00017705) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x00020b1a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x00020b1a) popup_snote2_single_graphic_window_g

0x68ba,	// (0x0001772d) popup_snote2_single_graphic_window_t1_ParamLimits

0x68ba,	// (0x0001772d) popup_snote2_single_graphic_window_t1

0x6906,	// (0x00017779) popup_snote2_single_graphic_window_t2_ParamLimits

0x6906,	// (0x00017779) popup_snote2_single_graphic_window_t2

0x67c8,	// (0x0001763b) popup_snote2_single_graphic_window_t3_ParamLimits

0x67c8,	// (0x0001763b) popup_snote2_single_graphic_window_t3

0x6809,	// (0x0001767c) popup_snote2_single_graphic_window_t4_ParamLimits

0x6809,	// (0x0001767c) popup_snote2_single_graphic_window_t4

0x683f,	// (0x000176b2) popup_snote2_single_graphic_window_t5_ParamLimits

0x683f,	// (0x000176b2) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x00020b1f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x00020b1f) popup_snote2_single_graphic_window_t

0x50bb,	// (0x00015f2e) clock_nsta_pane_cp2_t1

0x50bb,	// (0x00015f2e) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x0002093f) clock_nsta_pane_cp2_t

0xc57c,	// (0x0001d3ef) form_field_data_wide_pane_g1_ParamLimits

0x1169,	// (0x00011fdc) form_field_data_wide_pane_g2_ParamLimits

0x1169,	// (0x00011fdc) form_field_data_wide_pane_g2

0x1516,	// (0x00012389) form_field_data_wide_pane_g3_ParamLimits

0x1516,	// (0x00012389) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x000204f4) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x000204f4) form_field_data_wide_pane_g

0x4f9d,	// (0x00015e10) grid_touch_3_pane_ParamLimits

0x4f9d,	// (0x00015e10) grid_touch_3_pane

0x6952,	// (0x000177c5) cell_touch_3_pane_ParamLimits

0x6952,	// (0x000177c5) cell_touch_3_pane

0x5683,	// (0x000164f6) cell_touch_3_pane_g1

0x5683,	// (0x000164f6) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x000209c4) cell_touch_3_pane_g

0x0a81,	// (0x000118f4) cont_query_data_pane

0x0a89,	// (0x000118fc) cont_query_data_pane_cp1

0x6983,	// (0x000177f6) button_value_adjust_pane_cp7

0x698b,	// (0x000177fe) query_popup_pane_cp3

0x1d8c,	// (0x00012bff) bg_popup_sub_pane_cp22_ParamLimits

0xd789,	// (0x0001e5fc) navi_navi_volume_pane_cp2

0xd7a1,	// (0x0001e614) popup_side_volume_key_window_g2

0xd7ad,	// (0x0001e620) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002058a) popup_side_volume_key_window_g

0xd7c7,	// (0x0001e63a) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00020591) popup_side_volume_key_window_t

0x20d3,	// (0x00012f46) popup_side_volume_key_window_ParamLimits

0xc1e9,	// (0x0001d05c) list_double_graphic_pane_g4_ParamLimits

0xc1e9,	// (0x0001d05c) list_double_graphic_pane_g4

0xc9bc,	// (0x0001d82f) list_single_2heading_msg_pane_ParamLimits

0xc9bc,	// (0x0001d82f) list_single_2heading_msg_pane

0xcf6c,	// (0x0001dddf) list_single_2heading_msg_pane_g1_ParamLimits

0xcf6c,	// (0x0001dddf) list_single_2heading_msg_pane_g1

0xc018,	// (0x0001ce8b) list_single_2heading_msg_pane_g2_ParamLimits

0xc018,	// (0x0001ce8b) list_single_2heading_msg_pane_g2

0xcf78,	// (0x0001ddeb) list_single_2heading_msg_pane_g3_ParamLimits

0xcf78,	// (0x0001ddeb) list_single_2heading_msg_pane_g3

0xcf84,	// (0x0001ddf7) list_single_2heading_msg_pane_g4_ParamLimits

0xcf84,	// (0x0001ddf7) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x00020b2a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x00020b2a) list_single_2heading_msg_pane_g

0xcf9c,	// (0x0001de0f) list_single_2heading_msg_pane_t1_ParamLimits

0xcf9c,	// (0x0001de0f) list_single_2heading_msg_pane_t1

0xcfc4,	// (0x0001de37) list_single_2heading_msg_pane_t2_ParamLimits

0xcfc4,	// (0x0001de37) list_single_2heading_msg_pane_t2

0xcff8,	// (0x0001de6b) list_single_2heading_msg_pane_t3_ParamLimits

0xcff8,	// (0x0001de6b) list_single_2heading_msg_pane_t3

0xd031,	// (0x0001dea4) list_single_2heading_msg_pane_t4_ParamLimits

0xd031,	// (0x0001dea4) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x00020b33) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x00020b33) list_single_2heading_msg_pane_t

0x0688,	// (0x000114fb) title_pane_g4_ParamLimits

0x0688,	// (0x000114fb) title_pane_g4

0xd597,	// (0x0001e40a) title_pane_stacon_g3_ParamLimits

0xd597,	// (0x0001e40a) title_pane_stacon_g3

0x6482,	// (0x000172f5) list_single_2graphic_im_pane_g4_ParamLimits

0x6482,	// (0x000172f5) list_single_2graphic_im_pane_g4

0x3d68,	// (0x00014bdb) popup_side_volume_key_window_cp

0x4684,	// (0x000154f7) main_idle_act2_pane_t1

0xe0f2,	// (0x0001ef65) toolbar_button_pane_g10

0x0f0e,	// (0x00011d81) popup_toolbar_window_cp1

0x50ac,	// (0x00015f1f) clock_nsta_pane_cp_t1

0x50ac,	// (0x00015f1f) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x0002093a) clock_nsta_pane_cp_t

0xd789,	// (0x0001e5fc) navi_navi_volume_pane_cp2_ParamLimits

0xd795,	// (0x0001e608) popup_side_volume_key_window_g1_ParamLimits

0xd7a1,	// (0x0001e614) popup_side_volume_key_window_g2_ParamLimits

0xd7ad,	// (0x0001e620) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002058a) popup_side_volume_key_window_g_ParamLimits

0xe520,	// (0x0001f393) fep_hwr_aid_pane

0x9804,	// (0x0001a677) bg_fep_hwr_top_pane_g4_ParamLimits

0x56f1,	// (0x00016564) fep_hwr_top_pane_g1_ParamLimits

0x56df,	// (0x00016552) fep_hwr_top_pane_g2_ParamLimits

0xe5d9,	// (0x0001f44c) fep_hwr_top_pane_g3_ParamLimits

0xfb1c,	// (0x0002098f) fep_hwr_top_pane_g_ParamLimits

0xe5ee,	// (0x0001f461) fep_hwr_top_text_pane_ParamLimits

0x3b34,	// (0x000149a7) aid_touch_tab_arrow_arrow_2

0x3b2b,	// (0x0001499e) aid_touch_tab_arrow_left_2

0xe534,	// (0x0001f3a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe56b,	// (0x0001f3de) fep_hwr_prediction_pane

0x5848,	// (0x000166bb) fep_vkb_prediction_pane

0x5945,	// (0x000167b8) fep_vkb_side_pane_g3_ParamLimits

0x5945,	// (0x000167b8) fep_vkb_side_pane_g3

0x58f1,	// (0x00016764) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5ef5,	// (0x00016d68) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5f02,	// (0x00016d75) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00020a39) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a98,	// (0x0001790b) fep_hwr_prediction_pane_g1

0xe87b,	// (0x0001f6ee) fep_hwr_prediction_pane_g2

0xe883,	// (0x0001f6f6) fep_hwr_prediction_pane_g3

0xe88b,	// (0x0001f6fe) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x00020b3c) fep_hwr_prediction_pane_g

0x6a98,	// (0x0001790b) fep_vkb_prediction_pane_g1

0x6aa2,	// (0x00017915) fep_vkb_prediction_pane_g2

0x6aaa,	// (0x0001791d) fep_vkb_prediction_pane_g3

0x6ab2,	// (0x00017925) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x00020b45) fep_vkb_prediction_pane_g

0x44c7,	// (0x0001533a) slider_set_pane_g3

0x44db,	// (0x0001534e) slider_set_pane_g4

0x44f3,	// (0x00015366) slider_set_pane_g5

0x44c7,	// (0x0001533a) slider_set_pane_g6

0xe3be,	// (0x0001f231) slider_set_pane_g7

0x41cc,	// (0x0001503f) slider_form_pane_g3

0x41d5,	// (0x00015048) slider_form_pane_g4

0x41dd,	// (0x00015050) slider_form_pane_g5

0x41cc,	// (0x0001503f) slider_form_pane_g6

0x41e5,	// (0x00015058) slider_form_pane_g7

0x4986,	// (0x000157f9) slider_set_pane_vc_g3

0x498f,	// (0x00015802) slider_set_pane_vc_g4

0x4998,	// (0x0001580b) slider_set_pane_vc_g5

0x4986,	// (0x000157f9) slider_set_pane_vc_g6

0x49a1,	// (0x00015814) slider_set_pane_vc_g7

0x4d72,	// (0x00015be5) slider_form_pane_vc_g1

0x4d7b,	// (0x00015bee) slider_form_pane_vc_g2

0x4d84,	// (0x00015bf7) slider_form_pane_vc_g3

0x4d72,	// (0x00015be5) slider_form_pane_vc_g4

0x4d8d,	// (0x00015c00) slider_form_pane_vc_g5

0x0004,

0xfa99,	// (0x0002090c) slider_form_pane_vc_g

0x0640,	// (0x000114b3) main_idle_act3_pane

0x6aba,	// (0x0001792d) ai3_links_pane

0x6ac3,	// (0x00017936) popup_ai3_data_window_ParamLimits

0x6ac3,	// (0x00017936) popup_ai3_data_window

0x0640,	// (0x000114b3) grid_ai3_links_pane

0x6adb,	// (0x0001794e) cell_ai3_links_pane_ParamLimits

0x6adb,	// (0x0001794e) cell_ai3_links_pane

0x6af3,	// (0x00017966) bg_popup_sub_pane_cp11

0x6b00,	// (0x00017973) cell_ai3_links_pane_g1

0x0640,	// (0x000114b3) bg_popup_sub_pane_cp12

0x6b25,	// (0x00017998) heading_ai3_data_pane

0x6b2d,	// (0x000179a0) list_ai3_gene_pane

0x6b39,	// (0x000179ac) popup_ai3_data_window_g1

0x6b41,	// (0x000179b4) heading_ai3_data_pane_g1

0x6b49,	// (0x000179bc) heading_ai3_data_pane_t1

0x6b57,	// (0x000179ca) list_double_ai3_gene_pane_ParamLimits

0x6b57,	// (0x000179ca) list_double_ai3_gene_pane

0x6b64,	// (0x000179d7) list_single_ai3_gene_pane_ParamLimits

0x6b64,	// (0x000179d7) list_single_ai3_gene_pane

0x5648,	// (0x000164bb) list_highlight_pane_cp7_ParamLimits

0x5648,	// (0x000164bb) list_highlight_pane_cp7

0x6b71,	// (0x000179e4) list_single_a13_gene_pane_t1_ParamLimits

0x6b71,	// (0x000179e4) list_single_a13_gene_pane_t1

0x6b88,	// (0x000179fb) list_single_ai3_gene_pane_g1

0x6b91,	// (0x00017a04) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x00020b4e) list_single_ai3_gene_pane_g

0x6b99,	// (0x00017a0c) list_double_ai3_gene_pane_g1_ParamLimits

0x6b99,	// (0x00017a0c) list_double_ai3_gene_pane_g1

0x6ba5,	// (0x00017a18) list_double_ai3_gene_pane_t1_ParamLimits

0x6ba5,	// (0x00017a18) list_double_ai3_gene_pane_t1

0x6bc1,	// (0x00017a34) list_double_ai3_gene_pane_t2_ParamLimits

0x6bc1,	// (0x00017a34) list_double_ai3_gene_pane_t2

0x6bd6,	// (0x00017a49) list_double_ai3_gene_pane_t3_ParamLimits

0x6bd6,	// (0x00017a49) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x00020b53) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x00020b53) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcf62,	// (0x0001ddd5) aid_size_min_col_2

0x69a6,	// (0x00017819) aid_size_min_msg_ParamLimits

0x69a6,	// (0x00017819) aid_size_min_msg

0x5a45,	// (0x000168b8) fep_vkb_top_text_pane_g2_ParamLimits

0x5a45,	// (0x000168b8) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x000209bf) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x000209bf) fep_vkb_top_text_pane_g

0x0640,	// (0x000114b3) main_hc_apps_shell_pane

0x6bf3,	// (0x00017a66) grid_hc_apps_pane_ParamLimits

0x6bf3,	// (0x00017a66) grid_hc_apps_pane

0x6c02,	// (0x00017a75) list_hc_apps_pane

0x6c0a,	// (0x00017a7d) scroll_pane_cp37_ParamLimits

0x6c0a,	// (0x00017a7d) scroll_pane_cp37

0x6c16,	// (0x00017a89) cell_hc_apps_pane_ParamLimits

0x6c16,	// (0x00017a89) cell_hc_apps_pane

0x6cc4,	// (0x00017b37) cell_hc_apps_pane_g1_ParamLimits

0x6cc4,	// (0x00017b37) cell_hc_apps_pane_g1

0x6cf5,	// (0x00017b68) cell_hc_apps_pane_g2_ParamLimits

0x6cf5,	// (0x00017b68) cell_hc_apps_pane_g2

0x6d11,	// (0x00017b84) cell_hc_apps_pane_g3_ParamLimits

0x6d11,	// (0x00017b84) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x00020b5a) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x00020b5a) cell_hc_apps_pane_g

0x6d33,	// (0x00017ba6) cell_hc_apps_pane_t1_ParamLimits

0x6d33,	// (0x00017ba6) cell_hc_apps_pane_t1

0x09d7,	// (0x0001184a) grid_highlight_pane_cp10_ParamLimits

0x09d7,	// (0x0001184a) grid_highlight_pane_cp10

0x6d73,	// (0x00017be6) list_single_hc_apps_pane_ParamLimits

0x6d73,	// (0x00017be6) list_single_hc_apps_pane

0x6ddb,	// (0x00017c4e) list_single_hc_apps_pane_g1

0xd056,	// (0x0001dec9) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x00020b61) list_single_hc_apps_pane_g

0xd06f,	// (0x0001dee2) list_single_hc_apps_pane_g2_copy1

0xd08b,	// (0x0001defe) list_single_hc_apps_pane_t1

0x0734,	// (0x000115a7) bg_set_opt_pane_cp_ParamLimits

0xd4be,	// (0x0001e331) setting_slider_pane_t1_ParamLimits

0xd4d7,	// (0x0001e34a) setting_slider_pane_t2_ParamLimits

0xd4f1,	// (0x0001e364) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000203d7) setting_slider_pane_t_ParamLimits

0xd509,	// (0x0001e37c) slider_set_pane_ParamLimits

0xda29,	// (0x0001e89c) control_pane_g5_ParamLimits

0xda29,	// (0x0001e89c) control_pane_g5

0x4025,	// (0x00014e98) slider_set_pane_g1_ParamLimits

0xe3b2,	// (0x0001f225) slider_set_pane_g2_ParamLimits

0x44c7,	// (0x0001533a) slider_set_pane_g3_ParamLimits

0x44db,	// (0x0001534e) slider_set_pane_g4_ParamLimits

0x44f3,	// (0x00015366) slider_set_pane_g5_ParamLimits

0x44c7,	// (0x0001533a) slider_set_pane_g6_ParamLimits

0xe3be,	// (0x0001f231) slider_set_pane_g7_ParamLimits

0xf963,	// (0x000207d6) slider_set_pane_g_ParamLimits

0x21b2,	// (0x00013025) navi_icon_text_pane_ParamLimits

0x26aa,	// (0x0001351d) aid_fill_nsta_2_ParamLimits

0x26e9,	// (0x0001355c) aid_touch_tab_arrow_left_ParamLimits

0x26f5,	// (0x00013568) aid_touch_tab_arrow_right_ParamLimits

0x2761,	// (0x000135d4) clock_nsta_pane_ParamLimits

0x3b0d,	// (0x00014980) navi_icon_pane_g1_ParamLimits

0x3b19,	// (0x0001498c) navi_text_pane_t1_ParamLimits

0x51be,	// (0x00016031) navi_icon_text_pane_g1_ParamLimits

0x51ca,	// (0x0001603d) navi_icon_text_pane_t1_ParamLimits

0x6ddb,	// (0x00017c4e) list_single_hc_apps_pane_g1_ParamLimits

0xd056,	// (0x0001dec9) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x00020b61) list_single_hc_apps_pane_g_ParamLimits

0xd06f,	// (0x0001dee2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd08b,	// (0x0001defe) list_single_hc_apps_pane_t1_ParamLimits

0xd3c8,	// (0x0001e23b) popup_toolbar2_fixed_window_ParamLimits

0xd3c8,	// (0x0001e23b) popup_toolbar2_fixed_window

0xdff8,	// (0x0001ee6b) popup_toolbar2_float_window

0x0640,	// (0x000114b3) bg_popup_sub_pane_cp27

0x6e57,	// (0x00017cca) grid_toolbar2_float_pane

0x0640,	// (0x000114b3) bg_popup_sub_pane_cp26

0x6e57,	// (0x00017cca) grid_toolbar2_fixed_pane

0x6e5f,	// (0x00017cd2) cell_toolbar2_fixed_pane_ParamLimits

0x6e5f,	// (0x00017cd2) cell_toolbar2_fixed_pane

0x6e70,	// (0x00017ce3) cell_toolbar2_fixed_pane_g1

0x2af0,	// (0x00013963) toolbar2_fixed_button_pane

0x2b86,	// (0x000139f9) toolbar2_fixed_button_pane_g1

0x2b96,	// (0x00013a09) toolbar2_fixed_button_pane_g2

0x2b8e,	// (0x00013a01) toolbar2_fixed_button_pane_g3

0x2ba6,	// (0x00013a19) toolbar2_fixed_button_pane_g4

0x2b9e,	// (0x00013a11) toolbar2_fixed_button_pane_g5

0x2bae,	// (0x00013a21) toolbar2_fixed_button_pane_g6

0x2bb6,	// (0x00013a29) toolbar2_fixed_button_pane_g7

0x2bc6,	// (0x00013a39) toolbar2_fixed_button_pane_g8

0x2bbe,	// (0x00013a31) toolbar2_fixed_button_pane_g9

0x0008,

0xf865,	// (0x000206d8) toolbar2_fixed_button_pane_g

0x6e79,	// (0x00017cec) cell_toolbar2_float_pane_ParamLimits

0x6e79,	// (0x00017cec) cell_toolbar2_float_pane

0x6e8d,	// (0x00017d00) cell_toolbar2_float_pane_g1

0x2af0,	// (0x00013963) toolbar2_fixed_button_pane_cp

0x57af,	// (0x00016622) fep_vkb_accented_list_pane_ParamLimits

0x57af,	// (0x00016622) fep_vkb_accented_list_pane

0xe73c,	// (0x0001f5af) bg_popup_fep_shadow_pane_g9

0x2326,	// (0x00013199) bg_popup_fep_shadow_pane_cp3

0x17a5,	// (0x00012618) list_accented_list_pane

0x6e96,	// (0x00017d09) list_single_accented_list_pane_ParamLimits

0x6e96,	// (0x00017d09) list_single_accented_list_pane

0x2326,	// (0x00013199) list_highlight_pane_cp10

0x6ea7,	// (0x00017d1a) list_single_accented_list_pane_t1

0xdf48,	// (0x0001edbb) popup_slider_window_ParamLimits

0xdf48,	// (0x0001edbb) popup_slider_window

0x6993,	// (0x00017806) aid_indentation_list_msg

0x6f61,	// (0x00017dd4) bg_popup_window_pane_cp19

0x6fcb,	// (0x00017e3e) popup_slider_window_g1

0x6fe7,	// (0x00017e5a) popup_slider_window_g2

0x7003,	// (0x00017e76) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x00020b66) popup_slider_window_g

0x705f,	// (0x00017ed2) popup_slider_window_t1

0x70d3,	// (0x00017f46) small_volume_slider_vertical_pane

0x5683,	// (0x000164f6) small_volume_slider_vertical_pane_g1

0x5683,	// (0x000164f6) small_volume_slider_vertical_pane_g2

0x70ef,	// (0x00017f62) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x00020b78) small_volume_slider_vertical_pane_g

0xd198,	// (0x0001e00b) area_side_right_pane_ParamLimits

0xd198,	// (0x0001e00b) area_side_right_pane

0xe893,	// (0x0001f706) aid_size_side_button_ParamLimits

0xe893,	// (0x0001f706) aid_size_side_button

0xe8a7,	// (0x0001f71a) grid_sctrl_middle_pane_ParamLimits

0xe8a7,	// (0x0001f71a) grid_sctrl_middle_pane

0xe8c6,	// (0x0001f739) sctrl_sk_bottom_pane

0xe8d7,	// (0x0001f74a) sctrl_sk_top_pane

0xe8e9,	// (0x0001f75c) aid_touch_sctrl_top

0x09d7,	// (0x0001184a) bg_sctrl_sk_pane_ParamLimits

0x09d7,	// (0x0001184a) bg_sctrl_sk_pane

0xe8f6,	// (0x0001f769) sctrl_sk_top_pane_g1

0xe903,	// (0x0001f776) sctrl_sk_top_pane_t1

0xe8e9,	// (0x0001f75c) aid_touch_sctrl_bottom

0x09d7,	// (0x0001184a) bg_sctrl_sk_pane_cp_ParamLimits

0x09d7,	// (0x0001184a) bg_sctrl_sk_pane_cp

0xe91e,	// (0x0001f791) sctrl_sk_bottom_pane_g1

0xe903,	// (0x0001f776) sctrl_sk_bottom_pane_t1

0xe927,	// (0x0001f79a) cell_sctrl_middle_pane_ParamLimits

0xe927,	// (0x0001f79a) cell_sctrl_middle_pane

0xe942,	// (0x0001f7b5) aid_touch_sctrl_middle_ParamLimits

0xe942,	// (0x0001f7b5) aid_touch_sctrl_middle

0x14f0,	// (0x00012363) bg_sctrl_middle_pane_ParamLimits

0x14f0,	// (0x00012363) bg_sctrl_middle_pane

0x58f1,	// (0x00016764) cell_sctrl_middle_pane_g1_ParamLimits

0x58f1,	// (0x00016764) cell_sctrl_middle_pane_g1

0xe954,	// (0x0001f7c7) cell_sctrl_middle_pane_g2_ParamLimits

0xe954,	// (0x0001f7c7) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x00020b84) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x00020b84) cell_sctrl_middle_pane_g

0x2b86,	// (0x000139f9) bg_sctrl_middle_pane_g1

0x2b96,	// (0x00013a09) bg_sctrl_middle_pane_g2

0x2b8e,	// (0x00013a01) bg_sctrl_middle_pane_g3

0x2ba6,	// (0x00013a19) bg_sctrl_middle_pane_g4

0x2b9e,	// (0x00013a11) bg_sctrl_middle_pane_g5

0x2bae,	// (0x00013a21) bg_sctrl_middle_pane_g6

0x2bb6,	// (0x00013a29) bg_sctrl_middle_pane_g7

0x2bc6,	// (0x00013a39) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x00020b89) bg_sctrl_middle_pane_g

0x2bbe,	// (0x00013a31) bg_sctrl_middle_pane_g8_copy1

0x2b86,	// (0x000139f9) bg_sctrl_sk_pane_g1

0x2b96,	// (0x00013a09) bg_sctrl_sk_pane_g2

0x2b8e,	// (0x00013a01) bg_sctrl_sk_pane_g3

0x0008,

0xf865,	// (0x000206d8) bg_sctrl_sk_pane_g

0x0ed4,	// (0x00011d47) aid_size_touch_scroll_bar

0x2ba6,	// (0x00013a19) bg_sctrl_sk_pane_g4

0x2b9e,	// (0x00013a11) bg_sctrl_sk_pane_g5

0x2bae,	// (0x00013a21) bg_sctrl_sk_pane_g6

0x2bb6,	// (0x00013a29) bg_sctrl_sk_pane_g7

0x2bc6,	// (0x00013a39) bg_sctrl_sk_pane_g8

0x2bbe,	// (0x00013a31) bg_sctrl_sk_pane_g9

0xdbb9,	// (0x0001ea2c) popup_fep_china_hwr2_fs_candidate_window

0xdbc3,	// (0x0001ea36) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xdbc3,	// (0x0001ea36) popup_fep_china_hwr2_fs_control_window

0x58f1,	// (0x00016764) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x00020b7f) sctrl_sk_top_pane_g

0x70f8,	// (0x00017f6b) aid_fep_china_hwr2_fs_cell_ParamLimits

0x70f8,	// (0x00017f6b) aid_fep_china_hwr2_fs_cell

0x710a,	// (0x00017f7d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x710a,	// (0x00017f7d) bg_popup_fep_shadow_pane_cp4

0x7121,	// (0x00017f94) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x7121,	// (0x00017f94) bg_popup_fep_shadow_pane_cp5

0x7133,	// (0x00017fa6) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x7133,	// (0x00017fa6) popup_fep_china_hwr2_fs_control_bar_grid

0x7143,	// (0x00017fb6) popup_fep_china_hwr2_fs_control_funtion_grid

0x714b,	// (0x00017fbe) aid_fep_china_hwr2_fs_candi_cell

0x0640,	// (0x000114b3) bg_popup_fep_shadow_pane_cp6

0x7155,	// (0x00017fc8) popup_fep_china_hwr2_fs_candidate_grid

0x715f,	// (0x00017fd2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x715f,	// (0x00017fd2) cell_fep_china_hwr2_fs_funtion_grid

0x5683,	// (0x000164f6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7177,	// (0x00017fea) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7177,	// (0x00017fea) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7185,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7185,	// (0x00017ff8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x00020b9a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x00020b9a) cell_fep_china_hwr2_fs_funtion_grid_g

0x719b,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x719b,	// (0x0001800e) cell_fep_china_hwr2_fs_funtion_grid_t1

0x71b0,	// (0x00018023) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x71b0,	// (0x00018023) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x00020b9f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x00020b9f) cell_fep_china_hwr2_fs_funtion_grid_t

0x71cc,	// (0x0001803f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x71d4,	// (0x00018047) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x71dc,	// (0x0001804f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x00020ba4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x71e4,	// (0x00018057) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x71e4,	// (0x00018057) cell_fep_china_hwr2_fs_candidate_grid

0x71fd,	// (0x00018070) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7205,	// (0x00018078) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5683,	// (0x000164f6) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5683,	// (0x000164f6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x000209c4) cell_fep_china_hwr2_fs_candidate_grid_g

0x720d,	// (0x00018080) cell_fep_china_hwr2_fs_candidate_grid_t1

0x276e,	// (0x000135e1) clock_nsta_pane_cp_24_ParamLimits

0x276e,	// (0x000135e1) clock_nsta_pane_cp_24

0x27ec,	// (0x0001365f) indicator_nsta_pane_cp_24_ParamLimits

0x27ec,	// (0x0001365f) indicator_nsta_pane_cp_24

0x3989,	// (0x000147fc) heading_pane_g1

0x0001,

0xf8ca,	// (0x0002073d) heading_pane_g

0x448b,	// (0x000152fe) grid_sct_catagory_button_pane

0x44bb,	// (0x0001532e) scroll_pane_cp5_ParamLimits

0x520c,	// (0x0001607f) button_value_adjust_pane_cp5_ParamLimits

0x520c,	// (0x0001607f) button_value_adjust_pane_cp5

0x5306,	// (0x00016179) form2_midp_time_pane_ParamLimits

0x721b,	// (0x0001808e) cell_sct_catagory_button_pane_ParamLimits

0x721b,	// (0x0001808e) cell_sct_catagory_button_pane

0x5648,	// (0x000164bb) bg_button_pane_cp01_ParamLimits

0x5648,	// (0x000164bb) bg_button_pane_cp01

0x5683,	// (0x000164f6) cell_sct_catagory_button_pane_g1

0xdf87,	// (0x0001edfa) popup_tb_extension_window

0x722d,	// (0x000180a0) aid_size_cell_ext_ParamLimits

0x722d,	// (0x000180a0) aid_size_cell_ext

0x09d7,	// (0x0001184a) bg_tb_trans_pane_cp1_ParamLimits

0x09d7,	// (0x0001184a) bg_tb_trans_pane_cp1

0x724d,	// (0x000180c0) grid_tb_ext_pane_ParamLimits

0x724d,	// (0x000180c0) grid_tb_ext_pane

0x727f,	// (0x000180f2) cell_tb_ext_pane_ParamLimits

0x727f,	// (0x000180f2) cell_tb_ext_pane

0x7296,	// (0x00018109) cell_tb_ext_pane_g1_ParamLimits

0x7296,	// (0x00018109) cell_tb_ext_pane_g1

0x72b3,	// (0x00018126) cell_tb_ext_pane_t1

0x09d7,	// (0x0001184a) list_highlight_pane_cp11_ParamLimits

0x09d7,	// (0x0001184a) list_highlight_pane_cp11

0xd3e7,	// (0x0001e25a) popup_uni_indicator_window_ParamLimits

0xd3e7,	// (0x0001e25a) popup_uni_indicator_window

0x14f0,	// (0x00012363) bg_popup_sub_pane_cp14

0x72ce,	// (0x00018141) list_uniindi_pane

0x72da,	// (0x0001814d) uniindi_top_pane

0x09d7,	// (0x0001184a) bg_uniindi_top_pane

0x72f9,	// (0x0001816c) uniindi_top_pane_g1

0x730f,	// (0x00018182) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x00020bab) uniindi_top_pane_g

0x7339,	// (0x000181ac) uniindi_top_pane_t1

0x7363,	// (0x000181d6) list_single_uniindi_pane_ParamLimits

0x7363,	// (0x000181d6) list_single_uniindi_pane

0x5683,	// (0x000164f6) bg_uniindi_top_pane_g1

0x7376,	// (0x000181e9) list_single_uniindi_pane_g1

0x7389,	// (0x000181fc) list_single_uniindi_pane_t1

0x0640,	// (0x000114b3) control_bg_pane

0x73ae,	// (0x00018221) bg_sctrl_sk_pane_cp1

0x73b7,	// (0x0001822a) bg_sctrl_sk_pane_cp2

0x73c0,	// (0x00018233) control_bg_pane_g1

0x73c9,	// (0x0001823c) control_bg_pane_g2

0x0001,

0xfd41,	// (0x00020bb4) control_bg_pane_g

0x5047,	// (0x00015eba) cell_indicator_nsta_pane_g1_ParamLimits

0x5055,	// (0x00015ec8) cell_indicator_nsta_pane_g2_ParamLimits

0xfab5,	// (0x00020928) cell_indicator_nsta_pane_g_ParamLimits

0xcd1f,	// (0x0001db92) form2_midp_time_pane_t1_ParamLimits

0x0d16,	// (0x00011b89) main_idle_act4_pane_ParamLimits

0x0d16,	// (0x00011b89) main_idle_act4_pane

0xdf87,	// (0x0001edfa) popup_tb_extension_window_ParamLimits

0x726f,	// (0x000180e2) tb_ext_find_pane_ParamLimits

0x726f,	// (0x000180e2) tb_ext_find_pane

0x73d2,	// (0x00018245) ai_gene_pane_1_cp1

0x2463,	// (0x000132d6) ai_gene_pane_2_cp1

0x73da,	// (0x0001824d) list_single_idle_plugin_calendar_pane

0x73e3,	// (0x00018256) list_single_idle_plugin_notification_pane

0x73ec,	// (0x0001825f) list_single_idle_plugin_player_pane

0x73f5,	// (0x00018268) list_single_idle_plugin_shortcut_pane_ParamLimits

0x73f5,	// (0x00018268) list_single_idle_plugin_shortcut_pane

0x7417,	// (0x0001828a) main_idle_act4_pane_t1

0x7429,	// (0x0001829c) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x00020bb9) main_idle_act4_pane_t

0x743b,	// (0x000182ae) middle_sk_idle_act4_pane_ParamLimits

0x743b,	// (0x000182ae) middle_sk_idle_act4_pane

0x7451,	// (0x000182c4) popup_clock_digital_analogue_window_cp2

0x746b,	// (0x000182de) shortcut_wheel_idle_act4_pane_ParamLimits

0x746b,	// (0x000182de) shortcut_wheel_idle_act4_pane

0x5683,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g1

0x5683,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g2

0x5683,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g3

0x5683,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g4

0x5683,	// (0x000164f6) shortcut_wheel_idle_act4_pane_g5

0x747f,	// (0x000182f2) shortcut_wheel_idle_act4_pane_g6

0x7487,	// (0x000182fa) shortcut_wheel_idle_act4_pane_g7

0x748f,	// (0x00018302) shortcut_wheel_idle_act4_pane_g8

0x7497,	// (0x0001830a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x00020bbe) shortcut_wheel_idle_act4_pane_g

0x58f1,	// (0x00016764) middle_sk_idle_act4_pane_g1_ParamLimits

0x58f1,	// (0x00016764) middle_sk_idle_act4_pane_g1

0x74fb,	// (0x0001836e) middle_sk_idle_act4_pane_g2_ParamLimits

0x74fb,	// (0x0001836e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x00020be1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x00020be1) middle_sk_idle_act4_pane_g

0x7507,	// (0x0001837a) middle_sk_idle_act4_pane_t1_ParamLimits

0x7507,	// (0x0001837a) middle_sk_idle_act4_pane_t1

0x7524,	// (0x00018397) grid_ai_shortcut_pane_ParamLimits

0x7524,	// (0x00018397) grid_ai_shortcut_pane

0x753d,	// (0x000183b0) list_highlight_pane_cp16_ParamLimits

0x753d,	// (0x000183b0) list_highlight_pane_cp16

0x754a,	// (0x000183bd) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x754a,	// (0x000183bd) list_single_idle_plugin_shortcut_pane_g1

0x7556,	// (0x000183c9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x7556,	// (0x000183c9) list_single_idle_plugin_shortcut_pane_g2

0x756e,	// (0x000183e1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x756e,	// (0x000183e1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x00020be6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x00020be6) list_single_idle_plugin_shortcut_pane_g

0x7581,	// (0x000183f4) cell_ai_shortcut_pane_ParamLimits

0x7581,	// (0x000183f4) cell_ai_shortcut_pane

0x75a2,	// (0x00018415) cell_ai_shortcut_pane_g1_ParamLimits

0x75a2,	// (0x00018415) cell_ai_shortcut_pane_g1

0x73d2,	// (0x00018245) ai_gene_pane_1_cp2

0x75c4,	// (0x00018437) ai_gene_pane_2_cp2

0x75cc,	// (0x0001843f) list_highlight_pane_cp15

0x75d5,	// (0x00018448) list_single_idle_plugin_calendar_pane_g1

0x75cc,	// (0x0001843f) list_highlight_pane_cp17

0x75dd,	// (0x00018450) list_single_idle_plugin_calendar_pane_g1_copy1

0x75e5,	// (0x00018458) list_single_idle_plugin_player_pane_g1

0x4724,	// (0x00015597) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x00020bed) list_single_idle_plugin_player_pane_g

0x75ed,	// (0x00018460) list_single_idle_plugin_player_pane_t1

0x75fb,	// (0x0001846e) list_single_idle_plugin_player_pane_t2

0x7609,	// (0x0001847c) list_single_idle_plugin_player_pane_t3

0x7617,	// (0x0001848a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x00020bf2) list_single_idle_plugin_player_pane_t

0x7625,	// (0x00018498) wait_bar_pane_cp15

0x762d,	// (0x000184a0) grid_ai_notification_pane

0x4724,	// (0x00015597) list_single_idle_plugin_notification_pane_g1

0x7636,	// (0x000184a9) cell_ai_notification_pane_ParamLimits

0x7636,	// (0x000184a9) cell_ai_notification_pane

0x7643,	// (0x000184b6) cell_ai_notification_pane_g1

0x764b,	// (0x000184be) cell_ai_notification_pane_t1

0x7659,	// (0x000184cc) tb_ext_find_button_pane

0x7661,	// (0x000184d4) tb_ext_find_pane_g1

0x7669,	// (0x000184dc) tb_ext_find_pane_t1

0x1ca0,	// (0x00012b13) tb_ext_find_button_pane_g1

0x7677,	// (0x000184ea) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x00020bfb) tb_ext_find_button_pane_g

0x7417,	// (0x0001828a) main_idle_act4_pane_t1_ParamLimits

0x7429,	// (0x0001829c) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x00020bb9) main_idle_act4_pane_t_ParamLimits

0x7451,	// (0x000182c4) popup_clock_digital_analogue_window_cp2_ParamLimits

0x745f,	// (0x000182d2) sat_plugin_idle_act4_pane_ParamLimits

0x745f,	// (0x000182d2) sat_plugin_idle_act4_pane

0x7680,	// (0x000184f3) sat_plugin_idle_act4_pane_t1_ParamLimits

0x7680,	// (0x000184f3) sat_plugin_idle_act4_pane_t1

0x7693,	// (0x00018506) sat_plugin_idle_act4_pane_t2_ParamLimits

0x7693,	// (0x00018506) sat_plugin_idle_act4_pane_t2

0x76a6,	// (0x00018519) sat_plugin_idle_act4_pane_t3_ParamLimits

0x76a6,	// (0x00018519) sat_plugin_idle_act4_pane_t3

0x76b9,	// (0x0001852c) sat_plugin_idle_act4_pane_t4_ParamLimits

0x76b9,	// (0x0001852c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x00020c00) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x00020c00) sat_plugin_idle_act4_pane_t

0xd330,	// (0x0001e1a3) popup_battery_window_ParamLimits

0xd330,	// (0x0001e1a3) popup_battery_window

0x09d7,	// (0x0001184a) bg_popup_sub_pane_cp25_ParamLimits

0x09d7,	// (0x0001184a) bg_popup_sub_pane_cp25

0x76cc,	// (0x0001853f) popup_battery_window_g1_ParamLimits

0x76cc,	// (0x0001853f) popup_battery_window_g1

0x76d8,	// (0x0001854b) popup_battery_window_t1_ParamLimits

0x76d8,	// (0x0001854b) popup_battery_window_t1

0x76ea,	// (0x0001855d) popup_battery_window_t2_ParamLimits

0x76ea,	// (0x0001855d) popup_battery_window_t2

0x0001,

0xfd96,	// (0x00020c09) popup_battery_window_t_ParamLimits

0xfd96,	// (0x00020c09) popup_battery_window_t

0x232e,	// (0x000131a1) midp_canvas_pane_ParamLimits

0x23a5,	// (0x00013218) midp_keypad_pane_ParamLimits

0x23a5,	// (0x00013218) midp_keypad_pane

0x266a,	// (0x000134dd) main_midp_pane_ParamLimits

0x50ca,	// (0x00015f3d) signal_pane_g2_cp_ParamLimits

0x7707,	// (0x0001857a) aid_size_cell_midp_keypad_ParamLimits

0x7707,	// (0x0001857a) aid_size_cell_midp_keypad

0x7721,	// (0x00018594) midp_keyp_game_grid_pane_ParamLimits

0x7721,	// (0x00018594) midp_keyp_game_grid_pane

0x7741,	// (0x000185b4) midp_keyp_rocker_pane_ParamLimits

0x7741,	// (0x000185b4) midp_keyp_rocker_pane

0x7776,	// (0x000185e9) midp_keyp_sk_left_pane_ParamLimits

0x7776,	// (0x000185e9) midp_keyp_sk_left_pane

0x77ce,	// (0x00018641) midp_keyp_sk_right_pane_ParamLimits

0x77ce,	// (0x00018641) midp_keyp_sk_right_pane

0x0640,	// (0x000114b3) bg_button_pane_cp03

0x7826,	// (0x00018699) midp_keyp_sk_left_pane_g1

0x0640,	// (0x000114b3) bg_button_pane_cp04

0x7826,	// (0x00018699) midp_keyp_sk_right_pane_g1

0x5683,	// (0x000164f6) midp_keyp_rocker_pane_g1

0x782f,	// (0x000186a2) keyp_game_cell_pane_ParamLimits

0x782f,	// (0x000186a2) keyp_game_cell_pane

0x0640,	// (0x000114b3) bg_button_pane_cp02

0x7842,	// (0x000186b5) keyp_game_cell_pane_g1

0xd366,	// (0x0001e1d9) popup_fep_vkb2_window_ParamLimits

0xd366,	// (0x0001e1d9) popup_fep_vkb2_window

0xe972,	// (0x0001f7e5) aid_size_cell_vkb2_ParamLimits

0xe972,	// (0x0001f7e5) aid_size_cell_vkb2

0xe9c6,	// (0x0001f839) popup_fep_vkb2_window_g1_ParamLimits

0xe9c6,	// (0x0001f839) popup_fep_vkb2_window_g1

0xea0e,	// (0x0001f881) vkb2_area_bottom_pane_ParamLimits

0xea0e,	// (0x0001f881) vkb2_area_bottom_pane

0xea5a,	// (0x0001f8cd) vkb2_area_keypad_pane_ParamLimits

0xea5a,	// (0x0001f8cd) vkb2_area_keypad_pane

0xea9c,	// (0x0001f90f) vkb2_area_top_pane_ParamLimits

0xea9c,	// (0x0001f90f) vkb2_area_top_pane

0xeb16,	// (0x0001f989) vkb2_top_entry_pane_ParamLimits

0xeb16,	// (0x0001f989) vkb2_top_entry_pane

0xeb40,	// (0x0001f9b3) vkb2_top_grid_left_pane_ParamLimits

0xeb40,	// (0x0001f9b3) vkb2_top_grid_left_pane

0xeb5e,	// (0x0001f9d1) vkb2_top_grid_right_pane_ParamLimits

0xeb5e,	// (0x0001f9d1) vkb2_top_grid_right_pane

0xeb7c,	// (0x0001f9ef) vkb2_cell_keypad_pane_ParamLimits

0xeb7c,	// (0x0001f9ef) vkb2_cell_keypad_pane

0xec4d,	// (0x0001fac0) vkb2_area_bottom_grid_pane_ParamLimits

0xec4d,	// (0x0001fac0) vkb2_area_bottom_grid_pane

0xec73,	// (0x0001fae6) vkb2_area_bottom_pane_g1_ParamLimits

0xec73,	// (0x0001fae6) vkb2_area_bottom_pane_g1

0xec97,	// (0x0001fb0a) vkb2_area_bottom_pane_g2_ParamLimits

0xec97,	// (0x0001fb0a) vkb2_area_bottom_pane_g2

0xecc5,	// (0x0001fb38) vkb2_area_bottom_pane_g3_ParamLimits

0xecc5,	// (0x0001fb38) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x00020c0e) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x00020c0e) vkb2_area_bottom_pane_g

0xed26,	// (0x0001fb99) vkb2_top_cell_left_pane_ParamLimits

0xed26,	// (0x0001fb99) vkb2_top_cell_left_pane

0x7853,	// (0x000186c6) vkb2_top_entry_pane_g1_ParamLimits

0x7853,	// (0x000186c6) vkb2_top_entry_pane_g1

0x7861,	// (0x000186d4) vkb2_top_entry_pane_t1_ParamLimits

0x7861,	// (0x000186d4) vkb2_top_entry_pane_t1

0x7893,	// (0x00018706) vkb2_top_entry_pane_t2_ParamLimits

0x7893,	// (0x00018706) vkb2_top_entry_pane_t2

0x78c5,	// (0x00018738) vkb2_top_entry_pane_t3_ParamLimits

0x78c5,	// (0x00018738) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x00020c15) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x00020c15) vkb2_top_entry_pane_t

0xed73,	// (0x0001fbe6) vkb2_top_grid_right_pane_g1_ParamLimits

0xed73,	// (0x0001fbe6) vkb2_top_grid_right_pane_g1

0xed89,	// (0x0001fbfc) vkb2_top_grid_right_pane_g2_ParamLimits

0xed89,	// (0x0001fbfc) vkb2_top_grid_right_pane_g2

0xeda1,	// (0x0001fc14) vkb2_top_grid_right_pane_g3_ParamLimits

0xeda1,	// (0x0001fc14) vkb2_top_grid_right_pane_g3

0xedb9,	// (0x0001fc2c) vkb2_top_grid_right_pane_g4_ParamLimits

0xedb9,	// (0x0001fc2c) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x00020c1c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x00020c1c) vkb2_top_grid_right_pane_g

0xedcf,	// (0x0001fc42) vkb2_top_cell_left_pane_g1

0xede6,	// (0x0001fc59) vkb2_cell_keypad_pane_g1_ParamLimits

0xede6,	// (0x0001fc59) vkb2_cell_keypad_pane_g1

0x78e9,	// (0x0001875c) vkb2_cell_keypad_pane_t1_ParamLimits

0x78e9,	// (0x0001875c) vkb2_cell_keypad_pane_t1

0xedf4,	// (0x0001fc67) vkb2_cell_bottom_grid_pane_ParamLimits

0xedf4,	// (0x0001fc67) vkb2_cell_bottom_grid_pane

0xee2d,	// (0x0001fca0) vkb2_cell_bottom_grid_pane_g1

0x749f,	// (0x00018312) aid_call2_pane_cp02

0x74a7,	// (0x0001831a) aid_call_pane_cp02

0x74af,	// (0x00018322) clock_digital_number_pane_cp10

0x74b7,	// (0x0001832a) clock_digital_number_pane_cp11

0x74bf,	// (0x00018332) clock_digital_number_pane_cp12

0x74c7,	// (0x0001833a) clock_digital_number_pane_cp13

0x74cf,	// (0x00018342) clock_digital_separator_pane_cp10

0x1ca0,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g1

0x1ca0,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g2

0x74d7,	// (0x0001834a) popup_clock_digital_analogue_window_cp2_g3

0x1ca0,	// (0x00012b13) popup_clock_digital_analogue_window_cp2_g4

0x74d7,	// (0x0001834a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x00020bd1) popup_clock_digital_analogue_window_cp2_g

0x74df,	// (0x00018352) popup_clock_digital_analogue_window_cp2_t1

0x74ed,	// (0x00018360) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x00020bdc) popup_clock_digital_analogue_window_cp2_t

0x5683,	// (0x000164f6) clock_digital_number_pane_cp10_g1

0x5683,	// (0x000164f6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x000209c4) clock_digital_number_pane_cp10_g

0x5683,	// (0x000164f6) clock_digital_separator_pane_cp10_g1

0x5683,	// (0x000164f6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x000209c4) clock_digital_separator_pane_cp10_g

0x731b,	// (0x0001818e) uniindi_top_pane_g3

0x732c,	// (0x0001819f) uniindi_top_pane_g4

0xec07,	// (0x0001fa7a) vkb2_row_keypad_pane_ParamLimits

0xec07,	// (0x0001fa7a) vkb2_row_keypad_pane

0xee4d,	// (0x0001fcc0) vkb2_cell_t_keypad_pane_ParamLimits

0xee4d,	// (0x0001fcc0) vkb2_cell_t_keypad_pane

0xee5d,	// (0x0001fcd0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xee5d,	// (0x0001fcd0) vkb2_cell_t_keypad_pane_cp08

0xee70,	// (0x0001fce3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xee70,	// (0x0001fce3) vkb2_cell_t_keypad_pane_cp09

0xee84,	// (0x0001fcf7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xee84,	// (0x0001fcf7) vkb2_cell_t_keypad_pane_cp01

0xee95,	// (0x0001fd08) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xee95,	// (0x0001fd08) vkb2_cell_t_keypad_pane_cp02

0xeea6,	// (0x0001fd19) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xeea6,	// (0x0001fd19) vkb2_cell_t_keypad_pane_cp03

0xeeb7,	// (0x0001fd2a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xeeb7,	// (0x0001fd2a) vkb2_cell_t_keypad_pane_cp04

0xeec8,	// (0x0001fd3b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xeec8,	// (0x0001fd3b) vkb2_cell_t_keypad_pane_cp05

0xeed9,	// (0x0001fd4c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xeed9,	// (0x0001fd4c) vkb2_cell_t_keypad_pane_cp06

0xeeea,	// (0x0001fd5d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xeeea,	// (0x0001fd5d) vkb2_cell_t_keypad_pane_cp07

0xeefb,	// (0x0001fd6e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xeefb,	// (0x0001fd6e) vkb2_cell_t_keypad_pane_cp10

0x58f1,	// (0x00016764) vkb2_cell_t_keypad_pane_g1

0x7900,	// (0x00018773) vkb2_cell_t_keypad_pane_t1

0x0640,	// (0x000114b3) popup_grid_graphic2_window

0x7912,	// (0x00018785) aid_size_cell_graphic2_ParamLimits

0x7912,	// (0x00018785) aid_size_cell_graphic2

0x794a,	// (0x000187bd) bg_popup_window_pane_cp21_ParamLimits

0x794a,	// (0x000187bd) bg_popup_window_pane_cp21

0x7958,	// (0x000187cb) graphic2_pages_pane_ParamLimits

0x7958,	// (0x000187cb) graphic2_pages_pane

0x799e,	// (0x00018811) grid_graphic2_control_pane_ParamLimits

0x799e,	// (0x00018811) grid_graphic2_control_pane

0x79dc,	// (0x0001884f) grid_graphic2_pane_ParamLimits

0x79dc,	// (0x0001884f) grid_graphic2_pane

0x7a50,	// (0x000188c3) cell_graphic2_pane

0x0640,	// (0x000114b3) main_comp_mode_pane

0x6b2d,	// (0x000179a0) list_ai3_gene_pane_ParamLimits

0x6f61,	// (0x00017dd4) bg_popup_window_pane_cp19_ParamLimits

0x6f6d,	// (0x00017de0) bg_touch_area_indi_pane_ParamLimits

0x6f6d,	// (0x00017de0) bg_touch_area_indi_pane

0x6f83,	// (0x00017df6) bg_touch_area_indi_pane_cp01_ParamLimits

0x6f83,	// (0x00017df6) bg_touch_area_indi_pane_cp01

0x6f99,	// (0x00017e0c) bg_touch_area_indi_pane_cp02_ParamLimits

0x6f99,	// (0x00017e0c) bg_touch_area_indi_pane_cp02

0x6fb1,	// (0x00017e24) bg_touch_area_indi_pane_cp03_ParamLimits

0x6fb1,	// (0x00017e24) bg_touch_area_indi_pane_cp03

0x6fcb,	// (0x00017e3e) popup_slider_window_g1_ParamLimits

0x6fe7,	// (0x00017e5a) popup_slider_window_g2_ParamLimits

0x7003,	// (0x00017e76) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x00020b66) popup_slider_window_g_ParamLimits

0x705f,	// (0x00017ed2) popup_slider_window_t1_ParamLimits

0x70d3,	// (0x00017f46) small_volume_slider_vertical_pane_ParamLimits

0x7a50,	// (0x000188c3) cell_graphic2_pane_ParamLimits

0x7a9e,	// (0x00018911) bg_button_pane_cp10_ParamLimits

0x7a9e,	// (0x00018911) bg_button_pane_cp10

0x7ab1,	// (0x00018924) bg_button_pane_cp11_ParamLimits

0x7ab1,	// (0x00018924) bg_button_pane_cp11

0x7ac4,	// (0x00018937) graphic2_pages_pane_g1_ParamLimits

0x7ac4,	// (0x00018937) graphic2_pages_pane_g1

0x7adf,	// (0x00018952) graphic2_pages_pane_g2_ParamLimits

0x7adf,	// (0x00018952) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x00020c2a) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x00020c2a) graphic2_pages_pane_g

0x7af7,	// (0x0001896a) graphic2_pages_pane_t1_ParamLimits

0x7af7,	// (0x0001896a) graphic2_pages_pane_t1

0x7b0d,	// (0x00018980) cell_graphic2_control_pane_ParamLimits

0x7b0d,	// (0x00018980) cell_graphic2_control_pane

0x7b2e,	// (0x000189a1) cell_graphic2_pane_g1_ParamLimits

0x7b2e,	// (0x000189a1) cell_graphic2_pane_g1

0x7b3b,	// (0x000189ae) cell_graphic2_pane_g2_ParamLimits

0x7b3b,	// (0x000189ae) cell_graphic2_pane_g2

0x7b48,	// (0x000189bb) cell_graphic2_pane_g3_ParamLimits

0x7b48,	// (0x000189bb) cell_graphic2_pane_g3

0x7b55,	// (0x000189c8) cell_graphic2_pane_g4_ParamLimits

0x7b55,	// (0x000189c8) cell_graphic2_pane_g4

0x7b62,	// (0x000189d5) cell_graphic2_pane_g5_ParamLimits

0x7b62,	// (0x000189d5) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x00020c2f) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x00020c2f) cell_graphic2_pane_g

0x7b7d,	// (0x000189f0) cell_graphic2_pane_t1_ParamLimits

0x7b7d,	// (0x000189f0) cell_graphic2_pane_t1

0x2caa,	// (0x00013b1d) grid_highlight_pane_cp11_ParamLimits

0x2caa,	// (0x00013b1d) grid_highlight_pane_cp11

0x09d7,	// (0x0001184a) bg_button_pane_cp05

0x7ba6,	// (0x00018a19) cell_graphic2_control_pane_g1

0x5683,	// (0x000164f6) bg_touch_area_indi_pane_g1

0x7bce,	// (0x00018a41) aid_cmod_rocker_key_size

0x7bd8,	// (0x00018a4b) aid_cmode_itu_key_size

0x7be2,	// (0x00018a55) main_cmode_video_pane

0x7bec,	// (0x00018a5f) main_comp_mode_itu_pane

0x7bf8,	// (0x00018a6b) main_comp_mode_rocker_pane

0x7c04,	// (0x00018a77) cell_cmode_rocker_pane_ParamLimits

0x7c04,	// (0x00018a77) cell_cmode_rocker_pane

0x7c16,	// (0x00018a89) cell_cmode_itu_pane_ParamLimits

0x7c16,	// (0x00018a89) cell_cmode_itu_pane

0x14f0,	// (0x00012363) bg_button_pane_cp06_ParamLimits

0x14f0,	// (0x00012363) bg_button_pane_cp06

0x58f1,	// (0x00016764) cell_cmode_rocker_pane_g1_ParamLimits

0x58f1,	// (0x00016764) cell_cmode_rocker_pane_g1

0x7177,	// (0x00017fea) cell_cmode_rocker_pane_g2_ParamLimits

0x7177,	// (0x00017fea) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x00020c3f) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x00020c3f) cell_cmode_rocker_pane_g

0x0640,	// (0x000114b3) bg_button_pane_cp07

0x7c2b,	// (0x00018a9e) cell_cmode_itu_pane_g1

0x7c34,	// (0x00018aa7) cell_cmode_itu_pane_t1

0x7c42,	// (0x00018ab5) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x00020c44) cell_cmode_itu_pane_t

0x739e,	// (0x00018211) aid_touch_ctrl_left

0x73a6,	// (0x00018219) aid_touch_ctrl_right

0x0640,	// (0x000114b3) compa_mode_pane

0x7c50,	// (0x00018ac3) aid_cmod_rocker_key_size_cp

0x7c5a,	// (0x00018acd) aid_cmode_itu_key_size_cp

0x7c64,	// (0x00018ad7) compa_mode_pane_g1

0x7c6c,	// (0x00018adf) compa_mode_pane_g2

0x7c74,	// (0x00018ae7) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x00020c49) compa_mode_pane_g

0x7c7c,	// (0x00018aef) main_comp_mode_itu_pane_cp

0x7c84,	// (0x00018af7) main_comp_mode_rocker_pane_cp

0x7c8c,	// (0x00018aff) cell_cmode_itu_pane_cp_ParamLimits

0x7c8c,	// (0x00018aff) cell_cmode_itu_pane_cp

0x7ca1,	// (0x00018b14) cell_cmode_rocker_pane_cp_ParamLimits

0x7ca1,	// (0x00018b14) cell_cmode_rocker_pane_cp

0x14f0,	// (0x00012363) bg_button_pane_cp06_cp_ParamLimits

0x14f0,	// (0x00012363) bg_button_pane_cp06_cp

0x58f1,	// (0x00016764) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x58f1,	// (0x00016764) cell_cmode_rocker_pane_g1_cp

0x5683,	// (0x000164f6) cell_cmode_rocker_pane_g2_cp

0x0640,	// (0x000114b3) bg_button_pane_cp07_cp

0x7cb3,	// (0x00018b26) cell_cmode_itu_pane_g1_cp

0x7cbc,	// (0x00018b2f) cell_cmode_itu_pane_t1_cp

0x7cbc,	// (0x00018b2f) cell_cmode_itu_pane_t2_cp

0x41b9,	// (0x0001502c) settings_code_pane_cp2

0x0734,	// (0x000115a7) bg_popup_window_pane_cp3_ParamLimits

0x0ba5,	// (0x00011a18) heading_pane_cp3_ParamLimits

0x0bb1,	// (0x00011a24) listscroll_popup_graphic_pane_ParamLimits

0xe520,	// (0x0001f393) fep_hwr_aid_pane_ParamLimits

0xe8e9,	// (0x0001f75c) aid_touch_sctrl_top_ParamLimits

0xe8f6,	// (0x0001f769) sctrl_sk_top_pane_g1_ParamLimits

0x58f1,	// (0x00016764) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x00020b7f) sctrl_sk_top_pane_g_ParamLimits

0xe903,	// (0x0001f776) sctrl_sk_top_pane_t1_ParamLimits

0xe8e9,	// (0x0001f75c) aid_touch_sctrl_bottom_ParamLimits

0xe903,	// (0x0001f776) sctrl_sk_bottom_pane_t1_ParamLimits

0x72e7,	// (0x0001815a) aid_area_touch_clock

0xeade,	// (0x0001f951) aid_vkb2_area_top_pane_cell_ParamLimits

0xeade,	// (0x0001f951) aid_vkb2_area_top_pane_cell

0xec29,	// (0x0001fa9c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xec29,	// (0x0001fa9c) aid_vkb2_area_bottom_pane_cell

0x784b,	// (0x000186be) popup_char_count_window

0x7cca,	// (0x00018b3d) popup_char_count_window_g1

0x7cd3,	// (0x00018b46) popup_char_count_window_g2

0x7cdc,	// (0x00018b4f) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x00020c50) popup_char_count_window_g

0x7ce5,	// (0x00018b58) popup_char_count_window_t1

0xe9a4,	// (0x0001f817) popup_fep_char_preview_window_ParamLimits

0xe9a4,	// (0x0001f817) popup_fep_char_preview_window

0xeafc,	// (0x0001f96f) vkb2_top_candi_pane_ParamLimits

0xeafc,	// (0x0001f96f) vkb2_top_candi_pane

0x7cf3,	// (0x00018b66) cell_vkb2_top_candi_pane_ParamLimits

0x7cf3,	// (0x00018b66) cell_vkb2_top_candi_pane

0x3301,	// (0x00014174) bg_popup_fep_char_preview_window_ParamLimits

0x3301,	// (0x00014174) bg_popup_fep_char_preview_window

0xef10,	// (0x0001fd83) popup_fep_char_preview_window_t1_ParamLimits

0xef10,	// (0x0001fd83) popup_fep_char_preview_window_t1

0x7d50,	// (0x00018bc3) bg_popup_fep_char_preview_window_g1

0x7d48,	// (0x00018bbb) bg_popup_fep_char_preview_window_g2

0x7d40,	// (0x00018bb3) bg_popup_fep_char_preview_window_g3

0x7d70,	// (0x00018be3) bg_popup_fep_char_preview_window_g4

0x7d68,	// (0x00018bdb) bg_popup_fep_char_preview_window_g5

0xef4a,	// (0x0001fdbd) bg_popup_fep_char_preview_window_g6

0x7d60,	// (0x00018bd3) bg_popup_fep_char_preview_window_g7

0x7d58,	// (0x00018bcb) bg_popup_fep_char_preview_window_g8

0x7d99,	// (0x00018c0c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x00020c57) bg_popup_fep_char_preview_window_g

0x58f1,	// (0x00016764) cell_vkb2_top_candi_pane_g1_ParamLimits

0x58f1,	// (0x00016764) cell_vkb2_top_candi_pane_g1

0x5f41,	// (0x00016db4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5f41,	// (0x00016db4) cell_vkb2_top_candi_pane_g2

0x5f62,	// (0x00016dd5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5f62,	// (0x00016dd5) cell_vkb2_top_candi_pane_g3

0xef52,	// (0x0001fdc5) cell_vkb2_top_candi_pane_g4_ParamLimits

0xef52,	// (0x0001fdc5) cell_vkb2_top_candi_pane_g4

0x7d78,	// (0x00018beb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7d78,	// (0x00018beb) cell_vkb2_top_candi_pane_g5

0x7177,	// (0x00017fea) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7177,	// (0x00017fea) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x00020c6a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x00020c6a) cell_vkb2_top_candi_pane_g

0xef73,	// (0x0001fde6) cell_vkb2_top_candi_pane_t1

0xe39e,	// (0x0001f211) aid_size_touch_slider_mark_ParamLimits

0xe39e,	// (0x0001f211) aid_size_touch_slider_mark

0x798e,	// (0x00018801) grid_graphic2_catg_pane_ParamLimits

0x798e,	// (0x00018801) grid_graphic2_catg_pane

0x7a2c,	// (0x0001889f) popup_grid_graphic2_window_t1_ParamLimits

0x7a2c,	// (0x0001889f) popup_grid_graphic2_window_t1

0x7a3e,	// (0x000188b1) popup_grid_graphic2_window_t2_ParamLimits

0x7a3e,	// (0x000188b1) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x00020c25) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x00020c25) popup_grid_graphic2_window_t

0x09d7,	// (0x0001184a) bg_button_pane_cp05_ParamLimits

0x7ba6,	// (0x00018a19) cell_graphic2_control_pane_g1_ParamLimits

0xef92,	// (0x0001fe05) cell_graphic2_catg_pane_ParamLimits

0xef92,	// (0x0001fe05) cell_graphic2_catg_pane

0x0640,	// (0x000114b3) bg_button_pane_cp12

0xefa4,	// (0x0001fe17) cell_graphic2_catg_pane_g1

0x72b3,	// (0x00018126) cell_tb_ext_pane_t1_ParamLimits

0xed46,	// (0x0001fbb9) vkb2_top_cell_right_narrow_pane_ParamLimits

0xed46,	// (0x0001fbb9) vkb2_top_cell_right_narrow_pane

0xed5e,	// (0x0001fbd1) vkb2_top_cell_right_wide_pane_ParamLimits

0xed5e,	// (0x0001fbd1) vkb2_top_cell_right_wide_pane

0xe512,	// (0x0001f385) bg_vkb2_func_pane_ParamLimits

0xe512,	// (0x0001f385) bg_vkb2_func_pane

0xedcf,	// (0x0001fc42) vkb2_top_cell_left_pane_g1_ParamLimits

0xe512,	// (0x0001f385) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe512,	// (0x0001f385) bg_vkb2_fuc_pane_cp03

0xee2d,	// (0x0001fca0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2b96,	// (0x00013a09) bg_vkb2_func_pane_g1

0x2b8e,	// (0x00013a01) bg_vkb2_func_pane_g2

0x2b9e,	// (0x00013a11) bg_vkb2_func_pane_g3

0x2ba6,	// (0x00013a19) bg_vkb2_func_pane_g4

0x2bae,	// (0x00013a21) bg_vkb2_func_pane_g5

0x2bb6,	// (0x00013a29) bg_vkb2_func_pane_g6

0x2bc6,	// (0x00013a39) bg_vkb2_func_pane_g7

0x2bbe,	// (0x00013a31) bg_vkb2_func_pane_g8

0x2b86,	// (0x000139f9) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x00020c77) bg_vkb2_func_pane_g

0xe512,	// (0x0001f385) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe512,	// (0x0001f385) bg_vkb2_fuc_pane_cp01

0xedcf,	// (0x0001fc42) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xedcf,	// (0x0001fc42) vkb2_top_cell_right_wide_pane_g1

0xe512,	// (0x0001f385) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe512,	// (0x0001f385) bg_vkb2_fuc_pane_cp02

0xee2d,	// (0x0001fca0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xee2d,	// (0x0001fca0) vkb2_top_cell_right_narrow_pane_g1

0x6edf,	// (0x00017d52) aid_touch_area_decrease_ParamLimits

0x6edf,	// (0x00017d52) aid_touch_area_decrease

0x6f03,	// (0x00017d76) aid_touch_area_increase_ParamLimits

0x6f03,	// (0x00017d76) aid_touch_area_increase

0x6f0f,	// (0x00017d82) aid_touch_area_mute_ParamLimits

0x6f0f,	// (0x00017d82) aid_touch_area_mute

0x6f33,	// (0x00017da6) aid_touch_area_slider_ParamLimits

0x6f33,	// (0x00017da6) aid_touch_area_slider

0x701f,	// (0x00017e92) popup_slider_window_g4_ParamLimits

0x701f,	// (0x00017e92) popup_slider_window_g4

0x702b,	// (0x00017e9e) popup_slider_window_g5_ParamLimits

0x702b,	// (0x00017e9e) popup_slider_window_g5

0x704d,	// (0x00017ec0) popup_slider_window_g6_ParamLimits

0x704d,	// (0x00017ec0) popup_slider_window_g6

0x708d,	// (0x00017f00) popup_slider_window_t2_ParamLimits

0x708d,	// (0x00017f00) popup_slider_window_t2

0x0001,

0xfd00,	// (0x00020b73) popup_slider_window_t_ParamLimits

0xfd00,	// (0x00020b73) popup_slider_window_t

0x70a5,	// (0x00017f18) slider_pane_ParamLimits

0x70a5,	// (0x00017f18) slider_pane

0x982c,	// (0x0001a69f) slider_pane_g1_ParamLimits

0x982c,	// (0x0001a69f) slider_pane_g1

0x9840,	// (0x0001a6b3) slider_pane_g2_ParamLimits

0x9840,	// (0x0001a6b3) slider_pane_g2

0x9856,	// (0x0001a6c9) slider_pane_g3_ParamLimits

0x9856,	// (0x0001a6c9) slider_pane_g3

0x0003,

0xfe17,	// (0x00020c8a) slider_pane_g_ParamLimits

0xfe17,	// (0x00020c8a) slider_pane_g

0xdfe3,	// (0x0001ee56) popup_tb_float_extension_window_ParamLimits

0xdfe3,	// (0x0001ee56) popup_tb_float_extension_window

0x9882,	// (0x0001a6f5) aid_size_cell_tb_float_ext

0x0640,	// (0x000114b3) bg_popup_sub_window_cp28

0x988e,	// (0x0001a701) grid_tb_float_ext_pane

0x9898,	// (0x0001a70b) cell_tb_float_ext_pane_ParamLimits

0x9898,	// (0x0001a70b) cell_tb_float_ext_pane

0x98b2,	// (0x0001a725) cell_tb_float_ext_pane_g1

0x98bb,	// (0x0001a72e) grid_highlight_pane_cp12

0xe653,	// (0x0001f4c6) cell_last_hwr_side_pane_ParamLimits

0xe653,	// (0x0001f4c6) cell_last_hwr_side_pane

0x5683,	// (0x000164f6) cell_last_hwr_side_pane_g1

0x98c4,	// (0x0001a737) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x00020c93) cell_last_hwr_side_pane_g

0xecf5,	// (0x0001fb68) vkb2_area_bottom_space_btn_pane_ParamLimits

0xecf5,	// (0x0001fb68) vkb2_area_bottom_space_btn_pane

0x58f1,	// (0x00016764) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7900,	// (0x00018773) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xef73,	// (0x0001fde6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xefad,	// (0x0001fe20) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xefad,	// (0x0001fe20) vkb2_area_bottom_space_btn_pane_g1

0xefe7,	// (0x0001fe5a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xefe7,	// (0x0001fe5a) vkb2_area_bottom_space_btn_pane_g2

0xf01d,	// (0x0001fe90) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf01d,	// (0x0001fe90) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x00020c98) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x00020c98) vkb2_area_bottom_space_btn_pane_g

0xe5c7,	// (0x0001f43a) cel_fep_hwr_func_pane_ParamLimits

0xe5c7,	// (0x0001f43a) cel_fep_hwr_func_pane

0xe603,	// (0x0001f476) cell_hwr_side_button_pane_ParamLimits

0xe603,	// (0x0001f476) cell_hwr_side_button_pane

0x72e7,	// (0x0001815a) aid_area_touch_clock_ParamLimits

0x09d7,	// (0x0001184a) bg_uniindi_top_pane_ParamLimits

0x72f9,	// (0x0001816c) uniindi_top_pane_g1_ParamLimits

0x730f,	// (0x00018182) uniindi_top_pane_g2_ParamLimits

0x731b,	// (0x0001818e) uniindi_top_pane_g3_ParamLimits

0x732c,	// (0x0001819f) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x00020bab) uniindi_top_pane_g_ParamLimits

0x7339,	// (0x000181ac) uniindi_top_pane_t1_ParamLimits

0x09d7,	// (0x0001184a) bg_vkb2_func_pane_cp01_ParamLimits

0x09d7,	// (0x0001184a) bg_vkb2_func_pane_cp01

0x98cd,	// (0x0001a740) cel_fep_hwr_func_pane_g1_ParamLimits

0x98cd,	// (0x0001a740) cel_fep_hwr_func_pane_g1

0x09d7,	// (0x0001184a) bg_vkb2_func_pane_cp02_ParamLimits

0x09d7,	// (0x0001184a) bg_vkb2_func_pane_cp02

0x98cd,	// (0x0001a740) cell_hwr_side_button_pane_g1_ParamLimits

0x98cd,	// (0x0001a740) cell_hwr_side_button_pane_g1

0x29f1,	// (0x00013864) status_pane_g4_ParamLimits

0x29f1,	// (0x00013864) status_pane_g4

0x2a0b,	// (0x0001387e) status_pane_t1

0x539d,	// (0x00016210) form2_midp_gauge_slider_cont_pane

0x53a5,	// (0x00016218) form2_midp_gauge_slider_pane_t1_ParamLimits

0x53b7,	// (0x0001622a) form2_midp_gauge_slider_pane_t2_ParamLimits

0x53c9,	// (0x0001623c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb04,	// (0x00020977) form2_midp_gauge_slider_pane_t_ParamLimits

0x53db,	// (0x0001624e) form2_midp_slider_pane_ParamLimits

0xe964,	// (0x0001f7d7) aid_size_cell_func_vkb2_ParamLimits

0xe964,	// (0x0001f7d7) aid_size_cell_func_vkb2

0x986e,	// (0x0001a6e1) slider_pane_g4_ParamLimits

0x986e,	// (0x0001a6e1) slider_pane_g4

0xf067,	// (0x0001feda) form2_midp_gauge_slider_pane_t2_cp01

0xf075,	// (0x0001fee8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf075,	// (0x0001fee8) form2_midp_gauge_slider_pane_t3_cp01

0xf092,	// (0x0001ff05) form2_midp_slider_pane_cp01

0x0640,	// (0x000114b3) navi_smil_pane

0x98fd,	// (0x0001a770) navi_smil_pane_g1

0x9905,	// (0x0001a778) navi_smil_pane_t1

0x98db,	// (0x0001a74e) form2_midp_slider_pane_g1

0x98e4,	// (0x0001a757) form2_midp_slider_pane_g2

0x98ec,	// (0x0001a75f) form2_midp_slider_pane_g3

0x98db,	// (0x0001a74e) form2_midp_slider_pane_g4

0xf09b,	// (0x0001ff0e) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x00020ca1) form2_midp_slider_pane_g

0xf057,	// (0x0001feca) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf057,	// (0x0001feca) vkb2_area_bottom_space_btn_pane_g4

0x2828,	// (0x0001369b) lc0_navi_pane_ParamLimits

0x2828,	// (0x0001369b) lc0_navi_pane

0x289e,	// (0x00013711) lc0_stat_indi_pane_ParamLimits

0x289e,	// (0x00013711) lc0_stat_indi_pane

0x28b5,	// (0x00013728) ls0_title_pane_ParamLimits

0x28b5,	// (0x00013728) ls0_title_pane

0x14f0,	// (0x00012363) bg_popup_sub_pane_cp14_ParamLimits

0x72ce,	// (0x00018141) list_uniindi_pane_ParamLimits

0x72da,	// (0x0001814d) uniindi_top_pane_ParamLimits

0x7376,	// (0x000181e9) list_single_uniindi_pane_g1_ParamLimits

0x7389,	// (0x000181fc) list_single_uniindi_pane_t1_ParamLimits

0xf0a4,	// (0x0001ff17) lc0_stat_clock_pane_ParamLimits

0xf0a4,	// (0x0001ff17) lc0_stat_clock_pane

0xf0b1,	// (0x0001ff24) lc0_stat_indi_pane_g1_ParamLimits

0xf0b1,	// (0x0001ff24) lc0_stat_indi_pane_g1

0xf0be,	// (0x0001ff31) lc0_stat_indi_pane_g2_ParamLimits

0xf0be,	// (0x0001ff31) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x00020cac) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x00020cac) lc0_stat_indi_pane_g

0xf0cb,	// (0x0001ff3e) lc0_uni_indicator_pane_ParamLimits

0xf0cb,	// (0x0001ff3e) lc0_uni_indicator_pane

0xf0d8,	// (0x0001ff4b) ls0_title_pane_g1_ParamLimits

0xf0d8,	// (0x0001ff4b) ls0_title_pane_g1

0xf0ec,	// (0x0001ff5f) ls0_title_pane_t1_ParamLimits

0xf0ec,	// (0x0001ff5f) ls0_title_pane_t1

0xf122,	// (0x0001ff95) lc0_uni_indicator_pane_g1_ParamLimits

0xf122,	// (0x0001ff95) lc0_uni_indicator_pane_g1

0x9913,	// (0x0001a786) lc0_stat_clock_pane_t1

0x0640,	// (0x000114b3) main_ai5_pane

0x9921,	// (0x0001a794) ai5_sk_pane_ParamLimits

0x9921,	// (0x0001a794) ai5_sk_pane

0xf137,	// (0x0001ffaa) cell_ai5_widget_pane_ParamLimits

0xf137,	// (0x0001ffaa) cell_ai5_widget_pane

0x992e,	// (0x0001a7a1) aid_size_cell_widget_grid

0x993c,	// (0x0001a7af) bg_ai5_widget_pane_ParamLimits

0x993c,	// (0x0001a7af) bg_ai5_widget_pane

0x99b0,	// (0x0001a823) cell_ai5_widget_pane_g2

0x99c0,	// (0x0001a833) cell_ai5_widget_pane_g3

0x99d7,	// (0x0001a84a) cell_ai5_widget_pane_g4

0x99e3,	// (0x0001a856) cell_ai5_widget_pane_g5

0x99ef,	// (0x0001a862) cell_ai5_widget_pane_g6

0x99fb,	// (0x0001a86e) cell_ai5_widget_pane_g7

0x9a43,	// (0x0001a8b6) cell_ai5_widget_pane_t1_ParamLimits

0x9a43,	// (0x0001a8b6) cell_ai5_widget_pane_t1

0x9a60,	// (0x0001a8d3) cell_ai5_widget_pane_t2_ParamLimits

0x9a60,	// (0x0001a8d3) cell_ai5_widget_pane_t2

0x9a78,	// (0x0001a8eb) cell_ai5_widget_pane_t3_ParamLimits

0x9a78,	// (0x0001a8eb) cell_ai5_widget_pane_t3

0x9a90,	// (0x0001a903) cell_ai5_widget_pane_t4_ParamLimits

0x9a90,	// (0x0001a903) cell_ai5_widget_pane_t4

0x9aad,	// (0x0001a920) cell_ai5_widget_pane_t5_ParamLimits

0x9aad,	// (0x0001a920) cell_ai5_widget_pane_t5

0x9acc,	// (0x0001a93f) cell_ai5_widget_pane_t6_ParamLimits

0x9acc,	// (0x0001a93f) cell_ai5_widget_pane_t6

0x9ade,	// (0x0001a951) cell_ai5_widget_pane_t7_ParamLimits

0x9ade,	// (0x0001a951) cell_ai5_widget_pane_t7

0x9af7,	// (0x0001a96a) cell_ai5_widget_pane_t8_ParamLimits

0x9af7,	// (0x0001a96a) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x00020cc6) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x00020cc6) cell_ai5_widget_pane_t

0x9b4b,	// (0x0001a9be) grid_ai5_widget_pane

0x14f0,	// (0x00012363) highlight_cell_ai5_widget_pane_ParamLimits

0x14f0,	// (0x00012363) highlight_cell_ai5_widget_pane

0xf201,	// (0x00020074) ai5_sk_left_pane

0xf20b,	// (0x0002007e) ai5_sk_middle_pane

0xf215,	// (0x00020088) ai5_sk_right_pane

0x9b5f,	// (0x0001a9d2) bg_ai5_widget_pane_g1_ParamLimits

0x9b5f,	// (0x0001a9d2) bg_ai5_widget_pane_g1

0x9b6b,	// (0x0001a9de) bg_ai5_widget_pane_g2_ParamLimits

0x9b6b,	// (0x0001a9de) bg_ai5_widget_pane_g2

0x9b77,	// (0x0001a9ea) bg_ai5_widget_pane_g3_ParamLimits

0x9b77,	// (0x0001a9ea) bg_ai5_widget_pane_g3

0x9b83,	// (0x0001a9f6) bg_ai5_widget_pane_g4_ParamLimits

0x9b83,	// (0x0001a9f6) bg_ai5_widget_pane_g4

0x9b8f,	// (0x0001aa02) bg_ai5_widget_pane_g5_ParamLimits

0x9b8f,	// (0x0001aa02) bg_ai5_widget_pane_g5

0x9b9b,	// (0x0001aa0e) bg_ai5_widget_pane_g6_ParamLimits

0x9b9b,	// (0x0001aa0e) bg_ai5_widget_pane_g6

0x9ba7,	// (0x0001aa1a) bg_ai5_widget_pane_g7_ParamLimits

0x9ba7,	// (0x0001aa1a) bg_ai5_widget_pane_g7

0x9bb3,	// (0x0001aa26) bg_ai5_widget_pane_g8_ParamLimits

0x9bb3,	// (0x0001aa26) bg_ai5_widget_pane_g8

0x9bbf,	// (0x0001aa32) bg_ai5_widget_pane_g9_ParamLimits

0x9bbf,	// (0x0001aa32) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x00020cdb) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x00020cdb) bg_ai5_widget_pane_g

0x9bf1,	// (0x0001aa64) cell_shortcut_ai5_widget_pane_ParamLimits

0x9bf1,	// (0x0001aa64) cell_shortcut_ai5_widget_pane

0x2326,	// (0x00013199) bg_cell_shortcut_ai5_widget_pane

0x9c02,	// (0x0001aa75) cell_grid_ai5_widget_pane_g1

0x9c0b,	// (0x0001aa7e) highlight_cell_shortcut_ai5_widget_pane

0x2b8e,	// (0x00013a01) ai5_sk_left_pane_g1

0x9c13,	// (0x0001aa86) ai5_sk_left_pane_g2

0x9c1b,	// (0x0001aa8e) ai5_sk_left_pane_g3

0x9c23,	// (0x0001aa96) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x00020cee) ai5_sk_left_pane_g

0x9c2b,	// (0x0001aa9e) ai5_sk_left_pane_t1

0x2b96,	// (0x00013a09) ai5_sk_right_pane_g1

0x9c39,	// (0x0001aaac) ai5_sk_right_pane_g2

0x9c41,	// (0x0001aab4) ai5_sk_right_pane_g3

0x9c49,	// (0x0001aabc) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x00020cf7) ai5_sk_right_pane_g

0x9c51,	// (0x0001aac4) ai5_sk_right_pane_t1

0x2b96,	// (0x00013a09) ai5_sk_middle_pane_g1

0x2b8e,	// (0x00013a01) ai5_sk_middle_pane_g2

0x2bae,	// (0x00013a21) ai5_sk_middle_pane_g3

0x9c41,	// (0x0001aab4) ai5_sk_middle_pane_g4

0x9c1b,	// (0x0001aa8e) ai5_sk_middle_pane_g5

0x9c5f,	// (0x0001aad2) ai5_sk_middle_pane_g6

0xf21f,	// (0x00020092) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x00020d00) ai5_sk_middle_pane_g

0x26b8,	// (0x0001352b) aid_touch_area_size_lc0_ParamLimits

0x26b8,	// (0x0001352b) aid_touch_area_size_lc0

0xe752,	// (0x0001f5c5) cell_hwr_candidate_pane_t1_ParamLimits

0x26d4,	// (0x00013547) aid_touch_navi_pane

0x29a3,	// (0x00013816) status_dt_navi_pane_ParamLimits

0x29a3,	// (0x00013816) status_dt_navi_pane

0x29b0,	// (0x00013823) status_dt_sta_pane_ParamLimits

0x29b0,	// (0x00013823) status_dt_sta_pane

0xf227,	// (0x0002009a) dt_sta_controll_pane

0xf234,	// (0x000200a7) dt_sta_indi_pane

0xf245,	// (0x000200b8) dt_sta_title_pane

0x09d7,	// (0x0001184a) bg_dt_sta_indi_pane_ParamLimits

0x09d7,	// (0x0001184a) bg_dt_sta_indi_pane

0x9c67,	// (0x0001aada) dt_sta_battery_pane

0xf258,	// (0x000200cb) dt_sta_indi_pane_g1

0xf261,	// (0x000200d4) dt_sta_indi_pane_g2

0xf26a,	// (0x000200dd) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x00020d0f) dt_sta_indi_pane_g

0xf273,	// (0x000200e6) dt_sta_signal_pane

0x14f0,	// (0x00012363) bg_dt_sta_title_pane_ParamLimits

0x14f0,	// (0x00012363) bg_dt_sta_title_pane

0x9c6f,	// (0x0001aae2) dt_sta_title_pane_g1

0xf27c,	// (0x000200ef) dt_sta_title_pane_t1_ParamLimits

0xf27c,	// (0x000200ef) dt_sta_title_pane_t1

0x0640,	// (0x000114b3) bg_dt_sta_control_pane

0xf291,	// (0x00020104) dt_sta_controll_pane_g1

0x9c77,	// (0x0001aaea) bg_dt_sta_title_pane_g1

0x9c80,	// (0x0001aaf3) bg_dt_sta_title_pane_g2

0x9c89,	// (0x0001aafc) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x00020d16) bg_dt_sta_title_pane_g

0x5683,	// (0x000164f6) bg_dt_sta_indi_pane_g1

0x9c92,	// (0x0001ab05) dt_sta_signal_pane_g1

0x9c9a,	// (0x0001ab0d) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x00020d1d) dt_sta_signal_pane_g

0x9ca2,	// (0x0001ab15) dt_sta_battery_pane_g1

0x9cab,	// (0x0001ab1e) dt_sta_battery_pane_t1

0x5683,	// (0x000164f6) bg_dt_sta_control_pane_g1

0x1dae,	// (0x00012c21) fep_china_uni_eep_pane

0x1db6,	// (0x00012c29) fep_china_uni_entry_pane_ParamLimits

0x1dc6,	// (0x00012c39) popup_fep_china_uni_window_g1_ParamLimits

0x1dd6,	// (0x00012c49) popup_fep_china_uni_window_g2_ParamLimits

0x1dd6,	// (0x00012c49) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00020596) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00020596) popup_fep_china_uni_window_g

0x9cba,	// (0x0001ab2d) fep_china_uni_eep_pane_g1

0x9cc2,	// (0x0001ab35) fep_china_uni_eep_pane_t1

0x98f4,	// (0x0001a767) aid_touch_area_size_smil_player

0x2820,	// (0x00013693) lc0_clock_pane

0x29ff,	// (0x00013872) status_pane_g5_ParamLimits

0x29ff,	// (0x00013872) status_pane_g5

0xdcaa,	// (0x0001eb1d) popup_keymap_window

0x29c5,	// (0x00013838) status_icon_pane

0x99c0,	// (0x0001a833) cell_ai5_widget_pane_g3_ParamLimits

0x99d7,	// (0x0001a84a) cell_ai5_widget_pane_g4_ParamLimits

0x99e3,	// (0x0001a856) cell_ai5_widget_pane_g5_ParamLimits

0x9a07,	// (0x0001a87a) cell_ai5_widget_pane_g8_ParamLimits

0x9a07,	// (0x0001a87a) cell_ai5_widget_pane_g8

0x9a1b,	// (0x0001a88e) cell_ai5_widget_pane_g9_ParamLimits

0x9a1b,	// (0x0001a88e) cell_ai5_widget_pane_g9

0x9a2f,	// (0x0001a8a2) cell_ai5_widget_pane_g10_ParamLimits

0x9a2f,	// (0x0001a8a2) cell_ai5_widget_pane_g10

0x9cd1,	// (0x0001ab44) status_icon_pane_g1

0x0640,	// (0x000114b3) bg_popup_sub_pane_cp13

0x9cd9,	// (0x0001ab4c) popup_keymap_window_t1

0x2607,	// (0x0001347a) control_pane_g6_ParamLimits

0x2607,	// (0x0001347a) control_pane_g6

0x25fa,	// (0x0001346d) control_pane_g7_ParamLimits

0x25fa,	// (0x0001346d) control_pane_g7

0x25ed,	// (0x00013460) control_pane_g8_ParamLimits

0x25ed,	// (0x00013460) control_pane_g8

0xf227,	// (0x0002009a) dt_sta_controll_pane_ParamLimits

0xf234,	// (0x000200a7) dt_sta_indi_pane_ParamLimits

0xf245,	// (0x000200b8) dt_sta_title_pane_ParamLimits

0x0edd,	// (0x00011d50) aid_size_touch_scroll_bar_cale

0xd344,	// (0x0001e1b7) popup_discreet_window_ParamLimits

0xd344,	// (0x0001e1b7) popup_discreet_window

0xd3be,	// (0x0001e231) popup_sk_window

0x3301,	// (0x00014174) bg_popup_sub_pane_cp28_ParamLimits

0x3301,	// (0x00014174) bg_popup_sub_pane_cp28

0x9ce7,	// (0x0001ab5a) popup_discreet_window_g1_ParamLimits

0x9ce7,	// (0x0001ab5a) popup_discreet_window_g1

0x9d07,	// (0x0001ab7a) popup_discreet_window_t1_ParamLimits

0x9d07,	// (0x0001ab7a) popup_discreet_window_t1

0x9d25,	// (0x0001ab98) popup_discreet_window_t2_ParamLimits

0x9d25,	// (0x0001ab98) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x00020d22) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x00020d22) popup_discreet_window_t

0xf29a,	// (0x0002010d) popup_sk_window_g1

0xf2a4,	// (0x00020117) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x00020d29) popup_sk_window_g

0xf2ae,	// (0x00020121) popup_sk_window_t1

0xf2bc,	// (0x0002012f) popup_sk_window_t1_copy1

0x99b0,	// (0x0001a823) cell_ai5_widget_pane_g2_ParamLimits

0x9b09,	// (0x0001a97c) cell_ai5_widget_pane_t9_ParamLimits

0x9b09,	// (0x0001a97c) cell_ai5_widget_pane_t9

0x0640,	// (0x000114b3) main_fep_fshwr2_pane

0xf2ca,	// (0x0002013d) aid_fshwr2_btn_pane

0xf2d6,	// (0x00020149) aid_fshwr2_syb_pane

0xf2e7,	// (0x0002015a) aid_fshwr2_txt_pane

0xf2f3,	// (0x00020166) fshwr2_func_candi_pane

0xf30b,	// (0x0002017e) fshwr2_hwr_syb_pane

0xf322,	// (0x00020195) fshwr2_icf_pane

0x0640,	// (0x000114b3) fshwr2_icf_bg_pane

0xf34b,	// (0x000201be) fshwr2_icf_pane_t1_ParamLimits

0xf34b,	// (0x000201be) fshwr2_icf_pane_t1

0x1ca0,	// (0x00012b13) fshwr2_func_candi_pane_g1

0xf363,	// (0x000201d6) fshwr2_func_candi_row_pane_ParamLimits

0xf363,	// (0x000201d6) fshwr2_func_candi_row_pane

0xf373,	// (0x000201e6) cell_fshwr2_syb_pane_ParamLimits

0xf373,	// (0x000201e6) cell_fshwr2_syb_pane

0x58f1,	// (0x00016764) fshwr2_hwr_syb_pane_g1_ParamLimits

0x58f1,	// (0x00016764) fshwr2_hwr_syb_pane_g1

0x0640,	// (0x000114b3) bg_popup_call_pane_cp01

0xf38d,	// (0x00020200) fshwr2_func_candi_cell_pane_ParamLimits

0xf38d,	// (0x00020200) fshwr2_func_candi_cell_pane

0x397d,	// (0x000147f0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x397d,	// (0x000147f0) fshwr2_func_candi_cell_bg_pane

0xf3b8,	// (0x0002022b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf3b8,	// (0x0002022b) fshwr2_func_candi_cell_pane_g1

0x9d77,	// (0x0001abea) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9d77,	// (0x0001abea) fshwr2_func_candi_cell_pane_t1

0x0640,	// (0x000114b3) bg_button_pane_cp08

0x2326,	// (0x00013199) cell_fshwr2_syb_bg_pane

0xf3d8,	// (0x0002024b) cell_fshwr2_syb_bg_pane_g1

0xf3e0,	// (0x00020253) cell_fshwr2_syb_bg_pane_t1

0x14f0,	// (0x00012363) main_tmo_pane

0x3e16,	// (0x00014c89) uni_indicator_pane_g1_ParamLimits

0x3e2d,	// (0x00014ca0) uni_indicator_pane_g2_ParamLimits

0x3e40,	// (0x00014cb3) uni_indicator_pane_g3_ParamLimits

0x3e52,	// (0x00014cc5) uni_indicator_pane_g4_ParamLimits

0x3e52,	// (0x00014cc5) uni_indicator_pane_g4

0x3e66,	// (0x00014cd9) uni_indicator_pane_g5_ParamLimits

0x3e66,	// (0x00014cd9) uni_indicator_pane_g5

0x3e66,	// (0x00014cd9) uni_indicator_pane_g6_ParamLimits

0x3e66,	// (0x00014cd9) uni_indicator_pane_g6

0xf920,	// (0x00020793) uni_indicator_pane_g_ParamLimits

0x6ec1,	// (0x00017d34) popup_tmo_note_window_ParamLimits

0x6ec1,	// (0x00017d34) popup_tmo_note_window

0x14f0,	// (0x00012363) fshwr2_bg_pane

0xf3c9,	// (0x0002023c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf3c9,	// (0x0002023c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x00020d2e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x00020d2e) fshwr2_func_candi_cell_pane_g

0x5683,	// (0x000164f6) bg_popup_window_pane_cp01

0x9d8a,	// (0x0001abfd) bg_popup_window_pane_g1_cp01

0x9d93,	// (0x0001ac06) bg_popup_window_pane_cp22_ParamLimits

0x9d93,	// (0x0001ac06) bg_popup_window_pane_cp22

0x9da1,	// (0x0001ac14) listscroll_tmo_link_pane_ParamLimits

0x9da1,	// (0x0001ac14) listscroll_tmo_link_pane

0x9de1,	// (0x0001ac54) popup_tmo_note_window_g1_ParamLimits

0x9de1,	// (0x0001ac54) popup_tmo_note_window_g1

0x9dee,	// (0x0001ac61) tmo_note_info_pane_ParamLimits

0x9dee,	// (0x0001ac61) tmo_note_info_pane

0xf3ef,	// (0x00020262) list_tmo_note_info_pane_g1_ParamLimits

0xf3ef,	// (0x00020262) list_tmo_note_info_pane_g1

0x9e08,	// (0x0001ac7b) list_tmo_note_info_pane_g2_ParamLimits

0x9e08,	// (0x0001ac7b) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x00020d33) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x00020d33) list_tmo_note_info_pane_g

0x9e24,	// (0x0001ac97) list_tmo_note_info_text_pane_ParamLimits

0x9e24,	// (0x0001ac97) list_tmo_note_info_text_pane

0x9e66,	// (0x0001acd9) list_tmo_link_pane

0x9e73,	// (0x0001ace6) scroll_pane_cp20

0x9e80,	// (0x0001acf3) list_single_tmo_link_pane_ParamLimits

0x9e80,	// (0x0001acf3) list_single_tmo_link_pane

0x9e90,	// (0x0001ad03) list_single_tmo_link_pane_t1

0x9e9e,	// (0x0001ad11) list_tmo_note_info_text_pane_t1_ParamLimits

0x9e9e,	// (0x0001ad11) list_tmo_note_info_text_pane_t1

0x170a,	// (0x0001257d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x170a,	// (0x0001257d) aid_size_touch_scroll_bar_cp01

0xc5e1,	// (0x0001d454) aid_size_touch_slider_marker

0xd3a6,	// (0x0001e219) popup_settings_window_ParamLimits

0xd3a6,	// (0x0001e219) popup_settings_window

0xc78f,	// (0x0001d602) popup_candi_list_indi_window

0x26d4,	// (0x00013547) aid_touch_navi_pane_ParamLimits

0xe8bd,	// (0x0001f730) rs_clock_indi_pane

0xe8c6,	// (0x0001f739) sctrl_sk_bottom_pane_ParamLimits

0xe8d7,	// (0x0001f74a) sctrl_sk_top_pane_ParamLimits

0xe9be,	// (0x0001f831) popup_fep_tooltip_window

0x992e,	// (0x0001a7a1) aid_size_cell_widget_grid_ParamLimits

0x999b,	// (0x0001a80e) cell_ai5_widget_pane_g1_ParamLimits

0x999b,	// (0x0001a80e) cell_ai5_widget_pane_g1

0x99ef,	// (0x0001a862) cell_ai5_widget_pane_g6_ParamLimits

0x99fb,	// (0x0001a86e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x00020cb1) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x00020cb1) cell_ai5_widget_pane_g

0x9b2d,	// (0x0001a9a0) cell_ai5_widget_pane_t10_ParamLimits

0x9b2d,	// (0x0001a9a0) cell_ai5_widget_pane_t10

0x9b4b,	// (0x0001a9be) grid_ai5_widget_pane_ParamLimits

0x9bcb,	// (0x0001aa3e) cell_contacts_ai5_widget_pane_ParamLimits

0x9bcb,	// (0x0001aa3e) cell_contacts_ai5_widget_pane

0x9d3a,	// (0x0001abad) popup_discreet_window_t3_ParamLimits

0x9d3a,	// (0x0001abad) popup_discreet_window_t3

0xf337,	// (0x000201aa) popup_fshwr2_char_preview_window_ParamLimits

0xf337,	// (0x000201aa) popup_fshwr2_char_preview_window

0xf406,	// (0x00020279) tmo_note_info_pane_t1

0xf41b,	// (0x0002028e) tmo_note_info_pane_t2

0xf432,	// (0x000202a5) tmo_note_info_pane_t3

0x9e42,	// (0x0001acb5) tmo_note_info_pane_t4

0x9e54,	// (0x0001acc7) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x00020d38) tmo_note_info_pane_t

0x9e66,	// (0x0001acd9) list_tmo_link_pane_ParamLimits

0x9e73,	// (0x0001ace6) scroll_pane_cp20_ParamLimits

0x0640,	// (0x000114b3) bg_popup_fep_char_preview_window_cp01

0x9eb7,	// (0x0001ad2a) popup_fshwr2_char_preview_window_t1

0x9ec5,	// (0x0001ad38) popup_candi_list_indi_window_g1

0x9ece,	// (0x0001ad41) bg_cell_contacts_ai5_widget_pane

0x9eda,	// (0x0001ad4d) cell_contacts_ai5_widget_pane_g1

0x9eed,	// (0x0001ad60) cell_contacts_ai5_widget_pane_g2

0x9ef9,	// (0x0001ad6c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x00020d43) cell_contacts_ai5_widget_pane_g

0x9f0b,	// (0x0001ad7e) cell_contacts_ai5_widget_pane_t1

0x14f0,	// (0x00012363) highlight_cell_shortcut_ai5_widget_pane_cp01

0x9f85,	// (0x0001adf8) settings_container_pane

0x2326,	// (0x00013199) listscroll_set_pane_copy1

0x4ade,	// (0x00015951) scroll_pane_cp121_copy1

0x9f91,	// (0x0001ae04) set_content_pane_copy1

0x9f99,	// (0x0001ae0c) aid_height_set_list_copy1_ParamLimits

0x9f99,	// (0x0001ae0c) aid_height_set_list_copy1

0x406b,	// (0x00014ede) aid_size_parent_copy1_ParamLimits

0x406b,	// (0x00014ede) aid_size_parent_copy1

0x9fa5,	// (0x0001ae18) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9fa5,	// (0x0001ae18) button_value_adjust_pane_cp6_copy1

0x266a,	// (0x000134dd) list_highlight_pane_cp2_copy1_ParamLimits

0x266a,	// (0x000134dd) list_highlight_pane_cp2_copy1

0x9fb9,	// (0x0001ae2c) list_set_pane_copy1_ParamLimits

0x9fb9,	// (0x0001ae2c) list_set_pane_copy1

0x9f20,	// (0x0001ad93) main_pane_set_t1_copy1_ParamLimits

0x9f20,	// (0x0001ad93) main_pane_set_t1_copy1

0x9f5a,	// (0x0001adcd) main_pane_set_t2_copy1_ParamLimits

0x9f5a,	// (0x0001adcd) main_pane_set_t2_copy1

0xa066,	// (0x0001aed9) main_pane_set_t3_copy1

0xa074,	// (0x0001aee7) main_pane_set_t4_copy1

0x9f79,	// (0x0001adec) set_content_pane_g1_copy1_ParamLimits

0x9f79,	// (0x0001adec) set_content_pane_g1_copy1

0xa082,	// (0x0001aef5) setting_code_pane_copy1

0xa08a,	// (0x0001aefd) setting_slider_graphic_pane_copy1

0xa08a,	// (0x0001aefd) setting_slider_pane_copy1

0xa08a,	// (0x0001aefd) setting_text_pane_copy1

0xa08a,	// (0x0001aefd) setting_volume_pane_copy1

0xa082,	// (0x0001aef5) settings_code_pane_cp2_copy1

0xa092,	// (0x0001af05) settings_code_pane_cp_copy1_ParamLimits

0xa092,	// (0x0001af05) settings_code_pane_cp_copy1

0xf447,	// (0x000202ba) volume_set_pane_copy1

0xa0a6,	// (0x0001af19) volume_set_pane_g10_copy1

0xa0ae,	// (0x0001af21) volume_set_pane_g1_copy1

0xa0b6,	// (0x0001af29) volume_set_pane_g2_copy1

0xa0be,	// (0x0001af31) volume_set_pane_g3_copy1

0xa0c6,	// (0x0001af39) volume_set_pane_g4_copy1

0xa0ce,	// (0x0001af41) volume_set_pane_g5_copy1

0xa0d6,	// (0x0001af49) volume_set_pane_g6_copy1

0xa0de,	// (0x0001af51) volume_set_pane_g7_copy1

0xa0e6,	// (0x0001af59) volume_set_pane_g8_copy1

0xa0ee,	// (0x0001af61) volume_set_pane_g9_copy1

0x0734,	// (0x000115a7) bg_set_opt_pane_cp_copy1_ParamLimits

0x0734,	// (0x000115a7) bg_set_opt_pane_cp_copy1

0xf44f,	// (0x000202c2) setting_slider_pane_t1_copy1_ParamLimits

0xf44f,	// (0x000202c2) setting_slider_pane_t1_copy1

0xf46d,	// (0x000202e0) setting_slider_pane_t2_copy1_ParamLimits

0xf46d,	// (0x000202e0) setting_slider_pane_t2_copy1

0xf487,	// (0x000202fa) setting_slider_pane_t3_copy1_ParamLimits

0xf487,	// (0x000202fa) setting_slider_pane_t3_copy1

0xf49f,	// (0x00020312) slider_set_pane_copy1_ParamLimits

0xf49f,	// (0x00020312) slider_set_pane_copy1

0x161d,	// (0x00012490) set_opt_bg_pane_g1_copy2

0x1625,	// (0x00012498) set_opt_bg_pane_g2_copy2

0xa0f6,	// (0x0001af69) set_opt_bg_pane_g3_copy2

0x1635,	// (0x000124a8) set_opt_bg_pane_g4_copy2

0x163d,	// (0x000124b0) set_opt_bg_pane_g5_copy2

0x1645,	// (0x000124b8) set_opt_bg_pane_g6_copy2

0xa100,	// (0x0001af73) set_opt_bg_pane_g7_copy2

0xa108,	// (0x0001af7b) set_opt_bg_pane_g8_copy2

0xa112,	// (0x0001af85) set_opt_bg_pane_g9_copy2

0xa11c,	// (0x0001af8f) aid_size_touch_slider_mark_copy1_ParamLimits

0xa11c,	// (0x0001af8f) aid_size_touch_slider_mark_copy1

0xa130,	// (0x0001afa3) slider_set_pane_g1_copy1

0xa139,	// (0x0001afac) slider_set_pane_g2_copy1

0x44c7,	// (0x0001533a) slider_set_pane_g3_copy1_ParamLimits

0x44c7,	// (0x0001533a) slider_set_pane_g3_copy1

0x44db,	// (0x0001534e) slider_set_pane_g4_copy1_ParamLimits

0x44db,	// (0x0001534e) slider_set_pane_g4_copy1

0x44f3,	// (0x00015366) slider_set_pane_g5_copy1_ParamLimits

0x44f3,	// (0x00015366) slider_set_pane_g5_copy1

0x44c7,	// (0x0001533a) slider_set_pane_g6_copy1_ParamLimits

0x44c7,	// (0x0001533a) slider_set_pane_g6_copy1

0xa141,	// (0x0001afb4) slider_set_pane_g7_copy1_ParamLimits

0xa141,	// (0x0001afb4) slider_set_pane_g7_copy1

0x0654,	// (0x000114c7) bg_set_opt_pane_cp2_copy1

0xa157,	// (0x0001afca) setting_slider_graphic_pane_g1_copy1

0xa170,	// (0x0001afe3) setting_slider_graphic_pane_t1_copy1

0xa160,	// (0x0001afd3) setting_slider_graphic_pane_t2_copy1

0xa180,	// (0x0001aff3) slider_set_pane_cp_copy1

0xa190,	// (0x0001b003) input_focus_pane_cp1_copy1

0xa199,	// (0x0001b00c) list_set_text_pane_copy1

0xa1a1,	// (0x0001b014) setting_text_pane_g1_copy1

0xd0b9,	// (0x0001df2c) set_text_pane_t1_copy1

0xa190,	// (0x0001b003) input_focus_pane_cp2_copy1

0xa1a1,	// (0x0001b014) setting_code_pane_g1_copy1

0xa1c5,	// (0x0001b038) setting_code_pane_t1_copy1

0x4913,	// (0x00015786) list_set_graphic_pane_copy1

0x0654,	// (0x000114c7) bg_set_opt_pane_cp4_copy1

0x203c,	// (0x00012eaf) list_set_graphic_pane_g1_copy1_ParamLimits

0x203c,	// (0x00012eaf) list_set_graphic_pane_g1_copy1

0xa1d3,	// (0x0001b046) list_set_graphic_pane_g2_copy1

0x2054,	// (0x00012ec7) list_set_graphic_pane_t1_copy1_ParamLimits

0x2054,	// (0x00012ec7) list_set_graphic_pane_t1_copy1

0x5683,	// (0x000164f6) rs_clock_indi_pane_g1

0xa1db,	// (0x0001b04e) rs_clock_indi_pane_t1

0xa1e9,	// (0x0001b05c) rs_indi_pane

0xa1f1,	// (0x0001b064) rs_indi_pane_g1

0xa1fa,	// (0x0001b06d) rs_indi_pane_g2

0xa203,	// (0x0001b076) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x00020d4a) rs_indi_pane_g

0x2326,	// (0x00013199) bg_popup_preview_window_pane_cp03

0xa20c,	// (0x0001b07f) popup_fep_tooltip_window_t1

0x650f,	// (0x00017382) popup_note2_window_g2_ParamLimits

0x650f,	// (0x00017382) popup_note2_window_g2

0x0001,

0xfc70,	// (0x00020ae3) popup_note2_window_g_ParamLimits

0xfc70,	// (0x00020ae3) popup_note2_window_g

0x6af3,	// (0x00017966) bg_popup_sub_pane_cp11_ParamLimits

0x6b00,	// (0x00017973) cell_ai3_links_pane_g1_ParamLimits

0x6b17,	// (0x0001798a) cell_ai3_links_pane_t1

0xd0b9,	// (0x0001df2c) set_text_pane_t1_copy1_ParamLimits

0x2243,	// (0x000130b6) cell_graphic_popup_pane_cp2_ParamLimits

0x2243,	// (0x000130b6) cell_graphic_popup_pane_cp2

0xa21a,	// (0x0001b08d) cell_graphic_popup_pane_g1_cp2

0x0cf0,	// (0x00011b63) cell_graphic_popup_pane_g2_cp2

0xa222,	// (0x0001b095) cell_graphic_popup_pane_g3_cp2

0xa22a,	// (0x0001b09d) cell_graphic_popup_pane_t2_cp2

0x0d01,	// (0x00011b74) grid_highlight_pane_cp3_cp2

0x19eb,	// (0x0001285e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x14f0,	// (0x00012363) main_tmo_pane_ParamLimits

0x6eb5,	// (0x00017d28) popup_tmo_big_image_note_window

0x998a,	// (0x0001a7fd) cell_ai5_widget_list_pane

0x9992,	// (0x0001a805) cell_ai5_widget_lrg_icon_pane

0xf406,	// (0x00020279) tmo_note_info_pane_t1_ParamLimits

0xf41b,	// (0x0002028e) tmo_note_info_pane_t2_ParamLimits

0xf432,	// (0x000202a5) tmo_note_info_pane_t3_ParamLimits

0x9e42,	// (0x0001acb5) tmo_note_info_pane_t4_ParamLimits

0x9e54,	// (0x0001acc7) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x00020d38) tmo_note_info_pane_t_ParamLimits

0x9f85,	// (0x0001adf8) settings_container_pane_ParamLimits

0xa188,	// (0x0001affb) indicator_popup_pane_cp5

0xa188,	// (0x0001affb) indicator_popup_pane_cp6

0x4913,	// (0x00015786) list_set_graphic_pane_copy1_ParamLimits

0x0640,	// (0x000114b3) bg_popup_window_pane_cp23

0xa238,	// (0x0001b0ab) popup_tmo_big_image_note_window_g1

0xa241,	// (0x0001b0b4) popup_tmo_big_image_note_window_t1

0xa251,	// (0x0001b0c4) popup_tmo_big_image_note_window_t2

0xa261,	// (0x0001b0d4) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x00020d51) popup_tmo_big_image_note_window_t

0x5683,	// (0x000164f6) cell_ai5_widget_lrg_icon_pane_g1

0xa271,	// (0x0001b0e4) cell_ai5_widget_lrg_icon_pane_t1

0xa27f,	// (0x0001b0f2) cell_ai5_widget_list_row_pane_ParamLimits

0xa27f,	// (0x0001b0f2) cell_ai5_widget_list_row_pane

0xa298,	// (0x0001b10b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa298,	// (0x0001b10b) cell_ai5_widget_list_row_pane_g1

0xa2a5,	// (0x0001b118) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa2a5,	// (0x0001b118) cell_ai5_widget_list_row_pane_t1

0xa2d3,	// (0x0001b146) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa2d3,	// (0x0001b146) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x00020d58) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x00020d58) cell_ai5_widget_list_row_pane_t

0x0640,	// (0x000114b3) main_fep_vtchi_ss_pane

0xf4c4,	// (0x00020337) popup_fep_char_pre_window

0xf4cc,	// (0x0002033f) popup_fep_ituss_window

0xf4ed,	// (0x00020360) popup_fep_vkbss_window

0xa2fb,	// (0x0001b16e) grid_vkbss_keypad_pane_ParamLimits

0xa2fb,	// (0x0001b16e) grid_vkbss_keypad_pane

0xa30b,	// (0x0001b17e) ituss_keypad_pane

0xf518,	// (0x0002038b) aid_vkbss_key_offset_ParamLimits

0xf518,	// (0x0002038b) aid_vkbss_key_offset

0xf524,	// (0x00020397) cell_vkbss_key_pane_ParamLimits

0xf524,	// (0x00020397) cell_vkbss_key_pane

0x29d9,	// (0x0001384c) bg_cell_vkbss_key_g1_ParamLimits

0x29d9,	// (0x0001384c) bg_cell_vkbss_key_g1

0xa31b,	// (0x0001b18e) cell_vkbss_key_3p_pane_ParamLimits

0xa31b,	// (0x0001b18e) cell_vkbss_key_3p_pane

0xa335,	// (0x0001b1a8) cell_vkbss_key_g1_ParamLimits

0xa335,	// (0x0001b1a8) cell_vkbss_key_g1

0xa34f,	// (0x0001b1c2) cell_vkbss_key_t1_ParamLimits

0xa34f,	// (0x0001b1c2) cell_vkbss_key_t1

0xf53a,	// (0x000203ad) cell_ituss_key_pane_ParamLimits

0xf53a,	// (0x000203ad) cell_ituss_key_pane

0xa37a,	// (0x0001b1ed) bg_cell_ituss_key_g1_ParamLimits

0xa37a,	// (0x0001b1ed) bg_cell_ituss_key_g1

0xa386,	// (0x0001b1f9) cell_ituss_key_pane_g1_ParamLimits

0xa386,	// (0x0001b1f9) cell_ituss_key_pane_g1

0xa39a,	// (0x0001b20d) cell_ituss_key_pane_g2_ParamLimits

0xa39a,	// (0x0001b20d) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x00020d5f) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x00020d5f) cell_ituss_key_pane_g

0xa3c8,	// (0x0001b23b) cell_ituss_key_t1_ParamLimits

0xa3c8,	// (0x0001b23b) cell_ituss_key_t1

0xa402,	// (0x0001b275) cell_ituss_key_t2_ParamLimits

0xa402,	// (0x0001b275) cell_ituss_key_t2

0xa433,	// (0x0001b2a6) cell_ituss_key_t3_ParamLimits

0xa433,	// (0x0001b2a6) cell_ituss_key_t3

0xa46d,	// (0x0001b2e0) cell_ituss_key_t4_ParamLimits

0xa46d,	// (0x0001b2e0) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x00020d64) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x00020d64) cell_ituss_key_t

0xa4b7,	// (0x0001b32a) cell_vkbss_key_3p_pane_g1

0xa4af,	// (0x0001b322) cell_vkbss_key_3p_pane_g2

0xa4a7,	// (0x0001b31a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x00020d6d) cell_vkbss_key_3p_pane_g

0x0640,	// (0x000114b3) bg_popup_fep_char_preview_window_cp02

0xa4bf,	// (0x0001b332) popup_fep_char_pre_window_t1

0xf1f7,	// (0x0002006a) main_ai5_sk_pane

0x9ece,	// (0x0001ad41) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9eda,	// (0x0001ad4d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9eed,	// (0x0001ad60) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9ef9,	// (0x0001ad6c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x00020d43) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9f0b,	// (0x0001ad7e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x14f0,	// (0x00012363) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x000203be) main_ai5_sk_pane_g1

0x313f,	// (0x00013fb2) popup_query_code_window_g1

0xf4e2,	// (0x00020355) popup_fep_vkb_icf_pane

0xf4f6,	// (0x00020369) popup_fep_vtchi_icf_pane

0x14f0,	// (0x00012363) bg_icf_pane

0xa4ce,	// (0x0001b341) list_vkb_icf_pane

0x14f0,	// (0x00012363) bg_icf_pane_cp01

0xa4da,	// (0x0001b34d) vtchi_icf_list_pane

0xa4eb,	// (0x0001b35e) list_vkb_icf_pane_t1_ParamLimits

0xa4eb,	// (0x0001b35e) list_vkb_icf_pane_t1

0xa503,	// (0x0001b376) vtchi_icf_list_pane_t1_ParamLimits

0xa503,	// (0x0001b376) vtchi_icf_list_pane_t1

0xf4cc,	// (0x0002033f) popup_fep_ituss_window_ParamLimits

0xf4f6,	// (0x00020369) popup_fep_vtchi_icf_pane_ParamLimits

0xa30b,	// (0x0001b17e) ituss_keypad_pane_ParamLimits

0xf50c,	// (0x0002037f) ituss_sks_pane

0x14f0,	// (0x00012363) bg_icf_pane_ParamLimits

0xf4b5,	// (0x00020328) icf_edit_indi_pane_ParamLimits

0xf4b5,	// (0x00020328) icf_edit_indi_pane

0xa4ce,	// (0x0001b341) list_vkb_icf_pane_ParamLimits

0x14f0,	// (0x00012363) bg_icf_pane_cp01_ParamLimits

0xf4b5,	// (0x00020328) icf_edit_indi_pane_cp01_ParamLimits

0xf4b5,	// (0x00020328) icf_edit_indi_pane_cp01

0xa4e2,	// (0x0001b355) vtchi_query_pane

0x58f1,	// (0x00016764) icf_edit_indi_pane_g1_ParamLimits

0x58f1,	// (0x00016764) icf_edit_indi_pane_g1

0xa58f,	// (0x0001b402) icf_edit_indi_pane_g2_ParamLimits

0xa58f,	// (0x0001b402) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x00020d85) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x00020d85) icf_edit_indi_pane_g

0xa59e,	// (0x0001b411) icf_edit_indi_pane_t1

0xa525,	// (0x0001b398) bg_input_focus_pane_cp042

0x0ed4,	// (0x00011d47) vtchi_button_pane

0xa52e,	// (0x0001b3a1) vtchi_query_pane_t1

0xa53c,	// (0x0001b3af) vtchi_query_pane_t2

0xa54a,	// (0x0001b3bd) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x00020d74) vtchi_query_pane_t

0x0640,	// (0x000114b3) bg_button_pane_cp13

0xa558,	// (0x0001b3cb) vtchi_button_pane_g1

0xa560,	// (0x0001b3d3) ituss_sks_pane_g1

0xa56b,	// (0x0001b3de) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x00020d7b) ituss_sks_pane_g

0xa573,	// (0x0001b3e6) ituss_sks_pane_t1

0xa581,	// (0x0001b3f4) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x00020d80) ituss_sks_pane_t

0x5083,	// (0x00015ef6) indicator_nsta_pane_cp_g1

0x508c,	// (0x00015eff) indicator_nsta_pane_cp_g2

0x5094,	// (0x00015f07) indicator_nsta_pane_cp_g3

0x509c,	// (0x00015f0f) indicator_nsta_pane_cp_g4

0x50a4,	// (0x00015f17) indicator_nsta_pane_cp_g5

0x50a4,	// (0x00015f17) indicator_nsta_pane_cp_g6

0x0005,

0xfaba,	// (0x0002092d) indicator_nsta_pane_cp_g

0x7b93,	// (0x00018a06) cell_graphic2_pane_t2_ParamLimits

0x7b93,	// (0x00018a06) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x00020c3a) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x00020c3a) cell_graphic2_pane_t

0x7bc0,	// (0x00018a33) cell_graphic2_control_pane_t1

0x1d5e,	// (0x00012bd1) signal_pane_g3_ParamLimits

0x1d5e,	// (0x00012bd1) signal_pane_g3

0x1d70,	// (0x00012be3) signal_pane_g4_ParamLimits

0x1d70,	// (0x00012be3) signal_pane_g4

0xa2e5,	// (0x0001b158) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa2e5,	// (0x0001b158) cell_ai5_widget_list_row_pane_t3

0xa3b6,	// (0x0001b229) cell_ituss_key_pane_t1_ParamLimits

0xa3b6,	// (0x0001b229) cell_ituss_key_pane_t1

0x2d38,	// (0x00013bab) form_field_data_wide_pane_vc_t2_ParamLimits

0x2d38,	// (0x00013bab) form_field_data_wide_pane_vc_t2

0x2d4c,	// (0x00013bbf) form_field_data_wide_pane_vc_t3_ParamLimits

0x2d4c,	// (0x00013bbf) form_field_data_wide_pane_vc_t3

0x0002,

0xf808,	// (0x0002067b) form_field_data_wide_pane_vc_t_ParamLimits

0xf808,	// (0x0002067b) form_field_data_wide_pane_vc_t

0x4d3f,	// (0x00015bb2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4d3f,	// (0x00015bb2) form_field_slider_wide_pane_vc_t3

0x4e19,	// (0x00015c8c) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4e19,	// (0x00015c8c) form_field_popup_wide_pane_vc_t2

0x4e30,	// (0x00015ca3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4e30,	// (0x00015ca3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa9,	// (0x0002091c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa9,	// (0x0002091c) form_field_popup_wide_pane_vc_t

0xf2ca,	// (0x0002013d) aid_fshwr2_btn_pane_ParamLimits

0xf2d6,	// (0x00020149) aid_fshwr2_syb_pane_ParamLimits

0xf2e7,	// (0x0002015a) aid_fshwr2_txt_pane_ParamLimits

0x14f0,	// (0x00012363) fshwr2_bg_pane_ParamLimits

0xf2f3,	// (0x00020166) fshwr2_func_candi_pane_ParamLimits

0xf30b,	// (0x0002017e) fshwr2_hwr_syb_pane_ParamLimits

0xf322,	// (0x00020195) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small

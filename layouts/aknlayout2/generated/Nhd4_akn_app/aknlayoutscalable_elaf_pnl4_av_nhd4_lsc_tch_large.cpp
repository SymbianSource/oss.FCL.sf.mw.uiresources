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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0004b579 };

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
0x8e99,	// (0x00054412) Screen

0x8ead,	// (0x00054426) application_window_ParamLimits

0x8ead,	// (0x00054426) application_window

0x8ec7,	// (0x00054440) screen_g1

0x8ef9,	// (0x00054472) area_bottom_pane_ParamLimits

0x8ef9,	// (0x00054472) area_bottom_pane

0xe6dd,	// (0x00059c56) area_top_pane_ParamLimits

0xe6dd,	// (0x00059c56) area_top_pane

0xe771,	// (0x00059cea) main_pane_ParamLimits

0xe771,	// (0x00059cea) main_pane

0x8fb7,	// (0x00054530) misc_graphics

0xaf5d,	// (0x000564d6) battery_pane_ParamLimits

0xaf5d,	// (0x000564d6) battery_pane

0x2a52,	// (0x0004dfcb) bg_status_flat_pane_g8

0x2a5a,	// (0x0004dfd3) bg_status_flat_pane_g9

0x07d2,	// (0x0004bd4b) context_pane_ParamLimits

0x07d2,	// (0x0004bd4b) context_pane

0xb0c8,	// (0x00056641) navi_pane_ParamLimits

0xb0c8,	// (0x00056641) navi_pane

0xb146,	// (0x000566bf) signal_pane_ParamLimits

0xb146,	// (0x000566bf) signal_pane

0x0008,

0xf83e,	// (0x0005adb7) bg_status_flat_pane_g

0xb1d6,	// (0x0005674f) status_pane_g1_ParamLimits

0xb1d6,	// (0x0005674f) status_pane_g1

0xb1ec,	// (0x00056765) status_pane_g2_ParamLimits

0xb1ec,	// (0x00056765) status_pane_g2

0x2053,	// (0x0004d5cc) status_pane_g3_ParamLimits

0x2053,	// (0x0004d5cc) status_pane_g3

0x0004,

0xf771,	// (0x0005acea) status_pane_g_ParamLimits

0xf771,	// (0x0005acea) status_pane_g

0xb1f8,	// (0x00056771) title_pane_ParamLimits

0xb1f8,	// (0x00056771) title_pane

0xb25b,	// (0x000567d4) uni_indicator_pane_ParamLimits

0xb25b,	// (0x000567d4) uni_indicator_pane

0xc548,	// (0x00057ac1) bg_list_pane_ParamLimits

0xc548,	// (0x00057ac1) bg_list_pane

0xa74b,	// (0x00055cc4) find_pane

0x2267,	// (0x0004d7e0) listscroll_app_pane_ParamLimits

0x2267,	// (0x0004d7e0) listscroll_app_pane

0xc568,	// (0x00057ae1) listscroll_form_pane

0xa753,	// (0x00055ccc) listscroll_gen_pane_ParamLimits

0xa753,	// (0x00055ccc) listscroll_gen_pane

0x00eb,	// (0x0004b664) listscroll_set_pane

0x35b6,	// (0x0004eb2f) main_idle_act_pane

0xc3fc,	// (0x00057975) main_idle_trad_pane

0xc3fc,	// (0x00057975) main_list_empty_pane

0x9d7f,	// (0x000552f8) main_midp_pane

0xc582,	// (0x00057afb) main_pane_g1_ParamLimits

0xc582,	// (0x00057afb) main_pane_g1

0xa767,	// (0x00055ce0) popup_ai_message_window_ParamLimits

0xa767,	// (0x00055ce0) popup_ai_message_window

0xa818,	// (0x00055d91) popup_fep_china_uni_window_ParamLimits

0xa818,	// (0x00055d91) popup_fep_china_uni_window

0xa872,	// (0x00055deb) popup_fep_japan_candidate_window_ParamLimits

0xa872,	// (0x00055deb) popup_fep_japan_candidate_window

0xa890,	// (0x00055e09) popup_fep_japan_predictive_window_ParamLimits

0xa890,	// (0x00055e09) popup_fep_japan_predictive_window

0xa8a2,	// (0x00055e1b) popup_find_window

0xa8bf,	// (0x00055e38) popup_grid_graphic_window_ParamLimits

0xa8bf,	// (0x00055e38) popup_grid_graphic_window

0x0276,	// (0x0004b7ef) popup_large_graphic_colour_window

0xa95d,	// (0x00055ed6) popup_menu_window_ParamLimits

0xa95d,	// (0x00055ed6) popup_menu_window

0xab2f,	// (0x000560a8) popup_note_image_window

0xaaf5,	// (0x0005606e) popup_note_wait_window_ParamLimits

0xaaf5,	// (0x0005606e) popup_note_wait_window

0xab47,	// (0x000560c0) popup_note_window_ParamLimits

0xab47,	// (0x000560c0) popup_note_window

0xabf6,	// (0x0005616f) popup_query_code_window_ParamLimits

0xabf6,	// (0x0005616f) popup_query_code_window

0xac30,	// (0x000561a9) popup_query_data_code_window_ParamLimits

0xac30,	// (0x000561a9) popup_query_data_code_window

0xac4d,	// (0x000561c6) popup_query_data_window_ParamLimits

0xac4d,	// (0x000561c6) popup_query_data_window

0xaccf,	// (0x00056248) popup_query_sat_info_window_ParamLimits

0xaccf,	// (0x00056248) popup_query_sat_info_window

0xad66,	// (0x000562df) popup_snote_single_graphic_window_ParamLimits

0xad66,	// (0x000562df) popup_snote_single_graphic_window

0xad66,	// (0x000562df) popup_snote_single_text_window_ParamLimits

0xad66,	// (0x000562df) popup_snote_single_text_window

0x0549,	// (0x0004bac2) popup_sub_window_general

0xaec3,	// (0x0005643c) popup_window_general_ParamLimits

0xaec3,	// (0x0005643c) popup_window_general

0x068e,	// (0x0004bc07) power_save_pane

0xa5a9,	// (0x00055b22) control_pane_g1_ParamLimits

0xa5a9,	// (0x00055b22) control_pane_g1

0xa5d2,	// (0x00055b4b) control_pane_g2_ParamLimits

0xa5d2,	// (0x00055b4b) control_pane_g2

0xc532,	// (0x00057aab) control_pane_g3_ParamLimits

0xc532,	// (0x00057aab) control_pane_g3

0x0007,

0xf759,	// (0x0005acd2) control_pane_g_ParamLimits

0xf759,	// (0x0005acd2) control_pane_g

0xa63a,	// (0x00055bb3) control_pane_t1_ParamLimits

0xa63a,	// (0x00055bb3) control_pane_t1

0xa6a0,	// (0x00055c19) control_pane_t2_ParamLimits

0xa6a0,	// (0x00055c19) control_pane_t2

0x0002,

0xf76a,	// (0x0005ace3) control_pane_t_ParamLimits

0xf76a,	// (0x0005ace3) control_pane_t

0xa502,	// (0x00055a7b) navi_navi_volume_pane_cp1

0xa50a,	// (0x00055a83) status_small_icon_pane

0xc4fe,	// (0x00057a77) status_small_pane_g1_ParamLimits

0xc4fe,	// (0x00057a77) status_small_pane_g1

0xa512,	// (0x00055a8b) status_small_pane_g2_ParamLimits

0xa512,	// (0x00055a8b) status_small_pane_g2

0xa51e,	// (0x00055a97) status_small_pane_g3_ParamLimits

0xa51e,	// (0x00055a97) status_small_pane_g3

0xa52a,	// (0x00055aa3) status_small_pane_g4_ParamLimits

0xa52a,	// (0x00055aa3) status_small_pane_g4

0xa536,	// (0x00055aaf) status_small_pane_g5_ParamLimits

0xa536,	// (0x00055aaf) status_small_pane_g5

0xa544,	// (0x00055abd) status_small_pane_g6_ParamLimits

0xa544,	// (0x00055abd) status_small_pane_g6

0x0007,

0xf748,	// (0x0005acc1) status_small_pane_g_ParamLimits

0xf748,	// (0x0005acc1) status_small_pane_g

0xa573,	// (0x00055aec) status_small_pane_t1

0xa595,	// (0x00055b0e) status_small_wait_pane_ParamLimits

0xa595,	// (0x00055b0e) status_small_wait_pane

0xa247,	// (0x000557c0) aid_levels_signal_ParamLimits

0xa247,	// (0x000557c0) aid_levels_signal

0xa25f,	// (0x000557d8) signal_pane_g1_ParamLimits

0xa25f,	// (0x000557d8) signal_pane_g1

0xa27a,	// (0x000557f3) signal_pane_g2_ParamLimits

0xa27a,	// (0x000557f3) signal_pane_g2

0x0003,

0xf6d9,	// (0x0005ac52) signal_pane_g_ParamLimits

0xf6d9,	// (0x0005ac52) signal_pane_g

0xc017,	// (0x00057590) context_pane_g1

0x9101,	// (0x0005467a) title_pane_g1

0x9144,	// (0x000546bd) title_pane_t1

0x91d0,	// (0x00054749) title_pane_t2

0x91f6,	// (0x0005476f) title_pane_t3

0x0002,

0xf532,	// (0x0005aaab) title_pane_t

0xb283,	// (0x000567fc) aid_levels_battery_ParamLimits

0xb283,	// (0x000567fc) aid_levels_battery

0xb29f,	// (0x00056818) battery_pane_g1_ParamLimits

0xb29f,	// (0x00056818) battery_pane_g1

0xb2bc,	// (0x00056835) battery_pane_g2_ParamLimits

0xb2bc,	// (0x00056835) battery_pane_g2

0x0001,

0xf77c,	// (0x0005acf5) battery_pane_g_ParamLimits

0xf77c,	// (0x0005acf5) battery_pane_g

0xc87c,	// (0x00057df5) uni_indicator_pane_g1

0xc892,	// (0x00057e0b) uni_indicator_pane_g2

0xc8a8,	// (0x00057e21) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x0005ae5f) uni_indicator_pane_g

0xc2c0,	// (0x00057839) navi_icon_pane_ParamLimits

0xc2c0,	// (0x00057839) navi_icon_pane

0xc209,	// (0x00057782) navi_midp_pane

0xc2dc,	// (0x00057855) navi_navi_pane

0xc2e6,	// (0x0005785f) navi_text_pane_ParamLimits

0xc2e6,	// (0x0005785f) navi_text_pane

0x8ec7,	// (0x00054440) status_small_wait_pane_g1

0x9776,	// (0x00054cef) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0005ae5a) status_small_wait_pane_g

0xc7d5,	// (0x00057d4e) navi_navi_icon_text_pane

0x30a5,	// (0x0004e61e) navi_navi_pane_g1_ParamLimits

0x30a5,	// (0x0004e61e) navi_navi_pane_g1

0x30b7,	// (0x0004e630) navi_navi_pane_g2_ParamLimits

0x30b7,	// (0x0004e630) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x0005ae28) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x0005ae28) navi_navi_pane_g

0x30c9,	// (0x0004e642) navi_navi_tabs_pane

0x30d2,	// (0x0004e64b) navi_navi_text_pane

0xc7d5,	// (0x00057d4e) navi_navi_volume_pane

0x3079,	// (0x0004e5f2) navi_text_pane_t1

0x306d,	// (0x0004e5e6) navi_icon_pane_g1

0x2fc0,	// (0x0004e539) navi_navi_text_pane_t1

0xb63e,	// (0x00056bb7) navi_navi_volume_pane_g1

0x0bdc,	// (0x0004c155) volume_small_pane

0x2f26,	// (0x0004e49f) navi_navi_icon_text_pane_g1

0xc72d,	// (0x00057ca6) navi_navi_icon_text_pane_t1

0xc2dc,	// (0x00057855) navi_tabs_2_long_pane

0xc2dc,	// (0x00057855) navi_tabs_2_pane

0xc2dc,	// (0x00057855) navi_tabs_3_long_pane

0xc2dc,	// (0x00057855) navi_tabs_3_pane

0xc2dc,	// (0x00057855) navi_tabs_4_pane

0x0bb4,	// (0x0004c12d) tabs_2_active_pane_ParamLimits

0x0bb4,	// (0x0004c12d) tabs_2_active_pane

0x0bc4,	// (0x0004c13d) tabs_2_passive_pane_ParamLimits

0x0bc4,	// (0x0004c13d) tabs_2_passive_pane

0x0b82,	// (0x0004c0fb) tabs_3_active_pane_ParamLimits

0x0b82,	// (0x0004c0fb) tabs_3_active_pane

0x0b92,	// (0x0004c10b) tabs_3_passive_pane_ParamLimits

0x0b92,	// (0x0004c10b) tabs_3_passive_pane

0x0ba3,	// (0x0004c11c) tabs_3_passive_pane_cp_ParamLimits

0x0ba3,	// (0x0004c11c) tabs_3_passive_pane_cp

0x0b3e,	// (0x0004c0b7) tabs_4_active_pane_ParamLimits

0x0b3e,	// (0x0004c0b7) tabs_4_active_pane

0x0b4f,	// (0x0004c0c8) tabs_4_passive_pane_ParamLimits

0x0b4f,	// (0x0004c0c8) tabs_4_passive_pane

0x0b60,	// (0x0004c0d9) tabs_4_passive_pane_cp_ParamLimits

0x0b60,	// (0x0004c0d9) tabs_4_passive_pane_cp

0x0b71,	// (0x0004c0ea) tabs_4_passive_pane_cp2_ParamLimits

0x0b71,	// (0x0004c0ea) tabs_4_passive_pane_cp2

0x0b1a,	// (0x0004c093) tabs_2_long_active_pane_ParamLimits

0x0b1a,	// (0x0004c093) tabs_2_long_active_pane

0x0b2c,	// (0x0004c0a5) tabs_2_long_passive_pane_ParamLimits

0x0b2c,	// (0x0004c0a5) tabs_2_long_passive_pane

0x0ad5,	// (0x0004c04e) tabs_3_long_active_pane_ParamLimits

0x0ad5,	// (0x0004c04e) tabs_3_long_active_pane

0x0aee,	// (0x0004c067) tabs_3_long_passive_pane_ParamLimits

0x0aee,	// (0x0004c067) tabs_3_long_passive_pane

0x0b01,	// (0x0004c07a) tabs_3_long_passive_pane_cp_ParamLimits

0x0b01,	// (0x0004c07a) tabs_3_long_passive_pane_cp

0x0a7b,	// (0x0004bff4) volume_small_pane_g1

0x0a84,	// (0x0004bffd) volume_small_pane_g2

0x0a8d,	// (0x0004c006) volume_small_pane_g3

0x0a96,	// (0x0004c00f) volume_small_pane_g4

0x0a9f,	// (0x0004c018) volume_small_pane_g5

0x0aa8,	// (0x0004c021) volume_small_pane_g6

0x0ab1,	// (0x0004c02a) volume_small_pane_g7

0x0aba,	// (0x0004c033) volume_small_pane_g8

0x0ac3,	// (0x0004c03c) volume_small_pane_g9

0x0acc,	// (0x0004c045) volume_small_pane_g10

0x0009,

0xf87b,	// (0x0005adf4) volume_small_pane_g

0x9208,	// (0x00054781) bg_active_tab_pane_cp2_ParamLimits

0x9208,	// (0x00054781) bg_active_tab_pane_cp2

0x9216,	// (0x0005478f) tabs_3_active_pane_g1

0x921e,	// (0x00054797) tabs_3_active_pane_t1

0x9208,	// (0x00054781) bg_passive_tab_pane_cp2_ParamLimits

0x9208,	// (0x00054781) bg_passive_tab_pane_cp2

0x9216,	// (0x0005478f) tabs_3_passive_pane_g1

0x921e,	// (0x00054797) tabs_3_passive_pane_t1

0x9208,	// (0x00054781) bg_active_tab_pane_cp3_ParamLimits

0x9208,	// (0x00054781) bg_active_tab_pane_cp3

0x9230,	// (0x000547a9) tabs_4_active_pane_g1

0x9238,	// (0x000547b1) tabs_4_active_pane_t1

0x9208,	// (0x00054781) bg_passive_tab_pane_cp3_ParamLimits

0x9208,	// (0x00054781) bg_passive_tab_pane_cp3

0x9230,	// (0x000547a9) tabs_4_1_passive_pane_g1

0x9238,	// (0x000547b1) tabs_4_1_passive_pane_t1

0x9d7f,	// (0x000552f8) list_highlight_pane_cp2

0xc9ae,	// (0x00057f27) list_set_pane_ParamLimits

0xc9ae,	// (0x00057f27) list_set_pane

0xca48,	// (0x00057fc1) main_pane_set_t1_ParamLimits

0xca48,	// (0x00057fc1) main_pane_set_t1

0xca68,	// (0x00057fe1) main_pane_set_t2_ParamLimits

0xca68,	// (0x00057fe1) main_pane_set_t2

0xca7c,	// (0x00057ff5) main_pane_set_t3_ParamLimits

0xca7c,	// (0x00057ff5) main_pane_set_t3

0xca8e,	// (0x00058007) main_pane_set_t4_ParamLimits

0xca8e,	// (0x00058007) main_pane_set_t4

0x0003,

0xf94b,	// (0x0005aec4) main_pane_set_t_ParamLimits

0xf94b,	// (0x0005aec4) main_pane_set_t

0xcaa0,	// (0x00058019) setting_code_pane

0xcaaa,	// (0x00058023) setting_slider_graphic_pane

0xcaaa,	// (0x00058023) setting_slider_pane

0xcaaa,	// (0x00058023) setting_text_pane

0xcaaa,	// (0x00058023) setting_volume_pane

0x924a,	// (0x000547c3) volume_set_pane

0x9252,	// (0x000547cb) bg_set_opt_pane_cp

0x9260,	// (0x000547d9) setting_slider_pane_t1

0x9279,	// (0x000547f2) setting_slider_pane_t2

0x9293,	// (0x0005480c) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0005aab2) setting_slider_pane_t

0x92ab,	// (0x00054824) slider_set_pane

0x8fb7,	// (0x00054530) bg_set_opt_pane_cp2

0x92c1,	// (0x0005483a) setting_slider_graphic_pane_g1

0x92ca,	// (0x00054843) setting_slider_graphic_pane_t1

0x92da,	// (0x00054853) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0005aab9) setting_slider_graphic_pane_t

0x92ea,	// (0x00054863) slider_set_pane_cp

0x8fb7,	// (0x00054530) input_focus_pane_cp1

0x359d,	// (0x0004eb16) list_set_text_pane

0x8ec7,	// (0x00054440) setting_text_pane_g1

0x8fb7,	// (0x00054530) input_focus_pane_cp2

0x8ec7,	// (0x00054440) setting_code_pane_g1

0x92f2,	// (0x0005486b) setting_code_pane_t1

0xe84c,	// (0x00059dc5) set_text_pane_t1_ParamLimits

0xe84c,	// (0x00059dc5) set_text_pane_t1

0x9bf3,	// (0x0005516c) set_opt_bg_pane_g1

0x9bfb,	// (0x00055174) set_opt_bg_pane_g2

0xc963,	// (0x00057edc) set_opt_bg_pane_g3

0x9c0b,	// (0x00055184) set_opt_bg_pane_g4

0x9c13,	// (0x0005518c) set_opt_bg_pane_g5

0x9c1b,	// (0x00055194) set_opt_bg_pane_g6

0xc96d,	// (0x00057ee6) set_opt_bg_pane_g7

0xc975,	// (0x00057eee) set_opt_bg_pane_g8

0xc97f,	// (0x00057ef8) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x0005aeb1) set_opt_bg_pane_g

0xc956,	// (0x00057ecf) slider_set_pane_g1

0x0c49,	// (0x0004c1c2) slider_set_pane_g2

0x0006,

0xf929,	// (0x0005aea2) slider_set_pane_g

0xb646,	// (0x00056bbf) volume_set_pane_g1

0xb64e,	// (0x00056bc7) volume_set_pane_g2

0xb656,	// (0x00056bcf) volume_set_pane_g3

0xb65e,	// (0x00056bd7) volume_set_pane_g4

0xb666,	// (0x00056bdf) volume_set_pane_g5

0xb66e,	// (0x00056be7) volume_set_pane_g6

0xb676,	// (0x00056bef) volume_set_pane_g7

0xb67e,	// (0x00056bf7) volume_set_pane_g8

0xb686,	// (0x00056bff) volume_set_pane_g9

0xb68e,	// (0x00056c07) volume_set_pane_g10

0x0009,

0xf901,	// (0x0005ae7a) volume_set_pane_g

0x9300,	// (0x00054879) indicator_pane_ParamLimits

0x9300,	// (0x00054879) indicator_pane

0x9328,	// (0x000548a1) main_idle_pane_g2_ParamLimits

0x9328,	// (0x000548a1) main_idle_pane_g2

0x9360,	// (0x000548d9) main_pane_idle_g1_ParamLimits

0x9360,	// (0x000548d9) main_pane_idle_g1

0x9387,	// (0x00054900) popup_clock_digital_analogue_window_ParamLimits

0x9387,	// (0x00054900) popup_clock_digital_analogue_window

0x939e,	// (0x00054917) soft_indicator_pane_ParamLimits

0x939e,	// (0x00054917) soft_indicator_pane

0x93c2,	// (0x0005493b) wallpaper_pane_ParamLimits

0x93c2,	// (0x0005493b) wallpaper_pane

0x8ec7,	// (0x00054440) wallpaper_pane_g1

0x93dc,	// (0x00054955) indicator_pane_g1_ParamLimits

0x93dc,	// (0x00054955) indicator_pane_g1

0x3952,	// (0x0004eecb) navi_navi_icon_text_pane_srt_g1

0x9401,	// (0x0005497a) soft_indicator_pane_t1

0x941b,	// (0x00054994) aid_ps_area_pane

0x942c,	// (0x000549a5) aid_ps_clock_pane

0x943a,	// (0x000549b3) aid_ps_indicator_pane

0x9446,	// (0x000549bf) indicator_ps_pane_ParamLimits

0x9446,	// (0x000549bf) indicator_ps_pane

0x9455,	// (0x000549ce) power_save_pane_g1_ParamLimits

0x9455,	// (0x000549ce) power_save_pane_g1

0x9461,	// (0x000549da) power_save_pane_g2_ParamLimits

0x9461,	// (0x000549da) power_save_pane_g2

0xe6bd,	// (0x00059c36) aid_navinavi_width_pane

0x941b,	// (0x00054994) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0005aabe) power_save_pane_g_ParamLimits

0xf545,	// (0x0005aabe) power_save_pane_g

0x946f,	// (0x000549e8) power_save_pane_t1_ParamLimits

0x946f,	// (0x000549e8) power_save_pane_t1

0x942c,	// (0x000549a5) aid_ps_clock_pane_ParamLimits

0x943a,	// (0x000549b3) aid_ps_indicator_pane_ParamLimits

0x9481,	// (0x000549fa) power_save_pane_t4_ParamLimits

0x9481,	// (0x000549fa) power_save_pane_t4

0x0001,

0xf54a,	// (0x0005aac3) power_save_pane_t_ParamLimits

0xf54a,	// (0x0005aac3) power_save_pane_t

0x94ab,	// (0x00054a24) power_save_t3_ParamLimits

0x94ab,	// (0x00054a24) power_save_t3

0x9496,	// (0x00054a0f) power_save_t2_ParamLimits

0x9496,	// (0x00054a0f) power_save_t2

0x94c0,	// (0x00054a39) indicator_ps_pane_g1

0x94c9,	// (0x00054a42) ai_gene_pane_ParamLimits

0x94c9,	// (0x00054a42) ai_gene_pane

0x94e0,	// (0x00054a59) ai_links_pane_ParamLimits

0x94e0,	// (0x00054a59) ai_links_pane

0x94f8,	// (0x00054a71) indicator_pane_cp1_ParamLimits

0x94f8,	// (0x00054a71) indicator_pane_cp1

0x9507,	// (0x00054a80) main_pane_idle_g1_cp_ParamLimits

0x9507,	// (0x00054a80) main_pane_idle_g1_cp

0x951f,	// (0x00054a98) popup_ai_links_title_window

0x9528,	// (0x00054aa1) soft_indicator_pane_cp1_ParamLimits

0x9528,	// (0x00054aa1) soft_indicator_pane_cp1

0x3364,	// (0x0004e8dd) ai_links_pane_g1

0x336d,	// (0x0004e8e6) grid_ai_links_pane

0xc873,	// (0x00057dec) ai_gene_pane_1

0x3352,	// (0x0004e8cb) ai_gene_pane_2

0x335b,	// (0x0004e8d4) list_highlight_pane_cp4

0xc84f,	// (0x00057dc8) cell_ai_link_pane_ParamLimits

0xc84f,	// (0x00057dc8) cell_ai_link_pane

0x3323,	// (0x0004e89c) cell_ai_link_pane_g1

0x9776,	// (0x00054cef) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x0005ae55) cell_ai_link_pane_g

0x8fb7,	// (0x00054530) grid_highlight_cp2

0x8fb7,	// (0x00054530) bg_popup_sub_pane_cp1

0x954a,	// (0x00054ac3) popup_ai_links_title_window_t1

0x3273,	// (0x0004e7ec) ai_gene_pane_1_g1_ParamLimits

0x3273,	// (0x0004e7ec) ai_gene_pane_1_g1

0x327f,	// (0x0004e7f8) ai_gene_pane_1_g2_ParamLimits

0x327f,	// (0x0004e7f8) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0005ae4b) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0005ae4b) ai_gene_pane_1_g

0x328c,	// (0x0004e805) ai_gene_pane_1_t1_ParamLimits

0x328c,	// (0x0004e805) ai_gene_pane_1_t1

0x32c0,	// (0x0004e839) grid_ai_soft_ind_pane

0x325e,	// (0x0004e7d7) ai_gene_pane_2_t1_ParamLimits

0x325e,	// (0x0004e7d7) ai_gene_pane_2_t1

0x9559,	// (0x00054ad2) main_pane_empty_t1_ParamLimits

0x9559,	// (0x00054ad2) main_pane_empty_t1

0x9571,	// (0x00054aea) main_pane_empty_t2_ParamLimits

0x9571,	// (0x00054aea) main_pane_empty_t2

0x9586,	// (0x00054aff) main_pane_empty_t3_ParamLimits

0x9586,	// (0x00054aff) main_pane_empty_t3

0x9598,	// (0x00054b11) main_pane_empty_t4_ParamLimits

0x9598,	// (0x00054b11) main_pane_empty_t4

0x95aa,	// (0x00054b23) main_pane_empty_t5_ParamLimits

0x95aa,	// (0x00054b23) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0005aac8) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0005aac8) main_pane_empty_t

0x9cb6,	// (0x0005522f) bg_popup_window_pane_ParamLimits

0x9cb6,	// (0x0005522f) bg_popup_window_pane

0xc7c9,	// (0x00057d42) find_popup_pane_cp2_ParamLimits

0xc7c9,	// (0x00057d42) find_popup_pane_cp2

0x2fda,	// (0x0004e553) heading_pane_ParamLimits

0x2fda,	// (0x0004e553) heading_pane

0x8fb7,	// (0x00054530) bg_popup_sub_pane

0xc74a,	// (0x00057cc3) bg_popup_window_pane_g1_ParamLimits

0xc74a,	// (0x00057cc3) bg_popup_window_pane_g1

0xc759,	// (0x00057cd2) bg_popup_window_pane_g2_ParamLimits

0xc759,	// (0x00057cd2) bg_popup_window_pane_g2

0xc765,	// (0x00057cde) bg_popup_window_pane_g3_ParamLimits

0xc765,	// (0x00057cde) bg_popup_window_pane_g3

0xc771,	// (0x00057cea) bg_popup_window_pane_g4_ParamLimits

0xc771,	// (0x00057cea) bg_popup_window_pane_g4

0xc780,	// (0x00057cf9) bg_popup_window_pane_g5_ParamLimits

0xc780,	// (0x00057cf9) bg_popup_window_pane_g5

0xc790,	// (0x00057d09) bg_popup_window_pane_g6_ParamLimits

0xc790,	// (0x00057d09) bg_popup_window_pane_g6

0xc79c,	// (0x00057d15) bg_popup_window_pane_g7_ParamLimits

0xc79c,	// (0x00057d15) bg_popup_window_pane_g7

0xc7ab,	// (0x00057d24) bg_popup_window_pane_g8_ParamLimits

0xc7ab,	// (0x00057d24) bg_popup_window_pane_g8

0xc7ba,	// (0x00057d33) bg_popup_window_pane_g9_ParamLimits

0xc7ba,	// (0x00057d33) bg_popup_window_pane_g9

0x2fb4,	// (0x0004e52d) bg_popup_window_pane_g10_ParamLimits

0x2fb4,	// (0x0004e52d) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x0005ae13) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x0005ae13) bg_popup_window_pane_g

0x2edd,	// (0x0004e456) bg_popup_heading_pane_ParamLimits

0x2edd,	// (0x0004e456) bg_popup_heading_pane

0x0d7c,	// (0x0004c2f5) tabs_4_passive_pane_cp_srt_ParamLimits

0x0d7c,	// (0x0004c2f5) tabs_4_passive_pane_cp_srt

0x0d8e,	// (0x0004c307) tabs_4_passive_pane_srt_ParamLimits

0x2ef1,	// (0x0004e46a) heading_pane_g2

0x0d8e,	// (0x0004c307) tabs_4_passive_pane_srt

0x2267,	// (0x0004d7e0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2267,	// (0x0004d7e0) bg_passive_tab_pane_cp3_srt

0x2ef9,	// (0x0004e472) heading_pane_t1_ParamLimits

0x2ef9,	// (0x0004e472) heading_pane_t1

0x2f10,	// (0x0004e489) heading_pane_t2_ParamLimits

0x2f10,	// (0x0004e489) heading_pane_t2

0x0001,

0xf895,	// (0x0005ae0e) heading_pane_t_ParamLimits

0xf895,	// (0x0005ae0e) heading_pane_t

0x2a1a,	// (0x0004df93) bg_popup_heading_pane_g1

0x2ac9,	// (0x0004e042) bg_popup_heading_pane_g2

0x2ad3,	// (0x0004e04c) bg_popup_heading_pane_g3

0x2add,	// (0x0004e056) bg_popup_heading_pane_g4

0x2ae7,	// (0x0004e060) bg_popup_heading_pane_g5

0x2af1,	// (0x0004e06a) bg_popup_heading_pane_g6

0x2af9,	// (0x0004e072) bg_popup_heading_pane_g7

0x2b01,	// (0x0004e07a) bg_popup_heading_pane_g8

0x2b0b,	// (0x0004e084) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0005adca) bg_popup_heading_pane_g

0x21db,	// (0x0004d754) bg_popup_sub_pane_g1

0x21e3,	// (0x0004d75c) bg_popup_sub_pane_g2

0x21eb,	// (0x0004d764) bg_popup_sub_pane_g3

0x21f3,	// (0x0004d76c) bg_popup_sub_pane_g4

0x21fb,	// (0x0004d774) bg_popup_sub_pane_g5

0x2203,	// (0x0004d77c) bg_popup_sub_pane_g6

0x220b,	// (0x0004d784) bg_popup_sub_pane_g7

0x2213,	// (0x0004d78c) bg_popup_sub_pane_g8

0x221b,	// (0x0004d794) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x0005ada4) bg_popup_sub_pane_g

0x9208,	// (0x00054781) bg_popup_window_pane_cp5_ParamLimits

0x9208,	// (0x00054781) bg_popup_window_pane_cp5

0x95ca,	// (0x00054b43) popup_note_window_g1_ParamLimits

0x95ca,	// (0x00054b43) popup_note_window_g1

0x95d6,	// (0x00054b4f) popup_note_window_t1_ParamLimits

0x95d6,	// (0x00054b4f) popup_note_window_t1

0x95ec,	// (0x00054b65) popup_note_window_t2_ParamLimits

0x95ec,	// (0x00054b65) popup_note_window_t2

0x9602,	// (0x00054b7b) popup_note_window_t3_ParamLimits

0x9602,	// (0x00054b7b) popup_note_window_t3

0x9618,	// (0x00054b91) popup_note_window_t4_ParamLimits

0x9618,	// (0x00054b91) popup_note_window_t4

0x9640,	// (0x00054bb9) popup_note_window_t5_ParamLimits

0x9640,	// (0x00054bb9) popup_note_window_t5

0x0004,

0xf55a,	// (0x0005aad3) popup_note_window_t_ParamLimits

0xf55a,	// (0x0005aad3) popup_note_window_t

0x968a,	// (0x00054c03) bg_popup_window_pane_cp6_ParamLimits

0x968a,	// (0x00054c03) bg_popup_window_pane_cp6

0x2996,	// (0x0004df0f) popup_note_image_window_g1_ParamLimits

0x2996,	// (0x0004df0f) popup_note_image_window_g1

0xc5ef,	// (0x00057b68) popup_note_image_window_g2_ParamLimits

0xc5ef,	// (0x00057b68) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x0005ad98) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x0005ad98) popup_note_image_window_g

0x29bb,	// (0x0004df34) popup_note_image_window_t1_ParamLimits

0x29bb,	// (0x0004df34) popup_note_image_window_t1

0x29d4,	// (0x0004df4d) popup_note_image_window_t2_ParamLimits

0x29d4,	// (0x0004df4d) popup_note_image_window_t2

0x29ed,	// (0x0004df66) popup_note_image_window_t3_ParamLimits

0x29ed,	// (0x0004df66) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0005ad9d) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0005ad9d) popup_note_image_window_t

0x285f,	// (0x0004ddd8) bg_popup_window_pane_cp7_ParamLimits

0x285f,	// (0x0004ddd8) bg_popup_window_pane_cp7

0x288f,	// (0x0004de08) popup_note_wait_window_g1_ParamLimits

0x288f,	// (0x0004de08) popup_note_wait_window_g1

0x289b,	// (0x0004de14) popup_note_wait_window_g2_ParamLimits

0x289b,	// (0x0004de14) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x0005ad86) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x0005ad86) popup_note_wait_window_g

0x28b3,	// (0x0004de2c) popup_note_wait_window_t1_ParamLimits

0x28b3,	// (0x0004de2c) popup_note_wait_window_t1

0xc590,	// (0x00057b09) popup_note_wait_window_t2_ParamLimits

0xc590,	// (0x00057b09) popup_note_wait_window_t2

0xc5ad,	// (0x00057b26) popup_note_wait_window_t3_ParamLimits

0xc5ad,	// (0x00057b26) popup_note_wait_window_t3

0xc5c0,	// (0x00057b39) popup_note_wait_window_t4_ParamLimits

0xc5c0,	// (0x00057b39) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0005ad8d) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0005ad8d) popup_note_wait_window_t

0x292f,	// (0x0004dea8) wait_bar_pane_ParamLimits

0x292f,	// (0x0004dea8) wait_bar_pane

0x8fb7,	// (0x00054530) wait_anim_pane

0x8fb7,	// (0x00054530) wait_border_pane

0x8ec7,	// (0x00054440) wait_anim_pane_g1

0x8ec7,	// (0x00054440) wait_anim_pane_g2

0x0001,

0xf6d4,	// (0x0005ac4d) wait_anim_pane_g

0x280b,	// (0x0004dd84) wait_border_pane_g1

0x2816,	// (0x0004dd8f) wait_border_pane_g2

0x281f,	// (0x0004dd98) wait_border_pane_g3

0x0002,

0xf806,	// (0x0005ad7f) wait_border_pane_g

0x2676,	// (0x0004dbef) bg_popup_window_pane_cp16_ParamLimits

0x2676,	// (0x0004dbef) bg_popup_window_pane_cp16

0xb5ee,	// (0x00056b67) indicator_popup_pane_cp4_ParamLimits

0xb5ee,	// (0x00056b67) indicator_popup_pane_cp4

0x278a,	// (0x0004dd03) popup_query_data_window_t1_ParamLimits

0x278a,	// (0x0004dd03) popup_query_data_window_t1

0x279c,	// (0x0004dd15) popup_query_data_window_t2_ParamLimits

0x279c,	// (0x0004dd15) popup_query_data_window_t2

0x27b5,	// (0x0004dd2e) popup_query_data_window_t3_ParamLimits

0x27b5,	// (0x0004dd2e) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x0005ad78) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x0005ad78) popup_query_data_window_t

0xb602,	// (0x00056b7b) query_popup_data_pane_ParamLimits

0xb602,	// (0x00056b7b) query_popup_data_pane

0xb616,	// (0x00056b8f) query_popup_data_pane_cp1_ParamLimits

0xb616,	// (0x00056b8f) query_popup_data_pane_cp1

0x2676,	// (0x0004dbef) bg_popup_window_pane_cp10_ParamLimits

0x2676,	// (0x0004dbef) bg_popup_window_pane_cp10

0xb569,	// (0x00056ae2) indicator_popup_pane_ParamLimits

0xb569,	// (0x00056ae2) indicator_popup_pane

0xb58b,	// (0x00056b04) popup_query_code_window_t1_ParamLimits

0xb58b,	// (0x00056b04) popup_query_code_window_t1

0xb5a5,	// (0x00056b1e) popup_query_code_window_t2_ParamLimits

0xb5a5,	// (0x00056b1e) popup_query_code_window_t2

0x272d,	// (0x0004dca6) popup_query_code_window_t3_ParamLimits

0x272d,	// (0x0004dca6) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x0005ad71) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x0005ad71) popup_query_code_window_t

0x275c,	// (0x0004dcd5) query_popup_pane_ParamLimits

0x275c,	// (0x0004dcd5) query_popup_pane

0x968a,	// (0x00054c03) bg_popup_window_pane_cp15_ParamLimits

0x968a,	// (0x00054c03) bg_popup_window_pane_cp15

0x96a8,	// (0x00054c21) indicator_popup_pane_cp1_ParamLimits

0x96a8,	// (0x00054c21) indicator_popup_pane_cp1

0x96bb,	// (0x00054c34) indicator_popup_pane_cp2_ParamLimits

0x96bb,	// (0x00054c34) indicator_popup_pane_cp2

0x96ce,	// (0x00054c47) popup_query_data_code_window_g1_ParamLimits

0x96ce,	// (0x00054c47) popup_query_data_code_window_g1

0x96e1,	// (0x00054c5a) popup_query_data_code_window_t1_ParamLimits

0x96e1,	// (0x00054c5a) popup_query_data_code_window_t1

0x96f3,	// (0x00054c6c) popup_query_data_code_window_t2_ParamLimits

0x96f3,	// (0x00054c6c) popup_query_data_code_window_t2

0x9705,	// (0x00054c7e) popup_query_data_code_window_t3_ParamLimits

0x9705,	// (0x00054c7e) popup_query_data_code_window_t3

0x971b,	// (0x00054c94) popup_query_data_code_window_t4_ParamLimits

0x971b,	// (0x00054c94) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0005aade) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0005aade) popup_query_data_code_window_t

0xc27e,	// (0x000577f7) list_single_midp_graphic_pane_g3

0x9733,	// (0x00054cac) query_popup_data_pane_cp2_ParamLimits

0x9746,	// (0x00054cbf) query_popup_pane_cp2_ParamLimits

0x9746,	// (0x00054cbf) query_popup_pane_cp2

0x8fb7,	// (0x00054530) bg_popup_window_pane_cp11

0x265a,	// (0x0004dbd3) heading_pane_cp5

0x2662,	// (0x0004dbdb) listscroll_popup_info_pane

0x8fb7,	// (0x00054530) input_focus_pane_cp3

0x9759,	// (0x00054cd2) query_popup_pane_t1

0x9767,	// (0x00054ce0) list_popup_info_pane_ParamLimits

0x9767,	// (0x00054ce0) list_popup_info_pane

0x9776,	// (0x00054cef) listscroll_popup_info_pane_g1

0x977e,	// (0x00054cf7) scroll_pane_cp7

0x9788,	// (0x00054d01) popup_info_list_pane_t1_ParamLimits

0x9788,	// (0x00054d01) popup_info_list_pane_t1

0x97a2,	// (0x00054d1b) popup_info_list_pane_t2_ParamLimits

0x97a2,	// (0x00054d1b) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0005aae7) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0005aae7) popup_info_list_pane_t

0x8fb7,	// (0x00054530) bg_popup_window_pane_cp12

0xcc5d,	// (0x000581d6) find_popup_pane

0x9252,	// (0x000547cb) bg_popup_window_pane_cp3

0x97bc,	// (0x00054d35) heading_pane_cp3

0x97cb,	// (0x00054d44) listscroll_popup_graphic_pane

0x8fb7,	// (0x00054530) bg_popup_window_pane_cp4

0x982b,	// (0x00054da4) heading_pane_cp4

0x9835,	// (0x00054dae) listscroll_popup_colour_pane

0x983d,	// (0x00054db6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x983d,	// (0x00054db6) cell_large_graphic_colour_none_popup_pane

0x9851,	// (0x00054dca) grid_large_graphic_colour_popup_pane_ParamLimits

0x9851,	// (0x00054dca) grid_large_graphic_colour_popup_pane

0x9875,	// (0x00054dee) listscroll_popup_colour_pane_g1_ParamLimits

0x9875,	// (0x00054dee) listscroll_popup_colour_pane_g1

0x988c,	// (0x00054e05) listscroll_popup_colour_pane_g2_ParamLimits

0x988c,	// (0x00054e05) listscroll_popup_colour_pane_g2

0x98a3,	// (0x00054e1c) listscroll_popup_colour_pane_g3_ParamLimits

0x98a3,	// (0x00054e1c) listscroll_popup_colour_pane_g3

0x98b3,	// (0x00054e2c) listscroll_popup_colour_pane_g4_ParamLimits

0x98b3,	// (0x00054e2c) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0005aaec) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0005aaec) listscroll_popup_colour_pane_g

0x98c3,	// (0x00054e3c) scroll_pane_cp6_ParamLimits

0x98c3,	// (0x00054e3c) scroll_pane_cp6

0x98d5,	// (0x00054e4e) cell_large_graphic_colour_popup_pane_ParamLimits

0x98d5,	// (0x00054e4e) cell_large_graphic_colour_popup_pane

0x98f4,	// (0x00054e6d) cell_large_graphic_colour_none_popup_pane_t1

0x8fb7,	// (0x00054530) grid_highlight_pane_cp5

0x9903,	// (0x00054e7c) cell_large_graphic_colour_popup_pane_g1

0x990b,	// (0x00054e84) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0005aaf5) cell_large_graphic_colour_popup_pane_g

0x9913,	// (0x00054e8c) cell_large_graphic_colour_popup_pane_g2_copy1

0x991c,	// (0x00054e95) grid_highlight_pane_cp4

0x9924,	// (0x00054e9d) bg_popup_window_pane_cp8_ParamLimits

0x9924,	// (0x00054e9d) bg_popup_window_pane_cp8

0x993f,	// (0x00054eb8) popup_snote_single_text_window_g1_ParamLimits

0x993f,	// (0x00054eb8) popup_snote_single_text_window_g1

0x9951,	// (0x00054eca) popup_snote_single_text_window_t1_ParamLimits

0x9951,	// (0x00054eca) popup_snote_single_text_window_t1

0x9964,	// (0x00054edd) popup_snote_single_text_window_t2_ParamLimits

0x9964,	// (0x00054edd) popup_snote_single_text_window_t2

0x9977,	// (0x00054ef0) popup_snote_single_text_window_t3_ParamLimits

0x9977,	// (0x00054ef0) popup_snote_single_text_window_t3

0x99b0,	// (0x00054f29) popup_snote_single_text_window_t4_ParamLimits

0x99b0,	// (0x00054f29) popup_snote_single_text_window_t4

0x99e4,	// (0x00054f5d) popup_snote_single_text_window_t5_ParamLimits

0x99e4,	// (0x00054f5d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0005aafa) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0005aafa) popup_snote_single_text_window_t

0x9a13,	// (0x00054f8c) bg_popup_window_pane_cp9_ParamLimits

0x9a13,	// (0x00054f8c) bg_popup_window_pane_cp9

0x993f,	// (0x00054eb8) popup_snote_single_graphic_window_g1_ParamLimits

0x993f,	// (0x00054eb8) popup_snote_single_graphic_window_g1

0x9a21,	// (0x00054f9a) popup_snote_single_graphic_window_g2_ParamLimits

0x9a21,	// (0x00054f9a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0005ab05) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0005ab05) popup_snote_single_graphic_window_g

0x9a2d,	// (0x00054fa6) popup_snote_single_graphic_window_t1_ParamLimits

0x9a2d,	// (0x00054fa6) popup_snote_single_graphic_window_t1

0x9a40,	// (0x00054fb9) popup_snote_single_graphic_window_t2_ParamLimits

0x9a40,	// (0x00054fb9) popup_snote_single_graphic_window_t2

0x9977,	// (0x00054ef0) popup_snote_single_graphic_window_t3_ParamLimits

0x9977,	// (0x00054ef0) popup_snote_single_graphic_window_t3

0x99b0,	// (0x00054f29) popup_snote_single_graphic_window_t4_ParamLimits

0x99b0,	// (0x00054f29) popup_snote_single_graphic_window_t4

0x9a53,	// (0x00054fcc) popup_snote_single_graphic_window_t5_ParamLimits

0x9a53,	// (0x00054fcc) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0005ab0a) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0005ab0a) popup_snote_single_graphic_window_t

0x38ae,	// (0x0004ee27) grid_graphic_popup_pane_ParamLimits

0x38ae,	// (0x0004ee27) grid_graphic_popup_pane

0x38d8,	// (0x0004ee51) listscroll_popup_graphic_pane_g1_ParamLimits

0x38d8,	// (0x0004ee51) listscroll_popup_graphic_pane_g1

0xcbfb,	// (0x00058174) listscroll_popup_graphic_pane_g2_ParamLimits

0xcbfb,	// (0x00058174) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x0005aeee) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x0005aeee) listscroll_popup_graphic_pane_g

0x3900,	// (0x0004ee79) scroll_pane_cp5

0xcbba,	// (0x00058133) cell_graphic_popup_pane_ParamLimits

0xcbba,	// (0x00058133) cell_graphic_popup_pane

0x3825,	// (0x0004ed9e) cell_graphic_popup_pane_g1

0x382d,	// (0x0004eda6) cell_graphic_popup_pane_g2

0x9913,	// (0x00054e8c) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x0005aee7) cell_graphic_popup_pane_g

0xcbac,	// (0x00058125) cell_graphic_popup_pane_t2

0x991c,	// (0x00054e95) grid_highlight_pane_cp3

0x9a94,	// (0x0005500d) list_gen_pane_ParamLimits

0x9a94,	// (0x0005500d) list_gen_pane

0x9ac6,	// (0x0005503f) scroll_pane

0xcb16,	// (0x0005808f) bg_list_pane_g1_ParamLimits

0xcb16,	// (0x0005808f) bg_list_pane_g1

0xcb31,	// (0x000580aa) bg_list_pane_g2_ParamLimits

0xcb31,	// (0x000580aa) bg_list_pane_g2

0xcb44,	// (0x000580bd) bg_list_pane_g3_ParamLimits

0xcb44,	// (0x000580bd) bg_list_pane_g3

0xcb56,	// (0x000580cf) bg_list_pane_g4_ParamLimits

0xcb56,	// (0x000580cf) bg_list_pane_g4

0xcb68,	// (0x000580e1) bg_list_pane_g5_ParamLimits

0xcb68,	// (0x000580e1) bg_list_pane_g5

0x0004,

0xf963,	// (0x0005aedc) bg_list_pane_g_ParamLimits

0xf963,	// (0x0005aedc) bg_list_pane_g

0xb702,	// (0x00056c7b) list_double2_graphic_large_graphic_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double2_graphic_large_graphic_pane

0xb702,	// (0x00056c7b) list_double2_graphic_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double2_graphic_pane

0xb702,	// (0x00056c7b) list_double2_large_graphic_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double2_large_graphic_pane

0xb702,	// (0x00056c7b) list_double2_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double2_pane

0xb702,	// (0x00056c7b) list_double_graphic_heading_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double_graphic_heading_pane

0xb702,	// (0x00056c7b) list_double_graphic_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double_graphic_pane

0xb702,	// (0x00056c7b) list_double_heading_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double_heading_pane

0xb702,	// (0x00056c7b) list_double_large_graphic_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double_large_graphic_pane

0xb702,	// (0x00056c7b) list_double_number_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double_number_pane

0xb702,	// (0x00056c7b) list_double_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double_pane

0xb702,	// (0x00056c7b) list_double_time_pane_ParamLimits

0xb702,	// (0x00056c7b) list_double_time_pane

0xb702,	// (0x00056c7b) list_setting_number_pane_ParamLimits

0xb702,	// (0x00056c7b) list_setting_number_pane

0xb702,	// (0x00056c7b) list_setting_pane_ParamLimits

0xb702,	// (0x00056c7b) list_setting_pane

0x9d21,	// (0x0005529a) list_single_2graphic_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_2graphic_pane

0x9d21,	// (0x0005529a) list_single_graphic_heading_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_graphic_heading_pane

0x9d21,	// (0x0005529a) list_single_graphic_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_graphic_pane

0x9d21,	// (0x0005529a) list_single_heading_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_heading_pane

0xcb03,	// (0x0005807c) list_single_large_graphic_pane_ParamLimits

0xcb03,	// (0x0005807c) list_single_large_graphic_pane

0x9d21,	// (0x0005529a) list_single_number_heading_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_number_heading_pane

0x9d21,	// (0x0005529a) list_single_number_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_number_pane

0x9d21,	// (0x0005529a) list_single_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_pane

0x8fb7,	// (0x00054530) list_highlight_pane_cp1

0xbf96,	// (0x0005750f) list_single_pane_g1_ParamLimits

0xbf96,	// (0x0005750f) list_single_pane_g1

0x096f,	// (0x0004bee8) list_single_pane_g2_ParamLimits

0x096f,	// (0x0004bee8) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_single_pane_g

0x8cf6,	// (0x0005426f) list_single_pane_t1_ParamLimits

0x8cf6,	// (0x0005426f) list_single_pane_t1

0xbf96,	// (0x0005750f) list_single_number_pane_g1_ParamLimits

0xbf96,	// (0x0005750f) list_single_number_pane_g1

0x096f,	// (0x0004bee8) list_single_number_pane_g2_ParamLimits

0x096f,	// (0x0004bee8) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_single_number_pane_g

0xe871,	// (0x00059dea) list_single_number_pane_t1_ParamLimits

0xe871,	// (0x00059dea) list_single_number_pane_t1

0x8cb6,	// (0x0005422f) list_single_number_pane_t2_ParamLimits

0x8cb6,	// (0x0005422f) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0005ae9d) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0005ae9d) list_single_number_pane_t

0xe865,	// (0x00059dde) list_single_graphic_pane_g1_ParamLimits

0xe865,	// (0x00059dde) list_single_graphic_pane_g1

0xbf96,	// (0x0005750f) list_single_graphic_pane_g2_ParamLimits

0xbf96,	// (0x0005750f) list_single_graphic_pane_g2

0x096f,	// (0x0004bee8) list_single_graphic_pane_g3_ParamLimits

0x096f,	// (0x0004bee8) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0005ab15) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0005ab15) list_single_graphic_pane_g

0xe871,	// (0x00059dea) list_single_graphic_pane_t1_ParamLimits

0xe871,	// (0x00059dea) list_single_graphic_pane_t1

0x8684,	// (0x00053bfd) list_single_heading_pane_g1_ParamLimits

0x8684,	// (0x00053bfd) list_single_heading_pane_g1

0x096f,	// (0x0004bee8) list_single_heading_pane_g2_ParamLimits

0x096f,	// (0x0004bee8) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0005ab1c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0005ab1c) list_single_heading_pane_g

0x8697,	// (0x00053c10) list_single_heading_pane_t1_ParamLimits

0x8697,	// (0x00053c10) list_single_heading_pane_t1

0x9afa,	// (0x00055073) list_single_heading_pane_t2_ParamLimits

0x9afa,	// (0x00055073) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0005ab21) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0005ab21) list_single_heading_pane_t

0xbf96,	// (0x0005750f) list_single_number_heading_pane_g1_ParamLimits

0xbf96,	// (0x0005750f) list_single_number_heading_pane_g1

0x096f,	// (0x0004bee8) list_single_number_heading_pane_g2_ParamLimits

0x096f,	// (0x0004bee8) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_single_number_heading_pane_g

0x86ad,	// (0x00053c26) list_single_number_heading_pane_t1_ParamLimits

0x86ad,	// (0x00053c26) list_single_number_heading_pane_t1

0x86c3,	// (0x00053c3c) list_single_number_heading_pane_t2_ParamLimits

0x86c3,	// (0x00053c3c) list_single_number_heading_pane_t2

0x86d5,	// (0x00053c4e) list_single_number_heading_pane_t3_ParamLimits

0x86d5,	// (0x00053c4e) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0005ab2b) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0005ab2b) list_single_number_heading_pane_t

0x86e7,	// (0x00053c60) list_single_graphic_heading_pane_g1_ParamLimits

0x86e7,	// (0x00053c60) list_single_graphic_heading_pane_g1

0x9b0c,	// (0x00055085) list_single_graphic_heading_pane_g4_ParamLimits

0x9b0c,	// (0x00055085) list_single_graphic_heading_pane_g4

0x096f,	// (0x0004bee8) list_single_graphic_heading_pane_g5_ParamLimits

0x096f,	// (0x0004bee8) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0005ab32) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0005ab32) list_single_graphic_heading_pane_g

0x86ad,	// (0x00053c26) list_single_graphic_heading_pane_t1_ParamLimits

0x86ad,	// (0x00053c26) list_single_graphic_heading_pane_t1

0x86fd,	// (0x00053c76) list_single_graphic_heading_pane_t2_ParamLimits

0x86fd,	// (0x00053c76) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0005ab39) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0005ab39) list_single_graphic_heading_pane_t

0x0e72,	// (0x0004c3eb) list_single_large_graphic_pane_g1_ParamLimits

0x0e72,	// (0x0004c3eb) list_single_large_graphic_pane_g1

0xf0ba,	// (0x0005a633) list_single_large_graphic_pane_g2_ParamLimits

0xf0ba,	// (0x0005a633) list_single_large_graphic_pane_g2

0xf0c6,	// (0x0005a63f) list_single_large_graphic_pane_g3_ParamLimits

0xf0c6,	// (0x0005a63f) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0005ab3e) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0005ab3e) list_single_large_graphic_pane_g

0x2816,	// (0x0004dd8f) wait_border_pane_g2_copy1

0x9b1d,	// (0x00055096) list_single_large_graphic_pane_g4_cp2

0xe887,	// (0x00059e00) list_single_large_graphic_pane_t1_ParamLimits

0xe887,	// (0x00059e00) list_single_large_graphic_pane_t1

0x8715,	// (0x00053c8e) list_double_pane_g1_ParamLimits

0x8715,	// (0x00053c8e) list_double_pane_g1

0x8721,	// (0x00053c9a) list_double_pane_g2_ParamLimits

0x8721,	// (0x00053c9a) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0005ab45) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0005ab45) list_double_pane_g

0x872d,	// (0x00053ca6) list_double_pane_t1_ParamLimits

0x872d,	// (0x00053ca6) list_double_pane_t1

0x8743,	// (0x00053cbc) list_double_pane_t2_ParamLimits

0x8743,	// (0x00053cbc) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0005ab4a) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0005ab4a) list_double_pane_t

0x8755,	// (0x00053cce) list_double2_pane_g1_ParamLimits

0x8755,	// (0x00053cce) list_double2_pane_g1

0x8766,	// (0x00053cdf) list_double2_pane_g2_ParamLimits

0x8766,	// (0x00053cdf) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0005ab4f) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0005ab4f) list_double2_pane_g

0x8772,	// (0x00053ceb) list_double2_pane_t1_ParamLimits

0x8772,	// (0x00053ceb) list_double2_pane_t1

0x8788,	// (0x00053d01) list_double2_pane_t2_ParamLimits

0x8788,	// (0x00053d01) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0005ab54) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0005ab54) list_double2_pane_t

0x8715,	// (0x00053c8e) list_double_number_pane_g1_ParamLimits

0x8715,	// (0x00053c8e) list_double_number_pane_g1

0x8721,	// (0x00053c9a) list_double_number_pane_g2_ParamLimits

0x8721,	// (0x00053c9a) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0005ab45) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0005ab45) list_double_number_pane_g

0x879a,	// (0x00053d13) list_double_number_pane_t1_ParamLimits

0x879a,	// (0x00053d13) list_double_number_pane_t1

0x87ac,	// (0x00053d25) list_double_number_pane_t2_ParamLimits

0x87ac,	// (0x00053d25) list_double_number_pane_t2

0x87c2,	// (0x00053d3b) list_double_number_pane_t3_ParamLimits

0x87c2,	// (0x00053d3b) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0005ab59) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0005ab59) list_double_number_pane_t

0x87d4,	// (0x00053d4d) list_double_graphic_pane_g1_ParamLimits

0x87d4,	// (0x00053d4d) list_double_graphic_pane_g1

0x87e0,	// (0x00053d59) list_double_graphic_pane_g2_ParamLimits

0x87e0,	// (0x00053d59) list_double_graphic_pane_g2

0x3c9c,	// (0x0004f215) list_double_graphic_pane_g3_ParamLimits

0x3c9c,	// (0x0004f215) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0005ab60) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0005ab60) list_double_graphic_pane_g

0x872d,	// (0x00053ca6) list_double_graphic_pane_t1_ParamLimits

0x872d,	// (0x00053ca6) list_double_graphic_pane_t1

0x8743,	// (0x00053cbc) list_double_graphic_pane_t2_ParamLimits

0x8743,	// (0x00053cbc) list_double_graphic_pane_t2

0x0001,

0xf5d1,	// (0x0005ab4a) list_double_graphic_pane_t_ParamLimits

0xf5d1,	// (0x0005ab4a) list_double_graphic_pane_t

0x87fb,	// (0x00053d74) list_double2_graphic_pane_g1_ParamLimits

0x87fb,	// (0x00053d74) list_double2_graphic_pane_g1

0x8807,	// (0x00053d80) list_double2_graphic_pane_g2_ParamLimits

0x8807,	// (0x00053d80) list_double2_graphic_pane_g2

0x9b25,	// (0x0005509e) list_double2_graphic_pane_g3_ParamLimits

0x9b25,	// (0x0005509e) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005ab69) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005ab69) list_double2_graphic_pane_g

0x8813,	// (0x00053d8c) list_double2_graphic_pane_t1_ParamLimits

0x8813,	// (0x00053d8c) list_double2_graphic_pane_t1

0x8829,	// (0x00053da2) list_double2_graphic_pane_t2_ParamLimits

0x8829,	// (0x00053da2) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005ab70) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005ab70) list_double2_graphic_pane_t

0x883b,	// (0x00053db4) list_double_large_graphic_pane_g1_ParamLimits

0x883b,	// (0x00053db4) list_double_large_graphic_pane_g1

0x885a,	// (0x00053dd3) list_double_large_graphic_pane_g2_ParamLimits

0x885a,	// (0x00053dd3) list_double_large_graphic_pane_g2

0x8721,	// (0x00053c9a) list_double_large_graphic_pane_g3_ParamLimits

0x8721,	// (0x00053c9a) list_double_large_graphic_pane_g3

0x8870,	// (0x00053de9) list_double_large_graphic_pane_g4_ParamLimits

0x8870,	// (0x00053de9) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0005ab75) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0005ab75) list_double_large_graphic_pane_g

0x8883,	// (0x00053dfc) list_double_large_graphic_pane_t1_ParamLimits

0x8883,	// (0x00053dfc) list_double_large_graphic_pane_t1

0x889c,	// (0x00053e15) list_double_large_graphic_pane_t2_ParamLimits

0x889c,	// (0x00053e15) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0005ab80) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0005ab80) list_double_large_graphic_pane_t

0x88ae,	// (0x00053e27) list_double2_large_graphic_pane_g1_ParamLimits

0x88ae,	// (0x00053e27) list_double2_large_graphic_pane_g1

0x9b31,	// (0x000550aa) list_double2_large_graphic_pane_g2_ParamLimits

0x9b31,	// (0x000550aa) list_double2_large_graphic_pane_g2

0x9b25,	// (0x0005509e) list_double2_large_graphic_pane_g3_ParamLimits

0x9b25,	// (0x0005509e) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0005ab85) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005ab85) list_double2_large_graphic_pane_g

0x8813,	// (0x00053d8c) list_double2_large_graphic_pane_t1_ParamLimits

0x8813,	// (0x00053d8c) list_double2_large_graphic_pane_t1

0x8829,	// (0x00053da2) list_double2_large_graphic_pane_t2_ParamLimits

0x8829,	// (0x00053da2) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0005ab70) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0005ab70) list_double2_large_graphic_pane_t

0x88ba,	// (0x00053e33) list_double_heading_pane_g1_ParamLimits

0x88ba,	// (0x00053e33) list_double_heading_pane_g1

0xf0e7,	// (0x0005a660) list_double_heading_pane_g2_ParamLimits

0xf0e7,	// (0x0005a660) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x0005ab8c) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x0005ab8c) list_double_heading_pane_g

0x88cb,	// (0x00053e44) list_double_heading_pane_t1_ParamLimits

0x88cb,	// (0x00053e44) list_double_heading_pane_t1

0x8829,	// (0x00053da2) list_double_heading_pane_t2_ParamLimits

0x8829,	// (0x00053da2) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x0005ab91) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x0005ab91) list_double_heading_pane_t

0x88e1,	// (0x00053e5a) list_double_graphic_heading_pane_g1_ParamLimits

0x88e1,	// (0x00053e5a) list_double_graphic_heading_pane_g1

0x88ba,	// (0x00053e33) list_double_graphic_heading_pane_g2_ParamLimits

0x88ba,	// (0x00053e33) list_double_graphic_heading_pane_g2

0xf0e7,	// (0x0005a660) list_double_graphic_heading_pane_g3_ParamLimits

0xf0e7,	// (0x0005a660) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x0005ab96) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0005ab96) list_double_graphic_heading_pane_g

0x88cb,	// (0x00053e44) list_double_graphic_heading_pane_t1_ParamLimits

0x88cb,	// (0x00053e44) list_double_graphic_heading_pane_t1

0x8829,	// (0x00053da2) list_double_graphic_heading_pane_t2_ParamLimits

0x8829,	// (0x00053da2) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x0005ab91) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x0005ab91) list_double_graphic_heading_pane_t

0x88ed,	// (0x00053e66) list_double_time_pane_g1_ParamLimits

0x88ed,	// (0x00053e66) list_double_time_pane_g1

0xe89d,	// (0x00059e16) list_double_time_pane_g2_ParamLimits

0xe89d,	// (0x00059e16) list_double_time_pane_g2

0x0001,

0xf624,	// (0x0005ab9d) list_double_time_pane_g_ParamLimits

0xf624,	// (0x0005ab9d) list_double_time_pane_g

0x88fe,	// (0x00053e77) list_double_time_pane_t1_ParamLimits

0x88fe,	// (0x00053e77) list_double_time_pane_t1

0x8914,	// (0x00053e8d) list_double_time_pane_t2_ParamLimits

0x8914,	// (0x00053e8d) list_double_time_pane_t2

0x8926,	// (0x00053e9f) list_double_time_pane_t3_ParamLimits

0x8926,	// (0x00053e9f) list_double_time_pane_t3

0x8938,	// (0x00053eb1) list_double_time_pane_t4_ParamLimits

0x8938,	// (0x00053eb1) list_double_time_pane_t4

0x0003,

0xf629,	// (0x0005aba2) list_double_time_pane_t_ParamLimits

0xf629,	// (0x0005aba2) list_double_time_pane_t

0x894a,	// (0x00053ec3) list_setting_pane_g1_ParamLimits

0x894a,	// (0x00053ec3) list_setting_pane_g1

0x8956,	// (0x00053ecf) list_setting_pane_g2_ParamLimits

0x8956,	// (0x00053ecf) list_setting_pane_g2

0x0001,

0xf632,	// (0x0005abab) list_setting_pane_g_ParamLimits

0xf632,	// (0x0005abab) list_setting_pane_g

0x8962,	// (0x00053edb) list_setting_pane_t1_ParamLimits

0x8962,	// (0x00053edb) list_setting_pane_t1

0x897c,	// (0x00053ef5) list_setting_pane_t2_ParamLimits

0x897c,	// (0x00053ef5) list_setting_pane_t2

0x0002,

0xf637,	// (0x0005abb0) list_setting_pane_t_ParamLimits

0xf637,	// (0x0005abb0) list_setting_pane_t

0x89bb,	// (0x00053f34) set_value_pane_cp_ParamLimits

0x89bb,	// (0x00053f34) set_value_pane_cp

0x89c7,	// (0x00053f40) list_setting_number_pane_g1_ParamLimits

0x89c7,	// (0x00053f40) list_setting_number_pane_g1

0x89d3,	// (0x00053f4c) list_setting_number_pane_g2_ParamLimits

0x89d3,	// (0x00053f4c) list_setting_number_pane_g2

0x0001,

0xf63e,	// (0x0005abb7) list_setting_number_pane_g_ParamLimits

0xf63e,	// (0x0005abb7) list_setting_number_pane_g

0x89df,	// (0x00053f58) list_setting_number_pane_t1_ParamLimits

0x89df,	// (0x00053f58) list_setting_number_pane_t1

0x89f8,	// (0x00053f71) list_setting_number_pane_t2_ParamLimits

0x89f8,	// (0x00053f71) list_setting_number_pane_t2

0x8a12,	// (0x00053f8b) list_setting_number_pane_t3_ParamLimits

0x8a12,	// (0x00053f8b) list_setting_number_pane_t3

0x0003,

0xf643,	// (0x0005abbc) list_setting_number_pane_t_ParamLimits

0xf643,	// (0x0005abbc) list_setting_number_pane_t

0x89bb,	// (0x00053f34) set_value_pane_ParamLimits

0x89bb,	// (0x00053f34) set_value_pane

0x9b42,	// (0x000550bb) bg_set_opt_pane_ParamLimits

0x9b42,	// (0x000550bb) bg_set_opt_pane

0xe8a9,	// (0x00059e22) set_value_pane_t1

0x9b63,	// (0x000550dc) slider_set_pane_cp3

0x9b6c,	// (0x000550e5) volume_small_pane_cp

0x9b75,	// (0x000550ee) list_form_gen_pane

0x9b7e,	// (0x000550f7) scroll_pane_cp8

0x8a55,	// (0x00053fce) form_field_data_pane_ParamLimits

0x8a55,	// (0x00053fce) form_field_data_pane

0x8a6c,	// (0x00053fe5) form_field_data_wide_pane_ParamLimits

0x8a6c,	// (0x00053fe5) form_field_data_wide_pane

0x8a8c,	// (0x00054005) form_field_popup_pane_ParamLimits

0x8a8c,	// (0x00054005) form_field_popup_pane

0x8aac,	// (0x00054025) form_field_popup_wide_pane_ParamLimits

0x8aac,	// (0x00054025) form_field_popup_wide_pane

0xe8c7,	// (0x00059e40) form_field_slider_pane_ParamLimits

0xe8c7,	// (0x00059e40) form_field_slider_pane

0x8ac3,	// (0x0005403c) form_field_slider_wide_pane_ParamLimits

0x8ac3,	// (0x0005403c) form_field_slider_wide_pane

0x9b8f,	// (0x00055108) data_form_pane

0x8ae0,	// (0x00054059) form_field_data_pane_t1

0x9b9b,	// (0x00055114) input_focus_pane

0xe8da,	// (0x00059e53) data_form_wide_pane

0xe8f7,	// (0x00059e70) form_field_data_wide_pane_t1

0x9931,	// (0x00054eaa) input_focus_pane_cp6

0x8afa,	// (0x00054073) form_field_popup_pane_t1

0x9b9b,	// (0x00055114) input_focus_pane_cp7

0x9bc9,	// (0x00055142) list_form_pane

0xe921,	// (0x00059e9a) form_field_popup_wide_pane_t1

0x9b9b,	// (0x00055114) input_focus_pane_cp8

0x9bd5,	// (0x0005514e) list_form_wide_pane

0x8b1c,	// (0x00054095) form_field_slider_pane_t1_ParamLimits

0x8b1c,	// (0x00054095) form_field_slider_pane_t1

0x8b34,	// (0x000540ad) form_field_slider_pane_t2_ParamLimits

0x8b34,	// (0x000540ad) form_field_slider_pane_t2

0x0001,

0xf653,	// (0x0005abcc) form_field_slider_pane_t_ParamLimits

0xf653,	// (0x0005abcc) form_field_slider_pane_t

0x9208,	// (0x00054781) input_focus_pane_cp9_ParamLimits

0x9208,	// (0x00054781) input_focus_pane_cp9

0x8b49,	// (0x000540c2) slider_cont_pane_ParamLimits

0x8b49,	// (0x000540c2) slider_cont_pane

0x9be1,	// (0x0005515a) form_field_slider_wide_pane_t1_ParamLimits

0x9be1,	// (0x0005515a) form_field_slider_wide_pane_t1

0xe936,	// (0x00059eaf) form_field_slider_wide_pane_t2_ParamLimits

0xe936,	// (0x00059eaf) form_field_slider_wide_pane_t2

0x0001,

0xf658,	// (0x0005abd1) form_field_slider_wide_pane_t_ParamLimits

0xf658,	// (0x0005abd1) form_field_slider_wide_pane_t

0x9208,	// (0x00054781) input_focus_pane_cp10_ParamLimits

0x9208,	// (0x00054781) input_focus_pane_cp10

0x8b5d,	// (0x000540d6) slider_cont_pane_cp1_ParamLimits

0x8b5d,	// (0x000540d6) slider_cont_pane_cp1

0x8b71,	// (0x000540ea) slider_form_pane_cp

0x9bf3,	// (0x0005516c) input_focus_pane_g1

0x9bfb,	// (0x00055174) input_focus_pane_g2

0x9c03,	// (0x0005517c) input_focus_pane_g3

0x9c0b,	// (0x00055184) input_focus_pane_g4

0x9c13,	// (0x0005518c) input_focus_pane_g5

0x9c1b,	// (0x00055194) input_focus_pane_g6

0x9c23,	// (0x0005519c) input_focus_pane_g7

0x9c2b,	// (0x000551a4) input_focus_pane_g8

0x9c33,	// (0x000551ac) input_focus_pane_g9

0x8ec7,	// (0x00054440) input_focus_pane_g10

0x0009,

0xf65d,	// (0x0005abd6) input_focus_pane_g

0x281f,	// (0x0004dd98) wait_border_pane_g3_copy1

0x8b79,	// (0x000540f2) data_form_pane_t1

0x8ec7,	// (0x00054440) wait_anim_pane_g1_copy1

0x8cc8,	// (0x00054241) data_form_wide_pane_t1

0x8b93,	// (0x0005410c) list_form_graphic_pane_cp_ParamLimits

0x8b93,	// (0x0005410c) list_form_graphic_pane_cp

0x370e,	// (0x0004ec87) slider_form_pane_g1

0x3717,	// (0x0004ec90) slider_form_pane_g2

0x0006,

0xf954,	// (0x0005aecd) slider_form_pane_g

0x8ba5,	// (0x0005411e) list_form_graphic_pane_ParamLimits

0x8ba5,	// (0x0005411e) list_form_graphic_pane

0x8bb8,	// (0x00054131) list_form_graphic_pane_g1

0x8bc0,	// (0x00054139) list_form_graphic_pane_t1_ParamLimits

0x8bc0,	// (0x00054139) list_form_graphic_pane_t1

0x9252,	// (0x000547cb) list_highlight_pane_cp5_ParamLimits

0x9252,	// (0x000547cb) list_highlight_pane_cp5

0x8bd5,	// (0x0005414e) find_pane_g1

0x9c3b,	// (0x000551b4) input_find_pane

0x8bde,	// (0x00054157) input_find_pane_g1_ParamLimits

0x8bde,	// (0x00054157) input_find_pane_g1

0x8bea,	// (0x00054163) input_find_pane_t1_ParamLimits

0x8bea,	// (0x00054163) input_find_pane_t1

0x8bff,	// (0x00054178) input_find_pane_t2_ParamLimits

0x8bff,	// (0x00054178) input_find_pane_t2

0x0001,

0xf672,	// (0x0005abeb) input_find_pane_t_ParamLimits

0xf672,	// (0x0005abeb) input_find_pane_t

0x9c44,	// (0x000551bd) input_focus_pane_cp5_ParamLimits

0x9c44,	// (0x000551bd) input_focus_pane_cp5

0x9c63,	// (0x000551dc) bg_popup_window_pane_cp2_ParamLimits

0x9c63,	// (0x000551dc) bg_popup_window_pane_cp2

0x9c70,	// (0x000551e9) listscroll_menu_pane_ParamLimits

0x9c70,	// (0x000551e9) listscroll_menu_pane

0x9c7c,	// (0x000551f5) popup_submenu_window_ParamLimits

0x9c7c,	// (0x000551f5) popup_submenu_window

0x9ca4,	// (0x0005521d) find_popup_pane_g1

0x9cac,	// (0x00055225) input_popup_find_pane_cp

0x9cb6,	// (0x0005522f) input_focus_pane_cp4_ParamLimits

0x9cb6,	// (0x0005522f) input_focus_pane_cp4

0x9cd2,	// (0x0005524b) input_popup_find_pane_t1_ParamLimits

0x9cd2,	// (0x0005524b) input_popup_find_pane_t1

0x8fb7,	// (0x00054530) bg_popup_sub_pane_cp

0x9d00,	// (0x00055279) listscroll_popup_sub_pane

0x9d08,	// (0x00055281) list_submenu_pane_ParamLimits

0x9d08,	// (0x00055281) list_submenu_pane

0x9d19,	// (0x00055292) scroll_pane_cp4

0x9d21,	// (0x0005529a) list_single_popup_submenu_pane_ParamLimits

0x9d21,	// (0x0005529a) list_single_popup_submenu_pane

0x9d35,	// (0x000552ae) list_single_popup_submenu_pane_g1

0x9d3d,	// (0x000552b6) list_single_popup_submenu_pane_t1_ParamLimits

0x9d3d,	// (0x000552b6) list_single_popup_submenu_pane_t1

0x9208,	// (0x00054781) bg_active_tab_pane_cp1_ParamLimits

0x9208,	// (0x00054781) bg_active_tab_pane_cp1

0x9d52,	// (0x000552cb) tabs_2_active_pane_g1

0x9d5a,	// (0x000552d3) tabs_2_active_pane_t1

0x9208,	// (0x00054781) bg_passive_tab_pane_cp1_ParamLimits

0x9208,	// (0x00054781) bg_passive_tab_pane_cp1

0x9d52,	// (0x000552cb) tabs_2_passive_pane_g1

0x9d5a,	// (0x000552d3) tabs_2_passive_pane_t1

0x9252,	// (0x000547cb) bg_active_tab_pane_cp4

0x9d6c,	// (0x000552e5) tabs_2_long_active_pane_t1

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp4

0x09a0,	// (0x0004bf19) list_single_midp_graphic_pane_g4_ParamLimits

0x9252,	// (0x000547cb) bg_active_tab_pane_cp5

0x9d8b,	// (0x00055304) tabs_3_long_active_pane_t1

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp5

0x09a0,	// (0x0004bf19) list_single_midp_graphic_pane_g4

0x9252,	// (0x000547cb) bg_popup_window_pane_cp13_ParamLimits

0x9252,	// (0x000547cb) bg_popup_window_pane_cp13

0x9da6,	// (0x0005531f) listscroll_popup_fast_pane_ParamLimits

0x9da6,	// (0x0005531f) listscroll_popup_fast_pane

0x9db2,	// (0x0005532b) grid_popup_fast_pane_ParamLimits

0x9db2,	// (0x0005532b) grid_popup_fast_pane

0x9dc4,	// (0x0005533d) scroll_pane_cp9_ParamLimits

0x9dc4,	// (0x0005533d) scroll_pane_cp9

0x4ffd,	// (0x00050576) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4ffd,	// (0x00050576) list_single_graphic_hl_pane_t1_cp2

0x9de8,	// (0x00055361) input_focus_pane_cp20_ParamLimits

0x9de8,	// (0x00055361) input_focus_pane_cp20

0x9df6,	// (0x0005536f) query_popup_data_pane_t1_ParamLimits

0x9df6,	// (0x0005536f) query_popup_data_pane_t1

0x9e09,	// (0x00055382) query_popup_data_pane_t2_ParamLimits

0x9e09,	// (0x00055382) query_popup_data_pane_t2

0x9e4f,	// (0x000553c8) query_popup_data_pane_t3_ParamLimits

0x9e4f,	// (0x000553c8) query_popup_data_pane_t3

0x9e90,	// (0x00055409) query_popup_data_pane_t4_ParamLimits

0x9e90,	// (0x00055409) query_popup_data_pane_t4

0x9ecc,	// (0x00055445) query_popup_data_pane_t5_ParamLimits

0x9ecc,	// (0x00055445) query_popup_data_pane_t5

0x0004,

0xf677,	// (0x0005abf0) query_popup_data_pane_t_ParamLimits

0xf677,	// (0x0005abf0) query_popup_data_pane_t

0x9bf3,	// (0x0005516c) bg_set_opt_pane_g1

0x9bfb,	// (0x00055174) bg_set_opt_pane_g2

0x9c03,	// (0x0005517c) bg_set_opt_pane_g3

0x9c0b,	// (0x00055184) bg_set_opt_pane_g4

0x9c13,	// (0x0005518c) bg_set_opt_pane_g5

0x9c1b,	// (0x00055194) bg_set_opt_pane_g6

0x9c23,	// (0x0005519c) bg_set_opt_pane_g7

0x9c2b,	// (0x000551a4) bg_set_opt_pane_g8

0x9c33,	// (0x000551ac) bg_set_opt_pane_g9

0x0008,

0xf682,	// (0x0005abfb) bg_set_opt_pane_g

0xf330,	// (0x0005a8a9) control_top_pane_stacon_ParamLimits

0xf330,	// (0x0005a8a9) control_top_pane_stacon

0xf383,	// (0x0005a8fc) signal_pane_stacon_ParamLimits

0xf383,	// (0x0005a8fc) signal_pane_stacon

0xc15c,	// (0x000576d5) stacon_top_pane_g1_ParamLimits

0xc15c,	// (0x000576d5) stacon_top_pane_g1

0xf3a8,	// (0x0005a921) title_pane_stacon_ParamLimits

0xf3a8,	// (0x0005a921) title_pane_stacon

0xf3d2,	// (0x0005a94b) uni_indicator_pane_stacon_ParamLimits

0xf3d2,	// (0x0005a94b) uni_indicator_pane_stacon

0xf3e7,	// (0x0005a960) battery_pane_stacon_ParamLimits

0xf3e7,	// (0x0005a960) battery_pane_stacon

0xf42b,	// (0x0005a9a4) control_bottom_pane_stacon_ParamLimits

0xf42b,	// (0x0005a9a4) control_bottom_pane_stacon

0xf44e,	// (0x0005a9c7) navi_pane_stacon_ParamLimits

0xf44e,	// (0x0005a9c7) navi_pane_stacon

0xc17e,	// (0x000576f7) stacon_bottom_pane_g1_ParamLimits

0xc17e,	// (0x000576f7) stacon_bottom_pane_g1

0xf0f3,	// (0x0005a66c) aid_levels_signal_lsc_ParamLimits

0xf0f3,	// (0x0005a66c) aid_levels_signal_lsc

0xf109,	// (0x0005a682) signal_pane_stacon_g1_ParamLimits

0xf109,	// (0x0005a682) signal_pane_stacon_g1

0xf11d,	// (0x0005a696) signal_pane_stacon_g2_ParamLimits

0xf11d,	// (0x0005a696) signal_pane_stacon_g2

0x0001,

0xf695,	// (0x0005ac0e) signal_pane_stacon_g_ParamLimits

0xf695,	// (0x0005ac0e) signal_pane_stacon_g

0xf152,	// (0x0005a6cb) title_pane_stacon_t1_ParamLimits

0xf152,	// (0x0005a6cb) title_pane_stacon_t1

0x9f10,	// (0x00055489) uni_indicator_pane_stacon_g1

0x9f1a,	// (0x00055493) uni_indicator_pane_stacon_g2

0x9f24,	// (0x0005549d) uni_indicator_pane_stacon_g3

0x9f2e,	// (0x000554a7) uni_indicator_pane_stacon_g4

0x0003,

0xf6a1,	// (0x0005ac1a) uni_indicator_pane_stacon_g

0xf177,	// (0x0005a6f0) control_top_pane_stacon_g1

0xf17f,	// (0x0005a6f8) control_top_pane_stacon_t1_ParamLimits

0xf17f,	// (0x0005a6f8) control_top_pane_stacon_t1

0xf1b6,	// (0x0005a72f) aid_levels_battery_lsc_ParamLimits

0xf1b6,	// (0x0005a72f) aid_levels_battery_lsc

0xf1cd,	// (0x0005a746) battery_pane_stacon_g1_ParamLimits

0xf1cd,	// (0x0005a746) battery_pane_stacon_g1

0xf1e0,	// (0x0005a759) battery_pane_stacon_g2_ParamLimits

0xf1e0,	// (0x0005a759) battery_pane_stacon_g2

0x0001,

0xf6aa,	// (0x0005ac23) battery_pane_stacon_g_ParamLimits

0xf6aa,	// (0x0005ac23) battery_pane_stacon_g

0xf21e,	// (0x0005a797) navi_icon_pane_stacon

0xf232,	// (0x0005a7ab) navi_navi_pane_stacon

0xf21e,	// (0x0005a797) navi_text_pane_stacon

0xf177,	// (0x0005a6f0) control_bottom_pane_stacon_g1

0xf246,	// (0x0005a7bf) control_bottom_pane_stacon_t1_ParamLimits

0xf246,	// (0x0005a7bf) control_bottom_pane_stacon_t1

0x9f52,	// (0x000554cb) grid_app_pane_ParamLimits

0x9f52,	// (0x000554cb) grid_app_pane

0x9f8a,	// (0x00055503) scroll_pane_cp15_ParamLimits

0x9f8a,	// (0x00055503) scroll_pane_cp15

0x9f9f,	// (0x00055518) cell_app_pane_ParamLimits

0x9f9f,	// (0x00055518) cell_app_pane

0x9fe4,	// (0x0005555d) cell_app_pane_g1_ParamLimits

0x9fe4,	// (0x0005555d) cell_app_pane_g1

0xa008,	// (0x00055581) cell_app_pane_g2_ParamLimits

0xa008,	// (0x00055581) cell_app_pane_g2

0x0001,

0xf6af,	// (0x0005ac28) cell_app_pane_g_ParamLimits

0xf6af,	// (0x0005ac28) cell_app_pane_g

0xa014,	// (0x0005558d) cell_app_pane_t1_ParamLimits

0xa014,	// (0x0005558d) cell_app_pane_t1

0xa02b,	// (0x000555a4) grid_highlight_pane_ParamLimits

0xa02b,	// (0x000555a4) grid_highlight_pane

0x9bf3,	// (0x0005516c) cell_highlight_pane_g1

0x9bfb,	// (0x00055174) cell_highlight_pane_g2

0x9c03,	// (0x0005517c) cell_highlight_pane_g3

0x9c0b,	// (0x00055184) cell_highlight_pane_g4

0x9c13,	// (0x0005518c) cell_highlight_pane_g5

0x9c1b,	// (0x00055194) cell_highlight_pane_g6

0x9c23,	// (0x0005519c) cell_highlight_pane_g7

0x9c2b,	// (0x000551a4) cell_highlight_pane_g8

0x9c33,	// (0x000551ac) cell_highlight_pane_g9

0x8ec7,	// (0x00054440) cell_highlight_pane_g10

0x0009,

0xf65d,	// (0x0005abd6) cell_highlight_pane_g

0xa045,	// (0x000555be) bg_scroll_pane

0xa064,	// (0x000555dd) scroll_handle_pane

0xa0a0,	// (0x00055619) scroll_bg_pane_g1

0xa0b5,	// (0x0005562e) scroll_bg_pane_g2

0xa0cd,	// (0x00055646) scroll_bg_pane_g3

0x0002,

0xf6b4,	// (0x0005ac2d) scroll_bg_pane_g

0xa0e2,	// (0x0005565b) scroll_handle_focus_pane_ParamLimits

0xa0e2,	// (0x0005565b) scroll_handle_focus_pane

0xa0a0,	// (0x00055619) scroll_handle_pane_g1

0xa0ef,	// (0x00055668) scroll_handle_pane_g2

0xa0cd,	// (0x00055646) scroll_handle_pane_g3

0x0002,

0xf6bb,	// (0x0005ac34) scroll_handle_pane_g

0x9cb6,	// (0x0005522f) bg_popup_sub_pane_cp21_ParamLimits

0x9cb6,	// (0x0005522f) bg_popup_sub_pane_cp21

0xa103,	// (0x0005567c) popup_fep_japan_predictive_window_t1_ParamLimits

0xa103,	// (0x0005567c) popup_fep_japan_predictive_window_t1

0xa11a,	// (0x00055693) popup_fep_japan_predictive_window_t2_ParamLimits

0xa11a,	// (0x00055693) popup_fep_japan_predictive_window_t2

0xa14d,	// (0x000556c6) popup_fep_japan_predictive_window_t3_ParamLimits

0xa14d,	// (0x000556c6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c2,	// (0x0005ac3b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c2,	// (0x0005ac3b) popup_fep_japan_predictive_window_t

0x8fb7,	// (0x00054530) bg_popup_sub_pane_cp23

0xa184,	// (0x000556fd) listscroll_japin_cand_pane

0xa18c,	// (0x00055705) popup_fep_japan_candidate_window_t1

0xa19a,	// (0x00055713) candidate_pane_ParamLimits

0xa19a,	// (0x00055713) candidate_pane

0xa1ac,	// (0x00055725) scroll_pane_cp30

0xa1b4,	// (0x0005572d) list_single_popup_jap_candidate_pane_ParamLimits

0xa1b4,	// (0x0005572d) list_single_popup_jap_candidate_pane

0x8fb7,	// (0x00054530) list_highlight_pane_cp30

0xa1c9,	// (0x00055742) list_single_popup_jap_candidate_pane_t1

0xa1d8,	// (0x00055751) level_1_signal

0xa1e5,	// (0x0005575e) level_2_signal

0xa1f2,	// (0x0005576b) level_3_signal

0xa1ff,	// (0x00055778) level_4_signal

0xa20c,	// (0x00055785) level_5_signal

0xa219,	// (0x00055792) level_6_signal

0xbfa2,	// (0x0005751b) level_7_signal

0xa1d8,	// (0x00055751) level_1_battery

0xa1e5,	// (0x0005575e) level_2_battery

0xa1f2,	// (0x0005576b) level_3_battery

0xa1ff,	// (0x00055778) level_4_battery

0xa20c,	// (0x00055785) level_5_battery

0xa219,	// (0x00055792) level_6_battery

0xbfa2,	// (0x0005751b) level_7_battery

0xbfc7,	// (0x00057540) list_menu_pane_ParamLimits

0xbfc7,	// (0x00057540) list_menu_pane

0xbfdd,	// (0x00057556) scroll_pane_cp25_ParamLimits

0xbfdd,	// (0x00057556) scroll_pane_cp25

0xa226,	// (0x0005579f) list_double2_graphic_pane_cp2_ParamLimits

0xa226,	// (0x0005579f) list_double2_graphic_pane_cp2

0xa226,	// (0x0005579f) list_double2_large_graphic_pane_cp2_ParamLimits

0xa226,	// (0x0005579f) list_double2_large_graphic_pane_cp2

0xa226,	// (0x0005579f) list_double2_pane_cp2_ParamLimits

0xa226,	// (0x0005579f) list_double2_pane_cp2

0xa226,	// (0x0005579f) list_double_graphic_pane_cp2_ParamLimits

0xa226,	// (0x0005579f) list_double_graphic_pane_cp2

0xa226,	// (0x0005579f) list_double_large_graphic_pane_cp2_ParamLimits

0xa226,	// (0x0005579f) list_double_large_graphic_pane_cp2

0xa226,	// (0x0005579f) list_double_number_pane_cp2_ParamLimits

0xa226,	// (0x0005579f) list_double_number_pane_cp2

0xa226,	// (0x0005579f) list_double_pane_cp2_ParamLimits

0xa226,	// (0x0005579f) list_double_pane_cp2

0xa235,	// (0x000557ae) list_single_2graphic_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_2graphic_pane_cp2

0xa235,	// (0x000557ae) list_single_graphic_heading_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_graphic_heading_pane_cp2

0xa235,	// (0x000557ae) list_single_graphic_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_graphic_pane_cp2

0xa235,	// (0x000557ae) list_single_heading_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_heading_pane_cp2

0xc006,	// (0x0005757f) list_single_large_graphic_pane_cp2_ParamLimits

0xc006,	// (0x0005757f) list_single_large_graphic_pane_cp2

0xa235,	// (0x000557ae) list_single_number_heading_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_number_heading_pane_cp2

0xa235,	// (0x000557ae) list_single_number_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_number_pane_cp2

0xa235,	// (0x000557ae) list_single_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_pane_cp2

0xc020,	// (0x00057599) bg_popup_sub_pane_cp22

0xf316,	// (0x0005a88f) popup_side_volume_key_window_g1

0xf322,	// (0x0005a89b) popup_side_volume_key_window_t1

0xa2fd,	// (0x00055876) volume_small_pane_cp1

0x9208,	// (0x00054781) bg_popup_sub_pane_cp24_ParamLimits

0x9208,	// (0x00054781) bg_popup_sub_pane_cp24

0xc036,	// (0x000575af) fep_china_uni_candidate_pane_ParamLimits

0xc036,	// (0x000575af) fep_china_uni_candidate_pane

0xc04a,	// (0x000575c3) fep_china_uni_entry_pane

0xc05a,	// (0x000575d3) popup_fep_china_uni_window_g1

0xa305,	// (0x0005587e) fep_china_uni_entry_pane_g1

0xa30d,	// (0x00055886) fep_china_uni_entry_pane_g2

0x0001,

0xf6f3,	// (0x0005ac6c) fep_china_uni_entry_pane_g

0xc076,	// (0x000575ef) fep_entry_item_pane

0xc080,	// (0x000575f9) fep_candidate_item_pane

0xa315,	// (0x0005588e) fep_china_uni_candidate_pane_g1

0xc088,	// (0x00057601) fep_china_uni_candidate_pane_g2

0xc090,	// (0x00057609) fep_china_uni_candidate_pane_g3

0xa31d,	// (0x00055896) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f8,	// (0x0005ac71) fep_china_uni_candidate_pane_g

0x8ec7,	// (0x00054440) fep_entry_item_pane_g1

0xc098,	// (0x00057611) fep_entry_item_pane_t1_ParamLimits

0xc098,	// (0x00057611) fep_entry_item_pane_t1

0xc0ae,	// (0x00057627) fep_candidate_item_pane_t1_ParamLimits

0xc0ae,	// (0x00057627) fep_candidate_item_pane_t1

0xc0c3,	// (0x0005763c) fep_candidate_item_pane_t2_ParamLimits

0xc0c3,	// (0x0005763c) fep_candidate_item_pane_t2

0x0001,

0xf701,	// (0x0005ac7a) fep_candidate_item_pane_t_ParamLimits

0xf701,	// (0x0005ac7a) fep_candidate_item_pane_t

0x9252,	// (0x000547cb) list_highlight_pane_cp31_ParamLimits

0x9252,	// (0x000547cb) list_highlight_pane_cp31

0xc0d5,	// (0x0005764e) level_1_signal_lsc

0xc0de,	// (0x00057657) level_2_signal_lsc

0xc0e7,	// (0x00057660) level_3_signal_lsc

0xc0f0,	// (0x00057669) level_4_signal_lsc

0xc0f9,	// (0x00057672) level_5_signal_lsc

0xc102,	// (0x0005767b) level_6_signal_lsc

0xc10b,	// (0x00057684) level_7_signal_lsc

0xc10b,	// (0x00057684) level_1_battery_lsc

0xc114,	// (0x0005768d) level_2_battery_lsc

0xc11d,	// (0x00057696) level_3_battery_lsc

0xc126,	// (0x0005769f) level_4_battery_lsc

0xc12f,	// (0x000576a8) level_5_battery_lsc

0xc138,	// (0x000576b1) level_6_battery_lsc

0xc0d5,	// (0x0005764e) level_7_battery_lsc

0xc141,	// (0x000576ba) scroll_handle_focus_pane_g1

0xc14a,	// (0x000576c3) scroll_handle_focus_pane_g2

0xc153,	// (0x000576cc) scroll_handle_focus_pane_g3

0x0002,

0xf706,	// (0x0005ac7f) scroll_handle_focus_pane_g

0x8c14,	// (0x0005418d) list_single_2graphic_pane_g1_ParamLimits

0x8c14,	// (0x0005418d) list_single_2graphic_pane_g1

0x9b0c,	// (0x00055085) list_single_2graphic_pane_g2_ParamLimits

0x9b0c,	// (0x00055085) list_single_2graphic_pane_g2

0x096f,	// (0x0004bee8) list_single_2graphic_pane_g3_ParamLimits

0x096f,	// (0x0004bee8) list_single_2graphic_pane_g3

0x8c20,	// (0x00054199) list_single_2graphic_pane_g4_ParamLimits

0x8c20,	// (0x00054199) list_single_2graphic_pane_g4

0x0003,

0xf70d,	// (0x0005ac86) list_single_2graphic_pane_g_ParamLimits

0xf70d,	// (0x0005ac86) list_single_2graphic_pane_g

0x8c2c,	// (0x000541a5) list_single_2graphic_pane_t1_ParamLimits

0x8c2c,	// (0x000541a5) list_single_2graphic_pane_t1

0x8c5a,	// (0x000541d3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8c5a,	// (0x000541d3) list_double2_graphic_large_graphic_pane_g1

0x9b31,	// (0x000550aa) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9b31,	// (0x000550aa) list_double2_graphic_large_graphic_pane_g2

0x9b25,	// (0x0005509e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9b25,	// (0x0005509e) list_double2_graphic_large_graphic_pane_g3

0x8c6c,	// (0x000541e5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8c6c,	// (0x000541e5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf716,	// (0x0005ac8f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf716,	// (0x0005ac8f) list_double2_graphic_large_graphic_pane_g

0x8c78,	// (0x000541f1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8c78,	// (0x000541f1) list_double2_graphic_large_graphic_pane_t1

0x8c8e,	// (0x00054207) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8c8e,	// (0x00054207) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71f,	// (0x0005ac98) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71f,	// (0x0005ac98) list_double2_graphic_large_graphic_pane_t

0xa398,	// (0x00055911) popup_fast_swap_window_ParamLimits

0xa398,	// (0x00055911) popup_fast_swap_window

0xa3b4,	// (0x0005592d) popup_side_volume_key_window

0xc209,	// (0x00057782) stacon_top_pane

0xc213,	// (0x0005778c) status_pane_ParamLimits

0xc213,	// (0x0005778c) status_pane

0xa3ce,	// (0x00055947) status_small_pane

0x8fb7,	// (0x00054530) control_pane

0x8fb7,	// (0x00054530) stacon_bottom_pane

0x9b7e,	// (0x000550f7) scroll_pane_cp121

0x9b75,	// (0x000550ee) set_content_pane

0xa325,	// (0x0005589e) bg_active_tab_pane_g1_cp1

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp1

0xa337,	// (0x000558b0) bg_active_tab_pane_g3_cp1

0xa325,	// (0x0005589e) bg_passive_tab_pane_g1_cp1

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp1

0xa337,	// (0x000558b0) bg_passive_tab_pane_g3_cp1

0xa340,	// (0x000558b9) bg_active_tab_pane_g1_cp2

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp2

0xa349,	// (0x000558c2) bg_active_tab_pane_g3_cp2

0xa340,	// (0x000558b9) bg_passive_tab_pane_g1_cp2

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp2

0xa349,	// (0x000558c2) bg_passive_tab_pane_g3_cp2

0xa352,	// (0x000558cb) bg_active_tab_pane_g1_cp3

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp3

0xa35b,	// (0x000558d4) bg_active_tab_pane_g3_cp3

0xa352,	// (0x000558cb) bg_passive_tab_pane_g1_cp3

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp3

0xa35b,	// (0x000558d4) bg_passive_tab_pane_g3_cp3

0xa364,	// (0x000558dd) bg_active_tab_pane_g1_cp4

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp4

0xa36f,	// (0x000558e8) bg_active_tab_pane_g3_cp4

0xa364,	// (0x000558dd) bg_passive_tab_pane_g1_cp4

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp4

0xa36f,	// (0x000558e8) bg_passive_tab_pane_g3_cp4

0xa37a,	// (0x000558f3) bg_active_tab_pane_g1_cp5

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp5

0xa383,	// (0x000558fc) bg_active_tab_pane_g3_cp5

0xa37a,	// (0x000558f3) bg_passive_tab_pane_g1_cp5

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp5

0xa383,	// (0x000558fc) bg_passive_tab_pane_g3_cp5

0x3cc0,	// (0x0004f239) list_set_graphic_pane_ParamLimits

0x3cc0,	// (0x0004f239) list_set_graphic_pane

0x8fb7,	// (0x00054530) bg_set_opt_pane_cp4

0xc19a,	// (0x00057713) list_set_graphic_pane_g1_ParamLimits

0xc19a,	// (0x00057713) list_set_graphic_pane_g1

0xc1a6,	// (0x0005771f) list_set_graphic_pane_g2_ParamLimits

0xc1a6,	// (0x0005771f) list_set_graphic_pane_g2

0x0001,

0xf724,	// (0x0005ac9d) list_set_graphic_pane_g_ParamLimits

0xf724,	// (0x0005ac9d) list_set_graphic_pane_g

0x0009,

0xfaa9,	// (0x0005b022) volume_small_pane_cp_g

0xa38c,	// (0x00055905) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa38c,	// (0x00055905) list_double2_large_graphic_pane_g1_cp2

0xc1c8,	// (0x00057741) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc1c8,	// (0x00057741) list_double2_large_graphic_pane_g2_cp2

0xc1d9,	// (0x00057752) list_double2_large_graphic_pane_g3_cp2

0xc1e1,	// (0x0005775a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc1e1,	// (0x0005775a) list_double2_large_graphic_pane_t1_cp2

0xc1f7,	// (0x00057770) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc1f7,	// (0x00057770) list_double2_large_graphic_pane_t2_cp2

0xc83e,	// (0x00057db7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc83e,	// (0x00057db7) list_double_large_graphic_pane_g1_cp2

0x32e1,	// (0x0004e85a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x32e1,	// (0x0004e85a) list_double_large_graphic_pane_g2_cp2

0xc32f,	// (0x000578a8) list_double_large_graphic_pane_g3_cp2

0x32f2,	// (0x0004e86b) list_double_large_graphic_pane_g4_cp

0x32fa,	// (0x0004e873) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x32fa,	// (0x0004e873) list_double_large_graphic_pane_t1_cp2

0x3311,	// (0x0004e88a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3311,	// (0x0004e88a) list_double_large_graphic_pane_t2_cp2

0xc221,	// (0x0005779a) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc221,	// (0x0005779a) list_double2_graphic_pane_g1_cp2

0xc22f,	// (0x000577a8) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc22f,	// (0x000577a8) list_double2_graphic_pane_g2_cp2

0xc240,	// (0x000577b9) list_double2_graphic_pane_g3_cp2

0xc24a,	// (0x000577c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc24a,	// (0x000577c3) list_double2_graphic_pane_t1_cp2

0xc260,	// (0x000577d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc260,	// (0x000577d9) list_double2_graphic_pane_t2_cp2

0xc272,	// (0x000577eb) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc272,	// (0x000577eb) list_single_number_heading_pane_g1_cp2

0xc27e,	// (0x000577f7) list_single_number_heading_pane_g2_cp2

0xc286,	// (0x000577ff) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc286,	// (0x000577ff) list_single_number_heading_pane_t1_cp2

0xc29c,	// (0x00057815) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc29c,	// (0x00057815) list_single_number_heading_pane_t2_cp2

0xc2ae,	// (0x00057827) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc2ae,	// (0x00057827) list_single_number_heading_pane_t3_cp2

0xc272,	// (0x000577eb) list_single_heading_pane_g1_cp2_ParamLimits

0xc272,	// (0x000577eb) list_single_heading_pane_g1_cp2

0xc27e,	// (0x000577f7) list_single_heading_pane_g2_cp2

0xc286,	// (0x000577ff) list_single_heading_pane_t1_cp2_ParamLimits

0xc286,	// (0x000577ff) list_single_heading_pane_t1_cp2

0x30da,	// (0x0004e653) list_single_heading_pane_t2_cp2_ParamLimits

0x30da,	// (0x0004e653) list_single_heading_pane_t2_cp2

0x3022,	// (0x0004e59b) list_double_graphic_pane_g1_cp2_ParamLimits

0x3022,	// (0x0004e59b) list_double_graphic_pane_g1_cp2

0x302e,	// (0x0004e5a7) list_double_graphic_pane_g2_cp2_ParamLimits

0x302e,	// (0x0004e5a7) list_double_graphic_pane_g2_cp2

0x303d,	// (0x0004e5b6) list_double_graphic_pane_g3_cp2

0x3045,	// (0x0004e5be) list_double_graphic_pane_t1_cp2_ParamLimits

0x3045,	// (0x0004e5be) list_double_graphic_pane_t1_cp2

0x305b,	// (0x0004e5d4) list_double_graphic_pane_t2_cp2_ParamLimits

0x305b,	// (0x0004e5d4) list_double_graphic_pane_t2_cp2

0xc323,	// (0x0005789c) list_double_number_pane_g1_cp2_ParamLimits

0xc323,	// (0x0005789c) list_double_number_pane_g1_cp2

0xc32f,	// (0x000578a8) list_double_number_pane_g2_cp2

0x2fe6,	// (0x0004e55f) list_double_number_pane_t1_cp2_ParamLimits

0x2fe6,	// (0x0004e55f) list_double_number_pane_t1_cp2

0x2ffa,	// (0x0004e573) list_double_number_pane_t2_cp2_ParamLimits

0x2ffa,	// (0x0004e573) list_double_number_pane_t2_cp2

0x3010,	// (0x0004e589) list_double_number_pane_t3_cp2_ParamLimits

0x3010,	// (0x0004e589) list_double_number_pane_t3_cp2

0x2ecf,	// (0x0004e448) list_single_graphic_pane_g1_cp2_ParamLimits

0x2ecf,	// (0x0004e448) list_single_graphic_pane_g1_cp2

0xbf96,	// (0x0005750f) list_single_graphic_pane_g2_cp2_ParamLimits

0xbf96,	// (0x0005750f) list_single_graphic_pane_g2_cp2

0xc367,	// (0x000578e0) list_single_graphic_pane_g3_cp2

0x2ea5,	// (0x0004e41e) list_single_graphic_pane_t1_cp2_ParamLimits

0x2ea5,	// (0x0004e41e) list_single_graphic_pane_t1_cp2

0xbf96,	// (0x0005750f) list_single_number_pane_g1_cp2_ParamLimits

0xbf96,	// (0x0005750f) list_single_number_pane_g1_cp2

0xc367,	// (0x000578e0) list_single_number_pane_g2_cp2

0x2ea5,	// (0x0004e41e) list_single_number_pane_t1_cp2_ParamLimits

0x2ea5,	// (0x0004e41e) list_single_number_pane_t1_cp2

0x2ebb,	// (0x0004e434) list_single_number_pane_t2_cp2_ParamLimits

0x2ebb,	// (0x0004e434) list_single_number_pane_t2_cp2

0xc1c8,	// (0x00057741) list_double2_pane_g1_cp2_ParamLimits

0xc1c8,	// (0x00057741) list_double2_pane_g1_cp2

0xc1d9,	// (0x00057752) list_double2_pane_g2_cp2

0xc2fb,	// (0x00057874) list_double2_pane_t1_cp2_ParamLimits

0xc2fb,	// (0x00057874) list_double2_pane_t1_cp2

0xc311,	// (0x0005788a) list_double2_pane_t2_cp2_ParamLimits

0xc311,	// (0x0005788a) list_double2_pane_t2_cp2

0xc323,	// (0x0005789c) list_double_pane_g1_cp2_ParamLimits

0xc323,	// (0x0005789c) list_double_pane_g1_cp2

0xc32f,	// (0x000578a8) list_double_pane_g2_cp2

0xc337,	// (0x000578b0) list_double_pane_t1_cp2_ParamLimits

0xc337,	// (0x000578b0) list_double_pane_t1_cp2

0xc34d,	// (0x000578c6) list_double_pane_t2_cp2_ParamLimits

0xc34d,	// (0x000578c6) list_double_pane_t2_cp2

0xa3fc,	// (0x00055975) list_single_pane_cp2_g3

0xbf96,	// (0x0005750f) list_single_pane_g1_cp2_ParamLimits

0xbf96,	// (0x0005750f) list_single_pane_g1_cp2

0xc367,	// (0x000578e0) list_single_pane_g2_cp2

0xc36f,	// (0x000578e8) list_single_pane_t1_cp2_ParamLimits

0xc36f,	// (0x000578e8) list_single_pane_t1_cp2

0xa404,	// (0x0005597d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa404,	// (0x0005597d) list_single_large_graphic_pane_g1_cp2

0xc387,	// (0x00057900) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc387,	// (0x00057900) list_single_large_graphic_pane_g2_cp2

0xc393,	// (0x0005790c) list_single_large_graphic_pane_g3_cp2

0xa410,	// (0x00055989) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa410,	// (0x00055989) list_single_large_graphic_pane_g4_cp1

0xc39b,	// (0x00057914) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc39b,	// (0x00057914) list_single_large_graphic_pane_t1_cp2

0x2e71,	// (0x0004e3ea) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2e71,	// (0x0004e3ea) list_single_graphic_heading_pane_g1_cp2

0x2e3e,	// (0x0004e3b7) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2e3e,	// (0x0004e3b7) list_single_graphic_heading_pane_g4_cp2

0xc367,	// (0x000578e0) list_single_graphic_heading_pane_g5_cp2

0x2e7d,	// (0x0004e3f6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2e7d,	// (0x0004e3f6) list_single_graphic_heading_pane_t1_cp2

0x2e93,	// (0x0004e40c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2e93,	// (0x0004e40c) list_single_graphic_heading_pane_t2_cp2

0x2e32,	// (0x0004e3ab) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2e32,	// (0x0004e3ab) list_single_2graphic_pane_g1_cp2

0x2e3e,	// (0x0004e3b7) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2e3e,	// (0x0004e3b7) list_single_2graphic_pane_g2_cp2

0xc367,	// (0x000578e0) list_single_2graphic_pane_g3_cp2

0x2e4f,	// (0x0004e3c8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2e4f,	// (0x0004e3c8) list_single_2graphic_pane_g4_cp2

0x2e5b,	// (0x0004e3d4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2e5b,	// (0x0004e3d4) list_single_2graphic_pane_t1_cp2

0x8ec7,	// (0x00054440) list_highlight_pane_g10_cp1

0x2a1a,	// (0x0004df93) list_highlight_pane_g1_cp1

0x2a22,	// (0x0004df9b) list_highlight_pane_g2_cp1

0x2a2a,	// (0x0004dfa3) list_highlight_pane_g3_cp1

0x2a32,	// (0x0004dfab) list_highlight_pane_g4_cp1

0x2a3a,	// (0x0004dfb3) list_highlight_pane_g5_cp1

0x2a42,	// (0x0004dfbb) list_highlight_pane_g6_cp1

0x2a4a,	// (0x0004dfc3) list_highlight_pane_g7_cp1

0x2a52,	// (0x0004dfcb) list_highlight_pane_g8_cp1

0x2a5a,	// (0x0004dfd3) list_highlight_pane_g9_cp1

0xc5d3,	// (0x00057b4c) form_field_slider_pane_t3

0xc5e1,	// (0x00057b5a) form_field_slider_pane_t4

0x295e,	// (0x0004ded7) slider_form_pane_ParamLimits

0x295e,	// (0x0004ded7) slider_form_pane

0x8fb7,	// (0x00054530) control_abbreviations

0x8fb7,	// (0x00054530) control_conventions

0x8fb7,	// (0x00054530) control_definitions

0x8fb7,	// (0x00054530) format_table_attribute

0xc815,	// (0x00057d8e) bg_popup_preview_window_pane_g9

0x8fb7,	// (0x00054530) format_table_data2

0x8fb7,	// (0x00054530) format_table_data3

0x8fb7,	// (0x00054530) format_table_data_example

0x0008,

0x8fb7,	// (0x00054530) intro_purpose

0xf8b4,	// (0x0005ae2d) bg_popup_preview_window_pane_g

0x8fb7,	// (0x00054530) texts_category

0x8fb7,	// (0x00054530) texts_graphics

0xc3b1,	// (0x0005792a) text_digital

0xc3c0,	// (0x00057939) text_primary

0xc3cf,	// (0x00057948) text_primary_small

0xc3de,	// (0x00057957) text_secondary

0xc3ed,	// (0x00057966) text_title

0xcb7c,	// (0x000580f5) bg_passive_tab_pane_g1_cp3_srt

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp3_srt

0xcb85,	// (0x000580fe) bg_passive_tab_pane_g3_cp3_srt

0x9208,	// (0x00054781) bg_active_tab_pane_cp3_srt_ParamLimits

0x9208,	// (0x00054781) bg_active_tab_pane_cp3_srt

0xcb8e,	// (0x00058107) tabs_4_active_pane_srt_g1

0xcb96,	// (0x0005810f) tabs_4_active_pane_srt_t1_ParamLimits

0xcb96,	// (0x0005810f) tabs_4_active_pane_srt_t1

0xcb7c,	// (0x000580f5) bg_active_tab_pane_g1_cp3_copy1

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp3_copy1

0xcb85,	// (0x000580fe) bg_active_tab_pane_g3_cp3_copy1

0x9252,	// (0x000547cb) tabs_2_long_active_pane_srt_ParamLimits

0x9252,	// (0x000547cb) tabs_2_long_active_pane_srt

0x9252,	// (0x000547cb) tabs_2_long_passive_pane_srt_ParamLimits

0x9252,	// (0x000547cb) tabs_2_long_passive_pane_srt

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp4_srt

0xc92d,	// (0x00057ea6) bg_passive_tab_pane_g1_cp4_srt

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp4_srt

0xc936,	// (0x00057eaf) bg_passive_tab_pane_g3_cp4_srt

0x9252,	// (0x000547cb) bg_active_tab_pane_cp4_srt_ParamLimits

0x9252,	// (0x000547cb) bg_active_tab_pane_cp4_srt

0xc93f,	// (0x00057eb8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc93f,	// (0x00057eb8) tabs_2_long_active_pane_srt_t1

0xc92d,	// (0x00057ea6) bg_active_tab_pane_g1_cp4_srt

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp4_srt

0xc936,	// (0x00057eaf) bg_active_tab_pane_g3_cp4_srt

0x9208,	// (0x00054781) tabs_3_long_active_pane_srt_ParamLimits

0x9208,	// (0x00054781) tabs_3_long_active_pane_srt

0x9208,	// (0x00054781) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9208,	// (0x00054781) tabs_3_long_passive_pane_cp_srt

0x9208,	// (0x00054781) tabs_3_long_passive_pane_srt_ParamLimits

0x9208,	// (0x00054781) tabs_3_long_passive_pane_srt

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp5_srt

0xa37a,	// (0x000558f3) bg_passive_tab_pane_g1_cp5_srt

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp5_srt

0xa383,	// (0x000558fc) bg_passive_tab_pane_g3_cp5_srt

0x9252,	// (0x000547cb) bg_active_tab_pane_cp5_srt_ParamLimits

0x9252,	// (0x000547cb) bg_active_tab_pane_cp5_srt

0xc917,	// (0x00057e90) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc917,	// (0x00057e90) tabs_3_long_active_pane_srt_t1

0xa37a,	// (0x000558f3) bg_active_tab_pane_g1_cp5_srt

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp5_srt

0xa383,	// (0x000558fc) bg_active_tab_pane_g3_cp5_srt

0x3525,	// (0x0004ea9e) navi_text_pane_srt_t1

0x351d,	// (0x0004ea96) navi_icon_pane_srt_g1

0xc4d8,	// (0x00057a51) midp_editing_number_pane_srt

0xc3fc,	// (0x00057975) midp_ticker_pane_srt

0xc4e0,	// (0x00057a59) midp_ticker_pane_srt_g1

0xc4e8,	// (0x00057a61) midp_ticker_pane_srt_g2

0x0001,

0xf743,	// (0x0005acbc) midp_ticker_pane_srt_g

0xc4f0,	// (0x00057a69) midp_ticker_pane_srt_t1

0x350e,	// (0x0004ea87) midp_editing_number_pane_t1_copy1

0xa42a,	// (0x000559a3) listscroll_midp_pane

0xa42a,	// (0x000559a3) midp_form_pane

0xa495,	// (0x00055a0e) midp_info_popup_window_ParamLimits

0xa495,	// (0x00055a0e) midp_info_popup_window

0x9cb6,	// (0x0005522f) bg_popup_sub_pane_cp50_ParamLimits

0x9cb6,	// (0x0005522f) bg_popup_sub_pane_cp50

0x264e,	// (0x0004dbc7) listscroll_midp_info_pane_ParamLimits

0x264e,	// (0x0004dbc7) listscroll_midp_info_pane

0x262e,	// (0x0004dba7) listscroll_form_midp_pane_ParamLimits

0x262e,	// (0x0004dba7) listscroll_form_midp_pane

0x263a,	// (0x0004dbb3) scroll_bar_cp050

0x262e,	// (0x0004dba7) list_midp_pane

0xcd2e,	// (0x000582a7) signal_pane_g2_cp

0x2548,	// (0x0004dac1) listscroll_midp_info_pane_t1_ParamLimits

0x2548,	// (0x0004dac1) listscroll_midp_info_pane_t1

0xb4bb,	// (0x00056a34) listscroll_midp_info_pane_t2_ParamLimits

0xb4bb,	// (0x00056a34) listscroll_midp_info_pane_t2

0xb4f9,	// (0x00056a72) listscroll_midp_info_pane_t3_ParamLimits

0xb4f9,	// (0x00056a72) listscroll_midp_info_pane_t3

0xb533,	// (0x00056aac) listscroll_midp_info_pane_t4_ParamLimits

0xb533,	// (0x00056aac) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x0005ad68) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x0005ad68) listscroll_midp_info_pane_t

0x9d19,	// (0x00055292) scroll_pane_cp21

0x24e8,	// (0x0004da61) form_midp_field_choice_group_pane

0xb47e,	// (0x000569f7) form_midp_field_text_pane

0x252e,	// (0x0004daa7) form_midp_field_time_pane

0x2536,	// (0x0004daaf) form_midp_gauge_slider_pane

0x253f,	// (0x0004dab8) form_midp_gauge_wait_pane

0x8fb7,	// (0x00054530) form_midp_image_pane

0x8ca0,	// (0x00054219) list_single_midp_pane_ParamLimits

0x8ca0,	// (0x00054219) list_single_midp_pane

0xb45c,	// (0x000569d5) form_midp_field_text_pane_t1

0x2267,	// (0x0004d7e0) input_focus_pane_cp050

0x24d7,	// (0x0004da50) list_midp_form_text_pane

0x246c,	// (0x0004d9e5) form_midp_field_choice_group_pane_t1

0x247a,	// (0x0004d9f3) input_focus_pane_cp051

0x248e,	// (0x0004da07) list_midp_choice_pane

0x8fb7,	// (0x00054530) status_idle_pane

0x2450,	// (0x0004d9c9) form_midp_field_time_pane_t1

0x8ec7,	// (0x00054440) wait_anim_pane_g2_copy1

0x245e,	// (0x0004d9d7) form_midp_field_time_pane_t2

0x0001,

0xc45c,	// (0x000579d5) aid_navinavi_width_2_pane

0xf7ea,	// (0x0005ad63) form_midp_field_time_pane_t

0x8fb7,	// (0x00054530) input_focus_pane_cp052

0x8fb7,	// (0x00054530) bg_input_focus_pane_cp040

0x2410,	// (0x0004d989) form_midp_gauge_slider_pane_t1

0x241e,	// (0x0004d997) form_midp_gauge_slider_pane_t2

0xb440,	// (0x000569b9) form_midp_gauge_slider_pane_t3

0xb44e,	// (0x000569c7) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0005ad5a) form_midp_gauge_slider_pane_t

0x2448,	// (0x0004d9c1) form_midp_slider_pane

0x9252,	// (0x000547cb) bg_input_focus_pane_cp041_ParamLimits

0x9252,	// (0x000547cb) bg_input_focus_pane_cp041

0x23dd,	// (0x0004d956) form_midp_gauge_wait_pane_t1_ParamLimits

0x23dd,	// (0x0004d956) form_midp_gauge_wait_pane_t1

0x23ef,	// (0x0004d968) form_midp_gauge_wait_pane_t2_ParamLimits

0x23ef,	// (0x0004d968) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x0005ad55) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x0005ad55) form_midp_gauge_wait_pane_t

0x2401,	// (0x0004d97a) form_midp_wait_pane_ParamLimits

0x2401,	// (0x0004d97a) form_midp_wait_pane

0xb40a,	// (0x00056983) form_midp_image_pane_g1

0xb413,	// (0x0005698c) form_midp_image_pane_t1

0xb422,	// (0x0005699b) form_midp_image_pane_t2

0xb431,	// (0x000569aa) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0005ad4e) form_midp_image_pane_t

0x239e,	// (0x0004d917) list_single_midp_pane_g1

0xea54,	// (0x00059fcd) list_single_midp_pane_t1

0xb3f5,	// (0x0005696e) list_midp_form_item_pane_ParamLimits

0xb3f5,	// (0x0005696e) list_midp_form_item_pane

0xc404,	// (0x0005797d) list_midp_form_item_pane_t1

0xc413,	// (0x0005798c) midp_ticker_pane_g1

0xc41f,	// (0x00057998) midp_ticker_pane_g2

0x0001,

0xf729,	// (0x0005aca2) midp_ticker_pane_g

0xc42b,	// (0x000579a4) midp_ticker_pane_t1

0x375b,	// (0x0004ecd4) midp_editing_number_pane_t1

0x3739,	// (0x0004ecb2) midp_editing_number_pane

0x3748,	// (0x0004ecc1) midp_ticker_pane

0x34fe,	// (0x0004ea77) ai_message_heading_pane

0x8fb7,	// (0x00054530) bg_popup_window_pane_cp14

0x3506,	// (0x0004ea7f) listscroll_ai_message_pane

0x3488,	// (0x0004ea01) ai_message_heading_pane_g1_ParamLimits

0x3488,	// (0x0004ea01) ai_message_heading_pane_g1

0xc8df,	// (0x00057e58) ai_message_heading_pane_g2_ParamLimits

0xc8df,	// (0x00057e58) ai_message_heading_pane_g2

0x34a0,	// (0x0004ea19) ai_message_heading_pane_g3_ParamLimits

0x34a0,	// (0x0004ea19) ai_message_heading_pane_g3

0x34ac,	// (0x0004ea25) ai_message_heading_pane_g4_ParamLimits

0x34ac,	// (0x0004ea25) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x0005ae8f) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x0005ae8f) ai_message_heading_pane_g

0xc8eb,	// (0x00057e64) ai_message_heading_pane_t1_ParamLimits

0xc8eb,	// (0x00057e64) ai_message_heading_pane_t1

0xc905,	// (0x00057e7e) ai_message_heading_pane_t2_ParamLimits

0xc905,	// (0x00057e7e) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x0005ae98) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x0005ae98) ai_message_heading_pane_t

0x34e4,	// (0x0004ea5d) bg_popup_heading_pane_cp1_ParamLimits

0x34e4,	// (0x0004ea5d) bg_popup_heading_pane_cp1

0x3476,	// (0x0004e9ef) list_ai_message_pane_ParamLimits

0x3476,	// (0x0004e9ef) list_ai_message_pane

0x9d19,	// (0x00055292) scroll_pane_cp10

0x3412,	// (0x0004e98b) list_ai_message_pane_g1

0x341a,	// (0x0004e993) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0005ae6c) list_ai_message_pane_g

0x3422,	// (0x0004e99b) list_ai_message_pane_t1_ParamLimits

0x3422,	// (0x0004e99b) list_ai_message_pane_t1

0x3437,	// (0x0004e9b0) list_ai_message_pane_t2_ParamLimits

0x3437,	// (0x0004e9b0) list_ai_message_pane_t2

0x344c,	// (0x0004e9c5) list_ai_message_pane_t3_ParamLimits

0x344c,	// (0x0004e9c5) list_ai_message_pane_t3

0x3461,	// (0x0004e9da) list_ai_message_pane_t4_ParamLimits

0x3461,	// (0x0004e9da) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x0005ae71) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x0005ae71) list_ai_message_pane_t

0xc8bb,	// (0x00057e34) cell_ai_soft_ind_pane_ParamLimits

0xc8bb,	// (0x00057e34) cell_ai_soft_ind_pane

0xc43d,	// (0x000579b6) cell_ai_soft_ind_pane_g1_ParamLimits

0xc43d,	// (0x000579b6) cell_ai_soft_ind_pane_g1

0x8fb7,	// (0x00054530) grid_highlight_cp1

0xc44a,	// (0x000579c3) text_secondary_cp56_ParamLimits

0xc44a,	// (0x000579c3) text_secondary_cp56

0x33d2,	// (0x0004e94b) example_general_pane_ParamLimits

0x33d2,	// (0x0004e94b) example_general_pane

0x33de,	// (0x0004e957) example_parent_pane_g1_ParamLimits

0x33de,	// (0x0004e957) example_parent_pane_g1

0x33ea,	// (0x0004e963) example_parent_pane_t1_ParamLimits

0x33ea,	// (0x0004e963) example_parent_pane_t1

0xab79,	// (0x000560f2) popup_preview_text_window_ParamLimits

0xab79,	// (0x000560f2) popup_preview_text_window

0xc35f,	// (0x000578d8) list_single_pane_cp2_g4

0x968a,	// (0x00054c03) bg_popup_preview_window_pane_ParamLimits

0x968a,	// (0x00054c03) bg_popup_preview_window_pane

0xc81d,	// (0x00057d96) popup_preview_text_window_t1_ParamLimits

0xc81d,	// (0x00057d96) popup_preview_text_window_t1

0x314a,	// (0x0004e6c3) popup_preview_text_window_t2_ParamLimits

0x314a,	// (0x0004e6c3) popup_preview_text_window_t2

0x3193,	// (0x0004e70c) popup_preview_text_window_t3_ParamLimits

0x3193,	// (0x0004e70c) popup_preview_text_window_t3

0x31d8,	// (0x0004e751) popup_preview_text_window_t4_ParamLimits

0x31d8,	// (0x0004e751) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x0005ae40) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x0005ae40) popup_preview_text_window_t

0x3256,	// (0x0004e7cf) scroll_pane_cp11

0x21db,	// (0x0004d754) bg_popup_preview_window_pane_g1

0xc7dd,	// (0x00057d56) bg_popup_preview_window_pane_g2

0xc7e5,	// (0x00057d5e) bg_popup_preview_window_pane_g3

0xc7ed,	// (0x00057d66) bg_popup_preview_window_pane_g4

0xc7f5,	// (0x00057d6e) bg_popup_preview_window_pane_g5

0xc7fd,	// (0x00057d76) bg_popup_preview_window_pane_g6

0xc805,	// (0x00057d7e) bg_popup_preview_window_pane_g7

0xc80d,	// (0x00057d86) bg_popup_preview_window_pane_g8

0xe6c9,	// (0x00059c42) aid_popup_width_pane

0xaaf5,	// (0x0005606e) popup_midp_note_alarm_window_ParamLimits

0xaaf5,	// (0x0005606e) popup_midp_note_alarm_window

0x9b8f,	// (0x00055108) data_form_pane_ParamLimits

0x8ad6,	// (0x0005404f) form_field_data_pane_g1

0x8ae0,	// (0x00054059) form_field_data_pane_t1_ParamLimits

0x9b9b,	// (0x00055114) input_focus_pane_ParamLimits

0xe8da,	// (0x00059e53) data_form_wide_pane_ParamLimits

0xe8eb,	// (0x00059e64) form_field_data_wide_pane_g1

0xe8f7,	// (0x00059e70) form_field_data_wide_pane_t1_ParamLimits

0x9931,	// (0x00054eaa) input_focus_pane_cp6_ParamLimits

0x9cc4,	// (0x0005523d) input_popup_find_pane_g1_ParamLimits

0x9cc4,	// (0x0005523d) input_popup_find_pane_g1

0xf1f1,	// (0x0005a76a) aid_navi_side_left_pane

0xf206,	// (0x0005a77f) aid_navi_side_right_pane

0x2b15,	// (0x0004e08e) bg_popup_window_pane_cp30_ParamLimits

0x2b15,	// (0x0004e08e) bg_popup_window_pane_cp30

0x2b8f,	// (0x0004e108) popup_midp_note_alarm_window_g1_ParamLimits

0x2b8f,	// (0x0004e108) popup_midp_note_alarm_window_g1

0x2bbf,	// (0x0004e138) popup_midp_note_alarm_window_t1_ParamLimits

0x2bbf,	// (0x0004e138) popup_midp_note_alarm_window_t1

0xc626,	// (0x00057b9f) popup_midp_note_alarm_window_t2_ParamLimits

0xc626,	// (0x00057b9f) popup_midp_note_alarm_window_t2

0xc6d4,	// (0x00057c4d) popup_midp_note_alarm_window_t3_ParamLimits

0xc6d4,	// (0x00057c4d) popup_midp_note_alarm_window_t3

0xc6fc,	// (0x00057c75) popup_midp_note_alarm_window_t4_ParamLimits

0xc6fc,	// (0x00057c75) popup_midp_note_alarm_window_t4

0x2d56,	// (0x0004e2cf) popup_midp_note_alarm_window_t5_ParamLimits

0x2d56,	// (0x0004e2cf) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0005addd) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0005addd) popup_midp_note_alarm_window_t

0x2e02,	// (0x0004e37b) wait_bar_pane_cp1_ParamLimits

0x2e02,	// (0x0004e37b) wait_bar_pane_cp1

0x8fb7,	// (0x00054530) wait_anim_pane_copy1

0x8fb7,	// (0x00054530) wait_border_pane_copy1

0x280b,	// (0x0004dd84) wait_border_pane_g1_copy1

0xe911,	// (0x00059e8a) form_field_popup_pane_g1

0x8afa,	// (0x00054073) form_field_popup_pane_t1_ParamLimits

0x9b9b,	// (0x00055114) input_focus_pane_cp7_ParamLimits

0x9bc9,	// (0x00055142) list_form_pane_ParamLimits

0xe919,	// (0x00059e92) form_field_popup_wide_pane_g1

0xe921,	// (0x00059e9a) form_field_popup_wide_pane_t1_ParamLimits

0x9b9b,	// (0x00055114) input_focus_pane_cp8_ParamLimits

0x9bd5,	// (0x0005514e) list_form_wide_pane_ParamLimits

0x3896,	// (0x0004ee0f) aid_size_cell_graphic_pane

0x8b79,	// (0x000540f2) data_form_pane_t1_ParamLimits

0x8cc8,	// (0x00054241) data_form_wide_pane_t1_ParamLimits

0xafbc,	// (0x00056535) bg_status_flat_pane

0x9144,	// (0x000546bd) title_pane_t1_ParamLimits

0x91d0,	// (0x00054749) title_pane_t2_ParamLimits

0x91f6,	// (0x0005476f) title_pane_t3_ParamLimits

0xf532,	// (0x0005aaab) title_pane_t_ParamLimits

0xa1d8,	// (0x00055751) level_1_signal_ParamLimits

0xa1e5,	// (0x0005575e) level_2_signal_ParamLimits

0xa1f2,	// (0x0005576b) level_3_signal_ParamLimits

0xa1ff,	// (0x00055778) level_4_signal_ParamLimits

0xa20c,	// (0x00055785) level_5_signal_ParamLimits

0xa219,	// (0x00055792) level_6_signal_ParamLimits

0xbfa2,	// (0x0005751b) level_7_signal_ParamLimits

0xa1d8,	// (0x00055751) level_1_battery_ParamLimits

0xa1e5,	// (0x0005575e) level_2_battery_ParamLimits

0xa1f2,	// (0x0005576b) level_3_battery_ParamLimits

0xa1ff,	// (0x00055778) level_4_battery_ParamLimits

0xa20c,	// (0x00055785) level_5_battery_ParamLimits

0xa219,	// (0x00055792) level_6_battery_ParamLimits

0xbfa2,	// (0x0005751b) level_7_battery_ParamLimits

0x2a1a,	// (0x0004df93) bg_status_flat_pane_g1

0x2a22,	// (0x0004df9b) bg_status_flat_pane_g2

0x2a2a,	// (0x0004dfa3) bg_status_flat_pane_g3

0x2a32,	// (0x0004dfab) bg_status_flat_pane_g4

0x2a3a,	// (0x0004dfb3) bg_status_flat_pane_g5

0x2a42,	// (0x0004dfbb) bg_status_flat_pane_g6

0x2a4a,	// (0x0004dfc3) bg_status_flat_pane_g7

0x921e,	// (0x00054797) tabs_3_active_pane_t1_ParamLimits

0x921e,	// (0x00054797) tabs_3_passive_pane_t1_ParamLimits

0x9238,	// (0x000547b1) tabs_4_active_pane_t1_ParamLimits

0x9238,	// (0x000547b1) tabs_4_1_passive_pane_t1_ParamLimits

0x9d5a,	// (0x000552d3) tabs_2_active_pane_t1_ParamLimits

0x9d5a,	// (0x000552d3) tabs_2_passive_pane_t1_ParamLimits

0x9252,	// (0x000547cb) bg_active_tab_pane_cp4_ParamLimits

0x9d6c,	// (0x000552e5) tabs_2_long_active_pane_t1_ParamLimits

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp4_ParamLimits

0x09c8,	// (0x0004bf41) list_single_midp_graphic_pane_t1_ParamLimits

0x9252,	// (0x000547cb) bg_active_tab_pane_cp5_ParamLimits

0x9d8b,	// (0x00055304) tabs_3_long_active_pane_t1_ParamLimits

0x9d7f,	// (0x000552f8) bg_passive_tab_pane_cp5_ParamLimits

0x09c8,	// (0x0004bf41) list_single_midp_graphic_pane_t1

0xafbc,	// (0x00056535) bg_status_flat_pane_ParamLimits

0x0814,	// (0x0004bd8d) indicator_pane_cp2_ParamLimits

0x0814,	// (0x0004bd8d) indicator_pane_cp2

0xb13a,	// (0x000566b3) navi_pane_srt_ParamLimits

0xb13a,	// (0x000566b3) navi_pane_srt

0x1fbd,	// (0x0004d536) popup_clock_digital_analogue_window_cp1

0x93f2,	// (0x0005496b) indicator_pane_t1

0xc3fc,	// (0x00057975) copy_highlight_pane

0xc3fc,	// (0x00057975) cursor_graphics_pane

0xc3fc,	// (0x00057975) graphic_within_text_pane

0xc3fc,	// (0x00057975) link_highlight_pane

0x3219,	// (0x0004e792) popup_preview_text_window_t5_ParamLimits

0x3219,	// (0x0004e792) popup_preview_text_window_t5

0xc464,	// (0x000579dd) cursor_digital_pane

0xc464,	// (0x000579dd) cursor_primary_pane

0xc475,	// (0x000579ee) cursor_primary_small_pane

0xc47d,	// (0x000579f6) cursor_secondary_pane

0xc485,	// (0x000579fe) cursor_title_pane

0xc464,	// (0x000579dd) link_highlight_digital_pane

0xc46c,	// (0x000579e5) link_highlight_primary_pane

0xc475,	// (0x000579ee) link_highlight_primary_small_pane

0xc47d,	// (0x000579f6) link_highlight_secondary_pane

0xc485,	// (0x000579fe) link_highlight_title_pane

0xc464,	// (0x000579dd) copy_highlight_digital_pane

0xc464,	// (0x000579dd) copy_highlight_primary_pane

0xc475,	// (0x000579ee) copy_highlight_primary_small_pane

0xc47d,	// (0x000579f6) copy_highlight_secondary_pane

0xc485,	// (0x000579fe) copy_highlight_title_pane

0xc47d,	// (0x000579f6) graphic_text_digital_pane

0x2ab8,	// (0x0004e031) graphic_text_primary_pane

0x2ac1,	// (0x0004e03a) graphic_text_primary_small_pane

0xc475,	// (0x000579ee) graphic_text_secondary_pane

0xc464,	// (0x000579dd) graphic_text_title_pane

0xa4e6,	// (0x00055a5f) cursor_primary_pane_g1

0x2aaa,	// (0x0004e023) cursor_text_primary_t1

0xc61c,	// (0x00057b95) cursor_primary_small_pane_g1

0x2a9c,	// (0x0004e015) cursor_text_primary_small_t1

0xc612,	// (0x00057b8b) cursor_primary_small_pane_g1_copy1

0x2a84,	// (0x0004dffd) cursor_text_primary_small_t1_copy1

0x2a62,	// (0x0004dfdb) cursor_text_title_t1

0xc608,	// (0x00057b81) cursor_title_pane_g1

0xa4e6,	// (0x00055a5f) cursor_digital_pane_g1

0xc48d,	// (0x00057a06) cursor_text_digital_t1

0xc49b,	// (0x00057a14) link_highlight_primary_pane_g1

0x2a0b,	// (0x0004df84) link_highlight_primary_pane_t1

0xc49b,	// (0x00057a14) link_highlight_primary_small_pane_g1

0xc4a3,	// (0x00057a1c) link_highlight_primary_small_pane_t1

0xc49b,	// (0x00057a14) link_highlight_secondary_pane_g1

0xc4b2,	// (0x00057a2b) link_highlight_secondary_pane_t1

0x2970,	// (0x0004dee9) link_highlight_title_pane_g1

0x2987,	// (0x0004df00) link_highlight_title_pane_t1

0x2970,	// (0x0004dee9) link_highlight_digital_pane_g1

0x2978,	// (0x0004def1) link_highlight_digital_pane_t1

0x282a,	// (0x0004dda3) copy_highlight_primary_pane_g1

0x2850,	// (0x0004ddc9) copy_highlight_primary_pane_t1

0x282a,	// (0x0004dda3) copy_highlight_primary_small_pane_g1

0x2841,	// (0x0004ddba) copy_highlight_primary_small_pane_t1

0xc4c1,	// (0x00057a3a) copy_highlight_secondary_pane_g1

0xc4c9,	// (0x00057a42) copy_highlight_secondary_pane_t1

0x282a,	// (0x0004dda3) copy_highlight_title_pane_g1

0x2832,	// (0x0004ddab) copy_highlight_title_pane_t1

0x282a,	// (0x0004dda3) copy_highlight_digital_pane_g1

0x3a64,	// (0x0004efdd) copy_highlight_digital_pane_t1

0x39b8,	// (0x0004ef31) graphic_text_primary_pane_g1

0x3a48,	// (0x0004efc1) graphic_text_primary_pane_t1

0x3a56,	// (0x0004efcf) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x0005af0c) graphic_text_primary_pane_t

0x3a24,	// (0x0004ef9d) graphic_text_primary_small_pane_g1

0x3a2c,	// (0x0004efa5) graphic_text_primary_small_pane_t1

0x3a3a,	// (0x0004efb3) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x0005af07) graphic_text_primary_small_pane_t

0x3a00,	// (0x0004ef79) graphic_text_secondary_pane_g1

0x3a08,	// (0x0004ef81) graphic_text_secondary_pane_t1

0x3a16,	// (0x0004ef8f) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x0005af02) graphic_text_secondary_pane_t

0x39dc,	// (0x0004ef55) graphic_text_title_pane_g1

0x39e4,	// (0x0004ef5d) graphic_text_title_pane_t1

0x39f2,	// (0x0004ef6b) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x0005aefd) graphic_text_title_pane_t

0x39b8,	// (0x0004ef31) graphic_text_digital_pane_g1

0x39c0,	// (0x0004ef39) graphic_text_digital_pane_t1

0x39ce,	// (0x0004ef47) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x0005aef8) graphic_text_digital_pane_t

0x9252,	// (0x000547cb) navi_icon_pane_srt_ParamLimits

0x9252,	// (0x000547cb) navi_icon_pane_srt

0x8fb7,	// (0x00054530) navi_midp_pane_srt

0x8fb7,	// (0x00054530) navi_navi_pane_srt

0x9252,	// (0x000547cb) navi_text_pane_srt_ParamLimits

0x9252,	// (0x000547cb) navi_text_pane_srt

0x3983,	// (0x0004eefc) navi_navi_icon_text_pane_srt

0x398b,	// (0x0004ef04) navi_navi_pane_srt_g1_ParamLimits

0x398b,	// (0x0004ef04) navi_navi_pane_srt_g1

0x399d,	// (0x0004ef16) navi_navi_pane_srt_g2_ParamLimits

0x399d,	// (0x0004ef16) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x0005aef3) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x0005aef3) navi_navi_pane_srt_g

0x39af,	// (0x0004ef28) navi_navi_tabs_pane_srt

0x3983,	// (0x0004eefc) navi_navi_text_pane_srt

0x3983,	// (0x0004eefc) navi_navi_volume_pane_srt

0x3974,	// (0x0004eeed) navi_navi_text_pane_srt_t1

0x0df3,	// (0x0004c36c) navi_navi_volume_pane_srt_g1

0x0dfb,	// (0x0004c374) volume_small_pane_srt_ParamLimits

0x0dfb,	// (0x0004c374) volume_small_pane_srt

0xf471,	// (0x0005a9ea) volume_small_pane_srt_g1_ParamLimits

0xf471,	// (0x0005a9ea) volume_small_pane_srt_g1

0xf481,	// (0x0005a9fa) volume_small_pane_srt_g2_ParamLimits

0xf481,	// (0x0005a9fa) volume_small_pane_srt_g2

0xf492,	// (0x0005aa0b) volume_small_pane_srt_g3_ParamLimits

0xf492,	// (0x0005aa0b) volume_small_pane_srt_g3

0xf4a3,	// (0x0005aa1c) volume_small_pane_srt_g4_ParamLimits

0xf4a3,	// (0x0005aa1c) volume_small_pane_srt_g4

0xf4b4,	// (0x0005aa2d) volume_small_pane_srt_g5_ParamLimits

0xf4b4,	// (0x0005aa2d) volume_small_pane_srt_g5

0xf4c5,	// (0x0005aa3e) volume_small_pane_srt_g6_ParamLimits

0xf4c5,	// (0x0005aa3e) volume_small_pane_srt_g6

0xf4d6,	// (0x0005aa4f) volume_small_pane_srt_g7_ParamLimits

0xf4d6,	// (0x0005aa4f) volume_small_pane_srt_g7

0xf4e7,	// (0x0005aa60) volume_small_pane_srt_g8_ParamLimits

0xf4e7,	// (0x0005aa60) volume_small_pane_srt_g8

0xf4f8,	// (0x0005aa71) volume_small_pane_srt_g9_ParamLimits

0xf4f8,	// (0x0005aa71) volume_small_pane_srt_g9

0xf509,	// (0x0005aa82) volume_small_pane_srt_g10_ParamLimits

0xf509,	// (0x0005aa82) volume_small_pane_srt_g10

0x0009,

0xf72e,	// (0x0005aca7) volume_small_pane_srt_g_ParamLimits

0xf72e,	// (0x0005aca7) volume_small_pane_srt_g

0x9733,	// (0x00054cac) query_popup_data_pane_cp2

0x395a,	// (0x0004eed3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x395a,	// (0x0004eed3) navi_navi_icon_text_pane_srt_t1

0x2ab8,	// (0x0004e031) navi_tabs_2_long_pane_srt

0x2ab8,	// (0x0004e031) navi_tabs_2_pane_srt

0x2ab8,	// (0x0004e031) navi_tabs_3_long_pane_srt

0x2ab8,	// (0x0004e031) navi_tabs_3_pane_srt

0x2ab8,	// (0x0004e031) navi_tabs_4_pane_srt

0xb759,	// (0x00056cd2) tabs_2_active_pane_srt_ParamLimits

0xb759,	// (0x00056cd2) tabs_2_active_pane_srt

0xb769,	// (0x00056ce2) tabs_2_passive_pane_srt_ParamLimits

0xb769,	// (0x00056ce2) tabs_2_passive_pane_srt

0x2267,	// (0x0004d7e0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2267,	// (0x0004d7e0) bg_passive_tab_pane_cp1_srt

0xcc2d,	// (0x000581a6) bg_passive_tab_pane_g1_cp1_srt

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp1_srt

0xcc36,	// (0x000581af) bg_passive_tab_pane_g3_cp1_srt

0x9208,	// (0x00054781) bg_active_tab_pane_cp1_srt_ParamLimits

0x9208,	// (0x00054781) bg_active_tab_pane_cp1_srt

0xcc3f,	// (0x000581b8) tabs_2_active_pane_srt_g1

0xcc47,	// (0x000581c0) tabs_2_active_pane_srt_t1_ParamLimits

0xcc47,	// (0x000581c0) tabs_2_active_pane_srt_t1

0xcc2d,	// (0x000581a6) bg_active_tab_pane_g1_cp1_srt

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp1_srt

0xcc36,	// (0x000581af) bg_active_tab_pane_g3_cp1_srt

0xb726,	// (0x00056c9f) tabs_3_active_pane_srt_ParamLimits

0xb726,	// (0x00056c9f) tabs_3_active_pane_srt

0xb737,	// (0x00056cb0) tabs_3_passive_pane_cp_srt_ParamLimits

0xb737,	// (0x00056cb0) tabs_3_passive_pane_cp_srt

0xb748,	// (0x00056cc1) tabs_3_passive_pane_srt_ParamLimits

0xb748,	// (0x00056cc1) tabs_3_passive_pane_srt

0x2267,	// (0x0004d7e0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2267,	// (0x0004d7e0) bg_passive_tab_pane_cp2_srt

0xa4f0,	// (0x00055a69) bg_passive_tab_pane_g1_cp2_srt

0xa32e,	// (0x000558a7) bg_passive_tab_pane_g2_cp2_srt

0xa4f9,	// (0x00055a72) bg_passive_tab_pane_g3_cp2_srt

0x9208,	// (0x00054781) bg_active_tab_pane_cp2_srt_ParamLimits

0x9208,	// (0x00054781) bg_active_tab_pane_cp2_srt

0xcc0f,	// (0x00058188) tabs_3_active_pane_srt_g1

0xcc17,	// (0x00058190) tabs_3_active_pane_srt_t1_ParamLimits

0xcc17,	// (0x00058190) tabs_3_active_pane_srt_t1

0xa4f0,	// (0x00055a69) bg_active_tab_pane_g1_cp2_srt

0xa32e,	// (0x000558a7) bg_active_tab_pane_g2_cp2_srt

0xa4f9,	// (0x00055a72) bg_active_tab_pane_g3_cp2_srt

0x0d58,	// (0x0004c2d1) tabs_4_active_pane_srt_ParamLimits

0x0d58,	// (0x0004c2d1) tabs_4_active_pane_srt

0x0d6a,	// (0x0004c2e3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0d6a,	// (0x0004c2e3) tabs_4_passive_pane_cp2_srt

0x00bf,	// (0x0004b638) aid_size_cell_toolbar

0x35b6,	// (0x0004eb2f) main_idle_act_pane_ParamLimits

0x0276,	// (0x0004b7ef) popup_large_graphic_colour_window_ParamLimits

0xae2b,	// (0x000563a4) popup_toolbar_window_ParamLimits

0xae2b,	// (0x000563a4) popup_toolbar_window

0x376a,	// (0x0004ece3) list_single_graphic_2heading_pane_ParamLimits

0x376a,	// (0x0004ece3) list_single_graphic_2heading_pane

0x9f38,	// (0x000554b1) aid_size_cell_apps_grid_lsc_pane

0x9f4a,	// (0x000554c3) aid_size_cell_apps_grid_prt_pane

0x9d7f,	// (0x000552f8) bg_wml_button_pane_cp1_ParamLimits

0x9d7f,	// (0x000552f8) bg_wml_button_pane_cp1

0xb45c,	// (0x000569d5) form_midp_field_text_pane_t1_ParamLimits

0x2267,	// (0x0004d7e0) input_focus_pane_cp050_ParamLimits

0x24d7,	// (0x0004da50) list_midp_form_text_pane_ParamLimits

0x247a,	// (0x0004d9f3) input_focus_pane_cp051_ParamLimits

0x248e,	// (0x0004da07) list_midp_choice_pane_ParamLimits

0xb3c1,	// (0x0005693a) list_single_2graphic_pane_cp3_ParamLimits

0xb3c1,	// (0x0005693a) list_single_2graphic_pane_cp3

0xb3d5,	// (0x0005694e) list_single_midp_graphic_pane_ParamLimits

0xb3d5,	// (0x0005694e) list_single_midp_graphic_pane

0xe958,	// (0x00059ed1) list_single_graphic_2heading_pane_g1_ParamLimits

0xe958,	// (0x00059ed1) list_single_graphic_2heading_pane_g1

0xe964,	// (0x00059edd) list_single_graphic_2heading_pane_g4_ParamLimits

0xe964,	// (0x00059edd) list_single_graphic_2heading_pane_g4

0xe970,	// (0x00059ee9) list_single_graphic_2heading_pane_g5_ParamLimits

0xe970,	// (0x00059ee9) list_single_graphic_2heading_pane_g5

0x0002,

0xf781,	// (0x0005acfa) list_single_graphic_2heading_pane_g_ParamLimits

0xf781,	// (0x0005acfa) list_single_graphic_2heading_pane_g

0xe97c,	// (0x00059ef5) list_single_graphic_2heading_pane_t1_ParamLimits

0xe97c,	// (0x00059ef5) list_single_graphic_2heading_pane_t1

0xe990,	// (0x00059f09) list_single_graphic_2heading_pane_t2_ParamLimits

0xe990,	// (0x00059f09) list_single_graphic_2heading_pane_t2

0xe9aa,	// (0x00059f23) list_single_graphic_2heading_pane_t3_ParamLimits

0xe9aa,	// (0x00059f23) list_single_graphic_2heading_pane_t3

0x0002,

0xf788,	// (0x0005ad01) list_single_graphic_2heading_pane_t_ParamLimits

0xf788,	// (0x0005ad01) list_single_graphic_2heading_pane_t

0x2119,	// (0x0004d692) bg_popup_sub_pane_cp2

0x2143,	// (0x0004d6bc) grid_toobar_pane

0x093f,	// (0x0004beb8) cell_toolbar_pane_ParamLimits

0x093f,	// (0x0004beb8) cell_toolbar_pane

0x217f,	// (0x0004d6f8) cell_toolbar_pane_g1_ParamLimits

0x217f,	// (0x0004d6f8) cell_toolbar_pane_g1

0xb2d9,	// (0x00056852) cell_toolbar_pane_g2_ParamLimits

0xb2d9,	// (0x00056852) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x0005ad08) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x0005ad08) cell_toolbar_pane_g

0x21b5,	// (0x0004d72e) grid_highlight_pane_cp2_ParamLimits

0x21b5,	// (0x0004d72e) grid_highlight_pane_cp2

0x21cf,	// (0x0004d748) toolbar_button_pane

0x21db,	// (0x0004d754) toolbar_button_pane_g1

0x21e3,	// (0x0004d75c) toolbar_button_pane_g2

0x21eb,	// (0x0004d764) toolbar_button_pane_g3

0x21f3,	// (0x0004d76c) toolbar_button_pane_g4

0x21fb,	// (0x0004d774) toolbar_button_pane_g5

0x2203,	// (0x0004d77c) toolbar_button_pane_g6

0x220b,	// (0x0004d784) toolbar_button_pane_g7

0x2213,	// (0x0004d78c) toolbar_button_pane_g8

0x221b,	// (0x0004d794) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x0005ad0d) toolbar_button_pane_g

0x0983,	// (0x0004befc) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0983,	// (0x0004befc) list_single_2graphic_pane_g1_cp3

0xb2ed,	// (0x00056866) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb2ed,	// (0x00056866) list_single_2graphic_pane_g2_cp3

0xc27e,	// (0x000577f7) list_single_2graphic_pane_g3_cp3

0x09a0,	// (0x0004bf19) list_single_2graphic_pane_g4_cp3_ParamLimits

0x09a0,	// (0x0004bf19) list_single_2graphic_pane_g4_cp3

0xb2fe,	// (0x00056877) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb2fe,	// (0x00056877) list_single_2graphic_pane_t1_cp3

0xc272,	// (0x000577eb) list_single_midp_graphic_pane_g2_ParamLimits

0xc272,	// (0x000577eb) list_single_midp_graphic_pane_g2

0xe948,	// (0x00059ec1) aid_zoom_text_primary

0x00c7,	// (0x0004b640) aid_zoom_text_secondary

0xa550,	// (0x00055ac9) status_small_pane_g7_ParamLimits

0xa550,	// (0x00055ac9) status_small_pane_g7

0xa573,	// (0x00055aec) status_small_pane_t1_ParamLimits

0x9114,	// (0x0005468d) title_pane_g2

0x0003,

0xf529,	// (0x0005aaa2) title_pane_g

0x97db,	// (0x00054d54) aid_size_cell_colour_1_pane_ParamLimits

0x97db,	// (0x00054d54) aid_size_cell_colour_1_pane

0x97ef,	// (0x00054d68) aid_size_cell_colour_2_pane_ParamLimits

0x97ef,	// (0x00054d68) aid_size_cell_colour_2_pane

0x9803,	// (0x00054d7c) aid_size_cell_colour_3_pane_ParamLimits

0x9803,	// (0x00054d7c) aid_size_cell_colour_3_pane

0x9817,	// (0x00054d90) aid_size_cell_colour_4_pane_ParamLimits

0x9817,	// (0x00054d90) aid_size_cell_colour_4_pane

0xf12e,	// (0x0005a6a7) title_pane_stacon_g1_ParamLimits

0xf12e,	// (0x0005a6a7) title_pane_stacon_g1

0x28a7,	// (0x0004de20) popup_note_wait_window_g3_ParamLimits

0x28a7,	// (0x0004de20) popup_note_wait_window_g3

0x291d,	// (0x0004de96) popup_note_wait_window_t5_ParamLimits

0x291d,	// (0x0004de96) popup_note_wait_window_t5

0x8fb7,	// (0x00054530) main_feb_china_hwr_fs_writing_pane

0xa7df,	// (0x00055d58) popup_feb_china_hwr_fs_window_ParamLimits

0xa7df,	// (0x00055d58) popup_feb_china_hwr_fs_window

0xb31a,	// (0x00056893) aid_size_cell_hwr_fs_ParamLimits

0xb31a,	// (0x00056893) aid_size_cell_hwr_fs

0x2267,	// (0x0004d7e0) bg_popup_sub_pane_cp3_ParamLimits

0x2267,	// (0x0004d7e0) bg_popup_sub_pane_cp3

0xb32f,	// (0x000568a8) grid_hwr_fs_pane_ParamLimits

0xb32f,	// (0x000568a8) grid_hwr_fs_pane

0x0a0b,	// (0x0004bf84) linegrid_hwr_fs_pane_ParamLimits

0x0a0b,	// (0x0004bf84) linegrid_hwr_fs_pane

0xb347,	// (0x000568c0) cell_hwr_fs_pane_ParamLimits

0xb347,	// (0x000568c0) cell_hwr_fs_pane

0x2273,	// (0x0004d7ec) linegrid_hwr_fs_pane_g1_ParamLimits

0x2273,	// (0x0004d7ec) linegrid_hwr_fs_pane_g1

0xb36d,	// (0x000568e6) linegrid_hwr_fs_pane_g2_ParamLimits

0xb36d,	// (0x000568e6) linegrid_hwr_fs_pane_g2

0x2291,	// (0x0004d80a) linegrid_hwr_fs_pane_g3_ParamLimits

0x2291,	// (0x0004d80a) linegrid_hwr_fs_pane_g3

0xb37f,	// (0x000568f8) linegrid_hwr_fs_pane_g4_ParamLimits

0xb37f,	// (0x000568f8) linegrid_hwr_fs_pane_g4

0x0a57,	// (0x0004bfd0) linegrid_hwr_fs_pane_g5_ParamLimits

0x0a57,	// (0x0004bfd0) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x0005ad33) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x0005ad33) linegrid_hwr_fs_pane_g

0x229d,	// (0x0004d816) cell_hwr_fs_pane_g1_ParamLimits

0x229d,	// (0x0004d816) cell_hwr_fs_pane_g1

0x2053,	// (0x0004d5cc) cell_hwr_fs_pane_g2_ParamLimits

0x2053,	// (0x0004d5cc) cell_hwr_fs_pane_g2

0xb399,	// (0x00056912) cell_hwr_fs_pane_g3_ParamLimits

0xb399,	// (0x00056912) cell_hwr_fs_pane_g3

0xb3a6,	// (0x0005691f) cell_hwr_fs_pane_g4_ParamLimits

0xb3a6,	// (0x0005691f) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x0005ad3e) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x0005ad3e) cell_hwr_fs_pane_g

0xb3b3,	// (0x0005692c) cell_hwr_fs_pane_t1

0x8fb7,	// (0x00054530) grid_highlight_pane_cp6

0x8fb7,	// (0x00054530) main_idle_act2_pane

0x9d00,	// (0x00055279) aid_inside_area_popup_secondary

0xc73b,	// (0x00057cb4) aid_inside_area_window_primary_ParamLimits

0xc73b,	// (0x00057cb4) aid_inside_area_window_primary

0xcc65,	// (0x000581de) ai2_news_ticker_pane

0x3a7b,	// (0x0004eff4) aid_size_cell_ai1_link_ParamLimits

0x3a7b,	// (0x0004eff4) aid_size_cell_ai1_link

0xcc6d,	// (0x000581e6) popup_ai2_data_window_ParamLimits

0xcc6d,	// (0x000581e6) popup_ai2_data_window

0x3aab,	// (0x0004f024) popup_ai2_link_window_ParamLimits

0x3aab,	// (0x0004f024) popup_ai2_link_window

0x2267,	// (0x0004d7e0) bg_popup_sub_pane_cp4_ParamLimits

0x2267,	// (0x0004d7e0) bg_popup_sub_pane_cp4

0x3abf,	// (0x0004f038) grid_ai2_link_pane_ParamLimits

0x3abf,	// (0x0004f038) grid_ai2_link_pane

0x3ad6,	// (0x0004f04f) popup_ai2_link_window_g1_ParamLimits

0x3ad6,	// (0x0004f04f) popup_ai2_link_window_g1

0x3ae2,	// (0x0004f05b) popup_ai2_link_window_g2_ParamLimits

0x3ae2,	// (0x0004f05b) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x0005af11) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x0005af11) popup_ai2_link_window_g

0x3af1,	// (0x0004f06a) ai2_mp_button_pane

0x3af9,	// (0x0004f072) ai2_mp_volume_pane

0x247a,	// (0x0004d9f3) bg_popup_sub_pane_cp5_ParamLimits

0x247a,	// (0x0004d9f3) bg_popup_sub_pane_cp5

0x3b01,	// (0x0004f07a) heading_ai2_gene_pane_ParamLimits

0x3b01,	// (0x0004f07a) heading_ai2_gene_pane

0x3b0d,	// (0x0004f086) list_ai2_gene_pane_ParamLimits

0x3b0d,	// (0x0004f086) list_ai2_gene_pane

0x3b55,	// (0x0004f0ce) cell_ai2_link_pane_ParamLimits

0x3b55,	// (0x0004f0ce) cell_ai2_link_pane

0x3b6b,	// (0x0004f0e4) cell_ai2_link_pane_g1

0x8fb7,	// (0x00054530) grid_highlight_pane_cp7

0x0e10,	// (0x0004c389) ai2_mp_volume_pane_g1

0x3c3b,	// (0x0004f1b4) ai2_mp_volume_pane_g2

0x3bb0,	// (0x0004f129) list_ai2_gene_pane_t1

0x3c43,	// (0x0004f1bc) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x0005af2a) ai2_mp_volume_pane_g

0xb779,	// (0x00056cf2) volume_small_pane_cp3

0x3c4b,	// (0x0004f1c4) aid_size_cell_ai2_button

0x3c53,	// (0x0004f1cc) grid_ai2_button_pane

0x3c5c,	// (0x0004f1d5) cell_ai2_button_pane_ParamLimits

0x3c5c,	// (0x0004f1d5) cell_ai2_button_pane

0x8ec7,	// (0x00054440) cell_ai2_button_pane_g1

0x8fb7,	// (0x00054530) grid_highlight_pane_cp8

0x3bfb,	// (0x0004f174) ai2_gene_pane_t1_ParamLimits

0x3bfb,	// (0x0004f174) ai2_gene_pane_t1

0xa741,	// (0x00055cba) aid_height_parent_landscape

0xc989,	// (0x00057f02) aid_height_set_list

0x35b6,	// (0x0004eb2f) aid_size_parent

0x3896,	// (0x0004ee0f) aid_size_cell_graphic_pane_ParamLimits

0x3b1d,	// (0x0004f096) popup_ai2_data_window_g1_ParamLimits

0x3b1d,	// (0x0004f096) popup_ai2_data_window_g1

0x3b29,	// (0x0004f0a2) ai2_news_ticker_pane_g1

0x3b31,	// (0x0004f0aa) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x0005af16) ai2_news_ticker_pane_g

0x3b39,	// (0x0004f0b2) ai2_news_ticker_pane_t1

0x3b47,	// (0x0004f0c0) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x0005af1b) ai2_news_ticker_pane_t

0x3b74,	// (0x0004f0ed) heading_ai2_gene_pane_g1

0x3b7c,	// (0x0004f0f5) heading_ai2_gene_pane_t1_ParamLimits

0x3b7c,	// (0x0004f0f5) heading_ai2_gene_pane_t1

0x3b91,	// (0x0004f10a) list_highlight_pane_cp6

0x3b99,	// (0x0004f112) ai2_gene_pane_ParamLimits

0x3b99,	// (0x0004f112) ai2_gene_pane

0x3bbe,	// (0x0004f137) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x0005af20) list_ai2_gene_pane_t

0x3bcc,	// (0x0004f145) list_highlight_pane_cp8_ParamLimits

0x3bcc,	// (0x0004f145) list_highlight_pane_cp8

0x3bdd,	// (0x0004f156) ai2_gene_pane_g1_ParamLimits

0x3bdd,	// (0x0004f156) ai2_gene_pane_g1

0x3bef,	// (0x0004f168) ai2_gene_pane_g2_ParamLimits

0x3bef,	// (0x0004f168) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x0005af25) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x0005af25) ai2_gene_pane_g

0x9ae9,	// (0x00055062) scroll_pane_cp12

0xa6fe,	// (0x00055c77) control_pane_t3_ParamLimits

0xa6fe,	// (0x00055c77) control_pane_t3

0xa564,	// (0x00055add) status_small_pane_g8_ParamLimits

0xa564,	// (0x00055add) status_small_pane_g8

0xa8a2,	// (0x00055e1b) popup_find_window_ParamLimits

0xab2f,	// (0x000560a8) popup_note_image_window_ParamLimits

0xe865,	// (0x00059dde) list_double2_graphic_pane_vc_g1_ParamLimits

0xe865,	// (0x00059dde) list_double2_graphic_pane_vc_g1

0xbf96,	// (0x0005750f) list_double2_graphic_pane_vc_g2_ParamLimits

0xbf96,	// (0x0005750f) list_double2_graphic_pane_vc_g2

0x096f,	// (0x0004bee8) list_double2_graphic_pane_vc_g3_ParamLimits

0x096f,	// (0x0004bee8) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0005ab15) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0005ab15) list_double2_graphic_pane_vc_g

0xe871,	// (0x00059dea) list_double2_graphic_pane_vc_t1_ParamLimits

0xe871,	// (0x00059dea) list_double2_graphic_pane_vc_t1

0xbf96,	// (0x0005750f) list_single_heading_pane_vc_g1_ParamLimits

0xbf96,	// (0x0005750f) list_single_heading_pane_vc_g1

0x096f,	// (0x0004bee8) list_single_heading_pane_vc_g2_ParamLimits

0x096f,	// (0x0004bee8) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_single_heading_pane_vc_g

0xe9c2,	// (0x00059f3b) list_single_heading_pane_vc_t1_ParamLimits

0xe9c2,	// (0x00059f3b) list_single_heading_pane_vc_t1

0xe9d8,	// (0x00059f51) list_single_heading_pane_vc_t2_ParamLimits

0xe9d8,	// (0x00059f51) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x0005ad22) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x0005ad22) list_single_heading_pane_vc_t

0x2223,	// (0x0004d79c) list_setting_number_pane_vc_g1_ParamLimits

0x2223,	// (0x0004d79c) list_setting_number_pane_vc_g1

0x222f,	// (0x0004d7a8) list_setting_number_pane_vc_g2_ParamLimits

0x222f,	// (0x0004d7a8) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005ad27) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005ad27) list_setting_number_pane_vc_g

0xe9ea,	// (0x00059f63) list_setting_number_pane_vc_t1_ParamLimits

0xe9ea,	// (0x00059f63) list_setting_number_pane_vc_t1

0xe9fe,	// (0x00059f77) list_setting_number_pane_vc_t2_ParamLimits

0xe9fe,	// (0x00059f77) list_setting_number_pane_vc_t2

0xea1a,	// (0x00059f93) list_setting_number_pane_vc_t3_ParamLimits

0xea1a,	// (0x00059f93) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x0005ad2c) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x0005ad2c) list_setting_number_pane_vc_t

0xea44,	// (0x00059fbd) set_value_pane_vc_ParamLimits

0xea44,	// (0x00059fbd) set_value_pane_vc

0x376a,	// (0x0004ece3) list_double2_graphic_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double2_graphic_pane_vc

0x0cc9,	// (0x0004c242) list_double2_large_graphic_pane_vc_ParamLimits

0x0cc9,	// (0x0004c242) list_double2_large_graphic_pane_vc

0x376a,	// (0x0004ece3) list_double2_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double2_pane_vc

0x376a,	// (0x0004ece3) list_double_graphic_heading_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double_graphic_heading_pane_vc

0x376a,	// (0x0004ece3) list_double_graphic_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double_graphic_pane_vc

0x376a,	// (0x0004ece3) list_double_heading_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double_heading_pane_vc

0x0cdb,	// (0x0004c254) list_double_large_graphic_pane_vc_ParamLimits

0x0cdb,	// (0x0004c254) list_double_large_graphic_pane_vc

0x376a,	// (0x0004ece3) list_double_number_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double_number_pane_vc

0x376a,	// (0x0004ece3) list_double_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double_pane_vc

0x376a,	// (0x0004ece3) list_double_time_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_double_time_pane_vc

0x376a,	// (0x0004ece3) list_setting_number_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_setting_number_pane_vc

0x376a,	// (0x0004ece3) list_setting_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_setting_pane_vc

0x376a,	// (0x0004ece3) list_single_graphic_heading_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_single_graphic_heading_pane_vc

0x376a,	// (0x0004ece3) list_single_heading_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_single_heading_pane_vc

0x376a,	// (0x0004ece3) list_single_number_heading_pane_vc_ParamLimits

0x376a,	// (0x0004ece3) list_single_number_heading_pane_vc

0xea63,	// (0x00059fdc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea63,	// (0x00059fdc) list_double_graphic_heading_pane_vc_g1

0xbf96,	// (0x0005750f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbf96,	// (0x0005750f) list_double_graphic_heading_pane_vc_g2

0x096f,	// (0x0004bee8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x096f,	// (0x0004bee8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x0005af31) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x0005af31) list_double_graphic_heading_pane_vc_g

0xea6f,	// (0x00059fe8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xea6f,	// (0x00059fe8) list_double_graphic_heading_pane_vc_t1

0xea83,	// (0x00059ffc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xea83,	// (0x00059ffc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x0005af38) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x0005af38) list_double_graphic_heading_pane_vc_t

0x2223,	// (0x0004d79c) list_setting_pane_vc_g1_ParamLimits

0x2223,	// (0x0004d79c) list_setting_pane_vc_g1

0x222f,	// (0x0004d7a8) list_setting_pane_vc_g2_ParamLimits

0x222f,	// (0x0004d7a8) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x0005ad27) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x0005ad27) list_setting_pane_vc_g

0xea9b,	// (0x0005a014) list_setting_pane_vc_t1_ParamLimits

0xea9b,	// (0x0005a014) list_setting_pane_vc_t1

0xeab7,	// (0x0005a030) list_setting_pane_vc_t2_ParamLimits

0xeab7,	// (0x0005a030) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0005af7b) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0005af7b) list_setting_pane_vc_t

0xea44,	// (0x00059fbd) set_value_pane_cp_vc_ParamLimits

0xea44,	// (0x00059fbd) set_value_pane_cp_vc

0xbf96,	// (0x0005750f) list_single_number_heading_pane_vc_g1_ParamLimits

0xbf96,	// (0x0005750f) list_single_number_heading_pane_vc_g1

0x096f,	// (0x0004bee8) list_single_number_heading_pane_vc_g2_ParamLimits

0x096f,	// (0x0004bee8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_single_number_heading_pane_vc_g

0xead1,	// (0x0005a04a) list_single_number_heading_pane_vc_t1_ParamLimits

0xead1,	// (0x0005a04a) list_single_number_heading_pane_vc_t1

0xeae7,	// (0x0005a060) list_single_number_heading_pane_vc_t2_ParamLimits

0xeae7,	// (0x0005a060) list_single_number_heading_pane_vc_t2

0xeaf9,	// (0x0005a072) list_single_number_heading_pane_vc_t3_ParamLimits

0xeaf9,	// (0x0005a072) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x0005af80) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x0005af80) list_single_number_heading_pane_vc_t

0xeb0b,	// (0x0005a084) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeb0b,	// (0x0005a084) list_single_graphic_heading_pane_vc_g1

0xbf96,	// (0x0005750f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbf96,	// (0x0005750f) list_single_graphic_heading_pane_vc_g4

0x096f,	// (0x0004bee8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x096f,	// (0x0004bee8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x0005af87) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x0005af87) list_single_graphic_heading_pane_vc_g

0xe9c2,	// (0x00059f3b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe9c2,	// (0x00059f3b) list_single_graphic_heading_pane_vc_t1

0xeb17,	// (0x0005a090) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xeb17,	// (0x0005a090) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0005af8e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0005af8e) list_single_graphic_heading_pane_vc_t

0xbf96,	// (0x0005750f) list_double2_pane_vc_g1_ParamLimits

0xbf96,	// (0x0005750f) list_double2_pane_vc_g1

0x096f,	// (0x0004bee8) list_double2_pane_vc_g2_ParamLimits

0x096f,	// (0x0004bee8) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_double2_pane_vc_g

0xeb29,	// (0x0005a0a2) list_double2_pane_vc_t1_ParamLimits

0xeb29,	// (0x0005a0a2) list_double2_pane_vc_t1

0x0e72,	// (0x0004c3eb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0e72,	// (0x0004c3eb) list_double2_large_graphic_pane_vc_g1

0xf0ba,	// (0x0005a633) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf0ba,	// (0x0005a633) list_double2_large_graphic_pane_vc_g2

0xf0c6,	// (0x0005a63f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf0c6,	// (0x0005a63f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0005ab3e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0005ab3e) list_double2_large_graphic_pane_vc_g

0xe887,	// (0x00059e00) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe887,	// (0x00059e00) list_double2_large_graphic_pane_vc_t1

0x0e7e,	// (0x0004c3f7) list_double_time_pane_vc_g1_ParamLimits

0x0e7e,	// (0x0004c3f7) list_double_time_pane_vc_g1

0x0e8a,	// (0x0004c403) list_double_time_pane_vc_g2_ParamLimits

0x0e8a,	// (0x0004c403) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x0005af93) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x0005af93) list_double_time_pane_vc_g

0xeb41,	// (0x0005a0ba) list_double_time_pane_vc_t1_ParamLimits

0xeb41,	// (0x0005a0ba) list_double_time_pane_vc_t1

0xeb65,	// (0x0005a0de) list_double_time_pane_vc_t2_ParamLimits

0xeb65,	// (0x0005a0de) list_double_time_pane_vc_t2

0xebb4,	// (0x0005a12d) list_double_time_pane_vc_t3_ParamLimits

0xebb4,	// (0x0005a12d) list_double_time_pane_vc_t3

0xebc6,	// (0x0005a13f) list_double_time_pane_vc_t4_ParamLimits

0xebc6,	// (0x0005a13f) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x0005af98) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x0005af98) list_double_time_pane_vc_t

0xbf96,	// (0x0005750f) list_double_pane_vc_g1_ParamLimits

0xbf96,	// (0x0005750f) list_double_pane_vc_g1

0x096f,	// (0x0004bee8) list_double_pane_vc_g2_ParamLimits

0x096f,	// (0x0004bee8) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_double_pane_vc_g

0xebda,	// (0x0005a153) list_double_pane_vc_t1_ParamLimits

0xebda,	// (0x0005a153) list_double_pane_vc_t1

0xebee,	// (0x0005a167) list_double_pane_vc_t2_ParamLimits

0xebee,	// (0x0005a167) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x0005afa1) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x0005afa1) list_double_pane_vc_t

0xbf96,	// (0x0005750f) list_double_number_pane_vc_g1_ParamLimits

0xbf96,	// (0x0005750f) list_double_number_pane_vc_g1

0x096f,	// (0x0004bee8) list_double_number_pane_vc_g2_ParamLimits

0x096f,	// (0x0004bee8) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_double_number_pane_vc_g

0xec06,	// (0x0005a17f) list_double_number_pane_vc_t1_ParamLimits

0xec06,	// (0x0005a17f) list_double_number_pane_vc_t1

0xebda,	// (0x0005a153) list_double_number_pane_vc_t2_ParamLimits

0xebda,	// (0x0005a153) list_double_number_pane_vc_t2

0xec18,	// (0x0005a191) list_double_number_pane_vc_t3_ParamLimits

0xec18,	// (0x0005a191) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x0005afa6) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005afa6) list_double_number_pane_vc_t

0x0e96,	// (0x0004c40f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0e96,	// (0x0004c40f) list_double_large_graphic_pane_vc_g1

0x0eb2,	// (0x0004c42b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0eb2,	// (0x0004c42b) list_double_large_graphic_pane_vc_g2

0x0ec6,	// (0x0004c43f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0ec6,	// (0x0004c43f) list_double_large_graphic_pane_vc_g3

0xec30,	// (0x0005a1a9) list_double_large_graphic_pane_vc_g4_ParamLimits

0xec30,	// (0x0005a1a9) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0005afad) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0005afad) list_double_large_graphic_pane_vc_g

0xec3f,	// (0x0005a1b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0xec3f,	// (0x0005a1b8) list_double_large_graphic_pane_vc_t1

0xec5b,	// (0x0005a1d4) list_double_large_graphic_pane_vc_t2_ParamLimits

0xec5b,	// (0x0005a1d4) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005afb6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005afb6) list_double_large_graphic_pane_vc_t

0xbf96,	// (0x0005750f) list_double_heading_pane_vc_g1_ParamLimits

0xbf96,	// (0x0005750f) list_double_heading_pane_vc_g1

0x096f,	// (0x0004bee8) list_double_heading_pane_vc_g2_ParamLimits

0x096f,	// (0x0004bee8) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0005ab26) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0005ab26) list_double_heading_pane_vc_g

0xec7d,	// (0x0005a1f6) list_double_heading_pane_vc_t1_ParamLimits

0xec7d,	// (0x0005a1f6) list_double_heading_pane_vc_t1

0xec91,	// (0x0005a20a) list_double_heading_pane_vc_t2_ParamLimits

0xec91,	// (0x0005a20a) list_double_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0005afbb) list_double_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005afbb) list_double_heading_pane_vc_t

0xeca9,	// (0x0005a222) list_double_graphic_pane_vc_g1_ParamLimits

0xeca9,	// (0x0005a222) list_double_graphic_pane_vc_g1

0x0ed5,	// (0x0004c44e) list_double_graphic_pane_vc_g2_ParamLimits

0x0ed5,	// (0x0004c44e) list_double_graphic_pane_vc_g2

0xbf96,	// (0x0005750f) list_double_graphic_pane_vc_g3_ParamLimits

0xbf96,	// (0x0005750f) list_double_graphic_pane_vc_g3

0x0003,

0xfa47,	// (0x0005afc0) list_double_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0005afc0) list_double_graphic_pane_vc_g

0xecbc,	// (0x0005a235) list_double_graphic_pane_vc_t1_ParamLimits

0xecbc,	// (0x0005a235) list_double_graphic_pane_vc_t1

0xecdb,	// (0x0005a254) list_double_graphic_pane_vc_t2_ParamLimits

0xecdb,	// (0x0005a254) list_double_graphic_pane_vc_t2

0x0001,

0xfa50,	// (0x0005afc9) list_double_graphic_pane_vc_t_ParamLimits

0xfa50,	// (0x0005afc9) list_double_graphic_pane_vc_t

0xe6d5,	// (0x00059c4e) aid_size_cell_fastswap

0x8ed1,	// (0x0005444a) aid_size_cell_touch_ParamLimits

0x8ed1,	// (0x0005444a) aid_size_cell_touch

0xe82c,	// (0x00059da5) popup_fast_swap_wide_window_ParamLimits

0xe82c,	// (0x00059da5) popup_fast_swap_wide_window

0x90ab,	// (0x00054624) touch_pane_ParamLimits

0x90ab,	// (0x00054624) touch_pane

0x9b87,	// (0x00055100) button_value_adjust_pane_cp2

0xe8b7,	// (0x00059e30) button_value_adjust_pane_cp4

0xe8bf,	// (0x00059e38) form_field_data_pane_cp2

0x8a82,	// (0x00053ffb) form_field_data_wide_pane_cp2

0xa045,	// (0x000555be) bg_scroll_pane_ParamLimits

0xa064,	// (0x000555dd) scroll_handle_pane_ParamLimits

0xf287,	// (0x0005a800) scroll_sc2_down_pane_ParamLimits

0xf287,	// (0x0005a800) scroll_sc2_down_pane

0xa08a,	// (0x00055603) scroll_sc2_up_pane_ParamLimits

0xa08a,	// (0x00055603) scroll_sc2_up_pane

0xcdb6,	// (0x0005832f) grid_wheel_folder_pane_g1_ParamLimits

0xcdb6,	// (0x0005832f) grid_wheel_folder_pane_g1

0xf409,	// (0x0005a982) clock_nsta_pane_cp2_ParamLimits

0xf409,	// (0x0005a982) clock_nsta_pane_cp2

0xa42a,	// (0x000559a3) listscroll_midp_pane_ParamLimits

0xa436,	// (0x000559af) midp_canvas_pane

0xc540,	// (0x00057ab9) nsta_clock_indic_pane

0xc568,	// (0x00057ae1) listscroll_form_pane_vc

0xc570,	// (0x00057ae9) listscroll_set_pane_vc_ParamLimits

0xc570,	// (0x00057ae9) listscroll_set_pane_vc

0xafe4,	// (0x0005655d) clock_nsta_pane

0xb00e,	// (0x00056587) indicator_nsta_pane

0x2119,	// (0x0004d692) bg_popup_sub_pane_cp2_ParamLimits

0x212d,	// (0x0004d6a6) find_pane_cp2_ParamLimits

0x212d,	// (0x0004d6a6) find_pane_cp2

0x2143,	// (0x0004d6bc) grid_toobar_pane_ParamLimits

0x223b,	// (0x0004d7b4) list_form_gen_pane_vc_ParamLimits

0x223b,	// (0x0004d7b4) list_form_gen_pane_vc

0x2251,	// (0x0004d7ca) scroll_pane_cp8_vc_ParamLimits

0x2251,	// (0x0004d7ca) scroll_pane_cp8_vc

0x22cd,	// (0x0004d846) data_form_wide_pane_vc_ParamLimits

0x22cd,	// (0x0004d846) data_form_wide_pane_vc

0x22d9,	// (0x0004d852) form_field_data_wide_pane_vc_g1

0x22e1,	// (0x0004d85a) form_field_data_wide_pane_vc_t1_ParamLimits

0x22e1,	// (0x0004d85a) form_field_data_wide_pane_vc_t1

0x9b9b,	// (0x00055114) input_focus_pane_cp6_vc_ParamLimits

0x9b9b,	// (0x00055114) input_focus_pane_cp6_vc

0x262e,	// (0x0004dba7) list_midp_pane_ParamLimits

0x3900,	// (0x0004ee79) scroll_pane_cp16_ParamLimits

0x3900,	// (0x0004ee79) scroll_pane_cp16

0x2684,	// (0x0004dbfd) button_value_adjust_pane_ParamLimits

0x2684,	// (0x0004dbfd) button_value_adjust_pane

0xc99a,	// (0x00057f13) button_value_adjust_pane_cp6_ParamLimits

0xc99a,	// (0x00057f13) button_value_adjust_pane_cp6

0xcab4,	// (0x0005802d) settings_code_pane_cp_ParamLimits

0xcab4,	// (0x0005802d) settings_code_pane_cp

0x8ec7,	// (0x00054440) cell_touch_pane_g1

0x8ec7,	// (0x00054440) cell_touch_pane_g2

0x0001,

0xf6d4,	// (0x0005ac4d) cell_touch_pane_g

0xcc83,	// (0x000581fc) cell_touch_pane_cp_ParamLimits

0xcc83,	// (0x000581fc) cell_touch_pane_cp

0xcc9f,	// (0x00058218) cell_touch_pane_ParamLimits

0xcc9f,	// (0x00058218) cell_touch_pane

0x8ec7,	// (0x00054440) scroll_sc2_down_pane_g1

0x8ec7,	// (0x00054440) scroll_sc2_up_pane_g1

0x8fb7,	// (0x00054530) bg_set_opt_pane_cp4_vc

0x3c90,	// (0x0004f209) list_set_graphic_pane_vc_g1_ParamLimits

0x3c90,	// (0x0004f209) list_set_graphic_pane_vc_g1

0x3c9c,	// (0x0004f215) list_set_graphic_pane_vc_g2_ParamLimits

0x3c9c,	// (0x0004f215) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x0005af3d) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x0005af3d) list_set_graphic_pane_vc_g

0x3ca8,	// (0x0004f221) text_primary_small_cp13_vc_ParamLimits

0x3ca8,	// (0x0004f221) text_primary_small_cp13_vc

0x3cc0,	// (0x0004f239) list_set_graphic_pane_vc_ParamLimits

0x3cc0,	// (0x0004f239) list_set_graphic_pane_vc

0x8fb7,	// (0x00054530) input_focus_pane_cp2_vc

0x8ec7,	// (0x00054440) setting_code_pane_vc_g1

0x92f2,	// (0x0005486b) setting_code_pane_vc_t1

0x3cd3,	// (0x0004f24c) set_text_pane_vc_t1_ParamLimits

0x3cd3,	// (0x0004f24c) set_text_pane_vc_t1

0x8fb7,	// (0x00054530) input_focus_pane_cp1_vc

0x3cf0,	// (0x0004f269) list_set_text_pane_vc

0x8ec7,	// (0x00054440) setting_text_pane_vc_g1

0x8fb7,	// (0x00054530) bg_set_opt_pane_cp2_vc

0x92c1,	// (0x0005483a) setting_slider_graphic_pane_vc_g1

0x3cfa,	// (0x0004f273) setting_slider_graphic_pane_vc_t1

0x3d0a,	// (0x0004f283) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x0005af42) setting_slider_graphic_pane_vc_t

0x3d1a,	// (0x0004f293) slider_set_pane_cp_vc

0x3d22,	// (0x0004f29b) slider_set_pane_vc_g1

0x3d2b,	// (0x0004f2a4) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x0005af47) slider_set_pane_vc_g

0x9bf3,	// (0x0005516c) set_opt_bg_pane_g1_copy1

0x9bfb,	// (0x00055174) set_opt_bg_pane_g2_copy1

0x3d57,	// (0x0004f2d0) set_opt_bg_pane_g3_copy1

0x9c0b,	// (0x00055184) set_opt_bg_pane_g4_copy1

0x9c13,	// (0x0005518c) set_opt_bg_pane_g5_copy1

0x9c1b,	// (0x00055194) set_opt_bg_pane_g6_copy1

0x3d5f,	// (0x0004f2d8) set_opt_bg_pane_g7_copy1

0x3d69,	// (0x0004f2e2) set_opt_bg_pane_g8_copy1

0x3d71,	// (0x0004f2ea) set_opt_bg_pane_g9_copy1

0x8fb7,	// (0x00054530) bg_set_opt_pane_cp_vc

0x3d79,	// (0x0004f2f2) setting_slider_pane_vc_t1

0x3d88,	// (0x0004f301) setting_slider_pane_vc_t2

0x3d98,	// (0x0004f311) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x0005af56) setting_slider_pane_vc_t

0x3da8,	// (0x0004f321) slider_set_pane_vc

0x0a7b,	// (0x0004bff4) volume_set_pane_vc_g1

0x0e21,	// (0x0004c39a) volume_set_pane_vc_g2

0x0e2a,	// (0x0004c3a3) volume_set_pane_vc_g3

0x0e33,	// (0x0004c3ac) volume_set_pane_vc_g4

0x0e3c,	// (0x0004c3b5) volume_set_pane_vc_g5

0x0e45,	// (0x0004c3be) volume_set_pane_vc_g6

0x0e4e,	// (0x0004c3c7) volume_set_pane_vc_g7

0x0e57,	// (0x0004c3d0) volume_set_pane_vc_g8

0x0e60,	// (0x0004c3d9) volume_set_pane_vc_g9

0x0e69,	// (0x0004c3e2) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0005af5d) volume_set_pane_vc_g

0x3db0,	// (0x0004f329) volume_set_pane_vc

0x3dba,	// (0x0004f333) button_value_adjust_pane_cp1_vc

0x3dc4,	// (0x0004f33d) list_highlight_pane_cp2_vc

0x3dcd,	// (0x0004f346) list_set_pane_vc_ParamLimits

0x3dcd,	// (0x0004f346) list_set_pane_vc

0x3e2b,	// (0x0004f3a4) main_pane_set_vc_t1_ParamLimits

0x3e2b,	// (0x0004f3a4) main_pane_set_vc_t1

0x3e40,	// (0x0004f3b9) main_pane_set_vc_t2_ParamLimits

0x3e40,	// (0x0004f3b9) main_pane_set_vc_t2

0x3e52,	// (0x0004f3cb) main_pane_set_vc_t3_ParamLimits

0x3e52,	// (0x0004f3cb) main_pane_set_vc_t3

0x3e64,	// (0x0004f3dd) main_pane_set_vc_t4_ParamLimits

0x3e64,	// (0x0004f3dd) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x0005af72) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x0005af72) main_pane_set_vc_t

0x3e76,	// (0x0004f3ef) setting_code_pane_vc_ParamLimits

0x3e76,	// (0x0004f3ef) setting_code_pane_vc

0x3e85,	// (0x0004f3fe) setting_slider_graphic_pane_vc

0x3e85,	// (0x0004f3fe) setting_slider_pane_vc

0x3e85,	// (0x0004f3fe) setting_text_pane_vc

0x3e85,	// (0x0004f3fe) setting_volume_pane_vc

0x3e8d,	// (0x0004f406) scroll_pane_cp121_vc

0x9b75,	// (0x000550ee) set_content_pane_vc

0x3e95,	// (0x0004f40e) button_value_adjust_pane_g1

0x3e9e,	// (0x0004f417) button_value_adjust_pane_g2

0x0001,

0xfa55,	// (0x0005afce) button_value_adjust_pane_g

0x3ea7,	// (0x0004f420) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3ea7,	// (0x0004f420) form_field_slider_wide_pane_vc_t1

0x3ebb,	// (0x0004f434) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3ebb,	// (0x0004f434) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5a,	// (0x0005afd3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005afd3) form_field_slider_wide_pane_vc_t

0x9208,	// (0x00054781) input_focus_pane_cp10_vc_ParamLimits

0x9208,	// (0x00054781) input_focus_pane_cp10_vc

0x3ee9,	// (0x0004f462) slider_cont_pane_cp1_vc_ParamLimits

0x3ee9,	// (0x0004f462) slider_cont_pane_cp1_vc

0x3efb,	// (0x0004f474) slider_form_pane_g1_cp2

0x3d2b,	// (0x0004f2a4) slider_form_pane_g2_cp2

0x3f28,	// (0x0004f4a1) form_field_slider_pane_vc_t3

0x3f36,	// (0x0004f4af) form_field_slider_pane_vc_t4

0x3f44,	// (0x0004f4bd) slider_form_pane_vc_ParamLimits

0x3f44,	// (0x0004f4bd) slider_form_pane_vc

0x3f51,	// (0x0004f4ca) form_field_slider_pane_vc_t1_ParamLimits

0x3f51,	// (0x0004f4ca) form_field_slider_pane_vc_t1

0x3ebb,	// (0x0004f434) form_field_slider_pane_vc_t2_ParamLimits

0x3ebb,	// (0x0004f434) form_field_slider_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005afe5) form_field_slider_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005afe5) form_field_slider_pane_vc_t

0x9208,	// (0x00054781) input_focus_pane_cp9_vc_ParamLimits

0x9208,	// (0x00054781) input_focus_pane_cp9_vc

0x3f6d,	// (0x0004f4e6) slider_cont_pane_vc_ParamLimits

0x3f6d,	// (0x0004f4e6) slider_cont_pane_vc

0x3f81,	// (0x0004f4fa) list_form_graphic_pane_cp_vc_ParamLimits

0x3f81,	// (0x0004f4fa) list_form_graphic_pane_cp_vc

0x22d9,	// (0x0004d852) form_field_popup_wide_pane_vc_g1

0x3f96,	// (0x0004f50f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f96,	// (0x0004f50f) form_field_popup_wide_pane_vc_t1

0x9b9b,	// (0x00055114) input_focus_pane_cp8_vc_ParamLimits

0x9b9b,	// (0x00055114) input_focus_pane_cp8_vc

0x3fdb,	// (0x0004f554) list_form_wide_pane_vc_ParamLimits

0x3fdb,	// (0x0004f554) list_form_wide_pane_vc

0x3fe7,	// (0x0004f560) list_form_graphic_pane_vc_g1

0x3fef,	// (0x0004f568) list_form_graphic_pane_vc_t1_ParamLimits

0x3fef,	// (0x0004f568) list_form_graphic_pane_vc_t1

0x9252,	// (0x000547cb) list_highlight_pane_cp5_vc_ParamLimits

0x9252,	// (0x000547cb) list_highlight_pane_cp5_vc

0x400b,	// (0x0004f584) list_form_graphic_pane_vc_ParamLimits

0x400b,	// (0x0004f584) list_form_graphic_pane_vc

0x22d9,	// (0x0004d852) form_field_popup_pane_vc_g1

0x4021,	// (0x0004f59a) form_field_popup_pane_vc_t1_ParamLimits

0x4021,	// (0x0004f59a) form_field_popup_pane_vc_t1

0x9b9b,	// (0x00055114) input_focus_pane_cp7_vc_ParamLimits

0x9b9b,	// (0x00055114) input_focus_pane_cp7_vc

0x4038,	// (0x0004f5b1) list_form_pane_vc_ParamLimits

0x4038,	// (0x0004f5b1) list_form_pane_vc

0x4044,	// (0x0004f5bd) data_form_pane_vc_t1_ParamLimits

0x4044,	// (0x0004f5bd) data_form_pane_vc_t1

0x9bf3,	// (0x0005516c) input_focus_pane_vc_g1

0x9bfb,	// (0x00055174) input_focus_pane_vc_g2

0x9c03,	// (0x0005517c) input_focus_pane_vc_g3

0x9c0b,	// (0x00055184) input_focus_pane_vc_g4

0x9c13,	// (0x0005518c) input_focus_pane_vc_g5

0x9c1b,	// (0x00055194) input_focus_pane_vc_g6

0x9c23,	// (0x0005519c) input_focus_pane_vc_g7

0x9c2b,	// (0x000551a4) input_focus_pane_vc_g8

0x9c33,	// (0x000551ac) input_focus_pane_vc_g9

0x8ec7,	// (0x00054440) input_focus_pane_vc_g10

0x0009,

0xf65d,	// (0x0005abd6) input_focus_pane_vc_g

0x22cd,	// (0x0004d846) data_form_pane_vc_ParamLimits

0x22cd,	// (0x0004d846) data_form_pane_vc

0x22d9,	// (0x0004d852) form_field_data_pane_vc_g1

0x405f,	// (0x0004f5d8) form_field_data_pane_vc_t1_ParamLimits

0x405f,	// (0x0004f5d8) form_field_data_pane_vc_t1

0x9b9b,	// (0x00055114) input_focus_pane_vc_ParamLimits

0x9b9b,	// (0x00055114) input_focus_pane_vc

0x4079,	// (0x0004f5f2) button_value_adjust_pane_cp3_vc

0x4081,	// (0x0004f5fa) button_value_adjust_pane_cp5_vc

0x4089,	// (0x0004f602) form_field_data_pane_vc_ParamLimits

0x4089,	// (0x0004f602) form_field_data_pane_vc

0x40a0,	// (0x0004f619) form_field_data_pane_vc_cp2

0x40a8,	// (0x0004f621) form_field_data_wide_pane_vc_ParamLimits

0x40a8,	// (0x0004f621) form_field_data_wide_pane_vc

0x40be,	// (0x0004f637) form_field_data_wide_pane_vc_cp2

0x40c6,	// (0x0004f63f) form_field_popup_pane_vc_ParamLimits

0x40c6,	// (0x0004f63f) form_field_popup_pane_vc

0x40dd,	// (0x0004f656) form_field_popup_wide_pane_vc_ParamLimits

0x40dd,	// (0x0004f656) form_field_popup_wide_pane_vc

0x40f3,	// (0x0004f66c) form_field_slider_pane_vc_ParamLimits

0x40f3,	// (0x0004f66c) form_field_slider_pane_vc

0x4106,	// (0x0004f67f) form_field_slider_wide_pane_vc_ParamLimits

0x4106,	// (0x0004f67f) form_field_slider_wide_pane_vc

0xccbc,	// (0x00058235) grid_touch_1_pane_ParamLimits

0xccbc,	// (0x00058235) grid_touch_1_pane

0xccd0,	// (0x00058249) grid_touch_2_pane_ParamLimits

0xccd0,	// (0x00058249) grid_touch_2_pane

0x41ea,	// (0x0004f763) touch_pane_g1_ParamLimits

0x41ea,	// (0x0004f763) touch_pane_g1

0x413d,	// (0x0004f6b6) cell_app_pane_cp_wide_ParamLimits

0x413d,	// (0x0004f6b6) cell_app_pane_cp_wide

0x414e,	// (0x0004f6c7) grid_popup_fast_wide_pane_ParamLimits

0x414e,	// (0x0004f6c7) grid_popup_fast_wide_pane

0x4162,	// (0x0004f6db) scroll_pane_cp19_ParamLimits

0x4162,	// (0x0004f6db) scroll_pane_cp19

0x8fb7,	// (0x00054530) bg_popup_window_pane_cp20

0x4176,	// (0x0004f6ef) listscroll_popup_fast_wide_pane

0xccfa,	// (0x00058273) grid_indicator_nsta_pane

0x4190,	// (0x0004f709) clock_nsta_pane_g1

0x4199,	// (0x0004f712) clock_nsta_pane_t1

0xcd06,	// (0x0005827f) cell_indicator_nsta_pane_ParamLimits

0xcd06,	// (0x0005827f) cell_indicator_nsta_pane

0x41ea,	// (0x0004f763) cell_indicator_nsta_pane_g1

0xcd21,	// (0x0005829a) cell_indicator_nsta_pane_g2

0x0001,

0xfa7d,	// (0x0005aff6) cell_indicator_nsta_pane_g

0x420a,	// (0x0004f783) clock_nsta_pane_cp

0x4213,	// (0x0004f78c) indicator_nsta_pane_cp

0x421d,	// (0x0004f796) nsta_clock_indic_pane_g1

0x93d4,	// (0x0005494d) grid_indicator_pane

0xa17c,	// (0x000556f5) scroll_pane_cp29

0xf358,	// (0x0005a8d1) indicator_nsta_pane_cp2_ParamLimits

0xf358,	// (0x0005a8d1) indicator_nsta_pane_cp2

0x9252,	// (0x000547cb) main_apps_wheel_pane

0xb47e,	// (0x000569f7) form_midp_field_text_pane_ParamLimits

0x263a,	// (0x0004dbb3) scroll_bar_cp050_ParamLimits

0x4276,	// (0x0004f7ef) cell_indicator_pane_ParamLimits

0x4276,	// (0x0004f7ef) cell_indicator_pane

0x428f,	// (0x0004f808) cell_indicator_pane_g1

0xcd40,	// (0x000582b9) grid_wheel_folder_pane_ParamLimits

0xcd40,	// (0x000582b9) grid_wheel_folder_pane

0xcd4e,	// (0x000582c7) list_wheel_apps_pane_ParamLimits

0xcd4e,	// (0x000582c7) list_wheel_apps_pane

0xcd5c,	// (0x000582d5) main_apps_wheel_pane_g1_ParamLimits

0xcd5c,	// (0x000582d5) main_apps_wheel_pane_g1

0xcd68,	// (0x000582e1) main_apps_wheel_pane_g2_ParamLimits

0xcd68,	// (0x000582e1) main_apps_wheel_pane_g2

0x0001,

0xfa99,	// (0x0005b012) main_apps_wheel_pane_g_ParamLimits

0xfa99,	// (0x0005b012) main_apps_wheel_pane_g

0xcd76,	// (0x000582ef) main_apps_wheel_pane_t1_ParamLimits

0xcd76,	// (0x000582ef) main_apps_wheel_pane_t1

0xcd8a,	// (0x00058303) list_wheel_apps_pane_g1

0xcd92,	// (0x0005830b) list_wheel_apps_pane_g2

0xcd9a,	// (0x00058313) list_wheel_apps_pane_g3

0xcda2,	// (0x0005831b) list_wheel_apps_pane_g4

0xcdac,	// (0x00058325) list_wheel_apps_pane_g5

0x0004,

0xfa9e,	// (0x0005b017) list_wheel_apps_pane_g

0xc2ce,	// (0x00057847) navi_icon_text_pane

0xaed8,	// (0x00056451) aid_fill_nsta

0x4356,	// (0x0004f8cf) navi_icon_text_pane_g1

0x4362,	// (0x0004f8db) navi_icon_text_pane_t1

0xc1b2,	// (0x0005772b) list_set_graphic_pane_t1_ParamLimits

0xc1b2,	// (0x0005772b) list_set_graphic_pane_t1

0x2d85,	// (0x0004e2fe) popup_midp_note_alarm_window_t6_ParamLimits

0x2d85,	// (0x0004e2fe) popup_midp_note_alarm_window_t6

0x2d97,	// (0x0004e310) popup_midp_note_alarm_window_t7_ParamLimits

0x2d97,	// (0x0004e310) popup_midp_note_alarm_window_t7

0x2da9,	// (0x0004e322) popup_midp_note_alarm_window_t8_ParamLimits

0x2da9,	// (0x0004e322) popup_midp_note_alarm_window_t8

0x2dbb,	// (0x0004e334) popup_midp_note_alarm_window_t9_ParamLimits

0x2dbb,	// (0x0004e334) popup_midp_note_alarm_window_t9

0x2dcd,	// (0x0004e346) popup_midp_note_alarm_window_t10_ParamLimits

0x2dcd,	// (0x0004e346) popup_midp_note_alarm_window_t10

0x2ddf,	// (0x0004e358) popup_midp_note_alarm_window_t11_ParamLimits

0x2ddf,	// (0x0004e358) popup_midp_note_alarm_window_t11

0xc71c,	// (0x00057c95) scroll_pane_cp17_ParamLimits

0xc71c,	// (0x00057c95) scroll_pane_cp17

0x0a7b,	// (0x0004bff4) volume_small_pane_cp_g1

0x0ef2,	// (0x0004c46b) volume_small_pane_cp_g2

0x0efb,	// (0x0004c474) volume_small_pane_cp_g3

0x0f04,	// (0x0004c47d) volume_small_pane_cp_g4

0x0f0d,	// (0x0004c486) volume_small_pane_cp_g5

0x0e3c,	// (0x0004c3b5) volume_small_pane_cp_g6

0x0f16,	// (0x0004c48f) volume_small_pane_cp_g7

0x0f1f,	// (0x0004c498) volume_small_pane_cp_g8

0x0f28,	// (0x0004c4a1) volume_small_pane_cp_g9

0x0f31,	// (0x0004c4aa) volume_small_pane_cp_g10

0xc413,	// (0x0005798c) midp_ticker_pane_g1_ParamLimits

0xc41f,	// (0x00057998) midp_ticker_pane_g2_ParamLimits

0xf729,	// (0x0005aca2) midp_ticker_pane_g_ParamLimits

0xc42b,	// (0x000579a4) midp_ticker_pane_t1_ParamLimits

0xaefc,	// (0x00056475) aid_fill_nsta_2

0x2626,	// (0x0004db9f) list_form2_midp_pane

0x3739,	// (0x0004ecb2) midp_editing_number_pane_ParamLimits

0x3748,	// (0x0004ecc1) midp_ticker_pane_ParamLimits

0x4374,	// (0x0004f8ed) form2_midp_field_pane

0x4398,	// (0x0004f911) scroll_pane_cp51

0x43b8,	// (0x0004f931) form2_midp_button_pane_ParamLimits

0x43b8,	// (0x0004f931) form2_midp_button_pane

0x43ca,	// (0x0004f943) form2_midp_content_pane_ParamLimits

0x43ca,	// (0x0004f943) form2_midp_content_pane

0x43e4,	// (0x0004f95d) form2_midp_field_choice_group_pane

0x43ec,	// (0x0004f965) form2_midp_field_pane_g1

0x43f4,	// (0x0004f96d) form2_midp_field_pane_g2

0x43fc,	// (0x0004f975) form2_midp_field_pane_g3

0x4404,	// (0x0004f97d) form2_midp_field_pane_g4

0x0003,

0xfac3,	// (0x0005b03c) form2_midp_field_pane_g

0x440c,	// (0x0004f985) form2_midp_gauge_slider_pane

0x4414,	// (0x0004f98d) form2_midp_gauge_wait_pane

0x441c,	// (0x0004f995) form2_midp_image_pane_ParamLimits

0x441c,	// (0x0004f995) form2_midp_image_pane

0xcddf,	// (0x00058358) form2_midp_label_pane_ParamLimits

0xcddf,	// (0x00058358) form2_midp_label_pane

0xcdf8,	// (0x00058371) form2_midp_label_pane_cp_ParamLimits

0xcdf8,	// (0x00058371) form2_midp_label_pane_cp

0x4471,	// (0x0004f9ea) form2_midp_string_pane_ParamLimits

0x4471,	// (0x0004f9ea) form2_midp_string_pane

0x8d0c,	// (0x00054285) form2_midp_text_pane_ParamLimits

0x8d0c,	// (0x00054285) form2_midp_text_pane

0x4483,	// (0x0004f9fc) form2_midp_time_pane

0x4493,	// (0x0004fa0c) input_focus_pane_cp51_ParamLimits

0x4493,	// (0x0004fa0c) input_focus_pane_cp51

0xce17,	// (0x00058390) form2_midp_label_pane_t1_ParamLimits

0xce17,	// (0x00058390) form2_midp_label_pane_t1

0x8d25,	// (0x0005429e) form2_mdip_text_pane_t1_ParamLimits

0x8d25,	// (0x0005429e) form2_mdip_text_pane_t1

0xed05,	// (0x0005a27e) form2_midp_time_pane_t1

0x44f4,	// (0x0004fa6d) form2_midp_gauge_slider_pane_t1

0xce57,	// (0x000583d0) form2_midp_gauge_slider_pane_t2

0xce69,	// (0x000583e2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacc,	// (0x0005b045) form2_midp_gauge_slider_pane_t

0x452a,	// (0x0004faa3) form2_midp_slider_pane

0x4536,	// (0x0004faaf) form2_midp_gauge_wait_pane_t1

0x4544,	// (0x0004fabd) form2_midp_wait_pane_ParamLimits

0x4544,	// (0x0004fabd) form2_midp_wait_pane

0xce7b,	// (0x000583f4) list_single_2graphic_pane_cp4_ParamLimits

0xce7b,	// (0x000583f4) list_single_2graphic_pane_cp4

0xb3d5,	// (0x0005694e) list_single_midp_graphic_pane_cp_ParamLimits

0xb3d5,	// (0x0005694e) list_single_midp_graphic_pane_cp

0x8fb7,	// (0x00054530) list_highlight_pane_cp20

0x4597,	// (0x0004fb10) list_single_2graphic_pane_g1_cp4

0x3b74,	// (0x0004f0ed) list_single_2graphic_pane_g2_cp4

0x459f,	// (0x0004fb18) list_single_2graphic_pane_t1_cp4

0x9252,	// (0x000547cb) list_highlight_pane_cp21

0x45ae,	// (0x0004fb27) list_single_midp_graphic_pane_g4_cp

0x45bd,	// (0x0004fb36) list_single_midp_graphic_pane_t1_cp

0xce90,	// (0x00058409) form2_mdip_string_pane_t1_ParamLimits

0xce90,	// (0x00058409) form2_mdip_string_pane_t1

0x8fb7,	// (0x00054530) bg_wml_button_pane_cp2

0x8ec7,	// (0x00054440) form2_midp_image_pane_g1

0xf0d2,	// (0x0005a64b) list_double_large_graphic_pane_g5_ParamLimits

0xf0d2,	// (0x0005a64b) list_double_large_graphic_pane_g5

0xa42a,	// (0x000559a3) midp_form_pane_ParamLimits

0x9252,	// (0x000547cb) main_apps_wheel_pane_ParamLimits

0xabb6,	// (0x0005612f) popup_preview_window_ParamLimits

0xabb6,	// (0x0005612f) popup_preview_window

0xae83,	// (0x000563fc) popup_touch_info_window_ParamLimits

0xae83,	// (0x000563fc) popup_touch_info_window

0xaea1,	// (0x0005641a) popup_touch_menu_window_ParamLimits

0xaea1,	// (0x0005641a) popup_touch_menu_window

0x8ebd,	// (0x00054436) bg_popup_sub_pane_cp6

0x46d9,	// (0x0004fc52) list_touch_menu_pane

0xcf06,	// (0x0005847f) list_single_touch_menu_pane_ParamLimits

0xcf06,	// (0x0005847f) list_single_touch_menu_pane

0xcf1a,	// (0x00058493) list_single_touch_menu_pane_t1

0x9252,	// (0x000547cb) bg_popup_sub_pane_cp7_ParamLimits

0x9252,	// (0x000547cb) bg_popup_sub_pane_cp7

0x4705,	// (0x0004fc7e) heading_sub_pane

0x470d,	// (0x0004fc86) list_touch_info_pane_ParamLimits

0x470d,	// (0x0004fc86) list_touch_info_pane

0x471c,	// (0x0004fc95) list_single_touch_info_pane_ParamLimits

0x471c,	// (0x0004fc95) list_single_touch_info_pane

0x472e,	// (0x0004fca7) list_single_touch_info_pane_t1

0x473c,	// (0x0004fcb5) list_single_touch_info_pane_t2

0x0001,

0xfada,	// (0x0005b053) list_single_touch_info_pane_t

0xc3fc,	// (0x00057975) bg_popup_heading_pane_cp

0x474a,	// (0x0004fcc3) heading_sub_pane_t1

0x2267,	// (0x0004d7e0) bg_popup_preview_window_pane_cp_ParamLimits

0x2267,	// (0x0004d7e0) bg_popup_preview_window_pane_cp

0x4705,	// (0x0004fc7e) heading_preview_pane

0x470d,	// (0x0004fc86) list_preview_pane_ParamLimits

0x470d,	// (0x0004fc86) list_preview_pane

0x4758,	// (0x0004fcd1) popup_preview_window_g1

0x471c,	// (0x0004fc95) list_single_preview_pane_ParamLimits

0x471c,	// (0x0004fc95) list_single_preview_pane

0x4760,	// (0x0004fcd9) list_single_preview_pane_g1

0x4768,	// (0x0004fce1) list_single_preview_pane_t1

0x472e,	// (0x0004fca7) list_single_preview_pane_t2

0x0001,

0xfadf,	// (0x0005b058) list_single_preview_pane_t

0x4776,	// (0x0004fcef) bg_popup_heading_pane_cp2_ParamLimits

0x4776,	// (0x0004fcef) bg_popup_heading_pane_cp2

0x478c,	// (0x0004fd05) heading_preview_pane_g1

0x4794,	// (0x0004fd0d) heading_preview_pane_t1_ParamLimits

0x4794,	// (0x0004fd0d) heading_preview_pane_t1

0x9401,	// (0x0005497a) soft_indicator_pane_t1_ParamLimits

0x9ac6,	// (0x0005503f) scroll_pane_ParamLimits

0xa078,	// (0x000555f1) scroll_sc2_left_pane

0xa081,	// (0x000555fa) scroll_sc2_right_pane

0xa0a0,	// (0x00055619) scroll_bg_pane_g1_ParamLimits

0xa0b5,	// (0x0005562e) scroll_bg_pane_g2_ParamLimits

0xa0cd,	// (0x00055646) scroll_bg_pane_g3_ParamLimits

0xf6b4,	// (0x0005ac2d) scroll_bg_pane_g_ParamLimits

0xa0a0,	// (0x00055619) scroll_handle_pane_g1_ParamLimits

0xa0ef,	// (0x00055668) scroll_handle_pane_g2_ParamLimits

0xa0cd,	// (0x00055646) scroll_handle_pane_g3_ParamLimits

0xf6bb,	// (0x0005ac34) scroll_handle_pane_g_ParamLimits

0xa783,	// (0x00055cfc) popup_choice_list_window_ParamLimits

0xa783,	// (0x00055cfc) popup_choice_list_window

0x2125,	// (0x0004d69e) choice_list_pane

0x21a7,	// (0x0004d720) cell_toolbar_pane_t1

0x21cf,	// (0x0004d748) toolbar_button_pane_ParamLimits

0x32ab,	// (0x0004e824) ai_gene_pane_1_t2_ParamLimits

0x32ab,	// (0x0004e824) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x0005ae50) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x0005ae50) ai_gene_pane_1_t

0x47b1,	// (0x0004fd2a) scroll_sc2_left_pane_g1

0x47b1,	// (0x0004fd2a) scroll_sc2_right_pane_g1

0x9d7f,	// (0x000552f8) bg_popup_sub_pane_cp10

0x47bb,	// (0x0004fd34) list_choice_list_pane

0xcadd,	// (0x00058056) list_single_choice_list_pane_ParamLimits

0xcadd,	// (0x00058056) list_single_choice_list_pane

0xcf28,	// (0x000584a1) list_single_choice_list_pane_g1

0x9d3d,	// (0x000552b6) list_single_choice_list_pane_t1_ParamLimits

0x9d3d,	// (0x000552b6) list_single_choice_list_pane_t1

0x47ef,	// (0x0004fd68) choice_list_pane_g1

0xcf30,	// (0x000584a9) choice_list_pane_t1

0x8ebd,	// (0x00054436) input_focus_pane_cp11

0x9f03,	// (0x0005547c) title_pane_stacon_g2_ParamLimits

0x9f03,	// (0x0005547c) title_pane_stacon_g2

0x0002,

0xf69a,	// (0x0005ac13) title_pane_stacon_g_ParamLimits

0xf69a,	// (0x0005ac13) title_pane_stacon_g

0xc3fc,	// (0x00057975) cursor_press_pane

0xa82a,	// (0x00055da3) popup_fep_hwr_window_ParamLimits

0xa82a,	// (0x00055da3) popup_fep_hwr_window

0x0221,	// (0x0004b79a) popup_fep_vkb_window_ParamLimits

0x0221,	// (0x0004b79a) popup_fep_vkb_window

0xcf3e,	// (0x000584b7) cursor_press_pane_g1

0x0002,

0xfb08,	// (0x0005b081) fep_vkb_side_pane_g_ParamLimits

0x0f73,	// (0x0004c4ec) fep_hwr_candidate_pane_ParamLimits

0x0f73,	// (0x0004c4ec) fep_hwr_candidate_pane

0x0f9d,	// (0x0004c516) fep_hwr_side_pane_ParamLimits

0x0f9d,	// (0x0004c516) fep_hwr_side_pane

0x0fbd,	// (0x0004c536) fep_hwr_top_pane_ParamLimits

0x0fbd,	// (0x0004c536) fep_hwr_top_pane

0x0fd5,	// (0x0004c54e) fep_hwr_write_pane_ParamLimits

0x0fd5,	// (0x0004c54e) fep_hwr_write_pane

0xfb08,	// (0x0005b081) fep_vkb_side_pane_g

0x480d,	// (0x0004fd86) fep_hwr_top_pane_g1

0x481f,	// (0x0004fd98) fep_hwr_top_pane_g2

0x1001,	// (0x0004c57a) fep_hwr_top_pane_g3

0x0002,

0xfae4,	// (0x0005b05d) fep_hwr_top_pane_g

0x1016,	// (0x0004c58f) fep_hwr_top_text_pane

0xbfbf,	// (0x00057538) fep_hwr_top_text_pane_g1

0x4855,	// (0x0004fdce) fep_hwr_top_text_pane_t1

0x110c,	// (0x0004c685) fep_hwr_candidate_pane_g1

0x4a9a,	// (0x00050013) fep_vkb_keypad_pane_g3_ParamLimits

0x4a9a,	// (0x00050013) fep_vkb_keypad_pane_g3

0x4ac2,	// (0x0005003b) fep_vkb_keypad_pane_g4_ParamLimits

0x4ac2,	// (0x0005003b) fep_vkb_keypad_pane_g4

0x4b31,	// (0x000500aa) fep_vkb_bottom_pane_g2_ParamLimits

0x4b31,	// (0x000500aa) fep_vkb_bottom_pane_g2

0x0001,

0xfb0f,	// (0x0005b088) fep_vkb_bottom_pane_g_ParamLimits

0xfb0f,	// (0x0005b088) fep_vkb_bottom_pane_g

0x47b1,	// (0x0004fd2a) cell_vkb_side_pane_g2

0x0001,

0xfb19,	// (0x0005b092) cell_vkb_side_pane_g

0x4bbc,	// (0x00050135) cell_vkb_side_pane_t1

0x4bca,	// (0x00050143) cell_vkb_side_pane_t1_copy1

0x47b1,	// (0x0004fd2a) bg_fep_vkb_candidate_pane_g2

0x4cf6,	// (0x0005026f) cell_vkb_candidate_pane_ParamLimits

0x4863,	// (0x0004fddc) aid_size_cell_vkb_ParamLimits

0x4863,	// (0x0004fddc) aid_size_cell_vkb

0x4cf6,	// (0x0005026f) cell_vkb_candidate_pane

0x1126,	// (0x0004c69f) bg_popup_fep_shadow_pane_g1

0xcf80,	// (0x000584f9) fep_vkb_bottom_pane_ParamLimits

0xcf80,	// (0x000584f9) fep_vkb_bottom_pane

0x4927,	// (0x0004fea0) fep_vkb_candidate_pane_ParamLimits

0x4927,	// (0x0004fea0) fep_vkb_candidate_pane

0xcfa5,	// (0x0005851e) fep_vkb_keypad_pane_ParamLimits

0xcfa5,	// (0x0005851e) fep_vkb_keypad_pane

0xcfda,	// (0x00058553) fep_vkb_side_pane_ParamLimits

0xcfda,	// (0x00058553) fep_vkb_side_pane

0xd016,	// (0x0005858f) fep_vkb_top_pane_ParamLimits

0xd016,	// (0x0005858f) fep_vkb_top_pane

0x49f3,	// (0x0004ff6c) fep_vkb_top_pane_g1_ParamLimits

0x49f3,	// (0x0004ff6c) fep_vkb_top_pane_g1

0x4a02,	// (0x0004ff7b) fep_vkb_top_pane_g2_ParamLimits

0x4a02,	// (0x0004ff7b) fep_vkb_top_pane_g2

0x4a11,	// (0x0004ff8a) fep_vkb_top_pane_g3_ParamLimits

0x4a11,	// (0x0004ff8a) fep_vkb_top_pane_g3

0x0003,

0xfaff,	// (0x0005b078) fep_vkb_top_pane_g_ParamLimits

0xfaff,	// (0x0005b078) fep_vkb_top_pane_g

0x4a2f,	// (0x0004ffa8) fep_vkb_top_text_pane_ParamLimits

0x4a2f,	// (0x0004ffa8) fep_vkb_top_text_pane

0xd04b,	// (0x000585c4) fep_vkb_side_pane_g1_ParamLimits

0xd04b,	// (0x000585c4) fep_vkb_side_pane_g1

0x4a89,	// (0x00050002) grid_vkb_side_pane_ParamLimits

0x4a89,	// (0x00050002) grid_vkb_side_pane

0x112e,	// (0x0004c6a7) bg_popup_fep_shadow_pane_g2

0x1137,	// (0x0004c6b0) bg_popup_fep_shadow_pane_g3

0x113f,	// (0x0004c6b8) bg_popup_fep_shadow_pane_g4

0x1148,	// (0x0004c6c1) bg_popup_fep_shadow_pane_g5

0x1152,	// (0x0004c6cb) bg_popup_fep_shadow_pane_g6

0x115a,	// (0x0004c6d3) bg_popup_fep_shadow_pane_g7

0x9c13,	// (0x0005518c) bg_popup_fep_shadow_pane_g8

0x4ae0,	// (0x00050059) grid_vkb_keypad_number_pane_ParamLimits

0x4ae0,	// (0x00050059) grid_vkb_keypad_number_pane

0x4af0,	// (0x00050069) grid_vkb_keypad_pane_ParamLimits

0x4af0,	// (0x00050069) grid_vkb_keypad_pane

0x4b16,	// (0x0005008f) fep_vkb_bottom_pane_g1_ParamLimits

0x4b16,	// (0x0005008f) fep_vkb_bottom_pane_g1

0x4b3f,	// (0x000500b8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b3f,	// (0x000500b8) grid_vkb_keypad_bottom_left_pane

0x4b54,	// (0x000500cd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b54,	// (0x000500cd) grid_vkb_keypad_bottom_right_pane

0x4b69,	// (0x000500e2) fep_vkb_top_text_pane_g1

0xd092,	// (0x0005860b) fep_vkb_top_text_pane_t1

0xd0a4,	// (0x0005861d) cell_vkb_side_pane_ParamLimits

0xd0a4,	// (0x0005861d) cell_vkb_side_pane

0x47b1,	// (0x0004fd2a) cell_vkb_side_pane_g1

0x4bd8,	// (0x00050151) cell_vkb_keypad_pane_ParamLimits

0x4bd8,	// (0x00050151) cell_vkb_keypad_pane

0x4c4d,	// (0x000501c6) cell_vkb_keypad_pane_g1

0x0008,

0xfb2c,	// (0x0005b0a5) bg_popup_fep_shadow_pane_g

0x47b1,	// (0x0004fd2a) cell_hwr_side_pane_g1

0x47b1,	// (0x0004fd2a) cell_hwr_side_pane_g2

0x4c57,	// (0x000501d0) cell_vkb_keypad_pane_t1

0xd0ba,	// (0x00058633) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd0ba,	// (0x00058633) cell_vkb_keypad_bottom_left_pane

0xd0cf,	// (0x00058648) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd0cf,	// (0x00058648) cell_vkb_keypad_bottom_right_pane

0x47b1,	// (0x0004fd2a) cell_vkb_keypad_bottom_left_pane_g1

0x47b1,	// (0x0004fd2a) cell_vkb_keypad_bottom_right_pane_g1

0x4cbb,	// (0x00050234) cell_vkb_keypad_number_pane_ParamLimits

0x4cbb,	// (0x00050234) cell_vkb_keypad_number_pane

0x4cda,	// (0x00050253) cell_vkb_keypad_number_pane_g1

0x4ce4,	// (0x0005025d) cell_vkb_keypad_number_pane_g2

0x4ced,	// (0x00050266) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1e,	// (0x0005b097) cell_vkb_keypad_number_pane_g

0x4c57,	// (0x000501d0) cell_vkb_keypad_number_pane_t1

0x4d11,	// (0x0005028a) fep_vkb_candidate_pane_g1

0x0001,

0xfb19,	// (0x0005b092) cell_hwr_side_pane_g

0x4d2a,	// (0x000502a3) cell_hwr_side_pane_t1

0x116c,	// (0x0004c6e5) cell_hwr_side_pane_t1_copy1

0x4a21,	// (0x0004ff9a) cell_hwr_candidate_pane_g1

0x117a,	// (0x0004c6f3) cell_hwr_candidate_pane_t1

0x47b1,	// (0x0004fd2a) cell_vkb_candidate_pane_g2

0x4d6e,	// (0x000502e7) cell_vkb_candidate_pane_t1

0x0f3a,	// (0x0004c4b3) bg_popup_fep_shadow_pane_ParamLimits

0x0f3a,	// (0x0004c4b3) bg_popup_fep_shadow_pane

0xcf46,	// (0x000584bf) bg_fep_hwr_top_pane_g4

0x4831,	// (0x0004fdaa) bg_hwr_side_pane_g1_ParamLimits

0x4831,	// (0x0004fdaa) bg_hwr_side_pane_g1

0xb79a,	// (0x00056d13) cell_hwr_side_pane_ParamLimits

0xb79a,	// (0x00056d13) cell_hwr_side_pane

0x108d,	// (0x0004c606) fep_hwr_write_pane_g1_ParamLimits

0x108d,	// (0x0004c606) fep_hwr_write_pane_g1

0x109a,	// (0x0004c613) fep_hwr_write_pane_g2_ParamLimits

0x109a,	// (0x0004c613) fep_hwr_write_pane_g2

0x10a7,	// (0x0004c620) fep_hwr_write_pane_g3_ParamLimits

0x10a7,	// (0x0004c620) fep_hwr_write_pane_g3

0xb7ba,	// (0x00056d33) fep_hwr_write_pane_g4_ParamLimits

0xb7ba,	// (0x00056d33) fep_hwr_write_pane_g4

0x0005,

0xfaeb,	// (0x0005b064) fep_hwr_write_pane_g_ParamLimits

0xfaeb,	// (0x0005b064) fep_hwr_write_pane_g

0xcf46,	// (0x000584bf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcf46,	// (0x000584bf) bg_fep_hwr_candidate_pane_g2

0x10ca,	// (0x0004c643) cell_hwr_candidate_pane_ParamLimits

0x10ca,	// (0x0004c643) cell_hwr_candidate_pane

0x110c,	// (0x0004c685) fep_hwr_candidate_pane_g1_ParamLimits

0x4891,	// (0x0004fe0a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4891,	// (0x0004fe0a) bg_popup_fep_shadow_pane_cp2

0x4a21,	// (0x0004ff9a) fep_vkb_top_pane_g4_ParamLimits

0x4a21,	// (0x0004ff9a) fep_vkb_top_pane_g4

0x4a67,	// (0x0004ffe0) fep_vkb_side_pane_g2_ParamLimits

0x4a67,	// (0x0004ffe0) fep_vkb_side_pane_g2

0x8990,	// (0x00053f09) list_setting_pane_t4_ParamLimits

0x8990,	// (0x00053f09) list_setting_pane_t4

0x8a2a,	// (0x00053fa3) list_setting_number_pane_t5_ParamLimits

0x8a2a,	// (0x00053fa3) list_setting_number_pane_t5

0xbff6,	// (0x0005756f) list_double_heading_pane_cp2_ParamLimits

0xbff6,	// (0x0005756f) list_double_heading_pane_cp2

0xd0ea,	// (0x00058663) list_double_heading_pane_g1_cp2_ParamLimits

0xd0ea,	// (0x00058663) list_double_heading_pane_g1_cp2

0x4d7c,	// (0x000502f5) list_double_heading_pane_g2_cp2_ParamLimits

0x4d7c,	// (0x000502f5) list_double_heading_pane_g2_cp2

0x4d90,	// (0x00050309) list_double_heading_pane_t1_cp2_ParamLimits

0x4d90,	// (0x00050309) list_double_heading_pane_t1_cp2

0x4da6,	// (0x0005031f) list_double_heading_pane_t2_cp2_ParamLimits

0x4da6,	// (0x0005031f) list_double_heading_pane_t2_cp2

0x8ea5,	// (0x0005441e) aid_value_unit2

0xe842,	// (0x00059dbb) popup_preview_fixed_window

0x95bc,	// (0x00054b35) bg_popup_preview_window_pane_cp02

0x4db8,	// (0x00050331) list_preview_fixed_pane

0x4dfe,	// (0x00050377) list_empty_pane_fp_ParamLimits

0x4dfe,	// (0x00050377) list_empty_pane_fp

0x4dfe,	// (0x00050377) list_single_cale_day_pane_fp_ParamLimits

0x4dfe,	// (0x00050377) list_single_cale_day_pane_fp

0x4dfe,	// (0x00050377) list_single_graphic_heading_pane_fp_ParamLimits

0x4dfe,	// (0x00050377) list_single_graphic_heading_pane_fp

0x4dfe,	// (0x00050377) list_single_graphic_pane_fp_ParamLimits

0x4dfe,	// (0x00050377) list_single_graphic_pane_fp

0x4dfe,	// (0x00050377) list_single_heading_pane_fp_ParamLimits

0x4dfe,	// (0x00050377) list_single_heading_pane_fp

0x4dfe,	// (0x00050377) list_single_pane_fp_ParamLimits

0x4dfe,	// (0x00050377) list_single_pane_fp

0x4e14,	// (0x0005038d) list_single_pane_fp_g1_ParamLimits

0x4e14,	// (0x0005038d) list_single_pane_fp_g1

0xd0f6,	// (0x0005866f) list_single_pane_fp_g2_ParamLimits

0xd0f6,	// (0x0005866f) list_single_pane_fp_g2

0x4ed6,	// (0x0005044f) list_single_pane_fp_g3_ParamLimits

0x4ed6,	// (0x0005044f) list_single_pane_fp_g3

0x4e20,	// (0x00050399) list_single_pane_fp_g4_ParamLimits

0x4e20,	// (0x00050399) list_single_pane_fp_g4

0x0003,

0xfb4d,	// (0x0005b0c6) list_single_pane_fp_g_ParamLimits

0xfb4d,	// (0x0005b0c6) list_single_pane_fp_g

0xed18,	// (0x0005a291) list_single_pane_fp_t1_ParamLimits

0xed18,	// (0x0005a291) list_single_pane_fp_t1

0xed2f,	// (0x0005a2a8) list_single_graphic_pane_fp_g1_ParamLimits

0xed2f,	// (0x0005a2a8) list_single_graphic_pane_fp_g1

0x4e14,	// (0x0005038d) list_single_graphic_pane_fp_g2_ParamLimits

0x4e14,	// (0x0005038d) list_single_graphic_pane_fp_g2

0xd0f6,	// (0x0005866f) list_single_graphic_pane_fp_g3_ParamLimits

0xd0f6,	// (0x0005866f) list_single_graphic_pane_fp_g3

0x4ed6,	// (0x0005044f) list_single_graphic_pane_fp_g4_ParamLimits

0x4ed6,	// (0x0005044f) list_single_graphic_pane_fp_g4

0x4e20,	// (0x00050399) list_single_graphic_pane_fp_g5_ParamLimits

0x4e20,	// (0x00050399) list_single_graphic_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b0cf) list_single_graphic_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b0cf) list_single_graphic_pane_fp_g

0xed3b,	// (0x0005a2b4) list_single_graphic_pane_fp_t1_ParamLimits

0xed3b,	// (0x0005a2b4) list_single_graphic_pane_fp_t1

0xed2f,	// (0x0005a2a8) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xed2f,	// (0x0005a2a8) list_single_graphic_heading_pane_fp_g1

0x4e14,	// (0x0005038d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e14,	// (0x0005038d) list_single_graphic_heading_pane_fp_g2

0xd0f6,	// (0x0005866f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd0f6,	// (0x0005866f) list_single_graphic_heading_pane_fp_g3

0x4ed6,	// (0x0005044f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4ed6,	// (0x0005044f) list_single_graphic_heading_pane_fp_g4

0x4e20,	// (0x00050399) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e20,	// (0x00050399) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b0cf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b0cf) list_single_graphic_heading_pane_fp_g

0xed51,	// (0x0005a2ca) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xed51,	// (0x0005a2ca) list_single_graphic_heading_pane_fp_t1

0xed67,	// (0x0005a2e0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xed67,	// (0x0005a2e0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb61,	// (0x0005b0da) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb61,	// (0x0005b0da) list_single_graphic_heading_pane_fp_t

0xed79,	// (0x0005a2f2) list_single_cale_day_pane_fp_g1_ParamLimits

0xed79,	// (0x0005a2f2) list_single_cale_day_pane_fp_g1

0x4e2c,	// (0x000503a5) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e2c,	// (0x000503a5) list_single_cale_day_pane_fp_g2

0x1198,	// (0x0004c711) list_single_cale_day_pane_fp_g3_ParamLimits

0x1198,	// (0x0004c711) list_single_cale_day_pane_fp_g3

0x11c0,	// (0x0004c739) list_single_cale_day_pane_fp_g4_ParamLimits

0x11c0,	// (0x0004c739) list_single_cale_day_pane_fp_g4

0x11e4,	// (0x0004c75d) list_single_cale_day_pane_fp_g5_ParamLimits

0x11e4,	// (0x0004c75d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb66,	// (0x0005b0df) list_single_cale_day_pane_fp_g_ParamLimits

0xfb66,	// (0x0005b0df) list_single_cale_day_pane_fp_g

0xedb1,	// (0x0005a32a) list_single_cale_day_pane_fp_t1_ParamLimits

0xedb1,	// (0x0005a32a) list_single_cale_day_pane_fp_t1

0xedd7,	// (0x0005a350) list_single_cale_day_pane_fp_t2_ParamLimits

0xedd7,	// (0x0005a350) list_single_cale_day_pane_fp_t2

0xedf0,	// (0x0005a369) list_single_cale_day_pane_fp_t3_ParamLimits

0xedf0,	// (0x0005a369) list_single_cale_day_pane_fp_t3

0x0002,

0xfb71,	// (0x0005b0ea) list_single_cale_day_pane_fp_t_ParamLimits

0xfb71,	// (0x0005b0ea) list_single_cale_day_pane_fp_t

0x4e14,	// (0x0005038d) list_empty_pane_fp_g1_ParamLimits

0x4e14,	// (0x0005038d) list_empty_pane_fp_g1

0xee09,	// (0x0005a382) list_empty_pane_fp_t1

0xee17,	// (0x0005a390) list_empty_pane_fp_t2

0x0001,

0xfb78,	// (0x0005b0f1) list_empty_pane_fp_t

0x4e14,	// (0x0005038d) list_single_heading_pane_fp_g1_ParamLimits

0x4e14,	// (0x0005038d) list_single_heading_pane_fp_g1

0xd0f6,	// (0x0005866f) list_single_heading_pane_fp_g2_ParamLimits

0xd0f6,	// (0x0005866f) list_single_heading_pane_fp_g2

0x4ed6,	// (0x0005044f) list_single_heading_pane_fp_g3_ParamLimits

0x4ed6,	// (0x0005044f) list_single_heading_pane_fp_g3

0x0002,

0xfb7d,	// (0x0005b0f6) list_single_heading_pane_fp_g_ParamLimits

0xfb7d,	// (0x0005b0f6) list_single_heading_pane_fp_g

0xee25,	// (0x0005a39e) list_single_heading_pane_fp_t1_ParamLimits

0xee25,	// (0x0005a39e) list_single_heading_pane_fp_t1

0xee37,	// (0x0005a3b0) list_single_heading_pane_fp_t2_ParamLimits

0xee37,	// (0x0005a3b0) list_single_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x0005b0fd) list_single_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x0005b0fd) list_single_heading_pane_fp_t

0x9d9d,	// (0x00055316) aid_size_cell_fast

0x953c,	// (0x00054ab5) soft_indicator_pane_cp1_t1

0x9dd7,	// (0x00055350) cell_app_pane_cp2_ParamLimits

0x9dd7,	// (0x00055350) cell_app_pane_cp2

0x0f5c,	// (0x0004c4d5) fep_hwr_candidate_drop_down_list_pane

0xcf54,	// (0x000584cd) fep_hwr_candidate_pane_g3_ParamLimits

0xcf54,	// (0x000584cd) fep_hwr_candidate_pane_g3

0xcf61,	// (0x000584da) fep_hwr_candidate_pane_g4_ParamLimits

0xcf61,	// (0x000584da) fep_hwr_candidate_pane_g4

0x0002,

0xfaf8,	// (0x0005b071) fep_hwr_candidate_pane_g_ParamLimits

0xfaf8,	// (0x0005b071) fep_hwr_candidate_pane_g

0x4916,	// (0x0004fe8f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4916,	// (0x0004fe8f) fep_vkb_candidate_drop_down_list_pane

0x4d19,	// (0x00050292) fep_vkb_candidate_pane_g3

0x4d21,	// (0x0005029a) fep_vkb_candidate_pane_g4

0x0002,

0xfb25,	// (0x0005b09e) fep_vkb_candidate_pane_g

0x4a21,	// (0x0004ff9a) cell_hwr_candidate_pane_g1_ParamLimits

0x4e94,	// (0x0005040d) cell_hwr_candidate_pane_g3_ParamLimits

0x4e94,	// (0x0005040d) cell_hwr_candidate_pane_g3

0x4eb5,	// (0x0005042e) cell_hwr_candidate_pane_g4_ParamLimits

0x4eb5,	// (0x0005042e) cell_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0005b0b8) cell_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0005b0b8) cell_hwr_candidate_pane_g

0x4d38,	// (0x000502b1) cell_vkb_candidate_pane_g3_ParamLimits

0x4d38,	// (0x000502b1) cell_vkb_candidate_pane_g3

0x4d53,	// (0x000502cc) cell_vkb_candidate_pane_g4_ParamLimits

0x4d53,	// (0x000502cc) cell_vkb_candidate_pane_g4

0xd102,	// (0x0005867b) cell_app_pane_cp2_g1_ParamLimits

0xd102,	// (0x0005867b) cell_app_pane_cp2_g1

0x4e56,	// (0x000503cf) cell_app_pane_cp2_g2_ParamLimits

0x4e56,	// (0x000503cf) cell_app_pane_cp2_g2

0x0001,

0xfb89,	// (0x0005b102) cell_app_pane_cp2_g_ParamLimits

0xfb89,	// (0x0005b102) cell_app_pane_cp2_g

0x4e62,	// (0x000503db) cell_app_pane_cp2_t1_ParamLimits

0x4e62,	// (0x000503db) cell_app_pane_cp2_t1

0x9b9b,	// (0x00055114) grid_highlight_pane_cp1_ParamLimits

0x9b9b,	// (0x00055114) grid_highlight_pane_cp1

0x1208,	// (0x0004c781) cell_hwr_candidate_pane_cp1_ParamLimits

0x1208,	// (0x0004c781) cell_hwr_candidate_pane_cp1

0x4a21,	// (0x0004ff9a) fep_hwr_candidate_drop_down_list_pane_g1

0x4eea,	// (0x00050463) fep_hwr_candidate_drop_down_list_pane_g2

0x4ef7,	// (0x00050470) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b107) fep_hwr_candidate_drop_down_list_pane_g

0x1227,	// (0x0004c7a0) fep_hwr_candidate_drop_down_list_scroll_pane

0x1230,	// (0x0004c7a9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1230,	// (0x0004c7a9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x123d,	// (0x0004c7b6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x123d,	// (0x0004c7b6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x124a,	// (0x0004c7c3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x124a,	// (0x0004c7c3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d38,	// (0x000502b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d38,	// (0x000502b1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d53,	// (0x000502cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d53,	// (0x000502cc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1257,	// (0x0004c7d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1257,	// (0x0004c7d0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1272,	// (0x0004c7eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1272,	// (0x0004c7eb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x128d,	// (0x0004c806) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x128d,	// (0x0004c806) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb95,	// (0x0005b10e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb95,	// (0x0005b10e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e74,	// (0x000503ed) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e74,	// (0x000503ed) cell_vkb_candidate_pane_cp1

0x4a21,	// (0x0004ff9a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4a21,	// (0x0004ff9a) fep_vkb_candidate_drop_down_list_pane_g1

0x4eea,	// (0x00050463) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4eea,	// (0x00050463) fep_vkb_candidate_drop_down_list_pane_g2

0x4ef7,	// (0x00050470) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4ef7,	// (0x00050470) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8e,	// (0x0005b107) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8e,	// (0x0005b107) fep_vkb_candidate_drop_down_list_pane_g

0x4f04,	// (0x0005047d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4f04,	// (0x0005047d) fep_vkb_candidate_drop_down_list_scroll_pane

0x4f11,	// (0x0005048a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4f11,	// (0x0005048a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4f1e,	// (0x00050497) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4f1e,	// (0x00050497) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4f2a,	// (0x000504a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4f2a,	// (0x000504a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4e94,	// (0x0005040d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e94,	// (0x0005040d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4eb5,	// (0x0005042e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4eb5,	// (0x0005042e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4f36,	// (0x000504af) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4f36,	// (0x000504af) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f57,	// (0x000504d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f57,	// (0x000504d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f78,	// (0x000504f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f78,	// (0x000504f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba6,	// (0x0005b11f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba6,	// (0x0005b11f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9101,	// (0x0005467a) title_pane_g1_ParamLimits

0x9114,	// (0x0005468d) title_pane_g2_ParamLimits

0xf529,	// (0x0005aaa2) title_pane_g_ParamLimits

0xbfaf,	// (0x00057528) aid_call2_pane

0xbfb7,	// (0x00057530) aid_call_pane

0xbfbf,	// (0x00057538) popup_clock_analogue_window_g1

0xbfbf,	// (0x00057538) popup_clock_analogue_window_g2

0xf29c,	// (0x0005a815) popup_clock_analogue_window_g3

0xf2a5,	// (0x0005a81e) popup_clock_analogue_window_g4

0x8ec7,	// (0x00054440) popup_clock_analogue_window_g5

0x0004,

0xf6c9,	// (0x0005ac42) popup_clock_analogue_window_g

0xf2ad,	// (0x0005a826) popup_clock_analogue_window_t1

0xf2bb,	// (0x0005a834) clock_digital_number_pane_ParamLimits

0xf2bb,	// (0x0005a834) clock_digital_number_pane

0xf2c7,	// (0x0005a840) clock_digital_number_pane_cp02_ParamLimits

0xf2c7,	// (0x0005a840) clock_digital_number_pane_cp02

0xf2d3,	// (0x0005a84c) clock_digital_number_pane_cp03_ParamLimits

0xf2d3,	// (0x0005a84c) clock_digital_number_pane_cp03

0xf2df,	// (0x0005a858) clock_digital_number_pane_cp04_ParamLimits

0xf2df,	// (0x0005a858) clock_digital_number_pane_cp04

0xf2eb,	// (0x0005a864) clock_digital_separator_pane_ParamLimits

0xf2eb,	// (0x0005a864) clock_digital_separator_pane

0xf2f7,	// (0x0005a870) popup_clock_digital_window_t1_ParamLimits

0xf2f7,	// (0x0005a870) popup_clock_digital_window_t1

0x8ec7,	// (0x00054440) clock_digital_number_pane_g1

0x8ec7,	// (0x00054440) clock_digital_number_pane_g2

0x0001,

0xf6d4,	// (0x0005ac4d) clock_digital_number_pane_g

0x8ec7,	// (0x00054440) clock_digital_separator_pane_g1

0x8ec7,	// (0x00054440) clock_digital_separator_pane_g2

0x0001,

0xf6d4,	// (0x0005ac4d) clock_digital_separator_pane_g

0xaed8,	// (0x00056451) aid_fill_nsta_ParamLimits

0xb00e,	// (0x00056587) indicator_nsta_pane_ParamLimits

0x1fb5,	// (0x0004d52e) popup_clock_analogue_window

0x1fb5,	// (0x0004d52e) popup_clock_digital_window

0xccfa,	// (0x00058273) grid_indicator_nsta_pane_ParamLimits

0x41a7,	// (0x0004f720) clock_nsta_pane_t2

0x0001,

0xfa78,	// (0x0005aff1) clock_nsta_pane_t

0xf27d,	// (0x0005a7f6) aid_size_max_handle

0xa03c,	// (0x000555b5) aid_size_min_handle

0xc3fc,	// (0x00057975) editor_scroll_pane

0x4f93,	// (0x0005050c) ex_editor_pane

0x9d19,	// (0x00055292) scroll_pane_cp13

0x9af2,	// (0x0005506b) scroll_pane_cp14

0xbfee,	// (0x00057567) scroll_pane_cp36

0xa235,	// (0x000557ae) list_single_graphic_hl_pane_cp2_ParamLimits

0xa235,	// (0x000557ae) list_single_graphic_hl_pane_cp2

0xb714,	// (0x00056c8d) list_single_graphic_hl_pane_ParamLimits

0xb714,	// (0x00056c8d) list_single_graphic_hl_pane

0x8d3f,	// (0x000542b8) aid_size_min_hl_cp1

0x4f9b,	// (0x00050514) list_highlight_pane_cp34_ParamLimits

0x4f9b,	// (0x00050514) list_highlight_pane_cp34

0x4fac,	// (0x00050525) list_single_graphic_hl_pane_g1_ParamLimits

0x4fac,	// (0x00050525) list_single_graphic_hl_pane_g1

0x8d48,	// (0x000542c1) list_single_graphic_hl_pane_g2_ParamLimits

0x8d48,	// (0x000542c1) list_single_graphic_hl_pane_g2

0x8d48,	// (0x000542c1) list_single_graphic_hl_pane_g3_ParamLimits

0x8d48,	// (0x000542c1) list_single_graphic_hl_pane_g3

0xc387,	// (0x00057900) list_single_graphic_hl_pane_g4_ParamLimits

0xc387,	// (0x00057900) list_single_graphic_hl_pane_g4

0xb7cf,	// (0x00056d48) list_single_graphic_hl_pane_g5_ParamLimits

0xb7cf,	// (0x00056d48) list_single_graphic_hl_pane_g5

0x0004,

0xfbb7,	// (0x0005b130) list_single_graphic_hl_pane_g_ParamLimits

0xfbb7,	// (0x0005b130) list_single_graphic_hl_pane_g

0x8d54,	// (0x000542cd) list_single_graphic_hl_pane_t1_ParamLimits

0x8d54,	// (0x000542cd) list_single_graphic_hl_pane_t1

0x4fb9,	// (0x00050532) aid_size_min_hl_cp2

0x4fc2,	// (0x0005053b) list_highlight_pane_cp34_cp2_ParamLimits

0x4fc2,	// (0x0005053b) list_highlight_pane_cp34_cp2

0x4fac,	// (0x00050525) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4fac,	// (0x00050525) list_single_graphic_hl_pane_g1_cp2

0x4fcf,	// (0x00050548) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4fcf,	// (0x00050548) list_single_graphic_hl_pane_g2_cp2

0xd120,	// (0x00058699) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd120,	// (0x00058699) list_single_graphic_hl_pane_g3_cp2

0xbf96,	// (0x0005750f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf96,	// (0x0005750f) list_single_graphic_hl_pane_g4_cp2

0x4fe9,	// (0x00050562) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4fe9,	// (0x00050562) list_single_graphic_hl_pane_g5_cp2

0xa5fb,	// (0x00055b74) control_pane_g4_ParamLimits

0xa5fb,	// (0x00055b74) control_pane_g4

0x9d7f,	// (0x000552f8) bg_popup_sub_pane_cp10_ParamLimits

0x47bb,	// (0x0004fd34) list_choice_list_pane_ParamLimits

0x47ca,	// (0x0004fd43) scroll_pane_cp23

0x95bc,	// (0x00054b35) bg_popup_preview_window_pane_cp02_ParamLimits

0x4db8,	// (0x00050331) list_preview_fixed_pane_ParamLimits

0x4dce,	// (0x00050347) list_preview_fixed_pane_cp_ParamLimits

0x4dce,	// (0x00050347) list_preview_fixed_pane_cp

0x4dda,	// (0x00050353) popup_preview_fixed_window_g1_ParamLimits

0x4dda,	// (0x00050353) popup_preview_fixed_window_g1

0x4de6,	// (0x0005035f) popup_preview_fixed_window_g2_ParamLimits

0x4de6,	// (0x0005035f) popup_preview_fixed_window_g2

0x0002,

0xfb46,	// (0x0005b0bf) popup_preview_fixed_window_g_ParamLimits

0xfb46,	// (0x0005b0bf) popup_preview_fixed_window_g

0xf1f1,	// (0x0005a76a) aid_navi_side_left_pane_ParamLimits

0xf206,	// (0x0005a77f) aid_navi_side_right_pane_ParamLimits

0xf21e,	// (0x0005a797) navi_icon_pane_stacon_ParamLimits

0xf232,	// (0x0005a7ab) navi_navi_pane_stacon_ParamLimits

0xf21e,	// (0x0005a797) navi_text_pane_stacon_ParamLimits

0x8ebd,	// (0x00054436) main_text_info_pane

0x5013,	// (0x0005058c) listscroll_text_info_pane

0x501b,	// (0x00050594) list_text_info_pane_ParamLimits

0x501b,	// (0x00050594) list_text_info_pane

0x502a,	// (0x000505a3) scroll_pane_cp24_ParamLimits

0x502a,	// (0x000505a3) scroll_pane_cp24

0xd12e,	// (0x000586a7) list_text_info_pane_t1_ParamLimits

0xd12e,	// (0x000586a7) list_text_info_pane_t1

0xa79f,	// (0x00055d18) popup_fast_swap2_window_ParamLimits

0xa79f,	// (0x00055d18) popup_fast_swap2_window

0x507c,	// (0x000505f5) aid_size_cell_fast2

0x8ebd,	// (0x00054436) bg_popup_window_pane_cp17

0x265a,	// (0x0004dbd3) heading_pane_cp2

0x2662,	// (0x0004dbdb) listscroll_fast2_pane

0x5086,	// (0x000505ff) grid_fast2_pane

0x5090,	// (0x00050609) listscroll_fast2_pane_g1

0x5098,	// (0x00050611) listscroll_fast2_pane_g2

0x0001,

0xfbc2,	// (0x0005b13b) listscroll_fast2_pane_g

0x9d19,	// (0x00055292) scroll_pane_cp26

0x50a2,	// (0x0005061b) cell_fast2_pane_ParamLimits

0x50a2,	// (0x0005061b) cell_fast2_pane

0x50b7,	// (0x00050630) cell_fast2_pane_g1

0x50c0,	// (0x00050639) cell_fast2_pane_g2

0x50c9,	// (0x00050642) cell_fast2_pane_g3

0x0002,

0xfbc7,	// (0x0005b140) cell_fast2_pane_g

0x991c,	// (0x00054e95) grid_highlight_pane_cp9

0x9931,	// (0x00054eaa) main_eswt_pane_ParamLimits

0x9931,	// (0x00054eaa) main_eswt_pane

0x503f,	// (0x000505b8) list_single_text_info_pane

0x50d1,	// (0x0005064a) eswt_ctrl_button_pane

0x50d1,	// (0x0005064a) eswt_ctrl_canvas_pane

0xd14a,	// (0x000586c3) eswt_ctrl_combo_pane

0x50d1,	// (0x0005064a) eswt_ctrl_default_pane

0x50d1,	// (0x0005064a) eswt_ctrl_label_pane

0x50e1,	// (0x0005065a) eswt_ctrl_wait_pane

0xd152,	// (0x000586cb) eswt_shell_pane

0x8ebd,	// (0x00054436) listscroll_eswt_app_pane

0x5109,	// (0x00050682) popup_eswt_tasktip_window_ParamLimits

0x5109,	// (0x00050682) popup_eswt_tasktip_window

0x2267,	// (0x0004d7e0) bg_popup_window_pane_cp18

0x511a,	// (0x00050693) eswt_control_pane_g1_ParamLimits

0x511a,	// (0x00050693) eswt_control_pane_g1

0x5127,	// (0x000506a0) eswt_control_pane_g2_ParamLimits

0x5127,	// (0x000506a0) eswt_control_pane_g2

0x5134,	// (0x000506ad) eswt_control_pane_g3_ParamLimits

0x5134,	// (0x000506ad) eswt_control_pane_g3

0x5141,	// (0x000506ba) eswt_control_pane_g4_ParamLimits

0x5141,	// (0x000506ba) eswt_control_pane_g4

0x0003,

0xfbce,	// (0x0005b147) eswt_control_pane_g_ParamLimits

0xfbce,	// (0x0005b147) eswt_control_pane_g

0x9b9b,	// (0x00055114) bg_button_pane_ParamLimits

0x9b9b,	// (0x00055114) bg_button_pane

0x9931,	// (0x00054eaa) common_borders_pane_copy2_ParamLimits

0x9931,	// (0x00054eaa) common_borders_pane_copy2

0x514e,	// (0x000506c7) control_button_pane_g1_ParamLimits

0x514e,	// (0x000506c7) control_button_pane_g1

0x515a,	// (0x000506d3) control_button_pane_g2_ParamLimits

0x515a,	// (0x000506d3) control_button_pane_g2

0x5166,	// (0x000506df) control_button_pane_g3_ParamLimits

0x5166,	// (0x000506df) control_button_pane_g3

0x0002,

0xfbd7,	// (0x0005b150) control_button_pane_g_ParamLimits

0xfbd7,	// (0x0005b150) control_button_pane_g

0x517a,	// (0x000506f3) control_button_pane_t1

0x5188,	// (0x00050701) control_button_pane_t2

0x0001,

0xfbde,	// (0x0005b157) control_button_pane_t

0x21db,	// (0x0004d754) bg_button_pane_g1

0x21e3,	// (0x0004d75c) bg_button_pane_g2

0x21eb,	// (0x0004d764) bg_button_pane_g3

0x21f3,	// (0x0004d76c) bg_button_pane_g4

0x21fb,	// (0x0004d774) bg_button_pane_g5

0x2203,	// (0x0004d77c) bg_button_pane_g6

0x220b,	// (0x0004d784) bg_button_pane_g7

0x2213,	// (0x0004d78c) bg_button_pane_g8

0x221b,	// (0x0004d794) bg_button_pane_g9

0x0008,

0xf82b,	// (0x0005ada4) bg_button_pane_g

0x4776,	// (0x0004fcef) common_borders_pane_ParamLimits

0x4776,	// (0x0004fcef) common_borders_pane

0x511a,	// (0x00050693) eswt_control_pane_g1_copy1_ParamLimits

0x511a,	// (0x00050693) eswt_control_pane_g1_copy1

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy1_ParamLimits

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy1

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy1_ParamLimits

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy1

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy1_ParamLimits

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy1

0x47b1,	// (0x0004fd2a) bg_eswt_ctrl_canvas_pane_g1

0x4776,	// (0x0004fcef) common_borders_pane_cp2_ParamLimits

0x4776,	// (0x0004fcef) common_borders_pane_cp2

0x4776,	// (0x0004fcef) common_borders_pane_cp3_ParamLimits

0x4776,	// (0x0004fcef) common_borders_pane_cp3

0x5196,	// (0x0005070f) separator_horizontal_pane

0x519e,	// (0x00050717) separator_vertical_pane

0x511a,	// (0x00050693) eswt_control_pane_g1_copy2_ParamLimits

0x511a,	// (0x00050693) eswt_control_pane_g1_copy2

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy2_ParamLimits

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy2

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy2_ParamLimits

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy2

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy2_ParamLimits

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy2

0x8ebd,	// (0x00054436) common_borders_pane_cp4

0x51a7,	// (0x00050720) separator_horizontal_pane_g1

0x51b0,	// (0x00050729) separator_horizontal_pane_g2

0x51b9,	// (0x00050732) separator_horizontal_pane_g3

0x0002,

0xfbe3,	// (0x0005b15c) separator_horizontal_pane_g

0x511a,	// (0x00050693) eswt_control_pane_g1_copy3_ParamLimits

0x511a,	// (0x00050693) eswt_control_pane_g1_copy3

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy3_ParamLimits

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy3

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy3_ParamLimits

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy3

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy3_ParamLimits

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy3

0x8ebd,	// (0x00054436) common_borders_pane_cp5

0x51c2,	// (0x0005073b) separator_vertical_pane_g1

0x51cb,	// (0x00050744) separator_vertical_pane_g2

0x51d4,	// (0x0005074d) separator_vertical_pane_g3

0x0002,

0xfbea,	// (0x0005b163) separator_vertical_pane_g

0x511a,	// (0x00050693) eswt_control_pane_g1_copy4_ParamLimits

0x511a,	// (0x00050693) eswt_control_pane_g1_copy4

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy4_ParamLimits

0x5127,	// (0x000506a0) eswt_control_pane_g2_copy4

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy4_ParamLimits

0x5134,	// (0x000506ad) eswt_control_pane_g3_copy4

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy4_ParamLimits

0x5141,	// (0x000506ba) eswt_control_pane_g4_copy4

0xd172,	// (0x000586eb) eswt_ctrl_combo_button_pane

0xd17a,	// (0x000586f3) eswt_ctrl_input_pane

0xd182,	// (0x000586fb) popup_choice_list_window_cp70

0xd18a,	// (0x00058703) eswt_ctrl_input_pane_t1

0x8ebd,	// (0x00054436) input_focus_pane_cp70

0x4776,	// (0x0004fcef) bg_button_pane_cp70_ParamLimits

0x4776,	// (0x0004fcef) bg_button_pane_cp70

0xd198,	// (0x00058711) eswt_ctrl_combo_button_pane_g1

0x520b,	// (0x00050784) wait_bar_pane_cp70

0x2267,	// (0x0004d7e0) bg_popup_window_pane_cp70_ParamLimits

0x2267,	// (0x0004d7e0) bg_popup_window_pane_cp70

0x5213,	// (0x0005078c) popup_eswt_tasktip_window_t1

0x5229,	// (0x000507a2) wait_bar_pane_cp71_ParamLimits

0x5229,	// (0x000507a2) wait_bar_pane_cp71

0x5235,	// (0x000507ae) grid_eswt_app_pane

0xa081,	// (0x000555fa) scroll_pane_cp70

0xd1a0,	// (0x00058719) cell_eswt_app_pane_ParamLimits

0xd1a0,	// (0x00058719) cell_eswt_app_pane

0xd1ca,	// (0x00058743) cell_eswt_app_pane_g1_ParamLimits

0xd1ca,	// (0x00058743) cell_eswt_app_pane_g1

0xd1f9,	// (0x00058772) cell_eswt_app_pane_g2_ParamLimits

0xd1f9,	// (0x00058772) cell_eswt_app_pane_g2

0x0001,

0xfbf1,	// (0x0005b16a) cell_eswt_app_pane_g_ParamLimits

0xfbf1,	// (0x0005b16a) cell_eswt_app_pane_g

0xd21d,	// (0x00058796) cell_eswt_app_pane_t1_ParamLimits

0xd21d,	// (0x00058796) cell_eswt_app_pane_t1

0x52f3,	// (0x0005086c) grid_highlight_pane_cp70_ParamLimits

0x52f3,	// (0x0005086c) grid_highlight_pane_cp70

0xc323,	// (0x0005789c) set_content_pane_g1

0xa58d,	// (0x00055b06) status_small_volume_pane

0xb7e3,	// (0x00056d5c) status_small_volume_pane_g1

0xb7eb,	// (0x00056d64) volume_small2_pane

0xb7f4,	// (0x00056d6d) volume_small2_pane_g1

0xb7fd,	// (0x00056d76) volume_small2_pane_g2

0xb806,	// (0x00056d7f) volume_small2_pane_g3

0xb80f,	// (0x00056d88) volume_small2_pane_g4

0xb818,	// (0x00056d91) volume_small2_pane_g5

0xb821,	// (0x00056d9a) volume_small2_pane_g6

0xb82a,	// (0x00056da3) volume_small2_pane_g7

0xb833,	// (0x00056dac) volume_small2_pane_g8

0xb83c,	// (0x00056db5) volume_small2_pane_g9

0xb845,	// (0x00056dbe) volume_small2_pane_g10

0x0009,

0xfbf6,	// (0x0005b16f) volume_small2_pane_g

0x4b69,	// (0x000500e2) fep_vkb_top_text_pane_g1_ParamLimits

0xd092,	// (0x0005860b) fep_vkb_top_text_pane_t1_ParamLimits

0x4df2,	// (0x0005036b) popup_preview_fixed_window_g3_ParamLimits

0x4df2,	// (0x0005036b) popup_preview_fixed_window_g3

0xae16,	// (0x0005638f) popup_toolbar_trans_pane

0xc989,	// (0x00057f02) aid_height_set_list_ParamLimits

0x35b6,	// (0x0004eb2f) aid_size_parent_ParamLimits

0x9d7f,	// (0x000552f8) list_highlight_pane_cp2_ParamLimits

0xc323,	// (0x0005789c) set_content_pane_g1_ParamLimits

0xcaf1,	// (0x0005806a) list_single_image_pane_ParamLimits

0xcaf1,	// (0x0005806a) list_single_image_pane

0xd24f,	// (0x000587c8) aid_size_cell_image_ParamLimits

0xd24f,	// (0x000587c8) aid_size_cell_image

0xd25c,	// (0x000587d5) grid_single_image_pane_ParamLimits

0xd25c,	// (0x000587d5) grid_single_image_pane

0xd0f6,	// (0x0005866f) list_single_image_pane_g1_ParamLimits

0xd0f6,	// (0x0005866f) list_single_image_pane_g1

0x4ed6,	// (0x0005044f) list_single_image_pane_g2_ParamLimits

0x4ed6,	// (0x0005044f) list_single_image_pane_g2

0x0001,

0xfc0b,	// (0x0005b184) list_single_image_pane_g_ParamLimits

0xfc0b,	// (0x0005b184) list_single_image_pane_g

0x5318,	// (0x00050891) list_single_image_pane_t1_ParamLimits

0x5318,	// (0x00050891) list_single_image_pane_t1

0xd268,	// (0x000587e1) cell_image_list_pane_ParamLimits

0xd268,	// (0x000587e1) cell_image_list_pane

0xd27c,	// (0x000587f5) cell_image_list_pane_g1

0xd285,	// (0x000587fe) cell_image_list_pane_g2

0x0001,

0xfc10,	// (0x0005b189) cell_image_list_pane_g

0xd28e,	// (0x00058807) aid_size_cell_tb_trans_pane

0x9b9b,	// (0x00055114) bg_tb_trans_pane

0xd2a0,	// (0x00058819) grid_tb_trans_pane

0x21db,	// (0x0004d754) bg_tb_trans_pane_g1

0x21e3,	// (0x0004d75c) bg_tb_trans_pane_g2

0x21eb,	// (0x0004d764) bg_tb_trans_pane_g3

0x21f3,	// (0x0004d76c) bg_tb_trans_pane_g4

0x21fb,	// (0x0004d774) bg_tb_trans_pane_g5

0x2213,	// (0x0004d78c) bg_tb_trans_pane_g6

0x221b,	// (0x0004d794) bg_tb_trans_pane_g7

0x2203,	// (0x0004d77c) bg_tb_trans_pane_g8

0x220b,	// (0x0004d784) bg_tb_trans_pane_g9

0x0008,

0xfc15,	// (0x0005b18e) bg_tb_trans_pane_g

0xd2b4,	// (0x0005882d) cell_toolbar_trans_pane_ParamLimits

0xd2b4,	// (0x0005882d) cell_toolbar_trans_pane

0x47b1,	// (0x0004fd2a) cell_toolbar_trans_pane_g1

0xcdc3,	// (0x0005833c) list_form2_midp_pane_t1

0xcdd1,	// (0x0005834a) list_form2_midp_pane_t2

0x0001,

0xfabe,	// (0x0005b037) list_form2_midp_pane_t

0x4398,	// (0x0004f911) scroll_pane_cp51_ParamLimits

0x4554,	// (0x0004facd) form2_midp_wait_pane_g1

0x455d,	// (0x0004fad6) form2_midp_wait_pane_g2

0x4566,	// (0x0004fadf) form2_midp_wait_pane_g3

0x0002,

0xfad3,	// (0x0005b04c) form2_midp_wait_pane_g

0x9252,	// (0x000547cb) list_highlight_pane_cp21_ParamLimits

0x45ae,	// (0x0004fb27) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x45bd,	// (0x0004fb36) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x376a,	// (0x0004ece3) list_single_2graphic_im_pane_ParamLimits

0x376a,	// (0x0004ece3) list_single_2graphic_im_pane

0xd2da,	// (0x00058853) list_single_2graphic_im_pane_g1_ParamLimits

0xd2da,	// (0x00058853) list_single_2graphic_im_pane_g1

0xd2eb,	// (0x00058864) list_single_2graphic_im_pane_g2_ParamLimits

0xd2eb,	// (0x00058864) list_single_2graphic_im_pane_g2

0xd2f7,	// (0x00058870) list_single_2graphic_im_pane_g3_ParamLimits

0xd2f7,	// (0x00058870) list_single_2graphic_im_pane_g3

0x0003,

0xfc28,	// (0x0005b1a1) list_single_2graphic_im_pane_g_ParamLimits

0xfc28,	// (0x0005b1a1) list_single_2graphic_im_pane_g

0xd30b,	// (0x00058884) list_single_2graphic_im_pane_t1_ParamLimits

0xd30b,	// (0x00058884) list_single_2graphic_im_pane_t1

0x4dfe,	// (0x00050377) list_single_graphic_2heading_pane_fp_ParamLimits

0x4dfe,	// (0x00050377) list_single_graphic_2heading_pane_fp

0xed2f,	// (0x0005a2a8) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xed2f,	// (0x0005a2a8) list_single_graphic_2heading_pane_fp_g1

0x4e14,	// (0x0005038d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e14,	// (0x0005038d) list_single_graphic_2heading_pane_fp_g2

0xd0f6,	// (0x0005866f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd0f6,	// (0x0005866f) list_single_graphic_2heading_pane_fp_g3

0x4ed6,	// (0x0005044f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4ed6,	// (0x0005044f) list_single_graphic_2heading_pane_fp_g4

0x4e20,	// (0x00050399) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e20,	// (0x00050399) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb56,	// (0x0005b0cf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb56,	// (0x0005b0cf) list_single_graphic_2heading_pane_fp_g

0xee4d,	// (0x0005a3c6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xee4d,	// (0x0005a3c6) list_single_graphic_2heading_pane_fp_t1

0xed67,	// (0x0005a2e0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xed67,	// (0x0005a2e0) list_single_graphic_2heading_pane_fp_t2

0xee63,	// (0x0005a3dc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xee63,	// (0x0005a3dc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc31,	// (0x0005b1aa) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc31,	// (0x0005b1aa) list_single_graphic_2heading_pane_fp_t

0x483d,	// (0x0004fdb6) fep_hwr_write_pane_g5_ParamLimits

0x483d,	// (0x0004fdb6) fep_hwr_write_pane_g5

0x4849,	// (0x0004fdc2) fep_hwr_write_pane_g6_ParamLimits

0x4849,	// (0x0004fdc2) fep_hwr_write_pane_g6

0xd152,	// (0x000586cb) eswt_shell_pane_ParamLimits

0x2267,	// (0x0004d7e0) bg_popup_window_pane_cp18_ParamLimits

0x34fe,	// (0x0004ea77) heading_pane_cp70

0x5213,	// (0x0005078c) popup_eswt_tasktip_window_t1_ParamLimits

0xaf33,	// (0x000564ac) aid_touch_tab_arrow_left

0xaf49,	// (0x000564c2) aid_touch_tab_arrow_right

0x912c,	// (0x000546a5) title_pane_g3_ParamLimits

0x912c,	// (0x000546a5) title_pane_g3

0x9b5a,	// (0x000550d3) set_value_pane_g1

0xae16,	// (0x0005638f) popup_toolbar_trans_pane_ParamLimits

0xd28e,	// (0x00058807) aid_size_cell_tb_trans_pane_ParamLimits

0x9b9b,	// (0x00055114) bg_tb_trans_pane_ParamLimits

0xd2a0,	// (0x00058819) grid_tb_trans_pane_ParamLimits

0x95bc,	// (0x00054b35) cont_note_pane_ParamLimits

0x95bc,	// (0x00054b35) cont_note_pane

0x9931,	// (0x00054eaa) cont_snote2_single_text_pane_ParamLimits

0x9931,	// (0x00054eaa) cont_snote2_single_text_pane

0x9931,	// (0x00054eaa) cont_snote2_single_graphic_pane_ParamLimits

0x9931,	// (0x00054eaa) cont_snote2_single_graphic_pane

0x2881,	// (0x0004ddfa) cont_note_wait_pane_ParamLimits

0x2881,	// (0x0004ddfa) cont_note_wait_pane

0x2881,	// (0x0004ddfa) cont_note_image_pane_ParamLimits

0x2881,	// (0x0004ddfa) cont_note_image_pane

0x540e,	// (0x00050987) popup_note2_window_g1_ParamLimits

0x540e,	// (0x00050987) popup_note2_window_g1

0xd349,	// (0x000588c2) popup_note2_window_t1_ParamLimits

0xd349,	// (0x000588c2) popup_note2_window_t1

0xd38e,	// (0x00058907) popup_note2_window_t2_ParamLimits

0xd38e,	// (0x00058907) popup_note2_window_t2

0xd3d3,	// (0x0005894c) popup_note2_window_t3_ParamLimits

0xd3d3,	// (0x0005894c) popup_note2_window_t3

0x550e,	// (0x00050a87) popup_note2_window_t4_ParamLimits

0x550e,	// (0x00050a87) popup_note2_window_t4

0x9640,	// (0x00054bb9) popup_note2_window_t5_ParamLimits

0x9640,	// (0x00054bb9) popup_note2_window_t5

0x0004,

0xfc3d,	// (0x0005b1b6) popup_note2_window_t_ParamLimits

0xfc3d,	// (0x0005b1b6) popup_note2_window_t

0x553d,	// (0x00050ab6) popup_note2_image_window_g1_ParamLimits

0x553d,	// (0x00050ab6) popup_note2_image_window_g1

0xd418,	// (0x00058991) popup_note2_image_window_g2_ParamLimits

0xd418,	// (0x00058991) popup_note2_image_window_g2

0x0001,

0xfc48,	// (0x0005b1c1) popup_note2_image_window_g_ParamLimits

0xfc48,	// (0x0005b1c1) popup_note2_image_window_g

0x555b,	// (0x00050ad4) popup_note2_image_window_t1_ParamLimits

0x555b,	// (0x00050ad4) popup_note2_image_window_t1

0x5573,	// (0x00050aec) popup_note2_image_window_t2_ParamLimits

0x5573,	// (0x00050aec) popup_note2_image_window_t2

0x558b,	// (0x00050b04) popup_note2_image_window_t3_ParamLimits

0x558b,	// (0x00050b04) popup_note2_image_window_t3

0x0002,

0xfc4d,	// (0x0005b1c6) popup_note2_image_window_t_ParamLimits

0xfc4d,	// (0x0005b1c6) popup_note2_image_window_t

0x288f,	// (0x0004de08) popup_note2_wait_window_g1_ParamLimits

0x288f,	// (0x0004de08) popup_note2_wait_window_g1

0x289b,	// (0x0004de14) popup_note2_wait_window_g2_ParamLimits

0x289b,	// (0x0004de14) popup_note2_wait_window_g2

0x28a7,	// (0x0004de20) popup_note2_wait_window_g3_ParamLimits

0x28a7,	// (0x0004de20) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x0005ad86) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x0005ad86) popup_note2_wait_window_g

0x55a7,	// (0x00050b20) popup_note2_wait_window_t1_ParamLimits

0x55a7,	// (0x00050b20) popup_note2_wait_window_t1

0x55c5,	// (0x00050b3e) popup_note2_wait_window_t2_ParamLimits

0x55c5,	// (0x00050b3e) popup_note2_wait_window_t2

0x55e3,	// (0x00050b5c) popup_note2_wait_window_t3_ParamLimits

0x55e3,	// (0x00050b5c) popup_note2_wait_window_t3

0x55f5,	// (0x00050b6e) popup_note2_wait_window_t4_ParamLimits

0x55f5,	// (0x00050b6e) popup_note2_wait_window_t4

0x0003,

0xfc54,	// (0x0005b1cd) popup_note2_wait_window_t_ParamLimits

0xfc54,	// (0x0005b1cd) popup_note2_wait_window_t

0x5607,	// (0x00050b80) wait_bar2_pane_ParamLimits

0x5607,	// (0x00050b80) wait_bar2_pane

0x561f,	// (0x00050b98) popup_snote2_single_text_window_g1_ParamLimits

0x561f,	// (0x00050b98) popup_snote2_single_text_window_g1

0x5647,	// (0x00050bc0) popup_snote2_single_text_window_t1_ParamLimits

0x5647,	// (0x00050bc0) popup_snote2_single_text_window_t1

0x5693,	// (0x00050c0c) popup_snote2_single_text_window_t2_ParamLimits

0x5693,	// (0x00050c0c) popup_snote2_single_text_window_t2

0x56df,	// (0x00050c58) popup_snote2_single_text_window_t3_ParamLimits

0x56df,	// (0x00050c58) popup_snote2_single_text_window_t3

0x5720,	// (0x00050c99) popup_snote2_single_text_window_t4_ParamLimits

0x5720,	// (0x00050c99) popup_snote2_single_text_window_t4

0x5756,	// (0x00050ccf) popup_snote2_single_text_window_t5_ParamLimits

0x5756,	// (0x00050ccf) popup_snote2_single_text_window_t5

0x0004,

0xfc5d,	// (0x0005b1d6) popup_snote2_single_text_window_t_ParamLimits

0xfc5d,	// (0x0005b1d6) popup_snote2_single_text_window_t

0xd42a,	// (0x000589a3) popup_snote2_single_graphic_window_g1_ParamLimits

0xd42a,	// (0x000589a3) popup_snote2_single_graphic_window_g1

0x57a9,	// (0x00050d22) popup_snote2_single_graphic_window_g2_ParamLimits

0x57a9,	// (0x00050d22) popup_snote2_single_graphic_window_g2

0x0001,

0xfc68,	// (0x0005b1e1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc68,	// (0x0005b1e1) popup_snote2_single_graphic_window_g

0x57d1,	// (0x00050d4a) popup_snote2_single_graphic_window_t1_ParamLimits

0x57d1,	// (0x00050d4a) popup_snote2_single_graphic_window_t1

0x581d,	// (0x00050d96) popup_snote2_single_graphic_window_t2_ParamLimits

0x581d,	// (0x00050d96) popup_snote2_single_graphic_window_t2

0x56df,	// (0x00050c58) popup_snote2_single_graphic_window_t3_ParamLimits

0x56df,	// (0x00050c58) popup_snote2_single_graphic_window_t3

0x5720,	// (0x00050c99) popup_snote2_single_graphic_window_t4_ParamLimits

0x5720,	// (0x00050c99) popup_snote2_single_graphic_window_t4

0x5756,	// (0x00050ccf) popup_snote2_single_graphic_window_t5_ParamLimits

0x5756,	// (0x00050ccf) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6d,	// (0x0005b1e6) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6d,	// (0x0005b1e6) popup_snote2_single_graphic_window_t

0x4255,	// (0x0004f7ce) clock_nsta_pane_cp2_t1

0x4255,	// (0x0004f7ce) clock_nsta_pane_cp2_t2

0x0001,

0xfa94,	// (0x0005b00d) clock_nsta_pane_cp2_t

0xe8eb,	// (0x00059e64) form_field_data_wide_pane_g1_ParamLimits

0x9ba9,	// (0x00055122) form_field_data_wide_pane_g2_ParamLimits

0x9ba9,	// (0x00055122) form_field_data_wide_pane_g2

0x9bb5,	// (0x0005512e) form_field_data_wide_pane_g3_ParamLimits

0x9bb5,	// (0x0005512e) form_field_data_wide_pane_g3

0x0002,

0xf64c,	// (0x0005abc5) form_field_data_wide_pane_g_ParamLimits

0xf64c,	// (0x0005abc5) form_field_data_wide_pane_g

0xcce4,	// (0x0005825d) grid_touch_3_pane_ParamLimits

0xcce4,	// (0x0005825d) grid_touch_3_pane

0xd452,	// (0x000589cb) cell_touch_3_pane_ParamLimits

0xd452,	// (0x000589cb) cell_touch_3_pane

0x47b1,	// (0x0004fd2a) cell_touch_3_pane_g1

0x47b1,	// (0x0004fd2a) cell_touch_3_pane_g2

0x0001,

0xfb19,	// (0x0005b092) cell_touch_3_pane_g

0x9698,	// (0x00054c11) cont_query_data_pane

0x96a0,	// (0x00054c19) cont_query_data_pane_cp1

0x5897,	// (0x00050e10) button_value_adjust_pane_cp7

0x589f,	// (0x00050e18) query_popup_pane_cp3

0xc020,	// (0x00057599) bg_popup_sub_pane_cp22_ParamLimits

0xa2c2,	// (0x0005583b) navi_navi_volume_pane_cp2

0xa2d1,	// (0x0005584a) popup_side_volume_key_window_g2

0xa2e0,	// (0x00055859) popup_side_volume_key_window_g3

0x0002,

0xf6e2,	// (0x0005ac5b) popup_side_volume_key_window_g

0xa2ef,	// (0x00055868) popup_side_volume_key_window_t2

0x0001,

0xf6e9,	// (0x0005ac62) popup_side_volume_key_window_t

0xa3b4,	// (0x0005592d) popup_side_volume_key_window_ParamLimits

0x87ef,	// (0x00053d68) list_double_graphic_pane_g4_ParamLimits

0x87ef,	// (0x00053d68) list_double_graphic_pane_g4

0xcadd,	// (0x00058056) list_single_2heading_msg_pane_ParamLimits

0xcadd,	// (0x00058056) list_single_2heading_msg_pane

0xb84e,	// (0x00056dc7) list_single_2heading_msg_pane_g1_ParamLimits

0xb84e,	// (0x00056dc7) list_single_2heading_msg_pane_g1

0xb85a,	// (0x00056dd3) list_single_2heading_msg_pane_g2_ParamLimits

0xb85a,	// (0x00056dd3) list_single_2heading_msg_pane_g2

0xb86d,	// (0x00056de6) list_single_2heading_msg_pane_g3_ParamLimits

0xb86d,	// (0x00056de6) list_single_2heading_msg_pane_g3

0xb879,	// (0x00056df2) list_single_2heading_msg_pane_g4_ParamLimits

0xb879,	// (0x00056df2) list_single_2heading_msg_pane_g4

0x0003,

0xfc78,	// (0x0005b1f1) list_single_2heading_msg_pane_g_ParamLimits

0xfc78,	// (0x0005b1f1) list_single_2heading_msg_pane_g

0x8d6a,	// (0x000542e3) list_single_2heading_msg_pane_t1_ParamLimits

0x8d6a,	// (0x000542e3) list_single_2heading_msg_pane_t1

0x8d92,	// (0x0005430b) list_single_2heading_msg_pane_t2_ParamLimits

0x8d92,	// (0x0005430b) list_single_2heading_msg_pane_t2

0x8dfd,	// (0x00054376) list_single_2heading_msg_pane_t3_ParamLimits

0x8dfd,	// (0x00054376) list_single_2heading_msg_pane_t3

0xee83,	// (0x0005a3fc) list_single_2heading_msg_pane_t4_ParamLimits

0xee83,	// (0x0005a3fc) list_single_2heading_msg_pane_t4

0x0003,

0xfc81,	// (0x0005b1fa) list_single_2heading_msg_pane_t_ParamLimits

0xfc81,	// (0x0005b1fa) list_single_2heading_msg_pane_t

0x9138,	// (0x000546b1) title_pane_g4_ParamLimits

0x9138,	// (0x000546b1) title_pane_g4

0xf142,	// (0x0005a6bb) title_pane_stacon_g3_ParamLimits

0xf142,	// (0x0005a6bb) title_pane_stacon_g3

0x53d1,	// (0x0005094a) list_single_2graphic_im_pane_g4_ParamLimits

0x53d1,	// (0x0005094a) list_single_2graphic_im_pane_g4

0xc836,	// (0x00057daf) popup_side_volume_key_window_cp

0x3a87,	// (0x0004f000) main_idle_act2_pane_t1

0x097b,	// (0x0004bef4) toolbar_button_pane_g10

0x9abc,	// (0x00055035) popup_toolbar_window_cp1

0x4246,	// (0x0004f7bf) clock_nsta_pane_cp_t1

0x4246,	// (0x0004f7bf) clock_nsta_pane_cp_t2

0x0001,

0xfa8f,	// (0x0005b008) clock_nsta_pane_cp_t

0xa2c2,	// (0x0005583b) navi_navi_volume_pane_cp2_ParamLimits

0xf316,	// (0x0005a88f) popup_side_volume_key_window_g1_ParamLimits

0xa2d1,	// (0x0005584a) popup_side_volume_key_window_g2_ParamLimits

0xa2e0,	// (0x00055859) popup_side_volume_key_window_g3_ParamLimits

0xf6e2,	// (0x0005ac5b) popup_side_volume_key_window_g_ParamLimits

0x0f48,	// (0x0004c4c1) fep_hwr_aid_pane

0xcf46,	// (0x000584bf) bg_fep_hwr_top_pane_g4_ParamLimits

0x480d,	// (0x0004fd86) fep_hwr_top_pane_g1_ParamLimits

0x481f,	// (0x0004fd98) fep_hwr_top_pane_g2_ParamLimits

0x1001,	// (0x0004c57a) fep_hwr_top_pane_g3_ParamLimits

0xfae4,	// (0x0005b05d) fep_hwr_top_pane_g_ParamLimits

0x1016,	// (0x0004c58f) fep_hwr_top_text_pane_ParamLimits

0x308b,	// (0x0004e604) aid_touch_tab_arrow_arrow_2

0x3094,	// (0x0004e60d) aid_touch_tab_arrow_left_2

0x0f5c,	// (0x0004c4d5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0f93,	// (0x0004c50c) fep_hwr_prediction_pane

0x4978,	// (0x0004fef1) fep_vkb_prediction_pane

0xd072,	// (0x000585eb) fep_vkb_side_pane_g3_ParamLimits

0xd072,	// (0x000585eb) fep_vkb_side_pane_g3

0x4a21,	// (0x0004ff9a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4eea,	// (0x00050463) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4ef7,	// (0x00050470) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8e,	// (0x0005b107) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x58c4,	// (0x00050e3d) fep_hwr_prediction_pane_g1

0x1343,	// (0x0004c8bc) fep_hwr_prediction_pane_g2

0x134b,	// (0x0004c8c4) fep_hwr_prediction_pane_g3

0x1353,	// (0x0004c8cc) fep_hwr_prediction_pane_g4

0x0003,

0xfc8a,	// (0x0005b203) fep_hwr_prediction_pane_g

0x58c4,	// (0x00050e3d) fep_vkb_prediction_pane_g1

0x58ce,	// (0x00050e47) fep_vkb_prediction_pane_g2

0x58d6,	// (0x00050e4f) fep_vkb_prediction_pane_g3

0x58de,	// (0x00050e57) fep_vkb_prediction_pane_g4

0x0003,

0xfc93,	// (0x0005b20c) fep_vkb_prediction_pane_g

0xb6aa,	// (0x00056c23) slider_set_pane_g3

0xb6be,	// (0x00056c37) slider_set_pane_g4

0xb6d6,	// (0x00056c4f) slider_set_pane_g5

0xb6aa,	// (0x00056c23) slider_set_pane_g6

0xb6ec,	// (0x00056c65) slider_set_pane_g7

0x3717,	// (0x0004ec90) slider_form_pane_g3

0x3720,	// (0x0004ec99) slider_form_pane_g4

0x3728,	// (0x0004eca1) slider_form_pane_g5

0x3717,	// (0x0004ec90) slider_form_pane_g6

0xcad4,	// (0x0005804d) slider_form_pane_g7

0x3d33,	// (0x0004f2ac) slider_set_pane_vc_g3

0x3d3c,	// (0x0004f2b5) slider_set_pane_vc_g4

0x3d45,	// (0x0004f2be) slider_set_pane_vc_g5

0x3d33,	// (0x0004f2ac) slider_set_pane_vc_g6

0x3d4e,	// (0x0004f2c7) slider_set_pane_vc_g7

0x3f04,	// (0x0004f47d) slider_form_pane_vc_g1

0x3f0d,	// (0x0004f486) slider_form_pane_vc_g2

0x3f16,	// (0x0004f48f) slider_form_pane_vc_g3

0x3f04,	// (0x0004f47d) slider_form_pane_vc_g4

0x3f1f,	// (0x0004f498) slider_form_pane_vc_g5

0x0004,

0xfa61,	// (0x0005afda) slider_form_pane_vc_g

0x8ebd,	// (0x00054436) main_idle_act3_pane

0x58e6,	// (0x00050e5f) ai3_links_pane

0xd49b,	// (0x00058a14) popup_ai3_data_window_ParamLimits

0xd49b,	// (0x00058a14) popup_ai3_data_window

0x8ebd,	// (0x00054436) grid_ai3_links_pane

0xd4b3,	// (0x00058a2c) cell_ai3_links_pane_ParamLimits

0xd4b3,	// (0x00058a2c) cell_ai3_links_pane

0x591f,	// (0x00050e98) bg_popup_sub_pane_cp11

0x592c,	// (0x00050ea5) cell_ai3_links_pane_g1

0x8ebd,	// (0x00054436) bg_popup_sub_pane_cp12

0x5951,	// (0x00050eca) heading_ai3_data_pane

0x5959,	// (0x00050ed2) list_ai3_gene_pane

0x5965,	// (0x00050ede) popup_ai3_data_window_g1

0x596d,	// (0x00050ee6) heading_ai3_data_pane_g1

0x5975,	// (0x00050eee) heading_ai3_data_pane_t1

0xd4cd,	// (0x00058a46) list_double_ai3_gene_pane_ParamLimits

0xd4cd,	// (0x00058a46) list_double_ai3_gene_pane

0x5990,	// (0x00050f09) list_single_ai3_gene_pane_ParamLimits

0x5990,	// (0x00050f09) list_single_ai3_gene_pane

0x4776,	// (0x0004fcef) list_highlight_pane_cp7_ParamLimits

0x4776,	// (0x0004fcef) list_highlight_pane_cp7

0x599d,	// (0x00050f16) list_single_a13_gene_pane_t1_ParamLimits

0x599d,	// (0x00050f16) list_single_a13_gene_pane_t1

0x59b4,	// (0x00050f2d) list_single_ai3_gene_pane_g1

0x59bd,	// (0x00050f36) list_single_ai3_gene_pane_g2

0x0001,

0xfc9c,	// (0x0005b215) list_single_ai3_gene_pane_g

0x59c5,	// (0x00050f3e) list_double_ai3_gene_pane_g1_ParamLimits

0x59c5,	// (0x00050f3e) list_double_ai3_gene_pane_g1

0xd4da,	// (0x00058a53) list_double_ai3_gene_pane_t1_ParamLimits

0xd4da,	// (0x00058a53) list_double_ai3_gene_pane_t1

0x59ed,	// (0x00050f66) list_double_ai3_gene_pane_t2_ParamLimits

0x59ed,	// (0x00050f66) list_double_ai3_gene_pane_t2

0x5a02,	// (0x00050f7b) list_double_ai3_gene_pane_t3_ParamLimits

0x5a02,	// (0x00050f7b) list_double_ai3_gene_pane_t3

0x0002,

0xfca1,	// (0x0005b21a) list_double_ai3_gene_pane_t_ParamLimits

0xfca1,	// (0x0005b21a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee79,	// (0x0005a3f2) aid_size_min_col_2

0xd485,	// (0x000589fe) aid_size_min_msg_ParamLimits

0xd485,	// (0x000589fe) aid_size_min_msg

0xd086,	// (0x000585ff) fep_vkb_top_text_pane_g2_ParamLimits

0xd086,	// (0x000585ff) fep_vkb_top_text_pane_g2

0x0001,

0xfb14,	// (0x0005b08d) fep_vkb_top_text_pane_g_ParamLimits

0xfb14,	// (0x0005b08d) fep_vkb_top_text_pane_g

0x8ebd,	// (0x00054436) main_hc_apps_shell_pane

0x5a1f,	// (0x00050f98) grid_hc_apps_pane_ParamLimits

0x5a1f,	// (0x00050f98) grid_hc_apps_pane

0x5a31,	// (0x00050faa) list_hc_apps_pane

0x5a39,	// (0x00050fb2) scroll_pane_cp37_ParamLimits

0x5a39,	// (0x00050fb2) scroll_pane_cp37

0xd4f6,	// (0x00058a6f) cell_hc_apps_pane_ParamLimits

0xd4f6,	// (0x00058a6f) cell_hc_apps_pane

0xd5b4,	// (0x00058b2d) cell_hc_apps_pane_g1_ParamLimits

0xd5b4,	// (0x00058b2d) cell_hc_apps_pane_g1

0x5b23,	// (0x0005109c) cell_hc_apps_pane_g2_ParamLimits

0x5b23,	// (0x0005109c) cell_hc_apps_pane_g2

0x5b3f,	// (0x000510b8) cell_hc_apps_pane_g3_ParamLimits

0x5b3f,	// (0x000510b8) cell_hc_apps_pane_g3

0x0002,

0xfca8,	// (0x0005b221) cell_hc_apps_pane_g_ParamLimits

0xfca8,	// (0x0005b221) cell_hc_apps_pane_g

0xd5e0,	// (0x00058b59) cell_hc_apps_pane_t1_ParamLimits

0xd5e0,	// (0x00058b59) cell_hc_apps_pane_t1

0x95bc,	// (0x00054b35) grid_highlight_pane_cp10_ParamLimits

0x95bc,	// (0x00054b35) grid_highlight_pane_cp10

0xd61e,	// (0x00058b97) list_single_hc_apps_pane_ParamLimits

0xd61e,	// (0x00058b97) list_single_hc_apps_pane

0xd64e,	// (0x00058bc7) list_single_hc_apps_pane_g1

0xb891,	// (0x00056e0a) list_single_hc_apps_pane_g2

0x0001,

0xfcaf,	// (0x0005b228) list_single_hc_apps_pane_g

0xb8aa,	// (0x00056e23) list_single_hc_apps_pane_g2_copy1

0x8e6b,	// (0x000543e4) list_single_hc_apps_pane_t1

0x9252,	// (0x000547cb) bg_set_opt_pane_cp_ParamLimits

0x9260,	// (0x000547d9) setting_slider_pane_t1_ParamLimits

0x9279,	// (0x000547f2) setting_slider_pane_t2_ParamLimits

0x9293,	// (0x0005480c) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0005aab2) setting_slider_pane_t_ParamLimits

0x92ab,	// (0x00054824) slider_set_pane_ParamLimits

0xf51a,	// (0x0005aa93) control_pane_g5_ParamLimits

0xf51a,	// (0x0005aa93) control_pane_g5

0xc956,	// (0x00057ecf) slider_set_pane_g1_ParamLimits

0x0c49,	// (0x0004c1c2) slider_set_pane_g2_ParamLimits

0xb6aa,	// (0x00056c23) slider_set_pane_g3_ParamLimits

0xb6be,	// (0x00056c37) slider_set_pane_g4_ParamLimits

0xb6d6,	// (0x00056c4f) slider_set_pane_g5_ParamLimits

0xb6aa,	// (0x00056c23) slider_set_pane_g6_ParamLimits

0xb6ec,	// (0x00056c65) slider_set_pane_g7_ParamLimits

0xf929,	// (0x0005aea2) slider_set_pane_g_ParamLimits

0xc2ce,	// (0x00057847) navi_icon_text_pane_ParamLimits

0xaefc,	// (0x00056475) aid_fill_nsta_2_ParamLimits

0xaf33,	// (0x000564ac) aid_touch_tab_arrow_left_ParamLimits

0xaf49,	// (0x000564c2) aid_touch_tab_arrow_right_ParamLimits

0xafe4,	// (0x0005655d) clock_nsta_pane_ParamLimits

0x306d,	// (0x0004e5e6) navi_icon_pane_g1_ParamLimits

0x3079,	// (0x0004e5f2) navi_text_pane_t1_ParamLimits

0x4356,	// (0x0004f8cf) navi_icon_text_pane_g1_ParamLimits

0x4362,	// (0x0004f8db) navi_icon_text_pane_t1_ParamLimits

0xd64e,	// (0x00058bc7) list_single_hc_apps_pane_g1_ParamLimits

0xb891,	// (0x00056e0a) list_single_hc_apps_pane_g2_ParamLimits

0xfcaf,	// (0x0005b228) list_single_hc_apps_pane_g_ParamLimits

0xb8aa,	// (0x00056e23) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8e6b,	// (0x000543e4) list_single_hc_apps_pane_t1_ParamLimits

0x9031,	// (0x000545aa) popup_toolbar2_fixed_window_ParamLimits

0x9031,	// (0x000545aa) popup_toolbar2_fixed_window

0xae0c,	// (0x00056385) popup_toolbar2_float_window

0x8ebd,	// (0x00054436) bg_popup_sub_pane_cp27

0x5c1d,	// (0x00051196) grid_toolbar2_float_pane

0x8ebd,	// (0x00054436) bg_popup_sub_pane_cp26

0x5c1d,	// (0x00051196) grid_toolbar2_fixed_pane

0xd667,	// (0x00058be0) cell_toolbar2_fixed_pane_ParamLimits

0xd667,	// (0x00058be0) cell_toolbar2_fixed_pane

0xd681,	// (0x00058bfa) cell_toolbar2_fixed_pane_g1

0x215b,	// (0x0004d6d4) toolbar2_fixed_button_pane

0x21db,	// (0x0004d754) toolbar2_fixed_button_pane_g1

0x21e3,	// (0x0004d75c) toolbar2_fixed_button_pane_g2

0x21eb,	// (0x0004d764) toolbar2_fixed_button_pane_g3

0x21f3,	// (0x0004d76c) toolbar2_fixed_button_pane_g4

0x21fb,	// (0x0004d774) toolbar2_fixed_button_pane_g5

0x2203,	// (0x0004d77c) toolbar2_fixed_button_pane_g6

0x220b,	// (0x0004d784) toolbar2_fixed_button_pane_g7

0x2213,	// (0x0004d78c) toolbar2_fixed_button_pane_g8

0x221b,	// (0x0004d794) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x0005ada4) toolbar2_fixed_button_pane_g

0x5c3e,	// (0x000511b7) cell_toolbar2_float_pane_ParamLimits

0x5c3e,	// (0x000511b7) cell_toolbar2_float_pane

0x5c4f,	// (0x000511c8) cell_toolbar2_float_pane_g1

0x215b,	// (0x0004d6d4) toolbar2_fixed_button_pane_cp

0xcf6e,	// (0x000584e7) fep_vkb_accented_list_pane_ParamLimits

0xcf6e,	// (0x000584e7) fep_vkb_accented_list_pane

0x1164,	// (0x0004c6dd) bg_popup_fep_shadow_pane_g9

0xc3fc,	// (0x00057975) bg_popup_fep_shadow_pane_cp3

0x9d00,	// (0x00055279) list_accented_list_pane

0x5c58,	// (0x000511d1) list_single_accented_list_pane_ParamLimits

0x5c58,	// (0x000511d1) list_single_accented_list_pane

0xc3fc,	// (0x00057975) list_highlight_pane_cp10

0x5c69,	// (0x000511e2) list_single_accented_list_pane_t1

0xad36,	// (0x000562af) popup_slider_window_ParamLimits

0xad36,	// (0x000562af) popup_slider_window

0x58a7,	// (0x00050e20) aid_indentation_list_msg

0xd772,	// (0x00058ceb) bg_popup_window_pane_cp19

0x5d8f,	// (0x00051308) popup_slider_window_g1

0x5dab,	// (0x00051324) popup_slider_window_g2

0x5dc7,	// (0x00051340) popup_slider_window_g3

0x0005,

0xfcb4,	// (0x0005b22d) popup_slider_window_g

0x5e2d,	// (0x000513a6) popup_slider_window_t1

0x5ea1,	// (0x0005141a) small_volume_slider_vertical_pane

0x47b1,	// (0x0004fd2a) small_volume_slider_vertical_pane_g1

0x47b1,	// (0x0004fd2a) small_volume_slider_vertical_pane_g2

0x5ebd,	// (0x00051436) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc6,	// (0x0005b23f) small_volume_slider_vertical_pane_g

0x8f75,	// (0x000544ee) area_side_right_pane_ParamLimits

0x8f75,	// (0x000544ee) area_side_right_pane

0xb8c6,	// (0x00056e3f) aid_size_side_button_ParamLimits

0xb8c6,	// (0x00056e3f) aid_size_side_button

0xb8df,	// (0x00056e58) grid_sctrl_middle_pane_ParamLimits

0xb8df,	// (0x00056e58) grid_sctrl_middle_pane

0x13c3,	// (0x0004c93c) sctrl_sk_bottom_pane

0x13d4,	// (0x0004c94d) sctrl_sk_top_pane

0x13e6,	// (0x0004c95f) aid_touch_sctrl_top

0x95bc,	// (0x00054b35) bg_sctrl_sk_pane_ParamLimits

0x95bc,	// (0x00054b35) bg_sctrl_sk_pane

0x13f3,	// (0x0004c96c) sctrl_sk_top_pane_g1

0x1400,	// (0x0004c979) sctrl_sk_top_pane_t1

0x13e6,	// (0x0004c95f) aid_touch_sctrl_bottom

0x95bc,	// (0x00054b35) bg_sctrl_sk_pane_cp_ParamLimits

0x95bc,	// (0x00054b35) bg_sctrl_sk_pane_cp

0x141b,	// (0x0004c994) sctrl_sk_bottom_pane_g1

0x1400,	// (0x0004c979) sctrl_sk_bottom_pane_t1

0xb8f9,	// (0x00056e72) cell_sctrl_middle_pane_ParamLimits

0xb8f9,	// (0x00056e72) cell_sctrl_middle_pane

0xb90a,	// (0x00056e83) aid_touch_sctrl_middle_ParamLimits

0xb90a,	// (0x00056e83) aid_touch_sctrl_middle

0xb917,	// (0x00056e90) bg_sctrl_middle_pane_ParamLimits

0xb917,	// (0x00056e90) bg_sctrl_middle_pane

0x5f45,	// (0x000514be) cell_sctrl_middle_pane_g1_ParamLimits

0x5f45,	// (0x000514be) cell_sctrl_middle_pane_g1

0xb925,	// (0x00056e9e) cell_sctrl_middle_pane_g2_ParamLimits

0xb925,	// (0x00056e9e) cell_sctrl_middle_pane_g2

0x0001,

0xfcd2,	// (0x0005b24b) cell_sctrl_middle_pane_g_ParamLimits

0xfcd2,	// (0x0005b24b) cell_sctrl_middle_pane_g

0x21db,	// (0x0004d754) bg_sctrl_middle_pane_g1

0x21e3,	// (0x0004d75c) bg_sctrl_middle_pane_g2

0x21eb,	// (0x0004d764) bg_sctrl_middle_pane_g3

0x21f3,	// (0x0004d76c) bg_sctrl_middle_pane_g4

0x21fb,	// (0x0004d774) bg_sctrl_middle_pane_g5

0x2203,	// (0x0004d77c) bg_sctrl_middle_pane_g6

0x220b,	// (0x0004d784) bg_sctrl_middle_pane_g7

0x2213,	// (0x0004d78c) bg_sctrl_middle_pane_g8

0x0007,

0xfcd7,	// (0x0005b250) bg_sctrl_middle_pane_g

0x221b,	// (0x0004d794) bg_sctrl_middle_pane_g8_copy1

0x21db,	// (0x0004d754) bg_sctrl_sk_pane_g1

0x21e3,	// (0x0004d75c) bg_sctrl_sk_pane_g2

0x21eb,	// (0x0004d764) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x0005ada4) bg_sctrl_sk_pane_g

0x9a82,	// (0x00054ffb) aid_size_touch_scroll_bar

0x21f3,	// (0x0004d76c) bg_sctrl_sk_pane_g4

0x21fb,	// (0x0004d774) bg_sctrl_sk_pane_g5

0x2203,	// (0x0004d77c) bg_sctrl_sk_pane_g6

0x220b,	// (0x0004d784) bg_sctrl_sk_pane_g7

0x2213,	// (0x0004d78c) bg_sctrl_sk_pane_g8

0x221b,	// (0x0004d794) bg_sctrl_sk_pane_g9

0x017b,	// (0x0004b6f4) popup_fep_china_hwr2_fs_candidate_window

0xa7fc,	// (0x00055d75) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa7fc,	// (0x00055d75) popup_fep_china_hwr2_fs_control_window

0x4a21,	// (0x0004ff9a) sctrl_sk_top_pane_g2

0x0001,

0xfccd,	// (0x0005b246) sctrl_sk_top_pane_g

0xd82a,	// (0x00058da3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd82a,	// (0x00058da3) aid_fep_china_hwr2_fs_cell

0xd83e,	// (0x00058db7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd83e,	// (0x00058db7) bg_popup_fep_shadow_pane_cp4

0xd855,	// (0x00058dce) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd855,	// (0x00058dce) bg_popup_fep_shadow_pane_cp5

0xd867,	// (0x00058de0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd867,	// (0x00058de0) popup_fep_china_hwr2_fs_control_bar_grid

0xd87b,	// (0x00058df4) popup_fep_china_hwr2_fs_control_funtion_grid

0x5f19,	// (0x00051492) aid_fep_china_hwr2_fs_candi_cell

0x8ebd,	// (0x00054436) bg_popup_fep_shadow_pane_cp6

0x5f23,	// (0x0005149c) popup_fep_china_hwr2_fs_candidate_grid

0xd883,	// (0x00058dfc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd883,	// (0x00058dfc) cell_fep_china_hwr2_fs_funtion_grid

0x47b1,	// (0x0004fd2a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f45,	// (0x000514be) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f45,	// (0x000514be) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f53,	// (0x000514cc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f53,	// (0x000514cc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce8,	// (0x0005b261) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce8,	// (0x0005b261) cell_fep_china_hwr2_fs_funtion_grid_g

0xd89b,	// (0x00058e14) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd89b,	// (0x00058e14) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8b0,	// (0x00058e29) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8b0,	// (0x00058e29) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfced,	// (0x0005b266) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfced,	// (0x0005b266) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f9a,	// (0x00051513) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5fa2,	// (0x0005151b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5faa,	// (0x00051523) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf2,	// (0x0005b26b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5fb2,	// (0x0005152b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5fb2,	// (0x0005152b) cell_fep_china_hwr2_fs_candidate_grid

0x5fcb,	// (0x00051544) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5fd3,	// (0x0005154c) popup_fep_china_hwr2_fs_candidate_grid_g21

0x47b1,	// (0x0004fd2a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x47b1,	// (0x0004fd2a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb19,	// (0x0005b092) cell_fep_china_hwr2_fs_candidate_grid_g

0x5fdb,	// (0x00051554) cell_fep_china_hwr2_fs_candidate_grid_t1

0x077a,	// (0x0004bcf3) clock_nsta_pane_cp_24_ParamLimits

0x077a,	// (0x0004bcf3) clock_nsta_pane_cp_24

0x07f8,	// (0x0004bd71) indicator_nsta_pane_cp_24_ParamLimits

0x07f8,	// (0x0004bd71) indicator_nsta_pane_cp_24

0x2ee9,	// (0x0004e462) heading_pane_g1

0x0001,

0xf890,	// (0x0005ae09) heading_pane_g

0x38d0,	// (0x0004ee49) grid_sct_catagory_button_pane

0x3900,	// (0x0004ee79) scroll_pane_cp5_ParamLimits

0x43a4,	// (0x0004f91d) button_value_adjust_pane_cp5_ParamLimits

0x43a4,	// (0x0004f91d) button_value_adjust_pane_cp5

0x4483,	// (0x0004f9fc) form2_midp_time_pane_ParamLimits

0x5fe9,	// (0x00051562) cell_sct_catagory_button_pane_ParamLimits

0x5fe9,	// (0x00051562) cell_sct_catagory_button_pane

0x4776,	// (0x0004fcef) bg_button_pane_cp01_ParamLimits

0x4776,	// (0x0004fcef) bg_button_pane_cp01

0x47b1,	// (0x0004fd2a) cell_sct_catagory_button_pane_g1

0xadaf,	// (0x00056328) popup_tb_extension_window

0xd8cc,	// (0x00058e45) aid_size_cell_ext_ParamLimits

0xd8cc,	// (0x00058e45) aid_size_cell_ext

0x9931,	// (0x00054eaa) bg_tb_trans_pane_cp1_ParamLimits

0x9931,	// (0x00054eaa) bg_tb_trans_pane_cp1

0xd8f2,	// (0x00058e6b) grid_tb_ext_pane_ParamLimits

0xd8f2,	// (0x00058e6b) grid_tb_ext_pane

0xd931,	// (0x00058eaa) cell_tb_ext_pane_ParamLimits

0xd931,	// (0x00058eaa) cell_tb_ext_pane

0xd959,	// (0x00058ed2) cell_tb_ext_pane_g1_ParamLimits

0xd959,	// (0x00058ed2) cell_tb_ext_pane_g1

0x607f,	// (0x000515f8) cell_tb_ext_pane_t1

0x95bc,	// (0x00054b35) list_highlight_pane_cp11_ParamLimits

0x95bc,	// (0x00054b35) list_highlight_pane_cp11

0x9046,	// (0x000545bf) popup_uni_indicator_window_ParamLimits

0x9046,	// (0x000545bf) popup_uni_indicator_window

0x9b9b,	// (0x00055114) bg_popup_sub_pane_cp14

0xd976,	// (0x00058eef) list_uniindi_pane

0xd982,	// (0x00058efb) uniindi_top_pane

0x95bc,	// (0x00054b35) bg_uniindi_top_pane

0xd9a1,	// (0x00058f1a) uniindi_top_pane_g1

0xd9b7,	// (0x00058f30) uniindi_top_pane_g2

0x0003,

0xfcf9,	// (0x0005b272) uniindi_top_pane_g

0xd9d4,	// (0x00058f4d) uniindi_top_pane_t1

0x6130,	// (0x000516a9) list_single_uniindi_pane_ParamLimits

0x6130,	// (0x000516a9) list_single_uniindi_pane

0x47b1,	// (0x0004fd2a) bg_uniindi_top_pane_g1

0x6143,	// (0x000516bc) list_single_uniindi_pane_g1

0x6156,	// (0x000516cf) list_single_uniindi_pane_t1

0x8ebd,	// (0x00054436) control_bg_pane

0x617b,	// (0x000516f4) bg_sctrl_sk_pane_cp1

0x6184,	// (0x000516fd) bg_sctrl_sk_pane_cp2

0x618d,	// (0x00051706) control_bg_pane_g1

0x6196,	// (0x0005170f) control_bg_pane_g2

0x0001,

0xfd02,	// (0x0005b27b) control_bg_pane_g

0x41ea,	// (0x0004f763) cell_indicator_nsta_pane_g1_ParamLimits

0xcd21,	// (0x0005829a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7d,	// (0x0005aff6) cell_indicator_nsta_pane_g_ParamLimits

0xed05,	// (0x0005a27e) form2_midp_time_pane_t1_ParamLimits

0x0f3a,	// (0x0004c4b3) main_idle_act4_pane_ParamLimits

0x0f3a,	// (0x0004c4b3) main_idle_act4_pane

0xadaf,	// (0x00056328) popup_tb_extension_window_ParamLimits

0xd917,	// (0x00058e90) tb_ext_find_pane_ParamLimits

0xd917,	// (0x00058e90) tb_ext_find_pane

0x619f,	// (0x00051718) ai_gene_pane_1_cp1

0xc47d,	// (0x000579f6) ai_gene_pane_2_cp1

0xd9fe,	// (0x00058f77) list_single_idle_plugin_calendar_pane

0x61b0,	// (0x00051729) list_single_idle_plugin_notification_pane

0x61b9,	// (0x00051732) list_single_idle_plugin_player_pane

0xda07,	// (0x00058f80) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda07,	// (0x00058f80) list_single_idle_plugin_shortcut_pane

0xda2f,	// (0x00058fa8) main_idle_act4_pane_t1

0xda46,	// (0x00058fbf) main_idle_act4_pane_t2

0x0001,

0xfd07,	// (0x0005b280) main_idle_act4_pane_t

0xda5d,	// (0x00058fd6) middle_sk_idle_act4_pane_ParamLimits

0xda5d,	// (0x00058fd6) middle_sk_idle_act4_pane

0xda79,	// (0x00058ff2) popup_clock_digital_analogue_window_cp2

0xdaa5,	// (0x0005901e) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaa5,	// (0x0005901e) shortcut_wheel_idle_act4_pane

0x47b1,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g1

0x47b1,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g2

0x47b1,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g3

0x47b1,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g4

0x47b1,	// (0x0004fd2a) shortcut_wheel_idle_act4_pane_g5

0x624c,	// (0x000517c5) shortcut_wheel_idle_act4_pane_g6

0x6254,	// (0x000517cd) shortcut_wheel_idle_act4_pane_g7

0x625c,	// (0x000517d5) shortcut_wheel_idle_act4_pane_g8

0x6264,	// (0x000517dd) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0c,	// (0x0005b285) shortcut_wheel_idle_act4_pane_g

0xcf46,	// (0x000584bf) middle_sk_idle_act4_pane_g1_ParamLimits

0xcf46,	// (0x000584bf) middle_sk_idle_act4_pane_g1

0xdb22,	// (0x0005909b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb22,	// (0x0005909b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd2f,	// (0x0005b2a8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd2f,	// (0x0005b2a8) middle_sk_idle_act4_pane_g

0xdb3a,	// (0x000590b3) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb3a,	// (0x000590b3) middle_sk_idle_act4_pane_t1

0xdb69,	// (0x000590e2) grid_ai_shortcut_pane_ParamLimits

0xdb69,	// (0x000590e2) grid_ai_shortcut_pane

0xdb86,	// (0x000590ff) list_highlight_pane_cp16_ParamLimits

0xdb86,	// (0x000590ff) list_highlight_pane_cp16

0xdb93,	// (0x0005910c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb93,	// (0x0005910c) list_single_idle_plugin_shortcut_pane_g1

0xdb9f,	// (0x00059118) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb9f,	// (0x00059118) list_single_idle_plugin_shortcut_pane_g2

0xdbbb,	// (0x00059134) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbbb,	// (0x00059134) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd34,	// (0x0005b2ad) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd34,	// (0x0005b2ad) list_single_idle_plugin_shortcut_pane_g

0xdbd0,	// (0x00059149) cell_ai_shortcut_pane_ParamLimits

0xdbd0,	// (0x00059149) cell_ai_shortcut_pane

0xdbe6,	// (0x0005915f) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe6,	// (0x0005915f) cell_ai_shortcut_pane_g1

0x619f,	// (0x00051718) ai_gene_pane_1_cp2

0x6394,	// (0x0005190d) ai_gene_pane_2_cp2

0x639c,	// (0x00051915) list_highlight_pane_cp15

0xdc08,	// (0x00059181) list_single_idle_plugin_calendar_pane_g1

0x639c,	// (0x00051915) list_highlight_pane_cp17

0x63ad,	// (0x00051926) list_single_idle_plugin_calendar_pane_g1_copy1

0x63b5,	// (0x0005192e) list_single_idle_plugin_player_pane_g1

0x3b29,	// (0x0004f0a2) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3b,	// (0x0005b2b4) list_single_idle_plugin_player_pane_g

0x63bd,	// (0x00051936) list_single_idle_plugin_player_pane_t1

0x63cb,	// (0x00051944) list_single_idle_plugin_player_pane_t2

0x63d9,	// (0x00051952) list_single_idle_plugin_player_pane_t3

0x63e7,	// (0x00051960) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd40,	// (0x0005b2b9) list_single_idle_plugin_player_pane_t

0x63f5,	// (0x0005196e) wait_bar_pane_cp15

0x63fd,	// (0x00051976) grid_ai_notification_pane

0x3b29,	// (0x0004f0a2) list_single_idle_plugin_notification_pane_g1

0xdc10,	// (0x00059189) cell_ai_notification_pane_ParamLimits

0xdc10,	// (0x00059189) cell_ai_notification_pane

0x6413,	// (0x0005198c) cell_ai_notification_pane_g1

0x641b,	// (0x00051994) cell_ai_notification_pane_t1

0xdc1d,	// (0x00059196) tb_ext_find_button_pane

0xdc25,	// (0x0005919e) tb_ext_find_pane_g1

0xdc2d,	// (0x000591a6) tb_ext_find_pane_t1

0xbfbf,	// (0x00057538) tb_ext_find_button_pane_g1

0xdc3b,	// (0x000591b4) tb_ext_find_button_pane_g2

0x0001,

0xfd49,	// (0x0005b2c2) tb_ext_find_button_pane_g

0xda2f,	// (0x00058fa8) main_idle_act4_pane_t1_ParamLimits

0xda46,	// (0x00058fbf) main_idle_act4_pane_t2_ParamLimits

0xfd07,	// (0x0005b280) main_idle_act4_pane_t_ParamLimits

0xda79,	// (0x00058ff2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda91,	// (0x0005900a) sat_plugin_idle_act4_pane_ParamLimits

0xda91,	// (0x0005900a) sat_plugin_idle_act4_pane

0xdc44,	// (0x000591bd) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc44,	// (0x000591bd) sat_plugin_idle_act4_pane_t1

0xdc5c,	// (0x000591d5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc5c,	// (0x000591d5) sat_plugin_idle_act4_pane_t2

0xdc74,	// (0x000591ed) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc74,	// (0x000591ed) sat_plugin_idle_act4_pane_t3

0xdc8c,	// (0x00059205) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc8c,	// (0x00059205) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4e,	// (0x0005b2c7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4e,	// (0x0005b2c7) sat_plugin_idle_act4_pane_t

0x8fc1,	// (0x0005453a) popup_battery_window_ParamLimits

0x8fc1,	// (0x0005453a) popup_battery_window

0x95bc,	// (0x00054b35) bg_popup_sub_pane_cp25_ParamLimits

0x95bc,	// (0x00054b35) bg_popup_sub_pane_cp25

0x649c,	// (0x00051a15) popup_battery_window_g1_ParamLimits

0x649c,	// (0x00051a15) popup_battery_window_g1

0x64a8,	// (0x00051a21) popup_battery_window_t1_ParamLimits

0x64a8,	// (0x00051a21) popup_battery_window_t1

0x64ba,	// (0x00051a33) popup_battery_window_t2_ParamLimits

0x64ba,	// (0x00051a33) popup_battery_window_t2

0x0001,

0xfd57,	// (0x0005b2d0) popup_battery_window_t_ParamLimits

0xfd57,	// (0x0005b2d0) popup_battery_window_t

0xa436,	// (0x000559af) midp_canvas_pane_ParamLimits

0xa4a8,	// (0x00055a21) midp_keypad_pane_ParamLimits

0xa4a8,	// (0x00055a21) midp_keypad_pane

0x9d7f,	// (0x000552f8) main_midp_pane_ParamLimits

0xcd2e,	// (0x000582a7) signal_pane_g2_cp_ParamLimits

0xdca4,	// (0x0005921d) aid_size_cell_midp_keypad_ParamLimits

0xdca4,	// (0x0005921d) aid_size_cell_midp_keypad

0xdcc2,	// (0x0005923b) midp_keyp_game_grid_pane_ParamLimits

0xdcc2,	// (0x0005923b) midp_keyp_game_grid_pane

0xdce9,	// (0x00059262) midp_keyp_rocker_pane_ParamLimits

0xdce9,	// (0x00059262) midp_keyp_rocker_pane

0xdd3a,	// (0x000592b3) midp_keyp_sk_left_pane_ParamLimits

0xdd3a,	// (0x000592b3) midp_keyp_sk_left_pane

0xdd8e,	// (0x00059307) midp_keyp_sk_right_pane_ParamLimits

0xdd8e,	// (0x00059307) midp_keyp_sk_right_pane

0x8ebd,	// (0x00054436) bg_button_pane_cp03

0xdde2,	// (0x0005935b) midp_keyp_sk_left_pane_g1

0x8ebd,	// (0x00054436) bg_button_pane_cp04

0xdde2,	// (0x0005935b) midp_keyp_sk_right_pane_g1

0x47b1,	// (0x0004fd2a) midp_keyp_rocker_pane_g1

0xddeb,	// (0x00059364) keyp_game_cell_pane_ParamLimits

0xddeb,	// (0x00059364) keyp_game_cell_pane

0x8ebd,	// (0x00054436) bg_button_pane_cp02

0xde0f,	// (0x00059388) keyp_game_cell_pane_g1

0x8fe1,	// (0x0005455a) popup_fep_vkb2_window_ParamLimits

0x8fe1,	// (0x0005455a) popup_fep_vkb2_window

0xb931,	// (0x00056eaa) aid_size_cell_vkb2_ParamLimits

0xb931,	// (0x00056eaa) aid_size_cell_vkb2

0xb96f,	// (0x00056ee8) popup_fep_vkb2_window_g1_ParamLimits

0xb96f,	// (0x00056ee8) popup_fep_vkb2_window_g1

0xb9bf,	// (0x00056f38) vkb2_area_bottom_pane_ParamLimits

0xb9bf,	// (0x00056f38) vkb2_area_bottom_pane

0xba13,	// (0x00056f8c) vkb2_area_keypad_pane_ParamLimits

0xba13,	// (0x00056f8c) vkb2_area_keypad_pane

0xba5b,	// (0x00056fd4) vkb2_area_top_pane_ParamLimits

0xba5b,	// (0x00056fd4) vkb2_area_top_pane

0xbae1,	// (0x0005705a) vkb2_top_entry_pane_ParamLimits

0xbae1,	// (0x0005705a) vkb2_top_entry_pane

0xbb0e,	// (0x00057087) vkb2_top_grid_left_pane_ParamLimits

0xbb0e,	// (0x00057087) vkb2_top_grid_left_pane

0xbb2e,	// (0x000570a7) vkb2_top_grid_right_pane_ParamLimits

0xbb2e,	// (0x000570a7) vkb2_top_grid_right_pane

0x1679,	// (0x0004cbf2) vkb2_cell_keypad_pane_ParamLimits

0x1679,	// (0x0004cbf2) vkb2_cell_keypad_pane

0xbb74,	// (0x000570ed) vkb2_area_bottom_grid_pane_ParamLimits

0xbb74,	// (0x000570ed) vkb2_area_bottom_grid_pane

0xbb9e,	// (0x00057117) vkb2_area_bottom_pane_g1_ParamLimits

0xbb9e,	// (0x00057117) vkb2_area_bottom_pane_g1

0xbbc4,	// (0x0005713d) vkb2_area_bottom_pane_g2_ParamLimits

0xbbc4,	// (0x0005713d) vkb2_area_bottom_pane_g2

0xbbf5,	// (0x0005716e) vkb2_area_bottom_pane_g3_ParamLimits

0xbbf5,	// (0x0005716e) vkb2_area_bottom_pane_g3

0x0002,

0xfd5c,	// (0x0005b2d5) vkb2_area_bottom_pane_g_ParamLimits

0xfd5c,	// (0x0005b2d5) vkb2_area_bottom_pane_g

0x1823,	// (0x0004cd9c) vkb2_top_cell_left_pane_ParamLimits

0x1823,	// (0x0004cd9c) vkb2_top_cell_left_pane

0xde18,	// (0x00059391) vkb2_top_entry_pane_g1_ParamLimits

0xde18,	// (0x00059391) vkb2_top_entry_pane_g1

0xde26,	// (0x0005939f) vkb2_top_entry_pane_t1_ParamLimits

0xde26,	// (0x0005939f) vkb2_top_entry_pane_t1

0x666b,	// (0x00051be4) vkb2_top_entry_pane_t2_ParamLimits

0x666b,	// (0x00051be4) vkb2_top_entry_pane_t2

0x669d,	// (0x00051c16) vkb2_top_entry_pane_t3_ParamLimits

0x669d,	// (0x00051c16) vkb2_top_entry_pane_t3

0x0002,

0xfd63,	// (0x0005b2dc) vkb2_top_entry_pane_t_ParamLimits

0xfd63,	// (0x0005b2dc) vkb2_top_entry_pane_t

0xbc5f,	// (0x000571d8) vkb2_top_grid_right_pane_g1_ParamLimits

0xbc5f,	// (0x000571d8) vkb2_top_grid_right_pane_g1

0x1886,	// (0x0004cdff) vkb2_top_grid_right_pane_g2_ParamLimits

0x1886,	// (0x0004cdff) vkb2_top_grid_right_pane_g2

0x189e,	// (0x0004ce17) vkb2_top_grid_right_pane_g3_ParamLimits

0x189e,	// (0x0004ce17) vkb2_top_grid_right_pane_g3

0xbc75,	// (0x000571ee) vkb2_top_grid_right_pane_g4_ParamLimits

0xbc75,	// (0x000571ee) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6a,	// (0x0005b2e3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6a,	// (0x0005b2e3) vkb2_top_grid_right_pane_g

0x18cc,	// (0x0004ce45) vkb2_top_cell_left_pane_g1

0x18e3,	// (0x0004ce5c) vkb2_cell_keypad_pane_g1_ParamLimits

0x18e3,	// (0x0004ce5c) vkb2_cell_keypad_pane_g1

0x66c1,	// (0x00051c3a) vkb2_cell_keypad_pane_t1_ParamLimits

0x66c1,	// (0x00051c3a) vkb2_cell_keypad_pane_t1

0x18f1,	// (0x0004ce6a) vkb2_cell_bottom_grid_pane_ParamLimits

0x18f1,	// (0x0004ce6a) vkb2_cell_bottom_grid_pane

0x192a,	// (0x0004cea3) vkb2_cell_bottom_grid_pane_g1

0xdac6,	// (0x0005903f) aid_call2_pane_cp02

0xdace,	// (0x00059047) aid_call_pane_cp02

0xdad6,	// (0x0005904f) clock_digital_number_pane_cp10

0xdade,	// (0x00059057) clock_digital_number_pane_cp11

0xdae6,	// (0x0005905f) clock_digital_number_pane_cp12

0xdaee,	// (0x00059067) clock_digital_number_pane_cp13

0xdaf6,	// (0x0005906f) clock_digital_separator_pane_cp10

0xbfbf,	// (0x00057538) popup_clock_digital_analogue_window_cp2_g1

0xbfbf,	// (0x00057538) popup_clock_digital_analogue_window_cp2_g2

0xdafe,	// (0x00059077) popup_clock_digital_analogue_window_cp2_g3

0xbfbf,	// (0x00057538) popup_clock_digital_analogue_window_cp2_g4

0xdafe,	// (0x00059077) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd1f,	// (0x0005b298) popup_clock_digital_analogue_window_cp2_g

0xdb06,	// (0x0005907f) popup_clock_digital_analogue_window_cp2_t1

0xdb14,	// (0x0005908d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2a,	// (0x0005b2a3) popup_clock_digital_analogue_window_cp2_t

0x47b1,	// (0x0004fd2a) clock_digital_number_pane_cp10_g1

0x47b1,	// (0x0004fd2a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b092) clock_digital_number_pane_cp10_g

0x47b1,	// (0x0004fd2a) clock_digital_separator_pane_cp10_g1

0x47b1,	// (0x0004fd2a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb19,	// (0x0005b092) clock_digital_separator_pane_cp10_g

0xd9c3,	// (0x00058f3c) uniindi_top_pane_g3

0x60f9,	// (0x00051672) uniindi_top_pane_g4

0x1704,	// (0x0004cc7d) vkb2_row_keypad_pane_ParamLimits

0x1704,	// (0x0004cc7d) vkb2_row_keypad_pane

0x1946,	// (0x0004cebf) vkb2_cell_t_keypad_pane_ParamLimits

0x1946,	// (0x0004cebf) vkb2_cell_t_keypad_pane

0x1956,	// (0x0004cecf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1956,	// (0x0004cecf) vkb2_cell_t_keypad_pane_cp08

0x1969,	// (0x0004cee2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1969,	// (0x0004cee2) vkb2_cell_t_keypad_pane_cp09

0x197d,	// (0x0004cef6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x197d,	// (0x0004cef6) vkb2_cell_t_keypad_pane_cp01

0x198e,	// (0x0004cf07) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x198e,	// (0x0004cf07) vkb2_cell_t_keypad_pane_cp02

0x199f,	// (0x0004cf18) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x199f,	// (0x0004cf18) vkb2_cell_t_keypad_pane_cp03

0x19b0,	// (0x0004cf29) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x19b0,	// (0x0004cf29) vkb2_cell_t_keypad_pane_cp04

0x19c1,	// (0x0004cf3a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x19c1,	// (0x0004cf3a) vkb2_cell_t_keypad_pane_cp05

0x19d2,	// (0x0004cf4b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x19d2,	// (0x0004cf4b) vkb2_cell_t_keypad_pane_cp06

0x19e3,	// (0x0004cf5c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x19e3,	// (0x0004cf5c) vkb2_cell_t_keypad_pane_cp07

0x19f4,	// (0x0004cf6d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x19f4,	// (0x0004cf6d) vkb2_cell_t_keypad_pane_cp10

0x4a21,	// (0x0004ff9a) vkb2_cell_t_keypad_pane_g1

0x66d8,	// (0x00051c51) vkb2_cell_t_keypad_pane_t1

0x8ebd,	// (0x00054436) popup_grid_graphic2_window

0xde5f,	// (0x000593d8) aid_size_cell_graphic2_ParamLimits

0xde5f,	// (0x000593d8) aid_size_cell_graphic2

0xde9d,	// (0x00059416) bg_popup_window_pane_cp21_ParamLimits

0xde9d,	// (0x00059416) bg_popup_window_pane_cp21

0xdeab,	// (0x00059424) graphic2_pages_pane_ParamLimits

0xdeab,	// (0x00059424) graphic2_pages_pane

0xdf01,	// (0x0005947a) grid_graphic2_control_pane_ParamLimits

0xdf01,	// (0x0005947a) grid_graphic2_control_pane

0xdf49,	// (0x000594c2) grid_graphic2_pane_ParamLimits

0xdf49,	// (0x000594c2) grid_graphic2_pane

0xdfd0,	// (0x00059549) cell_graphic2_pane

0x8ebd,	// (0x00054436) main_comp_mode_pane

0x5959,	// (0x00050ed2) list_ai3_gene_pane_ParamLimits

0xd772,	// (0x00058ceb) bg_popup_window_pane_cp19_ParamLimits

0x5d33,	// (0x000512ac) bg_touch_area_indi_pane_ParamLimits

0x5d33,	// (0x000512ac) bg_touch_area_indi_pane

0x5d49,	// (0x000512c2) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d49,	// (0x000512c2) bg_touch_area_indi_pane_cp01

0x5d5f,	// (0x000512d8) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d5f,	// (0x000512d8) bg_touch_area_indi_pane_cp02

0x5d75,	// (0x000512ee) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d75,	// (0x000512ee) bg_touch_area_indi_pane_cp03

0x5d8f,	// (0x00051308) popup_slider_window_g1_ParamLimits

0x5dab,	// (0x00051324) popup_slider_window_g2_ParamLimits

0x5dc7,	// (0x00051340) popup_slider_window_g3_ParamLimits

0xfcb4,	// (0x0005b22d) popup_slider_window_g_ParamLimits

0x5e2d,	// (0x000513a6) popup_slider_window_t1_ParamLimits

0x5ea1,	// (0x0005141a) small_volume_slider_vertical_pane_ParamLimits

0xdfd0,	// (0x00059549) cell_graphic2_pane_ParamLimits

0xe02b,	// (0x000595a4) bg_button_pane_cp10_ParamLimits

0xe02b,	// (0x000595a4) bg_button_pane_cp10

0xe03e,	// (0x000595b7) bg_button_pane_cp11_ParamLimits

0xe03e,	// (0x000595b7) bg_button_pane_cp11

0xe051,	// (0x000595ca) graphic2_pages_pane_g1_ParamLimits

0xe051,	// (0x000595ca) graphic2_pages_pane_g1

0xe06c,	// (0x000595e5) graphic2_pages_pane_g2_ParamLimits

0xe06c,	// (0x000595e5) graphic2_pages_pane_g2

0x0001,

0xfd78,	// (0x0005b2f1) graphic2_pages_pane_g_ParamLimits

0xfd78,	// (0x0005b2f1) graphic2_pages_pane_g

0xe084,	// (0x000595fd) graphic2_pages_pane_t1_ParamLimits

0xe084,	// (0x000595fd) graphic2_pages_pane_t1

0xe09c,	// (0x00059615) cell_graphic2_control_pane_ParamLimits

0xe09c,	// (0x00059615) cell_graphic2_control_pane

0xe0ce,	// (0x00059647) cell_graphic2_pane_g1_ParamLimits

0xe0ce,	// (0x00059647) cell_graphic2_pane_g1

0xcf54,	// (0x000584cd) cell_graphic2_pane_g2_ParamLimits

0xcf54,	// (0x000584cd) cell_graphic2_pane_g2

0xe0db,	// (0x00059654) cell_graphic2_pane_g3_ParamLimits

0xe0db,	// (0x00059654) cell_graphic2_pane_g3

0xcf61,	// (0x000584da) cell_graphic2_pane_g4_ParamLimits

0xcf61,	// (0x000584da) cell_graphic2_pane_g4

0xe0e8,	// (0x00059661) cell_graphic2_pane_g5_ParamLimits

0xe0e8,	// (0x00059661) cell_graphic2_pane_g5

0x0004,

0xfd7d,	// (0x0005b2f6) cell_graphic2_pane_g_ParamLimits

0xfd7d,	// (0x0005b2f6) cell_graphic2_pane_g

0xe105,	// (0x0005967e) cell_graphic2_pane_t1_ParamLimits

0xe105,	// (0x0005967e) cell_graphic2_pane_t1

0x2edd,	// (0x0004e456) grid_highlight_pane_cp11_ParamLimits

0x2edd,	// (0x0004e456) grid_highlight_pane_cp11

0x95bc,	// (0x00054b35) bg_button_pane_cp05

0xe14f,	// (0x000596c8) cell_graphic2_control_pane_g1

0x47b1,	// (0x0004fd2a) bg_touch_area_indi_pane_g1

0x69b1,	// (0x00051f2a) aid_cmod_rocker_key_size

0x69bb,	// (0x00051f34) aid_cmode_itu_key_size

0x69c5,	// (0x00051f3e) main_cmode_video_pane

0x69cf,	// (0x00051f48) main_comp_mode_itu_pane

0x69db,	// (0x00051f54) main_comp_mode_rocker_pane

0x69e7,	// (0x00051f60) cell_cmode_rocker_pane_ParamLimits

0x69e7,	// (0x00051f60) cell_cmode_rocker_pane

0x69f9,	// (0x00051f72) cell_cmode_itu_pane_ParamLimits

0x69f9,	// (0x00051f72) cell_cmode_itu_pane

0x9b9b,	// (0x00055114) bg_button_pane_cp06_ParamLimits

0x9b9b,	// (0x00055114) bg_button_pane_cp06

0x4a21,	// (0x0004ff9a) cell_cmode_rocker_pane_g1_ParamLimits

0x4a21,	// (0x0004ff9a) cell_cmode_rocker_pane_g1

0x5f45,	// (0x000514be) cell_cmode_rocker_pane_g2_ParamLimits

0x5f45,	// (0x000514be) cell_cmode_rocker_pane_g2

0x0001,

0xfd8d,	// (0x0005b306) cell_cmode_rocker_pane_g_ParamLimits

0xfd8d,	// (0x0005b306) cell_cmode_rocker_pane_g

0x8ebd,	// (0x00054436) bg_button_pane_cp07

0x6a0e,	// (0x00051f87) cell_cmode_itu_pane_g1

0x6a17,	// (0x00051f90) cell_cmode_itu_pane_t1

0x6a25,	// (0x00051f9e) cell_cmode_itu_pane_t2

0x0001,

0xfd92,	// (0x0005b30b) cell_cmode_itu_pane_t

0x616b,	// (0x000516e4) aid_touch_ctrl_left

0x6173,	// (0x000516ec) aid_touch_ctrl_right

0x8ebd,	// (0x00054436) compa_mode_pane

0xe175,	// (0x000596ee) aid_cmod_rocker_key_size_cp

0xe17f,	// (0x000596f8) aid_cmode_itu_key_size_cp

0x6a47,	// (0x00051fc0) compa_mode_pane_g1

0x6a4f,	// (0x00051fc8) compa_mode_pane_g2

0x6a57,	// (0x00051fd0) compa_mode_pane_g3

0x0002,

0xfd97,	// (0x0005b310) compa_mode_pane_g

0xe189,	// (0x00059702) main_comp_mode_itu_pane_cp

0xe191,	// (0x0005970a) main_comp_mode_rocker_pane_cp

0xe199,	// (0x00059712) cell_cmode_itu_pane_cp_ParamLimits

0xe199,	// (0x00059712) cell_cmode_itu_pane_cp

0xe1ae,	// (0x00059727) cell_cmode_rocker_pane_cp_ParamLimits

0xe1ae,	// (0x00059727) cell_cmode_rocker_pane_cp

0x9b9b,	// (0x00055114) bg_button_pane_cp06_cp_ParamLimits

0x9b9b,	// (0x00055114) bg_button_pane_cp06_cp

0x4a21,	// (0x0004ff9a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4a21,	// (0x0004ff9a) cell_cmode_rocker_pane_g1_cp

0x47b1,	// (0x0004fd2a) cell_cmode_rocker_pane_g2_cp

0x8ebd,	// (0x00054436) bg_button_pane_cp07_cp

0xe1c0,	// (0x00059739) cell_cmode_itu_pane_g1_cp

0xe1c9,	// (0x00059742) cell_cmode_itu_pane_t1_cp

0xe1c9,	// (0x00059742) cell_cmode_itu_pane_t2_cp

0xcaca,	// (0x00058043) settings_code_pane_cp2

0x9252,	// (0x000547cb) bg_popup_window_pane_cp3_ParamLimits

0x97bc,	// (0x00054d35) heading_pane_cp3_ParamLimits

0x97cb,	// (0x00054d44) listscroll_popup_graphic_pane_ParamLimits

0x0f48,	// (0x0004c4c1) fep_hwr_aid_pane_ParamLimits

0x13e6,	// (0x0004c95f) aid_touch_sctrl_top_ParamLimits

0x13f3,	// (0x0004c96c) sctrl_sk_top_pane_g1_ParamLimits

0x4a21,	// (0x0004ff9a) sctrl_sk_top_pane_g2_ParamLimits

0xfccd,	// (0x0005b246) sctrl_sk_top_pane_g_ParamLimits

0x1400,	// (0x0004c979) sctrl_sk_top_pane_t1_ParamLimits

0x13e6,	// (0x0004c95f) aid_touch_sctrl_bottom_ParamLimits

0x1400,	// (0x0004c979) sctrl_sk_bottom_pane_t1_ParamLimits

0xd98f,	// (0x00058f08) aid_area_touch_clock

0xbaa3,	// (0x0005701c) aid_vkb2_area_top_pane_cell_ParamLimits

0xbaa3,	// (0x0005701c) aid_vkb2_area_top_pane_cell

0xbb4e,	// (0x000570c7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbb4e,	// (0x000570c7) aid_vkb2_area_bottom_pane_cell

0x6623,	// (0x00051b9c) popup_char_count_window

0x6aad,	// (0x00052026) popup_char_count_window_g1

0x6ab6,	// (0x0005202f) popup_char_count_window_g2

0x6abf,	// (0x00052038) popup_char_count_window_g3

0x0002,

0xfd9e,	// (0x0005b317) popup_char_count_window_g

0x6ac8,	// (0x00052041) popup_char_count_window_t1

0x14a1,	// (0x0004ca1a) popup_fep_char_preview_window_ParamLimits

0x14a1,	// (0x0004ca1a) popup_fep_char_preview_window

0xbac3,	// (0x0005703c) vkb2_top_candi_pane_ParamLimits

0xbac3,	// (0x0005703c) vkb2_top_candi_pane

0xe1d7,	// (0x00059750) cell_vkb2_top_candi_pane_ParamLimits

0xe1d7,	// (0x00059750) cell_vkb2_top_candi_pane

0x2881,	// (0x0004ddfa) bg_popup_fep_char_preview_window_ParamLimits

0x2881,	// (0x0004ddfa) bg_popup_fep_char_preview_window

0x1a09,	// (0x0004cf82) popup_fep_char_preview_window_t1_ParamLimits

0x1a09,	// (0x0004cf82) popup_fep_char_preview_window_t1

0x6b23,	// (0x0005209c) bg_popup_fep_char_preview_window_g1

0x6b2b,	// (0x000520a4) bg_popup_fep_char_preview_window_g2

0x6b33,	// (0x000520ac) bg_popup_fep_char_preview_window_g3

0x6b3b,	// (0x000520b4) bg_popup_fep_char_preview_window_g4

0x6b43,	// (0x000520bc) bg_popup_fep_char_preview_window_g5

0x6b4b,	// (0x000520c4) bg_popup_fep_char_preview_window_g6

0x6b53,	// (0x000520cc) bg_popup_fep_char_preview_window_g7

0x6b5b,	// (0x000520d4) bg_popup_fep_char_preview_window_g8

0x6b63,	// (0x000520dc) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda5,	// (0x0005b31e) bg_popup_fep_char_preview_window_g

0x4a21,	// (0x0004ff9a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4a21,	// (0x0004ff9a) cell_vkb2_top_candi_pane_g1

0x4e94,	// (0x0005040d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4e94,	// (0x0005040d) cell_vkb2_top_candi_pane_g2

0x4eb5,	// (0x0005042e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4eb5,	// (0x0005042e) cell_vkb2_top_candi_pane_g3

0x1a4b,	// (0x0004cfc4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1a4b,	// (0x0004cfc4) cell_vkb2_top_candi_pane_g4

0x6b6b,	// (0x000520e4) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6b6b,	// (0x000520e4) cell_vkb2_top_candi_pane_g5

0x5f45,	// (0x000514be) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f45,	// (0x000514be) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdba,	// (0x0005b333) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdba,	// (0x0005b333) cell_vkb2_top_candi_pane_g

0x1a6c,	// (0x0004cfe5) cell_vkb2_top_candi_pane_t1

0xb696,	// (0x00056c0f) aid_size_touch_slider_mark_ParamLimits

0xb696,	// (0x00056c0f) aid_size_touch_slider_mark

0xdee7,	// (0x00059460) grid_graphic2_catg_pane_ParamLimits

0xdee7,	// (0x00059460) grid_graphic2_catg_pane

0xdfa3,	// (0x0005951c) popup_grid_graphic2_window_t1_ParamLimits

0xdfa3,	// (0x0005951c) popup_grid_graphic2_window_t1

0xdfb9,	// (0x00059532) popup_grid_graphic2_window_t2_ParamLimits

0xdfb9,	// (0x00059532) popup_grid_graphic2_window_t2

0x0001,

0xfd73,	// (0x0005b2ec) popup_grid_graphic2_window_t_ParamLimits

0xfd73,	// (0x0005b2ec) popup_grid_graphic2_window_t

0x95bc,	// (0x00054b35) bg_button_pane_cp05_ParamLimits

0xe14f,	// (0x000596c8) cell_graphic2_control_pane_g1_ParamLimits

0xe23d,	// (0x000597b6) cell_graphic2_catg_pane_ParamLimits

0xe23d,	// (0x000597b6) cell_graphic2_catg_pane

0x8ebd,	// (0x00054436) bg_button_pane_cp12

0xe24f,	// (0x000597c8) cell_graphic2_catg_pane_g1

0x607f,	// (0x000515f8) cell_tb_ext_pane_t1_ParamLimits

0x1843,	// (0x0004cdbc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1843,	// (0x0004cdbc) vkb2_top_cell_right_narrow_pane

0x185b,	// (0x0004cdd4) vkb2_top_cell_right_wide_pane_ParamLimits

0x185b,	// (0x0004cdd4) vkb2_top_cell_right_wide_pane

0x0f3a,	// (0x0004c4b3) bg_vkb2_func_pane_ParamLimits

0x0f3a,	// (0x0004c4b3) bg_vkb2_func_pane

0x18cc,	// (0x0004ce45) vkb2_top_cell_left_pane_g1_ParamLimits

0x0f3a,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0f3a,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp03

0x192a,	// (0x0004cea3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x21e3,	// (0x0004d75c) bg_vkb2_func_pane_g1

0x21eb,	// (0x0004d764) bg_vkb2_func_pane_g2

0x21fb,	// (0x0004d774) bg_vkb2_func_pane_g3

0x21f3,	// (0x0004d76c) bg_vkb2_func_pane_g4

0x2203,	// (0x0004d77c) bg_vkb2_func_pane_g5

0x220b,	// (0x0004d784) bg_vkb2_func_pane_g6

0x2213,	// (0x0004d78c) bg_vkb2_func_pane_g7

0x221b,	// (0x0004d794) bg_vkb2_func_pane_g8

0x21db,	// (0x0004d754) bg_vkb2_func_pane_g9

0x0008,

0xfdc7,	// (0x0005b340) bg_vkb2_func_pane_g

0x0f3a,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0f3a,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp01

0x18cc,	// (0x0004ce45) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x18cc,	// (0x0004ce45) vkb2_top_cell_right_wide_pane_g1

0x0f3a,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0f3a,	// (0x0004c4b3) bg_vkb2_fuc_pane_cp02

0x192a,	// (0x0004cea3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x192a,	// (0x0004cea3) vkb2_top_cell_right_narrow_pane_g1

0xd6b4,	// (0x00058c2d) aid_touch_area_decrease_ParamLimits

0xd6b4,	// (0x00058c2d) aid_touch_area_decrease

0xd6ee,	// (0x00058c67) aid_touch_area_increase_ParamLimits

0xd6ee,	// (0x00058c67) aid_touch_area_increase

0xd716,	// (0x00058c8f) aid_touch_area_mute_ParamLimits

0xd716,	// (0x00058c8f) aid_touch_area_mute

0xd73e,	// (0x00058cb7) aid_touch_area_slider_ParamLimits

0xd73e,	// (0x00058cb7) aid_touch_area_slider

0xd77e,	// (0x00058cf7) popup_slider_window_g4_ParamLimits

0xd77e,	// (0x00058cf7) popup_slider_window_g4

0xd7a6,	// (0x00058d1f) popup_slider_window_g5_ParamLimits

0xd7a6,	// (0x00058d1f) popup_slider_window_g5

0xd7da,	// (0x00058d53) popup_slider_window_g6_ParamLimits

0xd7da,	// (0x00058d53) popup_slider_window_g6

0x5e5b,	// (0x000513d4) popup_slider_window_t2_ParamLimits

0x5e5b,	// (0x000513d4) popup_slider_window_t2

0x0001,

0xfcc1,	// (0x0005b23a) popup_slider_window_t_ParamLimits

0xfcc1,	// (0x0005b23a) popup_slider_window_t

0xd7f6,	// (0x00058d6f) slider_pane_ParamLimits

0xd7f6,	// (0x00058d6f) slider_pane

0x6ba7,	// (0x00052120) slider_pane_g1_ParamLimits

0x6ba7,	// (0x00052120) slider_pane_g1

0x6bbb,	// (0x00052134) slider_pane_g2_ParamLimits

0x6bbb,	// (0x00052134) slider_pane_g2

0x6bd1,	// (0x0005214a) slider_pane_g3_ParamLimits

0x6bd1,	// (0x0005214a) slider_pane_g3

0x0003,

0xfdda,	// (0x0005b353) slider_pane_g_ParamLimits

0xfdda,	// (0x0005b353) slider_pane_g

0xadf7,	// (0x00056370) popup_tb_float_extension_window_ParamLimits

0xadf7,	// (0x00056370) popup_tb_float_extension_window

0x6bfd,	// (0x00052176) aid_size_cell_tb_float_ext

0x8ebd,	// (0x00054436) bg_popup_sub_window_cp28

0xe258,	// (0x000597d1) grid_tb_float_ext_pane

0xe262,	// (0x000597db) cell_tb_float_ext_pane_ParamLimits

0xe262,	// (0x000597db) cell_tb_float_ext_pane

0xe27c,	// (0x000597f5) cell_tb_float_ext_pane_g1

0xe285,	// (0x000597fe) grid_highlight_pane_cp12

0xb7ad,	// (0x00056d26) cell_last_hwr_side_pane_ParamLimits

0xb7ad,	// (0x00056d26) cell_last_hwr_side_pane

0x47b1,	// (0x0004fd2a) cell_last_hwr_side_pane_g1

0x6c3f,	// (0x000521b8) cell_last_hwr_side_pane_g2

0x0001,

0xfde3,	// (0x0005b35c) cell_last_hwr_side_pane_g

0xbc2a,	// (0x000571a3) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbc2a,	// (0x000571a3) vkb2_area_bottom_space_btn_pane

0x4a21,	// (0x0004ff9a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x66d8,	// (0x00051c51) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1a6c,	// (0x0004cfe5) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1a8b,	// (0x0004d004) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1a8b,	// (0x0004d004) vkb2_area_bottom_space_btn_pane_g1

0x1ac5,	// (0x0004d03e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1ac5,	// (0x0004d03e) vkb2_area_bottom_space_btn_pane_g2

0x1afb,	// (0x0004d074) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1afb,	// (0x0004d074) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde8,	// (0x0005b361) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde8,	// (0x0005b361) vkb2_area_bottom_space_btn_pane_g

0x0fef,	// (0x0004c568) cel_fep_hwr_func_pane_ParamLimits

0x0fef,	// (0x0004c568) cel_fep_hwr_func_pane

0xb782,	// (0x00056cfb) cell_hwr_side_button_pane_ParamLimits

0xb782,	// (0x00056cfb) cell_hwr_side_button_pane

0xd98f,	// (0x00058f08) aid_area_touch_clock_ParamLimits

0x95bc,	// (0x00054b35) bg_uniindi_top_pane_ParamLimits

0xd9a1,	// (0x00058f1a) uniindi_top_pane_g1_ParamLimits

0xd9b7,	// (0x00058f30) uniindi_top_pane_g2_ParamLimits

0xd9c3,	// (0x00058f3c) uniindi_top_pane_g3_ParamLimits

0x60f9,	// (0x00051672) uniindi_top_pane_g4_ParamLimits

0xfcf9,	// (0x0005b272) uniindi_top_pane_g_ParamLimits

0xd9d4,	// (0x00058f4d) uniindi_top_pane_t1_ParamLimits

0x95bc,	// (0x00054b35) bg_vkb2_func_pane_cp01_ParamLimits

0x95bc,	// (0x00054b35) bg_vkb2_func_pane_cp01

0x6c48,	// (0x000521c1) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c48,	// (0x000521c1) cel_fep_hwr_func_pane_g1

0x95bc,	// (0x00054b35) bg_vkb2_func_pane_cp02_ParamLimits

0x95bc,	// (0x00054b35) bg_vkb2_func_pane_cp02

0x6c48,	// (0x000521c1) cell_hwr_side_button_pane_g1_ParamLimits

0x6c48,	// (0x000521c1) cell_hwr_side_button_pane_g1

0x205f,	// (0x0004d5d8) status_pane_g4_ParamLimits

0x205f,	// (0x0004d5d8) status_pane_g4

0x2079,	// (0x0004d5f2) status_pane_t1

0x44ec,	// (0x0004fa65) form2_midp_gauge_slider_cont_pane

0x44f4,	// (0x0004fa6d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xce57,	// (0x000583d0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xce69,	// (0x000583e2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacc,	// (0x0005b045) form2_midp_gauge_slider_pane_t_ParamLimits

0x452a,	// (0x0004faa3) form2_midp_slider_pane_ParamLimits

0x1461,	// (0x0004c9da) aid_size_cell_func_vkb2_ParamLimits

0x1461,	// (0x0004c9da) aid_size_cell_func_vkb2

0x6be9,	// (0x00052162) slider_pane_g4_ParamLimits

0x6be9,	// (0x00052162) slider_pane_g4

0xbc93,	// (0x0005720c) form2_midp_gauge_slider_pane_t2_cp01

0xbca1,	// (0x0005721a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbca1,	// (0x0005721a) form2_midp_gauge_slider_pane_t3_cp01

0x1b70,	// (0x0004d0e9) form2_midp_slider_pane_cp01

0x8ebd,	// (0x00054436) navi_smil_pane

0x6c81,	// (0x000521fa) navi_smil_pane_g1

0x6c89,	// (0x00052202) navi_smil_pane_t1

0x6c56,	// (0x000521cf) form2_midp_slider_pane_g1

0x6c5f,	// (0x000521d8) form2_midp_slider_pane_g2

0x6c67,	// (0x000521e0) form2_midp_slider_pane_g3

0x6c56,	// (0x000521cf) form2_midp_slider_pane_g4

0xe28e,	// (0x00059807) form2_midp_slider_pane_g5

0x0004,

0xfdf1,	// (0x0005b36a) form2_midp_slider_pane_g

0x1b35,	// (0x0004d0ae) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1b35,	// (0x0004d0ae) vkb2_area_bottom_space_btn_pane_g4

0xb02f,	// (0x000565a8) lc0_navi_pane_ParamLimits

0xb02f,	// (0x000565a8) lc0_navi_pane

0xb099,	// (0x00056612) lc0_stat_indi_pane_ParamLimits

0xb099,	// (0x00056612) lc0_stat_indi_pane

0xb0ae,	// (0x00056627) ls0_title_pane_ParamLimits

0xb0ae,	// (0x00056627) ls0_title_pane

0x9b9b,	// (0x00055114) bg_popup_sub_pane_cp14_ParamLimits

0xd976,	// (0x00058eef) list_uniindi_pane_ParamLimits

0xd982,	// (0x00058efb) uniindi_top_pane_ParamLimits

0x6143,	// (0x000516bc) list_single_uniindi_pane_g1_ParamLimits

0x6156,	// (0x000516cf) list_single_uniindi_pane_t1_ParamLimits

0xbcbe,	// (0x00057237) lc0_stat_clock_pane_ParamLimits

0xbcbe,	// (0x00057237) lc0_stat_clock_pane

0xe299,	// (0x00059812) lc0_stat_indi_pane_g1_ParamLimits

0xe299,	// (0x00059812) lc0_stat_indi_pane_g1

0xe2a6,	// (0x0005981f) lc0_stat_indi_pane_g2_ParamLimits

0xe2a6,	// (0x0005981f) lc0_stat_indi_pane_g2

0x0001,

0xfdfc,	// (0x0005b375) lc0_stat_indi_pane_g_ParamLimits

0xfdfc,	// (0x0005b375) lc0_stat_indi_pane_g

0xbcce,	// (0x00057247) lc0_uni_indicator_pane_ParamLimits

0xbcce,	// (0x00057247) lc0_uni_indicator_pane

0xe2b3,	// (0x0005982c) ls0_title_pane_g1_ParamLimits

0xe2b3,	// (0x0005982c) ls0_title_pane_g1

0xe2c7,	// (0x00059840) ls0_title_pane_t1_ParamLimits

0xe2c7,	// (0x00059840) ls0_title_pane_t1

0xbcde,	// (0x00057257) lc0_uni_indicator_pane_g1_ParamLimits

0xbcde,	// (0x00057257) lc0_uni_indicator_pane_g1

0x6cfb,	// (0x00052274) lc0_stat_clock_pane_t1

0x8ebd,	// (0x00054436) main_ai5_pane

0x6d09,	// (0x00052282) ai5_sk_pane_ParamLimits

0x6d09,	// (0x00052282) ai5_sk_pane

0xe2f5,	// (0x0005986e) cell_ai5_widget_pane_ParamLimits

0xe2f5,	// (0x0005986e) cell_ai5_widget_pane

0x6ddf,	// (0x00052358) aid_size_cell_widget_grid

0x6ded,	// (0x00052366) bg_ai5_widget_pane_ParamLimits

0x6ded,	// (0x00052366) bg_ai5_widget_pane

0x6e69,	// (0x000523e2) cell_ai5_widget_pane_g2

0x6e7d,	// (0x000523f6) cell_ai5_widget_pane_g3

0x6e97,	// (0x00052410) cell_ai5_widget_pane_g4

0x6ea7,	// (0x00052420) cell_ai5_widget_pane_g5

0x6eb7,	// (0x00052430) cell_ai5_widget_pane_g6

0x6ec3,	// (0x0005243c) cell_ai5_widget_pane_g7

0x6f2f,	// (0x000524a8) cell_ai5_widget_pane_t1_ParamLimits

0x6f2f,	// (0x000524a8) cell_ai5_widget_pane_t1

0x6f4c,	// (0x000524c5) cell_ai5_widget_pane_t2_ParamLimits

0x6f4c,	// (0x000524c5) cell_ai5_widget_pane_t2

0x6f64,	// (0x000524dd) cell_ai5_widget_pane_t3_ParamLimits

0x6f64,	// (0x000524dd) cell_ai5_widget_pane_t3

0x6f7c,	// (0x000524f5) cell_ai5_widget_pane_t4_ParamLimits

0x6f7c,	// (0x000524f5) cell_ai5_widget_pane_t4

0xe361,	// (0x000598da) cell_ai5_widget_pane_t5_ParamLimits

0xe361,	// (0x000598da) cell_ai5_widget_pane_t5

0x6fc1,	// (0x0005253a) cell_ai5_widget_pane_t6_ParamLimits

0x6fc1,	// (0x0005253a) cell_ai5_widget_pane_t6

0x6fd3,	// (0x0005254c) cell_ai5_widget_pane_t7_ParamLimits

0x6fd3,	// (0x0005254c) cell_ai5_widget_pane_t7

0x6ff2,	// (0x0005256b) cell_ai5_widget_pane_t8_ParamLimits

0x6ff2,	// (0x0005256b) cell_ai5_widget_pane_t8

0x000b,

0xfe1c,	// (0x0005b395) cell_ai5_widget_pane_t_ParamLimits

0xfe1c,	// (0x0005b395) cell_ai5_widget_pane_t

0x7076,	// (0x000525ef) grid_ai5_widget_pane

0x9b9b,	// (0x00055114) highlight_cell_ai5_widget_pane_ParamLimits

0x9b9b,	// (0x00055114) highlight_cell_ai5_widget_pane

0xe381,	// (0x000598fa) ai5_sk_left_pane

0xe38b,	// (0x00059904) ai5_sk_middle_pane

0xe395,	// (0x0005990e) ai5_sk_right_pane

0x70a2,	// (0x0005261b) bg_ai5_widget_pane_g1_ParamLimits

0x70a2,	// (0x0005261b) bg_ai5_widget_pane_g1

0x70ae,	// (0x00052627) bg_ai5_widget_pane_g2_ParamLimits

0x70ae,	// (0x00052627) bg_ai5_widget_pane_g2

0x70ba,	// (0x00052633) bg_ai5_widget_pane_g3_ParamLimits

0x70ba,	// (0x00052633) bg_ai5_widget_pane_g3

0x70c6,	// (0x0005263f) bg_ai5_widget_pane_g4_ParamLimits

0x70c6,	// (0x0005263f) bg_ai5_widget_pane_g4

0x70d2,	// (0x0005264b) bg_ai5_widget_pane_g5_ParamLimits

0x70d2,	// (0x0005264b) bg_ai5_widget_pane_g5

0x70de,	// (0x00052657) bg_ai5_widget_pane_g6_ParamLimits

0x70de,	// (0x00052657) bg_ai5_widget_pane_g6

0x70ea,	// (0x00052663) bg_ai5_widget_pane_g7_ParamLimits

0x70ea,	// (0x00052663) bg_ai5_widget_pane_g7

0x70f6,	// (0x0005266f) bg_ai5_widget_pane_g8_ParamLimits

0x70f6,	// (0x0005266f) bg_ai5_widget_pane_g8

0x7102,	// (0x0005267b) bg_ai5_widget_pane_g9_ParamLimits

0x7102,	// (0x0005267b) bg_ai5_widget_pane_g9

0x0008,

0xfe35,	// (0x0005b3ae) bg_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x0005b3ae) bg_ai5_widget_pane_g

0x7134,	// (0x000526ad) cell_shortcut_ai5_widget_pane_ParamLimits

0x7134,	// (0x000526ad) cell_shortcut_ai5_widget_pane

0xc3fc,	// (0x00057975) bg_cell_shortcut_ai5_widget_pane

0x7145,	// (0x000526be) cell_grid_ai5_widget_pane_g1

0xc3fc,	// (0x00057975) highlight_cell_shortcut_ai5_widget_pane

0x21eb,	// (0x0004d764) ai5_sk_left_pane_g1

0x714e,	// (0x000526c7) ai5_sk_left_pane_g2

0x7156,	// (0x000526cf) ai5_sk_left_pane_g3

0x715e,	// (0x000526d7) ai5_sk_left_pane_g4

0x0003,

0xfe48,	// (0x0005b3c1) ai5_sk_left_pane_g

0x7166,	// (0x000526df) ai5_sk_left_pane_t1

0x21e3,	// (0x0004d75c) ai5_sk_right_pane_g1

0x7174,	// (0x000526ed) ai5_sk_right_pane_g2

0x717c,	// (0x000526f5) ai5_sk_right_pane_g3

0x7184,	// (0x000526fd) ai5_sk_right_pane_g4

0x0003,

0xfe51,	// (0x0005b3ca) ai5_sk_right_pane_g

0x718c,	// (0x00052705) ai5_sk_right_pane_t1

0x21e3,	// (0x0004d75c) ai5_sk_middle_pane_g1

0x21eb,	// (0x0004d764) ai5_sk_middle_pane_g2

0x2203,	// (0x0004d77c) ai5_sk_middle_pane_g3

0x717c,	// (0x000526f5) ai5_sk_middle_pane_g4

0x7156,	// (0x000526cf) ai5_sk_middle_pane_g5

0x719a,	// (0x00052713) ai5_sk_middle_pane_g6

0xe39f,	// (0x00059918) ai5_sk_middle_pane_g7

0x0006,

0xfe5a,	// (0x0005b3d3) ai5_sk_middle_pane_g

0xaf1b,	// (0x00056494) aid_touch_area_size_lc0_ParamLimits

0xaf1b,	// (0x00056494) aid_touch_area_size_lc0

0x117a,	// (0x0004c6f3) cell_hwr_candidate_pane_t1_ParamLimits

0x06d6,	// (0x0004bc4f) aid_touch_navi_pane

0xb1a7,	// (0x00056720) status_dt_navi_pane_ParamLimits

0xb1a7,	// (0x00056720) status_dt_navi_pane

0xb1bf,	// (0x00056738) status_dt_sta_pane_ParamLimits

0xb1bf,	// (0x00056738) status_dt_sta_pane

0xe3a7,	// (0x00059920) dt_sta_controll_pane

0xe3b4,	// (0x0005992d) dt_sta_indi_pane

0xe3c1,	// (0x0005993a) dt_sta_title_pane

0x95bc,	// (0x00054b35) bg_dt_sta_indi_pane_ParamLimits

0x95bc,	// (0x00054b35) bg_dt_sta_indi_pane

0xe3d3,	// (0x0005994c) dt_sta_battery_pane

0xe3db,	// (0x00059954) dt_sta_indi_pane_g1

0x71ec,	// (0x00052765) dt_sta_indi_pane_g2

0x71f5,	// (0x0005276e) dt_sta_indi_pane_g3

0x0002,

0xfe69,	// (0x0005b3e2) dt_sta_indi_pane_g

0x71fe,	// (0x00052777) dt_sta_signal_pane

0x9b9b,	// (0x00055114) bg_dt_sta_title_pane_ParamLimits

0x9b9b,	// (0x00055114) bg_dt_sta_title_pane

0x303d,	// (0x0004e5b6) dt_sta_title_pane_g1

0xe3e4,	// (0x0005995d) dt_sta_title_pane_t1_ParamLimits

0xe3e4,	// (0x0005995d) dt_sta_title_pane_t1

0x8ebd,	// (0x00054436) bg_dt_sta_control_pane

0xe3f9,	// (0x00059972) dt_sta_controll_pane_g1

0xe402,	// (0x0005997b) bg_dt_sta_title_pane_g1

0xe40b,	// (0x00059984) bg_dt_sta_title_pane_g2

0xe414,	// (0x0005998d) bg_dt_sta_title_pane_g3

0x0002,

0xfe70,	// (0x0005b3e9) bg_dt_sta_title_pane_g

0x47b1,	// (0x0004fd2a) bg_dt_sta_indi_pane_g1

0x7240,	// (0x000527b9) dt_sta_signal_pane_g1

0x7248,	// (0x000527c1) dt_sta_signal_pane_g2

0x0001,

0xfe77,	// (0x0005b3f0) dt_sta_signal_pane_g

0x7250,	// (0x000527c9) dt_sta_battery_pane_g1

0x7259,	// (0x000527d2) dt_sta_battery_pane_t1

0x47b1,	// (0x0004fd2a) bg_dt_sta_control_pane_g1

0xc042,	// (0x000575bb) fep_china_uni_eep_pane

0xc04a,	// (0x000575c3) fep_china_uni_entry_pane_ParamLimits

0xc05a,	// (0x000575d3) popup_fep_china_uni_window_g1_ParamLimits

0xc06a,	// (0x000575e3) popup_fep_china_uni_window_g2_ParamLimits

0xc06a,	// (0x000575e3) popup_fep_china_uni_window_g2

0x0001,

0xf6ee,	// (0x0005ac67) popup_fep_china_uni_window_g_ParamLimits

0xf6ee,	// (0x0005ac67) popup_fep_china_uni_window_g

0x7268,	// (0x000527e1) fep_china_uni_eep_pane_g1

0x7270,	// (0x000527e9) fep_china_uni_eep_pane_t1

0x6c78,	// (0x000521f1) aid_touch_area_size_smil_player

0x082c,	// (0x0004bda5) lc0_clock_pane

0x206d,	// (0x0004d5e6) status_pane_g5_ParamLimits

0x206d,	// (0x0004d5e6) status_pane_g5

0xa953,	// (0x00055ecc) popup_keymap_window

0x202b,	// (0x0004d5a4) status_icon_pane

0x6e7d,	// (0x000523f6) cell_ai5_widget_pane_g3_ParamLimits

0x6e97,	// (0x00052410) cell_ai5_widget_pane_g4_ParamLimits

0x6ea7,	// (0x00052420) cell_ai5_widget_pane_g5_ParamLimits

0x6ecf,	// (0x00052448) cell_ai5_widget_pane_g8_ParamLimits

0x6ecf,	// (0x00052448) cell_ai5_widget_pane_g8

0x6ee3,	// (0x0005245c) cell_ai5_widget_pane_g9_ParamLimits

0x6ee3,	// (0x0005245c) cell_ai5_widget_pane_g9

0x6ef7,	// (0x00052470) cell_ai5_widget_pane_g10_ParamLimits

0x6ef7,	// (0x00052470) cell_ai5_widget_pane_g10

0x727f,	// (0x000527f8) status_icon_pane_g1

0x8ebd,	// (0x00054436) bg_popup_sub_pane_cp13

0x7287,	// (0x00052800) popup_keymap_window_t1

0xa613,	// (0x00055b8c) control_pane_g6_ParamLimits

0xa613,	// (0x00055b8c) control_pane_g6

0xa620,	// (0x00055b99) control_pane_g7_ParamLimits

0xa620,	// (0x00055b99) control_pane_g7

0xa62d,	// (0x00055ba6) control_pane_g8_ParamLimits

0xa62d,	// (0x00055ba6) control_pane_g8

0xe3a7,	// (0x00059920) dt_sta_controll_pane_ParamLimits

0xe3b4,	// (0x0005992d) dt_sta_indi_pane_ParamLimits

0xe3c1,	// (0x0005993a) dt_sta_title_pane_ParamLimits

0x9a8b,	// (0x00055004) aid_size_touch_scroll_bar_cale

0x8fd5,	// (0x0005454e) popup_discreet_window_ParamLimits

0x8fd5,	// (0x0005454e) popup_discreet_window

0x9027,	// (0x000545a0) popup_sk_window

0x2881,	// (0x0004ddfa) bg_popup_sub_pane_cp28_ParamLimits

0x2881,	// (0x0004ddfa) bg_popup_sub_pane_cp28

0x7295,	// (0x0005280e) popup_discreet_window_g1_ParamLimits

0x7295,	// (0x0005280e) popup_discreet_window_g1

0xe41d,	// (0x00059996) popup_discreet_window_t1_ParamLimits

0xe41d,	// (0x00059996) popup_discreet_window_t1

0x72d3,	// (0x0005284c) popup_discreet_window_t2_ParamLimits

0x72d3,	// (0x0005284c) popup_discreet_window_t2

0x0002,

0xfe7c,	// (0x0005b3f5) popup_discreet_window_t_ParamLimits

0xfe7c,	// (0x0005b3f5) popup_discreet_window_t

0x1ba7,	// (0x0004d120) popup_sk_window_g1

0x1bb1,	// (0x0004d12a) popup_sk_window_g2

0x0001,

0xfe83,	// (0x0005b3fc) popup_sk_window_g

0xbd09,	// (0x00057282) popup_sk_window_t1

0xbd17,	// (0x00057290) popup_sk_window_t1_copy1

0x6e69,	// (0x000523e2) cell_ai5_widget_pane_g2_ParamLimits

0x7004,	// (0x0005257d) cell_ai5_widget_pane_t9_ParamLimits

0x7004,	// (0x0005257d) cell_ai5_widget_pane_t9

0x8ebd,	// (0x00054436) main_fep_fshwr2_pane

0xbd25,	// (0x0005729e) aid_fshwr2_btn_pane

0xbd39,	// (0x000572b2) aid_fshwr2_syb_pane

0xbd4d,	// (0x000572c6) aid_fshwr2_txt_pane

0xbd5d,	// (0x000572d6) fshwr2_func_candi_pane

0xbd7d,	// (0x000572f6) fshwr2_hwr_syb_pane

0xbda1,	// (0x0005731a) fshwr2_icf_pane

0x8ebd,	// (0x00054436) fshwr2_icf_bg_pane

0x1c69,	// (0x0004d1e2) fshwr2_icf_pane_t1_ParamLimits

0x1c69,	// (0x0004d1e2) fshwr2_icf_pane_t1

0xbfbf,	// (0x00057538) fshwr2_func_candi_pane_g1

0xe43b,	// (0x000599b4) fshwr2_func_candi_row_pane_ParamLimits

0xe43b,	// (0x000599b4) fshwr2_func_candi_row_pane

0xbdd1,	// (0x0005734a) cell_fshwr2_syb_pane_ParamLimits

0xbdd1,	// (0x0005734a) cell_fshwr2_syb_pane

0x6c48,	// (0x000521c1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c48,	// (0x000521c1) fshwr2_hwr_syb_pane_g1

0x8ebd,	// (0x00054436) bg_popup_call_pane_cp01

0xbdf7,	// (0x00057370) fshwr2_func_candi_cell_pane_ParamLimits

0xbdf7,	// (0x00057370) fshwr2_func_candi_cell_pane

0x266a,	// (0x0004dbe3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x266a,	// (0x0004dbe3) fshwr2_func_candi_cell_bg_pane

0xbe42,	// (0x000573bb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbe42,	// (0x000573bb) fshwr2_func_candi_cell_pane_g1

0xbe79,	// (0x000573f2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbe79,	// (0x000573f2) fshwr2_func_candi_cell_pane_t1

0x8ebd,	// (0x00054436) bg_button_pane_cp08

0x9d7f,	// (0x000552f8) cell_fshwr2_syb_bg_pane

0xbe94,	// (0x0005740d) cell_fshwr2_syb_bg_pane_g1

0xbea7,	// (0x00057420) cell_fshwr2_syb_bg_pane_t1

0x9b9b,	// (0x00055114) main_tmo_pane

0xc87c,	// (0x00057df5) uni_indicator_pane_g1_ParamLimits

0xc892,	// (0x00057e0b) uni_indicator_pane_g2_ParamLimits

0xc8a8,	// (0x00057e21) uni_indicator_pane_g3_ParamLimits

0x33aa,	// (0x0004e923) uni_indicator_pane_g4_ParamLimits

0x33aa,	// (0x0004e923) uni_indicator_pane_g4

0x33be,	// (0x0004e937) uni_indicator_pane_g5_ParamLimits

0x33be,	// (0x0004e937) uni_indicator_pane_g5

0x33be,	// (0x0004e937) uni_indicator_pane_g6_ParamLimits

0x33be,	// (0x0004e937) uni_indicator_pane_g6

0xf8e6,	// (0x0005ae5f) uni_indicator_pane_g_ParamLimits

0xd696,	// (0x00058c0f) popup_tmo_note_window_ParamLimits

0xd696,	// (0x00058c0f) popup_tmo_note_window

0x9b9b,	// (0x00055114) fshwr2_bg_pane

0xbe6a,	// (0x000573e3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbe6a,	// (0x000573e3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe88,	// (0x0005b401) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe88,	// (0x0005b401) fshwr2_func_candi_cell_pane_g

0x47b1,	// (0x0004fd2a) bg_popup_window_pane_cp01

0x1d4d,	// (0x0004d2c6) bg_popup_window_pane_g1_cp01

0x734c,	// (0x000528c5) bg_popup_window_pane_cp22_ParamLimits

0x734c,	// (0x000528c5) bg_popup_window_pane_cp22

0xe45e,	// (0x000599d7) listscroll_tmo_link_pane_ParamLimits

0xe45e,	// (0x000599d7) listscroll_tmo_link_pane

0x739a,	// (0x00052913) popup_tmo_note_window_g1_ParamLimits

0x739a,	// (0x00052913) popup_tmo_note_window_g1

0xe49e,	// (0x00059a17) tmo_note_info_pane_ParamLimits

0xe49e,	// (0x00059a17) tmo_note_info_pane

0xe4b8,	// (0x00059a31) list_tmo_note_info_pane_g1_ParamLimits

0xe4b8,	// (0x00059a31) list_tmo_note_info_pane_g1

0x73d8,	// (0x00052951) list_tmo_note_info_pane_g2_ParamLimits

0x73d8,	// (0x00052951) list_tmo_note_info_pane_g2

0x0001,

0xfe8d,	// (0x0005b406) list_tmo_note_info_pane_g_ParamLimits

0xfe8d,	// (0x0005b406) list_tmo_note_info_pane_g

0x73f4,	// (0x0005296d) list_tmo_note_info_text_pane_ParamLimits

0x73f4,	// (0x0005296d) list_tmo_note_info_text_pane

0x7475,	// (0x000529ee) list_tmo_link_pane

0x7482,	// (0x000529fb) scroll_pane_cp20

0x748f,	// (0x00052a08) list_single_tmo_link_pane_ParamLimits

0x748f,	// (0x00052a08) list_single_tmo_link_pane

0x749f,	// (0x00052a18) list_single_tmo_link_pane_t1

0x74ad,	// (0x00052a26) list_tmo_note_info_text_pane_t1_ParamLimits

0x74ad,	// (0x00052a26) list_tmo_note_info_text_pane_t1

0x9c57,	// (0x000551d0) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9c57,	// (0x000551d0) aid_size_touch_scroll_bar_cp01

0x8b14,	// (0x0005408d) aid_size_touch_slider_marker

0x9017,	// (0x00054590) popup_settings_window_ParamLimits

0x9017,	// (0x00054590) popup_settings_window

0xe950,	// (0x00059ec9) popup_candi_list_indi_window

0x06d6,	// (0x0004bc4f) aid_touch_navi_pane_ParamLimits

0x13ba,	// (0x0004c933) rs_clock_indi_pane

0x13c3,	// (0x0004c93c) sctrl_sk_bottom_pane_ParamLimits

0x13d4,	// (0x0004c94d) sctrl_sk_top_pane_ParamLimits

0xb967,	// (0x00056ee0) popup_fep_tooltip_window

0x6ddf,	// (0x00052358) aid_size_cell_widget_grid_ParamLimits

0x6e54,	// (0x000523cd) cell_ai5_widget_pane_g1_ParamLimits

0x6e54,	// (0x000523cd) cell_ai5_widget_pane_g1

0x6eb7,	// (0x00052430) cell_ai5_widget_pane_g6_ParamLimits

0x6ec3,	// (0x0005243c) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe01,	// (0x0005b37a) cell_ai5_widget_pane_g_ParamLimits

0xfe01,	// (0x0005b37a) cell_ai5_widget_pane_g

0x7033,	// (0x000525ac) cell_ai5_widget_pane_t10_ParamLimits

0x7033,	// (0x000525ac) cell_ai5_widget_pane_t10

0x7076,	// (0x000525ef) grid_ai5_widget_pane_ParamLimits

0x710e,	// (0x00052687) cell_contacts_ai5_widget_pane_ParamLimits

0x710e,	// (0x00052687) cell_contacts_ai5_widget_pane

0x72e8,	// (0x00052861) popup_discreet_window_t3_ParamLimits

0x72e8,	// (0x00052861) popup_discreet_window_t3

0xbdbd,	// (0x00057336) popup_fshwr2_char_preview_window_ParamLimits

0xbdbd,	// (0x00057336) popup_fshwr2_char_preview_window

0xe4cf,	// (0x00059a48) tmo_note_info_pane_t1

0xe4e4,	// (0x00059a5d) tmo_note_info_pane_t2

0xe4fb,	// (0x00059a74) tmo_note_info_pane_t3

0x7451,	// (0x000529ca) tmo_note_info_pane_t4

0x7463,	// (0x000529dc) tmo_note_info_pane_t5

0x0004,

0xfe92,	// (0x0005b40b) tmo_note_info_pane_t

0x7475,	// (0x000529ee) list_tmo_link_pane_ParamLimits

0x7482,	// (0x000529fb) scroll_pane_cp20_ParamLimits

0x8ebd,	// (0x00054436) bg_popup_fep_char_preview_window_cp01

0xe510,	// (0x00059a89) popup_fshwr2_char_preview_window_t1

0x74d4,	// (0x00052a4d) popup_candi_list_indi_window_g1

0x74dd,	// (0x00052a56) bg_cell_contacts_ai5_widget_pane

0x74e9,	// (0x00052a62) cell_contacts_ai5_widget_pane_g1

0x4e56,	// (0x000503cf) cell_contacts_ai5_widget_pane_g2

0x74fe,	// (0x00052a77) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9d,	// (0x0005b416) cell_contacts_ai5_widget_pane_g

0x750a,	// (0x00052a83) cell_contacts_ai5_widget_pane_t1

0x9b9b,	// (0x00055114) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7581,	// (0x00052afa) settings_container_pane

0xc3fc,	// (0x00057975) listscroll_set_pane_copy1

0x3e8d,	// (0x0004f406) scroll_pane_cp121_copy1

0x2626,	// (0x0004db9f) set_content_pane_copy1

0xe51e,	// (0x00059a97) aid_height_set_list_copy1_ParamLimits

0xe51e,	// (0x00059a97) aid_height_set_list_copy1

0x35b6,	// (0x0004eb2f) aid_size_parent_copy1_ParamLimits

0x35b6,	// (0x0004eb2f) aid_size_parent_copy1

0xe52a,	// (0x00059aa3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe52a,	// (0x00059aa3) button_value_adjust_pane_cp6_copy1

0x9d7f,	// (0x000552f8) list_highlight_pane_cp2_copy1_ParamLimits

0x9d7f,	// (0x000552f8) list_highlight_pane_cp2_copy1

0xe53e,	// (0x00059ab7) list_set_pane_copy1_ParamLimits

0xe53e,	// (0x00059ab7) list_set_pane_copy1

0x751c,	// (0x00052a95) main_pane_set_t1_copy1_ParamLimits

0x751c,	// (0x00052a95) main_pane_set_t1_copy1

0x7556,	// (0x00052acf) main_pane_set_t2_copy1_ParamLimits

0x7556,	// (0x00052acf) main_pane_set_t2_copy1

0xe5eb,	// (0x00059b64) main_pane_set_t3_copy1

0xe5f9,	// (0x00059b72) main_pane_set_t4_copy1

0x7575,	// (0x00052aee) set_content_pane_g1_copy1_ParamLimits

0x7575,	// (0x00052aee) set_content_pane_g1_copy1

0xe607,	// (0x00059b80) setting_code_pane_copy1

0x767e,	// (0x00052bf7) setting_slider_graphic_pane_copy1

0x767e,	// (0x00052bf7) setting_slider_pane_copy1

0x7686,	// (0x00052bff) setting_text_pane_copy1

0x7686,	// (0x00052bff) setting_volume_pane_copy1

0xe607,	// (0x00059b80) settings_code_pane_cp2_copy1

0xe60f,	// (0x00059b88) settings_code_pane_cp_copy1_ParamLimits

0xe60f,	// (0x00059b88) settings_code_pane_cp_copy1

0xbebd,	// (0x00057436) volume_set_pane_copy1

0xe623,	// (0x00059b9c) volume_set_pane_g10_copy1

0xe62b,	// (0x00059ba4) volume_set_pane_g1_copy1

0xe633,	// (0x00059bac) volume_set_pane_g2_copy1

0xe63b,	// (0x00059bb4) volume_set_pane_g3_copy1

0xe643,	// (0x00059bbc) volume_set_pane_g4_copy1

0xe64b,	// (0x00059bc4) volume_set_pane_g5_copy1

0xe653,	// (0x00059bcc) volume_set_pane_g6_copy1

0xe65b,	// (0x00059bd4) volume_set_pane_g7_copy1

0xe663,	// (0x00059bdc) volume_set_pane_g8_copy1

0xe66b,	// (0x00059be4) volume_set_pane_g9_copy1

0x9252,	// (0x000547cb) bg_set_opt_pane_cp_copy1_ParamLimits

0x9252,	// (0x000547cb) bg_set_opt_pane_cp_copy1

0xbec5,	// (0x0005743e) setting_slider_pane_t1_copy1_ParamLimits

0xbec5,	// (0x0005743e) setting_slider_pane_t1_copy1

0xbee4,	// (0x0005745d) setting_slider_pane_t2_copy1_ParamLimits

0xbee4,	// (0x0005745d) setting_slider_pane_t2_copy1

0xbefe,	// (0x00057477) setting_slider_pane_t3_copy1_ParamLimits

0xbefe,	// (0x00057477) setting_slider_pane_t3_copy1

0xbf16,	// (0x0005748f) slider_set_pane_copy1_ParamLimits

0xbf16,	// (0x0005748f) slider_set_pane_copy1

0x9bf3,	// (0x0005516c) set_opt_bg_pane_g1_copy2

0x9bfb,	// (0x00055174) set_opt_bg_pane_g2_copy2

0x76f2,	// (0x00052c6b) set_opt_bg_pane_g3_copy2

0x9c0b,	// (0x00055184) set_opt_bg_pane_g4_copy2

0x9c13,	// (0x0005518c) set_opt_bg_pane_g5_copy2

0x9c1b,	// (0x00055194) set_opt_bg_pane_g6_copy2

0xe673,	// (0x00059bec) set_opt_bg_pane_g7_copy2

0x7704,	// (0x00052c7d) set_opt_bg_pane_g8_copy2

0x770e,	// (0x00052c87) set_opt_bg_pane_g9_copy2

0xbf2c,	// (0x000574a5) aid_size_touch_slider_mark_copy1_ParamLimits

0xbf2c,	// (0x000574a5) aid_size_touch_slider_mark_copy1

0xe67b,	// (0x00059bf4) slider_set_pane_g1_copy1

0x1dd9,	// (0x0004d352) slider_set_pane_g2_copy1

0xb6aa,	// (0x00056c23) slider_set_pane_g3_copy1_ParamLimits

0xb6aa,	// (0x00056c23) slider_set_pane_g3_copy1

0xb6be,	// (0x00056c37) slider_set_pane_g4_copy1_ParamLimits

0xb6be,	// (0x00056c37) slider_set_pane_g4_copy1

0xb6d6,	// (0x00056c4f) slider_set_pane_g5_copy1_ParamLimits

0xb6d6,	// (0x00056c4f) slider_set_pane_g5_copy1

0xb6aa,	// (0x00056c23) slider_set_pane_g6_copy1_ParamLimits

0xb6aa,	// (0x00056c23) slider_set_pane_g6_copy1

0xbf40,	// (0x000574b9) slider_set_pane_g7_copy1_ParamLimits

0xbf40,	// (0x000574b9) slider_set_pane_g7_copy1

0x8fb7,	// (0x00054530) bg_set_opt_pane_cp2_copy1

0xe684,	// (0x00059bfd) setting_slider_graphic_pane_g1_copy1

0xe68d,	// (0x00059c06) setting_slider_graphic_pane_t1_copy1

0xe69d,	// (0x00059c16) setting_slider_graphic_pane_t2_copy1

0xe6ad,	// (0x00059c26) slider_set_pane_cp_copy1

0x775a,	// (0x00052cd3) input_focus_pane_cp1_copy1

0x7763,	// (0x00052cdc) list_set_text_pane_copy1

0x776b,	// (0x00052ce4) setting_text_pane_g1_copy1

0xeea8,	// (0x0005a421) set_text_pane_t1_copy1

0x775a,	// (0x00052cd3) input_focus_pane_cp2_copy1

0x776b,	// (0x00052ce4) setting_code_pane_g1_copy1

0x7774,	// (0x00052ced) setting_code_pane_t1_copy1

0x7782,	// (0x00052cfb) list_set_graphic_pane_copy1

0x8fb7,	// (0x00054530) bg_set_opt_pane_cp4_copy1

0xc19a,	// (0x00057713) list_set_graphic_pane_g1_copy1_ParamLimits

0xc19a,	// (0x00057713) list_set_graphic_pane_g1_copy1

0x7796,	// (0x00052d0f) list_set_graphic_pane_g2_copy1

0xc1b2,	// (0x0005772b) list_set_graphic_pane_t1_copy1_ParamLimits

0xc1b2,	// (0x0005772b) list_set_graphic_pane_t1_copy1

0x47b1,	// (0x0004fd2a) rs_clock_indi_pane_g1

0x779e,	// (0x00052d17) rs_clock_indi_pane_t1

0x77ac,	// (0x00052d25) rs_indi_pane

0x77b4,	// (0x00052d2d) rs_indi_pane_g1

0x77bd,	// (0x00052d36) rs_indi_pane_g2

0x74d4,	// (0x00052a4d) rs_indi_pane_g3

0x0002,

0xfea4,	// (0x0005b41d) rs_indi_pane_g

0xc3fc,	// (0x00057975) bg_popup_preview_window_pane_cp03

0x77c6,	// (0x00052d3f) popup_fep_tooltip_window_t1

0xd33c,	// (0x000588b5) popup_note2_window_g2_ParamLimits

0xd33c,	// (0x000588b5) popup_note2_window_g2

0x0001,

0xfc38,	// (0x0005b1b1) popup_note2_window_g_ParamLimits

0xfc38,	// (0x0005b1b1) popup_note2_window_g

0x591f,	// (0x00050e98) bg_popup_sub_pane_cp11_ParamLimits

0x592c,	// (0x00050ea5) cell_ai3_links_pane_g1_ParamLimits

0x5943,	// (0x00050ebc) cell_ai3_links_pane_t1

0xeea8,	// (0x0005a421) set_text_pane_t1_copy1_ParamLimits

0xa3d9,	// (0x00055952) cell_graphic_popup_pane_cp2_ParamLimits

0xa3d9,	// (0x00055952) cell_graphic_popup_pane_cp2

0xeec2,	// (0x0005a43b) cell_graphic_popup_pane_g1_cp2

0x990b,	// (0x00054e84) cell_graphic_popup_pane_g2_cp2

0x77dc,	// (0x00052d55) cell_graphic_popup_pane_g3_cp2

0xeeca,	// (0x0005a443) cell_graphic_popup_pane_t2_cp2

0x991c,	// (0x00054e95) grid_highlight_pane_cp3_cp2

0x9f38,	// (0x000554b1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x9b9b,	// (0x00055114) main_tmo_pane_ParamLimits

0xd68a,	// (0x00058c03) popup_tmo_big_image_note_window

0x6e43,	// (0x000523bc) cell_ai5_widget_list_pane

0x6e4b,	// (0x000523c4) cell_ai5_widget_lrg_icon_pane

0xe4cf,	// (0x00059a48) tmo_note_info_pane_t1_ParamLimits

0xe4e4,	// (0x00059a5d) tmo_note_info_pane_t2_ParamLimits

0xe4fb,	// (0x00059a74) tmo_note_info_pane_t3_ParamLimits

0x7451,	// (0x000529ca) tmo_note_info_pane_t4_ParamLimits

0x7463,	// (0x000529dc) tmo_note_info_pane_t5_ParamLimits

0xfe92,	// (0x0005b40b) tmo_note_info_pane_t_ParamLimits

0x7581,	// (0x00052afa) settings_container_pane_ParamLimits

0xe6b5,	// (0x00059c2e) indicator_popup_pane_cp5

0xe6b5,	// (0x00059c2e) indicator_popup_pane_cp6

0x7782,	// (0x00052cfb) list_set_graphic_pane_copy1_ParamLimits

0x8ebd,	// (0x00054436) bg_popup_window_pane_cp23

0x77f2,	// (0x00052d6b) popup_tmo_big_image_note_window_g1

0x77fb,	// (0x00052d74) popup_tmo_big_image_note_window_t1

0x780b,	// (0x00052d84) popup_tmo_big_image_note_window_t2

0x781b,	// (0x00052d94) popup_tmo_big_image_note_window_t3

0x0002,

0xfeab,	// (0x0005b424) popup_tmo_big_image_note_window_t

0x47b1,	// (0x0004fd2a) cell_ai5_widget_lrg_icon_pane_g1

0x782b,	// (0x00052da4) cell_ai5_widget_lrg_icon_pane_t1

0x7839,	// (0x00052db2) cell_ai5_widget_list_row_pane_ParamLimits

0x7839,	// (0x00052db2) cell_ai5_widget_list_row_pane

0x7850,	// (0x00052dc9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7850,	// (0x00052dc9) cell_ai5_widget_list_row_pane_g1

0xeed8,	// (0x0005a451) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeed8,	// (0x0005a451) cell_ai5_widget_list_row_pane_t1

0x7888,	// (0x00052e01) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7888,	// (0x00052e01) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb2,	// (0x0005b42b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb2,	// (0x0005b42b) cell_ai5_widget_list_row_pane_t

0x8ebd,	// (0x00054436) main_fep_vtchi_ss_pane

0x78d8,	// (0x00052e51) popup_fep_char_pre_window

0x78e0,	// (0x00052e59) popup_fep_ituss_window

0xef33,	// (0x0005a4ac) popup_fep_vkbss_window

0x9d7f,	// (0x000552f8) grid_vkbss_keypad_pane_ParamLimits

0x9d7f,	// (0x000552f8) grid_vkbss_keypad_pane

0x794c,	// (0x00052ec5) ituss_keypad_pane

0x1e03,	// (0x0004d37c) aid_vkbss_key_offset_ParamLimits

0x1e03,	// (0x0004d37c) aid_vkbss_key_offset

0xbf56,	// (0x000574cf) cell_vkbss_key_pane_ParamLimits

0xbf56,	// (0x000574cf) cell_vkbss_key_pane

0x795b,	// (0x00052ed4) bg_cell_vkbss_key_g1_ParamLimits

0x795b,	// (0x00052ed4) bg_cell_vkbss_key_g1

0xef40,	// (0x0005a4b9) cell_vkbss_key_3p_pane_ParamLimits

0xef40,	// (0x0005a4b9) cell_vkbss_key_3p_pane

0xef76,	// (0x0005a4ef) cell_vkbss_key_g1_ParamLimits

0xef76,	// (0x0005a4ef) cell_vkbss_key_g1

0xefac,	// (0x0005a525) cell_vkbss_key_t1_ParamLimits

0xefac,	// (0x0005a525) cell_vkbss_key_t1

0x1e43,	// (0x0004d3bc) cell_ituss_key_pane_ParamLimits

0x1e43,	// (0x0004d3bc) cell_ituss_key_pane

0x7a2f,	// (0x00052fa8) bg_cell_ituss_key_g1_ParamLimits

0x7a2f,	// (0x00052fa8) bg_cell_ituss_key_g1

0x7a3b,	// (0x00052fb4) cell_ituss_key_pane_g1_ParamLimits

0x7a3b,	// (0x00052fb4) cell_ituss_key_pane_g1

0x1e54,	// (0x0004d3cd) cell_ituss_key_pane_g2_ParamLimits

0x1e54,	// (0x0004d3cd) cell_ituss_key_pane_g2

0x0005,

0xfeb9,	// (0x0005b432) cell_ituss_key_pane_g_ParamLimits

0xfeb9,	// (0x0005b432) cell_ituss_key_pane_g

0x1ed8,	// (0x0004d451) cell_ituss_key_t1_ParamLimits

0x1ed8,	// (0x0004d451) cell_ituss_key_t1

0x1f12,	// (0x0004d48b) cell_ituss_key_t2_ParamLimits

0x1f12,	// (0x0004d48b) cell_ituss_key_t2

0x1f43,	// (0x0004d4bc) cell_ituss_key_t3_ParamLimits

0x1f43,	// (0x0004d4bc) cell_ituss_key_t3

0x1f12,	// (0x0004d48b) cell_ituss_key_t4_ParamLimits

0x1f12,	// (0x0004d48b) cell_ituss_key_t4

0x0004,

0xfec6,	// (0x0005b43f) cell_ituss_key_t_ParamLimits

0xfec6,	// (0x0005b43f) cell_ituss_key_t

0xf008,	// (0x0005a581) cell_vkbss_key_3p_pane_g1

0xf010,	// (0x0005a589) cell_vkbss_key_3p_pane_g2

0xf018,	// (0x0005a591) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed1,	// (0x0005b44a) cell_vkbss_key_3p_pane_g

0xc3fc,	// (0x00057975) bg_popup_fep_char_preview_window_cp02

0x7a79,	// (0x00052ff2) popup_fep_char_pre_window_t1

0xe357,	// (0x000598d0) main_ai5_sk_pane

0x74dd,	// (0x00052a56) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74e9,	// (0x00052a62) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e56,	// (0x000503cf) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x74fe,	// (0x00052a77) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9d,	// (0x0005b416) cell_contacts_ai5_widget_pane_g_ParamLimits

0x750a,	// (0x00052a83) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x9b9b,	// (0x00055114) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf020,	// (0x0005a599) main_ai5_sk_pane_g1

0xb583,	// (0x00056afc) popup_query_code_window_g1

0xef24,	// (0x0005a49d) popup_fep_vkb_icf_pane

0x7923,	// (0x00052e9c) popup_fep_vtchi_icf_pane

0x9d7f,	// (0x000552f8) bg_icf_pane

0x9d7f,	// (0x000552f8) list_vkb_icf_pane

0x7a90,	// (0x00053009) bg_icf_pane_cp01

0x7aa3,	// (0x0005301c) vtchi_icf_list_pane

0xf075,	// (0x0005a5ee) list_vkb_icf_pane_t1_ParamLimits

0xf075,	// (0x0005a5ee) list_vkb_icf_pane_t1

0x7b2d,	// (0x000530a6) vtchi_icf_list_pane_t1_ParamLimits

0x7b2d,	// (0x000530a6) vtchi_icf_list_pane_t1

0x78e0,	// (0x00052e59) popup_fep_ituss_window_ParamLimits

0x7923,	// (0x00052e9c) popup_fep_vtchi_icf_pane_ParamLimits

0x794c,	// (0x00052ec5) ituss_keypad_pane_ParamLimits

0x1df7,	// (0x0004d370) ituss_sks_pane

0x9d7f,	// (0x000552f8) bg_icf_pane_ParamLimits

0xef09,	// (0x0005a482) icf_edit_indi_pane_ParamLimits

0xef09,	// (0x0005a482) icf_edit_indi_pane

0x9d7f,	// (0x000552f8) list_vkb_icf_pane_ParamLimits

0x7a90,	// (0x00053009) bg_icf_pane_cp01_ParamLimits

0x78cb,	// (0x00052e44) icf_edit_indi_pane_cp01_ParamLimits

0x78cb,	// (0x00052e44) icf_edit_indi_pane_cp01

0x7aab,	// (0x00053024) vtchi_query_pane

0x6c48,	// (0x000521c1) icf_edit_indi_pane_g1_ParamLimits

0x6c48,	// (0x000521c1) icf_edit_indi_pane_g1

0xf08d,	// (0x0005a606) icf_edit_indi_pane_g2_ParamLimits

0xf08d,	// (0x0005a606) icf_edit_indi_pane_g2

0x0001,

0xfefc,	// (0x0005b475) icf_edit_indi_pane_g_ParamLimits

0xfefc,	// (0x0005b475) icf_edit_indi_pane_g

0xf0a1,	// (0x0005a61a) icf_edit_indi_pane_t1

0x7b4e,	// (0x000530c7) bg_input_focus_pane_cp042

0x9a82,	// (0x00054ffb) vtchi_button_pane

0x7b57,	// (0x000530d0) vtchi_query_pane_t1

0x7b65,	// (0x000530de) vtchi_query_pane_t2

0x7b73,	// (0x000530ec) vtchi_query_pane_t3

0x0002,

0xfeeb,	// (0x0005b464) vtchi_query_pane_t

0x8ebd,	// (0x00054436) bg_button_pane_cp13

0x7b81,	// (0x000530fa) vtchi_button_pane_g1

0x1f86,	// (0x0004d4ff) ituss_sks_pane_g1

0x1f91,	// (0x0004d50a) ituss_sks_pane_g2

0x0001,

0xfef2,	// (0x0005b46b) ituss_sks_pane_g

0x7b89,	// (0x00053102) ituss_sks_pane_t1

0x7b97,	// (0x00053110) ituss_sks_pane_t2

0x0001,

0xfef7,	// (0x0005b470) ituss_sks_pane_t

0x4225,	// (0x0004f79e) indicator_nsta_pane_cp_g1

0x422e,	// (0x0004f7a7) indicator_nsta_pane_cp_g2

0x4236,	// (0x0004f7af) indicator_nsta_pane_cp_g3

0x423e,	// (0x0004f7b7) indicator_nsta_pane_cp_g4

0x422e,	// (0x0004f7a7) indicator_nsta_pane_cp_g5

0x4236,	// (0x0004f7af) indicator_nsta_pane_cp_g6

0x0005,

0xfa82,	// (0x0005affb) indicator_nsta_pane_cp_g

0xe130,	// (0x000596a9) cell_graphic2_pane_t2_ParamLimits

0xe130,	// (0x000596a9) cell_graphic2_pane_t2

0x0001,

0xfd88,	// (0x0005b301) cell_graphic2_pane_t_ParamLimits

0xfd88,	// (0x0005b301) cell_graphic2_pane_t

0xe167,	// (0x000596e0) cell_graphic2_control_pane_t1

0xa296,	// (0x0005580f) signal_pane_g3_ParamLimits

0xa296,	// (0x0005580f) signal_pane_g3

0xa2aa,	// (0x00055823) signal_pane_g4_ParamLimits

0xa2aa,	// (0x00055823) signal_pane_g4

0x789a,	// (0x00052e13) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x789a,	// (0x00052e13) cell_ai5_widget_list_row_pane_t3

0x7a4f,	// (0x00052fc8) cell_ituss_key_pane_t1_ParamLimits

0x7a4f,	// (0x00052fc8) cell_ituss_key_pane_t1

0x22f5,	// (0x0004d86e) form_field_data_wide_pane_vc_t2_ParamLimits

0x22f5,	// (0x0004d86e) form_field_data_wide_pane_vc_t2

0x2309,	// (0x0004d882) form_field_data_wide_pane_vc_t3_ParamLimits

0x2309,	// (0x0004d882) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x0005ad47) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x0005ad47) form_field_data_wide_pane_vc_t

0x3ecf,	// (0x0004f448) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3ecf,	// (0x0004f448) form_field_slider_wide_pane_vc_t3

0x3fad,	// (0x0004f526) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3fad,	// (0x0004f526) form_field_popup_wide_pane_vc_t2

0x3fc4,	// (0x0004f53d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3fc4,	// (0x0004f53d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa71,	// (0x0005afea) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x0005afea) form_field_popup_wide_pane_vc_t

0xbd25,	// (0x0005729e) aid_fshwr2_btn_pane_ParamLimits

0xbd39,	// (0x000572b2) aid_fshwr2_syb_pane_ParamLimits

0xbd4d,	// (0x000572c6) aid_fshwr2_txt_pane_ParamLimits

0x9b9b,	// (0x00055114) fshwr2_bg_pane_ParamLimits

0xbd5d,	// (0x000572d6) fshwr2_func_candi_pane_ParamLimits

0xbd7d,	// (0x000572f6) fshwr2_hwr_syb_pane_ParamLimits

0xbda1,	// (0x0005731a) fshwr2_icf_pane_ParamLimits

0x0ee6,	// (0x0004c45f) list_double_graphic_pane_vc_g4_ParamLimits

0x0ee6,	// (0x0004c45f) list_double_graphic_pane_vc_g4

0x1e74,	// (0x0004d3ed) cell_ituss_key_pane_g3_ParamLimits

0x1e74,	// (0x0004d3ed) cell_ituss_key_pane_g3

0x1f74,	// (0x0004d4ed) cell_ituss_key_t5_ParamLimits

0x1f74,	// (0x0004d4ed) cell_ituss_key_t5

0xef33,	// (0x0005a4ac) popup_fep_vkbss_window_ParamLimits

0x6dd6,	// (0x0005234f) aid_cell_ai5_quarter

0xf0a1,	// (0x0005a61a) icf_edit_indi_pane_t1_ParamLimits

0x9664,	// (0x00054bdd) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9664,	// (0x00054bdd) aid_tch_indicator_popup_pane_cp2

0x9677,	// (0x00054bf0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9677,	// (0x00054bf0) aid_tch_query_popup_data_pane_cp2

0x266a,	// (0x0004dbe3) aid_tch_query_popup_pane_ParamLimits

0x266a,	// (0x0004dbe3) aid_tch_query_popup_pane

0x266a,	// (0x0004dbe3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x266a,	// (0x0004dbe3) aid_tch_query_popup_data_pane_cp1

0x9d7f,	// (0x000552f8) cell_fshwr2_syb_bg_pane_ParamLimits

0xbe94,	// (0x0005740d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbea7,	// (0x00057420) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xef24,	// (0x0005a49d) popup_fep_vkb_icf_pane_ParamLimits

0xbc8b,	// (0x00057204) bg_popup_fep_char_preview_window_g10

0x6f0b,	// (0x00052484) cell_ai5_widget_pane_g11_ParamLimits

0x6f0b,	// (0x00052484) cell_ai5_widget_pane_g11

0x6f17,	// (0x00052490) cell_ai5_widget_pane_g12_ParamLimits

0x6f17,	// (0x00052490) cell_ai5_widget_pane_g12

0x6f23,	// (0x0005249c) cell_ai5_widget_pane_g13_ParamLimits

0x6f23,	// (0x0005249c) cell_ai5_widget_pane_g13

0x7052,	// (0x000525cb) cell_ai5_widget_pane_t11_ParamLimits

0x7052,	// (0x000525cb) cell_ai5_widget_pane_t11

0x7064,	// (0x000525dd) cell_ai5_widget_pane_t12_ParamLimits

0x7064,	// (0x000525dd) cell_ai5_widget_pane_t12

0x1e80,	// (0x0004d3f9) cell_ituss_key_pane_g4_ParamLimits

0x1e80,	// (0x0004d3f9) cell_ituss_key_pane_g4

0x1e9c,	// (0x0004d415) cell_ituss_key_pane_g5_ParamLimits

0x1e9c,	// (0x0004d415) cell_ituss_key_pane_g5

0x1eb8,	// (0x0004d431) cell_ituss_key_pane_g6_ParamLimits

0x1eb8,	// (0x0004d431) cell_ituss_key_pane_g6

0x21db,	// (0x0004d754) bg_icf_pane_g1

0xf029,	// (0x0005a5a2) bg_icf_pane_g2

0xf033,	// (0x0005a5ac) bg_icf_pane_g3

0xf03b,	// (0x0005a5b4) bg_icf_pane_g4

0xf045,	// (0x0005a5be) bg_icf_pane_g5

0xf04f,	// (0x0005a5c8) bg_icf_pane_g6

0xf059,	// (0x0005a5d2) bg_icf_pane_g7

0xf061,	// (0x0005a5da) bg_icf_pane_g8

0xf06b,	// (0x0005a5e4) bg_icf_pane_g9

0x0008,

0xfed8,	// (0x0005b451) bg_icf_pane_g

0x7939,	// (0x00052eb2) popup_hyb_candi_window_ParamLimits

0x7939,	// (0x00052eb2) popup_hyb_candi_window

0x2267,	// (0x0004d7e0) bg_popup_sub_pane_cp01_ParamLimits

0x2267,	// (0x0004d7e0) bg_popup_sub_pane_cp01

0x7bd2,	// (0x0005314b) entry_hyb_candi_pane_ParamLimits

0x7bd2,	// (0x0005314b) entry_hyb_candi_pane

0x7be1,	// (0x0005315a) grid_hyb_candi_pane_ParamLimits

0x7be1,	// (0x0005315a) grid_hyb_candi_pane

0x7bf6,	// (0x0005316f) grid_hyb_phrase_pane_ParamLimits

0x7bf6,	// (0x0005316f) grid_hyb_phrase_pane

0x7c05,	// (0x0005317e) cell_hyb_candi_pane_ParamLimits

0x7c05,	// (0x0005317e) cell_hyb_candi_pane

0x7c28,	// (0x000531a1) cell_hyb_candi_scroll_pane

0xbfbf,	// (0x00057538) cell_hyb_candi_pane_g1

0x7c31,	// (0x000531aa) cell_hyb_candi_pane_t1

0x7c3f,	// (0x000531b8) cell_hyb_phrase_pane

0xbfbf,	// (0x00057538) cell_hyb_phrase_pane_g1

0x7c48,	// (0x000531c1) cell_hyb_phrase_pane_t1

0x7c56,	// (0x000531cf) entry_hyb_candi_pane_t1

0xc3fc,	// (0x00057975) input_focus_pane_cp06

0x7c64,	// (0x000531dd) cell_hyb_candi_scroll_pane_g1

0x7c6c,	// (0x000531e5) cell_hyb_candi_scroll_pane_g1_aid

0x7c74,	// (0x000531ed) cell_hyb_candi_scroll_pane_g2

0x7c7c,	// (0x000531f5) cell_hyb_candi_scroll_pane_g2_aid

0x7c84,	// (0x000531fd) cell_hyb_candi_scroll_pane_g3

0x7c8c,	// (0x00053205) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large

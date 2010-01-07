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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002ab43 };

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
0x71ac,	// (0x00031cef) Screen

0x71c0,	// (0x00031d03) application_window_ParamLimits

0x71c0,	// (0x00031d03) application_window

0x71da,	// (0x00031d1d) screen_g1

0x4c45,	// (0x0002f788) area_bottom_pane_ParamLimits

0x4c45,	// (0x0002f788) area_bottom_pane

0x4d05,	// (0x0002f848) area_top_pane_ParamLimits

0x4d05,	// (0x0002f848) area_top_pane

0x4da3,	// (0x0002f8e6) main_pane_ParamLimits

0x4da3,	// (0x0002f8e6) main_pane

0x71e4,	// (0x00031d27) misc_graphics

0x976d,	// (0x000342b0) battery_pane_ParamLimits

0x976d,	// (0x000342b0) battery_pane

0xa44f,	// (0x00034f92) bg_status_flat_pane_g8

0xa457,	// (0x00034f9a) bg_status_flat_pane_g9

0x9835,	// (0x00034378) context_pane_ParamLimits

0x9835,	// (0x00034378) context_pane

0x9959,	// (0x0003449c) navi_pane_ParamLimits

0x9959,	// (0x0003449c) navi_pane

0x99e8,	// (0x0003452b) signal_pane_ParamLimits

0x99e8,	// (0x0003452b) signal_pane

0x0008,

0xf8b2,	// (0x0003a3f5) bg_status_flat_pane_g

0x9a55,	// (0x00034598) status_pane_g1_ParamLimits

0x9a55,	// (0x00034598) status_pane_g1

0x9a69,	// (0x000345ac) status_pane_g2_ParamLimits

0x9a69,	// (0x000345ac) status_pane_g2

0x9a75,	// (0x000345b8) status_pane_g3_ParamLimits

0x9a75,	// (0x000345b8) status_pane_g3

0x0004,

0xf7e0,	// (0x0003a323) status_pane_g_ParamLimits

0xf7e0,	// (0x0003a323) status_pane_g

0x9aa9,	// (0x000345ec) title_pane_ParamLimits

0x9aa9,	// (0x000345ec) title_pane

0x9ae6,	// (0x00034629) uni_indicator_pane_ParamLimits

0x9ae6,	// (0x00034629) uni_indicator_pane

0x9056,	// (0x00033b99) bg_list_pane_ParamLimits

0x9056,	// (0x00033b99) bg_list_pane

0x9076,	// (0x00033bb9) find_pane

0x907e,	// (0x00033bc1) listscroll_app_pane_ParamLimits

0x907e,	// (0x00033bc1) listscroll_app_pane

0x908a,	// (0x00033bcd) listscroll_form_pane

0x9092,	// (0x00033bd5) listscroll_gen_pane_ParamLimits

0x9092,	// (0x00033bd5) listscroll_gen_pane

0x908a,	// (0x00033bcd) listscroll_set_pane

0x82cb,	// (0x00032e0e) main_idle_act_pane

0x8d32,	// (0x00033875) main_idle_trad_pane

0x8d32,	// (0x00033875) main_list_empty_pane

0x90b8,	// (0x00033bfb) main_midp_pane

0x90c4,	// (0x00033c07) main_pane_g1_ParamLimits

0x90c4,	// (0x00033c07) main_pane_g1

0x90d2,	// (0x00033c15) popup_ai_message_window_ParamLimits

0x90d2,	// (0x00033c15) popup_ai_message_window

0x9182,	// (0x00033cc5) popup_fep_china_uni_window_ParamLimits

0x9182,	// (0x00033cc5) popup_fep_china_uni_window

0x91e2,	// (0x00033d25) popup_fep_japan_candidate_window_ParamLimits

0x91e2,	// (0x00033d25) popup_fep_japan_candidate_window

0x920c,	// (0x00033d4f) popup_fep_japan_predictive_window_ParamLimits

0x920c,	// (0x00033d4f) popup_fep_japan_predictive_window

0x9242,	// (0x00033d85) popup_find_window

0x924f,	// (0x00033d92) popup_grid_graphic_window_ParamLimits

0x924f,	// (0x00033d92) popup_grid_graphic_window

0x927d,	// (0x00033dc0) popup_large_graphic_colour_window

0x92a3,	// (0x00033de6) popup_menu_window_ParamLimits

0x92a3,	// (0x00033de6) popup_menu_window

0x9479,	// (0x00033fbc) popup_note_image_window

0x9463,	// (0x00033fa6) popup_note_wait_window_ParamLimits

0x9463,	// (0x00033fa6) popup_note_wait_window

0x9463,	// (0x00033fa6) popup_note_window_ParamLimits

0x9463,	// (0x00033fa6) popup_note_window

0x94df,	// (0x00034022) popup_query_code_window_ParamLimits

0x94df,	// (0x00034022) popup_query_code_window

0x94f5,	// (0x00034038) popup_query_data_code_window_ParamLimits

0x94f5,	// (0x00034038) popup_query_data_code_window

0x9518,	// (0x0003405b) popup_query_data_window_ParamLimits

0x9518,	// (0x0003405b) popup_query_data_window

0x953a,	// (0x0003407d) popup_query_sat_info_window_ParamLimits

0x953a,	// (0x0003407d) popup_query_sat_info_window

0x9579,	// (0x000340bc) popup_snote_single_graphic_window_ParamLimits

0x9579,	// (0x000340bc) popup_snote_single_graphic_window

0x9579,	// (0x000340bc) popup_snote_single_text_window_ParamLimits

0x9579,	// (0x000340bc) popup_snote_single_text_window

0x9590,	// (0x000340d3) popup_sub_window_general

0x96d6,	// (0x00034219) popup_window_general_ParamLimits

0x96d6,	// (0x00034219) popup_window_general

0x96ef,	// (0x00034232) power_save_pane

0x5ccd,	// (0x00030810) control_pane_g1_ParamLimits

0x5ccd,	// (0x00030810) control_pane_g1

0x5cf6,	// (0x00030839) control_pane_g2_ParamLimits

0x5cf6,	// (0x00030839) control_pane_g2

0x8fff,	// (0x00033b42) control_pane_g3_ParamLimits

0x8fff,	// (0x00033b42) control_pane_g3

0x0007,

0xf7c8,	// (0x0003a30b) control_pane_g_ParamLimits

0xf7c8,	// (0x0003a30b) control_pane_g

0x5d41,	// (0x00030884) control_pane_t1_ParamLimits

0x5d41,	// (0x00030884) control_pane_t1

0x5d93,	// (0x000308d6) control_pane_t2_ParamLimits

0x5d93,	// (0x000308d6) control_pane_t2

0x0002,

0xf7d9,	// (0x0003a31c) control_pane_t_ParamLimits

0xf7d9,	// (0x0003a31c) control_pane_t

0x8f20,	// (0x00033a63) navi_navi_volume_pane_cp1

0x8f29,	// (0x00033a6c) status_small_icon_pane

0x8f31,	// (0x00033a74) status_small_pane_g1_ParamLimits

0x8f31,	// (0x00033a74) status_small_pane_g1

0x8f65,	// (0x00033aa8) status_small_pane_g2_ParamLimits

0x8f65,	// (0x00033aa8) status_small_pane_g2

0x8f71,	// (0x00033ab4) status_small_pane_g3_ParamLimits

0x8f71,	// (0x00033ab4) status_small_pane_g3

0x8f7d,	// (0x00033ac0) status_small_pane_g4_ParamLimits

0x8f7d,	// (0x00033ac0) status_small_pane_g4

0x8f89,	// (0x00033acc) status_small_pane_g5_ParamLimits

0x8f89,	// (0x00033acc) status_small_pane_g5

0x8f98,	// (0x00033adb) status_small_pane_g6_ParamLimits

0x8f98,	// (0x00033adb) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0003a2fa) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0003a2fa) status_small_pane_g

0x8fc8,	// (0x00033b0b) status_small_pane_t1

0x8feb,	// (0x00033b2e) status_small_wait_pane_ParamLimits

0x8feb,	// (0x00033b2e) status_small_wait_pane

0x87c9,	// (0x0003330c) aid_levels_signal_ParamLimits

0x87c9,	// (0x0003330c) aid_levels_signal

0x87db,	// (0x0003331e) signal_pane_g1_ParamLimits

0x87db,	// (0x0003331e) signal_pane_g1

0x87f0,	// (0x00033333) signal_pane_g2_ParamLimits

0x87f0,	// (0x00033333) signal_pane_g2

0x0001,

0xf74c,	// (0x0003a28f) signal_pane_g_ParamLimits

0xf74c,	// (0x0003a28f) signal_pane_g

0x8805,	// (0x00033348) context_pane_g1

0x71ee,	// (0x00031d31) title_pane_g1

0x7224,	// (0x00031d67) title_pane_t1

0x728c,	// (0x00031dcf) title_pane_t2

0x72b2,	// (0x00031df5) title_pane_t3

0x0002,

0xf59b,	// (0x0003a0de) title_pane_t

0x9afe,	// (0x00034641) aid_levels_battery_ParamLimits

0x9afe,	// (0x00034641) aid_levels_battery

0x9b12,	// (0x00034655) battery_pane_g1_ParamLimits

0x9b12,	// (0x00034655) battery_pane_g1

0x9b28,	// (0x0003466b) battery_pane_g2_ParamLimits

0x9b28,	// (0x0003466b) battery_pane_g2

0x0001,

0xf7eb,	// (0x0003a32e) battery_pane_g_ParamLimits

0xf7eb,	// (0x0003a32e) battery_pane_g

0xad9f,	// (0x000358e2) uni_indicator_pane_g1

0xadb4,	// (0x000358f7) uni_indicator_pane_g2

0xadca,	// (0x0003590d) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0003a49d) uni_indicator_pane_g

0x8ba0,	// (0x000336e3) navi_icon_pane_ParamLimits

0x8ba0,	// (0x000336e3) navi_icon_pane

0x8ae7,	// (0x0003362a) navi_midp_pane

0x8bbc,	// (0x000336ff) navi_navi_pane

0x8bc6,	// (0x00033709) navi_text_pane_ParamLimits

0x8bc6,	// (0x00033709) navi_text_pane

0x71da,	// (0x00031d1d) status_small_wait_pane_g1

0x76f6,	// (0x00032239) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0003a498) status_small_wait_pane_g

0xaab2,	// (0x000355f5) navi_navi_icon_text_pane

0xaaba,	// (0x000355fd) navi_navi_pane_g1_ParamLimits

0xaaba,	// (0x000355fd) navi_navi_pane_g1

0xaacc,	// (0x0003560f) navi_navi_pane_g2_ParamLimits

0xaacc,	// (0x0003560f) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0003a466) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0003a466) navi_navi_pane_g

0xaade,	// (0x00035621) navi_navi_tabs_pane

0xaae7,	// (0x0003562a) navi_navi_text_pane

0xaab2,	// (0x000355f5) navi_navi_volume_pane

0xaa8b,	// (0x000355ce) navi_text_pane_t1

0xaa7c,	// (0x000355bf) navi_icon_pane_g1

0xa9cf,	// (0x00035512) navi_navi_text_pane_t1

0x6188,	// (0x00030ccb) navi_navi_volume_pane_g1

0x6190,	// (0x00030cd3) volume_small_pane

0xa935,	// (0x00035478) navi_navi_icon_text_pane_g1

0xa93d,	// (0x00035480) navi_navi_icon_text_pane_t1

0x8bbc,	// (0x000336ff) navi_tabs_2_long_pane

0x8bbc,	// (0x000336ff) navi_tabs_2_pane

0x8bbc,	// (0x000336ff) navi_tabs_3_long_pane

0x8bbc,	// (0x000336ff) navi_tabs_3_pane

0x8bbc,	// (0x000336ff) navi_tabs_4_pane

0x6168,	// (0x00030cab) tabs_2_active_pane_ParamLimits

0x6168,	// (0x00030cab) tabs_2_active_pane

0x6178,	// (0x00030cbb) tabs_2_passive_pane_ParamLimits

0x6178,	// (0x00030cbb) tabs_2_passive_pane

0x6136,	// (0x00030c79) tabs_3_active_pane_ParamLimits

0x6136,	// (0x00030c79) tabs_3_active_pane

0x6146,	// (0x00030c89) tabs_3_passive_pane_ParamLimits

0x6146,	// (0x00030c89) tabs_3_passive_pane

0x6157,	// (0x00030c9a) tabs_3_passive_pane_cp_ParamLimits

0x6157,	// (0x00030c9a) tabs_3_passive_pane_cp

0x60ea,	// (0x00030c2d) tabs_4_active_pane_ParamLimits

0x60ea,	// (0x00030c2d) tabs_4_active_pane

0x60fd,	// (0x00030c40) tabs_4_passive_pane_ParamLimits

0x60fd,	// (0x00030c40) tabs_4_passive_pane

0x610e,	// (0x00030c51) tabs_4_passive_pane_cp_ParamLimits

0x610e,	// (0x00030c51) tabs_4_passive_pane_cp

0x611f,	// (0x00030c62) tabs_4_passive_pane_cp2_ParamLimits

0x611f,	// (0x00030c62) tabs_4_passive_pane_cp2

0x60c6,	// (0x00030c09) tabs_2_long_active_pane_ParamLimits

0x60c6,	// (0x00030c09) tabs_2_long_active_pane

0x60d8,	// (0x00030c1b) tabs_2_long_passive_pane_ParamLimits

0x60d8,	// (0x00030c1b) tabs_2_long_passive_pane

0x6087,	// (0x00030bca) tabs_3_long_active_pane_ParamLimits

0x6087,	// (0x00030bca) tabs_3_long_active_pane

0x609a,	// (0x00030bdd) tabs_3_long_passive_pane_ParamLimits

0x609a,	// (0x00030bdd) tabs_3_long_passive_pane

0x60b3,	// (0x00030bf6) tabs_3_long_passive_pane_cp_ParamLimits

0x60b3,	// (0x00030bf6) tabs_3_long_passive_pane_cp

0x602d,	// (0x00030b70) volume_small_pane_g1

0x6036,	// (0x00030b79) volume_small_pane_g2

0x603f,	// (0x00030b82) volume_small_pane_g3

0x6048,	// (0x00030b8b) volume_small_pane_g4

0x6051,	// (0x00030b94) volume_small_pane_g5

0x605a,	// (0x00030b9d) volume_small_pane_g6

0x6063,	// (0x00030ba6) volume_small_pane_g7

0x606c,	// (0x00030baf) volume_small_pane_g8

0x6075,	// (0x00030bb8) volume_small_pane_g9

0x607e,	// (0x00030bc1) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0003a432) volume_small_pane_g

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp2_ParamLimits

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp2

0x72d2,	// (0x00031e15) tabs_3_active_pane_g1

0x72da,	// (0x00031e1d) tabs_3_active_pane_t1

0x72c4,	// (0x00031e07) bg_passive_tab_pane_cp2_ParamLimits

0x72c4,	// (0x00031e07) bg_passive_tab_pane_cp2

0x72d2,	// (0x00031e15) tabs_3_passive_pane_g1

0x72da,	// (0x00031e1d) tabs_3_passive_pane_t1

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp3_ParamLimits

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp3

0x72ec,	// (0x00031e2f) tabs_4_active_pane_g1

0x72f4,	// (0x00031e37) tabs_4_active_pane_t1

0x72c4,	// (0x00031e07) bg_passive_tab_pane_cp3_ParamLimits

0x72c4,	// (0x00031e07) bg_passive_tab_pane_cp3

0x72ec,	// (0x00031e2f) tabs_4_1_passive_pane_g1

0x72f4,	// (0x00031e37) tabs_4_1_passive_pane_t1

0x90b8,	// (0x00033bfb) list_highlight_pane_cp2

0xb02e,	// (0x00035b71) list_set_pane_ParamLimits

0xb02e,	// (0x00035b71) list_set_pane

0xb0f6,	// (0x00035c39) main_pane_set_t1_ParamLimits

0xb0f6,	// (0x00035c39) main_pane_set_t1

0xb116,	// (0x00035c59) main_pane_set_t2_ParamLimits

0xb116,	// (0x00035c59) main_pane_set_t2

0xb12a,	// (0x00035c6d) main_pane_set_t3_ParamLimits

0xb12a,	// (0x00035c6d) main_pane_set_t3

0xb13e,	// (0x00035c81) main_pane_set_t4_ParamLimits

0xb13e,	// (0x00035c81) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0003a502) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0003a502) main_pane_set_t

0xb15e,	// (0x00035ca1) setting_code_pane

0xb168,	// (0x00035cab) setting_slider_graphic_pane

0xb168,	// (0x00035cab) setting_slider_pane

0xb168,	// (0x00035cab) setting_text_pane

0xb168,	// (0x00035cab) setting_volume_pane

0x4ffa,	// (0x0002fb3d) volume_set_pane

0x72c4,	// (0x00031e07) bg_set_opt_pane_cp

0x5004,	// (0x0002fb47) setting_slider_pane_t1

0x501a,	// (0x0002fb5d) setting_slider_pane_t2

0x5034,	// (0x0002fb77) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0003a0e5) setting_slider_pane_t

0x504c,	// (0x0002fb8f) slider_set_pane

0x71e4,	// (0x00031d27) bg_set_opt_pane_cp2

0x7306,	// (0x00031e49) setting_slider_graphic_pane_g1

0x5062,	// (0x0002fba5) setting_slider_graphic_pane_t1

0x5072,	// (0x0002fbb5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003a0ec) setting_slider_graphic_pane_t

0x5082,	// (0x0002fbc5) slider_set_pane_cp

0x71e4,	// (0x00031d27) input_focus_pane_cp1

0xafef,	// (0x00035b32) list_set_text_pane

0x71da,	// (0x00031d1d) setting_text_pane_g1

0x71e4,	// (0x00031d27) input_focus_pane_cp2

0x71da,	// (0x00031d1d) setting_code_pane_g1

0x730f,	// (0x00031e52) setting_code_pane_t1

0x41eb,	// (0x0002ed2e) set_text_pane_t1_ParamLimits

0x41eb,	// (0x0002ed2e) set_text_pane_t1

0x813b,	// (0x00032c7e) set_opt_bg_pane_g1

0x8143,	// (0x00032c86) set_opt_bg_pane_g2

0xafc7,	// (0x00035b0a) set_opt_bg_pane_g3

0x8153,	// (0x00032c96) set_opt_bg_pane_g4

0x815b,	// (0x00032c9e) set_opt_bg_pane_g5

0x8163,	// (0x00032ca6) set_opt_bg_pane_g6

0xafd1,	// (0x00035b14) set_opt_bg_pane_g7

0xafdb,	// (0x00035b1e) set_opt_bg_pane_g8

0xafe5,	// (0x00035b28) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0003a4ef) set_opt_bg_pane_g

0xafba,	// (0x00035afd) slider_set_pane_g1

0x6239,	// (0x00030d7c) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0003a4e0) slider_set_pane_g

0x6199,	// (0x00030cdc) volume_set_pane_g1

0x61a3,	// (0x00030ce6) volume_set_pane_g2

0x61ad,	// (0x00030cf0) volume_set_pane_g3

0x61b7,	// (0x00030cfa) volume_set_pane_g4

0x61c1,	// (0x00030d04) volume_set_pane_g5

0x61cb,	// (0x00030d0e) volume_set_pane_g6

0x61d5,	// (0x00030d18) volume_set_pane_g7

0x61df,	// (0x00030d22) volume_set_pane_g8

0x61e9,	// (0x00030d2c) volume_set_pane_g9

0x61f3,	// (0x00030d36) volume_set_pane_g10

0x0009,

0xf975,	// (0x0003a4b8) volume_set_pane_g

0x731d,	// (0x00031e60) indicator_pane_ParamLimits

0x731d,	// (0x00031e60) indicator_pane

0x7329,	// (0x00031e6c) main_idle_pane_g2_ParamLimits

0x7329,	// (0x00031e6c) main_idle_pane_g2

0x7351,	// (0x00031e94) main_pane_idle_g1_ParamLimits

0x7351,	// (0x00031e94) main_pane_idle_g1

0x735f,	// (0x00031ea2) popup_clock_digital_analogue_window_ParamLimits

0x735f,	// (0x00031ea2) popup_clock_digital_analogue_window

0x7376,	// (0x00031eb9) soft_indicator_pane_ParamLimits

0x7376,	// (0x00031eb9) soft_indicator_pane

0x7384,	// (0x00031ec7) wallpaper_pane_ParamLimits

0x7384,	// (0x00031ec7) wallpaper_pane

0x71da,	// (0x00031d1d) wallpaper_pane_g1

0x7398,	// (0x00031edb) indicator_pane_g1_ParamLimits

0x7398,	// (0x00031edb) indicator_pane_g1

0xb42c,	// (0x00035f6f) navi_navi_icon_text_pane_srt_g1

0x73b3,	// (0x00031ef6) soft_indicator_pane_t1

0x73cd,	// (0x00031f10) aid_ps_area_pane

0x73de,	// (0x00031f21) aid_ps_clock_pane

0x73ec,	// (0x00031f2f) aid_ps_indicator_pane

0x73f8,	// (0x00031f3b) indicator_ps_pane_ParamLimits

0x73f8,	// (0x00031f3b) indicator_ps_pane

0x7407,	// (0x00031f4a) power_save_pane_g1_ParamLimits

0x7407,	// (0x00031f4a) power_save_pane_g1

0x7413,	// (0x00031f56) power_save_pane_g2_ParamLimits

0x7413,	// (0x00031f56) power_save_pane_g2

0x4bf9,	// (0x0002f73c) aid_navinavi_width_pane

0x73cd,	// (0x00031f10) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0003a0f1) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0003a0f1) power_save_pane_g

0x7421,	// (0x00031f64) power_save_pane_t1_ParamLimits

0x7421,	// (0x00031f64) power_save_pane_t1

0x73de,	// (0x00031f21) aid_ps_clock_pane_ParamLimits

0x73ec,	// (0x00031f2f) aid_ps_indicator_pane_ParamLimits

0x7433,	// (0x00031f76) power_save_pane_t4_ParamLimits

0x7433,	// (0x00031f76) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0003a0f6) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0003a0f6) power_save_pane_t

0x745d,	// (0x00031fa0) power_save_t3_ParamLimits

0x745d,	// (0x00031fa0) power_save_t3

0x7448,	// (0x00031f8b) power_save_t2_ParamLimits

0x7448,	// (0x00031f8b) power_save_t2

0x7472,	// (0x00031fb5) indicator_ps_pane_g1

0x747b,	// (0x00031fbe) ai_gene_pane_ParamLimits

0x747b,	// (0x00031fbe) ai_gene_pane

0x7487,	// (0x00031fca) ai_links_pane_ParamLimits

0x7487,	// (0x00031fca) ai_links_pane

0x7493,	// (0x00031fd6) indicator_pane_cp1_ParamLimits

0x7493,	// (0x00031fd6) indicator_pane_cp1

0x749f,	// (0x00031fe2) main_pane_idle_g1_cp_ParamLimits

0x749f,	// (0x00031fe2) main_pane_idle_g1_cp

0x74ab,	// (0x00031fee) popup_ai_links_title_window

0x74b4,	// (0x00031ff7) soft_indicator_pane_cp1_ParamLimits

0x74b4,	// (0x00031ff7) soft_indicator_pane_cp1

0xad8d,	// (0x000358d0) ai_links_pane_g1

0xad96,	// (0x000358d9) grid_ai_links_pane

0xad72,	// (0x000358b5) ai_gene_pane_1

0xad7b,	// (0x000358be) ai_gene_pane_2

0xad84,	// (0x000358c7) list_highlight_pane_cp4

0xad52,	// (0x00035895) cell_ai_link_pane_ParamLimits

0xad52,	// (0x00035895) cell_ai_link_pane

0xad4a,	// (0x0003588d) cell_ai_link_pane_g1

0x76f6,	// (0x00032239) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0003a493) cell_ai_link_pane_g

0x71e4,	// (0x00031d27) grid_highlight_cp2

0x71e4,	// (0x00031d27) bg_popup_sub_pane_cp1

0x74ce,	// (0x00032011) popup_ai_links_title_window_t1

0xac96,	// (0x000357d9) ai_gene_pane_1_g1_ParamLimits

0xac96,	// (0x000357d9) ai_gene_pane_1_g1

0xaca2,	// (0x000357e5) ai_gene_pane_1_g2_ParamLimits

0xaca2,	// (0x000357e5) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0003a489) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0003a489) ai_gene_pane_1_g

0xacaf,	// (0x000357f2) ai_gene_pane_1_t1_ParamLimits

0xacaf,	// (0x000357f2) ai_gene_pane_1_t1

0xace3,	// (0x00035826) grid_ai_soft_ind_pane

0xac81,	// (0x000357c4) ai_gene_pane_2_t1_ParamLimits

0xac81,	// (0x000357c4) ai_gene_pane_2_t1

0x74dd,	// (0x00032020) main_pane_empty_t1_ParamLimits

0x74dd,	// (0x00032020) main_pane_empty_t1

0x74f5,	// (0x00032038) main_pane_empty_t2_ParamLimits

0x74f5,	// (0x00032038) main_pane_empty_t2

0x750a,	// (0x0003204d) main_pane_empty_t3_ParamLimits

0x750a,	// (0x0003204d) main_pane_empty_t3

0x751c,	// (0x0003205f) main_pane_empty_t4_ParamLimits

0x751c,	// (0x0003205f) main_pane_empty_t4

0x752e,	// (0x00032071) main_pane_empty_t5_ParamLimits

0x752e,	// (0x00032071) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0003a0fb) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0003a0fb) main_pane_empty_t

0x818c,	// (0x00032ccf) bg_popup_window_pane_ParamLimits

0x818c,	// (0x00032ccf) bg_popup_window_pane

0xa9dd,	// (0x00035520) find_popup_pane_cp2_ParamLimits

0xa9dd,	// (0x00035520) find_popup_pane_cp2

0xa9e9,	// (0x0003552c) heading_pane_ParamLimits

0xa9e9,	// (0x0003552c) heading_pane

0x71e4,	// (0x00031d27) bg_popup_sub_pane

0xa957,	// (0x0003549a) bg_popup_window_pane_g1_ParamLimits

0xa957,	// (0x0003549a) bg_popup_window_pane_g1

0xa963,	// (0x000354a6) bg_popup_window_pane_g2_ParamLimits

0xa963,	// (0x000354a6) bg_popup_window_pane_g2

0xa96f,	// (0x000354b2) bg_popup_window_pane_g3_ParamLimits

0xa96f,	// (0x000354b2) bg_popup_window_pane_g3

0xa97b,	// (0x000354be) bg_popup_window_pane_g4_ParamLimits

0xa97b,	// (0x000354be) bg_popup_window_pane_g4

0xa987,	// (0x000354ca) bg_popup_window_pane_g5_ParamLimits

0xa987,	// (0x000354ca) bg_popup_window_pane_g5

0xa993,	// (0x000354d6) bg_popup_window_pane_g6_ParamLimits

0xa993,	// (0x000354d6) bg_popup_window_pane_g6

0xa99f,	// (0x000354e2) bg_popup_window_pane_g7_ParamLimits

0xa99f,	// (0x000354e2) bg_popup_window_pane_g7

0xa9ab,	// (0x000354ee) bg_popup_window_pane_g8_ParamLimits

0xa9ab,	// (0x000354ee) bg_popup_window_pane_g8

0xa9b7,	// (0x000354fa) bg_popup_window_pane_g9_ParamLimits

0xa9b7,	// (0x000354fa) bg_popup_window_pane_g9

0xa9c3,	// (0x00035506) bg_popup_window_pane_g10_ParamLimits

0xa9c3,	// (0x00035506) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0003a451) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0003a451) bg_popup_window_pane_g

0xa8ec,	// (0x0003542f) bg_popup_heading_pane_ParamLimits

0xa8ec,	// (0x0003542f) bg_popup_heading_pane

0x635f,	// (0x00030ea2) tabs_4_passive_pane_cp_srt_ParamLimits

0x635f,	// (0x00030ea2) tabs_4_passive_pane_cp_srt

0x6371,	// (0x00030eb4) tabs_4_passive_pane_srt_ParamLimits

0xa900,	// (0x00035443) heading_pane_g2

0x6371,	// (0x00030eb4) tabs_4_passive_pane_srt

0x90b8,	// (0x00033bfb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90b8,	// (0x00033bfb) bg_passive_tab_pane_cp3_srt

0xa908,	// (0x0003544b) heading_pane_t1_ParamLimits

0xa908,	// (0x0003544b) heading_pane_t1

0xa91f,	// (0x00035462) heading_pane_t2_ParamLimits

0xa91f,	// (0x00035462) heading_pane_t2

0x0001,

0xf909,	// (0x0003a44c) heading_pane_t_ParamLimits

0xf909,	// (0x0003a44c) heading_pane_t

0xa417,	// (0x00034f5a) bg_popup_heading_pane_g1

0xa4c6,	// (0x00035009) bg_popup_heading_pane_g2

0xa4d0,	// (0x00035013) bg_popup_heading_pane_g3

0xa4da,	// (0x0003501d) bg_popup_heading_pane_g4

0xa4e4,	// (0x00035027) bg_popup_heading_pane_g5

0xa4ee,	// (0x00035031) bg_popup_heading_pane_g6

0xa4f6,	// (0x00035039) bg_popup_heading_pane_g7

0xa4fe,	// (0x00035041) bg_popup_heading_pane_g8

0xa508,	// (0x0003504b) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0003a408) bg_popup_heading_pane_g

0x9c00,	// (0x00034743) bg_popup_sub_pane_g1

0x9c10,	// (0x00034753) bg_popup_sub_pane_g2

0x9c08,	// (0x0003474b) bg_popup_sub_pane_g3

0x9c20,	// (0x00034763) bg_popup_sub_pane_g4

0x9c18,	// (0x0003475b) bg_popup_sub_pane_g5

0x9c28,	// (0x0003476b) bg_popup_sub_pane_g6

0x9c30,	// (0x00034773) bg_popup_sub_pane_g7

0x9c40,	// (0x00034783) bg_popup_sub_pane_g8

0x9c38,	// (0x0003477b) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0003a3e2) bg_popup_sub_pane_g

0x7540,	// (0x00032083) bg_popup_window_pane_cp5_ParamLimits

0x7540,	// (0x00032083) bg_popup_window_pane_cp5

0x755c,	// (0x0003209f) popup_note_window_g1_ParamLimits

0x755c,	// (0x0003209f) popup_note_window_g1

0x7568,	// (0x000320ab) popup_note_window_t1_ParamLimits

0x7568,	// (0x000320ab) popup_note_window_t1

0x757e,	// (0x000320c1) popup_note_window_t2_ParamLimits

0x757e,	// (0x000320c1) popup_note_window_t2

0x7594,	// (0x000320d7) popup_note_window_t3_ParamLimits

0x7594,	// (0x000320d7) popup_note_window_t3

0x75aa,	// (0x000320ed) popup_note_window_t4_ParamLimits

0x75aa,	// (0x000320ed) popup_note_window_t4

0x75d2,	// (0x00032115) popup_note_window_t5_ParamLimits

0x75d2,	// (0x00032115) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0003a106) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0003a106) popup_note_window_t

0x75f6,	// (0x00032139) bg_popup_window_pane_cp6_ParamLimits

0x75f6,	// (0x00032139) bg_popup_window_pane_cp6

0xa393,	// (0x00034ed6) popup_note_image_window_g1_ParamLimits

0xa393,	// (0x00034ed6) popup_note_image_window_g1

0xa39f,	// (0x00034ee2) popup_note_image_window_g2_ParamLimits

0xa39f,	// (0x00034ee2) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0003a3d6) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0003a3d6) popup_note_image_window_g

0xa3b8,	// (0x00034efb) popup_note_image_window_t1_ParamLimits

0xa3b8,	// (0x00034efb) popup_note_image_window_t1

0xa3d1,	// (0x00034f14) popup_note_image_window_t2_ParamLimits

0xa3d1,	// (0x00034f14) popup_note_image_window_t2

0xa3ea,	// (0x00034f2d) popup_note_image_window_t3_ParamLimits

0xa3ea,	// (0x00034f2d) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0003a3db) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0003a3db) popup_note_image_window_t

0xa253,	// (0x00034d96) bg_popup_window_pane_cp7_ParamLimits

0xa253,	// (0x00034d96) bg_popup_window_pane_cp7

0xa283,	// (0x00034dc6) popup_note_wait_window_g1_ParamLimits

0xa283,	// (0x00034dc6) popup_note_wait_window_g1

0xa28f,	// (0x00034dd2) popup_note_wait_window_g2_ParamLimits

0xa28f,	// (0x00034dd2) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0003a3c4) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0003a3c4) popup_note_wait_window_g

0xa2a7,	// (0x00034dea) popup_note_wait_window_t1_ParamLimits

0xa2a7,	// (0x00034dea) popup_note_wait_window_t1

0xa2ce,	// (0x00034e11) popup_note_wait_window_t2_ParamLimits

0xa2ce,	// (0x00034e11) popup_note_wait_window_t2

0xa2ec,	// (0x00034e2f) popup_note_wait_window_t3_ParamLimits

0xa2ec,	// (0x00034e2f) popup_note_wait_window_t3

0xa2ff,	// (0x00034e42) popup_note_wait_window_t4_ParamLimits

0xa2ff,	// (0x00034e42) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0003a3cb) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0003a3cb) popup_note_wait_window_t

0xa324,	// (0x00034e67) wait_bar_pane_ParamLimits

0xa324,	// (0x00034e67) wait_bar_pane

0x71e4,	// (0x00031d27) wait_anim_pane

0x71e4,	// (0x00031d27) wait_border_pane

0x71da,	// (0x00031d1d) wait_anim_pane_g1

0x71da,	// (0x00031d1d) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0003a28a) wait_anim_pane_g

0xa1f7,	// (0x00034d3a) wait_border_pane_g1

0xa202,	// (0x00034d45) wait_border_pane_g2

0xa20b,	// (0x00034d4e) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0003a3bd) wait_border_pane_g

0xa153,	// (0x00034c96) bg_popup_window_pane_cp16_ParamLimits

0xa153,	// (0x00034c96) bg_popup_window_pane_cp16

0xa161,	// (0x00034ca4) indicator_popup_pane_cp4_ParamLimits

0xa161,	// (0x00034ca4) indicator_popup_pane_cp4

0xa175,	// (0x00034cb8) popup_query_data_window_t1_ParamLimits

0xa175,	// (0x00034cb8) popup_query_data_window_t1

0xa187,	// (0x00034cca) popup_query_data_window_t2_ParamLimits

0xa187,	// (0x00034cca) popup_query_data_window_t2

0xa1a0,	// (0x00034ce3) popup_query_data_window_t3_ParamLimits

0xa1a0,	// (0x00034ce3) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0003a3b6) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0003a3b6) popup_query_data_window_t

0xa1ba,	// (0x00034cfd) query_popup_data_pane_ParamLimits

0xa1ba,	// (0x00034cfd) query_popup_data_pane

0xa1ce,	// (0x00034d11) query_popup_data_pane_cp1_ParamLimits

0xa1ce,	// (0x00034d11) query_popup_data_pane_cp1

0x75f6,	// (0x00032139) bg_popup_window_pane_cp10_ParamLimits

0x75f6,	// (0x00032139) bg_popup_window_pane_cp10

0xa0b6,	// (0x00034bf9) indicator_popup_pane_ParamLimits

0xa0b6,	// (0x00034bf9) indicator_popup_pane

0x7657,	// (0x0003219a) popup_query_code_window_t1_ParamLimits

0x7657,	// (0x0003219a) popup_query_code_window_t1

0xa0ce,	// (0x00034c11) popup_query_code_window_t2_ParamLimits

0xa0ce,	// (0x00034c11) popup_query_code_window_t2

0xa10c,	// (0x00034c4f) popup_query_code_window_t3_ParamLimits

0xa10c,	// (0x00034c4f) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0003a3af) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0003a3af) popup_query_code_window_t

0xa13b,	// (0x00034c7e) query_popup_pane_ParamLimits

0xa13b,	// (0x00034c7e) query_popup_pane

0x75f6,	// (0x00032139) bg_popup_window_pane_cp15_ParamLimits

0x75f6,	// (0x00032139) bg_popup_window_pane_cp15

0x7616,	// (0x00032159) indicator_popup_pane_cp1_ParamLimits

0x7616,	// (0x00032159) indicator_popup_pane_cp1

0x7629,	// (0x0003216c) indicator_popup_pane_cp2_ParamLimits

0x7629,	// (0x0003216c) indicator_popup_pane_cp2

0x7644,	// (0x00032187) popup_query_data_code_window_g1_ParamLimits

0x7644,	// (0x00032187) popup_query_data_code_window_g1

0x7657,	// (0x0003219a) popup_query_data_code_window_t1_ParamLimits

0x7657,	// (0x0003219a) popup_query_data_code_window_t1

0x7669,	// (0x000321ac) popup_query_data_code_window_t2_ParamLimits

0x7669,	// (0x000321ac) popup_query_data_code_window_t2

0x767b,	// (0x000321be) popup_query_data_code_window_t3_ParamLimits

0x767b,	// (0x000321be) popup_query_data_code_window_t3

0x7691,	// (0x000321d4) popup_query_data_code_window_t4_ParamLimits

0x7691,	// (0x000321d4) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0003a111) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0003a111) popup_query_data_code_window_t

0x5ec5,	// (0x00030a08) list_single_midp_graphic_pane_g3

0x76ab,	// (0x000321ee) query_popup_data_pane_cp2_ParamLimits

0x76be,	// (0x00032201) query_popup_pane_cp2_ParamLimits

0x76be,	// (0x00032201) query_popup_pane_cp2

0x71e4,	// (0x00031d27) bg_popup_window_pane_cp11

0xa08a,	// (0x00034bcd) heading_pane_cp5

0x7d37,	// (0x0003287a) listscroll_popup_info_pane

0x71e4,	// (0x00031d27) input_focus_pane_cp3

0x76d9,	// (0x0003221c) query_popup_pane_t1

0x76e7,	// (0x0003222a) list_popup_info_pane_ParamLimits

0x76e7,	// (0x0003222a) list_popup_info_pane

0x76f6,	// (0x00032239) listscroll_popup_info_pane_g1

0x76fe,	// (0x00032241) scroll_pane_cp7

0x7708,	// (0x0003224b) popup_info_list_pane_t1_ParamLimits

0x7708,	// (0x0003224b) popup_info_list_pane_t1

0x7722,	// (0x00032265) popup_info_list_pane_t2_ParamLimits

0x7722,	// (0x00032265) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0003a11a) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0003a11a) popup_info_list_pane_t

0x71e4,	// (0x00031d27) bg_popup_window_pane_cp12

0xb446,	// (0x00035f89) find_popup_pane

0x72c4,	// (0x00031e07) bg_popup_window_pane_cp3

0x773c,	// (0x0003227f) heading_pane_cp3

0x7cd1,	// (0x00032814) listscroll_popup_graphic_pane

0x71e4,	// (0x00031d27) bg_popup_window_pane_cp4

0x7d2d,	// (0x00032870) heading_pane_cp4

0x7d37,	// (0x0003287a) listscroll_popup_colour_pane

0x7d3f,	// (0x00032882) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d3f,	// (0x00032882) cell_large_graphic_colour_none_popup_pane

0x7d53,	// (0x00032896) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d53,	// (0x00032896) grid_large_graphic_colour_popup_pane

0x7d7f,	// (0x000328c2) listscroll_popup_colour_pane_g1_ParamLimits

0x7d7f,	// (0x000328c2) listscroll_popup_colour_pane_g1

0x7d96,	// (0x000328d9) listscroll_popup_colour_pane_g2_ParamLimits

0x7d96,	// (0x000328d9) listscroll_popup_colour_pane_g2

0x7dad,	// (0x000328f0) listscroll_popup_colour_pane_g3_ParamLimits

0x7dad,	// (0x000328f0) listscroll_popup_colour_pane_g3

0x7dbd,	// (0x00032900) listscroll_popup_colour_pane_g4_ParamLimits

0x7dbd,	// (0x00032900) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0003a11f) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0003a11f) listscroll_popup_colour_pane_g

0x7dd1,	// (0x00032914) scroll_pane_cp6_ParamLimits

0x7dd1,	// (0x00032914) scroll_pane_cp6

0x7de3,	// (0x00032926) cell_large_graphic_colour_popup_pane_ParamLimits

0x7de3,	// (0x00032926) cell_large_graphic_colour_popup_pane

0x7e08,	// (0x0003294b) cell_large_graphic_colour_none_popup_pane_t1

0x71e4,	// (0x00031d27) grid_highlight_pane_cp5

0x7e17,	// (0x0003295a) cell_large_graphic_colour_popup_pane_g1

0x7e1f,	// (0x00032962) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0003a128) cell_large_graphic_colour_popup_pane_g

0x7e27,	// (0x0003296a) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e30,	// (0x00032973) grid_highlight_pane_cp4

0x7e38,	// (0x0003297b) bg_popup_window_pane_cp8_ParamLimits

0x7e38,	// (0x0003297b) bg_popup_window_pane_cp8

0x7e53,	// (0x00032996) popup_snote_single_text_window_g1_ParamLimits

0x7e53,	// (0x00032996) popup_snote_single_text_window_g1

0x7e65,	// (0x000329a8) popup_snote_single_text_window_t1_ParamLimits

0x7e65,	// (0x000329a8) popup_snote_single_text_window_t1

0x7e78,	// (0x000329bb) popup_snote_single_text_window_t2_ParamLimits

0x7e78,	// (0x000329bb) popup_snote_single_text_window_t2

0x7e8b,	// (0x000329ce) popup_snote_single_text_window_t3_ParamLimits

0x7e8b,	// (0x000329ce) popup_snote_single_text_window_t3

0x7ec4,	// (0x00032a07) popup_snote_single_text_window_t4_ParamLimits

0x7ec4,	// (0x00032a07) popup_snote_single_text_window_t4

0x7ef8,	// (0x00032a3b) popup_snote_single_text_window_t5_ParamLimits

0x7ef8,	// (0x00032a3b) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0003a12d) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0003a12d) popup_snote_single_text_window_t

0x7f27,	// (0x00032a6a) bg_popup_window_pane_cp9_ParamLimits

0x7f27,	// (0x00032a6a) bg_popup_window_pane_cp9

0x7e53,	// (0x00032996) popup_snote_single_graphic_window_g1_ParamLimits

0x7e53,	// (0x00032996) popup_snote_single_graphic_window_g1

0x7f35,	// (0x00032a78) popup_snote_single_graphic_window_g2_ParamLimits

0x7f35,	// (0x00032a78) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0003a138) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0003a138) popup_snote_single_graphic_window_g

0x7f41,	// (0x00032a84) popup_snote_single_graphic_window_t1_ParamLimits

0x7f41,	// (0x00032a84) popup_snote_single_graphic_window_t1

0x7f54,	// (0x00032a97) popup_snote_single_graphic_window_t2_ParamLimits

0x7f54,	// (0x00032a97) popup_snote_single_graphic_window_t2

0x7f67,	// (0x00032aaa) popup_snote_single_graphic_window_t3_ParamLimits

0x7f67,	// (0x00032aaa) popup_snote_single_graphic_window_t3

0x7fa0,	// (0x00032ae3) popup_snote_single_graphic_window_t4_ParamLimits

0x7fa0,	// (0x00032ae3) popup_snote_single_graphic_window_t4

0x7fd4,	// (0x00032b17) popup_snote_single_graphic_window_t5_ParamLimits

0x7fd4,	// (0x00032b17) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0003a13d) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0003a13d) popup_snote_single_graphic_window_t

0xb384,	// (0x00035ec7) grid_graphic_popup_pane_ParamLimits

0xb384,	// (0x00035ec7) grid_graphic_popup_pane

0xb3b2,	// (0x00035ef5) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b2,	// (0x00035ef5) listscroll_popup_graphic_pane_g1

0xb3c6,	// (0x00035f09) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c6,	// (0x00035f09) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0003a52c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0003a52c) listscroll_popup_graphic_pane_g

0xb3da,	// (0x00035f1d) scroll_pane_cp5

0xb32c,	// (0x00035e6f) cell_graphic_popup_pane_ParamLimits

0xb32c,	// (0x00035e6f) cell_graphic_popup_pane

0xb30d,	// (0x00035e50) cell_graphic_popup_pane_g1

0xb315,	// (0x00035e58) cell_graphic_popup_pane_g2

0x7e27,	// (0x0003296a) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0003a525) cell_graphic_popup_pane_g

0xb31e,	// (0x00035e61) cell_graphic_popup_pane_t2

0x7e30,	// (0x00032973) grid_highlight_pane_cp3

0x8015,	// (0x00032b58) list_gen_pane_ParamLimits

0x8015,	// (0x00032b58) list_gen_pane

0x8047,	// (0x00032b8a) scroll_pane

0xb26f,	// (0x00035db2) bg_list_pane_g1_ParamLimits

0xb26f,	// (0x00035db2) bg_list_pane_g1

0xb28a,	// (0x00035dcd) bg_list_pane_g2_ParamLimits

0xb28a,	// (0x00035dcd) bg_list_pane_g2

0xb29d,	// (0x00035de0) bg_list_pane_g3_ParamLimits

0xb29d,	// (0x00035de0) bg_list_pane_g3

0xb2af,	// (0x00035df2) bg_list_pane_g4_ParamLimits

0xb2af,	// (0x00035df2) bg_list_pane_g4

0xb2c1,	// (0x00035e04) bg_list_pane_g5_ParamLimits

0xb2c1,	// (0x00035e04) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0003a51a) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0003a51a) bg_list_pane_g

0x62e1,	// (0x00030e24) list_double2_graphic_large_graphic_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double2_graphic_large_graphic_pane

0x62e1,	// (0x00030e24) list_double2_graphic_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double2_graphic_pane

0x62e1,	// (0x00030e24) list_double2_large_graphic_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double2_large_graphic_pane

0xb200,	// (0x00035d43) list_double2_pane_ParamLimits

0xb200,	// (0x00035d43) list_double2_pane

0x62e1,	// (0x00030e24) list_double_graphic_heading_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double_graphic_heading_pane

0x62e1,	// (0x00030e24) list_double_graphic_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double_graphic_pane

0x62e1,	// (0x00030e24) list_double_heading_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double_heading_pane

0x62e1,	// (0x00030e24) list_double_large_graphic_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double_large_graphic_pane

0x62e1,	// (0x00030e24) list_double_number_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double_number_pane

0x62e1,	// (0x00030e24) list_double_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double_pane

0x62e1,	// (0x00030e24) list_double_time_pane_ParamLimits

0x62e1,	// (0x00030e24) list_double_time_pane

0x62e1,	// (0x00030e24) list_setting_number_pane_ParamLimits

0x62e1,	// (0x00030e24) list_setting_number_pane

0x62e1,	// (0x00030e24) list_setting_pane_ParamLimits

0x62e1,	// (0x00030e24) list_setting_pane

0xb22b,	// (0x00035d6e) list_single_2graphic_pane_ParamLimits

0xb22b,	// (0x00035d6e) list_single_2graphic_pane

0xb22b,	// (0x00035d6e) list_single_graphic_heading_pane_ParamLimits

0xb22b,	// (0x00035d6e) list_single_graphic_heading_pane

0xb22b,	// (0x00035d6e) list_single_graphic_pane_ParamLimits

0xb22b,	// (0x00035d6e) list_single_graphic_pane

0xb22b,	// (0x00035d6e) list_single_heading_pane_ParamLimits

0xb22b,	// (0x00035d6e) list_single_heading_pane

0x6320,	// (0x00030e63) list_single_large_graphic_pane_ParamLimits

0x6320,	// (0x00030e63) list_single_large_graphic_pane

0xb22b,	// (0x00035d6e) list_single_number_heading_pane_ParamLimits

0xb22b,	// (0x00035d6e) list_single_number_heading_pane

0xb22b,	// (0x00035d6e) list_single_number_pane_ParamLimits

0xb22b,	// (0x00035d6e) list_single_number_pane

0xb22b,	// (0x00035d6e) list_single_pane_ParamLimits

0xb22b,	// (0x00035d6e) list_single_pane

0x71e4,	// (0x00031d27) list_highlight_pane_cp1

0x4206,	// (0x0002ed49) list_single_pane_g1_ParamLimits

0x4206,	// (0x0002ed49) list_single_pane_g1

0x5096,	// (0x0002fbd9) list_single_pane_g2_ParamLimits

0x5096,	// (0x0002fbd9) list_single_pane_g2

0x0001,

0xf60c,	// (0x0003a14f) list_single_pane_g_ParamLimits

0xf60c,	// (0x0003a14f) list_single_pane_g

0x62cb,	// (0x00030e0e) list_single_pane_t1_ParamLimits

0x62cb,	// (0x00030e0e) list_single_pane_t1

0x4206,	// (0x0002ed49) list_single_number_pane_g1_ParamLimits

0x4206,	// (0x0002ed49) list_single_number_pane_g1

0x5096,	// (0x0002fbd9) list_single_number_pane_g2_ParamLimits

0x5096,	// (0x0002fbd9) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0003a14f) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0003a14f) list_single_number_pane_g

0x61fd,	// (0x00030d40) list_single_number_pane_t1_ParamLimits

0x61fd,	// (0x00030d40) list_single_number_pane_t1

0x6213,	// (0x00030d56) list_single_number_pane_t2_ParamLimits

0x6213,	// (0x00030d56) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0003a4db) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0003a4db) list_single_number_pane_t

0x508a,	// (0x0002fbcd) list_single_graphic_pane_g1_ParamLimits

0x508a,	// (0x0002fbcd) list_single_graphic_pane_g1

0x4206,	// (0x0002ed49) list_single_graphic_pane_g2_ParamLimits

0x4206,	// (0x0002ed49) list_single_graphic_pane_g2

0x5096,	// (0x0002fbd9) list_single_graphic_pane_g3_ParamLimits

0x5096,	// (0x0002fbd9) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0003a148) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0003a148) list_single_graphic_pane_g

0x50a2,	// (0x0002fbe5) list_single_graphic_pane_t1_ParamLimits

0x50a2,	// (0x0002fbe5) list_single_graphic_pane_t1

0x4206,	// (0x0002ed49) list_single_heading_pane_g1_ParamLimits

0x4206,	// (0x0002ed49) list_single_heading_pane_g1

0x5096,	// (0x0002fbd9) list_single_heading_pane_g2_ParamLimits

0x5096,	// (0x0002fbd9) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0003a14f) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0003a14f) list_single_heading_pane_g

0x50b8,	// (0x0002fbfb) list_single_heading_pane_t1_ParamLimits

0x50b8,	// (0x0002fbfb) list_single_heading_pane_t1

0x50ce,	// (0x0002fc11) list_single_heading_pane_t2_ParamLimits

0x50ce,	// (0x0002fc11) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0003a154) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0003a154) list_single_heading_pane_t

0x4206,	// (0x0002ed49) list_single_number_heading_pane_g1_ParamLimits

0x4206,	// (0x0002ed49) list_single_number_heading_pane_g1

0x5096,	// (0x0002fbd9) list_single_number_heading_pane_g2_ParamLimits

0x5096,	// (0x0002fbd9) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0003a14f) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0003a14f) list_single_number_heading_pane_g

0x50b8,	// (0x0002fbfb) list_single_number_heading_pane_t1_ParamLimits

0x50b8,	// (0x0002fbfb) list_single_number_heading_pane_t1

0x50e0,	// (0x0002fc23) list_single_number_heading_pane_t2_ParamLimits

0x50e0,	// (0x0002fc23) list_single_number_heading_pane_t2

0x50f2,	// (0x0002fc35) list_single_number_heading_pane_t3_ParamLimits

0x50f2,	// (0x0002fc35) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0003a159) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0003a159) list_single_number_heading_pane_t

0x5104,	// (0x0002fc47) list_single_graphic_heading_pane_g1_ParamLimits

0x5104,	// (0x0002fc47) list_single_graphic_heading_pane_g1

0x5110,	// (0x0002fc53) list_single_graphic_heading_pane_g4_ParamLimits

0x5110,	// (0x0002fc53) list_single_graphic_heading_pane_g4

0x5096,	// (0x0002fbd9) list_single_graphic_heading_pane_g5_ParamLimits

0x5096,	// (0x0002fbd9) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0003a160) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0003a160) list_single_graphic_heading_pane_g

0x50b8,	// (0x0002fbfb) list_single_graphic_heading_pane_t1_ParamLimits

0x50b8,	// (0x0002fbfb) list_single_graphic_heading_pane_t1

0x5121,	// (0x0002fc64) list_single_graphic_heading_pane_t2_ParamLimits

0x5121,	// (0x0002fc64) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0003a167) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0003a167) list_single_graphic_heading_pane_t

0x5133,	// (0x0002fc76) list_single_large_graphic_pane_g1_ParamLimits

0x5133,	// (0x0002fc76) list_single_large_graphic_pane_g1

0x4206,	// (0x0002ed49) list_single_large_graphic_pane_g2_ParamLimits

0x4206,	// (0x0002ed49) list_single_large_graphic_pane_g2

0x5096,	// (0x0002fbd9) list_single_large_graphic_pane_g3_ParamLimits

0x5096,	// (0x0002fbd9) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0003a16c) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0003a16c) list_single_large_graphic_pane_g

0xa202,	// (0x00034d45) wait_border_pane_g2_copy1

0x513f,	// (0x0002fc82) list_single_large_graphic_pane_g4_cp2

0x50b8,	// (0x0002fbfb) list_single_large_graphic_pane_t1_ParamLimits

0x50b8,	// (0x0002fbfb) list_single_large_graphic_pane_t1

0x5147,	// (0x0002fc8a) list_double_pane_g1_ParamLimits

0x5147,	// (0x0002fc8a) list_double_pane_g1

0x5153,	// (0x0002fc96) list_double_pane_g2_ParamLimits

0x5153,	// (0x0002fc96) list_double_pane_g2

0x0001,

0xf630,	// (0x0003a173) list_double_pane_g_ParamLimits

0xf630,	// (0x0003a173) list_double_pane_g

0x515f,	// (0x0002fca2) list_double_pane_t1_ParamLimits

0x515f,	// (0x0002fca2) list_double_pane_t1

0x5175,	// (0x0002fcb8) list_double_pane_t2_ParamLimits

0x5175,	// (0x0002fcb8) list_double_pane_t2

0x0001,

0xf635,	// (0x0003a178) list_double_pane_t_ParamLimits

0xf635,	// (0x0003a178) list_double_pane_t

0x5187,	// (0x0002fcca) list_double2_pane_g1_ParamLimits

0x5187,	// (0x0002fcca) list_double2_pane_g1

0x5198,	// (0x0002fcdb) list_double2_pane_g2_ParamLimits

0x5198,	// (0x0002fcdb) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0003a17d) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0003a17d) list_double2_pane_g

0x51a4,	// (0x0002fce7) list_double2_pane_t1_ParamLimits

0x51a4,	// (0x0002fce7) list_double2_pane_t1

0x51ba,	// (0x0002fcfd) list_double2_pane_t2_ParamLimits

0x51ba,	// (0x0002fcfd) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0003a182) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0003a182) list_double2_pane_t

0x5147,	// (0x0002fc8a) list_double_number_pane_g1_ParamLimits

0x5147,	// (0x0002fc8a) list_double_number_pane_g1

0x5153,	// (0x0002fc96) list_double_number_pane_g2_ParamLimits

0x5153,	// (0x0002fc96) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0003a173) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0003a173) list_double_number_pane_g

0x51cc,	// (0x0002fd0f) list_double_number_pane_t1_ParamLimits

0x51cc,	// (0x0002fd0f) list_double_number_pane_t1

0x51de,	// (0x0002fd21) list_double_number_pane_t2_ParamLimits

0x51de,	// (0x0002fd21) list_double_number_pane_t2

0x51f4,	// (0x0002fd37) list_double_number_pane_t3_ParamLimits

0x51f4,	// (0x0002fd37) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0003a187) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0003a187) list_double_number_pane_t

0x5206,	// (0x0002fd49) list_double_graphic_pane_g1_ParamLimits

0x5206,	// (0x0002fd49) list_double_graphic_pane_g1

0x5212,	// (0x0002fd55) list_double_graphic_pane_g2_ParamLimits

0x5212,	// (0x0002fd55) list_double_graphic_pane_g2

0x5221,	// (0x0002fd64) list_double_graphic_pane_g3_ParamLimits

0x5221,	// (0x0002fd64) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0003a18e) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0003a18e) list_double_graphic_pane_g

0x5239,	// (0x0002fd7c) list_double_graphic_pane_t1_ParamLimits

0x5239,	// (0x0002fd7c) list_double_graphic_pane_t1

0x524f,	// (0x0002fd92) list_double_graphic_pane_t2_ParamLimits

0x524f,	// (0x0002fd92) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0003a197) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0003a197) list_double_graphic_pane_t

0x5261,	// (0x0002fda4) list_double2_graphic_pane_g1_ParamLimits

0x5261,	// (0x0002fda4) list_double2_graphic_pane_g1

0x526d,	// (0x0002fdb0) list_double2_graphic_pane_g2_ParamLimits

0x526d,	// (0x0002fdb0) list_double2_graphic_pane_g2

0x5279,	// (0x0002fdbc) list_double2_graphic_pane_g3_ParamLimits

0x5279,	// (0x0002fdbc) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0003a19c) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0003a19c) list_double2_graphic_pane_g

0x5285,	// (0x0002fdc8) list_double2_graphic_pane_t1_ParamLimits

0x5285,	// (0x0002fdc8) list_double2_graphic_pane_t1

0x529b,	// (0x0002fdde) list_double2_graphic_pane_t2_ParamLimits

0x529b,	// (0x0002fdde) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0003a1a3) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0003a1a3) list_double2_graphic_pane_t

0x52ad,	// (0x0002fdf0) list_double_large_graphic_pane_g1_ParamLimits

0x52ad,	// (0x0002fdf0) list_double_large_graphic_pane_g1

0x52d8,	// (0x0002fe1b) list_double_large_graphic_pane_g2_ParamLimits

0x52d8,	// (0x0002fe1b) list_double_large_graphic_pane_g2

0x5153,	// (0x0002fc96) list_double_large_graphic_pane_g3_ParamLimits

0x5153,	// (0x0002fc96) list_double_large_graphic_pane_g3

0x52e9,	// (0x0002fe2c) list_double_large_graphic_pane_g4_ParamLimits

0x52e9,	// (0x0002fe2c) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0003a1a8) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0003a1a8) list_double_large_graphic_pane_g

0x5311,	// (0x0002fe54) list_double_large_graphic_pane_t1_ParamLimits

0x5311,	// (0x0002fe54) list_double_large_graphic_pane_t1

0x532a,	// (0x0002fe6d) list_double_large_graphic_pane_t2_ParamLimits

0x532a,	// (0x0002fe6d) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0003a1b3) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0003a1b3) list_double_large_graphic_pane_t

0x533c,	// (0x0002fe7f) list_double2_large_graphic_pane_g1_ParamLimits

0x533c,	// (0x0002fe7f) list_double2_large_graphic_pane_g1

0x5348,	// (0x0002fe8b) list_double2_large_graphic_pane_g2_ParamLimits

0x5348,	// (0x0002fe8b) list_double2_large_graphic_pane_g2

0x5359,	// (0x0002fe9c) list_double2_large_graphic_pane_g3_ParamLimits

0x5359,	// (0x0002fe9c) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0003a1b8) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0003a1b8) list_double2_large_graphic_pane_g

0x5365,	// (0x0002fea8) list_double2_large_graphic_pane_t1_ParamLimits

0x5365,	// (0x0002fea8) list_double2_large_graphic_pane_t1

0x537b,	// (0x0002febe) list_double2_large_graphic_pane_t2_ParamLimits

0x537b,	// (0x0002febe) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0003a1bf) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0003a1bf) list_double2_large_graphic_pane_t

0x538d,	// (0x0002fed0) list_double_heading_pane_g1_ParamLimits

0x538d,	// (0x0002fed0) list_double_heading_pane_g1

0x539e,	// (0x0002fee1) list_double_heading_pane_g2_ParamLimits

0x539e,	// (0x0002fee1) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0003a1c4) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0003a1c4) list_double_heading_pane_g

0x53aa,	// (0x0002feed) list_double_heading_pane_t1_ParamLimits

0x53aa,	// (0x0002feed) list_double_heading_pane_t1

0x53c0,	// (0x0002ff03) list_double_heading_pane_t2_ParamLimits

0x53c0,	// (0x0002ff03) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0003a1c9) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0003a1c9) list_double_heading_pane_t

0x53d2,	// (0x0002ff15) list_double_graphic_heading_pane_g1_ParamLimits

0x53d2,	// (0x0002ff15) list_double_graphic_heading_pane_g1

0x538d,	// (0x0002fed0) list_double_graphic_heading_pane_g2_ParamLimits

0x538d,	// (0x0002fed0) list_double_graphic_heading_pane_g2

0x539e,	// (0x0002fee1) list_double_graphic_heading_pane_g3_ParamLimits

0x539e,	// (0x0002fee1) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0003a1ce) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0003a1ce) list_double_graphic_heading_pane_g

0x53de,	// (0x0002ff21) list_double_graphic_heading_pane_t1_ParamLimits

0x53de,	// (0x0002ff21) list_double_graphic_heading_pane_t1

0x529b,	// (0x0002fdde) list_double_graphic_heading_pane_t2_ParamLimits

0x529b,	// (0x0002fdde) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0003a1d5) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0003a1d5) list_double_graphic_heading_pane_t

0x52d8,	// (0x0002fe1b) list_double_time_pane_g1_ParamLimits

0x52d8,	// (0x0002fe1b) list_double_time_pane_g1

0x5153,	// (0x0002fc96) list_double_time_pane_g2_ParamLimits

0x5153,	// (0x0002fc96) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0003a1da) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0003a1da) list_double_time_pane_g

0x53f4,	// (0x0002ff37) list_double_time_pane_t1_ParamLimits

0x53f4,	// (0x0002ff37) list_double_time_pane_t1

0x540a,	// (0x0002ff4d) list_double_time_pane_t2_ParamLimits

0x540a,	// (0x0002ff4d) list_double_time_pane_t2

0x541c,	// (0x0002ff5f) list_double_time_pane_t3_ParamLimits

0x541c,	// (0x0002ff5f) list_double_time_pane_t3

0x542e,	// (0x0002ff71) list_double_time_pane_t4_ParamLimits

0x542e,	// (0x0002ff71) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0003a1df) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0003a1df) list_double_time_pane_t

0x5440,	// (0x0002ff83) list_setting_pane_g1_ParamLimits

0x5440,	// (0x0002ff83) list_setting_pane_g1

0x544c,	// (0x0002ff8f) list_setting_pane_g2_ParamLimits

0x544c,	// (0x0002ff8f) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0003a1e8) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0003a1e8) list_setting_pane_g

0x5458,	// (0x0002ff9b) list_setting_pane_t1_ParamLimits

0x5458,	// (0x0002ff9b) list_setting_pane_t1

0x5472,	// (0x0002ffb5) list_setting_pane_t2_ParamLimits

0x5472,	// (0x0002ffb5) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0003a1ed) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0003a1ed) list_setting_pane_t

0x54b1,	// (0x0002fff4) set_value_pane_cp_ParamLimits

0x54b1,	// (0x0002fff4) set_value_pane_cp

0x54bf,	// (0x00030002) list_setting_number_pane_g1_ParamLimits

0x54bf,	// (0x00030002) list_setting_number_pane_g1

0x54cb,	// (0x0003000e) list_setting_number_pane_g2_ParamLimits

0x54cb,	// (0x0003000e) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0003a1f4) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0003a1f4) list_setting_number_pane_g

0x54d7,	// (0x0003001a) list_setting_number_pane_t1_ParamLimits

0x54d7,	// (0x0003001a) list_setting_number_pane_t1

0x54f0,	// (0x00030033) list_setting_number_pane_t2_ParamLimits

0x54f0,	// (0x00030033) list_setting_number_pane_t2

0x550a,	// (0x0003004d) list_setting_number_pane_t3_ParamLimits

0x550a,	// (0x0003004d) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0003a1f9) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0003a1f9) list_setting_number_pane_t

0x54b1,	// (0x0002fff4) set_value_pane_ParamLimits

0x54b1,	// (0x0002fff4) set_value_pane

0x807b,	// (0x00032bbe) bg_set_opt_pane_ParamLimits

0x807b,	// (0x00032bbe) bg_set_opt_pane

0x554d,	// (0x00030090) set_value_pane_t1

0x809c,	// (0x00032bdf) slider_set_pane_cp3

0x80a5,	// (0x00032be8) volume_small_pane_cp

0x80ae,	// (0x00032bf1) list_form_gen_pane

0x80b7,	// (0x00032bfa) scroll_pane_cp8

0x555b,	// (0x0003009e) form_field_data_pane_ParamLimits

0x555b,	// (0x0003009e) form_field_data_pane

0x5581,	// (0x000300c4) form_field_data_wide_pane_ParamLimits

0x5581,	// (0x000300c4) form_field_data_wide_pane

0x55a8,	// (0x000300eb) form_field_popup_pane_ParamLimits

0x55a8,	// (0x000300eb) form_field_popup_pane

0x55ca,	// (0x0003010d) form_field_popup_wide_pane_ParamLimits

0x55ca,	// (0x0003010d) form_field_popup_wide_pane

0x55eb,	// (0x0003012e) form_field_slider_pane_ParamLimits

0x55eb,	// (0x0003012e) form_field_slider_pane

0x55fe,	// (0x00030141) form_field_slider_wide_pane_ParamLimits

0x55fe,	// (0x00030141) form_field_slider_wide_pane

0x80c8,	// (0x00032c0b) data_form_pane

0x561b,	// (0x0003015e) form_field_data_pane_t1

0x80d4,	// (0x00032c17) input_focus_pane

0x80e2,	// (0x00032c25) data_form_wide_pane

0x5641,	// (0x00030184) form_field_data_wide_pane_t1

0x7e45,	// (0x00032988) input_focus_pane_cp6

0x5663,	// (0x000301a6) form_field_popup_pane_t1

0x80d4,	// (0x00032c17) input_focus_pane_cp7

0x810e,	// (0x00032c51) list_form_pane

0x5685,	// (0x000301c8) form_field_popup_wide_pane_t1

0x80d4,	// (0x00032c17) input_focus_pane_cp8

0x811a,	// (0x00032c5d) list_form_wide_pane

0x56a2,	// (0x000301e5) form_field_slider_pane_t1_ParamLimits

0x56a2,	// (0x000301e5) form_field_slider_pane_t1

0x56ba,	// (0x000301fd) form_field_slider_pane_t2_ParamLimits

0x56ba,	// (0x000301fd) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0003a209) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0003a209) form_field_slider_pane_t

0x7540,	// (0x00032083) input_focus_pane_cp9_ParamLimits

0x7540,	// (0x00032083) input_focus_pane_cp9

0x56cf,	// (0x00030212) slider_cont_pane_ParamLimits

0x56cf,	// (0x00030212) slider_cont_pane

0x8129,	// (0x00032c6c) form_field_slider_wide_pane_t1_ParamLimits

0x8129,	// (0x00032c6c) form_field_slider_wide_pane_t1

0x56e3,	// (0x00030226) form_field_slider_wide_pane_t2_ParamLimits

0x56e3,	// (0x00030226) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0003a20e) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0003a20e) form_field_slider_wide_pane_t

0x7540,	// (0x00032083) input_focus_pane_cp10_ParamLimits

0x7540,	// (0x00032083) input_focus_pane_cp10

0x56f5,	// (0x00030238) slider_cont_pane_cp1_ParamLimits

0x56f5,	// (0x00030238) slider_cont_pane_cp1

0x5709,	// (0x0003024c) slider_form_pane_cp

0x813b,	// (0x00032c7e) input_focus_pane_g1

0x8143,	// (0x00032c86) input_focus_pane_g2

0x814b,	// (0x00032c8e) input_focus_pane_g3

0x8153,	// (0x00032c96) input_focus_pane_g4

0x815b,	// (0x00032c9e) input_focus_pane_g5

0x8163,	// (0x00032ca6) input_focus_pane_g6

0x816b,	// (0x00032cae) input_focus_pane_g7

0x8173,	// (0x00032cb6) input_focus_pane_g8

0x817b,	// (0x00032cbe) input_focus_pane_g9

0x71da,	// (0x00031d1d) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0003a213) input_focus_pane_g

0xa20b,	// (0x00034d4e) wait_border_pane_g3_copy1

0x5711,	// (0x00030254) data_form_pane_t1

0x71da,	// (0x00031d1d) wait_anim_pane_g1_copy1

0x629d,	// (0x00030de0) data_form_wide_pane_t1

0x572e,	// (0x00030271) list_form_graphic_pane_cp_ParamLimits

0x572e,	// (0x00030271) list_form_graphic_pane_cp

0xb190,	// (0x00035cd3) slider_form_pane_g1

0xb199,	// (0x00035cdc) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0003a50b) slider_form_pane_g

0x5743,	// (0x00030286) list_form_graphic_pane_ParamLimits

0x5743,	// (0x00030286) list_form_graphic_pane

0x5755,	// (0x00030298) list_form_graphic_pane_g1

0x575d,	// (0x000302a0) list_form_graphic_pane_t1_ParamLimits

0x575d,	// (0x000302a0) list_form_graphic_pane_t1

0x72c4,	// (0x00031e07) list_highlight_pane_cp5_ParamLimits

0x72c4,	// (0x00031e07) list_highlight_pane_cp5

0x5772,	// (0x000302b5) find_pane_g1

0x8183,	// (0x00032cc6) input_find_pane

0x577b,	// (0x000302be) input_find_pane_g1_ParamLimits

0x577b,	// (0x000302be) input_find_pane_g1

0x5787,	// (0x000302ca) input_find_pane_t1_ParamLimits

0x5787,	// (0x000302ca) input_find_pane_t1

0x579c,	// (0x000302df) input_find_pane_t2_ParamLimits

0x579c,	// (0x000302df) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0003a228) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0003a228) input_find_pane_t

0x818c,	// (0x00032ccf) input_focus_pane_cp5_ParamLimits

0x818c,	// (0x00032ccf) input_focus_pane_cp5

0x81a6,	// (0x00032ce9) bg_popup_window_pane_cp2_ParamLimits

0x81a6,	// (0x00032ce9) bg_popup_window_pane_cp2

0x81b3,	// (0x00032cf6) listscroll_menu_pane_ParamLimits

0x81b3,	// (0x00032cf6) listscroll_menu_pane

0x81bf,	// (0x00032d02) popup_submenu_window_ParamLimits

0x81bf,	// (0x00032d02) popup_submenu_window

0x81ef,	// (0x00032d32) find_popup_pane_g1

0x81f7,	// (0x00032d3a) input_popup_find_pane_cp

0x818c,	// (0x00032ccf) input_focus_pane_cp4_ParamLimits

0x818c,	// (0x00032ccf) input_focus_pane_cp4

0x820f,	// (0x00032d52) input_popup_find_pane_t1_ParamLimits

0x820f,	// (0x00032d52) input_popup_find_pane_t1

0x71e4,	// (0x00031d27) bg_popup_sub_pane_cp

0x823d,	// (0x00032d80) listscroll_popup_sub_pane

0x8245,	// (0x00032d88) list_submenu_pane_ParamLimits

0x8245,	// (0x00032d88) list_submenu_pane

0x8256,	// (0x00032d99) scroll_pane_cp4

0x825e,	// (0x00032da1) list_single_popup_submenu_pane_ParamLimits

0x825e,	// (0x00032da1) list_single_popup_submenu_pane

0x8273,	// (0x00032db6) list_single_popup_submenu_pane_g1

0x827b,	// (0x00032dbe) list_single_popup_submenu_pane_t1_ParamLimits

0x827b,	// (0x00032dbe) list_single_popup_submenu_pane_t1

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp1_ParamLimits

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp1

0x8290,	// (0x00032dd3) tabs_2_active_pane_g1

0x8298,	// (0x00032ddb) tabs_2_active_pane_t1

0x72c4,	// (0x00031e07) bg_passive_tab_pane_cp1_ParamLimits

0x72c4,	// (0x00031e07) bg_passive_tab_pane_cp1

0x8290,	// (0x00032dd3) tabs_2_passive_pane_g1

0x8298,	// (0x00032ddb) tabs_2_passive_pane_t1

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp4

0x82b8,	// (0x00032dfb) tabs_2_long_active_pane_t1

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp4

0x5ecd,	// (0x00030a10) list_single_midp_graphic_pane_g4_ParamLimits

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp5

0x82d7,	// (0x00032e1a) tabs_3_long_active_pane_t1

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp5

0x5ecd,	// (0x00030a10) list_single_midp_graphic_pane_g4

0x72c4,	// (0x00031e07) bg_popup_window_pane_cp13_ParamLimits

0x72c4,	// (0x00031e07) bg_popup_window_pane_cp13

0x82f2,	// (0x00032e35) listscroll_popup_fast_pane_ParamLimits

0x82f2,	// (0x00032e35) listscroll_popup_fast_pane

0x8301,	// (0x00032e44) grid_popup_fast_pane_ParamLimits

0x8301,	// (0x00032e44) grid_popup_fast_pane

0x8313,	// (0x00032e56) scroll_pane_cp9_ParamLimits

0x8313,	// (0x00032e56) scroll_pane_cp9

0xcab5,	// (0x000375f8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcab5,	// (0x000375f8) list_single_graphic_hl_pane_t1_cp2

0x8337,	// (0x00032e7a) input_focus_pane_cp20_ParamLimits

0x8337,	// (0x00032e7a) input_focus_pane_cp20

0x8345,	// (0x00032e88) query_popup_data_pane_t1_ParamLimits

0x8345,	// (0x00032e88) query_popup_data_pane_t1

0x8358,	// (0x00032e9b) query_popup_data_pane_t2_ParamLimits

0x8358,	// (0x00032e9b) query_popup_data_pane_t2

0x839e,	// (0x00032ee1) query_popup_data_pane_t3_ParamLimits

0x839e,	// (0x00032ee1) query_popup_data_pane_t3

0x83df,	// (0x00032f22) query_popup_data_pane_t4_ParamLimits

0x83df,	// (0x00032f22) query_popup_data_pane_t4

0x841b,	// (0x00032f5e) query_popup_data_pane_t5_ParamLimits

0x841b,	// (0x00032f5e) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0003a22d) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0003a22d) query_popup_data_pane_t

0x813b,	// (0x00032c7e) bg_set_opt_pane_g1

0x8143,	// (0x00032c86) bg_set_opt_pane_g2

0x814b,	// (0x00032c8e) bg_set_opt_pane_g3

0x8153,	// (0x00032c96) bg_set_opt_pane_g4

0x815b,	// (0x00032c9e) bg_set_opt_pane_g5

0x8163,	// (0x00032ca6) bg_set_opt_pane_g6

0x816b,	// (0x00032cae) bg_set_opt_pane_g7

0x8173,	// (0x00032cb6) bg_set_opt_pane_g8

0x817b,	// (0x00032cbe) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0003a238) bg_set_opt_pane_g

0x5ae0,	// (0x00030623) control_top_pane_stacon_ParamLimits

0x5ae0,	// (0x00030623) control_top_pane_stacon

0x5b33,	// (0x00030676) signal_pane_stacon_ParamLimits

0x5b33,	// (0x00030676) signal_pane_stacon

0x89c7,	// (0x0003350a) stacon_top_pane_g1_ParamLimits

0x89c7,	// (0x0003350a) stacon_top_pane_g1

0x5b58,	// (0x0003069b) title_pane_stacon_ParamLimits

0x5b58,	// (0x0003069b) title_pane_stacon

0x5b82,	// (0x000306c5) uni_indicator_pane_stacon_ParamLimits

0x5b82,	// (0x000306c5) uni_indicator_pane_stacon

0x5b9a,	// (0x000306dd) battery_pane_stacon_ParamLimits

0x5b9a,	// (0x000306dd) battery_pane_stacon

0x5bde,	// (0x00030721) control_bottom_pane_stacon_ParamLimits

0x5bde,	// (0x00030721) control_bottom_pane_stacon

0x5c01,	// (0x00030744) navi_pane_stacon_ParamLimits

0x5c01,	// (0x00030744) navi_pane_stacon

0x89e9,	// (0x0003352c) stacon_bottom_pane_g1_ParamLimits

0x89e9,	// (0x0003352c) stacon_bottom_pane_g1

0x57b1,	// (0x000302f4) aid_levels_signal_lsc_ParamLimits

0x57b1,	// (0x000302f4) aid_levels_signal_lsc

0x57c8,	// (0x0003030b) signal_pane_stacon_g1_ParamLimits

0x57c8,	// (0x0003030b) signal_pane_stacon_g1

0x57dc,	// (0x0003031f) signal_pane_stacon_g2_ParamLimits

0x57dc,	// (0x0003031f) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0003a24b) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0003a24b) signal_pane_stacon_g

0x5811,	// (0x00030354) title_pane_stacon_t1_ParamLimits

0x5811,	// (0x00030354) title_pane_stacon_t1

0x845f,	// (0x00032fa2) uni_indicator_pane_stacon_g1

0x8469,	// (0x00032fac) uni_indicator_pane_stacon_g2

0x8473,	// (0x00032fb6) uni_indicator_pane_stacon_g3

0x847d,	// (0x00032fc0) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0003a257) uni_indicator_pane_stacon_g

0x5836,	// (0x00030379) control_top_pane_stacon_g1

0x583e,	// (0x00030381) control_top_pane_stacon_t1_ParamLimits

0x583e,	// (0x00030381) control_top_pane_stacon_t1

0x5875,	// (0x000303b8) aid_levels_battery_lsc_ParamLimits

0x5875,	// (0x000303b8) aid_levels_battery_lsc

0x588d,	// (0x000303d0) battery_pane_stacon_g1_ParamLimits

0x588d,	// (0x000303d0) battery_pane_stacon_g1

0x58a0,	// (0x000303e3) battery_pane_stacon_g2_ParamLimits

0x58a0,	// (0x000303e3) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0003a260) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0003a260) battery_pane_stacon_g

0x58de,	// (0x00030421) navi_icon_pane_stacon

0x58f2,	// (0x00030435) navi_navi_pane_stacon

0x58de,	// (0x00030421) navi_text_pane_stacon

0x5836,	// (0x00030379) control_bottom_pane_stacon_g1

0x5908,	// (0x0003044b) control_bottom_pane_stacon_t1_ParamLimits

0x5908,	// (0x0003044b) control_bottom_pane_stacon_t1

0x84a1,	// (0x00032fe4) grid_app_pane_ParamLimits

0x84a1,	// (0x00032fe4) grid_app_pane

0x84c5,	// (0x00033008) scroll_pane_cp15_ParamLimits

0x84c5,	// (0x00033008) scroll_pane_cp15

0x84da,	// (0x0003301d) cell_app_pane_ParamLimits

0x84da,	// (0x0003301d) cell_app_pane

0x8506,	// (0x00033049) cell_app_pane_g1_ParamLimits

0x8506,	// (0x00033049) cell_app_pane_g1

0x852a,	// (0x0003306d) cell_app_pane_g2_ParamLimits

0x852a,	// (0x0003306d) cell_app_pane_g2

0x0001,

0xf722,	// (0x0003a265) cell_app_pane_g_ParamLimits

0xf722,	// (0x0003a265) cell_app_pane_g

0x8536,	// (0x00033079) cell_app_pane_t1_ParamLimits

0x8536,	// (0x00033079) cell_app_pane_t1

0x8548,	// (0x0003308b) grid_highlight_pane_ParamLimits

0x8548,	// (0x0003308b) grid_highlight_pane

0x813b,	// (0x00032c7e) cell_highlight_pane_g1

0x8143,	// (0x00032c86) cell_highlight_pane_g2

0x814b,	// (0x00032c8e) cell_highlight_pane_g3

0x8153,	// (0x00032c96) cell_highlight_pane_g4

0x815b,	// (0x00032c9e) cell_highlight_pane_g5

0x8163,	// (0x00032ca6) cell_highlight_pane_g6

0x816b,	// (0x00032cae) cell_highlight_pane_g7

0x8173,	// (0x00032cb6) cell_highlight_pane_g8

0x817b,	// (0x00032cbe) cell_highlight_pane_g9

0x71da,	// (0x00031d1d) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0003a213) cell_highlight_pane_g

0x8559,	// (0x0003309c) bg_scroll_pane

0x5952,	// (0x00030495) scroll_handle_pane

0x85a0,	// (0x000330e3) scroll_bg_pane_g1

0x85b5,	// (0x000330f8) scroll_bg_pane_g2

0x85cd,	// (0x00033110) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0003a26a) scroll_bg_pane_g

0x85e2,	// (0x00033125) scroll_handle_focus_pane_ParamLimits

0x85e2,	// (0x00033125) scroll_handle_focus_pane

0x85a0,	// (0x000330e3) scroll_handle_pane_g1

0x85ef,	// (0x00033132) scroll_handle_pane_g2

0x85cd,	// (0x00033110) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0003a271) scroll_handle_pane_g

0x818c,	// (0x00032ccf) bg_popup_sub_pane_cp21_ParamLimits

0x818c,	// (0x00032ccf) bg_popup_sub_pane_cp21

0x8603,	// (0x00033146) popup_fep_japan_predictive_window_t1_ParamLimits

0x8603,	// (0x00033146) popup_fep_japan_predictive_window_t1

0x861a,	// (0x0003315d) popup_fep_japan_predictive_window_t2_ParamLimits

0x861a,	// (0x0003315d) popup_fep_japan_predictive_window_t2

0x864d,	// (0x00033190) popup_fep_japan_predictive_window_t3_ParamLimits

0x864d,	// (0x00033190) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0003a278) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0003a278) popup_fep_japan_predictive_window_t

0x71e4,	// (0x00031d27) bg_popup_sub_pane_cp23

0x8684,	// (0x000331c7) listscroll_japin_cand_pane

0x868c,	// (0x000331cf) popup_fep_japan_candidate_window_t1

0x869a,	// (0x000331dd) candidate_pane_ParamLimits

0x869a,	// (0x000331dd) candidate_pane

0x86ac,	// (0x000331ef) scroll_pane_cp30

0x86b6,	// (0x000331f9) list_single_popup_jap_candidate_pane_ParamLimits

0x86b6,	// (0x000331f9) list_single_popup_jap_candidate_pane

0x71e4,	// (0x00031d27) list_highlight_pane_cp30

0x86ca,	// (0x0003320d) list_single_popup_jap_candidate_pane_t1

0x86d9,	// (0x0003321c) level_1_signal

0x86e6,	// (0x00033229) level_2_signal

0x86f3,	// (0x00033236) level_3_signal

0x8700,	// (0x00033243) level_4_signal

0x870d,	// (0x00033250) level_5_signal

0x871a,	// (0x0003325d) level_6_signal

0x8727,	// (0x0003326a) level_7_signal

0x86d9,	// (0x0003321c) level_1_battery

0x86e6,	// (0x00033229) level_2_battery

0x86f3,	// (0x00033236) level_3_battery

0x8700,	// (0x00033243) level_4_battery

0x870d,	// (0x00033250) level_5_battery

0x871a,	// (0x0003325d) level_6_battery

0x8727,	// (0x0003326a) level_7_battery

0x874c,	// (0x0003328f) list_menu_pane_ParamLimits

0x874c,	// (0x0003328f) list_menu_pane

0x875d,	// (0x000332a0) scroll_pane_cp25_ParamLimits

0x875d,	// (0x000332a0) scroll_pane_cp25

0x8776,	// (0x000332b9) list_double2_graphic_pane_cp2_ParamLimits

0x8776,	// (0x000332b9) list_double2_graphic_pane_cp2

0x8776,	// (0x000332b9) list_double2_large_graphic_pane_cp2_ParamLimits

0x8776,	// (0x000332b9) list_double2_large_graphic_pane_cp2

0x8776,	// (0x000332b9) list_double2_pane_cp2_ParamLimits

0x8776,	// (0x000332b9) list_double2_pane_cp2

0x8776,	// (0x000332b9) list_double_graphic_pane_cp2_ParamLimits

0x8776,	// (0x000332b9) list_double_graphic_pane_cp2

0x8776,	// (0x000332b9) list_double_large_graphic_pane_cp2_ParamLimits

0x8776,	// (0x000332b9) list_double_large_graphic_pane_cp2

0x8776,	// (0x000332b9) list_double_number_pane_cp2_ParamLimits

0x8776,	// (0x000332b9) list_double_number_pane_cp2

0x8776,	// (0x000332b9) list_double_pane_cp2_ParamLimits

0x8776,	// (0x000332b9) list_double_pane_cp2

0x879c,	// (0x000332df) list_single_2graphic_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_2graphic_pane_cp2

0x879c,	// (0x000332df) list_single_graphic_heading_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_graphic_heading_pane_cp2

0x879c,	// (0x000332df) list_single_graphic_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_graphic_pane_cp2

0x879c,	// (0x000332df) list_single_heading_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_heading_pane_cp2

0x87b9,	// (0x000332fc) list_single_large_graphic_pane_cp2_ParamLimits

0x87b9,	// (0x000332fc) list_single_large_graphic_pane_cp2

0x879c,	// (0x000332df) list_single_number_heading_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_number_heading_pane_cp2

0x879c,	// (0x000332df) list_single_number_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_number_pane_cp2

0x879c,	// (0x000332df) list_single_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_pane_cp2

0x880e,	// (0x00033351) bg_popup_sub_pane_cp22

0x5a04,	// (0x00030547) popup_side_volume_key_window_g1

0x5a2e,	// (0x00030571) popup_side_volume_key_window_t1

0x5a4c,	// (0x0003058f) volume_small_pane_cp1

0x7540,	// (0x00032083) bg_popup_sub_pane_cp24_ParamLimits

0x7540,	// (0x00032083) bg_popup_sub_pane_cp24

0x8824,	// (0x00033367) fep_china_uni_candidate_pane_ParamLimits

0x8824,	// (0x00033367) fep_china_uni_candidate_pane

0x8838,	// (0x0003337b) fep_china_uni_entry_pane

0x8848,	// (0x0003338b) popup_fep_china_uni_window_g1

0x8864,	// (0x000333a7) fep_china_uni_entry_pane_g1

0x886e,	// (0x000333b1) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0003a2a5) fep_china_uni_entry_pane_g

0x8878,	// (0x000333bb) fep_entry_item_pane

0x8882,	// (0x000333c5) fep_candidate_item_pane

0x888a,	// (0x000333cd) fep_china_uni_candidate_pane_g1

0x8894,	// (0x000333d7) fep_china_uni_candidate_pane_g2

0x889c,	// (0x000333df) fep_china_uni_candidate_pane_g3

0x88a4,	// (0x000333e7) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0003a2aa) fep_china_uni_candidate_pane_g

0x71da,	// (0x00031d1d) fep_entry_item_pane_g1

0x88ae,	// (0x000333f1) fep_entry_item_pane_t1_ParamLimits

0x88ae,	// (0x000333f1) fep_entry_item_pane_t1

0x88c4,	// (0x00033407) fep_candidate_item_pane_t1_ParamLimits

0x88c4,	// (0x00033407) fep_candidate_item_pane_t1

0x88d9,	// (0x0003341c) fep_candidate_item_pane_t2_ParamLimits

0x88d9,	// (0x0003341c) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0003a2b3) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0003a2b3) fep_candidate_item_pane_t

0x72c4,	// (0x00031e07) list_highlight_pane_cp31_ParamLimits

0x72c4,	// (0x00031e07) list_highlight_pane_cp31

0x88eb,	// (0x0003342e) level_1_signal_lsc

0x88f4,	// (0x00033437) level_2_signal_lsc

0x88fd,	// (0x00033440) level_3_signal_lsc

0x8906,	// (0x00033449) level_4_signal_lsc

0x890f,	// (0x00033452) level_5_signal_lsc

0x8918,	// (0x0003345b) level_6_signal_lsc

0x8921,	// (0x00033464) level_7_signal_lsc

0x8921,	// (0x00033464) level_1_battery_lsc

0x892a,	// (0x0003346d) level_2_battery_lsc

0x8933,	// (0x00033476) level_3_battery_lsc

0x893c,	// (0x0003347f) level_4_battery_lsc

0x8945,	// (0x00033488) level_5_battery_lsc

0x894e,	// (0x00033491) level_6_battery_lsc

0x88eb,	// (0x0003342e) level_7_battery_lsc

0x8957,	// (0x0003349a) scroll_handle_focus_pane_g1

0x8960,	// (0x000334a3) scroll_handle_focus_pane_g2

0x8969,	// (0x000334ac) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0003a2b8) scroll_handle_focus_pane_g

0x5a54,	// (0x00030597) list_single_2graphic_pane_g1_ParamLimits

0x5a54,	// (0x00030597) list_single_2graphic_pane_g1

0x5110,	// (0x0002fc53) list_single_2graphic_pane_g2_ParamLimits

0x5110,	// (0x0002fc53) list_single_2graphic_pane_g2

0x5096,	// (0x0002fbd9) list_single_2graphic_pane_g3_ParamLimits

0x5096,	// (0x0002fbd9) list_single_2graphic_pane_g3

0x5a60,	// (0x000305a3) list_single_2graphic_pane_g4_ParamLimits

0x5a60,	// (0x000305a3) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0003a2bf) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0003a2bf) list_single_2graphic_pane_g

0x5a6c,	// (0x000305af) list_single_2graphic_pane_t1_ParamLimits

0x5a6c,	// (0x000305af) list_single_2graphic_pane_t1

0x5a9a,	// (0x000305dd) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5a9a,	// (0x000305dd) list_double2_graphic_large_graphic_pane_g1

0x5348,	// (0x0002fe8b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5348,	// (0x0002fe8b) list_double2_graphic_large_graphic_pane_g2

0x5359,	// (0x0002fe9c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5359,	// (0x0002fe9c) list_double2_graphic_large_graphic_pane_g3

0x5aac,	// (0x000305ef) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5aac,	// (0x000305ef) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0003a2c8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0003a2c8) list_double2_graphic_large_graphic_pane_g

0x5ab8,	// (0x000305fb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5ab8,	// (0x000305fb) list_double2_graphic_large_graphic_pane_t1

0x5ace,	// (0x00030611) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5ace,	// (0x00030611) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0003a2d1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0003a2d1) list_double2_graphic_large_graphic_pane_t

0x8aab,	// (0x000335ee) popup_fast_swap_window_ParamLimits

0x8aab,	// (0x000335ee) popup_fast_swap_window

0x8ac9,	// (0x0003360c) popup_side_volume_key_window

0x8ae7,	// (0x0003362a) stacon_top_pane

0x8af1,	// (0x00033634) status_pane_ParamLimits

0x8af1,	// (0x00033634) status_pane

0x8ae7,	// (0x0003362a) status_small_pane

0x71e4,	// (0x00031d27) control_pane

0x71e4,	// (0x00031d27) stacon_bottom_pane

0x80b7,	// (0x00032bfa) scroll_pane_cp121

0x80ae,	// (0x00032bf1) set_content_pane

0x8972,	// (0x000334b5) bg_active_tab_pane_g1_cp1

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp1

0x8984,	// (0x000334c7) bg_active_tab_pane_g3_cp1

0x8972,	// (0x000334b5) bg_passive_tab_pane_g1_cp1

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp1

0x8984,	// (0x000334c7) bg_passive_tab_pane_g3_cp1

0x898d,	// (0x000334d0) bg_active_tab_pane_g1_cp2

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp2

0x8996,	// (0x000334d9) bg_active_tab_pane_g3_cp2

0x898d,	// (0x000334d0) bg_passive_tab_pane_g1_cp2

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp2

0x8996,	// (0x000334d9) bg_passive_tab_pane_g3_cp2

0x899f,	// (0x000334e2) bg_active_tab_pane_g1_cp3

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp3

0x89a8,	// (0x000334eb) bg_active_tab_pane_g3_cp3

0x899f,	// (0x000334e2) bg_passive_tab_pane_g1_cp3

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp3

0x89a8,	// (0x000334eb) bg_passive_tab_pane_g3_cp3

0x89b1,	// (0x000334f4) bg_active_tab_pane_g1_cp4

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp4

0x89bc,	// (0x000334ff) bg_active_tab_pane_g3_cp4

0x89b1,	// (0x000334f4) bg_passive_tab_pane_g1_cp4

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp4

0x89bc,	// (0x000334ff) bg_passive_tab_pane_g3_cp4

0x8a05,	// (0x00033548) bg_active_tab_pane_g1_cp5

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp5

0x8a0e,	// (0x00033551) bg_active_tab_pane_g3_cp5

0x8a05,	// (0x00033548) bg_passive_tab_pane_g1_cp5

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp5

0x8a0e,	// (0x00033551) bg_passive_tab_pane_g3_cp5

0x8a17,	// (0x0003355a) list_set_graphic_pane_ParamLimits

0x8a17,	// (0x0003355a) list_set_graphic_pane

0x71e4,	// (0x00031d27) bg_set_opt_pane_cp4

0x8a2c,	// (0x0003356f) list_set_graphic_pane_g1_ParamLimits

0x8a2c,	// (0x0003356f) list_set_graphic_pane_g1

0x8a38,	// (0x0003357b) list_set_graphic_pane_g2_ParamLimits

0x8a38,	// (0x0003357b) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0003a2d6) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0003a2d6) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0003a633) volume_small_pane_cp_g

0x8a5c,	// (0x0003359f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a5c,	// (0x0003359f) list_double2_large_graphic_pane_g1_cp2

0x8a6a,	// (0x000335ad) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a6a,	// (0x000335ad) list_double2_large_graphic_pane_g2_cp2

0x8a7b,	// (0x000335be) list_double2_large_graphic_pane_g3_cp2

0x8a83,	// (0x000335c6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a83,	// (0x000335c6) list_double2_large_graphic_pane_t1_cp2

0x8a99,	// (0x000335dc) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a99,	// (0x000335dc) list_double2_large_graphic_pane_t2_cp2

0xacf5,	// (0x00035838) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf5,	// (0x00035838) list_double_large_graphic_pane_g1_cp2

0xad08,	// (0x0003584b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad08,	// (0x0003584b) list_double_large_graphic_pane_g2_cp2

0x8c0f,	// (0x00033752) list_double_large_graphic_pane_g3_cp2

0xad19,	// (0x0003585c) list_double_large_graphic_pane_g4_cp

0xad21,	// (0x00035864) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad21,	// (0x00035864) list_double_large_graphic_pane_t1_cp2

0xad38,	// (0x0003587b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad38,	// (0x0003587b) list_double_large_graphic_pane_t2_cp2

0x8aff,	// (0x00033642) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8aff,	// (0x00033642) list_double2_graphic_pane_g1_cp2

0x8b0d,	// (0x00033650) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b0d,	// (0x00033650) list_double2_graphic_pane_g2_cp2

0x8b1e,	// (0x00033661) list_double2_graphic_pane_g3_cp2

0x8b28,	// (0x0003366b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b28,	// (0x0003366b) list_double2_graphic_pane_t1_cp2

0x8b3e,	// (0x00033681) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b3e,	// (0x00033681) list_double2_graphic_pane_t2_cp2

0x8b50,	// (0x00033693) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b50,	// (0x00033693) list_single_number_heading_pane_g1_cp2

0x8b5c,	// (0x0003369f) list_single_number_heading_pane_g2_cp2

0x8b64,	// (0x000336a7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b64,	// (0x000336a7) list_single_number_heading_pane_t1_cp2

0x8b7a,	// (0x000336bd) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b7a,	// (0x000336bd) list_single_number_heading_pane_t2_cp2

0x8b8e,	// (0x000336d1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b8e,	// (0x000336d1) list_single_number_heading_pane_t3_cp2

0x8b50,	// (0x00033693) list_single_heading_pane_g1_cp2_ParamLimits

0x8b50,	// (0x00033693) list_single_heading_pane_g1_cp2

0x8b5c,	// (0x0003369f) list_single_heading_pane_g2_cp2

0x8b64,	// (0x000336a7) list_single_heading_pane_t1_cp2_ParamLimits

0x8b64,	// (0x000336a7) list_single_heading_pane_t1_cp2

0xaaef,	// (0x00035632) list_single_heading_pane_t2_cp2_ParamLimits

0xaaef,	// (0x00035632) list_single_heading_pane_t2_cp2

0xaa31,	// (0x00035574) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa31,	// (0x00035574) list_double_graphic_pane_g1_cp2

0xaa3d,	// (0x00035580) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3d,	// (0x00035580) list_double_graphic_pane_g2_cp2

0xaa4c,	// (0x0003558f) list_double_graphic_pane_g3_cp2

0xaa54,	// (0x00035597) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa54,	// (0x00035597) list_double_graphic_pane_t1_cp2

0xaa6a,	// (0x000355ad) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6a,	// (0x000355ad) list_double_graphic_pane_t2_cp2

0x8c03,	// (0x00033746) list_double_number_pane_g1_cp2_ParamLimits

0x8c03,	// (0x00033746) list_double_number_pane_g1_cp2

0x8c0f,	// (0x00033752) list_double_number_pane_g2_cp2

0xa9f5,	// (0x00035538) list_double_number_pane_t1_cp2_ParamLimits

0xa9f5,	// (0x00035538) list_double_number_pane_t1_cp2

0xaa09,	// (0x0003554c) list_double_number_pane_t2_cp2_ParamLimits

0xaa09,	// (0x0003554c) list_double_number_pane_t2_cp2

0xaa1f,	// (0x00035562) list_double_number_pane_t3_cp2_ParamLimits

0xaa1f,	// (0x00035562) list_double_number_pane_t3_cp2

0xa8de,	// (0x00035421) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8de,	// (0x00035421) list_single_graphic_pane_g1_cp2

0x8c69,	// (0x000337ac) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c69,	// (0x000337ac) list_single_graphic_pane_g2_cp2

0x8c75,	// (0x000337b8) list_single_graphic_pane_g3_cp2

0xa8b4,	// (0x000353f7) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x000353f7) list_single_graphic_pane_t1_cp2

0x8c69,	// (0x000337ac) list_single_number_pane_g1_cp2_ParamLimits

0x8c69,	// (0x000337ac) list_single_number_pane_g1_cp2

0x8c75,	// (0x000337b8) list_single_number_pane_g2_cp2

0xa8b4,	// (0x000353f7) list_single_number_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x000353f7) list_single_number_pane_t1_cp2

0xa8ca,	// (0x0003540d) list_single_number_pane_t2_cp2_ParamLimits

0xa8ca,	// (0x0003540d) list_single_number_pane_t2_cp2

0x8a6a,	// (0x000335ad) list_double2_pane_g1_cp2_ParamLimits

0x8a6a,	// (0x000335ad) list_double2_pane_g1_cp2

0x8a7b,	// (0x000335be) list_double2_pane_g2_cp2

0x8bdb,	// (0x0003371e) list_double2_pane_t1_cp2_ParamLimits

0x8bdb,	// (0x0003371e) list_double2_pane_t1_cp2

0x8bf1,	// (0x00033734) list_double2_pane_t2_cp2_ParamLimits

0x8bf1,	// (0x00033734) list_double2_pane_t2_cp2

0x8c03,	// (0x00033746) list_double_pane_g1_cp2_ParamLimits

0x8c03,	// (0x00033746) list_double_pane_g1_cp2

0x8c0f,	// (0x00033752) list_double_pane_g2_cp2

0x8c17,	// (0x0003375a) list_double_pane_t1_cp2_ParamLimits

0x8c17,	// (0x0003375a) list_double_pane_t1_cp2

0x8c2d,	// (0x00033770) list_double_pane_t2_cp2_ParamLimits

0x8c2d,	// (0x00033770) list_double_pane_t2_cp2

0x8c59,	// (0x0003379c) list_single_pane_cp2_g3

0x8c69,	// (0x000337ac) list_single_pane_g1_cp2_ParamLimits

0x8c69,	// (0x000337ac) list_single_pane_g1_cp2

0x8c75,	// (0x000337b8) list_single_pane_g2_cp2

0x8c7d,	// (0x000337c0) list_single_pane_t1_cp2_ParamLimits

0x8c7d,	// (0x000337c0) list_single_pane_t1_cp2

0x8c95,	// (0x000337d8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c95,	// (0x000337d8) list_single_large_graphic_pane_g1_cp2

0x8ca3,	// (0x000337e6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8ca3,	// (0x000337e6) list_single_large_graphic_pane_g2_cp2

0x8caf,	// (0x000337f2) list_single_large_graphic_pane_g3_cp2

0x8cb7,	// (0x000337fa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8cb7,	// (0x000337fa) list_single_large_graphic_pane_g4_cp1

0x8cd1,	// (0x00033814) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8cd1,	// (0x00033814) list_single_large_graphic_pane_t1_cp2

0xa87e,	// (0x000353c1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa87e,	// (0x000353c1) list_single_graphic_heading_pane_g1_cp2

0xa84b,	// (0x0003538e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84b,	// (0x0003538e) list_single_graphic_heading_pane_g4_cp2

0x8c75,	// (0x000337b8) list_single_graphic_heading_pane_g5_cp2

0xa88a,	// (0x000353cd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88a,	// (0x000353cd) list_single_graphic_heading_pane_t1_cp2

0xa8a0,	// (0x000353e3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a0,	// (0x000353e3) list_single_graphic_heading_pane_t2_cp2

0xa83f,	// (0x00035382) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa83f,	// (0x00035382) list_single_2graphic_pane_g1_cp2

0xa84b,	// (0x0003538e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84b,	// (0x0003538e) list_single_2graphic_pane_g2_cp2

0x8c75,	// (0x000337b8) list_single_2graphic_pane_g3_cp2

0xa85c,	// (0x0003539f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85c,	// (0x0003539f) list_single_2graphic_pane_g4_cp2

0xa868,	// (0x000353ab) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa868,	// (0x000353ab) list_single_2graphic_pane_t1_cp2

0x71da,	// (0x00031d1d) list_highlight_pane_g10_cp1

0xa417,	// (0x00034f5a) list_highlight_pane_g1_cp1

0xa41f,	// (0x00034f62) list_highlight_pane_g2_cp1

0xa427,	// (0x00034f6a) list_highlight_pane_g3_cp1

0xa42f,	// (0x00034f72) list_highlight_pane_g4_cp1

0xa437,	// (0x00034f7a) list_highlight_pane_g5_cp1

0xa43f,	// (0x00034f82) list_highlight_pane_g6_cp1

0xa447,	// (0x00034f8a) list_highlight_pane_g7_cp1

0xa44f,	// (0x00034f92) list_highlight_pane_g8_cp1

0xa457,	// (0x00034f9a) list_highlight_pane_g9_cp1

0xa337,	// (0x00034e7a) form_field_slider_pane_t3

0xa345,	// (0x00034e88) form_field_slider_pane_t4

0xa353,	// (0x00034e96) slider_form_pane_ParamLimits

0xa353,	// (0x00034e96) slider_form_pane

0x71e4,	// (0x00031d27) control_abbreviations

0x71e4,	// (0x00031d27) control_conventions

0x71e4,	// (0x00031d27) control_definitions

0x71e4,	// (0x00031d27) format_table_attribute

0xab45,	// (0x00035688) bg_popup_preview_window_pane_g9

0x71e4,	// (0x00031d27) format_table_data2

0x71e4,	// (0x00031d27) format_table_data3

0x71e4,	// (0x00031d27) format_table_data_example

0x0008,

0x71e4,	// (0x00031d27) intro_purpose

0xf928,	// (0x0003a46b) bg_popup_preview_window_pane_g

0x71e4,	// (0x00031d27) texts_category

0x71e4,	// (0x00031d27) texts_graphics

0x8ce7,	// (0x0003382a) text_digital

0x8cf6,	// (0x00033839) text_primary

0x8d05,	// (0x00033848) text_primary_small

0x8d14,	// (0x00033857) text_secondary

0x8d23,	// (0x00033866) text_title

0xb2e1,	// (0x00035e24) bg_passive_tab_pane_g1_cp3_srt

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp3_srt

0xb2ea,	// (0x00035e2d) bg_passive_tab_pane_g3_cp3_srt

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp3_srt_ParamLimits

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp3_srt

0xb2f3,	// (0x00035e36) tabs_4_active_pane_srt_g1

0xb2fb,	// (0x00035e3e) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fb,	// (0x00035e3e) tabs_4_active_pane_srt_t1

0xb2e1,	// (0x00035e24) bg_active_tab_pane_g1_cp3_copy1

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp3_copy1

0xb2ea,	// (0x00035e2d) bg_active_tab_pane_g3_cp3_copy1

0x72c4,	// (0x00031e07) tabs_2_long_active_pane_srt_ParamLimits

0x72c4,	// (0x00031e07) tabs_2_long_active_pane_srt

0x72c4,	// (0x00031e07) tabs_2_long_passive_pane_srt_ParamLimits

0x72c4,	// (0x00031e07) tabs_2_long_passive_pane_srt

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp4_srt

0xaf95,	// (0x00035ad8) bg_passive_tab_pane_g1_cp4_srt

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00035ae1) bg_passive_tab_pane_g3_cp4_srt

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp4_srt_ParamLimits

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp4_srt

0xafa7,	// (0x00035aea) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa7,	// (0x00035aea) tabs_2_long_active_pane_srt_t1

0xaf95,	// (0x00035ad8) bg_active_tab_pane_g1_cp4_srt

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00035ae1) bg_active_tab_pane_g3_cp4_srt

0x7540,	// (0x00032083) tabs_3_long_active_pane_srt_ParamLimits

0x7540,	// (0x00032083) tabs_3_long_active_pane_srt

0x7540,	// (0x00032083) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7540,	// (0x00032083) tabs_3_long_passive_pane_cp_srt

0x7540,	// (0x00032083) tabs_3_long_passive_pane_srt_ParamLimits

0x7540,	// (0x00032083) tabs_3_long_passive_pane_srt

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp5_srt

0x8a05,	// (0x00033548) bg_passive_tab_pane_g1_cp5_srt

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp5_srt

0x8a0e,	// (0x00033551) bg_passive_tab_pane_g3_cp5_srt

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp5_srt_ParamLimits

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp5_srt

0xaf83,	// (0x00035ac6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf83,	// (0x00035ac6) tabs_3_long_active_pane_srt_t1

0x8a05,	// (0x00033548) bg_active_tab_pane_g1_cp5_srt

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp5_srt

0x8a0e,	// (0x00033551) bg_active_tab_pane_g3_cp5_srt

0xaf75,	// (0x00035ab8) navi_text_pane_srt_t1

0xaf6d,	// (0x00035ab0) navi_icon_pane_srt_g1

0x8efa,	// (0x00033a3d) midp_editing_number_pane_srt

0x8d32,	// (0x00033875) midp_ticker_pane_srt

0x8f02,	// (0x00033a45) midp_ticker_pane_srt_g1

0x8f0a,	// (0x00033a4d) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0003a2f5) midp_ticker_pane_srt_g

0x8f12,	// (0x00033a55) midp_ticker_pane_srt_t1

0xaf5e,	// (0x00035aa1) midp_editing_number_pane_t1_copy1

0x8d3a,	// (0x0003387d) listscroll_midp_pane

0x8d3a,	// (0x0003387d) midp_form_pane

0x8da8,	// (0x000338eb) midp_info_popup_window_ParamLimits

0x8da8,	// (0x000338eb) midp_info_popup_window

0x818c,	// (0x00032ccf) bg_popup_sub_pane_cp50_ParamLimits

0x818c,	// (0x00032ccf) bg_popup_sub_pane_cp50

0xa07e,	// (0x00034bc1) listscroll_midp_info_pane_ParamLimits

0xa07e,	// (0x00034bc1) listscroll_midp_info_pane

0xa066,	// (0x00034ba9) listscroll_form_midp_pane_ParamLimits

0xa066,	// (0x00034ba9) listscroll_form_midp_pane

0xa072,	// (0x00034bb5) scroll_bar_cp050

0xa046,	// (0x00034b89) list_midp_pane

0xbcf8,	// (0x0003683b) signal_pane_g2_cp

0x9f80,	// (0x00034ac3) listscroll_midp_info_pane_t1_ParamLimits

0x9f80,	// (0x00034ac3) listscroll_midp_info_pane_t1

0x9f98,	// (0x00034adb) listscroll_midp_info_pane_t2_ParamLimits

0x9f98,	// (0x00034adb) listscroll_midp_info_pane_t2

0x9fd6,	// (0x00034b19) listscroll_midp_info_pane_t3_ParamLimits

0x9fd6,	// (0x00034b19) listscroll_midp_info_pane_t3

0xa010,	// (0x00034b53) listscroll_midp_info_pane_t4_ParamLimits

0xa010,	// (0x00034b53) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0003a3a6) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0003a3a6) listscroll_midp_info_pane_t

0x8256,	// (0x00032d99) scroll_pane_cp21

0x9f1a,	// (0x00034a5d) form_midp_field_choice_group_pane

0x9f23,	// (0x00034a66) form_midp_field_text_pane

0x9f66,	// (0x00034aa9) form_midp_field_time_pane

0x9f6e,	// (0x00034ab1) form_midp_gauge_slider_pane

0x9f77,	// (0x00034aba) form_midp_gauge_wait_pane

0x71e4,	// (0x00031d27) form_midp_image_pane

0x600a,	// (0x00030b4d) list_single_midp_pane_ParamLimits

0x600a,	// (0x00030b4d) list_single_midp_pane

0x9ede,	// (0x00034a21) form_midp_field_text_pane_t1

0x9cf2,	// (0x00034835) input_focus_pane_cp050

0x9f09,	// (0x00034a4c) list_midp_form_text_pane

0x9ead,	// (0x000349f0) form_midp_field_choice_group_pane_t1

0x9ebb,	// (0x000349fe) input_focus_pane_cp051

0x9ecf,	// (0x00034a12) list_midp_choice_pane

0x71e4,	// (0x00031d27) status_idle_pane

0x9e91,	// (0x000349d4) form_midp_field_time_pane_t1

0x71da,	// (0x00031d1d) wait_anim_pane_g2_copy1

0x9e9f,	// (0x000349e2) form_midp_field_time_pane_t2

0x0001,

0x8e58,	// (0x0003399b) aid_navinavi_width_2_pane

0xf85e,	// (0x0003a3a1) form_midp_field_time_pane_t

0x71e4,	// (0x00031d27) input_focus_pane_cp052

0x71e4,	// (0x00031d27) bg_input_focus_pane_cp040

0x9e51,	// (0x00034994) form_midp_gauge_slider_pane_t1

0x9e5f,	// (0x000349a2) form_midp_gauge_slider_pane_t2

0x9e6d,	// (0x000349b0) form_midp_gauge_slider_pane_t3

0x9e7b,	// (0x000349be) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0003a398) form_midp_gauge_slider_pane_t

0x9e89,	// (0x000349cc) form_midp_slider_pane

0x72c4,	// (0x00031e07) bg_input_focus_pane_cp041_ParamLimits

0x72c4,	// (0x00031e07) bg_input_focus_pane_cp041

0x9e1e,	// (0x00034961) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e1e,	// (0x00034961) form_midp_gauge_wait_pane_t1

0x9e30,	// (0x00034973) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e30,	// (0x00034973) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0003a393) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0003a393) form_midp_gauge_wait_pane_t

0x9e42,	// (0x00034985) form_midp_wait_pane_ParamLimits

0x9e42,	// (0x00034985) form_midp_wait_pane

0x9de6,	// (0x00034929) form_midp_image_pane_g1

0x9def,	// (0x00034932) form_midp_image_pane_t1

0x9dfe,	// (0x00034941) form_midp_image_pane_t2

0x9e0d,	// (0x00034950) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0003a38c) form_midp_image_pane_t

0x9ddd,	// (0x00034920) list_single_midp_pane_g1

0x5ffb,	// (0x00030b3e) list_single_midp_pane_t1

0x9dc3,	// (0x00034906) list_midp_form_item_pane_ParamLimits

0x9dc3,	// (0x00034906) list_midp_form_item_pane

0x8e00,	// (0x00033943) list_midp_form_item_pane_t1

0x8e0f,	// (0x00033952) midp_ticker_pane_g1

0x8e1b,	// (0x0003395e) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0003a2db) midp_ticker_pane_g

0x8e27,	// (0x0003396a) midp_ticker_pane_t1

0xb1dd,	// (0x00035d20) midp_editing_number_pane_t1

0xb1bb,	// (0x00035cfe) midp_editing_number_pane

0xb1ca,	// (0x00035d0d) midp_ticker_pane

0xaf4e,	// (0x00035a91) ai_message_heading_pane

0x71e4,	// (0x00031d27) bg_popup_window_pane_cp14

0xaf56,	// (0x00035a99) listscroll_ai_message_pane

0xaed4,	// (0x00035a17) ai_message_heading_pane_g1_ParamLimits

0xaed4,	// (0x00035a17) ai_message_heading_pane_g1

0xaee0,	// (0x00035a23) ai_message_heading_pane_g2_ParamLimits

0xaee0,	// (0x00035a23) ai_message_heading_pane_g2

0xaeee,	// (0x00035a31) ai_message_heading_pane_g3_ParamLimits

0xaeee,	// (0x00035a31) ai_message_heading_pane_g3

0xaefa,	// (0x00035a3d) ai_message_heading_pane_g4_ParamLimits

0xaefa,	// (0x00035a3d) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0003a4cd) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0003a4cd) ai_message_heading_pane_g

0xaf06,	// (0x00035a49) ai_message_heading_pane_t1_ParamLimits

0xaf06,	// (0x00035a49) ai_message_heading_pane_t1

0xaf20,	// (0x00035a63) ai_message_heading_pane_t2_ParamLimits

0xaf20,	// (0x00035a63) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0003a4d6) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0003a4d6) ai_message_heading_pane_t

0xaf34,	// (0x00035a77) bg_popup_heading_pane_cp1_ParamLimits

0xaf34,	// (0x00035a77) bg_popup_heading_pane_cp1

0xaec2,	// (0x00035a05) list_ai_message_pane_ParamLimits

0xaec2,	// (0x00035a05) list_ai_message_pane

0x8256,	// (0x00032d99) scroll_pane_cp10

0xae5e,	// (0x000359a1) list_ai_message_pane_g1

0xae66,	// (0x000359a9) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0003a4aa) list_ai_message_pane_g

0xae6e,	// (0x000359b1) list_ai_message_pane_t1_ParamLimits

0xae6e,	// (0x000359b1) list_ai_message_pane_t1

0xae83,	// (0x000359c6) list_ai_message_pane_t2_ParamLimits

0xae83,	// (0x000359c6) list_ai_message_pane_t2

0xae98,	// (0x000359db) list_ai_message_pane_t3_ParamLimits

0xae98,	// (0x000359db) list_ai_message_pane_t3

0xaead,	// (0x000359f0) list_ai_message_pane_t4_ParamLimits

0xaead,	// (0x000359f0) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0003a4af) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0003a4af) list_ai_message_pane_t

0xae47,	// (0x0003598a) cell_ai_soft_ind_pane_ParamLimits

0xae47,	// (0x0003598a) cell_ai_soft_ind_pane

0x8e39,	// (0x0003397c) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e39,	// (0x0003397c) cell_ai_soft_ind_pane_g1

0x71e4,	// (0x00031d27) grid_highlight_cp1

0x8e46,	// (0x00033989) text_secondary_cp56_ParamLimits

0x8e46,	// (0x00033989) text_secondary_cp56

0xae1c,	// (0x0003595f) example_general_pane_ParamLimits

0xae1c,	// (0x0003595f) example_general_pane

0xae28,	// (0x0003596b) example_parent_pane_g1_ParamLimits

0xae28,	// (0x0003596b) example_parent_pane_g1

0xae34,	// (0x00035977) example_parent_pane_t1_ParamLimits

0xae34,	// (0x00035977) example_parent_pane_t1

0x9487,	// (0x00033fca) popup_preview_text_window_ParamLimits

0x9487,	// (0x00033fca) popup_preview_text_window

0x8c61,	// (0x000337a4) list_single_pane_cp2_g4

0x75f6,	// (0x00032139) bg_popup_preview_window_pane_ParamLimits

0x75f6,	// (0x00032139) bg_popup_preview_window_pane

0xab4f,	// (0x00035692) popup_preview_text_window_t1_ParamLimits

0xab4f,	// (0x00035692) popup_preview_text_window_t1

0xab6d,	// (0x000356b0) popup_preview_text_window_t2_ParamLimits

0xab6d,	// (0x000356b0) popup_preview_text_window_t2

0xabb6,	// (0x000356f9) popup_preview_text_window_t3_ParamLimits

0xabb6,	// (0x000356f9) popup_preview_text_window_t3

0xabfb,	// (0x0003573e) popup_preview_text_window_t4_ParamLimits

0xabfb,	// (0x0003573e) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0003a47e) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0003a47e) popup_preview_text_window_t

0xac79,	// (0x000357bc) scroll_pane_cp11

0x9c00,	// (0x00034743) bg_popup_preview_window_pane_g1

0xab03,	// (0x00035646) bg_popup_preview_window_pane_g2

0xab0d,	// (0x00035650) bg_popup_preview_window_pane_g3

0xab17,	// (0x0003565a) bg_popup_preview_window_pane_g4

0xab21,	// (0x00035664) bg_popup_preview_window_pane_g5

0xab2b,	// (0x0003566e) bg_popup_preview_window_pane_g6

0xab33,	// (0x00035676) bg_popup_preview_window_pane_g7

0xab3b,	// (0x0003567e) bg_popup_preview_window_pane_g8

0x4c05,	// (0x0002f748) aid_popup_width_pane

0x9463,	// (0x00033fa6) popup_midp_note_alarm_window_ParamLimits

0x9463,	// (0x00033fa6) popup_midp_note_alarm_window

0x80c8,	// (0x00032c0b) data_form_pane_ParamLimits

0x5611,	// (0x00030154) form_field_data_pane_g1

0x561b,	// (0x0003015e) form_field_data_pane_t1_ParamLimits

0x80d4,	// (0x00032c17) input_focus_pane_ParamLimits

0x80e2,	// (0x00032c25) data_form_wide_pane_ParamLimits

0x5635,	// (0x00030178) form_field_data_wide_pane_g1

0x5641,	// (0x00030184) form_field_data_wide_pane_t1_ParamLimits

0x7e45,	// (0x00032988) input_focus_pane_cp6_ParamLimits

0x8201,	// (0x00032d44) input_popup_find_pane_g1_ParamLimits

0x8201,	// (0x00032d44) input_popup_find_pane_g1

0x58b1,	// (0x000303f4) aid_navi_side_left_pane

0x58c6,	// (0x00030409) aid_navi_side_right_pane

0xa512,	// (0x00035055) bg_popup_window_pane_cp30_ParamLimits

0xa512,	// (0x00035055) bg_popup_window_pane_cp30

0xa58c,	// (0x000350cf) popup_midp_note_alarm_window_g1_ParamLimits

0xa58c,	// (0x000350cf) popup_midp_note_alarm_window_g1

0xa5bc,	// (0x000350ff) popup_midp_note_alarm_window_t1_ParamLimits

0xa5bc,	// (0x000350ff) popup_midp_note_alarm_window_t1

0xa65d,	// (0x000351a0) popup_midp_note_alarm_window_t2_ParamLimits

0xa65d,	// (0x000351a0) popup_midp_note_alarm_window_t2

0xa70b,	// (0x0003524e) popup_midp_note_alarm_window_t3_ParamLimits

0xa70b,	// (0x0003524e) popup_midp_note_alarm_window_t3

0xa73d,	// (0x00035280) popup_midp_note_alarm_window_t4_ParamLimits

0xa73d,	// (0x00035280) popup_midp_note_alarm_window_t4

0xa763,	// (0x000352a6) popup_midp_note_alarm_window_t5_ParamLimits

0xa763,	// (0x000352a6) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0003a41b) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0003a41b) popup_midp_note_alarm_window_t

0xa80f,	// (0x00035352) wait_bar_pane_cp1_ParamLimits

0xa80f,	// (0x00035352) wait_bar_pane_cp1

0x71e4,	// (0x00031d27) wait_anim_pane_copy1

0x71e4,	// (0x00031d27) wait_border_pane_copy1

0xa1f7,	// (0x00034d3a) wait_border_pane_g1_copy1

0x565b,	// (0x0003019e) form_field_popup_pane_g1

0x5663,	// (0x000301a6) form_field_popup_pane_t1_ParamLimits

0x80d4,	// (0x00032c17) input_focus_pane_cp7_ParamLimits

0x810e,	// (0x00032c51) list_form_pane_ParamLimits

0x567d,	// (0x000301c0) form_field_popup_wide_pane_g1

0x5685,	// (0x000301c8) form_field_popup_wide_pane_t1_ParamLimits

0x80d4,	// (0x00032c17) input_focus_pane_cp8_ParamLimits

0x811a,	// (0x00032c5d) list_form_wide_pane_ParamLimits

0xb36e,	// (0x00035eb1) aid_size_cell_graphic_pane

0x5711,	// (0x00030254) data_form_pane_t1_ParamLimits

0x629d,	// (0x00030de0) data_form_wide_pane_t1_ParamLimits

0x97ae,	// (0x000342f1) bg_status_flat_pane

0x7224,	// (0x00031d67) title_pane_t1_ParamLimits

0x728c,	// (0x00031dcf) title_pane_t2_ParamLimits

0x72b2,	// (0x00031df5) title_pane_t3_ParamLimits

0xf59b,	// (0x0003a0de) title_pane_t_ParamLimits

0x86d9,	// (0x0003321c) level_1_signal_ParamLimits

0x86e6,	// (0x00033229) level_2_signal_ParamLimits

0x86f3,	// (0x00033236) level_3_signal_ParamLimits

0x8700,	// (0x00033243) level_4_signal_ParamLimits

0x870d,	// (0x00033250) level_5_signal_ParamLimits

0x871a,	// (0x0003325d) level_6_signal_ParamLimits

0x8727,	// (0x0003326a) level_7_signal_ParamLimits

0x86d9,	// (0x0003321c) level_1_battery_ParamLimits

0x86e6,	// (0x00033229) level_2_battery_ParamLimits

0x86f3,	// (0x00033236) level_3_battery_ParamLimits

0x8700,	// (0x00033243) level_4_battery_ParamLimits

0x870d,	// (0x00033250) level_5_battery_ParamLimits

0x871a,	// (0x0003325d) level_6_battery_ParamLimits

0x8727,	// (0x0003326a) level_7_battery_ParamLimits

0xa417,	// (0x00034f5a) bg_status_flat_pane_g1

0xa41f,	// (0x00034f62) bg_status_flat_pane_g2

0xa427,	// (0x00034f6a) bg_status_flat_pane_g3

0xa42f,	// (0x00034f72) bg_status_flat_pane_g4

0xa437,	// (0x00034f7a) bg_status_flat_pane_g5

0xa43f,	// (0x00034f82) bg_status_flat_pane_g6

0xa447,	// (0x00034f8a) bg_status_flat_pane_g7

0x72da,	// (0x00031e1d) tabs_3_active_pane_t1_ParamLimits

0x72da,	// (0x00031e1d) tabs_3_passive_pane_t1_ParamLimits

0x72f4,	// (0x00031e37) tabs_4_active_pane_t1_ParamLimits

0x72f4,	// (0x00031e37) tabs_4_1_passive_pane_t1_ParamLimits

0x8298,	// (0x00032ddb) tabs_2_active_pane_t1_ParamLimits

0x8298,	// (0x00032ddb) tabs_2_passive_pane_t1_ParamLimits

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp4_ParamLimits

0x82b8,	// (0x00032dfb) tabs_2_long_active_pane_t1_ParamLimits

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp4_ParamLimits

0x5f42,	// (0x00030a85) list_single_midp_graphic_pane_t1_ParamLimits

0x82aa,	// (0x00032ded) bg_active_tab_pane_cp5_ParamLimits

0x82d7,	// (0x00032e1a) tabs_3_long_active_pane_t1_ParamLimits

0x82cb,	// (0x00032e0e) bg_passive_tab_pane_cp5_ParamLimits

0x5f42,	// (0x00030a85) list_single_midp_graphic_pane_t1

0x97ae,	// (0x000342f1) bg_status_flat_pane_ParamLimits

0x9879,	// (0x000343bc) indicator_pane_cp2_ParamLimits

0x9879,	// (0x000343bc) indicator_pane_cp2

0x99bb,	// (0x000344fe) navi_pane_srt_ParamLimits

0x99bb,	// (0x000344fe) navi_pane_srt

0x99df,	// (0x00034522) popup_clock_digital_analogue_window_cp1

0x73a4,	// (0x00031ee7) indicator_pane_t1

0x8d32,	// (0x00033875) copy_highlight_pane

0x8d32,	// (0x00033875) cursor_graphics_pane

0x8d32,	// (0x00033875) graphic_within_text_pane

0x8d32,	// (0x00033875) link_highlight_pane

0xac3c,	// (0x0003577f) popup_preview_text_window_t5_ParamLimits

0xac3c,	// (0x0003577f) popup_preview_text_window_t5

0x8e62,	// (0x000339a5) cursor_digital_pane

0x8e62,	// (0x000339a5) cursor_primary_pane

0x8e73,	// (0x000339b6) cursor_primary_small_pane

0x8e7b,	// (0x000339be) cursor_secondary_pane

0x8e83,	// (0x000339c6) cursor_title_pane

0x8e62,	// (0x000339a5) link_highlight_digital_pane

0x8e6a,	// (0x000339ad) link_highlight_primary_pane

0x8e73,	// (0x000339b6) link_highlight_primary_small_pane

0x8e7b,	// (0x000339be) link_highlight_secondary_pane

0x8e83,	// (0x000339c6) link_highlight_title_pane

0x8e62,	// (0x000339a5) copy_highlight_digital_pane

0x8e62,	// (0x000339a5) copy_highlight_primary_pane

0x8e73,	// (0x000339b6) copy_highlight_primary_small_pane

0x8e7b,	// (0x000339be) copy_highlight_secondary_pane

0x8e83,	// (0x000339c6) copy_highlight_title_pane

0x8e7b,	// (0x000339be) graphic_text_digital_pane

0xa4b5,	// (0x00034ff8) graphic_text_primary_pane

0xa4be,	// (0x00035001) graphic_text_primary_small_pane

0x8e73,	// (0x000339b6) graphic_text_secondary_pane

0x8e62,	// (0x000339a5) graphic_text_title_pane

0x8e8b,	// (0x000339ce) cursor_primary_pane_g1

0xa4a7,	// (0x00034fea) cursor_text_primary_t1

0xa48f,	// (0x00034fd2) cursor_primary_small_pane_g1

0xa499,	// (0x00034fdc) cursor_text_primary_small_t1

0xa477,	// (0x00034fba) cursor_primary_small_pane_g1_copy1

0xa481,	// (0x00034fc4) cursor_text_primary_small_t1_copy1

0xa45f,	// (0x00034fa2) cursor_text_title_t1

0xa46d,	// (0x00034fb0) cursor_title_pane_g1

0x8e8b,	// (0x000339ce) cursor_digital_pane_g1

0x8e95,	// (0x000339d8) cursor_text_digital_t1

0x8ea3,	// (0x000339e6) link_highlight_primary_pane_g1

0xa408,	// (0x00034f4b) link_highlight_primary_pane_t1

0x8ea3,	// (0x000339e6) link_highlight_primary_small_pane_g1

0x8eab,	// (0x000339ee) link_highlight_primary_small_pane_t1

0x8eba,	// (0x000339fd) link_highlight_secondary_pane_g1

0x8ec2,	// (0x00033a05) link_highlight_secondary_pane_t1

0xa37c,	// (0x00034ebf) link_highlight_title_pane_g1

0xa384,	// (0x00034ec7) link_highlight_title_pane_t1

0xa365,	// (0x00034ea8) link_highlight_digital_pane_g1

0xa36d,	// (0x00034eb0) link_highlight_digital_pane_t1

0xa22d,	// (0x00034d70) copy_highlight_primary_pane_g1

0xa244,	// (0x00034d87) copy_highlight_primary_pane_t1

0xa22d,	// (0x00034d70) copy_highlight_primary_small_pane_g1

0xa235,	// (0x00034d78) copy_highlight_primary_small_pane_t1

0x8ed1,	// (0x00033a14) copy_highlight_secondary_pane_g1

0x8ed9,	// (0x00033a1c) copy_highlight_secondary_pane_t1

0xa216,	// (0x00034d59) copy_highlight_title_pane_g1

0xa21e,	// (0x00034d61) copy_highlight_title_pane_t1

0xa22d,	// (0x00034d70) copy_highlight_digital_pane_g1

0xb53e,	// (0x00036081) copy_highlight_digital_pane_t1

0xb492,	// (0x00035fd5) graphic_text_primary_pane_g1

0xb522,	// (0x00036065) graphic_text_primary_pane_t1

0xb530,	// (0x00036073) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0003a54a) graphic_text_primary_pane_t

0xb4fe,	// (0x00036041) graphic_text_primary_small_pane_g1

0xb506,	// (0x00036049) graphic_text_primary_small_pane_t1

0xb514,	// (0x00036057) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0003a545) graphic_text_primary_small_pane_t

0xb4da,	// (0x0003601d) graphic_text_secondary_pane_g1

0xb4e2,	// (0x00036025) graphic_text_secondary_pane_t1

0xb4f0,	// (0x00036033) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0003a540) graphic_text_secondary_pane_t

0xb4b6,	// (0x00035ff9) graphic_text_title_pane_g1

0xb4be,	// (0x00036001) graphic_text_title_pane_t1

0xb4cc,	// (0x0003600f) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0003a53b) graphic_text_title_pane_t

0xb492,	// (0x00035fd5) graphic_text_digital_pane_g1

0xb49a,	// (0x00035fdd) graphic_text_digital_pane_t1

0xb4a8,	// (0x00035feb) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0003a536) graphic_text_digital_pane_t

0x72c4,	// (0x00031e07) navi_icon_pane_srt_ParamLimits

0x72c4,	// (0x00031e07) navi_icon_pane_srt

0x71e4,	// (0x00031d27) navi_midp_pane_srt

0x71e4,	// (0x00031d27) navi_navi_pane_srt

0x72c4,	// (0x00031e07) navi_text_pane_srt_ParamLimits

0x72c4,	// (0x00031e07) navi_text_pane_srt

0xb45d,	// (0x00035fa0) navi_navi_icon_text_pane_srt

0xb465,	// (0x00035fa8) navi_navi_pane_srt_g1_ParamLimits

0xb465,	// (0x00035fa8) navi_navi_pane_srt_g1

0xb477,	// (0x00035fba) navi_navi_pane_srt_g2_ParamLimits

0xb477,	// (0x00035fba) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0003a531) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0003a531) navi_navi_pane_srt_g

0xb489,	// (0x00035fcc) navi_navi_tabs_pane_srt

0xb45d,	// (0x00035fa0) navi_navi_text_pane_srt

0xb45d,	// (0x00035fa0) navi_navi_volume_pane_srt

0xb44e,	// (0x00035f91) navi_navi_text_pane_srt_t1

0x63d6,	// (0x00030f19) navi_navi_volume_pane_srt_g1

0x63de,	// (0x00030f21) volume_small_pane_srt_ParamLimits

0x63de,	// (0x00030f21) volume_small_pane_srt

0x5c24,	// (0x00030767) volume_small_pane_srt_g1_ParamLimits

0x5c24,	// (0x00030767) volume_small_pane_srt_g1

0x5c34,	// (0x00030777) volume_small_pane_srt_g2_ParamLimits

0x5c34,	// (0x00030777) volume_small_pane_srt_g2

0x5c45,	// (0x00030788) volume_small_pane_srt_g3_ParamLimits

0x5c45,	// (0x00030788) volume_small_pane_srt_g3

0x5c56,	// (0x00030799) volume_small_pane_srt_g4_ParamLimits

0x5c56,	// (0x00030799) volume_small_pane_srt_g4

0x5c67,	// (0x000307aa) volume_small_pane_srt_g5_ParamLimits

0x5c67,	// (0x000307aa) volume_small_pane_srt_g5

0x5c78,	// (0x000307bb) volume_small_pane_srt_g6_ParamLimits

0x5c78,	// (0x000307bb) volume_small_pane_srt_g6

0x5c89,	// (0x000307cc) volume_small_pane_srt_g7_ParamLimits

0x5c89,	// (0x000307cc) volume_small_pane_srt_g7

0x5c9a,	// (0x000307dd) volume_small_pane_srt_g8_ParamLimits

0x5c9a,	// (0x000307dd) volume_small_pane_srt_g8

0x5cab,	// (0x000307ee) volume_small_pane_srt_g9_ParamLimits

0x5cab,	// (0x000307ee) volume_small_pane_srt_g9

0x5cbc,	// (0x000307ff) volume_small_pane_srt_g10_ParamLimits

0x5cbc,	// (0x000307ff) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0003a2e0) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0003a2e0) volume_small_pane_srt_g

0x76ab,	// (0x000321ee) query_popup_data_pane_cp2

0xb434,	// (0x00035f77) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb434,	// (0x00035f77) navi_navi_icon_text_pane_srt_t1

0xa4b5,	// (0x00034ff8) navi_tabs_2_long_pane_srt

0xa4b5,	// (0x00034ff8) navi_tabs_2_pane_srt

0xa4b5,	// (0x00034ff8) navi_tabs_3_long_pane_srt

0xa4b5,	// (0x00034ff8) navi_tabs_3_pane_srt

0xa4b5,	// (0x00034ff8) navi_tabs_4_pane_srt

0x63b6,	// (0x00030ef9) tabs_2_active_pane_srt_ParamLimits

0x63b6,	// (0x00030ef9) tabs_2_active_pane_srt

0x63c6,	// (0x00030f09) tabs_2_passive_pane_srt_ParamLimits

0x63c6,	// (0x00030f09) tabs_2_passive_pane_srt

0x90b8,	// (0x00033bfb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90b8,	// (0x00033bfb) bg_passive_tab_pane_cp1_srt

0xb400,	// (0x00035f43) bg_passive_tab_pane_g1_cp1_srt

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp1_srt

0xb409,	// (0x00035f4c) bg_passive_tab_pane_g3_cp1_srt

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp1_srt_ParamLimits

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp1_srt

0xb412,	// (0x00035f55) tabs_2_active_pane_srt_g1

0xb41a,	// (0x00035f5d) tabs_2_active_pane_srt_t1_ParamLimits

0xb41a,	// (0x00035f5d) tabs_2_active_pane_srt_t1

0xb400,	// (0x00035f43) bg_active_tab_pane_g1_cp1_srt

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp1_srt

0xb409,	// (0x00035f4c) bg_active_tab_pane_g3_cp1_srt

0x6383,	// (0x00030ec6) tabs_3_active_pane_srt_ParamLimits

0x6383,	// (0x00030ec6) tabs_3_active_pane_srt

0x6394,	// (0x00030ed7) tabs_3_passive_pane_cp_srt_ParamLimits

0x6394,	// (0x00030ed7) tabs_3_passive_pane_cp_srt

0x63a5,	// (0x00030ee8) tabs_3_passive_pane_srt_ParamLimits

0x63a5,	// (0x00030ee8) tabs_3_passive_pane_srt

0x90b8,	// (0x00033bfb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90b8,	// (0x00033bfb) bg_passive_tab_pane_cp2_srt

0x8ee8,	// (0x00033a2b) bg_passive_tab_pane_g1_cp2_srt

0x897b,	// (0x000334be) bg_passive_tab_pane_g2_cp2_srt

0x8ef1,	// (0x00033a34) bg_passive_tab_pane_g3_cp2_srt

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp2_srt_ParamLimits

0x72c4,	// (0x00031e07) bg_active_tab_pane_cp2_srt

0xb3e6,	// (0x00035f29) tabs_3_active_pane_srt_g1

0xb3ee,	// (0x00035f31) tabs_3_active_pane_srt_t1_ParamLimits

0xb3ee,	// (0x00035f31) tabs_3_active_pane_srt_t1

0x8ee8,	// (0x00033a2b) bg_active_tab_pane_g1_cp2_srt

0x897b,	// (0x000334be) bg_active_tab_pane_g2_cp2_srt

0x8ef1,	// (0x00033a34) bg_active_tab_pane_g3_cp2_srt

0x633b,	// (0x00030e7e) tabs_4_active_pane_srt_ParamLimits

0x633b,	// (0x00030e7e) tabs_4_active_pane_srt

0x634d,	// (0x00030e90) tabs_4_passive_pane_cp2_srt_ParamLimits

0x634d,	// (0x00030e90) tabs_4_passive_pane_cp2_srt

0x9046,	// (0x00033b89) aid_size_cell_toolbar

0x82cb,	// (0x00032e0e) main_idle_act_pane_ParamLimits

0x927d,	// (0x00033dc0) popup_large_graphic_colour_window_ParamLimits

0x9630,	// (0x00034173) popup_toolbar_window_ParamLimits

0x9630,	// (0x00034173) popup_toolbar_window

0x62f6,	// (0x00030e39) list_single_graphic_2heading_pane_ParamLimits

0x62f6,	// (0x00030e39) list_single_graphic_2heading_pane

0x8487,	// (0x00032fca) aid_size_cell_apps_grid_lsc_pane

0x8499,	// (0x00032fdc) aid_size_cell_apps_grid_prt_pane

0x90b8,	// (0x00033bfb) bg_wml_button_pane_cp1_ParamLimits

0x90b8,	// (0x00033bfb) bg_wml_button_pane_cp1

0x9ede,	// (0x00034a21) form_midp_field_text_pane_t1_ParamLimits

0x9cf2,	// (0x00034835) input_focus_pane_cp050_ParamLimits

0x9f09,	// (0x00034a4c) list_midp_form_text_pane_ParamLimits

0x9ebb,	// (0x000349fe) input_focus_pane_cp051_ParamLimits

0x9ecf,	// (0x00034a12) list_midp_choice_pane_ParamLimits

0x9d83,	// (0x000348c6) list_single_2graphic_pane_cp3_ParamLimits

0x9d83,	// (0x000348c6) list_single_2graphic_pane_cp3

0x9d9c,	// (0x000348df) list_single_midp_graphic_pane_ParamLimits

0x9d9c,	// (0x000348df) list_single_midp_graphic_pane

0x4b8d,	// (0x0002f6d0) list_single_graphic_2heading_pane_g1_ParamLimits

0x4b8d,	// (0x0002f6d0) list_single_graphic_2heading_pane_g1

0x4b99,	// (0x0002f6dc) list_single_graphic_2heading_pane_g4_ParamLimits

0x4b99,	// (0x0002f6dc) list_single_graphic_2heading_pane_g4

0x4ba5,	// (0x0002f6e8) list_single_graphic_2heading_pane_g5_ParamLimits

0x4ba5,	// (0x0002f6e8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0003a333) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0003a333) list_single_graphic_2heading_pane_g

0x4bb1,	// (0x0002f6f4) list_single_graphic_2heading_pane_t1_ParamLimits

0x4bb1,	// (0x0002f6f4) list_single_graphic_2heading_pane_t1

0x4bc5,	// (0x0002f708) list_single_graphic_2heading_pane_t2_ParamLimits

0x4bc5,	// (0x0002f708) list_single_graphic_2heading_pane_t2

0x4be1,	// (0x0002f724) list_single_graphic_2heading_pane_t3_ParamLimits

0x4be1,	// (0x0002f724) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0003a33a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0003a33a) list_single_graphic_2heading_pane_t

0x9b3e,	// (0x00034681) bg_popup_sub_pane_cp2

0x9b68,	// (0x000346ab) grid_toobar_pane

0x5e36,	// (0x00030979) cell_toolbar_pane_ParamLimits

0x5e36,	// (0x00030979) cell_toolbar_pane

0x9ba4,	// (0x000346e7) cell_toolbar_pane_g1_ParamLimits

0x9ba4,	// (0x000346e7) cell_toolbar_pane_g1

0x9bb8,	// (0x000346fb) cell_toolbar_pane_g2_ParamLimits

0x9bb8,	// (0x000346fb) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x0003a348) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x0003a348) cell_toolbar_pane_g

0x9bda,	// (0x0003471d) grid_highlight_pane_cp2_ParamLimits

0x9bda,	// (0x0003471d) grid_highlight_pane_cp2

0x9bf4,	// (0x00034737) toolbar_button_pane

0x9c00,	// (0x00034743) toolbar_button_pane_g1

0x9c08,	// (0x0003474b) toolbar_button_pane_g2

0x9c10,	// (0x00034753) toolbar_button_pane_g3

0x9c18,	// (0x0003475b) toolbar_button_pane_g4

0x9c20,	// (0x00034763) toolbar_button_pane_g5

0x9c28,	// (0x0003476b) toolbar_button_pane_g6

0x9c30,	// (0x00034773) toolbar_button_pane_g7

0x9c38,	// (0x0003477b) toolbar_button_pane_g8

0x9c40,	// (0x00034783) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x0003a34d) toolbar_button_pane_g

0x5ea8,	// (0x000309eb) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5ea8,	// (0x000309eb) list_single_2graphic_pane_g1_cp3

0x5eb4,	// (0x000309f7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5eb4,	// (0x000309f7) list_single_2graphic_pane_g2_cp3

0x5ec5,	// (0x00030a08) list_single_2graphic_pane_g3_cp3

0x5ecd,	// (0x00030a10) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5ecd,	// (0x00030a10) list_single_2graphic_pane_g4_cp3

0x5ed9,	// (0x00030a1c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5ed9,	// (0x00030a1c) list_single_2graphic_pane_t1_cp3

0x5f36,	// (0x00030a79) list_single_midp_graphic_pane_g2_ParamLimits

0x5f36,	// (0x00030a79) list_single_midp_graphic_pane_g2

0x904e,	// (0x00033b91) aid_zoom_text_primary

0x5e26,	// (0x00030969) aid_zoom_text_secondary

0x8fa5,	// (0x00033ae8) status_small_pane_g7_ParamLimits

0x8fa5,	// (0x00033ae8) status_small_pane_g7

0x8fc8,	// (0x00033b0b) status_small_pane_t1_ParamLimits

0x71fb,	// (0x00031d3e) title_pane_g2

0x0003,

0xf592,	// (0x0003a0d5) title_pane_g

0x7cdd,	// (0x00032820) aid_size_cell_colour_1_pane_ParamLimits

0x7cdd,	// (0x00032820) aid_size_cell_colour_1_pane

0x7cf1,	// (0x00032834) aid_size_cell_colour_2_pane_ParamLimits

0x7cf1,	// (0x00032834) aid_size_cell_colour_2_pane

0x7d05,	// (0x00032848) aid_size_cell_colour_3_pane_ParamLimits

0x7d05,	// (0x00032848) aid_size_cell_colour_3_pane

0x7d19,	// (0x0003285c) aid_size_cell_colour_4_pane_ParamLimits

0x7d19,	// (0x0003285c) aid_size_cell_colour_4_pane

0x57ed,	// (0x00030330) title_pane_stacon_g1_ParamLimits

0x57ed,	// (0x00030330) title_pane_stacon_g1

0xa29b,	// (0x00034dde) popup_note_wait_window_g3_ParamLimits

0xa29b,	// (0x00034dde) popup_note_wait_window_g3

0xa312,	// (0x00034e55) popup_note_wait_window_t5_ParamLimits

0xa312,	// (0x00034e55) popup_note_wait_window_t5

0x71e4,	// (0x00031d27) main_feb_china_hwr_fs_writing_pane

0x9144,	// (0x00033c87) popup_feb_china_hwr_fs_window_ParamLimits

0x9144,	// (0x00033c87) popup_feb_china_hwr_fs_window

0x5f58,	// (0x00030a9b) aid_size_cell_hwr_fs_ParamLimits

0x5f58,	// (0x00030a9b) aid_size_cell_hwr_fs

0x9cf2,	// (0x00034835) bg_popup_sub_pane_cp3_ParamLimits

0x9cf2,	// (0x00034835) bg_popup_sub_pane_cp3

0x5f6d,	// (0x00030ab0) grid_hwr_fs_pane_ParamLimits

0x5f6d,	// (0x00030ab0) grid_hwr_fs_pane

0x5f85,	// (0x00030ac8) linegrid_hwr_fs_pane_ParamLimits

0x5f85,	// (0x00030ac8) linegrid_hwr_fs_pane

0x5f95,	// (0x00030ad8) cell_hwr_fs_pane_ParamLimits

0x5f95,	// (0x00030ad8) cell_hwr_fs_pane

0x9cfe,	// (0x00034841) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cfe,	// (0x00034841) linegrid_hwr_fs_pane_g1

0x9d0a,	// (0x0003484d) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0a,	// (0x0003484d) linegrid_hwr_fs_pane_g2

0x9d1c,	// (0x0003485f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1c,	// (0x0003485f) linegrid_hwr_fs_pane_g3

0x5fb9,	// (0x00030afc) linegrid_hwr_fs_pane_g4_ParamLimits

0x5fb9,	// (0x00030afc) linegrid_hwr_fs_pane_g4

0x5fd7,	// (0x00030b1a) linegrid_hwr_fs_pane_g5_ParamLimits

0x5fd7,	// (0x00030b1a) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0003a378) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0003a378) linegrid_hwr_fs_pane_g

0x9d28,	// (0x0003486b) cell_hwr_fs_pane_g1_ParamLimits

0x9d28,	// (0x0003486b) cell_hwr_fs_pane_g1

0x9a75,	// (0x000345b8) cell_hwr_fs_pane_g2_ParamLimits

0x9a75,	// (0x000345b8) cell_hwr_fs_pane_g2

0x9d3e,	// (0x00034881) cell_hwr_fs_pane_g3_ParamLimits

0x9d3e,	// (0x00034881) cell_hwr_fs_pane_g3

0x9d4b,	// (0x0003488e) cell_hwr_fs_pane_g4_ParamLimits

0x9d4b,	// (0x0003488e) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0003a383) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0003a383) cell_hwr_fs_pane_g

0x5fed,	// (0x00030b30) cell_hwr_fs_pane_t1

0x71e4,	// (0x00031d27) grid_highlight_pane_cp6

0x71e4,	// (0x00031d27) main_idle_act2_pane

0x823d,	// (0x00032d80) aid_inside_area_popup_secondary

0xa94b,	// (0x0003548e) aid_inside_area_window_primary_ParamLimits

0xa94b,	// (0x0003548e) aid_inside_area_window_primary

0xb54d,	// (0x00036090) ai2_news_ticker_pane

0xb555,	// (0x00036098) aid_size_cell_ai1_link_ParamLimits

0xb555,	// (0x00036098) aid_size_cell_ai1_link

0xb56f,	// (0x000360b2) popup_ai2_data_window_ParamLimits

0xb56f,	// (0x000360b2) popup_ai2_data_window

0xb58d,	// (0x000360d0) popup_ai2_link_window_ParamLimits

0xb58d,	// (0x000360d0) popup_ai2_link_window

0x9cf2,	// (0x00034835) bg_popup_sub_pane_cp4_ParamLimits

0x9cf2,	// (0x00034835) bg_popup_sub_pane_cp4

0xb5a3,	// (0x000360e6) grid_ai2_link_pane_ParamLimits

0xb5a3,	// (0x000360e6) grid_ai2_link_pane

0xb5ba,	// (0x000360fd) popup_ai2_link_window_g1_ParamLimits

0xb5ba,	// (0x000360fd) popup_ai2_link_window_g1

0xb5c6,	// (0x00036109) popup_ai2_link_window_g2_ParamLimits

0xb5c6,	// (0x00036109) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0003a54f) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0003a54f) popup_ai2_link_window_g

0xb5d7,	// (0x0003611a) ai2_mp_button_pane

0xb5df,	// (0x00036122) ai2_mp_volume_pane

0x9ebb,	// (0x000349fe) bg_popup_sub_pane_cp5_ParamLimits

0x9ebb,	// (0x000349fe) bg_popup_sub_pane_cp5

0xb5e7,	// (0x0003612a) heading_ai2_gene_pane_ParamLimits

0xb5e7,	// (0x0003612a) heading_ai2_gene_pane

0xb5f3,	// (0x00036136) list_ai2_gene_pane_ParamLimits

0xb5f3,	// (0x00036136) list_ai2_gene_pane

0xb63b,	// (0x0003617e) cell_ai2_link_pane_ParamLimits

0xb63b,	// (0x0003617e) cell_ai2_link_pane

0xb651,	// (0x00036194) cell_ai2_link_pane_g1

0x71e4,	// (0x00031d27) grid_highlight_pane_cp7

0x63f3,	// (0x00030f36) ai2_mp_volume_pane_g1

0xb724,	// (0x00036267) ai2_mp_volume_pane_g2

0xb699,	// (0x000361dc) list_ai2_gene_pane_t1

0xb72c,	// (0x0003626f) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0003a568) ai2_mp_volume_pane_g

0x63fb,	// (0x00030f3e) volume_small_pane_cp3

0xb734,	// (0x00036277) aid_size_cell_ai2_button

0xb73c,	// (0x0003627f) grid_ai2_button_pane

0xb745,	// (0x00036288) cell_ai2_button_pane_ParamLimits

0xb745,	// (0x00036288) cell_ai2_button_pane

0x71da,	// (0x00031d1d) cell_ai2_button_pane_g1

0x71e4,	// (0x00031d27) grid_highlight_pane_cp8

0xb6e4,	// (0x00036227) ai2_gene_pane_t1_ParamLimits

0xb6e4,	// (0x00036227) ai2_gene_pane_t1

0x903c,	// (0x00033b7f) aid_height_parent_landscape

0xaff7,	// (0x00035b3a) aid_height_set_list

0xb008,	// (0x00035b4b) aid_size_parent

0xb36e,	// (0x00035eb1) aid_size_cell_graphic_pane_ParamLimits

0xb603,	// (0x00036146) popup_ai2_data_window_g1_ParamLimits

0xb603,	// (0x00036146) popup_ai2_data_window_g1

0xb60f,	// (0x00036152) ai2_news_ticker_pane_g1

0xb617,	// (0x0003615a) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0003a554) ai2_news_ticker_pane_g

0xb61f,	// (0x00036162) ai2_news_ticker_pane_t1

0xb62d,	// (0x00036170) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0003a559) ai2_news_ticker_pane_t

0xb65a,	// (0x0003619d) heading_ai2_gene_pane_g1

0xb662,	// (0x000361a5) heading_ai2_gene_pane_t1_ParamLimits

0xb662,	// (0x000361a5) heading_ai2_gene_pane_t1

0xb677,	// (0x000361ba) list_highlight_pane_cp6

0xb67f,	// (0x000361c2) ai2_gene_pane_ParamLimits

0xb67f,	// (0x000361c2) ai2_gene_pane

0xb6a7,	// (0x000361ea) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0003a55e) list_ai2_gene_pane_t

0xb6b5,	// (0x000361f8) list_highlight_pane_cp8_ParamLimits

0xb6b5,	// (0x000361f8) list_highlight_pane_cp8

0xb6c6,	// (0x00036209) ai2_gene_pane_g1_ParamLimits

0xb6c6,	// (0x00036209) ai2_gene_pane_g1

0xb6d8,	// (0x0003621b) ai2_gene_pane_g2_ParamLimits

0xb6d8,	// (0x0003621b) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0003a563) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0003a563) ai2_gene_pane_g

0x806a,	// (0x00032bad) scroll_pane_cp12

0x5de5,	// (0x00030928) control_pane_t3_ParamLimits

0x5de5,	// (0x00030928) control_pane_t3

0x8fb9,	// (0x00033afc) status_small_pane_g8_ParamLimits

0x8fb9,	// (0x00033afc) status_small_pane_g8

0x9242,	// (0x00033d85) popup_find_window_ParamLimits

0x9479,	// (0x00033fbc) popup_note_image_window_ParamLimits

0x5e66,	// (0x000309a9) list_double2_graphic_pane_vc_g1_ParamLimits

0x5e66,	// (0x000309a9) list_double2_graphic_pane_vc_g1

0x5e72,	// (0x000309b5) list_double2_graphic_pane_vc_g2_ParamLimits

0x5e72,	// (0x000309b5) list_double2_graphic_pane_vc_g2

0x5e7e,	// (0x000309c1) list_double2_graphic_pane_vc_g3_ParamLimits

0x5e7e,	// (0x000309c1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0003a341) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0003a341) list_double2_graphic_pane_vc_g

0x5e8a,	// (0x000309cd) list_double2_graphic_pane_vc_t1_ParamLimits

0x5e8a,	// (0x000309cd) list_double2_graphic_pane_vc_t1

0x5ef4,	// (0x00030a37) list_single_heading_pane_vc_g1_ParamLimits

0x5ef4,	// (0x00030a37) list_single_heading_pane_vc_g1

0x5f00,	// (0x00030a43) list_single_heading_pane_vc_g2_ParamLimits

0x5f00,	// (0x00030a43) list_single_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a362) list_single_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a362) list_single_heading_pane_vc_g

0x5f0c,	// (0x00030a4f) list_single_heading_pane_vc_t1_ParamLimits

0x5f0c,	// (0x00030a4f) list_single_heading_pane_vc_t1

0x5f22,	// (0x00030a65) list_single_heading_pane_vc_t2_ParamLimits

0x5f22,	// (0x00030a65) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0003a367) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0003a367) list_single_heading_pane_vc_t

0x9c48,	// (0x0003478b) list_setting_number_pane_vc_g1_ParamLimits

0x9c48,	// (0x0003478b) list_setting_number_pane_vc_g1

0x9c54,	// (0x00034797) list_setting_number_pane_vc_g2_ParamLimits

0x9c54,	// (0x00034797) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0003a36c) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0003a36c) list_setting_number_pane_vc_g

0x9c60,	// (0x000347a3) list_setting_number_pane_vc_t1_ParamLimits

0x9c60,	// (0x000347a3) list_setting_number_pane_vc_t1

0x9c74,	// (0x000347b7) list_setting_number_pane_vc_t2_ParamLimits

0x9c74,	// (0x000347b7) list_setting_number_pane_vc_t2

0x9c90,	// (0x000347d3) list_setting_number_pane_vc_t3_ParamLimits

0x9c90,	// (0x000347d3) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0003a371) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0003a371) list_setting_number_pane_vc_t

0x9cb8,	// (0x000347fb) set_value_pane_vc_ParamLimits

0x9cb8,	// (0x000347fb) set_value_pane_vc

0x62f6,	// (0x00030e39) list_double2_graphic_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double2_graphic_pane_vc

0xb1ec,	// (0x00035d2f) list_double2_large_graphic_pane_vc_ParamLimits

0xb1ec,	// (0x00035d2f) list_double2_large_graphic_pane_vc

0x62f6,	// (0x00030e39) list_double2_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double2_pane_vc

0x62f6,	// (0x00030e39) list_double_graphic_heading_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double_graphic_heading_pane_vc

0x62f6,	// (0x00030e39) list_double_graphic_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double_graphic_pane_vc

0x62f6,	// (0x00030e39) list_double_heading_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double_heading_pane_vc

0xb1ec,	// (0x00035d2f) list_double_large_graphic_pane_vc_ParamLimits

0xb1ec,	// (0x00035d2f) list_double_large_graphic_pane_vc

0x62f6,	// (0x00030e39) list_double_number_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double_number_pane_vc

0x62f6,	// (0x00030e39) list_double_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double_pane_vc

0x62f6,	// (0x00030e39) list_double_time_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_double_time_pane_vc

0x62f6,	// (0x00030e39) list_setting_number_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_setting_number_pane_vc

0x62f6,	// (0x00030e39) list_setting_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_setting_pane_vc

0x62f6,	// (0x00030e39) list_single_graphic_heading_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_single_graphic_heading_pane_vc

0x62f6,	// (0x00030e39) list_single_heading_pane_vc_ParamLimits

0x62f6,	// (0x00030e39) list_single_heading_pane_vc

0xb214,	// (0x00035d57) list_single_number_heading_pane_vc_ParamLimits

0xb214,	// (0x00035d57) list_single_number_heading_pane_vc

0x5e66,	// (0x000309a9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5e66,	// (0x000309a9) list_double_graphic_heading_pane_vc_g1

0x5ef4,	// (0x00030a37) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5ef4,	// (0x00030a37) list_double_graphic_heading_pane_vc_g2

0x5f00,	// (0x00030a43) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5f00,	// (0x00030a43) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0003a56f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0003a56f) list_double_graphic_heading_pane_vc_g

0x6404,	// (0x00030f47) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6404,	// (0x00030f47) list_double_graphic_heading_pane_vc_t1

0x5f0c,	// (0x00030a4f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5f0c,	// (0x00030a4f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0003a576) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0003a576) list_double_graphic_heading_pane_vc_t

0x9c48,	// (0x0003478b) list_setting_pane_vc_g1_ParamLimits

0x9c48,	// (0x0003478b) list_setting_pane_vc_g1

0x9c54,	// (0x00034797) list_setting_pane_vc_g2_ParamLimits

0x9c54,	// (0x00034797) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0003a36c) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0003a36c) list_setting_pane_vc_g

0xb981,	// (0x000364c4) list_setting_pane_vc_t1_ParamLimits

0xb981,	// (0x000364c4) list_setting_pane_vc_t1

0xb995,	// (0x000364d8) list_setting_pane_vc_t2_ParamLimits

0xb995,	// (0x000364d8) list_setting_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a5a4) list_setting_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a5a4) list_setting_pane_vc_t

0x9cb8,	// (0x000347fb) set_value_pane_cp_vc_ParamLimits

0x9cb8,	// (0x000347fb) set_value_pane_cp_vc

0x5ef4,	// (0x00030a37) list_single_number_heading_pane_vc_g1_ParamLimits

0x5ef4,	// (0x00030a37) list_single_number_heading_pane_vc_g1

0x5f00,	// (0x00030a43) list_single_number_heading_pane_vc_g2_ParamLimits

0x5f00,	// (0x00030a43) list_single_number_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a362) list_single_number_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a362) list_single_number_heading_pane_vc_g

0x5f0c,	// (0x00030a4f) list_single_number_heading_pane_vc_t1_ParamLimits

0x5f0c,	// (0x00030a4f) list_single_number_heading_pane_vc_t1

0x6418,	// (0x00030f5b) list_single_number_heading_pane_vc_t2_ParamLimits

0x6418,	// (0x00030f5b) list_single_number_heading_pane_vc_t2

0x642c,	// (0x00030f6f) list_single_number_heading_pane_vc_t3_ParamLimits

0x642c,	// (0x00030f6f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa66,	// (0x0003a5a9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0003a5a9) list_single_number_heading_pane_vc_t

0x5e66,	// (0x000309a9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5e66,	// (0x000309a9) list_single_graphic_heading_pane_vc_g1

0x5ef4,	// (0x00030a37) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5ef4,	// (0x00030a37) list_single_graphic_heading_pane_vc_g4

0x5f00,	// (0x00030a43) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5f00,	// (0x00030a43) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2c,	// (0x0003a56f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0003a56f) list_single_graphic_heading_pane_vc_g

0x5f0c,	// (0x00030a4f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5f0c,	// (0x00030a4f) list_single_graphic_heading_pane_vc_t1

0x643e,	// (0x00030f81) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x643e,	// (0x00030f81) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003a5b0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003a5b0) list_single_graphic_heading_pane_vc_t

0x5ef4,	// (0x00030a37) list_double2_pane_vc_g1_ParamLimits

0x5ef4,	// (0x00030a37) list_double2_pane_vc_g1

0x5f00,	// (0x00030a43) list_double2_pane_vc_g2_ParamLimits

0x5f00,	// (0x00030a43) list_double2_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a362) list_double2_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a362) list_double2_pane_vc_g

0x6452,	// (0x00030f95) list_double2_pane_vc_t1_ParamLimits

0x6452,	// (0x00030f95) list_double2_pane_vc_t1

0x6468,	// (0x00030fab) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6468,	// (0x00030fab) list_double2_large_graphic_pane_vc_g1

0x6474,	// (0x00030fb7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6474,	// (0x00030fb7) list_double2_large_graphic_pane_vc_g2

0x6480,	// (0x00030fc3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6480,	// (0x00030fc3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa72,	// (0x0003a5b5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0003a5b5) list_double2_large_graphic_pane_vc_g

0x648c,	// (0x00030fcf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x648c,	// (0x00030fcf) list_double2_large_graphic_pane_vc_t1

0x7748,	// (0x0003228b) list_double_time_pane_vc_g1_ParamLimits

0x7748,	// (0x0003228b) list_double_time_pane_vc_g1

0x7754,	// (0x00032297) list_double_time_pane_vc_g2_ParamLimits

0x7754,	// (0x00032297) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0003a5bc) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0003a5bc) list_double_time_pane_vc_g

0x7760,	// (0x000322a3) list_double_time_pane_vc_t1_ParamLimits

0x7760,	// (0x000322a3) list_double_time_pane_vc_t1

0x7779,	// (0x000322bc) list_double_time_pane_vc_t2_ParamLimits

0x7779,	// (0x000322bc) list_double_time_pane_vc_t2

0x77b9,	// (0x000322fc) list_double_time_pane_vc_t3_ParamLimits

0x77b9,	// (0x000322fc) list_double_time_pane_vc_t3

0x77d1,	// (0x00032314) list_double_time_pane_vc_t4_ParamLimits

0x77d1,	// (0x00032314) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x0003a5c1) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x0003a5c1) list_double_time_pane_vc_t

0x5ef4,	// (0x00030a37) list_double_pane_vc_g1_ParamLimits

0x5ef4,	// (0x00030a37) list_double_pane_vc_g1

0x5f00,	// (0x00030a43) list_double_pane_vc_g2_ParamLimits

0x5f00,	// (0x00030a43) list_double_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a362) list_double_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a362) list_double_pane_vc_g

0x77e5,	// (0x00032328) list_double_pane_vc_t1_ParamLimits

0x77e5,	// (0x00032328) list_double_pane_vc_t1

0x77f7,	// (0x0003233a) list_double_pane_vc_t2_ParamLimits

0x77f7,	// (0x0003233a) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0003a5ca) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0003a5ca) list_double_pane_vc_t

0x5ef4,	// (0x00030a37) list_double_number_pane_vc_g1_ParamLimits

0x5ef4,	// (0x00030a37) list_double_number_pane_vc_g1

0x5f00,	// (0x00030a43) list_double_number_pane_vc_g2_ParamLimits

0x5f00,	// (0x00030a43) list_double_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a362) list_double_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a362) list_double_number_pane_vc_g

0x780f,	// (0x00032352) list_double_number_pane_vc_t1_ParamLimits

0x780f,	// (0x00032352) list_double_number_pane_vc_t1

0x7823,	// (0x00032366) list_double_number_pane_vc_t2_ParamLimits

0x7823,	// (0x00032366) list_double_number_pane_vc_t2

0x77f7,	// (0x0003233a) list_double_number_pane_vc_t3_ParamLimits

0x77f7,	// (0x0003233a) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x0003a5cf) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x0003a5cf) list_double_number_pane_vc_t

0x7835,	// (0x00032378) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7835,	// (0x00032378) list_double_large_graphic_pane_vc_g1

0x7841,	// (0x00032384) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7841,	// (0x00032384) list_double_large_graphic_pane_vc_g2

0x6480,	// (0x00030fc3) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6480,	// (0x00030fc3) list_double_large_graphic_pane_vc_g3

0x7850,	// (0x00032393) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7850,	// (0x00032393) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0003a5d6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0003a5d6) list_double_large_graphic_pane_vc_g

0x785c,	// (0x0003239f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x785c,	// (0x0003239f) list_double_large_graphic_pane_vc_t1

0x786e,	// (0x000323b1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x786e,	// (0x000323b1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x0003a5df) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x0003a5df) list_double_large_graphic_pane_vc_t

0x5ef4,	// (0x00030a37) list_double_heading_pane_vc_g1_ParamLimits

0x5ef4,	// (0x00030a37) list_double_heading_pane_vc_g1

0x5f00,	// (0x00030a43) list_double_heading_pane_vc_g2_ParamLimits

0x5f00,	// (0x00030a43) list_double_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0003a362) list_double_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0003a362) list_double_heading_pane_vc_g

0x7887,	// (0x000323ca) list_double_heading_pane_vc_t1_ParamLimits

0x7887,	// (0x000323ca) list_double_heading_pane_vc_t1

0x5f0c,	// (0x00030a4f) list_double_heading_pane_vc_t2_ParamLimits

0x5f0c,	// (0x00030a4f) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0003a5e4) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0003a5e4) list_double_heading_pane_vc_t

0x789b,	// (0x000323de) list_double_graphic_pane_vc_g1_ParamLimits

0x789b,	// (0x000323de) list_double_graphic_pane_vc_g1

0x78ab,	// (0x000323ee) list_double_graphic_pane_vc_g2_ParamLimits

0x78ab,	// (0x000323ee) list_double_graphic_pane_vc_g2

0x78ba,	// (0x000323fd) list_double_graphic_pane_vc_g3_ParamLimits

0x78ba,	// (0x000323fd) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0003a5e9) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003a5e9) list_double_graphic_pane_vc_g

0x78c6,	// (0x00032409) list_double_graphic_pane_vc_t1_ParamLimits

0x78c6,	// (0x00032409) list_double_graphic_pane_vc_t1

0x77f7,	// (0x0003233a) list_double_graphic_pane_vc_t2_ParamLimits

0x77f7,	// (0x0003233a) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0003a5f0) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0003a5f0) list_double_graphic_pane_vc_t

0x4c11,	// (0x0002f754) aid_size_cell_fastswap

0x4c19,	// (0x0002f75c) aid_size_cell_touch_ParamLimits

0x4c19,	// (0x0002f75c) aid_size_cell_touch

0x4e84,	// (0x0002f9c7) popup_fast_swap_wide_window_ParamLimits

0x4e84,	// (0x0002f9c7) popup_fast_swap_wide_window

0x4f9a,	// (0x0002fadd) touch_pane_ParamLimits

0x4f9a,	// (0x0002fadd) touch_pane

0x80c0,	// (0x00032c03) button_value_adjust_pane_cp2

0x80c0,	// (0x00032c03) button_value_adjust_pane_cp4

0x5579,	// (0x000300bc) form_field_data_pane_cp2

0x559e,	// (0x000300e1) form_field_data_wide_pane_cp2

0x8559,	// (0x0003309c) bg_scroll_pane_ParamLimits

0x5952,	// (0x00030495) scroll_handle_pane_ParamLimits

0x5966,	// (0x000304a9) scroll_sc2_down_pane_ParamLimits

0x5966,	// (0x000304a9) scroll_sc2_down_pane

0x858a,	// (0x000330cd) scroll_sc2_up_pane_ParamLimits

0x858a,	// (0x000330cd) scroll_sc2_up_pane

0xbde0,	// (0x00036923) grid_wheel_folder_pane_g1_ParamLimits

0xbde0,	// (0x00036923) grid_wheel_folder_pane_g1

0x5bbc,	// (0x000306ff) clock_nsta_pane_cp2_ParamLimits

0x5bbc,	// (0x000306ff) clock_nsta_pane_cp2

0x8d3a,	// (0x0003387d) listscroll_midp_pane_ParamLimits

0x8d46,	// (0x00033889) midp_canvas_pane

0x9034,	// (0x00033b77) nsta_clock_indic_pane

0x908a,	// (0x00033bcd) listscroll_form_pane_vc

0x90a6,	// (0x00033be9) listscroll_set_pane_vc_ParamLimits

0x90a6,	// (0x00033be9) listscroll_set_pane_vc

0x97ca,	// (0x0003430d) clock_nsta_pane

0x9847,	// (0x0003438a) indicator_nsta_pane

0x9b3e,	// (0x00034681) bg_popup_sub_pane_cp2_ParamLimits

0x9b52,	// (0x00034695) find_pane_cp2_ParamLimits

0x9b52,	// (0x00034695) find_pane_cp2

0x9b68,	// (0x000346ab) grid_toobar_pane_ParamLimits

0x9cc6,	// (0x00034809) list_form_gen_pane_vc_ParamLimits

0x9cc6,	// (0x00034809) list_form_gen_pane_vc

0x9cdc,	// (0x0003481f) scroll_pane_cp8_vc_ParamLimits

0x9cdc,	// (0x0003481f) scroll_pane_cp8_vc

0x9d58,	// (0x0003489b) data_form_wide_pane_vc_ParamLimits

0x9d58,	// (0x0003489b) data_form_wide_pane_vc

0x9d64,	// (0x000348a7) form_field_data_wide_pane_vc_g1

0x9d6c,	// (0x000348af) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6c,	// (0x000348af) form_field_data_wide_pane_vc_t1

0x80d4,	// (0x00032c17) input_focus_pane_cp6_vc_ParamLimits

0x80d4,	// (0x00032c17) input_focus_pane_cp6_vc

0xa046,	// (0x00034b89) list_midp_pane_ParamLimits

0xa052,	// (0x00034b95) scroll_pane_cp16_ParamLimits

0xa052,	// (0x00034b95) scroll_pane_cp16

0xa092,	// (0x00034bd5) button_value_adjust_pane_ParamLimits

0xa092,	// (0x00034bd5) button_value_adjust_pane

0xb01a,	// (0x00035b5d) button_value_adjust_pane_cp6_ParamLimits

0xb01a,	// (0x00035b5d) button_value_adjust_pane_cp6

0xb174,	// (0x00035cb7) settings_code_pane_cp_ParamLimits

0xb174,	// (0x00035cb7) settings_code_pane_cp

0x71da,	// (0x00031d1d) cell_touch_pane_g1

0x71da,	// (0x00031d1d) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0003a28a) cell_touch_pane_g

0xb757,	// (0x0003629a) cell_touch_pane_cp_ParamLimits

0xb757,	// (0x0003629a) cell_touch_pane_cp

0xb767,	// (0x000362aa) cell_touch_pane_ParamLimits

0xb767,	// (0x000362aa) cell_touch_pane

0x71da,	// (0x00031d1d) scroll_sc2_down_pane_g1

0x71da,	// (0x00031d1d) scroll_sc2_up_pane_g1

0x71e4,	// (0x00031d27) bg_set_opt_pane_cp4_vc

0xb778,	// (0x000362bb) list_set_graphic_pane_vc_g1_ParamLimits

0xb778,	// (0x000362bb) list_set_graphic_pane_vc_g1

0xb784,	// (0x000362c7) list_set_graphic_pane_vc_g2_ParamLimits

0xb784,	// (0x000362c7) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0003a57b) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0003a57b) list_set_graphic_pane_vc_g

0xb790,	// (0x000362d3) text_primary_small_cp13_vc_ParamLimits

0xb790,	// (0x000362d3) text_primary_small_cp13_vc

0xb7a8,	// (0x000362eb) list_set_graphic_pane_vc_ParamLimits

0xb7a8,	// (0x000362eb) list_set_graphic_pane_vc

0x71e4,	// (0x00031d27) input_focus_pane_cp2_vc

0x71da,	// (0x00031d1d) setting_code_pane_vc_g1

0xb7bc,	// (0x000362ff) setting_code_pane_vc_t1

0xb7ca,	// (0x0003630d) set_text_pane_vc_t1_ParamLimits

0xb7ca,	// (0x0003630d) set_text_pane_vc_t1

0x71e4,	// (0x00031d27) input_focus_pane_cp1_vc

0xb7e8,	// (0x0003632b) list_set_text_pane_vc

0x71da,	// (0x00031d1d) setting_text_pane_vc_g1

0x71e4,	// (0x00031d27) bg_set_opt_pane_cp2_vc

0xb7f2,	// (0x00036335) setting_slider_graphic_pane_vc_g1

0xb7fa,	// (0x0003633d) setting_slider_graphic_pane_vc_t1

0xb808,	// (0x0003634b) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0003a580) setting_slider_graphic_pane_vc_t

0xb816,	// (0x00036359) slider_set_pane_cp_vc

0xb81e,	// (0x00036361) slider_set_pane_vc_g1

0xb827,	// (0x0003636a) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0003a585) slider_set_pane_vc_g

0x813b,	// (0x00032c7e) set_opt_bg_pane_g1_copy1

0x8143,	// (0x00032c86) set_opt_bg_pane_g2_copy1

0xb853,	// (0x00036396) set_opt_bg_pane_g3_copy1

0x8153,	// (0x00032c96) set_opt_bg_pane_g4_copy1

0x815b,	// (0x00032c9e) set_opt_bg_pane_g5_copy1

0x8163,	// (0x00032ca6) set_opt_bg_pane_g6_copy1

0xb85d,	// (0x000363a0) set_opt_bg_pane_g7_copy1

0xb867,	// (0x000363aa) set_opt_bg_pane_g8_copy1

0xb871,	// (0x000363b4) set_opt_bg_pane_g9_copy1

0x71e4,	// (0x00031d27) bg_set_opt_pane_cp_vc

0xb87b,	// (0x000363be) setting_slider_pane_vc_t1

0xb7fa,	// (0x0003633d) setting_slider_pane_vc_t2

0xb808,	// (0x0003634b) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0003a594) setting_slider_pane_vc_t

0xb816,	// (0x00036359) slider_set_pane_vc

0x602d,	// (0x00030b70) volume_set_pane_vc_g1

0x6036,	// (0x00030b79) volume_set_pane_vc_g2

0x603f,	// (0x00030b82) volume_set_pane_vc_g3

0x6048,	// (0x00030b8b) volume_set_pane_vc_g4

0x6051,	// (0x00030b94) volume_set_pane_vc_g5

0x605a,	// (0x00030b9d) volume_set_pane_vc_g6

0x6063,	// (0x00030ba6) volume_set_pane_vc_g7

0x606c,	// (0x00030baf) volume_set_pane_vc_g8

0x6075,	// (0x00030bb8) volume_set_pane_vc_g9

0x607e,	// (0x00030bc1) volume_set_pane_vc_g10

0x0009,

0xf8ef,	// (0x0003a432) volume_set_pane_vc_g

0xb88a,	// (0x000363cd) volume_set_pane_vc

0xb892,	// (0x000363d5) button_value_adjust_pane_cp1_vc

0xb89c,	// (0x000363df) list_highlight_pane_cp2_vc

0xb8a5,	// (0x000363e8) list_set_pane_vc_ParamLimits

0xb8a5,	// (0x000363e8) list_set_pane_vc

0xb90f,	// (0x00036452) main_pane_set_vc_t1_ParamLimits

0xb90f,	// (0x00036452) main_pane_set_vc_t1

0xb924,	// (0x00036467) main_pane_set_vc_t2_ParamLimits

0xb924,	// (0x00036467) main_pane_set_vc_t2

0xb936,	// (0x00036479) main_pane_set_vc_t3_ParamLimits

0xb936,	// (0x00036479) main_pane_set_vc_t3

0xb94a,	// (0x0003648d) main_pane_set_vc_t4_ParamLimits

0xb94a,	// (0x0003648d) main_pane_set_vc_t4

0x0003,

0xfa58,	// (0x0003a59b) main_pane_set_vc_t_ParamLimits

0xfa58,	// (0x0003a59b) main_pane_set_vc_t

0xb95e,	// (0x000364a1) setting_code_pane_vc_ParamLimits

0xb95e,	// (0x000364a1) setting_code_pane_vc

0xb96f,	// (0x000364b2) setting_slider_graphic_pane_vc

0xb96f,	// (0x000364b2) setting_slider_pane_vc

0xb96f,	// (0x000364b2) setting_text_pane_vc

0xb96f,	// (0x000364b2) setting_volume_pane_vc

0xb979,	// (0x000364bc) scroll_pane_cp121_vc

0x80ae,	// (0x00032bf1) set_content_pane_vc

0xb9b7,	// (0x000364fa) button_value_adjust_pane_g1

0xb9c0,	// (0x00036503) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0003a5f5) button_value_adjust_pane_g

0xb9c9,	// (0x0003650c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9c9,	// (0x0003650c) form_field_slider_wide_pane_vc_t1

0xb9dd,	// (0x00036520) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9dd,	// (0x00036520) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0003a5fa) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0003a5fa) form_field_slider_wide_pane_vc_t

0x7540,	// (0x00032083) input_focus_pane_cp10_vc_ParamLimits

0x7540,	// (0x00032083) input_focus_pane_cp10_vc

0xb9ef,	// (0x00036532) slider_cont_pane_cp1_vc_ParamLimits

0xb9ef,	// (0x00036532) slider_cont_pane_cp1_vc

0xb81e,	// (0x00036361) slider_form_pane_g1_cp2

0xb827,	// (0x0003636a) slider_form_pane_g2_cp2

0xba08,	// (0x0003654b) form_field_slider_pane_vc_t3

0xba16,	// (0x00036559) form_field_slider_pane_vc_t4

0xba24,	// (0x00036567) slider_form_pane_vc_ParamLimits

0xba24,	// (0x00036567) slider_form_pane_vc

0xba31,	// (0x00036574) form_field_slider_pane_vc_t1_ParamLimits

0xba31,	// (0x00036574) form_field_slider_pane_vc_t1

0xb9dd,	// (0x00036520) form_field_slider_pane_vc_t2_ParamLimits

0xb9dd,	// (0x00036520) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0003a60a) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0003a60a) form_field_slider_pane_vc_t

0x7540,	// (0x00032083) input_focus_pane_cp9_vc_ParamLimits

0x7540,	// (0x00032083) input_focus_pane_cp9_vc

0xba4d,	// (0x00036590) slider_cont_pane_vc_ParamLimits

0xba4d,	// (0x00036590) slider_cont_pane_vc

0xba5f,	// (0x000365a2) list_form_graphic_pane_cp_vc_ParamLimits

0xba5f,	// (0x000365a2) list_form_graphic_pane_cp_vc

0x9d64,	// (0x000348a7) form_field_popup_wide_pane_vc_g1

0xba74,	// (0x000365b7) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba74,	// (0x000365b7) form_field_popup_wide_pane_vc_t1

0x80d4,	// (0x00032c17) input_focus_pane_cp8_vc_ParamLimits

0x80d4,	// (0x00032c17) input_focus_pane_cp8_vc

0xba8b,	// (0x000365ce) list_form_wide_pane_vc_ParamLimits

0xba8b,	// (0x000365ce) list_form_wide_pane_vc

0xba97,	// (0x000365da) list_form_graphic_pane_vc_g1

0xba9f,	// (0x000365e2) list_form_graphic_pane_vc_t1_ParamLimits

0xba9f,	// (0x000365e2) list_form_graphic_pane_vc_t1

0x72c4,	// (0x00031e07) list_highlight_pane_cp5_vc_ParamLimits

0x72c4,	// (0x00031e07) list_highlight_pane_cp5_vc

0xbabb,	// (0x000365fe) list_form_graphic_pane_vc_ParamLimits

0xbabb,	// (0x000365fe) list_form_graphic_pane_vc

0x9d64,	// (0x000348a7) form_field_popup_pane_vc_g1

0xbad1,	// (0x00036614) form_field_popup_pane_vc_t1_ParamLimits

0xbad1,	// (0x00036614) form_field_popup_pane_vc_t1

0x80d4,	// (0x00032c17) input_focus_pane_cp7_vc_ParamLimits

0x80d4,	// (0x00032c17) input_focus_pane_cp7_vc

0xbae8,	// (0x0003662b) list_form_pane_vc_ParamLimits

0xbae8,	// (0x0003662b) list_form_pane_vc

0xbaf4,	// (0x00036637) data_form_pane_vc_t1_ParamLimits

0xbaf4,	// (0x00036637) data_form_pane_vc_t1

0x813b,	// (0x00032c7e) input_focus_pane_vc_g1

0x8143,	// (0x00032c86) input_focus_pane_vc_g2

0x814b,	// (0x00032c8e) input_focus_pane_vc_g3

0x8153,	// (0x00032c96) input_focus_pane_vc_g4

0x815b,	// (0x00032c9e) input_focus_pane_vc_g5

0x8163,	// (0x00032ca6) input_focus_pane_vc_g6

0x816b,	// (0x00032cae) input_focus_pane_vc_g7

0x8173,	// (0x00032cb6) input_focus_pane_vc_g8

0x817b,	// (0x00032cbe) input_focus_pane_vc_g9

0x71da,	// (0x00031d1d) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0003a213) input_focus_pane_vc_g

0x9d58,	// (0x0003489b) data_form_pane_vc_ParamLimits

0x9d58,	// (0x0003489b) data_form_pane_vc

0x9d64,	// (0x000348a7) form_field_data_pane_vc_g1

0xbb11,	// (0x00036654) form_field_data_pane_vc_t1_ParamLimits

0xbb11,	// (0x00036654) form_field_data_pane_vc_t1

0x80d4,	// (0x00032c17) input_focus_pane_vc_ParamLimits

0x80d4,	// (0x00032c17) input_focus_pane_vc

0xbb2b,	// (0x0003666e) button_value_adjust_pane_cp3_vc

0xbb33,	// (0x00036676) button_value_adjust_pane_cp5_vc

0xbb3b,	// (0x0003667e) form_field_data_pane_vc_ParamLimits

0xbb3b,	// (0x0003667e) form_field_data_pane_vc

0xbb56,	// (0x00036699) form_field_data_pane_vc_cp2

0xbb5e,	// (0x000366a1) form_field_data_wide_pane_vc_ParamLimits

0xbb5e,	// (0x000366a1) form_field_data_wide_pane_vc

0xbb78,	// (0x000366bb) form_field_data_wide_pane_vc_cp2

0xbb80,	// (0x000366c3) form_field_popup_pane_vc_ParamLimits

0xbb80,	// (0x000366c3) form_field_popup_pane_vc

0xbb9b,	// (0x000366de) form_field_popup_wide_pane_vc_ParamLimits

0xbb9b,	// (0x000366de) form_field_popup_wide_pane_vc

0xbbb5,	// (0x000366f8) form_field_slider_pane_vc_ParamLimits

0xbbb5,	// (0x000366f8) form_field_slider_pane_vc

0xbbc8,	// (0x0003670b) form_field_slider_wide_pane_vc_ParamLimits

0xbbc8,	// (0x0003670b) form_field_slider_wide_pane_vc

0xbbdb,	// (0x0003671e) grid_touch_1_pane_ParamLimits

0xbbdb,	// (0x0003671e) grid_touch_1_pane

0xbbe7,	// (0x0003672a) grid_touch_2_pane_ParamLimits

0xbbe7,	// (0x0003672a) grid_touch_2_pane

0x8fff,	// (0x00033b42) touch_pane_g1_ParamLimits

0x8fff,	// (0x00033b42) touch_pane_g1

0xbc01,	// (0x00036744) cell_app_pane_cp_wide_ParamLimits

0xbc01,	// (0x00036744) cell_app_pane_cp_wide

0xbc12,	// (0x00036755) grid_popup_fast_wide_pane_ParamLimits

0xbc12,	// (0x00036755) grid_popup_fast_wide_pane

0xbc26,	// (0x00036769) scroll_pane_cp19_ParamLimits

0xbc26,	// (0x00036769) scroll_pane_cp19

0x71e4,	// (0x00031d27) bg_popup_window_pane_cp20

0xbc3a,	// (0x0003677d) listscroll_popup_fast_wide_pane

0x72c4,	// (0x00031e07) grid_indicator_nsta_pane

0xbc42,	// (0x00036785) clock_nsta_pane_g1

0xbc4b,	// (0x0003678e) clock_nsta_pane_t1

0xbc67,	// (0x000367aa) cell_indicator_nsta_pane_ParamLimits

0xbc67,	// (0x000367aa) cell_indicator_nsta_pane

0xbc9f,	// (0x000367e2) cell_indicator_nsta_pane_g1

0xbcad,	// (0x000367f0) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0003a614) cell_indicator_nsta_pane_g

0xbcc2,	// (0x00036805) clock_nsta_pane_cp

0xbcca,	// (0x0003680d) indicator_nsta_pane_cp

0xbcd2,	// (0x00036815) nsta_clock_indic_pane_g1

0x7390,	// (0x00031ed3) grid_indicator_pane

0x867c,	// (0x000331bf) scroll_pane_cp29

0x5b08,	// (0x0003064b) indicator_nsta_pane_cp2_ParamLimits

0x5b08,	// (0x0003064b) indicator_nsta_pane_cp2

0x72c4,	// (0x00031e07) main_apps_wheel_pane

0x9f23,	// (0x00034a66) form_midp_field_text_pane_ParamLimits

0xa072,	// (0x00034bb5) scroll_bar_cp050_ParamLimits

0xbd0a,	// (0x0003684d) cell_indicator_pane_ParamLimits

0xbd0a,	// (0x0003684d) cell_indicator_pane

0xbd22,	// (0x00036865) cell_indicator_pane_g1

0xbd2c,	// (0x0003686f) grid_wheel_folder_pane_ParamLimits

0xbd2c,	// (0x0003686f) grid_wheel_folder_pane

0xbd40,	// (0x00036883) list_wheel_apps_pane_ParamLimits

0xbd40,	// (0x00036883) list_wheel_apps_pane

0xbd53,	// (0x00036896) main_apps_wheel_pane_g1_ParamLimits

0xbd53,	// (0x00036896) main_apps_wheel_pane_g1

0xbd6f,	// (0x000368b2) main_apps_wheel_pane_g2_ParamLimits

0xbd6f,	// (0x000368b2) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0003a623) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0003a623) main_apps_wheel_pane_g

0xbd8b,	// (0x000368ce) main_apps_wheel_pane_t1_ParamLimits

0xbd8b,	// (0x000368ce) main_apps_wheel_pane_t1

0xbdb4,	// (0x000368f7) list_wheel_apps_pane_g1

0xbdbc,	// (0x000368ff) list_wheel_apps_pane_g2

0xbdc4,	// (0x00036907) list_wheel_apps_pane_g3

0xbdcc,	// (0x0003690f) list_wheel_apps_pane_g4

0xbdd6,	// (0x00036919) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0003a628) list_wheel_apps_pane_g

0x8bae,	// (0x000336f1) navi_icon_text_pane

0x96f7,	// (0x0003423a) aid_fill_nsta

0xbdf7,	// (0x0003693a) navi_icon_text_pane_g1

0xbe06,	// (0x00036949) navi_icon_text_pane_t1

0x8a44,	// (0x00033587) list_set_graphic_pane_t1_ParamLimits

0x8a44,	// (0x00033587) list_set_graphic_pane_t1

0xa792,	// (0x000352d5) popup_midp_note_alarm_window_t6_ParamLimits

0xa792,	// (0x000352d5) popup_midp_note_alarm_window_t6

0xa7a4,	// (0x000352e7) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a4,	// (0x000352e7) popup_midp_note_alarm_window_t7

0xa7b6,	// (0x000352f9) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b6,	// (0x000352f9) popup_midp_note_alarm_window_t8

0xa7c8,	// (0x0003530b) popup_midp_note_alarm_window_t9_ParamLimits

0xa7c8,	// (0x0003530b) popup_midp_note_alarm_window_t9

0xa7da,	// (0x0003531d) popup_midp_note_alarm_window_t10_ParamLimits

0xa7da,	// (0x0003531d) popup_midp_note_alarm_window_t10

0xa7ec,	// (0x0003532f) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ec,	// (0x0003532f) popup_midp_note_alarm_window_t11

0xa7fe,	// (0x00035341) scroll_pane_cp17_ParamLimits

0xa7fe,	// (0x00035341) scroll_pane_cp17

0x602d,	// (0x00030b70) volume_small_pane_cp_g1

0x64a2,	// (0x00030fe5) volume_small_pane_cp_g2

0x64ab,	// (0x00030fee) volume_small_pane_cp_g3

0x64b4,	// (0x00030ff7) volume_small_pane_cp_g4

0x64bd,	// (0x00031000) volume_small_pane_cp_g5

0x64c6,	// (0x00031009) volume_small_pane_cp_g6

0x64cf,	// (0x00031012) volume_small_pane_cp_g7

0x64d8,	// (0x0003101b) volume_small_pane_cp_g8

0x64e1,	// (0x00031024) volume_small_pane_cp_g9

0x64ea,	// (0x0003102d) volume_small_pane_cp_g10

0x8e0f,	// (0x00033952) midp_ticker_pane_g1_ParamLimits

0x8e1b,	// (0x0003395e) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0003a2db) midp_ticker_pane_g_ParamLimits

0x8e27,	// (0x0003396a) midp_ticker_pane_t1_ParamLimits

0x970d,	// (0x00034250) aid_fill_nsta_2

0xa05e,	// (0x00034ba1) list_form2_midp_pane

0xb1bb,	// (0x00035cfe) midp_editing_number_pane_ParamLimits

0xb1ca,	// (0x00035d0d) midp_ticker_pane_ParamLimits

0xbe1b,	// (0x0003695e) form2_midp_field_pane

0xbe3f,	// (0x00036982) scroll_pane_cp51

0xbe5f,	// (0x000369a2) form2_midp_button_pane_ParamLimits

0xbe5f,	// (0x000369a2) form2_midp_button_pane

0xbe71,	// (0x000369b4) form2_midp_content_pane_ParamLimits

0xbe71,	// (0x000369b4) form2_midp_content_pane

0xbe8b,	// (0x000369ce) form2_midp_field_choice_group_pane

0xbe93,	// (0x000369d6) form2_midp_field_pane_g1

0xbe9b,	// (0x000369de) form2_midp_field_pane_g2

0xbea3,	// (0x000369e6) form2_midp_field_pane_g3

0xbeab,	// (0x000369ee) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0003a64d) form2_midp_field_pane_g

0xbeb3,	// (0x000369f6) form2_midp_gauge_slider_pane

0xbebb,	// (0x000369fe) form2_midp_gauge_wait_pane

0xbec3,	// (0x00036a06) form2_midp_image_pane_ParamLimits

0xbec3,	// (0x00036a06) form2_midp_image_pane

0xbede,	// (0x00036a21) form2_midp_label_pane_ParamLimits

0xbede,	// (0x00036a21) form2_midp_label_pane

0xbefd,	// (0x00036a40) form2_midp_label_pane_cp_ParamLimits

0xbefd,	// (0x00036a40) form2_midp_label_pane_cp

0xbf1e,	// (0x00036a61) form2_midp_string_pane_ParamLimits

0xbf1e,	// (0x00036a61) form2_midp_string_pane

0x78d8,	// (0x0003241b) form2_midp_text_pane_ParamLimits

0x78d8,	// (0x0003241b) form2_midp_text_pane

0xbf30,	// (0x00036a73) form2_midp_time_pane

0xbf40,	// (0x00036a83) input_focus_pane_cp51_ParamLimits

0xbf40,	// (0x00036a83) input_focus_pane_cp51

0xbf58,	// (0x00036a9b) form2_midp_label_pane_t1_ParamLimits

0xbf58,	// (0x00036a9b) form2_midp_label_pane_t1

0x78f9,	// (0x0003243c) form2_mdip_text_pane_t1_ParamLimits

0x78f9,	// (0x0003243c) form2_mdip_text_pane_t1

0x791d,	// (0x00032460) form2_midp_time_pane_t1

0xbfa6,	// (0x00036ae9) form2_midp_gauge_slider_pane_t1

0xbfb8,	// (0x00036afb) form2_midp_gauge_slider_pane_t2

0xbfca,	// (0x00036b0d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0003a656) form2_midp_gauge_slider_pane_t

0xbfdc,	// (0x00036b1f) form2_midp_slider_pane

0xbfe8,	// (0x00036b2b) form2_midp_gauge_wait_pane_t1

0xbff6,	// (0x00036b39) form2_midp_wait_pane_ParamLimits

0xbff6,	// (0x00036b39) form2_midp_wait_pane

0x9d83,	// (0x000348c6) list_single_2graphic_pane_cp4_ParamLimits

0x9d83,	// (0x000348c6) list_single_2graphic_pane_cp4

0xc021,	// (0x00036b64) list_single_midp_graphic_pane_cp_ParamLimits

0xc021,	// (0x00036b64) list_single_midp_graphic_pane_cp

0x71e4,	// (0x00031d27) list_highlight_pane_cp20

0xc045,	// (0x00036b88) list_single_2graphic_pane_g1_cp4

0xb65a,	// (0x0003619d) list_single_2graphic_pane_g2_cp4

0xc04d,	// (0x00036b90) list_single_2graphic_pane_t1_cp4

0x72c4,	// (0x00031e07) list_highlight_pane_cp21

0xc05c,	// (0x00036b9f) list_single_midp_graphic_pane_g4_cp

0xc06b,	// (0x00036bae) list_single_midp_graphic_pane_t1_cp

0xc080,	// (0x00036bc3) form2_mdip_string_pane_t1_ParamLimits

0xc080,	// (0x00036bc3) form2_mdip_string_pane_t1

0x71e4,	// (0x00031d27) bg_wml_button_pane_cp2

0x71da,	// (0x00031d1d) form2_midp_image_pane_g1

0x52fc,	// (0x0002fe3f) list_double_large_graphic_pane_g5_ParamLimits

0x52fc,	// (0x0002fe3f) list_double_large_graphic_pane_g5

0x8d3a,	// (0x0003387d) midp_form_pane_ParamLimits

0x72c4,	// (0x00031e07) main_apps_wheel_pane_ParamLimits

0x94a1,	// (0x00033fe4) popup_preview_window_ParamLimits

0x94a1,	// (0x00033fe4) popup_preview_window

0x9688,	// (0x000341cb) popup_touch_info_window_ParamLimits

0x9688,	// (0x000341cb) popup_touch_info_window

0x96aa,	// (0x000341ed) popup_touch_menu_window_ParamLimits

0x96aa,	// (0x000341ed) popup_touch_menu_window

0x71d0,	// (0x00031d13) bg_popup_sub_pane_cp6

0xc167,	// (0x00036caa) list_touch_menu_pane

0xc16f,	// (0x00036cb2) list_single_touch_menu_pane_ParamLimits

0xc16f,	// (0x00036cb2) list_single_touch_menu_pane

0xc18a,	// (0x00036ccd) list_single_touch_menu_pane_t1

0x72c4,	// (0x00031e07) bg_popup_sub_pane_cp7_ParamLimits

0x72c4,	// (0x00031e07) bg_popup_sub_pane_cp7

0xc198,	// (0x00036cdb) heading_sub_pane

0xc1a0,	// (0x00036ce3) list_touch_info_pane_ParamLimits

0xc1a0,	// (0x00036ce3) list_touch_info_pane

0xc1af,	// (0x00036cf2) list_single_touch_info_pane_ParamLimits

0xc1af,	// (0x00036cf2) list_single_touch_info_pane

0xc1c1,	// (0x00036d04) list_single_touch_info_pane_t1

0xc1cf,	// (0x00036d12) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0003a664) list_single_touch_info_pane_t

0x8d32,	// (0x00033875) bg_popup_heading_pane_cp

0xc1dd,	// (0x00036d20) heading_sub_pane_t1

0x9cf2,	// (0x00034835) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf2,	// (0x00034835) bg_popup_preview_window_pane_cp

0xc198,	// (0x00036cdb) heading_preview_pane

0xc1a0,	// (0x00036ce3) list_preview_pane_ParamLimits

0xc1a0,	// (0x00036ce3) list_preview_pane

0xc1eb,	// (0x00036d2e) popup_preview_window_g1

0xc1af,	// (0x00036cf2) list_single_preview_pane_ParamLimits

0xc1af,	// (0x00036cf2) list_single_preview_pane

0xc1f3,	// (0x00036d36) list_single_preview_pane_g1

0xc1fb,	// (0x00036d3e) list_single_preview_pane_t1

0xc1c1,	// (0x00036d04) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0003a669) list_single_preview_pane_t

0xc209,	// (0x00036d4c) bg_popup_heading_pane_cp2_ParamLimits

0xc209,	// (0x00036d4c) bg_popup_heading_pane_cp2

0xc21f,	// (0x00036d62) heading_preview_pane_g1

0xc227,	// (0x00036d6a) heading_preview_pane_t1_ParamLimits

0xc227,	// (0x00036d6a) heading_preview_pane_t1

0x73b3,	// (0x00031ef6) soft_indicator_pane_t1_ParamLimits

0x8047,	// (0x00032b8a) scroll_pane_ParamLimits

0x8578,	// (0x000330bb) scroll_sc2_left_pane

0x8581,	// (0x000330c4) scroll_sc2_right_pane

0x85a0,	// (0x000330e3) scroll_bg_pane_g1_ParamLimits

0x85b5,	// (0x000330f8) scroll_bg_pane_g2_ParamLimits

0x85cd,	// (0x00033110) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0003a26a) scroll_bg_pane_g_ParamLimits

0x85a0,	// (0x000330e3) scroll_handle_pane_g1_ParamLimits

0x85ef,	// (0x00033132) scroll_handle_pane_g2_ParamLimits

0x85cd,	// (0x00033110) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0003a271) scroll_handle_pane_g_ParamLimits

0x90e0,	// (0x00033c23) popup_choice_list_window_ParamLimits

0x90e0,	// (0x00033c23) popup_choice_list_window

0x9b4a,	// (0x0003468d) choice_list_pane

0x9bcc,	// (0x0003470f) cell_toolbar_pane_t1

0x9bf4,	// (0x00034737) toolbar_button_pane_ParamLimits

0xacce,	// (0x00035811) ai_gene_pane_1_t2_ParamLimits

0xacce,	// (0x00035811) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0003a48e) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0003a48e) ai_gene_pane_1_t

0xc244,	// (0x00036d87) scroll_sc2_left_pane_g1

0xc244,	// (0x00036d87) scroll_sc2_right_pane_g1

0x90b8,	// (0x00033bfb) bg_popup_sub_pane_cp10

0xc24e,	// (0x00036d91) list_choice_list_pane

0xc265,	// (0x00036da8) list_single_choice_list_pane_ParamLimits

0xc265,	// (0x00036da8) list_single_choice_list_pane

0xc279,	// (0x00036dbc) list_single_choice_list_pane_g1

0xc281,	// (0x00036dc4) list_single_choice_list_pane_t1_ParamLimits

0xc281,	// (0x00036dc4) list_single_choice_list_pane_t1

0xc296,	// (0x00036dd9) choice_list_pane_g1

0xc29e,	// (0x00036de1) choice_list_pane_t1

0x71d0,	// (0x00031d13) input_focus_pane_cp11

0x8452,	// (0x00032f95) title_pane_stacon_g2_ParamLimits

0x8452,	// (0x00032f95) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0003a250) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0003a250) title_pane_stacon_g

0x8d32,	// (0x00033875) cursor_press_pane

0x9196,	// (0x00033cd9) popup_fep_hwr_window_ParamLimits

0x9196,	// (0x00033cd9) popup_fep_hwr_window

0x9220,	// (0x00033d63) popup_fep_vkb_window_ParamLimits

0x9220,	// (0x00033d63) popup_fep_vkb_window

0xc2ac,	// (0x00036def) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0003a692) fep_vkb_side_pane_g_ParamLimits

0x652c,	// (0x0003106f) fep_hwr_candidate_pane_ParamLimits

0x652c,	// (0x0003106f) fep_hwr_candidate_pane

0x6556,	// (0x00031099) fep_hwr_side_pane_ParamLimits

0x6556,	// (0x00031099) fep_hwr_side_pane

0x6578,	// (0x000310bb) fep_hwr_top_pane_ParamLimits

0x6578,	// (0x000310bb) fep_hwr_top_pane

0x6590,	// (0x000310d3) fep_hwr_write_pane_ParamLimits

0x6590,	// (0x000310d3) fep_hwr_write_pane

0xfb4f,	// (0x0003a692) fep_vkb_side_pane_g

0xc2b4,	// (0x00036df7) fep_hwr_top_pane_g1

0xc2c6,	// (0x00036e09) fep_hwr_top_pane_g2

0x65ca,	// (0x0003110d) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0003a66e) fep_hwr_top_pane_g

0x65df,	// (0x00031122) fep_hwr_top_text_pane

0x8744,	// (0x00033287) fep_hwr_top_text_pane_g1

0xc2fc,	// (0x00036e3f) fep_hwr_top_text_pane_t1

0x66e9,	// (0x0003122c) fep_hwr_candidate_pane_g1

0xc547,	// (0x0003708a) fep_vkb_keypad_pane_g3_ParamLimits

0xc547,	// (0x0003708a) fep_vkb_keypad_pane_g3

0xc573,	// (0x000370b6) fep_vkb_keypad_pane_g4_ParamLimits

0xc573,	// (0x000370b6) fep_vkb_keypad_pane_g4

0xc5ea,	// (0x0003712d) fep_vkb_bottom_pane_g2_ParamLimits

0xc5ea,	// (0x0003712d) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0003a699) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0003a699) fep_vkb_bottom_pane_g

0xc244,	// (0x00036d87) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0003a6a3) cell_vkb_side_pane_g

0xc675,	// (0x000371b8) cell_vkb_side_pane_t1

0xc683,	// (0x000371c6) cell_vkb_side_pane_t1_copy1

0xc244,	// (0x00036d87) bg_fep_vkb_candidate_pane_g2

0xc7c7,	// (0x0003730a) cell_vkb_candidate_pane_ParamLimits

0xc30a,	// (0x00036e4d) aid_size_cell_vkb_ParamLimits

0xc30a,	// (0x00036e4d) aid_size_cell_vkb

0xc7c7,	// (0x0003730a) cell_vkb_candidate_pane

0x6710,	// (0x00031253) bg_popup_fep_shadow_pane_g1

0xc39c,	// (0x00036edf) fep_vkb_bottom_pane_ParamLimits

0xc39c,	// (0x00036edf) fep_vkb_bottom_pane

0xc3d9,	// (0x00036f1c) fep_vkb_candidate_pane_ParamLimits

0xc3d9,	// (0x00036f1c) fep_vkb_candidate_pane

0xc3f5,	// (0x00036f38) fep_vkb_keypad_pane_ParamLimits

0xc3f5,	// (0x00036f38) fep_vkb_keypad_pane

0xc428,	// (0x00036f6b) fep_vkb_side_pane_ParamLimits

0xc428,	// (0x00036f6b) fep_vkb_side_pane

0xc464,	// (0x00036fa7) fep_vkb_top_pane_ParamLimits

0xc464,	// (0x00036fa7) fep_vkb_top_pane

0xc4a0,	// (0x00036fe3) fep_vkb_top_pane_g1_ParamLimits

0xc4a0,	// (0x00036fe3) fep_vkb_top_pane_g1

0xc4af,	// (0x00036ff2) fep_vkb_top_pane_g2_ParamLimits

0xc4af,	// (0x00036ff2) fep_vkb_top_pane_g2

0xc4be,	// (0x00037001) fep_vkb_top_pane_g3_ParamLimits

0xc4be,	// (0x00037001) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0003a689) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0003a689) fep_vkb_top_pane_g

0xc4dc,	// (0x0003701f) fep_vkb_top_text_pane_ParamLimits

0xc4dc,	// (0x0003701f) fep_vkb_top_text_pane

0xc4ed,	// (0x00037030) fep_vkb_side_pane_g1_ParamLimits

0xc4ed,	// (0x00037030) fep_vkb_side_pane_g1

0xc536,	// (0x00037079) grid_vkb_side_pane_ParamLimits

0xc536,	// (0x00037079) grid_vkb_side_pane

0x6718,	// (0x0003125b) bg_popup_fep_shadow_pane_g2

0x6721,	// (0x00031264) bg_popup_fep_shadow_pane_g3

0x6729,	// (0x0003126c) bg_popup_fep_shadow_pane_g4

0x6732,	// (0x00031275) bg_popup_fep_shadow_pane_g5

0x673c,	// (0x0003127f) bg_popup_fep_shadow_pane_g6

0x6744,	// (0x00031287) bg_popup_fep_shadow_pane_g7

0x8153,	// (0x00032c96) bg_popup_fep_shadow_pane_g8

0xc595,	// (0x000370d8) grid_vkb_keypad_number_pane_ParamLimits

0xc595,	// (0x000370d8) grid_vkb_keypad_number_pane

0xc5a9,	// (0x000370ec) grid_vkb_keypad_pane_ParamLimits

0xc5a9,	// (0x000370ec) grid_vkb_keypad_pane

0xc5cf,	// (0x00037112) fep_vkb_bottom_pane_g1_ParamLimits

0xc5cf,	// (0x00037112) fep_vkb_bottom_pane_g1

0xc5f8,	// (0x0003713b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5f8,	// (0x0003713b) grid_vkb_keypad_bottom_left_pane

0xc60d,	// (0x00037150) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc60d,	// (0x00037150) grid_vkb_keypad_bottom_right_pane

0xc622,	// (0x00037165) fep_vkb_top_text_pane_g1

0xc63d,	// (0x00037180) fep_vkb_top_text_pane_t1

0xc652,	// (0x00037195) cell_vkb_side_pane_ParamLimits

0xc652,	// (0x00037195) cell_vkb_side_pane

0xc244,	// (0x00036d87) cell_vkb_side_pane_g1

0xc691,	// (0x000371d4) cell_vkb_keypad_pane_ParamLimits

0xc691,	// (0x000371d4) cell_vkb_keypad_pane

0xc71e,	// (0x00037261) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0003a6b6) bg_popup_fep_shadow_pane_g

0x6756,	// (0x00031299) cell_hwr_side_pane_g1

0x6756,	// (0x00031299) cell_hwr_side_pane_g2

0xc728,	// (0x0003726b) cell_vkb_keypad_pane_t1

0xc736,	// (0x00037279) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc736,	// (0x00037279) cell_vkb_keypad_bottom_left_pane

0xc753,	// (0x00037296) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc753,	// (0x00037296) cell_vkb_keypad_bottom_right_pane

0xc244,	// (0x00036d87) cell_vkb_keypad_bottom_left_pane_g1

0xc244,	// (0x00036d87) cell_vkb_keypad_bottom_right_pane_g1

0xc78c,	// (0x000372cf) cell_vkb_keypad_number_pane_ParamLimits

0xc78c,	// (0x000372cf) cell_vkb_keypad_number_pane

0xc7ab,	// (0x000372ee) cell_vkb_keypad_number_pane_g1

0xc7b5,	// (0x000372f8) cell_vkb_keypad_number_pane_g2

0xc7be,	// (0x00037301) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0003a6a8) cell_vkb_keypad_number_pane_g

0xc728,	// (0x0003726b) cell_vkb_keypad_number_pane_t1

0xc7e8,	// (0x0003732b) fep_vkb_candidate_pane_g1

0x0001,

0xfb86,	// (0x0003a6c9) cell_hwr_side_pane_g

0xc801,	// (0x00037344) cell_hwr_side_pane_t1

0x6760,	// (0x000312a3) cell_hwr_side_pane_t1_copy1

0x676e,	// (0x000312b1) cell_hwr_candidate_pane_g1

0x679d,	// (0x000312e0) cell_hwr_candidate_pane_t1

0xc244,	// (0x00036d87) cell_vkb_candidate_pane_g2

0xc845,	// (0x00037388) cell_vkb_candidate_pane_t1

0x64f3,	// (0x00031036) bg_popup_fep_shadow_pane_ParamLimits

0x64f3,	// (0x00031036) bg_popup_fep_shadow_pane

0x65aa,	// (0x000310ed) bg_fep_hwr_top_pane_g4

0xc2d8,	// (0x00036e1b) bg_hwr_side_pane_g1_ParamLimits

0xc2d8,	// (0x00036e1b) bg_hwr_side_pane_g1

0x661d,	// (0x00031160) cell_hwr_side_pane_ParamLimits

0x661d,	// (0x00031160) cell_hwr_side_pane

0x665a,	// (0x0003119d) fep_hwr_write_pane_g1_ParamLimits

0x665a,	// (0x0003119d) fep_hwr_write_pane_g1

0x6667,	// (0x000311aa) fep_hwr_write_pane_g2_ParamLimits

0x6667,	// (0x000311aa) fep_hwr_write_pane_g2

0x6674,	// (0x000311b7) fep_hwr_write_pane_g3_ParamLimits

0x6674,	// (0x000311b7) fep_hwr_write_pane_g3

0x6682,	// (0x000311c5) fep_hwr_write_pane_g4_ParamLimits

0x6682,	// (0x000311c5) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0003a675) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0003a675) fep_hwr_write_pane_g

0x65aa,	// (0x000310ed) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65aa,	// (0x000310ed) bg_fep_hwr_candidate_pane_g2

0x6697,	// (0x000311da) cell_hwr_candidate_pane_ParamLimits

0x6697,	// (0x000311da) cell_hwr_candidate_pane

0x66e9,	// (0x0003122c) fep_hwr_candidate_pane_g1_ParamLimits

0xc338,	// (0x00036e7b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc338,	// (0x00036e7b) bg_popup_fep_shadow_pane_cp2

0xc4ce,	// (0x00037011) fep_vkb_top_pane_g4_ParamLimits

0xc4ce,	// (0x00037011) fep_vkb_top_pane_g4

0xc514,	// (0x00037057) fep_vkb_side_pane_g2_ParamLimits

0xc514,	// (0x00037057) fep_vkb_side_pane_g2

0x5486,	// (0x0002ffc9) list_setting_pane_t4_ParamLimits

0x5486,	// (0x0002ffc9) list_setting_pane_t4

0x5522,	// (0x00030065) list_setting_number_pane_t5_ParamLimits

0x5522,	// (0x00030065) list_setting_number_pane_t5

0x8786,	// (0x000332c9) list_double_heading_pane_cp2_ParamLimits

0x8786,	// (0x000332c9) list_double_heading_pane_cp2

0x80ee,	// (0x00032c31) list_double_heading_pane_g1_cp2_ParamLimits

0x80ee,	// (0x00032c31) list_double_heading_pane_g1_cp2

0x80fa,	// (0x00032c3d) list_double_heading_pane_g2_cp2_ParamLimits

0x80fa,	// (0x00032c3d) list_double_heading_pane_g2_cp2

0xc853,	// (0x00037396) list_double_heading_pane_t1_cp2_ParamLimits

0xc853,	// (0x00037396) list_double_heading_pane_t1_cp2

0xc869,	// (0x000373ac) list_double_heading_pane_t2_cp2_ParamLimits

0xc869,	// (0x000373ac) list_double_heading_pane_t2_cp2

0x71b8,	// (0x00031cfb) aid_value_unit2

0x4ee2,	// (0x0002fa25) popup_preview_fixed_window

0x754e,	// (0x00032091) bg_popup_preview_window_pane_cp02

0xc87b,	// (0x000373be) list_preview_fixed_pane

0xc8c1,	// (0x00037404) list_empty_pane_fp_ParamLimits

0xc8c1,	// (0x00037404) list_empty_pane_fp

0xc8c1,	// (0x00037404) list_single_cale_day_pane_fp_ParamLimits

0xc8c1,	// (0x00037404) list_single_cale_day_pane_fp

0xc8c1,	// (0x00037404) list_single_graphic_heading_pane_fp_ParamLimits

0xc8c1,	// (0x00037404) list_single_graphic_heading_pane_fp

0xc8c1,	// (0x00037404) list_single_graphic_pane_fp_ParamLimits

0xc8c1,	// (0x00037404) list_single_graphic_pane_fp

0xc8c1,	// (0x00037404) list_single_heading_pane_fp_ParamLimits

0xc8c1,	// (0x00037404) list_single_heading_pane_fp

0xc8c1,	// (0x00037404) list_single_pane_fp_ParamLimits

0xc8c1,	// (0x00037404) list_single_pane_fp

0xc8da,	// (0x0003741d) list_single_pane_fp_g1_ParamLimits

0xc8da,	// (0x0003741d) list_single_pane_fp_g1

0x7930,	// (0x00032473) list_single_pane_fp_g2_ParamLimits

0x7930,	// (0x00032473) list_single_pane_fp_g2

0x793c,	// (0x0003247f) list_single_pane_fp_g3_ParamLimits

0x793c,	// (0x0003247f) list_single_pane_fp_g3

0xc8e6,	// (0x00037429) list_single_pane_fp_g4_ParamLimits

0xc8e6,	// (0x00037429) list_single_pane_fp_g4

0x0003,

0xfb99,	// (0x0003a6dc) list_single_pane_fp_g_ParamLimits

0xfb99,	// (0x0003a6dc) list_single_pane_fp_g

0x7950,	// (0x00032493) list_single_pane_fp_t1_ParamLimits

0x7950,	// (0x00032493) list_single_pane_fp_t1

0x7967,	// (0x000324aa) list_single_graphic_pane_fp_g1_ParamLimits

0x7967,	// (0x000324aa) list_single_graphic_pane_fp_g1

0xc8da,	// (0x0003741d) list_single_graphic_pane_fp_g2_ParamLimits

0xc8da,	// (0x0003741d) list_single_graphic_pane_fp_g2

0x7930,	// (0x00032473) list_single_graphic_pane_fp_g3_ParamLimits

0x7930,	// (0x00032473) list_single_graphic_pane_fp_g3

0x793c,	// (0x0003247f) list_single_graphic_pane_fp_g4_ParamLimits

0x793c,	// (0x0003247f) list_single_graphic_pane_fp_g4

0xc8e6,	// (0x00037429) list_single_graphic_pane_fp_g5_ParamLimits

0xc8e6,	// (0x00037429) list_single_graphic_pane_fp_g5

0x0004,

0xfba2,	// (0x0003a6e5) list_single_graphic_pane_fp_g_ParamLimits

0xfba2,	// (0x0003a6e5) list_single_graphic_pane_fp_g

0x7973,	// (0x000324b6) list_single_graphic_pane_fp_t1_ParamLimits

0x7973,	// (0x000324b6) list_single_graphic_pane_fp_t1

0x7967,	// (0x000324aa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7967,	// (0x000324aa) list_single_graphic_heading_pane_fp_g1

0xc8da,	// (0x0003741d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8da,	// (0x0003741d) list_single_graphic_heading_pane_fp_g2

0x7930,	// (0x00032473) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7930,	// (0x00032473) list_single_graphic_heading_pane_fp_g3

0x793c,	// (0x0003247f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x793c,	// (0x0003247f) list_single_graphic_heading_pane_fp_g4

0xc8e6,	// (0x00037429) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8e6,	// (0x00037429) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003a6e5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003a6e5) list_single_graphic_heading_pane_fp_g

0x7989,	// (0x000324cc) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7989,	// (0x000324cc) list_single_graphic_heading_pane_fp_t1

0x799f,	// (0x000324e2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x799f,	// (0x000324e2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0003a6f0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0003a6f0) list_single_graphic_heading_pane_fp_t

0x79b1,	// (0x000324f4) list_single_cale_day_pane_fp_g1_ParamLimits

0x79b1,	// (0x000324f4) list_single_cale_day_pane_fp_g1

0xc8f2,	// (0x00037435) list_single_cale_day_pane_fp_g2_ParamLimits

0xc8f2,	// (0x00037435) list_single_cale_day_pane_fp_g2

0x79e9,	// (0x0003252c) list_single_cale_day_pane_fp_g3_ParamLimits

0x79e9,	// (0x0003252c) list_single_cale_day_pane_fp_g3

0x7a11,	// (0x00032554) list_single_cale_day_pane_fp_g4_ParamLimits

0x7a11,	// (0x00032554) list_single_cale_day_pane_fp_g4

0x7a35,	// (0x00032578) list_single_cale_day_pane_fp_g5_ParamLimits

0x7a35,	// (0x00032578) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb2,	// (0x0003a6f5) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb2,	// (0x0003a6f5) list_single_cale_day_pane_fp_g

0x7a59,	// (0x0003259c) list_single_cale_day_pane_fp_t1_ParamLimits

0x7a59,	// (0x0003259c) list_single_cale_day_pane_fp_t1

0x7a7f,	// (0x000325c2) list_single_cale_day_pane_fp_t2_ParamLimits

0x7a7f,	// (0x000325c2) list_single_cale_day_pane_fp_t2

0x7a98,	// (0x000325db) list_single_cale_day_pane_fp_t3_ParamLimits

0x7a98,	// (0x000325db) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbd,	// (0x0003a700) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbd,	// (0x0003a700) list_single_cale_day_pane_fp_t

0xc8da,	// (0x0003741d) list_empty_pane_fp_g1_ParamLimits

0xc8da,	// (0x0003741d) list_empty_pane_fp_g1

0x7ab1,	// (0x000325f4) list_empty_pane_fp_t1

0x7abf,	// (0x00032602) list_empty_pane_fp_t2

0x0001,

0xfbc4,	// (0x0003a707) list_empty_pane_fp_t

0xc8da,	// (0x0003741d) list_single_heading_pane_fp_g1_ParamLimits

0xc8da,	// (0x0003741d) list_single_heading_pane_fp_g1

0x7930,	// (0x00032473) list_single_heading_pane_fp_g2_ParamLimits

0x7930,	// (0x00032473) list_single_heading_pane_fp_g2

0x793c,	// (0x0003247f) list_single_heading_pane_fp_g3_ParamLimits

0x793c,	// (0x0003247f) list_single_heading_pane_fp_g3

0x0002,

0xfbc9,	// (0x0003a70c) list_single_heading_pane_fp_g_ParamLimits

0xfbc9,	// (0x0003a70c) list_single_heading_pane_fp_g

0x7acd,	// (0x00032610) list_single_heading_pane_fp_t1_ParamLimits

0x7acd,	// (0x00032610) list_single_heading_pane_fp_t1

0x7adf,	// (0x00032622) list_single_heading_pane_fp_t2_ParamLimits

0x7adf,	// (0x00032622) list_single_heading_pane_fp_t2

0x0001,

0xfbd0,	// (0x0003a713) list_single_heading_pane_fp_t_ParamLimits

0xfbd0,	// (0x0003a713) list_single_heading_pane_fp_t

0x82e9,	// (0x00032e2c) aid_size_cell_fast

0x74c0,	// (0x00032003) soft_indicator_pane_cp1_t1

0x8326,	// (0x00032e69) cell_app_pane_cp2_ParamLimits

0x8326,	// (0x00032e69) cell_app_pane_cp2

0x6515,	// (0x00031058) fep_hwr_candidate_drop_down_list_pane

0x6703,	// (0x00031246) fep_hwr_candidate_pane_g3_ParamLimits

0x6703,	// (0x00031246) fep_hwr_candidate_pane_g3

0x3996,	// (0x0002e4d9) fep_hwr_candidate_pane_g4_ParamLimits

0x3996,	// (0x0002e4d9) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0003a682) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0003a682) fep_hwr_candidate_pane_g

0xc3c8,	// (0x00036f0b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3c8,	// (0x00036f0b) fep_vkb_candidate_drop_down_list_pane

0xc7f0,	// (0x00037333) fep_vkb_candidate_pane_g3

0xc7f8,	// (0x0003733b) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0003a6af) fep_vkb_candidate_pane_g

0x676e,	// (0x000312b1) cell_hwr_candidate_pane_g1_ParamLimits

0x677c,	// (0x000312bf) cell_hwr_candidate_pane_g3_ParamLimits

0x677c,	// (0x000312bf) cell_hwr_candidate_pane_g3

0xe302,	// (0x00038e45) cell_hwr_candidate_pane_g4_ParamLimits

0xe302,	// (0x00038e45) cell_hwr_candidate_pane_g4

0x0002,

0xfb8b,	// (0x0003a6ce) cell_hwr_candidate_pane_g_ParamLimits

0xfb8b,	// (0x0003a6ce) cell_hwr_candidate_pane_g

0xc80f,	// (0x00037352) cell_vkb_candidate_pane_g3_ParamLimits

0xc80f,	// (0x00037352) cell_vkb_candidate_pane_g3

0xc82a,	// (0x0003736d) cell_vkb_candidate_pane_g4_ParamLimits

0xc82a,	// (0x0003736d) cell_vkb_candidate_pane_g4

0xc8fe,	// (0x00037441) cell_app_pane_cp2_g1_ParamLimits

0xc8fe,	// (0x00037441) cell_app_pane_cp2_g1

0xc91c,	// (0x0003745f) cell_app_pane_cp2_g2_ParamLimits

0xc91c,	// (0x0003745f) cell_app_pane_cp2_g2

0x0001,

0xfbd5,	// (0x0003a718) cell_app_pane_cp2_g_ParamLimits

0xfbd5,	// (0x0003a718) cell_app_pane_cp2_g

0xc928,	// (0x0003746b) cell_app_pane_cp2_t1_ParamLimits

0xc928,	// (0x0003746b) cell_app_pane_cp2_t1

0x80d4,	// (0x00032c17) grid_highlight_pane_cp1_ParamLimits

0x80d4,	// (0x00032c17) grid_highlight_pane_cp1

0x67bb,	// (0x000312fe) cell_hwr_candidate_pane_cp1_ParamLimits

0x67bb,	// (0x000312fe) cell_hwr_candidate_pane_cp1

0x676e,	// (0x000312b1) fep_hwr_candidate_drop_down_list_pane_g1

0x67df,	// (0x00031322) fep_hwr_candidate_drop_down_list_pane_g2

0x67ec,	// (0x0003132f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0003a71d) fep_hwr_candidate_drop_down_list_pane_g

0x67f9,	// (0x0003133c) fep_hwr_candidate_drop_down_list_scroll_pane

0x6802,	// (0x00031345) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6802,	// (0x00031345) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x680f,	// (0x00031352) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x680f,	// (0x00031352) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x681c,	// (0x0003135f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x681c,	// (0x0003135f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6829,	// (0x0003136c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6829,	// (0x0003136c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6844,	// (0x00031387) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6844,	// (0x00031387) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x685f,	// (0x000313a2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x685f,	// (0x000313a2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x687a,	// (0x000313bd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x687a,	// (0x000313bd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6895,	// (0x000313d8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6895,	// (0x000313d8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0003a724) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0003a724) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc93a,	// (0x0003747d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc93a,	// (0x0003747d) cell_vkb_candidate_pane_cp1

0xc4ce,	// (0x00037011) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4ce,	// (0x00037011) fep_vkb_candidate_drop_down_list_pane_g1

0xc960,	// (0x000374a3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc960,	// (0x000374a3) fep_vkb_candidate_drop_down_list_pane_g2

0xc96d,	// (0x000374b0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc96d,	// (0x000374b0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbf2,	// (0x0003a735) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbf2,	// (0x0003a735) fep_vkb_candidate_drop_down_list_pane_g

0xc97a,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc97a,	// (0x000374bd) fep_vkb_candidate_drop_down_list_scroll_pane

0xc987,	// (0x000374ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc987,	// (0x000374ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc994,	// (0x000374d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc994,	// (0x000374d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9a0,	// (0x000374e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9a0,	// (0x000374e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9ac,	// (0x000374ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9ac,	// (0x000374ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9cd,	// (0x00037510) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9cd,	// (0x00037510) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9ee,	// (0x00037531) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9ee,	// (0x00037531) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca0f,	// (0x00037552) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca0f,	// (0x00037552) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca30,	// (0x00037573) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca30,	// (0x00037573) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf9,	// (0x0003a73c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf9,	// (0x0003a73c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x71ee,	// (0x00031d31) title_pane_g1_ParamLimits

0x71fb,	// (0x00031d3e) title_pane_g2_ParamLimits

0xf592,	// (0x0003a0d5) title_pane_g_ParamLimits

0x8734,	// (0x00033277) aid_call2_pane

0x873c,	// (0x0003327f) aid_call_pane

0x8744,	// (0x00033287) popup_clock_analogue_window_g1

0x8744,	// (0x00033287) popup_clock_analogue_window_g2

0x597b,	// (0x000304be) popup_clock_analogue_window_g3

0x5984,	// (0x000304c7) popup_clock_analogue_window_g4

0x71da,	// (0x00031d1d) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0003a27f) popup_clock_analogue_window_g

0x598c,	// (0x000304cf) popup_clock_analogue_window_t1

0x599a,	// (0x000304dd) clock_digital_number_pane_ParamLimits

0x599a,	// (0x000304dd) clock_digital_number_pane

0x59a6,	// (0x000304e9) clock_digital_number_pane_cp02_ParamLimits

0x59a6,	// (0x000304e9) clock_digital_number_pane_cp02

0x59b2,	// (0x000304f5) clock_digital_number_pane_cp03_ParamLimits

0x59b2,	// (0x000304f5) clock_digital_number_pane_cp03

0x59be,	// (0x00030501) clock_digital_number_pane_cp04_ParamLimits

0x59be,	// (0x00030501) clock_digital_number_pane_cp04

0x59ca,	// (0x0003050d) clock_digital_separator_pane_ParamLimits

0x59ca,	// (0x0003050d) clock_digital_separator_pane

0x59d6,	// (0x00030519) popup_clock_digital_window_t1_ParamLimits

0x59d6,	// (0x00030519) popup_clock_digital_window_t1

0x71da,	// (0x00031d1d) clock_digital_number_pane_g1

0x71da,	// (0x00031d1d) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0003a28a) clock_digital_number_pane_g

0x71da,	// (0x00031d1d) clock_digital_separator_pane_g1

0x71da,	// (0x00031d1d) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0003a28a) clock_digital_separator_pane_g

0x96f7,	// (0x0003423a) aid_fill_nsta_ParamLimits

0x9847,	// (0x0003438a) indicator_nsta_pane_ParamLimits

0x99d7,	// (0x0003451a) popup_clock_analogue_window

0x99d7,	// (0x0003451a) popup_clock_digital_window

0x72c4,	// (0x00031e07) grid_indicator_nsta_pane_ParamLimits

0xbc59,	// (0x0003679c) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0003a60f) clock_nsta_pane_t

0x593f,	// (0x00030482) aid_size_max_handle

0x5949,	// (0x0003048c) aid_size_min_handle

0x8d32,	// (0x00033875) editor_scroll_pane

0xca4b,	// (0x0003758e) ex_editor_pane

0x8256,	// (0x00032d99) scroll_pane_cp13

0x8073,	// (0x00032bb6) scroll_pane_cp14

0x876e,	// (0x000332b1) scroll_pane_cp36

0x879c,	// (0x000332df) list_single_graphic_hl_pane_cp2_ParamLimits

0x879c,	// (0x000332df) list_single_graphic_hl_pane_cp2

0x630b,	// (0x00030e4e) list_single_graphic_hl_pane_ParamLimits

0x630b,	// (0x00030e4e) list_single_graphic_hl_pane

0x7af5,	// (0x00032638) aid_size_min_hl_cp1

0xca53,	// (0x00037596) list_highlight_pane_cp34_ParamLimits

0xca53,	// (0x00037596) list_highlight_pane_cp34

0xca64,	// (0x000375a7) list_single_graphic_hl_pane_g1_ParamLimits

0xca64,	// (0x000375a7) list_single_graphic_hl_pane_g1

0x7afe,	// (0x00032641) list_single_graphic_hl_pane_g2_ParamLimits

0x7afe,	// (0x00032641) list_single_graphic_hl_pane_g2

0x7afe,	// (0x00032641) list_single_graphic_hl_pane_g3_ParamLimits

0x7afe,	// (0x00032641) list_single_graphic_hl_pane_g3

0x5ef4,	// (0x00030a37) list_single_graphic_hl_pane_g4_ParamLimits

0x5ef4,	// (0x00030a37) list_single_graphic_hl_pane_g4

0x7b0a,	// (0x0003264d) list_single_graphic_hl_pane_g5_ParamLimits

0x7b0a,	// (0x0003264d) list_single_graphic_hl_pane_g5

0x0004,

0xfc0a,	// (0x0003a74d) list_single_graphic_hl_pane_g_ParamLimits

0xfc0a,	// (0x0003a74d) list_single_graphic_hl_pane_g

0x7b1e,	// (0x00032661) list_single_graphic_hl_pane_t1_ParamLimits

0x7b1e,	// (0x00032661) list_single_graphic_hl_pane_t1

0xca71,	// (0x000375b4) aid_size_min_hl_cp2

0xca7a,	// (0x000375bd) list_highlight_pane_cp34_cp2_ParamLimits

0xca7a,	// (0x000375bd) list_highlight_pane_cp34_cp2

0xca64,	// (0x000375a7) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca64,	// (0x000375a7) list_single_graphic_hl_pane_g1_cp2

0xca87,	// (0x000375ca) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca87,	// (0x000375ca) list_single_graphic_hl_pane_g2_cp2

0xca93,	// (0x000375d6) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca93,	// (0x000375d6) list_single_graphic_hl_pane_g3_cp2

0x9457,	// (0x00033f9a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9457,	// (0x00033f9a) list_single_graphic_hl_pane_g4_cp2

0xcaa1,	// (0x000375e4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaa1,	// (0x000375e4) list_single_graphic_hl_pane_g5_cp2

0x5d1b,	// (0x0003085e) control_pane_g4_ParamLimits

0x5d1b,	// (0x0003085e) control_pane_g4

0x90b8,	// (0x00033bfb) bg_popup_sub_pane_cp10_ParamLimits

0xc24e,	// (0x00036d91) list_choice_list_pane_ParamLimits

0xc25d,	// (0x00036da0) scroll_pane_cp23

0x754e,	// (0x00032091) bg_popup_preview_window_pane_cp02_ParamLimits

0xc87b,	// (0x000373be) list_preview_fixed_pane_ParamLimits

0xc891,	// (0x000373d4) list_preview_fixed_pane_cp_ParamLimits

0xc891,	// (0x000373d4) list_preview_fixed_pane_cp

0xc89d,	// (0x000373e0) popup_preview_fixed_window_g1_ParamLimits

0xc89d,	// (0x000373e0) popup_preview_fixed_window_g1

0xc8a9,	// (0x000373ec) popup_preview_fixed_window_g2_ParamLimits

0xc8a9,	// (0x000373ec) popup_preview_fixed_window_g2

0x0002,

0xfb92,	// (0x0003a6d5) popup_preview_fixed_window_g_ParamLimits

0xfb92,	// (0x0003a6d5) popup_preview_fixed_window_g

0x58b1,	// (0x000303f4) aid_navi_side_left_pane_ParamLimits

0x58c6,	// (0x00030409) aid_navi_side_right_pane_ParamLimits

0x58de,	// (0x00030421) navi_icon_pane_stacon_ParamLimits

0x58f2,	// (0x00030435) navi_navi_pane_stacon_ParamLimits

0x58de,	// (0x00030421) navi_text_pane_stacon_ParamLimits

0x71d0,	// (0x00031d13) main_text_info_pane

0xcacb,	// (0x0003760e) listscroll_text_info_pane

0xcad3,	// (0x00037616) list_text_info_pane_ParamLimits

0xcad3,	// (0x00037616) list_text_info_pane

0xcae2,	// (0x00037625) scroll_pane_cp24_ParamLimits

0xcae2,	// (0x00037625) scroll_pane_cp24

0xcb00,	// (0x00037643) list_text_info_pane_t1_ParamLimits

0xcb00,	// (0x00037643) list_text_info_pane_t1

0x90fe,	// (0x00033c41) popup_fast_swap2_window_ParamLimits

0x90fe,	// (0x00033c41) popup_fast_swap2_window

0xcb25,	// (0x00037668) aid_size_cell_fast2

0x71d0,	// (0x00031d13) bg_popup_window_pane_cp17

0xa08a,	// (0x00034bcd) heading_pane_cp2

0x7d37,	// (0x0003287a) listscroll_fast2_pane

0xcb2f,	// (0x00037672) grid_fast2_pane

0xcb39,	// (0x0003767c) listscroll_fast2_pane_g1

0xcb43,	// (0x00037686) listscroll_fast2_pane_g2

0x0001,

0xfc15,	// (0x0003a758) listscroll_fast2_pane_g

0x8256,	// (0x00032d99) scroll_pane_cp26

0xcb4d,	// (0x00037690) cell_fast2_pane_ParamLimits

0xcb4d,	// (0x00037690) cell_fast2_pane

0xcb64,	// (0x000376a7) cell_fast2_pane_g1

0xcb6d,	// (0x000376b0) cell_fast2_pane_g2

0xcb76,	// (0x000376b9) cell_fast2_pane_g3

0x0002,

0xfc1a,	// (0x0003a75d) cell_fast2_pane_g

0x7e30,	// (0x00032973) grid_highlight_pane_cp9

0x7e45,	// (0x00032988) main_eswt_pane_ParamLimits

0x7e45,	// (0x00032988) main_eswt_pane

0xcaf7,	// (0x0003763a) list_single_text_info_pane

0xcb7e,	// (0x000376c1) eswt_ctrl_button_pane

0xcb7e,	// (0x000376c1) eswt_ctrl_canvas_pane

0xcb86,	// (0x000376c9) eswt_ctrl_combo_pane

0xcb7e,	// (0x000376c1) eswt_ctrl_default_pane

0xcb7e,	// (0x000376c1) eswt_ctrl_label_pane

0xcb8e,	// (0x000376d1) eswt_ctrl_wait_pane

0xcb96,	// (0x000376d9) eswt_shell_pane

0x71d0,	// (0x00031d13) listscroll_eswt_app_pane

0xcbb6,	// (0x000376f9) popup_eswt_tasktip_window_ParamLimits

0xcbb6,	// (0x000376f9) popup_eswt_tasktip_window

0x9cf2,	// (0x00034835) bg_popup_window_pane_cp18

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_ParamLimits

0xcbc7,	// (0x0003770a) eswt_control_pane_g1

0xcbd4,	// (0x00037717) eswt_control_pane_g2_ParamLimits

0xcbd4,	// (0x00037717) eswt_control_pane_g2

0xcbe1,	// (0x00037724) eswt_control_pane_g3_ParamLimits

0xcbe1,	// (0x00037724) eswt_control_pane_g3

0xcbee,	// (0x00037731) eswt_control_pane_g4_ParamLimits

0xcbee,	// (0x00037731) eswt_control_pane_g4

0x0003,

0xfc21,	// (0x0003a764) eswt_control_pane_g_ParamLimits

0xfc21,	// (0x0003a764) eswt_control_pane_g

0x80d4,	// (0x00032c17) bg_button_pane_ParamLimits

0x80d4,	// (0x00032c17) bg_button_pane

0x7e45,	// (0x00032988) common_borders_pane_copy2_ParamLimits

0x7e45,	// (0x00032988) common_borders_pane_copy2

0xcbfb,	// (0x0003773e) control_button_pane_g1_ParamLimits

0xcbfb,	// (0x0003773e) control_button_pane_g1

0xcc07,	// (0x0003774a) control_button_pane_g2_ParamLimits

0xcc07,	// (0x0003774a) control_button_pane_g2

0xcc13,	// (0x00037756) control_button_pane_g3_ParamLimits

0xcc13,	// (0x00037756) control_button_pane_g3

0x0002,

0xfc2a,	// (0x0003a76d) control_button_pane_g_ParamLimits

0xfc2a,	// (0x0003a76d) control_button_pane_g

0xcc27,	// (0x0003776a) control_button_pane_t1

0xcc35,	// (0x00037778) control_button_pane_t2

0x0001,

0xfc31,	// (0x0003a774) control_button_pane_t

0x9c00,	// (0x00034743) bg_button_pane_g1

0x9c10,	// (0x00034753) bg_button_pane_g2

0x9c08,	// (0x0003474b) bg_button_pane_g3

0x9c20,	// (0x00034763) bg_button_pane_g4

0x9c18,	// (0x0003475b) bg_button_pane_g5

0x9c28,	// (0x0003476b) bg_button_pane_g6

0x9c30,	// (0x00034773) bg_button_pane_g7

0x9c40,	// (0x00034783) bg_button_pane_g8

0x9c38,	// (0x0003477b) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0003a3e2) bg_button_pane_g

0xc209,	// (0x00036d4c) common_borders_pane_ParamLimits

0xc209,	// (0x00036d4c) common_borders_pane

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy1_ParamLimits

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy1

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy1_ParamLimits

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy1

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy1_ParamLimits

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy1

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy1_ParamLimits

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy1

0xc244,	// (0x00036d87) bg_eswt_ctrl_canvas_pane_g1

0xc209,	// (0x00036d4c) common_borders_pane_cp2_ParamLimits

0xc209,	// (0x00036d4c) common_borders_pane_cp2

0xc209,	// (0x00036d4c) common_borders_pane_cp3_ParamLimits

0xc209,	// (0x00036d4c) common_borders_pane_cp3

0xcc43,	// (0x00037786) separator_horizontal_pane

0xcc4b,	// (0x0003778e) separator_vertical_pane

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy2_ParamLimits

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy2

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy2_ParamLimits

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy2

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy2_ParamLimits

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy2

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy2_ParamLimits

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy2

0x71d0,	// (0x00031d13) common_borders_pane_cp4

0xcc54,	// (0x00037797) separator_horizontal_pane_g1

0xcc5d,	// (0x000377a0) separator_horizontal_pane_g2

0xcc66,	// (0x000377a9) separator_horizontal_pane_g3

0x0002,

0xfc36,	// (0x0003a779) separator_horizontal_pane_g

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy3_ParamLimits

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy3

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy3_ParamLimits

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy3

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy3_ParamLimits

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy3

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy3_ParamLimits

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy3

0x71d0,	// (0x00031d13) common_borders_pane_cp5

0xcc6f,	// (0x000377b2) separator_vertical_pane_g1

0xcc78,	// (0x000377bb) separator_vertical_pane_g2

0xcc8f,	// (0x000377d2) separator_vertical_pane_g3

0x0002,

0xfc3d,	// (0x0003a780) separator_vertical_pane_g

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy4_ParamLimits

0xcbc7,	// (0x0003770a) eswt_control_pane_g1_copy4

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy4_ParamLimits

0xcbd4,	// (0x00037717) eswt_control_pane_g2_copy4

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy4_ParamLimits

0xcbe1,	// (0x00037724) eswt_control_pane_g3_copy4

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy4_ParamLimits

0xcbee,	// (0x00037731) eswt_control_pane_g4_copy4

0xcc98,	// (0x000377db) eswt_ctrl_combo_button_pane

0xcca0,	// (0x000377e3) eswt_ctrl_input_pane

0xcca8,	// (0x000377eb) popup_choice_list_window_cp70

0xccb0,	// (0x000377f3) eswt_ctrl_input_pane_t1

0x71d0,	// (0x00031d13) input_focus_pane_cp70

0xc209,	// (0x00036d4c) bg_button_pane_cp70_ParamLimits

0xc209,	// (0x00036d4c) bg_button_pane_cp70

0xccbe,	// (0x00037801) eswt_ctrl_combo_button_pane_g1

0xccc6,	// (0x00037809) wait_bar_pane_cp70

0x9cf2,	// (0x00034835) bg_popup_window_pane_cp70_ParamLimits

0x9cf2,	// (0x00034835) bg_popup_window_pane_cp70

0xccce,	// (0x00037811) popup_eswt_tasktip_window_t1

0xcce4,	// (0x00037827) wait_bar_pane_cp71_ParamLimits

0xcce4,	// (0x00037827) wait_bar_pane_cp71

0xccf0,	// (0x00037833) grid_eswt_app_pane

0x8578,	// (0x000330bb) scroll_pane_cp70

0xccf9,	// (0x0003783c) cell_eswt_app_pane_ParamLimits

0xccf9,	// (0x0003783c) cell_eswt_app_pane

0xcd2b,	// (0x0003786e) cell_eswt_app_pane_g1_ParamLimits

0xcd2b,	// (0x0003786e) cell_eswt_app_pane_g1

0xcd5a,	// (0x0003789d) cell_eswt_app_pane_g2_ParamLimits

0xcd5a,	// (0x0003789d) cell_eswt_app_pane_g2

0x0001,

0xfc44,	// (0x0003a787) cell_eswt_app_pane_g_ParamLimits

0xfc44,	// (0x0003a787) cell_eswt_app_pane_g

0xcd83,	// (0x000378c6) cell_eswt_app_pane_t1_ParamLimits

0xcd83,	// (0x000378c6) cell_eswt_app_pane_t1

0xcdb5,	// (0x000378f8) grid_highlight_pane_cp70_ParamLimits

0xcdb5,	// (0x000378f8) grid_highlight_pane_cp70

0xb152,	// (0x00035c95) set_content_pane_g1

0x8fe2,	// (0x00033b25) status_small_volume_pane

0x68b0,	// (0x000313f3) status_small_volume_pane_g1

0x68b8,	// (0x000313fb) volume_small2_pane

0x68c1,	// (0x00031404) volume_small2_pane_g1

0x68ca,	// (0x0003140d) volume_small2_pane_g2

0x68d3,	// (0x00031416) volume_small2_pane_g3

0x68dc,	// (0x0003141f) volume_small2_pane_g4

0x68e5,	// (0x00031428) volume_small2_pane_g5

0x68ee,	// (0x00031431) volume_small2_pane_g6

0x68f7,	// (0x0003143a) volume_small2_pane_g7

0x6900,	// (0x00031443) volume_small2_pane_g8

0x6909,	// (0x0003144c) volume_small2_pane_g9

0x6912,	// (0x00031455) volume_small2_pane_g10

0x0009,

0xfc49,	// (0x0003a78c) volume_small2_pane_g

0xc622,	// (0x00037165) fep_vkb_top_text_pane_g1_ParamLimits

0xc63d,	// (0x00037180) fep_vkb_top_text_pane_t1_ParamLimits

0xc8b5,	// (0x000373f8) popup_preview_fixed_window_g3_ParamLimits

0xc8b5,	// (0x000373f8) popup_preview_fixed_window_g3

0x961b,	// (0x0003415e) popup_toolbar_trans_pane

0xaff7,	// (0x00035b3a) aid_height_set_list_ParamLimits

0xb008,	// (0x00035b4b) aid_size_parent_ParamLimits

0x90b8,	// (0x00033bfb) list_highlight_pane_cp2_ParamLimits

0xb152,	// (0x00035c95) set_content_pane_g1_ParamLimits

0xb25b,	// (0x00035d9e) list_single_image_pane_ParamLimits

0xb25b,	// (0x00035d9e) list_single_image_pane

0xcdc1,	// (0x00037904) aid_size_cell_image_ParamLimits

0xcdc1,	// (0x00037904) aid_size_cell_image

0xcdce,	// (0x00037911) grid_single_image_pane_ParamLimits

0xcdce,	// (0x00037911) grid_single_image_pane

0x80ee,	// (0x00032c31) list_single_image_pane_g1_ParamLimits

0x80ee,	// (0x00032c31) list_single_image_pane_g1

0x80fa,	// (0x00032c3d) list_single_image_pane_g2_ParamLimits

0x80fa,	// (0x00032c3d) list_single_image_pane_g2

0x0001,

0xfc5e,	// (0x0003a7a1) list_single_image_pane_g_ParamLimits

0xfc5e,	// (0x0003a7a1) list_single_image_pane_g

0xcddc,	// (0x0003791f) list_single_image_pane_t1_ParamLimits

0xcddc,	// (0x0003791f) list_single_image_pane_t1

0xcdf2,	// (0x00037935) cell_image_list_pane_ParamLimits

0xcdf2,	// (0x00037935) cell_image_list_pane

0xce08,	// (0x0003794b) cell_image_list_pane_g1

0xce11,	// (0x00037954) cell_image_list_pane_g2

0x0001,

0xfc63,	// (0x0003a7a6) cell_image_list_pane_g

0xce1a,	// (0x0003795d) aid_size_cell_tb_trans_pane

0x80d4,	// (0x00032c17) bg_tb_trans_pane

0xce2c,	// (0x0003796f) grid_tb_trans_pane

0x9c00,	// (0x00034743) bg_tb_trans_pane_g1

0x9c10,	// (0x00034753) bg_tb_trans_pane_g2

0x9c08,	// (0x0003474b) bg_tb_trans_pane_g3

0x9c20,	// (0x00034763) bg_tb_trans_pane_g4

0x9c18,	// (0x0003475b) bg_tb_trans_pane_g5

0x9c40,	// (0x00034783) bg_tb_trans_pane_g6

0x9c38,	// (0x0003477b) bg_tb_trans_pane_g7

0x9c28,	// (0x0003476b) bg_tb_trans_pane_g8

0x9c30,	// (0x00034773) bg_tb_trans_pane_g9

0x0008,

0xfc68,	// (0x0003a7ab) bg_tb_trans_pane_g

0xce40,	// (0x00037983) cell_toolbar_trans_pane_ParamLimits

0xce40,	// (0x00037983) cell_toolbar_trans_pane

0xc244,	// (0x00036d87) cell_toolbar_trans_pane_g1

0xbe23,	// (0x00036966) list_form2_midp_pane_t1

0xbe31,	// (0x00036974) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0003a648) list_form2_midp_pane_t

0xbe3f,	// (0x00036982) scroll_pane_cp51_ParamLimits

0xc006,	// (0x00036b49) form2_midp_wait_pane_g1

0xc00f,	// (0x00036b52) form2_midp_wait_pane_g2

0xc018,	// (0x00036b5b) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0003a65d) form2_midp_wait_pane_g

0x72c4,	// (0x00031e07) list_highlight_pane_cp21_ParamLimits

0xc05c,	// (0x00036b9f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc06b,	// (0x00036bae) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb214,	// (0x00035d57) list_single_2graphic_im_pane_ParamLimits

0xb214,	// (0x00035d57) list_single_2graphic_im_pane

0xce66,	// (0x000379a9) list_single_2graphic_im_pane_g1_ParamLimits

0xce66,	// (0x000379a9) list_single_2graphic_im_pane_g1

0xce77,	// (0x000379ba) list_single_2graphic_im_pane_g2_ParamLimits

0xce77,	// (0x000379ba) list_single_2graphic_im_pane_g2

0xce83,	// (0x000379c6) list_single_2graphic_im_pane_g3_ParamLimits

0xce83,	// (0x000379c6) list_single_2graphic_im_pane_g3

0x0003,

0xfc7b,	// (0x0003a7be) list_single_2graphic_im_pane_g_ParamLimits

0xfc7b,	// (0x0003a7be) list_single_2graphic_im_pane_g

0xcea3,	// (0x000379e6) list_single_2graphic_im_pane_t1_ParamLimits

0xcea3,	// (0x000379e6) list_single_2graphic_im_pane_t1

0xc8c1,	// (0x00037404) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8c1,	// (0x00037404) list_single_graphic_2heading_pane_fp

0x7967,	// (0x000324aa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7967,	// (0x000324aa) list_single_graphic_2heading_pane_fp_g1

0xc8da,	// (0x0003741d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8da,	// (0x0003741d) list_single_graphic_2heading_pane_fp_g2

0x7930,	// (0x00032473) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7930,	// (0x00032473) list_single_graphic_2heading_pane_fp_g3

0x793c,	// (0x0003247f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x793c,	// (0x0003247f) list_single_graphic_2heading_pane_fp_g4

0xc8e6,	// (0x00037429) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8e6,	// (0x00037429) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba2,	// (0x0003a6e5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0003a6e5) list_single_graphic_2heading_pane_fp_g

0x7b34,	// (0x00032677) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7b34,	// (0x00032677) list_single_graphic_2heading_pane_fp_t1

0x799f,	// (0x000324e2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x799f,	// (0x000324e2) list_single_graphic_2heading_pane_fp_t2

0x7b4a,	// (0x0003268d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7b4a,	// (0x0003268d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc84,	// (0x0003a7c7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc84,	// (0x0003a7c7) list_single_graphic_2heading_pane_fp_t

0xc2e4,	// (0x00036e27) fep_hwr_write_pane_g5_ParamLimits

0xc2e4,	// (0x00036e27) fep_hwr_write_pane_g5

0xc2f0,	// (0x00036e33) fep_hwr_write_pane_g6_ParamLimits

0xc2f0,	// (0x00036e33) fep_hwr_write_pane_g6

0xcb96,	// (0x000376d9) eswt_shell_pane_ParamLimits

0x9cf2,	// (0x00034835) bg_popup_window_pane_cp18_ParamLimits

0xaf4e,	// (0x00035a91) heading_pane_cp70

0xccce,	// (0x00037811) popup_eswt_tasktip_window_t1_ParamLimits

0x974e,	// (0x00034291) aid_touch_tab_arrow_left

0x975d,	// (0x000342a0) aid_touch_tab_arrow_right

0x720c,	// (0x00031d4f) title_pane_g3_ParamLimits

0x720c,	// (0x00031d4f) title_pane_g3

0x8093,	// (0x00032bd6) set_value_pane_g1

0x961b,	// (0x0003415e) popup_toolbar_trans_pane_ParamLimits

0xce1a,	// (0x0003795d) aid_size_cell_tb_trans_pane_ParamLimits

0x80d4,	// (0x00032c17) bg_tb_trans_pane_ParamLimits

0xce2c,	// (0x0003796f) grid_tb_trans_pane_ParamLimits

0x754e,	// (0x00032091) cont_note_pane_ParamLimits

0x754e,	// (0x00032091) cont_note_pane

0x7e45,	// (0x00032988) cont_snote2_single_text_pane_ParamLimits

0x7e45,	// (0x00032988) cont_snote2_single_text_pane

0x7e45,	// (0x00032988) cont_snote2_single_graphic_pane_ParamLimits

0x7e45,	// (0x00032988) cont_snote2_single_graphic_pane

0xa275,	// (0x00034db8) cont_note_wait_pane_ParamLimits

0xa275,	// (0x00034db8) cont_note_wait_pane

0xa275,	// (0x00034db8) cont_note_image_pane_ParamLimits

0xa275,	// (0x00034db8) cont_note_image_pane

0xced4,	// (0x00037a17) popup_note2_window_g1_ParamLimits

0xced4,	// (0x00037a17) popup_note2_window_g1

0xcf05,	// (0x00037a48) popup_note2_window_t1_ParamLimits

0xcf05,	// (0x00037a48) popup_note2_window_t1

0xcf4a,	// (0x00037a8d) popup_note2_window_t2_ParamLimits

0xcf4a,	// (0x00037a8d) popup_note2_window_t2

0xcf8f,	// (0x00037ad2) popup_note2_window_t3_ParamLimits

0xcf8f,	// (0x00037ad2) popup_note2_window_t3

0xcfd4,	// (0x00037b17) popup_note2_window_t4_ParamLimits

0xcfd4,	// (0x00037b17) popup_note2_window_t4

0x75d2,	// (0x00032115) popup_note2_window_t5_ParamLimits

0x75d2,	// (0x00032115) popup_note2_window_t5

0x0004,

0xfc90,	// (0x0003a7d3) popup_note2_window_t_ParamLimits

0xfc90,	// (0x0003a7d3) popup_note2_window_t

0xd003,	// (0x00037b46) popup_note2_image_window_g1_ParamLimits

0xd003,	// (0x00037b46) popup_note2_image_window_g1

0xd00f,	// (0x00037b52) popup_note2_image_window_g2_ParamLimits

0xd00f,	// (0x00037b52) popup_note2_image_window_g2

0x0001,

0xfc9b,	// (0x0003a7de) popup_note2_image_window_g_ParamLimits

0xfc9b,	// (0x0003a7de) popup_note2_image_window_g

0xd021,	// (0x00037b64) popup_note2_image_window_t1_ParamLimits

0xd021,	// (0x00037b64) popup_note2_image_window_t1

0xd039,	// (0x00037b7c) popup_note2_image_window_t2_ParamLimits

0xd039,	// (0x00037b7c) popup_note2_image_window_t2

0xd051,	// (0x00037b94) popup_note2_image_window_t3_ParamLimits

0xd051,	// (0x00037b94) popup_note2_image_window_t3

0x0002,

0xfca0,	// (0x0003a7e3) popup_note2_image_window_t_ParamLimits

0xfca0,	// (0x0003a7e3) popup_note2_image_window_t

0xa283,	// (0x00034dc6) popup_note2_wait_window_g1_ParamLimits

0xa283,	// (0x00034dc6) popup_note2_wait_window_g1

0xd06d,	// (0x00037bb0) popup_note2_wait_window_g2_ParamLimits

0xd06d,	// (0x00037bb0) popup_note2_wait_window_g2

0xa29b,	// (0x00034dde) popup_note2_wait_window_g3_ParamLimits

0xa29b,	// (0x00034dde) popup_note2_wait_window_g3

0x0002,

0xfca7,	// (0x0003a7ea) popup_note2_wait_window_g_ParamLimits

0xfca7,	// (0x0003a7ea) popup_note2_wait_window_g

0xd079,	// (0x00037bbc) popup_note2_wait_window_t1_ParamLimits

0xd079,	// (0x00037bbc) popup_note2_wait_window_t1

0xd097,	// (0x00037bda) popup_note2_wait_window_t2_ParamLimits

0xd097,	// (0x00037bda) popup_note2_wait_window_t2

0xd0b5,	// (0x00037bf8) popup_note2_wait_window_t3_ParamLimits

0xd0b5,	// (0x00037bf8) popup_note2_wait_window_t3

0xd0c7,	// (0x00037c0a) popup_note2_wait_window_t4_ParamLimits

0xd0c7,	// (0x00037c0a) popup_note2_wait_window_t4

0x0003,

0xfcae,	// (0x0003a7f1) popup_note2_wait_window_t_ParamLimits

0xfcae,	// (0x0003a7f1) popup_note2_wait_window_t

0xd0d9,	// (0x00037c1c) wait_bar2_pane_ParamLimits

0xd0d9,	// (0x00037c1c) wait_bar2_pane

0xd0f1,	// (0x00037c34) popup_snote2_single_text_window_g1_ParamLimits

0xd0f1,	// (0x00037c34) popup_snote2_single_text_window_g1

0xd119,	// (0x00037c5c) popup_snote2_single_text_window_t1_ParamLimits

0xd119,	// (0x00037c5c) popup_snote2_single_text_window_t1

0xd165,	// (0x00037ca8) popup_snote2_single_text_window_t2_ParamLimits

0xd165,	// (0x00037ca8) popup_snote2_single_text_window_t2

0xd1b1,	// (0x00037cf4) popup_snote2_single_text_window_t3_ParamLimits

0xd1b1,	// (0x00037cf4) popup_snote2_single_text_window_t3

0xd1f2,	// (0x00037d35) popup_snote2_single_text_window_t4_ParamLimits

0xd1f2,	// (0x00037d35) popup_snote2_single_text_window_t4

0xd228,	// (0x00037d6b) popup_snote2_single_text_window_t5_ParamLimits

0xd228,	// (0x00037d6b) popup_snote2_single_text_window_t5

0x0004,

0xfcb7,	// (0x0003a7fa) popup_snote2_single_text_window_t_ParamLimits

0xfcb7,	// (0x0003a7fa) popup_snote2_single_text_window_t

0xd253,	// (0x00037d96) popup_snote2_single_graphic_window_g1_ParamLimits

0xd253,	// (0x00037d96) popup_snote2_single_graphic_window_g1

0xd27b,	// (0x00037dbe) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27b,	// (0x00037dbe) popup_snote2_single_graphic_window_g2

0x0001,

0xfcc2,	// (0x0003a805) popup_snote2_single_graphic_window_g_ParamLimits

0xfcc2,	// (0x0003a805) popup_snote2_single_graphic_window_g

0xd2a3,	// (0x00037de6) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a3,	// (0x00037de6) popup_snote2_single_graphic_window_t1

0xd2ef,	// (0x00037e32) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2ef,	// (0x00037e32) popup_snote2_single_graphic_window_t2

0xd1b1,	// (0x00037cf4) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b1,	// (0x00037cf4) popup_snote2_single_graphic_window_t3

0xd1f2,	// (0x00037d35) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f2,	// (0x00037d35) popup_snote2_single_graphic_window_t4

0xd228,	// (0x00037d6b) popup_snote2_single_graphic_window_t5_ParamLimits

0xd228,	// (0x00037d6b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcc7,	// (0x0003a80a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcc7,	// (0x0003a80a) popup_snote2_single_graphic_window_t

0xbce9,	// (0x0003682c) clock_nsta_pane_cp2_t1

0xbce9,	// (0x0003682c) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0003a61e) clock_nsta_pane_cp2_t

0x5635,	// (0x00030178) form_field_data_wide_pane_g1_ParamLimits

0x80ee,	// (0x00032c31) form_field_data_wide_pane_g2_ParamLimits

0x80ee,	// (0x00032c31) form_field_data_wide_pane_g2

0x80fa,	// (0x00032c3d) form_field_data_wide_pane_g3_ParamLimits

0x80fa,	// (0x00032c3d) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0003a202) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0003a202) form_field_data_wide_pane_g

0xbbf5,	// (0x00036738) grid_touch_3_pane_ParamLimits

0xbbf5,	// (0x00036738) grid_touch_3_pane

0xd33b,	// (0x00037e7e) cell_touch_3_pane_ParamLimits

0xd33b,	// (0x00037e7e) cell_touch_3_pane

0xc244,	// (0x00036d87) cell_touch_3_pane_g1

0xc244,	// (0x00036d87) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0003a6a3) cell_touch_3_pane_g

0x7604,	// (0x00032147) cont_query_data_pane

0x760c,	// (0x0003214f) cont_query_data_pane_cp1

0xd36e,	// (0x00037eb1) button_value_adjust_pane_cp7

0xd376,	// (0x00037eb9) query_popup_pane_cp3

0x880e,	// (0x00033351) bg_popup_sub_pane_cp22_ParamLimits

0x59f5,	// (0x00030538) navi_navi_volume_pane_cp2

0x5a10,	// (0x00030553) popup_side_volume_key_window_g2

0x5a1f,	// (0x00030562) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0003a294) popup_side_volume_key_window_g

0x5a3c,	// (0x0003057f) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0003a29b) popup_side_volume_key_window_t

0x8ac9,	// (0x0003360c) popup_side_volume_key_window_ParamLimits

0x522d,	// (0x0002fd70) list_double_graphic_pane_g4_ParamLimits

0x522d,	// (0x0002fd70) list_double_graphic_pane_g4

0xb243,	// (0x00035d86) list_single_2heading_msg_pane_ParamLimits

0xb243,	// (0x00035d86) list_single_2heading_msg_pane

0x7b6a,	// (0x000326ad) list_single_2heading_msg_pane_g1_ParamLimits

0x7b6a,	// (0x000326ad) list_single_2heading_msg_pane_g1

0x4206,	// (0x0002ed49) list_single_2heading_msg_pane_g2_ParamLimits

0x4206,	// (0x0002ed49) list_single_2heading_msg_pane_g2

0x7b76,	// (0x000326b9) list_single_2heading_msg_pane_g3_ParamLimits

0x7b76,	// (0x000326b9) list_single_2heading_msg_pane_g3

0x7b82,	// (0x000326c5) list_single_2heading_msg_pane_g4_ParamLimits

0x7b82,	// (0x000326c5) list_single_2heading_msg_pane_g4

0x0003,

0xfcd2,	// (0x0003a815) list_single_2heading_msg_pane_g_ParamLimits

0xfcd2,	// (0x0003a815) list_single_2heading_msg_pane_g

0x7b9a,	// (0x000326dd) list_single_2heading_msg_pane_t1_ParamLimits

0x7b9a,	// (0x000326dd) list_single_2heading_msg_pane_t1

0x7bc2,	// (0x00032705) list_single_2heading_msg_pane_t2_ParamLimits

0x7bc2,	// (0x00032705) list_single_2heading_msg_pane_t2

0x7bf6,	// (0x00032739) list_single_2heading_msg_pane_t3_ParamLimits

0x7bf6,	// (0x00032739) list_single_2heading_msg_pane_t3

0x7c2f,	// (0x00032772) list_single_2heading_msg_pane_t4_ParamLimits

0x7c2f,	// (0x00032772) list_single_2heading_msg_pane_t4

0x0003,

0xfcdb,	// (0x0003a81e) list_single_2heading_msg_pane_t_ParamLimits

0xfcdb,	// (0x0003a81e) list_single_2heading_msg_pane_t

0x7218,	// (0x00031d5b) title_pane_g4_ParamLimits

0x7218,	// (0x00031d5b) title_pane_g4

0x5801,	// (0x00030344) title_pane_stacon_g3_ParamLimits

0x5801,	// (0x00030344) title_pane_stacon_g3

0xce97,	// (0x000379da) list_single_2graphic_im_pane_g4_ParamLimits

0xce97,	// (0x000379da) list_single_2graphic_im_pane_g4

0xaceb,	// (0x0003582e) popup_side_volume_key_window_cp

0xb561,	// (0x000360a4) main_idle_act2_pane_t1

0x5ea0,	// (0x000309e3) toolbar_button_pane_g10

0x803d,	// (0x00032b80) popup_toolbar_window_cp1

0xbcda,	// (0x0003681d) clock_nsta_pane_cp_t1

0xbcda,	// (0x0003681d) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0003a619) clock_nsta_pane_cp_t

0x59f5,	// (0x00030538) navi_navi_volume_pane_cp2_ParamLimits

0x5a04,	// (0x00030547) popup_side_volume_key_window_g1_ParamLimits

0x5a10,	// (0x00030553) popup_side_volume_key_window_g2_ParamLimits

0x5a1f,	// (0x00030562) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0003a294) popup_side_volume_key_window_g_ParamLimits

0x6501,	// (0x00031044) fep_hwr_aid_pane

0x65aa,	// (0x000310ed) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2b4,	// (0x00036df7) fep_hwr_top_pane_g1_ParamLimits

0xc2c6,	// (0x00036e09) fep_hwr_top_pane_g2_ParamLimits

0x65ca,	// (0x0003110d) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0003a66e) fep_hwr_top_pane_g_ParamLimits

0x65df,	// (0x00031122) fep_hwr_top_text_pane_ParamLimits

0xaaa0,	// (0x000355e3) aid_touch_tab_arrow_arrow_2

0xaaa9,	// (0x000355ec) aid_touch_tab_arrow_left_2

0x6515,	// (0x00031058) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x654c,	// (0x0003108f) fep_hwr_prediction_pane

0xc41c,	// (0x00036f5f) fep_vkb_prediction_pane

0xc522,	// (0x00037065) fep_vkb_side_pane_g3_ParamLimits

0xc522,	// (0x00037065) fep_vkb_side_pane_g3

0x676e,	// (0x000312b1) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67df,	// (0x00031322) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67ec,	// (0x0003132f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbda,	// (0x0003a71d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x691b,	// (0x0003145e) fep_hwr_prediction_pane_g1

0x6925,	// (0x00031468) fep_hwr_prediction_pane_g2

0x692d,	// (0x00031470) fep_hwr_prediction_pane_g3

0x6935,	// (0x00031478) fep_hwr_prediction_pane_g4

0x0003,

0xfce4,	// (0x0003a827) fep_hwr_prediction_pane_g

0xd39d,	// (0x00037ee0) fep_vkb_prediction_pane_g1

0xd3a7,	// (0x00037eea) fep_vkb_prediction_pane_g2

0xd3af,	// (0x00037ef2) fep_vkb_prediction_pane_g3

0xd3b7,	// (0x00037efa) fep_vkb_prediction_pane_g4

0x0003,

0xfced,	// (0x0003a830) fep_vkb_prediction_pane_g

0x6245,	// (0x00030d88) slider_set_pane_g3

0x6259,	// (0x00030d9c) slider_set_pane_g4

0x6271,	// (0x00030db4) slider_set_pane_g5

0x6245,	// (0x00030d88) slider_set_pane_g6

0x6287,	// (0x00030dca) slider_set_pane_g7

0xb199,	// (0x00035cdc) slider_form_pane_g3

0xb1a2,	// (0x00035ce5) slider_form_pane_g4

0xb1aa,	// (0x00035ced) slider_form_pane_g5

0xb199,	// (0x00035cdc) slider_form_pane_g6

0xb1b2,	// (0x00035cf5) slider_form_pane_g7

0xb82f,	// (0x00036372) slider_set_pane_vc_g3

0xb838,	// (0x0003637b) slider_set_pane_vc_g4

0xb841,	// (0x00036384) slider_set_pane_vc_g5

0xb82f,	// (0x00036372) slider_set_pane_vc_g6

0xb84a,	// (0x0003638d) slider_set_pane_vc_g7

0xb82f,	// (0x00036372) slider_form_pane_vc_g1

0xb838,	// (0x0003637b) slider_form_pane_vc_g2

0xb841,	// (0x00036384) slider_form_pane_vc_g3

0xb82f,	// (0x00036372) slider_form_pane_vc_g4

0xb9ff,	// (0x00036542) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0003a5ff) slider_form_pane_vc_g

0x71d0,	// (0x00031d13) main_idle_act3_pane

0xd3bf,	// (0x00037f02) ai3_links_pane

0xd3c8,	// (0x00037f0b) popup_ai3_data_window_ParamLimits

0xd3c8,	// (0x00037f0b) popup_ai3_data_window

0x71d0,	// (0x00031d13) grid_ai3_links_pane

0xd3e6,	// (0x00037f29) cell_ai3_links_pane_ParamLimits

0xd3e6,	// (0x00037f29) cell_ai3_links_pane

0xd400,	// (0x00037f43) bg_popup_sub_pane_cp11

0xd40d,	// (0x00037f50) cell_ai3_links_pane_g1

0x71d0,	// (0x00031d13) bg_popup_sub_pane_cp12

0xd432,	// (0x00037f75) heading_ai3_data_pane

0xd43a,	// (0x00037f7d) list_ai3_gene_pane

0xd446,	// (0x00037f89) popup_ai3_data_window_g1

0xd44e,	// (0x00037f91) heading_ai3_data_pane_g1

0xd456,	// (0x00037f99) heading_ai3_data_pane_t1

0xd464,	// (0x00037fa7) list_double_ai3_gene_pane_ParamLimits

0xd464,	// (0x00037fa7) list_double_ai3_gene_pane

0xd471,	// (0x00037fb4) list_single_ai3_gene_pane_ParamLimits

0xd471,	// (0x00037fb4) list_single_ai3_gene_pane

0xc209,	// (0x00036d4c) list_highlight_pane_cp7_ParamLimits

0xc209,	// (0x00036d4c) list_highlight_pane_cp7

0xd47e,	// (0x00037fc1) list_single_a13_gene_pane_t1_ParamLimits

0xd47e,	// (0x00037fc1) list_single_a13_gene_pane_t1

0xd495,	// (0x00037fd8) list_single_ai3_gene_pane_g1

0xd49e,	// (0x00037fe1) list_single_ai3_gene_pane_g2

0x0001,

0xfcf6,	// (0x0003a839) list_single_ai3_gene_pane_g

0xd4a6,	// (0x00037fe9) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a6,	// (0x00037fe9) list_double_ai3_gene_pane_g1

0xd4b2,	// (0x00037ff5) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b2,	// (0x00037ff5) list_double_ai3_gene_pane_t1

0xd4ce,	// (0x00038011) list_double_ai3_gene_pane_t2_ParamLimits

0xd4ce,	// (0x00038011) list_double_ai3_gene_pane_t2

0xd4e3,	// (0x00038026) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e3,	// (0x00038026) list_double_ai3_gene_pane_t3

0x0002,

0xfcfb,	// (0x0003a83e) list_double_ai3_gene_pane_t_ParamLimits

0xfcfb,	// (0x0003a83e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b60,	// (0x000326a3) aid_size_min_col_2

0xd387,	// (0x00037eca) aid_size_min_msg_ParamLimits

0xd387,	// (0x00037eca) aid_size_min_msg

0xc62e,	// (0x00037171) fep_vkb_top_text_pane_g2_ParamLimits

0xc62e,	// (0x00037171) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0003a69e) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0003a69e) fep_vkb_top_text_pane_g

0x71d0,	// (0x00031d13) main_hc_apps_shell_pane

0xd500,	// (0x00038043) grid_hc_apps_pane_ParamLimits

0xd500,	// (0x00038043) grid_hc_apps_pane

0xd50f,	// (0x00038052) list_hc_apps_pane

0xd517,	// (0x0003805a) scroll_pane_cp37_ParamLimits

0xd517,	// (0x0003805a) scroll_pane_cp37

0xd523,	// (0x00038066) cell_hc_apps_pane_ParamLimits

0xd523,	// (0x00038066) cell_hc_apps_pane

0xd5db,	// (0x0003811e) cell_hc_apps_pane_g1_ParamLimits

0xd5db,	// (0x0003811e) cell_hc_apps_pane_g1

0xd60c,	// (0x0003814f) cell_hc_apps_pane_g2_ParamLimits

0xd60c,	// (0x0003814f) cell_hc_apps_pane_g2

0xd628,	// (0x0003816b) cell_hc_apps_pane_g3_ParamLimits

0xd628,	// (0x0003816b) cell_hc_apps_pane_g3

0x0002,

0xfd02,	// (0x0003a845) cell_hc_apps_pane_g_ParamLimits

0xfd02,	// (0x0003a845) cell_hc_apps_pane_g

0xd64a,	// (0x0003818d) cell_hc_apps_pane_t1_ParamLimits

0xd64a,	// (0x0003818d) cell_hc_apps_pane_t1

0x754e,	// (0x00032091) grid_highlight_pane_cp10_ParamLimits

0x754e,	// (0x00032091) grid_highlight_pane_cp10

0xd68a,	// (0x000381cd) list_single_hc_apps_pane_ParamLimits

0xd68a,	// (0x000381cd) list_single_hc_apps_pane

0xd6c9,	// (0x0003820c) list_single_hc_apps_pane_g1

0x7c54,	// (0x00032797) list_single_hc_apps_pane_g2

0x0001,

0xfd09,	// (0x0003a84c) list_single_hc_apps_pane_g

0x7c6d,	// (0x000327b0) list_single_hc_apps_pane_g2_copy1

0x7c89,	// (0x000327cc) list_single_hc_apps_pane_t1

0x72c4,	// (0x00031e07) bg_set_opt_pane_cp_ParamLimits

0x5004,	// (0x0002fb47) setting_slider_pane_t1_ParamLimits

0x501a,	// (0x0002fb5d) setting_slider_pane_t2_ParamLimits

0x5034,	// (0x0002fb77) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0003a0e5) setting_slider_pane_t_ParamLimits

0x504c,	// (0x0002fb8f) slider_set_pane_ParamLimits

0x5d32,	// (0x00030875) control_pane_g5_ParamLimits

0x5d32,	// (0x00030875) control_pane_g5

0xafba,	// (0x00035afd) slider_set_pane_g1_ParamLimits

0x6239,	// (0x00030d7c) slider_set_pane_g2_ParamLimits

0x6245,	// (0x00030d88) slider_set_pane_g3_ParamLimits

0x6259,	// (0x00030d9c) slider_set_pane_g4_ParamLimits

0x6271,	// (0x00030db4) slider_set_pane_g5_ParamLimits

0x6245,	// (0x00030d88) slider_set_pane_g6_ParamLimits

0x6287,	// (0x00030dca) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0003a4e0) slider_set_pane_g_ParamLimits

0x8bae,	// (0x000336f1) navi_icon_text_pane_ParamLimits

0x970d,	// (0x00034250) aid_fill_nsta_2_ParamLimits

0x974e,	// (0x00034291) aid_touch_tab_arrow_left_ParamLimits

0x975d,	// (0x000342a0) aid_touch_tab_arrow_right_ParamLimits

0x97ca,	// (0x0003430d) clock_nsta_pane_ParamLimits

0xaa7c,	// (0x000355bf) navi_icon_pane_g1_ParamLimits

0xaa8b,	// (0x000355ce) navi_text_pane_t1_ParamLimits

0xbdf7,	// (0x0003693a) navi_icon_text_pane_g1_ParamLimits

0xbe06,	// (0x00036949) navi_icon_text_pane_t1_ParamLimits

0xd6c9,	// (0x0003820c) list_single_hc_apps_pane_g1_ParamLimits

0x7c54,	// (0x00032797) list_single_hc_apps_pane_g2_ParamLimits

0xfd09,	// (0x0003a84c) list_single_hc_apps_pane_g_ParamLimits

0x7c6d,	// (0x000327b0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7c89,	// (0x000327cc) list_single_hc_apps_pane_t1_ParamLimits

0x4f0e,	// (0x0002fa51) popup_toolbar2_fixed_window_ParamLimits

0x4f0e,	// (0x0002fa51) popup_toolbar2_fixed_window

0x9611,	// (0x00034154) popup_toolbar2_float_window

0x71d0,	// (0x00031d13) bg_popup_sub_pane_cp27

0xd6e2,	// (0x00038225) grid_toolbar2_float_pane

0x71d0,	// (0x00031d13) bg_popup_sub_pane_cp26

0xd6e2,	// (0x00038225) grid_toolbar2_fixed_pane

0xd6ea,	// (0x0003822d) cell_toolbar2_fixed_pane_ParamLimits

0xd6ea,	// (0x0003822d) cell_toolbar2_fixed_pane

0xd6fa,	// (0x0003823d) cell_toolbar2_fixed_pane_g1

0xd703,	// (0x00038246) toolbar2_fixed_button_pane

0x9c00,	// (0x00034743) toolbar2_fixed_button_pane_g1

0x9c10,	// (0x00034753) toolbar2_fixed_button_pane_g2

0x9c08,	// (0x0003474b) toolbar2_fixed_button_pane_g3

0x9c20,	// (0x00034763) toolbar2_fixed_button_pane_g4

0x9c18,	// (0x0003475b) toolbar2_fixed_button_pane_g5

0x9c28,	// (0x0003476b) toolbar2_fixed_button_pane_g6

0x9c30,	// (0x00034773) toolbar2_fixed_button_pane_g7

0x9c40,	// (0x00034783) toolbar2_fixed_button_pane_g8

0x9c38,	// (0x0003477b) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0003a3e2) toolbar2_fixed_button_pane_g

0xd70b,	// (0x0003824e) cell_toolbar2_float_pane_ParamLimits

0xd70b,	// (0x0003824e) cell_toolbar2_float_pane

0xd71c,	// (0x0003825f) cell_toolbar2_float_pane_g1

0xd703,	// (0x00038246) toolbar2_fixed_button_pane_cp

0xc38a,	// (0x00036ecd) fep_vkb_accented_list_pane_ParamLimits

0xc38a,	// (0x00036ecd) fep_vkb_accented_list_pane

0x674e,	// (0x00031291) bg_popup_fep_shadow_pane_g9

0x8d32,	// (0x00033875) bg_popup_fep_shadow_pane_cp3

0x823d,	// (0x00032d80) list_accented_list_pane

0xd725,	// (0x00038268) list_single_accented_list_pane_ParamLimits

0xd725,	// (0x00038268) list_single_accented_list_pane

0x8d32,	// (0x00033875) list_highlight_pane_cp10

0xd736,	// (0x00038279) list_single_accented_list_pane_t1

0x9557,	// (0x0003409a) popup_slider_window_ParamLimits

0x9557,	// (0x0003409a) popup_slider_window

0xd37e,	// (0x00037ec1) aid_indentation_list_msg

0xd802,	// (0x00038345) bg_popup_window_pane_cp19

0xd870,	// (0x000383b3) popup_slider_window_g1

0xd88c,	// (0x000383cf) popup_slider_window_g2

0xd8a8,	// (0x000383eb) popup_slider_window_g3

0x0005,

0xfd0e,	// (0x0003a851) popup_slider_window_g

0xd904,	// (0x00038447) popup_slider_window_t1

0xd978,	// (0x000384bb) small_volume_slider_vertical_pane

0xc244,	// (0x00036d87) small_volume_slider_vertical_pane_g1

0xc244,	// (0x00036d87) small_volume_slider_vertical_pane_g2

0xd994,	// (0x000384d7) small_volume_slider_vertical_pane_g3

0x0002,

0xfd20,	// (0x0003a863) small_volume_slider_vertical_pane_g

0x4cbc,	// (0x0002f7ff) area_side_right_pane_ParamLimits

0x4cbc,	// (0x0002f7ff) area_side_right_pane

0x693d,	// (0x00031480) aid_size_side_button_ParamLimits

0x693d,	// (0x00031480) aid_size_side_button

0x6951,	// (0x00031494) grid_sctrl_middle_pane_ParamLimits

0x6951,	// (0x00031494) grid_sctrl_middle_pane

0x6971,	// (0x000314b4) sctrl_sk_bottom_pane

0x6982,	// (0x000314c5) sctrl_sk_top_pane

0x6994,	// (0x000314d7) aid_touch_sctrl_top

0x69a1,	// (0x000314e4) bg_sctrl_sk_pane_ParamLimits

0x69a1,	// (0x000314e4) bg_sctrl_sk_pane

0x69af,	// (0x000314f2) sctrl_sk_top_pane_g1

0x69bc,	// (0x000314ff) sctrl_sk_top_pane_t1

0x6994,	// (0x000314d7) aid_touch_sctrl_bottom

0x69a1,	// (0x000314e4) bg_sctrl_sk_pane_cp_ParamLimits

0x69a1,	// (0x000314e4) bg_sctrl_sk_pane_cp

0x69d7,	// (0x0003151a) sctrl_sk_bottom_pane_g1

0x69bc,	// (0x000314ff) sctrl_sk_bottom_pane_t1

0x69e0,	// (0x00031523) cell_sctrl_middle_pane_ParamLimits

0x69e0,	// (0x00031523) cell_sctrl_middle_pane

0x69fd,	// (0x00031540) aid_touch_sctrl_middle_ParamLimits

0x69fd,	// (0x00031540) aid_touch_sctrl_middle

0x6a0f,	// (0x00031552) bg_sctrl_middle_pane_ParamLimits

0x6a0f,	// (0x00031552) bg_sctrl_middle_pane

0x676e,	// (0x000312b1) cell_sctrl_middle_pane_g1_ParamLimits

0x676e,	// (0x000312b1) cell_sctrl_middle_pane_g1

0x6a1d,	// (0x00031560) cell_sctrl_middle_pane_g2_ParamLimits

0x6a1d,	// (0x00031560) cell_sctrl_middle_pane_g2

0x0001,

0xfd2c,	// (0x0003a86f) cell_sctrl_middle_pane_g_ParamLimits

0xfd2c,	// (0x0003a86f) cell_sctrl_middle_pane_g

0x9c00,	// (0x00034743) bg_sctrl_middle_pane_g1

0x9c08,	// (0x0003474b) bg_sctrl_middle_pane_g2

0x9c10,	// (0x00034753) bg_sctrl_middle_pane_g3

0x9c18,	// (0x0003475b) bg_sctrl_middle_pane_g4

0x9c20,	// (0x00034763) bg_sctrl_middle_pane_g5

0x9c28,	// (0x0003476b) bg_sctrl_middle_pane_g6

0x9c30,	// (0x00034773) bg_sctrl_middle_pane_g7

0x9c38,	// (0x0003477b) bg_sctrl_middle_pane_g8

0x0007,

0xfd31,	// (0x0003a874) bg_sctrl_middle_pane_g

0x9c40,	// (0x00034783) bg_sctrl_middle_pane_g8_copy1

0x9c00,	// (0x00034743) bg_sctrl_sk_pane_g1

0x9c10,	// (0x00034753) bg_sctrl_sk_pane_g2

0x9c08,	// (0x0003474b) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0003a3e2) bg_sctrl_sk_pane_g

0x8003,	// (0x00032b46) aid_size_touch_scroll_bar

0x9c20,	// (0x00034763) bg_sctrl_sk_pane_g4

0x9c18,	// (0x0003475b) bg_sctrl_sk_pane_g5

0x9c28,	// (0x0003476b) bg_sctrl_sk_pane_g6

0x9c30,	// (0x00034773) bg_sctrl_sk_pane_g7

0x9c40,	// (0x00034783) bg_sctrl_sk_pane_g8

0x9c38,	// (0x0003477b) bg_sctrl_sk_pane_g9

0x9162,	// (0x00033ca5) popup_fep_china_hwr2_fs_candidate_window

0x916c,	// (0x00033caf) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x916c,	// (0x00033caf) popup_fep_china_hwr2_fs_control_window

0x676e,	// (0x000312b1) sctrl_sk_top_pane_g2

0x0001,

0xfd27,	// (0x0003a86a) sctrl_sk_top_pane_g

0xd99d,	// (0x000384e0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99d,	// (0x000384e0) aid_fep_china_hwr2_fs_cell

0xd9b0,	// (0x000384f3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b0,	// (0x000384f3) bg_popup_fep_shadow_pane_cp4

0xd9c9,	// (0x0003850c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9c9,	// (0x0003850c) bg_popup_fep_shadow_pane_cp5

0xd9db,	// (0x0003851e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9db,	// (0x0003851e) popup_fep_china_hwr2_fs_control_bar_grid

0xd9eb,	// (0x0003852e) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f3,	// (0x00038536) aid_fep_china_hwr2_fs_candi_cell

0x71d0,	// (0x00031d13) bg_popup_fep_shadow_pane_cp6

0xd9fd,	// (0x00038540) popup_fep_china_hwr2_fs_candidate_grid

0xda07,	// (0x0003854a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda07,	// (0x0003854a) cell_fep_china_hwr2_fs_funtion_grid

0xc244,	// (0x00036d87) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda1f,	// (0x00038562) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda1f,	// (0x00038562) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2d,	// (0x00038570) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2d,	// (0x00038570) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd42,	// (0x0003a885) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd42,	// (0x0003a885) cell_fep_china_hwr2_fs_funtion_grid_g

0xda43,	// (0x00038586) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda43,	// (0x00038586) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda58,	// (0x0003859b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda58,	// (0x0003859b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd47,	// (0x0003a88a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd47,	// (0x0003a88a) cell_fep_china_hwr2_fs_funtion_grid_t

0xda74,	// (0x000385b7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7c,	// (0x000385bf) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda84,	// (0x000385c7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd4c,	// (0x0003a88f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8c,	// (0x000385cf) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8c,	// (0x000385cf) cell_fep_china_hwr2_fs_candidate_grid

0xdaab,	// (0x000385ee) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab3,	// (0x000385f6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc244,	// (0x00036d87) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc244,	// (0x00036d87) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0003a6a3) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabb,	// (0x000385fe) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97dd,	// (0x00034320) clock_nsta_pane_cp_24_ParamLimits

0x97dd,	// (0x00034320) clock_nsta_pane_cp_24

0x985d,	// (0x000343a0) indicator_nsta_pane_cp_24_ParamLimits

0x985d,	// (0x000343a0) indicator_nsta_pane_cp_24

0xa8f8,	// (0x0003543b) heading_pane_g1

0x0001,

0xf904,	// (0x0003a447) heading_pane_g

0xb3a8,	// (0x00035eeb) grid_sct_catagory_button_pane

0xb3da,	// (0x00035f1d) scroll_pane_cp5_ParamLimits

0xbe4b,	// (0x0003698e) button_value_adjust_pane_cp5_ParamLimits

0xbe4b,	// (0x0003698e) button_value_adjust_pane_cp5

0xbf30,	// (0x00036a73) form2_midp_time_pane_ParamLimits

0xdac9,	// (0x0003860c) cell_sct_catagory_button_pane_ParamLimits

0xdac9,	// (0x0003860c) cell_sct_catagory_button_pane

0xc209,	// (0x00036d4c) bg_button_pane_cp01_ParamLimits

0xc209,	// (0x00036d4c) bg_button_pane_cp01

0xc244,	// (0x00036d87) cell_sct_catagory_button_pane_g1

0x9598,	// (0x000340db) popup_tb_extension_window

0xdadb,	// (0x0003861e) aid_size_cell_ext_ParamLimits

0xdadb,	// (0x0003861e) aid_size_cell_ext

0x754e,	// (0x00032091) bg_tb_trans_pane_cp1_ParamLimits

0x754e,	// (0x00032091) bg_tb_trans_pane_cp1

0xdafb,	// (0x0003863e) grid_tb_ext_pane_ParamLimits

0xdafb,	// (0x0003863e) grid_tb_ext_pane

0xdb2b,	// (0x0003866e) cell_tb_ext_pane_ParamLimits

0xdb2b,	// (0x0003866e) cell_tb_ext_pane

0xdb42,	// (0x00038685) cell_tb_ext_pane_g1_ParamLimits

0xdb42,	// (0x00038685) cell_tb_ext_pane_g1

0xdb5f,	// (0x000386a2) cell_tb_ext_pane_t1

0x754e,	// (0x00032091) list_highlight_pane_cp11_ParamLimits

0x754e,	// (0x00032091) list_highlight_pane_cp11

0x4f2d,	// (0x0002fa70) popup_uni_indicator_window_ParamLimits

0x4f2d,	// (0x0002fa70) popup_uni_indicator_window

0x80d4,	// (0x00032c17) bg_popup_sub_pane_cp14

0xdb7a,	// (0x000386bd) list_uniindi_pane

0xdb86,	// (0x000386c9) uniindi_top_pane

0x754e,	// (0x00032091) bg_uniindi_top_pane

0xdba7,	// (0x000386ea) uniindi_top_pane_g1

0xdbbd,	// (0x00038700) uniindi_top_pane_g2

0x0003,

0xfd53,	// (0x0003a896) uniindi_top_pane_g

0xdbe7,	// (0x0003872a) uniindi_top_pane_t1

0xdc13,	// (0x00038756) list_single_uniindi_pane_ParamLimits

0xdc13,	// (0x00038756) list_single_uniindi_pane

0xc244,	// (0x00036d87) bg_uniindi_top_pane_g1

0xdc25,	// (0x00038768) list_single_uniindi_pane_g1

0xdc38,	// (0x0003877b) list_single_uniindi_pane_t1

0x4d99,	// (0x0002f8dc) control_bg_pane

0xdc5d,	// (0x000387a0) bg_sctrl_sk_pane_cp1

0xdc66,	// (0x000387a9) bg_sctrl_sk_pane_cp2

0xdc6f,	// (0x000387b2) control_bg_pane_g1

0xdc78,	// (0x000387bb) control_bg_pane_g2

0x0001,

0xfd5c,	// (0x0003a89f) control_bg_pane_g

0xbc9f,	// (0x000367e2) cell_indicator_nsta_pane_g1_ParamLimits

0xbcad,	// (0x000367f0) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0003a614) cell_indicator_nsta_pane_g_ParamLimits

0x791d,	// (0x00032460) form2_midp_time_pane_t1_ParamLimits

0x7e45,	// (0x00032988) main_idle_act4_pane_ParamLimits

0x7e45,	// (0x00032988) main_idle_act4_pane

0x9598,	// (0x000340db) popup_tb_extension_window_ParamLimits

0xdb1d,	// (0x00038660) tb_ext_find_pane_ParamLimits

0xdb1d,	// (0x00038660) tb_ext_find_pane

0xdc81,	// (0x000387c4) ai_gene_pane_1_cp1

0x8e7b,	// (0x000339be) ai_gene_pane_2_cp1

0xdc89,	// (0x000387cc) list_single_idle_plugin_calendar_pane

0xdc92,	// (0x000387d5) list_single_idle_plugin_notification_pane

0xdc9b,	// (0x000387de) list_single_idle_plugin_player_pane

0xdca4,	// (0x000387e7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca4,	// (0x000387e7) list_single_idle_plugin_shortcut_pane

0xdcc6,	// (0x00038809) main_idle_act4_pane_t1

0xdcd8,	// (0x0003881b) main_idle_act4_pane_t2

0x0001,

0xfd61,	// (0x0003a8a4) main_idle_act4_pane_t

0xdcea,	// (0x0003882d) middle_sk_idle_act4_pane_ParamLimits

0xdcea,	// (0x0003882d) middle_sk_idle_act4_pane

0xdd00,	// (0x00038843) popup_clock_digital_analogue_window_cp2

0xdd1a,	// (0x0003885d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1a,	// (0x0003885d) shortcut_wheel_idle_act4_pane

0xc244,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g1

0xc244,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g2

0xc244,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g3

0xc244,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g4

0xc244,	// (0x00036d87) shortcut_wheel_idle_act4_pane_g5

0xdd2e,	// (0x00038871) shortcut_wheel_idle_act4_pane_g6

0xdd36,	// (0x00038879) shortcut_wheel_idle_act4_pane_g7

0xdd3e,	// (0x00038881) shortcut_wheel_idle_act4_pane_g8

0xdd46,	// (0x00038889) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd66,	// (0x0003a8a9) shortcut_wheel_idle_act4_pane_g

0xc4ce,	// (0x00037011) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4ce,	// (0x00037011) middle_sk_idle_act4_pane_g1

0xddaa,	// (0x000388ed) middle_sk_idle_act4_pane_g2_ParamLimits

0xddaa,	// (0x000388ed) middle_sk_idle_act4_pane_g2

0x0001,

0xfd89,	// (0x0003a8cc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd89,	// (0x0003a8cc) middle_sk_idle_act4_pane_g

0xddb6,	// (0x000388f9) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb6,	// (0x000388f9) middle_sk_idle_act4_pane_t1

0xddd3,	// (0x00038916) grid_ai_shortcut_pane_ParamLimits

0xddd3,	// (0x00038916) grid_ai_shortcut_pane

0xddec,	// (0x0003892f) list_highlight_pane_cp16_ParamLimits

0xddec,	// (0x0003892f) list_highlight_pane_cp16

0xddf9,	// (0x0003893c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddf9,	// (0x0003893c) list_single_idle_plugin_shortcut_pane_g1

0xde05,	// (0x00038948) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde05,	// (0x00038948) list_single_idle_plugin_shortcut_pane_g2

0xde1f,	// (0x00038962) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde1f,	// (0x00038962) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd8e,	// (0x0003a8d1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd8e,	// (0x0003a8d1) list_single_idle_plugin_shortcut_pane_g

0xde32,	// (0x00038975) cell_ai_shortcut_pane_ParamLimits

0xde32,	// (0x00038975) cell_ai_shortcut_pane

0xde55,	// (0x00038998) cell_ai_shortcut_pane_g1_ParamLimits

0xde55,	// (0x00038998) cell_ai_shortcut_pane_g1

0xdc81,	// (0x000387c4) ai_gene_pane_1_cp2

0xde77,	// (0x000389ba) ai_gene_pane_2_cp2

0xde7f,	// (0x000389c2) list_highlight_pane_cp15

0xde88,	// (0x000389cb) list_single_idle_plugin_calendar_pane_g1

0xde7f,	// (0x000389c2) list_highlight_pane_cp17

0xde90,	// (0x000389d3) list_single_idle_plugin_calendar_pane_g1_copy1

0xde98,	// (0x000389db) list_single_idle_plugin_player_pane_g1

0xb60f,	// (0x00036152) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd95,	// (0x0003a8d8) list_single_idle_plugin_player_pane_g

0xdea0,	// (0x000389e3) list_single_idle_plugin_player_pane_t1

0xdeae,	// (0x000389f1) list_single_idle_plugin_player_pane_t2

0xdebc,	// (0x000389ff) list_single_idle_plugin_player_pane_t3

0xdeca,	// (0x00038a0d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd9a,	// (0x0003a8dd) list_single_idle_plugin_player_pane_t

0xded8,	// (0x00038a1b) wait_bar_pane_cp15

0xdee0,	// (0x00038a23) grid_ai_notification_pane

0xb60f,	// (0x00036152) list_single_idle_plugin_notification_pane_g1

0xdee9,	// (0x00038a2c) cell_ai_notification_pane_ParamLimits

0xdee9,	// (0x00038a2c) cell_ai_notification_pane

0xdef6,	// (0x00038a39) cell_ai_notification_pane_g1

0xdefe,	// (0x00038a41) cell_ai_notification_pane_t1

0xdf0c,	// (0x00038a4f) tb_ext_find_button_pane

0xdf14,	// (0x00038a57) tb_ext_find_pane_g1

0xdf1c,	// (0x00038a5f) tb_ext_find_pane_t1

0x8744,	// (0x00033287) tb_ext_find_button_pane_g1

0xdf2a,	// (0x00038a6d) tb_ext_find_button_pane_g2

0x0001,

0xfda3,	// (0x0003a8e6) tb_ext_find_button_pane_g

0xdcc6,	// (0x00038809) main_idle_act4_pane_t1_ParamLimits

0xdcd8,	// (0x0003881b) main_idle_act4_pane_t2_ParamLimits

0xfd61,	// (0x0003a8a4) main_idle_act4_pane_t_ParamLimits

0xdd00,	// (0x00038843) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd0e,	// (0x00038851) sat_plugin_idle_act4_pane_ParamLimits

0xdd0e,	// (0x00038851) sat_plugin_idle_act4_pane

0xdf33,	// (0x00038a76) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf33,	// (0x00038a76) sat_plugin_idle_act4_pane_t1

0xdf46,	// (0x00038a89) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf46,	// (0x00038a89) sat_plugin_idle_act4_pane_t2

0xdf59,	// (0x00038a9c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf59,	// (0x00038a9c) sat_plugin_idle_act4_pane_t3

0xdf6c,	// (0x00038aaf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6c,	// (0x00038aaf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda8,	// (0x0003a8eb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda8,	// (0x0003a8eb) sat_plugin_idle_act4_pane_t

0x4e5e,	// (0x0002f9a1) popup_battery_window_ParamLimits

0x4e5e,	// (0x0002f9a1) popup_battery_window

0x754e,	// (0x00032091) bg_popup_sub_pane_cp25_ParamLimits

0x754e,	// (0x00032091) bg_popup_sub_pane_cp25

0xdf7f,	// (0x00038ac2) popup_battery_window_g1_ParamLimits

0xdf7f,	// (0x00038ac2) popup_battery_window_g1

0xdf8b,	// (0x00038ace) popup_battery_window_t1_ParamLimits

0xdf8b,	// (0x00038ace) popup_battery_window_t1

0xdf9d,	// (0x00038ae0) popup_battery_window_t2_ParamLimits

0xdf9d,	// (0x00038ae0) popup_battery_window_t2

0x0001,

0xfdb1,	// (0x0003a8f4) popup_battery_window_t_ParamLimits

0xfdb1,	// (0x0003a8f4) popup_battery_window_t

0x8d46,	// (0x00033889) midp_canvas_pane_ParamLimits

0x8dbd,	// (0x00033900) midp_keypad_pane_ParamLimits

0x8dbd,	// (0x00033900) midp_keypad_pane

0x90b8,	// (0x00033bfb) main_midp_pane_ParamLimits

0xbcf8,	// (0x0003683b) signal_pane_g2_cp_ParamLimits

0xdfba,	// (0x00038afd) aid_size_cell_midp_keypad_ParamLimits

0xdfba,	// (0x00038afd) aid_size_cell_midp_keypad

0xdfd4,	// (0x00038b17) midp_keyp_game_grid_pane_ParamLimits

0xdfd4,	// (0x00038b17) midp_keyp_game_grid_pane

0xdff4,	// (0x00038b37) midp_keyp_rocker_pane_ParamLimits

0xdff4,	// (0x00038b37) midp_keyp_rocker_pane

0xe023,	// (0x00038b66) midp_keyp_sk_left_pane_ParamLimits

0xe023,	// (0x00038b66) midp_keyp_sk_left_pane

0xe07d,	// (0x00038bc0) midp_keyp_sk_right_pane_ParamLimits

0xe07d,	// (0x00038bc0) midp_keyp_sk_right_pane

0x71d0,	// (0x00031d13) bg_button_pane_cp03

0xe0d7,	// (0x00038c1a) midp_keyp_sk_left_pane_g1

0x71d0,	// (0x00031d13) bg_button_pane_cp04

0xe0d7,	// (0x00038c1a) midp_keyp_sk_right_pane_g1

0xc244,	// (0x00036d87) midp_keyp_rocker_pane_g1

0xe0e0,	// (0x00038c23) keyp_game_cell_pane_ParamLimits

0xe0e0,	// (0x00038c23) keyp_game_cell_pane

0x71d0,	// (0x00031d13) bg_button_pane_cp02

0xe0f3,	// (0x00038c36) keyp_game_cell_pane_g1

0x4ea8,	// (0x0002f9eb) popup_fep_vkb2_window_ParamLimits

0x4ea8,	// (0x0002f9eb) popup_fep_vkb2_window

0x6a3f,	// (0x00031582) aid_size_cell_vkb2_ParamLimits

0x6a3f,	// (0x00031582) aid_size_cell_vkb2

0x6a8b,	// (0x000315ce) popup_fep_vkb2_window_g1_ParamLimits

0x6a8b,	// (0x000315ce) popup_fep_vkb2_window_g1

0x6ad3,	// (0x00031616) vkb2_area_bottom_pane_ParamLimits

0x6ad3,	// (0x00031616) vkb2_area_bottom_pane

0x6b27,	// (0x0003166a) vkb2_area_keypad_pane_ParamLimits

0x6b27,	// (0x0003166a) vkb2_area_keypad_pane

0x6b6d,	// (0x000316b0) vkb2_area_top_pane_ParamLimits

0x6b6d,	// (0x000316b0) vkb2_area_top_pane

0x6be7,	// (0x0003172a) vkb2_top_entry_pane_ParamLimits

0x6be7,	// (0x0003172a) vkb2_top_entry_pane

0x6c11,	// (0x00031754) vkb2_top_grid_left_pane_ParamLimits

0x6c11,	// (0x00031754) vkb2_top_grid_left_pane

0x6c2f,	// (0x00031772) vkb2_top_grid_right_pane_ParamLimits

0x6c2f,	// (0x00031772) vkb2_top_grid_right_pane

0x6c4d,	// (0x00031790) vkb2_cell_keypad_pane_ParamLimits

0x6c4d,	// (0x00031790) vkb2_cell_keypad_pane

0x6d03,	// (0x00031846) vkb2_area_bottom_grid_pane_ParamLimits

0x6d03,	// (0x00031846) vkb2_area_bottom_grid_pane

0x6d29,	// (0x0003186c) vkb2_area_bottom_pane_g1_ParamLimits

0x6d29,	// (0x0003186c) vkb2_area_bottom_pane_g1

0x6d4d,	// (0x00031890) vkb2_area_bottom_pane_g2_ParamLimits

0x6d4d,	// (0x00031890) vkb2_area_bottom_pane_g2

0x6d7b,	// (0x000318be) vkb2_area_bottom_pane_g3_ParamLimits

0x6d7b,	// (0x000318be) vkb2_area_bottom_pane_g3

0x0002,

0xfdb6,	// (0x0003a8f9) vkb2_area_bottom_pane_g_ParamLimits

0xfdb6,	// (0x0003a8f9) vkb2_area_bottom_pane_g

0x6ddc,	// (0x0003191f) vkb2_top_cell_left_pane_ParamLimits

0x6ddc,	// (0x0003191f) vkb2_top_cell_left_pane

0xe104,	// (0x00038c47) vkb2_top_entry_pane_g1_ParamLimits

0xe104,	// (0x00038c47) vkb2_top_entry_pane_g1

0xe112,	// (0x00038c55) vkb2_top_entry_pane_t1_ParamLimits

0xe112,	// (0x00038c55) vkb2_top_entry_pane_t1

0xe12a,	// (0x00038c6d) vkb2_top_entry_pane_t2_ParamLimits

0xe12a,	// (0x00038c6d) vkb2_top_entry_pane_t2

0xe142,	// (0x00038c85) vkb2_top_entry_pane_t3_ParamLimits

0xe142,	// (0x00038c85) vkb2_top_entry_pane_t3

0x0002,

0xfdbd,	// (0x0003a900) vkb2_top_entry_pane_t_ParamLimits

0xfdbd,	// (0x0003a900) vkb2_top_entry_pane_t

0x6e29,	// (0x0003196c) vkb2_top_grid_right_pane_g1_ParamLimits

0x6e29,	// (0x0003196c) vkb2_top_grid_right_pane_g1

0x6e3f,	// (0x00031982) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e3f,	// (0x00031982) vkb2_top_grid_right_pane_g2

0x6e57,	// (0x0003199a) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e57,	// (0x0003199a) vkb2_top_grid_right_pane_g3

0x6e6f,	// (0x000319b2) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e6f,	// (0x000319b2) vkb2_top_grid_right_pane_g4

0x0003,

0xfdc4,	// (0x0003a907) vkb2_top_grid_right_pane_g_ParamLimits

0xfdc4,	// (0x0003a907) vkb2_top_grid_right_pane_g

0x6e85,	// (0x000319c8) vkb2_top_cell_left_pane_g1

0x6e9c,	// (0x000319df) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e9c,	// (0x000319df) vkb2_cell_keypad_pane_g1

0xe158,	// (0x00038c9b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe158,	// (0x00038c9b) vkb2_cell_keypad_pane_t1

0x6ec0,	// (0x00031a03) vkb2_cell_bottom_grid_pane_ParamLimits

0x6ec0,	// (0x00031a03) vkb2_cell_bottom_grid_pane

0x6ef9,	// (0x00031a3c) vkb2_cell_bottom_grid_pane_g1

0xdd4e,	// (0x00038891) aid_call2_pane_cp02

0xdd56,	// (0x00038899) aid_call_pane_cp02

0xdd5e,	// (0x000388a1) clock_digital_number_pane_cp10

0xdd66,	// (0x000388a9) clock_digital_number_pane_cp11

0xdd6e,	// (0x000388b1) clock_digital_number_pane_cp12

0xdd76,	// (0x000388b9) clock_digital_number_pane_cp13

0xdd7e,	// (0x000388c1) clock_digital_separator_pane_cp10

0x8744,	// (0x00033287) popup_clock_digital_analogue_window_cp2_g1

0x8744,	// (0x00033287) popup_clock_digital_analogue_window_cp2_g2

0xdd86,	// (0x000388c9) popup_clock_digital_analogue_window_cp2_g3

0x8744,	// (0x00033287) popup_clock_digital_analogue_window_cp2_g4

0xdd86,	// (0x000388c9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd79,	// (0x0003a8bc) popup_clock_digital_analogue_window_cp2_g

0xdd8e,	// (0x000388d1) popup_clock_digital_analogue_window_cp2_t1

0xdd9c,	// (0x000388df) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd84,	// (0x0003a8c7) popup_clock_digital_analogue_window_cp2_t

0xc244,	// (0x00036d87) clock_digital_number_pane_cp10_g1

0xc244,	// (0x00036d87) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003a6a3) clock_digital_number_pane_cp10_g

0xc244,	// (0x00036d87) clock_digital_separator_pane_cp10_g1

0xc244,	// (0x00036d87) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0003a6a3) clock_digital_separator_pane_cp10_g

0xdbc9,	// (0x0003870c) uniindi_top_pane_g3

0xdbda,	// (0x0003871d) uniindi_top_pane_g4

0x6cbd,	// (0x00031800) vkb2_row_keypad_pane_ParamLimits

0x6cbd,	// (0x00031800) vkb2_row_keypad_pane

0x6f15,	// (0x00031a58) vkb2_cell_t_keypad_pane_ParamLimits

0x6f15,	// (0x00031a58) vkb2_cell_t_keypad_pane

0x6f25,	// (0x00031a68) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f25,	// (0x00031a68) vkb2_cell_t_keypad_pane_cp08

0x6f3a,	// (0x00031a7d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f3a,	// (0x00031a7d) vkb2_cell_t_keypad_pane_cp09

0x6f4e,	// (0x00031a91) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f4e,	// (0x00031a91) vkb2_cell_t_keypad_pane_cp01

0x6f5f,	// (0x00031aa2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f5f,	// (0x00031aa2) vkb2_cell_t_keypad_pane_cp02

0x6f70,	// (0x00031ab3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f70,	// (0x00031ab3) vkb2_cell_t_keypad_pane_cp03

0x6f81,	// (0x00031ac4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f81,	// (0x00031ac4) vkb2_cell_t_keypad_pane_cp04

0x6f92,	// (0x00031ad5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f92,	// (0x00031ad5) vkb2_cell_t_keypad_pane_cp05

0x6fa3,	// (0x00031ae6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6fa3,	// (0x00031ae6) vkb2_cell_t_keypad_pane_cp06

0x6fb6,	// (0x00031af9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6fb6,	// (0x00031af9) vkb2_cell_t_keypad_pane_cp07

0x6fcb,	// (0x00031b0e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6fcb,	// (0x00031b0e) vkb2_cell_t_keypad_pane_cp10

0x676e,	// (0x000312b1) vkb2_cell_t_keypad_pane_g1

0xe16f,	// (0x00038cb2) vkb2_cell_t_keypad_pane_t1

0x4d99,	// (0x0002f8dc) popup_grid_graphic2_window

0xe181,	// (0x00038cc4) aid_size_cell_graphic2_ParamLimits

0xe181,	// (0x00038cc4) aid_size_cell_graphic2

0xcc81,	// (0x000377c4) bg_popup_window_pane_cp21_ParamLimits

0xcc81,	// (0x000377c4) bg_popup_window_pane_cp21

0xe1ad,	// (0x00038cf0) graphic2_pages_pane_ParamLimits

0xe1ad,	// (0x00038cf0) graphic2_pages_pane

0xe1f3,	// (0x00038d36) grid_graphic2_control_pane_ParamLimits

0xe1f3,	// (0x00038d36) grid_graphic2_control_pane

0xe221,	// (0x00038d64) grid_graphic2_pane_ParamLimits

0xe221,	// (0x00038d64) grid_graphic2_pane

0xe283,	// (0x00038dc6) cell_graphic2_pane

0x71d0,	// (0x00031d13) main_comp_mode_pane

0xd43a,	// (0x00037f7d) list_ai3_gene_pane_ParamLimits

0xd802,	// (0x00038345) bg_popup_window_pane_cp19_ParamLimits

0xd80e,	// (0x00038351) bg_touch_area_indi_pane_ParamLimits

0xd80e,	// (0x00038351) bg_touch_area_indi_pane

0xd824,	// (0x00038367) bg_touch_area_indi_pane_cp01_ParamLimits

0xd824,	// (0x00038367) bg_touch_area_indi_pane_cp01

0xd83c,	// (0x0003837f) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83c,	// (0x0003837f) bg_touch_area_indi_pane_cp02

0xd856,	// (0x00038399) bg_touch_area_indi_pane_cp03_ParamLimits

0xd856,	// (0x00038399) bg_touch_area_indi_pane_cp03

0xd870,	// (0x000383b3) popup_slider_window_g1_ParamLimits

0xd88c,	// (0x000383cf) popup_slider_window_g2_ParamLimits

0xd8a8,	// (0x000383eb) popup_slider_window_g3_ParamLimits

0xfd0e,	// (0x0003a851) popup_slider_window_g_ParamLimits

0xd904,	// (0x00038447) popup_slider_window_t1_ParamLimits

0xd978,	// (0x000384bb) small_volume_slider_vertical_pane_ParamLimits

0xe283,	// (0x00038dc6) cell_graphic2_pane_ParamLimits

0xe2d8,	// (0x00038e1b) bg_button_pane_cp10_ParamLimits

0xe2d8,	// (0x00038e1b) bg_button_pane_cp10

0xe2ed,	// (0x00038e30) bg_button_pane_cp11_ParamLimits

0xe2ed,	// (0x00038e30) bg_button_pane_cp11

0xe323,	// (0x00038e66) graphic2_pages_pane_g1_ParamLimits

0xe323,	// (0x00038e66) graphic2_pages_pane_g1

0xe33e,	// (0x00038e81) graphic2_pages_pane_g2_ParamLimits

0xe33e,	// (0x00038e81) graphic2_pages_pane_g2

0x0001,

0xfdd2,	// (0x0003a915) graphic2_pages_pane_g_ParamLimits

0xfdd2,	// (0x0003a915) graphic2_pages_pane_g

0xe356,	// (0x00038e99) graphic2_pages_pane_t1_ParamLimits

0xe356,	// (0x00038e99) graphic2_pages_pane_t1

0xe36c,	// (0x00038eaf) cell_graphic2_control_pane_ParamLimits

0xe36c,	// (0x00038eaf) cell_graphic2_control_pane

0xe386,	// (0x00038ec9) cell_graphic2_pane_g1_ParamLimits

0xe386,	// (0x00038ec9) cell_graphic2_pane_g1

0xe393,	// (0x00038ed6) cell_graphic2_pane_g2_ParamLimits

0xe393,	// (0x00038ed6) cell_graphic2_pane_g2

0xe3a0,	// (0x00038ee3) cell_graphic2_pane_g3_ParamLimits

0xe3a0,	// (0x00038ee3) cell_graphic2_pane_g3

0xe3ad,	// (0x00038ef0) cell_graphic2_pane_g4_ParamLimits

0xe3ad,	// (0x00038ef0) cell_graphic2_pane_g4

0xe3ba,	// (0x00038efd) cell_graphic2_pane_g5_ParamLimits

0xe3ba,	// (0x00038efd) cell_graphic2_pane_g5

0x0004,

0xfdd7,	// (0x0003a91a) cell_graphic2_pane_g_ParamLimits

0xfdd7,	// (0x0003a91a) cell_graphic2_pane_g

0xe3d5,	// (0x00038f18) cell_graphic2_pane_t1_ParamLimits

0xe3d5,	// (0x00038f18) cell_graphic2_pane_t1

0x9cf2,	// (0x00034835) grid_highlight_pane_cp11_ParamLimits

0x9cf2,	// (0x00034835) grid_highlight_pane_cp11

0x80d4,	// (0x00032c17) bg_button_pane_cp05

0xe3eb,	// (0x00038f2e) cell_graphic2_control_pane_g1

0xc244,	// (0x00036d87) bg_touch_area_indi_pane_g1

0xe3f8,	// (0x00038f3b) aid_cmod_rocker_key_size

0xe402,	// (0x00038f45) aid_cmode_itu_key_size

0xe40c,	// (0x00038f4f) main_cmode_video_pane

0xe416,	// (0x00038f59) main_comp_mode_itu_pane

0xe422,	// (0x00038f65) main_comp_mode_rocker_pane

0xe42e,	// (0x00038f71) cell_cmode_rocker_pane_ParamLimits

0xe42e,	// (0x00038f71) cell_cmode_rocker_pane

0xe442,	// (0x00038f85) cell_cmode_itu_pane_ParamLimits

0xe442,	// (0x00038f85) cell_cmode_itu_pane

0x80d4,	// (0x00032c17) bg_button_pane_cp06_ParamLimits

0x80d4,	// (0x00032c17) bg_button_pane_cp06

0xc4ce,	// (0x00037011) cell_cmode_rocker_pane_g1_ParamLimits

0xc4ce,	// (0x00037011) cell_cmode_rocker_pane_g1

0xda1f,	// (0x00038562) cell_cmode_rocker_pane_g2_ParamLimits

0xda1f,	// (0x00038562) cell_cmode_rocker_pane_g2

0x0001,

0xfde2,	// (0x0003a925) cell_cmode_rocker_pane_g_ParamLimits

0xfde2,	// (0x0003a925) cell_cmode_rocker_pane_g

0x71d0,	// (0x00031d13) bg_button_pane_cp07

0xe459,	// (0x00038f9c) cell_cmode_itu_pane_g1

0xe462,	// (0x00038fa5) cell_cmode_itu_pane_t1

0xe470,	// (0x00038fb3) cell_cmode_itu_pane_t2

0x0001,

0xfde7,	// (0x0003a92a) cell_cmode_itu_pane_t

0xdc4d,	// (0x00038790) aid_touch_ctrl_left

0xdc55,	// (0x00038798) aid_touch_ctrl_right

0x71d0,	// (0x00031d13) compa_mode_pane

0xe47e,	// (0x00038fc1) aid_cmod_rocker_key_size_cp

0xe488,	// (0x00038fcb) aid_cmode_itu_key_size_cp

0xe492,	// (0x00038fd5) compa_mode_pane_g1

0xe49a,	// (0x00038fdd) compa_mode_pane_g2

0xe4a2,	// (0x00038fe5) compa_mode_pane_g3

0x0002,

0xfdec,	// (0x0003a92f) compa_mode_pane_g

0xe4aa,	// (0x00038fed) main_comp_mode_itu_pane_cp

0xe4b2,	// (0x00038ff5) main_comp_mode_rocker_pane_cp

0xe4ba,	// (0x00038ffd) cell_cmode_itu_pane_cp_ParamLimits

0xe4ba,	// (0x00038ffd) cell_cmode_itu_pane_cp

0xe4cf,	// (0x00039012) cell_cmode_rocker_pane_cp_ParamLimits

0xe4cf,	// (0x00039012) cell_cmode_rocker_pane_cp

0x80d4,	// (0x00032c17) bg_button_pane_cp06_cp_ParamLimits

0x80d4,	// (0x00032c17) bg_button_pane_cp06_cp

0xc4ce,	// (0x00037011) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4ce,	// (0x00037011) cell_cmode_rocker_pane_g1_cp

0xc244,	// (0x00036d87) cell_cmode_rocker_pane_g2_cp

0x71d0,	// (0x00031d13) bg_button_pane_cp07_cp

0xe4e1,	// (0x00039024) cell_cmode_itu_pane_g1_cp

0xe4ea,	// (0x0003902d) cell_cmode_itu_pane_t1_cp

0xe4ea,	// (0x0003902d) cell_cmode_itu_pane_t2_cp

0xb188,	// (0x00035ccb) settings_code_pane_cp2

0x72c4,	// (0x00031e07) bg_popup_window_pane_cp3_ParamLimits

0x773c,	// (0x0003227f) heading_pane_cp3_ParamLimits

0x7cd1,	// (0x00032814) listscroll_popup_graphic_pane_ParamLimits

0x6501,	// (0x00031044) fep_hwr_aid_pane_ParamLimits

0x6994,	// (0x000314d7) aid_touch_sctrl_top_ParamLimits

0x69af,	// (0x000314f2) sctrl_sk_top_pane_g1_ParamLimits

0x676e,	// (0x000312b1) sctrl_sk_top_pane_g2_ParamLimits

0xfd27,	// (0x0003a86a) sctrl_sk_top_pane_g_ParamLimits

0x69bc,	// (0x000314ff) sctrl_sk_top_pane_t1_ParamLimits

0x6994,	// (0x000314d7) aid_touch_sctrl_bottom_ParamLimits

0x69bc,	// (0x000314ff) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb93,	// (0x000386d6) aid_area_touch_clock

0x6baf,	// (0x000316f2) aid_vkb2_area_top_pane_cell_ParamLimits

0x6baf,	// (0x000316f2) aid_vkb2_area_top_pane_cell

0x6cdf,	// (0x00031822) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6cdf,	// (0x00031822) aid_vkb2_area_bottom_pane_cell

0xe0fc,	// (0x00038c3f) popup_char_count_window

0xe4f8,	// (0x0003903b) popup_char_count_window_g1

0xe501,	// (0x00039044) popup_char_count_window_g2

0xe50a,	// (0x0003904d) popup_char_count_window_g3

0x0002,

0xfdf3,	// (0x0003a936) popup_char_count_window_g

0xe513,	// (0x00039056) popup_char_count_window_t1

0x6a69,	// (0x000315ac) popup_fep_char_preview_window_ParamLimits

0x6a69,	// (0x000315ac) popup_fep_char_preview_window

0x6bcd,	// (0x00031710) vkb2_top_candi_pane_ParamLimits

0x6bcd,	// (0x00031710) vkb2_top_candi_pane

0xe521,	// (0x00039064) cell_vkb2_top_candi_pane_ParamLimits

0xe521,	// (0x00039064) cell_vkb2_top_candi_pane

0x6fe0,	// (0x00031b23) bg_popup_fep_char_preview_window_ParamLimits

0x6fe0,	// (0x00031b23) bg_popup_fep_char_preview_window

0x6fee,	// (0x00031b31) popup_fep_char_preview_window_t1_ParamLimits

0x6fee,	// (0x00031b31) popup_fep_char_preview_window_t1

0xe572,	// (0x000390b5) bg_popup_fep_char_preview_window_g1

0xe57a,	// (0x000390bd) bg_popup_fep_char_preview_window_g2

0xe582,	// (0x000390c5) bg_popup_fep_char_preview_window_g3

0xe58a,	// (0x000390cd) bg_popup_fep_char_preview_window_g4

0xe592,	// (0x000390d5) bg_popup_fep_char_preview_window_g5

0x7028,	// (0x00031b6b) bg_popup_fep_char_preview_window_g6

0xe59a,	// (0x000390dd) bg_popup_fep_char_preview_window_g7

0xe5a2,	// (0x000390e5) bg_popup_fep_char_preview_window_g8

0xe5aa,	// (0x000390ed) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdfa,	// (0x0003a93d) bg_popup_fep_char_preview_window_g

0x676e,	// (0x000312b1) cell_vkb2_top_candi_pane_g1_ParamLimits

0x676e,	// (0x000312b1) cell_vkb2_top_candi_pane_g1

0x677c,	// (0x000312bf) cell_vkb2_top_candi_pane_g2_ParamLimits

0x677c,	// (0x000312bf) cell_vkb2_top_candi_pane_g2

0xe302,	// (0x00038e45) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe302,	// (0x00038e45) cell_vkb2_top_candi_pane_g3

0x7030,	// (0x00031b73) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7030,	// (0x00031b73) cell_vkb2_top_candi_pane_g4

0xc9cd,	// (0x00037510) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9cd,	// (0x00037510) cell_vkb2_top_candi_pane_g5

0x7051,	// (0x00031b94) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7051,	// (0x00031b94) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0d,	// (0x0003a950) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0d,	// (0x0003a950) cell_vkb2_top_candi_pane_g

0x705f,	// (0x00031ba2) cell_vkb2_top_candi_pane_t1

0x6225,	// (0x00030d68) aid_size_touch_slider_mark_ParamLimits

0x6225,	// (0x00030d68) aid_size_touch_slider_mark

0xe1e3,	// (0x00038d26) grid_graphic2_catg_pane_ParamLimits

0xe1e3,	// (0x00038d26) grid_graphic2_catg_pane

0xe25d,	// (0x00038da0) popup_grid_graphic2_window_t1_ParamLimits

0xe25d,	// (0x00038da0) popup_grid_graphic2_window_t1

0xe26f,	// (0x00038db2) popup_grid_graphic2_window_t2_ParamLimits

0xe26f,	// (0x00038db2) popup_grid_graphic2_window_t2

0x0001,

0xfdcd,	// (0x0003a910) popup_grid_graphic2_window_t_ParamLimits

0xfdcd,	// (0x0003a910) popup_grid_graphic2_window_t

0x80d4,	// (0x00032c17) bg_button_pane_cp05_ParamLimits

0xe3eb,	// (0x00038f2e) cell_graphic2_control_pane_g1_ParamLimits

0xe5b2,	// (0x000390f5) cell_graphic2_catg_pane_ParamLimits

0xe5b2,	// (0x000390f5) cell_graphic2_catg_pane

0x71d0,	// (0x00031d13) bg_button_pane_cp12

0xe5c4,	// (0x00039107) cell_graphic2_catg_pane_g1

0xdb5f,	// (0x000386a2) cell_tb_ext_pane_t1_ParamLimits

0x6dfc,	// (0x0003193f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6dfc,	// (0x0003193f) vkb2_top_cell_right_narrow_pane

0x6e14,	// (0x00031957) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e14,	// (0x00031957) vkb2_top_cell_right_wide_pane

0x64f3,	// (0x00031036) bg_vkb2_func_pane_ParamLimits

0x64f3,	// (0x00031036) bg_vkb2_func_pane

0x6e85,	// (0x000319c8) vkb2_top_cell_left_pane_g1_ParamLimits

0x64f3,	// (0x00031036) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64f3,	// (0x00031036) bg_vkb2_fuc_pane_cp03

0x6ef9,	// (0x00031a3c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c08,	// (0x0003474b) bg_vkb2_func_pane_g1

0x9c10,	// (0x00034753) bg_vkb2_func_pane_g2

0x9c20,	// (0x00034763) bg_vkb2_func_pane_g3

0x9c18,	// (0x0003475b) bg_vkb2_func_pane_g4

0x9c28,	// (0x0003476b) bg_vkb2_func_pane_g5

0x9c30,	// (0x00034773) bg_vkb2_func_pane_g6

0x9c38,	// (0x0003477b) bg_vkb2_func_pane_g7

0x9c40,	// (0x00034783) bg_vkb2_func_pane_g8

0x9c00,	// (0x00034743) bg_vkb2_func_pane_g9

0x0008,

0xfe1a,	// (0x0003a95d) bg_vkb2_func_pane_g

0x64f3,	// (0x00031036) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64f3,	// (0x00031036) bg_vkb2_fuc_pane_cp01

0x6e85,	// (0x000319c8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e85,	// (0x000319c8) vkb2_top_cell_right_wide_pane_g1

0x64f3,	// (0x00031036) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64f3,	// (0x00031036) bg_vkb2_fuc_pane_cp02

0x6ef9,	// (0x00031a3c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ef9,	// (0x00031a3c) vkb2_top_cell_right_narrow_pane_g1

0xd780,	// (0x000382c3) aid_touch_area_decrease_ParamLimits

0xd780,	// (0x000382c3) aid_touch_area_decrease

0xd7a4,	// (0x000382e7) aid_touch_area_increase_ParamLimits

0xd7a4,	// (0x000382e7) aid_touch_area_increase

0xd7b0,	// (0x000382f3) aid_touch_area_mute_ParamLimits

0xd7b0,	// (0x000382f3) aid_touch_area_mute

0xd7d4,	// (0x00038317) aid_touch_area_slider_ParamLimits

0xd7d4,	// (0x00038317) aid_touch_area_slider

0xd8c4,	// (0x00038407) popup_slider_window_g4_ParamLimits

0xd8c4,	// (0x00038407) popup_slider_window_g4

0xd8d0,	// (0x00038413) popup_slider_window_g5_ParamLimits

0xd8d0,	// (0x00038413) popup_slider_window_g5

0xd8f2,	// (0x00038435) popup_slider_window_g6_ParamLimits

0xd8f2,	// (0x00038435) popup_slider_window_g6

0xd932,	// (0x00038475) popup_slider_window_t2_ParamLimits

0xd932,	// (0x00038475) popup_slider_window_t2

0x0001,

0xfd1b,	// (0x0003a85e) popup_slider_window_t_ParamLimits

0xfd1b,	// (0x0003a85e) popup_slider_window_t

0xd94a,	// (0x0003848d) slider_pane_ParamLimits

0xd94a,	// (0x0003848d) slider_pane

0xe5cd,	// (0x00039110) slider_pane_g1_ParamLimits

0xe5cd,	// (0x00039110) slider_pane_g1

0xe5e1,	// (0x00039124) slider_pane_g2_ParamLimits

0xe5e1,	// (0x00039124) slider_pane_g2

0xe5f7,	// (0x0003913a) slider_pane_g3_ParamLimits

0xe5f7,	// (0x0003913a) slider_pane_g3

0x0003,

0xfe2d,	// (0x0003a970) slider_pane_g_ParamLimits

0xfe2d,	// (0x0003a970) slider_pane_g

0x95fa,	// (0x0003413d) popup_tb_float_extension_window_ParamLimits

0x95fa,	// (0x0003413d) popup_tb_float_extension_window

0xe623,	// (0x00039166) aid_size_cell_tb_float_ext

0x71d0,	// (0x00031d13) bg_popup_sub_window_cp28

0xe62f,	// (0x00039172) grid_tb_float_ext_pane

0xe63b,	// (0x0003917e) cell_tb_float_ext_pane_ParamLimits

0xe63b,	// (0x0003917e) cell_tb_float_ext_pane

0xe657,	// (0x0003919a) cell_tb_float_ext_pane_g1

0xe660,	// (0x000391a3) grid_highlight_pane_cp12

0x6648,	// (0x0003118b) cell_last_hwr_side_pane_ParamLimits

0x6648,	// (0x0003118b) cell_last_hwr_side_pane

0xc244,	// (0x00036d87) cell_last_hwr_side_pane_g1

0xe669,	// (0x000391ac) cell_last_hwr_side_pane_g2

0x0001,

0xfe36,	// (0x0003a979) cell_last_hwr_side_pane_g

0x6dab,	// (0x000318ee) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6dab,	// (0x000318ee) vkb2_area_bottom_space_btn_pane

0x676e,	// (0x000312b1) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe16f,	// (0x00038cb2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x705f,	// (0x00031ba2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x707d,	// (0x00031bc0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x707d,	// (0x00031bc0) vkb2_area_bottom_space_btn_pane_g1

0x70b7,	// (0x00031bfa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x70b7,	// (0x00031bfa) vkb2_area_bottom_space_btn_pane_g2

0x70ed,	// (0x00031c30) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x70ed,	// (0x00031c30) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe3b,	// (0x0003a97e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe3b,	// (0x0003a97e) vkb2_area_bottom_space_btn_pane_g

0x65b8,	// (0x000310fb) cel_fep_hwr_func_pane_ParamLimits

0x65b8,	// (0x000310fb) cel_fep_hwr_func_pane

0x65f4,	// (0x00031137) cell_hwr_side_button_pane_ParamLimits

0x65f4,	// (0x00031137) cell_hwr_side_button_pane

0xdb93,	// (0x000386d6) aid_area_touch_clock_ParamLimits

0x754e,	// (0x00032091) bg_uniindi_top_pane_ParamLimits

0xdba7,	// (0x000386ea) uniindi_top_pane_g1_ParamLimits

0xdbbd,	// (0x00038700) uniindi_top_pane_g2_ParamLimits

0xdbc9,	// (0x0003870c) uniindi_top_pane_g3_ParamLimits

0xdbda,	// (0x0003871d) uniindi_top_pane_g4_ParamLimits

0xfd53,	// (0x0003a896) uniindi_top_pane_g_ParamLimits

0xdbe7,	// (0x0003872a) uniindi_top_pane_t1_ParamLimits

0x754e,	// (0x00032091) bg_vkb2_func_pane_cp01_ParamLimits

0x754e,	// (0x00032091) bg_vkb2_func_pane_cp01

0xe672,	// (0x000391b5) cel_fep_hwr_func_pane_g1_ParamLimits

0xe672,	// (0x000391b5) cel_fep_hwr_func_pane_g1

0x754e,	// (0x00032091) bg_vkb2_func_pane_cp02_ParamLimits

0x754e,	// (0x00032091) bg_vkb2_func_pane_cp02

0xe672,	// (0x000391b5) cell_hwr_side_button_pane_g1_ParamLimits

0xe672,	// (0x000391b5) cell_hwr_side_button_pane_g1

0x9a81,	// (0x000345c4) status_pane_g4_ParamLimits

0x9a81,	// (0x000345c4) status_pane_g4

0x9a9b,	// (0x000345de) status_pane_t1

0xbf9e,	// (0x00036ae1) form2_midp_gauge_slider_cont_pane

0xbfa6,	// (0x00036ae9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfb8,	// (0x00036afb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfca,	// (0x00036b0d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0003a656) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfdc,	// (0x00036b1f) form2_midp_slider_pane_ParamLimits

0x6a31,	// (0x00031574) aid_size_cell_func_vkb2_ParamLimits

0x6a31,	// (0x00031574) aid_size_cell_func_vkb2

0xe60f,	// (0x00039152) slider_pane_g4_ParamLimits

0xe60f,	// (0x00039152) slider_pane_g4

0x7137,	// (0x00031c7a) form2_midp_gauge_slider_pane_t2_cp01

0x7145,	// (0x00031c88) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7145,	// (0x00031c88) form2_midp_gauge_slider_pane_t3_cp01

0x7162,	// (0x00031ca5) form2_midp_slider_pane_cp01

0x71d0,	// (0x00031d13) navi_smil_pane

0xe6ab,	// (0x000391ee) navi_smil_pane_g1

0xe6b3,	// (0x000391f6) navi_smil_pane_t1

0xe680,	// (0x000391c3) form2_midp_slider_pane_g1

0xe689,	// (0x000391cc) form2_midp_slider_pane_g2

0xe691,	// (0x000391d4) form2_midp_slider_pane_g3

0xe680,	// (0x000391c3) form2_midp_slider_pane_g4

0xe699,	// (0x000391dc) form2_midp_slider_pane_g5

0x0004,

0xfe44,	// (0x0003a987) form2_midp_slider_pane_g

0x7127,	// (0x00031c6a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7127,	// (0x00031c6a) vkb2_area_bottom_space_btn_pane_g4

0x9899,	// (0x000343dc) lc0_navi_pane_ParamLimits

0x9899,	// (0x000343dc) lc0_navi_pane

0x9915,	// (0x00034458) lc0_stat_indi_pane_ParamLimits

0x9915,	// (0x00034458) lc0_stat_indi_pane

0x992c,	// (0x0003446f) ls0_title_pane_ParamLimits

0x992c,	// (0x0003446f) ls0_title_pane

0x80d4,	// (0x00032c17) bg_popup_sub_pane_cp14_ParamLimits

0xdb7a,	// (0x000386bd) list_uniindi_pane_ParamLimits

0xdb86,	// (0x000386c9) uniindi_top_pane_ParamLimits

0xdc25,	// (0x00038768) list_single_uniindi_pane_g1_ParamLimits

0xdc38,	// (0x0003877b) list_single_uniindi_pane_t1_ParamLimits

0x716b,	// (0x00031cae) lc0_stat_clock_pane_ParamLimits

0x716b,	// (0x00031cae) lc0_stat_clock_pane

0xe6c1,	// (0x00039204) lc0_stat_indi_pane_g1_ParamLimits

0xe6c1,	// (0x00039204) lc0_stat_indi_pane_g1

0xe6ce,	// (0x00039211) lc0_stat_indi_pane_g2_ParamLimits

0xe6ce,	// (0x00039211) lc0_stat_indi_pane_g2

0x0001,

0xfe4f,	// (0x0003a992) lc0_stat_indi_pane_g_ParamLimits

0xfe4f,	// (0x0003a992) lc0_stat_indi_pane_g

0x7178,	// (0x00031cbb) lc0_uni_indicator_pane_ParamLimits

0x7178,	// (0x00031cbb) lc0_uni_indicator_pane

0xe6db,	// (0x0003921e) ls0_title_pane_g1_ParamLimits

0xe6db,	// (0x0003921e) ls0_title_pane_g1

0xe6ef,	// (0x00039232) ls0_title_pane_t1_ParamLimits

0xe6ef,	// (0x00039232) ls0_title_pane_t1

0x7185,	// (0x00031cc8) lc0_uni_indicator_pane_g1_ParamLimits

0x7185,	// (0x00031cc8) lc0_uni_indicator_pane_g1

0xe725,	// (0x00039268) lc0_stat_clock_pane_t1

0x71d0,	// (0x00031d13) main_ai5_pane

0xe733,	// (0x00039276) ai5_sk_pane_ParamLimits

0xe733,	// (0x00039276) ai5_sk_pane

0xe740,	// (0x00039283) cell_ai5_widget_pane_ParamLimits

0xe740,	// (0x00039283) cell_ai5_widget_pane

0xe7b6,	// (0x000392f9) aid_size_cell_widget_grid

0xe7ca,	// (0x0003930d) bg_ai5_widget_pane_ParamLimits

0xe7ca,	// (0x0003930d) bg_ai5_widget_pane

0xe7f2,	// (0x00039335) cell_ai5_widget_pane_g2

0xe802,	// (0x00039345) cell_ai5_widget_pane_g3

0xe816,	// (0x00039359) cell_ai5_widget_pane_g4

0xe822,	// (0x00039365) cell_ai5_widget_pane_g5

0xe82e,	// (0x00039371) cell_ai5_widget_pane_g6

0xe83c,	// (0x0003937f) cell_ai5_widget_pane_g7

0xe884,	// (0x000393c7) cell_ai5_widget_pane_t1_ParamLimits

0xe884,	// (0x000393c7) cell_ai5_widget_pane_t1

0xe8a1,	// (0x000393e4) cell_ai5_widget_pane_t2_ParamLimits

0xe8a1,	// (0x000393e4) cell_ai5_widget_pane_t2

0xe8b9,	// (0x000393fc) cell_ai5_widget_pane_t3_ParamLimits

0xe8b9,	// (0x000393fc) cell_ai5_widget_pane_t3

0xe8d1,	// (0x00039414) cell_ai5_widget_pane_t4_ParamLimits

0xe8d1,	// (0x00039414) cell_ai5_widget_pane_t4

0xe8eb,	// (0x0003942e) cell_ai5_widget_pane_t5_ParamLimits

0xe8eb,	// (0x0003942e) cell_ai5_widget_pane_t5

0xe90a,	// (0x0003944d) cell_ai5_widget_pane_t6_ParamLimits

0xe90a,	// (0x0003944d) cell_ai5_widget_pane_t6

0xe91c,	// (0x0003945f) cell_ai5_widget_pane_t7_ParamLimits

0xe91c,	// (0x0003945f) cell_ai5_widget_pane_t7

0xe935,	// (0x00039478) cell_ai5_widget_pane_t8_ParamLimits

0xe935,	// (0x00039478) cell_ai5_widget_pane_t8

0x0009,

0xfe69,	// (0x0003a9ac) cell_ai5_widget_pane_t_ParamLimits

0xfe69,	// (0x0003a9ac) cell_ai5_widget_pane_t

0xe97d,	// (0x000394c0) grid_ai5_widget_pane

0x80d4,	// (0x00032c17) highlight_cell_ai5_widget_pane_ParamLimits

0x80d4,	// (0x00032c17) highlight_cell_ai5_widget_pane

0xe994,	// (0x000394d7) ai5_sk_left_pane

0xe99e,	// (0x000394e1) ai5_sk_middle_pane

0xe9a8,	// (0x000394eb) ai5_sk_right_pane

0xe9b2,	// (0x000394f5) bg_ai5_widget_pane_g1_ParamLimits

0xe9b2,	// (0x000394f5) bg_ai5_widget_pane_g1

0xe9be,	// (0x00039501) bg_ai5_widget_pane_g2_ParamLimits

0xe9be,	// (0x00039501) bg_ai5_widget_pane_g2

0xe9ca,	// (0x0003950d) bg_ai5_widget_pane_g3_ParamLimits

0xe9ca,	// (0x0003950d) bg_ai5_widget_pane_g3

0xe9d6,	// (0x00039519) bg_ai5_widget_pane_g4_ParamLimits

0xe9d6,	// (0x00039519) bg_ai5_widget_pane_g4

0xe9e2,	// (0x00039525) bg_ai5_widget_pane_g5_ParamLimits

0xe9e2,	// (0x00039525) bg_ai5_widget_pane_g5

0xe9ee,	// (0x00039531) bg_ai5_widget_pane_g6_ParamLimits

0xe9ee,	// (0x00039531) bg_ai5_widget_pane_g6

0xe9fa,	// (0x0003953d) bg_ai5_widget_pane_g7_ParamLimits

0xe9fa,	// (0x0003953d) bg_ai5_widget_pane_g7

0xea06,	// (0x00039549) bg_ai5_widget_pane_g8_ParamLimits

0xea06,	// (0x00039549) bg_ai5_widget_pane_g8

0xea12,	// (0x00039555) bg_ai5_widget_pane_g9_ParamLimits

0xea12,	// (0x00039555) bg_ai5_widget_pane_g9

0x0008,

0xfe7e,	// (0x0003a9c1) bg_ai5_widget_pane_g_ParamLimits

0xfe7e,	// (0x0003a9c1) bg_ai5_widget_pane_g

0xea39,	// (0x0003957c) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x0003957c) cell_shortcut_ai5_widget_pane

0x7390,	// (0x00031ed3) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x0003958e) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x00039597) highlight_cell_shortcut_ai5_widget_pane

0x9c08,	// (0x0003474b) ai5_sk_left_pane_g1

0xea5c,	// (0x0003959f) ai5_sk_left_pane_g2

0xea64,	// (0x000395a7) ai5_sk_left_pane_g3

0xea6c,	// (0x000395af) ai5_sk_left_pane_g4

0x0003,

0xfe91,	// (0x0003a9d4) ai5_sk_left_pane_g

0xea74,	// (0x000395b7) ai5_sk_left_pane_t1

0x9c10,	// (0x00034753) ai5_sk_right_pane_g1

0xea82,	// (0x000395c5) ai5_sk_right_pane_g2

0xea8a,	// (0x000395cd) ai5_sk_right_pane_g3

0xea92,	// (0x000395d5) ai5_sk_right_pane_g4

0x0003,

0xfe9a,	// (0x0003a9dd) ai5_sk_right_pane_g

0xea9a,	// (0x000395dd) ai5_sk_right_pane_t1

0x9c10,	// (0x00034753) ai5_sk_middle_pane_g1

0x9c08,	// (0x0003474b) ai5_sk_middle_pane_g2

0x9c28,	// (0x0003476b) ai5_sk_middle_pane_g3

0xea8a,	// (0x000395cd) ai5_sk_middle_pane_g4

0xea64,	// (0x000395a7) ai5_sk_middle_pane_g5

0xeaa8,	// (0x000395eb) ai5_sk_middle_pane_g6

0xeab0,	// (0x000395f3) ai5_sk_middle_pane_g7

0x0006,

0xfea3,	// (0x0003a9e6) ai5_sk_middle_pane_g

0x971b,	// (0x0003425e) aid_touch_area_size_lc0_ParamLimits

0x971b,	// (0x0003425e) aid_touch_area_size_lc0

0x679d,	// (0x000312e0) cell_hwr_candidate_pane_t1_ParamLimits

0x9739,	// (0x0003427c) aid_touch_navi_pane

0x9a2b,	// (0x0003456e) status_dt_navi_pane_ParamLimits

0x9a2b,	// (0x0003456e) status_dt_navi_pane

0x9a38,	// (0x0003457b) status_dt_sta_pane_ParamLimits

0x9a38,	// (0x0003457b) status_dt_sta_pane

0xeab8,	// (0x000395fb) dt_sta_controll_pane

0xeac5,	// (0x00039608) dt_sta_indi_pane

0xead6,	// (0x00039619) dt_sta_title_pane

0x754e,	// (0x00032091) bg_dt_sta_indi_pane_ParamLimits

0x754e,	// (0x00032091) bg_dt_sta_indi_pane

0xeae9,	// (0x0003962c) dt_sta_battery_pane

0xeaf1,	// (0x00039634) dt_sta_indi_pane_g1

0xeafa,	// (0x0003963d) dt_sta_indi_pane_g2

0xeb03,	// (0x00039646) dt_sta_indi_pane_g3

0x0002,

0xfeb2,	// (0x0003a9f5) dt_sta_indi_pane_g

0xeb0c,	// (0x0003964f) dt_sta_signal_pane

0x80d4,	// (0x00032c17) bg_dt_sta_title_pane_ParamLimits

0x80d4,	// (0x00032c17) bg_dt_sta_title_pane

0xeb15,	// (0x00039658) dt_sta_title_pane_g1

0xeb1d,	// (0x00039660) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x00039660) dt_sta_title_pane_t1

0x71d0,	// (0x00031d13) bg_dt_sta_control_pane

0xeb32,	// (0x00039675) dt_sta_controll_pane_g1

0xeb3b,	// (0x0003967e) bg_dt_sta_title_pane_g1

0xeb44,	// (0x00039687) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x00039690) bg_dt_sta_title_pane_g3

0x0002,

0xfeb9,	// (0x0003a9fc) bg_dt_sta_title_pane_g

0xc244,	// (0x00036d87) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x00039699) dt_sta_signal_pane_g1

0xeb5e,	// (0x000396a1) dt_sta_signal_pane_g2

0x0001,

0xfec0,	// (0x0003aa03) dt_sta_signal_pane_g

0xeb66,	// (0x000396a9) dt_sta_battery_pane_g1

0xeb6f,	// (0x000396b2) dt_sta_battery_pane_t1

0xc244,	// (0x00036d87) bg_dt_sta_control_pane_g1

0x8830,	// (0x00033373) fep_china_uni_eep_pane

0x8838,	// (0x0003337b) fep_china_uni_entry_pane_ParamLimits

0x8848,	// (0x0003338b) popup_fep_china_uni_window_g1_ParamLimits

0x8858,	// (0x0003339b) popup_fep_china_uni_window_g2_ParamLimits

0x8858,	// (0x0003339b) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0003a2a0) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0003a2a0) popup_fep_china_uni_window_g

0xeb7e,	// (0x000396c1) fep_china_uni_eep_pane_g1

0xeb86,	// (0x000396c9) fep_china_uni_eep_pane_t1

0xe6a2,	// (0x000391e5) aid_touch_area_size_smil_player

0x9891,	// (0x000343d4) lc0_clock_pane

0x9a8f,	// (0x000345d2) status_pane_g5_ParamLimits

0x9a8f,	// (0x000345d2) status_pane_g5

0x9273,	// (0x00033db6) popup_keymap_window

0x9a4d,	// (0x00034590) status_icon_pane

0xe802,	// (0x00039345) cell_ai5_widget_pane_g3_ParamLimits

0xe816,	// (0x00039359) cell_ai5_widget_pane_g4_ParamLimits

0xe822,	// (0x00039365) cell_ai5_widget_pane_g5_ParamLimits

0xe848,	// (0x0003938b) cell_ai5_widget_pane_g8_ParamLimits

0xe848,	// (0x0003938b) cell_ai5_widget_pane_g8

0xe85c,	// (0x0003939f) cell_ai5_widget_pane_g9_ParamLimits

0xe85c,	// (0x0003939f) cell_ai5_widget_pane_g9

0xe870,	// (0x000393b3) cell_ai5_widget_pane_g10_ParamLimits

0xe870,	// (0x000393b3) cell_ai5_widget_pane_g10

0xeb95,	// (0x000396d8) status_icon_pane_g1

0x71d0,	// (0x00031d13) bg_popup_sub_pane_cp13

0xeb9d,	// (0x000396e0) popup_keymap_window_t1

0x900d,	// (0x00033b50) control_pane_g6_ParamLimits

0x900d,	// (0x00033b50) control_pane_g6

0x901a,	// (0x00033b5d) control_pane_g7_ParamLimits

0x901a,	// (0x00033b5d) control_pane_g7

0x9027,	// (0x00033b6a) control_pane_g8_ParamLimits

0x9027,	// (0x00033b6a) control_pane_g8

0xeab8,	// (0x000395fb) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x00039608) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x00039619) dt_sta_title_pane_ParamLimits

0x800c,	// (0x00032b4f) aid_size_touch_scroll_bar_cale

0x4e76,	// (0x0002f9b9) popup_discreet_window_ParamLimits

0x4e76,	// (0x0002f9b9) popup_discreet_window

0x4f04,	// (0x0002fa47) popup_sk_window

0xa275,	// (0x00034db8) bg_popup_sub_pane_cp28_ParamLimits

0xa275,	// (0x00034db8) bg_popup_sub_pane_cp28

0xebab,	// (0x000396ee) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x000396ee) popup_discreet_window_g1

0xebcb,	// (0x0003970e) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x0003970e) popup_discreet_window_t1

0xebe9,	// (0x0003972c) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x0003972c) popup_discreet_window_t2

0x0002,

0xfec5,	// (0x0003aa08) popup_discreet_window_t_ParamLimits

0xfec5,	// (0x0003aa08) popup_discreet_window_t

0x7198,	// (0x00031cdb) popup_sk_window_g1

0x71a2,	// (0x00031ce5) popup_sk_window_g2

0x0001,

0xfecc,	// (0x0003aa0f) popup_sk_window_g

0xec3b,	// (0x0003977e) popup_sk_window_t1

0xec49,	// (0x0003978c) popup_sk_window_t1_copy1

0xe7f2,	// (0x00039335) cell_ai5_widget_pane_g2_ParamLimits

0xe947,	// (0x0003948a) cell_ai5_widget_pane_t9_ParamLimits

0xe947,	// (0x0003948a) cell_ai5_widget_pane_t9

0x71d0,	// (0x00031d13) main_fep_fshwr2_pane

0xec57,	// (0x0003979a) aid_fshwr2_btn_pane

0xec5f,	// (0x000397a2) aid_fshwr2_syb_pane

0xec67,	// (0x000397aa) aid_fshwr2_txt_pane

0xec6f,	// (0x000397b2) fshwr2_func_candi_pane

0xec79,	// (0x000397bc) fshwr2_hwr_syb_pane

0xec83,	// (0x000397c6) fshwr2_icf_pane

0x71d0,	// (0x00031d13) fshwr2_icf_bg_pane

0xeca5,	// (0x000397e8) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x000397e8) fshwr2_icf_pane_t1

0xc244,	// (0x00036d87) fshwr2_func_candi_pane_g1

0xecbc,	// (0x000397ff) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x000397ff) fshwr2_func_candi_row_pane

0xeccd,	// (0x00039810) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x00039810) cell_fshwr2_syb_pane

0xc4ce,	// (0x00037011) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4ce,	// (0x00037011) fshwr2_hwr_syb_pane_g1

0x71d0,	// (0x00031d13) bg_popup_call_pane_cp01

0xece7,	// (0x0003982a) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x0003982a) fshwr2_func_candi_cell_pane

0xed19,	// (0x0003985c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x0003985c) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x00039876) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x00039876) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x00039896) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x00039896) fshwr2_func_candi_cell_pane_t1

0x71d0,	// (0x00031d13) bg_button_pane_cp08

0x8d32,	// (0x00033875) cell_fshwr2_syb_bg_pane

0xed66,	// (0x000398a9) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x000398b1) cell_fshwr2_syb_bg_pane_t1

0x80d4,	// (0x00032c17) main_tmo_pane

0xad9f,	// (0x000358e2) uni_indicator_pane_g1_ParamLimits

0xadb4,	// (0x000358f7) uni_indicator_pane_g2_ParamLimits

0xadca,	// (0x0003590d) uni_indicator_pane_g3_ParamLimits

0xade0,	// (0x00035923) uni_indicator_pane_g4_ParamLimits

0xade0,	// (0x00035923) uni_indicator_pane_g4

0xadf4,	// (0x00035937) uni_indicator_pane_g5_ParamLimits

0xadf4,	// (0x00035937) uni_indicator_pane_g5

0xae08,	// (0x0003594b) uni_indicator_pane_g6_ParamLimits

0xae08,	// (0x0003594b) uni_indicator_pane_g6

0xf95a,	// (0x0003a49d) uni_indicator_pane_g_ParamLimits

0xd750,	// (0x00038293) popup_tmo_note_window_ParamLimits

0xd750,	// (0x00038293) popup_tmo_note_window

0x71d0,	// (0x00031d13) fshwr2_bg_pane

0xed44,	// (0x00039887) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x00039887) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfed1,	// (0x0003aa14) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfed1,	// (0x0003aa14) fshwr2_func_candi_cell_pane_g

0xc244,	// (0x00036d87) bg_popup_window_pane_cp01

0xed7d,	// (0x000398c0) bg_popup_window_pane_g1_cp01

0xed86,	// (0x000398c9) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x000398c9) bg_popup_window_pane_cp22

0xed94,	// (0x000398d7) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x000398d7) listscroll_tmo_link_pane

0xedd4,	// (0x00039917) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00039917) popup_tmo_note_window_g1

0xede1,	// (0x00039924) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00039924) tmo_note_info_pane

0xedfb,	// (0x0003993e) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x0003993e) list_tmo_note_info_pane_g1

0xee12,	// (0x00039955) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x00039955) list_tmo_note_info_pane_g2

0x0001,

0xfed6,	// (0x0003aa19) list_tmo_note_info_pane_g_ParamLimits

0xfed6,	// (0x0003aa19) list_tmo_note_info_pane_g

0xee2e,	// (0x00039971) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x00039971) list_tmo_note_info_text_pane

0xeeb3,	// (0x000399f6) list_tmo_link_pane

0xeec0,	// (0x00039a03) scroll_pane_cp20

0xeecd,	// (0x00039a10) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x00039a10) list_single_tmo_link_pane

0xeedd,	// (0x00039a20) list_single_tmo_link_pane_t1

0xeeeb,	// (0x00039a2e) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x00039a2e) list_tmo_note_info_text_pane_t1

0x819a,	// (0x00032cdd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x819a,	// (0x00032cdd) aid_size_touch_scroll_bar_cp01

0x569a,	// (0x000301dd) aid_size_touch_slider_marker

0x4eec,	// (0x0002fa2f) popup_settings_window_ParamLimits

0x4eec,	// (0x0002fa2f) popup_settings_window

0x5e2e,	// (0x00030971) popup_candi_list_indi_window

0x9739,	// (0x0003427c) aid_touch_navi_pane_ParamLimits

0x6968,	// (0x000314ab) rs_clock_indi_pane

0x6971,	// (0x000314b4) sctrl_sk_bottom_pane_ParamLimits

0x6982,	// (0x000314c5) sctrl_sk_top_pane_ParamLimits

0x6a83,	// (0x000315c6) popup_fep_tooltip_window

0xe7b6,	// (0x000392f9) aid_size_cell_widget_grid_ParamLimits

0xe7e6,	// (0x00039329) cell_ai5_widget_pane_g1_ParamLimits

0xe7e6,	// (0x00039329) cell_ai5_widget_pane_g1

0xe82e,	// (0x00039371) cell_ai5_widget_pane_g6_ParamLimits

0xe83c,	// (0x0003937f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe54,	// (0x0003a997) cell_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0003a997) cell_ai5_widget_pane_g

0xe96b,	// (0x000394ae) cell_ai5_widget_pane_t10_ParamLimits

0xe96b,	// (0x000394ae) cell_ai5_widget_pane_t10

0xe97d,	// (0x000394c0) grid_ai5_widget_pane_ParamLimits

0xea1e,	// (0x00039561) cell_contacts_ai5_widget_pane_ParamLimits

0xea1e,	// (0x00039561) cell_contacts_ai5_widget_pane

0xebfe,	// (0x00039741) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x00039741) popup_discreet_window_t3

0xec8d,	// (0x000397d0) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x000397d0) popup_fshwr2_char_preview_window

0xee4c,	// (0x0003998f) tmo_note_info_pane_t1

0xee61,	// (0x000399a4) tmo_note_info_pane_t2

0xee7a,	// (0x000399bd) tmo_note_info_pane_t3

0xee8f,	// (0x000399d2) tmo_note_info_pane_t4

0xeea1,	// (0x000399e4) tmo_note_info_pane_t5

0x0004,

0xfedb,	// (0x0003aa1e) tmo_note_info_pane_t

0xeeb3,	// (0x000399f6) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x00039a03) scroll_pane_cp20_ParamLimits

0x71d0,	// (0x00031d13) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00039a47) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x00039a55) popup_candi_list_indi_window_g1

0xef1b,	// (0x00039a5e) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x00039a6a) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x00039a7e) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x00039a8d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee6,	// (0x0003aa29) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x00039aa0) cell_contacts_ai5_widget_pane_t1

0x80d4,	// (0x00032c17) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00039b1a) settings_container_pane

0x8d32,	// (0x00033875) listscroll_set_pane_copy1

0xb979,	// (0x000364bc) scroll_pane_cp121_copy1

0xefe3,	// (0x00039b26) set_content_pane_copy1

0xefeb,	// (0x00039b2e) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00039b2e) aid_height_set_list_copy1

0xb008,	// (0x00035b4b) aid_size_parent_copy1_ParamLimits

0xb008,	// (0x00035b4b) aid_size_parent_copy1

0xeff7,	// (0x00039b3a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00039b3a) button_value_adjust_pane_cp6_copy1

0x90b8,	// (0x00033bfb) list_highlight_pane_cp2_copy1_ParamLimits

0x90b8,	// (0x00033bfb) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00039b4e) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00039b4e) list_set_pane_copy1

0xef72,	// (0x00039ab5) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00039ab5) main_pane_set_t1_copy1

0xefac,	// (0x00039aef) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00039aef) main_pane_set_t2_copy1

0xf0d2,	// (0x00039c15) main_pane_set_t3_copy1

0xf0e0,	// (0x00039c23) main_pane_set_t4_copy1

0xefcb,	// (0x00039b0e) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00039b0e) set_content_pane_g1_copy1

0xf0ee,	// (0x00039c31) setting_code_pane_copy1

0xf0f8,	// (0x00039c3b) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00039c3b) setting_slider_pane_copy1

0xf102,	// (0x00039c45) setting_text_pane_copy1

0xf10c,	// (0x00039c4f) setting_volume_pane_copy1

0xf115,	// (0x00039c58) settings_code_pane_cp2_copy1

0xf11d,	// (0x00039c60) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00039c60) settings_code_pane_cp_copy1

0xf131,	// (0x00039c74) volume_set_pane_copy1

0xf13d,	// (0x00039c80) volume_set_pane_g10_copy1

0xf149,	// (0x00039c8c) volume_set_pane_g1_copy1

0xf153,	// (0x00039c96) volume_set_pane_g2_copy1

0xf15d,	// (0x00039ca0) volume_set_pane_g3_copy1

0xf167,	// (0x00039caa) volume_set_pane_g4_copy1

0xf171,	// (0x00039cb4) volume_set_pane_g5_copy1

0xf17b,	// (0x00039cbe) volume_set_pane_g6_copy1

0xf185,	// (0x00039cc8) volume_set_pane_g7_copy1

0xf18f,	// (0x00039cd2) volume_set_pane_g8_copy1

0xf199,	// (0x00039cdc) volume_set_pane_g9_copy1

0x72c4,	// (0x00031e07) bg_set_opt_pane_cp_copy1_ParamLimits

0x72c4,	// (0x00031e07) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00039ce6) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00039ce6) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00039d04) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00039d04) setting_slider_pane_t2_copy1

0xf1db,	// (0x00039d1e) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00039d1e) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00039d36) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00039d36) slider_set_pane_copy1

0x813b,	// (0x00032c7e) set_opt_bg_pane_g1_copy2

0x8143,	// (0x00032c86) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00039d4c) set_opt_bg_pane_g3_copy2

0x8153,	// (0x00032c96) set_opt_bg_pane_g4_copy2

0x815b,	// (0x00032c9e) set_opt_bg_pane_g5_copy2

0x8163,	// (0x00032ca6) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00039d56) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00039d60) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00039d6a) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00039d74) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00039d74) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00039d88) slider_set_pane_g1_copy1

0xf24e,	// (0x00039d91) slider_set_pane_g2_copy1

0xc125,	// (0x00036c68) slider_set_pane_g3_copy1_ParamLimits

0xc125,	// (0x00036c68) slider_set_pane_g3_copy1

0xc139,	// (0x00036c7c) slider_set_pane_g4_copy1_ParamLimits

0xc139,	// (0x00036c7c) slider_set_pane_g4_copy1

0xc151,	// (0x00036c94) slider_set_pane_g5_copy1_ParamLimits

0xc151,	// (0x00036c94) slider_set_pane_g5_copy1

0xc125,	// (0x00036c68) slider_set_pane_g6_copy1_ParamLimits

0xc125,	// (0x00036c68) slider_set_pane_g6_copy1

0xf256,	// (0x00039d99) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00039d99) slider_set_pane_g7_copy1

0x71e4,	// (0x00031d27) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00039daf) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00039db8) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00039dc8) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00039dd8) slider_set_pane_cp_copy1

0xf2a5,	// (0x00039de8) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00039df1) list_set_text_pane_copy1

0xf2b6,	// (0x00039df9) setting_text_pane_g1_copy1

0x7cb7,	// (0x000327fa) set_text_pane_t1_copy1

0xf2a5,	// (0x00039de8) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00039df9) setting_code_pane_g1_copy1

0xf2bf,	// (0x00039e02) setting_code_pane_t1_copy1

0xf2cd,	// (0x00039e10) list_set_graphic_pane_copy1

0x71e4,	// (0x00031d27) bg_set_opt_pane_cp4_copy1

0x8a2c,	// (0x0003356f) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a2c,	// (0x0003356f) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x00039e22) list_set_graphic_pane_g2_copy1

0x8a44,	// (0x00033587) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a44,	// (0x00033587) list_set_graphic_pane_t1_copy1

0xc244,	// (0x00036d87) rs_clock_indi_pane_g1

0xf2e7,	// (0x00039e2a) rs_clock_indi_pane_t1

0xf2f5,	// (0x00039e38) rs_indi_pane

0xf2fd,	// (0x00039e40) rs_indi_pane_g1

0xf306,	// (0x00039e49) rs_indi_pane_g2

0xf30f,	// (0x00039e52) rs_indi_pane_g3

0x0002,

0xfeed,	// (0x0003aa30) rs_indi_pane_g

0x8d32,	// (0x00033875) bg_popup_preview_window_pane_cp03

0xf318,	// (0x00039e5b) popup_fep_tooltip_window_t1

0xcef8,	// (0x00037a3b) popup_note2_window_g2_ParamLimits

0xcef8,	// (0x00037a3b) popup_note2_window_g2

0x0001,

0xfc8b,	// (0x0003a7ce) popup_note2_window_g_ParamLimits

0xfc8b,	// (0x0003a7ce) popup_note2_window_g

0xd400,	// (0x00037f43) bg_popup_sub_pane_cp11_ParamLimits

0xd40d,	// (0x00037f50) cell_ai3_links_pane_g1_ParamLimits

0xd424,	// (0x00037f67) cell_ai3_links_pane_t1

0x7cb7,	// (0x000327fa) set_text_pane_t1_copy1_ParamLimits

0x8c3f,	// (0x00033782) cell_graphic_popup_pane_cp2_ParamLimits

0x8c3f,	// (0x00033782) cell_graphic_popup_pane_cp2

0xf326,	// (0x00039e69) cell_graphic_popup_pane_g1_cp2

0x7e1f,	// (0x00032962) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x00039e71) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x00039e79) cell_graphic_popup_pane_t2_cp2

0x7e30,	// (0x00032973) grid_highlight_pane_cp3_cp2

0x8487,	// (0x00032fca) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80d4,	// (0x00032c17) main_tmo_pane_ParamLimits

0xd744,	// (0x00038287) popup_tmo_big_image_note_window

0xe7d6,	// (0x00039319) cell_ai5_widget_list_pane

0xe7de,	// (0x00039321) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x0003998f) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x000399a4) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x000399bd) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x000399d2) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x000399e4) tmo_note_info_pane_t5_ParamLimits

0xfedb,	// (0x0003aa1e) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00039b1a) settings_container_pane_ParamLimits

0xf29d,	// (0x00039de0) indicator_popup_pane_cp5

0xf29d,	// (0x00039de0) indicator_popup_pane_cp6

0xf2cd,	// (0x00039e10) list_set_graphic_pane_copy1_ParamLimits

0x71d0,	// (0x00031d13) bg_popup_window_pane_cp23

0xf344,	// (0x00039e87) popup_tmo_big_image_note_window_g1

0xf350,	// (0x00039e93) popup_tmo_big_image_note_window_t1

0xf360,	// (0x00039ea3) popup_tmo_big_image_note_window_t2

0xf370,	// (0x00039eb3) popup_tmo_big_image_note_window_t3

0x0002,

0xfef4,	// (0x0003aa37) popup_tmo_big_image_note_window_t

0xf380,	// (0x00039ec3) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x00039ecb) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x00039ed9) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x00039ed9) cell_ai5_widget_list_row_pane

0xf3af,	// (0x00039ef2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x00039ef2) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x00039eff) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x00039eff) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x00039f17) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x00039f17) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfefb,	// (0x0003aa3e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfefb,	// (0x0003aa3e) cell_ai5_widget_list_row_pane_t

0x4d99,	// (0x0002f8dc) main_fep_vtchi_ss_pane

0xf3e6,	// (0x00039f29) popup_fep_char_pre_window

0xf3ee,	// (0x00039f31) popup_fep_ituss_window

0xf3f9,	// (0x00039f3c) popup_fep_vkbss_window

0xf404,	// (0x00039f47) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x00039f47) grid_vkbss_keypad_pane

0xf414,	// (0x00039f57) ituss_keypad_pane

0xf41c,	// (0x00039f5f) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x00039f5f) aid_vkbss_key_offset

0xf42b,	// (0x00039f6e) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00039f6e) cell_vkbss_key_pane

0xf441,	// (0x00039f84) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x00039f84) bg_cell_vkbss_key_g1

0xf44d,	// (0x00039f90) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x00039f90) cell_vkbss_key_3p_pane

0xf467,	// (0x00039faa) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x00039faa) cell_vkbss_key_g1

0xf481,	// (0x00039fc4) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x00039fc4) cell_vkbss_key_t1

0xf4ac,	// (0x00039fef) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x00039fef) cell_ituss_key_pane

0xf4bb,	// (0x00039ffe) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x00039ffe) bg_cell_ituss_key_g1

0xf4c7,	// (0x0003a00a) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x0003a00a) cell_ituss_key_pane_g1

0xf4d3,	// (0x0003a016) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x0003a016) cell_ituss_key_pane_g2

0x0001,

0xff00,	// (0x0003aa43) cell_ituss_key_pane_g_ParamLimits

0xff00,	// (0x0003aa43) cell_ituss_key_pane_g

0xf4e7,	// (0x0003a02a) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0003a02a) cell_ituss_key_t1

0xf505,	// (0x0003a048) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0003a048) cell_ituss_key_t2

0xf524,	// (0x0003a067) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0003a067) cell_ituss_key_t3

0xf543,	// (0x0003a086) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0003a086) cell_ituss_key_t4

0x0003,

0xff05,	// (0x0003aa48) cell_ituss_key_t_ParamLimits

0xff05,	// (0x0003aa48) cell_ituss_key_t

0xf562,	// (0x0003a0a5) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0003a0ad) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0003a0b5) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0e,	// (0x0003aa51) cell_vkbss_key_3p_pane_g

0x71d0,	// (0x00031d13) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0003a0bd) popup_fep_char_pre_window_t1

0xe7ac,	// (0x000392ef) main_ai5_sk_pane

0xef1b,	// (0x00039a5e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x00039a6a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x00039a7e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x00039a8d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee6,	// (0x0003aa29) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x00039aa0) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80d4,	// (0x00032c17) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0003a0cc) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small

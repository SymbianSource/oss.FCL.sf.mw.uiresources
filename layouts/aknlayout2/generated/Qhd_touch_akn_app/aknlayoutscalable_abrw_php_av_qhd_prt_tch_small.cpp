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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002a8be };

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
0x7db8,	// (0x00032676) Screen

0x7dcc,	// (0x0003268a) application_window_ParamLimits

0x7dcc,	// (0x0003268a) application_window

0x7de6,	// (0x000326a4) screen_g1

0x4875,	// (0x0002f133) area_bottom_pane_ParamLimits

0x4875,	// (0x0002f133) area_bottom_pane

0x4935,	// (0x0002f1f3) area_top_pane_ParamLimits

0x4935,	// (0x0002f1f3) area_top_pane

0x49d3,	// (0x0002f291) main_pane_ParamLimits

0x49d3,	// (0x0002f291) main_pane

0x7df0,	// (0x000326ae) misc_graphics

0x97ce,	// (0x0003408c) battery_pane_ParamLimits

0x97ce,	// (0x0003408c) battery_pane

0xa4ae,	// (0x00034d6c) bg_status_flat_pane_g8

0xa4b6,	// (0x00034d74) bg_status_flat_pane_g9

0x9890,	// (0x0003414e) context_pane_ParamLimits

0x9890,	// (0x0003414e) context_pane

0x99a6,	// (0x00034264) navi_pane_ParamLimits

0x99a6,	// (0x00034264) navi_pane

0x9a2a,	// (0x000342e8) signal_pane_ParamLimits

0x9a2a,	// (0x000342e8) signal_pane

0x0008,

0xf879,	// (0x0003a137) bg_status_flat_pane_g

0x9a97,	// (0x00034355) status_pane_g1_ParamLimits

0x9a97,	// (0x00034355) status_pane_g1

0x9aab,	// (0x00034369) status_pane_g2_ParamLimits

0x9aab,	// (0x00034369) status_pane_g2

0x9ab7,	// (0x00034375) status_pane_g3_ParamLimits

0x9ab7,	// (0x00034375) status_pane_g3

0x0004,

0xf7a0,	// (0x0003a05e) status_pane_g_ParamLimits

0xf7a0,	// (0x0003a05e) status_pane_g

0x9aeb,	// (0x000343a9) title_pane_ParamLimits

0x9aeb,	// (0x000343a9) title_pane

0x9b28,	// (0x000343e6) uni_indicator_pane_ParamLimits

0x9b28,	// (0x000343e6) uni_indicator_pane

0x96fe,	// (0x00033fbc) bg_list_pane_ParamLimits

0x96fe,	// (0x00033fbc) bg_list_pane

0x5a4d,	// (0x0003030b) find_pane

0x971e,	// (0x00033fdc) listscroll_app_pane_ParamLimits

0x971e,	// (0x00033fdc) listscroll_app_pane

0x972a,	// (0x00033fe8) listscroll_form_pane

0x47ab,	// (0x0002f069) listscroll_gen_pane_ParamLimits

0x47ab,	// (0x0002f069) listscroll_gen_pane

0x5a55,	// (0x00030313) listscroll_set_pane

0x8946,	// (0x00033204) main_idle_act_pane

0x93fa,	// (0x00033cb8) main_idle_trad_pane

0x93fa,	// (0x00033cb8) main_list_empty_pane

0x971e,	// (0x00033fdc) main_midp_pane

0x9744,	// (0x00034002) main_pane_g1_ParamLimits

0x9744,	// (0x00034002) main_pane_g1

0x5a6b,	// (0x00030329) popup_ai_message_window_ParamLimits

0x5a6b,	// (0x00030329) popup_ai_message_window

0x5b11,	// (0x000303cf) popup_fep_china_uni_window_ParamLimits

0x5b11,	// (0x000303cf) popup_fep_china_uni_window

0x5b6d,	// (0x0003042b) popup_fep_japan_candidate_window_ParamLimits

0x5b6d,	// (0x0003042b) popup_fep_japan_candidate_window

0x5b8d,	// (0x0003044b) popup_fep_japan_predictive_window_ParamLimits

0x5b8d,	// (0x0003044b) popup_fep_japan_predictive_window

0x5bbd,	// (0x0003047b) popup_find_window

0x5bca,	// (0x00030488) popup_grid_graphic_window_ParamLimits

0x5bca,	// (0x00030488) popup_grid_graphic_window

0x5bf4,	// (0x000304b2) popup_large_graphic_colour_window

0x5c1a,	// (0x000304d8) popup_menu_window_ParamLimits

0x5c1a,	// (0x000304d8) popup_menu_window

0x5dd2,	// (0x00030690) popup_note_image_window

0x5dbe,	// (0x0003067c) popup_note_wait_window_ParamLimits

0x5dbe,	// (0x0003067c) popup_note_wait_window

0x5dbe,	// (0x0003067c) popup_note_window_ParamLimits

0x5dbe,	// (0x0003067c) popup_note_window

0x5e28,	// (0x000306e6) popup_query_code_window_ParamLimits

0x5e28,	// (0x000306e6) popup_query_code_window

0x5e3c,	// (0x000306fa) popup_query_data_code_window_ParamLimits

0x5e3c,	// (0x000306fa) popup_query_data_code_window

0x5e59,	// (0x00030717) popup_query_data_window_ParamLimits

0x5e59,	// (0x00030717) popup_query_data_window

0x5e75,	// (0x00030733) popup_query_sat_info_window_ParamLimits

0x5e75,	// (0x00030733) popup_query_sat_info_window

0x5eae,	// (0x0003076c) popup_snote_single_graphic_window_ParamLimits

0x5eae,	// (0x0003076c) popup_snote_single_graphic_window

0x5eae,	// (0x0003076c) popup_snote_single_text_window_ParamLimits

0x5eae,	// (0x0003076c) popup_snote_single_text_window

0x5ec3,	// (0x00030781) popup_sub_window_general

0x5ff3,	// (0x000308b1) popup_window_general_ParamLimits

0x5ff3,	// (0x000308b1) popup_window_general

0x9752,	// (0x00034010) power_save_pane

0x58df,	// (0x0003019d) control_pane_g1_ParamLimits

0x58df,	// (0x0003019d) control_pane_g1

0x5906,	// (0x000301c4) control_pane_g2_ParamLimits

0x5906,	// (0x000301c4) control_pane_g2

0x96c1,	// (0x00033f7f) control_pane_g3_ParamLimits

0x96c1,	// (0x00033f7f) control_pane_g3

0x0007,

0xf788,	// (0x0003a046) control_pane_g_ParamLimits

0xf788,	// (0x0003a046) control_pane_g

0x5950,	// (0x0003020e) control_pane_t1_ParamLimits

0x5950,	// (0x0003020e) control_pane_t1

0x59a4,	// (0x00030262) control_pane_t2_ParamLimits

0x59a4,	// (0x00030262) control_pane_t2

0x0002,

0xf799,	// (0x0003a057) control_pane_t_ParamLimits

0xf799,	// (0x0003a057) control_pane_t

0x95e6,	// (0x00033ea4) navi_navi_volume_pane_cp1

0x95ee,	// (0x00033eac) status_small_icon_pane

0x95f6,	// (0x00033eb4) status_small_pane_g1_ParamLimits

0x95f6,	// (0x00033eb4) status_small_pane_g1

0x962a,	// (0x00033ee8) status_small_pane_g2_ParamLimits

0x962a,	// (0x00033ee8) status_small_pane_g2

0x9636,	// (0x00033ef4) status_small_pane_g3_ParamLimits

0x9636,	// (0x00033ef4) status_small_pane_g3

0x9642,	// (0x00033f00) status_small_pane_g4_ParamLimits

0x9642,	// (0x00033f00) status_small_pane_g4

0x964e,	// (0x00033f0c) status_small_pane_g5_ParamLimits

0x964e,	// (0x00033f0c) status_small_pane_g5

0x965c,	// (0x00033f1a) status_small_pane_g6_ParamLimits

0x965c,	// (0x00033f1a) status_small_pane_g6

0x0007,

0xf777,	// (0x0003a035) status_small_pane_g_ParamLimits

0xf777,	// (0x0003a035) status_small_pane_g

0x968b,	// (0x00033f49) status_small_pane_t1

0x96ad,	// (0x00033f6b) status_small_wait_pane_ParamLimits

0x96ad,	// (0x00033f6b) status_small_wait_pane

0x8e6c,	// (0x0003372a) aid_levels_signal_ParamLimits

0x8e6c,	// (0x0003372a) aid_levels_signal

0x8e7e,	// (0x0003373c) signal_pane_g1_ParamLimits

0x8e7e,	// (0x0003373c) signal_pane_g1

0x8e93,	// (0x00033751) signal_pane_g2_ParamLimits

0x8e93,	// (0x00033751) signal_pane_g2

0x0003,

0xf708,	// (0x00039fc6) signal_pane_g_ParamLimits

0xf708,	// (0x00039fc6) signal_pane_g

0x8ece,	// (0x0003378c) context_pane_g1

0x7dfa,	// (0x000326b8) title_pane_g1

0x7e30,	// (0x000326ee) title_pane_t1

0x7e98,	// (0x00032756) title_pane_t2

0x7ebe,	// (0x0003277c) title_pane_t3

0x0002,

0xf557,	// (0x00039e15) title_pane_t

0x9b40,	// (0x000343fe) aid_levels_battery_ParamLimits

0x9b40,	// (0x000343fe) aid_levels_battery

0x9b54,	// (0x00034412) battery_pane_g1_ParamLimits

0x9b54,	// (0x00034412) battery_pane_g1

0x9b6a,	// (0x00034428) battery_pane_g2_ParamLimits

0x9b6a,	// (0x00034428) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003a069) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003a069) battery_pane_g

0xade4,	// (0x000356a2) uni_indicator_pane_g1

0xadf7,	// (0x000356b5) uni_indicator_pane_g2

0xae09,	// (0x000356c7) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a1df) uni_indicator_pane_g

0x926c,	// (0x00033b2a) navi_icon_pane_ParamLimits

0x926c,	// (0x00033b2a) navi_icon_pane

0x91aa,	// (0x00033a68) navi_midp_pane

0x9288,	// (0x00033b46) navi_navi_pane

0x9292,	// (0x00033b50) navi_text_pane_ParamLimits

0x9292,	// (0x00033b50) navi_text_pane

0x7de6,	// (0x000326a4) status_small_wait_pane_g1

0x8313,	// (0x00032bd1) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a1da) status_small_wait_pane_g

0xab09,	// (0x000353c7) navi_navi_icon_text_pane

0xab11,	// (0x000353cf) navi_navi_pane_g1_ParamLimits

0xab11,	// (0x000353cf) navi_navi_pane_g1

0xab23,	// (0x000353e1) navi_navi_pane_g2_ParamLimits

0xab23,	// (0x000353e1) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003a1a8) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003a1a8) navi_navi_pane_g

0xab35,	// (0x000353f3) navi_navi_tabs_pane

0xab3e,	// (0x000353fc) navi_navi_text_pane

0xab09,	// (0x000353c7) navi_navi_volume_pane

0xaae5,	// (0x000353a3) navi_text_pane_t1

0xaad9,	// (0x00035397) navi_icon_pane_g1

0xaa2c,	// (0x000352ea) navi_navi_text_pane_t1

0x629f,	// (0x00030b5d) navi_navi_volume_pane_g1

0x62a7,	// (0x00030b65) volume_small_pane

0xa992,	// (0x00035250) navi_navi_icon_text_pane_g1

0xa99a,	// (0x00035258) navi_navi_icon_text_pane_t1

0x9288,	// (0x00033b46) navi_tabs_2_long_pane

0x9288,	// (0x00033b46) navi_tabs_2_pane

0x9288,	// (0x00033b46) navi_tabs_3_long_pane

0x9288,	// (0x00033b46) navi_tabs_3_pane

0x9288,	// (0x00033b46) navi_tabs_4_pane

0x627f,	// (0x00030b3d) tabs_2_active_pane_ParamLimits

0x627f,	// (0x00030b3d) tabs_2_active_pane

0x628f,	// (0x00030b4d) tabs_2_passive_pane_ParamLimits

0x628f,	// (0x00030b4d) tabs_2_passive_pane

0x624d,	// (0x00030b0b) tabs_3_active_pane_ParamLimits

0x624d,	// (0x00030b0b) tabs_3_active_pane

0x625d,	// (0x00030b1b) tabs_3_passive_pane_ParamLimits

0x625d,	// (0x00030b1b) tabs_3_passive_pane

0x626e,	// (0x00030b2c) tabs_3_passive_pane_cp_ParamLimits

0x626e,	// (0x00030b2c) tabs_3_passive_pane_cp

0x6209,	// (0x00030ac7) tabs_4_active_pane_ParamLimits

0x6209,	// (0x00030ac7) tabs_4_active_pane

0x621a,	// (0x00030ad8) tabs_4_passive_pane_ParamLimits

0x621a,	// (0x00030ad8) tabs_4_passive_pane

0x622b,	// (0x00030ae9) tabs_4_passive_pane_cp_ParamLimits

0x622b,	// (0x00030ae9) tabs_4_passive_pane_cp

0x623c,	// (0x00030afa) tabs_4_passive_pane_cp2_ParamLimits

0x623c,	// (0x00030afa) tabs_4_passive_pane_cp2

0x61e5,	// (0x00030aa3) tabs_2_long_active_pane_ParamLimits

0x61e5,	// (0x00030aa3) tabs_2_long_active_pane

0x61f7,	// (0x00030ab5) tabs_2_long_passive_pane_ParamLimits

0x61f7,	// (0x00030ab5) tabs_2_long_passive_pane

0x61a6,	// (0x00030a64) tabs_3_long_active_pane_ParamLimits

0x61a6,	// (0x00030a64) tabs_3_long_active_pane

0x61b9,	// (0x00030a77) tabs_3_long_passive_pane_ParamLimits

0x61b9,	// (0x00030a77) tabs_3_long_passive_pane

0x61d2,	// (0x00030a90) tabs_3_long_passive_pane_cp_ParamLimits

0x61d2,	// (0x00030a90) tabs_3_long_passive_pane_cp

0x614c,	// (0x00030a0a) volume_small_pane_g1

0x6155,	// (0x00030a13) volume_small_pane_g2

0x615e,	// (0x00030a1c) volume_small_pane_g3

0x6167,	// (0x00030a25) volume_small_pane_g4

0x6170,	// (0x00030a2e) volume_small_pane_g5

0x6179,	// (0x00030a37) volume_small_pane_g6

0x6182,	// (0x00030a40) volume_small_pane_g7

0x618b,	// (0x00030a49) volume_small_pane_g8

0x6194,	// (0x00030a52) volume_small_pane_g9

0x619d,	// (0x00030a5b) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003a174) volume_small_pane_g

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp2_ParamLimits

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp2

0x7ede,	// (0x0003279c) tabs_3_active_pane_g1

0x7ee6,	// (0x000327a4) tabs_3_active_pane_t1

0x7ed0,	// (0x0003278e) bg_passive_tab_pane_cp2_ParamLimits

0x7ed0,	// (0x0003278e) bg_passive_tab_pane_cp2

0x7ede,	// (0x0003279c) tabs_3_passive_pane_g1

0x7ee6,	// (0x000327a4) tabs_3_passive_pane_t1

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp3_ParamLimits

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp3

0x7ef8,	// (0x000327b6) tabs_4_active_pane_g1

0x7f00,	// (0x000327be) tabs_4_active_pane_t1

0x7ed0,	// (0x0003278e) bg_passive_tab_pane_cp3_ParamLimits

0x7ed0,	// (0x0003278e) bg_passive_tab_pane_cp3

0x7ef8,	// (0x000327b6) tabs_4_1_passive_pane_g1

0x7f00,	// (0x000327be) tabs_4_1_passive_pane_t1

0x971e,	// (0x00033fdc) list_highlight_pane_cp2

0xb04c,	// (0x0003590a) list_set_pane_ParamLimits

0xb04c,	// (0x0003590a) list_set_pane

0xb0f2,	// (0x000359b0) main_pane_set_t1_ParamLimits

0xb0f2,	// (0x000359b0) main_pane_set_t1

0xb112,	// (0x000359d0) main_pane_set_t2_ParamLimits

0xb112,	// (0x000359d0) main_pane_set_t2

0xb126,	// (0x000359e4) main_pane_set_t3_ParamLimits

0xb126,	// (0x000359e4) main_pane_set_t3

0xb138,	// (0x000359f6) main_pane_set_t4_ParamLimits

0xb138,	// (0x000359f6) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a244) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a244) main_pane_set_t

0xb14a,	// (0x00035a08) setting_code_pane

0xb156,	// (0x00035a14) setting_slider_graphic_pane

0xb156,	// (0x00035a14) setting_slider_pane

0xb156,	// (0x00035a14) setting_text_pane

0xb156,	// (0x00035a14) setting_volume_pane

0x4c22,	// (0x0002f4e0) volume_set_pane

0x7ed0,	// (0x0003278e) bg_set_opt_pane_cp

0x4c2a,	// (0x0002f4e8) setting_slider_pane_t1

0x4c43,	// (0x0002f501) setting_slider_pane_t2

0x4c5d,	// (0x0002f51b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00039e1c) setting_slider_pane_t

0x4c75,	// (0x0002f533) slider_set_pane

0x7df0,	// (0x000326ae) bg_set_opt_pane_cp2

0x7f12,	// (0x000327d0) setting_slider_graphic_pane_g1

0x4c8b,	// (0x0002f549) setting_slider_graphic_pane_t1

0x4c9b,	// (0x0002f559) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00039e23) setting_slider_graphic_pane_t

0x4cab,	// (0x0002f569) slider_set_pane_cp

0x7df0,	// (0x000326ae) input_focus_pane_cp1

0xb00b,	// (0x000358c9) list_set_text_pane

0x7de6,	// (0x000326a4) setting_text_pane_g1

0x7df0,	// (0x000326ae) input_focus_pane_cp2

0x7de6,	// (0x000326a4) setting_code_pane_g1

0x7f1b,	// (0x000327d9) setting_code_pane_t1

0x4cb3,	// (0x0002f571) set_text_pane_t1_ParamLimits

0x4cb3,	// (0x0002f571) set_text_pane_t1

0x87bd,	// (0x0003307b) set_opt_bg_pane_g1

0x87c5,	// (0x00033083) set_opt_bg_pane_g2

0xafe5,	// (0x000358a3) set_opt_bg_pane_g3

0x87d5,	// (0x00033093) set_opt_bg_pane_g4

0x87dd,	// (0x0003309b) set_opt_bg_pane_g5

0x87e5,	// (0x000330a3) set_opt_bg_pane_g6

0xafef,	// (0x000358ad) set_opt_bg_pane_g7

0xaff7,	// (0x000358b5) set_opt_bg_pane_g8

0xb001,	// (0x000358bf) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a231) set_opt_bg_pane_g

0xafd8,	// (0x00035896) slider_set_pane_g1

0x6314,	// (0x00030bd2) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a222) slider_set_pane_g

0x62b0,	// (0x00030b6e) volume_set_pane_g1

0x62b8,	// (0x00030b76) volume_set_pane_g2

0x62c0,	// (0x00030b7e) volume_set_pane_g3

0x62c8,	// (0x00030b86) volume_set_pane_g4

0x62d0,	// (0x00030b8e) volume_set_pane_g5

0x62d8,	// (0x00030b96) volume_set_pane_g6

0x62e0,	// (0x00030b9e) volume_set_pane_g7

0x62e8,	// (0x00030ba6) volume_set_pane_g8

0x62f0,	// (0x00030bae) volume_set_pane_g9

0x62f8,	// (0x00030bb6) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a1fa) volume_set_pane_g

0x7f29,	// (0x000327e7) indicator_pane_ParamLimits

0x7f29,	// (0x000327e7) indicator_pane

0x7f35,	// (0x000327f3) main_idle_pane_g2_ParamLimits

0x7f35,	// (0x000327f3) main_idle_pane_g2

0x7f5d,	// (0x0003281b) main_pane_idle_g1_ParamLimits

0x7f5d,	// (0x0003281b) main_pane_idle_g1

0x7f6a,	// (0x00032828) popup_clock_digital_analogue_window_ParamLimits

0x7f6a,	// (0x00032828) popup_clock_digital_analogue_window

0x7f81,	// (0x0003283f) soft_indicator_pane_ParamLimits

0x7f81,	// (0x0003283f) soft_indicator_pane

0x7f8d,	// (0x0003284b) wallpaper_pane_ParamLimits

0x7f8d,	// (0x0003284b) wallpaper_pane

0x7de6,	// (0x000326a4) wallpaper_pane_g1

0x7fa1,	// (0x0003285f) indicator_pane_g1_ParamLimits

0x7fa1,	// (0x0003285f) indicator_pane_g1

0xb40f,	// (0x00035ccd) navi_navi_icon_text_pane_srt_g1

0x7fbc,	// (0x0003287a) soft_indicator_pane_t1

0x7fd6,	// (0x00032894) aid_ps_area_pane

0x7fe7,	// (0x000328a5) aid_ps_clock_pane

0x7ff5,	// (0x000328b3) aid_ps_indicator_pane

0x8001,	// (0x000328bf) indicator_ps_pane_ParamLimits

0x8001,	// (0x000328bf) indicator_ps_pane

0x8010,	// (0x000328ce) power_save_pane_g1_ParamLimits

0x8010,	// (0x000328ce) power_save_pane_g1

0x801c,	// (0x000328da) power_save_pane_g2_ParamLimits

0x801c,	// (0x000328da) power_save_pane_g2

0x4829,	// (0x0002f0e7) aid_navinavi_width_pane

0x7fd6,	// (0x00032894) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00039e28) power_save_pane_g_ParamLimits

0xf56a,	// (0x00039e28) power_save_pane_g

0x802a,	// (0x000328e8) power_save_pane_t1_ParamLimits

0x802a,	// (0x000328e8) power_save_pane_t1

0x7fe7,	// (0x000328a5) aid_ps_clock_pane_ParamLimits

0x7ff5,	// (0x000328b3) aid_ps_indicator_pane_ParamLimits

0x803c,	// (0x000328fa) power_save_pane_t4_ParamLimits

0x803c,	// (0x000328fa) power_save_pane_t4

0x0001,

0xf56f,	// (0x00039e2d) power_save_pane_t_ParamLimits

0xf56f,	// (0x00039e2d) power_save_pane_t

0x8066,	// (0x00032924) power_save_t3_ParamLimits

0x8066,	// (0x00032924) power_save_t3

0x8051,	// (0x0003290f) power_save_t2_ParamLimits

0x8051,	// (0x0003290f) power_save_t2

0x807b,	// (0x00032939) indicator_ps_pane_g1

0x8084,	// (0x00032942) ai_gene_pane_ParamLimits

0x8084,	// (0x00032942) ai_gene_pane

0x8090,	// (0x0003294e) ai_links_pane_ParamLimits

0x8090,	// (0x0003294e) ai_links_pane

0x809c,	// (0x0003295a) indicator_pane_cp1_ParamLimits

0x809c,	// (0x0003295a) indicator_pane_cp1

0x80a8,	// (0x00032966) main_pane_idle_g1_cp_ParamLimits

0x80a8,	// (0x00032966) main_pane_idle_g1_cp

0x80b4,	// (0x00032972) popup_ai_links_title_window

0x80bd,	// (0x0003297b) soft_indicator_pane_cp1_ParamLimits

0x80bd,	// (0x0003297b) soft_indicator_pane_cp1

0xadd2,	// (0x00035690) ai_links_pane_g1

0xaddb,	// (0x00035699) grid_ai_links_pane

0xadb5,	// (0x00035673) ai_gene_pane_1

0xadc0,	// (0x0003567e) ai_gene_pane_2

0xadc9,	// (0x00035687) list_highlight_pane_cp4

0xad99,	// (0x00035657) cell_ai_link_pane_ParamLimits

0xad99,	// (0x00035657) cell_ai_link_pane

0xad91,	// (0x0003564f) cell_ai_link_pane_g1

0x8313,	// (0x00032bd1) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a1d5) cell_ai_link_pane_g

0x7df0,	// (0x000326ae) grid_highlight_cp2

0x7df0,	// (0x000326ae) bg_popup_sub_pane_cp1

0x80d7,	// (0x00032995) popup_ai_links_title_window_t1

0xacdf,	// (0x0003559d) ai_gene_pane_1_g1_ParamLimits

0xacdf,	// (0x0003559d) ai_gene_pane_1_g1

0xaceb,	// (0x000355a9) ai_gene_pane_1_g2_ParamLimits

0xaceb,	// (0x000355a9) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003a1cb) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003a1cb) ai_gene_pane_1_g

0xacf8,	// (0x000355b6) ai_gene_pane_1_t1_ParamLimits

0xacf8,	// (0x000355b6) ai_gene_pane_1_t1

0xad2c,	// (0x000355ea) grid_ai_soft_ind_pane

0xacca,	// (0x00035588) ai_gene_pane_2_t1_ParamLimits

0xacca,	// (0x00035588) ai_gene_pane_2_t1

0x80e6,	// (0x000329a4) main_pane_empty_t1_ParamLimits

0x80e6,	// (0x000329a4) main_pane_empty_t1

0x80fe,	// (0x000329bc) main_pane_empty_t2_ParamLimits

0x80fe,	// (0x000329bc) main_pane_empty_t2

0x8113,	// (0x000329d1) main_pane_empty_t3_ParamLimits

0x8113,	// (0x000329d1) main_pane_empty_t3

0x8125,	// (0x000329e3) main_pane_empty_t4_ParamLimits

0x8125,	// (0x000329e3) main_pane_empty_t4

0x8137,	// (0x000329f5) main_pane_empty_t5_ParamLimits

0x8137,	// (0x000329f5) main_pane_empty_t5

0x0004,

0xf574,	// (0x00039e32) main_pane_empty_t_ParamLimits

0xf574,	// (0x00039e32) main_pane_empty_t

0x880e,	// (0x000330cc) bg_popup_window_pane_ParamLimits

0x880e,	// (0x000330cc) bg_popup_window_pane

0xaa3a,	// (0x000352f8) find_popup_pane_cp2_ParamLimits

0xaa3a,	// (0x000352f8) find_popup_pane_cp2

0xaa46,	// (0x00035304) heading_pane_ParamLimits

0xaa46,	// (0x00035304) heading_pane

0x7df0,	// (0x000326ae) bg_popup_sub_pane

0xa9b4,	// (0x00035272) bg_popup_window_pane_g1_ParamLimits

0xa9b4,	// (0x00035272) bg_popup_window_pane_g1

0xa9c0,	// (0x0003527e) bg_popup_window_pane_g2_ParamLimits

0xa9c0,	// (0x0003527e) bg_popup_window_pane_g2

0xa9cc,	// (0x0003528a) bg_popup_window_pane_g3_ParamLimits

0xa9cc,	// (0x0003528a) bg_popup_window_pane_g3

0xa9d8,	// (0x00035296) bg_popup_window_pane_g4_ParamLimits

0xa9d8,	// (0x00035296) bg_popup_window_pane_g4

0xa9e4,	// (0x000352a2) bg_popup_window_pane_g5_ParamLimits

0xa9e4,	// (0x000352a2) bg_popup_window_pane_g5

0xa9f0,	// (0x000352ae) bg_popup_window_pane_g6_ParamLimits

0xa9f0,	// (0x000352ae) bg_popup_window_pane_g6

0xa9fc,	// (0x000352ba) bg_popup_window_pane_g7_ParamLimits

0xa9fc,	// (0x000352ba) bg_popup_window_pane_g7

0xaa08,	// (0x000352c6) bg_popup_window_pane_g8_ParamLimits

0xaa08,	// (0x000352c6) bg_popup_window_pane_g8

0xaa14,	// (0x000352d2) bg_popup_window_pane_g9_ParamLimits

0xaa14,	// (0x000352d2) bg_popup_window_pane_g9

0xaa20,	// (0x000352de) bg_popup_window_pane_g10_ParamLimits

0xaa20,	// (0x000352de) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003a193) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003a193) bg_popup_window_pane_g

0xa949,	// (0x00035207) bg_popup_heading_pane_ParamLimits

0xa949,	// (0x00035207) bg_popup_heading_pane

0x639c,	// (0x00030c5a) tabs_4_passive_pane_cp_srt_ParamLimits

0x639c,	// (0x00030c5a) tabs_4_passive_pane_cp_srt

0x63ae,	// (0x00030c6c) tabs_4_passive_pane_srt_ParamLimits

0xa95d,	// (0x0003521b) heading_pane_g2

0x63ae,	// (0x00030c6c) tabs_4_passive_pane_srt

0x971e,	// (0x00033fdc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x971e,	// (0x00033fdc) bg_passive_tab_pane_cp3_srt

0xa965,	// (0x00035223) heading_pane_t1_ParamLimits

0xa965,	// (0x00035223) heading_pane_t1

0xa97c,	// (0x0003523a) heading_pane_t2_ParamLimits

0xa97c,	// (0x0003523a) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003a18e) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003a18e) heading_pane_t

0xa476,	// (0x00034d34) bg_popup_heading_pane_g1

0xa525,	// (0x00034de3) bg_popup_heading_pane_g2

0xa52f,	// (0x00034ded) bg_popup_heading_pane_g3

0xa539,	// (0x00034df7) bg_popup_heading_pane_g4

0xa543,	// (0x00034e01) bg_popup_heading_pane_g5

0xa54d,	// (0x00034e0b) bg_popup_heading_pane_g6

0xa555,	// (0x00034e13) bg_popup_heading_pane_g7

0xa55d,	// (0x00034e1b) bg_popup_heading_pane_g8

0xa567,	// (0x00034e25) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003a14a) bg_popup_heading_pane_g

0x9c42,	// (0x00034500) bg_popup_sub_pane_g1

0x9c52,	// (0x00034510) bg_popup_sub_pane_g2

0x9c4a,	// (0x00034508) bg_popup_sub_pane_g3

0x9c62,	// (0x00034520) bg_popup_sub_pane_g4

0x9c5a,	// (0x00034518) bg_popup_sub_pane_g5

0x9c6a,	// (0x00034528) bg_popup_sub_pane_g6

0x9c72,	// (0x00034530) bg_popup_sub_pane_g7

0x9c82,	// (0x00034540) bg_popup_sub_pane_g8

0x9c7a,	// (0x00034538) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003a124) bg_popup_sub_pane_g

0x814b,	// (0x00032a09) bg_popup_window_pane_cp5_ParamLimits

0x814b,	// (0x00032a09) bg_popup_window_pane_cp5

0x8167,	// (0x00032a25) popup_note_window_g1_ParamLimits

0x8167,	// (0x00032a25) popup_note_window_g1

0x8173,	// (0x00032a31) popup_note_window_t1_ParamLimits

0x8173,	// (0x00032a31) popup_note_window_t1

0x8189,	// (0x00032a47) popup_note_window_t2_ParamLimits

0x8189,	// (0x00032a47) popup_note_window_t2

0x819f,	// (0x00032a5d) popup_note_window_t3_ParamLimits

0x819f,	// (0x00032a5d) popup_note_window_t3

0x81b5,	// (0x00032a73) popup_note_window_t4_ParamLimits

0x81b5,	// (0x00032a73) popup_note_window_t4

0x81dd,	// (0x00032a9b) popup_note_window_t5_ParamLimits

0x81dd,	// (0x00032a9b) popup_note_window_t5

0x0004,

0xf57f,	// (0x00039e3d) popup_note_window_t_ParamLimits

0xf57f,	// (0x00039e3d) popup_note_window_t

0x8227,	// (0x00032ae5) bg_popup_window_pane_cp6_ParamLimits

0x8227,	// (0x00032ae5) bg_popup_window_pane_cp6

0xa3f2,	// (0x00034cb0) popup_note_image_window_g1_ParamLimits

0xa3f2,	// (0x00034cb0) popup_note_image_window_g1

0xa3fe,	// (0x00034cbc) popup_note_image_window_g2_ParamLimits

0xa3fe,	// (0x00034cbc) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003a118) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003a118) popup_note_image_window_g

0xa417,	// (0x00034cd5) popup_note_image_window_t1_ParamLimits

0xa417,	// (0x00034cd5) popup_note_image_window_t1

0xa430,	// (0x00034cee) popup_note_image_window_t2_ParamLimits

0xa430,	// (0x00034cee) popup_note_image_window_t2

0xa449,	// (0x00034d07) popup_note_image_window_t3_ParamLimits

0xa449,	// (0x00034d07) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003a11d) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003a11d) popup_note_image_window_t

0xa2b3,	// (0x00034b71) bg_popup_window_pane_cp7_ParamLimits

0xa2b3,	// (0x00034b71) bg_popup_window_pane_cp7

0xa2e3,	// (0x00034ba1) popup_note_wait_window_g1_ParamLimits

0xa2e3,	// (0x00034ba1) popup_note_wait_window_g1

0xa2ef,	// (0x00034bad) popup_note_wait_window_g2_ParamLimits

0xa2ef,	// (0x00034bad) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003a106) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003a106) popup_note_wait_window_g

0xa307,	// (0x00034bc5) popup_note_wait_window_t1_ParamLimits

0xa307,	// (0x00034bc5) popup_note_wait_window_t1

0xa32e,	// (0x00034bec) popup_note_wait_window_t2_ParamLimits

0xa32e,	// (0x00034bec) popup_note_wait_window_t2

0xa34b,	// (0x00034c09) popup_note_wait_window_t3_ParamLimits

0xa34b,	// (0x00034c09) popup_note_wait_window_t3

0xa35e,	// (0x00034c1c) popup_note_wait_window_t4_ParamLimits

0xa35e,	// (0x00034c1c) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003a10d) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003a10d) popup_note_wait_window_t

0xa383,	// (0x00034c41) wait_bar_pane_ParamLimits

0xa383,	// (0x00034c41) wait_bar_pane

0x7df0,	// (0x000326ae) wait_anim_pane

0x7df0,	// (0x000326ae) wait_border_pane

0x7de6,	// (0x000326a4) wait_anim_pane_g1

0x7de6,	// (0x000326a4) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00039fc1) wait_anim_pane_g

0xa257,	// (0x00034b15) wait_border_pane_g1

0xa262,	// (0x00034b20) wait_border_pane_g2

0xa26b,	// (0x00034b29) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003a0ff) wait_border_pane_g

0xa0c2,	// (0x00034980) bg_popup_window_pane_cp16_ParamLimits

0xa0c2,	// (0x00034980) bg_popup_window_pane_cp16

0xa1c2,	// (0x00034a80) indicator_popup_pane_cp4_ParamLimits

0xa1c2,	// (0x00034a80) indicator_popup_pane_cp4

0xa1d6,	// (0x00034a94) popup_query_data_window_t1_ParamLimits

0xa1d6,	// (0x00034a94) popup_query_data_window_t1

0xa1e8,	// (0x00034aa6) popup_query_data_window_t2_ParamLimits

0xa1e8,	// (0x00034aa6) popup_query_data_window_t2

0xa201,	// (0x00034abf) popup_query_data_window_t3_ParamLimits

0xa201,	// (0x00034abf) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003a0f8) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003a0f8) popup_query_data_window_t

0xa21b,	// (0x00034ad9) query_popup_data_pane_ParamLimits

0xa21b,	// (0x00034ad9) query_popup_data_pane

0xa22f,	// (0x00034aed) query_popup_data_pane_cp1_ParamLimits

0xa22f,	// (0x00034aed) query_popup_data_pane_cp1

0xa0c2,	// (0x00034980) bg_popup_window_pane_cp10_ParamLimits

0xa0c2,	// (0x00034980) bg_popup_window_pane_cp10

0xa0f4,	// (0x000349b2) indicator_popup_pane_ParamLimits

0xa0f4,	// (0x000349b2) indicator_popup_pane

0xa116,	// (0x000349d4) popup_query_code_window_t1_ParamLimits

0xa116,	// (0x000349d4) popup_query_code_window_t1

0xa130,	// (0x000349ee) popup_query_code_window_t2_ParamLimits

0xa130,	// (0x000349ee) popup_query_code_window_t2

0xa179,	// (0x00034a37) popup_query_code_window_t3_ParamLimits

0xa179,	// (0x00034a37) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003a0f1) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003a0f1) popup_query_code_window_t

0xa1a8,	// (0x00034a66) query_popup_pane_ParamLimits

0xa1a8,	// (0x00034a66) query_popup_pane

0x8227,	// (0x00032ae5) bg_popup_window_pane_cp15_ParamLimits

0x8227,	// (0x00032ae5) bg_popup_window_pane_cp15

0x8245,	// (0x00032b03) indicator_popup_pane_cp1_ParamLimits

0x8245,	// (0x00032b03) indicator_popup_pane_cp1

0x8258,	// (0x00032b16) indicator_popup_pane_cp2_ParamLimits

0x8258,	// (0x00032b16) indicator_popup_pane_cp2

0x826b,	// (0x00032b29) popup_query_data_code_window_g1_ParamLimits

0x826b,	// (0x00032b29) popup_query_data_code_window_g1

0x827e,	// (0x00032b3c) popup_query_data_code_window_t1_ParamLimits

0x827e,	// (0x00032b3c) popup_query_data_code_window_t1

0x8290,	// (0x00032b4e) popup_query_data_code_window_t2_ParamLimits

0x8290,	// (0x00032b4e) popup_query_data_code_window_t2

0x82a2,	// (0x00032b60) popup_query_data_code_window_t3_ParamLimits

0x82a2,	// (0x00032b60) popup_query_data_code_window_t3

0x82b8,	// (0x00032b76) popup_query_data_code_window_t4_ParamLimits

0x82b8,	// (0x00032b76) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00039e48) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00039e48) popup_query_data_code_window_t

0x605d,	// (0x0003091b) list_single_midp_graphic_pane_g3

0x82d0,	// (0x00032b8e) query_popup_data_pane_cp2_ParamLimits

0x82e3,	// (0x00032ba1) query_popup_pane_cp2_ParamLimits

0x82e3,	// (0x00032ba1) query_popup_pane_cp2

0x7df0,	// (0x000326ae) bg_popup_window_pane_cp11

0xa0ae,	// (0x0003496c) heading_pane_cp5

0x83ce,	// (0x00032c8c) listscroll_popup_info_pane

0x7df0,	// (0x000326ae) input_focus_pane_cp3

0x82f6,	// (0x00032bb4) query_popup_pane_t1

0x8304,	// (0x00032bc2) list_popup_info_pane_ParamLimits

0x8304,	// (0x00032bc2) list_popup_info_pane

0x8313,	// (0x00032bd1) listscroll_popup_info_pane_g1

0x831b,	// (0x00032bd9) scroll_pane_cp7

0x8325,	// (0x00032be3) popup_info_list_pane_t1_ParamLimits

0x8325,	// (0x00032be3) popup_info_list_pane_t1

0x833f,	// (0x00032bfd) popup_info_list_pane_t2_ParamLimits

0x833f,	// (0x00032bfd) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00039e51) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00039e51) popup_info_list_pane_t

0x7df0,	// (0x000326ae) bg_popup_window_pane_cp12

0xb429,	// (0x00035ce7) find_popup_pane

0x7ed0,	// (0x0003278e) bg_popup_window_pane_cp3

0x8359,	// (0x00032c17) heading_pane_cp3

0x8365,	// (0x00032c23) listscroll_popup_graphic_pane

0x7df0,	// (0x000326ae) bg_popup_window_pane_cp4

0x83c4,	// (0x00032c82) heading_pane_cp4

0x83ce,	// (0x00032c8c) listscroll_popup_colour_pane

0x83d6,	// (0x00032c94) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x83d6,	// (0x00032c94) cell_large_graphic_colour_none_popup_pane

0x83ea,	// (0x00032ca8) grid_large_graphic_colour_popup_pane_ParamLimits

0x83ea,	// (0x00032ca8) grid_large_graphic_colour_popup_pane

0x8416,	// (0x00032cd4) listscroll_popup_colour_pane_g1_ParamLimits

0x8416,	// (0x00032cd4) listscroll_popup_colour_pane_g1

0x842d,	// (0x00032ceb) listscroll_popup_colour_pane_g2_ParamLimits

0x842d,	// (0x00032ceb) listscroll_popup_colour_pane_g2

0x8444,	// (0x00032d02) listscroll_popup_colour_pane_g3_ParamLimits

0x8444,	// (0x00032d02) listscroll_popup_colour_pane_g3

0x8454,	// (0x00032d12) listscroll_popup_colour_pane_g4_ParamLimits

0x8454,	// (0x00032d12) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00039e56) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00039e56) listscroll_popup_colour_pane_g

0x8468,	// (0x00032d26) scroll_pane_cp6_ParamLimits

0x8468,	// (0x00032d26) scroll_pane_cp6

0x847a,	// (0x00032d38) cell_large_graphic_colour_popup_pane_ParamLimits

0x847a,	// (0x00032d38) cell_large_graphic_colour_popup_pane

0x8499,	// (0x00032d57) cell_large_graphic_colour_none_popup_pane_t1

0x7df0,	// (0x000326ae) grid_highlight_pane_cp5

0x84a8,	// (0x00032d66) cell_large_graphic_colour_popup_pane_g1

0x84b0,	// (0x00032d6e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00039e5f) cell_large_graphic_colour_popup_pane_g

0x84b8,	// (0x00032d76) cell_large_graphic_colour_popup_pane_g2_copy1

0x84c1,	// (0x00032d7f) grid_highlight_pane_cp4

0x84c9,	// (0x00032d87) bg_popup_window_pane_cp8_ParamLimits

0x84c9,	// (0x00032d87) bg_popup_window_pane_cp8

0x84e4,	// (0x00032da2) popup_snote_single_text_window_g1_ParamLimits

0x84e4,	// (0x00032da2) popup_snote_single_text_window_g1

0x84f6,	// (0x00032db4) popup_snote_single_text_window_t1_ParamLimits

0x84f6,	// (0x00032db4) popup_snote_single_text_window_t1

0x8509,	// (0x00032dc7) popup_snote_single_text_window_t2_ParamLimits

0x8509,	// (0x00032dc7) popup_snote_single_text_window_t2

0x851c,	// (0x00032dda) popup_snote_single_text_window_t3_ParamLimits

0x851c,	// (0x00032dda) popup_snote_single_text_window_t3

0x8555,	// (0x00032e13) popup_snote_single_text_window_t4_ParamLimits

0x8555,	// (0x00032e13) popup_snote_single_text_window_t4

0x8589,	// (0x00032e47) popup_snote_single_text_window_t5_ParamLimits

0x8589,	// (0x00032e47) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00039e64) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00039e64) popup_snote_single_text_window_t

0x85b8,	// (0x00032e76) bg_popup_window_pane_cp9_ParamLimits

0x85b8,	// (0x00032e76) bg_popup_window_pane_cp9

0x84e4,	// (0x00032da2) popup_snote_single_graphic_window_g1_ParamLimits

0x84e4,	// (0x00032da2) popup_snote_single_graphic_window_g1

0x85c6,	// (0x00032e84) popup_snote_single_graphic_window_g2_ParamLimits

0x85c6,	// (0x00032e84) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00039e6f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00039e6f) popup_snote_single_graphic_window_g

0x85d2,	// (0x00032e90) popup_snote_single_graphic_window_t1_ParamLimits

0x85d2,	// (0x00032e90) popup_snote_single_graphic_window_t1

0x85e5,	// (0x00032ea3) popup_snote_single_graphic_window_t2_ParamLimits

0x85e5,	// (0x00032ea3) popup_snote_single_graphic_window_t2

0x85f8,	// (0x00032eb6) popup_snote_single_graphic_window_t3_ParamLimits

0x85f8,	// (0x00032eb6) popup_snote_single_graphic_window_t3

0x8631,	// (0x00032eef) popup_snote_single_graphic_window_t4_ParamLimits

0x8631,	// (0x00032eef) popup_snote_single_graphic_window_t4

0x8665,	// (0x00032f23) popup_snote_single_graphic_window_t5_ParamLimits

0x8665,	// (0x00032f23) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00039e74) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00039e74) popup_snote_single_graphic_window_t

0xb36b,	// (0x00035c29) grid_graphic_popup_pane_ParamLimits

0xb36b,	// (0x00035c29) grid_graphic_popup_pane

0xb395,	// (0x00035c53) listscroll_popup_graphic_pane_g1_ParamLimits

0xb395,	// (0x00035c53) listscroll_popup_graphic_pane_g1

0xb3a9,	// (0x00035c67) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3a9,	// (0x00035c67) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a26e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a26e) listscroll_popup_graphic_pane_g

0xb3bd,	// (0x00035c7b) scroll_pane_cp5

0xb30a,	// (0x00035bc8) cell_graphic_popup_pane_ParamLimits

0xb30a,	// (0x00035bc8) cell_graphic_popup_pane

0xb2eb,	// (0x00035ba9) cell_graphic_popup_pane_g1

0xb2f3,	// (0x00035bb1) cell_graphic_popup_pane_g2

0x84b8,	// (0x00032d76) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a267) cell_graphic_popup_pane_g

0xb2fc,	// (0x00035bba) cell_graphic_popup_pane_t2

0x84c1,	// (0x00032d7f) grid_highlight_pane_cp3

0x86a6,	// (0x00032f64) list_gen_pane_ParamLimits

0x86a6,	// (0x00032f64) list_gen_pane

0x86d8,	// (0x00032f96) scroll_pane

0xb243,	// (0x00035b01) bg_list_pane_g1_ParamLimits

0xb243,	// (0x00035b01) bg_list_pane_g1

0xb260,	// (0x00035b1e) bg_list_pane_g2_ParamLimits

0xb260,	// (0x00035b1e) bg_list_pane_g2

0xb275,	// (0x00035b33) bg_list_pane_g3_ParamLimits

0xb275,	// (0x00035b33) bg_list_pane_g3

0xb289,	// (0x00035b47) bg_list_pane_g4_ParamLimits

0xb289,	// (0x00035b47) bg_list_pane_g4

0xb29d,	// (0x00035b5b) bg_list_pane_g5_ParamLimits

0xb29d,	// (0x00035b5b) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a25c) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a25c) bg_list_pane_g

0x75dd,	// (0x00031e9b) list_double2_graphic_large_graphic_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double2_graphic_large_graphic_pane

0x75dd,	// (0x00031e9b) list_double2_graphic_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double2_graphic_pane

0x75dd,	// (0x00031e9b) list_double2_large_graphic_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double2_large_graphic_pane

0x75dd,	// (0x00031e9b) list_double2_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double2_pane

0x75dd,	// (0x00031e9b) list_double_graphic_heading_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double_graphic_heading_pane

0x75dd,	// (0x00031e9b) list_double_graphic_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double_graphic_pane

0x75dd,	// (0x00031e9b) list_double_heading_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double_heading_pane

0x75dd,	// (0x00031e9b) list_double_large_graphic_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double_large_graphic_pane

0x75dd,	// (0x00031e9b) list_double_number_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double_number_pane

0x75dd,	// (0x00031e9b) list_double_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double_pane

0x75dd,	// (0x00031e9b) list_double_time_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_double_time_pane

0x75dd,	// (0x00031e9b) list_setting_number_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_setting_number_pane

0x75dd,	// (0x00031e9b) list_setting_pane_ParamLimits

0x75dd,	// (0x00031e9b) list_setting_pane

0x7618,	// (0x00031ed6) list_single_2graphic_pane_ParamLimits

0x7618,	// (0x00031ed6) list_single_2graphic_pane

0x7618,	// (0x00031ed6) list_single_graphic_heading_pane_ParamLimits

0x7618,	// (0x00031ed6) list_single_graphic_heading_pane

0x7618,	// (0x00031ed6) list_single_graphic_pane_ParamLimits

0x7618,	// (0x00031ed6) list_single_graphic_pane

0x7618,	// (0x00031ed6) list_single_heading_pane_ParamLimits

0x7618,	// (0x00031ed6) list_single_heading_pane

0x7658,	// (0x00031f16) list_single_large_graphic_pane_ParamLimits

0x7658,	// (0x00031f16) list_single_large_graphic_pane

0x7618,	// (0x00031ed6) list_single_number_heading_pane_ParamLimits

0x7618,	// (0x00031ed6) list_single_number_heading_pane

0x7618,	// (0x00031ed6) list_single_number_pane_ParamLimits

0x7618,	// (0x00031ed6) list_single_number_pane

0x7618,	// (0x00031ed6) list_single_pane_ParamLimits

0x7618,	// (0x00031ed6) list_single_pane

0x7df0,	// (0x000326ae) list_highlight_pane_cp1

0x4cda,	// (0x0002f598) list_single_pane_g1_ParamLimits

0x4cda,	// (0x0002f598) list_single_pane_g1

0x4ce6,	// (0x0002f5a4) list_single_pane_g2_ParamLimits

0x4ce6,	// (0x0002f5a4) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00039e86) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00039e86) list_single_pane_g

0x75c7,	// (0x00031e85) list_single_pane_t1_ParamLimits

0x75c7,	// (0x00031e85) list_single_pane_t1

0x4cda,	// (0x0002f598) list_single_number_pane_g1_ParamLimits

0x4cda,	// (0x0002f598) list_single_number_pane_g1

0x4ce6,	// (0x0002f5a4) list_single_number_pane_g2_ParamLimits

0x4ce6,	// (0x0002f5a4) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00039e86) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00039e86) list_single_number_pane_g

0x7571,	// (0x00031e2f) list_single_number_pane_t1_ParamLimits

0x7571,	// (0x00031e2f) list_single_number_pane_t1

0x7587,	// (0x00031e45) list_single_number_pane_t2_ParamLimits

0x7587,	// (0x00031e45) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a21d) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a21d) list_single_number_pane_t

0x4cce,	// (0x0002f58c) list_single_graphic_pane_g1_ParamLimits

0x4cce,	// (0x0002f58c) list_single_graphic_pane_g1

0x4cda,	// (0x0002f598) list_single_graphic_pane_g2_ParamLimits

0x4cda,	// (0x0002f598) list_single_graphic_pane_g2

0x4ce6,	// (0x0002f5a4) list_single_graphic_pane_g3_ParamLimits

0x4ce6,	// (0x0002f5a4) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00039e7f) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00039e7f) list_single_graphic_pane_g

0x4cf2,	// (0x0002f5b0) list_single_graphic_pane_t1_ParamLimits

0x4cf2,	// (0x0002f5b0) list_single_graphic_pane_t1

0x4cda,	// (0x0002f598) list_single_heading_pane_g1_ParamLimits

0x4cda,	// (0x0002f598) list_single_heading_pane_g1

0x4ce6,	// (0x0002f5a4) list_single_heading_pane_g2_ParamLimits

0x4ce6,	// (0x0002f5a4) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039e86) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039e86) list_single_heading_pane_g

0x4d08,	// (0x0002f5c6) list_single_heading_pane_t1_ParamLimits

0x4d08,	// (0x0002f5c6) list_single_heading_pane_t1

0x4d1e,	// (0x0002f5dc) list_single_heading_pane_t2_ParamLimits

0x4d1e,	// (0x0002f5dc) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00039e8b) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00039e8b) list_single_heading_pane_t

0x4cda,	// (0x0002f598) list_single_number_heading_pane_g1_ParamLimits

0x4cda,	// (0x0002f598) list_single_number_heading_pane_g1

0x4ce6,	// (0x0002f5a4) list_single_number_heading_pane_g2_ParamLimits

0x4ce6,	// (0x0002f5a4) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039e86) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039e86) list_single_number_heading_pane_g

0x4d08,	// (0x0002f5c6) list_single_number_heading_pane_t1_ParamLimits

0x4d08,	// (0x0002f5c6) list_single_number_heading_pane_t1

0x4d30,	// (0x0002f5ee) list_single_number_heading_pane_t2_ParamLimits

0x4d30,	// (0x0002f5ee) list_single_number_heading_pane_t2

0x4d42,	// (0x0002f600) list_single_number_heading_pane_t3_ParamLimits

0x4d42,	// (0x0002f600) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00039e90) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00039e90) list_single_number_heading_pane_t

0x4d54,	// (0x0002f612) list_single_graphic_heading_pane_g1_ParamLimits

0x4d54,	// (0x0002f612) list_single_graphic_heading_pane_g1

0x4d60,	// (0x0002f61e) list_single_graphic_heading_pane_g4_ParamLimits

0x4d60,	// (0x0002f61e) list_single_graphic_heading_pane_g4

0x4ce6,	// (0x0002f5a4) list_single_graphic_heading_pane_g5_ParamLimits

0x4ce6,	// (0x0002f5a4) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00039e97) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00039e97) list_single_graphic_heading_pane_g

0x4d08,	// (0x0002f5c6) list_single_graphic_heading_pane_t1_ParamLimits

0x4d08,	// (0x0002f5c6) list_single_graphic_heading_pane_t1

0x4d71,	// (0x0002f62f) list_single_graphic_heading_pane_t2_ParamLimits

0x4d71,	// (0x0002f62f) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00039e9e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00039e9e) list_single_graphic_heading_pane_t

0x4d83,	// (0x0002f641) list_single_large_graphic_pane_g1_ParamLimits

0x4d83,	// (0x0002f641) list_single_large_graphic_pane_g1

0x4d8f,	// (0x0002f64d) list_single_large_graphic_pane_g2_ParamLimits

0x4d8f,	// (0x0002f64d) list_single_large_graphic_pane_g2

0x4d9b,	// (0x0002f659) list_single_large_graphic_pane_g3_ParamLimits

0x4d9b,	// (0x0002f659) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00039ea3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00039ea3) list_single_large_graphic_pane_g

0xa262,	// (0x00034b20) wait_border_pane_g2_copy1

0x4da7,	// (0x0002f665) list_single_large_graphic_pane_g4_cp2

0x4daf,	// (0x0002f66d) list_single_large_graphic_pane_t1_ParamLimits

0x4daf,	// (0x0002f66d) list_single_large_graphic_pane_t1

0x4dc5,	// (0x0002f683) list_double_pane_g1_ParamLimits

0x4dc5,	// (0x0002f683) list_double_pane_g1

0x4dd1,	// (0x0002f68f) list_double_pane_g2_ParamLimits

0x4dd1,	// (0x0002f68f) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00039eaa) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00039eaa) list_double_pane_g

0x4ddd,	// (0x0002f69b) list_double_pane_t1_ParamLimits

0x4ddd,	// (0x0002f69b) list_double_pane_t1

0x4df3,	// (0x0002f6b1) list_double_pane_t2_ParamLimits

0x4df3,	// (0x0002f6b1) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00039eaf) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00039eaf) list_double_pane_t

0x4e05,	// (0x0002f6c3) list_double2_pane_g1_ParamLimits

0x4e05,	// (0x0002f6c3) list_double2_pane_g1

0x4e16,	// (0x0002f6d4) list_double2_pane_g2_ParamLimits

0x4e16,	// (0x0002f6d4) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00039eb4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00039eb4) list_double2_pane_g

0x4e22,	// (0x0002f6e0) list_double2_pane_t1_ParamLimits

0x4e22,	// (0x0002f6e0) list_double2_pane_t1

0x4e38,	// (0x0002f6f6) list_double2_pane_t2_ParamLimits

0x4e38,	// (0x0002f6f6) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00039eb9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00039eb9) list_double2_pane_t

0x4dc5,	// (0x0002f683) list_double_number_pane_g1_ParamLimits

0x4dc5,	// (0x0002f683) list_double_number_pane_g1

0x4dd1,	// (0x0002f68f) list_double_number_pane_g2_ParamLimits

0x4dd1,	// (0x0002f68f) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00039eaa) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00039eaa) list_double_number_pane_g

0x4e4a,	// (0x0002f708) list_double_number_pane_t1_ParamLimits

0x4e4a,	// (0x0002f708) list_double_number_pane_t1

0x4e5c,	// (0x0002f71a) list_double_number_pane_t2_ParamLimits

0x4e5c,	// (0x0002f71a) list_double_number_pane_t2

0x4e72,	// (0x0002f730) list_double_number_pane_t3_ParamLimits

0x4e72,	// (0x0002f730) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00039ebe) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00039ebe) list_double_number_pane_t

0x4e84,	// (0x0002f742) list_double_graphic_pane_g1_ParamLimits

0x4e84,	// (0x0002f742) list_double_graphic_pane_g1

0x4e90,	// (0x0002f74e) list_double_graphic_pane_g2_ParamLimits

0x4e90,	// (0x0002f74e) list_double_graphic_pane_g2

0x4e9f,	// (0x0002f75d) list_double_graphic_pane_g3_ParamLimits

0x4e9f,	// (0x0002f75d) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00039ec5) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00039ec5) list_double_graphic_pane_g

0x4eb7,	// (0x0002f775) list_double_graphic_pane_t1_ParamLimits

0x4eb7,	// (0x0002f775) list_double_graphic_pane_t1

0x4ecd,	// (0x0002f78b) list_double_graphic_pane_t2_ParamLimits

0x4ecd,	// (0x0002f78b) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00039ece) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00039ece) list_double_graphic_pane_t

0x4edf,	// (0x0002f79d) list_double2_graphic_pane_g1_ParamLimits

0x4edf,	// (0x0002f79d) list_double2_graphic_pane_g1

0x4eeb,	// (0x0002f7a9) list_double2_graphic_pane_g2_ParamLimits

0x4eeb,	// (0x0002f7a9) list_double2_graphic_pane_g2

0x4e16,	// (0x0002f6d4) list_double2_graphic_pane_g3_ParamLimits

0x4e16,	// (0x0002f6d4) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00039ed3) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00039ed3) list_double2_graphic_pane_g

0x4ef7,	// (0x0002f7b5) list_double2_graphic_pane_t1_ParamLimits

0x4ef7,	// (0x0002f7b5) list_double2_graphic_pane_t1

0x4f0d,	// (0x0002f7cb) list_double2_graphic_pane_t2_ParamLimits

0x4f0d,	// (0x0002f7cb) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00039eda) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00039eda) list_double2_graphic_pane_t

0x4f1f,	// (0x0002f7dd) list_double_large_graphic_pane_g1_ParamLimits

0x4f1f,	// (0x0002f7dd) list_double_large_graphic_pane_g1

0x4f32,	// (0x0002f7f0) list_double_large_graphic_pane_g2_ParamLimits

0x4f32,	// (0x0002f7f0) list_double_large_graphic_pane_g2

0x4dd1,	// (0x0002f68f) list_double_large_graphic_pane_g3_ParamLimits

0x4dd1,	// (0x0002f68f) list_double_large_graphic_pane_g3

0x4f43,	// (0x0002f801) list_double_large_graphic_pane_g4_ParamLimits

0x4f43,	// (0x0002f801) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00039edf) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00039edf) list_double_large_graphic_pane_g

0x4f6a,	// (0x0002f828) list_double_large_graphic_pane_t1_ParamLimits

0x4f6a,	// (0x0002f828) list_double_large_graphic_pane_t1

0x4f83,	// (0x0002f841) list_double_large_graphic_pane_t2_ParamLimits

0x4f83,	// (0x0002f841) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00039eea) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00039eea) list_double_large_graphic_pane_t

0x4f95,	// (0x0002f853) list_double2_large_graphic_pane_g1_ParamLimits

0x4f95,	// (0x0002f853) list_double2_large_graphic_pane_g1

0x4e05,	// (0x0002f6c3) list_double2_large_graphic_pane_g2_ParamLimits

0x4e05,	// (0x0002f6c3) list_double2_large_graphic_pane_g2

0x4e16,	// (0x0002f6d4) list_double2_large_graphic_pane_g3_ParamLimits

0x4e16,	// (0x0002f6d4) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00039eef) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00039eef) list_double2_large_graphic_pane_g

0x4fa1,	// (0x0002f85f) list_double2_large_graphic_pane_t1_ParamLimits

0x4fa1,	// (0x0002f85f) list_double2_large_graphic_pane_t1

0x4fb7,	// (0x0002f875) list_double2_large_graphic_pane_t2_ParamLimits

0x4fb7,	// (0x0002f875) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00039ef6) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00039ef6) list_double2_large_graphic_pane_t

0x4fc9,	// (0x0002f887) list_double_heading_pane_g1_ParamLimits

0x4fc9,	// (0x0002f887) list_double_heading_pane_g1

0x4fda,	// (0x0002f898) list_double_heading_pane_g2_ParamLimits

0x4fda,	// (0x0002f898) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00039efb) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00039efb) list_double_heading_pane_g

0x4fe6,	// (0x0002f8a4) list_double_heading_pane_t1_ParamLimits

0x4fe6,	// (0x0002f8a4) list_double_heading_pane_t1

0x4e38,	// (0x0002f6f6) list_double_heading_pane_t2_ParamLimits

0x4e38,	// (0x0002f6f6) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00039f00) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00039f00) list_double_heading_pane_t

0x4ffc,	// (0x0002f8ba) list_double_graphic_heading_pane_g1_ParamLimits

0x4ffc,	// (0x0002f8ba) list_double_graphic_heading_pane_g1

0x4fc9,	// (0x0002f887) list_double_graphic_heading_pane_g2_ParamLimits

0x4fc9,	// (0x0002f887) list_double_graphic_heading_pane_g2

0x4fda,	// (0x0002f898) list_double_graphic_heading_pane_g3_ParamLimits

0x4fda,	// (0x0002f898) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00039f05) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00039f05) list_double_graphic_heading_pane_g

0x5008,	// (0x0002f8c6) list_double_graphic_heading_pane_t1_ParamLimits

0x5008,	// (0x0002f8c6) list_double_graphic_heading_pane_t1

0x4f0d,	// (0x0002f7cb) list_double_graphic_heading_pane_t2_ParamLimits

0x4f0d,	// (0x0002f7cb) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00039f0c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00039f0c) list_double_graphic_heading_pane_t

0x4f32,	// (0x0002f7f0) list_double_time_pane_g1_ParamLimits

0x4f32,	// (0x0002f7f0) list_double_time_pane_g1

0x4dd1,	// (0x0002f68f) list_double_time_pane_g2_ParamLimits

0x4dd1,	// (0x0002f68f) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00039f11) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00039f11) list_double_time_pane_g

0x501e,	// (0x0002f8dc) list_double_time_pane_t1_ParamLimits

0x501e,	// (0x0002f8dc) list_double_time_pane_t1

0x5034,	// (0x0002f8f2) list_double_time_pane_t2_ParamLimits

0x5034,	// (0x0002f8f2) list_double_time_pane_t2

0x5046,	// (0x0002f904) list_double_time_pane_t3_ParamLimits

0x5046,	// (0x0002f904) list_double_time_pane_t3

0x5058,	// (0x0002f916) list_double_time_pane_t4_ParamLimits

0x5058,	// (0x0002f916) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00039f16) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00039f16) list_double_time_pane_t

0x4eeb,	// (0x0002f7a9) list_setting_pane_g1_ParamLimits

0x4eeb,	// (0x0002f7a9) list_setting_pane_g1

0x4e16,	// (0x0002f6d4) list_setting_pane_g2_ParamLimits

0x4e16,	// (0x0002f6d4) list_setting_pane_g2

0x0001,

0xf661,	// (0x00039f1f) list_setting_pane_g_ParamLimits

0xf661,	// (0x00039f1f) list_setting_pane_g

0x506a,	// (0x0002f928) list_setting_pane_t1_ParamLimits

0x506a,	// (0x0002f928) list_setting_pane_t1

0x5084,	// (0x0002f942) list_setting_pane_t2_ParamLimits

0x5084,	// (0x0002f942) list_setting_pane_t2

0x0002,

0xf666,	// (0x00039f24) list_setting_pane_t_ParamLimits

0xf666,	// (0x00039f24) list_setting_pane_t

0x50c3,	// (0x0002f981) set_value_pane_cp_ParamLimits

0x50c3,	// (0x0002f981) set_value_pane_cp

0x50cf,	// (0x0002f98d) list_setting_number_pane_g1_ParamLimits

0x50cf,	// (0x0002f98d) list_setting_number_pane_g1

0x50db,	// (0x0002f999) list_setting_number_pane_g2_ParamLimits

0x50db,	// (0x0002f999) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00039f2b) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00039f2b) list_setting_number_pane_g

0x50e7,	// (0x0002f9a5) list_setting_number_pane_t1_ParamLimits

0x50e7,	// (0x0002f9a5) list_setting_number_pane_t1

0x5100,	// (0x0002f9be) list_setting_number_pane_t2_ParamLimits

0x5100,	// (0x0002f9be) list_setting_number_pane_t2

0x511a,	// (0x0002f9d8) list_setting_number_pane_t3_ParamLimits

0x511a,	// (0x0002f9d8) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00039f30) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00039f30) list_setting_number_pane_t

0x50c3,	// (0x0002f981) set_value_pane_ParamLimits

0x50c3,	// (0x0002f981) set_value_pane

0x870c,	// (0x00032fca) bg_set_opt_pane_ParamLimits

0x870c,	// (0x00032fca) bg_set_opt_pane

0x515d,	// (0x0002fa1b) set_value_pane_t1

0x872d,	// (0x00032feb) slider_set_pane_cp3

0x8736,	// (0x00032ff4) volume_small_pane_cp

0x873f,	// (0x00032ffd) list_form_gen_pane

0x8748,	// (0x00033006) scroll_pane_cp8

0x5173,	// (0x0002fa31) form_field_data_pane_ParamLimits

0x5173,	// (0x0002fa31) form_field_data_pane

0x5193,	// (0x0002fa51) form_field_data_wide_pane_ParamLimits

0x5193,	// (0x0002fa51) form_field_data_wide_pane

0x51b4,	// (0x0002fa72) form_field_popup_pane_ParamLimits

0x51b4,	// (0x0002fa72) form_field_popup_pane

0x51d4,	// (0x0002fa92) form_field_popup_wide_pane_ParamLimits

0x51d4,	// (0x0002fa92) form_field_popup_wide_pane

0x51f1,	// (0x0002faaf) form_field_slider_pane_ParamLimits

0x51f1,	// (0x0002faaf) form_field_slider_pane

0x5204,	// (0x0002fac2) form_field_slider_wide_pane_ParamLimits

0x5204,	// (0x0002fac2) form_field_slider_wide_pane

0x8759,	// (0x00033017) data_form_pane

0x5221,	// (0x0002fadf) form_field_data_pane_t1

0x8765,	// (0x00033023) input_focus_pane

0x5239,	// (0x0002faf7) data_form_wide_pane

0x5256,	// (0x0002fb14) form_field_data_wide_pane_t1

0x84d6,	// (0x00032d94) input_focus_pane_cp6

0x5278,	// (0x0002fb36) form_field_popup_pane_t1

0x8765,	// (0x00033023) input_focus_pane_cp7

0x8793,	// (0x00033051) list_form_pane

0x5298,	// (0x0002fb56) form_field_popup_wide_pane_t1

0x8765,	// (0x00033023) input_focus_pane_cp8

0x879f,	// (0x0003305d) list_form_wide_pane

0x52b5,	// (0x0002fb73) form_field_slider_pane_t1_ParamLimits

0x52b5,	// (0x0002fb73) form_field_slider_pane_t1

0x52cb,	// (0x0002fb89) form_field_slider_pane_t2_ParamLimits

0x52cb,	// (0x0002fb89) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00039f40) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00039f40) form_field_slider_pane_t

0x814b,	// (0x00032a09) input_focus_pane_cp9_ParamLimits

0x814b,	// (0x00032a09) input_focus_pane_cp9

0x52e0,	// (0x0002fb9e) slider_cont_pane_ParamLimits

0x52e0,	// (0x0002fb9e) slider_cont_pane

0x87ab,	// (0x00033069) form_field_slider_wide_pane_t1_ParamLimits

0x87ab,	// (0x00033069) form_field_slider_wide_pane_t1

0x52f4,	// (0x0002fbb2) form_field_slider_wide_pane_t2_ParamLimits

0x52f4,	// (0x0002fbb2) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00039f45) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00039f45) form_field_slider_wide_pane_t

0x814b,	// (0x00032a09) input_focus_pane_cp10_ParamLimits

0x814b,	// (0x00032a09) input_focus_pane_cp10

0x5306,	// (0x0002fbc4) slider_cont_pane_cp1_ParamLimits

0x5306,	// (0x0002fbc4) slider_cont_pane_cp1

0x531a,	// (0x0002fbd8) slider_form_pane_cp

0x87bd,	// (0x0003307b) input_focus_pane_g1

0x87c5,	// (0x00033083) input_focus_pane_g2

0x87cd,	// (0x0003308b) input_focus_pane_g3

0x87d5,	// (0x00033093) input_focus_pane_g4

0x87dd,	// (0x0003309b) input_focus_pane_g5

0x87e5,	// (0x000330a3) input_focus_pane_g6

0x87ed,	// (0x000330ab) input_focus_pane_g7

0x87f5,	// (0x000330b3) input_focus_pane_g8

0x87fd,	// (0x000330bb) input_focus_pane_g9

0x7de6,	// (0x000326a4) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00039f4a) input_focus_pane_g

0xa26b,	// (0x00034b29) wait_border_pane_g3_copy1

0x5322,	// (0x0002fbe0) data_form_pane_t1

0x7de6,	// (0x000326a4) wait_anim_pane_g1_copy1

0x7599,	// (0x00031e57) data_form_wide_pane_t1

0x533d,	// (0x0002fbfb) list_form_graphic_pane_cp_ParamLimits

0x533d,	// (0x0002fbfb) list_form_graphic_pane_cp

0xb180,	// (0x00035a3e) slider_form_pane_g1

0xb189,	// (0x00035a47) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a24d) slider_form_pane_g

0x5356,	// (0x0002fc14) list_form_graphic_pane_ParamLimits

0x5356,	// (0x0002fc14) list_form_graphic_pane

0x5372,	// (0x0002fc30) list_form_graphic_pane_g1

0x537a,	// (0x0002fc38) list_form_graphic_pane_t1_ParamLimits

0x537a,	// (0x0002fc38) list_form_graphic_pane_t1

0x7ed0,	// (0x0003278e) list_highlight_pane_cp5_ParamLimits

0x7ed0,	// (0x0003278e) list_highlight_pane_cp5

0x538f,	// (0x0002fc4d) find_pane_g1

0x8805,	// (0x000330c3) input_find_pane

0x5398,	// (0x0002fc56) input_find_pane_g1_ParamLimits

0x5398,	// (0x0002fc56) input_find_pane_g1

0x53a4,	// (0x0002fc62) input_find_pane_t1_ParamLimits

0x53a4,	// (0x0002fc62) input_find_pane_t1

0x53b9,	// (0x0002fc77) input_find_pane_t2_ParamLimits

0x53b9,	// (0x0002fc77) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00039f5f) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00039f5f) input_find_pane_t

0x880e,	// (0x000330cc) input_focus_pane_cp5_ParamLimits

0x880e,	// (0x000330cc) input_focus_pane_cp5

0x8828,	// (0x000330e6) bg_popup_window_pane_cp2_ParamLimits

0x8828,	// (0x000330e6) bg_popup_window_pane_cp2

0x8835,	// (0x000330f3) listscroll_menu_pane_ParamLimits

0x8835,	// (0x000330f3) listscroll_menu_pane

0x8841,	// (0x000330ff) popup_submenu_window_ParamLimits

0x8841,	// (0x000330ff) popup_submenu_window

0x886d,	// (0x0003312b) find_popup_pane_g1

0x8875,	// (0x00033133) input_popup_find_pane_cp

0x880e,	// (0x000330cc) input_focus_pane_cp4_ParamLimits

0x880e,	// (0x000330cc) input_focus_pane_cp4

0x888b,	// (0x00033149) input_popup_find_pane_t1_ParamLimits

0x888b,	// (0x00033149) input_popup_find_pane_t1

0x7df0,	// (0x000326ae) bg_popup_sub_pane_cp

0x88b9,	// (0x00033177) listscroll_popup_sub_pane

0x88c1,	// (0x0003317f) list_submenu_pane_ParamLimits

0x88c1,	// (0x0003317f) list_submenu_pane

0x88d2,	// (0x00033190) scroll_pane_cp4

0x88da,	// (0x00033198) list_single_popup_submenu_pane_ParamLimits

0x88da,	// (0x00033198) list_single_popup_submenu_pane

0x88ee,	// (0x000331ac) list_single_popup_submenu_pane_g1

0x88f6,	// (0x000331b4) list_single_popup_submenu_pane_t1_ParamLimits

0x88f6,	// (0x000331b4) list_single_popup_submenu_pane_t1

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp1_ParamLimits

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp1

0x890b,	// (0x000331c9) tabs_2_active_pane_g1

0x8913,	// (0x000331d1) tabs_2_active_pane_t1

0x7ed0,	// (0x0003278e) bg_passive_tab_pane_cp1_ParamLimits

0x7ed0,	// (0x0003278e) bg_passive_tab_pane_cp1

0x890b,	// (0x000331c9) tabs_2_passive_pane_g1

0x8913,	// (0x000331d1) tabs_2_passive_pane_t1

0x8925,	// (0x000331e3) bg_active_tab_pane_cp4

0x8933,	// (0x000331f1) tabs_2_long_active_pane_t1

0x8946,	// (0x00033204) bg_passive_tab_pane_cp4

0x6065,	// (0x00030923) list_single_midp_graphic_pane_g4_ParamLimits

0x8925,	// (0x000331e3) bg_active_tab_pane_cp5

0x8952,	// (0x00033210) tabs_3_long_active_pane_t1

0x8946,	// (0x00033204) bg_passive_tab_pane_cp5

0x6065,	// (0x00030923) list_single_midp_graphic_pane_g4

0x7ed0,	// (0x0003278e) bg_popup_window_pane_cp13_ParamLimits

0x7ed0,	// (0x0003278e) bg_popup_window_pane_cp13

0x896d,	// (0x0003322b) listscroll_popup_fast_pane_ParamLimits

0x896d,	// (0x0003322b) listscroll_popup_fast_pane

0x897c,	// (0x0003323a) grid_popup_fast_pane_ParamLimits

0x897c,	// (0x0003323a) grid_popup_fast_pane

0x898e,	// (0x0003324c) scroll_pane_cp9_ParamLimits

0x898e,	// (0x0003324c) scroll_pane_cp9

0xca7f,	// (0x0003733d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca7f,	// (0x0003733d) list_single_graphic_hl_pane_t1_cp2

0x89b2,	// (0x00033270) input_focus_pane_cp20_ParamLimits

0x89b2,	// (0x00033270) input_focus_pane_cp20

0x89c0,	// (0x0003327e) query_popup_data_pane_t1_ParamLimits

0x89c0,	// (0x0003327e) query_popup_data_pane_t1

0x89d3,	// (0x00033291) query_popup_data_pane_t2_ParamLimits

0x89d3,	// (0x00033291) query_popup_data_pane_t2

0x8a19,	// (0x000332d7) query_popup_data_pane_t3_ParamLimits

0x8a19,	// (0x000332d7) query_popup_data_pane_t3

0x8a5a,	// (0x00033318) query_popup_data_pane_t4_ParamLimits

0x8a5a,	// (0x00033318) query_popup_data_pane_t4

0x8a96,	// (0x00033354) query_popup_data_pane_t5_ParamLimits

0x8a96,	// (0x00033354) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00039f64) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00039f64) query_popup_data_pane_t

0x87bd,	// (0x0003307b) bg_set_opt_pane_g1

0x87c5,	// (0x00033083) bg_set_opt_pane_g2

0x87cd,	// (0x0003308b) bg_set_opt_pane_g3

0x87d5,	// (0x00033093) bg_set_opt_pane_g4

0x87dd,	// (0x0003309b) bg_set_opt_pane_g5

0x87e5,	// (0x000330a3) bg_set_opt_pane_g6

0x87ed,	// (0x000330ab) bg_set_opt_pane_g7

0x87f5,	// (0x000330b3) bg_set_opt_pane_g8

0x87fd,	// (0x000330bb) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00039f6f) bg_set_opt_pane_g

0x56f5,	// (0x0002ffb3) control_top_pane_stacon_ParamLimits

0x56f5,	// (0x0002ffb3) control_top_pane_stacon

0x5748,	// (0x00030006) signal_pane_stacon_ParamLimits

0x5748,	// (0x00030006) signal_pane_stacon

0x9088,	// (0x00033946) stacon_top_pane_g1_ParamLimits

0x9088,	// (0x00033946) stacon_top_pane_g1

0x576d,	// (0x0003002b) title_pane_stacon_ParamLimits

0x576d,	// (0x0003002b) title_pane_stacon

0x5797,	// (0x00030055) uni_indicator_pane_stacon_ParamLimits

0x5797,	// (0x00030055) uni_indicator_pane_stacon

0x57ac,	// (0x0003006a) battery_pane_stacon_ParamLimits

0x57ac,	// (0x0003006a) battery_pane_stacon

0x57f0,	// (0x000300ae) control_bottom_pane_stacon_ParamLimits

0x57f0,	// (0x000300ae) control_bottom_pane_stacon

0x5813,	// (0x000300d1) navi_pane_stacon_ParamLimits

0x5813,	// (0x000300d1) navi_pane_stacon

0x90aa,	// (0x00033968) stacon_bottom_pane_g1_ParamLimits

0x90aa,	// (0x00033968) stacon_bottom_pane_g1

0x53ce,	// (0x0002fc8c) aid_levels_signal_lsc_ParamLimits

0x53ce,	// (0x0002fc8c) aid_levels_signal_lsc

0x53e4,	// (0x0002fca2) signal_pane_stacon_g1_ParamLimits

0x53e4,	// (0x0002fca2) signal_pane_stacon_g1

0x53f8,	// (0x0002fcb6) signal_pane_stacon_g2_ParamLimits

0x53f8,	// (0x0002fcb6) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00039f82) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00039f82) signal_pane_stacon_g

0x542d,	// (0x0002fceb) title_pane_stacon_t1_ParamLimits

0x542d,	// (0x0002fceb) title_pane_stacon_t1

0x8ada,	// (0x00033398) uni_indicator_pane_stacon_g1

0x8ae4,	// (0x000333a2) uni_indicator_pane_stacon_g2

0x8aee,	// (0x000333ac) uni_indicator_pane_stacon_g3

0x8af8,	// (0x000333b6) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00039f8e) uni_indicator_pane_stacon_g

0x5452,	// (0x0002fd10) control_top_pane_stacon_g1

0x545a,	// (0x0002fd18) control_top_pane_stacon_t1_ParamLimits

0x545a,	// (0x0002fd18) control_top_pane_stacon_t1

0x5491,	// (0x0002fd4f) aid_levels_battery_lsc_ParamLimits

0x5491,	// (0x0002fd4f) aid_levels_battery_lsc

0x54a8,	// (0x0002fd66) battery_pane_stacon_g1_ParamLimits

0x54a8,	// (0x0002fd66) battery_pane_stacon_g1

0x54bb,	// (0x0002fd79) battery_pane_stacon_g2_ParamLimits

0x54bb,	// (0x0002fd79) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00039f97) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00039f97) battery_pane_stacon_g

0x54f9,	// (0x0002fdb7) navi_icon_pane_stacon

0x550d,	// (0x0002fdcb) navi_navi_pane_stacon

0x54f9,	// (0x0002fdb7) navi_text_pane_stacon

0x5452,	// (0x0002fd10) control_bottom_pane_stacon_g1

0x5521,	// (0x0002fddf) control_bottom_pane_stacon_t1_ParamLimits

0x5521,	// (0x0002fddf) control_bottom_pane_stacon_t1

0x8b1c,	// (0x000333da) grid_app_pane_ParamLimits

0x8b1c,	// (0x000333da) grid_app_pane

0x8b3e,	// (0x000333fc) scroll_pane_cp15_ParamLimits

0x8b3e,	// (0x000333fc) scroll_pane_cp15

0x8b51,	// (0x0003340f) cell_app_pane_ParamLimits

0x8b51,	// (0x0003340f) cell_app_pane

0x8b79,	// (0x00033437) cell_app_pane_g1_ParamLimits

0x8b79,	// (0x00033437) cell_app_pane_g1

0x8b9d,	// (0x0003345b) cell_app_pane_g2_ParamLimits

0x8b9d,	// (0x0003345b) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00039f9c) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00039f9c) cell_app_pane_g

0x8ba9,	// (0x00033467) cell_app_pane_t1_ParamLimits

0x8ba9,	// (0x00033467) cell_app_pane_t1

0x8bc0,	// (0x0003347e) grid_highlight_pane_ParamLimits

0x8bc0,	// (0x0003347e) grid_highlight_pane

0x87bd,	// (0x0003307b) cell_highlight_pane_g1

0x87c5,	// (0x00033083) cell_highlight_pane_g2

0x87cd,	// (0x0003308b) cell_highlight_pane_g3

0x87d5,	// (0x00033093) cell_highlight_pane_g4

0x87dd,	// (0x0003309b) cell_highlight_pane_g5

0x87e5,	// (0x000330a3) cell_highlight_pane_g6

0x87ed,	// (0x000330ab) cell_highlight_pane_g7

0x87f5,	// (0x000330b3) cell_highlight_pane_g8

0x87fd,	// (0x000330bb) cell_highlight_pane_g9

0x7de6,	// (0x000326a4) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00039f4a) cell_highlight_pane_g

0x8bd1,	// (0x0003348f) bg_scroll_pane

0x556b,	// (0x0002fe29) scroll_handle_pane

0x8c18,	// (0x000334d6) scroll_bg_pane_g1

0x8c2d,	// (0x000334eb) scroll_bg_pane_g2

0x8c45,	// (0x00033503) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00039fa1) scroll_bg_pane_g

0x8c5a,	// (0x00033518) scroll_handle_focus_pane_ParamLimits

0x8c5a,	// (0x00033518) scroll_handle_focus_pane

0x8c18,	// (0x000334d6) scroll_handle_pane_g1

0x8c67,	// (0x00033525) scroll_handle_pane_g2

0x8c45,	// (0x00033503) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00039fa8) scroll_handle_pane_g

0x880e,	// (0x000330cc) bg_popup_sub_pane_cp21_ParamLimits

0x880e,	// (0x000330cc) bg_popup_sub_pane_cp21

0x8c7b,	// (0x00033539) popup_fep_japan_predictive_window_t1_ParamLimits

0x8c7b,	// (0x00033539) popup_fep_japan_predictive_window_t1

0x8c95,	// (0x00033553) popup_fep_japan_predictive_window_t2_ParamLimits

0x8c95,	// (0x00033553) popup_fep_japan_predictive_window_t2

0x8cc8,	// (0x00033586) popup_fep_japan_predictive_window_t3_ParamLimits

0x8cc8,	// (0x00033586) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00039faf) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00039faf) popup_fep_japan_predictive_window_t

0x7df0,	// (0x000326ae) bg_popup_sub_pane_cp23

0x8cff,	// (0x000335bd) listscroll_japin_cand_pane

0x8d07,	// (0x000335c5) popup_fep_japan_candidate_window_t1

0x8d15,	// (0x000335d3) candidate_pane_ParamLimits

0x8d15,	// (0x000335d3) candidate_pane

0x8d27,	// (0x000335e5) scroll_pane_cp30

0x8d2f,	// (0x000335ed) list_single_popup_jap_candidate_pane_ParamLimits

0x8d2f,	// (0x000335ed) list_single_popup_jap_candidate_pane

0x7df0,	// (0x000326ae) list_highlight_pane_cp30

0x8d44,	// (0x00033602) list_single_popup_jap_candidate_pane_t1

0x8d53,	// (0x00033611) level_1_signal

0x8d65,	// (0x00033623) level_2_signal

0x8d78,	// (0x00033636) level_3_signal

0x8d8b,	// (0x00033649) level_4_signal

0x8d9e,	// (0x0003365c) level_5_signal

0x8db1,	// (0x0003366f) level_6_signal

0x8dc4,	// (0x00033682) level_7_signal

0x8d53,	// (0x00033611) level_1_battery

0x8d65,	// (0x00033623) level_2_battery

0x8d78,	// (0x00033636) level_3_battery

0x8d8b,	// (0x00033649) level_4_battery

0x8d9e,	// (0x0003365c) level_5_battery

0x8db1,	// (0x0003366f) level_6_battery

0x8dc4,	// (0x00033682) level_7_battery

0x8def,	// (0x000336ad) list_menu_pane_ParamLimits

0x8def,	// (0x000336ad) list_menu_pane

0x8e05,	// (0x000336c3) scroll_pane_cp25_ParamLimits

0x8e05,	// (0x000336c3) scroll_pane_cp25

0x8e1e,	// (0x000336dc) list_double2_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x000336dc) list_double2_graphic_pane_cp2

0x8e1e,	// (0x000336dc) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x000336dc) list_double2_large_graphic_pane_cp2

0x8e1e,	// (0x000336dc) list_double2_pane_cp2_ParamLimits

0x8e1e,	// (0x000336dc) list_double2_pane_cp2

0x8e1e,	// (0x000336dc) list_double_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x000336dc) list_double_graphic_pane_cp2

0x8e1e,	// (0x000336dc) list_double_large_graphic_pane_cp2_ParamLimits

0x8e1e,	// (0x000336dc) list_double_large_graphic_pane_cp2

0x8e1e,	// (0x000336dc) list_double_number_pane_cp2_ParamLimits

0x8e1e,	// (0x000336dc) list_double_number_pane_cp2

0x8e1e,	// (0x000336dc) list_double_pane_cp2_ParamLimits

0x8e1e,	// (0x000336dc) list_double_pane_cp2

0x8e42,	// (0x00033700) list_single_2graphic_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_2graphic_pane_cp2

0x8e42,	// (0x00033700) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_graphic_heading_pane_cp2

0x8e42,	// (0x00033700) list_single_graphic_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_graphic_pane_cp2

0x8e42,	// (0x00033700) list_single_heading_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_heading_pane_cp2

0x8e5b,	// (0x00033719) list_single_large_graphic_pane_cp2_ParamLimits

0x8e5b,	// (0x00033719) list_single_large_graphic_pane_cp2

0x8e42,	// (0x00033700) list_single_number_heading_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_number_heading_pane_cp2

0x8e42,	// (0x00033700) list_single_number_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_number_pane_cp2

0x8e42,	// (0x00033700) list_single_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_pane_cp2

0x8ed7,	// (0x00033795) bg_popup_sub_pane_cp22

0x561d,	// (0x0002fedb) popup_side_volume_key_window_g1

0x5647,	// (0x0002ff05) popup_side_volume_key_window_t1

0x5663,	// (0x0002ff21) volume_small_pane_cp1

0x814b,	// (0x00032a09) bg_popup_sub_pane_cp24_ParamLimits

0x814b,	// (0x00032a09) bg_popup_sub_pane_cp24

0x8eed,	// (0x000337ab) fep_china_uni_candidate_pane_ParamLimits

0x8eed,	// (0x000337ab) fep_china_uni_candidate_pane

0x8f01,	// (0x000337bf) fep_china_uni_entry_pane

0x8f11,	// (0x000337cf) popup_fep_china_uni_window_g1

0x8f2d,	// (0x000337eb) fep_china_uni_entry_pane_g1

0x8f35,	// (0x000337f3) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00039fe0) fep_china_uni_entry_pane_g

0x8f3d,	// (0x000337fb) fep_entry_item_pane

0x8f47,	// (0x00033805) fep_candidate_item_pane

0x8f4f,	// (0x0003380d) fep_china_uni_candidate_pane_g1

0x8f57,	// (0x00033815) fep_china_uni_candidate_pane_g2

0x8f5f,	// (0x0003381d) fep_china_uni_candidate_pane_g3

0x8f67,	// (0x00033825) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00039fe5) fep_china_uni_candidate_pane_g

0x7de6,	// (0x000326a4) fep_entry_item_pane_g1

0x8f6f,	// (0x0003382d) fep_entry_item_pane_t1_ParamLimits

0x8f6f,	// (0x0003382d) fep_entry_item_pane_t1

0x8f85,	// (0x00033843) fep_candidate_item_pane_t1_ParamLimits

0x8f85,	// (0x00033843) fep_candidate_item_pane_t1

0x8f9a,	// (0x00033858) fep_candidate_item_pane_t2_ParamLimits

0x8f9a,	// (0x00033858) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00039fee) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00039fee) fep_candidate_item_pane_t

0x7ed0,	// (0x0003278e) list_highlight_pane_cp31_ParamLimits

0x7ed0,	// (0x0003278e) list_highlight_pane_cp31

0x8fac,	// (0x0003386a) level_1_signal_lsc

0x8fb5,	// (0x00033873) level_2_signal_lsc

0x8fbe,	// (0x0003387c) level_3_signal_lsc

0x8fc7,	// (0x00033885) level_4_signal_lsc

0x8fd0,	// (0x0003388e) level_5_signal_lsc

0x8fd9,	// (0x00033897) level_6_signal_lsc

0x8fe2,	// (0x000338a0) level_7_signal_lsc

0x8fe2,	// (0x000338a0) level_1_battery_lsc

0x8feb,	// (0x000338a9) level_2_battery_lsc

0x8ff4,	// (0x000338b2) level_3_battery_lsc

0x8ffd,	// (0x000338bb) level_4_battery_lsc

0x9006,	// (0x000338c4) level_5_battery_lsc

0x900f,	// (0x000338cd) level_6_battery_lsc

0x8fac,	// (0x0003386a) level_7_battery_lsc

0x9018,	// (0x000338d6) scroll_handle_focus_pane_g1

0x9021,	// (0x000338df) scroll_handle_focus_pane_g2

0x902a,	// (0x000338e8) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00039ff3) scroll_handle_focus_pane_g

0x566b,	// (0x0002ff29) list_single_2graphic_pane_g1_ParamLimits

0x566b,	// (0x0002ff29) list_single_2graphic_pane_g1

0x4d60,	// (0x0002f61e) list_single_2graphic_pane_g2_ParamLimits

0x4d60,	// (0x0002f61e) list_single_2graphic_pane_g2

0x4ce6,	// (0x0002f5a4) list_single_2graphic_pane_g3_ParamLimits

0x4ce6,	// (0x0002f5a4) list_single_2graphic_pane_g3

0x5677,	// (0x0002ff35) list_single_2graphic_pane_g4_ParamLimits

0x5677,	// (0x0002ff35) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00039ffa) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00039ffa) list_single_2graphic_pane_g

0x5683,	// (0x0002ff41) list_single_2graphic_pane_t1_ParamLimits

0x5683,	// (0x0002ff41) list_single_2graphic_pane_t1

0x56b1,	// (0x0002ff6f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x56b1,	// (0x0002ff6f) list_double2_graphic_large_graphic_pane_g1

0x4e05,	// (0x0002f6c3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4e05,	// (0x0002f6c3) list_double2_graphic_large_graphic_pane_g2

0x4e16,	// (0x0002f6d4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4e16,	// (0x0002f6d4) list_double2_graphic_large_graphic_pane_g3

0x56c1,	// (0x0002ff7f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x56c1,	// (0x0002ff7f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003a003) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003a003) list_double2_graphic_large_graphic_pane_g

0x56cd,	// (0x0002ff8b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x56cd,	// (0x0002ff8b) list_double2_graphic_large_graphic_pane_t1

0x56e3,	// (0x0002ffa1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56e3,	// (0x0002ffa1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003a00c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003a00c) list_double2_graphic_large_graphic_pane_t

0x9172,	// (0x00033a30) popup_fast_swap_window_ParamLimits

0x9172,	// (0x00033a30) popup_fast_swap_window

0x918e,	// (0x00033a4c) popup_side_volume_key_window

0x91aa,	// (0x00033a68) stacon_top_pane

0x91b4,	// (0x00033a72) status_pane_ParamLimits

0x91b4,	// (0x00033a72) status_pane

0x91c2,	// (0x00033a80) status_small_pane

0x7df0,	// (0x000326ae) control_pane

0x7df0,	// (0x000326ae) stacon_bottom_pane

0x8748,	// (0x00033006) scroll_pane_cp121

0x873f,	// (0x00032ffd) set_content_pane

0x9033,	// (0x000338f1) bg_active_tab_pane_g1_cp1

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp1

0x9045,	// (0x00033903) bg_active_tab_pane_g3_cp1

0x9033,	// (0x000338f1) bg_passive_tab_pane_g1_cp1

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp1

0x9045,	// (0x00033903) bg_passive_tab_pane_g3_cp1

0x904e,	// (0x0003390c) bg_active_tab_pane_g1_cp2

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp2

0x9057,	// (0x00033915) bg_active_tab_pane_g3_cp2

0x904e,	// (0x0003390c) bg_passive_tab_pane_g1_cp2

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp2

0x9057,	// (0x00033915) bg_passive_tab_pane_g3_cp2

0x9060,	// (0x0003391e) bg_active_tab_pane_g1_cp3

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp3

0x9069,	// (0x00033927) bg_active_tab_pane_g3_cp3

0x9060,	// (0x0003391e) bg_passive_tab_pane_g1_cp3

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp3

0x9069,	// (0x00033927) bg_passive_tab_pane_g3_cp3

0x9072,	// (0x00033930) bg_active_tab_pane_g1_cp4

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp4

0x907d,	// (0x0003393b) bg_active_tab_pane_g3_cp4

0x9072,	// (0x00033930) bg_passive_tab_pane_g1_cp4

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp4

0x907d,	// (0x0003393b) bg_passive_tab_pane_g3_cp4

0x90c6,	// (0x00033984) bg_active_tab_pane_g1_cp5

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp5

0x90cf,	// (0x0003398d) bg_active_tab_pane_g3_cp5

0x90c6,	// (0x00033984) bg_passive_tab_pane_g1_cp5

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp5

0x90cf,	// (0x0003398d) bg_passive_tab_pane_g3_cp5

0x90d8,	// (0x00033996) list_set_graphic_pane_ParamLimits

0x90d8,	// (0x00033996) list_set_graphic_pane

0x7df0,	// (0x000326ae) bg_set_opt_pane_cp4

0x90f5,	// (0x000339b3) list_set_graphic_pane_g1_ParamLimits

0x90f5,	// (0x000339b3) list_set_graphic_pane_g1

0x9101,	// (0x000339bf) list_set_graphic_pane_g2_ParamLimits

0x9101,	// (0x000339bf) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003a011) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003a011) list_set_graphic_pane_g

0x0009,

0xfac8,	// (0x0003a386) volume_small_pane_cp_g

0x9125,	// (0x000339e3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9125,	// (0x000339e3) list_double2_large_graphic_pane_g1_cp2

0x9131,	// (0x000339ef) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9131,	// (0x000339ef) list_double2_large_graphic_pane_g2_cp2

0x9142,	// (0x00033a00) list_double2_large_graphic_pane_g3_cp2

0x914a,	// (0x00033a08) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x914a,	// (0x00033a08) list_double2_large_graphic_pane_t1_cp2

0x9160,	// (0x00033a1e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9160,	// (0x00033a1e) list_double2_large_graphic_pane_t2_cp2

0xad3e,	// (0x000355fc) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad3e,	// (0x000355fc) list_double_large_graphic_pane_g1_cp2

0xad4f,	// (0x0003560d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad4f,	// (0x0003560d) list_double_large_graphic_pane_g2_cp2

0x92db,	// (0x00033b99) list_double_large_graphic_pane_g3_cp2

0xad60,	// (0x0003561e) list_double_large_graphic_pane_g4_cp

0xad68,	// (0x00035626) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad68,	// (0x00035626) list_double_large_graphic_pane_t1_cp2

0xad7f,	// (0x0003563d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad7f,	// (0x0003563d) list_double_large_graphic_pane_t2_cp2

0x91cd,	// (0x00033a8b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x91cd,	// (0x00033a8b) list_double2_graphic_pane_g1_cp2

0x91db,	// (0x00033a99) list_double2_graphic_pane_g2_cp2_ParamLimits

0x91db,	// (0x00033a99) list_double2_graphic_pane_g2_cp2

0x91ec,	// (0x00033aaa) list_double2_graphic_pane_g3_cp2

0x91f6,	// (0x00033ab4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x91f6,	// (0x00033ab4) list_double2_graphic_pane_t1_cp2

0x920c,	// (0x00033aca) list_double2_graphic_pane_t2_cp2_ParamLimits

0x920c,	// (0x00033aca) list_double2_graphic_pane_t2_cp2

0x921e,	// (0x00033adc) list_single_number_heading_pane_g1_cp2_ParamLimits

0x921e,	// (0x00033adc) list_single_number_heading_pane_g1_cp2

0x922a,	// (0x00033ae8) list_single_number_heading_pane_g2_cp2

0x9232,	// (0x00033af0) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9232,	// (0x00033af0) list_single_number_heading_pane_t1_cp2

0x9248,	// (0x00033b06) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9248,	// (0x00033b06) list_single_number_heading_pane_t2_cp2

0x925a,	// (0x00033b18) list_single_number_heading_pane_t3_cp2_ParamLimits

0x925a,	// (0x00033b18) list_single_number_heading_pane_t3_cp2

0x921e,	// (0x00033adc) list_single_heading_pane_g1_cp2_ParamLimits

0x921e,	// (0x00033adc) list_single_heading_pane_g1_cp2

0x922a,	// (0x00033ae8) list_single_heading_pane_g2_cp2

0x9232,	// (0x00033af0) list_single_heading_pane_t1_cp2_ParamLimits

0x9232,	// (0x00033af0) list_single_heading_pane_t1_cp2

0xab46,	// (0x00035404) list_single_heading_pane_t2_cp2_ParamLimits

0xab46,	// (0x00035404) list_single_heading_pane_t2_cp2

0xaa8e,	// (0x0003534c) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa8e,	// (0x0003534c) list_double_graphic_pane_g1_cp2

0xaa9a,	// (0x00035358) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa9a,	// (0x00035358) list_double_graphic_pane_g2_cp2

0xaaa9,	// (0x00035367) list_double_graphic_pane_g3_cp2

0xaab1,	// (0x0003536f) list_double_graphic_pane_t1_cp2_ParamLimits

0xaab1,	// (0x0003536f) list_double_graphic_pane_t1_cp2

0xaac7,	// (0x00035385) list_double_graphic_pane_t2_cp2_ParamLimits

0xaac7,	// (0x00035385) list_double_graphic_pane_t2_cp2

0x92cf,	// (0x00033b8d) list_double_number_pane_g1_cp2_ParamLimits

0x92cf,	// (0x00033b8d) list_double_number_pane_g1_cp2

0x92db,	// (0x00033b99) list_double_number_pane_g2_cp2

0xaa52,	// (0x00035310) list_double_number_pane_t1_cp2_ParamLimits

0xaa52,	// (0x00035310) list_double_number_pane_t1_cp2

0xaa66,	// (0x00035324) list_double_number_pane_t2_cp2_ParamLimits

0xaa66,	// (0x00035324) list_double_number_pane_t2_cp2

0xaa7c,	// (0x0003533a) list_double_number_pane_t3_cp2_ParamLimits

0xaa7c,	// (0x0003533a) list_double_number_pane_t3_cp2

0xa93b,	// (0x000351f9) list_single_graphic_pane_g1_cp2_ParamLimits

0xa93b,	// (0x000351f9) list_single_graphic_pane_g1_cp2

0x9333,	// (0x00033bf1) list_single_graphic_pane_g2_cp2_ParamLimits

0x9333,	// (0x00033bf1) list_single_graphic_pane_g2_cp2

0x933f,	// (0x00033bfd) list_single_graphic_pane_g3_cp2

0xa911,	// (0x000351cf) list_single_graphic_pane_t1_cp2_ParamLimits

0xa911,	// (0x000351cf) list_single_graphic_pane_t1_cp2

0x9333,	// (0x00033bf1) list_single_number_pane_g1_cp2_ParamLimits

0x9333,	// (0x00033bf1) list_single_number_pane_g1_cp2

0x933f,	// (0x00033bfd) list_single_number_pane_g2_cp2

0xa911,	// (0x000351cf) list_single_number_pane_t1_cp2_ParamLimits

0xa911,	// (0x000351cf) list_single_number_pane_t1_cp2

0xa927,	// (0x000351e5) list_single_number_pane_t2_cp2_ParamLimits

0xa927,	// (0x000351e5) list_single_number_pane_t2_cp2

0x9131,	// (0x000339ef) list_double2_pane_g1_cp2_ParamLimits

0x9131,	// (0x000339ef) list_double2_pane_g1_cp2

0x9142,	// (0x00033a00) list_double2_pane_g2_cp2

0x92a7,	// (0x00033b65) list_double2_pane_t1_cp2_ParamLimits

0x92a7,	// (0x00033b65) list_double2_pane_t1_cp2

0x92bd,	// (0x00033b7b) list_double2_pane_t2_cp2_ParamLimits

0x92bd,	// (0x00033b7b) list_double2_pane_t2_cp2

0x92cf,	// (0x00033b8d) list_double_pane_g1_cp2_ParamLimits

0x92cf,	// (0x00033b8d) list_double_pane_g1_cp2

0x92db,	// (0x00033b99) list_double_pane_g2_cp2

0x92e3,	// (0x00033ba1) list_double_pane_t1_cp2_ParamLimits

0x92e3,	// (0x00033ba1) list_double_pane_t1_cp2

0x92f9,	// (0x00033bb7) list_double_pane_t2_cp2_ParamLimits

0x92f9,	// (0x00033bb7) list_double_pane_t2_cp2

0x9323,	// (0x00033be1) list_single_pane_cp2_g3

0x9333,	// (0x00033bf1) list_single_pane_g1_cp2_ParamLimits

0x9333,	// (0x00033bf1) list_single_pane_g1_cp2

0x933f,	// (0x00033bfd) list_single_pane_g2_cp2

0x9347,	// (0x00033c05) list_single_pane_t1_cp2_ParamLimits

0x9347,	// (0x00033c05) list_single_pane_t1_cp2

0x935f,	// (0x00033c1d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x935f,	// (0x00033c1d) list_single_large_graphic_pane_g1_cp2

0x936b,	// (0x00033c29) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x936b,	// (0x00033c29) list_single_large_graphic_pane_g2_cp2

0x9377,	// (0x00033c35) list_single_large_graphic_pane_g3_cp2

0x937f,	// (0x00033c3d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x937f,	// (0x00033c3d) list_single_large_graphic_pane_g4_cp1

0x9399,	// (0x00033c57) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9399,	// (0x00033c57) list_single_large_graphic_pane_t1_cp2

0xa8dd,	// (0x0003519b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa8dd,	// (0x0003519b) list_single_graphic_heading_pane_g1_cp2

0xa8aa,	// (0x00035168) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8aa,	// (0x00035168) list_single_graphic_heading_pane_g4_cp2

0x933f,	// (0x00033bfd) list_single_graphic_heading_pane_g5_cp2

0xa8e9,	// (0x000351a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa8e9,	// (0x000351a7) list_single_graphic_heading_pane_t1_cp2

0xa8ff,	// (0x000351bd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8ff,	// (0x000351bd) list_single_graphic_heading_pane_t2_cp2

0xa89e,	// (0x0003515c) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa89e,	// (0x0003515c) list_single_2graphic_pane_g1_cp2

0xa8aa,	// (0x00035168) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8aa,	// (0x00035168) list_single_2graphic_pane_g2_cp2

0x933f,	// (0x00033bfd) list_single_2graphic_pane_g3_cp2

0xa8bb,	// (0x00035179) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8bb,	// (0x00035179) list_single_2graphic_pane_g4_cp2

0xa8c7,	// (0x00035185) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8c7,	// (0x00035185) list_single_2graphic_pane_t1_cp2

0x7de6,	// (0x000326a4) list_highlight_pane_g10_cp1

0xa476,	// (0x00034d34) list_highlight_pane_g1_cp1

0xa47e,	// (0x00034d3c) list_highlight_pane_g2_cp1

0xa486,	// (0x00034d44) list_highlight_pane_g3_cp1

0xa48e,	// (0x00034d4c) list_highlight_pane_g4_cp1

0xa496,	// (0x00034d54) list_highlight_pane_g5_cp1

0xa49e,	// (0x00034d5c) list_highlight_pane_g6_cp1

0xa4a6,	// (0x00034d64) list_highlight_pane_g7_cp1

0xa4ae,	// (0x00034d6c) list_highlight_pane_g8_cp1

0xa4b6,	// (0x00034d74) list_highlight_pane_g9_cp1

0xa396,	// (0x00034c54) form_field_slider_pane_t3

0xa3a4,	// (0x00034c62) form_field_slider_pane_t4

0xa3b2,	// (0x00034c70) slider_form_pane_ParamLimits

0xa3b2,	// (0x00034c70) slider_form_pane

0x7df0,	// (0x000326ae) control_abbreviations

0x7df0,	// (0x000326ae) control_conventions

0x7df0,	// (0x000326ae) control_definitions

0x7df0,	// (0x000326ae) format_table_attribute

0xab90,	// (0x0003544e) bg_popup_preview_window_pane_g9

0x7df0,	// (0x000326ae) format_table_data2

0x7df0,	// (0x000326ae) format_table_data3

0x7df0,	// (0x000326ae) format_table_data_example

0x0008,

0x7df0,	// (0x000326ae) intro_purpose

0xf8ef,	// (0x0003a1ad) bg_popup_preview_window_pane_g

0x7df0,	// (0x000326ae) texts_category

0x7df0,	// (0x000326ae) texts_graphics

0x93af,	// (0x00033c6d) text_digital

0x93be,	// (0x00033c7c) text_primary

0x93cd,	// (0x00033c8b) text_primary_small

0x93dc,	// (0x00033c9a) text_secondary

0x93eb,	// (0x00033ca9) text_title

0xb2bf,	// (0x00035b7d) bg_passive_tab_pane_g1_cp3_srt

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp3_srt

0xb2c8,	// (0x00035b86) bg_passive_tab_pane_g3_cp3_srt

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp3_srt_ParamLimits

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp3_srt

0xb2d1,	// (0x00035b8f) tabs_4_active_pane_srt_g1

0xb2d9,	// (0x00035b97) tabs_4_active_pane_srt_t1_ParamLimits

0xb2d9,	// (0x00035b97) tabs_4_active_pane_srt_t1

0xb2bf,	// (0x00035b7d) bg_active_tab_pane_g1_cp3_copy1

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp3_copy1

0xb2c8,	// (0x00035b86) bg_active_tab_pane_g3_cp3_copy1

0x7ed0,	// (0x0003278e) tabs_2_long_active_pane_srt_ParamLimits

0x7ed0,	// (0x0003278e) tabs_2_long_active_pane_srt

0x7ed0,	// (0x0003278e) tabs_2_long_passive_pane_srt_ParamLimits

0x7ed0,	// (0x0003278e) tabs_2_long_passive_pane_srt

0x8946,	// (0x00033204) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8946,	// (0x00033204) bg_passive_tab_pane_cp4_srt

0xafb3,	// (0x00035871) bg_passive_tab_pane_g1_cp4_srt

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp4_srt

0xafbc,	// (0x0003587a) bg_passive_tab_pane_g3_cp4_srt

0x8925,	// (0x000331e3) bg_active_tab_pane_cp4_srt_ParamLimits

0x8925,	// (0x000331e3) bg_active_tab_pane_cp4_srt

0xafc5,	// (0x00035883) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafc5,	// (0x00035883) tabs_2_long_active_pane_srt_t1

0xafb3,	// (0x00035871) bg_active_tab_pane_g1_cp4_srt

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp4_srt

0xafbc,	// (0x0003587a) bg_active_tab_pane_g3_cp4_srt

0x814b,	// (0x00032a09) tabs_3_long_active_pane_srt_ParamLimits

0x814b,	// (0x00032a09) tabs_3_long_active_pane_srt

0x814b,	// (0x00032a09) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x814b,	// (0x00032a09) tabs_3_long_passive_pane_cp_srt

0x814b,	// (0x00032a09) tabs_3_long_passive_pane_srt_ParamLimits

0x814b,	// (0x00032a09) tabs_3_long_passive_pane_srt

0x8946,	// (0x00033204) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8946,	// (0x00033204) bg_passive_tab_pane_cp5_srt

0x90c6,	// (0x00033984) bg_passive_tab_pane_g1_cp5_srt

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp5_srt

0x90cf,	// (0x0003398d) bg_passive_tab_pane_g3_cp5_srt

0x8925,	// (0x000331e3) bg_active_tab_pane_cp5_srt_ParamLimits

0x8925,	// (0x000331e3) bg_active_tab_pane_cp5_srt

0xafa1,	// (0x0003585f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafa1,	// (0x0003585f) tabs_3_long_active_pane_srt_t1

0x90c6,	// (0x00033984) bg_active_tab_pane_g1_cp5_srt

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp5_srt

0x90cf,	// (0x0003398d) bg_active_tab_pane_g3_cp5_srt

0xaf93,	// (0x00035851) navi_text_pane_srt_t1

0xaf8b,	// (0x00035849) navi_icon_pane_srt_g1

0x95c0,	// (0x00033e7e) midp_editing_number_pane_srt

0x93fa,	// (0x00033cb8) midp_ticker_pane_srt

0x95c8,	// (0x00033e86) midp_ticker_pane_srt_g1

0x95d0,	// (0x00033e8e) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003a030) midp_ticker_pane_srt_g

0x95d8,	// (0x00033e96) midp_ticker_pane_srt_t1

0xaf7c,	// (0x0003583a) midp_editing_number_pane_t1_copy1

0x9402,	// (0x00033cc0) listscroll_midp_pane

0x9402,	// (0x00033cc0) midp_form_pane

0x9472,	// (0x00033d30) midp_info_popup_window_ParamLimits

0x9472,	// (0x00033d30) midp_info_popup_window

0x880e,	// (0x000330cc) bg_popup_sub_pane_cp50_ParamLimits

0x880e,	// (0x000330cc) bg_popup_sub_pane_cp50

0xa0a2,	// (0x00034960) listscroll_midp_info_pane_ParamLimits

0xa0a2,	// (0x00034960) listscroll_midp_info_pane

0xa082,	// (0x00034940) listscroll_form_midp_pane_ParamLimits

0xa082,	// (0x00034940) listscroll_form_midp_pane

0xa08e,	// (0x0003494c) scroll_bar_cp050

0xa062,	// (0x00034920) list_midp_pane

0xbd03,	// (0x000365c1) signal_pane_g2_cp

0x9f90,	// (0x0003484e) listscroll_midp_info_pane_t1_ParamLimits

0x9f90,	// (0x0003484e) listscroll_midp_info_pane_t1

0x9fa8,	// (0x00034866) listscroll_midp_info_pane_t2_ParamLimits

0x9fa8,	// (0x00034866) listscroll_midp_info_pane_t2

0x9fe6,	// (0x000348a4) listscroll_midp_info_pane_t3_ParamLimits

0x9fe6,	// (0x000348a4) listscroll_midp_info_pane_t3

0xa02c,	// (0x000348ea) listscroll_midp_info_pane_t4_ParamLimits

0xa02c,	// (0x000348ea) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003a0e8) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003a0e8) listscroll_midp_info_pane_t

0x88d2,	// (0x00033190) scroll_pane_cp21

0x9f2e,	// (0x000347ec) form_midp_field_choice_group_pane

0x9f37,	// (0x000347f5) form_midp_field_text_pane

0x9f76,	// (0x00034834) form_midp_field_time_pane

0x9f7e,	// (0x0003483c) form_midp_gauge_slider_pane

0x9f87,	// (0x00034845) form_midp_gauge_wait_pane

0x7df0,	// (0x000326ae) form_midp_image_pane

0x753f,	// (0x00031dfd) list_single_midp_pane_ParamLimits

0x753f,	// (0x00031dfd) list_single_midp_pane

0x9ee6,	// (0x000347a4) form_midp_field_text_pane_t1

0x9cb6,	// (0x00034574) input_focus_pane_cp050

0x9f1d,	// (0x000347db) list_midp_form_text_pane

0x9eb5,	// (0x00034773) form_midp_field_choice_group_pane_t1

0x9ec3,	// (0x00034781) input_focus_pane_cp051

0x9ed7,	// (0x00034795) list_midp_choice_pane

0x7df0,	// (0x000326ae) status_idle_pane

0x9e99,	// (0x00034757) form_midp_field_time_pane_t1

0x7de6,	// (0x000326a4) wait_anim_pane_g2_copy1

0x9ea7,	// (0x00034765) form_midp_field_time_pane_t2

0x0001,

0x9520,	// (0x00033dde) aid_navinavi_width_2_pane

0xf825,	// (0x0003a0e3) form_midp_field_time_pane_t

0x7df0,	// (0x000326ae) input_focus_pane_cp052

0x7df0,	// (0x000326ae) bg_input_focus_pane_cp040

0x9e59,	// (0x00034717) form_midp_gauge_slider_pane_t1

0x9e67,	// (0x00034725) form_midp_gauge_slider_pane_t2

0x9e75,	// (0x00034733) form_midp_gauge_slider_pane_t3

0x9e83,	// (0x00034741) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003a0da) form_midp_gauge_slider_pane_t

0x9e91,	// (0x0003474f) form_midp_slider_pane

0x7ed0,	// (0x0003278e) bg_input_focus_pane_cp041_ParamLimits

0x7ed0,	// (0x0003278e) bg_input_focus_pane_cp041

0x9e26,	// (0x000346e4) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e26,	// (0x000346e4) form_midp_gauge_wait_pane_t1

0x9e38,	// (0x000346f6) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e38,	// (0x000346f6) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003a0d5) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003a0d5) form_midp_gauge_wait_pane_t

0x9e4a,	// (0x00034708) form_midp_wait_pane_ParamLimits

0x9e4a,	// (0x00034708) form_midp_wait_pane

0x9df0,	// (0x000346ae) form_midp_image_pane_g1

0x9df9,	// (0x000346b7) form_midp_image_pane_t1

0x9e08,	// (0x000346c6) form_midp_image_pane_t2

0x9e17,	// (0x000346d5) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003a0ce) form_midp_image_pane_t

0x9de7,	// (0x000346a5) list_single_midp_pane_g1

0x7530,	// (0x00031dee) list_single_midp_pane_t1

0x9dbf,	// (0x0003467d) list_midp_form_item_pane_ParamLimits

0x9dbf,	// (0x0003467d) list_midp_form_item_pane

0x94c8,	// (0x00033d86) list_midp_form_item_pane_t1

0x94d7,	// (0x00033d95) midp_ticker_pane_g1

0x94e3,	// (0x00033da1) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003a016) midp_ticker_pane_g

0x94ef,	// (0x00033dad) midp_ticker_pane_t1

0xb1cd,	// (0x00035a8b) midp_editing_number_pane_t1

0xb1ab,	// (0x00035a69) midp_editing_number_pane

0xb1ba,	// (0x00035a78) midp_ticker_pane

0xaf6c,	// (0x0003582a) ai_message_heading_pane

0x7df0,	// (0x000326ae) bg_popup_window_pane_cp14

0xaf74,	// (0x00035832) listscroll_ai_message_pane

0xaef6,	// (0x000357b4) ai_message_heading_pane_g1_ParamLimits

0xaef6,	// (0x000357b4) ai_message_heading_pane_g1

0xaf02,	// (0x000357c0) ai_message_heading_pane_g2_ParamLimits

0xaf02,	// (0x000357c0) ai_message_heading_pane_g2

0xaf0e,	// (0x000357cc) ai_message_heading_pane_g3_ParamLimits

0xaf0e,	// (0x000357cc) ai_message_heading_pane_g3

0xaf1a,	// (0x000357d8) ai_message_heading_pane_g4_ParamLimits

0xaf1a,	// (0x000357d8) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a20f) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a20f) ai_message_heading_pane_g

0xaf26,	// (0x000357e4) ai_message_heading_pane_t1_ParamLimits

0xaf26,	// (0x000357e4) ai_message_heading_pane_t1

0xaf40,	// (0x000357fe) ai_message_heading_pane_t2_ParamLimits

0xaf40,	// (0x000357fe) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a218) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a218) ai_message_heading_pane_t

0xaf52,	// (0x00035810) bg_popup_heading_pane_cp1_ParamLimits

0xaf52,	// (0x00035810) bg_popup_heading_pane_cp1

0xaee4,	// (0x000357a2) list_ai_message_pane_ParamLimits

0xaee4,	// (0x000357a2) list_ai_message_pane

0x88d2,	// (0x00033190) scroll_pane_cp10

0xae80,	// (0x0003573e) list_ai_message_pane_g1

0xae88,	// (0x00035746) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a1ec) list_ai_message_pane_g

0xae90,	// (0x0003574e) list_ai_message_pane_t1_ParamLimits

0xae90,	// (0x0003574e) list_ai_message_pane_t1

0xaea5,	// (0x00035763) list_ai_message_pane_t2_ParamLimits

0xaea5,	// (0x00035763) list_ai_message_pane_t2

0xaeba,	// (0x00035778) list_ai_message_pane_t3_ParamLimits

0xaeba,	// (0x00035778) list_ai_message_pane_t3

0xaecf,	// (0x0003578d) list_ai_message_pane_t4_ParamLimits

0xaecf,	// (0x0003578d) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a1f1) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a1f1) list_ai_message_pane_t

0xae6b,	// (0x00035729) cell_ai_soft_ind_pane_ParamLimits

0xae6b,	// (0x00035729) cell_ai_soft_ind_pane

0x9501,	// (0x00033dbf) cell_ai_soft_ind_pane_g1_ParamLimits

0x9501,	// (0x00033dbf) cell_ai_soft_ind_pane_g1

0x7df0,	// (0x000326ae) grid_highlight_cp1

0x950e,	// (0x00033dcc) text_secondary_cp56_ParamLimits

0x950e,	// (0x00033dcc) text_secondary_cp56

0xae40,	// (0x000356fe) example_general_pane_ParamLimits

0xae40,	// (0x000356fe) example_general_pane

0xae4c,	// (0x0003570a) example_parent_pane_g1_ParamLimits

0xae4c,	// (0x0003570a) example_parent_pane_g1

0xae58,	// (0x00035716) example_parent_pane_t1_ParamLimits

0xae58,	// (0x00035716) example_parent_pane_t1

0x5de0,	// (0x0003069e) popup_preview_text_window_ParamLimits

0x5de0,	// (0x0003069e) popup_preview_text_window

0x932b,	// (0x00033be9) list_single_pane_cp2_g4

0x8227,	// (0x00032ae5) bg_popup_preview_window_pane_ParamLimits

0x8227,	// (0x00032ae5) bg_popup_preview_window_pane

0xab98,	// (0x00035456) popup_preview_text_window_t1_ParamLimits

0xab98,	// (0x00035456) popup_preview_text_window_t1

0xabb6,	// (0x00035474) popup_preview_text_window_t2_ParamLimits

0xabb6,	// (0x00035474) popup_preview_text_window_t2

0xabff,	// (0x000354bd) popup_preview_text_window_t3_ParamLimits

0xabff,	// (0x000354bd) popup_preview_text_window_t3

0xac44,	// (0x00035502) popup_preview_text_window_t4_ParamLimits

0xac44,	// (0x00035502) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003a1c0) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003a1c0) popup_preview_text_window_t

0xacc2,	// (0x00035580) scroll_pane_cp11

0x9c42,	// (0x00034500) bg_popup_preview_window_pane_g1

0xab58,	// (0x00035416) bg_popup_preview_window_pane_g2

0xab60,	// (0x0003541e) bg_popup_preview_window_pane_g3

0xab68,	// (0x00035426) bg_popup_preview_window_pane_g4

0xab70,	// (0x0003542e) bg_popup_preview_window_pane_g5

0xab78,	// (0x00035436) bg_popup_preview_window_pane_g6

0xab80,	// (0x0003543e) bg_popup_preview_window_pane_g7

0xab88,	// (0x00035446) bg_popup_preview_window_pane_g8

0x4835,	// (0x0002f0f3) aid_popup_width_pane

0x5dbe,	// (0x0003067c) popup_midp_note_alarm_window_ParamLimits

0x5dbe,	// (0x0003067c) popup_midp_note_alarm_window

0x8759,	// (0x00033017) data_form_pane_ParamLimits

0x5217,	// (0x0002fad5) form_field_data_pane_g1

0x5221,	// (0x0002fadf) form_field_data_pane_t1_ParamLimits

0x8765,	// (0x00033023) input_focus_pane_ParamLimits

0x5239,	// (0x0002faf7) data_form_wide_pane_ParamLimits

0x524a,	// (0x0002fb08) form_field_data_wide_pane_g1

0x5256,	// (0x0002fb14) form_field_data_wide_pane_t1_ParamLimits

0x84d6,	// (0x00032d94) input_focus_pane_cp6_ParamLimits

0x887f,	// (0x0003313d) input_popup_find_pane_g1_ParamLimits

0x887f,	// (0x0003313d) input_popup_find_pane_g1

0x54cc,	// (0x0002fd8a) aid_navi_side_left_pane

0x54e1,	// (0x0002fd9f) aid_navi_side_right_pane

0xa571,	// (0x00034e2f) bg_popup_window_pane_cp30_ParamLimits

0xa571,	// (0x00034e2f) bg_popup_window_pane_cp30

0xa5eb,	// (0x00034ea9) popup_midp_note_alarm_window_g1_ParamLimits

0xa5eb,	// (0x00034ea9) popup_midp_note_alarm_window_g1

0xa61b,	// (0x00034ed9) popup_midp_note_alarm_window_t1_ParamLimits

0xa61b,	// (0x00034ed9) popup_midp_note_alarm_window_t1

0xa6bc,	// (0x00034f7a) popup_midp_note_alarm_window_t2_ParamLimits

0xa6bc,	// (0x00034f7a) popup_midp_note_alarm_window_t2

0xa76a,	// (0x00035028) popup_midp_note_alarm_window_t3_ParamLimits

0xa76a,	// (0x00035028) popup_midp_note_alarm_window_t3

0xa79c,	// (0x0003505a) popup_midp_note_alarm_window_t4_ParamLimits

0xa79c,	// (0x0003505a) popup_midp_note_alarm_window_t4

0xa7c2,	// (0x00035080) popup_midp_note_alarm_window_t5_ParamLimits

0xa7c2,	// (0x00035080) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003a15d) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003a15d) popup_midp_note_alarm_window_t

0xa86e,	// (0x0003512c) wait_bar_pane_cp1_ParamLimits

0xa86e,	// (0x0003512c) wait_bar_pane_cp1

0x7df0,	// (0x000326ae) wait_anim_pane_copy1

0x7df0,	// (0x000326ae) wait_border_pane_copy1

0xa257,	// (0x00034b15) wait_border_pane_g1_copy1

0x5270,	// (0x0002fb2e) form_field_popup_pane_g1

0x5278,	// (0x0002fb36) form_field_popup_pane_t1_ParamLimits

0x8765,	// (0x00033023) input_focus_pane_cp7_ParamLimits

0x8793,	// (0x00033051) list_form_pane_ParamLimits

0x5290,	// (0x0002fb4e) form_field_popup_wide_pane_g1

0x5298,	// (0x0002fb56) form_field_popup_wide_pane_t1_ParamLimits

0x8765,	// (0x00033023) input_focus_pane_cp8_ParamLimits

0x879f,	// (0x0003305d) list_form_wide_pane_ParamLimits

0xb353,	// (0x00035c11) aid_size_cell_graphic_pane

0x5322,	// (0x0002fbe0) data_form_pane_t1_ParamLimits

0x7599,	// (0x00031e57) data_form_wide_pane_t1_ParamLimits

0x980f,	// (0x000340cd) bg_status_flat_pane

0x7e30,	// (0x000326ee) title_pane_t1_ParamLimits

0x7e98,	// (0x00032756) title_pane_t2_ParamLimits

0x7ebe,	// (0x0003277c) title_pane_t3_ParamLimits

0xf557,	// (0x00039e15) title_pane_t_ParamLimits

0x8d53,	// (0x00033611) level_1_signal_ParamLimits

0x8d65,	// (0x00033623) level_2_signal_ParamLimits

0x8d78,	// (0x00033636) level_3_signal_ParamLimits

0x8d8b,	// (0x00033649) level_4_signal_ParamLimits

0x8d9e,	// (0x0003365c) level_5_signal_ParamLimits

0x8db1,	// (0x0003366f) level_6_signal_ParamLimits

0x8dc4,	// (0x00033682) level_7_signal_ParamLimits

0x8d53,	// (0x00033611) level_1_battery_ParamLimits

0x8d65,	// (0x00033623) level_2_battery_ParamLimits

0x8d78,	// (0x00033636) level_3_battery_ParamLimits

0x8d8b,	// (0x00033649) level_4_battery_ParamLimits

0x8d9e,	// (0x0003365c) level_5_battery_ParamLimits

0x8db1,	// (0x0003366f) level_6_battery_ParamLimits

0x8dc4,	// (0x00033682) level_7_battery_ParamLimits

0xa476,	// (0x00034d34) bg_status_flat_pane_g1

0xa47e,	// (0x00034d3c) bg_status_flat_pane_g2

0xa486,	// (0x00034d44) bg_status_flat_pane_g3

0xa48e,	// (0x00034d4c) bg_status_flat_pane_g4

0xa496,	// (0x00034d54) bg_status_flat_pane_g5

0xa49e,	// (0x00034d5c) bg_status_flat_pane_g6

0xa4a6,	// (0x00034d64) bg_status_flat_pane_g7

0x7ee6,	// (0x000327a4) tabs_3_active_pane_t1_ParamLimits

0x7ee6,	// (0x000327a4) tabs_3_passive_pane_t1_ParamLimits

0x7f00,	// (0x000327be) tabs_4_active_pane_t1_ParamLimits

0x7f00,	// (0x000327be) tabs_4_1_passive_pane_t1_ParamLimits

0x8913,	// (0x000331d1) tabs_2_active_pane_t1_ParamLimits

0x8913,	// (0x000331d1) tabs_2_passive_pane_t1_ParamLimits

0x8925,	// (0x000331e3) bg_active_tab_pane_cp4_ParamLimits

0x8933,	// (0x000331f1) tabs_2_long_active_pane_t1_ParamLimits

0x8946,	// (0x00033204) bg_passive_tab_pane_cp4_ParamLimits

0x6099,	// (0x00030957) list_single_midp_graphic_pane_t1_ParamLimits

0x8925,	// (0x000331e3) bg_active_tab_pane_cp5_ParamLimits

0x8952,	// (0x00033210) tabs_3_long_active_pane_t1_ParamLimits

0x8946,	// (0x00033204) bg_passive_tab_pane_cp5_ParamLimits

0x6099,	// (0x00030957) list_single_midp_graphic_pane_t1

0x980f,	// (0x000340cd) bg_status_flat_pane_ParamLimits

0x98d2,	// (0x00034190) indicator_pane_cp2_ParamLimits

0x98d2,	// (0x00034190) indicator_pane_cp2

0x99fd,	// (0x000342bb) navi_pane_srt_ParamLimits

0x99fd,	// (0x000342bb) navi_pane_srt

0x9a21,	// (0x000342df) popup_clock_digital_analogue_window_cp1

0x7fad,	// (0x0003286b) indicator_pane_t1

0x93fa,	// (0x00033cb8) copy_highlight_pane

0x93fa,	// (0x00033cb8) cursor_graphics_pane

0x93fa,	// (0x00033cb8) graphic_within_text_pane

0x93fa,	// (0x00033cb8) link_highlight_pane

0xac85,	// (0x00035543) popup_preview_text_window_t5_ParamLimits

0xac85,	// (0x00035543) popup_preview_text_window_t5

0x9528,	// (0x00033de6) cursor_digital_pane

0x9528,	// (0x00033de6) cursor_primary_pane

0x9539,	// (0x00033df7) cursor_primary_small_pane

0x9541,	// (0x00033dff) cursor_secondary_pane

0x9549,	// (0x00033e07) cursor_title_pane

0x9528,	// (0x00033de6) link_highlight_digital_pane

0x9530,	// (0x00033dee) link_highlight_primary_pane

0x9539,	// (0x00033df7) link_highlight_primary_small_pane

0x9541,	// (0x00033dff) link_highlight_secondary_pane

0x9549,	// (0x00033e07) link_highlight_title_pane

0x9528,	// (0x00033de6) copy_highlight_digital_pane

0x9528,	// (0x00033de6) copy_highlight_primary_pane

0x9539,	// (0x00033df7) copy_highlight_primary_small_pane

0x9541,	// (0x00033dff) copy_highlight_secondary_pane

0x9549,	// (0x00033e07) copy_highlight_title_pane

0x9541,	// (0x00033dff) graphic_text_digital_pane

0xa514,	// (0x00034dd2) graphic_text_primary_pane

0xa51d,	// (0x00034ddb) graphic_text_primary_small_pane

0x9539,	// (0x00033df7) graphic_text_secondary_pane

0x9528,	// (0x00033de6) graphic_text_title_pane

0x9551,	// (0x00033e0f) cursor_primary_pane_g1

0xa506,	// (0x00034dc4) cursor_text_primary_t1

0xa4ee,	// (0x00034dac) cursor_primary_small_pane_g1

0xa4f8,	// (0x00034db6) cursor_text_primary_small_t1

0xa4d6,	// (0x00034d94) cursor_primary_small_pane_g1_copy1

0xa4e0,	// (0x00034d9e) cursor_text_primary_small_t1_copy1

0xa4be,	// (0x00034d7c) cursor_text_title_t1

0xa4cc,	// (0x00034d8a) cursor_title_pane_g1

0x9551,	// (0x00033e0f) cursor_digital_pane_g1

0x955b,	// (0x00033e19) cursor_text_digital_t1

0x9580,	// (0x00033e3e) link_highlight_primary_pane_g1

0xa467,	// (0x00034d25) link_highlight_primary_pane_t1

0x9569,	// (0x00033e27) link_highlight_primary_small_pane_g1

0x9571,	// (0x00033e2f) link_highlight_primary_small_pane_t1

0x9580,	// (0x00033e3e) link_highlight_secondary_pane_g1

0x9588,	// (0x00033e46) link_highlight_secondary_pane_t1

0xa3db,	// (0x00034c99) link_highlight_title_pane_g1

0xa3e3,	// (0x00034ca1) link_highlight_title_pane_t1

0xa3c4,	// (0x00034c82) link_highlight_digital_pane_g1

0xa3cc,	// (0x00034c8a) link_highlight_digital_pane_t1

0xa29c,	// (0x00034b5a) copy_highlight_primary_pane_g1

0xa2a4,	// (0x00034b62) copy_highlight_primary_pane_t1

0xa276,	// (0x00034b34) copy_highlight_primary_small_pane_g1

0xa28d,	// (0x00034b4b) copy_highlight_primary_small_pane_t1

0x9597,	// (0x00033e55) copy_highlight_secondary_pane_g1

0x959f,	// (0x00033e5d) copy_highlight_secondary_pane_t1

0xa276,	// (0x00034b34) copy_highlight_title_pane_g1

0xa27e,	// (0x00034b3c) copy_highlight_title_pane_t1

0xa29c,	// (0x00034b5a) copy_highlight_digital_pane_g1

0xb521,	// (0x00035ddf) copy_highlight_digital_pane_t1

0xb475,	// (0x00035d33) graphic_text_primary_pane_g1

0xb505,	// (0x00035dc3) graphic_text_primary_pane_t1

0xb513,	// (0x00035dd1) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a28c) graphic_text_primary_pane_t

0xb4e1,	// (0x00035d9f) graphic_text_primary_small_pane_g1

0xb4e9,	// (0x00035da7) graphic_text_primary_small_pane_t1

0xb4f7,	// (0x00035db5) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a287) graphic_text_primary_small_pane_t

0xb4bd,	// (0x00035d7b) graphic_text_secondary_pane_g1

0xb4c5,	// (0x00035d83) graphic_text_secondary_pane_t1

0xb4d3,	// (0x00035d91) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a282) graphic_text_secondary_pane_t

0xb499,	// (0x00035d57) graphic_text_title_pane_g1

0xb4a1,	// (0x00035d5f) graphic_text_title_pane_t1

0xb4af,	// (0x00035d6d) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a27d) graphic_text_title_pane_t

0xb475,	// (0x00035d33) graphic_text_digital_pane_g1

0xb47d,	// (0x00035d3b) graphic_text_digital_pane_t1

0xb48b,	// (0x00035d49) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a278) graphic_text_digital_pane_t

0x7ed0,	// (0x0003278e) navi_icon_pane_srt_ParamLimits

0x7ed0,	// (0x0003278e) navi_icon_pane_srt

0x7df0,	// (0x000326ae) navi_midp_pane_srt

0x7df0,	// (0x000326ae) navi_navi_pane_srt

0x7ed0,	// (0x0003278e) navi_text_pane_srt_ParamLimits

0x7ed0,	// (0x0003278e) navi_text_pane_srt

0xb440,	// (0x00035cfe) navi_navi_icon_text_pane_srt

0xb448,	// (0x00035d06) navi_navi_pane_srt_g1_ParamLimits

0xb448,	// (0x00035d06) navi_navi_pane_srt_g1

0xb45a,	// (0x00035d18) navi_navi_pane_srt_g2_ParamLimits

0xb45a,	// (0x00035d18) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a273) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a273) navi_navi_pane_srt_g

0xb46c,	// (0x00035d2a) navi_navi_tabs_pane_srt

0xb440,	// (0x00035cfe) navi_navi_text_pane_srt

0xb440,	// (0x00035cfe) navi_navi_volume_pane_srt

0xb431,	// (0x00035cef) navi_navi_text_pane_srt_t1

0x6413,	// (0x00030cd1) navi_navi_volume_pane_srt_g1

0x641b,	// (0x00030cd9) volume_small_pane_srt_ParamLimits

0x641b,	// (0x00030cd9) volume_small_pane_srt

0x5836,	// (0x000300f4) volume_small_pane_srt_g1_ParamLimits

0x5836,	// (0x000300f4) volume_small_pane_srt_g1

0x5846,	// (0x00030104) volume_small_pane_srt_g2_ParamLimits

0x5846,	// (0x00030104) volume_small_pane_srt_g2

0x5857,	// (0x00030115) volume_small_pane_srt_g3_ParamLimits

0x5857,	// (0x00030115) volume_small_pane_srt_g3

0x5868,	// (0x00030126) volume_small_pane_srt_g4_ParamLimits

0x5868,	// (0x00030126) volume_small_pane_srt_g4

0x5879,	// (0x00030137) volume_small_pane_srt_g5_ParamLimits

0x5879,	// (0x00030137) volume_small_pane_srt_g5

0x588a,	// (0x00030148) volume_small_pane_srt_g6_ParamLimits

0x588a,	// (0x00030148) volume_small_pane_srt_g6

0x589b,	// (0x00030159) volume_small_pane_srt_g7_ParamLimits

0x589b,	// (0x00030159) volume_small_pane_srt_g7

0x58ac,	// (0x0003016a) volume_small_pane_srt_g8_ParamLimits

0x58ac,	// (0x0003016a) volume_small_pane_srt_g8

0x58bd,	// (0x0003017b) volume_small_pane_srt_g9_ParamLimits

0x58bd,	// (0x0003017b) volume_small_pane_srt_g9

0x58ce,	// (0x0003018c) volume_small_pane_srt_g10_ParamLimits

0x58ce,	// (0x0003018c) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003a01b) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003a01b) volume_small_pane_srt_g

0x82d0,	// (0x00032b8e) query_popup_data_pane_cp2

0xb417,	// (0x00035cd5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb417,	// (0x00035cd5) navi_navi_icon_text_pane_srt_t1

0xa514,	// (0x00034dd2) navi_tabs_2_long_pane_srt

0xa514,	// (0x00034dd2) navi_tabs_2_pane_srt

0xa514,	// (0x00034dd2) navi_tabs_3_long_pane_srt

0xa514,	// (0x00034dd2) navi_tabs_3_pane_srt

0xa514,	// (0x00034dd2) navi_tabs_4_pane_srt

0x63f3,	// (0x00030cb1) tabs_2_active_pane_srt_ParamLimits

0x63f3,	// (0x00030cb1) tabs_2_active_pane_srt

0x6403,	// (0x00030cc1) tabs_2_passive_pane_srt_ParamLimits

0x6403,	// (0x00030cc1) tabs_2_passive_pane_srt

0x971e,	// (0x00033fdc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x971e,	// (0x00033fdc) bg_passive_tab_pane_cp1_srt

0xb3e3,	// (0x00035ca1) bg_passive_tab_pane_g1_cp1_srt

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp1_srt

0xb3ec,	// (0x00035caa) bg_passive_tab_pane_g3_cp1_srt

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp1_srt_ParamLimits

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp1_srt

0xb3f5,	// (0x00035cb3) tabs_2_active_pane_srt_g1

0xb3fd,	// (0x00035cbb) tabs_2_active_pane_srt_t1_ParamLimits

0xb3fd,	// (0x00035cbb) tabs_2_active_pane_srt_t1

0xb3e3,	// (0x00035ca1) bg_active_tab_pane_g1_cp1_srt

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp1_srt

0xb3ec,	// (0x00035caa) bg_active_tab_pane_g3_cp1_srt

0x63c0,	// (0x00030c7e) tabs_3_active_pane_srt_ParamLimits

0x63c0,	// (0x00030c7e) tabs_3_active_pane_srt

0x63d1,	// (0x00030c8f) tabs_3_passive_pane_cp_srt_ParamLimits

0x63d1,	// (0x00030c8f) tabs_3_passive_pane_cp_srt

0x63e2,	// (0x00030ca0) tabs_3_passive_pane_srt_ParamLimits

0x63e2,	// (0x00030ca0) tabs_3_passive_pane_srt

0x971e,	// (0x00033fdc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x971e,	// (0x00033fdc) bg_passive_tab_pane_cp2_srt

0x95ae,	// (0x00033e6c) bg_passive_tab_pane_g1_cp2_srt

0x903c,	// (0x000338fa) bg_passive_tab_pane_g2_cp2_srt

0x95b7,	// (0x00033e75) bg_passive_tab_pane_g3_cp2_srt

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp2_srt_ParamLimits

0x7ed0,	// (0x0003278e) bg_active_tab_pane_cp2_srt

0xb3c9,	// (0x00035c87) tabs_3_active_pane_srt_g1

0xb3d1,	// (0x00035c8f) tabs_3_active_pane_srt_t1_ParamLimits

0xb3d1,	// (0x00035c8f) tabs_3_active_pane_srt_t1

0x95ae,	// (0x00033e6c) bg_active_tab_pane_g1_cp2_srt

0x903c,	// (0x000338fa) bg_active_tab_pane_g2_cp2_srt

0x95b7,	// (0x00033e75) bg_active_tab_pane_g3_cp2_srt

0x6378,	// (0x00030c36) tabs_4_active_pane_srt_ParamLimits

0x6378,	// (0x00030c36) tabs_4_active_pane_srt

0x638a,	// (0x00030c48) tabs_4_passive_pane_cp2_srt_ParamLimits

0x638a,	// (0x00030c48) tabs_4_passive_pane_cp2_srt

0x5a3d,	// (0x000302fb) aid_size_cell_toolbar

0x8946,	// (0x00033204) main_idle_act_pane_ParamLimits

0x5bf4,	// (0x000304b2) popup_large_graphic_colour_window_ParamLimits

0x5f5b,	// (0x00030819) popup_toolbar_window_ParamLimits

0x5f5b,	// (0x00030819) popup_toolbar_window

0xb1dc,	// (0x00035a9a) list_single_graphic_2heading_pane_ParamLimits

0xb1dc,	// (0x00035a9a) list_single_graphic_2heading_pane

0x8b02,	// (0x000333c0) aid_size_cell_apps_grid_lsc_pane

0x8b14,	// (0x000333d2) aid_size_cell_apps_grid_prt_pane

0x971e,	// (0x00033fdc) bg_wml_button_pane_cp1_ParamLimits

0x971e,	// (0x00033fdc) bg_wml_button_pane_cp1

0x9ee6,	// (0x000347a4) form_midp_field_text_pane_t1_ParamLimits

0x9cb6,	// (0x00034574) input_focus_pane_cp050_ParamLimits

0x9f1d,	// (0x000347db) list_midp_form_text_pane_ParamLimits

0x9ec3,	// (0x00034781) input_focus_pane_cp051_ParamLimits

0x9ed7,	// (0x00034795) list_midp_choice_pane_ParamLimits

0x9d6f,	// (0x0003462d) list_single_2graphic_pane_cp3_ParamLimits

0x9d6f,	// (0x0003462d) list_single_2graphic_pane_cp3

0x9d90,	// (0x0003464e) list_single_midp_graphic_pane_ParamLimits

0x9d90,	// (0x0003464e) list_single_midp_graphic_pane

0x47bf,	// (0x0002f07d) list_single_graphic_2heading_pane_g1_ParamLimits

0x47bf,	// (0x0002f07d) list_single_graphic_2heading_pane_g1

0x47cb,	// (0x0002f089) list_single_graphic_2heading_pane_g4_ParamLimits

0x47cb,	// (0x0002f089) list_single_graphic_2heading_pane_g4

0x47d7,	// (0x0002f095) list_single_graphic_2heading_pane_g5_ParamLimits

0x47d7,	// (0x0002f095) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003a06e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003a06e) list_single_graphic_2heading_pane_g

0x47e3,	// (0x0002f0a1) list_single_graphic_2heading_pane_t1_ParamLimits

0x47e3,	// (0x0002f0a1) list_single_graphic_2heading_pane_t1

0x47f7,	// (0x0002f0b5) list_single_graphic_2heading_pane_t2_ParamLimits

0x47f7,	// (0x0002f0b5) list_single_graphic_2heading_pane_t2

0x4811,	// (0x0002f0cf) list_single_graphic_2heading_pane_t3_ParamLimits

0x4811,	// (0x0002f0cf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003a075) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003a075) list_single_graphic_2heading_pane_t

0x9b80,	// (0x0003443e) bg_popup_sub_pane_cp2

0x9baa,	// (0x00034468) grid_toobar_pane

0x6008,	// (0x000308c6) cell_toolbar_pane_ParamLimits

0x6008,	// (0x000308c6) cell_toolbar_pane

0x9be6,	// (0x000344a4) cell_toolbar_pane_g1_ParamLimits

0x9be6,	// (0x000344a4) cell_toolbar_pane_g1

0x9bfa,	// (0x000344b8) cell_toolbar_pane_g2_ParamLimits

0x9bfa,	// (0x000344b8) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003a083) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003a083) cell_toolbar_pane_g

0x9c1c,	// (0x000344da) grid_highlight_pane_cp2_ParamLimits

0x9c1c,	// (0x000344da) grid_highlight_pane_cp2

0x9c36,	// (0x000344f4) toolbar_button_pane

0x9c42,	// (0x00034500) toolbar_button_pane_g1

0x9c4a,	// (0x00034508) toolbar_button_pane_g2

0x9c52,	// (0x00034510) toolbar_button_pane_g3

0x9c5a,	// (0x00034518) toolbar_button_pane_g4

0x9c62,	// (0x00034520) toolbar_button_pane_g5

0x9c6a,	// (0x00034528) toolbar_button_pane_g6

0x9c72,	// (0x00034530) toolbar_button_pane_g7

0x9c7a,	// (0x00034538) toolbar_button_pane_g8

0x9c82,	// (0x00034540) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003a088) toolbar_button_pane_g

0x6040,	// (0x000308fe) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6040,	// (0x000308fe) list_single_2graphic_pane_g1_cp3

0x604c,	// (0x0003090a) list_single_2graphic_pane_g2_cp3_ParamLimits

0x604c,	// (0x0003090a) list_single_2graphic_pane_g2_cp3

0x605d,	// (0x0003091b) list_single_2graphic_pane_g3_cp3

0x6065,	// (0x00030923) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6065,	// (0x00030923) list_single_2graphic_pane_g4_cp3

0x6071,	// (0x0003092f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6071,	// (0x0003092f) list_single_2graphic_pane_t1_cp3

0x608d,	// (0x0003094b) list_single_midp_graphic_pane_g2_ParamLimits

0x608d,	// (0x0003094b) list_single_midp_graphic_pane_g2

0x5a45,	// (0x00030303) aid_zoom_text_primary

0x47a3,	// (0x0002f061) aid_zoom_text_secondary

0x9668,	// (0x00033f26) status_small_pane_g7_ParamLimits

0x9668,	// (0x00033f26) status_small_pane_g7

0x968b,	// (0x00033f49) status_small_pane_t1_ParamLimits

0x7e07,	// (0x000326c5) title_pane_g2

0x0003,

0xf54e,	// (0x00039e0c) title_pane_g

0x8374,	// (0x00032c32) aid_size_cell_colour_1_pane_ParamLimits

0x8374,	// (0x00032c32) aid_size_cell_colour_1_pane

0x8388,	// (0x00032c46) aid_size_cell_colour_2_pane_ParamLimits

0x8388,	// (0x00032c46) aid_size_cell_colour_2_pane

0x839c,	// (0x00032c5a) aid_size_cell_colour_3_pane_ParamLimits

0x839c,	// (0x00032c5a) aid_size_cell_colour_3_pane

0x83b0,	// (0x00032c6e) aid_size_cell_colour_4_pane_ParamLimits

0x83b0,	// (0x00032c6e) aid_size_cell_colour_4_pane

0x5409,	// (0x0002fcc7) title_pane_stacon_g1_ParamLimits

0x5409,	// (0x0002fcc7) title_pane_stacon_g1

0xa2fb,	// (0x00034bb9) popup_note_wait_window_g3_ParamLimits

0xa2fb,	// (0x00034bb9) popup_note_wait_window_g3

0xa371,	// (0x00034c2f) popup_note_wait_window_t5_ParamLimits

0xa371,	// (0x00034c2f) popup_note_wait_window_t5

0x7df0,	// (0x000326ae) main_feb_china_hwr_fs_writing_pane

0x5ad7,	// (0x00030395) popup_feb_china_hwr_fs_window_ParamLimits

0x5ad7,	// (0x00030395) popup_feb_china_hwr_fs_window

0x60af,	// (0x0003096d) aid_size_cell_hwr_fs_ParamLimits

0x60af,	// (0x0003096d) aid_size_cell_hwr_fs

0x9cb6,	// (0x00034574) bg_popup_sub_pane_cp3_ParamLimits

0x9cb6,	// (0x00034574) bg_popup_sub_pane_cp3

0x60c4,	// (0x00030982) grid_hwr_fs_pane_ParamLimits

0x60c4,	// (0x00030982) grid_hwr_fs_pane

0x60dc,	// (0x0003099a) linegrid_hwr_fs_pane_ParamLimits

0x60dc,	// (0x0003099a) linegrid_hwr_fs_pane

0x60ec,	// (0x000309aa) cell_hwr_fs_pane_ParamLimits

0x60ec,	// (0x000309aa) cell_hwr_fs_pane

0x9cc2,	// (0x00034580) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cc2,	// (0x00034580) linegrid_hwr_fs_pane_g1

0x9cce,	// (0x0003458c) linegrid_hwr_fs_pane_g2_ParamLimits

0x9cce,	// (0x0003458c) linegrid_hwr_fs_pane_g2

0x9ce0,	// (0x0003459e) linegrid_hwr_fs_pane_g3_ParamLimits

0x9ce0,	// (0x0003459e) linegrid_hwr_fs_pane_g3

0x610e,	// (0x000309cc) linegrid_hwr_fs_pane_g4_ParamLimits

0x610e,	// (0x000309cc) linegrid_hwr_fs_pane_g4

0x6128,	// (0x000309e6) linegrid_hwr_fs_pane_g5_ParamLimits

0x6128,	// (0x000309e6) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003a0b3) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003a0b3) linegrid_hwr_fs_pane_g

0x9cec,	// (0x000345aa) cell_hwr_fs_pane_g1_ParamLimits

0x9cec,	// (0x000345aa) cell_hwr_fs_pane_g1

0x9ab7,	// (0x00034375) cell_hwr_fs_pane_g2_ParamLimits

0x9ab7,	// (0x00034375) cell_hwr_fs_pane_g2

0x9d02,	// (0x000345c0) cell_hwr_fs_pane_g3_ParamLimits

0x9d02,	// (0x000345c0) cell_hwr_fs_pane_g3

0x9d0f,	// (0x000345cd) cell_hwr_fs_pane_g4_ParamLimits

0x9d0f,	// (0x000345cd) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003a0be) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003a0be) cell_hwr_fs_pane_g

0x613e,	// (0x000309fc) cell_hwr_fs_pane_t1

0x7df0,	// (0x000326ae) grid_highlight_pane_cp6

0x7df0,	// (0x000326ae) main_idle_act2_pane

0x88b9,	// (0x00033177) aid_inside_area_popup_secondary

0xa9a8,	// (0x00035266) aid_inside_area_window_primary_ParamLimits

0xa9a8,	// (0x00035266) aid_inside_area_window_primary

0xb530,	// (0x00035dee) ai2_news_ticker_pane

0xb538,	// (0x00035df6) aid_size_cell_ai1_link_ParamLimits

0xb538,	// (0x00035df6) aid_size_cell_ai1_link

0xb552,	// (0x00035e10) popup_ai2_data_window_ParamLimits

0xb552,	// (0x00035e10) popup_ai2_data_window

0xb568,	// (0x00035e26) popup_ai2_link_window_ParamLimits

0xb568,	// (0x00035e26) popup_ai2_link_window

0x9cb6,	// (0x00034574) bg_popup_sub_pane_cp4_ParamLimits

0x9cb6,	// (0x00034574) bg_popup_sub_pane_cp4

0xb57c,	// (0x00035e3a) grid_ai2_link_pane_ParamLimits

0xb57c,	// (0x00035e3a) grid_ai2_link_pane

0xb593,	// (0x00035e51) popup_ai2_link_window_g1_ParamLimits

0xb593,	// (0x00035e51) popup_ai2_link_window_g1

0xb59f,	// (0x00035e5d) popup_ai2_link_window_g2_ParamLimits

0xb59f,	// (0x00035e5d) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a291) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a291) popup_ai2_link_window_g

0xb5ae,	// (0x00035e6c) ai2_mp_button_pane

0xb5b6,	// (0x00035e74) ai2_mp_volume_pane

0x9ec3,	// (0x00034781) bg_popup_sub_pane_cp5_ParamLimits

0x9ec3,	// (0x00034781) bg_popup_sub_pane_cp5

0xb5be,	// (0x00035e7c) heading_ai2_gene_pane_ParamLimits

0xb5be,	// (0x00035e7c) heading_ai2_gene_pane

0xb5ca,	// (0x00035e88) list_ai2_gene_pane_ParamLimits

0xb5ca,	// (0x00035e88) list_ai2_gene_pane

0xb612,	// (0x00035ed0) cell_ai2_link_pane_ParamLimits

0xb612,	// (0x00035ed0) cell_ai2_link_pane

0xb628,	// (0x00035ee6) cell_ai2_link_pane_g1

0x7df0,	// (0x000326ae) grid_highlight_pane_cp7

0x6430,	// (0x00030cee) ai2_mp_volume_pane_g1

0xb6f8,	// (0x00035fb6) ai2_mp_volume_pane_g2

0xb66d,	// (0x00035f2b) list_ai2_gene_pane_t1

0xb700,	// (0x00035fbe) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a2aa) ai2_mp_volume_pane_g

0x6438,	// (0x00030cf6) volume_small_pane_cp3

0xb708,	// (0x00035fc6) aid_size_cell_ai2_button

0xb710,	// (0x00035fce) grid_ai2_button_pane

0xb719,	// (0x00035fd7) cell_ai2_button_pane_ParamLimits

0xb719,	// (0x00035fd7) cell_ai2_button_pane

0x7de6,	// (0x000326a4) cell_ai2_button_pane_g1

0x7df0,	// (0x000326ae) grid_highlight_pane_cp8

0xb6b8,	// (0x00035f76) ai2_gene_pane_t1_ParamLimits

0xb6b8,	// (0x00035f76) ai2_gene_pane_t1

0x5a33,	// (0x000302f1) aid_height_parent_landscape

0xb013,	// (0x000358d1) aid_height_set_list

0xb024,	// (0x000358e2) aid_size_parent

0xb353,	// (0x00035c11) aid_size_cell_graphic_pane_ParamLimits

0xb5da,	// (0x00035e98) popup_ai2_data_window_g1_ParamLimits

0xb5da,	// (0x00035e98) popup_ai2_data_window_g1

0xb5e6,	// (0x00035ea4) ai2_news_ticker_pane_g1

0xb5ee,	// (0x00035eac) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a296) ai2_news_ticker_pane_g

0xb5f6,	// (0x00035eb4) ai2_news_ticker_pane_t1

0xb604,	// (0x00035ec2) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a29b) ai2_news_ticker_pane_t

0xb631,	// (0x00035eef) heading_ai2_gene_pane_g1

0xb639,	// (0x00035ef7) heading_ai2_gene_pane_t1_ParamLimits

0xb639,	// (0x00035ef7) heading_ai2_gene_pane_t1

0xb64e,	// (0x00035f0c) list_highlight_pane_cp6

0xb656,	// (0x00035f14) ai2_gene_pane_ParamLimits

0xb656,	// (0x00035f14) ai2_gene_pane

0xb67b,	// (0x00035f39) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a2a0) list_ai2_gene_pane_t

0xb689,	// (0x00035f47) list_highlight_pane_cp8_ParamLimits

0xb689,	// (0x00035f47) list_highlight_pane_cp8

0xb69a,	// (0x00035f58) ai2_gene_pane_g1_ParamLimits

0xb69a,	// (0x00035f58) ai2_gene_pane_g1

0xb6ac,	// (0x00035f6a) ai2_gene_pane_g2_ParamLimits

0xb6ac,	// (0x00035f6a) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a2a5) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a2a5) ai2_gene_pane_g

0x86fb,	// (0x00032fb9) scroll_pane_cp12

0x59f0,	// (0x000302ae) control_pane_t3_ParamLimits

0x59f0,	// (0x000302ae) control_pane_t3

0x967c,	// (0x00033f3a) status_small_pane_g8_ParamLimits

0x967c,	// (0x00033f3a) status_small_pane_g8

0x5bbd,	// (0x0003047b) popup_find_window_ParamLimits

0x5dd2,	// (0x00030690) popup_note_image_window_ParamLimits

0x7458,	// (0x00031d16) list_double2_graphic_pane_vc_g1_ParamLimits

0x7458,	// (0x00031d16) list_double2_graphic_pane_vc_g1

0x7464,	// (0x00031d22) list_double2_graphic_pane_vc_g2_ParamLimits

0x7464,	// (0x00031d22) list_double2_graphic_pane_vc_g2

0x7470,	// (0x00031d2e) list_double2_graphic_pane_vc_g3_ParamLimits

0x7470,	// (0x00031d2e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a07c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a07c) list_double2_graphic_pane_vc_g

0x747c,	// (0x00031d3a) list_double2_graphic_pane_vc_t1_ParamLimits

0x747c,	// (0x00031d3a) list_double2_graphic_pane_vc_t1

0x7464,	// (0x00031d22) list_single_heading_pane_vc_g1_ParamLimits

0x7464,	// (0x00031d22) list_single_heading_pane_vc_g1

0x7470,	// (0x00031d2e) list_single_heading_pane_vc_g2_ParamLimits

0x7470,	// (0x00031d2e) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a09d) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a09d) list_single_heading_pane_vc_g

0x7492,	// (0x00031d50) list_single_heading_pane_vc_t1_ParamLimits

0x7492,	// (0x00031d50) list_single_heading_pane_vc_t1

0x74a8,	// (0x00031d66) list_single_heading_pane_vc_t2_ParamLimits

0x74a8,	// (0x00031d66) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003a0a2) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003a0a2) list_single_heading_pane_vc_t

0x74ba,	// (0x00031d78) list_setting_number_pane_vc_g1_ParamLimits

0x74ba,	// (0x00031d78) list_setting_number_pane_vc_g1

0x74c6,	// (0x00031d84) list_setting_number_pane_vc_g2_ParamLimits

0x74c6,	// (0x00031d84) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a0a7) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a0a7) list_setting_number_pane_vc_g

0x74d2,	// (0x00031d90) list_setting_number_pane_vc_t1_ParamLimits

0x74d2,	// (0x00031d90) list_setting_number_pane_vc_t1

0x74e6,	// (0x00031da4) list_setting_number_pane_vc_t2_ParamLimits

0x74e6,	// (0x00031da4) list_setting_number_pane_vc_t2

0x7502,	// (0x00031dc0) list_setting_number_pane_vc_t3_ParamLimits

0x7502,	// (0x00031dc0) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003a0ac) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003a0ac) list_setting_number_pane_vc_t

0x7520,	// (0x00031dde) set_value_pane_vc_ParamLimits

0x7520,	// (0x00031dde) set_value_pane_vc

0xb1dc,	// (0x00035a9a) list_double2_graphic_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double2_graphic_pane_vc

0xb1dc,	// (0x00035a9a) list_double2_large_graphic_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double2_large_graphic_pane_vc

0xb1dc,	// (0x00035a9a) list_double2_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double2_pane_vc

0xb1dc,	// (0x00035a9a) list_double_graphic_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double_graphic_heading_pane_vc

0xb1dc,	// (0x00035a9a) list_double_graphic_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double_graphic_pane_vc

0xb1dc,	// (0x00035a9a) list_double_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double_heading_pane_vc

0xb1ee,	// (0x00035aac) list_double_large_graphic_pane_vc_ParamLimits

0xb1ee,	// (0x00035aac) list_double_large_graphic_pane_vc

0xb1dc,	// (0x00035a9a) list_double_number_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double_number_pane_vc

0xb1dc,	// (0x00035a9a) list_double_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double_pane_vc

0xb1dc,	// (0x00035a9a) list_double_time_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_double_time_pane_vc

0xb1dc,	// (0x00035a9a) list_setting_number_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_setting_number_pane_vc

0xb1dc,	// (0x00035a9a) list_setting_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_setting_pane_vc

0xb1dc,	// (0x00035a9a) list_single_graphic_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_single_graphic_heading_pane_vc

0xb1dc,	// (0x00035a9a) list_single_heading_pane_vc_ParamLimits

0xb1dc,	// (0x00035a9a) list_single_heading_pane_vc

0x75f9,	// (0x00031eb7) list_single_number_heading_pane_vc_ParamLimits

0x75f9,	// (0x00031eb7) list_single_number_heading_pane_vc

0x7458,	// (0x00031d16) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7458,	// (0x00031d16) list_double_graphic_heading_pane_vc_g1

0x7464,	// (0x00031d22) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7464,	// (0x00031d22) list_double_graphic_heading_pane_vc_g2

0x7470,	// (0x00031d2e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7470,	// (0x00031d2e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a07c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a07c) list_double_graphic_heading_pane_vc_g

0x767a,	// (0x00031f38) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x767a,	// (0x00031f38) list_double_graphic_heading_pane_vc_t1

0x7696,	// (0x00031f54) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7696,	// (0x00031f54) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003a2b1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0003a2b1) list_double_graphic_heading_pane_vc_t

0x74ba,	// (0x00031d78) list_setting_pane_vc_g1_ParamLimits

0x74ba,	// (0x00031d78) list_setting_pane_vc_g1

0x74c6,	// (0x00031d84) list_setting_pane_vc_g2_ParamLimits

0x74c6,	// (0x00031d84) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a0a7) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a0a7) list_setting_pane_vc_g

0x76b4,	// (0x00031f72) list_setting_pane_vc_t1_ParamLimits

0x76b4,	// (0x00031f72) list_setting_pane_vc_t1

0x76d0,	// (0x00031f8e) list_setting_pane_vc_t2_ParamLimits

0x76d0,	// (0x00031f8e) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0003a2df) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0003a2df) list_setting_pane_vc_t

0x7520,	// (0x00031dde) set_value_pane_cp_vc_ParamLimits

0x7520,	// (0x00031dde) set_value_pane_cp_vc

0x7464,	// (0x00031d22) list_single_number_heading_pane_vc_g1_ParamLimits

0x7464,	// (0x00031d22) list_single_number_heading_pane_vc_g1

0x7470,	// (0x00031d2e) list_single_number_heading_pane_vc_g2_ParamLimits

0x7470,	// (0x00031d2e) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a09d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a09d) list_single_number_heading_pane_vc_g

0x76ec,	// (0x00031faa) list_single_number_heading_pane_vc_t1_ParamLimits

0x76ec,	// (0x00031faa) list_single_number_heading_pane_vc_t1

0x7702,	// (0x00031fc0) list_single_number_heading_pane_vc_t2_ParamLimits

0x7702,	// (0x00031fc0) list_single_number_heading_pane_vc_t2

0x7714,	// (0x00031fd2) list_single_number_heading_pane_vc_t3_ParamLimits

0x7714,	// (0x00031fd2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0003a2e4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0003a2e4) list_single_number_heading_pane_vc_t

0x7458,	// (0x00031d16) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7458,	// (0x00031d16) list_single_graphic_heading_pane_vc_g1

0x7464,	// (0x00031d22) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7464,	// (0x00031d22) list_single_graphic_heading_pane_vc_g4

0x7470,	// (0x00031d2e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7470,	// (0x00031d2e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003a07c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a07c) list_single_graphic_heading_pane_vc_g

0x7726,	// (0x00031fe4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x7726,	// (0x00031fe4) list_single_graphic_heading_pane_vc_t1

0x773c,	// (0x00031ffa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x773c,	// (0x00031ffa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0003a2eb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0003a2eb) list_single_graphic_heading_pane_vc_t

0x7464,	// (0x00031d22) list_double2_pane_vc_g1_ParamLimits

0x7464,	// (0x00031d22) list_double2_pane_vc_g1

0x7470,	// (0x00031d2e) list_double2_pane_vc_g2_ParamLimits

0x7470,	// (0x00031d2e) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a09d) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a09d) list_double2_pane_vc_g

0x774e,	// (0x0003200c) list_double2_pane_vc_t1_ParamLimits

0x774e,	// (0x0003200c) list_double2_pane_vc_t1

0x7764,	// (0x00032022) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7764,	// (0x00032022) list_double2_large_graphic_pane_vc_g1

0x7464,	// (0x00031d22) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7464,	// (0x00031d22) list_double2_large_graphic_pane_vc_g2

0x7470,	// (0x00031d2e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7470,	// (0x00031d2e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa32,	// (0x0003a2f0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0003a2f0) list_double2_large_graphic_pane_vc_g

0x7770,	// (0x0003202e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7770,	// (0x0003202e) list_double2_large_graphic_pane_vc_t1

0x7786,	// (0x00032044) list_double_time_pane_vc_g1_ParamLimits

0x7786,	// (0x00032044) list_double_time_pane_vc_g1

0x7792,	// (0x00032050) list_double_time_pane_vc_g2_ParamLimits

0x7792,	// (0x00032050) list_double_time_pane_vc_g2

0x0001,

0xfa39,	// (0x0003a2f7) list_double_time_pane_vc_g_ParamLimits

0xfa39,	// (0x0003a2f7) list_double_time_pane_vc_g

0x779e,	// (0x0003205c) list_double_time_pane_vc_t1_ParamLimits

0x779e,	// (0x0003205c) list_double_time_pane_vc_t1

0x77c2,	// (0x00032080) list_double_time_pane_vc_t2_ParamLimits

0x77c2,	// (0x00032080) list_double_time_pane_vc_t2

0x7811,	// (0x000320cf) list_double_time_pane_vc_t3_ParamLimits

0x7811,	// (0x000320cf) list_double_time_pane_vc_t3

0x7823,	// (0x000320e1) list_double_time_pane_vc_t4_ParamLimits

0x7823,	// (0x000320e1) list_double_time_pane_vc_t4

0x0003,

0xfa3e,	// (0x0003a2fc) list_double_time_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a2fc) list_double_time_pane_vc_t

0x7464,	// (0x00031d22) list_double_pane_vc_g1_ParamLimits

0x7464,	// (0x00031d22) list_double_pane_vc_g1

0x7470,	// (0x00031d2e) list_double_pane_vc_g2_ParamLimits

0x7470,	// (0x00031d2e) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a09d) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a09d) list_double_pane_vc_g

0x7837,	// (0x000320f5) list_double_pane_vc_t1_ParamLimits

0x7837,	// (0x000320f5) list_double_pane_vc_t1

0x784b,	// (0x00032109) list_double_pane_vc_t2_ParamLimits

0x784b,	// (0x00032109) list_double_pane_vc_t2

0x0001,

0xfa47,	// (0x0003a305) list_double_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a305) list_double_pane_vc_t

0x7464,	// (0x00031d22) list_double_number_pane_vc_g1_ParamLimits

0x7464,	// (0x00031d22) list_double_number_pane_vc_g1

0x7470,	// (0x00031d2e) list_double_number_pane_vc_g2_ParamLimits

0x7470,	// (0x00031d2e) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a09d) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a09d) list_double_number_pane_vc_g

0x7863,	// (0x00032121) list_double_number_pane_vc_t1_ParamLimits

0x7863,	// (0x00032121) list_double_number_pane_vc_t1

0x7875,	// (0x00032133) list_double_number_pane_vc_t2_ParamLimits

0x7875,	// (0x00032133) list_double_number_pane_vc_t2

0x7889,	// (0x00032147) list_double_number_pane_vc_t3_ParamLimits

0x7889,	// (0x00032147) list_double_number_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003a30a) list_double_number_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a30a) list_double_number_pane_vc_t

0x78a1,	// (0x0003215f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x78a1,	// (0x0003215f) list_double_large_graphic_pane_vc_g1

0x78c3,	// (0x00032181) list_double_large_graphic_pane_vc_g2_ParamLimits

0x78c3,	// (0x00032181) list_double_large_graphic_pane_vc_g2

0x78d7,	// (0x00032195) list_double_large_graphic_pane_vc_g3_ParamLimits

0x78d7,	// (0x00032195) list_double_large_graphic_pane_vc_g3

0x78e6,	// (0x000321a4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x78e6,	// (0x000321a4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa53,	// (0x0003a311) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0003a311) list_double_large_graphic_pane_vc_g

0x78f2,	// (0x000321b0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x78f2,	// (0x000321b0) list_double_large_graphic_pane_vc_t1

0x790e,	// (0x000321cc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x790e,	// (0x000321cc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003a31a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003a31a) list_double_large_graphic_pane_vc_t

0x7464,	// (0x00031d22) list_double_heading_pane_vc_g1_ParamLimits

0x7464,	// (0x00031d22) list_double_heading_pane_vc_g1

0x7470,	// (0x00031d2e) list_double_heading_pane_vc_g2_ParamLimits

0x7470,	// (0x00031d2e) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a09d) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a09d) list_double_heading_pane_vc_g

0x7930,	// (0x000321ee) list_double_heading_pane_vc_t1_ParamLimits

0x7930,	// (0x000321ee) list_double_heading_pane_vc_t1

0x7944,	// (0x00032202) list_double_heading_pane_vc_t2_ParamLimits

0x7944,	// (0x00032202) list_double_heading_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a31f) list_double_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a31f) list_double_heading_pane_vc_t

0x795c,	// (0x0003221a) list_double_graphic_pane_vc_g1_ParamLimits

0x795c,	// (0x0003221a) list_double_graphic_pane_vc_g1

0x7968,	// (0x00032226) list_double_graphic_pane_vc_g2_ParamLimits

0x7968,	// (0x00032226) list_double_graphic_pane_vc_g2

0x7464,	// (0x00031d22) list_double_graphic_pane_vc_g3_ParamLimits

0x7464,	// (0x00031d22) list_double_graphic_pane_vc_g3

0x0003,

0xfa66,	// (0x0003a324) list_double_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0003a324) list_double_graphic_pane_vc_g

0x7985,	// (0x00032243) list_double_graphic_pane_vc_t1_ParamLimits

0x7985,	// (0x00032243) list_double_graphic_pane_vc_t1

0x79af,	// (0x0003226d) list_double_graphic_pane_vc_t2_ParamLimits

0x79af,	// (0x0003226d) list_double_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003a32d) list_double_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003a32d) list_double_graphic_pane_vc_t

0x4841,	// (0x0002f0ff) aid_size_cell_fastswap

0x4849,	// (0x0002f107) aid_size_cell_touch_ParamLimits

0x4849,	// (0x0002f107) aid_size_cell_touch

0x4aae,	// (0x0002f36c) popup_fast_swap_wide_window_ParamLimits

0x4aae,	// (0x0002f36c) popup_fast_swap_wide_window

0x4bc2,	// (0x0002f480) touch_pane_ParamLimits

0x4bc2,	// (0x0002f480) touch_pane

0x8751,	// (0x0003300f) button_value_adjust_pane_cp2

0x516b,	// (0x0002fa29) button_value_adjust_pane_cp4

0x518b,	// (0x0002fa49) form_field_data_pane_cp2

0x51aa,	// (0x0002fa68) form_field_data_wide_pane_cp2

0x8bd1,	// (0x0003348f) bg_scroll_pane_ParamLimits

0x556b,	// (0x0002fe29) scroll_handle_pane_ParamLimits

0x557f,	// (0x0002fe3d) scroll_sc2_down_pane_ParamLimits

0x557f,	// (0x0002fe3d) scroll_sc2_down_pane

0x8c02,	// (0x000334c0) scroll_sc2_up_pane_ParamLimits

0x8c02,	// (0x000334c0) scroll_sc2_up_pane

0xbdd8,	// (0x00036696) grid_wheel_folder_pane_g1_ParamLimits

0xbdd8,	// (0x00036696) grid_wheel_folder_pane_g1

0x57ce,	// (0x0003008c) clock_nsta_pane_cp2_ParamLimits

0x57ce,	// (0x0003008c) clock_nsta_pane_cp2

0x9402,	// (0x00033cc0) listscroll_midp_pane_ParamLimits

0x940e,	// (0x00033ccc) midp_canvas_pane

0x96f6,	// (0x00033fb4) nsta_clock_indic_pane

0x972a,	// (0x00033fe8) listscroll_form_pane_vc

0x9732,	// (0x00033ff0) listscroll_set_pane_vc_ParamLimits

0x9732,	// (0x00033ff0) listscroll_set_pane_vc

0x982b,	// (0x000340e9) clock_nsta_pane

0x98a0,	// (0x0003415e) indicator_nsta_pane

0x9b80,	// (0x0003443e) bg_popup_sub_pane_cp2_ParamLimits

0x9b94,	// (0x00034452) find_pane_cp2_ParamLimits

0x9b94,	// (0x00034452) find_pane_cp2

0x9baa,	// (0x00034468) grid_toobar_pane_ParamLimits

0x9c8a,	// (0x00034548) list_form_gen_pane_vc_ParamLimits

0x9c8a,	// (0x00034548) list_form_gen_pane_vc

0x9ca0,	// (0x0003455e) scroll_pane_cp8_vc_ParamLimits

0x9ca0,	// (0x0003455e) scroll_pane_cp8_vc

0x9d1c,	// (0x000345da) data_form_wide_pane_vc_ParamLimits

0x9d1c,	// (0x000345da) data_form_wide_pane_vc

0x9d28,	// (0x000345e6) form_field_data_wide_pane_vc_g1

0x9d30,	// (0x000345ee) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d30,	// (0x000345ee) form_field_data_wide_pane_vc_t1

0x8765,	// (0x00033023) input_focus_pane_cp6_vc_ParamLimits

0x8765,	// (0x00033023) input_focus_pane_cp6_vc

0xa062,	// (0x00034920) list_midp_pane_ParamLimits

0xa06e,	// (0x0003492c) scroll_pane_cp16_ParamLimits

0xa06e,	// (0x0003492c) scroll_pane_cp16

0xa0d0,	// (0x0003498e) button_value_adjust_pane_ParamLimits

0xa0d0,	// (0x0003498e) button_value_adjust_pane

0xb036,	// (0x000358f4) button_value_adjust_pane_cp6_ParamLimits

0xb036,	// (0x000358f4) button_value_adjust_pane_cp6

0xb160,	// (0x00035a1e) settings_code_pane_cp_ParamLimits

0xb160,	// (0x00035a1e) settings_code_pane_cp

0x7de6,	// (0x000326a4) cell_touch_pane_g1

0x7de6,	// (0x000326a4) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00039fc1) cell_touch_pane_g

0xb72b,	// (0x00035fe9) cell_touch_pane_cp_ParamLimits

0xb72b,	// (0x00035fe9) cell_touch_pane_cp

0xb73b,	// (0x00035ff9) cell_touch_pane_ParamLimits

0xb73b,	// (0x00035ff9) cell_touch_pane

0x7de6,	// (0x000326a4) scroll_sc2_down_pane_g1

0x7de6,	// (0x000326a4) scroll_sc2_up_pane_g1

0x7df0,	// (0x000326ae) bg_set_opt_pane_cp4_vc

0xb74d,	// (0x0003600b) list_set_graphic_pane_vc_g1_ParamLimits

0xb74d,	// (0x0003600b) list_set_graphic_pane_vc_g1

0xb759,	// (0x00036017) list_set_graphic_pane_vc_g2_ParamLimits

0xb759,	// (0x00036017) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0003a2b6) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0003a2b6) list_set_graphic_pane_vc_g

0xb765,	// (0x00036023) text_primary_small_cp13_vc_ParamLimits

0xb765,	// (0x00036023) text_primary_small_cp13_vc

0xb77d,	// (0x0003603b) list_set_graphic_pane_vc_ParamLimits

0xb77d,	// (0x0003603b) list_set_graphic_pane_vc

0x7df0,	// (0x000326ae) input_focus_pane_cp2_vc

0x7de6,	// (0x000326a4) setting_code_pane_vc_g1

0x7f1b,	// (0x000327d9) setting_code_pane_vc_t1

0xb78f,	// (0x0003604d) set_text_pane_vc_t1_ParamLimits

0xb78f,	// (0x0003604d) set_text_pane_vc_t1

0x7df0,	// (0x000326ae) input_focus_pane_cp1_vc

0xb7ab,	// (0x00036069) list_set_text_pane_vc

0x7de6,	// (0x000326a4) setting_text_pane_vc_g1

0x7df0,	// (0x000326ae) bg_set_opt_pane_cp2_vc

0x7f12,	// (0x000327d0) setting_slider_graphic_pane_vc_g1

0xb7b5,	// (0x00036073) setting_slider_graphic_pane_vc_t1

0xb7c5,	// (0x00036083) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003a2bb) setting_slider_graphic_pane_vc_t

0xb7d5,	// (0x00036093) slider_set_pane_cp_vc

0xb7dd,	// (0x0003609b) slider_set_pane_vc_g1

0xb7e6,	// (0x000360a4) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0003a2c0) slider_set_pane_vc_g

0x87bd,	// (0x0003307b) set_opt_bg_pane_g1_copy1

0x87c5,	// (0x00033083) set_opt_bg_pane_g2_copy1

0xb812,	// (0x000360d0) set_opt_bg_pane_g3_copy1

0x87d5,	// (0x00033093) set_opt_bg_pane_g4_copy1

0x87dd,	// (0x0003309b) set_opt_bg_pane_g5_copy1

0x87e5,	// (0x000330a3) set_opt_bg_pane_g6_copy1

0xb81c,	// (0x000360da) set_opt_bg_pane_g7_copy1

0xb824,	// (0x000360e2) set_opt_bg_pane_g8_copy1

0xb82e,	// (0x000360ec) set_opt_bg_pane_g9_copy1

0x7df0,	// (0x000326ae) bg_set_opt_pane_cp_vc

0xb838,	// (0x000360f6) setting_slider_pane_vc_t1

0xb847,	// (0x00036105) setting_slider_pane_vc_t2

0xb857,	// (0x00036115) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003a2cf) setting_slider_pane_vc_t

0xb867,	// (0x00036125) slider_set_pane_vc

0x614c,	// (0x00030a0a) volume_set_pane_vc_g1

0x6155,	// (0x00030a13) volume_set_pane_vc_g2

0x615e,	// (0x00030a1c) volume_set_pane_vc_g3

0x6167,	// (0x00030a25) volume_set_pane_vc_g4

0x6170,	// (0x00030a2e) volume_set_pane_vc_g5

0x6179,	// (0x00030a37) volume_set_pane_vc_g6

0x6182,	// (0x00030a40) volume_set_pane_vc_g7

0x618b,	// (0x00030a49) volume_set_pane_vc_g8

0x6194,	// (0x00030a52) volume_set_pane_vc_g9

0x619d,	// (0x00030a5b) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0003a174) volume_set_pane_vc_g

0xb86f,	// (0x0003612d) volume_set_pane_vc

0xb877,	// (0x00036135) button_value_adjust_pane_cp1_vc

0xb881,	// (0x0003613f) list_highlight_pane_cp2_vc

0xb88a,	// (0x00036148) list_set_pane_vc_ParamLimits

0xb88a,	// (0x00036148) list_set_pane_vc

0xb8e8,	// (0x000361a6) main_pane_set_vc_t1_ParamLimits

0xb8e8,	// (0x000361a6) main_pane_set_vc_t1

0xb8fd,	// (0x000361bb) main_pane_set_vc_t2_ParamLimits

0xb8fd,	// (0x000361bb) main_pane_set_vc_t2

0xb90f,	// (0x000361cd) main_pane_set_vc_t3_ParamLimits

0xb90f,	// (0x000361cd) main_pane_set_vc_t3

0xb923,	// (0x000361e1) main_pane_set_vc_t4_ParamLimits

0xb923,	// (0x000361e1) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0003a2d6) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0003a2d6) main_pane_set_vc_t

0xb937,	// (0x000361f5) setting_code_pane_vc_ParamLimits

0xb937,	// (0x000361f5) setting_code_pane_vc

0xb948,	// (0x00036206) setting_slider_graphic_pane_vc

0xb948,	// (0x00036206) setting_slider_pane_vc

0xb948,	// (0x00036206) setting_text_pane_vc

0xb948,	// (0x00036206) setting_volume_pane_vc

0xb952,	// (0x00036210) scroll_pane_cp121_vc

0x873f,	// (0x00032ffd) set_content_pane_vc

0xb95a,	// (0x00036218) button_value_adjust_pane_g1

0xb963,	// (0x00036221) button_value_adjust_pane_g2

0x0001,

0xfa74,	// (0x0003a332) button_value_adjust_pane_g

0xb96c,	// (0x0003622a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb96c,	// (0x0003622a) form_field_slider_wide_pane_vc_t1

0xb980,	// (0x0003623e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb980,	// (0x0003623e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa79,	// (0x0003a337) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003a337) form_field_slider_wide_pane_vc_t

0x814b,	// (0x00032a09) input_focus_pane_cp10_vc_ParamLimits

0x814b,	// (0x00032a09) input_focus_pane_cp10_vc

0xb9ae,	// (0x0003626c) slider_cont_pane_cp1_vc_ParamLimits

0xb9ae,	// (0x0003626c) slider_cont_pane_cp1_vc

0xb9c0,	// (0x0003627e) slider_form_pane_g1_cp2

0xb7e6,	// (0x000360a4) slider_form_pane_g2_cp2

0xb9ed,	// (0x000362ab) form_field_slider_pane_vc_t3

0xb9fb,	// (0x000362b9) form_field_slider_pane_vc_t4

0xba09,	// (0x000362c7) slider_form_pane_vc_ParamLimits

0xba09,	// (0x000362c7) slider_form_pane_vc

0xba16,	// (0x000362d4) form_field_slider_pane_vc_t1_ParamLimits

0xba16,	// (0x000362d4) form_field_slider_pane_vc_t1

0xb980,	// (0x0003623e) form_field_slider_pane_vc_t2_ParamLimits

0xb980,	// (0x0003623e) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a349) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a349) form_field_slider_pane_vc_t

0x814b,	// (0x00032a09) input_focus_pane_cp9_vc_ParamLimits

0x814b,	// (0x00032a09) input_focus_pane_cp9_vc

0xba32,	// (0x000362f0) slider_cont_pane_vc_ParamLimits

0xba32,	// (0x000362f0) slider_cont_pane_vc

0xba46,	// (0x00036304) list_form_graphic_pane_cp_vc_ParamLimits

0xba46,	// (0x00036304) list_form_graphic_pane_cp_vc

0x9d28,	// (0x000345e6) form_field_popup_wide_pane_vc_g1

0xba5b,	// (0x00036319) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba5b,	// (0x00036319) form_field_popup_wide_pane_vc_t1

0x8765,	// (0x00033023) input_focus_pane_cp8_vc_ParamLimits

0x8765,	// (0x00033023) input_focus_pane_cp8_vc

0xbaa0,	// (0x0003635e) list_form_wide_pane_vc_ParamLimits

0xbaa0,	// (0x0003635e) list_form_wide_pane_vc

0xbaac,	// (0x0003636a) list_form_graphic_pane_vc_g1

0xbab4,	// (0x00036372) list_form_graphic_pane_vc_t1_ParamLimits

0xbab4,	// (0x00036372) list_form_graphic_pane_vc_t1

0x7ed0,	// (0x0003278e) list_highlight_pane_cp5_vc_ParamLimits

0x7ed0,	// (0x0003278e) list_highlight_pane_cp5_vc

0xbad0,	// (0x0003638e) list_form_graphic_pane_vc_ParamLimits

0xbad0,	// (0x0003638e) list_form_graphic_pane_vc

0x9d28,	// (0x000345e6) form_field_popup_pane_vc_g1

0xbae6,	// (0x000363a4) form_field_popup_pane_vc_t1_ParamLimits

0xbae6,	// (0x000363a4) form_field_popup_pane_vc_t1

0x8765,	// (0x00033023) input_focus_pane_cp7_vc_ParamLimits

0x8765,	// (0x00033023) input_focus_pane_cp7_vc

0xbafd,	// (0x000363bb) list_form_pane_vc_ParamLimits

0xbafd,	// (0x000363bb) list_form_pane_vc

0xbb09,	// (0x000363c7) data_form_pane_vc_t1_ParamLimits

0xbb09,	// (0x000363c7) data_form_pane_vc_t1

0x87bd,	// (0x0003307b) input_focus_pane_vc_g1

0x87c5,	// (0x00033083) input_focus_pane_vc_g2

0x87cd,	// (0x0003308b) input_focus_pane_vc_g3

0x87d5,	// (0x00033093) input_focus_pane_vc_g4

0x87dd,	// (0x0003309b) input_focus_pane_vc_g5

0x87e5,	// (0x000330a3) input_focus_pane_vc_g6

0x87ed,	// (0x000330ab) input_focus_pane_vc_g7

0x87f5,	// (0x000330b3) input_focus_pane_vc_g8

0x87fd,	// (0x000330bb) input_focus_pane_vc_g9

0x7de6,	// (0x000326a4) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00039f4a) input_focus_pane_vc_g

0x9d1c,	// (0x000345da) data_form_pane_vc_ParamLimits

0x9d1c,	// (0x000345da) data_form_pane_vc

0x9d28,	// (0x000345e6) form_field_data_pane_vc_g1

0xbb24,	// (0x000363e2) form_field_data_pane_vc_t1_ParamLimits

0xbb24,	// (0x000363e2) form_field_data_pane_vc_t1

0x8765,	// (0x00033023) input_focus_pane_vc_ParamLimits

0x8765,	// (0x00033023) input_focus_pane_vc

0xbb3e,	// (0x000363fc) button_value_adjust_pane_cp3_vc

0xbb46,	// (0x00036404) button_value_adjust_pane_cp5_vc

0xbb4e,	// (0x0003640c) form_field_data_pane_vc_ParamLimits

0xbb4e,	// (0x0003640c) form_field_data_pane_vc

0xbb65,	// (0x00036423) form_field_data_pane_vc_cp2

0xbb6d,	// (0x0003642b) form_field_data_wide_pane_vc_ParamLimits

0xbb6d,	// (0x0003642b) form_field_data_wide_pane_vc

0xbb83,	// (0x00036441) form_field_data_wide_pane_vc_cp2

0xbb8b,	// (0x00036449) form_field_popup_pane_vc_ParamLimits

0xbb8b,	// (0x00036449) form_field_popup_pane_vc

0xbba2,	// (0x00036460) form_field_popup_wide_pane_vc_ParamLimits

0xbba2,	// (0x00036460) form_field_popup_wide_pane_vc

0xbbb8,	// (0x00036476) form_field_slider_pane_vc_ParamLimits

0xbbb8,	// (0x00036476) form_field_slider_pane_vc

0xbbcb,	// (0x00036489) form_field_slider_wide_pane_vc_ParamLimits

0xbbcb,	// (0x00036489) form_field_slider_wide_pane_vc

0xbbde,	// (0x0003649c) grid_touch_1_pane_ParamLimits

0xbbde,	// (0x0003649c) grid_touch_1_pane

0xbbea,	// (0x000364a8) grid_touch_2_pane_ParamLimits

0xbbea,	// (0x000364a8) grid_touch_2_pane

0x96c1,	// (0x00033f7f) touch_pane_g1_ParamLimits

0x96c1,	// (0x00033f7f) touch_pane_g1

0xbc02,	// (0x000364c0) cell_app_pane_cp_wide_ParamLimits

0xbc02,	// (0x000364c0) cell_app_pane_cp_wide

0xbc13,	// (0x000364d1) grid_popup_fast_wide_pane_ParamLimits

0xbc13,	// (0x000364d1) grid_popup_fast_wide_pane

0xbc27,	// (0x000364e5) scroll_pane_cp19_ParamLimits

0xbc27,	// (0x000364e5) scroll_pane_cp19

0x7df0,	// (0x000326ae) bg_popup_window_pane_cp20

0xbc3b,	// (0x000364f9) listscroll_popup_fast_wide_pane

0x7ed0,	// (0x0003278e) grid_indicator_nsta_pane

0xbc43,	// (0x00036501) clock_nsta_pane_g1

0xbc4c,	// (0x0003650a) clock_nsta_pane_t1

0xbc68,	// (0x00036526) cell_indicator_nsta_pane_ParamLimits

0xbc68,	// (0x00036526) cell_indicator_nsta_pane

0xbc99,	// (0x00036557) cell_indicator_nsta_pane_g1

0xbca7,	// (0x00036565) cell_indicator_nsta_pane_g2

0x0001,

0xfa9c,	// (0x0003a35a) cell_indicator_nsta_pane_g

0xbcb4,	// (0x00036572) clock_nsta_pane_cp

0xbcbd,	// (0x0003657b) indicator_nsta_pane_cp

0xbcc5,	// (0x00036583) nsta_clock_indic_pane_g1

0x7f99,	// (0x00032857) grid_indicator_pane

0x8cf7,	// (0x000335b5) scroll_pane_cp29

0x571d,	// (0x0002ffdb) indicator_nsta_pane_cp2_ParamLimits

0x571d,	// (0x0002ffdb) indicator_nsta_pane_cp2

0x7ed0,	// (0x0003278e) main_apps_wheel_pane

0x9f37,	// (0x000347f5) form_midp_field_text_pane_ParamLimits

0xa08e,	// (0x0003494c) scroll_bar_cp050_ParamLimits

0xbd15,	// (0x000365d3) cell_indicator_pane_ParamLimits

0xbd15,	// (0x000365d3) cell_indicator_pane

0xbd2c,	// (0x000365ea) cell_indicator_pane_g1

0xbd36,	// (0x000365f4) grid_wheel_folder_pane_ParamLimits

0xbd36,	// (0x000365f4) grid_wheel_folder_pane

0xbd4c,	// (0x0003660a) list_wheel_apps_pane_ParamLimits

0xbd4c,	// (0x0003660a) list_wheel_apps_pane

0xbd5d,	// (0x0003661b) main_apps_wheel_pane_g1_ParamLimits

0xbd5d,	// (0x0003661b) main_apps_wheel_pane_g1

0xbd71,	// (0x0003662f) main_apps_wheel_pane_g2_ParamLimits

0xbd71,	// (0x0003662f) main_apps_wheel_pane_g2

0x0001,

0xfab8,	// (0x0003a376) main_apps_wheel_pane_g_ParamLimits

0xfab8,	// (0x0003a376) main_apps_wheel_pane_g

0xbd89,	// (0x00036647) main_apps_wheel_pane_t1_ParamLimits

0xbd89,	// (0x00036647) main_apps_wheel_pane_t1

0xbdac,	// (0x0003666a) list_wheel_apps_pane_g1

0xbdb4,	// (0x00036672) list_wheel_apps_pane_g2

0xbdbc,	// (0x0003667a) list_wheel_apps_pane_g3

0xbdc4,	// (0x00036682) list_wheel_apps_pane_g4

0xbdce,	// (0x0003668c) list_wheel_apps_pane_g5

0x0004,

0xfabd,	// (0x0003a37b) list_wheel_apps_pane_g

0x927a,	// (0x00033b38) navi_icon_text_pane

0x975a,	// (0x00034018) aid_fill_nsta

0xbdf1,	// (0x000366af) navi_icon_text_pane_g1

0xbdfd,	// (0x000366bb) navi_icon_text_pane_t1

0x910d,	// (0x000339cb) list_set_graphic_pane_t1_ParamLimits

0x910d,	// (0x000339cb) list_set_graphic_pane_t1

0xa7f1,	// (0x000350af) popup_midp_note_alarm_window_t6_ParamLimits

0xa7f1,	// (0x000350af) popup_midp_note_alarm_window_t6

0xa803,	// (0x000350c1) popup_midp_note_alarm_window_t7_ParamLimits

0xa803,	// (0x000350c1) popup_midp_note_alarm_window_t7

0xa815,	// (0x000350d3) popup_midp_note_alarm_window_t8_ParamLimits

0xa815,	// (0x000350d3) popup_midp_note_alarm_window_t8

0xa827,	// (0x000350e5) popup_midp_note_alarm_window_t9_ParamLimits

0xa827,	// (0x000350e5) popup_midp_note_alarm_window_t9

0xa839,	// (0x000350f7) popup_midp_note_alarm_window_t10_ParamLimits

0xa839,	// (0x000350f7) popup_midp_note_alarm_window_t10

0xa84b,	// (0x00035109) popup_midp_note_alarm_window_t11_ParamLimits

0xa84b,	// (0x00035109) popup_midp_note_alarm_window_t11

0xa85d,	// (0x0003511b) scroll_pane_cp17_ParamLimits

0xa85d,	// (0x0003511b) scroll_pane_cp17

0x614c,	// (0x00030a0a) volume_small_pane_cp_g1

0x6441,	// (0x00030cff) volume_small_pane_cp_g2

0x644a,	// (0x00030d08) volume_small_pane_cp_g3

0x6453,	// (0x00030d11) volume_small_pane_cp_g4

0x645c,	// (0x00030d1a) volume_small_pane_cp_g5

0x6465,	// (0x00030d23) volume_small_pane_cp_g6

0x646e,	// (0x00030d2c) volume_small_pane_cp_g7

0x6477,	// (0x00030d35) volume_small_pane_cp_g8

0x6480,	// (0x00030d3e) volume_small_pane_cp_g9

0x6489,	// (0x00030d47) volume_small_pane_cp_g10

0x94d7,	// (0x00033d95) midp_ticker_pane_g1_ParamLimits

0x94e3,	// (0x00033da1) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003a016) midp_ticker_pane_g_ParamLimits

0x94ef,	// (0x00033dad) midp_ticker_pane_t1_ParamLimits

0x9770,	// (0x0003402e) aid_fill_nsta_2

0xa07a,	// (0x00034938) list_form2_midp_pane

0xb1ab,	// (0x00035a69) midp_editing_number_pane_ParamLimits

0xb1ba,	// (0x00035a78) midp_ticker_pane_ParamLimits

0xbe0f,	// (0x000366cd) form2_midp_field_pane

0xbe33,	// (0x000366f1) scroll_pane_cp51

0xbe53,	// (0x00036711) form2_midp_button_pane_ParamLimits

0xbe53,	// (0x00036711) form2_midp_button_pane

0xbe65,	// (0x00036723) form2_midp_content_pane_ParamLimits

0xbe65,	// (0x00036723) form2_midp_content_pane

0xbe7f,	// (0x0003673d) form2_midp_field_choice_group_pane

0xbe87,	// (0x00036745) form2_midp_field_pane_g1

0xbe8f,	// (0x0003674d) form2_midp_field_pane_g2

0xbe97,	// (0x00036755) form2_midp_field_pane_g3

0xbe9f,	// (0x0003675d) form2_midp_field_pane_g4

0x0003,

0xfae2,	// (0x0003a3a0) form2_midp_field_pane_g

0xbea7,	// (0x00036765) form2_midp_gauge_slider_pane

0xbeaf,	// (0x0003676d) form2_midp_gauge_wait_pane

0xbeb7,	// (0x00036775) form2_midp_image_pane_ParamLimits

0xbeb7,	// (0x00036775) form2_midp_image_pane

0xbed2,	// (0x00036790) form2_midp_label_pane_ParamLimits

0xbed2,	// (0x00036790) form2_midp_label_pane

0xbeeb,	// (0x000367a9) form2_midp_label_pane_cp_ParamLimits

0xbeeb,	// (0x000367a9) form2_midp_label_pane_cp

0xbf0c,	// (0x000367ca) form2_midp_string_pane_ParamLimits

0xbf0c,	// (0x000367ca) form2_midp_string_pane

0x79d9,	// (0x00032297) form2_midp_text_pane_ParamLimits

0x79d9,	// (0x00032297) form2_midp_text_pane

0xbf1e,	// (0x000367dc) form2_midp_time_pane

0xbf2e,	// (0x000367ec) input_focus_pane_cp51_ParamLimits

0xbf2e,	// (0x000367ec) input_focus_pane_cp51

0xbf46,	// (0x00036804) form2_midp_label_pane_t1_ParamLimits

0xbf46,	// (0x00036804) form2_midp_label_pane_t1

0x79f4,	// (0x000322b2) form2_mdip_text_pane_t1_ParamLimits

0x79f4,	// (0x000322b2) form2_mdip_text_pane_t1

0x7a12,	// (0x000322d0) form2_midp_time_pane_t1

0xbf8f,	// (0x0003684d) form2_midp_gauge_slider_pane_t1

0xbfa1,	// (0x0003685f) form2_midp_gauge_slider_pane_t2

0xbfb3,	// (0x00036871) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaeb,	// (0x0003a3a9) form2_midp_gauge_slider_pane_t

0xbfc5,	// (0x00036883) form2_midp_slider_pane

0xbfd1,	// (0x0003688f) form2_midp_gauge_wait_pane_t1

0xbfdf,	// (0x0003689d) form2_midp_wait_pane_ParamLimits

0xbfdf,	// (0x0003689d) form2_midp_wait_pane

0xc00a,	// (0x000368c8) list_single_2graphic_pane_cp4_ParamLimits

0xc00a,	// (0x000368c8) list_single_2graphic_pane_cp4

0x9d90,	// (0x0003464e) list_single_midp_graphic_pane_cp_ParamLimits

0x9d90,	// (0x0003464e) list_single_midp_graphic_pane_cp

0x7df0,	// (0x000326ae) list_highlight_pane_cp20

0xc02e,	// (0x000368ec) list_single_2graphic_pane_g1_cp4

0xc036,	// (0x000368f4) list_single_2graphic_pane_g2_cp4

0xc03e,	// (0x000368fc) list_single_2graphic_pane_t1_cp4

0x7ed0,	// (0x0003278e) list_highlight_pane_cp21

0xc04d,	// (0x0003690b) list_single_midp_graphic_pane_g4_cp

0xc05c,	// (0x0003691a) list_single_midp_graphic_pane_t1_cp

0xc071,	// (0x0003692f) form2_mdip_string_pane_t1_ParamLimits

0xc071,	// (0x0003692f) form2_mdip_string_pane_t1

0x7df0,	// (0x000326ae) bg_wml_button_pane_cp2

0x7de6,	// (0x000326a4) form2_midp_image_pane_g1

0x4f55,	// (0x0002f813) list_double_large_graphic_pane_g5_ParamLimits

0x4f55,	// (0x0002f813) list_double_large_graphic_pane_g5

0x9402,	// (0x00033cc0) midp_form_pane_ParamLimits

0x7ed0,	// (0x0003278e) main_apps_wheel_pane_ParamLimits

0x5df8,	// (0x000306b6) popup_preview_window_ParamLimits

0x5df8,	// (0x000306b6) popup_preview_window

0x5fb3,	// (0x00030871) popup_touch_info_window_ParamLimits

0x5fb3,	// (0x00030871) popup_touch_info_window

0x5fd1,	// (0x0003088f) popup_touch_menu_window_ParamLimits

0x5fd1,	// (0x0003088f) popup_touch_menu_window

0x7ddc,	// (0x0003269a) bg_popup_sub_pane_cp6

0xc16a,	// (0x00036a28) list_touch_menu_pane

0xc172,	// (0x00036a30) list_single_touch_menu_pane_ParamLimits

0xc172,	// (0x00036a30) list_single_touch_menu_pane

0xc188,	// (0x00036a46) list_single_touch_menu_pane_t1

0x7ed0,	// (0x0003278e) bg_popup_sub_pane_cp7_ParamLimits

0x7ed0,	// (0x0003278e) bg_popup_sub_pane_cp7

0xc196,	// (0x00036a54) heading_sub_pane

0xc19e,	// (0x00036a5c) list_touch_info_pane_ParamLimits

0xc19e,	// (0x00036a5c) list_touch_info_pane

0xc1ad,	// (0x00036a6b) list_single_touch_info_pane_ParamLimits

0xc1ad,	// (0x00036a6b) list_single_touch_info_pane

0xc1bf,	// (0x00036a7d) list_single_touch_info_pane_t1

0xc1cd,	// (0x00036a8b) list_single_touch_info_pane_t2

0x0001,

0xfaf9,	// (0x0003a3b7) list_single_touch_info_pane_t

0x93fa,	// (0x00033cb8) bg_popup_heading_pane_cp

0xc1db,	// (0x00036a99) heading_sub_pane_t1

0x9cb6,	// (0x00034574) bg_popup_preview_window_pane_cp_ParamLimits

0x9cb6,	// (0x00034574) bg_popup_preview_window_pane_cp

0xc196,	// (0x00036a54) heading_preview_pane

0xc19e,	// (0x00036a5c) list_preview_pane_ParamLimits

0xc19e,	// (0x00036a5c) list_preview_pane

0xc1e9,	// (0x00036aa7) popup_preview_window_g1

0xc1ad,	// (0x00036a6b) list_single_preview_pane_ParamLimits

0xc1ad,	// (0x00036a6b) list_single_preview_pane

0xc1f1,	// (0x00036aaf) list_single_preview_pane_g1

0xc1f9,	// (0x00036ab7) list_single_preview_pane_t1

0xc1bf,	// (0x00036a7d) list_single_preview_pane_t2

0x0001,

0xfafe,	// (0x0003a3bc) list_single_preview_pane_t

0xc207,	// (0x00036ac5) bg_popup_heading_pane_cp2_ParamLimits

0xc207,	// (0x00036ac5) bg_popup_heading_pane_cp2

0xc21d,	// (0x00036adb) heading_preview_pane_g1

0xc225,	// (0x00036ae3) heading_preview_pane_t1_ParamLimits

0xc225,	// (0x00036ae3) heading_preview_pane_t1

0x7fbc,	// (0x0003287a) soft_indicator_pane_t1_ParamLimits

0x86d8,	// (0x00032f96) scroll_pane_ParamLimits

0x8bf0,	// (0x000334ae) scroll_sc2_left_pane

0x8bf9,	// (0x000334b7) scroll_sc2_right_pane

0x8c18,	// (0x000334d6) scroll_bg_pane_g1_ParamLimits

0x8c2d,	// (0x000334eb) scroll_bg_pane_g2_ParamLimits

0x8c45,	// (0x00033503) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00039fa1) scroll_bg_pane_g_ParamLimits

0x8c18,	// (0x000334d6) scroll_handle_pane_g1_ParamLimits

0x8c67,	// (0x00033525) scroll_handle_pane_g2_ParamLimits

0x8c45,	// (0x00033503) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00039fa8) scroll_handle_pane_g_ParamLimits

0x5a79,	// (0x00030337) popup_choice_list_window_ParamLimits

0x5a79,	// (0x00030337) popup_choice_list_window

0x9b8c,	// (0x0003444a) choice_list_pane

0x9c0e,	// (0x000344cc) cell_toolbar_pane_t1

0x9c36,	// (0x000344f4) toolbar_button_pane_ParamLimits

0xad17,	// (0x000355d5) ai_gene_pane_1_t2_ParamLimits

0xad17,	// (0x000355d5) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a1d0) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a1d0) ai_gene_pane_1_t

0xc242,	// (0x00036b00) scroll_sc2_left_pane_g1

0xc242,	// (0x00036b00) scroll_sc2_right_pane_g1

0x971e,	// (0x00033fdc) bg_popup_sub_pane_cp10

0xc24c,	// (0x00036b0a) list_choice_list_pane

0xc271,	// (0x00036b2f) list_single_choice_list_pane_ParamLimits

0xc271,	// (0x00036b2f) list_single_choice_list_pane

0xc284,	// (0x00036b42) list_single_choice_list_pane_g1

0x88f6,	// (0x000331b4) list_single_choice_list_pane_t1_ParamLimits

0x88f6,	// (0x000331b4) list_single_choice_list_pane_t1

0xc28c,	// (0x00036b4a) choice_list_pane_g1

0xc294,	// (0x00036b52) choice_list_pane_t1

0x7ddc,	// (0x0003269a) input_focus_pane_cp11

0x8acd,	// (0x0003338b) title_pane_stacon_g2_ParamLimits

0x8acd,	// (0x0003338b) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00039f87) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00039f87) title_pane_stacon_g

0x93fa,	// (0x00033cb8) cursor_press_pane

0x5b25,	// (0x000303e3) popup_fep_hwr_window_ParamLimits

0x5b25,	// (0x000303e3) popup_fep_hwr_window

0x5b9f,	// (0x0003045d) popup_fep_vkb_window_ParamLimits

0x5b9f,	// (0x0003045d) popup_fep_vkb_window

0xc2a2,	// (0x00036b60) cursor_press_pane_g1

0x0002,

0xfb27,	// (0x0003a3e5) fep_vkb_side_pane_g_ParamLimits

0x64cb,	// (0x00030d89) fep_hwr_candidate_pane_ParamLimits

0x64cb,	// (0x00030d89) fep_hwr_candidate_pane

0x64f5,	// (0x00030db3) fep_hwr_side_pane_ParamLimits

0x64f5,	// (0x00030db3) fep_hwr_side_pane

0x6515,	// (0x00030dd3) fep_hwr_top_pane_ParamLimits

0x6515,	// (0x00030dd3) fep_hwr_top_pane

0x652d,	// (0x00030deb) fep_hwr_write_pane_ParamLimits

0x652d,	// (0x00030deb) fep_hwr_write_pane

0xfb27,	// (0x0003a3e5) fep_vkb_side_pane_g

0xc2aa,	// (0x00036b68) fep_hwr_top_pane_g1

0xc2bc,	// (0x00036b7a) fep_hwr_top_pane_g2

0x6567,	// (0x00030e25) fep_hwr_top_pane_g3

0x0002,

0xfb03,	// (0x0003a3c1) fep_hwr_top_pane_g

0x657c,	// (0x00030e3a) fep_hwr_top_text_pane

0x8de7,	// (0x000336a5) fep_hwr_top_text_pane_g1

0xc2f2,	// (0x00036bb0) fep_hwr_top_text_pane_t1

0x6672,	// (0x00030f30) fep_hwr_candidate_pane_g1

0xc545,	// (0x00036e03) fep_vkb_keypad_pane_g3_ParamLimits

0xc545,	// (0x00036e03) fep_vkb_keypad_pane_g3

0xc56d,	// (0x00036e2b) fep_vkb_keypad_pane_g4_ParamLimits

0xc56d,	// (0x00036e2b) fep_vkb_keypad_pane_g4

0xc5dc,	// (0x00036e9a) fep_vkb_bottom_pane_g2_ParamLimits

0xc5dc,	// (0x00036e9a) fep_vkb_bottom_pane_g2

0x0001,

0xfb2e,	// (0x0003a3ec) fep_vkb_bottom_pane_g_ParamLimits

0xfb2e,	// (0x0003a3ec) fep_vkb_bottom_pane_g

0xc242,	// (0x00036b00) cell_vkb_side_pane_g2

0x0001,

0xfb38,	// (0x0003a3f6) cell_vkb_side_pane_g

0xc667,	// (0x00036f25) cell_vkb_side_pane_t1

0xc675,	// (0x00036f33) cell_vkb_side_pane_t1_copy1

0xc242,	// (0x00036b00) bg_fep_vkb_candidate_pane_g2

0xc7a1,	// (0x0003705f) cell_vkb_candidate_pane_ParamLimits

0xc300,	// (0x00036bbe) aid_size_cell_vkb_ParamLimits

0xc300,	// (0x00036bbe) aid_size_cell_vkb

0xc7a1,	// (0x0003705f) cell_vkb_candidate_pane

0x6699,	// (0x00030f57) bg_popup_fep_shadow_pane_g1

0xc38e,	// (0x00036c4c) fep_vkb_bottom_pane_ParamLimits

0xc38e,	// (0x00036c4c) fep_vkb_bottom_pane

0xc3c4,	// (0x00036c82) fep_vkb_candidate_pane_ParamLimits

0xc3c4,	// (0x00036c82) fep_vkb_candidate_pane

0xc3e0,	// (0x00036c9e) fep_vkb_keypad_pane_ParamLimits

0xc3e0,	// (0x00036c9e) fep_vkb_keypad_pane

0xc426,	// (0x00036ce4) fep_vkb_side_pane_ParamLimits

0xc426,	// (0x00036ce4) fep_vkb_side_pane

0xc462,	// (0x00036d20) fep_vkb_top_pane_ParamLimits

0xc462,	// (0x00036d20) fep_vkb_top_pane

0xc49e,	// (0x00036d5c) fep_vkb_top_pane_g1_ParamLimits

0xc49e,	// (0x00036d5c) fep_vkb_top_pane_g1

0xc4ad,	// (0x00036d6b) fep_vkb_top_pane_g2_ParamLimits

0xc4ad,	// (0x00036d6b) fep_vkb_top_pane_g2

0xc4bc,	// (0x00036d7a) fep_vkb_top_pane_g3_ParamLimits

0xc4bc,	// (0x00036d7a) fep_vkb_top_pane_g3

0x0003,

0xfb1e,	// (0x0003a3dc) fep_vkb_top_pane_g_ParamLimits

0xfb1e,	// (0x0003a3dc) fep_vkb_top_pane_g

0xc4da,	// (0x00036d98) fep_vkb_top_text_pane_ParamLimits

0xc4da,	// (0x00036d98) fep_vkb_top_text_pane

0xc4eb,	// (0x00036da9) fep_vkb_side_pane_g1_ParamLimits

0xc4eb,	// (0x00036da9) fep_vkb_side_pane_g1

0xc534,	// (0x00036df2) grid_vkb_side_pane_ParamLimits

0xc534,	// (0x00036df2) grid_vkb_side_pane

0x66a1,	// (0x00030f5f) bg_popup_fep_shadow_pane_g2

0x66aa,	// (0x00030f68) bg_popup_fep_shadow_pane_g3

0x66b2,	// (0x00030f70) bg_popup_fep_shadow_pane_g4

0x66bb,	// (0x00030f79) bg_popup_fep_shadow_pane_g5

0x66c5,	// (0x00030f83) bg_popup_fep_shadow_pane_g6

0x66cd,	// (0x00030f8b) bg_popup_fep_shadow_pane_g7

0x87d5,	// (0x00033093) bg_popup_fep_shadow_pane_g8

0xc58b,	// (0x00036e49) grid_vkb_keypad_number_pane_ParamLimits

0xc58b,	// (0x00036e49) grid_vkb_keypad_number_pane

0xc59b,	// (0x00036e59) grid_vkb_keypad_pane_ParamLimits

0xc59b,	// (0x00036e59) grid_vkb_keypad_pane

0xc5c1,	// (0x00036e7f) fep_vkb_bottom_pane_g1_ParamLimits

0xc5c1,	// (0x00036e7f) fep_vkb_bottom_pane_g1

0xc5ea,	// (0x00036ea8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5ea,	// (0x00036ea8) grid_vkb_keypad_bottom_left_pane

0xc5ff,	// (0x00036ebd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5ff,	// (0x00036ebd) grid_vkb_keypad_bottom_right_pane

0xc614,	// (0x00036ed2) fep_vkb_top_text_pane_g1

0xc62f,	// (0x00036eed) fep_vkb_top_text_pane_t1

0xc644,	// (0x00036f02) cell_vkb_side_pane_ParamLimits

0xc644,	// (0x00036f02) cell_vkb_side_pane

0xc242,	// (0x00036b00) cell_vkb_side_pane_g1

0xc683,	// (0x00036f41) cell_vkb_keypad_pane_ParamLimits

0xc683,	// (0x00036f41) cell_vkb_keypad_pane

0xc6f8,	// (0x00036fb6) cell_vkb_keypad_pane_g1

0x0008,

0xfb4b,	// (0x0003a409) bg_popup_fep_shadow_pane_g

0x66df,	// (0x00030f9d) cell_hwr_side_pane_g1

0x66df,	// (0x00030f9d) cell_hwr_side_pane_g2

0xc702,	// (0x00036fc0) cell_vkb_keypad_pane_t1

0xc710,	// (0x00036fce) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc710,	// (0x00036fce) cell_vkb_keypad_bottom_left_pane

0xc72d,	// (0x00036feb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc72d,	// (0x00036feb) cell_vkb_keypad_bottom_right_pane

0xc242,	// (0x00036b00) cell_vkb_keypad_bottom_left_pane_g1

0xc242,	// (0x00036b00) cell_vkb_keypad_bottom_right_pane_g1

0xc766,	// (0x00037024) cell_vkb_keypad_number_pane_ParamLimits

0xc766,	// (0x00037024) cell_vkb_keypad_number_pane

0xc785,	// (0x00037043) cell_vkb_keypad_number_pane_g1

0xc78f,	// (0x0003704d) cell_vkb_keypad_number_pane_g2

0xc798,	// (0x00037056) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3d,	// (0x0003a3fb) cell_vkb_keypad_number_pane_g

0xc702,	// (0x00036fc0) cell_vkb_keypad_number_pane_t1

0xc7bc,	// (0x0003707a) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003a41c) cell_hwr_side_pane_g

0xc7d5,	// (0x00037093) cell_hwr_side_pane_t1

0x66e9,	// (0x00030fa7) cell_hwr_side_pane_t1_copy1

0x66f7,	// (0x00030fb5) cell_hwr_candidate_pane_g1

0x6726,	// (0x00030fe4) cell_hwr_candidate_pane_t1

0xc242,	// (0x00036b00) cell_vkb_candidate_pane_g2

0xc819,	// (0x000370d7) cell_vkb_candidate_pane_t1

0x6492,	// (0x00030d50) bg_popup_fep_shadow_pane_ParamLimits

0x6492,	// (0x00030d50) bg_popup_fep_shadow_pane

0x6547,	// (0x00030e05) bg_fep_hwr_top_pane_g4

0xc2ce,	// (0x00036b8c) bg_hwr_side_pane_g1_ParamLimits

0xc2ce,	// (0x00036b8c) bg_hwr_side_pane_g1

0x65b8,	// (0x00030e76) cell_hwr_side_pane_ParamLimits

0x65b8,	// (0x00030e76) cell_hwr_side_pane

0x65f3,	// (0x00030eb1) fep_hwr_write_pane_g1_ParamLimits

0x65f3,	// (0x00030eb1) fep_hwr_write_pane_g1

0x6600,	// (0x00030ebe) fep_hwr_write_pane_g2_ParamLimits

0x6600,	// (0x00030ebe) fep_hwr_write_pane_g2

0x660d,	// (0x00030ecb) fep_hwr_write_pane_g3_ParamLimits

0x660d,	// (0x00030ecb) fep_hwr_write_pane_g3

0x661b,	// (0x00030ed9) fep_hwr_write_pane_g4_ParamLimits

0x661b,	// (0x00030ed9) fep_hwr_write_pane_g4

0x0005,

0xfb0a,	// (0x0003a3c8) fep_hwr_write_pane_g_ParamLimits

0xfb0a,	// (0x0003a3c8) fep_hwr_write_pane_g

0x6547,	// (0x00030e05) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6547,	// (0x00030e05) bg_fep_hwr_candidate_pane_g2

0x6630,	// (0x00030eee) cell_hwr_candidate_pane_ParamLimits

0x6630,	// (0x00030eee) cell_hwr_candidate_pane

0x6672,	// (0x00030f30) fep_hwr_candidate_pane_g1_ParamLimits

0xc32e,	// (0x00036bec) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc32e,	// (0x00036bec) bg_popup_fep_shadow_pane_cp2

0xc4cc,	// (0x00036d8a) fep_vkb_top_pane_g4_ParamLimits

0xc4cc,	// (0x00036d8a) fep_vkb_top_pane_g4

0xc512,	// (0x00036dd0) fep_vkb_side_pane_g2_ParamLimits

0xc512,	// (0x00036dd0) fep_vkb_side_pane_g2

0x5098,	// (0x0002f956) list_setting_pane_t4_ParamLimits

0x5098,	// (0x0002f956) list_setting_pane_t4

0x5132,	// (0x0002f9f0) list_setting_number_pane_t5_ParamLimits

0x5132,	// (0x0002f9f0) list_setting_number_pane_t5

0x8e2e,	// (0x000336ec) list_double_heading_pane_cp2_ParamLimits

0x8e2e,	// (0x000336ec) list_double_heading_pane_cp2

0x8773,	// (0x00033031) list_double_heading_pane_g1_cp2_ParamLimits

0x8773,	// (0x00033031) list_double_heading_pane_g1_cp2

0x877f,	// (0x0003303d) list_double_heading_pane_g2_cp2_ParamLimits

0x877f,	// (0x0003303d) list_double_heading_pane_g2_cp2

0xc827,	// (0x000370e5) list_double_heading_pane_t1_cp2_ParamLimits

0xc827,	// (0x000370e5) list_double_heading_pane_t1_cp2

0xc83d,	// (0x000370fb) list_double_heading_pane_t2_cp2_ParamLimits

0xc83d,	// (0x000370fb) list_double_heading_pane_t2_cp2

0x7dc4,	// (0x00032682) aid_value_unit2

0x4b08,	// (0x0002f3c6) popup_preview_fixed_window

0x8159,	// (0x00032a17) bg_popup_preview_window_pane_cp02

0xc84f,	// (0x0003710d) list_preview_fixed_pane

0xc895,	// (0x00037153) list_empty_pane_fp_ParamLimits

0xc895,	// (0x00037153) list_empty_pane_fp

0xc895,	// (0x00037153) list_single_cale_day_pane_fp_ParamLimits

0xc895,	// (0x00037153) list_single_cale_day_pane_fp

0xc895,	// (0x00037153) list_single_graphic_heading_pane_fp_ParamLimits

0xc895,	// (0x00037153) list_single_graphic_heading_pane_fp

0xc895,	// (0x00037153) list_single_graphic_pane_fp_ParamLimits

0xc895,	// (0x00037153) list_single_graphic_pane_fp

0xc895,	// (0x00037153) list_single_heading_pane_fp_ParamLimits

0xc895,	// (0x00037153) list_single_heading_pane_fp

0xc895,	// (0x00037153) list_single_pane_fp_ParamLimits

0xc895,	// (0x00037153) list_single_pane_fp

0xc8aa,	// (0x00037168) list_single_pane_fp_g1_ParamLimits

0xc8aa,	// (0x00037168) list_single_pane_fp_g1

0x7a25,	// (0x000322e3) list_single_pane_fp_g2_ParamLimits

0x7a25,	// (0x000322e3) list_single_pane_fp_g2

0x7a31,	// (0x000322ef) list_single_pane_fp_g3_ParamLimits

0x7a31,	// (0x000322ef) list_single_pane_fp_g3

0xc8b6,	// (0x00037174) list_single_pane_fp_g4_ParamLimits

0xc8b6,	// (0x00037174) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0003a42f) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0003a42f) list_single_pane_fp_g

0x7a45,	// (0x00032303) list_single_pane_fp_t1_ParamLimits

0x7a45,	// (0x00032303) list_single_pane_fp_t1

0x7a5c,	// (0x0003231a) list_single_graphic_pane_fp_g1_ParamLimits

0x7a5c,	// (0x0003231a) list_single_graphic_pane_fp_g1

0xc8aa,	// (0x00037168) list_single_graphic_pane_fp_g2_ParamLimits

0xc8aa,	// (0x00037168) list_single_graphic_pane_fp_g2

0x7a25,	// (0x000322e3) list_single_graphic_pane_fp_g3_ParamLimits

0x7a25,	// (0x000322e3) list_single_graphic_pane_fp_g3

0x7a31,	// (0x000322ef) list_single_graphic_pane_fp_g4_ParamLimits

0x7a31,	// (0x000322ef) list_single_graphic_pane_fp_g4

0xc8b6,	// (0x00037174) list_single_graphic_pane_fp_g5_ParamLimits

0xc8b6,	// (0x00037174) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a438) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a438) list_single_graphic_pane_fp_g

0x7a68,	// (0x00032326) list_single_graphic_pane_fp_t1_ParamLimits

0x7a68,	// (0x00032326) list_single_graphic_pane_fp_t1

0x7a5c,	// (0x0003231a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7a5c,	// (0x0003231a) list_single_graphic_heading_pane_fp_g1

0xc8aa,	// (0x00037168) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8aa,	// (0x00037168) list_single_graphic_heading_pane_fp_g2

0x7a25,	// (0x000322e3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7a25,	// (0x000322e3) list_single_graphic_heading_pane_fp_g3

0x7a31,	// (0x000322ef) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7a31,	// (0x000322ef) list_single_graphic_heading_pane_fp_g4

0xc8b6,	// (0x00037174) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8b6,	// (0x00037174) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a438) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a438) list_single_graphic_heading_pane_fp_g

0x7a7e,	// (0x0003233c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7a7e,	// (0x0003233c) list_single_graphic_heading_pane_fp_t1

0x7a94,	// (0x00032352) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7a94,	// (0x00032352) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003a443) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003a443) list_single_graphic_heading_pane_fp_t

0x7aa6,	// (0x00032364) list_single_cale_day_pane_fp_g1_ParamLimits

0x7aa6,	// (0x00032364) list_single_cale_day_pane_fp_g1

0xc8c2,	// (0x00037180) list_single_cale_day_pane_fp_g2_ParamLimits

0xc8c2,	// (0x00037180) list_single_cale_day_pane_fp_g2

0x7ade,	// (0x0003239c) list_single_cale_day_pane_fp_g3_ParamLimits

0x7ade,	// (0x0003239c) list_single_cale_day_pane_fp_g3

0x7b06,	// (0x000323c4) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b06,	// (0x000323c4) list_single_cale_day_pane_fp_g4

0x7b2a,	// (0x000323e8) list_single_cale_day_pane_fp_g5_ParamLimits

0x7b2a,	// (0x000323e8) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003a448) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003a448) list_single_cale_day_pane_fp_g

0x7b4e,	// (0x0003240c) list_single_cale_day_pane_fp_t1_ParamLimits

0x7b4e,	// (0x0003240c) list_single_cale_day_pane_fp_t1

0x7b74,	// (0x00032432) list_single_cale_day_pane_fp_t2_ParamLimits

0x7b74,	// (0x00032432) list_single_cale_day_pane_fp_t2

0x7b8d,	// (0x0003244b) list_single_cale_day_pane_fp_t3_ParamLimits

0x7b8d,	// (0x0003244b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0003a453) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0003a453) list_single_cale_day_pane_fp_t

0xc8aa,	// (0x00037168) list_empty_pane_fp_g1_ParamLimits

0xc8aa,	// (0x00037168) list_empty_pane_fp_g1

0x7ba6,	// (0x00032464) list_empty_pane_fp_t1

0x7bb4,	// (0x00032472) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003a45a) list_empty_pane_fp_t

0xc8aa,	// (0x00037168) list_single_heading_pane_fp_g1_ParamLimits

0xc8aa,	// (0x00037168) list_single_heading_pane_fp_g1

0x7a25,	// (0x000322e3) list_single_heading_pane_fp_g2_ParamLimits

0x7a25,	// (0x000322e3) list_single_heading_pane_fp_g2

0x7a31,	// (0x000322ef) list_single_heading_pane_fp_g3_ParamLimits

0x7a31,	// (0x000322ef) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0003a45f) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0003a45f) list_single_heading_pane_fp_g

0x7bc2,	// (0x00032480) list_single_heading_pane_fp_t1_ParamLimits

0x7bc2,	// (0x00032480) list_single_heading_pane_fp_t1

0x7bd4,	// (0x00032492) list_single_heading_pane_fp_t2_ParamLimits

0x7bd4,	// (0x00032492) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003a466) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003a466) list_single_heading_pane_fp_t

0x8964,	// (0x00033222) aid_size_cell_fast

0x80c9,	// (0x00032987) soft_indicator_pane_cp1_t1

0x89a1,	// (0x0003325f) cell_app_pane_cp2_ParamLimits

0x89a1,	// (0x0003325f) cell_app_pane_cp2

0x64b4,	// (0x00030d72) fep_hwr_candidate_drop_down_list_pane

0x668c,	// (0x00030f4a) fep_hwr_candidate_pane_g3_ParamLimits

0x668c,	// (0x00030f4a) fep_hwr_candidate_pane_g3

0x3a40,	// (0x0002e2fe) fep_hwr_candidate_pane_g4_ParamLimits

0x3a40,	// (0x0002e2fe) fep_hwr_candidate_pane_g4

0x0002,

0xfb17,	// (0x0003a3d5) fep_hwr_candidate_pane_g_ParamLimits

0xfb17,	// (0x0003a3d5) fep_hwr_candidate_pane_g

0xc3b3,	// (0x00036c71) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3b3,	// (0x00036c71) fep_vkb_candidate_drop_down_list_pane

0xc7c4,	// (0x00037082) fep_vkb_candidate_pane_g3

0xc7cc,	// (0x0003708a) fep_vkb_candidate_pane_g4

0x0002,

0xfb44,	// (0x0003a402) fep_vkb_candidate_pane_g

0x66f7,	// (0x00030fb5) cell_hwr_candidate_pane_g1_ParamLimits

0x6705,	// (0x00030fc3) cell_hwr_candidate_pane_g3_ParamLimits

0x6705,	// (0x00030fc3) cell_hwr_candidate_pane_g3

0xe4a5,	// (0x00038d63) cell_hwr_candidate_pane_g4_ParamLimits

0xe4a5,	// (0x00038d63) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0003a421) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0003a421) cell_hwr_candidate_pane_g

0xc7e3,	// (0x000370a1) cell_vkb_candidate_pane_g3_ParamLimits

0xc7e3,	// (0x000370a1) cell_vkb_candidate_pane_g3

0xc7fe,	// (0x000370bc) cell_vkb_candidate_pane_g4_ParamLimits

0xc7fe,	// (0x000370bc) cell_vkb_candidate_pane_g4

0xc8ce,	// (0x0003718c) cell_app_pane_cp2_g1_ParamLimits

0xc8ce,	// (0x0003718c) cell_app_pane_cp2_g1

0xc8ec,	// (0x000371aa) cell_app_pane_cp2_g2_ParamLimits

0xc8ec,	// (0x000371aa) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0003a46b) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0003a46b) cell_app_pane_cp2_g

0xc8f8,	// (0x000371b6) cell_app_pane_cp2_t1_ParamLimits

0xc8f8,	// (0x000371b6) cell_app_pane_cp2_t1

0x8765,	// (0x00033023) grid_highlight_pane_cp1_ParamLimits

0x8765,	// (0x00033023) grid_highlight_pane_cp1

0x6744,	// (0x00031002) cell_hwr_candidate_pane_cp1_ParamLimits

0x6744,	// (0x00031002) cell_hwr_candidate_pane_cp1

0x66f7,	// (0x00030fb5) fep_hwr_candidate_drop_down_list_pane_g1

0x6763,	// (0x00031021) fep_hwr_candidate_drop_down_list_pane_g2

0x6770,	// (0x0003102e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0003a470) fep_hwr_candidate_drop_down_list_pane_g

0x677d,	// (0x0003103b) fep_hwr_candidate_drop_down_list_scroll_pane

0x6786,	// (0x00031044) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6786,	// (0x00031044) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6793,	// (0x00031051) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6793,	// (0x00031051) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67a0,	// (0x0003105e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67a0,	// (0x0003105e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x67ad,	// (0x0003106b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x67ad,	// (0x0003106b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x67c8,	// (0x00031086) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x67c8,	// (0x00031086) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x67e3,	// (0x000310a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x67e3,	// (0x000310a1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x67fe,	// (0x000310bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x67fe,	// (0x000310bc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6819,	// (0x000310d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6819,	// (0x000310d7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0003a477) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0003a477) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc90a,	// (0x000371c8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc90a,	// (0x000371c8) cell_vkb_candidate_pane_cp1

0xc4cc,	// (0x00036d8a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4cc,	// (0x00036d8a) fep_vkb_candidate_drop_down_list_pane_g1

0xc92a,	// (0x000371e8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc92a,	// (0x000371e8) fep_vkb_candidate_drop_down_list_pane_g2

0xc937,	// (0x000371f5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc937,	// (0x000371f5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbca,	// (0x0003a488) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbca,	// (0x0003a488) fep_vkb_candidate_drop_down_list_pane_g

0xc944,	// (0x00037202) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc944,	// (0x00037202) fep_vkb_candidate_drop_down_list_scroll_pane

0xc951,	// (0x0003720f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc951,	// (0x0003720f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc95e,	// (0x0003721c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc95e,	// (0x0003721c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc96a,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc96a,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc976,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc976,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc997,	// (0x00037255) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc997,	// (0x00037255) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9b8,	// (0x00037276) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9b8,	// (0x00037276) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9d9,	// (0x00037297) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9d9,	// (0x00037297) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9fa,	// (0x000372b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9fa,	// (0x000372b8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd1,	// (0x0003a48f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd1,	// (0x0003a48f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7dfa,	// (0x000326b8) title_pane_g1_ParamLimits

0x7e07,	// (0x000326c5) title_pane_g2_ParamLimits

0xf54e,	// (0x00039e0c) title_pane_g_ParamLimits

0x8dd7,	// (0x00033695) aid_call2_pane

0x8ddf,	// (0x0003369d) aid_call_pane

0x8de7,	// (0x000336a5) popup_clock_analogue_window_g1

0x8de7,	// (0x000336a5) popup_clock_analogue_window_g2

0x5594,	// (0x0002fe52) popup_clock_analogue_window_g3

0x559d,	// (0x0002fe5b) popup_clock_analogue_window_g4

0x7de6,	// (0x000326a4) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00039fb6) popup_clock_analogue_window_g

0x55a5,	// (0x0002fe63) popup_clock_analogue_window_t1

0x55b3,	// (0x0002fe71) clock_digital_number_pane_ParamLimits

0x55b3,	// (0x0002fe71) clock_digital_number_pane

0x55bf,	// (0x0002fe7d) clock_digital_number_pane_cp02_ParamLimits

0x55bf,	// (0x0002fe7d) clock_digital_number_pane_cp02

0x55cb,	// (0x0002fe89) clock_digital_number_pane_cp03_ParamLimits

0x55cb,	// (0x0002fe89) clock_digital_number_pane_cp03

0x55d7,	// (0x0002fe95) clock_digital_number_pane_cp04_ParamLimits

0x55d7,	// (0x0002fe95) clock_digital_number_pane_cp04

0x55e3,	// (0x0002fea1) clock_digital_separator_pane_ParamLimits

0x55e3,	// (0x0002fea1) clock_digital_separator_pane

0x55ef,	// (0x0002fead) popup_clock_digital_window_t1_ParamLimits

0x55ef,	// (0x0002fead) popup_clock_digital_window_t1

0x7de6,	// (0x000326a4) clock_digital_number_pane_g1

0x7de6,	// (0x000326a4) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00039fc1) clock_digital_number_pane_g

0x7de6,	// (0x000326a4) clock_digital_separator_pane_g1

0x7de6,	// (0x000326a4) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00039fc1) clock_digital_separator_pane_g

0x975a,	// (0x00034018) aid_fill_nsta_ParamLimits

0x98a0,	// (0x0003415e) indicator_nsta_pane_ParamLimits

0x9a19,	// (0x000342d7) popup_clock_analogue_window

0x9a19,	// (0x000342d7) popup_clock_digital_window

0x7ed0,	// (0x0003278e) grid_indicator_nsta_pane_ParamLimits

0xbc5a,	// (0x00036518) clock_nsta_pane_t2

0x0001,

0xfa97,	// (0x0003a355) clock_nsta_pane_t

0x5558,	// (0x0002fe16) aid_size_max_handle

0x5562,	// (0x0002fe20) aid_size_min_handle

0x93fa,	// (0x00033cb8) editor_scroll_pane

0xca15,	// (0x000372d3) ex_editor_pane

0x88d2,	// (0x00033190) scroll_pane_cp13

0x8704,	// (0x00032fc2) scroll_pane_cp14

0x8e16,	// (0x000336d4) scroll_pane_cp36

0x8e42,	// (0x00033700) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e42,	// (0x00033700) list_single_graphic_hl_pane_cp2

0xb20c,	// (0x00035aca) list_single_graphic_hl_pane_ParamLimits

0xb20c,	// (0x00035aca) list_single_graphic_hl_pane

0x7bea,	// (0x000324a8) aid_size_min_hl_cp1

0xca1d,	// (0x000372db) list_highlight_pane_cp34_ParamLimits

0xca1d,	// (0x000372db) list_highlight_pane_cp34

0xca2e,	// (0x000372ec) list_single_graphic_hl_pane_g1_ParamLimits

0xca2e,	// (0x000372ec) list_single_graphic_hl_pane_g1

0x7bf3,	// (0x000324b1) list_single_graphic_hl_pane_g2_ParamLimits

0x7bf3,	// (0x000324b1) list_single_graphic_hl_pane_g2

0x7bf3,	// (0x000324b1) list_single_graphic_hl_pane_g3_ParamLimits

0x7bf3,	// (0x000324b1) list_single_graphic_hl_pane_g3

0x7bff,	// (0x000324bd) list_single_graphic_hl_pane_g4_ParamLimits

0x7bff,	// (0x000324bd) list_single_graphic_hl_pane_g4

0x7c0b,	// (0x000324c9) list_single_graphic_hl_pane_g5_ParamLimits

0x7c0b,	// (0x000324c9) list_single_graphic_hl_pane_g5

0x0004,

0xfbe2,	// (0x0003a4a0) list_single_graphic_hl_pane_g_ParamLimits

0xfbe2,	// (0x0003a4a0) list_single_graphic_hl_pane_g

0x7c1f,	// (0x000324dd) list_single_graphic_hl_pane_t1_ParamLimits

0x7c1f,	// (0x000324dd) list_single_graphic_hl_pane_t1

0xca3b,	// (0x000372f9) aid_size_min_hl_cp2

0xca44,	// (0x00037302) list_highlight_pane_cp34_cp2_ParamLimits

0xca44,	// (0x00037302) list_highlight_pane_cp34_cp2

0xca2e,	// (0x000372ec) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca2e,	// (0x000372ec) list_single_graphic_hl_pane_g1_cp2

0xca51,	// (0x0003730f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca51,	// (0x0003730f) list_single_graphic_hl_pane_g2_cp2

0xca5d,	// (0x0003731b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca5d,	// (0x0003731b) list_single_graphic_hl_pane_g3_cp2

0xc25b,	// (0x00036b19) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc25b,	// (0x00036b19) list_single_graphic_hl_pane_g4_cp2

0xca6b,	// (0x00037329) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca6b,	// (0x00037329) list_single_graphic_hl_pane_g5_cp2

0x592d,	// (0x000301eb) control_pane_g4_ParamLimits

0x592d,	// (0x000301eb) control_pane_g4

0x971e,	// (0x00033fdc) bg_popup_sub_pane_cp10_ParamLimits

0xc24c,	// (0x00036b0a) list_choice_list_pane_ParamLimits

0xc267,	// (0x00036b25) scroll_pane_cp23

0x8159,	// (0x00032a17) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84f,	// (0x0003710d) list_preview_fixed_pane_ParamLimits

0xc865,	// (0x00037123) list_preview_fixed_pane_cp_ParamLimits

0xc865,	// (0x00037123) list_preview_fixed_pane_cp

0xc871,	// (0x0003712f) popup_preview_fixed_window_g1_ParamLimits

0xc871,	// (0x0003712f) popup_preview_fixed_window_g1

0xc87d,	// (0x0003713b) popup_preview_fixed_window_g2_ParamLimits

0xc87d,	// (0x0003713b) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0003a428) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0003a428) popup_preview_fixed_window_g

0x54cc,	// (0x0002fd8a) aid_navi_side_left_pane_ParamLimits

0x54e1,	// (0x0002fd9f) aid_navi_side_right_pane_ParamLimits

0x54f9,	// (0x0002fdb7) navi_icon_pane_stacon_ParamLimits

0x550d,	// (0x0002fdcb) navi_navi_pane_stacon_ParamLimits

0x54f9,	// (0x0002fdb7) navi_text_pane_stacon_ParamLimits

0x49c9,	// (0x0002f287) main_text_info_pane

0xca95,	// (0x00037353) listscroll_text_info_pane

0xca9d,	// (0x0003735b) list_text_info_pane_ParamLimits

0xca9d,	// (0x0003735b) list_text_info_pane

0xcaac,	// (0x0003736a) scroll_pane_cp24_ParamLimits

0xcaac,	// (0x0003736a) scroll_pane_cp24

0xcaca,	// (0x00037388) list_text_info_pane_t1_ParamLimits

0xcaca,	// (0x00037388) list_text_info_pane_t1

0x5a97,	// (0x00030355) popup_fast_swap2_window_ParamLimits

0x5a97,	// (0x00030355) popup_fast_swap2_window

0xcafb,	// (0x000373b9) aid_size_cell_fast2

0x7ddc,	// (0x0003269a) bg_popup_window_pane_cp17

0xa0ae,	// (0x0003496c) heading_pane_cp2

0x83ce,	// (0x00032c8c) listscroll_fast2_pane

0xcb05,	// (0x000373c3) grid_fast2_pane

0xcb0f,	// (0x000373cd) listscroll_fast2_pane_g1

0xcb17,	// (0x000373d5) listscroll_fast2_pane_g2

0x0001,

0xfbed,	// (0x0003a4ab) listscroll_fast2_pane_g

0x88d2,	// (0x00033190) scroll_pane_cp26

0xcb21,	// (0x000373df) cell_fast2_pane_ParamLimits

0xcb21,	// (0x000373df) cell_fast2_pane

0xcb36,	// (0x000373f4) cell_fast2_pane_g1

0xcb3f,	// (0x000373fd) cell_fast2_pane_g2

0xcb48,	// (0x00037406) cell_fast2_pane_g3

0x0002,

0xfbf2,	// (0x0003a4b0) cell_fast2_pane_g

0x84c1,	// (0x00032d7f) grid_highlight_pane_cp9

0x5a5d,	// (0x0003031b) main_eswt_pane_ParamLimits

0x5a5d,	// (0x0003031b) main_eswt_pane

0xcac1,	// (0x0003737f) list_single_text_info_pane

0xcb50,	// (0x0003740e) eswt_ctrl_button_pane

0xcb50,	// (0x0003740e) eswt_ctrl_canvas_pane

0xcb58,	// (0x00037416) eswt_ctrl_combo_pane

0xcb50,	// (0x0003740e) eswt_ctrl_default_pane

0xcb50,	// (0x0003740e) eswt_ctrl_label_pane

0xcb60,	// (0x0003741e) eswt_ctrl_wait_pane

0xcb68,	// (0x00037426) eswt_shell_pane

0x7ddc,	// (0x0003269a) listscroll_eswt_app_pane

0xcb88,	// (0x00037446) popup_eswt_tasktip_window_ParamLimits

0xcb88,	// (0x00037446) popup_eswt_tasktip_window

0x9cb6,	// (0x00034574) bg_popup_window_pane_cp18

0xcb99,	// (0x00037457) eswt_control_pane_g1_ParamLimits

0xcb99,	// (0x00037457) eswt_control_pane_g1

0xcba6,	// (0x00037464) eswt_control_pane_g2_ParamLimits

0xcba6,	// (0x00037464) eswt_control_pane_g2

0xcbb3,	// (0x00037471) eswt_control_pane_g3_ParamLimits

0xcbb3,	// (0x00037471) eswt_control_pane_g3

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_ParamLimits

0xcbc0,	// (0x0003747e) eswt_control_pane_g4

0x0003,

0xfbf9,	// (0x0003a4b7) eswt_control_pane_g_ParamLimits

0xfbf9,	// (0x0003a4b7) eswt_control_pane_g

0x8765,	// (0x00033023) bg_button_pane_ParamLimits

0x8765,	// (0x00033023) bg_button_pane

0x84d6,	// (0x00032d94) common_borders_pane_copy2_ParamLimits

0x84d6,	// (0x00032d94) common_borders_pane_copy2

0xcbcd,	// (0x0003748b) control_button_pane_g1_ParamLimits

0xcbcd,	// (0x0003748b) control_button_pane_g1

0xcbd9,	// (0x00037497) control_button_pane_g2_ParamLimits

0xcbd9,	// (0x00037497) control_button_pane_g2

0xcbe5,	// (0x000374a3) control_button_pane_g3_ParamLimits

0xcbe5,	// (0x000374a3) control_button_pane_g3

0x0002,

0xfc02,	// (0x0003a4c0) control_button_pane_g_ParamLimits

0xfc02,	// (0x0003a4c0) control_button_pane_g

0xcbf9,	// (0x000374b7) control_button_pane_t1

0xcc07,	// (0x000374c5) control_button_pane_t2

0x0001,

0xfc09,	// (0x0003a4c7) control_button_pane_t

0x9c42,	// (0x00034500) bg_button_pane_g1

0x9c52,	// (0x00034510) bg_button_pane_g2

0x9c4a,	// (0x00034508) bg_button_pane_g3

0x9c62,	// (0x00034520) bg_button_pane_g4

0x9c5a,	// (0x00034518) bg_button_pane_g5

0x9c6a,	// (0x00034528) bg_button_pane_g6

0x9c72,	// (0x00034530) bg_button_pane_g7

0x9c82,	// (0x00034540) bg_button_pane_g8

0x9c7a,	// (0x00034538) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003a124) bg_button_pane_g

0xc207,	// (0x00036ac5) common_borders_pane_ParamLimits

0xc207,	// (0x00036ac5) common_borders_pane

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy1_ParamLimits

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy1

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy1_ParamLimits

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy1

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy1_ParamLimits

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy1

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy1_ParamLimits

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy1

0xc242,	// (0x00036b00) bg_eswt_ctrl_canvas_pane_g1

0xc207,	// (0x00036ac5) common_borders_pane_cp2_ParamLimits

0xc207,	// (0x00036ac5) common_borders_pane_cp2

0xc207,	// (0x00036ac5) common_borders_pane_cp3_ParamLimits

0xc207,	// (0x00036ac5) common_borders_pane_cp3

0xcc15,	// (0x000374d3) separator_horizontal_pane

0xcc1d,	// (0x000374db) separator_vertical_pane

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy2_ParamLimits

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy2

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy2_ParamLimits

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy2

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy2_ParamLimits

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy2

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy2_ParamLimits

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy2

0x7ddc,	// (0x0003269a) common_borders_pane_cp4

0xcc26,	// (0x000374e4) separator_horizontal_pane_g1

0xcc2f,	// (0x000374ed) separator_horizontal_pane_g2

0xcc38,	// (0x000374f6) separator_horizontal_pane_g3

0x0002,

0xfc0e,	// (0x0003a4cc) separator_horizontal_pane_g

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy3_ParamLimits

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy3

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy3_ParamLimits

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy3

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy3_ParamLimits

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy3

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy3_ParamLimits

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy3

0x7ddc,	// (0x0003269a) common_borders_pane_cp5

0xcc41,	// (0x000374ff) separator_vertical_pane_g1

0xcc4a,	// (0x00037508) separator_vertical_pane_g2

0xcc53,	// (0x00037511) separator_vertical_pane_g3

0x0002,

0xfc15,	// (0x0003a4d3) separator_vertical_pane_g

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy4_ParamLimits

0xcb99,	// (0x00037457) eswt_control_pane_g1_copy4

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy4_ParamLimits

0xcba6,	// (0x00037464) eswt_control_pane_g2_copy4

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy4_ParamLimits

0xcbb3,	// (0x00037471) eswt_control_pane_g3_copy4

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy4_ParamLimits

0xcbc0,	// (0x0003747e) eswt_control_pane_g4_copy4

0xcc5c,	// (0x0003751a) eswt_ctrl_combo_button_pane

0xcc64,	// (0x00037522) eswt_ctrl_input_pane

0xcc6c,	// (0x0003752a) popup_choice_list_window_cp70

0xcc74,	// (0x00037532) eswt_ctrl_input_pane_t1

0x7ddc,	// (0x0003269a) input_focus_pane_cp70

0xc207,	// (0x00036ac5) bg_button_pane_cp70_ParamLimits

0xc207,	// (0x00036ac5) bg_button_pane_cp70

0xcc82,	// (0x00037540) eswt_ctrl_combo_button_pane_g1

0xcc8a,	// (0x00037548) wait_bar_pane_cp70

0x9cb6,	// (0x00034574) bg_popup_window_pane_cp70_ParamLimits

0x9cb6,	// (0x00034574) bg_popup_window_pane_cp70

0xcc92,	// (0x00037550) popup_eswt_tasktip_window_t1

0xcca8,	// (0x00037566) wait_bar_pane_cp71_ParamLimits

0xcca8,	// (0x00037566) wait_bar_pane_cp71

0xccb4,	// (0x00037572) grid_eswt_app_pane

0x8bf0,	// (0x000334ae) scroll_pane_cp70

0xccbd,	// (0x0003757b) cell_eswt_app_pane_ParamLimits

0xccbd,	// (0x0003757b) cell_eswt_app_pane

0xcced,	// (0x000375ab) cell_eswt_app_pane_g1_ParamLimits

0xcced,	// (0x000375ab) cell_eswt_app_pane_g1

0xcd1c,	// (0x000375da) cell_eswt_app_pane_g2_ParamLimits

0xcd1c,	// (0x000375da) cell_eswt_app_pane_g2

0x0001,

0xfc1c,	// (0x0003a4da) cell_eswt_app_pane_g_ParamLimits

0xfc1c,	// (0x0003a4da) cell_eswt_app_pane_g

0xcd45,	// (0x00037603) cell_eswt_app_pane_t1_ParamLimits

0xcd45,	// (0x00037603) cell_eswt_app_pane_t1

0xcd77,	// (0x00037635) grid_highlight_pane_cp70_ParamLimits

0xcd77,	// (0x00037635) grid_highlight_pane_cp70

0x92cf,	// (0x00033b8d) set_content_pane_g1

0x96a5,	// (0x00033f63) status_small_volume_pane

0x6834,	// (0x000310f2) status_small_volume_pane_g1

0x683c,	// (0x000310fa) volume_small2_pane

0x6845,	// (0x00031103) volume_small2_pane_g1

0x684e,	// (0x0003110c) volume_small2_pane_g2

0x6857,	// (0x00031115) volume_small2_pane_g3

0x6860,	// (0x0003111e) volume_small2_pane_g4

0x6869,	// (0x00031127) volume_small2_pane_g5

0x6872,	// (0x00031130) volume_small2_pane_g6

0x687b,	// (0x00031139) volume_small2_pane_g7

0x6884,	// (0x00031142) volume_small2_pane_g8

0x688d,	// (0x0003114b) volume_small2_pane_g9

0x6896,	// (0x00031154) volume_small2_pane_g10

0x0009,

0xfc21,	// (0x0003a4df) volume_small2_pane_g

0xc614,	// (0x00036ed2) fep_vkb_top_text_pane_g1_ParamLimits

0xc62f,	// (0x00036eed) fep_vkb_top_text_pane_t1_ParamLimits

0xc889,	// (0x00037147) popup_preview_fixed_window_g3_ParamLimits

0xc889,	// (0x00037147) popup_preview_fixed_window_g3

0x5f46,	// (0x00030804) popup_toolbar_trans_pane

0xb013,	// (0x000358d1) aid_height_set_list_ParamLimits

0xb024,	// (0x000358e2) aid_size_parent_ParamLimits

0x971e,	// (0x00033fdc) list_highlight_pane_cp2_ParamLimits

0x92cf,	// (0x00033b8d) set_content_pane_g1_ParamLimits

0xb228,	// (0x00035ae6) list_single_image_pane_ParamLimits

0xb228,	// (0x00035ae6) list_single_image_pane

0xcd83,	// (0x00037641) aid_size_cell_image_ParamLimits

0xcd83,	// (0x00037641) aid_size_cell_image

0xcd90,	// (0x0003764e) grid_single_image_pane_ParamLimits

0xcd90,	// (0x0003764e) grid_single_image_pane

0xa020,	// (0x000348de) list_single_image_pane_g1_ParamLimits

0xa020,	// (0x000348de) list_single_image_pane_g1

0xcd9c,	// (0x0003765a) list_single_image_pane_g2_ParamLimits

0xcd9c,	// (0x0003765a) list_single_image_pane_g2

0x0001,

0xfc36,	// (0x0003a4f4) list_single_image_pane_g_ParamLimits

0xfc36,	// (0x0003a4f4) list_single_image_pane_g

0xcdb0,	// (0x0003766e) list_single_image_pane_t1_ParamLimits

0xcdb0,	// (0x0003766e) list_single_image_pane_t1

0xcdc6,	// (0x00037684) cell_image_list_pane_ParamLimits

0xcdc6,	// (0x00037684) cell_image_list_pane

0xcdda,	// (0x00037698) cell_image_list_pane_g1

0xcde3,	// (0x000376a1) cell_image_list_pane_g2

0x0001,

0xfc3b,	// (0x0003a4f9) cell_image_list_pane_g

0xcdec,	// (0x000376aa) aid_size_cell_tb_trans_pane

0x8765,	// (0x00033023) bg_tb_trans_pane

0xcdfe,	// (0x000376bc) grid_tb_trans_pane

0x9c42,	// (0x00034500) bg_tb_trans_pane_g1

0x9c52,	// (0x00034510) bg_tb_trans_pane_g2

0x9c4a,	// (0x00034508) bg_tb_trans_pane_g3

0x9c62,	// (0x00034520) bg_tb_trans_pane_g4

0x9c5a,	// (0x00034518) bg_tb_trans_pane_g5

0x9c82,	// (0x00034540) bg_tb_trans_pane_g6

0x9c7a,	// (0x00034538) bg_tb_trans_pane_g7

0x9c6a,	// (0x00034528) bg_tb_trans_pane_g8

0x9c72,	// (0x00034530) bg_tb_trans_pane_g9

0x0008,

0xfc40,	// (0x0003a4fe) bg_tb_trans_pane_g

0xce12,	// (0x000376d0) cell_toolbar_trans_pane_ParamLimits

0xce12,	// (0x000376d0) cell_toolbar_trans_pane

0xc242,	// (0x00036b00) cell_toolbar_trans_pane_g1

0xbe17,	// (0x000366d5) list_form2_midp_pane_t1

0xbe25,	// (0x000366e3) list_form2_midp_pane_t2

0x0001,

0xfadd,	// (0x0003a39b) list_form2_midp_pane_t

0xbe33,	// (0x000366f1) scroll_pane_cp51_ParamLimits

0xbfef,	// (0x000368ad) form2_midp_wait_pane_g1

0xbff8,	// (0x000368b6) form2_midp_wait_pane_g2

0xc001,	// (0x000368bf) form2_midp_wait_pane_g3

0x0002,

0xfaf2,	// (0x0003a3b0) form2_midp_wait_pane_g

0x7ed0,	// (0x0003278e) list_highlight_pane_cp21_ParamLimits

0xc04d,	// (0x0003690b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc05c,	// (0x0003691a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x75f9,	// (0x00031eb7) list_single_2graphic_im_pane_ParamLimits

0x75f9,	// (0x00031eb7) list_single_2graphic_im_pane

0xce38,	// (0x000376f6) list_single_2graphic_im_pane_g1_ParamLimits

0xce38,	// (0x000376f6) list_single_2graphic_im_pane_g1

0xce49,	// (0x00037707) list_single_2graphic_im_pane_g2_ParamLimits

0xce49,	// (0x00037707) list_single_2graphic_im_pane_g2

0xce55,	// (0x00037713) list_single_2graphic_im_pane_g3_ParamLimits

0xce55,	// (0x00037713) list_single_2graphic_im_pane_g3

0x0003,

0xfc53,	// (0x0003a511) list_single_2graphic_im_pane_g_ParamLimits

0xfc53,	// (0x0003a511) list_single_2graphic_im_pane_g

0xce75,	// (0x00037733) list_single_2graphic_im_pane_t1_ParamLimits

0xce75,	// (0x00037733) list_single_2graphic_im_pane_t1

0xc895,	// (0x00037153) list_single_graphic_2heading_pane_fp_ParamLimits

0xc895,	// (0x00037153) list_single_graphic_2heading_pane_fp

0x7a5c,	// (0x0003231a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7a5c,	// (0x0003231a) list_single_graphic_2heading_pane_fp_g1

0xc8aa,	// (0x00037168) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8aa,	// (0x00037168) list_single_graphic_2heading_pane_fp_g2

0x7a25,	// (0x000322e3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7a25,	// (0x000322e3) list_single_graphic_2heading_pane_fp_g3

0x7a31,	// (0x000322ef) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7a31,	// (0x000322ef) list_single_graphic_2heading_pane_fp_g4

0xc8b6,	// (0x00037174) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8b6,	// (0x00037174) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a438) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a438) list_single_graphic_2heading_pane_fp_g

0x7c35,	// (0x000324f3) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7c35,	// (0x000324f3) list_single_graphic_2heading_pane_fp_t1

0x7a94,	// (0x00032352) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7a94,	// (0x00032352) list_single_graphic_2heading_pane_fp_t2

0x7c4b,	// (0x00032509) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7c4b,	// (0x00032509) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5c,	// (0x0003a51a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5c,	// (0x0003a51a) list_single_graphic_2heading_pane_fp_t

0xc2da,	// (0x00036b98) fep_hwr_write_pane_g5_ParamLimits

0xc2da,	// (0x00036b98) fep_hwr_write_pane_g5

0xc2e6,	// (0x00036ba4) fep_hwr_write_pane_g6_ParamLimits

0xc2e6,	// (0x00036ba4) fep_hwr_write_pane_g6

0xcb68,	// (0x00037426) eswt_shell_pane_ParamLimits

0x9cb6,	// (0x00034574) bg_popup_window_pane_cp18_ParamLimits

0xaf6c,	// (0x0003582a) heading_pane_cp70

0xcc92,	// (0x00037550) popup_eswt_tasktip_window_t1_ParamLimits

0x97af,	// (0x0003406d) aid_touch_tab_arrow_left

0x97be,	// (0x0003407c) aid_touch_tab_arrow_right

0x7e18,	// (0x000326d6) title_pane_g3_ParamLimits

0x7e18,	// (0x000326d6) title_pane_g3

0x8724,	// (0x00032fe2) set_value_pane_g1

0x5f46,	// (0x00030804) popup_toolbar_trans_pane_ParamLimits

0xcdec,	// (0x000376aa) aid_size_cell_tb_trans_pane_ParamLimits

0x8765,	// (0x00033023) bg_tb_trans_pane_ParamLimits

0xcdfe,	// (0x000376bc) grid_tb_trans_pane_ParamLimits

0x8159,	// (0x00032a17) cont_note_pane_ParamLimits

0x8159,	// (0x00032a17) cont_note_pane

0x84d6,	// (0x00032d94) cont_snote2_single_text_pane_ParamLimits

0x84d6,	// (0x00032d94) cont_snote2_single_text_pane

0x84d6,	// (0x00032d94) cont_snote2_single_graphic_pane_ParamLimits

0x84d6,	// (0x00032d94) cont_snote2_single_graphic_pane

0xa2d5,	// (0x00034b93) cont_note_wait_pane_ParamLimits

0xa2d5,	// (0x00034b93) cont_note_wait_pane

0xa2d5,	// (0x00034b93) cont_note_image_pane_ParamLimits

0xa2d5,	// (0x00034b93) cont_note_image_pane

0xcea6,	// (0x00037764) popup_note2_window_g1_ParamLimits

0xcea6,	// (0x00037764) popup_note2_window_g1

0xced7,	// (0x00037795) popup_note2_window_t1_ParamLimits

0xced7,	// (0x00037795) popup_note2_window_t1

0xcf1c,	// (0x000377da) popup_note2_window_t2_ParamLimits

0xcf1c,	// (0x000377da) popup_note2_window_t2

0xcf61,	// (0x0003781f) popup_note2_window_t3_ParamLimits

0xcf61,	// (0x0003781f) popup_note2_window_t3

0xcfa6,	// (0x00037864) popup_note2_window_t4_ParamLimits

0xcfa6,	// (0x00037864) popup_note2_window_t4

0x81dd,	// (0x00032a9b) popup_note2_window_t5_ParamLimits

0x81dd,	// (0x00032a9b) popup_note2_window_t5

0x0004,

0xfc68,	// (0x0003a526) popup_note2_window_t_ParamLimits

0xfc68,	// (0x0003a526) popup_note2_window_t

0xcfd5,	// (0x00037893) popup_note2_image_window_g1_ParamLimits

0xcfd5,	// (0x00037893) popup_note2_image_window_g1

0xcfe1,	// (0x0003789f) popup_note2_image_window_g2_ParamLimits

0xcfe1,	// (0x0003789f) popup_note2_image_window_g2

0x0001,

0xfc73,	// (0x0003a531) popup_note2_image_window_g_ParamLimits

0xfc73,	// (0x0003a531) popup_note2_image_window_g

0xcff3,	// (0x000378b1) popup_note2_image_window_t1_ParamLimits

0xcff3,	// (0x000378b1) popup_note2_image_window_t1

0xd00b,	// (0x000378c9) popup_note2_image_window_t2_ParamLimits

0xd00b,	// (0x000378c9) popup_note2_image_window_t2

0xd023,	// (0x000378e1) popup_note2_image_window_t3_ParamLimits

0xd023,	// (0x000378e1) popup_note2_image_window_t3

0x0002,

0xfc78,	// (0x0003a536) popup_note2_image_window_t_ParamLimits

0xfc78,	// (0x0003a536) popup_note2_image_window_t

0xa2e3,	// (0x00034ba1) popup_note2_wait_window_g1_ParamLimits

0xa2e3,	// (0x00034ba1) popup_note2_wait_window_g1

0xd03f,	// (0x000378fd) popup_note2_wait_window_g2_ParamLimits

0xd03f,	// (0x000378fd) popup_note2_wait_window_g2

0xa2fb,	// (0x00034bb9) popup_note2_wait_window_g3_ParamLimits

0xa2fb,	// (0x00034bb9) popup_note2_wait_window_g3

0x0002,

0xfc7f,	// (0x0003a53d) popup_note2_wait_window_g_ParamLimits

0xfc7f,	// (0x0003a53d) popup_note2_wait_window_g

0xd04b,	// (0x00037909) popup_note2_wait_window_t1_ParamLimits

0xd04b,	// (0x00037909) popup_note2_wait_window_t1

0xd069,	// (0x00037927) popup_note2_wait_window_t2_ParamLimits

0xd069,	// (0x00037927) popup_note2_wait_window_t2

0xd087,	// (0x00037945) popup_note2_wait_window_t3_ParamLimits

0xd087,	// (0x00037945) popup_note2_wait_window_t3

0xd099,	// (0x00037957) popup_note2_wait_window_t4_ParamLimits

0xd099,	// (0x00037957) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x0003a544) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x0003a544) popup_note2_wait_window_t

0xd0ab,	// (0x00037969) wait_bar2_pane_ParamLimits

0xd0ab,	// (0x00037969) wait_bar2_pane

0xd0c3,	// (0x00037981) popup_snote2_single_text_window_g1_ParamLimits

0xd0c3,	// (0x00037981) popup_snote2_single_text_window_g1

0xd0eb,	// (0x000379a9) popup_snote2_single_text_window_t1_ParamLimits

0xd0eb,	// (0x000379a9) popup_snote2_single_text_window_t1

0xd137,	// (0x000379f5) popup_snote2_single_text_window_t2_ParamLimits

0xd137,	// (0x000379f5) popup_snote2_single_text_window_t2

0xd183,	// (0x00037a41) popup_snote2_single_text_window_t3_ParamLimits

0xd183,	// (0x00037a41) popup_snote2_single_text_window_t3

0xd1c4,	// (0x00037a82) popup_snote2_single_text_window_t4_ParamLimits

0xd1c4,	// (0x00037a82) popup_snote2_single_text_window_t4

0xd1fa,	// (0x00037ab8) popup_snote2_single_text_window_t5_ParamLimits

0xd1fa,	// (0x00037ab8) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x0003a54d) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x0003a54d) popup_snote2_single_text_window_t

0xd225,	// (0x00037ae3) popup_snote2_single_graphic_window_g1_ParamLimits

0xd225,	// (0x00037ae3) popup_snote2_single_graphic_window_g1

0xd24d,	// (0x00037b0b) popup_snote2_single_graphic_window_g2_ParamLimits

0xd24d,	// (0x00037b0b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x0003a558) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x0003a558) popup_snote2_single_graphic_window_g

0xd275,	// (0x00037b33) popup_snote2_single_graphic_window_t1_ParamLimits

0xd275,	// (0x00037b33) popup_snote2_single_graphic_window_t1

0xd2c1,	// (0x00037b7f) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2c1,	// (0x00037b7f) popup_snote2_single_graphic_window_t2

0xd183,	// (0x00037a41) popup_snote2_single_graphic_window_t3_ParamLimits

0xd183,	// (0x00037a41) popup_snote2_single_graphic_window_t3

0xd1c4,	// (0x00037a82) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1c4,	// (0x00037a82) popup_snote2_single_graphic_window_t4

0xd1fa,	// (0x00037ab8) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1fa,	// (0x00037ab8) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x0003a55d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x0003a55d) popup_snote2_single_graphic_window_t

0xbcf4,	// (0x000365b2) clock_nsta_pane_cp2_t1

0xbcf4,	// (0x000365b2) clock_nsta_pane_cp2_t2

0x0001,

0xfab3,	// (0x0003a371) clock_nsta_pane_cp2_t

0x524a,	// (0x0002fb08) form_field_data_wide_pane_g1_ParamLimits

0x8773,	// (0x00033031) form_field_data_wide_pane_g2_ParamLimits

0x8773,	// (0x00033031) form_field_data_wide_pane_g2

0x877f,	// (0x0003303d) form_field_data_wide_pane_g3_ParamLimits

0x877f,	// (0x0003303d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00039f39) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00039f39) form_field_data_wide_pane_g

0xbbf6,	// (0x000364b4) grid_touch_3_pane_ParamLimits

0xbbf6,	// (0x000364b4) grid_touch_3_pane

0xd30d,	// (0x00037bcb) cell_touch_3_pane_ParamLimits

0xd30d,	// (0x00037bcb) cell_touch_3_pane

0xc242,	// (0x00036b00) cell_touch_3_pane_g1

0xc242,	// (0x00036b00) cell_touch_3_pane_g2

0x0001,

0xfb38,	// (0x0003a3f6) cell_touch_3_pane_g

0x8235,	// (0x00032af3) cont_query_data_pane

0x823d,	// (0x00032afb) cont_query_data_pane_cp1

0xd33b,	// (0x00037bf9) button_value_adjust_pane_cp7

0xd343,	// (0x00037c01) query_popup_pane_cp3

0x8ed7,	// (0x00033795) bg_popup_sub_pane_cp22_ParamLimits

0x560e,	// (0x0002fecc) navi_navi_volume_pane_cp2

0x5629,	// (0x0002fee7) popup_side_volume_key_window_g2

0x5638,	// (0x0002fef6) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00039fcf) popup_side_volume_key_window_g

0x5655,	// (0x0002ff13) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00039fd6) popup_side_volume_key_window_t

0x918e,	// (0x00033a4c) popup_side_volume_key_window_ParamLimits

0x4eab,	// (0x0002f769) list_double_graphic_pane_g4_ParamLimits

0x4eab,	// (0x0002f769) list_double_graphic_pane_g4

0x7638,	// (0x00031ef6) list_single_2heading_msg_pane_ParamLimits

0x7638,	// (0x00031ef6) list_single_2heading_msg_pane

0x7c6b,	// (0x00032529) list_single_2heading_msg_pane_g1_ParamLimits

0x7c6b,	// (0x00032529) list_single_2heading_msg_pane_g1

0x4cda,	// (0x0002f598) list_single_2heading_msg_pane_g2_ParamLimits

0x4cda,	// (0x0002f598) list_single_2heading_msg_pane_g2

0x7c77,	// (0x00032535) list_single_2heading_msg_pane_g3_ParamLimits

0x7c77,	// (0x00032535) list_single_2heading_msg_pane_g3

0x7c83,	// (0x00032541) list_single_2heading_msg_pane_g4_ParamLimits

0x7c83,	// (0x00032541) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x0003a568) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x0003a568) list_single_2heading_msg_pane_g

0x7c9b,	// (0x00032559) list_single_2heading_msg_pane_t1_ParamLimits

0x7c9b,	// (0x00032559) list_single_2heading_msg_pane_t1

0x7cc3,	// (0x00032581) list_single_2heading_msg_pane_t2_ParamLimits

0x7cc3,	// (0x00032581) list_single_2heading_msg_pane_t2

0x7cf7,	// (0x000325b5) list_single_2heading_msg_pane_t3_ParamLimits

0x7cf7,	// (0x000325b5) list_single_2heading_msg_pane_t3

0x7d30,	// (0x000325ee) list_single_2heading_msg_pane_t4_ParamLimits

0x7d30,	// (0x000325ee) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x0003a571) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x0003a571) list_single_2heading_msg_pane_t

0x7e24,	// (0x000326e2) title_pane_g4_ParamLimits

0x7e24,	// (0x000326e2) title_pane_g4

0x541d,	// (0x0002fcdb) title_pane_stacon_g3_ParamLimits

0x541d,	// (0x0002fcdb) title_pane_stacon_g3

0xce69,	// (0x00037727) list_single_2graphic_im_pane_g4_ParamLimits

0xce69,	// (0x00037727) list_single_2graphic_im_pane_g4

0xad34,	// (0x000355f2) popup_side_volume_key_window_cp

0xb544,	// (0x00035e02) main_idle_act2_pane_t1

0x6038,	// (0x000308f6) toolbar_button_pane_g10

0x86ce,	// (0x00032f8c) popup_toolbar_window_cp1

0xbce5,	// (0x000365a3) clock_nsta_pane_cp_t1

0xbce5,	// (0x000365a3) clock_nsta_pane_cp_t2

0x0001,

0xfaae,	// (0x0003a36c) clock_nsta_pane_cp_t

0x560e,	// (0x0002fecc) navi_navi_volume_pane_cp2_ParamLimits

0x561d,	// (0x0002fedb) popup_side_volume_key_window_g1_ParamLimits

0x5629,	// (0x0002fee7) popup_side_volume_key_window_g2_ParamLimits

0x5638,	// (0x0002fef6) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00039fcf) popup_side_volume_key_window_g_ParamLimits

0x64a0,	// (0x00030d5e) fep_hwr_aid_pane

0x6547,	// (0x00030e05) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2aa,	// (0x00036b68) fep_hwr_top_pane_g1_ParamLimits

0xc2bc,	// (0x00036b7a) fep_hwr_top_pane_g2_ParamLimits

0x6567,	// (0x00030e25) fep_hwr_top_pane_g3_ParamLimits

0xfb03,	// (0x0003a3c1) fep_hwr_top_pane_g_ParamLimits

0x657c,	// (0x00030e3a) fep_hwr_top_text_pane_ParamLimits

0xaaf7,	// (0x000353b5) aid_touch_tab_arrow_arrow_2

0xab00,	// (0x000353be) aid_touch_tab_arrow_left_2

0x64b4,	// (0x00030d72) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x64eb,	// (0x00030da9) fep_hwr_prediction_pane

0xc41c,	// (0x00036cda) fep_vkb_prediction_pane

0xc520,	// (0x00036dde) fep_vkb_side_pane_g3_ParamLimits

0xc520,	// (0x00036dde) fep_vkb_side_pane_g3

0x66f7,	// (0x00030fb5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6763,	// (0x00031021) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6770,	// (0x0003102e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0003a470) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x689f,	// (0x0003115d) fep_hwr_prediction_pane_g1

0x68a9,	// (0x00031167) fep_hwr_prediction_pane_g2

0x68b1,	// (0x0003116f) fep_hwr_prediction_pane_g3

0x68b9,	// (0x00031177) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0003a57a) fep_hwr_prediction_pane_g

0xd368,	// (0x00037c26) fep_vkb_prediction_pane_g1

0xd372,	// (0x00037c30) fep_vkb_prediction_pane_g2

0xd37a,	// (0x00037c38) fep_vkb_prediction_pane_g3

0xd382,	// (0x00037c40) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0003a583) fep_vkb_prediction_pane_g

0x6320,	// (0x00030bde) slider_set_pane_g3

0x6334,	// (0x00030bf2) slider_set_pane_g4

0x634c,	// (0x00030c0a) slider_set_pane_g5

0x6320,	// (0x00030bde) slider_set_pane_g6

0x6362,	// (0x00030c20) slider_set_pane_g7

0xb189,	// (0x00035a47) slider_form_pane_g3

0xb192,	// (0x00035a50) slider_form_pane_g4

0xb19a,	// (0x00035a58) slider_form_pane_g5

0xb189,	// (0x00035a47) slider_form_pane_g6

0xb1a2,	// (0x00035a60) slider_form_pane_g7

0xb7ee,	// (0x000360ac) slider_set_pane_vc_g3

0xb7f7,	// (0x000360b5) slider_set_pane_vc_g4

0xb800,	// (0x000360be) slider_set_pane_vc_g5

0xb7ee,	// (0x000360ac) slider_set_pane_vc_g6

0xb809,	// (0x000360c7) slider_set_pane_vc_g7

0xb9c9,	// (0x00036287) slider_form_pane_vc_g1

0xb9d2,	// (0x00036290) slider_form_pane_vc_g2

0xb9db,	// (0x00036299) slider_form_pane_vc_g3

0xb9c9,	// (0x00036287) slider_form_pane_vc_g4

0xb9e4,	// (0x000362a2) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0003a33e) slider_form_pane_vc_g

0x49c9,	// (0x0002f287) main_idle_act3_pane

0xd38a,	// (0x00037c48) ai3_links_pane

0xd393,	// (0x00037c51) popup_ai3_data_window_ParamLimits

0xd393,	// (0x00037c51) popup_ai3_data_window

0x7ddc,	// (0x0003269a) grid_ai3_links_pane

0xd3ad,	// (0x00037c6b) cell_ai3_links_pane_ParamLimits

0xd3ad,	// (0x00037c6b) cell_ai3_links_pane

0xd3c5,	// (0x00037c83) bg_popup_sub_pane_cp11

0xd3d2,	// (0x00037c90) cell_ai3_links_pane_g1

0x7ddc,	// (0x0003269a) bg_popup_sub_pane_cp12

0xd3f7,	// (0x00037cb5) heading_ai3_data_pane

0xd3ff,	// (0x00037cbd) list_ai3_gene_pane

0xd40b,	// (0x00037cc9) popup_ai3_data_window_g1

0xd413,	// (0x00037cd1) heading_ai3_data_pane_g1

0xd41b,	// (0x00037cd9) heading_ai3_data_pane_t1

0xd429,	// (0x00037ce7) list_double_ai3_gene_pane_ParamLimits

0xd429,	// (0x00037ce7) list_double_ai3_gene_pane

0xd436,	// (0x00037cf4) list_single_ai3_gene_pane_ParamLimits

0xd436,	// (0x00037cf4) list_single_ai3_gene_pane

0xc207,	// (0x00036ac5) list_highlight_pane_cp7_ParamLimits

0xc207,	// (0x00036ac5) list_highlight_pane_cp7

0xd443,	// (0x00037d01) list_single_a13_gene_pane_t1_ParamLimits

0xd443,	// (0x00037d01) list_single_a13_gene_pane_t1

0xd45a,	// (0x00037d18) list_single_ai3_gene_pane_g1

0xd463,	// (0x00037d21) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x0003a58c) list_single_ai3_gene_pane_g

0xd46b,	// (0x00037d29) list_double_ai3_gene_pane_g1_ParamLimits

0xd46b,	// (0x00037d29) list_double_ai3_gene_pane_g1

0xd477,	// (0x00037d35) list_double_ai3_gene_pane_t1_ParamLimits

0xd477,	// (0x00037d35) list_double_ai3_gene_pane_t1

0xd493,	// (0x00037d51) list_double_ai3_gene_pane_t2_ParamLimits

0xd493,	// (0x00037d51) list_double_ai3_gene_pane_t2

0xd4a9,	// (0x00037d67) list_double_ai3_gene_pane_t3_ParamLimits

0xd4a9,	// (0x00037d67) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x0003a591) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x0003a591) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c61,	// (0x0003251f) aid_size_min_col_2

0xd354,	// (0x00037c12) aid_size_min_msg_ParamLimits

0xd354,	// (0x00037c12) aid_size_min_msg

0xc620,	// (0x00036ede) fep_vkb_top_text_pane_g2_ParamLimits

0xc620,	// (0x00036ede) fep_vkb_top_text_pane_g2

0x0001,

0xfb33,	// (0x0003a3f1) fep_vkb_top_text_pane_g_ParamLimits

0xfb33,	// (0x0003a3f1) fep_vkb_top_text_pane_g

0x49c9,	// (0x0002f287) main_hc_apps_shell_pane

0xd4c6,	// (0x00037d84) grid_hc_apps_pane_ParamLimits

0xd4c6,	// (0x00037d84) grid_hc_apps_pane

0xd4d5,	// (0x00037d93) list_hc_apps_pane

0xd4dd,	// (0x00037d9b) scroll_pane_cp37_ParamLimits

0xd4dd,	// (0x00037d9b) scroll_pane_cp37

0xd4e9,	// (0x00037da7) cell_hc_apps_pane_ParamLimits

0xd4e9,	// (0x00037da7) cell_hc_apps_pane

0xd597,	// (0x00037e55) cell_hc_apps_pane_g1_ParamLimits

0xd597,	// (0x00037e55) cell_hc_apps_pane_g1

0xd5c8,	// (0x00037e86) cell_hc_apps_pane_g2_ParamLimits

0xd5c8,	// (0x00037e86) cell_hc_apps_pane_g2

0xd5e4,	// (0x00037ea2) cell_hc_apps_pane_g3_ParamLimits

0xd5e4,	// (0x00037ea2) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x0003a598) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x0003a598) cell_hc_apps_pane_g

0xd606,	// (0x00037ec4) cell_hc_apps_pane_t1_ParamLimits

0xd606,	// (0x00037ec4) cell_hc_apps_pane_t1

0x8159,	// (0x00032a17) grid_highlight_pane_cp10_ParamLimits

0x8159,	// (0x00032a17) grid_highlight_pane_cp10

0xd646,	// (0x00037f04) list_single_hc_apps_pane_ParamLimits

0xd646,	// (0x00037f04) list_single_hc_apps_pane

0xd6a2,	// (0x00037f60) list_single_hc_apps_pane_g1

0x7d55,	// (0x00032613) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x0003a59f) list_single_hc_apps_pane_g

0x7d6e,	// (0x0003262c) list_single_hc_apps_pane_g2_copy1

0x7d8a,	// (0x00032648) list_single_hc_apps_pane_t1

0x7ed0,	// (0x0003278e) bg_set_opt_pane_cp_ParamLimits

0x4c2a,	// (0x0002f4e8) setting_slider_pane_t1_ParamLimits

0x4c43,	// (0x0002f501) setting_slider_pane_t2_ParamLimits

0x4c5d,	// (0x0002f51b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00039e1c) setting_slider_pane_t_ParamLimits

0x4c75,	// (0x0002f533) slider_set_pane_ParamLimits

0x5941,	// (0x000301ff) control_pane_g5_ParamLimits

0x5941,	// (0x000301ff) control_pane_g5

0xafd8,	// (0x00035896) slider_set_pane_g1_ParamLimits

0x6314,	// (0x00030bd2) slider_set_pane_g2_ParamLimits

0x6320,	// (0x00030bde) slider_set_pane_g3_ParamLimits

0x6334,	// (0x00030bf2) slider_set_pane_g4_ParamLimits

0x634c,	// (0x00030c0a) slider_set_pane_g5_ParamLimits

0x6320,	// (0x00030bde) slider_set_pane_g6_ParamLimits

0x6362,	// (0x00030c20) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a222) slider_set_pane_g_ParamLimits

0x927a,	// (0x00033b38) navi_icon_text_pane_ParamLimits

0x9770,	// (0x0003402e) aid_fill_nsta_2_ParamLimits

0x97af,	// (0x0003406d) aid_touch_tab_arrow_left_ParamLimits

0x97be,	// (0x0003407c) aid_touch_tab_arrow_right_ParamLimits

0x982b,	// (0x000340e9) clock_nsta_pane_ParamLimits

0xaad9,	// (0x00035397) navi_icon_pane_g1_ParamLimits

0xaae5,	// (0x000353a3) navi_text_pane_t1_ParamLimits

0xbdf1,	// (0x000366af) navi_icon_text_pane_g1_ParamLimits

0xbdfd,	// (0x000366bb) navi_icon_text_pane_t1_ParamLimits

0xd6a2,	// (0x00037f60) list_single_hc_apps_pane_g1_ParamLimits

0x7d55,	// (0x00032613) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x0003a59f) list_single_hc_apps_pane_g_ParamLimits

0x7d6e,	// (0x0003262c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7d8a,	// (0x00032648) list_single_hc_apps_pane_t1_ParamLimits

0x4b34,	// (0x0002f3f2) popup_toolbar2_fixed_window_ParamLimits

0x4b34,	// (0x0002f3f2) popup_toolbar2_fixed_window

0x5f3c,	// (0x000307fa) popup_toolbar2_float_window

0x7ddc,	// (0x0003269a) bg_popup_sub_pane_cp27

0xd6bb,	// (0x00037f79) grid_toolbar2_float_pane

0x7ddc,	// (0x0003269a) bg_popup_sub_pane_cp26

0xd6bb,	// (0x00037f79) grid_toolbar2_fixed_pane

0xd6c3,	// (0x00037f81) cell_toolbar2_fixed_pane_ParamLimits

0xd6c3,	// (0x00037f81) cell_toolbar2_fixed_pane

0xd6d3,	// (0x00037f91) cell_toolbar2_fixed_pane_g1

0xd6dc,	// (0x00037f9a) toolbar2_fixed_button_pane

0x9c42,	// (0x00034500) toolbar2_fixed_button_pane_g1

0x9c52,	// (0x00034510) toolbar2_fixed_button_pane_g2

0x9c4a,	// (0x00034508) toolbar2_fixed_button_pane_g3

0x9c62,	// (0x00034520) toolbar2_fixed_button_pane_g4

0x9c5a,	// (0x00034518) toolbar2_fixed_button_pane_g5

0x9c6a,	// (0x00034528) toolbar2_fixed_button_pane_g6

0x9c72,	// (0x00034530) toolbar2_fixed_button_pane_g7

0x9c82,	// (0x00034540) toolbar2_fixed_button_pane_g8

0x9c7a,	// (0x00034538) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003a124) toolbar2_fixed_button_pane_g

0xd6e4,	// (0x00037fa2) cell_toolbar2_float_pane_ParamLimits

0xd6e4,	// (0x00037fa2) cell_toolbar2_float_pane

0xd6f5,	// (0x00037fb3) cell_toolbar2_float_pane_g1

0xd6dc,	// (0x00037f9a) toolbar2_fixed_button_pane_cp

0xc37c,	// (0x00036c3a) fep_vkb_accented_list_pane_ParamLimits

0xc37c,	// (0x00036c3a) fep_vkb_accented_list_pane

0x66d7,	// (0x00030f95) bg_popup_fep_shadow_pane_g9

0x93fa,	// (0x00033cb8) bg_popup_fep_shadow_pane_cp3

0x88b9,	// (0x00033177) list_accented_list_pane

0xd6fe,	// (0x00037fbc) list_single_accented_list_pane_ParamLimits

0xd6fe,	// (0x00037fbc) list_single_accented_list_pane

0x93fa,	// (0x00033cb8) list_highlight_pane_cp10

0xd70f,	// (0x00037fcd) list_single_accented_list_pane_t1

0x5e8c,	// (0x0003074a) popup_slider_window_ParamLimits

0x5e8c,	// (0x0003074a) popup_slider_window

0xd34b,	// (0x00037c09) aid_indentation_list_msg

0xd7d3,	// (0x00038091) bg_popup_window_pane_cp19

0xd83b,	// (0x000380f9) popup_slider_window_g1

0xd857,	// (0x00038115) popup_slider_window_g2

0xd873,	// (0x00038131) popup_slider_window_g3

0x0005,

0xfce6,	// (0x0003a5a4) popup_slider_window_g

0xd8d9,	// (0x00038197) popup_slider_window_t1

0xd94d,	// (0x0003820b) small_volume_slider_vertical_pane

0xc242,	// (0x00036b00) small_volume_slider_vertical_pane_g1

0xc242,	// (0x00036b00) small_volume_slider_vertical_pane_g2

0xd969,	// (0x00038227) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x0003a5b6) small_volume_slider_vertical_pane_g

0x48ec,	// (0x0002f1aa) area_side_right_pane_ParamLimits

0x48ec,	// (0x0002f1aa) area_side_right_pane

0x68c1,	// (0x0003117f) aid_size_side_button_ParamLimits

0x68c1,	// (0x0003117f) aid_size_side_button

0x68d5,	// (0x00031193) grid_sctrl_middle_pane_ParamLimits

0x68d5,	// (0x00031193) grid_sctrl_middle_pane

0x68f4,	// (0x000311b2) sctrl_sk_bottom_pane

0x6905,	// (0x000311c3) sctrl_sk_top_pane

0x6917,	// (0x000311d5) aid_touch_sctrl_top

0x6924,	// (0x000311e2) bg_sctrl_sk_pane_ParamLimits

0x6924,	// (0x000311e2) bg_sctrl_sk_pane

0x6932,	// (0x000311f0) sctrl_sk_top_pane_g1

0x693f,	// (0x000311fd) sctrl_sk_top_pane_t1

0x6917,	// (0x000311d5) aid_touch_sctrl_bottom

0x6924,	// (0x000311e2) bg_sctrl_sk_pane_cp_ParamLimits

0x6924,	// (0x000311e2) bg_sctrl_sk_pane_cp

0x695a,	// (0x00031218) sctrl_sk_bottom_pane_g1

0x693f,	// (0x000311fd) sctrl_sk_bottom_pane_t1

0x6963,	// (0x00031221) cell_sctrl_middle_pane_ParamLimits

0x6963,	// (0x00031221) cell_sctrl_middle_pane

0x697e,	// (0x0003123c) aid_touch_sctrl_middle_ParamLimits

0x697e,	// (0x0003123c) aid_touch_sctrl_middle

0x6990,	// (0x0003124e) bg_sctrl_middle_pane_ParamLimits

0x6990,	// (0x0003124e) bg_sctrl_middle_pane

0x66f7,	// (0x00030fb5) cell_sctrl_middle_pane_g1_ParamLimits

0x66f7,	// (0x00030fb5) cell_sctrl_middle_pane_g1

0x699e,	// (0x0003125c) cell_sctrl_middle_pane_g2_ParamLimits

0x699e,	// (0x0003125c) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x0003a5c2) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x0003a5c2) cell_sctrl_middle_pane_g

0x9c42,	// (0x00034500) bg_sctrl_middle_pane_g1

0x9c4a,	// (0x00034508) bg_sctrl_middle_pane_g2

0x9c52,	// (0x00034510) bg_sctrl_middle_pane_g3

0x9c5a,	// (0x00034518) bg_sctrl_middle_pane_g4

0x9c62,	// (0x00034520) bg_sctrl_middle_pane_g5

0x9c6a,	// (0x00034528) bg_sctrl_middle_pane_g6

0x9c72,	// (0x00034530) bg_sctrl_middle_pane_g7

0x9c7a,	// (0x00034538) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x0003a5c7) bg_sctrl_middle_pane_g

0x9c82,	// (0x00034540) bg_sctrl_middle_pane_g8_copy1

0x9c42,	// (0x00034500) bg_sctrl_sk_pane_g1

0x9c52,	// (0x00034510) bg_sctrl_sk_pane_g2

0x9c4a,	// (0x00034508) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003a124) bg_sctrl_sk_pane_g

0x8694,	// (0x00032f52) aid_size_touch_scroll_bar

0x9c62,	// (0x00034520) bg_sctrl_sk_pane_g4

0x9c5a,	// (0x00034518) bg_sctrl_sk_pane_g5

0x9c6a,	// (0x00034528) bg_sctrl_sk_pane_g6

0x9c72,	// (0x00034530) bg_sctrl_sk_pane_g7

0x9c82,	// (0x00034540) bg_sctrl_sk_pane_g8

0x9c7a,	// (0x00034538) bg_sctrl_sk_pane_g9

0x5af5,	// (0x000303b3) popup_fep_china_hwr2_fs_candidate_window

0x5aff,	// (0x000303bd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5aff,	// (0x000303bd) popup_fep_china_hwr2_fs_control_window

0x66f7,	// (0x00030fb5) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x0003a5bd) sctrl_sk_top_pane_g

0xd972,	// (0x00038230) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd972,	// (0x00038230) aid_fep_china_hwr2_fs_cell

0xd984,	// (0x00038242) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd984,	// (0x00038242) bg_popup_fep_shadow_pane_cp4

0xd99b,	// (0x00038259) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd99b,	// (0x00038259) bg_popup_fep_shadow_pane_cp5

0xd9ad,	// (0x0003826b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ad,	// (0x0003826b) popup_fep_china_hwr2_fs_control_bar_grid

0xd9bd,	// (0x0003827b) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9c5,	// (0x00038283) aid_fep_china_hwr2_fs_candi_cell

0x7ddc,	// (0x0003269a) bg_popup_fep_shadow_pane_cp6

0xd9cf,	// (0x0003828d) popup_fep_china_hwr2_fs_candidate_grid

0xd9d9,	// (0x00038297) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9d9,	// (0x00038297) cell_fep_china_hwr2_fs_funtion_grid

0xc242,	// (0x00036b00) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9f1,	// (0x000382af) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9f1,	// (0x000382af) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9ff,	// (0x000382bd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9ff,	// (0x000382bd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x0003a5d8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x0003a5d8) cell_fep_china_hwr2_fs_funtion_grid_g

0xda15,	// (0x000382d3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda15,	// (0x000382d3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda2a,	// (0x000382e8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda2a,	// (0x000382e8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x0003a5dd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x0003a5dd) cell_fep_china_hwr2_fs_funtion_grid_t

0xda46,	// (0x00038304) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda4e,	// (0x0003830c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda56,	// (0x00038314) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x0003a5e2) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda5e,	// (0x0003831c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda5e,	// (0x0003831c) cell_fep_china_hwr2_fs_candidate_grid

0xda77,	// (0x00038335) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda7f,	// (0x0003833d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc242,	// (0x00036b00) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc242,	// (0x00036b00) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb38,	// (0x0003a3f6) cell_fep_china_hwr2_fs_candidate_grid_g

0xda87,	// (0x00038345) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9838,	// (0x000340f6) clock_nsta_pane_cp_24_ParamLimits

0x9838,	// (0x000340f6) clock_nsta_pane_cp_24

0x98b6,	// (0x00034174) indicator_nsta_pane_cp_24_ParamLimits

0x98b6,	// (0x00034174) indicator_nsta_pane_cp_24

0xa955,	// (0x00035213) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003a189) heading_pane_g

0xb38d,	// (0x00035c4b) grid_sct_catagory_button_pane

0xb3bd,	// (0x00035c7b) scroll_pane_cp5_ParamLimits

0xbe3f,	// (0x000366fd) button_value_adjust_pane_cp5_ParamLimits

0xbe3f,	// (0x000366fd) button_value_adjust_pane_cp5

0xbf1e,	// (0x000367dc) form2_midp_time_pane_ParamLimits

0xda95,	// (0x00038353) cell_sct_catagory_button_pane_ParamLimits

0xda95,	// (0x00038353) cell_sct_catagory_button_pane

0xc207,	// (0x00036ac5) bg_button_pane_cp01_ParamLimits

0xc207,	// (0x00036ac5) bg_button_pane_cp01

0xc242,	// (0x00036b00) cell_sct_catagory_button_pane_g1

0x5ecb,	// (0x00030789) popup_tb_extension_window

0xdaa7,	// (0x00038365) aid_size_cell_ext_ParamLimits

0xdaa7,	// (0x00038365) aid_size_cell_ext

0x8159,	// (0x00032a17) bg_tb_trans_pane_cp1_ParamLimits

0x8159,	// (0x00032a17) bg_tb_trans_pane_cp1

0xdac7,	// (0x00038385) grid_tb_ext_pane_ParamLimits

0xdac7,	// (0x00038385) grid_tb_ext_pane

0xdaf5,	// (0x000383b3) cell_tb_ext_pane_ParamLimits

0xdaf5,	// (0x000383b3) cell_tb_ext_pane

0xdb0c,	// (0x000383ca) cell_tb_ext_pane_g1_ParamLimits

0xdb0c,	// (0x000383ca) cell_tb_ext_pane_g1

0xdb29,	// (0x000383e7) cell_tb_ext_pane_t1

0x8159,	// (0x00032a17) list_highlight_pane_cp11_ParamLimits

0x8159,	// (0x00032a17) list_highlight_pane_cp11

0x4b53,	// (0x0002f411) popup_uni_indicator_window_ParamLimits

0x4b53,	// (0x0002f411) popup_uni_indicator_window

0x8765,	// (0x00033023) bg_popup_sub_pane_cp14

0xdb44,	// (0x00038402) list_uniindi_pane

0xdb50,	// (0x0003840e) uniindi_top_pane

0x8159,	// (0x00032a17) bg_uniindi_top_pane

0xdb6f,	// (0x0003842d) uniindi_top_pane_g1

0xdb85,	// (0x00038443) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x0003a5e9) uniindi_top_pane_g

0xdbaf,	// (0x0003846d) uniindi_top_pane_t1

0xdbd9,	// (0x00038497) list_single_uniindi_pane_ParamLimits

0xdbd9,	// (0x00038497) list_single_uniindi_pane

0xc242,	// (0x00036b00) bg_uniindi_top_pane_g1

0xdbec,	// (0x000384aa) list_single_uniindi_pane_g1

0xdbff,	// (0x000384bd) list_single_uniindi_pane_t1

0x49c9,	// (0x0002f287) control_bg_pane

0xdc24,	// (0x000384e2) bg_sctrl_sk_pane_cp1

0xdc2d,	// (0x000384eb) bg_sctrl_sk_pane_cp2

0xdc36,	// (0x000384f4) control_bg_pane_g1

0xdc3f,	// (0x000384fd) control_bg_pane_g2

0x0001,

0xfd34,	// (0x0003a5f2) control_bg_pane_g

0xbc99,	// (0x00036557) cell_indicator_nsta_pane_g1_ParamLimits

0xbca7,	// (0x00036565) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9c,	// (0x0003a35a) cell_indicator_nsta_pane_g_ParamLimits

0x7a12,	// (0x000322d0) form2_midp_time_pane_t1_ParamLimits

0x5a5d,	// (0x0003031b) main_idle_act4_pane_ParamLimits

0x5a5d,	// (0x0003031b) main_idle_act4_pane

0x5ecb,	// (0x00030789) popup_tb_extension_window_ParamLimits

0xdae5,	// (0x000383a3) tb_ext_find_pane_ParamLimits

0xdae5,	// (0x000383a3) tb_ext_find_pane

0xdc48,	// (0x00038506) ai_gene_pane_1_cp1

0x9541,	// (0x00033dff) ai_gene_pane_2_cp1

0xdc50,	// (0x0003850e) list_single_idle_plugin_calendar_pane

0xdc59,	// (0x00038517) list_single_idle_plugin_notification_pane

0xdc62,	// (0x00038520) list_single_idle_plugin_player_pane

0xdc6b,	// (0x00038529) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc6b,	// (0x00038529) list_single_idle_plugin_shortcut_pane

0xdc8d,	// (0x0003854b) main_idle_act4_pane_t1

0xdc9f,	// (0x0003855d) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x0003a5f7) main_idle_act4_pane_t

0xdcb1,	// (0x0003856f) middle_sk_idle_act4_pane_ParamLimits

0xdcb1,	// (0x0003856f) middle_sk_idle_act4_pane

0xdcc7,	// (0x00038585) popup_clock_digital_analogue_window_cp2

0xdce1,	// (0x0003859f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdce1,	// (0x0003859f) shortcut_wheel_idle_act4_pane

0xc242,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g1

0xc242,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g2

0xc242,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g3

0xc242,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g4

0xc242,	// (0x00036b00) shortcut_wheel_idle_act4_pane_g5

0xdcf5,	// (0x000385b3) shortcut_wheel_idle_act4_pane_g6

0xdcfd,	// (0x000385bb) shortcut_wheel_idle_act4_pane_g7

0xdd05,	// (0x000385c3) shortcut_wheel_idle_act4_pane_g8

0xdd0d,	// (0x000385cb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x0003a5fc) shortcut_wheel_idle_act4_pane_g

0xc4cc,	// (0x00036d8a) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4cc,	// (0x00036d8a) middle_sk_idle_act4_pane_g1

0xdd71,	// (0x0003862f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd71,	// (0x0003862f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd61,	// (0x0003a61f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd61,	// (0x0003a61f) middle_sk_idle_act4_pane_g

0xdd7d,	// (0x0003863b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd7d,	// (0x0003863b) middle_sk_idle_act4_pane_t1

0xdd9a,	// (0x00038658) grid_ai_shortcut_pane_ParamLimits

0xdd9a,	// (0x00038658) grid_ai_shortcut_pane

0xddb3,	// (0x00038671) list_highlight_pane_cp16_ParamLimits

0xddb3,	// (0x00038671) list_highlight_pane_cp16

0xddc0,	// (0x0003867e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddc0,	// (0x0003867e) list_single_idle_plugin_shortcut_pane_g1

0xddcc,	// (0x0003868a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddcc,	// (0x0003868a) list_single_idle_plugin_shortcut_pane_g2

0xdde4,	// (0x000386a2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdde4,	// (0x000386a2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd66,	// (0x0003a624) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd66,	// (0x0003a624) list_single_idle_plugin_shortcut_pane_g

0xddf7,	// (0x000386b5) cell_ai_shortcut_pane_ParamLimits

0xddf7,	// (0x000386b5) cell_ai_shortcut_pane

0xde1b,	// (0x000386d9) cell_ai_shortcut_pane_g1_ParamLimits

0xde1b,	// (0x000386d9) cell_ai_shortcut_pane_g1

0xdc48,	// (0x00038506) ai_gene_pane_1_cp2

0xde3d,	// (0x000386fb) ai_gene_pane_2_cp2

0xde45,	// (0x00038703) list_highlight_pane_cp15

0xde4e,	// (0x0003870c) list_single_idle_plugin_calendar_pane_g1

0xde45,	// (0x00038703) list_highlight_pane_cp17

0xde56,	// (0x00038714) list_single_idle_plugin_calendar_pane_g1_copy1

0xde5e,	// (0x0003871c) list_single_idle_plugin_player_pane_g1

0xb5e6,	// (0x00035ea4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6d,	// (0x0003a62b) list_single_idle_plugin_player_pane_g

0xde66,	// (0x00038724) list_single_idle_plugin_player_pane_t1

0xde74,	// (0x00038732) list_single_idle_plugin_player_pane_t2

0xde82,	// (0x00038740) list_single_idle_plugin_player_pane_t3

0xde90,	// (0x0003874e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd72,	// (0x0003a630) list_single_idle_plugin_player_pane_t

0xde9e,	// (0x0003875c) wait_bar_pane_cp15

0xdea6,	// (0x00038764) grid_ai_notification_pane

0xb5e6,	// (0x00035ea4) list_single_idle_plugin_notification_pane_g1

0xdeaf,	// (0x0003876d) cell_ai_notification_pane_ParamLimits

0xdeaf,	// (0x0003876d) cell_ai_notification_pane

0xdebc,	// (0x0003877a) cell_ai_notification_pane_g1

0xdec4,	// (0x00038782) cell_ai_notification_pane_t1

0xded2,	// (0x00038790) tb_ext_find_button_pane

0xdeda,	// (0x00038798) tb_ext_find_pane_g1

0xdee2,	// (0x000387a0) tb_ext_find_pane_t1

0x8de7,	// (0x000336a5) tb_ext_find_button_pane_g1

0xdef0,	// (0x000387ae) tb_ext_find_button_pane_g2

0x0001,

0xfd7b,	// (0x0003a639) tb_ext_find_button_pane_g

0xdc8d,	// (0x0003854b) main_idle_act4_pane_t1_ParamLimits

0xdc9f,	// (0x0003855d) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x0003a5f7) main_idle_act4_pane_t_ParamLimits

0xdcc7,	// (0x00038585) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcd5,	// (0x00038593) sat_plugin_idle_act4_pane_ParamLimits

0xdcd5,	// (0x00038593) sat_plugin_idle_act4_pane

0xdef9,	// (0x000387b7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdef9,	// (0x000387b7) sat_plugin_idle_act4_pane_t1

0xdf0c,	// (0x000387ca) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf0c,	// (0x000387ca) sat_plugin_idle_act4_pane_t2

0xdf1f,	// (0x000387dd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf1f,	// (0x000387dd) sat_plugin_idle_act4_pane_t3

0xdf32,	// (0x000387f0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf32,	// (0x000387f0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd80,	// (0x0003a63e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd80,	// (0x0003a63e) sat_plugin_idle_act4_pane_t

0x4a8e,	// (0x0002f34c) popup_battery_window_ParamLimits

0x4a8e,	// (0x0002f34c) popup_battery_window

0x8159,	// (0x00032a17) bg_popup_sub_pane_cp25_ParamLimits

0x8159,	// (0x00032a17) bg_popup_sub_pane_cp25

0xdf45,	// (0x00038803) popup_battery_window_g1_ParamLimits

0xdf45,	// (0x00038803) popup_battery_window_g1

0xdf51,	// (0x0003880f) popup_battery_window_t1_ParamLimits

0xdf51,	// (0x0003880f) popup_battery_window_t1

0xdf63,	// (0x00038821) popup_battery_window_t2_ParamLimits

0xdf63,	// (0x00038821) popup_battery_window_t2

0x0001,

0xfd89,	// (0x0003a647) popup_battery_window_t_ParamLimits

0xfd89,	// (0x0003a647) popup_battery_window_t

0x940e,	// (0x00033ccc) midp_canvas_pane_ParamLimits

0x9485,	// (0x00033d43) midp_keypad_pane_ParamLimits

0x9485,	// (0x00033d43) midp_keypad_pane

0x971e,	// (0x00033fdc) main_midp_pane_ParamLimits

0xbd03,	// (0x000365c1) signal_pane_g2_cp_ParamLimits

0xdf80,	// (0x0003883e) aid_size_cell_midp_keypad_ParamLimits

0xdf80,	// (0x0003883e) aid_size_cell_midp_keypad

0xdf9a,	// (0x00038858) midp_keyp_game_grid_pane_ParamLimits

0xdf9a,	// (0x00038858) midp_keyp_game_grid_pane

0xdfba,	// (0x00038878) midp_keyp_rocker_pane_ParamLimits

0xdfba,	// (0x00038878) midp_keyp_rocker_pane

0xdff3,	// (0x000388b1) midp_keyp_sk_left_pane_ParamLimits

0xdff3,	// (0x000388b1) midp_keyp_sk_left_pane

0xe04d,	// (0x0003890b) midp_keyp_sk_right_pane_ParamLimits

0xe04d,	// (0x0003890b) midp_keyp_sk_right_pane

0x7ddc,	// (0x0003269a) bg_button_pane_cp03

0xe0a7,	// (0x00038965) midp_keyp_sk_left_pane_g1

0x7ddc,	// (0x0003269a) bg_button_pane_cp04

0xe0a7,	// (0x00038965) midp_keyp_sk_right_pane_g1

0xc242,	// (0x00036b00) midp_keyp_rocker_pane_g1

0xe0b0,	// (0x0003896e) keyp_game_cell_pane_ParamLimits

0xe0b0,	// (0x0003896e) keyp_game_cell_pane

0x7ddc,	// (0x0003269a) bg_button_pane_cp02

0xe0c3,	// (0x00038981) keyp_game_cell_pane_g1

0x4ad2,	// (0x0002f390) popup_fep_vkb2_window_ParamLimits

0x4ad2,	// (0x0002f390) popup_fep_vkb2_window

0x69bc,	// (0x0003127a) aid_size_cell_vkb2_ParamLimits

0x69bc,	// (0x0003127a) aid_size_cell_vkb2

0x6a10,	// (0x000312ce) popup_fep_vkb2_window_g1_ParamLimits

0x6a10,	// (0x000312ce) popup_fep_vkb2_window_g1

0x6a58,	// (0x00031316) vkb2_area_bottom_pane_ParamLimits

0x6a58,	// (0x00031316) vkb2_area_bottom_pane

0x6aa4,	// (0x00031362) vkb2_area_keypad_pane_ParamLimits

0x6aa4,	// (0x00031362) vkb2_area_keypad_pane

0x6ae6,	// (0x000313a4) vkb2_area_top_pane_ParamLimits

0x6ae6,	// (0x000313a4) vkb2_area_top_pane

0x6b60,	// (0x0003141e) vkb2_top_entry_pane_ParamLimits

0x6b60,	// (0x0003141e) vkb2_top_entry_pane

0x6b8a,	// (0x00031448) vkb2_top_grid_left_pane_ParamLimits

0x6b8a,	// (0x00031448) vkb2_top_grid_left_pane

0x6ba8,	// (0x00031466) vkb2_top_grid_right_pane_ParamLimits

0x6ba8,	// (0x00031466) vkb2_top_grid_right_pane

0x6bc6,	// (0x00031484) vkb2_cell_keypad_pane_ParamLimits

0x6bc6,	// (0x00031484) vkb2_cell_keypad_pane

0x6c97,	// (0x00031555) vkb2_area_bottom_grid_pane_ParamLimits

0x6c97,	// (0x00031555) vkb2_area_bottom_grid_pane

0x6cbd,	// (0x0003157b) vkb2_area_bottom_pane_g1_ParamLimits

0x6cbd,	// (0x0003157b) vkb2_area_bottom_pane_g1

0x6ce1,	// (0x0003159f) vkb2_area_bottom_pane_g2_ParamLimits

0x6ce1,	// (0x0003159f) vkb2_area_bottom_pane_g2

0x6d0f,	// (0x000315cd) vkb2_area_bottom_pane_g3_ParamLimits

0x6d0f,	// (0x000315cd) vkb2_area_bottom_pane_g3

0x0002,

0xfd8e,	// (0x0003a64c) vkb2_area_bottom_pane_g_ParamLimits

0xfd8e,	// (0x0003a64c) vkb2_area_bottom_pane_g

0x6d70,	// (0x0003162e) vkb2_top_cell_left_pane_ParamLimits

0x6d70,	// (0x0003162e) vkb2_top_cell_left_pane

0xe0d4,	// (0x00038992) vkb2_top_entry_pane_g1_ParamLimits

0xe0d4,	// (0x00038992) vkb2_top_entry_pane_g1

0xe0e2,	// (0x000389a0) vkb2_top_entry_pane_t1_ParamLimits

0xe0e2,	// (0x000389a0) vkb2_top_entry_pane_t1

0xe114,	// (0x000389d2) vkb2_top_entry_pane_t2_ParamLimits

0xe114,	// (0x000389d2) vkb2_top_entry_pane_t2

0xe146,	// (0x00038a04) vkb2_top_entry_pane_t3_ParamLimits

0xe146,	// (0x00038a04) vkb2_top_entry_pane_t3

0x0002,

0xfd95,	// (0x0003a653) vkb2_top_entry_pane_t_ParamLimits

0xfd95,	// (0x0003a653) vkb2_top_entry_pane_t

0x6dbd,	// (0x0003167b) vkb2_top_grid_right_pane_g1_ParamLimits

0x6dbd,	// (0x0003167b) vkb2_top_grid_right_pane_g1

0x6dd3,	// (0x00031691) vkb2_top_grid_right_pane_g2_ParamLimits

0x6dd3,	// (0x00031691) vkb2_top_grid_right_pane_g2

0x6deb,	// (0x000316a9) vkb2_top_grid_right_pane_g3_ParamLimits

0x6deb,	// (0x000316a9) vkb2_top_grid_right_pane_g3

0x6e03,	// (0x000316c1) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e03,	// (0x000316c1) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9c,	// (0x0003a65a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9c,	// (0x0003a65a) vkb2_top_grid_right_pane_g

0x6e19,	// (0x000316d7) vkb2_top_cell_left_pane_g1

0x6e30,	// (0x000316ee) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e30,	// (0x000316ee) vkb2_cell_keypad_pane_g1

0xe16a,	// (0x00038a28) vkb2_cell_keypad_pane_t1_ParamLimits

0xe16a,	// (0x00038a28) vkb2_cell_keypad_pane_t1

0x6e3e,	// (0x000316fc) vkb2_cell_bottom_grid_pane_ParamLimits

0x6e3e,	// (0x000316fc) vkb2_cell_bottom_grid_pane

0x6e77,	// (0x00031735) vkb2_cell_bottom_grid_pane_g1

0xdd15,	// (0x000385d3) aid_call2_pane_cp02

0xdd1d,	// (0x000385db) aid_call_pane_cp02

0xdd25,	// (0x000385e3) clock_digital_number_pane_cp10

0xdd2d,	// (0x000385eb) clock_digital_number_pane_cp11

0xdd35,	// (0x000385f3) clock_digital_number_pane_cp12

0xdd3d,	// (0x000385fb) clock_digital_number_pane_cp13

0xdd45,	// (0x00038603) clock_digital_separator_pane_cp10

0x8de7,	// (0x000336a5) popup_clock_digital_analogue_window_cp2_g1

0x8de7,	// (0x000336a5) popup_clock_digital_analogue_window_cp2_g2

0xdd4d,	// (0x0003860b) popup_clock_digital_analogue_window_cp2_g3

0x8de7,	// (0x000336a5) popup_clock_digital_analogue_window_cp2_g4

0xdd4d,	// (0x0003860b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x0003a60f) popup_clock_digital_analogue_window_cp2_g

0xdd55,	// (0x00038613) popup_clock_digital_analogue_window_cp2_t1

0xdd63,	// (0x00038621) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5c,	// (0x0003a61a) popup_clock_digital_analogue_window_cp2_t

0xc242,	// (0x00036b00) clock_digital_number_pane_cp10_g1

0xc242,	// (0x00036b00) clock_digital_number_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a3f6) clock_digital_number_pane_cp10_g

0xc242,	// (0x00036b00) clock_digital_separator_pane_cp10_g1

0xc242,	// (0x00036b00) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a3f6) clock_digital_separator_pane_cp10_g

0xdb91,	// (0x0003844f) uniindi_top_pane_g3

0xdba2,	// (0x00038460) uniindi_top_pane_g4

0x6c51,	// (0x0003150f) vkb2_row_keypad_pane_ParamLimits

0x6c51,	// (0x0003150f) vkb2_row_keypad_pane

0x6e93,	// (0x00031751) vkb2_cell_t_keypad_pane_ParamLimits

0x6e93,	// (0x00031751) vkb2_cell_t_keypad_pane

0x6ea3,	// (0x00031761) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6ea3,	// (0x00031761) vkb2_cell_t_keypad_pane_cp08

0x6eb6,	// (0x00031774) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6eb6,	// (0x00031774) vkb2_cell_t_keypad_pane_cp09

0x6eca,	// (0x00031788) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6eca,	// (0x00031788) vkb2_cell_t_keypad_pane_cp01

0x6edb,	// (0x00031799) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6edb,	// (0x00031799) vkb2_cell_t_keypad_pane_cp02

0x6eec,	// (0x000317aa) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6eec,	// (0x000317aa) vkb2_cell_t_keypad_pane_cp03

0x6efd,	// (0x000317bb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6efd,	// (0x000317bb) vkb2_cell_t_keypad_pane_cp04

0x6f0e,	// (0x000317cc) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f0e,	// (0x000317cc) vkb2_cell_t_keypad_pane_cp05

0x6f1f,	// (0x000317dd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f1f,	// (0x000317dd) vkb2_cell_t_keypad_pane_cp06

0x6f30,	// (0x000317ee) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f30,	// (0x000317ee) vkb2_cell_t_keypad_pane_cp07

0x6f41,	// (0x000317ff) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6f41,	// (0x000317ff) vkb2_cell_t_keypad_pane_cp10

0x66f7,	// (0x00030fb5) vkb2_cell_t_keypad_pane_g1

0xe181,	// (0x00038a3f) vkb2_cell_t_keypad_pane_t1

0x49c9,	// (0x0002f287) popup_grid_graphic2_window

0xe193,	// (0x00038a51) aid_size_cell_graphic2_ParamLimits

0xe193,	// (0x00038a51) aid_size_cell_graphic2

0xe1cb,	// (0x00038a89) bg_popup_window_pane_cp21_ParamLimits

0xe1cb,	// (0x00038a89) bg_popup_window_pane_cp21

0xe1d9,	// (0x00038a97) graphic2_pages_pane_ParamLimits

0xe1d9,	// (0x00038a97) graphic2_pages_pane

0xe21f,	// (0x00038add) grid_graphic2_control_pane_ParamLimits

0xe21f,	// (0x00038add) grid_graphic2_control_pane

0xe25d,	// (0x00038b1b) grid_graphic2_pane_ParamLimits

0xe25d,	// (0x00038b1b) grid_graphic2_pane

0xe2d1,	// (0x00038b8f) cell_graphic2_pane

0x49c9,	// (0x0002f287) main_comp_mode_pane

0xd3ff,	// (0x00037cbd) list_ai3_gene_pane_ParamLimits

0xd7d3,	// (0x00038091) bg_popup_window_pane_cp19_ParamLimits

0xd7df,	// (0x0003809d) bg_touch_area_indi_pane_ParamLimits

0xd7df,	// (0x0003809d) bg_touch_area_indi_pane

0xd7f5,	// (0x000380b3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7f5,	// (0x000380b3) bg_touch_area_indi_pane_cp01

0xd80b,	// (0x000380c9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd80b,	// (0x000380c9) bg_touch_area_indi_pane_cp02

0xd821,	// (0x000380df) bg_touch_area_indi_pane_cp03_ParamLimits

0xd821,	// (0x000380df) bg_touch_area_indi_pane_cp03

0xd83b,	// (0x000380f9) popup_slider_window_g1_ParamLimits

0xd857,	// (0x00038115) popup_slider_window_g2_ParamLimits

0xd873,	// (0x00038131) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x0003a5a4) popup_slider_window_g_ParamLimits

0xd8d9,	// (0x00038197) popup_slider_window_t1_ParamLimits

0xd94d,	// (0x0003820b) small_volume_slider_vertical_pane_ParamLimits

0xe2d1,	// (0x00038b8f) cell_graphic2_pane_ParamLimits

0xe320,	// (0x00038bde) bg_button_pane_cp10_ParamLimits

0xe320,	// (0x00038bde) bg_button_pane_cp10

0xe333,	// (0x00038bf1) bg_button_pane_cp11_ParamLimits

0xe333,	// (0x00038bf1) bg_button_pane_cp11

0xe346,	// (0x00038c04) graphic2_pages_pane_g1_ParamLimits

0xe346,	// (0x00038c04) graphic2_pages_pane_g1

0xe361,	// (0x00038c1f) graphic2_pages_pane_g2_ParamLimits

0xe361,	// (0x00038c1f) graphic2_pages_pane_g2

0x0001,

0xfdaa,	// (0x0003a668) graphic2_pages_pane_g_ParamLimits

0xfdaa,	// (0x0003a668) graphic2_pages_pane_g

0xe379,	// (0x00038c37) graphic2_pages_pane_t1_ParamLimits

0xe379,	// (0x00038c37) graphic2_pages_pane_t1

0xe391,	// (0x00038c4f) cell_graphic2_control_pane_ParamLimits

0xe391,	// (0x00038c4f) cell_graphic2_control_pane

0xe3af,	// (0x00038c6d) cell_graphic2_pane_g1_ParamLimits

0xe3af,	// (0x00038c6d) cell_graphic2_pane_g1

0xe3bc,	// (0x00038c7a) cell_graphic2_pane_g2_ParamLimits

0xe3bc,	// (0x00038c7a) cell_graphic2_pane_g2

0xe3c9,	// (0x00038c87) cell_graphic2_pane_g3_ParamLimits

0xe3c9,	// (0x00038c87) cell_graphic2_pane_g3

0xe3d6,	// (0x00038c94) cell_graphic2_pane_g4_ParamLimits

0xe3d6,	// (0x00038c94) cell_graphic2_pane_g4

0xe3e3,	// (0x00038ca1) cell_graphic2_pane_g5_ParamLimits

0xe3e3,	// (0x00038ca1) cell_graphic2_pane_g5

0x0004,

0xfdaf,	// (0x0003a66d) cell_graphic2_pane_g_ParamLimits

0xfdaf,	// (0x0003a66d) cell_graphic2_pane_g

0xe3fe,	// (0x00038cbc) cell_graphic2_pane_t1_ParamLimits

0xe3fe,	// (0x00038cbc) cell_graphic2_pane_t1

0x9cb6,	// (0x00034574) grid_highlight_pane_cp11_ParamLimits

0x9cb6,	// (0x00034574) grid_highlight_pane_cp11

0x8159,	// (0x00032a17) bg_button_pane_cp05

0xe435,	// (0x00038cf3) cell_graphic2_control_pane_g1

0xc242,	// (0x00036b00) bg_touch_area_indi_pane_g1

0xe45d,	// (0x00038d1b) aid_cmod_rocker_key_size

0xe467,	// (0x00038d25) aid_cmode_itu_key_size

0xe471,	// (0x00038d2f) main_cmode_video_pane

0xe47b,	// (0x00038d39) main_comp_mode_itu_pane

0xe487,	// (0x00038d45) main_comp_mode_rocker_pane

0xe493,	// (0x00038d51) cell_cmode_rocker_pane_ParamLimits

0xe493,	// (0x00038d51) cell_cmode_rocker_pane

0xe4c6,	// (0x00038d84) cell_cmode_itu_pane_ParamLimits

0xe4c6,	// (0x00038d84) cell_cmode_itu_pane

0x8765,	// (0x00033023) bg_button_pane_cp06_ParamLimits

0x8765,	// (0x00033023) bg_button_pane_cp06

0xc4cc,	// (0x00036d8a) cell_cmode_rocker_pane_g1_ParamLimits

0xc4cc,	// (0x00036d8a) cell_cmode_rocker_pane_g1

0xd9f1,	// (0x000382af) cell_cmode_rocker_pane_g2_ParamLimits

0xd9f1,	// (0x000382af) cell_cmode_rocker_pane_g2

0x0001,

0xfdbf,	// (0x0003a67d) cell_cmode_rocker_pane_g_ParamLimits

0xfdbf,	// (0x0003a67d) cell_cmode_rocker_pane_g

0x7ddc,	// (0x0003269a) bg_button_pane_cp07

0xe4db,	// (0x00038d99) cell_cmode_itu_pane_g1

0xe4e4,	// (0x00038da2) cell_cmode_itu_pane_t1

0xe4f2,	// (0x00038db0) cell_cmode_itu_pane_t2

0x0001,

0xfdc4,	// (0x0003a682) cell_cmode_itu_pane_t

0xdc14,	// (0x000384d2) aid_touch_ctrl_left

0xdc1c,	// (0x000384da) aid_touch_ctrl_right

0x7ddc,	// (0x0003269a) compa_mode_pane

0xe500,	// (0x00038dbe) aid_cmod_rocker_key_size_cp

0xe50a,	// (0x00038dc8) aid_cmode_itu_key_size_cp

0xe514,	// (0x00038dd2) compa_mode_pane_g1

0xe51c,	// (0x00038dda) compa_mode_pane_g2

0xe524,	// (0x00038de2) compa_mode_pane_g3

0x0002,

0xfdc9,	// (0x0003a687) compa_mode_pane_g

0xe52c,	// (0x00038dea) main_comp_mode_itu_pane_cp

0xe534,	// (0x00038df2) main_comp_mode_rocker_pane_cp

0xe53c,	// (0x00038dfa) cell_cmode_itu_pane_cp_ParamLimits

0xe53c,	// (0x00038dfa) cell_cmode_itu_pane_cp

0xe551,	// (0x00038e0f) cell_cmode_rocker_pane_cp_ParamLimits

0xe551,	// (0x00038e0f) cell_cmode_rocker_pane_cp

0x8765,	// (0x00033023) bg_button_pane_cp06_cp_ParamLimits

0x8765,	// (0x00033023) bg_button_pane_cp06_cp

0xc4cc,	// (0x00036d8a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4cc,	// (0x00036d8a) cell_cmode_rocker_pane_g1_cp

0xc242,	// (0x00036b00) cell_cmode_rocker_pane_g2_cp

0x7ddc,	// (0x0003269a) bg_button_pane_cp07_cp

0xb189,	// (0x00035a47) cell_cmode_itu_pane_g1_cp

0xe563,	// (0x00038e21) cell_cmode_itu_pane_t1_cp

0xe563,	// (0x00038e21) cell_cmode_itu_pane_t2_cp

0xb176,	// (0x00035a34) settings_code_pane_cp2

0x7ed0,	// (0x0003278e) bg_popup_window_pane_cp3_ParamLimits

0x8359,	// (0x00032c17) heading_pane_cp3_ParamLimits

0x8365,	// (0x00032c23) listscroll_popup_graphic_pane_ParamLimits

0x64a0,	// (0x00030d5e) fep_hwr_aid_pane_ParamLimits

0x6917,	// (0x000311d5) aid_touch_sctrl_top_ParamLimits

0x6932,	// (0x000311f0) sctrl_sk_top_pane_g1_ParamLimits

0x66f7,	// (0x00030fb5) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x0003a5bd) sctrl_sk_top_pane_g_ParamLimits

0x693f,	// (0x000311fd) sctrl_sk_top_pane_t1_ParamLimits

0x6917,	// (0x000311d5) aid_touch_sctrl_bottom_ParamLimits

0x693f,	// (0x000311fd) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb5d,	// (0x0003841b) aid_area_touch_clock

0x6b28,	// (0x000313e6) aid_vkb2_area_top_pane_cell_ParamLimits

0x6b28,	// (0x000313e6) aid_vkb2_area_top_pane_cell

0x6c73,	// (0x00031531) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6c73,	// (0x00031531) aid_vkb2_area_bottom_pane_cell

0xe0cc,	// (0x0003898a) popup_char_count_window

0xe571,	// (0x00038e2f) popup_char_count_window_g1

0xe57a,	// (0x00038e38) popup_char_count_window_g2

0xe583,	// (0x00038e41) popup_char_count_window_g3

0x0002,

0xfdd0,	// (0x0003a68e) popup_char_count_window_g

0xe58c,	// (0x00038e4a) popup_char_count_window_t1

0x69ee,	// (0x000312ac) popup_fep_char_preview_window_ParamLimits

0x69ee,	// (0x000312ac) popup_fep_char_preview_window

0x6b46,	// (0x00031404) vkb2_top_candi_pane_ParamLimits

0x6b46,	// (0x00031404) vkb2_top_candi_pane

0xe59a,	// (0x00038e58) cell_vkb2_top_candi_pane_ParamLimits

0xe59a,	// (0x00038e58) cell_vkb2_top_candi_pane

0x6f56,	// (0x00031814) bg_popup_fep_char_preview_window_ParamLimits

0x6f56,	// (0x00031814) bg_popup_fep_char_preview_window

0x6f64,	// (0x00031822) popup_fep_char_preview_window_t1_ParamLimits

0x6f64,	// (0x00031822) popup_fep_char_preview_window_t1

0xe5e7,	// (0x00038ea5) bg_popup_fep_char_preview_window_g1

0xe5ef,	// (0x00038ead) bg_popup_fep_char_preview_window_g2

0xe5f7,	// (0x00038eb5) bg_popup_fep_char_preview_window_g3

0xe5ff,	// (0x00038ebd) bg_popup_fep_char_preview_window_g4

0xe607,	// (0x00038ec5) bg_popup_fep_char_preview_window_g5

0x6f9e,	// (0x0003185c) bg_popup_fep_char_preview_window_g6

0xe60f,	// (0x00038ecd) bg_popup_fep_char_preview_window_g7

0xe617,	// (0x00038ed5) bg_popup_fep_char_preview_window_g8

0xe61f,	// (0x00038edd) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd7,	// (0x0003a695) bg_popup_fep_char_preview_window_g

0x66f7,	// (0x00030fb5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x66f7,	// (0x00030fb5) cell_vkb2_top_candi_pane_g1

0x6705,	// (0x00030fc3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6705,	// (0x00030fc3) cell_vkb2_top_candi_pane_g2

0xe4a5,	// (0x00038d63) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe4a5,	// (0x00038d63) cell_vkb2_top_candi_pane_g3

0x6fa6,	// (0x00031864) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6fa6,	// (0x00031864) cell_vkb2_top_candi_pane_g4

0xc997,	// (0x00037255) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc997,	// (0x00037255) cell_vkb2_top_candi_pane_g5

0x6fc7,	// (0x00031885) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6fc7,	// (0x00031885) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdea,	// (0x0003a6a8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdea,	// (0x0003a6a8) cell_vkb2_top_candi_pane_g

0x6fd5,	// (0x00031893) cell_vkb2_top_candi_pane_t1

0x6300,	// (0x00030bbe) aid_size_touch_slider_mark_ParamLimits

0x6300,	// (0x00030bbe) aid_size_touch_slider_mark

0xe20f,	// (0x00038acd) grid_graphic2_catg_pane_ParamLimits

0xe20f,	// (0x00038acd) grid_graphic2_catg_pane

0xe2ad,	// (0x00038b6b) popup_grid_graphic2_window_t1_ParamLimits

0xe2ad,	// (0x00038b6b) popup_grid_graphic2_window_t1

0xe2bf,	// (0x00038b7d) popup_grid_graphic2_window_t2_ParamLimits

0xe2bf,	// (0x00038b7d) popup_grid_graphic2_window_t2

0x0001,

0xfda5,	// (0x0003a663) popup_grid_graphic2_window_t_ParamLimits

0xfda5,	// (0x0003a663) popup_grid_graphic2_window_t

0x8159,	// (0x00032a17) bg_button_pane_cp05_ParamLimits

0xe435,	// (0x00038cf3) cell_graphic2_control_pane_g1_ParamLimits

0xe627,	// (0x00038ee5) cell_graphic2_catg_pane_ParamLimits

0xe627,	// (0x00038ee5) cell_graphic2_catg_pane

0x7ddc,	// (0x0003269a) bg_button_pane_cp12

0xe639,	// (0x00038ef7) cell_graphic2_catg_pane_g1

0xdb29,	// (0x000383e7) cell_tb_ext_pane_t1_ParamLimits

0x6d90,	// (0x0003164e) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6d90,	// (0x0003164e) vkb2_top_cell_right_narrow_pane

0x6da8,	// (0x00031666) vkb2_top_cell_right_wide_pane_ParamLimits

0x6da8,	// (0x00031666) vkb2_top_cell_right_wide_pane

0x6492,	// (0x00030d50) bg_vkb2_func_pane_ParamLimits

0x6492,	// (0x00030d50) bg_vkb2_func_pane

0x6e19,	// (0x000316d7) vkb2_top_cell_left_pane_g1_ParamLimits

0x6492,	// (0x00030d50) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6492,	// (0x00030d50) bg_vkb2_fuc_pane_cp03

0x6e77,	// (0x00031735) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c4a,	// (0x00034508) bg_vkb2_func_pane_g1

0x9c52,	// (0x00034510) bg_vkb2_func_pane_g2

0x9c62,	// (0x00034520) bg_vkb2_func_pane_g3

0x9c5a,	// (0x00034518) bg_vkb2_func_pane_g4

0x9c6a,	// (0x00034528) bg_vkb2_func_pane_g5

0x9c72,	// (0x00034530) bg_vkb2_func_pane_g6

0x9c7a,	// (0x00034538) bg_vkb2_func_pane_g7

0x9c82,	// (0x00034540) bg_vkb2_func_pane_g8

0x9c42,	// (0x00034500) bg_vkb2_func_pane_g9

0x0008,

0xfdf7,	// (0x0003a6b5) bg_vkb2_func_pane_g

0x6492,	// (0x00030d50) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6492,	// (0x00030d50) bg_vkb2_fuc_pane_cp01

0x6e19,	// (0x000316d7) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e19,	// (0x000316d7) vkb2_top_cell_right_wide_pane_g1

0x6492,	// (0x00030d50) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6492,	// (0x00030d50) bg_vkb2_fuc_pane_cp02

0x6e77,	// (0x00031735) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6e77,	// (0x00031735) vkb2_top_cell_right_narrow_pane_g1

0xd74d,	// (0x0003800b) aid_touch_area_decrease_ParamLimits

0xd74d,	// (0x0003800b) aid_touch_area_decrease

0xd771,	// (0x0003802f) aid_touch_area_increase_ParamLimits

0xd771,	// (0x0003802f) aid_touch_area_increase

0xd789,	// (0x00038047) aid_touch_area_mute_ParamLimits

0xd789,	// (0x00038047) aid_touch_area_mute

0xd7a5,	// (0x00038063) aid_touch_area_slider_ParamLimits

0xd7a5,	// (0x00038063) aid_touch_area_slider

0xd88f,	// (0x0003814d) popup_slider_window_g4_ParamLimits

0xd88f,	// (0x0003814d) popup_slider_window_g4

0xd8a7,	// (0x00038165) popup_slider_window_g5_ParamLimits

0xd8a7,	// (0x00038165) popup_slider_window_g5

0xd8c9,	// (0x00038187) popup_slider_window_g6_ParamLimits

0xd8c9,	// (0x00038187) popup_slider_window_g6

0xd907,	// (0x000381c5) popup_slider_window_t2_ParamLimits

0xd907,	// (0x000381c5) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x0003a5b1) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x0003a5b1) popup_slider_window_t

0xd91f,	// (0x000381dd) slider_pane_ParamLimits

0xd91f,	// (0x000381dd) slider_pane

0xe642,	// (0x00038f00) slider_pane_g1_ParamLimits

0xe642,	// (0x00038f00) slider_pane_g1

0xe656,	// (0x00038f14) slider_pane_g2_ParamLimits

0xe656,	// (0x00038f14) slider_pane_g2

0xe66c,	// (0x00038f2a) slider_pane_g3_ParamLimits

0xe66c,	// (0x00038f2a) slider_pane_g3

0x0003,

0xfe0a,	// (0x0003a6c8) slider_pane_g_ParamLimits

0xfe0a,	// (0x0003a6c8) slider_pane_g

0x5f27,	// (0x000307e5) popup_tb_float_extension_window_ParamLimits

0x5f27,	// (0x000307e5) popup_tb_float_extension_window

0xe698,	// (0x00038f56) aid_size_cell_tb_float_ext

0x7ddc,	// (0x0003269a) bg_popup_sub_window_cp28

0xe6a4,	// (0x00038f62) grid_tb_float_ext_pane

0xe6ae,	// (0x00038f6c) cell_tb_float_ext_pane_ParamLimits

0xe6ae,	// (0x00038f6c) cell_tb_float_ext_pane

0xe6c8,	// (0x00038f86) cell_tb_float_ext_pane_g1

0xe6d1,	// (0x00038f8f) grid_highlight_pane_cp12

0x65e1,	// (0x00030e9f) cell_last_hwr_side_pane_ParamLimits

0x65e1,	// (0x00030e9f) cell_last_hwr_side_pane

0xc242,	// (0x00036b00) cell_last_hwr_side_pane_g1

0xe6da,	// (0x00038f98) cell_last_hwr_side_pane_g2

0x0001,

0xfe13,	// (0x0003a6d1) cell_last_hwr_side_pane_g

0x6d3f,	// (0x000315fd) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6d3f,	// (0x000315fd) vkb2_area_bottom_space_btn_pane

0x66f7,	// (0x00030fb5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe181,	// (0x00038a3f) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6fd5,	// (0x00031893) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6ff4,	// (0x000318b2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6ff4,	// (0x000318b2) vkb2_area_bottom_space_btn_pane_g1

0x702e,	// (0x000318ec) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x702e,	// (0x000318ec) vkb2_area_bottom_space_btn_pane_g2

0x7064,	// (0x00031922) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7064,	// (0x00031922) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe18,	// (0x0003a6d6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe18,	// (0x0003a6d6) vkb2_area_bottom_space_btn_pane_g

0x6555,	// (0x00030e13) cel_fep_hwr_func_pane_ParamLimits

0x6555,	// (0x00030e13) cel_fep_hwr_func_pane

0x6591,	// (0x00030e4f) cell_hwr_side_button_pane_ParamLimits

0x6591,	// (0x00030e4f) cell_hwr_side_button_pane

0xdb5d,	// (0x0003841b) aid_area_touch_clock_ParamLimits

0x8159,	// (0x00032a17) bg_uniindi_top_pane_ParamLimits

0xdb6f,	// (0x0003842d) uniindi_top_pane_g1_ParamLimits

0xdb85,	// (0x00038443) uniindi_top_pane_g2_ParamLimits

0xdb91,	// (0x0003844f) uniindi_top_pane_g3_ParamLimits

0xdba2,	// (0x00038460) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x0003a5e9) uniindi_top_pane_g_ParamLimits

0xdbaf,	// (0x0003846d) uniindi_top_pane_t1_ParamLimits

0x8159,	// (0x00032a17) bg_vkb2_func_pane_cp01_ParamLimits

0x8159,	// (0x00032a17) bg_vkb2_func_pane_cp01

0xe6e3,	// (0x00038fa1) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6e3,	// (0x00038fa1) cel_fep_hwr_func_pane_g1

0x8159,	// (0x00032a17) bg_vkb2_func_pane_cp02_ParamLimits

0x8159,	// (0x00032a17) bg_vkb2_func_pane_cp02

0xe6e3,	// (0x00038fa1) cell_hwr_side_button_pane_g1_ParamLimits

0xe6e3,	// (0x00038fa1) cell_hwr_side_button_pane_g1

0x9ac3,	// (0x00034381) status_pane_g4_ParamLimits

0x9ac3,	// (0x00034381) status_pane_g4

0x9add,	// (0x0003439b) status_pane_t1

0xbf87,	// (0x00036845) form2_midp_gauge_slider_cont_pane

0xbf8f,	// (0x0003684d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfa1,	// (0x0003685f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfb3,	// (0x00036871) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaeb,	// (0x0003a3a9) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfc5,	// (0x00036883) form2_midp_slider_pane_ParamLimits

0x69ae,	// (0x0003126c) aid_size_cell_func_vkb2_ParamLimits

0x69ae,	// (0x0003126c) aid_size_cell_func_vkb2

0xe684,	// (0x00038f42) slider_pane_g4_ParamLimits

0xe684,	// (0x00038f42) slider_pane_g4

0x70ae,	// (0x0003196c) form2_midp_gauge_slider_pane_t2_cp01

0x70bc,	// (0x0003197a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x70bc,	// (0x0003197a) form2_midp_gauge_slider_pane_t3_cp01

0x70d9,	// (0x00031997) form2_midp_slider_pane_cp01

0x7ddc,	// (0x0003269a) navi_smil_pane

0xe71c,	// (0x00038fda) navi_smil_pane_g1

0xe724,	// (0x00038fe2) navi_smil_pane_t1

0xe6f1,	// (0x00038faf) form2_midp_slider_pane_g1

0xe6fa,	// (0x00038fb8) form2_midp_slider_pane_g2

0xe702,	// (0x00038fc0) form2_midp_slider_pane_g3

0xe6f1,	// (0x00038faf) form2_midp_slider_pane_g4

0xe70a,	// (0x00038fc8) form2_midp_slider_pane_g5

0x0004,

0xfe21,	// (0x0003a6df) form2_midp_slider_pane_g

0x709e,	// (0x0003195c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x709e,	// (0x0003195c) vkb2_area_bottom_space_btn_pane_g4

0x98f2,	// (0x000341b0) lc0_navi_pane_ParamLimits

0x98f2,	// (0x000341b0) lc0_navi_pane

0x9968,	// (0x00034226) lc0_stat_indi_pane_ParamLimits

0x9968,	// (0x00034226) lc0_stat_indi_pane

0x997f,	// (0x0003423d) ls0_title_pane_ParamLimits

0x997f,	// (0x0003423d) ls0_title_pane

0x8765,	// (0x00033023) bg_popup_sub_pane_cp14_ParamLimits

0xdb44,	// (0x00038402) list_uniindi_pane_ParamLimits

0xdb50,	// (0x0003840e) uniindi_top_pane_ParamLimits

0xdbec,	// (0x000384aa) list_single_uniindi_pane_g1_ParamLimits

0xdbff,	// (0x000384bd) list_single_uniindi_pane_t1_ParamLimits

0x70e2,	// (0x000319a0) lc0_stat_clock_pane_ParamLimits

0x70e2,	// (0x000319a0) lc0_stat_clock_pane

0xe732,	// (0x00038ff0) lc0_stat_indi_pane_g1_ParamLimits

0xe732,	// (0x00038ff0) lc0_stat_indi_pane_g1

0xe73f,	// (0x00038ffd) lc0_stat_indi_pane_g2_ParamLimits

0xe73f,	// (0x00038ffd) lc0_stat_indi_pane_g2

0x0001,

0xfe2c,	// (0x0003a6ea) lc0_stat_indi_pane_g_ParamLimits

0xfe2c,	// (0x0003a6ea) lc0_stat_indi_pane_g

0x70ef,	// (0x000319ad) lc0_uni_indicator_pane_ParamLimits

0x70ef,	// (0x000319ad) lc0_uni_indicator_pane

0xe74c,	// (0x0003900a) ls0_title_pane_g1_ParamLimits

0xe74c,	// (0x0003900a) ls0_title_pane_g1

0xe760,	// (0x0003901e) ls0_title_pane_t1_ParamLimits

0xe760,	// (0x0003901e) ls0_title_pane_t1

0x70fc,	// (0x000319ba) lc0_uni_indicator_pane_g1_ParamLimits

0x70fc,	// (0x000319ba) lc0_uni_indicator_pane_g1

0xe796,	// (0x00039054) lc0_stat_clock_pane_t1

0x49c9,	// (0x0002f287) main_ai5_pane

0xe7a4,	// (0x00039062) ai5_sk_pane_ParamLimits

0xe7a4,	// (0x00039062) ai5_sk_pane

0xe7b1,	// (0x0003906f) cell_ai5_widget_pane_ParamLimits

0xe7b1,	// (0x0003906f) cell_ai5_widget_pane

0xe86c,	// (0x0003912a) aid_size_cell_widget_grid

0xe882,	// (0x00039140) bg_ai5_widget_pane_ParamLimits

0xe882,	// (0x00039140) bg_ai5_widget_pane

0xe8fa,	// (0x000391b8) cell_ai5_widget_pane_g2

0xe90e,	// (0x000391cc) cell_ai5_widget_pane_g3

0xe928,	// (0x000391e6) cell_ai5_widget_pane_g4

0xe938,	// (0x000391f6) cell_ai5_widget_pane_g5

0xe948,	// (0x00039206) cell_ai5_widget_pane_g6

0xe954,	// (0x00039212) cell_ai5_widget_pane_g7

0xe99c,	// (0x0003925a) cell_ai5_widget_pane_t1_ParamLimits

0xe99c,	// (0x0003925a) cell_ai5_widget_pane_t1

0xe9b9,	// (0x00039277) cell_ai5_widget_pane_t2_ParamLimits

0xe9b9,	// (0x00039277) cell_ai5_widget_pane_t2

0xe9d1,	// (0x0003928f) cell_ai5_widget_pane_t3_ParamLimits

0xe9d1,	// (0x0003928f) cell_ai5_widget_pane_t3

0xe9e9,	// (0x000392a7) cell_ai5_widget_pane_t4_ParamLimits

0xe9e9,	// (0x000392a7) cell_ai5_widget_pane_t4

0xea0f,	// (0x000392cd) cell_ai5_widget_pane_t5_ParamLimits

0xea0f,	// (0x000392cd) cell_ai5_widget_pane_t5

0xea2f,	// (0x000392ed) cell_ai5_widget_pane_t6_ParamLimits

0xea2f,	// (0x000392ed) cell_ai5_widget_pane_t6

0xea41,	// (0x000392ff) cell_ai5_widget_pane_t7_ParamLimits

0xea41,	// (0x000392ff) cell_ai5_widget_pane_t7

0xea5a,	// (0x00039318) cell_ai5_widget_pane_t8_ParamLimits

0xea5a,	// (0x00039318) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x0003a704) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x0003a704) cell_ai5_widget_pane_t

0xeab9,	// (0x00039377) grid_ai5_widget_pane

0x8765,	// (0x00033023) highlight_cell_ai5_widget_pane_ParamLimits

0x8765,	// (0x00033023) highlight_cell_ai5_widget_pane

0xead0,	// (0x0003938e) ai5_sk_left_pane

0xeada,	// (0x00039398) ai5_sk_middle_pane

0xeae4,	// (0x000393a2) ai5_sk_right_pane

0xeaee,	// (0x000393ac) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x000393ac) bg_ai5_widget_pane_g1

0xeafa,	// (0x000393b8) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x000393b8) bg_ai5_widget_pane_g2

0xeb06,	// (0x000393c4) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x000393c4) bg_ai5_widget_pane_g3

0xeb12,	// (0x000393d0) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x000393d0) bg_ai5_widget_pane_g4

0xeb1e,	// (0x000393dc) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x000393dc) bg_ai5_widget_pane_g5

0xeb2a,	// (0x000393e8) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x000393e8) bg_ai5_widget_pane_g6

0xeb36,	// (0x000393f4) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x000393f4) bg_ai5_widget_pane_g7

0xeb42,	// (0x00039400) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x00039400) bg_ai5_widget_pane_g8

0xeb4e,	// (0x0003940c) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x0003940c) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0003a719) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0003a719) bg_ai5_widget_pane_g

0xeb80,	// (0x0003943e) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x0003943e) cell_shortcut_ai5_widget_pane

0x93fa,	// (0x00033cb8) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x0003944f) cell_grid_ai5_widget_pane_g1

0x93fa,	// (0x00033cb8) highlight_cell_shortcut_ai5_widget_pane

0x9c4a,	// (0x00034508) ai5_sk_left_pane_g1

0xeb9a,	// (0x00039458) ai5_sk_left_pane_g2

0xeba2,	// (0x00039460) ai5_sk_left_pane_g3

0xebaa,	// (0x00039468) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0003a72c) ai5_sk_left_pane_g

0xebb2,	// (0x00039470) ai5_sk_left_pane_t1

0x9c52,	// (0x00034510) ai5_sk_right_pane_g1

0xebc0,	// (0x0003947e) ai5_sk_right_pane_g2

0xebc8,	// (0x00039486) ai5_sk_right_pane_g3

0xebd0,	// (0x0003948e) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0003a735) ai5_sk_right_pane_g

0xebd8,	// (0x00039496) ai5_sk_right_pane_t1

0x9c52,	// (0x00034510) ai5_sk_middle_pane_g1

0x9c4a,	// (0x00034508) ai5_sk_middle_pane_g2

0x9c6a,	// (0x00034528) ai5_sk_middle_pane_g3

0xebc8,	// (0x00039486) ai5_sk_middle_pane_g4

0xeba2,	// (0x00039460) ai5_sk_middle_pane_g5

0xebe6,	// (0x000394a4) ai5_sk_middle_pane_g6

0xebee,	// (0x000394ac) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0003a73e) ai5_sk_middle_pane_g

0x977e,	// (0x0003403c) aid_touch_area_size_lc0_ParamLimits

0x977e,	// (0x0003403c) aid_touch_area_size_lc0

0x6726,	// (0x00030fe4) cell_hwr_candidate_pane_t1_ParamLimits

0x979a,	// (0x00034058) aid_touch_navi_pane

0x9a6d,	// (0x0003432b) status_dt_navi_pane_ParamLimits

0x9a6d,	// (0x0003432b) status_dt_navi_pane

0x9a7a,	// (0x00034338) status_dt_sta_pane_ParamLimits

0x9a7a,	// (0x00034338) status_dt_sta_pane

0xebf6,	// (0x000394b4) dt_sta_controll_pane

0xec03,	// (0x000394c1) dt_sta_indi_pane

0xec14,	// (0x000394d2) dt_sta_title_pane

0x8159,	// (0x00032a17) bg_dt_sta_indi_pane_ParamLimits

0x8159,	// (0x00032a17) bg_dt_sta_indi_pane

0xec27,	// (0x000394e5) dt_sta_battery_pane

0xec2f,	// (0x000394ed) dt_sta_indi_pane_g1

0xec38,	// (0x000394f6) dt_sta_indi_pane_g2

0xec41,	// (0x000394ff) dt_sta_indi_pane_g3

0x0002,

0xfe8f,	// (0x0003a74d) dt_sta_indi_pane_g

0xec4a,	// (0x00039508) dt_sta_signal_pane

0x8765,	// (0x00033023) bg_dt_sta_title_pane_ParamLimits

0x8765,	// (0x00033023) bg_dt_sta_title_pane

0xec53,	// (0x00039511) dt_sta_title_pane_g1

0xec5b,	// (0x00039519) dt_sta_title_pane_t1_ParamLimits

0xec5b,	// (0x00039519) dt_sta_title_pane_t1

0x7ddc,	// (0x0003269a) bg_dt_sta_control_pane

0xec70,	// (0x0003952e) dt_sta_controll_pane_g1

0xec79,	// (0x00039537) bg_dt_sta_title_pane_g1

0xec82,	// (0x00039540) bg_dt_sta_title_pane_g2

0xec8b,	// (0x00039549) bg_dt_sta_title_pane_g3

0x0002,

0xfe96,	// (0x0003a754) bg_dt_sta_title_pane_g

0xc242,	// (0x00036b00) bg_dt_sta_indi_pane_g1

0xec94,	// (0x00039552) dt_sta_signal_pane_g1

0xec9c,	// (0x0003955a) dt_sta_signal_pane_g2

0x0001,

0xfe9d,	// (0x0003a75b) dt_sta_signal_pane_g

0xeca4,	// (0x00039562) dt_sta_battery_pane_g1

0xecad,	// (0x0003956b) dt_sta_battery_pane_t1

0xc242,	// (0x00036b00) bg_dt_sta_control_pane_g1

0x8ef9,	// (0x000337b7) fep_china_uni_eep_pane

0x8f01,	// (0x000337bf) fep_china_uni_entry_pane_ParamLimits

0x8f11,	// (0x000337cf) popup_fep_china_uni_window_g1_ParamLimits

0x8f21,	// (0x000337df) popup_fep_china_uni_window_g2_ParamLimits

0x8f21,	// (0x000337df) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00039fdb) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00039fdb) popup_fep_china_uni_window_g

0xecbc,	// (0x0003957a) fep_china_uni_eep_pane_g1

0xecc4,	// (0x00039582) fep_china_uni_eep_pane_t1

0xe713,	// (0x00038fd1) aid_touch_area_size_smil_player

0x98ea,	// (0x000341a8) lc0_clock_pane

0x9ad1,	// (0x0003438f) status_pane_g5_ParamLimits

0x9ad1,	// (0x0003438f) status_pane_g5

0x5bec,	// (0x000304aa) popup_keymap_window

0x9a8f,	// (0x0003434d) status_icon_pane

0xe90e,	// (0x000391cc) cell_ai5_widget_pane_g3_ParamLimits

0xe928,	// (0x000391e6) cell_ai5_widget_pane_g4_ParamLimits

0xe938,	// (0x000391f6) cell_ai5_widget_pane_g5_ParamLimits

0xe960,	// (0x0003921e) cell_ai5_widget_pane_g8_ParamLimits

0xe960,	// (0x0003921e) cell_ai5_widget_pane_g8

0xe974,	// (0x00039232) cell_ai5_widget_pane_g9_ParamLimits

0xe974,	// (0x00039232) cell_ai5_widget_pane_g9

0xe988,	// (0x00039246) cell_ai5_widget_pane_g10_ParamLimits

0xe988,	// (0x00039246) cell_ai5_widget_pane_g10

0xecd3,	// (0x00039591) status_icon_pane_g1

0x7ddc,	// (0x0003269a) bg_popup_sub_pane_cp13

0xecdb,	// (0x00039599) popup_keymap_window_t1

0x96cf,	// (0x00033f8d) control_pane_g6_ParamLimits

0x96cf,	// (0x00033f8d) control_pane_g6

0x96dc,	// (0x00033f9a) control_pane_g7_ParamLimits

0x96dc,	// (0x00033f9a) control_pane_g7

0x96e9,	// (0x00033fa7) control_pane_g8_ParamLimits

0x96e9,	// (0x00033fa7) control_pane_g8

0xebf6,	// (0x000394b4) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x000394c1) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x000394d2) dt_sta_title_pane_ParamLimits

0x869d,	// (0x00032f5b) aid_size_touch_scroll_bar_cale

0x4aa2,	// (0x0002f360) popup_discreet_window_ParamLimits

0x4aa2,	// (0x0002f360) popup_discreet_window

0x4b2a,	// (0x0002f3e8) popup_sk_window

0xa2d5,	// (0x00034b93) bg_popup_sub_pane_cp28_ParamLimits

0xa2d5,	// (0x00034b93) bg_popup_sub_pane_cp28

0xece9,	// (0x000395a7) popup_discreet_window_g1_ParamLimits

0xece9,	// (0x000395a7) popup_discreet_window_g1

0xed09,	// (0x000395c7) popup_discreet_window_t1_ParamLimits

0xed09,	// (0x000395c7) popup_discreet_window_t1

0xed27,	// (0x000395e5) popup_discreet_window_t2_ParamLimits

0xed27,	// (0x000395e5) popup_discreet_window_t2

0x0002,

0xfea2,	// (0x0003a760) popup_discreet_window_t_ParamLimits

0xfea2,	// (0x0003a760) popup_discreet_window_t

0x7110,	// (0x000319ce) popup_sk_window_g1

0x711a,	// (0x000319d8) popup_sk_window_g2

0x0001,

0xfea9,	// (0x0003a767) popup_sk_window_g

0x7122,	// (0x000319e0) popup_sk_window_t1

0x7130,	// (0x000319ee) popup_sk_window_t1_copy1

0xe8fa,	// (0x000391b8) cell_ai5_widget_pane_g2_ParamLimits

0xea6c,	// (0x0003932a) cell_ai5_widget_pane_t9_ParamLimits

0xea6c,	// (0x0003932a) cell_ai5_widget_pane_t9

0x7ddc,	// (0x0003269a) main_fep_fshwr2_pane

0x713e,	// (0x000319fc) aid_fshwr2_btn_pane

0x714a,	// (0x00031a08) aid_fshwr2_syb_pane

0x7156,	// (0x00031a14) aid_fshwr2_txt_pane

0x7162,	// (0x00031a20) fshwr2_func_candi_pane

0x7177,	// (0x00031a35) fshwr2_hwr_syb_pane

0x7187,	// (0x00031a45) fshwr2_icf_pane

0x49c9,	// (0x0002f287) fshwr2_icf_bg_pane

0x71b0,	// (0x00031a6e) fshwr2_icf_pane_t1_ParamLimits

0x71b0,	// (0x00031a6e) fshwr2_icf_pane_t1

0x8de7,	// (0x000336a5) fshwr2_func_candi_pane_g1

0xed79,	// (0x00039637) fshwr2_func_candi_row_pane_ParamLimits

0xed79,	// (0x00039637) fshwr2_func_candi_row_pane

0x71c8,	// (0x00031a86) cell_fshwr2_syb_pane_ParamLimits

0x71c8,	// (0x00031a86) cell_fshwr2_syb_pane

0x66f7,	// (0x00030fb5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x66f7,	// (0x00030fb5) fshwr2_hwr_syb_pane_g1

0x49c9,	// (0x0002f287) bg_popup_call_pane_cp01

0x71de,	// (0x00031a9c) fshwr2_func_candi_cell_pane_ParamLimits

0x71de,	// (0x00031a9c) fshwr2_func_candi_cell_pane

0xed89,	// (0x00039647) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed89,	// (0x00039647) fshwr2_func_candi_cell_bg_pane

0x7229,	// (0x00031ae7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7229,	// (0x00031ae7) fshwr2_func_candi_cell_pane_g1

0x7251,	// (0x00031b0f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7251,	// (0x00031b0f) fshwr2_func_candi_cell_pane_t1

0x49c9,	// (0x0002f287) bg_button_pane_cp08

0xed95,	// (0x00039653) cell_fshwr2_syb_bg_pane

0x7264,	// (0x00031b22) cell_fshwr2_syb_bg_pane_g1

0x726c,	// (0x00031b2a) cell_fshwr2_syb_bg_pane_t1

0x8765,	// (0x00033023) main_tmo_pane

0xade4,	// (0x000356a2) uni_indicator_pane_g1_ParamLimits

0xadf7,	// (0x000356b5) uni_indicator_pane_g2_ParamLimits

0xae09,	// (0x000356c7) uni_indicator_pane_g3_ParamLimits

0xae18,	// (0x000356d6) uni_indicator_pane_g4_ParamLimits

0xae18,	// (0x000356d6) uni_indicator_pane_g4

0xae2c,	// (0x000356ea) uni_indicator_pane_g5_ParamLimits

0xae2c,	// (0x000356ea) uni_indicator_pane_g5

0xae2c,	// (0x000356ea) uni_indicator_pane_g6_ParamLimits

0xae2c,	// (0x000356ea) uni_indicator_pane_g6

0xf921,	// (0x0003a1df) uni_indicator_pane_g_ParamLimits

0xd729,	// (0x00037fe7) popup_tmo_note_window_ParamLimits

0xd729,	// (0x00037fe7) popup_tmo_note_window

0x6990,	// (0x0003124e) fshwr2_bg_pane

0x7242,	// (0x00031b00) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7242,	// (0x00031b00) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeae,	// (0x0003a76c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeae,	// (0x0003a76c) fshwr2_func_candi_cell_pane_g

0x66df,	// (0x00030f9d) bg_popup_window_pane_cp01

0x727b,	// (0x00031b39) bg_popup_window_pane_g1_cp01

0xed9d,	// (0x0003965b) bg_popup_window_pane_cp22_ParamLimits

0xed9d,	// (0x0003965b) bg_popup_window_pane_cp22

0xedab,	// (0x00039669) listscroll_tmo_link_pane_ParamLimits

0xedab,	// (0x00039669) listscroll_tmo_link_pane

0xedeb,	// (0x000396a9) popup_tmo_note_window_g1_ParamLimits

0xedeb,	// (0x000396a9) popup_tmo_note_window_g1

0xedf8,	// (0x000396b6) tmo_note_info_pane_ParamLimits

0xedf8,	// (0x000396b6) tmo_note_info_pane

0xee12,	// (0x000396d0) list_tmo_note_info_pane_g1_ParamLimits

0xee12,	// (0x000396d0) list_tmo_note_info_pane_g1

0xee29,	// (0x000396e7) list_tmo_note_info_pane_g2_ParamLimits

0xee29,	// (0x000396e7) list_tmo_note_info_pane_g2

0x0001,

0xfeb3,	// (0x0003a771) list_tmo_note_info_pane_g_ParamLimits

0xfeb3,	// (0x0003a771) list_tmo_note_info_pane_g

0xee45,	// (0x00039703) list_tmo_note_info_text_pane_ParamLimits

0xee45,	// (0x00039703) list_tmo_note_info_text_pane

0xeec6,	// (0x00039784) list_tmo_link_pane

0xeed3,	// (0x00039791) scroll_pane_cp20

0xeee0,	// (0x0003979e) list_single_tmo_link_pane_ParamLimits

0xeee0,	// (0x0003979e) list_single_tmo_link_pane

0xeef0,	// (0x000397ae) list_single_tmo_link_pane_t1

0xeefe,	// (0x000397bc) list_tmo_note_info_text_pane_t1_ParamLimits

0xeefe,	// (0x000397bc) list_tmo_note_info_text_pane_t1

0x881c,	// (0x000330da) aid_size_touch_scroll_bar_cp01_ParamLimits

0x881c,	// (0x000330da) aid_size_touch_scroll_bar_cp01

0x52ad,	// (0x0002fb6b) aid_size_touch_slider_marker

0x4b12,	// (0x0002f3d0) popup_settings_window_ParamLimits

0x4b12,	// (0x0002f3d0) popup_settings_window

0x7450,	// (0x00031d0e) popup_candi_list_indi_window

0x979a,	// (0x00034058) aid_touch_navi_pane_ParamLimits

0x68eb,	// (0x000311a9) rs_clock_indi_pane

0x68f4,	// (0x000311b2) sctrl_sk_bottom_pane_ParamLimits

0x6905,	// (0x000311c3) sctrl_sk_top_pane_ParamLimits

0x6a08,	// (0x000312c6) popup_fep_tooltip_window

0xe86c,	// (0x0003912a) aid_size_cell_widget_grid_ParamLimits

0xe8e5,	// (0x000391a3) cell_ai5_widget_pane_g1_ParamLimits

0xe8e5,	// (0x000391a3) cell_ai5_widget_pane_g1

0xe948,	// (0x00039206) cell_ai5_widget_pane_g6_ParamLimits

0xe954,	// (0x00039212) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe31,	// (0x0003a6ef) cell_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x0003a6ef) cell_ai5_widget_pane_g

0xea9b,	// (0x00039359) cell_ai5_widget_pane_t10_ParamLimits

0xea9b,	// (0x00039359) cell_ai5_widget_pane_t10

0xeab9,	// (0x00039377) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x00039418) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x00039418) cell_contacts_ai5_widget_pane

0xed3c,	// (0x000395fa) popup_discreet_window_t3_ParamLimits

0xed3c,	// (0x000395fa) popup_discreet_window_t3

0x719c,	// (0x00031a5a) popup_fshwr2_char_preview_window_ParamLimits

0x719c,	// (0x00031a5a) popup_fshwr2_char_preview_window

0xee63,	// (0x00039721) tmo_note_info_pane_t1

0xee78,	// (0x00039736) tmo_note_info_pane_t2

0xee8d,	// (0x0003974b) tmo_note_info_pane_t3

0xeea2,	// (0x00039760) tmo_note_info_pane_t4

0xeeb4,	// (0x00039772) tmo_note_info_pane_t5

0x0004,

0xfeb8,	// (0x0003a776) tmo_note_info_pane_t

0xeec6,	// (0x00039784) list_tmo_link_pane_ParamLimits

0xeed3,	// (0x00039791) scroll_pane_cp20_ParamLimits

0x49c9,	// (0x0002f287) bg_popup_fep_char_preview_window_cp01

0xef17,	// (0x000397d5) popup_fshwr2_char_preview_window_t1

0xef25,	// (0x000397e3) popup_candi_list_indi_window_g1

0xef2e,	// (0x000397ec) bg_cell_contacts_ai5_widget_pane

0xef3a,	// (0x000397f8) cell_contacts_ai5_widget_pane_g1

0xc8ec,	// (0x000371aa) cell_contacts_ai5_widget_pane_g2

0xef4f,	// (0x0003980d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec3,	// (0x0003a781) cell_contacts_ai5_widget_pane_g

0xef5b,	// (0x00039819) cell_contacts_ai5_widget_pane_t1

0x8765,	// (0x00033023) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd2,	// (0x00039890) settings_container_pane

0x93fa,	// (0x00033cb8) listscroll_set_pane_copy1

0xb952,	// (0x00036210) scroll_pane_cp121_copy1

0xa07a,	// (0x00034938) set_content_pane_copy1

0xefde,	// (0x0003989c) aid_height_set_list_copy1_ParamLimits

0xefde,	// (0x0003989c) aid_height_set_list_copy1

0xb024,	// (0x000358e2) aid_size_parent_copy1_ParamLimits

0xb024,	// (0x000358e2) aid_size_parent_copy1

0xefea,	// (0x000398a8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefea,	// (0x000398a8) button_value_adjust_pane_cp6_copy1

0x971e,	// (0x00033fdc) list_highlight_pane_cp2_copy1_ParamLimits

0x971e,	// (0x00033fdc) list_highlight_pane_cp2_copy1

0xeffe,	// (0x000398bc) list_set_pane_copy1_ParamLimits

0xeffe,	// (0x000398bc) list_set_pane_copy1

0xef6d,	// (0x0003982b) main_pane_set_t1_copy1_ParamLimits

0xef6d,	// (0x0003982b) main_pane_set_t1_copy1

0xefa7,	// (0x00039865) main_pane_set_t2_copy1_ParamLimits

0xefa7,	// (0x00039865) main_pane_set_t2_copy1

0xf0ab,	// (0x00039969) main_pane_set_t3_copy1

0xf0b9,	// (0x00039977) main_pane_set_t4_copy1

0xefc6,	// (0x00039884) set_content_pane_g1_copy1_ParamLimits

0xefc6,	// (0x00039884) set_content_pane_g1_copy1

0xf0c7,	// (0x00039985) setting_code_pane_copy1

0xf0cf,	// (0x0003998d) setting_slider_graphic_pane_copy1

0xf0cf,	// (0x0003998d) setting_slider_pane_copy1

0xf0cf,	// (0x0003998d) setting_text_pane_copy1

0xf0cf,	// (0x0003998d) setting_volume_pane_copy1

0xf0c7,	// (0x00039985) settings_code_pane_cp2_copy1

0xf0d7,	// (0x00039995) settings_code_pane_cp_copy1_ParamLimits

0xf0d7,	// (0x00039995) settings_code_pane_cp_copy1

0x7284,	// (0x00031b42) volume_set_pane_copy1

0xf0eb,	// (0x000399a9) volume_set_pane_g10_copy1

0xf0f3,	// (0x000399b1) volume_set_pane_g1_copy1

0xf0fb,	// (0x000399b9) volume_set_pane_g2_copy1

0xf103,	// (0x000399c1) volume_set_pane_g3_copy1

0xf10b,	// (0x000399c9) volume_set_pane_g4_copy1

0xf113,	// (0x000399d1) volume_set_pane_g5_copy1

0xf11b,	// (0x000399d9) volume_set_pane_g6_copy1

0xf123,	// (0x000399e1) volume_set_pane_g7_copy1

0xf12b,	// (0x000399e9) volume_set_pane_g8_copy1

0xf133,	// (0x000399f1) volume_set_pane_g9_copy1

0x7ed0,	// (0x0003278e) bg_set_opt_pane_cp_copy1_ParamLimits

0x7ed0,	// (0x0003278e) bg_set_opt_pane_cp_copy1

0x728c,	// (0x00031b4a) setting_slider_pane_t1_copy1_ParamLimits

0x728c,	// (0x00031b4a) setting_slider_pane_t1_copy1

0x72aa,	// (0x00031b68) setting_slider_pane_t2_copy1_ParamLimits

0x72aa,	// (0x00031b68) setting_slider_pane_t2_copy1

0x72c4,	// (0x00031b82) setting_slider_pane_t3_copy1_ParamLimits

0x72c4,	// (0x00031b82) setting_slider_pane_t3_copy1

0x72dc,	// (0x00031b9a) slider_set_pane_copy1_ParamLimits

0x72dc,	// (0x00031b9a) slider_set_pane_copy1

0x87bd,	// (0x0003307b) set_opt_bg_pane_g1_copy2

0x87c5,	// (0x00033083) set_opt_bg_pane_g2_copy2

0xf13b,	// (0x000399f9) set_opt_bg_pane_g3_copy2

0x87d5,	// (0x00033093) set_opt_bg_pane_g4_copy2

0x87dd,	// (0x0003309b) set_opt_bg_pane_g5_copy2

0x87e5,	// (0x000330a3) set_opt_bg_pane_g6_copy2

0xf145,	// (0x00039a03) set_opt_bg_pane_g7_copy2

0xf14d,	// (0x00039a0b) set_opt_bg_pane_g8_copy2

0xf157,	// (0x00039a15) set_opt_bg_pane_g9_copy2

0x72f2,	// (0x00031bb0) aid_size_touch_slider_mark_copy1_ParamLimits

0x72f2,	// (0x00031bb0) aid_size_touch_slider_mark_copy1

0xf161,	// (0x00039a1f) slider_set_pane_g1_copy1

0x7306,	// (0x00031bc4) slider_set_pane_g2_copy1

0x6320,	// (0x00030bde) slider_set_pane_g3_copy1_ParamLimits

0x6320,	// (0x00030bde) slider_set_pane_g3_copy1

0x6334,	// (0x00030bf2) slider_set_pane_g4_copy1_ParamLimits

0x6334,	// (0x00030bf2) slider_set_pane_g4_copy1

0x634c,	// (0x00030c0a) slider_set_pane_g5_copy1_ParamLimits

0x634c,	// (0x00030c0a) slider_set_pane_g5_copy1

0x6320,	// (0x00030bde) slider_set_pane_g6_copy1_ParamLimits

0x6320,	// (0x00030bde) slider_set_pane_g6_copy1

0x730e,	// (0x00031bcc) slider_set_pane_g7_copy1_ParamLimits

0x730e,	// (0x00031bcc) slider_set_pane_g7_copy1

0x7df0,	// (0x000326ae) bg_set_opt_pane_cp2_copy1

0xf16a,	// (0x00039a28) setting_slider_graphic_pane_g1_copy1

0xf173,	// (0x00039a31) setting_slider_graphic_pane_t1_copy1

0xf183,	// (0x00039a41) setting_slider_graphic_pane_t2_copy1

0xf193,	// (0x00039a51) slider_set_pane_cp_copy1

0xf1a3,	// (0x00039a61) input_focus_pane_cp1_copy1

0xf1ac,	// (0x00039a6a) list_set_text_pane_copy1

0xf1b4,	// (0x00039a72) setting_text_pane_g1_copy1

0x4cb3,	// (0x0002f571) set_text_pane_t1_copy1

0xf1a3,	// (0x00039a61) input_focus_pane_cp2_copy1

0xf1b4,	// (0x00039a72) setting_code_pane_g1_copy1

0xf1bd,	// (0x00039a7b) setting_code_pane_t1_copy1

0xf1cb,	// (0x00039a89) list_set_graphic_pane_copy1

0x7df0,	// (0x000326ae) bg_set_opt_pane_cp4_copy1

0x90f5,	// (0x000339b3) list_set_graphic_pane_g1_copy1_ParamLimits

0x90f5,	// (0x000339b3) list_set_graphic_pane_g1_copy1

0xf1de,	// (0x00039a9c) list_set_graphic_pane_g2_copy1

0x910d,	// (0x000339cb) list_set_graphic_pane_t1_copy1_ParamLimits

0x910d,	// (0x000339cb) list_set_graphic_pane_t1_copy1

0xc242,	// (0x00036b00) rs_clock_indi_pane_g1

0xf1e6,	// (0x00039aa4) rs_clock_indi_pane_t1

0xf1f4,	// (0x00039ab2) rs_indi_pane

0xf1fc,	// (0x00039aba) rs_indi_pane_g1

0xf205,	// (0x00039ac3) rs_indi_pane_g2

0xf20e,	// (0x00039acc) rs_indi_pane_g3

0x0002,

0xfeca,	// (0x0003a788) rs_indi_pane_g

0x93fa,	// (0x00033cb8) bg_popup_preview_window_pane_cp03

0xf217,	// (0x00039ad5) popup_fep_tooltip_window_t1

0xceca,	// (0x00037788) popup_note2_window_g2_ParamLimits

0xceca,	// (0x00037788) popup_note2_window_g2

0x0001,

0xfc63,	// (0x0003a521) popup_note2_window_g_ParamLimits

0xfc63,	// (0x0003a521) popup_note2_window_g

0xd3c5,	// (0x00037c83) bg_popup_sub_pane_cp11_ParamLimits

0xd3d2,	// (0x00037c90) cell_ai3_links_pane_g1_ParamLimits

0xd3e9,	// (0x00037ca7) cell_ai3_links_pane_t1

0x4cb3,	// (0x0002f571) set_text_pane_t1_copy1_ParamLimits

0x930b,	// (0x00033bc9) cell_graphic_popup_pane_cp2_ParamLimits

0x930b,	// (0x00033bc9) cell_graphic_popup_pane_cp2

0xf225,	// (0x00039ae3) cell_graphic_popup_pane_g1_cp2

0x84b0,	// (0x00032d6e) cell_graphic_popup_pane_g2_cp2

0xf22d,	// (0x00039aeb) cell_graphic_popup_pane_g3_cp2

0xf235,	// (0x00039af3) cell_graphic_popup_pane_t2_cp2

0x84c1,	// (0x00032d7f) grid_highlight_pane_cp3_cp2

0x8b02,	// (0x000333c0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8765,	// (0x00033023) main_tmo_pane_ParamLimits

0xd71d,	// (0x00037fdb) popup_tmo_big_image_note_window

0xe8d4,	// (0x00039192) cell_ai5_widget_list_pane

0xe8dc,	// (0x0003919a) cell_ai5_widget_lrg_icon_pane

0xee63,	// (0x00039721) tmo_note_info_pane_t1_ParamLimits

0xee78,	// (0x00039736) tmo_note_info_pane_t2_ParamLimits

0xee8d,	// (0x0003974b) tmo_note_info_pane_t3_ParamLimits

0xeea2,	// (0x00039760) tmo_note_info_pane_t4_ParamLimits

0xeeb4,	// (0x00039772) tmo_note_info_pane_t5_ParamLimits

0xfeb8,	// (0x0003a776) tmo_note_info_pane_t_ParamLimits

0xefd2,	// (0x00039890) settings_container_pane_ParamLimits

0xf19b,	// (0x00039a59) indicator_popup_pane_cp5

0xf19b,	// (0x00039a59) indicator_popup_pane_cp6

0xf1cb,	// (0x00039a89) list_set_graphic_pane_copy1_ParamLimits

0x7ddc,	// (0x0003269a) bg_popup_window_pane_cp23

0xf243,	// (0x00039b01) popup_tmo_big_image_note_window_g1

0xf24d,	// (0x00039b0b) popup_tmo_big_image_note_window_t1

0xf25d,	// (0x00039b1b) popup_tmo_big_image_note_window_t2

0xf26d,	// (0x00039b2b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed1,	// (0x0003a78f) popup_tmo_big_image_note_window_t

0xc242,	// (0x00036b00) cell_ai5_widget_lrg_icon_pane_g1

0xf27d,	// (0x00039b3b) cell_ai5_widget_lrg_icon_pane_t1

0xf28b,	// (0x00039b49) cell_ai5_widget_list_row_pane_ParamLimits

0xf28b,	// (0x00039b49) cell_ai5_widget_list_row_pane

0xf2a2,	// (0x00039b60) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a2,	// (0x00039b60) cell_ai5_widget_list_row_pane_g1

0xf2af,	// (0x00039b6d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2af,	// (0x00039b6d) cell_ai5_widget_list_row_pane_t1

0xf2e0,	// (0x00039b9e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e0,	// (0x00039b9e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed8,	// (0x0003a796) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed8,	// (0x0003a796) cell_ai5_widget_list_row_pane_t

0x49c9,	// (0x0002f287) main_fep_vtchi_ss_pane

0xf328,	// (0x00039be6) popup_fep_char_pre_window

0xf330,	// (0x00039bee) popup_fep_ituss_window

0xf351,	// (0x00039c0f) popup_fep_vkbss_window

0xf37b,	// (0x00039c39) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x00039c39) grid_vkbss_keypad_pane

0xf38b,	// (0x00039c49) ituss_keypad_pane

0x7330,	// (0x00031bee) aid_vkbss_key_offset_ParamLimits

0x7330,	// (0x00031bee) aid_vkbss_key_offset

0x733c,	// (0x00031bfa) cell_vkbss_key_pane_ParamLimits

0x733c,	// (0x00031bfa) cell_vkbss_key_pane

0xf39a,	// (0x00039c58) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x00039c58) bg_cell_vkbss_key_g1

0xf3a6,	// (0x00039c64) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x00039c64) cell_vkbss_key_3p_pane

0xf3ba,	// (0x00039c78) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x00039c78) cell_vkbss_key_g1

0xf3ce,	// (0x00039c8c) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x00039c8c) cell_vkbss_key_t1

0x7352,	// (0x00031c10) cell_ituss_key_pane_ParamLimits

0x7352,	// (0x00031c10) cell_ituss_key_pane

0xf3f9,	// (0x00039cb7) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x00039cb7) bg_cell_ituss_key_g1

0xf405,	// (0x00039cc3) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x00039cc3) cell_ituss_key_pane_g1

0x7363,	// (0x00031c21) cell_ituss_key_pane_g2_ParamLimits

0x7363,	// (0x00031c21) cell_ituss_key_pane_g2

0x0002,

0xfedf,	// (0x0003a79d) cell_ituss_key_pane_g_ParamLimits

0xfedf,	// (0x0003a79d) cell_ituss_key_pane_g

0x738f,	// (0x00031c4d) cell_ituss_key_t1_ParamLimits

0x738f,	// (0x00031c4d) cell_ituss_key_t1

0x73c9,	// (0x00031c87) cell_ituss_key_t2_ParamLimits

0x73c9,	// (0x00031c87) cell_ituss_key_t2

0x73fa,	// (0x00031cb8) cell_ituss_key_t3_ParamLimits

0x73fa,	// (0x00031cb8) cell_ituss_key_t3

0x73c9,	// (0x00031c87) cell_ituss_key_t4_ParamLimits

0x73c9,	// (0x00031c87) cell_ituss_key_t4

0x0004,

0xfee6,	// (0x0003a7a4) cell_ituss_key_t_ParamLimits

0xfee6,	// (0x0003a7a4) cell_ituss_key_t

0xf431,	// (0x00039cef) cell_vkbss_key_3p_pane_g1

0xf439,	// (0x00039cf7) cell_vkbss_key_3p_pane_g2

0xf441,	// (0x00039cff) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0003a7af) cell_vkbss_key_3p_pane_g

0x93fa,	// (0x00033cb8) bg_popup_fep_char_preview_window_cp02

0xf449,	// (0x00039d07) popup_fep_char_pre_window_t1

0xe859,	// (0x00039117) main_ai5_sk_pane

0xef2e,	// (0x000397ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef3a,	// (0x000397f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc8ec,	// (0x000371aa) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4f,	// (0x0003980d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec3,	// (0x0003a781) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5b,	// (0x00039819) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8765,	// (0x00033023) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf457,	// (0x00039d15) main_ai5_sk_pane_g1

0xa10e,	// (0x000349cc) popup_query_code_window_g1

0xf346,	// (0x00039c04) popup_fep_vkb_icf_pane

0xf365,	// (0x00039c23) popup_fep_vtchi_icf_pane

0xf460,	// (0x00039d1e) bg_icf_pane

0xf46c,	// (0x00039d2a) list_vkb_icf_pane

0xf47b,	// (0x00039d39) bg_icf_pane_cp01

0xf48e,	// (0x00039d4c) vtchi_icf_list_pane

0xf49e,	// (0x00039d5c) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x00039d5c) list_vkb_icf_pane_t1

0xf4b4,	// (0x00039d72) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x00039d72) vtchi_icf_list_pane_t1

0xf330,	// (0x00039bee) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x00039c23) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x00039c49) ituss_keypad_pane_ParamLimits

0x7324,	// (0x00031be2) ituss_sks_pane

0xf460,	// (0x00039d1e) bg_icf_pane_ParamLimits

0xf308,	// (0x00039bc6) icf_edit_indi_pane_ParamLimits

0xf308,	// (0x00039bc6) icf_edit_indi_pane

0xf46c,	// (0x00039d2a) list_vkb_icf_pane_ParamLimits

0xf47b,	// (0x00039d39) bg_icf_pane_cp01_ParamLimits

0xf31b,	// (0x00039bd9) icf_edit_indi_pane_cp01_ParamLimits

0xf31b,	// (0x00039bd9) icf_edit_indi_pane_cp01

0xf496,	// (0x00039d54) vtchi_query_pane

0xe6e3,	// (0x00038fa1) icf_edit_indi_pane_g1_ParamLimits

0xe6e3,	// (0x00038fa1) icf_edit_indi_pane_g1

0xf525,	// (0x00039de3) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x00039de3) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0003a7c7) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0003a7c7) icf_edit_indi_pane_g

0xf537,	// (0x00039df5) icf_edit_indi_pane_t1

0xf4ce,	// (0x00039d8c) bg_input_focus_pane_cp042

0x8694,	// (0x00032f52) vtchi_button_pane

0xf4d7,	// (0x00039d95) vtchi_query_pane_t1

0xf4e5,	// (0x00039da3) vtchi_query_pane_t2

0xf4f3,	// (0x00039db1) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0003a7b6) vtchi_query_pane_t

0x49c9,	// (0x0002f287) bg_button_pane_cp13

0xf501,	// (0x00039dbf) vtchi_button_pane_g1

0x743d,	// (0x00031cfb) ituss_sks_pane_g1

0x7448,	// (0x00031d06) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0003a7bd) ituss_sks_pane_g

0xf509,	// (0x00039dc7) ituss_sks_pane_t1

0xf517,	// (0x00039dd5) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0003a7c2) ituss_sks_pane_t

0xbccd,	// (0x0003658b) indicator_nsta_pane_cp_g1

0xbcd5,	// (0x00036593) indicator_nsta_pane_cp_g2

0xbcdd,	// (0x0003659b) indicator_nsta_pane_cp_g3

0xbccd,	// (0x0003658b) indicator_nsta_pane_cp_g4

0xbcd5,	// (0x00036593) indicator_nsta_pane_cp_g5

0xbcdd,	// (0x0003659b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa1,	// (0x0003a35f) indicator_nsta_pane_cp_g

0xe422,	// (0x00038ce0) cell_graphic2_pane_t2_ParamLimits

0xe422,	// (0x00038ce0) cell_graphic2_pane_t2

0x0001,

0xfdba,	// (0x0003a678) cell_graphic2_pane_t_ParamLimits

0xfdba,	// (0x0003a678) cell_graphic2_pane_t

0xe44f,	// (0x00038d0d) cell_graphic2_control_pane_t1

0x8ea8,	// (0x00033766) signal_pane_g3_ParamLimits

0x8ea8,	// (0x00033766) signal_pane_g3

0x8eba,	// (0x00033778) signal_pane_g4_ParamLimits

0x8eba,	// (0x00033778) signal_pane_g4

0xf2f2,	// (0x00039bb0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f2,	// (0x00039bb0) cell_ai5_widget_list_row_pane_t3

0xf41f,	// (0x00039cdd) cell_ituss_key_pane_t1_ParamLimits

0xf41f,	// (0x00039cdd) cell_ituss_key_pane_t1

0x9d47,	// (0x00034605) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d47,	// (0x00034605) form_field_data_wide_pane_vc_t2

0x9d5b,	// (0x00034619) form_field_data_wide_pane_vc_t3_ParamLimits

0x9d5b,	// (0x00034619) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003a0c7) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003a0c7) form_field_data_wide_pane_vc_t

0xb994,	// (0x00036252) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb994,	// (0x00036252) form_field_slider_wide_pane_vc_t3

0xba72,	// (0x00036330) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba72,	// (0x00036330) form_field_popup_wide_pane_vc_t2

0xba89,	// (0x00036347) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba89,	// (0x00036347) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa90,	// (0x0003a34e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0003a34e) form_field_popup_wide_pane_vc_t

0x713e,	// (0x000319fc) aid_fshwr2_btn_pane_ParamLimits

0x714a,	// (0x00031a08) aid_fshwr2_syb_pane_ParamLimits

0x7156,	// (0x00031a14) aid_fshwr2_txt_pane_ParamLimits

0x6990,	// (0x0003124e) fshwr2_bg_pane_ParamLimits

0x7162,	// (0x00031a20) fshwr2_func_candi_pane_ParamLimits

0x7177,	// (0x00031a35) fshwr2_hwr_syb_pane_ParamLimits

0x7187,	// (0x00031a45) fshwr2_icf_pane_ParamLimits

0x7979,	// (0x00032237) list_double_graphic_pane_vc_g4_ParamLimits

0x7979,	// (0x00032237) list_double_graphic_pane_vc_g4

0x7383,	// (0x00031c41) cell_ituss_key_pane_g3_ParamLimits

0x7383,	// (0x00031c41) cell_ituss_key_pane_g3

0x742b,	// (0x00031ce9) cell_ituss_key_t5_ParamLimits

0x742b,	// (0x00031ce9) cell_ituss_key_t5

0xf351,	// (0x00039c0f) popup_fep_vkbss_window_ParamLimits

0xe863,	// (0x00039121) aid_cell_ai5_quarter

0xf537,	// (0x00039df5) icf_edit_indi_pane_t1_ParamLimits

0x8201,	// (0x00032abf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8201,	// (0x00032abf) aid_tch_indicator_popup_pane_cp2

0x8214,	// (0x00032ad2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8214,	// (0x00032ad2) aid_tch_query_popup_data_pane_cp2

0xa0b6,	// (0x00034974) aid_tch_query_popup_pane_ParamLimits

0xa0b6,	// (0x00034974) aid_tch_query_popup_pane

0xa0b6,	// (0x00034974) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa0b6,	// (0x00034974) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

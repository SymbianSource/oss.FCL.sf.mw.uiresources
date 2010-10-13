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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00015597 };

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
0x9622,	// (0x0001ebb9) Screen

0x962e,	// (0x0001ebc5) application_window_ParamLimits

0x962e,	// (0x0001ebc5) application_window

0xc3e9,	// (0x00021980) screen_g1

0x7f69,	// (0x0001d500) area_bottom_pane_ParamLimits

0x7f69,	// (0x0001d500) area_bottom_pane

0x8027,	// (0x0001d5be) area_top_pane_ParamLimits

0x8027,	// (0x0001d5be) area_top_pane

0x80bb,	// (0x0001d652) main_pane_ParamLimits

0x80bb,	// (0x0001d652) main_pane

0xc3f3,	// (0x0002198a) misc_graphics

0xa7aa,	// (0x0001fd41) battery_pane_ParamLimits

0xa7aa,	// (0x0001fd41) battery_pane

0x1ab5,	// (0x0001704c) bg_status_flat_pane_g8

0x1abd,	// (0x00017054) bg_status_flat_pane_g9

0x0d8c,	// (0x00016323) context_pane_ParamLimits

0x0d8c,	// (0x00016323) context_pane

0xa915,	// (0x0001feac) navi_pane_ParamLimits

0xa915,	// (0x0001feac) navi_pane

0xa993,	// (0x0001ff2a) signal_pane_ParamLimits

0xa993,	// (0x0001ff2a) signal_pane

0x0008,

0xf834,	// (0x00024dcb) bg_status_flat_pane_g

0xaa23,	// (0x0001ffba) status_pane_g1_ParamLimits

0xaa23,	// (0x0001ffba) status_pane_g1

0xaa39,	// (0x0001ffd0) status_pane_g2_ParamLimits

0xaa39,	// (0x0001ffd0) status_pane_g2

0x0fb3,	// (0x0001654a) status_pane_g3_ParamLimits

0x0fb3,	// (0x0001654a) status_pane_g3

0x0004,

0xf767,	// (0x00024cfe) status_pane_g_ParamLimits

0xf767,	// (0x00024cfe) status_pane_g

0xaa45,	// (0x0001ffdc) title_pane_ParamLimits

0xaa45,	// (0x0001ffdc) title_pane

0xaaa8,	// (0x0002003f) uni_indicator_pane_ParamLimits

0xaaa8,	// (0x0002003f) uni_indicator_pane

0xd307,	// (0x0002289e) bg_list_pane_ParamLimits

0xd307,	// (0x0002289e) bg_list_pane

0xa71d,	// (0x0001fcb4) find_pane

0x1289,	// (0x00016820) listscroll_app_pane_ParamLimits

0x1289,	// (0x00016820) listscroll_app_pane

0xd327,	// (0x000228be) listscroll_form_pane

0x8526,	// (0x0001dabd) listscroll_gen_pane_ParamLimits

0x8526,	// (0x0001dabd) listscroll_gen_pane

0xe76d,	// (0x00023d04) listscroll_set_pane

0x262b,	// (0x00017bc2) main_idle_act_pane

0xd19b,	// (0x00022732) main_idle_trad_pane

0xd19b,	// (0x00022732) main_list_empty_pane

0xca39,	// (0x00021fd0) main_midp_pane

0xd341,	// (0x000228d8) main_pane_g1_ParamLimits

0xd341,	// (0x000228d8) main_pane_g1

0x853a,	// (0x0001dad1) popup_ai_message_window_ParamLimits

0x853a,	// (0x0001dad1) popup_ai_message_window

0x85eb,	// (0x0001db82) popup_fep_china_uni_window_ParamLimits

0x85eb,	// (0x0001db82) popup_fep_china_uni_window

0x8645,	// (0x0001dbdc) popup_fep_japan_candidate_window_ParamLimits

0x8645,	// (0x0001dbdc) popup_fep_japan_candidate_window

0x8663,	// (0x0001dbfa) popup_fep_japan_predictive_window_ParamLimits

0x8663,	// (0x0001dbfa) popup_fep_japan_predictive_window

0x8675,	// (0x0001dc0c) popup_find_window

0x8692,	// (0x0001dc29) popup_grid_graphic_window_ParamLimits

0x8692,	// (0x0001dc29) popup_grid_graphic_window

0xe7b9,	// (0x00023d50) popup_large_graphic_colour_window

0x8730,	// (0x0001dcc7) popup_menu_window_ParamLimits

0x8730,	// (0x0001dcc7) popup_menu_window

0x8902,	// (0x0001de99) popup_note_image_window

0x88c8,	// (0x0001de5f) popup_note_wait_window_ParamLimits

0x88c8,	// (0x0001de5f) popup_note_wait_window

0x891a,	// (0x0001deb1) popup_note_window_ParamLimits

0x891a,	// (0x0001deb1) popup_note_window

0x89c9,	// (0x0001df60) popup_query_code_window_ParamLimits

0x89c9,	// (0x0001df60) popup_query_code_window

0x8a03,	// (0x0001df9a) popup_query_data_code_window_ParamLimits

0x8a03,	// (0x0001df9a) popup_query_data_code_window

0x8a20,	// (0x0001dfb7) popup_query_data_window_ParamLimits

0x8a20,	// (0x0001dfb7) popup_query_data_window

0x8aa2,	// (0x0001e039) popup_query_sat_info_window_ParamLimits

0x8aa2,	// (0x0001e039) popup_query_sat_info_window

0x8b39,	// (0x0001e0d0) popup_snote_single_graphic_window_ParamLimits

0x8b39,	// (0x0001e0d0) popup_snote_single_graphic_window

0x8b39,	// (0x0001e0d0) popup_snote_single_text_window_ParamLimits

0x8b39,	// (0x0001e0d0) popup_snote_single_text_window

0xe7df,	// (0x00023d76) popup_sub_window_general

0x8c96,	// (0x0001e22d) popup_window_general_ParamLimits

0x8c96,	// (0x0001e22d) popup_window_general

0x0c48,	// (0x000161df) power_save_pane

0x83a7,	// (0x0001d93e) control_pane_g1_ParamLimits

0x83a7,	// (0x0001d93e) control_pane_g1

0x83d0,	// (0x0001d967) control_pane_g2_ParamLimits

0x83d0,	// (0x0001d967) control_pane_g2

0xd2f1,	// (0x00022888) control_pane_g3_ParamLimits

0xd2f1,	// (0x00022888) control_pane_g3

0x0007,

0xf74f,	// (0x00024ce6) control_pane_g_ParamLimits

0xf74f,	// (0x00024ce6) control_pane_g

0x8411,	// (0x0001d9a8) control_pane_t1_ParamLimits

0x8411,	// (0x0001d9a8) control_pane_t1

0x8479,	// (0x0001da10) control_pane_t2_ParamLimits

0x8479,	// (0x0001da10) control_pane_t2

0x0002,

0xf760,	// (0x00024cf7) control_pane_t_ParamLimits

0xf760,	// (0x00024cf7) control_pane_t

0xa66d,	// (0x0001fc04) navi_navi_volume_pane_cp1

0xa675,	// (0x0001fc0c) status_small_icon_pane

0xd29d,	// (0x00022834) status_small_pane_g1_ParamLimits

0xd29d,	// (0x00022834) status_small_pane_g1

0xa67d,	// (0x0001fc14) status_small_pane_g2_ParamLimits

0xa67d,	// (0x0001fc14) status_small_pane_g2

0xd2d1,	// (0x00022868) status_small_pane_g3_ParamLimits

0xd2d1,	// (0x00022868) status_small_pane_g3

0xa689,	// (0x0001fc20) status_small_pane_g4_ParamLimits

0xa689,	// (0x0001fc20) status_small_pane_g4

0xa697,	// (0x0001fc2e) status_small_pane_g5_ParamLimits

0xa697,	// (0x0001fc2e) status_small_pane_g5

0xa6a5,	// (0x0001fc3c) status_small_pane_g6_ParamLimits

0xa6a5,	// (0x0001fc3c) status_small_pane_g6

0x0007,

0xf73e,	// (0x00024cd5) status_small_pane_g_ParamLimits

0xf73e,	// (0x00024cd5) status_small_pane_g

0xa6c0,	// (0x0001fc57) status_small_pane_t1

0xa6e2,	// (0x0001fc79) status_small_wait_pane_ParamLimits

0xa6e2,	// (0x0001fc79) status_small_wait_pane

0xa397,	// (0x0001f92e) aid_levels_signal_ParamLimits

0xa397,	// (0x0001f92e) aid_levels_signal

0xa3af,	// (0x0001f946) signal_pane_g1_ParamLimits

0xa3af,	// (0x0001f946) signal_pane_g1

0xa3ca,	// (0x0001f961) signal_pane_g2_ParamLimits

0xa3ca,	// (0x0001f961) signal_pane_g2

0x0003,

0xf6cf,	// (0x00024c66) signal_pane_g_ParamLimits

0xf6cf,	// (0x00024c66) signal_pane_g

0xcda1,	// (0x00022338) context_pane_g1

0x963e,	// (0x0001ebd5) title_pane_g1

0x9675,	// (0x0001ec0c) title_pane_t1

0xc409,	// (0x000219a0) title_pane_t2

0xc42f,	// (0x000219c6) title_pane_t3

0x0002,

0xf532,	// (0x00024ac9) title_pane_t

0xaad0,	// (0x00020067) aid_levels_battery_ParamLimits

0xaad0,	// (0x00020067) aid_levels_battery

0xaaec,	// (0x00020083) battery_pane_g1_ParamLimits

0xaaec,	// (0x00020083) battery_pane_g1

0xab09,	// (0x000200a0) battery_pane_g2_ParamLimits

0xab09,	// (0x000200a0) battery_pane_g2

0x0001,

0xf772,	// (0x00024d09) battery_pane_g_ParamLimits

0xf772,	// (0x00024d09) battery_pane_g

0xb0e6,	// (0x0002067d) uni_indicator_pane_g1

0xb0fc,	// (0x00020693) uni_indicator_pane_g2

0xb112,	// (0x000206a9) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x00024e73) uni_indicator_pane_g

0xd03e,	// (0x000225d5) navi_icon_pane_ParamLimits

0xd03e,	// (0x000225d5) navi_icon_pane

0xcf93,	// (0x0002252a) navi_midp_pane

0xd05a,	// (0x000225f1) navi_navi_pane

0xd064,	// (0x000225fb) navi_text_pane_ParamLimits

0xd064,	// (0x000225fb) navi_text_pane

0xc3e9,	// (0x00021980) status_small_wait_pane_g1

0xc69a,	// (0x00021c31) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x00024e6e) status_small_wait_pane_g

0xb03f,	// (0x000205d6) navi_navi_icon_text_pane

0x2108,	// (0x0001769f) navi_navi_pane_g1_ParamLimits

0x2108,	// (0x0001769f) navi_navi_pane_g1

0x211a,	// (0x000176b1) navi_navi_pane_g2_ParamLimits

0x211a,	// (0x000176b1) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x00024e3c) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x00024e3c) navi_navi_pane_g

0x212c,	// (0x000176c3) navi_navi_tabs_pane

0x2135,	// (0x000176cc) navi_navi_text_pane

0xb03f,	// (0x000205d6) navi_navi_volume_pane

0x20dc,	// (0x00017673) navi_text_pane_t1

0x20d0,	// (0x00017667) navi_icon_pane_g1

0x2023,	// (0x000175ba) navi_navi_text_pane_t1

0x8d53,	// (0x0001e2ea) navi_navi_volume_pane_g1

0xea4a,	// (0x00023fe1) volume_small_pane

0x1f89,	// (0x00017520) navi_navi_icon_text_pane_g1

0xaf97,	// (0x0002052e) navi_navi_icon_text_pane_t1

0xd05a,	// (0x000225f1) navi_tabs_2_long_pane

0xd05a,	// (0x000225f1) navi_tabs_2_pane

0xd05a,	// (0x000225f1) navi_tabs_3_long_pane

0xd05a,	// (0x000225f1) navi_tabs_3_pane

0xd05a,	// (0x000225f1) navi_tabs_4_pane

0xea2a,	// (0x00023fc1) tabs_2_active_pane_ParamLimits

0xea2a,	// (0x00023fc1) tabs_2_active_pane

0xea3a,	// (0x00023fd1) tabs_2_passive_pane_ParamLimits

0xea3a,	// (0x00023fd1) tabs_2_passive_pane

0xe9f8,	// (0x00023f8f) tabs_3_active_pane_ParamLimits

0xe9f8,	// (0x00023f8f) tabs_3_active_pane

0xea08,	// (0x00023f9f) tabs_3_passive_pane_ParamLimits

0xea08,	// (0x00023f9f) tabs_3_passive_pane

0xea19,	// (0x00023fb0) tabs_3_passive_pane_cp_ParamLimits

0xea19,	// (0x00023fb0) tabs_3_passive_pane_cp

0xe9b4,	// (0x00023f4b) tabs_4_active_pane_ParamLimits

0xe9b4,	// (0x00023f4b) tabs_4_active_pane

0xe9c5,	// (0x00023f5c) tabs_4_passive_pane_ParamLimits

0xe9c5,	// (0x00023f5c) tabs_4_passive_pane

0xe9d6,	// (0x00023f6d) tabs_4_passive_pane_cp_ParamLimits

0xe9d6,	// (0x00023f6d) tabs_4_passive_pane_cp

0xe9e7,	// (0x00023f7e) tabs_4_passive_pane_cp2_ParamLimits

0xe9e7,	// (0x00023f7e) tabs_4_passive_pane_cp2

0xe990,	// (0x00023f27) tabs_2_long_active_pane_ParamLimits

0xe990,	// (0x00023f27) tabs_2_long_active_pane

0xe9a2,	// (0x00023f39) tabs_2_long_passive_pane_ParamLimits

0xe9a2,	// (0x00023f39) tabs_2_long_passive_pane

0xe94b,	// (0x00023ee2) tabs_3_long_active_pane_ParamLimits

0xe94b,	// (0x00023ee2) tabs_3_long_active_pane

0xe964,	// (0x00023efb) tabs_3_long_passive_pane_ParamLimits

0xe964,	// (0x00023efb) tabs_3_long_passive_pane

0xe977,	// (0x00023f0e) tabs_3_long_passive_pane_cp_ParamLimits

0xe977,	// (0x00023f0e) tabs_3_long_passive_pane_cp

0xe8f1,	// (0x00023e88) volume_small_pane_g1

0xe8fa,	// (0x00023e91) volume_small_pane_g2

0xe903,	// (0x00023e9a) volume_small_pane_g3

0xe90c,	// (0x00023ea3) volume_small_pane_g4

0xe915,	// (0x00023eac) volume_small_pane_g5

0xe91e,	// (0x00023eb5) volume_small_pane_g6

0xe927,	// (0x00023ebe) volume_small_pane_g7

0xe930,	// (0x00023ec7) volume_small_pane_g8

0xe939,	// (0x00023ed0) volume_small_pane_g9

0xe942,	// (0x00023ed9) volume_small_pane_g10

0x0009,

0xf871,	// (0x00024e08) volume_small_pane_g

0xc441,	// (0x000219d8) bg_active_tab_pane_cp2_ParamLimits

0xc441,	// (0x000219d8) bg_active_tab_pane_cp2

0x9701,	// (0x0001ec98) tabs_3_active_pane_g1

0x9709,	// (0x0001eca0) tabs_3_active_pane_t1

0xc441,	// (0x000219d8) bg_passive_tab_pane_cp2_ParamLimits

0xc441,	// (0x000219d8) bg_passive_tab_pane_cp2

0x9701,	// (0x0001ec98) tabs_3_passive_pane_g1

0x9709,	// (0x0001eca0) tabs_3_passive_pane_t1

0xc441,	// (0x000219d8) bg_active_tab_pane_cp3_ParamLimits

0xc441,	// (0x000219d8) bg_active_tab_pane_cp3

0x971b,	// (0x0001ecb2) tabs_4_active_pane_g1

0x9723,	// (0x0001ecba) tabs_4_active_pane_t1

0xc441,	// (0x000219d8) bg_passive_tab_pane_cp3_ParamLimits

0xc441,	// (0x000219d8) bg_passive_tab_pane_cp3

0x971b,	// (0x0001ecb2) tabs_4_1_passive_pane_g1

0x9723,	// (0x0001ecba) tabs_4_1_passive_pane_t1

0xca39,	// (0x00021fd0) list_highlight_pane_cp2

0xb232,	// (0x000207c9) list_set_pane_ParamLimits

0xb232,	// (0x000207c9) list_set_pane

0xb2cc,	// (0x00020863) main_pane_set_t1_ParamLimits

0xb2cc,	// (0x00020863) main_pane_set_t1

0xb2ec,	// (0x00020883) main_pane_set_t2_ParamLimits

0xb2ec,	// (0x00020883) main_pane_set_t2

0xb300,	// (0x00020897) main_pane_set_t3_ParamLimits

0xb300,	// (0x00020897) main_pane_set_t3

0xb312,	// (0x000208a9) main_pane_set_t4_ParamLimits

0xb312,	// (0x000208a9) main_pane_set_t4

0x0003,

0xf941,	// (0x00024ed8) main_pane_set_t_ParamLimits

0xf941,	// (0x00024ed8) main_pane_set_t

0xb324,	// (0x000208bb) setting_code_pane

0xb32e,	// (0x000208c5) setting_slider_graphic_pane

0xb32e,	// (0x000208c5) setting_slider_pane

0xb32e,	// (0x000208c5) setting_text_pane

0xb32e,	// (0x000208c5) setting_volume_pane

0x82b6,	// (0x0001d84d) volume_set_pane

0xc44f,	// (0x000219e6) bg_set_opt_pane_cp

0x82be,	// (0x0001d855) setting_slider_pane_t1

0x82d7,	// (0x0001d86e) setting_slider_pane_t2

0x82f1,	// (0x0001d888) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00024ad0) setting_slider_pane_t

0x8309,	// (0x0001d8a0) slider_set_pane

0xc3f3,	// (0x0002198a) bg_set_opt_pane_cp2

0xc45d,	// (0x000219f4) setting_slider_graphic_pane_g1

0x831f,	// (0x0001d8b6) setting_slider_graphic_pane_t1

0x832f,	// (0x0001d8c6) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00024ad7) setting_slider_graphic_pane_t

0x833f,	// (0x0001d8d6) slider_set_pane_cp

0xc3f3,	// (0x0002198a) input_focus_pane_cp1

0x2612,	// (0x00017ba9) list_set_text_pane

0xc3e9,	// (0x00021980) setting_text_pane_g1

0xc3f3,	// (0x0002198a) input_focus_pane_cp2

0xc3e9,	// (0x00021980) setting_code_pane_g1

0xc466,	// (0x000219fd) setting_code_pane_t1

0xc474,	// (0x00021a0b) set_text_pane_t1_ParamLimits

0xc474,	// (0x00021a0b) set_text_pane_t1

0xc94f,	// (0x00021ee6) set_opt_bg_pane_g1

0xc957,	// (0x00021eee) set_opt_bg_pane_g2

0xb1e7,	// (0x0002077e) set_opt_bg_pane_g3

0xc967,	// (0x00021efe) set_opt_bg_pane_g4

0xc96f,	// (0x00021f06) set_opt_bg_pane_g5

0xc977,	// (0x00021f0e) set_opt_bg_pane_g6

0xb1f1,	// (0x00020788) set_opt_bg_pane_g7

0xb1f9,	// (0x00020790) set_opt_bg_pane_g8

0xb203,	// (0x0002079a) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x00024ec5) set_opt_bg_pane_g

0xb1da,	// (0x00020771) slider_set_pane_g1

0xea53,	// (0x00023fea) slider_set_pane_g2

0x0006,

0xf91f,	// (0x00024eb6) slider_set_pane_g

0x8d5b,	// (0x0001e2f2) volume_set_pane_g1

0x8d63,	// (0x0001e2fa) volume_set_pane_g2

0x8d6b,	// (0x0001e302) volume_set_pane_g3

0x8d73,	// (0x0001e30a) volume_set_pane_g4

0x8d7b,	// (0x0001e312) volume_set_pane_g5

0x8d83,	// (0x0001e31a) volume_set_pane_g6

0x8d8b,	// (0x0001e322) volume_set_pane_g7

0x8d93,	// (0x0001e32a) volume_set_pane_g8

0x8d9b,	// (0x0001e332) volume_set_pane_g9

0x8da3,	// (0x0001e33a) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x00024e8e) volume_set_pane_g

0x9735,	// (0x0001eccc) indicator_pane_ParamLimits

0x9735,	// (0x0001eccc) indicator_pane

0x975d,	// (0x0001ecf4) main_idle_pane_g2_ParamLimits

0x975d,	// (0x0001ecf4) main_idle_pane_g2

0x9795,	// (0x0001ed2c) main_pane_idle_g1_ParamLimits

0x9795,	// (0x0001ed2c) main_pane_idle_g1

0xc48e,	// (0x00021a25) popup_clock_digital_analogue_window_ParamLimits

0xc48e,	// (0x00021a25) popup_clock_digital_analogue_window

0x97bc,	// (0x0001ed53) soft_indicator_pane_ParamLimits

0x97bc,	// (0x0001ed53) soft_indicator_pane

0x97e0,	// (0x0001ed77) wallpaper_pane_ParamLimits

0x97e0,	// (0x0001ed77) wallpaper_pane

0xc3e9,	// (0x00021980) wallpaper_pane_g1

0x97f2,	// (0x0001ed89) indicator_pane_g1_ParamLimits

0x97f2,	// (0x0001ed89) indicator_pane_g1

0x2b03,	// (0x0001809a) navi_navi_icon_text_pane_srt_g1

0xc4bc,	// (0x00021a53) soft_indicator_pane_t1

0xc4d6,	// (0x00021a6d) aid_ps_area_pane

0x9808,	// (0x0001ed9f) aid_ps_clock_pane

0xc4e7,	// (0x00021a7e) aid_ps_indicator_pane

0xc4f3,	// (0x00021a8a) indicator_ps_pane_ParamLimits

0xc4f3,	// (0x00021a8a) indicator_ps_pane

0xc502,	// (0x00021a99) power_save_pane_g1_ParamLimits

0xc502,	// (0x00021a99) power_save_pane_g1

0xc50e,	// (0x00021aa5) power_save_pane_g2_ParamLimits

0xc50e,	// (0x00021aa5) power_save_pane_g2

0xe2d5,	// (0x0002386c) aid_navinavi_width_pane

0xc4d6,	// (0x00021a6d) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00024adc) power_save_pane_g_ParamLimits

0xf545,	// (0x00024adc) power_save_pane_g

0xc51c,	// (0x00021ab3) power_save_pane_t1_ParamLimits

0xc51c,	// (0x00021ab3) power_save_pane_t1

0x9808,	// (0x0001ed9f) aid_ps_clock_pane_ParamLimits

0xc4e7,	// (0x00021a7e) aid_ps_indicator_pane_ParamLimits

0xc52e,	// (0x00021ac5) power_save_pane_t4_ParamLimits

0xc52e,	// (0x00021ac5) power_save_pane_t4

0x0001,

0xf54a,	// (0x00024ae1) power_save_pane_t_ParamLimits

0xf54a,	// (0x00024ae1) power_save_pane_t

0xc558,	// (0x00021aef) power_save_t3_ParamLimits

0xc558,	// (0x00021aef) power_save_t3

0xc543,	// (0x00021ada) power_save_t2_ParamLimits

0xc543,	// (0x00021ada) power_save_t2

0xc56d,	// (0x00021b04) indicator_ps_pane_g1

0x9816,	// (0x0001edad) ai_gene_pane_ParamLimits

0x9816,	// (0x0001edad) ai_gene_pane

0x982d,	// (0x0001edc4) ai_links_pane_ParamLimits

0x982d,	// (0x0001edc4) ai_links_pane

0x9845,	// (0x0001eddc) indicator_pane_cp1_ParamLimits

0x9845,	// (0x0001eddc) indicator_pane_cp1

0x9854,	// (0x0001edeb) main_pane_idle_g1_cp_ParamLimits

0x9854,	// (0x0001edeb) main_pane_idle_g1_cp

0x986c,	// (0x0001ee03) popup_ai_links_title_window

0x9875,	// (0x0001ee0c) soft_indicator_pane_cp1_ParamLimits

0x9875,	// (0x0001ee0c) soft_indicator_pane_cp1

0x23c7,	// (0x0001795e) ai_links_pane_g1

0x23d0,	// (0x00017967) grid_ai_links_pane

0xb0dd,	// (0x00020674) ai_gene_pane_1

0x23b5,	// (0x0001794c) ai_gene_pane_2

0x23be,	// (0x00017955) list_highlight_pane_cp4

0xb0b9,	// (0x00020650) cell_ai_link_pane_ParamLimits

0xb0b9,	// (0x00020650) cell_ai_link_pane

0x2386,	// (0x0001791d) cell_ai_link_pane_g1

0xc69a,	// (0x00021c31) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x00024e69) cell_ai_link_pane_g

0xc3f3,	// (0x0002198a) grid_highlight_cp2

0xc3f3,	// (0x0002198a) bg_popup_sub_pane_cp1

0xc584,	// (0x00021b1b) popup_ai_links_title_window_t1

0x22d6,	// (0x0001786d) ai_gene_pane_1_g1_ParamLimits

0x22d6,	// (0x0001786d) ai_gene_pane_1_g1

0x22e2,	// (0x00017879) ai_gene_pane_1_g2_ParamLimits

0x22e2,	// (0x00017879) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x00024e5f) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x00024e5f) ai_gene_pane_1_g

0x22ef,	// (0x00017886) ai_gene_pane_1_t1_ParamLimits

0x22ef,	// (0x00017886) ai_gene_pane_1_t1

0x2323,	// (0x000178ba) grid_ai_soft_ind_pane

0x22c1,	// (0x00017858) ai_gene_pane_2_t1_ParamLimits

0x22c1,	// (0x00017858) ai_gene_pane_2_t1

0x9889,	// (0x0001ee20) main_pane_empty_t1_ParamLimits

0x9889,	// (0x0001ee20) main_pane_empty_t1

0x98a1,	// (0x0001ee38) main_pane_empty_t2_ParamLimits

0x98a1,	// (0x0001ee38) main_pane_empty_t2

0x98b6,	// (0x0001ee4d) main_pane_empty_t3_ParamLimits

0x98b6,	// (0x0001ee4d) main_pane_empty_t3

0x98c8,	// (0x0001ee5f) main_pane_empty_t4_ParamLimits

0x98c8,	// (0x0001ee5f) main_pane_empty_t4

0x98da,	// (0x0001ee71) main_pane_empty_t5_ParamLimits

0x98da,	// (0x0001ee71) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00024ae6) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00024ae6) main_pane_empty_t

0xc9d4,	// (0x00021f6b) bg_popup_window_pane_ParamLimits

0xc9d4,	// (0x00021f6b) bg_popup_window_pane

0xb033,	// (0x000205ca) find_popup_pane_cp2_ParamLimits

0xb033,	// (0x000205ca) find_popup_pane_cp2

0x203d,	// (0x000175d4) heading_pane_ParamLimits

0x203d,	// (0x000175d4) heading_pane

0xc3f3,	// (0x0002198a) bg_popup_sub_pane

0xafb4,	// (0x0002054b) bg_popup_window_pane_g1_ParamLimits

0xafb4,	// (0x0002054b) bg_popup_window_pane_g1

0xafc3,	// (0x0002055a) bg_popup_window_pane_g2_ParamLimits

0xafc3,	// (0x0002055a) bg_popup_window_pane_g2

0xafcf,	// (0x00020566) bg_popup_window_pane_g3_ParamLimits

0xafcf,	// (0x00020566) bg_popup_window_pane_g3

0xafdb,	// (0x00020572) bg_popup_window_pane_g4_ParamLimits

0xafdb,	// (0x00020572) bg_popup_window_pane_g4

0xafea,	// (0x00020581) bg_popup_window_pane_g5_ParamLimits

0xafea,	// (0x00020581) bg_popup_window_pane_g5

0xaffa,	// (0x00020591) bg_popup_window_pane_g6_ParamLimits

0xaffa,	// (0x00020591) bg_popup_window_pane_g6

0xb006,	// (0x0002059d) bg_popup_window_pane_g7_ParamLimits

0xb006,	// (0x0002059d) bg_popup_window_pane_g7

0xb015,	// (0x000205ac) bg_popup_window_pane_g8_ParamLimits

0xb015,	// (0x000205ac) bg_popup_window_pane_g8

0xb024,	// (0x000205bb) bg_popup_window_pane_g9_ParamLimits

0xb024,	// (0x000205bb) bg_popup_window_pane_g9

0x2017,	// (0x000175ae) bg_popup_window_pane_g10_ParamLimits

0x2017,	// (0x000175ae) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x00024e27) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x00024e27) bg_popup_window_pane_g

0x1f40,	// (0x000174d7) bg_popup_heading_pane_ParamLimits

0x1f40,	// (0x000174d7) bg_popup_heading_pane

0xea83,	// (0x0002401a) tabs_4_passive_pane_cp_srt_ParamLimits

0xea83,	// (0x0002401a) tabs_4_passive_pane_cp_srt

0xea95,	// (0x0002402c) tabs_4_passive_pane_srt_ParamLimits

0x1f54,	// (0x000174eb) heading_pane_g2

0xea95,	// (0x0002402c) tabs_4_passive_pane_srt

0x1289,	// (0x00016820) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1289,	// (0x00016820) bg_passive_tab_pane_cp3_srt

0x1f5c,	// (0x000174f3) heading_pane_t1_ParamLimits

0x1f5c,	// (0x000174f3) heading_pane_t1

0x1f73,	// (0x0001750a) heading_pane_t2_ParamLimits

0x1f73,	// (0x0001750a) heading_pane_t2

0x0001,

0xf88b,	// (0x00024e22) heading_pane_t_ParamLimits

0xf88b,	// (0x00024e22) heading_pane_t

0x1a7d,	// (0x00017014) bg_popup_heading_pane_g1

0x1b2c,	// (0x000170c3) bg_popup_heading_pane_g2

0x1b36,	// (0x000170cd) bg_popup_heading_pane_g3

0x1b40,	// (0x000170d7) bg_popup_heading_pane_g4

0x1b4a,	// (0x000170e1) bg_popup_heading_pane_g5

0x1b54,	// (0x000170eb) bg_popup_heading_pane_g6

0x1b5c,	// (0x000170f3) bg_popup_heading_pane_g7

0x1b64,	// (0x000170fb) bg_popup_heading_pane_g8

0x1b6e,	// (0x00017105) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x00024dde) bg_popup_heading_pane_g

0x1169,	// (0x00016700) bg_popup_sub_pane_g1

0x1179,	// (0x00016710) bg_popup_sub_pane_g2

0x1171,	// (0x00016708) bg_popup_sub_pane_g3

0x1189,	// (0x00016720) bg_popup_sub_pane_g4

0x1181,	// (0x00016718) bg_popup_sub_pane_g5

0x1191,	// (0x00016728) bg_popup_sub_pane_g6

0x1199,	// (0x00016730) bg_popup_sub_pane_g7

0x11a9,	// (0x00016740) bg_popup_sub_pane_g8

0x11a1,	// (0x00016738) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x00024db8) bg_popup_sub_pane_g

0xc441,	// (0x000219d8) bg_popup_window_pane_cp5_ParamLimits

0xc441,	// (0x000219d8) bg_popup_window_pane_cp5

0xc5a1,	// (0x00021b38) popup_note_window_g1_ParamLimits

0xc5a1,	// (0x00021b38) popup_note_window_g1

0xc5ad,	// (0x00021b44) popup_note_window_t1_ParamLimits

0xc5ad,	// (0x00021b44) popup_note_window_t1

0xc5c3,	// (0x00021b5a) popup_note_window_t2_ParamLimits

0xc5c3,	// (0x00021b5a) popup_note_window_t2

0xc5d9,	// (0x00021b70) popup_note_window_t3_ParamLimits

0xc5d9,	// (0x00021b70) popup_note_window_t3

0xc5ef,	// (0x00021b86) popup_note_window_t4_ParamLimits

0xc5ef,	// (0x00021b86) popup_note_window_t4

0xc617,	// (0x00021bae) popup_note_window_t5_ParamLimits

0xc617,	// (0x00021bae) popup_note_window_t5

0x0004,

0xf55a,	// (0x00024af1) popup_note_window_t_ParamLimits

0xf55a,	// (0x00024af1) popup_note_window_t

0xc63b,	// (0x00021bd2) bg_popup_window_pane_cp6_ParamLimits

0xc63b,	// (0x00021bd2) bg_popup_window_pane_cp6

0x19f9,	// (0x00016f90) popup_note_image_window_g1_ParamLimits

0x19f9,	// (0x00016f90) popup_note_image_window_g1

0xae59,	// (0x000203f0) popup_note_image_window_g2_ParamLimits

0xae59,	// (0x000203f0) popup_note_image_window_g2

0x0001,

0xf815,	// (0x00024dac) popup_note_image_window_g_ParamLimits

0xf815,	// (0x00024dac) popup_note_image_window_g

0x1a1e,	// (0x00016fb5) popup_note_image_window_t1_ParamLimits

0x1a1e,	// (0x00016fb5) popup_note_image_window_t1

0x1a37,	// (0x00016fce) popup_note_image_window_t2_ParamLimits

0x1a37,	// (0x00016fce) popup_note_image_window_t2

0x1a50,	// (0x00016fe7) popup_note_image_window_t3_ParamLimits

0x1a50,	// (0x00016fe7) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x00024db1) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x00024db1) popup_note_image_window_t

0x18c2,	// (0x00016e59) bg_popup_window_pane_cp7_ParamLimits

0x18c2,	// (0x00016e59) bg_popup_window_pane_cp7

0x18f2,	// (0x00016e89) popup_note_wait_window_g1_ParamLimits

0x18f2,	// (0x00016e89) popup_note_wait_window_g1

0x18fe,	// (0x00016e95) popup_note_wait_window_g2_ParamLimits

0x18fe,	// (0x00016e95) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x00024d9a) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x00024d9a) popup_note_wait_window_g

0x1916,	// (0x00016ead) popup_note_wait_window_t1_ParamLimits

0x1916,	// (0x00016ead) popup_note_wait_window_t1

0xadfa,	// (0x00020391) popup_note_wait_window_t2_ParamLimits

0xadfa,	// (0x00020391) popup_note_wait_window_t2

0xae17,	// (0x000203ae) popup_note_wait_window_t3_ParamLimits

0xae17,	// (0x000203ae) popup_note_wait_window_t3

0xae2a,	// (0x000203c1) popup_note_wait_window_t4_ParamLimits

0xae2a,	// (0x000203c1) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x00024da1) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x00024da1) popup_note_wait_window_t

0x1992,	// (0x00016f29) wait_bar_pane_ParamLimits

0x1992,	// (0x00016f29) wait_bar_pane

0xc3f3,	// (0x0002198a) wait_anim_pane

0xc3f3,	// (0x0002198a) wait_border_pane

0xc3e9,	// (0x00021980) wait_anim_pane_g1

0xc3e9,	// (0x00021980) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x00024c61) wait_anim_pane_g

0x186e,	// (0x00016e05) wait_border_pane_g1

0x1879,	// (0x00016e10) wait_border_pane_g2

0x1882,	// (0x00016e19) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x00024d93) wait_border_pane_g

0x16d9,	// (0x00016c70) bg_popup_window_pane_cp16_ParamLimits

0x16d9,	// (0x00016c70) bg_popup_window_pane_cp16

0xadaa,	// (0x00020341) indicator_popup_pane_cp4_ParamLimits

0xadaa,	// (0x00020341) indicator_popup_pane_cp4

0x17ed,	// (0x00016d84) popup_query_data_window_t1_ParamLimits

0x17ed,	// (0x00016d84) popup_query_data_window_t1

0x17ff,	// (0x00016d96) popup_query_data_window_t2_ParamLimits

0x17ff,	// (0x00016d96) popup_query_data_window_t2

0x1818,	// (0x00016daf) popup_query_data_window_t3_ParamLimits

0x1818,	// (0x00016daf) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x00024d8c) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x00024d8c) popup_query_data_window_t

0xadbe,	// (0x00020355) query_popup_data_pane_ParamLimits

0xadbe,	// (0x00020355) query_popup_data_pane

0xadd2,	// (0x00020369) query_popup_data_pane_cp1_ParamLimits

0xadd2,	// (0x00020369) query_popup_data_pane_cp1

0x16d9,	// (0x00016c70) bg_popup_window_pane_cp10_ParamLimits

0x16d9,	// (0x00016c70) bg_popup_window_pane_cp10

0xad25,	// (0x000202bc) indicator_popup_pane_ParamLimits

0xad25,	// (0x000202bc) indicator_popup_pane

0xad47,	// (0x000202de) popup_query_code_window_t1_ParamLimits

0xad47,	// (0x000202de) popup_query_code_window_t1

0xad61,	// (0x000202f8) popup_query_code_window_t2_ParamLimits

0xad61,	// (0x000202f8) popup_query_code_window_t2

0x1790,	// (0x00016d27) popup_query_code_window_t3_ParamLimits

0x1790,	// (0x00016d27) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x00024d85) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x00024d85) popup_query_code_window_t

0x17bf,	// (0x00016d56) query_popup_pane_ParamLimits

0x17bf,	// (0x00016d56) query_popup_pane

0xc63b,	// (0x00021bd2) bg_popup_window_pane_cp15_ParamLimits

0xc63b,	// (0x00021bd2) bg_popup_window_pane_cp15

0x9912,	// (0x0001eea9) indicator_popup_pane_cp1_ParamLimits

0x9912,	// (0x0001eea9) indicator_popup_pane_cp1

0x9925,	// (0x0001eebc) indicator_popup_pane_cp2_ParamLimits

0x9925,	// (0x0001eebc) indicator_popup_pane_cp2

0x9938,	// (0x0001eecf) popup_query_data_code_window_g1_ParamLimits

0x9938,	// (0x0001eecf) popup_query_data_code_window_g1

0xc659,	// (0x00021bf0) popup_query_data_code_window_t1_ParamLimits

0xc659,	// (0x00021bf0) popup_query_data_code_window_t1

0xc66b,	// (0x00021c02) popup_query_data_code_window_t2_ParamLimits

0xc66b,	// (0x00021c02) popup_query_data_code_window_t2

0x994b,	// (0x0001eee2) popup_query_data_code_window_t3_ParamLimits

0x994b,	// (0x0001eee2) popup_query_data_code_window_t3

0x9961,	// (0x0001eef8) popup_query_data_code_window_t4_ParamLimits

0x9961,	// (0x0001eef8) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00024afc) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00024afc) popup_query_data_code_window_t

0xe895,	// (0x00023e2c) list_single_midp_graphic_pane_g3

0x9979,	// (0x0001ef10) query_popup_data_pane_cp2_ParamLimits

0x998c,	// (0x0001ef23) query_popup_pane_cp2_ParamLimits

0x998c,	// (0x0001ef23) query_popup_pane_cp2

0xc3f3,	// (0x0002198a) bg_popup_window_pane_cp11

0x16bd,	// (0x00016c54) heading_pane_cp5

0x16c5,	// (0x00016c5c) listscroll_popup_info_pane

0xc3f3,	// (0x0002198a) input_focus_pane_cp3

0xc67d,	// (0x00021c14) query_popup_pane_t1

0xc68b,	// (0x00021c22) list_popup_info_pane_ParamLimits

0xc68b,	// (0x00021c22) list_popup_info_pane

0xc69a,	// (0x00021c31) listscroll_popup_info_pane_g1

0xc6a2,	// (0x00021c39) scroll_pane_cp7

0x999f,	// (0x0001ef36) popup_info_list_pane_t1_ParamLimits

0x999f,	// (0x0001ef36) popup_info_list_pane_t1

0x99b9,	// (0x0001ef50) popup_info_list_pane_t2_ParamLimits

0x99b9,	// (0x0001ef50) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00024b05) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00024b05) popup_info_list_pane_t

0xc3f3,	// (0x0002198a) bg_popup_window_pane_cp12

0xb513,	// (0x00020aaa) find_popup_pane

0xc44f,	// (0x000219e6) bg_popup_window_pane_cp3

0xc6ac,	// (0x00021c43) heading_pane_cp3

0xc6bb,	// (0x00021c52) listscroll_popup_graphic_pane

0xc3f3,	// (0x0002198a) bg_popup_window_pane_cp4

0x9a23,	// (0x0001efba) heading_pane_cp4

0xc6cb,	// (0x00021c62) listscroll_popup_colour_pane

0x9a2d,	// (0x0001efc4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9a2d,	// (0x0001efc4) cell_large_graphic_colour_none_popup_pane

0x9a41,	// (0x0001efd8) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a41,	// (0x0001efd8) grid_large_graphic_colour_popup_pane

0x9a65,	// (0x0001effc) listscroll_popup_colour_pane_g1_ParamLimits

0x9a65,	// (0x0001effc) listscroll_popup_colour_pane_g1

0x9a7c,	// (0x0001f013) listscroll_popup_colour_pane_g2_ParamLimits

0x9a7c,	// (0x0001f013) listscroll_popup_colour_pane_g2

0x9a90,	// (0x0001f027) listscroll_popup_colour_pane_g3_ParamLimits

0x9a90,	// (0x0001f027) listscroll_popup_colour_pane_g3

0x9aa0,	// (0x0001f037) listscroll_popup_colour_pane_g4_ParamLimits

0x9aa0,	// (0x0001f037) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00024b0a) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00024b0a) listscroll_popup_colour_pane_g

0xc6d3,	// (0x00021c6a) scroll_pane_cp6_ParamLimits

0xc6d3,	// (0x00021c6a) scroll_pane_cp6

0x9ab0,	// (0x0001f047) cell_large_graphic_colour_popup_pane_ParamLimits

0x9ab0,	// (0x0001f047) cell_large_graphic_colour_popup_pane

0x9acf,	// (0x0001f066) cell_large_graphic_colour_none_popup_pane_t1

0xc3f3,	// (0x0002198a) grid_highlight_pane_cp5

0xc6e5,	// (0x00021c7c) cell_large_graphic_colour_popup_pane_g1

0xc6ed,	// (0x00021c84) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00024b13) cell_large_graphic_colour_popup_pane_g

0xc6f5,	// (0x00021c8c) cell_large_graphic_colour_popup_pane_g2_copy1

0xc6fe,	// (0x00021c95) grid_highlight_pane_cp4

0xc706,	// (0x00021c9d) bg_popup_window_pane_cp8_ParamLimits

0xc706,	// (0x00021c9d) bg_popup_window_pane_cp8

0x9ade,	// (0x0001f075) popup_snote_single_text_window_g1_ParamLimits

0x9ade,	// (0x0001f075) popup_snote_single_text_window_g1

0x9af0,	// (0x0001f087) popup_snote_single_text_window_t1_ParamLimits

0x9af0,	// (0x0001f087) popup_snote_single_text_window_t1

0x9b03,	// (0x0001f09a) popup_snote_single_text_window_t2_ParamLimits

0x9b03,	// (0x0001f09a) popup_snote_single_text_window_t2

0x9b16,	// (0x0001f0ad) popup_snote_single_text_window_t3_ParamLimits

0x9b16,	// (0x0001f0ad) popup_snote_single_text_window_t3

0x9b4f,	// (0x0001f0e6) popup_snote_single_text_window_t4_ParamLimits

0x9b4f,	// (0x0001f0e6) popup_snote_single_text_window_t4

0x9b83,	// (0x0001f11a) popup_snote_single_text_window_t5_ParamLimits

0x9b83,	// (0x0001f11a) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00024b18) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00024b18) popup_snote_single_text_window_t

0xc721,	// (0x00021cb8) bg_popup_window_pane_cp9_ParamLimits

0xc721,	// (0x00021cb8) bg_popup_window_pane_cp9

0x9ade,	// (0x0001f075) popup_snote_single_graphic_window_g1_ParamLimits

0x9ade,	// (0x0001f075) popup_snote_single_graphic_window_g1

0xc72f,	// (0x00021cc6) popup_snote_single_graphic_window_g2_ParamLimits

0xc72f,	// (0x00021cc6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00024b23) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00024b23) popup_snote_single_graphic_window_g

0xc73b,	// (0x00021cd2) popup_snote_single_graphic_window_t1_ParamLimits

0xc73b,	// (0x00021cd2) popup_snote_single_graphic_window_t1

0xc74e,	// (0x00021ce5) popup_snote_single_graphic_window_t2_ParamLimits

0xc74e,	// (0x00021ce5) popup_snote_single_graphic_window_t2

0x9b16,	// (0x0001f0ad) popup_snote_single_graphic_window_t3_ParamLimits

0x9b16,	// (0x0001f0ad) popup_snote_single_graphic_window_t3

0x9b4f,	// (0x0001f0e6) popup_snote_single_graphic_window_t4_ParamLimits

0x9b4f,	// (0x0001f0e6) popup_snote_single_graphic_window_t4

0x9bb2,	// (0x0001f149) popup_snote_single_graphic_window_t5_ParamLimits

0x9bb2,	// (0x0001f149) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00024b28) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00024b28) popup_snote_single_graphic_window_t

0x2a5f,	// (0x00017ff6) grid_graphic_popup_pane_ParamLimits

0x2a5f,	// (0x00017ff6) grid_graphic_popup_pane

0x2a89,	// (0x00018020) listscroll_popup_graphic_pane_g1_ParamLimits

0x2a89,	// (0x00018020) listscroll_popup_graphic_pane_g1

0xb4b1,	// (0x00020a48) listscroll_popup_graphic_pane_g2_ParamLimits

0xb4b1,	// (0x00020a48) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x00024f02) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x00024f02) listscroll_popup_graphic_pane_g

0x2ab1,	// (0x00018048) scroll_pane_cp5

0xb470,	// (0x00020a07) cell_graphic_popup_pane_ParamLimits

0xb470,	// (0x00020a07) cell_graphic_popup_pane

0x29d6,	// (0x00017f6d) cell_graphic_popup_pane_g1

0x29de,	// (0x00017f75) cell_graphic_popup_pane_g2

0xc6f5,	// (0x00021c8c) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x00024efb) cell_graphic_popup_pane_g

0x29e7,	// (0x00017f7e) cell_graphic_popup_pane_t2

0xc6fe,	// (0x00021c95) grid_highlight_pane_cp3

0xc773,	// (0x00021d0a) list_gen_pane_ParamLimits

0xc773,	// (0x00021d0a) list_gen_pane

0xc79b,	// (0x00021d32) scroll_pane

0xb3da,	// (0x00020971) bg_list_pane_g1_ParamLimits

0xb3da,	// (0x00020971) bg_list_pane_g1

0xb3f5,	// (0x0002098c) bg_list_pane_g2_ParamLimits

0xb3f5,	// (0x0002098c) bg_list_pane_g2

0xb408,	// (0x0002099f) bg_list_pane_g3_ParamLimits

0xb408,	// (0x0002099f) bg_list_pane_g3

0xb41a,	// (0x000209b1) bg_list_pane_g4_ParamLimits

0xb41a,	// (0x000209b1) bg_list_pane_g4

0xb42c,	// (0x000209c3) bg_list_pane_g5_ParamLimits

0xb42c,	// (0x000209c3) bg_list_pane_g5

0x0004,

0xf959,	// (0x00024ef0) bg_list_pane_g_ParamLimits

0xf959,	// (0x00024ef0) bg_list_pane_g

0xb37d,	// (0x00020914) list_double2_graphic_large_graphic_pane_ParamLimits

0xb37d,	// (0x00020914) list_double2_graphic_large_graphic_pane

0xb37d,	// (0x00020914) list_double2_graphic_pane_ParamLimits

0xb37d,	// (0x00020914) list_double2_graphic_pane

0xb37d,	// (0x00020914) list_double2_large_graphic_pane_ParamLimits

0xb37d,	// (0x00020914) list_double2_large_graphic_pane

0xb390,	// (0x00020927) list_double2_pane_ParamLimits

0xb390,	// (0x00020927) list_double2_pane

0xb37d,	// (0x00020914) list_double_graphic_heading_pane_ParamLimits

0xb37d,	// (0x00020914) list_double_graphic_heading_pane

0xb37d,	// (0x00020914) list_double_graphic_pane_ParamLimits

0xb37d,	// (0x00020914) list_double_graphic_pane

0xb37d,	// (0x00020914) list_double_heading_pane_ParamLimits

0xb37d,	// (0x00020914) list_double_heading_pane

0xb37d,	// (0x00020914) list_double_large_graphic_pane_ParamLimits

0xb37d,	// (0x00020914) list_double_large_graphic_pane

0xb37d,	// (0x00020914) list_double_number_pane_ParamLimits

0xb37d,	// (0x00020914) list_double_number_pane

0xb37d,	// (0x00020914) list_double_pane_ParamLimits

0xb37d,	// (0x00020914) list_double_pane

0xb37d,	// (0x00020914) list_double_time_pane_ParamLimits

0xb37d,	// (0x00020914) list_double_time_pane

0xb37d,	// (0x00020914) list_setting_number_pane_ParamLimits

0xb37d,	// (0x00020914) list_setting_number_pane

0xb37d,	// (0x00020914) list_setting_pane_ParamLimits

0xb37d,	// (0x00020914) list_setting_pane

0xa177,	// (0x0001f70e) list_single_2graphic_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_2graphic_pane

0xa177,	// (0x0001f70e) list_single_graphic_heading_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_graphic_heading_pane

0xa177,	// (0x0001f70e) list_single_graphic_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_graphic_pane

0xa177,	// (0x0001f70e) list_single_heading_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_heading_pane

0xb37d,	// (0x00020914) list_single_large_graphic_pane_ParamLimits

0xb37d,	// (0x00020914) list_single_large_graphic_pane

0xa177,	// (0x0001f70e) list_single_number_heading_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_number_heading_pane

0xa177,	// (0x0001f70e) list_single_number_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_number_pane

0xa177,	// (0x0001f70e) list_single_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_pane

0xc3f3,	// (0x0002198a) list_highlight_pane_cp1

0xc7cf,	// (0x00021d66) list_single_pane_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_single_pane_g1

0x10eb,	// (0x00016682) list_single_pane_g2_ParamLimits

0x10eb,	// (0x00016682) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_single_pane_g

0x46ff,	// (0x00019c96) list_single_pane_t1_ParamLimits

0x46ff,	// (0x00019c96) list_single_pane_t1

0xc7cf,	// (0x00021d66) list_single_number_pane_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_single_number_pane_g1

0x10eb,	// (0x00016682) list_single_number_pane_g2_ParamLimits

0x10eb,	// (0x00016682) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_single_number_pane_g

0x10f7,	// (0x0001668e) list_single_number_pane_t1_ParamLimits

0x10f7,	// (0x0001668e) list_single_number_pane_t1

0xb189,	// (0x00020720) list_single_number_pane_t2_ParamLimits

0xb189,	// (0x00020720) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x00024eb1) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x00024eb1) list_single_number_pane_t

0x10df,	// (0x00016676) list_single_graphic_pane_g1_ParamLimits

0x10df,	// (0x00016676) list_single_graphic_pane_g1

0xc7cf,	// (0x00021d66) list_single_graphic_pane_g2_ParamLimits

0xc7cf,	// (0x00021d66) list_single_graphic_pane_g2

0x10eb,	// (0x00016682) list_single_graphic_pane_g3_ParamLimits

0x10eb,	// (0x00016682) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00024b33) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00024b33) list_single_graphic_pane_g

0x10f7,	// (0x0001668e) list_single_graphic_pane_t1_ParamLimits

0x10f7,	// (0x0001668e) list_single_graphic_pane_t1

0xc7cf,	// (0x00021d66) list_single_heading_pane_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_single_heading_pane_g1

0x10eb,	// (0x00016682) list_single_heading_pane_g2_ParamLimits

0x10eb,	// (0x00016682) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_single_heading_pane_g

0x30b4,	// (0x0001864b) list_single_heading_pane_t1_ParamLimits

0x30b4,	// (0x0001864b) list_single_heading_pane_t1

0x9beb,	// (0x0001f182) list_single_heading_pane_t2_ParamLimits

0x9beb,	// (0x0001f182) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00024b3f) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00024b3f) list_single_heading_pane_t

0xc7cf,	// (0x00021d66) list_single_number_heading_pane_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_single_number_heading_pane_g1

0x10eb,	// (0x00016682) list_single_number_heading_pane_g2_ParamLimits

0x10eb,	// (0x00016682) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_single_number_heading_pane_g

0x30b4,	// (0x0001864b) list_single_number_heading_pane_t1_ParamLimits

0x30b4,	// (0x0001864b) list_single_number_heading_pane_t1

0x9bfd,	// (0x0001f194) list_single_number_heading_pane_t2_ParamLimits

0x9bfd,	// (0x0001f194) list_single_number_heading_pane_t2

0x9c0f,	// (0x0001f1a6) list_single_number_heading_pane_t3_ParamLimits

0x9c0f,	// (0x0001f1a6) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00024b44) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00024b44) list_single_number_heading_pane_t

0x9c21,	// (0x0001f1b8) list_single_graphic_heading_pane_g1_ParamLimits

0x9c21,	// (0x0001f1b8) list_single_graphic_heading_pane_g1

0x9c2d,	// (0x0001f1c4) list_single_graphic_heading_pane_g4_ParamLimits

0x9c2d,	// (0x0001f1c4) list_single_graphic_heading_pane_g4

0x10eb,	// (0x00016682) list_single_graphic_heading_pane_g5_ParamLimits

0x10eb,	// (0x00016682) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00024b4b) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00024b4b) list_single_graphic_heading_pane_g

0x30b4,	// (0x0001864b) list_single_graphic_heading_pane_t1_ParamLimits

0x30b4,	// (0x0001864b) list_single_graphic_heading_pane_t1

0x9c3e,	// (0x0001f1d5) list_single_graphic_heading_pane_t2_ParamLimits

0x9c3e,	// (0x0001f1d5) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00024b52) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00024b52) list_single_graphic_heading_pane_t

0x3128,	// (0x000186bf) list_single_large_graphic_pane_g1_ParamLimits

0x3128,	// (0x000186bf) list_single_large_graphic_pane_g1

0x3134,	// (0x000186cb) list_single_large_graphic_pane_g2_ParamLimits

0x3134,	// (0x000186cb) list_single_large_graphic_pane_g2

0x3140,	// (0x000186d7) list_single_large_graphic_pane_g3_ParamLimits

0x3140,	// (0x000186d7) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00024b57) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00024b57) list_single_large_graphic_pane_g

0x1879,	// (0x00016e10) wait_border_pane_g2_copy1

0x9c50,	// (0x0001f1e7) list_single_large_graphic_pane_g4_cp2

0x314c,	// (0x000186e3) list_single_large_graphic_pane_t1_ParamLimits

0x314c,	// (0x000186e3) list_single_large_graphic_pane_t1

0xc7db,	// (0x00021d72) list_double_pane_g1_ParamLimits

0xc7db,	// (0x00021d72) list_double_pane_g1

0xc7e7,	// (0x00021d7e) list_double_pane_g2_ParamLimits

0xc7e7,	// (0x00021d7e) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00024b5e) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00024b5e) list_double_pane_g

0x9c58,	// (0x0001f1ef) list_double_pane_t1_ParamLimits

0x9c58,	// (0x0001f1ef) list_double_pane_t1

0x9c6e,	// (0x0001f205) list_double_pane_t2_ParamLimits

0x9c6e,	// (0x0001f205) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00024b63) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00024b63) list_double_pane_t

0x9c80,	// (0x0001f217) list_double2_pane_g1_ParamLimits

0x9c80,	// (0x0001f217) list_double2_pane_g1

0x9c91,	// (0x0001f228) list_double2_pane_g2_ParamLimits

0x9c91,	// (0x0001f228) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00024b68) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00024b68) list_double2_pane_g

0x9c9d,	// (0x0001f234) list_double2_pane_t1_ParamLimits

0x9c9d,	// (0x0001f234) list_double2_pane_t1

0x9cb3,	// (0x0001f24a) list_double2_pane_t2_ParamLimits

0x9cb3,	// (0x0001f24a) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00024b6d) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00024b6d) list_double2_pane_t

0xc7db,	// (0x00021d72) list_double_number_pane_g1_ParamLimits

0xc7db,	// (0x00021d72) list_double_number_pane_g1

0xc7e7,	// (0x00021d7e) list_double_number_pane_g2_ParamLimits

0xc7e7,	// (0x00021d7e) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00024b5e) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00024b5e) list_double_number_pane_g

0x9cc5,	// (0x0001f25c) list_double_number_pane_t1_ParamLimits

0x9cc5,	// (0x0001f25c) list_double_number_pane_t1

0x9cd7,	// (0x0001f26e) list_double_number_pane_t2_ParamLimits

0x9cd7,	// (0x0001f26e) list_double_number_pane_t2

0x9ced,	// (0x0001f284) list_double_number_pane_t3_ParamLimits

0x9ced,	// (0x0001f284) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00024b72) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00024b72) list_double_number_pane_t

0x9cff,	// (0x0001f296) list_double_graphic_pane_g1_ParamLimits

0x9cff,	// (0x0001f296) list_double_graphic_pane_g1

0x9d0b,	// (0x0001f2a2) list_double_graphic_pane_g2_ParamLimits

0x9d0b,	// (0x0001f2a2) list_double_graphic_pane_g2

0x9d1a,	// (0x0001f2b1) list_double_graphic_pane_g3_ParamLimits

0x9d1a,	// (0x0001f2b1) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00024b79) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00024b79) list_double_graphic_pane_g

0x9c58,	// (0x0001f1ef) list_double_graphic_pane_t1_ParamLimits

0x9c58,	// (0x0001f1ef) list_double_graphic_pane_t1

0x9c6e,	// (0x0001f205) list_double_graphic_pane_t2_ParamLimits

0x9c6e,	// (0x0001f205) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x00024b63) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x00024b63) list_double_graphic_pane_t

0x9d32,	// (0x0001f2c9) list_double2_graphic_pane_g1_ParamLimits

0x9d32,	// (0x0001f2c9) list_double2_graphic_pane_g1

0x9d3e,	// (0x0001f2d5) list_double2_graphic_pane_g2_ParamLimits

0x9d3e,	// (0x0001f2d5) list_double2_graphic_pane_g2

0x9d4a,	// (0x0001f2e1) list_double2_graphic_pane_g3_ParamLimits

0x9d4a,	// (0x0001f2e1) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00024b82) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00024b82) list_double2_graphic_pane_g

0x9d56,	// (0x0001f2ed) list_double2_graphic_pane_t1_ParamLimits

0x9d56,	// (0x0001f2ed) list_double2_graphic_pane_t1

0x9d6c,	// (0x0001f303) list_double2_graphic_pane_t2_ParamLimits

0x9d6c,	// (0x0001f303) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024b89) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024b89) list_double2_graphic_pane_t

0x9d7e,	// (0x0001f315) list_double_large_graphic_pane_g1_ParamLimits

0x9d7e,	// (0x0001f315) list_double_large_graphic_pane_g1

0x9d9d,	// (0x0001f334) list_double_large_graphic_pane_g2_ParamLimits

0x9d9d,	// (0x0001f334) list_double_large_graphic_pane_g2

0xc7e7,	// (0x00021d7e) list_double_large_graphic_pane_g3_ParamLimits

0xc7e7,	// (0x00021d7e) list_double_large_graphic_pane_g3

0x9dae,	// (0x0001f345) list_double_large_graphic_pane_g4_ParamLimits

0x9dae,	// (0x0001f345) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x00024b8e) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x00024b8e) list_double_large_graphic_pane_g

0x9dc0,	// (0x0001f357) list_double_large_graphic_pane_t1_ParamLimits

0x9dc0,	// (0x0001f357) list_double_large_graphic_pane_t1

0x9dd9,	// (0x0001f370) list_double_large_graphic_pane_t2_ParamLimits

0x9dd9,	// (0x0001f370) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x00024b99) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x00024b99) list_double_large_graphic_pane_t

0x9deb,	// (0x0001f382) list_double2_large_graphic_pane_g1_ParamLimits

0x9deb,	// (0x0001f382) list_double2_large_graphic_pane_g1

0x9df7,	// (0x0001f38e) list_double2_large_graphic_pane_g2_ParamLimits

0x9df7,	// (0x0001f38e) list_double2_large_graphic_pane_g2

0x9d4a,	// (0x0001f2e1) list_double2_large_graphic_pane_g3_ParamLimits

0x9d4a,	// (0x0001f2e1) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x00024b9e) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x00024b9e) list_double2_large_graphic_pane_g

0x9d56,	// (0x0001f2ed) list_double2_large_graphic_pane_t1_ParamLimits

0x9d56,	// (0x0001f2ed) list_double2_large_graphic_pane_t1

0x9d6c,	// (0x0001f303) list_double2_large_graphic_pane_t2_ParamLimits

0x9d6c,	// (0x0001f303) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x00024b89) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x00024b89) list_double2_large_graphic_pane_t

0x9e08,	// (0x0001f39f) list_double_heading_pane_g1_ParamLimits

0x9e08,	// (0x0001f39f) list_double_heading_pane_g1

0x9e19,	// (0x0001f3b0) list_double_heading_pane_g2_ParamLimits

0x9e19,	// (0x0001f3b0) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x00024ba5) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x00024ba5) list_double_heading_pane_g

0x9e25,	// (0x0001f3bc) list_double_heading_pane_t1_ParamLimits

0x9e25,	// (0x0001f3bc) list_double_heading_pane_t1

0x9d6c,	// (0x0001f303) list_double_heading_pane_t2_ParamLimits

0x9d6c,	// (0x0001f303) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x00024baa) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x00024baa) list_double_heading_pane_t

0x9e3b,	// (0x0001f3d2) list_double_graphic_heading_pane_g1_ParamLimits

0x9e3b,	// (0x0001f3d2) list_double_graphic_heading_pane_g1

0x9e08,	// (0x0001f39f) list_double_graphic_heading_pane_g2_ParamLimits

0x9e08,	// (0x0001f39f) list_double_graphic_heading_pane_g2

0x9e19,	// (0x0001f3b0) list_double_graphic_heading_pane_g3_ParamLimits

0x9e19,	// (0x0001f3b0) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x00024baf) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x00024baf) list_double_graphic_heading_pane_g

0x9e25,	// (0x0001f3bc) list_double_graphic_heading_pane_t1_ParamLimits

0x9e25,	// (0x0001f3bc) list_double_graphic_heading_pane_t1

0x9d6c,	// (0x0001f303) list_double_graphic_heading_pane_t2_ParamLimits

0x9d6c,	// (0x0001f303) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x00024baa) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x00024baa) list_double_graphic_heading_pane_t

0x9d9d,	// (0x0001f334) list_double_time_pane_g1_ParamLimits

0x9d9d,	// (0x0001f334) list_double_time_pane_g1

0xc7e7,	// (0x00021d7e) list_double_time_pane_g2_ParamLimits

0xc7e7,	// (0x00021d7e) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x00024bb6) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x00024bb6) list_double_time_pane_g

0x9e47,	// (0x0001f3de) list_double_time_pane_t1_ParamLimits

0x9e47,	// (0x0001f3de) list_double_time_pane_t1

0x9e5d,	// (0x0001f3f4) list_double_time_pane_t2_ParamLimits

0x9e5d,	// (0x0001f3f4) list_double_time_pane_t2

0x9e6f,	// (0x0001f406) list_double_time_pane_t3_ParamLimits

0x9e6f,	// (0x0001f406) list_double_time_pane_t3

0x9e81,	// (0x0001f418) list_double_time_pane_t4_ParamLimits

0x9e81,	// (0x0001f418) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00024bbb) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00024bbb) list_double_time_pane_t

0x9d3e,	// (0x0001f2d5) list_setting_pane_g1_ParamLimits

0x9d3e,	// (0x0001f2d5) list_setting_pane_g1

0x9d4a,	// (0x0001f2e1) list_setting_pane_g2_ParamLimits

0x9d4a,	// (0x0001f2e1) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00024bc4) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00024bc4) list_setting_pane_g

0x9e93,	// (0x0001f42a) list_setting_pane_t1_ParamLimits

0x9e93,	// (0x0001f42a) list_setting_pane_t1

0x9eaa,	// (0x0001f441) list_setting_pane_t2_ParamLimits

0x9eaa,	// (0x0001f441) list_setting_pane_t2

0x0002,

0xf632,	// (0x00024bc9) list_setting_pane_t_ParamLimits

0xf632,	// (0x00024bc9) list_setting_pane_t

0x9ee9,	// (0x0001f480) set_value_pane_cp_ParamLimits

0x9ee9,	// (0x0001f480) set_value_pane_cp

0x9d3e,	// (0x0001f2d5) list_setting_number_pane_g1_ParamLimits

0x9d3e,	// (0x0001f2d5) list_setting_number_pane_g1

0x9d4a,	// (0x0001f2e1) list_setting_number_pane_g2_ParamLimits

0x9d4a,	// (0x0001f2e1) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x00024bc4) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x00024bc4) list_setting_number_pane_g

0x9ef5,	// (0x0001f48c) list_setting_number_pane_t1_ParamLimits

0x9ef5,	// (0x0001f48c) list_setting_number_pane_t1

0x9f09,	// (0x0001f4a0) list_setting_number_pane_t2_ParamLimits

0x9f09,	// (0x0001f4a0) list_setting_number_pane_t2

0x9f20,	// (0x0001f4b7) list_setting_number_pane_t3_ParamLimits

0x9f20,	// (0x0001f4b7) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x00024bd0) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x00024bd0) list_setting_number_pane_t

0x9ee9,	// (0x0001f480) set_value_pane_ParamLimits

0x9ee9,	// (0x0001f480) set_value_pane

0xc808,	// (0x00021d9f) bg_set_opt_pane_ParamLimits

0xc808,	// (0x00021d9f) bg_set_opt_pane

0xc829,	// (0x00021dc0) set_value_pane_t1

0xc837,	// (0x00021dce) slider_set_pane_cp3

0x9f63,	// (0x0001f4fa) volume_small_pane_cp

0xc840,	// (0x00021dd7) list_form_gen_pane

0xc849,	// (0x00021de0) scroll_pane_cp8

0x9f6c,	// (0x0001f503) form_field_data_pane_ParamLimits

0x9f6c,	// (0x0001f503) form_field_data_pane

0x9f83,	// (0x0001f51a) form_field_data_wide_pane_ParamLimits

0x9f83,	// (0x0001f51a) form_field_data_wide_pane

0x9fa3,	// (0x0001f53a) form_field_popup_pane_ParamLimits

0x9fa3,	// (0x0001f53a) form_field_popup_pane

0x9fc3,	// (0x0001f55a) form_field_popup_wide_pane_ParamLimits

0x9fc3,	// (0x0001f55a) form_field_popup_wide_pane

0xc86a,	// (0x00021e01) form_field_slider_pane_ParamLimits

0xc86a,	// (0x00021e01) form_field_slider_pane

0x9fda,	// (0x0001f571) form_field_slider_wide_pane_ParamLimits

0x9fda,	// (0x0001f571) form_field_slider_wide_pane

0xc87d,	// (0x00021e14) data_form_pane

0x9ff7,	// (0x0001f58e) form_field_data_pane_t1

0xc889,	// (0x00021e20) input_focus_pane

0xc897,	// (0x00021e2e) data_form_wide_pane

0xc8d4,	// (0x00021e6b) form_field_data_wide_pane_t1

0xc713,	// (0x00021caa) input_focus_pane_cp6

0xa011,	// (0x0001f5a8) form_field_popup_pane_t1

0xc889,	// (0x00021e20) input_focus_pane_cp7

0xc8f6,	// (0x00021e8d) list_form_pane

0xc90a,	// (0x00021ea1) form_field_popup_wide_pane_t1

0xc889,	// (0x00021e20) input_focus_pane_cp8

0xc91f,	// (0x00021eb6) list_form_wide_pane

0xa033,	// (0x0001f5ca) form_field_slider_pane_t1_ParamLimits

0xa033,	// (0x0001f5ca) form_field_slider_pane_t1

0xa04b,	// (0x0001f5e2) form_field_slider_pane_t2_ParamLimits

0xa04b,	// (0x0001f5e2) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x00024be0) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x00024be0) form_field_slider_pane_t

0xc441,	// (0x000219d8) input_focus_pane_cp9_ParamLimits

0xc441,	// (0x000219d8) input_focus_pane_cp9

0xa060,	// (0x0001f5f7) slider_cont_pane_ParamLimits

0xa060,	// (0x0001f5f7) slider_cont_pane

0xc92b,	// (0x00021ec2) form_field_slider_wide_pane_t1_ParamLimits

0xc92b,	// (0x00021ec2) form_field_slider_wide_pane_t1

0xc93d,	// (0x00021ed4) form_field_slider_wide_pane_t2_ParamLimits

0xc93d,	// (0x00021ed4) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x00024be5) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x00024be5) form_field_slider_wide_pane_t

0xc441,	// (0x000219d8) input_focus_pane_cp10_ParamLimits

0xc441,	// (0x000219d8) input_focus_pane_cp10

0xa074,	// (0x0001f60b) slider_cont_pane_cp1_ParamLimits

0xa074,	// (0x0001f60b) slider_cont_pane_cp1

0xa088,	// (0x0001f61f) slider_form_pane_cp

0xc94f,	// (0x00021ee6) input_focus_pane_g1

0xc957,	// (0x00021eee) input_focus_pane_g2

0xc95f,	// (0x00021ef6) input_focus_pane_g3

0xc967,	// (0x00021efe) input_focus_pane_g4

0xc96f,	// (0x00021f06) input_focus_pane_g5

0xc977,	// (0x00021f0e) input_focus_pane_g6

0xc97f,	// (0x00021f16) input_focus_pane_g7

0xc987,	// (0x00021f1e) input_focus_pane_g8

0xc98f,	// (0x00021f26) input_focus_pane_g9

0xc3e9,	// (0x00021980) input_focus_pane_g10

0x0009,

0xf653,	// (0x00024bea) input_focus_pane_g

0x1882,	// (0x00016e19) wait_border_pane_g3_copy1

0xa090,	// (0x0001f627) data_form_pane_t1

0xc3e9,	// (0x00021980) wait_anim_pane_g1_copy1

0xb361,	// (0x000208f8) data_form_wide_pane_t1

0xa0aa,	// (0x0001f641) list_form_graphic_pane_cp_ParamLimits

0xa0aa,	// (0x0001f641) list_form_graphic_pane_cp

0x2783,	// (0x00017d1a) slider_form_pane_g1

0x278c,	// (0x00017d23) slider_form_pane_g2

0x0006,

0xf94a,	// (0x00024ee1) slider_form_pane_g

0xa0bc,	// (0x0001f653) list_form_graphic_pane_ParamLimits

0xa0bc,	// (0x0001f653) list_form_graphic_pane

0xa0cf,	// (0x0001f666) list_form_graphic_pane_g1

0xa0d7,	// (0x0001f66e) list_form_graphic_pane_t1_ParamLimits

0xa0d7,	// (0x0001f66e) list_form_graphic_pane_t1

0xc44f,	// (0x000219e6) list_highlight_pane_cp5_ParamLimits

0xc44f,	// (0x000219e6) list_highlight_pane_cp5

0xa0ec,	// (0x0001f683) find_pane_g1

0xc997,	// (0x00021f2e) input_find_pane

0xa0f5,	// (0x0001f68c) input_find_pane_g1_ParamLimits

0xa0f5,	// (0x0001f68c) input_find_pane_g1

0xa101,	// (0x0001f698) input_find_pane_t1_ParamLimits

0xa101,	// (0x0001f698) input_find_pane_t1

0xa116,	// (0x0001f6ad) input_find_pane_t2_ParamLimits

0xa116,	// (0x0001f6ad) input_find_pane_t2

0x0001,

0xf668,	// (0x00024bff) input_find_pane_t_ParamLimits

0xf668,	// (0x00024bff) input_find_pane_t

0xc9a0,	// (0x00021f37) input_focus_pane_cp5_ParamLimits

0xc9a0,	// (0x00021f37) input_focus_pane_cp5

0xc9b3,	// (0x00021f4a) bg_popup_window_pane_cp2_ParamLimits

0xc9b3,	// (0x00021f4a) bg_popup_window_pane_cp2

0xc9c0,	// (0x00021f57) listscroll_menu_pane_ParamLimits

0xc9c0,	// (0x00021f57) listscroll_menu_pane

0xa137,	// (0x0001f6ce) popup_submenu_window_ParamLimits

0xa137,	// (0x0001f6ce) popup_submenu_window

0xc9cc,	// (0x00021f63) find_popup_pane_g1

0xa15f,	// (0x0001f6f6) input_popup_find_pane_cp

0xc9d4,	// (0x00021f6b) input_focus_pane_cp4_ParamLimits

0xc9d4,	// (0x00021f6b) input_focus_pane_cp4

0xc9e2,	// (0x00021f79) input_popup_find_pane_t1_ParamLimits

0xc9e2,	// (0x00021f79) input_popup_find_pane_t1

0xc3f3,	// (0x0002198a) bg_popup_sub_pane_cp

0xca10,	// (0x00021fa7) listscroll_popup_sub_pane

0xca18,	// (0x00021faf) list_submenu_pane_ParamLimits

0xca18,	// (0x00021faf) list_submenu_pane

0xca29,	// (0x00021fc0) scroll_pane_cp4

0xa177,	// (0x0001f70e) list_single_popup_submenu_pane_ParamLimits

0xa177,	// (0x0001f70e) list_single_popup_submenu_pane

0xa18b,	// (0x0001f722) list_single_popup_submenu_pane_g1

0xa193,	// (0x0001f72a) list_single_popup_submenu_pane_t1_ParamLimits

0xa193,	// (0x0001f72a) list_single_popup_submenu_pane_t1

0xc441,	// (0x000219d8) bg_active_tab_pane_cp1_ParamLimits

0xc441,	// (0x000219d8) bg_active_tab_pane_cp1

0xca31,	// (0x00021fc8) tabs_2_active_pane_g1

0xa1a8,	// (0x0001f73f) tabs_2_active_pane_t1

0xc441,	// (0x000219d8) bg_passive_tab_pane_cp1_ParamLimits

0xc441,	// (0x000219d8) bg_passive_tab_pane_cp1

0xca31,	// (0x00021fc8) tabs_2_passive_pane_g1

0xa1a8,	// (0x0001f73f) tabs_2_passive_pane_t1

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp4

0xa1ba,	// (0x0001f751) tabs_2_long_active_pane_t1

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp4

0xe89d,	// (0x00023e34) list_single_midp_graphic_pane_g4_ParamLimits

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp5

0xa1cd,	// (0x0001f764) tabs_3_long_active_pane_t1

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp5

0xe89d,	// (0x00023e34) list_single_midp_graphic_pane_g4

0xc44f,	// (0x000219e6) bg_popup_window_pane_cp13_ParamLimits

0xc44f,	// (0x000219e6) bg_popup_window_pane_cp13

0xca45,	// (0x00021fdc) listscroll_popup_fast_pane_ParamLimits

0xca45,	// (0x00021fdc) listscroll_popup_fast_pane

0xca51,	// (0x00021fe8) grid_popup_fast_pane_ParamLimits

0xca51,	// (0x00021fe8) grid_popup_fast_pane

0xca63,	// (0x00021ffa) scroll_pane_cp9_ParamLimits

0xca63,	// (0x00021ffa) scroll_pane_cp9

0x46ff,	// (0x00019c96) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x46ff,	// (0x00019c96) list_single_graphic_hl_pane_t1_cp2

0xca76,	// (0x0002200d) input_focus_pane_cp20_ParamLimits

0xca76,	// (0x0002200d) input_focus_pane_cp20

0xca84,	// (0x0002201b) query_popup_data_pane_t1_ParamLimits

0xca84,	// (0x0002201b) query_popup_data_pane_t1

0xca97,	// (0x0002202e) query_popup_data_pane_t2_ParamLimits

0xca97,	// (0x0002202e) query_popup_data_pane_t2

0xcadd,	// (0x00022074) query_popup_data_pane_t3_ParamLimits

0xcadd,	// (0x00022074) query_popup_data_pane_t3

0xcb1e,	// (0x000220b5) query_popup_data_pane_t4_ParamLimits

0xcb1e,	// (0x000220b5) query_popup_data_pane_t4

0xcb5a,	// (0x000220f1) query_popup_data_pane_t5_ParamLimits

0xcb5a,	// (0x000220f1) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x00024c04) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x00024c04) query_popup_data_pane_t

0xc94f,	// (0x00021ee6) bg_set_opt_pane_g1

0xc957,	// (0x00021eee) bg_set_opt_pane_g2

0xc95f,	// (0x00021ef6) bg_set_opt_pane_g3

0xc967,	// (0x00021efe) bg_set_opt_pane_g4

0xc96f,	// (0x00021f06) bg_set_opt_pane_g5

0xc977,	// (0x00021f0e) bg_set_opt_pane_g6

0xc97f,	// (0x00021f16) bg_set_opt_pane_g7

0xc987,	// (0x00021f1e) bg_set_opt_pane_g8

0xc98f,	// (0x00021f26) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x00024c0f) bg_set_opt_pane_g

0xe55c,	// (0x00023af3) control_top_pane_stacon_ParamLimits

0xe55c,	// (0x00023af3) control_top_pane_stacon

0xe5af,	// (0x00023b46) signal_pane_stacon_ParamLimits

0xe5af,	// (0x00023b46) signal_pane_stacon

0xcee6,	// (0x0002247d) stacon_top_pane_g1_ParamLimits

0xcee6,	// (0x0002247d) stacon_top_pane_g1

0xe5d4,	// (0x00023b6b) title_pane_stacon_ParamLimits

0xe5d4,	// (0x00023b6b) title_pane_stacon

0xe5fe,	// (0x00023b95) uni_indicator_pane_stacon_ParamLimits

0xe5fe,	// (0x00023b95) uni_indicator_pane_stacon

0xe613,	// (0x00023baa) battery_pane_stacon_ParamLimits

0xe613,	// (0x00023baa) battery_pane_stacon

0xe657,	// (0x00023bee) control_bottom_pane_stacon_ParamLimits

0xe657,	// (0x00023bee) control_bottom_pane_stacon

0xe67a,	// (0x00023c11) navi_pane_stacon_ParamLimits

0xe67a,	// (0x00023c11) navi_pane_stacon

0xcf08,	// (0x0002249f) stacon_bottom_pane_g1_ParamLimits

0xcf08,	// (0x0002249f) stacon_bottom_pane_g1

0xe31f,	// (0x000238b6) aid_levels_signal_lsc_ParamLimits

0xe31f,	// (0x000238b6) aid_levels_signal_lsc

0xe335,	// (0x000238cc) signal_pane_stacon_g1_ParamLimits

0xe335,	// (0x000238cc) signal_pane_stacon_g1

0xe349,	// (0x000238e0) signal_pane_stacon_g2_ParamLimits

0xe349,	// (0x000238e0) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x00024c22) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x00024c22) signal_pane_stacon_g

0xe37e,	// (0x00023915) title_pane_stacon_t1_ParamLimits

0xe37e,	// (0x00023915) title_pane_stacon_t1

0xcb9e,	// (0x00022135) uni_indicator_pane_stacon_g1

0xcba8,	// (0x0002213f) uni_indicator_pane_stacon_g2

0xcbb2,	// (0x00022149) uni_indicator_pane_stacon_g3

0xcbbc,	// (0x00022153) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x00024c2e) uni_indicator_pane_stacon_g

0xe3a3,	// (0x0002393a) control_top_pane_stacon_g1

0xe3ab,	// (0x00023942) control_top_pane_stacon_t1_ParamLimits

0xe3ab,	// (0x00023942) control_top_pane_stacon_t1

0xe3e2,	// (0x00023979) aid_levels_battery_lsc_ParamLimits

0xe3e2,	// (0x00023979) aid_levels_battery_lsc

0xe3f9,	// (0x00023990) battery_pane_stacon_g1_ParamLimits

0xe3f9,	// (0x00023990) battery_pane_stacon_g1

0xe40c,	// (0x000239a3) battery_pane_stacon_g2_ParamLimits

0xe40c,	// (0x000239a3) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x00024c37) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x00024c37) battery_pane_stacon_g

0xe44a,	// (0x000239e1) navi_icon_pane_stacon

0xe45e,	// (0x000239f5) navi_navi_pane_stacon

0xe44a,	// (0x000239e1) navi_text_pane_stacon

0xe3a3,	// (0x0002393a) control_bottom_pane_stacon_g1

0xe472,	// (0x00023a09) control_bottom_pane_stacon_t1_ParamLimits

0xe472,	// (0x00023a09) control_bottom_pane_stacon_t1

0xa1f9,	// (0x0001f790) grid_app_pane_ParamLimits

0xa1f9,	// (0x0001f790) grid_app_pane

0xa231,	// (0x0001f7c8) scroll_pane_cp15_ParamLimits

0xa231,	// (0x0001f7c8) scroll_pane_cp15

0xa246,	// (0x0001f7dd) cell_app_pane_ParamLimits

0xa246,	// (0x0001f7dd) cell_app_pane

0xa28b,	// (0x0001f822) cell_app_pane_g1_ParamLimits

0xa28b,	// (0x0001f822) cell_app_pane_g1

0xcbe0,	// (0x00022177) cell_app_pane_g2_ParamLimits

0xcbe0,	// (0x00022177) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x00024c3c) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x00024c3c) cell_app_pane_g

0xa2af,	// (0x0001f846) cell_app_pane_t1_ParamLimits

0xa2af,	// (0x0001f846) cell_app_pane_t1

0xcbec,	// (0x00022183) grid_highlight_pane_ParamLimits

0xcbec,	// (0x00022183) grid_highlight_pane

0xc94f,	// (0x00021ee6) cell_highlight_pane_g1

0xc957,	// (0x00021eee) cell_highlight_pane_g2

0xc95f,	// (0x00021ef6) cell_highlight_pane_g3

0xc967,	// (0x00021efe) cell_highlight_pane_g4

0xc96f,	// (0x00021f06) cell_highlight_pane_g5

0xc977,	// (0x00021f0e) cell_highlight_pane_g6

0xc97f,	// (0x00021f16) cell_highlight_pane_g7

0xc987,	// (0x00021f1e) cell_highlight_pane_g8

0xc98f,	// (0x00021f26) cell_highlight_pane_g9

0xc3e9,	// (0x00021980) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x00024bea) cell_highlight_pane_g

0xcbfd,	// (0x00022194) bg_scroll_pane

0x8350,	// (0x0001d8e7) scroll_handle_pane

0xcc44,	// (0x000221db) scroll_bg_pane_g1

0xcc59,	// (0x000221f0) scroll_bg_pane_g2

0xcc71,	// (0x00022208) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x00024c41) scroll_bg_pane_g

0xa2c6,	// (0x0001f85d) scroll_handle_focus_pane_ParamLimits

0xa2c6,	// (0x0001f85d) scroll_handle_focus_pane

0xcc44,	// (0x000221db) scroll_handle_pane_g1

0xcc86,	// (0x0002221d) scroll_handle_pane_g2

0xcc71,	// (0x00022208) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x00024c48) scroll_handle_pane_g

0xc9d4,	// (0x00021f6b) bg_popup_sub_pane_cp21_ParamLimits

0xc9d4,	// (0x00021f6b) bg_popup_sub_pane_cp21

0xa2d3,	// (0x0001f86a) popup_fep_japan_predictive_window_t1_ParamLimits

0xa2d3,	// (0x0001f86a) popup_fep_japan_predictive_window_t1

0xa2ea,	// (0x0001f881) popup_fep_japan_predictive_window_t2_ParamLimits

0xa2ea,	// (0x0001f881) popup_fep_japan_predictive_window_t2

0xa31d,	// (0x0001f8b4) popup_fep_japan_predictive_window_t3_ParamLimits

0xa31d,	// (0x0001f8b4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x00024c4f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x00024c4f) popup_fep_japan_predictive_window_t

0xc3f3,	// (0x0002198a) bg_popup_sub_pane_cp23

0xa354,	// (0x0001f8eb) listscroll_japin_cand_pane

0xcc9a,	// (0x00022231) popup_fep_japan_candidate_window_t1

0xcca8,	// (0x0002223f) candidate_pane_ParamLimits

0xcca8,	// (0x0002223f) candidate_pane

0xa35c,	// (0x0001f8f3) scroll_pane_cp30

0xccba,	// (0x00022251) list_single_popup_jap_candidate_pane_ParamLimits

0xccba,	// (0x00022251) list_single_popup_jap_candidate_pane

0xc3f3,	// (0x0002198a) list_highlight_pane_cp30

0xcccf,	// (0x00022266) list_single_popup_jap_candidate_pane_t1

0xccde,	// (0x00022275) level_1_signal

0xcceb,	// (0x00022282) level_2_signal

0xccf8,	// (0x0002228f) level_3_signal

0xcd05,	// (0x0002229c) level_4_signal

0xcd12,	// (0x000222a9) level_5_signal

0xcd1f,	// (0x000222b6) level_6_signal

0xcd2c,	// (0x000222c3) level_7_signal

0xccde,	// (0x00022275) level_1_battery

0xcceb,	// (0x00022282) level_2_battery

0xccf8,	// (0x0002228f) level_3_battery

0xcd05,	// (0x0002229c) level_4_battery

0xcd12,	// (0x000222a9) level_5_battery

0xcd1f,	// (0x000222b6) level_6_battery

0xcd2c,	// (0x000222c3) level_7_battery

0xcd51,	// (0x000222e8) list_menu_pane_ParamLimits

0xcd51,	// (0x000222e8) list_menu_pane

0xcd67,	// (0x000222fe) scroll_pane_cp25_ParamLimits

0xcd67,	// (0x000222fe) scroll_pane_cp25

0xa364,	// (0x0001f8fb) list_double2_graphic_pane_cp2_ParamLimits

0xa364,	// (0x0001f8fb) list_double2_graphic_pane_cp2

0xa364,	// (0x0001f8fb) list_double2_large_graphic_pane_cp2_ParamLimits

0xa364,	// (0x0001f8fb) list_double2_large_graphic_pane_cp2

0xa364,	// (0x0001f8fb) list_double2_pane_cp2_ParamLimits

0xa364,	// (0x0001f8fb) list_double2_pane_cp2

0xa364,	// (0x0001f8fb) list_double_graphic_pane_cp2_ParamLimits

0xa364,	// (0x0001f8fb) list_double_graphic_pane_cp2

0xa364,	// (0x0001f8fb) list_double_large_graphic_pane_cp2_ParamLimits

0xa364,	// (0x0001f8fb) list_double_large_graphic_pane_cp2

0xa364,	// (0x0001f8fb) list_double_number_pane_cp2_ParamLimits

0xa364,	// (0x0001f8fb) list_double_number_pane_cp2

0xa364,	// (0x0001f8fb) list_double_pane_cp2_ParamLimits

0xa364,	// (0x0001f8fb) list_double_pane_cp2

0xa373,	// (0x0001f90a) list_single_2graphic_pane_cp2_ParamLimits

0xa373,	// (0x0001f90a) list_single_2graphic_pane_cp2

0xa373,	// (0x0001f90a) list_single_graphic_heading_pane_cp2_ParamLimits

0xa373,	// (0x0001f90a) list_single_graphic_heading_pane_cp2

0xa373,	// (0x0001f90a) list_single_graphic_pane_cp2_ParamLimits

0xa373,	// (0x0001f90a) list_single_graphic_pane_cp2

0xa373,	// (0x0001f90a) list_single_heading_pane_cp2_ParamLimits

0xa373,	// (0x0001f90a) list_single_heading_pane_cp2

0xcd90,	// (0x00022327) list_single_large_graphic_pane_cp2_ParamLimits

0xcd90,	// (0x00022327) list_single_large_graphic_pane_cp2

0xa373,	// (0x0001f90a) list_single_number_heading_pane_cp2_ParamLimits

0xa373,	// (0x0001f90a) list_single_number_heading_pane_cp2

0xa373,	// (0x0001f90a) list_single_number_pane_cp2_ParamLimits

0xa373,	// (0x0001f90a) list_single_number_pane_cp2

0xa385,	// (0x0001f91c) list_single_pane_cp2_ParamLimits

0xa385,	// (0x0001f91c) list_single_pane_cp2

0xcdaa,	// (0x00022341) bg_popup_sub_pane_cp22

0xe542,	// (0x00023ad9) popup_side_volume_key_window_g1

0xe54e,	// (0x00023ae5) popup_side_volume_key_window_t1

0x839f,	// (0x0001d936) volume_small_pane_cp1

0xc441,	// (0x000219d8) bg_popup_sub_pane_cp24_ParamLimits

0xc441,	// (0x000219d8) bg_popup_sub_pane_cp24

0xcdc0,	// (0x00022357) fep_china_uni_candidate_pane_ParamLimits

0xcdc0,	// (0x00022357) fep_china_uni_candidate_pane

0xcdd4,	// (0x0002236b) fep_china_uni_entry_pane

0xcde4,	// (0x0002237b) popup_fep_china_uni_window_g1

0xa412,	// (0x0001f9a9) fep_china_uni_entry_pane_g1

0xa41a,	// (0x0001f9b1) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x00024c80) fep_china_uni_entry_pane_g

0xce00,	// (0x00022397) fep_entry_item_pane

0xce0a,	// (0x000223a1) fep_candidate_item_pane

0xa422,	// (0x0001f9b9) fep_china_uni_candidate_pane_g1

0xce12,	// (0x000223a9) fep_china_uni_candidate_pane_g2

0xce1a,	// (0x000223b1) fep_china_uni_candidate_pane_g3

0xa42a,	// (0x0001f9c1) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x00024c85) fep_china_uni_candidate_pane_g

0xc3e9,	// (0x00021980) fep_entry_item_pane_g1

0xce22,	// (0x000223b9) fep_entry_item_pane_t1_ParamLimits

0xce22,	// (0x000223b9) fep_entry_item_pane_t1

0xce38,	// (0x000223cf) fep_candidate_item_pane_t1_ParamLimits

0xce38,	// (0x000223cf) fep_candidate_item_pane_t1

0xce4d,	// (0x000223e4) fep_candidate_item_pane_t2_ParamLimits

0xce4d,	// (0x000223e4) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x00024c8e) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x00024c8e) fep_candidate_item_pane_t

0xc44f,	// (0x000219e6) list_highlight_pane_cp31_ParamLimits

0xc44f,	// (0x000219e6) list_highlight_pane_cp31

0xce5f,	// (0x000223f6) level_1_signal_lsc

0xce68,	// (0x000223ff) level_2_signal_lsc

0xce71,	// (0x00022408) level_3_signal_lsc

0xce7a,	// (0x00022411) level_4_signal_lsc

0xce83,	// (0x0002241a) level_5_signal_lsc

0xce8c,	// (0x00022423) level_6_signal_lsc

0xce95,	// (0x0002242c) level_7_signal_lsc

0xce95,	// (0x0002242c) level_1_battery_lsc

0xce9e,	// (0x00022435) level_2_battery_lsc

0xcea7,	// (0x0002243e) level_3_battery_lsc

0xceb0,	// (0x00022447) level_4_battery_lsc

0xceb9,	// (0x00022450) level_5_battery_lsc

0xcec2,	// (0x00022459) level_6_battery_lsc

0xce5f,	// (0x000223f6) level_7_battery_lsc

0xcecb,	// (0x00022462) scroll_handle_focus_pane_g1

0xced4,	// (0x0002246b) scroll_handle_focus_pane_g2

0xcedd,	// (0x00022474) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x00024c93) scroll_handle_focus_pane_g

0xa432,	// (0x0001f9c9) list_single_2graphic_pane_g1_ParamLimits

0xa432,	// (0x0001f9c9) list_single_2graphic_pane_g1

0x9c2d,	// (0x0001f1c4) list_single_2graphic_pane_g2_ParamLimits

0x9c2d,	// (0x0001f1c4) list_single_2graphic_pane_g2

0x10eb,	// (0x00016682) list_single_2graphic_pane_g3_ParamLimits

0x10eb,	// (0x00016682) list_single_2graphic_pane_g3

0xa43e,	// (0x0001f9d5) list_single_2graphic_pane_g4_ParamLimits

0xa43e,	// (0x0001f9d5) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x00024c9a) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x00024c9a) list_single_2graphic_pane_g

0xa44a,	// (0x0001f9e1) list_single_2graphic_pane_t1_ParamLimits

0xa44a,	// (0x0001f9e1) list_single_2graphic_pane_t1

0xa478,	// (0x0001fa0f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa478,	// (0x0001fa0f) list_double2_graphic_large_graphic_pane_g1

0x9df7,	// (0x0001f38e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9df7,	// (0x0001f38e) list_double2_graphic_large_graphic_pane_g2

0x9d4a,	// (0x0001f2e1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9d4a,	// (0x0001f2e1) list_double2_graphic_large_graphic_pane_g3

0xa48a,	// (0x0001fa21) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa48a,	// (0x0001fa21) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x00024ca3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x00024ca3) list_double2_graphic_large_graphic_pane_g

0xa496,	// (0x0001fa2d) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa496,	// (0x0001fa2d) list_double2_graphic_large_graphic_pane_t1

0xa4ac,	// (0x0001fa43) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa4ac,	// (0x0001fa43) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x00024cac) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x00024cac) list_double2_graphic_large_graphic_pane_t

0xa531,	// (0x0001fac8) popup_fast_swap_window_ParamLimits

0xa531,	// (0x0001fac8) popup_fast_swap_window

0xa54d,	// (0x0001fae4) popup_side_volume_key_window

0xcf93,	// (0x0002252a) stacon_top_pane

0xcf9d,	// (0x00022534) status_pane_ParamLimits

0xcf9d,	// (0x00022534) status_pane

0xc3df,	// (0x00021976) status_small_pane

0xc3f3,	// (0x0002198a) control_pane

0xc3f3,	// (0x0002198a) stacon_bottom_pane

0xc849,	// (0x00021de0) scroll_pane_cp121

0xc840,	// (0x00021dd7) set_content_pane

0xa4be,	// (0x0001fa55) bg_active_tab_pane_g1_cp1

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp1

0xa4d0,	// (0x0001fa67) bg_active_tab_pane_g3_cp1

0xa4be,	// (0x0001fa55) bg_passive_tab_pane_g1_cp1

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp1

0xa4d0,	// (0x0001fa67) bg_passive_tab_pane_g3_cp1

0xa4d9,	// (0x0001fa70) bg_active_tab_pane_g1_cp2

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp2

0xa4e2,	// (0x0001fa79) bg_active_tab_pane_g3_cp2

0xa4d9,	// (0x0001fa70) bg_passive_tab_pane_g1_cp2

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp2

0xa4e2,	// (0x0001fa79) bg_passive_tab_pane_g3_cp2

0xa4eb,	// (0x0001fa82) bg_active_tab_pane_g1_cp3

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp3

0xa4f4,	// (0x0001fa8b) bg_active_tab_pane_g3_cp3

0xa4eb,	// (0x0001fa82) bg_passive_tab_pane_g1_cp3

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp3

0xa4f4,	// (0x0001fa8b) bg_passive_tab_pane_g3_cp3

0xa4fd,	// (0x0001fa94) bg_active_tab_pane_g1_cp4

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp4

0xa508,	// (0x0001fa9f) bg_active_tab_pane_g3_cp4

0xa4fd,	// (0x0001fa94) bg_passive_tab_pane_g1_cp4

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp4

0xa508,	// (0x0001fa9f) bg_passive_tab_pane_g3_cp4

0xa513,	// (0x0001faaa) bg_active_tab_pane_g1_cp5

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp5

0xa51c,	// (0x0001fab3) bg_active_tab_pane_g3_cp5

0xa513,	// (0x0001faaa) bg_passive_tab_pane_g1_cp5

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp5

0xa51c,	// (0x0001fab3) bg_passive_tab_pane_g3_cp5

0x2ea9,	// (0x00018440) list_set_graphic_pane_ParamLimits

0x2ea9,	// (0x00018440) list_set_graphic_pane

0xc3f3,	// (0x0002198a) bg_set_opt_pane_cp4

0xcf24,	// (0x000224bb) list_set_graphic_pane_g1_ParamLimits

0xcf24,	// (0x000224bb) list_set_graphic_pane_g1

0xcf30,	// (0x000224c7) list_set_graphic_pane_g2_ParamLimits

0xcf30,	// (0x000224c7) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x00024cb1) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x00024cb1) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x00025036) volume_small_pane_cp_g

0xa525,	// (0x0001fabc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa525,	// (0x0001fabc) list_double2_large_graphic_pane_g1_cp2

0xcf52,	// (0x000224e9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xcf52,	// (0x000224e9) list_double2_large_graphic_pane_g2_cp2

0xcf63,	// (0x000224fa) list_double2_large_graphic_pane_g3_cp2

0xcf6b,	// (0x00022502) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcf6b,	// (0x00022502) list_double2_large_graphic_pane_t1_cp2

0xcf81,	// (0x00022518) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcf81,	// (0x00022518) list_double2_large_graphic_pane_t2_cp2

0xb0a8,	// (0x0002063f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb0a8,	// (0x0002063f) list_double_large_graphic_pane_g1_cp2

0x2344,	// (0x000178db) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2344,	// (0x000178db) list_double_large_graphic_pane_g2_cp2

0xd0ad,	// (0x00022644) list_double_large_graphic_pane_g3_cp2

0x2355,	// (0x000178ec) list_double_large_graphic_pane_g4_cp

0x235d,	// (0x000178f4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x235d,	// (0x000178f4) list_double_large_graphic_pane_t1_cp2

0x2374,	// (0x0001790b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2374,	// (0x0001790b) list_double_large_graphic_pane_t2_cp2

0xcfab,	// (0x00022542) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcfab,	// (0x00022542) list_double2_graphic_pane_g1_cp2

0xcfb9,	// (0x00022550) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcfb9,	// (0x00022550) list_double2_graphic_pane_g2_cp2

0xcfca,	// (0x00022561) list_double2_graphic_pane_g3_cp2

0xcfd4,	// (0x0002256b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcfd4,	// (0x0002256b) list_double2_graphic_pane_t1_cp2

0xcfea,	// (0x00022581) list_double2_graphic_pane_t2_cp2_ParamLimits

0xcfea,	// (0x00022581) list_double2_graphic_pane_t2_cp2

0xc7db,	// (0x00021d72) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc7db,	// (0x00021d72) list_single_number_heading_pane_g1_cp2

0xcffc,	// (0x00022593) list_single_number_heading_pane_g2_cp2

0xd004,	// (0x0002259b) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd004,	// (0x0002259b) list_single_number_heading_pane_t1_cp2

0xd01a,	// (0x000225b1) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd01a,	// (0x000225b1) list_single_number_heading_pane_t2_cp2

0xd02c,	// (0x000225c3) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd02c,	// (0x000225c3) list_single_number_heading_pane_t3_cp2

0xc7db,	// (0x00021d72) list_single_heading_pane_g1_cp2_ParamLimits

0xc7db,	// (0x00021d72) list_single_heading_pane_g1_cp2

0xcffc,	// (0x00022593) list_single_heading_pane_g2_cp2

0xd004,	// (0x0002259b) list_single_heading_pane_t1_cp2_ParamLimits

0xd004,	// (0x0002259b) list_single_heading_pane_t1_cp2

0x213d,	// (0x000176d4) list_single_heading_pane_t2_cp2_ParamLimits

0x213d,	// (0x000176d4) list_single_heading_pane_t2_cp2

0x2085,	// (0x0001761c) list_double_graphic_pane_g1_cp2_ParamLimits

0x2085,	// (0x0001761c) list_double_graphic_pane_g1_cp2

0x2091,	// (0x00017628) list_double_graphic_pane_g2_cp2_ParamLimits

0x2091,	// (0x00017628) list_double_graphic_pane_g2_cp2

0x20a0,	// (0x00017637) list_double_graphic_pane_g3_cp2

0x20a8,	// (0x0001763f) list_double_graphic_pane_t1_cp2_ParamLimits

0x20a8,	// (0x0001763f) list_double_graphic_pane_t1_cp2

0x20be,	// (0x00017655) list_double_graphic_pane_t2_cp2_ParamLimits

0x20be,	// (0x00017655) list_double_graphic_pane_t2_cp2

0xd0a1,	// (0x00022638) list_double_number_pane_g1_cp2_ParamLimits

0xd0a1,	// (0x00022638) list_double_number_pane_g1_cp2

0xd0ad,	// (0x00022644) list_double_number_pane_g2_cp2

0x2049,	// (0x000175e0) list_double_number_pane_t1_cp2_ParamLimits

0x2049,	// (0x000175e0) list_double_number_pane_t1_cp2

0x205d,	// (0x000175f4) list_double_number_pane_t2_cp2_ParamLimits

0x205d,	// (0x000175f4) list_double_number_pane_t2_cp2

0x2073,	// (0x0001760a) list_double_number_pane_t3_cp2_ParamLimits

0x2073,	// (0x0001760a) list_double_number_pane_t3_cp2

0x1f32,	// (0x000174c9) list_single_graphic_pane_g1_cp2_ParamLimits

0x1f32,	// (0x000174c9) list_single_graphic_pane_g1_cp2

0xc7cf,	// (0x00021d66) list_single_graphic_pane_g2_cp2_ParamLimits

0xc7cf,	// (0x00021d66) list_single_graphic_pane_g2_cp2

0xd106,	// (0x0002269d) list_single_graphic_pane_g3_cp2

0x1f08,	// (0x0001749f) list_single_graphic_pane_t1_cp2_ParamLimits

0x1f08,	// (0x0001749f) list_single_graphic_pane_t1_cp2

0xc7cf,	// (0x00021d66) list_single_number_pane_g1_cp2_ParamLimits

0xc7cf,	// (0x00021d66) list_single_number_pane_g1_cp2

0xd106,	// (0x0002269d) list_single_number_pane_g2_cp2

0x1f08,	// (0x0001749f) list_single_number_pane_t1_cp2_ParamLimits

0x1f08,	// (0x0001749f) list_single_number_pane_t1_cp2

0x1f1e,	// (0x000174b5) list_single_number_pane_t2_cp2_ParamLimits

0x1f1e,	// (0x000174b5) list_single_number_pane_t2_cp2

0xcf52,	// (0x000224e9) list_double2_pane_g1_cp2_ParamLimits

0xcf52,	// (0x000224e9) list_double2_pane_g1_cp2

0xcf63,	// (0x000224fa) list_double2_pane_g2_cp2

0xd079,	// (0x00022610) list_double2_pane_t1_cp2_ParamLimits

0xd079,	// (0x00022610) list_double2_pane_t1_cp2

0xd08f,	// (0x00022626) list_double2_pane_t2_cp2_ParamLimits

0xd08f,	// (0x00022626) list_double2_pane_t2_cp2

0xd0a1,	// (0x00022638) list_double_pane_g1_cp2_ParamLimits

0xd0a1,	// (0x00022638) list_double_pane_g1_cp2

0xd0ad,	// (0x00022644) list_double_pane_g2_cp2

0xd0b5,	// (0x0002264c) list_double_pane_t1_cp2_ParamLimits

0xd0b5,	// (0x0002264c) list_double_pane_t1_cp2

0xd0cb,	// (0x00022662) list_double_pane_t2_cp2_ParamLimits

0xd0cb,	// (0x00022662) list_double_pane_t2_cp2

0xa567,	// (0x0001fafe) list_single_pane_cp2_g3

0xc7cf,	// (0x00021d66) list_single_pane_g1_cp2_ParamLimits

0xc7cf,	// (0x00021d66) list_single_pane_g1_cp2

0xd106,	// (0x0002269d) list_single_pane_g2_cp2

0xd10e,	// (0x000226a5) list_single_pane_t1_cp2_ParamLimits

0xd10e,	// (0x000226a5) list_single_pane_t1_cp2

0xa56f,	// (0x0001fb06) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa56f,	// (0x0001fb06) list_single_large_graphic_pane_g1_cp2

0xd126,	// (0x000226bd) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd126,	// (0x000226bd) list_single_large_graphic_pane_g2_cp2

0xd132,	// (0x000226c9) list_single_large_graphic_pane_g3_cp2

0xa57b,	// (0x0001fb12) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa57b,	// (0x0001fb12) list_single_large_graphic_pane_g4_cp1

0xd13a,	// (0x000226d1) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd13a,	// (0x000226d1) list_single_large_graphic_pane_t1_cp2

0x1ed4,	// (0x0001746b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1ed4,	// (0x0001746b) list_single_graphic_heading_pane_g1_cp2

0x1ea1,	// (0x00017438) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1ea1,	// (0x00017438) list_single_graphic_heading_pane_g4_cp2

0xd106,	// (0x0002269d) list_single_graphic_heading_pane_g5_cp2

0x1ee0,	// (0x00017477) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1ee0,	// (0x00017477) list_single_graphic_heading_pane_t1_cp2

0x1ef6,	// (0x0001748d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1ef6,	// (0x0001748d) list_single_graphic_heading_pane_t2_cp2

0x1e95,	// (0x0001742c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1e95,	// (0x0001742c) list_single_2graphic_pane_g1_cp2

0x1ea1,	// (0x00017438) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1ea1,	// (0x00017438) list_single_2graphic_pane_g2_cp2

0xd106,	// (0x0002269d) list_single_2graphic_pane_g3_cp2

0x1eb2,	// (0x00017449) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1eb2,	// (0x00017449) list_single_2graphic_pane_g4_cp2

0x1ebe,	// (0x00017455) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1ebe,	// (0x00017455) list_single_2graphic_pane_t1_cp2

0xc3e9,	// (0x00021980) list_highlight_pane_g10_cp1

0x1a7d,	// (0x00017014) list_highlight_pane_g1_cp1

0x1a85,	// (0x0001701c) list_highlight_pane_g2_cp1

0x1a8d,	// (0x00017024) list_highlight_pane_g3_cp1

0x1a95,	// (0x0001702c) list_highlight_pane_g4_cp1

0x1a9d,	// (0x00017034) list_highlight_pane_g5_cp1

0x1aa5,	// (0x0001703c) list_highlight_pane_g6_cp1

0x1aad,	// (0x00017044) list_highlight_pane_g7_cp1

0x1ab5,	// (0x0001704c) list_highlight_pane_g8_cp1

0x1abd,	// (0x00017054) list_highlight_pane_g9_cp1

0xae3d,	// (0x000203d4) form_field_slider_pane_t3

0xae4b,	// (0x000203e2) form_field_slider_pane_t4

0x19c1,	// (0x00016f58) slider_form_pane_ParamLimits

0x19c1,	// (0x00016f58) slider_form_pane

0xc3f3,	// (0x0002198a) control_abbreviations

0xc3f3,	// (0x0002198a) control_conventions

0xc3f3,	// (0x0002198a) control_definitions

0xc3f3,	// (0x0002198a) format_table_attribute

0xb07f,	// (0x00020616) bg_popup_preview_window_pane_g9

0xc3f3,	// (0x0002198a) format_table_data2

0xc3f3,	// (0x0002198a) format_table_data3

0xc3f3,	// (0x0002198a) format_table_data_example

0x0008,

0xc3f3,	// (0x0002198a) intro_purpose

0xf8aa,	// (0x00024e41) bg_popup_preview_window_pane_g

0xc3f3,	// (0x0002198a) texts_category

0xc3f3,	// (0x0002198a) texts_graphics

0xd150,	// (0x000226e7) text_digital

0xd15f,	// (0x000226f6) text_primary

0xd16e,	// (0x00022705) text_primary_small

0xd17d,	// (0x00022714) text_secondary

0xd18c,	// (0x00022723) text_title

0xb440,	// (0x000209d7) bg_passive_tab_pane_g1_cp3_srt

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp3_srt

0xb449,	// (0x000209e0) bg_passive_tab_pane_g3_cp3_srt

0xc441,	// (0x000219d8) bg_active_tab_pane_cp3_srt_ParamLimits

0xc441,	// (0x000219d8) bg_active_tab_pane_cp3_srt

0xb452,	// (0x000209e9) tabs_4_active_pane_srt_g1

0xb45a,	// (0x000209f1) tabs_4_active_pane_srt_t1_ParamLimits

0xb45a,	// (0x000209f1) tabs_4_active_pane_srt_t1

0xb440,	// (0x000209d7) bg_active_tab_pane_g1_cp3_copy1

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp3_copy1

0xb449,	// (0x000209e0) bg_active_tab_pane_g3_cp3_copy1

0xc44f,	// (0x000219e6) tabs_2_long_active_pane_srt_ParamLimits

0xc44f,	// (0x000219e6) tabs_2_long_active_pane_srt

0xc44f,	// (0x000219e6) tabs_2_long_passive_pane_srt_ParamLimits

0xc44f,	// (0x000219e6) tabs_2_long_passive_pane_srt

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp4_srt_ParamLimits

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp4_srt

0xb1b1,	// (0x00020748) bg_passive_tab_pane_g1_cp4_srt

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp4_srt

0xb1ba,	// (0x00020751) bg_passive_tab_pane_g3_cp4_srt

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp4_srt_ParamLimits

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp4_srt

0xb1c3,	// (0x0002075a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb1c3,	// (0x0002075a) tabs_2_long_active_pane_srt_t1

0xb1b1,	// (0x00020748) bg_active_tab_pane_g1_cp4_srt

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp4_srt

0xb1ba,	// (0x00020751) bg_active_tab_pane_g3_cp4_srt

0xc441,	// (0x000219d8) tabs_3_long_active_pane_srt_ParamLimits

0xc441,	// (0x000219d8) tabs_3_long_active_pane_srt

0xc441,	// (0x000219d8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc441,	// (0x000219d8) tabs_3_long_passive_pane_cp_srt

0xc441,	// (0x000219d8) tabs_3_long_passive_pane_srt_ParamLimits

0xc441,	// (0x000219d8) tabs_3_long_passive_pane_srt

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp5_srt_ParamLimits

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp5_srt

0xa513,	// (0x0001faaa) bg_passive_tab_pane_g1_cp5_srt

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp5_srt

0xa51c,	// (0x0001fab3) bg_passive_tab_pane_g3_cp5_srt

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp5_srt_ParamLimits

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp5_srt

0xb19b,	// (0x00020732) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb19b,	// (0x00020732) tabs_3_long_active_pane_srt_t1

0xa513,	// (0x0001faaa) bg_active_tab_pane_g1_cp5_srt

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp5_srt

0xa51c,	// (0x0001fab3) bg_active_tab_pane_g3_cp5_srt

0x259a,	// (0x00017b31) navi_text_pane_srt_t1

0x2592,	// (0x00017b29) navi_icon_pane_srt_g1

0xd277,	// (0x0002280e) midp_editing_number_pane_srt

0xd19b,	// (0x00022732) midp_ticker_pane_srt

0xd27f,	// (0x00022816) midp_ticker_pane_srt_g1

0xd287,	// (0x0002281e) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x00024cd0) midp_ticker_pane_srt_g

0xd28f,	// (0x00022826) midp_ticker_pane_srt_t1

0x2583,	// (0x00017b1a) midp_editing_number_pane_t1_copy1

0xa595,	// (0x0001fb2c) listscroll_midp_pane

0xa595,	// (0x0001fb2c) midp_form_pane

0xa600,	// (0x0001fb97) midp_info_popup_window_ParamLimits

0xa600,	// (0x0001fb97) midp_info_popup_window

0xc9d4,	// (0x00021f6b) bg_popup_sub_pane_cp50_ParamLimits

0xc9d4,	// (0x00021f6b) bg_popup_sub_pane_cp50

0x16b1,	// (0x00016c48) listscroll_midp_info_pane_ParamLimits

0x16b1,	// (0x00016c48) listscroll_midp_info_pane

0x1691,	// (0x00016c28) listscroll_form_midp_pane_ParamLimits

0x1691,	// (0x00016c28) listscroll_form_midp_pane

0x169d,	// (0x00016c34) scroll_bar_cp050

0x1691,	// (0x00016c28) list_midp_pane

0xb5e4,	// (0x00020b7b) signal_pane_g2_cp

0x15ab,	// (0x00016b42) listscroll_midp_info_pane_t1_ParamLimits

0x15ab,	// (0x00016b42) listscroll_midp_info_pane_t1

0xac77,	// (0x0002020e) listscroll_midp_info_pane_t2_ParamLimits

0xac77,	// (0x0002020e) listscroll_midp_info_pane_t2

0xacb5,	// (0x0002024c) listscroll_midp_info_pane_t3_ParamLimits

0xacb5,	// (0x0002024c) listscroll_midp_info_pane_t3

0xacef,	// (0x00020286) listscroll_midp_info_pane_t4_ParamLimits

0xacef,	// (0x00020286) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x00024d7c) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x00024d7c) listscroll_midp_info_pane_t

0xca29,	// (0x00021fc0) scroll_pane_cp21

0x154b,	// (0x00016ae2) form_midp_field_choice_group_pane

0xac3a,	// (0x000201d1) form_midp_field_text_pane

0x1591,	// (0x00016b28) form_midp_field_time_pane

0x1599,	// (0x00016b30) form_midp_gauge_slider_pane

0x15a2,	// (0x00016b39) form_midp_gauge_wait_pane

0xc3f3,	// (0x0002198a) form_midp_image_pane

0xac23,	// (0x000201ba) list_single_midp_pane_ParamLimits

0xac23,	// (0x000201ba) list_single_midp_pane

0xac01,	// (0x00020198) form_midp_field_text_pane_t1

0x1289,	// (0x00016820) input_focus_pane_cp050

0x1508,	// (0x00016a9f) list_midp_form_text_pane

0x149d,	// (0x00016a34) form_midp_field_choice_group_pane_t1

0x14ab,	// (0x00016a42) input_focus_pane_cp051

0x14bf,	// (0x00016a56) list_midp_choice_pane

0xc3f3,	// (0x0002198a) status_idle_pane

0x1481,	// (0x00016a18) form_midp_field_time_pane_t1

0xc3e9,	// (0x00021980) wait_anim_pane_g2_copy1

0x148f,	// (0x00016a26) form_midp_field_time_pane_t2

0x0001,

0xd1fb,	// (0x00022792) aid_navinavi_width_2_pane

0xf7e0,	// (0x00024d77) form_midp_field_time_pane_t

0xc3f3,	// (0x0002198a) input_focus_pane_cp052

0xc3f3,	// (0x0002198a) bg_input_focus_pane_cp040

0x1441,	// (0x000169d8) form_midp_gauge_slider_pane_t1

0x144f,	// (0x000169e6) form_midp_gauge_slider_pane_t2

0xabe5,	// (0x0002017c) form_midp_gauge_slider_pane_t3

0xabf3,	// (0x0002018a) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x00024d6e) form_midp_gauge_slider_pane_t

0x1479,	// (0x00016a10) form_midp_slider_pane

0xc44f,	// (0x000219e6) bg_input_focus_pane_cp041_ParamLimits

0xc44f,	// (0x000219e6) bg_input_focus_pane_cp041

0x140e,	// (0x000169a5) form_midp_gauge_wait_pane_t1_ParamLimits

0x140e,	// (0x000169a5) form_midp_gauge_wait_pane_t1

0x1420,	// (0x000169b7) form_midp_gauge_wait_pane_t2_ParamLimits

0x1420,	// (0x000169b7) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x00024d69) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x00024d69) form_midp_gauge_wait_pane_t

0x1432,	// (0x000169c9) form_midp_wait_pane_ParamLimits

0x1432,	// (0x000169c9) form_midp_wait_pane

0xabaf,	// (0x00020146) form_midp_image_pane_g1

0xabb8,	// (0x0002014f) form_midp_image_pane_t1

0xabc7,	// (0x0002015e) form_midp_image_pane_t2

0xabd6,	// (0x0002016d) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x00024d62) form_midp_image_pane_t

0x13c0,	// (0x00016957) list_single_midp_pane_g1

0x13c9,	// (0x00016960) list_single_midp_pane_t1

0xab9a,	// (0x00020131) list_midp_form_item_pane_ParamLimits

0xab9a,	// (0x00020131) list_midp_form_item_pane

0xd1a3,	// (0x0002273a) list_midp_form_item_pane_t1

0xd1b2,	// (0x00022749) midp_ticker_pane_g1

0xd1be,	// (0x00022755) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x00024cb6) midp_ticker_pane_g

0xd1ca,	// (0x00022761) midp_ticker_pane_t1

0x2803,	// (0x00017d9a) midp_editing_number_pane_t1

0x27e1,	// (0x00017d78) midp_editing_number_pane

0x27f0,	// (0x00017d87) midp_ticker_pane

0x2561,	// (0x00017af8) ai_message_heading_pane

0xc3f3,	// (0x0002198a) bg_popup_window_pane_cp14

0x2569,	// (0x00017b00) listscroll_ai_message_pane

0x24eb,	// (0x00017a82) ai_message_heading_pane_g1_ParamLimits

0x24eb,	// (0x00017a82) ai_message_heading_pane_g1

0xb151,	// (0x000206e8) ai_message_heading_pane_g2_ParamLimits

0xb151,	// (0x000206e8) ai_message_heading_pane_g2

0x2503,	// (0x00017a9a) ai_message_heading_pane_g3_ParamLimits

0x2503,	// (0x00017a9a) ai_message_heading_pane_g3

0x250f,	// (0x00017aa6) ai_message_heading_pane_g4_ParamLimits

0x250f,	// (0x00017aa6) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x00024ea3) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x00024ea3) ai_message_heading_pane_g

0xb15d,	// (0x000206f4) ai_message_heading_pane_t1_ParamLimits

0xb15d,	// (0x000206f4) ai_message_heading_pane_t1

0xb177,	// (0x0002070e) ai_message_heading_pane_t2_ParamLimits

0xb177,	// (0x0002070e) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x00024eac) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x00024eac) ai_message_heading_pane_t

0x2547,	// (0x00017ade) bg_popup_heading_pane_cp1_ParamLimits

0x2547,	// (0x00017ade) bg_popup_heading_pane_cp1

0x24d9,	// (0x00017a70) list_ai_message_pane_ParamLimits

0x24d9,	// (0x00017a70) list_ai_message_pane

0xca29,	// (0x00021fc0) scroll_pane_cp10

0xb149,	// (0x000206e0) list_ai_message_pane_g1

0x247d,	// (0x00017a14) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x00024e80) list_ai_message_pane_g

0x2485,	// (0x00017a1c) list_ai_message_pane_t1_ParamLimits

0x2485,	// (0x00017a1c) list_ai_message_pane_t1

0x249a,	// (0x00017a31) list_ai_message_pane_t2_ParamLimits

0x249a,	// (0x00017a31) list_ai_message_pane_t2

0x24af,	// (0x00017a46) list_ai_message_pane_t3_ParamLimits

0x24af,	// (0x00017a46) list_ai_message_pane_t3

0x24c4,	// (0x00017a5b) list_ai_message_pane_t4_ParamLimits

0x24c4,	// (0x00017a5b) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x00024e85) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x00024e85) list_ai_message_pane_t

0xb125,	// (0x000206bc) cell_ai_soft_ind_pane_ParamLimits

0xb125,	// (0x000206bc) cell_ai_soft_ind_pane

0xd1dc,	// (0x00022773) cell_ai_soft_ind_pane_g1_ParamLimits

0xd1dc,	// (0x00022773) cell_ai_soft_ind_pane_g1

0xc3f3,	// (0x0002198a) grid_highlight_cp1

0xd1e9,	// (0x00022780) text_secondary_cp56_ParamLimits

0xd1e9,	// (0x00022780) text_secondary_cp56

0x2435,	// (0x000179cc) example_general_pane_ParamLimits

0x2435,	// (0x000179cc) example_general_pane

0x2441,	// (0x000179d8) example_parent_pane_g1_ParamLimits

0x2441,	// (0x000179d8) example_parent_pane_g1

0x244d,	// (0x000179e4) example_parent_pane_t1_ParamLimits

0x244d,	// (0x000179e4) example_parent_pane_t1

0x894c,	// (0x0001dee3) popup_preview_text_window_ParamLimits

0x894c,	// (0x0001dee3) popup_preview_text_window

0xd0fe,	// (0x00022695) list_single_pane_cp2_g4

0xc63b,	// (0x00021bd2) bg_popup_preview_window_pane_ParamLimits

0xc63b,	// (0x00021bd2) bg_popup_preview_window_pane

0xb087,	// (0x0002061e) popup_preview_text_window_t1_ParamLimits

0xb087,	// (0x0002061e) popup_preview_text_window_t1

0x21ad,	// (0x00017744) popup_preview_text_window_t2_ParamLimits

0x21ad,	// (0x00017744) popup_preview_text_window_t2

0x21f6,	// (0x0001778d) popup_preview_text_window_t3_ParamLimits

0x21f6,	// (0x0001778d) popup_preview_text_window_t3

0x223b,	// (0x000177d2) popup_preview_text_window_t4_ParamLimits

0x223b,	// (0x000177d2) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x00024e54) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x00024e54) popup_preview_text_window_t

0x22b9,	// (0x00017850) scroll_pane_cp11

0x1169,	// (0x00016700) bg_popup_preview_window_pane_g1

0xb047,	// (0x000205de) bg_popup_preview_window_pane_g2

0xb04f,	// (0x000205e6) bg_popup_preview_window_pane_g3

0xb057,	// (0x000205ee) bg_popup_preview_window_pane_g4

0xb05f,	// (0x000205f6) bg_popup_preview_window_pane_g5

0xb067,	// (0x000205fe) bg_popup_preview_window_pane_g6

0xb06f,	// (0x00020606) bg_popup_preview_window_pane_g7

0xb077,	// (0x0002060e) bg_popup_preview_window_pane_g8

0xe2e1,	// (0x00023878) aid_popup_width_pane

0x88c8,	// (0x0001de5f) popup_midp_note_alarm_window_ParamLimits

0x88c8,	// (0x0001de5f) popup_midp_note_alarm_window

0xc87d,	// (0x00021e14) data_form_pane_ParamLimits

0x9fed,	// (0x0001f584) form_field_data_pane_g1

0x9ff7,	// (0x0001f58e) form_field_data_pane_t1_ParamLimits

0xc889,	// (0x00021e20) input_focus_pane_ParamLimits

0xc897,	// (0x00021e2e) data_form_wide_pane_ParamLimits

0xc8a8,	// (0x00021e3f) form_field_data_wide_pane_g1

0xc8d4,	// (0x00021e6b) form_field_data_wide_pane_t1_ParamLimits

0xc713,	// (0x00021caa) input_focus_pane_cp6_ParamLimits

0xa169,	// (0x0001f700) input_popup_find_pane_g1_ParamLimits

0xa169,	// (0x0001f700) input_popup_find_pane_g1

0xe41d,	// (0x000239b4) aid_navi_side_left_pane

0xe432,	// (0x000239c9) aid_navi_side_right_pane

0x1b78,	// (0x0001710f) bg_popup_window_pane_cp30_ParamLimits

0x1b78,	// (0x0001710f) bg_popup_window_pane_cp30

0x1bf2,	// (0x00017189) popup_midp_note_alarm_window_g1_ParamLimits

0x1bf2,	// (0x00017189) popup_midp_note_alarm_window_g1

0x1c22,	// (0x000171b9) popup_midp_note_alarm_window_t1_ParamLimits

0x1c22,	// (0x000171b9) popup_midp_note_alarm_window_t1

0xae90,	// (0x00020427) popup_midp_note_alarm_window_t2_ParamLimits

0xae90,	// (0x00020427) popup_midp_note_alarm_window_t2

0xaf3e,	// (0x000204d5) popup_midp_note_alarm_window_t3_ParamLimits

0xaf3e,	// (0x000204d5) popup_midp_note_alarm_window_t3

0xaf66,	// (0x000204fd) popup_midp_note_alarm_window_t4_ParamLimits

0xaf66,	// (0x000204fd) popup_midp_note_alarm_window_t4

0x1db9,	// (0x00017350) popup_midp_note_alarm_window_t5_ParamLimits

0x1db9,	// (0x00017350) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x00024df1) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x00024df1) popup_midp_note_alarm_window_t

0x1e65,	// (0x000173fc) wait_bar_pane_cp1_ParamLimits

0x1e65,	// (0x000173fc) wait_bar_pane_cp1

0xc3f3,	// (0x0002198a) wait_anim_pane_copy1

0xc3f3,	// (0x0002198a) wait_border_pane_copy1

0x186e,	// (0x00016e05) wait_border_pane_g1_copy1

0xc8ee,	// (0x00021e85) form_field_popup_pane_g1

0xa011,	// (0x0001f5a8) form_field_popup_pane_t1_ParamLimits

0xc889,	// (0x00021e20) input_focus_pane_cp7_ParamLimits

0xc8f6,	// (0x00021e8d) list_form_pane_ParamLimits

0xc902,	// (0x00021e99) form_field_popup_wide_pane_g1

0xc90a,	// (0x00021ea1) form_field_popup_wide_pane_t1_ParamLimits

0xc889,	// (0x00021e20) input_focus_pane_cp8_ParamLimits

0xc91f,	// (0x00021eb6) list_form_wide_pane_ParamLimits

0x2a47,	// (0x00017fde) aid_size_cell_graphic_pane

0xa090,	// (0x0001f627) data_form_pane_t1_ParamLimits

0xb361,	// (0x000208f8) data_form_wide_pane_t1_ParamLimits

0xa809,	// (0x0001fda0) bg_status_flat_pane

0x9675,	// (0x0001ec0c) title_pane_t1_ParamLimits

0xc409,	// (0x000219a0) title_pane_t2_ParamLimits

0xc42f,	// (0x000219c6) title_pane_t3_ParamLimits

0xf532,	// (0x00024ac9) title_pane_t_ParamLimits

0xccde,	// (0x00022275) level_1_signal_ParamLimits

0xcceb,	// (0x00022282) level_2_signal_ParamLimits

0xccf8,	// (0x0002228f) level_3_signal_ParamLimits

0xcd05,	// (0x0002229c) level_4_signal_ParamLimits

0xcd12,	// (0x000222a9) level_5_signal_ParamLimits

0xcd1f,	// (0x000222b6) level_6_signal_ParamLimits

0xcd2c,	// (0x000222c3) level_7_signal_ParamLimits

0xccde,	// (0x00022275) level_1_battery_ParamLimits

0xcceb,	// (0x00022282) level_2_battery_ParamLimits

0xccf8,	// (0x0002228f) level_3_battery_ParamLimits

0xcd05,	// (0x0002229c) level_4_battery_ParamLimits

0xcd12,	// (0x000222a9) level_5_battery_ParamLimits

0xcd1f,	// (0x000222b6) level_6_battery_ParamLimits

0xcd2c,	// (0x000222c3) level_7_battery_ParamLimits

0x1a7d,	// (0x00017014) bg_status_flat_pane_g1

0x1a85,	// (0x0001701c) bg_status_flat_pane_g2

0x1a8d,	// (0x00017024) bg_status_flat_pane_g3

0x1a95,	// (0x0001702c) bg_status_flat_pane_g4

0x1a9d,	// (0x00017034) bg_status_flat_pane_g5

0x1aa5,	// (0x0001703c) bg_status_flat_pane_g6

0x1aad,	// (0x00017044) bg_status_flat_pane_g7

0x9709,	// (0x0001eca0) tabs_3_active_pane_t1_ParamLimits

0x9709,	// (0x0001eca0) tabs_3_passive_pane_t1_ParamLimits

0x9723,	// (0x0001ecba) tabs_4_active_pane_t1_ParamLimits

0x9723,	// (0x0001ecba) tabs_4_1_passive_pane_t1_ParamLimits

0xa1a8,	// (0x0001f73f) tabs_2_active_pane_t1_ParamLimits

0xa1a8,	// (0x0001f73f) tabs_2_passive_pane_t1_ParamLimits

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp4_ParamLimits

0xa1ba,	// (0x0001f751) tabs_2_long_active_pane_t1_ParamLimits

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp4_ParamLimits

0xe8b5,	// (0x00023e4c) list_single_midp_graphic_pane_t1_ParamLimits

0xc44f,	// (0x000219e6) bg_active_tab_pane_cp5_ParamLimits

0xa1cd,	// (0x0001f764) tabs_3_long_active_pane_t1_ParamLimits

0xca39,	// (0x00021fd0) bg_passive_tab_pane_cp5_ParamLimits

0xe8b5,	// (0x00023e4c) list_single_midp_graphic_pane_t1

0xa809,	// (0x0001fda0) bg_status_flat_pane_ParamLimits

0x0dce,	// (0x00016365) indicator_pane_cp2_ParamLimits

0x0dce,	// (0x00016365) indicator_pane_cp2

0xa987,	// (0x0001ff1e) navi_pane_srt_ParamLimits

0xa987,	// (0x0001ff1e) navi_pane_srt

0x0f1d,	// (0x000164b4) popup_clock_digital_analogue_window_cp1

0xc4ad,	// (0x00021a44) indicator_pane_t1

0xd19b,	// (0x00022732) copy_highlight_pane

0xd19b,	// (0x00022732) cursor_graphics_pane

0xd19b,	// (0x00022732) graphic_within_text_pane

0xd19b,	// (0x00022732) link_highlight_pane

0x227c,	// (0x00017813) popup_preview_text_window_t5_ParamLimits

0x227c,	// (0x00017813) popup_preview_text_window_t5

0xd203,	// (0x0002279a) cursor_digital_pane

0xd203,	// (0x0002279a) cursor_primary_pane

0xd214,	// (0x000227ab) cursor_primary_small_pane

0xd21c,	// (0x000227b3) cursor_secondary_pane

0xd224,	// (0x000227bb) cursor_title_pane

0xd203,	// (0x0002279a) link_highlight_digital_pane

0xd20b,	// (0x000227a2) link_highlight_primary_pane

0xd214,	// (0x000227ab) link_highlight_primary_small_pane

0xd21c,	// (0x000227b3) link_highlight_secondary_pane

0xd224,	// (0x000227bb) link_highlight_title_pane

0xd203,	// (0x0002279a) copy_highlight_digital_pane

0xd203,	// (0x0002279a) copy_highlight_primary_pane

0xd214,	// (0x000227ab) copy_highlight_primary_small_pane

0xd21c,	// (0x000227b3) copy_highlight_secondary_pane

0xd224,	// (0x000227bb) copy_highlight_title_pane

0xd21c,	// (0x000227b3) graphic_text_digital_pane

0x1b1b,	// (0x000170b2) graphic_text_primary_pane

0x1b24,	// (0x000170bb) graphic_text_primary_small_pane

0xd214,	// (0x000227ab) graphic_text_secondary_pane

0xd203,	// (0x0002279a) graphic_text_title_pane

0xa651,	// (0x0001fbe8) cursor_primary_pane_g1

0x1b0d,	// (0x000170a4) cursor_text_primary_t1

0xae86,	// (0x0002041d) cursor_primary_small_pane_g1

0x1aff,	// (0x00017096) cursor_text_primary_small_t1

0xae7c,	// (0x00020413) cursor_primary_small_pane_g1_copy1

0x1ae7,	// (0x0001707e) cursor_text_primary_small_t1_copy1

0x1ac5,	// (0x0001705c) cursor_text_title_t1

0xae72,	// (0x00020409) cursor_title_pane_g1

0xa651,	// (0x0001fbe8) cursor_digital_pane_g1

0xd22c,	// (0x000227c3) cursor_text_digital_t1

0xd23a,	// (0x000227d1) link_highlight_primary_pane_g1

0x1a6e,	// (0x00017005) link_highlight_primary_pane_t1

0xd23a,	// (0x000227d1) link_highlight_primary_small_pane_g1

0xd242,	// (0x000227d9) link_highlight_primary_small_pane_t1

0xd23a,	// (0x000227d1) link_highlight_secondary_pane_g1

0xd251,	// (0x000227e8) link_highlight_secondary_pane_t1

0x19d3,	// (0x00016f6a) link_highlight_title_pane_g1

0x19ea,	// (0x00016f81) link_highlight_title_pane_t1

0x19d3,	// (0x00016f6a) link_highlight_digital_pane_g1

0x19db,	// (0x00016f72) link_highlight_digital_pane_t1

0x188d,	// (0x00016e24) copy_highlight_primary_pane_g1

0x18b3,	// (0x00016e4a) copy_highlight_primary_pane_t1

0x188d,	// (0x00016e24) copy_highlight_primary_small_pane_g1

0x18a4,	// (0x00016e3b) copy_highlight_primary_small_pane_t1

0xd260,	// (0x000227f7) copy_highlight_secondary_pane_g1

0xd268,	// (0x000227ff) copy_highlight_secondary_pane_t1

0x188d,	// (0x00016e24) copy_highlight_title_pane_g1

0x1895,	// (0x00016e2c) copy_highlight_title_pane_t1

0x188d,	// (0x00016e24) copy_highlight_digital_pane_g1

0x2c15,	// (0x000181ac) copy_highlight_digital_pane_t1

0x2b69,	// (0x00018100) graphic_text_primary_pane_g1

0x2bf9,	// (0x00018190) graphic_text_primary_pane_t1

0x2c07,	// (0x0001819e) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x00024f20) graphic_text_primary_pane_t

0x2bd5,	// (0x0001816c) graphic_text_primary_small_pane_g1

0x2bdd,	// (0x00018174) graphic_text_primary_small_pane_t1

0x2beb,	// (0x00018182) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x00024f1b) graphic_text_primary_small_pane_t

0x2bb1,	// (0x00018148) graphic_text_secondary_pane_g1

0x2bb9,	// (0x00018150) graphic_text_secondary_pane_t1

0x2bc7,	// (0x0001815e) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x00024f16) graphic_text_secondary_pane_t

0x2b8d,	// (0x00018124) graphic_text_title_pane_g1

0x2b95,	// (0x0001812c) graphic_text_title_pane_t1

0x2ba3,	// (0x0001813a) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x00024f11) graphic_text_title_pane_t

0x2b69,	// (0x00018100) graphic_text_digital_pane_g1

0x2b71,	// (0x00018108) graphic_text_digital_pane_t1

0x2b7f,	// (0x00018116) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x00024f0c) graphic_text_digital_pane_t

0xc44f,	// (0x000219e6) navi_icon_pane_srt_ParamLimits

0xc44f,	// (0x000219e6) navi_icon_pane_srt

0xc3f3,	// (0x0002198a) navi_midp_pane_srt

0xc3f3,	// (0x0002198a) navi_navi_pane_srt

0xc44f,	// (0x000219e6) navi_text_pane_srt_ParamLimits

0xc44f,	// (0x000219e6) navi_text_pane_srt

0x2b34,	// (0x000180cb) navi_navi_icon_text_pane_srt

0x2b3c,	// (0x000180d3) navi_navi_pane_srt_g1_ParamLimits

0x2b3c,	// (0x000180d3) navi_navi_pane_srt_g1

0x2b4e,	// (0x000180e5) navi_navi_pane_srt_g2_ParamLimits

0x2b4e,	// (0x000180e5) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x00024f07) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x00024f07) navi_navi_pane_srt_g

0x2b60,	// (0x000180f7) navi_navi_tabs_pane_srt

0x2b34,	// (0x000180cb) navi_navi_text_pane_srt

0x2b34,	// (0x000180cb) navi_navi_volume_pane_srt

0x2b25,	// (0x000180bc) navi_navi_text_pane_srt_t1

0xeaa7,	// (0x0002403e) navi_navi_volume_pane_srt_g1

0xeaaf,	// (0x00024046) volume_small_pane_srt_ParamLimits

0xeaaf,	// (0x00024046) volume_small_pane_srt

0xe69d,	// (0x00023c34) volume_small_pane_srt_g1_ParamLimits

0xe69d,	// (0x00023c34) volume_small_pane_srt_g1

0xe6ad,	// (0x00023c44) volume_small_pane_srt_g2_ParamLimits

0xe6ad,	// (0x00023c44) volume_small_pane_srt_g2

0xe6be,	// (0x00023c55) volume_small_pane_srt_g3_ParamLimits

0xe6be,	// (0x00023c55) volume_small_pane_srt_g3

0xe6cf,	// (0x00023c66) volume_small_pane_srt_g4_ParamLimits

0xe6cf,	// (0x00023c66) volume_small_pane_srt_g4

0xe6e0,	// (0x00023c77) volume_small_pane_srt_g5_ParamLimits

0xe6e0,	// (0x00023c77) volume_small_pane_srt_g5

0xe6f1,	// (0x00023c88) volume_small_pane_srt_g6_ParamLimits

0xe6f1,	// (0x00023c88) volume_small_pane_srt_g6

0xe702,	// (0x00023c99) volume_small_pane_srt_g7_ParamLimits

0xe702,	// (0x00023c99) volume_small_pane_srt_g7

0xe713,	// (0x00023caa) volume_small_pane_srt_g8_ParamLimits

0xe713,	// (0x00023caa) volume_small_pane_srt_g8

0xe724,	// (0x00023cbb) volume_small_pane_srt_g9_ParamLimits

0xe724,	// (0x00023cbb) volume_small_pane_srt_g9

0xe735,	// (0x00023ccc) volume_small_pane_srt_g10_ParamLimits

0xe735,	// (0x00023ccc) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x00024cbb) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x00024cbb) volume_small_pane_srt_g

0x9979,	// (0x0001ef10) query_popup_data_pane_cp2

0x2b0b,	// (0x000180a2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2b0b,	// (0x000180a2) navi_navi_icon_text_pane_srt_t1

0x1b1b,	// (0x000170b2) navi_tabs_2_long_pane_srt

0x1b1b,	// (0x000170b2) navi_tabs_2_pane_srt

0x1b1b,	// (0x000170b2) navi_tabs_3_long_pane_srt

0x1b1b,	// (0x000170b2) navi_tabs_3_pane_srt

0x1b1b,	// (0x000170b2) navi_tabs_4_pane_srt

0x8e4a,	// (0x0001e3e1) tabs_2_active_pane_srt_ParamLimits

0x8e4a,	// (0x0001e3e1) tabs_2_active_pane_srt

0x8e5a,	// (0x0001e3f1) tabs_2_passive_pane_srt_ParamLimits

0x8e5a,	// (0x0001e3f1) tabs_2_passive_pane_srt

0x1289,	// (0x00016820) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1289,	// (0x00016820) bg_passive_tab_pane_cp1_srt

0xb4e3,	// (0x00020a7a) bg_passive_tab_pane_g1_cp1_srt

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp1_srt

0xb4ec,	// (0x00020a83) bg_passive_tab_pane_g3_cp1_srt

0xc441,	// (0x000219d8) bg_active_tab_pane_cp1_srt_ParamLimits

0xc441,	// (0x000219d8) bg_active_tab_pane_cp1_srt

0xb4f5,	// (0x00020a8c) tabs_2_active_pane_srt_g1

0xb4fd,	// (0x00020a94) tabs_2_active_pane_srt_t1_ParamLimits

0xb4fd,	// (0x00020a94) tabs_2_active_pane_srt_t1

0xb4e3,	// (0x00020a7a) bg_active_tab_pane_g1_cp1_srt

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp1_srt

0xb4ec,	// (0x00020a83) bg_active_tab_pane_g3_cp1_srt

0x8e17,	// (0x0001e3ae) tabs_3_active_pane_srt_ParamLimits

0x8e17,	// (0x0001e3ae) tabs_3_active_pane_srt

0x8e28,	// (0x0001e3bf) tabs_3_passive_pane_cp_srt_ParamLimits

0x8e28,	// (0x0001e3bf) tabs_3_passive_pane_cp_srt

0x8e39,	// (0x0001e3d0) tabs_3_passive_pane_srt_ParamLimits

0x8e39,	// (0x0001e3d0) tabs_3_passive_pane_srt

0x1289,	// (0x00016820) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1289,	// (0x00016820) bg_passive_tab_pane_cp2_srt

0xa65b,	// (0x0001fbf2) bg_passive_tab_pane_g1_cp2_srt

0xa4c7,	// (0x0001fa5e) bg_passive_tab_pane_g2_cp2_srt

0xa664,	// (0x0001fbfb) bg_passive_tab_pane_g3_cp2_srt

0xc441,	// (0x000219d8) bg_active_tab_pane_cp2_srt_ParamLimits

0xc441,	// (0x000219d8) bg_active_tab_pane_cp2_srt

0xb4c5,	// (0x00020a5c) tabs_3_active_pane_srt_g1

0xb4cd,	// (0x00020a64) tabs_3_active_pane_srt_t1_ParamLimits

0xb4cd,	// (0x00020a64) tabs_3_active_pane_srt_t1

0xa65b,	// (0x0001fbf2) bg_active_tab_pane_g1_cp2_srt

0xa4c7,	// (0x0001fa5e) bg_active_tab_pane_g2_cp2_srt

0xa664,	// (0x0001fbfb) bg_active_tab_pane_g3_cp2_srt

0xea5f,	// (0x00023ff6) tabs_4_active_pane_srt_ParamLimits

0xea5f,	// (0x00023ff6) tabs_4_active_pane_srt

0xea71,	// (0x00024008) tabs_4_passive_pane_cp2_srt_ParamLimits

0xea71,	// (0x00024008) tabs_4_passive_pane_cp2_srt

0xe755,	// (0x00023cec) aid_size_cell_toolbar

0x262b,	// (0x00017bc2) main_idle_act_pane_ParamLimits

0xe7b9,	// (0x00023d50) popup_large_graphic_colour_window_ParamLimits

0x8bfe,	// (0x0001e195) popup_toolbar_window_ParamLimits

0x8bfe,	// (0x0001e195) popup_toolbar_window

0x282e,	// (0x00017dc5) list_single_graphic_2heading_pane_ParamLimits

0x282e,	// (0x00017dc5) list_single_graphic_2heading_pane

0xcbc6,	// (0x0002215d) aid_size_cell_apps_grid_lsc_pane

0xcbd8,	// (0x0002216f) aid_size_cell_apps_grid_prt_pane

0xca39,	// (0x00021fd0) bg_wml_button_pane_cp1_ParamLimits

0xca39,	// (0x00021fd0) bg_wml_button_pane_cp1

0xac01,	// (0x00020198) form_midp_field_text_pane_t1_ParamLimits

0x1289,	// (0x00016820) input_focus_pane_cp050_ParamLimits

0x1508,	// (0x00016a9f) list_midp_form_text_pane_ParamLimits

0x14ab,	// (0x00016a42) input_focus_pane_cp051_ParamLimits

0x14bf,	// (0x00016a56) list_midp_choice_pane_ParamLimits

0xab66,	// (0x000200fd) list_single_2graphic_pane_cp3_ParamLimits

0xab66,	// (0x000200fd) list_single_2graphic_pane_cp3

0xab7a,	// (0x00020111) list_single_midp_graphic_pane_ParamLimits

0xab7a,	// (0x00020111) list_single_midp_graphic_pane

0xe7e7,	// (0x00023d7e) list_single_graphic_2heading_pane_g1_ParamLimits

0xe7e7,	// (0x00023d7e) list_single_graphic_2heading_pane_g1

0xe7f3,	// (0x00023d8a) list_single_graphic_2heading_pane_g4_ParamLimits

0xe7f3,	// (0x00023d8a) list_single_graphic_2heading_pane_g4

0xe7ff,	// (0x00023d96) list_single_graphic_2heading_pane_g5_ParamLimits

0xe7ff,	// (0x00023d96) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x00024d0e) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x00024d0e) list_single_graphic_2heading_pane_g

0xe80b,	// (0x00023da2) list_single_graphic_2heading_pane_t1_ParamLimits

0xe80b,	// (0x00023da2) list_single_graphic_2heading_pane_t1

0xe81f,	// (0x00023db6) list_single_graphic_2heading_pane_t2_ParamLimits

0xe81f,	// (0x00023db6) list_single_graphic_2heading_pane_t2

0xe839,	// (0x00023dd0) list_single_graphic_2heading_pane_t3_ParamLimits

0xe839,	// (0x00023dd0) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x00024d15) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x00024d15) list_single_graphic_2heading_pane_t

0x1079,	// (0x00016610) bg_popup_sub_pane_cp2

0x10a3,	// (0x0001663a) grid_toobar_pane

0xe851,	// (0x00023de8) cell_toolbar_pane_ParamLimits

0xe851,	// (0x00023de8) cell_toolbar_pane

0x110d,	// (0x000166a4) cell_toolbar_pane_g1_ParamLimits

0x110d,	// (0x000166a4) cell_toolbar_pane_g1

0xab26,	// (0x000200bd) cell_toolbar_pane_g2_ParamLimits

0xab26,	// (0x000200bd) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x00024d1c) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x00024d1c) cell_toolbar_pane_g

0x1143,	// (0x000166da) grid_highlight_pane_cp2_ParamLimits

0x1143,	// (0x000166da) grid_highlight_pane_cp2

0x115d,	// (0x000166f4) toolbar_button_pane

0x1169,	// (0x00016700) toolbar_button_pane_g1

0x1171,	// (0x00016708) toolbar_button_pane_g2

0x1179,	// (0x00016710) toolbar_button_pane_g3

0x1181,	// (0x00016718) toolbar_button_pane_g4

0x1189,	// (0x00016720) toolbar_button_pane_g5

0x1191,	// (0x00016728) toolbar_button_pane_g6

0x1199,	// (0x00016730) toolbar_button_pane_g7

0x11a1,	// (0x00016738) toolbar_button_pane_g8

0x11a9,	// (0x00016740) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x00024d21) toolbar_button_pane_g

0xe889,	// (0x00023e20) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe889,	// (0x00023e20) list_single_2graphic_pane_g1_cp3

0x8cab,	// (0x0001e242) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8cab,	// (0x0001e242) list_single_2graphic_pane_g2_cp3

0xe895,	// (0x00023e2c) list_single_2graphic_pane_g3_cp3

0xe89d,	// (0x00023e34) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe89d,	// (0x00023e34) list_single_2graphic_pane_g4_cp3

0x8cbc,	// (0x0001e253) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8cbc,	// (0x0001e253) list_single_2graphic_pane_t1_cp3

0xe8a9,	// (0x00023e40) list_single_midp_graphic_pane_g2_ParamLimits

0xe8a9,	// (0x00023e40) list_single_midp_graphic_pane_g2

0xe75d,	// (0x00023cf4) aid_zoom_text_primary

0xe765,	// (0x00023cfc) aid_zoom_text_secondary

0xd2dd,	// (0x00022874) status_small_pane_g7_ParamLimits

0xd2dd,	// (0x00022874) status_small_pane_g7

0xa6c0,	// (0x0001fc57) status_small_pane_t1_ParamLimits

0x9651,	// (0x0001ebe8) title_pane_g2

0x0003,

0xf529,	// (0x00024ac0) title_pane_g

0x99d3,	// (0x0001ef6a) aid_size_cell_colour_1_pane_ParamLimits

0x99d3,	// (0x0001ef6a) aid_size_cell_colour_1_pane

0x99e7,	// (0x0001ef7e) aid_size_cell_colour_2_pane_ParamLimits

0x99e7,	// (0x0001ef7e) aid_size_cell_colour_2_pane

0x99fb,	// (0x0001ef92) aid_size_cell_colour_3_pane_ParamLimits

0x99fb,	// (0x0001ef92) aid_size_cell_colour_3_pane

0x9a0f,	// (0x0001efa6) aid_size_cell_colour_4_pane_ParamLimits

0x9a0f,	// (0x0001efa6) aid_size_cell_colour_4_pane

0xe35a,	// (0x000238f1) title_pane_stacon_g1_ParamLimits

0xe35a,	// (0x000238f1) title_pane_stacon_g1

0x190a,	// (0x00016ea1) popup_note_wait_window_g3_ParamLimits

0x190a,	// (0x00016ea1) popup_note_wait_window_g3

0x1980,	// (0x00016f17) popup_note_wait_window_t5_ParamLimits

0x1980,	// (0x00016f17) popup_note_wait_window_t5

0xc3f3,	// (0x0002198a) main_feb_china_hwr_fs_writing_pane

0x85b2,	// (0x0001db49) popup_feb_china_hwr_fs_window_ParamLimits

0x85b2,	// (0x0001db49) popup_feb_china_hwr_fs_window

0x8cd8,	// (0x0001e26f) aid_size_cell_hwr_fs_ParamLimits

0x8cd8,	// (0x0001e26f) aid_size_cell_hwr_fs

0x1289,	// (0x00016820) bg_popup_sub_pane_cp3_ParamLimits

0x1289,	// (0x00016820) bg_popup_sub_pane_cp3

0x8ced,	// (0x0001e284) grid_hwr_fs_pane_ParamLimits

0x8ced,	// (0x0001e284) grid_hwr_fs_pane

0xe8cb,	// (0x00023e62) linegrid_hwr_fs_pane_ParamLimits

0xe8cb,	// (0x00023e62) linegrid_hwr_fs_pane

0x8d05,	// (0x0001e29c) cell_hwr_fs_pane_ParamLimits

0x8d05,	// (0x0001e29c) cell_hwr_fs_pane

0x1295,	// (0x0001682c) linegrid_hwr_fs_pane_g1_ParamLimits

0x1295,	// (0x0001682c) linegrid_hwr_fs_pane_g1

0xab3a,	// (0x000200d1) linegrid_hwr_fs_pane_g2_ParamLimits

0xab3a,	// (0x000200d1) linegrid_hwr_fs_pane_g2

0x12b3,	// (0x0001684a) linegrid_hwr_fs_pane_g3_ParamLimits

0x12b3,	// (0x0001684a) linegrid_hwr_fs_pane_g3

0x8d2b,	// (0x0001e2c2) linegrid_hwr_fs_pane_g4_ParamLimits

0x8d2b,	// (0x0001e2c2) linegrid_hwr_fs_pane_g4

0xe8db,	// (0x00023e72) linegrid_hwr_fs_pane_g5_ParamLimits

0xe8db,	// (0x00023e72) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x00024d47) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x00024d47) linegrid_hwr_fs_pane_g

0x12bf,	// (0x00016856) cell_hwr_fs_pane_g1_ParamLimits

0x12bf,	// (0x00016856) cell_hwr_fs_pane_g1

0x0fb3,	// (0x0001654a) cell_hwr_fs_pane_g2_ParamLimits

0x0fb3,	// (0x0001654a) cell_hwr_fs_pane_g2

0xab4c,	// (0x000200e3) cell_hwr_fs_pane_g3_ParamLimits

0xab4c,	// (0x000200e3) cell_hwr_fs_pane_g3

0xab59,	// (0x000200f0) cell_hwr_fs_pane_g4_ParamLimits

0xab59,	// (0x000200f0) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x00024d52) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x00024d52) cell_hwr_fs_pane_g

0x8d45,	// (0x0001e2dc) cell_hwr_fs_pane_t1

0xc3f3,	// (0x0002198a) grid_highlight_pane_cp6

0xc3f3,	// (0x0002198a) main_idle_act2_pane

0xca10,	// (0x00021fa7) aid_inside_area_popup_secondary

0xafa5,	// (0x0002053c) aid_inside_area_window_primary_ParamLimits

0xafa5,	// (0x0002053c) aid_inside_area_window_primary

0xb51b,	// (0x00020ab2) ai2_news_ticker_pane

0x2c2c,	// (0x000181c3) aid_size_cell_ai1_link_ParamLimits

0x2c2c,	// (0x000181c3) aid_size_cell_ai1_link

0xb523,	// (0x00020aba) popup_ai2_data_window_ParamLimits

0xb523,	// (0x00020aba) popup_ai2_data_window

0x2c5c,	// (0x000181f3) popup_ai2_link_window_ParamLimits

0x2c5c,	// (0x000181f3) popup_ai2_link_window

0x1289,	// (0x00016820) bg_popup_sub_pane_cp4_ParamLimits

0x1289,	// (0x00016820) bg_popup_sub_pane_cp4

0x2c70,	// (0x00018207) grid_ai2_link_pane_ParamLimits

0x2c70,	// (0x00018207) grid_ai2_link_pane

0x2c87,	// (0x0001821e) popup_ai2_link_window_g1_ParamLimits

0x2c87,	// (0x0001821e) popup_ai2_link_window_g1

0x2c93,	// (0x0001822a) popup_ai2_link_window_g2_ParamLimits

0x2c93,	// (0x0001822a) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x00024f25) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x00024f25) popup_ai2_link_window_g

0x2ca2,	// (0x00018239) ai2_mp_button_pane

0x2caa,	// (0x00018241) ai2_mp_volume_pane

0x14ab,	// (0x00016a42) bg_popup_sub_pane_cp5_ParamLimits

0x14ab,	// (0x00016a42) bg_popup_sub_pane_cp5

0x2cb2,	// (0x00018249) heading_ai2_gene_pane_ParamLimits

0x2cb2,	// (0x00018249) heading_ai2_gene_pane

0x2cbe,	// (0x00018255) list_ai2_gene_pane_ParamLimits

0x2cbe,	// (0x00018255) list_ai2_gene_pane

0x2d06,	// (0x0001829d) cell_ai2_link_pane_ParamLimits

0x2d06,	// (0x0001829d) cell_ai2_link_pane

0x2d1c,	// (0x000182b3) cell_ai2_link_pane_g1

0xc3f3,	// (0x0002198a) grid_highlight_pane_cp7

0xeac4,	// (0x0002405b) ai2_mp_volume_pane_g1

0x2dec,	// (0x00018383) ai2_mp_volume_pane_g2

0x2d61,	// (0x000182f8) list_ai2_gene_pane_t1

0x2df4,	// (0x0001838b) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x00024f3e) ai2_mp_volume_pane_g

0x8e6a,	// (0x0001e401) volume_small_pane_cp3

0x2dfc,	// (0x00018393) aid_size_cell_ai2_button

0x2e04,	// (0x0001839b) grid_ai2_button_pane

0x2e0d,	// (0x000183a4) cell_ai2_button_pane_ParamLimits

0x2e0d,	// (0x000183a4) cell_ai2_button_pane

0xc3e9,	// (0x00021980) cell_ai2_button_pane_g1

0xc3f3,	// (0x0002198a) grid_highlight_pane_cp8

0x2dac,	// (0x00018343) ai2_gene_pane_t1_ParamLimits

0x2dac,	// (0x00018343) ai2_gene_pane_t1

0x851c,	// (0x0001dab3) aid_height_parent_landscape

0xb20d,	// (0x000207a4) aid_height_set_list

0x262b,	// (0x00017bc2) aid_size_parent

0x2a47,	// (0x00017fde) aid_size_cell_graphic_pane_ParamLimits

0x2cce,	// (0x00018265) popup_ai2_data_window_g1_ParamLimits

0x2cce,	// (0x00018265) popup_ai2_data_window_g1

0x2cda,	// (0x00018271) ai2_news_ticker_pane_g1

0x2ce2,	// (0x00018279) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x00024f2a) ai2_news_ticker_pane_g

0x2cea,	// (0x00018281) ai2_news_ticker_pane_t1

0x2cf8,	// (0x0001828f) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x00024f2f) ai2_news_ticker_pane_t

0x2d25,	// (0x000182bc) heading_ai2_gene_pane_g1

0x2d2d,	// (0x000182c4) heading_ai2_gene_pane_t1_ParamLimits

0x2d2d,	// (0x000182c4) heading_ai2_gene_pane_t1

0x2d42,	// (0x000182d9) list_highlight_pane_cp6

0x2d4a,	// (0x000182e1) ai2_gene_pane_ParamLimits

0x2d4a,	// (0x000182e1) ai2_gene_pane

0x2d6f,	// (0x00018306) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x00024f34) list_ai2_gene_pane_t

0x2d7d,	// (0x00018314) list_highlight_pane_cp8_ParamLimits

0x2d7d,	// (0x00018314) list_highlight_pane_cp8

0x2d8e,	// (0x00018325) ai2_gene_pane_g1_ParamLimits

0x2d8e,	// (0x00018325) ai2_gene_pane_g1

0x2da0,	// (0x00018337) ai2_gene_pane_g2_ParamLimits

0x2da0,	// (0x00018337) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x00024f39) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x00024f39) ai2_gene_pane_g

0xc7be,	// (0x00021d55) scroll_pane_cp12

0x84d9,	// (0x0001da70) control_pane_t3_ParamLimits

0x84d9,	// (0x0001da70) control_pane_t3

0xa6b1,	// (0x0001fc48) status_small_pane_g8_ParamLimits

0xa6b1,	// (0x0001fc48) status_small_pane_g8

0x8675,	// (0x0001dc0c) popup_find_window_ParamLimits

0x8902,	// (0x0001de99) popup_note_image_window_ParamLimits

0x10df,	// (0x00016676) list_double2_graphic_pane_vc_g1_ParamLimits

0x10df,	// (0x00016676) list_double2_graphic_pane_vc_g1

0xc7cf,	// (0x00021d66) list_double2_graphic_pane_vc_g2_ParamLimits

0xc7cf,	// (0x00021d66) list_double2_graphic_pane_vc_g2

0x10eb,	// (0x00016682) list_double2_graphic_pane_vc_g3_ParamLimits

0x10eb,	// (0x00016682) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x00024b33) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x00024b33) list_double2_graphic_pane_vc_g

0x10f7,	// (0x0001668e) list_double2_graphic_pane_vc_t1_ParamLimits

0x10f7,	// (0x0001668e) list_double2_graphic_pane_vc_t1

0xc7cf,	// (0x00021d66) list_single_heading_pane_vc_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_single_heading_pane_vc_g1

0x10eb,	// (0x00016682) list_single_heading_pane_vc_g2_ParamLimits

0x10eb,	// (0x00016682) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_single_heading_pane_vc_g

0x11b1,	// (0x00016748) list_single_heading_pane_vc_t1_ParamLimits

0x11b1,	// (0x00016748) list_single_heading_pane_vc_t1

0x11c7,	// (0x0001675e) list_single_heading_pane_vc_t2_ParamLimits

0x11c7,	// (0x0001675e) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x00024d36) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x00024d36) list_single_heading_pane_vc_t

0x11d9,	// (0x00016770) list_setting_number_pane_vc_g1_ParamLimits

0x11d9,	// (0x00016770) list_setting_number_pane_vc_g1

0x11e5,	// (0x0001677c) list_setting_number_pane_vc_g2_ParamLimits

0x11e5,	// (0x0001677c) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024d3b) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024d3b) list_setting_number_pane_vc_g

0x11f1,	// (0x00016788) list_setting_number_pane_vc_t1_ParamLimits

0x11f1,	// (0x00016788) list_setting_number_pane_vc_t1

0x1205,	// (0x0001679c) list_setting_number_pane_vc_t2_ParamLimits

0x1205,	// (0x0001679c) list_setting_number_pane_vc_t2

0x1221,	// (0x000167b8) list_setting_number_pane_vc_t3_ParamLimits

0x1221,	// (0x000167b8) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x00024d40) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x00024d40) list_setting_number_pane_vc_t

0x124d,	// (0x000167e4) set_value_pane_vc_ParamLimits

0x124d,	// (0x000167e4) set_value_pane_vc

0x282e,	// (0x00017dc5) list_double2_graphic_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double2_graphic_pane_vc

0x2841,	// (0x00017dd8) list_double2_large_graphic_pane_vc_ParamLimits

0x2841,	// (0x00017dd8) list_double2_large_graphic_pane_vc

0x282e,	// (0x00017dc5) list_double2_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double2_pane_vc

0x282e,	// (0x00017dc5) list_double_graphic_heading_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double_graphic_heading_pane_vc

0x282e,	// (0x00017dc5) list_double_graphic_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double_graphic_pane_vc

0x282e,	// (0x00017dc5) list_double_heading_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double_heading_pane_vc

0x2853,	// (0x00017dea) list_double_large_graphic_pane_vc_ParamLimits

0x2853,	// (0x00017dea) list_double_large_graphic_pane_vc

0x282e,	// (0x00017dc5) list_double_number_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double_number_pane_vc

0x282e,	// (0x00017dc5) list_double_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double_pane_vc

0x282e,	// (0x00017dc5) list_double_time_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_double_time_pane_vc

0x282e,	// (0x00017dc5) list_setting_number_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_setting_number_pane_vc

0x282e,	// (0x00017dc5) list_setting_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_setting_pane_vc

0x282e,	// (0x00017dc5) list_single_graphic_heading_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_single_graphic_heading_pane_vc

0x282e,	// (0x00017dc5) list_single_heading_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_single_heading_pane_vc

0x282e,	// (0x00017dc5) list_single_number_heading_pane_vc_ParamLimits

0x282e,	// (0x00017dc5) list_single_number_heading_pane_vc

0x2e41,	// (0x000183d8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2e41,	// (0x000183d8) list_double_graphic_heading_pane_vc_g1

0xc7cf,	// (0x00021d66) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc7cf,	// (0x00021d66) list_double_graphic_heading_pane_vc_g2

0x10eb,	// (0x00016682) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x10eb,	// (0x00016682) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x00024f45) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x00024f45) list_double_graphic_heading_pane_vc_g

0x2e4d,	// (0x000183e4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2e4d,	// (0x000183e4) list_double_graphic_heading_pane_vc_t1

0x2e61,	// (0x000183f8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2e61,	// (0x000183f8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x00024f4c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x00024f4c) list_double_graphic_heading_pane_vc_t

0x11d9,	// (0x00016770) list_setting_pane_vc_g1_ParamLimits

0x11d9,	// (0x00016770) list_setting_pane_vc_g1

0x11e5,	// (0x0001677c) list_setting_pane_vc_g2_ParamLimits

0x11e5,	// (0x0001677c) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x00024d3b) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x00024d3b) list_setting_pane_vc_g

0x307e,	// (0x00018615) list_setting_pane_vc_t1_ParamLimits

0x307e,	// (0x00018615) list_setting_pane_vc_t1

0x309a,	// (0x00018631) list_setting_pane_vc_t2_ParamLimits

0x309a,	// (0x00018631) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x00024f8f) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x00024f8f) list_setting_pane_vc_t

0x124d,	// (0x000167e4) set_value_pane_cp_vc_ParamLimits

0x124d,	// (0x000167e4) set_value_pane_cp_vc

0xc7cf,	// (0x00021d66) list_single_number_heading_pane_vc_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_single_number_heading_pane_vc_g1

0x10eb,	// (0x00016682) list_single_number_heading_pane_vc_g2_ParamLimits

0x10eb,	// (0x00016682) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_single_number_heading_pane_vc_g

0x30b4,	// (0x0001864b) list_single_number_heading_pane_vc_t1_ParamLimits

0x30b4,	// (0x0001864b) list_single_number_heading_pane_vc_t1

0x30ca,	// (0x00018661) list_single_number_heading_pane_vc_t2_ParamLimits

0x30ca,	// (0x00018661) list_single_number_heading_pane_vc_t2

0x30e0,	// (0x00018677) list_single_number_heading_pane_vc_t3_ParamLimits

0x30e0,	// (0x00018677) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x00024f94) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x00024f94) list_single_number_heading_pane_vc_t

0x30f2,	// (0x00018689) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x30f2,	// (0x00018689) list_single_graphic_heading_pane_vc_g1

0xc7cf,	// (0x00021d66) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc7cf,	// (0x00021d66) list_single_graphic_heading_pane_vc_g4

0x10eb,	// (0x00016682) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x10eb,	// (0x00016682) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x00024f9b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00024f9b) list_single_graphic_heading_pane_vc_g

0x30b4,	// (0x0001864b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x30b4,	// (0x0001864b) list_single_graphic_heading_pane_vc_t1

0x30fe,	// (0x00018695) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x30fe,	// (0x00018695) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00024fa2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00024fa2) list_single_graphic_heading_pane_vc_t

0xc7cf,	// (0x00021d66) list_double2_pane_vc_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_double2_pane_vc_g1

0x10eb,	// (0x00016682) list_double2_pane_vc_g2_ParamLimits

0x10eb,	// (0x00016682) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_double2_pane_vc_g

0x3110,	// (0x000186a7) list_double2_pane_vc_t1_ParamLimits

0x3110,	// (0x000186a7) list_double2_pane_vc_t1

0x3128,	// (0x000186bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3128,	// (0x000186bf) list_double2_large_graphic_pane_vc_g1

0x3134,	// (0x000186cb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3134,	// (0x000186cb) list_double2_large_graphic_pane_vc_g2

0x3140,	// (0x000186d7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3140,	// (0x000186d7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00024b57) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00024b57) list_double2_large_graphic_pane_vc_g

0x314c,	// (0x000186e3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x314c,	// (0x000186e3) list_double2_large_graphic_pane_vc_t1

0x3162,	// (0x000186f9) list_double_time_pane_vc_g1_ParamLimits

0x3162,	// (0x000186f9) list_double_time_pane_vc_g1

0x316e,	// (0x00018705) list_double_time_pane_vc_g2_ParamLimits

0x316e,	// (0x00018705) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x00024fa7) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x00024fa7) list_double_time_pane_vc_g

0x317a,	// (0x00018711) list_double_time_pane_vc_t1_ParamLimits

0x317a,	// (0x00018711) list_double_time_pane_vc_t1

0x319e,	// (0x00018735) list_double_time_pane_vc_t2_ParamLimits

0x319e,	// (0x00018735) list_double_time_pane_vc_t2

0x31cd,	// (0x00018764) list_double_time_pane_vc_t3_ParamLimits

0x31cd,	// (0x00018764) list_double_time_pane_vc_t3

0x31df,	// (0x00018776) list_double_time_pane_vc_t4_ParamLimits

0x31df,	// (0x00018776) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x00024fac) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x00024fac) list_double_time_pane_vc_t

0xc7cf,	// (0x00021d66) list_double_pane_vc_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_double_pane_vc_g1

0x10eb,	// (0x00016682) list_double_pane_vc_g2_ParamLimits

0x10eb,	// (0x00016682) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_double_pane_vc_g

0x31f3,	// (0x0001878a) list_double_pane_vc_t1_ParamLimits

0x31f3,	// (0x0001878a) list_double_pane_vc_t1

0x3207,	// (0x0001879e) list_double_pane_vc_t2_ParamLimits

0x3207,	// (0x0001879e) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x00024fb5) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x00024fb5) list_double_pane_vc_t

0xc7cf,	// (0x00021d66) list_double_number_pane_vc_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_double_number_pane_vc_g1

0x10eb,	// (0x00016682) list_double_number_pane_vc_g2_ParamLimits

0x10eb,	// (0x00016682) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_double_number_pane_vc_g

0x321f,	// (0x000187b6) list_double_number_pane_vc_t1_ParamLimits

0x321f,	// (0x000187b6) list_double_number_pane_vc_t1

0x31f3,	// (0x0001878a) list_double_number_pane_vc_t2_ParamLimits

0x31f3,	// (0x0001878a) list_double_number_pane_vc_t2

0x3231,	// (0x000187c8) list_double_number_pane_vc_t3_ParamLimits

0x3231,	// (0x000187c8) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x00024fba) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x00024fba) list_double_number_pane_vc_t

0x3249,	// (0x000187e0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3249,	// (0x000187e0) list_double_large_graphic_pane_vc_g1

0x3265,	// (0x000187fc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3265,	// (0x000187fc) list_double_large_graphic_pane_vc_g2

0x3279,	// (0x00018810) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3279,	// (0x00018810) list_double_large_graphic_pane_vc_g3

0x3288,	// (0x0001881f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3288,	// (0x0001881f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x00024fc1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x00024fc1) list_double_large_graphic_pane_vc_g

0x3297,	// (0x0001882e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3297,	// (0x0001882e) list_double_large_graphic_pane_vc_t1

0x32b3,	// (0x0001884a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x32b3,	// (0x0001884a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x00024fca) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x00024fca) list_double_large_graphic_pane_vc_t

0xc7cf,	// (0x00021d66) list_double_heading_pane_vc_g1_ParamLimits

0xc7cf,	// (0x00021d66) list_double_heading_pane_vc_g1

0x10eb,	// (0x00016682) list_double_heading_pane_vc_g2_ParamLimits

0x10eb,	// (0x00016682) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00024b3a) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00024b3a) list_double_heading_pane_vc_g

0x32d5,	// (0x0001886c) list_double_heading_pane_vc_t1_ParamLimits

0x32d5,	// (0x0001886c) list_double_heading_pane_vc_t1

0x32e9,	// (0x00018880) list_double_heading_pane_vc_t2_ParamLimits

0x32e9,	// (0x00018880) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00024fcf) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00024fcf) list_double_heading_pane_vc_t

0x3301,	// (0x00018898) list_double_graphic_pane_vc_g1_ParamLimits

0x3301,	// (0x00018898) list_double_graphic_pane_vc_g1

0x3314,	// (0x000188ab) list_double_graphic_pane_vc_g2_ParamLimits

0x3314,	// (0x000188ab) list_double_graphic_pane_vc_g2

0xc7cf,	// (0x00021d66) list_double_graphic_pane_vc_g3_ParamLimits

0xc7cf,	// (0x00021d66) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x00024fd4) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00024fd4) list_double_graphic_pane_vc_g

0x3331,	// (0x000188c8) list_double_graphic_pane_vc_t1_ParamLimits

0x3331,	// (0x000188c8) list_double_graphic_pane_vc_t1

0x3350,	// (0x000188e7) list_double_graphic_pane_vc_t2_ParamLimits

0x3350,	// (0x000188e7) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x00024fdd) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x00024fdd) list_double_graphic_pane_vc_t

0xe2ed,	// (0x00023884) aid_size_cell_fastswap

0x7f41,	// (0x0001d4d8) aid_size_cell_touch_ParamLimits

0x7f41,	// (0x0001d4d8) aid_size_cell_touch

0xe2ff,	// (0x00023896) popup_fast_swap_wide_window_ParamLimits

0xe2ff,	// (0x00023896) popup_fast_swap_wide_window

0x8260,	// (0x0001d7f7) touch_pane_ParamLimits

0x8260,	// (0x0001d7f7) touch_pane

0xc852,	// (0x00021de9) button_value_adjust_pane_cp2

0xc85a,	// (0x00021df1) button_value_adjust_pane_cp4

0xc862,	// (0x00021df9) form_field_data_pane_cp2

0x9f99,	// (0x0001f530) form_field_data_wide_pane_cp2

0xcbfd,	// (0x00022194) bg_scroll_pane_ParamLimits

0x8350,	// (0x0001d8e7) scroll_handle_pane_ParamLimits

0xe4b3,	// (0x00023a4a) scroll_sc2_down_pane_ParamLimits

0xe4b3,	// (0x00023a4a) scroll_sc2_down_pane

0xcc2e,	// (0x000221c5) scroll_sc2_up_pane_ParamLimits

0xcc2e,	// (0x000221c5) scroll_sc2_up_pane

0xb66c,	// (0x00020c03) grid_wheel_folder_pane_g1_ParamLimits

0xb66c,	// (0x00020c03) grid_wheel_folder_pane_g1

0xe635,	// (0x00023bcc) clock_nsta_pane_cp2_ParamLimits

0xe635,	// (0x00023bcc) clock_nsta_pane_cp2

0xa595,	// (0x0001fb2c) listscroll_midp_pane_ParamLimits

0xa5a1,	// (0x0001fb38) midp_canvas_pane

0xd2ff,	// (0x00022896) nsta_clock_indic_pane

0xd327,	// (0x000228be) listscroll_form_pane_vc

0xd32f,	// (0x000228c6) listscroll_set_pane_vc_ParamLimits

0xd32f,	// (0x000228c6) listscroll_set_pane_vc

0xa831,	// (0x0001fdc8) clock_nsta_pane

0xa85b,	// (0x0001fdf2) indicator_nsta_pane

0x1079,	// (0x00016610) bg_popup_sub_pane_cp2_ParamLimits

0x108d,	// (0x00016624) find_pane_cp2_ParamLimits

0x108d,	// (0x00016624) find_pane_cp2

0x10a3,	// (0x0001663a) grid_toobar_pane_ParamLimits

0x125d,	// (0x000167f4) list_form_gen_pane_vc_ParamLimits

0x125d,	// (0x000167f4) list_form_gen_pane_vc

0x1273,	// (0x0001680a) scroll_pane_cp8_vc_ParamLimits

0x1273,	// (0x0001680a) scroll_pane_cp8_vc

0x12ef,	// (0x00016886) data_form_wide_pane_vc_ParamLimits

0x12ef,	// (0x00016886) data_form_wide_pane_vc

0x12fb,	// (0x00016892) form_field_data_wide_pane_vc_g1

0x1303,	// (0x0001689a) form_field_data_wide_pane_vc_t1_ParamLimits

0x1303,	// (0x0001689a) form_field_data_wide_pane_vc_t1

0xc889,	// (0x00021e20) input_focus_pane_cp6_vc_ParamLimits

0xc889,	// (0x00021e20) input_focus_pane_cp6_vc

0x1691,	// (0x00016c28) list_midp_pane_ParamLimits

0x2ab1,	// (0x00018048) scroll_pane_cp16_ParamLimits

0x2ab1,	// (0x00018048) scroll_pane_cp16

0x16e7,	// (0x00016c7e) button_value_adjust_pane_ParamLimits

0x16e7,	// (0x00016c7e) button_value_adjust_pane

0xb21e,	// (0x000207b5) button_value_adjust_pane_cp6_ParamLimits

0xb21e,	// (0x000207b5) button_value_adjust_pane_cp6

0xb338,	// (0x000208cf) settings_code_pane_cp_ParamLimits

0xb338,	// (0x000208cf) settings_code_pane_cp

0xc3e9,	// (0x00021980) cell_touch_pane_g1

0xc3e9,	// (0x00021980) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x00024c61) cell_touch_pane_g

0xb539,	// (0x00020ad0) cell_touch_pane_cp_ParamLimits

0xb539,	// (0x00020ad0) cell_touch_pane_cp

0xb555,	// (0x00020aec) cell_touch_pane_ParamLimits

0xb555,	// (0x00020aec) cell_touch_pane

0xc3e9,	// (0x00021980) scroll_sc2_down_pane_g1

0xc3e9,	// (0x00021980) scroll_sc2_up_pane_g1

0xc3f3,	// (0x0002198a) bg_set_opt_pane_cp4_vc

0x2e79,	// (0x00018410) list_set_graphic_pane_vc_g1_ParamLimits

0x2e79,	// (0x00018410) list_set_graphic_pane_vc_g1

0x2e85,	// (0x0001841c) list_set_graphic_pane_vc_g2_ParamLimits

0x2e85,	// (0x0001841c) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x00024f51) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x00024f51) list_set_graphic_pane_vc_g

0x2e91,	// (0x00018428) text_primary_small_cp13_vc_ParamLimits

0x2e91,	// (0x00018428) text_primary_small_cp13_vc

0x2ea9,	// (0x00018440) list_set_graphic_pane_vc_ParamLimits

0x2ea9,	// (0x00018440) list_set_graphic_pane_vc

0xc3f3,	// (0x0002198a) input_focus_pane_cp2_vc

0xc3e9,	// (0x00021980) setting_code_pane_vc_g1

0xc466,	// (0x000219fd) setting_code_pane_vc_t1

0x2ebc,	// (0x00018453) set_text_pane_vc_t1_ParamLimits

0x2ebc,	// (0x00018453) set_text_pane_vc_t1

0xc3f3,	// (0x0002198a) input_focus_pane_cp1_vc

0x2ed9,	// (0x00018470) list_set_text_pane_vc

0xc3e9,	// (0x00021980) setting_text_pane_vc_g1

0xc3f3,	// (0x0002198a) bg_set_opt_pane_cp2_vc

0xc45d,	// (0x000219f4) setting_slider_graphic_pane_vc_g1

0x2ee3,	// (0x0001847a) setting_slider_graphic_pane_vc_t1

0x2ef3,	// (0x0001848a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x00024f56) setting_slider_graphic_pane_vc_t

0x2f03,	// (0x0001849a) slider_set_pane_cp_vc

0x2f0b,	// (0x000184a2) slider_set_pane_vc_g1

0x2f14,	// (0x000184ab) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x00024f5b) slider_set_pane_vc_g

0xc94f,	// (0x00021ee6) set_opt_bg_pane_g1_copy1

0xc957,	// (0x00021eee) set_opt_bg_pane_g2_copy1

0x2f40,	// (0x000184d7) set_opt_bg_pane_g3_copy1

0xc967,	// (0x00021efe) set_opt_bg_pane_g4_copy1

0xc96f,	// (0x00021f06) set_opt_bg_pane_g5_copy1

0xc977,	// (0x00021f0e) set_opt_bg_pane_g6_copy1

0x2f48,	// (0x000184df) set_opt_bg_pane_g7_copy1

0x2f52,	// (0x000184e9) set_opt_bg_pane_g8_copy1

0x2f5a,	// (0x000184f1) set_opt_bg_pane_g9_copy1

0xc3f3,	// (0x0002198a) bg_set_opt_pane_cp_vc

0x2f62,	// (0x000184f9) setting_slider_pane_vc_t1

0x2f71,	// (0x00018508) setting_slider_pane_vc_t2

0x2f81,	// (0x00018518) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x00024f6a) setting_slider_pane_vc_t

0x2f91,	// (0x00018528) slider_set_pane_vc

0xe8f1,	// (0x00023e88) volume_set_pane_vc_g1

0xeacc,	// (0x00024063) volume_set_pane_vc_g2

0xead5,	// (0x0002406c) volume_set_pane_vc_g3

0xeade,	// (0x00024075) volume_set_pane_vc_g4

0xeae7,	// (0x0002407e) volume_set_pane_vc_g5

0xeaf0,	// (0x00024087) volume_set_pane_vc_g6

0xeaf9,	// (0x00024090) volume_set_pane_vc_g7

0xeb02,	// (0x00024099) volume_set_pane_vc_g8

0xeb0b,	// (0x000240a2) volume_set_pane_vc_g9

0xeb14,	// (0x000240ab) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x00024f71) volume_set_pane_vc_g

0x2f99,	// (0x00018530) volume_set_pane_vc

0x2fa3,	// (0x0001853a) button_value_adjust_pane_cp1_vc

0x2fad,	// (0x00018544) list_highlight_pane_cp2_vc

0x2fb6,	// (0x0001854d) list_set_pane_vc_ParamLimits

0x2fb6,	// (0x0001854d) list_set_pane_vc

0x3014,	// (0x000185ab) main_pane_set_vc_t1_ParamLimits

0x3014,	// (0x000185ab) main_pane_set_vc_t1

0x3029,	// (0x000185c0) main_pane_set_vc_t2_ParamLimits

0x3029,	// (0x000185c0) main_pane_set_vc_t2

0x303b,	// (0x000185d2) main_pane_set_vc_t3_ParamLimits

0x303b,	// (0x000185d2) main_pane_set_vc_t3

0x304d,	// (0x000185e4) main_pane_set_vc_t4_ParamLimits

0x304d,	// (0x000185e4) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x00024f86) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x00024f86) main_pane_set_vc_t

0x305f,	// (0x000185f6) setting_code_pane_vc_ParamLimits

0x305f,	// (0x000185f6) setting_code_pane_vc

0x306e,	// (0x00018605) setting_slider_graphic_pane_vc

0x306e,	// (0x00018605) setting_slider_pane_vc

0x306e,	// (0x00018605) setting_text_pane_vc

0x306e,	// (0x00018605) setting_volume_pane_vc

0x3076,	// (0x0001860d) scroll_pane_cp121_vc

0xc840,	// (0x00021dd7) set_content_pane_vc

0x337a,	// (0x00018911) button_value_adjust_pane_g1

0x3383,	// (0x0001891a) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x00024fe2) button_value_adjust_pane_g

0x338c,	// (0x00018923) form_field_slider_wide_pane_vc_t1_ParamLimits

0x338c,	// (0x00018923) form_field_slider_wide_pane_vc_t1

0x33a0,	// (0x00018937) form_field_slider_wide_pane_vc_t2_ParamLimits

0x33a0,	// (0x00018937) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x00024fe7) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x00024fe7) form_field_slider_wide_pane_vc_t

0xc441,	// (0x000219d8) input_focus_pane_cp10_vc_ParamLimits

0xc441,	// (0x000219d8) input_focus_pane_cp10_vc

0x33ce,	// (0x00018965) slider_cont_pane_cp1_vc_ParamLimits

0x33ce,	// (0x00018965) slider_cont_pane_cp1_vc

0x33e0,	// (0x00018977) slider_form_pane_g1_cp2

0x2f14,	// (0x000184ab) slider_form_pane_g2_cp2

0x340d,	// (0x000189a4) form_field_slider_pane_vc_t3

0x341b,	// (0x000189b2) form_field_slider_pane_vc_t4

0x3429,	// (0x000189c0) slider_form_pane_vc_ParamLimits

0x3429,	// (0x000189c0) slider_form_pane_vc

0x3436,	// (0x000189cd) form_field_slider_pane_vc_t1_ParamLimits

0x3436,	// (0x000189cd) form_field_slider_pane_vc_t1

0x33a0,	// (0x00018937) form_field_slider_pane_vc_t2_ParamLimits

0x33a0,	// (0x00018937) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x00024ff9) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x00024ff9) form_field_slider_pane_vc_t

0xc441,	// (0x000219d8) input_focus_pane_cp9_vc_ParamLimits

0xc441,	// (0x000219d8) input_focus_pane_cp9_vc

0x3452,	// (0x000189e9) slider_cont_pane_vc_ParamLimits

0x3452,	// (0x000189e9) slider_cont_pane_vc

0x3466,	// (0x000189fd) list_form_graphic_pane_cp_vc_ParamLimits

0x3466,	// (0x000189fd) list_form_graphic_pane_cp_vc

0x12fb,	// (0x00016892) form_field_popup_wide_pane_vc_g1

0x347b,	// (0x00018a12) form_field_popup_wide_pane_vc_t1_ParamLimits

0x347b,	// (0x00018a12) form_field_popup_wide_pane_vc_t1

0xc889,	// (0x00021e20) input_focus_pane_cp8_vc_ParamLimits

0xc889,	// (0x00021e20) input_focus_pane_cp8_vc

0x34c0,	// (0x00018a57) list_form_wide_pane_vc_ParamLimits

0x34c0,	// (0x00018a57) list_form_wide_pane_vc

0x34cc,	// (0x00018a63) list_form_graphic_pane_vc_g1

0x34d4,	// (0x00018a6b) list_form_graphic_pane_vc_t1_ParamLimits

0x34d4,	// (0x00018a6b) list_form_graphic_pane_vc_t1

0xc44f,	// (0x000219e6) list_highlight_pane_cp5_vc_ParamLimits

0xc44f,	// (0x000219e6) list_highlight_pane_cp5_vc

0x34f0,	// (0x00018a87) list_form_graphic_pane_vc_ParamLimits

0x34f0,	// (0x00018a87) list_form_graphic_pane_vc

0x12fb,	// (0x00016892) form_field_popup_pane_vc_g1

0x3506,	// (0x00018a9d) form_field_popup_pane_vc_t1_ParamLimits

0x3506,	// (0x00018a9d) form_field_popup_pane_vc_t1

0xc889,	// (0x00021e20) input_focus_pane_cp7_vc_ParamLimits

0xc889,	// (0x00021e20) input_focus_pane_cp7_vc

0x351d,	// (0x00018ab4) list_form_pane_vc_ParamLimits

0x351d,	// (0x00018ab4) list_form_pane_vc

0x3529,	// (0x00018ac0) data_form_pane_vc_t1_ParamLimits

0x3529,	// (0x00018ac0) data_form_pane_vc_t1

0xc94f,	// (0x00021ee6) input_focus_pane_vc_g1

0xc957,	// (0x00021eee) input_focus_pane_vc_g2

0xc95f,	// (0x00021ef6) input_focus_pane_vc_g3

0xc967,	// (0x00021efe) input_focus_pane_vc_g4

0xc96f,	// (0x00021f06) input_focus_pane_vc_g5

0xc977,	// (0x00021f0e) input_focus_pane_vc_g6

0xc97f,	// (0x00021f16) input_focus_pane_vc_g7

0xc987,	// (0x00021f1e) input_focus_pane_vc_g8

0xc98f,	// (0x00021f26) input_focus_pane_vc_g9

0xc3e9,	// (0x00021980) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x00024bea) input_focus_pane_vc_g

0x12ef,	// (0x00016886) data_form_pane_vc_ParamLimits

0x12ef,	// (0x00016886) data_form_pane_vc

0x12fb,	// (0x00016892) form_field_data_pane_vc_g1

0x3544,	// (0x00018adb) form_field_data_pane_vc_t1_ParamLimits

0x3544,	// (0x00018adb) form_field_data_pane_vc_t1

0xc889,	// (0x00021e20) input_focus_pane_vc_ParamLimits

0xc889,	// (0x00021e20) input_focus_pane_vc

0x355e,	// (0x00018af5) button_value_adjust_pane_cp3_vc

0x3566,	// (0x00018afd) button_value_adjust_pane_cp5_vc

0x356e,	// (0x00018b05) form_field_data_pane_vc_ParamLimits

0x356e,	// (0x00018b05) form_field_data_pane_vc

0x3585,	// (0x00018b1c) form_field_data_pane_vc_cp2

0x358d,	// (0x00018b24) form_field_data_wide_pane_vc_ParamLimits

0x358d,	// (0x00018b24) form_field_data_wide_pane_vc

0x35a3,	// (0x00018b3a) form_field_data_wide_pane_vc_cp2

0x35ab,	// (0x00018b42) form_field_popup_pane_vc_ParamLimits

0x35ab,	// (0x00018b42) form_field_popup_pane_vc

0x35c2,	// (0x00018b59) form_field_popup_wide_pane_vc_ParamLimits

0x35c2,	// (0x00018b59) form_field_popup_wide_pane_vc

0x35d8,	// (0x00018b6f) form_field_slider_pane_vc_ParamLimits

0x35d8,	// (0x00018b6f) form_field_slider_pane_vc

0x35eb,	// (0x00018b82) form_field_slider_wide_pane_vc_ParamLimits

0x35eb,	// (0x00018b82) form_field_slider_wide_pane_vc

0xb572,	// (0x00020b09) grid_touch_1_pane_ParamLimits

0xb572,	// (0x00020b09) grid_touch_1_pane

0xb586,	// (0x00020b1d) grid_touch_2_pane_ParamLimits

0xb586,	// (0x00020b1d) grid_touch_2_pane

0x36cf,	// (0x00018c66) touch_pane_g1_ParamLimits

0x36cf,	// (0x00018c66) touch_pane_g1

0x3622,	// (0x00018bb9) cell_app_pane_cp_wide_ParamLimits

0x3622,	// (0x00018bb9) cell_app_pane_cp_wide

0x3633,	// (0x00018bca) grid_popup_fast_wide_pane_ParamLimits

0x3633,	// (0x00018bca) grid_popup_fast_wide_pane

0x3647,	// (0x00018bde) scroll_pane_cp19_ParamLimits

0x3647,	// (0x00018bde) scroll_pane_cp19

0xc3f3,	// (0x0002198a) bg_popup_window_pane_cp20

0x365b,	// (0x00018bf2) listscroll_popup_fast_wide_pane

0xb5b0,	// (0x00020b47) grid_indicator_nsta_pane

0x3675,	// (0x00018c0c) clock_nsta_pane_g1

0x367e,	// (0x00018c15) clock_nsta_pane_t1

0xb5bc,	// (0x00020b53) cell_indicator_nsta_pane_ParamLimits

0xb5bc,	// (0x00020b53) cell_indicator_nsta_pane

0x36cf,	// (0x00018c66) cell_indicator_nsta_pane_g1

0xb5d7,	// (0x00020b6e) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x0002500a) cell_indicator_nsta_pane_g

0x36ef,	// (0x00018c86) clock_nsta_pane_cp

0x36f8,	// (0x00018c8f) indicator_nsta_pane_cp

0x3702,	// (0x00018c99) nsta_clock_indic_pane_g1

0xc4a5,	// (0x00021a3c) grid_indicator_pane

0xa34c,	// (0x0001f8e3) scroll_pane_cp29

0xe584,	// (0x00023b1b) indicator_nsta_pane_cp2_ParamLimits

0xe584,	// (0x00023b1b) indicator_nsta_pane_cp2

0xc44f,	// (0x000219e6) main_apps_wheel_pane

0xac3a,	// (0x000201d1) form_midp_field_text_pane_ParamLimits

0x169d,	// (0x00016c34) scroll_bar_cp050_ParamLimits

0x375b,	// (0x00018cf2) cell_indicator_pane_ParamLimits

0x375b,	// (0x00018cf2) cell_indicator_pane

0x3774,	// (0x00018d0b) cell_indicator_pane_g1

0xb5f6,	// (0x00020b8d) grid_wheel_folder_pane_ParamLimits

0xb5f6,	// (0x00020b8d) grid_wheel_folder_pane

0xb604,	// (0x00020b9b) list_wheel_apps_pane_ParamLimits

0xb604,	// (0x00020b9b) list_wheel_apps_pane

0xb612,	// (0x00020ba9) main_apps_wheel_pane_g1_ParamLimits

0xb612,	// (0x00020ba9) main_apps_wheel_pane_g1

0xb61e,	// (0x00020bb5) main_apps_wheel_pane_g2_ParamLimits

0xb61e,	// (0x00020bb5) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x00025026) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x00025026) main_apps_wheel_pane_g

0xb62c,	// (0x00020bc3) main_apps_wheel_pane_t1_ParamLimits

0xb62c,	// (0x00020bc3) main_apps_wheel_pane_t1

0xb640,	// (0x00020bd7) list_wheel_apps_pane_g1

0xb648,	// (0x00020bdf) list_wheel_apps_pane_g2

0xb650,	// (0x00020be7) list_wheel_apps_pane_g3

0xb658,	// (0x00020bef) list_wheel_apps_pane_g4

0xb662,	// (0x00020bf9) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x0002502b) list_wheel_apps_pane_g

0xd04c,	// (0x000225e3) navi_icon_text_pane

0xa725,	// (0x0001fcbc) aid_fill_nsta

0x383b,	// (0x00018dd2) navi_icon_text_pane_g1

0x3847,	// (0x00018dde) navi_icon_text_pane_t1

0xcf3c,	// (0x000224d3) list_set_graphic_pane_t1_ParamLimits

0xcf3c,	// (0x000224d3) list_set_graphic_pane_t1

0x1de8,	// (0x0001737f) popup_midp_note_alarm_window_t6_ParamLimits

0x1de8,	// (0x0001737f) popup_midp_note_alarm_window_t6

0x1dfa,	// (0x00017391) popup_midp_note_alarm_window_t7_ParamLimits

0x1dfa,	// (0x00017391) popup_midp_note_alarm_window_t7

0x1e0c,	// (0x000173a3) popup_midp_note_alarm_window_t8_ParamLimits

0x1e0c,	// (0x000173a3) popup_midp_note_alarm_window_t8

0x1e1e,	// (0x000173b5) popup_midp_note_alarm_window_t9_ParamLimits

0x1e1e,	// (0x000173b5) popup_midp_note_alarm_window_t9

0x1e30,	// (0x000173c7) popup_midp_note_alarm_window_t10_ParamLimits

0x1e30,	// (0x000173c7) popup_midp_note_alarm_window_t10

0x1e42,	// (0x000173d9) popup_midp_note_alarm_window_t11_ParamLimits

0x1e42,	// (0x000173d9) popup_midp_note_alarm_window_t11

0xaf86,	// (0x0002051d) scroll_pane_cp17_ParamLimits

0xaf86,	// (0x0002051d) scroll_pane_cp17

0xe8f1,	// (0x00023e88) volume_small_pane_cp_g1

0xeb1d,	// (0x000240b4) volume_small_pane_cp_g2

0xeb26,	// (0x000240bd) volume_small_pane_cp_g3

0xeb2f,	// (0x000240c6) volume_small_pane_cp_g4

0xeb38,	// (0x000240cf) volume_small_pane_cp_g5

0xeae7,	// (0x0002407e) volume_small_pane_cp_g6

0xeb41,	// (0x000240d8) volume_small_pane_cp_g7

0xeb4a,	// (0x000240e1) volume_small_pane_cp_g8

0xeb53,	// (0x000240ea) volume_small_pane_cp_g9

0xeb5c,	// (0x000240f3) volume_small_pane_cp_g10

0xd1b2,	// (0x00022749) midp_ticker_pane_g1_ParamLimits

0xd1be,	// (0x00022755) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x00024cb6) midp_ticker_pane_g_ParamLimits

0xd1ca,	// (0x00022761) midp_ticker_pane_t1_ParamLimits

0xa749,	// (0x0001fce0) aid_fill_nsta_2

0x1689,	// (0x00016c20) list_form2_midp_pane

0x27e1,	// (0x00017d78) midp_editing_number_pane_ParamLimits

0x27f0,	// (0x00017d87) midp_ticker_pane_ParamLimits

0x3859,	// (0x00018df0) form2_midp_field_pane

0x387d,	// (0x00018e14) scroll_pane_cp51

0x389d,	// (0x00018e34) form2_midp_button_pane_ParamLimits

0x389d,	// (0x00018e34) form2_midp_button_pane

0x38af,	// (0x00018e46) form2_midp_content_pane_ParamLimits

0x38af,	// (0x00018e46) form2_midp_content_pane

0x38c9,	// (0x00018e60) form2_midp_field_choice_group_pane

0x38d1,	// (0x00018e68) form2_midp_field_pane_g1

0x38d9,	// (0x00018e70) form2_midp_field_pane_g2

0x38e1,	// (0x00018e78) form2_midp_field_pane_g3

0x38e9,	// (0x00018e80) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x00025050) form2_midp_field_pane_g

0x38f1,	// (0x00018e88) form2_midp_gauge_slider_pane

0x38f9,	// (0x00018e90) form2_midp_gauge_wait_pane

0x3901,	// (0x00018e98) form2_midp_image_pane_ParamLimits

0x3901,	// (0x00018e98) form2_midp_image_pane

0xb695,	// (0x00020c2c) form2_midp_label_pane_ParamLimits

0xb695,	// (0x00020c2c) form2_midp_label_pane

0xb6ae,	// (0x00020c45) form2_midp_label_pane_cp_ParamLimits

0xb6ae,	// (0x00020c45) form2_midp_label_pane_cp

0x3956,	// (0x00018eed) form2_midp_string_pane_ParamLimits

0x3956,	// (0x00018eed) form2_midp_string_pane

0xb6cd,	// (0x00020c64) form2_midp_text_pane_ParamLimits

0xb6cd,	// (0x00020c64) form2_midp_text_pane

0x3983,	// (0x00018f1a) form2_midp_time_pane

0x3993,	// (0x00018f2a) input_focus_pane_cp51_ParamLimits

0x3993,	// (0x00018f2a) input_focus_pane_cp51

0xb6e6,	// (0x00020c7d) form2_midp_label_pane_t1_ParamLimits

0xb6e6,	// (0x00020c7d) form2_midp_label_pane_t1

0xb726,	// (0x00020cbd) form2_mdip_text_pane_t1_ParamLimits

0xb726,	// (0x00020cbd) form2_mdip_text_pane_t1

0x3a0b,	// (0x00018fa2) form2_midp_time_pane_t1

0x3a26,	// (0x00018fbd) form2_midp_gauge_slider_pane_t1

0xb742,	// (0x00020cd9) form2_midp_gauge_slider_pane_t2

0xb754,	// (0x00020ceb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x00025059) form2_midp_gauge_slider_pane_t

0x3a5c,	// (0x00018ff3) form2_midp_slider_pane

0x3a68,	// (0x00018fff) form2_midp_gauge_wait_pane_t1

0x3a76,	// (0x0001900d) form2_midp_wait_pane_ParamLimits

0x3a76,	// (0x0001900d) form2_midp_wait_pane

0xb766,	// (0x00020cfd) list_single_2graphic_pane_cp4_ParamLimits

0xb766,	// (0x00020cfd) list_single_2graphic_pane_cp4

0xab7a,	// (0x00020111) list_single_midp_graphic_pane_cp_ParamLimits

0xab7a,	// (0x00020111) list_single_midp_graphic_pane_cp

0xc3f3,	// (0x0002198a) list_highlight_pane_cp20

0x3ac9,	// (0x00019060) list_single_2graphic_pane_g1_cp4

0x2d25,	// (0x000182bc) list_single_2graphic_pane_g2_cp4

0x3ad1,	// (0x00019068) list_single_2graphic_pane_t1_cp4

0xc44f,	// (0x000219e6) list_highlight_pane_cp21

0x3ae0,	// (0x00019077) list_single_midp_graphic_pane_g4_cp

0x3aef,	// (0x00019086) list_single_midp_graphic_pane_t1_cp

0xb77b,	// (0x00020d12) form2_mdip_string_pane_t1_ParamLimits

0xb77b,	// (0x00020d12) form2_mdip_string_pane_t1

0xc3f3,	// (0x0002198a) bg_wml_button_pane_cp2

0xc3e9,	// (0x00021980) form2_midp_image_pane_g1

0xc7f3,	// (0x00021d8a) list_double_large_graphic_pane_g5_ParamLimits

0xc7f3,	// (0x00021d8a) list_double_large_graphic_pane_g5

0xa595,	// (0x0001fb2c) midp_form_pane_ParamLimits

0xc44f,	// (0x000219e6) main_apps_wheel_pane_ParamLimits

0x8989,	// (0x0001df20) popup_preview_window_ParamLimits

0x8989,	// (0x0001df20) popup_preview_window

0x8c56,	// (0x0001e1ed) popup_touch_info_window_ParamLimits

0x8c56,	// (0x0001e1ed) popup_touch_info_window

0x8c74,	// (0x0001e20b) popup_touch_menu_window_ParamLimits

0x8c74,	// (0x0001e20b) popup_touch_menu_window

0xc3df,	// (0x00021976) bg_popup_sub_pane_cp6

0x3c0b,	// (0x000191a2) list_touch_menu_pane

0xb7f1,	// (0x00020d88) list_single_touch_menu_pane_ParamLimits

0xb7f1,	// (0x00020d88) list_single_touch_menu_pane

0xb805,	// (0x00020d9c) list_single_touch_menu_pane_t1

0xc44f,	// (0x000219e6) bg_popup_sub_pane_cp7_ParamLimits

0xc44f,	// (0x000219e6) bg_popup_sub_pane_cp7

0x3c37,	// (0x000191ce) heading_sub_pane

0x3c3f,	// (0x000191d6) list_touch_info_pane_ParamLimits

0x3c3f,	// (0x000191d6) list_touch_info_pane

0x3c4e,	// (0x000191e5) list_single_touch_info_pane_ParamLimits

0x3c4e,	// (0x000191e5) list_single_touch_info_pane

0x3c60,	// (0x000191f7) list_single_touch_info_pane_t1

0x3c6e,	// (0x00019205) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x00025067) list_single_touch_info_pane_t

0xd19b,	// (0x00022732) bg_popup_heading_pane_cp

0x3c7c,	// (0x00019213) heading_sub_pane_t1

0x1289,	// (0x00016820) bg_popup_preview_window_pane_cp_ParamLimits

0x1289,	// (0x00016820) bg_popup_preview_window_pane_cp

0x3c37,	// (0x000191ce) heading_preview_pane

0x3c3f,	// (0x000191d6) list_preview_pane_ParamLimits

0x3c3f,	// (0x000191d6) list_preview_pane

0x3c8a,	// (0x00019221) popup_preview_window_g1

0x3c4e,	// (0x000191e5) list_single_preview_pane_ParamLimits

0x3c4e,	// (0x000191e5) list_single_preview_pane

0x3c92,	// (0x00019229) list_single_preview_pane_g1

0x3c9a,	// (0x00019231) list_single_preview_pane_t1

0x3c60,	// (0x000191f7) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x0002506c) list_single_preview_pane_t

0x3ca8,	// (0x0001923f) bg_popup_heading_pane_cp2_ParamLimits

0x3ca8,	// (0x0001923f) bg_popup_heading_pane_cp2

0x3cbe,	// (0x00019255) heading_preview_pane_g1

0x3cc6,	// (0x0001925d) heading_preview_pane_t1_ParamLimits

0x3cc6,	// (0x0001925d) heading_preview_pane_t1

0xc4bc,	// (0x00021a53) soft_indicator_pane_t1_ParamLimits

0xc79b,	// (0x00021d32) scroll_pane_ParamLimits

0xcc1c,	// (0x000221b3) scroll_sc2_left_pane

0xcc25,	// (0x000221bc) scroll_sc2_right_pane

0xcc44,	// (0x000221db) scroll_bg_pane_g1_ParamLimits

0xcc59,	// (0x000221f0) scroll_bg_pane_g2_ParamLimits

0xcc71,	// (0x00022208) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x00024c41) scroll_bg_pane_g_ParamLimits

0xcc44,	// (0x000221db) scroll_handle_pane_g1_ParamLimits

0xcc86,	// (0x0002221d) scroll_handle_pane_g2_ParamLimits

0xcc71,	// (0x00022208) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x00024c48) scroll_handle_pane_g_ParamLimits

0x8556,	// (0x0001daed) popup_choice_list_window_ParamLimits

0x8556,	// (0x0001daed) popup_choice_list_window

0x1085,	// (0x0001661c) choice_list_pane

0x1135,	// (0x000166cc) cell_toolbar_pane_t1

0x115d,	// (0x000166f4) toolbar_button_pane_ParamLimits

0x230e,	// (0x000178a5) ai_gene_pane_1_t2_ParamLimits

0x230e,	// (0x000178a5) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x00024e64) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x00024e64) ai_gene_pane_1_t

0x3ce3,	// (0x0001927a) scroll_sc2_left_pane_g1

0x3ce3,	// (0x0001927a) scroll_sc2_right_pane_g1

0xca39,	// (0x00021fd0) bg_popup_sub_pane_cp10

0x3ced,	// (0x00019284) list_choice_list_pane

0xb3a2,	// (0x00020939) list_single_choice_list_pane_ParamLimits

0xb3a2,	// (0x00020939) list_single_choice_list_pane

0xd357,	// (0x000228ee) list_single_choice_list_pane_g1

0xa193,	// (0x0001f72a) list_single_choice_list_pane_t1_ParamLimits

0xa193,	// (0x0001f72a) list_single_choice_list_pane_t1

0x3d21,	// (0x000192b8) choice_list_pane_g1

0xb813,	// (0x00020daa) choice_list_pane_t1

0xc3df,	// (0x00021976) input_focus_pane_cp11

0xcb91,	// (0x00022128) title_pane_stacon_g2_ParamLimits

0xcb91,	// (0x00022128) title_pane_stacon_g2

0x0002,

0xf690,	// (0x00024c27) title_pane_stacon_g_ParamLimits

0xf690,	// (0x00024c27) title_pane_stacon_g

0xd19b,	// (0x00022732) cursor_press_pane

0x85fd,	// (0x0001db94) popup_fep_hwr_window_ParamLimits

0x85fd,	// (0x0001db94) popup_fep_hwr_window

0xe79b,	// (0x00023d32) popup_fep_vkb_window_ParamLimits

0xe79b,	// (0x00023d32) popup_fep_vkb_window

0xb821,	// (0x00020db8) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x00025095) fep_vkb_side_pane_g_ParamLimits

0xeb90,	// (0x00024127) fep_hwr_candidate_pane_ParamLimits

0xeb90,	// (0x00024127) fep_hwr_candidate_pane

0xebba,	// (0x00024151) fep_hwr_side_pane_ParamLimits

0xebba,	// (0x00024151) fep_hwr_side_pane

0xebda,	// (0x00024171) fep_hwr_top_pane_ParamLimits

0xebda,	// (0x00024171) fep_hwr_top_pane

0xebf2,	// (0x00024189) fep_hwr_write_pane_ParamLimits

0xebf2,	// (0x00024189) fep_hwr_write_pane

0xfafe,	// (0x00025095) fep_vkb_side_pane_g

0x3d3f,	// (0x000192d6) fep_hwr_top_pane_g1

0x3d51,	// (0x000192e8) fep_hwr_top_pane_g2

0xec2c,	// (0x000241c3) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x00025071) fep_hwr_top_pane_g

0xec41,	// (0x000241d8) fep_hwr_top_text_pane

0xcd49,	// (0x000222e0) fep_hwr_top_text_pane_g1

0x3d87,	// (0x0001931e) fep_hwr_top_text_pane_t1

0xecc0,	// (0x00024257) fep_hwr_candidate_pane_g1

0x3fcc,	// (0x00019563) fep_vkb_keypad_pane_g3_ParamLimits

0x3fcc,	// (0x00019563) fep_vkb_keypad_pane_g3

0x3ff4,	// (0x0001958b) fep_vkb_keypad_pane_g4_ParamLimits

0x3ff4,	// (0x0001958b) fep_vkb_keypad_pane_g4

0x4063,	// (0x000195fa) fep_vkb_bottom_pane_g2_ParamLimits

0x4063,	// (0x000195fa) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x0002509c) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x0002509c) fep_vkb_bottom_pane_g

0x3ce3,	// (0x0001927a) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x000250a6) cell_vkb_side_pane_g

0x40ee,	// (0x00019685) cell_vkb_side_pane_t1

0x40fc,	// (0x00019693) cell_vkb_side_pane_t1_copy1

0x3ce3,	// (0x0001927a) bg_fep_vkb_candidate_pane_g2

0x4228,	// (0x000197bf) cell_vkb_candidate_pane_ParamLimits

0x3d95,	// (0x0001932c) aid_size_cell_vkb_ParamLimits

0x3d95,	// (0x0001932c) aid_size_cell_vkb

0x4228,	// (0x000197bf) cell_vkb_candidate_pane

0xece7,	// (0x0002427e) bg_popup_fep_shadow_pane_g1

0xb83b,	// (0x00020dd2) fep_vkb_bottom_pane_ParamLimits

0xb83b,	// (0x00020dd2) fep_vkb_bottom_pane

0x3e59,	// (0x000193f0) fep_vkb_candidate_pane_ParamLimits

0x3e59,	// (0x000193f0) fep_vkb_candidate_pane

0xb860,	// (0x00020df7) fep_vkb_keypad_pane_ParamLimits

0xb860,	// (0x00020df7) fep_vkb_keypad_pane

0xb895,	// (0x00020e2c) fep_vkb_side_pane_ParamLimits

0xb895,	// (0x00020e2c) fep_vkb_side_pane

0xb8d1,	// (0x00020e68) fep_vkb_top_pane_ParamLimits

0xb8d1,	// (0x00020e68) fep_vkb_top_pane

0x3f25,	// (0x000194bc) fep_vkb_top_pane_g1_ParamLimits

0x3f25,	// (0x000194bc) fep_vkb_top_pane_g1

0x3f34,	// (0x000194cb) fep_vkb_top_pane_g2_ParamLimits

0x3f34,	// (0x000194cb) fep_vkb_top_pane_g2

0x3f43,	// (0x000194da) fep_vkb_top_pane_g3_ParamLimits

0x3f43,	// (0x000194da) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x0002508c) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x0002508c) fep_vkb_top_pane_g

0x3f61,	// (0x000194f8) fep_vkb_top_text_pane_ParamLimits

0x3f61,	// (0x000194f8) fep_vkb_top_text_pane

0xb906,	// (0x00020e9d) fep_vkb_side_pane_g1_ParamLimits

0xb906,	// (0x00020e9d) fep_vkb_side_pane_g1

0x3fbb,	// (0x00019552) grid_vkb_side_pane_ParamLimits

0x3fbb,	// (0x00019552) grid_vkb_side_pane

0xecef,	// (0x00024286) bg_popup_fep_shadow_pane_g2

0xecf8,	// (0x0002428f) bg_popup_fep_shadow_pane_g3

0xed00,	// (0x00024297) bg_popup_fep_shadow_pane_g4

0xed09,	// (0x000242a0) bg_popup_fep_shadow_pane_g5

0xed13,	// (0x000242aa) bg_popup_fep_shadow_pane_g6

0xed1b,	// (0x000242b2) bg_popup_fep_shadow_pane_g7

0xc967,	// (0x00021efe) bg_popup_fep_shadow_pane_g8

0x4012,	// (0x000195a9) grid_vkb_keypad_number_pane_ParamLimits

0x4012,	// (0x000195a9) grid_vkb_keypad_number_pane

0x4022,	// (0x000195b9) grid_vkb_keypad_pane_ParamLimits

0x4022,	// (0x000195b9) grid_vkb_keypad_pane

0x4048,	// (0x000195df) fep_vkb_bottom_pane_g1_ParamLimits

0x4048,	// (0x000195df) fep_vkb_bottom_pane_g1

0x4071,	// (0x00019608) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4071,	// (0x00019608) grid_vkb_keypad_bottom_left_pane

0x4086,	// (0x0001961d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4086,	// (0x0001961d) grid_vkb_keypad_bottom_right_pane

0x409b,	// (0x00019632) fep_vkb_top_text_pane_g1

0xb94d,	// (0x00020ee4) fep_vkb_top_text_pane_t1

0xb95f,	// (0x00020ef6) cell_vkb_side_pane_ParamLimits

0xb95f,	// (0x00020ef6) cell_vkb_side_pane

0x3ce3,	// (0x0001927a) cell_vkb_side_pane_g1

0x410a,	// (0x000196a1) cell_vkb_keypad_pane_ParamLimits

0x410a,	// (0x000196a1) cell_vkb_keypad_pane

0x417f,	// (0x00019716) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x000250b9) bg_popup_fep_shadow_pane_g

0xed2d,	// (0x000242c4) cell_hwr_side_pane_g1

0xed2d,	// (0x000242c4) cell_hwr_side_pane_g2

0x4189,	// (0x00019720) cell_vkb_keypad_pane_t1

0xb975,	// (0x00020f0c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb975,	// (0x00020f0c) cell_vkb_keypad_bottom_left_pane

0xb98a,	// (0x00020f21) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb98a,	// (0x00020f21) cell_vkb_keypad_bottom_right_pane

0x3ce3,	// (0x0001927a) cell_vkb_keypad_bottom_left_pane_g1

0x3ce3,	// (0x0001927a) cell_vkb_keypad_bottom_right_pane_g1

0x41ed,	// (0x00019784) cell_vkb_keypad_number_pane_ParamLimits

0x41ed,	// (0x00019784) cell_vkb_keypad_number_pane

0x420c,	// (0x000197a3) cell_vkb_keypad_number_pane_g1

0x4216,	// (0x000197ad) cell_vkb_keypad_number_pane_g2

0x421f,	// (0x000197b6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x000250ab) cell_vkb_keypad_number_pane_g

0x4189,	// (0x00019720) cell_vkb_keypad_number_pane_t1

0x4243,	// (0x000197da) fep_vkb_candidate_pane_g1

0x0001,

0xfb35,	// (0x000250cc) cell_hwr_side_pane_g

0x425c,	// (0x000197f3) cell_hwr_side_pane_t1

0xed37,	// (0x000242ce) cell_hwr_side_pane_t1_copy1

0xed45,	// (0x000242dc) cell_hwr_candidate_pane_g1

0xed74,	// (0x0002430b) cell_hwr_candidate_pane_t1

0x3ce3,	// (0x0001927a) cell_vkb_candidate_pane_g2

0x42a0,	// (0x00019837) cell_vkb_candidate_pane_t1

0xe783,	// (0x00023d1a) bg_popup_fep_shadow_pane_ParamLimits

0xe783,	// (0x00023d1a) bg_popup_fep_shadow_pane

0xec0c,	// (0x000241a3) bg_fep_hwr_top_pane_g4

0x3d63,	// (0x000192fa) bg_hwr_side_pane_g1_ParamLimits

0x3d63,	// (0x000192fa) bg_hwr_side_pane_g1

0x8e8b,	// (0x0001e422) cell_hwr_side_pane_ParamLimits

0x8e8b,	// (0x0001e422) cell_hwr_side_pane

0xec56,	// (0x000241ed) fep_hwr_write_pane_g1_ParamLimits

0xec56,	// (0x000241ed) fep_hwr_write_pane_g1

0xec63,	// (0x000241fa) fep_hwr_write_pane_g2_ParamLimits

0xec63,	// (0x000241fa) fep_hwr_write_pane_g2

0xec70,	// (0x00024207) fep_hwr_write_pane_g3_ParamLimits

0xec70,	// (0x00024207) fep_hwr_write_pane_g3

0x8eab,	// (0x0001e442) fep_hwr_write_pane_g4_ParamLimits

0x8eab,	// (0x0001e442) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x00025078) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x00025078) fep_hwr_write_pane_g

0xec0c,	// (0x000241a3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xec0c,	// (0x000241a3) bg_fep_hwr_candidate_pane_g2

0xec7e,	// (0x00024215) cell_hwr_candidate_pane_ParamLimits

0xec7e,	// (0x00024215) cell_hwr_candidate_pane

0xecc0,	// (0x00024257) fep_hwr_candidate_pane_g1_ParamLimits

0x3dc3,	// (0x0001935a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3dc3,	// (0x0001935a) bg_popup_fep_shadow_pane_cp2

0x3f53,	// (0x000194ea) fep_vkb_top_pane_g4_ParamLimits

0x3f53,	// (0x000194ea) fep_vkb_top_pane_g4

0x3f99,	// (0x00019530) fep_vkb_side_pane_g2_ParamLimits

0x3f99,	// (0x00019530) fep_vkb_side_pane_g2

0x9ebe,	// (0x0001f455) list_setting_pane_t4_ParamLimits

0x9ebe,	// (0x0001f455) list_setting_pane_t4

0x9f38,	// (0x0001f4cf) list_setting_number_pane_t5_ParamLimits

0x9f38,	// (0x0001f4cf) list_setting_number_pane_t5

0xcd80,	// (0x00022317) list_double_heading_pane_cp2_ParamLimits

0xcd80,	// (0x00022317) list_double_heading_pane_cp2

0xd36c,	// (0x00022903) list_double_heading_pane_g1_cp2_ParamLimits

0xd36c,	// (0x00022903) list_double_heading_pane_g1_cp2

0x42ae,	// (0x00019845) list_double_heading_pane_g2_cp2_ParamLimits

0x42ae,	// (0x00019845) list_double_heading_pane_g2_cp2

0x42c2,	// (0x00019859) list_double_heading_pane_t1_cp2_ParamLimits

0x42c2,	// (0x00019859) list_double_heading_pane_t1_cp2

0x42d8,	// (0x0001986f) list_double_heading_pane_t2_cp2_ParamLimits

0x42d8,	// (0x0001986f) list_double_heading_pane_t2_cp2

0xc3d7,	// (0x0002196e) aid_value_unit2

0xe315,	// (0x000238ac) popup_preview_fixed_window

0xc593,	// (0x00021b2a) bg_popup_preview_window_pane_cp02

0x42ea,	// (0x00019881) list_preview_fixed_pane

0x4330,	// (0x000198c7) list_empty_pane_fp_ParamLimits

0x4330,	// (0x000198c7) list_empty_pane_fp

0x4330,	// (0x000198c7) list_single_cale_day_pane_fp_ParamLimits

0x4330,	// (0x000198c7) list_single_cale_day_pane_fp

0x4330,	// (0x000198c7) list_single_graphic_heading_pane_fp_ParamLimits

0x4330,	// (0x000198c7) list_single_graphic_heading_pane_fp

0x4330,	// (0x000198c7) list_single_graphic_pane_fp_ParamLimits

0x4330,	// (0x000198c7) list_single_graphic_pane_fp

0x4330,	// (0x000198c7) list_single_heading_pane_fp_ParamLimits

0x4330,	// (0x000198c7) list_single_heading_pane_fp

0x4330,	// (0x000198c7) list_single_pane_fp_ParamLimits

0x4330,	// (0x000198c7) list_single_pane_fp

0x4346,	// (0x000198dd) list_single_pane_fp_g1_ParamLimits

0x4346,	// (0x000198dd) list_single_pane_fp_g1

0xd378,	// (0x0002290f) list_single_pane_fp_g2_ParamLimits

0xd378,	// (0x0002290f) list_single_pane_fp_g2

0x4352,	// (0x000198e9) list_single_pane_fp_g3_ParamLimits

0x4352,	// (0x000198e9) list_single_pane_fp_g3

0x4366,	// (0x000198fd) list_single_pane_fp_g4_ParamLimits

0x4366,	// (0x000198fd) list_single_pane_fp_g4

0x0003,

0xfb48,	// (0x000250df) list_single_pane_fp_g_ParamLimits

0xfb48,	// (0x000250df) list_single_pane_fp_g

0x4372,	// (0x00019909) list_single_pane_fp_t1_ParamLimits

0x4372,	// (0x00019909) list_single_pane_fp_t1

0x4389,	// (0x00019920) list_single_graphic_pane_fp_g1_ParamLimits

0x4389,	// (0x00019920) list_single_graphic_pane_fp_g1

0x4346,	// (0x000198dd) list_single_graphic_pane_fp_g2_ParamLimits

0x4346,	// (0x000198dd) list_single_graphic_pane_fp_g2

0xd378,	// (0x0002290f) list_single_graphic_pane_fp_g3_ParamLimits

0xd378,	// (0x0002290f) list_single_graphic_pane_fp_g3

0x4352,	// (0x000198e9) list_single_graphic_pane_fp_g4_ParamLimits

0x4352,	// (0x000198e9) list_single_graphic_pane_fp_g4

0x4366,	// (0x000198fd) list_single_graphic_pane_fp_g5_ParamLimits

0x4366,	// (0x000198fd) list_single_graphic_pane_fp_g5

0x0004,

0xfb51,	// (0x000250e8) list_single_graphic_pane_fp_g_ParamLimits

0xfb51,	// (0x000250e8) list_single_graphic_pane_fp_g

0x4395,	// (0x0001992c) list_single_graphic_pane_fp_t1_ParamLimits

0x4395,	// (0x0001992c) list_single_graphic_pane_fp_t1

0x4389,	// (0x00019920) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4389,	// (0x00019920) list_single_graphic_heading_pane_fp_g1

0x4346,	// (0x000198dd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4346,	// (0x000198dd) list_single_graphic_heading_pane_fp_g2

0xd378,	// (0x0002290f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd378,	// (0x0002290f) list_single_graphic_heading_pane_fp_g3

0x4352,	// (0x000198e9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4352,	// (0x000198e9) list_single_graphic_heading_pane_fp_g4

0x4366,	// (0x000198fd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4366,	// (0x000198fd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb51,	// (0x000250e8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb51,	// (0x000250e8) list_single_graphic_heading_pane_fp_g

0x43ab,	// (0x00019942) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x43ab,	// (0x00019942) list_single_graphic_heading_pane_fp_t1

0x43c1,	// (0x00019958) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x43c1,	// (0x00019958) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5c,	// (0x000250f3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5c,	// (0x000250f3) list_single_graphic_heading_pane_fp_t

0x43d3,	// (0x0001996a) list_single_cale_day_pane_fp_g1_ParamLimits

0x43d3,	// (0x0001996a) list_single_cale_day_pane_fp_g1

0x440b,	// (0x000199a2) list_single_cale_day_pane_fp_g2_ParamLimits

0x440b,	// (0x000199a2) list_single_cale_day_pane_fp_g2

0x4417,	// (0x000199ae) list_single_cale_day_pane_fp_g3_ParamLimits

0x4417,	// (0x000199ae) list_single_cale_day_pane_fp_g3

0x443f,	// (0x000199d6) list_single_cale_day_pane_fp_g4_ParamLimits

0x443f,	// (0x000199d6) list_single_cale_day_pane_fp_g4

0x4463,	// (0x000199fa) list_single_cale_day_pane_fp_g5_ParamLimits

0x4463,	// (0x000199fa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb61,	// (0x000250f8) list_single_cale_day_pane_fp_g_ParamLimits

0xfb61,	// (0x000250f8) list_single_cale_day_pane_fp_g

0x4487,	// (0x00019a1e) list_single_cale_day_pane_fp_t1_ParamLimits

0x4487,	// (0x00019a1e) list_single_cale_day_pane_fp_t1

0x44ad,	// (0x00019a44) list_single_cale_day_pane_fp_t2_ParamLimits

0x44ad,	// (0x00019a44) list_single_cale_day_pane_fp_t2

0x44c6,	// (0x00019a5d) list_single_cale_day_pane_fp_t3_ParamLimits

0x44c6,	// (0x00019a5d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6c,	// (0x00025103) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6c,	// (0x00025103) list_single_cale_day_pane_fp_t

0x4346,	// (0x000198dd) list_empty_pane_fp_g1_ParamLimits

0x4346,	// (0x000198dd) list_empty_pane_fp_g1

0x44df,	// (0x00019a76) list_empty_pane_fp_t1

0x44ed,	// (0x00019a84) list_empty_pane_fp_t2

0x0001,

0xfb73,	// (0x0002510a) list_empty_pane_fp_t

0x4346,	// (0x000198dd) list_single_heading_pane_fp_g1_ParamLimits

0x4346,	// (0x000198dd) list_single_heading_pane_fp_g1

0xd378,	// (0x0002290f) list_single_heading_pane_fp_g2_ParamLimits

0xd378,	// (0x0002290f) list_single_heading_pane_fp_g2

0x4352,	// (0x000198e9) list_single_heading_pane_fp_g3_ParamLimits

0x4352,	// (0x000198e9) list_single_heading_pane_fp_g3

0x0002,

0xfb78,	// (0x0002510f) list_single_heading_pane_fp_g_ParamLimits

0xfb78,	// (0x0002510f) list_single_heading_pane_fp_g

0x44fb,	// (0x00019a92) list_single_heading_pane_fp_t1_ParamLimits

0x44fb,	// (0x00019a92) list_single_heading_pane_fp_t1

0x450d,	// (0x00019aa4) list_single_heading_pane_fp_t2_ParamLimits

0x450d,	// (0x00019aa4) list_single_heading_pane_fp_t2

0x0001,

0xfb7f,	// (0x00025116) list_single_heading_pane_fp_t_ParamLimits

0xfb7f,	// (0x00025116) list_single_heading_pane_fp_t

0xa1df,	// (0x0001f776) aid_size_cell_fast

0xc576,	// (0x00021b0d) soft_indicator_pane_cp1_t1

0xa1e8,	// (0x0001f77f) cell_app_pane_cp2_ParamLimits

0xa1e8,	// (0x0001f77f) cell_app_pane_cp2

0xeb79,	// (0x00024110) fep_hwr_candidate_drop_down_list_pane

0xecda,	// (0x00024271) fep_hwr_candidate_pane_g3_ParamLimits

0xecda,	// (0x00024271) fep_hwr_candidate_pane_g3

0xd35f,	// (0x000228f6) fep_hwr_candidate_pane_g4_ParamLimits

0xd35f,	// (0x000228f6) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x00025085) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x00025085) fep_hwr_candidate_pane_g

0x3e48,	// (0x000193df) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3e48,	// (0x000193df) fep_vkb_candidate_drop_down_list_pane

0x424b,	// (0x000197e2) fep_vkb_candidate_pane_g3

0x4253,	// (0x000197ea) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x000250b2) fep_vkb_candidate_pane_g

0xed45,	// (0x000242dc) cell_hwr_candidate_pane_g1_ParamLimits

0xed53,	// (0x000242ea) cell_hwr_candidate_pane_g3_ParamLimits

0xed53,	// (0x000242ea) cell_hwr_candidate_pane_g3

0x5ffe,	// (0x0001b595) cell_hwr_candidate_pane_g4_ParamLimits

0x5ffe,	// (0x0001b595) cell_hwr_candidate_pane_g4

0x0002,

0xfb3a,	// (0x000250d1) cell_hwr_candidate_pane_g_ParamLimits

0xfb3a,	// (0x000250d1) cell_hwr_candidate_pane_g

0x426a,	// (0x00019801) cell_vkb_candidate_pane_g3_ParamLimits

0x426a,	// (0x00019801) cell_vkb_candidate_pane_g3

0x4285,	// (0x0001981c) cell_vkb_candidate_pane_g4_ParamLimits

0x4285,	// (0x0001981c) cell_vkb_candidate_pane_g4

0xb9a5,	// (0x00020f3c) cell_app_pane_cp2_g1_ParamLimits

0xb9a5,	// (0x00020f3c) cell_app_pane_cp2_g1

0x4541,	// (0x00019ad8) cell_app_pane_cp2_g2_ParamLimits

0x4541,	// (0x00019ad8) cell_app_pane_cp2_g2

0x0001,

0xfb84,	// (0x0002511b) cell_app_pane_cp2_g_ParamLimits

0xfb84,	// (0x0002511b) cell_app_pane_cp2_g

0x454d,	// (0x00019ae4) cell_app_pane_cp2_t1_ParamLimits

0x454d,	// (0x00019ae4) cell_app_pane_cp2_t1

0xc889,	// (0x00021e20) grid_highlight_pane_cp1_ParamLimits

0xc889,	// (0x00021e20) grid_highlight_pane_cp1

0xed92,	// (0x00024329) cell_hwr_candidate_pane_cp1_ParamLimits

0xed92,	// (0x00024329) cell_hwr_candidate_pane_cp1

0xed45,	// (0x000242dc) fep_hwr_candidate_drop_down_list_pane_g1

0xedb1,	// (0x00024348) fep_hwr_candidate_drop_down_list_pane_g2

0xedbe,	// (0x00024355) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb89,	// (0x00025120) fep_hwr_candidate_drop_down_list_pane_g

0xedcb,	// (0x00024362) fep_hwr_candidate_drop_down_list_scroll_pane

0xedd4,	// (0x0002436b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xedd4,	// (0x0002436b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xede1,	// (0x00024378) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xede1,	// (0x00024378) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xedee,	// (0x00024385) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xedee,	// (0x00024385) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xedfb,	// (0x00024392) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xedfb,	// (0x00024392) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xee16,	// (0x000243ad) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xee16,	// (0x000243ad) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xee31,	// (0x000243c8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xee31,	// (0x000243c8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xee4c,	// (0x000243e3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xee4c,	// (0x000243e3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xee67,	// (0x000243fe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xee67,	// (0x000243fe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb90,	// (0x00025127) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb90,	// (0x00025127) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x455f,	// (0x00019af6) cell_vkb_candidate_pane_cp1_ParamLimits

0x455f,	// (0x00019af6) cell_vkb_candidate_pane_cp1

0x3f53,	// (0x000194ea) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3f53,	// (0x000194ea) fep_vkb_candidate_drop_down_list_pane_g1

0x457f,	// (0x00019b16) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x457f,	// (0x00019b16) fep_vkb_candidate_drop_down_list_pane_g2

0x458c,	// (0x00019b23) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x458c,	// (0x00019b23) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba1,	// (0x00025138) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba1,	// (0x00025138) fep_vkb_candidate_drop_down_list_pane_g

0x4599,	// (0x00019b30) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4599,	// (0x00019b30) fep_vkb_candidate_drop_down_list_scroll_pane

0x45a6,	// (0x00019b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x45a6,	// (0x00019b3d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x45b3,	// (0x00019b4a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x45b3,	// (0x00019b4a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x45bf,	// (0x00019b56) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x45bf,	// (0x00019b56) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x45cb,	// (0x00019b62) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x45cb,	// (0x00019b62) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x45ec,	// (0x00019b83) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x45ec,	// (0x00019b83) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x460d,	// (0x00019ba4) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x460d,	// (0x00019ba4) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x462e,	// (0x00019bc5) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x462e,	// (0x00019bc5) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x464f,	// (0x00019be6) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x464f,	// (0x00019be6) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba8,	// (0x0002513f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba8,	// (0x0002513f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x963e,	// (0x0001ebd5) title_pane_g1_ParamLimits

0x9651,	// (0x0001ebe8) title_pane_g2_ParamLimits

0xf529,	// (0x00024ac0) title_pane_g_ParamLimits

0xcd39,	// (0x000222d0) aid_call2_pane

0xcd41,	// (0x000222d8) aid_call_pane

0xcd49,	// (0x000222e0) popup_clock_analogue_window_g1

0xcd49,	// (0x000222e0) popup_clock_analogue_window_g2

0xe4c8,	// (0x00023a5f) popup_clock_analogue_window_g3

0xe4d1,	// (0x00023a68) popup_clock_analogue_window_g4

0xc3e9,	// (0x00021980) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x00024c56) popup_clock_analogue_window_g

0xe4d9,	// (0x00023a70) popup_clock_analogue_window_t1

0xe4e7,	// (0x00023a7e) clock_digital_number_pane_ParamLimits

0xe4e7,	// (0x00023a7e) clock_digital_number_pane

0xe4f3,	// (0x00023a8a) clock_digital_number_pane_cp02_ParamLimits

0xe4f3,	// (0x00023a8a) clock_digital_number_pane_cp02

0xe4ff,	// (0x00023a96) clock_digital_number_pane_cp03_ParamLimits

0xe4ff,	// (0x00023a96) clock_digital_number_pane_cp03

0xe50b,	// (0x00023aa2) clock_digital_number_pane_cp04_ParamLimits

0xe50b,	// (0x00023aa2) clock_digital_number_pane_cp04

0xe517,	// (0x00023aae) clock_digital_separator_pane_ParamLimits

0xe517,	// (0x00023aae) clock_digital_separator_pane

0xe523,	// (0x00023aba) popup_clock_digital_window_t1_ParamLimits

0xe523,	// (0x00023aba) popup_clock_digital_window_t1

0xc3e9,	// (0x00021980) clock_digital_number_pane_g1

0xc3e9,	// (0x00021980) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x00024c61) clock_digital_number_pane_g

0xc3e9,	// (0x00021980) clock_digital_separator_pane_g1

0xc3e9,	// (0x00021980) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x00024c61) clock_digital_separator_pane_g

0xa725,	// (0x0001fcbc) aid_fill_nsta_ParamLimits

0xa85b,	// (0x0001fdf2) indicator_nsta_pane_ParamLimits

0x0f15,	// (0x000164ac) popup_clock_analogue_window

0x0f15,	// (0x000164ac) popup_clock_digital_window

0xb5b0,	// (0x00020b47) grid_indicator_nsta_pane_ParamLimits

0x368c,	// (0x00018c23) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x00025005) clock_nsta_pane_t

0xe4a9,	// (0x00023a40) aid_size_max_handle

0x8347,	// (0x0001d8de) aid_size_min_handle

0xd19b,	// (0x00022732) editor_scroll_pane

0x466a,	// (0x00019c01) ex_editor_pane

0xca29,	// (0x00021fc0) scroll_pane_cp13

0xc7c7,	// (0x00021d5e) scroll_pane_cp14

0xcd78,	// (0x0002230f) scroll_pane_cp36

0xa373,	// (0x0001f90a) list_single_graphic_hl_pane_cp2_ParamLimits

0xa373,	// (0x0001f90a) list_single_graphic_hl_pane_cp2

0xb3b6,	// (0x0002094d) list_single_graphic_hl_pane_ParamLimits

0xb3b6,	// (0x0002094d) list_single_graphic_hl_pane

0x666b,	// (0x0001bc02) aid_size_min_hl_cp1

0x467b,	// (0x00019c12) list_highlight_pane_cp34_ParamLimits

0x467b,	// (0x00019c12) list_highlight_pane_cp34

0x468c,	// (0x00019c23) list_single_graphic_hl_pane_g1_ParamLimits

0x468c,	// (0x00019c23) list_single_graphic_hl_pane_g1

0xb9c3,	// (0x00020f5a) list_single_graphic_hl_pane_g2_ParamLimits

0xb9c3,	// (0x00020f5a) list_single_graphic_hl_pane_g2

0xb9c3,	// (0x00020f5a) list_single_graphic_hl_pane_g3_ParamLimits

0xb9c3,	// (0x00020f5a) list_single_graphic_hl_pane_g3

0xd126,	// (0x000226bd) list_single_graphic_hl_pane_g4_ParamLimits

0xd126,	// (0x000226bd) list_single_graphic_hl_pane_g4

0xb9cf,	// (0x00020f66) list_single_graphic_hl_pane_g5_ParamLimits

0xb9cf,	// (0x00020f66) list_single_graphic_hl_pane_g5

0x0004,

0xfbb9,	// (0x00025150) list_single_graphic_hl_pane_g_ParamLimits

0xfbb9,	// (0x00025150) list_single_graphic_hl_pane_g

0xb9e3,	// (0x00020f7a) list_single_graphic_hl_pane_t1_ParamLimits

0xb9e3,	// (0x00020f7a) list_single_graphic_hl_pane_t1

0x46cf,	// (0x00019c66) aid_size_min_hl_cp2

0x46d8,	// (0x00019c6f) list_highlight_pane_cp34_cp2_ParamLimits

0x46d8,	// (0x00019c6f) list_highlight_pane_cp34_cp2

0x468c,	// (0x00019c23) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x468c,	// (0x00019c23) list_single_graphic_hl_pane_g1_cp2

0x46e5,	// (0x00019c7c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x46e5,	// (0x00019c7c) list_single_graphic_hl_pane_g2_cp2

0xb9f9,	// (0x00020f90) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb9f9,	// (0x00020f90) list_single_graphic_hl_pane_g3_cp2

0xc7cf,	// (0x00021d66) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc7cf,	// (0x00021d66) list_single_graphic_hl_pane_g4_cp2

0x46a5,	// (0x00019c3c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x46a5,	// (0x00019c3c) list_single_graphic_hl_pane_g5_cp2

0x83f9,	// (0x0001d990) control_pane_g4_ParamLimits

0x83f9,	// (0x0001d990) control_pane_g4

0xca39,	// (0x00021fd0) bg_popup_sub_pane_cp10_ParamLimits

0x3ced,	// (0x00019284) list_choice_list_pane_ParamLimits

0x3cfc,	// (0x00019293) scroll_pane_cp23

0xc593,	// (0x00021b2a) bg_popup_preview_window_pane_cp02_ParamLimits

0x42ea,	// (0x00019881) list_preview_fixed_pane_ParamLimits

0x4300,	// (0x00019897) list_preview_fixed_pane_cp_ParamLimits

0x4300,	// (0x00019897) list_preview_fixed_pane_cp

0x430c,	// (0x000198a3) popup_preview_fixed_window_g1_ParamLimits

0x430c,	// (0x000198a3) popup_preview_fixed_window_g1

0x4318,	// (0x000198af) popup_preview_fixed_window_g2_ParamLimits

0x4318,	// (0x000198af) popup_preview_fixed_window_g2

0x0002,

0xfb41,	// (0x000250d8) popup_preview_fixed_window_g_ParamLimits

0xfb41,	// (0x000250d8) popup_preview_fixed_window_g

0xe41d,	// (0x000239b4) aid_navi_side_left_pane_ParamLimits

0xe432,	// (0x000239c9) aid_navi_side_right_pane_ParamLimits

0xe44a,	// (0x000239e1) navi_icon_pane_stacon_ParamLimits

0xe45e,	// (0x000239f5) navi_navi_pane_stacon_ParamLimits

0xe44a,	// (0x000239e1) navi_text_pane_stacon_ParamLimits

0xe2f5,	// (0x0002388c) main_text_info_pane

0x4715,	// (0x00019cac) listscroll_text_info_pane

0x471d,	// (0x00019cb4) list_text_info_pane_ParamLimits

0x471d,	// (0x00019cb4) list_text_info_pane

0x472c,	// (0x00019cc3) scroll_pane_cp24_ParamLimits

0x472c,	// (0x00019cc3) scroll_pane_cp24

0xba07,	// (0x00020f9e) list_text_info_pane_t1_ParamLimits

0xba07,	// (0x00020f9e) list_text_info_pane_t1

0x8572,	// (0x0001db09) popup_fast_swap2_window_ParamLimits

0x8572,	// (0x0001db09) popup_fast_swap2_window

0x477e,	// (0x00019d15) aid_size_cell_fast2

0xc3df,	// (0x00021976) bg_popup_window_pane_cp17

0x4788,	// (0x00019d1f) heading_pane_cp2

0x4790,	// (0x00019d27) listscroll_fast2_pane

0x4798,	// (0x00019d2f) grid_fast2_pane

0x47a2,	// (0x00019d39) listscroll_fast2_pane_g1

0x47aa,	// (0x00019d41) listscroll_fast2_pane_g2

0x0001,

0xfbc4,	// (0x0002515b) listscroll_fast2_pane_g

0xca29,	// (0x00021fc0) scroll_pane_cp26

0x47b4,	// (0x00019d4b) cell_fast2_pane_ParamLimits

0x47b4,	// (0x00019d4b) cell_fast2_pane

0x47c9,	// (0x00019d60) cell_fast2_pane_g1

0x47d2,	// (0x00019d69) cell_fast2_pane_g2

0x47db,	// (0x00019d72) cell_fast2_pane_g3

0x0002,

0xfbc9,	// (0x00025160) cell_fast2_pane_g

0xc6fe,	// (0x00021c95) grid_highlight_pane_cp9

0xe775,	// (0x00023d0c) main_eswt_pane_ParamLimits

0xe775,	// (0x00023d0c) main_eswt_pane

0x4741,	// (0x00019cd8) list_single_text_info_pane

0x47e3,	// (0x00019d7a) eswt_ctrl_button_pane

0x47e3,	// (0x00019d7a) eswt_ctrl_canvas_pane

0xba23,	// (0x00020fba) eswt_ctrl_combo_pane

0x47e3,	// (0x00019d7a) eswt_ctrl_default_pane

0x47e3,	// (0x00019d7a) eswt_ctrl_label_pane

0x47f3,	// (0x00019d8a) eswt_ctrl_wait_pane

0xba2b,	// (0x00020fc2) eswt_shell_pane

0xc3df,	// (0x00021976) listscroll_eswt_app_pane

0x481b,	// (0x00019db2) popup_eswt_tasktip_window_ParamLimits

0x481b,	// (0x00019db2) popup_eswt_tasktip_window

0x1289,	// (0x00016820) bg_popup_window_pane_cp18

0x4834,	// (0x00019dcb) eswt_control_pane_g1_ParamLimits

0x4834,	// (0x00019dcb) eswt_control_pane_g1

0x4841,	// (0x00019dd8) eswt_control_pane_g2_ParamLimits

0x4841,	// (0x00019dd8) eswt_control_pane_g2

0x484e,	// (0x00019de5) eswt_control_pane_g3_ParamLimits

0x484e,	// (0x00019de5) eswt_control_pane_g3

0x485b,	// (0x00019df2) eswt_control_pane_g4_ParamLimits

0x485b,	// (0x00019df2) eswt_control_pane_g4

0x0003,

0xfbd0,	// (0x00025167) eswt_control_pane_g_ParamLimits

0xfbd0,	// (0x00025167) eswt_control_pane_g

0xc889,	// (0x00021e20) bg_button_pane_ParamLimits

0xc889,	// (0x00021e20) bg_button_pane

0xc713,	// (0x00021caa) common_borders_pane_copy2_ParamLimits

0xc713,	// (0x00021caa) common_borders_pane_copy2

0x4868,	// (0x00019dff) control_button_pane_g1_ParamLimits

0x4868,	// (0x00019dff) control_button_pane_g1

0x4874,	// (0x00019e0b) control_button_pane_g2_ParamLimits

0x4874,	// (0x00019e0b) control_button_pane_g2

0x4880,	// (0x00019e17) control_button_pane_g3_ParamLimits

0x4880,	// (0x00019e17) control_button_pane_g3

0x0002,

0xfbd9,	// (0x00025170) control_button_pane_g_ParamLimits

0xfbd9,	// (0x00025170) control_button_pane_g

0x4894,	// (0x00019e2b) control_button_pane_t1

0x48a2,	// (0x00019e39) control_button_pane_t2

0x0001,

0xfbe0,	// (0x00025177) control_button_pane_t

0x1169,	// (0x00016700) bg_button_pane_g1

0x1179,	// (0x00016710) bg_button_pane_g2

0x1171,	// (0x00016708) bg_button_pane_g3

0x1189,	// (0x00016720) bg_button_pane_g4

0x1181,	// (0x00016718) bg_button_pane_g5

0x1191,	// (0x00016728) bg_button_pane_g6

0x1199,	// (0x00016730) bg_button_pane_g7

0x11a9,	// (0x00016740) bg_button_pane_g8

0x11a1,	// (0x00016738) bg_button_pane_g9

0x0008,

0xf821,	// (0x00024db8) bg_button_pane_g

0x3ca8,	// (0x0001923f) common_borders_pane_ParamLimits

0x3ca8,	// (0x0001923f) common_borders_pane

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy1_ParamLimits

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy1

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy1_ParamLimits

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy1

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy1_ParamLimits

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy1

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy1_ParamLimits

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy1

0x3ce3,	// (0x0001927a) bg_eswt_ctrl_canvas_pane_g1

0x3ca8,	// (0x0001923f) common_borders_pane_cp2_ParamLimits

0x3ca8,	// (0x0001923f) common_borders_pane_cp2

0x3ca8,	// (0x0001923f) common_borders_pane_cp3_ParamLimits

0x3ca8,	// (0x0001923f) common_borders_pane_cp3

0x48b0,	// (0x00019e47) separator_horizontal_pane

0x48b8,	// (0x00019e4f) separator_vertical_pane

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy2_ParamLimits

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy2

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy2_ParamLimits

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy2

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy2_ParamLimits

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy2

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy2_ParamLimits

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy2

0xc3df,	// (0x00021976) common_borders_pane_cp4

0x48c1,	// (0x00019e58) separator_horizontal_pane_g1

0x48ca,	// (0x00019e61) separator_horizontal_pane_g2

0x48d3,	// (0x00019e6a) separator_horizontal_pane_g3

0x0002,

0xfbe5,	// (0x0002517c) separator_horizontal_pane_g

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy3_ParamLimits

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy3

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy3_ParamLimits

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy3

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy3_ParamLimits

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy3

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy3_ParamLimits

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy3

0xc3df,	// (0x00021976) common_borders_pane_cp5

0x48dc,	// (0x00019e73) separator_vertical_pane_g1

0x48e5,	// (0x00019e7c) separator_vertical_pane_g2

0x48ee,	// (0x00019e85) separator_vertical_pane_g3

0x0002,

0xfbec,	// (0x00025183) separator_vertical_pane_g

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy4_ParamLimits

0x4834,	// (0x00019dcb) eswt_control_pane_g1_copy4

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy4_ParamLimits

0x4841,	// (0x00019dd8) eswt_control_pane_g2_copy4

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy4_ParamLimits

0x484e,	// (0x00019de5) eswt_control_pane_g3_copy4

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy4_ParamLimits

0x485b,	// (0x00019df2) eswt_control_pane_g4_copy4

0xba4b,	// (0x00020fe2) eswt_ctrl_combo_button_pane

0xba53,	// (0x00020fea) eswt_ctrl_input_pane

0xba5b,	// (0x00020ff2) popup_choice_list_window_cp70

0xba63,	// (0x00020ffa) eswt_ctrl_input_pane_t1

0xc3df,	// (0x00021976) input_focus_pane_cp70

0x3ca8,	// (0x0001923f) bg_button_pane_cp70_ParamLimits

0x3ca8,	// (0x0001923f) bg_button_pane_cp70

0xba71,	// (0x00021008) eswt_ctrl_combo_button_pane_g1

0x4925,	// (0x00019ebc) wait_bar_pane_cp70

0x1289,	// (0x00016820) bg_popup_window_pane_cp70_ParamLimits

0x1289,	// (0x00016820) bg_popup_window_pane_cp70

0x492d,	// (0x00019ec4) popup_eswt_tasktip_window_t1

0x4943,	// (0x00019eda) wait_bar_pane_cp71_ParamLimits

0x4943,	// (0x00019eda) wait_bar_pane_cp71

0x494f,	// (0x00019ee6) grid_eswt_app_pane

0xcc1c,	// (0x000221b3) scroll_pane_cp70

0xba79,	// (0x00021010) cell_eswt_app_pane_ParamLimits

0xba79,	// (0x00021010) cell_eswt_app_pane

0xbaa3,	// (0x0002103a) cell_eswt_app_pane_g1_ParamLimits

0xbaa3,	// (0x0002103a) cell_eswt_app_pane_g1

0xbad2,	// (0x00021069) cell_eswt_app_pane_g2_ParamLimits

0xbad2,	// (0x00021069) cell_eswt_app_pane_g2

0x0001,

0xfbf3,	// (0x0002518a) cell_eswt_app_pane_g_ParamLimits

0xfbf3,	// (0x0002518a) cell_eswt_app_pane_g

0xbaf6,	// (0x0002108d) cell_eswt_app_pane_t1_ParamLimits

0xbaf6,	// (0x0002108d) cell_eswt_app_pane_t1

0x4a0d,	// (0x00019fa4) grid_highlight_pane_cp70_ParamLimits

0x4a0d,	// (0x00019fa4) grid_highlight_pane_cp70

0xd0a1,	// (0x00022638) set_content_pane_g1

0xa6da,	// (0x0001fc71) status_small_volume_pane

0x8ec0,	// (0x0001e457) status_small_volume_pane_g1

0x8ec8,	// (0x0001e45f) volume_small2_pane

0x8ed1,	// (0x0001e468) volume_small2_pane_g1

0x8eda,	// (0x0001e471) volume_small2_pane_g2

0x8ee3,	// (0x0001e47a) volume_small2_pane_g3

0x8eec,	// (0x0001e483) volume_small2_pane_g4

0x8ef5,	// (0x0001e48c) volume_small2_pane_g5

0x8efe,	// (0x0001e495) volume_small2_pane_g6

0x8f07,	// (0x0001e49e) volume_small2_pane_g7

0x8f10,	// (0x0001e4a7) volume_small2_pane_g8

0x8f19,	// (0x0001e4b0) volume_small2_pane_g9

0x8f22,	// (0x0001e4b9) volume_small2_pane_g10

0x0009,

0xfbf8,	// (0x0002518f) volume_small2_pane_g

0x409b,	// (0x00019632) fep_vkb_top_text_pane_g1_ParamLimits

0xb94d,	// (0x00020ee4) fep_vkb_top_text_pane_t1_ParamLimits

0x4324,	// (0x000198bb) popup_preview_fixed_window_g3_ParamLimits

0x4324,	// (0x000198bb) popup_preview_fixed_window_g3

0x8be9,	// (0x0001e180) popup_toolbar_trans_pane

0xb20d,	// (0x000207a4) aid_height_set_list_ParamLimits

0x262b,	// (0x00017bc2) aid_size_parent_ParamLimits

0xca39,	// (0x00021fd0) list_highlight_pane_cp2_ParamLimits

0xd0a1,	// (0x00022638) set_content_pane_g1_ParamLimits

0xb3c8,	// (0x0002095f) list_single_image_pane_ParamLimits

0xb3c8,	// (0x0002095f) list_single_image_pane

0xbb28,	// (0x000210bf) aid_size_cell_image_ParamLimits

0xbb28,	// (0x000210bf) aid_size_cell_image

0xbb35,	// (0x000210cc) grid_single_image_pane_ParamLimits

0xbb35,	// (0x000210cc) grid_single_image_pane

0xd378,	// (0x0002290f) list_single_image_pane_g1_ParamLimits

0xd378,	// (0x0002290f) list_single_image_pane_g1

0x4352,	// (0x000198e9) list_single_image_pane_g2_ParamLimits

0x4352,	// (0x000198e9) list_single_image_pane_g2

0x0001,

0xfc0d,	// (0x000251a4) list_single_image_pane_g_ParamLimits

0xfc0d,	// (0x000251a4) list_single_image_pane_g

0x4a32,	// (0x00019fc9) list_single_image_pane_t1_ParamLimits

0x4a32,	// (0x00019fc9) list_single_image_pane_t1

0xbb41,	// (0x000210d8) cell_image_list_pane_ParamLimits

0xbb41,	// (0x000210d8) cell_image_list_pane

0xbb55,	// (0x000210ec) cell_image_list_pane_g1

0xbb5e,	// (0x000210f5) cell_image_list_pane_g2

0x0001,

0xfc12,	// (0x000251a9) cell_image_list_pane_g

0xbb67,	// (0x000210fe) aid_size_cell_tb_trans_pane

0xc889,	// (0x00021e20) bg_tb_trans_pane

0xbb79,	// (0x00021110) grid_tb_trans_pane

0x1169,	// (0x00016700) bg_tb_trans_pane_g1

0x1179,	// (0x00016710) bg_tb_trans_pane_g2

0x1171,	// (0x00016708) bg_tb_trans_pane_g3

0x1189,	// (0x00016720) bg_tb_trans_pane_g4

0x1181,	// (0x00016718) bg_tb_trans_pane_g5

0x11a9,	// (0x00016740) bg_tb_trans_pane_g6

0x11a1,	// (0x00016738) bg_tb_trans_pane_g7

0x1191,	// (0x00016728) bg_tb_trans_pane_g8

0x1199,	// (0x00016730) bg_tb_trans_pane_g9

0x0008,

0xfc17,	// (0x000251ae) bg_tb_trans_pane_g

0xbb8d,	// (0x00021124) cell_toolbar_trans_pane_ParamLimits

0xbb8d,	// (0x00021124) cell_toolbar_trans_pane

0x3ce3,	// (0x0001927a) cell_toolbar_trans_pane_g1

0xb679,	// (0x00020c10) list_form2_midp_pane_t1

0xb687,	// (0x00020c1e) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x0002504b) list_form2_midp_pane_t

0x387d,	// (0x00018e14) scroll_pane_cp51_ParamLimits

0x3a86,	// (0x0001901d) form2_midp_wait_pane_g1

0x3a8f,	// (0x00019026) form2_midp_wait_pane_g2

0x3a98,	// (0x0001902f) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x00025060) form2_midp_wait_pane_g

0xc44f,	// (0x000219e6) list_highlight_pane_cp21_ParamLimits

0x3ae0,	// (0x00019077) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3aef,	// (0x00019086) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x282e,	// (0x00017dc5) list_single_2graphic_im_pane_ParamLimits

0x282e,	// (0x00017dc5) list_single_2graphic_im_pane

0xbbb3,	// (0x0002114a) list_single_2graphic_im_pane_g1_ParamLimits

0xbbb3,	// (0x0002114a) list_single_2graphic_im_pane_g1

0xbbc4,	// (0x0002115b) list_single_2graphic_im_pane_g2_ParamLimits

0xbbc4,	// (0x0002115b) list_single_2graphic_im_pane_g2

0xbbd0,	// (0x00021167) list_single_2graphic_im_pane_g3_ParamLimits

0xbbd0,	// (0x00021167) list_single_2graphic_im_pane_g3

0x0003,

0xfc2a,	// (0x000251c1) list_single_2graphic_im_pane_g_ParamLimits

0xfc2a,	// (0x000251c1) list_single_2graphic_im_pane_g

0xbbe4,	// (0x0002117b) list_single_2graphic_im_pane_t1_ParamLimits

0xbbe4,	// (0x0002117b) list_single_2graphic_im_pane_t1

0x4330,	// (0x000198c7) list_single_graphic_2heading_pane_fp_ParamLimits

0x4330,	// (0x000198c7) list_single_graphic_2heading_pane_fp

0x4389,	// (0x00019920) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4389,	// (0x00019920) list_single_graphic_2heading_pane_fp_g1

0x4346,	// (0x000198dd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4346,	// (0x000198dd) list_single_graphic_2heading_pane_fp_g2

0xd378,	// (0x0002290f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd378,	// (0x0002290f) list_single_graphic_2heading_pane_fp_g3

0x4352,	// (0x000198e9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4352,	// (0x000198e9) list_single_graphic_2heading_pane_fp_g4

0x4366,	// (0x000198fd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4366,	// (0x000198fd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb51,	// (0x000250e8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb51,	// (0x000250e8) list_single_graphic_2heading_pane_fp_g

0x4b28,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4b28,	// (0x0001a0bf) list_single_graphic_2heading_pane_fp_t1

0x43c1,	// (0x00019958) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x43c1,	// (0x00019958) list_single_graphic_2heading_pane_fp_t2

0x4b3e,	// (0x0001a0d5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4b3e,	// (0x0001a0d5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc33,	// (0x000251ca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc33,	// (0x000251ca) list_single_graphic_2heading_pane_fp_t

0x3d6f,	// (0x00019306) fep_hwr_write_pane_g5_ParamLimits

0x3d6f,	// (0x00019306) fep_hwr_write_pane_g5

0x3d7b,	// (0x00019312) fep_hwr_write_pane_g6_ParamLimits

0x3d7b,	// (0x00019312) fep_hwr_write_pane_g6

0xba2b,	// (0x00020fc2) eswt_shell_pane_ParamLimits

0x1289,	// (0x00016820) bg_popup_window_pane_cp18_ParamLimits

0x482c,	// (0x00019dc3) heading_pane_cp70

0x492d,	// (0x00019ec4) popup_eswt_tasktip_window_t1_ParamLimits

0xa780,	// (0x0001fd17) aid_touch_tab_arrow_left

0xa796,	// (0x0001fd2d) aid_touch_tab_arrow_right

0x9669,	// (0x0001ec00) title_pane_g3_ParamLimits

0x9669,	// (0x0001ec00) title_pane_g3

0xc820,	// (0x00021db7) set_value_pane_g1

0x8be9,	// (0x0001e180) popup_toolbar_trans_pane_ParamLimits

0xbb67,	// (0x000210fe) aid_size_cell_tb_trans_pane_ParamLimits

0xc889,	// (0x00021e20) bg_tb_trans_pane_ParamLimits

0xbb79,	// (0x00021110) grid_tb_trans_pane_ParamLimits

0xc593,	// (0x00021b2a) cont_note_pane_ParamLimits

0xc593,	// (0x00021b2a) cont_note_pane

0xc713,	// (0x00021caa) cont_snote2_single_text_pane_ParamLimits

0xc713,	// (0x00021caa) cont_snote2_single_text_pane

0xc713,	// (0x00021caa) cont_snote2_single_graphic_pane_ParamLimits

0xc713,	// (0x00021caa) cont_snote2_single_graphic_pane

0x18e4,	// (0x00016e7b) cont_note_wait_pane_ParamLimits

0x18e4,	// (0x00016e7b) cont_note_wait_pane

0x18e4,	// (0x00016e7b) cont_note_image_pane_ParamLimits

0x18e4,	// (0x00016e7b) cont_note_image_pane

0x4b54,	// (0x0001a0eb) popup_note2_window_g1_ParamLimits

0x4b54,	// (0x0001a0eb) popup_note2_window_g1

0xbc22,	// (0x000211b9) popup_note2_window_t1_ParamLimits

0xbc22,	// (0x000211b9) popup_note2_window_t1

0xbc67,	// (0x000211fe) popup_note2_window_t2_ParamLimits

0xbc67,	// (0x000211fe) popup_note2_window_t2

0xbcac,	// (0x00021243) popup_note2_window_t3_ParamLimits

0xbcac,	// (0x00021243) popup_note2_window_t3

0x4c54,	// (0x0001a1eb) popup_note2_window_t4_ParamLimits

0x4c54,	// (0x0001a1eb) popup_note2_window_t4

0xc617,	// (0x00021bae) popup_note2_window_t5_ParamLimits

0xc617,	// (0x00021bae) popup_note2_window_t5

0x0004,

0xfc3f,	// (0x000251d6) popup_note2_window_t_ParamLimits

0xfc3f,	// (0x000251d6) popup_note2_window_t

0x4c83,	// (0x0001a21a) popup_note2_image_window_g1_ParamLimits

0x4c83,	// (0x0001a21a) popup_note2_image_window_g1

0xbcf1,	// (0x00021288) popup_note2_image_window_g2_ParamLimits

0xbcf1,	// (0x00021288) popup_note2_image_window_g2

0x0001,

0xfc4a,	// (0x000251e1) popup_note2_image_window_g_ParamLimits

0xfc4a,	// (0x000251e1) popup_note2_image_window_g

0x4ca1,	// (0x0001a238) popup_note2_image_window_t1_ParamLimits

0x4ca1,	// (0x0001a238) popup_note2_image_window_t1

0x4cb9,	// (0x0001a250) popup_note2_image_window_t2_ParamLimits

0x4cb9,	// (0x0001a250) popup_note2_image_window_t2

0x4cd1,	// (0x0001a268) popup_note2_image_window_t3_ParamLimits

0x4cd1,	// (0x0001a268) popup_note2_image_window_t3

0x0002,

0xfc4f,	// (0x000251e6) popup_note2_image_window_t_ParamLimits

0xfc4f,	// (0x000251e6) popup_note2_image_window_t

0x18f2,	// (0x00016e89) popup_note2_wait_window_g1_ParamLimits

0x18f2,	// (0x00016e89) popup_note2_wait_window_g1

0x18fe,	// (0x00016e95) popup_note2_wait_window_g2_ParamLimits

0x18fe,	// (0x00016e95) popup_note2_wait_window_g2

0x190a,	// (0x00016ea1) popup_note2_wait_window_g3_ParamLimits

0x190a,	// (0x00016ea1) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x00024d9a) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x00024d9a) popup_note2_wait_window_g

0x4ced,	// (0x0001a284) popup_note2_wait_window_t1_ParamLimits

0x4ced,	// (0x0001a284) popup_note2_wait_window_t1

0x4d0b,	// (0x0001a2a2) popup_note2_wait_window_t2_ParamLimits

0x4d0b,	// (0x0001a2a2) popup_note2_wait_window_t2

0x4d29,	// (0x0001a2c0) popup_note2_wait_window_t3_ParamLimits

0x4d29,	// (0x0001a2c0) popup_note2_wait_window_t3

0x4d3b,	// (0x0001a2d2) popup_note2_wait_window_t4_ParamLimits

0x4d3b,	// (0x0001a2d2) popup_note2_wait_window_t4

0x0003,

0xfc56,	// (0x000251ed) popup_note2_wait_window_t_ParamLimits

0xfc56,	// (0x000251ed) popup_note2_wait_window_t

0x4d4d,	// (0x0001a2e4) wait_bar2_pane_ParamLimits

0x4d4d,	// (0x0001a2e4) wait_bar2_pane

0x4d65,	// (0x0001a2fc) popup_snote2_single_text_window_g1_ParamLimits

0x4d65,	// (0x0001a2fc) popup_snote2_single_text_window_g1

0x4d8d,	// (0x0001a324) popup_snote2_single_text_window_t1_ParamLimits

0x4d8d,	// (0x0001a324) popup_snote2_single_text_window_t1

0x4dd9,	// (0x0001a370) popup_snote2_single_text_window_t2_ParamLimits

0x4dd9,	// (0x0001a370) popup_snote2_single_text_window_t2

0x4e25,	// (0x0001a3bc) popup_snote2_single_text_window_t3_ParamLimits

0x4e25,	// (0x0001a3bc) popup_snote2_single_text_window_t3

0x4e66,	// (0x0001a3fd) popup_snote2_single_text_window_t4_ParamLimits

0x4e66,	// (0x0001a3fd) popup_snote2_single_text_window_t4

0x4e9c,	// (0x0001a433) popup_snote2_single_text_window_t5_ParamLimits

0x4e9c,	// (0x0001a433) popup_snote2_single_text_window_t5

0x0004,

0xfc5f,	// (0x000251f6) popup_snote2_single_text_window_t_ParamLimits

0xfc5f,	// (0x000251f6) popup_snote2_single_text_window_t

0xbd03,	// (0x0002129a) popup_snote2_single_graphic_window_g1_ParamLimits

0xbd03,	// (0x0002129a) popup_snote2_single_graphic_window_g1

0x4eef,	// (0x0001a486) popup_snote2_single_graphic_window_g2_ParamLimits

0x4eef,	// (0x0001a486) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6a,	// (0x00025201) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6a,	// (0x00025201) popup_snote2_single_graphic_window_g

0x4f17,	// (0x0001a4ae) popup_snote2_single_graphic_window_t1_ParamLimits

0x4f17,	// (0x0001a4ae) popup_snote2_single_graphic_window_t1

0x4f63,	// (0x0001a4fa) popup_snote2_single_graphic_window_t2_ParamLimits

0x4f63,	// (0x0001a4fa) popup_snote2_single_graphic_window_t2

0x4e25,	// (0x0001a3bc) popup_snote2_single_graphic_window_t3_ParamLimits

0x4e25,	// (0x0001a3bc) popup_snote2_single_graphic_window_t3

0x4e66,	// (0x0001a3fd) popup_snote2_single_graphic_window_t4_ParamLimits

0x4e66,	// (0x0001a3fd) popup_snote2_single_graphic_window_t4

0x4e9c,	// (0x0001a433) popup_snote2_single_graphic_window_t5_ParamLimits

0x4e9c,	// (0x0001a433) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6f,	// (0x00025206) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6f,	// (0x00025206) popup_snote2_single_graphic_window_t

0x373a,	// (0x00018cd1) clock_nsta_pane_cp2_t1

0x373a,	// (0x00018cd1) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x00025021) clock_nsta_pane_cp2_t

0xc8a8,	// (0x00021e3f) form_field_data_wide_pane_g1_ParamLimits

0xc8b4,	// (0x00021e4b) form_field_data_wide_pane_g2_ParamLimits

0xc8b4,	// (0x00021e4b) form_field_data_wide_pane_g2

0xc8c0,	// (0x00021e57) form_field_data_wide_pane_g3_ParamLimits

0xc8c0,	// (0x00021e57) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x00024bd9) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x00024bd9) form_field_data_wide_pane_g

0xb59a,	// (0x00020b31) grid_touch_3_pane_ParamLimits

0xb59a,	// (0x00020b31) grid_touch_3_pane

0xbd2b,	// (0x000212c2) cell_touch_3_pane_ParamLimits

0xbd2b,	// (0x000212c2) cell_touch_3_pane

0x3ce3,	// (0x0001927a) cell_touch_3_pane_g1

0x3ce3,	// (0x0001927a) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x000250a6) cell_touch_3_pane_g

0xc649,	// (0x00021be0) cont_query_data_pane

0xc651,	// (0x00021be8) cont_query_data_pane_cp1

0x4fdd,	// (0x0001a574) button_value_adjust_pane_cp7

0x4fe5,	// (0x0001a57c) query_popup_pane_cp3

0xcdaa,	// (0x00022341) bg_popup_sub_pane_cp22_ParamLimits

0x8364,	// (0x0001d8fb) navi_navi_volume_pane_cp2

0x8373,	// (0x0001d90a) popup_side_volume_key_window_g2

0x8382,	// (0x0001d919) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x00024c6f) popup_side_volume_key_window_g

0x8391,	// (0x0001d928) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x00024c76) popup_side_volume_key_window_t

0xa54d,	// (0x0001fae4) popup_side_volume_key_window_ParamLimits

0x9d26,	// (0x0001f2bd) list_double_graphic_pane_g4_ParamLimits

0x9d26,	// (0x0001f2bd) list_double_graphic_pane_g4

0xb3a2,	// (0x00020939) list_single_2heading_msg_pane_ParamLimits

0xb3a2,	// (0x00020939) list_single_2heading_msg_pane

0xbd74,	// (0x0002130b) list_single_2heading_msg_pane_g1_ParamLimits

0xbd74,	// (0x0002130b) list_single_2heading_msg_pane_g1

0xbd80,	// (0x00021317) list_single_2heading_msg_pane_g2_ParamLimits

0xbd80,	// (0x00021317) list_single_2heading_msg_pane_g2

0xbd93,	// (0x0002132a) list_single_2heading_msg_pane_g3_ParamLimits

0xbd93,	// (0x0002132a) list_single_2heading_msg_pane_g3

0xbd9f,	// (0x00021336) list_single_2heading_msg_pane_g4_ParamLimits

0xbd9f,	// (0x00021336) list_single_2heading_msg_pane_g4

0x0003,

0xfc7a,	// (0x00025211) list_single_2heading_msg_pane_g_ParamLimits

0xfc7a,	// (0x00025211) list_single_2heading_msg_pane_g

0xbdb7,	// (0x0002134e) list_single_2heading_msg_pane_t1_ParamLimits

0xbdb7,	// (0x0002134e) list_single_2heading_msg_pane_t1

0xbddf,	// (0x00021376) list_single_2heading_msg_pane_t2_ParamLimits

0xbddf,	// (0x00021376) list_single_2heading_msg_pane_t2

0xbe4a,	// (0x000213e1) list_single_2heading_msg_pane_t3_ParamLimits

0xbe4a,	// (0x000213e1) list_single_2heading_msg_pane_t3

0x50d4,	// (0x0001a66b) list_single_2heading_msg_pane_t4_ParamLimits

0x50d4,	// (0x0001a66b) list_single_2heading_msg_pane_t4

0x0003,

0xfc83,	// (0x0002521a) list_single_2heading_msg_pane_t_ParamLimits

0xfc83,	// (0x0002521a) list_single_2heading_msg_pane_t

0xc3fd,	// (0x00021994) title_pane_g4_ParamLimits

0xc3fd,	// (0x00021994) title_pane_g4

0xe36e,	// (0x00023905) title_pane_stacon_g3_ParamLimits

0xe36e,	// (0x00023905) title_pane_stacon_g3

0x4aeb,	// (0x0001a082) list_single_2graphic_im_pane_g4_ParamLimits

0x4aeb,	// (0x0001a082) list_single_2graphic_im_pane_g4

0xb0a0,	// (0x00020637) popup_side_volume_key_window_cp

0x2c38,	// (0x000181cf) main_idle_act2_pane_t1

0xe881,	// (0x00023e18) toolbar_button_pane_g10

0x9be1,	// (0x0001f178) popup_toolbar_window_cp1

0x372b,	// (0x00018cc2) clock_nsta_pane_cp_t1

0x372b,	// (0x00018cc2) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x0002501c) clock_nsta_pane_cp_t

0x8364,	// (0x0001d8fb) navi_navi_volume_pane_cp2_ParamLimits

0xe542,	// (0x00023ad9) popup_side_volume_key_window_g1_ParamLimits

0x8373,	// (0x0001d90a) popup_side_volume_key_window_g2_ParamLimits

0x8382,	// (0x0001d919) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x00024c6f) popup_side_volume_key_window_g_ParamLimits

0xeb65,	// (0x000240fc) fep_hwr_aid_pane

0xec0c,	// (0x000241a3) bg_fep_hwr_top_pane_g4_ParamLimits

0x3d3f,	// (0x000192d6) fep_hwr_top_pane_g1_ParamLimits

0x3d51,	// (0x000192e8) fep_hwr_top_pane_g2_ParamLimits

0xec2c,	// (0x000241c3) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x00025071) fep_hwr_top_pane_g_ParamLimits

0xec41,	// (0x000241d8) fep_hwr_top_text_pane_ParamLimits

0x20ee,	// (0x00017685) aid_touch_tab_arrow_arrow_2

0x20f7,	// (0x0001768e) aid_touch_tab_arrow_left_2

0xeb79,	// (0x00024110) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xebb0,	// (0x00024147) fep_hwr_prediction_pane

0x3eaa,	// (0x00019441) fep_vkb_prediction_pane

0xb92d,	// (0x00020ec4) fep_vkb_side_pane_g3_ParamLimits

0xb92d,	// (0x00020ec4) fep_vkb_side_pane_g3

0xed45,	// (0x000242dc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xedb1,	// (0x00024348) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xedbe,	// (0x00024355) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb89,	// (0x00025120) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xee82,	// (0x00024419) fep_hwr_prediction_pane_g1

0xee8c,	// (0x00024423) fep_hwr_prediction_pane_g2

0xee94,	// (0x0002442b) fep_hwr_prediction_pane_g3

0xee9c,	// (0x00024433) fep_hwr_prediction_pane_g4

0x0003,

0xfc8c,	// (0x00025223) fep_hwr_prediction_pane_g

0x50f9,	// (0x0001a690) fep_vkb_prediction_pane_g1

0x5103,	// (0x0001a69a) fep_vkb_prediction_pane_g2

0x510b,	// (0x0001a6a2) fep_vkb_prediction_pane_g3

0x5113,	// (0x0001a6aa) fep_vkb_prediction_pane_g4

0x0003,

0xfc95,	// (0x0002522c) fep_vkb_prediction_pane_g

0x8dbf,	// (0x0001e356) slider_set_pane_g3

0x8dd3,	// (0x0001e36a) slider_set_pane_g4

0x8deb,	// (0x0001e382) slider_set_pane_g5

0x8dbf,	// (0x0001e356) slider_set_pane_g6

0x8e01,	// (0x0001e398) slider_set_pane_g7

0x278c,	// (0x00017d23) slider_form_pane_g3

0x2795,	// (0x00017d2c) slider_form_pane_g4

0x279d,	// (0x00017d34) slider_form_pane_g5

0x278c,	// (0x00017d23) slider_form_pane_g6

0xb358,	// (0x000208ef) slider_form_pane_g7

0x2f1c,	// (0x000184b3) slider_set_pane_vc_g3

0x2f25,	// (0x000184bc) slider_set_pane_vc_g4

0x2f2e,	// (0x000184c5) slider_set_pane_vc_g5

0x2f1c,	// (0x000184b3) slider_set_pane_vc_g6

0x2f37,	// (0x000184ce) slider_set_pane_vc_g7

0x33e9,	// (0x00018980) slider_form_pane_vc_g1

0x33f2,	// (0x00018989) slider_form_pane_vc_g2

0x33fb,	// (0x00018992) slider_form_pane_vc_g3

0x33e9,	// (0x00018980) slider_form_pane_vc_g4

0x3404,	// (0x0001899b) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x00024fee) slider_form_pane_vc_g

0xe2f5,	// (0x0002388c) main_idle_act3_pane

0x511b,	// (0x0001a6b2) ai3_links_pane

0xbeb8,	// (0x0002144f) popup_ai3_data_window_ParamLimits

0xbeb8,	// (0x0002144f) popup_ai3_data_window

0xc3df,	// (0x00021976) grid_ai3_links_pane

0xbed0,	// (0x00021467) cell_ai3_links_pane_ParamLimits

0xbed0,	// (0x00021467) cell_ai3_links_pane

0x5154,	// (0x0001a6eb) bg_popup_sub_pane_cp11

0x5161,	// (0x0001a6f8) cell_ai3_links_pane_g1

0xc3df,	// (0x00021976) bg_popup_sub_pane_cp12

0x5186,	// (0x0001a71d) heading_ai3_data_pane

0x518e,	// (0x0001a725) list_ai3_gene_pane

0x519a,	// (0x0001a731) popup_ai3_data_window_g1

0x51a2,	// (0x0001a739) heading_ai3_data_pane_g1

0x51aa,	// (0x0001a741) heading_ai3_data_pane_t1

0xbeea,	// (0x00021481) list_double_ai3_gene_pane_ParamLimits

0xbeea,	// (0x00021481) list_double_ai3_gene_pane

0x51c5,	// (0x0001a75c) list_single_ai3_gene_pane_ParamLimits

0x51c5,	// (0x0001a75c) list_single_ai3_gene_pane

0x3ca8,	// (0x0001923f) list_highlight_pane_cp7_ParamLimits

0x3ca8,	// (0x0001923f) list_highlight_pane_cp7

0x51d2,	// (0x0001a769) list_single_a13_gene_pane_t1_ParamLimits

0x51d2,	// (0x0001a769) list_single_a13_gene_pane_t1

0x51e9,	// (0x0001a780) list_single_ai3_gene_pane_g1

0x51f2,	// (0x0001a789) list_single_ai3_gene_pane_g2

0x0001,

0xfc9e,	// (0x00025235) list_single_ai3_gene_pane_g

0x51fa,	// (0x0001a791) list_double_ai3_gene_pane_g1_ParamLimits

0x51fa,	// (0x0001a791) list_double_ai3_gene_pane_g1

0xbef7,	// (0x0002148e) list_double_ai3_gene_pane_t1_ParamLimits

0xbef7,	// (0x0002148e) list_double_ai3_gene_pane_t1

0x5222,	// (0x0001a7b9) list_double_ai3_gene_pane_t2_ParamLimits

0x5222,	// (0x0001a7b9) list_double_ai3_gene_pane_t2

0x5237,	// (0x0001a7ce) list_double_ai3_gene_pane_t3_ParamLimits

0x5237,	// (0x0001a7ce) list_double_ai3_gene_pane_t3

0x0002,

0xfca3,	// (0x0002523a) list_double_ai3_gene_pane_t_ParamLimits

0xfca3,	// (0x0002523a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4ff6,	// (0x0001a58d) aid_size_min_col_2

0xbd5e,	// (0x000212f5) aid_size_min_msg_ParamLimits

0xbd5e,	// (0x000212f5) aid_size_min_msg

0xb941,	// (0x00020ed8) fep_vkb_top_text_pane_g2_ParamLimits

0xb941,	// (0x00020ed8) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x000250a1) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x000250a1) fep_vkb_top_text_pane_g

0xe2f5,	// (0x0002388c) main_hc_apps_shell_pane

0x5254,	// (0x0001a7eb) grid_hc_apps_pane_ParamLimits

0x5254,	// (0x0001a7eb) grid_hc_apps_pane

0x5266,	// (0x0001a7fd) list_hc_apps_pane

0x526e,	// (0x0001a805) scroll_pane_cp37_ParamLimits

0x526e,	// (0x0001a805) scroll_pane_cp37

0xbf13,	// (0x000214aa) cell_hc_apps_pane_ParamLimits

0xbf13,	// (0x000214aa) cell_hc_apps_pane

0xbfd1,	// (0x00021568) cell_hc_apps_pane_g1_ParamLimits

0xbfd1,	// (0x00021568) cell_hc_apps_pane_g1

0x5358,	// (0x0001a8ef) cell_hc_apps_pane_g2_ParamLimits

0x5358,	// (0x0001a8ef) cell_hc_apps_pane_g2

0x5374,	// (0x0001a90b) cell_hc_apps_pane_g3_ParamLimits

0x5374,	// (0x0001a90b) cell_hc_apps_pane_g3

0x0002,

0xfcaa,	// (0x00025241) cell_hc_apps_pane_g_ParamLimits

0xfcaa,	// (0x00025241) cell_hc_apps_pane_g

0xbffd,	// (0x00021594) cell_hc_apps_pane_t1_ParamLimits

0xbffd,	// (0x00021594) cell_hc_apps_pane_t1

0xc593,	// (0x00021b2a) grid_highlight_pane_cp10_ParamLimits

0xc593,	// (0x00021b2a) grid_highlight_pane_cp10

0xc03b,	// (0x000215d2) list_single_hc_apps_pane_ParamLimits

0xc03b,	// (0x000215d2) list_single_hc_apps_pane

0xc06b,	// (0x00021602) list_single_hc_apps_pane_g1

0xc084,	// (0x0002161b) list_single_hc_apps_pane_g2

0x0001,

0xfcb1,	// (0x00025248) list_single_hc_apps_pane_g

0xc09d,	// (0x00021634) list_single_hc_apps_pane_g2_copy1

0xc0b9,	// (0x00021650) list_single_hc_apps_pane_t1

0xc44f,	// (0x000219e6) bg_set_opt_pane_cp_ParamLimits

0x82be,	// (0x0001d855) setting_slider_pane_t1_ParamLimits

0x82d7,	// (0x0001d86e) setting_slider_pane_t2_ParamLimits

0x82f1,	// (0x0001d888) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00024ad0) setting_slider_pane_t_ParamLimits

0x8309,	// (0x0001d8a0) slider_set_pane_ParamLimits

0xe746,	// (0x00023cdd) control_pane_g5_ParamLimits

0xe746,	// (0x00023cdd) control_pane_g5

0xb1da,	// (0x00020771) slider_set_pane_g1_ParamLimits

0xea53,	// (0x00023fea) slider_set_pane_g2_ParamLimits

0x8dbf,	// (0x0001e356) slider_set_pane_g3_ParamLimits

0x8dd3,	// (0x0001e36a) slider_set_pane_g4_ParamLimits

0x8deb,	// (0x0001e382) slider_set_pane_g5_ParamLimits

0x8dbf,	// (0x0001e356) slider_set_pane_g6_ParamLimits

0x8e01,	// (0x0001e398) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x00024eb6) slider_set_pane_g_ParamLimits

0xd04c,	// (0x000225e3) navi_icon_text_pane_ParamLimits

0xa749,	// (0x0001fce0) aid_fill_nsta_2_ParamLimits

0xa780,	// (0x0001fd17) aid_touch_tab_arrow_left_ParamLimits

0xa796,	// (0x0001fd2d) aid_touch_tab_arrow_right_ParamLimits

0xa831,	// (0x0001fdc8) clock_nsta_pane_ParamLimits

0x20d0,	// (0x00017667) navi_icon_pane_g1_ParamLimits

0x20dc,	// (0x00017673) navi_text_pane_t1_ParamLimits

0x383b,	// (0x00018dd2) navi_icon_text_pane_g1_ParamLimits

0x3847,	// (0x00018dde) navi_icon_text_pane_t1_ParamLimits

0xc06b,	// (0x00021602) list_single_hc_apps_pane_g1_ParamLimits

0xc084,	// (0x0002161b) list_single_hc_apps_pane_g2_ParamLimits

0xfcb1,	// (0x00025248) list_single_hc_apps_pane_g_ParamLimits

0xc09d,	// (0x00021634) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc0b9,	// (0x00021650) list_single_hc_apps_pane_t1_ParamLimits

0x81e6,	// (0x0001d77d) popup_toolbar2_fixed_window_ParamLimits

0x81e6,	// (0x0001d77d) popup_toolbar2_fixed_window

0x8bdf,	// (0x0001e176) popup_toolbar2_float_window

0xc3df,	// (0x00021976) bg_popup_sub_pane_cp27

0x54b5,	// (0x0001aa4c) grid_toolbar2_float_pane

0xc3df,	// (0x00021976) bg_popup_sub_pane_cp26

0x54b5,	// (0x0001aa4c) grid_toolbar2_fixed_pane

0xc0e7,	// (0x0002167e) cell_toolbar2_fixed_pane_ParamLimits

0xc0e7,	// (0x0002167e) cell_toolbar2_fixed_pane

0xc101,	// (0x00021698) cell_toolbar2_fixed_pane_g1

0x10bb,	// (0x00016652) toolbar2_fixed_button_pane

0x1169,	// (0x00016700) toolbar2_fixed_button_pane_g1

0x1179,	// (0x00016710) toolbar2_fixed_button_pane_g2

0x1171,	// (0x00016708) toolbar2_fixed_button_pane_g3

0x1189,	// (0x00016720) toolbar2_fixed_button_pane_g4

0x1181,	// (0x00016718) toolbar2_fixed_button_pane_g5

0x1191,	// (0x00016728) toolbar2_fixed_button_pane_g6

0x1199,	// (0x00016730) toolbar2_fixed_button_pane_g7

0x11a9,	// (0x00016740) toolbar2_fixed_button_pane_g8

0x11a1,	// (0x00016738) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x00024db8) toolbar2_fixed_button_pane_g

0x54d6,	// (0x0001aa6d) cell_toolbar2_float_pane_ParamLimits

0x54d6,	// (0x0001aa6d) cell_toolbar2_float_pane

0x54e7,	// (0x0001aa7e) cell_toolbar2_float_pane_g1

0x10bb,	// (0x00016652) toolbar2_fixed_button_pane_cp

0xb829,	// (0x00020dc0) fep_vkb_accented_list_pane_ParamLimits

0xb829,	// (0x00020dc0) fep_vkb_accented_list_pane

0xed25,	// (0x000242bc) bg_popup_fep_shadow_pane_g9

0xd19b,	// (0x00022732) bg_popup_fep_shadow_pane_cp3

0xca10,	// (0x00021fa7) list_accented_list_pane

0x54f0,	// (0x0001aa87) list_single_accented_list_pane_ParamLimits

0x54f0,	// (0x0001aa87) list_single_accented_list_pane

0xd19b,	// (0x00022732) list_highlight_pane_cp10

0x5501,	// (0x0001aa98) list_single_accented_list_pane_t1

0x8b09,	// (0x0001e0a0) popup_slider_window_ParamLimits

0x8b09,	// (0x0001e0a0) popup_slider_window

0x4fed,	// (0x0001a584) aid_indentation_list_msg

0xc1f2,	// (0x00021789) bg_popup_window_pane_cp19

0x5627,	// (0x0001abbe) popup_slider_window_g1

0x5643,	// (0x0001abda) popup_slider_window_g2

0x565f,	// (0x0001abf6) popup_slider_window_g3

0x0005,

0xfcb6,	// (0x0002524d) popup_slider_window_g

0x56c5,	// (0x0001ac5c) popup_slider_window_t1

0x5739,	// (0x0001acd0) small_volume_slider_vertical_pane

0x3ce3,	// (0x0001927a) small_volume_slider_vertical_pane_g1

0x3ce3,	// (0x0001927a) small_volume_slider_vertical_pane_g2

0x5755,	// (0x0001acec) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc8,	// (0x0002525f) small_volume_slider_vertical_pane_g

0x7fe5,	// (0x0001d57c) area_side_right_pane_ParamLimits

0x7fe5,	// (0x0001d57c) area_side_right_pane

0x8f2b,	// (0x0001e4c2) aid_size_side_button_ParamLimits

0x8f2b,	// (0x0001e4c2) aid_size_side_button

0x8f44,	// (0x0001e4db) grid_sctrl_middle_pane_ParamLimits

0x8f44,	// (0x0001e4db) grid_sctrl_middle_pane

0xeead,	// (0x00024444) sctrl_sk_bottom_pane

0xeebe,	// (0x00024455) sctrl_sk_top_pane

0xeed0,	// (0x00024467) aid_touch_sctrl_top

0xeedd,	// (0x00024474) bg_sctrl_sk_pane_ParamLimits

0xeedd,	// (0x00024474) bg_sctrl_sk_pane

0xeeeb,	// (0x00024482) sctrl_sk_top_pane_g1

0xeef8,	// (0x0002448f) sctrl_sk_top_pane_t1

0xeed0,	// (0x00024467) aid_touch_sctrl_bottom

0xeedd,	// (0x00024474) bg_sctrl_sk_pane_cp_ParamLimits

0xeedd,	// (0x00024474) bg_sctrl_sk_pane_cp

0xef13,	// (0x000244aa) sctrl_sk_bottom_pane_g1

0xeef8,	// (0x0002448f) sctrl_sk_bottom_pane_t1

0x8f5e,	// (0x0001e4f5) cell_sctrl_middle_pane_ParamLimits

0x8f5e,	// (0x0001e4f5) cell_sctrl_middle_pane

0x8f6f,	// (0x0001e506) aid_touch_sctrl_middle_ParamLimits

0x8f6f,	// (0x0001e506) aid_touch_sctrl_middle

0x8f7c,	// (0x0001e513) bg_sctrl_middle_pane_ParamLimits

0x8f7c,	// (0x0001e513) bg_sctrl_middle_pane

0xef1c,	// (0x000244b3) cell_sctrl_middle_pane_g1_ParamLimits

0xef1c,	// (0x000244b3) cell_sctrl_middle_pane_g1

0x8f8a,	// (0x0001e521) cell_sctrl_middle_pane_g2_ParamLimits

0x8f8a,	// (0x0001e521) cell_sctrl_middle_pane_g2

0x0001,

0xfcd4,	// (0x0002526b) cell_sctrl_middle_pane_g_ParamLimits

0xfcd4,	// (0x0002526b) cell_sctrl_middle_pane_g

0x1169,	// (0x00016700) bg_sctrl_middle_pane_g1

0x1171,	// (0x00016708) bg_sctrl_middle_pane_g2

0x1179,	// (0x00016710) bg_sctrl_middle_pane_g3

0x1181,	// (0x00016718) bg_sctrl_middle_pane_g4

0x1189,	// (0x00016720) bg_sctrl_middle_pane_g5

0x1191,	// (0x00016728) bg_sctrl_middle_pane_g6

0x1199,	// (0x00016730) bg_sctrl_middle_pane_g7

0x11a1,	// (0x00016738) bg_sctrl_middle_pane_g8

0x0007,

0xfcd9,	// (0x00025270) bg_sctrl_middle_pane_g

0x11a9,	// (0x00016740) bg_sctrl_middle_pane_g8_copy1

0x1169,	// (0x00016700) bg_sctrl_sk_pane_g1

0x1179,	// (0x00016710) bg_sctrl_sk_pane_g2

0x1171,	// (0x00016708) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x00024db8) bg_sctrl_sk_pane_g

0xc761,	// (0x00021cf8) aid_size_touch_scroll_bar

0x1189,	// (0x00016720) bg_sctrl_sk_pane_g4

0x1181,	// (0x00016718) bg_sctrl_sk_pane_g5

0x1191,	// (0x00016728) bg_sctrl_sk_pane_g6

0x1199,	// (0x00016730) bg_sctrl_sk_pane_g7

0x11a9,	// (0x00016740) bg_sctrl_sk_pane_g8

0x11a1,	// (0x00016738) bg_sctrl_sk_pane_g9

0xe791,	// (0x00023d28) popup_fep_china_hwr2_fs_candidate_window

0x85cf,	// (0x0001db66) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x85cf,	// (0x0001db66) popup_fep_china_hwr2_fs_control_window

0xed45,	// (0x000242dc) sctrl_sk_top_pane_g2

0x0001,

0xfccf,	// (0x00025266) sctrl_sk_top_pane_g

0xc288,	// (0x0002181f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc288,	// (0x0002181f) aid_fep_china_hwr2_fs_cell

0xc29c,	// (0x00021833) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc29c,	// (0x00021833) bg_popup_fep_shadow_pane_cp4

0xc2b3,	// (0x0002184a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc2b3,	// (0x0002184a) bg_popup_fep_shadow_pane_cp5

0xc2c5,	// (0x0002185c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc2c5,	// (0x0002185c) popup_fep_china_hwr2_fs_control_bar_grid

0xd384,	// (0x0002291b) popup_fep_china_hwr2_fs_control_funtion_grid

0x57b1,	// (0x0001ad48) aid_fep_china_hwr2_fs_candi_cell

0xc3df,	// (0x00021976) bg_popup_fep_shadow_pane_cp6

0x57bb,	// (0x0001ad52) popup_fep_china_hwr2_fs_candidate_grid

0xc2d9,	// (0x00021870) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc2d9,	// (0x00021870) cell_fep_china_hwr2_fs_funtion_grid

0x3ce3,	// (0x0001927a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x57dd,	// (0x0001ad74) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x57dd,	// (0x0001ad74) cell_fep_china_hwr2_fs_funtion_grid_g1

0x57eb,	// (0x0001ad82) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x57eb,	// (0x0001ad82) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcea,	// (0x00025281) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcea,	// (0x00025281) cell_fep_china_hwr2_fs_funtion_grid_g

0xc2f1,	// (0x00021888) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc2f1,	// (0x00021888) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc306,	// (0x0002189d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc306,	// (0x0002189d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcef,	// (0x00025286) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcef,	// (0x00025286) cell_fep_china_hwr2_fs_funtion_grid_t

0x5832,	// (0x0001adc9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x583a,	// (0x0001add1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5842,	// (0x0001add9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf4,	// (0x0002528b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x584a,	// (0x0001ade1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x584a,	// (0x0001ade1) cell_fep_china_hwr2_fs_candidate_grid

0x5863,	// (0x0001adfa) popup_fep_china_hwr2_fs_candidate_grid_g20

0x586b,	// (0x0001ae02) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3ce3,	// (0x0001927a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3ce3,	// (0x0001927a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x000250a6) cell_fep_china_hwr2_fs_candidate_grid_g

0x5873,	// (0x0001ae0a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0d34,	// (0x000162cb) clock_nsta_pane_cp_24_ParamLimits

0x0d34,	// (0x000162cb) clock_nsta_pane_cp_24

0x0db2,	// (0x00016349) indicator_nsta_pane_cp_24_ParamLimits

0x0db2,	// (0x00016349) indicator_nsta_pane_cp_24

0x1f4c,	// (0x000174e3) heading_pane_g1

0x0001,

0xf886,	// (0x00024e1d) heading_pane_g

0x2a81,	// (0x00018018) grid_sct_catagory_button_pane

0x2ab1,	// (0x00018048) scroll_pane_cp5_ParamLimits

0x3889,	// (0x00018e20) button_value_adjust_pane_cp5_ParamLimits

0x3889,	// (0x00018e20) button_value_adjust_pane_cp5

0x3983,	// (0x00018f1a) form2_midp_time_pane_ParamLimits

0x5881,	// (0x0001ae18) cell_sct_catagory_button_pane_ParamLimits

0x5881,	// (0x0001ae18) cell_sct_catagory_button_pane

0x3ca8,	// (0x0001923f) bg_button_pane_cp01_ParamLimits

0x3ca8,	// (0x0001923f) bg_button_pane_cp01

0x3ce3,	// (0x0001927a) cell_sct_catagory_button_pane_g1

0x8b82,	// (0x0001e119) popup_tb_extension_window

0xc322,	// (0x000218b9) aid_size_cell_ext_ParamLimits

0xc322,	// (0x000218b9) aid_size_cell_ext

0xc713,	// (0x00021caa) bg_tb_trans_pane_cp1_ParamLimits

0xc713,	// (0x00021caa) bg_tb_trans_pane_cp1

0xc348,	// (0x000218df) grid_tb_ext_pane_ParamLimits

0xc348,	// (0x000218df) grid_tb_ext_pane

0xc387,	// (0x0002191e) cell_tb_ext_pane_ParamLimits

0xc387,	// (0x0002191e) cell_tb_ext_pane

0xd38c,	// (0x00022923) cell_tb_ext_pane_g1_ParamLimits

0xd38c,	// (0x00022923) cell_tb_ext_pane_g1

0x5917,	// (0x0001aeae) cell_tb_ext_pane_t1

0xc593,	// (0x00021b2a) list_highlight_pane_cp11_ParamLimits

0xc593,	// (0x00021b2a) list_highlight_pane_cp11

0x81fb,	// (0x0001d792) popup_uni_indicator_window_ParamLimits

0x81fb,	// (0x0001d792) popup_uni_indicator_window

0xc889,	// (0x00021e20) bg_popup_sub_pane_cp14

0xd3a9,	// (0x00022940) list_uniindi_pane

0xd3b5,	// (0x0002294c) uniindi_top_pane

0xc593,	// (0x00021b2a) bg_uniindi_top_pane

0xd3d4,	// (0x0002296b) uniindi_top_pane_g1

0xd3ea,	// (0x00022981) uniindi_top_pane_g2

0x0003,

0xfcfb,	// (0x00025292) uniindi_top_pane_g

0xd407,	// (0x0002299e) uniindi_top_pane_t1

0x59c8,	// (0x0001af5f) list_single_uniindi_pane_ParamLimits

0x59c8,	// (0x0001af5f) list_single_uniindi_pane

0x3ce3,	// (0x0001927a) bg_uniindi_top_pane_g1

0x59db,	// (0x0001af72) list_single_uniindi_pane_g1

0x59ee,	// (0x0001af85) list_single_uniindi_pane_t1

0xe2f5,	// (0x0002388c) control_bg_pane

0x5a13,	// (0x0001afaa) bg_sctrl_sk_pane_cp1

0x5a1c,	// (0x0001afb3) bg_sctrl_sk_pane_cp2

0x5a25,	// (0x0001afbc) control_bg_pane_g1

0x5a2e,	// (0x0001afc5) control_bg_pane_g2

0x0001,

0xfd04,	// (0x0002529b) control_bg_pane_g

0x36cf,	// (0x00018c66) cell_indicator_nsta_pane_g1_ParamLimits

0xb5d7,	// (0x00020b6e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x0002500a) cell_indicator_nsta_pane_g_ParamLimits

0x3a0b,	// (0x00018fa2) form2_midp_time_pane_t1_ParamLimits

0xe783,	// (0x00023d1a) main_idle_act4_pane_ParamLimits

0xe783,	// (0x00023d1a) main_idle_act4_pane

0x8b82,	// (0x0001e119) popup_tb_extension_window_ParamLimits

0xc36d,	// (0x00021904) tb_ext_find_pane_ParamLimits

0xc36d,	// (0x00021904) tb_ext_find_pane

0x5a37,	// (0x0001afce) ai_gene_pane_1_cp1

0xd21c,	// (0x000227b3) ai_gene_pane_2_cp1

0xd431,	// (0x000229c8) list_single_idle_plugin_calendar_pane

0x5a48,	// (0x0001afdf) list_single_idle_plugin_notification_pane

0x5a51,	// (0x0001afe8) list_single_idle_plugin_player_pane

0xd43a,	// (0x000229d1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd43a,	// (0x000229d1) list_single_idle_plugin_shortcut_pane

0xd462,	// (0x000229f9) main_idle_act4_pane_t1

0xd479,	// (0x00022a10) main_idle_act4_pane_t2

0x0001,

0xfd09,	// (0x000252a0) main_idle_act4_pane_t

0xd490,	// (0x00022a27) middle_sk_idle_act4_pane_ParamLimits

0xd490,	// (0x00022a27) middle_sk_idle_act4_pane

0xd4ac,	// (0x00022a43) popup_clock_digital_analogue_window_cp2

0xd4d8,	// (0x00022a6f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd4d8,	// (0x00022a6f) shortcut_wheel_idle_act4_pane

0x3ce3,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g1

0x3ce3,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g2

0x3ce3,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g3

0x3ce3,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g4

0x3ce3,	// (0x0001927a) shortcut_wheel_idle_act4_pane_g5

0x5ae4,	// (0x0001b07b) shortcut_wheel_idle_act4_pane_g6

0x5aec,	// (0x0001b083) shortcut_wheel_idle_act4_pane_g7

0x5af4,	// (0x0001b08b) shortcut_wheel_idle_act4_pane_g8

0x5afc,	// (0x0001b093) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0e,	// (0x000252a5) shortcut_wheel_idle_act4_pane_g

0xc3af,	// (0x00021946) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3af,	// (0x00021946) middle_sk_idle_act4_pane_g1

0xd555,	// (0x00022aec) middle_sk_idle_act4_pane_g2_ParamLimits

0xd555,	// (0x00022aec) middle_sk_idle_act4_pane_g2

0x0001,

0xfd31,	// (0x000252c8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd31,	// (0x000252c8) middle_sk_idle_act4_pane_g

0xd56d,	// (0x00022b04) middle_sk_idle_act4_pane_t1_ParamLimits

0xd56d,	// (0x00022b04) middle_sk_idle_act4_pane_t1

0xd59c,	// (0x00022b33) grid_ai_shortcut_pane_ParamLimits

0xd59c,	// (0x00022b33) grid_ai_shortcut_pane

0xd5b9,	// (0x00022b50) list_highlight_pane_cp16_ParamLimits

0xd5b9,	// (0x00022b50) list_highlight_pane_cp16

0xd5c6,	// (0x00022b5d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd5c6,	// (0x00022b5d) list_single_idle_plugin_shortcut_pane_g1

0xd5d2,	// (0x00022b69) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd5d2,	// (0x00022b69) list_single_idle_plugin_shortcut_pane_g2

0xd5ee,	// (0x00022b85) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd5ee,	// (0x00022b85) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd36,	// (0x000252cd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd36,	// (0x000252cd) list_single_idle_plugin_shortcut_pane_g

0xd603,	// (0x00022b9a) cell_ai_shortcut_pane_ParamLimits

0xd603,	// (0x00022b9a) cell_ai_shortcut_pane

0xd619,	// (0x00022bb0) cell_ai_shortcut_pane_g1_ParamLimits

0xd619,	// (0x00022bb0) cell_ai_shortcut_pane_g1

0x5a37,	// (0x0001afce) ai_gene_pane_1_cp2

0x5c2c,	// (0x0001b1c3) ai_gene_pane_2_cp2

0x5c34,	// (0x0001b1cb) list_highlight_pane_cp15

0xd63b,	// (0x00022bd2) list_single_idle_plugin_calendar_pane_g1

0x5c34,	// (0x0001b1cb) list_highlight_pane_cp17

0x5c45,	// (0x0001b1dc) list_single_idle_plugin_calendar_pane_g1_copy1

0x5c4d,	// (0x0001b1e4) list_single_idle_plugin_player_pane_g1

0x2cda,	// (0x00018271) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3d,	// (0x000252d4) list_single_idle_plugin_player_pane_g

0x5c55,	// (0x0001b1ec) list_single_idle_plugin_player_pane_t1

0x5c63,	// (0x0001b1fa) list_single_idle_plugin_player_pane_t2

0x5c71,	// (0x0001b208) list_single_idle_plugin_player_pane_t3

0x5c7f,	// (0x0001b216) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd42,	// (0x000252d9) list_single_idle_plugin_player_pane_t

0x5c8d,	// (0x0001b224) wait_bar_pane_cp15

0x5c95,	// (0x0001b22c) grid_ai_notification_pane

0x2cda,	// (0x00018271) list_single_idle_plugin_notification_pane_g1

0xd643,	// (0x00022bda) cell_ai_notification_pane_ParamLimits

0xd643,	// (0x00022bda) cell_ai_notification_pane

0x5cab,	// (0x0001b242) cell_ai_notification_pane_g1

0x5cb3,	// (0x0001b24a) cell_ai_notification_pane_t1

0xd650,	// (0x00022be7) tb_ext_find_button_pane

0xd658,	// (0x00022bef) tb_ext_find_pane_g1

0xd660,	// (0x00022bf7) tb_ext_find_pane_t1

0xcd49,	// (0x000222e0) tb_ext_find_button_pane_g1

0xd66e,	// (0x00022c05) tb_ext_find_button_pane_g2

0x0001,

0xfd4b,	// (0x000252e2) tb_ext_find_button_pane_g

0xd462,	// (0x000229f9) main_idle_act4_pane_t1_ParamLimits

0xd479,	// (0x00022a10) main_idle_act4_pane_t2_ParamLimits

0xfd09,	// (0x000252a0) main_idle_act4_pane_t_ParamLimits

0xd4ac,	// (0x00022a43) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd4c4,	// (0x00022a5b) sat_plugin_idle_act4_pane_ParamLimits

0xd4c4,	// (0x00022a5b) sat_plugin_idle_act4_pane

0xd677,	// (0x00022c0e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd677,	// (0x00022c0e) sat_plugin_idle_act4_pane_t1

0xd68f,	// (0x00022c26) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd68f,	// (0x00022c26) sat_plugin_idle_act4_pane_t2

0xd6a7,	// (0x00022c3e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd6a7,	// (0x00022c3e) sat_plugin_idle_act4_pane_t3

0xd6bf,	// (0x00022c56) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6bf,	// (0x00022c56) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd50,	// (0x000252e7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd50,	// (0x000252e7) sat_plugin_idle_act4_pane_t

0x8176,	// (0x0001d70d) popup_battery_window_ParamLimits

0x8176,	// (0x0001d70d) popup_battery_window

0xc593,	// (0x00021b2a) bg_popup_sub_pane_cp25_ParamLimits

0xc593,	// (0x00021b2a) bg_popup_sub_pane_cp25

0x5d34,	// (0x0001b2cb) popup_battery_window_g1_ParamLimits

0x5d34,	// (0x0001b2cb) popup_battery_window_g1

0x5d40,	// (0x0001b2d7) popup_battery_window_t1_ParamLimits

0x5d40,	// (0x0001b2d7) popup_battery_window_t1

0x5d52,	// (0x0001b2e9) popup_battery_window_t2_ParamLimits

0x5d52,	// (0x0001b2e9) popup_battery_window_t2

0x0001,

0xfd59,	// (0x000252f0) popup_battery_window_t_ParamLimits

0xfd59,	// (0x000252f0) popup_battery_window_t

0xa5a1,	// (0x0001fb38) midp_canvas_pane_ParamLimits

0xa613,	// (0x0001fbaa) midp_keypad_pane_ParamLimits

0xa613,	// (0x0001fbaa) midp_keypad_pane

0xca39,	// (0x00021fd0) main_midp_pane_ParamLimits

0xb5e4,	// (0x00020b7b) signal_pane_g2_cp_ParamLimits

0xd6d7,	// (0x00022c6e) aid_size_cell_midp_keypad_ParamLimits

0xd6d7,	// (0x00022c6e) aid_size_cell_midp_keypad

0xd6f5,	// (0x00022c8c) midp_keyp_game_grid_pane_ParamLimits

0xd6f5,	// (0x00022c8c) midp_keyp_game_grid_pane

0xd71c,	// (0x00022cb3) midp_keyp_rocker_pane_ParamLimits

0xd71c,	// (0x00022cb3) midp_keyp_rocker_pane

0xd76d,	// (0x00022d04) midp_keyp_sk_left_pane_ParamLimits

0xd76d,	// (0x00022d04) midp_keyp_sk_left_pane

0xd7c1,	// (0x00022d58) midp_keyp_sk_right_pane_ParamLimits

0xd7c1,	// (0x00022d58) midp_keyp_sk_right_pane

0xc3df,	// (0x00021976) bg_button_pane_cp03

0xd815,	// (0x00022dac) midp_keyp_sk_left_pane_g1

0xc3df,	// (0x00021976) bg_button_pane_cp04

0xd815,	// (0x00022dac) midp_keyp_sk_right_pane_g1

0x3ce3,	// (0x0001927a) midp_keyp_rocker_pane_g1

0xd81e,	// (0x00022db5) keyp_game_cell_pane_ParamLimits

0xd81e,	// (0x00022db5) keyp_game_cell_pane

0xc3df,	// (0x00021976) bg_button_pane_cp02

0xd842,	// (0x00022dd9) keyp_game_cell_pane_g1

0x8196,	// (0x0001d72d) popup_fep_vkb2_window_ParamLimits

0x8196,	// (0x0001d72d) popup_fep_vkb2_window

0x8f96,	// (0x0001e52d) aid_size_cell_vkb2_ParamLimits

0x8f96,	// (0x0001e52d) aid_size_cell_vkb2

0x8fca,	// (0x0001e561) popup_fep_vkb2_window_g1_ParamLimits

0x8fca,	// (0x0001e561) popup_fep_vkb2_window_g1

0x901a,	// (0x0001e5b1) vkb2_area_bottom_pane_ParamLimits

0x901a,	// (0x0001e5b1) vkb2_area_bottom_pane

0x906e,	// (0x0001e605) vkb2_area_keypad_pane_ParamLimits

0x906e,	// (0x0001e605) vkb2_area_keypad_pane

0x90b6,	// (0x0001e64d) vkb2_area_top_pane_ParamLimits

0x90b6,	// (0x0001e64d) vkb2_area_top_pane

0x9142,	// (0x0001e6d9) vkb2_top_entry_pane_ParamLimits

0x9142,	// (0x0001e6d9) vkb2_top_entry_pane

0x916f,	// (0x0001e706) vkb2_top_grid_left_pane_ParamLimits

0x916f,	// (0x0001e706) vkb2_top_grid_left_pane

0x9190,	// (0x0001e727) vkb2_top_grid_right_pane_ParamLimits

0x9190,	// (0x0001e727) vkb2_top_grid_right_pane

0xef52,	// (0x000244e9) vkb2_cell_keypad_pane_ParamLimits

0xef52,	// (0x000244e9) vkb2_cell_keypad_pane

0x91d8,	// (0x0001e76f) vkb2_area_bottom_grid_pane_ParamLimits

0x91d8,	// (0x0001e76f) vkb2_area_bottom_grid_pane

0x9202,	// (0x0001e799) vkb2_area_bottom_pane_g1_ParamLimits

0x9202,	// (0x0001e799) vkb2_area_bottom_pane_g1

0x9228,	// (0x0001e7bf) vkb2_area_bottom_pane_g2_ParamLimits

0x9228,	// (0x0001e7bf) vkb2_area_bottom_pane_g2

0x9259,	// (0x0001e7f0) vkb2_area_bottom_pane_g3_ParamLimits

0x9259,	// (0x0001e7f0) vkb2_area_bottom_pane_g3

0x0002,

0xfd5e,	// (0x000252f5) vkb2_area_bottom_pane_g_ParamLimits

0xfd5e,	// (0x000252f5) vkb2_area_bottom_pane_g

0xefff,	// (0x00024596) vkb2_top_cell_left_pane_ParamLimits

0xefff,	// (0x00024596) vkb2_top_cell_left_pane

0xd84b,	// (0x00022de2) vkb2_top_entry_pane_g1_ParamLimits

0xd84b,	// (0x00022de2) vkb2_top_entry_pane_g1

0xd859,	// (0x00022df0) vkb2_top_entry_pane_t1_ParamLimits

0xd859,	// (0x00022df0) vkb2_top_entry_pane_t1

0x5f03,	// (0x0001b49a) vkb2_top_entry_pane_t2_ParamLimits

0x5f03,	// (0x0001b49a) vkb2_top_entry_pane_t2

0x5f35,	// (0x0001b4cc) vkb2_top_entry_pane_t3_ParamLimits

0x5f35,	// (0x0001b4cc) vkb2_top_entry_pane_t3

0x0002,

0xfd65,	// (0x000252fc) vkb2_top_entry_pane_t_ParamLimits

0xfd65,	// (0x000252fc) vkb2_top_entry_pane_t

0x92c3,	// (0x0001e85a) vkb2_top_grid_right_pane_g1_ParamLimits

0x92c3,	// (0x0001e85a) vkb2_top_grid_right_pane_g1

0xf04c,	// (0x000245e3) vkb2_top_grid_right_pane_g2_ParamLimits

0xf04c,	// (0x000245e3) vkb2_top_grid_right_pane_g2

0xf064,	// (0x000245fb) vkb2_top_grid_right_pane_g3_ParamLimits

0xf064,	// (0x000245fb) vkb2_top_grid_right_pane_g3

0x92d9,	// (0x0001e870) vkb2_top_grid_right_pane_g4_ParamLimits

0x92d9,	// (0x0001e870) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6c,	// (0x00025303) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6c,	// (0x00025303) vkb2_top_grid_right_pane_g

0xf07c,	// (0x00024613) vkb2_top_cell_left_pane_g1

0xf09e,	// (0x00024635) vkb2_cell_keypad_pane_g1_ParamLimits

0xf09e,	// (0x00024635) vkb2_cell_keypad_pane_g1

0x5f59,	// (0x0001b4f0) vkb2_cell_keypad_pane_t1_ParamLimits

0x5f59,	// (0x0001b4f0) vkb2_cell_keypad_pane_t1

0xf0ac,	// (0x00024643) vkb2_cell_bottom_grid_pane_ParamLimits

0xf0ac,	// (0x00024643) vkb2_cell_bottom_grid_pane

0xf0e5,	// (0x0002467c) vkb2_cell_bottom_grid_pane_g1

0xd4f9,	// (0x00022a90) aid_call2_pane_cp02

0xd501,	// (0x00022a98) aid_call_pane_cp02

0xd509,	// (0x00022aa0) clock_digital_number_pane_cp10

0xd511,	// (0x00022aa8) clock_digital_number_pane_cp11

0xd519,	// (0x00022ab0) clock_digital_number_pane_cp12

0xd521,	// (0x00022ab8) clock_digital_number_pane_cp13

0xd529,	// (0x00022ac0) clock_digital_separator_pane_cp10

0xcd49,	// (0x000222e0) popup_clock_digital_analogue_window_cp2_g1

0xcd49,	// (0x000222e0) popup_clock_digital_analogue_window_cp2_g2

0xd531,	// (0x00022ac8) popup_clock_digital_analogue_window_cp2_g3

0xcd49,	// (0x000222e0) popup_clock_digital_analogue_window_cp2_g4

0xd531,	// (0x00022ac8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd21,	// (0x000252b8) popup_clock_digital_analogue_window_cp2_g

0xd539,	// (0x00022ad0) popup_clock_digital_analogue_window_cp2_t1

0xd547,	// (0x00022ade) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2c,	// (0x000252c3) popup_clock_digital_analogue_window_cp2_t

0x3ce3,	// (0x0001927a) clock_digital_number_pane_cp10_g1

0x3ce3,	// (0x0001927a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000250a6) clock_digital_number_pane_cp10_g

0x3ce3,	// (0x0001927a) clock_digital_separator_pane_cp10_g1

0x3ce3,	// (0x0001927a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000250a6) clock_digital_separator_pane_cp10_g

0xd3f6,	// (0x0002298d) uniindi_top_pane_g3

0x5991,	// (0x0001af28) uniindi_top_pane_g4

0xefdd,	// (0x00024574) vkb2_row_keypad_pane_ParamLimits

0xefdd,	// (0x00024574) vkb2_row_keypad_pane

0xf105,	// (0x0002469c) vkb2_cell_t_keypad_pane_ParamLimits

0xf105,	// (0x0002469c) vkb2_cell_t_keypad_pane

0xf115,	// (0x000246ac) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf115,	// (0x000246ac) vkb2_cell_t_keypad_pane_cp08

0xf128,	// (0x000246bf) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf128,	// (0x000246bf) vkb2_cell_t_keypad_pane_cp09

0xf13c,	// (0x000246d3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf13c,	// (0x000246d3) vkb2_cell_t_keypad_pane_cp01

0xf14d,	// (0x000246e4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf14d,	// (0x000246e4) vkb2_cell_t_keypad_pane_cp02

0xf15e,	// (0x000246f5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf15e,	// (0x000246f5) vkb2_cell_t_keypad_pane_cp03

0xf16f,	// (0x00024706) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf16f,	// (0x00024706) vkb2_cell_t_keypad_pane_cp04

0xf180,	// (0x00024717) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf180,	// (0x00024717) vkb2_cell_t_keypad_pane_cp05

0xf191,	// (0x00024728) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf191,	// (0x00024728) vkb2_cell_t_keypad_pane_cp06

0xf1a2,	// (0x00024739) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf1a2,	// (0x00024739) vkb2_cell_t_keypad_pane_cp07

0xf1b3,	// (0x0002474a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf1b3,	// (0x0002474a) vkb2_cell_t_keypad_pane_cp10

0xed45,	// (0x000242dc) vkb2_cell_t_keypad_pane_g1

0x5f70,	// (0x0001b507) vkb2_cell_t_keypad_pane_t1

0xe2f5,	// (0x0002388c) popup_grid_graphic2_window

0xd892,	// (0x00022e29) aid_size_cell_graphic2_ParamLimits

0xd892,	// (0x00022e29) aid_size_cell_graphic2

0xd8d0,	// (0x00022e67) bg_popup_window_pane_cp21_ParamLimits

0xd8d0,	// (0x00022e67) bg_popup_window_pane_cp21

0xd8de,	// (0x00022e75) graphic2_pages_pane_ParamLimits

0xd8de,	// (0x00022e75) graphic2_pages_pane

0xd934,	// (0x00022ecb) grid_graphic2_control_pane_ParamLimits

0xd934,	// (0x00022ecb) grid_graphic2_control_pane

0xd97c,	// (0x00022f13) grid_graphic2_pane_ParamLimits

0xd97c,	// (0x00022f13) grid_graphic2_pane

0xda03,	// (0x00022f9a) cell_graphic2_pane

0xe2f5,	// (0x0002388c) main_comp_mode_pane

0x518e,	// (0x0001a725) list_ai3_gene_pane_ParamLimits

0xc1f2,	// (0x00021789) bg_popup_window_pane_cp19_ParamLimits

0x55cb,	// (0x0001ab62) bg_touch_area_indi_pane_ParamLimits

0x55cb,	// (0x0001ab62) bg_touch_area_indi_pane

0x55e1,	// (0x0001ab78) bg_touch_area_indi_pane_cp01_ParamLimits

0x55e1,	// (0x0001ab78) bg_touch_area_indi_pane_cp01

0x55f7,	// (0x0001ab8e) bg_touch_area_indi_pane_cp02_ParamLimits

0x55f7,	// (0x0001ab8e) bg_touch_area_indi_pane_cp02

0x560d,	// (0x0001aba4) bg_touch_area_indi_pane_cp03_ParamLimits

0x560d,	// (0x0001aba4) bg_touch_area_indi_pane_cp03

0x5627,	// (0x0001abbe) popup_slider_window_g1_ParamLimits

0x5643,	// (0x0001abda) popup_slider_window_g2_ParamLimits

0x565f,	// (0x0001abf6) popup_slider_window_g3_ParamLimits

0xfcb6,	// (0x0002524d) popup_slider_window_g_ParamLimits

0x56c5,	// (0x0001ac5c) popup_slider_window_t1_ParamLimits

0x5739,	// (0x0001acd0) small_volume_slider_vertical_pane_ParamLimits

0xda03,	// (0x00022f9a) cell_graphic2_pane_ParamLimits

0xda5e,	// (0x00022ff5) bg_button_pane_cp10_ParamLimits

0xda5e,	// (0x00022ff5) bg_button_pane_cp10

0xda71,	// (0x00023008) bg_button_pane_cp11_ParamLimits

0xda71,	// (0x00023008) bg_button_pane_cp11

0xda84,	// (0x0002301b) graphic2_pages_pane_g1_ParamLimits

0xda84,	// (0x0002301b) graphic2_pages_pane_g1

0xda9f,	// (0x00023036) graphic2_pages_pane_g2_ParamLimits

0xda9f,	// (0x00023036) graphic2_pages_pane_g2

0x0001,

0xfd7a,	// (0x00025311) graphic2_pages_pane_g_ParamLimits

0xfd7a,	// (0x00025311) graphic2_pages_pane_g

0xdab7,	// (0x0002304e) graphic2_pages_pane_t1_ParamLimits

0xdab7,	// (0x0002304e) graphic2_pages_pane_t1

0xdacf,	// (0x00023066) cell_graphic2_control_pane_ParamLimits

0xdacf,	// (0x00023066) cell_graphic2_control_pane

0xdb01,	// (0x00023098) cell_graphic2_pane_g1_ParamLimits

0xdb01,	// (0x00023098) cell_graphic2_pane_g1

0xc3bd,	// (0x00021954) cell_graphic2_pane_g2_ParamLimits

0xc3bd,	// (0x00021954) cell_graphic2_pane_g2

0xd35f,	// (0x000228f6) cell_graphic2_pane_g3_ParamLimits

0xd35f,	// (0x000228f6) cell_graphic2_pane_g3

0xc3ca,	// (0x00021961) cell_graphic2_pane_g4_ParamLimits

0xc3ca,	// (0x00021961) cell_graphic2_pane_g4

0xdb0e,	// (0x000230a5) cell_graphic2_pane_g5_ParamLimits

0xdb0e,	// (0x000230a5) cell_graphic2_pane_g5

0x0004,

0xfd7f,	// (0x00025316) cell_graphic2_pane_g_ParamLimits

0xfd7f,	// (0x00025316) cell_graphic2_pane_g

0xdb2b,	// (0x000230c2) cell_graphic2_pane_t1_ParamLimits

0xdb2b,	// (0x000230c2) cell_graphic2_pane_t1

0x1f40,	// (0x000174d7) grid_highlight_pane_cp11_ParamLimits

0x1f40,	// (0x000174d7) grid_highlight_pane_cp11

0xc593,	// (0x00021b2a) bg_button_pane_cp05

0xdb75,	// (0x0002310c) cell_graphic2_control_pane_g1

0x3ce3,	// (0x0001927a) bg_touch_area_indi_pane_g1

0x626a,	// (0x0001b801) aid_cmod_rocker_key_size

0x6274,	// (0x0001b80b) aid_cmode_itu_key_size

0x627e,	// (0x0001b815) main_cmode_video_pane

0x6288,	// (0x0001b81f) main_comp_mode_itu_pane

0x6294,	// (0x0001b82b) main_comp_mode_rocker_pane

0x62a0,	// (0x0001b837) cell_cmode_rocker_pane_ParamLimits

0x62a0,	// (0x0001b837) cell_cmode_rocker_pane

0x62b2,	// (0x0001b849) cell_cmode_itu_pane_ParamLimits

0x62b2,	// (0x0001b849) cell_cmode_itu_pane

0xc889,	// (0x00021e20) bg_button_pane_cp06_ParamLimits

0xc889,	// (0x00021e20) bg_button_pane_cp06

0x3f53,	// (0x000194ea) cell_cmode_rocker_pane_g1_ParamLimits

0x3f53,	// (0x000194ea) cell_cmode_rocker_pane_g1

0x57dd,	// (0x0001ad74) cell_cmode_rocker_pane_g2_ParamLimits

0x57dd,	// (0x0001ad74) cell_cmode_rocker_pane_g2

0x0001,

0xfd8f,	// (0x00025326) cell_cmode_rocker_pane_g_ParamLimits

0xfd8f,	// (0x00025326) cell_cmode_rocker_pane_g

0xc3df,	// (0x00021976) bg_button_pane_cp07

0x62c7,	// (0x0001b85e) cell_cmode_itu_pane_g1

0x62d0,	// (0x0001b867) cell_cmode_itu_pane_t1

0x62de,	// (0x0001b875) cell_cmode_itu_pane_t2

0x0001,

0xfd94,	// (0x0002532b) cell_cmode_itu_pane_t

0x5a03,	// (0x0001af9a) aid_touch_ctrl_left

0x5a0b,	// (0x0001afa2) aid_touch_ctrl_right

0xc3df,	// (0x00021976) compa_mode_pane

0xdb9b,	// (0x00023132) aid_cmod_rocker_key_size_cp

0xdba5,	// (0x0002313c) aid_cmode_itu_key_size_cp

0x6300,	// (0x0001b897) compa_mode_pane_g1

0x6308,	// (0x0001b89f) compa_mode_pane_g2

0x6310,	// (0x0001b8a7) compa_mode_pane_g3

0x0002,

0xfd99,	// (0x00025330) compa_mode_pane_g

0xdbaf,	// (0x00023146) main_comp_mode_itu_pane_cp

0xdbb7,	// (0x0002314e) main_comp_mode_rocker_pane_cp

0xdbbf,	// (0x00023156) cell_cmode_itu_pane_cp_ParamLimits

0xdbbf,	// (0x00023156) cell_cmode_itu_pane_cp

0xdbd4,	// (0x0002316b) cell_cmode_rocker_pane_cp_ParamLimits

0xdbd4,	// (0x0002316b) cell_cmode_rocker_pane_cp

0xc889,	// (0x00021e20) bg_button_pane_cp06_cp_ParamLimits

0xc889,	// (0x00021e20) bg_button_pane_cp06_cp

0x3f53,	// (0x000194ea) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3f53,	// (0x000194ea) cell_cmode_rocker_pane_g1_cp

0x3ce3,	// (0x0001927a) cell_cmode_rocker_pane_g2_cp

0xc3df,	// (0x00021976) bg_button_pane_cp07_cp

0xdbe6,	// (0x0002317d) cell_cmode_itu_pane_g1_cp

0xdbef,	// (0x00023186) cell_cmode_itu_pane_t1_cp

0xdbef,	// (0x00023186) cell_cmode_itu_pane_t2_cp

0xb34e,	// (0x000208e5) settings_code_pane_cp2

0xc44f,	// (0x000219e6) bg_popup_window_pane_cp3_ParamLimits

0xc6ac,	// (0x00021c43) heading_pane_cp3_ParamLimits

0xc6bb,	// (0x00021c52) listscroll_popup_graphic_pane_ParamLimits

0xeb65,	// (0x000240fc) fep_hwr_aid_pane_ParamLimits

0xeed0,	// (0x00024467) aid_touch_sctrl_top_ParamLimits

0xeeeb,	// (0x00024482) sctrl_sk_top_pane_g1_ParamLimits

0xed45,	// (0x000242dc) sctrl_sk_top_pane_g2_ParamLimits

0xfccf,	// (0x00025266) sctrl_sk_top_pane_g_ParamLimits

0xeef8,	// (0x0002448f) sctrl_sk_top_pane_t1_ParamLimits

0xeed0,	// (0x00024467) aid_touch_sctrl_bottom_ParamLimits

0xeef8,	// (0x0002448f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd3c2,	// (0x00022959) aid_area_touch_clock

0x9102,	// (0x0001e699) aid_vkb2_area_top_pane_cell_ParamLimits

0x9102,	// (0x0001e699) aid_vkb2_area_top_pane_cell

0x91b1,	// (0x0001e748) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x91b1,	// (0x0001e748) aid_vkb2_area_bottom_pane_cell

0x5ebb,	// (0x0001b452) popup_char_count_window

0x6366,	// (0x0001b8fd) popup_char_count_window_g1

0x636f,	// (0x0001b906) popup_char_count_window_g2

0x6378,	// (0x0001b90f) popup_char_count_window_g3

0x0002,

0xfda0,	// (0x00025337) popup_char_count_window_g

0x6381,	// (0x0001b918) popup_char_count_window_t1

0xef38,	// (0x000244cf) popup_fep_char_preview_window_ParamLimits

0xef38,	// (0x000244cf) popup_fep_char_preview_window

0x9122,	// (0x0001e6b9) vkb2_top_candi_pane_ParamLimits

0x9122,	// (0x0001e6b9) vkb2_top_candi_pane

0xdbfd,	// (0x00023194) cell_vkb2_top_candi_pane_ParamLimits

0xdbfd,	// (0x00023194) cell_vkb2_top_candi_pane

0xf1c8,	// (0x0002475f) bg_popup_fep_char_preview_window_ParamLimits

0xf1c8,	// (0x0002475f) bg_popup_fep_char_preview_window

0xf1d6,	// (0x0002476d) popup_fep_char_preview_window_t1_ParamLimits

0xf1d6,	// (0x0002476d) popup_fep_char_preview_window_t1

0x63d9,	// (0x0001b970) bg_popup_fep_char_preview_window_g1

0x63e1,	// (0x0001b978) bg_popup_fep_char_preview_window_g2

0x63e9,	// (0x0001b980) bg_popup_fep_char_preview_window_g3

0x63f1,	// (0x0001b988) bg_popup_fep_char_preview_window_g4

0x63f9,	// (0x0001b990) bg_popup_fep_char_preview_window_g5

0x6401,	// (0x0001b998) bg_popup_fep_char_preview_window_g6

0x6409,	// (0x0001b9a0) bg_popup_fep_char_preview_window_g7

0x6411,	// (0x0001b9a8) bg_popup_fep_char_preview_window_g8

0x6419,	// (0x0001b9b0) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda7,	// (0x0002533e) bg_popup_fep_char_preview_window_g

0xed45,	// (0x000242dc) cell_vkb2_top_candi_pane_g1_ParamLimits

0xed45,	// (0x000242dc) cell_vkb2_top_candi_pane_g1

0xed53,	// (0x000242ea) cell_vkb2_top_candi_pane_g2_ParamLimits

0xed53,	// (0x000242ea) cell_vkb2_top_candi_pane_g2

0x5ffe,	// (0x0001b595) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5ffe,	// (0x0001b595) cell_vkb2_top_candi_pane_g3

0xf210,	// (0x000247a7) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf210,	// (0x000247a7) cell_vkb2_top_candi_pane_g4

0x45ec,	// (0x00019b83) cell_vkb2_top_candi_pane_g5_ParamLimits

0x45ec,	// (0x00019b83) cell_vkb2_top_candi_pane_g5

0xef1c,	// (0x000244b3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef1c,	// (0x000244b3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbc,	// (0x00025353) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbc,	// (0x00025353) cell_vkb2_top_candi_pane_g

0xf231,	// (0x000247c8) cell_vkb2_top_candi_pane_t1

0x8dab,	// (0x0001e342) aid_size_touch_slider_mark_ParamLimits

0x8dab,	// (0x0001e342) aid_size_touch_slider_mark

0xd91a,	// (0x00022eb1) grid_graphic2_catg_pane_ParamLimits

0xd91a,	// (0x00022eb1) grid_graphic2_catg_pane

0xd9d6,	// (0x00022f6d) popup_grid_graphic2_window_t1_ParamLimits

0xd9d6,	// (0x00022f6d) popup_grid_graphic2_window_t1

0xd9ec,	// (0x00022f83) popup_grid_graphic2_window_t2_ParamLimits

0xd9ec,	// (0x00022f83) popup_grid_graphic2_window_t2

0x0001,

0xfd75,	// (0x0002530c) popup_grid_graphic2_window_t_ParamLimits

0xfd75,	// (0x0002530c) popup_grid_graphic2_window_t

0xc593,	// (0x00021b2a) bg_button_pane_cp05_ParamLimits

0xdb75,	// (0x0002310c) cell_graphic2_control_pane_g1_ParamLimits

0xdc5d,	// (0x000231f4) cell_graphic2_catg_pane_ParamLimits

0xdc5d,	// (0x000231f4) cell_graphic2_catg_pane

0xc3df,	// (0x00021976) bg_button_pane_cp12

0xdc6f,	// (0x00023206) cell_graphic2_catg_pane_g1

0x5917,	// (0x0001aeae) cell_tb_ext_pane_t1_ParamLimits

0xf01f,	// (0x000245b6) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf01f,	// (0x000245b6) vkb2_top_cell_right_narrow_pane

0xf037,	// (0x000245ce) vkb2_top_cell_right_wide_pane_ParamLimits

0xf037,	// (0x000245ce) vkb2_top_cell_right_wide_pane

0xe783,	// (0x00023d1a) bg_vkb2_func_pane_ParamLimits

0xe783,	// (0x00023d1a) bg_vkb2_func_pane

0xf07c,	// (0x00024613) vkb2_top_cell_left_pane_g1_ParamLimits

0xe783,	// (0x00023d1a) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe783,	// (0x00023d1a) bg_vkb2_fuc_pane_cp03

0xf0e5,	// (0x0002467c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1171,	// (0x00016708) bg_vkb2_func_pane_g1

0x1179,	// (0x00016710) bg_vkb2_func_pane_g2

0x1189,	// (0x00016720) bg_vkb2_func_pane_g3

0x1181,	// (0x00016718) bg_vkb2_func_pane_g4

0x1191,	// (0x00016728) bg_vkb2_func_pane_g5

0x1199,	// (0x00016730) bg_vkb2_func_pane_g6

0x11a1,	// (0x00016738) bg_vkb2_func_pane_g7

0x11a9,	// (0x00016740) bg_vkb2_func_pane_g8

0x1169,	// (0x00016700) bg_vkb2_func_pane_g9

0x0008,

0xfdc9,	// (0x00025360) bg_vkb2_func_pane_g

0xe783,	// (0x00023d1a) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe783,	// (0x00023d1a) bg_vkb2_fuc_pane_cp01

0xf07c,	// (0x00024613) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf07c,	// (0x00024613) vkb2_top_cell_right_wide_pane_g1

0xe783,	// (0x00023d1a) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe783,	// (0x00023d1a) bg_vkb2_fuc_pane_cp02

0xf250,	// (0x000247e7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf250,	// (0x000247e7) vkb2_top_cell_right_narrow_pane_g1

0xc134,	// (0x000216cb) aid_touch_area_decrease_ParamLimits

0xc134,	// (0x000216cb) aid_touch_area_decrease

0xc16e,	// (0x00021705) aid_touch_area_increase_ParamLimits

0xc16e,	// (0x00021705) aid_touch_area_increase

0xc196,	// (0x0002172d) aid_touch_area_mute_ParamLimits

0xc196,	// (0x0002172d) aid_touch_area_mute

0xc1be,	// (0x00021755) aid_touch_area_slider_ParamLimits

0xc1be,	// (0x00021755) aid_touch_area_slider

0xc1fe,	// (0x00021795) popup_slider_window_g4_ParamLimits

0xc1fe,	// (0x00021795) popup_slider_window_g4

0xc218,	// (0x000217af) popup_slider_window_g5_ParamLimits

0xc218,	// (0x000217af) popup_slider_window_g5

0xc23e,	// (0x000217d5) popup_slider_window_g6_ParamLimits

0xc23e,	// (0x000217d5) popup_slider_window_g6

0x56f3,	// (0x0001ac8a) popup_slider_window_t2_ParamLimits

0x56f3,	// (0x0001ac8a) popup_slider_window_t2

0x0001,

0xfcc3,	// (0x0002525a) popup_slider_window_t_ParamLimits

0xfcc3,	// (0x0002525a) popup_slider_window_t

0xc254,	// (0x000217eb) slider_pane_ParamLimits

0xc254,	// (0x000217eb) slider_pane

0x643c,	// (0x0001b9d3) slider_pane_g1_ParamLimits

0x643c,	// (0x0001b9d3) slider_pane_g1

0x6450,	// (0x0001b9e7) slider_pane_g2_ParamLimits

0x6450,	// (0x0001b9e7) slider_pane_g2

0x6466,	// (0x0001b9fd) slider_pane_g3_ParamLimits

0x6466,	// (0x0001b9fd) slider_pane_g3

0x0003,

0xfddc,	// (0x00025373) slider_pane_g_ParamLimits

0xfddc,	// (0x00025373) slider_pane_g

0x8bca,	// (0x0001e161) popup_tb_float_extension_window_ParamLimits

0x8bca,	// (0x0001e161) popup_tb_float_extension_window

0x6492,	// (0x0001ba29) aid_size_cell_tb_float_ext

0xc3df,	// (0x00021976) bg_popup_sub_window_cp28

0xdc78,	// (0x0002320f) grid_tb_float_ext_pane

0xdc82,	// (0x00023219) cell_tb_float_ext_pane_ParamLimits

0xdc82,	// (0x00023219) cell_tb_float_ext_pane

0xdc9c,	// (0x00023233) cell_tb_float_ext_pane_g1

0xdca5,	// (0x0002323c) grid_highlight_pane_cp12

0x8e9e,	// (0x0001e435) cell_last_hwr_side_pane_ParamLimits

0x8e9e,	// (0x0001e435) cell_last_hwr_side_pane

0x3ce3,	// (0x0001927a) cell_last_hwr_side_pane_g1

0x64d4,	// (0x0001ba6b) cell_last_hwr_side_pane_g2

0x0001,

0xfde5,	// (0x0002537c) cell_last_hwr_side_pane_g

0x928e,	// (0x0001e825) vkb2_area_bottom_space_btn_pane_ParamLimits

0x928e,	// (0x0001e825) vkb2_area_bottom_space_btn_pane

0xed45,	// (0x000242dc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5f70,	// (0x0001b507) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf231,	// (0x000247c8) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf270,	// (0x00024807) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf270,	// (0x00024807) vkb2_area_bottom_space_btn_pane_g1

0xf2aa,	// (0x00024841) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf2aa,	// (0x00024841) vkb2_area_bottom_space_btn_pane_g2

0xf2e0,	// (0x00024877) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf2e0,	// (0x00024877) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdea,	// (0x00025381) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdea,	// (0x00025381) vkb2_area_bottom_space_btn_pane_g

0xec1a,	// (0x000241b1) cel_fep_hwr_func_pane_ParamLimits

0xec1a,	// (0x000241b1) cel_fep_hwr_func_pane

0x8e73,	// (0x0001e40a) cell_hwr_side_button_pane_ParamLimits

0x8e73,	// (0x0001e40a) cell_hwr_side_button_pane

0xd3c2,	// (0x00022959) aid_area_touch_clock_ParamLimits

0xc593,	// (0x00021b2a) bg_uniindi_top_pane_ParamLimits

0xd3d4,	// (0x0002296b) uniindi_top_pane_g1_ParamLimits

0xd3ea,	// (0x00022981) uniindi_top_pane_g2_ParamLimits

0xd3f6,	// (0x0002298d) uniindi_top_pane_g3_ParamLimits

0x5991,	// (0x0001af28) uniindi_top_pane_g4_ParamLimits

0xfcfb,	// (0x00025292) uniindi_top_pane_g_ParamLimits

0xd407,	// (0x0002299e) uniindi_top_pane_t1_ParamLimits

0xc593,	// (0x00021b2a) bg_vkb2_func_pane_cp01_ParamLimits

0xc593,	// (0x00021b2a) bg_vkb2_func_pane_cp01

0x64dd,	// (0x0001ba74) cel_fep_hwr_func_pane_g1_ParamLimits

0x64dd,	// (0x0001ba74) cel_fep_hwr_func_pane_g1

0xc593,	// (0x00021b2a) bg_vkb2_func_pane_cp02_ParamLimits

0xc593,	// (0x00021b2a) bg_vkb2_func_pane_cp02

0x64dd,	// (0x0001ba74) cell_hwr_side_button_pane_g1_ParamLimits

0x64dd,	// (0x0001ba74) cell_hwr_side_button_pane_g1

0x0fbf,	// (0x00016556) status_pane_g4_ParamLimits

0x0fbf,	// (0x00016556) status_pane_g4

0x0fd9,	// (0x00016570) status_pane_t1

0x3a1e,	// (0x00018fb5) form2_midp_gauge_slider_cont_pane

0x3a26,	// (0x00018fbd) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb742,	// (0x00020cd9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb754,	// (0x00020ceb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x00025059) form2_midp_gauge_slider_pane_t_ParamLimits

0x3a5c,	// (0x00018ff3) form2_midp_slider_pane_ParamLimits

0xef2a,	// (0x000244c1) aid_size_cell_func_vkb2_ParamLimits

0xef2a,	// (0x000244c1) aid_size_cell_func_vkb2

0x647e,	// (0x0001ba15) slider_pane_g4_ParamLimits

0x647e,	// (0x0001ba15) slider_pane_g4

0x92f7,	// (0x0001e88e) form2_midp_gauge_slider_pane_t2_cp01

0x9305,	// (0x0001e89c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9305,	// (0x0001e89c) form2_midp_gauge_slider_pane_t3_cp01

0xf32a,	// (0x000248c1) form2_midp_slider_pane_cp01

0xc3df,	// (0x00021976) navi_smil_pane

0x6516,	// (0x0001baad) navi_smil_pane_g1

0x651e,	// (0x0001bab5) navi_smil_pane_t1

0x64eb,	// (0x0001ba82) form2_midp_slider_pane_g1

0x64f4,	// (0x0001ba8b) form2_midp_slider_pane_g2

0x64fc,	// (0x0001ba93) form2_midp_slider_pane_g3

0x64eb,	// (0x0001ba82) form2_midp_slider_pane_g4

0xdcae,	// (0x00023245) form2_midp_slider_pane_g5

0x0004,

0xfdf3,	// (0x0002538a) form2_midp_slider_pane_g

0xf31a,	// (0x000248b1) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf31a,	// (0x000248b1) vkb2_area_bottom_space_btn_pane_g4

0xa87c,	// (0x0001fe13) lc0_navi_pane_ParamLimits

0xa87c,	// (0x0001fe13) lc0_navi_pane

0xa8e6,	// (0x0001fe7d) lc0_stat_indi_pane_ParamLimits

0xa8e6,	// (0x0001fe7d) lc0_stat_indi_pane

0xa8fb,	// (0x0001fe92) ls0_title_pane_ParamLimits

0xa8fb,	// (0x0001fe92) ls0_title_pane

0xc889,	// (0x00021e20) bg_popup_sub_pane_cp14_ParamLimits

0xd3a9,	// (0x00022940) list_uniindi_pane_ParamLimits

0xd3b5,	// (0x0002294c) uniindi_top_pane_ParamLimits

0x59db,	// (0x0001af72) list_single_uniindi_pane_g1_ParamLimits

0x59ee,	// (0x0001af85) list_single_uniindi_pane_t1_ParamLimits

0x9322,	// (0x0001e8b9) lc0_stat_clock_pane_ParamLimits

0x9322,	// (0x0001e8b9) lc0_stat_clock_pane

0xdcb9,	// (0x00023250) lc0_stat_indi_pane_g1_ParamLimits

0xdcb9,	// (0x00023250) lc0_stat_indi_pane_g1

0xdcc6,	// (0x0002325d) lc0_stat_indi_pane_g2_ParamLimits

0xdcc6,	// (0x0002325d) lc0_stat_indi_pane_g2

0x0001,

0xfdfe,	// (0x00025395) lc0_stat_indi_pane_g_ParamLimits

0xfdfe,	// (0x00025395) lc0_stat_indi_pane_g

0x9332,	// (0x0001e8c9) lc0_uni_indicator_pane_ParamLimits

0x9332,	// (0x0001e8c9) lc0_uni_indicator_pane

0xdcd3,	// (0x0002326a) ls0_title_pane_g1_ParamLimits

0xdcd3,	// (0x0002326a) ls0_title_pane_g1

0xdce7,	// (0x0002327e) ls0_title_pane_t1_ParamLimits

0xdce7,	// (0x0002327e) ls0_title_pane_t1

0x9342,	// (0x0001e8d9) lc0_uni_indicator_pane_g1_ParamLimits

0x9342,	// (0x0001e8d9) lc0_uni_indicator_pane_g1

0x6590,	// (0x0001bb27) lc0_stat_clock_pane_t1

0xe2f5,	// (0x0002388c) main_ai5_pane

0x659e,	// (0x0001bb35) ai5_sk_pane_ParamLimits

0x659e,	// (0x0001bb35) ai5_sk_pane

0xdd15,	// (0x000232ac) cell_ai5_widget_pane_ParamLimits

0xdd15,	// (0x000232ac) cell_ai5_widget_pane

0x6674,	// (0x0001bc0b) aid_size_cell_widget_grid

0x6682,	// (0x0001bc19) bg_ai5_widget_pane_ParamLimits

0x6682,	// (0x0001bc19) bg_ai5_widget_pane

0x66fe,	// (0x0001bc95) cell_ai5_widget_pane_g2

0x6712,	// (0x0001bca9) cell_ai5_widget_pane_g3

0x672c,	// (0x0001bcc3) cell_ai5_widget_pane_g4

0x673c,	// (0x0001bcd3) cell_ai5_widget_pane_g5

0x674c,	// (0x0001bce3) cell_ai5_widget_pane_g6

0x6758,	// (0x0001bcef) cell_ai5_widget_pane_g7

0x67c4,	// (0x0001bd5b) cell_ai5_widget_pane_t1_ParamLimits

0x67c4,	// (0x0001bd5b) cell_ai5_widget_pane_t1

0x67e1,	// (0x0001bd78) cell_ai5_widget_pane_t2_ParamLimits

0x67e1,	// (0x0001bd78) cell_ai5_widget_pane_t2

0x67f9,	// (0x0001bd90) cell_ai5_widget_pane_t3_ParamLimits

0x67f9,	// (0x0001bd90) cell_ai5_widget_pane_t3

0x6811,	// (0x0001bda8) cell_ai5_widget_pane_t4_ParamLimits

0x6811,	// (0x0001bda8) cell_ai5_widget_pane_t4

0xdd81,	// (0x00023318) cell_ai5_widget_pane_t5_ParamLimits

0xdd81,	// (0x00023318) cell_ai5_widget_pane_t5

0x6856,	// (0x0001bded) cell_ai5_widget_pane_t6_ParamLimits

0x6856,	// (0x0001bded) cell_ai5_widget_pane_t6

0x6868,	// (0x0001bdff) cell_ai5_widget_pane_t7_ParamLimits

0x6868,	// (0x0001bdff) cell_ai5_widget_pane_t7

0x6887,	// (0x0001be1e) cell_ai5_widget_pane_t8_ParamLimits

0x6887,	// (0x0001be1e) cell_ai5_widget_pane_t8

0x000b,

0xfe1e,	// (0x000253b5) cell_ai5_widget_pane_t_ParamLimits

0xfe1e,	// (0x000253b5) cell_ai5_widget_pane_t

0x690b,	// (0x0001bea2) grid_ai5_widget_pane

0xc889,	// (0x00021e20) highlight_cell_ai5_widget_pane_ParamLimits

0xc889,	// (0x00021e20) highlight_cell_ai5_widget_pane

0xdda1,	// (0x00023338) ai5_sk_left_pane

0xddab,	// (0x00023342) ai5_sk_middle_pane

0xddb5,	// (0x0002334c) ai5_sk_right_pane

0x6937,	// (0x0001bece) bg_ai5_widget_pane_g1_ParamLimits

0x6937,	// (0x0001bece) bg_ai5_widget_pane_g1

0x6943,	// (0x0001beda) bg_ai5_widget_pane_g2_ParamLimits

0x6943,	// (0x0001beda) bg_ai5_widget_pane_g2

0x694f,	// (0x0001bee6) bg_ai5_widget_pane_g3_ParamLimits

0x694f,	// (0x0001bee6) bg_ai5_widget_pane_g3

0x695b,	// (0x0001bef2) bg_ai5_widget_pane_g4_ParamLimits

0x695b,	// (0x0001bef2) bg_ai5_widget_pane_g4

0x6967,	// (0x0001befe) bg_ai5_widget_pane_g5_ParamLimits

0x6967,	// (0x0001befe) bg_ai5_widget_pane_g5

0x6973,	// (0x0001bf0a) bg_ai5_widget_pane_g6_ParamLimits

0x6973,	// (0x0001bf0a) bg_ai5_widget_pane_g6

0x697f,	// (0x0001bf16) bg_ai5_widget_pane_g7_ParamLimits

0x697f,	// (0x0001bf16) bg_ai5_widget_pane_g7

0x698b,	// (0x0001bf22) bg_ai5_widget_pane_g8_ParamLimits

0x698b,	// (0x0001bf22) bg_ai5_widget_pane_g8

0x6997,	// (0x0001bf2e) bg_ai5_widget_pane_g9_ParamLimits

0x6997,	// (0x0001bf2e) bg_ai5_widget_pane_g9

0x0008,

0xfe37,	// (0x000253ce) bg_ai5_widget_pane_g_ParamLimits

0xfe37,	// (0x000253ce) bg_ai5_widget_pane_g

0x69c9,	// (0x0001bf60) cell_shortcut_ai5_widget_pane_ParamLimits

0x69c9,	// (0x0001bf60) cell_shortcut_ai5_widget_pane

0xd19b,	// (0x00022732) bg_cell_shortcut_ai5_widget_pane

0x69da,	// (0x0001bf71) cell_grid_ai5_widget_pane_g1

0xd19b,	// (0x00022732) highlight_cell_shortcut_ai5_widget_pane

0x1171,	// (0x00016708) ai5_sk_left_pane_g1

0x69e3,	// (0x0001bf7a) ai5_sk_left_pane_g2

0x69eb,	// (0x0001bf82) ai5_sk_left_pane_g3

0x69f3,	// (0x0001bf8a) ai5_sk_left_pane_g4

0x0003,

0xfe4a,	// (0x000253e1) ai5_sk_left_pane_g

0x69fb,	// (0x0001bf92) ai5_sk_left_pane_t1

0x1179,	// (0x00016710) ai5_sk_right_pane_g1

0x6a09,	// (0x0001bfa0) ai5_sk_right_pane_g2

0x6a11,	// (0x0001bfa8) ai5_sk_right_pane_g3

0x6a19,	// (0x0001bfb0) ai5_sk_right_pane_g4

0x0003,

0xfe53,	// (0x000253ea) ai5_sk_right_pane_g

0x6a21,	// (0x0001bfb8) ai5_sk_right_pane_t1

0x1179,	// (0x00016710) ai5_sk_middle_pane_g1

0x1171,	// (0x00016708) ai5_sk_middle_pane_g2

0x1191,	// (0x00016728) ai5_sk_middle_pane_g3

0x6a11,	// (0x0001bfa8) ai5_sk_middle_pane_g4

0x69eb,	// (0x0001bf82) ai5_sk_middle_pane_g5

0x6a2f,	// (0x0001bfc6) ai5_sk_middle_pane_g6

0xddbf,	// (0x00023356) ai5_sk_middle_pane_g7

0x0006,

0xfe5c,	// (0x000253f3) ai5_sk_middle_pane_g

0xa768,	// (0x0001fcff) aid_touch_area_size_lc0_ParamLimits

0xa768,	// (0x0001fcff) aid_touch_area_size_lc0

0xed74,	// (0x0002430b) cell_hwr_candidate_pane_t1_ParamLimits

0x0c90,	// (0x00016227) aid_touch_navi_pane

0xa9f4,	// (0x0001ff8b) status_dt_navi_pane_ParamLimits

0xa9f4,	// (0x0001ff8b) status_dt_navi_pane

0xaa0c,	// (0x0001ffa3) status_dt_sta_pane_ParamLimits

0xaa0c,	// (0x0001ffa3) status_dt_sta_pane

0xddc7,	// (0x0002335e) dt_sta_controll_pane

0xddd4,	// (0x0002336b) dt_sta_indi_pane

0xdde1,	// (0x00023378) dt_sta_title_pane

0xc593,	// (0x00021b2a) bg_dt_sta_indi_pane_ParamLimits

0xc593,	// (0x00021b2a) bg_dt_sta_indi_pane

0xddf3,	// (0x0002338a) dt_sta_battery_pane

0xddfb,	// (0x00023392) dt_sta_indi_pane_g1

0x6a81,	// (0x0001c018) dt_sta_indi_pane_g2

0x6a8a,	// (0x0001c021) dt_sta_indi_pane_g3

0x0002,

0xfe6b,	// (0x00025402) dt_sta_indi_pane_g

0x6a93,	// (0x0001c02a) dt_sta_signal_pane

0xc889,	// (0x00021e20) bg_dt_sta_title_pane_ParamLimits

0xc889,	// (0x00021e20) bg_dt_sta_title_pane

0x20a0,	// (0x00017637) dt_sta_title_pane_g1

0xde04,	// (0x0002339b) dt_sta_title_pane_t1_ParamLimits

0xde04,	// (0x0002339b) dt_sta_title_pane_t1

0xc3df,	// (0x00021976) bg_dt_sta_control_pane

0xde19,	// (0x000233b0) dt_sta_controll_pane_g1

0xde22,	// (0x000233b9) bg_dt_sta_title_pane_g1

0xde2b,	// (0x000233c2) bg_dt_sta_title_pane_g2

0xde34,	// (0x000233cb) bg_dt_sta_title_pane_g3

0x0002,

0xfe72,	// (0x00025409) bg_dt_sta_title_pane_g

0x3ce3,	// (0x0001927a) bg_dt_sta_indi_pane_g1

0x6ad5,	// (0x0001c06c) dt_sta_signal_pane_g1

0x6add,	// (0x0001c074) dt_sta_signal_pane_g2

0x0001,

0xfe79,	// (0x00025410) dt_sta_signal_pane_g

0x6ae5,	// (0x0001c07c) dt_sta_battery_pane_g1

0x6aee,	// (0x0001c085) dt_sta_battery_pane_t1

0x3ce3,	// (0x0001927a) bg_dt_sta_control_pane_g1

0xcdcc,	// (0x00022363) fep_china_uni_eep_pane

0xcdd4,	// (0x0002236b) fep_china_uni_entry_pane_ParamLimits

0xcde4,	// (0x0002237b) popup_fep_china_uni_window_g1_ParamLimits

0xcdf4,	// (0x0002238b) popup_fep_china_uni_window_g2_ParamLimits

0xcdf4,	// (0x0002238b) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x00024c7b) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x00024c7b) popup_fep_china_uni_window_g

0x6afd,	// (0x0001c094) fep_china_uni_eep_pane_g1

0x6b05,	// (0x0001c09c) fep_china_uni_eep_pane_t1

0x650d,	// (0x0001baa4) aid_touch_area_size_smil_player

0x0de6,	// (0x0001637d) lc0_clock_pane

0x0fcd,	// (0x00016564) status_pane_g5_ParamLimits

0x0fcd,	// (0x00016564) status_pane_g5

0x8726,	// (0x0001dcbd) popup_keymap_window

0x0f8b,	// (0x00016522) status_icon_pane

0x6712,	// (0x0001bca9) cell_ai5_widget_pane_g3_ParamLimits

0x672c,	// (0x0001bcc3) cell_ai5_widget_pane_g4_ParamLimits

0x673c,	// (0x0001bcd3) cell_ai5_widget_pane_g5_ParamLimits

0x6764,	// (0x0001bcfb) cell_ai5_widget_pane_g8_ParamLimits

0x6764,	// (0x0001bcfb) cell_ai5_widget_pane_g8

0x6778,	// (0x0001bd0f) cell_ai5_widget_pane_g9_ParamLimits

0x6778,	// (0x0001bd0f) cell_ai5_widget_pane_g9

0x678c,	// (0x0001bd23) cell_ai5_widget_pane_g10_ParamLimits

0x678c,	// (0x0001bd23) cell_ai5_widget_pane_g10

0x6b14,	// (0x0001c0ab) status_icon_pane_g1

0xc3df,	// (0x00021976) bg_popup_sub_pane_cp13

0x6b1c,	// (0x0001c0b3) popup_keymap_window_t1

0xa6f6,	// (0x0001fc8d) control_pane_g6_ParamLimits

0xa6f6,	// (0x0001fc8d) control_pane_g6

0xa703,	// (0x0001fc9a) control_pane_g7_ParamLimits

0xa703,	// (0x0001fc9a) control_pane_g7

0xa710,	// (0x0001fca7) control_pane_g8_ParamLimits

0xa710,	// (0x0001fca7) control_pane_g8

0xddc7,	// (0x0002335e) dt_sta_controll_pane_ParamLimits

0xddd4,	// (0x0002336b) dt_sta_indi_pane_ParamLimits

0xdde1,	// (0x00023378) dt_sta_title_pane_ParamLimits

0xc76a,	// (0x00021d01) aid_size_touch_scroll_bar_cale

0x818a,	// (0x0001d721) popup_discreet_window_ParamLimits

0x818a,	// (0x0001d721) popup_discreet_window

0x81dc,	// (0x0001d773) popup_sk_window

0x18e4,	// (0x00016e7b) bg_popup_sub_pane_cp28_ParamLimits

0x18e4,	// (0x00016e7b) bg_popup_sub_pane_cp28

0x6b2a,	// (0x0001c0c1) popup_discreet_window_g1_ParamLimits

0x6b2a,	// (0x0001c0c1) popup_discreet_window_g1

0xde3d,	// (0x000233d4) popup_discreet_window_t1_ParamLimits

0xde3d,	// (0x000233d4) popup_discreet_window_t1

0x6b68,	// (0x0001c0ff) popup_discreet_window_t2_ParamLimits

0x6b68,	// (0x0001c0ff) popup_discreet_window_t2

0x0002,

0xfe7e,	// (0x00025415) popup_discreet_window_t_ParamLimits

0xfe7e,	// (0x00025415) popup_discreet_window_t

0xf333,	// (0x000248ca) popup_sk_window_g1

0xf33d,	// (0x000248d4) popup_sk_window_g2

0x0001,

0xfe85,	// (0x0002541c) popup_sk_window_g

0x936d,	// (0x0001e904) popup_sk_window_t1

0x937b,	// (0x0001e912) popup_sk_window_t1_copy1

0x66fe,	// (0x0001bc95) cell_ai5_widget_pane_g2_ParamLimits

0x6899,	// (0x0001be30) cell_ai5_widget_pane_t9_ParamLimits

0x6899,	// (0x0001be30) cell_ai5_widget_pane_t9

0xc3df,	// (0x00021976) main_fep_fshwr2_pane

0x9389,	// (0x0001e920) aid_fshwr2_btn_pane

0x939d,	// (0x0001e934) aid_fshwr2_syb_pane

0x93b1,	// (0x0001e948) aid_fshwr2_txt_pane

0x93c1,	// (0x0001e958) fshwr2_func_candi_pane

0x93e1,	// (0x0001e978) fshwr2_hwr_syb_pane

0x9403,	// (0x0001e99a) fshwr2_icf_pane

0xe2f5,	// (0x0002388c) fshwr2_icf_bg_pane

0xf353,	// (0x000248ea) fshwr2_icf_pane_t1_ParamLimits

0xf353,	// (0x000248ea) fshwr2_icf_pane_t1

0xcd49,	// (0x000222e0) fshwr2_func_candi_pane_g1

0xde5b,	// (0x000233f2) fshwr2_func_candi_row_pane_ParamLimits

0xde5b,	// (0x000233f2) fshwr2_func_candi_row_pane

0x9433,	// (0x0001e9ca) cell_fshwr2_syb_pane_ParamLimits

0x9433,	// (0x0001e9ca) cell_fshwr2_syb_pane

0xf36c,	// (0x00024903) fshwr2_hwr_syb_pane_g1_ParamLimits

0xf36c,	// (0x00024903) fshwr2_hwr_syb_pane_g1

0xe2f5,	// (0x0002388c) bg_popup_call_pane_cp01

0x9459,	// (0x0001e9f0) fshwr2_func_candi_cell_pane_ParamLimits

0x9459,	// (0x0001e9f0) fshwr2_func_candi_cell_pane

0x16cd,	// (0x00016c64) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x16cd,	// (0x00016c64) fshwr2_func_candi_cell_bg_pane

0x94a4,	// (0x0001ea3b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x94a4,	// (0x0001ea3b) fshwr2_func_candi_cell_pane_g1

0x94db,	// (0x0001ea72) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x94db,	// (0x0001ea72) fshwr2_func_candi_cell_pane_t1

0xe2f5,	// (0x0002388c) bg_button_pane_cp08

0xca39,	// (0x00021fd0) cell_fshwr2_syb_bg_pane

0x94f6,	// (0x0001ea8d) cell_fshwr2_syb_bg_pane_g1

0x9509,	// (0x0001eaa0) cell_fshwr2_syb_bg_pane_t1

0xc889,	// (0x00021e20) main_tmo_pane

0xb0e6,	// (0x0002067d) uni_indicator_pane_g1_ParamLimits

0xb0fc,	// (0x00020693) uni_indicator_pane_g2_ParamLimits

0xb112,	// (0x000206a9) uni_indicator_pane_g3_ParamLimits

0x240d,	// (0x000179a4) uni_indicator_pane_g4_ParamLimits

0x240d,	// (0x000179a4) uni_indicator_pane_g4

0x2421,	// (0x000179b8) uni_indicator_pane_g5_ParamLimits

0x2421,	// (0x000179b8) uni_indicator_pane_g5

0x2421,	// (0x000179b8) uni_indicator_pane_g6_ParamLimits

0x2421,	// (0x000179b8) uni_indicator_pane_g6

0xf8dc,	// (0x00024e73) uni_indicator_pane_g_ParamLimits

0xc116,	// (0x000216ad) popup_tmo_note_window_ParamLimits

0xc116,	// (0x000216ad) popup_tmo_note_window

0xf345,	// (0x000248dc) fshwr2_bg_pane

0x94cc,	// (0x0001ea63) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x94cc,	// (0x0001ea63) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8a,	// (0x00025421) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8a,	// (0x00025421) fshwr2_func_candi_cell_pane_g

0xed2d,	// (0x000242c4) bg_popup_window_pane_cp01

0xf37a,	// (0x00024911) bg_popup_window_pane_g1_cp01

0x6be1,	// (0x0001c178) bg_popup_window_pane_cp22_ParamLimits

0x6be1,	// (0x0001c178) bg_popup_window_pane_cp22

0xde7e,	// (0x00023415) listscroll_tmo_link_pane_ParamLimits

0xde7e,	// (0x00023415) listscroll_tmo_link_pane

0x6c2f,	// (0x0001c1c6) popup_tmo_note_window_g1_ParamLimits

0x6c2f,	// (0x0001c1c6) popup_tmo_note_window_g1

0xdebe,	// (0x00023455) tmo_note_info_pane_ParamLimits

0xdebe,	// (0x00023455) tmo_note_info_pane

0xded8,	// (0x0002346f) list_tmo_note_info_pane_g1_ParamLimits

0xded8,	// (0x0002346f) list_tmo_note_info_pane_g1

0x6c6d,	// (0x0001c204) list_tmo_note_info_pane_g2_ParamLimits

0x6c6d,	// (0x0001c204) list_tmo_note_info_pane_g2

0x0001,

0xfe8f,	// (0x00025426) list_tmo_note_info_pane_g_ParamLimits

0xfe8f,	// (0x00025426) list_tmo_note_info_pane_g

0x6c89,	// (0x0001c220) list_tmo_note_info_text_pane_ParamLimits

0x6c89,	// (0x0001c220) list_tmo_note_info_text_pane

0x6d0a,	// (0x0001c2a1) list_tmo_link_pane

0x6d17,	// (0x0001c2ae) scroll_pane_cp20

0x6d24,	// (0x0001c2bb) list_single_tmo_link_pane_ParamLimits

0x6d24,	// (0x0001c2bb) list_single_tmo_link_pane

0x6d34,	// (0x0001c2cb) list_single_tmo_link_pane_t1

0x6d42,	// (0x0001c2d9) list_tmo_note_info_text_pane_t1_ParamLimits

0x6d42,	// (0x0001c2d9) list_tmo_note_info_text_pane_t1

0xa12b,	// (0x0001f6c2) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa12b,	// (0x0001f6c2) aid_size_touch_scroll_bar_cp01

0xa02b,	// (0x0001f5c2) aid_size_touch_slider_marker

0x81cc,	// (0x0001d763) popup_settings_window_ParamLimits

0x81cc,	// (0x0001d763) popup_settings_window

0xd34f,	// (0x000228e6) popup_candi_list_indi_window

0x0c90,	// (0x00016227) aid_touch_navi_pane_ParamLimits

0xeea4,	// (0x0002443b) rs_clock_indi_pane

0xeead,	// (0x00024444) sctrl_sk_bottom_pane_ParamLimits

0xeebe,	// (0x00024455) sctrl_sk_top_pane_ParamLimits

0x8fc2,	// (0x0001e559) popup_fep_tooltip_window

0x6674,	// (0x0001bc0b) aid_size_cell_widget_grid_ParamLimits

0x66e9,	// (0x0001bc80) cell_ai5_widget_pane_g1_ParamLimits

0x66e9,	// (0x0001bc80) cell_ai5_widget_pane_g1

0x674c,	// (0x0001bce3) cell_ai5_widget_pane_g6_ParamLimits

0x6758,	// (0x0001bcef) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe03,	// (0x0002539a) cell_ai5_widget_pane_g_ParamLimits

0xfe03,	// (0x0002539a) cell_ai5_widget_pane_g

0x68c8,	// (0x0001be5f) cell_ai5_widget_pane_t10_ParamLimits

0x68c8,	// (0x0001be5f) cell_ai5_widget_pane_t10

0x690b,	// (0x0001bea2) grid_ai5_widget_pane_ParamLimits

0x69a3,	// (0x0001bf3a) cell_contacts_ai5_widget_pane_ParamLimits

0x69a3,	// (0x0001bf3a) cell_contacts_ai5_widget_pane

0x6b7d,	// (0x0001c114) popup_discreet_window_t3_ParamLimits

0x6b7d,	// (0x0001c114) popup_discreet_window_t3

0x941f,	// (0x0001e9b6) popup_fshwr2_char_preview_window_ParamLimits

0x941f,	// (0x0001e9b6) popup_fshwr2_char_preview_window

0xdeef,	// (0x00023486) tmo_note_info_pane_t1

0xdf04,	// (0x0002349b) tmo_note_info_pane_t2

0xdf1b,	// (0x000234b2) tmo_note_info_pane_t3

0x6ce6,	// (0x0001c27d) tmo_note_info_pane_t4

0x6cf8,	// (0x0001c28f) tmo_note_info_pane_t5

0x0004,

0xfe94,	// (0x0002542b) tmo_note_info_pane_t

0x6d0a,	// (0x0001c2a1) list_tmo_link_pane_ParamLimits

0x6d17,	// (0x0001c2ae) scroll_pane_cp20_ParamLimits

0xe2f5,	// (0x0002388c) bg_popup_fep_char_preview_window_cp01

0xdf30,	// (0x000234c7) popup_fshwr2_char_preview_window_t1

0x6d69,	// (0x0001c300) popup_candi_list_indi_window_g1

0x6d72,	// (0x0001c309) bg_cell_contacts_ai5_widget_pane

0x6d7e,	// (0x0001c315) cell_contacts_ai5_widget_pane_g1

0x4541,	// (0x00019ad8) cell_contacts_ai5_widget_pane_g2

0x6d93,	// (0x0001c32a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9f,	// (0x00025436) cell_contacts_ai5_widget_pane_g

0x6d9f,	// (0x0001c336) cell_contacts_ai5_widget_pane_t1

0xc889,	// (0x00021e20) highlight_cell_shortcut_ai5_widget_pane_cp01

0x6e16,	// (0x0001c3ad) settings_container_pane

0xd19b,	// (0x00022732) listscroll_set_pane_copy1

0x3076,	// (0x0001860d) scroll_pane_cp121_copy1

0x1689,	// (0x00016c20) set_content_pane_copy1

0xdf3e,	// (0x000234d5) aid_height_set_list_copy1_ParamLimits

0xdf3e,	// (0x000234d5) aid_height_set_list_copy1

0x262b,	// (0x00017bc2) aid_size_parent_copy1_ParamLimits

0x262b,	// (0x00017bc2) aid_size_parent_copy1

0xdf4a,	// (0x000234e1) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdf4a,	// (0x000234e1) button_value_adjust_pane_cp6_copy1

0xca39,	// (0x00021fd0) list_highlight_pane_cp2_copy1_ParamLimits

0xca39,	// (0x00021fd0) list_highlight_pane_cp2_copy1

0xdf5e,	// (0x000234f5) list_set_pane_copy1_ParamLimits

0xdf5e,	// (0x000234f5) list_set_pane_copy1

0x6db1,	// (0x0001c348) main_pane_set_t1_copy1_ParamLimits

0x6db1,	// (0x0001c348) main_pane_set_t1_copy1

0x6deb,	// (0x0001c382) main_pane_set_t2_copy1_ParamLimits

0x6deb,	// (0x0001c382) main_pane_set_t2_copy1

0xe00b,	// (0x000235a2) main_pane_set_t3_copy1

0xe019,	// (0x000235b0) main_pane_set_t4_copy1

0x6e0a,	// (0x0001c3a1) set_content_pane_g1_copy1_ParamLimits

0x6e0a,	// (0x0001c3a1) set_content_pane_g1_copy1

0xe027,	// (0x000235be) setting_code_pane_copy1

0x6f13,	// (0x0001c4aa) setting_slider_graphic_pane_copy1

0x6f13,	// (0x0001c4aa) setting_slider_pane_copy1

0x6f1b,	// (0x0001c4b2) setting_text_pane_copy1

0x6f1b,	// (0x0001c4b2) setting_volume_pane_copy1

0xe027,	// (0x000235be) settings_code_pane_cp2_copy1

0xe02f,	// (0x000235c6) settings_code_pane_cp_copy1_ParamLimits

0xe02f,	// (0x000235c6) settings_code_pane_cp_copy1

0x951f,	// (0x0001eab6) volume_set_pane_copy1

0xe043,	// (0x000235da) volume_set_pane_g10_copy1

0xe04b,	// (0x000235e2) volume_set_pane_g1_copy1

0xe053,	// (0x000235ea) volume_set_pane_g2_copy1

0xe05b,	// (0x000235f2) volume_set_pane_g3_copy1

0xe063,	// (0x000235fa) volume_set_pane_g4_copy1

0xe06b,	// (0x00023602) volume_set_pane_g5_copy1

0xe073,	// (0x0002360a) volume_set_pane_g6_copy1

0xe07b,	// (0x00023612) volume_set_pane_g7_copy1

0xe083,	// (0x0002361a) volume_set_pane_g8_copy1

0xe08b,	// (0x00023622) volume_set_pane_g9_copy1

0xc44f,	// (0x000219e6) bg_set_opt_pane_cp_copy1_ParamLimits

0xc44f,	// (0x000219e6) bg_set_opt_pane_cp_copy1

0x9527,	// (0x0001eabe) setting_slider_pane_t1_copy1_ParamLimits

0x9527,	// (0x0001eabe) setting_slider_pane_t1_copy1

0x9546,	// (0x0001eadd) setting_slider_pane_t2_copy1_ParamLimits

0x9546,	// (0x0001eadd) setting_slider_pane_t2_copy1

0x9560,	// (0x0001eaf7) setting_slider_pane_t3_copy1_ParamLimits

0x9560,	// (0x0001eaf7) setting_slider_pane_t3_copy1

0x9578,	// (0x0001eb0f) slider_set_pane_copy1_ParamLimits

0x9578,	// (0x0001eb0f) slider_set_pane_copy1

0xc94f,	// (0x00021ee6) set_opt_bg_pane_g1_copy2

0xc957,	// (0x00021eee) set_opt_bg_pane_g2_copy2

0x6f87,	// (0x0001c51e) set_opt_bg_pane_g3_copy2

0xc967,	// (0x00021efe) set_opt_bg_pane_g4_copy2

0xc96f,	// (0x00021f06) set_opt_bg_pane_g5_copy2

0xc977,	// (0x00021f0e) set_opt_bg_pane_g6_copy2

0xe093,	// (0x0002362a) set_opt_bg_pane_g7_copy2

0x6f99,	// (0x0001c530) set_opt_bg_pane_g8_copy2

0x6fa3,	// (0x0001c53a) set_opt_bg_pane_g9_copy2

0x958e,	// (0x0001eb25) aid_size_touch_slider_mark_copy1_ParamLimits

0x958e,	// (0x0001eb25) aid_size_touch_slider_mark_copy1

0xe09b,	// (0x00023632) slider_set_pane_g1_copy1

0xf383,	// (0x0002491a) slider_set_pane_g2_copy1

0x8dbf,	// (0x0001e356) slider_set_pane_g3_copy1_ParamLimits

0x8dbf,	// (0x0001e356) slider_set_pane_g3_copy1

0x8dd3,	// (0x0001e36a) slider_set_pane_g4_copy1_ParamLimits

0x8dd3,	// (0x0001e36a) slider_set_pane_g4_copy1

0x8deb,	// (0x0001e382) slider_set_pane_g5_copy1_ParamLimits

0x8deb,	// (0x0001e382) slider_set_pane_g5_copy1

0x8dbf,	// (0x0001e356) slider_set_pane_g6_copy1_ParamLimits

0x8dbf,	// (0x0001e356) slider_set_pane_g6_copy1

0x95a2,	// (0x0001eb39) slider_set_pane_g7_copy1_ParamLimits

0x95a2,	// (0x0001eb39) slider_set_pane_g7_copy1

0xc3f3,	// (0x0002198a) bg_set_opt_pane_cp2_copy1

0xe0a4,	// (0x0002363b) setting_slider_graphic_pane_g1_copy1

0xe0ad,	// (0x00023644) setting_slider_graphic_pane_t1_copy1

0xe0bd,	// (0x00023654) setting_slider_graphic_pane_t2_copy1

0xe0cd,	// (0x00023664) slider_set_pane_cp_copy1

0x6fef,	// (0x0001c586) input_focus_pane_cp1_copy1

0x6ff8,	// (0x0001c58f) list_set_text_pane_copy1

0x7000,	// (0x0001c597) setting_text_pane_g1_copy1

0x7009,	// (0x0001c5a0) set_text_pane_t1_copy1

0x6fef,	// (0x0001c586) input_focus_pane_cp2_copy1

0x7000,	// (0x0001c597) setting_code_pane_g1_copy1

0x7024,	// (0x0001c5bb) setting_code_pane_t1_copy1

0x7032,	// (0x0001c5c9) list_set_graphic_pane_copy1

0xc3f3,	// (0x0002198a) bg_set_opt_pane_cp4_copy1

0xcf24,	// (0x000224bb) list_set_graphic_pane_g1_copy1_ParamLimits

0xcf24,	// (0x000224bb) list_set_graphic_pane_g1_copy1

0x7046,	// (0x0001c5dd) list_set_graphic_pane_g2_copy1

0xcf3c,	// (0x000224d3) list_set_graphic_pane_t1_copy1_ParamLimits

0xcf3c,	// (0x000224d3) list_set_graphic_pane_t1_copy1

0x3ce3,	// (0x0001927a) rs_clock_indi_pane_g1

0x704e,	// (0x0001c5e5) rs_clock_indi_pane_t1

0x705c,	// (0x0001c5f3) rs_indi_pane

0x7064,	// (0x0001c5fb) rs_indi_pane_g1

0x706d,	// (0x0001c604) rs_indi_pane_g2

0x6d69,	// (0x0001c300) rs_indi_pane_g3

0x0002,

0xfea6,	// (0x0002543d) rs_indi_pane_g

0xd19b,	// (0x00022732) bg_popup_preview_window_pane_cp03

0x7076,	// (0x0001c60d) popup_fep_tooltip_window_t1

0xbc15,	// (0x000211ac) popup_note2_window_g2_ParamLimits

0xbc15,	// (0x000211ac) popup_note2_window_g2

0x0001,

0xfc3a,	// (0x000251d1) popup_note2_window_g_ParamLimits

0xfc3a,	// (0x000251d1) popup_note2_window_g

0x5154,	// (0x0001a6eb) bg_popup_sub_pane_cp11_ParamLimits

0x5161,	// (0x0001a6f8) cell_ai3_links_pane_g1_ParamLimits

0x5178,	// (0x0001a70f) cell_ai3_links_pane_t1

0x7009,	// (0x0001c5a0) set_text_pane_t1_copy1_ParamLimits

0xd0dd,	// (0x00022674) cell_graphic_popup_pane_cp2_ParamLimits

0xd0dd,	// (0x00022674) cell_graphic_popup_pane_cp2

0xe0dd,	// (0x00023674) cell_graphic_popup_pane_g1_cp2

0xc6ed,	// (0x00021c84) cell_graphic_popup_pane_g2_cp2

0x708c,	// (0x0001c623) cell_graphic_popup_pane_g3_cp2

0xe0e5,	// (0x0002367c) cell_graphic_popup_pane_t2_cp2

0xc6fe,	// (0x00021c95) grid_highlight_pane_cp3_cp2

0xcbc6,	// (0x0002215d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc889,	// (0x00021e20) main_tmo_pane_ParamLimits

0xc10a,	// (0x000216a1) popup_tmo_big_image_note_window

0x66d8,	// (0x0001bc6f) cell_ai5_widget_list_pane

0x66e0,	// (0x0001bc77) cell_ai5_widget_lrg_icon_pane

0xdeef,	// (0x00023486) tmo_note_info_pane_t1_ParamLimits

0xdf04,	// (0x0002349b) tmo_note_info_pane_t2_ParamLimits

0xdf1b,	// (0x000234b2) tmo_note_info_pane_t3_ParamLimits

0x6ce6,	// (0x0001c27d) tmo_note_info_pane_t4_ParamLimits

0x6cf8,	// (0x0001c28f) tmo_note_info_pane_t5_ParamLimits

0xfe94,	// (0x0002542b) tmo_note_info_pane_t_ParamLimits

0x6e16,	// (0x0001c3ad) settings_container_pane_ParamLimits

0xe0d5,	// (0x0002366c) indicator_popup_pane_cp5

0xe0d5,	// (0x0002366c) indicator_popup_pane_cp6

0x7032,	// (0x0001c5c9) list_set_graphic_pane_copy1_ParamLimits

0xc3df,	// (0x00021976) bg_popup_window_pane_cp23

0x70a2,	// (0x0001c639) popup_tmo_big_image_note_window_g1

0x70ab,	// (0x0001c642) popup_tmo_big_image_note_window_t1

0x70bb,	// (0x0001c652) popup_tmo_big_image_note_window_t2

0x70cb,	// (0x0001c662) popup_tmo_big_image_note_window_t3

0x0002,

0xfead,	// (0x00025444) popup_tmo_big_image_note_window_t

0x3ce3,	// (0x0001927a) cell_ai5_widget_lrg_icon_pane_g1

0x70db,	// (0x0001c672) cell_ai5_widget_lrg_icon_pane_t1

0x70e9,	// (0x0001c680) cell_ai5_widget_list_row_pane_ParamLimits

0x70e9,	// (0x0001c680) cell_ai5_widget_list_row_pane

0x7100,	// (0x0001c697) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7100,	// (0x0001c697) cell_ai5_widget_list_row_pane_g1

0xe0f3,	// (0x0002368a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe0f3,	// (0x0002368a) cell_ai5_widget_list_row_pane_t1

0x7138,	// (0x0001c6cf) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7138,	// (0x0001c6cf) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb4,	// (0x0002544b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb4,	// (0x0002544b) cell_ai5_widget_list_row_pane_t

0xe2f5,	// (0x0002388c) main_fep_vtchi_ss_pane

0x7188,	// (0x0001c71f) popup_fep_char_pre_window

0x7190,	// (0x0001c727) popup_fep_ituss_window

0xe14e,	// (0x000236e5) popup_fep_vkbss_window

0xca39,	// (0x00021fd0) grid_vkbss_keypad_pane_ParamLimits

0xca39,	// (0x00021fd0) grid_vkbss_keypad_pane

0x71fc,	// (0x0001c793) ituss_keypad_pane

0xf395,	// (0x0002492c) aid_vkbss_key_offset_ParamLimits

0xf395,	// (0x0002492c) aid_vkbss_key_offset

0x95b8,	// (0x0001eb4f) cell_vkbss_key_pane_ParamLimits

0x95b8,	// (0x0001eb4f) cell_vkbss_key_pane

0x720c,	// (0x0001c7a3) bg_cell_vkbss_key_g1_ParamLimits

0x720c,	// (0x0001c7a3) bg_cell_vkbss_key_g1

0xe15b,	// (0x000236f2) cell_vkbss_key_3p_pane_ParamLimits

0xe15b,	// (0x000236f2) cell_vkbss_key_3p_pane

0xe191,	// (0x00023728) cell_vkbss_key_g1_ParamLimits

0xe191,	// (0x00023728) cell_vkbss_key_g1

0xe1c7,	// (0x0002375e) cell_vkbss_key_t1_ParamLimits

0xe1c7,	// (0x0002375e) cell_vkbss_key_t1

0xf3a1,	// (0x00024938) cell_ituss_key_pane_ParamLimits

0xf3a1,	// (0x00024938) cell_ituss_key_pane

0x72e0,	// (0x0001c877) bg_cell_ituss_key_g1_ParamLimits

0x72e0,	// (0x0001c877) bg_cell_ituss_key_g1

0x72ec,	// (0x0001c883) cell_ituss_key_pane_g1_ParamLimits

0x72ec,	// (0x0001c883) cell_ituss_key_pane_g1

0xf3b2,	// (0x00024949) cell_ituss_key_pane_g2_ParamLimits

0xf3b2,	// (0x00024949) cell_ituss_key_pane_g2

0x0005,

0xfebb,	// (0x00025452) cell_ituss_key_pane_g_ParamLimits

0xfebb,	// (0x00025452) cell_ituss_key_pane_g

0xf436,	// (0x000249cd) cell_ituss_key_t1_ParamLimits

0xf436,	// (0x000249cd) cell_ituss_key_t1

0xf470,	// (0x00024a07) cell_ituss_key_t2_ParamLimits

0xf470,	// (0x00024a07) cell_ituss_key_t2

0xf4a2,	// (0x00024a39) cell_ituss_key_t3_ParamLimits

0xf4a2,	// (0x00024a39) cell_ituss_key_t3

0xf4d3,	// (0x00024a6a) cell_ituss_key_t4_ParamLimits

0xf4d3,	// (0x00024a6a) cell_ituss_key_t4

0x0004,

0xfec8,	// (0x0002545f) cell_ituss_key_t_ParamLimits

0xfec8,	// (0x0002545f) cell_ituss_key_t

0xe223,	// (0x000237ba) cell_vkbss_key_3p_pane_g1

0xe22b,	// (0x000237c2) cell_vkbss_key_3p_pane_g2

0xe233,	// (0x000237ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed3,	// (0x0002546a) cell_vkbss_key_3p_pane_g

0xd19b,	// (0x00022732) bg_popup_fep_char_preview_window_cp02

0x732a,	// (0x0001c8c1) popup_fep_char_pre_window_t1

0xdd77,	// (0x0002330e) main_ai5_sk_pane

0x6d72,	// (0x0001c309) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x6d7e,	// (0x0001c315) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4541,	// (0x00019ad8) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x6d93,	// (0x0001c32a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9f,	// (0x00025436) cell_contacts_ai5_widget_pane_g_ParamLimits

0x6d9f,	// (0x0001c336) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc889,	// (0x00021e20) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe23b,	// (0x000237d2) main_ai5_sk_pane_g1

0xad3f,	// (0x000202d6) popup_query_code_window_g1

0xe13f,	// (0x000236d6) popup_fep_vkb_icf_pane

0x71d3,	// (0x0001c76a) popup_fep_vtchi_icf_pane

0x7341,	// (0x0001c8d8) bg_icf_pane

0x7341,	// (0x0001c8d8) list_vkb_icf_pane

0x734d,	// (0x0001c8e4) bg_icf_pane_cp01

0x7360,	// (0x0001c8f7) vtchi_icf_list_pane

0xe290,	// (0x00023827) list_vkb_icf_pane_t1_ParamLimits

0xe290,	// (0x00023827) list_vkb_icf_pane_t1

0x73e5,	// (0x0001c97c) vtchi_icf_list_pane_t1_ParamLimits

0x73e5,	// (0x0001c97c) vtchi_icf_list_pane_t1

0x7190,	// (0x0001c727) popup_fep_ituss_window_ParamLimits

0x71d3,	// (0x0001c76a) popup_fep_vtchi_icf_pane_ParamLimits

0x71fc,	// (0x0001c793) ituss_keypad_pane_ParamLimits

0xf38b,	// (0x00024922) ituss_sks_pane

0x7341,	// (0x0001c8d8) bg_icf_pane_ParamLimits

0xe124,	// (0x000236bb) icf_edit_indi_pane_ParamLimits

0xe124,	// (0x000236bb) icf_edit_indi_pane

0x7341,	// (0x0001c8d8) list_vkb_icf_pane_ParamLimits

0x734d,	// (0x0001c8e4) bg_icf_pane_cp01_ParamLimits

0x717b,	// (0x0001c712) icf_edit_indi_pane_cp01_ParamLimits

0x717b,	// (0x0001c712) icf_edit_indi_pane_cp01

0x7360,	// (0x0001c8f7) vtchi_query_pane

0x64dd,	// (0x0001ba74) icf_edit_indi_pane_g1_ParamLimits

0x64dd,	// (0x0001ba74) icf_edit_indi_pane_g1

0xe2a8,	// (0x0002383f) icf_edit_indi_pane_g2_ParamLimits

0xe2a8,	// (0x0002383f) icf_edit_indi_pane_g2

0x0001,

0xfefe,	// (0x00025495) icf_edit_indi_pane_g_ParamLimits

0xfefe,	// (0x00025495) icf_edit_indi_pane_g

0xe2bc,	// (0x00023853) icf_edit_indi_pane_t1

0x7409,	// (0x0001c9a0) bg_input_focus_pane_cp042

0xc761,	// (0x00021cf8) vtchi_button_pane

0x7412,	// (0x0001c9a9) vtchi_query_pane_t1

0x7420,	// (0x0001c9b7) vtchi_query_pane_t2

0x742e,	// (0x0001c9c5) vtchi_query_pane_t3

0x0002,

0xfeed,	// (0x00025484) vtchi_query_pane_t

0xe2f5,	// (0x0002388c) bg_button_pane_cp13

0x743c,	// (0x0001c9d3) vtchi_button_pane_g1

0xf516,	// (0x00024aad) ituss_sks_pane_g1

0xf521,	// (0x00024ab8) ituss_sks_pane_g2

0x0001,

0xfef4,	// (0x0002548b) ituss_sks_pane_g

0x7444,	// (0x0001c9db) ituss_sks_pane_t1

0x7452,	// (0x0001c9e9) ituss_sks_pane_t2

0x0001,

0xfef9,	// (0x00025490) ituss_sks_pane_t

0x370a,	// (0x00018ca1) indicator_nsta_pane_cp_g1

0x3713,	// (0x00018caa) indicator_nsta_pane_cp_g2

0x371b,	// (0x00018cb2) indicator_nsta_pane_cp_g3

0x3723,	// (0x00018cba) indicator_nsta_pane_cp_g4

0x3713,	// (0x00018caa) indicator_nsta_pane_cp_g5

0x371b,	// (0x00018cb2) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x0002500f) indicator_nsta_pane_cp_g

0xdb56,	// (0x000230ed) cell_graphic2_pane_t2_ParamLimits

0xdb56,	// (0x000230ed) cell_graphic2_pane_t2

0x0001,

0xfd8a,	// (0x00025321) cell_graphic2_pane_t_ParamLimits

0xfd8a,	// (0x00025321) cell_graphic2_pane_t

0xdb8d,	// (0x00023124) cell_graphic2_control_pane_t1

0xa3e6,	// (0x0001f97d) signal_pane_g3_ParamLimits

0xa3e6,	// (0x0001f97d) signal_pane_g3

0xa3fa,	// (0x0001f991) signal_pane_g4_ParamLimits

0xa3fa,	// (0x0001f991) signal_pane_g4

0x714a,	// (0x0001c6e1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x714a,	// (0x0001c6e1) cell_ai5_widget_list_row_pane_t3

0x7300,	// (0x0001c897) cell_ituss_key_pane_t1_ParamLimits

0x7300,	// (0x0001c897) cell_ituss_key_pane_t1

0x1317,	// (0x000168ae) form_field_data_wide_pane_vc_t2_ParamLimits

0x1317,	// (0x000168ae) form_field_data_wide_pane_vc_t2

0x132b,	// (0x000168c2) form_field_data_wide_pane_vc_t3_ParamLimits

0x132b,	// (0x000168c2) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x00024d5b) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x00024d5b) form_field_data_wide_pane_vc_t

0x33b4,	// (0x0001894b) form_field_slider_wide_pane_vc_t3_ParamLimits

0x33b4,	// (0x0001894b) form_field_slider_wide_pane_vc_t3

0x3492,	// (0x00018a29) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3492,	// (0x00018a29) form_field_popup_wide_pane_vc_t2

0x34a9,	// (0x00018a40) form_field_popup_wide_pane_vc_t3_ParamLimits

0x34a9,	// (0x00018a40) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x00024ffe) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00024ffe) form_field_popup_wide_pane_vc_t

0x9389,	// (0x0001e920) aid_fshwr2_btn_pane_ParamLimits

0x939d,	// (0x0001e934) aid_fshwr2_syb_pane_ParamLimits

0x93b1,	// (0x0001e948) aid_fshwr2_txt_pane_ParamLimits

0xf345,	// (0x000248dc) fshwr2_bg_pane_ParamLimits

0x93c1,	// (0x0001e958) fshwr2_func_candi_pane_ParamLimits

0x93e1,	// (0x0001e978) fshwr2_hwr_syb_pane_ParamLimits

0x9403,	// (0x0001e99a) fshwr2_icf_pane_ParamLimits

0x3325,	// (0x000188bc) list_double_graphic_pane_vc_g4_ParamLimits

0x3325,	// (0x000188bc) list_double_graphic_pane_vc_g4

0xf3d2,	// (0x00024969) cell_ituss_key_pane_g3_ParamLimits

0xf3d2,	// (0x00024969) cell_ituss_key_pane_g3

0xf504,	// (0x00024a9b) cell_ituss_key_t5_ParamLimits

0xf504,	// (0x00024a9b) cell_ituss_key_t5

0xe14e,	// (0x000236e5) popup_fep_vkbss_window_ParamLimits

0x666b,	// (0x0001bc02) aid_cell_ai5_quarter

0xe2bc,	// (0x00023853) icf_edit_indi_pane_t1_ParamLimits

0x98ec,	// (0x0001ee83) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x98ec,	// (0x0001ee83) aid_tch_indicator_popup_pane_cp2

0x98ff,	// (0x0001ee96) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x98ff,	// (0x0001ee96) aid_tch_query_popup_data_pane_cp2

0x16cd,	// (0x00016c64) aid_tch_query_popup_pane_ParamLimits

0x16cd,	// (0x00016c64) aid_tch_query_popup_pane

0x16cd,	// (0x00016c64) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x16cd,	// (0x00016c64) aid_tch_query_popup_data_pane_cp1

0xca39,	// (0x00021fd0) cell_fshwr2_syb_bg_pane_ParamLimits

0x94f6,	// (0x0001ea8d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9509,	// (0x0001eaa0) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe13f,	// (0x000236d6) popup_fep_vkb_icf_pane_ParamLimits

0x92ef,	// (0x0001e886) bg_popup_fep_char_preview_window_g10

0x67a0,	// (0x0001bd37) cell_ai5_widget_pane_g11_ParamLimits

0x67a0,	// (0x0001bd37) cell_ai5_widget_pane_g11

0x67ac,	// (0x0001bd43) cell_ai5_widget_pane_g12_ParamLimits

0x67ac,	// (0x0001bd43) cell_ai5_widget_pane_g12

0x67b8,	// (0x0001bd4f) cell_ai5_widget_pane_g13_ParamLimits

0x67b8,	// (0x0001bd4f) cell_ai5_widget_pane_g13

0x68e7,	// (0x0001be7e) cell_ai5_widget_pane_t11_ParamLimits

0x68e7,	// (0x0001be7e) cell_ai5_widget_pane_t11

0x68f9,	// (0x0001be90) cell_ai5_widget_pane_t12_ParamLimits

0x68f9,	// (0x0001be90) cell_ai5_widget_pane_t12

0xf3de,	// (0x00024975) cell_ituss_key_pane_g4_ParamLimits

0xf3de,	// (0x00024975) cell_ituss_key_pane_g4

0xf3fa,	// (0x00024991) cell_ituss_key_pane_g5_ParamLimits

0xf3fa,	// (0x00024991) cell_ituss_key_pane_g5

0xf416,	// (0x000249ad) cell_ituss_key_pane_g6_ParamLimits

0xf416,	// (0x000249ad) cell_ituss_key_pane_g6

0x1169,	// (0x00016700) bg_icf_pane_g1

0xe244,	// (0x000237db) bg_icf_pane_g2

0xe24e,	// (0x000237e5) bg_icf_pane_g3

0xe256,	// (0x000237ed) bg_icf_pane_g4

0xe260,	// (0x000237f7) bg_icf_pane_g5

0xe26a,	// (0x00023801) bg_icf_pane_g6

0xe274,	// (0x0002380b) bg_icf_pane_g7

0xe27c,	// (0x00023813) bg_icf_pane_g8

0xe286,	// (0x0002381d) bg_icf_pane_g9

0x0008,

0xfeda,	// (0x00025471) bg_icf_pane_g

0x71e9,	// (0x0001c780) popup_hyb_candi_window_ParamLimits

0x71e9,	// (0x0001c780) popup_hyb_candi_window

0x1289,	// (0x00016820) bg_popup_sub_pane_cp01_ParamLimits

0x1289,	// (0x00016820) bg_popup_sub_pane_cp01

0x748d,	// (0x0001ca24) entry_hyb_candi_pane_ParamLimits

0x748d,	// (0x0001ca24) entry_hyb_candi_pane

0x749c,	// (0x0001ca33) grid_hyb_candi_pane_ParamLimits

0x749c,	// (0x0001ca33) grid_hyb_candi_pane

0x74b1,	// (0x0001ca48) grid_hyb_phrase_pane_ParamLimits

0x74b1,	// (0x0001ca48) grid_hyb_phrase_pane

0x74c0,	// (0x0001ca57) cell_hyb_candi_pane_ParamLimits

0x74c0,	// (0x0001ca57) cell_hyb_candi_pane

0x74e3,	// (0x0001ca7a) cell_hyb_candi_scroll_pane

0xcd49,	// (0x000222e0) cell_hyb_candi_pane_g1

0x74ec,	// (0x0001ca83) cell_hyb_candi_pane_t1

0x74fa,	// (0x0001ca91) cell_hyb_phrase_pane

0xcd49,	// (0x000222e0) cell_hyb_phrase_pane_g1

0x7503,	// (0x0001ca9a) cell_hyb_phrase_pane_t1

0x7511,	// (0x0001caa8) entry_hyb_candi_pane_t1

0xd19b,	// (0x00022732) input_focus_pane_cp06

0x751f,	// (0x0001cab6) cell_hyb_candi_scroll_pane_g1

0x7527,	// (0x0001cabe) cell_hyb_candi_scroll_pane_g1_aid

0x752f,	// (0x0001cac6) cell_hyb_candi_scroll_pane_g2

0x7537,	// (0x0001cace) cell_hyb_candi_scroll_pane_g2_aid

0x753f,	// (0x0001cad6) cell_hyb_candi_scroll_pane_g3

0x7547,	// (0x0001cade) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00054fe2 };

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
0x4ac2,	// (0x00059aa4) Screen

0x4ace,	// (0x00059ab0) application_window_ParamLimits

0x4ace,	// (0x00059ab0) application_window

0xc007,	// (0x00060fe9) screen_g1

0x4b2a,	// (0x00059b0c) area_bottom_pane_ParamLimits

0x4b2a,	// (0x00059b0c) area_bottom_pane

0x4bea,	// (0x00059bcc) area_top_pane_ParamLimits

0x4bea,	// (0x00059bcc) area_top_pane

0x4c88,	// (0x00059c6a) main_pane_ParamLimits

0x4c88,	// (0x00059c6a) main_pane

0xc011,	// (0x00060ff3) misc_graphics

0x81ad,	// (0x0005d18f) battery_pane_ParamLimits

0x81ad,	// (0x0005d18f) battery_pane

0x8e6b,	// (0x0005de4d) bg_status_flat_pane_g8

0x8e73,	// (0x0005de55) bg_status_flat_pane_g9

0x8275,	// (0x0005d257) context_pane_ParamLimits

0x8275,	// (0x0005d257) context_pane

0x8399,	// (0x0005d37b) navi_pane_ParamLimits

0x8399,	// (0x0005d37b) navi_pane

0x8429,	// (0x0005d40b) signal_pane_ParamLimits

0x8429,	// (0x0005d40b) signal_pane

0x0008,

0xf87e,	// (0x00064860) bg_status_flat_pane_g

0x8496,	// (0x0005d478) status_pane_g1_ParamLimits

0x8496,	// (0x0005d478) status_pane_g1

0x84aa,	// (0x0005d48c) status_pane_g2_ParamLimits

0x84aa,	// (0x0005d48c) status_pane_g2

0x84b6,	// (0x0005d498) status_pane_g3_ParamLimits

0x84b6,	// (0x0005d498) status_pane_g3

0x0004,

0xf7a5,	// (0x00064787) status_pane_g_ParamLimits

0xf7a5,	// (0x00064787) status_pane_g

0x84ea,	// (0x0005d4cc) title_pane_ParamLimits

0x84ea,	// (0x0005d4cc) title_pane

0x8527,	// (0x0005d509) uni_indicator_pane_ParamLimits

0x8527,	// (0x0005d509) uni_indicator_pane

0x642c,	// (0x0005b40e) bg_list_pane_ParamLimits

0x642c,	// (0x0005b40e) bg_list_pane

0x644c,	// (0x0005b42e) find_pane

0x6454,	// (0x0005b436) listscroll_app_pane_ParamLimits

0x6454,	// (0x0005b436) listscroll_app_pane

0x6460,	// (0x0005b442) listscroll_form_pane

0x6468,	// (0x0005b44a) listscroll_gen_pane_ParamLimits

0x6468,	// (0x0005b44a) listscroll_gen_pane

0x647c,	// (0x0005b45e) listscroll_set_pane

0x596c,	// (0x0005a94e) main_idle_act_pane

0x332f,	// (0x00058311) main_idle_trad_pane

0x332f,	// (0x00058311) main_list_empty_pane

0x6496,	// (0x0005b478) main_midp_pane

0x64a2,	// (0x0005b484) main_pane_g1_ParamLimits

0x64a2,	// (0x0005b484) main_pane_g1

0x64b0,	// (0x0005b492) popup_ai_message_window_ParamLimits

0x64b0,	// (0x0005b492) popup_ai_message_window

0x6564,	// (0x0005b546) popup_fep_china_uni_window_ParamLimits

0x6564,	// (0x0005b546) popup_fep_china_uni_window

0x7c2e,	// (0x0005cc10) popup_fep_japan_candidate_window_ParamLimits

0x7c2e,	// (0x0005cc10) popup_fep_japan_candidate_window

0x7c58,	// (0x0005cc3a) popup_fep_japan_predictive_window_ParamLimits

0x7c58,	// (0x0005cc3a) popup_fep_japan_predictive_window

0x7c8e,	// (0x0005cc70) popup_find_window

0x7c9b,	// (0x0005cc7d) popup_grid_graphic_window_ParamLimits

0x7c9b,	// (0x0005cc7d) popup_grid_graphic_window

0x7cc9,	// (0x0005ccab) popup_large_graphic_colour_window

0x7cef,	// (0x0005ccd1) popup_menu_window_ParamLimits

0x7cef,	// (0x0005ccd1) popup_menu_window

0x7eb9,	// (0x0005ce9b) popup_note_image_window

0x7ea3,	// (0x0005ce85) popup_note_wait_window_ParamLimits

0x7ea3,	// (0x0005ce85) popup_note_wait_window

0x7ea3,	// (0x0005ce85) popup_note_window_ParamLimits

0x7ea3,	// (0x0005ce85) popup_note_window

0x7f1f,	// (0x0005cf01) popup_query_code_window_ParamLimits

0x7f1f,	// (0x0005cf01) popup_query_code_window

0x7f35,	// (0x0005cf17) popup_query_data_code_window_ParamLimits

0x7f35,	// (0x0005cf17) popup_query_data_code_window

0x7f58,	// (0x0005cf3a) popup_query_data_window_ParamLimits

0x7f58,	// (0x0005cf3a) popup_query_data_window

0x7f7a,	// (0x0005cf5c) popup_query_sat_info_window_ParamLimits

0x7f7a,	// (0x0005cf5c) popup_query_sat_info_window

0x7fb9,	// (0x0005cf9b) popup_snote_single_graphic_window_ParamLimits

0x7fb9,	// (0x0005cf9b) popup_snote_single_graphic_window

0x7fb9,	// (0x0005cf9b) popup_snote_single_text_window_ParamLimits

0x7fb9,	// (0x0005cf9b) popup_snote_single_text_window

0x7fd0,	// (0x0005cfb2) popup_sub_window_general

0x8116,	// (0x0005d0f8) popup_window_general_ParamLimits

0x8116,	// (0x0005d0f8) popup_window_general

0x812f,	// (0x0005d111) power_save_pane

0x62a1,	// (0x0005b283) control_pane_g1_ParamLimits

0x62a1,	// (0x0005b283) control_pane_g1

0x62ca,	// (0x0005b2ac) control_pane_g2_ParamLimits

0x62ca,	// (0x0005b2ac) control_pane_g2

0x3484,	// (0x00058466) control_pane_g3_ParamLimits

0x3484,	// (0x00058466) control_pane_g3

0x0007,

0xf78d,	// (0x0006476f) control_pane_g_ParamLimits

0xf78d,	// (0x0006476f) control_pane_g

0x6339,	// (0x0005b31b) control_pane_t1_ParamLimits

0x6339,	// (0x0005b31b) control_pane_t1

0x6385,	// (0x0005b367) control_pane_t2_ParamLimits

0x6385,	// (0x0005b367) control_pane_t2

0x0002,

0xf79e,	// (0x00064780) control_pane_t_ParamLimits

0xf79e,	// (0x00064780) control_pane_t

0x61fa,	// (0x0005b1dc) navi_navi_volume_pane_cp1

0x6202,	// (0x0005b1e4) status_small_icon_pane

0x3450,	// (0x00058432) status_small_pane_g1_ParamLimits

0x3450,	// (0x00058432) status_small_pane_g1

0x620a,	// (0x0005b1ec) status_small_pane_g2_ParamLimits

0x620a,	// (0x0005b1ec) status_small_pane_g2

0x6216,	// (0x0005b1f8) status_small_pane_g3_ParamLimits

0x6216,	// (0x0005b1f8) status_small_pane_g3

0x6222,	// (0x0005b204) status_small_pane_g4_ParamLimits

0x6222,	// (0x0005b204) status_small_pane_g4

0x622e,	// (0x0005b210) status_small_pane_g5_ParamLimits

0x622e,	// (0x0005b210) status_small_pane_g5

0x623c,	// (0x0005b21e) status_small_pane_g6_ParamLimits

0x623c,	// (0x0005b21e) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006475e) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006475e) status_small_pane_g

0x626b,	// (0x0005b24d) status_small_pane_t1

0x628d,	// (0x0005b26f) status_small_wait_pane_ParamLimits

0x628d,	// (0x0005b26f) status_small_wait_pane

0x5cdf,	// (0x0005acc1) aid_levels_signal_ParamLimits

0x5cdf,	// (0x0005acc1) aid_levels_signal

0x5cf1,	// (0x0005acd3) signal_pane_g1_ParamLimits

0x5cf1,	// (0x0005acd3) signal_pane_g1

0x5d06,	// (0x0005ace8) signal_pane_g2_ParamLimits

0x5d06,	// (0x0005ace8) signal_pane_g2

0x0003,

0xf70d,	// (0x000646ef) signal_pane_g_ParamLimits

0xf70d,	// (0x000646ef) signal_pane_g

0xf201,	// (0x000641e3) context_pane_g1

0x4ee7,	// (0x00059ec9) title_pane_g1

0x4f05,	// (0x00059ee7) title_pane_t1

0xc033,	// (0x00061015) title_pane_t2

0xc059,	// (0x0006103b) title_pane_t3

0x0002,

0xf557,	// (0x00064539) title_pane_t

0x853f,	// (0x0005d521) aid_levels_battery_ParamLimits

0x853f,	// (0x0005d521) aid_levels_battery

0x8553,	// (0x0005d535) battery_pane_g1_ParamLimits

0x8553,	// (0x0005d535) battery_pane_g1

0x8569,	// (0x0005d54b) battery_pane_g2_ParamLimits

0x8569,	// (0x0005d54b) battery_pane_g2

0x0001,

0xf7b0,	// (0x00064792) battery_pane_g_ParamLimits

0xf7b0,	// (0x00064792) battery_pane_g

0x97b5,	// (0x0005e797) uni_indicator_pane_g1

0x97cb,	// (0x0005e7ad) uni_indicator_pane_g2

0x97e1,	// (0x0005e7c3) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00064908) uni_indicator_pane_g

0xf4af,	// (0x00064491) navi_icon_pane_ParamLimits

0xf4af,	// (0x00064491) navi_icon_pane

0xf433,	// (0x00064415) navi_midp_pane

0xf4cb,	// (0x000644ad) navi_navi_pane

0xf4d5,	// (0x000644b7) navi_text_pane_ParamLimits

0xf4d5,	// (0x000644b7) navi_text_pane

0xc007,	// (0x00060fe9) status_small_wait_pane_g1

0xc354,	// (0x00061336) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00064903) status_small_wait_pane_g

0x94c8,	// (0x0005e4aa) navi_navi_icon_text_pane

0x94d0,	// (0x0005e4b2) navi_navi_pane_g1_ParamLimits

0x94d0,	// (0x0005e4b2) navi_navi_pane_g1

0x94e2,	// (0x0005e4c4) navi_navi_pane_g2_ParamLimits

0x94e2,	// (0x0005e4c4) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x000648d1) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x000648d1) navi_navi_pane_g

0x94f4,	// (0x0005e4d6) navi_navi_tabs_pane

0x94fd,	// (0x0005e4df) navi_navi_text_pane

0x94c8,	// (0x0005e4aa) navi_navi_volume_pane

0x94a4,	// (0x0005e486) navi_text_pane_t1

0x9498,	// (0x0005e47a) navi_icon_pane_g1

0x93eb,	// (0x0005e3cd) navi_navi_text_pane_t1

0x68ab,	// (0x0005b88d) navi_navi_volume_pane_g1

0x68b3,	// (0x0005b895) volume_small_pane

0x9351,	// (0x0005e333) navi_navi_icon_text_pane_g1

0x9359,	// (0x0005e33b) navi_navi_icon_text_pane_t1

0xf4cb,	// (0x000644ad) navi_tabs_2_long_pane

0xf4cb,	// (0x000644ad) navi_tabs_2_pane

0xf4cb,	// (0x000644ad) navi_tabs_3_long_pane

0xf4cb,	// (0x000644ad) navi_tabs_3_pane

0xf4cb,	// (0x000644ad) navi_tabs_4_pane

0x688b,	// (0x0005b86d) tabs_2_active_pane_ParamLimits

0x688b,	// (0x0005b86d) tabs_2_active_pane

0x689b,	// (0x0005b87d) tabs_2_passive_pane_ParamLimits

0x689b,	// (0x0005b87d) tabs_2_passive_pane

0x6859,	// (0x0005b83b) tabs_3_active_pane_ParamLimits

0x6859,	// (0x0005b83b) tabs_3_active_pane

0x6869,	// (0x0005b84b) tabs_3_passive_pane_ParamLimits

0x6869,	// (0x0005b84b) tabs_3_passive_pane

0x687a,	// (0x0005b85c) tabs_3_passive_pane_cp_ParamLimits

0x687a,	// (0x0005b85c) tabs_3_passive_pane_cp

0x680d,	// (0x0005b7ef) tabs_4_active_pane_ParamLimits

0x680d,	// (0x0005b7ef) tabs_4_active_pane

0x6820,	// (0x0005b802) tabs_4_passive_pane_ParamLimits

0x6820,	// (0x0005b802) tabs_4_passive_pane

0x6831,	// (0x0005b813) tabs_4_passive_pane_cp_ParamLimits

0x6831,	// (0x0005b813) tabs_4_passive_pane_cp

0x6842,	// (0x0005b824) tabs_4_passive_pane_cp2_ParamLimits

0x6842,	// (0x0005b824) tabs_4_passive_pane_cp2

0x67e9,	// (0x0005b7cb) tabs_2_long_active_pane_ParamLimits

0x67e9,	// (0x0005b7cb) tabs_2_long_active_pane

0x67fb,	// (0x0005b7dd) tabs_2_long_passive_pane_ParamLimits

0x67fb,	// (0x0005b7dd) tabs_2_long_passive_pane

0x67aa,	// (0x0005b78c) tabs_3_long_active_pane_ParamLimits

0x67aa,	// (0x0005b78c) tabs_3_long_active_pane

0x67bd,	// (0x0005b79f) tabs_3_long_passive_pane_ParamLimits

0x67bd,	// (0x0005b79f) tabs_3_long_passive_pane

0x67d6,	// (0x0005b7b8) tabs_3_long_passive_pane_cp_ParamLimits

0x67d6,	// (0x0005b7b8) tabs_3_long_passive_pane_cp

0x6750,	// (0x0005b732) volume_small_pane_g1

0x6759,	// (0x0005b73b) volume_small_pane_g2

0x6762,	// (0x0005b744) volume_small_pane_g3

0x676b,	// (0x0005b74d) volume_small_pane_g4

0x6774,	// (0x0005b756) volume_small_pane_g5

0x677d,	// (0x0005b75f) volume_small_pane_g6

0x6786,	// (0x0005b768) volume_small_pane_g7

0x678f,	// (0x0005b771) volume_small_pane_g8

0x6798,	// (0x0005b77a) volume_small_pane_g9

0x67a1,	// (0x0005b783) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0006489d) volume_small_pane_g

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp2_ParamLimits

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp2

0x4f6d,	// (0x00059f4f) tabs_3_active_pane_g1

0x4f75,	// (0x00059f57) tabs_3_active_pane_t1

0xc06b,	// (0x0006104d) bg_passive_tab_pane_cp2_ParamLimits

0xc06b,	// (0x0006104d) bg_passive_tab_pane_cp2

0x4f6d,	// (0x00059f4f) tabs_3_passive_pane_g1

0x4f75,	// (0x00059f57) tabs_3_passive_pane_t1

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp3_ParamLimits

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp3

0x4f87,	// (0x00059f69) tabs_4_active_pane_g1

0x4f8f,	// (0x00059f71) tabs_4_active_pane_t1

0xc06b,	// (0x0006104d) bg_passive_tab_pane_cp3_ParamLimits

0xc06b,	// (0x0006104d) bg_passive_tab_pane_cp3

0x4f87,	// (0x00059f69) tabs_4_1_passive_pane_g1

0x4f8f,	// (0x00059f71) tabs_4_1_passive_pane_t1

0x6496,	// (0x0005b478) list_highlight_pane_cp2

0x9a30,	// (0x0005ea12) list_set_pane_ParamLimits

0x9a30,	// (0x0005ea12) list_set_pane

0x9af8,	// (0x0005eada) main_pane_set_t1_ParamLimits

0x9af8,	// (0x0005eada) main_pane_set_t1

0x9b18,	// (0x0005eafa) main_pane_set_t2_ParamLimits

0x9b18,	// (0x0005eafa) main_pane_set_t2

0x9b2c,	// (0x0005eb0e) main_pane_set_t3_ParamLimits

0x9b2c,	// (0x0005eb0e) main_pane_set_t3

0x9b40,	// (0x0005eb22) main_pane_set_t4_ParamLimits

0x9b40,	// (0x0005eb22) main_pane_set_t4

0x0003,

0xf98b,	// (0x0006496d) main_pane_set_t_ParamLimits

0xf98b,	// (0x0006496d) main_pane_set_t

0x9b54,	// (0x0005eb36) setting_code_pane

0x9b5e,	// (0x0005eb40) setting_slider_graphic_pane

0x9b5e,	// (0x0005eb40) setting_slider_pane

0x9b5e,	// (0x0005eb40) setting_text_pane

0x9b5e,	// (0x0005eb40) setting_volume_pane

0x4fa1,	// (0x00059f83) volume_set_pane

0xc06b,	// (0x0006104d) bg_set_opt_pane_cp

0x4fab,	// (0x00059f8d) setting_slider_pane_t1

0x4fc4,	// (0x00059fa6) setting_slider_pane_t2

0x4fde,	// (0x00059fc0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00064540) setting_slider_pane_t

0x4ff6,	// (0x00059fd8) slider_set_pane

0xc011,	// (0x00060ff3) bg_set_opt_pane_cp2

0xc079,	// (0x0006105b) setting_slider_graphic_pane_g1

0x500c,	// (0x00059fee) setting_slider_graphic_pane_t1

0x501c,	// (0x00059ffe) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00064547) setting_slider_graphic_pane_t

0x502c,	// (0x0005a00e) slider_set_pane_cp

0xc011,	// (0x00060ff3) input_focus_pane_cp1

0x99f1,	// (0x0005e9d3) list_set_text_pane

0xc007,	// (0x00060fe9) setting_text_pane_g1

0xc011,	// (0x00060ff3) input_focus_pane_cp2

0xc007,	// (0x00060fe9) setting_code_pane_g1

0xc082,	// (0x00061064) setting_code_pane_t1

0x3115,	// (0x000580f7) set_text_pane_t1_ParamLimits

0x3115,	// (0x000580f7) set_text_pane_t1

0xed23,	// (0x00063d05) set_opt_bg_pane_g1

0xed2b,	// (0x00063d0d) set_opt_bg_pane_g2

0x99c9,	// (0x0005e9ab) set_opt_bg_pane_g3

0xed3b,	// (0x00063d1d) set_opt_bg_pane_g4

0xed43,	// (0x00063d25) set_opt_bg_pane_g5

0xed4b,	// (0x00063d2d) set_opt_bg_pane_g6

0x99d3,	// (0x0005e9b5) set_opt_bg_pane_g7

0x99dd,	// (0x0005e9bf) set_opt_bg_pane_g8

0x99e7,	// (0x0005e9c9) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0006495a) set_opt_bg_pane_g

0x99bc,	// (0x0005e99e) slider_set_pane_g1

0x695c,	// (0x0005b93e) slider_set_pane_g2

0x0006,

0xf969,	// (0x0006494b) slider_set_pane_g

0x68bc,	// (0x0005b89e) volume_set_pane_g1

0x68c6,	// (0x0005b8a8) volume_set_pane_g2

0x68d0,	// (0x0005b8b2) volume_set_pane_g3

0x68da,	// (0x0005b8bc) volume_set_pane_g4

0x68e4,	// (0x0005b8c6) volume_set_pane_g5

0x68ee,	// (0x0005b8d0) volume_set_pane_g6

0x68f8,	// (0x0005b8da) volume_set_pane_g7

0x6902,	// (0x0005b8e4) volume_set_pane_g8

0x690c,	// (0x0005b8ee) volume_set_pane_g9

0x6916,	// (0x0005b8f8) volume_set_pane_g10

0x0009,

0xf941,	// (0x00064923) volume_set_pane_g

0x5034,	// (0x0005a016) indicator_pane_ParamLimits

0x5034,	// (0x0005a016) indicator_pane

0x5040,	// (0x0005a022) main_idle_pane_g2_ParamLimits

0x5040,	// (0x0005a022) main_idle_pane_g2

0x5068,	// (0x0005a04a) main_pane_idle_g1_ParamLimits

0x5068,	// (0x0005a04a) main_pane_idle_g1

0xc090,	// (0x00061072) popup_clock_digital_analogue_window_ParamLimits

0xc090,	// (0x00061072) popup_clock_digital_analogue_window

0x5076,	// (0x0005a058) soft_indicator_pane_ParamLimits

0x5076,	// (0x0005a058) soft_indicator_pane

0x5084,	// (0x0005a066) wallpaper_pane_ParamLimits

0x5084,	// (0x0005a066) wallpaper_pane

0xc007,	// (0x00060fe9) wallpaper_pane_g1

0x5090,	// (0x0005a072) indicator_pane_g1_ParamLimits

0x5090,	// (0x0005a072) indicator_pane_g1

0x9fc7,	// (0x0005efa9) navi_navi_icon_text_pane_srt_g1

0xc0be,	// (0x000610a0) soft_indicator_pane_t1

0xc0d8,	// (0x000610ba) aid_ps_area_pane

0x509c,	// (0x0005a07e) aid_ps_clock_pane

0xc0e9,	// (0x000610cb) aid_ps_indicator_pane

0xc0f5,	// (0x000610d7) indicator_ps_pane_ParamLimits

0xc0f5,	// (0x000610d7) indicator_ps_pane

0xc104,	// (0x000610e6) power_save_pane_g1_ParamLimits

0xc104,	// (0x000610e6) power_save_pane_g1

0xc110,	// (0x000610f2) power_save_pane_g2_ParamLimits

0xc110,	// (0x000610f2) power_save_pane_g2

0x4ade,	// (0x00059ac0) aid_navinavi_width_pane

0xc0d8,	// (0x000610ba) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006454c) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006454c) power_save_pane_g

0xc11e,	// (0x00061100) power_save_pane_t1_ParamLimits

0xc11e,	// (0x00061100) power_save_pane_t1

0x509c,	// (0x0005a07e) aid_ps_clock_pane_ParamLimits

0xc0e9,	// (0x000610cb) aid_ps_indicator_pane_ParamLimits

0xc130,	// (0x00061112) power_save_pane_t4_ParamLimits

0xc130,	// (0x00061112) power_save_pane_t4

0x0001,

0xf56f,	// (0x00064551) power_save_pane_t_ParamLimits

0xf56f,	// (0x00064551) power_save_pane_t

0xc15a,	// (0x0006113c) power_save_t3_ParamLimits

0xc15a,	// (0x0006113c) power_save_t3

0xc145,	// (0x00061127) power_save_t2_ParamLimits

0xc145,	// (0x00061127) power_save_t2

0xc16f,	// (0x00061151) indicator_ps_pane_g1

0x50aa,	// (0x0005a08c) ai_gene_pane_ParamLimits

0x50aa,	// (0x0005a08c) ai_gene_pane

0x50b6,	// (0x0005a098) ai_links_pane_ParamLimits

0x50b6,	// (0x0005a098) ai_links_pane

0x50c2,	// (0x0005a0a4) indicator_pane_cp1_ParamLimits

0x50c2,	// (0x0005a0a4) indicator_pane_cp1

0x50ce,	// (0x0005a0b0) main_pane_idle_g1_cp_ParamLimits

0x50ce,	// (0x0005a0b0) main_pane_idle_g1_cp

0xc178,	// (0x0006115a) popup_ai_links_title_window

0x50da,	// (0x0005a0bc) soft_indicator_pane_cp1_ParamLimits

0x50da,	// (0x0005a0bc) soft_indicator_pane_cp1

0x97a3,	// (0x0005e785) ai_links_pane_g1

0x97ac,	// (0x0005e78e) grid_ai_links_pane

0x9788,	// (0x0005e76a) ai_gene_pane_1

0x9791,	// (0x0005e773) ai_gene_pane_2

0x979a,	// (0x0005e77c) list_highlight_pane_cp4

0x9768,	// (0x0005e74a) cell_ai_link_pane_ParamLimits

0x9768,	// (0x0005e74a) cell_ai_link_pane

0x9760,	// (0x0005e742) cell_ai_link_pane_g1

0xc354,	// (0x00061336) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x000648fe) cell_ai_link_pane_g

0xc011,	// (0x00060ff3) grid_highlight_cp2

0xc011,	// (0x00060ff3) bg_popup_sub_pane_cp1

0xc18f,	// (0x00061171) popup_ai_links_title_window_t1

0x96ac,	// (0x0005e68e) ai_gene_pane_1_g1_ParamLimits

0x96ac,	// (0x0005e68e) ai_gene_pane_1_g1

0x96b8,	// (0x0005e69a) ai_gene_pane_1_g2_ParamLimits

0x96b8,	// (0x0005e69a) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x000648f4) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x000648f4) ai_gene_pane_1_g

0x96c5,	// (0x0005e6a7) ai_gene_pane_1_t1_ParamLimits

0x96c5,	// (0x0005e6a7) ai_gene_pane_1_t1

0x96f9,	// (0x0005e6db) grid_ai_soft_ind_pane

0x9697,	// (0x0005e679) ai_gene_pane_2_t1_ParamLimits

0x9697,	// (0x0005e679) ai_gene_pane_2_t1

0x50e6,	// (0x0005a0c8) main_pane_empty_t1_ParamLimits

0x50e6,	// (0x0005a0c8) main_pane_empty_t1

0x50fe,	// (0x0005a0e0) main_pane_empty_t2_ParamLimits

0x50fe,	// (0x0005a0e0) main_pane_empty_t2

0x5113,	// (0x0005a0f5) main_pane_empty_t3_ParamLimits

0x5113,	// (0x0005a0f5) main_pane_empty_t3

0x5125,	// (0x0005a107) main_pane_empty_t4_ParamLimits

0x5125,	// (0x0005a107) main_pane_empty_t4

0x5137,	// (0x0005a119) main_pane_empty_t5_ParamLimits

0x5137,	// (0x0005a119) main_pane_empty_t5

0x0004,

0xf574,	// (0x00064556) main_pane_empty_t_ParamLimits

0xf574,	// (0x00064556) main_pane_empty_t

0xed74,	// (0x00063d56) bg_popup_window_pane_ParamLimits

0xed74,	// (0x00063d56) bg_popup_window_pane

0x93f9,	// (0x0005e3db) find_popup_pane_cp2_ParamLimits

0x93f9,	// (0x0005e3db) find_popup_pane_cp2

0x9405,	// (0x0005e3e7) heading_pane_ParamLimits

0x9405,	// (0x0005e3e7) heading_pane

0xc011,	// (0x00060ff3) bg_popup_sub_pane

0x9373,	// (0x0005e355) bg_popup_window_pane_g1_ParamLimits

0x9373,	// (0x0005e355) bg_popup_window_pane_g1

0x937f,	// (0x0005e361) bg_popup_window_pane_g2_ParamLimits

0x937f,	// (0x0005e361) bg_popup_window_pane_g2

0x938b,	// (0x0005e36d) bg_popup_window_pane_g3_ParamLimits

0x938b,	// (0x0005e36d) bg_popup_window_pane_g3

0x9397,	// (0x0005e379) bg_popup_window_pane_g4_ParamLimits

0x9397,	// (0x0005e379) bg_popup_window_pane_g4

0x93a3,	// (0x0005e385) bg_popup_window_pane_g5_ParamLimits

0x93a3,	// (0x0005e385) bg_popup_window_pane_g5

0x93af,	// (0x0005e391) bg_popup_window_pane_g6_ParamLimits

0x93af,	// (0x0005e391) bg_popup_window_pane_g6

0x93bb,	// (0x0005e39d) bg_popup_window_pane_g7_ParamLimits

0x93bb,	// (0x0005e39d) bg_popup_window_pane_g7

0x93c7,	// (0x0005e3a9) bg_popup_window_pane_g8_ParamLimits

0x93c7,	// (0x0005e3a9) bg_popup_window_pane_g8

0x93d3,	// (0x0005e3b5) bg_popup_window_pane_g9_ParamLimits

0x93d3,	// (0x0005e3b5) bg_popup_window_pane_g9

0x93df,	// (0x0005e3c1) bg_popup_window_pane_g10_ParamLimits

0x93df,	// (0x0005e3c1) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x000648bc) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x000648bc) bg_popup_window_pane_g

0x9308,	// (0x0005e2ea) bg_popup_heading_pane_ParamLimits

0x9308,	// (0x0005e2ea) bg_popup_heading_pane

0x6a70,	// (0x0005ba52) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a70,	// (0x0005ba52) tabs_4_passive_pane_cp_srt

0x6a82,	// (0x0005ba64) tabs_4_passive_pane_srt_ParamLimits

0x931c,	// (0x0005e2fe) heading_pane_g2

0x6a82,	// (0x0005ba64) tabs_4_passive_pane_srt

0x6496,	// (0x0005b478) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6496,	// (0x0005b478) bg_passive_tab_pane_cp3_srt

0x9324,	// (0x0005e306) heading_pane_t1_ParamLimits

0x9324,	// (0x0005e306) heading_pane_t1

0x933b,	// (0x0005e31d) heading_pane_t2_ParamLimits

0x933b,	// (0x0005e31d) heading_pane_t2

0x0001,

0xf8d5,	// (0x000648b7) heading_pane_t_ParamLimits

0xf8d5,	// (0x000648b7) heading_pane_t

0x8e33,	// (0x0005de15) bg_popup_heading_pane_g1

0x8ee2,	// (0x0005dec4) bg_popup_heading_pane_g2

0x8eec,	// (0x0005dece) bg_popup_heading_pane_g3

0x8ef6,	// (0x0005ded8) bg_popup_heading_pane_g4

0x8f00,	// (0x0005dee2) bg_popup_heading_pane_g5

0x8f0a,	// (0x0005deec) bg_popup_heading_pane_g6

0x8f12,	// (0x0005def4) bg_popup_heading_pane_g7

0x8f1a,	// (0x0005defc) bg_popup_heading_pane_g8

0x8f24,	// (0x0005df06) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00064873) bg_popup_heading_pane_g

0x8641,	// (0x0005d623) bg_popup_sub_pane_g1

0x8651,	// (0x0005d633) bg_popup_sub_pane_g2

0x8649,	// (0x0005d62b) bg_popup_sub_pane_g3

0x8661,	// (0x0005d643) bg_popup_sub_pane_g4

0x8659,	// (0x0005d63b) bg_popup_sub_pane_g5

0x8669,	// (0x0005d64b) bg_popup_sub_pane_g6

0x8671,	// (0x0005d653) bg_popup_sub_pane_g7

0x8681,	// (0x0005d663) bg_popup_sub_pane_g8

0x8679,	// (0x0005d65b) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0006484d) bg_popup_sub_pane_g

0xc19e,	// (0x00061180) bg_popup_window_pane_cp5_ParamLimits

0xc19e,	// (0x00061180) bg_popup_window_pane_cp5

0xc1ba,	// (0x0006119c) popup_note_window_g1_ParamLimits

0xc1ba,	// (0x0006119c) popup_note_window_g1

0xc1c6,	// (0x000611a8) popup_note_window_t1_ParamLimits

0xc1c6,	// (0x000611a8) popup_note_window_t1

0xc1dc,	// (0x000611be) popup_note_window_t2_ParamLimits

0xc1dc,	// (0x000611be) popup_note_window_t2

0xc1f2,	// (0x000611d4) popup_note_window_t3_ParamLimits

0xc1f2,	// (0x000611d4) popup_note_window_t3

0xc208,	// (0x000611ea) popup_note_window_t4_ParamLimits

0xc208,	// (0x000611ea) popup_note_window_t4

0xc230,	// (0x00061212) popup_note_window_t5_ParamLimits

0xc230,	// (0x00061212) popup_note_window_t5

0x0004,

0xf57f,	// (0x00064561) popup_note_window_t_ParamLimits

0xf57f,	// (0x00064561) popup_note_window_t

0xc254,	// (0x00061236) bg_popup_window_pane_cp6_ParamLimits

0xc254,	// (0x00061236) bg_popup_window_pane_cp6

0x8daf,	// (0x0005dd91) popup_note_image_window_g1_ParamLimits

0x8daf,	// (0x0005dd91) popup_note_image_window_g1

0x8dbb,	// (0x0005dd9d) popup_note_image_window_g2_ParamLimits

0x8dbb,	// (0x0005dd9d) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00064841) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00064841) popup_note_image_window_g

0x8dd4,	// (0x0005ddb6) popup_note_image_window_t1_ParamLimits

0x8dd4,	// (0x0005ddb6) popup_note_image_window_t1

0x8ded,	// (0x0005ddcf) popup_note_image_window_t2_ParamLimits

0x8ded,	// (0x0005ddcf) popup_note_image_window_t2

0x8e06,	// (0x0005dde8) popup_note_image_window_t3_ParamLimits

0x8e06,	// (0x0005dde8) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00064846) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00064846) popup_note_image_window_t

0x8c6f,	// (0x0005dc51) bg_popup_window_pane_cp7_ParamLimits

0x8c6f,	// (0x0005dc51) bg_popup_window_pane_cp7

0x8c9f,	// (0x0005dc81) popup_note_wait_window_g1_ParamLimits

0x8c9f,	// (0x0005dc81) popup_note_wait_window_g1

0x8cab,	// (0x0005dc8d) popup_note_wait_window_g2_ParamLimits

0x8cab,	// (0x0005dc8d) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0006482f) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0006482f) popup_note_wait_window_g

0x8cc3,	// (0x0005dca5) popup_note_wait_window_t1_ParamLimits

0x8cc3,	// (0x0005dca5) popup_note_wait_window_t1

0x8cea,	// (0x0005dccc) popup_note_wait_window_t2_ParamLimits

0x8cea,	// (0x0005dccc) popup_note_wait_window_t2

0x8d08,	// (0x0005dcea) popup_note_wait_window_t3_ParamLimits

0x8d08,	// (0x0005dcea) popup_note_wait_window_t3

0x8d1b,	// (0x0005dcfd) popup_note_wait_window_t4_ParamLimits

0x8d1b,	// (0x0005dcfd) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00064836) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00064836) popup_note_wait_window_t

0x8d40,	// (0x0005dd22) wait_bar_pane_ParamLimits

0x8d40,	// (0x0005dd22) wait_bar_pane

0xc011,	// (0x00060ff3) wait_anim_pane

0xc011,	// (0x00060ff3) wait_border_pane

0xc007,	// (0x00060fe9) wait_anim_pane_g1

0xc007,	// (0x00060fe9) wait_anim_pane_g2

0x0001,

0xf708,	// (0x000646ea) wait_anim_pane_g

0x8c13,	// (0x0005dbf5) wait_border_pane_g1

0x8c1e,	// (0x0005dc00) wait_border_pane_g2

0x8c27,	// (0x0005dc09) wait_border_pane_g3

0x0002,

0xf846,	// (0x00064828) wait_border_pane_g

0x8a7d,	// (0x0005da5f) bg_popup_window_pane_cp16_ParamLimits

0x8a7d,	// (0x0005da5f) bg_popup_window_pane_cp16

0x8b7d,	// (0x0005db5f) indicator_popup_pane_cp4_ParamLimits

0x8b7d,	// (0x0005db5f) indicator_popup_pane_cp4

0x8b91,	// (0x0005db73) popup_query_data_window_t1_ParamLimits

0x8b91,	// (0x0005db73) popup_query_data_window_t1

0x8ba3,	// (0x0005db85) popup_query_data_window_t2_ParamLimits

0x8ba3,	// (0x0005db85) popup_query_data_window_t2

0x8bbc,	// (0x0005db9e) popup_query_data_window_t3_ParamLimits

0x8bbc,	// (0x0005db9e) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00064821) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00064821) popup_query_data_window_t

0x8bd6,	// (0x0005dbb8) query_popup_data_pane_ParamLimits

0x8bd6,	// (0x0005dbb8) query_popup_data_pane

0x8bea,	// (0x0005dbcc) query_popup_data_pane_cp1_ParamLimits

0x8bea,	// (0x0005dbcc) query_popup_data_pane_cp1

0x8a7d,	// (0x0005da5f) bg_popup_window_pane_cp10_ParamLimits

0x8a7d,	// (0x0005da5f) bg_popup_window_pane_cp10

0x8aaf,	// (0x0005da91) indicator_popup_pane_ParamLimits

0x8aaf,	// (0x0005da91) indicator_popup_pane

0x8ad1,	// (0x0005dab3) popup_query_code_window_t1_ParamLimits

0x8ad1,	// (0x0005dab3) popup_query_code_window_t1

0x8aeb,	// (0x0005dacd) popup_query_code_window_t2_ParamLimits

0x8aeb,	// (0x0005dacd) popup_query_code_window_t2

0x8b34,	// (0x0005db16) popup_query_code_window_t3_ParamLimits

0x8b34,	// (0x0005db16) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0006481a) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0006481a) popup_query_code_window_t

0x8b63,	// (0x0005db45) query_popup_pane_ParamLimits

0x8b63,	// (0x0005db45) query_popup_pane

0xc254,	// (0x00061236) bg_popup_window_pane_cp15_ParamLimits

0xc254,	// (0x00061236) bg_popup_window_pane_cp15

0xc274,	// (0x00061256) indicator_popup_pane_cp1_ParamLimits

0xc274,	// (0x00061256) indicator_popup_pane_cp1

0xc287,	// (0x00061269) indicator_popup_pane_cp2_ParamLimits

0xc287,	// (0x00061269) indicator_popup_pane_cp2

0xc2a2,	// (0x00061284) popup_query_data_code_window_g1_ParamLimits

0xc2a2,	// (0x00061284) popup_query_data_code_window_g1

0xc2b5,	// (0x00061297) popup_query_data_code_window_t1_ParamLimits

0xc2b5,	// (0x00061297) popup_query_data_code_window_t1

0xc2c7,	// (0x000612a9) popup_query_data_code_window_t2_ParamLimits

0xc2c7,	// (0x000612a9) popup_query_data_code_window_t2

0xc2d9,	// (0x000612bb) popup_query_data_code_window_t3_ParamLimits

0xc2d9,	// (0x000612bb) popup_query_data_code_window_t3

0xc2ef,	// (0x000612d1) popup_query_data_code_window_t4_ParamLimits

0xc2ef,	// (0x000612d1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006456c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006456c) popup_query_data_code_window_t

0x6625,	// (0x0005b607) list_single_midp_graphic_pane_g3

0xc309,	// (0x000612eb) query_popup_data_pane_cp2_ParamLimits

0xc31c,	// (0x000612fe) query_popup_pane_cp2_ParamLimits

0xc31c,	// (0x000612fe) query_popup_pane_cp2

0xc011,	// (0x00060ff3) bg_popup_window_pane_cp11

0x8a75,	// (0x0005da57) heading_pane_cp5

0xc3b2,	// (0x00061394) listscroll_popup_info_pane

0xc011,	// (0x00060ff3) input_focus_pane_cp3

0xc337,	// (0x00061319) query_popup_pane_t1

0xc345,	// (0x00061327) list_popup_info_pane_ParamLimits

0xc345,	// (0x00061327) list_popup_info_pane

0xc354,	// (0x00061336) listscroll_popup_info_pane_g1

0xc35c,	// (0x0006133e) scroll_pane_cp7

0xc366,	// (0x00061348) popup_info_list_pane_t1_ParamLimits

0xc366,	// (0x00061348) popup_info_list_pane_t1

0xc380,	// (0x00061362) popup_info_list_pane_t2_ParamLimits

0xc380,	// (0x00061362) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00064575) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00064575) popup_info_list_pane_t

0xc011,	// (0x00060ff3) bg_popup_window_pane_cp12

0x9fe1,	// (0x0005efc3) find_popup_pane

0xc06b,	// (0x0006104d) bg_popup_window_pane_cp3

0xc39a,	// (0x0006137c) heading_pane_cp3

0xc3a6,	// (0x00061388) listscroll_popup_graphic_pane

0xc011,	// (0x00060ff3) bg_popup_window_pane_cp4

0x5199,	// (0x0005a17b) heading_pane_cp4

0xc3b2,	// (0x00061394) listscroll_popup_colour_pane

0x51a3,	// (0x0005a185) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x51a3,	// (0x0005a185) cell_large_graphic_colour_none_popup_pane

0x51b7,	// (0x0005a199) grid_large_graphic_colour_popup_pane_ParamLimits

0x51b7,	// (0x0005a199) grid_large_graphic_colour_popup_pane

0x51e3,	// (0x0005a1c5) listscroll_popup_colour_pane_g1_ParamLimits

0x51e3,	// (0x0005a1c5) listscroll_popup_colour_pane_g1

0x51fa,	// (0x0005a1dc) listscroll_popup_colour_pane_g2_ParamLimits

0x51fa,	// (0x0005a1dc) listscroll_popup_colour_pane_g2

0x5211,	// (0x0005a1f3) listscroll_popup_colour_pane_g3_ParamLimits

0x5211,	// (0x0005a1f3) listscroll_popup_colour_pane_g3

0x5221,	// (0x0005a203) listscroll_popup_colour_pane_g4_ParamLimits

0x5221,	// (0x0005a203) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006457a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006457a) listscroll_popup_colour_pane_g

0xc3ba,	// (0x0006139c) scroll_pane_cp6_ParamLimits

0xc3ba,	// (0x0006139c) scroll_pane_cp6

0x5235,	// (0x0005a217) cell_large_graphic_colour_popup_pane_ParamLimits

0x5235,	// (0x0005a217) cell_large_graphic_colour_popup_pane

0xc3cc,	// (0x000613ae) cell_large_graphic_colour_none_popup_pane_t1

0xc011,	// (0x00060ff3) grid_highlight_pane_cp5

0xc3db,	// (0x000613bd) cell_large_graphic_colour_popup_pane_g1

0xc3e3,	// (0x000613c5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00064583) cell_large_graphic_colour_popup_pane_g

0xc3eb,	// (0x000613cd) cell_large_graphic_colour_popup_pane_g2_copy1

0xc3f4,	// (0x000613d6) grid_highlight_pane_cp4

0xc3fc,	// (0x000613de) bg_popup_window_pane_cp8_ParamLimits

0xc3fc,	// (0x000613de) bg_popup_window_pane_cp8

0xc417,	// (0x000613f9) popup_snote_single_text_window_g1_ParamLimits

0xc417,	// (0x000613f9) popup_snote_single_text_window_g1

0xc429,	// (0x0006140b) popup_snote_single_text_window_t1_ParamLimits

0xc429,	// (0x0006140b) popup_snote_single_text_window_t1

0xc43c,	// (0x0006141e) popup_snote_single_text_window_t2_ParamLimits

0xc43c,	// (0x0006141e) popup_snote_single_text_window_t2

0xc44f,	// (0x00061431) popup_snote_single_text_window_t3_ParamLimits

0xc44f,	// (0x00061431) popup_snote_single_text_window_t3

0xc488,	// (0x0006146a) popup_snote_single_text_window_t4_ParamLimits

0xc488,	// (0x0006146a) popup_snote_single_text_window_t4

0xc4bc,	// (0x0006149e) popup_snote_single_text_window_t5_ParamLimits

0xc4bc,	// (0x0006149e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00064588) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00064588) popup_snote_single_text_window_t

0xc4eb,	// (0x000614cd) bg_popup_window_pane_cp9_ParamLimits

0xc4eb,	// (0x000614cd) bg_popup_window_pane_cp9

0xc417,	// (0x000613f9) popup_snote_single_graphic_window_g1_ParamLimits

0xc417,	// (0x000613f9) popup_snote_single_graphic_window_g1

0xc4f9,	// (0x000614db) popup_snote_single_graphic_window_g2_ParamLimits

0xc4f9,	// (0x000614db) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00064593) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00064593) popup_snote_single_graphic_window_g

0xc505,	// (0x000614e7) popup_snote_single_graphic_window_t1_ParamLimits

0xc505,	// (0x000614e7) popup_snote_single_graphic_window_t1

0xc518,	// (0x000614fa) popup_snote_single_graphic_window_t2_ParamLimits

0xc518,	// (0x000614fa) popup_snote_single_graphic_window_t2

0xc52b,	// (0x0006150d) popup_snote_single_graphic_window_t3_ParamLimits

0xc52b,	// (0x0006150d) popup_snote_single_graphic_window_t3

0xc564,	// (0x00061546) popup_snote_single_graphic_window_t4_ParamLimits

0xc564,	// (0x00061546) popup_snote_single_graphic_window_t4

0xc598,	// (0x0006157a) popup_snote_single_graphic_window_t5_ParamLimits

0xc598,	// (0x0006157a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00064598) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00064598) popup_snote_single_graphic_window_t

0x9f1f,	// (0x0005ef01) grid_graphic_popup_pane_ParamLimits

0x9f1f,	// (0x0005ef01) grid_graphic_popup_pane

0x9f4d,	// (0x0005ef2f) listscroll_popup_graphic_pane_g1_ParamLimits

0x9f4d,	// (0x0005ef2f) listscroll_popup_graphic_pane_g1

0x9f61,	// (0x0005ef43) listscroll_popup_graphic_pane_g2_ParamLimits

0x9f61,	// (0x0005ef43) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00064997) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00064997) listscroll_popup_graphic_pane_g

0x9f75,	// (0x0005ef57) scroll_pane_cp5

0x9ec7,	// (0x0005eea9) cell_graphic_popup_pane_ParamLimits

0x9ec7,	// (0x0005eea9) cell_graphic_popup_pane

0x9ea8,	// (0x0005ee8a) cell_graphic_popup_pane_g1

0x9eb0,	// (0x0005ee92) cell_graphic_popup_pane_g2

0xc3eb,	// (0x000613cd) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00064990) cell_graphic_popup_pane_g

0x9eb9,	// (0x0005ee9b) cell_graphic_popup_pane_t2

0xc3f4,	// (0x000613d6) grid_highlight_pane_cp3

0xc5d9,	// (0x000615bb) list_gen_pane_ParamLimits

0xc5d9,	// (0x000615bb) list_gen_pane

0xc601,	// (0x000615e3) scroll_pane

0x9c73,	// (0x0005ec55) bg_list_pane_g1_ParamLimits

0x9c73,	// (0x0005ec55) bg_list_pane_g1

0x9e1d,	// (0x0005edff) bg_list_pane_g2_ParamLimits

0x9e1d,	// (0x0005edff) bg_list_pane_g2

0x9e32,	// (0x0005ee14) bg_list_pane_g3_ParamLimits

0x9e32,	// (0x0005ee14) bg_list_pane_g3

0x9e46,	// (0x0005ee28) bg_list_pane_g4_ParamLimits

0x9e46,	// (0x0005ee28) bg_list_pane_g4

0x9e5a,	// (0x0005ee3c) bg_list_pane_g5_ParamLimits

0x9e5a,	// (0x0005ee3c) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00064985) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00064985) bg_list_pane_g

0x6a0c,	// (0x0005b9ee) list_double2_graphic_large_graphic_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double2_graphic_large_graphic_pane

0x6a0c,	// (0x0005b9ee) list_double2_graphic_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double2_graphic_pane

0x6a0c,	// (0x0005b9ee) list_double2_large_graphic_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double2_large_graphic_pane

0x6a0c,	// (0x0005b9ee) list_double2_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double2_pane

0x6a0c,	// (0x0005b9ee) list_double_graphic_heading_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double_graphic_heading_pane

0x6a0c,	// (0x0005b9ee) list_double_graphic_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double_graphic_pane

0x6a0c,	// (0x0005b9ee) list_double_heading_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double_heading_pane

0x6a0c,	// (0x0005b9ee) list_double_large_graphic_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double_large_graphic_pane

0x6a0c,	// (0x0005b9ee) list_double_number_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double_number_pane

0x6a0c,	// (0x0005b9ee) list_double_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double_pane

0x6a0c,	// (0x0005b9ee) list_double_time_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_double_time_pane

0x6a0c,	// (0x0005b9ee) list_setting_number_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_setting_number_pane

0x6a0c,	// (0x0005b9ee) list_setting_pane_ParamLimits

0x6a0c,	// (0x0005b9ee) list_setting_pane

0x9c2f,	// (0x0005ec11) list_single_2graphic_pane_ParamLimits

0x9c2f,	// (0x0005ec11) list_single_2graphic_pane

0x9c2f,	// (0x0005ec11) list_single_graphic_heading_pane_ParamLimits

0x9c2f,	// (0x0005ec11) list_single_graphic_heading_pane

0x9c2f,	// (0x0005ec11) list_single_graphic_pane_ParamLimits

0x9c2f,	// (0x0005ec11) list_single_graphic_pane

0x9c2f,	// (0x0005ec11) list_single_heading_pane_ParamLimits

0x9c2f,	// (0x0005ec11) list_single_heading_pane

0x6a34,	// (0x0005ba16) list_single_large_graphic_pane_ParamLimits

0x6a34,	// (0x0005ba16) list_single_large_graphic_pane

0x9c2f,	// (0x0005ec11) list_single_number_heading_pane_ParamLimits

0x9c2f,	// (0x0005ec11) list_single_number_heading_pane

0x9c2f,	// (0x0005ec11) list_single_number_pane_ParamLimits

0x9c2f,	// (0x0005ec11) list_single_number_pane

0x9c2f,	// (0x0005ec11) list_single_pane_ParamLimits

0x9c2f,	// (0x0005ec11) list_single_pane

0xc011,	// (0x00060ff3) list_highlight_pane_cp1

0x1a76,	// (0x00056a58) list_single_pane_g1_ParamLimits

0x1a76,	// (0x00056a58) list_single_pane_g1

0x5270,	// (0x0005a252) list_single_pane_g2_ParamLimits

0x5270,	// (0x0005a252) list_single_pane_g2

0x0001,

0xf5d2,	// (0x000645b4) list_single_pane_g_ParamLimits

0xf5d2,	// (0x000645b4) list_single_pane_g

0x69f6,	// (0x0005b9d8) list_single_pane_t1_ParamLimits

0x69f6,	// (0x0005b9d8) list_single_pane_t1

0x1a76,	// (0x00056a58) list_single_number_pane_g1_ParamLimits

0x1a76,	// (0x00056a58) list_single_number_pane_g1

0x5270,	// (0x0005a252) list_single_number_pane_g2_ParamLimits

0x5270,	// (0x0005a252) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x000645b4) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x000645b4) list_single_number_pane_g

0x6920,	// (0x0005b902) list_single_number_pane_t1_ParamLimits

0x6920,	// (0x0005b902) list_single_number_pane_t1

0x6936,	// (0x0005b918) list_single_number_pane_t2_ParamLimits

0x6936,	// (0x0005b918) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00064946) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00064946) list_single_number_pane_t

0x5264,	// (0x0005a246) list_single_graphic_pane_g1_ParamLimits

0x5264,	// (0x0005a246) list_single_graphic_pane_g1

0x1a76,	// (0x00056a58) list_single_graphic_pane_g2_ParamLimits

0x1a76,	// (0x00056a58) list_single_graphic_pane_g2

0x5270,	// (0x0005a252) list_single_graphic_pane_g3_ParamLimits

0x5270,	// (0x0005a252) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000645a3) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000645a3) list_single_graphic_pane_g

0x527c,	// (0x0005a25e) list_single_graphic_pane_t1_ParamLimits

0x527c,	// (0x0005a25e) list_single_graphic_pane_t1

0x5292,	// (0x0005a274) list_single_heading_pane_g1_ParamLimits

0x5292,	// (0x0005a274) list_single_heading_pane_g1

0x5270,	// (0x0005a252) list_single_heading_pane_g2_ParamLimits

0x5270,	// (0x0005a252) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000645aa) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000645aa) list_single_heading_pane_g

0x52a5,	// (0x0005a287) list_single_heading_pane_t1_ParamLimits

0x52a5,	// (0x0005a287) list_single_heading_pane_t1

0x52bb,	// (0x0005a29d) list_single_heading_pane_t2_ParamLimits

0x52bb,	// (0x0005a29d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000645af) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000645af) list_single_heading_pane_t

0x1a76,	// (0x00056a58) list_single_number_heading_pane_g1_ParamLimits

0x1a76,	// (0x00056a58) list_single_number_heading_pane_g1

0x5270,	// (0x0005a252) list_single_number_heading_pane_g2_ParamLimits

0x5270,	// (0x0005a252) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x000645b4) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x000645b4) list_single_number_heading_pane_g

0x52cd,	// (0x0005a2af) list_single_number_heading_pane_t1_ParamLimits

0x52cd,	// (0x0005a2af) list_single_number_heading_pane_t1

0x52e3,	// (0x0005a2c5) list_single_number_heading_pane_t2_ParamLimits

0x52e3,	// (0x0005a2c5) list_single_number_heading_pane_t2

0x52f5,	// (0x0005a2d7) list_single_number_heading_pane_t3_ParamLimits

0x52f5,	// (0x0005a2d7) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000645b9) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000645b9) list_single_number_heading_pane_t

0x5307,	// (0x0005a2e9) list_single_graphic_heading_pane_g1_ParamLimits

0x5307,	// (0x0005a2e9) list_single_graphic_heading_pane_g1

0x531f,	// (0x0005a301) list_single_graphic_heading_pane_g4_ParamLimits

0x531f,	// (0x0005a301) list_single_graphic_heading_pane_g4

0x5270,	// (0x0005a252) list_single_graphic_heading_pane_g5_ParamLimits

0x5270,	// (0x0005a252) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000645c0) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000645c0) list_single_graphic_heading_pane_g

0x52cd,	// (0x0005a2af) list_single_graphic_heading_pane_t1_ParamLimits

0x52cd,	// (0x0005a2af) list_single_graphic_heading_pane_t1

0x5330,	// (0x0005a312) list_single_graphic_heading_pane_t2_ParamLimits

0x5330,	// (0x0005a312) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000645c7) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000645c7) list_single_graphic_heading_pane_t

0x5348,	// (0x0005a32a) list_single_large_graphic_pane_g1_ParamLimits

0x5348,	// (0x0005a32a) list_single_large_graphic_pane_g1

0x5354,	// (0x0005a336) list_single_large_graphic_pane_g2_ParamLimits

0x5354,	// (0x0005a336) list_single_large_graphic_pane_g2

0x5360,	// (0x0005a342) list_single_large_graphic_pane_g3_ParamLimits

0x5360,	// (0x0005a342) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000645cc) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000645cc) list_single_large_graphic_pane_g

0x8c1e,	// (0x0005dc00) wait_border_pane_g2_copy1

0x536c,	// (0x0005a34e) list_single_large_graphic_pane_g4_cp2

0x5374,	// (0x0005a356) list_single_large_graphic_pane_t1_ParamLimits

0x5374,	// (0x0005a356) list_single_large_graphic_pane_t1

0x538a,	// (0x0005a36c) list_double_pane_g1_ParamLimits

0x538a,	// (0x0005a36c) list_double_pane_g1

0x5396,	// (0x0005a378) list_double_pane_g2_ParamLimits

0x5396,	// (0x0005a378) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000645d3) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000645d3) list_double_pane_g

0x53a2,	// (0x0005a384) list_double_pane_t1_ParamLimits

0x53a2,	// (0x0005a384) list_double_pane_t1

0x53b8,	// (0x0005a39a) list_double_pane_t2_ParamLimits

0x53b8,	// (0x0005a39a) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000645d8) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000645d8) list_double_pane_t

0x53ca,	// (0x0005a3ac) list_double2_pane_g1_ParamLimits

0x53ca,	// (0x0005a3ac) list_double2_pane_g1

0x53db,	// (0x0005a3bd) list_double2_pane_g2_ParamLimits

0x53db,	// (0x0005a3bd) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000645dd) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000645dd) list_double2_pane_g

0x53e7,	// (0x0005a3c9) list_double2_pane_t1_ParamLimits

0x53e7,	// (0x0005a3c9) list_double2_pane_t1

0x53fd,	// (0x0005a3df) list_double2_pane_t2_ParamLimits

0x53fd,	// (0x0005a3df) list_double2_pane_t2

0x0001,

0xf600,	// (0x000645e2) list_double2_pane_t_ParamLimits

0xf600,	// (0x000645e2) list_double2_pane_t

0x538a,	// (0x0005a36c) list_double_number_pane_g1_ParamLimits

0x538a,	// (0x0005a36c) list_double_number_pane_g1

0x5396,	// (0x0005a378) list_double_number_pane_g2_ParamLimits

0x5396,	// (0x0005a378) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000645d3) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000645d3) list_double_number_pane_g

0x540f,	// (0x0005a3f1) list_double_number_pane_t1_ParamLimits

0x540f,	// (0x0005a3f1) list_double_number_pane_t1

0x5421,	// (0x0005a403) list_double_number_pane_t2_ParamLimits

0x5421,	// (0x0005a403) list_double_number_pane_t2

0x5437,	// (0x0005a419) list_double_number_pane_t3_ParamLimits

0x5437,	// (0x0005a419) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000645e7) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000645e7) list_double_number_pane_t

0x5449,	// (0x0005a42b) list_double_graphic_pane_g1_ParamLimits

0x5449,	// (0x0005a42b) list_double_graphic_pane_g1

0x5455,	// (0x0005a437) list_double_graphic_pane_g2_ParamLimits

0x5455,	// (0x0005a437) list_double_graphic_pane_g2

0x5464,	// (0x0005a446) list_double_graphic_pane_g3_ParamLimits

0x5464,	// (0x0005a446) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000645ee) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000645ee) list_double_graphic_pane_g

0x547c,	// (0x0005a45e) list_double_graphic_pane_t1_ParamLimits

0x547c,	// (0x0005a45e) list_double_graphic_pane_t1

0x5492,	// (0x0005a474) list_double_graphic_pane_t2_ParamLimits

0x5492,	// (0x0005a474) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000645f7) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000645f7) list_double_graphic_pane_t

0x3162,	// (0x00058144) list_double2_graphic_pane_g1_ParamLimits

0x3162,	// (0x00058144) list_double2_graphic_pane_g1

0x54a4,	// (0x0005a486) list_double2_graphic_pane_g2_ParamLimits

0x54a4,	// (0x0005a486) list_double2_graphic_pane_g2

0x54b0,	// (0x0005a492) list_double2_graphic_pane_g3_ParamLimits

0x54b0,	// (0x0005a492) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000645fc) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000645fc) list_double2_graphic_pane_g

0x54bc,	// (0x0005a49e) list_double2_graphic_pane_t1_ParamLimits

0x54bc,	// (0x0005a49e) list_double2_graphic_pane_t1

0x54d2,	// (0x0005a4b4) list_double2_graphic_pane_t2_ParamLimits

0x54d2,	// (0x0005a4b4) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00064603) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00064603) list_double2_graphic_pane_t

0x54e4,	// (0x0005a4c6) list_double_large_graphic_pane_g1_ParamLimits

0x54e4,	// (0x0005a4c6) list_double_large_graphic_pane_g1

0x550f,	// (0x0005a4f1) list_double_large_graphic_pane_g2_ParamLimits

0x550f,	// (0x0005a4f1) list_double_large_graphic_pane_g2

0x5396,	// (0x0005a378) list_double_large_graphic_pane_g3_ParamLimits

0x5396,	// (0x0005a378) list_double_large_graphic_pane_g3

0x5525,	// (0x0005a507) list_double_large_graphic_pane_g4_ParamLimits

0x5525,	// (0x0005a507) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00064608) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00064608) list_double_large_graphic_pane_g

0x5538,	// (0x0005a51a) list_double_large_graphic_pane_t1_ParamLimits

0x5538,	// (0x0005a51a) list_double_large_graphic_pane_t1

0x5551,	// (0x0005a533) list_double_large_graphic_pane_t2_ParamLimits

0x5551,	// (0x0005a533) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00064613) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00064613) list_double_large_graphic_pane_t

0x5563,	// (0x0005a545) list_double2_large_graphic_pane_g1_ParamLimits

0x5563,	// (0x0005a545) list_double2_large_graphic_pane_g1

0x556f,	// (0x0005a551) list_double2_large_graphic_pane_g2_ParamLimits

0x556f,	// (0x0005a551) list_double2_large_graphic_pane_g2

0x54b0,	// (0x0005a492) list_double2_large_graphic_pane_g3_ParamLimits

0x54b0,	// (0x0005a492) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00064618) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00064618) list_double2_large_graphic_pane_g

0x5580,	// (0x0005a562) list_double2_large_graphic_pane_t1_ParamLimits

0x5580,	// (0x0005a562) list_double2_large_graphic_pane_t1

0x5596,	// (0x0005a578) list_double2_large_graphic_pane_t2_ParamLimits

0x5596,	// (0x0005a578) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006461f) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006461f) list_double2_large_graphic_pane_t

0x55a8,	// (0x0005a58a) list_double_heading_pane_g1_ParamLimits

0x55a8,	// (0x0005a58a) list_double_heading_pane_g1

0x55b9,	// (0x0005a59b) list_double_heading_pane_g2_ParamLimits

0x55b9,	// (0x0005a59b) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00064624) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00064624) list_double_heading_pane_g

0x55c5,	// (0x0005a5a7) list_double_heading_pane_t1_ParamLimits

0x55c5,	// (0x0005a5a7) list_double_heading_pane_t1

0x55db,	// (0x0005a5bd) list_double_heading_pane_t2_ParamLimits

0x55db,	// (0x0005a5bd) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00064629) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00064629) list_double_heading_pane_t

0x5449,	// (0x0005a42b) list_double_graphic_heading_pane_g1_ParamLimits

0x5449,	// (0x0005a42b) list_double_graphic_heading_pane_g1

0x55a8,	// (0x0005a58a) list_double_graphic_heading_pane_g2_ParamLimits

0x55a8,	// (0x0005a58a) list_double_graphic_heading_pane_g2

0x55b9,	// (0x0005a59b) list_double_graphic_heading_pane_g3_ParamLimits

0x55b9,	// (0x0005a59b) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006462e) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006462e) list_double_graphic_heading_pane_g

0x55ed,	// (0x0005a5cf) list_double_graphic_heading_pane_t1_ParamLimits

0x55ed,	// (0x0005a5cf) list_double_graphic_heading_pane_t1

0x5603,	// (0x0005a5e5) list_double_graphic_heading_pane_t2_ParamLimits

0x5603,	// (0x0005a5e5) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00064635) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00064635) list_double_graphic_heading_pane_t

0x5615,	// (0x0005a5f7) list_double_time_pane_g1_ParamLimits

0x5615,	// (0x0005a5f7) list_double_time_pane_g1

0x5626,	// (0x0005a608) list_double_time_pane_g2_ParamLimits

0x5626,	// (0x0005a608) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006463a) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006463a) list_double_time_pane_g

0x5632,	// (0x0005a614) list_double_time_pane_t1_ParamLimits

0x5632,	// (0x0005a614) list_double_time_pane_t1

0x5648,	// (0x0005a62a) list_double_time_pane_t2_ParamLimits

0x5648,	// (0x0005a62a) list_double_time_pane_t2

0x565a,	// (0x0005a63c) list_double_time_pane_t3_ParamLimits

0x565a,	// (0x0005a63c) list_double_time_pane_t3

0x566c,	// (0x0005a64e) list_double_time_pane_t4_ParamLimits

0x566c,	// (0x0005a64e) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0006463f) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0006463f) list_double_time_pane_t

0x567e,	// (0x0005a660) list_setting_pane_g1_ParamLimits

0x567e,	// (0x0005a660) list_setting_pane_g1

0x568a,	// (0x0005a66c) list_setting_pane_g2_ParamLimits

0x568a,	// (0x0005a66c) list_setting_pane_g2

0x0001,

0xf666,	// (0x00064648) list_setting_pane_g_ParamLimits

0xf666,	// (0x00064648) list_setting_pane_g

0x5696,	// (0x0005a678) list_setting_pane_t1_ParamLimits

0x5696,	// (0x0005a678) list_setting_pane_t1

0x56b0,	// (0x0005a692) list_setting_pane_t2_ParamLimits

0x56b0,	// (0x0005a692) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006464d) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006464d) list_setting_pane_t

0x56ef,	// (0x0005a6d1) set_value_pane_cp_ParamLimits

0x56ef,	// (0x0005a6d1) set_value_pane_cp

0x56fd,	// (0x0005a6df) list_setting_number_pane_g1_ParamLimits

0x56fd,	// (0x0005a6df) list_setting_number_pane_g1

0x5709,	// (0x0005a6eb) list_setting_number_pane_g2_ParamLimits

0x5709,	// (0x0005a6eb) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00064654) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00064654) list_setting_number_pane_g

0x5715,	// (0x0005a6f7) list_setting_number_pane_t1_ParamLimits

0x5715,	// (0x0005a6f7) list_setting_number_pane_t1

0x572e,	// (0x0005a710) list_setting_number_pane_t2_ParamLimits

0x572e,	// (0x0005a710) list_setting_number_pane_t2

0x5748,	// (0x0005a72a) list_setting_number_pane_t3_ParamLimits

0x5748,	// (0x0005a72a) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00064659) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00064659) list_setting_number_pane_t

0x56ef,	// (0x0005a6d1) set_value_pane_ParamLimits

0x56ef,	// (0x0005a6d1) set_value_pane

0xec6f,	// (0x00063c51) bg_set_opt_pane_ParamLimits

0xec6f,	// (0x00063c51) bg_set_opt_pane

0x316e,	// (0x00058150) set_value_pane_t1

0xec90,	// (0x00063c72) slider_set_pane_cp3

0xec99,	// (0x00063c7b) volume_small_pane_cp

0xeca2,	// (0x00063c84) list_form_gen_pane

0xecab,	// (0x00063c8d) scroll_pane_cp8

0x578b,	// (0x0005a76d) form_field_data_pane_ParamLimits

0x578b,	// (0x0005a76d) form_field_data_pane

0x57ab,	// (0x0005a78d) form_field_data_wide_pane_ParamLimits

0x57ab,	// (0x0005a78d) form_field_data_wide_pane

0x57d2,	// (0x0005a7b4) form_field_popup_pane_ParamLimits

0x57d2,	// (0x0005a7b4) form_field_popup_pane

0x318c,	// (0x0005816e) form_field_popup_wide_pane_ParamLimits

0x318c,	// (0x0005816e) form_field_popup_wide_pane

0x31ad,	// (0x0005818f) form_field_slider_pane_ParamLimits

0x31ad,	// (0x0005818f) form_field_slider_pane

0x31c0,	// (0x000581a2) form_field_slider_wide_pane_ParamLimits

0x31c0,	// (0x000581a2) form_field_slider_wide_pane

0xecbc,	// (0x00063c9e) data_form_pane

0x57fe,	// (0x0005a7e0) form_field_data_pane_t1

0xecc8,	// (0x00063caa) input_focus_pane

0x31d3,	// (0x000581b5) data_form_wide_pane

0x31f0,	// (0x000581d2) form_field_data_wide_pane_t1

0xc409,	// (0x000613eb) input_focus_pane_cp6

0x5818,	// (0x0005a7fa) form_field_popup_pane_t1

0xecc8,	// (0x00063caa) input_focus_pane_cp7

0xecf6,	// (0x00063cd8) list_form_pane

0x321a,	// (0x000581fc) form_field_popup_wide_pane_t1

0xecc8,	// (0x00063caa) input_focus_pane_cp8

0xed02,	// (0x00063ce4) list_form_wide_pane

0x583a,	// (0x0005a81c) form_field_slider_pane_t1_ParamLimits

0x583a,	// (0x0005a81c) form_field_slider_pane_t1

0x5852,	// (0x0005a834) form_field_slider_pane_t2_ParamLimits

0x5852,	// (0x0005a834) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00064669) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00064669) form_field_slider_pane_t

0xc19e,	// (0x00061180) input_focus_pane_cp9_ParamLimits

0xc19e,	// (0x00061180) input_focus_pane_cp9

0x5867,	// (0x0005a849) slider_cont_pane_ParamLimits

0x5867,	// (0x0005a849) slider_cont_pane

0xed11,	// (0x00063cf3) form_field_slider_wide_pane_t1_ParamLimits

0xed11,	// (0x00063cf3) form_field_slider_wide_pane_t1

0x322f,	// (0x00058211) form_field_slider_wide_pane_t2_ParamLimits

0x322f,	// (0x00058211) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006466e) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006466e) form_field_slider_wide_pane_t

0xc19e,	// (0x00061180) input_focus_pane_cp10_ParamLimits

0xc19e,	// (0x00061180) input_focus_pane_cp10

0x587b,	// (0x0005a85d) slider_cont_pane_cp1_ParamLimits

0x587b,	// (0x0005a85d) slider_cont_pane_cp1

0x588f,	// (0x0005a871) slider_form_pane_cp

0xed23,	// (0x00063d05) input_focus_pane_g1

0xed2b,	// (0x00063d0d) input_focus_pane_g2

0xed33,	// (0x00063d15) input_focus_pane_g3

0xed3b,	// (0x00063d1d) input_focus_pane_g4

0xed43,	// (0x00063d25) input_focus_pane_g5

0xed4b,	// (0x00063d2d) input_focus_pane_g6

0xed53,	// (0x00063d35) input_focus_pane_g7

0xed5b,	// (0x00063d3d) input_focus_pane_g8

0xed63,	// (0x00063d45) input_focus_pane_g9

0xc007,	// (0x00060fe9) input_focus_pane_g10

0x0009,

0xf691,	// (0x00064673) input_focus_pane_g

0x8c27,	// (0x0005dc09) wait_border_pane_g3_copy1

0x5897,	// (0x0005a879) data_form_pane_t1

0xc007,	// (0x00060fe9) wait_anim_pane_g1_copy1

0x69c0,	// (0x0005b9a2) data_form_wide_pane_t1

0x3241,	// (0x00058223) list_form_graphic_pane_cp_ParamLimits

0x3241,	// (0x00058223) list_form_graphic_pane_cp

0x9b86,	// (0x0005eb68) slider_form_pane_g1

0x9b8f,	// (0x0005eb71) slider_form_pane_g2

0x0006,

0xf994,	// (0x00064976) slider_form_pane_g

0x3241,	// (0x00058223) list_form_graphic_pane_ParamLimits

0x3241,	// (0x00058223) list_form_graphic_pane

0x3253,	// (0x00058235) list_form_graphic_pane_g1

0x325b,	// (0x0005823d) list_form_graphic_pane_t1_ParamLimits

0x325b,	// (0x0005823d) list_form_graphic_pane_t1

0xc06b,	// (0x0006104d) list_highlight_pane_cp5_ParamLimits

0xc06b,	// (0x0006104d) list_highlight_pane_cp5

0x58b6,	// (0x0005a898) find_pane_g1

0xed6b,	// (0x00063d4d) input_find_pane

0x58bf,	// (0x0005a8a1) input_find_pane_g1_ParamLimits

0x58bf,	// (0x0005a8a1) input_find_pane_g1

0x58cb,	// (0x0005a8ad) input_find_pane_t1_ParamLimits

0x58cb,	// (0x0005a8ad) input_find_pane_t1

0x58e0,	// (0x0005a8c2) input_find_pane_t2_ParamLimits

0x58e0,	// (0x0005a8c2) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00064688) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00064688) input_find_pane_t

0xed74,	// (0x00063d56) input_focus_pane_cp5_ParamLimits

0xed74,	// (0x00063d56) input_focus_pane_cp5

0xed82,	// (0x00063d64) bg_popup_window_pane_cp2_ParamLimits

0xed82,	// (0x00063d64) bg_popup_window_pane_cp2

0xed8f,	// (0x00063d71) listscroll_menu_pane_ParamLimits

0xed8f,	// (0x00063d71) listscroll_menu_pane

0x5901,	// (0x0005a8e3) popup_submenu_window_ParamLimits

0x5901,	// (0x0005a8e3) popup_submenu_window

0xed9b,	// (0x00063d7d) find_popup_pane_g1

0xeda3,	// (0x00063d85) input_popup_find_pane_cp

0xed74,	// (0x00063d56) input_focus_pane_cp4_ParamLimits

0xed74,	// (0x00063d56) input_focus_pane_cp4

0xedad,	// (0x00063d8f) input_popup_find_pane_t1_ParamLimits

0xedad,	// (0x00063d8f) input_popup_find_pane_t1

0xc011,	// (0x00060ff3) bg_popup_sub_pane_cp

0xeddb,	// (0x00063dbd) listscroll_popup_sub_pane

0xede3,	// (0x00063dc5) list_submenu_pane_ParamLimits

0xede3,	// (0x00063dc5) list_submenu_pane

0xedf4,	// (0x00063dd6) scroll_pane_cp4

0xedfc,	// (0x00063dde) list_single_popup_submenu_pane_ParamLimits

0xedfc,	// (0x00063dde) list_single_popup_submenu_pane

0xee11,	// (0x00063df3) list_single_popup_submenu_pane_g1

0xee19,	// (0x00063dfb) list_single_popup_submenu_pane_t1_ParamLimits

0xee19,	// (0x00063dfb) list_single_popup_submenu_pane_t1

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp1_ParamLimits

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp1

0x593f,	// (0x0005a921) tabs_2_active_pane_g1

0x5947,	// (0x0005a929) tabs_2_active_pane_t1

0xc06b,	// (0x0006104d) bg_passive_tab_pane_cp1_ParamLimits

0xc06b,	// (0x0006104d) bg_passive_tab_pane_cp1

0x593f,	// (0x0005a921) tabs_2_passive_pane_g1

0x5947,	// (0x0005a929) tabs_2_passive_pane_t1

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp4

0x5959,	// (0x0005a93b) tabs_2_long_active_pane_t1

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp4

0x662d,	// (0x0005b60f) list_single_midp_graphic_pane_g4_ParamLimits

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp5

0x5978,	// (0x0005a95a) tabs_3_long_active_pane_t1

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp5

0x662d,	// (0x0005b60f) list_single_midp_graphic_pane_g4

0xc06b,	// (0x0006104d) bg_popup_window_pane_cp13_ParamLimits

0xc06b,	// (0x0006104d) bg_popup_window_pane_cp13

0xee37,	// (0x00063e19) listscroll_popup_fast_pane_ParamLimits

0xee37,	// (0x00063e19) listscroll_popup_fast_pane

0xee46,	// (0x00063e28) grid_popup_fast_pane_ParamLimits

0xee46,	// (0x00063e28) grid_popup_fast_pane

0xee58,	// (0x00063e3a) scroll_pane_cp9_ParamLimits

0xee58,	// (0x00063e3a) scroll_pane_cp9

0xb694,	// (0x00060676) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xb694,	// (0x00060676) list_single_graphic_hl_pane_t1_cp2

0xee7c,	// (0x00063e5e) input_focus_pane_cp20_ParamLimits

0xee7c,	// (0x00063e5e) input_focus_pane_cp20

0xee8a,	// (0x00063e6c) query_popup_data_pane_t1_ParamLimits

0xee8a,	// (0x00063e6c) query_popup_data_pane_t1

0xee9d,	// (0x00063e7f) query_popup_data_pane_t2_ParamLimits

0xee9d,	// (0x00063e7f) query_popup_data_pane_t2

0xeee3,	// (0x00063ec5) query_popup_data_pane_t3_ParamLimits

0xeee3,	// (0x00063ec5) query_popup_data_pane_t3

0xef24,	// (0x00063f06) query_popup_data_pane_t4_ParamLimits

0xef24,	// (0x00063f06) query_popup_data_pane_t4

0xef60,	// (0x00063f42) query_popup_data_pane_t5_ParamLimits

0xef60,	// (0x00063f42) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0006468d) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0006468d) query_popup_data_pane_t

0xed23,	// (0x00063d05) bg_set_opt_pane_g1

0xed2b,	// (0x00063d0d) bg_set_opt_pane_g2

0xed33,	// (0x00063d15) bg_set_opt_pane_g3

0xed3b,	// (0x00063d1d) bg_set_opt_pane_g4

0xed43,	// (0x00063d25) bg_set_opt_pane_g5

0xed4b,	// (0x00063d2d) bg_set_opt_pane_g6

0xed53,	// (0x00063d35) bg_set_opt_pane_g7

0xed5b,	// (0x00063d3d) bg_set_opt_pane_g8

0xed63,	// (0x00063d45) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00064698) bg_set_opt_pane_g

0x5e78,	// (0x0005ae5a) control_top_pane_stacon_ParamLimits

0x5e78,	// (0x0005ae5a) control_top_pane_stacon

0x5ecb,	// (0x0005aead) signal_pane_stacon_ParamLimits

0x5ecb,	// (0x0005aead) signal_pane_stacon

0xf377,	// (0x00064359) stacon_top_pane_g1_ParamLimits

0xf377,	// (0x00064359) stacon_top_pane_g1

0x5ef0,	// (0x0005aed2) title_pane_stacon_ParamLimits

0x5ef0,	// (0x0005aed2) title_pane_stacon

0x5f1a,	// (0x0005aefc) uni_indicator_pane_stacon_ParamLimits

0x5f1a,	// (0x0005aefc) uni_indicator_pane_stacon

0x5f32,	// (0x0005af14) battery_pane_stacon_ParamLimits

0x5f32,	// (0x0005af14) battery_pane_stacon

0x5f76,	// (0x0005af58) control_bottom_pane_stacon_ParamLimits

0x5f76,	// (0x0005af58) control_bottom_pane_stacon

0x5f99,	// (0x0005af7b) navi_pane_stacon_ParamLimits

0x5f99,	// (0x0005af7b) navi_pane_stacon

0xf399,	// (0x0006437b) stacon_bottom_pane_g1_ParamLimits

0xf399,	// (0x0006437b) stacon_bottom_pane_g1

0x598a,	// (0x0005a96c) aid_levels_signal_lsc_ParamLimits

0x598a,	// (0x0005a96c) aid_levels_signal_lsc

0x59a1,	// (0x0005a983) signal_pane_stacon_g1_ParamLimits

0x59a1,	// (0x0005a983) signal_pane_stacon_g1

0x59b5,	// (0x0005a997) signal_pane_stacon_g2_ParamLimits

0x59b5,	// (0x0005a997) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000646ab) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000646ab) signal_pane_stacon_g

0x59ea,	// (0x0005a9cc) title_pane_stacon_t1_ParamLimits

0x59ea,	// (0x0005a9cc) title_pane_stacon_t1

0xefa4,	// (0x00063f86) uni_indicator_pane_stacon_g1

0xefae,	// (0x00063f90) uni_indicator_pane_stacon_g2

0xefb8,	// (0x00063f9a) uni_indicator_pane_stacon_g3

0xefc2,	// (0x00063fa4) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x000646b7) uni_indicator_pane_stacon_g

0x5a0f,	// (0x0005a9f1) control_top_pane_stacon_g1

0x5a17,	// (0x0005a9f9) control_top_pane_stacon_t1_ParamLimits

0x5a17,	// (0x0005a9f9) control_top_pane_stacon_t1

0x5a4e,	// (0x0005aa30) aid_levels_battery_lsc_ParamLimits

0x5a4e,	// (0x0005aa30) aid_levels_battery_lsc

0x5a66,	// (0x0005aa48) battery_pane_stacon_g1_ParamLimits

0x5a66,	// (0x0005aa48) battery_pane_stacon_g1

0x5a79,	// (0x0005aa5b) battery_pane_stacon_g2_ParamLimits

0x5a79,	// (0x0005aa5b) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x000646c0) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x000646c0) battery_pane_stacon_g

0x5ab7,	// (0x0005aa99) navi_icon_pane_stacon

0x5acb,	// (0x0005aaad) navi_navi_pane_stacon

0x5ab7,	// (0x0005aa99) navi_text_pane_stacon

0x5a0f,	// (0x0005a9f1) control_bottom_pane_stacon_g1

0x5ae1,	// (0x0005aac3) control_bottom_pane_stacon_t1_ParamLimits

0x5ae1,	// (0x0005aac3) control_bottom_pane_stacon_t1

0x5b18,	// (0x0005aafa) grid_app_pane_ParamLimits

0x5b18,	// (0x0005aafa) grid_app_pane

0x5b3c,	// (0x0005ab1e) scroll_pane_cp15_ParamLimits

0x5b3c,	// (0x0005ab1e) scroll_pane_cp15

0x5b4f,	// (0x0005ab31) cell_app_pane_ParamLimits

0x5b4f,	// (0x0005ab31) cell_app_pane

0x5b7b,	// (0x0005ab5d) cell_app_pane_g1_ParamLimits

0x5b7b,	// (0x0005ab5d) cell_app_pane_g1

0xefe6,	// (0x00063fc8) cell_app_pane_g2_ParamLimits

0xefe6,	// (0x00063fc8) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x000646c5) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x000646c5) cell_app_pane_g

0xeff2,	// (0x00063fd4) cell_app_pane_t1_ParamLimits

0xeff2,	// (0x00063fd4) cell_app_pane_t1

0xf009,	// (0x00063feb) grid_highlight_pane_ParamLimits

0xf009,	// (0x00063feb) grid_highlight_pane

0xed23,	// (0x00063d05) cell_highlight_pane_g1

0xed2b,	// (0x00063d0d) cell_highlight_pane_g2

0xed33,	// (0x00063d15) cell_highlight_pane_g3

0xed3b,	// (0x00063d1d) cell_highlight_pane_g4

0xed43,	// (0x00063d25) cell_highlight_pane_g5

0xed4b,	// (0x00063d2d) cell_highlight_pane_g6

0xed53,	// (0x00063d35) cell_highlight_pane_g7

0xed5b,	// (0x00063d3d) cell_highlight_pane_g8

0xed63,	// (0x00063d45) cell_highlight_pane_g9

0xc007,	// (0x00060fe9) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00064673) cell_highlight_pane_g

0xf01a,	// (0x00063ffc) bg_scroll_pane

0x5bae,	// (0x0005ab90) scroll_handle_pane

0xf061,	// (0x00064043) scroll_bg_pane_g1

0xf076,	// (0x00064058) scroll_bg_pane_g2

0xf08e,	// (0x00064070) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x000646ca) scroll_bg_pane_g

0xf0a3,	// (0x00064085) scroll_handle_focus_pane_ParamLimits

0xf0a3,	// (0x00064085) scroll_handle_focus_pane

0xf061,	// (0x00064043) scroll_handle_pane_g1

0xf0b0,	// (0x00064092) scroll_handle_pane_g2

0xf08e,	// (0x00064070) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x000646d1) scroll_handle_pane_g

0xed74,	// (0x00063d56) bg_popup_sub_pane_cp21_ParamLimits

0xed74,	// (0x00063d56) bg_popup_sub_pane_cp21

0xf0c4,	// (0x000640a6) popup_fep_japan_predictive_window_t1_ParamLimits

0xf0c4,	// (0x000640a6) popup_fep_japan_predictive_window_t1

0xf0db,	// (0x000640bd) popup_fep_japan_predictive_window_t2_ParamLimits

0xf0db,	// (0x000640bd) popup_fep_japan_predictive_window_t2

0xf10e,	// (0x000640f0) popup_fep_japan_predictive_window_t3_ParamLimits

0xf10e,	// (0x000640f0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x000646d8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x000646d8) popup_fep_japan_predictive_window_t

0xc011,	// (0x00060ff3) bg_popup_sub_pane_cp23

0xf145,	// (0x00064127) listscroll_japin_cand_pane

0xf14d,	// (0x0006412f) popup_fep_japan_candidate_window_t1

0xf15b,	// (0x0006413d) candidate_pane_ParamLimits

0xf15b,	// (0x0006413d) candidate_pane

0xf16d,	// (0x0006414f) scroll_pane_cp30

0xf177,	// (0x00064159) list_single_popup_jap_candidate_pane_ParamLimits

0xf177,	// (0x00064159) list_single_popup_jap_candidate_pane

0xc011,	// (0x00060ff3) list_highlight_pane_cp30

0xf18b,	// (0x0006416d) list_single_popup_jap_candidate_pane_t1

0x5bd7,	// (0x0005abb9) level_1_signal

0x5be4,	// (0x0005abc6) level_2_signal

0x5bf1,	// (0x0005abd3) level_3_signal

0x5bfe,	// (0x0005abe0) level_4_signal

0x5c0b,	// (0x0005abed) level_5_signal

0x5c18,	// (0x0005abfa) level_6_signal

0x5c25,	// (0x0005ac07) level_7_signal

0x5bd7,	// (0x0005abb9) level_1_battery

0x5be4,	// (0x0005abc6) level_2_battery

0x5bf1,	// (0x0005abd3) level_3_battery

0x5bfe,	// (0x0005abe0) level_4_battery

0x5c0b,	// (0x0005abed) level_5_battery

0x5c18,	// (0x0005abfa) level_6_battery

0x5c25,	// (0x0005ac07) level_7_battery

0xf1b2,	// (0x00064194) list_menu_pane_ParamLimits

0xf1b2,	// (0x00064194) list_menu_pane

0xf1c8,	// (0x000641aa) scroll_pane_cp25_ParamLimits

0xf1c8,	// (0x000641aa) scroll_pane_cp25

0xf1e1,	// (0x000641c3) list_double2_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x000641c3) list_double2_graphic_pane_cp2

0xf1e1,	// (0x000641c3) list_double2_large_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x000641c3) list_double2_large_graphic_pane_cp2

0xf1e1,	// (0x000641c3) list_double2_pane_cp2_ParamLimits

0xf1e1,	// (0x000641c3) list_double2_pane_cp2

0xf1e1,	// (0x000641c3) list_double_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x000641c3) list_double_graphic_pane_cp2

0xf1e1,	// (0x000641c3) list_double_large_graphic_pane_cp2_ParamLimits

0xf1e1,	// (0x000641c3) list_double_large_graphic_pane_cp2

0xf1e1,	// (0x000641c3) list_double_number_pane_cp2_ParamLimits

0xf1e1,	// (0x000641c3) list_double_number_pane_cp2

0xf1e1,	// (0x000641c3) list_double_pane_cp2_ParamLimits

0xf1e1,	// (0x000641c3) list_double_pane_cp2

0x5c67,	// (0x0005ac49) list_single_2graphic_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_2graphic_pane_cp2

0x5c67,	// (0x0005ac49) list_single_graphic_heading_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_graphic_heading_pane_cp2

0x5c67,	// (0x0005ac49) list_single_graphic_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_graphic_pane_cp2

0x5c67,	// (0x0005ac49) list_single_heading_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_heading_pane_cp2

0xf1f1,	// (0x000641d3) list_single_large_graphic_pane_cp2_ParamLimits

0xf1f1,	// (0x000641d3) list_single_large_graphic_pane_cp2

0x5c67,	// (0x0005ac49) list_single_number_heading_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_number_heading_pane_cp2

0x5c67,	// (0x0005ac49) list_single_number_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_number_pane_cp2

0x5c67,	// (0x0005ac49) list_single_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_pane_cp2

0xf20a,	// (0x000641ec) bg_popup_sub_pane_cp22

0x5d50,	// (0x0005ad32) popup_side_volume_key_window_g1

0x5d7a,	// (0x0005ad5c) popup_side_volume_key_window_t1

0x5d98,	// (0x0005ad7a) volume_small_pane_cp1

0xc19e,	// (0x00061180) bg_popup_sub_pane_cp24_ParamLimits

0xc19e,	// (0x00061180) bg_popup_sub_pane_cp24

0xf220,	// (0x00064202) fep_china_uni_candidate_pane_ParamLimits

0xf220,	// (0x00064202) fep_china_uni_candidate_pane

0xf234,	// (0x00064216) fep_china_uni_entry_pane

0xf244,	// (0x00064226) popup_fep_china_uni_window_g1

0xf260,	// (0x00064242) fep_china_uni_entry_pane_g1

0xf26a,	// (0x0006424c) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00064709) fep_china_uni_entry_pane_g

0xf274,	// (0x00064256) fep_entry_item_pane

0xf27e,	// (0x00064260) fep_candidate_item_pane

0xf286,	// (0x00064268) fep_china_uni_candidate_pane_g1

0xf290,	// (0x00064272) fep_china_uni_candidate_pane_g2

0xf298,	// (0x0006427a) fep_china_uni_candidate_pane_g3

0xf2a0,	// (0x00064282) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006470e) fep_china_uni_candidate_pane_g

0xc007,	// (0x00060fe9) fep_entry_item_pane_g1

0xf2aa,	// (0x0006428c) fep_entry_item_pane_t1_ParamLimits

0xf2aa,	// (0x0006428c) fep_entry_item_pane_t1

0xf2c0,	// (0x000642a2) fep_candidate_item_pane_t1_ParamLimits

0xf2c0,	// (0x000642a2) fep_candidate_item_pane_t1

0xf2d5,	// (0x000642b7) fep_candidate_item_pane_t2_ParamLimits

0xf2d5,	// (0x000642b7) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00064717) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00064717) fep_candidate_item_pane_t

0xc06b,	// (0x0006104d) list_highlight_pane_cp31_ParamLimits

0xc06b,	// (0x0006104d) list_highlight_pane_cp31

0xf2e7,	// (0x000642c9) level_1_signal_lsc

0xf2f0,	// (0x000642d2) level_2_signal_lsc

0xf2f9,	// (0x000642db) level_3_signal_lsc

0xf302,	// (0x000642e4) level_4_signal_lsc

0xf30b,	// (0x000642ed) level_5_signal_lsc

0xf314,	// (0x000642f6) level_6_signal_lsc

0xf31d,	// (0x000642ff) level_7_signal_lsc

0xf31d,	// (0x000642ff) level_1_battery_lsc

0xf326,	// (0x00064308) level_2_battery_lsc

0xf32f,	// (0x00064311) level_3_battery_lsc

0xf338,	// (0x0006431a) level_4_battery_lsc

0xf341,	// (0x00064323) level_5_battery_lsc

0xf34a,	// (0x0006432c) level_6_battery_lsc

0xf2e7,	// (0x000642c9) level_7_battery_lsc

0xf353,	// (0x00064335) scroll_handle_focus_pane_g1

0xf35c,	// (0x0006433e) scroll_handle_focus_pane_g2

0xf365,	// (0x00064347) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006471c) scroll_handle_focus_pane_g

0x5da0,	// (0x0005ad82) list_single_2graphic_pane_g1_ParamLimits

0x5da0,	// (0x0005ad82) list_single_2graphic_pane_g1

0x531f,	// (0x0005a301) list_single_2graphic_pane_g2_ParamLimits

0x531f,	// (0x0005a301) list_single_2graphic_pane_g2

0x5270,	// (0x0005a252) list_single_2graphic_pane_g3_ParamLimits

0x5270,	// (0x0005a252) list_single_2graphic_pane_g3

0x5dac,	// (0x0005ad8e) list_single_2graphic_pane_g4_ParamLimits

0x5dac,	// (0x0005ad8e) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00064723) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00064723) list_single_2graphic_pane_g

0x5db8,	// (0x0005ad9a) list_single_2graphic_pane_t1_ParamLimits

0x5db8,	// (0x0005ad9a) list_single_2graphic_pane_t1

0x5de6,	// (0x0005adc8) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5de6,	// (0x0005adc8) list_double2_graphic_large_graphic_pane_g1

0x556f,	// (0x0005a551) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x556f,	// (0x0005a551) list_double2_graphic_large_graphic_pane_g2

0x54b0,	// (0x0005a492) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x54b0,	// (0x0005a492) list_double2_graphic_large_graphic_pane_g3

0x5df8,	// (0x0005adda) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5df8,	// (0x0005adda) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006472c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006472c) list_double2_graphic_large_graphic_pane_g

0x5e04,	// (0x0005ade6) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5e04,	// (0x0005ade6) list_double2_graphic_large_graphic_pane_t1

0x5e1a,	// (0x0005adfc) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5e1a,	// (0x0005adfc) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00064735) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00064735) list_double2_graphic_large_graphic_pane_t

0xf3f7,	// (0x000643d9) popup_fast_swap_window_ParamLimits

0xf3f7,	// (0x000643d9) popup_fast_swap_window

0xf415,	// (0x000643f7) popup_side_volume_key_window

0xf433,	// (0x00064415) stacon_top_pane

0xf43d,	// (0x0006441f) status_pane_ParamLimits

0xf43d,	// (0x0006441f) status_pane

0x6020,	// (0x0005b002) status_small_pane

0xc011,	// (0x00060ff3) control_pane

0xc011,	// (0x00060ff3) stacon_bottom_pane

0xecab,	// (0x00063c8d) scroll_pane_cp121

0xeca2,	// (0x00063c84) set_content_pane

0x5e2c,	// (0x0005ae0e) bg_active_tab_pane_g1_cp1

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp1

0x5e35,	// (0x0005ae17) bg_active_tab_pane_g3_cp1

0x5e2c,	// (0x0005ae0e) bg_passive_tab_pane_g1_cp1

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp1

0x5e35,	// (0x0005ae17) bg_passive_tab_pane_g3_cp1

0x5e3e,	// (0x0005ae20) bg_active_tab_pane_g1_cp2

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp2

0x5e47,	// (0x0005ae29) bg_active_tab_pane_g3_cp2

0x5e3e,	// (0x0005ae20) bg_passive_tab_pane_g1_cp2

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp2

0x5e47,	// (0x0005ae29) bg_passive_tab_pane_g3_cp2

0x5e50,	// (0x0005ae32) bg_active_tab_pane_g1_cp3

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp3

0x5e59,	// (0x0005ae3b) bg_active_tab_pane_g3_cp3

0x5e50,	// (0x0005ae32) bg_passive_tab_pane_g1_cp3

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp3

0x5e59,	// (0x0005ae3b) bg_passive_tab_pane_g3_cp3

0x5e62,	// (0x0005ae44) bg_active_tab_pane_g1_cp4

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp4

0x5e6d,	// (0x0005ae4f) bg_active_tab_pane_g3_cp4

0x5e62,	// (0x0005ae44) bg_passive_tab_pane_g1_cp4

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp4

0x5e6d,	// (0x0005ae4f) bg_passive_tab_pane_g3_cp4

0xf3b5,	// (0x00064397) bg_active_tab_pane_g1_cp5

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp5

0xf3be,	// (0x000643a0) bg_active_tab_pane_g3_cp5

0xf3b5,	// (0x00064397) bg_passive_tab_pane_g1_cp5

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp5

0xf3be,	// (0x000643a0) bg_passive_tab_pane_g3_cp5

0x5fbc,	// (0x0005af9e) list_set_graphic_pane_ParamLimits

0x5fbc,	// (0x0005af9e) list_set_graphic_pane

0xc011,	// (0x00060ff3) bg_set_opt_pane_cp4

0x5fd1,	// (0x0005afb3) list_set_graphic_pane_g1_ParamLimits

0x5fd1,	// (0x0005afb3) list_set_graphic_pane_g1

0x5fdd,	// (0x0005afbf) list_set_graphic_pane_g2_ParamLimits

0x5fdd,	// (0x0005afbf) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006473a) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006473a) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00064abb) volume_small_pane_cp_g

0x6001,	// (0x0005afe3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6001,	// (0x0005afe3) list_double2_large_graphic_pane_g1_cp2

0x600f,	// (0x0005aff1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x600f,	// (0x0005aff1) list_double2_large_graphic_pane_g2_cp2

0xf3c7,	// (0x000643a9) list_double2_large_graphic_pane_g3_cp2

0xf3cf,	// (0x000643b1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf3cf,	// (0x000643b1) list_double2_large_graphic_pane_t1_cp2

0xf3e5,	// (0x000643c7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf3e5,	// (0x000643c7) list_double2_large_graphic_pane_t2_cp2

0x970b,	// (0x0005e6ed) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x970b,	// (0x0005e6ed) list_double_large_graphic_pane_g1_cp2

0x971e,	// (0x0005e700) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x971e,	// (0x0005e700) list_double_large_graphic_pane_g2_cp2

0xf51e,	// (0x00064500) list_double_large_graphic_pane_g3_cp2

0x972f,	// (0x0005e711) list_double_large_graphic_pane_g4_cp

0x9737,	// (0x0005e719) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9737,	// (0x0005e719) list_double_large_graphic_pane_t1_cp2

0x974e,	// (0x0005e730) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x974e,	// (0x0005e730) list_double_large_graphic_pane_t2_cp2

0x602b,	// (0x0005b00d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x602b,	// (0x0005b00d) list_double2_graphic_pane_g1_cp2

0x6039,	// (0x0005b01b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x6039,	// (0x0005b01b) list_double2_graphic_pane_g2_cp2

0x604a,	// (0x0005b02c) list_double2_graphic_pane_g3_cp2

0xf44b,	// (0x0006442d) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf44b,	// (0x0006442d) list_double2_graphic_pane_t1_cp2

0xf461,	// (0x00064443) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf461,	// (0x00064443) list_double2_graphic_pane_t2_cp2

0xf473,	// (0x00064455) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x00064455) list_single_number_heading_pane_g1_cp2

0xf47f,	// (0x00064461) list_single_number_heading_pane_g2_cp2

0xf487,	// (0x00064469) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x00064469) list_single_number_heading_pane_t1_cp2

0x6054,	// (0x0005b036) list_single_number_heading_pane_t2_cp2_ParamLimits

0x6054,	// (0x0005b036) list_single_number_heading_pane_t2_cp2

0xf49d,	// (0x0006447f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf49d,	// (0x0006447f) list_single_number_heading_pane_t3_cp2

0xf473,	// (0x00064455) list_single_heading_pane_g1_cp2_ParamLimits

0xf473,	// (0x00064455) list_single_heading_pane_g1_cp2

0xf47f,	// (0x00064461) list_single_heading_pane_g2_cp2

0xf487,	// (0x00064469) list_single_heading_pane_t1_cp2_ParamLimits

0xf487,	// (0x00064469) list_single_heading_pane_t1_cp2

0x9505,	// (0x0005e4e7) list_single_heading_pane_t2_cp2_ParamLimits

0x9505,	// (0x0005e4e7) list_single_heading_pane_t2_cp2

0x944d,	// (0x0005e42f) list_double_graphic_pane_g1_cp2_ParamLimits

0x944d,	// (0x0005e42f) list_double_graphic_pane_g1_cp2

0x9459,	// (0x0005e43b) list_double_graphic_pane_g2_cp2_ParamLimits

0x9459,	// (0x0005e43b) list_double_graphic_pane_g2_cp2

0x9468,	// (0x0005e44a) list_double_graphic_pane_g3_cp2

0x9470,	// (0x0005e452) list_double_graphic_pane_t1_cp2_ParamLimits

0x9470,	// (0x0005e452) list_double_graphic_pane_t1_cp2

0x9486,	// (0x0005e468) list_double_graphic_pane_t2_cp2_ParamLimits

0x9486,	// (0x0005e468) list_double_graphic_pane_t2_cp2

0xf512,	// (0x000644f4) list_double_number_pane_g1_cp2_ParamLimits

0xf512,	// (0x000644f4) list_double_number_pane_g1_cp2

0xf51e,	// (0x00064500) list_double_number_pane_g2_cp2

0x9411,	// (0x0005e3f3) list_double_number_pane_t1_cp2_ParamLimits

0x9411,	// (0x0005e3f3) list_double_number_pane_t1_cp2

0x9425,	// (0x0005e407) list_double_number_pane_t2_cp2_ParamLimits

0x9425,	// (0x0005e407) list_double_number_pane_t2_cp2

0x943b,	// (0x0005e41d) list_double_number_pane_t3_cp2_ParamLimits

0x943b,	// (0x0005e41d) list_double_number_pane_t3_cp2

0x92fa,	// (0x0005e2dc) list_single_graphic_pane_g1_cp2_ParamLimits

0x92fa,	// (0x0005e2dc) list_single_graphic_pane_g1_cp2

0x3280,	// (0x00058262) list_single_graphic_pane_g2_cp2_ParamLimits

0x3280,	// (0x00058262) list_single_graphic_pane_g2_cp2

0x328c,	// (0x0005826e) list_single_graphic_pane_g3_cp2

0x92d0,	// (0x0005e2b2) list_single_graphic_pane_t1_cp2_ParamLimits

0x92d0,	// (0x0005e2b2) list_single_graphic_pane_t1_cp2

0x3280,	// (0x00058262) list_single_number_pane_g1_cp2_ParamLimits

0x3280,	// (0x00058262) list_single_number_pane_g1_cp2

0x328c,	// (0x0005826e) list_single_number_pane_g2_cp2

0x92d0,	// (0x0005e2b2) list_single_number_pane_t1_cp2_ParamLimits

0x92d0,	// (0x0005e2b2) list_single_number_pane_t1_cp2

0x92e6,	// (0x0005e2c8) list_single_number_pane_t2_cp2_ParamLimits

0x92e6,	// (0x0005e2c8) list_single_number_pane_t2_cp2

0x600f,	// (0x0005aff1) list_double2_pane_g1_cp2_ParamLimits

0x600f,	// (0x0005aff1) list_double2_pane_g1_cp2

0xf3c7,	// (0x000643a9) list_double2_pane_g2_cp2

0xf4ea,	// (0x000644cc) list_double2_pane_t1_cp2_ParamLimits

0xf4ea,	// (0x000644cc) list_double2_pane_t1_cp2

0xf500,	// (0x000644e2) list_double2_pane_t2_cp2_ParamLimits

0xf500,	// (0x000644e2) list_double2_pane_t2_cp2

0xf512,	// (0x000644f4) list_double_pane_g1_cp2_ParamLimits

0xf512,	// (0x000644f4) list_double_pane_g1_cp2

0xf51e,	// (0x00064500) list_double_pane_g2_cp2

0xf526,	// (0x00064508) list_double_pane_t1_cp2_ParamLimits

0xf526,	// (0x00064508) list_double_pane_t1_cp2

0xf53c,	// (0x0006451e) list_double_pane_t2_cp2_ParamLimits

0xf53c,	// (0x0006451e) list_double_pane_t2_cp2

0x3270,	// (0x00058252) list_single_pane_cp2_g3

0x3280,	// (0x00058262) list_single_pane_g1_cp2_ParamLimits

0x3280,	// (0x00058262) list_single_pane_g1_cp2

0x328c,	// (0x0005826e) list_single_pane_g2_cp2

0x3294,	// (0x00058276) list_single_pane_t1_cp2_ParamLimits

0x3294,	// (0x00058276) list_single_pane_t1_cp2

0x6082,	// (0x0005b064) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6082,	// (0x0005b064) list_single_large_graphic_pane_g1_cp2

0x312e,	// (0x00058110) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x312e,	// (0x00058110) list_single_large_graphic_pane_g2_cp2

0x32ac,	// (0x0005828e) list_single_large_graphic_pane_g3_cp2

0x32b4,	// (0x00058296) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x32b4,	// (0x00058296) list_single_large_graphic_pane_g4_cp1

0x32ce,	// (0x000582b0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x32ce,	// (0x000582b0) list_single_large_graphic_pane_t1_cp2

0x929a,	// (0x0005e27c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x929a,	// (0x0005e27c) list_single_graphic_heading_pane_g1_cp2

0x9267,	// (0x0005e249) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9267,	// (0x0005e249) list_single_graphic_heading_pane_g4_cp2

0x328c,	// (0x0005826e) list_single_graphic_heading_pane_g5_cp2

0x92a6,	// (0x0005e288) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x92a6,	// (0x0005e288) list_single_graphic_heading_pane_t1_cp2

0x92bc,	// (0x0005e29e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x92bc,	// (0x0005e29e) list_single_graphic_heading_pane_t2_cp2

0x925b,	// (0x0005e23d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x925b,	// (0x0005e23d) list_single_2graphic_pane_g1_cp2

0x9267,	// (0x0005e249) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9267,	// (0x0005e249) list_single_2graphic_pane_g2_cp2

0x328c,	// (0x0005826e) list_single_2graphic_pane_g3_cp2

0x9278,	// (0x0005e25a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9278,	// (0x0005e25a) list_single_2graphic_pane_g4_cp2

0x9284,	// (0x0005e266) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9284,	// (0x0005e266) list_single_2graphic_pane_t1_cp2

0xc007,	// (0x00060fe9) list_highlight_pane_g10_cp1

0x8e33,	// (0x0005de15) list_highlight_pane_g1_cp1

0x8e3b,	// (0x0005de1d) list_highlight_pane_g2_cp1

0x8e43,	// (0x0005de25) list_highlight_pane_g3_cp1

0x8e4b,	// (0x0005de2d) list_highlight_pane_g4_cp1

0x8e53,	// (0x0005de35) list_highlight_pane_g5_cp1

0x8e5b,	// (0x0005de3d) list_highlight_pane_g6_cp1

0x8e63,	// (0x0005de45) list_highlight_pane_g7_cp1

0x8e6b,	// (0x0005de4d) list_highlight_pane_g8_cp1

0x8e73,	// (0x0005de55) list_highlight_pane_g9_cp1

0x8d53,	// (0x0005dd35) form_field_slider_pane_t3

0x8d61,	// (0x0005dd43) form_field_slider_pane_t4

0x8d6f,	// (0x0005dd51) slider_form_pane_ParamLimits

0x8d6f,	// (0x0005dd51) slider_form_pane

0xc011,	// (0x00060ff3) control_abbreviations

0xc011,	// (0x00060ff3) control_conventions

0xc011,	// (0x00060ff3) control_definitions

0xc011,	// (0x00060ff3) format_table_attribute

0x955b,	// (0x0005e53d) bg_popup_preview_window_pane_g9

0xc011,	// (0x00060ff3) format_table_data2

0xc011,	// (0x00060ff3) format_table_data3

0xc011,	// (0x00060ff3) format_table_data_example

0x0008,

0xc011,	// (0x00060ff3) intro_purpose

0xf8f4,	// (0x000648d6) bg_popup_preview_window_pane_g

0xc011,	// (0x00060ff3) texts_category

0xc011,	// (0x00060ff3) texts_graphics

0x32e4,	// (0x000582c6) text_digital

0x32f3,	// (0x000582d5) text_primary

0x3302,	// (0x000582e4) text_primary_small

0x3311,	// (0x000582f3) text_secondary

0x3320,	// (0x00058302) text_title

0x9e7c,	// (0x0005ee5e) bg_passive_tab_pane_g1_cp3_srt

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp3_srt

0x9e85,	// (0x0005ee67) bg_passive_tab_pane_g3_cp3_srt

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp3_srt_ParamLimits

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp3_srt

0x9e8e,	// (0x0005ee70) tabs_4_active_pane_srt_g1

0x9e96,	// (0x0005ee78) tabs_4_active_pane_srt_t1_ParamLimits

0x9e96,	// (0x0005ee78) tabs_4_active_pane_srt_t1

0x9e7c,	// (0x0005ee5e) bg_active_tab_pane_g1_cp3_copy1

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp3_copy1

0x9e85,	// (0x0005ee67) bg_active_tab_pane_g3_cp3_copy1

0xc06b,	// (0x0006104d) tabs_2_long_active_pane_srt_ParamLimits

0xc06b,	// (0x0006104d) tabs_2_long_active_pane_srt

0xc06b,	// (0x0006104d) tabs_2_long_passive_pane_srt_ParamLimits

0xc06b,	// (0x0006104d) tabs_2_long_passive_pane_srt

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp4_srt

0x9997,	// (0x0005e979) bg_passive_tab_pane_g1_cp4_srt

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp4_srt

0x99a0,	// (0x0005e982) bg_passive_tab_pane_g3_cp4_srt

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp4_srt_ParamLimits

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp4_srt

0x99a9,	// (0x0005e98b) tabs_2_long_active_pane_srt_t1_ParamLimits

0x99a9,	// (0x0005e98b) tabs_2_long_active_pane_srt_t1

0x9997,	// (0x0005e979) bg_active_tab_pane_g1_cp4_srt

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp4_srt

0x99a0,	// (0x0005e982) bg_active_tab_pane_g3_cp4_srt

0xc19e,	// (0x00061180) tabs_3_long_active_pane_srt_ParamLimits

0xc19e,	// (0x00061180) tabs_3_long_active_pane_srt

0xc19e,	// (0x00061180) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc19e,	// (0x00061180) tabs_3_long_passive_pane_cp_srt

0xc19e,	// (0x00061180) tabs_3_long_passive_pane_srt_ParamLimits

0xc19e,	// (0x00061180) tabs_3_long_passive_pane_srt

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp5_srt

0xf3b5,	// (0x00064397) bg_passive_tab_pane_g1_cp5_srt

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp5_srt

0xf3be,	// (0x000643a0) bg_passive_tab_pane_g3_cp5_srt

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp5_srt_ParamLimits

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp5_srt

0x9985,	// (0x0005e967) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9985,	// (0x0005e967) tabs_3_long_active_pane_srt_t1

0xf3b5,	// (0x00064397) bg_active_tab_pane_g1_cp5_srt

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp5_srt

0xf3be,	// (0x000643a0) bg_active_tab_pane_g3_cp5_srt

0x9977,	// (0x0005e959) navi_text_pane_srt_t1

0x996f,	// (0x0005e951) navi_icon_pane_srt_g1

0x342a,	// (0x0005840c) midp_editing_number_pane_srt

0x332f,	// (0x00058311) midp_ticker_pane_srt

0x3432,	// (0x00058414) midp_ticker_pane_srt_g1

0x343a,	// (0x0005841c) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00064759) midp_ticker_pane_srt_g

0x3442,	// (0x00058424) midp_ticker_pane_srt_t1

0x9960,	// (0x0005e942) midp_editing_number_pane_t1_copy1

0x596c,	// (0x0005a94e) listscroll_midp_pane

0x596c,	// (0x0005a94e) midp_form_pane

0x3337,	// (0x00058319) midp_info_popup_window_ParamLimits

0x3337,	// (0x00058319) midp_info_popup_window

0xed74,	// (0x00063d56) bg_popup_sub_pane_cp50_ParamLimits

0xed74,	// (0x00063d56) bg_popup_sub_pane_cp50

0x8a69,	// (0x0005da4b) listscroll_midp_info_pane_ParamLimits

0x8a69,	// (0x0005da4b) listscroll_midp_info_pane

0x8a51,	// (0x0005da33) listscroll_form_midp_pane_ParamLimits

0x8a51,	// (0x0005da33) listscroll_form_midp_pane

0x8a5d,	// (0x0005da3f) scroll_bar_cp050

0x8a31,	// (0x0005da13) list_midp_pane

0xa911,	// (0x0005f8f3) signal_pane_g2_cp

0x896b,	// (0x0005d94d) listscroll_midp_info_pane_t1_ParamLimits

0x896b,	// (0x0005d94d) listscroll_midp_info_pane_t1

0x8983,	// (0x0005d965) listscroll_midp_info_pane_t2_ParamLimits

0x8983,	// (0x0005d965) listscroll_midp_info_pane_t2

0x89c1,	// (0x0005d9a3) listscroll_midp_info_pane_t3_ParamLimits

0x89c1,	// (0x0005d9a3) listscroll_midp_info_pane_t3

0x89fb,	// (0x0005d9dd) listscroll_midp_info_pane_t4_ParamLimits

0x89fb,	// (0x0005d9dd) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00064811) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00064811) listscroll_midp_info_pane_t

0xedf4,	// (0x00063dd6) scroll_pane_cp21

0x8905,	// (0x0005d8e7) form_midp_field_choice_group_pane

0x890e,	// (0x0005d8f0) form_midp_field_text_pane

0x8951,	// (0x0005d933) form_midp_field_time_pane

0x8959,	// (0x0005d93b) form_midp_gauge_slider_pane

0x8962,	// (0x0005d944) form_midp_gauge_wait_pane

0xc011,	// (0x00060ff3) form_midp_image_pane

0x6731,	// (0x0005b713) list_single_midp_pane_ParamLimits

0x6731,	// (0x0005b713) list_single_midp_pane

0x88c9,	// (0x0005d8ab) form_midp_field_text_pane_t1

0x86b5,	// (0x0005d697) input_focus_pane_cp050

0x88f4,	// (0x0005d8d6) list_midp_form_text_pane

0x8898,	// (0x0005d87a) form_midp_field_choice_group_pane_t1

0x88a6,	// (0x0005d888) input_focus_pane_cp051

0x88ba,	// (0x0005d89c) list_midp_choice_pane

0xc011,	// (0x00060ff3) status_idle_pane

0x887c,	// (0x0005d85e) form_midp_field_time_pane_t1

0xc007,	// (0x00060fe9) wait_anim_pane_g2_copy1

0x888a,	// (0x0005d86c) form_midp_field_time_pane_t2

0x0001,

0x3392,	// (0x00058374) aid_navinavi_width_2_pane

0xf82a,	// (0x0006480c) form_midp_field_time_pane_t

0xc011,	// (0x00060ff3) input_focus_pane_cp052

0xc011,	// (0x00060ff3) bg_input_focus_pane_cp040

0x883c,	// (0x0005d81e) form_midp_gauge_slider_pane_t1

0x884a,	// (0x0005d82c) form_midp_gauge_slider_pane_t2

0x8858,	// (0x0005d83a) form_midp_gauge_slider_pane_t3

0x8866,	// (0x0005d848) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00064803) form_midp_gauge_slider_pane_t

0x8874,	// (0x0005d856) form_midp_slider_pane

0xc06b,	// (0x0006104d) bg_input_focus_pane_cp041_ParamLimits

0xc06b,	// (0x0006104d) bg_input_focus_pane_cp041

0x8809,	// (0x0005d7eb) form_midp_gauge_wait_pane_t1_ParamLimits

0x8809,	// (0x0005d7eb) form_midp_gauge_wait_pane_t1

0x881b,	// (0x0005d7fd) form_midp_gauge_wait_pane_t2_ParamLimits

0x881b,	// (0x0005d7fd) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x000647fe) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x000647fe) form_midp_gauge_wait_pane_t

0x882d,	// (0x0005d80f) form_midp_wait_pane_ParamLimits

0x882d,	// (0x0005d80f) form_midp_wait_pane

0x87d1,	// (0x0005d7b3) form_midp_image_pane_g1

0x87da,	// (0x0005d7bc) form_midp_image_pane_t1

0x87e9,	// (0x0005d7cb) form_midp_image_pane_t2

0x87f8,	// (0x0005d7da) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x000647f7) form_midp_image_pane_t

0x87c8,	// (0x0005d7aa) list_single_midp_pane_g1

0x35d2,	// (0x000585b4) list_single_midp_pane_t1

0x87ae,	// (0x0005d790) list_midp_form_item_pane_ParamLimits

0x87ae,	// (0x0005d790) list_midp_form_item_pane

0x334c,	// (0x0005832e) list_midp_form_item_pane_t1

0x335b,	// (0x0005833d) midp_ticker_pane_g1

0x3367,	// (0x00058349) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0006473f) midp_ticker_pane_g

0x6135,	// (0x0005b117) midp_ticker_pane_t1

0x9bd3,	// (0x0005ebb5) midp_editing_number_pane_t1

0x9bb1,	// (0x0005eb93) midp_editing_number_pane

0x9bc0,	// (0x0005eba2) midp_ticker_pane

0x9950,	// (0x0005e932) ai_message_heading_pane

0xc011,	// (0x00060ff3) bg_popup_window_pane_cp14

0x9958,	// (0x0005e93a) listscroll_ai_message_pane

0x98d6,	// (0x0005e8b8) ai_message_heading_pane_g1_ParamLimits

0x98d6,	// (0x0005e8b8) ai_message_heading_pane_g1

0x98e2,	// (0x0005e8c4) ai_message_heading_pane_g2_ParamLimits

0x98e2,	// (0x0005e8c4) ai_message_heading_pane_g2

0x98f0,	// (0x0005e8d2) ai_message_heading_pane_g3_ParamLimits

0x98f0,	// (0x0005e8d2) ai_message_heading_pane_g3

0x98fc,	// (0x0005e8de) ai_message_heading_pane_g4_ParamLimits

0x98fc,	// (0x0005e8de) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00064938) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00064938) ai_message_heading_pane_g

0x9908,	// (0x0005e8ea) ai_message_heading_pane_t1_ParamLimits

0x9908,	// (0x0005e8ea) ai_message_heading_pane_t1

0x9922,	// (0x0005e904) ai_message_heading_pane_t2_ParamLimits

0x9922,	// (0x0005e904) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00064941) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00064941) ai_message_heading_pane_t

0x9936,	// (0x0005e918) bg_popup_heading_pane_cp1_ParamLimits

0x9936,	// (0x0005e918) bg_popup_heading_pane_cp1

0x98c4,	// (0x0005e8a6) list_ai_message_pane_ParamLimits

0x98c4,	// (0x0005e8a6) list_ai_message_pane

0xedf4,	// (0x00063dd6) scroll_pane_cp10

0x9860,	// (0x0005e842) list_ai_message_pane_g1

0x9868,	// (0x0005e84a) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00064915) list_ai_message_pane_g

0x9870,	// (0x0005e852) list_ai_message_pane_t1_ParamLimits

0x9870,	// (0x0005e852) list_ai_message_pane_t1

0x9885,	// (0x0005e867) list_ai_message_pane_t2_ParamLimits

0x9885,	// (0x0005e867) list_ai_message_pane_t2

0x989a,	// (0x0005e87c) list_ai_message_pane_t3_ParamLimits

0x989a,	// (0x0005e87c) list_ai_message_pane_t3

0x98af,	// (0x0005e891) list_ai_message_pane_t4_ParamLimits

0x98af,	// (0x0005e891) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0006491a) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0006491a) list_ai_message_pane_t

0x9849,	// (0x0005e82b) cell_ai_soft_ind_pane_ParamLimits

0x9849,	// (0x0005e82b) cell_ai_soft_ind_pane

0x3373,	// (0x00058355) cell_ai_soft_ind_pane_g1_ParamLimits

0x3373,	// (0x00058355) cell_ai_soft_ind_pane_g1

0xc011,	// (0x00060ff3) grid_highlight_cp1

0x3380,	// (0x00058362) text_secondary_cp56_ParamLimits

0x3380,	// (0x00058362) text_secondary_cp56

0x981e,	// (0x0005e800) example_general_pane_ParamLimits

0x981e,	// (0x0005e800) example_general_pane

0x982a,	// (0x0005e80c) example_parent_pane_g1_ParamLimits

0x982a,	// (0x0005e80c) example_parent_pane_g1

0x9836,	// (0x0005e818) example_parent_pane_t1_ParamLimits

0x9836,	// (0x0005e818) example_parent_pane_t1

0x7ec7,	// (0x0005cea9) popup_preview_text_window_ParamLimits

0x7ec7,	// (0x0005cea9) popup_preview_text_window

0x3278,	// (0x0005825a) list_single_pane_cp2_g4

0xc254,	// (0x00061236) bg_popup_preview_window_pane_ParamLimits

0xc254,	// (0x00061236) bg_popup_preview_window_pane

0x9565,	// (0x0005e547) popup_preview_text_window_t1_ParamLimits

0x9565,	// (0x0005e547) popup_preview_text_window_t1

0x9583,	// (0x0005e565) popup_preview_text_window_t2_ParamLimits

0x9583,	// (0x0005e565) popup_preview_text_window_t2

0x95cc,	// (0x0005e5ae) popup_preview_text_window_t3_ParamLimits

0x95cc,	// (0x0005e5ae) popup_preview_text_window_t3

0x9611,	// (0x0005e5f3) popup_preview_text_window_t4_ParamLimits

0x9611,	// (0x0005e5f3) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x000648e9) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x000648e9) popup_preview_text_window_t

0x968f,	// (0x0005e671) scroll_pane_cp11

0x8641,	// (0x0005d623) bg_popup_preview_window_pane_g1

0x9519,	// (0x0005e4fb) bg_popup_preview_window_pane_g2

0x9523,	// (0x0005e505) bg_popup_preview_window_pane_g3

0x952d,	// (0x0005e50f) bg_popup_preview_window_pane_g4

0x9537,	// (0x0005e519) bg_popup_preview_window_pane_g5

0x9541,	// (0x0005e523) bg_popup_preview_window_pane_g6

0x9549,	// (0x0005e52b) bg_popup_preview_window_pane_g7

0x9551,	// (0x0005e533) bg_popup_preview_window_pane_g8

0x4aea,	// (0x00059acc) aid_popup_width_pane

0x7ea3,	// (0x0005ce85) popup_midp_note_alarm_window_ParamLimits

0x7ea3,	// (0x0005ce85) popup_midp_note_alarm_window

0xecbc,	// (0x00063c9e) data_form_pane_ParamLimits

0x57f4,	// (0x0005a7d6) form_field_data_pane_g1

0x57fe,	// (0x0005a7e0) form_field_data_pane_t1_ParamLimits

0xecc8,	// (0x00063caa) input_focus_pane_ParamLimits

0x31d3,	// (0x000581b5) data_form_wide_pane_ParamLimits

0x31e4,	// (0x000581c6) form_field_data_wide_pane_g1

0x31f0,	// (0x000581d2) form_field_data_wide_pane_t1_ParamLimits

0xc409,	// (0x000613eb) input_focus_pane_cp6_ParamLimits

0x5931,	// (0x0005a913) input_popup_find_pane_g1_ParamLimits

0x5931,	// (0x0005a913) input_popup_find_pane_g1

0x5a8a,	// (0x0005aa6c) aid_navi_side_left_pane

0x5a9f,	// (0x0005aa81) aid_navi_side_right_pane

0x8f2e,	// (0x0005df10) bg_popup_window_pane_cp30_ParamLimits

0x8f2e,	// (0x0005df10) bg_popup_window_pane_cp30

0x8fa8,	// (0x0005df8a) popup_midp_note_alarm_window_g1_ParamLimits

0x8fa8,	// (0x0005df8a) popup_midp_note_alarm_window_g1

0x8fd8,	// (0x0005dfba) popup_midp_note_alarm_window_t1_ParamLimits

0x8fd8,	// (0x0005dfba) popup_midp_note_alarm_window_t1

0x9079,	// (0x0005e05b) popup_midp_note_alarm_window_t2_ParamLimits

0x9079,	// (0x0005e05b) popup_midp_note_alarm_window_t2

0x9127,	// (0x0005e109) popup_midp_note_alarm_window_t3_ParamLimits

0x9127,	// (0x0005e109) popup_midp_note_alarm_window_t3

0x9159,	// (0x0005e13b) popup_midp_note_alarm_window_t4_ParamLimits

0x9159,	// (0x0005e13b) popup_midp_note_alarm_window_t4

0x917f,	// (0x0005e161) popup_midp_note_alarm_window_t5_ParamLimits

0x917f,	// (0x0005e161) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00064886) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00064886) popup_midp_note_alarm_window_t

0x922b,	// (0x0005e20d) wait_bar_pane_cp1_ParamLimits

0x922b,	// (0x0005e20d) wait_bar_pane_cp1

0xc011,	// (0x00060ff3) wait_anim_pane_copy1

0xc011,	// (0x00060ff3) wait_border_pane_copy1

0x8c13,	// (0x0005dbf5) wait_border_pane_g1_copy1

0x320a,	// (0x000581ec) form_field_popup_pane_g1

0x5818,	// (0x0005a7fa) form_field_popup_pane_t1_ParamLimits

0xecc8,	// (0x00063caa) input_focus_pane_cp7_ParamLimits

0xecf6,	// (0x00063cd8) list_form_pane_ParamLimits

0x3212,	// (0x000581f4) form_field_popup_wide_pane_g1

0x321a,	// (0x000581fc) form_field_popup_wide_pane_t1_ParamLimits

0xecc8,	// (0x00063caa) input_focus_pane_cp8_ParamLimits

0xed02,	// (0x00063ce4) list_form_wide_pane_ParamLimits

0x9f09,	// (0x0005eeeb) aid_size_cell_graphic_pane

0x5897,	// (0x0005a879) data_form_pane_t1_ParamLimits

0x69c0,	// (0x0005b9a2) data_form_wide_pane_t1_ParamLimits

0x81ee,	// (0x0005d1d0) bg_status_flat_pane

0x4f05,	// (0x00059ee7) title_pane_t1_ParamLimits

0xc033,	// (0x00061015) title_pane_t2_ParamLimits

0xc059,	// (0x0006103b) title_pane_t3_ParamLimits

0xf557,	// (0x00064539) title_pane_t_ParamLimits

0x5bd7,	// (0x0005abb9) level_1_signal_ParamLimits

0x5be4,	// (0x0005abc6) level_2_signal_ParamLimits

0x5bf1,	// (0x0005abd3) level_3_signal_ParamLimits

0x5bfe,	// (0x0005abe0) level_4_signal_ParamLimits

0x5c0b,	// (0x0005abed) level_5_signal_ParamLimits

0x5c18,	// (0x0005abfa) level_6_signal_ParamLimits

0x5c25,	// (0x0005ac07) level_7_signal_ParamLimits

0x5bd7,	// (0x0005abb9) level_1_battery_ParamLimits

0x5be4,	// (0x0005abc6) level_2_battery_ParamLimits

0x5bf1,	// (0x0005abd3) level_3_battery_ParamLimits

0x5bfe,	// (0x0005abe0) level_4_battery_ParamLimits

0x5c0b,	// (0x0005abed) level_5_battery_ParamLimits

0x5c18,	// (0x0005abfa) level_6_battery_ParamLimits

0x5c25,	// (0x0005ac07) level_7_battery_ParamLimits

0x8e33,	// (0x0005de15) bg_status_flat_pane_g1

0x8e3b,	// (0x0005de1d) bg_status_flat_pane_g2

0x8e43,	// (0x0005de25) bg_status_flat_pane_g3

0x8e4b,	// (0x0005de2d) bg_status_flat_pane_g4

0x8e53,	// (0x0005de35) bg_status_flat_pane_g5

0x8e5b,	// (0x0005de3d) bg_status_flat_pane_g6

0x8e63,	// (0x0005de45) bg_status_flat_pane_g7

0x4f75,	// (0x00059f57) tabs_3_active_pane_t1_ParamLimits

0x4f75,	// (0x00059f57) tabs_3_passive_pane_t1_ParamLimits

0x4f8f,	// (0x00059f71) tabs_4_active_pane_t1_ParamLimits

0x4f8f,	// (0x00059f71) tabs_4_1_passive_pane_t1_ParamLimits

0x5947,	// (0x0005a929) tabs_2_active_pane_t1_ParamLimits

0x5947,	// (0x0005a929) tabs_2_passive_pane_t1_ParamLimits

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp4_ParamLimits

0x5959,	// (0x0005a93b) tabs_2_long_active_pane_t1_ParamLimits

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp4_ParamLimits

0x6660,	// (0x0005b642) list_single_midp_graphic_pane_t1_ParamLimits

0x16ef,	// (0x000566d1) bg_active_tab_pane_cp5_ParamLimits

0x5978,	// (0x0005a95a) tabs_3_long_active_pane_t1_ParamLimits

0x596c,	// (0x0005a94e) bg_passive_tab_pane_cp5_ParamLimits

0x6660,	// (0x0005b642) list_single_midp_graphic_pane_t1

0x81ee,	// (0x0005d1d0) bg_status_flat_pane_ParamLimits

0x82b9,	// (0x0005d29b) indicator_pane_cp2_ParamLimits

0x82b9,	// (0x0005d29b) indicator_pane_cp2

0x83fc,	// (0x0005d3de) navi_pane_srt_ParamLimits

0x83fc,	// (0x0005d3de) navi_pane_srt

0x8420,	// (0x0005d402) popup_clock_digital_analogue_window_cp1

0xc0af,	// (0x00061091) indicator_pane_t1

0x332f,	// (0x00058311) copy_highlight_pane

0x332f,	// (0x00058311) cursor_graphics_pane

0x332f,	// (0x00058311) graphic_within_text_pane

0x332f,	// (0x00058311) link_highlight_pane

0x9652,	// (0x0005e634) popup_preview_text_window_t5_ParamLimits

0x9652,	// (0x0005e634) popup_preview_text_window_t5

0x339c,	// (0x0005837e) cursor_digital_pane

0x339c,	// (0x0005837e) cursor_primary_pane

0x33ad,	// (0x0005838f) cursor_primary_small_pane

0x33b5,	// (0x00058397) cursor_secondary_pane

0x33bd,	// (0x0005839f) cursor_title_pane

0x339c,	// (0x0005837e) link_highlight_digital_pane

0x33a4,	// (0x00058386) link_highlight_primary_pane

0x33ad,	// (0x0005838f) link_highlight_primary_small_pane

0x33b5,	// (0x00058397) link_highlight_secondary_pane

0x33bd,	// (0x0005839f) link_highlight_title_pane

0x339c,	// (0x0005837e) copy_highlight_digital_pane

0x339c,	// (0x0005837e) copy_highlight_primary_pane

0x33ad,	// (0x0005838f) copy_highlight_primary_small_pane

0x33b5,	// (0x00058397) copy_highlight_secondary_pane

0x33bd,	// (0x0005839f) copy_highlight_title_pane

0x33b5,	// (0x00058397) graphic_text_digital_pane

0x8ed1,	// (0x0005deb3) graphic_text_primary_pane

0x8eda,	// (0x0005debc) graphic_text_primary_small_pane

0x33ad,	// (0x0005838f) graphic_text_secondary_pane

0x339c,	// (0x0005837e) graphic_text_title_pane

0x6147,	// (0x0005b129) cursor_primary_pane_g1

0x8ec3,	// (0x0005dea5) cursor_text_primary_t1

0x8eab,	// (0x0005de8d) cursor_primary_small_pane_g1

0x8eb5,	// (0x0005de97) cursor_text_primary_small_t1

0x8e93,	// (0x0005de75) cursor_primary_small_pane_g1_copy1

0x8e9d,	// (0x0005de7f) cursor_text_primary_small_t1_copy1

0x8e7b,	// (0x0005de5d) cursor_text_title_t1

0x8e89,	// (0x0005de6b) cursor_title_pane_g1

0x6147,	// (0x0005b129) cursor_digital_pane_g1

0x33c5,	// (0x000583a7) cursor_text_digital_t1

0x33d3,	// (0x000583b5) link_highlight_primary_pane_g1

0x8e24,	// (0x0005de06) link_highlight_primary_pane_t1

0x33d3,	// (0x000583b5) link_highlight_primary_small_pane_g1

0x33db,	// (0x000583bd) link_highlight_primary_small_pane_t1

0x33ea,	// (0x000583cc) link_highlight_secondary_pane_g1

0x33f2,	// (0x000583d4) link_highlight_secondary_pane_t1

0x8d98,	// (0x0005dd7a) link_highlight_title_pane_g1

0x8da0,	// (0x0005dd82) link_highlight_title_pane_t1

0x8d81,	// (0x0005dd63) link_highlight_digital_pane_g1

0x8d89,	// (0x0005dd6b) link_highlight_digital_pane_t1

0x8c49,	// (0x0005dc2b) copy_highlight_primary_pane_g1

0x8c60,	// (0x0005dc42) copy_highlight_primary_pane_t1

0x8c49,	// (0x0005dc2b) copy_highlight_primary_small_pane_g1

0x8c51,	// (0x0005dc33) copy_highlight_primary_small_pane_t1

0x3401,	// (0x000583e3) copy_highlight_secondary_pane_g1

0x3409,	// (0x000583eb) copy_highlight_secondary_pane_t1

0x8c32,	// (0x0005dc14) copy_highlight_title_pane_g1

0x8c3a,	// (0x0005dc1c) copy_highlight_title_pane_t1

0x8c49,	// (0x0005dc2b) copy_highlight_digital_pane_g1

0xa0d9,	// (0x0005f0bb) copy_highlight_digital_pane_t1

0xa02d,	// (0x0005f00f) graphic_text_primary_pane_g1

0xa0bd,	// (0x0005f09f) graphic_text_primary_pane_t1

0xa0cb,	// (0x0005f0ad) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x000649b5) graphic_text_primary_pane_t

0xa099,	// (0x0005f07b) graphic_text_primary_small_pane_g1

0xa0a1,	// (0x0005f083) graphic_text_primary_small_pane_t1

0xa0af,	// (0x0005f091) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x000649b0) graphic_text_primary_small_pane_t

0xa075,	// (0x0005f057) graphic_text_secondary_pane_g1

0xa07d,	// (0x0005f05f) graphic_text_secondary_pane_t1

0xa08b,	// (0x0005f06d) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x000649ab) graphic_text_secondary_pane_t

0xa051,	// (0x0005f033) graphic_text_title_pane_g1

0xa059,	// (0x0005f03b) graphic_text_title_pane_t1

0xa067,	// (0x0005f049) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x000649a6) graphic_text_title_pane_t

0xa02d,	// (0x0005f00f) graphic_text_digital_pane_g1

0xa035,	// (0x0005f017) graphic_text_digital_pane_t1

0xa043,	// (0x0005f025) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x000649a1) graphic_text_digital_pane_t

0xc06b,	// (0x0006104d) navi_icon_pane_srt_ParamLimits

0xc06b,	// (0x0006104d) navi_icon_pane_srt

0xc011,	// (0x00060ff3) navi_midp_pane_srt

0xc011,	// (0x00060ff3) navi_navi_pane_srt

0xc06b,	// (0x0006104d) navi_text_pane_srt_ParamLimits

0xc06b,	// (0x0006104d) navi_text_pane_srt

0x9ff8,	// (0x0005efda) navi_navi_icon_text_pane_srt

0xa000,	// (0x0005efe2) navi_navi_pane_srt_g1_ParamLimits

0xa000,	// (0x0005efe2) navi_navi_pane_srt_g1

0xa012,	// (0x0005eff4) navi_navi_pane_srt_g2_ParamLimits

0xa012,	// (0x0005eff4) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0006499c) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0006499c) navi_navi_pane_srt_g

0xa024,	// (0x0005f006) navi_navi_tabs_pane_srt

0x9ff8,	// (0x0005efda) navi_navi_text_pane_srt

0x9ff8,	// (0x0005efda) navi_navi_volume_pane_srt

0x9fe9,	// (0x0005efcb) navi_navi_text_pane_srt_t1

0x6ae7,	// (0x0005bac9) navi_navi_volume_pane_srt_g1

0x6aef,	// (0x0005bad1) volume_small_pane_srt_ParamLimits

0x6aef,	// (0x0005bad1) volume_small_pane_srt

0x6151,	// (0x0005b133) volume_small_pane_srt_g1_ParamLimits

0x6151,	// (0x0005b133) volume_small_pane_srt_g1

0x6161,	// (0x0005b143) volume_small_pane_srt_g2_ParamLimits

0x6161,	// (0x0005b143) volume_small_pane_srt_g2

0x6172,	// (0x0005b154) volume_small_pane_srt_g3_ParamLimits

0x6172,	// (0x0005b154) volume_small_pane_srt_g3

0x6183,	// (0x0005b165) volume_small_pane_srt_g4_ParamLimits

0x6183,	// (0x0005b165) volume_small_pane_srt_g4

0x6194,	// (0x0005b176) volume_small_pane_srt_g5_ParamLimits

0x6194,	// (0x0005b176) volume_small_pane_srt_g5

0x61a5,	// (0x0005b187) volume_small_pane_srt_g6_ParamLimits

0x61a5,	// (0x0005b187) volume_small_pane_srt_g6

0x61b6,	// (0x0005b198) volume_small_pane_srt_g7_ParamLimits

0x61b6,	// (0x0005b198) volume_small_pane_srt_g7

0x61c7,	// (0x0005b1a9) volume_small_pane_srt_g8_ParamLimits

0x61c7,	// (0x0005b1a9) volume_small_pane_srt_g8

0x61d8,	// (0x0005b1ba) volume_small_pane_srt_g9_ParamLimits

0x61d8,	// (0x0005b1ba) volume_small_pane_srt_g9

0x61e9,	// (0x0005b1cb) volume_small_pane_srt_g10_ParamLimits

0x61e9,	// (0x0005b1cb) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00064744) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00064744) volume_small_pane_srt_g

0xc309,	// (0x000612eb) query_popup_data_pane_cp2

0x9fcf,	// (0x0005efb1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x9fcf,	// (0x0005efb1) navi_navi_icon_text_pane_srt_t1

0x8ed1,	// (0x0005deb3) navi_tabs_2_long_pane_srt

0x8ed1,	// (0x0005deb3) navi_tabs_2_pane_srt

0x8ed1,	// (0x0005deb3) navi_tabs_3_long_pane_srt

0x8ed1,	// (0x0005deb3) navi_tabs_3_pane_srt

0x8ed1,	// (0x0005deb3) navi_tabs_4_pane_srt

0x6ac7,	// (0x0005baa9) tabs_2_active_pane_srt_ParamLimits

0x6ac7,	// (0x0005baa9) tabs_2_active_pane_srt

0x6ad7,	// (0x0005bab9) tabs_2_passive_pane_srt_ParamLimits

0x6ad7,	// (0x0005bab9) tabs_2_passive_pane_srt

0x6496,	// (0x0005b478) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6496,	// (0x0005b478) bg_passive_tab_pane_cp1_srt

0x9f9b,	// (0x0005ef7d) bg_passive_tab_pane_g1_cp1_srt

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp1_srt

0x9fa4,	// (0x0005ef86) bg_passive_tab_pane_g3_cp1_srt

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp1_srt_ParamLimits

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp1_srt

0x9fad,	// (0x0005ef8f) tabs_2_active_pane_srt_g1

0x9fb5,	// (0x0005ef97) tabs_2_active_pane_srt_t1_ParamLimits

0x9fb5,	// (0x0005ef97) tabs_2_active_pane_srt_t1

0x9f9b,	// (0x0005ef7d) bg_active_tab_pane_g1_cp1_srt

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp1_srt

0x9fa4,	// (0x0005ef86) bg_active_tab_pane_g3_cp1_srt

0x6a94,	// (0x0005ba76) tabs_3_active_pane_srt_ParamLimits

0x6a94,	// (0x0005ba76) tabs_3_active_pane_srt

0x6aa5,	// (0x0005ba87) tabs_3_passive_pane_cp_srt_ParamLimits

0x6aa5,	// (0x0005ba87) tabs_3_passive_pane_cp_srt

0x6ab6,	// (0x0005ba98) tabs_3_passive_pane_srt_ParamLimits

0x6ab6,	// (0x0005ba98) tabs_3_passive_pane_srt

0x6496,	// (0x0005b478) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6496,	// (0x0005b478) bg_passive_tab_pane_cp2_srt

0x3421,	// (0x00058403) bg_passive_tab_pane_g1_cp2_srt

0xf36e,	// (0x00064350) bg_passive_tab_pane_g2_cp2_srt

0x3418,	// (0x000583fa) bg_passive_tab_pane_g3_cp2_srt

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp2_srt_ParamLimits

0xc06b,	// (0x0006104d) bg_active_tab_pane_cp2_srt

0x9f81,	// (0x0005ef63) tabs_3_active_pane_srt_g1

0x9f89,	// (0x0005ef6b) tabs_3_active_pane_srt_t1_ParamLimits

0x9f89,	// (0x0005ef6b) tabs_3_active_pane_srt_t1

0x3421,	// (0x00058403) bg_active_tab_pane_g1_cp2_srt

0xf36e,	// (0x00064350) bg_active_tab_pane_g2_cp2_srt

0x3418,	// (0x000583fa) bg_active_tab_pane_g3_cp2_srt

0x6a4c,	// (0x0005ba2e) tabs_4_active_pane_srt_ParamLimits

0x6a4c,	// (0x0005ba2e) tabs_4_active_pane_srt

0x6a5e,	// (0x0005ba40) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a5e,	// (0x0005ba40) tabs_4_passive_pane_cp2_srt

0x6424,	// (0x0005b406) aid_size_cell_toolbar

0x596c,	// (0x0005a94e) main_idle_act_pane_ParamLimits

0x7cc9,	// (0x0005ccab) popup_large_graphic_colour_window_ParamLimits

0x8070,	// (0x0005d052) popup_toolbar_window_ParamLimits

0x8070,	// (0x0005d052) popup_toolbar_window

0x9be2,	// (0x0005ebc4) list_single_graphic_2heading_pane_ParamLimits

0x9be2,	// (0x0005ebc4) list_single_graphic_2heading_pane

0xefcc,	// (0x00063fae) aid_size_cell_apps_grid_lsc_pane

0xefde,	// (0x00063fc0) aid_size_cell_apps_grid_prt_pane

0x6496,	// (0x0005b478) bg_wml_button_pane_cp1_ParamLimits

0x6496,	// (0x0005b478) bg_wml_button_pane_cp1

0x88c9,	// (0x0005d8ab) form_midp_field_text_pane_t1_ParamLimits

0x86b5,	// (0x0005d697) input_focus_pane_cp050_ParamLimits

0x88f4,	// (0x0005d8d6) list_midp_form_text_pane_ParamLimits

0x88a6,	// (0x0005d888) input_focus_pane_cp051_ParamLimits

0x88ba,	// (0x0005d89c) list_midp_choice_pane_ParamLimits

0x876e,	// (0x0005d750) list_single_2graphic_pane_cp3_ParamLimits

0x876e,	// (0x0005d750) list_single_2graphic_pane_cp3

0x8787,	// (0x0005d769) list_single_midp_graphic_pane_ParamLimits

0x8787,	// (0x0005d769) list_single_midp_graphic_pane

0x4a56,	// (0x00059a38) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a56,	// (0x00059a38) list_single_graphic_2heading_pane_g1

0x4a62,	// (0x00059a44) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a62,	// (0x00059a44) list_single_graphic_2heading_pane_g4

0x4a6e,	// (0x00059a50) list_single_graphic_2heading_pane_g5_ParamLimits

0x4a6e,	// (0x00059a50) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00064797) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00064797) list_single_graphic_2heading_pane_g

0x4a7a,	// (0x00059a5c) list_single_graphic_2heading_pane_t1_ParamLimits

0x4a7a,	// (0x00059a5c) list_single_graphic_2heading_pane_t1

0x4a8e,	// (0x00059a70) list_single_graphic_2heading_pane_t2_ParamLimits

0x4a8e,	// (0x00059a70) list_single_graphic_2heading_pane_t2

0x4aaa,	// (0x00059a8c) list_single_graphic_2heading_pane_t3_ParamLimits

0x4aaa,	// (0x00059a8c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0006479e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0006479e) list_single_graphic_2heading_pane_t

0x857f,	// (0x0005d561) bg_popup_sub_pane_cp2

0x85a9,	// (0x0005d58b) grid_toobar_pane

0x65c4,	// (0x0005b5a6) cell_toolbar_pane_ParamLimits

0x65c4,	// (0x0005b5a6) cell_toolbar_pane

0x85e5,	// (0x0005d5c7) cell_toolbar_pane_g1_ParamLimits

0x85e5,	// (0x0005d5c7) cell_toolbar_pane_g1

0x85f9,	// (0x0005d5db) cell_toolbar_pane_g2_ParamLimits

0x85f9,	// (0x0005d5db) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000647ac) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000647ac) cell_toolbar_pane_g

0x861b,	// (0x0005d5fd) grid_highlight_pane_cp2_ParamLimits

0x861b,	// (0x0005d5fd) grid_highlight_pane_cp2

0x8635,	// (0x0005d617) toolbar_button_pane

0x8641,	// (0x0005d623) toolbar_button_pane_g1

0x8649,	// (0x0005d62b) toolbar_button_pane_g2

0x8651,	// (0x0005d633) toolbar_button_pane_g3

0x8659,	// (0x0005d63b) toolbar_button_pane_g4

0x8661,	// (0x0005d643) toolbar_button_pane_g5

0x8669,	// (0x0005d64b) toolbar_button_pane_g6

0x8671,	// (0x0005d653) toolbar_button_pane_g7

0x8679,	// (0x0005d65b) toolbar_button_pane_g8

0x8681,	// (0x0005d663) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000647b1) toolbar_button_pane_g

0x6608,	// (0x0005b5ea) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6608,	// (0x0005b5ea) list_single_2graphic_pane_g1_cp3

0x6614,	// (0x0005b5f6) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6614,	// (0x0005b5f6) list_single_2graphic_pane_g2_cp3

0x6625,	// (0x0005b607) list_single_2graphic_pane_g3_cp3

0x662d,	// (0x0005b60f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x662d,	// (0x0005b60f) list_single_2graphic_pane_g4_cp3

0x6639,	// (0x0005b61b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6639,	// (0x0005b61b) list_single_2graphic_pane_t1_cp3

0x6654,	// (0x0005b636) list_single_midp_graphic_pane_g2_ParamLimits

0x6654,	// (0x0005b636) list_single_midp_graphic_pane_g2

0x3492,	// (0x00058474) aid_zoom_text_primary

0x349a,	// (0x0005847c) aid_zoom_text_secondary

0x6248,	// (0x0005b22a) status_small_pane_g7_ParamLimits

0x6248,	// (0x0005b22a) status_small_pane_g7

0x626b,	// (0x0005b24d) status_small_pane_t1_ParamLimits

0x4ef4,	// (0x00059ed6) title_pane_g2

0x0003,

0xf54e,	// (0x00064530) title_pane_g

0x5149,	// (0x0005a12b) aid_size_cell_colour_1_pane_ParamLimits

0x5149,	// (0x0005a12b) aid_size_cell_colour_1_pane

0x515d,	// (0x0005a13f) aid_size_cell_colour_2_pane_ParamLimits

0x515d,	// (0x0005a13f) aid_size_cell_colour_2_pane

0x5171,	// (0x0005a153) aid_size_cell_colour_3_pane_ParamLimits

0x5171,	// (0x0005a153) aid_size_cell_colour_3_pane

0x5185,	// (0x0005a167) aid_size_cell_colour_4_pane_ParamLimits

0x5185,	// (0x0005a167) aid_size_cell_colour_4_pane

0x59c6,	// (0x0005a9a8) title_pane_stacon_g1_ParamLimits

0x59c6,	// (0x0005a9a8) title_pane_stacon_g1

0x8cb7,	// (0x0005dc99) popup_note_wait_window_g3_ParamLimits

0x8cb7,	// (0x0005dc99) popup_note_wait_window_g3

0x8d2e,	// (0x0005dd10) popup_note_wait_window_t5_ParamLimits

0x8d2e,	// (0x0005dd10) popup_note_wait_window_t5

0xc011,	// (0x00060ff3) main_feb_china_hwr_fs_writing_pane

0x6526,	// (0x0005b508) popup_feb_china_hwr_fs_window_ParamLimits

0x6526,	// (0x0005b508) popup_feb_china_hwr_fs_window

0x668e,	// (0x0005b670) aid_size_cell_hwr_fs_ParamLimits

0x668e,	// (0x0005b670) aid_size_cell_hwr_fs

0x86b5,	// (0x0005d697) bg_popup_sub_pane_cp3_ParamLimits

0x86b5,	// (0x0005d697) bg_popup_sub_pane_cp3

0x66a3,	// (0x0005b685) grid_hwr_fs_pane_ParamLimits

0x66a3,	// (0x0005b685) grid_hwr_fs_pane

0x66bb,	// (0x0005b69d) linegrid_hwr_fs_pane_ParamLimits

0x66bb,	// (0x0005b69d) linegrid_hwr_fs_pane

0x66cb,	// (0x0005b6ad) cell_hwr_fs_pane_ParamLimits

0x66cb,	// (0x0005b6ad) cell_hwr_fs_pane

0x86c1,	// (0x0005d6a3) linegrid_hwr_fs_pane_g1_ParamLimits

0x86c1,	// (0x0005d6a3) linegrid_hwr_fs_pane_g1

0x86cd,	// (0x0005d6af) linegrid_hwr_fs_pane_g2_ParamLimits

0x86cd,	// (0x0005d6af) linegrid_hwr_fs_pane_g2

0x86df,	// (0x0005d6c1) linegrid_hwr_fs_pane_g3_ParamLimits

0x86df,	// (0x0005d6c1) linegrid_hwr_fs_pane_g3

0x66ef,	// (0x0005b6d1) linegrid_hwr_fs_pane_g4_ParamLimits

0x66ef,	// (0x0005b6d1) linegrid_hwr_fs_pane_g4

0x670d,	// (0x0005b6ef) linegrid_hwr_fs_pane_g5_ParamLimits

0x670d,	// (0x0005b6ef) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x000647dc) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x000647dc) linegrid_hwr_fs_pane_g

0x86eb,	// (0x0005d6cd) cell_hwr_fs_pane_g1_ParamLimits

0x86eb,	// (0x0005d6cd) cell_hwr_fs_pane_g1

0x84b6,	// (0x0005d498) cell_hwr_fs_pane_g2_ParamLimits

0x84b6,	// (0x0005d498) cell_hwr_fs_pane_g2

0x8701,	// (0x0005d6e3) cell_hwr_fs_pane_g3_ParamLimits

0x8701,	// (0x0005d6e3) cell_hwr_fs_pane_g3

0x870e,	// (0x0005d6f0) cell_hwr_fs_pane_g4_ParamLimits

0x870e,	// (0x0005d6f0) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x000647e7) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x000647e7) cell_hwr_fs_pane_g

0x6723,	// (0x0005b705) cell_hwr_fs_pane_t1

0xc011,	// (0x00060ff3) grid_highlight_pane_cp6

0xc011,	// (0x00060ff3) main_idle_act2_pane

0xeddb,	// (0x00063dbd) aid_inside_area_popup_secondary

0x9367,	// (0x0005e349) aid_inside_area_window_primary_ParamLimits

0x9367,	// (0x0005e349) aid_inside_area_window_primary

0xa0e8,	// (0x0005f0ca) ai2_news_ticker_pane

0xa0f0,	// (0x0005f0d2) aid_size_cell_ai1_link_ParamLimits

0xa0f0,	// (0x0005f0d2) aid_size_cell_ai1_link

0xa10a,	// (0x0005f0ec) popup_ai2_data_window_ParamLimits

0xa10a,	// (0x0005f0ec) popup_ai2_data_window

0xa128,	// (0x0005f10a) popup_ai2_link_window_ParamLimits

0xa128,	// (0x0005f10a) popup_ai2_link_window

0x86b5,	// (0x0005d697) bg_popup_sub_pane_cp4_ParamLimits

0x86b5,	// (0x0005d697) bg_popup_sub_pane_cp4

0xa13e,	// (0x0005f120) grid_ai2_link_pane_ParamLimits

0xa13e,	// (0x0005f120) grid_ai2_link_pane

0xa155,	// (0x0005f137) popup_ai2_link_window_g1_ParamLimits

0xa155,	// (0x0005f137) popup_ai2_link_window_g1

0xa161,	// (0x0005f143) popup_ai2_link_window_g2_ParamLimits

0xa161,	// (0x0005f143) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x000649ba) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x000649ba) popup_ai2_link_window_g

0xa172,	// (0x0005f154) ai2_mp_button_pane

0xa17a,	// (0x0005f15c) ai2_mp_volume_pane

0x88a6,	// (0x0005d888) bg_popup_sub_pane_cp5_ParamLimits

0x88a6,	// (0x0005d888) bg_popup_sub_pane_cp5

0xa182,	// (0x0005f164) heading_ai2_gene_pane_ParamLimits

0xa182,	// (0x0005f164) heading_ai2_gene_pane

0xa18e,	// (0x0005f170) list_ai2_gene_pane_ParamLimits

0xa18e,	// (0x0005f170) list_ai2_gene_pane

0xa1d6,	// (0x0005f1b8) cell_ai2_link_pane_ParamLimits

0xa1d6,	// (0x0005f1b8) cell_ai2_link_pane

0xa1ec,	// (0x0005f1ce) cell_ai2_link_pane_g1

0xc011,	// (0x00060ff3) grid_highlight_pane_cp7

0x6b04,	// (0x0005bae6) ai2_mp_volume_pane_g1

0xa2bf,	// (0x0005f2a1) ai2_mp_volume_pane_g2

0xa234,	// (0x0005f216) list_ai2_gene_pane_t1

0xa2c7,	// (0x0005f2a9) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x000649d3) ai2_mp_volume_pane_g

0x6b0c,	// (0x0005baee) volume_small_pane_cp3

0xa2cf,	// (0x0005f2b1) aid_size_cell_ai2_button

0xa2d7,	// (0x0005f2b9) grid_ai2_button_pane

0xa2e0,	// (0x0005f2c2) cell_ai2_button_pane_ParamLimits

0xa2e0,	// (0x0005f2c2) cell_ai2_button_pane

0xc007,	// (0x00060fe9) cell_ai2_button_pane_g1

0xc011,	// (0x00060ff3) grid_highlight_pane_cp8

0xa27f,	// (0x0005f261) ai2_gene_pane_t1_ParamLimits

0xa27f,	// (0x0005f261) ai2_gene_pane_t1

0x641a,	// (0x0005b3fc) aid_height_parent_landscape

0x99f9,	// (0x0005e9db) aid_height_set_list

0x9a0a,	// (0x0005e9ec) aid_size_parent

0x9f09,	// (0x0005eeeb) aid_size_cell_graphic_pane_ParamLimits

0xa19e,	// (0x0005f180) popup_ai2_data_window_g1_ParamLimits

0xa19e,	// (0x0005f180) popup_ai2_data_window_g1

0xa1aa,	// (0x0005f18c) ai2_news_ticker_pane_g1

0xa1b2,	// (0x0005f194) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x000649bf) ai2_news_ticker_pane_g

0xa1ba,	// (0x0005f19c) ai2_news_ticker_pane_t1

0xa1c8,	// (0x0005f1aa) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x000649c4) ai2_news_ticker_pane_t

0xa1f5,	// (0x0005f1d7) heading_ai2_gene_pane_g1

0xa1fd,	// (0x0005f1df) heading_ai2_gene_pane_t1_ParamLimits

0xa1fd,	// (0x0005f1df) heading_ai2_gene_pane_t1

0xa212,	// (0x0005f1f4) list_highlight_pane_cp6

0xa21a,	// (0x0005f1fc) ai2_gene_pane_ParamLimits

0xa21a,	// (0x0005f1fc) ai2_gene_pane

0xa242,	// (0x0005f224) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x000649c9) list_ai2_gene_pane_t

0xa250,	// (0x0005f232) list_highlight_pane_cp8_ParamLimits

0xa250,	// (0x0005f232) list_highlight_pane_cp8

0xa261,	// (0x0005f243) ai2_gene_pane_g1_ParamLimits

0xa261,	// (0x0005f243) ai2_gene_pane_g1

0xa273,	// (0x0005f255) ai2_gene_pane_g2_ParamLimits

0xa273,	// (0x0005f255) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x000649ce) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x000649ce) ai2_gene_pane_g

0xc624,	// (0x00061606) scroll_pane_cp12

0x63d1,	// (0x0005b3b3) control_pane_t3_ParamLimits

0x63d1,	// (0x0005b3b3) control_pane_t3

0x625c,	// (0x0005b23e) status_small_pane_g8_ParamLimits

0x625c,	// (0x0005b23e) status_small_pane_g8

0x7c8e,	// (0x0005cc70) popup_find_window_ParamLimits

0x7eb9,	// (0x0005ce9b) popup_note_image_window_ParamLimits

0x3516,	// (0x000584f8) list_double2_graphic_pane_vc_g1_ParamLimits

0x3516,	// (0x000584f8) list_double2_graphic_pane_vc_g1

0x312e,	// (0x00058110) list_double2_graphic_pane_vc_g2_ParamLimits

0x312e,	// (0x00058110) list_double2_graphic_pane_vc_g2

0x65f4,	// (0x0005b5d6) list_double2_graphic_pane_vc_g3_ParamLimits

0x65f4,	// (0x0005b5d6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000647a5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000647a5) list_double2_graphic_pane_vc_g

0x3522,	// (0x00058504) list_double2_graphic_pane_vc_t1_ParamLimits

0x3522,	// (0x00058504) list_double2_graphic_pane_vc_t1

0x312e,	// (0x00058110) list_single_heading_pane_vc_g1_ParamLimits

0x312e,	// (0x00058110) list_single_heading_pane_vc_g1

0x65f4,	// (0x0005b5d6) list_single_heading_pane_vc_g2_ParamLimits

0x65f4,	// (0x0005b5d6) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000647c6) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000647c6) list_single_heading_pane_vc_g

0x3538,	// (0x0005851a) list_single_heading_pane_vc_t1_ParamLimits

0x3538,	// (0x0005851a) list_single_heading_pane_vc_t1

0x3550,	// (0x00058532) list_single_heading_pane_vc_t2_ParamLimits

0x3550,	// (0x00058532) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x000647cb) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x000647cb) list_single_heading_pane_vc_t

0x6676,	// (0x0005b658) list_setting_number_pane_vc_g1_ParamLimits

0x6676,	// (0x0005b658) list_setting_number_pane_vc_g1

0x6682,	// (0x0005b664) list_setting_number_pane_vc_g2_ParamLimits

0x6682,	// (0x0005b664) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x000647d0) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x000647d0) list_setting_number_pane_vc_g

0x3562,	// (0x00058544) list_setting_number_pane_vc_t1_ParamLimits

0x3562,	// (0x00058544) list_setting_number_pane_vc_t1

0x3576,	// (0x00058558) list_setting_number_pane_vc_t2_ParamLimits

0x3576,	// (0x00058558) list_setting_number_pane_vc_t2

0x3592,	// (0x00058574) list_setting_number_pane_vc_t3_ParamLimits

0x3592,	// (0x00058574) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x000647d5) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x000647d5) list_setting_number_pane_vc_t

0x35c0,	// (0x000585a2) set_value_pane_vc_ParamLimits

0x35c0,	// (0x000585a2) set_value_pane_vc

0x9be2,	// (0x0005ebc4) list_double2_graphic_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double2_graphic_pane_vc

0x9be2,	// (0x0005ebc4) list_double2_large_graphic_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double2_large_graphic_pane_vc

0x9be2,	// (0x0005ebc4) list_double2_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double2_pane_vc

0x9be2,	// (0x0005ebc4) list_double_graphic_heading_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double_graphic_heading_pane_vc

0x9be2,	// (0x0005ebc4) list_double_graphic_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double_graphic_pane_vc

0x9be2,	// (0x0005ebc4) list_double_heading_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double_heading_pane_vc

0x9bf6,	// (0x0005ebd8) list_double_large_graphic_pane_vc_ParamLimits

0x9bf6,	// (0x0005ebd8) list_double_large_graphic_pane_vc

0x9be2,	// (0x0005ebc4) list_double_number_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double_number_pane_vc

0x9be2,	// (0x0005ebc4) list_double_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double_pane_vc

0x9be2,	// (0x0005ebc4) list_double_time_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_double_time_pane_vc

0x9be2,	// (0x0005ebc4) list_setting_number_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_setting_number_pane_vc

0x9be2,	// (0x0005ebc4) list_setting_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_setting_pane_vc

0x9be2,	// (0x0005ebc4) list_single_graphic_heading_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_single_graphic_heading_pane_vc

0x9be2,	// (0x0005ebc4) list_single_heading_pane_vc_ParamLimits

0x9be2,	// (0x0005ebc4) list_single_heading_pane_vc

0x9c18,	// (0x0005ebfa) list_single_number_heading_pane_vc_ParamLimits

0x9c18,	// (0x0005ebfa) list_single_number_heading_pane_vc

0x3516,	// (0x000584f8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x000584f8) list_double_graphic_heading_pane_vc_g1

0x9c90,	// (0x0005ec72) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9c90,	// (0x0005ec72) list_double_graphic_heading_pane_vc_g2

0x9c9c,	// (0x0005ec7e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9c9c,	// (0x0005ec7e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f8,	// (0x000649da) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f8,	// (0x000649da) list_double_graphic_heading_pane_vc_g

0x35f7,	// (0x000585d9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x35f7,	// (0x000585d9) list_double_graphic_heading_pane_vc_t1

0x360d,	// (0x000585ef) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x360d,	// (0x000585ef) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ff,	// (0x000649e1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ff,	// (0x000649e1) list_double_graphic_heading_pane_vc_t

0x6676,	// (0x0005b658) list_setting_pane_vc_g1_ParamLimits

0x6676,	// (0x0005b658) list_setting_pane_vc_g1

0x6682,	// (0x0005b664) list_setting_pane_vc_g2_ParamLimits

0x6682,	// (0x0005b664) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x000647d0) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x000647d0) list_setting_pane_vc_g

0x362b,	// (0x0005860d) list_setting_pane_vc_t1_ParamLimits

0x362b,	// (0x0005860d) list_setting_pane_vc_t1

0x3647,	// (0x00058629) list_setting_pane_vc_t2_ParamLimits

0x3647,	// (0x00058629) list_setting_pane_vc_t2

0x0001,

0xfa2d,	// (0x00064a0f) list_setting_pane_vc_t_ParamLimits

0xfa2d,	// (0x00064a0f) list_setting_pane_vc_t

0x35c0,	// (0x000585a2) set_value_pane_cp_vc_ParamLimits

0x35c0,	// (0x000585a2) set_value_pane_cp_vc

0x312e,	// (0x00058110) list_single_number_heading_pane_vc_g1_ParamLimits

0x312e,	// (0x00058110) list_single_number_heading_pane_vc_g1

0x65f4,	// (0x0005b5d6) list_single_number_heading_pane_vc_g2_ParamLimits

0x65f4,	// (0x0005b5d6) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x000647c6) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x000647c6) list_single_number_heading_pane_vc_g

0x3538,	// (0x0005851a) list_single_number_heading_pane_vc_t1_ParamLimits

0x3538,	// (0x0005851a) list_single_number_heading_pane_vc_t1

0x3663,	// (0x00058645) list_single_number_heading_pane_vc_t2_ParamLimits

0x3663,	// (0x00058645) list_single_number_heading_pane_vc_t2

0x3150,	// (0x00058132) list_single_number_heading_pane_vc_t3_ParamLimits

0x3150,	// (0x00058132) list_single_number_heading_pane_vc_t3

0x0002,

0xfa32,	// (0x00064a14) list_single_number_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00064a14) list_single_number_heading_pane_vc_t

0x3516,	// (0x000584f8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x000584f8) list_single_graphic_heading_pane_vc_g1

0x312e,	// (0x00058110) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x312e,	// (0x00058110) list_single_graphic_heading_pane_vc_g4

0x65f4,	// (0x0005b5d6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x65f4,	// (0x0005b5d6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000647a5) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000647a5) list_single_graphic_heading_pane_vc_g

0x3538,	// (0x0005851a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3538,	// (0x0005851a) list_single_graphic_heading_pane_vc_t1

0x3675,	// (0x00058657) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3675,	// (0x00058657) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa39,	// (0x00064a1b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x00064a1b) list_single_graphic_heading_pane_vc_t

0x312e,	// (0x00058110) list_double2_pane_vc_g1_ParamLimits

0x312e,	// (0x00058110) list_double2_pane_vc_g1

0x65f4,	// (0x0005b5d6) list_double2_pane_vc_g2_ParamLimits

0x65f4,	// (0x0005b5d6) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x000647c6) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x000647c6) list_double2_pane_vc_g

0x35e1,	// (0x000585c3) list_double2_pane_vc_t1_ParamLimits

0x35e1,	// (0x000585c3) list_double2_pane_vc_t1

0x9ca8,	// (0x0005ec8a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9ca8,	// (0x0005ec8a) list_double2_large_graphic_pane_vc_g1

0x312e,	// (0x00058110) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x312e,	// (0x00058110) list_double2_large_graphic_pane_vc_g2

0x65f4,	// (0x0005b5d6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x65f4,	// (0x0005b5d6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3e,	// (0x00064a20) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3e,	// (0x00064a20) list_double2_large_graphic_pane_vc_g

0x313a,	// (0x0005811c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x313a,	// (0x0005811c) list_double2_large_graphic_pane_vc_t1

0x9cb4,	// (0x0005ec96) list_double_time_pane_vc_g1_ParamLimits

0x9cb4,	// (0x0005ec96) list_double_time_pane_vc_g1

0x9cc0,	// (0x0005eca2) list_double_time_pane_vc_g2_ParamLimits

0x9cc0,	// (0x0005eca2) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x00064a27) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x00064a27) list_double_time_pane_vc_g

0x3687,	// (0x00058669) list_double_time_pane_vc_t1_ParamLimits

0x3687,	// (0x00058669) list_double_time_pane_vc_t1

0x36b1,	// (0x00058693) list_double_time_pane_vc_t2_ParamLimits

0x36b1,	// (0x00058693) list_double_time_pane_vc_t2

0x36fa,	// (0x000586dc) list_double_time_pane_vc_t3_ParamLimits

0x36fa,	// (0x000586dc) list_double_time_pane_vc_t3

0x370c,	// (0x000586ee) list_double_time_pane_vc_t4_ParamLimits

0x370c,	// (0x000586ee) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x00064a2c) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x00064a2c) list_double_time_pane_vc_t

0x312e,	// (0x00058110) list_double_pane_vc_g1_ParamLimits

0x312e,	// (0x00058110) list_double_pane_vc_g1

0x65f4,	// (0x0005b5d6) list_double_pane_vc_g2_ParamLimits

0x65f4,	// (0x0005b5d6) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x000647c6) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x000647c6) list_double_pane_vc_g

0x3731,	// (0x00058713) list_double_pane_vc_t1_ParamLimits

0x3731,	// (0x00058713) list_double_pane_vc_t1

0x3745,	// (0x00058727) list_double_pane_vc_t2_ParamLimits

0x3745,	// (0x00058727) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x00064a35) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x00064a35) list_double_pane_vc_t

0x312e,	// (0x00058110) list_double_number_pane_vc_g1_ParamLimits

0x312e,	// (0x00058110) list_double_number_pane_vc_g1

0x65f4,	// (0x0005b5d6) list_double_number_pane_vc_g2_ParamLimits

0x65f4,	// (0x0005b5d6) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x000647c6) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x000647c6) list_double_number_pane_vc_g

0x375b,	// (0x0005873d) list_double_number_pane_vc_t1_ParamLimits

0x375b,	// (0x0005873d) list_double_number_pane_vc_t1

0x376f,	// (0x00058751) list_double_number_pane_vc_t2_ParamLimits

0x376f,	// (0x00058751) list_double_number_pane_vc_t2

0x3783,	// (0x00058765) list_double_number_pane_vc_t3_ParamLimits

0x3783,	// (0x00058765) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x00064a3a) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x00064a3a) list_double_number_pane_vc_t

0x9ccc,	// (0x0005ecae) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9ccc,	// (0x0005ecae) list_double_large_graphic_pane_vc_g1

0x9cf4,	// (0x0005ecd6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9cf4,	// (0x0005ecd6) list_double_large_graphic_pane_vc_g2

0x9d08,	// (0x0005ecea) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9d08,	// (0x0005ecea) list_double_large_graphic_pane_vc_g3

0x3799,	// (0x0005877b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3799,	// (0x0005877b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x00064a41) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x00064a41) list_double_large_graphic_pane_vc_g

0x37a9,	// (0x0005878b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x37a9,	// (0x0005878b) list_double_large_graphic_pane_vc_t1

0x37cb,	// (0x000587ad) list_double_large_graphic_pane_vc_t2_ParamLimits

0x37cb,	// (0x000587ad) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x00064a4a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x00064a4a) list_double_large_graphic_pane_vc_t

0x9c90,	// (0x0005ec72) list_double_heading_pane_vc_g1_ParamLimits

0x9c90,	// (0x0005ec72) list_double_heading_pane_vc_g1

0x9c9c,	// (0x0005ec7e) list_double_heading_pane_vc_g2_ParamLimits

0x9c9c,	// (0x0005ec7e) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x00064a4f) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x00064a4f) list_double_heading_pane_vc_g

0x37eb,	// (0x000587cd) list_double_heading_pane_vc_t1_ParamLimits

0x37eb,	// (0x000587cd) list_double_heading_pane_vc_t1

0x3538,	// (0x0005851a) list_double_heading_pane_vc_t2_ParamLimits

0x3538,	// (0x0005851a) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x00064a54) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x00064a54) list_double_heading_pane_vc_t

0x37fd,	// (0x000587df) list_double_graphic_pane_vc_g1_ParamLimits

0x37fd,	// (0x000587df) list_double_graphic_pane_vc_g1

0x9d17,	// (0x0005ecf9) list_double_graphic_pane_vc_g2_ParamLimits

0x9d17,	// (0x0005ecf9) list_double_graphic_pane_vc_g2

0x312e,	// (0x00058110) list_double_graphic_pane_vc_g3_ParamLimits

0x312e,	// (0x00058110) list_double_graphic_pane_vc_g3

0x0003,

0xfa77,	// (0x00064a59) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x00064a59) list_double_graphic_pane_vc_g

0x3809,	// (0x000587eb) list_double_graphic_pane_vc_t1_ParamLimits

0x3809,	// (0x000587eb) list_double_graphic_pane_vc_t1

0x3833,	// (0x00058815) list_double_graphic_pane_vc_t2_ParamLimits

0x3833,	// (0x00058815) list_double_graphic_pane_vc_t2

0x0001,

0xfa80,	// (0x00064a62) list_double_graphic_pane_vc_t_ParamLimits

0xfa80,	// (0x00064a62) list_double_graphic_pane_vc_t

0x4af6,	// (0x00059ad8) aid_size_cell_fastswap

0x4afe,	// (0x00059ae0) aid_size_cell_touch_ParamLimits

0x4afe,	// (0x00059ae0) aid_size_cell_touch

0x4d69,	// (0x00059d4b) popup_fast_swap_wide_window_ParamLimits

0x4d69,	// (0x00059d4b) popup_fast_swap_wide_window

0x4e87,	// (0x00059e69) touch_pane_ParamLimits

0x4e87,	// (0x00059e69) touch_pane

0xecb4,	// (0x00063c96) button_value_adjust_pane_cp2

0x317c,	// (0x0005815e) button_value_adjust_pane_cp4

0x3184,	// (0x00058166) form_field_data_pane_cp2

0x57c8,	// (0x0005a7aa) form_field_data_wide_pane_cp2

0xf01a,	// (0x00063ffc) bg_scroll_pane_ParamLimits

0x5bae,	// (0x0005ab90) scroll_handle_pane_ParamLimits

0x5bc2,	// (0x0005aba4) scroll_sc2_down_pane_ParamLimits

0x5bc2,	// (0x0005aba4) scroll_sc2_down_pane

0xf04b,	// (0x0006402d) scroll_sc2_up_pane_ParamLimits

0xf04b,	// (0x0006402d) scroll_sc2_up_pane

0xa9f9,	// (0x0005f9db) grid_wheel_folder_pane_g1_ParamLimits

0xa9f9,	// (0x0005f9db) grid_wheel_folder_pane_g1

0x5f54,	// (0x0005af36) clock_nsta_pane_cp2_ParamLimits

0x5f54,	// (0x0005af36) clock_nsta_pane_cp2

0x596c,	// (0x0005a94e) listscroll_midp_pane_ParamLimits

0x6090,	// (0x0005b072) midp_canvas_pane

0x6412,	// (0x0005b3f4) nsta_clock_indic_pane

0x6460,	// (0x0005b442) listscroll_form_pane_vc

0x6484,	// (0x0005b466) listscroll_set_pane_vc_ParamLimits

0x6484,	// (0x0005b466) listscroll_set_pane_vc

0x820a,	// (0x0005d1ec) clock_nsta_pane

0x8287,	// (0x0005d269) indicator_nsta_pane

0x857f,	// (0x0005d561) bg_popup_sub_pane_cp2_ParamLimits

0x8593,	// (0x0005d575) find_pane_cp2_ParamLimits

0x8593,	// (0x0005d575) find_pane_cp2

0x85a9,	// (0x0005d58b) grid_toobar_pane_ParamLimits

0x8689,	// (0x0005d66b) list_form_gen_pane_vc_ParamLimits

0x8689,	// (0x0005d66b) list_form_gen_pane_vc

0x869f,	// (0x0005d681) scroll_pane_cp8_vc_ParamLimits

0x869f,	// (0x0005d681) scroll_pane_cp8_vc

0x871b,	// (0x0005d6fd) data_form_wide_pane_vc_ParamLimits

0x871b,	// (0x0005d6fd) data_form_wide_pane_vc

0x8727,	// (0x0005d709) form_field_data_wide_pane_vc_g1

0x872f,	// (0x0005d711) form_field_data_wide_pane_vc_t1_ParamLimits

0x872f,	// (0x0005d711) form_field_data_wide_pane_vc_t1

0xecc8,	// (0x00063caa) input_focus_pane_cp6_vc_ParamLimits

0xecc8,	// (0x00063caa) input_focus_pane_cp6_vc

0x8a31,	// (0x0005da13) list_midp_pane_ParamLimits

0x8a3d,	// (0x0005da1f) scroll_pane_cp16_ParamLimits

0x8a3d,	// (0x0005da1f) scroll_pane_cp16

0x8a8b,	// (0x0005da6d) button_value_adjust_pane_ParamLimits

0x8a8b,	// (0x0005da6d) button_value_adjust_pane

0x9a1c,	// (0x0005e9fe) button_value_adjust_pane_cp6_ParamLimits

0x9a1c,	// (0x0005e9fe) button_value_adjust_pane_cp6

0x9b6a,	// (0x0005eb4c) settings_code_pane_cp_ParamLimits

0x9b6a,	// (0x0005eb4c) settings_code_pane_cp

0xc007,	// (0x00060fe9) cell_touch_pane_g1

0xc007,	// (0x00060fe9) cell_touch_pane_g2

0x0001,

0xf708,	// (0x000646ea) cell_touch_pane_g

0xa2f2,	// (0x0005f2d4) cell_touch_pane_cp_ParamLimits

0xa2f2,	// (0x0005f2d4) cell_touch_pane_cp

0xa302,	// (0x0005f2e4) cell_touch_pane_ParamLimits

0xa302,	// (0x0005f2e4) cell_touch_pane

0xc007,	// (0x00060fe9) scroll_sc2_down_pane_g1

0xc007,	// (0x00060fe9) scroll_sc2_up_pane_g1

0xc011,	// (0x00060ff3) bg_set_opt_pane_cp4_vc

0xa313,	// (0x0005f2f5) list_set_graphic_pane_vc_g1_ParamLimits

0xa313,	// (0x0005f2f5) list_set_graphic_pane_vc_g1

0x16a3,	// (0x00056685) list_set_graphic_pane_vc_g2_ParamLimits

0x16a3,	// (0x00056685) list_set_graphic_pane_vc_g2

0x0001,

0xfa04,	// (0x000649e6) list_set_graphic_pane_vc_g_ParamLimits

0xfa04,	// (0x000649e6) list_set_graphic_pane_vc_g

0xa31f,	// (0x0005f301) text_primary_small_cp13_vc_ParamLimits

0xa31f,	// (0x0005f301) text_primary_small_cp13_vc

0xa337,	// (0x0005f319) list_set_graphic_pane_vc_ParamLimits

0xa337,	// (0x0005f319) list_set_graphic_pane_vc

0xc011,	// (0x00060ff3) input_focus_pane_cp2_vc

0xc007,	// (0x00060fe9) setting_code_pane_vc_g1

0xc082,	// (0x00061064) setting_code_pane_vc_t1

0xa34c,	// (0x0005f32e) set_text_pane_vc_t1_ParamLimits

0xa34c,	// (0x0005f32e) set_text_pane_vc_t1

0xc011,	// (0x00060ff3) input_focus_pane_cp1_vc

0xa36a,	// (0x0005f34c) list_set_text_pane_vc

0xc007,	// (0x00060fe9) setting_text_pane_vc_g1

0xc011,	// (0x00060ff3) bg_set_opt_pane_cp2_vc

0xc079,	// (0x0006105b) setting_slider_graphic_pane_vc_g1

0xa374,	// (0x0005f356) setting_slider_graphic_pane_vc_t1

0xa386,	// (0x0005f368) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa09,	// (0x000649eb) setting_slider_graphic_pane_vc_t

0xa398,	// (0x0005f37a) slider_set_pane_cp_vc

0xa3a2,	// (0x0005f384) slider_set_pane_vc_g1

0xa3ab,	// (0x0005f38d) slider_set_pane_vc_g2

0x0006,

0xfa0e,	// (0x000649f0) slider_set_pane_vc_g

0xed23,	// (0x00063d05) set_opt_bg_pane_g1_copy1

0xed2b,	// (0x00063d0d) set_opt_bg_pane_g2_copy1

0xa3d7,	// (0x0005f3b9) set_opt_bg_pane_g3_copy1

0xed3b,	// (0x00063d1d) set_opt_bg_pane_g4_copy1

0xed43,	// (0x00063d25) set_opt_bg_pane_g5_copy1

0xed4b,	// (0x00063d2d) set_opt_bg_pane_g6_copy1

0xa3e1,	// (0x0005f3c3) set_opt_bg_pane_g7_copy1

0xa3eb,	// (0x0005f3cd) set_opt_bg_pane_g8_copy1

0xa3f5,	// (0x0005f3d7) set_opt_bg_pane_g9_copy1

0xc011,	// (0x00060ff3) bg_set_opt_pane_cp_vc

0xa3ff,	// (0x0005f3e1) setting_slider_pane_vc_t1

0xa40e,	// (0x0005f3f0) setting_slider_pane_vc_t2

0xa420,	// (0x0005f402) setting_slider_pane_vc_t3

0x0002,

0xfa1d,	// (0x000649ff) setting_slider_pane_vc_t

0xa432,	// (0x0005f414) slider_set_pane_vc

0x6750,	// (0x0005b732) volume_set_pane_vc_g1

0x6759,	// (0x0005b73b) volume_set_pane_vc_g2

0x6762,	// (0x0005b744) volume_set_pane_vc_g3

0x676b,	// (0x0005b74d) volume_set_pane_vc_g4

0x6774,	// (0x0005b756) volume_set_pane_vc_g5

0x677d,	// (0x0005b75f) volume_set_pane_vc_g6

0x6786,	// (0x0005b768) volume_set_pane_vc_g7

0x678f,	// (0x0005b771) volume_set_pane_vc_g8

0x6798,	// (0x0005b77a) volume_set_pane_vc_g9

0x67a1,	// (0x0005b783) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0006489d) volume_set_pane_vc_g

0xa43c,	// (0x0005f41e) volume_set_pane_vc

0xa446,	// (0x0005f428) button_value_adjust_pane_cp1_vc

0xa450,	// (0x0005f432) list_highlight_pane_cp2_vc

0xa459,	// (0x0005f43b) list_set_pane_vc_ParamLimits

0xa459,	// (0x0005f43b) list_set_pane_vc

0xa4c9,	// (0x0005f4ab) main_pane_set_vc_t1_ParamLimits

0xa4c9,	// (0x0005f4ab) main_pane_set_vc_t1

0xa4de,	// (0x0005f4c0) main_pane_set_vc_t2_ParamLimits

0xa4de,	// (0x0005f4c0) main_pane_set_vc_t2

0xa4f0,	// (0x0005f4d2) main_pane_set_vc_t3_ParamLimits

0xa4f0,	// (0x0005f4d2) main_pane_set_vc_t3

0xa504,	// (0x0005f4e6) main_pane_set_vc_t4_ParamLimits

0xa504,	// (0x0005f4e6) main_pane_set_vc_t4

0x0003,

0xfa24,	// (0x00064a06) main_pane_set_vc_t_ParamLimits

0xfa24,	// (0x00064a06) main_pane_set_vc_t

0xa518,	// (0x0005f4fa) setting_code_pane_vc_ParamLimits

0xa518,	// (0x0005f4fa) setting_code_pane_vc

0xa529,	// (0x0005f50b) setting_slider_graphic_pane_vc

0xa529,	// (0x0005f50b) setting_slider_pane_vc

0xa529,	// (0x0005f50b) setting_text_pane_vc

0xa529,	// (0x0005f50b) setting_volume_pane_vc

0xa533,	// (0x0005f515) scroll_pane_cp121_vc

0xeca2,	// (0x00063c84) set_content_pane_vc

0xa53b,	// (0x0005f51d) button_value_adjust_pane_g1

0xa544,	// (0x0005f526) button_value_adjust_pane_g2

0x0001,

0xfa85,	// (0x00064a67) button_value_adjust_pane_g

0xa54d,	// (0x0005f52f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa54d,	// (0x0005f52f) form_field_slider_wide_pane_vc_t1

0xa55f,	// (0x0005f541) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa55f,	// (0x0005f541) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8a,	// (0x00064a6c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8a,	// (0x00064a6c) form_field_slider_wide_pane_vc_t

0xc19e,	// (0x00061180) input_focus_pane_cp10_vc_ParamLimits

0xc19e,	// (0x00061180) input_focus_pane_cp10_vc

0xa58b,	// (0x0005f56d) slider_cont_pane_cp1_vc_ParamLimits

0xa58b,	// (0x0005f56d) slider_cont_pane_cp1_vc

0xa59d,	// (0x0005f57f) slider_form_pane_g1_cp2

0xa3ab,	// (0x0005f38d) slider_form_pane_g2_cp2

0xa5ca,	// (0x0005f5ac) form_field_slider_pane_vc_t3

0xa5d8,	// (0x0005f5ba) form_field_slider_pane_vc_t4

0xa5e6,	// (0x0005f5c8) slider_form_pane_vc_ParamLimits

0xa5e6,	// (0x0005f5c8) slider_form_pane_vc

0xa5f3,	// (0x0005f5d5) form_field_slider_pane_vc_t1_ParamLimits

0xa5f3,	// (0x0005f5d5) form_field_slider_pane_vc_t1

0xa55f,	// (0x0005f541) form_field_slider_pane_vc_t2_ParamLimits

0xa55f,	// (0x0005f541) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x00064a7e) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x00064a7e) form_field_slider_pane_vc_t

0xc19e,	// (0x00061180) input_focus_pane_cp9_vc_ParamLimits

0xc19e,	// (0x00061180) input_focus_pane_cp9_vc

0xa609,	// (0x0005f5eb) slider_cont_pane_vc_ParamLimits

0xa609,	// (0x0005f5eb) slider_cont_pane_vc

0xa61d,	// (0x0005f5ff) list_form_graphic_pane_cp_vc_ParamLimits

0xa61d,	// (0x0005f5ff) list_form_graphic_pane_cp_vc

0x8727,	// (0x0005d709) form_field_popup_wide_pane_vc_g1

0xa632,	// (0x0005f614) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa632,	// (0x0005f614) form_field_popup_wide_pane_vc_t1

0xecc8,	// (0x00063caa) input_focus_pane_cp8_vc_ParamLimits

0xecc8,	// (0x00063caa) input_focus_pane_cp8_vc

0xa677,	// (0x0005f659) list_form_wide_pane_vc_ParamLimits

0xa677,	// (0x0005f659) list_form_wide_pane_vc

0xa683,	// (0x0005f665) list_form_graphic_pane_vc_g1

0xa68b,	// (0x0005f66d) list_form_graphic_pane_vc_t1_ParamLimits

0xa68b,	// (0x0005f66d) list_form_graphic_pane_vc_t1

0xc06b,	// (0x0006104d) list_highlight_pane_cp5_vc_ParamLimits

0xc06b,	// (0x0006104d) list_highlight_pane_cp5_vc

0xa6a7,	// (0x0005f689) list_form_graphic_pane_vc_ParamLimits

0xa6a7,	// (0x0005f689) list_form_graphic_pane_vc

0x8727,	// (0x0005d709) form_field_popup_pane_vc_g1

0xa6bd,	// (0x0005f69f) form_field_popup_pane_vc_t1_ParamLimits

0xa6bd,	// (0x0005f69f) form_field_popup_pane_vc_t1

0xecc8,	// (0x00063caa) input_focus_pane_cp7_vc_ParamLimits

0xecc8,	// (0x00063caa) input_focus_pane_cp7_vc

0xa6d4,	// (0x0005f6b6) list_form_pane_vc_ParamLimits

0xa6d4,	// (0x0005f6b6) list_form_pane_vc

0xa6e0,	// (0x0005f6c2) data_form_pane_vc_t1_ParamLimits

0xa6e0,	// (0x0005f6c2) data_form_pane_vc_t1

0xed23,	// (0x00063d05) input_focus_pane_vc_g1

0xed2b,	// (0x00063d0d) input_focus_pane_vc_g2

0xed33,	// (0x00063d15) input_focus_pane_vc_g3

0xed3b,	// (0x00063d1d) input_focus_pane_vc_g4

0xed43,	// (0x00063d25) input_focus_pane_vc_g5

0xed4b,	// (0x00063d2d) input_focus_pane_vc_g6

0xed53,	// (0x00063d35) input_focus_pane_vc_g7

0xed5b,	// (0x00063d3d) input_focus_pane_vc_g8

0xed63,	// (0x00063d45) input_focus_pane_vc_g9

0xc007,	// (0x00060fe9) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00064673) input_focus_pane_vc_g

0x871b,	// (0x0005d6fd) data_form_pane_vc_ParamLimits

0x871b,	// (0x0005d6fd) data_form_pane_vc

0x8727,	// (0x0005d709) form_field_data_pane_vc_g1

0xa6fd,	// (0x0005f6df) form_field_data_pane_vc_t1_ParamLimits

0xa6fd,	// (0x0005f6df) form_field_data_pane_vc_t1

0xecc8,	// (0x00063caa) input_focus_pane_vc_ParamLimits

0xecc8,	// (0x00063caa) input_focus_pane_vc

0xa717,	// (0x0005f6f9) button_value_adjust_pane_cp3_vc

0xa71f,	// (0x0005f701) button_value_adjust_pane_cp5_vc

0xa727,	// (0x0005f709) form_field_data_pane_vc_ParamLimits

0xa727,	// (0x0005f709) form_field_data_pane_vc

0xa742,	// (0x0005f724) form_field_data_pane_vc_cp2

0xa74a,	// (0x0005f72c) form_field_data_wide_pane_vc_ParamLimits

0xa74a,	// (0x0005f72c) form_field_data_wide_pane_vc

0xa764,	// (0x0005f746) form_field_data_wide_pane_vc_cp2

0xa76c,	// (0x0005f74e) form_field_popup_pane_vc_ParamLimits

0xa76c,	// (0x0005f74e) form_field_popup_pane_vc

0xa787,	// (0x0005f769) form_field_popup_wide_pane_vc_ParamLimits

0xa787,	// (0x0005f769) form_field_popup_wide_pane_vc

0xa7a1,	// (0x0005f783) form_field_slider_pane_vc_ParamLimits

0xa7a1,	// (0x0005f783) form_field_slider_pane_vc

0xa7b4,	// (0x0005f796) form_field_slider_wide_pane_vc_ParamLimits

0xa7b4,	// (0x0005f796) form_field_slider_wide_pane_vc

0xa7c7,	// (0x0005f7a9) grid_touch_1_pane_ParamLimits

0xa7c7,	// (0x0005f7a9) grid_touch_1_pane

0xa7d3,	// (0x0005f7b5) grid_touch_2_pane_ParamLimits

0xa7d3,	// (0x0005f7b5) grid_touch_2_pane

0x3484,	// (0x00058466) touch_pane_g1_ParamLimits

0x3484,	// (0x00058466) touch_pane_g1

0xa7ed,	// (0x0005f7cf) cell_app_pane_cp_wide_ParamLimits

0xa7ed,	// (0x0005f7cf) cell_app_pane_cp_wide

0xa7fe,	// (0x0005f7e0) grid_popup_fast_wide_pane_ParamLimits

0xa7fe,	// (0x0005f7e0) grid_popup_fast_wide_pane

0xa812,	// (0x0005f7f4) scroll_pane_cp19_ParamLimits

0xa812,	// (0x0005f7f4) scroll_pane_cp19

0xc011,	// (0x00060ff3) bg_popup_window_pane_cp20

0xa826,	// (0x0005f808) listscroll_popup_fast_wide_pane

0xc06b,	// (0x0006104d) grid_indicator_nsta_pane

0xa82e,	// (0x0005f810) clock_nsta_pane_g1

0xa837,	// (0x0005f819) clock_nsta_pane_t1

0xa853,	// (0x0005f835) cell_indicator_nsta_pane_ParamLimits

0xa853,	// (0x0005f835) cell_indicator_nsta_pane

0xa885,	// (0x0005f867) cell_indicator_nsta_pane_g1

0xa893,	// (0x0005f875) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00064a8f) cell_indicator_nsta_pane_g

0xa8a9,	// (0x0005f88b) clock_nsta_pane_cp

0xa8b1,	// (0x0005f893) indicator_nsta_pane_cp

0xa8ba,	// (0x0005f89c) nsta_clock_indic_pane_g1

0xc0a7,	// (0x00061089) grid_indicator_pane

0xf13d,	// (0x0006411f) scroll_pane_cp29

0x5ea0,	// (0x0005ae82) indicator_nsta_pane_cp2_ParamLimits

0x5ea0,	// (0x0005ae82) indicator_nsta_pane_cp2

0xc06b,	// (0x0006104d) main_apps_wheel_pane

0x890e,	// (0x0005d8f0) form_midp_field_text_pane_ParamLimits

0x8a5d,	// (0x0005da3f) scroll_bar_cp050_ParamLimits

0xa923,	// (0x0005f905) cell_indicator_pane_ParamLimits

0xa923,	// (0x0005f905) cell_indicator_pane

0xa93b,	// (0x0005f91d) cell_indicator_pane_g1

0xa945,	// (0x0005f927) grid_wheel_folder_pane_ParamLimits

0xa945,	// (0x0005f927) grid_wheel_folder_pane

0xa959,	// (0x0005f93b) list_wheel_apps_pane_ParamLimits

0xa959,	// (0x0005f93b) list_wheel_apps_pane

0xa96c,	// (0x0005f94e) main_apps_wheel_pane_g1_ParamLimits

0xa96c,	// (0x0005f94e) main_apps_wheel_pane_g1

0xa988,	// (0x0005f96a) main_apps_wheel_pane_g2_ParamLimits

0xa988,	// (0x0005f96a) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00064aab) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00064aab) main_apps_wheel_pane_g

0xa9a4,	// (0x0005f986) main_apps_wheel_pane_t1_ParamLimits

0xa9a4,	// (0x0005f986) main_apps_wheel_pane_t1

0xa9cd,	// (0x0005f9af) list_wheel_apps_pane_g1

0xa9d5,	// (0x0005f9b7) list_wheel_apps_pane_g2

0xa9dd,	// (0x0005f9bf) list_wheel_apps_pane_g3

0xa9e5,	// (0x0005f9c7) list_wheel_apps_pane_g4

0xa9ef,	// (0x0005f9d1) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00064ab0) list_wheel_apps_pane_g

0xf4bd,	// (0x0006449f) navi_icon_text_pane

0x8137,	// (0x0005d119) aid_fill_nsta

0xaa10,	// (0x0005f9f2) navi_icon_text_pane_g1

0xaa1c,	// (0x0005f9fe) navi_icon_text_pane_t1

0x5fe9,	// (0x0005afcb) list_set_graphic_pane_t1_ParamLimits

0x5fe9,	// (0x0005afcb) list_set_graphic_pane_t1

0x91ae,	// (0x0005e190) popup_midp_note_alarm_window_t6_ParamLimits

0x91ae,	// (0x0005e190) popup_midp_note_alarm_window_t6

0x91c0,	// (0x0005e1a2) popup_midp_note_alarm_window_t7_ParamLimits

0x91c0,	// (0x0005e1a2) popup_midp_note_alarm_window_t7

0x91d2,	// (0x0005e1b4) popup_midp_note_alarm_window_t8_ParamLimits

0x91d2,	// (0x0005e1b4) popup_midp_note_alarm_window_t8

0x91e4,	// (0x0005e1c6) popup_midp_note_alarm_window_t9_ParamLimits

0x91e4,	// (0x0005e1c6) popup_midp_note_alarm_window_t9

0x91f6,	// (0x0005e1d8) popup_midp_note_alarm_window_t10_ParamLimits

0x91f6,	// (0x0005e1d8) popup_midp_note_alarm_window_t10

0x9208,	// (0x0005e1ea) popup_midp_note_alarm_window_t11_ParamLimits

0x9208,	// (0x0005e1ea) popup_midp_note_alarm_window_t11

0x921a,	// (0x0005e1fc) scroll_pane_cp17_ParamLimits

0x921a,	// (0x0005e1fc) scroll_pane_cp17

0x6750,	// (0x0005b732) volume_small_pane_cp_g1

0x6b15,	// (0x0005baf7) volume_small_pane_cp_g2

0x6b1e,	// (0x0005bb00) volume_small_pane_cp_g3

0x6b27,	// (0x0005bb09) volume_small_pane_cp_g4

0x6b30,	// (0x0005bb12) volume_small_pane_cp_g5

0x6b39,	// (0x0005bb1b) volume_small_pane_cp_g6

0x6b42,	// (0x0005bb24) volume_small_pane_cp_g7

0x6b4b,	// (0x0005bb2d) volume_small_pane_cp_g8

0x6b54,	// (0x0005bb36) volume_small_pane_cp_g9

0x6b5d,	// (0x0005bb3f) volume_small_pane_cp_g10

0x335b,	// (0x0005833d) midp_ticker_pane_g1_ParamLimits

0x3367,	// (0x00058349) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0006473f) midp_ticker_pane_g_ParamLimits

0x6135,	// (0x0005b117) midp_ticker_pane_t1_ParamLimits

0x814d,	// (0x0005d12f) aid_fill_nsta_2

0x8a49,	// (0x0005da2b) list_form2_midp_pane

0x9bb1,	// (0x0005eb93) midp_editing_number_pane_ParamLimits

0x9bc0,	// (0x0005eba2) midp_ticker_pane_ParamLimits

0xaa2e,	// (0x0005fa10) form2_midp_field_pane

0xaa52,	// (0x0005fa34) scroll_pane_cp51

0xaa72,	// (0x0005fa54) form2_midp_button_pane_ParamLimits

0xaa72,	// (0x0005fa54) form2_midp_button_pane

0xaa84,	// (0x0005fa66) form2_midp_content_pane_ParamLimits

0xaa84,	// (0x0005fa66) form2_midp_content_pane

0xaa9e,	// (0x0005fa80) form2_midp_field_choice_group_pane

0xaaa6,	// (0x0005fa88) form2_midp_field_pane_g1

0xaaae,	// (0x0005fa90) form2_midp_field_pane_g2

0xaab6,	// (0x0005fa98) form2_midp_field_pane_g3

0xaabe,	// (0x0005faa0) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00064ad5) form2_midp_field_pane_g

0xaac6,	// (0x0005faa8) form2_midp_gauge_slider_pane

0xaace,	// (0x0005fab0) form2_midp_gauge_wait_pane

0xaad6,	// (0x0005fab8) form2_midp_image_pane_ParamLimits

0xaad6,	// (0x0005fab8) form2_midp_image_pane

0xaaf1,	// (0x0005fad3) form2_midp_label_pane_ParamLimits

0xaaf1,	// (0x0005fad3) form2_midp_label_pane

0xab10,	// (0x0005faf2) form2_midp_label_pane_cp_ParamLimits

0xab10,	// (0x0005faf2) form2_midp_label_pane_cp

0xab31,	// (0x0005fb13) form2_midp_string_pane_ParamLimits

0xab31,	// (0x0005fb13) form2_midp_string_pane

0x3851,	// (0x00058833) form2_midp_text_pane_ParamLimits

0x3851,	// (0x00058833) form2_midp_text_pane

0xab43,	// (0x0005fb25) form2_midp_time_pane

0xab53,	// (0x0005fb35) input_focus_pane_cp51_ParamLimits

0xab53,	// (0x0005fb35) input_focus_pane_cp51

0xab6b,	// (0x0005fb4d) form2_midp_label_pane_t1_ParamLimits

0xab6b,	// (0x0005fb4d) form2_midp_label_pane_t1

0x3874,	// (0x00058856) form2_mdip_text_pane_t1_ParamLimits

0x3874,	// (0x00058856) form2_mdip_text_pane_t1

0x3893,	// (0x00058875) form2_midp_time_pane_t1

0xabb9,	// (0x0005fb9b) form2_midp_gauge_slider_pane_t1

0xabcb,	// (0x0005fbad) form2_midp_gauge_slider_pane_t2

0xabdd,	// (0x0005fbbf) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00064ade) form2_midp_gauge_slider_pane_t

0xabef,	// (0x0005fbd1) form2_midp_slider_pane

0xabfb,	// (0x0005fbdd) form2_midp_gauge_wait_pane_t1

0xac09,	// (0x0005fbeb) form2_midp_wait_pane_ParamLimits

0xac09,	// (0x0005fbeb) form2_midp_wait_pane

0x876e,	// (0x0005d750) list_single_2graphic_pane_cp4_ParamLimits

0x876e,	// (0x0005d750) list_single_2graphic_pane_cp4

0xac34,	// (0x0005fc16) list_single_midp_graphic_pane_cp_ParamLimits

0xac34,	// (0x0005fc16) list_single_midp_graphic_pane_cp

0xc011,	// (0x00060ff3) list_highlight_pane_cp20

0xac58,	// (0x0005fc3a) list_single_2graphic_pane_g1_cp4

0xa1f5,	// (0x0005f1d7) list_single_2graphic_pane_g2_cp4

0xac60,	// (0x0005fc42) list_single_2graphic_pane_t1_cp4

0xc06b,	// (0x0006104d) list_highlight_pane_cp21

0xac6f,	// (0x0005fc51) list_single_midp_graphic_pane_g4_cp

0xac7e,	// (0x0005fc60) list_single_midp_graphic_pane_t1_cp

0xac93,	// (0x0005fc75) form2_mdip_string_pane_t1_ParamLimits

0xac93,	// (0x0005fc75) form2_mdip_string_pane_t1

0xc011,	// (0x00060ff3) bg_wml_button_pane_cp2

0xc007,	// (0x00060fe9) form2_midp_image_pane_g1

0x3c70,	// (0x00058c52) list_double_large_graphic_pane_g5_ParamLimits

0x3c70,	// (0x00058c52) list_double_large_graphic_pane_g5

0x596c,	// (0x0005a94e) midp_form_pane_ParamLimits

0xc06b,	// (0x0006104d) main_apps_wheel_pane_ParamLimits

0x7ee1,	// (0x0005cec3) popup_preview_window_ParamLimits

0x7ee1,	// (0x0005cec3) popup_preview_window

0x80c8,	// (0x0005d0aa) popup_touch_info_window_ParamLimits

0x80c8,	// (0x0005d0aa) popup_touch_info_window

0x80ea,	// (0x0005d0cc) popup_touch_menu_window_ParamLimits

0x80ea,	// (0x0005d0cc) popup_touch_menu_window

0xbffd,	// (0x00060fdf) bg_popup_sub_pane_cp6

0xad38,	// (0x0005fd1a) list_touch_menu_pane

0xad40,	// (0x0005fd22) list_single_touch_menu_pane_ParamLimits

0xad40,	// (0x0005fd22) list_single_touch_menu_pane

0xad58,	// (0x0005fd3a) list_single_touch_menu_pane_t1

0xc06b,	// (0x0006104d) bg_popup_sub_pane_cp7_ParamLimits

0xc06b,	// (0x0006104d) bg_popup_sub_pane_cp7

0xad66,	// (0x0005fd48) heading_sub_pane

0xad6e,	// (0x0005fd50) list_touch_info_pane_ParamLimits

0xad6e,	// (0x0005fd50) list_touch_info_pane

0xad7d,	// (0x0005fd5f) list_single_touch_info_pane_ParamLimits

0xad7d,	// (0x0005fd5f) list_single_touch_info_pane

0xad8f,	// (0x0005fd71) list_single_touch_info_pane_t1

0xad9d,	// (0x0005fd7f) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00064aec) list_single_touch_info_pane_t

0x332f,	// (0x00058311) bg_popup_heading_pane_cp

0xadab,	// (0x0005fd8d) heading_sub_pane_t1

0x86b5,	// (0x0005d697) bg_popup_preview_window_pane_cp_ParamLimits

0x86b5,	// (0x0005d697) bg_popup_preview_window_pane_cp

0xad66,	// (0x0005fd48) heading_preview_pane

0xad6e,	// (0x0005fd50) list_preview_pane_ParamLimits

0xad6e,	// (0x0005fd50) list_preview_pane

0xadb9,	// (0x0005fd9b) popup_preview_window_g1

0xad7d,	// (0x0005fd5f) list_single_preview_pane_ParamLimits

0xad7d,	// (0x0005fd5f) list_single_preview_pane

0xadc1,	// (0x0005fda3) list_single_preview_pane_g1

0xadc9,	// (0x0005fdab) list_single_preview_pane_t1

0xad8f,	// (0x0005fd71) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00064af1) list_single_preview_pane_t

0xadd7,	// (0x0005fdb9) bg_popup_heading_pane_cp2_ParamLimits

0xadd7,	// (0x0005fdb9) bg_popup_heading_pane_cp2

0xaded,	// (0x0005fdcf) heading_preview_pane_g1

0xadf5,	// (0x0005fdd7) heading_preview_pane_t1_ParamLimits

0xadf5,	// (0x0005fdd7) heading_preview_pane_t1

0xc0be,	// (0x000610a0) soft_indicator_pane_t1_ParamLimits

0xc601,	// (0x000615e3) scroll_pane_ParamLimits

0xf039,	// (0x0006401b) scroll_sc2_left_pane

0xf042,	// (0x00064024) scroll_sc2_right_pane

0xf061,	// (0x00064043) scroll_bg_pane_g1_ParamLimits

0xf076,	// (0x00064058) scroll_bg_pane_g2_ParamLimits

0xf08e,	// (0x00064070) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x000646ca) scroll_bg_pane_g_ParamLimits

0xf061,	// (0x00064043) scroll_handle_pane_g1_ParamLimits

0xf0b0,	// (0x00064092) scroll_handle_pane_g2_ParamLimits

0xf08e,	// (0x00064070) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x000646d1) scroll_handle_pane_g_ParamLimits

0x64be,	// (0x0005b4a0) popup_choice_list_window_ParamLimits

0x64be,	// (0x0005b4a0) popup_choice_list_window

0x858b,	// (0x0005d56d) choice_list_pane

0x860d,	// (0x0005d5ef) cell_toolbar_pane_t1

0x8635,	// (0x0005d617) toolbar_button_pane_ParamLimits

0x96e4,	// (0x0005e6c6) ai_gene_pane_1_t2_ParamLimits

0x96e4,	// (0x0005e6c6) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x000648f9) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x000648f9) ai_gene_pane_1_t

0xae12,	// (0x0005fdf4) scroll_sc2_left_pane_g1

0xae12,	// (0x0005fdf4) scroll_sc2_right_pane_g1

0x6496,	// (0x0005b478) bg_popup_sub_pane_cp10

0xae1c,	// (0x0005fdfe) list_choice_list_pane

0xae35,	// (0x0005fe17) list_single_choice_list_pane_ParamLimits

0xae35,	// (0x0005fe17) list_single_choice_list_pane

0xae4d,	// (0x0005fe2f) list_single_choice_list_pane_g1

0xee19,	// (0x00063dfb) list_single_choice_list_pane_t1_ParamLimits

0xee19,	// (0x00063dfb) list_single_choice_list_pane_t1

0xae55,	// (0x0005fe37) choice_list_pane_g1

0xae5d,	// (0x0005fe3f) choice_list_pane_t1

0xbffd,	// (0x00060fdf) input_focus_pane_cp11

0xef97,	// (0x00063f79) title_pane_stacon_g2_ParamLimits

0xef97,	// (0x00063f79) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x000646b0) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x000646b0) title_pane_stacon_g

0x332f,	// (0x00058311) cursor_press_pane

0x6578,	// (0x0005b55a) popup_fep_hwr_window_ParamLimits

0x6578,	// (0x0005b55a) popup_fep_hwr_window

0x7c6c,	// (0x0005cc4e) popup_fep_vkb_window_ParamLimits

0x7c6c,	// (0x0005cc4e) popup_fep_vkb_window

0xae6b,	// (0x0005fe4d) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00064b1a) fep_vkb_side_pane_g_ParamLimits

0x6b9f,	// (0x0005bb81) fep_hwr_candidate_pane_ParamLimits

0x6b9f,	// (0x0005bb81) fep_hwr_candidate_pane

0x6bc9,	// (0x0005bbab) fep_hwr_side_pane_ParamLimits

0x6bc9,	// (0x0005bbab) fep_hwr_side_pane

0x6beb,	// (0x0005bbcd) fep_hwr_top_pane_ParamLimits

0x6beb,	// (0x0005bbcd) fep_hwr_top_pane

0x6c03,	// (0x0005bbe5) fep_hwr_write_pane_ParamLimits

0x6c03,	// (0x0005bbe5) fep_hwr_write_pane

0xfb38,	// (0x00064b1a) fep_vkb_side_pane_g

0xae73,	// (0x0005fe55) fep_hwr_top_pane_g1

0xae85,	// (0x0005fe67) fep_hwr_top_pane_g2

0x6c3d,	// (0x0005bc1f) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00064af6) fep_hwr_top_pane_g

0x6c52,	// (0x0005bc34) fep_hwr_top_text_pane

0xf1aa,	// (0x0006418c) fep_hwr_top_text_pane_g1

0xaebb,	// (0x0005fe9d) fep_hwr_top_text_pane_t1

0x6d5c,	// (0x0005bd3e) fep_hwr_candidate_pane_g1

0xb106,	// (0x000600e8) fep_vkb_keypad_pane_g3_ParamLimits

0xb106,	// (0x000600e8) fep_vkb_keypad_pane_g3

0xb132,	// (0x00060114) fep_vkb_keypad_pane_g4_ParamLimits

0xb132,	// (0x00060114) fep_vkb_keypad_pane_g4

0xb1a9,	// (0x0006018b) fep_vkb_bottom_pane_g2_ParamLimits

0xb1a9,	// (0x0006018b) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00064b21) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00064b21) fep_vkb_bottom_pane_g

0xae12,	// (0x0005fdf4) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00064b2b) cell_vkb_side_pane_g

0xb234,	// (0x00060216) cell_vkb_side_pane_t1

0xb242,	// (0x00060224) cell_vkb_side_pane_t1_copy1

0xae12,	// (0x0005fdf4) bg_fep_vkb_candidate_pane_g2

0xb386,	// (0x00060368) cell_vkb_candidate_pane_ParamLimits

0xaec9,	// (0x0005feab) aid_size_cell_vkb_ParamLimits

0xaec9,	// (0x0005feab) aid_size_cell_vkb

0xb386,	// (0x00060368) cell_vkb_candidate_pane

0x6d83,	// (0x0005bd65) bg_popup_fep_shadow_pane_g1

0xaf5b,	// (0x0005ff3d) fep_vkb_bottom_pane_ParamLimits

0xaf5b,	// (0x0005ff3d) fep_vkb_bottom_pane

0xaf98,	// (0x0005ff7a) fep_vkb_candidate_pane_ParamLimits

0xaf98,	// (0x0005ff7a) fep_vkb_candidate_pane

0xafb4,	// (0x0005ff96) fep_vkb_keypad_pane_ParamLimits

0xafb4,	// (0x0005ff96) fep_vkb_keypad_pane

0xafe7,	// (0x0005ffc9) fep_vkb_side_pane_ParamLimits

0xafe7,	// (0x0005ffc9) fep_vkb_side_pane

0xb023,	// (0x00060005) fep_vkb_top_pane_ParamLimits

0xb023,	// (0x00060005) fep_vkb_top_pane

0xb05f,	// (0x00060041) fep_vkb_top_pane_g1_ParamLimits

0xb05f,	// (0x00060041) fep_vkb_top_pane_g1

0xb06e,	// (0x00060050) fep_vkb_top_pane_g2_ParamLimits

0xb06e,	// (0x00060050) fep_vkb_top_pane_g2

0xb07d,	// (0x0006005f) fep_vkb_top_pane_g3_ParamLimits

0xb07d,	// (0x0006005f) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00064b11) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00064b11) fep_vkb_top_pane_g

0xb09b,	// (0x0006007d) fep_vkb_top_text_pane_ParamLimits

0xb09b,	// (0x0006007d) fep_vkb_top_text_pane

0xb0ac,	// (0x0006008e) fep_vkb_side_pane_g1_ParamLimits

0xb0ac,	// (0x0006008e) fep_vkb_side_pane_g1

0xb0f5,	// (0x000600d7) grid_vkb_side_pane_ParamLimits

0xb0f5,	// (0x000600d7) grid_vkb_side_pane

0x6d8b,	// (0x0005bd6d) bg_popup_fep_shadow_pane_g2

0x6d94,	// (0x0005bd76) bg_popup_fep_shadow_pane_g3

0x6d9c,	// (0x0005bd7e) bg_popup_fep_shadow_pane_g4

0x6da5,	// (0x0005bd87) bg_popup_fep_shadow_pane_g5

0x6daf,	// (0x0005bd91) bg_popup_fep_shadow_pane_g6

0x6db7,	// (0x0005bd99) bg_popup_fep_shadow_pane_g7

0xed3b,	// (0x00063d1d) bg_popup_fep_shadow_pane_g8

0xb154,	// (0x00060136) grid_vkb_keypad_number_pane_ParamLimits

0xb154,	// (0x00060136) grid_vkb_keypad_number_pane

0xb168,	// (0x0006014a) grid_vkb_keypad_pane_ParamLimits

0xb168,	// (0x0006014a) grid_vkb_keypad_pane

0xb18e,	// (0x00060170) fep_vkb_bottom_pane_g1_ParamLimits

0xb18e,	// (0x00060170) fep_vkb_bottom_pane_g1

0xb1b7,	// (0x00060199) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb1b7,	// (0x00060199) grid_vkb_keypad_bottom_left_pane

0xb1cc,	// (0x000601ae) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb1cc,	// (0x000601ae) grid_vkb_keypad_bottom_right_pane

0xb1e1,	// (0x000601c3) fep_vkb_top_text_pane_g1

0xb1fc,	// (0x000601de) fep_vkb_top_text_pane_t1

0xb211,	// (0x000601f3) cell_vkb_side_pane_ParamLimits

0xb211,	// (0x000601f3) cell_vkb_side_pane

0xae12,	// (0x0005fdf4) cell_vkb_side_pane_g1

0xb250,	// (0x00060232) cell_vkb_keypad_pane_ParamLimits

0xb250,	// (0x00060232) cell_vkb_keypad_pane

0xb2dd,	// (0x000602bf) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00064b3e) bg_popup_fep_shadow_pane_g

0x6dc9,	// (0x0005bdab) cell_hwr_side_pane_g1

0x6dc9,	// (0x0005bdab) cell_hwr_side_pane_g2

0xb2e7,	// (0x000602c9) cell_vkb_keypad_pane_t1

0xb2f5,	// (0x000602d7) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb2f5,	// (0x000602d7) cell_vkb_keypad_bottom_left_pane

0xb312,	// (0x000602f4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb312,	// (0x000602f4) cell_vkb_keypad_bottom_right_pane

0xae12,	// (0x0005fdf4) cell_vkb_keypad_bottom_left_pane_g1

0xae12,	// (0x0005fdf4) cell_vkb_keypad_bottom_right_pane_g1

0xb34b,	// (0x0006032d) cell_vkb_keypad_number_pane_ParamLimits

0xb34b,	// (0x0006032d) cell_vkb_keypad_number_pane

0xb36a,	// (0x0006034c) cell_vkb_keypad_number_pane_g1

0xb374,	// (0x00060356) cell_vkb_keypad_number_pane_g2

0xb37d,	// (0x0006035f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00064b30) cell_vkb_keypad_number_pane_g

0xb2e7,	// (0x000602c9) cell_vkb_keypad_number_pane_t1

0xb3a7,	// (0x00060389) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x00064b51) cell_hwr_side_pane_g

0xb3c0,	// (0x000603a2) cell_hwr_side_pane_t1

0x6dd3,	// (0x0005bdb5) cell_hwr_side_pane_t1_copy1

0x6de1,	// (0x0005bdc3) cell_hwr_candidate_pane_g1

0x6e10,	// (0x0005bdf2) cell_hwr_candidate_pane_t1

0xae12,	// (0x0005fdf4) cell_vkb_candidate_pane_g2

0xb404,	// (0x000603e6) cell_vkb_candidate_pane_t1

0x6b66,	// (0x0005bb48) bg_popup_fep_shadow_pane_ParamLimits

0x6b66,	// (0x0005bb48) bg_popup_fep_shadow_pane

0x6c1d,	// (0x0005bbff) bg_fep_hwr_top_pane_g4

0xae97,	// (0x0005fe79) bg_hwr_side_pane_g1_ParamLimits

0xae97,	// (0x0005fe79) bg_hwr_side_pane_g1

0x6c90,	// (0x0005bc72) cell_hwr_side_pane_ParamLimits

0x6c90,	// (0x0005bc72) cell_hwr_side_pane

0x6ccd,	// (0x0005bcaf) fep_hwr_write_pane_g1_ParamLimits

0x6ccd,	// (0x0005bcaf) fep_hwr_write_pane_g1

0x6cda,	// (0x0005bcbc) fep_hwr_write_pane_g2_ParamLimits

0x6cda,	// (0x0005bcbc) fep_hwr_write_pane_g2

0x6ce7,	// (0x0005bcc9) fep_hwr_write_pane_g3_ParamLimits

0x6ce7,	// (0x0005bcc9) fep_hwr_write_pane_g3

0x6cf5,	// (0x0005bcd7) fep_hwr_write_pane_g4_ParamLimits

0x6cf5,	// (0x0005bcd7) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00064afd) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00064afd) fep_hwr_write_pane_g

0x6c1d,	// (0x0005bbff) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6c1d,	// (0x0005bbff) bg_fep_hwr_candidate_pane_g2

0x6d0a,	// (0x0005bcec) cell_hwr_candidate_pane_ParamLimits

0x6d0a,	// (0x0005bcec) cell_hwr_candidate_pane

0x6d5c,	// (0x0005bd3e) fep_hwr_candidate_pane_g1_ParamLimits

0xaef7,	// (0x0005fed9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xaef7,	// (0x0005fed9) bg_popup_fep_shadow_pane_cp2

0xb08d,	// (0x0006006f) fep_vkb_top_pane_g4_ParamLimits

0xb08d,	// (0x0006006f) fep_vkb_top_pane_g4

0xb0d3,	// (0x000600b5) fep_vkb_side_pane_g2_ParamLimits

0xb0d3,	// (0x000600b5) fep_vkb_side_pane_g2

0x56c4,	// (0x0005a6a6) list_setting_pane_t4_ParamLimits

0x56c4,	// (0x0005a6a6) list_setting_pane_t4

0x5760,	// (0x0005a742) list_setting_number_pane_t5_ParamLimits

0x5760,	// (0x0005a742) list_setting_number_pane_t5

0x5c51,	// (0x0005ac33) list_double_heading_pane_cp2_ParamLimits

0x5c51,	// (0x0005ac33) list_double_heading_pane_cp2

0xb412,	// (0x000603f4) list_double_heading_pane_g1_cp2_ParamLimits

0xb412,	// (0x000603f4) list_double_heading_pane_g1_cp2

0xb41e,	// (0x00060400) list_double_heading_pane_g2_cp2_ParamLimits

0xb41e,	// (0x00060400) list_double_heading_pane_g2_cp2

0xb432,	// (0x00060414) list_double_heading_pane_t1_cp2_ParamLimits

0xb432,	// (0x00060414) list_double_heading_pane_t1_cp2

0xb448,	// (0x0006042a) list_double_heading_pane_t2_cp2_ParamLimits

0xb448,	// (0x0006042a) list_double_heading_pane_t2_cp2

0xbff5,	// (0x00060fd7) aid_value_unit2

0x4dc7,	// (0x00059da9) popup_preview_fixed_window

0xc1ac,	// (0x0006118e) bg_popup_preview_window_pane_cp02

0xb45a,	// (0x0006043c) list_preview_fixed_pane

0xb4a0,	// (0x00060482) list_empty_pane_fp_ParamLimits

0xb4a0,	// (0x00060482) list_empty_pane_fp

0xb4a0,	// (0x00060482) list_single_cale_day_pane_fp_ParamLimits

0xb4a0,	// (0x00060482) list_single_cale_day_pane_fp

0xb4a0,	// (0x00060482) list_single_graphic_heading_pane_fp_ParamLimits

0xb4a0,	// (0x00060482) list_single_graphic_heading_pane_fp

0xb4a0,	// (0x00060482) list_single_graphic_pane_fp_ParamLimits

0xb4a0,	// (0x00060482) list_single_graphic_pane_fp

0xb4a0,	// (0x00060482) list_single_heading_pane_fp_ParamLimits

0xb4a0,	// (0x00060482) list_single_heading_pane_fp

0xb4a0,	// (0x00060482) list_single_pane_fp_ParamLimits

0xb4a0,	// (0x00060482) list_single_pane_fp

0xb4b9,	// (0x0006049b) list_single_pane_fp_g1_ParamLimits

0xb4b9,	// (0x0006049b) list_single_pane_fp_g1

0xb412,	// (0x000603f4) list_single_pane_fp_g2_ParamLimits

0xb412,	// (0x000603f4) list_single_pane_fp_g2

0xb41e,	// (0x00060400) list_single_pane_fp_g3_ParamLimits

0xb41e,	// (0x00060400) list_single_pane_fp_g3

0xb4c5,	// (0x000604a7) list_single_pane_fp_g4_ParamLimits

0xb4c5,	// (0x000604a7) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x00064b64) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x00064b64) list_single_pane_fp_g

0x38a6,	// (0x00058888) list_single_pane_fp_t1_ParamLimits

0x38a6,	// (0x00058888) list_single_pane_fp_t1

0x38bd,	// (0x0005889f) list_single_graphic_pane_fp_g1_ParamLimits

0x38bd,	// (0x0005889f) list_single_graphic_pane_fp_g1

0xb4b9,	// (0x0006049b) list_single_graphic_pane_fp_g2_ParamLimits

0xb4b9,	// (0x0006049b) list_single_graphic_pane_fp_g2

0xb412,	// (0x000603f4) list_single_graphic_pane_fp_g3_ParamLimits

0xb412,	// (0x000603f4) list_single_graphic_pane_fp_g3

0xb41e,	// (0x00060400) list_single_graphic_pane_fp_g4_ParamLimits

0xb41e,	// (0x00060400) list_single_graphic_pane_fp_g4

0xb4c5,	// (0x000604a7) list_single_graphic_pane_fp_g5_ParamLimits

0xb4c5,	// (0x000604a7) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064b6d) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064b6d) list_single_graphic_pane_fp_g

0x38c9,	// (0x000588ab) list_single_graphic_pane_fp_t1_ParamLimits

0x38c9,	// (0x000588ab) list_single_graphic_pane_fp_t1

0x38bd,	// (0x0005889f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x38bd,	// (0x0005889f) list_single_graphic_heading_pane_fp_g1

0xb4b9,	// (0x0006049b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb4b9,	// (0x0006049b) list_single_graphic_heading_pane_fp_g2

0xb412,	// (0x000603f4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb412,	// (0x000603f4) list_single_graphic_heading_pane_fp_g3

0xb41e,	// (0x00060400) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb41e,	// (0x00060400) list_single_graphic_heading_pane_fp_g4

0xb4c5,	// (0x000604a7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb4c5,	// (0x000604a7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064b6d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064b6d) list_single_graphic_heading_pane_fp_g

0x38df,	// (0x000588c1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x38df,	// (0x000588c1) list_single_graphic_heading_pane_fp_t1

0x38f5,	// (0x000588d7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x38f5,	// (0x000588d7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x00064b78) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x00064b78) list_single_graphic_heading_pane_fp_t

0x3907,	// (0x000588e9) list_single_cale_day_pane_fp_g1_ParamLimits

0x3907,	// (0x000588e9) list_single_cale_day_pane_fp_g1

0xb4d1,	// (0x000604b3) list_single_cale_day_pane_fp_g2_ParamLimits

0xb4d1,	// (0x000604b3) list_single_cale_day_pane_fp_g2

0x9d34,	// (0x0005ed16) list_single_cale_day_pane_fp_g3_ParamLimits

0x9d34,	// (0x0005ed16) list_single_cale_day_pane_fp_g3

0x9d5c,	// (0x0005ed3e) list_single_cale_day_pane_fp_g4_ParamLimits

0x9d5c,	// (0x0005ed3e) list_single_cale_day_pane_fp_g4

0x9d80,	// (0x0005ed62) list_single_cale_day_pane_fp_g5_ParamLimits

0x9d80,	// (0x0005ed62) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x00064b7d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x00064b7d) list_single_cale_day_pane_fp_g

0x393f,	// (0x00058921) list_single_cale_day_pane_fp_t1_ParamLimits

0x393f,	// (0x00058921) list_single_cale_day_pane_fp_t1

0x3965,	// (0x00058947) list_single_cale_day_pane_fp_t2_ParamLimits

0x3965,	// (0x00058947) list_single_cale_day_pane_fp_t2

0x397e,	// (0x00058960) list_single_cale_day_pane_fp_t3_ParamLimits

0x397e,	// (0x00058960) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x00064b88) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x00064b88) list_single_cale_day_pane_fp_t

0xb4b9,	// (0x0006049b) list_empty_pane_fp_g1_ParamLimits

0xb4b9,	// (0x0006049b) list_empty_pane_fp_g1

0x3997,	// (0x00058979) list_empty_pane_fp_t1

0x39a5,	// (0x00058987) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x00064b8f) list_empty_pane_fp_t

0xb4b9,	// (0x0006049b) list_single_heading_pane_fp_g1_ParamLimits

0xb4b9,	// (0x0006049b) list_single_heading_pane_fp_g1

0xb412,	// (0x000603f4) list_single_heading_pane_fp_g2_ParamLimits

0xb412,	// (0x000603f4) list_single_heading_pane_fp_g2

0xb41e,	// (0x00060400) list_single_heading_pane_fp_g3_ParamLimits

0xb41e,	// (0x00060400) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x00064b94) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x00064b94) list_single_heading_pane_fp_g

0x39b3,	// (0x00058995) list_single_heading_pane_fp_t1_ParamLimits

0x39b3,	// (0x00058995) list_single_heading_pane_fp_t1

0x39c5,	// (0x000589a7) list_single_heading_pane_fp_t2_ParamLimits

0x39c5,	// (0x000589a7) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x00064b9b) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x00064b9b) list_single_heading_pane_fp_t

0xee2e,	// (0x00063e10) aid_size_cell_fast

0xc181,	// (0x00061163) soft_indicator_pane_cp1_t1

0xee6b,	// (0x00063e4d) cell_app_pane_cp2_ParamLimits

0xee6b,	// (0x00063e4d) cell_app_pane_cp2

0x6b88,	// (0x0005bb6a) fep_hwr_candidate_drop_down_list_pane

0x6d76,	// (0x0005bd58) fep_hwr_candidate_pane_g3_ParamLimits

0x6d76,	// (0x0005bd58) fep_hwr_candidate_pane_g3

0x283c,	// (0x0005781e) fep_hwr_candidate_pane_g4_ParamLimits

0x283c,	// (0x0005781e) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00064b0a) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00064b0a) fep_hwr_candidate_pane_g

0xaf87,	// (0x0005ff69) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xaf87,	// (0x0005ff69) fep_vkb_candidate_drop_down_list_pane

0xb3af,	// (0x00060391) fep_vkb_candidate_pane_g3

0xb3b7,	// (0x00060399) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00064b37) fep_vkb_candidate_pane_g

0x6de1,	// (0x0005bdc3) cell_hwr_candidate_pane_g1_ParamLimits

0x6def,	// (0x0005bdd1) cell_hwr_candidate_pane_g3_ParamLimits

0x6def,	// (0x0005bdd1) cell_hwr_candidate_pane_g3

0xc635,	// (0x00061617) cell_hwr_candidate_pane_g4_ParamLimits

0xc635,	// (0x00061617) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x00064b56) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x00064b56) cell_hwr_candidate_pane_g

0xb3ce,	// (0x000603b0) cell_vkb_candidate_pane_g3_ParamLimits

0xb3ce,	// (0x000603b0) cell_vkb_candidate_pane_g3

0xb3e9,	// (0x000603cb) cell_vkb_candidate_pane_g4_ParamLimits

0xb3e9,	// (0x000603cb) cell_vkb_candidate_pane_g4

0xb4dd,	// (0x000604bf) cell_app_pane_cp2_g1_ParamLimits

0xb4dd,	// (0x000604bf) cell_app_pane_cp2_g1

0xb4fb,	// (0x000604dd) cell_app_pane_cp2_g2_ParamLimits

0xb4fb,	// (0x000604dd) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x00064ba0) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x00064ba0) cell_app_pane_cp2_g

0xb507,	// (0x000604e9) cell_app_pane_cp2_t1_ParamLimits

0xb507,	// (0x000604e9) cell_app_pane_cp2_t1

0xecc8,	// (0x00063caa) grid_highlight_pane_cp1_ParamLimits

0xecc8,	// (0x00063caa) grid_highlight_pane_cp1

0x6e2e,	// (0x0005be10) cell_hwr_candidate_pane_cp1_ParamLimits

0x6e2e,	// (0x0005be10) cell_hwr_candidate_pane_cp1

0x6de1,	// (0x0005bdc3) fep_hwr_candidate_drop_down_list_pane_g1

0x6e52,	// (0x0005be34) fep_hwr_candidate_drop_down_list_pane_g2

0x6e5f,	// (0x0005be41) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x00064ba5) fep_hwr_candidate_drop_down_list_pane_g

0x6e6c,	// (0x0005be4e) fep_hwr_candidate_drop_down_list_scroll_pane

0x6e75,	// (0x0005be57) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e75,	// (0x0005be57) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6e82,	// (0x0005be64) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e82,	// (0x0005be64) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6e8f,	// (0x0005be71) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e8f,	// (0x0005be71) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6e9c,	// (0x0005be7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6e9c,	// (0x0005be7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6eb7,	// (0x0005be99) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6eb7,	// (0x0005be99) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6ed2,	// (0x0005beb4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6ed2,	// (0x0005beb4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6eed,	// (0x0005becf) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6eed,	// (0x0005becf) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6f08,	// (0x0005beea) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6f08,	// (0x0005beea) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00064bac) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00064bac) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb519,	// (0x000604fb) cell_vkb_candidate_pane_cp1_ParamLimits

0xb519,	// (0x000604fb) cell_vkb_candidate_pane_cp1

0xb08d,	// (0x0006006f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb08d,	// (0x0006006f) fep_vkb_candidate_drop_down_list_pane_g1

0xb53f,	// (0x00060521) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb53f,	// (0x00060521) fep_vkb_candidate_drop_down_list_pane_g2

0xb54c,	// (0x0006052e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb54c,	// (0x0006052e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x00064bbd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x00064bbd) fep_vkb_candidate_drop_down_list_pane_g

0xb559,	// (0x0006053b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb559,	// (0x0006053b) fep_vkb_candidate_drop_down_list_scroll_pane

0xb566,	// (0x00060548) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb566,	// (0x00060548) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb573,	// (0x00060555) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb573,	// (0x00060555) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb57f,	// (0x00060561) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb57f,	// (0x00060561) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb58b,	// (0x0006056d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb58b,	// (0x0006056d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb5ac,	// (0x0006058e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb5ac,	// (0x0006058e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb5cd,	// (0x000605af) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb5cd,	// (0x000605af) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb5ee,	// (0x000605d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb5ee,	// (0x000605d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xb60f,	// (0x000605f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xb60f,	// (0x000605f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x00064bc4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x00064bc4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x4ee7,	// (0x00059ec9) title_pane_g1_ParamLimits

0x4ef4,	// (0x00059ed6) title_pane_g2_ParamLimits

0xf54e,	// (0x00064530) title_pane_g_ParamLimits

0xf19a,	// (0x0006417c) aid_call2_pane

0xf1a2,	// (0x00064184) aid_call_pane

0xf1aa,	// (0x0006418c) popup_clock_analogue_window_g1

0xf1aa,	// (0x0006418c) popup_clock_analogue_window_g2

0x5c32,	// (0x0005ac14) popup_clock_analogue_window_g3

0x5c3b,	// (0x0005ac1d) popup_clock_analogue_window_g4

0xc007,	// (0x00060fe9) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x000646df) popup_clock_analogue_window_g

0x5c43,	// (0x0005ac25) popup_clock_analogue_window_t1

0x5c84,	// (0x0005ac66) clock_digital_number_pane_ParamLimits

0x5c84,	// (0x0005ac66) clock_digital_number_pane

0x5c90,	// (0x0005ac72) clock_digital_number_pane_cp02_ParamLimits

0x5c90,	// (0x0005ac72) clock_digital_number_pane_cp02

0x5c9c,	// (0x0005ac7e) clock_digital_number_pane_cp03_ParamLimits

0x5c9c,	// (0x0005ac7e) clock_digital_number_pane_cp03

0x5ca8,	// (0x0005ac8a) clock_digital_number_pane_cp04_ParamLimits

0x5ca8,	// (0x0005ac8a) clock_digital_number_pane_cp04

0x5cb4,	// (0x0005ac96) clock_digital_separator_pane_ParamLimits

0x5cb4,	// (0x0005ac96) clock_digital_separator_pane

0x5cc0,	// (0x0005aca2) popup_clock_digital_window_t1_ParamLimits

0x5cc0,	// (0x0005aca2) popup_clock_digital_window_t1

0xc007,	// (0x00060fe9) clock_digital_number_pane_g1

0xc007,	// (0x00060fe9) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x000646ea) clock_digital_number_pane_g

0xc007,	// (0x00060fe9) clock_digital_separator_pane_g1

0xc007,	// (0x00060fe9) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x000646ea) clock_digital_separator_pane_g

0x8137,	// (0x0005d119) aid_fill_nsta_ParamLimits

0x8287,	// (0x0005d269) indicator_nsta_pane_ParamLimits

0x8418,	// (0x0005d3fa) popup_clock_analogue_window

0x8418,	// (0x0005d3fa) popup_clock_digital_window

0xc06b,	// (0x0006104d) grid_indicator_nsta_pane_ParamLimits

0xa845,	// (0x0005f827) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00064a8a) clock_nsta_pane_t

0x5b9b,	// (0x0005ab7d) aid_size_max_handle

0x5ba5,	// (0x0005ab87) aid_size_min_handle

0x332f,	// (0x00058311) editor_scroll_pane

0xb62a,	// (0x0006060c) ex_editor_pane

0xedf4,	// (0x00063dd6) scroll_pane_cp13

0xc62d,	// (0x0006160f) scroll_pane_cp14

0xf1d9,	// (0x000641bb) scroll_pane_cp36

0x5c67,	// (0x0005ac49) list_single_graphic_hl_pane_cp2_ParamLimits

0x5c67,	// (0x0005ac49) list_single_graphic_hl_pane_cp2

0x6a20,	// (0x0005ba02) list_single_graphic_hl_pane_ParamLimits

0x6a20,	// (0x0005ba02) list_single_graphic_hl_pane

0x39db,	// (0x000589bd) aid_size_min_hl_cp1

0xb632,	// (0x00060614) list_highlight_pane_cp34_ParamLimits

0xb632,	// (0x00060614) list_highlight_pane_cp34

0xb643,	// (0x00060625) list_single_graphic_hl_pane_g1_ParamLimits

0xb643,	// (0x00060625) list_single_graphic_hl_pane_g1

0x6f23,	// (0x0005bf05) list_single_graphic_hl_pane_g2_ParamLimits

0x6f23,	// (0x0005bf05) list_single_graphic_hl_pane_g2

0x6f23,	// (0x0005bf05) list_single_graphic_hl_pane_g3_ParamLimits

0x6f23,	// (0x0005bf05) list_single_graphic_hl_pane_g3

0x9c90,	// (0x0005ec72) list_single_graphic_hl_pane_g4_ParamLimits

0x9c90,	// (0x0005ec72) list_single_graphic_hl_pane_g4

0x9da4,	// (0x0005ed86) list_single_graphic_hl_pane_g5_ParamLimits

0x9da4,	// (0x0005ed86) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x00064bd5) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x00064bd5) list_single_graphic_hl_pane_g

0x6f2f,	// (0x0005bf11) list_single_graphic_hl_pane_t1_ParamLimits

0x6f2f,	// (0x0005bf11) list_single_graphic_hl_pane_t1

0xb650,	// (0x00060632) aid_size_min_hl_cp2

0xb659,	// (0x0006063b) list_highlight_pane_cp34_cp2_ParamLimits

0xb659,	// (0x0006063b) list_highlight_pane_cp34_cp2

0xb643,	// (0x00060625) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xb643,	// (0x00060625) list_single_graphic_hl_pane_g1_cp2

0xb666,	// (0x00060648) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xb666,	// (0x00060648) list_single_graphic_hl_pane_g2_cp2

0xb672,	// (0x00060654) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb672,	// (0x00060654) list_single_graphic_hl_pane_g3_cp2

0x1a76,	// (0x00056a58) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1a76,	// (0x00056a58) list_single_graphic_hl_pane_g4_cp2

0xb680,	// (0x00060662) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb680,	// (0x00060662) list_single_graphic_hl_pane_g5_cp2

0x62ef,	// (0x0005b2d1) control_pane_g4_ParamLimits

0x62ef,	// (0x0005b2d1) control_pane_g4

0x6496,	// (0x0005b478) bg_popup_sub_pane_cp10_ParamLimits

0xae1c,	// (0x0005fdfe) list_choice_list_pane_ParamLimits

0xae2b,	// (0x0005fe0d) scroll_pane_cp23

0xc1ac,	// (0x0006118e) bg_popup_preview_window_pane_cp02_ParamLimits

0xb45a,	// (0x0006043c) list_preview_fixed_pane_ParamLimits

0xb470,	// (0x00060452) list_preview_fixed_pane_cp_ParamLimits

0xb470,	// (0x00060452) list_preview_fixed_pane_cp

0xb47c,	// (0x0006045e) popup_preview_fixed_window_g1_ParamLimits

0xb47c,	// (0x0006045e) popup_preview_fixed_window_g1

0xb488,	// (0x0006046a) popup_preview_fixed_window_g2_ParamLimits

0xb488,	// (0x0006046a) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x00064b5d) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x00064b5d) popup_preview_fixed_window_g

0x5a8a,	// (0x0005aa6c) aid_navi_side_left_pane_ParamLimits

0x5a9f,	// (0x0005aa81) aid_navi_side_right_pane_ParamLimits

0x5ab7,	// (0x0005aa99) navi_icon_pane_stacon_ParamLimits

0x5acb,	// (0x0005aaad) navi_navi_pane_stacon_ParamLimits

0x5ab7,	// (0x0005aa99) navi_text_pane_stacon_ParamLimits

0xbffd,	// (0x00060fdf) main_text_info_pane

0xb6aa,	// (0x0006068c) listscroll_text_info_pane

0xb6b2,	// (0x00060694) list_text_info_pane_ParamLimits

0xb6b2,	// (0x00060694) list_text_info_pane

0xb6c1,	// (0x000606a3) scroll_pane_cp24_ParamLimits

0xb6c1,	// (0x000606a3) scroll_pane_cp24

0xb6df,	// (0x000606c1) list_text_info_pane_t1_ParamLimits

0xb6df,	// (0x000606c1) list_text_info_pane_t1

0x64e0,	// (0x0005b4c2) popup_fast_swap2_window_ParamLimits

0x64e0,	// (0x0005b4c2) popup_fast_swap2_window

0xb704,	// (0x000606e6) aid_size_cell_fast2

0xbffd,	// (0x00060fdf) bg_popup_window_pane_cp17

0x8a75,	// (0x0005da57) heading_pane_cp2

0xc3b2,	// (0x00061394) listscroll_fast2_pane

0xb70e,	// (0x000606f0) grid_fast2_pane

0xb718,	// (0x000606fa) listscroll_fast2_pane_g1

0xb722,	// (0x00060704) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x00064be0) listscroll_fast2_pane_g

0xedf4,	// (0x00063dd6) scroll_pane_cp26

0xb72c,	// (0x0006070e) cell_fast2_pane_ParamLimits

0xb72c,	// (0x0006070e) cell_fast2_pane

0xb743,	// (0x00060725) cell_fast2_pane_g1

0xb74c,	// (0x0006072e) cell_fast2_pane_g2

0xb755,	// (0x00060737) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x00064be5) cell_fast2_pane_g

0xc3f4,	// (0x000613d6) grid_highlight_pane_cp9

0xc409,	// (0x000613eb) main_eswt_pane_ParamLimits

0xc409,	// (0x000613eb) main_eswt_pane

0xb6d6,	// (0x000606b8) list_single_text_info_pane

0xb75d,	// (0x0006073f) eswt_ctrl_button_pane

0xb75d,	// (0x0006073f) eswt_ctrl_canvas_pane

0xb765,	// (0x00060747) eswt_ctrl_combo_pane

0xb75d,	// (0x0006073f) eswt_ctrl_default_pane

0xb75d,	// (0x0006073f) eswt_ctrl_label_pane

0xb76d,	// (0x0006074f) eswt_ctrl_wait_pane

0xb775,	// (0x00060757) eswt_shell_pane

0xbffd,	// (0x00060fdf) listscroll_eswt_app_pane

0xb795,	// (0x00060777) popup_eswt_tasktip_window_ParamLimits

0xb795,	// (0x00060777) popup_eswt_tasktip_window

0x86b5,	// (0x0005d697) bg_popup_window_pane_cp18

0xb7a6,	// (0x00060788) eswt_control_pane_g1_ParamLimits

0xb7a6,	// (0x00060788) eswt_control_pane_g1

0xb7b3,	// (0x00060795) eswt_control_pane_g2_ParamLimits

0xb7b3,	// (0x00060795) eswt_control_pane_g2

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_ParamLimits

0xb7c0,	// (0x000607a2) eswt_control_pane_g3

0xb7cd,	// (0x000607af) eswt_control_pane_g4_ParamLimits

0xb7cd,	// (0x000607af) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x00064bec) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x00064bec) eswt_control_pane_g

0xecc8,	// (0x00063caa) bg_button_pane_ParamLimits

0xecc8,	// (0x00063caa) bg_button_pane

0xc409,	// (0x000613eb) common_borders_pane_copy2_ParamLimits

0xc409,	// (0x000613eb) common_borders_pane_copy2

0xb7da,	// (0x000607bc) control_button_pane_g1_ParamLimits

0xb7da,	// (0x000607bc) control_button_pane_g1

0xb7e6,	// (0x000607c8) control_button_pane_g2_ParamLimits

0xb7e6,	// (0x000607c8) control_button_pane_g2

0xb7f2,	// (0x000607d4) control_button_pane_g3_ParamLimits

0xb7f2,	// (0x000607d4) control_button_pane_g3

0x0002,

0xfc13,	// (0x00064bf5) control_button_pane_g_ParamLimits

0xfc13,	// (0x00064bf5) control_button_pane_g

0xb806,	// (0x000607e8) control_button_pane_t1

0xb814,	// (0x000607f6) control_button_pane_t2

0x0001,

0xfc1a,	// (0x00064bfc) control_button_pane_t

0x8641,	// (0x0005d623) bg_button_pane_g1

0x8651,	// (0x0005d633) bg_button_pane_g2

0x8649,	// (0x0005d62b) bg_button_pane_g3

0x8661,	// (0x0005d643) bg_button_pane_g4

0x8659,	// (0x0005d63b) bg_button_pane_g5

0x8669,	// (0x0005d64b) bg_button_pane_g6

0x8671,	// (0x0005d653) bg_button_pane_g7

0x8681,	// (0x0005d663) bg_button_pane_g8

0x8679,	// (0x0005d65b) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0006484d) bg_button_pane_g

0xadd7,	// (0x0005fdb9) common_borders_pane_ParamLimits

0xadd7,	// (0x0005fdb9) common_borders_pane

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy1_ParamLimits

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy1

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy1_ParamLimits

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy1

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy1_ParamLimits

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy1

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy1_ParamLimits

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy1

0xae12,	// (0x0005fdf4) bg_eswt_ctrl_canvas_pane_g1

0xadd7,	// (0x0005fdb9) common_borders_pane_cp2_ParamLimits

0xadd7,	// (0x0005fdb9) common_borders_pane_cp2

0xadd7,	// (0x0005fdb9) common_borders_pane_cp3_ParamLimits

0xadd7,	// (0x0005fdb9) common_borders_pane_cp3

0xb822,	// (0x00060804) separator_horizontal_pane

0xb82a,	// (0x0006080c) separator_vertical_pane

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy2_ParamLimits

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy2

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy2_ParamLimits

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy2

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy2_ParamLimits

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy2

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy2_ParamLimits

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy2

0xbffd,	// (0x00060fdf) common_borders_pane_cp4

0xb833,	// (0x00060815) separator_horizontal_pane_g1

0xb83c,	// (0x0006081e) separator_horizontal_pane_g2

0xb845,	// (0x00060827) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x00064c01) separator_horizontal_pane_g

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy3_ParamLimits

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy3

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy3_ParamLimits

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy3

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy3_ParamLimits

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy3

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy3_ParamLimits

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy3

0xbffd,	// (0x00060fdf) common_borders_pane_cp5

0xb84e,	// (0x00060830) separator_vertical_pane_g1

0xb857,	// (0x00060839) separator_vertical_pane_g2

0xb860,	// (0x00060842) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x00064c08) separator_vertical_pane_g

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy4_ParamLimits

0xb7a6,	// (0x00060788) eswt_control_pane_g1_copy4

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy4_ParamLimits

0xb7b3,	// (0x00060795) eswt_control_pane_g2_copy4

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy4_ParamLimits

0xb7c0,	// (0x000607a2) eswt_control_pane_g3_copy4

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy4_ParamLimits

0xb7cd,	// (0x000607af) eswt_control_pane_g4_copy4

0xb869,	// (0x0006084b) eswt_ctrl_combo_button_pane

0xb871,	// (0x00060853) eswt_ctrl_input_pane

0xb879,	// (0x0006085b) popup_choice_list_window_cp70

0xb881,	// (0x00060863) eswt_ctrl_input_pane_t1

0xbffd,	// (0x00060fdf) input_focus_pane_cp70

0xadd7,	// (0x0005fdb9) bg_button_pane_cp70_ParamLimits

0xadd7,	// (0x0005fdb9) bg_button_pane_cp70

0xb88f,	// (0x00060871) eswt_ctrl_combo_button_pane_g1

0xb897,	// (0x00060879) wait_bar_pane_cp70

0x86b5,	// (0x0005d697) bg_popup_window_pane_cp70_ParamLimits

0x86b5,	// (0x0005d697) bg_popup_window_pane_cp70

0xb89f,	// (0x00060881) popup_eswt_tasktip_window_t1

0xb8b5,	// (0x00060897) wait_bar_pane_cp71_ParamLimits

0xb8b5,	// (0x00060897) wait_bar_pane_cp71

0xb8c1,	// (0x000608a3) grid_eswt_app_pane

0xf039,	// (0x0006401b) scroll_pane_cp70

0xb8ca,	// (0x000608ac) cell_eswt_app_pane_ParamLimits

0xb8ca,	// (0x000608ac) cell_eswt_app_pane

0xb8fc,	// (0x000608de) cell_eswt_app_pane_g1_ParamLimits

0xb8fc,	// (0x000608de) cell_eswt_app_pane_g1

0xb92b,	// (0x0006090d) cell_eswt_app_pane_g2_ParamLimits

0xb92b,	// (0x0006090d) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x00064c0f) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x00064c0f) cell_eswt_app_pane_g

0xb954,	// (0x00060936) cell_eswt_app_pane_t1_ParamLimits

0xb954,	// (0x00060936) cell_eswt_app_pane_t1

0xb986,	// (0x00060968) grid_highlight_pane_cp70_ParamLimits

0xb986,	// (0x00060968) grid_highlight_pane_cp70

0xf512,	// (0x000644f4) set_content_pane_g1

0x6285,	// (0x0005b267) status_small_volume_pane

0x6f45,	// (0x0005bf27) status_small_volume_pane_g1

0x6f4d,	// (0x0005bf2f) volume_small2_pane

0x6f56,	// (0x0005bf38) volume_small2_pane_g1

0x6f5f,	// (0x0005bf41) volume_small2_pane_g2

0x6f68,	// (0x0005bf4a) volume_small2_pane_g3

0x6f71,	// (0x0005bf53) volume_small2_pane_g4

0x6f7a,	// (0x0005bf5c) volume_small2_pane_g5

0x6f83,	// (0x0005bf65) volume_small2_pane_g6

0x6f8c,	// (0x0005bf6e) volume_small2_pane_g7

0x6f95,	// (0x0005bf77) volume_small2_pane_g8

0x6f9e,	// (0x0005bf80) volume_small2_pane_g9

0x6fa7,	// (0x0005bf89) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x00064c14) volume_small2_pane_g

0xb1e1,	// (0x000601c3) fep_vkb_top_text_pane_g1_ParamLimits

0xb1fc,	// (0x000601de) fep_vkb_top_text_pane_t1_ParamLimits

0xb494,	// (0x00060476) popup_preview_fixed_window_g3_ParamLimits

0xb494,	// (0x00060476) popup_preview_fixed_window_g3

0x805b,	// (0x0005d03d) popup_toolbar_trans_pane

0x99f9,	// (0x0005e9db) aid_height_set_list_ParamLimits

0x9a0a,	// (0x0005e9ec) aid_size_parent_ParamLimits

0x6496,	// (0x0005b478) list_highlight_pane_cp2_ParamLimits

0xf512,	// (0x000644f4) set_content_pane_g1_ParamLimits

0x9c5f,	// (0x0005ec41) list_single_image_pane_ParamLimits

0x9c5f,	// (0x0005ec41) list_single_image_pane

0xb992,	// (0x00060974) aid_size_cell_image_ParamLimits

0xb992,	// (0x00060974) aid_size_cell_image

0xb99f,	// (0x00060981) grid_single_image_pane_ParamLimits

0xb99f,	// (0x00060981) grid_single_image_pane

0xecd6,	// (0x00063cb8) list_single_image_pane_g1_ParamLimits

0xecd6,	// (0x00063cb8) list_single_image_pane_g1

0xece2,	// (0x00063cc4) list_single_image_pane_g2_ParamLimits

0xece2,	// (0x00063cc4) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x00064c29) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x00064c29) list_single_image_pane_g

0xb9ad,	// (0x0006098f) list_single_image_pane_t1_ParamLimits

0xb9ad,	// (0x0006098f) list_single_image_pane_t1

0xb9c3,	// (0x000609a5) cell_image_list_pane_ParamLimits

0xb9c3,	// (0x000609a5) cell_image_list_pane

0xb9d9,	// (0x000609bb) cell_image_list_pane_g1

0xb9e2,	// (0x000609c4) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x00064c2e) cell_image_list_pane_g

0xb9eb,	// (0x000609cd) aid_size_cell_tb_trans_pane

0xecc8,	// (0x00063caa) bg_tb_trans_pane

0xb9fd,	// (0x000609df) grid_tb_trans_pane

0x8641,	// (0x0005d623) bg_tb_trans_pane_g1

0x8651,	// (0x0005d633) bg_tb_trans_pane_g2

0x8649,	// (0x0005d62b) bg_tb_trans_pane_g3

0x8661,	// (0x0005d643) bg_tb_trans_pane_g4

0x8659,	// (0x0005d63b) bg_tb_trans_pane_g5

0x8681,	// (0x0005d663) bg_tb_trans_pane_g6

0x8679,	// (0x0005d65b) bg_tb_trans_pane_g7

0x8669,	// (0x0005d64b) bg_tb_trans_pane_g8

0x8671,	// (0x0005d653) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x00064c33) bg_tb_trans_pane_g

0xba11,	// (0x000609f3) cell_toolbar_trans_pane_ParamLimits

0xba11,	// (0x000609f3) cell_toolbar_trans_pane

0xae12,	// (0x0005fdf4) cell_toolbar_trans_pane_g1

0xaa36,	// (0x0005fa18) list_form2_midp_pane_t1

0xaa44,	// (0x0005fa26) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00064ad0) list_form2_midp_pane_t

0xaa52,	// (0x0005fa34) scroll_pane_cp51_ParamLimits

0xac19,	// (0x0005fbfb) form2_midp_wait_pane_g1

0xac22,	// (0x0005fc04) form2_midp_wait_pane_g2

0xac2b,	// (0x0005fc0d) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00064ae5) form2_midp_wait_pane_g

0xc06b,	// (0x0006104d) list_highlight_pane_cp21_ParamLimits

0xac6f,	// (0x0005fc51) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xac7e,	// (0x0005fc60) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9c18,	// (0x0005ebfa) list_single_2graphic_im_pane_ParamLimits

0x9c18,	// (0x0005ebfa) list_single_2graphic_im_pane

0xba37,	// (0x00060a19) list_single_2graphic_im_pane_g1_ParamLimits

0xba37,	// (0x00060a19) list_single_2graphic_im_pane_g1

0xba48,	// (0x00060a2a) list_single_2graphic_im_pane_g2_ParamLimits

0xba48,	// (0x00060a2a) list_single_2graphic_im_pane_g2

0xba54,	// (0x00060a36) list_single_2graphic_im_pane_g3_ParamLimits

0xba54,	// (0x00060a36) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x00064c46) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x00064c46) list_single_2graphic_im_pane_g

0xba74,	// (0x00060a56) list_single_2graphic_im_pane_t1_ParamLimits

0xba74,	// (0x00060a56) list_single_2graphic_im_pane_t1

0xb4a0,	// (0x00060482) list_single_graphic_2heading_pane_fp_ParamLimits

0xb4a0,	// (0x00060482) list_single_graphic_2heading_pane_fp

0x38bd,	// (0x0005889f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x38bd,	// (0x0005889f) list_single_graphic_2heading_pane_fp_g1

0xb4b9,	// (0x0006049b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb4b9,	// (0x0006049b) list_single_graphic_2heading_pane_fp_g2

0xb412,	// (0x000603f4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb412,	// (0x000603f4) list_single_graphic_2heading_pane_fp_g3

0xb41e,	// (0x00060400) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb41e,	// (0x00060400) list_single_graphic_2heading_pane_fp_g4

0xb4c5,	// (0x000604a7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb4c5,	// (0x000604a7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x00064b6d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x00064b6d) list_single_graphic_2heading_pane_fp_g

0x39e4,	// (0x000589c6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x39e4,	// (0x000589c6) list_single_graphic_2heading_pane_fp_t1

0x38f5,	// (0x000588d7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x38f5,	// (0x000588d7) list_single_graphic_2heading_pane_fp_t2

0x39fa,	// (0x000589dc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x39fa,	// (0x000589dc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x00064c4f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x00064c4f) list_single_graphic_2heading_pane_fp_t

0xaea3,	// (0x0005fe85) fep_hwr_write_pane_g5_ParamLimits

0xaea3,	// (0x0005fe85) fep_hwr_write_pane_g5

0xaeaf,	// (0x0005fe91) fep_hwr_write_pane_g6_ParamLimits

0xaeaf,	// (0x0005fe91) fep_hwr_write_pane_g6

0xb775,	// (0x00060757) eswt_shell_pane_ParamLimits

0x86b5,	// (0x0005d697) bg_popup_window_pane_cp18_ParamLimits

0x9950,	// (0x0005e932) heading_pane_cp70

0xb89f,	// (0x00060881) popup_eswt_tasktip_window_t1_ParamLimits

0x818e,	// (0x0005d170) aid_touch_tab_arrow_left

0x819d,	// (0x0005d17f) aid_touch_tab_arrow_right

0xc01b,	// (0x00060ffd) title_pane_g3_ParamLimits

0xc01b,	// (0x00060ffd) title_pane_g3

0xec87,	// (0x00063c69) set_value_pane_g1

0x805b,	// (0x0005d03d) popup_toolbar_trans_pane_ParamLimits

0xb9eb,	// (0x000609cd) aid_size_cell_tb_trans_pane_ParamLimits

0xecc8,	// (0x00063caa) bg_tb_trans_pane_ParamLimits

0xb9fd,	// (0x000609df) grid_tb_trans_pane_ParamLimits

0xc1ac,	// (0x0006118e) cont_note_pane_ParamLimits

0xc1ac,	// (0x0006118e) cont_note_pane

0xc409,	// (0x000613eb) cont_snote2_single_text_pane_ParamLimits

0xc409,	// (0x000613eb) cont_snote2_single_text_pane

0xc409,	// (0x000613eb) cont_snote2_single_graphic_pane_ParamLimits

0xc409,	// (0x000613eb) cont_snote2_single_graphic_pane

0x8c91,	// (0x0005dc73) cont_note_wait_pane_ParamLimits

0x8c91,	// (0x0005dc73) cont_note_wait_pane

0x8c91,	// (0x0005dc73) cont_note_image_pane_ParamLimits

0x8c91,	// (0x0005dc73) cont_note_image_pane

0xbaa5,	// (0x00060a87) popup_note2_window_g1_ParamLimits

0xbaa5,	// (0x00060a87) popup_note2_window_g1

0xbad6,	// (0x00060ab8) popup_note2_window_t1_ParamLimits

0xbad6,	// (0x00060ab8) popup_note2_window_t1

0xbb1b,	// (0x00060afd) popup_note2_window_t2_ParamLimits

0xbb1b,	// (0x00060afd) popup_note2_window_t2

0xbb60,	// (0x00060b42) popup_note2_window_t3_ParamLimits

0xbb60,	// (0x00060b42) popup_note2_window_t3

0xbba5,	// (0x00060b87) popup_note2_window_t4_ParamLimits

0xbba5,	// (0x00060b87) popup_note2_window_t4

0xc230,	// (0x00061212) popup_note2_window_t5_ParamLimits

0xc230,	// (0x00061212) popup_note2_window_t5

0x0004,

0xfc79,	// (0x00064c5b) popup_note2_window_t_ParamLimits

0xfc79,	// (0x00064c5b) popup_note2_window_t

0xbbd4,	// (0x00060bb6) popup_note2_image_window_g1_ParamLimits

0xbbd4,	// (0x00060bb6) popup_note2_image_window_g1

0xbbe0,	// (0x00060bc2) popup_note2_image_window_g2_ParamLimits

0xbbe0,	// (0x00060bc2) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x00064c66) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x00064c66) popup_note2_image_window_g

0xbbf2,	// (0x00060bd4) popup_note2_image_window_t1_ParamLimits

0xbbf2,	// (0x00060bd4) popup_note2_image_window_t1

0xbc0a,	// (0x00060bec) popup_note2_image_window_t2_ParamLimits

0xbc0a,	// (0x00060bec) popup_note2_image_window_t2

0xbc22,	// (0x00060c04) popup_note2_image_window_t3_ParamLimits

0xbc22,	// (0x00060c04) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x00064c6b) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x00064c6b) popup_note2_image_window_t

0x8c9f,	// (0x0005dc81) popup_note2_wait_window_g1_ParamLimits

0x8c9f,	// (0x0005dc81) popup_note2_wait_window_g1

0xbc3e,	// (0x00060c20) popup_note2_wait_window_g2_ParamLimits

0xbc3e,	// (0x00060c20) popup_note2_wait_window_g2

0x8cb7,	// (0x0005dc99) popup_note2_wait_window_g3_ParamLimits

0x8cb7,	// (0x0005dc99) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x00064c72) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x00064c72) popup_note2_wait_window_g

0xbc4a,	// (0x00060c2c) popup_note2_wait_window_t1_ParamLimits

0xbc4a,	// (0x00060c2c) popup_note2_wait_window_t1

0xbc68,	// (0x00060c4a) popup_note2_wait_window_t2_ParamLimits

0xbc68,	// (0x00060c4a) popup_note2_wait_window_t2

0xbc86,	// (0x00060c68) popup_note2_wait_window_t3_ParamLimits

0xbc86,	// (0x00060c68) popup_note2_wait_window_t3

0xbc98,	// (0x00060c7a) popup_note2_wait_window_t4_ParamLimits

0xbc98,	// (0x00060c7a) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x00064c79) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x00064c79) popup_note2_wait_window_t

0xbcaa,	// (0x00060c8c) wait_bar2_pane_ParamLimits

0xbcaa,	// (0x00060c8c) wait_bar2_pane

0xbcc2,	// (0x00060ca4) popup_snote2_single_text_window_g1_ParamLimits

0xbcc2,	// (0x00060ca4) popup_snote2_single_text_window_g1

0xbcea,	// (0x00060ccc) popup_snote2_single_text_window_t1_ParamLimits

0xbcea,	// (0x00060ccc) popup_snote2_single_text_window_t1

0xbd36,	// (0x00060d18) popup_snote2_single_text_window_t2_ParamLimits

0xbd36,	// (0x00060d18) popup_snote2_single_text_window_t2

0xbd82,	// (0x00060d64) popup_snote2_single_text_window_t3_ParamLimits

0xbd82,	// (0x00060d64) popup_snote2_single_text_window_t3

0xbdc3,	// (0x00060da5) popup_snote2_single_text_window_t4_ParamLimits

0xbdc3,	// (0x00060da5) popup_snote2_single_text_window_t4

0xbdf9,	// (0x00060ddb) popup_snote2_single_text_window_t5_ParamLimits

0xbdf9,	// (0x00060ddb) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x00064c82) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x00064c82) popup_snote2_single_text_window_t

0xbe24,	// (0x00060e06) popup_snote2_single_graphic_window_g1_ParamLimits

0xbe24,	// (0x00060e06) popup_snote2_single_graphic_window_g1

0xbe4c,	// (0x00060e2e) popup_snote2_single_graphic_window_g2_ParamLimits

0xbe4c,	// (0x00060e2e) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x00064c8d) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x00064c8d) popup_snote2_single_graphic_window_g

0xbe74,	// (0x00060e56) popup_snote2_single_graphic_window_t1_ParamLimits

0xbe74,	// (0x00060e56) popup_snote2_single_graphic_window_t1

0xbec0,	// (0x00060ea2) popup_snote2_single_graphic_window_t2_ParamLimits

0xbec0,	// (0x00060ea2) popup_snote2_single_graphic_window_t2

0xbd82,	// (0x00060d64) popup_snote2_single_graphic_window_t3_ParamLimits

0xbd82,	// (0x00060d64) popup_snote2_single_graphic_window_t3

0xbdc3,	// (0x00060da5) popup_snote2_single_graphic_window_t4_ParamLimits

0xbdc3,	// (0x00060da5) popup_snote2_single_graphic_window_t4

0xbdf9,	// (0x00060ddb) popup_snote2_single_graphic_window_t5_ParamLimits

0xbdf9,	// (0x00060ddb) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x00064c92) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x00064c92) popup_snote2_single_graphic_window_t

0xa902,	// (0x0005f8e4) clock_nsta_pane_cp2_t1

0xa902,	// (0x0005f8e4) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00064aa6) clock_nsta_pane_cp2_t

0x31e4,	// (0x000581c6) form_field_data_wide_pane_g1_ParamLimits

0xecd6,	// (0x00063cb8) form_field_data_wide_pane_g2_ParamLimits

0xecd6,	// (0x00063cb8) form_field_data_wide_pane_g2

0xece2,	// (0x00063cc4) form_field_data_wide_pane_g3_ParamLimits

0xece2,	// (0x00063cc4) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00064662) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00064662) form_field_data_wide_pane_g

0xa7e1,	// (0x0005f7c3) grid_touch_3_pane_ParamLimits

0xa7e1,	// (0x0005f7c3) grid_touch_3_pane

0xbf0c,	// (0x00060eee) cell_touch_3_pane_ParamLimits

0xbf0c,	// (0x00060eee) cell_touch_3_pane

0xae12,	// (0x0005fdf4) cell_touch_3_pane_g1

0xae12,	// (0x0005fdf4) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00064b2b) cell_touch_3_pane_g

0xc262,	// (0x00061244) cont_query_data_pane

0xc26a,	// (0x0006124c) cont_query_data_pane_cp1

0xbf3f,	// (0x00060f21) button_value_adjust_pane_cp7

0xbf47,	// (0x00060f29) query_popup_pane_cp3

0xf20a,	// (0x000641ec) bg_popup_sub_pane_cp22_ParamLimits

0x5d41,	// (0x0005ad23) navi_navi_volume_pane_cp2

0x5d5c,	// (0x0005ad3e) popup_side_volume_key_window_g2

0x5d6b,	// (0x0005ad4d) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x000646f8) popup_side_volume_key_window_g

0x5d88,	// (0x0005ad6a) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x000646ff) popup_side_volume_key_window_t

0xf415,	// (0x000643f7) popup_side_volume_key_window_ParamLimits

0x5470,	// (0x0005a452) list_double_graphic_pane_g4_ParamLimits

0x5470,	// (0x0005a452) list_double_graphic_pane_g4

0x9c47,	// (0x0005ec29) list_single_2heading_msg_pane_ParamLimits

0x9c47,	// (0x0005ec29) list_single_2heading_msg_pane

0x9db8,	// (0x0005ed9a) list_single_2heading_msg_pane_g1_ParamLimits

0x9db8,	// (0x0005ed9a) list_single_2heading_msg_pane_g1

0x1a76,	// (0x00056a58) list_single_2heading_msg_pane_g2_ParamLimits

0x1a76,	// (0x00056a58) list_single_2heading_msg_pane_g2

0x9dc4,	// (0x0005eda6) list_single_2heading_msg_pane_g3_ParamLimits

0x9dc4,	// (0x0005eda6) list_single_2heading_msg_pane_g3

0x9dd0,	// (0x0005edb2) list_single_2heading_msg_pane_g4_ParamLimits

0x9dd0,	// (0x0005edb2) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x00064c9d) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x00064c9d) list_single_2heading_msg_pane_g

0x6fb0,	// (0x0005bf92) list_single_2heading_msg_pane_t1_ParamLimits

0x6fb0,	// (0x0005bf92) list_single_2heading_msg_pane_t1

0x6fd8,	// (0x0005bfba) list_single_2heading_msg_pane_t2_ParamLimits

0x6fd8,	// (0x0005bfba) list_single_2heading_msg_pane_t2

0x7007,	// (0x0005bfe9) list_single_2heading_msg_pane_t3_ParamLimits

0x7007,	// (0x0005bfe9) list_single_2heading_msg_pane_t3

0x3c85,	// (0x00058c67) list_single_2heading_msg_pane_t4_ParamLimits

0x3c85,	// (0x00058c67) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x00064ca6) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x00064ca6) list_single_2heading_msg_pane_t

0xc027,	// (0x00061009) title_pane_g4_ParamLimits

0xc027,	// (0x00061009) title_pane_g4

0x59da,	// (0x0005a9bc) title_pane_stacon_g3_ParamLimits

0x59da,	// (0x0005a9bc) title_pane_stacon_g3

0xba68,	// (0x00060a4a) list_single_2graphic_im_pane_g4_ParamLimits

0xba68,	// (0x00060a4a) list_single_2graphic_im_pane_g4

0x9701,	// (0x0005e6e3) popup_side_volume_key_window_cp

0xa0fc,	// (0x0005f0de) main_idle_act2_pane_t1

0x6600,	// (0x0005b5e2) toolbar_button_pane_g10

0x525a,	// (0x0005a23c) popup_toolbar_window_cp1

0xa8f3,	// (0x0005f8d5) clock_nsta_pane_cp_t1

0xa8f3,	// (0x0005f8d5) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00064aa1) clock_nsta_pane_cp_t

0x5d41,	// (0x0005ad23) navi_navi_volume_pane_cp2_ParamLimits

0x5d50,	// (0x0005ad32) popup_side_volume_key_window_g1_ParamLimits

0x5d5c,	// (0x0005ad3e) popup_side_volume_key_window_g2_ParamLimits

0x5d6b,	// (0x0005ad4d) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x000646f8) popup_side_volume_key_window_g_ParamLimits

0x6b74,	// (0x0005bb56) fep_hwr_aid_pane

0x6c1d,	// (0x0005bbff) bg_fep_hwr_top_pane_g4_ParamLimits

0xae73,	// (0x0005fe55) fep_hwr_top_pane_g1_ParamLimits

0xae85,	// (0x0005fe67) fep_hwr_top_pane_g2_ParamLimits

0x6c3d,	// (0x0005bc1f) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00064af6) fep_hwr_top_pane_g_ParamLimits

0x6c52,	// (0x0005bc34) fep_hwr_top_text_pane_ParamLimits

0x94b6,	// (0x0005e498) aid_touch_tab_arrow_arrow_2

0x94bf,	// (0x0005e4a1) aid_touch_tab_arrow_left_2

0x6b88,	// (0x0005bb6a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6bbf,	// (0x0005bba1) fep_hwr_prediction_pane

0xafdb,	// (0x0005ffbd) fep_vkb_prediction_pane

0xb0e1,	// (0x000600c3) fep_vkb_side_pane_g3_ParamLimits

0xb0e1,	// (0x000600c3) fep_vkb_side_pane_g3

0x6de1,	// (0x0005bdc3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6e52,	// (0x0005be34) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6e5f,	// (0x0005be41) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x00064ba5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7040,	// (0x0005c022) fep_hwr_prediction_pane_g1

0x704a,	// (0x0005c02c) fep_hwr_prediction_pane_g2

0x7052,	// (0x0005c034) fep_hwr_prediction_pane_g3

0x705a,	// (0x0005c03c) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x00064caf) fep_hwr_prediction_pane_g

0xbf6e,	// (0x00060f50) fep_vkb_prediction_pane_g1

0xbf78,	// (0x00060f5a) fep_vkb_prediction_pane_g2

0xbf80,	// (0x00060f62) fep_vkb_prediction_pane_g3

0xbf88,	// (0x00060f6a) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x00064cb8) fep_vkb_prediction_pane_g

0x6968,	// (0x0005b94a) slider_set_pane_g3

0x697c,	// (0x0005b95e) slider_set_pane_g4

0x6994,	// (0x0005b976) slider_set_pane_g5

0x6968,	// (0x0005b94a) slider_set_pane_g6

0x69aa,	// (0x0005b98c) slider_set_pane_g7

0x9b8f,	// (0x0005eb71) slider_form_pane_g3

0x9b98,	// (0x0005eb7a) slider_form_pane_g4

0x9ba0,	// (0x0005eb82) slider_form_pane_g5

0x9b8f,	// (0x0005eb71) slider_form_pane_g6

0x9ba8,	// (0x0005eb8a) slider_form_pane_g7

0xa3b3,	// (0x0005f395) slider_set_pane_vc_g3

0xa3bc,	// (0x0005f39e) slider_set_pane_vc_g4

0xa3c5,	// (0x0005f3a7) slider_set_pane_vc_g5

0xa3b3,	// (0x0005f395) slider_set_pane_vc_g6

0xa3ce,	// (0x0005f3b0) slider_set_pane_vc_g7

0xa5a6,	// (0x0005f588) slider_form_pane_vc_g1

0xa5af,	// (0x0005f591) slider_form_pane_vc_g2

0xa5b8,	// (0x0005f59a) slider_form_pane_vc_g3

0xa5a6,	// (0x0005f588) slider_form_pane_vc_g4

0xa5c1,	// (0x0005f5a3) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x00064a73) slider_form_pane_vc_g

0xbffd,	// (0x00060fdf) main_idle_act3_pane

0xbf90,	// (0x00060f72) ai3_links_pane

0xbf99,	// (0x00060f7b) popup_ai3_data_window_ParamLimits

0xbf99,	// (0x00060f7b) popup_ai3_data_window

0xbffd,	// (0x00060fdf) grid_ai3_links_pane

0xbfb7,	// (0x00060f99) cell_ai3_links_pane_ParamLimits

0xbfb7,	// (0x00060f99) cell_ai3_links_pane

0xbfd1,	// (0x00060fb3) bg_popup_sub_pane_cp11

0xbfde,	// (0x00060fc0) cell_ai3_links_pane_g1

0xbffd,	// (0x00060fdf) bg_popup_sub_pane_cp12

0xc664,	// (0x00061646) heading_ai3_data_pane

0xc66c,	// (0x0006164e) list_ai3_gene_pane

0xc678,	// (0x0006165a) popup_ai3_data_window_g1

0xc680,	// (0x00061662) heading_ai3_data_pane_g1

0xc688,	// (0x0006166a) heading_ai3_data_pane_t1

0xc696,	// (0x00061678) list_double_ai3_gene_pane_ParamLimits

0xc696,	// (0x00061678) list_double_ai3_gene_pane

0xc6a3,	// (0x00061685) list_single_ai3_gene_pane_ParamLimits

0xc6a3,	// (0x00061685) list_single_ai3_gene_pane

0xadd7,	// (0x0005fdb9) list_highlight_pane_cp7_ParamLimits

0xadd7,	// (0x0005fdb9) list_highlight_pane_cp7

0xc6b0,	// (0x00061692) list_single_a13_gene_pane_t1_ParamLimits

0xc6b0,	// (0x00061692) list_single_a13_gene_pane_t1

0xc6c7,	// (0x000616a9) list_single_ai3_gene_pane_g1

0xc6d0,	// (0x000616b2) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x00064cc1) list_single_ai3_gene_pane_g

0xc6d8,	// (0x000616ba) list_double_ai3_gene_pane_g1_ParamLimits

0xc6d8,	// (0x000616ba) list_double_ai3_gene_pane_g1

0xc6e4,	// (0x000616c6) list_double_ai3_gene_pane_t1_ParamLimits

0xc6e4,	// (0x000616c6) list_double_ai3_gene_pane_t1

0xc700,	// (0x000616e2) list_double_ai3_gene_pane_t2_ParamLimits

0xc700,	// (0x000616e2) list_double_ai3_gene_pane_t2

0xc715,	// (0x000616f7) list_double_ai3_gene_pane_t3_ParamLimits

0xc715,	// (0x000616f7) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x00064cc6) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x00064cc6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3a10,	// (0x000589f2) aid_size_min_col_2

0xbf58,	// (0x00060f3a) aid_size_min_msg_ParamLimits

0xbf58,	// (0x00060f3a) aid_size_min_msg

0xb1ed,	// (0x000601cf) fep_vkb_top_text_pane_g2_ParamLimits

0xb1ed,	// (0x000601cf) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00064b26) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00064b26) fep_vkb_top_text_pane_g

0xbffd,	// (0x00060fdf) main_hc_apps_shell_pane

0xc732,	// (0x00061714) grid_hc_apps_pane_ParamLimits

0xc732,	// (0x00061714) grid_hc_apps_pane

0xc741,	// (0x00061723) list_hc_apps_pane

0xc749,	// (0x0006172b) scroll_pane_cp37_ParamLimits

0xc749,	// (0x0006172b) scroll_pane_cp37

0xc755,	// (0x00061737) cell_hc_apps_pane_ParamLimits

0xc755,	// (0x00061737) cell_hc_apps_pane

0xc80d,	// (0x000617ef) cell_hc_apps_pane_g1_ParamLimits

0xc80d,	// (0x000617ef) cell_hc_apps_pane_g1

0xc83e,	// (0x00061820) cell_hc_apps_pane_g2_ParamLimits

0xc83e,	// (0x00061820) cell_hc_apps_pane_g2

0xc85a,	// (0x0006183c) cell_hc_apps_pane_g3_ParamLimits

0xc85a,	// (0x0006183c) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x00064ccd) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x00064ccd) cell_hc_apps_pane_g

0xc87c,	// (0x0006185e) cell_hc_apps_pane_t1_ParamLimits

0xc87c,	// (0x0006185e) cell_hc_apps_pane_t1

0xc1ac,	// (0x0006118e) grid_highlight_pane_cp10_ParamLimits

0xc1ac,	// (0x0006118e) grid_highlight_pane_cp10

0xc8bc,	// (0x0006189e) list_single_hc_apps_pane_ParamLimits

0xc8bc,	// (0x0006189e) list_single_hc_apps_pane

0xc8fb,	// (0x000618dd) list_single_hc_apps_pane_g1

0x9de8,	// (0x0005edca) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x00064cd4) list_single_hc_apps_pane_g

0x9e01,	// (0x0005ede3) list_single_hc_apps_pane_g2_copy1

0x7062,	// (0x0005c044) list_single_hc_apps_pane_t1

0xc06b,	// (0x0006104d) bg_set_opt_pane_cp_ParamLimits

0x4fab,	// (0x00059f8d) setting_slider_pane_t1_ParamLimits

0x4fc4,	// (0x00059fa6) setting_slider_pane_t2_ParamLimits

0x4fde,	// (0x00059fc0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00064540) setting_slider_pane_t_ParamLimits

0x4ff6,	// (0x00059fd8) slider_set_pane_ParamLimits

0x6303,	// (0x0005b2e5) control_pane_g5_ParamLimits

0x6303,	// (0x0005b2e5) control_pane_g5

0x99bc,	// (0x0005e99e) slider_set_pane_g1_ParamLimits

0x695c,	// (0x0005b93e) slider_set_pane_g2_ParamLimits

0x6968,	// (0x0005b94a) slider_set_pane_g3_ParamLimits

0x697c,	// (0x0005b95e) slider_set_pane_g4_ParamLimits

0x6994,	// (0x0005b976) slider_set_pane_g5_ParamLimits

0x6968,	// (0x0005b94a) slider_set_pane_g6_ParamLimits

0x69aa,	// (0x0005b98c) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0006494b) slider_set_pane_g_ParamLimits

0xf4bd,	// (0x0006449f) navi_icon_text_pane_ParamLimits

0x814d,	// (0x0005d12f) aid_fill_nsta_2_ParamLimits

0x818e,	// (0x0005d170) aid_touch_tab_arrow_left_ParamLimits

0x819d,	// (0x0005d17f) aid_touch_tab_arrow_right_ParamLimits

0x820a,	// (0x0005d1ec) clock_nsta_pane_ParamLimits

0x9498,	// (0x0005e47a) navi_icon_pane_g1_ParamLimits

0x94a4,	// (0x0005e486) navi_text_pane_t1_ParamLimits

0xaa10,	// (0x0005f9f2) navi_icon_text_pane_g1_ParamLimits

0xaa1c,	// (0x0005f9fe) navi_icon_text_pane_t1_ParamLimits

0xc8fb,	// (0x000618dd) list_single_hc_apps_pane_g1_ParamLimits

0x9de8,	// (0x0005edca) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x00064cd4) list_single_hc_apps_pane_g_ParamLimits

0x9e01,	// (0x0005ede3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7062,	// (0x0005c044) list_single_hc_apps_pane_t1_ParamLimits

0x4df3,	// (0x00059dd5) popup_toolbar2_fixed_window_ParamLimits

0x4df3,	// (0x00059dd5) popup_toolbar2_fixed_window

0x8051,	// (0x0005d033) popup_toolbar2_float_window

0xbffd,	// (0x00060fdf) bg_popup_sub_pane_cp27

0xc914,	// (0x000618f6) grid_toolbar2_float_pane

0xbffd,	// (0x00060fdf) bg_popup_sub_pane_cp26

0xc914,	// (0x000618f6) grid_toolbar2_fixed_pane

0xc91c,	// (0x000618fe) cell_toolbar2_fixed_pane_ParamLimits

0xc91c,	// (0x000618fe) cell_toolbar2_fixed_pane

0xc92c,	// (0x0006190e) cell_toolbar2_fixed_pane_g1

0xc935,	// (0x00061917) toolbar2_fixed_button_pane

0x8641,	// (0x0005d623) toolbar2_fixed_button_pane_g1

0x8651,	// (0x0005d633) toolbar2_fixed_button_pane_g2

0x8649,	// (0x0005d62b) toolbar2_fixed_button_pane_g3

0x8661,	// (0x0005d643) toolbar2_fixed_button_pane_g4

0x8659,	// (0x0005d63b) toolbar2_fixed_button_pane_g5

0x8669,	// (0x0005d64b) toolbar2_fixed_button_pane_g6

0x8671,	// (0x0005d653) toolbar2_fixed_button_pane_g7

0x8681,	// (0x0005d663) toolbar2_fixed_button_pane_g8

0x8679,	// (0x0005d65b) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0006484d) toolbar2_fixed_button_pane_g

0xc93d,	// (0x0006191f) cell_toolbar2_float_pane_ParamLimits

0xc93d,	// (0x0006191f) cell_toolbar2_float_pane

0xc94e,	// (0x00061930) cell_toolbar2_float_pane_g1

0xc935,	// (0x00061917) toolbar2_fixed_button_pane_cp

0xaf49,	// (0x0005ff2b) fep_vkb_accented_list_pane_ParamLimits

0xaf49,	// (0x0005ff2b) fep_vkb_accented_list_pane

0x6dc1,	// (0x0005bda3) bg_popup_fep_shadow_pane_g9

0x332f,	// (0x00058311) bg_popup_fep_shadow_pane_cp3

0xeddb,	// (0x00063dbd) list_accented_list_pane

0xc957,	// (0x00061939) list_single_accented_list_pane_ParamLimits

0xc957,	// (0x00061939) list_single_accented_list_pane

0x332f,	// (0x00058311) list_highlight_pane_cp10

0xc968,	// (0x0006194a) list_single_accented_list_pane_t1

0x7f97,	// (0x0005cf79) popup_slider_window_ParamLimits

0x7f97,	// (0x0005cf79) popup_slider_window

0xbf4f,	// (0x00060f31) aid_indentation_list_msg

0xca34,	// (0x00061a16) bg_popup_window_pane_cp19

0xcaa2,	// (0x00061a84) popup_slider_window_g1

0xcabe,	// (0x00061aa0) popup_slider_window_g2

0xcada,	// (0x00061abc) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x00064cd9) popup_slider_window_g

0xcb36,	// (0x00061b18) popup_slider_window_t1

0xcbaa,	// (0x00061b8c) small_volume_slider_vertical_pane

0xae12,	// (0x0005fdf4) small_volume_slider_vertical_pane_g1

0xae12,	// (0x0005fdf4) small_volume_slider_vertical_pane_g2

0xcbc6,	// (0x00061ba8) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x00064ceb) small_volume_slider_vertical_pane_g

0x4ba1,	// (0x00059b83) area_side_right_pane_ParamLimits

0x4ba1,	// (0x00059b83) area_side_right_pane

0x7090,	// (0x0005c072) aid_size_side_button_ParamLimits

0x7090,	// (0x0005c072) aid_size_side_button

0x70a4,	// (0x0005c086) grid_sctrl_middle_pane_ParamLimits

0x70a4,	// (0x0005c086) grid_sctrl_middle_pane

0x70c4,	// (0x0005c0a6) sctrl_sk_bottom_pane

0x70d5,	// (0x0005c0b7) sctrl_sk_top_pane

0x70e7,	// (0x0005c0c9) aid_touch_sctrl_top

0x70f4,	// (0x0005c0d6) bg_sctrl_sk_pane_ParamLimits

0x70f4,	// (0x0005c0d6) bg_sctrl_sk_pane

0x7102,	// (0x0005c0e4) sctrl_sk_top_pane_g1

0x710f,	// (0x0005c0f1) sctrl_sk_top_pane_t1

0x70e7,	// (0x0005c0c9) aid_touch_sctrl_bottom

0x70f4,	// (0x0005c0d6) bg_sctrl_sk_pane_cp_ParamLimits

0x70f4,	// (0x0005c0d6) bg_sctrl_sk_pane_cp

0x712a,	// (0x0005c10c) sctrl_sk_bottom_pane_g1

0x710f,	// (0x0005c0f1) sctrl_sk_bottom_pane_t1

0x7133,	// (0x0005c115) cell_sctrl_middle_pane_ParamLimits

0x7133,	// (0x0005c115) cell_sctrl_middle_pane

0x7150,	// (0x0005c132) aid_touch_sctrl_middle_ParamLimits

0x7150,	// (0x0005c132) aid_touch_sctrl_middle

0x7162,	// (0x0005c144) bg_sctrl_middle_pane_ParamLimits

0x7162,	// (0x0005c144) bg_sctrl_middle_pane

0x6de1,	// (0x0005bdc3) cell_sctrl_middle_pane_g1_ParamLimits

0x6de1,	// (0x0005bdc3) cell_sctrl_middle_pane_g1

0x7170,	// (0x0005c152) cell_sctrl_middle_pane_g2_ParamLimits

0x7170,	// (0x0005c152) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x00064cf7) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x00064cf7) cell_sctrl_middle_pane_g

0x8641,	// (0x0005d623) bg_sctrl_middle_pane_g1

0x8649,	// (0x0005d62b) bg_sctrl_middle_pane_g2

0x8651,	// (0x0005d633) bg_sctrl_middle_pane_g3

0x8659,	// (0x0005d63b) bg_sctrl_middle_pane_g4

0x8661,	// (0x0005d643) bg_sctrl_middle_pane_g5

0x8669,	// (0x0005d64b) bg_sctrl_middle_pane_g6

0x8671,	// (0x0005d653) bg_sctrl_middle_pane_g7

0x8679,	// (0x0005d65b) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x00064cfc) bg_sctrl_middle_pane_g

0x8681,	// (0x0005d663) bg_sctrl_middle_pane_g8_copy1

0x8641,	// (0x0005d623) bg_sctrl_sk_pane_g1

0x8651,	// (0x0005d633) bg_sctrl_sk_pane_g2

0x8649,	// (0x0005d62b) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0006484d) bg_sctrl_sk_pane_g

0xc5c7,	// (0x000615a9) aid_size_touch_scroll_bar

0x8661,	// (0x0005d643) bg_sctrl_sk_pane_g4

0x8659,	// (0x0005d63b) bg_sctrl_sk_pane_g5

0x8669,	// (0x0005d64b) bg_sctrl_sk_pane_g6

0x8671,	// (0x0005d653) bg_sctrl_sk_pane_g7

0x8681,	// (0x0005d663) bg_sctrl_sk_pane_g8

0x8679,	// (0x0005d65b) bg_sctrl_sk_pane_g9

0x6544,	// (0x0005b526) popup_fep_china_hwr2_fs_candidate_window

0x654e,	// (0x0005b530) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x654e,	// (0x0005b530) popup_fep_china_hwr2_fs_control_window

0x6de1,	// (0x0005bdc3) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x00064cf2) sctrl_sk_top_pane_g

0xcbcf,	// (0x00061bb1) aid_fep_china_hwr2_fs_cell_ParamLimits

0xcbcf,	// (0x00061bb1) aid_fep_china_hwr2_fs_cell

0xcbe2,	// (0x00061bc4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xcbe2,	// (0x00061bc4) bg_popup_fep_shadow_pane_cp4

0xcbfb,	// (0x00061bdd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xcbfb,	// (0x00061bdd) bg_popup_fep_shadow_pane_cp5

0xcc0d,	// (0x00061bef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xcc0d,	// (0x00061bef) popup_fep_china_hwr2_fs_control_bar_grid

0xcc1d,	// (0x00061bff) popup_fep_china_hwr2_fs_control_funtion_grid

0xcc25,	// (0x00061c07) aid_fep_china_hwr2_fs_candi_cell

0xbffd,	// (0x00060fdf) bg_popup_fep_shadow_pane_cp6

0xcc2f,	// (0x00061c11) popup_fep_china_hwr2_fs_candidate_grid

0xcc39,	// (0x00061c1b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xcc39,	// (0x00061c1b) cell_fep_china_hwr2_fs_funtion_grid

0xae12,	// (0x0005fdf4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcc51,	// (0x00061c33) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcc51,	// (0x00061c33) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcc5f,	// (0x00061c41) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcc5f,	// (0x00061c41) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x00064d0d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x00064d0d) cell_fep_china_hwr2_fs_funtion_grid_g

0xcc75,	// (0x00061c57) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcc75,	// (0x00061c57) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcc8a,	// (0x00061c6c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcc8a,	// (0x00061c6c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x00064d12) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x00064d12) cell_fep_china_hwr2_fs_funtion_grid_t

0xcca6,	// (0x00061c88) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xccae,	// (0x00061c90) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xccb6,	// (0x00061c98) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x00064d17) popup_fep_china_hwr2_fs_control_bar_grid_g

0xccbe,	// (0x00061ca0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xccbe,	// (0x00061ca0) cell_fep_china_hwr2_fs_candidate_grid

0xccdd,	// (0x00061cbf) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcce5,	// (0x00061cc7) popup_fep_china_hwr2_fs_candidate_grid_g21

0xae12,	// (0x0005fdf4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xae12,	// (0x0005fdf4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00064b2b) cell_fep_china_hwr2_fs_candidate_grid_g

0xcced,	// (0x00061ccf) cell_fep_china_hwr2_fs_candidate_grid_t1

0x821d,	// (0x0005d1ff) clock_nsta_pane_cp_24_ParamLimits

0x821d,	// (0x0005d1ff) clock_nsta_pane_cp_24

0x829d,	// (0x0005d27f) indicator_nsta_pane_cp_24_ParamLimits

0x829d,	// (0x0005d27f) indicator_nsta_pane_cp_24

0x9314,	// (0x0005e2f6) heading_pane_g1

0x0001,

0xf8d0,	// (0x000648b2) heading_pane_g

0x9f43,	// (0x0005ef25) grid_sct_catagory_button_pane

0x9f75,	// (0x0005ef57) scroll_pane_cp5_ParamLimits

0xaa5e,	// (0x0005fa40) button_value_adjust_pane_cp5_ParamLimits

0xaa5e,	// (0x0005fa40) button_value_adjust_pane_cp5

0xab43,	// (0x0005fb25) form2_midp_time_pane_ParamLimits

0xccfb,	// (0x00061cdd) cell_sct_catagory_button_pane_ParamLimits

0xccfb,	// (0x00061cdd) cell_sct_catagory_button_pane

0xadd7,	// (0x0005fdb9) bg_button_pane_cp01_ParamLimits

0xadd7,	// (0x0005fdb9) bg_button_pane_cp01

0xae12,	// (0x0005fdf4) cell_sct_catagory_button_pane_g1

0x7fd8,	// (0x0005cfba) popup_tb_extension_window

0xcd0d,	// (0x00061cef) aid_size_cell_ext_ParamLimits

0xcd0d,	// (0x00061cef) aid_size_cell_ext

0xc1ac,	// (0x0006118e) bg_tb_trans_pane_cp1_ParamLimits

0xc1ac,	// (0x0006118e) bg_tb_trans_pane_cp1

0xcd2d,	// (0x00061d0f) grid_tb_ext_pane_ParamLimits

0xcd2d,	// (0x00061d0f) grid_tb_ext_pane

0xcd5d,	// (0x00061d3f) cell_tb_ext_pane_ParamLimits

0xcd5d,	// (0x00061d3f) cell_tb_ext_pane

0xcd74,	// (0x00061d56) cell_tb_ext_pane_g1_ParamLimits

0xcd74,	// (0x00061d56) cell_tb_ext_pane_g1

0xcd91,	// (0x00061d73) cell_tb_ext_pane_t1

0xc1ac,	// (0x0006118e) list_highlight_pane_cp11_ParamLimits

0xc1ac,	// (0x0006118e) list_highlight_pane_cp11

0x4e12,	// (0x00059df4) popup_uni_indicator_window_ParamLimits

0x4e12,	// (0x00059df4) popup_uni_indicator_window

0xecc8,	// (0x00063caa) bg_popup_sub_pane_cp14

0xcdac,	// (0x00061d8e) list_uniindi_pane

0xcdb8,	// (0x00061d9a) uniindi_top_pane

0xc1ac,	// (0x0006118e) bg_uniindi_top_pane

0xcdd9,	// (0x00061dbb) uniindi_top_pane_g1

0xcdef,	// (0x00061dd1) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x00064d1e) uniindi_top_pane_g

0xce19,	// (0x00061dfb) uniindi_top_pane_t1

0xce45,	// (0x00061e27) list_single_uniindi_pane_ParamLimits

0xce45,	// (0x00061e27) list_single_uniindi_pane

0xae12,	// (0x0005fdf4) bg_uniindi_top_pane_g1

0xce57,	// (0x00061e39) list_single_uniindi_pane_g1

0xce6a,	// (0x00061e4c) list_single_uniindi_pane_t1

0x4c7e,	// (0x00059c60) control_bg_pane

0xce8f,	// (0x00061e71) bg_sctrl_sk_pane_cp1

0xce98,	// (0x00061e7a) bg_sctrl_sk_pane_cp2

0xcea1,	// (0x00061e83) control_bg_pane_g1

0xceaa,	// (0x00061e8c) control_bg_pane_g2

0x0001,

0xfd45,	// (0x00064d27) control_bg_pane_g

0xa885,	// (0x0005f867) cell_indicator_nsta_pane_g1_ParamLimits

0xa893,	// (0x0005f875) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00064a8f) cell_indicator_nsta_pane_g_ParamLimits

0x3893,	// (0x00058875) form2_midp_time_pane_t1_ParamLimits

0xc409,	// (0x000613eb) main_idle_act4_pane_ParamLimits

0xc409,	// (0x000613eb) main_idle_act4_pane

0x7fd8,	// (0x0005cfba) popup_tb_extension_window_ParamLimits

0xcd4f,	// (0x00061d31) tb_ext_find_pane_ParamLimits

0xcd4f,	// (0x00061d31) tb_ext_find_pane

0xceb3,	// (0x00061e95) ai_gene_pane_1_cp1

0x33b5,	// (0x00058397) ai_gene_pane_2_cp1

0xcebb,	// (0x00061e9d) list_single_idle_plugin_calendar_pane

0xcec4,	// (0x00061ea6) list_single_idle_plugin_notification_pane

0xcecd,	// (0x00061eaf) list_single_idle_plugin_player_pane

0xced6,	// (0x00061eb8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xced6,	// (0x00061eb8) list_single_idle_plugin_shortcut_pane

0xcef8,	// (0x00061eda) main_idle_act4_pane_t1

0xcf0a,	// (0x00061eec) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x00064d2c) main_idle_act4_pane_t

0xcf1c,	// (0x00061efe) middle_sk_idle_act4_pane_ParamLimits

0xcf1c,	// (0x00061efe) middle_sk_idle_act4_pane

0xcf32,	// (0x00061f14) popup_clock_digital_analogue_window_cp2

0xcf4c,	// (0x00061f2e) shortcut_wheel_idle_act4_pane_ParamLimits

0xcf4c,	// (0x00061f2e) shortcut_wheel_idle_act4_pane

0xae12,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g1

0xae12,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g2

0xae12,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g3

0xae12,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g4

0xae12,	// (0x0005fdf4) shortcut_wheel_idle_act4_pane_g5

0xcf60,	// (0x00061f42) shortcut_wheel_idle_act4_pane_g6

0xcf68,	// (0x00061f4a) shortcut_wheel_idle_act4_pane_g7

0xcf70,	// (0x00061f52) shortcut_wheel_idle_act4_pane_g8

0xcf78,	// (0x00061f5a) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x00064d31) shortcut_wheel_idle_act4_pane_g

0xb08d,	// (0x0006006f) middle_sk_idle_act4_pane_g1_ParamLimits

0xb08d,	// (0x0006006f) middle_sk_idle_act4_pane_g1

0xcfdc,	// (0x00061fbe) middle_sk_idle_act4_pane_g2_ParamLimits

0xcfdc,	// (0x00061fbe) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x00064d54) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x00064d54) middle_sk_idle_act4_pane_g

0xcfe8,	// (0x00061fca) middle_sk_idle_act4_pane_t1_ParamLimits

0xcfe8,	// (0x00061fca) middle_sk_idle_act4_pane_t1

0xd005,	// (0x00061fe7) grid_ai_shortcut_pane_ParamLimits

0xd005,	// (0x00061fe7) grid_ai_shortcut_pane

0xd01e,	// (0x00062000) list_highlight_pane_cp16_ParamLimits

0xd01e,	// (0x00062000) list_highlight_pane_cp16

0xd02b,	// (0x0006200d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd02b,	// (0x0006200d) list_single_idle_plugin_shortcut_pane_g1

0xd037,	// (0x00062019) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd037,	// (0x00062019) list_single_idle_plugin_shortcut_pane_g2

0xd051,	// (0x00062033) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd051,	// (0x00062033) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x00064d59) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x00064d59) list_single_idle_plugin_shortcut_pane_g

0xd064,	// (0x00062046) cell_ai_shortcut_pane_ParamLimits

0xd064,	// (0x00062046) cell_ai_shortcut_pane

0xd087,	// (0x00062069) cell_ai_shortcut_pane_g1_ParamLimits

0xd087,	// (0x00062069) cell_ai_shortcut_pane_g1

0xceb3,	// (0x00061e95) ai_gene_pane_1_cp2

0xd0a9,	// (0x0006208b) ai_gene_pane_2_cp2

0xd0b1,	// (0x00062093) list_highlight_pane_cp15

0xd0ba,	// (0x0006209c) list_single_idle_plugin_calendar_pane_g1

0xd0b1,	// (0x00062093) list_highlight_pane_cp17

0xd0c2,	// (0x000620a4) list_single_idle_plugin_calendar_pane_g1_copy1

0xd0ca,	// (0x000620ac) list_single_idle_plugin_player_pane_g1

0xa1aa,	// (0x0005f18c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x00064d60) list_single_idle_plugin_player_pane_g

0xd0d2,	// (0x000620b4) list_single_idle_plugin_player_pane_t1

0xd0e0,	// (0x000620c2) list_single_idle_plugin_player_pane_t2

0xd0ee,	// (0x000620d0) list_single_idle_plugin_player_pane_t3

0xd0fc,	// (0x000620de) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x00064d65) list_single_idle_plugin_player_pane_t

0xd10a,	// (0x000620ec) wait_bar_pane_cp15

0xd112,	// (0x000620f4) grid_ai_notification_pane

0xa1aa,	// (0x0005f18c) list_single_idle_plugin_notification_pane_g1

0xd11b,	// (0x000620fd) cell_ai_notification_pane_ParamLimits

0xd11b,	// (0x000620fd) cell_ai_notification_pane

0xd128,	// (0x0006210a) cell_ai_notification_pane_g1

0xd130,	// (0x00062112) cell_ai_notification_pane_t1

0xd13e,	// (0x00062120) tb_ext_find_button_pane

0xd146,	// (0x00062128) tb_ext_find_pane_g1

0xd14e,	// (0x00062130) tb_ext_find_pane_t1

0xf1aa,	// (0x0006418c) tb_ext_find_button_pane_g1

0xd15c,	// (0x0006213e) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x00064d6e) tb_ext_find_button_pane_g

0xcef8,	// (0x00061eda) main_idle_act4_pane_t1_ParamLimits

0xcf0a,	// (0x00061eec) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x00064d2c) main_idle_act4_pane_t_ParamLimits

0xcf32,	// (0x00061f14) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcf40,	// (0x00061f22) sat_plugin_idle_act4_pane_ParamLimits

0xcf40,	// (0x00061f22) sat_plugin_idle_act4_pane

0xd165,	// (0x00062147) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd165,	// (0x00062147) sat_plugin_idle_act4_pane_t1

0xd178,	// (0x0006215a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd178,	// (0x0006215a) sat_plugin_idle_act4_pane_t2

0xd18b,	// (0x0006216d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd18b,	// (0x0006216d) sat_plugin_idle_act4_pane_t3

0xd19e,	// (0x00062180) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd19e,	// (0x00062180) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x00064d73) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x00064d73) sat_plugin_idle_act4_pane_t

0x4d43,	// (0x00059d25) popup_battery_window_ParamLimits

0x4d43,	// (0x00059d25) popup_battery_window

0xc1ac,	// (0x0006118e) bg_popup_sub_pane_cp25_ParamLimits

0xc1ac,	// (0x0006118e) bg_popup_sub_pane_cp25

0xd1b1,	// (0x00062193) popup_battery_window_g1_ParamLimits

0xd1b1,	// (0x00062193) popup_battery_window_g1

0xd1bd,	// (0x0006219f) popup_battery_window_t1_ParamLimits

0xd1bd,	// (0x0006219f) popup_battery_window_t1

0xd1cf,	// (0x000621b1) popup_battery_window_t2_ParamLimits

0xd1cf,	// (0x000621b1) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x00064d7c) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x00064d7c) popup_battery_window_t

0x6090,	// (0x0005b072) midp_canvas_pane_ParamLimits

0x60f2,	// (0x0005b0d4) midp_keypad_pane_ParamLimits

0x60f2,	// (0x0005b0d4) midp_keypad_pane

0x6496,	// (0x0005b478) main_midp_pane_ParamLimits

0xa911,	// (0x0005f8f3) signal_pane_g2_cp_ParamLimits

0xd1ec,	// (0x000621ce) aid_size_cell_midp_keypad_ParamLimits

0xd1ec,	// (0x000621ce) aid_size_cell_midp_keypad

0xd206,	// (0x000621e8) midp_keyp_game_grid_pane_ParamLimits

0xd206,	// (0x000621e8) midp_keyp_game_grid_pane

0xd226,	// (0x00062208) midp_keyp_rocker_pane_ParamLimits

0xd226,	// (0x00062208) midp_keyp_rocker_pane

0xd251,	// (0x00062233) midp_keyp_sk_left_pane_ParamLimits

0xd251,	// (0x00062233) midp_keyp_sk_left_pane

0xd2ab,	// (0x0006228d) midp_keyp_sk_right_pane_ParamLimits

0xd2ab,	// (0x0006228d) midp_keyp_sk_right_pane

0xbffd,	// (0x00060fdf) bg_button_pane_cp03

0xd305,	// (0x000622e7) midp_keyp_sk_left_pane_g1

0xbffd,	// (0x00060fdf) bg_button_pane_cp04

0xd305,	// (0x000622e7) midp_keyp_sk_right_pane_g1

0xae12,	// (0x0005fdf4) midp_keyp_rocker_pane_g1

0xd30e,	// (0x000622f0) keyp_game_cell_pane_ParamLimits

0xd30e,	// (0x000622f0) keyp_game_cell_pane

0xbffd,	// (0x00060fdf) bg_button_pane_cp02

0xd321,	// (0x00062303) keyp_game_cell_pane_g1

0x4d8d,	// (0x00059d6f) popup_fep_vkb2_window_ParamLimits

0x4d8d,	// (0x00059d6f) popup_fep_vkb2_window

0x718e,	// (0x0005c170) aid_size_cell_vkb2_ParamLimits

0x718e,	// (0x0005c170) aid_size_cell_vkb2

0x71e2,	// (0x0005c1c4) popup_fep_vkb2_window_g1_ParamLimits

0x71e2,	// (0x0005c1c4) popup_fep_vkb2_window_g1

0x722a,	// (0x0005c20c) vkb2_area_bottom_pane_ParamLimits

0x722a,	// (0x0005c20c) vkb2_area_bottom_pane

0x727e,	// (0x0005c260) vkb2_area_keypad_pane_ParamLimits

0x727e,	// (0x0005c260) vkb2_area_keypad_pane

0x72c4,	// (0x0005c2a6) vkb2_area_top_pane_ParamLimits

0x72c4,	// (0x0005c2a6) vkb2_area_top_pane

0x733e,	// (0x0005c320) vkb2_top_entry_pane_ParamLimits

0x733e,	// (0x0005c320) vkb2_top_entry_pane

0x7368,	// (0x0005c34a) vkb2_top_grid_left_pane_ParamLimits

0x7368,	// (0x0005c34a) vkb2_top_grid_left_pane

0x7386,	// (0x0005c368) vkb2_top_grid_right_pane_ParamLimits

0x7386,	// (0x0005c368) vkb2_top_grid_right_pane

0x73a4,	// (0x0005c386) vkb2_cell_keypad_pane_ParamLimits

0x73a4,	// (0x0005c386) vkb2_cell_keypad_pane

0x7475,	// (0x0005c457) vkb2_area_bottom_grid_pane_ParamLimits

0x7475,	// (0x0005c457) vkb2_area_bottom_grid_pane

0x749b,	// (0x0005c47d) vkb2_area_bottom_pane_g1_ParamLimits

0x749b,	// (0x0005c47d) vkb2_area_bottom_pane_g1

0x74bf,	// (0x0005c4a1) vkb2_area_bottom_pane_g2_ParamLimits

0x74bf,	// (0x0005c4a1) vkb2_area_bottom_pane_g2

0x74ed,	// (0x0005c4cf) vkb2_area_bottom_pane_g3_ParamLimits

0x74ed,	// (0x0005c4cf) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x00064d81) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x00064d81) vkb2_area_bottom_pane_g

0x754e,	// (0x0005c530) vkb2_top_cell_left_pane_ParamLimits

0x754e,	// (0x0005c530) vkb2_top_cell_left_pane

0xd332,	// (0x00062314) vkb2_top_entry_pane_g1_ParamLimits

0xd332,	// (0x00062314) vkb2_top_entry_pane_g1

0xd340,	// (0x00062322) vkb2_top_entry_pane_t1_ParamLimits

0xd340,	// (0x00062322) vkb2_top_entry_pane_t1

0xd372,	// (0x00062354) vkb2_top_entry_pane_t2_ParamLimits

0xd372,	// (0x00062354) vkb2_top_entry_pane_t2

0xd3a4,	// (0x00062386) vkb2_top_entry_pane_t3_ParamLimits

0xd3a4,	// (0x00062386) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x00064d88) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x00064d88) vkb2_top_entry_pane_t

0x759b,	// (0x0005c57d) vkb2_top_grid_right_pane_g1_ParamLimits

0x759b,	// (0x0005c57d) vkb2_top_grid_right_pane_g1

0x75b1,	// (0x0005c593) vkb2_top_grid_right_pane_g2_ParamLimits

0x75b1,	// (0x0005c593) vkb2_top_grid_right_pane_g2

0x75c9,	// (0x0005c5ab) vkb2_top_grid_right_pane_g3_ParamLimits

0x75c9,	// (0x0005c5ab) vkb2_top_grid_right_pane_g3

0x75e1,	// (0x0005c5c3) vkb2_top_grid_right_pane_g4_ParamLimits

0x75e1,	// (0x0005c5c3) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x00064d8f) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x00064d8f) vkb2_top_grid_right_pane_g

0x75f7,	// (0x0005c5d9) vkb2_top_cell_left_pane_g1

0x760e,	// (0x0005c5f0) vkb2_cell_keypad_pane_g1_ParamLimits

0x760e,	// (0x0005c5f0) vkb2_cell_keypad_pane_g1

0xd3c8,	// (0x000623aa) vkb2_cell_keypad_pane_t1_ParamLimits

0xd3c8,	// (0x000623aa) vkb2_cell_keypad_pane_t1

0x761c,	// (0x0005c5fe) vkb2_cell_bottom_grid_pane_ParamLimits

0x761c,	// (0x0005c5fe) vkb2_cell_bottom_grid_pane

0x7655,	// (0x0005c637) vkb2_cell_bottom_grid_pane_g1

0xcf80,	// (0x00061f62) aid_call2_pane_cp02

0xcf88,	// (0x00061f6a) aid_call_pane_cp02

0xcf90,	// (0x00061f72) clock_digital_number_pane_cp10

0xcf98,	// (0x00061f7a) clock_digital_number_pane_cp11

0xcfa0,	// (0x00061f82) clock_digital_number_pane_cp12

0xcfa8,	// (0x00061f8a) clock_digital_number_pane_cp13

0xcfb0,	// (0x00061f92) clock_digital_separator_pane_cp10

0xf1aa,	// (0x0006418c) popup_clock_digital_analogue_window_cp2_g1

0xf1aa,	// (0x0006418c) popup_clock_digital_analogue_window_cp2_g2

0xcfb8,	// (0x00061f9a) popup_clock_digital_analogue_window_cp2_g3

0xf1aa,	// (0x0006418c) popup_clock_digital_analogue_window_cp2_g4

0xcfb8,	// (0x00061f9a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x00064d44) popup_clock_digital_analogue_window_cp2_g

0xcfc0,	// (0x00061fa2) popup_clock_digital_analogue_window_cp2_t1

0xcfce,	// (0x00061fb0) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x00064d4f) popup_clock_digital_analogue_window_cp2_t

0xae12,	// (0x0005fdf4) clock_digital_number_pane_cp10_g1

0xae12,	// (0x0005fdf4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00064b2b) clock_digital_number_pane_cp10_g

0xae12,	// (0x0005fdf4) clock_digital_separator_pane_cp10_g1

0xae12,	// (0x0005fdf4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00064b2b) clock_digital_separator_pane_cp10_g

0xcdfb,	// (0x00061ddd) uniindi_top_pane_g3

0xce0c,	// (0x00061dee) uniindi_top_pane_g4

0x742f,	// (0x0005c411) vkb2_row_keypad_pane_ParamLimits

0x742f,	// (0x0005c411) vkb2_row_keypad_pane

0x7671,	// (0x0005c653) vkb2_cell_t_keypad_pane_ParamLimits

0x7671,	// (0x0005c653) vkb2_cell_t_keypad_pane

0x7681,	// (0x0005c663) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7681,	// (0x0005c663) vkb2_cell_t_keypad_pane_cp08

0x7696,	// (0x0005c678) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7696,	// (0x0005c678) vkb2_cell_t_keypad_pane_cp09

0x76aa,	// (0x0005c68c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x76aa,	// (0x0005c68c) vkb2_cell_t_keypad_pane_cp01

0x76bb,	// (0x0005c69d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x76bb,	// (0x0005c69d) vkb2_cell_t_keypad_pane_cp02

0x76cc,	// (0x0005c6ae) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x76cc,	// (0x0005c6ae) vkb2_cell_t_keypad_pane_cp03

0x76dd,	// (0x0005c6bf) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x76dd,	// (0x0005c6bf) vkb2_cell_t_keypad_pane_cp04

0x76ee,	// (0x0005c6d0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x76ee,	// (0x0005c6d0) vkb2_cell_t_keypad_pane_cp05

0x76ff,	// (0x0005c6e1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x76ff,	// (0x0005c6e1) vkb2_cell_t_keypad_pane_cp06

0x7712,	// (0x0005c6f4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7712,	// (0x0005c6f4) vkb2_cell_t_keypad_pane_cp07

0x7727,	// (0x0005c709) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7727,	// (0x0005c709) vkb2_cell_t_keypad_pane_cp10

0x6de1,	// (0x0005bdc3) vkb2_cell_t_keypad_pane_g1

0xd3df,	// (0x000623c1) vkb2_cell_t_keypad_pane_t1

0x4c7e,	// (0x00059c60) popup_grid_graphic2_window

0xd3f1,	// (0x000623d3) aid_size_cell_graphic2_ParamLimits

0xd3f1,	// (0x000623d3) aid_size_cell_graphic2

0xd429,	// (0x0006240b) bg_popup_window_pane_cp21_ParamLimits

0xd429,	// (0x0006240b) bg_popup_window_pane_cp21

0xd437,	// (0x00062419) graphic2_pages_pane_ParamLimits

0xd437,	// (0x00062419) graphic2_pages_pane

0xd47d,	// (0x0006245f) grid_graphic2_control_pane_ParamLimits

0xd47d,	// (0x0006245f) grid_graphic2_control_pane

0xd4bb,	// (0x0006249d) grid_graphic2_pane_ParamLimits

0xd4bb,	// (0x0006249d) grid_graphic2_pane

0xd531,	// (0x00062513) cell_graphic2_pane

0xbffd,	// (0x00060fdf) main_comp_mode_pane

0xc66c,	// (0x0006164e) list_ai3_gene_pane_ParamLimits

0xca34,	// (0x00061a16) bg_popup_window_pane_cp19_ParamLimits

0xca40,	// (0x00061a22) bg_touch_area_indi_pane_ParamLimits

0xca40,	// (0x00061a22) bg_touch_area_indi_pane

0xca56,	// (0x00061a38) bg_touch_area_indi_pane_cp01_ParamLimits

0xca56,	// (0x00061a38) bg_touch_area_indi_pane_cp01

0xca6e,	// (0x00061a50) bg_touch_area_indi_pane_cp02_ParamLimits

0xca6e,	// (0x00061a50) bg_touch_area_indi_pane_cp02

0xca88,	// (0x00061a6a) bg_touch_area_indi_pane_cp03_ParamLimits

0xca88,	// (0x00061a6a) bg_touch_area_indi_pane_cp03

0xcaa2,	// (0x00061a84) popup_slider_window_g1_ParamLimits

0xcabe,	// (0x00061aa0) popup_slider_window_g2_ParamLimits

0xcada,	// (0x00061abc) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x00064cd9) popup_slider_window_g_ParamLimits

0xcb36,	// (0x00061b18) popup_slider_window_t1_ParamLimits

0xcbaa,	// (0x00061b8c) small_volume_slider_vertical_pane_ParamLimits

0xd531,	// (0x00062513) cell_graphic2_pane_ParamLimits

0xd583,	// (0x00062565) bg_button_pane_cp10_ParamLimits

0xd583,	// (0x00062565) bg_button_pane_cp10

0xd598,	// (0x0006257a) bg_button_pane_cp11_ParamLimits

0xd598,	// (0x0006257a) bg_button_pane_cp11

0xd5ad,	// (0x0006258f) graphic2_pages_pane_g1_ParamLimits

0xd5ad,	// (0x0006258f) graphic2_pages_pane_g1

0xd5c8,	// (0x000625aa) graphic2_pages_pane_g2_ParamLimits

0xd5c8,	// (0x000625aa) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x00064d9d) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x00064d9d) graphic2_pages_pane_g

0xd5e0,	// (0x000625c2) graphic2_pages_pane_t1_ParamLimits

0xd5e0,	// (0x000625c2) graphic2_pages_pane_t1

0xd5f6,	// (0x000625d8) cell_graphic2_control_pane_ParamLimits

0xd5f6,	// (0x000625d8) cell_graphic2_control_pane

0xd619,	// (0x000625fb) cell_graphic2_pane_g1_ParamLimits

0xd619,	// (0x000625fb) cell_graphic2_pane_g1

0xd626,	// (0x00062608) cell_graphic2_pane_g2_ParamLimits

0xd626,	// (0x00062608) cell_graphic2_pane_g2

0xd633,	// (0x00062615) cell_graphic2_pane_g3_ParamLimits

0xd633,	// (0x00062615) cell_graphic2_pane_g3

0xd640,	// (0x00062622) cell_graphic2_pane_g4_ParamLimits

0xd640,	// (0x00062622) cell_graphic2_pane_g4

0xd64d,	// (0x0006262f) cell_graphic2_pane_g5_ParamLimits

0xd64d,	// (0x0006262f) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x00064da2) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x00064da2) cell_graphic2_pane_g

0xd668,	// (0x0006264a) cell_graphic2_pane_t1_ParamLimits

0xd668,	// (0x0006264a) cell_graphic2_pane_t1

0x86b5,	// (0x0005d697) grid_highlight_pane_cp11_ParamLimits

0x86b5,	// (0x0005d697) grid_highlight_pane_cp11

0xc1ac,	// (0x0006118e) bg_button_pane_cp05

0xd691,	// (0x00062673) cell_graphic2_control_pane_g1

0xae12,	// (0x0005fdf4) bg_touch_area_indi_pane_g1

0xd6b9,	// (0x0006269b) aid_cmod_rocker_key_size

0xd6c3,	// (0x000626a5) aid_cmode_itu_key_size

0xd6cd,	// (0x000626af) main_cmode_video_pane

0xd6d7,	// (0x000626b9) main_comp_mode_itu_pane

0xd6e3,	// (0x000626c5) main_comp_mode_rocker_pane

0xd6ef,	// (0x000626d1) cell_cmode_rocker_pane_ParamLimits

0xd6ef,	// (0x000626d1) cell_cmode_rocker_pane

0xd703,	// (0x000626e5) cell_cmode_itu_pane_ParamLimits

0xd703,	// (0x000626e5) cell_cmode_itu_pane

0xecc8,	// (0x00063caa) bg_button_pane_cp06_ParamLimits

0xecc8,	// (0x00063caa) bg_button_pane_cp06

0xb08d,	// (0x0006006f) cell_cmode_rocker_pane_g1_ParamLimits

0xb08d,	// (0x0006006f) cell_cmode_rocker_pane_g1

0xcc51,	// (0x00061c33) cell_cmode_rocker_pane_g2_ParamLimits

0xcc51,	// (0x00061c33) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x00064db2) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x00064db2) cell_cmode_rocker_pane_g

0xbffd,	// (0x00060fdf) bg_button_pane_cp07

0xd71a,	// (0x000626fc) cell_cmode_itu_pane_g1

0xd723,	// (0x00062705) cell_cmode_itu_pane_t1

0xd731,	// (0x00062713) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x00064db7) cell_cmode_itu_pane_t

0xce7f,	// (0x00061e61) aid_touch_ctrl_left

0xce87,	// (0x00061e69) aid_touch_ctrl_right

0xbffd,	// (0x00060fdf) compa_mode_pane

0xd73f,	// (0x00062721) aid_cmod_rocker_key_size_cp

0xd749,	// (0x0006272b) aid_cmode_itu_key_size_cp

0xd753,	// (0x00062735) compa_mode_pane_g1

0xd75b,	// (0x0006273d) compa_mode_pane_g2

0xd763,	// (0x00062745) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x00064dbc) compa_mode_pane_g

0xd76b,	// (0x0006274d) main_comp_mode_itu_pane_cp

0xd773,	// (0x00062755) main_comp_mode_rocker_pane_cp

0xd77b,	// (0x0006275d) cell_cmode_itu_pane_cp_ParamLimits

0xd77b,	// (0x0006275d) cell_cmode_itu_pane_cp

0xd790,	// (0x00062772) cell_cmode_rocker_pane_cp_ParamLimits

0xd790,	// (0x00062772) cell_cmode_rocker_pane_cp

0xecc8,	// (0x00063caa) bg_button_pane_cp06_cp_ParamLimits

0xecc8,	// (0x00063caa) bg_button_pane_cp06_cp

0xb08d,	// (0x0006006f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb08d,	// (0x0006006f) cell_cmode_rocker_pane_g1_cp

0xae12,	// (0x0005fdf4) cell_cmode_rocker_pane_g2_cp

0xbffd,	// (0x00060fdf) bg_button_pane_cp07_cp

0xd7a2,	// (0x00062784) cell_cmode_itu_pane_g1_cp

0xd7ab,	// (0x0006278d) cell_cmode_itu_pane_t1_cp

0xd7ab,	// (0x0006278d) cell_cmode_itu_pane_t2_cp

0x9b7e,	// (0x0005eb60) settings_code_pane_cp2

0xc06b,	// (0x0006104d) bg_popup_window_pane_cp3_ParamLimits

0xc39a,	// (0x0006137c) heading_pane_cp3_ParamLimits

0xc3a6,	// (0x00061388) listscroll_popup_graphic_pane_ParamLimits

0x6b74,	// (0x0005bb56) fep_hwr_aid_pane_ParamLimits

0x70e7,	// (0x0005c0c9) aid_touch_sctrl_top_ParamLimits

0x7102,	// (0x0005c0e4) sctrl_sk_top_pane_g1_ParamLimits

0x6de1,	// (0x0005bdc3) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x00064cf2) sctrl_sk_top_pane_g_ParamLimits

0x710f,	// (0x0005c0f1) sctrl_sk_top_pane_t1_ParamLimits

0x70e7,	// (0x0005c0c9) aid_touch_sctrl_bottom_ParamLimits

0x710f,	// (0x0005c0f1) sctrl_sk_bottom_pane_t1_ParamLimits

0xcdc5,	// (0x00061da7) aid_area_touch_clock

0x7306,	// (0x0005c2e8) aid_vkb2_area_top_pane_cell_ParamLimits

0x7306,	// (0x0005c2e8) aid_vkb2_area_top_pane_cell

0x7451,	// (0x0005c433) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7451,	// (0x0005c433) aid_vkb2_area_bottom_pane_cell

0xd32a,	// (0x0006230c) popup_char_count_window

0xd7b9,	// (0x0006279b) popup_char_count_window_g1

0xd7c2,	// (0x000627a4) popup_char_count_window_g2

0xd7cb,	// (0x000627ad) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x00064dc3) popup_char_count_window_g

0xd7d4,	// (0x000627b6) popup_char_count_window_t1

0x71c0,	// (0x0005c1a2) popup_fep_char_preview_window_ParamLimits

0x71c0,	// (0x0005c1a2) popup_fep_char_preview_window

0x7324,	// (0x0005c306) vkb2_top_candi_pane_ParamLimits

0x7324,	// (0x0005c306) vkb2_top_candi_pane

0xd7e2,	// (0x000627c4) cell_vkb2_top_candi_pane_ParamLimits

0xd7e2,	// (0x000627c4) cell_vkb2_top_candi_pane

0x773c,	// (0x0005c71e) bg_popup_fep_char_preview_window_ParamLimits

0x773c,	// (0x0005c71e) bg_popup_fep_char_preview_window

0x774a,	// (0x0005c72c) popup_fep_char_preview_window_t1_ParamLimits

0x774a,	// (0x0005c72c) popup_fep_char_preview_window_t1

0xd833,	// (0x00062815) bg_popup_fep_char_preview_window_g1

0xd83b,	// (0x0006281d) bg_popup_fep_char_preview_window_g2

0xd843,	// (0x00062825) bg_popup_fep_char_preview_window_g3

0xd84b,	// (0x0006282d) bg_popup_fep_char_preview_window_g4

0xd853,	// (0x00062835) bg_popup_fep_char_preview_window_g5

0x7784,	// (0x0005c766) bg_popup_fep_char_preview_window_g6

0xd85b,	// (0x0006283d) bg_popup_fep_char_preview_window_g7

0xd863,	// (0x00062845) bg_popup_fep_char_preview_window_g8

0xd86b,	// (0x0006284d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x00064dca) bg_popup_fep_char_preview_window_g

0x6de1,	// (0x0005bdc3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6de1,	// (0x0005bdc3) cell_vkb2_top_candi_pane_g1

0x6def,	// (0x0005bdd1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6def,	// (0x0005bdd1) cell_vkb2_top_candi_pane_g2

0xc635,	// (0x00061617) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc635,	// (0x00061617) cell_vkb2_top_candi_pane_g3

0x778c,	// (0x0005c76e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x778c,	// (0x0005c76e) cell_vkb2_top_candi_pane_g4

0xb5ac,	// (0x0006058e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb5ac,	// (0x0006058e) cell_vkb2_top_candi_pane_g5

0x77ad,	// (0x0005c78f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x77ad,	// (0x0005c78f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x00064ddd) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x00064ddd) cell_vkb2_top_candi_pane_g

0x77bb,	// (0x0005c79d) cell_vkb2_top_candi_pane_t1

0x6948,	// (0x0005b92a) aid_size_touch_slider_mark_ParamLimits

0x6948,	// (0x0005b92a) aid_size_touch_slider_mark

0xd46d,	// (0x0006244f) grid_graphic2_catg_pane_ParamLimits

0xd46d,	// (0x0006244f) grid_graphic2_catg_pane

0xd50b,	// (0x000624ed) popup_grid_graphic2_window_t1_ParamLimits

0xd50b,	// (0x000624ed) popup_grid_graphic2_window_t1

0xd51d,	// (0x000624ff) popup_grid_graphic2_window_t2_ParamLimits

0xd51d,	// (0x000624ff) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x00064d98) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x00064d98) popup_grid_graphic2_window_t

0xc1ac,	// (0x0006118e) bg_button_pane_cp05_ParamLimits

0xd691,	// (0x00062673) cell_graphic2_control_pane_g1_ParamLimits

0xd873,	// (0x00062855) cell_graphic2_catg_pane_ParamLimits

0xd873,	// (0x00062855) cell_graphic2_catg_pane

0xbffd,	// (0x00060fdf) bg_button_pane_cp12

0xd885,	// (0x00062867) cell_graphic2_catg_pane_g1

0xcd91,	// (0x00061d73) cell_tb_ext_pane_t1_ParamLimits

0x756e,	// (0x0005c550) vkb2_top_cell_right_narrow_pane_ParamLimits

0x756e,	// (0x0005c550) vkb2_top_cell_right_narrow_pane

0x7586,	// (0x0005c568) vkb2_top_cell_right_wide_pane_ParamLimits

0x7586,	// (0x0005c568) vkb2_top_cell_right_wide_pane

0x6b66,	// (0x0005bb48) bg_vkb2_func_pane_ParamLimits

0x6b66,	// (0x0005bb48) bg_vkb2_func_pane

0x75f7,	// (0x0005c5d9) vkb2_top_cell_left_pane_g1_ParamLimits

0x6b66,	// (0x0005bb48) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6b66,	// (0x0005bb48) bg_vkb2_fuc_pane_cp03

0x7655,	// (0x0005c637) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8649,	// (0x0005d62b) bg_vkb2_func_pane_g1

0x8651,	// (0x0005d633) bg_vkb2_func_pane_g2

0x8661,	// (0x0005d643) bg_vkb2_func_pane_g3

0x8659,	// (0x0005d63b) bg_vkb2_func_pane_g4

0x8669,	// (0x0005d64b) bg_vkb2_func_pane_g5

0x8671,	// (0x0005d653) bg_vkb2_func_pane_g6

0x8679,	// (0x0005d65b) bg_vkb2_func_pane_g7

0x8681,	// (0x0005d663) bg_vkb2_func_pane_g8

0x8641,	// (0x0005d623) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x00064dea) bg_vkb2_func_pane_g

0x6b66,	// (0x0005bb48) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6b66,	// (0x0005bb48) bg_vkb2_fuc_pane_cp01

0x75f7,	// (0x0005c5d9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x75f7,	// (0x0005c5d9) vkb2_top_cell_right_wide_pane_g1

0x6b66,	// (0x0005bb48) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6b66,	// (0x0005bb48) bg_vkb2_fuc_pane_cp02

0x7655,	// (0x0005c637) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7655,	// (0x0005c637) vkb2_top_cell_right_narrow_pane_g1

0xc9b2,	// (0x00061994) aid_touch_area_decrease_ParamLimits

0xc9b2,	// (0x00061994) aid_touch_area_decrease

0xc9d6,	// (0x000619b8) aid_touch_area_increase_ParamLimits

0xc9d6,	// (0x000619b8) aid_touch_area_increase

0xc9e2,	// (0x000619c4) aid_touch_area_mute_ParamLimits

0xc9e2,	// (0x000619c4) aid_touch_area_mute

0xca06,	// (0x000619e8) aid_touch_area_slider_ParamLimits

0xca06,	// (0x000619e8) aid_touch_area_slider

0xcaf6,	// (0x00061ad8) popup_slider_window_g4_ParamLimits

0xcaf6,	// (0x00061ad8) popup_slider_window_g4

0xcb02,	// (0x00061ae4) popup_slider_window_g5_ParamLimits

0xcb02,	// (0x00061ae4) popup_slider_window_g5

0xcb24,	// (0x00061b06) popup_slider_window_g6_ParamLimits

0xcb24,	// (0x00061b06) popup_slider_window_g6

0xcb64,	// (0x00061b46) popup_slider_window_t2_ParamLimits

0xcb64,	// (0x00061b46) popup_slider_window_t2

0x0001,

0xfd04,	// (0x00064ce6) popup_slider_window_t_ParamLimits

0xfd04,	// (0x00064ce6) popup_slider_window_t

0xcb7c,	// (0x00061b5e) slider_pane_ParamLimits

0xcb7c,	// (0x00061b5e) slider_pane

0xd88e,	// (0x00062870) slider_pane_g1_ParamLimits

0xd88e,	// (0x00062870) slider_pane_g1

0xd8a2,	// (0x00062884) slider_pane_g2_ParamLimits

0xd8a2,	// (0x00062884) slider_pane_g2

0xd8b8,	// (0x0006289a) slider_pane_g3_ParamLimits

0xd8b8,	// (0x0006289a) slider_pane_g3

0x0003,

0xfe1b,	// (0x00064dfd) slider_pane_g_ParamLimits

0xfe1b,	// (0x00064dfd) slider_pane_g

0x803a,	// (0x0005d01c) popup_tb_float_extension_window_ParamLimits

0x803a,	// (0x0005d01c) popup_tb_float_extension_window

0xd8e4,	// (0x000628c6) aid_size_cell_tb_float_ext

0xbffd,	// (0x00060fdf) bg_popup_sub_window_cp28

0xd8f0,	// (0x000628d2) grid_tb_float_ext_pane

0xd8fc,	// (0x000628de) cell_tb_float_ext_pane_ParamLimits

0xd8fc,	// (0x000628de) cell_tb_float_ext_pane

0xd918,	// (0x000628fa) cell_tb_float_ext_pane_g1

0xd921,	// (0x00062903) grid_highlight_pane_cp12

0x6cbb,	// (0x0005bc9d) cell_last_hwr_side_pane_ParamLimits

0x6cbb,	// (0x0005bc9d) cell_last_hwr_side_pane

0xae12,	// (0x0005fdf4) cell_last_hwr_side_pane_g1

0xd92a,	// (0x0006290c) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x00064e06) cell_last_hwr_side_pane_g

0x751d,	// (0x0005c4ff) vkb2_area_bottom_space_btn_pane_ParamLimits

0x751d,	// (0x0005c4ff) vkb2_area_bottom_space_btn_pane

0x6de1,	// (0x0005bdc3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd3df,	// (0x000623c1) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x77bb,	// (0x0005c79d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x77d9,	// (0x0005c7bb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x77d9,	// (0x0005c7bb) vkb2_area_bottom_space_btn_pane_g1

0x7813,	// (0x0005c7f5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7813,	// (0x0005c7f5) vkb2_area_bottom_space_btn_pane_g2

0x7849,	// (0x0005c82b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7849,	// (0x0005c82b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x00064e0b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x00064e0b) vkb2_area_bottom_space_btn_pane_g

0x6c2b,	// (0x0005bc0d) cel_fep_hwr_func_pane_ParamLimits

0x6c2b,	// (0x0005bc0d) cel_fep_hwr_func_pane

0x6c67,	// (0x0005bc49) cell_hwr_side_button_pane_ParamLimits

0x6c67,	// (0x0005bc49) cell_hwr_side_button_pane

0xcdc5,	// (0x00061da7) aid_area_touch_clock_ParamLimits

0xc1ac,	// (0x0006118e) bg_uniindi_top_pane_ParamLimits

0xcdd9,	// (0x00061dbb) uniindi_top_pane_g1_ParamLimits

0xcdef,	// (0x00061dd1) uniindi_top_pane_g2_ParamLimits

0xcdfb,	// (0x00061ddd) uniindi_top_pane_g3_ParamLimits

0xce0c,	// (0x00061dee) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x00064d1e) uniindi_top_pane_g_ParamLimits

0xce19,	// (0x00061dfb) uniindi_top_pane_t1_ParamLimits

0xc1ac,	// (0x0006118e) bg_vkb2_func_pane_cp01_ParamLimits

0xc1ac,	// (0x0006118e) bg_vkb2_func_pane_cp01

0xd933,	// (0x00062915) cel_fep_hwr_func_pane_g1_ParamLimits

0xd933,	// (0x00062915) cel_fep_hwr_func_pane_g1

0xc1ac,	// (0x0006118e) bg_vkb2_func_pane_cp02_ParamLimits

0xc1ac,	// (0x0006118e) bg_vkb2_func_pane_cp02

0xd933,	// (0x00062915) cell_hwr_side_button_pane_g1_ParamLimits

0xd933,	// (0x00062915) cell_hwr_side_button_pane_g1

0x84c2,	// (0x0005d4a4) status_pane_g4_ParamLimits

0x84c2,	// (0x0005d4a4) status_pane_g4

0x84dc,	// (0x0005d4be) status_pane_t1

0xabb1,	// (0x0005fb93) form2_midp_gauge_slider_cont_pane

0xabb9,	// (0x0005fb9b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xabcb,	// (0x0005fbad) form2_midp_gauge_slider_pane_t2_ParamLimits

0xabdd,	// (0x0005fbbf) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00064ade) form2_midp_gauge_slider_pane_t_ParamLimits

0xabef,	// (0x0005fbd1) form2_midp_slider_pane_ParamLimits

0x7180,	// (0x0005c162) aid_size_cell_func_vkb2_ParamLimits

0x7180,	// (0x0005c162) aid_size_cell_func_vkb2

0xd8d0,	// (0x000628b2) slider_pane_g4_ParamLimits

0xd8d0,	// (0x000628b2) slider_pane_g4

0x7893,	// (0x0005c875) form2_midp_gauge_slider_pane_t2_cp01

0x78a1,	// (0x0005c883) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x78a1,	// (0x0005c883) form2_midp_gauge_slider_pane_t3_cp01

0x78be,	// (0x0005c8a0) form2_midp_slider_pane_cp01

0xbffd,	// (0x00060fdf) navi_smil_pane

0xd96c,	// (0x0006294e) navi_smil_pane_g1

0xd974,	// (0x00062956) navi_smil_pane_t1

0xd941,	// (0x00062923) form2_midp_slider_pane_g1

0xd94a,	// (0x0006292c) form2_midp_slider_pane_g2

0xd952,	// (0x00062934) form2_midp_slider_pane_g3

0xd941,	// (0x00062923) form2_midp_slider_pane_g4

0xd95a,	// (0x0006293c) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x00064e14) form2_midp_slider_pane_g

0x7883,	// (0x0005c865) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7883,	// (0x0005c865) vkb2_area_bottom_space_btn_pane_g4

0x82d9,	// (0x0005d2bb) lc0_navi_pane_ParamLimits

0x82d9,	// (0x0005d2bb) lc0_navi_pane

0x8355,	// (0x0005d337) lc0_stat_indi_pane_ParamLimits

0x8355,	// (0x0005d337) lc0_stat_indi_pane

0x836c,	// (0x0005d34e) ls0_title_pane_ParamLimits

0x836c,	// (0x0005d34e) ls0_title_pane

0xecc8,	// (0x00063caa) bg_popup_sub_pane_cp14_ParamLimits

0xcdac,	// (0x00061d8e) list_uniindi_pane_ParamLimits

0xcdb8,	// (0x00061d9a) uniindi_top_pane_ParamLimits

0xce57,	// (0x00061e39) list_single_uniindi_pane_g1_ParamLimits

0xce6a,	// (0x00061e4c) list_single_uniindi_pane_t1_ParamLimits

0x78c7,	// (0x0005c8a9) lc0_stat_clock_pane_ParamLimits

0x78c7,	// (0x0005c8a9) lc0_stat_clock_pane

0xd982,	// (0x00062964) lc0_stat_indi_pane_g1_ParamLimits

0xd982,	// (0x00062964) lc0_stat_indi_pane_g1

0xd98f,	// (0x00062971) lc0_stat_indi_pane_g2_ParamLimits

0xd98f,	// (0x00062971) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x00064e1f) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x00064e1f) lc0_stat_indi_pane_g

0x78d4,	// (0x0005c8b6) lc0_uni_indicator_pane_ParamLimits

0x78d4,	// (0x0005c8b6) lc0_uni_indicator_pane

0xd99c,	// (0x0006297e) ls0_title_pane_g1_ParamLimits

0xd99c,	// (0x0006297e) ls0_title_pane_g1

0xd9b0,	// (0x00062992) ls0_title_pane_t1_ParamLimits

0xd9b0,	// (0x00062992) ls0_title_pane_t1

0x78e1,	// (0x0005c8c3) lc0_uni_indicator_pane_g1_ParamLimits

0x78e1,	// (0x0005c8c3) lc0_uni_indicator_pane_g1

0xd9e6,	// (0x000629c8) lc0_stat_clock_pane_t1

0xbffd,	// (0x00060fdf) main_ai5_pane

0xd9f4,	// (0x000629d6) ai5_sk_pane_ParamLimits

0xd9f4,	// (0x000629d6) ai5_sk_pane

0xda01,	// (0x000629e3) cell_ai5_widget_pane_ParamLimits

0xda01,	// (0x000629e3) cell_ai5_widget_pane

0xdf9d,	// (0x00062f7f) aid_size_cell_widget_grid

0xdfab,	// (0x00062f8d) bg_ai5_widget_pane_ParamLimits

0xdfab,	// (0x00062f8d) bg_ai5_widget_pane

0xe01f,	// (0x00063001) cell_ai5_widget_pane_g2

0xe02f,	// (0x00063011) cell_ai5_widget_pane_g3

0xe046,	// (0x00063028) cell_ai5_widget_pane_g4

0xe052,	// (0x00063034) cell_ai5_widget_pane_g5

0xe05e,	// (0x00063040) cell_ai5_widget_pane_g6

0xe06a,	// (0x0006304c) cell_ai5_widget_pane_g7

0xe0b2,	// (0x00063094) cell_ai5_widget_pane_t1_ParamLimits

0xe0b2,	// (0x00063094) cell_ai5_widget_pane_t1

0xe0cf,	// (0x000630b1) cell_ai5_widget_pane_t2_ParamLimits

0xe0cf,	// (0x000630b1) cell_ai5_widget_pane_t2

0xe0e7,	// (0x000630c9) cell_ai5_widget_pane_t3_ParamLimits

0xe0e7,	// (0x000630c9) cell_ai5_widget_pane_t3

0xe0ff,	// (0x000630e1) cell_ai5_widget_pane_t4_ParamLimits

0xe0ff,	// (0x000630e1) cell_ai5_widget_pane_t4

0xe11c,	// (0x000630fe) cell_ai5_widget_pane_t5_ParamLimits

0xe11c,	// (0x000630fe) cell_ai5_widget_pane_t5

0xe13b,	// (0x0006311d) cell_ai5_widget_pane_t6_ParamLimits

0xe13b,	// (0x0006311d) cell_ai5_widget_pane_t6

0xe14d,	// (0x0006312f) cell_ai5_widget_pane_t7_ParamLimits

0xe14d,	// (0x0006312f) cell_ai5_widget_pane_t7

0xe166,	// (0x00063148) cell_ai5_widget_pane_t8_ParamLimits

0xe166,	// (0x00063148) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x00064e39) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x00064e39) cell_ai5_widget_pane_t

0xe1ba,	// (0x0006319c) grid_ai5_widget_pane

0xecc8,	// (0x00063caa) highlight_cell_ai5_widget_pane_ParamLimits

0xecc8,	// (0x00063caa) highlight_cell_ai5_widget_pane

0xe1c8,	// (0x000631aa) ai5_sk_left_pane

0xe1d2,	// (0x000631b4) ai5_sk_middle_pane

0xe1dc,	// (0x000631be) ai5_sk_right_pane

0xe1e6,	// (0x000631c8) bg_ai5_widget_pane_g1_ParamLimits

0xe1e6,	// (0x000631c8) bg_ai5_widget_pane_g1

0xe1f2,	// (0x000631d4) bg_ai5_widget_pane_g2_ParamLimits

0xe1f2,	// (0x000631d4) bg_ai5_widget_pane_g2

0xe1fe,	// (0x000631e0) bg_ai5_widget_pane_g3_ParamLimits

0xe1fe,	// (0x000631e0) bg_ai5_widget_pane_g3

0xe20a,	// (0x000631ec) bg_ai5_widget_pane_g4_ParamLimits

0xe20a,	// (0x000631ec) bg_ai5_widget_pane_g4

0xe216,	// (0x000631f8) bg_ai5_widget_pane_g5_ParamLimits

0xe216,	// (0x000631f8) bg_ai5_widget_pane_g5

0xe222,	// (0x00063204) bg_ai5_widget_pane_g6_ParamLimits

0xe222,	// (0x00063204) bg_ai5_widget_pane_g6

0xe22e,	// (0x00063210) bg_ai5_widget_pane_g7_ParamLimits

0xe22e,	// (0x00063210) bg_ai5_widget_pane_g7

0xe23a,	// (0x0006321c) bg_ai5_widget_pane_g8_ParamLimits

0xe23a,	// (0x0006321c) bg_ai5_widget_pane_g8

0xe246,	// (0x00063228) bg_ai5_widget_pane_g9_ParamLimits

0xe246,	// (0x00063228) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x00064e4e) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x00064e4e) bg_ai5_widget_pane_g

0xe27e,	// (0x00063260) cell_shortcut_ai5_widget_pane_ParamLimits

0xe27e,	// (0x00063260) cell_shortcut_ai5_widget_pane

0x332f,	// (0x00058311) bg_cell_shortcut_ai5_widget_pane

0xe291,	// (0x00063273) cell_grid_ai5_widget_pane_g1

0x332f,	// (0x00058311) highlight_cell_shortcut_ai5_widget_pane

0x8649,	// (0x0005d62b) ai5_sk_left_pane_g1

0xe29a,	// (0x0006327c) ai5_sk_left_pane_g2

0xe2a2,	// (0x00063284) ai5_sk_left_pane_g3

0xe2aa,	// (0x0006328c) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x00064e61) ai5_sk_left_pane_g

0xe2b2,	// (0x00063294) ai5_sk_left_pane_t1

0x8651,	// (0x0005d633) ai5_sk_right_pane_g1

0xe2c0,	// (0x000632a2) ai5_sk_right_pane_g2

0xe2c8,	// (0x000632aa) ai5_sk_right_pane_g3

0xe2d0,	// (0x000632b2) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x00064e6a) ai5_sk_right_pane_g

0xe2d8,	// (0x000632ba) ai5_sk_right_pane_t1

0x8651,	// (0x0005d633) ai5_sk_middle_pane_g1

0x8649,	// (0x0005d62b) ai5_sk_middle_pane_g2

0x8669,	// (0x0005d64b) ai5_sk_middle_pane_g3

0xe2c8,	// (0x000632aa) ai5_sk_middle_pane_g4

0xe2a2,	// (0x00063284) ai5_sk_middle_pane_g5

0xe2e6,	// (0x000632c8) ai5_sk_middle_pane_g6

0xe2ee,	// (0x000632d0) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x00064e73) ai5_sk_middle_pane_g

0x815b,	// (0x0005d13d) aid_touch_area_size_lc0_ParamLimits

0x815b,	// (0x0005d13d) aid_touch_area_size_lc0

0x6e10,	// (0x0005bdf2) cell_hwr_candidate_pane_t1_ParamLimits

0x8179,	// (0x0005d15b) aid_touch_navi_pane

0x846c,	// (0x0005d44e) status_dt_navi_pane_ParamLimits

0x846c,	// (0x0005d44e) status_dt_navi_pane

0x8479,	// (0x0005d45b) status_dt_sta_pane_ParamLimits

0x8479,	// (0x0005d45b) status_dt_sta_pane

0xe2f6,	// (0x000632d8) dt_sta_controll_pane

0xe303,	// (0x000632e5) dt_sta_indi_pane

0xe314,	// (0x000632f6) dt_sta_title_pane

0xc1ac,	// (0x0006118e) bg_dt_sta_indi_pane_ParamLimits

0xc1ac,	// (0x0006118e) bg_dt_sta_indi_pane

0xe327,	// (0x00063309) dt_sta_battery_pane

0xe32f,	// (0x00063311) dt_sta_indi_pane_g1

0xe338,	// (0x0006331a) dt_sta_indi_pane_g2

0xe341,	// (0x00063323) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x00064e82) dt_sta_indi_pane_g

0xe34a,	// (0x0006332c) dt_sta_signal_pane

0xecc8,	// (0x00063caa) bg_dt_sta_title_pane_ParamLimits

0xecc8,	// (0x00063caa) bg_dt_sta_title_pane

0xe353,	// (0x00063335) dt_sta_title_pane_g1

0xe35b,	// (0x0006333d) dt_sta_title_pane_t1_ParamLimits

0xe35b,	// (0x0006333d) dt_sta_title_pane_t1

0xbffd,	// (0x00060fdf) bg_dt_sta_control_pane

0xe370,	// (0x00063352) dt_sta_controll_pane_g1

0xe379,	// (0x0006335b) bg_dt_sta_title_pane_g1

0xe382,	// (0x00063364) bg_dt_sta_title_pane_g2

0xe38b,	// (0x0006336d) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x00064e89) bg_dt_sta_title_pane_g

0xae12,	// (0x0005fdf4) bg_dt_sta_indi_pane_g1

0xe394,	// (0x00063376) dt_sta_signal_pane_g1

0xe39c,	// (0x0006337e) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x00064e90) dt_sta_signal_pane_g

0xe3a4,	// (0x00063386) dt_sta_battery_pane_g1

0xe3ad,	// (0x0006338f) dt_sta_battery_pane_t1

0xae12,	// (0x0005fdf4) bg_dt_sta_control_pane_g1

0xf22c,	// (0x0006420e) fep_china_uni_eep_pane

0xf234,	// (0x00064216) fep_china_uni_entry_pane_ParamLimits

0xf244,	// (0x00064226) popup_fep_china_uni_window_g1_ParamLimits

0xf254,	// (0x00064236) popup_fep_china_uni_window_g2_ParamLimits

0xf254,	// (0x00064236) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00064704) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00064704) popup_fep_china_uni_window_g

0xe3bc,	// (0x0006339e) fep_china_uni_eep_pane_g1

0xe3c4,	// (0x000633a6) fep_china_uni_eep_pane_t1

0xd963,	// (0x00062945) aid_touch_area_size_smil_player

0x82d1,	// (0x0005d2b3) lc0_clock_pane

0x84d0,	// (0x0005d4b2) status_pane_g5_ParamLimits

0x84d0,	// (0x0005d4b2) status_pane_g5

0x7cbf,	// (0x0005cca1) popup_keymap_window

0x848e,	// (0x0005d470) status_icon_pane

0xe02f,	// (0x00063011) cell_ai5_widget_pane_g3_ParamLimits

0xe046,	// (0x00063028) cell_ai5_widget_pane_g4_ParamLimits

0xe052,	// (0x00063034) cell_ai5_widget_pane_g5_ParamLimits

0xe076,	// (0x00063058) cell_ai5_widget_pane_g8_ParamLimits

0xe076,	// (0x00063058) cell_ai5_widget_pane_g8

0xe08a,	// (0x0006306c) cell_ai5_widget_pane_g9_ParamLimits

0xe08a,	// (0x0006306c) cell_ai5_widget_pane_g9

0xe09e,	// (0x00063080) cell_ai5_widget_pane_g10_ParamLimits

0xe09e,	// (0x00063080) cell_ai5_widget_pane_g10

0xe3d3,	// (0x000633b5) status_icon_pane_g1

0xbffd,	// (0x00060fdf) bg_popup_sub_pane_cp13

0xe3db,	// (0x000633bd) popup_keymap_window_t1

0x6312,	// (0x0005b2f4) control_pane_g6_ParamLimits

0x6312,	// (0x0005b2f4) control_pane_g6

0x631f,	// (0x0005b301) control_pane_g7_ParamLimits

0x631f,	// (0x0005b301) control_pane_g7

0x632c,	// (0x0005b30e) control_pane_g8_ParamLimits

0x632c,	// (0x0005b30e) control_pane_g8

0xe2f6,	// (0x000632d8) dt_sta_controll_pane_ParamLimits

0xe303,	// (0x000632e5) dt_sta_indi_pane_ParamLimits

0xe314,	// (0x000632f6) dt_sta_title_pane_ParamLimits

0xc5d0,	// (0x000615b2) aid_size_touch_scroll_bar_cale

0x4d5b,	// (0x00059d3d) popup_discreet_window_ParamLimits

0x4d5b,	// (0x00059d3d) popup_discreet_window

0x4de9,	// (0x00059dcb) popup_sk_window

0x8c91,	// (0x0005dc73) bg_popup_sub_pane_cp28_ParamLimits

0x8c91,	// (0x0005dc73) bg_popup_sub_pane_cp28

0xe3e9,	// (0x000633cb) popup_discreet_window_g1_ParamLimits

0xe3e9,	// (0x000633cb) popup_discreet_window_g1

0xe409,	// (0x000633eb) popup_discreet_window_t1_ParamLimits

0xe409,	// (0x000633eb) popup_discreet_window_t1

0xe427,	// (0x00063409) popup_discreet_window_t2_ParamLimits

0xe427,	// (0x00063409) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x00064e95) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x00064e95) popup_discreet_window_t

0x78f4,	// (0x0005c8d6) popup_sk_window_g1

0x78fe,	// (0x0005c8e0) popup_sk_window_g2

0x0001,

0xfeba,	// (0x00064e9c) popup_sk_window_g

0x7908,	// (0x0005c8ea) popup_sk_window_t1

0x7918,	// (0x0005c8fa) popup_sk_window_t1_copy1

0xe01f,	// (0x00063001) cell_ai5_widget_pane_g2_ParamLimits

0xe178,	// (0x0006315a) cell_ai5_widget_pane_t9_ParamLimits

0xe178,	// (0x0006315a) cell_ai5_widget_pane_t9

0xbffd,	// (0x00060fdf) main_fep_fshwr2_pane

0x7926,	// (0x0005c908) aid_fshwr2_btn_pane

0x7932,	// (0x0005c914) aid_fshwr2_syb_pane

0x793e,	// (0x0005c920) aid_fshwr2_txt_pane

0x794a,	// (0x0005c92c) fshwr2_func_candi_pane

0x795d,	// (0x0005c93f) fshwr2_hwr_syb_pane

0x796b,	// (0x0005c94d) fshwr2_icf_pane

0x4c7e,	// (0x00059c60) fshwr2_icf_bg_pane

0x799a,	// (0x0005c97c) fshwr2_icf_pane_t1_ParamLimits

0x799a,	// (0x0005c97c) fshwr2_icf_pane_t1

0xf1aa,	// (0x0006418c) fshwr2_func_candi_pane_g1

0xe479,	// (0x0006345b) fshwr2_func_candi_row_pane_ParamLimits

0xe479,	// (0x0006345b) fshwr2_func_candi_row_pane

0x79b2,	// (0x0005c994) cell_fshwr2_syb_pane_ParamLimits

0x79b2,	// (0x0005c994) cell_fshwr2_syb_pane

0x6de1,	// (0x0005bdc3) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6de1,	// (0x0005bdc3) fshwr2_hwr_syb_pane_g1

0x4c7e,	// (0x00059c60) bg_popup_call_pane_cp01

0x79c8,	// (0x0005c9aa) fshwr2_func_candi_cell_pane_ParamLimits

0x79c8,	// (0x0005c9aa) fshwr2_func_candi_cell_pane

0xe489,	// (0x0006346b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe489,	// (0x0006346b) fshwr2_func_candi_cell_bg_pane

0x79fc,	// (0x0005c9de) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x79fc,	// (0x0005c9de) fshwr2_func_candi_cell_pane_g1

0x7a1c,	// (0x0005c9fe) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7a1c,	// (0x0005c9fe) fshwr2_func_candi_cell_pane_t1

0x4c7e,	// (0x00059c60) bg_button_pane_cp08

0xe495,	// (0x00063477) cell_fshwr2_syb_bg_pane

0x7a2f,	// (0x0005ca11) cell_fshwr2_syb_bg_pane_g1

0x7a37,	// (0x0005ca19) cell_fshwr2_syb_bg_pane_t1

0xecc8,	// (0x00063caa) main_tmo_pane

0x97b5,	// (0x0005e797) uni_indicator_pane_g1_ParamLimits

0x97cb,	// (0x0005e7ad) uni_indicator_pane_g2_ParamLimits

0x97e1,	// (0x0005e7c3) uni_indicator_pane_g3_ParamLimits

0x97f6,	// (0x0005e7d8) uni_indicator_pane_g4_ParamLimits

0x97f6,	// (0x0005e7d8) uni_indicator_pane_g4

0x980a,	// (0x0005e7ec) uni_indicator_pane_g5_ParamLimits

0x980a,	// (0x0005e7ec) uni_indicator_pane_g5

0x980a,	// (0x0005e7ec) uni_indicator_pane_g6_ParamLimits

0x980a,	// (0x0005e7ec) uni_indicator_pane_g6

0xf926,	// (0x00064908) uni_indicator_pane_g_ParamLimits

0xc982,	// (0x00061964) popup_tmo_note_window_ParamLimits

0xc982,	// (0x00061964) popup_tmo_note_window

0x7162,	// (0x0005c144) fshwr2_bg_pane

0x7a0d,	// (0x0005c9ef) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7a0d,	// (0x0005c9ef) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x00064ea1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x00064ea1) fshwr2_func_candi_cell_pane_g

0x6dc9,	// (0x0005bdab) bg_popup_window_pane_cp01

0x7a46,	// (0x0005ca28) bg_popup_window_pane_g1_cp01

0xe49d,	// (0x0006347f) bg_popup_window_pane_cp22_ParamLimits

0xe49d,	// (0x0006347f) bg_popup_window_pane_cp22

0xe4ab,	// (0x0006348d) listscroll_tmo_link_pane_ParamLimits

0xe4ab,	// (0x0006348d) listscroll_tmo_link_pane

0xe4eb,	// (0x000634cd) popup_tmo_note_window_g1_ParamLimits

0xe4eb,	// (0x000634cd) popup_tmo_note_window_g1

0xe4f8,	// (0x000634da) tmo_note_info_pane_ParamLimits

0xe4f8,	// (0x000634da) tmo_note_info_pane

0xe512,	// (0x000634f4) list_tmo_note_info_pane_g1_ParamLimits

0xe512,	// (0x000634f4) list_tmo_note_info_pane_g1

0xe529,	// (0x0006350b) list_tmo_note_info_pane_g2_ParamLimits

0xe529,	// (0x0006350b) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x00064ea6) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x00064ea6) list_tmo_note_info_pane_g

0xe545,	// (0x00063527) list_tmo_note_info_text_pane_ParamLimits

0xe545,	// (0x00063527) list_tmo_note_info_text_pane

0xe5ca,	// (0x000635ac) list_tmo_link_pane

0xe5d7,	// (0x000635b9) scroll_pane_cp20

0xe5e4,	// (0x000635c6) list_single_tmo_link_pane_ParamLimits

0xe5e4,	// (0x000635c6) list_single_tmo_link_pane

0xe5f4,	// (0x000635d6) list_single_tmo_link_pane_t1

0xe602,	// (0x000635e4) list_tmo_note_info_text_pane_t1_ParamLimits

0xe602,	// (0x000635e4) list_tmo_note_info_text_pane_t1

0x58f5,	// (0x0005a8d7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x58f5,	// (0x0005a8d7) aid_size_touch_scroll_bar_cp01

0x5832,	// (0x0005a814) aid_size_touch_slider_marker

0x4dd1,	// (0x00059db3) popup_settings_window_ParamLimits

0x4dd1,	// (0x00059db3) popup_settings_window

0x34a2,	// (0x00058484) popup_candi_list_indi_window

0x8179,	// (0x0005d15b) aid_touch_navi_pane_ParamLimits

0x70bb,	// (0x0005c09d) rs_clock_indi_pane

0x70c4,	// (0x0005c0a6) sctrl_sk_bottom_pane_ParamLimits

0x70d5,	// (0x0005c0b7) sctrl_sk_top_pane_ParamLimits

0x71da,	// (0x0005c1bc) popup_fep_tooltip_window

0xdf9d,	// (0x00062f7f) aid_size_cell_widget_grid_ParamLimits

0xe00a,	// (0x00062fec) cell_ai5_widget_pane_g1_ParamLimits

0xe00a,	// (0x00062fec) cell_ai5_widget_pane_g1

0xe05e,	// (0x00063040) cell_ai5_widget_pane_g6_ParamLimits

0xe06a,	// (0x0006304c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x00064e24) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x00064e24) cell_ai5_widget_pane_g

0xe19c,	// (0x0006317e) cell_ai5_widget_pane_t10_ParamLimits

0xe19c,	// (0x0006317e) cell_ai5_widget_pane_t10

0xe1ba,	// (0x0006319c) grid_ai5_widget_pane_ParamLimits

0xe252,	// (0x00063234) cell_contacts_ai5_widget_pane_ParamLimits

0xe252,	// (0x00063234) cell_contacts_ai5_widget_pane

0xe43c,	// (0x0006341e) popup_discreet_window_t3_ParamLimits

0xe43c,	// (0x0006341e) popup_discreet_window_t3

0x7982,	// (0x0005c964) popup_fshwr2_char_preview_window_ParamLimits

0x7982,	// (0x0005c964) popup_fshwr2_char_preview_window

0xe563,	// (0x00063545) tmo_note_info_pane_t1

0xe578,	// (0x0006355a) tmo_note_info_pane_t2

0xe591,	// (0x00063573) tmo_note_info_pane_t3

0xe5a6,	// (0x00063588) tmo_note_info_pane_t4

0xe5b8,	// (0x0006359a) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x00064eab) tmo_note_info_pane_t

0xe5ca,	// (0x000635ac) list_tmo_link_pane_ParamLimits

0xe5d7,	// (0x000635b9) scroll_pane_cp20_ParamLimits

0x4c7e,	// (0x00059c60) bg_popup_fep_char_preview_window_cp01

0xe61b,	// (0x000635fd) popup_fshwr2_char_preview_window_t1

0xe629,	// (0x0006360b) popup_candi_list_indi_window_g1

0xe632,	// (0x00063614) bg_cell_contacts_ai5_widget_pane

0xe63e,	// (0x00063620) cell_contacts_ai5_widget_pane_g1

0xe653,	// (0x00063635) cell_contacts_ai5_widget_pane_g2

0xe65f,	// (0x00063641) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x00064eb6) cell_contacts_ai5_widget_pane_g

0xe66b,	// (0x0006364d) cell_contacts_ai5_widget_pane_t1

0xecc8,	// (0x00063caa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe6e2,	// (0x000636c4) settings_container_pane

0x332f,	// (0x00058311) listscroll_set_pane_copy1

0xa533,	// (0x0005f515) scroll_pane_cp121_copy1

0xe6ee,	// (0x000636d0) set_content_pane_copy1

0xe6f6,	// (0x000636d8) aid_height_set_list_copy1_ParamLimits

0xe6f6,	// (0x000636d8) aid_height_set_list_copy1

0x9a0a,	// (0x0005e9ec) aid_size_parent_copy1_ParamLimits

0x9a0a,	// (0x0005e9ec) aid_size_parent_copy1

0xe702,	// (0x000636e4) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe702,	// (0x000636e4) button_value_adjust_pane_cp6_copy1

0x6496,	// (0x0005b478) list_highlight_pane_cp2_copy1_ParamLimits

0x6496,	// (0x0005b478) list_highlight_pane_cp2_copy1

0xe716,	// (0x000636f8) list_set_pane_copy1_ParamLimits

0xe716,	// (0x000636f8) list_set_pane_copy1

0xe67d,	// (0x0006365f) main_pane_set_t1_copy1_ParamLimits

0xe67d,	// (0x0006365f) main_pane_set_t1_copy1

0xe6b7,	// (0x00063699) main_pane_set_t2_copy1_ParamLimits

0xe6b7,	// (0x00063699) main_pane_set_t2_copy1

0xe7dd,	// (0x000637bf) main_pane_set_t3_copy1

0xe7eb,	// (0x000637cd) main_pane_set_t4_copy1

0xe6d6,	// (0x000636b8) set_content_pane_g1_copy1_ParamLimits

0xe6d6,	// (0x000636b8) set_content_pane_g1_copy1

0xe7f9,	// (0x000637db) setting_code_pane_copy1

0xe801,	// (0x000637e3) setting_slider_graphic_pane_copy1

0xe801,	// (0x000637e3) setting_slider_pane_copy1

0xe801,	// (0x000637e3) setting_text_pane_copy1

0xe801,	// (0x000637e3) setting_volume_pane_copy1

0xe7f9,	// (0x000637db) settings_code_pane_cp2_copy1

0xe809,	// (0x000637eb) settings_code_pane_cp_copy1_ParamLimits

0xe809,	// (0x000637eb) settings_code_pane_cp_copy1

0x7a4f,	// (0x0005ca31) volume_set_pane_copy1

0xe81d,	// (0x000637ff) volume_set_pane_g10_copy1

0xe829,	// (0x0006380b) volume_set_pane_g1_copy1

0xe833,	// (0x00063815) volume_set_pane_g2_copy1

0xe83d,	// (0x0006381f) volume_set_pane_g3_copy1

0xe847,	// (0x00063829) volume_set_pane_g4_copy1

0xe851,	// (0x00063833) volume_set_pane_g5_copy1

0xe85b,	// (0x0006383d) volume_set_pane_g6_copy1

0xe865,	// (0x00063847) volume_set_pane_g7_copy1

0xe86f,	// (0x00063851) volume_set_pane_g8_copy1

0xe879,	// (0x0006385b) volume_set_pane_g9_copy1

0xc06b,	// (0x0006104d) bg_set_opt_pane_cp_copy1_ParamLimits

0xc06b,	// (0x0006104d) bg_set_opt_pane_cp_copy1

0x7a5b,	// (0x0005ca3d) setting_slider_pane_t1_copy1_ParamLimits

0x7a5b,	// (0x0005ca3d) setting_slider_pane_t1_copy1

0x7a79,	// (0x0005ca5b) setting_slider_pane_t2_copy1_ParamLimits

0x7a79,	// (0x0005ca5b) setting_slider_pane_t2_copy1

0x7a93,	// (0x0005ca75) setting_slider_pane_t3_copy1_ParamLimits

0x7a93,	// (0x0005ca75) setting_slider_pane_t3_copy1

0x7aab,	// (0x0005ca8d) slider_set_pane_copy1_ParamLimits

0x7aab,	// (0x0005ca8d) slider_set_pane_copy1

0xed23,	// (0x00063d05) set_opt_bg_pane_g1_copy2

0xed2b,	// (0x00063d0d) set_opt_bg_pane_g2_copy2

0xe883,	// (0x00063865) set_opt_bg_pane_g3_copy2

0xed3b,	// (0x00063d1d) set_opt_bg_pane_g4_copy2

0xed43,	// (0x00063d25) set_opt_bg_pane_g5_copy2

0xed4b,	// (0x00063d2d) set_opt_bg_pane_g6_copy2

0xe88d,	// (0x0006386f) set_opt_bg_pane_g7_copy2

0xe897,	// (0x00063879) set_opt_bg_pane_g8_copy2

0xe8a1,	// (0x00063883) set_opt_bg_pane_g9_copy2

0x7ac1,	// (0x0005caa3) aid_size_touch_slider_mark_copy1_ParamLimits

0x7ac1,	// (0x0005caa3) aid_size_touch_slider_mark_copy1

0xe8ab,	// (0x0006388d) slider_set_pane_g1_copy1

0x7ad5,	// (0x0005cab7) slider_set_pane_g2_copy1

0x6968,	// (0x0005b94a) slider_set_pane_g3_copy1_ParamLimits

0x6968,	// (0x0005b94a) slider_set_pane_g3_copy1

0x697c,	// (0x0005b95e) slider_set_pane_g4_copy1_ParamLimits

0x697c,	// (0x0005b95e) slider_set_pane_g4_copy1

0x6994,	// (0x0005b976) slider_set_pane_g5_copy1_ParamLimits

0x6994,	// (0x0005b976) slider_set_pane_g5_copy1

0x6968,	// (0x0005b94a) slider_set_pane_g6_copy1_ParamLimits

0x6968,	// (0x0005b94a) slider_set_pane_g6_copy1

0x7add,	// (0x0005cabf) slider_set_pane_g7_copy1_ParamLimits

0x7add,	// (0x0005cabf) slider_set_pane_g7_copy1

0xc011,	// (0x00060ff3) bg_set_opt_pane_cp2_copy1

0xe8b4,	// (0x00063896) setting_slider_graphic_pane_g1_copy1

0xe8bd,	// (0x0006389f) setting_slider_graphic_pane_t1_copy1

0xe8cd,	// (0x000638af) setting_slider_graphic_pane_t2_copy1

0xe8dd,	// (0x000638bf) slider_set_pane_cp_copy1

0xe8ed,	// (0x000638cf) input_focus_pane_cp1_copy1

0xe8f6,	// (0x000638d8) list_set_text_pane_copy1

0xe8fe,	// (0x000638e0) setting_text_pane_g1_copy1

0x3115,	// (0x000580f7) set_text_pane_t1_copy1

0xe8ed,	// (0x000638cf) input_focus_pane_cp2_copy1

0xe8fe,	// (0x000638e0) setting_code_pane_g1_copy1

0xe907,	// (0x000638e9) setting_code_pane_t1_copy1

0xe915,	// (0x000638f7) list_set_graphic_pane_copy1

0xc011,	// (0x00060ff3) bg_set_opt_pane_cp4_copy1

0x5fd1,	// (0x0005afb3) list_set_graphic_pane_g1_copy1_ParamLimits

0x5fd1,	// (0x0005afb3) list_set_graphic_pane_g1_copy1

0xe927,	// (0x00063909) list_set_graphic_pane_g2_copy1

0x5fe9,	// (0x0005afcb) list_set_graphic_pane_t1_copy1_ParamLimits

0x5fe9,	// (0x0005afcb) list_set_graphic_pane_t1_copy1

0xae12,	// (0x0005fdf4) rs_clock_indi_pane_g1

0xe92f,	// (0x00063911) rs_clock_indi_pane_t1

0xe93d,	// (0x0006391f) rs_indi_pane

0xe945,	// (0x00063927) rs_indi_pane_g1

0xe94e,	// (0x00063930) rs_indi_pane_g2

0xe957,	// (0x00063939) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x00064ebd) rs_indi_pane_g

0x332f,	// (0x00058311) bg_popup_preview_window_pane_cp03

0xe960,	// (0x00063942) popup_fep_tooltip_window_t1

0xbac9,	// (0x00060aab) popup_note2_window_g2_ParamLimits

0xbac9,	// (0x00060aab) popup_note2_window_g2

0x0001,

0xfc74,	// (0x00064c56) popup_note2_window_g_ParamLimits

0xfc74,	// (0x00064c56) popup_note2_window_g

0xbfd1,	// (0x00060fb3) bg_popup_sub_pane_cp11_ParamLimits

0xbfde,	// (0x00060fc0) cell_ai3_links_pane_g1_ParamLimits

0xc656,	// (0x00061638) cell_ai3_links_pane_t1

0x3115,	// (0x000580f7) set_text_pane_t1_copy1_ParamLimits

0x6068,	// (0x0005b04a) cell_graphic_popup_pane_cp2_ParamLimits

0x6068,	// (0x0005b04a) cell_graphic_popup_pane_cp2

0xe96e,	// (0x00063950) cell_graphic_popup_pane_g1_cp2

0xc3e3,	// (0x000613c5) cell_graphic_popup_pane_g2_cp2

0xe976,	// (0x00063958) cell_graphic_popup_pane_g3_cp2

0xe97e,	// (0x00063960) cell_graphic_popup_pane_t2_cp2

0xc3f4,	// (0x000613d6) grid_highlight_pane_cp3_cp2

0xefcc,	// (0x00063fae) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xecc8,	// (0x00063caa) main_tmo_pane_ParamLimits

0xc976,	// (0x00061958) popup_tmo_big_image_note_window

0xdff9,	// (0x00062fdb) cell_ai5_widget_list_pane

0xe001,	// (0x00062fe3) cell_ai5_widget_lrg_icon_pane

0xe563,	// (0x00063545) tmo_note_info_pane_t1_ParamLimits

0xe578,	// (0x0006355a) tmo_note_info_pane_t2_ParamLimits

0xe591,	// (0x00063573) tmo_note_info_pane_t3_ParamLimits

0xe5a6,	// (0x00063588) tmo_note_info_pane_t4_ParamLimits

0xe5b8,	// (0x0006359a) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x00064eab) tmo_note_info_pane_t_ParamLimits

0xe6e2,	// (0x000636c4) settings_container_pane_ParamLimits

0xe8e5,	// (0x000638c7) indicator_popup_pane_cp5

0xe8e5,	// (0x000638c7) indicator_popup_pane_cp6

0xe915,	// (0x000638f7) list_set_graphic_pane_copy1_ParamLimits

0xbffd,	// (0x00060fdf) bg_popup_window_pane_cp23

0xe98c,	// (0x0006396e) popup_tmo_big_image_note_window_g1

0xe998,	// (0x0006397a) popup_tmo_big_image_note_window_t1

0xe9a8,	// (0x0006398a) popup_tmo_big_image_note_window_t2

0xe9b8,	// (0x0006399a) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x00064ec4) popup_tmo_big_image_note_window_t

0xae12,	// (0x0005fdf4) cell_ai5_widget_lrg_icon_pane_g1

0xe9c8,	// (0x000639aa) cell_ai5_widget_lrg_icon_pane_t1

0xe9d6,	// (0x000639b8) cell_ai5_widget_list_row_pane_ParamLimits

0xe9d6,	// (0x000639b8) cell_ai5_widget_list_row_pane

0xe9ee,	// (0x000639d0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe9ee,	// (0x000639d0) cell_ai5_widget_list_row_pane_g1

0xe9fb,	// (0x000639dd) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe9fb,	// (0x000639dd) cell_ai5_widget_list_row_pane_t1

0xea26,	// (0x00063a08) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xea26,	// (0x00063a08) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee9,	// (0x00064ecb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x00064ecb) cell_ai5_widget_list_row_pane_t

0x4c7e,	// (0x00059c60) main_fep_vtchi_ss_pane

0xea6a,	// (0x00063a4c) popup_fep_char_pre_window

0xea72,	// (0x00063a54) popup_fep_ituss_window

0xea93,	// (0x00063a75) popup_fep_vkbss_window

0xeab4,	// (0x00063a96) grid_vkbss_keypad_pane_ParamLimits

0xeab4,	// (0x00063a96) grid_vkbss_keypad_pane

0xeac4,	// (0x00063aa6) ituss_keypad_pane

0x7aff,	// (0x0005cae1) aid_vkbss_key_offset_ParamLimits

0x7aff,	// (0x0005cae1) aid_vkbss_key_offset

0x7b0b,	// (0x0005caed) cell_vkbss_key_pane_ParamLimits

0x7b0b,	// (0x0005caed) cell_vkbss_key_pane

0xead3,	// (0x00063ab5) bg_cell_vkbss_key_g1_ParamLimits

0xead3,	// (0x00063ab5) bg_cell_vkbss_key_g1

0xeadf,	// (0x00063ac1) cell_vkbss_key_3p_pane_ParamLimits

0xeadf,	// (0x00063ac1) cell_vkbss_key_3p_pane

0xeaf9,	// (0x00063adb) cell_vkbss_key_g1_ParamLimits

0xeaf9,	// (0x00063adb) cell_vkbss_key_g1

0xeb13,	// (0x00063af5) cell_vkbss_key_t1_ParamLimits

0xeb13,	// (0x00063af5) cell_vkbss_key_t1

0x7b21,	// (0x0005cb03) cell_ituss_key_pane_ParamLimits

0x7b21,	// (0x0005cb03) cell_ituss_key_pane

0xeb3e,	// (0x00063b20) bg_cell_ituss_key_g1_ParamLimits

0xeb3e,	// (0x00063b20) bg_cell_ituss_key_g1

0xeb4a,	// (0x00063b2c) cell_ituss_key_pane_g1_ParamLimits

0xeb4a,	// (0x00063b2c) cell_ituss_key_pane_g1

0x7b32,	// (0x0005cb14) cell_ituss_key_pane_g2_ParamLimits

0x7b32,	// (0x0005cb14) cell_ituss_key_pane_g2

0x0002,

0xfef0,	// (0x00064ed2) cell_ituss_key_pane_g_ParamLimits

0xfef0,	// (0x00064ed2) cell_ituss_key_pane_g

0x7b5e,	// (0x0005cb40) cell_ituss_key_t1_ParamLimits

0x7b5e,	// (0x0005cb40) cell_ituss_key_t1

0x7b98,	// (0x0005cb7a) cell_ituss_key_t2_ParamLimits

0x7b98,	// (0x0005cb7a) cell_ituss_key_t2

0x7bc9,	// (0x0005cbab) cell_ituss_key_t3_ParamLimits

0x7bc9,	// (0x0005cbab) cell_ituss_key_t3

0x7b98,	// (0x0005cb7a) cell_ituss_key_t4_ParamLimits

0x7b98,	// (0x0005cb7a) cell_ituss_key_t4

0x0004,

0xfef7,	// (0x00064ed9) cell_ituss_key_t_ParamLimits

0xfef7,	// (0x00064ed9) cell_ituss_key_t

0xeb70,	// (0x00063b52) cell_vkbss_key_3p_pane_g1

0xeb78,	// (0x00063b5a) cell_vkbss_key_3p_pane_g2

0xeb80,	// (0x00063b62) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x00064ee4) cell_vkbss_key_3p_pane_g

0x4c7e,	// (0x00059c60) bg_popup_fep_char_preview_window_cp02

0x7c0c,	// (0x0005cbee) popup_fep_char_pre_window_t1

0xdf93,	// (0x00062f75) main_ai5_sk_pane

0xe632,	// (0x00063614) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe63e,	// (0x00063620) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe653,	// (0x00063635) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe65f,	// (0x00063641) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x00064eb6) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe66b,	// (0x0006364d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xecc8,	// (0x00063caa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeb88,	// (0x00063b6a) main_ai5_sk_pane_g1

0x8ac9,	// (0x0005daab) popup_query_code_window_g1

0xea88,	// (0x00063a6a) popup_fep_vkb_icf_pane

0xea9e,	// (0x00063a80) popup_fep_vtchi_icf_pane

0xeb91,	// (0x00063b73) bg_icf_pane

0xeb9d,	// (0x00063b7f) list_vkb_icf_pane

0xeba9,	// (0x00063b8b) bg_icf_pane_cp01

0xebbc,	// (0x00063b9e) vtchi_icf_list_pane

0xebcd,	// (0x00063baf) list_vkb_icf_pane_t1_ParamLimits

0xebcd,	// (0x00063baf) list_vkb_icf_pane_t1

0xebe3,	// (0x00063bc5) vtchi_icf_list_pane_t1_ParamLimits

0xebe3,	// (0x00063bc5) vtchi_icf_list_pane_t1

0xea72,	// (0x00063a54) popup_fep_ituss_window_ParamLimits

0xea9e,	// (0x00063a80) popup_fep_vtchi_icf_pane_ParamLimits

0xeac4,	// (0x00063aa6) ituss_keypad_pane_ParamLimits

0x7af3,	// (0x0005cad5) ituss_sks_pane

0xeb91,	// (0x00063b73) bg_icf_pane_ParamLimits

0xea4e,	// (0x00063a30) icf_edit_indi_pane_ParamLimits

0xea4e,	// (0x00063a30) icf_edit_indi_pane

0xeb9d,	// (0x00063b7f) list_vkb_icf_pane_ParamLimits

0xeba9,	// (0x00063b8b) bg_icf_pane_cp01_ParamLimits

0xea5d,	// (0x00063a3f) icf_edit_indi_pane_cp01_ParamLimits

0xea5d,	// (0x00063a3f) icf_edit_indi_pane_cp01

0xebc4,	// (0x00063ba6) vtchi_query_pane

0xb08d,	// (0x0006006f) icf_edit_indi_pane_g1_ParamLimits

0xb08d,	// (0x0006006f) icf_edit_indi_pane_g1

0xec52,	// (0x00063c34) icf_edit_indi_pane_g2_ParamLimits

0xec52,	// (0x00063c34) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00064efc) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00064efc) icf_edit_indi_pane_g

0xec61,	// (0x00063c43) icf_edit_indi_pane_t1

0xebfb,	// (0x00063bdd) bg_input_focus_pane_cp042

0xc5c7,	// (0x000615a9) vtchi_button_pane

0xec04,	// (0x00063be6) vtchi_query_pane_t1

0xec12,	// (0x00063bf4) vtchi_query_pane_t2

0xec20,	// (0x00063c02) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00064eeb) vtchi_query_pane_t

0x4c7e,	// (0x00059c60) bg_button_pane_cp13

0xec2e,	// (0x00063c10) vtchi_button_pane_g1

0x7c1b,	// (0x0005cbfd) ituss_sks_pane_g1

0x7c26,	// (0x0005cc08) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x00064ef2) ituss_sks_pane_g

0xec36,	// (0x00063c18) ituss_sks_pane_t1

0xec44,	// (0x00063c26) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00064ef7) ituss_sks_pane_t

0xa8c2,	// (0x0005f8a4) indicator_nsta_pane_cp_g1

0xa8cb,	// (0x0005f8ad) indicator_nsta_pane_cp_g2

0xa8d3,	// (0x0005f8b5) indicator_nsta_pane_cp_g3

0xa8db,	// (0x0005f8bd) indicator_nsta_pane_cp_g4

0xa8e3,	// (0x0005f8c5) indicator_nsta_pane_cp_g5

0xa8eb,	// (0x0005f8cd) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00064a94) indicator_nsta_pane_cp_g

0xd67e,	// (0x00062660) cell_graphic2_pane_t2_ParamLimits

0xd67e,	// (0x00062660) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x00064dad) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x00064dad) cell_graphic2_pane_t

0xd6ab,	// (0x0006268d) cell_graphic2_control_pane_t1

0x5d1b,	// (0x0005acfd) signal_pane_g3_ParamLimits

0x5d1b,	// (0x0005acfd) signal_pane_g3

0x5d2d,	// (0x0005ad0f) signal_pane_g4_ParamLimits

0x5d2d,	// (0x0005ad0f) signal_pane_g4

0xea38,	// (0x00063a1a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xea38,	// (0x00063a1a) cell_ai5_widget_list_row_pane_t3

0xeb5e,	// (0x00063b40) cell_ituss_key_pane_t1_ParamLimits

0xeb5e,	// (0x00063b40) cell_ituss_key_pane_t1

0x8746,	// (0x0005d728) form_field_data_wide_pane_vc_t2_ParamLimits

0x8746,	// (0x0005d728) form_field_data_wide_pane_vc_t2

0x875a,	// (0x0005d73c) form_field_data_wide_pane_vc_t3_ParamLimits

0x875a,	// (0x0005d73c) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x000647f0) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x000647f0) form_field_data_wide_pane_vc_t

0xa573,	// (0x0005f555) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa573,	// (0x0005f555) form_field_slider_wide_pane_vc_t3

0xa649,	// (0x0005f62b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa649,	// (0x0005f62b) form_field_popup_wide_pane_vc_t2

0xa660,	// (0x0005f642) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa660,	// (0x0005f642) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa1,	// (0x00064a83) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa1,	// (0x00064a83) form_field_popup_wide_pane_vc_t

0x7926,	// (0x0005c908) aid_fshwr2_btn_pane_ParamLimits

0x7932,	// (0x0005c914) aid_fshwr2_syb_pane_ParamLimits

0x793e,	// (0x0005c920) aid_fshwr2_txt_pane_ParamLimits

0x7162,	// (0x0005c144) fshwr2_bg_pane_ParamLimits

0x794a,	// (0x0005c92c) fshwr2_func_candi_pane_ParamLimits

0x795d,	// (0x0005c93f) fshwr2_hwr_syb_pane_ParamLimits

0x796b,	// (0x0005c94d) fshwr2_icf_pane_ParamLimits

0x9d28,	// (0x0005ed0a) list_double_graphic_pane_vc_g4_ParamLimits

0x9d28,	// (0x0005ed0a) list_double_graphic_pane_vc_g4

0x7b52,	// (0x0005cb34) cell_ituss_key_pane_g3_ParamLimits

0x7b52,	// (0x0005cb34) cell_ituss_key_pane_g3

0x7bfa,	// (0x0005cbdc) cell_ituss_key_t5_ParamLimits

0x7bfa,	// (0x0005cbdc) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

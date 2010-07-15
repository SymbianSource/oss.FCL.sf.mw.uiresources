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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000083a9 };

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
0x88a4,	// (0x00010c4d) Screen

0x88b6,	// (0x00010c5f) application_window_ParamLimits

0x88b6,	// (0x00010c5f) application_window

0x88ce,	// (0x00010c77) screen_g1

0x88d8,	// (0x00010c81) area_bottom_pane_ParamLimits

0x88d8,	// (0x00010c81) area_bottom_pane

0x893d,	// (0x00010ce6) area_top_pane_ParamLimits

0x893d,	// (0x00010ce6) area_top_pane

0x67d2,	// (0x0000eb7b) main_pane_ParamLimits

0x67d2,	// (0x0000eb7b) main_pane

0x89b5,	// (0x00010d5e) misc_graphics

0xa93b,	// (0x00012ce4) battery_pane_ParamLimits

0xa93b,	// (0x00012ce4) battery_pane

0xb62e,	// (0x000139d7) bg_status_flat_pane_g8

0xb636,	// (0x000139df) bg_status_flat_pane_g9

0xa9f0,	// (0x00012d99) context_pane_ParamLimits

0xa9f0,	// (0x00012d99) context_pane

0xab07,	// (0x00012eb0) navi_pane_ParamLimits

0xab07,	// (0x00012eb0) navi_pane

0xab84,	// (0x00012f2d) signal_pane_ParamLimits

0xab84,	// (0x00012f2d) signal_pane

0x0008,

0xf868,	// (0x00017c11) bg_status_flat_pane_g

0xabed,	// (0x00012f96) status_pane_g1_ParamLimits

0xabed,	// (0x00012f96) status_pane_g1

0xabf9,	// (0x00012fa2) status_pane_g2_ParamLimits

0xabf9,	// (0x00012fa2) status_pane_g2

0xac05,	// (0x00012fae) status_pane_g3_ParamLimits

0xac05,	// (0x00012fae) status_pane_g3

0x0004,

0xf79b,	// (0x00017b44) status_pane_g_ParamLimits

0xf79b,	// (0x00017b44) status_pane_g

0xac37,	// (0x00012fe0) title_pane_ParamLimits

0xac37,	// (0x00012fe0) title_pane

0xac74,	// (0x0001301d) uni_indicator_pane_ParamLimits

0xac74,	// (0x0001301d) uni_indicator_pane

0xa851,	// (0x00012bfa) bg_list_pane_ParamLimits

0xa851,	// (0x00012bfa) bg_list_pane

0xa871,	// (0x00012c1a) find_pane

0xa879,	// (0x00012c22) listscroll_app_pane_ParamLimits

0xa879,	// (0x00012c22) listscroll_app_pane

0xa885,	// (0x00012c2e) listscroll_form_pane

0xa88d,	// (0x00012c36) listscroll_gen_pane_ParamLimits

0xa88d,	// (0x00012c36) listscroll_gen_pane

0x6fd1,	// (0x0000f37a) listscroll_set_pane

0x9adb,	// (0x00011e84) main_idle_act_pane

0xa565,	// (0x0001290e) main_idle_trad_pane

0xa565,	// (0x0001290e) main_list_empty_pane

0xa8b4,	// (0x00012c5d) main_midp_pane

0xa8c0,	// (0x00012c69) main_pane_g1_ParamLimits

0xa8c0,	// (0x00012c69) main_pane_g1

0x6fe7,	// (0x0000f390) popup_ai_message_window_ParamLimits

0x6fe7,	// (0x0000f390) popup_ai_message_window

0x707d,	// (0x0000f426) popup_fep_china_uni_window_ParamLimits

0x707d,	// (0x0000f426) popup_fep_china_uni_window

0x70bb,	// (0x0000f464) popup_fep_japan_candidate_window_ParamLimits

0x70bb,	// (0x0000f464) popup_fep_japan_candidate_window

0x70d9,	// (0x0000f482) popup_fep_japan_predictive_window_ParamLimits

0x70d9,	// (0x0000f482) popup_fep_japan_predictive_window

0x7105,	// (0x0000f4ae) popup_find_window

0x7112,	// (0x0000f4bb) popup_grid_graphic_window_ParamLimits

0x7112,	// (0x0000f4bb) popup_grid_graphic_window

0x7130,	// (0x0000f4d9) popup_large_graphic_colour_window

0x714f,	// (0x0000f4f8) popup_menu_window_ParamLimits

0x714f,	// (0x0000f4f8) popup_menu_window

0x7287,	// (0x0000f630) popup_note_image_window

0x7275,	// (0x0000f61e) popup_note_wait_window_ParamLimits

0x7275,	// (0x0000f61e) popup_note_wait_window

0x7275,	// (0x0000f61e) popup_note_window_ParamLimits

0x7275,	// (0x0000f61e) popup_note_window

0x72db,	// (0x0000f684) popup_query_code_window_ParamLimits

0x72db,	// (0x0000f684) popup_query_code_window

0x72ed,	// (0x0000f696) popup_query_data_code_window_ParamLimits

0x72ed,	// (0x0000f696) popup_query_data_code_window

0x7302,	// (0x0000f6ab) popup_query_data_window_ParamLimits

0x7302,	// (0x0000f6ab) popup_query_data_window

0x7318,	// (0x0000f6c1) popup_query_sat_info_window_ParamLimits

0x7318,	// (0x0000f6c1) popup_query_sat_info_window

0x7349,	// (0x0000f6f2) popup_snote_single_graphic_window_ParamLimits

0x7349,	// (0x0000f6f2) popup_snote_single_graphic_window

0x7349,	// (0x0000f6f2) popup_snote_single_text_window_ParamLimits

0x7349,	// (0x0000f6f2) popup_snote_single_text_window

0x735c,	// (0x0000f705) popup_sub_window_general

0x7460,	// (0x0000f809) popup_window_general_ParamLimits

0x7460,	// (0x0000f809) popup_window_general

0xa8d6,	// (0x00012c7f) power_save_pane

0x6e65,	// (0x0000f20e) control_pane_g1_ParamLimits

0x6e65,	// (0x0000f20e) control_pane_g1

0x6e86,	// (0x0000f22f) control_pane_g2_ParamLimits

0x6e86,	// (0x0000f22f) control_pane_g2

0xa81c,	// (0x00012bc5) control_pane_g3_ParamLimits

0xa81c,	// (0x00012bc5) control_pane_g3

0x0007,

0xf783,	// (0x00017b2c) control_pane_g_ParamLimits

0xf783,	// (0x00017b2c) control_pane_g

0x6ec8,	// (0x0000f271) control_pane_t1_ParamLimits

0x6ec8,	// (0x0000f271) control_pane_t1

0x6f1a,	// (0x0000f2c3) control_pane_t2_ParamLimits

0x6f1a,	// (0x0000f2c3) control_pane_t2

0x0002,

0xf794,	// (0x00017b3d) control_pane_t_ParamLimits

0xf794,	// (0x00017b3d) control_pane_t

0xa743,	// (0x00012aec) navi_navi_volume_pane_cp1

0xa74b,	// (0x00012af4) status_small_icon_pane

0xa753,	// (0x00012afc) status_small_pane_g1_ParamLimits

0xa753,	// (0x00012afc) status_small_pane_g1

0xa787,	// (0x00012b30) status_small_pane_g2_ParamLimits

0xa787,	// (0x00012b30) status_small_pane_g2

0xa793,	// (0x00012b3c) status_small_pane_g3_ParamLimits

0xa793,	// (0x00012b3c) status_small_pane_g3

0xa79f,	// (0x00012b48) status_small_pane_g4_ParamLimits

0xa79f,	// (0x00012b48) status_small_pane_g4

0xa7ab,	// (0x00012b54) status_small_pane_g5_ParamLimits

0xa7ab,	// (0x00012b54) status_small_pane_g5

0xa7b7,	// (0x00012b60) status_small_pane_g6_ParamLimits

0xa7b7,	// (0x00012b60) status_small_pane_g6

0x0007,

0xf772,	// (0x00017b1b) status_small_pane_g_ParamLimits

0xf772,	// (0x00017b1b) status_small_pane_g

0xa7e6,	// (0x00012b8f) status_small_pane_t1

0xa808,	// (0x00012bb1) status_small_wait_pane_ParamLimits

0xa808,	// (0x00012bb1) status_small_wait_pane

0x9fcd,	// (0x00012376) aid_levels_signal_ParamLimits

0x9fcd,	// (0x00012376) aid_levels_signal

0x9fde,	// (0x00012387) signal_pane_g1_ParamLimits

0x9fde,	// (0x00012387) signal_pane_g1

0x9ff4,	// (0x0001239d) signal_pane_g2_ParamLimits

0x9ff4,	// (0x0001239d) signal_pane_g2

0x0003,

0xf703,	// (0x00017aac) signal_pane_g_ParamLimits

0xf703,	// (0x00017aac) signal_pane_g

0xa02f,	// (0x000123d8) context_pane_g1

0x89bf,	// (0x00010d68) title_pane_g1

0x89f5,	// (0x00010d9e) title_pane_t1

0x8a5d,	// (0x00010e06) title_pane_t2

0x8a83,	// (0x00010e2c) title_pane_t3

0x0002,

0xf557,	// (0x00017900) title_pane_t

0xac8a,	// (0x00013033) aid_levels_battery_ParamLimits

0xac8a,	// (0x00013033) aid_levels_battery

0xac9d,	// (0x00013046) battery_pane_g1_ParamLimits

0xac9d,	// (0x00013046) battery_pane_g1

0xacb2,	// (0x0001305b) battery_pane_g2_ParamLimits

0xacb2,	// (0x0001305b) battery_pane_g2

0x0001,

0xf7a6,	// (0x00017b4f) battery_pane_g_ParamLimits

0xf7a6,	// (0x00017b4f) battery_pane_g

0xbf0b,	// (0x000142b4) uni_indicator_pane_g1

0xbf21,	// (0x000142ca) uni_indicator_pane_g2

0xbf37,	// (0x000142e0) uni_indicator_pane_g3

0x0005,

0xf910,	// (0x00017cb9) uni_indicator_pane_g

0x99ba,	// (0x00011d63) navi_icon_pane_ParamLimits

0x99ba,	// (0x00011d63) navi_icon_pane

0x89b5,	// (0x00010d5e) navi_midp_pane

0x89b5,	// (0x00010d5e) navi_navi_pane

0x99ba,	// (0x00011d63) navi_text_pane_ParamLimits

0x99ba,	// (0x00011d63) navi_text_pane

0x88ce,	// (0x00010c77) status_small_wait_pane_g1

0x8ef6,	// (0x0001129f) status_small_wait_pane_g2

0x0001,

0xf90b,	// (0x00017cb4) status_small_wait_pane_g

0xbc3e,	// (0x00013fe7) navi_navi_icon_text_pane

0xbc46,	// (0x00013fef) navi_navi_pane_g1_ParamLimits

0xbc46,	// (0x00013fef) navi_navi_pane_g1

0xbc58,	// (0x00014001) navi_navi_pane_g2_ParamLimits

0xbc58,	// (0x00014001) navi_navi_pane_g2

0x0001,

0xf8d9,	// (0x00017c82) navi_navi_pane_g_ParamLimits

0xf8d9,	// (0x00017c82) navi_navi_pane_g

0xbc6a,	// (0x00014013) navi_navi_tabs_pane

0xbc3e,	// (0x00013fe7) navi_navi_text_pane

0xbc3e,	// (0x00013fe7) navi_navi_volume_pane

0xbc1a,	// (0x00013fc3) navi_text_pane_t1

0xbc0e,	// (0x00013fb7) navi_icon_pane_g1

0xbb62,	// (0x00013f0b) navi_navi_text_pane_t1

0x7751,	// (0x0000fafa) navi_navi_volume_pane_g1

0x7759,	// (0x0000fb02) volume_small_pane

0xbac8,	// (0x00013e71) navi_navi_icon_text_pane_g1

0xbad0,	// (0x00013e79) navi_navi_icon_text_pane_t1

0xb68e,	// (0x00013a37) navi_tabs_2_long_pane

0xb68e,	// (0x00013a37) navi_tabs_2_pane

0xb68e,	// (0x00013a37) navi_tabs_3_long_pane

0xb68e,	// (0x00013a37) navi_tabs_3_pane

0xb68e,	// (0x00013a37) navi_tabs_4_pane

0x7731,	// (0x0000fada) tabs_2_active_pane_ParamLimits

0x7731,	// (0x0000fada) tabs_2_active_pane

0x7741,	// (0x0000faea) tabs_2_passive_pane_ParamLimits

0x7741,	// (0x0000faea) tabs_2_passive_pane

0x76ff,	// (0x0000faa8) tabs_3_active_pane_ParamLimits

0x76ff,	// (0x0000faa8) tabs_3_active_pane

0x770f,	// (0x0000fab8) tabs_3_passive_pane_ParamLimits

0x770f,	// (0x0000fab8) tabs_3_passive_pane

0x7720,	// (0x0000fac9) tabs_3_passive_pane_cp_ParamLimits

0x7720,	// (0x0000fac9) tabs_3_passive_pane_cp

0x76bb,	// (0x0000fa64) tabs_4_active_pane_ParamLimits

0x76bb,	// (0x0000fa64) tabs_4_active_pane

0x76cc,	// (0x0000fa75) tabs_4_passive_pane_ParamLimits

0x76cc,	// (0x0000fa75) tabs_4_passive_pane

0x76dd,	// (0x0000fa86) tabs_4_passive_pane_cp_ParamLimits

0x76dd,	// (0x0000fa86) tabs_4_passive_pane_cp

0x76ee,	// (0x0000fa97) tabs_4_passive_pane_cp2_ParamLimits

0x76ee,	// (0x0000fa97) tabs_4_passive_pane_cp2

0x769b,	// (0x0000fa44) tabs_2_long_active_pane_ParamLimits

0x769b,	// (0x0000fa44) tabs_2_long_active_pane

0x76ab,	// (0x0000fa54) tabs_2_long_passive_pane_ParamLimits

0x76ab,	// (0x0000fa54) tabs_2_long_passive_pane

0x7666,	// (0x0000fa0f) tabs_3_long_active_pane_ParamLimits

0x7666,	// (0x0000fa0f) tabs_3_long_active_pane

0x7677,	// (0x0000fa20) tabs_3_long_passive_pane_ParamLimits

0x7677,	// (0x0000fa20) tabs_3_long_passive_pane

0x768a,	// (0x0000fa33) tabs_3_long_passive_pane_cp_ParamLimits

0x768a,	// (0x0000fa33) tabs_3_long_passive_pane_cp

0x760c,	// (0x0000f9b5) volume_small_pane_g1

0x7615,	// (0x0000f9be) volume_small_pane_g2

0x761e,	// (0x0000f9c7) volume_small_pane_g3

0x7627,	// (0x0000f9d0) volume_small_pane_g4

0x7630,	// (0x0000f9d9) volume_small_pane_g5

0x7639,	// (0x0000f9e2) volume_small_pane_g6

0x7642,	// (0x0000f9eb) volume_small_pane_g7

0x764b,	// (0x0000f9f4) volume_small_pane_g8

0x7654,	// (0x0000f9fd) volume_small_pane_g9

0x765d,	// (0x0000fa06) volume_small_pane_g10

0x0009,

0xf8a5,	// (0x00017c4e) volume_small_pane_g

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp2_ParamLimits

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp2

0x8aa3,	// (0x00010e4c) tabs_3_active_pane_g1

0x8aab,	// (0x00010e54) tabs_3_active_pane_t1

0x8a95,	// (0x00010e3e) bg_passive_tab_pane_cp2_ParamLimits

0x8a95,	// (0x00010e3e) bg_passive_tab_pane_cp2

0x8aa3,	// (0x00010e4c) tabs_3_passive_pane_g1

0x8aab,	// (0x00010e54) tabs_3_passive_pane_t1

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp3_ParamLimits

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp3

0x8abd,	// (0x00010e66) tabs_4_active_pane_g1

0x8ac5,	// (0x00010e6e) tabs_4_active_pane_t1

0x8a95,	// (0x00010e3e) bg_passive_tab_pane_cp3_ParamLimits

0x8a95,	// (0x00010e3e) bg_passive_tab_pane_cp3

0x8abd,	// (0x00010e66) tabs_4_1_passive_pane_g1

0x8ac5,	// (0x00010e6e) tabs_4_1_passive_pane_t1

0xa8b4,	// (0x00012c5d) list_highlight_pane_cp2

0xc15d,	// (0x00014506) list_set_pane_ParamLimits

0xc15d,	// (0x00014506) list_set_pane

0xc1eb,	// (0x00014594) main_pane_set_t1_ParamLimits

0xc1eb,	// (0x00014594) main_pane_set_t1

0xc20b,	// (0x000145b4) main_pane_set_t2_ParamLimits

0xc20b,	// (0x000145b4) main_pane_set_t2

0xc21d,	// (0x000145c6) main_pane_set_t3_ParamLimits

0xc21d,	// (0x000145c6) main_pane_set_t3

0xc22f,	// (0x000145d8) main_pane_set_t4_ParamLimits

0xc22f,	// (0x000145d8) main_pane_set_t4

0x0003,

0xf975,	// (0x00017d1e) main_pane_set_t_ParamLimits

0xf975,	// (0x00017d1e) main_pane_set_t

0xc241,	// (0x000145ea) setting_code_pane

0xc249,	// (0x000145f2) setting_slider_graphic_pane

0xc249,	// (0x000145f2) setting_slider_pane

0xc249,	// (0x000145f2) setting_text_pane

0xc249,	// (0x000145f2) setting_volume_pane

0x69d1,	// (0x0000ed7a) volume_set_pane

0x8a95,	// (0x00010e3e) bg_set_opt_pane_cp

0x69d9,	// (0x0000ed82) setting_slider_pane_t1

0x69ef,	// (0x0000ed98) setting_slider_pane_t2

0x6a08,	// (0x0000edb1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00017907) setting_slider_pane_t

0x6a1f,	// (0x0000edc8) slider_set_pane

0x89b5,	// (0x00010d5e) bg_set_opt_pane_cp2

0x8ad7,	// (0x00010e80) setting_slider_graphic_pane_g1

0x6a35,	// (0x0000edde) setting_slider_graphic_pane_t1

0x6a44,	// (0x0000eded) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001790e) setting_slider_graphic_pane_t

0x6a53,	// (0x0000edfc) slider_set_pane_cp

0x89b5,	// (0x00010d5e) input_focus_pane_cp1

0xc123,	// (0x000144cc) list_set_text_pane

0x88ce,	// (0x00010c77) setting_text_pane_g1

0x89b5,	// (0x00010d5e) input_focus_pane_cp2

0x88ce,	// (0x00010c77) setting_code_pane_g1

0x8ae0,	// (0x00010e89) setting_code_pane_t1

0x8aee,	// (0x00010e97) set_text_pane_t1_ParamLimits

0x8aee,	// (0x00010e97) set_text_pane_t1

0x98c8,	// (0x00011c71) set_opt_bg_pane_g1

0x98d0,	// (0x00011c79) set_opt_bg_pane_g2

0xc103,	// (0x000144ac) set_opt_bg_pane_g3

0x98e0,	// (0x00011c89) set_opt_bg_pane_g4

0x98e8,	// (0x00011c91) set_opt_bg_pane_g5

0x98f0,	// (0x00011c99) set_opt_bg_pane_g6

0xc10b,	// (0x000144b4) set_opt_bg_pane_g7

0xc113,	// (0x000144bc) set_opt_bg_pane_g8

0xc11b,	// (0x000144c4) set_opt_bg_pane_g9

0x0008,

0xf962,	// (0x00017d0b) set_opt_bg_pane_g

0xc0f6,	// (0x0001449f) slider_set_pane_g1

0x77c6,	// (0x0000fb6f) slider_set_pane_g2

0x0006,

0xf953,	// (0x00017cfc) slider_set_pane_g

0x7762,	// (0x0000fb0b) volume_set_pane_g1

0x776a,	// (0x0000fb13) volume_set_pane_g2

0x7772,	// (0x0000fb1b) volume_set_pane_g3

0x777a,	// (0x0000fb23) volume_set_pane_g4

0x7782,	// (0x0000fb2b) volume_set_pane_g5

0x778a,	// (0x0000fb33) volume_set_pane_g6

0x7792,	// (0x0000fb3b) volume_set_pane_g7

0x779a,	// (0x0000fb43) volume_set_pane_g8

0x77a2,	// (0x0000fb4b) volume_set_pane_g9

0x77aa,	// (0x0000fb53) volume_set_pane_g10

0x0009,

0xf92b,	// (0x00017cd4) volume_set_pane_g

0x8b09,	// (0x00010eb2) indicator_pane_ParamLimits

0x8b09,	// (0x00010eb2) indicator_pane

0x8b15,	// (0x00010ebe) main_idle_pane_g2_ParamLimits

0x8b15,	// (0x00010ebe) main_idle_pane_g2

0x8b39,	// (0x00010ee2) main_pane_idle_g1_ParamLimits

0x8b39,	// (0x00010ee2) main_pane_idle_g1

0x8b46,	// (0x00010eef) popup_clock_digital_analogue_window_ParamLimits

0x8b46,	// (0x00010eef) popup_clock_digital_analogue_window

0x8b5d,	// (0x00010f06) soft_indicator_pane_ParamLimits

0x8b5d,	// (0x00010f06) soft_indicator_pane

0x8b69,	// (0x00010f12) wallpaper_pane_ParamLimits

0x8b69,	// (0x00010f12) wallpaper_pane

0x88ce,	// (0x00010c77) wallpaper_pane_g1

0x8b7d,	// (0x00010f26) indicator_pane_g1_ParamLimits

0x8b7d,	// (0x00010f26) indicator_pane_g1

0xc535,	// (0x000148de) navi_navi_icon_text_pane_srt_g1

0x8b98,	// (0x00010f41) soft_indicator_pane_t1

0x8bb2,	// (0x00010f5b) aid_ps_area_pane

0x8bc3,	// (0x00010f6c) aid_ps_clock_pane

0x8bcf,	// (0x00010f78) aid_ps_indicator_pane

0x8bdb,	// (0x00010f84) indicator_ps_pane_ParamLimits

0x8bdb,	// (0x00010f84) indicator_ps_pane

0x8bea,	// (0x00010f93) power_save_pane_g1_ParamLimits

0x8bea,	// (0x00010f93) power_save_pane_g1

0x8bf6,	// (0x00010f9f) power_save_pane_g2_ParamLimits

0x8bf6,	// (0x00010f9f) power_save_pane_g2

0x6744,	// (0x0000eaed) aid_navinavi_width_pane

0x8bb2,	// (0x00010f5b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00017913) power_save_pane_g_ParamLimits

0xf56a,	// (0x00017913) power_save_pane_g

0x8c04,	// (0x00010fad) power_save_pane_t1_ParamLimits

0x8c04,	// (0x00010fad) power_save_pane_t1

0x8bc3,	// (0x00010f6c) aid_ps_clock_pane_ParamLimits

0x8bcf,	// (0x00010f78) aid_ps_indicator_pane_ParamLimits

0x8c16,	// (0x00010fbf) power_save_pane_t4_ParamLimits

0x8c16,	// (0x00010fbf) power_save_pane_t4

0x0001,

0xf56f,	// (0x00017918) power_save_pane_t_ParamLimits

0xf56f,	// (0x00017918) power_save_pane_t

0x8c40,	// (0x00010fe9) power_save_t3_ParamLimits

0x8c40,	// (0x00010fe9) power_save_t3

0x8c2b,	// (0x00010fd4) power_save_t2_ParamLimits

0x8c2b,	// (0x00010fd4) power_save_t2

0x8c55,	// (0x00010ffe) indicator_ps_pane_g1

0x8c5e,	// (0x00011007) ai_gene_pane_ParamLimits

0x8c5e,	// (0x00011007) ai_gene_pane

0x8c6a,	// (0x00011013) ai_links_pane_ParamLimits

0x8c6a,	// (0x00011013) ai_links_pane

0x8c76,	// (0x0001101f) indicator_pane_cp1_ParamLimits

0x8c76,	// (0x0001101f) indicator_pane_cp1

0x8c82,	// (0x0001102b) main_pane_idle_g1_cp_ParamLimits

0x8c82,	// (0x0001102b) main_pane_idle_g1_cp

0x8c8e,	// (0x00011037) popup_ai_links_title_window

0x8c97,	// (0x00011040) soft_indicator_pane_cp1_ParamLimits

0x8c97,	// (0x00011040) soft_indicator_pane_cp1

0xbef9,	// (0x000142a2) ai_links_pane_g1

0xbf02,	// (0x000142ab) grid_ai_links_pane

0xbede,	// (0x00014287) ai_gene_pane_1

0xbee7,	// (0x00014290) ai_gene_pane_2

0xbef0,	// (0x00014299) list_highlight_pane_cp4

0xbec2,	// (0x0001426b) cell_ai_link_pane_ParamLimits

0xbec2,	// (0x0001426b) cell_ai_link_pane

0xbeba,	// (0x00014263) cell_ai_link_pane_g1

0x8ef6,	// (0x0001129f) cell_ai_link_pane_g2

0x0001,

0xf906,	// (0x00017caf) cell_ai_link_pane_g

0x89b5,	// (0x00010d5e) grid_highlight_cp2

0x89b5,	// (0x00010d5e) bg_popup_sub_pane_cp1

0x8cb1,	// (0x0001105a) popup_ai_links_title_window_t1

0xbe0c,	// (0x000141b5) ai_gene_pane_1_g1_ParamLimits

0xbe0c,	// (0x000141b5) ai_gene_pane_1_g1

0xbe18,	// (0x000141c1) ai_gene_pane_1_g2_ParamLimits

0xbe18,	// (0x000141c1) ai_gene_pane_1_g2

0x0001,

0xf8fc,	// (0x00017ca5) ai_gene_pane_1_g_ParamLimits

0xf8fc,	// (0x00017ca5) ai_gene_pane_1_g

0xbe25,	// (0x000141ce) ai_gene_pane_1_t1_ParamLimits

0xbe25,	// (0x000141ce) ai_gene_pane_1_t1

0xbe59,	// (0x00014202) grid_ai_soft_ind_pane

0xbdf7,	// (0x000141a0) ai_gene_pane_2_t1_ParamLimits

0xbdf7,	// (0x000141a0) ai_gene_pane_2_t1

0x8cc0,	// (0x00011069) main_pane_empty_t1_ParamLimits

0x8cc0,	// (0x00011069) main_pane_empty_t1

0x8cdd,	// (0x00011086) main_pane_empty_t2_ParamLimits

0x8cdd,	// (0x00011086) main_pane_empty_t2

0x8cf5,	// (0x0001109e) main_pane_empty_t3_ParamLimits

0x8cf5,	// (0x0001109e) main_pane_empty_t3

0x8d08,	// (0x000110b1) main_pane_empty_t4_ParamLimits

0x8d08,	// (0x000110b1) main_pane_empty_t4

0x8d1b,	// (0x000110c4) main_pane_empty_t5_ParamLimits

0x8d1b,	// (0x000110c4) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001791d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001791d) main_pane_empty_t

0x99ba,	// (0x00011d63) bg_popup_window_pane_ParamLimits

0x99ba,	// (0x00011d63) bg_popup_window_pane

0xbb71,	// (0x00013f1a) find_popup_pane_cp2_ParamLimits

0xbb71,	// (0x00013f1a) find_popup_pane_cp2

0xbb7d,	// (0x00013f26) heading_pane_ParamLimits

0xbb7d,	// (0x00013f26) heading_pane

0x89b5,	// (0x00010d5e) bg_popup_sub_pane

0xbaea,	// (0x00013e93) bg_popup_window_pane_g1_ParamLimits

0xbaea,	// (0x00013e93) bg_popup_window_pane_g1

0xbaf6,	// (0x00013e9f) bg_popup_window_pane_g2_ParamLimits

0xbaf6,	// (0x00013e9f) bg_popup_window_pane_g2

0xbb02,	// (0x00013eab) bg_popup_window_pane_g3_ParamLimits

0xbb02,	// (0x00013eab) bg_popup_window_pane_g3

0xbb0e,	// (0x00013eb7) bg_popup_window_pane_g4_ParamLimits

0xbb0e,	// (0x00013eb7) bg_popup_window_pane_g4

0xbb1a,	// (0x00013ec3) bg_popup_window_pane_g5_ParamLimits

0xbb1a,	// (0x00013ec3) bg_popup_window_pane_g5

0xbb26,	// (0x00013ecf) bg_popup_window_pane_g6_ParamLimits

0xbb26,	// (0x00013ecf) bg_popup_window_pane_g6

0xbb32,	// (0x00013edb) bg_popup_window_pane_g7_ParamLimits

0xbb32,	// (0x00013edb) bg_popup_window_pane_g7

0xbb3e,	// (0x00013ee7) bg_popup_window_pane_g8_ParamLimits

0xbb3e,	// (0x00013ee7) bg_popup_window_pane_g8

0xbb4a,	// (0x00013ef3) bg_popup_window_pane_g9_ParamLimits

0xbb4a,	// (0x00013ef3) bg_popup_window_pane_g9

0xbb56,	// (0x00013eff) bg_popup_window_pane_g10_ParamLimits

0xbb56,	// (0x00013eff) bg_popup_window_pane_g10

0x0009,

0xf8c4,	// (0x00017c6d) bg_popup_window_pane_g_ParamLimits

0xf8c4,	// (0x00017c6d) bg_popup_window_pane_g

0xba7f,	// (0x00013e28) bg_popup_heading_pane_ParamLimits

0xba7f,	// (0x00013e28) bg_popup_heading_pane

0x784e,	// (0x0000fbf7) tabs_4_passive_pane_cp_srt_ParamLimits

0x784e,	// (0x0000fbf7) tabs_4_passive_pane_cp_srt

0x7860,	// (0x0000fc09) tabs_4_passive_pane_srt_ParamLimits

0xba93,	// (0x00013e3c) heading_pane_g2

0x7860,	// (0x0000fc09) tabs_4_passive_pane_srt

0xa8b4,	// (0x00012c5d) bg_passive_tab_pane_cp3_srt_ParamLimits

0xa8b4,	// (0x00012c5d) bg_passive_tab_pane_cp3_srt

0xba9b,	// (0x00013e44) heading_pane_t1_ParamLimits

0xba9b,	// (0x00013e44) heading_pane_t1

0xbab2,	// (0x00013e5b) heading_pane_t2_ParamLimits

0xbab2,	// (0x00013e5b) heading_pane_t2

0x0001,

0xf8bf,	// (0x00017c68) heading_pane_t_ParamLimits

0xf8bf,	// (0x00017c68) heading_pane_t

0xb5f6,	// (0x0001399f) bg_popup_heading_pane_g1

0xb69f,	// (0x00013a48) bg_popup_heading_pane_g2

0xb6a7,	// (0x00013a50) bg_popup_heading_pane_g3

0xb6af,	// (0x00013a58) bg_popup_heading_pane_g4

0xb6b7,	// (0x00013a60) bg_popup_heading_pane_g5

0xb6bf,	// (0x00013a68) bg_popup_heading_pane_g6

0xb6c7,	// (0x00013a70) bg_popup_heading_pane_g7

0xb6cf,	// (0x00013a78) bg_popup_heading_pane_g8

0xb6d7,	// (0x00013a80) bg_popup_heading_pane_g9

0x0008,

0xf87b,	// (0x00017c24) bg_popup_heading_pane_g

0xad7d,	// (0x00013126) bg_popup_sub_pane_g1

0xad8d,	// (0x00013136) bg_popup_sub_pane_g2

0xad85,	// (0x0001312e) bg_popup_sub_pane_g3

0xad9d,	// (0x00013146) bg_popup_sub_pane_g4

0xad95,	// (0x0001313e) bg_popup_sub_pane_g5

0xada5,	// (0x0001314e) bg_popup_sub_pane_g6

0xadad,	// (0x00013156) bg_popup_sub_pane_g7

0xadbd,	// (0x00013166) bg_popup_sub_pane_g8

0xadb5,	// (0x0001315e) bg_popup_sub_pane_g9

0x0008,

0xf855,	// (0x00017bfe) bg_popup_sub_pane_g

0x8d2e,	// (0x000110d7) bg_popup_window_pane_cp5_ParamLimits

0x8d2e,	// (0x000110d7) bg_popup_window_pane_cp5

0x8d4a,	// (0x000110f3) popup_note_window_g1_ParamLimits

0x8d4a,	// (0x000110f3) popup_note_window_g1

0x8d56,	// (0x000110ff) popup_note_window_t1_ParamLimits

0x8d56,	// (0x000110ff) popup_note_window_t1

0x8d6c,	// (0x00011115) popup_note_window_t2_ParamLimits

0x8d6c,	// (0x00011115) popup_note_window_t2

0x8d82,	// (0x0001112b) popup_note_window_t3_ParamLimits

0x8d82,	// (0x0001112b) popup_note_window_t3

0x8d98,	// (0x00011141) popup_note_window_t4_ParamLimits

0x8d98,	// (0x00011141) popup_note_window_t4

0x8dc0,	// (0x00011169) popup_note_window_t5_ParamLimits

0x8dc0,	// (0x00011169) popup_note_window_t5

0x0004,

0xf57f,	// (0x00017928) popup_note_window_t_ParamLimits

0xf57f,	// (0x00017928) popup_note_window_t

0x8e0a,	// (0x000111b3) bg_popup_window_pane_cp6_ParamLimits

0x8e0a,	// (0x000111b3) bg_popup_window_pane_cp6

0xb572,	// (0x0001391b) popup_note_image_window_g1_ParamLimits

0xb572,	// (0x0001391b) popup_note_image_window_g1

0xb57e,	// (0x00013927) popup_note_image_window_g2_ParamLimits

0xb57e,	// (0x00013927) popup_note_image_window_g2

0x0001,

0xf849,	// (0x00017bf2) popup_note_image_window_g_ParamLimits

0xf849,	// (0x00017bf2) popup_note_image_window_g

0xb597,	// (0x00013940) popup_note_image_window_t1_ParamLimits

0xb597,	// (0x00013940) popup_note_image_window_t1

0xb5b0,	// (0x00013959) popup_note_image_window_t2_ParamLimits

0xb5b0,	// (0x00013959) popup_note_image_window_t2

0xb5c9,	// (0x00013972) popup_note_image_window_t3_ParamLimits

0xb5c9,	// (0x00013972) popup_note_image_window_t3

0x0002,

0xf84e,	// (0x00017bf7) popup_note_image_window_t_ParamLimits

0xf84e,	// (0x00017bf7) popup_note_image_window_t

0xb441,	// (0x000137ea) bg_popup_window_pane_cp7_ParamLimits

0xb441,	// (0x000137ea) bg_popup_window_pane_cp7

0xb471,	// (0x0001381a) popup_note_wait_window_g1_ParamLimits

0xb471,	// (0x0001381a) popup_note_wait_window_g1

0xb47d,	// (0x00013826) popup_note_wait_window_g2_ParamLimits

0xb47d,	// (0x00013826) popup_note_wait_window_g2

0x0002,

0xf837,	// (0x00017be0) popup_note_wait_window_g_ParamLimits

0xf837,	// (0x00017be0) popup_note_wait_window_g

0xb495,	// (0x0001383e) popup_note_wait_window_t1_ParamLimits

0xb495,	// (0x0001383e) popup_note_wait_window_t1

0xb4bc,	// (0x00013865) popup_note_wait_window_t2_ParamLimits

0xb4bc,	// (0x00013865) popup_note_wait_window_t2

0xb4d9,	// (0x00013882) popup_note_wait_window_t3_ParamLimits

0xb4d9,	// (0x00013882) popup_note_wait_window_t3

0xb4ec,	// (0x00013895) popup_note_wait_window_t4_ParamLimits

0xb4ec,	// (0x00013895) popup_note_wait_window_t4

0x0004,

0xf83e,	// (0x00017be7) popup_note_wait_window_t_ParamLimits

0xf83e,	// (0x00017be7) popup_note_wait_window_t

0xb511,	// (0x000138ba) wait_bar_pane_ParamLimits

0xb511,	// (0x000138ba) wait_bar_pane

0x89b5,	// (0x00010d5e) wait_anim_pane

0x89b5,	// (0x00010d5e) wait_border_pane

0x88ce,	// (0x00010c77) wait_anim_pane_g1

0x88ce,	// (0x00010c77) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00017aa7) wait_anim_pane_g

0xb3f1,	// (0x0001379a) wait_border_pane_g1

0xb3fa,	// (0x000137a3) wait_border_pane_g2

0xb403,	// (0x000137ac) wait_border_pane_g3

0x0002,

0xf830,	// (0x00017bd9) wait_border_pane_g

0xb261,	// (0x0001360a) bg_popup_window_pane_cp16_ParamLimits

0xb261,	// (0x0001360a) bg_popup_window_pane_cp16

0xb361,	// (0x0001370a) indicator_popup_pane_cp4_ParamLimits

0xb361,	// (0x0001370a) indicator_popup_pane_cp4

0xb375,	// (0x0001371e) popup_query_data_window_t1_ParamLimits

0xb375,	// (0x0001371e) popup_query_data_window_t1

0xb387,	// (0x00013730) popup_query_data_window_t2_ParamLimits

0xb387,	// (0x00013730) popup_query_data_window_t2

0xb3a0,	// (0x00013749) popup_query_data_window_t3_ParamLimits

0xb3a0,	// (0x00013749) popup_query_data_window_t3

0x0002,

0xf829,	// (0x00017bd2) popup_query_data_window_t_ParamLimits

0xf829,	// (0x00017bd2) popup_query_data_window_t

0xb3ba,	// (0x00013763) query_popup_data_pane_ParamLimits

0xb3ba,	// (0x00013763) query_popup_data_pane

0xb3ce,	// (0x00013777) query_popup_data_pane_cp1_ParamLimits

0xb3ce,	// (0x00013777) query_popup_data_pane_cp1

0xb261,	// (0x0001360a) bg_popup_window_pane_cp10_ParamLimits

0xb261,	// (0x0001360a) bg_popup_window_pane_cp10

0xb293,	// (0x0001363c) indicator_popup_pane_ParamLimits

0xb293,	// (0x0001363c) indicator_popup_pane

0xb2b5,	// (0x0001365e) popup_query_code_window_t1_ParamLimits

0xb2b5,	// (0x0001365e) popup_query_code_window_t1

0xb2cf,	// (0x00013678) popup_query_code_window_t2_ParamLimits

0xb2cf,	// (0x00013678) popup_query_code_window_t2

0xb318,	// (0x000136c1) popup_query_code_window_t3_ParamLimits

0xb318,	// (0x000136c1) popup_query_code_window_t3

0x0002,

0xf822,	// (0x00017bcb) popup_query_code_window_t_ParamLimits

0xf822,	// (0x00017bcb) popup_query_code_window_t

0xb347,	// (0x000136f0) query_popup_pane_ParamLimits

0xb347,	// (0x000136f0) query_popup_pane

0x8e0a,	// (0x000111b3) bg_popup_window_pane_cp15_ParamLimits

0x8e0a,	// (0x000111b3) bg_popup_window_pane_cp15

0x8e28,	// (0x000111d1) indicator_popup_pane_cp1_ParamLimits

0x8e28,	// (0x000111d1) indicator_popup_pane_cp1

0x8e3b,	// (0x000111e4) indicator_popup_pane_cp2_ParamLimits

0x8e3b,	// (0x000111e4) indicator_popup_pane_cp2

0x8e4e,	// (0x000111f7) popup_query_data_code_window_g1_ParamLimits

0x8e4e,	// (0x000111f7) popup_query_data_code_window_g1

0x8e61,	// (0x0001120a) popup_query_data_code_window_t1_ParamLimits

0x8e61,	// (0x0001120a) popup_query_data_code_window_t1

0x8e73,	// (0x0001121c) popup_query_data_code_window_t2_ParamLimits

0x8e73,	// (0x0001121c) popup_query_data_code_window_t2

0x8e85,	// (0x0001122e) popup_query_data_code_window_t3_ParamLimits

0x8e85,	// (0x0001122e) popup_query_data_code_window_t3

0x8e9b,	// (0x00011244) popup_query_data_code_window_t4_ParamLimits

0x8e9b,	// (0x00011244) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00017933) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00017933) popup_query_data_code_window_t

0x7527,	// (0x0000f8d0) list_single_midp_graphic_pane_g3

0x8eb3,	// (0x0001125c) query_popup_data_pane_cp2_ParamLimits

0x8ec6,	// (0x0001126f) query_popup_pane_cp2_ParamLimits

0x8ec6,	// (0x0001126f) query_popup_pane_cp2

0x89b5,	// (0x00010d5e) bg_popup_window_pane_cp11

0xb24d,	// (0x000135f6) heading_pane_cp5

0x8faa,	// (0x00011353) listscroll_popup_info_pane

0x89b5,	// (0x00010d5e) input_focus_pane_cp3

0x8ed9,	// (0x00011282) query_popup_pane_t1

0x8ee7,	// (0x00011290) list_popup_info_pane_ParamLimits

0x8ee7,	// (0x00011290) list_popup_info_pane

0x8ef6,	// (0x0001129f) listscroll_popup_info_pane_g1

0x8efe,	// (0x000112a7) scroll_pane_cp7

0x8f06,	// (0x000112af) popup_info_list_pane_t1_ParamLimits

0x8f06,	// (0x000112af) popup_info_list_pane_t1

0x8f20,	// (0x000112c9) popup_info_list_pane_t2_ParamLimits

0x8f20,	// (0x000112c9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001793c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001793c) popup_info_list_pane_t

0x89b5,	// (0x00010d5e) bg_popup_window_pane_cp12

0xc54f,	// (0x000148f8) find_popup_pane

0x8a95,	// (0x00010e3e) bg_popup_window_pane_cp3

0x8f3a,	// (0x000112e3) heading_pane_cp3

0x8f46,	// (0x000112ef) listscroll_popup_graphic_pane

0x89b5,	// (0x00010d5e) bg_popup_window_pane_cp4

0x8fa2,	// (0x0001134b) heading_pane_cp4

0x8faa,	// (0x00011353) listscroll_popup_colour_pane

0x8fb2,	// (0x0001135b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8fb2,	// (0x0001135b) cell_large_graphic_colour_none_popup_pane

0x8fc2,	// (0x0001136b) grid_large_graphic_colour_popup_pane_ParamLimits

0x8fc2,	// (0x0001136b) grid_large_graphic_colour_popup_pane

0x8fde,	// (0x00011387) listscroll_popup_colour_pane_g1_ParamLimits

0x8fde,	// (0x00011387) listscroll_popup_colour_pane_g1

0x8ff5,	// (0x0001139e) listscroll_popup_colour_pane_g2_ParamLimits

0x8ff5,	// (0x0001139e) listscroll_popup_colour_pane_g2

0x9009,	// (0x000113b2) listscroll_popup_colour_pane_g3_ParamLimits

0x9009,	// (0x000113b2) listscroll_popup_colour_pane_g3

0x9019,	// (0x000113c2) listscroll_popup_colour_pane_g4_ParamLimits

0x9019,	// (0x000113c2) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00017941) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00017941) listscroll_popup_colour_pane_g

0x9028,	// (0x000113d1) scroll_pane_cp6_ParamLimits

0x9028,	// (0x000113d1) scroll_pane_cp6

0x903a,	// (0x000113e3) cell_large_graphic_colour_popup_pane_ParamLimits

0x903a,	// (0x000113e3) cell_large_graphic_colour_popup_pane

0x9059,	// (0x00011402) cell_large_graphic_colour_none_popup_pane_t1

0x89b5,	// (0x00010d5e) grid_highlight_pane_cp5

0x9068,	// (0x00011411) cell_large_graphic_colour_popup_pane_g1

0x9070,	// (0x00011419) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001794a) cell_large_graphic_colour_popup_pane_g

0x9078,	// (0x00011421) cell_large_graphic_colour_popup_pane_g2_copy1

0x9081,	// (0x0001142a) grid_highlight_pane_cp4

0x9089,	// (0x00011432) bg_popup_window_pane_cp8_ParamLimits

0x9089,	// (0x00011432) bg_popup_window_pane_cp8

0x90a4,	// (0x0001144d) popup_snote_single_text_window_g1_ParamLimits

0x90a4,	// (0x0001144d) popup_snote_single_text_window_g1

0x90b6,	// (0x0001145f) popup_snote_single_text_window_t1_ParamLimits

0x90b6,	// (0x0001145f) popup_snote_single_text_window_t1

0x90c9,	// (0x00011472) popup_snote_single_text_window_t2_ParamLimits

0x90c9,	// (0x00011472) popup_snote_single_text_window_t2

0x90dc,	// (0x00011485) popup_snote_single_text_window_t3_ParamLimits

0x90dc,	// (0x00011485) popup_snote_single_text_window_t3

0x9115,	// (0x000114be) popup_snote_single_text_window_t4_ParamLimits

0x9115,	// (0x000114be) popup_snote_single_text_window_t4

0x9149,	// (0x000114f2) popup_snote_single_text_window_t5_ParamLimits

0x9149,	// (0x000114f2) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001794f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001794f) popup_snote_single_text_window_t

0x9178,	// (0x00011521) bg_popup_window_pane_cp9_ParamLimits

0x9178,	// (0x00011521) bg_popup_window_pane_cp9

0x90a4,	// (0x0001144d) popup_snote_single_graphic_window_g1_ParamLimits

0x90a4,	// (0x0001144d) popup_snote_single_graphic_window_g1

0x9186,	// (0x0001152f) popup_snote_single_graphic_window_g2_ParamLimits

0x9186,	// (0x0001152f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001795a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001795a) popup_snote_single_graphic_window_g

0x9192,	// (0x0001153b) popup_snote_single_graphic_window_t1_ParamLimits

0x9192,	// (0x0001153b) popup_snote_single_graphic_window_t1

0x91a5,	// (0x0001154e) popup_snote_single_graphic_window_t2_ParamLimits

0x91a5,	// (0x0001154e) popup_snote_single_graphic_window_t2

0x90dc,	// (0x00011485) popup_snote_single_graphic_window_t3_ParamLimits

0x90dc,	// (0x00011485) popup_snote_single_graphic_window_t3

0x9115,	// (0x000114be) popup_snote_single_graphic_window_t4_ParamLimits

0x9115,	// (0x000114be) popup_snote_single_graphic_window_t4

0x9149,	// (0x000114f2) popup_snote_single_graphic_window_t5_ParamLimits

0x9149,	// (0x000114f2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001795f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001795f) popup_snote_single_graphic_window_t

0xc4bc,	// (0x00014865) grid_graphic_popup_pane_ParamLimits

0xc4bc,	// (0x00014865) grid_graphic_popup_pane

0xc4df,	// (0x00014888) listscroll_popup_graphic_pane_g1_ParamLimits

0xc4df,	// (0x00014888) listscroll_popup_graphic_pane_g1

0xc4f3,	// (0x0001489c) listscroll_popup_graphic_pane_g2_ParamLimits

0xc4f3,	// (0x0001489c) listscroll_popup_graphic_pane_g2

0x0001,

0xf99f,	// (0x00017d48) listscroll_popup_graphic_pane_g_ParamLimits

0xf99f,	// (0x00017d48) listscroll_popup_graphic_pane_g

0xc507,	// (0x000148b0) scroll_pane_cp5

0xc45f,	// (0x00014808) cell_graphic_popup_pane_ParamLimits

0xc45f,	// (0x00014808) cell_graphic_popup_pane

0xc440,	// (0x000147e9) cell_graphic_popup_pane_g1

0xc448,	// (0x000147f1) cell_graphic_popup_pane_g2

0x9078,	// (0x00011421) cell_graphic_popup_pane_g3

0x0002,

0xf998,	// (0x00017d41) cell_graphic_popup_pane_g

0xc451,	// (0x000147fa) cell_graphic_popup_pane_t2

0x9081,	// (0x0001142a) grid_highlight_pane_cp3

0x91ca,	// (0x00011573) list_gen_pane_ParamLimits

0x91ca,	// (0x00011573) list_gen_pane

0x91fb,	// (0x000115a4) scroll_pane

0xc3c0,	// (0x00014769) bg_list_pane_g1_ParamLimits

0xc3c0,	// (0x00014769) bg_list_pane_g1

0xc3d7,	// (0x00014780) bg_list_pane_g2_ParamLimits

0xc3d7,	// (0x00014780) bg_list_pane_g2

0xc3ea,	// (0x00014793) bg_list_pane_g3_ParamLimits

0xc3ea,	// (0x00014793) bg_list_pane_g3

0xc3fc,	// (0x000147a5) bg_list_pane_g4_ParamLimits

0xc3fc,	// (0x000147a5) bg_list_pane_g4

0xc40e,	// (0x000147b7) bg_list_pane_g5_ParamLimits

0xc40e,	// (0x000147b7) bg_list_pane_g5

0x0004,

0xf98d,	// (0x00017d36) bg_list_pane_g_ParamLimits

0xf98d,	// (0x00017d36) bg_list_pane_g

0xc2ef,	// (0x00014698) list_double2_graphic_large_graphic_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double2_graphic_large_graphic_pane

0xc2ef,	// (0x00014698) list_double2_graphic_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double2_graphic_pane

0xc2ef,	// (0x00014698) list_double2_large_graphic_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double2_large_graphic_pane

0xc2ef,	// (0x00014698) list_double2_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double2_pane

0xc2ef,	// (0x00014698) list_double_graphic_heading_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double_graphic_heading_pane

0xc2ef,	// (0x00014698) list_double_graphic_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double_graphic_pane

0xc2ef,	// (0x00014698) list_double_heading_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double_heading_pane

0xc2ef,	// (0x00014698) list_double_large_graphic_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double_large_graphic_pane

0xc2ef,	// (0x00014698) list_double_number_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double_number_pane

0xc2ef,	// (0x00014698) list_double_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double_pane

0xc2ef,	// (0x00014698) list_double_time_pane_ParamLimits

0xc2ef,	// (0x00014698) list_double_time_pane

0xc2ef,	// (0x00014698) list_setting_number_pane_ParamLimits

0xc2ef,	// (0x00014698) list_setting_number_pane

0xc2ef,	// (0x00014698) list_setting_pane_ParamLimits

0xc2ef,	// (0x00014698) list_setting_pane

0xc356,	// (0x000146ff) list_single_2graphic_pane_ParamLimits

0xc356,	// (0x000146ff) list_single_2graphic_pane

0xc356,	// (0x000146ff) list_single_graphic_heading_pane_ParamLimits

0xc356,	// (0x000146ff) list_single_graphic_heading_pane

0xc356,	// (0x000146ff) list_single_graphic_pane_ParamLimits

0xc356,	// (0x000146ff) list_single_graphic_pane

0xc356,	// (0x000146ff) list_single_heading_pane_ParamLimits

0xc356,	// (0x000146ff) list_single_heading_pane

0xc3aa,	// (0x00014753) list_single_large_graphic_pane_ParamLimits

0xc3aa,	// (0x00014753) list_single_large_graphic_pane

0xc356,	// (0x000146ff) list_single_number_heading_pane_ParamLimits

0xc356,	// (0x000146ff) list_single_number_heading_pane

0xc356,	// (0x000146ff) list_single_number_pane_ParamLimits

0xc356,	// (0x000146ff) list_single_number_pane

0xc356,	// (0x000146ff) list_single_pane_ParamLimits

0xc356,	// (0x000146ff) list_single_pane

0x89b5,	// (0x00010d5e) list_highlight_pane_cp1

0x923c,	// (0x000115e5) list_single_pane_g1_ParamLimits

0x923c,	// (0x000115e5) list_single_pane_g1

0x9248,	// (0x000115f1) list_single_pane_g2_ParamLimits

0x9248,	// (0x000115f1) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00017971) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00017971) list_single_pane_g

0xc2ba,	// (0x00014663) list_single_pane_t1_ParamLimits

0xc2ba,	// (0x00014663) list_single_pane_t1

0x923c,	// (0x000115e5) list_single_number_pane_g1_ParamLimits

0x923c,	// (0x000115e5) list_single_number_pane_g1

0x9248,	// (0x000115f1) list_single_number_pane_g2_ParamLimits

0x9248,	// (0x000115f1) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00017971) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00017971) list_single_number_pane_g

0x9254,	// (0x000115fd) list_single_number_pane_t1_ParamLimits

0x9254,	// (0x000115fd) list_single_number_pane_t1

0xc0ad,	// (0x00014456) list_single_number_pane_t2_ParamLimits

0xc0ad,	// (0x00014456) list_single_number_pane_t2

0x0001,

0xf94e,	// (0x00017cf7) list_single_number_pane_t_ParamLimits

0xf94e,	// (0x00017cf7) list_single_number_pane_t

0x9230,	// (0x000115d9) list_single_graphic_pane_g1_ParamLimits

0x9230,	// (0x000115d9) list_single_graphic_pane_g1

0x923c,	// (0x000115e5) list_single_graphic_pane_g2_ParamLimits

0x923c,	// (0x000115e5) list_single_graphic_pane_g2

0x9248,	// (0x000115f1) list_single_graphic_pane_g3_ParamLimits

0x9248,	// (0x000115f1) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001796a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001796a) list_single_graphic_pane_g

0x9254,	// (0x000115fd) list_single_graphic_pane_t1_ParamLimits

0x9254,	// (0x000115fd) list_single_graphic_pane_t1

0x923c,	// (0x000115e5) list_single_heading_pane_g1_ParamLimits

0x923c,	// (0x000115e5) list_single_heading_pane_g1

0x9248,	// (0x000115f1) list_single_heading_pane_g2_ParamLimits

0x9248,	// (0x000115f1) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00017971) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00017971) list_single_heading_pane_g

0x926a,	// (0x00011613) list_single_heading_pane_t1_ParamLimits

0x926a,	// (0x00011613) list_single_heading_pane_t1

0x9280,	// (0x00011629) list_single_heading_pane_t2_ParamLimits

0x9280,	// (0x00011629) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00017976) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00017976) list_single_heading_pane_t

0x923c,	// (0x000115e5) list_single_number_heading_pane_g1_ParamLimits

0x923c,	// (0x000115e5) list_single_number_heading_pane_g1

0x9248,	// (0x000115f1) list_single_number_heading_pane_g2_ParamLimits

0x9248,	// (0x000115f1) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00017971) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00017971) list_single_number_heading_pane_g

0x926a,	// (0x00011613) list_single_number_heading_pane_t1_ParamLimits

0x926a,	// (0x00011613) list_single_number_heading_pane_t1

0x9292,	// (0x0001163b) list_single_number_heading_pane_t2_ParamLimits

0x9292,	// (0x0001163b) list_single_number_heading_pane_t2

0x92a4,	// (0x0001164d) list_single_number_heading_pane_t3_ParamLimits

0x92a4,	// (0x0001164d) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001797b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001797b) list_single_number_heading_pane_t

0x9230,	// (0x000115d9) list_single_graphic_heading_pane_g1_ParamLimits

0x9230,	// (0x000115d9) list_single_graphic_heading_pane_g1

0x92b6,	// (0x0001165f) list_single_graphic_heading_pane_g4_ParamLimits

0x92b6,	// (0x0001165f) list_single_graphic_heading_pane_g4

0x9248,	// (0x000115f1) list_single_graphic_heading_pane_g5_ParamLimits

0x9248,	// (0x000115f1) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00017982) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00017982) list_single_graphic_heading_pane_g

0x926a,	// (0x00011613) list_single_graphic_heading_pane_t1_ParamLimits

0x926a,	// (0x00011613) list_single_graphic_heading_pane_t1

0x92c5,	// (0x0001166e) list_single_graphic_heading_pane_t2_ParamLimits

0x92c5,	// (0x0001166e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00017989) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00017989) list_single_graphic_heading_pane_t

0x92d7,	// (0x00011680) list_single_large_graphic_pane_g1_ParamLimits

0x92d7,	// (0x00011680) list_single_large_graphic_pane_g1

0x92e3,	// (0x0001168c) list_single_large_graphic_pane_g2_ParamLimits

0x92e3,	// (0x0001168c) list_single_large_graphic_pane_g2

0x92ef,	// (0x00011698) list_single_large_graphic_pane_g3_ParamLimits

0x92ef,	// (0x00011698) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001798e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001798e) list_single_large_graphic_pane_g

0xb3fa,	// (0x000137a3) wait_border_pane_g2_copy1

0x92fb,	// (0x000116a4) list_single_large_graphic_pane_g4_cp2

0x9303,	// (0x000116ac) list_single_large_graphic_pane_t1_ParamLimits

0x9303,	// (0x000116ac) list_single_large_graphic_pane_t1

0x9319,	// (0x000116c2) list_double_pane_g1_ParamLimits

0x9319,	// (0x000116c2) list_double_pane_g1

0x9325,	// (0x000116ce) list_double_pane_g2_ParamLimits

0x9325,	// (0x000116ce) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00017995) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00017995) list_double_pane_g

0x9331,	// (0x000116da) list_double_pane_t1_ParamLimits

0x9331,	// (0x000116da) list_double_pane_t1

0x9347,	// (0x000116f0) list_double_pane_t2_ParamLimits

0x9347,	// (0x000116f0) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001799a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001799a) list_double_pane_t

0x9359,	// (0x00011702) list_double2_pane_g1_ParamLimits

0x9359,	// (0x00011702) list_double2_pane_g1

0x9368,	// (0x00011711) list_double2_pane_g2_ParamLimits

0x9368,	// (0x00011711) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001799f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001799f) list_double2_pane_g

0x9374,	// (0x0001171d) list_double2_pane_t1_ParamLimits

0x9374,	// (0x0001171d) list_double2_pane_t1

0x938a,	// (0x00011733) list_double2_pane_t2_ParamLimits

0x938a,	// (0x00011733) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000179a4) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000179a4) list_double2_pane_t

0x9319,	// (0x000116c2) list_double_number_pane_g1_ParamLimits

0x9319,	// (0x000116c2) list_double_number_pane_g1

0x9325,	// (0x000116ce) list_double_number_pane_g2_ParamLimits

0x9325,	// (0x000116ce) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00017995) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00017995) list_double_number_pane_g

0x939c,	// (0x00011745) list_double_number_pane_t1_ParamLimits

0x939c,	// (0x00011745) list_double_number_pane_t1

0x93ae,	// (0x00011757) list_double_number_pane_t2_ParamLimits

0x93ae,	// (0x00011757) list_double_number_pane_t2

0x93c4,	// (0x0001176d) list_double_number_pane_t3_ParamLimits

0x93c4,	// (0x0001176d) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000179a9) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000179a9) list_double_number_pane_t

0x93d6,	// (0x0001177f) list_double_graphic_pane_g1_ParamLimits

0x93d6,	// (0x0001177f) list_double_graphic_pane_g1

0x93e2,	// (0x0001178b) list_double_graphic_pane_g2_ParamLimits

0x93e2,	// (0x0001178b) list_double_graphic_pane_g2

0x93f1,	// (0x0001179a) list_double_graphic_pane_g3_ParamLimits

0x93f1,	// (0x0001179a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000179b0) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000179b0) list_double_graphic_pane_g

0x9409,	// (0x000117b2) list_double_graphic_pane_t1_ParamLimits

0x9409,	// (0x000117b2) list_double_graphic_pane_t1

0x941f,	// (0x000117c8) list_double_graphic_pane_t2_ParamLimits

0x941f,	// (0x000117c8) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000179b9) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000179b9) list_double_graphic_pane_t

0x9431,	// (0x000117da) list_double2_graphic_pane_g1_ParamLimits

0x9431,	// (0x000117da) list_double2_graphic_pane_g1

0x943d,	// (0x000117e6) list_double2_graphic_pane_g2_ParamLimits

0x943d,	// (0x000117e6) list_double2_graphic_pane_g2

0x9368,	// (0x00011711) list_double2_graphic_pane_g3_ParamLimits

0x9368,	// (0x00011711) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000179be) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000179be) list_double2_graphic_pane_g

0x9449,	// (0x000117f2) list_double2_graphic_pane_t1_ParamLimits

0x9449,	// (0x000117f2) list_double2_graphic_pane_t1

0x945f,	// (0x00011808) list_double2_graphic_pane_t2_ParamLimits

0x945f,	// (0x00011808) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000179c5) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000179c5) list_double2_graphic_pane_t

0x9471,	// (0x0001181a) list_double_large_graphic_pane_g1_ParamLimits

0x9471,	// (0x0001181a) list_double_large_graphic_pane_g1

0x949a,	// (0x00011843) list_double_large_graphic_pane_g2_ParamLimits

0x949a,	// (0x00011843) list_double_large_graphic_pane_g2

0x9325,	// (0x000116ce) list_double_large_graphic_pane_g3_ParamLimits

0x9325,	// (0x000116ce) list_double_large_graphic_pane_g3

0x94a9,	// (0x00011852) list_double_large_graphic_pane_g4_ParamLimits

0x94a9,	// (0x00011852) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000179ca) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000179ca) list_double_large_graphic_pane_g

0x94cf,	// (0x00011878) list_double_large_graphic_pane_t1_ParamLimits

0x94cf,	// (0x00011878) list_double_large_graphic_pane_t1

0x94e8,	// (0x00011891) list_double_large_graphic_pane_t2_ParamLimits

0x94e8,	// (0x00011891) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000179d5) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000179d5) list_double_large_graphic_pane_t

0x94fa,	// (0x000118a3) list_double2_large_graphic_pane_g1_ParamLimits

0x94fa,	// (0x000118a3) list_double2_large_graphic_pane_g1

0x9359,	// (0x00011702) list_double2_large_graphic_pane_g2_ParamLimits

0x9359,	// (0x00011702) list_double2_large_graphic_pane_g2

0x9368,	// (0x00011711) list_double2_large_graphic_pane_g3_ParamLimits

0x9368,	// (0x00011711) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000179da) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000179da) list_double2_large_graphic_pane_g

0x9506,	// (0x000118af) list_double2_large_graphic_pane_t1_ParamLimits

0x9506,	// (0x000118af) list_double2_large_graphic_pane_t1

0x951c,	// (0x000118c5) list_double2_large_graphic_pane_t2_ParamLimits

0x951c,	// (0x000118c5) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000179e1) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000179e1) list_double2_large_graphic_pane_t

0x952e,	// (0x000118d7) list_double_heading_pane_g1_ParamLimits

0x952e,	// (0x000118d7) list_double_heading_pane_g1

0x953d,	// (0x000118e6) list_double_heading_pane_g2_ParamLimits

0x953d,	// (0x000118e6) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000179e6) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000179e6) list_double_heading_pane_g

0x9549,	// (0x000118f2) list_double_heading_pane_t1_ParamLimits

0x9549,	// (0x000118f2) list_double_heading_pane_t1

0x938a,	// (0x00011733) list_double_heading_pane_t2_ParamLimits

0x938a,	// (0x00011733) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000179eb) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000179eb) list_double_heading_pane_t

0x93d6,	// (0x0001177f) list_double_graphic_heading_pane_g1_ParamLimits

0x93d6,	// (0x0001177f) list_double_graphic_heading_pane_g1

0x952e,	// (0x000118d7) list_double_graphic_heading_pane_g2_ParamLimits

0x952e,	// (0x000118d7) list_double_graphic_heading_pane_g2

0x953d,	// (0x000118e6) list_double_graphic_heading_pane_g3_ParamLimits

0x953d,	// (0x000118e6) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000179f0) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000179f0) list_double_graphic_heading_pane_g

0x955f,	// (0x00011908) list_double_graphic_heading_pane_t1_ParamLimits

0x955f,	// (0x00011908) list_double_graphic_heading_pane_t1

0x945f,	// (0x00011808) list_double_graphic_heading_pane_t2_ParamLimits

0x945f,	// (0x00011808) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000179f7) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000179f7) list_double_graphic_heading_pane_t

0x949a,	// (0x00011843) list_double_time_pane_g1_ParamLimits

0x949a,	// (0x00011843) list_double_time_pane_g1

0x9325,	// (0x000116ce) list_double_time_pane_g2_ParamLimits

0x9325,	// (0x000116ce) list_double_time_pane_g2

0x0001,

0xf653,	// (0x000179fc) list_double_time_pane_g_ParamLimits

0xf653,	// (0x000179fc) list_double_time_pane_g

0x9575,	// (0x0001191e) list_double_time_pane_t1_ParamLimits

0x9575,	// (0x0001191e) list_double_time_pane_t1

0x958b,	// (0x00011934) list_double_time_pane_t2_ParamLimits

0x958b,	// (0x00011934) list_double_time_pane_t2

0x959d,	// (0x00011946) list_double_time_pane_t3_ParamLimits

0x959d,	// (0x00011946) list_double_time_pane_t3

0x95af,	// (0x00011958) list_double_time_pane_t4_ParamLimits

0x95af,	// (0x00011958) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00017a01) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00017a01) list_double_time_pane_t

0x943d,	// (0x000117e6) list_setting_pane_g1_ParamLimits

0x943d,	// (0x000117e6) list_setting_pane_g1

0x9368,	// (0x00011711) list_setting_pane_g2_ParamLimits

0x9368,	// (0x00011711) list_setting_pane_g2

0x0001,

0xf661,	// (0x00017a0a) list_setting_pane_g_ParamLimits

0xf661,	// (0x00017a0a) list_setting_pane_g

0x95c1,	// (0x0001196a) list_setting_pane_t1_ParamLimits

0x95c1,	// (0x0001196a) list_setting_pane_t1

0x95d8,	// (0x00011981) list_setting_pane_t2_ParamLimits

0x95d8,	// (0x00011981) list_setting_pane_t2

0x0002,

0xf666,	// (0x00017a0f) list_setting_pane_t_ParamLimits

0xf666,	// (0x00017a0f) list_setting_pane_t

0x9615,	// (0x000119be) set_value_pane_cp_ParamLimits

0x9615,	// (0x000119be) set_value_pane_cp

0x943d,	// (0x000117e6) list_setting_number_pane_g1_ParamLimits

0x943d,	// (0x000117e6) list_setting_number_pane_g1

0x9368,	// (0x00011711) list_setting_number_pane_g2_ParamLimits

0x9368,	// (0x00011711) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00017a0a) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00017a0a) list_setting_number_pane_g

0x9621,	// (0x000119ca) list_setting_number_pane_t1_ParamLimits

0x9621,	// (0x000119ca) list_setting_number_pane_t1

0x9633,	// (0x000119dc) list_setting_number_pane_t2_ParamLimits

0x9633,	// (0x000119dc) list_setting_number_pane_t2

0x964a,	// (0x000119f3) list_setting_number_pane_t3_ParamLimits

0x964a,	// (0x000119f3) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00017a16) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00017a16) list_setting_number_pane_t

0x9615,	// (0x000119be) set_value_pane_ParamLimits

0x9615,	// (0x000119be) set_value_pane

0x968b,	// (0x00011a34) bg_set_opt_pane_ParamLimits

0x968b,	// (0x00011a34) bg_set_opt_pane

0x96ac,	// (0x00011a55) set_value_pane_t1

0x96ba,	// (0x00011a63) slider_set_pane_cp3

0x96c3,	// (0x00011a6c) volume_small_pane_cp

0x96cc,	// (0x00011a75) list_form_gen_pane

0x921f,	// (0x000115c8) scroll_pane_cp8

0x96e5,	// (0x00011a8e) form_field_data_pane_ParamLimits

0x96e5,	// (0x00011a8e) form_field_data_pane

0x9705,	// (0x00011aae) form_field_data_wide_pane_ParamLimits

0x9705,	// (0x00011aae) form_field_data_wide_pane

0x9724,	// (0x00011acd) form_field_popup_pane_ParamLimits

0x9724,	// (0x00011acd) form_field_popup_pane

0x973c,	// (0x00011ae5) form_field_popup_wide_pane_ParamLimits

0x973c,	// (0x00011ae5) form_field_popup_wide_pane

0x9753,	// (0x00011afc) form_field_slider_pane_ParamLimits

0x9753,	// (0x00011afc) form_field_slider_pane

0x9766,	// (0x00011b0f) form_field_slider_wide_pane_ParamLimits

0x9766,	// (0x00011b0f) form_field_slider_wide_pane

0x9779,	// (0x00011b22) data_form_pane

0x978d,	// (0x00011b36) form_field_data_pane_t1

0x97a5,	// (0x00011b4e) input_focus_pane

0x97b3,	// (0x00011b5c) data_form_wide_pane

0x97df,	// (0x00011b88) form_field_data_wide_pane_t1

0x9096,	// (0x0001143f) input_focus_pane_cp6

0x97fe,	// (0x00011ba7) form_field_popup_pane_t1

0x97a5,	// (0x00011b4e) input_focus_pane_cp7

0x9779,	// (0x00011b22) list_form_pane

0x981e,	// (0x00011bc7) form_field_popup_wide_pane_t1

0x97a5,	// (0x00011b4e) input_focus_pane_cp8

0x9833,	// (0x00011bdc) list_form_wide_pane

0x984a,	// (0x00011bf3) form_field_slider_pane_t1_ParamLimits

0x984a,	// (0x00011bf3) form_field_slider_pane_t1

0x9860,	// (0x00011c09) form_field_slider_pane_t2_ParamLimits

0x9860,	// (0x00011c09) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00017a26) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00017a26) form_field_slider_pane_t

0x8d2e,	// (0x000110d7) input_focus_pane_cp9_ParamLimits

0x8d2e,	// (0x000110d7) input_focus_pane_cp9

0x9872,	// (0x00011c1b) slider_cont_pane_ParamLimits

0x9872,	// (0x00011c1b) slider_cont_pane

0x9886,	// (0x00011c2f) form_field_slider_wide_pane_t1_ParamLimits

0x9886,	// (0x00011c2f) form_field_slider_wide_pane_t1

0x9898,	// (0x00011c41) form_field_slider_wide_pane_t2_ParamLimits

0x9898,	// (0x00011c41) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00017a2b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00017a2b) form_field_slider_wide_pane_t

0x8d2e,	// (0x000110d7) input_focus_pane_cp10_ParamLimits

0x8d2e,	// (0x000110d7) input_focus_pane_cp10

0x98aa,	// (0x00011c53) slider_cont_pane_cp1_ParamLimits

0x98aa,	// (0x00011c53) slider_cont_pane_cp1

0x98c0,	// (0x00011c69) slider_form_pane_cp

0x98c8,	// (0x00011c71) input_focus_pane_g1

0x98d0,	// (0x00011c79) input_focus_pane_g2

0x98d8,	// (0x00011c81) input_focus_pane_g3

0x98e0,	// (0x00011c89) input_focus_pane_g4

0x98e8,	// (0x00011c91) input_focus_pane_g5

0x98f0,	// (0x00011c99) input_focus_pane_g6

0x98f8,	// (0x00011ca1) input_focus_pane_g7

0x9900,	// (0x00011ca9) input_focus_pane_g8

0x9908,	// (0x00011cb1) input_focus_pane_g9

0x88ce,	// (0x00010c77) input_focus_pane_g10

0x0009,

0xf687,	// (0x00017a30) input_focus_pane_g

0xb403,	// (0x000137ac) wait_border_pane_g3_copy1

0x9910,	// (0x00011cb9) data_form_pane_t1

0x88ce,	// (0x00010c77) wait_anim_pane_g1_copy1

0xc2a0,	// (0x00014649) data_form_wide_pane_t1

0x992a,	// (0x00011cd3) list_form_graphic_pane_cp_ParamLimits

0x992a,	// (0x00011cd3) list_form_graphic_pane_cp

0xc26d,	// (0x00014616) slider_form_pane_g1

0xc276,	// (0x0001461f) slider_form_pane_g2

0x0006,

0xf97e,	// (0x00017d27) slider_form_pane_g

0x993f,	// (0x00011ce8) list_form_graphic_pane_ParamLimits

0x993f,	// (0x00011ce8) list_form_graphic_pane

0x9955,	// (0x00011cfe) list_form_graphic_pane_g1

0x995d,	// (0x00011d06) list_form_graphic_pane_t1_ParamLimits

0x995d,	// (0x00011d06) list_form_graphic_pane_t1

0x8a95,	// (0x00010e3e) list_highlight_pane_cp5_ParamLimits

0x8a95,	// (0x00010e3e) list_highlight_pane_cp5

0x9972,	// (0x00011d1b) find_pane_g1

0x997b,	// (0x00011d24) input_find_pane

0x9984,	// (0x00011d2d) input_find_pane_g1_ParamLimits

0x9984,	// (0x00011d2d) input_find_pane_g1

0x9990,	// (0x00011d39) input_find_pane_t1_ParamLimits

0x9990,	// (0x00011d39) input_find_pane_t1

0x99a5,	// (0x00011d4e) input_find_pane_t2_ParamLimits

0x99a5,	// (0x00011d4e) input_find_pane_t2

0x0001,

0xf69c,	// (0x00017a45) input_find_pane_t_ParamLimits

0xf69c,	// (0x00017a45) input_find_pane_t

0x99ba,	// (0x00011d63) input_focus_pane_cp5_ParamLimits

0x99ba,	// (0x00011d63) input_focus_pane_cp5

0x8d2e,	// (0x000110d7) bg_popup_window_pane_cp2_ParamLimits

0x8d2e,	// (0x000110d7) bg_popup_window_pane_cp2

0x99d4,	// (0x00011d7d) listscroll_menu_pane_ParamLimits

0x99d4,	// (0x00011d7d) listscroll_menu_pane

0x99e0,	// (0x00011d89) popup_submenu_window_ParamLimits

0x99e0,	// (0x00011d89) popup_submenu_window

0x9a04,	// (0x00011dad) find_popup_pane_g1

0x9a0c,	// (0x00011db5) input_popup_find_pane_cp

0x99ba,	// (0x00011d63) input_focus_pane_cp4_ParamLimits

0x99ba,	// (0x00011d63) input_focus_pane_cp4

0x9a22,	// (0x00011dcb) input_popup_find_pane_t1_ParamLimits

0x9a22,	// (0x00011dcb) input_popup_find_pane_t1

0x89b5,	// (0x00010d5e) bg_popup_sub_pane_cp

0x9a50,	// (0x00011df9) listscroll_popup_sub_pane

0x9a58,	// (0x00011e01) list_submenu_pane_ParamLimits

0x9a58,	// (0x00011e01) list_submenu_pane

0x9a69,	// (0x00011e12) scroll_pane_cp4

0x9a71,	// (0x00011e1a) list_single_popup_submenu_pane_ParamLimits

0x9a71,	// (0x00011e1a) list_single_popup_submenu_pane

0x9a83,	// (0x00011e2c) list_single_popup_submenu_pane_g1

0x9a8b,	// (0x00011e34) list_single_popup_submenu_pane_t1_ParamLimits

0x9a8b,	// (0x00011e34) list_single_popup_submenu_pane_t1

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp1_ParamLimits

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp1

0x9aa0,	// (0x00011e49) tabs_2_active_pane_g1

0x9aa8,	// (0x00011e51) tabs_2_active_pane_t1

0x8a95,	// (0x00010e3e) bg_passive_tab_pane_cp1_ParamLimits

0x8a95,	// (0x00010e3e) bg_passive_tab_pane_cp1

0x9aa0,	// (0x00011e49) tabs_2_passive_pane_g1

0x9aa8,	// (0x00011e51) tabs_2_passive_pane_t1

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp4

0x9ac8,	// (0x00011e71) tabs_2_long_active_pane_t1

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp4

0x752f,	// (0x0000f8d8) list_single_midp_graphic_pane_g4_ParamLimits

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp5

0x9ae7,	// (0x00011e90) tabs_3_long_active_pane_t1

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp5

0x752f,	// (0x0000f8d8) list_single_midp_graphic_pane_g4

0x8a95,	// (0x00010e3e) bg_popup_window_pane_cp13_ParamLimits

0x8a95,	// (0x00010e3e) bg_popup_window_pane_cp13

0x9b02,	// (0x00011eab) listscroll_popup_fast_pane_ParamLimits

0x9b02,	// (0x00011eab) listscroll_popup_fast_pane

0x9b11,	// (0x00011eba) grid_popup_fast_pane_ParamLimits

0x9b11,	// (0x00011eba) grid_popup_fast_pane

0x9b23,	// (0x00011ecc) scroll_pane_cp9_ParamLimits

0x9b23,	// (0x00011ecc) scroll_pane_cp9

0xde98,	// (0x00016241) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xde98,	// (0x00016241) list_single_graphic_hl_pane_t1_cp2

0x9b47,	// (0x00011ef0) input_focus_pane_cp20_ParamLimits

0x9b47,	// (0x00011ef0) input_focus_pane_cp20

0x9b55,	// (0x00011efe) query_popup_data_pane_t1_ParamLimits

0x9b55,	// (0x00011efe) query_popup_data_pane_t1

0x9b68,	// (0x00011f11) query_popup_data_pane_t2_ParamLimits

0x9b68,	// (0x00011f11) query_popup_data_pane_t2

0x9bae,	// (0x00011f57) query_popup_data_pane_t3_ParamLimits

0x9bae,	// (0x00011f57) query_popup_data_pane_t3

0x9bef,	// (0x00011f98) query_popup_data_pane_t4_ParamLimits

0x9bef,	// (0x00011f98) query_popup_data_pane_t4

0x9c2b,	// (0x00011fd4) query_popup_data_pane_t5_ParamLimits

0x9c2b,	// (0x00011fd4) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00017a4a) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00017a4a) query_popup_data_pane_t

0x98c8,	// (0x00011c71) bg_set_opt_pane_g1

0x98d0,	// (0x00011c79) bg_set_opt_pane_g2

0x98d8,	// (0x00011c81) bg_set_opt_pane_g3

0x98e0,	// (0x00011c89) bg_set_opt_pane_g4

0x98e8,	// (0x00011c91) bg_set_opt_pane_g5

0x98f0,	// (0x00011c99) bg_set_opt_pane_g6

0x98f8,	// (0x00011ca1) bg_set_opt_pane_g7

0x9900,	// (0x00011ca9) bg_set_opt_pane_g8

0x9908,	// (0x00011cb1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00017a55) bg_set_opt_pane_g

0x6c8f,	// (0x0000f038) control_top_pane_stacon_ParamLimits

0x6c8f,	// (0x0000f038) control_top_pane_stacon

0x6ce2,	// (0x0000f08b) signal_pane_stacon_ParamLimits

0x6ce2,	// (0x0000f08b) signal_pane_stacon

0xa26f,	// (0x00012618) stacon_top_pane_g1_ParamLimits

0xa26f,	// (0x00012618) stacon_top_pane_g1

0x6d07,	// (0x0000f0b0) title_pane_stacon_ParamLimits

0x6d07,	// (0x0000f0b0) title_pane_stacon

0x6d29,	// (0x0000f0d2) uni_indicator_pane_stacon_ParamLimits

0x6d29,	// (0x0000f0d2) uni_indicator_pane_stacon

0x6d3e,	// (0x0000f0e7) battery_pane_stacon_ParamLimits

0x6d3e,	// (0x0000f0e7) battery_pane_stacon

0x6d7e,	// (0x0000f127) control_bottom_pane_stacon_ParamLimits

0x6d7e,	// (0x0000f127) control_bottom_pane_stacon

0x6d9d,	// (0x0000f146) navi_pane_stacon_ParamLimits

0x6d9d,	// (0x0000f146) navi_pane_stacon

0xa291,	// (0x0001263a) stacon_bottom_pane_g1_ParamLimits

0xa291,	// (0x0001263a) stacon_bottom_pane_g1

0x9c62,	// (0x0001200b) aid_levels_signal_lsc_ParamLimits

0x9c62,	// (0x0001200b) aid_levels_signal_lsc

0x6a5b,	// (0x0000ee04) signal_pane_stacon_g1_ParamLimits

0x6a5b,	// (0x0000ee04) signal_pane_stacon_g1

0x6a67,	// (0x0000ee10) signal_pane_stacon_g2_ParamLimits

0x6a67,	// (0x0000ee10) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00017a68) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00017a68) signal_pane_stacon_g

0x6a9b,	// (0x0000ee44) title_pane_stacon_t1_ParamLimits

0x6a9b,	// (0x0000ee44) title_pane_stacon_t1

0x9c7c,	// (0x00012025) uni_indicator_pane_stacon_g1

0x9c86,	// (0x0001202f) uni_indicator_pane_stacon_g2

0x9c90,	// (0x00012039) uni_indicator_pane_stacon_g3

0x9c9a,	// (0x00012043) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00017a74) uni_indicator_pane_stacon_g

0x6ac0,	// (0x0000ee69) control_top_pane_stacon_g1

0x6ac8,	// (0x0000ee71) control_top_pane_stacon_t1_ParamLimits

0x6ac8,	// (0x0000ee71) control_top_pane_stacon_t1

0x9ca4,	// (0x0001204d) aid_levels_battery_lsc_ParamLimits

0x9ca4,	// (0x0001204d) aid_levels_battery_lsc

0x6af9,	// (0x0000eea2) battery_pane_stacon_g1_ParamLimits

0x6af9,	// (0x0000eea2) battery_pane_stacon_g1

0x6b05,	// (0x0000eeae) battery_pane_stacon_g2_ParamLimits

0x6b05,	// (0x0000eeae) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00017a7d) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00017a7d) battery_pane_stacon_g

0x6b34,	// (0x0000eedd) navi_icon_pane_stacon

0x6b44,	// (0x0000eeed) navi_navi_pane_stacon

0x6b34,	// (0x0000eedd) navi_text_pane_stacon

0x6ac0,	// (0x0000ee69) control_bottom_pane_stacon_g1

0x6b54,	// (0x0000eefd) control_bottom_pane_stacon_t1_ParamLimits

0x6b54,	// (0x0000eefd) control_bottom_pane_stacon_t1

0x9ccc,	// (0x00012075) grid_app_pane_ParamLimits

0x9ccc,	// (0x00012075) grid_app_pane

0x9ce8,	// (0x00012091) scroll_pane_cp15_ParamLimits

0x9ce8,	// (0x00012091) scroll_pane_cp15

0x9cf9,	// (0x000120a2) cell_app_pane_ParamLimits

0x9cf9,	// (0x000120a2) cell_app_pane

0x9d1d,	// (0x000120c6) cell_app_pane_g1_ParamLimits

0x9d1d,	// (0x000120c6) cell_app_pane_g1

0x9d41,	// (0x000120ea) cell_app_pane_g2_ParamLimits

0x9d41,	// (0x000120ea) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00017a82) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00017a82) cell_app_pane_g

0x9d4d,	// (0x000120f6) cell_app_pane_t1_ParamLimits

0x9d4d,	// (0x000120f6) cell_app_pane_t1

0x9d64,	// (0x0001210d) grid_highlight_pane_ParamLimits

0x9d64,	// (0x0001210d) grid_highlight_pane

0x98c8,	// (0x00011c71) cell_highlight_pane_g1

0x98d0,	// (0x00011c79) cell_highlight_pane_g2

0x98d8,	// (0x00011c81) cell_highlight_pane_g3

0x98e0,	// (0x00011c89) cell_highlight_pane_g4

0x98e8,	// (0x00011c91) cell_highlight_pane_g5

0x98f0,	// (0x00011c99) cell_highlight_pane_g6

0x98f8,	// (0x00011ca1) cell_highlight_pane_g7

0x9900,	// (0x00011ca9) cell_highlight_pane_g8

0x9908,	// (0x00011cb1) cell_highlight_pane_g9

0x88ce,	// (0x00010c77) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00017a30) cell_highlight_pane_g

0x9d75,	// (0x0001211e) bg_scroll_pane

0x6b98,	// (0x0000ef41) scroll_handle_pane

0x9dbc,	// (0x00012165) scroll_bg_pane_g1

0x9dd1,	// (0x0001217a) scroll_bg_pane_g2

0x9de9,	// (0x00012192) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00017a87) scroll_bg_pane_g

0x9dfe,	// (0x000121a7) scroll_handle_focus_pane_ParamLimits

0x9dfe,	// (0x000121a7) scroll_handle_focus_pane

0x9dbc,	// (0x00012165) scroll_handle_pane_g1

0x9e0b,	// (0x000121b4) scroll_handle_pane_g2

0x9de9,	// (0x00012192) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00017a8e) scroll_handle_pane_g

0x99ba,	// (0x00011d63) bg_popup_sub_pane_cp21_ParamLimits

0x99ba,	// (0x00011d63) bg_popup_sub_pane_cp21

0x9e1f,	// (0x000121c8) popup_fep_japan_predictive_window_t1_ParamLimits

0x9e1f,	// (0x000121c8) popup_fep_japan_predictive_window_t1

0x9e36,	// (0x000121df) popup_fep_japan_predictive_window_t2_ParamLimits

0x9e36,	// (0x000121df) popup_fep_japan_predictive_window_t2

0x9e69,	// (0x00012212) popup_fep_japan_predictive_window_t3_ParamLimits

0x9e69,	// (0x00012212) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00017a95) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00017a95) popup_fep_japan_predictive_window_t

0x89b5,	// (0x00010d5e) bg_popup_sub_pane_cp23

0x9ea0,	// (0x00012249) listscroll_japin_cand_pane

0x9ea8,	// (0x00012251) popup_fep_japan_candidate_window_t1

0x9eb6,	// (0x0001225f) candidate_pane_ParamLimits

0x9eb6,	// (0x0001225f) candidate_pane

0x9ec9,	// (0x00012272) scroll_pane_cp30

0x9ed1,	// (0x0001227a) list_single_popup_jap_candidate_pane_ParamLimits

0x9ed1,	// (0x0001227a) list_single_popup_jap_candidate_pane

0x89b5,	// (0x00010d5e) list_highlight_pane_cp30

0x9ee6,	// (0x0001228f) list_single_popup_jap_candidate_pane_t1

0x9ef5,	// (0x0001229e) level_1_signal

0x9f02,	// (0x000122ab) level_2_signal

0x9f0f,	// (0x000122b8) level_3_signal

0x9f1c,	// (0x000122c5) level_4_signal

0x9f29,	// (0x000122d2) level_5_signal

0x9f36,	// (0x000122df) level_6_signal

0x9f43,	// (0x000122ec) level_7_signal

0x9ef5,	// (0x0001229e) level_1_battery

0x9f02,	// (0x000122ab) level_2_battery

0x9f0f,	// (0x000122b8) level_3_battery

0x9f1c,	// (0x000122c5) level_4_battery

0x9f29,	// (0x000122d2) level_5_battery

0x9f36,	// (0x000122df) level_6_battery

0x9f43,	// (0x000122ec) level_7_battery

0x9f68,	// (0x00012311) list_menu_pane_ParamLimits

0x9f68,	// (0x00012311) list_menu_pane

0x9f7e,	// (0x00012327) scroll_pane_cp25_ParamLimits

0x9f7e,	// (0x00012327) scroll_pane_cp25

0x9f97,	// (0x00012340) list_double2_graphic_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double2_graphic_pane_cp2

0x9f97,	// (0x00012340) list_double2_large_graphic_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double2_large_graphic_pane_cp2

0x9f97,	// (0x00012340) list_double2_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double2_pane_cp2

0x9f97,	// (0x00012340) list_double_graphic_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double_graphic_pane_cp2

0x9f97,	// (0x00012340) list_double_large_graphic_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double_large_graphic_pane_cp2

0x9f97,	// (0x00012340) list_double_number_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double_number_pane_cp2

0x9f97,	// (0x00012340) list_double_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double_pane_cp2

0x9fa7,	// (0x00012350) list_single_2graphic_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_2graphic_pane_cp2

0x9fa7,	// (0x00012350) list_single_graphic_heading_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_graphic_heading_pane_cp2

0x9fa7,	// (0x00012350) list_single_graphic_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_graphic_pane_cp2

0x9fa7,	// (0x00012350) list_single_heading_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_heading_pane_cp2

0x9fbc,	// (0x00012365) list_single_large_graphic_pane_cp2_ParamLimits

0x9fbc,	// (0x00012365) list_single_large_graphic_pane_cp2

0x9fa7,	// (0x00012350) list_single_number_heading_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_number_heading_pane_cp2

0x9fa7,	// (0x00012350) list_single_number_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_number_pane_cp2

0x9fa7,	// (0x00012350) list_single_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_pane_cp2

0xa038,	// (0x000123e1) bg_popup_sub_pane_cp22

0x6c47,	// (0x0000eff0) popup_side_volume_key_window_g1

0x6c6b,	// (0x0000f014) popup_side_volume_key_window_t1

0x6c87,	// (0x0000f030) volume_small_pane_cp1

0x8d2e,	// (0x000110d7) bg_popup_sub_pane_cp24_ParamLimits

0x8d2e,	// (0x000110d7) bg_popup_sub_pane_cp24

0xa04e,	// (0x000123f7) fep_china_uni_candidate_pane_ParamLimits

0xa04e,	// (0x000123f7) fep_china_uni_candidate_pane

0xa062,	// (0x0001240b) fep_china_uni_entry_pane

0xa072,	// (0x0001241b) popup_fep_china_uni_window_g1

0xa08e,	// (0x00012437) fep_china_uni_entry_pane_g1

0xa096,	// (0x0001243f) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00017ac6) fep_china_uni_entry_pane_g

0xa09e,	// (0x00012447) fep_entry_item_pane

0xa0a8,	// (0x00012451) fep_candidate_item_pane

0xa0b0,	// (0x00012459) fep_china_uni_candidate_pane_g1

0xa0b8,	// (0x00012461) fep_china_uni_candidate_pane_g2

0xa0c0,	// (0x00012469) fep_china_uni_candidate_pane_g3

0xa0c8,	// (0x00012471) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00017acb) fep_china_uni_candidate_pane_g

0x88ce,	// (0x00010c77) fep_entry_item_pane_g1

0xa0d0,	// (0x00012479) fep_entry_item_pane_t1_ParamLimits

0xa0d0,	// (0x00012479) fep_entry_item_pane_t1

0xa0e6,	// (0x0001248f) fep_candidate_item_pane_t1_ParamLimits

0xa0e6,	// (0x0001248f) fep_candidate_item_pane_t1

0xa0fb,	// (0x000124a4) fep_candidate_item_pane_t2_ParamLimits

0xa0fb,	// (0x000124a4) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00017ad4) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00017ad4) fep_candidate_item_pane_t

0x8a95,	// (0x00010e3e) list_highlight_pane_cp31_ParamLimits

0x8a95,	// (0x00010e3e) list_highlight_pane_cp31

0xa10d,	// (0x000124b6) level_1_signal_lsc

0xa116,	// (0x000124bf) level_2_signal_lsc

0xa11f,	// (0x000124c8) level_3_signal_lsc

0xa128,	// (0x000124d1) level_4_signal_lsc

0xa131,	// (0x000124da) level_5_signal_lsc

0xa13a,	// (0x000124e3) level_6_signal_lsc

0xa143,	// (0x000124ec) level_7_signal_lsc

0xa143,	// (0x000124ec) level_1_battery_lsc

0xa14c,	// (0x000124f5) level_2_battery_lsc

0xa155,	// (0x000124fe) level_3_battery_lsc

0xa15e,	// (0x00012507) level_4_battery_lsc

0xa167,	// (0x00012510) level_5_battery_lsc

0xa170,	// (0x00012519) level_6_battery_lsc

0xa10d,	// (0x000124b6) level_7_battery_lsc

0xa179,	// (0x00012522) scroll_handle_focus_pane_g1

0xa182,	// (0x0001252b) scroll_handle_focus_pane_g2

0xa18b,	// (0x00012534) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00017ad9) scroll_handle_focus_pane_g

0xa194,	// (0x0001253d) list_single_2graphic_pane_g1_ParamLimits

0xa194,	// (0x0001253d) list_single_2graphic_pane_g1

0x92b6,	// (0x0001165f) list_single_2graphic_pane_g2_ParamLimits

0x92b6,	// (0x0001165f) list_single_2graphic_pane_g2

0x9248,	// (0x000115f1) list_single_2graphic_pane_g3_ParamLimits

0x9248,	// (0x000115f1) list_single_2graphic_pane_g3

0xa1a0,	// (0x00012549) list_single_2graphic_pane_g4_ParamLimits

0xa1a0,	// (0x00012549) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00017ae0) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00017ae0) list_single_2graphic_pane_g

0xa1ac,	// (0x00012555) list_single_2graphic_pane_t1_ParamLimits

0xa1ac,	// (0x00012555) list_single_2graphic_pane_t1

0xa1da,	// (0x00012583) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa1da,	// (0x00012583) list_double2_graphic_large_graphic_pane_g1

0x9359,	// (0x00011702) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9359,	// (0x00011702) list_double2_graphic_large_graphic_pane_g2

0x9368,	// (0x00011711) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9368,	// (0x00011711) list_double2_graphic_large_graphic_pane_g3

0xa1ea,	// (0x00012593) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa1ea,	// (0x00012593) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00017ae9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00017ae9) list_double2_graphic_large_graphic_pane_g

0xa1f6,	// (0x0001259f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa1f6,	// (0x0001259f) list_double2_graphic_large_graphic_pane_t1

0xa20c,	// (0x000125b5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa20c,	// (0x000125b5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00017af2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00017af2) list_double2_graphic_large_graphic_pane_t

0xa338,	// (0x000126e1) popup_fast_swap_window_ParamLimits

0xa338,	// (0x000126e1) popup_fast_swap_window

0xa354,	// (0x000126fd) popup_side_volume_key_window

0xa36e,	// (0x00012717) stacon_top_pane

0xa378,	// (0x00012721) status_pane_ParamLimits

0xa378,	// (0x00012721) status_pane

0xa386,	// (0x0001272f) status_small_pane

0x89b5,	// (0x00010d5e) control_pane

0x89b5,	// (0x00010d5e) stacon_bottom_pane

0x921f,	// (0x000115c8) scroll_pane_cp121

0x96cc,	// (0x00011a75) set_content_pane

0xa21e,	// (0x000125c7) bg_active_tab_pane_g1_cp1

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp1

0xa230,	// (0x000125d9) bg_active_tab_pane_g3_cp1

0xa21e,	// (0x000125c7) bg_passive_tab_pane_g1_cp1

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp1

0xa230,	// (0x000125d9) bg_passive_tab_pane_g3_cp1

0xa239,	// (0x000125e2) bg_active_tab_pane_g1_cp2

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp2

0xa242,	// (0x000125eb) bg_active_tab_pane_g3_cp2

0xa239,	// (0x000125e2) bg_passive_tab_pane_g1_cp2

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp2

0xa242,	// (0x000125eb) bg_passive_tab_pane_g3_cp2

0xa24b,	// (0x000125f4) bg_active_tab_pane_g1_cp3

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp3

0xa254,	// (0x000125fd) bg_active_tab_pane_g3_cp3

0xa24b,	// (0x000125f4) bg_passive_tab_pane_g1_cp3

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp3

0xa254,	// (0x000125fd) bg_passive_tab_pane_g3_cp3

0xa25d,	// (0x00012606) bg_active_tab_pane_g1_cp4

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp4

0xa266,	// (0x0001260f) bg_active_tab_pane_g3_cp4

0xa25d,	// (0x00012606) bg_passive_tab_pane_g1_cp4

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp4

0xa266,	// (0x0001260f) bg_passive_tab_pane_g3_cp4

0xa2ad,	// (0x00012656) bg_active_tab_pane_g1_cp5

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp5

0xa2b6,	// (0x0001265f) bg_active_tab_pane_g3_cp5

0xa2ad,	// (0x00012656) bg_passive_tab_pane_g1_cp5

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp5

0xa2b6,	// (0x0001265f) bg_passive_tab_pane_g3_cp5

0x993f,	// (0x00011ce8) list_set_graphic_pane_ParamLimits

0x993f,	// (0x00011ce8) list_set_graphic_pane

0x89b5,	// (0x00010d5e) bg_set_opt_pane_cp4

0xa2bf,	// (0x00012668) list_set_graphic_pane_g1_ParamLimits

0xa2bf,	// (0x00012668) list_set_graphic_pane_g1

0xa2cb,	// (0x00012674) list_set_graphic_pane_g2_ParamLimits

0xa2cb,	// (0x00012674) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00017af7) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00017af7) list_set_graphic_pane_g

0x0009,

0xfac0,	// (0x00017e69) volume_small_pane_cp_g

0xa2ed,	// (0x00012696) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa2ed,	// (0x00012696) list_double2_large_graphic_pane_g1_cp2

0xa2f9,	// (0x000126a2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa2f9,	// (0x000126a2) list_double2_large_graphic_pane_g2_cp2

0xa308,	// (0x000126b1) list_double2_large_graphic_pane_g3_cp2

0xa310,	// (0x000126b9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xa310,	// (0x000126b9) list_double2_large_graphic_pane_t1_cp2

0xa326,	// (0x000126cf) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xa326,	// (0x000126cf) list_double2_large_graphic_pane_t2_cp2

0xbe69,	// (0x00014212) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbe69,	// (0x00014212) list_double_large_graphic_pane_g1_cp2

0xbe7a,	// (0x00014223) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xbe7a,	// (0x00014223) list_double_large_graphic_pane_g2_cp2

0xa45c,	// (0x00012805) list_double_large_graphic_pane_g3_cp2

0xbe89,	// (0x00014232) list_double_large_graphic_pane_g4_cp

0xbe91,	// (0x0001423a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xbe91,	// (0x0001423a) list_double_large_graphic_pane_t1_cp2

0xbea8,	// (0x00014251) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xbea8,	// (0x00014251) list_double_large_graphic_pane_t2_cp2

0xa38f,	// (0x00012738) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa38f,	// (0x00012738) list_double2_graphic_pane_g1_cp2

0xa39b,	// (0x00012744) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa39b,	// (0x00012744) list_double2_graphic_pane_g2_cp2

0xa3aa,	// (0x00012753) list_double2_graphic_pane_g3_cp2

0xa3b2,	// (0x0001275b) list_double2_graphic_pane_t1_cp2_ParamLimits

0xa3b2,	// (0x0001275b) list_double2_graphic_pane_t1_cp2

0xa3c8,	// (0x00012771) list_double2_graphic_pane_t2_cp2_ParamLimits

0xa3c8,	// (0x00012771) list_double2_graphic_pane_t2_cp2

0xa3da,	// (0x00012783) list_single_number_heading_pane_g1_cp2_ParamLimits

0xa3da,	// (0x00012783) list_single_number_heading_pane_g1_cp2

0xa3e6,	// (0x0001278f) list_single_number_heading_pane_g2_cp2

0xa3ee,	// (0x00012797) list_single_number_heading_pane_t1_cp2_ParamLimits

0xa3ee,	// (0x00012797) list_single_number_heading_pane_t1_cp2

0xa404,	// (0x000127ad) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa404,	// (0x000127ad) list_single_number_heading_pane_t2_cp2

0xa416,	// (0x000127bf) list_single_number_heading_pane_t3_cp2_ParamLimits

0xa416,	// (0x000127bf) list_single_number_heading_pane_t3_cp2

0xa3da,	// (0x00012783) list_single_heading_pane_g1_cp2_ParamLimits

0xa3da,	// (0x00012783) list_single_heading_pane_g1_cp2

0xa3e6,	// (0x0001278f) list_single_heading_pane_g2_cp2

0xa3ee,	// (0x00012797) list_single_heading_pane_t1_cp2_ParamLimits

0xa3ee,	// (0x00012797) list_single_heading_pane_t1_cp2

0xbc73,	// (0x0001401c) list_single_heading_pane_t2_cp2_ParamLimits

0xbc73,	// (0x0001401c) list_single_heading_pane_t2_cp2

0xbbc3,	// (0x00013f6c) list_double_graphic_pane_g1_cp2_ParamLimits

0xbbc3,	// (0x00013f6c) list_double_graphic_pane_g1_cp2

0xbbcf,	// (0x00013f78) list_double_graphic_pane_g2_cp2_ParamLimits

0xbbcf,	// (0x00013f78) list_double_graphic_pane_g2_cp2

0xbbde,	// (0x00013f87) list_double_graphic_pane_g3_cp2

0xbbe6,	// (0x00013f8f) list_double_graphic_pane_t1_cp2_ParamLimits

0xbbe6,	// (0x00013f8f) list_double_graphic_pane_t1_cp2

0xbbfc,	// (0x00013fa5) list_double_graphic_pane_t2_cp2_ParamLimits

0xbbfc,	// (0x00013fa5) list_double_graphic_pane_t2_cp2

0xa450,	// (0x000127f9) list_double_number_pane_g1_cp2_ParamLimits

0xa450,	// (0x000127f9) list_double_number_pane_g1_cp2

0xa45c,	// (0x00012805) list_double_number_pane_g2_cp2

0xbb89,	// (0x00013f32) list_double_number_pane_t1_cp2_ParamLimits

0xbb89,	// (0x00013f32) list_double_number_pane_t1_cp2

0xbb9b,	// (0x00013f44) list_double_number_pane_t2_cp2_ParamLimits

0xbb9b,	// (0x00013f44) list_double_number_pane_t2_cp2

0xbbb1,	// (0x00013f5a) list_double_number_pane_t3_cp2_ParamLimits

0xbbb1,	// (0x00013f5a) list_double_number_pane_t3_cp2

0xba73,	// (0x00013e1c) list_single_graphic_pane_g1_cp2_ParamLimits

0xba73,	// (0x00013e1c) list_single_graphic_pane_g1_cp2

0xa3da,	// (0x00012783) list_single_graphic_pane_g2_cp2_ParamLimits

0xa3da,	// (0x00012783) list_single_graphic_pane_g2_cp2

0xa3e6,	// (0x0001278f) list_single_graphic_pane_g3_cp2

0xba4b,	// (0x00013df4) list_single_graphic_pane_t1_cp2_ParamLimits

0xba4b,	// (0x00013df4) list_single_graphic_pane_t1_cp2

0xa3da,	// (0x00012783) list_single_number_pane_g1_cp2_ParamLimits

0xa3da,	// (0x00012783) list_single_number_pane_g1_cp2

0xa3e6,	// (0x0001278f) list_single_number_pane_g2_cp2

0xba4b,	// (0x00013df4) list_single_number_pane_t1_cp2_ParamLimits

0xba4b,	// (0x00013df4) list_single_number_pane_t1_cp2

0xba61,	// (0x00013e0a) list_single_number_pane_t2_cp2_ParamLimits

0xba61,	// (0x00013e0a) list_single_number_pane_t2_cp2

0xa2f9,	// (0x000126a2) list_double2_pane_g1_cp2_ParamLimits

0xa2f9,	// (0x000126a2) list_double2_pane_g1_cp2

0xa308,	// (0x000126b1) list_double2_pane_g2_cp2

0xa428,	// (0x000127d1) list_double2_pane_t1_cp2_ParamLimits

0xa428,	// (0x000127d1) list_double2_pane_t1_cp2

0xa43e,	// (0x000127e7) list_double2_pane_t2_cp2_ParamLimits

0xa43e,	// (0x000127e7) list_double2_pane_t2_cp2

0xa450,	// (0x000127f9) list_double_pane_g1_cp2_ParamLimits

0xa450,	// (0x000127f9) list_double_pane_g1_cp2

0xa45c,	// (0x00012805) list_double_pane_g2_cp2

0xa464,	// (0x0001280d) list_double_pane_t1_cp2_ParamLimits

0xa464,	// (0x0001280d) list_double_pane_t1_cp2

0xa47a,	// (0x00012823) list_double_pane_t2_cp2_ParamLimits

0xa47a,	// (0x00012823) list_double_pane_t2_cp2

0xa4a2,	// (0x0001284b) list_single_pane_cp2_g3

0xa3da,	// (0x00012783) list_single_pane_g1_cp2_ParamLimits

0xa3da,	// (0x00012783) list_single_pane_g1_cp2

0xa3e6,	// (0x0001278f) list_single_pane_g2_cp2

0xa4b2,	// (0x0001285b) list_single_pane_t1_cp2_ParamLimits

0xa4b2,	// (0x0001285b) list_single_pane_t1_cp2

0xa4ca,	// (0x00012873) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa4ca,	// (0x00012873) list_single_large_graphic_pane_g1_cp2

0xa4d6,	// (0x0001287f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xa4d6,	// (0x0001287f) list_single_large_graphic_pane_g2_cp2

0xa4e2,	// (0x0001288b) list_single_large_graphic_pane_g3_cp2

0xa4ea,	// (0x00012893) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa4ea,	// (0x00012893) list_single_large_graphic_pane_g4_cp1

0xa504,	// (0x000128ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xa504,	// (0x000128ad) list_single_large_graphic_pane_t1_cp2

0xba2d,	// (0x00013dd6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xba2d,	// (0x00013dd6) list_single_graphic_heading_pane_g1_cp2

0xba08,	// (0x00013db1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xba08,	// (0x00013db1) list_single_graphic_heading_pane_g4_cp2

0xa3e6,	// (0x0001278f) list_single_graphic_heading_pane_g5_cp2

0xa3ee,	// (0x00012797) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa3ee,	// (0x00012797) list_single_graphic_heading_pane_t1_cp2

0xba39,	// (0x00013de2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xba39,	// (0x00013de2) list_single_graphic_heading_pane_t2_cp2

0xb9fc,	// (0x00013da5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xb9fc,	// (0x00013da5) list_single_2graphic_pane_g1_cp2

0xba08,	// (0x00013db1) list_single_2graphic_pane_g2_cp2_ParamLimits

0xba08,	// (0x00013db1) list_single_2graphic_pane_g2_cp2

0xa3e6,	// (0x0001278f) list_single_2graphic_pane_g3_cp2

0xb18d,	// (0x00013536) list_single_2graphic_pane_g4_cp2_ParamLimits

0xb18d,	// (0x00013536) list_single_2graphic_pane_g4_cp2

0xba17,	// (0x00013dc0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xba17,	// (0x00013dc0) list_single_2graphic_pane_t1_cp2

0x88ce,	// (0x00010c77) list_highlight_pane_g10_cp1

0xb5f6,	// (0x0001399f) list_highlight_pane_g1_cp1

0xb5fe,	// (0x000139a7) list_highlight_pane_g2_cp1

0xb606,	// (0x000139af) list_highlight_pane_g3_cp1

0xb60e,	// (0x000139b7) list_highlight_pane_g4_cp1

0xb616,	// (0x000139bf) list_highlight_pane_g5_cp1

0xb61e,	// (0x000139c7) list_highlight_pane_g6_cp1

0xb626,	// (0x000139cf) list_highlight_pane_g7_cp1

0xb62e,	// (0x000139d7) list_highlight_pane_g8_cp1

0xb636,	// (0x000139df) list_highlight_pane_g9_cp1

0xb524,	// (0x000138cd) form_field_slider_pane_t3

0xb532,	// (0x000138db) form_field_slider_pane_t4

0xb540,	// (0x000138e9) slider_form_pane_ParamLimits

0xb540,	// (0x000138e9) slider_form_pane

0x89b5,	// (0x00010d5e) control_abbreviations

0x89b5,	// (0x00010d5e) control_conventions

0x89b5,	// (0x00010d5e) control_definitions

0x89b5,	// (0x00010d5e) format_table_attribute

0xbcbd,	// (0x00014066) bg_popup_preview_window_pane_g9

0x89b5,	// (0x00010d5e) format_table_data2

0x89b5,	// (0x00010d5e) format_table_data3

0x89b5,	// (0x00010d5e) format_table_data_example

0x0008,

0x89b5,	// (0x00010d5e) intro_purpose

0xf8de,	// (0x00017c87) bg_popup_preview_window_pane_g

0x89b5,	// (0x00010d5e) texts_category

0x89b5,	// (0x00010d5e) texts_graphics

0xa51a,	// (0x000128c3) text_digital

0xa529,	// (0x000128d2) text_primary

0xa538,	// (0x000128e1) text_primary_small

0xa547,	// (0x000128f0) text_secondary

0xa556,	// (0x000128ff) text_title

0xc426,	// (0x000147cf) bg_passive_tab_pane_g1_cp3_srt

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp3_srt

0xc42f,	// (0x000147d8) bg_passive_tab_pane_g3_cp3_srt

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp3_srt_ParamLimits

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp3_srt

0xc438,	// (0x000147e1) tabs_4_active_pane_srt_g1

0x8ac5,	// (0x00010e6e) tabs_4_active_pane_srt_t1_ParamLimits

0x8ac5,	// (0x00010e6e) tabs_4_active_pane_srt_t1

0xc426,	// (0x000147cf) bg_active_tab_pane_g1_cp3_copy1

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp3_copy1

0xc42f,	// (0x000147d8) bg_active_tab_pane_g3_cp3_copy1

0x8a95,	// (0x00010e3e) tabs_2_long_active_pane_srt_ParamLimits

0x8a95,	// (0x00010e3e) tabs_2_long_active_pane_srt

0x8a95,	// (0x00010e3e) tabs_2_long_passive_pane_srt_ParamLimits

0x8a95,	// (0x00010e3e) tabs_2_long_passive_pane_srt

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp4_srt_ParamLimits

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp4_srt

0xc0e4,	// (0x0001448d) bg_passive_tab_pane_g1_cp4_srt

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp4_srt

0xc0ed,	// (0x00014496) bg_passive_tab_pane_g3_cp4_srt

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp4_srt_ParamLimits

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp4_srt

0x9ac8,	// (0x00011e71) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9ac8,	// (0x00011e71) tabs_2_long_active_pane_srt_t1

0xc0e4,	// (0x0001448d) bg_active_tab_pane_g1_cp4_srt

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp4_srt

0xc0ed,	// (0x00014496) bg_active_tab_pane_g3_cp4_srt

0x8d2e,	// (0x000110d7) tabs_3_long_active_pane_srt_ParamLimits

0x8d2e,	// (0x000110d7) tabs_3_long_active_pane_srt

0x8d2e,	// (0x000110d7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8d2e,	// (0x000110d7) tabs_3_long_passive_pane_cp_srt

0x8d2e,	// (0x000110d7) tabs_3_long_passive_pane_srt_ParamLimits

0x8d2e,	// (0x000110d7) tabs_3_long_passive_pane_srt

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp5_srt_ParamLimits

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp5_srt

0xa2ad,	// (0x00012656) bg_passive_tab_pane_g1_cp5_srt

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp5_srt

0xa2b6,	// (0x0001265f) bg_passive_tab_pane_g3_cp5_srt

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp5_srt_ParamLimits

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp5_srt

0x9ae7,	// (0x00011e90) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9ae7,	// (0x00011e90) tabs_3_long_active_pane_srt_t1

0xa2ad,	// (0x00012656) bg_active_tab_pane_g1_cp5_srt

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp5_srt

0xa2b6,	// (0x0001265f) bg_active_tab_pane_g3_cp5_srt

0xc0d6,	// (0x0001447f) navi_text_pane_srt_t1

0xc0ce,	// (0x00014477) navi_icon_pane_srt_g1

0xa71d,	// (0x00012ac6) midp_editing_number_pane_srt

0xa565,	// (0x0001290e) midp_ticker_pane_srt

0xa725,	// (0x00012ace) midp_ticker_pane_srt_g1

0xa72d,	// (0x00012ad6) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00017b16) midp_ticker_pane_srt_g

0xa735,	// (0x00012ade) midp_ticker_pane_srt_t1

0xc0bf,	// (0x00014468) midp_editing_number_pane_t1_copy1

0xa56d,	// (0x00012916) listscroll_midp_pane

0xa56d,	// (0x00012916) midp_form_pane

0xa5d5,	// (0x0001297e) midp_info_popup_window_ParamLimits

0xa5d5,	// (0x0001297e) midp_info_popup_window

0x99ba,	// (0x00011d63) bg_popup_sub_pane_cp50_ParamLimits

0x99ba,	// (0x00011d63) bg_popup_sub_pane_cp50

0xb241,	// (0x000135ea) listscroll_midp_info_pane_ParamLimits

0xb241,	// (0x000135ea) listscroll_midp_info_pane

0xb229,	// (0x000135d2) listscroll_form_midp_pane_ParamLimits

0xb229,	// (0x000135d2) listscroll_form_midp_pane

0xb235,	// (0x000135de) scroll_bar_cp050

0xb209,	// (0x000135b2) list_midp_pane

0xd023,	// (0x000153cc) signal_pane_g2_cp

0xb137,	// (0x000134e0) listscroll_midp_info_pane_t1_ParamLimits

0xb137,	// (0x000134e0) listscroll_midp_info_pane_t1

0xb14f,	// (0x000134f8) listscroll_midp_info_pane_t2_ParamLimits

0xb14f,	// (0x000134f8) listscroll_midp_info_pane_t2

0xb199,	// (0x00013542) listscroll_midp_info_pane_t3_ParamLimits

0xb199,	// (0x00013542) listscroll_midp_info_pane_t3

0xb1d3,	// (0x0001357c) listscroll_midp_info_pane_t4_ParamLimits

0xb1d3,	// (0x0001357c) listscroll_midp_info_pane_t4

0x0003,

0xf819,	// (0x00017bc2) listscroll_midp_info_pane_t_ParamLimits

0xf819,	// (0x00017bc2) listscroll_midp_info_pane_t

0x9a69,	// (0x00011e12) scroll_pane_cp21

0xb0db,	// (0x00013484) form_midp_field_choice_group_pane

0xb0e4,	// (0x0001348d) form_midp_field_text_pane

0xb11d,	// (0x000134c6) form_midp_field_time_pane

0xb125,	// (0x000134ce) form_midp_gauge_slider_pane

0xb12e,	// (0x000134d7) form_midp_gauge_wait_pane

0x89b5,	// (0x00010d5e) form_midp_image_pane

0xb0c6,	// (0x0001346f) list_single_midp_pane_ParamLimits

0xb0c6,	// (0x0001346f) list_single_midp_pane

0xb094,	// (0x0001343d) form_midp_field_text_pane_t1

0xae93,	// (0x0001323c) input_focus_pane_cp050

0xb0b5,	// (0x0001345e) list_midp_form_text_pane

0xb063,	// (0x0001340c) form_midp_field_choice_group_pane_t1

0xb071,	// (0x0001341a) input_focus_pane_cp051

0xb085,	// (0x0001342e) list_midp_choice_pane

0x89b5,	// (0x00010d5e) status_idle_pane

0xb047,	// (0x000133f0) form_midp_field_time_pane_t1

0x88ce,	// (0x00010c77) wait_anim_pane_g2_copy1

0xb055,	// (0x000133fe) form_midp_field_time_pane_t2

0x0001,

0xa67f,	// (0x00012a28) aid_navinavi_width_2_pane

0xf814,	// (0x00017bbd) form_midp_field_time_pane_t

0x89b5,	// (0x00010d5e) input_focus_pane_cp052

0x89b5,	// (0x00010d5e) bg_input_focus_pane_cp040

0xb007,	// (0x000133b0) form_midp_gauge_slider_pane_t1

0xb015,	// (0x000133be) form_midp_gauge_slider_pane_t2

0xb023,	// (0x000133cc) form_midp_gauge_slider_pane_t3

0xb031,	// (0x000133da) form_midp_gauge_slider_pane_t4

0x0003,

0xf80b,	// (0x00017bb4) form_midp_gauge_slider_pane_t

0xb03f,	// (0x000133e8) form_midp_slider_pane

0x8a95,	// (0x00010e3e) bg_input_focus_pane_cp041_ParamLimits

0x8a95,	// (0x00010e3e) bg_input_focus_pane_cp041

0xafd7,	// (0x00013380) form_midp_gauge_wait_pane_t1_ParamLimits

0xafd7,	// (0x00013380) form_midp_gauge_wait_pane_t1

0xafe9,	// (0x00013392) form_midp_gauge_wait_pane_t2_ParamLimits

0xafe9,	// (0x00013392) form_midp_gauge_wait_pane_t2

0x0001,

0xf806,	// (0x00017baf) form_midp_gauge_wait_pane_t_ParamLimits

0xf806,	// (0x00017baf) form_midp_gauge_wait_pane_t

0xaffb,	// (0x000133a4) form_midp_wait_pane_ParamLimits

0xaffb,	// (0x000133a4) form_midp_wait_pane

0xafa1,	// (0x0001334a) form_midp_image_pane_g1

0xafaa,	// (0x00013353) form_midp_image_pane_t1

0xafb9,	// (0x00013362) form_midp_image_pane_t2

0xafc8,	// (0x00013371) form_midp_image_pane_t3

0x0002,

0xf7ff,	// (0x00017ba8) form_midp_image_pane_t

0xaf89,	// (0x00013332) list_single_midp_pane_g1

0xaf92,	// (0x0001333b) list_single_midp_pane_t1

0xaf75,	// (0x0001331e) list_midp_form_item_pane_ParamLimits

0xaf75,	// (0x0001331e) list_midp_form_item_pane

0xa627,	// (0x000129d0) list_midp_form_item_pane_t1

0xa636,	// (0x000129df) midp_ticker_pane_g1

0xa642,	// (0x000129eb) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00017afc) midp_ticker_pane_g

0xa64e,	// (0x000129f7) midp_ticker_pane_t1

0xc0bf,	// (0x00014468) midp_editing_number_pane_t1

0xc2d0,	// (0x00014679) midp_editing_number_pane

0xc2dc,	// (0x00014685) midp_ticker_pane

0xc09d,	// (0x00014446) ai_message_heading_pane

0x89b5,	// (0x00010d5e) bg_popup_window_pane_cp14

0xc0a5,	// (0x0001444e) listscroll_ai_message_pane

0xc027,	// (0x000143d0) ai_message_heading_pane_g1_ParamLimits

0xc027,	// (0x000143d0) ai_message_heading_pane_g1

0xc033,	// (0x000143dc) ai_message_heading_pane_g2_ParamLimits

0xc033,	// (0x000143dc) ai_message_heading_pane_g2

0xc03f,	// (0x000143e8) ai_message_heading_pane_g3_ParamLimits

0xc03f,	// (0x000143e8) ai_message_heading_pane_g3

0xc04b,	// (0x000143f4) ai_message_heading_pane_g4_ParamLimits

0xc04b,	// (0x000143f4) ai_message_heading_pane_g4

0x0003,

0xf940,	// (0x00017ce9) ai_message_heading_pane_g_ParamLimits

0xf940,	// (0x00017ce9) ai_message_heading_pane_g

0xc057,	// (0x00014400) ai_message_heading_pane_t1_ParamLimits

0xc057,	// (0x00014400) ai_message_heading_pane_t1

0xc071,	// (0x0001441a) ai_message_heading_pane_t2_ParamLimits

0xc071,	// (0x0001441a) ai_message_heading_pane_t2

0x0001,

0xf949,	// (0x00017cf2) ai_message_heading_pane_t_ParamLimits

0xf949,	// (0x00017cf2) ai_message_heading_pane_t

0xc083,	// (0x0001442c) bg_popup_heading_pane_cp1_ParamLimits

0xc083,	// (0x0001442c) bg_popup_heading_pane_cp1

0xc015,	// (0x000143be) list_ai_message_pane_ParamLimits

0xc015,	// (0x000143be) list_ai_message_pane

0x9a69,	// (0x00011e12) scroll_pane_cp10

0xbfb1,	// (0x0001435a) list_ai_message_pane_g1

0xbfb9,	// (0x00014362) list_ai_message_pane_g2

0x0001,

0xf91d,	// (0x00017cc6) list_ai_message_pane_g

0xbfc1,	// (0x0001436a) list_ai_message_pane_t1_ParamLimits

0xbfc1,	// (0x0001436a) list_ai_message_pane_t1

0xbfd6,	// (0x0001437f) list_ai_message_pane_t2_ParamLimits

0xbfd6,	// (0x0001437f) list_ai_message_pane_t2

0xbfeb,	// (0x00014394) list_ai_message_pane_t3_ParamLimits

0xbfeb,	// (0x00014394) list_ai_message_pane_t3

0xc000,	// (0x000143a9) list_ai_message_pane_t4_ParamLimits

0xc000,	// (0x000143a9) list_ai_message_pane_t4

0x0003,

0xf922,	// (0x00017ccb) list_ai_message_pane_t_ParamLimits

0xf922,	// (0x00017ccb) list_ai_message_pane_t

0xbf9f,	// (0x00014348) cell_ai_soft_ind_pane_ParamLimits

0xbf9f,	// (0x00014348) cell_ai_soft_ind_pane

0xa660,	// (0x00012a09) cell_ai_soft_ind_pane_g1_ParamLimits

0xa660,	// (0x00012a09) cell_ai_soft_ind_pane_g1

0x89b5,	// (0x00010d5e) grid_highlight_cp1

0xa66d,	// (0x00012a16) text_secondary_cp56_ParamLimits

0xa66d,	// (0x00012a16) text_secondary_cp56

0xbf74,	// (0x0001431d) example_general_pane_ParamLimits

0xbf74,	// (0x0001431d) example_general_pane

0xbf80,	// (0x00014329) example_parent_pane_g1_ParamLimits

0xbf80,	// (0x00014329) example_parent_pane_g1

0xbf8c,	// (0x00014335) example_parent_pane_t1_ParamLimits

0xbf8c,	// (0x00014335) example_parent_pane_t1

0x7293,	// (0x0000f63c) popup_preview_text_window_ParamLimits

0x7293,	// (0x0000f63c) popup_preview_text_window

0xa4aa,	// (0x00012853) list_single_pane_cp2_g4

0x8e0a,	// (0x000111b3) bg_popup_preview_window_pane_ParamLimits

0x8e0a,	// (0x000111b3) bg_popup_preview_window_pane

0xbcc5,	// (0x0001406e) popup_preview_text_window_t1_ParamLimits

0xbcc5,	// (0x0001406e) popup_preview_text_window_t1

0xbce3,	// (0x0001408c) popup_preview_text_window_t2_ParamLimits

0xbce3,	// (0x0001408c) popup_preview_text_window_t2

0xbd2c,	// (0x000140d5) popup_preview_text_window_t3_ParamLimits

0xbd2c,	// (0x000140d5) popup_preview_text_window_t3

0xbd71,	// (0x0001411a) popup_preview_text_window_t4_ParamLimits

0xbd71,	// (0x0001411a) popup_preview_text_window_t4

0x0004,

0xf8f1,	// (0x00017c9a) popup_preview_text_window_t_ParamLimits

0xf8f1,	// (0x00017c9a) popup_preview_text_window_t

0xbdef,	// (0x00014198) scroll_pane_cp11

0xad7d,	// (0x00013126) bg_popup_preview_window_pane_g1

0xbc85,	// (0x0001402e) bg_popup_preview_window_pane_g2

0xbc8d,	// (0x00014036) bg_popup_preview_window_pane_g3

0xbc95,	// (0x0001403e) bg_popup_preview_window_pane_g4

0xbc9d,	// (0x00014046) bg_popup_preview_window_pane_g5

0xbca5,	// (0x0001404e) bg_popup_preview_window_pane_g6

0xbcad,	// (0x00014056) bg_popup_preview_window_pane_g7

0xbcb5,	// (0x0001405e) bg_popup_preview_window_pane_g8

0x674c,	// (0x0000eaf5) aid_popup_width_pane

0x7275,	// (0x0000f61e) popup_midp_note_alarm_window_ParamLimits

0x7275,	// (0x0000f61e) popup_midp_note_alarm_window

0x9779,	// (0x00011b22) data_form_pane_ParamLimits

0x9785,	// (0x00011b2e) form_field_data_pane_g1

0x978d,	// (0x00011b36) form_field_data_pane_t1_ParamLimits

0x97a5,	// (0x00011b4e) input_focus_pane_ParamLimits

0x97b3,	// (0x00011b5c) data_form_wide_pane_ParamLimits

0x97bf,	// (0x00011b68) form_field_data_wide_pane_g1

0x97df,	// (0x00011b88) form_field_data_wide_pane_t1_ParamLimits

0x9096,	// (0x0001143f) input_focus_pane_cp6_ParamLimits

0x9a16,	// (0x00011dbf) input_popup_find_pane_g1_ParamLimits

0x9a16,	// (0x00011dbf) input_popup_find_pane_g1

0x6b15,	// (0x0000eebe) aid_navi_side_left_pane

0x6b25,	// (0x0000eece) aid_navi_side_right_pane

0xb6df,	// (0x00013a88) bg_popup_window_pane_cp30_ParamLimits

0xb6df,	// (0x00013a88) bg_popup_window_pane_cp30

0xb759,	// (0x00013b02) popup_midp_note_alarm_window_g1_ParamLimits

0xb759,	// (0x00013b02) popup_midp_note_alarm_window_g1

0xb789,	// (0x00013b32) popup_midp_note_alarm_window_t1_ParamLimits

0xb789,	// (0x00013b32) popup_midp_note_alarm_window_t1

0xb82a,	// (0x00013bd3) popup_midp_note_alarm_window_t2_ParamLimits

0xb82a,	// (0x00013bd3) popup_midp_note_alarm_window_t2

0xb8d8,	// (0x00013c81) popup_midp_note_alarm_window_t3_ParamLimits

0xb8d8,	// (0x00013c81) popup_midp_note_alarm_window_t3

0xb900,	// (0x00013ca9) popup_midp_note_alarm_window_t4_ParamLimits

0xb900,	// (0x00013ca9) popup_midp_note_alarm_window_t4

0xb920,	// (0x00013cc9) popup_midp_note_alarm_window_t5_ParamLimits

0xb920,	// (0x00013cc9) popup_midp_note_alarm_window_t5

0x000a,

0xf88e,	// (0x00017c37) popup_midp_note_alarm_window_t_ParamLimits

0xf88e,	// (0x00017c37) popup_midp_note_alarm_window_t

0xb9cc,	// (0x00013d75) wait_bar_pane_cp1_ParamLimits

0xb9cc,	// (0x00013d75) wait_bar_pane_cp1

0x89b5,	// (0x00010d5e) wait_anim_pane_copy1

0x89b5,	// (0x00010d5e) wait_border_pane_copy1

0xb3f1,	// (0x0001379a) wait_border_pane_g1_copy1

0x97f6,	// (0x00011b9f) form_field_popup_pane_g1

0x97fe,	// (0x00011ba7) form_field_popup_pane_t1_ParamLimits

0x97a5,	// (0x00011b4e) input_focus_pane_cp7_ParamLimits

0x9779,	// (0x00011b22) list_form_pane_ParamLimits

0x9816,	// (0x00011bbf) form_field_popup_wide_pane_g1

0x981e,	// (0x00011bc7) form_field_popup_wide_pane_t1_ParamLimits

0x97a5,	// (0x00011b4e) input_focus_pane_cp8_ParamLimits

0x9833,	// (0x00011bdc) list_form_wide_pane_ParamLimits

0xc4a6,	// (0x0001484f) aid_size_cell_graphic_pane

0x9910,	// (0x00011cb9) data_form_pane_t1_ParamLimits

0xc2a0,	// (0x00014649) data_form_wide_pane_t1_ParamLimits

0xa97a,	// (0x00012d23) bg_status_flat_pane

0x89f5,	// (0x00010d9e) title_pane_t1_ParamLimits

0x8a5d,	// (0x00010e06) title_pane_t2_ParamLimits

0x8a83,	// (0x00010e2c) title_pane_t3_ParamLimits

0xf557,	// (0x00017900) title_pane_t_ParamLimits

0x9ef5,	// (0x0001229e) level_1_signal_ParamLimits

0x9f02,	// (0x000122ab) level_2_signal_ParamLimits

0x9f0f,	// (0x000122b8) level_3_signal_ParamLimits

0x9f1c,	// (0x000122c5) level_4_signal_ParamLimits

0x9f29,	// (0x000122d2) level_5_signal_ParamLimits

0x9f36,	// (0x000122df) level_6_signal_ParamLimits

0x9f43,	// (0x000122ec) level_7_signal_ParamLimits

0x9ef5,	// (0x0001229e) level_1_battery_ParamLimits

0x9f02,	// (0x000122ab) level_2_battery_ParamLimits

0x9f0f,	// (0x000122b8) level_3_battery_ParamLimits

0x9f1c,	// (0x000122c5) level_4_battery_ParamLimits

0x9f29,	// (0x000122d2) level_5_battery_ParamLimits

0x9f36,	// (0x000122df) level_6_battery_ParamLimits

0x9f43,	// (0x000122ec) level_7_battery_ParamLimits

0xb5f6,	// (0x0001399f) bg_status_flat_pane_g1

0xb5fe,	// (0x000139a7) bg_status_flat_pane_g2

0xb606,	// (0x000139af) bg_status_flat_pane_g3

0xb60e,	// (0x000139b7) bg_status_flat_pane_g4

0xb616,	// (0x000139bf) bg_status_flat_pane_g5

0xb61e,	// (0x000139c7) bg_status_flat_pane_g6

0xb626,	// (0x000139cf) bg_status_flat_pane_g7

0x8aab,	// (0x00010e54) tabs_3_active_pane_t1_ParamLimits

0x8aab,	// (0x00010e54) tabs_3_passive_pane_t1_ParamLimits

0x8ac5,	// (0x00010e6e) tabs_4_active_pane_t1_ParamLimits

0x8ac5,	// (0x00010e6e) tabs_4_1_passive_pane_t1_ParamLimits

0x9aa8,	// (0x00011e51) tabs_2_active_pane_t1_ParamLimits

0x9aa8,	// (0x00011e51) tabs_2_passive_pane_t1_ParamLimits

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp4_ParamLimits

0x9ac8,	// (0x00011e71) tabs_2_long_active_pane_t1_ParamLimits

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp4_ParamLimits

0x7561,	// (0x0000f90a) list_single_midp_graphic_pane_t1_ParamLimits

0x9aba,	// (0x00011e63) bg_active_tab_pane_cp5_ParamLimits

0x9ae7,	// (0x00011e90) tabs_3_long_active_pane_t1_ParamLimits

0x9adb,	// (0x00011e84) bg_passive_tab_pane_cp5_ParamLimits

0x7561,	// (0x0000f90a) list_single_midp_graphic_pane_t1

0xa97a,	// (0x00012d23) bg_status_flat_pane_ParamLimits

0xaa33,	// (0x00012ddc) indicator_pane_cp2_ParamLimits

0xaa33,	// (0x00012ddc) indicator_pane_cp2

0xab57,	// (0x00012f00) navi_pane_srt_ParamLimits

0xab57,	// (0x00012f00) navi_pane_srt

0xab7b,	// (0x00012f24) popup_clock_digital_analogue_window_cp1

0x8b89,	// (0x00010f32) indicator_pane_t1

0xa565,	// (0x0001290e) copy_highlight_pane

0xa565,	// (0x0001290e) cursor_graphics_pane

0xa565,	// (0x0001290e) graphic_within_text_pane

0xa565,	// (0x0001290e) link_highlight_pane

0xbdb2,	// (0x0001415b) popup_preview_text_window_t5_ParamLimits

0xbdb2,	// (0x0001415b) popup_preview_text_window_t5

0xa687,	// (0x00012a30) cursor_digital_pane

0xa687,	// (0x00012a30) cursor_primary_pane

0xa698,	// (0x00012a41) cursor_primary_small_pane

0xa6a0,	// (0x00012a49) cursor_secondary_pane

0xa6a8,	// (0x00012a51) cursor_title_pane

0xa687,	// (0x00012a30) link_highlight_digital_pane

0xa68f,	// (0x00012a38) link_highlight_primary_pane

0xa698,	// (0x00012a41) link_highlight_primary_small_pane

0xa6a0,	// (0x00012a49) link_highlight_secondary_pane

0xa6a8,	// (0x00012a51) link_highlight_title_pane

0xa687,	// (0x00012a30) copy_highlight_digital_pane

0xa687,	// (0x00012a30) copy_highlight_primary_pane

0xa698,	// (0x00012a41) copy_highlight_primary_small_pane

0xa6a0,	// (0x00012a49) copy_highlight_secondary_pane

0xa6a8,	// (0x00012a51) copy_highlight_title_pane

0xa6a0,	// (0x00012a49) graphic_text_digital_pane

0xb68e,	// (0x00013a37) graphic_text_primary_pane

0xb697,	// (0x00013a40) graphic_text_primary_small_pane

0xa698,	// (0x00012a41) graphic_text_secondary_pane

0xa687,	// (0x00012a30) graphic_text_title_pane

0xa6b0,	// (0x00012a59) cursor_primary_pane_g1

0xb680,	// (0x00013a29) cursor_text_primary_t1

0xb66a,	// (0x00013a13) cursor_primary_small_pane_g1

0xb672,	// (0x00013a1b) cursor_text_primary_small_t1

0xb654,	// (0x000139fd) cursor_primary_small_pane_g1_copy1

0xb65c,	// (0x00013a05) cursor_text_primary_small_t1_copy1

0xb63e,	// (0x000139e7) cursor_text_title_t1

0xb64c,	// (0x000139f5) cursor_title_pane_g1

0xa6b0,	// (0x00012a59) cursor_digital_pane_g1

0xa6b8,	// (0x00012a61) cursor_text_digital_t1

0xa6c6,	// (0x00012a6f) link_highlight_primary_pane_g1

0xb5e7,	// (0x00013990) link_highlight_primary_pane_t1

0xa6c6,	// (0x00012a6f) link_highlight_primary_small_pane_g1

0xa6ce,	// (0x00012a77) link_highlight_primary_small_pane_t1

0xa6dd,	// (0x00012a86) link_highlight_secondary_pane_g1

0xa6e5,	// (0x00012a8e) link_highlight_secondary_pane_t1

0xb54c,	// (0x000138f5) link_highlight_title_pane_g1

0xb563,	// (0x0001390c) link_highlight_title_pane_t1

0xb54c,	// (0x000138f5) link_highlight_digital_pane_g1

0xb554,	// (0x000138fd) link_highlight_digital_pane_t1

0xb40c,	// (0x000137b5) copy_highlight_primary_pane_g1

0xb432,	// (0x000137db) copy_highlight_primary_pane_t1

0xb40c,	// (0x000137b5) copy_highlight_primary_small_pane_g1

0xb423,	// (0x000137cc) copy_highlight_primary_small_pane_t1

0xa6f4,	// (0x00012a9d) copy_highlight_secondary_pane_g1

0xa6fc,	// (0x00012aa5) copy_highlight_secondary_pane_t1

0xb40c,	// (0x000137b5) copy_highlight_title_pane_g1

0xb414,	// (0x000137bd) copy_highlight_title_pane_t1

0xb40c,	// (0x000137b5) copy_highlight_digital_pane_g1

0xc612,	// (0x000149bb) copy_highlight_digital_pane_t1

0xc566,	// (0x0001490f) graphic_text_primary_pane_g1

0xc5f6,	// (0x0001499f) graphic_text_primary_pane_t1

0xc604,	// (0x000149ad) graphic_text_primary_pane_t2

0x0001,

0xf9b8,	// (0x00017d61) graphic_text_primary_pane_t

0xc5d2,	// (0x0001497b) graphic_text_primary_small_pane_g1

0xc5da,	// (0x00014983) graphic_text_primary_small_pane_t1

0xc5e8,	// (0x00014991) graphic_text_primary_small_pane_t2

0x0001,

0xf9b3,	// (0x00017d5c) graphic_text_primary_small_pane_t

0xc5ae,	// (0x00014957) graphic_text_secondary_pane_g1

0xc5b6,	// (0x0001495f) graphic_text_secondary_pane_t1

0xc5c4,	// (0x0001496d) graphic_text_secondary_pane_t2

0x0001,

0xf9ae,	// (0x00017d57) graphic_text_secondary_pane_t

0xc58a,	// (0x00014933) graphic_text_title_pane_g1

0xc592,	// (0x0001493b) graphic_text_title_pane_t1

0xc5a0,	// (0x00014949) graphic_text_title_pane_t2

0x0001,

0xf9a9,	// (0x00017d52) graphic_text_title_pane_t

0xc566,	// (0x0001490f) graphic_text_digital_pane_g1

0xc56e,	// (0x00014917) graphic_text_digital_pane_t1

0xc57c,	// (0x00014925) graphic_text_digital_pane_t2

0x0001,

0xf9a4,	// (0x00017d4d) graphic_text_digital_pane_t

0x8a95,	// (0x00010e3e) navi_icon_pane_srt_ParamLimits

0x8a95,	// (0x00010e3e) navi_icon_pane_srt

0x89b5,	// (0x00010d5e) navi_midp_pane_srt

0x89b5,	// (0x00010d5e) navi_navi_pane_srt

0x8a95,	// (0x00010e3e) navi_text_pane_srt_ParamLimits

0x8a95,	// (0x00010e3e) navi_text_pane_srt

0xbc3e,	// (0x00013fe7) navi_navi_icon_text_pane_srt

0xbc46,	// (0x00013fef) navi_navi_pane_srt_g1_ParamLimits

0xbc46,	// (0x00013fef) navi_navi_pane_srt_g1

0xbc58,	// (0x00014001) navi_navi_pane_srt_g2_ParamLimits

0xbc58,	// (0x00014001) navi_navi_pane_srt_g2

0x0001,

0xf8d9,	// (0x00017c82) navi_navi_pane_srt_g_ParamLimits

0xf8d9,	// (0x00017c82) navi_navi_pane_srt_g

0xbc6a,	// (0x00014013) navi_navi_tabs_pane_srt

0xbc3e,	// (0x00013fe7) navi_navi_text_pane_srt

0xbc3e,	// (0x00013fe7) navi_navi_volume_pane_srt

0xc557,	// (0x00014900) navi_navi_text_pane_srt_t1

0x78c5,	// (0x0000fc6e) navi_navi_volume_pane_srt_g1

0x78cd,	// (0x0000fc76) volume_small_pane_srt_ParamLimits

0x78cd,	// (0x0000fc76) volume_small_pane_srt

0x6dbc,	// (0x0000f165) volume_small_pane_srt_g1_ParamLimits

0x6dbc,	// (0x0000f165) volume_small_pane_srt_g1

0x6dcc,	// (0x0000f175) volume_small_pane_srt_g2_ParamLimits

0x6dcc,	// (0x0000f175) volume_small_pane_srt_g2

0x6ddd,	// (0x0000f186) volume_small_pane_srt_g3_ParamLimits

0x6ddd,	// (0x0000f186) volume_small_pane_srt_g3

0x6dee,	// (0x0000f197) volume_small_pane_srt_g4_ParamLimits

0x6dee,	// (0x0000f197) volume_small_pane_srt_g4

0x6dff,	// (0x0000f1a8) volume_small_pane_srt_g5_ParamLimits

0x6dff,	// (0x0000f1a8) volume_small_pane_srt_g5

0x6e10,	// (0x0000f1b9) volume_small_pane_srt_g6_ParamLimits

0x6e10,	// (0x0000f1b9) volume_small_pane_srt_g6

0x6e21,	// (0x0000f1ca) volume_small_pane_srt_g7_ParamLimits

0x6e21,	// (0x0000f1ca) volume_small_pane_srt_g7

0x6e32,	// (0x0000f1db) volume_small_pane_srt_g8_ParamLimits

0x6e32,	// (0x0000f1db) volume_small_pane_srt_g8

0x6e43,	// (0x0000f1ec) volume_small_pane_srt_g9_ParamLimits

0x6e43,	// (0x0000f1ec) volume_small_pane_srt_g9

0x6e54,	// (0x0000f1fd) volume_small_pane_srt_g10_ParamLimits

0x6e54,	// (0x0000f1fd) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00017b01) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00017b01) volume_small_pane_srt_g

0x8eb3,	// (0x0001125c) query_popup_data_pane_cp2

0xc53d,	// (0x000148e6) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xc53d,	// (0x000148e6) navi_navi_icon_text_pane_srt_t1

0xb68e,	// (0x00013a37) navi_tabs_2_long_pane_srt

0xb68e,	// (0x00013a37) navi_tabs_2_pane_srt

0xb68e,	// (0x00013a37) navi_tabs_3_long_pane_srt

0xb68e,	// (0x00013a37) navi_tabs_3_pane_srt

0xb68e,	// (0x00013a37) navi_tabs_4_pane_srt

0x78a5,	// (0x0000fc4e) tabs_2_active_pane_srt_ParamLimits

0x78a5,	// (0x0000fc4e) tabs_2_active_pane_srt

0x78b5,	// (0x0000fc5e) tabs_2_passive_pane_srt_ParamLimits

0x78b5,	// (0x0000fc5e) tabs_2_passive_pane_srt

0xa8b4,	// (0x00012c5d) bg_passive_tab_pane_cp1_srt_ParamLimits

0xa8b4,	// (0x00012c5d) bg_passive_tab_pane_cp1_srt

0xc51b,	// (0x000148c4) bg_passive_tab_pane_g1_cp1_srt

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp1_srt

0xc524,	// (0x000148cd) bg_passive_tab_pane_g3_cp1_srt

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp1_srt_ParamLimits

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp1_srt

0xc52d,	// (0x000148d6) tabs_2_active_pane_srt_g1

0x9aa8,	// (0x00011e51) tabs_2_active_pane_srt_t1_ParamLimits

0x9aa8,	// (0x00011e51) tabs_2_active_pane_srt_t1

0xc51b,	// (0x000148c4) bg_active_tab_pane_g1_cp1_srt

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp1_srt

0xc524,	// (0x000148cd) bg_active_tab_pane_g3_cp1_srt

0x7872,	// (0x0000fc1b) tabs_3_active_pane_srt_ParamLimits

0x7872,	// (0x0000fc1b) tabs_3_active_pane_srt

0x7883,	// (0x0000fc2c) tabs_3_passive_pane_cp_srt_ParamLimits

0x7883,	// (0x0000fc2c) tabs_3_passive_pane_cp_srt

0x7894,	// (0x0000fc3d) tabs_3_passive_pane_srt_ParamLimits

0x7894,	// (0x0000fc3d) tabs_3_passive_pane_srt

0xa8b4,	// (0x00012c5d) bg_passive_tab_pane_cp2_srt_ParamLimits

0xa8b4,	// (0x00012c5d) bg_passive_tab_pane_cp2_srt

0xa70b,	// (0x00012ab4) bg_passive_tab_pane_g1_cp2_srt

0xa227,	// (0x000125d0) bg_passive_tab_pane_g2_cp2_srt

0xa714,	// (0x00012abd) bg_passive_tab_pane_g3_cp2_srt

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp2_srt_ParamLimits

0x8a95,	// (0x00010e3e) bg_active_tab_pane_cp2_srt

0xc513,	// (0x000148bc) tabs_3_active_pane_srt_g1

0x8aab,	// (0x00010e54) tabs_3_active_pane_srt_t1_ParamLimits

0x8aab,	// (0x00010e54) tabs_3_active_pane_srt_t1

0xa70b,	// (0x00012ab4) bg_active_tab_pane_g1_cp2_srt

0xa227,	// (0x000125d0) bg_active_tab_pane_g2_cp2_srt

0xa714,	// (0x00012abd) bg_active_tab_pane_g3_cp2_srt

0x782a,	// (0x0000fbd3) tabs_4_active_pane_srt_ParamLimits

0x782a,	// (0x0000fbd3) tabs_4_active_pane_srt

0x783c,	// (0x0000fbe5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x783c,	// (0x0000fbe5) tabs_4_passive_pane_cp2_srt

0x6fb9,	// (0x0000f362) aid_size_cell_toolbar

0x9adb,	// (0x00011e84) main_idle_act_pane_ParamLimits

0x7130,	// (0x0000f4d9) popup_large_graphic_colour_window_ParamLimits

0x73e4,	// (0x0000f78d) popup_toolbar_window_ParamLimits

0x73e4,	// (0x0000f78d) popup_toolbar_window

0xc301,	// (0x000146aa) list_single_graphic_2heading_pane_ParamLimits

0xc301,	// (0x000146aa) list_single_graphic_2heading_pane

0x9cb2,	// (0x0001205b) aid_size_cell_apps_grid_lsc_pane

0x9cc4,	// (0x0001206d) aid_size_cell_apps_grid_prt_pane

0xa8b4,	// (0x00012c5d) bg_wml_button_pane_cp1_ParamLimits

0xa8b4,	// (0x00012c5d) bg_wml_button_pane_cp1

0xb094,	// (0x0001343d) form_midp_field_text_pane_t1_ParamLimits

0xae93,	// (0x0001323c) input_focus_pane_cp050_ParamLimits

0xb0b5,	// (0x0001345e) list_midp_form_text_pane_ParamLimits

0xb071,	// (0x0001341a) input_focus_pane_cp051_ParamLimits

0xb085,	// (0x0001342e) list_midp_choice_pane_ParamLimits

0xaf43,	// (0x000132ec) list_single_2graphic_pane_cp3_ParamLimits

0xaf43,	// (0x000132ec) list_single_2graphic_pane_cp3

0xaf56,	// (0x000132ff) list_single_midp_graphic_pane_ParamLimits

0xaf56,	// (0x000132ff) list_single_midp_graphic_pane

0x7473,	// (0x0000f81c) list_single_graphic_2heading_pane_g1_ParamLimits

0x7473,	// (0x0000f81c) list_single_graphic_2heading_pane_g1

0x747f,	// (0x0000f828) list_single_graphic_2heading_pane_g4_ParamLimits

0x747f,	// (0x0000f828) list_single_graphic_2heading_pane_g4

0x748b,	// (0x0000f834) list_single_graphic_2heading_pane_g5_ParamLimits

0x748b,	// (0x0000f834) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00017b54) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00017b54) list_single_graphic_2heading_pane_g

0x7497,	// (0x0000f840) list_single_graphic_2heading_pane_t1_ParamLimits

0x7497,	// (0x0000f840) list_single_graphic_2heading_pane_t1

0x74ab,	// (0x0000f854) list_single_graphic_2heading_pane_t2_ParamLimits

0x74ab,	// (0x0000f854) list_single_graphic_2heading_pane_t2

0x74c5,	// (0x0000f86e) list_single_graphic_2heading_pane_t3_ParamLimits

0x74c5,	// (0x0000f86e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00017b5b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00017b5b) list_single_graphic_2heading_pane_t

0xacc7,	// (0x00013070) bg_popup_sub_pane_cp2

0xaced,	// (0x00013096) grid_toobar_pane

0x74dd,	// (0x0000f886) cell_toolbar_pane_ParamLimits

0x74dd,	// (0x0000f886) cell_toolbar_pane

0xad23,	// (0x000130cc) cell_toolbar_pane_g1_ParamLimits

0xad23,	// (0x000130cc) cell_toolbar_pane_g1

0xad35,	// (0x000130de) cell_toolbar_pane_g2_ParamLimits

0xad35,	// (0x000130de) cell_toolbar_pane_g2

0x0001,

0xf7b9,	// (0x00017b62) cell_toolbar_pane_g_ParamLimits

0xf7b9,	// (0x00017b62) cell_toolbar_pane_g

0xad57,	// (0x00013100) grid_highlight_pane_cp2_ParamLimits

0xad57,	// (0x00013100) grid_highlight_pane_cp2

0xad71,	// (0x0001311a) toolbar_button_pane

0xad7d,	// (0x00013126) toolbar_button_pane_g1

0xad85,	// (0x0001312e) toolbar_button_pane_g2

0xad8d,	// (0x00013136) toolbar_button_pane_g3

0xad95,	// (0x0001313e) toolbar_button_pane_g4

0xad9d,	// (0x00013146) toolbar_button_pane_g5

0xada5,	// (0x0001314e) toolbar_button_pane_g6

0xadad,	// (0x00013156) toolbar_button_pane_g7

0xadb5,	// (0x0001315e) toolbar_button_pane_g8

0xadbd,	// (0x00013166) toolbar_button_pane_g9

0x0009,

0xf7be,	// (0x00017b67) toolbar_button_pane_g

0x750c,	// (0x0000f8b5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x750c,	// (0x0000f8b5) list_single_2graphic_pane_g1_cp3

0x7518,	// (0x0000f8c1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7518,	// (0x0000f8c1) list_single_2graphic_pane_g2_cp3

0x7527,	// (0x0000f8d0) list_single_2graphic_pane_g3_cp3

0x752f,	// (0x0000f8d8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x752f,	// (0x0000f8d8) list_single_2graphic_pane_g4_cp3

0x753b,	// (0x0000f8e4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x753b,	// (0x0000f8e4) list_single_2graphic_pane_t1_cp3

0x7555,	// (0x0000f8fe) list_single_midp_graphic_pane_g2_ParamLimits

0x7555,	// (0x0000f8fe) list_single_midp_graphic_pane_g2

0x6fc1,	// (0x0000f36a) aid_zoom_text_primary

0x6fc9,	// (0x0000f372) aid_zoom_text_secondary

0xa7c3,	// (0x00012b6c) status_small_pane_g7_ParamLimits

0xa7c3,	// (0x00012b6c) status_small_pane_g7

0xa7e6,	// (0x00012b8f) status_small_pane_t1_ParamLimits

0x89cc,	// (0x00010d75) title_pane_g2

0x0003,

0xf54e,	// (0x000178f7) title_pane_g

0x8f52,	// (0x000112fb) aid_size_cell_colour_1_pane_ParamLimits

0x8f52,	// (0x000112fb) aid_size_cell_colour_1_pane

0x8f66,	// (0x0001130f) aid_size_cell_colour_2_pane_ParamLimits

0x8f66,	// (0x0001130f) aid_size_cell_colour_2_pane

0x8f7a,	// (0x00011323) aid_size_cell_colour_3_pane_ParamLimits

0x8f7a,	// (0x00011323) aid_size_cell_colour_3_pane

0x8f8e,	// (0x00011337) aid_size_cell_colour_4_pane_ParamLimits

0x8f8e,	// (0x00011337) aid_size_cell_colour_4_pane

0x6a77,	// (0x0000ee20) title_pane_stacon_g1_ParamLimits

0x6a77,	// (0x0000ee20) title_pane_stacon_g1

0xb489,	// (0x00013832) popup_note_wait_window_g3_ParamLimits

0xb489,	// (0x00013832) popup_note_wait_window_g3

0xb4ff,	// (0x000138a8) popup_note_wait_window_t5_ParamLimits

0xb4ff,	// (0x000138a8) popup_note_wait_window_t5

0x89b5,	// (0x00010d5e) main_feb_china_hwr_fs_writing_pane

0x7045,	// (0x0000f3ee) popup_feb_china_hwr_fs_window_ParamLimits

0x7045,	// (0x0000f3ee) popup_feb_china_hwr_fs_window

0x7577,	// (0x0000f920) aid_size_cell_hwr_fs_ParamLimits

0x7577,	// (0x0000f920) aid_size_cell_hwr_fs

0xae93,	// (0x0001323c) bg_popup_sub_pane_cp3_ParamLimits

0xae93,	// (0x0001323c) bg_popup_sub_pane_cp3

0x758c,	// (0x0000f935) grid_hwr_fs_pane_ParamLimits

0x758c,	// (0x0000f935) grid_hwr_fs_pane

0x75a0,	// (0x0000f949) linegrid_hwr_fs_pane_ParamLimits

0x75a0,	// (0x0000f949) linegrid_hwr_fs_pane

0x75b0,	// (0x0000f959) cell_hwr_fs_pane_ParamLimits

0x75b0,	// (0x0000f959) cell_hwr_fs_pane

0xae9f,	// (0x00013248) linegrid_hwr_fs_pane_g1_ParamLimits

0xae9f,	// (0x00013248) linegrid_hwr_fs_pane_g1

0xaeab,	// (0x00013254) linegrid_hwr_fs_pane_g2_ParamLimits

0xaeab,	// (0x00013254) linegrid_hwr_fs_pane_g2

0xaebd,	// (0x00013266) linegrid_hwr_fs_pane_g3_ParamLimits

0xaebd,	// (0x00013266) linegrid_hwr_fs_pane_g3

0x75ce,	// (0x0000f977) linegrid_hwr_fs_pane_g4_ParamLimits

0x75ce,	// (0x0000f977) linegrid_hwr_fs_pane_g4

0x75e8,	// (0x0000f991) linegrid_hwr_fs_pane_g5_ParamLimits

0x75e8,	// (0x0000f991) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e4,	// (0x00017b8d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e4,	// (0x00017b8d) linegrid_hwr_fs_pane_g

0xaec9,	// (0x00013272) cell_hwr_fs_pane_g1_ParamLimits

0xaec9,	// (0x00013272) cell_hwr_fs_pane_g1

0xac05,	// (0x00012fae) cell_hwr_fs_pane_g2_ParamLimits

0xac05,	// (0x00012fae) cell_hwr_fs_pane_g2

0xaedf,	// (0x00013288) cell_hwr_fs_pane_g3_ParamLimits

0xaedf,	// (0x00013288) cell_hwr_fs_pane_g3

0xaeec,	// (0x00013295) cell_hwr_fs_pane_g4_ParamLimits

0xaeec,	// (0x00013295) cell_hwr_fs_pane_g4

0x0003,

0xf7ef,	// (0x00017b98) cell_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x00017b98) cell_hwr_fs_pane_g

0x75fe,	// (0x0000f9a7) cell_hwr_fs_pane_t1

0x89b5,	// (0x00010d5e) grid_highlight_pane_cp6

0x89b5,	// (0x00010d5e) main_idle_act2_pane

0x9a50,	// (0x00011df9) aid_inside_area_popup_secondary

0xbade,	// (0x00013e87) aid_inside_area_window_primary_ParamLimits

0xbade,	// (0x00013e87) aid_inside_area_window_primary

0xc621,	// (0x000149ca) ai2_news_ticker_pane

0xc629,	// (0x000149d2) aid_size_cell_ai1_link_ParamLimits

0xc629,	// (0x000149d2) aid_size_cell_ai1_link

0xc643,	// (0x000149ec) popup_ai2_data_window_ParamLimits

0xc643,	// (0x000149ec) popup_ai2_data_window

0xc657,	// (0x00014a00) popup_ai2_link_window_ParamLimits

0xc657,	// (0x00014a00) popup_ai2_link_window

0xae93,	// (0x0001323c) bg_popup_sub_pane_cp4_ParamLimits

0xae93,	// (0x0001323c) bg_popup_sub_pane_cp4

0xc66b,	// (0x00014a14) grid_ai2_link_pane_ParamLimits

0xc66b,	// (0x00014a14) grid_ai2_link_pane

0xc682,	// (0x00014a2b) popup_ai2_link_window_g1_ParamLimits

0xc682,	// (0x00014a2b) popup_ai2_link_window_g1

0xc68e,	// (0x00014a37) popup_ai2_link_window_g2_ParamLimits

0xc68e,	// (0x00014a37) popup_ai2_link_window_g2

0x0001,

0xf9bd,	// (0x00017d66) popup_ai2_link_window_g_ParamLimits

0xf9bd,	// (0x00017d66) popup_ai2_link_window_g

0xc69d,	// (0x00014a46) ai2_mp_button_pane

0xc6a5,	// (0x00014a4e) ai2_mp_volume_pane

0xb071,	// (0x0001341a) bg_popup_sub_pane_cp5_ParamLimits

0xb071,	// (0x0001341a) bg_popup_sub_pane_cp5

0xc6ad,	// (0x00014a56) heading_ai2_gene_pane_ParamLimits

0xc6ad,	// (0x00014a56) heading_ai2_gene_pane

0xc6b9,	// (0x00014a62) list_ai2_gene_pane_ParamLimits

0xc6b9,	// (0x00014a62) list_ai2_gene_pane

0xc701,	// (0x00014aaa) cell_ai2_link_pane_ParamLimits

0xc701,	// (0x00014aaa) cell_ai2_link_pane

0xc717,	// (0x00014ac0) cell_ai2_link_pane_g1

0x89b5,	// (0x00010d5e) grid_highlight_pane_cp7

0x78e2,	// (0x0000fc8b) ai2_mp_volume_pane_g1

0xc7df,	// (0x00014b88) ai2_mp_volume_pane_g2

0xc754,	// (0x00014afd) list_ai2_gene_pane_t1

0xc7e7,	// (0x00014b90) ai2_mp_volume_pane_g3

0x0002,

0xf9d6,	// (0x00017d7f) ai2_mp_volume_pane_g

0x78ea,	// (0x0000fc93) volume_small_pane_cp3

0xc7ef,	// (0x00014b98) aid_size_cell_ai2_button

0xc7f7,	// (0x00014ba0) grid_ai2_button_pane

0xc800,	// (0x00014ba9) cell_ai2_button_pane_ParamLimits

0xc800,	// (0x00014ba9) cell_ai2_button_pane

0x88ce,	// (0x00010c77) cell_ai2_button_pane_g1

0x89b5,	// (0x00010d5e) grid_highlight_pane_cp8

0xc79f,	// (0x00014b48) ai2_gene_pane_t1_ParamLimits

0xc79f,	// (0x00014b48) ai2_gene_pane_t1

0x6faf,	// (0x0000f358) aid_height_parent_landscape

0xc12b,	// (0x000144d4) aid_height_set_list

0xc137,	// (0x000144e0) aid_size_parent

0xc4a6,	// (0x0001484f) aid_size_cell_graphic_pane_ParamLimits

0xc6c9,	// (0x00014a72) popup_ai2_data_window_g1_ParamLimits

0xc6c9,	// (0x00014a72) popup_ai2_data_window_g1

0xc6d5,	// (0x00014a7e) ai2_news_ticker_pane_g1

0xc6dd,	// (0x00014a86) ai2_news_ticker_pane_g2

0x0001,

0xf9c2,	// (0x00017d6b) ai2_news_ticker_pane_g

0xc6e5,	// (0x00014a8e) ai2_news_ticker_pane_t1

0xc6f3,	// (0x00014a9c) ai2_news_ticker_pane_t2

0x0001,

0xf9c7,	// (0x00017d70) ai2_news_ticker_pane_t

0xc440,	// (0x000147e9) heading_ai2_gene_pane_g1

0xc720,	// (0x00014ac9) heading_ai2_gene_pane_t1_ParamLimits

0xc720,	// (0x00014ac9) heading_ai2_gene_pane_t1

0xc735,	// (0x00014ade) list_highlight_pane_cp6

0xc73d,	// (0x00014ae6) ai2_gene_pane_ParamLimits

0xc73d,	// (0x00014ae6) ai2_gene_pane

0xc762,	// (0x00014b0b) list_ai2_gene_pane_t2

0x0001,

0xf9cc,	// (0x00017d75) list_ai2_gene_pane_t

0xc770,	// (0x00014b19) list_highlight_pane_cp8_ParamLimits

0xc770,	// (0x00014b19) list_highlight_pane_cp8

0xc781,	// (0x00014b2a) ai2_gene_pane_g1_ParamLimits

0xc781,	// (0x00014b2a) ai2_gene_pane_g1

0xc793,	// (0x00014b3c) ai2_gene_pane_g2_ParamLimits

0xc793,	// (0x00014b3c) ai2_gene_pane_g2

0x0001,

0xf9d1,	// (0x00017d7a) ai2_gene_pane_g_ParamLimits

0xf9d1,	// (0x00017d7a) ai2_gene_pane_g

0x921f,	// (0x000115c8) scroll_pane_cp12

0x6f66,	// (0x0000f30f) control_pane_t3_ParamLimits

0x6f66,	// (0x0000f30f) control_pane_t3

0xa7d7,	// (0x00012b80) status_small_pane_g8_ParamLimits

0xa7d7,	// (0x00012b80) status_small_pane_g8

0x7105,	// (0x0000f4ae) popup_find_window_ParamLimits

0x7287,	// (0x0000f630) popup_note_image_window_ParamLimits

0x9431,	// (0x000117da) list_double2_graphic_pane_vc_g1_ParamLimits

0x9431,	// (0x000117da) list_double2_graphic_pane_vc_g1

0x943d,	// (0x000117e6) list_double2_graphic_pane_vc_g2_ParamLimits

0x943d,	// (0x000117e6) list_double2_graphic_pane_vc_g2

0x9368,	// (0x00011711) list_double2_graphic_pane_vc_g3_ParamLimits

0x9368,	// (0x00011711) list_double2_graphic_pane_vc_g3

0x0002,

0xf615,	// (0x000179be) list_double2_graphic_pane_vc_g_ParamLimits

0xf615,	// (0x000179be) list_double2_graphic_pane_vc_g

0x9449,	// (0x000117f2) list_double2_graphic_pane_vc_t1_ParamLimits

0x9449,	// (0x000117f2) list_double2_graphic_pane_vc_t1

0x943d,	// (0x000117e6) list_single_heading_pane_vc_g1_ParamLimits

0x943d,	// (0x000117e6) list_single_heading_pane_vc_g1

0x9368,	// (0x00011711) list_single_heading_pane_vc_g2_ParamLimits

0x9368,	// (0x00011711) list_single_heading_pane_vc_g2

0x0001,

0xf661,	// (0x00017a0a) list_single_heading_pane_vc_g_ParamLimits

0xf661,	// (0x00017a0a) list_single_heading_pane_vc_g

0xadc5,	// (0x0001316e) list_single_heading_pane_vc_t1_ParamLimits

0xadc5,	// (0x0001316e) list_single_heading_pane_vc_t1

0xaddb,	// (0x00013184) list_single_heading_pane_vc_t2_ParamLimits

0xaddb,	// (0x00013184) list_single_heading_pane_vc_t2

0x0001,

0xf7d3,	// (0x00017b7c) list_single_heading_pane_vc_t_ParamLimits

0xf7d3,	// (0x00017b7c) list_single_heading_pane_vc_t

0xaded,	// (0x00013196) list_setting_number_pane_vc_g1_ParamLimits

0xaded,	// (0x00013196) list_setting_number_pane_vc_g1

0xadf9,	// (0x000131a2) list_setting_number_pane_vc_g2_ParamLimits

0xadf9,	// (0x000131a2) list_setting_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x00017b81) list_setting_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x00017b81) list_setting_number_pane_vc_g

0xae05,	// (0x000131ae) list_setting_number_pane_vc_t1_ParamLimits

0xae05,	// (0x000131ae) list_setting_number_pane_vc_t1

0xae19,	// (0x000131c2) list_setting_number_pane_vc_t2_ParamLimits

0xae19,	// (0x000131c2) list_setting_number_pane_vc_t2

0xae35,	// (0x000131de) list_setting_number_pane_vc_t3_ParamLimits

0xae35,	// (0x000131de) list_setting_number_pane_vc_t3

0x0002,

0xf7dd,	// (0x00017b86) list_setting_number_pane_vc_t_ParamLimits

0xf7dd,	// (0x00017b86) list_setting_number_pane_vc_t

0xae5b,	// (0x00013204) set_value_pane_vc_ParamLimits

0xae5b,	// (0x00013204) set_value_pane_vc

0xc301,	// (0x000146aa) list_double2_graphic_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double2_graphic_pane_vc

0xc314,	// (0x000146bd) list_double2_large_graphic_pane_vc_ParamLimits

0xc314,	// (0x000146bd) list_double2_large_graphic_pane_vc

0xc301,	// (0x000146aa) list_double2_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double2_pane_vc

0xc301,	// (0x000146aa) list_double_graphic_heading_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double_graphic_heading_pane_vc

0xc301,	// (0x000146aa) list_double_graphic_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double_graphic_pane_vc

0xc301,	// (0x000146aa) list_double_heading_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double_heading_pane_vc

0xc325,	// (0x000146ce) list_double_large_graphic_pane_vc_ParamLimits

0xc325,	// (0x000146ce) list_double_large_graphic_pane_vc

0xc301,	// (0x000146aa) list_double_number_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double_number_pane_vc

0xc301,	// (0x000146aa) list_double_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double_pane_vc

0xc301,	// (0x000146aa) list_double_time_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_double_time_pane_vc

0xc301,	// (0x000146aa) list_setting_number_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_setting_number_pane_vc

0xc301,	// (0x000146aa) list_setting_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_setting_pane_vc

0xc301,	// (0x000146aa) list_single_graphic_heading_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_single_graphic_heading_pane_vc

0xc301,	// (0x000146aa) list_single_heading_pane_vc_ParamLimits

0xc301,	// (0x000146aa) list_single_heading_pane_vc

0xc341,	// (0x000146ea) list_single_number_heading_pane_vc_ParamLimits

0xc341,	// (0x000146ea) list_single_number_heading_pane_vc

0x9431,	// (0x000117da) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9431,	// (0x000117da) list_double_graphic_heading_pane_vc_g1

0x943d,	// (0x000117e6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x943d,	// (0x000117e6) list_double_graphic_heading_pane_vc_g2

0x9368,	// (0x00011711) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9368,	// (0x00011711) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf615,	// (0x000179be) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf615,	// (0x000179be) list_double_graphic_heading_pane_vc_g

0xc834,	// (0x00014bdd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc834,	// (0x00014bdd) list_double_graphic_heading_pane_vc_t1

0xc84a,	// (0x00014bf3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc84a,	// (0x00014bf3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9dd,	// (0x00017d86) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9dd,	// (0x00017d86) list_double_graphic_heading_pane_vc_t

0xaded,	// (0x00013196) list_setting_pane_vc_g1_ParamLimits

0xaded,	// (0x00013196) list_setting_pane_vc_g1

0xadf9,	// (0x000131a2) list_setting_pane_vc_g2_ParamLimits

0xadf9,	// (0x000131a2) list_setting_pane_vc_g2

0x0001,

0xf7d8,	// (0x00017b81) list_setting_pane_vc_g_ParamLimits

0xf7d8,	// (0x00017b81) list_setting_pane_vc_g

0xca3f,	// (0x00014de8) list_setting_pane_vc_t1_ParamLimits

0xca3f,	// (0x00014de8) list_setting_pane_vc_t1

0xca53,	// (0x00014dfc) list_setting_pane_vc_t2_ParamLimits

0xca53,	// (0x00014dfc) list_setting_pane_vc_t2

0x0001,

0xfa20,	// (0x00017dc9) list_setting_pane_vc_t_ParamLimits

0xfa20,	// (0x00017dc9) list_setting_pane_vc_t

0xae5b,	// (0x00013204) set_value_pane_cp_vc_ParamLimits

0xae5b,	// (0x00013204) set_value_pane_cp_vc

0x943d,	// (0x000117e6) list_single_number_heading_pane_vc_g1_ParamLimits

0x943d,	// (0x000117e6) list_single_number_heading_pane_vc_g1

0x9368,	// (0x00011711) list_single_number_heading_pane_vc_g2_ParamLimits

0x9368,	// (0x00011711) list_single_number_heading_pane_vc_g2

0x0001,

0xf661,	// (0x00017a0a) list_single_number_heading_pane_vc_g_ParamLimits

0xf661,	// (0x00017a0a) list_single_number_heading_pane_vc_g

0xadc5,	// (0x0001316e) list_single_number_heading_pane_vc_t1_ParamLimits

0xadc5,	// (0x0001316e) list_single_number_heading_pane_vc_t1

0xca75,	// (0x00014e1e) list_single_number_heading_pane_vc_t2_ParamLimits

0xca75,	// (0x00014e1e) list_single_number_heading_pane_vc_t2

0xca87,	// (0x00014e30) list_single_number_heading_pane_vc_t3_ParamLimits

0xca87,	// (0x00014e30) list_single_number_heading_pane_vc_t3

0x0002,

0xfa25,	// (0x00017dce) list_single_number_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x00017dce) list_single_number_heading_pane_vc_t

0x9431,	// (0x000117da) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9431,	// (0x000117da) list_single_graphic_heading_pane_vc_g1

0x943d,	// (0x000117e6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x943d,	// (0x000117e6) list_single_graphic_heading_pane_vc_g4

0x9368,	// (0x00011711) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9368,	// (0x00011711) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf615,	// (0x000179be) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf615,	// (0x000179be) list_single_graphic_heading_pane_vc_g

0xadc5,	// (0x0001316e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xadc5,	// (0x0001316e) list_single_graphic_heading_pane_vc_t1

0xca99,	// (0x00014e42) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xca99,	// (0x00014e42) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2c,	// (0x00017dd5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x00017dd5) list_single_graphic_heading_pane_vc_t

0x943d,	// (0x000117e6) list_double2_pane_vc_g1_ParamLimits

0x943d,	// (0x000117e6) list_double2_pane_vc_g1

0x9368,	// (0x00011711) list_double2_pane_vc_g2_ParamLimits

0x9368,	// (0x00011711) list_double2_pane_vc_g2

0x0001,

0xf661,	// (0x00017a0a) list_double2_pane_vc_g_ParamLimits

0xf661,	// (0x00017a0a) list_double2_pane_vc_g

0x9374,	// (0x0001171d) list_double2_pane_vc_t1_ParamLimits

0x9374,	// (0x0001171d) list_double2_pane_vc_t1

0x92d7,	// (0x00011680) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x92d7,	// (0x00011680) list_double2_large_graphic_pane_vc_g1

0x92e3,	// (0x0001168c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x92e3,	// (0x0001168c) list_double2_large_graphic_pane_vc_g2

0x92ef,	// (0x00011698) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x92ef,	// (0x00011698) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001798e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001798e) list_double2_large_graphic_pane_vc_g

0x9303,	// (0x000116ac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9303,	// (0x000116ac) list_double2_large_graphic_pane_vc_t1

0xcaab,	// (0x00014e54) list_double_time_pane_vc_g1_ParamLimits

0xcaab,	// (0x00014e54) list_double_time_pane_vc_g1

0xcab7,	// (0x00014e60) list_double_time_pane_vc_g2_ParamLimits

0xcab7,	// (0x00014e60) list_double_time_pane_vc_g2

0x0001,

0xfa31,	// (0x00017dda) list_double_time_pane_vc_g_ParamLimits

0xfa31,	// (0x00017dda) list_double_time_pane_vc_g

0xcac3,	// (0x00014e6c) list_double_time_pane_vc_t1_ParamLimits

0xcac3,	// (0x00014e6c) list_double_time_pane_vc_t1

0xcae1,	// (0x00014e8a) list_double_time_pane_vc_t2_ParamLimits

0xcae1,	// (0x00014e8a) list_double_time_pane_vc_t2

0xcb05,	// (0x00014eae) list_double_time_pane_vc_t3_ParamLimits

0xcb05,	// (0x00014eae) list_double_time_pane_vc_t3

0xcb17,	// (0x00014ec0) list_double_time_pane_vc_t4_ParamLimits

0xcb17,	// (0x00014ec0) list_double_time_pane_vc_t4

0x0003,

0xfa36,	// (0x00017ddf) list_double_time_pane_vc_t_ParamLimits

0xfa36,	// (0x00017ddf) list_double_time_pane_vc_t

0x943d,	// (0x000117e6) list_double_pane_vc_g1_ParamLimits

0x943d,	// (0x000117e6) list_double_pane_vc_g1

0x9368,	// (0x00011711) list_double_pane_vc_g2_ParamLimits

0x9368,	// (0x00011711) list_double_pane_vc_g2

0x0001,

0xf661,	// (0x00017a0a) list_double_pane_vc_g_ParamLimits

0xf661,	// (0x00017a0a) list_double_pane_vc_g

0xcb29,	// (0x00014ed2) list_double_pane_vc_t1_ParamLimits

0xcb29,	// (0x00014ed2) list_double_pane_vc_t1

0xcb3b,	// (0x00014ee4) list_double_pane_vc_t2_ParamLimits

0xcb3b,	// (0x00014ee4) list_double_pane_vc_t2

0x0001,

0xfa3f,	// (0x00017de8) list_double_pane_vc_t_ParamLimits

0xfa3f,	// (0x00017de8) list_double_pane_vc_t

0x943d,	// (0x000117e6) list_double_number_pane_vc_g1_ParamLimits

0x943d,	// (0x000117e6) list_double_number_pane_vc_g1

0x9368,	// (0x00011711) list_double_number_pane_vc_g2_ParamLimits

0x9368,	// (0x00011711) list_double_number_pane_vc_g2

0x0001,

0xf661,	// (0x00017a0a) list_double_number_pane_vc_g_ParamLimits

0xf661,	// (0x00017a0a) list_double_number_pane_vc_g

0xcb51,	// (0x00014efa) list_double_number_pane_vc_t1_ParamLimits

0xcb51,	// (0x00014efa) list_double_number_pane_vc_t1

0xcb65,	// (0x00014f0e) list_double_number_pane_vc_t2_ParamLimits

0xcb65,	// (0x00014f0e) list_double_number_pane_vc_t2

0xcb77,	// (0x00014f20) list_double_number_pane_vc_t3_ParamLimits

0xcb77,	// (0x00014f20) list_double_number_pane_vc_t3

0x0002,

0xfa44,	// (0x00017ded) list_double_number_pane_vc_t_ParamLimits

0xfa44,	// (0x00017ded) list_double_number_pane_vc_t

0xcb8d,	// (0x00014f36) list_double_large_graphic_pane_vc_g1_ParamLimits

0xcb8d,	// (0x00014f36) list_double_large_graphic_pane_vc_g1

0xcbb5,	// (0x00014f5e) list_double_large_graphic_pane_vc_g2_ParamLimits

0xcbb5,	// (0x00014f5e) list_double_large_graphic_pane_vc_g2

0xcbc9,	// (0x00014f72) list_double_large_graphic_pane_vc_g3_ParamLimits

0xcbc9,	// (0x00014f72) list_double_large_graphic_pane_vc_g3

0xcbd8,	// (0x00014f81) list_double_large_graphic_pane_vc_g4_ParamLimits

0xcbd8,	// (0x00014f81) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4b,	// (0x00017df4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4b,	// (0x00017df4) list_double_large_graphic_pane_vc_g

0xcbe8,	// (0x00014f91) list_double_large_graphic_pane_vc_t1_ParamLimits

0xcbe8,	// (0x00014f91) list_double_large_graphic_pane_vc_t1

0xcc02,	// (0x00014fab) list_double_large_graphic_pane_vc_t2_ParamLimits

0xcc02,	// (0x00014fab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa54,	// (0x00017dfd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa54,	// (0x00017dfd) list_double_large_graphic_pane_vc_t

0x943d,	// (0x000117e6) list_double_heading_pane_vc_g1_ParamLimits

0x943d,	// (0x000117e6) list_double_heading_pane_vc_g1

0x9368,	// (0x00011711) list_double_heading_pane_vc_g2_ParamLimits

0x9368,	// (0x00011711) list_double_heading_pane_vc_g2

0x0001,

0xf661,	// (0x00017a0a) list_double_heading_pane_vc_g_ParamLimits

0xf661,	// (0x00017a0a) list_double_heading_pane_vc_g

0xcc22,	// (0x00014fcb) list_double_heading_pane_vc_t1_ParamLimits

0xcc22,	// (0x00014fcb) list_double_heading_pane_vc_t1

0xadc5,	// (0x0001316e) list_double_heading_pane_vc_t2_ParamLimits

0xadc5,	// (0x0001316e) list_double_heading_pane_vc_t2

0x0001,

0xfa59,	// (0x00017e02) list_double_heading_pane_vc_t_ParamLimits

0xfa59,	// (0x00017e02) list_double_heading_pane_vc_t

0xcc34,	// (0x00014fdd) list_double_graphic_pane_vc_g1_ParamLimits

0xcc34,	// (0x00014fdd) list_double_graphic_pane_vc_g1

0xcc40,	// (0x00014fe9) list_double_graphic_pane_vc_g2_ParamLimits

0xcc40,	// (0x00014fe9) list_double_graphic_pane_vc_g2

0x943d,	// (0x000117e6) list_double_graphic_pane_vc_g3_ParamLimits

0x943d,	// (0x000117e6) list_double_graphic_pane_vc_g3

0x0003,

0xfa5e,	// (0x00017e07) list_double_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x00017e07) list_double_graphic_pane_vc_g

0xcc5d,	// (0x00015006) list_double_graphic_pane_vc_t1_ParamLimits

0xcc5d,	// (0x00015006) list_double_graphic_pane_vc_t1

0xcc7b,	// (0x00015024) list_double_graphic_pane_vc_t2_ParamLimits

0xcc7b,	// (0x00015024) list_double_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00017e10) list_double_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00017e10) list_double_graphic_pane_vc_t

0x6754,	// (0x0000eafd) aid_size_cell_fastswap

0x675c,	// (0x0000eb05) aid_size_cell_touch_ParamLimits

0x675c,	// (0x0000eb05) aid_size_cell_touch

0x68ab,	// (0x0000ec54) popup_fast_swap_wide_window_ParamLimits

0x68ab,	// (0x0000ec54) popup_fast_swap_wide_window

0x6971,	// (0x0000ed1a) touch_pane_ParamLimits

0x6971,	// (0x0000ed1a) touch_pane

0x96d5,	// (0x00011a7e) button_value_adjust_pane_cp2

0x96dd,	// (0x00011a86) button_value_adjust_pane_cp4

0x96fd,	// (0x00011aa6) form_field_data_pane_cp2

0x971c,	// (0x00011ac5) form_field_data_wide_pane_cp2

0x9d75,	// (0x0001211e) bg_scroll_pane_ParamLimits

0x6b98,	// (0x0000ef41) scroll_handle_pane_ParamLimits

0x6bac,	// (0x0000ef55) scroll_sc2_down_pane_ParamLimits

0x6bac,	// (0x0000ef55) scroll_sc2_down_pane

0x9da6,	// (0x0001214f) scroll_sc2_up_pane_ParamLimits

0x9da6,	// (0x0001214f) scroll_sc2_up_pane

0xd0e5,	// (0x0001548e) grid_wheel_folder_pane_g1_ParamLimits

0xd0e5,	// (0x0001548e) grid_wheel_folder_pane_g1

0x6d60,	// (0x0000f109) clock_nsta_pane_cp2_ParamLimits

0x6d60,	// (0x0000f109) clock_nsta_pane_cp2

0xa56d,	// (0x00012916) listscroll_midp_pane_ParamLimits

0xa579,	// (0x00012922) midp_canvas_pane

0x6fa7,	// (0x0000f350) nsta_clock_indic_pane

0xa885,	// (0x00012c2e) listscroll_form_pane_vc

0xa8a2,	// (0x00012c4b) listscroll_set_pane_vc_ParamLimits

0xa8a2,	// (0x00012c4b) listscroll_set_pane_vc

0xa996,	// (0x00012d3f) clock_nsta_pane

0xaa00,	// (0x00012da9) indicator_nsta_pane

0xacc7,	// (0x00013070) bg_popup_sub_pane_cp2_ParamLimits

0xacdb,	// (0x00013084) find_pane_cp2_ParamLimits

0xacdb,	// (0x00013084) find_pane_cp2

0xaced,	// (0x00013096) grid_toobar_pane_ParamLimits

0xae67,	// (0x00013210) list_form_gen_pane_vc_ParamLimits

0xae67,	// (0x00013210) list_form_gen_pane_vc

0xae7d,	// (0x00013226) scroll_pane_cp8_vc_ParamLimits

0xae7d,	// (0x00013226) scroll_pane_cp8_vc

0xaef9,	// (0x000132a2) data_form_wide_pane_vc_ParamLimits

0xaef9,	// (0x000132a2) data_form_wide_pane_vc

0xaf05,	// (0x000132ae) form_field_data_wide_pane_vc_g1

0xaf0d,	// (0x000132b6) form_field_data_wide_pane_vc_t1_ParamLimits

0xaf0d,	// (0x000132b6) form_field_data_wide_pane_vc_t1

0x97a5,	// (0x00011b4e) input_focus_pane_cp6_vc_ParamLimits

0x97a5,	// (0x00011b4e) input_focus_pane_cp6_vc

0xb209,	// (0x000135b2) list_midp_pane_ParamLimits

0xb215,	// (0x000135be) scroll_pane_cp16_ParamLimits

0xb215,	// (0x000135be) scroll_pane_cp16

0xb26f,	// (0x00013618) button_value_adjust_pane_ParamLimits

0xb26f,	// (0x00013618) button_value_adjust_pane

0xc149,	// (0x000144f2) button_value_adjust_pane_cp6_ParamLimits

0xc149,	// (0x000144f2) button_value_adjust_pane_cp6

0xc251,	// (0x000145fa) settings_code_pane_cp_ParamLimits

0xc251,	// (0x000145fa) settings_code_pane_cp

0x88ce,	// (0x00010c77) cell_touch_pane_g1

0x88ce,	// (0x00010c77) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00017aa7) cell_touch_pane_g

0xc812,	// (0x00014bbb) cell_touch_pane_cp_ParamLimits

0xc812,	// (0x00014bbb) cell_touch_pane_cp

0xc822,	// (0x00014bcb) cell_touch_pane_ParamLimits

0xc822,	// (0x00014bcb) cell_touch_pane

0x88ce,	// (0x00010c77) scroll_sc2_down_pane_g1

0x88ce,	// (0x00010c77) scroll_sc2_up_pane_g1

0x89b5,	// (0x00010d5e) bg_set_opt_pane_cp4_vc

0xc862,	// (0x00014c0b) list_set_graphic_pane_vc_g1_ParamLimits

0xc862,	// (0x00014c0b) list_set_graphic_pane_vc_g1

0xc86e,	// (0x00014c17) list_set_graphic_pane_vc_g2_ParamLimits

0xc86e,	// (0x00014c17) list_set_graphic_pane_vc_g2

0x0001,

0xf9e2,	// (0x00017d8b) list_set_graphic_pane_vc_g_ParamLimits

0xf9e2,	// (0x00017d8b) list_set_graphic_pane_vc_g

0xc87a,	// (0x00014c23) text_primary_small_cp13_vc_ParamLimits

0xc87a,	// (0x00014c23) text_primary_small_cp13_vc

0xc892,	// (0x00014c3b) list_set_graphic_pane_vc_ParamLimits

0xc892,	// (0x00014c3b) list_set_graphic_pane_vc

0x89b5,	// (0x00010d5e) input_focus_pane_cp2_vc

0x88ce,	// (0x00010c77) setting_code_pane_vc_g1

0xc8a5,	// (0x00014c4e) setting_code_pane_vc_t1

0xc8b3,	// (0x00014c5c) set_text_pane_vc_t1_ParamLimits

0xc8b3,	// (0x00014c5c) set_text_pane_vc_t1

0x89b5,	// (0x00010d5e) input_focus_pane_cp1_vc

0xc8ce,	// (0x00014c77) list_set_text_pane_vc

0x88ce,	// (0x00010c77) setting_text_pane_vc_g1

0x89b5,	// (0x00010d5e) bg_set_opt_pane_cp2_vc

0xc8d8,	// (0x00014c81) setting_slider_graphic_pane_vc_g1

0xc8e0,	// (0x00014c89) setting_slider_graphic_pane_vc_t1

0xc8ee,	// (0x00014c97) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e7,	// (0x00017d90) setting_slider_graphic_pane_vc_t

0xc8fc,	// (0x00014ca5) slider_set_pane_cp_vc

0xc904,	// (0x00014cad) slider_set_pane_vc_g1

0xc90d,	// (0x00014cb6) slider_set_pane_vc_g2

0x0006,

0xf9ec,	// (0x00017d95) slider_set_pane_vc_g

0x98c8,	// (0x00011c71) set_opt_bg_pane_g1_copy1

0x98d0,	// (0x00011c79) set_opt_bg_pane_g2_copy1

0xc939,	// (0x00014ce2) set_opt_bg_pane_g3_copy1

0x98e0,	// (0x00011c89) set_opt_bg_pane_g4_copy1

0x98e8,	// (0x00011c91) set_opt_bg_pane_g5_copy1

0x98f0,	// (0x00011c99) set_opt_bg_pane_g6_copy1

0xc941,	// (0x00014cea) set_opt_bg_pane_g7_copy1

0xc949,	// (0x00014cf2) set_opt_bg_pane_g8_copy1

0xc951,	// (0x00014cfa) set_opt_bg_pane_g9_copy1

0x89b5,	// (0x00010d5e) bg_set_opt_pane_cp_vc

0xc959,	// (0x00014d02) setting_slider_pane_vc_t1

0xc8e0,	// (0x00014c89) setting_slider_pane_vc_t2

0xc8ee,	// (0x00014c97) setting_slider_pane_vc_t3

0x0002,

0xf9fb,	// (0x00017da4) setting_slider_pane_vc_t

0xc8fc,	// (0x00014ca5) slider_set_pane_vc

0x760c,	// (0x0000f9b5) volume_set_pane_vc_g1

0x78f3,	// (0x0000fc9c) volume_set_pane_vc_g2

0x78fc,	// (0x0000fca5) volume_set_pane_vc_g3

0x7905,	// (0x0000fcae) volume_set_pane_vc_g4

0x790e,	// (0x0000fcb7) volume_set_pane_vc_g5

0x7917,	// (0x0000fcc0) volume_set_pane_vc_g6

0x7920,	// (0x0000fcc9) volume_set_pane_vc_g7

0x7929,	// (0x0000fcd2) volume_set_pane_vc_g8

0x7932,	// (0x0000fcdb) volume_set_pane_vc_g9

0x793b,	// (0x0000fce4) volume_set_pane_vc_g10

0x0009,

0xfa02,	// (0x00017dab) volume_set_pane_vc_g

0xc968,	// (0x00014d11) volume_set_pane_vc

0xc970,	// (0x00014d19) button_value_adjust_pane_cp1_vc

0xc97a,	// (0x00014d23) list_highlight_pane_cp2_vc

0xc983,	// (0x00014d2c) list_set_pane_vc_ParamLimits

0xc983,	// (0x00014d2c) list_set_pane_vc

0xc9d5,	// (0x00014d7e) main_pane_set_vc_t1_ParamLimits

0xc9d5,	// (0x00014d7e) main_pane_set_vc_t1

0xc9ea,	// (0x00014d93) main_pane_set_vc_t2_ParamLimits

0xc9ea,	// (0x00014d93) main_pane_set_vc_t2

0xc9fc,	// (0x00014da5) main_pane_set_vc_t3_ParamLimits

0xc9fc,	// (0x00014da5) main_pane_set_vc_t3

0xca0e,	// (0x00014db7) main_pane_set_vc_t4_ParamLimits

0xca0e,	// (0x00014db7) main_pane_set_vc_t4

0x0003,

0xfa17,	// (0x00017dc0) main_pane_set_vc_t_ParamLimits

0xfa17,	// (0x00017dc0) main_pane_set_vc_t

0xca20,	// (0x00014dc9) setting_code_pane_vc_ParamLimits

0xca20,	// (0x00014dc9) setting_code_pane_vc

0xca2f,	// (0x00014dd8) setting_slider_graphic_pane_vc

0xca2f,	// (0x00014dd8) setting_slider_pane_vc

0xca2f,	// (0x00014dd8) setting_text_pane_vc

0xca2f,	// (0x00014dd8) setting_volume_pane_vc

0xca37,	// (0x00014de0) scroll_pane_cp121_vc

0x96cc,	// (0x00011a75) set_content_pane_vc

0xcc99,	// (0x00015042) button_value_adjust_pane_g1

0xcca2,	// (0x0001504b) button_value_adjust_pane_g2

0x0001,

0xfa6c,	// (0x00017e15) button_value_adjust_pane_g

0xccab,	// (0x00015054) form_field_slider_wide_pane_vc_t1_ParamLimits

0xccab,	// (0x00015054) form_field_slider_wide_pane_vc_t1

0xccc1,	// (0x0001506a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xccc1,	// (0x0001506a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa71,	// (0x00017e1a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa71,	// (0x00017e1a) form_field_slider_wide_pane_vc_t

0x8d2e,	// (0x000110d7) input_focus_pane_cp10_vc_ParamLimits

0x8d2e,	// (0x000110d7) input_focus_pane_cp10_vc

0xccec,	// (0x00015095) slider_cont_pane_cp1_vc_ParamLimits

0xccec,	// (0x00015095) slider_cont_pane_cp1_vc

0xc904,	// (0x00014cad) slider_form_pane_g1_cp2

0xc90d,	// (0x00014cb6) slider_form_pane_g2_cp2

0xcd07,	// (0x000150b0) form_field_slider_pane_vc_t3

0xcd15,	// (0x000150be) form_field_slider_pane_vc_t4

0xcd23,	// (0x000150cc) slider_form_pane_vc_ParamLimits

0xcd23,	// (0x000150cc) slider_form_pane_vc

0xcd30,	// (0x000150d9) form_field_slider_pane_vc_t1_ParamLimits

0xcd30,	// (0x000150d9) form_field_slider_pane_vc_t1

0xcd46,	// (0x000150ef) form_field_slider_pane_vc_t2_ParamLimits

0xcd46,	// (0x000150ef) form_field_slider_pane_vc_t2

0x0001,

0xfa83,	// (0x00017e2c) form_field_slider_pane_vc_t_ParamLimits

0xfa83,	// (0x00017e2c) form_field_slider_pane_vc_t

0x8d2e,	// (0x000110d7) input_focus_pane_cp9_vc_ParamLimits

0x8d2e,	// (0x000110d7) input_focus_pane_cp9_vc

0xcd58,	// (0x00015101) slider_cont_pane_vc_ParamLimits

0xcd58,	// (0x00015101) slider_cont_pane_vc

0xcd6a,	// (0x00015113) list_form_graphic_pane_cp_vc_ParamLimits

0xcd6a,	// (0x00015113) list_form_graphic_pane_cp_vc

0xaf05,	// (0x000132ae) form_field_popup_wide_pane_vc_g1

0xcd7f,	// (0x00015128) form_field_popup_wide_pane_vc_t1_ParamLimits

0xcd7f,	// (0x00015128) form_field_popup_wide_pane_vc_t1

0x97a5,	// (0x00011b4e) input_focus_pane_cp8_vc_ParamLimits

0x97a5,	// (0x00011b4e) input_focus_pane_cp8_vc

0xcdbe,	// (0x00015167) list_form_wide_pane_vc_ParamLimits

0xcdbe,	// (0x00015167) list_form_wide_pane_vc

0xcdca,	// (0x00015173) list_form_graphic_pane_vc_g1

0xcdd2,	// (0x0001517b) list_form_graphic_pane_vc_t1_ParamLimits

0xcdd2,	// (0x0001517b) list_form_graphic_pane_vc_t1

0x8a95,	// (0x00010e3e) list_highlight_pane_cp5_vc_ParamLimits

0x8a95,	// (0x00010e3e) list_highlight_pane_cp5_vc

0xcdee,	// (0x00015197) list_form_graphic_pane_vc_ParamLimits

0xcdee,	// (0x00015197) list_form_graphic_pane_vc

0xaf05,	// (0x000132ae) form_field_popup_pane_vc_g1

0xce04,	// (0x000151ad) form_field_popup_pane_vc_t1_ParamLimits

0xce04,	// (0x000151ad) form_field_popup_pane_vc_t1

0x97a5,	// (0x00011b4e) input_focus_pane_cp7_vc_ParamLimits

0x97a5,	// (0x00011b4e) input_focus_pane_cp7_vc

0xce19,	// (0x000151c2) list_form_pane_vc_ParamLimits

0xce19,	// (0x000151c2) list_form_pane_vc

0xce25,	// (0x000151ce) data_form_pane_vc_t1_ParamLimits

0xce25,	// (0x000151ce) data_form_pane_vc_t1

0x98c8,	// (0x00011c71) input_focus_pane_vc_g1

0x98d0,	// (0x00011c79) input_focus_pane_vc_g2

0x98d8,	// (0x00011c81) input_focus_pane_vc_g3

0x98e0,	// (0x00011c89) input_focus_pane_vc_g4

0x98e8,	// (0x00011c91) input_focus_pane_vc_g5

0x98f0,	// (0x00011c99) input_focus_pane_vc_g6

0x98f8,	// (0x00011ca1) input_focus_pane_vc_g7

0x9900,	// (0x00011ca9) input_focus_pane_vc_g8

0x9908,	// (0x00011cb1) input_focus_pane_vc_g9

0x88ce,	// (0x00010c77) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00017a30) input_focus_pane_vc_g

0xaef9,	// (0x000132a2) data_form_pane_vc_ParamLimits

0xaef9,	// (0x000132a2) data_form_pane_vc

0xaf05,	// (0x000132ae) form_field_data_pane_vc_g1

0xce40,	// (0x000151e9) form_field_data_pane_vc_t1_ParamLimits

0xce40,	// (0x000151e9) form_field_data_pane_vc_t1

0x97a5,	// (0x00011b4e) input_focus_pane_vc_ParamLimits

0x97a5,	// (0x00011b4e) input_focus_pane_vc

0x96d5,	// (0x00011a7e) button_value_adjust_pane_cp3_vc

0xce56,	// (0x000151ff) button_value_adjust_pane_cp5_vc

0xce5e,	// (0x00015207) form_field_data_pane_vc_ParamLimits

0xce5e,	// (0x00015207) form_field_data_pane_vc

0x96fd,	// (0x00011aa6) form_field_data_pane_vc_cp2

0xce75,	// (0x0001521e) form_field_data_wide_pane_vc_ParamLimits

0xce75,	// (0x0001521e) form_field_data_wide_pane_vc

0xce8b,	// (0x00015234) form_field_data_wide_pane_vc_cp2

0xce93,	// (0x0001523c) form_field_popup_pane_vc_ParamLimits

0xce93,	// (0x0001523c) form_field_popup_pane_vc

0xceaa,	// (0x00015253) form_field_popup_wide_pane_vc_ParamLimits

0xceaa,	// (0x00015253) form_field_popup_wide_pane_vc

0xcec0,	// (0x00015269) form_field_slider_pane_vc_ParamLimits

0xcec0,	// (0x00015269) form_field_slider_pane_vc

0xced3,	// (0x0001527c) form_field_slider_wide_pane_vc_ParamLimits

0xced3,	// (0x0001527c) form_field_slider_wide_pane_vc

0xcee6,	// (0x0001528f) grid_touch_1_pane_ParamLimits

0xcee6,	// (0x0001528f) grid_touch_1_pane

0xcef2,	// (0x0001529b) grid_touch_2_pane_ParamLimits

0xcef2,	// (0x0001529b) grid_touch_2_pane

0xa81c,	// (0x00012bc5) touch_pane_g1_ParamLimits

0xa81c,	// (0x00012bc5) touch_pane_g1

0xcf0a,	// (0x000152b3) cell_app_pane_cp_wide_ParamLimits

0xcf0a,	// (0x000152b3) cell_app_pane_cp_wide

0xcf1a,	// (0x000152c3) grid_popup_fast_wide_pane_ParamLimits

0xcf1a,	// (0x000152c3) grid_popup_fast_wide_pane

0xcf2e,	// (0x000152d7) scroll_pane_cp19_ParamLimits

0xcf2e,	// (0x000152d7) scroll_pane_cp19

0x89b5,	// (0x00010d5e) bg_popup_window_pane_cp20

0xcf42,	// (0x000152eb) listscroll_popup_fast_wide_pane

0x8a95,	// (0x00010e3e) grid_indicator_nsta_pane

0xcf4a,	// (0x000152f3) clock_nsta_pane_g1

0xcf53,	// (0x000152fc) clock_nsta_pane_t1

0xcf6f,	// (0x00015318) cell_indicator_nsta_pane_ParamLimits

0xcf6f,	// (0x00015318) cell_indicator_nsta_pane

0xcfa0,	// (0x00015349) cell_indicator_nsta_pane_g1

0xcfae,	// (0x00015357) cell_indicator_nsta_pane_g2

0x0001,

0xfa94,	// (0x00017e3d) cell_indicator_nsta_pane_g

0xcfbb,	// (0x00015364) clock_nsta_pane_cp

0xcfc3,	// (0x0001536c) indicator_nsta_pane_cp

0xcfcc,	// (0x00015375) nsta_clock_indic_pane_g1

0x8b75,	// (0x00010f1e) grid_indicator_pane

0x9e98,	// (0x00012241) scroll_pane_cp29

0x6cb7,	// (0x0000f060) indicator_nsta_pane_cp2_ParamLimits

0x6cb7,	// (0x0000f060) indicator_nsta_pane_cp2

0x8a95,	// (0x00010e3e) main_apps_wheel_pane

0xb0e4,	// (0x0001348d) form_midp_field_text_pane_ParamLimits

0xb235,	// (0x000135de) scroll_bar_cp050_ParamLimits

0xd035,	// (0x000153de) cell_indicator_pane_ParamLimits

0xd035,	// (0x000153de) cell_indicator_pane

0xd04b,	// (0x000153f4) cell_indicator_pane_g1

0xd055,	// (0x000153fe) grid_wheel_folder_pane_ParamLimits

0xd055,	// (0x000153fe) grid_wheel_folder_pane

0xd067,	// (0x00015410) list_wheel_apps_pane_ParamLimits

0xd067,	// (0x00015410) list_wheel_apps_pane

0xd076,	// (0x0001541f) main_apps_wheel_pane_g1_ParamLimits

0xd076,	// (0x0001541f) main_apps_wheel_pane_g1

0xd08a,	// (0x00015433) main_apps_wheel_pane_g2_ParamLimits

0xd08a,	// (0x00015433) main_apps_wheel_pane_g2

0x0001,

0xfab0,	// (0x00017e59) main_apps_wheel_pane_g_ParamLimits

0xfab0,	// (0x00017e59) main_apps_wheel_pane_g

0xd09e,	// (0x00015447) main_apps_wheel_pane_t1_ParamLimits

0xd09e,	// (0x00015447) main_apps_wheel_pane_t1

0xd0bd,	// (0x00015466) list_wheel_apps_pane_g1

0xd0c5,	// (0x0001546e) list_wheel_apps_pane_g2

0xd0cd,	// (0x00015476) list_wheel_apps_pane_g3

0xd0d5,	// (0x0001547e) list_wheel_apps_pane_g4

0xd0dd,	// (0x00015486) list_wheel_apps_pane_g5

0x0004,

0xfab5,	// (0x00017e5e) list_wheel_apps_pane_g

0x8a95,	// (0x00010e3e) navi_icon_text_pane

0xa8de,	// (0x00012c87) aid_fill_nsta

0xd0fc,	// (0x000154a5) navi_icon_text_pane_g1

0xd108,	// (0x000154b1) navi_icon_text_pane_t1

0xa2d7,	// (0x00012680) list_set_graphic_pane_t1_ParamLimits

0xa2d7,	// (0x00012680) list_set_graphic_pane_t1

0xb94f,	// (0x00013cf8) popup_midp_note_alarm_window_t6_ParamLimits

0xb94f,	// (0x00013cf8) popup_midp_note_alarm_window_t6

0xb961,	// (0x00013d0a) popup_midp_note_alarm_window_t7_ParamLimits

0xb961,	// (0x00013d0a) popup_midp_note_alarm_window_t7

0xb973,	// (0x00013d1c) popup_midp_note_alarm_window_t8_ParamLimits

0xb973,	// (0x00013d1c) popup_midp_note_alarm_window_t8

0xb985,	// (0x00013d2e) popup_midp_note_alarm_window_t9_ParamLimits

0xb985,	// (0x00013d2e) popup_midp_note_alarm_window_t9

0xb997,	// (0x00013d40) popup_midp_note_alarm_window_t10_ParamLimits

0xb997,	// (0x00013d40) popup_midp_note_alarm_window_t10

0xb9a9,	// (0x00013d52) popup_midp_note_alarm_window_t11_ParamLimits

0xb9a9,	// (0x00013d52) popup_midp_note_alarm_window_t11

0xb9bb,	// (0x00013d64) scroll_pane_cp17_ParamLimits

0xb9bb,	// (0x00013d64) scroll_pane_cp17

0x760c,	// (0x0000f9b5) volume_small_pane_cp_g1

0x7944,	// (0x0000fced) volume_small_pane_cp_g2

0x794d,	// (0x0000fcf6) volume_small_pane_cp_g3

0x7956,	// (0x0000fcff) volume_small_pane_cp_g4

0x7639,	// (0x0000f9e2) volume_small_pane_cp_g5

0x795f,	// (0x0000fd08) volume_small_pane_cp_g6

0x7968,	// (0x0000fd11) volume_small_pane_cp_g7

0x7971,	// (0x0000fd1a) volume_small_pane_cp_g8

0x797a,	// (0x0000fd23) volume_small_pane_cp_g9

0x7983,	// (0x0000fd2c) volume_small_pane_cp_g10

0xa636,	// (0x000129df) midp_ticker_pane_g1_ParamLimits

0xa642,	// (0x000129eb) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00017afc) midp_ticker_pane_g_ParamLimits

0xa64e,	// (0x000129f7) midp_ticker_pane_t1_ParamLimits

0xa8ee,	// (0x00012c97) aid_fill_nsta_2

0xb221,	// (0x000135ca) list_form2_midp_pane

0xc2d0,	// (0x00014679) midp_editing_number_pane_ParamLimits

0xc2dc,	// (0x00014685) midp_ticker_pane_ParamLimits

0xd11a,	// (0x000154c3) form2_midp_field_pane

0xd13e,	// (0x000154e7) scroll_pane_cp51

0xd15e,	// (0x00015507) form2_midp_button_pane_ParamLimits

0xd15e,	// (0x00015507) form2_midp_button_pane

0xd170,	// (0x00015519) form2_midp_content_pane_ParamLimits

0xd170,	// (0x00015519) form2_midp_content_pane

0xd18a,	// (0x00015533) form2_midp_field_choice_group_pane

0xd192,	// (0x0001553b) form2_midp_field_pane_g1

0xd19a,	// (0x00015543) form2_midp_field_pane_g2

0xd1a2,	// (0x0001554b) form2_midp_field_pane_g3

0xd1aa,	// (0x00015553) form2_midp_field_pane_g4

0x0003,

0xfada,	// (0x00017e83) form2_midp_field_pane_g

0xd1b2,	// (0x0001555b) form2_midp_gauge_slider_pane

0xd1ba,	// (0x00015563) form2_midp_gauge_wait_pane

0xd1c2,	// (0x0001556b) form2_midp_image_pane_ParamLimits

0xd1c2,	// (0x0001556b) form2_midp_image_pane

0xd1dd,	// (0x00015586) form2_midp_label_pane_ParamLimits

0xd1dd,	// (0x00015586) form2_midp_label_pane

0xd1f6,	// (0x0001559f) form2_midp_label_pane_cp_ParamLimits

0xd1f6,	// (0x0001559f) form2_midp_label_pane_cp

0xd215,	// (0x000155be) form2_midp_string_pane_ParamLimits

0xd215,	// (0x000155be) form2_midp_string_pane

0xd227,	// (0x000155d0) form2_midp_text_pane_ParamLimits

0xd227,	// (0x000155d0) form2_midp_text_pane

0xd240,	// (0x000155e9) form2_midp_time_pane

0xd250,	// (0x000155f9) input_focus_pane_cp51_ParamLimits

0xd250,	// (0x000155f9) input_focus_pane_cp51

0xd268,	// (0x00015611) form2_midp_label_pane_t1_ParamLimits

0xd268,	// (0x00015611) form2_midp_label_pane_t1

0x9910,	// (0x00011cb9) form2_mdip_text_pane_t1_ParamLimits

0x9910,	// (0x00011cb9) form2_mdip_text_pane_t1

0xd2a8,	// (0x00015651) form2_midp_time_pane_t1

0xd2c3,	// (0x0001566c) form2_midp_gauge_slider_pane_t1

0xd2d5,	// (0x0001567e) form2_midp_gauge_slider_pane_t2

0xd2e7,	// (0x00015690) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae3,	// (0x00017e8c) form2_midp_gauge_slider_pane_t

0xd2f9,	// (0x000156a2) form2_midp_slider_pane

0xd305,	// (0x000156ae) form2_midp_gauge_wait_pane_t1

0xd313,	// (0x000156bc) form2_midp_wait_pane_ParamLimits

0xd313,	// (0x000156bc) form2_midp_wait_pane

0xaf43,	// (0x000132ec) list_single_2graphic_pane_cp4_ParamLimits

0xaf43,	// (0x000132ec) list_single_2graphic_pane_cp4

0xd33e,	// (0x000156e7) list_single_midp_graphic_pane_cp_ParamLimits

0xd33e,	// (0x000156e7) list_single_midp_graphic_pane_cp

0x89b5,	// (0x00010d5e) list_highlight_pane_cp20

0xd35c,	// (0x00015705) list_single_2graphic_pane_g1_cp4

0xc440,	// (0x000147e9) list_single_2graphic_pane_g2_cp4

0xd364,	// (0x0001570d) list_single_2graphic_pane_t1_cp4

0x8a95,	// (0x00010e3e) list_highlight_pane_cp21

0xd373,	// (0x0001571c) list_single_midp_graphic_pane_g4_cp

0xd382,	// (0x0001572b) list_single_midp_graphic_pane_t1_cp

0xd397,	// (0x00015740) form2_mdip_string_pane_t1_ParamLimits

0xd397,	// (0x00015740) form2_mdip_string_pane_t1

0x89b5,	// (0x00010d5e) bg_wml_button_pane_cp2

0x88ce,	// (0x00010c77) form2_midp_image_pane_g1

0x94ba,	// (0x00011863) list_double_large_graphic_pane_g5_ParamLimits

0x94ba,	// (0x00011863) list_double_large_graphic_pane_g5

0xa56d,	// (0x00012916) midp_form_pane_ParamLimits

0x8a95,	// (0x00010e3e) main_apps_wheel_pane_ParamLimits

0x72ab,	// (0x0000f654) popup_preview_window_ParamLimits

0x72ab,	// (0x0000f654) popup_preview_window

0x7426,	// (0x0000f7cf) popup_touch_info_window_ParamLimits

0x7426,	// (0x0000f7cf) popup_touch_info_window

0x7444,	// (0x0000f7ed) popup_touch_menu_window_ParamLimits

0x7444,	// (0x0000f7ed) popup_touch_menu_window

0x88c4,	// (0x00010c6d) bg_popup_sub_pane_cp6

0xd401,	// (0x000157aa) list_touch_menu_pane

0xd409,	// (0x000157b2) list_single_touch_menu_pane_ParamLimits

0xd409,	// (0x000157b2) list_single_touch_menu_pane

0xd420,	// (0x000157c9) list_single_touch_menu_pane_t1

0x8a95,	// (0x00010e3e) bg_popup_sub_pane_cp7_ParamLimits

0x8a95,	// (0x00010e3e) bg_popup_sub_pane_cp7

0xd42e,	// (0x000157d7) heading_sub_pane

0xd436,	// (0x000157df) list_touch_info_pane_ParamLimits

0xd436,	// (0x000157df) list_touch_info_pane

0xd445,	// (0x000157ee) list_single_touch_info_pane_ParamLimits

0xd445,	// (0x000157ee) list_single_touch_info_pane

0xd456,	// (0x000157ff) list_single_touch_info_pane_t1

0xd464,	// (0x0001580d) list_single_touch_info_pane_t2

0x0001,

0xfaf1,	// (0x00017e9a) list_single_touch_info_pane_t

0xa565,	// (0x0001290e) bg_popup_heading_pane_cp

0xd472,	// (0x0001581b) heading_sub_pane_t1

0xae93,	// (0x0001323c) bg_popup_preview_window_pane_cp_ParamLimits

0xae93,	// (0x0001323c) bg_popup_preview_window_pane_cp

0xd42e,	// (0x000157d7) heading_preview_pane

0xd436,	// (0x000157df) list_preview_pane_ParamLimits

0xd436,	// (0x000157df) list_preview_pane

0xd480,	// (0x00015829) popup_preview_window_g1

0xd445,	// (0x000157ee) list_single_preview_pane_ParamLimits

0xd445,	// (0x000157ee) list_single_preview_pane

0xd488,	// (0x00015831) list_single_preview_pane_g1

0xd490,	// (0x00015839) list_single_preview_pane_t1

0xd456,	// (0x000157ff) list_single_preview_pane_t2

0x0001,

0xfaf6,	// (0x00017e9f) list_single_preview_pane_t

0xd49e,	// (0x00015847) bg_popup_heading_pane_cp2_ParamLimits

0xd49e,	// (0x00015847) bg_popup_heading_pane_cp2

0xd4b4,	// (0x0001585d) heading_preview_pane_g1

0xd4bc,	// (0x00015865) heading_preview_pane_t1_ParamLimits

0xd4bc,	// (0x00015865) heading_preview_pane_t1

0x8b98,	// (0x00010f41) soft_indicator_pane_t1_ParamLimits

0x91fb,	// (0x000115a4) scroll_pane_ParamLimits

0x9d94,	// (0x0001213d) scroll_sc2_left_pane

0x9d9d,	// (0x00012146) scroll_sc2_right_pane

0x9dbc,	// (0x00012165) scroll_bg_pane_g1_ParamLimits

0x9dd1,	// (0x0001217a) scroll_bg_pane_g2_ParamLimits

0x9de9,	// (0x00012192) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00017a87) scroll_bg_pane_g_ParamLimits

0x9dbc,	// (0x00012165) scroll_handle_pane_g1_ParamLimits

0x9e0b,	// (0x000121b4) scroll_handle_pane_g2_ParamLimits

0x9de9,	// (0x00012192) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00017a8e) scroll_handle_pane_g_ParamLimits

0x6ff3,	// (0x0000f39c) popup_choice_list_window_ParamLimits

0x6ff3,	// (0x0000f39c) popup_choice_list_window

0xacd3,	// (0x0001307c) choice_list_pane

0xad49,	// (0x000130f2) cell_toolbar_pane_t1

0xad71,	// (0x0001311a) toolbar_button_pane_ParamLimits

0xbe44,	// (0x000141ed) ai_gene_pane_1_t2_ParamLimits

0xbe44,	// (0x000141ed) ai_gene_pane_1_t2

0x0001,

0xf901,	// (0x00017caa) ai_gene_pane_1_t_ParamLimits

0xf901,	// (0x00017caa) ai_gene_pane_1_t

0xd4d9,	// (0x00015882) scroll_sc2_left_pane_g1

0xd4d9,	// (0x00015882) scroll_sc2_right_pane_g1

0xa8b4,	// (0x00012c5d) bg_popup_sub_pane_cp10

0xd4e3,	// (0x0001588c) list_choice_list_pane

0xd4fa,	// (0x000158a3) list_single_choice_list_pane_ParamLimits

0xd4fa,	// (0x000158a3) list_single_choice_list_pane

0xd50c,	// (0x000158b5) list_single_choice_list_pane_g1

0x9a8b,	// (0x00011e34) list_single_choice_list_pane_t1_ParamLimits

0x9a8b,	// (0x00011e34) list_single_choice_list_pane_t1

0xd514,	// (0x000158bd) choice_list_pane_g1

0xd51c,	// (0x000158c5) choice_list_pane_t1

0x88c4,	// (0x00010c6d) input_focus_pane_cp11

0x9c6f,	// (0x00012018) title_pane_stacon_g2_ParamLimits

0x9c6f,	// (0x00012018) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00017a6d) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00017a6d) title_pane_stacon_g

0xa565,	// (0x0001290e) cursor_press_pane

0x708f,	// (0x0000f438) popup_fep_hwr_window_ParamLimits

0x708f,	// (0x0000f438) popup_fep_hwr_window

0x70eb,	// (0x0000f494) popup_fep_vkb_window_ParamLimits

0x70eb,	// (0x0000f494) popup_fep_vkb_window

0xd52a,	// (0x000158d3) cursor_press_pane_g1

0x0002,

0xfb1f,	// (0x00017ec8) fep_vkb_side_pane_g_ParamLimits

0x79c1,	// (0x0000fd6a) fep_hwr_candidate_pane_ParamLimits

0x79c1,	// (0x0000fd6a) fep_hwr_candidate_pane

0x79e9,	// (0x0000fd92) fep_hwr_side_pane_ParamLimits

0x79e9,	// (0x0000fd92) fep_hwr_side_pane

0x7a09,	// (0x0000fdb2) fep_hwr_top_pane_ParamLimits

0x7a09,	// (0x0000fdb2) fep_hwr_top_pane

0x7a21,	// (0x0000fdca) fep_hwr_write_pane_ParamLimits

0x7a21,	// (0x0000fdca) fep_hwr_write_pane

0xfb1f,	// (0x00017ec8) fep_vkb_side_pane_g

0xd532,	// (0x000158db) fep_hwr_top_pane_g1

0xd544,	// (0x000158ed) fep_hwr_top_pane_g2

0x7a5b,	// (0x0000fe04) fep_hwr_top_pane_g3

0x0002,

0xfafb,	// (0x00017ea4) fep_hwr_top_pane_g

0x7a70,	// (0x0000fe19) fep_hwr_top_text_pane

0x9f60,	// (0x00012309) fep_hwr_top_text_pane_g1

0xd57a,	// (0x00015923) fep_hwr_top_text_pane_t1

0x7b5e,	// (0x0000ff07) fep_hwr_candidate_pane_g1

0xd78a,	// (0x00015b33) fep_vkb_keypad_pane_g3_ParamLimits

0xd78a,	// (0x00015b33) fep_vkb_keypad_pane_g3

0xd7ac,	// (0x00015b55) fep_vkb_keypad_pane_g4_ParamLimits

0xd7ac,	// (0x00015b55) fep_vkb_keypad_pane_g4

0xd81b,	// (0x00015bc4) fep_vkb_bottom_pane_g2_ParamLimits

0xd81b,	// (0x00015bc4) fep_vkb_bottom_pane_g2

0x0001,

0xfb26,	// (0x00017ecf) fep_vkb_bottom_pane_g_ParamLimits

0xfb26,	// (0x00017ecf) fep_vkb_bottom_pane_g

0xd4d9,	// (0x00015882) cell_vkb_side_pane_g2

0x0001,

0xfb30,	// (0x00017ed9) cell_vkb_side_pane_g

0xd8a6,	// (0x00015c4f) cell_vkb_side_pane_t1

0xd8b4,	// (0x00015c5d) cell_vkb_side_pane_t1_copy1

0xd4d9,	// (0x00015882) bg_fep_vkb_candidate_pane_g2

0xd9d8,	// (0x00015d81) cell_vkb_candidate_pane_ParamLimits

0xd588,	// (0x00015931) aid_size_cell_vkb_ParamLimits

0xd588,	// (0x00015931) aid_size_cell_vkb

0xd9d8,	// (0x00015d81) cell_vkb_candidate_pane

0x7b85,	// (0x0000ff2e) bg_popup_fep_shadow_pane_g1

0xd5fe,	// (0x000159a7) fep_vkb_bottom_pane_ParamLimits

0xd5fe,	// (0x000159a7) fep_vkb_bottom_pane

0xd63b,	// (0x000159e4) fep_vkb_candidate_pane_ParamLimits

0xd63b,	// (0x000159e4) fep_vkb_candidate_pane

0xd657,	// (0x00015a00) fep_vkb_keypad_pane_ParamLimits

0xd657,	// (0x00015a00) fep_vkb_keypad_pane

0xd68b,	// (0x00015a34) fep_vkb_side_pane_ParamLimits

0xd68b,	// (0x00015a34) fep_vkb_side_pane

0xd6b7,	// (0x00015a60) fep_vkb_top_pane_ParamLimits

0xd6b7,	// (0x00015a60) fep_vkb_top_pane

0xd6e3,	// (0x00015a8c) fep_vkb_top_pane_g1_ParamLimits

0xd6e3,	// (0x00015a8c) fep_vkb_top_pane_g1

0xd6f2,	// (0x00015a9b) fep_vkb_top_pane_g2_ParamLimits

0xd6f2,	// (0x00015a9b) fep_vkb_top_pane_g2

0xd701,	// (0x00015aaa) fep_vkb_top_pane_g3_ParamLimits

0xd701,	// (0x00015aaa) fep_vkb_top_pane_g3

0x0003,

0xfb16,	// (0x00017ebf) fep_vkb_top_pane_g_ParamLimits

0xfb16,	// (0x00017ebf) fep_vkb_top_pane_g

0xd71f,	// (0x00015ac8) fep_vkb_top_text_pane_ParamLimits

0xd71f,	// (0x00015ac8) fep_vkb_top_text_pane

0xd730,	// (0x00015ad9) fep_vkb_side_pane_g1_ParamLimits

0xd730,	// (0x00015ad9) fep_vkb_side_pane_g1

0xd779,	// (0x00015b22) grid_vkb_side_pane_ParamLimits

0xd779,	// (0x00015b22) grid_vkb_side_pane

0x7b8d,	// (0x0000ff36) bg_popup_fep_shadow_pane_g2

0x7b96,	// (0x0000ff3f) bg_popup_fep_shadow_pane_g3

0x7b9e,	// (0x0000ff47) bg_popup_fep_shadow_pane_g4

0x7ba7,	// (0x0000ff50) bg_popup_fep_shadow_pane_g5

0x7baf,	// (0x0000ff58) bg_popup_fep_shadow_pane_g6

0x7bb7,	// (0x0000ff60) bg_popup_fep_shadow_pane_g7

0x98e0,	// (0x00011c89) bg_popup_fep_shadow_pane_g8

0xd7ca,	// (0x00015b73) grid_vkb_keypad_number_pane_ParamLimits

0xd7ca,	// (0x00015b73) grid_vkb_keypad_number_pane

0xd7da,	// (0x00015b83) grid_vkb_keypad_pane_ParamLimits

0xd7da,	// (0x00015b83) grid_vkb_keypad_pane

0xd800,	// (0x00015ba9) fep_vkb_bottom_pane_g1_ParamLimits

0xd800,	// (0x00015ba9) fep_vkb_bottom_pane_g1

0xd829,	// (0x00015bd2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xd829,	// (0x00015bd2) grid_vkb_keypad_bottom_left_pane

0xd83e,	// (0x00015be7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xd83e,	// (0x00015be7) grid_vkb_keypad_bottom_right_pane

0xd853,	// (0x00015bfc) fep_vkb_top_text_pane_g1

0xd86e,	// (0x00015c17) fep_vkb_top_text_pane_t1

0xd883,	// (0x00015c2c) cell_vkb_side_pane_ParamLimits

0xd883,	// (0x00015c2c) cell_vkb_side_pane

0xd4d9,	// (0x00015882) cell_vkb_side_pane_g1

0xd8c2,	// (0x00015c6b) cell_vkb_keypad_pane_ParamLimits

0xd8c2,	// (0x00015c6b) cell_vkb_keypad_pane

0xd92f,	// (0x00015cd8) cell_vkb_keypad_pane_g1

0x0008,

0xfb43,	// (0x00017eec) bg_popup_fep_shadow_pane_g

0x7bc7,	// (0x0000ff70) cell_hwr_side_pane_g1

0x7bc7,	// (0x0000ff70) cell_hwr_side_pane_g2

0xd939,	// (0x00015ce2) cell_vkb_keypad_pane_t1

0xd947,	// (0x00015cf0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd947,	// (0x00015cf0) cell_vkb_keypad_bottom_left_pane

0xd964,	// (0x00015d0d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd964,	// (0x00015d0d) cell_vkb_keypad_bottom_right_pane

0xd4d9,	// (0x00015882) cell_vkb_keypad_bottom_left_pane_g1

0xd4d9,	// (0x00015882) cell_vkb_keypad_bottom_right_pane_g1

0xd99d,	// (0x00015d46) cell_vkb_keypad_number_pane_ParamLimits

0xd99d,	// (0x00015d46) cell_vkb_keypad_number_pane

0xd9bc,	// (0x00015d65) cell_vkb_keypad_number_pane_g1

0xd9c6,	// (0x00015d6f) cell_vkb_keypad_number_pane_g2

0xd9cf,	// (0x00015d78) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb35,	// (0x00017ede) cell_vkb_keypad_number_pane_g

0xd939,	// (0x00015ce2) cell_vkb_keypad_number_pane_t1

0xd9f1,	// (0x00015d9a) fep_vkb_candidate_pane_g1

0x0001,

0xfb56,	// (0x00017eff) cell_hwr_side_pane_g

0xda0a,	// (0x00015db3) cell_hwr_side_pane_t1

0x7bd1,	// (0x0000ff7a) cell_hwr_side_pane_t1_copy1

0x7bdf,	// (0x0000ff88) cell_hwr_candidate_pane_g1

0x7c0e,	// (0x0000ffb7) cell_hwr_candidate_pane_t1

0xd4d9,	// (0x00015882) cell_vkb_candidate_pane_g2

0xda4e,	// (0x00015df7) cell_vkb_candidate_pane_t1

0x798c,	// (0x0000fd35) bg_popup_fep_shadow_pane_ParamLimits

0x798c,	// (0x0000fd35) bg_popup_fep_shadow_pane

0x7a3b,	// (0x0000fde4) bg_fep_hwr_top_pane_g4

0xd556,	// (0x000158ff) bg_hwr_side_pane_g1_ParamLimits

0xd556,	// (0x000158ff) bg_hwr_side_pane_g1

0x7aac,	// (0x0000fe55) cell_hwr_side_pane_ParamLimits

0x7aac,	// (0x0000fe55) cell_hwr_side_pane

0x7ae7,	// (0x0000fe90) fep_hwr_write_pane_g1_ParamLimits

0x7ae7,	// (0x0000fe90) fep_hwr_write_pane_g1

0x7af4,	// (0x0000fe9d) fep_hwr_write_pane_g2_ParamLimits

0x7af4,	// (0x0000fe9d) fep_hwr_write_pane_g2

0x7b01,	// (0x0000feaa) fep_hwr_write_pane_g3_ParamLimits

0x7b01,	// (0x0000feaa) fep_hwr_write_pane_g3

0x7b0f,	// (0x0000feb8) fep_hwr_write_pane_g4_ParamLimits

0x7b0f,	// (0x0000feb8) fep_hwr_write_pane_g4

0x0005,

0xfb02,	// (0x00017eab) fep_hwr_write_pane_g_ParamLimits

0xfb02,	// (0x00017eab) fep_hwr_write_pane_g

0x7a3b,	// (0x0000fde4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7a3b,	// (0x0000fde4) bg_fep_hwr_candidate_pane_g2

0x7b24,	// (0x0000fecd) cell_hwr_candidate_pane_ParamLimits

0x7b24,	// (0x0000fecd) cell_hwr_candidate_pane

0x7b5e,	// (0x0000ff07) fep_hwr_candidate_pane_g1_ParamLimits

0xd5b6,	// (0x0001595f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xd5b6,	// (0x0001595f) bg_popup_fep_shadow_pane_cp2

0xd711,	// (0x00015aba) fep_vkb_top_pane_g4_ParamLimits

0xd711,	// (0x00015aba) fep_vkb_top_pane_g4

0xd757,	// (0x00015b00) fep_vkb_side_pane_g2_ParamLimits

0xd757,	// (0x00015b00) fep_vkb_side_pane_g2

0x95ea,	// (0x00011993) list_setting_pane_t4_ParamLimits

0x95ea,	// (0x00011993) list_setting_pane_t4

0x9660,	// (0x00011a09) list_setting_number_pane_t5_ParamLimits

0x9660,	// (0x00011a09) list_setting_number_pane_t5

0x9f97,	// (0x00012340) list_double_heading_pane_cp2_ParamLimits

0x9f97,	// (0x00012340) list_double_heading_pane_cp2

0xa3da,	// (0x00012783) list_double_heading_pane_g1_cp2_ParamLimits

0xa3da,	// (0x00012783) list_double_heading_pane_g1_cp2

0xda5c,	// (0x00015e05) list_double_heading_pane_g2_cp2_ParamLimits

0xda5c,	// (0x00015e05) list_double_heading_pane_g2_cp2

0xda70,	// (0x00015e19) list_double_heading_pane_t1_cp2_ParamLimits

0xda70,	// (0x00015e19) list_double_heading_pane_t1_cp2

0xda86,	// (0x00015e2f) list_double_heading_pane_t2_cp2_ParamLimits

0xda86,	// (0x00015e2f) list_double_heading_pane_t2_cp2

0x88ae,	// (0x00010c57) aid_value_unit2

0x68e7,	// (0x0000ec90) popup_preview_fixed_window

0x8d3c,	// (0x000110e5) bg_popup_preview_window_pane_cp02

0xda98,	// (0x00015e41) list_preview_fixed_pane

0xdb20,	// (0x00015ec9) list_empty_pane_fp_ParamLimits

0xdb20,	// (0x00015ec9) list_empty_pane_fp

0xdb20,	// (0x00015ec9) list_single_cale_day_pane_fp_ParamLimits

0xdb20,	// (0x00015ec9) list_single_cale_day_pane_fp

0xdb20,	// (0x00015ec9) list_single_graphic_heading_pane_fp_ParamLimits

0xdb20,	// (0x00015ec9) list_single_graphic_heading_pane_fp

0xdb20,	// (0x00015ec9) list_single_graphic_pane_fp_ParamLimits

0xdb20,	// (0x00015ec9) list_single_graphic_pane_fp

0xdb20,	// (0x00015ec9) list_single_heading_pane_fp_ParamLimits

0xdb20,	// (0x00015ec9) list_single_heading_pane_fp

0xdb20,	// (0x00015ec9) list_single_pane_fp_ParamLimits

0xdb20,	// (0x00015ec9) list_single_pane_fp

0xdb34,	// (0x00015edd) list_single_pane_fp_g1_ParamLimits

0xdb34,	// (0x00015edd) list_single_pane_fp_g1

0x943d,	// (0x000117e6) list_single_pane_fp_g2_ParamLimits

0x943d,	// (0x000117e6) list_single_pane_fp_g2

0xdb40,	// (0x00015ee9) list_single_pane_fp_g3_ParamLimits

0xdb40,	// (0x00015ee9) list_single_pane_fp_g3

0xdb54,	// (0x00015efd) list_single_pane_fp_g4_ParamLimits

0xdb54,	// (0x00015efd) list_single_pane_fp_g4

0x0003,

0xfb69,	// (0x00017f12) list_single_pane_fp_g_ParamLimits

0xfb69,	// (0x00017f12) list_single_pane_fp_g

0xdb60,	// (0x00015f09) list_single_pane_fp_t1_ParamLimits

0xdb60,	// (0x00015f09) list_single_pane_fp_t1

0xdb77,	// (0x00015f20) list_single_graphic_pane_fp_g1_ParamLimits

0xdb77,	// (0x00015f20) list_single_graphic_pane_fp_g1

0xdb34,	// (0x00015edd) list_single_graphic_pane_fp_g2_ParamLimits

0xdb34,	// (0x00015edd) list_single_graphic_pane_fp_g2

0x943d,	// (0x000117e6) list_single_graphic_pane_fp_g3_ParamLimits

0x943d,	// (0x000117e6) list_single_graphic_pane_fp_g3

0xdb40,	// (0x00015ee9) list_single_graphic_pane_fp_g4_ParamLimits

0xdb40,	// (0x00015ee9) list_single_graphic_pane_fp_g4

0xdb54,	// (0x00015efd) list_single_graphic_pane_fp_g5_ParamLimits

0xdb54,	// (0x00015efd) list_single_graphic_pane_fp_g5

0x0004,

0xfb72,	// (0x00017f1b) list_single_graphic_pane_fp_g_ParamLimits

0xfb72,	// (0x00017f1b) list_single_graphic_pane_fp_g

0xdb83,	// (0x00015f2c) list_single_graphic_pane_fp_t1_ParamLimits

0xdb83,	// (0x00015f2c) list_single_graphic_pane_fp_t1

0xdb77,	// (0x00015f20) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xdb77,	// (0x00015f20) list_single_graphic_heading_pane_fp_g1

0xdb34,	// (0x00015edd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xdb34,	// (0x00015edd) list_single_graphic_heading_pane_fp_g2

0x943d,	// (0x000117e6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x943d,	// (0x000117e6) list_single_graphic_heading_pane_fp_g3

0xdb40,	// (0x00015ee9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xdb40,	// (0x00015ee9) list_single_graphic_heading_pane_fp_g4

0xdb54,	// (0x00015efd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xdb54,	// (0x00015efd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb72,	// (0x00017f1b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb72,	// (0x00017f1b) list_single_graphic_heading_pane_fp_g

0xdb99,	// (0x00015f42) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xdb99,	// (0x00015f42) list_single_graphic_heading_pane_fp_t1

0xdbaf,	// (0x00015f58) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xdbaf,	// (0x00015f58) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7d,	// (0x00017f26) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7d,	// (0x00017f26) list_single_graphic_heading_pane_fp_t

0xdbc1,	// (0x00015f6a) list_single_cale_day_pane_fp_g1_ParamLimits

0xdbc1,	// (0x00015f6a) list_single_cale_day_pane_fp_g1

0xdbf9,	// (0x00015fa2) list_single_cale_day_pane_fp_g2_ParamLimits

0xdbf9,	// (0x00015fa2) list_single_cale_day_pane_fp_g2

0xdc05,	// (0x00015fae) list_single_cale_day_pane_fp_g3_ParamLimits

0xdc05,	// (0x00015fae) list_single_cale_day_pane_fp_g3

0xdc2d,	// (0x00015fd6) list_single_cale_day_pane_fp_g4_ParamLimits

0xdc2d,	// (0x00015fd6) list_single_cale_day_pane_fp_g4

0xdc51,	// (0x00015ffa) list_single_cale_day_pane_fp_g5_ParamLimits

0xdc51,	// (0x00015ffa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb82,	// (0x00017f2b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb82,	// (0x00017f2b) list_single_cale_day_pane_fp_g

0xdc75,	// (0x0001601e) list_single_cale_day_pane_fp_t1_ParamLimits

0xdc75,	// (0x0001601e) list_single_cale_day_pane_fp_t1

0xdc9b,	// (0x00016044) list_single_cale_day_pane_fp_t2_ParamLimits

0xdc9b,	// (0x00016044) list_single_cale_day_pane_fp_t2

0xdcb4,	// (0x0001605d) list_single_cale_day_pane_fp_t3_ParamLimits

0xdcb4,	// (0x0001605d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8d,	// (0x00017f36) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8d,	// (0x00017f36) list_single_cale_day_pane_fp_t

0xdb34,	// (0x00015edd) list_empty_pane_fp_g1_ParamLimits

0xdb34,	// (0x00015edd) list_empty_pane_fp_g1

0xdccd,	// (0x00016076) list_empty_pane_fp_t1

0xdcdb,	// (0x00016084) list_empty_pane_fp_t2

0x0001,

0xfb94,	// (0x00017f3d) list_empty_pane_fp_t

0xdb34,	// (0x00015edd) list_single_heading_pane_fp_g1_ParamLimits

0xdb34,	// (0x00015edd) list_single_heading_pane_fp_g1

0x943d,	// (0x000117e6) list_single_heading_pane_fp_g2_ParamLimits

0x943d,	// (0x000117e6) list_single_heading_pane_fp_g2

0xdb40,	// (0x00015ee9) list_single_heading_pane_fp_g3_ParamLimits

0xdb40,	// (0x00015ee9) list_single_heading_pane_fp_g3

0x0002,

0xfb99,	// (0x00017f42) list_single_heading_pane_fp_g_ParamLimits

0xfb99,	// (0x00017f42) list_single_heading_pane_fp_g

0xdce9,	// (0x00016092) list_single_heading_pane_fp_t1_ParamLimits

0xdce9,	// (0x00016092) list_single_heading_pane_fp_t1

0xdcfb,	// (0x000160a4) list_single_heading_pane_fp_t2_ParamLimits

0xdcfb,	// (0x000160a4) list_single_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x00017f49) list_single_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x00017f49) list_single_heading_pane_fp_t

0x9af9,	// (0x00011ea2) aid_size_cell_fast

0x8ca3,	// (0x0001104c) soft_indicator_pane_cp1_t1

0x9b36,	// (0x00011edf) cell_app_pane_cp2_ParamLimits

0x9b36,	// (0x00011edf) cell_app_pane_cp2

0x79ae,	// (0x0000fd57) fep_hwr_candidate_drop_down_list_pane

0x7b78,	// (0x0000ff21) fep_hwr_candidate_pane_g3_ParamLimits

0x7b78,	// (0x0000ff21) fep_hwr_candidate_pane_g3

0x5a91,	// (0x0000de3a) fep_hwr_candidate_pane_g4_ParamLimits

0x5a91,	// (0x0000de3a) fep_hwr_candidate_pane_g4

0x0002,

0xfb0f,	// (0x00017eb8) fep_hwr_candidate_pane_g_ParamLimits

0xfb0f,	// (0x00017eb8) fep_hwr_candidate_pane_g

0xd62a,	// (0x000159d3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xd62a,	// (0x000159d3) fep_vkb_candidate_drop_down_list_pane

0xd9f9,	// (0x00015da2) fep_vkb_candidate_pane_g3

0xda01,	// (0x00015daa) fep_vkb_candidate_pane_g4

0x0002,

0xfb3c,	// (0x00017ee5) fep_vkb_candidate_pane_g

0x7bdf,	// (0x0000ff88) cell_hwr_candidate_pane_g1_ParamLimits

0x7bed,	// (0x0000ff96) cell_hwr_candidate_pane_g3_ParamLimits

0x7bed,	// (0x0000ff96) cell_hwr_candidate_pane_g3

0x09d1,	// (0x00008d7a) cell_hwr_candidate_pane_g4_ParamLimits

0x09d1,	// (0x00008d7a) cell_hwr_candidate_pane_g4

0x0002,

0xfb5b,	// (0x00017f04) cell_hwr_candidate_pane_g_ParamLimits

0xfb5b,	// (0x00017f04) cell_hwr_candidate_pane_g

0xda18,	// (0x00015dc1) cell_vkb_candidate_pane_g3_ParamLimits

0xda18,	// (0x00015dc1) cell_vkb_candidate_pane_g3

0xda33,	// (0x00015ddc) cell_vkb_candidate_pane_g4_ParamLimits

0xda33,	// (0x00015ddc) cell_vkb_candidate_pane_g4

0xdd11,	// (0x000160ba) cell_app_pane_cp2_g1_ParamLimits

0xdd11,	// (0x000160ba) cell_app_pane_cp2_g1

0xdd2f,	// (0x000160d8) cell_app_pane_cp2_g2_ParamLimits

0xdd2f,	// (0x000160d8) cell_app_pane_cp2_g2

0x0001,

0xfba5,	// (0x00017f4e) cell_app_pane_cp2_g_ParamLimits

0xfba5,	// (0x00017f4e) cell_app_pane_cp2_g

0xdd3b,	// (0x000160e4) cell_app_pane_cp2_t1_ParamLimits

0xdd3b,	// (0x000160e4) cell_app_pane_cp2_t1

0x97a5,	// (0x00011b4e) grid_highlight_pane_cp1_ParamLimits

0x97a5,	// (0x00011b4e) grid_highlight_pane_cp1

0x7c2b,	// (0x0000ffd4) cell_hwr_candidate_pane_cp1_ParamLimits

0x7c2b,	// (0x0000ffd4) cell_hwr_candidate_pane_cp1

0x7bdf,	// (0x0000ff88) fep_hwr_candidate_drop_down_list_pane_g1

0x7c49,	// (0x0000fff2) fep_hwr_candidate_drop_down_list_pane_g2

0x7c56,	// (0x0000ffff) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x00017f53) fep_hwr_candidate_drop_down_list_pane_g

0x7c63,	// (0x0001000c) fep_hwr_candidate_drop_down_list_scroll_pane

0x7c6c,	// (0x00010015) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c6c,	// (0x00010015) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7c79,	// (0x00010022) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c79,	// (0x00010022) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7c86,	// (0x0001002f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c86,	// (0x0001002f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c93,	// (0x0001003c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c93,	// (0x0001003c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7cae,	// (0x00010057) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7cae,	// (0x00010057) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7cc9,	// (0x00010072) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7cc9,	// (0x00010072) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7ce4,	// (0x0001008d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7ce4,	// (0x0001008d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7cff,	// (0x000100a8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cff,	// (0x000100a8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x00017f5a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x00017f5a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xdd67,	// (0x00016110) cell_vkb_candidate_pane_cp1_ParamLimits

0xdd67,	// (0x00016110) cell_vkb_candidate_pane_cp1

0xd711,	// (0x00015aba) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xd711,	// (0x00015aba) fep_vkb_candidate_drop_down_list_pane_g1

0xdd4d,	// (0x000160f6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xdd4d,	// (0x000160f6) fep_vkb_candidate_drop_down_list_pane_g2

0xdd5a,	// (0x00016103) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xdd5a,	// (0x00016103) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00017f6b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x00017f6b) fep_vkb_candidate_drop_down_list_pane_g

0xdd8a,	// (0x00016133) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xdd8a,	// (0x00016133) fep_vkb_candidate_drop_down_list_scroll_pane

0xdd97,	// (0x00016140) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xdd97,	// (0x00016140) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xdda4,	// (0x0001614d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xdda4,	// (0x0001614d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xddb0,	// (0x00016159) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xddb0,	// (0x00016159) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xdaba,	// (0x00015e63) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xdaba,	// (0x00015e63) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xdadb,	// (0x00015e84) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xdadb,	// (0x00015e84) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xddbc,	// (0x00016165) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xddbc,	// (0x00016165) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xdddd,	// (0x00016186) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xdddd,	// (0x00016186) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xddfe,	// (0x000161a7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xddfe,	// (0x000161a7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00017f72) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00017f72) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x89bf,	// (0x00010d68) title_pane_g1_ParamLimits

0x89cc,	// (0x00010d75) title_pane_g2_ParamLimits

0xf54e,	// (0x000178f7) title_pane_g_ParamLimits

0x9f50,	// (0x000122f9) aid_call2_pane

0x9f58,	// (0x00012301) aid_call_pane

0x9f60,	// (0x00012309) popup_clock_analogue_window_g1

0x9f60,	// (0x00012309) popup_clock_analogue_window_g2

0x6bc1,	// (0x0000ef6a) popup_clock_analogue_window_g3

0x6bca,	// (0x0000ef73) popup_clock_analogue_window_g4

0x88ce,	// (0x00010c77) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00017a9c) popup_clock_analogue_window_g

0x6bd2,	// (0x0000ef7b) popup_clock_analogue_window_t1

0x6be0,	// (0x0000ef89) clock_digital_number_pane_ParamLimits

0x6be0,	// (0x0000ef89) clock_digital_number_pane

0x6bec,	// (0x0000ef95) clock_digital_number_pane_cp02_ParamLimits

0x6bec,	// (0x0000ef95) clock_digital_number_pane_cp02

0x6bf8,	// (0x0000efa1) clock_digital_number_pane_cp03_ParamLimits

0x6bf8,	// (0x0000efa1) clock_digital_number_pane_cp03

0x6c04,	// (0x0000efad) clock_digital_number_pane_cp04_ParamLimits

0x6c04,	// (0x0000efad) clock_digital_number_pane_cp04

0x6c10,	// (0x0000efb9) clock_digital_separator_pane_ParamLimits

0x6c10,	// (0x0000efb9) clock_digital_separator_pane

0x6c1c,	// (0x0000efc5) popup_clock_digital_window_t1_ParamLimits

0x6c1c,	// (0x0000efc5) popup_clock_digital_window_t1

0x88ce,	// (0x00010c77) clock_digital_number_pane_g1

0x88ce,	// (0x00010c77) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00017aa7) clock_digital_number_pane_g

0x88ce,	// (0x00010c77) clock_digital_separator_pane_g1

0x88ce,	// (0x00010c77) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00017aa7) clock_digital_separator_pane_g

0xa8de,	// (0x00012c87) aid_fill_nsta_ParamLimits

0xaa00,	// (0x00012da9) indicator_nsta_pane_ParamLimits

0xab73,	// (0x00012f1c) popup_clock_analogue_window

0xab73,	// (0x00012f1c) popup_clock_digital_window

0x8a95,	// (0x00010e3e) grid_indicator_nsta_pane_ParamLimits

0xcf61,	// (0x0001530a) clock_nsta_pane_t2

0x0001,

0xfa8f,	// (0x00017e38) clock_nsta_pane_t

0x6b85,	// (0x0000ef2e) aid_size_max_handle

0x6b8f,	// (0x0000ef38) aid_size_min_handle

0xa565,	// (0x0001290e) editor_scroll_pane

0xde19,	// (0x000161c2) ex_editor_pane

0x9a69,	// (0x00011e12) scroll_pane_cp13

0x9228,	// (0x000115d1) scroll_pane_cp14

0x9f8f,	// (0x00012338) scroll_pane_cp36

0x9fa7,	// (0x00012350) list_single_graphic_hl_pane_cp2_ParamLimits

0x9fa7,	// (0x00012350) list_single_graphic_hl_pane_cp2

0xc383,	// (0x0001472c) list_single_graphic_hl_pane_ParamLimits

0xc383,	// (0x0001472c) list_single_graphic_hl_pane

0xde21,	// (0x000161ca) aid_size_min_hl_cp1

0xde2a,	// (0x000161d3) list_highlight_pane_cp34_ParamLimits

0xde2a,	// (0x000161d3) list_highlight_pane_cp34

0xde3b,	// (0x000161e4) list_single_graphic_hl_pane_g1_ParamLimits

0xde3b,	// (0x000161e4) list_single_graphic_hl_pane_g1

0xde48,	// (0x000161f1) list_single_graphic_hl_pane_g2_ParamLimits

0xde48,	// (0x000161f1) list_single_graphic_hl_pane_g2

0xde48,	// (0x000161f1) list_single_graphic_hl_pane_g3_ParamLimits

0xde48,	// (0x000161f1) list_single_graphic_hl_pane_g3

0xa3da,	// (0x00012783) list_single_graphic_hl_pane_g4_ParamLimits

0xa3da,	// (0x00012783) list_single_graphic_hl_pane_g4

0xda5c,	// (0x00015e05) list_single_graphic_hl_pane_g5_ParamLimits

0xda5c,	// (0x00015e05) list_single_graphic_hl_pane_g5

0x0004,

0xfbda,	// (0x00017f83) list_single_graphic_hl_pane_g_ParamLimits

0xfbda,	// (0x00017f83) list_single_graphic_hl_pane_g

0xde54,	// (0x000161fd) list_single_graphic_hl_pane_t1_ParamLimits

0xde54,	// (0x000161fd) list_single_graphic_hl_pane_t1

0xde6a,	// (0x00016213) aid_size_min_hl_cp2

0xde73,	// (0x0001621c) list_highlight_pane_cp34_cp2_ParamLimits

0xde73,	// (0x0001621c) list_highlight_pane_cp34_cp2

0xde3b,	// (0x000161e4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xde3b,	// (0x000161e4) list_single_graphic_hl_pane_g1_cp2

0xde80,	// (0x00016229) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xde80,	// (0x00016229) list_single_graphic_hl_pane_g2_cp2

0xde8c,	// (0x00016235) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xde8c,	// (0x00016235) list_single_graphic_hl_pane_g3_cp2

0xa3da,	// (0x00012783) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa3da,	// (0x00012783) list_single_graphic_hl_pane_g4_cp2

0xda5c,	// (0x00015e05) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xda5c,	// (0x00015e05) list_single_graphic_hl_pane_g5_cp2

0x6ea7,	// (0x0000f250) control_pane_g4_ParamLimits

0x6ea7,	// (0x0000f250) control_pane_g4

0xa8b4,	// (0x00012c5d) bg_popup_sub_pane_cp10_ParamLimits

0xd4e3,	// (0x0001588c) list_choice_list_pane_ParamLimits

0xd4f2,	// (0x0001589b) scroll_pane_cp23

0x8d3c,	// (0x000110e5) bg_popup_preview_window_pane_cp02_ParamLimits

0xda98,	// (0x00015e41) list_preview_fixed_pane_ParamLimits

0xdaae,	// (0x00015e57) list_preview_fixed_pane_cp_ParamLimits

0xdaae,	// (0x00015e57) list_preview_fixed_pane_cp

0xdafc,	// (0x00015ea5) popup_preview_fixed_window_g1_ParamLimits

0xdafc,	// (0x00015ea5) popup_preview_fixed_window_g1

0xdb08,	// (0x00015eb1) popup_preview_fixed_window_g2_ParamLimits

0xdb08,	// (0x00015eb1) popup_preview_fixed_window_g2

0x0002,

0xfb62,	// (0x00017f0b) popup_preview_fixed_window_g_ParamLimits

0xfb62,	// (0x00017f0b) popup_preview_fixed_window_g

0x6b15,	// (0x0000eebe) aid_navi_side_left_pane_ParamLimits

0x6b25,	// (0x0000eece) aid_navi_side_right_pane_ParamLimits

0x6b34,	// (0x0000eedd) navi_icon_pane_stacon_ParamLimits

0x6b44,	// (0x0000eeed) navi_navi_pane_stacon_ParamLimits

0x6b34,	// (0x0000eedd) navi_text_pane_stacon_ParamLimits

0x67c8,	// (0x0000eb71) main_text_info_pane

0xdeae,	// (0x00016257) listscroll_text_info_pane

0xdeb6,	// (0x0001625f) list_text_info_pane_ParamLimits

0xdeb6,	// (0x0001625f) list_text_info_pane

0xdec5,	// (0x0001626e) scroll_pane_cp24_ParamLimits

0xdec5,	// (0x0001626e) scroll_pane_cp24

0xdee3,	// (0x0001628c) list_text_info_pane_t1_ParamLimits

0xdee3,	// (0x0001628c) list_text_info_pane_t1

0x700d,	// (0x0000f3b6) popup_fast_swap2_window_ParamLimits

0x700d,	// (0x0000f3b6) popup_fast_swap2_window

0xdf00,	// (0x000162a9) aid_size_cell_fast2

0x88c4,	// (0x00010c6d) bg_popup_window_pane_cp17

0xb24d,	// (0x000135f6) heading_pane_cp2

0x8faa,	// (0x00011353) listscroll_fast2_pane

0xdf0a,	// (0x000162b3) grid_fast2_pane

0xdf12,	// (0x000162bb) listscroll_fast2_pane_g1

0xdf1a,	// (0x000162c3) listscroll_fast2_pane_g2

0x0001,

0xfbe5,	// (0x00017f8e) listscroll_fast2_pane_g

0x9a69,	// (0x00011e12) scroll_pane_cp26

0xdf22,	// (0x000162cb) cell_fast2_pane_ParamLimits

0xdf22,	// (0x000162cb) cell_fast2_pane

0xdf38,	// (0x000162e1) cell_fast2_pane_g1

0xdf41,	// (0x000162ea) cell_fast2_pane_g2

0xdf4a,	// (0x000162f3) cell_fast2_pane_g3

0x0002,

0xfbea,	// (0x00017f93) cell_fast2_pane_g

0x9081,	// (0x0001142a) grid_highlight_pane_cp9

0x6fd9,	// (0x0000f382) main_eswt_pane_ParamLimits

0x6fd9,	// (0x0000f382) main_eswt_pane

0xdeda,	// (0x00016283) list_single_text_info_pane

0xdf52,	// (0x000162fb) eswt_ctrl_button_pane

0xdf52,	// (0x000162fb) eswt_ctrl_canvas_pane

0xdf5a,	// (0x00016303) eswt_ctrl_combo_pane

0xdf52,	// (0x000162fb) eswt_ctrl_default_pane

0xdf52,	// (0x000162fb) eswt_ctrl_label_pane

0xdf62,	// (0x0001630b) eswt_ctrl_wait_pane

0xdf6a,	// (0x00016313) eswt_shell_pane

0x88c4,	// (0x00010c6d) listscroll_eswt_app_pane

0xdf86,	// (0x0001632f) popup_eswt_tasktip_window_ParamLimits

0xdf86,	// (0x0001632f) popup_eswt_tasktip_window

0xae93,	// (0x0001323c) bg_popup_window_pane_cp18

0xdf97,	// (0x00016340) eswt_control_pane_g1_ParamLimits

0xdf97,	// (0x00016340) eswt_control_pane_g1

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_ParamLimits

0xdfa4,	// (0x0001634d) eswt_control_pane_g2

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_ParamLimits

0xdfb1,	// (0x0001635a) eswt_control_pane_g3

0xdfbe,	// (0x00016367) eswt_control_pane_g4_ParamLimits

0xdfbe,	// (0x00016367) eswt_control_pane_g4

0x0003,

0xfbf1,	// (0x00017f9a) eswt_control_pane_g_ParamLimits

0xfbf1,	// (0x00017f9a) eswt_control_pane_g

0x97a5,	// (0x00011b4e) bg_button_pane_ParamLimits

0x97a5,	// (0x00011b4e) bg_button_pane

0x9096,	// (0x0001143f) common_borders_pane_copy2_ParamLimits

0x9096,	// (0x0001143f) common_borders_pane_copy2

0xdfcb,	// (0x00016374) control_button_pane_g1_ParamLimits

0xdfcb,	// (0x00016374) control_button_pane_g1

0xdfd7,	// (0x00016380) control_button_pane_g2_ParamLimits

0xdfd7,	// (0x00016380) control_button_pane_g2

0xdfe3,	// (0x0001638c) control_button_pane_g3_ParamLimits

0xdfe3,	// (0x0001638c) control_button_pane_g3

0x0002,

0xfbfa,	// (0x00017fa3) control_button_pane_g_ParamLimits

0xfbfa,	// (0x00017fa3) control_button_pane_g

0xdff7,	// (0x000163a0) control_button_pane_t1

0xe005,	// (0x000163ae) control_button_pane_t2

0x0001,

0xfc01,	// (0x00017faa) control_button_pane_t

0xad7d,	// (0x00013126) bg_button_pane_g1

0xad8d,	// (0x00013136) bg_button_pane_g2

0xad85,	// (0x0001312e) bg_button_pane_g3

0xad9d,	// (0x00013146) bg_button_pane_g4

0xad95,	// (0x0001313e) bg_button_pane_g5

0xada5,	// (0x0001314e) bg_button_pane_g6

0xadad,	// (0x00013156) bg_button_pane_g7

0xadbd,	// (0x00013166) bg_button_pane_g8

0xadb5,	// (0x0001315e) bg_button_pane_g9

0x0008,

0xf855,	// (0x00017bfe) bg_button_pane_g

0xd49e,	// (0x00015847) common_borders_pane_ParamLimits

0xd49e,	// (0x00015847) common_borders_pane

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy1_ParamLimits

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy1

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy1_ParamLimits

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy1

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy1_ParamLimits

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy1

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy1_ParamLimits

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy1

0xd4d9,	// (0x00015882) bg_eswt_ctrl_canvas_pane_g1

0xd49e,	// (0x00015847) common_borders_pane_cp2_ParamLimits

0xd49e,	// (0x00015847) common_borders_pane_cp2

0xd49e,	// (0x00015847) common_borders_pane_cp3_ParamLimits

0xd49e,	// (0x00015847) common_borders_pane_cp3

0xe013,	// (0x000163bc) separator_horizontal_pane

0x9d9d,	// (0x00012146) separator_vertical_pane

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy2_ParamLimits

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy2

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy2_ParamLimits

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy2

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy2_ParamLimits

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy2

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy2_ParamLimits

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy2

0x88c4,	// (0x00010c6d) common_borders_pane_cp4

0xe01b,	// (0x000163c4) separator_horizontal_pane_g1

0xe024,	// (0x000163cd) separator_horizontal_pane_g2

0xe02d,	// (0x000163d6) separator_horizontal_pane_g3

0x0002,

0xfc06,	// (0x00017faf) separator_horizontal_pane_g

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy3_ParamLimits

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy3

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy3_ParamLimits

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy3

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy3_ParamLimits

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy3

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy3_ParamLimits

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy3

0x88c4,	// (0x00010c6d) common_borders_pane_cp5

0xe036,	// (0x000163df) separator_vertical_pane_g1

0xe03f,	// (0x000163e8) separator_vertical_pane_g2

0xe048,	// (0x000163f1) separator_vertical_pane_g3

0x0002,

0xfc0d,	// (0x00017fb6) separator_vertical_pane_g

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy4_ParamLimits

0xdf97,	// (0x00016340) eswt_control_pane_g1_copy4

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy4_ParamLimits

0xdfa4,	// (0x0001634d) eswt_control_pane_g2_copy4

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy4_ParamLimits

0xdfb1,	// (0x0001635a) eswt_control_pane_g3_copy4

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy4_ParamLimits

0xdfbe,	// (0x00016367) eswt_control_pane_g4_copy4

0xe051,	// (0x000163fa) eswt_ctrl_combo_button_pane

0xe059,	// (0x00016402) eswt_ctrl_input_pane

0xe061,	// (0x0001640a) popup_choice_list_window_cp70

0xe069,	// (0x00016412) eswt_ctrl_input_pane_t1

0x88c4,	// (0x00010c6d) input_focus_pane_cp70

0xd49e,	// (0x00015847) bg_button_pane_cp70_ParamLimits

0xd49e,	// (0x00015847) bg_button_pane_cp70

0xe077,	// (0x00016420) eswt_ctrl_combo_button_pane_g1

0xe07f,	// (0x00016428) wait_bar_pane_cp70

0xae93,	// (0x0001323c) bg_popup_window_pane_cp70_ParamLimits

0xae93,	// (0x0001323c) bg_popup_window_pane_cp70

0xe087,	// (0x00016430) popup_eswt_tasktip_window_t1

0xe09d,	// (0x00016446) wait_bar_pane_cp71_ParamLimits

0xe09d,	// (0x00016446) wait_bar_pane_cp71

0xe0a9,	// (0x00016452) grid_eswt_app_pane

0x9d94,	// (0x0001213d) scroll_pane_cp70

0xe0b2,	// (0x0001645b) cell_eswt_app_pane_ParamLimits

0xe0b2,	// (0x0001645b) cell_eswt_app_pane

0xe0da,	// (0x00016483) cell_eswt_app_pane_g1_ParamLimits

0xe0da,	// (0x00016483) cell_eswt_app_pane_g1

0xe109,	// (0x000164b2) cell_eswt_app_pane_g2_ParamLimits

0xe109,	// (0x000164b2) cell_eswt_app_pane_g2

0x0001,

0xfc14,	// (0x00017fbd) cell_eswt_app_pane_g_ParamLimits

0xfc14,	// (0x00017fbd) cell_eswt_app_pane_g

0xe132,	// (0x000164db) cell_eswt_app_pane_t1_ParamLimits

0xe132,	// (0x000164db) cell_eswt_app_pane_t1

0xe164,	// (0x0001650d) grid_highlight_pane_cp70_ParamLimits

0xe164,	// (0x0001650d) grid_highlight_pane_cp70

0x923c,	// (0x000115e5) set_content_pane_g1

0xa800,	// (0x00012ba9) status_small_volume_pane

0x7d1a,	// (0x000100c3) status_small_volume_pane_g1

0x7d22,	// (0x000100cb) volume_small2_pane

0x7d2b,	// (0x000100d4) volume_small2_pane_g1

0x7d34,	// (0x000100dd) volume_small2_pane_g2

0x7d3d,	// (0x000100e6) volume_small2_pane_g3

0x7d46,	// (0x000100ef) volume_small2_pane_g4

0x7d4f,	// (0x000100f8) volume_small2_pane_g5

0x7d58,	// (0x00010101) volume_small2_pane_g6

0x7d61,	// (0x0001010a) volume_small2_pane_g7

0x7d6a,	// (0x00010113) volume_small2_pane_g8

0x7d73,	// (0x0001011c) volume_small2_pane_g9

0x7d7c,	// (0x00010125) volume_small2_pane_g10

0x0009,

0xfc19,	// (0x00017fc2) volume_small2_pane_g

0xd853,	// (0x00015bfc) fep_vkb_top_text_pane_g1_ParamLimits

0xd86e,	// (0x00015c17) fep_vkb_top_text_pane_t1_ParamLimits

0xdb14,	// (0x00015ebd) popup_preview_fixed_window_g3_ParamLimits

0xdb14,	// (0x00015ebd) popup_preview_fixed_window_g3

0x73cf,	// (0x0000f778) popup_toolbar_trans_pane

0xc12b,	// (0x000144d4) aid_height_set_list_ParamLimits

0xc137,	// (0x000144e0) aid_size_parent_ParamLimits

0xa8b4,	// (0x00012c5d) list_highlight_pane_cp2_ParamLimits

0x923c,	// (0x000115e5) set_content_pane_g1_ParamLimits

0xc398,	// (0x00014741) list_single_image_pane_ParamLimits

0xc398,	// (0x00014741) list_single_image_pane

0xe170,	// (0x00016519) aid_size_cell_image_ParamLimits

0xe170,	// (0x00016519) aid_size_cell_image

0xe17d,	// (0x00016526) grid_single_image_pane_ParamLimits

0xe17d,	// (0x00016526) grid_single_image_pane

0x923c,	// (0x000115e5) list_single_image_pane_g1_ParamLimits

0x923c,	// (0x000115e5) list_single_image_pane_g1

0x97cb,	// (0x00011b74) list_single_image_pane_g2_ParamLimits

0x97cb,	// (0x00011b74) list_single_image_pane_g2

0x0001,

0xfc2e,	// (0x00017fd7) list_single_image_pane_g_ParamLimits

0xfc2e,	// (0x00017fd7) list_single_image_pane_g

0xc2ba,	// (0x00014663) list_single_image_pane_t1_ParamLimits

0xc2ba,	// (0x00014663) list_single_image_pane_t1

0xe189,	// (0x00016532) cell_image_list_pane_ParamLimits

0xe189,	// (0x00016532) cell_image_list_pane

0xe19c,	// (0x00016545) cell_image_list_pane_g1

0xe1a5,	// (0x0001654e) cell_image_list_pane_g2

0x0001,

0xfc33,	// (0x00017fdc) cell_image_list_pane_g

0xe1ae,	// (0x00016557) aid_size_cell_tb_trans_pane

0x97a5,	// (0x00011b4e) bg_tb_trans_pane

0xe1c0,	// (0x00016569) grid_tb_trans_pane

0xad7d,	// (0x00013126) bg_tb_trans_pane_g1

0xad8d,	// (0x00013136) bg_tb_trans_pane_g2

0xad85,	// (0x0001312e) bg_tb_trans_pane_g3

0xad9d,	// (0x00013146) bg_tb_trans_pane_g4

0xad95,	// (0x0001313e) bg_tb_trans_pane_g5

0xadbd,	// (0x00013166) bg_tb_trans_pane_g6

0xadb5,	// (0x0001315e) bg_tb_trans_pane_g7

0xada5,	// (0x0001314e) bg_tb_trans_pane_g8

0xadad,	// (0x00013156) bg_tb_trans_pane_g9

0x0008,

0xfc38,	// (0x00017fe1) bg_tb_trans_pane_g

0xe1d4,	// (0x0001657d) cell_toolbar_trans_pane_ParamLimits

0xe1d4,	// (0x0001657d) cell_toolbar_trans_pane

0xd4d9,	// (0x00015882) cell_toolbar_trans_pane_g1

0xd122,	// (0x000154cb) list_form2_midp_pane_t1

0xd130,	// (0x000154d9) list_form2_midp_pane_t2

0x0001,

0xfad5,	// (0x00017e7e) list_form2_midp_pane_t

0xd13e,	// (0x000154e7) scroll_pane_cp51_ParamLimits

0xd323,	// (0x000156cc) form2_midp_wait_pane_g1

0xd32c,	// (0x000156d5) form2_midp_wait_pane_g2

0xd335,	// (0x000156de) form2_midp_wait_pane_g3

0x0002,

0xfaea,	// (0x00017e93) form2_midp_wait_pane_g

0x8a95,	// (0x00010e3e) list_highlight_pane_cp21_ParamLimits

0xd373,	// (0x0001571c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xd382,	// (0x0001572b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc341,	// (0x000146ea) list_single_2graphic_im_pane_ParamLimits

0xc341,	// (0x000146ea) list_single_2graphic_im_pane

0xe1fa,	// (0x000165a3) list_single_2graphic_im_pane_g1_ParamLimits

0xe1fa,	// (0x000165a3) list_single_2graphic_im_pane_g1

0xe20b,	// (0x000165b4) list_single_2graphic_im_pane_g2_ParamLimits

0xe20b,	// (0x000165b4) list_single_2graphic_im_pane_g2

0xe217,	// (0x000165c0) list_single_2graphic_im_pane_g3_ParamLimits

0xe217,	// (0x000165c0) list_single_2graphic_im_pane_g3

0x0003,

0xfc4b,	// (0x00017ff4) list_single_2graphic_im_pane_g_ParamLimits

0xfc4b,	// (0x00017ff4) list_single_2graphic_im_pane_g

0xe237,	// (0x000165e0) list_single_2graphic_im_pane_t1_ParamLimits

0xe237,	// (0x000165e0) list_single_2graphic_im_pane_t1

0xdb20,	// (0x00015ec9) list_single_graphic_2heading_pane_fp_ParamLimits

0xdb20,	// (0x00015ec9) list_single_graphic_2heading_pane_fp

0xdb77,	// (0x00015f20) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xdb77,	// (0x00015f20) list_single_graphic_2heading_pane_fp_g1

0xdb34,	// (0x00015edd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xdb34,	// (0x00015edd) list_single_graphic_2heading_pane_fp_g2

0x943d,	// (0x000117e6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x943d,	// (0x000117e6) list_single_graphic_2heading_pane_fp_g3

0xdb40,	// (0x00015ee9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xdb40,	// (0x00015ee9) list_single_graphic_2heading_pane_fp_g4

0xdb54,	// (0x00015efd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xdb54,	// (0x00015efd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb72,	// (0x00017f1b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb72,	// (0x00017f1b) list_single_graphic_2heading_pane_fp_g

0xe268,	// (0x00016611) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe268,	// (0x00016611) list_single_graphic_2heading_pane_fp_t1

0xdbaf,	// (0x00015f58) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xdbaf,	// (0x00015f58) list_single_graphic_2heading_pane_fp_t2

0xe27e,	// (0x00016627) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe27e,	// (0x00016627) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc54,	// (0x00017ffd) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc54,	// (0x00017ffd) list_single_graphic_2heading_pane_fp_t

0xd562,	// (0x0001590b) fep_hwr_write_pane_g5_ParamLimits

0xd562,	// (0x0001590b) fep_hwr_write_pane_g5

0xd56e,	// (0x00015917) fep_hwr_write_pane_g6_ParamLimits

0xd56e,	// (0x00015917) fep_hwr_write_pane_g6

0xdf6a,	// (0x00016313) eswt_shell_pane_ParamLimits

0xae93,	// (0x0001323c) bg_popup_window_pane_cp18_ParamLimits

0xc09d,	// (0x00014446) heading_pane_cp70

0xe087,	// (0x00016430) popup_eswt_tasktip_window_t1_ParamLimits

0xa920,	// (0x00012cc9) aid_touch_tab_arrow_left

0xa92c,	// (0x00012cd5) aid_touch_tab_arrow_right

0x89dd,	// (0x00010d86) title_pane_g3_ParamLimits

0x89dd,	// (0x00010d86) title_pane_g3

0x96a3,	// (0x00011a4c) set_value_pane_g1

0x73cf,	// (0x0000f778) popup_toolbar_trans_pane_ParamLimits

0xe1ae,	// (0x00016557) aid_size_cell_tb_trans_pane_ParamLimits

0x97a5,	// (0x00011b4e) bg_tb_trans_pane_ParamLimits

0xe1c0,	// (0x00016569) grid_tb_trans_pane_ParamLimits

0x8d3c,	// (0x000110e5) cont_note_pane_ParamLimits

0x8d3c,	// (0x000110e5) cont_note_pane

0x9096,	// (0x0001143f) cont_snote2_single_text_pane_ParamLimits

0x9096,	// (0x0001143f) cont_snote2_single_text_pane

0x9096,	// (0x0001143f) cont_snote2_single_graphic_pane_ParamLimits

0x9096,	// (0x0001143f) cont_snote2_single_graphic_pane

0xb463,	// (0x0001380c) cont_note_wait_pane_ParamLimits

0xb463,	// (0x0001380c) cont_note_wait_pane

0xb463,	// (0x0001380c) cont_note_image_pane_ParamLimits

0xb463,	// (0x0001380c) cont_note_image_pane

0xe294,	// (0x0001663d) popup_note2_window_g1_ParamLimits

0xe294,	// (0x0001663d) popup_note2_window_g1

0xe2c5,	// (0x0001666e) popup_note2_window_t1_ParamLimits

0xe2c5,	// (0x0001666e) popup_note2_window_t1

0xe30a,	// (0x000166b3) popup_note2_window_t2_ParamLimits

0xe30a,	// (0x000166b3) popup_note2_window_t2

0xe34f,	// (0x000166f8) popup_note2_window_t3_ParamLimits

0xe34f,	// (0x000166f8) popup_note2_window_t3

0xe394,	// (0x0001673d) popup_note2_window_t4_ParamLimits

0xe394,	// (0x0001673d) popup_note2_window_t4

0x8dc0,	// (0x00011169) popup_note2_window_t5_ParamLimits

0x8dc0,	// (0x00011169) popup_note2_window_t5

0x0004,

0xfc60,	// (0x00018009) popup_note2_window_t_ParamLimits

0xfc60,	// (0x00018009) popup_note2_window_t

0xe3c3,	// (0x0001676c) popup_note2_image_window_g1_ParamLimits

0xe3c3,	// (0x0001676c) popup_note2_image_window_g1

0xe3cf,	// (0x00016778) popup_note2_image_window_g2_ParamLimits

0xe3cf,	// (0x00016778) popup_note2_image_window_g2

0x0001,

0xfc6b,	// (0x00018014) popup_note2_image_window_g_ParamLimits

0xfc6b,	// (0x00018014) popup_note2_image_window_g

0xe3e1,	// (0x0001678a) popup_note2_image_window_t1_ParamLimits

0xe3e1,	// (0x0001678a) popup_note2_image_window_t1

0xe3f9,	// (0x000167a2) popup_note2_image_window_t2_ParamLimits

0xe3f9,	// (0x000167a2) popup_note2_image_window_t2

0xe411,	// (0x000167ba) popup_note2_image_window_t3_ParamLimits

0xe411,	// (0x000167ba) popup_note2_image_window_t3

0x0002,

0xfc70,	// (0x00018019) popup_note2_image_window_t_ParamLimits

0xfc70,	// (0x00018019) popup_note2_image_window_t

0xb471,	// (0x0001381a) popup_note2_wait_window_g1_ParamLimits

0xb471,	// (0x0001381a) popup_note2_wait_window_g1

0xb47d,	// (0x00013826) popup_note2_wait_window_g2_ParamLimits

0xb47d,	// (0x00013826) popup_note2_wait_window_g2

0xb489,	// (0x00013832) popup_note2_wait_window_g3_ParamLimits

0xb489,	// (0x00013832) popup_note2_wait_window_g3

0x0002,

0xf837,	// (0x00017be0) popup_note2_wait_window_g_ParamLimits

0xf837,	// (0x00017be0) popup_note2_wait_window_g

0xe42d,	// (0x000167d6) popup_note2_wait_window_t1_ParamLimits

0xe42d,	// (0x000167d6) popup_note2_wait_window_t1

0xe44b,	// (0x000167f4) popup_note2_wait_window_t2_ParamLimits

0xe44b,	// (0x000167f4) popup_note2_wait_window_t2

0xe469,	// (0x00016812) popup_note2_wait_window_t3_ParamLimits

0xe469,	// (0x00016812) popup_note2_wait_window_t3

0xe47b,	// (0x00016824) popup_note2_wait_window_t4_ParamLimits

0xe47b,	// (0x00016824) popup_note2_wait_window_t4

0x0003,

0xfc77,	// (0x00018020) popup_note2_wait_window_t_ParamLimits

0xfc77,	// (0x00018020) popup_note2_wait_window_t

0xe48d,	// (0x00016836) wait_bar2_pane_ParamLimits

0xe48d,	// (0x00016836) wait_bar2_pane

0xe4a5,	// (0x0001684e) popup_snote2_single_text_window_g1_ParamLimits

0xe4a5,	// (0x0001684e) popup_snote2_single_text_window_g1

0xe4cd,	// (0x00016876) popup_snote2_single_text_window_t1_ParamLimits

0xe4cd,	// (0x00016876) popup_snote2_single_text_window_t1

0xe519,	// (0x000168c2) popup_snote2_single_text_window_t2_ParamLimits

0xe519,	// (0x000168c2) popup_snote2_single_text_window_t2

0xe565,	// (0x0001690e) popup_snote2_single_text_window_t3_ParamLimits

0xe565,	// (0x0001690e) popup_snote2_single_text_window_t3

0xe5a6,	// (0x0001694f) popup_snote2_single_text_window_t4_ParamLimits

0xe5a6,	// (0x0001694f) popup_snote2_single_text_window_t4

0xe5dc,	// (0x00016985) popup_snote2_single_text_window_t5_ParamLimits

0xe5dc,	// (0x00016985) popup_snote2_single_text_window_t5

0x0004,

0xfc80,	// (0x00018029) popup_snote2_single_text_window_t_ParamLimits

0xfc80,	// (0x00018029) popup_snote2_single_text_window_t

0xe607,	// (0x000169b0) popup_snote2_single_graphic_window_g1_ParamLimits

0xe607,	// (0x000169b0) popup_snote2_single_graphic_window_g1

0xe62f,	// (0x000169d8) popup_snote2_single_graphic_window_g2_ParamLimits

0xe62f,	// (0x000169d8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8b,	// (0x00018034) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8b,	// (0x00018034) popup_snote2_single_graphic_window_g

0xe657,	// (0x00016a00) popup_snote2_single_graphic_window_t1_ParamLimits

0xe657,	// (0x00016a00) popup_snote2_single_graphic_window_t1

0xe6a3,	// (0x00016a4c) popup_snote2_single_graphic_window_t2_ParamLimits

0xe6a3,	// (0x00016a4c) popup_snote2_single_graphic_window_t2

0xe565,	// (0x0001690e) popup_snote2_single_graphic_window_t3_ParamLimits

0xe565,	// (0x0001690e) popup_snote2_single_graphic_window_t3

0xe5a6,	// (0x0001694f) popup_snote2_single_graphic_window_t4_ParamLimits

0xe5a6,	// (0x0001694f) popup_snote2_single_graphic_window_t4

0xe5dc,	// (0x00016985) popup_snote2_single_graphic_window_t5_ParamLimits

0xe5dc,	// (0x00016985) popup_snote2_single_graphic_window_t5

0x0004,

0xfc90,	// (0x00018039) popup_snote2_single_graphic_window_t_ParamLimits

0xfc90,	// (0x00018039) popup_snote2_single_graphic_window_t

0xd014,	// (0x000153bd) clock_nsta_pane_cp2_t1

0xd014,	// (0x000153bd) clock_nsta_pane_cp2_t2

0x0001,

0xfaab,	// (0x00017e54) clock_nsta_pane_cp2_t

0x97bf,	// (0x00011b68) form_field_data_wide_pane_g1_ParamLimits

0x923c,	// (0x000115e5) form_field_data_wide_pane_g2_ParamLimits

0x923c,	// (0x000115e5) form_field_data_wide_pane_g2

0x97cb,	// (0x00011b74) form_field_data_wide_pane_g3_ParamLimits

0x97cb,	// (0x00011b74) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00017a1f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00017a1f) form_field_data_wide_pane_g

0xcefe,	// (0x000152a7) grid_touch_3_pane_ParamLimits

0xcefe,	// (0x000152a7) grid_touch_3_pane

0xe6ef,	// (0x00016a98) cell_touch_3_pane_ParamLimits

0xe6ef,	// (0x00016a98) cell_touch_3_pane

0xd4d9,	// (0x00015882) cell_touch_3_pane_g1

0xd4d9,	// (0x00015882) cell_touch_3_pane_g2

0x0001,

0xfb30,	// (0x00017ed9) cell_touch_3_pane_g

0x8e18,	// (0x000111c1) cont_query_data_pane

0x8e20,	// (0x000111c9) cont_query_data_pane_cp1

0xe71c,	// (0x00016ac5) button_value_adjust_pane_cp7

0xe724,	// (0x00016acd) query_popup_pane_cp3

0xa038,	// (0x000123e1) bg_popup_sub_pane_cp22_ParamLimits

0x6c3b,	// (0x0000efe4) navi_navi_volume_pane_cp2

0x6c53,	// (0x0000effc) popup_side_volume_key_window_g2

0x6c5f,	// (0x0000f008) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00017ab5) popup_side_volume_key_window_g

0x6c79,	// (0x0000f022) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00017abc) popup_side_volume_key_window_t

0xa354,	// (0x000126fd) popup_side_volume_key_window_ParamLimits

0x93fd,	// (0x000117a6) list_double_graphic_pane_g4_ParamLimits

0x93fd,	// (0x000117a6) list_double_graphic_pane_g4

0xc36c,	// (0x00014715) list_single_2heading_msg_pane_ParamLimits

0xc36c,	// (0x00014715) list_single_2heading_msg_pane

0xe751,	// (0x00016afa) list_single_2heading_msg_pane_g1_ParamLimits

0xe751,	// (0x00016afa) list_single_2heading_msg_pane_g1

0xe75d,	// (0x00016b06) list_single_2heading_msg_pane_g2_ParamLimits

0xe75d,	// (0x00016b06) list_single_2heading_msg_pane_g2

0xe769,	// (0x00016b12) list_single_2heading_msg_pane_g3_ParamLimits

0xe769,	// (0x00016b12) list_single_2heading_msg_pane_g3

0xe775,	// (0x00016b1e) list_single_2heading_msg_pane_g4_ParamLimits

0xe775,	// (0x00016b1e) list_single_2heading_msg_pane_g4

0x0003,

0xfc9b,	// (0x00018044) list_single_2heading_msg_pane_g_ParamLimits

0xfc9b,	// (0x00018044) list_single_2heading_msg_pane_g

0xe78d,	// (0x00016b36) list_single_2heading_msg_pane_t1_ParamLimits

0xe78d,	// (0x00016b36) list_single_2heading_msg_pane_t1

0xe7b5,	// (0x00016b5e) list_single_2heading_msg_pane_t2_ParamLimits

0xe7b5,	// (0x00016b5e) list_single_2heading_msg_pane_t2

0xe7e4,	// (0x00016b8d) list_single_2heading_msg_pane_t3_ParamLimits

0xe7e4,	// (0x00016b8d) list_single_2heading_msg_pane_t3

0xe81d,	// (0x00016bc6) list_single_2heading_msg_pane_t4_ParamLimits

0xe81d,	// (0x00016bc6) list_single_2heading_msg_pane_t4

0x0003,

0xfca4,	// (0x0001804d) list_single_2heading_msg_pane_t_ParamLimits

0xfca4,	// (0x0001804d) list_single_2heading_msg_pane_t

0x89e9,	// (0x00010d92) title_pane_g4_ParamLimits

0x89e9,	// (0x00010d92) title_pane_g4

0x6a8b,	// (0x0000ee34) title_pane_stacon_g3_ParamLimits

0x6a8b,	// (0x0000ee34) title_pane_stacon_g3

0xe22b,	// (0x000165d4) list_single_2graphic_im_pane_g4_ParamLimits

0xe22b,	// (0x000165d4) list_single_2graphic_im_pane_g4

0xbe61,	// (0x0001420a) popup_side_volume_key_window_cp

0xc635,	// (0x000149de) main_idle_act2_pane_t1

0x7504,	// (0x0000f8ad) toolbar_button_pane_g10

0x91f3,	// (0x0001159c) popup_toolbar_window_cp1

0xd005,	// (0x000153ae) clock_nsta_pane_cp_t1

0xd005,	// (0x000153ae) clock_nsta_pane_cp_t2

0x0001,

0xfaa6,	// (0x00017e4f) clock_nsta_pane_cp_t

0x6c3b,	// (0x0000efe4) navi_navi_volume_pane_cp2_ParamLimits

0x6c47,	// (0x0000eff0) popup_side_volume_key_window_g1_ParamLimits

0x6c53,	// (0x0000effc) popup_side_volume_key_window_g2_ParamLimits

0x6c5f,	// (0x0000f008) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00017ab5) popup_side_volume_key_window_g_ParamLimits

0x799a,	// (0x0000fd43) fep_hwr_aid_pane

0x7a3b,	// (0x0000fde4) bg_fep_hwr_top_pane_g4_ParamLimits

0xd532,	// (0x000158db) fep_hwr_top_pane_g1_ParamLimits

0xd544,	// (0x000158ed) fep_hwr_top_pane_g2_ParamLimits

0x7a5b,	// (0x0000fe04) fep_hwr_top_pane_g3_ParamLimits

0xfafb,	// (0x00017ea4) fep_hwr_top_pane_g_ParamLimits

0x7a70,	// (0x0000fe19) fep_hwr_top_text_pane_ParamLimits

0xbc2c,	// (0x00013fd5) aid_touch_tab_arrow_arrow_2

0xbc35,	// (0x00013fde) aid_touch_tab_arrow_left_2

0x79ae,	// (0x0000fd57) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x79e1,	// (0x0000fd8a) fep_hwr_prediction_pane

0xd683,	// (0x00015a2c) fep_vkb_prediction_pane

0xd765,	// (0x00015b0e) fep_vkb_side_pane_g3_ParamLimits

0xd765,	// (0x00015b0e) fep_vkb_side_pane_g3

0x7bdf,	// (0x0000ff88) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7c49,	// (0x0000fff2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7c56,	// (0x0000ffff) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaa,	// (0x00017f53) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d85,	// (0x0001012e) fep_hwr_prediction_pane_g1

0x7d8f,	// (0x00010138) fep_hwr_prediction_pane_g2

0x7d97,	// (0x00010140) fep_hwr_prediction_pane_g3

0x7d9f,	// (0x00010148) fep_hwr_prediction_pane_g4

0x0003,

0xfcad,	// (0x00018056) fep_hwr_prediction_pane_g

0xe842,	// (0x00016beb) fep_vkb_prediction_pane_g1

0xe84c,	// (0x00016bf5) fep_vkb_prediction_pane_g2

0xe854,	// (0x00016bfd) fep_vkb_prediction_pane_g3

0xe85c,	// (0x00016c05) fep_vkb_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0001805f) fep_vkb_prediction_pane_g

0x77d2,	// (0x0000fb7b) slider_set_pane_g3

0x77e6,	// (0x0000fb8f) slider_set_pane_g4

0x77fe,	// (0x0000fba7) slider_set_pane_g5

0x77d2,	// (0x0000fb7b) slider_set_pane_g6

0x7814,	// (0x0000fbbd) slider_set_pane_g7

0xc27e,	// (0x00014627) slider_form_pane_g3

0xc287,	// (0x00014630) slider_form_pane_g4

0xc28f,	// (0x00014638) slider_form_pane_g5

0xc27e,	// (0x00014627) slider_form_pane_g6

0xc297,	// (0x00014640) slider_form_pane_g7

0xc915,	// (0x00014cbe) slider_set_pane_vc_g3

0xc91e,	// (0x00014cc7) slider_set_pane_vc_g4

0xc927,	// (0x00014cd0) slider_set_pane_vc_g5

0xc915,	// (0x00014cbe) slider_set_pane_vc_g6

0xc930,	// (0x00014cd9) slider_set_pane_vc_g7

0xc915,	// (0x00014cbe) slider_form_pane_vc_g1

0xc91e,	// (0x00014cc7) slider_form_pane_vc_g2

0xc927,	// (0x00014cd0) slider_form_pane_vc_g3

0xc915,	// (0x00014cbe) slider_form_pane_vc_g4

0xccfe,	// (0x000150a7) slider_form_pane_vc_g5

0x0004,

0xfa78,	// (0x00017e21) slider_form_pane_vc_g

0x67c8,	// (0x0000eb71) main_idle_act3_pane

0xe864,	// (0x00016c0d) ai3_links_pane

0xe86d,	// (0x00016c16) popup_ai3_data_window_ParamLimits

0xe86d,	// (0x00016c16) popup_ai3_data_window

0x88c4,	// (0x00010c6d) grid_ai3_links_pane

0xe885,	// (0x00016c2e) cell_ai3_links_pane_ParamLimits

0xe885,	// (0x00016c2e) cell_ai3_links_pane

0xe899,	// (0x00016c42) bg_popup_sub_pane_cp11

0xe8a6,	// (0x00016c4f) cell_ai3_links_pane_g1

0x88c4,	// (0x00010c6d) bg_popup_sub_pane_cp12

0xe8cb,	// (0x00016c74) heading_ai3_data_pane

0xe8d3,	// (0x00016c7c) list_ai3_gene_pane

0xe8df,	// (0x00016c88) popup_ai3_data_window_g1

0xe8e7,	// (0x00016c90) heading_ai3_data_pane_g1

0xe8ef,	// (0x00016c98) heading_ai3_data_pane_t1

0xe8fd,	// (0x00016ca6) list_double_ai3_gene_pane_ParamLimits

0xe8fd,	// (0x00016ca6) list_double_ai3_gene_pane

0xe90a,	// (0x00016cb3) list_single_ai3_gene_pane_ParamLimits

0xe90a,	// (0x00016cb3) list_single_ai3_gene_pane

0xd49e,	// (0x00015847) list_highlight_pane_cp7_ParamLimits

0xd49e,	// (0x00015847) list_highlight_pane_cp7

0xe917,	// (0x00016cc0) list_single_a13_gene_pane_t1_ParamLimits

0xe917,	// (0x00016cc0) list_single_a13_gene_pane_t1

0xe92e,	// (0x00016cd7) list_single_ai3_gene_pane_g1

0xe937,	// (0x00016ce0) list_single_ai3_gene_pane_g2

0x0001,

0xfcbf,	// (0x00018068) list_single_ai3_gene_pane_g

0xe93f,	// (0x00016ce8) list_double_ai3_gene_pane_g1_ParamLimits

0xe93f,	// (0x00016ce8) list_double_ai3_gene_pane_g1

0xe94b,	// (0x00016cf4) list_double_ai3_gene_pane_t1_ParamLimits

0xe94b,	// (0x00016cf4) list_double_ai3_gene_pane_t1

0xe967,	// (0x00016d10) list_double_ai3_gene_pane_t2_ParamLimits

0xe967,	// (0x00016d10) list_double_ai3_gene_pane_t2

0xe97c,	// (0x00016d25) list_double_ai3_gene_pane_t3_ParamLimits

0xe97c,	// (0x00016d25) list_double_ai3_gene_pane_t3

0x0002,

0xfcc4,	// (0x0001806d) list_double_ai3_gene_pane_t_ParamLimits

0xfcc4,	// (0x0001806d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe735,	// (0x00016ade) aid_size_min_col_2

0xe73d,	// (0x00016ae6) aid_size_min_msg_ParamLimits

0xe73d,	// (0x00016ae6) aid_size_min_msg

0xd85f,	// (0x00015c08) fep_vkb_top_text_pane_g2_ParamLimits

0xd85f,	// (0x00015c08) fep_vkb_top_text_pane_g2

0x0001,

0xfb2b,	// (0x00017ed4) fep_vkb_top_text_pane_g_ParamLimits

0xfb2b,	// (0x00017ed4) fep_vkb_top_text_pane_g

0x67c8,	// (0x0000eb71) main_hc_apps_shell_pane

0xe999,	// (0x00016d42) grid_hc_apps_pane_ParamLimits

0xe999,	// (0x00016d42) grid_hc_apps_pane

0xe9a8,	// (0x00016d51) list_hc_apps_pane

0xe9b0,	// (0x00016d59) scroll_pane_cp37_ParamLimits

0xe9b0,	// (0x00016d59) scroll_pane_cp37

0xe9bc,	// (0x00016d65) cell_hc_apps_pane_ParamLimits

0xe9bc,	// (0x00016d65) cell_hc_apps_pane

0xea4a,	// (0x00016df3) cell_hc_apps_pane_g1_ParamLimits

0xea4a,	// (0x00016df3) cell_hc_apps_pane_g1

0xea77,	// (0x00016e20) cell_hc_apps_pane_g2_ParamLimits

0xea77,	// (0x00016e20) cell_hc_apps_pane_g2

0xea93,	// (0x00016e3c) cell_hc_apps_pane_g3_ParamLimits

0xea93,	// (0x00016e3c) cell_hc_apps_pane_g3

0x0002,

0xfccb,	// (0x00018074) cell_hc_apps_pane_g_ParamLimits

0xfccb,	// (0x00018074) cell_hc_apps_pane_g

0xeab5,	// (0x00016e5e) cell_hc_apps_pane_t1_ParamLimits

0xeab5,	// (0x00016e5e) cell_hc_apps_pane_t1

0x8d3c,	// (0x000110e5) grid_highlight_pane_cp10_ParamLimits

0x8d3c,	// (0x000110e5) grid_highlight_pane_cp10

0xeaf3,	// (0x00016e9c) list_single_hc_apps_pane_ParamLimits

0xeaf3,	// (0x00016e9c) list_single_hc_apps_pane

0xeb23,	// (0x00016ecc) list_single_hc_apps_pane_g1

0xeb3c,	// (0x00016ee5) list_single_hc_apps_pane_g2

0x0001,

0xfcd2,	// (0x0001807b) list_single_hc_apps_pane_g

0xeb55,	// (0x00016efe) list_single_hc_apps_pane_g2_copy1

0xeb71,	// (0x00016f1a) list_single_hc_apps_pane_t1

0x8a95,	// (0x00010e3e) bg_set_opt_pane_cp_ParamLimits

0x69d9,	// (0x0000ed82) setting_slider_pane_t1_ParamLimits

0x69ef,	// (0x0000ed98) setting_slider_pane_t2_ParamLimits

0x6a08,	// (0x0000edb1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00017907) setting_slider_pane_t_ParamLimits

0x6a1f,	// (0x0000edc8) slider_set_pane_ParamLimits

0x6ebb,	// (0x0000f264) control_pane_g5_ParamLimits

0x6ebb,	// (0x0000f264) control_pane_g5

0xc0f6,	// (0x0001449f) slider_set_pane_g1_ParamLimits

0x77c6,	// (0x0000fb6f) slider_set_pane_g2_ParamLimits

0x77d2,	// (0x0000fb7b) slider_set_pane_g3_ParamLimits

0x77e6,	// (0x0000fb8f) slider_set_pane_g4_ParamLimits

0x77fe,	// (0x0000fba7) slider_set_pane_g5_ParamLimits

0x77d2,	// (0x0000fb7b) slider_set_pane_g6_ParamLimits

0x7814,	// (0x0000fbbd) slider_set_pane_g7_ParamLimits

0xf953,	// (0x00017cfc) slider_set_pane_g_ParamLimits

0x8a95,	// (0x00010e3e) navi_icon_text_pane_ParamLimits

0xa8ee,	// (0x00012c97) aid_fill_nsta_2_ParamLimits

0xa920,	// (0x00012cc9) aid_touch_tab_arrow_left_ParamLimits

0xa92c,	// (0x00012cd5) aid_touch_tab_arrow_right_ParamLimits

0xa996,	// (0x00012d3f) clock_nsta_pane_ParamLimits

0xbc0e,	// (0x00013fb7) navi_icon_pane_g1_ParamLimits

0xbc1a,	// (0x00013fc3) navi_text_pane_t1_ParamLimits

0xd0fc,	// (0x000154a5) navi_icon_text_pane_g1_ParamLimits

0xd108,	// (0x000154b1) navi_icon_text_pane_t1_ParamLimits

0xeb23,	// (0x00016ecc) list_single_hc_apps_pane_g1_ParamLimits

0xeb3c,	// (0x00016ee5) list_single_hc_apps_pane_g2_ParamLimits

0xfcd2,	// (0x0001807b) list_single_hc_apps_pane_g_ParamLimits

0xeb55,	// (0x00016efe) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xeb71,	// (0x00016f1a) list_single_hc_apps_pane_t1_ParamLimits

0x690b,	// (0x0000ecb4) popup_toolbar2_fixed_window_ParamLimits

0x690b,	// (0x0000ecb4) popup_toolbar2_fixed_window

0x73c7,	// (0x0000f770) popup_toolbar2_float_window

0x88c4,	// (0x00010c6d) bg_popup_sub_pane_cp27

0xeb9f,	// (0x00016f48) grid_toolbar2_float_pane

0x88c4,	// (0x00010c6d) bg_popup_sub_pane_cp26

0xeb9f,	// (0x00016f48) grid_toolbar2_fixed_pane

0xeba7,	// (0x00016f50) cell_toolbar2_fixed_pane_ParamLimits

0xeba7,	// (0x00016f50) cell_toolbar2_fixed_pane

0xebb8,	// (0x00016f61) cell_toolbar2_fixed_pane_g1

0xebc1,	// (0x00016f6a) toolbar2_fixed_button_pane

0xad7d,	// (0x00013126) toolbar2_fixed_button_pane_g1

0xad8d,	// (0x00013136) toolbar2_fixed_button_pane_g2

0xad85,	// (0x0001312e) toolbar2_fixed_button_pane_g3

0xad9d,	// (0x00013146) toolbar2_fixed_button_pane_g4

0xad95,	// (0x0001313e) toolbar2_fixed_button_pane_g5

0xada5,	// (0x0001314e) toolbar2_fixed_button_pane_g6

0xadad,	// (0x00013156) toolbar2_fixed_button_pane_g7

0xadbd,	// (0x00013166) toolbar2_fixed_button_pane_g8

0xadb5,	// (0x0001315e) toolbar2_fixed_button_pane_g9

0x0008,

0xf855,	// (0x00017bfe) toolbar2_fixed_button_pane_g

0xebc9,	// (0x00016f72) cell_toolbar2_float_pane_ParamLimits

0xebc9,	// (0x00016f72) cell_toolbar2_float_pane

0xebda,	// (0x00016f83) cell_toolbar2_float_pane_g1

0xebc1,	// (0x00016f6a) toolbar2_fixed_button_pane_cp

0xd5f2,	// (0x0001599b) fep_vkb_accented_list_pane_ParamLimits

0xd5f2,	// (0x0001599b) fep_vkb_accented_list_pane

0x7bbf,	// (0x0000ff68) bg_popup_fep_shadow_pane_g9

0xa565,	// (0x0001290e) bg_popup_fep_shadow_pane_cp3

0x9a50,	// (0x00011df9) list_accented_list_pane

0xebe3,	// (0x00016f8c) list_single_accented_list_pane_ParamLimits

0xebe3,	// (0x00016f8c) list_single_accented_list_pane

0xa565,	// (0x0001290e) list_highlight_pane_cp10

0xebf4,	// (0x00016f9d) list_single_accented_list_pane_t1

0x732d,	// (0x0000f6d6) popup_slider_window_ParamLimits

0x732d,	// (0x0000f6d6) popup_slider_window

0xe72c,	// (0x00016ad5) aid_indentation_list_msg

0xec94,	// (0x0001703d) bg_popup_window_pane_cp19

0xecf8,	// (0x000170a1) popup_slider_window_g1

0xed14,	// (0x000170bd) popup_slider_window_g2

0xed30,	// (0x000170d9) popup_slider_window_g3

0x0005,

0xfcd7,	// (0x00018080) popup_slider_window_g

0xed8c,	// (0x00017135) popup_slider_window_t1

0xedfe,	// (0x000171a7) small_volume_slider_vertical_pane

0xd4d9,	// (0x00015882) small_volume_slider_vertical_pane_g1

0xd4d9,	// (0x00015882) small_volume_slider_vertical_pane_g2

0xee1a,	// (0x000171c3) small_volume_slider_vertical_pane_g3

0x0002,

0xfce9,	// (0x00018092) small_volume_slider_vertical_pane_g

0x677f,	// (0x0000eb28) area_side_right_pane_ParamLimits

0x677f,	// (0x0000eb28) area_side_right_pane

0x7da7,	// (0x00010150) aid_size_side_button_ParamLimits

0x7da7,	// (0x00010150) aid_size_side_button

0x7dbb,	// (0x00010164) grid_sctrl_middle_pane_ParamLimits

0x7dbb,	// (0x00010164) grid_sctrl_middle_pane

0x7dd7,	// (0x00010180) sctrl_sk_bottom_pane

0x7de8,	// (0x00010191) sctrl_sk_top_pane

0x7dfa,	// (0x000101a3) aid_touch_sctrl_top

0x7e07,	// (0x000101b0) bg_sctrl_sk_pane_ParamLimits

0x7e07,	// (0x000101b0) bg_sctrl_sk_pane

0x7e15,	// (0x000101be) sctrl_sk_top_pane_g1

0x7e22,	// (0x000101cb) sctrl_sk_top_pane_t1

0x7dfa,	// (0x000101a3) aid_touch_sctrl_bottom

0x7e07,	// (0x000101b0) bg_sctrl_sk_pane_cp_ParamLimits

0x7e07,	// (0x000101b0) bg_sctrl_sk_pane_cp

0x7e3d,	// (0x000101e6) sctrl_sk_bottom_pane_g1

0x7e22,	// (0x000101cb) sctrl_sk_bottom_pane_t1

0x7e46,	// (0x000101ef) cell_sctrl_middle_pane_ParamLimits

0x7e46,	// (0x000101ef) cell_sctrl_middle_pane

0x7e61,	// (0x0001020a) aid_touch_sctrl_middle_ParamLimits

0x7e61,	// (0x0001020a) aid_touch_sctrl_middle

0x7e72,	// (0x0001021b) bg_sctrl_middle_pane_ParamLimits

0x7e72,	// (0x0001021b) bg_sctrl_middle_pane

0x7bdf,	// (0x0000ff88) cell_sctrl_middle_pane_g1_ParamLimits

0x7bdf,	// (0x0000ff88) cell_sctrl_middle_pane_g1

0x7e80,	// (0x00010229) cell_sctrl_middle_pane_g2_ParamLimits

0x7e80,	// (0x00010229) cell_sctrl_middle_pane_g2

0x0001,

0xfcf5,	// (0x0001809e) cell_sctrl_middle_pane_g_ParamLimits

0xfcf5,	// (0x0001809e) cell_sctrl_middle_pane_g

0xad7d,	// (0x00013126) bg_sctrl_middle_pane_g1

0xad85,	// (0x0001312e) bg_sctrl_middle_pane_g2

0xad8d,	// (0x00013136) bg_sctrl_middle_pane_g3

0xad95,	// (0x0001313e) bg_sctrl_middle_pane_g4

0xad9d,	// (0x00013146) bg_sctrl_middle_pane_g5

0xada5,	// (0x0001314e) bg_sctrl_middle_pane_g6

0xadad,	// (0x00013156) bg_sctrl_middle_pane_g7

0xadb5,	// (0x0001315e) bg_sctrl_middle_pane_g8

0x0007,

0xfcfa,	// (0x000180a3) bg_sctrl_middle_pane_g

0xadbd,	// (0x00013166) bg_sctrl_middle_pane_g8_copy1

0xad7d,	// (0x00013126) bg_sctrl_sk_pane_g1

0xad8d,	// (0x00013136) bg_sctrl_sk_pane_g2

0xad85,	// (0x0001312e) bg_sctrl_sk_pane_g3

0x0008,

0xf855,	// (0x00017bfe) bg_sctrl_sk_pane_g

0x91b8,	// (0x00011561) aid_size_touch_scroll_bar

0xad9d,	// (0x00013146) bg_sctrl_sk_pane_g4

0xad95,	// (0x0001313e) bg_sctrl_sk_pane_g5

0xada5,	// (0x0001314e) bg_sctrl_sk_pane_g6

0xadad,	// (0x00013156) bg_sctrl_sk_pane_g7

0xadbd,	// (0x00013166) bg_sctrl_sk_pane_g8

0xadb5,	// (0x0001315e) bg_sctrl_sk_pane_g9

0x7063,	// (0x0000f40c) popup_fep_china_hwr2_fs_candidate_window

0x706b,	// (0x0000f414) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x706b,	// (0x0000f414) popup_fep_china_hwr2_fs_control_window

0x7bdf,	// (0x0000ff88) sctrl_sk_top_pane_g2

0x0001,

0xfcf0,	// (0x00018099) sctrl_sk_top_pane_g

0xee23,	// (0x000171cc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xee23,	// (0x000171cc) aid_fep_china_hwr2_fs_cell

0xee34,	// (0x000171dd) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xee34,	// (0x000171dd) bg_popup_fep_shadow_pane_cp4

0xee4b,	// (0x000171f4) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xee4b,	// (0x000171f4) bg_popup_fep_shadow_pane_cp5

0xee5d,	// (0x00017206) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xee5d,	// (0x00017206) popup_fep_china_hwr2_fs_control_bar_grid

0xee6d,	// (0x00017216) popup_fep_china_hwr2_fs_control_funtion_grid

0xee75,	// (0x0001721e) aid_fep_china_hwr2_fs_candi_cell

0x88c4,	// (0x00010c6d) bg_popup_fep_shadow_pane_cp6

0xee7f,	// (0x00017228) popup_fep_china_hwr2_fs_candidate_grid

0xee87,	// (0x00017230) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xee87,	// (0x00017230) cell_fep_china_hwr2_fs_funtion_grid

0xd4d9,	// (0x00015882) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xee9f,	// (0x00017248) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xee9f,	// (0x00017248) cell_fep_china_hwr2_fs_funtion_grid_g1

0xeead,	// (0x00017256) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xeead,	// (0x00017256) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0b,	// (0x000180b4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0b,	// (0x000180b4) cell_fep_china_hwr2_fs_funtion_grid_g

0xeec3,	// (0x0001726c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xeec3,	// (0x0001726c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xeed8,	// (0x00017281) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xeed8,	// (0x00017281) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd10,	// (0x000180b9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd10,	// (0x000180b9) cell_fep_china_hwr2_fs_funtion_grid_t

0xeef4,	// (0x0001729d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xeefc,	// (0x000172a5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xef04,	// (0x000172ad) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd15,	// (0x000180be) popup_fep_china_hwr2_fs_control_bar_grid_g

0xef0c,	// (0x000172b5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xef0c,	// (0x000172b5) cell_fep_china_hwr2_fs_candidate_grid

0xef25,	// (0x000172ce) popup_fep_china_hwr2_fs_candidate_grid_g20

0xef2d,	// (0x000172d6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xd4d9,	// (0x00015882) cell_fep_china_hwr2_fs_candidate_grid_g1

0xd4d9,	// (0x00015882) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb30,	// (0x00017ed9) cell_fep_china_hwr2_fs_candidate_grid_g

0xef35,	// (0x000172de) cell_fep_china_hwr2_fs_candidate_grid_t1

0xa9a3,	// (0x00012d4c) clock_nsta_pane_cp_24_ParamLimits

0xa9a3,	// (0x00012d4c) clock_nsta_pane_cp_24

0xaa16,	// (0x00012dbf) indicator_nsta_pane_cp_24_ParamLimits

0xaa16,	// (0x00012dbf) indicator_nsta_pane_cp_24

0xba8b,	// (0x00013e34) heading_pane_g1

0x0001,

0xf8ba,	// (0x00017c63) heading_pane_g

0xc4d7,	// (0x00014880) grid_sct_catagory_button_pane

0xc507,	// (0x000148b0) scroll_pane_cp5_ParamLimits

0xd14a,	// (0x000154f3) button_value_adjust_pane_cp5_ParamLimits

0xd14a,	// (0x000154f3) button_value_adjust_pane_cp5

0xd240,	// (0x000155e9) form2_midp_time_pane_ParamLimits

0xef43,	// (0x000172ec) cell_sct_catagory_button_pane_ParamLimits

0xef43,	// (0x000172ec) cell_sct_catagory_button_pane

0xd49e,	// (0x00015847) bg_button_pane_cp01_ParamLimits

0xd49e,	// (0x00015847) bg_button_pane_cp01

0xd4d9,	// (0x00015882) cell_sct_catagory_button_pane_g1

0x7364,	// (0x0000f70d) popup_tb_extension_window

0xef55,	// (0x000172fe) aid_size_cell_ext_ParamLimits

0xef55,	// (0x000172fe) aid_size_cell_ext

0x8d3c,	// (0x000110e5) bg_tb_trans_pane_cp1_ParamLimits

0x8d3c,	// (0x000110e5) bg_tb_trans_pane_cp1

0xef75,	// (0x0001731e) grid_tb_ext_pane_ParamLimits

0xef75,	// (0x0001731e) grid_tb_ext_pane

0xef9b,	// (0x00017344) cell_tb_ext_pane_ParamLimits

0xef9b,	// (0x00017344) cell_tb_ext_pane

0xefb0,	// (0x00017359) cell_tb_ext_pane_g1_ParamLimits

0xefb0,	// (0x00017359) cell_tb_ext_pane_g1

0xefcd,	// (0x00017376) cell_tb_ext_pane_t1

0x8d3c,	// (0x000110e5) list_highlight_pane_cp11_ParamLimits

0x8d3c,	// (0x000110e5) list_highlight_pane_cp11

0x692a,	// (0x0000ecd3) popup_uni_indicator_window_ParamLimits

0x692a,	// (0x0000ecd3) popup_uni_indicator_window

0x97a5,	// (0x00011b4e) bg_popup_sub_pane_cp14

0xefe8,	// (0x00017391) list_uniindi_pane

0xeff4,	// (0x0001739d) uniindi_top_pane

0x8d3c,	// (0x000110e5) bg_uniindi_top_pane

0xf013,	// (0x000173bc) uniindi_top_pane_g1

0xf029,	// (0x000173d2) uniindi_top_pane_g2

0x0003,

0xfd1c,	// (0x000180c5) uniindi_top_pane_g

0xf053,	// (0x000173fc) uniindi_top_pane_t1

0xf07d,	// (0x00017426) list_single_uniindi_pane_ParamLimits

0xf07d,	// (0x00017426) list_single_uniindi_pane

0xd4d9,	// (0x00015882) bg_uniindi_top_pane_g1

0xf08f,	// (0x00017438) list_single_uniindi_pane_g1

0xf0a2,	// (0x0001744b) list_single_uniindi_pane_t1

0x67c8,	// (0x0000eb71) control_bg_pane

0xf0c7,	// (0x00017470) bg_sctrl_sk_pane_cp1

0xf0d0,	// (0x00017479) bg_sctrl_sk_pane_cp2

0xf0d9,	// (0x00017482) control_bg_pane_g1

0xf0e2,	// (0x0001748b) control_bg_pane_g2

0x0001,

0xfd25,	// (0x000180ce) control_bg_pane_g

0xcfa0,	// (0x00015349) cell_indicator_nsta_pane_g1_ParamLimits

0xcfae,	// (0x00015357) cell_indicator_nsta_pane_g2_ParamLimits

0xfa94,	// (0x00017e3d) cell_indicator_nsta_pane_g_ParamLimits

0xd2a8,	// (0x00015651) form2_midp_time_pane_t1_ParamLimits

0x6fd9,	// (0x0000f382) main_idle_act4_pane_ParamLimits

0x6fd9,	// (0x0000f382) main_idle_act4_pane

0x7364,	// (0x0000f70d) popup_tb_extension_window_ParamLimits

0xef8f,	// (0x00017338) tb_ext_find_pane_ParamLimits

0xef8f,	// (0x00017338) tb_ext_find_pane

0xf0eb,	// (0x00017494) ai_gene_pane_1_cp1

0xa6a0,	// (0x00012a49) ai_gene_pane_2_cp1

0xf0f3,	// (0x0001749c) list_single_idle_plugin_calendar_pane

0xf0fc,	// (0x000174a5) list_single_idle_plugin_notification_pane

0xf105,	// (0x000174ae) list_single_idle_plugin_player_pane

0xf10e,	// (0x000174b7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf10e,	// (0x000174b7) list_single_idle_plugin_shortcut_pane

0xf130,	// (0x000174d9) main_idle_act4_pane_t1

0xf142,	// (0x000174eb) main_idle_act4_pane_t2

0x0001,

0xfd2a,	// (0x000180d3) main_idle_act4_pane_t

0xf154,	// (0x000174fd) middle_sk_idle_act4_pane_ParamLimits

0xf154,	// (0x000174fd) middle_sk_idle_act4_pane

0xf16a,	// (0x00017513) popup_clock_digital_analogue_window_cp2

0xf184,	// (0x0001752d) shortcut_wheel_idle_act4_pane_ParamLimits

0xf184,	// (0x0001752d) shortcut_wheel_idle_act4_pane

0xd4d9,	// (0x00015882) shortcut_wheel_idle_act4_pane_g1

0xd4d9,	// (0x00015882) shortcut_wheel_idle_act4_pane_g2

0xd4d9,	// (0x00015882) shortcut_wheel_idle_act4_pane_g3

0xd4d9,	// (0x00015882) shortcut_wheel_idle_act4_pane_g4

0xd4d9,	// (0x00015882) shortcut_wheel_idle_act4_pane_g5

0xf198,	// (0x00017541) shortcut_wheel_idle_act4_pane_g6

0xf1a0,	// (0x00017549) shortcut_wheel_idle_act4_pane_g7

0xf1a8,	// (0x00017551) shortcut_wheel_idle_act4_pane_g8

0xf1b0,	// (0x00017559) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2f,	// (0x000180d8) shortcut_wheel_idle_act4_pane_g

0xd711,	// (0x00015aba) middle_sk_idle_act4_pane_g1_ParamLimits

0xd711,	// (0x00015aba) middle_sk_idle_act4_pane_g1

0xf214,	// (0x000175bd) middle_sk_idle_act4_pane_g2_ParamLimits

0xf214,	// (0x000175bd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd52,	// (0x000180fb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd52,	// (0x000180fb) middle_sk_idle_act4_pane_g

0xf220,	// (0x000175c9) middle_sk_idle_act4_pane_t1_ParamLimits

0xf220,	// (0x000175c9) middle_sk_idle_act4_pane_t1

0xf23d,	// (0x000175e6) grid_ai_shortcut_pane_ParamLimits

0xf23d,	// (0x000175e6) grid_ai_shortcut_pane

0xf256,	// (0x000175ff) list_highlight_pane_cp16_ParamLimits

0xf256,	// (0x000175ff) list_highlight_pane_cp16

0xf263,	// (0x0001760c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf263,	// (0x0001760c) list_single_idle_plugin_shortcut_pane_g1

0xf26f,	// (0x00017618) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf26f,	// (0x00017618) list_single_idle_plugin_shortcut_pane_g2

0xf287,	// (0x00017630) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf287,	// (0x00017630) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd57,	// (0x00018100) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd57,	// (0x00018100) list_single_idle_plugin_shortcut_pane_g

0xf29a,	// (0x00017643) cell_ai_shortcut_pane_ParamLimits

0xf29a,	// (0x00017643) cell_ai_shortcut_pane

0xf2bb,	// (0x00017664) cell_ai_shortcut_pane_g1_ParamLimits

0xf2bb,	// (0x00017664) cell_ai_shortcut_pane_g1

0xf0eb,	// (0x00017494) ai_gene_pane_1_cp2

0xf2dd,	// (0x00017686) ai_gene_pane_2_cp2

0xf2e5,	// (0x0001768e) list_highlight_pane_cp15

0xf2ee,	// (0x00017697) list_single_idle_plugin_calendar_pane_g1

0xf2e5,	// (0x0001768e) list_highlight_pane_cp17

0xf2f6,	// (0x0001769f) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2fe,	// (0x000176a7) list_single_idle_plugin_player_pane_g1

0xc6d5,	// (0x00014a7e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5e,	// (0x00018107) list_single_idle_plugin_player_pane_g

0xf306,	// (0x000176af) list_single_idle_plugin_player_pane_t1

0xf314,	// (0x000176bd) list_single_idle_plugin_player_pane_t2

0xf322,	// (0x000176cb) list_single_idle_plugin_player_pane_t3

0xf330,	// (0x000176d9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd63,	// (0x0001810c) list_single_idle_plugin_player_pane_t

0xf33e,	// (0x000176e7) wait_bar_pane_cp15

0xf346,	// (0x000176ef) grid_ai_notification_pane

0xc6d5,	// (0x00014a7e) list_single_idle_plugin_notification_pane_g1

0xf34f,	// (0x000176f8) cell_ai_notification_pane_ParamLimits

0xf34f,	// (0x000176f8) cell_ai_notification_pane

0xf35c,	// (0x00017705) cell_ai_notification_pane_g1

0xf364,	// (0x0001770d) cell_ai_notification_pane_t1

0xf372,	// (0x0001771b) tb_ext_find_button_pane

0xf37a,	// (0x00017723) tb_ext_find_pane_g1

0xf382,	// (0x0001772b) tb_ext_find_pane_t1

0x9f60,	// (0x00012309) tb_ext_find_button_pane_g1

0xf390,	// (0x00017739) tb_ext_find_button_pane_g2

0x0001,

0xfd6c,	// (0x00018115) tb_ext_find_button_pane_g

0xf130,	// (0x000174d9) main_idle_act4_pane_t1_ParamLimits

0xf142,	// (0x000174eb) main_idle_act4_pane_t2_ParamLimits

0xfd2a,	// (0x000180d3) main_idle_act4_pane_t_ParamLimits

0xf16a,	// (0x00017513) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf178,	// (0x00017521) sat_plugin_idle_act4_pane_ParamLimits

0xf178,	// (0x00017521) sat_plugin_idle_act4_pane

0xf399,	// (0x00017742) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf399,	// (0x00017742) sat_plugin_idle_act4_pane_t1

0xf3ac,	// (0x00017755) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3ac,	// (0x00017755) sat_plugin_idle_act4_pane_t2

0xf3bf,	// (0x00017768) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3bf,	// (0x00017768) sat_plugin_idle_act4_pane_t3

0xf3d2,	// (0x0001777b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3d2,	// (0x0001777b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd71,	// (0x0001811a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd71,	// (0x0001811a) sat_plugin_idle_act4_pane_t

0x688b,	// (0x0000ec34) popup_battery_window_ParamLimits

0x688b,	// (0x0000ec34) popup_battery_window

0x8d3c,	// (0x000110e5) bg_popup_sub_pane_cp25_ParamLimits

0x8d3c,	// (0x000110e5) bg_popup_sub_pane_cp25

0xf3e5,	// (0x0001778e) popup_battery_window_g1_ParamLimits

0xf3e5,	// (0x0001778e) popup_battery_window_g1

0xf3f1,	// (0x0001779a) popup_battery_window_t1_ParamLimits

0xf3f1,	// (0x0001779a) popup_battery_window_t1

0xf403,	// (0x000177ac) popup_battery_window_t2_ParamLimits

0xf403,	// (0x000177ac) popup_battery_window_t2

0x0001,

0xfd7a,	// (0x00018123) popup_battery_window_t_ParamLimits

0xfd7a,	// (0x00018123) popup_battery_window_t

0xa579,	// (0x00012922) midp_canvas_pane_ParamLimits

0xa5e8,	// (0x00012991) midp_keypad_pane_ParamLimits

0xa5e8,	// (0x00012991) midp_keypad_pane

0xa8b4,	// (0x00012c5d) main_midp_pane_ParamLimits

0xd023,	// (0x000153cc) signal_pane_g2_cp_ParamLimits

0xf420,	// (0x000177c9) aid_size_cell_midp_keypad_ParamLimits

0xf420,	// (0x000177c9) aid_size_cell_midp_keypad

0xf43a,	// (0x000177e3) midp_keyp_game_grid_pane_ParamLimits

0xf43a,	// (0x000177e3) midp_keyp_game_grid_pane

0xf454,	// (0x000177fd) midp_keyp_rocker_pane_ParamLimits

0xf454,	// (0x000177fd) midp_keyp_rocker_pane

0xf481,	// (0x0001782a) midp_keyp_sk_left_pane_ParamLimits

0xf481,	// (0x0001782a) midp_keyp_sk_left_pane

0xf4d9,	// (0x00017882) midp_keyp_sk_right_pane_ParamLimits

0xf4d9,	// (0x00017882) midp_keyp_sk_right_pane

0x88c4,	// (0x00010c6d) bg_button_pane_cp03

0xf52b,	// (0x000178d4) midp_keyp_sk_left_pane_g1

0x88c4,	// (0x00010c6d) bg_button_pane_cp04

0xf52b,	// (0x000178d4) midp_keyp_sk_right_pane_g1

0xd4d9,	// (0x00015882) midp_keyp_rocker_pane_g1

0xf534,	// (0x000178dd) keyp_game_cell_pane_ParamLimits

0xf534,	// (0x000178dd) keyp_game_cell_pane

0x88c4,	// (0x00010c6d) bg_button_pane_cp02

0xf545,	// (0x000178ee) keyp_game_cell_pane_g1

0x68c1,	// (0x0000ec6a) popup_fep_vkb2_window_ParamLimits

0x68c1,	// (0x0000ec6a) popup_fep_vkb2_window

0x7ea4,	// (0x0001024d) aid_size_cell_vkb2_ParamLimits

0x7ea4,	// (0x0001024d) aid_size_cell_vkb2

0x7ef8,	// (0x000102a1) popup_fep_vkb2_window_g1_ParamLimits

0x7ef8,	// (0x000102a1) popup_fep_vkb2_window_g1

0x7f40,	// (0x000102e9) vkb2_area_bottom_pane_ParamLimits

0x7f40,	// (0x000102e9) vkb2_area_bottom_pane

0x7f78,	// (0x00010321) vkb2_area_keypad_pane_ParamLimits

0x7f78,	// (0x00010321) vkb2_area_keypad_pane

0x7fb0,	// (0x00010359) vkb2_area_top_pane_ParamLimits

0x7fb0,	// (0x00010359) vkb2_area_top_pane

0x8020,	// (0x000103c9) vkb2_top_entry_pane_ParamLimits

0x8020,	// (0x000103c9) vkb2_top_entry_pane

0x804a,	// (0x000103f3) vkb2_top_grid_left_pane_ParamLimits

0x804a,	// (0x000103f3) vkb2_top_grid_left_pane

0x8068,	// (0x00010411) vkb2_top_grid_right_pane_ParamLimits

0x8068,	// (0x00010411) vkb2_top_grid_right_pane

0x8086,	// (0x0001042f) vkb2_cell_keypad_pane_ParamLimits

0x8086,	// (0x0001042f) vkb2_cell_keypad_pane

0x8137,	// (0x000104e0) vkb2_area_bottom_grid_pane_ParamLimits

0x8137,	// (0x000104e0) vkb2_area_bottom_grid_pane

0x815b,	// (0x00010504) vkb2_area_bottom_pane_g1_ParamLimits

0x815b,	// (0x00010504) vkb2_area_bottom_pane_g1

0x817f,	// (0x00010528) vkb2_area_bottom_pane_g2_ParamLimits

0x817f,	// (0x00010528) vkb2_area_bottom_pane_g2

0x81ad,	// (0x00010556) vkb2_area_bottom_pane_g3_ParamLimits

0x81ad,	// (0x00010556) vkb2_area_bottom_pane_g3

0x0002,

0xfd7f,	// (0x00018128) vkb2_area_bottom_pane_g_ParamLimits

0xfd7f,	// (0x00018128) vkb2_area_bottom_pane_g

0x81fe,	// (0x000105a7) vkb2_top_cell_left_pane_ParamLimits

0x81fe,	// (0x000105a7) vkb2_top_cell_left_pane

0x02f1,	// (0x0000869a) vkb2_top_entry_pane_g1_ParamLimits

0x02f1,	// (0x0000869a) vkb2_top_entry_pane_g1

0x02ff,	// (0x000086a8) vkb2_top_entry_pane_t1_ParamLimits

0x02ff,	// (0x000086a8) vkb2_top_entry_pane_t1

0x0331,	// (0x000086da) vkb2_top_entry_pane_t2_ParamLimits

0x0331,	// (0x000086da) vkb2_top_entry_pane_t2

0x0363,	// (0x0000870c) vkb2_top_entry_pane_t3_ParamLimits

0x0363,	// (0x0000870c) vkb2_top_entry_pane_t3

0x0002,

0xfd86,	// (0x0001812f) vkb2_top_entry_pane_t_ParamLimits

0xfd86,	// (0x0001812f) vkb2_top_entry_pane_t

0x824b,	// (0x000105f4) vkb2_top_grid_right_pane_g1_ParamLimits

0x824b,	// (0x000105f4) vkb2_top_grid_right_pane_g1

0x8261,	// (0x0001060a) vkb2_top_grid_right_pane_g2_ParamLimits

0x8261,	// (0x0001060a) vkb2_top_grid_right_pane_g2

0x8279,	// (0x00010622) vkb2_top_grid_right_pane_g3_ParamLimits

0x8279,	// (0x00010622) vkb2_top_grid_right_pane_g3

0x8291,	// (0x0001063a) vkb2_top_grid_right_pane_g4_ParamLimits

0x8291,	// (0x0001063a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8d,	// (0x00018136) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8d,	// (0x00018136) vkb2_top_grid_right_pane_g

0x82a7,	// (0x00010650) vkb2_top_cell_left_pane_g1

0x82be,	// (0x00010667) vkb2_cell_keypad_pane_g1_ParamLimits

0x82be,	// (0x00010667) vkb2_cell_keypad_pane_g1

0x0427,	// (0x000087d0) vkb2_cell_keypad_pane_t1_ParamLimits

0x0427,	// (0x000087d0) vkb2_cell_keypad_pane_t1

0x82cc,	// (0x00010675) vkb2_cell_bottom_grid_pane_ParamLimits

0x82cc,	// (0x00010675) vkb2_cell_bottom_grid_pane

0x8305,	// (0x000106ae) vkb2_cell_bottom_grid_pane_g1

0xf1b8,	// (0x00017561) aid_call2_pane_cp02

0xf1c0,	// (0x00017569) aid_call_pane_cp02

0xf1c8,	// (0x00017571) clock_digital_number_pane_cp10

0xf1d0,	// (0x00017579) clock_digital_number_pane_cp11

0xf1d8,	// (0x00017581) clock_digital_number_pane_cp12

0xf1e0,	// (0x00017589) clock_digital_number_pane_cp13

0xf1e8,	// (0x00017591) clock_digital_separator_pane_cp10

0x9f60,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g1

0x9f60,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g2

0xf1f0,	// (0x00017599) popup_clock_digital_analogue_window_cp2_g3

0x9f60,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g4

0xf1f0,	// (0x00017599) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd42,	// (0x000180eb) popup_clock_digital_analogue_window_cp2_g

0xf1f8,	// (0x000175a1) popup_clock_digital_analogue_window_cp2_t1

0xf206,	// (0x000175af) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4d,	// (0x000180f6) popup_clock_digital_analogue_window_cp2_t

0xd4d9,	// (0x00015882) clock_digital_number_pane_cp10_g1

0xd4d9,	// (0x00015882) clock_digital_number_pane_cp10_g2

0x0001,

0xfb30,	// (0x00017ed9) clock_digital_number_pane_cp10_g

0xd4d9,	// (0x00015882) clock_digital_separator_pane_cp10_g1

0xd4d9,	// (0x00015882) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb30,	// (0x00017ed9) clock_digital_separator_pane_cp10_g

0xf035,	// (0x000173de) uniindi_top_pane_g3

0xf046,	// (0x000173ef) uniindi_top_pane_g4

0x80f1,	// (0x0001049a) vkb2_row_keypad_pane_ParamLimits

0x80f1,	// (0x0001049a) vkb2_row_keypad_pane

0x8321,	// (0x000106ca) vkb2_cell_t_keypad_pane_ParamLimits

0x8321,	// (0x000106ca) vkb2_cell_t_keypad_pane

0x832e,	// (0x000106d7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x832e,	// (0x000106d7) vkb2_cell_t_keypad_pane_cp08

0x833e,	// (0x000106e7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x833e,	// (0x000106e7) vkb2_cell_t_keypad_pane_cp09

0x834f,	// (0x000106f8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x834f,	// (0x000106f8) vkb2_cell_t_keypad_pane_cp01

0x835f,	// (0x00010708) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x835f,	// (0x00010708) vkb2_cell_t_keypad_pane_cp02

0x836f,	// (0x00010718) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x836f,	// (0x00010718) vkb2_cell_t_keypad_pane_cp03

0x837f,	// (0x00010728) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x837f,	// (0x00010728) vkb2_cell_t_keypad_pane_cp04

0x838f,	// (0x00010738) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x838f,	// (0x00010738) vkb2_cell_t_keypad_pane_cp05

0x839f,	// (0x00010748) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x839f,	// (0x00010748) vkb2_cell_t_keypad_pane_cp06

0x83af,	// (0x00010758) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x83af,	// (0x00010758) vkb2_cell_t_keypad_pane_cp07

0x83bf,	// (0x00010768) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x83bf,	// (0x00010768) vkb2_cell_t_keypad_pane_cp10

0x7bdf,	// (0x0000ff88) vkb2_cell_t_keypad_pane_g1

0x0546,	// (0x000088ef) vkb2_cell_t_keypad_pane_t1

0x67c8,	// (0x0000eb71) popup_grid_graphic2_window

0x0558,	// (0x00008901) aid_size_cell_graphic2_ParamLimits

0x0558,	// (0x00008901) aid_size_cell_graphic2

0x0590,	// (0x00008939) bg_popup_window_pane_cp21_ParamLimits

0x0590,	// (0x00008939) bg_popup_window_pane_cp21

0x059e,	// (0x00008947) graphic2_pages_pane_ParamLimits

0x059e,	// (0x00008947) graphic2_pages_pane

0x05d8,	// (0x00008981) grid_graphic2_control_pane_ParamLimits

0x05d8,	// (0x00008981) grid_graphic2_control_pane

0x060e,	// (0x000089b7) grid_graphic2_pane_ParamLimits

0x060e,	// (0x000089b7) grid_graphic2_pane

0x066e,	// (0x00008a17) cell_graphic2_pane

0x67c8,	// (0x0000eb71) main_comp_mode_pane

0xe8d3,	// (0x00016c7c) list_ai3_gene_pane_ParamLimits

0xec94,	// (0x0001703d) bg_popup_window_pane_cp19_ParamLimits

0xeca0,	// (0x00017049) bg_touch_area_indi_pane_ParamLimits

0xeca0,	// (0x00017049) bg_touch_area_indi_pane

0xecb6,	// (0x0001705f) bg_touch_area_indi_pane_cp01_ParamLimits

0xecb6,	// (0x0001705f) bg_touch_area_indi_pane_cp01

0xeccc,	// (0x00017075) bg_touch_area_indi_pane_cp02_ParamLimits

0xeccc,	// (0x00017075) bg_touch_area_indi_pane_cp02

0xece2,	// (0x0001708b) bg_touch_area_indi_pane_cp03_ParamLimits

0xece2,	// (0x0001708b) bg_touch_area_indi_pane_cp03

0xecf8,	// (0x000170a1) popup_slider_window_g1_ParamLimits

0xed14,	// (0x000170bd) popup_slider_window_g2_ParamLimits

0xed30,	// (0x000170d9) popup_slider_window_g3_ParamLimits

0xfcd7,	// (0x00018080) popup_slider_window_g_ParamLimits

0xed8c,	// (0x00017135) popup_slider_window_t1_ParamLimits

0xedfe,	// (0x000171a7) small_volume_slider_vertical_pane_ParamLimits

0x066e,	// (0x00008a17) cell_graphic2_pane_ParamLimits

0x06aa,	// (0x00008a53) bg_button_pane_cp10_ParamLimits

0x06aa,	// (0x00008a53) bg_button_pane_cp10

0x06bb,	// (0x00008a64) bg_button_pane_cp11_ParamLimits

0x06bb,	// (0x00008a64) bg_button_pane_cp11

0x06cc,	// (0x00008a75) graphic2_pages_pane_g1_ParamLimits

0x06cc,	// (0x00008a75) graphic2_pages_pane_g1

0x06df,	// (0x00008a88) graphic2_pages_pane_g2_ParamLimits

0x06df,	// (0x00008a88) graphic2_pages_pane_g2

0x0001,

0xfd9b,	// (0x00018144) graphic2_pages_pane_g_ParamLimits

0xfd9b,	// (0x00018144) graphic2_pages_pane_g

0x06f5,	// (0x00008a9e) graphic2_pages_pane_t1_ParamLimits

0x06f5,	// (0x00008a9e) graphic2_pages_pane_t1

0x070b,	// (0x00008ab4) cell_graphic2_control_pane_ParamLimits

0x070b,	// (0x00008ab4) cell_graphic2_control_pane

0x072a,	// (0x00008ad3) cell_graphic2_pane_g1_ParamLimits

0x072a,	// (0x00008ad3) cell_graphic2_pane_g1

0x0737,	// (0x00008ae0) cell_graphic2_pane_g2_ParamLimits

0x0737,	// (0x00008ae0) cell_graphic2_pane_g2

0x0744,	// (0x00008aed) cell_graphic2_pane_g3_ParamLimits

0x0744,	// (0x00008aed) cell_graphic2_pane_g3

0x0751,	// (0x00008afa) cell_graphic2_pane_g4_ParamLimits

0x0751,	// (0x00008afa) cell_graphic2_pane_g4

0x075e,	// (0x00008b07) cell_graphic2_pane_g5_ParamLimits

0x075e,	// (0x00008b07) cell_graphic2_pane_g5

0x0004,

0xfda0,	// (0x00018149) cell_graphic2_pane_g_ParamLimits

0xfda0,	// (0x00018149) cell_graphic2_pane_g

0x0779,	// (0x00008b22) cell_graphic2_pane_t1_ParamLimits

0x0779,	// (0x00008b22) cell_graphic2_pane_t1

0xae93,	// (0x0001323c) grid_highlight_pane_cp11_ParamLimits

0xae93,	// (0x0001323c) grid_highlight_pane_cp11

0x8d3c,	// (0x000110e5) bg_button_pane_cp05

0x07a2,	// (0x00008b4b) cell_graphic2_control_pane_g1

0xd4d9,	// (0x00015882) bg_touch_area_indi_pane_g1

0x07ca,	// (0x00008b73) aid_cmod_rocker_key_size

0x07d4,	// (0x00008b7d) aid_cmode_itu_key_size

0x07de,	// (0x00008b87) main_cmode_video_pane

0x07e6,	// (0x00008b8f) main_comp_mode_itu_pane

0x07f0,	// (0x00008b99) main_comp_mode_rocker_pane

0x07f8,	// (0x00008ba1) cell_cmode_rocker_pane_ParamLimits

0x07f8,	// (0x00008ba1) cell_cmode_rocker_pane

0x080a,	// (0x00008bb3) cell_cmode_itu_pane_ParamLimits

0x080a,	// (0x00008bb3) cell_cmode_itu_pane

0x97a5,	// (0x00011b4e) bg_button_pane_cp06_ParamLimits

0x97a5,	// (0x00011b4e) bg_button_pane_cp06

0xd711,	// (0x00015aba) cell_cmode_rocker_pane_g1_ParamLimits

0xd711,	// (0x00015aba) cell_cmode_rocker_pane_g1

0xee9f,	// (0x00017248) cell_cmode_rocker_pane_g2_ParamLimits

0xee9f,	// (0x00017248) cell_cmode_rocker_pane_g2

0x0001,

0xfdb0,	// (0x00018159) cell_cmode_rocker_pane_g_ParamLimits

0xfdb0,	// (0x00018159) cell_cmode_rocker_pane_g

0x88c4,	// (0x00010c6d) bg_button_pane_cp07

0x081f,	// (0x00008bc8) cell_cmode_itu_pane_g1

0x0828,	// (0x00008bd1) cell_cmode_itu_pane_t1

0x0836,	// (0x00008bdf) cell_cmode_itu_pane_t2

0x0001,

0xfdb5,	// (0x0001815e) cell_cmode_itu_pane_t

0xf0b7,	// (0x00017460) aid_touch_ctrl_left

0xf0bf,	// (0x00017468) aid_touch_ctrl_right

0x88c4,	// (0x00010c6d) compa_mode_pane

0x0844,	// (0x00008bed) aid_cmod_rocker_key_size_cp

0x084e,	// (0x00008bf7) aid_cmode_itu_key_size_cp

0x0858,	// (0x00008c01) compa_mode_pane_g1

0x0860,	// (0x00008c09) compa_mode_pane_g2

0x0868,	// (0x00008c11) compa_mode_pane_g3

0x0002,

0xfdba,	// (0x00018163) compa_mode_pane_g

0x0870,	// (0x00008c19) main_comp_mode_itu_pane_cp

0x0878,	// (0x00008c21) main_comp_mode_rocker_pane_cp

0x0880,	// (0x00008c29) cell_cmode_itu_pane_cp_ParamLimits

0x0880,	// (0x00008c29) cell_cmode_itu_pane_cp

0x0895,	// (0x00008c3e) cell_cmode_rocker_pane_cp_ParamLimits

0x0895,	// (0x00008c3e) cell_cmode_rocker_pane_cp

0x97a5,	// (0x00011b4e) bg_button_pane_cp06_cp_ParamLimits

0x97a5,	// (0x00011b4e) bg_button_pane_cp06_cp

0xd711,	// (0x00015aba) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xd711,	// (0x00015aba) cell_cmode_rocker_pane_g1_cp

0xd4d9,	// (0x00015882) cell_cmode_rocker_pane_g2_cp

0x88c4,	// (0x00010c6d) bg_button_pane_cp07_cp

0x08a7,	// (0x00008c50) cell_cmode_itu_pane_g1_cp

0x08b0,	// (0x00008c59) cell_cmode_itu_pane_t1_cp

0x08be,	// (0x00008c67) cell_cmode_itu_pane_t2_cp

0xc265,	// (0x0001460e) settings_code_pane_cp2

0x8a95,	// (0x00010e3e) bg_popup_window_pane_cp3_ParamLimits

0x8f3a,	// (0x000112e3) heading_pane_cp3_ParamLimits

0x8f46,	// (0x000112ef) listscroll_popup_graphic_pane_ParamLimits

0x799a,	// (0x0000fd43) fep_hwr_aid_pane_ParamLimits

0x7dfa,	// (0x000101a3) aid_touch_sctrl_top_ParamLimits

0x7e15,	// (0x000101be) sctrl_sk_top_pane_g1_ParamLimits

0x7bdf,	// (0x0000ff88) sctrl_sk_top_pane_g2_ParamLimits

0xfcf0,	// (0x00018099) sctrl_sk_top_pane_g_ParamLimits

0x7e22,	// (0x000101cb) sctrl_sk_top_pane_t1_ParamLimits

0x7dfa,	// (0x000101a3) aid_touch_sctrl_bottom_ParamLimits

0x7e22,	// (0x000101cb) sctrl_sk_bottom_pane_t1_ParamLimits

0xf001,	// (0x000173aa) aid_area_touch_clock

0x7fe8,	// (0x00010391) aid_vkb2_area_top_pane_cell_ParamLimits

0x7fe8,	// (0x00010391) aid_vkb2_area_top_pane_cell

0x8113,	// (0x000104bc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8113,	// (0x000104bc) aid_vkb2_area_bottom_pane_cell

0x02e9,	// (0x00008692) popup_char_count_window

0x08cc,	// (0x00008c75) popup_char_count_window_g1

0x08d5,	// (0x00008c7e) popup_char_count_window_g2

0x08de,	// (0x00008c87) popup_char_count_window_g3

0x0002,

0xfdc1,	// (0x0001816a) popup_char_count_window_g

0x08e7,	// (0x00008c90) popup_char_count_window_t1

0x7ed6,	// (0x0001027f) popup_fep_char_preview_window_ParamLimits

0x7ed6,	// (0x0001027f) popup_fep_char_preview_window

0x8006,	// (0x000103af) vkb2_top_candi_pane_ParamLimits

0x8006,	// (0x000103af) vkb2_top_candi_pane

0x08f5,	// (0x00008c9e) cell_vkb2_top_candi_pane_ParamLimits

0x08f5,	// (0x00008c9e) cell_vkb2_top_candi_pane

0x83d4,	// (0x0001077d) bg_popup_fep_char_preview_window_ParamLimits

0x83d4,	// (0x0001077d) bg_popup_fep_char_preview_window

0x83e2,	// (0x0001078b) popup_fep_char_preview_window_t1_ParamLimits

0x83e2,	// (0x0001078b) popup_fep_char_preview_window_t1

0x0978,	// (0x00008d21) bg_popup_fep_char_preview_window_g1

0x0970,	// (0x00008d19) bg_popup_fep_char_preview_window_g2

0x0968,	// (0x00008d11) bg_popup_fep_char_preview_window_g3

0x09a0,	// (0x00008d49) bg_popup_fep_char_preview_window_g4

0x0998,	// (0x00008d41) bg_popup_fep_char_preview_window_g5

0x841c,	// (0x000107c5) bg_popup_fep_char_preview_window_g6

0x0988,	// (0x00008d31) bg_popup_fep_char_preview_window_g7

0x0980,	// (0x00008d29) bg_popup_fep_char_preview_window_g8

0x09a8,	// (0x00008d51) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc8,	// (0x00018171) bg_popup_fep_char_preview_window_g

0x7bdf,	// (0x0000ff88) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7bdf,	// (0x0000ff88) cell_vkb2_top_candi_pane_g1

0x7bed,	// (0x0000ff96) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7bed,	// (0x0000ff96) cell_vkb2_top_candi_pane_g2

0x09d1,	// (0x00008d7a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x09d1,	// (0x00008d7a) cell_vkb2_top_candi_pane_g3

0x8424,	// (0x000107cd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8424,	// (0x000107cd) cell_vkb2_top_candi_pane_g4

0xdadb,	// (0x00015e84) cell_vkb2_top_candi_pane_g5_ParamLimits

0xdadb,	// (0x00015e84) cell_vkb2_top_candi_pane_g5

0x8445,	// (0x000107ee) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8445,	// (0x000107ee) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddb,	// (0x00018184) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddb,	// (0x00018184) cell_vkb2_top_candi_pane_g

0x8453,	// (0x000107fc) cell_vkb2_top_candi_pane_t1

0x77b2,	// (0x0000fb5b) aid_size_touch_slider_mark_ParamLimits

0x77b2,	// (0x0000fb5b) aid_size_touch_slider_mark

0x05cc,	// (0x00008975) grid_graphic2_catg_pane_ParamLimits

0x05cc,	// (0x00008975) grid_graphic2_catg_pane

0x064a,	// (0x000089f3) popup_grid_graphic2_window_t1_ParamLimits

0x064a,	// (0x000089f3) popup_grid_graphic2_window_t1

0x065c,	// (0x00008a05) popup_grid_graphic2_window_t2_ParamLimits

0x065c,	// (0x00008a05) popup_grid_graphic2_window_t2

0x0001,

0xfd96,	// (0x0001813f) popup_grid_graphic2_window_t_ParamLimits

0xfd96,	// (0x0001813f) popup_grid_graphic2_window_t

0x8d3c,	// (0x000110e5) bg_button_pane_cp05_ParamLimits

0x07a2,	// (0x00008b4b) cell_graphic2_control_pane_g1_ParamLimits

0x0a08,	// (0x00008db1) cell_graphic2_catg_pane_ParamLimits

0x0a08,	// (0x00008db1) cell_graphic2_catg_pane

0x88c4,	// (0x00010c6d) bg_button_pane_cp12

0x0a1a,	// (0x00008dc3) cell_graphic2_catg_pane_g1

0xefcd,	// (0x00017376) cell_tb_ext_pane_t1_ParamLimits

0x821e,	// (0x000105c7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x821e,	// (0x000105c7) vkb2_top_cell_right_narrow_pane

0x8236,	// (0x000105df) vkb2_top_cell_right_wide_pane_ParamLimits

0x8236,	// (0x000105df) vkb2_top_cell_right_wide_pane

0x798c,	// (0x0000fd35) bg_vkb2_func_pane_ParamLimits

0x798c,	// (0x0000fd35) bg_vkb2_func_pane

0x82a7,	// (0x00010650) vkb2_top_cell_left_pane_g1_ParamLimits

0x798c,	// (0x0000fd35) bg_vkb2_fuc_pane_cp03_ParamLimits

0x798c,	// (0x0000fd35) bg_vkb2_fuc_pane_cp03

0x8305,	// (0x000106ae) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xad85,	// (0x0001312e) bg_vkb2_func_pane_g1

0xad8d,	// (0x00013136) bg_vkb2_func_pane_g2

0xad9d,	// (0x00013146) bg_vkb2_func_pane_g3

0xad95,	// (0x0001313e) bg_vkb2_func_pane_g4

0xada5,	// (0x0001314e) bg_vkb2_func_pane_g5

0xadad,	// (0x00013156) bg_vkb2_func_pane_g6

0xadb5,	// (0x0001315e) bg_vkb2_func_pane_g7

0xadbd,	// (0x00013166) bg_vkb2_func_pane_g8

0xad7d,	// (0x00013126) bg_vkb2_func_pane_g9

0x0008,

0xfde8,	// (0x00018191) bg_vkb2_func_pane_g

0x798c,	// (0x0000fd35) bg_vkb2_fuc_pane_cp01_ParamLimits

0x798c,	// (0x0000fd35) bg_vkb2_fuc_pane_cp01

0x82a7,	// (0x00010650) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x82a7,	// (0x00010650) vkb2_top_cell_right_wide_pane_g1

0x798c,	// (0x0000fd35) bg_vkb2_fuc_pane_cp02_ParamLimits

0x798c,	// (0x0000fd35) bg_vkb2_fuc_pane_cp02

0x8305,	// (0x000106ae) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8305,	// (0x000106ae) vkb2_top_cell_right_narrow_pane_g1

0xec26,	// (0x00016fcf) aid_touch_area_decrease_ParamLimits

0xec26,	// (0x00016fcf) aid_touch_area_decrease

0xec3e,	// (0x00016fe7) aid_touch_area_increase_ParamLimits

0xec3e,	// (0x00016fe7) aid_touch_area_increase

0xec4a,	// (0x00016ff3) aid_touch_area_mute_ParamLimits

0xec4a,	// (0x00016ff3) aid_touch_area_mute

0xec66,	// (0x0001700f) aid_touch_area_slider_ParamLimits

0xec66,	// (0x0001700f) aid_touch_area_slider

0xed4c,	// (0x000170f5) popup_slider_window_g4_ParamLimits

0xed4c,	// (0x000170f5) popup_slider_window_g4

0xed58,	// (0x00017101) popup_slider_window_g5_ParamLimits

0xed58,	// (0x00017101) popup_slider_window_g5

0xed7a,	// (0x00017123) popup_slider_window_g6_ParamLimits

0xed7a,	// (0x00017123) popup_slider_window_g6

0xedb8,	// (0x00017161) popup_slider_window_t2_ParamLimits

0xedb8,	// (0x00017161) popup_slider_window_t2

0x0001,

0xfce4,	// (0x0001808d) popup_slider_window_t_ParamLimits

0xfce4,	// (0x0001808d) popup_slider_window_t

0xedd0,	// (0x00017179) slider_pane_ParamLimits

0xedd0,	// (0x00017179) slider_pane

0x0a23,	// (0x00008dcc) slider_pane_g1_ParamLimits

0x0a23,	// (0x00008dcc) slider_pane_g1

0x0a37,	// (0x00008de0) slider_pane_g2_ParamLimits

0x0a37,	// (0x00008de0) slider_pane_g2

0x0a4d,	// (0x00008df6) slider_pane_g3_ParamLimits

0x0a4d,	// (0x00008df6) slider_pane_g3

0x0003,

0xfdfb,	// (0x000181a4) slider_pane_g_ParamLimits

0xfdfb,	// (0x000181a4) slider_pane_g

0x73b4,	// (0x0000f75d) popup_tb_float_extension_window_ParamLimits

0x73b4,	// (0x0000f75d) popup_tb_float_extension_window

0x0a79,	// (0x00008e22) aid_size_cell_tb_float_ext

0x88c4,	// (0x00010c6d) bg_popup_sub_window_cp28

0x0a84,	// (0x00008e2d) grid_tb_float_ext_pane

0x0a8c,	// (0x00008e35) cell_tb_float_ext_pane_ParamLimits

0x0a8c,	// (0x00008e35) cell_tb_float_ext_pane

0x0aa4,	// (0x00008e4d) cell_tb_float_ext_pane_g1

0x0aad,	// (0x00008e56) grid_highlight_pane_cp12

0x7ad5,	// (0x0000fe7e) cell_last_hwr_side_pane_ParamLimits

0x7ad5,	// (0x0000fe7e) cell_last_hwr_side_pane

0xd4d9,	// (0x00015882) cell_last_hwr_side_pane_g1

0x0ab6,	// (0x00008e5f) cell_last_hwr_side_pane_g2

0x0001,

0xfe04,	// (0x000181ad) cell_last_hwr_side_pane_g

0x81db,	// (0x00010584) vkb2_area_bottom_space_btn_pane_ParamLimits

0x81db,	// (0x00010584) vkb2_area_bottom_space_btn_pane

0x7bdf,	// (0x0000ff88) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x0546,	// (0x000088ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8453,	// (0x000107fc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8469,	// (0x00010812) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8469,	// (0x00010812) vkb2_area_bottom_space_btn_pane_g1

0x849f,	// (0x00010848) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x849f,	// (0x00010848) vkb2_area_bottom_space_btn_pane_g2

0x84d5,	// (0x0001087e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x84d5,	// (0x0001087e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe09,	// (0x000181b2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe09,	// (0x000181b2) vkb2_area_bottom_space_btn_pane_g

0x7a49,	// (0x0000fdf2) cel_fep_hwr_func_pane_ParamLimits

0x7a49,	// (0x0000fdf2) cel_fep_hwr_func_pane

0x7a85,	// (0x0000fe2e) cell_hwr_side_button_pane_ParamLimits

0x7a85,	// (0x0000fe2e) cell_hwr_side_button_pane

0xf001,	// (0x000173aa) aid_area_touch_clock_ParamLimits

0x8d3c,	// (0x000110e5) bg_uniindi_top_pane_ParamLimits

0xf013,	// (0x000173bc) uniindi_top_pane_g1_ParamLimits

0xf029,	// (0x000173d2) uniindi_top_pane_g2_ParamLimits

0xf035,	// (0x000173de) uniindi_top_pane_g3_ParamLimits

0xf046,	// (0x000173ef) uniindi_top_pane_g4_ParamLimits

0xfd1c,	// (0x000180c5) uniindi_top_pane_g_ParamLimits

0xf053,	// (0x000173fc) uniindi_top_pane_t1_ParamLimits

0x8d3c,	// (0x000110e5) bg_vkb2_func_pane_cp01_ParamLimits

0x8d3c,	// (0x000110e5) bg_vkb2_func_pane_cp01

0x0b71,	// (0x00008f1a) cel_fep_hwr_func_pane_g1_ParamLimits

0x0b71,	// (0x00008f1a) cel_fep_hwr_func_pane_g1

0x8d3c,	// (0x000110e5) bg_vkb2_func_pane_cp02_ParamLimits

0x8d3c,	// (0x000110e5) bg_vkb2_func_pane_cp02

0x0b71,	// (0x00008f1a) cell_hwr_side_button_pane_g1_ParamLimits

0x0b71,	// (0x00008f1a) cell_hwr_side_button_pane_g1

0xac11,	// (0x00012fba) status_pane_g4_ParamLimits

0xac11,	// (0x00012fba) status_pane_g4

0xac29,	// (0x00012fd2) status_pane_t1

0xd2bb,	// (0x00015664) form2_midp_gauge_slider_cont_pane

0xd2c3,	// (0x0001566c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd2d5,	// (0x0001567e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd2e7,	// (0x00015690) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae3,	// (0x00017e8c) form2_midp_gauge_slider_pane_t_ParamLimits

0xd2f9,	// (0x000156a2) form2_midp_slider_pane_ParamLimits

0x7e96,	// (0x0001023f) aid_size_cell_func_vkb2_ParamLimits

0x7e96,	// (0x0001023f) aid_size_cell_func_vkb2

0x0a65,	// (0x00008e0e) slider_pane_g4_ParamLimits

0x0a65,	// (0x00008e0e) slider_pane_g4

0x851b,	// (0x000108c4) form2_midp_gauge_slider_pane_t2_cp01

0x8529,	// (0x000108d2) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8529,	// (0x000108d2) form2_midp_gauge_slider_pane_t3_cp01

0x8546,	// (0x000108ef) form2_midp_slider_pane_cp01

0x88c4,	// (0x00010c6d) navi_smil_pane

0x0bde,	// (0x00008f87) navi_smil_pane_g1

0x0be6,	// (0x00008f8f) navi_smil_pane_t1

0x0bb3,	// (0x00008f5c) form2_midp_slider_pane_g1

0x0bbc,	// (0x00008f65) form2_midp_slider_pane_g2

0x0bc4,	// (0x00008f6d) form2_midp_slider_pane_g3

0x0bb3,	// (0x00008f5c) form2_midp_slider_pane_g4

0x0bcc,	// (0x00008f75) form2_midp_slider_pane_g5

0x0004,

0xfe12,	// (0x000181bb) form2_midp_slider_pane_g

0x850b,	// (0x000108b4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x850b,	// (0x000108b4) vkb2_area_bottom_space_btn_pane_g4

0xaa53,	// (0x00012dfc) lc0_navi_pane_ParamLimits

0xaa53,	// (0x00012dfc) lc0_navi_pane

0xaac9,	// (0x00012e72) lc0_stat_indi_pane_ParamLimits

0xaac9,	// (0x00012e72) lc0_stat_indi_pane

0xaae0,	// (0x00012e89) ls0_title_pane_ParamLimits

0xaae0,	// (0x00012e89) ls0_title_pane

0x97a5,	// (0x00011b4e) bg_popup_sub_pane_cp14_ParamLimits

0xefe8,	// (0x00017391) list_uniindi_pane_ParamLimits

0xeff4,	// (0x0001739d) uniindi_top_pane_ParamLimits

0xf08f,	// (0x00017438) list_single_uniindi_pane_g1_ParamLimits

0xf0a2,	// (0x0001744b) list_single_uniindi_pane_t1_ParamLimits

0x854f,	// (0x000108f8) lc0_stat_clock_pane_ParamLimits

0x854f,	// (0x000108f8) lc0_stat_clock_pane

0x0c0e,	// (0x00008fb7) lc0_stat_indi_pane_g1_ParamLimits

0x0c0e,	// (0x00008fb7) lc0_stat_indi_pane_g1

0x0c01,	// (0x00008faa) lc0_stat_indi_pane_g2_ParamLimits

0x0c01,	// (0x00008faa) lc0_stat_indi_pane_g2

0x0001,

0xfe1d,	// (0x000181c6) lc0_stat_indi_pane_g_ParamLimits

0xfe1d,	// (0x000181c6) lc0_stat_indi_pane_g

0x855c,	// (0x00010905) lc0_uni_indicator_pane_ParamLimits

0x855c,	// (0x00010905) lc0_uni_indicator_pane

0x0c28,	// (0x00008fd1) ls0_title_pane_g1_ParamLimits

0x0c28,	// (0x00008fd1) ls0_title_pane_g1

0x0c3c,	// (0x00008fe5) ls0_title_pane_t1_ParamLimits

0x0c3c,	// (0x00008fe5) ls0_title_pane_t1

0x8569,	// (0x00010912) lc0_uni_indicator_pane_g1_ParamLimits

0x8569,	// (0x00010912) lc0_uni_indicator_pane_g1

0x0c84,	// (0x0000902d) lc0_stat_clock_pane_t1

0x67c8,	// (0x0000eb71) main_ai5_pane

0x0c92,	// (0x0000903b) ai5_sk_pane_ParamLimits

0x0c92,	// (0x0000903b) ai5_sk_pane

0x0c9f,	// (0x00009048) cell_ai5_widget_pane_ParamLimits

0x0c9f,	// (0x00009048) cell_ai5_widget_pane

0x0d15,	// (0x000090be) aid_size_cell_widget_grid

0x0d22,	// (0x000090cb) bg_ai5_widget_pane_ParamLimits

0x0d22,	// (0x000090cb) bg_ai5_widget_pane

0x0d77,	// (0x00009120) cell_ai5_widget_pane_g2

0x0d8b,	// (0x00009134) cell_ai5_widget_pane_g3

0x0da5,	// (0x0000914e) cell_ai5_widget_pane_g4

0x0db5,	// (0x0000915e) cell_ai5_widget_pane_g5

0x0dc5,	// (0x0000916e) cell_ai5_widget_pane_g6

0x0dd1,	// (0x0000917a) cell_ai5_widget_pane_g7

0x0e19,	// (0x000091c2) cell_ai5_widget_pane_t1_ParamLimits

0x0e19,	// (0x000091c2) cell_ai5_widget_pane_t1

0x0e36,	// (0x000091df) cell_ai5_widget_pane_t2_ParamLimits

0x0e36,	// (0x000091df) cell_ai5_widget_pane_t2

0x0e4e,	// (0x000091f7) cell_ai5_widget_pane_t3_ParamLimits

0x0e4e,	// (0x000091f7) cell_ai5_widget_pane_t3

0x0e66,	// (0x0000920f) cell_ai5_widget_pane_t4_ParamLimits

0x0e66,	// (0x0000920f) cell_ai5_widget_pane_t4

0x0e8c,	// (0x00009235) cell_ai5_widget_pane_t5_ParamLimits

0x0e8c,	// (0x00009235) cell_ai5_widget_pane_t5

0x0eab,	// (0x00009254) cell_ai5_widget_pane_t6_ParamLimits

0x0eab,	// (0x00009254) cell_ai5_widget_pane_t6

0x0ebd,	// (0x00009266) cell_ai5_widget_pane_t7_ParamLimits

0x0ebd,	// (0x00009266) cell_ai5_widget_pane_t7

0x0ed6,	// (0x0000927f) cell_ai5_widget_pane_t8_ParamLimits

0x0ed6,	// (0x0000927f) cell_ai5_widget_pane_t8

0x0009,

0xfe37,	// (0x000181e0) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x000181e0) cell_ai5_widget_pane_t

0x0f35,	// (0x000092de) grid_ai5_widget_pane

0x97a5,	// (0x00011b4e) highlight_cell_ai5_widget_pane_ParamLimits

0x97a5,	// (0x00011b4e) highlight_cell_ai5_widget_pane

0x0f41,	// (0x000092ea) ai5_sk_left_pane

0x0f4b,	// (0x000092f4) ai5_sk_middle_pane

0x0f55,	// (0x000092fe) ai5_sk_right_pane

0x0f5f,	// (0x00009308) bg_ai5_widget_pane_g1_ParamLimits

0x0f5f,	// (0x00009308) bg_ai5_widget_pane_g1

0x0f6b,	// (0x00009314) bg_ai5_widget_pane_g2_ParamLimits

0x0f6b,	// (0x00009314) bg_ai5_widget_pane_g2

0x0f77,	// (0x00009320) bg_ai5_widget_pane_g3_ParamLimits

0x0f77,	// (0x00009320) bg_ai5_widget_pane_g3

0x0f83,	// (0x0000932c) bg_ai5_widget_pane_g4_ParamLimits

0x0f83,	// (0x0000932c) bg_ai5_widget_pane_g4

0x0f8f,	// (0x00009338) bg_ai5_widget_pane_g5_ParamLimits

0x0f8f,	// (0x00009338) bg_ai5_widget_pane_g5

0x0f9b,	// (0x00009344) bg_ai5_widget_pane_g6_ParamLimits

0x0f9b,	// (0x00009344) bg_ai5_widget_pane_g6

0x0fa7,	// (0x00009350) bg_ai5_widget_pane_g7_ParamLimits

0x0fa7,	// (0x00009350) bg_ai5_widget_pane_g7

0x0fb3,	// (0x0000935c) bg_ai5_widget_pane_g8_ParamLimits

0x0fb3,	// (0x0000935c) bg_ai5_widget_pane_g8

0x0fbf,	// (0x00009368) bg_ai5_widget_pane_g9_ParamLimits

0x0fbf,	// (0x00009368) bg_ai5_widget_pane_g9

0x0008,

0xfe4c,	// (0x000181f5) bg_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x000181f5) bg_ai5_widget_pane_g

0x0fef,	// (0x00009398) cell_shortcut_ai5_widget_pane_ParamLimits

0x0fef,	// (0x00009398) cell_shortcut_ai5_widget_pane

0x1000,	// (0x000093a9) bg_cell_shortcut_ai5_widget_pane

0x8ef6,	// (0x0001129f) cell_grid_ai5_widget_pane_g1

0xa565,	// (0x0001290e) highlight_cell_shortcut_ai5_widget_pane

0xad85,	// (0x0001312e) ai5_sk_left_pane_g1

0x1008,	// (0x000093b1) ai5_sk_left_pane_g2

0x1010,	// (0x000093b9) ai5_sk_left_pane_g3

0x1018,	// (0x000093c1) ai5_sk_left_pane_g4

0x0003,

0xfe5f,	// (0x00018208) ai5_sk_left_pane_g

0x1020,	// (0x000093c9) ai5_sk_left_pane_t1

0xad8d,	// (0x00013136) ai5_sk_right_pane_g1

0x102e,	// (0x000093d7) ai5_sk_right_pane_g2

0x1036,	// (0x000093df) ai5_sk_right_pane_g3

0x103e,	// (0x000093e7) ai5_sk_right_pane_g4

0x0003,

0xfe68,	// (0x00018211) ai5_sk_right_pane_g

0x1046,	// (0x000093ef) ai5_sk_right_pane_t1

0xad8d,	// (0x00013136) ai5_sk_middle_pane_g1

0xad85,	// (0x0001312e) ai5_sk_middle_pane_g2

0xada5,	// (0x0001314e) ai5_sk_middle_pane_g3

0x1036,	// (0x000093df) ai5_sk_middle_pane_g4

0x1010,	// (0x000093b9) ai5_sk_middle_pane_g5

0x1054,	// (0x000093fd) ai5_sk_middle_pane_g6

0x105c,	// (0x00009405) ai5_sk_middle_pane_g7

0x0006,

0xfe71,	// (0x0001821a) ai5_sk_middle_pane_g

0xa8fa,	// (0x00012ca3) aid_touch_area_size_lc0_ParamLimits

0xa8fa,	// (0x00012ca3) aid_touch_area_size_lc0

0x7c0e,	// (0x0000ffb7) cell_hwr_candidate_pane_t1_ParamLimits

0xa914,	// (0x00012cbd) aid_touch_navi_pane

0xabc3,	// (0x00012f6c) status_dt_navi_pane_ParamLimits

0xabc3,	// (0x00012f6c) status_dt_navi_pane

0xabd0,	// (0x00012f79) status_dt_sta_pane_ParamLimits

0xabd0,	// (0x00012f79) status_dt_sta_pane

0x1064,	// (0x0000940d) dt_sta_controll_pane

0x1071,	// (0x0000941a) dt_sta_indi_pane

0x1082,	// (0x0000942b) dt_sta_title_pane

0x8d3c,	// (0x000110e5) bg_dt_sta_indi_pane_ParamLimits

0x8d3c,	// (0x000110e5) bg_dt_sta_indi_pane

0x1095,	// (0x0000943e) dt_sta_battery_pane

0x109d,	// (0x00009446) dt_sta_indi_pane_g1

0x10a6,	// (0x0000944f) dt_sta_indi_pane_g2

0x10af,	// (0x00009458) dt_sta_indi_pane_g3

0x0002,

0xfe80,	// (0x00018229) dt_sta_indi_pane_g

0x10b8,	// (0x00009461) dt_sta_signal_pane

0x97a5,	// (0x00011b4e) bg_dt_sta_title_pane_ParamLimits

0x97a5,	// (0x00011b4e) bg_dt_sta_title_pane

0x10c1,	// (0x0000946a) dt_sta_title_pane_g1

0x10c9,	// (0x00009472) dt_sta_title_pane_t1_ParamLimits

0x10c9,	// (0x00009472) dt_sta_title_pane_t1

0x88c4,	// (0x00010c6d) bg_dt_sta_control_pane

0x10de,	// (0x00009487) dt_sta_controll_pane_g1

0x10e7,	// (0x00009490) bg_dt_sta_title_pane_g1

0x10f0,	// (0x00009499) bg_dt_sta_title_pane_g2

0x10f9,	// (0x000094a2) bg_dt_sta_title_pane_g3

0x0002,

0xfe87,	// (0x00018230) bg_dt_sta_title_pane_g

0xd4d9,	// (0x00015882) bg_dt_sta_indi_pane_g1

0x1102,	// (0x000094ab) dt_sta_signal_pane_g1

0x110a,	// (0x000094b3) dt_sta_signal_pane_g2

0x0001,

0xfe8e,	// (0x00018237) dt_sta_signal_pane_g

0x1112,	// (0x000094bb) dt_sta_battery_pane_g1

0x111b,	// (0x000094c4) dt_sta_battery_pane_t1

0xd4d9,	// (0x00015882) bg_dt_sta_control_pane_g1

0xa05a,	// (0x00012403) fep_china_uni_eep_pane

0xa062,	// (0x0001240b) fep_china_uni_entry_pane_ParamLimits

0xa072,	// (0x0001241b) popup_fep_china_uni_window_g1_ParamLimits

0xa082,	// (0x0001242b) popup_fep_china_uni_window_g2_ParamLimits

0xa082,	// (0x0001242b) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00017ac1) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00017ac1) popup_fep_china_uni_window_g

0x112a,	// (0x000094d3) fep_china_uni_eep_pane_g1

0x1132,	// (0x000094db) fep_china_uni_eep_pane_t1

0x0bd5,	// (0x00008f7e) aid_touch_area_size_smil_player

0xaa4b,	// (0x00012df4) lc0_clock_pane

0xac1d,	// (0x00012fc6) status_pane_g5_ParamLimits

0xac1d,	// (0x00012fc6) status_pane_g5

0x7128,	// (0x0000f4d1) popup_keymap_window

0xabe5,	// (0x00012f8e) status_icon_pane

0x0d8b,	// (0x00009134) cell_ai5_widget_pane_g3_ParamLimits

0x0da5,	// (0x0000914e) cell_ai5_widget_pane_g4_ParamLimits

0x0db5,	// (0x0000915e) cell_ai5_widget_pane_g5_ParamLimits

0x0ddd,	// (0x00009186) cell_ai5_widget_pane_g8_ParamLimits

0x0ddd,	// (0x00009186) cell_ai5_widget_pane_g8

0x0df1,	// (0x0000919a) cell_ai5_widget_pane_g9_ParamLimits

0x0df1,	// (0x0000919a) cell_ai5_widget_pane_g9

0x0e05,	// (0x000091ae) cell_ai5_widget_pane_g10_ParamLimits

0x0e05,	// (0x000091ae) cell_ai5_widget_pane_g10

0x1141,	// (0x000094ea) status_icon_pane_g1

0x88c4,	// (0x00010c6d) bg_popup_sub_pane_cp13

0x1149,	// (0x000094f2) popup_keymap_window_t1

0xa82a,	// (0x00012bd3) control_pane_g6_ParamLimits

0xa82a,	// (0x00012bd3) control_pane_g6

0xa837,	// (0x00012be0) control_pane_g7_ParamLimits

0xa837,	// (0x00012be0) control_pane_g7

0xa844,	// (0x00012bed) control_pane_g8_ParamLimits

0xa844,	// (0x00012bed) control_pane_g8

0x1064,	// (0x0000940d) dt_sta_controll_pane_ParamLimits

0x1071,	// (0x0000941a) dt_sta_indi_pane_ParamLimits

0x1082,	// (0x0000942b) dt_sta_title_pane_ParamLimits

0x91c1,	// (0x0001156a) aid_size_touch_scroll_bar_cale

0x689f,	// (0x0000ec48) popup_discreet_window_ParamLimits

0x689f,	// (0x0000ec48) popup_discreet_window

0x6903,	// (0x0000ecac) popup_sk_window

0xb463,	// (0x0001380c) bg_popup_sub_pane_cp28_ParamLimits

0xb463,	// (0x0001380c) bg_popup_sub_pane_cp28

0x1157,	// (0x00009500) popup_discreet_window_g1_ParamLimits

0x1157,	// (0x00009500) popup_discreet_window_g1

0x1177,	// (0x00009520) popup_discreet_window_t1_ParamLimits

0x1177,	// (0x00009520) popup_discreet_window_t1

0x1195,	// (0x0000953e) popup_discreet_window_t2_ParamLimits

0x1195,	// (0x0000953e) popup_discreet_window_t2

0x0002,

0xfe93,	// (0x0001823c) popup_discreet_window_t_ParamLimits

0xfe93,	// (0x0001823c) popup_discreet_window_t

0x857b,	// (0x00010924) popup_sk_window_g1

0x8584,	// (0x0001092d) popup_sk_window_g2

0x0001,

0xfe9a,	// (0x00018243) popup_sk_window_g

0x858d,	// (0x00010936) popup_sk_window_t1

0x859b,	// (0x00010944) popup_sk_window_t1_copy1

0x0d77,	// (0x00009120) cell_ai5_widget_pane_g2_ParamLimits

0x0ee8,	// (0x00009291) cell_ai5_widget_pane_t9_ParamLimits

0x0ee8,	// (0x00009291) cell_ai5_widget_pane_t9

0x88c4,	// (0x00010c6d) main_fep_fshwr2_pane

0x85a9,	// (0x00010952) aid_fshwr2_btn_pane

0x85b5,	// (0x0001095e) aid_fshwr2_syb_pane

0x85c7,	// (0x00010970) aid_fshwr2_txt_pane

0x85d3,	// (0x0001097c) fshwr2_func_candi_pane

0x85e7,	// (0x00010990) fshwr2_hwr_syb_pane

0x85f9,	// (0x000109a2) fshwr2_icf_pane

0x67c8,	// (0x0000eb71) fshwr2_icf_bg_pane

0x8621,	// (0x000109ca) fshwr2_icf_pane_t1_ParamLimits

0x8621,	// (0x000109ca) fshwr2_icf_pane_t1

0x9f60,	// (0x00012309) fshwr2_func_candi_pane_g1

0x12a5,	// (0x0000964e) fshwr2_func_candi_row_pane_ParamLimits

0x12a5,	// (0x0000964e) fshwr2_func_candi_row_pane

0x8639,	// (0x000109e2) cell_fshwr2_syb_pane_ParamLimits

0x8639,	// (0x000109e2) cell_fshwr2_syb_pane

0x8658,	// (0x00010a01) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8658,	// (0x00010a01) fshwr2_hwr_syb_pane_g1

0x67c8,	// (0x0000eb71) bg_popup_call_pane_cp01

0x8666,	// (0x00010a0f) fshwr2_func_candi_cell_pane_ParamLimits

0x8666,	// (0x00010a0f) fshwr2_func_candi_cell_pane

0xba7f,	// (0x00013e28) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xba7f,	// (0x00013e28) fshwr2_func_candi_cell_bg_pane

0x86a5,	// (0x00010a4e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x86a5,	// (0x00010a4e) fshwr2_func_candi_cell_pane_g1

0x86c5,	// (0x00010a6e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x86c5,	// (0x00010a6e) fshwr2_func_candi_cell_pane_t1

0x67c8,	// (0x0000eb71) bg_button_pane_cp08

0xa8b4,	// (0x00012c5d) cell_fshwr2_syb_bg_pane

0x86d8,	// (0x00010a81) cell_fshwr2_syb_bg_pane_g1

0x86ec,	// (0x00010a95) cell_fshwr2_syb_bg_pane_t1

0x97a5,	// (0x00011b4e) main_tmo_pane

0xbf0b,	// (0x000142b4) uni_indicator_pane_g1_ParamLimits

0xbf21,	// (0x000142ca) uni_indicator_pane_g2_ParamLimits

0xbf37,	// (0x000142e0) uni_indicator_pane_g3_ParamLimits

0xbf4c,	// (0x000142f5) uni_indicator_pane_g4_ParamLimits

0xbf4c,	// (0x000142f5) uni_indicator_pane_g4

0xbf60,	// (0x00014309) uni_indicator_pane_g5_ParamLimits

0xbf60,	// (0x00014309) uni_indicator_pane_g5

0xbf60,	// (0x00014309) uni_indicator_pane_g6_ParamLimits

0xbf60,	// (0x00014309) uni_indicator_pane_g6

0xf910,	// (0x00017cb9) uni_indicator_pane_g_ParamLimits

0xec0a,	// (0x00016fb3) popup_tmo_note_window_ParamLimits

0xec0a,	// (0x00016fb3) popup_tmo_note_window

0x7e72,	// (0x0001021b) fshwr2_bg_pane

0x86b6,	// (0x00010a5f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x86b6,	// (0x00010a5f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9f,	// (0x00018248) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9f,	// (0x00018248) fshwr2_func_candi_cell_pane_g

0x7bc7,	// (0x0000ff70) bg_popup_window_pane_cp01

0x8702,	// (0x00010aab) bg_popup_window_pane_g1_cp01

0x138c,	// (0x00009735) bg_popup_window_pane_cp22_ParamLimits

0x138c,	// (0x00009735) bg_popup_window_pane_cp22

0x139a,	// (0x00009743) listscroll_tmo_link_pane_ParamLimits

0x139a,	// (0x00009743) listscroll_tmo_link_pane

0x13da,	// (0x00009783) popup_tmo_note_window_g1_ParamLimits

0x13da,	// (0x00009783) popup_tmo_note_window_g1

0x13e7,	// (0x00009790) tmo_note_info_pane_ParamLimits

0x13e7,	// (0x00009790) tmo_note_info_pane

0x1401,	// (0x000097aa) list_tmo_note_info_pane_g1_ParamLimits

0x1401,	// (0x000097aa) list_tmo_note_info_pane_g1

0x1418,	// (0x000097c1) list_tmo_note_info_pane_g2_ParamLimits

0x1418,	// (0x000097c1) list_tmo_note_info_pane_g2

0x0001,

0xfea4,	// (0x0001824d) list_tmo_note_info_pane_g_ParamLimits

0xfea4,	// (0x0001824d) list_tmo_note_info_pane_g

0x1434,	// (0x000097dd) list_tmo_note_info_text_pane_ParamLimits

0x1434,	// (0x000097dd) list_tmo_note_info_text_pane

0x14b5,	// (0x0000985e) list_tmo_link_pane

0x14c2,	// (0x0000986b) scroll_pane_cp20

0x14cf,	// (0x00009878) list_single_tmo_link_pane_ParamLimits

0x14cf,	// (0x00009878) list_single_tmo_link_pane

0x14df,	// (0x00009888) list_single_tmo_link_pane_t1

0x14ed,	// (0x00009896) list_tmo_note_info_text_pane_t1_ParamLimits

0x14ed,	// (0x00009896) list_tmo_note_info_text_pane_t1

0x99c8,	// (0x00011d71) aid_size_touch_scroll_bar_cp01_ParamLimits

0x99c8,	// (0x00011d71) aid_size_touch_scroll_bar_cp01

0x9842,	// (0x00011beb) aid_size_touch_slider_marker

0x68ef,	// (0x0000ec98) popup_settings_window_ParamLimits

0x68ef,	// (0x0000ec98) popup_settings_window

0xa8ce,	// (0x00012c77) popup_candi_list_indi_window

0xa914,	// (0x00012cbd) aid_touch_navi_pane_ParamLimits

0x7dce,	// (0x00010177) rs_clock_indi_pane

0x7dd7,	// (0x00010180) sctrl_sk_bottom_pane_ParamLimits

0x7de8,	// (0x00010191) sctrl_sk_top_pane_ParamLimits

0x7ef0,	// (0x00010299) popup_fep_tooltip_window

0x0d15,	// (0x000090be) aid_size_cell_widget_grid_ParamLimits

0x0d63,	// (0x0000910c) cell_ai5_widget_pane_g1_ParamLimits

0x0d63,	// (0x0000910c) cell_ai5_widget_pane_g1

0x0dc5,	// (0x0000916e) cell_ai5_widget_pane_g6_ParamLimits

0x0dd1,	// (0x0000917a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe22,	// (0x000181cb) cell_ai5_widget_pane_g_ParamLimits

0xfe22,	// (0x000181cb) cell_ai5_widget_pane_g

0x0f17,	// (0x000092c0) cell_ai5_widget_pane_t10_ParamLimits

0x0f17,	// (0x000092c0) cell_ai5_widget_pane_t10

0x0f35,	// (0x000092de) grid_ai5_widget_pane_ParamLimits

0x0fcb,	// (0x00009374) cell_contacts_ai5_widget_pane_ParamLimits

0x0fcb,	// (0x00009374) cell_contacts_ai5_widget_pane

0x11aa,	// (0x00009553) popup_discreet_window_t3_ParamLimits

0x11aa,	// (0x00009553) popup_discreet_window_t3

0x860f,	// (0x000109b8) popup_fshwr2_char_preview_window_ParamLimits

0x860f,	// (0x000109b8) popup_fshwr2_char_preview_window

0x1452,	// (0x000097fb) tmo_note_info_pane_t1

0x1467,	// (0x00009810) tmo_note_info_pane_t2

0x147c,	// (0x00009825) tmo_note_info_pane_t3

0x1491,	// (0x0000983a) tmo_note_info_pane_t4

0x14a3,	// (0x0000984c) tmo_note_info_pane_t5

0x0004,

0xfea9,	// (0x00018252) tmo_note_info_pane_t

0x14b5,	// (0x0000985e) list_tmo_link_pane_ParamLimits

0x14c2,	// (0x0000986b) scroll_pane_cp20_ParamLimits

0x67c8,	// (0x0000eb71) bg_popup_fep_char_preview_window_cp01

0x1506,	// (0x000098af) popup_fshwr2_char_preview_window_t1

0x1514,	// (0x000098bd) popup_candi_list_indi_window_g1

0x151d,	// (0x000098c6) bg_cell_contacts_ai5_widget_pane

0x1529,	// (0x000098d2) cell_contacts_ai5_widget_pane_g1

0x153e,	// (0x000098e7) cell_contacts_ai5_widget_pane_g2

0x154a,	// (0x000098f3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb4,	// (0x0001825d) cell_contacts_ai5_widget_pane_g

0x1556,	// (0x000098ff) cell_contacts_ai5_widget_pane_t1

0x97a5,	// (0x00011b4e) highlight_cell_shortcut_ai5_widget_pane_cp01

0x15cb,	// (0x00009974) settings_container_pane

0xa565,	// (0x0001290e) listscroll_set_pane_copy1

0xca37,	// (0x00014de0) scroll_pane_cp121_copy1

0x15d7,	// (0x00009980) set_content_pane_copy1

0x15df,	// (0x00009988) aid_height_set_list_copy1_ParamLimits

0x15df,	// (0x00009988) aid_height_set_list_copy1

0xc137,	// (0x000144e0) aid_size_parent_copy1_ParamLimits

0xc137,	// (0x000144e0) aid_size_parent_copy1

0x15eb,	// (0x00009994) button_value_adjust_pane_cp6_copy1_ParamLimits

0x15eb,	// (0x00009994) button_value_adjust_pane_cp6_copy1

0xa8b4,	// (0x00012c5d) list_highlight_pane_cp2_copy1_ParamLimits

0xa8b4,	// (0x00012c5d) list_highlight_pane_cp2_copy1

0x15ff,	// (0x000099a8) list_set_pane_copy1_ParamLimits

0x15ff,	// (0x000099a8) list_set_pane_copy1

0x1568,	// (0x00009911) main_pane_set_t1_copy1_ParamLimits

0x1568,	// (0x00009911) main_pane_set_t1_copy1

0x15a2,	// (0x0000994b) main_pane_set_t2_copy1_ParamLimits

0x15a2,	// (0x0000994b) main_pane_set_t2_copy1

0x168d,	// (0x00009a36) main_pane_set_t3_copy1

0x169b,	// (0x00009a44) main_pane_set_t4_copy1

0x15bf,	// (0x00009968) set_content_pane_g1_copy1_ParamLimits

0x15bf,	// (0x00009968) set_content_pane_g1_copy1

0x16a9,	// (0x00009a52) setting_code_pane_copy1

0x16b1,	// (0x00009a5a) setting_slider_graphic_pane_copy1

0x16b1,	// (0x00009a5a) setting_slider_pane_copy1

0x16b1,	// (0x00009a5a) setting_text_pane_copy1

0x16b1,	// (0x00009a5a) setting_volume_pane_copy1

0x16b9,	// (0x00009a62) settings_code_pane_cp2_copy1

0x16c1,	// (0x00009a6a) settings_code_pane_cp_copy1_ParamLimits

0x16c1,	// (0x00009a6a) settings_code_pane_cp_copy1

0x870b,	// (0x00010ab4) volume_set_pane_copy1

0x16dd,	// (0x00009a86) volume_set_pane_g10_copy1

0x16e5,	// (0x00009a8e) volume_set_pane_g1_copy1

0x16ed,	// (0x00009a96) volume_set_pane_g2_copy1

0x16f5,	// (0x00009a9e) volume_set_pane_g3_copy1

0x16fd,	// (0x00009aa6) volume_set_pane_g4_copy1

0x1705,	// (0x00009aae) volume_set_pane_g5_copy1

0x170d,	// (0x00009ab6) volume_set_pane_g6_copy1

0x1715,	// (0x00009abe) volume_set_pane_g7_copy1

0x171d,	// (0x00009ac6) volume_set_pane_g8_copy1

0x1725,	// (0x00009ace) volume_set_pane_g9_copy1

0x8a95,	// (0x00010e3e) bg_set_opt_pane_cp_copy1_ParamLimits

0x8a95,	// (0x00010e3e) bg_set_opt_pane_cp_copy1

0x69d9,	// (0x0000ed82) setting_slider_pane_t1_copy1_ParamLimits

0x69d9,	// (0x0000ed82) setting_slider_pane_t1_copy1

0x8713,	// (0x00010abc) setting_slider_pane_t2_copy1_ParamLimits

0x8713,	// (0x00010abc) setting_slider_pane_t2_copy1

0x872c,	// (0x00010ad5) setting_slider_pane_t3_copy1_ParamLimits

0x872c,	// (0x00010ad5) setting_slider_pane_t3_copy1

0x6a1f,	// (0x0000edc8) slider_set_pane_copy1_ParamLimits

0x6a1f,	// (0x0000edc8) slider_set_pane_copy1

0x98c8,	// (0x00011c71) set_opt_bg_pane_g1_copy2

0x98d0,	// (0x00011c79) set_opt_bg_pane_g2_copy2

0x175d,	// (0x00009b06) set_opt_bg_pane_g3_copy2

0x98e0,	// (0x00011c89) set_opt_bg_pane_g4_copy2

0x98e8,	// (0x00011c91) set_opt_bg_pane_g5_copy2

0x98f0,	// (0x00011c99) set_opt_bg_pane_g6_copy2

0x1765,	// (0x00009b0e) set_opt_bg_pane_g7_copy2

0x176d,	// (0x00009b16) set_opt_bg_pane_g8_copy2

0x1775,	// (0x00009b1e) set_opt_bg_pane_g9_copy2

0x77b2,	// (0x0000fb5b) aid_size_touch_slider_mark_copy1_ParamLimits

0x77b2,	// (0x0000fb5b) aid_size_touch_slider_mark_copy1

0xc26d,	// (0x00014616) slider_set_pane_g1_copy1

0xc28f,	// (0x00014638) slider_set_pane_g2_copy1

0x77d2,	// (0x0000fb7b) slider_set_pane_g3_copy1_ParamLimits

0x77d2,	// (0x0000fb7b) slider_set_pane_g3_copy1

0x77e6,	// (0x0000fb8f) slider_set_pane_g4_copy1_ParamLimits

0x77e6,	// (0x0000fb8f) slider_set_pane_g4_copy1

0x77fe,	// (0x0000fba7) slider_set_pane_g5_copy1_ParamLimits

0x77fe,	// (0x0000fba7) slider_set_pane_g5_copy1

0x77d2,	// (0x0000fb7b) slider_set_pane_g6_copy1_ParamLimits

0x77d2,	// (0x0000fb7b) slider_set_pane_g6_copy1

0x8743,	// (0x00010aec) slider_set_pane_g7_copy1_ParamLimits

0x8743,	// (0x00010aec) slider_set_pane_g7_copy1

0x89b5,	// (0x00010d5e) bg_set_opt_pane_cp2_copy1

0x8ad7,	// (0x00010e80) setting_slider_graphic_pane_g1_copy1

0x8759,	// (0x00010b02) setting_slider_graphic_pane_t1_copy1

0x8768,	// (0x00010b11) setting_slider_graphic_pane_t2_copy1

0x8777,	// (0x00010b20) slider_set_pane_cp_copy1

0x17c1,	// (0x00009b6a) input_focus_pane_cp1_copy1

0x17ca,	// (0x00009b73) list_set_text_pane_copy1

0x17d2,	// (0x00009b7b) setting_text_pane_g1_copy1

0x17db,	// (0x00009b84) set_text_pane_t1_copy1

0x17c1,	// (0x00009b6a) input_focus_pane_cp2_copy1

0x17d2,	// (0x00009b7b) setting_code_pane_g1_copy1

0x17f4,	// (0x00009b9d) setting_code_pane_t1_copy1

0x1802,	// (0x00009bab) list_set_graphic_pane_copy1

0x89b5,	// (0x00010d5e) bg_set_opt_pane_cp4_copy1

0x1816,	// (0x00009bbf) list_set_graphic_pane_g1_copy1_ParamLimits

0x1816,	// (0x00009bbf) list_set_graphic_pane_g1_copy1

0x1822,	// (0x00009bcb) list_set_graphic_pane_g2_copy1

0xa2d7,	// (0x00012680) list_set_graphic_pane_t1_copy1_ParamLimits

0xa2d7,	// (0x00012680) list_set_graphic_pane_t1_copy1

0xd4d9,	// (0x00015882) rs_clock_indi_pane_g1

0x182a,	// (0x00009bd3) rs_clock_indi_pane_t1

0x1838,	// (0x00009be1) rs_indi_pane

0x1840,	// (0x00009be9) rs_indi_pane_g1

0x1849,	// (0x00009bf2) rs_indi_pane_g2

0x1514,	// (0x000098bd) rs_indi_pane_g3

0x0002,

0xfebb,	// (0x00018264) rs_indi_pane_g

0xa565,	// (0x0001290e) bg_popup_preview_window_pane_cp03

0x1852,	// (0x00009bfb) popup_fep_tooltip_window_t1

0xe2b8,	// (0x00016661) popup_note2_window_g2_ParamLimits

0xe2b8,	// (0x00016661) popup_note2_window_g2

0x0001,

0xfc5b,	// (0x00018004) popup_note2_window_g_ParamLimits

0xfc5b,	// (0x00018004) popup_note2_window_g

0xe899,	// (0x00016c42) bg_popup_sub_pane_cp11_ParamLimits

0xe8a6,	// (0x00016c4f) cell_ai3_links_pane_g1_ParamLimits

0xe8bd,	// (0x00016c66) cell_ai3_links_pane_t1

0x17db,	// (0x00009b84) set_text_pane_t1_copy1_ParamLimits

0xa48c,	// (0x00012835) cell_graphic_popup_pane_cp2_ParamLimits

0xa48c,	// (0x00012835) cell_graphic_popup_pane_cp2

0x1860,	// (0x00009c09) cell_graphic_popup_pane_g1_cp2

0x9070,	// (0x00011419) cell_graphic_popup_pane_g2_cp2

0x1868,	// (0x00009c11) cell_graphic_popup_pane_g3_cp2

0x1870,	// (0x00009c19) cell_graphic_popup_pane_t2_cp2

0x9081,	// (0x0001142a) grid_highlight_pane_cp3_cp2

0x9cb2,	// (0x0001205b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x97a5,	// (0x00011b4e) main_tmo_pane_ParamLimits

0xec02,	// (0x00016fab) popup_tmo_big_image_note_window

0x0d52,	// (0x000090fb) cell_ai5_widget_list_pane

0x0d5a,	// (0x00009103) cell_ai5_widget_lrg_icon_pane

0x1452,	// (0x000097fb) tmo_note_info_pane_t1_ParamLimits

0x1467,	// (0x00009810) tmo_note_info_pane_t2_ParamLimits

0x147c,	// (0x00009825) tmo_note_info_pane_t3_ParamLimits

0x1491,	// (0x0000983a) tmo_note_info_pane_t4_ParamLimits

0x14a3,	// (0x0000984c) tmo_note_info_pane_t5_ParamLimits

0xfea9,	// (0x00018252) tmo_note_info_pane_t_ParamLimits

0x15cb,	// (0x00009974) settings_container_pane_ParamLimits

0x17b9,	// (0x00009b62) indicator_popup_pane_cp5

0x17b9,	// (0x00009b62) indicator_popup_pane_cp6

0x1802,	// (0x00009bab) list_set_graphic_pane_copy1_ParamLimits

0x88c4,	// (0x00010c6d) bg_popup_window_pane_cp23

0x187e,	// (0x00009c27) popup_tmo_big_image_note_window_g1

0x1887,	// (0x00009c30) popup_tmo_big_image_note_window_t1

0x1895,	// (0x00009c3e) popup_tmo_big_image_note_window_t2

0x18a3,	// (0x00009c4c) popup_tmo_big_image_note_window_t3

0x0002,

0xfec2,	// (0x0001826b) popup_tmo_big_image_note_window_t

0xd4d9,	// (0x00015882) cell_ai5_widget_lrg_icon_pane_g1

0x18b1,	// (0x00009c5a) cell_ai5_widget_lrg_icon_pane_t1

0x18bf,	// (0x00009c68) cell_ai5_widget_list_row_pane_ParamLimits

0x18bf,	// (0x00009c68) cell_ai5_widget_list_row_pane

0x18d6,	// (0x00009c7f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x18d6,	// (0x00009c7f) cell_ai5_widget_list_row_pane_g1

0x18e3,	// (0x00009c8c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x18e3,	// (0x00009c8c) cell_ai5_widget_list_row_pane_t1

0x1911,	// (0x00009cba) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1911,	// (0x00009cba) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec9,	// (0x00018272) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec9,	// (0x00018272) cell_ai5_widget_list_row_pane_t

0x67c8,	// (0x0000eb71) main_fep_vtchi_ss_pane

0x1959,	// (0x00009d02) popup_fep_char_pre_window

0x1961,	// (0x00009d0a) popup_fep_ituss_window

0x1982,	// (0x00009d2b) popup_fep_vkbss_window

0x19a5,	// (0x00009d4e) grid_vkbss_keypad_pane_ParamLimits

0x19a5,	// (0x00009d4e) grid_vkbss_keypad_pane

0x19b5,	// (0x00009d5e) ituss_keypad_pane

0x8789,	// (0x00010b32) aid_vkbss_key_offset_ParamLimits

0x8789,	// (0x00010b32) aid_vkbss_key_offset

0x8795,	// (0x00010b3e) cell_vkbss_key_pane_ParamLimits

0x8795,	// (0x00010b3e) cell_vkbss_key_pane

0xabf9,	// (0x00012fa2) bg_cell_vkbss_key_g1_ParamLimits

0xabf9,	// (0x00012fa2) bg_cell_vkbss_key_g1

0x19f0,	// (0x00009d99) cell_vkbss_key_3p_pane_ParamLimits

0x19f0,	// (0x00009d99) cell_vkbss_key_3p_pane

0x1a0a,	// (0x00009db3) cell_vkbss_key_g1_ParamLimits

0x1a0a,	// (0x00009db3) cell_vkbss_key_g1

0x1a24,	// (0x00009dcd) cell_vkbss_key_t1_ParamLimits

0x1a24,	// (0x00009dcd) cell_vkbss_key_t1

0x87ab,	// (0x00010b54) cell_ituss_key_pane_ParamLimits

0x87ab,	// (0x00010b54) cell_ituss_key_pane

0x1a60,	// (0x00009e09) bg_cell_ituss_key_g1_ParamLimits

0x1a60,	// (0x00009e09) bg_cell_ituss_key_g1

0x1a6c,	// (0x00009e15) cell_ituss_key_pane_g1_ParamLimits

0x1a6c,	// (0x00009e15) cell_ituss_key_pane_g1

0x87bc,	// (0x00010b65) cell_ituss_key_pane_g2_ParamLimits

0x87bc,	// (0x00010b65) cell_ituss_key_pane_g2

0x0002,

0xfed0,	// (0x00018279) cell_ituss_key_pane_g_ParamLimits

0xfed0,	// (0x00018279) cell_ituss_key_pane_g

0x87e8,	// (0x00010b91) cell_ituss_key_t1_ParamLimits

0x87e8,	// (0x00010b91) cell_ituss_key_t1

0x881e,	// (0x00010bc7) cell_ituss_key_t2_ParamLimits

0x881e,	// (0x00010bc7) cell_ituss_key_t2

0x884f,	// (0x00010bf8) cell_ituss_key_t3_ParamLimits

0x884f,	// (0x00010bf8) cell_ituss_key_t3

0x881e,	// (0x00010bc7) cell_ituss_key_t4_ParamLimits

0x881e,	// (0x00010bc7) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x00018280) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00018280) cell_ituss_key_t

0x1b78,	// (0x00009f21) cell_vkbss_key_3p_pane_g1

0x1b70,	// (0x00009f19) cell_vkbss_key_3p_pane_g2

0x1b68,	// (0x00009f11) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x0001828b) cell_vkbss_key_3p_pane_g

0xa565,	// (0x0001290e) bg_popup_fep_char_preview_window_cp02

0x1b80,	// (0x00009f29) popup_fep_char_pre_window_t1

0x0d02,	// (0x000090ab) main_ai5_sk_pane

0x151d,	// (0x000098c6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1529,	// (0x000098d2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x153e,	// (0x000098e7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x154a,	// (0x000098f3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb4,	// (0x0001825d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1556,	// (0x000098ff) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x97a5,	// (0x00011b4e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1b8e,	// (0x00009f37) main_ai5_sk_pane_g1

0xb2ad,	// (0x00013656) popup_query_code_window_g1

0x1973,	// (0x00009d1c) popup_fep_vkb_icf_pane

0x198f,	// (0x00009d38) popup_fep_vtchi_icf_pane

0x1b97,	// (0x00009f40) bg_icf_pane

0x1ba3,	// (0x00009f4c) list_vkb_icf_pane

0x1baf,	// (0x00009f58) bg_icf_pane_cp01

0x1bc2,	// (0x00009f6b) vtchi_icf_list_pane

0x1bd2,	// (0x00009f7b) list_vkb_icf_pane_t1_ParamLimits

0x1bd2,	// (0x00009f7b) list_vkb_icf_pane_t1

0x1be4,	// (0x00009f8d) vtchi_icf_list_pane_t1_ParamLimits

0x1be4,	// (0x00009f8d) vtchi_icf_list_pane_t1

0x1961,	// (0x00009d0a) popup_fep_ituss_window_ParamLimits

0x198f,	// (0x00009d38) popup_fep_vtchi_icf_pane_ParamLimits

0x19b5,	// (0x00009d5e) ituss_keypad_pane_ParamLimits

0x877f,	// (0x00010b28) ituss_sks_pane

0x1b97,	// (0x00009f40) bg_icf_pane_ParamLimits

0x1939,	// (0x00009ce2) icf_edit_indi_pane_ParamLimits

0x1939,	// (0x00009ce2) icf_edit_indi_pane

0x1ba3,	// (0x00009f4c) list_vkb_icf_pane_ParamLimits

0x1baf,	// (0x00009f58) bg_icf_pane_cp01_ParamLimits

0x194c,	// (0x00009cf5) icf_edit_indi_pane_cp01_ParamLimits

0x194c,	// (0x00009cf5) icf_edit_indi_pane_cp01

0x1bca,	// (0x00009f73) vtchi_query_pane

0x0b71,	// (0x00008f1a) icf_edit_indi_pane_g1_ParamLimits

0x0b71,	// (0x00008f1a) icf_edit_indi_pane_g1

0x1c6d,	// (0x0000a016) icf_edit_indi_pane_g2_ParamLimits

0x1c6d,	// (0x0000a016) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x000182a3) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x000182a3) icf_edit_indi_pane_g

0x1c7d,	// (0x0000a026) icf_edit_indi_pane_t1

0x1bfb,	// (0x00009fa4) bg_input_focus_pane_cp042

0x1c04,	// (0x00009fad) vtchi_button_pane

0x1c0d,	// (0x00009fb6) vtchi_query_pane_t1

0x1c1b,	// (0x00009fc4) vtchi_query_pane_t2

0x1c29,	// (0x00009fd2) vtchi_query_pane_t3

0x0002,

0xfee9,	// (0x00018292) vtchi_query_pane_t

0x67c8,	// (0x0000eb71) bg_button_pane_cp13

0x1c37,	// (0x00009fe0) vtchi_button_pane_g1

0x8892,	// (0x00010c3b) ituss_sks_pane_g1

0x889b,	// (0x00010c44) ituss_sks_pane_g2

0x0001,

0xfef0,	// (0x00018299) ituss_sks_pane_g

0x1c5f,	// (0x0000a008) ituss_sks_pane_t1

0x1c51,	// (0x00009ffa) ituss_sks_pane_t2

0x0001,

0xfef5,	// (0x0001829e) ituss_sks_pane_t

0xcfd4,	// (0x0001537d) indicator_nsta_pane_cp_g1

0xcfdd,	// (0x00015386) indicator_nsta_pane_cp_g2

0xcfe5,	// (0x0001538e) indicator_nsta_pane_cp_g3

0xcfed,	// (0x00015396) indicator_nsta_pane_cp_g4

0xcff5,	// (0x0001539e) indicator_nsta_pane_cp_g5

0xcffd,	// (0x000153a6) indicator_nsta_pane_cp_g6

0x0005,

0xfa99,	// (0x00017e42) indicator_nsta_pane_cp_g

0x078f,	// (0x00008b38) cell_graphic2_pane_t2_ParamLimits

0x078f,	// (0x00008b38) cell_graphic2_pane_t2

0x0001,

0xfdab,	// (0x00018154) cell_graphic2_pane_t_ParamLimits

0xfdab,	// (0x00018154) cell_graphic2_pane_t

0x07bc,	// (0x00008b65) cell_graphic2_control_pane_t1

0xa00a,	// (0x000123b3) signal_pane_g3_ParamLimits

0xa00a,	// (0x000123b3) signal_pane_g3

0xa01b,	// (0x000123c4) signal_pane_g4_ParamLimits

0xa01b,	// (0x000123c4) signal_pane_g4

0x1923,	// (0x00009ccc) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x1923,	// (0x00009ccc) cell_ai5_widget_list_row_pane_t3

0x1aac,	// (0x00009e55) cell_ituss_key_pane_t1_ParamLimits

0x1aac,	// (0x00009e55) cell_ituss_key_pane_t1

0xaf1f,	// (0x000132c8) form_field_data_wide_pane_vc_t2_ParamLimits

0xaf1f,	// (0x000132c8) form_field_data_wide_pane_vc_t2

0xaf31,	// (0x000132da) form_field_data_wide_pane_vc_t3_ParamLimits

0xaf31,	// (0x000132da) form_field_data_wide_pane_vc_t3

0x0002,

0xf7f8,	// (0x00017ba1) form_field_data_wide_pane_vc_t_ParamLimits

0xf7f8,	// (0x00017ba1) form_field_data_wide_pane_vc_t

0xccd6,	// (0x0001507f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xccd6,	// (0x0001507f) form_field_slider_wide_pane_vc_t3

0xcd94,	// (0x0001513d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xcd94,	// (0x0001513d) form_field_popup_wide_pane_vc_t2

0xcda9,	// (0x00015152) form_field_popup_wide_pane_vc_t3_ParamLimits

0xcda9,	// (0x00015152) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa88,	// (0x00017e31) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa88,	// (0x00017e31) form_field_popup_wide_pane_vc_t

0x85a9,	// (0x00010952) aid_fshwr2_btn_pane_ParamLimits

0x85b5,	// (0x0001095e) aid_fshwr2_syb_pane_ParamLimits

0x85c7,	// (0x00010970) aid_fshwr2_txt_pane_ParamLimits

0x7e72,	// (0x0001021b) fshwr2_bg_pane_ParamLimits

0x85d3,	// (0x0001097c) fshwr2_func_candi_pane_ParamLimits

0x85e7,	// (0x00010990) fshwr2_hwr_syb_pane_ParamLimits

0x85f9,	// (0x000109a2) fshwr2_icf_pane_ParamLimits

0xcc51,	// (0x00014ffa) list_double_graphic_pane_vc_g4_ParamLimits

0xcc51,	// (0x00014ffa) list_double_graphic_pane_vc_g4

0x87dc,	// (0x00010b85) cell_ituss_key_pane_g3_ParamLimits

0x87dc,	// (0x00010b85) cell_ituss_key_pane_g3

0x8880,	// (0x00010c29) cell_ituss_key_t5_ParamLimits

0x8880,	// (0x00010c29) cell_ituss_key_t5

0x1982,	// (0x00009d2b) popup_fep_vkbss_window_ParamLimits

0x0d0c,	// (0x000090b5) aid_cell_ai5_quarter

0x1c7d,	// (0x0000a026) icf_edit_indi_pane_t1_ParamLimits

0x8de4,	// (0x0001118d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8de4,	// (0x0001118d) aid_tch_indicator_popup_pane_cp2

0x8df7,	// (0x000111a0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8df7,	// (0x000111a0) aid_tch_query_popup_data_pane_cp2

0xb255,	// (0x000135fe) aid_tch_query_popup_pane_ParamLimits

0xb255,	// (0x000135fe) aid_tch_query_popup_pane

0xb255,	// (0x000135fe) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xb255,	// (0x000135fe) aid_tch_query_popup_data_pane_cp1

0xa8b4,	// (0x00012c5d) cell_fshwr2_syb_bg_pane_ParamLimits

0x86d8,	// (0x00010a81) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x86ec,	// (0x00010a95) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x1973,	// (0x00009d1c) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal

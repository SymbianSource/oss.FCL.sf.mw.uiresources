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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005372e };

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
0x4adc,	// (0x0005820a) Screen

0x4ae8,	// (0x00058216) application_window_ParamLimits

0x4ae8,	// (0x00058216) application_window

0xb496,	// (0x0005ebc4) screen_g1

0x4b44,	// (0x00058272) area_bottom_pane_ParamLimits

0x4b44,	// (0x00058272) area_bottom_pane

0x4c04,	// (0x00058332) area_top_pane_ParamLimits

0x4c04,	// (0x00058332) area_top_pane

0x4ca2,	// (0x000583d0) main_pane_ParamLimits

0x4ca2,	// (0x000583d0) main_pane

0xb4a0,	// (0x0005ebce) misc_graphics

0x81e7,	// (0x0005b915) battery_pane_ParamLimits

0x81e7,	// (0x0005b915) battery_pane

0x8f39,	// (0x0005c667) bg_status_flat_pane_g8

0x8f41,	// (0x0005c66f) bg_status_flat_pane_g9

0x82af,	// (0x0005b9dd) context_pane_ParamLimits

0x82af,	// (0x0005b9dd) context_pane

0x83d3,	// (0x0005bb01) navi_pane_ParamLimits

0x83d3,	// (0x0005bb01) navi_pane

0x8463,	// (0x0005bb91) signal_pane_ParamLimits

0x8463,	// (0x0005bb91) signal_pane

0x0008,

0xf884,	// (0x00062fb2) bg_status_flat_pane_g

0x84d0,	// (0x0005bbfe) status_pane_g1_ParamLimits

0x84d0,	// (0x0005bbfe) status_pane_g1

0x84e4,	// (0x0005bc12) status_pane_g2_ParamLimits

0x84e4,	// (0x0005bc12) status_pane_g2

0x84f0,	// (0x0005bc1e) status_pane_g3_ParamLimits

0x84f0,	// (0x0005bc1e) status_pane_g3

0x0004,

0xf7ab,	// (0x00062ed9) status_pane_g_ParamLimits

0xf7ab,	// (0x00062ed9) status_pane_g

0x8524,	// (0x0005bc52) title_pane_ParamLimits

0x8524,	// (0x0005bc52) title_pane

0x8561,	// (0x0005bc8f) uni_indicator_pane_ParamLimits

0x8561,	// (0x0005bc8f) uni_indicator_pane

0x8101,	// (0x0005b82f) bg_list_pane_ParamLimits

0x8101,	// (0x0005b82f) bg_list_pane

0x8121,	// (0x0005b84f) find_pane

0x8129,	// (0x0005b857) listscroll_app_pane_ParamLimits

0x8129,	// (0x0005b857) listscroll_app_pane

0x8135,	// (0x0005b863) listscroll_form_pane

0x627e,	// (0x000599ac) listscroll_gen_pane_ParamLimits

0x627e,	// (0x000599ac) listscroll_gen_pane

0x8135,	// (0x0005b863) listscroll_set_pane

0x5996,	// (0x000590c4) main_idle_act_pane

0x7e03,	// (0x0005b531) main_idle_trad_pane

0x7e03,	// (0x0005b531) main_list_empty_pane

0x814f,	// (0x0005b87d) main_midp_pane

0x815b,	// (0x0005b889) main_pane_g1_ParamLimits

0x815b,	// (0x0005b889) main_pane_g1

0x62a0,	// (0x000599ce) popup_ai_message_window_ParamLimits

0x62a0,	// (0x000599ce) popup_ai_message_window

0x6354,	// (0x00059a82) popup_fep_china_uni_window_ParamLimits

0x6354,	// (0x00059a82) popup_fep_china_uni_window

0x63b4,	// (0x00059ae2) popup_fep_japan_candidate_window_ParamLimits

0x63b4,	// (0x00059ae2) popup_fep_japan_candidate_window

0x63de,	// (0x00059b0c) popup_fep_japan_predictive_window_ParamLimits

0x63de,	// (0x00059b0c) popup_fep_japan_predictive_window

0x6414,	// (0x00059b42) popup_find_window

0x6421,	// (0x00059b4f) popup_grid_graphic_window_ParamLimits

0x6421,	// (0x00059b4f) popup_grid_graphic_window

0x644f,	// (0x00059b7d) popup_large_graphic_colour_window

0x6475,	// (0x00059ba3) popup_menu_window_ParamLimits

0x6475,	// (0x00059ba3) popup_menu_window

0x663f,	// (0x00059d6d) popup_note_image_window

0x6629,	// (0x00059d57) popup_note_wait_window_ParamLimits

0x6629,	// (0x00059d57) popup_note_wait_window

0x6629,	// (0x00059d57) popup_note_window_ParamLimits

0x6629,	// (0x00059d57) popup_note_window

0x66a5,	// (0x00059dd3) popup_query_code_window_ParamLimits

0x66a5,	// (0x00059dd3) popup_query_code_window

0x66bb,	// (0x00059de9) popup_query_data_code_window_ParamLimits

0x66bb,	// (0x00059de9) popup_query_data_code_window

0x66de,	// (0x00059e0c) popup_query_data_window_ParamLimits

0x66de,	// (0x00059e0c) popup_query_data_window

0x6700,	// (0x00059e2e) popup_query_sat_info_window_ParamLimits

0x6700,	// (0x00059e2e) popup_query_sat_info_window

0x673f,	// (0x00059e6d) popup_snote_single_graphic_window_ParamLimits

0x673f,	// (0x00059e6d) popup_snote_single_graphic_window

0x673f,	// (0x00059e6d) popup_snote_single_text_window_ParamLimits

0x673f,	// (0x00059e6d) popup_snote_single_text_window

0x6756,	// (0x00059e84) popup_sub_window_general

0x689c,	// (0x00059fca) popup_window_general_ParamLimits

0x689c,	// (0x00059fca) popup_window_general

0x8169,	// (0x0005b897) power_save_pane

0x6122,	// (0x00059850) control_pane_g1_ParamLimits

0x6122,	// (0x00059850) control_pane_g1

0x614b,	// (0x00059879) control_pane_g2_ParamLimits

0x614b,	// (0x00059879) control_pane_g2

0x80c4,	// (0x0005b7f2) control_pane_g3_ParamLimits

0x80c4,	// (0x0005b7f2) control_pane_g3

0x0007,

0xf793,	// (0x00062ec1) control_pane_g_ParamLimits

0xf793,	// (0x00062ec1) control_pane_g

0x6193,	// (0x000598c1) control_pane_t1_ParamLimits

0x6193,	// (0x000598c1) control_pane_t1

0x61df,	// (0x0005990d) control_pane_t2_ParamLimits

0x61df,	// (0x0005990d) control_pane_t2

0x0002,

0xf7a4,	// (0x00062ed2) control_pane_t_ParamLimits

0xf7a4,	// (0x00062ed2) control_pane_t

0x7fe5,	// (0x0005b713) navi_navi_volume_pane_cp1

0x7fee,	// (0x0005b71c) status_small_icon_pane

0x7ff6,	// (0x0005b724) status_small_pane_g1_ParamLimits

0x7ff6,	// (0x0005b724) status_small_pane_g1

0x802a,	// (0x0005b758) status_small_pane_g2_ParamLimits

0x802a,	// (0x0005b758) status_small_pane_g2

0x8036,	// (0x0005b764) status_small_pane_g3_ParamLimits

0x8036,	// (0x0005b764) status_small_pane_g3

0x8042,	// (0x0005b770) status_small_pane_g4_ParamLimits

0x8042,	// (0x0005b770) status_small_pane_g4

0x804e,	// (0x0005b77c) status_small_pane_g5_ParamLimits

0x804e,	// (0x0005b77c) status_small_pane_g5

0x805d,	// (0x0005b78b) status_small_pane_g6_ParamLimits

0x805d,	// (0x0005b78b) status_small_pane_g6

0x0007,

0xf782,	// (0x00062eb0) status_small_pane_g_ParamLimits

0xf782,	// (0x00062eb0) status_small_pane_g

0x808d,	// (0x0005b7bb) status_small_pane_t1

0x80b0,	// (0x0005b7de) status_small_wait_pane_ParamLimits

0x80b0,	// (0x0005b7de) status_small_wait_pane

0x5d0f,	// (0x0005943d) aid_levels_signal_ParamLimits

0x5d0f,	// (0x0005943d) aid_levels_signal

0x5d21,	// (0x0005944f) signal_pane_g1_ParamLimits

0x5d21,	// (0x0005944f) signal_pane_g1

0x5d36,	// (0x00059464) signal_pane_g2_ParamLimits

0x5d36,	// (0x00059464) signal_pane_g2

0x0003,

0xf713,	// (0x00062e41) signal_pane_g_ParamLimits

0xf713,	// (0x00062e41) signal_pane_g

0x343d,	// (0x00056b6b) context_pane_g1

0x4ef9,	// (0x00058627) title_pane_g1

0x4f23,	// (0x00058651) title_pane_t1

0xb4b6,	// (0x0005ebe4) title_pane_t2

0xb4dc,	// (0x0005ec0a) title_pane_t3

0x0002,

0xf55d,	// (0x00062c8b) title_pane_t

0x8579,	// (0x0005bca7) aid_levels_battery_ParamLimits

0x8579,	// (0x0005bca7) aid_levels_battery

0x858d,	// (0x0005bcbb) battery_pane_g1_ParamLimits

0x858d,	// (0x0005bcbb) battery_pane_g1

0x85a3,	// (0x0005bcd1) battery_pane_g2_ParamLimits

0x85a3,	// (0x0005bcd1) battery_pane_g2

0x0001,

0xf7b6,	// (0x00062ee4) battery_pane_g_ParamLimits

0xf7b6,	// (0x00062ee4) battery_pane_g

0x9a3d,	// (0x0005d16b) uni_indicator_pane_g1

0x9a52,	// (0x0005d180) uni_indicator_pane_g2

0x9a68,	// (0x0005d196) uni_indicator_pane_g3

0x0005,

0xf92c,	// (0x0006305a) uni_indicator_pane_g

0x7c71,	// (0x0005b39f) navi_icon_pane_ParamLimits

0x7c71,	// (0x0005b39f) navi_icon_pane

0x366f,	// (0x00056d9d) navi_midp_pane

0x7c8d,	// (0x0005b3bb) navi_navi_pane

0x7c97,	// (0x0005b3c5) navi_text_pane_ParamLimits

0x7c97,	// (0x0005b3c5) navi_text_pane

0xb496,	// (0x0005ebc4) status_small_wait_pane_g1

0xed08,	// (0x00062436) status_small_wait_pane_g2

0x0001,

0xf927,	// (0x00063055) status_small_wait_pane_g

0x959c,	// (0x0005ccca) navi_navi_icon_text_pane

0x95a4,	// (0x0005ccd2) navi_navi_pane_g1_ParamLimits

0x95a4,	// (0x0005ccd2) navi_navi_pane_g1

0x95b6,	// (0x0005cce4) navi_navi_pane_g2_ParamLimits

0x95b6,	// (0x0005cce4) navi_navi_pane_g2

0x0001,

0xf8f5,	// (0x00063023) navi_navi_pane_g_ParamLimits

0xf8f5,	// (0x00063023) navi_navi_pane_g

0x95c8,	// (0x0005ccf6) navi_navi_tabs_pane

0x95d1,	// (0x0005ccff) navi_navi_text_pane

0x959c,	// (0x0005ccca) navi_navi_volume_pane

0x9575,	// (0x0005cca3) navi_text_pane_t1

0x9566,	// (0x0005cc94) navi_icon_pane_g1

0x94b9,	// (0x0005cbe7) navi_navi_text_pane_t1

0x6b78,	// (0x0005a2a6) navi_navi_volume_pane_g1

0x6b80,	// (0x0005a2ae) volume_small_pane

0x941f,	// (0x0005cb4d) navi_navi_icon_text_pane_g1

0x9427,	// (0x0005cb55) navi_navi_icon_text_pane_t1

0x7c8d,	// (0x0005b3bb) navi_tabs_2_long_pane

0x7c8d,	// (0x0005b3bb) navi_tabs_2_pane

0x7c8d,	// (0x0005b3bb) navi_tabs_3_long_pane

0x7c8d,	// (0x0005b3bb) navi_tabs_3_pane

0x7c8d,	// (0x0005b3bb) navi_tabs_4_pane

0x6b58,	// (0x0005a286) tabs_2_active_pane_ParamLimits

0x6b58,	// (0x0005a286) tabs_2_active_pane

0x6b68,	// (0x0005a296) tabs_2_passive_pane_ParamLimits

0x6b68,	// (0x0005a296) tabs_2_passive_pane

0x6b26,	// (0x0005a254) tabs_3_active_pane_ParamLimits

0x6b26,	// (0x0005a254) tabs_3_active_pane

0x6b36,	// (0x0005a264) tabs_3_passive_pane_ParamLimits

0x6b36,	// (0x0005a264) tabs_3_passive_pane

0x6b47,	// (0x0005a275) tabs_3_passive_pane_cp_ParamLimits

0x6b47,	// (0x0005a275) tabs_3_passive_pane_cp

0x6ada,	// (0x0005a208) tabs_4_active_pane_ParamLimits

0x6ada,	// (0x0005a208) tabs_4_active_pane

0x6aed,	// (0x0005a21b) tabs_4_passive_pane_ParamLimits

0x6aed,	// (0x0005a21b) tabs_4_passive_pane

0x6afe,	// (0x0005a22c) tabs_4_passive_pane_cp_ParamLimits

0x6afe,	// (0x0005a22c) tabs_4_passive_pane_cp

0x6b0f,	// (0x0005a23d) tabs_4_passive_pane_cp2_ParamLimits

0x6b0f,	// (0x0005a23d) tabs_4_passive_pane_cp2

0x6ab6,	// (0x0005a1e4) tabs_2_long_active_pane_ParamLimits

0x6ab6,	// (0x0005a1e4) tabs_2_long_active_pane

0x6ac8,	// (0x0005a1f6) tabs_2_long_passive_pane_ParamLimits

0x6ac8,	// (0x0005a1f6) tabs_2_long_passive_pane

0x6a77,	// (0x0005a1a5) tabs_3_long_active_pane_ParamLimits

0x6a77,	// (0x0005a1a5) tabs_3_long_active_pane

0x6a8a,	// (0x0005a1b8) tabs_3_long_passive_pane_ParamLimits

0x6a8a,	// (0x0005a1b8) tabs_3_long_passive_pane

0x6aa3,	// (0x0005a1d1) tabs_3_long_passive_pane_cp_ParamLimits

0x6aa3,	// (0x0005a1d1) tabs_3_long_passive_pane_cp

0x6a1d,	// (0x0005a14b) volume_small_pane_g1

0x6a26,	// (0x0005a154) volume_small_pane_g2

0x6a2f,	// (0x0005a15d) volume_small_pane_g3

0x6a38,	// (0x0005a166) volume_small_pane_g4

0x6a41,	// (0x0005a16f) volume_small_pane_g5

0x6a4a,	// (0x0005a178) volume_small_pane_g6

0x6a53,	// (0x0005a181) volume_small_pane_g7

0x6a5c,	// (0x0005a18a) volume_small_pane_g8

0x6a65,	// (0x0005a193) volume_small_pane_g9

0x6a6e,	// (0x0005a19c) volume_small_pane_g10

0x0009,

0xf8c1,	// (0x00062fef) volume_small_pane_g

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp2_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp2

0x4f8b,	// (0x000586b9) tabs_3_active_pane_g1

0x4f93,	// (0x000586c1) tabs_3_active_pane_t1

0xb4ee,	// (0x0005ec1c) bg_passive_tab_pane_cp2_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_passive_tab_pane_cp2

0x4f8b,	// (0x000586b9) tabs_3_passive_pane_g1

0x4f93,	// (0x000586c1) tabs_3_passive_pane_t1

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp3_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp3

0x4fa5,	// (0x000586d3) tabs_4_active_pane_g1

0x4fad,	// (0x000586db) tabs_4_active_pane_t1

0xb4ee,	// (0x0005ec1c) bg_passive_tab_pane_cp3_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_passive_tab_pane_cp3

0x4fa5,	// (0x000586d3) tabs_4_1_passive_pane_g1

0x4fad,	// (0x000586db) tabs_4_1_passive_pane_t1

0x814f,	// (0x0005b87d) list_highlight_pane_cp2

0x9ccc,	// (0x0005d3fa) list_set_pane_ParamLimits

0x9ccc,	// (0x0005d3fa) list_set_pane

0x9d94,	// (0x0005d4c2) main_pane_set_t1_ParamLimits

0x9d94,	// (0x0005d4c2) main_pane_set_t1

0x9db4,	// (0x0005d4e2) main_pane_set_t2_ParamLimits

0x9db4,	// (0x0005d4e2) main_pane_set_t2

0x9dc8,	// (0x0005d4f6) main_pane_set_t3_ParamLimits

0x9dc8,	// (0x0005d4f6) main_pane_set_t3

0x9ddc,	// (0x0005d50a) main_pane_set_t4_ParamLimits

0x9ddc,	// (0x0005d50a) main_pane_set_t4

0x0003,

0xf991,	// (0x000630bf) main_pane_set_t_ParamLimits

0xf991,	// (0x000630bf) main_pane_set_t

0x9df0,	// (0x0005d51e) setting_code_pane

0x9dfa,	// (0x0005d528) setting_slider_graphic_pane

0x9dfa,	// (0x0005d528) setting_slider_pane

0x9dfa,	// (0x0005d528) setting_text_pane

0x9dfa,	// (0x0005d528) setting_volume_pane

0x4fbf,	// (0x000586ed) volume_set_pane

0xb4ee,	// (0x0005ec1c) bg_set_opt_pane_cp

0x4fc9,	// (0x000586f7) setting_slider_pane_t1

0x4fe2,	// (0x00058710) setting_slider_pane_t2

0x4ffc,	// (0x0005872a) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00062c92) setting_slider_pane_t

0x5014,	// (0x00058742) slider_set_pane

0xb4a0,	// (0x0005ebce) bg_set_opt_pane_cp2

0xb4fc,	// (0x0005ec2a) setting_slider_graphic_pane_g1

0x502a,	// (0x00058758) setting_slider_graphic_pane_t1

0x503a,	// (0x00058768) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00062c99) setting_slider_graphic_pane_t

0x504a,	// (0x00058778) slider_set_pane_cp

0xb4a0,	// (0x0005ebce) input_focus_pane_cp1

0x9c8d,	// (0x0005d3bb) list_set_text_pane

0xb496,	// (0x0005ebc4) setting_text_pane_g1

0xb4a0,	// (0x0005ebce) input_focus_pane_cp2

0xb496,	// (0x0005ebc4) setting_code_pane_g1

0xb505,	// (0x0005ec33) setting_code_pane_t1

0x32cc,	// (0x000569fa) set_text_pane_t1_ParamLimits

0x32cc,	// (0x000569fa) set_text_pane_t1

0xf0a9,	// (0x000627d7) set_opt_bg_pane_g1

0xf0b1,	// (0x000627df) set_opt_bg_pane_g2

0x9c65,	// (0x0005d393) set_opt_bg_pane_g3

0xf0c1,	// (0x000627ef) set_opt_bg_pane_g4

0xf0c9,	// (0x000627f7) set_opt_bg_pane_g5

0xf0d1,	// (0x000627ff) set_opt_bg_pane_g6

0x9c6f,	// (0x0005d39d) set_opt_bg_pane_g7

0x9c79,	// (0x0005d3a7) set_opt_bg_pane_g8

0x9c83,	// (0x0005d3b1) set_opt_bg_pane_g9

0x0008,

0xf97e,	// (0x000630ac) set_opt_bg_pane_g

0x9c58,	// (0x0005d386) slider_set_pane_g1

0x6c29,	// (0x0005a357) slider_set_pane_g2

0x0006,

0xf96f,	// (0x0006309d) slider_set_pane_g

0x6b89,	// (0x0005a2b7) volume_set_pane_g1

0x6b93,	// (0x0005a2c1) volume_set_pane_g2

0x6b9d,	// (0x0005a2cb) volume_set_pane_g3

0x6ba7,	// (0x0005a2d5) volume_set_pane_g4

0x6bb1,	// (0x0005a2df) volume_set_pane_g5

0x6bbb,	// (0x0005a2e9) volume_set_pane_g6

0x6bc5,	// (0x0005a2f3) volume_set_pane_g7

0x6bcf,	// (0x0005a2fd) volume_set_pane_g8

0x6bd9,	// (0x0005a307) volume_set_pane_g9

0x6be3,	// (0x0005a311) volume_set_pane_g10

0x0009,

0xf947,	// (0x00063075) volume_set_pane_g

0x5052,	// (0x00058780) indicator_pane_ParamLimits

0x5052,	// (0x00058780) indicator_pane

0x505e,	// (0x0005878c) main_idle_pane_g2_ParamLimits

0x505e,	// (0x0005878c) main_idle_pane_g2

0x5086,	// (0x000587b4) main_pane_idle_g1_ParamLimits

0x5086,	// (0x000587b4) main_pane_idle_g1

0xb513,	// (0x0005ec41) popup_clock_digital_analogue_window_ParamLimits

0xb513,	// (0x0005ec41) popup_clock_digital_analogue_window

0x5094,	// (0x000587c2) soft_indicator_pane_ParamLimits

0x5094,	// (0x000587c2) soft_indicator_pane

0x50a2,	// (0x000587d0) wallpaper_pane_ParamLimits

0x50a2,	// (0x000587d0) wallpaper_pane

0xb496,	// (0x0005ebc4) wallpaper_pane_g1

0x50ae,	// (0x000587dc) indicator_pane_g1_ParamLimits

0x50ae,	// (0x000587dc) indicator_pane_g1

0xa0aa,	// (0x0005d7d8) navi_navi_icon_text_pane_srt_g1

0xb541,	// (0x0005ec6f) soft_indicator_pane_t1

0xb55b,	// (0x0005ec89) aid_ps_area_pane

0x50ba,	// (0x000587e8) aid_ps_clock_pane

0xb56c,	// (0x0005ec9a) aid_ps_indicator_pane

0xb578,	// (0x0005eca6) indicator_ps_pane_ParamLimits

0xb578,	// (0x0005eca6) indicator_ps_pane

0xb587,	// (0x0005ecb5) power_save_pane_g1_ParamLimits

0xb587,	// (0x0005ecb5) power_save_pane_g1

0xb593,	// (0x0005ecc1) power_save_pane_g2_ParamLimits

0xb593,	// (0x0005ecc1) power_save_pane_g2

0x4af8,	// (0x00058226) aid_navinavi_width_pane

0xb55b,	// (0x0005ec89) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00062c9e) power_save_pane_g_ParamLimits

0xf570,	// (0x00062c9e) power_save_pane_g

0xb5a1,	// (0x0005eccf) power_save_pane_t1_ParamLimits

0xb5a1,	// (0x0005eccf) power_save_pane_t1

0x50ba,	// (0x000587e8) aid_ps_clock_pane_ParamLimits

0xb56c,	// (0x0005ec9a) aid_ps_indicator_pane_ParamLimits

0xb5b3,	// (0x0005ece1) power_save_pane_t4_ParamLimits

0xb5b3,	// (0x0005ece1) power_save_pane_t4

0x0001,

0xf575,	// (0x00062ca3) power_save_pane_t_ParamLimits

0xf575,	// (0x00062ca3) power_save_pane_t

0xb5dd,	// (0x0005ed0b) power_save_t3_ParamLimits

0xb5dd,	// (0x0005ed0b) power_save_t3

0xb5c8,	// (0x0005ecf6) power_save_t2_ParamLimits

0xb5c8,	// (0x0005ecf6) power_save_t2

0xb5f2,	// (0x0005ed20) indicator_ps_pane_g1

0x50c8,	// (0x000587f6) ai_gene_pane_ParamLimits

0x50c8,	// (0x000587f6) ai_gene_pane

0x50d4,	// (0x00058802) ai_links_pane_ParamLimits

0x50d4,	// (0x00058802) ai_links_pane

0x50e0,	// (0x0005880e) indicator_pane_cp1_ParamLimits

0x50e0,	// (0x0005880e) indicator_pane_cp1

0x50ec,	// (0x0005881a) main_pane_idle_g1_cp_ParamLimits

0x50ec,	// (0x0005881a) main_pane_idle_g1_cp

0xb5fb,	// (0x0005ed29) popup_ai_links_title_window

0x50f8,	// (0x00058826) soft_indicator_pane_cp1_ParamLimits

0x50f8,	// (0x00058826) soft_indicator_pane_cp1

0x9a2b,	// (0x0005d159) ai_links_pane_g1

0x9a34,	// (0x0005d162) grid_ai_links_pane

0x9a10,	// (0x0005d13e) ai_gene_pane_1

0x9a19,	// (0x0005d147) ai_gene_pane_2

0x9a22,	// (0x0005d150) list_highlight_pane_cp4

0x99f0,	// (0x0005d11e) cell_ai_link_pane_ParamLimits

0x99f0,	// (0x0005d11e) cell_ai_link_pane

0x99e8,	// (0x0005d116) cell_ai_link_pane_g1

0xed08,	// (0x00062436) cell_ai_link_pane_g2

0x0001,

0xf922,	// (0x00063050) cell_ai_link_pane_g

0xb4a0,	// (0x0005ebce) grid_highlight_cp2

0xb4a0,	// (0x0005ebce) bg_popup_sub_pane_cp1

0xb612,	// (0x0005ed40) popup_ai_links_title_window_t1

0x9934,	// (0x0005d062) ai_gene_pane_1_g1_ParamLimits

0x9934,	// (0x0005d062) ai_gene_pane_1_g1

0x9940,	// (0x0005d06e) ai_gene_pane_1_g2_ParamLimits

0x9940,	// (0x0005d06e) ai_gene_pane_1_g2

0x0001,

0xf918,	// (0x00063046) ai_gene_pane_1_g_ParamLimits

0xf918,	// (0x00063046) ai_gene_pane_1_g

0x994d,	// (0x0005d07b) ai_gene_pane_1_t1_ParamLimits

0x994d,	// (0x0005d07b) ai_gene_pane_1_t1

0x9981,	// (0x0005d0af) grid_ai_soft_ind_pane

0x991f,	// (0x0005d04d) ai_gene_pane_2_t1_ParamLimits

0x991f,	// (0x0005d04d) ai_gene_pane_2_t1

0x5104,	// (0x00058832) main_pane_empty_t1_ParamLimits

0x5104,	// (0x00058832) main_pane_empty_t1

0x511c,	// (0x0005884a) main_pane_empty_t2_ParamLimits

0x511c,	// (0x0005884a) main_pane_empty_t2

0x5131,	// (0x0005885f) main_pane_empty_t3_ParamLimits

0x5131,	// (0x0005885f) main_pane_empty_t3

0x5143,	// (0x00058871) main_pane_empty_t4_ParamLimits

0x5143,	// (0x00058871) main_pane_empty_t4

0x5155,	// (0x00058883) main_pane_empty_t5_ParamLimits

0x5155,	// (0x00058883) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00062ca8) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00062ca8) main_pane_empty_t

0xf0fa,	// (0x00062828) bg_popup_window_pane_ParamLimits

0xf0fa,	// (0x00062828) bg_popup_window_pane

0x94c7,	// (0x0005cbf5) find_popup_pane_cp2_ParamLimits

0x94c7,	// (0x0005cbf5) find_popup_pane_cp2

0x94d3,	// (0x0005cc01) heading_pane_ParamLimits

0x94d3,	// (0x0005cc01) heading_pane

0xb4a0,	// (0x0005ebce) bg_popup_sub_pane

0x9441,	// (0x0005cb6f) bg_popup_window_pane_g1_ParamLimits

0x9441,	// (0x0005cb6f) bg_popup_window_pane_g1

0x944d,	// (0x0005cb7b) bg_popup_window_pane_g2_ParamLimits

0x944d,	// (0x0005cb7b) bg_popup_window_pane_g2

0x9459,	// (0x0005cb87) bg_popup_window_pane_g3_ParamLimits

0x9459,	// (0x0005cb87) bg_popup_window_pane_g3

0x9465,	// (0x0005cb93) bg_popup_window_pane_g4_ParamLimits

0x9465,	// (0x0005cb93) bg_popup_window_pane_g4

0x9471,	// (0x0005cb9f) bg_popup_window_pane_g5_ParamLimits

0x9471,	// (0x0005cb9f) bg_popup_window_pane_g5

0x947d,	// (0x0005cbab) bg_popup_window_pane_g6_ParamLimits

0x947d,	// (0x0005cbab) bg_popup_window_pane_g6

0x9489,	// (0x0005cbb7) bg_popup_window_pane_g7_ParamLimits

0x9489,	// (0x0005cbb7) bg_popup_window_pane_g7

0x9495,	// (0x0005cbc3) bg_popup_window_pane_g8_ParamLimits

0x9495,	// (0x0005cbc3) bg_popup_window_pane_g8

0x94a1,	// (0x0005cbcf) bg_popup_window_pane_g9_ParamLimits

0x94a1,	// (0x0005cbcf) bg_popup_window_pane_g9

0x94ad,	// (0x0005cbdb) bg_popup_window_pane_g10_ParamLimits

0x94ad,	// (0x0005cbdb) bg_popup_window_pane_g10

0x0009,

0xf8e0,	// (0x0006300e) bg_popup_window_pane_g_ParamLimits

0xf8e0,	// (0x0006300e) bg_popup_window_pane_g

0x93d6,	// (0x0005cb04) bg_popup_heading_pane_ParamLimits

0x93d6,	// (0x0005cb04) bg_popup_heading_pane

0x6cfd,	// (0x0005a42b) tabs_4_passive_pane_cp_srt_ParamLimits

0x6cfd,	// (0x0005a42b) tabs_4_passive_pane_cp_srt

0x6d0f,	// (0x0005a43d) tabs_4_passive_pane_srt_ParamLimits

0x93ea,	// (0x0005cb18) heading_pane_g2

0x6d0f,	// (0x0005a43d) tabs_4_passive_pane_srt

0x814f,	// (0x0005b87d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x814f,	// (0x0005b87d) bg_passive_tab_pane_cp3_srt

0x93f2,	// (0x0005cb20) heading_pane_t1_ParamLimits

0x93f2,	// (0x0005cb20) heading_pane_t1

0x9409,	// (0x0005cb37) heading_pane_t2_ParamLimits

0x9409,	// (0x0005cb37) heading_pane_t2

0x0001,

0xf8db,	// (0x00063009) heading_pane_t_ParamLimits

0xf8db,	// (0x00063009) heading_pane_t

0x8f01,	// (0x0005c62f) bg_popup_heading_pane_g1

0x8fb0,	// (0x0005c6de) bg_popup_heading_pane_g2

0x8fba,	// (0x0005c6e8) bg_popup_heading_pane_g3

0x8fc4,	// (0x0005c6f2) bg_popup_heading_pane_g4

0x8fce,	// (0x0005c6fc) bg_popup_heading_pane_g5

0x8fd8,	// (0x0005c706) bg_popup_heading_pane_g6

0x8fe0,	// (0x0005c70e) bg_popup_heading_pane_g7

0x8fe8,	// (0x0005c716) bg_popup_heading_pane_g8

0x8ff2,	// (0x0005c720) bg_popup_heading_pane_g9

0x0008,

0xf897,	// (0x00062fc5) bg_popup_heading_pane_g

0x8687,	// (0x0005bdb5) bg_popup_sub_pane_g1

0x8697,	// (0x0005bdc5) bg_popup_sub_pane_g2

0x868f,	// (0x0005bdbd) bg_popup_sub_pane_g3

0x86a7,	// (0x0005bdd5) bg_popup_sub_pane_g4

0x869f,	// (0x0005bdcd) bg_popup_sub_pane_g5

0x86af,	// (0x0005bddd) bg_popup_sub_pane_g6

0x86b7,	// (0x0005bde5) bg_popup_sub_pane_g7

0x86c7,	// (0x0005bdf5) bg_popup_sub_pane_g8

0x86bf,	// (0x0005bded) bg_popup_sub_pane_g9

0x0008,

0xf871,	// (0x00062f9f) bg_popup_sub_pane_g

0xb621,	// (0x0005ed4f) bg_popup_window_pane_cp5_ParamLimits

0xb621,	// (0x0005ed4f) bg_popup_window_pane_cp5

0xb63d,	// (0x0005ed6b) popup_note_window_g1_ParamLimits

0xb63d,	// (0x0005ed6b) popup_note_window_g1

0xb649,	// (0x0005ed77) popup_note_window_t1_ParamLimits

0xb649,	// (0x0005ed77) popup_note_window_t1

0xb65f,	// (0x0005ed8d) popup_note_window_t2_ParamLimits

0xb65f,	// (0x0005ed8d) popup_note_window_t2

0xb675,	// (0x0005eda3) popup_note_window_t3_ParamLimits

0xb675,	// (0x0005eda3) popup_note_window_t3

0xb68b,	// (0x0005edb9) popup_note_window_t4_ParamLimits

0xb68b,	// (0x0005edb9) popup_note_window_t4

0xb6b3,	// (0x0005ede1) popup_note_window_t5_ParamLimits

0xb6b3,	// (0x0005ede1) popup_note_window_t5

0x0004,

0xf585,	// (0x00062cb3) popup_note_window_t_ParamLimits

0xf585,	// (0x00062cb3) popup_note_window_t

0xb6d7,	// (0x0005ee05) bg_popup_window_pane_cp6_ParamLimits

0xb6d7,	// (0x0005ee05) bg_popup_window_pane_cp6

0x8e7d,	// (0x0005c5ab) popup_note_image_window_g1_ParamLimits

0x8e7d,	// (0x0005c5ab) popup_note_image_window_g1

0x8e89,	// (0x0005c5b7) popup_note_image_window_g2_ParamLimits

0x8e89,	// (0x0005c5b7) popup_note_image_window_g2

0x0001,

0xf865,	// (0x00062f93) popup_note_image_window_g_ParamLimits

0xf865,	// (0x00062f93) popup_note_image_window_g

0x8ea2,	// (0x0005c5d0) popup_note_image_window_t1_ParamLimits

0x8ea2,	// (0x0005c5d0) popup_note_image_window_t1

0x8ebb,	// (0x0005c5e9) popup_note_image_window_t2_ParamLimits

0x8ebb,	// (0x0005c5e9) popup_note_image_window_t2

0x8ed4,	// (0x0005c602) popup_note_image_window_t3_ParamLimits

0x8ed4,	// (0x0005c602) popup_note_image_window_t3

0x0002,

0xf86a,	// (0x00062f98) popup_note_image_window_t_ParamLimits

0xf86a,	// (0x00062f98) popup_note_image_window_t

0x8d3d,	// (0x0005c46b) bg_popup_window_pane_cp7_ParamLimits

0x8d3d,	// (0x0005c46b) bg_popup_window_pane_cp7

0x8d6d,	// (0x0005c49b) popup_note_wait_window_g1_ParamLimits

0x8d6d,	// (0x0005c49b) popup_note_wait_window_g1

0x8d79,	// (0x0005c4a7) popup_note_wait_window_g2_ParamLimits

0x8d79,	// (0x0005c4a7) popup_note_wait_window_g2

0x0002,

0xf853,	// (0x00062f81) popup_note_wait_window_g_ParamLimits

0xf853,	// (0x00062f81) popup_note_wait_window_g

0x8d91,	// (0x0005c4bf) popup_note_wait_window_t1_ParamLimits

0x8d91,	// (0x0005c4bf) popup_note_wait_window_t1

0x8db8,	// (0x0005c4e6) popup_note_wait_window_t2_ParamLimits

0x8db8,	// (0x0005c4e6) popup_note_wait_window_t2

0x8dd6,	// (0x0005c504) popup_note_wait_window_t3_ParamLimits

0x8dd6,	// (0x0005c504) popup_note_wait_window_t3

0x8de9,	// (0x0005c517) popup_note_wait_window_t4_ParamLimits

0x8de9,	// (0x0005c517) popup_note_wait_window_t4

0x0004,

0xf85a,	// (0x00062f88) popup_note_wait_window_t_ParamLimits

0xf85a,	// (0x00062f88) popup_note_wait_window_t

0x8e0e,	// (0x0005c53c) wait_bar_pane_ParamLimits

0x8e0e,	// (0x0005c53c) wait_bar_pane

0xb4a0,	// (0x0005ebce) wait_anim_pane

0xb4a0,	// (0x0005ebce) wait_border_pane

0xb496,	// (0x0005ebc4) wait_anim_pane_g1

0xb496,	// (0x0005ebc4) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x00062e3c) wait_anim_pane_g

0x8ce1,	// (0x0005c40f) wait_border_pane_g1

0x8cec,	// (0x0005c41a) wait_border_pane_g2

0x8cf5,	// (0x0005c423) wait_border_pane_g3

0x0002,

0xf84c,	// (0x00062f7a) wait_border_pane_g

0x8b4b,	// (0x0005c279) bg_popup_window_pane_cp16_ParamLimits

0x8b4b,	// (0x0005c279) bg_popup_window_pane_cp16

0x8c4b,	// (0x0005c379) indicator_popup_pane_cp4_ParamLimits

0x8c4b,	// (0x0005c379) indicator_popup_pane_cp4

0x8c5f,	// (0x0005c38d) popup_query_data_window_t1_ParamLimits

0x8c5f,	// (0x0005c38d) popup_query_data_window_t1

0x8c71,	// (0x0005c39f) popup_query_data_window_t2_ParamLimits

0x8c71,	// (0x0005c39f) popup_query_data_window_t2

0x8c8a,	// (0x0005c3b8) popup_query_data_window_t3_ParamLimits

0x8c8a,	// (0x0005c3b8) popup_query_data_window_t3

0x0002,

0xf845,	// (0x00062f73) popup_query_data_window_t_ParamLimits

0xf845,	// (0x00062f73) popup_query_data_window_t

0x8ca4,	// (0x0005c3d2) query_popup_data_pane_ParamLimits

0x8ca4,	// (0x0005c3d2) query_popup_data_pane

0x8cb8,	// (0x0005c3e6) query_popup_data_pane_cp1_ParamLimits

0x8cb8,	// (0x0005c3e6) query_popup_data_pane_cp1

0x8b4b,	// (0x0005c279) bg_popup_window_pane_cp10_ParamLimits

0x8b4b,	// (0x0005c279) bg_popup_window_pane_cp10

0x8b7d,	// (0x0005c2ab) indicator_popup_pane_ParamLimits

0x8b7d,	// (0x0005c2ab) indicator_popup_pane

0x8b9f,	// (0x0005c2cd) popup_query_code_window_t1_ParamLimits

0x8b9f,	// (0x0005c2cd) popup_query_code_window_t1

0x8bb9,	// (0x0005c2e7) popup_query_code_window_t2_ParamLimits

0x8bb9,	// (0x0005c2e7) popup_query_code_window_t2

0x8c02,	// (0x0005c330) popup_query_code_window_t3_ParamLimits

0x8c02,	// (0x0005c330) popup_query_code_window_t3

0x0002,

0xf83e,	// (0x00062f6c) popup_query_code_window_t_ParamLimits

0xf83e,	// (0x00062f6c) popup_query_code_window_t

0x8c31,	// (0x0005c35f) query_popup_pane_ParamLimits

0x8c31,	// (0x0005c35f) query_popup_pane

0xb6d7,	// (0x0005ee05) bg_popup_window_pane_cp15_ParamLimits

0xb6d7,	// (0x0005ee05) bg_popup_window_pane_cp15

0xb6f7,	// (0x0005ee25) indicator_popup_pane_cp1_ParamLimits

0xb6f7,	// (0x0005ee25) indicator_popup_pane_cp1

0xb70a,	// (0x0005ee38) indicator_popup_pane_cp2_ParamLimits

0xb70a,	// (0x0005ee38) indicator_popup_pane_cp2

0xb725,	// (0x0005ee53) popup_query_data_code_window_g1_ParamLimits

0xb725,	// (0x0005ee53) popup_query_data_code_window_g1

0xb738,	// (0x0005ee66) popup_query_data_code_window_t1_ParamLimits

0xb738,	// (0x0005ee66) popup_query_data_code_window_t1

0xb74a,	// (0x0005ee78) popup_query_data_code_window_t2_ParamLimits

0xb74a,	// (0x0005ee78) popup_query_data_code_window_t2

0xb75c,	// (0x0005ee8a) popup_query_data_code_window_t3_ParamLimits

0xb75c,	// (0x0005ee8a) popup_query_data_code_window_t3

0xeca3,	// (0x000623d1) popup_query_data_code_window_t4_ParamLimits

0xeca3,	// (0x000623d1) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00062cbe) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00062cbe) popup_query_data_code_window_t

0x690a,	// (0x0005a038) list_single_midp_graphic_pane_g3

0xecbd,	// (0x000623eb) query_popup_data_pane_cp2_ParamLimits

0xecd0,	// (0x000623fe) query_popup_pane_cp2_ParamLimits

0xecd0,	// (0x000623fe) query_popup_pane_cp2

0xb4a0,	// (0x0005ebce) bg_popup_window_pane_cp11

0x8b43,	// (0x0005c271) heading_pane_cp5

0xed66,	// (0x00062494) listscroll_popup_info_pane

0xb4a0,	// (0x0005ebce) input_focus_pane_cp3

0xeceb,	// (0x00062419) query_popup_pane_t1

0xecf9,	// (0x00062427) list_popup_info_pane_ParamLimits

0xecf9,	// (0x00062427) list_popup_info_pane

0xed08,	// (0x00062436) listscroll_popup_info_pane_g1

0xed10,	// (0x0006243e) scroll_pane_cp7

0xed1a,	// (0x00062448) popup_info_list_pane_t1_ParamLimits

0xed1a,	// (0x00062448) popup_info_list_pane_t1

0xed34,	// (0x00062462) popup_info_list_pane_t2_ParamLimits

0xed34,	// (0x00062462) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00062cc7) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00062cc7) popup_info_list_pane_t

0xb4a0,	// (0x0005ebce) bg_popup_window_pane_cp12

0xa0c4,	// (0x0005d7f2) find_popup_pane

0xb4ee,	// (0x0005ec1c) bg_popup_window_pane_cp3

0xed4e,	// (0x0006247c) heading_pane_cp3

0xed5a,	// (0x00062488) listscroll_popup_graphic_pane

0xb4a0,	// (0x0005ebce) bg_popup_window_pane_cp4

0x51b7,	// (0x000588e5) heading_pane_cp4

0xed66,	// (0x00062494) listscroll_popup_colour_pane

0x51c1,	// (0x000588ef) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x51c1,	// (0x000588ef) cell_large_graphic_colour_none_popup_pane

0x51d5,	// (0x00058903) grid_large_graphic_colour_popup_pane_ParamLimits

0x51d5,	// (0x00058903) grid_large_graphic_colour_popup_pane

0x5201,	// (0x0005892f) listscroll_popup_colour_pane_g1_ParamLimits

0x5201,	// (0x0005892f) listscroll_popup_colour_pane_g1

0x5218,	// (0x00058946) listscroll_popup_colour_pane_g2_ParamLimits

0x5218,	// (0x00058946) listscroll_popup_colour_pane_g2

0x522f,	// (0x0005895d) listscroll_popup_colour_pane_g3_ParamLimits

0x522f,	// (0x0005895d) listscroll_popup_colour_pane_g3

0x523f,	// (0x0005896d) listscroll_popup_colour_pane_g4_ParamLimits

0x523f,	// (0x0005896d) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00062ccc) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00062ccc) listscroll_popup_colour_pane_g

0xed6e,	// (0x0006249c) scroll_pane_cp6_ParamLimits

0xed6e,	// (0x0006249c) scroll_pane_cp6

0x5253,	// (0x00058981) cell_large_graphic_colour_popup_pane_ParamLimits

0x5253,	// (0x00058981) cell_large_graphic_colour_popup_pane

0xed80,	// (0x000624ae) cell_large_graphic_colour_none_popup_pane_t1

0xb4a0,	// (0x0005ebce) grid_highlight_pane_cp5

0xed8f,	// (0x000624bd) cell_large_graphic_colour_popup_pane_g1

0xed97,	// (0x000624c5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00062cd5) cell_large_graphic_colour_popup_pane_g

0xed9f,	// (0x000624cd) cell_large_graphic_colour_popup_pane_g2_copy1

0xeda8,	// (0x000624d6) grid_highlight_pane_cp4

0xedb0,	// (0x000624de) bg_popup_window_pane_cp8_ParamLimits

0xedb0,	// (0x000624de) bg_popup_window_pane_cp8

0xedcb,	// (0x000624f9) popup_snote_single_text_window_g1_ParamLimits

0xedcb,	// (0x000624f9) popup_snote_single_text_window_g1

0xeddd,	// (0x0006250b) popup_snote_single_text_window_t1_ParamLimits

0xeddd,	// (0x0006250b) popup_snote_single_text_window_t1

0xedf0,	// (0x0006251e) popup_snote_single_text_window_t2_ParamLimits

0xedf0,	// (0x0006251e) popup_snote_single_text_window_t2

0xee03,	// (0x00062531) popup_snote_single_text_window_t3_ParamLimits

0xee03,	// (0x00062531) popup_snote_single_text_window_t3

0xee3c,	// (0x0006256a) popup_snote_single_text_window_t4_ParamLimits

0xee3c,	// (0x0006256a) popup_snote_single_text_window_t4

0xee70,	// (0x0006259e) popup_snote_single_text_window_t5_ParamLimits

0xee70,	// (0x0006259e) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00062cda) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00062cda) popup_snote_single_text_window_t

0xee9f,	// (0x000625cd) bg_popup_window_pane_cp9_ParamLimits

0xee9f,	// (0x000625cd) bg_popup_window_pane_cp9

0xedcb,	// (0x000624f9) popup_snote_single_graphic_window_g1_ParamLimits

0xedcb,	// (0x000624f9) popup_snote_single_graphic_window_g1

0xeead,	// (0x000625db) popup_snote_single_graphic_window_g2_ParamLimits

0xeead,	// (0x000625db) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00062ce5) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00062ce5) popup_snote_single_graphic_window_g

0xeeb9,	// (0x000625e7) popup_snote_single_graphic_window_t1_ParamLimits

0xeeb9,	// (0x000625e7) popup_snote_single_graphic_window_t1

0xeecc,	// (0x000625fa) popup_snote_single_graphic_window_t2_ParamLimits

0xeecc,	// (0x000625fa) popup_snote_single_graphic_window_t2

0xeedf,	// (0x0006260d) popup_snote_single_graphic_window_t3_ParamLimits

0xeedf,	// (0x0006260d) popup_snote_single_graphic_window_t3

0xef18,	// (0x00062646) popup_snote_single_graphic_window_t4_ParamLimits

0xef18,	// (0x00062646) popup_snote_single_graphic_window_t4

0xef4c,	// (0x0006267a) popup_snote_single_graphic_window_t5_ParamLimits

0xef4c,	// (0x0006267a) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00062cea) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00062cea) popup_snote_single_graphic_window_t

0xa002,	// (0x0005d730) grid_graphic_popup_pane_ParamLimits

0xa002,	// (0x0005d730) grid_graphic_popup_pane

0xa030,	// (0x0005d75e) listscroll_popup_graphic_pane_g1_ParamLimits

0xa030,	// (0x0005d75e) listscroll_popup_graphic_pane_g1

0xa044,	// (0x0005d772) listscroll_popup_graphic_pane_g2_ParamLimits

0xa044,	// (0x0005d772) listscroll_popup_graphic_pane_g2

0x0001,

0xf9bb,	// (0x000630e9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9bb,	// (0x000630e9) listscroll_popup_graphic_pane_g

0xa058,	// (0x0005d786) scroll_pane_cp5

0x9faa,	// (0x0005d6d8) cell_graphic_popup_pane_ParamLimits

0x9faa,	// (0x0005d6d8) cell_graphic_popup_pane

0x9f8b,	// (0x0005d6b9) cell_graphic_popup_pane_g1

0x9f93,	// (0x0005d6c1) cell_graphic_popup_pane_g2

0xed9f,	// (0x000624cd) cell_graphic_popup_pane_g3

0x0002,

0xf9b4,	// (0x000630e2) cell_graphic_popup_pane_g

0x9f9c,	// (0x0005d6ca) cell_graphic_popup_pane_t2

0xeda8,	// (0x000624d6) grid_highlight_pane_cp3

0xef8d,	// (0x000626bb) list_gen_pane_ParamLimits

0xef8d,	// (0x000626bb) list_gen_pane

0xefb5,	// (0x000626e3) scroll_pane

0x9eed,	// (0x0005d61b) bg_list_pane_g1_ParamLimits

0x9eed,	// (0x0005d61b) bg_list_pane_g1

0x9f08,	// (0x0005d636) bg_list_pane_g2_ParamLimits

0x9f08,	// (0x0005d636) bg_list_pane_g2

0x9f1b,	// (0x0005d649) bg_list_pane_g3_ParamLimits

0x9f1b,	// (0x0005d649) bg_list_pane_g3

0x9f2d,	// (0x0005d65b) bg_list_pane_g4_ParamLimits

0x9f2d,	// (0x0005d65b) bg_list_pane_g4

0x9f3f,	// (0x0005d66d) bg_list_pane_g5_ParamLimits

0x9f3f,	// (0x0005d66d) bg_list_pane_g5

0x0004,

0xf9a9,	// (0x000630d7) bg_list_pane_g_ParamLimits

0xf9a9,	// (0x000630d7) bg_list_pane_g

0x96a0,	// (0x0005cdce) list_double2_graphic_large_graphic_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double2_graphic_large_graphic_pane

0x96a0,	// (0x0005cdce) list_double2_graphic_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double2_graphic_pane

0x96a0,	// (0x0005cdce) list_double2_large_graphic_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double2_large_graphic_pane

0x96a0,	// (0x0005cdce) list_double2_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double2_pane

0x96a0,	// (0x0005cdce) list_double_graphic_heading_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double_graphic_heading_pane

0x96a0,	// (0x0005cdce) list_double_graphic_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double_graphic_pane

0x96a0,	// (0x0005cdce) list_double_heading_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double_heading_pane

0x96a0,	// (0x0005cdce) list_double_large_graphic_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double_large_graphic_pane

0x96a0,	// (0x0005cdce) list_double_number_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double_number_pane

0x96a0,	// (0x0005cdce) list_double_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double_pane

0x96a0,	// (0x0005cdce) list_double_time_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_double_time_pane

0x96a0,	// (0x0005cdce) list_setting_number_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_setting_number_pane

0x96a0,	// (0x0005cdce) list_setting_pane_ParamLimits

0x96a0,	// (0x0005cdce) list_setting_pane

0x9ea9,	// (0x0005d5d7) list_single_2graphic_pane_ParamLimits

0x9ea9,	// (0x0005d5d7) list_single_2graphic_pane

0x9ea9,	// (0x0005d5d7) list_single_graphic_heading_pane_ParamLimits

0x9ea9,	// (0x0005d5d7) list_single_graphic_heading_pane

0x9ea9,	// (0x0005d5d7) list_single_graphic_pane_ParamLimits

0x9ea9,	// (0x0005d5d7) list_single_graphic_pane

0x9ea9,	// (0x0005d5d7) list_single_heading_pane_ParamLimits

0x9ea9,	// (0x0005d5d7) list_single_heading_pane

0x96c8,	// (0x0005cdf6) list_single_large_graphic_pane_ParamLimits

0x96c8,	// (0x0005cdf6) list_single_large_graphic_pane

0x9ea9,	// (0x0005d5d7) list_single_number_heading_pane_ParamLimits

0x9ea9,	// (0x0005d5d7) list_single_number_heading_pane

0x9ea9,	// (0x0005d5d7) list_single_number_pane_ParamLimits

0x9ea9,	// (0x0005d5d7) list_single_number_pane

0x9ea9,	// (0x0005d5d7) list_single_pane_ParamLimits

0x9ea9,	// (0x0005d5d7) list_single_pane

0xb4a0,	// (0x0005ebce) list_highlight_pane_cp1

0x1dd5,	// (0x00055503) list_single_pane_g1_ParamLimits

0x1dd5,	// (0x00055503) list_single_pane_g1

0x528e,	// (0x000589bc) list_single_pane_g2_ParamLimits

0x528e,	// (0x000589bc) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00062d06) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00062d06) list_single_pane_g

0x6cc3,	// (0x0005a3f1) list_single_pane_t1_ParamLimits

0x6cc3,	// (0x0005a3f1) list_single_pane_t1

0x1dd5,	// (0x00055503) list_single_number_pane_g1_ParamLimits

0x1dd5,	// (0x00055503) list_single_number_pane_g1

0x528e,	// (0x000589bc) list_single_number_pane_g2_ParamLimits

0x528e,	// (0x000589bc) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00062d06) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00062d06) list_single_number_pane_g

0x6bed,	// (0x0005a31b) list_single_number_pane_t1_ParamLimits

0x6bed,	// (0x0005a31b) list_single_number_pane_t1

0x6c03,	// (0x0005a331) list_single_number_pane_t2_ParamLimits

0x6c03,	// (0x0005a331) list_single_number_pane_t2

0x0001,

0xf96a,	// (0x00063098) list_single_number_pane_t_ParamLimits

0xf96a,	// (0x00063098) list_single_number_pane_t

0x5282,	// (0x000589b0) list_single_graphic_pane_g1_ParamLimits

0x5282,	// (0x000589b0) list_single_graphic_pane_g1

0x1dd5,	// (0x00055503) list_single_graphic_pane_g2_ParamLimits

0x1dd5,	// (0x00055503) list_single_graphic_pane_g2

0x528e,	// (0x000589bc) list_single_graphic_pane_g3_ParamLimits

0x528e,	// (0x000589bc) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00062cf5) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00062cf5) list_single_graphic_pane_g

0x529a,	// (0x000589c8) list_single_graphic_pane_t1_ParamLimits

0x529a,	// (0x000589c8) list_single_graphic_pane_t1

0x52b0,	// (0x000589de) list_single_heading_pane_g1_ParamLimits

0x52b0,	// (0x000589de) list_single_heading_pane_g1

0x528e,	// (0x000589bc) list_single_heading_pane_g2_ParamLimits

0x528e,	// (0x000589bc) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00062cfc) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00062cfc) list_single_heading_pane_g

0x52c3,	// (0x000589f1) list_single_heading_pane_t1_ParamLimits

0x52c3,	// (0x000589f1) list_single_heading_pane_t1

0x52d9,	// (0x00058a07) list_single_heading_pane_t2_ParamLimits

0x52d9,	// (0x00058a07) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00062d01) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00062d01) list_single_heading_pane_t

0x1dd5,	// (0x00055503) list_single_number_heading_pane_g1_ParamLimits

0x1dd5,	// (0x00055503) list_single_number_heading_pane_g1

0x528e,	// (0x000589bc) list_single_number_heading_pane_g2_ParamLimits

0x528e,	// (0x000589bc) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00062d06) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00062d06) list_single_number_heading_pane_g

0x52eb,	// (0x00058a19) list_single_number_heading_pane_t1_ParamLimits

0x52eb,	// (0x00058a19) list_single_number_heading_pane_t1

0x5301,	// (0x00058a2f) list_single_number_heading_pane_t2_ParamLimits

0x5301,	// (0x00058a2f) list_single_number_heading_pane_t2

0x5313,	// (0x00058a41) list_single_number_heading_pane_t3_ParamLimits

0x5313,	// (0x00058a41) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00062d0b) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00062d0b) list_single_number_heading_pane_t

0x5325,	// (0x00058a53) list_single_graphic_heading_pane_g1_ParamLimits

0x5325,	// (0x00058a53) list_single_graphic_heading_pane_g1

0x533d,	// (0x00058a6b) list_single_graphic_heading_pane_g4_ParamLimits

0x533d,	// (0x00058a6b) list_single_graphic_heading_pane_g4

0x528e,	// (0x000589bc) list_single_graphic_heading_pane_g5_ParamLimits

0x528e,	// (0x000589bc) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00062d12) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00062d12) list_single_graphic_heading_pane_g

0x52eb,	// (0x00058a19) list_single_graphic_heading_pane_t1_ParamLimits

0x52eb,	// (0x00058a19) list_single_graphic_heading_pane_t1

0x534e,	// (0x00058a7c) list_single_graphic_heading_pane_t2_ParamLimits

0x534e,	// (0x00058a7c) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00062d19) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00062d19) list_single_graphic_heading_pane_t

0x5366,	// (0x00058a94) list_single_large_graphic_pane_g1_ParamLimits

0x5366,	// (0x00058a94) list_single_large_graphic_pane_g1

0x5372,	// (0x00058aa0) list_single_large_graphic_pane_g2_ParamLimits

0x5372,	// (0x00058aa0) list_single_large_graphic_pane_g2

0x537e,	// (0x00058aac) list_single_large_graphic_pane_g3_ParamLimits

0x537e,	// (0x00058aac) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00062d1e) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00062d1e) list_single_large_graphic_pane_g

0x8cec,	// (0x0005c41a) wait_border_pane_g2_copy1

0x538a,	// (0x00058ab8) list_single_large_graphic_pane_g4_cp2

0x5392,	// (0x00058ac0) list_single_large_graphic_pane_t1_ParamLimits

0x5392,	// (0x00058ac0) list_single_large_graphic_pane_t1

0x53a8,	// (0x00058ad6) list_double_pane_g1_ParamLimits

0x53a8,	// (0x00058ad6) list_double_pane_g1

0x53b4,	// (0x00058ae2) list_double_pane_g2_ParamLimits

0x53b4,	// (0x00058ae2) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00062d25) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00062d25) list_double_pane_g

0x53c0,	// (0x00058aee) list_double_pane_t1_ParamLimits

0x53c0,	// (0x00058aee) list_double_pane_t1

0x53d6,	// (0x00058b04) list_double_pane_t2_ParamLimits

0x53d6,	// (0x00058b04) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00062d2a) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00062d2a) list_double_pane_t

0x53e8,	// (0x00058b16) list_double2_pane_g1_ParamLimits

0x53e8,	// (0x00058b16) list_double2_pane_g1

0x53f9,	// (0x00058b27) list_double2_pane_g2_ParamLimits

0x53f9,	// (0x00058b27) list_double2_pane_g2

0x0001,

0xf601,	// (0x00062d2f) list_double2_pane_g_ParamLimits

0xf601,	// (0x00062d2f) list_double2_pane_g

0x5405,	// (0x00058b33) list_double2_pane_t1_ParamLimits

0x5405,	// (0x00058b33) list_double2_pane_t1

0x541b,	// (0x00058b49) list_double2_pane_t2_ParamLimits

0x541b,	// (0x00058b49) list_double2_pane_t2

0x0001,

0xf606,	// (0x00062d34) list_double2_pane_t_ParamLimits

0xf606,	// (0x00062d34) list_double2_pane_t

0x53a8,	// (0x00058ad6) list_double_number_pane_g1_ParamLimits

0x53a8,	// (0x00058ad6) list_double_number_pane_g1

0x53b4,	// (0x00058ae2) list_double_number_pane_g2_ParamLimits

0x53b4,	// (0x00058ae2) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00062d25) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00062d25) list_double_number_pane_g

0x542d,	// (0x00058b5b) list_double_number_pane_t1_ParamLimits

0x542d,	// (0x00058b5b) list_double_number_pane_t1

0x543f,	// (0x00058b6d) list_double_number_pane_t2_ParamLimits

0x543f,	// (0x00058b6d) list_double_number_pane_t2

0x5455,	// (0x00058b83) list_double_number_pane_t3_ParamLimits

0x5455,	// (0x00058b83) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00062d39) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00062d39) list_double_number_pane_t

0x5467,	// (0x00058b95) list_double_graphic_pane_g1_ParamLimits

0x5467,	// (0x00058b95) list_double_graphic_pane_g1

0x5473,	// (0x00058ba1) list_double_graphic_pane_g2_ParamLimits

0x5473,	// (0x00058ba1) list_double_graphic_pane_g2

0x5482,	// (0x00058bb0) list_double_graphic_pane_g3_ParamLimits

0x5482,	// (0x00058bb0) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00062d40) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00062d40) list_double_graphic_pane_g

0x549a,	// (0x00058bc8) list_double_graphic_pane_t1_ParamLimits

0x549a,	// (0x00058bc8) list_double_graphic_pane_t1

0x54b0,	// (0x00058bde) list_double_graphic_pane_t2_ParamLimits

0x54b0,	// (0x00058bde) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00062d49) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00062d49) list_double_graphic_pane_t

0x54c2,	// (0x00058bf0) list_double2_graphic_pane_g1_ParamLimits

0x54c2,	// (0x00058bf0) list_double2_graphic_pane_g1

0x408c,	// (0x000577ba) list_double2_graphic_pane_g2_ParamLimits

0x408c,	// (0x000577ba) list_double2_graphic_pane_g2

0x54ce,	// (0x00058bfc) list_double2_graphic_pane_g3_ParamLimits

0x54ce,	// (0x00058bfc) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00062d4e) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00062d4e) list_double2_graphic_pane_g

0x54da,	// (0x00058c08) list_double2_graphic_pane_t1_ParamLimits

0x54da,	// (0x00058c08) list_double2_graphic_pane_t1

0x54f0,	// (0x00058c1e) list_double2_graphic_pane_t2_ParamLimits

0x54f0,	// (0x00058c1e) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00062d55) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00062d55) list_double2_graphic_pane_t

0x5502,	// (0x00058c30) list_double_large_graphic_pane_g1_ParamLimits

0x5502,	// (0x00058c30) list_double_large_graphic_pane_g1

0x552d,	// (0x00058c5b) list_double_large_graphic_pane_g2_ParamLimits

0x552d,	// (0x00058c5b) list_double_large_graphic_pane_g2

0x53b4,	// (0x00058ae2) list_double_large_graphic_pane_g3_ParamLimits

0x53b4,	// (0x00058ae2) list_double_large_graphic_pane_g3

0x5543,	// (0x00058c71) list_double_large_graphic_pane_g4_ParamLimits

0x5543,	// (0x00058c71) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00062d5a) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00062d5a) list_double_large_graphic_pane_g

0x5556,	// (0x00058c84) list_double_large_graphic_pane_t1_ParamLimits

0x5556,	// (0x00058c84) list_double_large_graphic_pane_t1

0x556f,	// (0x00058c9d) list_double_large_graphic_pane_t2_ParamLimits

0x556f,	// (0x00058c9d) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00062d65) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00062d65) list_double_large_graphic_pane_t

0x5581,	// (0x00058caf) list_double2_large_graphic_pane_g1_ParamLimits

0x5581,	// (0x00058caf) list_double2_large_graphic_pane_g1

0x558d,	// (0x00058cbb) list_double2_large_graphic_pane_g2_ParamLimits

0x558d,	// (0x00058cbb) list_double2_large_graphic_pane_g2

0x54ce,	// (0x00058bfc) list_double2_large_graphic_pane_g3_ParamLimits

0x54ce,	// (0x00058bfc) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00062d6a) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00062d6a) list_double2_large_graphic_pane_g

0x559e,	// (0x00058ccc) list_double2_large_graphic_pane_t1_ParamLimits

0x559e,	// (0x00058ccc) list_double2_large_graphic_pane_t1

0x55b4,	// (0x00058ce2) list_double2_large_graphic_pane_t2_ParamLimits

0x55b4,	// (0x00058ce2) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00062d71) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00062d71) list_double2_large_graphic_pane_t

0x55c6,	// (0x00058cf4) list_double_heading_pane_g1_ParamLimits

0x55c6,	// (0x00058cf4) list_double_heading_pane_g1

0x55d7,	// (0x00058d05) list_double_heading_pane_g2_ParamLimits

0x55d7,	// (0x00058d05) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00062d76) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00062d76) list_double_heading_pane_g

0x55e3,	// (0x00058d11) list_double_heading_pane_t1_ParamLimits

0x55e3,	// (0x00058d11) list_double_heading_pane_t1

0x55f9,	// (0x00058d27) list_double_heading_pane_t2_ParamLimits

0x55f9,	// (0x00058d27) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00062d7b) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00062d7b) list_double_heading_pane_t

0x560b,	// (0x00058d39) list_double_graphic_heading_pane_g1_ParamLimits

0x560b,	// (0x00058d39) list_double_graphic_heading_pane_g1

0x55c6,	// (0x00058cf4) list_double_graphic_heading_pane_g2_ParamLimits

0x55c6,	// (0x00058cf4) list_double_graphic_heading_pane_g2

0x55d7,	// (0x00058d05) list_double_graphic_heading_pane_g3_ParamLimits

0x55d7,	// (0x00058d05) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00062d80) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00062d80) list_double_graphic_heading_pane_g

0x5617,	// (0x00058d45) list_double_graphic_heading_pane_t1_ParamLimits

0x5617,	// (0x00058d45) list_double_graphic_heading_pane_t1

0x562d,	// (0x00058d5b) list_double_graphic_heading_pane_t2_ParamLimits

0x562d,	// (0x00058d5b) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00062d87) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00062d87) list_double_graphic_heading_pane_t

0x563f,	// (0x00058d6d) list_double_time_pane_g1_ParamLimits

0x563f,	// (0x00058d6d) list_double_time_pane_g1

0x5650,	// (0x00058d7e) list_double_time_pane_g2_ParamLimits

0x5650,	// (0x00058d7e) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x00062d8c) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x00062d8c) list_double_time_pane_g

0x565c,	// (0x00058d8a) list_double_time_pane_t1_ParamLimits

0x565c,	// (0x00058d8a) list_double_time_pane_t1

0x5672,	// (0x00058da0) list_double_time_pane_t2_ParamLimits

0x5672,	// (0x00058da0) list_double_time_pane_t2

0x5684,	// (0x00058db2) list_double_time_pane_t3_ParamLimits

0x5684,	// (0x00058db2) list_double_time_pane_t3

0x5696,	// (0x00058dc4) list_double_time_pane_t4_ParamLimits

0x5696,	// (0x00058dc4) list_double_time_pane_t4

0x0003,

0xf663,	// (0x00062d91) list_double_time_pane_t_ParamLimits

0xf663,	// (0x00062d91) list_double_time_pane_t

0x56a8,	// (0x00058dd6) list_setting_pane_g1_ParamLimits

0x56a8,	// (0x00058dd6) list_setting_pane_g1

0x56b4,	// (0x00058de2) list_setting_pane_g2_ParamLimits

0x56b4,	// (0x00058de2) list_setting_pane_g2

0x0001,

0xf66c,	// (0x00062d9a) list_setting_pane_g_ParamLimits

0xf66c,	// (0x00062d9a) list_setting_pane_g

0x56c0,	// (0x00058dee) list_setting_pane_t1_ParamLimits

0x56c0,	// (0x00058dee) list_setting_pane_t1

0x56da,	// (0x00058e08) list_setting_pane_t2_ParamLimits

0x56da,	// (0x00058e08) list_setting_pane_t2

0x0002,

0xf671,	// (0x00062d9f) list_setting_pane_t_ParamLimits

0xf671,	// (0x00062d9f) list_setting_pane_t

0x5719,	// (0x00058e47) set_value_pane_cp_ParamLimits

0x5719,	// (0x00058e47) set_value_pane_cp

0x5727,	// (0x00058e55) list_setting_number_pane_g1_ParamLimits

0x5727,	// (0x00058e55) list_setting_number_pane_g1

0x5733,	// (0x00058e61) list_setting_number_pane_g2_ParamLimits

0x5733,	// (0x00058e61) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x00062da6) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x00062da6) list_setting_number_pane_g

0x573f,	// (0x00058e6d) list_setting_number_pane_t1_ParamLimits

0x573f,	// (0x00058e6d) list_setting_number_pane_t1

0x5758,	// (0x00058e86) list_setting_number_pane_t2_ParamLimits

0x5758,	// (0x00058e86) list_setting_number_pane_t2

0x5772,	// (0x00058ea0) list_setting_number_pane_t3_ParamLimits

0x5772,	// (0x00058ea0) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x00062dab) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x00062dab) list_setting_number_pane_t

0x5719,	// (0x00058e47) set_value_pane_ParamLimits

0x5719,	// (0x00058e47) set_value_pane

0xefe9,	// (0x00062717) bg_set_opt_pane_ParamLimits

0xefe9,	// (0x00062717) bg_set_opt_pane

0x32e5,	// (0x00056a13) set_value_pane_t1

0xf00a,	// (0x00062738) slider_set_pane_cp3

0xf013,	// (0x00062741) volume_small_pane_cp

0xf01c,	// (0x0006274a) list_form_gen_pane

0xf025,	// (0x00062753) scroll_pane_cp8

0x57b5,	// (0x00058ee3) form_field_data_pane_ParamLimits

0x57b5,	// (0x00058ee3) form_field_data_pane

0x57d5,	// (0x00058f03) form_field_data_wide_pane_ParamLimits

0x57d5,	// (0x00058f03) form_field_data_wide_pane

0x57fc,	// (0x00058f2a) form_field_popup_pane_ParamLimits

0x57fc,	// (0x00058f2a) form_field_popup_pane

0x3303,	// (0x00056a31) form_field_popup_wide_pane_ParamLimits

0x3303,	// (0x00056a31) form_field_popup_wide_pane

0x3324,	// (0x00056a52) form_field_slider_pane_ParamLimits

0x3324,	// (0x00056a52) form_field_slider_pane

0x3337,	// (0x00056a65) form_field_slider_wide_pane_ParamLimits

0x3337,	// (0x00056a65) form_field_slider_wide_pane

0xf036,	// (0x00062764) data_form_pane

0x5828,	// (0x00058f56) form_field_data_pane_t1

0xf042,	// (0x00062770) input_focus_pane

0xf050,	// (0x0006277e) data_form_wide_pane

0x3356,	// (0x00056a84) form_field_data_wide_pane_t1

0xedbd,	// (0x000624eb) input_focus_pane_cp6

0x5842,	// (0x00058f70) form_field_popup_pane_t1

0xf042,	// (0x00062770) input_focus_pane_cp7

0xf07c,	// (0x000627aa) list_form_pane

0x3380,	// (0x00056aae) form_field_popup_wide_pane_t1

0xf042,	// (0x00062770) input_focus_pane_cp8

0xf088,	// (0x000627b6) list_form_wide_pane

0x5864,	// (0x00058f92) form_field_slider_pane_t1_ParamLimits

0x5864,	// (0x00058f92) form_field_slider_pane_t1

0x587c,	// (0x00058faa) form_field_slider_pane_t2_ParamLimits

0x587c,	// (0x00058faa) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x00062dbb) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x00062dbb) form_field_slider_pane_t

0xb621,	// (0x0005ed4f) input_focus_pane_cp9_ParamLimits

0xb621,	// (0x0005ed4f) input_focus_pane_cp9

0x5891,	// (0x00058fbf) slider_cont_pane_ParamLimits

0x5891,	// (0x00058fbf) slider_cont_pane

0xf097,	// (0x000627c5) form_field_slider_wide_pane_t1_ParamLimits

0xf097,	// (0x000627c5) form_field_slider_wide_pane_t1

0x3395,	// (0x00056ac3) form_field_slider_wide_pane_t2_ParamLimits

0x3395,	// (0x00056ac3) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x00062dc0) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x00062dc0) form_field_slider_wide_pane_t

0xb621,	// (0x0005ed4f) input_focus_pane_cp10_ParamLimits

0xb621,	// (0x0005ed4f) input_focus_pane_cp10

0x58a5,	// (0x00058fd3) slider_cont_pane_cp1_ParamLimits

0x58a5,	// (0x00058fd3) slider_cont_pane_cp1

0x58b9,	// (0x00058fe7) slider_form_pane_cp

0xf0a9,	// (0x000627d7) input_focus_pane_g1

0xf0b1,	// (0x000627df) input_focus_pane_g2

0xf0b9,	// (0x000627e7) input_focus_pane_g3

0xf0c1,	// (0x000627ef) input_focus_pane_g4

0xf0c9,	// (0x000627f7) input_focus_pane_g5

0xf0d1,	// (0x000627ff) input_focus_pane_g6

0xf0d9,	// (0x00062807) input_focus_pane_g7

0xf0e1,	// (0x0006280f) input_focus_pane_g8

0xf0e9,	// (0x00062817) input_focus_pane_g9

0xb496,	// (0x0005ebc4) input_focus_pane_g10

0x0009,

0xf697,	// (0x00062dc5) input_focus_pane_g

0x8cf5,	// (0x0005c423) wait_border_pane_g3_copy1

0x58c1,	// (0x00058fef) data_form_pane_t1

0xb496,	// (0x0005ebc4) wait_anim_pane_g1_copy1

0x6c8d,	// (0x0005a3bb) data_form_wide_pane_t1

0x33a7,	// (0x00056ad5) list_form_graphic_pane_cp_ParamLimits

0x33a7,	// (0x00056ad5) list_form_graphic_pane_cp

0x9e22,	// (0x0005d550) slider_form_pane_g1

0x9e2b,	// (0x0005d559) slider_form_pane_g2

0x0006,

0xf99a,	// (0x000630c8) slider_form_pane_g

0x33a7,	// (0x00056ad5) list_form_graphic_pane_ParamLimits

0x33a7,	// (0x00056ad5) list_form_graphic_pane

0x33b9,	// (0x00056ae7) list_form_graphic_pane_g1

0x33c1,	// (0x00056aef) list_form_graphic_pane_t1_ParamLimits

0x33c1,	// (0x00056aef) list_form_graphic_pane_t1

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp5_ParamLimits

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp5

0x58e0,	// (0x0005900e) find_pane_g1

0xf0f1,	// (0x0006281f) input_find_pane

0x58e9,	// (0x00059017) input_find_pane_g1_ParamLimits

0x58e9,	// (0x00059017) input_find_pane_g1

0x58f5,	// (0x00059023) input_find_pane_t1_ParamLimits

0x58f5,	// (0x00059023) input_find_pane_t1

0x590a,	// (0x00059038) input_find_pane_t2_ParamLimits

0x590a,	// (0x00059038) input_find_pane_t2

0x0001,

0xf6ac,	// (0x00062dda) input_find_pane_t_ParamLimits

0xf6ac,	// (0x00062dda) input_find_pane_t

0xf0fa,	// (0x00062828) input_focus_pane_cp5_ParamLimits

0xf0fa,	// (0x00062828) input_focus_pane_cp5

0xf141,	// (0x0006286f) bg_popup_window_pane_cp2_ParamLimits

0xf141,	// (0x0006286f) bg_popup_window_pane_cp2

0xf14e,	// (0x0006287c) listscroll_menu_pane_ParamLimits

0xf14e,	// (0x0006287c) listscroll_menu_pane

0x592b,	// (0x00059059) popup_submenu_window_ParamLimits

0x592b,	// (0x00059059) popup_submenu_window

0xf15a,	// (0x00062888) find_popup_pane_g1

0xf162,	// (0x00062890) input_popup_find_pane_cp

0xf0fa,	// (0x00062828) input_focus_pane_cp4_ParamLimits

0xf0fa,	// (0x00062828) input_focus_pane_cp4

0xf16c,	// (0x0006289a) input_popup_find_pane_t1_ParamLimits

0xf16c,	// (0x0006289a) input_popup_find_pane_t1

0xb4a0,	// (0x0005ebce) bg_popup_sub_pane_cp

0xf19a,	// (0x000628c8) listscroll_popup_sub_pane

0xf1a2,	// (0x000628d0) list_submenu_pane_ParamLimits

0xf1a2,	// (0x000628d0) list_submenu_pane

0xf1b3,	// (0x000628e1) scroll_pane_cp4

0xf1bb,	// (0x000628e9) list_single_popup_submenu_pane_ParamLimits

0xf1bb,	// (0x000628e9) list_single_popup_submenu_pane

0xf1d0,	// (0x000628fe) list_single_popup_submenu_pane_g1

0xf1d8,	// (0x00062906) list_single_popup_submenu_pane_t1_ParamLimits

0xf1d8,	// (0x00062906) list_single_popup_submenu_pane_t1

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp1_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp1

0x5969,	// (0x00059097) tabs_2_active_pane_g1

0x5971,	// (0x0005909f) tabs_2_active_pane_t1

0xb4ee,	// (0x0005ec1c) bg_passive_tab_pane_cp1_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_passive_tab_pane_cp1

0x5969,	// (0x00059097) tabs_2_passive_pane_g1

0x5971,	// (0x0005909f) tabs_2_passive_pane_t1

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp4

0x5983,	// (0x000590b1) tabs_2_long_active_pane_t1

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp4

0x6912,	// (0x0005a040) list_single_midp_graphic_pane_g4_ParamLimits

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp5

0x59a2,	// (0x000590d0) tabs_3_long_active_pane_t1

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp5

0x6912,	// (0x0005a040) list_single_midp_graphic_pane_g4

0xb4ee,	// (0x0005ec1c) bg_popup_window_pane_cp13_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_popup_window_pane_cp13

0xf1f6,	// (0x00062924) listscroll_popup_fast_pane_ParamLimits

0xf1f6,	// (0x00062924) listscroll_popup_fast_pane

0xf205,	// (0x00062933) grid_popup_fast_pane_ParamLimits

0xf205,	// (0x00062933) grid_popup_fast_pane

0xf217,	// (0x00062945) scroll_pane_cp9_ParamLimits

0xf217,	// (0x00062945) scroll_pane_cp9

0xba9b,	// (0x0005f1c9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xba9b,	// (0x0005f1c9) list_single_graphic_hl_pane_t1_cp2

0xf23b,	// (0x00062969) input_focus_pane_cp20_ParamLimits

0xf23b,	// (0x00062969) input_focus_pane_cp20

0xf249,	// (0x00062977) query_popup_data_pane_t1_ParamLimits

0xf249,	// (0x00062977) query_popup_data_pane_t1

0xf25c,	// (0x0006298a) query_popup_data_pane_t2_ParamLimits

0xf25c,	// (0x0006298a) query_popup_data_pane_t2

0xf2a2,	// (0x000629d0) query_popup_data_pane_t3_ParamLimits

0xf2a2,	// (0x000629d0) query_popup_data_pane_t3

0xf2e3,	// (0x00062a11) query_popup_data_pane_t4_ParamLimits

0xf2e3,	// (0x00062a11) query_popup_data_pane_t4

0xf31f,	// (0x00062a4d) query_popup_data_pane_t5_ParamLimits

0xf31f,	// (0x00062a4d) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x00062ddf) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x00062ddf) query_popup_data_pane_t

0xf0a9,	// (0x000627d7) bg_set_opt_pane_g1

0xf0b1,	// (0x000627df) bg_set_opt_pane_g2

0xf0b9,	// (0x000627e7) bg_set_opt_pane_g3

0xf0c1,	// (0x000627ef) bg_set_opt_pane_g4

0xf0c9,	// (0x000627f7) bg_set_opt_pane_g5

0xf0d1,	// (0x000627ff) bg_set_opt_pane_g6

0xf0d9,	// (0x00062807) bg_set_opt_pane_g7

0xf0e1,	// (0x0006280f) bg_set_opt_pane_g8

0xf0e9,	// (0x00062817) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x00062dea) bg_set_opt_pane_g

0x5ea8,	// (0x000595d6) control_top_pane_stacon_ParamLimits

0x5ea8,	// (0x000595d6) control_top_pane_stacon

0x5efb,	// (0x00059629) signal_pane_stacon_ParamLimits

0x5efb,	// (0x00059629) signal_pane_stacon

0x35b3,	// (0x00056ce1) stacon_top_pane_g1_ParamLimits

0x35b3,	// (0x00056ce1) stacon_top_pane_g1

0x5f20,	// (0x0005964e) title_pane_stacon_ParamLimits

0x5f20,	// (0x0005964e) title_pane_stacon

0x5f4a,	// (0x00059678) uni_indicator_pane_stacon_ParamLimits

0x5f4a,	// (0x00059678) uni_indicator_pane_stacon

0x5f62,	// (0x00059690) battery_pane_stacon_ParamLimits

0x5f62,	// (0x00059690) battery_pane_stacon

0x5fa6,	// (0x000596d4) control_bottom_pane_stacon_ParamLimits

0x5fa6,	// (0x000596d4) control_bottom_pane_stacon

0x5fc9,	// (0x000596f7) navi_pane_stacon_ParamLimits

0x5fc9,	// (0x000596f7) navi_pane_stacon

0x35d5,	// (0x00056d03) stacon_bottom_pane_g1_ParamLimits

0x35d5,	// (0x00056d03) stacon_bottom_pane_g1

0x59b4,	// (0x000590e2) aid_levels_signal_lsc_ParamLimits

0x59b4,	// (0x000590e2) aid_levels_signal_lsc

0x59cb,	// (0x000590f9) signal_pane_stacon_g1_ParamLimits

0x59cb,	// (0x000590f9) signal_pane_stacon_g1

0x59df,	// (0x0005910d) signal_pane_stacon_g2_ParamLimits

0x59df,	// (0x0005910d) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x00062dfd) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00062dfd) signal_pane_stacon_g

0x5a14,	// (0x00059142) title_pane_stacon_t1_ParamLimits

0x5a14,	// (0x00059142) title_pane_stacon_t1

0xf363,	// (0x00062a91) uni_indicator_pane_stacon_g1

0xf36d,	// (0x00062a9b) uni_indicator_pane_stacon_g2

0xf377,	// (0x00062aa5) uni_indicator_pane_stacon_g3

0xf381,	// (0x00062aaf) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x00062e09) uni_indicator_pane_stacon_g

0x5a39,	// (0x00059167) control_top_pane_stacon_g1

0x5a41,	// (0x0005916f) control_top_pane_stacon_t1_ParamLimits

0x5a41,	// (0x0005916f) control_top_pane_stacon_t1

0x5a78,	// (0x000591a6) aid_levels_battery_lsc_ParamLimits

0x5a78,	// (0x000591a6) aid_levels_battery_lsc

0x5a90,	// (0x000591be) battery_pane_stacon_g1_ParamLimits

0x5a90,	// (0x000591be) battery_pane_stacon_g1

0x5aa3,	// (0x000591d1) battery_pane_stacon_g2_ParamLimits

0x5aa3,	// (0x000591d1) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x00062e12) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x00062e12) battery_pane_stacon_g

0x5ae1,	// (0x0005920f) navi_icon_pane_stacon

0x5af5,	// (0x00059223) navi_navi_pane_stacon

0x5ae1,	// (0x0005920f) navi_text_pane_stacon

0x5a39,	// (0x00059167) control_bottom_pane_stacon_g1

0x5b0b,	// (0x00059239) control_bottom_pane_stacon_t1_ParamLimits

0x5b0b,	// (0x00059239) control_bottom_pane_stacon_t1

0x5b42,	// (0x00059270) grid_app_pane_ParamLimits

0x5b42,	// (0x00059270) grid_app_pane

0x5b66,	// (0x00059294) scroll_pane_cp15_ParamLimits

0x5b66,	// (0x00059294) scroll_pane_cp15

0x5b7b,	// (0x000592a9) cell_app_pane_ParamLimits

0x5b7b,	// (0x000592a9) cell_app_pane

0x5ba7,	// (0x000592d5) cell_app_pane_g1_ParamLimits

0x5ba7,	// (0x000592d5) cell_app_pane_g1

0xf3a5,	// (0x00062ad3) cell_app_pane_g2_ParamLimits

0xf3a5,	// (0x00062ad3) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x00062e17) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x00062e17) cell_app_pane_g

0xf3b1,	// (0x00062adf) cell_app_pane_t1_ParamLimits

0xf3b1,	// (0x00062adf) cell_app_pane_t1

0xf3c3,	// (0x00062af1) grid_highlight_pane_ParamLimits

0xf3c3,	// (0x00062af1) grid_highlight_pane

0xf0a9,	// (0x000627d7) cell_highlight_pane_g1

0xf0b1,	// (0x000627df) cell_highlight_pane_g2

0xf0b9,	// (0x000627e7) cell_highlight_pane_g3

0xf0c1,	// (0x000627ef) cell_highlight_pane_g4

0xf0c9,	// (0x000627f7) cell_highlight_pane_g5

0xf0d1,	// (0x000627ff) cell_highlight_pane_g6

0xf0d9,	// (0x00062807) cell_highlight_pane_g7

0xf0e1,	// (0x0006280f) cell_highlight_pane_g8

0xf0e9,	// (0x00062817) cell_highlight_pane_g9

0xb496,	// (0x0005ebc4) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x00062dc5) cell_highlight_pane_g

0xf3d4,	// (0x00062b02) bg_scroll_pane

0x5bde,	// (0x0005930c) scroll_handle_pane

0xf41b,	// (0x00062b49) scroll_bg_pane_g1

0xf430,	// (0x00062b5e) scroll_bg_pane_g2

0xf448,	// (0x00062b76) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x00062e1c) scroll_bg_pane_g

0xf45d,	// (0x00062b8b) scroll_handle_focus_pane_ParamLimits

0xf45d,	// (0x00062b8b) scroll_handle_focus_pane

0xf41b,	// (0x00062b49) scroll_handle_pane_g1

0xf46a,	// (0x00062b98) scroll_handle_pane_g2

0xf448,	// (0x00062b76) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x00062e23) scroll_handle_pane_g

0xf0fa,	// (0x00062828) bg_popup_sub_pane_cp21_ParamLimits

0xf0fa,	// (0x00062828) bg_popup_sub_pane_cp21

0xf47e,	// (0x00062bac) popup_fep_japan_predictive_window_t1_ParamLimits

0xf47e,	// (0x00062bac) popup_fep_japan_predictive_window_t1

0xf495,	// (0x00062bc3) popup_fep_japan_predictive_window_t2_ParamLimits

0xf495,	// (0x00062bc3) popup_fep_japan_predictive_window_t2

0xf4c8,	// (0x00062bf6) popup_fep_japan_predictive_window_t3_ParamLimits

0xf4c8,	// (0x00062bf6) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x00062e2a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x00062e2a) popup_fep_japan_predictive_window_t

0xb4a0,	// (0x0005ebce) bg_popup_sub_pane_cp23

0xf4ff,	// (0x00062c2d) listscroll_japin_cand_pane

0xf507,	// (0x00062c35) popup_fep_japan_candidate_window_t1

0xf515,	// (0x00062c43) candidate_pane_ParamLimits

0xf515,	// (0x00062c43) candidate_pane

0xf527,	// (0x00062c55) scroll_pane_cp30

0xf531,	// (0x00062c5f) list_single_popup_jap_candidate_pane_ParamLimits

0xf531,	// (0x00062c5f) list_single_popup_jap_candidate_pane

0xb4a0,	// (0x0005ebce) list_highlight_pane_cp30

0xf545,	// (0x00062c73) list_single_popup_jap_candidate_pane_t1

0x5c07,	// (0x00059335) level_1_signal

0x5c14,	// (0x00059342) level_2_signal

0x5c21,	// (0x0005934f) level_3_signal

0x5c2e,	// (0x0005935c) level_4_signal

0x5c3b,	// (0x00059369) level_5_signal

0x5c48,	// (0x00059376) level_6_signal

0x5c55,	// (0x00059383) level_7_signal

0x5c07,	// (0x00059335) level_1_battery

0x5c14,	// (0x00059342) level_2_battery

0x5c21,	// (0x0005934f) level_3_battery

0x5c2e,	// (0x0005935c) level_4_battery

0x5c3b,	// (0x00059369) level_5_battery

0x5c48,	// (0x00059376) level_6_battery

0x5c55,	// (0x00059383) level_7_battery

0x33ee,	// (0x00056b1c) list_menu_pane_ParamLimits

0x33ee,	// (0x00056b1c) list_menu_pane

0x3404,	// (0x00056b32) scroll_pane_cp25_ParamLimits

0x3404,	// (0x00056b32) scroll_pane_cp25

0x341d,	// (0x00056b4b) list_double2_graphic_pane_cp2_ParamLimits

0x341d,	// (0x00056b4b) list_double2_graphic_pane_cp2

0x341d,	// (0x00056b4b) list_double2_large_graphic_pane_cp2_ParamLimits

0x341d,	// (0x00056b4b) list_double2_large_graphic_pane_cp2

0x341d,	// (0x00056b4b) list_double2_pane_cp2_ParamLimits

0x341d,	// (0x00056b4b) list_double2_pane_cp2

0x341d,	// (0x00056b4b) list_double_graphic_pane_cp2_ParamLimits

0x341d,	// (0x00056b4b) list_double_graphic_pane_cp2

0x341d,	// (0x00056b4b) list_double_large_graphic_pane_cp2_ParamLimits

0x341d,	// (0x00056b4b) list_double_large_graphic_pane_cp2

0x341d,	// (0x00056b4b) list_double_number_pane_cp2_ParamLimits

0x341d,	// (0x00056b4b) list_double_number_pane_cp2

0x341d,	// (0x00056b4b) list_double_pane_cp2_ParamLimits

0x341d,	// (0x00056b4b) list_double_pane_cp2

0x5c97,	// (0x000593c5) list_single_2graphic_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_2graphic_pane_cp2

0x5c97,	// (0x000593c5) list_single_graphic_heading_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_graphic_heading_pane_cp2

0x5c97,	// (0x000593c5) list_single_graphic_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_graphic_pane_cp2

0x5c97,	// (0x000593c5) list_single_heading_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_heading_pane_cp2

0x342d,	// (0x00056b5b) list_single_large_graphic_pane_cp2_ParamLimits

0x342d,	// (0x00056b5b) list_single_large_graphic_pane_cp2

0x5c97,	// (0x000593c5) list_single_number_heading_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_number_heading_pane_cp2

0x5c97,	// (0x000593c5) list_single_number_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_number_pane_cp2

0x5c97,	// (0x000593c5) list_single_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_pane_cp2

0x3446,	// (0x00056b74) bg_popup_sub_pane_cp22

0x5d80,	// (0x000594ae) popup_side_volume_key_window_g1

0x5daa,	// (0x000594d8) popup_side_volume_key_window_t1

0x5dc8,	// (0x000594f6) volume_small_pane_cp1

0xb621,	// (0x0005ed4f) bg_popup_sub_pane_cp24_ParamLimits

0xb621,	// (0x0005ed4f) bg_popup_sub_pane_cp24

0x345c,	// (0x00056b8a) fep_china_uni_candidate_pane_ParamLimits

0x345c,	// (0x00056b8a) fep_china_uni_candidate_pane

0x3470,	// (0x00056b9e) fep_china_uni_entry_pane

0x3480,	// (0x00056bae) popup_fep_china_uni_window_g1

0x349c,	// (0x00056bca) fep_china_uni_entry_pane_g1

0x34a6,	// (0x00056bd4) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x00062e5b) fep_china_uni_entry_pane_g

0x34b0,	// (0x00056bde) fep_entry_item_pane

0x34ba,	// (0x00056be8) fep_candidate_item_pane

0x34c2,	// (0x00056bf0) fep_china_uni_candidate_pane_g1

0x34cc,	// (0x00056bfa) fep_china_uni_candidate_pane_g2

0x34d4,	// (0x00056c02) fep_china_uni_candidate_pane_g3

0x34dc,	// (0x00056c0a) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x00062e60) fep_china_uni_candidate_pane_g

0xb496,	// (0x0005ebc4) fep_entry_item_pane_g1

0x34e6,	// (0x00056c14) fep_entry_item_pane_t1_ParamLimits

0x34e6,	// (0x00056c14) fep_entry_item_pane_t1

0x34fc,	// (0x00056c2a) fep_candidate_item_pane_t1_ParamLimits

0x34fc,	// (0x00056c2a) fep_candidate_item_pane_t1

0x3511,	// (0x00056c3f) fep_candidate_item_pane_t2_ParamLimits

0x3511,	// (0x00056c3f) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x00062e69) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x00062e69) fep_candidate_item_pane_t

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp31_ParamLimits

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp31

0x3523,	// (0x00056c51) level_1_signal_lsc

0x352c,	// (0x00056c5a) level_2_signal_lsc

0x3535,	// (0x00056c63) level_3_signal_lsc

0x353e,	// (0x00056c6c) level_4_signal_lsc

0x3547,	// (0x00056c75) level_5_signal_lsc

0x3550,	// (0x00056c7e) level_6_signal_lsc

0x3559,	// (0x00056c87) level_7_signal_lsc

0x3559,	// (0x00056c87) level_1_battery_lsc

0x3562,	// (0x00056c90) level_2_battery_lsc

0x356b,	// (0x00056c99) level_3_battery_lsc

0x3574,	// (0x00056ca2) level_4_battery_lsc

0x357d,	// (0x00056cab) level_5_battery_lsc

0x3586,	// (0x00056cb4) level_6_battery_lsc

0x3523,	// (0x00056c51) level_7_battery_lsc

0x358f,	// (0x00056cbd) scroll_handle_focus_pane_g1

0x3598,	// (0x00056cc6) scroll_handle_focus_pane_g2

0x35a1,	// (0x00056ccf) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x00062e6e) scroll_handle_focus_pane_g

0x5dd0,	// (0x000594fe) list_single_2graphic_pane_g1_ParamLimits

0x5dd0,	// (0x000594fe) list_single_2graphic_pane_g1

0x533d,	// (0x00058a6b) list_single_2graphic_pane_g2_ParamLimits

0x533d,	// (0x00058a6b) list_single_2graphic_pane_g2

0x528e,	// (0x000589bc) list_single_2graphic_pane_g3_ParamLimits

0x528e,	// (0x000589bc) list_single_2graphic_pane_g3

0x5ddc,	// (0x0005950a) list_single_2graphic_pane_g4_ParamLimits

0x5ddc,	// (0x0005950a) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x00062e75) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x00062e75) list_single_2graphic_pane_g

0x5de8,	// (0x00059516) list_single_2graphic_pane_t1_ParamLimits

0x5de8,	// (0x00059516) list_single_2graphic_pane_t1

0x5e16,	// (0x00059544) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5e16,	// (0x00059544) list_double2_graphic_large_graphic_pane_g1

0x558d,	// (0x00058cbb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x558d,	// (0x00058cbb) list_double2_graphic_large_graphic_pane_g2

0x54ce,	// (0x00058bfc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x54ce,	// (0x00058bfc) list_double2_graphic_large_graphic_pane_g3

0x5e28,	// (0x00059556) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5e28,	// (0x00059556) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x00062e7e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x00062e7e) list_double2_graphic_large_graphic_pane_g

0x5e34,	// (0x00059562) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5e34,	// (0x00059562) list_double2_graphic_large_graphic_pane_t1

0x5e4a,	// (0x00059578) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5e4a,	// (0x00059578) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x00062e87) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x00062e87) list_double2_graphic_large_graphic_pane_t

0x3633,	// (0x00056d61) popup_fast_swap_window_ParamLimits

0x3633,	// (0x00056d61) popup_fast_swap_window

0x3651,	// (0x00056d7f) popup_side_volume_key_window

0x366f,	// (0x00056d9d) stacon_top_pane

0x3679,	// (0x00056da7) status_pane_ParamLimits

0x3679,	// (0x00056da7) status_pane

0x366f,	// (0x00056d9d) status_small_pane

0xb4a0,	// (0x0005ebce) control_pane

0xb4a0,	// (0x0005ebce) stacon_bottom_pane

0xf025,	// (0x00062753) scroll_pane_cp121

0xf01c,	// (0x0006274a) set_content_pane

0x5e5c,	// (0x0005958a) bg_active_tab_pane_g1_cp1

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp1

0x5e65,	// (0x00059593) bg_active_tab_pane_g3_cp1

0x5e5c,	// (0x0005958a) bg_passive_tab_pane_g1_cp1

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp1

0x5e65,	// (0x00059593) bg_passive_tab_pane_g3_cp1

0x5e6e,	// (0x0005959c) bg_active_tab_pane_g1_cp2

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp2

0x5e77,	// (0x000595a5) bg_active_tab_pane_g3_cp2

0x5e6e,	// (0x0005959c) bg_passive_tab_pane_g1_cp2

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp2

0x5e77,	// (0x000595a5) bg_passive_tab_pane_g3_cp2

0x5e80,	// (0x000595ae) bg_active_tab_pane_g1_cp3

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp3

0x5e89,	// (0x000595b7) bg_active_tab_pane_g3_cp3

0x5e80,	// (0x000595ae) bg_passive_tab_pane_g1_cp3

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp3

0x5e89,	// (0x000595b7) bg_passive_tab_pane_g3_cp3

0x5e92,	// (0x000595c0) bg_active_tab_pane_g1_cp4

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp4

0x5e9d,	// (0x000595cb) bg_active_tab_pane_g3_cp4

0x5e92,	// (0x000595c0) bg_passive_tab_pane_g1_cp4

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp4

0x5e9d,	// (0x000595cb) bg_passive_tab_pane_g3_cp4

0x35fa,	// (0x00056d28) bg_active_tab_pane_g1_cp5

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp5

0x35f1,	// (0x00056d1f) bg_active_tab_pane_g3_cp5

0x35fa,	// (0x00056d28) bg_passive_tab_pane_g1_cp5

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp5

0x35f1,	// (0x00056d1f) bg_passive_tab_pane_g3_cp5

0x5fec,	// (0x0005971a) list_set_graphic_pane_ParamLimits

0x5fec,	// (0x0005971a) list_set_graphic_pane

0xb4a0,	// (0x0005ebce) bg_set_opt_pane_cp4

0x6001,	// (0x0005972f) list_set_graphic_pane_g1_ParamLimits

0x6001,	// (0x0005972f) list_set_graphic_pane_g1

0x600d,	// (0x0005973b) list_set_graphic_pane_g2_ParamLimits

0x600d,	// (0x0005973b) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x00062e8c) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x00062e8c) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x0006320b) volume_small_pane_cp_g

0x6031,	// (0x0005975f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6031,	// (0x0005975f) list_double2_large_graphic_pane_g1_cp2

0x603f,	// (0x0005976d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x603f,	// (0x0005976d) list_double2_large_graphic_pane_g2_cp2

0x3603,	// (0x00056d31) list_double2_large_graphic_pane_g3_cp2

0x360b,	// (0x00056d39) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x360b,	// (0x00056d39) list_double2_large_graphic_pane_t1_cp2

0x3621,	// (0x00056d4f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3621,	// (0x00056d4f) list_double2_large_graphic_pane_t2_cp2

0x9993,	// (0x0005d0c1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9993,	// (0x0005d0c1) list_double_large_graphic_pane_g1_cp2

0x99a6,	// (0x0005d0d4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x99a6,	// (0x0005d0d4) list_double_large_graphic_pane_g2_cp2

0x7ce0,	// (0x0005b40e) list_double_large_graphic_pane_g3_cp2

0x99b7,	// (0x0005d0e5) list_double_large_graphic_pane_g4_cp

0x99bf,	// (0x0005d0ed) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x99bf,	// (0x0005d0ed) list_double_large_graphic_pane_t1_cp2

0x99d6,	// (0x0005d104) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x99d6,	// (0x0005d104) list_double_large_graphic_pane_t2_cp2

0x6050,	// (0x0005977e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x6050,	// (0x0005977e) list_double2_graphic_pane_g1_cp2

0x605e,	// (0x0005978c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x605e,	// (0x0005978c) list_double2_graphic_pane_g2_cp2

0x606f,	// (0x0005979d) list_double2_graphic_pane_g3_cp2

0x3687,	// (0x00056db5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3687,	// (0x00056db5) list_double2_graphic_pane_t1_cp2

0x369d,	// (0x00056dcb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x369d,	// (0x00056dcb) list_double2_graphic_pane_t2_cp2

0x36af,	// (0x00056ddd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x36af,	// (0x00056ddd) list_single_number_heading_pane_g1_cp2

0x7c2d,	// (0x0005b35b) list_single_number_heading_pane_g2_cp2

0x7c35,	// (0x0005b363) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7c35,	// (0x0005b363) list_single_number_heading_pane_t1_cp2

0x7c4b,	// (0x0005b379) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7c4b,	// (0x0005b379) list_single_number_heading_pane_t2_cp2

0x7c5f,	// (0x0005b38d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7c5f,	// (0x0005b38d) list_single_number_heading_pane_t3_cp2

0x36af,	// (0x00056ddd) list_single_heading_pane_g1_cp2_ParamLimits

0x36af,	// (0x00056ddd) list_single_heading_pane_g1_cp2

0x7c2d,	// (0x0005b35b) list_single_heading_pane_g2_cp2

0x7c35,	// (0x0005b363) list_single_heading_pane_t1_cp2_ParamLimits

0x7c35,	// (0x0005b363) list_single_heading_pane_t1_cp2

0x95d9,	// (0x0005cd07) list_single_heading_pane_t2_cp2_ParamLimits

0x95d9,	// (0x0005cd07) list_single_heading_pane_t2_cp2

0x951b,	// (0x0005cc49) list_double_graphic_pane_g1_cp2_ParamLimits

0x951b,	// (0x0005cc49) list_double_graphic_pane_g1_cp2

0x9527,	// (0x0005cc55) list_double_graphic_pane_g2_cp2_ParamLimits

0x9527,	// (0x0005cc55) list_double_graphic_pane_g2_cp2

0x9536,	// (0x0005cc64) list_double_graphic_pane_g3_cp2

0x953e,	// (0x0005cc6c) list_double_graphic_pane_t1_cp2_ParamLimits

0x953e,	// (0x0005cc6c) list_double_graphic_pane_t1_cp2

0x9554,	// (0x0005cc82) list_double_graphic_pane_t2_cp2_ParamLimits

0x9554,	// (0x0005cc82) list_double_graphic_pane_t2_cp2

0x7cd4,	// (0x0005b402) list_double_number_pane_g1_cp2_ParamLimits

0x7cd4,	// (0x0005b402) list_double_number_pane_g1_cp2

0x7ce0,	// (0x0005b40e) list_double_number_pane_g2_cp2

0x94df,	// (0x0005cc0d) list_double_number_pane_t1_cp2_ParamLimits

0x94df,	// (0x0005cc0d) list_double_number_pane_t1_cp2

0x94f3,	// (0x0005cc21) list_double_number_pane_t2_cp2_ParamLimits

0x94f3,	// (0x0005cc21) list_double_number_pane_t2_cp2

0x9509,	// (0x0005cc37) list_double_number_pane_t3_cp2_ParamLimits

0x9509,	// (0x0005cc37) list_double_number_pane_t3_cp2

0x93c8,	// (0x0005caf6) list_single_graphic_pane_g1_cp2_ParamLimits

0x93c8,	// (0x0005caf6) list_single_graphic_pane_g1_cp2

0x7d3a,	// (0x0005b468) list_single_graphic_pane_g2_cp2_ParamLimits

0x7d3a,	// (0x0005b468) list_single_graphic_pane_g2_cp2

0x7d46,	// (0x0005b474) list_single_graphic_pane_g3_cp2

0x939e,	// (0x0005cacc) list_single_graphic_pane_t1_cp2_ParamLimits

0x939e,	// (0x0005cacc) list_single_graphic_pane_t1_cp2

0x7d3a,	// (0x0005b468) list_single_number_pane_g1_cp2_ParamLimits

0x7d3a,	// (0x0005b468) list_single_number_pane_g1_cp2

0x7d46,	// (0x0005b474) list_single_number_pane_g2_cp2

0x939e,	// (0x0005cacc) list_single_number_pane_t1_cp2_ParamLimits

0x939e,	// (0x0005cacc) list_single_number_pane_t1_cp2

0x93b4,	// (0x0005cae2) list_single_number_pane_t2_cp2_ParamLimits

0x93b4,	// (0x0005cae2) list_single_number_pane_t2_cp2

0x603f,	// (0x0005976d) list_double2_pane_g1_cp2_ParamLimits

0x603f,	// (0x0005976d) list_double2_pane_g1_cp2

0x3603,	// (0x00056d31) list_double2_pane_g2_cp2

0x7cac,	// (0x0005b3da) list_double2_pane_t1_cp2_ParamLimits

0x7cac,	// (0x0005b3da) list_double2_pane_t1_cp2

0x7cc2,	// (0x0005b3f0) list_double2_pane_t2_cp2_ParamLimits

0x7cc2,	// (0x0005b3f0) list_double2_pane_t2_cp2

0x7cd4,	// (0x0005b402) list_double_pane_g1_cp2_ParamLimits

0x7cd4,	// (0x0005b402) list_double_pane_g1_cp2

0x7ce0,	// (0x0005b40e) list_double_pane_g2_cp2

0x7ce8,	// (0x0005b416) list_double_pane_t1_cp2_ParamLimits

0x7ce8,	// (0x0005b416) list_double_pane_t1_cp2

0x7cfe,	// (0x0005b42c) list_double_pane_t2_cp2_ParamLimits

0x7cfe,	// (0x0005b42c) list_double_pane_t2_cp2

0x7d2a,	// (0x0005b458) list_single_pane_cp2_g3

0x7d3a,	// (0x0005b468) list_single_pane_g1_cp2_ParamLimits

0x7d3a,	// (0x0005b468) list_single_pane_g1_cp2

0x7d46,	// (0x0005b474) list_single_pane_g2_cp2

0x7d4e,	// (0x0005b47c) list_single_pane_t1_cp2_ParamLimits

0x7d4e,	// (0x0005b47c) list_single_pane_t1_cp2

0x7d66,	// (0x0005b494) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7d66,	// (0x0005b494) list_single_large_graphic_pane_g1_cp2

0x7d74,	// (0x0005b4a2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7d74,	// (0x0005b4a2) list_single_large_graphic_pane_g2_cp2

0x7d80,	// (0x0005b4ae) list_single_large_graphic_pane_g3_cp2

0x7d88,	// (0x0005b4b6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7d88,	// (0x0005b4b6) list_single_large_graphic_pane_g4_cp1

0x7da2,	// (0x0005b4d0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7da2,	// (0x0005b4d0) list_single_large_graphic_pane_t1_cp2

0x9368,	// (0x0005ca96) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9368,	// (0x0005ca96) list_single_graphic_heading_pane_g1_cp2

0x9335,	// (0x0005ca63) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9335,	// (0x0005ca63) list_single_graphic_heading_pane_g4_cp2

0x7d46,	// (0x0005b474) list_single_graphic_heading_pane_g5_cp2

0x9374,	// (0x0005caa2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9374,	// (0x0005caa2) list_single_graphic_heading_pane_t1_cp2

0x938a,	// (0x0005cab8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x938a,	// (0x0005cab8) list_single_graphic_heading_pane_t2_cp2

0x9329,	// (0x0005ca57) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9329,	// (0x0005ca57) list_single_2graphic_pane_g1_cp2

0x9335,	// (0x0005ca63) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9335,	// (0x0005ca63) list_single_2graphic_pane_g2_cp2

0x7d46,	// (0x0005b474) list_single_2graphic_pane_g3_cp2

0x9346,	// (0x0005ca74) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9346,	// (0x0005ca74) list_single_2graphic_pane_g4_cp2

0x9352,	// (0x0005ca80) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9352,	// (0x0005ca80) list_single_2graphic_pane_t1_cp2

0xb496,	// (0x0005ebc4) list_highlight_pane_g10_cp1

0x8f01,	// (0x0005c62f) list_highlight_pane_g1_cp1

0x8f09,	// (0x0005c637) list_highlight_pane_g2_cp1

0x8f11,	// (0x0005c63f) list_highlight_pane_g3_cp1

0x8f19,	// (0x0005c647) list_highlight_pane_g4_cp1

0x8f21,	// (0x0005c64f) list_highlight_pane_g5_cp1

0x8f29,	// (0x0005c657) list_highlight_pane_g6_cp1

0x8f31,	// (0x0005c65f) list_highlight_pane_g7_cp1

0x8f39,	// (0x0005c667) list_highlight_pane_g8_cp1

0x8f41,	// (0x0005c66f) list_highlight_pane_g9_cp1

0x8e21,	// (0x0005c54f) form_field_slider_pane_t3

0x8e2f,	// (0x0005c55d) form_field_slider_pane_t4

0x8e3d,	// (0x0005c56b) slider_form_pane_ParamLimits

0x8e3d,	// (0x0005c56b) slider_form_pane

0xb4a0,	// (0x0005ebce) control_abbreviations

0xb4a0,	// (0x0005ebce) control_conventions

0xb4a0,	// (0x0005ebce) control_definitions

0xb4a0,	// (0x0005ebce) format_table_attribute

0x962f,	// (0x0005cd5d) bg_popup_preview_window_pane_g9

0xb4a0,	// (0x0005ebce) format_table_data2

0xb4a0,	// (0x0005ebce) format_table_data3

0xb4a0,	// (0x0005ebce) format_table_data_example

0x0008,

0xb4a0,	// (0x0005ebce) intro_purpose

0xf8fa,	// (0x00063028) bg_popup_preview_window_pane_g

0xb4a0,	// (0x0005ebce) texts_category

0xb4a0,	// (0x0005ebce) texts_graphics

0x7db8,	// (0x0005b4e6) text_digital

0x7dc7,	// (0x0005b4f5) text_primary

0x7dd6,	// (0x0005b504) text_primary_small

0x7de5,	// (0x0005b513) text_secondary

0x7df4,	// (0x0005b522) text_title

0x9f5f,	// (0x0005d68d) bg_passive_tab_pane_g1_cp3_srt

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp3_srt

0x9f68,	// (0x0005d696) bg_passive_tab_pane_g3_cp3_srt

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp3_srt_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp3_srt

0x9f71,	// (0x0005d69f) tabs_4_active_pane_srt_g1

0x9f79,	// (0x0005d6a7) tabs_4_active_pane_srt_t1_ParamLimits

0x9f79,	// (0x0005d6a7) tabs_4_active_pane_srt_t1

0x9f5f,	// (0x0005d68d) bg_active_tab_pane_g1_cp3_copy1

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp3_copy1

0x9f68,	// (0x0005d696) bg_active_tab_pane_g3_cp3_copy1

0xb4ee,	// (0x0005ec1c) tabs_2_long_active_pane_srt_ParamLimits

0xb4ee,	// (0x0005ec1c) tabs_2_long_active_pane_srt

0xb4ee,	// (0x0005ec1c) tabs_2_long_passive_pane_srt_ParamLimits

0xb4ee,	// (0x0005ec1c) tabs_2_long_passive_pane_srt

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp4_srt

0x9c33,	// (0x0005d361) bg_passive_tab_pane_g1_cp4_srt

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp4_srt

0x9c3c,	// (0x0005d36a) bg_passive_tab_pane_g3_cp4_srt

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp4_srt_ParamLimits

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp4_srt

0x9c45,	// (0x0005d373) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9c45,	// (0x0005d373) tabs_2_long_active_pane_srt_t1

0x9c33,	// (0x0005d361) bg_active_tab_pane_g1_cp4_srt

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp4_srt

0x9c3c,	// (0x0005d36a) bg_active_tab_pane_g3_cp4_srt

0xb621,	// (0x0005ed4f) tabs_3_long_active_pane_srt_ParamLimits

0xb621,	// (0x0005ed4f) tabs_3_long_active_pane_srt

0xb621,	// (0x0005ed4f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb621,	// (0x0005ed4f) tabs_3_long_passive_pane_cp_srt

0xb621,	// (0x0005ed4f) tabs_3_long_passive_pane_srt_ParamLimits

0xb621,	// (0x0005ed4f) tabs_3_long_passive_pane_srt

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp5_srt

0x35fa,	// (0x00056d28) bg_passive_tab_pane_g1_cp5_srt

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp5_srt

0x35f1,	// (0x00056d1f) bg_passive_tab_pane_g3_cp5_srt

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp5_srt_ParamLimits

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp5_srt

0x9c21,	// (0x0005d34f) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9c21,	// (0x0005d34f) tabs_3_long_active_pane_srt_t1

0x35fa,	// (0x00056d28) bg_active_tab_pane_g1_cp5_srt

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp5_srt

0x35f1,	// (0x00056d1f) bg_active_tab_pane_g3_cp5_srt

0x9c13,	// (0x0005d341) navi_text_pane_srt_t1

0x9c0b,	// (0x0005d339) navi_icon_pane_srt_g1

0x7fbf,	// (0x0005b6ed) midp_editing_number_pane_srt

0x7e03,	// (0x0005b531) midp_ticker_pane_srt

0x7fc7,	// (0x0005b6f5) midp_ticker_pane_srt_g1

0x7fcf,	// (0x0005b6fd) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x00062eab) midp_ticker_pane_srt_g

0x7fd7,	// (0x0005b705) midp_ticker_pane_srt_t1

0x9bfc,	// (0x0005d32a) midp_editing_number_pane_t1_copy1

0x5996,	// (0x000590c4) listscroll_midp_pane

0x5996,	// (0x000590c4) midp_form_pane

0x7e6d,	// (0x0005b59b) midp_info_popup_window_ParamLimits

0x7e6d,	// (0x0005b59b) midp_info_popup_window

0xf0fa,	// (0x00062828) bg_popup_sub_pane_cp50_ParamLimits

0xf0fa,	// (0x00062828) bg_popup_sub_pane_cp50

0x8b37,	// (0x0005c265) listscroll_midp_info_pane_ParamLimits

0x8b37,	// (0x0005c265) listscroll_midp_info_pane

0x8b1f,	// (0x0005c24d) listscroll_form_midp_pane_ParamLimits

0x8b1f,	// (0x0005c24d) listscroll_form_midp_pane

0x8b2b,	// (0x0005c259) scroll_bar_cp050

0x8aff,	// (0x0005c22d) list_midp_pane

0xaa44,	// (0x0005e172) signal_pane_g2_cp

0x8a39,	// (0x0005c167) listscroll_midp_info_pane_t1_ParamLimits

0x8a39,	// (0x0005c167) listscroll_midp_info_pane_t1

0x8a51,	// (0x0005c17f) listscroll_midp_info_pane_t2_ParamLimits

0x8a51,	// (0x0005c17f) listscroll_midp_info_pane_t2

0x8a8f,	// (0x0005c1bd) listscroll_midp_info_pane_t3_ParamLimits

0x8a8f,	// (0x0005c1bd) listscroll_midp_info_pane_t3

0x8ac9,	// (0x0005c1f7) listscroll_midp_info_pane_t4_ParamLimits

0x8ac9,	// (0x0005c1f7) listscroll_midp_info_pane_t4

0x0003,

0xf835,	// (0x00062f63) listscroll_midp_info_pane_t_ParamLimits

0xf835,	// (0x00062f63) listscroll_midp_info_pane_t

0xf1b3,	// (0x000628e1) scroll_pane_cp21

0x89d3,	// (0x0005c101) form_midp_field_choice_group_pane

0x89dc,	// (0x0005c10a) form_midp_field_text_pane

0x8a1f,	// (0x0005c14d) form_midp_field_time_pane

0x8a27,	// (0x0005c155) form_midp_gauge_slider_pane

0x8a30,	// (0x0005c15e) form_midp_gauge_wait_pane

0xb4a0,	// (0x0005ebce) form_midp_image_pane

0x69fe,	// (0x0005a12c) list_single_midp_pane_ParamLimits

0x69fe,	// (0x0005a12c) list_single_midp_pane

0x8997,	// (0x0005c0c5) form_midp_field_text_pane_t1

0x8783,	// (0x0005beb1) input_focus_pane_cp050

0x89c2,	// (0x0005c0f0) list_midp_form_text_pane

0x8966,	// (0x0005c094) form_midp_field_choice_group_pane_t1

0x8974,	// (0x0005c0a2) input_focus_pane_cp051

0x8988,	// (0x0005c0b6) list_midp_choice_pane

0xb4a0,	// (0x0005ebce) status_idle_pane

0x894a,	// (0x0005c078) form_midp_field_time_pane_t1

0xb496,	// (0x0005ebc4) wait_anim_pane_g2_copy1

0x8958,	// (0x0005c086) form_midp_field_time_pane_t2

0x0001,

0x7f1d,	// (0x0005b64b) aid_navinavi_width_2_pane

0xf830,	// (0x00062f5e) form_midp_field_time_pane_t

0xb4a0,	// (0x0005ebce) input_focus_pane_cp052

0xb4a0,	// (0x0005ebce) bg_input_focus_pane_cp040

0x890a,	// (0x0005c038) form_midp_gauge_slider_pane_t1

0x8918,	// (0x0005c046) form_midp_gauge_slider_pane_t2

0x8926,	// (0x0005c054) form_midp_gauge_slider_pane_t3

0x8934,	// (0x0005c062) form_midp_gauge_slider_pane_t4

0x0003,

0xf827,	// (0x00062f55) form_midp_gauge_slider_pane_t

0x8942,	// (0x0005c070) form_midp_slider_pane

0xb4ee,	// (0x0005ec1c) bg_input_focus_pane_cp041_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_input_focus_pane_cp041

0x88d7,	// (0x0005c005) form_midp_gauge_wait_pane_t1_ParamLimits

0x88d7,	// (0x0005c005) form_midp_gauge_wait_pane_t1

0x88e9,	// (0x0005c017) form_midp_gauge_wait_pane_t2_ParamLimits

0x88e9,	// (0x0005c017) form_midp_gauge_wait_pane_t2

0x0001,

0xf822,	// (0x00062f50) form_midp_gauge_wait_pane_t_ParamLimits

0xf822,	// (0x00062f50) form_midp_gauge_wait_pane_t

0x88fb,	// (0x0005c029) form_midp_wait_pane_ParamLimits

0x88fb,	// (0x0005c029) form_midp_wait_pane

0x889f,	// (0x0005bfcd) form_midp_image_pane_g1

0x88a8,	// (0x0005bfd6) form_midp_image_pane_t1

0x88b7,	// (0x0005bfe5) form_midp_image_pane_t2

0x88c6,	// (0x0005bff4) form_midp_image_pane_t3

0x0002,

0xf81b,	// (0x00062f49) form_midp_image_pane_t

0x8896,	// (0x0005bfc4) list_single_midp_pane_g1

0x378b,	// (0x00056eb9) list_single_midp_pane_t1

0x887c,	// (0x0005bfaa) list_midp_form_item_pane_ParamLimits

0x887c,	// (0x0005bfaa) list_midp_form_item_pane

0x7ec5,	// (0x0005b5f3) list_midp_form_item_pane_t1

0x7ed4,	// (0x0005b602) midp_ticker_pane_g1

0x7ee0,	// (0x0005b60e) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x00062e91) midp_ticker_pane_g

0x7eec,	// (0x0005b61a) midp_ticker_pane_t1

0x9e6f,	// (0x0005d59d) midp_editing_number_pane_t1

0x9e4d,	// (0x0005d57b) midp_editing_number_pane

0x9e5c,	// (0x0005d58a) midp_ticker_pane

0x9bec,	// (0x0005d31a) ai_message_heading_pane

0xb4a0,	// (0x0005ebce) bg_popup_window_pane_cp14

0x9bf4,	// (0x0005d322) listscroll_ai_message_pane

0x9b72,	// (0x0005d2a0) ai_message_heading_pane_g1_ParamLimits

0x9b72,	// (0x0005d2a0) ai_message_heading_pane_g1

0x9b7e,	// (0x0005d2ac) ai_message_heading_pane_g2_ParamLimits

0x9b7e,	// (0x0005d2ac) ai_message_heading_pane_g2

0x9b8c,	// (0x0005d2ba) ai_message_heading_pane_g3_ParamLimits

0x9b8c,	// (0x0005d2ba) ai_message_heading_pane_g3

0x9b98,	// (0x0005d2c6) ai_message_heading_pane_g4_ParamLimits

0x9b98,	// (0x0005d2c6) ai_message_heading_pane_g4

0x0003,

0xf95c,	// (0x0006308a) ai_message_heading_pane_g_ParamLimits

0xf95c,	// (0x0006308a) ai_message_heading_pane_g

0x9ba4,	// (0x0005d2d2) ai_message_heading_pane_t1_ParamLimits

0x9ba4,	// (0x0005d2d2) ai_message_heading_pane_t1

0x9bbe,	// (0x0005d2ec) ai_message_heading_pane_t2_ParamLimits

0x9bbe,	// (0x0005d2ec) ai_message_heading_pane_t2

0x0001,

0xf965,	// (0x00063093) ai_message_heading_pane_t_ParamLimits

0xf965,	// (0x00063093) ai_message_heading_pane_t

0x9bd2,	// (0x0005d300) bg_popup_heading_pane_cp1_ParamLimits

0x9bd2,	// (0x0005d300) bg_popup_heading_pane_cp1

0x9b60,	// (0x0005d28e) list_ai_message_pane_ParamLimits

0x9b60,	// (0x0005d28e) list_ai_message_pane

0xf1b3,	// (0x000628e1) scroll_pane_cp10

0x9afc,	// (0x0005d22a) list_ai_message_pane_g1

0x9b04,	// (0x0005d232) list_ai_message_pane_g2

0x0001,

0xf939,	// (0x00063067) list_ai_message_pane_g

0x9b0c,	// (0x0005d23a) list_ai_message_pane_t1_ParamLimits

0x9b0c,	// (0x0005d23a) list_ai_message_pane_t1

0x9b21,	// (0x0005d24f) list_ai_message_pane_t2_ParamLimits

0x9b21,	// (0x0005d24f) list_ai_message_pane_t2

0x9b36,	// (0x0005d264) list_ai_message_pane_t3_ParamLimits

0x9b36,	// (0x0005d264) list_ai_message_pane_t3

0x9b4b,	// (0x0005d279) list_ai_message_pane_t4_ParamLimits

0x9b4b,	// (0x0005d279) list_ai_message_pane_t4

0x0003,

0xf93e,	// (0x0006306c) list_ai_message_pane_t_ParamLimits

0xf93e,	// (0x0006306c) list_ai_message_pane_t

0x9ae5,	// (0x0005d213) cell_ai_soft_ind_pane_ParamLimits

0x9ae5,	// (0x0005d213) cell_ai_soft_ind_pane

0x7efe,	// (0x0005b62c) cell_ai_soft_ind_pane_g1_ParamLimits

0x7efe,	// (0x0005b62c) cell_ai_soft_ind_pane_g1

0xb4a0,	// (0x0005ebce) grid_highlight_cp1

0x7f0b,	// (0x0005b639) text_secondary_cp56_ParamLimits

0x7f0b,	// (0x0005b639) text_secondary_cp56

0x9aba,	// (0x0005d1e8) example_general_pane_ParamLimits

0x9aba,	// (0x0005d1e8) example_general_pane

0x9ac6,	// (0x0005d1f4) example_parent_pane_g1_ParamLimits

0x9ac6,	// (0x0005d1f4) example_parent_pane_g1

0x9ad2,	// (0x0005d200) example_parent_pane_t1_ParamLimits

0x9ad2,	// (0x0005d200) example_parent_pane_t1

0x664d,	// (0x00059d7b) popup_preview_text_window_ParamLimits

0x664d,	// (0x00059d7b) popup_preview_text_window

0x7d32,	// (0x0005b460) list_single_pane_cp2_g4

0xb6d7,	// (0x0005ee05) bg_popup_preview_window_pane_ParamLimits

0xb6d7,	// (0x0005ee05) bg_popup_preview_window_pane

0x9639,	// (0x0005cd67) popup_preview_text_window_t1_ParamLimits

0x9639,	// (0x0005cd67) popup_preview_text_window_t1

0x9657,	// (0x0005cd85) popup_preview_text_window_t2_ParamLimits

0x9657,	// (0x0005cd85) popup_preview_text_window_t2

0x9854,	// (0x0005cf82) popup_preview_text_window_t3_ParamLimits

0x9854,	// (0x0005cf82) popup_preview_text_window_t3

0x9899,	// (0x0005cfc7) popup_preview_text_window_t4_ParamLimits

0x9899,	// (0x0005cfc7) popup_preview_text_window_t4

0x0004,

0xf90d,	// (0x0006303b) popup_preview_text_window_t_ParamLimits

0xf90d,	// (0x0006303b) popup_preview_text_window_t

0x9917,	// (0x0005d045) scroll_pane_cp11

0x8687,	// (0x0005bdb5) bg_popup_preview_window_pane_g1

0x95ed,	// (0x0005cd1b) bg_popup_preview_window_pane_g2

0x95f7,	// (0x0005cd25) bg_popup_preview_window_pane_g3

0x9601,	// (0x0005cd2f) bg_popup_preview_window_pane_g4

0x960b,	// (0x0005cd39) bg_popup_preview_window_pane_g5

0x9615,	// (0x0005cd43) bg_popup_preview_window_pane_g6

0x961d,	// (0x0005cd4b) bg_popup_preview_window_pane_g7

0x9625,	// (0x0005cd53) bg_popup_preview_window_pane_g8

0x4b04,	// (0x00058232) aid_popup_width_pane

0x6629,	// (0x00059d57) popup_midp_note_alarm_window_ParamLimits

0x6629,	// (0x00059d57) popup_midp_note_alarm_window

0xf036,	// (0x00062764) data_form_pane_ParamLimits

0x581e,	// (0x00058f4c) form_field_data_pane_g1

0x5828,	// (0x00058f56) form_field_data_pane_t1_ParamLimits

0xf042,	// (0x00062770) input_focus_pane_ParamLimits

0xf050,	// (0x0006277e) data_form_wide_pane_ParamLimits

0x334a,	// (0x00056a78) form_field_data_wide_pane_g1

0x3356,	// (0x00056a84) form_field_data_wide_pane_t1_ParamLimits

0xedbd,	// (0x000624eb) input_focus_pane_cp6_ParamLimits

0x595b,	// (0x00059089) input_popup_find_pane_g1_ParamLimits

0x595b,	// (0x00059089) input_popup_find_pane_g1

0x5ab4,	// (0x000591e2) aid_navi_side_left_pane

0x5ac9,	// (0x000591f7) aid_navi_side_right_pane

0x8ffc,	// (0x0005c72a) bg_popup_window_pane_cp30_ParamLimits

0x8ffc,	// (0x0005c72a) bg_popup_window_pane_cp30

0x9076,	// (0x0005c7a4) popup_midp_note_alarm_window_g1_ParamLimits

0x9076,	// (0x0005c7a4) popup_midp_note_alarm_window_g1

0x90a6,	// (0x0005c7d4) popup_midp_note_alarm_window_t1_ParamLimits

0x90a6,	// (0x0005c7d4) popup_midp_note_alarm_window_t1

0x9147,	// (0x0005c875) popup_midp_note_alarm_window_t2_ParamLimits

0x9147,	// (0x0005c875) popup_midp_note_alarm_window_t2

0x91f5,	// (0x0005c923) popup_midp_note_alarm_window_t3_ParamLimits

0x91f5,	// (0x0005c923) popup_midp_note_alarm_window_t3

0x9227,	// (0x0005c955) popup_midp_note_alarm_window_t4_ParamLimits

0x9227,	// (0x0005c955) popup_midp_note_alarm_window_t4

0x924d,	// (0x0005c97b) popup_midp_note_alarm_window_t5_ParamLimits

0x924d,	// (0x0005c97b) popup_midp_note_alarm_window_t5

0x000a,

0xf8aa,	// (0x00062fd8) popup_midp_note_alarm_window_t_ParamLimits

0xf8aa,	// (0x00062fd8) popup_midp_note_alarm_window_t

0x92f9,	// (0x0005ca27) wait_bar_pane_cp1_ParamLimits

0x92f9,	// (0x0005ca27) wait_bar_pane_cp1

0xb4a0,	// (0x0005ebce) wait_anim_pane_copy1

0xb4a0,	// (0x0005ebce) wait_border_pane_copy1

0x8ce1,	// (0x0005c40f) wait_border_pane_g1_copy1

0x3370,	// (0x00056a9e) form_field_popup_pane_g1

0x5842,	// (0x00058f70) form_field_popup_pane_t1_ParamLimits

0xf042,	// (0x00062770) input_focus_pane_cp7_ParamLimits

0xf07c,	// (0x000627aa) list_form_pane_ParamLimits

0x3378,	// (0x00056aa6) form_field_popup_wide_pane_g1

0x3380,	// (0x00056aae) form_field_popup_wide_pane_t1_ParamLimits

0xf042,	// (0x00062770) input_focus_pane_cp8_ParamLimits

0xf088,	// (0x000627b6) list_form_wide_pane_ParamLimits

0x9fec,	// (0x0005d71a) aid_size_cell_graphic_pane

0x58c1,	// (0x00058fef) data_form_pane_t1_ParamLimits

0x6c8d,	// (0x0005a3bb) data_form_wide_pane_t1_ParamLimits

0x8228,	// (0x0005b956) bg_status_flat_pane

0x4f23,	// (0x00058651) title_pane_t1_ParamLimits

0xb4b6,	// (0x0005ebe4) title_pane_t2_ParamLimits

0xb4dc,	// (0x0005ec0a) title_pane_t3_ParamLimits

0xf55d,	// (0x00062c8b) title_pane_t_ParamLimits

0x5c07,	// (0x00059335) level_1_signal_ParamLimits

0x5c14,	// (0x00059342) level_2_signal_ParamLimits

0x5c21,	// (0x0005934f) level_3_signal_ParamLimits

0x5c2e,	// (0x0005935c) level_4_signal_ParamLimits

0x5c3b,	// (0x00059369) level_5_signal_ParamLimits

0x5c48,	// (0x00059376) level_6_signal_ParamLimits

0x5c55,	// (0x00059383) level_7_signal_ParamLimits

0x5c07,	// (0x00059335) level_1_battery_ParamLimits

0x5c14,	// (0x00059342) level_2_battery_ParamLimits

0x5c21,	// (0x0005934f) level_3_battery_ParamLimits

0x5c2e,	// (0x0005935c) level_4_battery_ParamLimits

0x5c3b,	// (0x00059369) level_5_battery_ParamLimits

0x5c48,	// (0x00059376) level_6_battery_ParamLimits

0x5c55,	// (0x00059383) level_7_battery_ParamLimits

0x8f01,	// (0x0005c62f) bg_status_flat_pane_g1

0x8f09,	// (0x0005c637) bg_status_flat_pane_g2

0x8f11,	// (0x0005c63f) bg_status_flat_pane_g3

0x8f19,	// (0x0005c647) bg_status_flat_pane_g4

0x8f21,	// (0x0005c64f) bg_status_flat_pane_g5

0x8f29,	// (0x0005c657) bg_status_flat_pane_g6

0x8f31,	// (0x0005c65f) bg_status_flat_pane_g7

0x4f93,	// (0x000586c1) tabs_3_active_pane_t1_ParamLimits

0x4f93,	// (0x000586c1) tabs_3_passive_pane_t1_ParamLimits

0x4fad,	// (0x000586db) tabs_4_active_pane_t1_ParamLimits

0x4fad,	// (0x000586db) tabs_4_1_passive_pane_t1_ParamLimits

0x5971,	// (0x0005909f) tabs_2_active_pane_t1_ParamLimits

0x5971,	// (0x0005909f) tabs_2_passive_pane_t1_ParamLimits

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp4_ParamLimits

0x5983,	// (0x000590b1) tabs_2_long_active_pane_t1_ParamLimits

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp4_ParamLimits

0x6945,	// (0x0005a073) list_single_midp_graphic_pane_t1_ParamLimits

0x1a4a,	// (0x00055178) bg_active_tab_pane_cp5_ParamLimits

0x59a2,	// (0x000590d0) tabs_3_long_active_pane_t1_ParamLimits

0x5996,	// (0x000590c4) bg_passive_tab_pane_cp5_ParamLimits

0x6945,	// (0x0005a073) list_single_midp_graphic_pane_t1

0x8228,	// (0x0005b956) bg_status_flat_pane_ParamLimits

0x82f3,	// (0x0005ba21) indicator_pane_cp2_ParamLimits

0x82f3,	// (0x0005ba21) indicator_pane_cp2

0x8436,	// (0x0005bb64) navi_pane_srt_ParamLimits

0x8436,	// (0x0005bb64) navi_pane_srt

0x845a,	// (0x0005bb88) popup_clock_digital_analogue_window_cp1

0xb532,	// (0x0005ec60) indicator_pane_t1

0x7e03,	// (0x0005b531) copy_highlight_pane

0x7e03,	// (0x0005b531) cursor_graphics_pane

0x7e03,	// (0x0005b531) graphic_within_text_pane

0x7e03,	// (0x0005b531) link_highlight_pane

0x98da,	// (0x0005d008) popup_preview_text_window_t5_ParamLimits

0x98da,	// (0x0005d008) popup_preview_text_window_t5

0x7f27,	// (0x0005b655) cursor_digital_pane

0x7f27,	// (0x0005b655) cursor_primary_pane

0x7f38,	// (0x0005b666) cursor_primary_small_pane

0x7f40,	// (0x0005b66e) cursor_secondary_pane

0x7f48,	// (0x0005b676) cursor_title_pane

0x7f27,	// (0x0005b655) link_highlight_digital_pane

0x7f2f,	// (0x0005b65d) link_highlight_primary_pane

0x7f38,	// (0x0005b666) link_highlight_primary_small_pane

0x7f40,	// (0x0005b66e) link_highlight_secondary_pane

0x7f48,	// (0x0005b676) link_highlight_title_pane

0x7f27,	// (0x0005b655) copy_highlight_digital_pane

0x7f27,	// (0x0005b655) copy_highlight_primary_pane

0x7f38,	// (0x0005b666) copy_highlight_primary_small_pane

0x7f40,	// (0x0005b66e) copy_highlight_secondary_pane

0x7f48,	// (0x0005b676) copy_highlight_title_pane

0x7f40,	// (0x0005b66e) graphic_text_digital_pane

0x8f9f,	// (0x0005c6cd) graphic_text_primary_pane

0x8fa8,	// (0x0005c6d6) graphic_text_primary_small_pane

0x7f38,	// (0x0005b666) graphic_text_secondary_pane

0x7f27,	// (0x0005b655) graphic_text_title_pane

0x7f50,	// (0x0005b67e) cursor_primary_pane_g1

0x8f91,	// (0x0005c6bf) cursor_text_primary_t1

0x8f79,	// (0x0005c6a7) cursor_primary_small_pane_g1

0x8f83,	// (0x0005c6b1) cursor_text_primary_small_t1

0x8f61,	// (0x0005c68f) cursor_primary_small_pane_g1_copy1

0x8f6b,	// (0x0005c699) cursor_text_primary_small_t1_copy1

0x8f49,	// (0x0005c677) cursor_text_title_t1

0x8f57,	// (0x0005c685) cursor_title_pane_g1

0x7f50,	// (0x0005b67e) cursor_digital_pane_g1

0x7f5a,	// (0x0005b688) cursor_text_digital_t1

0x7f68,	// (0x0005b696) link_highlight_primary_pane_g1

0x8ef2,	// (0x0005c620) link_highlight_primary_pane_t1

0x7f68,	// (0x0005b696) link_highlight_primary_small_pane_g1

0x7f70,	// (0x0005b69e) link_highlight_primary_small_pane_t1

0x7f7f,	// (0x0005b6ad) link_highlight_secondary_pane_g1

0x7f87,	// (0x0005b6b5) link_highlight_secondary_pane_t1

0x8e66,	// (0x0005c594) link_highlight_title_pane_g1

0x8e6e,	// (0x0005c59c) link_highlight_title_pane_t1

0x8e4f,	// (0x0005c57d) link_highlight_digital_pane_g1

0x8e57,	// (0x0005c585) link_highlight_digital_pane_t1

0x8d17,	// (0x0005c445) copy_highlight_primary_pane_g1

0x8d2e,	// (0x0005c45c) copy_highlight_primary_pane_t1

0x8d17,	// (0x0005c445) copy_highlight_primary_small_pane_g1

0x8d1f,	// (0x0005c44d) copy_highlight_primary_small_pane_t1

0x7f96,	// (0x0005b6c4) copy_highlight_secondary_pane_g1

0x7f9e,	// (0x0005b6cc) copy_highlight_secondary_pane_t1

0x8d00,	// (0x0005c42e) copy_highlight_title_pane_g1

0x8d08,	// (0x0005c436) copy_highlight_title_pane_t1

0x8d17,	// (0x0005c445) copy_highlight_digital_pane_g1

0xa1bc,	// (0x0005d8ea) copy_highlight_digital_pane_t1

0xa110,	// (0x0005d83e) graphic_text_primary_pane_g1

0xa1a0,	// (0x0005d8ce) graphic_text_primary_pane_t1

0xa1ae,	// (0x0005d8dc) graphic_text_primary_pane_t2

0x0001,

0xf9d9,	// (0x00063107) graphic_text_primary_pane_t

0xa17c,	// (0x0005d8aa) graphic_text_primary_small_pane_g1

0xa184,	// (0x0005d8b2) graphic_text_primary_small_pane_t1

0xa192,	// (0x0005d8c0) graphic_text_primary_small_pane_t2

0x0001,

0xf9d4,	// (0x00063102) graphic_text_primary_small_pane_t

0xa158,	// (0x0005d886) graphic_text_secondary_pane_g1

0xa160,	// (0x0005d88e) graphic_text_secondary_pane_t1

0xa16e,	// (0x0005d89c) graphic_text_secondary_pane_t2

0x0001,

0xf9cf,	// (0x000630fd) graphic_text_secondary_pane_t

0xa134,	// (0x0005d862) graphic_text_title_pane_g1

0xa13c,	// (0x0005d86a) graphic_text_title_pane_t1

0xa14a,	// (0x0005d878) graphic_text_title_pane_t2

0x0001,

0xf9ca,	// (0x000630f8) graphic_text_title_pane_t

0xa110,	// (0x0005d83e) graphic_text_digital_pane_g1

0xa118,	// (0x0005d846) graphic_text_digital_pane_t1

0xa126,	// (0x0005d854) graphic_text_digital_pane_t2

0x0001,

0xf9c5,	// (0x000630f3) graphic_text_digital_pane_t

0xb4ee,	// (0x0005ec1c) navi_icon_pane_srt_ParamLimits

0xb4ee,	// (0x0005ec1c) navi_icon_pane_srt

0xb4a0,	// (0x0005ebce) navi_midp_pane_srt

0xb4a0,	// (0x0005ebce) navi_navi_pane_srt

0xb4ee,	// (0x0005ec1c) navi_text_pane_srt_ParamLimits

0xb4ee,	// (0x0005ec1c) navi_text_pane_srt

0xa0db,	// (0x0005d809) navi_navi_icon_text_pane_srt

0xa0e3,	// (0x0005d811) navi_navi_pane_srt_g1_ParamLimits

0xa0e3,	// (0x0005d811) navi_navi_pane_srt_g1

0xa0f5,	// (0x0005d823) navi_navi_pane_srt_g2_ParamLimits

0xa0f5,	// (0x0005d823) navi_navi_pane_srt_g2

0x0001,

0xf9c0,	// (0x000630ee) navi_navi_pane_srt_g_ParamLimits

0xf9c0,	// (0x000630ee) navi_navi_pane_srt_g

0xa107,	// (0x0005d835) navi_navi_tabs_pane_srt

0xa0db,	// (0x0005d809) navi_navi_text_pane_srt

0xa0db,	// (0x0005d809) navi_navi_volume_pane_srt

0xa0cc,	// (0x0005d7fa) navi_navi_text_pane_srt_t1

0x6d74,	// (0x0005a4a2) navi_navi_volume_pane_srt_g1

0x6d7c,	// (0x0005a4aa) volume_small_pane_srt_ParamLimits

0x6d7c,	// (0x0005a4aa) volume_small_pane_srt

0x6079,	// (0x000597a7) volume_small_pane_srt_g1_ParamLimits

0x6079,	// (0x000597a7) volume_small_pane_srt_g1

0x6089,	// (0x000597b7) volume_small_pane_srt_g2_ParamLimits

0x6089,	// (0x000597b7) volume_small_pane_srt_g2

0x609a,	// (0x000597c8) volume_small_pane_srt_g3_ParamLimits

0x609a,	// (0x000597c8) volume_small_pane_srt_g3

0x60ab,	// (0x000597d9) volume_small_pane_srt_g4_ParamLimits

0x60ab,	// (0x000597d9) volume_small_pane_srt_g4

0x60bc,	// (0x000597ea) volume_small_pane_srt_g5_ParamLimits

0x60bc,	// (0x000597ea) volume_small_pane_srt_g5

0x60cd,	// (0x000597fb) volume_small_pane_srt_g6_ParamLimits

0x60cd,	// (0x000597fb) volume_small_pane_srt_g6

0x60de,	// (0x0005980c) volume_small_pane_srt_g7_ParamLimits

0x60de,	// (0x0005980c) volume_small_pane_srt_g7

0x60ef,	// (0x0005981d) volume_small_pane_srt_g8_ParamLimits

0x60ef,	// (0x0005981d) volume_small_pane_srt_g8

0x6100,	// (0x0005982e) volume_small_pane_srt_g9_ParamLimits

0x6100,	// (0x0005982e) volume_small_pane_srt_g9

0x6111,	// (0x0005983f) volume_small_pane_srt_g10_ParamLimits

0x6111,	// (0x0005983f) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x00062e96) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x00062e96) volume_small_pane_srt_g

0xecbd,	// (0x000623eb) query_popup_data_pane_cp2

0xa0b2,	// (0x0005d7e0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa0b2,	// (0x0005d7e0) navi_navi_icon_text_pane_srt_t1

0x8f9f,	// (0x0005c6cd) navi_tabs_2_long_pane_srt

0x8f9f,	// (0x0005c6cd) navi_tabs_2_pane_srt

0x8f9f,	// (0x0005c6cd) navi_tabs_3_long_pane_srt

0x8f9f,	// (0x0005c6cd) navi_tabs_3_pane_srt

0x8f9f,	// (0x0005c6cd) navi_tabs_4_pane_srt

0x6d54,	// (0x0005a482) tabs_2_active_pane_srt_ParamLimits

0x6d54,	// (0x0005a482) tabs_2_active_pane_srt

0x6d64,	// (0x0005a492) tabs_2_passive_pane_srt_ParamLimits

0x6d64,	// (0x0005a492) tabs_2_passive_pane_srt

0x814f,	// (0x0005b87d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x814f,	// (0x0005b87d) bg_passive_tab_pane_cp1_srt

0xa07e,	// (0x0005d7ac) bg_passive_tab_pane_g1_cp1_srt

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp1_srt

0xa087,	// (0x0005d7b5) bg_passive_tab_pane_g3_cp1_srt

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp1_srt_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp1_srt

0xa090,	// (0x0005d7be) tabs_2_active_pane_srt_g1

0xa098,	// (0x0005d7c6) tabs_2_active_pane_srt_t1_ParamLimits

0xa098,	// (0x0005d7c6) tabs_2_active_pane_srt_t1

0xa07e,	// (0x0005d7ac) bg_active_tab_pane_g1_cp1_srt

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp1_srt

0xa087,	// (0x0005d7b5) bg_active_tab_pane_g3_cp1_srt

0x6d21,	// (0x0005a44f) tabs_3_active_pane_srt_ParamLimits

0x6d21,	// (0x0005a44f) tabs_3_active_pane_srt

0x6d32,	// (0x0005a460) tabs_3_passive_pane_cp_srt_ParamLimits

0x6d32,	// (0x0005a460) tabs_3_passive_pane_cp_srt

0x6d43,	// (0x0005a471) tabs_3_passive_pane_srt_ParamLimits

0x6d43,	// (0x0005a471) tabs_3_passive_pane_srt

0x814f,	// (0x0005b87d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x814f,	// (0x0005b87d) bg_passive_tab_pane_cp2_srt

0x7fad,	// (0x0005b6db) bg_passive_tab_pane_g1_cp2_srt

0x35aa,	// (0x00056cd8) bg_passive_tab_pane_g2_cp2_srt

0x7fb6,	// (0x0005b6e4) bg_passive_tab_pane_g3_cp2_srt

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp2_srt_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_active_tab_pane_cp2_srt

0xa064,	// (0x0005d792) tabs_3_active_pane_srt_g1

0xa06c,	// (0x0005d79a) tabs_3_active_pane_srt_t1_ParamLimits

0xa06c,	// (0x0005d79a) tabs_3_active_pane_srt_t1

0x7fad,	// (0x0005b6db) bg_active_tab_pane_g1_cp2_srt

0x35aa,	// (0x00056cd8) bg_active_tab_pane_g2_cp2_srt

0x7fb6,	// (0x0005b6e4) bg_active_tab_pane_g3_cp2_srt

0x6cd9,	// (0x0005a407) tabs_4_active_pane_srt_ParamLimits

0x6cd9,	// (0x0005a407) tabs_4_active_pane_srt

0x6ceb,	// (0x0005a419) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6ceb,	// (0x0005a419) tabs_4_passive_pane_cp2_srt

0x6276,	// (0x000599a4) aid_size_cell_toolbar

0x5996,	// (0x000590c4) main_idle_act_pane_ParamLimits

0x644f,	// (0x00059b7d) popup_large_graphic_colour_window_ParamLimits

0x67f6,	// (0x00059f24) popup_toolbar_window_ParamLimits

0x67f6,	// (0x00059f24) popup_toolbar_window

0x9e7e,	// (0x0005d5ac) list_single_graphic_2heading_pane_ParamLimits

0x9e7e,	// (0x0005d5ac) list_single_graphic_2heading_pane

0xf38b,	// (0x00062ab9) aid_size_cell_apps_grid_lsc_pane

0xf39d,	// (0x00062acb) aid_size_cell_apps_grid_prt_pane

0x814f,	// (0x0005b87d) bg_wml_button_pane_cp1_ParamLimits

0x814f,	// (0x0005b87d) bg_wml_button_pane_cp1

0x8997,	// (0x0005c0c5) form_midp_field_text_pane_t1_ParamLimits

0x8783,	// (0x0005beb1) input_focus_pane_cp050_ParamLimits

0x89c2,	// (0x0005c0f0) list_midp_form_text_pane_ParamLimits

0x8974,	// (0x0005c0a2) input_focus_pane_cp051_ParamLimits

0x8988,	// (0x0005c0b6) list_midp_choice_pane_ParamLimits

0x883c,	// (0x0005bf6a) list_single_2graphic_pane_cp3_ParamLimits

0x883c,	// (0x0005bf6a) list_single_2graphic_pane_cp3

0x8855,	// (0x0005bf83) list_single_midp_graphic_pane_ParamLimits

0x8855,	// (0x0005bf83) list_single_midp_graphic_pane

0x4a70,	// (0x0005819e) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a70,	// (0x0005819e) list_single_graphic_2heading_pane_g1

0x4a7c,	// (0x000581aa) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a7c,	// (0x000581aa) list_single_graphic_2heading_pane_g4

0x4a88,	// (0x000581b6) list_single_graphic_2heading_pane_g5_ParamLimits

0x4a88,	// (0x000581b6) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x00062ee9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x00062ee9) list_single_graphic_2heading_pane_g

0x4a94,	// (0x000581c2) list_single_graphic_2heading_pane_t1_ParamLimits

0x4a94,	// (0x000581c2) list_single_graphic_2heading_pane_t1

0x4aa8,	// (0x000581d6) list_single_graphic_2heading_pane_t2_ParamLimits

0x4aa8,	// (0x000581d6) list_single_graphic_2heading_pane_t2

0x4ac4,	// (0x000581f2) list_single_graphic_2heading_pane_t3_ParamLimits

0x4ac4,	// (0x000581f2) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x00062ef0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x00062ef0) list_single_graphic_2heading_pane_t

0x85b9,	// (0x0005bce7) bg_popup_sub_pane_cp2

0x85e3,	// (0x0005bd11) grid_toobar_pane

0x68b5,	// (0x00059fe3) cell_toolbar_pane_ParamLimits

0x68b5,	// (0x00059fe3) cell_toolbar_pane

0x862b,	// (0x0005bd59) cell_toolbar_pane_g1_ParamLimits

0x862b,	// (0x0005bd59) cell_toolbar_pane_g1

0x863f,	// (0x0005bd6d) cell_toolbar_pane_g2_ParamLimits

0x863f,	// (0x0005bd6d) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x00062efe) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x00062efe) cell_toolbar_pane_g

0x8661,	// (0x0005bd8f) grid_highlight_pane_cp2_ParamLimits

0x8661,	// (0x0005bd8f) grid_highlight_pane_cp2

0x867b,	// (0x0005bda9) toolbar_button_pane

0x8687,	// (0x0005bdb5) toolbar_button_pane_g1

0x868f,	// (0x0005bdbd) toolbar_button_pane_g2

0x8697,	// (0x0005bdc5) toolbar_button_pane_g3

0x869f,	// (0x0005bdcd) toolbar_button_pane_g4

0x86a7,	// (0x0005bdd5) toolbar_button_pane_g5

0x86af,	// (0x0005bddd) toolbar_button_pane_g6

0x86b7,	// (0x0005bde5) toolbar_button_pane_g7

0x86bf,	// (0x0005bded) toolbar_button_pane_g8

0x86c7,	// (0x0005bdf5) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x00062f03) toolbar_button_pane_g

0x68ed,	// (0x0005a01b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x68ed,	// (0x0005a01b) list_single_2graphic_pane_g1_cp3

0x68f9,	// (0x0005a027) list_single_2graphic_pane_g2_cp3_ParamLimits

0x68f9,	// (0x0005a027) list_single_2graphic_pane_g2_cp3

0x690a,	// (0x0005a038) list_single_2graphic_pane_g3_cp3

0x6912,	// (0x0005a040) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6912,	// (0x0005a040) list_single_2graphic_pane_g4_cp3

0x691e,	// (0x0005a04c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x691e,	// (0x0005a04c) list_single_2graphic_pane_t1_cp3

0x6939,	// (0x0005a067) list_single_midp_graphic_pane_g2_ParamLimits

0x6939,	// (0x0005a067) list_single_midp_graphic_pane_g2

0x4a60,	// (0x0005818e) aid_zoom_text_primary

0x4a68,	// (0x00058196) aid_zoom_text_secondary

0x806a,	// (0x0005b798) status_small_pane_g7_ParamLimits

0x806a,	// (0x0005b798) status_small_pane_g7

0x808d,	// (0x0005b7bb) status_small_pane_t1_ParamLimits

0x4f06,	// (0x00058634) title_pane_g2

0x0003,

0xf554,	// (0x00062c82) title_pane_g

0x5167,	// (0x00058895) aid_size_cell_colour_1_pane_ParamLimits

0x5167,	// (0x00058895) aid_size_cell_colour_1_pane

0x517b,	// (0x000588a9) aid_size_cell_colour_2_pane_ParamLimits

0x517b,	// (0x000588a9) aid_size_cell_colour_2_pane

0x518f,	// (0x000588bd) aid_size_cell_colour_3_pane_ParamLimits

0x518f,	// (0x000588bd) aid_size_cell_colour_3_pane

0x51a3,	// (0x000588d1) aid_size_cell_colour_4_pane_ParamLimits

0x51a3,	// (0x000588d1) aid_size_cell_colour_4_pane

0x59f0,	// (0x0005911e) title_pane_stacon_g1_ParamLimits

0x59f0,	// (0x0005911e) title_pane_stacon_g1

0x8d85,	// (0x0005c4b3) popup_note_wait_window_g3_ParamLimits

0x8d85,	// (0x0005c4b3) popup_note_wait_window_g3

0x8dfc,	// (0x0005c52a) popup_note_wait_window_t5_ParamLimits

0x8dfc,	// (0x0005c52a) popup_note_wait_window_t5

0xb4a0,	// (0x0005ebce) main_feb_china_hwr_fs_writing_pane

0x6316,	// (0x00059a44) popup_feb_china_hwr_fs_window_ParamLimits

0x6316,	// (0x00059a44) popup_feb_china_hwr_fs_window

0x695b,	// (0x0005a089) aid_size_cell_hwr_fs_ParamLimits

0x695b,	// (0x0005a089) aid_size_cell_hwr_fs

0x8783,	// (0x0005beb1) bg_popup_sub_pane_cp3_ParamLimits

0x8783,	// (0x0005beb1) bg_popup_sub_pane_cp3

0x6970,	// (0x0005a09e) grid_hwr_fs_pane_ParamLimits

0x6970,	// (0x0005a09e) grid_hwr_fs_pane

0x6988,	// (0x0005a0b6) linegrid_hwr_fs_pane_ParamLimits

0x6988,	// (0x0005a0b6) linegrid_hwr_fs_pane

0x6998,	// (0x0005a0c6) cell_hwr_fs_pane_ParamLimits

0x6998,	// (0x0005a0c6) cell_hwr_fs_pane

0x878f,	// (0x0005bebd) linegrid_hwr_fs_pane_g1_ParamLimits

0x878f,	// (0x0005bebd) linegrid_hwr_fs_pane_g1

0x879b,	// (0x0005bec9) linegrid_hwr_fs_pane_g2_ParamLimits

0x879b,	// (0x0005bec9) linegrid_hwr_fs_pane_g2

0x87ad,	// (0x0005bedb) linegrid_hwr_fs_pane_g3_ParamLimits

0x87ad,	// (0x0005bedb) linegrid_hwr_fs_pane_g3

0x69bc,	// (0x0005a0ea) linegrid_hwr_fs_pane_g4_ParamLimits

0x69bc,	// (0x0005a0ea) linegrid_hwr_fs_pane_g4

0x69da,	// (0x0005a108) linegrid_hwr_fs_pane_g5_ParamLimits

0x69da,	// (0x0005a108) linegrid_hwr_fs_pane_g5

0x0004,

0xf800,	// (0x00062f2e) linegrid_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00062f2e) linegrid_hwr_fs_pane_g

0x87b9,	// (0x0005bee7) cell_hwr_fs_pane_g1_ParamLimits

0x87b9,	// (0x0005bee7) cell_hwr_fs_pane_g1

0x84f0,	// (0x0005bc1e) cell_hwr_fs_pane_g2_ParamLimits

0x84f0,	// (0x0005bc1e) cell_hwr_fs_pane_g2

0x87cf,	// (0x0005befd) cell_hwr_fs_pane_g3_ParamLimits

0x87cf,	// (0x0005befd) cell_hwr_fs_pane_g3

0x87dc,	// (0x0005bf0a) cell_hwr_fs_pane_g4_ParamLimits

0x87dc,	// (0x0005bf0a) cell_hwr_fs_pane_g4

0x0003,

0xf80b,	// (0x00062f39) cell_hwr_fs_pane_g_ParamLimits

0xf80b,	// (0x00062f39) cell_hwr_fs_pane_g

0x69f0,	// (0x0005a11e) cell_hwr_fs_pane_t1

0xb4a0,	// (0x0005ebce) grid_highlight_pane_cp6

0xb4a0,	// (0x0005ebce) main_idle_act2_pane

0xf19a,	// (0x000628c8) aid_inside_area_popup_secondary

0x9435,	// (0x0005cb63) aid_inside_area_window_primary_ParamLimits

0x9435,	// (0x0005cb63) aid_inside_area_window_primary

0xa1cb,	// (0x0005d8f9) ai2_news_ticker_pane

0xa1d3,	// (0x0005d901) aid_size_cell_ai1_link_ParamLimits

0xa1d3,	// (0x0005d901) aid_size_cell_ai1_link

0xa1ed,	// (0x0005d91b) popup_ai2_data_window_ParamLimits

0xa1ed,	// (0x0005d91b) popup_ai2_data_window

0xa20b,	// (0x0005d939) popup_ai2_link_window_ParamLimits

0xa20b,	// (0x0005d939) popup_ai2_link_window

0x8783,	// (0x0005beb1) bg_popup_sub_pane_cp4_ParamLimits

0x8783,	// (0x0005beb1) bg_popup_sub_pane_cp4

0xa221,	// (0x0005d94f) grid_ai2_link_pane_ParamLimits

0xa221,	// (0x0005d94f) grid_ai2_link_pane

0xa238,	// (0x0005d966) popup_ai2_link_window_g1_ParamLimits

0xa238,	// (0x0005d966) popup_ai2_link_window_g1

0xa244,	// (0x0005d972) popup_ai2_link_window_g2_ParamLimits

0xa244,	// (0x0005d972) popup_ai2_link_window_g2

0x0001,

0xf9de,	// (0x0006310c) popup_ai2_link_window_g_ParamLimits

0xf9de,	// (0x0006310c) popup_ai2_link_window_g

0xa255,	// (0x0005d983) ai2_mp_button_pane

0xa25d,	// (0x0005d98b) ai2_mp_volume_pane

0x8974,	// (0x0005c0a2) bg_popup_sub_pane_cp5_ParamLimits

0x8974,	// (0x0005c0a2) bg_popup_sub_pane_cp5

0xa265,	// (0x0005d993) heading_ai2_gene_pane_ParamLimits

0xa265,	// (0x0005d993) heading_ai2_gene_pane

0xa271,	// (0x0005d99f) list_ai2_gene_pane_ParamLimits

0xa271,	// (0x0005d99f) list_ai2_gene_pane

0xa2b9,	// (0x0005d9e7) cell_ai2_link_pane_ParamLimits

0xa2b9,	// (0x0005d9e7) cell_ai2_link_pane

0xa2cf,	// (0x0005d9fd) cell_ai2_link_pane_g1

0xb4a0,	// (0x0005ebce) grid_highlight_pane_cp7

0x6d91,	// (0x0005a4bf) ai2_mp_volume_pane_g1

0xa3a2,	// (0x0005dad0) ai2_mp_volume_pane_g2

0xa317,	// (0x0005da45) list_ai2_gene_pane_t1

0xa3aa,	// (0x0005dad8) ai2_mp_volume_pane_g3

0x0002,

0xf9f7,	// (0x00063125) ai2_mp_volume_pane_g

0x6d99,	// (0x0005a4c7) volume_small_pane_cp3

0xa3b2,	// (0x0005dae0) aid_size_cell_ai2_button

0xa3ba,	// (0x0005dae8) grid_ai2_button_pane

0xa3c3,	// (0x0005daf1) cell_ai2_button_pane_ParamLimits

0xa3c3,	// (0x0005daf1) cell_ai2_button_pane

0xb496,	// (0x0005ebc4) cell_ai2_button_pane_g1

0xb4a0,	// (0x0005ebce) grid_highlight_pane_cp8

0xa362,	// (0x0005da90) ai2_gene_pane_t1_ParamLimits

0xa362,	// (0x0005da90) ai2_gene_pane_t1

0x626c,	// (0x0005999a) aid_height_parent_landscape

0x9c95,	// (0x0005d3c3) aid_height_set_list

0x9ca6,	// (0x0005d3d4) aid_size_parent

0x9fec,	// (0x0005d71a) aid_size_cell_graphic_pane_ParamLimits

0xa281,	// (0x0005d9af) popup_ai2_data_window_g1_ParamLimits

0xa281,	// (0x0005d9af) popup_ai2_data_window_g1

0xa28d,	// (0x0005d9bb) ai2_news_ticker_pane_g1

0xa295,	// (0x0005d9c3) ai2_news_ticker_pane_g2

0x0001,

0xf9e3,	// (0x00063111) ai2_news_ticker_pane_g

0xa29d,	// (0x0005d9cb) ai2_news_ticker_pane_t1

0xa2ab,	// (0x0005d9d9) ai2_news_ticker_pane_t2

0x0001,

0xf9e8,	// (0x00063116) ai2_news_ticker_pane_t

0xa2d8,	// (0x0005da06) heading_ai2_gene_pane_g1

0xa2e0,	// (0x0005da0e) heading_ai2_gene_pane_t1_ParamLimits

0xa2e0,	// (0x0005da0e) heading_ai2_gene_pane_t1

0xa2f5,	// (0x0005da23) list_highlight_pane_cp6

0xa2fd,	// (0x0005da2b) ai2_gene_pane_ParamLimits

0xa2fd,	// (0x0005da2b) ai2_gene_pane

0xa325,	// (0x0005da53) list_ai2_gene_pane_t2

0x0001,

0xf9ed,	// (0x0006311b) list_ai2_gene_pane_t

0xa333,	// (0x0005da61) list_highlight_pane_cp8_ParamLimits

0xa333,	// (0x0005da61) list_highlight_pane_cp8

0xa344,	// (0x0005da72) ai2_gene_pane_g1_ParamLimits

0xa344,	// (0x0005da72) ai2_gene_pane_g1

0xa356,	// (0x0005da84) ai2_gene_pane_g2_ParamLimits

0xa356,	// (0x0005da84) ai2_gene_pane_g2

0x0001,

0xf9f2,	// (0x00063120) ai2_gene_pane_g_ParamLimits

0xf9f2,	// (0x00063120) ai2_gene_pane_g

0xefd8,	// (0x00062706) scroll_pane_cp12

0x622b,	// (0x00059959) control_pane_t3_ParamLimits

0x622b,	// (0x00059959) control_pane_t3

0x807e,	// (0x0005b7ac) status_small_pane_g8_ParamLimits

0x807e,	// (0x0005b7ac) status_small_pane_g8

0x6414,	// (0x00059b42) popup_find_window_ParamLimits

0x663f,	// (0x00059d6d) popup_note_image_window_ParamLimits

0x373f,	// (0x00056e6d) list_double2_graphic_pane_vc_g1_ParamLimits

0x373f,	// (0x00056e6d) list_double2_graphic_pane_vc_g1

0x7d74,	// (0x0005b4a2) list_double2_graphic_pane_vc_g2_ParamLimits

0x7d74,	// (0x0005b4a2) list_double2_graphic_pane_vc_g2

0x861f,	// (0x0005bd4d) list_double2_graphic_pane_vc_g3_ParamLimits

0x861f,	// (0x0005bd4d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x00062ef7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x00062ef7) list_double2_graphic_pane_vc_g

0x374b,	// (0x00056e79) list_double2_graphic_pane_vc_t1_ParamLimits

0x374b,	// (0x00056e79) list_double2_graphic_pane_vc_t1

0x7d74,	// (0x0005b4a2) list_single_heading_pane_vc_g1_ParamLimits

0x7d74,	// (0x0005b4a2) list_single_heading_pane_vc_g1

0x861f,	// (0x0005bd4d) list_single_heading_pane_vc_g2_ParamLimits

0x861f,	// (0x0005bd4d) list_single_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00062f18) list_single_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00062f18) list_single_heading_pane_vc_g

0x3761,	// (0x00056e8f) list_single_heading_pane_vc_t1_ParamLimits

0x3761,	// (0x00056e8f) list_single_heading_pane_vc_t1

0x3779,	// (0x00056ea7) list_single_heading_pane_vc_t2_ParamLimits

0x3779,	// (0x00056ea7) list_single_heading_pane_vc_t2

0x0001,

0xf7ef,	// (0x00062f1d) list_single_heading_pane_vc_t_ParamLimits

0xf7ef,	// (0x00062f1d) list_single_heading_pane_vc_t

0x86cf,	// (0x0005bdfd) list_setting_number_pane_vc_g1_ParamLimits

0x86cf,	// (0x0005bdfd) list_setting_number_pane_vc_g1

0x86db,	// (0x0005be09) list_setting_number_pane_vc_g2_ParamLimits

0x86db,	// (0x0005be09) list_setting_number_pane_vc_g2

0x0001,

0xf7f4,	// (0x00062f22) list_setting_number_pane_vc_g_ParamLimits

0xf7f4,	// (0x00062f22) list_setting_number_pane_vc_g

0x86e7,	// (0x0005be15) list_setting_number_pane_vc_t1_ParamLimits

0x86e7,	// (0x0005be15) list_setting_number_pane_vc_t1

0x86fb,	// (0x0005be29) list_setting_number_pane_vc_t2_ParamLimits

0x86fb,	// (0x0005be29) list_setting_number_pane_vc_t2

0x8717,	// (0x0005be45) list_setting_number_pane_vc_t3_ParamLimits

0x8717,	// (0x0005be45) list_setting_number_pane_vc_t3

0x0002,

0xf7f9,	// (0x00062f27) list_setting_number_pane_vc_t_ParamLimits

0xf7f9,	// (0x00062f27) list_setting_number_pane_vc_t

0x8745,	// (0x0005be73) set_value_pane_vc_ParamLimits

0x8745,	// (0x0005be73) set_value_pane_vc

0x9e7e,	// (0x0005d5ac) list_double2_graphic_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double2_graphic_pane_vc

0x9e7e,	// (0x0005d5ac) list_double2_large_graphic_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double2_large_graphic_pane_vc

0x9e7e,	// (0x0005d5ac) list_double2_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double2_pane_vc

0x9e7e,	// (0x0005d5ac) list_double_graphic_heading_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double_graphic_heading_pane_vc

0x9e7e,	// (0x0005d5ac) list_double_graphic_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double_graphic_pane_vc

0x9e7e,	// (0x0005d5ac) list_double_heading_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double_heading_pane_vc

0x9e7e,	// (0x0005d5ac) list_double_large_graphic_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double_large_graphic_pane_vc

0x9e7e,	// (0x0005d5ac) list_double_number_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double_number_pane_vc

0x9e7e,	// (0x0005d5ac) list_double_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double_pane_vc

0x9e7e,	// (0x0005d5ac) list_double_time_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_double_time_pane_vc

0x9e7e,	// (0x0005d5ac) list_setting_number_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_setting_number_pane_vc

0x9e7e,	// (0x0005d5ac) list_setting_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_setting_pane_vc

0x9e7e,	// (0x0005d5ac) list_single_graphic_heading_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_single_graphic_heading_pane_vc

0x9e7e,	// (0x0005d5ac) list_single_heading_pane_vc_ParamLimits

0x9e7e,	// (0x0005d5ac) list_single_heading_pane_vc

0x9e92,	// (0x0005d5c0) list_single_number_heading_pane_vc_ParamLimits

0x9e92,	// (0x0005d5c0) list_single_number_heading_pane_vc

0x373f,	// (0x00056e6d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x373f,	// (0x00056e6d) list_double_graphic_heading_pane_vc_g1

0x96e0,	// (0x0005ce0e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x96e0,	// (0x0005ce0e) list_double_graphic_heading_pane_vc_g2

0x96ec,	// (0x0005ce1a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x96ec,	// (0x0005ce1a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fe,	// (0x0006312c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fe,	// (0x0006312c) list_double_graphic_heading_pane_vc_g

0x3ba1,	// (0x000572cf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3ba1,	// (0x000572cf) list_double_graphic_heading_pane_vc_t1

0x3761,	// (0x00056e8f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3761,	// (0x00056e8f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa05,	// (0x00063133) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa05,	// (0x00063133) list_double_graphic_heading_pane_vc_t

0x86cf,	// (0x0005bdfd) list_setting_pane_vc_g1_ParamLimits

0x86cf,	// (0x0005bdfd) list_setting_pane_vc_g1

0x86db,	// (0x0005be09) list_setting_pane_vc_g2_ParamLimits

0x86db,	// (0x0005be09) list_setting_pane_vc_g2

0x0001,

0xf7f4,	// (0x00062f22) list_setting_pane_vc_g_ParamLimits

0xf7f4,	// (0x00062f22) list_setting_pane_vc_g

0xa62a,	// (0x0005dd58) list_setting_pane_vc_t1_ParamLimits

0xa62a,	// (0x0005dd58) list_setting_pane_vc_t1

0xa646,	// (0x0005dd74) list_setting_pane_vc_t2_ParamLimits

0xa646,	// (0x0005dd74) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x00063161) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x00063161) list_setting_pane_vc_t

0x8745,	// (0x0005be73) set_value_pane_cp_vc_ParamLimits

0x8745,	// (0x0005be73) set_value_pane_cp_vc

0x7d74,	// (0x0005b4a2) list_single_number_heading_pane_vc_g1_ParamLimits

0x7d74,	// (0x0005b4a2) list_single_number_heading_pane_vc_g1

0x861f,	// (0x0005bd4d) list_single_number_heading_pane_vc_g2_ParamLimits

0x861f,	// (0x0005bd4d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ea,	// (0x00062f18) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ea,	// (0x00062f18) list_single_number_heading_pane_vc_g

0x3761,	// (0x00056e8f) list_single_number_heading_pane_vc_t1_ParamLimits

0x3761,	// (0x00056e8f) list_single_number_heading_pane_vc_t1

0x3bb3,	// (0x000572e1) list_single_number_heading_pane_vc_t2_ParamLimits

0x3bb3,	// (0x000572e1) list_single_number_heading_pane_vc_t2

0x3b79,	// (0x000572a7) list_single_number_heading_pane_vc_t3_ParamLimits

0x3b79,	// (0x000572a7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x00063166) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00063166) list_single_number_heading_pane_vc_t

0x373f,	// (0x00056e6d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x373f,	// (0x00056e6d) list_single_graphic_heading_pane_vc_g1

0x7d74,	// (0x0005b4a2) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7d74,	// (0x0005b4a2) list_single_graphic_heading_pane_vc_g4

0x861f,	// (0x0005bd4d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x861f,	// (0x0005bd4d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x00062ef7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x00062ef7) list_single_graphic_heading_pane_vc_g

0x3761,	// (0x00056e8f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3761,	// (0x00056e8f) list_single_graphic_heading_pane_vc_t1

0x3bc5,	// (0x000572f3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3bc5,	// (0x000572f3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0006316d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0006316d) list_single_graphic_heading_pane_vc_t

0x7d74,	// (0x0005b4a2) list_double2_pane_vc_g1_ParamLimits

0x7d74,	// (0x0005b4a2) list_double2_pane_vc_g1

0x861f,	// (0x0005bd4d) list_double2_pane_vc_g2_ParamLimits

0x861f,	// (0x0005bd4d) list_double2_pane_vc_g2

0x0001,

0xf7ea,	// (0x00062f18) list_double2_pane_vc_g_ParamLimits

0xf7ea,	// (0x00062f18) list_double2_pane_vc_g

0x3b8b,	// (0x000572b9) list_double2_pane_vc_t1_ParamLimits

0x3b8b,	// (0x000572b9) list_double2_pane_vc_t1

0x96f8,	// (0x0005ce26) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x96f8,	// (0x0005ce26) list_double2_large_graphic_pane_vc_g1

0x7d74,	// (0x0005b4a2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7d74,	// (0x0005b4a2) list_double2_large_graphic_pane_vc_g2

0x861f,	// (0x0005bd4d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x861f,	// (0x0005bd4d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x00063172) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x00063172) list_double2_large_graphic_pane_vc_g

0x3b63,	// (0x00057291) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3b63,	// (0x00057291) list_double2_large_graphic_pane_vc_t1

0x9704,	// (0x0005ce32) list_double_time_pane_vc_g1_ParamLimits

0x9704,	// (0x0005ce32) list_double_time_pane_vc_g1

0x9710,	// (0x0005ce3e) list_double_time_pane_vc_g2_ParamLimits

0x9710,	// (0x0005ce3e) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x00063179) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x00063179) list_double_time_pane_vc_g

0x3bd7,	// (0x00057305) list_double_time_pane_vc_t1_ParamLimits

0x3bd7,	// (0x00057305) list_double_time_pane_vc_t1

0x3c01,	// (0x0005732f) list_double_time_pane_vc_t2_ParamLimits

0x3c01,	// (0x0005732f) list_double_time_pane_vc_t2

0x3c4a,	// (0x00057378) list_double_time_pane_vc_t3_ParamLimits

0x3c4a,	// (0x00057378) list_double_time_pane_vc_t3

0x3c5c,	// (0x0005738a) list_double_time_pane_vc_t4_ParamLimits

0x3c5c,	// (0x0005738a) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x0006317e) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x0006317e) list_double_time_pane_vc_t

0x7d74,	// (0x0005b4a2) list_double_pane_vc_g1_ParamLimits

0x7d74,	// (0x0005b4a2) list_double_pane_vc_g1

0x861f,	// (0x0005bd4d) list_double_pane_vc_g2_ParamLimits

0x861f,	// (0x0005bd4d) list_double_pane_vc_g2

0x0001,

0xf7ea,	// (0x00062f18) list_double_pane_vc_g_ParamLimits

0xf7ea,	// (0x00062f18) list_double_pane_vc_g

0x3c81,	// (0x000573af) list_double_pane_vc_t1_ParamLimits

0x3c81,	// (0x000573af) list_double_pane_vc_t1

0x3c95,	// (0x000573c3) list_double_pane_vc_t2_ParamLimits

0x3c95,	// (0x000573c3) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x00063187) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x00063187) list_double_pane_vc_t

0x7d74,	// (0x0005b4a2) list_double_number_pane_vc_g1_ParamLimits

0x7d74,	// (0x0005b4a2) list_double_number_pane_vc_g1

0x861f,	// (0x0005bd4d) list_double_number_pane_vc_g2_ParamLimits

0x861f,	// (0x0005bd4d) list_double_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00062f18) list_double_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00062f18) list_double_number_pane_vc_g

0x3cab,	// (0x000573d9) list_double_number_pane_vc_t1_ParamLimits

0x3cab,	// (0x000573d9) list_double_number_pane_vc_t1

0x3cbf,	// (0x000573ed) list_double_number_pane_vc_t2_ParamLimits

0x3cbf,	// (0x000573ed) list_double_number_pane_vc_t2

0x3c95,	// (0x000573c3) list_double_number_pane_vc_t3_ParamLimits

0x3c95,	// (0x000573c3) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x0006318c) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x0006318c) list_double_number_pane_vc_t

0x971c,	// (0x0005ce4a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x971c,	// (0x0005ce4a) list_double_large_graphic_pane_vc_g1

0x972d,	// (0x0005ce5b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x972d,	// (0x0005ce5b) list_double_large_graphic_pane_vc_g2

0x861f,	// (0x0005bd4d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x861f,	// (0x0005bd4d) list_double_large_graphic_pane_vc_g3

0x3cd3,	// (0x00057401) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3cd3,	// (0x00057401) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x00063193) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x00063193) list_double_large_graphic_pane_vc_g

0x3cdf,	// (0x0005740d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3cdf,	// (0x0005740d) list_double_large_graphic_pane_vc_t1

0x3cf8,	// (0x00057426) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3cf8,	// (0x00057426) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x0006319c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x0006319c) list_double_large_graphic_pane_vc_t

0x96e0,	// (0x0005ce0e) list_double_heading_pane_vc_g1_ParamLimits

0x96e0,	// (0x0005ce0e) list_double_heading_pane_vc_g1

0x96ec,	// (0x0005ce1a) list_double_heading_pane_vc_g2_ParamLimits

0x96ec,	// (0x0005ce1a) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x000631a1) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x000631a1) list_double_heading_pane_vc_g

0x3d0f,	// (0x0005743d) list_double_heading_pane_vc_t1_ParamLimits

0x3d0f,	// (0x0005743d) list_double_heading_pane_vc_t1

0x3761,	// (0x00056e8f) list_double_heading_pane_vc_t2_ParamLimits

0x3761,	// (0x00056e8f) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x000631a6) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x000631a6) list_double_heading_pane_vc_t

0x373f,	// (0x00056e6d) list_double_graphic_pane_vc_g1_ParamLimits

0x373f,	// (0x00056e6d) list_double_graphic_pane_vc_g1

0x973c,	// (0x0005ce6a) list_double_graphic_pane_vc_g2_ParamLimits

0x973c,	// (0x0005ce6a) list_double_graphic_pane_vc_g2

0x974b,	// (0x0005ce79) list_double_graphic_pane_vc_g3_ParamLimits

0x974b,	// (0x0005ce79) list_double_graphic_pane_vc_g3

0x0002,

0xfa7d,	// (0x000631ab) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x000631ab) list_double_graphic_pane_vc_g

0x3d21,	// (0x0005744f) list_double_graphic_pane_vc_t1_ParamLimits

0x3d21,	// (0x0005744f) list_double_graphic_pane_vc_t1

0x3c95,	// (0x000573c3) list_double_graphic_pane_vc_t2_ParamLimits

0x3c95,	// (0x000573c3) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x000631b2) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x000631b2) list_double_graphic_pane_vc_t

0x4b10,	// (0x0005823e) aid_size_cell_fastswap

0x4b18,	// (0x00058246) aid_size_cell_touch_ParamLimits

0x4b18,	// (0x00058246) aid_size_cell_touch

0x4d83,	// (0x000584b1) popup_fast_swap_wide_window_ParamLimits

0x4d83,	// (0x000584b1) popup_fast_swap_wide_window

0x4e99,	// (0x000585c7) touch_pane_ParamLimits

0x4e99,	// (0x000585c7) touch_pane

0xf02e,	// (0x0006275c) button_value_adjust_pane_cp2

0x32f3,	// (0x00056a21) button_value_adjust_pane_cp4

0x32fb,	// (0x00056a29) form_field_data_pane_cp2

0x57f2,	// (0x00058f20) form_field_data_wide_pane_cp2

0xf3d4,	// (0x00062b02) bg_scroll_pane_ParamLimits

0x5bde,	// (0x0005930c) scroll_handle_pane_ParamLimits

0x5bf2,	// (0x00059320) scroll_sc2_down_pane_ParamLimits

0x5bf2,	// (0x00059320) scroll_sc2_down_pane

0xf405,	// (0x00062b33) scroll_sc2_up_pane_ParamLimits

0xf405,	// (0x00062b33) scroll_sc2_up_pane

0xab2c,	// (0x0005e25a) grid_wheel_folder_pane_g1_ParamLimits

0xab2c,	// (0x0005e25a) grid_wheel_folder_pane_g1

0x5f84,	// (0x000596b2) clock_nsta_pane_cp2_ParamLimits

0x5f84,	// (0x000596b2) clock_nsta_pane_cp2

0x5996,	// (0x000590c4) listscroll_midp_pane_ParamLimits

0x7e0b,	// (0x0005b539) midp_canvas_pane

0x80f9,	// (0x0005b827) nsta_clock_indic_pane

0x8135,	// (0x0005b863) listscroll_form_pane_vc

0x813d,	// (0x0005b86b) listscroll_set_pane_vc_ParamLimits

0x813d,	// (0x0005b86b) listscroll_set_pane_vc

0x8244,	// (0x0005b972) clock_nsta_pane

0x82c1,	// (0x0005b9ef) indicator_nsta_pane

0x85b9,	// (0x0005bce7) bg_popup_sub_pane_cp2_ParamLimits

0x85cd,	// (0x0005bcfb) find_pane_cp2_ParamLimits

0x85cd,	// (0x0005bcfb) find_pane_cp2

0x85e3,	// (0x0005bd11) grid_toobar_pane_ParamLimits

0x8757,	// (0x0005be85) list_form_gen_pane_vc_ParamLimits

0x8757,	// (0x0005be85) list_form_gen_pane_vc

0x876d,	// (0x0005be9b) scroll_pane_cp8_vc_ParamLimits

0x876d,	// (0x0005be9b) scroll_pane_cp8_vc

0x87e9,	// (0x0005bf17) data_form_wide_pane_vc_ParamLimits

0x87e9,	// (0x0005bf17) data_form_wide_pane_vc

0x87f5,	// (0x0005bf23) form_field_data_wide_pane_vc_g1

0x87fd,	// (0x0005bf2b) form_field_data_wide_pane_vc_t1_ParamLimits

0x87fd,	// (0x0005bf2b) form_field_data_wide_pane_vc_t1

0xf042,	// (0x00062770) input_focus_pane_cp6_vc_ParamLimits

0xf042,	// (0x00062770) input_focus_pane_cp6_vc

0x8aff,	// (0x0005c22d) list_midp_pane_ParamLimits

0x8b0b,	// (0x0005c239) scroll_pane_cp16_ParamLimits

0x8b0b,	// (0x0005c239) scroll_pane_cp16

0x8b59,	// (0x0005c287) button_value_adjust_pane_ParamLimits

0x8b59,	// (0x0005c287) button_value_adjust_pane

0x9cb8,	// (0x0005d3e6) button_value_adjust_pane_cp6_ParamLimits

0x9cb8,	// (0x0005d3e6) button_value_adjust_pane_cp6

0x9e06,	// (0x0005d534) settings_code_pane_cp_ParamLimits

0x9e06,	// (0x0005d534) settings_code_pane_cp

0xb496,	// (0x0005ebc4) cell_touch_pane_g1

0xb496,	// (0x0005ebc4) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x00062e3c) cell_touch_pane_g

0xa3d5,	// (0x0005db03) cell_touch_pane_cp_ParamLimits

0xa3d5,	// (0x0005db03) cell_touch_pane_cp

0xa3e5,	// (0x0005db13) cell_touch_pane_ParamLimits

0xa3e5,	// (0x0005db13) cell_touch_pane

0xb496,	// (0x0005ebc4) scroll_sc2_down_pane_g1

0xb496,	// (0x0005ebc4) scroll_sc2_up_pane_g1

0xb4a0,	// (0x0005ebce) bg_set_opt_pane_cp4_vc

0xa3f6,	// (0x0005db24) list_set_graphic_pane_vc_g1_ParamLimits

0xa3f6,	// (0x0005db24) list_set_graphic_pane_vc_g1

0xa402,	// (0x0005db30) list_set_graphic_pane_vc_g2_ParamLimits

0xa402,	// (0x0005db30) list_set_graphic_pane_vc_g2

0x0001,

0xfa0a,	// (0x00063138) list_set_graphic_pane_vc_g_ParamLimits

0xfa0a,	// (0x00063138) list_set_graphic_pane_vc_g

0xa40e,	// (0x0005db3c) text_primary_small_cp13_vc_ParamLimits

0xa40e,	// (0x0005db3c) text_primary_small_cp13_vc

0xa426,	// (0x0005db54) list_set_graphic_pane_vc_ParamLimits

0xa426,	// (0x0005db54) list_set_graphic_pane_vc

0xb4a0,	// (0x0005ebce) input_focus_pane_cp2_vc

0xb496,	// (0x0005ebc4) setting_code_pane_vc_g1

0xb505,	// (0x0005ec33) setting_code_pane_vc_t1

0xa43b,	// (0x0005db69) set_text_pane_vc_t1_ParamLimits

0xa43b,	// (0x0005db69) set_text_pane_vc_t1

0xb4a0,	// (0x0005ebce) input_focus_pane_cp1_vc

0xa459,	// (0x0005db87) list_set_text_pane_vc

0xb496,	// (0x0005ebc4) setting_text_pane_vc_g1

0xb4a0,	// (0x0005ebce) bg_set_opt_pane_cp2_vc

0xb4fc,	// (0x0005ec2a) setting_slider_graphic_pane_vc_g1

0xa463,	// (0x0005db91) setting_slider_graphic_pane_vc_t1

0xa475,	// (0x0005dba3) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0f,	// (0x0006313d) setting_slider_graphic_pane_vc_t

0xa487,	// (0x0005dbb5) slider_set_pane_cp_vc

0xa491,	// (0x0005dbbf) slider_set_pane_vc_g1

0xa49a,	// (0x0005dbc8) slider_set_pane_vc_g2

0x0006,

0xfa14,	// (0x00063142) slider_set_pane_vc_g

0xf0a9,	// (0x000627d7) set_opt_bg_pane_g1_copy1

0xf0b1,	// (0x000627df) set_opt_bg_pane_g2_copy1

0xa4c6,	// (0x0005dbf4) set_opt_bg_pane_g3_copy1

0xf0c1,	// (0x000627ef) set_opt_bg_pane_g4_copy1

0xf0c9,	// (0x000627f7) set_opt_bg_pane_g5_copy1

0xf0d1,	// (0x000627ff) set_opt_bg_pane_g6_copy1

0xa4d0,	// (0x0005dbfe) set_opt_bg_pane_g7_copy1

0xa4da,	// (0x0005dc08) set_opt_bg_pane_g8_copy1

0xa4e4,	// (0x0005dc12) set_opt_bg_pane_g9_copy1

0xb4a0,	// (0x0005ebce) bg_set_opt_pane_cp_vc

0xa4ee,	// (0x0005dc1c) setting_slider_pane_vc_t1

0xa4fd,	// (0x0005dc2b) setting_slider_pane_vc_t2

0xa50f,	// (0x0005dc3d) setting_slider_pane_vc_t3

0x0002,

0xfa23,	// (0x00063151) setting_slider_pane_vc_t

0xa521,	// (0x0005dc4f) slider_set_pane_vc

0x6a1d,	// (0x0005a14b) volume_set_pane_vc_g1

0x6a26,	// (0x0005a154) volume_set_pane_vc_g2

0x6a2f,	// (0x0005a15d) volume_set_pane_vc_g3

0x6a38,	// (0x0005a166) volume_set_pane_vc_g4

0x6a41,	// (0x0005a16f) volume_set_pane_vc_g5

0x6a4a,	// (0x0005a178) volume_set_pane_vc_g6

0x6a53,	// (0x0005a181) volume_set_pane_vc_g7

0x6a5c,	// (0x0005a18a) volume_set_pane_vc_g8

0x6a65,	// (0x0005a193) volume_set_pane_vc_g9

0x6a6e,	// (0x0005a19c) volume_set_pane_vc_g10

0x0009,

0xf8c1,	// (0x00062fef) volume_set_pane_vc_g

0xa52b,	// (0x0005dc59) volume_set_pane_vc

0xa535,	// (0x0005dc63) button_value_adjust_pane_cp1_vc

0xa53f,	// (0x0005dc6d) list_highlight_pane_cp2_vc

0xa548,	// (0x0005dc76) list_set_pane_vc_ParamLimits

0xa548,	// (0x0005dc76) list_set_pane_vc

0xa5b8,	// (0x0005dce6) main_pane_set_vc_t1_ParamLimits

0xa5b8,	// (0x0005dce6) main_pane_set_vc_t1

0xa5cd,	// (0x0005dcfb) main_pane_set_vc_t2_ParamLimits

0xa5cd,	// (0x0005dcfb) main_pane_set_vc_t2

0xa5df,	// (0x0005dd0d) main_pane_set_vc_t3_ParamLimits

0xa5df,	// (0x0005dd0d) main_pane_set_vc_t3

0xa5f3,	// (0x0005dd21) main_pane_set_vc_t4_ParamLimits

0xa5f3,	// (0x0005dd21) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00063158) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00063158) main_pane_set_vc_t

0xa607,	// (0x0005dd35) setting_code_pane_vc_ParamLimits

0xa607,	// (0x0005dd35) setting_code_pane_vc

0xa618,	// (0x0005dd46) setting_slider_graphic_pane_vc

0xa618,	// (0x0005dd46) setting_slider_pane_vc

0xa618,	// (0x0005dd46) setting_text_pane_vc

0xa618,	// (0x0005dd46) setting_volume_pane_vc

0xa622,	// (0x0005dd50) scroll_pane_cp121_vc

0xf01c,	// (0x0006274a) set_content_pane_vc

0xa662,	// (0x0005dd90) button_value_adjust_pane_g1

0xa66b,	// (0x0005dd99) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x000631b7) button_value_adjust_pane_g

0xa674,	// (0x0005dda2) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa674,	// (0x0005dda2) form_field_slider_wide_pane_vc_t1

0xa688,	// (0x0005ddb6) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa688,	// (0x0005ddb6) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x000631bc) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x000631bc) form_field_slider_wide_pane_vc_t

0xb621,	// (0x0005ed4f) input_focus_pane_cp10_vc_ParamLimits

0xb621,	// (0x0005ed4f) input_focus_pane_cp10_vc

0xa6b6,	// (0x0005dde4) slider_cont_pane_cp1_vc_ParamLimits

0xa6b6,	// (0x0005dde4) slider_cont_pane_cp1_vc

0xa6c6,	// (0x0005ddf4) slider_form_pane_g1_cp2

0xa49a,	// (0x0005dbc8) slider_form_pane_g2_cp2

0xa6f3,	// (0x0005de21) form_field_slider_pane_vc_t3

0xa701,	// (0x0005de2f) form_field_slider_pane_vc_t4

0xa70f,	// (0x0005de3d) slider_form_pane_vc_ParamLimits

0xa70f,	// (0x0005de3d) slider_form_pane_vc

0xa71c,	// (0x0005de4a) form_field_slider_pane_vc_t1_ParamLimits

0xa71c,	// (0x0005de4a) form_field_slider_pane_vc_t1

0xa688,	// (0x0005ddb6) form_field_slider_pane_vc_t2_ParamLimits

0xa688,	// (0x0005ddb6) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x000631ce) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x000631ce) form_field_slider_pane_vc_t

0xb621,	// (0x0005ed4f) input_focus_pane_cp9_vc_ParamLimits

0xb621,	// (0x0005ed4f) input_focus_pane_cp9_vc

0xa738,	// (0x0005de66) slider_cont_pane_vc_ParamLimits

0xa738,	// (0x0005de66) slider_cont_pane_vc

0xa74a,	// (0x0005de78) list_form_graphic_pane_cp_vc_ParamLimits

0xa74a,	// (0x0005de78) list_form_graphic_pane_cp_vc

0x87f5,	// (0x0005bf23) form_field_popup_wide_pane_vc_g1

0xa75f,	// (0x0005de8d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa75f,	// (0x0005de8d) form_field_popup_wide_pane_vc_t1

0xf042,	// (0x00062770) input_focus_pane_cp8_vc_ParamLimits

0xf042,	// (0x00062770) input_focus_pane_cp8_vc

0xa7a4,	// (0x0005ded2) list_form_wide_pane_vc_ParamLimits

0xa7a4,	// (0x0005ded2) list_form_wide_pane_vc

0xa7b0,	// (0x0005dede) list_form_graphic_pane_vc_g1

0xa7b8,	// (0x0005dee6) list_form_graphic_pane_vc_t1_ParamLimits

0xa7b8,	// (0x0005dee6) list_form_graphic_pane_vc_t1

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp5_vc_ParamLimits

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp5_vc

0xa7d4,	// (0x0005df02) list_form_graphic_pane_vc_ParamLimits

0xa7d4,	// (0x0005df02) list_form_graphic_pane_vc

0x87f5,	// (0x0005bf23) form_field_popup_pane_vc_g1

0xa7ea,	// (0x0005df18) form_field_popup_pane_vc_t1_ParamLimits

0xa7ea,	// (0x0005df18) form_field_popup_pane_vc_t1

0xf042,	// (0x00062770) input_focus_pane_cp7_vc_ParamLimits

0xf042,	// (0x00062770) input_focus_pane_cp7_vc

0xa801,	// (0x0005df2f) list_form_pane_vc_ParamLimits

0xa801,	// (0x0005df2f) list_form_pane_vc

0xa80d,	// (0x0005df3b) data_form_pane_vc_t1_ParamLimits

0xa80d,	// (0x0005df3b) data_form_pane_vc_t1

0xf0a9,	// (0x000627d7) input_focus_pane_vc_g1

0xf0b1,	// (0x000627df) input_focus_pane_vc_g2

0xf0b9,	// (0x000627e7) input_focus_pane_vc_g3

0xf0c1,	// (0x000627ef) input_focus_pane_vc_g4

0xf0c9,	// (0x000627f7) input_focus_pane_vc_g5

0xf0d1,	// (0x000627ff) input_focus_pane_vc_g6

0xf0d9,	// (0x00062807) input_focus_pane_vc_g7

0xf0e1,	// (0x0006280f) input_focus_pane_vc_g8

0xf0e9,	// (0x00062817) input_focus_pane_vc_g9

0xb496,	// (0x0005ebc4) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x00062dc5) input_focus_pane_vc_g

0x87e9,	// (0x0005bf17) data_form_pane_vc_ParamLimits

0x87e9,	// (0x0005bf17) data_form_pane_vc

0x87f5,	// (0x0005bf23) form_field_data_pane_vc_g1

0xa82a,	// (0x0005df58) form_field_data_pane_vc_t1_ParamLimits

0xa82a,	// (0x0005df58) form_field_data_pane_vc_t1

0xf042,	// (0x00062770) input_focus_pane_vc_ParamLimits

0xf042,	// (0x00062770) input_focus_pane_vc

0xa844,	// (0x0005df72) button_value_adjust_pane_cp3_vc

0xa84c,	// (0x0005df7a) button_value_adjust_pane_cp5_vc

0xa854,	// (0x0005df82) form_field_data_pane_vc_ParamLimits

0xa854,	// (0x0005df82) form_field_data_pane_vc

0xa86f,	// (0x0005df9d) form_field_data_pane_vc_cp2

0xa877,	// (0x0005dfa5) form_field_data_wide_pane_vc_ParamLimits

0xa877,	// (0x0005dfa5) form_field_data_wide_pane_vc

0xa891,	// (0x0005dfbf) form_field_data_wide_pane_vc_cp2

0xa899,	// (0x0005dfc7) form_field_popup_pane_vc_ParamLimits

0xa899,	// (0x0005dfc7) form_field_popup_pane_vc

0xa8b4,	// (0x0005dfe2) form_field_popup_wide_pane_vc_ParamLimits

0xa8b4,	// (0x0005dfe2) form_field_popup_wide_pane_vc

0xa8ce,	// (0x0005dffc) form_field_slider_pane_vc_ParamLimits

0xa8ce,	// (0x0005dffc) form_field_slider_pane_vc

0xa8e1,	// (0x0005e00f) form_field_slider_wide_pane_vc_ParamLimits

0xa8e1,	// (0x0005e00f) form_field_slider_wide_pane_vc

0xa8f4,	// (0x0005e022) grid_touch_1_pane_ParamLimits

0xa8f4,	// (0x0005e022) grid_touch_1_pane

0xa900,	// (0x0005e02e) grid_touch_2_pane_ParamLimits

0xa900,	// (0x0005e02e) grid_touch_2_pane

0x80c4,	// (0x0005b7f2) touch_pane_g1_ParamLimits

0x80c4,	// (0x0005b7f2) touch_pane_g1

0xa91a,	// (0x0005e048) cell_app_pane_cp_wide_ParamLimits

0xa91a,	// (0x0005e048) cell_app_pane_cp_wide

0xa92b,	// (0x0005e059) grid_popup_fast_wide_pane_ParamLimits

0xa92b,	// (0x0005e059) grid_popup_fast_wide_pane

0xa93f,	// (0x0005e06d) scroll_pane_cp19_ParamLimits

0xa93f,	// (0x0005e06d) scroll_pane_cp19

0xb4a0,	// (0x0005ebce) bg_popup_window_pane_cp20

0xa953,	// (0x0005e081) listscroll_popup_fast_wide_pane

0xb4ee,	// (0x0005ec1c) grid_indicator_nsta_pane

0xa95b,	// (0x0005e089) clock_nsta_pane_g1

0xa964,	// (0x0005e092) clock_nsta_pane_t1

0xa980,	// (0x0005e0ae) cell_indicator_nsta_pane_ParamLimits

0xa980,	// (0x0005e0ae) cell_indicator_nsta_pane

0xa9b8,	// (0x0005e0e6) cell_indicator_nsta_pane_g1

0xa9c6,	// (0x0005e0f4) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x000631df) cell_indicator_nsta_pane_g

0xa9dc,	// (0x0005e10a) clock_nsta_pane_cp

0xa9e4,	// (0x0005e112) indicator_nsta_pane_cp

0xa9ed,	// (0x0005e11b) nsta_clock_indic_pane_g1

0xb52a,	// (0x0005ec58) grid_indicator_pane

0xf4f7,	// (0x00062c25) scroll_pane_cp29

0x5ed0,	// (0x000595fe) indicator_nsta_pane_cp2_ParamLimits

0x5ed0,	// (0x000595fe) indicator_nsta_pane_cp2

0xb4ee,	// (0x0005ec1c) main_apps_wheel_pane

0x89dc,	// (0x0005c10a) form_midp_field_text_pane_ParamLimits

0x8b2b,	// (0x0005c259) scroll_bar_cp050_ParamLimits

0xaa56,	// (0x0005e184) cell_indicator_pane_ParamLimits

0xaa56,	// (0x0005e184) cell_indicator_pane

0xaa6e,	// (0x0005e19c) cell_indicator_pane_g1

0xaa78,	// (0x0005e1a6) grid_wheel_folder_pane_ParamLimits

0xaa78,	// (0x0005e1a6) grid_wheel_folder_pane

0xaa8c,	// (0x0005e1ba) list_wheel_apps_pane_ParamLimits

0xaa8c,	// (0x0005e1ba) list_wheel_apps_pane

0xaa9f,	// (0x0005e1cd) main_apps_wheel_pane_g1_ParamLimits

0xaa9f,	// (0x0005e1cd) main_apps_wheel_pane_g1

0xaabb,	// (0x0005e1e9) main_apps_wheel_pane_g2_ParamLimits

0xaabb,	// (0x0005e1e9) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x000631fb) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x000631fb) main_apps_wheel_pane_g

0xaad7,	// (0x0005e205) main_apps_wheel_pane_t1_ParamLimits

0xaad7,	// (0x0005e205) main_apps_wheel_pane_t1

0xab00,	// (0x0005e22e) list_wheel_apps_pane_g1

0xab08,	// (0x0005e236) list_wheel_apps_pane_g2

0xab10,	// (0x0005e23e) list_wheel_apps_pane_g3

0xab18,	// (0x0005e246) list_wheel_apps_pane_g4

0xab22,	// (0x0005e250) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x00063200) list_wheel_apps_pane_g

0x7c7f,	// (0x0005b3ad) navi_icon_text_pane

0x8171,	// (0x0005b89f) aid_fill_nsta

0xab43,	// (0x0005e271) navi_icon_text_pane_g1

0xab52,	// (0x0005e280) navi_icon_text_pane_t1

0x6019,	// (0x00059747) list_set_graphic_pane_t1_ParamLimits

0x6019,	// (0x00059747) list_set_graphic_pane_t1

0x927c,	// (0x0005c9aa) popup_midp_note_alarm_window_t6_ParamLimits

0x927c,	// (0x0005c9aa) popup_midp_note_alarm_window_t6

0x928e,	// (0x0005c9bc) popup_midp_note_alarm_window_t7_ParamLimits

0x928e,	// (0x0005c9bc) popup_midp_note_alarm_window_t7

0x92a0,	// (0x0005c9ce) popup_midp_note_alarm_window_t8_ParamLimits

0x92a0,	// (0x0005c9ce) popup_midp_note_alarm_window_t8

0x92b2,	// (0x0005c9e0) popup_midp_note_alarm_window_t9_ParamLimits

0x92b2,	// (0x0005c9e0) popup_midp_note_alarm_window_t9

0x92c4,	// (0x0005c9f2) popup_midp_note_alarm_window_t10_ParamLimits

0x92c4,	// (0x0005c9f2) popup_midp_note_alarm_window_t10

0x92d6,	// (0x0005ca04) popup_midp_note_alarm_window_t11_ParamLimits

0x92d6,	// (0x0005ca04) popup_midp_note_alarm_window_t11

0x92e8,	// (0x0005ca16) scroll_pane_cp17_ParamLimits

0x92e8,	// (0x0005ca16) scroll_pane_cp17

0x6a1d,	// (0x0005a14b) volume_small_pane_cp_g1

0x6da2,	// (0x0005a4d0) volume_small_pane_cp_g2

0x6dab,	// (0x0005a4d9) volume_small_pane_cp_g3

0x6db4,	// (0x0005a4e2) volume_small_pane_cp_g4

0x6dbd,	// (0x0005a4eb) volume_small_pane_cp_g5

0x6dc6,	// (0x0005a4f4) volume_small_pane_cp_g6

0x6dcf,	// (0x0005a4fd) volume_small_pane_cp_g7

0x6dd8,	// (0x0005a506) volume_small_pane_cp_g8

0x6de1,	// (0x0005a50f) volume_small_pane_cp_g9

0x6dea,	// (0x0005a518) volume_small_pane_cp_g10

0x7ed4,	// (0x0005b602) midp_ticker_pane_g1_ParamLimits

0x7ee0,	// (0x0005b60e) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x00062e91) midp_ticker_pane_g_ParamLimits

0x7eec,	// (0x0005b61a) midp_ticker_pane_t1_ParamLimits

0x8187,	// (0x0005b8b5) aid_fill_nsta_2

0x8b17,	// (0x0005c245) list_form2_midp_pane

0x9e4d,	// (0x0005d57b) midp_editing_number_pane_ParamLimits

0x9e5c,	// (0x0005d58a) midp_ticker_pane_ParamLimits

0xab67,	// (0x0005e295) form2_midp_field_pane

0xab8b,	// (0x0005e2b9) scroll_pane_cp51

0xabab,	// (0x0005e2d9) form2_midp_button_pane_ParamLimits

0xabab,	// (0x0005e2d9) form2_midp_button_pane

0xabbd,	// (0x0005e2eb) form2_midp_content_pane_ParamLimits

0xabbd,	// (0x0005e2eb) form2_midp_content_pane

0xabd7,	// (0x0005e305) form2_midp_field_choice_group_pane

0xabdf,	// (0x0005e30d) form2_midp_field_pane_g1

0xabe7,	// (0x0005e315) form2_midp_field_pane_g2

0xabef,	// (0x0005e31d) form2_midp_field_pane_g3

0xabf7,	// (0x0005e325) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x00063225) form2_midp_field_pane_g

0xabff,	// (0x0005e32d) form2_midp_gauge_slider_pane

0xac07,	// (0x0005e335) form2_midp_gauge_wait_pane

0xac0f,	// (0x0005e33d) form2_midp_image_pane_ParamLimits

0xac0f,	// (0x0005e33d) form2_midp_image_pane

0xac2a,	// (0x0005e358) form2_midp_label_pane_ParamLimits

0xac2a,	// (0x0005e358) form2_midp_label_pane

0xac49,	// (0x0005e377) form2_midp_label_pane_cp_ParamLimits

0xac49,	// (0x0005e377) form2_midp_label_pane_cp

0xac6a,	// (0x0005e398) form2_midp_string_pane_ParamLimits

0xac6a,	// (0x0005e398) form2_midp_string_pane

0x3d35,	// (0x00057463) form2_midp_text_pane_ParamLimits

0x3d35,	// (0x00057463) form2_midp_text_pane

0xac7c,	// (0x0005e3aa) form2_midp_time_pane

0xac8c,	// (0x0005e3ba) input_focus_pane_cp51_ParamLimits

0xac8c,	// (0x0005e3ba) input_focus_pane_cp51

0xaca4,	// (0x0005e3d2) form2_midp_label_pane_t1_ParamLimits

0xaca4,	// (0x0005e3d2) form2_midp_label_pane_t1

0x3d58,	// (0x00057486) form2_mdip_text_pane_t1_ParamLimits

0x3d58,	// (0x00057486) form2_mdip_text_pane_t1

0x3d77,	// (0x000574a5) form2_midp_time_pane_t1

0xacf2,	// (0x0005e420) form2_midp_gauge_slider_pane_t1

0xad04,	// (0x0005e432) form2_midp_gauge_slider_pane_t2

0xad16,	// (0x0005e444) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x0006322e) form2_midp_gauge_slider_pane_t

0xad28,	// (0x0005e456) form2_midp_slider_pane

0xad34,	// (0x0005e462) form2_midp_gauge_wait_pane_t1

0xad42,	// (0x0005e470) form2_midp_wait_pane_ParamLimits

0xad42,	// (0x0005e470) form2_midp_wait_pane

0x883c,	// (0x0005bf6a) list_single_2graphic_pane_cp4_ParamLimits

0x883c,	// (0x0005bf6a) list_single_2graphic_pane_cp4

0xad6d,	// (0x0005e49b) list_single_midp_graphic_pane_cp_ParamLimits

0xad6d,	// (0x0005e49b) list_single_midp_graphic_pane_cp

0xb4a0,	// (0x0005ebce) list_highlight_pane_cp20

0xad91,	// (0x0005e4bf) list_single_2graphic_pane_g1_cp4

0xa2d8,	// (0x0005da06) list_single_2graphic_pane_g2_cp4

0xad99,	// (0x0005e4c7) list_single_2graphic_pane_t1_cp4

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp21

0xada8,	// (0x0005e4d6) list_single_midp_graphic_pane_g4_cp

0xadb7,	// (0x0005e4e5) list_single_midp_graphic_pane_t1_cp

0xadcc,	// (0x0005e4fa) form2_mdip_string_pane_t1_ParamLimits

0xadcc,	// (0x0005e4fa) form2_mdip_string_pane_t1

0xb4a0,	// (0x0005ebce) bg_wml_button_pane_cp2

0xb496,	// (0x0005ebc4) form2_midp_image_pane_g1

0x4077,	// (0x000577a5) list_double_large_graphic_pane_g5_ParamLimits

0x4077,	// (0x000577a5) list_double_large_graphic_pane_g5

0x5996,	// (0x000590c4) midp_form_pane_ParamLimits

0xb4ee,	// (0x0005ec1c) main_apps_wheel_pane_ParamLimits

0x6667,	// (0x00059d95) popup_preview_window_ParamLimits

0x6667,	// (0x00059d95) popup_preview_window

0x684e,	// (0x00059f7c) popup_touch_info_window_ParamLimits

0x684e,	// (0x00059f7c) popup_touch_info_window

0x6870,	// (0x00059f9e) popup_touch_menu_window_ParamLimits

0x6870,	// (0x00059f9e) popup_touch_menu_window

0xb48c,	// (0x0005ebba) bg_popup_sub_pane_cp6

0xae71,	// (0x0005e59f) list_touch_menu_pane

0xae79,	// (0x0005e5a7) list_single_touch_menu_pane_ParamLimits

0xae79,	// (0x0005e5a7) list_single_touch_menu_pane

0xae91,	// (0x0005e5bf) list_single_touch_menu_pane_t1

0xb4ee,	// (0x0005ec1c) bg_popup_sub_pane_cp7_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_popup_sub_pane_cp7

0xae9f,	// (0x0005e5cd) heading_sub_pane

0xaea7,	// (0x0005e5d5) list_touch_info_pane_ParamLimits

0xaea7,	// (0x0005e5d5) list_touch_info_pane

0xaeb6,	// (0x0005e5e4) list_single_touch_info_pane_ParamLimits

0xaeb6,	// (0x0005e5e4) list_single_touch_info_pane

0xaec8,	// (0x0005e5f6) list_single_touch_info_pane_t1

0xaed6,	// (0x0005e604) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x0006323c) list_single_touch_info_pane_t

0x7e03,	// (0x0005b531) bg_popup_heading_pane_cp

0xaee4,	// (0x0005e612) heading_sub_pane_t1

0x8783,	// (0x0005beb1) bg_popup_preview_window_pane_cp_ParamLimits

0x8783,	// (0x0005beb1) bg_popup_preview_window_pane_cp

0xae9f,	// (0x0005e5cd) heading_preview_pane

0xaea7,	// (0x0005e5d5) list_preview_pane_ParamLimits

0xaea7,	// (0x0005e5d5) list_preview_pane

0xaef2,	// (0x0005e620) popup_preview_window_g1

0xaeb6,	// (0x0005e5e4) list_single_preview_pane_ParamLimits

0xaeb6,	// (0x0005e5e4) list_single_preview_pane

0xaefa,	// (0x0005e628) list_single_preview_pane_g1

0xaf02,	// (0x0005e630) list_single_preview_pane_t1

0xaec8,	// (0x0005e5f6) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x00063241) list_single_preview_pane_t

0xaf10,	// (0x0005e63e) bg_popup_heading_pane_cp2_ParamLimits

0xaf10,	// (0x0005e63e) bg_popup_heading_pane_cp2

0xaf26,	// (0x0005e654) heading_preview_pane_g1

0xaf2e,	// (0x0005e65c) heading_preview_pane_t1_ParamLimits

0xaf2e,	// (0x0005e65c) heading_preview_pane_t1

0xb541,	// (0x0005ec6f) soft_indicator_pane_t1_ParamLimits

0xefb5,	// (0x000626e3) scroll_pane_ParamLimits

0xf3f3,	// (0x00062b21) scroll_sc2_left_pane

0xf3fc,	// (0x00062b2a) scroll_sc2_right_pane

0xf41b,	// (0x00062b49) scroll_bg_pane_g1_ParamLimits

0xf430,	// (0x00062b5e) scroll_bg_pane_g2_ParamLimits

0xf448,	// (0x00062b76) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x00062e1c) scroll_bg_pane_g_ParamLimits

0xf41b,	// (0x00062b49) scroll_handle_pane_g1_ParamLimits

0xf46a,	// (0x00062b98) scroll_handle_pane_g2_ParamLimits

0xf448,	// (0x00062b76) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x00062e23) scroll_handle_pane_g_ParamLimits

0x62ae,	// (0x000599dc) popup_choice_list_window_ParamLimits

0x62ae,	// (0x000599dc) popup_choice_list_window

0x85c5,	// (0x0005bcf3) choice_list_pane

0x8653,	// (0x0005bd81) cell_toolbar_pane_t1

0x867b,	// (0x0005bda9) toolbar_button_pane_ParamLimits

0x996c,	// (0x0005d09a) ai_gene_pane_1_t2_ParamLimits

0x996c,	// (0x0005d09a) ai_gene_pane_1_t2

0x0001,

0xf91d,	// (0x0006304b) ai_gene_pane_1_t_ParamLimits

0xf91d,	// (0x0006304b) ai_gene_pane_1_t

0xaf4b,	// (0x0005e679) scroll_sc2_left_pane_g1

0xaf4b,	// (0x0005e679) scroll_sc2_right_pane_g1

0x814f,	// (0x0005b87d) bg_popup_sub_pane_cp10

0xaf55,	// (0x0005e683) list_choice_list_pane

0xaf6e,	// (0x0005e69c) list_single_choice_list_pane_ParamLimits

0xaf6e,	// (0x0005e69c) list_single_choice_list_pane

0xaf86,	// (0x0005e6b4) list_single_choice_list_pane_g1

0xf1d8,	// (0x00062906) list_single_choice_list_pane_t1_ParamLimits

0xf1d8,	// (0x00062906) list_single_choice_list_pane_t1

0xaf8e,	// (0x0005e6bc) choice_list_pane_g1

0xaf96,	// (0x0005e6c4) choice_list_pane_t1

0xb48c,	// (0x0005ebba) input_focus_pane_cp11

0xf356,	// (0x00062a84) title_pane_stacon_g2_ParamLimits

0xf356,	// (0x00062a84) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x00062e02) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00062e02) title_pane_stacon_g

0x7e03,	// (0x0005b531) cursor_press_pane

0x6368,	// (0x00059a96) popup_fep_hwr_window_ParamLimits

0x6368,	// (0x00059a96) popup_fep_hwr_window

0x63f2,	// (0x00059b20) popup_fep_vkb_window_ParamLimits

0x63f2,	// (0x00059b20) popup_fep_vkb_window

0xafa4,	// (0x0005e6d2) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x0006326a) fep_vkb_side_pane_g_ParamLimits

0x6e2c,	// (0x0005a55a) fep_hwr_candidate_pane_ParamLimits

0x6e2c,	// (0x0005a55a) fep_hwr_candidate_pane

0x6e56,	// (0x0005a584) fep_hwr_side_pane_ParamLimits

0x6e56,	// (0x0005a584) fep_hwr_side_pane

0x6e78,	// (0x0005a5a6) fep_hwr_top_pane_ParamLimits

0x6e78,	// (0x0005a5a6) fep_hwr_top_pane

0x6e90,	// (0x0005a5be) fep_hwr_write_pane_ParamLimits

0x6e90,	// (0x0005a5be) fep_hwr_write_pane

0xfb3c,	// (0x0006326a) fep_vkb_side_pane_g

0xafac,	// (0x0005e6da) fep_hwr_top_pane_g1

0xafbe,	// (0x0005e6ec) fep_hwr_top_pane_g2

0x6eca,	// (0x0005a5f8) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x00063246) fep_hwr_top_pane_g

0x6edf,	// (0x0005a60d) fep_hwr_top_text_pane

0x33e6,	// (0x00056b14) fep_hwr_top_text_pane_g1

0xaff4,	// (0x0005e722) fep_hwr_top_text_pane_t1

0x6fe9,	// (0x0005a717) fep_hwr_candidate_pane_g1

0xb23f,	// (0x0005e96d) fep_vkb_keypad_pane_g3_ParamLimits

0xb23f,	// (0x0005e96d) fep_vkb_keypad_pane_g3

0xb26b,	// (0x0005e999) fep_vkb_keypad_pane_g4_ParamLimits

0xb26b,	// (0x0005e999) fep_vkb_keypad_pane_g4

0xb2e2,	// (0x0005ea10) fep_vkb_bottom_pane_g2_ParamLimits

0xb2e2,	// (0x0005ea10) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x00063271) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x00063271) fep_vkb_bottom_pane_g

0xaf4b,	// (0x0005e679) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x0006327b) cell_vkb_side_pane_g

0xb36d,	// (0x0005ea9b) cell_vkb_side_pane_t1

0xb37b,	// (0x0005eaa9) cell_vkb_side_pane_t1_copy1

0xaf4b,	// (0x0005e679) bg_fep_vkb_candidate_pane_g2

0xb7ad,	// (0x0005eedb) cell_vkb_candidate_pane_ParamLimits

0xb002,	// (0x0005e730) aid_size_cell_vkb_ParamLimits

0xb002,	// (0x0005e730) aid_size_cell_vkb

0xb7ad,	// (0x0005eedb) cell_vkb_candidate_pane

0x7010,	// (0x0005a73e) bg_popup_fep_shadow_pane_g1

0xb094,	// (0x0005e7c2) fep_vkb_bottom_pane_ParamLimits

0xb094,	// (0x0005e7c2) fep_vkb_bottom_pane

0xb0d1,	// (0x0005e7ff) fep_vkb_candidate_pane_ParamLimits

0xb0d1,	// (0x0005e7ff) fep_vkb_candidate_pane

0xb0ed,	// (0x0005e81b) fep_vkb_keypad_pane_ParamLimits

0xb0ed,	// (0x0005e81b) fep_vkb_keypad_pane

0xb120,	// (0x0005e84e) fep_vkb_side_pane_ParamLimits

0xb120,	// (0x0005e84e) fep_vkb_side_pane

0xb15c,	// (0x0005e88a) fep_vkb_top_pane_ParamLimits

0xb15c,	// (0x0005e88a) fep_vkb_top_pane

0xb198,	// (0x0005e8c6) fep_vkb_top_pane_g1_ParamLimits

0xb198,	// (0x0005e8c6) fep_vkb_top_pane_g1

0xb1a7,	// (0x0005e8d5) fep_vkb_top_pane_g2_ParamLimits

0xb1a7,	// (0x0005e8d5) fep_vkb_top_pane_g2

0xb1b6,	// (0x0005e8e4) fep_vkb_top_pane_g3_ParamLimits

0xb1b6,	// (0x0005e8e4) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x00063261) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x00063261) fep_vkb_top_pane_g

0xb1d4,	// (0x0005e902) fep_vkb_top_text_pane_ParamLimits

0xb1d4,	// (0x0005e902) fep_vkb_top_text_pane

0xb1e5,	// (0x0005e913) fep_vkb_side_pane_g1_ParamLimits

0xb1e5,	// (0x0005e913) fep_vkb_side_pane_g1

0xb22e,	// (0x0005e95c) grid_vkb_side_pane_ParamLimits

0xb22e,	// (0x0005e95c) grid_vkb_side_pane

0x7018,	// (0x0005a746) bg_popup_fep_shadow_pane_g2

0x7021,	// (0x0005a74f) bg_popup_fep_shadow_pane_g3

0x7029,	// (0x0005a757) bg_popup_fep_shadow_pane_g4

0x7032,	// (0x0005a760) bg_popup_fep_shadow_pane_g5

0x703c,	// (0x0005a76a) bg_popup_fep_shadow_pane_g6

0x7044,	// (0x0005a772) bg_popup_fep_shadow_pane_g7

0xf0c1,	// (0x000627ef) bg_popup_fep_shadow_pane_g8

0xb28d,	// (0x0005e9bb) grid_vkb_keypad_number_pane_ParamLimits

0xb28d,	// (0x0005e9bb) grid_vkb_keypad_number_pane

0xb2a1,	// (0x0005e9cf) grid_vkb_keypad_pane_ParamLimits

0xb2a1,	// (0x0005e9cf) grid_vkb_keypad_pane

0xb2c7,	// (0x0005e9f5) fep_vkb_bottom_pane_g1_ParamLimits

0xb2c7,	// (0x0005e9f5) fep_vkb_bottom_pane_g1

0xb2f0,	// (0x0005ea1e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb2f0,	// (0x0005ea1e) grid_vkb_keypad_bottom_left_pane

0xb305,	// (0x0005ea33) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb305,	// (0x0005ea33) grid_vkb_keypad_bottom_right_pane

0xb31a,	// (0x0005ea48) fep_vkb_top_text_pane_g1

0xb335,	// (0x0005ea63) fep_vkb_top_text_pane_t1

0xb34a,	// (0x0005ea78) cell_vkb_side_pane_ParamLimits

0xb34a,	// (0x0005ea78) cell_vkb_side_pane

0xaf4b,	// (0x0005e679) cell_vkb_side_pane_g1

0xb389,	// (0x0005eab7) cell_vkb_keypad_pane_ParamLimits

0xb389,	// (0x0005eab7) cell_vkb_keypad_pane

0xb416,	// (0x0005eb44) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0006328e) bg_popup_fep_shadow_pane_g

0x7056,	// (0x0005a784) cell_hwr_side_pane_g1

0x7056,	// (0x0005a784) cell_hwr_side_pane_g2

0xb420,	// (0x0005eb4e) cell_vkb_keypad_pane_t1

0xb42e,	// (0x0005eb5c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb42e,	// (0x0005eb5c) cell_vkb_keypad_bottom_left_pane

0xb44b,	// (0x0005eb79) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb44b,	// (0x0005eb79) cell_vkb_keypad_bottom_right_pane

0xaf4b,	// (0x0005e679) cell_vkb_keypad_bottom_left_pane_g1

0xaf4b,	// (0x0005e679) cell_vkb_keypad_bottom_right_pane_g1

0xb772,	// (0x0005eea0) cell_vkb_keypad_number_pane_ParamLimits

0xb772,	// (0x0005eea0) cell_vkb_keypad_number_pane

0xb791,	// (0x0005eebf) cell_vkb_keypad_number_pane_g1

0xb79b,	// (0x0005eec9) cell_vkb_keypad_number_pane_g2

0xb7a4,	// (0x0005eed2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x00063280) cell_vkb_keypad_number_pane_g

0xb420,	// (0x0005eb4e) cell_vkb_keypad_number_pane_t1

0xb7ce,	// (0x0005eefc) fep_vkb_candidate_pane_g1

0x0001,

0xfb73,	// (0x000632a1) cell_hwr_side_pane_g

0xb7e7,	// (0x0005ef15) cell_hwr_side_pane_t1

0x7060,	// (0x0005a78e) cell_hwr_side_pane_t1_copy1

0x706e,	// (0x0005a79c) cell_hwr_candidate_pane_g1

0x709d,	// (0x0005a7cb) cell_hwr_candidate_pane_t1

0xaf4b,	// (0x0005e679) cell_vkb_candidate_pane_g2

0xb82b,	// (0x0005ef59) cell_vkb_candidate_pane_t1

0x6df3,	// (0x0005a521) bg_popup_fep_shadow_pane_ParamLimits

0x6df3,	// (0x0005a521) bg_popup_fep_shadow_pane

0x6eaa,	// (0x0005a5d8) bg_fep_hwr_top_pane_g4

0xafd0,	// (0x0005e6fe) bg_hwr_side_pane_g1_ParamLimits

0xafd0,	// (0x0005e6fe) bg_hwr_side_pane_g1

0x6f1d,	// (0x0005a64b) cell_hwr_side_pane_ParamLimits

0x6f1d,	// (0x0005a64b) cell_hwr_side_pane

0x6f5a,	// (0x0005a688) fep_hwr_write_pane_g1_ParamLimits

0x6f5a,	// (0x0005a688) fep_hwr_write_pane_g1

0x6f67,	// (0x0005a695) fep_hwr_write_pane_g2_ParamLimits

0x6f67,	// (0x0005a695) fep_hwr_write_pane_g2

0x6f74,	// (0x0005a6a2) fep_hwr_write_pane_g3_ParamLimits

0x6f74,	// (0x0005a6a2) fep_hwr_write_pane_g3

0x6f82,	// (0x0005a6b0) fep_hwr_write_pane_g4_ParamLimits

0x6f82,	// (0x0005a6b0) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0006324d) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0006324d) fep_hwr_write_pane_g

0x6eaa,	// (0x0005a5d8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6eaa,	// (0x0005a5d8) bg_fep_hwr_candidate_pane_g2

0x6f97,	// (0x0005a6c5) cell_hwr_candidate_pane_ParamLimits

0x6f97,	// (0x0005a6c5) cell_hwr_candidate_pane

0x6fe9,	// (0x0005a717) fep_hwr_candidate_pane_g1_ParamLimits

0xb030,	// (0x0005e75e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb030,	// (0x0005e75e) bg_popup_fep_shadow_pane_cp2

0xb1c6,	// (0x0005e8f4) fep_vkb_top_pane_g4_ParamLimits

0xb1c6,	// (0x0005e8f4) fep_vkb_top_pane_g4

0xb20c,	// (0x0005e93a) fep_vkb_side_pane_g2_ParamLimits

0xb20c,	// (0x0005e93a) fep_vkb_side_pane_g2

0x56ee,	// (0x00058e1c) list_setting_pane_t4_ParamLimits

0x56ee,	// (0x00058e1c) list_setting_pane_t4

0x578a,	// (0x00058eb8) list_setting_number_pane_t5_ParamLimits

0x578a,	// (0x00058eb8) list_setting_number_pane_t5

0x5c81,	// (0x000593af) list_double_heading_pane_cp2_ParamLimits

0x5c81,	// (0x000593af) list_double_heading_pane_cp2

0xf05c,	// (0x0006278a) list_double_heading_pane_g1_cp2_ParamLimits

0xf05c,	// (0x0006278a) list_double_heading_pane_g1_cp2

0xf068,	// (0x00062796) list_double_heading_pane_g2_cp2_ParamLimits

0xf068,	// (0x00062796) list_double_heading_pane_g2_cp2

0xb839,	// (0x0005ef67) list_double_heading_pane_t1_cp2_ParamLimits

0xb839,	// (0x0005ef67) list_double_heading_pane_t1_cp2

0xb84f,	// (0x0005ef7d) list_double_heading_pane_t2_cp2_ParamLimits

0xb84f,	// (0x0005ef7d) list_double_heading_pane_t2_cp2

0xb484,	// (0x0005ebb2) aid_value_unit2

0x4de1,	// (0x0005850f) popup_preview_fixed_window

0xb62f,	// (0x0005ed5d) bg_popup_preview_window_pane_cp02

0xb861,	// (0x0005ef8f) list_preview_fixed_pane

0xb8a7,	// (0x0005efd5) list_empty_pane_fp_ParamLimits

0xb8a7,	// (0x0005efd5) list_empty_pane_fp

0xb8a7,	// (0x0005efd5) list_single_cale_day_pane_fp_ParamLimits

0xb8a7,	// (0x0005efd5) list_single_cale_day_pane_fp

0xb8a7,	// (0x0005efd5) list_single_graphic_heading_pane_fp_ParamLimits

0xb8a7,	// (0x0005efd5) list_single_graphic_heading_pane_fp

0xb8a7,	// (0x0005efd5) list_single_graphic_pane_fp_ParamLimits

0xb8a7,	// (0x0005efd5) list_single_graphic_pane_fp

0xb8a7,	// (0x0005efd5) list_single_heading_pane_fp_ParamLimits

0xb8a7,	// (0x0005efd5) list_single_heading_pane_fp

0xb8a7,	// (0x0005efd5) list_single_pane_fp_ParamLimits

0xb8a7,	// (0x0005efd5) list_single_pane_fp

0xb8c0,	// (0x0005efee) list_single_pane_fp_g1_ParamLimits

0xb8c0,	// (0x0005efee) list_single_pane_fp_g1

0x408c,	// (0x000577ba) list_single_pane_fp_g2_ParamLimits

0x408c,	// (0x000577ba) list_single_pane_fp_g2

0x9757,	// (0x0005ce85) list_single_pane_fp_g3_ParamLimits

0x9757,	// (0x0005ce85) list_single_pane_fp_g3

0xb8cc,	// (0x0005effa) list_single_pane_fp_g4_ParamLimits

0xb8cc,	// (0x0005effa) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x000632b4) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x000632b4) list_single_pane_fp_g

0x3d8a,	// (0x000574b8) list_single_pane_fp_t1_ParamLimits

0x3d8a,	// (0x000574b8) list_single_pane_fp_t1

0x3da1,	// (0x000574cf) list_single_graphic_pane_fp_g1_ParamLimits

0x3da1,	// (0x000574cf) list_single_graphic_pane_fp_g1

0xb8c0,	// (0x0005efee) list_single_graphic_pane_fp_g2_ParamLimits

0xb8c0,	// (0x0005efee) list_single_graphic_pane_fp_g2

0x408c,	// (0x000577ba) list_single_graphic_pane_fp_g3_ParamLimits

0x408c,	// (0x000577ba) list_single_graphic_pane_fp_g3

0x9757,	// (0x0005ce85) list_single_graphic_pane_fp_g4_ParamLimits

0x9757,	// (0x0005ce85) list_single_graphic_pane_fp_g4

0xb8cc,	// (0x0005effa) list_single_graphic_pane_fp_g5_ParamLimits

0xb8cc,	// (0x0005effa) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x000632bd) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x000632bd) list_single_graphic_pane_fp_g

0x3dad,	// (0x000574db) list_single_graphic_pane_fp_t1_ParamLimits

0x3dad,	// (0x000574db) list_single_graphic_pane_fp_t1

0x3da1,	// (0x000574cf) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3da1,	// (0x000574cf) list_single_graphic_heading_pane_fp_g1

0xb8c0,	// (0x0005efee) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb8c0,	// (0x0005efee) list_single_graphic_heading_pane_fp_g2

0x408c,	// (0x000577ba) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x408c,	// (0x000577ba) list_single_graphic_heading_pane_fp_g3

0x9757,	// (0x0005ce85) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9757,	// (0x0005ce85) list_single_graphic_heading_pane_fp_g4

0xb8cc,	// (0x0005effa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb8cc,	// (0x0005effa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000632bd) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000632bd) list_single_graphic_heading_pane_fp_g

0x3dc3,	// (0x000574f1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3dc3,	// (0x000574f1) list_single_graphic_heading_pane_fp_t1

0x3dd9,	// (0x00057507) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3dd9,	// (0x00057507) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x000632c8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x000632c8) list_single_graphic_heading_pane_fp_t

0x3deb,	// (0x00057519) list_single_cale_day_pane_fp_g1_ParamLimits

0x3deb,	// (0x00057519) list_single_cale_day_pane_fp_g1

0xb8d8,	// (0x0005f006) list_single_cale_day_pane_fp_g2_ParamLimits

0xb8d8,	// (0x0005f006) list_single_cale_day_pane_fp_g2

0x976b,	// (0x0005ce99) list_single_cale_day_pane_fp_g3_ParamLimits

0x976b,	// (0x0005ce99) list_single_cale_day_pane_fp_g3

0x9793,	// (0x0005cec1) list_single_cale_day_pane_fp_g4_ParamLimits

0x9793,	// (0x0005cec1) list_single_cale_day_pane_fp_g4

0x97b7,	// (0x0005cee5) list_single_cale_day_pane_fp_g5_ParamLimits

0x97b7,	// (0x0005cee5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x000632cd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x000632cd) list_single_cale_day_pane_fp_g

0x3e23,	// (0x00057551) list_single_cale_day_pane_fp_t1_ParamLimits

0x3e23,	// (0x00057551) list_single_cale_day_pane_fp_t1

0x3e49,	// (0x00057577) list_single_cale_day_pane_fp_t2_ParamLimits

0x3e49,	// (0x00057577) list_single_cale_day_pane_fp_t2

0x3e62,	// (0x00057590) list_single_cale_day_pane_fp_t3_ParamLimits

0x3e62,	// (0x00057590) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x000632d8) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x000632d8) list_single_cale_day_pane_fp_t

0xb8c0,	// (0x0005efee) list_empty_pane_fp_g1_ParamLimits

0xb8c0,	// (0x0005efee) list_empty_pane_fp_g1

0x3e7b,	// (0x000575a9) list_empty_pane_fp_t1

0x3e89,	// (0x000575b7) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x000632df) list_empty_pane_fp_t

0xb8c0,	// (0x0005efee) list_single_heading_pane_fp_g1_ParamLimits

0xb8c0,	// (0x0005efee) list_single_heading_pane_fp_g1

0x408c,	// (0x000577ba) list_single_heading_pane_fp_g2_ParamLimits

0x408c,	// (0x000577ba) list_single_heading_pane_fp_g2

0x9757,	// (0x0005ce85) list_single_heading_pane_fp_g3_ParamLimits

0x9757,	// (0x0005ce85) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x000632e4) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x000632e4) list_single_heading_pane_fp_g

0x3e97,	// (0x000575c5) list_single_heading_pane_fp_t1_ParamLimits

0x3e97,	// (0x000575c5) list_single_heading_pane_fp_t1

0x3ea9,	// (0x000575d7) list_single_heading_pane_fp_t2_ParamLimits

0x3ea9,	// (0x000575d7) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x000632eb) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x000632eb) list_single_heading_pane_fp_t

0xf1ed,	// (0x0006291b) aid_size_cell_fast

0xb604,	// (0x0005ed32) soft_indicator_pane_cp1_t1

0xf22a,	// (0x00062958) cell_app_pane_cp2_ParamLimits

0xf22a,	// (0x00062958) cell_app_pane_cp2

0x6e15,	// (0x0005a543) fep_hwr_candidate_drop_down_list_pane

0x7003,	// (0x0005a731) fep_hwr_candidate_pane_g3_ParamLimits

0x7003,	// (0x0005a731) fep_hwr_candidate_pane_g3

0x2b9b,	// (0x000562c9) fep_hwr_candidate_pane_g4_ParamLimits

0x2b9b,	// (0x000562c9) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0006325a) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x0006325a) fep_hwr_candidate_pane_g

0xb0c0,	// (0x0005e7ee) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb0c0,	// (0x0005e7ee) fep_vkb_candidate_drop_down_list_pane

0xb7d6,	// (0x0005ef04) fep_vkb_candidate_pane_g3

0xb7de,	// (0x0005ef0c) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x00063287) fep_vkb_candidate_pane_g

0x706e,	// (0x0005a79c) cell_hwr_candidate_pane_g1_ParamLimits

0x707c,	// (0x0005a7aa) cell_hwr_candidate_pane_g3_ParamLimits

0x707c,	// (0x0005a7aa) cell_hwr_candidate_pane_g3

0xd093,	// (0x000607c1) cell_hwr_candidate_pane_g4_ParamLimits

0xd093,	// (0x000607c1) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x000632a6) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x000632a6) cell_hwr_candidate_pane_g

0xb7f5,	// (0x0005ef23) cell_vkb_candidate_pane_g3_ParamLimits

0xb7f5,	// (0x0005ef23) cell_vkb_candidate_pane_g3

0xb810,	// (0x0005ef3e) cell_vkb_candidate_pane_g4_ParamLimits

0xb810,	// (0x0005ef3e) cell_vkb_candidate_pane_g4

0xb8e4,	// (0x0005f012) cell_app_pane_cp2_g1_ParamLimits

0xb8e4,	// (0x0005f012) cell_app_pane_cp2_g1

0xb902,	// (0x0005f030) cell_app_pane_cp2_g2_ParamLimits

0xb902,	// (0x0005f030) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x000632f0) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x000632f0) cell_app_pane_cp2_g

0xb90e,	// (0x0005f03c) cell_app_pane_cp2_t1_ParamLimits

0xb90e,	// (0x0005f03c) cell_app_pane_cp2_t1

0xf042,	// (0x00062770) grid_highlight_pane_cp1_ParamLimits

0xf042,	// (0x00062770) grid_highlight_pane_cp1

0x70bb,	// (0x0005a7e9) cell_hwr_candidate_pane_cp1_ParamLimits

0x70bb,	// (0x0005a7e9) cell_hwr_candidate_pane_cp1

0x706e,	// (0x0005a79c) fep_hwr_candidate_drop_down_list_pane_g1

0x70df,	// (0x0005a80d) fep_hwr_candidate_drop_down_list_pane_g2

0x70ec,	// (0x0005a81a) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000632f5) fep_hwr_candidate_drop_down_list_pane_g

0x70f9,	// (0x0005a827) fep_hwr_candidate_drop_down_list_scroll_pane

0x7102,	// (0x0005a830) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7102,	// (0x0005a830) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x710f,	// (0x0005a83d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x710f,	// (0x0005a83d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x711c,	// (0x0005a84a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x711c,	// (0x0005a84a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7129,	// (0x0005a857) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7129,	// (0x0005a857) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7144,	// (0x0005a872) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7144,	// (0x0005a872) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x715f,	// (0x0005a88d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x715f,	// (0x0005a88d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x717a,	// (0x0005a8a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x717a,	// (0x0005a8a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7195,	// (0x0005a8c3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7195,	// (0x0005a8c3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x000632fc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x000632fc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb920,	// (0x0005f04e) cell_vkb_candidate_pane_cp1_ParamLimits

0xb920,	// (0x0005f04e) cell_vkb_candidate_pane_cp1

0xb1c6,	// (0x0005e8f4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb1c6,	// (0x0005e8f4) fep_vkb_candidate_drop_down_list_pane_g1

0xb946,	// (0x0005f074) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb946,	// (0x0005f074) fep_vkb_candidate_drop_down_list_pane_g2

0xb953,	// (0x0005f081) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb953,	// (0x0005f081) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdf,	// (0x0006330d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdf,	// (0x0006330d) fep_vkb_candidate_drop_down_list_pane_g

0xb960,	// (0x0005f08e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb960,	// (0x0005f08e) fep_vkb_candidate_drop_down_list_scroll_pane

0xb96d,	// (0x0005f09b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb96d,	// (0x0005f09b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb97a,	// (0x0005f0a8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb97a,	// (0x0005f0a8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb986,	// (0x0005f0b4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb986,	// (0x0005f0b4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb992,	// (0x0005f0c0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb992,	// (0x0005f0c0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb9b3,	// (0x0005f0e1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb9b3,	// (0x0005f0e1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb9d4,	// (0x0005f102) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb9d4,	// (0x0005f102) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xb9f5,	// (0x0005f123) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xb9f5,	// (0x0005f123) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xba16,	// (0x0005f144) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xba16,	// (0x0005f144) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe6,	// (0x00063314) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe6,	// (0x00063314) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x4ef9,	// (0x00058627) title_pane_g1_ParamLimits

0x4f06,	// (0x00058634) title_pane_g2_ParamLimits

0xf554,	// (0x00062c82) title_pane_g_ParamLimits

0x33de,	// (0x00056b0c) aid_call2_pane

0x33d6,	// (0x00056b04) aid_call_pane

0x33e6,	// (0x00056b14) popup_clock_analogue_window_g1

0x33e6,	// (0x00056b14) popup_clock_analogue_window_g2

0x5c62,	// (0x00059390) popup_clock_analogue_window_g3

0x5c6b,	// (0x00059399) popup_clock_analogue_window_g4

0xb496,	// (0x0005ebc4) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x00062e31) popup_clock_analogue_window_g

0x5c73,	// (0x000593a1) popup_clock_analogue_window_t1

0x5cb4,	// (0x000593e2) clock_digital_number_pane_ParamLimits

0x5cb4,	// (0x000593e2) clock_digital_number_pane

0x5cc0,	// (0x000593ee) clock_digital_number_pane_cp02_ParamLimits

0x5cc0,	// (0x000593ee) clock_digital_number_pane_cp02

0x5ccc,	// (0x000593fa) clock_digital_number_pane_cp03_ParamLimits

0x5ccc,	// (0x000593fa) clock_digital_number_pane_cp03

0x5cd8,	// (0x00059406) clock_digital_number_pane_cp04_ParamLimits

0x5cd8,	// (0x00059406) clock_digital_number_pane_cp04

0x5ce4,	// (0x00059412) clock_digital_separator_pane_ParamLimits

0x5ce4,	// (0x00059412) clock_digital_separator_pane

0x5cf0,	// (0x0005941e) popup_clock_digital_window_t1_ParamLimits

0x5cf0,	// (0x0005941e) popup_clock_digital_window_t1

0xb496,	// (0x0005ebc4) clock_digital_number_pane_g1

0xb496,	// (0x0005ebc4) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x00062e3c) clock_digital_number_pane_g

0xb496,	// (0x0005ebc4) clock_digital_separator_pane_g1

0xb496,	// (0x0005ebc4) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x00062e3c) clock_digital_separator_pane_g

0x8171,	// (0x0005b89f) aid_fill_nsta_ParamLimits

0x82c1,	// (0x0005b9ef) indicator_nsta_pane_ParamLimits

0x8452,	// (0x0005bb80) popup_clock_analogue_window

0x8452,	// (0x0005bb80) popup_clock_digital_window

0xb4ee,	// (0x0005ec1c) grid_indicator_nsta_pane_ParamLimits

0xa972,	// (0x0005e0a0) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x000631da) clock_nsta_pane_t

0x5bcb,	// (0x000592f9) aid_size_max_handle

0x5bd5,	// (0x00059303) aid_size_min_handle

0x7e03,	// (0x0005b531) editor_scroll_pane

0xba31,	// (0x0005f15f) ex_editor_pane

0xf1b3,	// (0x000628e1) scroll_pane_cp13

0xefe1,	// (0x0006270f) scroll_pane_cp14

0x3415,	// (0x00056b43) scroll_pane_cp36

0x5c97,	// (0x000593c5) list_single_graphic_hl_pane_cp2_ParamLimits

0x5c97,	// (0x000593c5) list_single_graphic_hl_pane_cp2

0x96b4,	// (0x0005cde2) list_single_graphic_hl_pane_ParamLimits

0x96b4,	// (0x0005cde2) list_single_graphic_hl_pane

0x3ebf,	// (0x000575ed) aid_size_min_hl_cp1

0xba39,	// (0x0005f167) list_highlight_pane_cp34_ParamLimits

0xba39,	// (0x0005f167) list_highlight_pane_cp34

0xba4a,	// (0x0005f178) list_single_graphic_hl_pane_g1_ParamLimits

0xba4a,	// (0x0005f178) list_single_graphic_hl_pane_g1

0x71b0,	// (0x0005a8de) list_single_graphic_hl_pane_g2_ParamLimits

0x71b0,	// (0x0005a8de) list_single_graphic_hl_pane_g2

0x71b0,	// (0x0005a8de) list_single_graphic_hl_pane_g3_ParamLimits

0x71b0,	// (0x0005a8de) list_single_graphic_hl_pane_g3

0x96e0,	// (0x0005ce0e) list_single_graphic_hl_pane_g4_ParamLimits

0x96e0,	// (0x0005ce0e) list_single_graphic_hl_pane_g4

0x97db,	// (0x0005cf09) list_single_graphic_hl_pane_g5_ParamLimits

0x97db,	// (0x0005cf09) list_single_graphic_hl_pane_g5

0x0004,

0xfbf7,	// (0x00063325) list_single_graphic_hl_pane_g_ParamLimits

0xfbf7,	// (0x00063325) list_single_graphic_hl_pane_g

0x71bc,	// (0x0005a8ea) list_single_graphic_hl_pane_t1_ParamLimits

0x71bc,	// (0x0005a8ea) list_single_graphic_hl_pane_t1

0xba57,	// (0x0005f185) aid_size_min_hl_cp2

0xba60,	// (0x0005f18e) list_highlight_pane_cp34_cp2_ParamLimits

0xba60,	// (0x0005f18e) list_highlight_pane_cp34_cp2

0xba4a,	// (0x0005f178) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xba4a,	// (0x0005f178) list_single_graphic_hl_pane_g1_cp2

0xba6d,	// (0x0005f19b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xba6d,	// (0x0005f19b) list_single_graphic_hl_pane_g2_cp2

0xba79,	// (0x0005f1a7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba79,	// (0x0005f1a7) list_single_graphic_hl_pane_g3_cp2

0x1dd5,	// (0x00055503) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1dd5,	// (0x00055503) list_single_graphic_hl_pane_g4_cp2

0xba87,	// (0x0005f1b5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xba87,	// (0x0005f1b5) list_single_graphic_hl_pane_g5_cp2

0x6170,	// (0x0005989e) control_pane_g4_ParamLimits

0x6170,	// (0x0005989e) control_pane_g4

0x814f,	// (0x0005b87d) bg_popup_sub_pane_cp10_ParamLimits

0xaf55,	// (0x0005e683) list_choice_list_pane_ParamLimits

0xaf64,	// (0x0005e692) scroll_pane_cp23

0xb62f,	// (0x0005ed5d) bg_popup_preview_window_pane_cp02_ParamLimits

0xb861,	// (0x0005ef8f) list_preview_fixed_pane_ParamLimits

0xb877,	// (0x0005efa5) list_preview_fixed_pane_cp_ParamLimits

0xb877,	// (0x0005efa5) list_preview_fixed_pane_cp

0xb883,	// (0x0005efb1) popup_preview_fixed_window_g1_ParamLimits

0xb883,	// (0x0005efb1) popup_preview_fixed_window_g1

0xb88f,	// (0x0005efbd) popup_preview_fixed_window_g2_ParamLimits

0xb88f,	// (0x0005efbd) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x000632ad) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x000632ad) popup_preview_fixed_window_g

0x5ab4,	// (0x000591e2) aid_navi_side_left_pane_ParamLimits

0x5ac9,	// (0x000591f7) aid_navi_side_right_pane_ParamLimits

0x5ae1,	// (0x0005920f) navi_icon_pane_stacon_ParamLimits

0x5af5,	// (0x00059223) navi_navi_pane_stacon_ParamLimits

0x5ae1,	// (0x0005920f) navi_text_pane_stacon_ParamLimits

0x4c98,	// (0x000583c6) main_text_info_pane

0xbab1,	// (0x0005f1df) listscroll_text_info_pane

0xbab9,	// (0x0005f1e7) list_text_info_pane_ParamLimits

0xbab9,	// (0x0005f1e7) list_text_info_pane

0xbac8,	// (0x0005f1f6) scroll_pane_cp24_ParamLimits

0xbac8,	// (0x0005f1f6) scroll_pane_cp24

0xbae6,	// (0x0005f214) list_text_info_pane_t1_ParamLimits

0xbae6,	// (0x0005f214) list_text_info_pane_t1

0x62d0,	// (0x000599fe) popup_fast_swap2_window_ParamLimits

0x62d0,	// (0x000599fe) popup_fast_swap2_window

0xbb0b,	// (0x0005f239) aid_size_cell_fast2

0xb48c,	// (0x0005ebba) bg_popup_window_pane_cp17

0x8b43,	// (0x0005c271) heading_pane_cp2

0xed66,	// (0x00062494) listscroll_fast2_pane

0xbb15,	// (0x0005f243) grid_fast2_pane

0xbb1f,	// (0x0005f24d) listscroll_fast2_pane_g1

0xbb29,	// (0x0005f257) listscroll_fast2_pane_g2

0x0001,

0xfc02,	// (0x00063330) listscroll_fast2_pane_g

0xf1b3,	// (0x000628e1) scroll_pane_cp26

0xbb33,	// (0x0005f261) cell_fast2_pane_ParamLimits

0xbb33,	// (0x0005f261) cell_fast2_pane

0xbb4a,	// (0x0005f278) cell_fast2_pane_g1

0xbb53,	// (0x0005f281) cell_fast2_pane_g2

0xbb5c,	// (0x0005f28a) cell_fast2_pane_g3

0x0002,

0xfc07,	// (0x00063335) cell_fast2_pane_g

0xeda8,	// (0x000624d6) grid_highlight_pane_cp9

0x6292,	// (0x000599c0) main_eswt_pane_ParamLimits

0x6292,	// (0x000599c0) main_eswt_pane

0xbadd,	// (0x0005f20b) list_single_text_info_pane

0xbb64,	// (0x0005f292) eswt_ctrl_button_pane

0xbb64,	// (0x0005f292) eswt_ctrl_canvas_pane

0xbb6c,	// (0x0005f29a) eswt_ctrl_combo_pane

0xbb64,	// (0x0005f292) eswt_ctrl_default_pane

0xbb64,	// (0x0005f292) eswt_ctrl_label_pane

0xbb74,	// (0x0005f2a2) eswt_ctrl_wait_pane

0xbb7c,	// (0x0005f2aa) eswt_shell_pane

0xb48c,	// (0x0005ebba) listscroll_eswt_app_pane

0xbb9c,	// (0x0005f2ca) popup_eswt_tasktip_window_ParamLimits

0xbb9c,	// (0x0005f2ca) popup_eswt_tasktip_window

0x8783,	// (0x0005beb1) bg_popup_window_pane_cp18

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_ParamLimits

0xbbad,	// (0x0005f2db) eswt_control_pane_g1

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_ParamLimits

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_ParamLimits

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_ParamLimits

0xbbd4,	// (0x0005f302) eswt_control_pane_g4

0x0003,

0xfc0e,	// (0x0006333c) eswt_control_pane_g_ParamLimits

0xfc0e,	// (0x0006333c) eswt_control_pane_g

0xf042,	// (0x00062770) bg_button_pane_ParamLimits

0xf042,	// (0x00062770) bg_button_pane

0xedbd,	// (0x000624eb) common_borders_pane_copy2_ParamLimits

0xedbd,	// (0x000624eb) common_borders_pane_copy2

0xbbe1,	// (0x0005f30f) control_button_pane_g1_ParamLimits

0xbbe1,	// (0x0005f30f) control_button_pane_g1

0xbbed,	// (0x0005f31b) control_button_pane_g2_ParamLimits

0xbbed,	// (0x0005f31b) control_button_pane_g2

0xbbf9,	// (0x0005f327) control_button_pane_g3_ParamLimits

0xbbf9,	// (0x0005f327) control_button_pane_g3

0x0002,

0xfc17,	// (0x00063345) control_button_pane_g_ParamLimits

0xfc17,	// (0x00063345) control_button_pane_g

0xbc0d,	// (0x0005f33b) control_button_pane_t1

0xbc1b,	// (0x0005f349) control_button_pane_t2

0x0001,

0xfc1e,	// (0x0006334c) control_button_pane_t

0x8687,	// (0x0005bdb5) bg_button_pane_g1

0x8697,	// (0x0005bdc5) bg_button_pane_g2

0x868f,	// (0x0005bdbd) bg_button_pane_g3

0x86a7,	// (0x0005bdd5) bg_button_pane_g4

0x869f,	// (0x0005bdcd) bg_button_pane_g5

0x86af,	// (0x0005bddd) bg_button_pane_g6

0x86b7,	// (0x0005bde5) bg_button_pane_g7

0x86c7,	// (0x0005bdf5) bg_button_pane_g8

0x86bf,	// (0x0005bded) bg_button_pane_g9

0x0008,

0xf871,	// (0x00062f9f) bg_button_pane_g

0xaf10,	// (0x0005e63e) common_borders_pane_ParamLimits

0xaf10,	// (0x0005e63e) common_borders_pane

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy1_ParamLimits

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy1

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy1_ParamLimits

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy1

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy1_ParamLimits

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy1

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy1_ParamLimits

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy1

0xaf4b,	// (0x0005e679) bg_eswt_ctrl_canvas_pane_g1

0xaf10,	// (0x0005e63e) common_borders_pane_cp2_ParamLimits

0xaf10,	// (0x0005e63e) common_borders_pane_cp2

0xaf10,	// (0x0005e63e) common_borders_pane_cp3_ParamLimits

0xaf10,	// (0x0005e63e) common_borders_pane_cp3

0xbc29,	// (0x0005f357) separator_horizontal_pane

0xbc31,	// (0x0005f35f) separator_vertical_pane

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy2_ParamLimits

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy2

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy2_ParamLimits

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy2

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy2_ParamLimits

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy2

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy2_ParamLimits

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy2

0xb48c,	// (0x0005ebba) common_borders_pane_cp4

0xbc3a,	// (0x0005f368) separator_horizontal_pane_g1

0xbc43,	// (0x0005f371) separator_horizontal_pane_g2

0xbc4c,	// (0x0005f37a) separator_horizontal_pane_g3

0x0002,

0xfc23,	// (0x00063351) separator_horizontal_pane_g

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy3_ParamLimits

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy3

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy3_ParamLimits

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy3

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy3_ParamLimits

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy3

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy3_ParamLimits

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy3

0xb48c,	// (0x0005ebba) common_borders_pane_cp5

0xbc55,	// (0x0005f383) separator_vertical_pane_g1

0xbc5e,	// (0x0005f38c) separator_vertical_pane_g2

0xbc67,	// (0x0005f395) separator_vertical_pane_g3

0x0002,

0xfc2a,	// (0x00063358) separator_vertical_pane_g

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy4_ParamLimits

0xbbad,	// (0x0005f2db) eswt_control_pane_g1_copy4

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy4_ParamLimits

0xbbba,	// (0x0005f2e8) eswt_control_pane_g2_copy4

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy4_ParamLimits

0xbbc7,	// (0x0005f2f5) eswt_control_pane_g3_copy4

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy4_ParamLimits

0xbbd4,	// (0x0005f302) eswt_control_pane_g4_copy4

0xbc70,	// (0x0005f39e) eswt_ctrl_combo_button_pane

0xbc78,	// (0x0005f3a6) eswt_ctrl_input_pane

0xbc80,	// (0x0005f3ae) popup_choice_list_window_cp70

0xbc88,	// (0x0005f3b6) eswt_ctrl_input_pane_t1

0xb48c,	// (0x0005ebba) input_focus_pane_cp70

0xaf10,	// (0x0005e63e) bg_button_pane_cp70_ParamLimits

0xaf10,	// (0x0005e63e) bg_button_pane_cp70

0xbc96,	// (0x0005f3c4) eswt_ctrl_combo_button_pane_g1

0xbc9e,	// (0x0005f3cc) wait_bar_pane_cp70

0x8783,	// (0x0005beb1) bg_popup_window_pane_cp70_ParamLimits

0x8783,	// (0x0005beb1) bg_popup_window_pane_cp70

0xbca6,	// (0x0005f3d4) popup_eswt_tasktip_window_t1

0xbcbc,	// (0x0005f3ea) wait_bar_pane_cp71_ParamLimits

0xbcbc,	// (0x0005f3ea) wait_bar_pane_cp71

0xbcc8,	// (0x0005f3f6) grid_eswt_app_pane

0xf3f3,	// (0x00062b21) scroll_pane_cp70

0xbcd1,	// (0x0005f3ff) cell_eswt_app_pane_ParamLimits

0xbcd1,	// (0x0005f3ff) cell_eswt_app_pane

0xbd03,	// (0x0005f431) cell_eswt_app_pane_g1_ParamLimits

0xbd03,	// (0x0005f431) cell_eswt_app_pane_g1

0xbd32,	// (0x0005f460) cell_eswt_app_pane_g2_ParamLimits

0xbd32,	// (0x0005f460) cell_eswt_app_pane_g2

0x0001,

0xfc31,	// (0x0006335f) cell_eswt_app_pane_g_ParamLimits

0xfc31,	// (0x0006335f) cell_eswt_app_pane_g

0xbd5b,	// (0x0005f489) cell_eswt_app_pane_t1_ParamLimits

0xbd5b,	// (0x0005f489) cell_eswt_app_pane_t1

0xbd8d,	// (0x0005f4bb) grid_highlight_pane_cp70_ParamLimits

0xbd8d,	// (0x0005f4bb) grid_highlight_pane_cp70

0x7cd4,	// (0x0005b402) set_content_pane_g1

0x80a7,	// (0x0005b7d5) status_small_volume_pane

0x71d2,	// (0x0005a900) status_small_volume_pane_g1

0x71da,	// (0x0005a908) volume_small2_pane

0x71e3,	// (0x0005a911) volume_small2_pane_g1

0x71ec,	// (0x0005a91a) volume_small2_pane_g2

0x71f5,	// (0x0005a923) volume_small2_pane_g3

0x71fe,	// (0x0005a92c) volume_small2_pane_g4

0x7207,	// (0x0005a935) volume_small2_pane_g5

0x7210,	// (0x0005a93e) volume_small2_pane_g6

0x7219,	// (0x0005a947) volume_small2_pane_g7

0x7222,	// (0x0005a950) volume_small2_pane_g8

0x722b,	// (0x0005a959) volume_small2_pane_g9

0x7234,	// (0x0005a962) volume_small2_pane_g10

0x0009,

0xfc36,	// (0x00063364) volume_small2_pane_g

0xb31a,	// (0x0005ea48) fep_vkb_top_text_pane_g1_ParamLimits

0xb335,	// (0x0005ea63) fep_vkb_top_text_pane_t1_ParamLimits

0xb89b,	// (0x0005efc9) popup_preview_fixed_window_g3_ParamLimits

0xb89b,	// (0x0005efc9) popup_preview_fixed_window_g3

0x67e1,	// (0x00059f0f) popup_toolbar_trans_pane

0x9c95,	// (0x0005d3c3) aid_height_set_list_ParamLimits

0x9ca6,	// (0x0005d3d4) aid_size_parent_ParamLimits

0x814f,	// (0x0005b87d) list_highlight_pane_cp2_ParamLimits

0x7cd4,	// (0x0005b402) set_content_pane_g1_ParamLimits

0x9ed9,	// (0x0005d607) list_single_image_pane_ParamLimits

0x9ed9,	// (0x0005d607) list_single_image_pane

0xbd99,	// (0x0005f4c7) aid_size_cell_image_ParamLimits

0xbd99,	// (0x0005f4c7) aid_size_cell_image

0xbda6,	// (0x0005f4d4) grid_single_image_pane_ParamLimits

0xbda6,	// (0x0005f4d4) grid_single_image_pane

0xf05c,	// (0x0006278a) list_single_image_pane_g1_ParamLimits

0xf05c,	// (0x0006278a) list_single_image_pane_g1

0xf068,	// (0x00062796) list_single_image_pane_g2_ParamLimits

0xf068,	// (0x00062796) list_single_image_pane_g2

0x0001,

0xfc4b,	// (0x00063379) list_single_image_pane_g_ParamLimits

0xfc4b,	// (0x00063379) list_single_image_pane_g

0xbdb4,	// (0x0005f4e2) list_single_image_pane_t1_ParamLimits

0xbdb4,	// (0x0005f4e2) list_single_image_pane_t1

0xbdca,	// (0x0005f4f8) cell_image_list_pane_ParamLimits

0xbdca,	// (0x0005f4f8) cell_image_list_pane

0xbde0,	// (0x0005f50e) cell_image_list_pane_g1

0xbde9,	// (0x0005f517) cell_image_list_pane_g2

0x0001,

0xfc50,	// (0x0006337e) cell_image_list_pane_g

0xbdf2,	// (0x0005f520) aid_size_cell_tb_trans_pane

0xf042,	// (0x00062770) bg_tb_trans_pane

0xbe04,	// (0x0005f532) grid_tb_trans_pane

0x8687,	// (0x0005bdb5) bg_tb_trans_pane_g1

0x8697,	// (0x0005bdc5) bg_tb_trans_pane_g2

0x868f,	// (0x0005bdbd) bg_tb_trans_pane_g3

0x86a7,	// (0x0005bdd5) bg_tb_trans_pane_g4

0x869f,	// (0x0005bdcd) bg_tb_trans_pane_g5

0x86c7,	// (0x0005bdf5) bg_tb_trans_pane_g6

0x86bf,	// (0x0005bded) bg_tb_trans_pane_g7

0x86af,	// (0x0005bddd) bg_tb_trans_pane_g8

0x86b7,	// (0x0005bde5) bg_tb_trans_pane_g9

0x0008,

0xfc55,	// (0x00063383) bg_tb_trans_pane_g

0xbe18,	// (0x0005f546) cell_toolbar_trans_pane_ParamLimits

0xbe18,	// (0x0005f546) cell_toolbar_trans_pane

0xaf4b,	// (0x0005e679) cell_toolbar_trans_pane_g1

0xab6f,	// (0x0005e29d) list_form2_midp_pane_t1

0xab7d,	// (0x0005e2ab) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x00063220) list_form2_midp_pane_t

0xab8b,	// (0x0005e2b9) scroll_pane_cp51_ParamLimits

0xad52,	// (0x0005e480) form2_midp_wait_pane_g1

0xad5b,	// (0x0005e489) form2_midp_wait_pane_g2

0xad64,	// (0x0005e492) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x00063235) form2_midp_wait_pane_g

0xb4ee,	// (0x0005ec1c) list_highlight_pane_cp21_ParamLimits

0xada8,	// (0x0005e4d6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xadb7,	// (0x0005e4e5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9e92,	// (0x0005d5c0) list_single_2graphic_im_pane_ParamLimits

0x9e92,	// (0x0005d5c0) list_single_2graphic_im_pane

0xbe3e,	// (0x0005f56c) list_single_2graphic_im_pane_g1_ParamLimits

0xbe3e,	// (0x0005f56c) list_single_2graphic_im_pane_g1

0xbe4f,	// (0x0005f57d) list_single_2graphic_im_pane_g2_ParamLimits

0xbe4f,	// (0x0005f57d) list_single_2graphic_im_pane_g2

0xbe5b,	// (0x0005f589) list_single_2graphic_im_pane_g3_ParamLimits

0xbe5b,	// (0x0005f589) list_single_2graphic_im_pane_g3

0x0003,

0xfc68,	// (0x00063396) list_single_2graphic_im_pane_g_ParamLimits

0xfc68,	// (0x00063396) list_single_2graphic_im_pane_g

0xbe7b,	// (0x0005f5a9) list_single_2graphic_im_pane_t1_ParamLimits

0xbe7b,	// (0x0005f5a9) list_single_2graphic_im_pane_t1

0xb8a7,	// (0x0005efd5) list_single_graphic_2heading_pane_fp_ParamLimits

0xb8a7,	// (0x0005efd5) list_single_graphic_2heading_pane_fp

0x3da1,	// (0x000574cf) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3da1,	// (0x000574cf) list_single_graphic_2heading_pane_fp_g1

0xb8c0,	// (0x0005efee) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb8c0,	// (0x0005efee) list_single_graphic_2heading_pane_fp_g2

0x408c,	// (0x000577ba) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x408c,	// (0x000577ba) list_single_graphic_2heading_pane_fp_g3

0x9757,	// (0x0005ce85) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9757,	// (0x0005ce85) list_single_graphic_2heading_pane_fp_g4

0xb8cc,	// (0x0005effa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb8cc,	// (0x0005effa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x000632bd) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x000632bd) list_single_graphic_2heading_pane_fp_g

0x3ec8,	// (0x000575f6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3ec8,	// (0x000575f6) list_single_graphic_2heading_pane_fp_t1

0x3dd9,	// (0x00057507) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3dd9,	// (0x00057507) list_single_graphic_2heading_pane_fp_t2

0x3ede,	// (0x0005760c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3ede,	// (0x0005760c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc71,	// (0x0006339f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc71,	// (0x0006339f) list_single_graphic_2heading_pane_fp_t

0xafdc,	// (0x0005e70a) fep_hwr_write_pane_g5_ParamLimits

0xafdc,	// (0x0005e70a) fep_hwr_write_pane_g5

0xafe8,	// (0x0005e716) fep_hwr_write_pane_g6_ParamLimits

0xafe8,	// (0x0005e716) fep_hwr_write_pane_g6

0xbb7c,	// (0x0005f2aa) eswt_shell_pane_ParamLimits

0x8783,	// (0x0005beb1) bg_popup_window_pane_cp18_ParamLimits

0x9bec,	// (0x0005d31a) heading_pane_cp70

0xbca6,	// (0x0005f3d4) popup_eswt_tasktip_window_t1_ParamLimits

0x81c8,	// (0x0005b8f6) aid_touch_tab_arrow_left

0x81d7,	// (0x0005b905) aid_touch_tab_arrow_right

0x4f17,	// (0x00058645) title_pane_g3_ParamLimits

0x4f17,	// (0x00058645) title_pane_g3

0xf001,	// (0x0006272f) set_value_pane_g1

0x67e1,	// (0x00059f0f) popup_toolbar_trans_pane_ParamLimits

0xbdf2,	// (0x0005f520) aid_size_cell_tb_trans_pane_ParamLimits

0xf042,	// (0x00062770) bg_tb_trans_pane_ParamLimits

0xbe04,	// (0x0005f532) grid_tb_trans_pane_ParamLimits

0xb62f,	// (0x0005ed5d) cont_note_pane_ParamLimits

0xb62f,	// (0x0005ed5d) cont_note_pane

0xedbd,	// (0x000624eb) cont_snote2_single_text_pane_ParamLimits

0xedbd,	// (0x000624eb) cont_snote2_single_text_pane

0xedbd,	// (0x000624eb) cont_snote2_single_graphic_pane_ParamLimits

0xedbd,	// (0x000624eb) cont_snote2_single_graphic_pane

0x8d5f,	// (0x0005c48d) cont_note_wait_pane_ParamLimits

0x8d5f,	// (0x0005c48d) cont_note_wait_pane

0x8d5f,	// (0x0005c48d) cont_note_image_pane_ParamLimits

0x8d5f,	// (0x0005c48d) cont_note_image_pane

0xbeac,	// (0x0005f5da) popup_note2_window_g1_ParamLimits

0xbeac,	// (0x0005f5da) popup_note2_window_g1

0xbedd,	// (0x0005f60b) popup_note2_window_t1_ParamLimits

0xbedd,	// (0x0005f60b) popup_note2_window_t1

0xbf22,	// (0x0005f650) popup_note2_window_t2_ParamLimits

0xbf22,	// (0x0005f650) popup_note2_window_t2

0xbf67,	// (0x0005f695) popup_note2_window_t3_ParamLimits

0xbf67,	// (0x0005f695) popup_note2_window_t3

0xbfac,	// (0x0005f6da) popup_note2_window_t4_ParamLimits

0xbfac,	// (0x0005f6da) popup_note2_window_t4

0xb6b3,	// (0x0005ede1) popup_note2_window_t5_ParamLimits

0xb6b3,	// (0x0005ede1) popup_note2_window_t5

0x0004,

0xfc7d,	// (0x000633ab) popup_note2_window_t_ParamLimits

0xfc7d,	// (0x000633ab) popup_note2_window_t

0xbfdb,	// (0x0005f709) popup_note2_image_window_g1_ParamLimits

0xbfdb,	// (0x0005f709) popup_note2_image_window_g1

0xbfe7,	// (0x0005f715) popup_note2_image_window_g2_ParamLimits

0xbfe7,	// (0x0005f715) popup_note2_image_window_g2

0x0001,

0xfc88,	// (0x000633b6) popup_note2_image_window_g_ParamLimits

0xfc88,	// (0x000633b6) popup_note2_image_window_g

0xbff9,	// (0x0005f727) popup_note2_image_window_t1_ParamLimits

0xbff9,	// (0x0005f727) popup_note2_image_window_t1

0xc011,	// (0x0005f73f) popup_note2_image_window_t2_ParamLimits

0xc011,	// (0x0005f73f) popup_note2_image_window_t2

0xc029,	// (0x0005f757) popup_note2_image_window_t3_ParamLimits

0xc029,	// (0x0005f757) popup_note2_image_window_t3

0x0002,

0xfc8d,	// (0x000633bb) popup_note2_image_window_t_ParamLimits

0xfc8d,	// (0x000633bb) popup_note2_image_window_t

0x8d6d,	// (0x0005c49b) popup_note2_wait_window_g1_ParamLimits

0x8d6d,	// (0x0005c49b) popup_note2_wait_window_g1

0xc045,	// (0x0005f773) popup_note2_wait_window_g2_ParamLimits

0xc045,	// (0x0005f773) popup_note2_wait_window_g2

0x8d85,	// (0x0005c4b3) popup_note2_wait_window_g3_ParamLimits

0x8d85,	// (0x0005c4b3) popup_note2_wait_window_g3

0x0002,

0xfc94,	// (0x000633c2) popup_note2_wait_window_g_ParamLimits

0xfc94,	// (0x000633c2) popup_note2_wait_window_g

0xc051,	// (0x0005f77f) popup_note2_wait_window_t1_ParamLimits

0xc051,	// (0x0005f77f) popup_note2_wait_window_t1

0xc06f,	// (0x0005f79d) popup_note2_wait_window_t2_ParamLimits

0xc06f,	// (0x0005f79d) popup_note2_wait_window_t2

0xc08d,	// (0x0005f7bb) popup_note2_wait_window_t3_ParamLimits

0xc08d,	// (0x0005f7bb) popup_note2_wait_window_t3

0xc09f,	// (0x0005f7cd) popup_note2_wait_window_t4_ParamLimits

0xc09f,	// (0x0005f7cd) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x000633c9) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x000633c9) popup_note2_wait_window_t

0xc0b1,	// (0x0005f7df) wait_bar2_pane_ParamLimits

0xc0b1,	// (0x0005f7df) wait_bar2_pane

0xc0c9,	// (0x0005f7f7) popup_snote2_single_text_window_g1_ParamLimits

0xc0c9,	// (0x0005f7f7) popup_snote2_single_text_window_g1

0xc0f1,	// (0x0005f81f) popup_snote2_single_text_window_t1_ParamLimits

0xc0f1,	// (0x0005f81f) popup_snote2_single_text_window_t1

0xc13d,	// (0x0005f86b) popup_snote2_single_text_window_t2_ParamLimits

0xc13d,	// (0x0005f86b) popup_snote2_single_text_window_t2

0xc189,	// (0x0005f8b7) popup_snote2_single_text_window_t3_ParamLimits

0xc189,	// (0x0005f8b7) popup_snote2_single_text_window_t3

0xc1ca,	// (0x0005f8f8) popup_snote2_single_text_window_t4_ParamLimits

0xc1ca,	// (0x0005f8f8) popup_snote2_single_text_window_t4

0xc200,	// (0x0005f92e) popup_snote2_single_text_window_t5_ParamLimits

0xc200,	// (0x0005f92e) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x000633d2) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x000633d2) popup_snote2_single_text_window_t

0xc22b,	// (0x0005f959) popup_snote2_single_graphic_window_g1_ParamLimits

0xc22b,	// (0x0005f959) popup_snote2_single_graphic_window_g1

0xc253,	// (0x0005f981) popup_snote2_single_graphic_window_g2_ParamLimits

0xc253,	// (0x0005f981) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x000633dd) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x000633dd) popup_snote2_single_graphic_window_g

0xc27b,	// (0x0005f9a9) popup_snote2_single_graphic_window_t1_ParamLimits

0xc27b,	// (0x0005f9a9) popup_snote2_single_graphic_window_t1

0xc2c7,	// (0x0005f9f5) popup_snote2_single_graphic_window_t2_ParamLimits

0xc2c7,	// (0x0005f9f5) popup_snote2_single_graphic_window_t2

0xc189,	// (0x0005f8b7) popup_snote2_single_graphic_window_t3_ParamLimits

0xc189,	// (0x0005f8b7) popup_snote2_single_graphic_window_t3

0xc1ca,	// (0x0005f8f8) popup_snote2_single_graphic_window_t4_ParamLimits

0xc1ca,	// (0x0005f8f8) popup_snote2_single_graphic_window_t4

0xc200,	// (0x0005f92e) popup_snote2_single_graphic_window_t5_ParamLimits

0xc200,	// (0x0005f92e) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x000633e2) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x000633e2) popup_snote2_single_graphic_window_t

0xaa35,	// (0x0005e163) clock_nsta_pane_cp2_t1

0xaa35,	// (0x0005e163) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x000631f6) clock_nsta_pane_cp2_t

0x334a,	// (0x00056a78) form_field_data_wide_pane_g1_ParamLimits

0xf05c,	// (0x0006278a) form_field_data_wide_pane_g2_ParamLimits

0xf05c,	// (0x0006278a) form_field_data_wide_pane_g2

0xf068,	// (0x00062796) form_field_data_wide_pane_g3_ParamLimits

0xf068,	// (0x00062796) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x00062db4) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x00062db4) form_field_data_wide_pane_g

0xa90e,	// (0x0005e03c) grid_touch_3_pane_ParamLimits

0xa90e,	// (0x0005e03c) grid_touch_3_pane

0xc313,	// (0x0005fa41) cell_touch_3_pane_ParamLimits

0xc313,	// (0x0005fa41) cell_touch_3_pane

0xaf4b,	// (0x0005e679) cell_touch_3_pane_g1

0xaf4b,	// (0x0005e679) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x0006327b) cell_touch_3_pane_g

0xb6e5,	// (0x0005ee13) cont_query_data_pane

0xb6ed,	// (0x0005ee1b) cont_query_data_pane_cp1

0xc346,	// (0x0005fa74) button_value_adjust_pane_cp7

0xc34e,	// (0x0005fa7c) query_popup_pane_cp3

0x3446,	// (0x00056b74) bg_popup_sub_pane_cp22_ParamLimits

0x5d71,	// (0x0005949f) navi_navi_volume_pane_cp2

0x5d8c,	// (0x000594ba) popup_side_volume_key_window_g2

0x5d9b,	// (0x000594c9) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x00062e4a) popup_side_volume_key_window_g

0x5db8,	// (0x000594e6) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x00062e51) popup_side_volume_key_window_t

0x3651,	// (0x00056d7f) popup_side_volume_key_window_ParamLimits

0x548e,	// (0x00058bbc) list_double_graphic_pane_g4_ParamLimits

0x548e,	// (0x00058bbc) list_double_graphic_pane_g4

0x9ec1,	// (0x0005d5ef) list_single_2heading_msg_pane_ParamLimits

0x9ec1,	// (0x0005d5ef) list_single_2heading_msg_pane

0x97ef,	// (0x0005cf1d) list_single_2heading_msg_pane_g1_ParamLimits

0x97ef,	// (0x0005cf1d) list_single_2heading_msg_pane_g1

0x1dd5,	// (0x00055503) list_single_2heading_msg_pane_g2_ParamLimits

0x1dd5,	// (0x00055503) list_single_2heading_msg_pane_g2

0x97fb,	// (0x0005cf29) list_single_2heading_msg_pane_g3_ParamLimits

0x97fb,	// (0x0005cf29) list_single_2heading_msg_pane_g3

0x9807,	// (0x0005cf35) list_single_2heading_msg_pane_g4_ParamLimits

0x9807,	// (0x0005cf35) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x000633ed) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x000633ed) list_single_2heading_msg_pane_g

0x723d,	// (0x0005a96b) list_single_2heading_msg_pane_t1_ParamLimits

0x723d,	// (0x0005a96b) list_single_2heading_msg_pane_t1

0x7265,	// (0x0005a993) list_single_2heading_msg_pane_t2_ParamLimits

0x7265,	// (0x0005a993) list_single_2heading_msg_pane_t2

0x7294,	// (0x0005a9c2) list_single_2heading_msg_pane_t3_ParamLimits

0x7294,	// (0x0005a9c2) list_single_2heading_msg_pane_t3

0x3efe,	// (0x0005762c) list_single_2heading_msg_pane_t4_ParamLimits

0x3efe,	// (0x0005762c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x000633f6) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x000633f6) list_single_2heading_msg_pane_t

0xb4aa,	// (0x0005ebd8) title_pane_g4_ParamLimits

0xb4aa,	// (0x0005ebd8) title_pane_g4

0x5a04,	// (0x00059132) title_pane_stacon_g3_ParamLimits

0x5a04,	// (0x00059132) title_pane_stacon_g3

0xbe6f,	// (0x0005f59d) list_single_2graphic_im_pane_g4_ParamLimits

0xbe6f,	// (0x0005f59d) list_single_2graphic_im_pane_g4

0x9989,	// (0x0005d0b7) popup_side_volume_key_window_cp

0xa1df,	// (0x0005d90d) main_idle_act2_pane_t1

0x68e5,	// (0x0005a013) toolbar_button_pane_g10

0x5278,	// (0x000589a6) popup_toolbar_window_cp1

0xaa26,	// (0x0005e154) clock_nsta_pane_cp_t1

0xaa26,	// (0x0005e154) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x000631f1) clock_nsta_pane_cp_t

0x5d71,	// (0x0005949f) navi_navi_volume_pane_cp2_ParamLimits

0x5d80,	// (0x000594ae) popup_side_volume_key_window_g1_ParamLimits

0x5d8c,	// (0x000594ba) popup_side_volume_key_window_g2_ParamLimits

0x5d9b,	// (0x000594c9) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x00062e4a) popup_side_volume_key_window_g_ParamLimits

0x6e01,	// (0x0005a52f) fep_hwr_aid_pane

0x6eaa,	// (0x0005a5d8) bg_fep_hwr_top_pane_g4_ParamLimits

0xafac,	// (0x0005e6da) fep_hwr_top_pane_g1_ParamLimits

0xafbe,	// (0x0005e6ec) fep_hwr_top_pane_g2_ParamLimits

0x6eca,	// (0x0005a5f8) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x00063246) fep_hwr_top_pane_g_ParamLimits

0x6edf,	// (0x0005a60d) fep_hwr_top_text_pane_ParamLimits

0x958a,	// (0x0005ccb8) aid_touch_tab_arrow_arrow_2

0x9593,	// (0x0005ccc1) aid_touch_tab_arrow_left_2

0x6e15,	// (0x0005a543) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6e4c,	// (0x0005a57a) fep_hwr_prediction_pane

0xb114,	// (0x0005e842) fep_vkb_prediction_pane

0xb21a,	// (0x0005e948) fep_vkb_side_pane_g3_ParamLimits

0xb21a,	// (0x0005e948) fep_vkb_side_pane_g3

0x706e,	// (0x0005a79c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70df,	// (0x0005a80d) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70ec,	// (0x0005a81a) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x000632f5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x72cd,	// (0x0005a9fb) fep_hwr_prediction_pane_g1

0x72d7,	// (0x0005aa05) fep_hwr_prediction_pane_g2

0x72df,	// (0x0005aa0d) fep_hwr_prediction_pane_g3

0x72e7,	// (0x0005aa15) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x000633ff) fep_hwr_prediction_pane_g

0xc375,	// (0x0005faa3) fep_vkb_prediction_pane_g1

0xc37f,	// (0x0005faad) fep_vkb_prediction_pane_g2

0xc387,	// (0x0005fab5) fep_vkb_prediction_pane_g3

0xc38f,	// (0x0005fabd) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x00063408) fep_vkb_prediction_pane_g

0x6c35,	// (0x0005a363) slider_set_pane_g3

0x6c49,	// (0x0005a377) slider_set_pane_g4

0x6c61,	// (0x0005a38f) slider_set_pane_g5

0x6c35,	// (0x0005a363) slider_set_pane_g6

0x6c77,	// (0x0005a3a5) slider_set_pane_g7

0x9e2b,	// (0x0005d559) slider_form_pane_g3

0x9e34,	// (0x0005d562) slider_form_pane_g4

0x9e3c,	// (0x0005d56a) slider_form_pane_g5

0x9e2b,	// (0x0005d559) slider_form_pane_g6

0x9e44,	// (0x0005d572) slider_form_pane_g7

0xa4a2,	// (0x0005dbd0) slider_set_pane_vc_g3

0xa4ab,	// (0x0005dbd9) slider_set_pane_vc_g4

0xa4b4,	// (0x0005dbe2) slider_set_pane_vc_g5

0xa4a2,	// (0x0005dbd0) slider_set_pane_vc_g6

0xa4bd,	// (0x0005dbeb) slider_set_pane_vc_g7

0xa6cf,	// (0x0005ddfd) slider_form_pane_vc_g1

0xa6d8,	// (0x0005de06) slider_form_pane_vc_g2

0xa6e1,	// (0x0005de0f) slider_form_pane_vc_g3

0xa6cf,	// (0x0005ddfd) slider_form_pane_vc_g4

0xa6ea,	// (0x0005de18) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x000631c3) slider_form_pane_vc_g

0x4c98,	// (0x000583c6) main_idle_act3_pane

0xc397,	// (0x0005fac5) ai3_links_pane

0xc3a0,	// (0x0005face) popup_ai3_data_window_ParamLimits

0xc3a0,	// (0x0005face) popup_ai3_data_window

0xb48c,	// (0x0005ebba) grid_ai3_links_pane

0xc3be,	// (0x0005faec) cell_ai3_links_pane_ParamLimits

0xc3be,	// (0x0005faec) cell_ai3_links_pane

0xc3d8,	// (0x0005fb06) bg_popup_sub_pane_cp11

0xc3e5,	// (0x0005fb13) cell_ai3_links_pane_g1

0xb48c,	// (0x0005ebba) bg_popup_sub_pane_cp12

0xc40a,	// (0x0005fb38) heading_ai3_data_pane

0xc412,	// (0x0005fb40) list_ai3_gene_pane

0xc41e,	// (0x0005fb4c) popup_ai3_data_window_g1

0xc426,	// (0x0005fb54) heading_ai3_data_pane_g1

0xc42e,	// (0x0005fb5c) heading_ai3_data_pane_t1

0xc43c,	// (0x0005fb6a) list_double_ai3_gene_pane_ParamLimits

0xc43c,	// (0x0005fb6a) list_double_ai3_gene_pane

0xc449,	// (0x0005fb77) list_single_ai3_gene_pane_ParamLimits

0xc449,	// (0x0005fb77) list_single_ai3_gene_pane

0xaf10,	// (0x0005e63e) list_highlight_pane_cp7_ParamLimits

0xaf10,	// (0x0005e63e) list_highlight_pane_cp7

0xc456,	// (0x0005fb84) list_single_a13_gene_pane_t1_ParamLimits

0xc456,	// (0x0005fb84) list_single_a13_gene_pane_t1

0xc46d,	// (0x0005fb9b) list_single_ai3_gene_pane_g1

0xc476,	// (0x0005fba4) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x00063411) list_single_ai3_gene_pane_g

0xc47e,	// (0x0005fbac) list_double_ai3_gene_pane_g1_ParamLimits

0xc47e,	// (0x0005fbac) list_double_ai3_gene_pane_g1

0xc48a,	// (0x0005fbb8) list_double_ai3_gene_pane_t1_ParamLimits

0xc48a,	// (0x0005fbb8) list_double_ai3_gene_pane_t1

0xc4a6,	// (0x0005fbd4) list_double_ai3_gene_pane_t2_ParamLimits

0xc4a6,	// (0x0005fbd4) list_double_ai3_gene_pane_t2

0xc4bb,	// (0x0005fbe9) list_double_ai3_gene_pane_t3_ParamLimits

0xc4bb,	// (0x0005fbe9) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x00063416) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x00063416) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3ef4,	// (0x00057622) aid_size_min_col_2

0xc35f,	// (0x0005fa8d) aid_size_min_msg_ParamLimits

0xc35f,	// (0x0005fa8d) aid_size_min_msg

0xb326,	// (0x0005ea54) fep_vkb_top_text_pane_g2_ParamLimits

0xb326,	// (0x0005ea54) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x00063276) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x00063276) fep_vkb_top_text_pane_g

0x4c98,	// (0x000583c6) main_hc_apps_shell_pane

0xc4d8,	// (0x0005fc06) grid_hc_apps_pane_ParamLimits

0xc4d8,	// (0x0005fc06) grid_hc_apps_pane

0xc4e7,	// (0x0005fc15) list_hc_apps_pane

0xc4ef,	// (0x0005fc1d) scroll_pane_cp37_ParamLimits

0xc4ef,	// (0x0005fc1d) scroll_pane_cp37

0xc4fb,	// (0x0005fc29) cell_hc_apps_pane_ParamLimits

0xc4fb,	// (0x0005fc29) cell_hc_apps_pane

0xc5b3,	// (0x0005fce1) cell_hc_apps_pane_g1_ParamLimits

0xc5b3,	// (0x0005fce1) cell_hc_apps_pane_g1

0xc5e4,	// (0x0005fd12) cell_hc_apps_pane_g2_ParamLimits

0xc5e4,	// (0x0005fd12) cell_hc_apps_pane_g2

0xc600,	// (0x0005fd2e) cell_hc_apps_pane_g3_ParamLimits

0xc600,	// (0x0005fd2e) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x0006341d) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x0006341d) cell_hc_apps_pane_g

0xc622,	// (0x0005fd50) cell_hc_apps_pane_t1_ParamLimits

0xc622,	// (0x0005fd50) cell_hc_apps_pane_t1

0xb62f,	// (0x0005ed5d) grid_highlight_pane_cp10_ParamLimits

0xb62f,	// (0x0005ed5d) grid_highlight_pane_cp10

0xc662,	// (0x0005fd90) list_single_hc_apps_pane_ParamLimits

0xc662,	// (0x0005fd90) list_single_hc_apps_pane

0xc6a1,	// (0x0005fdcf) list_single_hc_apps_pane_g1

0x981f,	// (0x0005cf4d) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x00063424) list_single_hc_apps_pane_g

0x9838,	// (0x0005cf66) list_single_hc_apps_pane_g2_copy1

0x72ef,	// (0x0005aa1d) list_single_hc_apps_pane_t1

0xb4ee,	// (0x0005ec1c) bg_set_opt_pane_cp_ParamLimits

0x4fc9,	// (0x000586f7) setting_slider_pane_t1_ParamLimits

0x4fe2,	// (0x00058710) setting_slider_pane_t2_ParamLimits

0x4ffc,	// (0x0005872a) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00062c92) setting_slider_pane_t_ParamLimits

0x5014,	// (0x00058742) slider_set_pane_ParamLimits

0x6184,	// (0x000598b2) control_pane_g5_ParamLimits

0x6184,	// (0x000598b2) control_pane_g5

0x9c58,	// (0x0005d386) slider_set_pane_g1_ParamLimits

0x6c29,	// (0x0005a357) slider_set_pane_g2_ParamLimits

0x6c35,	// (0x0005a363) slider_set_pane_g3_ParamLimits

0x6c49,	// (0x0005a377) slider_set_pane_g4_ParamLimits

0x6c61,	// (0x0005a38f) slider_set_pane_g5_ParamLimits

0x6c35,	// (0x0005a363) slider_set_pane_g6_ParamLimits

0x6c77,	// (0x0005a3a5) slider_set_pane_g7_ParamLimits

0xf96f,	// (0x0006309d) slider_set_pane_g_ParamLimits

0x7c7f,	// (0x0005b3ad) navi_icon_text_pane_ParamLimits

0x8187,	// (0x0005b8b5) aid_fill_nsta_2_ParamLimits

0x81c8,	// (0x0005b8f6) aid_touch_tab_arrow_left_ParamLimits

0x81d7,	// (0x0005b905) aid_touch_tab_arrow_right_ParamLimits

0x8244,	// (0x0005b972) clock_nsta_pane_ParamLimits

0x9566,	// (0x0005cc94) navi_icon_pane_g1_ParamLimits

0x9575,	// (0x0005cca3) navi_text_pane_t1_ParamLimits

0xab43,	// (0x0005e271) navi_icon_text_pane_g1_ParamLimits

0xab52,	// (0x0005e280) navi_icon_text_pane_t1_ParamLimits

0xc6a1,	// (0x0005fdcf) list_single_hc_apps_pane_g1_ParamLimits

0x981f,	// (0x0005cf4d) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x00063424) list_single_hc_apps_pane_g_ParamLimits

0x9838,	// (0x0005cf66) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x72ef,	// (0x0005aa1d) list_single_hc_apps_pane_t1_ParamLimits

0x4e0d,	// (0x0005853b) popup_toolbar2_fixed_window_ParamLimits

0x4e0d,	// (0x0005853b) popup_toolbar2_fixed_window

0x67d7,	// (0x00059f05) popup_toolbar2_float_window

0xb48c,	// (0x0005ebba) bg_popup_sub_pane_cp27

0xc6ba,	// (0x0005fde8) grid_toolbar2_float_pane

0xb48c,	// (0x0005ebba) bg_popup_sub_pane_cp26

0xc6ba,	// (0x0005fde8) grid_toolbar2_fixed_pane

0xc6c2,	// (0x0005fdf0) cell_toolbar2_fixed_pane_ParamLimits

0xc6c2,	// (0x0005fdf0) cell_toolbar2_fixed_pane

0xc6d2,	// (0x0005fe00) cell_toolbar2_fixed_pane_g1

0xc6db,	// (0x0005fe09) toolbar2_fixed_button_pane

0x8687,	// (0x0005bdb5) toolbar2_fixed_button_pane_g1

0x8697,	// (0x0005bdc5) toolbar2_fixed_button_pane_g2

0x868f,	// (0x0005bdbd) toolbar2_fixed_button_pane_g3

0x86a7,	// (0x0005bdd5) toolbar2_fixed_button_pane_g4

0x869f,	// (0x0005bdcd) toolbar2_fixed_button_pane_g5

0x86af,	// (0x0005bddd) toolbar2_fixed_button_pane_g6

0x86b7,	// (0x0005bde5) toolbar2_fixed_button_pane_g7

0x86c7,	// (0x0005bdf5) toolbar2_fixed_button_pane_g8

0x86bf,	// (0x0005bded) toolbar2_fixed_button_pane_g9

0x0008,

0xf871,	// (0x00062f9f) toolbar2_fixed_button_pane_g

0xc6e3,	// (0x0005fe11) cell_toolbar2_float_pane_ParamLimits

0xc6e3,	// (0x0005fe11) cell_toolbar2_float_pane

0xc6f4,	// (0x0005fe22) cell_toolbar2_float_pane_g1

0xc6db,	// (0x0005fe09) toolbar2_fixed_button_pane_cp

0xb082,	// (0x0005e7b0) fep_vkb_accented_list_pane_ParamLimits

0xb082,	// (0x0005e7b0) fep_vkb_accented_list_pane

0x704e,	// (0x0005a77c) bg_popup_fep_shadow_pane_g9

0x7e03,	// (0x0005b531) bg_popup_fep_shadow_pane_cp3

0xf19a,	// (0x000628c8) list_accented_list_pane

0xc6fd,	// (0x0005fe2b) list_single_accented_list_pane_ParamLimits

0xc6fd,	// (0x0005fe2b) list_single_accented_list_pane

0x7e03,	// (0x0005b531) list_highlight_pane_cp10

0xc70e,	// (0x0005fe3c) list_single_accented_list_pane_t1

0x671d,	// (0x00059e4b) popup_slider_window_ParamLimits

0x671d,	// (0x00059e4b) popup_slider_window

0xc356,	// (0x0005fa84) aid_indentation_list_msg

0xc7da,	// (0x0005ff08) bg_popup_window_pane_cp19

0xc848,	// (0x0005ff76) popup_slider_window_g1

0xc864,	// (0x0005ff92) popup_slider_window_g2

0xc880,	// (0x0005ffae) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x00063429) popup_slider_window_g

0xc8dc,	// (0x0006000a) popup_slider_window_t1

0xc950,	// (0x0006007e) small_volume_slider_vertical_pane

0xaf4b,	// (0x0005e679) small_volume_slider_vertical_pane_g1

0xaf4b,	// (0x0005e679) small_volume_slider_vertical_pane_g2

0xc96c,	// (0x0006009a) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x0006343b) small_volume_slider_vertical_pane_g

0x4bbb,	// (0x000582e9) area_side_right_pane_ParamLimits

0x4bbb,	// (0x000582e9) area_side_right_pane

0x731d,	// (0x0005aa4b) aid_size_side_button_ParamLimits

0x731d,	// (0x0005aa4b) aid_size_side_button

0x7331,	// (0x0005aa5f) grid_sctrl_middle_pane_ParamLimits

0x7331,	// (0x0005aa5f) grid_sctrl_middle_pane

0x7351,	// (0x0005aa7f) sctrl_sk_bottom_pane

0x7362,	// (0x0005aa90) sctrl_sk_top_pane

0x7374,	// (0x0005aaa2) aid_touch_sctrl_top

0x7381,	// (0x0005aaaf) bg_sctrl_sk_pane_ParamLimits

0x7381,	// (0x0005aaaf) bg_sctrl_sk_pane

0x738f,	// (0x0005aabd) sctrl_sk_top_pane_g1

0x739c,	// (0x0005aaca) sctrl_sk_top_pane_t1

0x7374,	// (0x0005aaa2) aid_touch_sctrl_bottom

0x7381,	// (0x0005aaaf) bg_sctrl_sk_pane_cp_ParamLimits

0x7381,	// (0x0005aaaf) bg_sctrl_sk_pane_cp

0x73b7,	// (0x0005aae5) sctrl_sk_bottom_pane_g1

0x739c,	// (0x0005aaca) sctrl_sk_bottom_pane_t1

0x73c0,	// (0x0005aaee) cell_sctrl_middle_pane_ParamLimits

0x73c0,	// (0x0005aaee) cell_sctrl_middle_pane

0x73dd,	// (0x0005ab0b) aid_touch_sctrl_middle_ParamLimits

0x73dd,	// (0x0005ab0b) aid_touch_sctrl_middle

0x73ef,	// (0x0005ab1d) bg_sctrl_middle_pane_ParamLimits

0x73ef,	// (0x0005ab1d) bg_sctrl_middle_pane

0x706e,	// (0x0005a79c) cell_sctrl_middle_pane_g1_ParamLimits

0x706e,	// (0x0005a79c) cell_sctrl_middle_pane_g1

0x73fd,	// (0x0005ab2b) cell_sctrl_middle_pane_g2_ParamLimits

0x73fd,	// (0x0005ab2b) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x00063447) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x00063447) cell_sctrl_middle_pane_g

0x8687,	// (0x0005bdb5) bg_sctrl_middle_pane_g1

0x868f,	// (0x0005bdbd) bg_sctrl_middle_pane_g2

0x8697,	// (0x0005bdc5) bg_sctrl_middle_pane_g3

0x869f,	// (0x0005bdcd) bg_sctrl_middle_pane_g4

0x86a7,	// (0x0005bdd5) bg_sctrl_middle_pane_g5

0x86af,	// (0x0005bddd) bg_sctrl_middle_pane_g6

0x86b7,	// (0x0005bde5) bg_sctrl_middle_pane_g7

0x86bf,	// (0x0005bded) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x0006344c) bg_sctrl_middle_pane_g

0x86c7,	// (0x0005bdf5) bg_sctrl_middle_pane_g8_copy1

0x8687,	// (0x0005bdb5) bg_sctrl_sk_pane_g1

0x8697,	// (0x0005bdc5) bg_sctrl_sk_pane_g2

0x868f,	// (0x0005bdbd) bg_sctrl_sk_pane_g3

0x0008,

0xf871,	// (0x00062f9f) bg_sctrl_sk_pane_g

0xef7b,	// (0x000626a9) aid_size_touch_scroll_bar

0x86a7,	// (0x0005bdd5) bg_sctrl_sk_pane_g4

0x869f,	// (0x0005bdcd) bg_sctrl_sk_pane_g5

0x86af,	// (0x0005bddd) bg_sctrl_sk_pane_g6

0x86b7,	// (0x0005bde5) bg_sctrl_sk_pane_g7

0x86c7,	// (0x0005bdf5) bg_sctrl_sk_pane_g8

0x86bf,	// (0x0005bded) bg_sctrl_sk_pane_g9

0x6334,	// (0x00059a62) popup_fep_china_hwr2_fs_candidate_window

0x633e,	// (0x00059a6c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x633e,	// (0x00059a6c) popup_fep_china_hwr2_fs_control_window

0x706e,	// (0x0005a79c) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x00063442) sctrl_sk_top_pane_g

0xc975,	// (0x000600a3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc975,	// (0x000600a3) aid_fep_china_hwr2_fs_cell

0xc988,	// (0x000600b6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc988,	// (0x000600b6) bg_popup_fep_shadow_pane_cp4

0xc9a1,	// (0x000600cf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc9a1,	// (0x000600cf) bg_popup_fep_shadow_pane_cp5

0xc9b3,	// (0x000600e1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc9b3,	// (0x000600e1) popup_fep_china_hwr2_fs_control_bar_grid

0xc9c3,	// (0x000600f1) popup_fep_china_hwr2_fs_control_funtion_grid

0xc9cb,	// (0x000600f9) aid_fep_china_hwr2_fs_candi_cell

0xb48c,	// (0x0005ebba) bg_popup_fep_shadow_pane_cp6

0xc9d5,	// (0x00060103) popup_fep_china_hwr2_fs_candidate_grid

0xc9df,	// (0x0006010d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc9df,	// (0x0006010d) cell_fep_china_hwr2_fs_funtion_grid

0xaf4b,	// (0x0005e679) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xc9f7,	// (0x00060125) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xc9f7,	// (0x00060125) cell_fep_china_hwr2_fs_funtion_grid_g1

0xca05,	// (0x00060133) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xca05,	// (0x00060133) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x0006345d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x0006345d) cell_fep_china_hwr2_fs_funtion_grid_g

0xca1b,	// (0x00060149) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xca1b,	// (0x00060149) cell_fep_china_hwr2_fs_funtion_grid_t1

0xca30,	// (0x0006015e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xca30,	// (0x0006015e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x00063462) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x00063462) cell_fep_china_hwr2_fs_funtion_grid_t

0xca4c,	// (0x0006017a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xca54,	// (0x00060182) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xca5c,	// (0x0006018a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x00063467) popup_fep_china_hwr2_fs_control_bar_grid_g

0xca64,	// (0x00060192) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xca64,	// (0x00060192) cell_fep_china_hwr2_fs_candidate_grid

0xca83,	// (0x000601b1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xca8b,	// (0x000601b9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xaf4b,	// (0x0005e679) cell_fep_china_hwr2_fs_candidate_grid_g1

0xaf4b,	// (0x0005e679) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x0006327b) cell_fep_china_hwr2_fs_candidate_grid_g

0xca93,	// (0x000601c1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8257,	// (0x0005b985) clock_nsta_pane_cp_24_ParamLimits

0x8257,	// (0x0005b985) clock_nsta_pane_cp_24

0x82d7,	// (0x0005ba05) indicator_nsta_pane_cp_24_ParamLimits

0x82d7,	// (0x0005ba05) indicator_nsta_pane_cp_24

0x93e2,	// (0x0005cb10) heading_pane_g1

0x0001,

0xf8d6,	// (0x00063004) heading_pane_g

0xa026,	// (0x0005d754) grid_sct_catagory_button_pane

0xa058,	// (0x0005d786) scroll_pane_cp5_ParamLimits

0xab97,	// (0x0005e2c5) button_value_adjust_pane_cp5_ParamLimits

0xab97,	// (0x0005e2c5) button_value_adjust_pane_cp5

0xac7c,	// (0x0005e3aa) form2_midp_time_pane_ParamLimits

0xcaa1,	// (0x000601cf) cell_sct_catagory_button_pane_ParamLimits

0xcaa1,	// (0x000601cf) cell_sct_catagory_button_pane

0xaf10,	// (0x0005e63e) bg_button_pane_cp01_ParamLimits

0xaf10,	// (0x0005e63e) bg_button_pane_cp01

0xaf4b,	// (0x0005e679) cell_sct_catagory_button_pane_g1

0x675e,	// (0x00059e8c) popup_tb_extension_window

0xcab3,	// (0x000601e1) aid_size_cell_ext_ParamLimits

0xcab3,	// (0x000601e1) aid_size_cell_ext

0xb62f,	// (0x0005ed5d) bg_tb_trans_pane_cp1_ParamLimits

0xb62f,	// (0x0005ed5d) bg_tb_trans_pane_cp1

0xcad3,	// (0x00060201) grid_tb_ext_pane_ParamLimits

0xcad3,	// (0x00060201) grid_tb_ext_pane

0xcb03,	// (0x00060231) cell_tb_ext_pane_ParamLimits

0xcb03,	// (0x00060231) cell_tb_ext_pane

0xcb1a,	// (0x00060248) cell_tb_ext_pane_g1_ParamLimits

0xcb1a,	// (0x00060248) cell_tb_ext_pane_g1

0xcb37,	// (0x00060265) cell_tb_ext_pane_t1

0xb62f,	// (0x0005ed5d) list_highlight_pane_cp11_ParamLimits

0xb62f,	// (0x0005ed5d) list_highlight_pane_cp11

0x4e2c,	// (0x0005855a) popup_uni_indicator_window_ParamLimits

0x4e2c,	// (0x0005855a) popup_uni_indicator_window

0xf042,	// (0x00062770) bg_popup_sub_pane_cp14

0xcb52,	// (0x00060280) list_uniindi_pane

0xcb5e,	// (0x0006028c) uniindi_top_pane

0xb62f,	// (0x0005ed5d) bg_uniindi_top_pane

0xcb7f,	// (0x000602ad) uniindi_top_pane_g1

0xcb95,	// (0x000602c3) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x0006346e) uniindi_top_pane_g

0xcbbf,	// (0x000602ed) uniindi_top_pane_t1

0xcbeb,	// (0x00060319) list_single_uniindi_pane_ParamLimits

0xcbeb,	// (0x00060319) list_single_uniindi_pane

0xaf4b,	// (0x0005e679) bg_uniindi_top_pane_g1

0xcbfd,	// (0x0006032b) list_single_uniindi_pane_g1

0xcc10,	// (0x0006033e) list_single_uniindi_pane_t1

0x4c98,	// (0x000583c6) control_bg_pane

0xcc35,	// (0x00060363) bg_sctrl_sk_pane_cp1

0xcc3e,	// (0x0006036c) bg_sctrl_sk_pane_cp2

0xcc47,	// (0x00060375) control_bg_pane_g1

0xcc50,	// (0x0006037e) control_bg_pane_g2

0x0001,

0xfd49,	// (0x00063477) control_bg_pane_g

0xa9b8,	// (0x0005e0e6) cell_indicator_nsta_pane_g1_ParamLimits

0xa9c6,	// (0x0005e0f4) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x000631df) cell_indicator_nsta_pane_g_ParamLimits

0x3d77,	// (0x000574a5) form2_midp_time_pane_t1_ParamLimits

0x6292,	// (0x000599c0) main_idle_act4_pane_ParamLimits

0x6292,	// (0x000599c0) main_idle_act4_pane

0x675e,	// (0x00059e8c) popup_tb_extension_window_ParamLimits

0xcaf5,	// (0x00060223) tb_ext_find_pane_ParamLimits

0xcaf5,	// (0x00060223) tb_ext_find_pane

0xcc59,	// (0x00060387) ai_gene_pane_1_cp1

0x7f40,	// (0x0005b66e) ai_gene_pane_2_cp1

0xcc61,	// (0x0006038f) list_single_idle_plugin_calendar_pane

0xcc6a,	// (0x00060398) list_single_idle_plugin_notification_pane

0xcc73,	// (0x000603a1) list_single_idle_plugin_player_pane

0xcc7c,	// (0x000603aa) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcc7c,	// (0x000603aa) list_single_idle_plugin_shortcut_pane

0xcc9e,	// (0x000603cc) main_idle_act4_pane_t1

0xccb0,	// (0x000603de) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x0006347c) main_idle_act4_pane_t

0xccc2,	// (0x000603f0) middle_sk_idle_act4_pane_ParamLimits

0xccc2,	// (0x000603f0) middle_sk_idle_act4_pane

0xccd8,	// (0x00060406) popup_clock_digital_analogue_window_cp2

0xccf2,	// (0x00060420) shortcut_wheel_idle_act4_pane_ParamLimits

0xccf2,	// (0x00060420) shortcut_wheel_idle_act4_pane

0xaf4b,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g1

0xaf4b,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g2

0xaf4b,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g3

0xaf4b,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g4

0xaf4b,	// (0x0005e679) shortcut_wheel_idle_act4_pane_g5

0xcd06,	// (0x00060434) shortcut_wheel_idle_act4_pane_g6

0xcd0e,	// (0x0006043c) shortcut_wheel_idle_act4_pane_g7

0xcd16,	// (0x00060444) shortcut_wheel_idle_act4_pane_g8

0xcd1e,	// (0x0006044c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x00063481) shortcut_wheel_idle_act4_pane_g

0xb1c6,	// (0x0005e8f4) middle_sk_idle_act4_pane_g1_ParamLimits

0xb1c6,	// (0x0005e8f4) middle_sk_idle_act4_pane_g1

0xcd82,	// (0x000604b0) middle_sk_idle_act4_pane_g2_ParamLimits

0xcd82,	// (0x000604b0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x000634a4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x000634a4) middle_sk_idle_act4_pane_g

0xcd8e,	// (0x000604bc) middle_sk_idle_act4_pane_t1_ParamLimits

0xcd8e,	// (0x000604bc) middle_sk_idle_act4_pane_t1

0xcdab,	// (0x000604d9) grid_ai_shortcut_pane_ParamLimits

0xcdab,	// (0x000604d9) grid_ai_shortcut_pane

0xcdc4,	// (0x000604f2) list_highlight_pane_cp16_ParamLimits

0xcdc4,	// (0x000604f2) list_highlight_pane_cp16

0xcdd1,	// (0x000604ff) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcdd1,	// (0x000604ff) list_single_idle_plugin_shortcut_pane_g1

0xcddd,	// (0x0006050b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcddd,	// (0x0006050b) list_single_idle_plugin_shortcut_pane_g2

0xcdf7,	// (0x00060525) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcdf7,	// (0x00060525) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x000634a9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x000634a9) list_single_idle_plugin_shortcut_pane_g

0xce0a,	// (0x00060538) cell_ai_shortcut_pane_ParamLimits

0xce0a,	// (0x00060538) cell_ai_shortcut_pane

0xce2d,	// (0x0006055b) cell_ai_shortcut_pane_g1_ParamLimits

0xce2d,	// (0x0006055b) cell_ai_shortcut_pane_g1

0xcc59,	// (0x00060387) ai_gene_pane_1_cp2

0xce4f,	// (0x0006057d) ai_gene_pane_2_cp2

0xce57,	// (0x00060585) list_highlight_pane_cp15

0xce60,	// (0x0006058e) list_single_idle_plugin_calendar_pane_g1

0xce57,	// (0x00060585) list_highlight_pane_cp17

0xce68,	// (0x00060596) list_single_idle_plugin_calendar_pane_g1_copy1

0xce70,	// (0x0006059e) list_single_idle_plugin_player_pane_g1

0xa28d,	// (0x0005d9bb) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x000634b0) list_single_idle_plugin_player_pane_g

0xce78,	// (0x000605a6) list_single_idle_plugin_player_pane_t1

0xce86,	// (0x000605b4) list_single_idle_plugin_player_pane_t2

0xce94,	// (0x000605c2) list_single_idle_plugin_player_pane_t3

0xcea2,	// (0x000605d0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x000634b5) list_single_idle_plugin_player_pane_t

0xceb0,	// (0x000605de) wait_bar_pane_cp15

0xceb8,	// (0x000605e6) grid_ai_notification_pane

0xa28d,	// (0x0005d9bb) list_single_idle_plugin_notification_pane_g1

0xcec1,	// (0x000605ef) cell_ai_notification_pane_ParamLimits

0xcec1,	// (0x000605ef) cell_ai_notification_pane

0xcece,	// (0x000605fc) cell_ai_notification_pane_g1

0xced6,	// (0x00060604) cell_ai_notification_pane_t1

0xcee4,	// (0x00060612) tb_ext_find_button_pane

0xceec,	// (0x0006061a) tb_ext_find_pane_g1

0xcef4,	// (0x00060622) tb_ext_find_pane_t1

0x33e6,	// (0x00056b14) tb_ext_find_button_pane_g1

0xcf02,	// (0x00060630) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x000634be) tb_ext_find_button_pane_g

0xcc9e,	// (0x000603cc) main_idle_act4_pane_t1_ParamLimits

0xccb0,	// (0x000603de) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x0006347c) main_idle_act4_pane_t_ParamLimits

0xccd8,	// (0x00060406) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcce6,	// (0x00060414) sat_plugin_idle_act4_pane_ParamLimits

0xcce6,	// (0x00060414) sat_plugin_idle_act4_pane

0xcf0b,	// (0x00060639) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcf0b,	// (0x00060639) sat_plugin_idle_act4_pane_t1

0xcf1e,	// (0x0006064c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcf1e,	// (0x0006064c) sat_plugin_idle_act4_pane_t2

0xcf31,	// (0x0006065f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcf31,	// (0x0006065f) sat_plugin_idle_act4_pane_t3

0xcf44,	// (0x00060672) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcf44,	// (0x00060672) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x000634c3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x000634c3) sat_plugin_idle_act4_pane_t

0x4d5d,	// (0x0005848b) popup_battery_window_ParamLimits

0x4d5d,	// (0x0005848b) popup_battery_window

0xb62f,	// (0x0005ed5d) bg_popup_sub_pane_cp25_ParamLimits

0xb62f,	// (0x0005ed5d) bg_popup_sub_pane_cp25

0xcf57,	// (0x00060685) popup_battery_window_g1_ParamLimits

0xcf57,	// (0x00060685) popup_battery_window_g1

0xcf63,	// (0x00060691) popup_battery_window_t1_ParamLimits

0xcf63,	// (0x00060691) popup_battery_window_t1

0xcf75,	// (0x000606a3) popup_battery_window_t2_ParamLimits

0xcf75,	// (0x000606a3) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x000634cc) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x000634cc) popup_battery_window_t

0x7e0b,	// (0x0005b539) midp_canvas_pane_ParamLimits

0x7e82,	// (0x0005b5b0) midp_keypad_pane_ParamLimits

0x7e82,	// (0x0005b5b0) midp_keypad_pane

0x814f,	// (0x0005b87d) main_midp_pane_ParamLimits

0xaa44,	// (0x0005e172) signal_pane_g2_cp_ParamLimits

0xcf92,	// (0x000606c0) aid_size_cell_midp_keypad_ParamLimits

0xcf92,	// (0x000606c0) aid_size_cell_midp_keypad

0xcfac,	// (0x000606da) midp_keyp_game_grid_pane_ParamLimits

0xcfac,	// (0x000606da) midp_keyp_game_grid_pane

0xcfcc,	// (0x000606fa) midp_keyp_rocker_pane_ParamLimits

0xcfcc,	// (0x000606fa) midp_keyp_rocker_pane

0xcff7,	// (0x00060725) midp_keyp_sk_left_pane_ParamLimits

0xcff7,	// (0x00060725) midp_keyp_sk_left_pane

0xd0b4,	// (0x000607e2) midp_keyp_sk_right_pane_ParamLimits

0xd0b4,	// (0x000607e2) midp_keyp_sk_right_pane

0xb48c,	// (0x0005ebba) bg_button_pane_cp03

0xd10e,	// (0x0006083c) midp_keyp_sk_left_pane_g1

0xb48c,	// (0x0005ebba) bg_button_pane_cp04

0xd10e,	// (0x0006083c) midp_keyp_sk_right_pane_g1

0xaf4b,	// (0x0005e679) midp_keyp_rocker_pane_g1

0xd117,	// (0x00060845) keyp_game_cell_pane_ParamLimits

0xd117,	// (0x00060845) keyp_game_cell_pane

0xb48c,	// (0x0005ebba) bg_button_pane_cp02

0xd12a,	// (0x00060858) keyp_game_cell_pane_g1

0x4da7,	// (0x000584d5) popup_fep_vkb2_window_ParamLimits

0x4da7,	// (0x000584d5) popup_fep_vkb2_window

0x741b,	// (0x0005ab49) aid_size_cell_vkb2_ParamLimits

0x741b,	// (0x0005ab49) aid_size_cell_vkb2

0x746f,	// (0x0005ab9d) popup_fep_vkb2_window_g1_ParamLimits

0x746f,	// (0x0005ab9d) popup_fep_vkb2_window_g1

0x74b7,	// (0x0005abe5) vkb2_area_bottom_pane_ParamLimits

0x74b7,	// (0x0005abe5) vkb2_area_bottom_pane

0x750b,	// (0x0005ac39) vkb2_area_keypad_pane_ParamLimits

0x750b,	// (0x0005ac39) vkb2_area_keypad_pane

0x7551,	// (0x0005ac7f) vkb2_area_top_pane_ParamLimits

0x7551,	// (0x0005ac7f) vkb2_area_top_pane

0x75cb,	// (0x0005acf9) vkb2_top_entry_pane_ParamLimits

0x75cb,	// (0x0005acf9) vkb2_top_entry_pane

0x75f5,	// (0x0005ad23) vkb2_top_grid_left_pane_ParamLimits

0x75f5,	// (0x0005ad23) vkb2_top_grid_left_pane

0x7613,	// (0x0005ad41) vkb2_top_grid_right_pane_ParamLimits

0x7613,	// (0x0005ad41) vkb2_top_grid_right_pane

0x7631,	// (0x0005ad5f) vkb2_cell_keypad_pane_ParamLimits

0x7631,	// (0x0005ad5f) vkb2_cell_keypad_pane

0x7702,	// (0x0005ae30) vkb2_area_bottom_grid_pane_ParamLimits

0x7702,	// (0x0005ae30) vkb2_area_bottom_grid_pane

0x7728,	// (0x0005ae56) vkb2_area_bottom_pane_g1_ParamLimits

0x7728,	// (0x0005ae56) vkb2_area_bottom_pane_g1

0x774c,	// (0x0005ae7a) vkb2_area_bottom_pane_g2_ParamLimits

0x774c,	// (0x0005ae7a) vkb2_area_bottom_pane_g2

0x777a,	// (0x0005aea8) vkb2_area_bottom_pane_g3_ParamLimits

0x777a,	// (0x0005aea8) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x000634d1) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x000634d1) vkb2_area_bottom_pane_g

0x77db,	// (0x0005af09) vkb2_top_cell_left_pane_ParamLimits

0x77db,	// (0x0005af09) vkb2_top_cell_left_pane

0xd13b,	// (0x00060869) vkb2_top_entry_pane_g1_ParamLimits

0xd13b,	// (0x00060869) vkb2_top_entry_pane_g1

0xd149,	// (0x00060877) vkb2_top_entry_pane_t1_ParamLimits

0xd149,	// (0x00060877) vkb2_top_entry_pane_t1

0xd17b,	// (0x000608a9) vkb2_top_entry_pane_t2_ParamLimits

0xd17b,	// (0x000608a9) vkb2_top_entry_pane_t2

0xd1ad,	// (0x000608db) vkb2_top_entry_pane_t3_ParamLimits

0xd1ad,	// (0x000608db) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x000634d8) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x000634d8) vkb2_top_entry_pane_t

0x7828,	// (0x0005af56) vkb2_top_grid_right_pane_g1_ParamLimits

0x7828,	// (0x0005af56) vkb2_top_grid_right_pane_g1

0x783e,	// (0x0005af6c) vkb2_top_grid_right_pane_g2_ParamLimits

0x783e,	// (0x0005af6c) vkb2_top_grid_right_pane_g2

0x7856,	// (0x0005af84) vkb2_top_grid_right_pane_g3_ParamLimits

0x7856,	// (0x0005af84) vkb2_top_grid_right_pane_g3

0x786e,	// (0x0005af9c) vkb2_top_grid_right_pane_g4_ParamLimits

0x786e,	// (0x0005af9c) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x000634df) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x000634df) vkb2_top_grid_right_pane_g

0x7884,	// (0x0005afb2) vkb2_top_cell_left_pane_g1

0x789b,	// (0x0005afc9) vkb2_cell_keypad_pane_g1_ParamLimits

0x789b,	// (0x0005afc9) vkb2_cell_keypad_pane_g1

0xd1d1,	// (0x000608ff) vkb2_cell_keypad_pane_t1_ParamLimits

0xd1d1,	// (0x000608ff) vkb2_cell_keypad_pane_t1

0x78a9,	// (0x0005afd7) vkb2_cell_bottom_grid_pane_ParamLimits

0x78a9,	// (0x0005afd7) vkb2_cell_bottom_grid_pane

0x78e2,	// (0x0005b010) vkb2_cell_bottom_grid_pane_g1

0xcd26,	// (0x00060454) aid_call2_pane_cp02

0xcd2e,	// (0x0006045c) aid_call_pane_cp02

0xcd36,	// (0x00060464) clock_digital_number_pane_cp10

0xcd3e,	// (0x0006046c) clock_digital_number_pane_cp11

0xcd46,	// (0x00060474) clock_digital_number_pane_cp12

0xcd4e,	// (0x0006047c) clock_digital_number_pane_cp13

0xcd56,	// (0x00060484) clock_digital_separator_pane_cp10

0x33e6,	// (0x00056b14) popup_clock_digital_analogue_window_cp2_g1

0x33e6,	// (0x00056b14) popup_clock_digital_analogue_window_cp2_g2

0xcd5e,	// (0x0006048c) popup_clock_digital_analogue_window_cp2_g3

0x33e6,	// (0x00056b14) popup_clock_digital_analogue_window_cp2_g4

0xcd5e,	// (0x0006048c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x00063494) popup_clock_digital_analogue_window_cp2_g

0xcd66,	// (0x00060494) popup_clock_digital_analogue_window_cp2_t1

0xcd74,	// (0x000604a2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x0006349f) popup_clock_digital_analogue_window_cp2_t

0xaf4b,	// (0x0005e679) clock_digital_number_pane_cp10_g1

0xaf4b,	// (0x0005e679) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0006327b) clock_digital_number_pane_cp10_g

0xaf4b,	// (0x0005e679) clock_digital_separator_pane_cp10_g1

0xaf4b,	// (0x0005e679) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0006327b) clock_digital_separator_pane_cp10_g

0xcba1,	// (0x000602cf) uniindi_top_pane_g3

0xcbb2,	// (0x000602e0) uniindi_top_pane_g4

0x76bc,	// (0x0005adea) vkb2_row_keypad_pane_ParamLimits

0x76bc,	// (0x0005adea) vkb2_row_keypad_pane

0x78fe,	// (0x0005b02c) vkb2_cell_t_keypad_pane_ParamLimits

0x78fe,	// (0x0005b02c) vkb2_cell_t_keypad_pane

0x790e,	// (0x0005b03c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x790e,	// (0x0005b03c) vkb2_cell_t_keypad_pane_cp08

0x7923,	// (0x0005b051) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7923,	// (0x0005b051) vkb2_cell_t_keypad_pane_cp09

0x7937,	// (0x0005b065) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7937,	// (0x0005b065) vkb2_cell_t_keypad_pane_cp01

0x7948,	// (0x0005b076) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7948,	// (0x0005b076) vkb2_cell_t_keypad_pane_cp02

0x7959,	// (0x0005b087) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7959,	// (0x0005b087) vkb2_cell_t_keypad_pane_cp03

0x796a,	// (0x0005b098) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x796a,	// (0x0005b098) vkb2_cell_t_keypad_pane_cp04

0x797b,	// (0x0005b0a9) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x797b,	// (0x0005b0a9) vkb2_cell_t_keypad_pane_cp05

0x798c,	// (0x0005b0ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x798c,	// (0x0005b0ba) vkb2_cell_t_keypad_pane_cp06

0x799f,	// (0x0005b0cd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x799f,	// (0x0005b0cd) vkb2_cell_t_keypad_pane_cp07

0x79b4,	// (0x0005b0e2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x79b4,	// (0x0005b0e2) vkb2_cell_t_keypad_pane_cp10

0x706e,	// (0x0005a79c) vkb2_cell_t_keypad_pane_g1

0xd1e8,	// (0x00060916) vkb2_cell_t_keypad_pane_t1

0x4c98,	// (0x000583c6) popup_grid_graphic2_window

0xd1fa,	// (0x00060928) aid_size_cell_graphic2_ParamLimits

0xd1fa,	// (0x00060928) aid_size_cell_graphic2

0xd232,	// (0x00060960) bg_popup_window_pane_cp21_ParamLimits

0xd232,	// (0x00060960) bg_popup_window_pane_cp21

0xd240,	// (0x0006096e) graphic2_pages_pane_ParamLimits

0xd240,	// (0x0006096e) graphic2_pages_pane

0xd286,	// (0x000609b4) grid_graphic2_control_pane_ParamLimits

0xd286,	// (0x000609b4) grid_graphic2_control_pane

0xd2c4,	// (0x000609f2) grid_graphic2_pane_ParamLimits

0xd2c4,	// (0x000609f2) grid_graphic2_pane

0xd33a,	// (0x00060a68) cell_graphic2_pane

0x4c98,	// (0x000583c6) main_comp_mode_pane

0xc412,	// (0x0005fb40) list_ai3_gene_pane_ParamLimits

0xc7da,	// (0x0005ff08) bg_popup_window_pane_cp19_ParamLimits

0xc7e6,	// (0x0005ff14) bg_touch_area_indi_pane_ParamLimits

0xc7e6,	// (0x0005ff14) bg_touch_area_indi_pane

0xc7fc,	// (0x0005ff2a) bg_touch_area_indi_pane_cp01_ParamLimits

0xc7fc,	// (0x0005ff2a) bg_touch_area_indi_pane_cp01

0xc814,	// (0x0005ff42) bg_touch_area_indi_pane_cp02_ParamLimits

0xc814,	// (0x0005ff42) bg_touch_area_indi_pane_cp02

0xc82e,	// (0x0005ff5c) bg_touch_area_indi_pane_cp03_ParamLimits

0xc82e,	// (0x0005ff5c) bg_touch_area_indi_pane_cp03

0xc848,	// (0x0005ff76) popup_slider_window_g1_ParamLimits

0xc864,	// (0x0005ff92) popup_slider_window_g2_ParamLimits

0xc880,	// (0x0005ffae) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x00063429) popup_slider_window_g_ParamLimits

0xc8dc,	// (0x0006000a) popup_slider_window_t1_ParamLimits

0xc950,	// (0x0006007e) small_volume_slider_vertical_pane_ParamLimits

0xd33a,	// (0x00060a68) cell_graphic2_pane_ParamLimits

0xd38c,	// (0x00060aba) bg_button_pane_cp10_ParamLimits

0xd38c,	// (0x00060aba) bg_button_pane_cp10

0xd3a1,	// (0x00060acf) bg_button_pane_cp11_ParamLimits

0xd3a1,	// (0x00060acf) bg_button_pane_cp11

0xd3b6,	// (0x00060ae4) graphic2_pages_pane_g1_ParamLimits

0xd3b6,	// (0x00060ae4) graphic2_pages_pane_g1

0xd3d1,	// (0x00060aff) graphic2_pages_pane_g2_ParamLimits

0xd3d1,	// (0x00060aff) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x000634ed) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x000634ed) graphic2_pages_pane_g

0xd3e9,	// (0x00060b17) graphic2_pages_pane_t1_ParamLimits

0xd3e9,	// (0x00060b17) graphic2_pages_pane_t1

0xd3ff,	// (0x00060b2d) cell_graphic2_control_pane_ParamLimits

0xd3ff,	// (0x00060b2d) cell_graphic2_control_pane

0xd422,	// (0x00060b50) cell_graphic2_pane_g1_ParamLimits

0xd422,	// (0x00060b50) cell_graphic2_pane_g1

0xd42f,	// (0x00060b5d) cell_graphic2_pane_g2_ParamLimits

0xd42f,	// (0x00060b5d) cell_graphic2_pane_g2

0xd43c,	// (0x00060b6a) cell_graphic2_pane_g3_ParamLimits

0xd43c,	// (0x00060b6a) cell_graphic2_pane_g3

0xd449,	// (0x00060b77) cell_graphic2_pane_g4_ParamLimits

0xd449,	// (0x00060b77) cell_graphic2_pane_g4

0xd456,	// (0x00060b84) cell_graphic2_pane_g5_ParamLimits

0xd456,	// (0x00060b84) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x000634f2) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x000634f2) cell_graphic2_pane_g

0xd471,	// (0x00060b9f) cell_graphic2_pane_t1_ParamLimits

0xd471,	// (0x00060b9f) cell_graphic2_pane_t1

0x8783,	// (0x0005beb1) grid_highlight_pane_cp11_ParamLimits

0x8783,	// (0x0005beb1) grid_highlight_pane_cp11

0xb62f,	// (0x0005ed5d) bg_button_pane_cp05

0xd49a,	// (0x00060bc8) cell_graphic2_control_pane_g1

0xaf4b,	// (0x0005e679) bg_touch_area_indi_pane_g1

0xd4c2,	// (0x00060bf0) aid_cmod_rocker_key_size

0xd4cc,	// (0x00060bfa) aid_cmode_itu_key_size

0xd4d6,	// (0x00060c04) main_cmode_video_pane

0xd4e0,	// (0x00060c0e) main_comp_mode_itu_pane

0xd4ec,	// (0x00060c1a) main_comp_mode_rocker_pane

0xd4f8,	// (0x00060c26) cell_cmode_rocker_pane_ParamLimits

0xd4f8,	// (0x00060c26) cell_cmode_rocker_pane

0xd50c,	// (0x00060c3a) cell_cmode_itu_pane_ParamLimits

0xd50c,	// (0x00060c3a) cell_cmode_itu_pane

0xf042,	// (0x00062770) bg_button_pane_cp06_ParamLimits

0xf042,	// (0x00062770) bg_button_pane_cp06

0xb1c6,	// (0x0005e8f4) cell_cmode_rocker_pane_g1_ParamLimits

0xb1c6,	// (0x0005e8f4) cell_cmode_rocker_pane_g1

0xc9f7,	// (0x00060125) cell_cmode_rocker_pane_g2_ParamLimits

0xc9f7,	// (0x00060125) cell_cmode_rocker_pane_g2

0x0001,

0xfdd4,	// (0x00063502) cell_cmode_rocker_pane_g_ParamLimits

0xfdd4,	// (0x00063502) cell_cmode_rocker_pane_g

0xb48c,	// (0x0005ebba) bg_button_pane_cp07

0xd523,	// (0x00060c51) cell_cmode_itu_pane_g1

0xd52c,	// (0x00060c5a) cell_cmode_itu_pane_t1

0xd53a,	// (0x00060c68) cell_cmode_itu_pane_t2

0x0001,

0xfdd9,	// (0x00063507) cell_cmode_itu_pane_t

0xcc25,	// (0x00060353) aid_touch_ctrl_left

0xcc2d,	// (0x0006035b) aid_touch_ctrl_right

0xb48c,	// (0x0005ebba) compa_mode_pane

0xd548,	// (0x00060c76) aid_cmod_rocker_key_size_cp

0xd552,	// (0x00060c80) aid_cmode_itu_key_size_cp

0xd55c,	// (0x00060c8a) compa_mode_pane_g1

0xd564,	// (0x00060c92) compa_mode_pane_g2

0xd56c,	// (0x00060c9a) compa_mode_pane_g3

0x0002,

0xfdde,	// (0x0006350c) compa_mode_pane_g

0xd574,	// (0x00060ca2) main_comp_mode_itu_pane_cp

0xd57c,	// (0x00060caa) main_comp_mode_rocker_pane_cp

0xd584,	// (0x00060cb2) cell_cmode_itu_pane_cp_ParamLimits

0xd584,	// (0x00060cb2) cell_cmode_itu_pane_cp

0xd599,	// (0x00060cc7) cell_cmode_rocker_pane_cp_ParamLimits

0xd599,	// (0x00060cc7) cell_cmode_rocker_pane_cp

0xf042,	// (0x00062770) bg_button_pane_cp06_cp_ParamLimits

0xf042,	// (0x00062770) bg_button_pane_cp06_cp

0xb1c6,	// (0x0005e8f4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb1c6,	// (0x0005e8f4) cell_cmode_rocker_pane_g1_cp

0xaf4b,	// (0x0005e679) cell_cmode_rocker_pane_g2_cp

0xb48c,	// (0x0005ebba) bg_button_pane_cp07_cp

0xd5ab,	// (0x00060cd9) cell_cmode_itu_pane_g1_cp

0xd5b4,	// (0x00060ce2) cell_cmode_itu_pane_t1_cp

0xd5b4,	// (0x00060ce2) cell_cmode_itu_pane_t2_cp

0x9e1a,	// (0x0005d548) settings_code_pane_cp2

0xb4ee,	// (0x0005ec1c) bg_popup_window_pane_cp3_ParamLimits

0xed4e,	// (0x0006247c) heading_pane_cp3_ParamLimits

0xed5a,	// (0x00062488) listscroll_popup_graphic_pane_ParamLimits

0x6e01,	// (0x0005a52f) fep_hwr_aid_pane_ParamLimits

0x7374,	// (0x0005aaa2) aid_touch_sctrl_top_ParamLimits

0x738f,	// (0x0005aabd) sctrl_sk_top_pane_g1_ParamLimits

0x706e,	// (0x0005a79c) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x00063442) sctrl_sk_top_pane_g_ParamLimits

0x739c,	// (0x0005aaca) sctrl_sk_top_pane_t1_ParamLimits

0x7374,	// (0x0005aaa2) aid_touch_sctrl_bottom_ParamLimits

0x739c,	// (0x0005aaca) sctrl_sk_bottom_pane_t1_ParamLimits

0xcb6b,	// (0x00060299) aid_area_touch_clock

0x7593,	// (0x0005acc1) aid_vkb2_area_top_pane_cell_ParamLimits

0x7593,	// (0x0005acc1) aid_vkb2_area_top_pane_cell

0x76de,	// (0x0005ae0c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x76de,	// (0x0005ae0c) aid_vkb2_area_bottom_pane_cell

0xd133,	// (0x00060861) popup_char_count_window

0xd5c2,	// (0x00060cf0) popup_char_count_window_g1

0xd5cb,	// (0x00060cf9) popup_char_count_window_g2

0xd5d4,	// (0x00060d02) popup_char_count_window_g3

0x0002,

0xfde5,	// (0x00063513) popup_char_count_window_g

0xd5dd,	// (0x00060d0b) popup_char_count_window_t1

0x744d,	// (0x0005ab7b) popup_fep_char_preview_window_ParamLimits

0x744d,	// (0x0005ab7b) popup_fep_char_preview_window

0x75b1,	// (0x0005acdf) vkb2_top_candi_pane_ParamLimits

0x75b1,	// (0x0005acdf) vkb2_top_candi_pane

0xd5eb,	// (0x00060d19) cell_vkb2_top_candi_pane_ParamLimits

0xd5eb,	// (0x00060d19) cell_vkb2_top_candi_pane

0x79c9,	// (0x0005b0f7) bg_popup_fep_char_preview_window_ParamLimits

0x79c9,	// (0x0005b0f7) bg_popup_fep_char_preview_window

0x79d7,	// (0x0005b105) popup_fep_char_preview_window_t1_ParamLimits

0x79d7,	// (0x0005b105) popup_fep_char_preview_window_t1

0xd63c,	// (0x00060d6a) bg_popup_fep_char_preview_window_g1

0xd644,	// (0x00060d72) bg_popup_fep_char_preview_window_g2

0xd64c,	// (0x00060d7a) bg_popup_fep_char_preview_window_g3

0xd654,	// (0x00060d82) bg_popup_fep_char_preview_window_g4

0xd65c,	// (0x00060d8a) bg_popup_fep_char_preview_window_g5

0x7a11,	// (0x0005b13f) bg_popup_fep_char_preview_window_g6

0xd664,	// (0x00060d92) bg_popup_fep_char_preview_window_g7

0xd66c,	// (0x00060d9a) bg_popup_fep_char_preview_window_g8

0xd674,	// (0x00060da2) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdec,	// (0x0006351a) bg_popup_fep_char_preview_window_g

0x706e,	// (0x0005a79c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x706e,	// (0x0005a79c) cell_vkb2_top_candi_pane_g1

0x707c,	// (0x0005a7aa) cell_vkb2_top_candi_pane_g2_ParamLimits

0x707c,	// (0x0005a7aa) cell_vkb2_top_candi_pane_g2

0xd093,	// (0x000607c1) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd093,	// (0x000607c1) cell_vkb2_top_candi_pane_g3

0x7a19,	// (0x0005b147) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7a19,	// (0x0005b147) cell_vkb2_top_candi_pane_g4

0xb9b3,	// (0x0005f0e1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb9b3,	// (0x0005f0e1) cell_vkb2_top_candi_pane_g5

0x7a3a,	// (0x0005b168) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7a3a,	// (0x0005b168) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdff,	// (0x0006352d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdff,	// (0x0006352d) cell_vkb2_top_candi_pane_g

0x7a48,	// (0x0005b176) cell_vkb2_top_candi_pane_t1

0x6c15,	// (0x0005a343) aid_size_touch_slider_mark_ParamLimits

0x6c15,	// (0x0005a343) aid_size_touch_slider_mark

0xd276,	// (0x000609a4) grid_graphic2_catg_pane_ParamLimits

0xd276,	// (0x000609a4) grid_graphic2_catg_pane

0xd314,	// (0x00060a42) popup_grid_graphic2_window_t1_ParamLimits

0xd314,	// (0x00060a42) popup_grid_graphic2_window_t1

0xd326,	// (0x00060a54) popup_grid_graphic2_window_t2_ParamLimits

0xd326,	// (0x00060a54) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x000634e8) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x000634e8) popup_grid_graphic2_window_t

0xb62f,	// (0x0005ed5d) bg_button_pane_cp05_ParamLimits

0xd49a,	// (0x00060bc8) cell_graphic2_control_pane_g1_ParamLimits

0xd67c,	// (0x00060daa) cell_graphic2_catg_pane_ParamLimits

0xd67c,	// (0x00060daa) cell_graphic2_catg_pane

0xb48c,	// (0x0005ebba) bg_button_pane_cp12

0xd68e,	// (0x00060dbc) cell_graphic2_catg_pane_g1

0xcb37,	// (0x00060265) cell_tb_ext_pane_t1_ParamLimits

0x77fb,	// (0x0005af29) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77fb,	// (0x0005af29) vkb2_top_cell_right_narrow_pane

0x7813,	// (0x0005af41) vkb2_top_cell_right_wide_pane_ParamLimits

0x7813,	// (0x0005af41) vkb2_top_cell_right_wide_pane

0x6df3,	// (0x0005a521) bg_vkb2_func_pane_ParamLimits

0x6df3,	// (0x0005a521) bg_vkb2_func_pane

0x7884,	// (0x0005afb2) vkb2_top_cell_left_pane_g1_ParamLimits

0x6df3,	// (0x0005a521) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6df3,	// (0x0005a521) bg_vkb2_fuc_pane_cp03

0x78e2,	// (0x0005b010) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x868f,	// (0x0005bdbd) bg_vkb2_func_pane_g1

0x8697,	// (0x0005bdc5) bg_vkb2_func_pane_g2

0x86a7,	// (0x0005bdd5) bg_vkb2_func_pane_g3

0x869f,	// (0x0005bdcd) bg_vkb2_func_pane_g4

0x86af,	// (0x0005bddd) bg_vkb2_func_pane_g5

0x86b7,	// (0x0005bde5) bg_vkb2_func_pane_g6

0x86bf,	// (0x0005bded) bg_vkb2_func_pane_g7

0x86c7,	// (0x0005bdf5) bg_vkb2_func_pane_g8

0x8687,	// (0x0005bdb5) bg_vkb2_func_pane_g9

0x0008,

0xfe0c,	// (0x0006353a) bg_vkb2_func_pane_g

0x6df3,	// (0x0005a521) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6df3,	// (0x0005a521) bg_vkb2_fuc_pane_cp01

0x7884,	// (0x0005afb2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7884,	// (0x0005afb2) vkb2_top_cell_right_wide_pane_g1

0x6df3,	// (0x0005a521) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6df3,	// (0x0005a521) bg_vkb2_fuc_pane_cp02

0x78e2,	// (0x0005b010) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78e2,	// (0x0005b010) vkb2_top_cell_right_narrow_pane_g1

0xc758,	// (0x0005fe86) aid_touch_area_decrease_ParamLimits

0xc758,	// (0x0005fe86) aid_touch_area_decrease

0xc77c,	// (0x0005feaa) aid_touch_area_increase_ParamLimits

0xc77c,	// (0x0005feaa) aid_touch_area_increase

0xc788,	// (0x0005feb6) aid_touch_area_mute_ParamLimits

0xc788,	// (0x0005feb6) aid_touch_area_mute

0xc7ac,	// (0x0005feda) aid_touch_area_slider_ParamLimits

0xc7ac,	// (0x0005feda) aid_touch_area_slider

0xc89c,	// (0x0005ffca) popup_slider_window_g4_ParamLimits

0xc89c,	// (0x0005ffca) popup_slider_window_g4

0xc8a8,	// (0x0005ffd6) popup_slider_window_g5_ParamLimits

0xc8a8,	// (0x0005ffd6) popup_slider_window_g5

0xc8ca,	// (0x0005fff8) popup_slider_window_g6_ParamLimits

0xc8ca,	// (0x0005fff8) popup_slider_window_g6

0xc90a,	// (0x00060038) popup_slider_window_t2_ParamLimits

0xc90a,	// (0x00060038) popup_slider_window_t2

0x0001,

0xfd08,	// (0x00063436) popup_slider_window_t_ParamLimits

0xfd08,	// (0x00063436) popup_slider_window_t

0xc922,	// (0x00060050) slider_pane_ParamLimits

0xc922,	// (0x00060050) slider_pane

0xd697,	// (0x00060dc5) slider_pane_g1_ParamLimits

0xd697,	// (0x00060dc5) slider_pane_g1

0xd6ab,	// (0x00060dd9) slider_pane_g2_ParamLimits

0xd6ab,	// (0x00060dd9) slider_pane_g2

0xd6c1,	// (0x00060def) slider_pane_g3_ParamLimits

0xd6c1,	// (0x00060def) slider_pane_g3

0x0003,

0xfe1f,	// (0x0006354d) slider_pane_g_ParamLimits

0xfe1f,	// (0x0006354d) slider_pane_g

0x67c0,	// (0x00059eee) popup_tb_float_extension_window_ParamLimits

0x67c0,	// (0x00059eee) popup_tb_float_extension_window

0xd6ed,	// (0x00060e1b) aid_size_cell_tb_float_ext

0xb48c,	// (0x0005ebba) bg_popup_sub_window_cp28

0xd6f9,	// (0x00060e27) grid_tb_float_ext_pane

0xd705,	// (0x00060e33) cell_tb_float_ext_pane_ParamLimits

0xd705,	// (0x00060e33) cell_tb_float_ext_pane

0xd721,	// (0x00060e4f) cell_tb_float_ext_pane_g1

0xd72a,	// (0x00060e58) grid_highlight_pane_cp12

0x6f48,	// (0x0005a676) cell_last_hwr_side_pane_ParamLimits

0x6f48,	// (0x0005a676) cell_last_hwr_side_pane

0xaf4b,	// (0x0005e679) cell_last_hwr_side_pane_g1

0xd733,	// (0x00060e61) cell_last_hwr_side_pane_g2

0x0001,

0xfe28,	// (0x00063556) cell_last_hwr_side_pane_g

0x77aa,	// (0x0005aed8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x77aa,	// (0x0005aed8) vkb2_area_bottom_space_btn_pane

0x706e,	// (0x0005a79c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd1e8,	// (0x00060916) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a48,	// (0x0005b176) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a66,	// (0x0005b194) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a66,	// (0x0005b194) vkb2_area_bottom_space_btn_pane_g1

0x7aa0,	// (0x0005b1ce) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7aa0,	// (0x0005b1ce) vkb2_area_bottom_space_btn_pane_g2

0x7ad6,	// (0x0005b204) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7ad6,	// (0x0005b204) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2d,	// (0x0006355b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2d,	// (0x0006355b) vkb2_area_bottom_space_btn_pane_g

0x6eb8,	// (0x0005a5e6) cel_fep_hwr_func_pane_ParamLimits

0x6eb8,	// (0x0005a5e6) cel_fep_hwr_func_pane

0x6ef4,	// (0x0005a622) cell_hwr_side_button_pane_ParamLimits

0x6ef4,	// (0x0005a622) cell_hwr_side_button_pane

0xcb6b,	// (0x00060299) aid_area_touch_clock_ParamLimits

0xb62f,	// (0x0005ed5d) bg_uniindi_top_pane_ParamLimits

0xcb7f,	// (0x000602ad) uniindi_top_pane_g1_ParamLimits

0xcb95,	// (0x000602c3) uniindi_top_pane_g2_ParamLimits

0xcba1,	// (0x000602cf) uniindi_top_pane_g3_ParamLimits

0xcbb2,	// (0x000602e0) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x0006346e) uniindi_top_pane_g_ParamLimits

0xcbbf,	// (0x000602ed) uniindi_top_pane_t1_ParamLimits

0xb62f,	// (0x0005ed5d) bg_vkb2_func_pane_cp01_ParamLimits

0xb62f,	// (0x0005ed5d) bg_vkb2_func_pane_cp01

0xd73c,	// (0x00060e6a) cel_fep_hwr_func_pane_g1_ParamLimits

0xd73c,	// (0x00060e6a) cel_fep_hwr_func_pane_g1

0xb62f,	// (0x0005ed5d) bg_vkb2_func_pane_cp02_ParamLimits

0xb62f,	// (0x0005ed5d) bg_vkb2_func_pane_cp02

0xd73c,	// (0x00060e6a) cell_hwr_side_button_pane_g1_ParamLimits

0xd73c,	// (0x00060e6a) cell_hwr_side_button_pane_g1

0x84fc,	// (0x0005bc2a) status_pane_g4_ParamLimits

0x84fc,	// (0x0005bc2a) status_pane_g4

0x8516,	// (0x0005bc44) status_pane_t1

0xacea,	// (0x0005e418) form2_midp_gauge_slider_cont_pane

0xacf2,	// (0x0005e420) form2_midp_gauge_slider_pane_t1_ParamLimits

0xad04,	// (0x0005e432) form2_midp_gauge_slider_pane_t2_ParamLimits

0xad16,	// (0x0005e444) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x0006322e) form2_midp_gauge_slider_pane_t_ParamLimits

0xad28,	// (0x0005e456) form2_midp_slider_pane_ParamLimits

0x740d,	// (0x0005ab3b) aid_size_cell_func_vkb2_ParamLimits

0x740d,	// (0x0005ab3b) aid_size_cell_func_vkb2

0xd6d9,	// (0x00060e07) slider_pane_g4_ParamLimits

0xd6d9,	// (0x00060e07) slider_pane_g4

0x7b20,	// (0x0005b24e) form2_midp_gauge_slider_pane_t2_cp01

0x7b2e,	// (0x0005b25c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7b2e,	// (0x0005b25c) form2_midp_gauge_slider_pane_t3_cp01

0x7b4b,	// (0x0005b279) form2_midp_slider_pane_cp01

0xb48c,	// (0x0005ebba) navi_smil_pane

0xd775,	// (0x00060ea3) navi_smil_pane_g1

0xd77d,	// (0x00060eab) navi_smil_pane_t1

0xd74a,	// (0x00060e78) form2_midp_slider_pane_g1

0xd753,	// (0x00060e81) form2_midp_slider_pane_g2

0xd75b,	// (0x00060e89) form2_midp_slider_pane_g3

0xd74a,	// (0x00060e78) form2_midp_slider_pane_g4

0xd763,	// (0x00060e91) form2_midp_slider_pane_g5

0x0004,

0xfe36,	// (0x00063564) form2_midp_slider_pane_g

0x7b10,	// (0x0005b23e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7b10,	// (0x0005b23e) vkb2_area_bottom_space_btn_pane_g4

0x8313,	// (0x0005ba41) lc0_navi_pane_ParamLimits

0x8313,	// (0x0005ba41) lc0_navi_pane

0x838f,	// (0x0005babd) lc0_stat_indi_pane_ParamLimits

0x838f,	// (0x0005babd) lc0_stat_indi_pane

0x83a6,	// (0x0005bad4) ls0_title_pane_ParamLimits

0x83a6,	// (0x0005bad4) ls0_title_pane

0xf042,	// (0x00062770) bg_popup_sub_pane_cp14_ParamLimits

0xcb52,	// (0x00060280) list_uniindi_pane_ParamLimits

0xcb5e,	// (0x0006028c) uniindi_top_pane_ParamLimits

0xcbfd,	// (0x0006032b) list_single_uniindi_pane_g1_ParamLimits

0xcc10,	// (0x0006033e) list_single_uniindi_pane_t1_ParamLimits

0x7b54,	// (0x0005b282) lc0_stat_clock_pane_ParamLimits

0x7b54,	// (0x0005b282) lc0_stat_clock_pane

0xd78b,	// (0x00060eb9) lc0_stat_indi_pane_g1_ParamLimits

0xd78b,	// (0x00060eb9) lc0_stat_indi_pane_g1

0xd798,	// (0x00060ec6) lc0_stat_indi_pane_g2_ParamLimits

0xd798,	// (0x00060ec6) lc0_stat_indi_pane_g2

0x0001,

0xfe41,	// (0x0006356f) lc0_stat_indi_pane_g_ParamLimits

0xfe41,	// (0x0006356f) lc0_stat_indi_pane_g

0x7b61,	// (0x0005b28f) lc0_uni_indicator_pane_ParamLimits

0x7b61,	// (0x0005b28f) lc0_uni_indicator_pane

0xd7a5,	// (0x00060ed3) ls0_title_pane_g1_ParamLimits

0xd7a5,	// (0x00060ed3) ls0_title_pane_g1

0xd7b9,	// (0x00060ee7) ls0_title_pane_t1_ParamLimits

0xd7b9,	// (0x00060ee7) ls0_title_pane_t1

0x7b6e,	// (0x0005b29c) lc0_uni_indicator_pane_g1_ParamLimits

0x7b6e,	// (0x0005b29c) lc0_uni_indicator_pane_g1

0xd7ef,	// (0x00060f1d) lc0_stat_clock_pane_t1

0x4c98,	// (0x000583c6) main_ai5_pane

0xd7fd,	// (0x00060f2b) ai5_sk_pane_ParamLimits

0xd7fd,	// (0x00060f2b) ai5_sk_pane

0xd80a,	// (0x00060f38) cell_ai5_widget_pane_ParamLimits

0xd80a,	// (0x00060f38) cell_ai5_widget_pane

0xdda6,	// (0x000614d4) aid_size_cell_widget_grid

0xddbc,	// (0x000614ea) bg_ai5_widget_pane_ParamLimits

0xddbc,	// (0x000614ea) bg_ai5_widget_pane

0xde26,	// (0x00061554) cell_ai5_widget_pane_g2

0xde36,	// (0x00061564) cell_ai5_widget_pane_g3

0xde55,	// (0x00061583) cell_ai5_widget_pane_g4

0xde61,	// (0x0006158f) cell_ai5_widget_pane_g5

0xde6d,	// (0x0006159b) cell_ai5_widget_pane_g6

0xde79,	// (0x000615a7) cell_ai5_widget_pane_g7

0xdec1,	// (0x000615ef) cell_ai5_widget_pane_t1_ParamLimits

0xdec1,	// (0x000615ef) cell_ai5_widget_pane_t1

0xdede,	// (0x0006160c) cell_ai5_widget_pane_t2_ParamLimits

0xdede,	// (0x0006160c) cell_ai5_widget_pane_t2

0xdef6,	// (0x00061624) cell_ai5_widget_pane_t3_ParamLimits

0xdef6,	// (0x00061624) cell_ai5_widget_pane_t3

0xdf0e,	// (0x0006163c) cell_ai5_widget_pane_t4_ParamLimits

0xdf0e,	// (0x0006163c) cell_ai5_widget_pane_t4

0xdf28,	// (0x00061656) cell_ai5_widget_pane_t5_ParamLimits

0xdf28,	// (0x00061656) cell_ai5_widget_pane_t5

0xdf47,	// (0x00061675) cell_ai5_widget_pane_t6_ParamLimits

0xdf47,	// (0x00061675) cell_ai5_widget_pane_t6

0xdf59,	// (0x00061687) cell_ai5_widget_pane_t7_ParamLimits

0xdf59,	// (0x00061687) cell_ai5_widget_pane_t7

0xdf72,	// (0x000616a0) cell_ai5_widget_pane_t8_ParamLimits

0xdf72,	// (0x000616a0) cell_ai5_widget_pane_t8

0x0009,

0xfe5b,	// (0x00063589) cell_ai5_widget_pane_t_ParamLimits

0xfe5b,	// (0x00063589) cell_ai5_widget_pane_t

0xdfbe,	// (0x000616ec) grid_ai5_widget_pane

0xf042,	// (0x00062770) highlight_cell_ai5_widget_pane_ParamLimits

0xf042,	// (0x00062770) highlight_cell_ai5_widget_pane

0xdfd6,	// (0x00061704) ai5_sk_left_pane

0xdfe0,	// (0x0006170e) ai5_sk_middle_pane

0xdfea,	// (0x00061718) ai5_sk_right_pane

0xdff4,	// (0x00061722) bg_ai5_widget_pane_g1_ParamLimits

0xdff4,	// (0x00061722) bg_ai5_widget_pane_g1

0xe000,	// (0x0006172e) bg_ai5_widget_pane_g2_ParamLimits

0xe000,	// (0x0006172e) bg_ai5_widget_pane_g2

0xe00c,	// (0x0006173a) bg_ai5_widget_pane_g3_ParamLimits

0xe00c,	// (0x0006173a) bg_ai5_widget_pane_g3

0xe018,	// (0x00061746) bg_ai5_widget_pane_g4_ParamLimits

0xe018,	// (0x00061746) bg_ai5_widget_pane_g4

0xe024,	// (0x00061752) bg_ai5_widget_pane_g5_ParamLimits

0xe024,	// (0x00061752) bg_ai5_widget_pane_g5

0xe030,	// (0x0006175e) bg_ai5_widget_pane_g6_ParamLimits

0xe030,	// (0x0006175e) bg_ai5_widget_pane_g6

0xe03c,	// (0x0006176a) bg_ai5_widget_pane_g7_ParamLimits

0xe03c,	// (0x0006176a) bg_ai5_widget_pane_g7

0xe048,	// (0x00061776) bg_ai5_widget_pane_g8_ParamLimits

0xe048,	// (0x00061776) bg_ai5_widget_pane_g8

0xe054,	// (0x00061782) bg_ai5_widget_pane_g9_ParamLimits

0xe054,	// (0x00061782) bg_ai5_widget_pane_g9

0x0008,

0xfe70,	// (0x0006359e) bg_ai5_widget_pane_g_ParamLimits

0xfe70,	// (0x0006359e) bg_ai5_widget_pane_g

0xe07c,	// (0x000617aa) cell_shortcut_ai5_widget_pane_ParamLimits

0xe07c,	// (0x000617aa) cell_shortcut_ai5_widget_pane

0xb52a,	// (0x0005ec58) bg_cell_shortcut_ai5_widget_pane

0xe08f,	// (0x000617bd) cell_grid_ai5_widget_pane_g1

0xe098,	// (0x000617c6) highlight_cell_shortcut_ai5_widget_pane

0x868f,	// (0x0005bdbd) ai5_sk_left_pane_g1

0xe0a0,	// (0x000617ce) ai5_sk_left_pane_g2

0xe0a8,	// (0x000617d6) ai5_sk_left_pane_g3

0xe0b0,	// (0x000617de) ai5_sk_left_pane_g4

0x0003,

0xfe83,	// (0x000635b1) ai5_sk_left_pane_g

0xe0b8,	// (0x000617e6) ai5_sk_left_pane_t1

0x8697,	// (0x0005bdc5) ai5_sk_right_pane_g1

0xe0c6,	// (0x000617f4) ai5_sk_right_pane_g2

0xe0ce,	// (0x000617fc) ai5_sk_right_pane_g3

0xe0d6,	// (0x00061804) ai5_sk_right_pane_g4

0x0003,

0xfe8c,	// (0x000635ba) ai5_sk_right_pane_g

0xe0de,	// (0x0006180c) ai5_sk_right_pane_t1

0x8697,	// (0x0005bdc5) ai5_sk_middle_pane_g1

0x868f,	// (0x0005bdbd) ai5_sk_middle_pane_g2

0x86af,	// (0x0005bddd) ai5_sk_middle_pane_g3

0xe0ce,	// (0x000617fc) ai5_sk_middle_pane_g4

0xe0a8,	// (0x000617d6) ai5_sk_middle_pane_g5

0xe0ec,	// (0x0006181a) ai5_sk_middle_pane_g6

0xe0f4,	// (0x00061822) ai5_sk_middle_pane_g7

0x0006,

0xfe95,	// (0x000635c3) ai5_sk_middle_pane_g

0x8195,	// (0x0005b8c3) aid_touch_area_size_lc0_ParamLimits

0x8195,	// (0x0005b8c3) aid_touch_area_size_lc0

0x709d,	// (0x0005a7cb) cell_hwr_candidate_pane_t1_ParamLimits

0x81b3,	// (0x0005b8e1) aid_touch_navi_pane

0x84a6,	// (0x0005bbd4) status_dt_navi_pane_ParamLimits

0x84a6,	// (0x0005bbd4) status_dt_navi_pane

0x84b3,	// (0x0005bbe1) status_dt_sta_pane_ParamLimits

0x84b3,	// (0x0005bbe1) status_dt_sta_pane

0xe0fc,	// (0x0006182a) dt_sta_controll_pane

0xe109,	// (0x00061837) dt_sta_indi_pane

0xe11a,	// (0x00061848) dt_sta_title_pane

0xb62f,	// (0x0005ed5d) bg_dt_sta_indi_pane_ParamLimits

0xb62f,	// (0x0005ed5d) bg_dt_sta_indi_pane

0xe12d,	// (0x0006185b) dt_sta_battery_pane

0xe135,	// (0x00061863) dt_sta_indi_pane_g1

0xe13e,	// (0x0006186c) dt_sta_indi_pane_g2

0xe147,	// (0x00061875) dt_sta_indi_pane_g3

0x0002,

0xfea4,	// (0x000635d2) dt_sta_indi_pane_g

0xe150,	// (0x0006187e) dt_sta_signal_pane

0xf042,	// (0x00062770) bg_dt_sta_title_pane_ParamLimits

0xf042,	// (0x00062770) bg_dt_sta_title_pane

0xe159,	// (0x00061887) dt_sta_title_pane_g1

0xe161,	// (0x0006188f) dt_sta_title_pane_t1_ParamLimits

0xe161,	// (0x0006188f) dt_sta_title_pane_t1

0xb48c,	// (0x0005ebba) bg_dt_sta_control_pane

0xe176,	// (0x000618a4) dt_sta_controll_pane_g1

0xe17f,	// (0x000618ad) bg_dt_sta_title_pane_g1

0xe188,	// (0x000618b6) bg_dt_sta_title_pane_g2

0xe191,	// (0x000618bf) bg_dt_sta_title_pane_g3

0x0002,

0xfeab,	// (0x000635d9) bg_dt_sta_title_pane_g

0xaf4b,	// (0x0005e679) bg_dt_sta_indi_pane_g1

0xe19a,	// (0x000618c8) dt_sta_signal_pane_g1

0xe1a2,	// (0x000618d0) dt_sta_signal_pane_g2

0x0001,

0xfeb2,	// (0x000635e0) dt_sta_signal_pane_g

0xe1aa,	// (0x000618d8) dt_sta_battery_pane_g1

0xe1b3,	// (0x000618e1) dt_sta_battery_pane_t1

0xaf4b,	// (0x0005e679) bg_dt_sta_control_pane_g1

0x3468,	// (0x00056b96) fep_china_uni_eep_pane

0x3470,	// (0x00056b9e) fep_china_uni_entry_pane_ParamLimits

0x3480,	// (0x00056bae) popup_fep_china_uni_window_g1_ParamLimits

0x3490,	// (0x00056bbe) popup_fep_china_uni_window_g2_ParamLimits

0x3490,	// (0x00056bbe) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x00062e56) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x00062e56) popup_fep_china_uni_window_g

0xe1c2,	// (0x000618f0) fep_china_uni_eep_pane_g1

0xe1ca,	// (0x000618f8) fep_china_uni_eep_pane_t1

0xd76c,	// (0x00060e9a) aid_touch_area_size_smil_player

0x830b,	// (0x0005ba39) lc0_clock_pane

0x850a,	// (0x0005bc38) status_pane_g5_ParamLimits

0x850a,	// (0x0005bc38) status_pane_g5

0x6445,	// (0x00059b73) popup_keymap_window

0x84c8,	// (0x0005bbf6) status_icon_pane

0xde36,	// (0x00061564) cell_ai5_widget_pane_g3_ParamLimits

0xde55,	// (0x00061583) cell_ai5_widget_pane_g4_ParamLimits

0xde61,	// (0x0006158f) cell_ai5_widget_pane_g5_ParamLimits

0xde85,	// (0x000615b3) cell_ai5_widget_pane_g8_ParamLimits

0xde85,	// (0x000615b3) cell_ai5_widget_pane_g8

0xde99,	// (0x000615c7) cell_ai5_widget_pane_g9_ParamLimits

0xde99,	// (0x000615c7) cell_ai5_widget_pane_g9

0xdead,	// (0x000615db) cell_ai5_widget_pane_g10_ParamLimits

0xdead,	// (0x000615db) cell_ai5_widget_pane_g10

0xe1d9,	// (0x00061907) status_icon_pane_g1

0xb48c,	// (0x0005ebba) bg_popup_sub_pane_cp13

0xe1e1,	// (0x0006190f) popup_keymap_window_t1

0x80d2,	// (0x0005b800) control_pane_g6_ParamLimits

0x80d2,	// (0x0005b800) control_pane_g6

0x80df,	// (0x0005b80d) control_pane_g7_ParamLimits

0x80df,	// (0x0005b80d) control_pane_g7

0x80ec,	// (0x0005b81a) control_pane_g8_ParamLimits

0x80ec,	// (0x0005b81a) control_pane_g8

0xe0fc,	// (0x0006182a) dt_sta_controll_pane_ParamLimits

0xe109,	// (0x00061837) dt_sta_indi_pane_ParamLimits

0xe11a,	// (0x00061848) dt_sta_title_pane_ParamLimits

0xef84,	// (0x000626b2) aid_size_touch_scroll_bar_cale

0x4d75,	// (0x000584a3) popup_discreet_window_ParamLimits

0x4d75,	// (0x000584a3) popup_discreet_window

0x4e03,	// (0x00058531) popup_sk_window

0x8d5f,	// (0x0005c48d) bg_popup_sub_pane_cp28_ParamLimits

0x8d5f,	// (0x0005c48d) bg_popup_sub_pane_cp28

0xe1ef,	// (0x0006191d) popup_discreet_window_g1_ParamLimits

0xe1ef,	// (0x0006191d) popup_discreet_window_g1

0xe20f,	// (0x0006193d) popup_discreet_window_t1_ParamLimits

0xe20f,	// (0x0006193d) popup_discreet_window_t1

0xe22d,	// (0x0006195b) popup_discreet_window_t2_ParamLimits

0xe22d,	// (0x0006195b) popup_discreet_window_t2

0x0002,

0xfeb7,	// (0x000635e5) popup_discreet_window_t_ParamLimits

0xfeb7,	// (0x000635e5) popup_discreet_window_t

0x7b81,	// (0x0005b2af) popup_sk_window_g1

0x7b8b,	// (0x0005b2b9) popup_sk_window_g2

0x0001,

0xfebe,	// (0x000635ec) popup_sk_window_g

0x7b95,	// (0x0005b2c3) popup_sk_window_t1

0x7ba5,	// (0x0005b2d3) popup_sk_window_t1_copy1

0xde26,	// (0x00061554) cell_ai5_widget_pane_g2_ParamLimits

0xdf84,	// (0x000616b2) cell_ai5_widget_pane_t9_ParamLimits

0xdf84,	// (0x000616b2) cell_ai5_widget_pane_t9

0xb48c,	// (0x0005ebba) main_fep_fshwr2_pane

0x7bb3,	// (0x0005b2e1) aid_fshwr2_btn_pane

0x7bbf,	// (0x0005b2ed) aid_fshwr2_syb_pane

0x7bd0,	// (0x0005b2fe) aid_fshwr2_txt_pane

0x7bdc,	// (0x0005b30a) fshwr2_func_candi_pane

0x7bed,	// (0x0005b31b) fshwr2_hwr_syb_pane

0x7c00,	// (0x0005b32e) fshwr2_icf_pane

0xb48c,	// (0x0005ebba) fshwr2_icf_bg_pane

0xe27f,	// (0x000619ad) fshwr2_icf_pane_t1_ParamLimits

0xe27f,	// (0x000619ad) fshwr2_icf_pane_t1

0xaf4b,	// (0x0005e679) fshwr2_func_candi_pane_g1

0xe296,	// (0x000619c4) fshwr2_func_candi_row_pane_ParamLimits

0xe296,	// (0x000619c4) fshwr2_func_candi_row_pane

0xe2a7,	// (0x000619d5) cell_fshwr2_syb_pane_ParamLimits

0xe2a7,	// (0x000619d5) cell_fshwr2_syb_pane

0xb1c6,	// (0x0005e8f4) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb1c6,	// (0x0005e8f4) fshwr2_hwr_syb_pane_g1

0xb48c,	// (0x0005ebba) bg_popup_call_pane_cp01

0xe2c1,	// (0x000619ef) fshwr2_func_candi_cell_pane_ParamLimits

0xe2c1,	// (0x000619ef) fshwr2_func_candi_cell_pane

0xe2f3,	// (0x00061a21) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe2f3,	// (0x00061a21) fshwr2_func_candi_cell_bg_pane

0xe30d,	// (0x00061a3b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe30d,	// (0x00061a3b) fshwr2_func_candi_cell_pane_g1

0xe32d,	// (0x00061a5b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe32d,	// (0x00061a5b) fshwr2_func_candi_cell_pane_t1

0xb48c,	// (0x0005ebba) bg_button_pane_cp08

0x7e03,	// (0x0005b531) cell_fshwr2_syb_bg_pane

0xe340,	// (0x00061a6e) cell_fshwr2_syb_bg_pane_g1

0xe348,	// (0x00061a76) cell_fshwr2_syb_bg_pane_t1

0xf042,	// (0x00062770) main_tmo_pane

0x9a3d,	// (0x0005d16b) uni_indicator_pane_g1_ParamLimits

0x9a52,	// (0x0005d180) uni_indicator_pane_g2_ParamLimits

0x9a68,	// (0x0005d196) uni_indicator_pane_g3_ParamLimits

0x9a7e,	// (0x0005d1ac) uni_indicator_pane_g4_ParamLimits

0x9a7e,	// (0x0005d1ac) uni_indicator_pane_g4

0x9a92,	// (0x0005d1c0) uni_indicator_pane_g5_ParamLimits

0x9a92,	// (0x0005d1c0) uni_indicator_pane_g5

0x9aa6,	// (0x0005d1d4) uni_indicator_pane_g6_ParamLimits

0x9aa6,	// (0x0005d1d4) uni_indicator_pane_g6

0xf92c,	// (0x0006305a) uni_indicator_pane_g_ParamLimits

0xc728,	// (0x0005fe56) popup_tmo_note_window_ParamLimits

0xc728,	// (0x0005fe56) popup_tmo_note_window

0x73ef,	// (0x0005ab1d) fshwr2_bg_pane

0xe31e,	// (0x00061a4c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe31e,	// (0x00061a4c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec3,	// (0x000635f1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec3,	// (0x000635f1) fshwr2_func_candi_cell_pane_g

0xaf4b,	// (0x0005e679) bg_popup_window_pane_cp01

0xe357,	// (0x00061a85) bg_popup_window_pane_g1_cp01

0xe360,	// (0x00061a8e) bg_popup_window_pane_cp22_ParamLimits

0xe360,	// (0x00061a8e) bg_popup_window_pane_cp22

0xe36e,	// (0x00061a9c) listscroll_tmo_link_pane_ParamLimits

0xe36e,	// (0x00061a9c) listscroll_tmo_link_pane

0xe3ae,	// (0x00061adc) popup_tmo_note_window_g1_ParamLimits

0xe3ae,	// (0x00061adc) popup_tmo_note_window_g1

0xe3bb,	// (0x00061ae9) tmo_note_info_pane_ParamLimits

0xe3bb,	// (0x00061ae9) tmo_note_info_pane

0xe3d5,	// (0x00061b03) list_tmo_note_info_pane_g1_ParamLimits

0xe3d5,	// (0x00061b03) list_tmo_note_info_pane_g1

0xe3ec,	// (0x00061b1a) list_tmo_note_info_pane_g2_ParamLimits

0xe3ec,	// (0x00061b1a) list_tmo_note_info_pane_g2

0x0001,

0xfec8,	// (0x000635f6) list_tmo_note_info_pane_g_ParamLimits

0xfec8,	// (0x000635f6) list_tmo_note_info_pane_g

0xe408,	// (0x00061b36) list_tmo_note_info_text_pane_ParamLimits

0xe408,	// (0x00061b36) list_tmo_note_info_text_pane

0xe48d,	// (0x00061bbb) list_tmo_link_pane

0xe49a,	// (0x00061bc8) scroll_pane_cp20

0xe4a7,	// (0x00061bd5) list_single_tmo_link_pane_ParamLimits

0xe4a7,	// (0x00061bd5) list_single_tmo_link_pane

0xe4b7,	// (0x00061be5) list_single_tmo_link_pane_t1

0xe4c5,	// (0x00061bf3) list_tmo_note_info_text_pane_t1_ParamLimits

0xe4c5,	// (0x00061bf3) list_tmo_note_info_text_pane_t1

0x591f,	// (0x0005904d) aid_size_touch_scroll_bar_cp01_ParamLimits

0x591f,	// (0x0005904d) aid_size_touch_scroll_bar_cp01

0x585c,	// (0x00058f8a) aid_size_touch_slider_marker

0x4deb,	// (0x00058519) popup_settings_window_ParamLimits

0x4deb,	// (0x00058519) popup_settings_window

0x36cb,	// (0x00056df9) popup_candi_list_indi_window

0x81b3,	// (0x0005b8e1) aid_touch_navi_pane_ParamLimits

0x7348,	// (0x0005aa76) rs_clock_indi_pane

0x7351,	// (0x0005aa7f) sctrl_sk_bottom_pane_ParamLimits

0x7362,	// (0x0005aa90) sctrl_sk_top_pane_ParamLimits

0x7467,	// (0x0005ab95) popup_fep_tooltip_window

0xdda6,	// (0x000614d4) aid_size_cell_widget_grid_ParamLimits

0xde1a,	// (0x00061548) cell_ai5_widget_pane_g1_ParamLimits

0xde1a,	// (0x00061548) cell_ai5_widget_pane_g1

0xde6d,	// (0x0006159b) cell_ai5_widget_pane_g6_ParamLimits

0xde79,	// (0x000615a7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe46,	// (0x00063574) cell_ai5_widget_pane_g_ParamLimits

0xfe46,	// (0x00063574) cell_ai5_widget_pane_g

0xdfa8,	// (0x000616d6) cell_ai5_widget_pane_t10_ParamLimits

0xdfa8,	// (0x000616d6) cell_ai5_widget_pane_t10

0xdfbe,	// (0x000616ec) grid_ai5_widget_pane_ParamLimits

0xe060,	// (0x0006178e) cell_contacts_ai5_widget_pane_ParamLimits

0xe060,	// (0x0006178e) cell_contacts_ai5_widget_pane

0xe242,	// (0x00061970) popup_discreet_window_t3_ParamLimits

0xe242,	// (0x00061970) popup_discreet_window_t3

0x7c15,	// (0x0005b343) popup_fshwr2_char_preview_window_ParamLimits

0x7c15,	// (0x0005b343) popup_fshwr2_char_preview_window

0xe426,	// (0x00061b54) tmo_note_info_pane_t1

0xe43b,	// (0x00061b69) tmo_note_info_pane_t2

0xe454,	// (0x00061b82) tmo_note_info_pane_t3

0xe469,	// (0x00061b97) tmo_note_info_pane_t4

0xe47b,	// (0x00061ba9) tmo_note_info_pane_t5

0x0004,

0xfecd,	// (0x000635fb) tmo_note_info_pane_t

0xe48d,	// (0x00061bbb) list_tmo_link_pane_ParamLimits

0xe49a,	// (0x00061bc8) scroll_pane_cp20_ParamLimits

0xb48c,	// (0x0005ebba) bg_popup_fep_char_preview_window_cp01

0xe4de,	// (0x00061c0c) popup_fshwr2_char_preview_window_t1

0xe4ec,	// (0x00061c1a) popup_candi_list_indi_window_g1

0xe4f5,	// (0x00061c23) bg_cell_contacts_ai5_widget_pane

0xe501,	// (0x00061c2f) cell_contacts_ai5_widget_pane_g1

0xe511,	// (0x00061c3f) cell_contacts_ai5_widget_pane_g2

0xe51d,	// (0x00061c4b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed8,	// (0x00063606) cell_contacts_ai5_widget_pane_g

0xe529,	// (0x00061c57) cell_contacts_ai5_widget_pane_t1

0xf042,	// (0x00062770) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe5a3,	// (0x00061cd1) settings_container_pane

0x7e03,	// (0x0005b531) listscroll_set_pane_copy1

0xa622,	// (0x0005dd50) scroll_pane_cp121_copy1

0xe5af,	// (0x00061cdd) set_content_pane_copy1

0xe5b7,	// (0x00061ce5) aid_height_set_list_copy1_ParamLimits

0xe5b7,	// (0x00061ce5) aid_height_set_list_copy1

0x9ca6,	// (0x0005d3d4) aid_size_parent_copy1_ParamLimits

0x9ca6,	// (0x0005d3d4) aid_size_parent_copy1

0xe5c3,	// (0x00061cf1) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe5c3,	// (0x00061cf1) button_value_adjust_pane_cp6_copy1

0x814f,	// (0x0005b87d) list_highlight_pane_cp2_copy1_ParamLimits

0x814f,	// (0x0005b87d) list_highlight_pane_cp2_copy1

0xe5d7,	// (0x00061d05) list_set_pane_copy1_ParamLimits

0xe5d7,	// (0x00061d05) list_set_pane_copy1

0xe53e,	// (0x00061c6c) main_pane_set_t1_copy1_ParamLimits

0xe53e,	// (0x00061c6c) main_pane_set_t1_copy1

0xe578,	// (0x00061ca6) main_pane_set_t2_copy1_ParamLimits

0xe578,	// (0x00061ca6) main_pane_set_t2_copy1

0xe69e,	// (0x00061dcc) main_pane_set_t3_copy1

0xe6ac,	// (0x00061dda) main_pane_set_t4_copy1

0xe597,	// (0x00061cc5) set_content_pane_g1_copy1_ParamLimits

0xe597,	// (0x00061cc5) set_content_pane_g1_copy1

0xe6ba,	// (0x00061de8) setting_code_pane_copy1

0xe6c2,	// (0x00061df0) setting_slider_graphic_pane_copy1

0xe6c2,	// (0x00061df0) setting_slider_pane_copy1

0xe6c2,	// (0x00061df0) setting_text_pane_copy1

0xe6c2,	// (0x00061df0) setting_volume_pane_copy1

0xe6ba,	// (0x00061de8) settings_code_pane_cp2_copy1

0xe6ca,	// (0x00061df8) settings_code_pane_cp_copy1_ParamLimits

0xe6ca,	// (0x00061df8) settings_code_pane_cp_copy1

0xe6de,	// (0x00061e0c) volume_set_pane_copy1

0xe6ea,	// (0x00061e18) volume_set_pane_g10_copy1

0xe6f6,	// (0x00061e24) volume_set_pane_g1_copy1

0xe700,	// (0x00061e2e) volume_set_pane_g2_copy1

0xe70a,	// (0x00061e38) volume_set_pane_g3_copy1

0xe714,	// (0x00061e42) volume_set_pane_g4_copy1

0xe71e,	// (0x00061e4c) volume_set_pane_g5_copy1

0xe728,	// (0x00061e56) volume_set_pane_g6_copy1

0xe732,	// (0x00061e60) volume_set_pane_g7_copy1

0xe73c,	// (0x00061e6a) volume_set_pane_g8_copy1

0xe746,	// (0x00061e74) volume_set_pane_g9_copy1

0xb4ee,	// (0x0005ec1c) bg_set_opt_pane_cp_copy1_ParamLimits

0xb4ee,	// (0x0005ec1c) bg_set_opt_pane_cp_copy1

0xe750,	// (0x00061e7e) setting_slider_pane_t1_copy1_ParamLimits

0xe750,	// (0x00061e7e) setting_slider_pane_t1_copy1

0xe76e,	// (0x00061e9c) setting_slider_pane_t2_copy1_ParamLimits

0xe76e,	// (0x00061e9c) setting_slider_pane_t2_copy1

0xe788,	// (0x00061eb6) setting_slider_pane_t3_copy1_ParamLimits

0xe788,	// (0x00061eb6) setting_slider_pane_t3_copy1

0xe7a0,	// (0x00061ece) slider_set_pane_copy1_ParamLimits

0xe7a0,	// (0x00061ece) slider_set_pane_copy1

0xf0a9,	// (0x000627d7) set_opt_bg_pane_g1_copy2

0xf0b1,	// (0x000627df) set_opt_bg_pane_g2_copy2

0xe7b6,	// (0x00061ee4) set_opt_bg_pane_g3_copy2

0xf0c1,	// (0x000627ef) set_opt_bg_pane_g4_copy2

0xf0c9,	// (0x000627f7) set_opt_bg_pane_g5_copy2

0xf0d1,	// (0x000627ff) set_opt_bg_pane_g6_copy2

0xe7c0,	// (0x00061eee) set_opt_bg_pane_g7_copy2

0xe7ca,	// (0x00061ef8) set_opt_bg_pane_g8_copy2

0xe7d4,	// (0x00061f02) set_opt_bg_pane_g9_copy2

0xe7de,	// (0x00061f0c) aid_size_touch_slider_mark_copy1_ParamLimits

0xe7de,	// (0x00061f0c) aid_size_touch_slider_mark_copy1

0xe7f2,	// (0x00061f20) slider_set_pane_g1_copy1

0xe7fb,	// (0x00061f29) slider_set_pane_g2_copy1

0xd051,	// (0x0006077f) slider_set_pane_g3_copy1_ParamLimits

0xd051,	// (0x0006077f) slider_set_pane_g3_copy1

0xd065,	// (0x00060793) slider_set_pane_g4_copy1_ParamLimits

0xd065,	// (0x00060793) slider_set_pane_g4_copy1

0xd07d,	// (0x000607ab) slider_set_pane_g5_copy1_ParamLimits

0xd07d,	// (0x000607ab) slider_set_pane_g5_copy1

0xd051,	// (0x0006077f) slider_set_pane_g6_copy1_ParamLimits

0xd051,	// (0x0006077f) slider_set_pane_g6_copy1

0xe803,	// (0x00061f31) slider_set_pane_g7_copy1_ParamLimits

0xe803,	// (0x00061f31) slider_set_pane_g7_copy1

0xb4a0,	// (0x0005ebce) bg_set_opt_pane_cp2_copy1

0xe819,	// (0x00061f47) setting_slider_graphic_pane_g1_copy1

0xe822,	// (0x00061f50) setting_slider_graphic_pane_t1_copy1

0xe832,	// (0x00061f60) setting_slider_graphic_pane_t2_copy1

0xe842,	// (0x00061f70) slider_set_pane_cp_copy1

0xe852,	// (0x00061f80) input_focus_pane_cp1_copy1

0xe85b,	// (0x00061f89) list_set_text_pane_copy1

0xe863,	// (0x00061f91) setting_text_pane_g1_copy1

0x32cc,	// (0x000569fa) set_text_pane_t1_copy1

0xe852,	// (0x00061f80) input_focus_pane_cp2_copy1

0xe863,	// (0x00061f91) setting_code_pane_g1_copy1

0xe86c,	// (0x00061f9a) setting_code_pane_t1_copy1

0xe87a,	// (0x00061fa8) list_set_graphic_pane_copy1

0xb4a0,	// (0x0005ebce) bg_set_opt_pane_cp4_copy1

0x6001,	// (0x0005972f) list_set_graphic_pane_g1_copy1_ParamLimits

0x6001,	// (0x0005972f) list_set_graphic_pane_g1_copy1

0xe88c,	// (0x00061fba) list_set_graphic_pane_g2_copy1

0x6019,	// (0x00059747) list_set_graphic_pane_t1_copy1_ParamLimits

0x6019,	// (0x00059747) list_set_graphic_pane_t1_copy1

0xaf4b,	// (0x0005e679) rs_clock_indi_pane_g1

0xe894,	// (0x00061fc2) rs_clock_indi_pane_t1

0xe8a2,	// (0x00061fd0) rs_indi_pane

0xe8aa,	// (0x00061fd8) rs_indi_pane_g1

0xe8b3,	// (0x00061fe1) rs_indi_pane_g2

0xe8bc,	// (0x00061fea) rs_indi_pane_g3

0x0002,

0xfedf,	// (0x0006360d) rs_indi_pane_g

0x7e03,	// (0x0005b531) bg_popup_preview_window_pane_cp03

0xe8c5,	// (0x00061ff3) popup_fep_tooltip_window_t1

0xbed0,	// (0x0005f5fe) popup_note2_window_g2_ParamLimits

0xbed0,	// (0x0005f5fe) popup_note2_window_g2

0x0001,

0xfc78,	// (0x000633a6) popup_note2_window_g_ParamLimits

0xfc78,	// (0x000633a6) popup_note2_window_g

0xc3d8,	// (0x0005fb06) bg_popup_sub_pane_cp11_ParamLimits

0xc3e5,	// (0x0005fb13) cell_ai3_links_pane_g1_ParamLimits

0xc3fc,	// (0x0005fb2a) cell_ai3_links_pane_t1

0x32cc,	// (0x000569fa) set_text_pane_t1_copy1_ParamLimits

0x7d10,	// (0x0005b43e) cell_graphic_popup_pane_cp2_ParamLimits

0x7d10,	// (0x0005b43e) cell_graphic_popup_pane_cp2

0xe8d3,	// (0x00062001) cell_graphic_popup_pane_g1_cp2

0xed97,	// (0x000624c5) cell_graphic_popup_pane_g2_cp2

0xe8db,	// (0x00062009) cell_graphic_popup_pane_g3_cp2

0xe8e3,	// (0x00062011) cell_graphic_popup_pane_t2_cp2

0xeda8,	// (0x000624d6) grid_highlight_pane_cp3_cp2

0xf38b,	// (0x00062ab9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf042,	// (0x00062770) main_tmo_pane_ParamLimits

0xc71c,	// (0x0005fe4a) popup_tmo_big_image_note_window

0xde0a,	// (0x00061538) cell_ai5_widget_list_pane

0xde12,	// (0x00061540) cell_ai5_widget_lrg_icon_pane

0xe426,	// (0x00061b54) tmo_note_info_pane_t1_ParamLimits

0xe43b,	// (0x00061b69) tmo_note_info_pane_t2_ParamLimits

0xe454,	// (0x00061b82) tmo_note_info_pane_t3_ParamLimits

0xe469,	// (0x00061b97) tmo_note_info_pane_t4_ParamLimits

0xe47b,	// (0x00061ba9) tmo_note_info_pane_t5_ParamLimits

0xfecd,	// (0x000635fb) tmo_note_info_pane_t_ParamLimits

0xe5a3,	// (0x00061cd1) settings_container_pane_ParamLimits

0xe84a,	// (0x00061f78) indicator_popup_pane_cp5

0xe84a,	// (0x00061f78) indicator_popup_pane_cp6

0xe87a,	// (0x00061fa8) list_set_graphic_pane_copy1_ParamLimits

0xb48c,	// (0x0005ebba) bg_popup_window_pane_cp23

0xe8f1,	// (0x0006201f) popup_tmo_big_image_note_window_g1

0xe8fd,	// (0x0006202b) popup_tmo_big_image_note_window_t1

0xe90d,	// (0x0006203b) popup_tmo_big_image_note_window_t2

0xe91d,	// (0x0006204b) popup_tmo_big_image_note_window_t3

0x0002,

0xfee6,	// (0x00063614) popup_tmo_big_image_note_window_t

0xe92d,	// (0x0006205b) cell_ai5_widget_lrg_icon_pane_g1

0xe935,	// (0x00062063) cell_ai5_widget_lrg_icon_pane_t1

0xe943,	// (0x00062071) cell_ai5_widget_list_row_pane_ParamLimits

0xe943,	// (0x00062071) cell_ai5_widget_list_row_pane

0xe95c,	// (0x0006208a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe95c,	// (0x0006208a) cell_ai5_widget_list_row_pane_g1

0xe969,	// (0x00062097) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe969,	// (0x00062097) cell_ai5_widget_list_row_pane_t1

0xe981,	// (0x000620af) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe981,	// (0x000620af) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeed,	// (0x0006361b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeed,	// (0x0006361b) cell_ai5_widget_list_row_pane_t

0x4c98,	// (0x000583c6) main_fep_vtchi_ss_pane

0xe9b8,	// (0x000620e6) popup_fep_char_pre_window

0xe9c0,	// (0x000620ee) popup_fep_ituss_window

0xe9e1,	// (0x0006210f) popup_fep_vkbss_window

0xea02,	// (0x00062130) grid_vkbss_keypad_pane_ParamLimits

0xea02,	// (0x00062130) grid_vkbss_keypad_pane

0xea12,	// (0x00062140) ituss_keypad_pane

0xea2e,	// (0x0006215c) aid_vkbss_key_offset_ParamLimits

0xea2e,	// (0x0006215c) aid_vkbss_key_offset

0xea3a,	// (0x00062168) cell_vkbss_key_pane_ParamLimits

0xea3a,	// (0x00062168) cell_vkbss_key_pane

0xea50,	// (0x0006217e) bg_cell_vkbss_key_g1_ParamLimits

0xea50,	// (0x0006217e) bg_cell_vkbss_key_g1

0xea5c,	// (0x0006218a) cell_vkbss_key_3p_pane_ParamLimits

0xea5c,	// (0x0006218a) cell_vkbss_key_3p_pane

0xea76,	// (0x000621a4) cell_vkbss_key_g1_ParamLimits

0xea76,	// (0x000621a4) cell_vkbss_key_g1

0xea90,	// (0x000621be) cell_vkbss_key_t1_ParamLimits

0xea90,	// (0x000621be) cell_vkbss_key_t1

0xeabb,	// (0x000621e9) cell_ituss_key_pane_ParamLimits

0xeabb,	// (0x000621e9) cell_ituss_key_pane

0xeacc,	// (0x000621fa) bg_cell_ituss_key_g1_ParamLimits

0xeacc,	// (0x000621fa) bg_cell_ituss_key_g1

0xead8,	// (0x00062206) cell_ituss_key_pane_g1_ParamLimits

0xead8,	// (0x00062206) cell_ituss_key_pane_g1

0xeaec,	// (0x0006221a) cell_ituss_key_pane_g2_ParamLimits

0xeaec,	// (0x0006221a) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x00063622) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x00063622) cell_ituss_key_pane_g

0xeb17,	// (0x00062245) cell_ituss_key_t1_ParamLimits

0xeb17,	// (0x00062245) cell_ituss_key_t1

0xeb45,	// (0x00062273) cell_ituss_key_t2_ParamLimits

0xeb45,	// (0x00062273) cell_ituss_key_t2

0xeb76,	// (0x000622a4) cell_ituss_key_t3_ParamLimits

0xeb76,	// (0x000622a4) cell_ituss_key_t3

0xeba7,	// (0x000622d5) cell_ituss_key_t4_ParamLimits

0xeba7,	// (0x000622d5) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x00063627) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x00063627) cell_ituss_key_t

0xebd8,	// (0x00062306) cell_vkbss_key_3p_pane_g1

0xebe0,	// (0x0006230e) cell_vkbss_key_3p_pane_g2

0xebe8,	// (0x00062316) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x00063630) cell_vkbss_key_3p_pane_g

0xb48c,	// (0x0005ebba) bg_popup_fep_char_preview_window_cp02

0xebf0,	// (0x0006231e) popup_fep_char_pre_window_t1

0xdd9c,	// (0x000614ca) main_ai5_sk_pane

0xe4f5,	// (0x00061c23) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe501,	// (0x00061c2f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe511,	// (0x00061c3f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe51d,	// (0x00061c4b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed8,	// (0x00063606) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe529,	// (0x00061c57) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf042,	// (0x00062770) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebff,	// (0x0006232d) main_ai5_sk_pane_g1

0x8b97,	// (0x0005c2c5) popup_query_code_window_g1

0xe9d6,	// (0x00062104) popup_fep_vkb_icf_pane

0xe9ec,	// (0x0006211a) popup_fep_vtchi_icf_pane

0xf042,	// (0x00062770) bg_icf_pane

0xec08,	// (0x00062336) list_vkb_icf_pane

0xf042,	// (0x00062770) bg_icf_pane_cp01

0xec14,	// (0x00062342) vtchi_icf_list_pane

0xec25,	// (0x00062353) list_vkb_icf_pane_t1_ParamLimits

0xec25,	// (0x00062353) list_vkb_icf_pane_t1

0xec3c,	// (0x0006236a) vtchi_icf_list_pane_t1_ParamLimits

0xec3c,	// (0x0006236a) vtchi_icf_list_pane_t1

0xe9c0,	// (0x000620ee) popup_fep_ituss_window_ParamLimits

0xe9ec,	// (0x0006211a) popup_fep_vtchi_icf_pane_ParamLimits

0xea12,	// (0x00062140) ituss_keypad_pane_ParamLimits

0xea22,	// (0x00062150) ituss_sks_pane

0xf042,	// (0x00062770) bg_icf_pane_ParamLimits

0xe9a9,	// (0x000620d7) icf_edit_indi_pane_ParamLimits

0xe9a9,	// (0x000620d7) icf_edit_indi_pane

0xec08,	// (0x00062336) list_vkb_icf_pane_ParamLimits

0xf042,	// (0x00062770) bg_icf_pane_cp01_ParamLimits

0xe9a9,	// (0x000620d7) icf_edit_indi_pane_cp01_ParamLimits

0xe9a9,	// (0x000620d7) icf_edit_indi_pane_cp01

0xec1c,	// (0x0006234a) vtchi_query_pane

0xb1c6,	// (0x0005e8f4) icf_edit_indi_pane_g1_ParamLimits

0xb1c6,	// (0x0005e8f4) icf_edit_indi_pane_g1

0xf124,	// (0x00062852) icf_edit_indi_pane_g2_ParamLimits

0xf124,	// (0x00062852) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00063648) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00063648) icf_edit_indi_pane_g

0xf133,	// (0x00062861) icf_edit_indi_pane_t1

0xec55,	// (0x00062383) bg_input_focus_pane_cp042

0xef7b,	// (0x000626a9) vtchi_button_pane

0xec5e,	// (0x0006238c) vtchi_query_pane_t1

0xec6c,	// (0x0006239a) vtchi_query_pane_t2

0xec7a,	// (0x000623a8) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00063637) vtchi_query_pane_t

0xb48c,	// (0x0005ebba) bg_button_pane_cp13

0xec88,	// (0x000623b6) vtchi_button_pane_g1

0xec90,	// (0x000623be) ituss_sks_pane_g1

0xec9b,	// (0x000623c9) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x0006363e) ituss_sks_pane_g

0xf108,	// (0x00062836) ituss_sks_pane_t1

0xf116,	// (0x00062844) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00063643) ituss_sks_pane_t

0xa9f5,	// (0x0005e123) indicator_nsta_pane_cp_g1

0xa9fe,	// (0x0005e12c) indicator_nsta_pane_cp_g2

0xaa06,	// (0x0005e134) indicator_nsta_pane_cp_g3

0xaa0e,	// (0x0005e13c) indicator_nsta_pane_cp_g4

0xaa16,	// (0x0005e144) indicator_nsta_pane_cp_g5

0xaa1e,	// (0x0005e14c) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x000631e4) indicator_nsta_pane_cp_g

0xd487,	// (0x00060bb5) cell_graphic2_pane_t2_ParamLimits

0xd487,	// (0x00060bb5) cell_graphic2_pane_t2

0x0001,

0xfdcf,	// (0x000634fd) cell_graphic2_pane_t_ParamLimits

0xfdcf,	// (0x000634fd) cell_graphic2_pane_t

0xd4b4,	// (0x00060be2) cell_graphic2_control_pane_t1

0x5d4b,	// (0x00059479) signal_pane_g3_ParamLimits

0x5d4b,	// (0x00059479) signal_pane_g3

0x5d5d,	// (0x0005948b) signal_pane_g4_ParamLimits

0x5d5d,	// (0x0005948b) signal_pane_g4

0xe993,	// (0x000620c1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe993,	// (0x000620c1) cell_ai5_widget_list_row_pane_t3

0xeb05,	// (0x00062233) cell_ituss_key_pane_t1_ParamLimits

0xeb05,	// (0x00062233) cell_ituss_key_pane_t1

0x8814,	// (0x0005bf42) form_field_data_wide_pane_vc_t2_ParamLimits

0x8814,	// (0x0005bf42) form_field_data_wide_pane_vc_t2

0x8828,	// (0x0005bf56) form_field_data_wide_pane_vc_t3_ParamLimits

0x8828,	// (0x0005bf56) form_field_data_wide_pane_vc_t3

0x0002,

0xf814,	// (0x00062f42) form_field_data_wide_pane_vc_t_ParamLimits

0xf814,	// (0x00062f42) form_field_data_wide_pane_vc_t

0xa69a,	// (0x0005ddc8) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa69a,	// (0x0005ddc8) form_field_slider_wide_pane_vc_t3

0xa776,	// (0x0005dea4) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa776,	// (0x0005dea4) form_field_popup_wide_pane_vc_t2

0xa78d,	// (0x0005debb) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa78d,	// (0x0005debb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x000631d3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x000631d3) form_field_popup_wide_pane_vc_t

0x7bb3,	// (0x0005b2e1) aid_fshwr2_btn_pane_ParamLimits

0x7bbf,	// (0x0005b2ed) aid_fshwr2_syb_pane_ParamLimits

0x7bd0,	// (0x0005b2fe) aid_fshwr2_txt_pane_ParamLimits

0x73ef,	// (0x0005ab1d) fshwr2_bg_pane_ParamLimits

0x7bdc,	// (0x0005b30a) fshwr2_func_candi_pane_ParamLimits

0x7bed,	// (0x0005b31b) fshwr2_hwr_syb_pane_ParamLimits

0x7c00,	// (0x0005b32e) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

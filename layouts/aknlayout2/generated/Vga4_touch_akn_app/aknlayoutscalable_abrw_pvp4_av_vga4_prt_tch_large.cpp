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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00052ded };

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
0x4ce9,	// (0x00057ad6) Screen

0x4cf5,	// (0x00057ae2) application_window_ParamLimits

0x4cf5,	// (0x00057ae2) application_window

0xec15,	// (0x00061a02) screen_g1

0x4d51,	// (0x00057b3e) area_bottom_pane_ParamLimits

0x4d51,	// (0x00057b3e) area_bottom_pane

0x4e11,	// (0x00057bfe) area_top_pane_ParamLimits

0x4e11,	// (0x00057bfe) area_top_pane

0x4eaf,	// (0x00057c9c) main_pane_ParamLimits

0x4eaf,	// (0x00057c9c) main_pane

0xec1f,	// (0x00061a0c) misc_graphics

0x89bf,	// (0x0005b7ac) battery_pane_ParamLimits

0x89bf,	// (0x0005b7ac) battery_pane

0x96b9,	// (0x0005c4a6) bg_status_flat_pane_g8

0x96c1,	// (0x0005c4ae) bg_status_flat_pane_g9

0x8a87,	// (0x0005b874) context_pane_ParamLimits

0x8a87,	// (0x0005b874) context_pane

0x8bab,	// (0x0005b998) navi_pane_ParamLimits

0x8bab,	// (0x0005b998) navi_pane

0x8c3b,	// (0x0005ba28) signal_pane_ParamLimits

0x8c3b,	// (0x0005ba28) signal_pane

0x0008,

0xf859,	// (0x00062646) bg_status_flat_pane_g

0x8ca8,	// (0x0005ba95) status_pane_g1_ParamLimits

0x8ca8,	// (0x0005ba95) status_pane_g1

0x8cb4,	// (0x0005baa1) status_pane_g2_ParamLimits

0x8cb4,	// (0x0005baa1) status_pane_g2

0x8cc0,	// (0x0005baad) status_pane_g3_ParamLimits

0x8cc0,	// (0x0005baad) status_pane_g3

0x0004,

0xf780,	// (0x0006256d) status_pane_g_ParamLimits

0xf780,	// (0x0006256d) status_pane_g

0x8cf4,	// (0x0005bae1) title_pane_ParamLimits

0x8cf4,	// (0x0005bae1) title_pane

0x8d35,	// (0x0005bb22) uni_indicator_pane_ParamLimits

0x8d35,	// (0x0005bb22) uni_indicator_pane

0x88f1,	// (0x0005b6de) bg_list_pane_ParamLimits

0x88f1,	// (0x0005b6de) bg_list_pane

0x643f,	// (0x0005922c) find_pane

0x8911,	// (0x0005b6fe) listscroll_app_pane_ParamLimits

0x8911,	// (0x0005b6fe) listscroll_app_pane

0x891d,	// (0x0005b70a) listscroll_form_pane

0x6447,	// (0x00059234) listscroll_gen_pane_ParamLimits

0x6447,	// (0x00059234) listscroll_gen_pane

0x645b,	// (0x00059248) listscroll_set_pane

0x5ba8,	// (0x00058995) main_idle_act_pane

0x85ea,	// (0x0005b3d7) main_idle_trad_pane

0x85ea,	// (0x0005b3d7) main_list_empty_pane

0x8911,	// (0x0005b6fe) main_midp_pane

0x8937,	// (0x0005b724) main_pane_g1_ParamLimits

0x8937,	// (0x0005b724) main_pane_g1

0x6471,	// (0x0005925e) popup_ai_message_window_ParamLimits

0x6471,	// (0x0005925e) popup_ai_message_window

0x6525,	// (0x00059312) popup_fep_china_uni_window_ParamLimits

0x6525,	// (0x00059312) popup_fep_china_uni_window

0x6585,	// (0x00059372) popup_fep_japan_candidate_window_ParamLimits

0x6585,	// (0x00059372) popup_fep_japan_candidate_window

0x65af,	// (0x0005939c) popup_fep_japan_predictive_window_ParamLimits

0x65af,	// (0x0005939c) popup_fep_japan_predictive_window

0x65e5,	// (0x000593d2) popup_find_window

0x65f2,	// (0x000593df) popup_grid_graphic_window_ParamLimits

0x65f2,	// (0x000593df) popup_grid_graphic_window

0x6622,	// (0x0005940f) popup_large_graphic_colour_window

0x6648,	// (0x00059435) popup_menu_window_ParamLimits

0x6648,	// (0x00059435) popup_menu_window

0x6812,	// (0x000595ff) popup_note_image_window

0x67fc,	// (0x000595e9) popup_note_wait_window_ParamLimits

0x67fc,	// (0x000595e9) popup_note_wait_window

0x67fc,	// (0x000595e9) popup_note_window_ParamLimits

0x67fc,	// (0x000595e9) popup_note_window

0x6878,	// (0x00059665) popup_query_code_window_ParamLimits

0x6878,	// (0x00059665) popup_query_code_window

0x688e,	// (0x0005967b) popup_query_data_code_window_ParamLimits

0x688e,	// (0x0005967b) popup_query_data_code_window

0x68b1,	// (0x0005969e) popup_query_data_window_ParamLimits

0x68b1,	// (0x0005969e) popup_query_data_window

0x68d3,	// (0x000596c0) popup_query_sat_info_window_ParamLimits

0x68d3,	// (0x000596c0) popup_query_sat_info_window

0x6912,	// (0x000596ff) popup_snote_single_graphic_window_ParamLimits

0x6912,	// (0x000596ff) popup_snote_single_graphic_window

0x6912,	// (0x000596ff) popup_snote_single_text_window_ParamLimits

0x6912,	// (0x000596ff) popup_snote_single_text_window

0x6929,	// (0x00059716) popup_sub_window_general

0x6a6f,	// (0x0005985c) popup_window_general_ParamLimits

0x6a6f,	// (0x0005985c) popup_window_general

0x8945,	// (0x0005b732) power_save_pane

0x62f6,	// (0x000590e3) control_pane_g1_ParamLimits

0x62f6,	// (0x000590e3) control_pane_g1

0x6319,	// (0x00059106) control_pane_g2_ParamLimits

0x6319,	// (0x00059106) control_pane_g2

0x88b4,	// (0x0005b6a1) control_pane_g3_ParamLimits

0x88b4,	// (0x0005b6a1) control_pane_g3

0x0007,

0xf768,	// (0x00062555) control_pane_g_ParamLimits

0xf768,	// (0x00062555) control_pane_g

0x635e,	// (0x0005914b) control_pane_t1_ParamLimits

0x635e,	// (0x0005914b) control_pane_t1

0x63a6,	// (0x00059193) control_pane_t2_ParamLimits

0x63a6,	// (0x00059193) control_pane_t2

0x0002,

0xf779,	// (0x00062566) control_pane_t_ParamLimits

0xf779,	// (0x00062566) control_pane_t

0x87d9,	// (0x0005b5c6) navi_navi_volume_pane_cp1

0x87e1,	// (0x0005b5ce) status_small_icon_pane

0x87e9,	// (0x0005b5d6) status_small_pane_g1_ParamLimits

0x87e9,	// (0x0005b5d6) status_small_pane_g1

0x881d,	// (0x0005b60a) status_small_pane_g2_ParamLimits

0x881d,	// (0x0005b60a) status_small_pane_g2

0x8829,	// (0x0005b616) status_small_pane_g3_ParamLimits

0x8829,	// (0x0005b616) status_small_pane_g3

0x8835,	// (0x0005b622) status_small_pane_g4_ParamLimits

0x8835,	// (0x0005b622) status_small_pane_g4

0x8841,	// (0x0005b62e) status_small_pane_g5_ParamLimits

0x8841,	// (0x0005b62e) status_small_pane_g5

0x884f,	// (0x0005b63c) status_small_pane_g6_ParamLimits

0x884f,	// (0x0005b63c) status_small_pane_g6

0x0007,

0xf757,	// (0x00062544) status_small_pane_g_ParamLimits

0xf757,	// (0x00062544) status_small_pane_g

0x887e,	// (0x0005b66b) status_small_pane_t1

0x88a0,	// (0x0005b68d) status_small_wait_pane_ParamLimits

0x88a0,	// (0x0005b68d) status_small_wait_pane

0x5f72,	// (0x00058d5f) aid_levels_signal_ParamLimits

0x5f72,	// (0x00058d5f) aid_levels_signal

0x5f81,	// (0x00058d6e) signal_pane_g1_ParamLimits

0x5f81,	// (0x00058d6e) signal_pane_g1

0x5f96,	// (0x00058d83) signal_pane_g2_ParamLimits

0x5f96,	// (0x00058d83) signal_pane_g2

0x0003,

0xf6e8,	// (0x000624d5) signal_pane_g_ParamLimits

0xf6e8,	// (0x000624d5) signal_pane_g

0x3229,	// (0x00056016) context_pane_g1

0x510e,	// (0x00057efb) title_pane_g1

0x5140,	// (0x00057f2d) title_pane_t1

0xec35,	// (0x00061a22) title_pane_t2

0xec5b,	// (0x00061a48) title_pane_t3

0x0002,

0xf532,	// (0x0006231f) title_pane_t

0x8d4d,	// (0x0005bb3a) aid_levels_battery_ParamLimits

0x8d4d,	// (0x0005bb3a) aid_levels_battery

0x8d5e,	// (0x0005bb4b) battery_pane_g1_ParamLimits

0x8d5e,	// (0x0005bb4b) battery_pane_g1

0x8d74,	// (0x0005bb61) battery_pane_g2_ParamLimits

0x8d74,	// (0x0005bb61) battery_pane_g2

0x0001,

0xf78b,	// (0x00062578) battery_pane_g_ParamLimits

0xf78b,	// (0x00062578) battery_pane_g

0xa1f1,	// (0x0005cfde) uni_indicator_pane_g1

0xa207,	// (0x0005cff4) uni_indicator_pane_g2

0xa21d,	// (0x0005d00a) uni_indicator_pane_g3

0x0005,

0xf901,	// (0x000626ee) uni_indicator_pane_g

0x844d,	// (0x0005b23a) navi_icon_pane_ParamLimits

0x844d,	// (0x0005b23a) navi_icon_pane

0x83a0,	// (0x0005b18d) navi_midp_pane

0x8469,	// (0x0005b256) navi_navi_pane

0x8473,	// (0x0005b260) navi_text_pane_ParamLimits

0x8473,	// (0x0005b260) navi_text_pane

0xec15,	// (0x00061a02) status_small_wait_pane_g1

0xef7c,	// (0x00061d69) status_small_wait_pane_g2

0x0001,

0xf8fc,	// (0x000626e9) status_small_wait_pane_g

0x9f04,	// (0x0005ccf1) navi_navi_icon_text_pane

0x9f0c,	// (0x0005ccf9) navi_navi_pane_g1_ParamLimits

0x9f0c,	// (0x0005ccf9) navi_navi_pane_g1

0x9f1e,	// (0x0005cd0b) navi_navi_pane_g2_ParamLimits

0x9f1e,	// (0x0005cd0b) navi_navi_pane_g2

0x0001,

0xf8ca,	// (0x000626b7) navi_navi_pane_g_ParamLimits

0xf8ca,	// (0x000626b7) navi_navi_pane_g

0x9f30,	// (0x0005cd1d) navi_navi_tabs_pane

0x9f39,	// (0x0005cd26) navi_navi_text_pane

0x9f04,	// (0x0005ccf1) navi_navi_volume_pane

0x9ee0,	// (0x0005cccd) navi_text_pane_t1

0x9ed4,	// (0x0005ccc1) navi_icon_pane_g1

0x9c39,	// (0x0005ca26) navi_navi_text_pane_t1

0x6d4b,	// (0x00059b38) navi_navi_volume_pane_g1

0x6d53,	// (0x00059b40) volume_small_pane

0x9b9f,	// (0x0005c98c) navi_navi_icon_text_pane_g1

0x9ba7,	// (0x0005c994) navi_navi_icon_text_pane_t1

0x8469,	// (0x0005b256) navi_tabs_2_long_pane

0x8469,	// (0x0005b256) navi_tabs_2_pane

0x8469,	// (0x0005b256) navi_tabs_3_long_pane

0x8469,	// (0x0005b256) navi_tabs_3_pane

0x8469,	// (0x0005b256) navi_tabs_4_pane

0x6d2b,	// (0x00059b18) tabs_2_active_pane_ParamLimits

0x6d2b,	// (0x00059b18) tabs_2_active_pane

0x6d3b,	// (0x00059b28) tabs_2_passive_pane_ParamLimits

0x6d3b,	// (0x00059b28) tabs_2_passive_pane

0x6cf9,	// (0x00059ae6) tabs_3_active_pane_ParamLimits

0x6cf9,	// (0x00059ae6) tabs_3_active_pane

0x6d09,	// (0x00059af6) tabs_3_passive_pane_ParamLimits

0x6d09,	// (0x00059af6) tabs_3_passive_pane

0x6d1a,	// (0x00059b07) tabs_3_passive_pane_cp_ParamLimits

0x6d1a,	// (0x00059b07) tabs_3_passive_pane_cp

0x6cad,	// (0x00059a9a) tabs_4_active_pane_ParamLimits

0x6cad,	// (0x00059a9a) tabs_4_active_pane

0x6cc0,	// (0x00059aad) tabs_4_passive_pane_ParamLimits

0x6cc0,	// (0x00059aad) tabs_4_passive_pane

0x6cd1,	// (0x00059abe) tabs_4_passive_pane_cp_ParamLimits

0x6cd1,	// (0x00059abe) tabs_4_passive_pane_cp

0x6ce2,	// (0x00059acf) tabs_4_passive_pane_cp2_ParamLimits

0x6ce2,	// (0x00059acf) tabs_4_passive_pane_cp2

0x6c89,	// (0x00059a76) tabs_2_long_active_pane_ParamLimits

0x6c89,	// (0x00059a76) tabs_2_long_active_pane

0x6c9b,	// (0x00059a88) tabs_2_long_passive_pane_ParamLimits

0x6c9b,	// (0x00059a88) tabs_2_long_passive_pane

0x6c4a,	// (0x00059a37) tabs_3_long_active_pane_ParamLimits

0x6c4a,	// (0x00059a37) tabs_3_long_active_pane

0x6c5d,	// (0x00059a4a) tabs_3_long_passive_pane_ParamLimits

0x6c5d,	// (0x00059a4a) tabs_3_long_passive_pane

0x6c76,	// (0x00059a63) tabs_3_long_passive_pane_cp_ParamLimits

0x6c76,	// (0x00059a63) tabs_3_long_passive_pane_cp

0x6bf0,	// (0x000599dd) volume_small_pane_g1

0x6bf9,	// (0x000599e6) volume_small_pane_g2

0x6c02,	// (0x000599ef) volume_small_pane_g3

0x6c0b,	// (0x000599f8) volume_small_pane_g4

0x6c14,	// (0x00059a01) volume_small_pane_g5

0x6c1d,	// (0x00059a0a) volume_small_pane_g6

0x6c26,	// (0x00059a13) volume_small_pane_g7

0x6c2f,	// (0x00059a1c) volume_small_pane_g8

0x6c38,	// (0x00059a25) volume_small_pane_g9

0x6c41,	// (0x00059a2e) volume_small_pane_g10

0x0009,

0xf896,	// (0x00062683) volume_small_pane_g

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp2_ParamLimits

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp2

0x51a8,	// (0x00057f95) tabs_3_active_pane_g1

0x51b0,	// (0x00057f9d) tabs_3_active_pane_t1

0xec6d,	// (0x00061a5a) bg_passive_tab_pane_cp2_ParamLimits

0xec6d,	// (0x00061a5a) bg_passive_tab_pane_cp2

0x51a8,	// (0x00057f95) tabs_3_passive_pane_g1

0x51b0,	// (0x00057f9d) tabs_3_passive_pane_t1

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp3_ParamLimits

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp3

0x51c2,	// (0x00057faf) tabs_4_active_pane_g1

0x51ca,	// (0x00057fb7) tabs_4_active_pane_t1

0xec6d,	// (0x00061a5a) bg_passive_tab_pane_cp3_ParamLimits

0xec6d,	// (0x00061a5a) bg_passive_tab_pane_cp3

0x51c2,	// (0x00057faf) tabs_4_1_passive_pane_g1

0x51ca,	// (0x00057fb7) tabs_4_1_passive_pane_t1

0x8911,	// (0x0005b6fe) list_highlight_pane_cp2

0xa46a,	// (0x0005d257) list_set_pane_ParamLimits

0xa46a,	// (0x0005d257) list_set_pane

0xa52c,	// (0x0005d319) main_pane_set_t1_ParamLimits

0xa52c,	// (0x0005d319) main_pane_set_t1

0xa54c,	// (0x0005d339) main_pane_set_t2_ParamLimits

0xa54c,	// (0x0005d339) main_pane_set_t2

0xa560,	// (0x0005d34d) main_pane_set_t3_ParamLimits

0xa560,	// (0x0005d34d) main_pane_set_t3

0xa574,	// (0x0005d361) main_pane_set_t4_ParamLimits

0xa574,	// (0x0005d361) main_pane_set_t4

0x0003,

0xf966,	// (0x00062753) main_pane_set_t_ParamLimits

0xf966,	// (0x00062753) main_pane_set_t

0xa588,	// (0x0005d375) setting_code_pane

0xa592,	// (0x0005d37f) setting_slider_graphic_pane

0xa592,	// (0x0005d37f) setting_slider_pane

0xa592,	// (0x0005d37f) setting_text_pane

0xa592,	// (0x0005d37f) setting_volume_pane

0x51dc,	// (0x00057fc9) volume_set_pane

0xec6d,	// (0x00061a5a) bg_set_opt_pane_cp

0x51e6,	// (0x00057fd3) setting_slider_pane_t1

0x51ff,	// (0x00057fec) setting_slider_pane_t2

0x5219,	// (0x00058006) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00062326) setting_slider_pane_t

0x5231,	// (0x0005801e) slider_set_pane

0xec1f,	// (0x00061a0c) bg_set_opt_pane_cp2

0xec7b,	// (0x00061a68) setting_slider_graphic_pane_g1

0x5247,	// (0x00058034) setting_slider_graphic_pane_t1

0x5257,	// (0x00058044) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0006232d) setting_slider_graphic_pane_t

0x5267,	// (0x00058054) slider_set_pane_cp

0xec1f,	// (0x00061a0c) input_focus_pane_cp1

0xa42b,	// (0x0005d218) list_set_text_pane

0xec15,	// (0x00061a02) setting_text_pane_g1

0xec1f,	// (0x00061a0c) input_focus_pane_cp2

0xec15,	// (0x00061a02) setting_code_pane_g1

0xec84,	// (0x00061a71) setting_code_pane_t1

0x300c,	// (0x00055df9) set_text_pane_t1_ParamLimits

0x300c,	// (0x00055df9) set_text_pane_t1

0xf315,	// (0x00062102) set_opt_bg_pane_g1

0xf31d,	// (0x0006210a) set_opt_bg_pane_g2

0xa403,	// (0x0005d1f0) set_opt_bg_pane_g3

0xf32d,	// (0x0006211a) set_opt_bg_pane_g4

0xf335,	// (0x00062122) set_opt_bg_pane_g5

0xf33d,	// (0x0006212a) set_opt_bg_pane_g6

0xa40d,	// (0x0005d1fa) set_opt_bg_pane_g7

0xa417,	// (0x0005d204) set_opt_bg_pane_g8

0xa421,	// (0x0005d20e) set_opt_bg_pane_g9

0x0008,

0xf953,	// (0x00062740) set_opt_bg_pane_g

0xa3f6,	// (0x0005d1e3) slider_set_pane_g1

0x6dfc,	// (0x00059be9) slider_set_pane_g2

0x0006,

0xf944,	// (0x00062731) slider_set_pane_g

0x6d5c,	// (0x00059b49) volume_set_pane_g1

0x6d66,	// (0x00059b53) volume_set_pane_g2

0x6d70,	// (0x00059b5d) volume_set_pane_g3

0x6d7a,	// (0x00059b67) volume_set_pane_g4

0x6d84,	// (0x00059b71) volume_set_pane_g5

0x6d8e,	// (0x00059b7b) volume_set_pane_g6

0x6d98,	// (0x00059b85) volume_set_pane_g7

0x6da2,	// (0x00059b8f) volume_set_pane_g8

0x6dac,	// (0x00059b99) volume_set_pane_g9

0x6db6,	// (0x00059ba3) volume_set_pane_g10

0x0009,

0xf91c,	// (0x00062709) volume_set_pane_g

0x526f,	// (0x0005805c) indicator_pane_ParamLimits

0x526f,	// (0x0005805c) indicator_pane

0x527b,	// (0x00058068) main_idle_pane_g2_ParamLimits

0x527b,	// (0x00058068) main_idle_pane_g2

0x52a3,	// (0x00058090) main_pane_idle_g1_ParamLimits

0x52a3,	// (0x00058090) main_pane_idle_g1

0xec92,	// (0x00061a7f) popup_clock_digital_analogue_window_ParamLimits

0xec92,	// (0x00061a7f) popup_clock_digital_analogue_window

0x52b1,	// (0x0005809e) soft_indicator_pane_ParamLimits

0x52b1,	// (0x0005809e) soft_indicator_pane

0x52bf,	// (0x000580ac) wallpaper_pane_ParamLimits

0x52bf,	// (0x000580ac) wallpaper_pane

0xec15,	// (0x00061a02) wallpaper_pane_g1

0x52cb,	// (0x000580b8) indicator_pane_g1_ParamLimits

0x52cb,	// (0x000580b8) indicator_pane_g1

0xa855,	// (0x0005d642) navi_navi_icon_text_pane_srt_g1

0xecc0,	// (0x00061aad) soft_indicator_pane_t1

0xecda,	// (0x00061ac7) aid_ps_area_pane

0x52d7,	// (0x000580c4) aid_ps_clock_pane

0xeceb,	// (0x00061ad8) aid_ps_indicator_pane

0xecf7,	// (0x00061ae4) indicator_ps_pane_ParamLimits

0xecf7,	// (0x00061ae4) indicator_ps_pane

0xed06,	// (0x00061af3) power_save_pane_g1_ParamLimits

0xed06,	// (0x00061af3) power_save_pane_g1

0xed12,	// (0x00061aff) power_save_pane_g2_ParamLimits

0xed12,	// (0x00061aff) power_save_pane_g2

0x4d05,	// (0x00057af2) aid_navinavi_width_pane

0xecda,	// (0x00061ac7) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00062332) power_save_pane_g_ParamLimits

0xf545,	// (0x00062332) power_save_pane_g

0xed20,	// (0x00061b0d) power_save_pane_t1_ParamLimits

0xed20,	// (0x00061b0d) power_save_pane_t1

0x52d7,	// (0x000580c4) aid_ps_clock_pane_ParamLimits

0xeceb,	// (0x00061ad8) aid_ps_indicator_pane_ParamLimits

0xed32,	// (0x00061b1f) power_save_pane_t4_ParamLimits

0xed32,	// (0x00061b1f) power_save_pane_t4

0x0001,

0xf54a,	// (0x00062337) power_save_pane_t_ParamLimits

0xf54a,	// (0x00062337) power_save_pane_t

0xed5c,	// (0x00061b49) power_save_t3_ParamLimits

0xed5c,	// (0x00061b49) power_save_t3

0xed47,	// (0x00061b34) power_save_t2_ParamLimits

0xed47,	// (0x00061b34) power_save_t2

0xed71,	// (0x00061b5e) indicator_ps_pane_g1

0x52e5,	// (0x000580d2) ai_gene_pane_ParamLimits

0x52e5,	// (0x000580d2) ai_gene_pane

0x52f1,	// (0x000580de) ai_links_pane_ParamLimits

0x52f1,	// (0x000580de) ai_links_pane

0x52fd,	// (0x000580ea) indicator_pane_cp1_ParamLimits

0x52fd,	// (0x000580ea) indicator_pane_cp1

0x5309,	// (0x000580f6) main_pane_idle_g1_cp_ParamLimits

0x5309,	// (0x000580f6) main_pane_idle_g1_cp

0xed7a,	// (0x00061b67) popup_ai_links_title_window

0x5315,	// (0x00058102) soft_indicator_pane_cp1_ParamLimits

0x5315,	// (0x00058102) soft_indicator_pane_cp1

0xa1df,	// (0x0005cfcc) ai_links_pane_g1

0xa1e8,	// (0x0005cfd5) grid_ai_links_pane

0xa1c4,	// (0x0005cfb1) ai_gene_pane_1

0xa1cd,	// (0x0005cfba) ai_gene_pane_2

0xa1d6,	// (0x0005cfc3) list_highlight_pane_cp4

0xa1a4,	// (0x0005cf91) cell_ai_link_pane_ParamLimits

0xa1a4,	// (0x0005cf91) cell_ai_link_pane

0xa19c,	// (0x0005cf89) cell_ai_link_pane_g1

0xef7c,	// (0x00061d69) cell_ai_link_pane_g2

0x0001,

0xf8f7,	// (0x000626e4) cell_ai_link_pane_g

0xec1f,	// (0x00061a0c) grid_highlight_cp2

0xec1f,	// (0x00061a0c) bg_popup_sub_pane_cp1

0xed91,	// (0x00061b7e) popup_ai_links_title_window_t1

0xa0e8,	// (0x0005ced5) ai_gene_pane_1_g1_ParamLimits

0xa0e8,	// (0x0005ced5) ai_gene_pane_1_g1

0xa0f4,	// (0x0005cee1) ai_gene_pane_1_g2_ParamLimits

0xa0f4,	// (0x0005cee1) ai_gene_pane_1_g2

0x0001,

0xf8ed,	// (0x000626da) ai_gene_pane_1_g_ParamLimits

0xf8ed,	// (0x000626da) ai_gene_pane_1_g

0xa101,	// (0x0005ceee) ai_gene_pane_1_t1_ParamLimits

0xa101,	// (0x0005ceee) ai_gene_pane_1_t1

0xa135,	// (0x0005cf22) grid_ai_soft_ind_pane

0xa0d3,	// (0x0005cec0) ai_gene_pane_2_t1_ParamLimits

0xa0d3,	// (0x0005cec0) ai_gene_pane_2_t1

0x5321,	// (0x0005810e) main_pane_empty_t1_ParamLimits

0x5321,	// (0x0005810e) main_pane_empty_t1

0x5339,	// (0x00058126) main_pane_empty_t2_ParamLimits

0x5339,	// (0x00058126) main_pane_empty_t2

0x534e,	// (0x0005813b) main_pane_empty_t3_ParamLimits

0x534e,	// (0x0005813b) main_pane_empty_t3

0x5360,	// (0x0005814d) main_pane_empty_t4_ParamLimits

0x5360,	// (0x0005814d) main_pane_empty_t4

0x5372,	// (0x0005815f) main_pane_empty_t5_ParamLimits

0x5372,	// (0x0005815f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0006233c) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0006233c) main_pane_empty_t

0xf3a4,	// (0x00062191) bg_popup_window_pane_ParamLimits

0xf3a4,	// (0x00062191) bg_popup_window_pane

0x9c47,	// (0x0005ca34) find_popup_pane_cp2_ParamLimits

0x9c47,	// (0x0005ca34) find_popup_pane_cp2

0x9e41,	// (0x0005cc2e) heading_pane_ParamLimits

0x9e41,	// (0x0005cc2e) heading_pane

0xec1f,	// (0x00061a0c) bg_popup_sub_pane

0x9bc1,	// (0x0005c9ae) bg_popup_window_pane_g1_ParamLimits

0x9bc1,	// (0x0005c9ae) bg_popup_window_pane_g1

0x9bcd,	// (0x0005c9ba) bg_popup_window_pane_g2_ParamLimits

0x9bcd,	// (0x0005c9ba) bg_popup_window_pane_g2

0x9bd9,	// (0x0005c9c6) bg_popup_window_pane_g3_ParamLimits

0x9bd9,	// (0x0005c9c6) bg_popup_window_pane_g3

0x9be5,	// (0x0005c9d2) bg_popup_window_pane_g4_ParamLimits

0x9be5,	// (0x0005c9d2) bg_popup_window_pane_g4

0x9bf1,	// (0x0005c9de) bg_popup_window_pane_g5_ParamLimits

0x9bf1,	// (0x0005c9de) bg_popup_window_pane_g5

0x9bfd,	// (0x0005c9ea) bg_popup_window_pane_g6_ParamLimits

0x9bfd,	// (0x0005c9ea) bg_popup_window_pane_g6

0x9c09,	// (0x0005c9f6) bg_popup_window_pane_g7_ParamLimits

0x9c09,	// (0x0005c9f6) bg_popup_window_pane_g7

0x9c15,	// (0x0005ca02) bg_popup_window_pane_g8_ParamLimits

0x9c15,	// (0x0005ca02) bg_popup_window_pane_g8

0x9c21,	// (0x0005ca0e) bg_popup_window_pane_g9_ParamLimits

0x9c21,	// (0x0005ca0e) bg_popup_window_pane_g9

0x9c2d,	// (0x0005ca1a) bg_popup_window_pane_g10_ParamLimits

0x9c2d,	// (0x0005ca1a) bg_popup_window_pane_g10

0x0009,

0xf8b5,	// (0x000626a2) bg_popup_window_pane_g_ParamLimits

0xf8b5,	// (0x000626a2) bg_popup_window_pane_g

0x9b56,	// (0x0005c943) bg_popup_heading_pane_ParamLimits

0x9b56,	// (0x0005c943) bg_popup_heading_pane

0x6ef8,	// (0x00059ce5) tabs_4_passive_pane_cp_srt_ParamLimits

0x6ef8,	// (0x00059ce5) tabs_4_passive_pane_cp_srt

0x6f0a,	// (0x00059cf7) tabs_4_passive_pane_srt_ParamLimits

0x9b6a,	// (0x0005c957) heading_pane_g2

0x6f0a,	// (0x00059cf7) tabs_4_passive_pane_srt

0x8911,	// (0x0005b6fe) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8911,	// (0x0005b6fe) bg_passive_tab_pane_cp3_srt

0x9b72,	// (0x0005c95f) heading_pane_t1_ParamLimits

0x9b72,	// (0x0005c95f) heading_pane_t1

0x9b89,	// (0x0005c976) heading_pane_t2_ParamLimits

0x9b89,	// (0x0005c976) heading_pane_t2

0x0001,

0xf8b0,	// (0x0006269d) heading_pane_t_ParamLimits

0xf8b0,	// (0x0006269d) heading_pane_t

0x9681,	// (0x0005c46e) bg_popup_heading_pane_g1

0x9730,	// (0x0005c51d) bg_popup_heading_pane_g2

0x973a,	// (0x0005c527) bg_popup_heading_pane_g3

0x9744,	// (0x0005c531) bg_popup_heading_pane_g4

0x974e,	// (0x0005c53b) bg_popup_heading_pane_g5

0x9758,	// (0x0005c545) bg_popup_heading_pane_g6

0x9760,	// (0x0005c54d) bg_popup_heading_pane_g7

0x9768,	// (0x0005c555) bg_popup_heading_pane_g8

0x9772,	// (0x0005c55f) bg_popup_heading_pane_g9

0x0008,

0xf86c,	// (0x00062659) bg_popup_heading_pane_g

0x8e61,	// (0x0005bc4e) bg_popup_sub_pane_g1

0x8e71,	// (0x0005bc5e) bg_popup_sub_pane_g2

0x8e69,	// (0x0005bc56) bg_popup_sub_pane_g3

0x8e81,	// (0x0005bc6e) bg_popup_sub_pane_g4

0x8e79,	// (0x0005bc66) bg_popup_sub_pane_g5

0x8e89,	// (0x0005bc76) bg_popup_sub_pane_g6

0x8e91,	// (0x0005bc7e) bg_popup_sub_pane_g7

0x8ea1,	// (0x0005bc8e) bg_popup_sub_pane_g8

0x8e99,	// (0x0005bc86) bg_popup_sub_pane_g9

0x0008,

0xf846,	// (0x00062633) bg_popup_sub_pane_g

0xeda0,	// (0x00061b8d) bg_popup_window_pane_cp5_ParamLimits

0xeda0,	// (0x00061b8d) bg_popup_window_pane_cp5

0xedbc,	// (0x00061ba9) popup_note_window_g1_ParamLimits

0xedbc,	// (0x00061ba9) popup_note_window_g1

0xedc8,	// (0x00061bb5) popup_note_window_t1_ParamLimits

0xedc8,	// (0x00061bb5) popup_note_window_t1

0xedde,	// (0x00061bcb) popup_note_window_t2_ParamLimits

0xedde,	// (0x00061bcb) popup_note_window_t2

0xedf4,	// (0x00061be1) popup_note_window_t3_ParamLimits

0xedf4,	// (0x00061be1) popup_note_window_t3

0xee0a,	// (0x00061bf7) popup_note_window_t4_ParamLimits

0xee0a,	// (0x00061bf7) popup_note_window_t4

0xee32,	// (0x00061c1f) popup_note_window_t5_ParamLimits

0xee32,	// (0x00061c1f) popup_note_window_t5

0x0004,

0xf55a,	// (0x00062347) popup_note_window_t_ParamLimits

0xf55a,	// (0x00062347) popup_note_window_t

0xee7c,	// (0x00061c69) bg_popup_window_pane_cp6_ParamLimits

0xee7c,	// (0x00061c69) bg_popup_window_pane_cp6

0x95fd,	// (0x0005c3ea) popup_note_image_window_g1_ParamLimits

0x95fd,	// (0x0005c3ea) popup_note_image_window_g1

0x9609,	// (0x0005c3f6) popup_note_image_window_g2_ParamLimits

0x9609,	// (0x0005c3f6) popup_note_image_window_g2

0x0001,

0xf83a,	// (0x00062627) popup_note_image_window_g_ParamLimits

0xf83a,	// (0x00062627) popup_note_image_window_g

0x9622,	// (0x0005c40f) popup_note_image_window_t1_ParamLimits

0x9622,	// (0x0005c40f) popup_note_image_window_t1

0x963b,	// (0x0005c428) popup_note_image_window_t2_ParamLimits

0x963b,	// (0x0005c428) popup_note_image_window_t2

0x9654,	// (0x0005c441) popup_note_image_window_t3_ParamLimits

0x9654,	// (0x0005c441) popup_note_image_window_t3

0x0002,

0xf83f,	// (0x0006262c) popup_note_image_window_t_ParamLimits

0xf83f,	// (0x0006262c) popup_note_image_window_t

0x94bd,	// (0x0005c2aa) bg_popup_window_pane_cp7_ParamLimits

0x94bd,	// (0x0005c2aa) bg_popup_window_pane_cp7

0x94ed,	// (0x0005c2da) popup_note_wait_window_g1_ParamLimits

0x94ed,	// (0x0005c2da) popup_note_wait_window_g1

0x94f9,	// (0x0005c2e6) popup_note_wait_window_g2_ParamLimits

0x94f9,	// (0x0005c2e6) popup_note_wait_window_g2

0x0002,

0xf828,	// (0x00062615) popup_note_wait_window_g_ParamLimits

0xf828,	// (0x00062615) popup_note_wait_window_g

0x9511,	// (0x0005c2fe) popup_note_wait_window_t1_ParamLimits

0x9511,	// (0x0005c2fe) popup_note_wait_window_t1

0x9538,	// (0x0005c325) popup_note_wait_window_t2_ParamLimits

0x9538,	// (0x0005c325) popup_note_wait_window_t2

0x9556,	// (0x0005c343) popup_note_wait_window_t3_ParamLimits

0x9556,	// (0x0005c343) popup_note_wait_window_t3

0x9569,	// (0x0005c356) popup_note_wait_window_t4_ParamLimits

0x9569,	// (0x0005c356) popup_note_wait_window_t4

0x0004,

0xf82f,	// (0x0006261c) popup_note_wait_window_t_ParamLimits

0xf82f,	// (0x0006261c) popup_note_wait_window_t

0x958e,	// (0x0005c37b) wait_bar_pane_ParamLimits

0x958e,	// (0x0005c37b) wait_bar_pane

0xec1f,	// (0x00061a0c) wait_anim_pane

0xec1f,	// (0x00061a0c) wait_border_pane

0xec15,	// (0x00061a02) wait_anim_pane_g1

0xec15,	// (0x00061a02) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x000624d0) wait_anim_pane_g

0x9461,	// (0x0005c24e) wait_border_pane_g1

0x946c,	// (0x0005c259) wait_border_pane_g2

0x9475,	// (0x0005c262) wait_border_pane_g3

0x0002,

0xf821,	// (0x0006260e) wait_border_pane_g

0x92cb,	// (0x0005c0b8) bg_popup_window_pane_cp16_ParamLimits

0x92cb,	// (0x0005c0b8) bg_popup_window_pane_cp16

0x93cb,	// (0x0005c1b8) indicator_popup_pane_cp4_ParamLimits

0x93cb,	// (0x0005c1b8) indicator_popup_pane_cp4

0x93df,	// (0x0005c1cc) popup_query_data_window_t1_ParamLimits

0x93df,	// (0x0005c1cc) popup_query_data_window_t1

0x93f1,	// (0x0005c1de) popup_query_data_window_t2_ParamLimits

0x93f1,	// (0x0005c1de) popup_query_data_window_t2

0x940a,	// (0x0005c1f7) popup_query_data_window_t3_ParamLimits

0x940a,	// (0x0005c1f7) popup_query_data_window_t3

0x0002,

0xf81a,	// (0x00062607) popup_query_data_window_t_ParamLimits

0xf81a,	// (0x00062607) popup_query_data_window_t

0x9424,	// (0x0005c211) query_popup_data_pane_ParamLimits

0x9424,	// (0x0005c211) query_popup_data_pane

0x9438,	// (0x0005c225) query_popup_data_pane_cp1_ParamLimits

0x9438,	// (0x0005c225) query_popup_data_pane_cp1

0x92cb,	// (0x0005c0b8) bg_popup_window_pane_cp10_ParamLimits

0x92cb,	// (0x0005c0b8) bg_popup_window_pane_cp10

0x92fd,	// (0x0005c0ea) indicator_popup_pane_ParamLimits

0x92fd,	// (0x0005c0ea) indicator_popup_pane

0x931f,	// (0x0005c10c) popup_query_code_window_t1_ParamLimits

0x931f,	// (0x0005c10c) popup_query_code_window_t1

0x9339,	// (0x0005c126) popup_query_code_window_t2_ParamLimits

0x9339,	// (0x0005c126) popup_query_code_window_t2

0x9382,	// (0x0005c16f) popup_query_code_window_t3_ParamLimits

0x9382,	// (0x0005c16f) popup_query_code_window_t3

0x0002,

0xf813,	// (0x00062600) popup_query_code_window_t_ParamLimits

0xf813,	// (0x00062600) popup_query_code_window_t

0x93b1,	// (0x0005c19e) query_popup_pane_ParamLimits

0x93b1,	// (0x0005c19e) query_popup_pane

0xee7c,	// (0x00061c69) bg_popup_window_pane_cp15_ParamLimits

0xee7c,	// (0x00061c69) bg_popup_window_pane_cp15

0xee9c,	// (0x00061c89) indicator_popup_pane_cp1_ParamLimits

0xee9c,	// (0x00061c89) indicator_popup_pane_cp1

0xeeaf,	// (0x00061c9c) indicator_popup_pane_cp2_ParamLimits

0xeeaf,	// (0x00061c9c) indicator_popup_pane_cp2

0xeeca,	// (0x00061cb7) popup_query_data_code_window_g1_ParamLimits

0xeeca,	// (0x00061cb7) popup_query_data_code_window_g1

0xeedd,	// (0x00061cca) popup_query_data_code_window_t1_ParamLimits

0xeedd,	// (0x00061cca) popup_query_data_code_window_t1

0xeeef,	// (0x00061cdc) popup_query_data_code_window_t2_ParamLimits

0xeeef,	// (0x00061cdc) popup_query_data_code_window_t2

0xef01,	// (0x00061cee) popup_query_data_code_window_t3_ParamLimits

0xef01,	// (0x00061cee) popup_query_data_code_window_t3

0xef17,	// (0x00061d04) popup_query_data_code_window_t4_ParamLimits

0xef17,	// (0x00061d04) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00062352) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00062352) popup_query_data_code_window_t

0x6add,	// (0x000598ca) list_single_midp_graphic_pane_g3

0xef31,	// (0x00061d1e) query_popup_data_pane_cp2_ParamLimits

0xef44,	// (0x00061d31) query_popup_pane_cp2_ParamLimits

0xef44,	// (0x00061d31) query_popup_pane_cp2

0xec1f,	// (0x00061a0c) bg_popup_window_pane_cp11

0x92af,	// (0x0005c09c) heading_pane_cp5

0x92b7,	// (0x0005c0a4) listscroll_popup_info_pane

0xec1f,	// (0x00061a0c) input_focus_pane_cp3

0xef5f,	// (0x00061d4c) query_popup_pane_t1

0xef6d,	// (0x00061d5a) list_popup_info_pane_ParamLimits

0xef6d,	// (0x00061d5a) list_popup_info_pane

0xef7c,	// (0x00061d69) listscroll_popup_info_pane_g1

0xef84,	// (0x00061d71) scroll_pane_cp7

0xef8e,	// (0x00061d7b) popup_info_list_pane_t1_ParamLimits

0xef8e,	// (0x00061d7b) popup_info_list_pane_t1

0xefa8,	// (0x00061d95) popup_info_list_pane_t2_ParamLimits

0xefa8,	// (0x00061d95) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0006235b) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0006235b) popup_info_list_pane_t

0xec1f,	// (0x00061a0c) bg_popup_window_pane_cp12

0xa86f,	// (0x0005d65c) find_popup_pane

0xec6d,	// (0x00061a5a) bg_popup_window_pane_cp3

0xefc2,	// (0x00061daf) heading_pane_cp3

0xefd1,	// (0x00061dbe) listscroll_popup_graphic_pane

0xec1f,	// (0x00061a0c) bg_popup_window_pane_cp4

0x53d4,	// (0x000581c1) heading_pane_cp4

0xefe1,	// (0x00061dce) listscroll_popup_colour_pane

0x53de,	// (0x000581cb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x53de,	// (0x000581cb) cell_large_graphic_colour_none_popup_pane

0x53f2,	// (0x000581df) grid_large_graphic_colour_popup_pane_ParamLimits

0x53f2,	// (0x000581df) grid_large_graphic_colour_popup_pane

0x541e,	// (0x0005820b) listscroll_popup_colour_pane_g1_ParamLimits

0x541e,	// (0x0005820b) listscroll_popup_colour_pane_g1

0x5435,	// (0x00058222) listscroll_popup_colour_pane_g2_ParamLimits

0x5435,	// (0x00058222) listscroll_popup_colour_pane_g2

0x544c,	// (0x00058239) listscroll_popup_colour_pane_g3_ParamLimits

0x544c,	// (0x00058239) listscroll_popup_colour_pane_g3

0x545c,	// (0x00058249) listscroll_popup_colour_pane_g4_ParamLimits

0x545c,	// (0x00058249) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00062360) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00062360) listscroll_popup_colour_pane_g

0xefe9,	// (0x00061dd6) scroll_pane_cp6_ParamLimits

0xefe9,	// (0x00061dd6) scroll_pane_cp6

0x5470,	// (0x0005825d) cell_large_graphic_colour_popup_pane_ParamLimits

0x5470,	// (0x0005825d) cell_large_graphic_colour_popup_pane

0xeffb,	// (0x00061de8) cell_large_graphic_colour_none_popup_pane_t1

0xec1f,	// (0x00061a0c) grid_highlight_pane_cp5

0xf00a,	// (0x00061df7) cell_large_graphic_colour_popup_pane_g1

0xf012,	// (0x00061dff) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00062369) cell_large_graphic_colour_popup_pane_g

0xf01a,	// (0x00061e07) cell_large_graphic_colour_popup_pane_g2_copy1

0xf023,	// (0x00061e10) grid_highlight_pane_cp4

0xf02b,	// (0x00061e18) bg_popup_window_pane_cp8_ParamLimits

0xf02b,	// (0x00061e18) bg_popup_window_pane_cp8

0xf046,	// (0x00061e33) popup_snote_single_text_window_g1_ParamLimits

0xf046,	// (0x00061e33) popup_snote_single_text_window_g1

0xf058,	// (0x00061e45) popup_snote_single_text_window_t1_ParamLimits

0xf058,	// (0x00061e45) popup_snote_single_text_window_t1

0xf06b,	// (0x00061e58) popup_snote_single_text_window_t2_ParamLimits

0xf06b,	// (0x00061e58) popup_snote_single_text_window_t2

0xf07e,	// (0x00061e6b) popup_snote_single_text_window_t3_ParamLimits

0xf07e,	// (0x00061e6b) popup_snote_single_text_window_t3

0xf0b7,	// (0x00061ea4) popup_snote_single_text_window_t4_ParamLimits

0xf0b7,	// (0x00061ea4) popup_snote_single_text_window_t4

0xf0eb,	// (0x00061ed8) popup_snote_single_text_window_t5_ParamLimits

0xf0eb,	// (0x00061ed8) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0006236e) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0006236e) popup_snote_single_text_window_t

0xf11a,	// (0x00061f07) bg_popup_window_pane_cp9_ParamLimits

0xf11a,	// (0x00061f07) bg_popup_window_pane_cp9

0xf046,	// (0x00061e33) popup_snote_single_graphic_window_g1_ParamLimits

0xf046,	// (0x00061e33) popup_snote_single_graphic_window_g1

0xf128,	// (0x00061f15) popup_snote_single_graphic_window_g2_ParamLimits

0xf128,	// (0x00061f15) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00062379) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00062379) popup_snote_single_graphic_window_g

0xf134,	// (0x00061f21) popup_snote_single_graphic_window_t1_ParamLimits

0xf134,	// (0x00061f21) popup_snote_single_graphic_window_t1

0xf147,	// (0x00061f34) popup_snote_single_graphic_window_t2_ParamLimits

0xf147,	// (0x00061f34) popup_snote_single_graphic_window_t2

0xf15a,	// (0x00061f47) popup_snote_single_graphic_window_t3_ParamLimits

0xf15a,	// (0x00061f47) popup_snote_single_graphic_window_t3

0xf193,	// (0x00061f80) popup_snote_single_graphic_window_t4_ParamLimits

0xf193,	// (0x00061f80) popup_snote_single_graphic_window_t4

0xf1c7,	// (0x00061fb4) popup_snote_single_graphic_window_t5_ParamLimits

0xf1c7,	// (0x00061fb4) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0006237e) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0006237e) popup_snote_single_graphic_window_t

0xa7ad,	// (0x0005d59a) grid_graphic_popup_pane_ParamLimits

0xa7ad,	// (0x0005d59a) grid_graphic_popup_pane

0xa7db,	// (0x0005d5c8) listscroll_popup_graphic_pane_g1_ParamLimits

0xa7db,	// (0x0005d5c8) listscroll_popup_graphic_pane_g1

0xa7ef,	// (0x0005d5dc) listscroll_popup_graphic_pane_g2_ParamLimits

0xa7ef,	// (0x0005d5dc) listscroll_popup_graphic_pane_g2

0x0001,

0xf990,	// (0x0006277d) listscroll_popup_graphic_pane_g_ParamLimits

0xf990,	// (0x0006277d) listscroll_popup_graphic_pane_g

0xa803,	// (0x0005d5f0) scroll_pane_cp5

0xa745,	// (0x0005d532) cell_graphic_popup_pane_ParamLimits

0xa745,	// (0x0005d532) cell_graphic_popup_pane

0xa726,	// (0x0005d513) cell_graphic_popup_pane_g1

0xa72e,	// (0x0005d51b) cell_graphic_popup_pane_g2

0xf01a,	// (0x00061e07) cell_graphic_popup_pane_g3

0x0002,

0xf989,	// (0x00062776) cell_graphic_popup_pane_g

0xa737,	// (0x0005d524) cell_graphic_popup_pane_t2

0xf023,	// (0x00061e10) grid_highlight_pane_cp3

0xf208,	// (0x00061ff5) list_gen_pane_ParamLimits

0xf208,	// (0x00061ff5) list_gen_pane

0xf230,	// (0x0006201d) scroll_pane

0xa67e,	// (0x0005d46b) bg_list_pane_g1_ParamLimits

0xa67e,	// (0x0005d46b) bg_list_pane_g1

0xa69b,	// (0x0005d488) bg_list_pane_g2_ParamLimits

0xa69b,	// (0x0005d488) bg_list_pane_g2

0xa6b0,	// (0x0005d49d) bg_list_pane_g3_ParamLimits

0xa6b0,	// (0x0005d49d) bg_list_pane_g3

0xa6c4,	// (0x0005d4b1) bg_list_pane_g4_ParamLimits

0xa6c4,	// (0x0005d4b1) bg_list_pane_g4

0xa6d8,	// (0x0005d4c5) bg_list_pane_g5_ParamLimits

0xa6d8,	// (0x0005d4c5) bg_list_pane_g5

0x0004,

0xf97e,	// (0x0006276b) bg_list_pane_g_ParamLimits

0xf97e,	// (0x0006276b) bg_list_pane_g

0xa616,	// (0x0005d403) list_double2_graphic_large_graphic_pane_ParamLimits

0xa616,	// (0x0005d403) list_double2_graphic_large_graphic_pane

0xa616,	// (0x0005d403) list_double2_graphic_pane_ParamLimits

0xa616,	// (0x0005d403) list_double2_graphic_pane

0xa616,	// (0x0005d403) list_double2_large_graphic_pane_ParamLimits

0xa616,	// (0x0005d403) list_double2_large_graphic_pane

0x6eac,	// (0x00059c99) list_double2_pane_ParamLimits

0x6eac,	// (0x00059c99) list_double2_pane

0xa616,	// (0x0005d403) list_double_graphic_heading_pane_ParamLimits

0xa616,	// (0x0005d403) list_double_graphic_heading_pane

0xa616,	// (0x0005d403) list_double_graphic_pane_ParamLimits

0xa616,	// (0x0005d403) list_double_graphic_pane

0xa616,	// (0x0005d403) list_double_heading_pane_ParamLimits

0xa616,	// (0x0005d403) list_double_heading_pane

0xa616,	// (0x0005d403) list_double_large_graphic_pane_ParamLimits

0xa616,	// (0x0005d403) list_double_large_graphic_pane

0xa616,	// (0x0005d403) list_double_number_pane_ParamLimits

0xa616,	// (0x0005d403) list_double_number_pane

0xa616,	// (0x0005d403) list_double_pane_ParamLimits

0xa616,	// (0x0005d403) list_double_pane

0xa616,	// (0x0005d403) list_double_time_pane_ParamLimits

0xa616,	// (0x0005d403) list_double_time_pane

0xa616,	// (0x0005d403) list_setting_number_pane_ParamLimits

0xa616,	// (0x0005d403) list_setting_number_pane

0xa616,	// (0x0005d403) list_setting_pane_ParamLimits

0xa616,	// (0x0005d403) list_setting_pane

0x9c6a,	// (0x0005ca57) list_single_2graphic_pane_ParamLimits

0x9c6a,	// (0x0005ca57) list_single_2graphic_pane

0x9c6a,	// (0x0005ca57) list_single_graphic_heading_pane_ParamLimits

0x9c6a,	// (0x0005ca57) list_single_graphic_heading_pane

0x9c6a,	// (0x0005ca57) list_single_graphic_pane_ParamLimits

0x9c6a,	// (0x0005ca57) list_single_graphic_pane

0x9c6a,	// (0x0005ca57) list_single_heading_pane_ParamLimits

0x9c6a,	// (0x0005ca57) list_single_heading_pane

0xa663,	// (0x0005d450) list_single_large_graphic_pane_ParamLimits

0xa663,	// (0x0005d450) list_single_large_graphic_pane

0x9c6a,	// (0x0005ca57) list_single_number_heading_pane_ParamLimits

0x9c6a,	// (0x0005ca57) list_single_number_heading_pane

0x9c6a,	// (0x0005ca57) list_single_number_pane_ParamLimits

0x9c6a,	// (0x0005ca57) list_single_number_pane

0x9c6a,	// (0x0005ca57) list_single_pane_ParamLimits

0x9c6a,	// (0x0005ca57) list_single_pane

0xec1f,	// (0x00061a0c) list_highlight_pane_cp1

0x54a7,	// (0x00058294) list_single_pane_g1_ParamLimits

0x54a7,	// (0x00058294) list_single_pane_g1

0x54b3,	// (0x000582a0) list_single_pane_g2_ParamLimits

0x54b3,	// (0x000582a0) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0006239a) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0006239a) list_single_pane_g

0x6e96,	// (0x00059c83) list_single_pane_t1_ParamLimits

0x6e96,	// (0x00059c83) list_single_pane_t1

0x54a7,	// (0x00058294) list_single_number_pane_g1_ParamLimits

0x54a7,	// (0x00058294) list_single_number_pane_g1

0x54b3,	// (0x000582a0) list_single_number_pane_g2_ParamLimits

0x54b3,	// (0x000582a0) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0006239a) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0006239a) list_single_number_pane_g

0x6dc0,	// (0x00059bad) list_single_number_pane_t1_ParamLimits

0x6dc0,	// (0x00059bad) list_single_number_pane_t1

0x6dd6,	// (0x00059bc3) list_single_number_pane_t2_ParamLimits

0x6dd6,	// (0x00059bc3) list_single_number_pane_t2

0x0001,

0xf93f,	// (0x0006272c) list_single_number_pane_t_ParamLimits

0xf93f,	// (0x0006272c) list_single_number_pane_t

0x549b,	// (0x00058288) list_single_graphic_pane_g1_ParamLimits

0x549b,	// (0x00058288) list_single_graphic_pane_g1

0x54a7,	// (0x00058294) list_single_graphic_pane_g2_ParamLimits

0x54a7,	// (0x00058294) list_single_graphic_pane_g2

0x54b3,	// (0x000582a0) list_single_graphic_pane_g3_ParamLimits

0x54b3,	// (0x000582a0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00062389) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00062389) list_single_graphic_pane_g

0x54bf,	// (0x000582ac) list_single_graphic_pane_t1_ParamLimits

0x54bf,	// (0x000582ac) list_single_graphic_pane_t1

0x54d5,	// (0x000582c2) list_single_heading_pane_g1_ParamLimits

0x54d5,	// (0x000582c2) list_single_heading_pane_g1

0x54b3,	// (0x000582a0) list_single_heading_pane_g2_ParamLimits

0x54b3,	// (0x000582a0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00062390) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00062390) list_single_heading_pane_g

0x54e8,	// (0x000582d5) list_single_heading_pane_t1_ParamLimits

0x54e8,	// (0x000582d5) list_single_heading_pane_t1

0x54fe,	// (0x000582eb) list_single_heading_pane_t2_ParamLimits

0x54fe,	// (0x000582eb) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00062395) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00062395) list_single_heading_pane_t

0x54a7,	// (0x00058294) list_single_number_heading_pane_g1_ParamLimits

0x54a7,	// (0x00058294) list_single_number_heading_pane_g1

0x54b3,	// (0x000582a0) list_single_number_heading_pane_g2_ParamLimits

0x54b3,	// (0x000582a0) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0006239a) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0006239a) list_single_number_heading_pane_g

0x5510,	// (0x000582fd) list_single_number_heading_pane_t1_ParamLimits

0x5510,	// (0x000582fd) list_single_number_heading_pane_t1

0x5526,	// (0x00058313) list_single_number_heading_pane_t2_ParamLimits

0x5526,	// (0x00058313) list_single_number_heading_pane_t2

0x5538,	// (0x00058325) list_single_number_heading_pane_t3_ParamLimits

0x5538,	// (0x00058325) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0006239f) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0006239f) list_single_number_heading_pane_t

0x554a,	// (0x00058337) list_single_graphic_heading_pane_g1_ParamLimits

0x554a,	// (0x00058337) list_single_graphic_heading_pane_g1

0x5556,	// (0x00058343) list_single_graphic_heading_pane_g4_ParamLimits

0x5556,	// (0x00058343) list_single_graphic_heading_pane_g4

0x54b3,	// (0x000582a0) list_single_graphic_heading_pane_g5_ParamLimits

0x54b3,	// (0x000582a0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x000623a6) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x000623a6) list_single_graphic_heading_pane_g

0x5510,	// (0x000582fd) list_single_graphic_heading_pane_t1_ParamLimits

0x5510,	// (0x000582fd) list_single_graphic_heading_pane_t1

0x5567,	// (0x00058354) list_single_graphic_heading_pane_t2_ParamLimits

0x5567,	// (0x00058354) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x000623ad) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x000623ad) list_single_graphic_heading_pane_t

0x5579,	// (0x00058366) list_single_large_graphic_pane_g1_ParamLimits

0x5579,	// (0x00058366) list_single_large_graphic_pane_g1

0x54a7,	// (0x00058294) list_single_large_graphic_pane_g2_ParamLimits

0x54a7,	// (0x00058294) list_single_large_graphic_pane_g2

0x54b3,	// (0x000582a0) list_single_large_graphic_pane_g3_ParamLimits

0x54b3,	// (0x000582a0) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x000623b2) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x000623b2) list_single_large_graphic_pane_g

0x946c,	// (0x0005c259) wait_border_pane_g2_copy1

0x5585,	// (0x00058372) list_single_large_graphic_pane_g4_cp2

0x558d,	// (0x0005837a) list_single_large_graphic_pane_t1_ParamLimits

0x558d,	// (0x0005837a) list_single_large_graphic_pane_t1

0x8273,	// (0x0005b060) list_double_pane_g1_ParamLimits

0x8273,	// (0x0005b060) list_double_pane_g1

0x55a3,	// (0x00058390) list_double_pane_g2_ParamLimits

0x55a3,	// (0x00058390) list_double_pane_g2

0x0001,

0xf5cc,	// (0x000623b9) list_double_pane_g_ParamLimits

0xf5cc,	// (0x000623b9) list_double_pane_g

0x55af,	// (0x0005839c) list_double_pane_t1_ParamLimits

0x55af,	// (0x0005839c) list_double_pane_t1

0x55c5,	// (0x000583b2) list_double_pane_t2_ParamLimits

0x55c5,	// (0x000583b2) list_double_pane_t2

0x0001,

0xf5d1,	// (0x000623be) list_double_pane_t_ParamLimits

0xf5d1,	// (0x000623be) list_double_pane_t

0x55d7,	// (0x000583c4) list_double2_pane_g1_ParamLimits

0x55d7,	// (0x000583c4) list_double2_pane_g1

0x55e8,	// (0x000583d5) list_double2_pane_g2_ParamLimits

0x55e8,	// (0x000583d5) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x000623c3) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x000623c3) list_double2_pane_g

0x55f4,	// (0x000583e1) list_double2_pane_t1_ParamLimits

0x55f4,	// (0x000583e1) list_double2_pane_t1

0x560a,	// (0x000583f7) list_double2_pane_t2_ParamLimits

0x560a,	// (0x000583f7) list_double2_pane_t2

0x0001,

0xf5db,	// (0x000623c8) list_double2_pane_t_ParamLimits

0xf5db,	// (0x000623c8) list_double2_pane_t

0x8273,	// (0x0005b060) list_double_number_pane_g1_ParamLimits

0x8273,	// (0x0005b060) list_double_number_pane_g1

0x55a3,	// (0x00058390) list_double_number_pane_g2_ParamLimits

0x55a3,	// (0x00058390) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x000623b9) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x000623b9) list_double_number_pane_g

0x561c,	// (0x00058409) list_double_number_pane_t1_ParamLimits

0x561c,	// (0x00058409) list_double_number_pane_t1

0x562e,	// (0x0005841b) list_double_number_pane_t2_ParamLimits

0x562e,	// (0x0005841b) list_double_number_pane_t2

0x5644,	// (0x00058431) list_double_number_pane_t3_ParamLimits

0x5644,	// (0x00058431) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x000623cd) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x000623cd) list_double_number_pane_t

0x5656,	// (0x00058443) list_double_graphic_pane_g1_ParamLimits

0x5656,	// (0x00058443) list_double_graphic_pane_g1

0x5662,	// (0x0005844f) list_double_graphic_pane_g2_ParamLimits

0x5662,	// (0x0005844f) list_double_graphic_pane_g2

0x5671,	// (0x0005845e) list_double_graphic_pane_g3_ParamLimits

0x5671,	// (0x0005845e) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x000623d4) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x000623d4) list_double_graphic_pane_g

0x5689,	// (0x00058476) list_double_graphic_pane_t1_ParamLimits

0x5689,	// (0x00058476) list_double_graphic_pane_t1

0x569f,	// (0x0005848c) list_double_graphic_pane_t2_ParamLimits

0x569f,	// (0x0005848c) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x000623dd) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x000623dd) list_double_graphic_pane_t

0x56b1,	// (0x0005849e) list_double2_graphic_pane_g1_ParamLimits

0x56b1,	// (0x0005849e) list_double2_graphic_pane_g1

0x56bd,	// (0x000584aa) list_double2_graphic_pane_g2_ParamLimits

0x56bd,	// (0x000584aa) list_double2_graphic_pane_g2

0x56c9,	// (0x000584b6) list_double2_graphic_pane_g3_ParamLimits

0x56c9,	// (0x000584b6) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x000623e2) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x000623e2) list_double2_graphic_pane_g

0x56d5,	// (0x000584c2) list_double2_graphic_pane_t1_ParamLimits

0x56d5,	// (0x000584c2) list_double2_graphic_pane_t1

0x56eb,	// (0x000584d8) list_double2_graphic_pane_t2_ParamLimits

0x56eb,	// (0x000584d8) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x000623e9) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x000623e9) list_double2_graphic_pane_t

0x56fd,	// (0x000584ea) list_double_large_graphic_pane_g1_ParamLimits

0x56fd,	// (0x000584ea) list_double_large_graphic_pane_g1

0x571c,	// (0x00058509) list_double_large_graphic_pane_g2_ParamLimits

0x571c,	// (0x00058509) list_double_large_graphic_pane_g2

0x55a3,	// (0x00058390) list_double_large_graphic_pane_g3_ParamLimits

0x55a3,	// (0x00058390) list_double_large_graphic_pane_g3

0x5732,	// (0x0005851f) list_double_large_graphic_pane_g4_ParamLimits

0x5732,	// (0x0005851f) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x000623ee) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000623ee) list_double_large_graphic_pane_g

0x575a,	// (0x00058547) list_double_large_graphic_pane_t1_ParamLimits

0x575a,	// (0x00058547) list_double_large_graphic_pane_t1

0x5773,	// (0x00058560) list_double_large_graphic_pane_t2_ParamLimits

0x5773,	// (0x00058560) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x000623f9) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x000623f9) list_double_large_graphic_pane_t

0x5785,	// (0x00058572) list_double2_large_graphic_pane_g1_ParamLimits

0x5785,	// (0x00058572) list_double2_large_graphic_pane_g1

0x5791,	// (0x0005857e) list_double2_large_graphic_pane_g2_ParamLimits

0x5791,	// (0x0005857e) list_double2_large_graphic_pane_g2

0x56c9,	// (0x000584b6) list_double2_large_graphic_pane_g3_ParamLimits

0x56c9,	// (0x000584b6) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x000623fe) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x000623fe) list_double2_large_graphic_pane_g

0x57a2,	// (0x0005858f) list_double2_large_graphic_pane_t1_ParamLimits

0x57a2,	// (0x0005858f) list_double2_large_graphic_pane_t1

0x57b8,	// (0x000585a5) list_double2_large_graphic_pane_t2_ParamLimits

0x57b8,	// (0x000585a5) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00062405) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00062405) list_double2_large_graphic_pane_t

0x57ca,	// (0x000585b7) list_double_heading_pane_g1_ParamLimits

0x57ca,	// (0x000585b7) list_double_heading_pane_g1

0x57db,	// (0x000585c8) list_double_heading_pane_g2_ParamLimits

0x57db,	// (0x000585c8) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0006240a) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0006240a) list_double_heading_pane_g

0x57e7,	// (0x000585d4) list_double_heading_pane_t1_ParamLimits

0x57e7,	// (0x000585d4) list_double_heading_pane_t1

0x57fd,	// (0x000585ea) list_double_heading_pane_t2_ParamLimits

0x57fd,	// (0x000585ea) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0006240f) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0006240f) list_double_heading_pane_t

0x580f,	// (0x000585fc) list_double_graphic_heading_pane_g1_ParamLimits

0x580f,	// (0x000585fc) list_double_graphic_heading_pane_g1

0x57ca,	// (0x000585b7) list_double_graphic_heading_pane_g2_ParamLimits

0x57ca,	// (0x000585b7) list_double_graphic_heading_pane_g2

0x57db,	// (0x000585c8) list_double_graphic_heading_pane_g3_ParamLimits

0x57db,	// (0x000585c8) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00062414) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00062414) list_double_graphic_heading_pane_g

0x581b,	// (0x00058608) list_double_graphic_heading_pane_t1_ParamLimits

0x581b,	// (0x00058608) list_double_graphic_heading_pane_t1

0x5831,	// (0x0005861e) list_double_graphic_heading_pane_t2_ParamLimits

0x5831,	// (0x0005861e) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0006241b) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0006241b) list_double_graphic_heading_pane_t

0x5843,	// (0x00058630) list_double_time_pane_g1_ParamLimits

0x5843,	// (0x00058630) list_double_time_pane_g1

0x5854,	// (0x00058641) list_double_time_pane_g2_ParamLimits

0x5854,	// (0x00058641) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00062420) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00062420) list_double_time_pane_g

0x5860,	// (0x0005864d) list_double_time_pane_t1_ParamLimits

0x5860,	// (0x0005864d) list_double_time_pane_t1

0x5876,	// (0x00058663) list_double_time_pane_t2_ParamLimits

0x5876,	// (0x00058663) list_double_time_pane_t2

0x5888,	// (0x00058675) list_double_time_pane_t3_ParamLimits

0x5888,	// (0x00058675) list_double_time_pane_t3

0x589a,	// (0x00058687) list_double_time_pane_t4_ParamLimits

0x589a,	// (0x00058687) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00062425) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00062425) list_double_time_pane_t

0x58ac,	// (0x00058699) list_setting_pane_g1_ParamLimits

0x58ac,	// (0x00058699) list_setting_pane_g1

0x58b8,	// (0x000586a5) list_setting_pane_g2_ParamLimits

0x58b8,	// (0x000586a5) list_setting_pane_g2

0x0001,

0xf641,	// (0x0006242e) list_setting_pane_g_ParamLimits

0xf641,	// (0x0006242e) list_setting_pane_g

0x58c4,	// (0x000586b1) list_setting_pane_t1_ParamLimits

0x58c4,	// (0x000586b1) list_setting_pane_t1

0x58de,	// (0x000586cb) list_setting_pane_t2_ParamLimits

0x58de,	// (0x000586cb) list_setting_pane_t2

0x0002,

0xf646,	// (0x00062433) list_setting_pane_t_ParamLimits

0xf646,	// (0x00062433) list_setting_pane_t

0x591d,	// (0x0005870a) set_value_pane_cp_ParamLimits

0x591d,	// (0x0005870a) set_value_pane_cp

0x592b,	// (0x00058718) list_setting_number_pane_g1_ParamLimits

0x592b,	// (0x00058718) list_setting_number_pane_g1

0x5937,	// (0x00058724) list_setting_number_pane_g2_ParamLimits

0x5937,	// (0x00058724) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0006243a) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0006243a) list_setting_number_pane_g

0x5943,	// (0x00058730) list_setting_number_pane_t1_ParamLimits

0x5943,	// (0x00058730) list_setting_number_pane_t1

0x595c,	// (0x00058749) list_setting_number_pane_t2_ParamLimits

0x595c,	// (0x00058749) list_setting_number_pane_t2

0x5976,	// (0x00058763) list_setting_number_pane_t3_ParamLimits

0x5976,	// (0x00058763) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0006243f) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0006243f) list_setting_number_pane_t

0x591d,	// (0x0005870a) set_value_pane_ParamLimits

0x591d,	// (0x0005870a) set_value_pane

0xf264,	// (0x00062051) bg_set_opt_pane_ParamLimits

0xf264,	// (0x00062051) bg_set_opt_pane

0x39dc,	// (0x000567c9) set_value_pane_t1

0xf285,	// (0x00062072) slider_set_pane_cp3

0xf28e,	// (0x0006207b) volume_small_pane_cp

0xf297,	// (0x00062084) list_form_gen_pane

0xf2a0,	// (0x0006208d) scroll_pane_cp8

0x59b9,	// (0x000587a6) form_field_data_pane_ParamLimits

0x59b9,	// (0x000587a6) form_field_data_pane

0x59d9,	// (0x000587c6) form_field_data_wide_pane_ParamLimits

0x59d9,	// (0x000587c6) form_field_data_wide_pane

0x5a00,	// (0x000587ed) form_field_popup_pane_ParamLimits

0x5a00,	// (0x000587ed) form_field_popup_pane

0x39fa,	// (0x000567e7) form_field_popup_wide_pane_ParamLimits

0x39fa,	// (0x000567e7) form_field_popup_wide_pane

0x3a1b,	// (0x00056808) form_field_slider_pane_ParamLimits

0x3a1b,	// (0x00056808) form_field_slider_pane

0x3a2e,	// (0x0005681b) form_field_slider_wide_pane_ParamLimits

0x3a2e,	// (0x0005681b) form_field_slider_wide_pane

0xf2b1,	// (0x0006209e) data_form_pane

0x5a2c,	// (0x00058819) form_field_data_pane_t1

0xf2bd,	// (0x000620aa) input_focus_pane

0x3a41,	// (0x0005682e) data_form_wide_pane

0x3a5e,	// (0x0005684b) form_field_data_wide_pane_t1

0xf038,	// (0x00061e25) input_focus_pane_cp6

0x5a46,	// (0x00058833) form_field_popup_pane_t1

0xf2bd,	// (0x000620aa) input_focus_pane_cp7

0xf2eb,	// (0x000620d8) list_form_pane

0x3a88,	// (0x00056875) form_field_popup_wide_pane_t1

0xf2bd,	// (0x000620aa) input_focus_pane_cp8

0xf2f7,	// (0x000620e4) list_form_wide_pane

0x5a68,	// (0x00058855) form_field_slider_pane_t1_ParamLimits

0x5a68,	// (0x00058855) form_field_slider_pane_t1

0x5a80,	// (0x0005886d) form_field_slider_pane_t2_ParamLimits

0x5a80,	// (0x0005886d) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0006244f) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0006244f) form_field_slider_pane_t

0xeda0,	// (0x00061b8d) input_focus_pane_cp9_ParamLimits

0xeda0,	// (0x00061b8d) input_focus_pane_cp9

0x5a95,	// (0x00058882) slider_cont_pane_ParamLimits

0x5a95,	// (0x00058882) slider_cont_pane

0xf303,	// (0x000620f0) form_field_slider_wide_pane_t1_ParamLimits

0xf303,	// (0x000620f0) form_field_slider_wide_pane_t1

0x3a9d,	// (0x0005688a) form_field_slider_wide_pane_t2_ParamLimits

0x3a9d,	// (0x0005688a) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00062454) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00062454) form_field_slider_wide_pane_t

0xeda0,	// (0x00061b8d) input_focus_pane_cp10_ParamLimits

0xeda0,	// (0x00061b8d) input_focus_pane_cp10

0x5aa9,	// (0x00058896) slider_cont_pane_cp1_ParamLimits

0x5aa9,	// (0x00058896) slider_cont_pane_cp1

0x5abd,	// (0x000588aa) slider_form_pane_cp

0xf315,	// (0x00062102) input_focus_pane_g1

0xf31d,	// (0x0006210a) input_focus_pane_g2

0xf325,	// (0x00062112) input_focus_pane_g3

0xf32d,	// (0x0006211a) input_focus_pane_g4

0xf335,	// (0x00062122) input_focus_pane_g5

0xf33d,	// (0x0006212a) input_focus_pane_g6

0xf345,	// (0x00062132) input_focus_pane_g7

0xf34d,	// (0x0006213a) input_focus_pane_g8

0xf355,	// (0x00062142) input_focus_pane_g9

0xec15,	// (0x00061a02) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00062459) input_focus_pane_g

0x9475,	// (0x0005c262) wait_border_pane_g3_copy1

0x5ac5,	// (0x000588b2) data_form_pane_t1

0xec15,	// (0x00061a02) wait_anim_pane_g1_copy1

0x6e60,	// (0x00059c4d) data_form_wide_pane_t1

0x3aaf,	// (0x0005689c) list_form_graphic_pane_cp_ParamLimits

0x3aaf,	// (0x0005689c) list_form_graphic_pane_cp

0xa5ba,	// (0x0005d3a7) slider_form_pane_g1

0xa5c3,	// (0x0005d3b0) slider_form_pane_g2

0x0006,

0xf96f,	// (0x0006275c) slider_form_pane_g

0x3aaf,	// (0x0005689c) list_form_graphic_pane_ParamLimits

0x3aaf,	// (0x0005689c) list_form_graphic_pane

0x3ac1,	// (0x000568ae) list_form_graphic_pane_g1

0x3ac9,	// (0x000568b6) list_form_graphic_pane_t1_ParamLimits

0x3ac9,	// (0x000568b6) list_form_graphic_pane_t1

0xec6d,	// (0x00061a5a) list_highlight_pane_cp5_ParamLimits

0xec6d,	// (0x00061a5a) list_highlight_pane_cp5

0x5ae4,	// (0x000588d1) find_pane_g1

0xf35d,	// (0x0006214a) input_find_pane

0x5aed,	// (0x000588da) input_find_pane_g1_ParamLimits

0x5aed,	// (0x000588da) input_find_pane_g1

0x5af9,	// (0x000588e6) input_find_pane_t1_ParamLimits

0x5af9,	// (0x000588e6) input_find_pane_t1

0x5b0e,	// (0x000588fb) input_find_pane_t2_ParamLimits

0x5b0e,	// (0x000588fb) input_find_pane_t2

0x0001,

0xf681,	// (0x0006246e) input_find_pane_t_ParamLimits

0xf681,	// (0x0006246e) input_find_pane_t

0xf366,	// (0x00062153) input_focus_pane_cp5_ParamLimits

0xf366,	// (0x00062153) input_focus_pane_cp5

0xf379,	// (0x00062166) bg_popup_window_pane_cp2_ParamLimits

0xf379,	// (0x00062166) bg_popup_window_pane_cp2

0xf386,	// (0x00062173) listscroll_menu_pane_ParamLimits

0xf386,	// (0x00062173) listscroll_menu_pane

0x5b2f,	// (0x0005891c) popup_submenu_window_ParamLimits

0x5b2f,	// (0x0005891c) popup_submenu_window

0xf392,	// (0x0006217f) find_popup_pane_g1

0xf39a,	// (0x00062187) input_popup_find_pane_cp

0xf3a4,	// (0x00062191) input_focus_pane_cp4_ParamLimits

0xf3a4,	// (0x00062191) input_focus_pane_cp4

0xf3b2,	// (0x0006219f) input_popup_find_pane_t1_ParamLimits

0xf3b2,	// (0x0006219f) input_popup_find_pane_t1

0xec1f,	// (0x00061a0c) bg_popup_sub_pane_cp

0xf3e0,	// (0x000621cd) listscroll_popup_sub_pane

0xf3e8,	// (0x000621d5) list_submenu_pane_ParamLimits

0xf3e8,	// (0x000621d5) list_submenu_pane

0xf3f9,	// (0x000621e6) scroll_pane_cp4

0xf401,	// (0x000621ee) list_single_popup_submenu_pane_ParamLimits

0xf401,	// (0x000621ee) list_single_popup_submenu_pane

0xf416,	// (0x00062203) list_single_popup_submenu_pane_g1

0xf41e,	// (0x0006220b) list_single_popup_submenu_pane_t1_ParamLimits

0xf41e,	// (0x0006220b) list_single_popup_submenu_pane_t1

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp1_ParamLimits

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp1

0x5b6d,	// (0x0005895a) tabs_2_active_pane_g1

0x5b75,	// (0x00058962) tabs_2_active_pane_t1

0xec6d,	// (0x00061a5a) bg_passive_tab_pane_cp1_ParamLimits

0xec6d,	// (0x00061a5a) bg_passive_tab_pane_cp1

0x5b6d,	// (0x0005895a) tabs_2_passive_pane_g1

0x5b75,	// (0x00058962) tabs_2_passive_pane_t1

0x5b87,	// (0x00058974) bg_active_tab_pane_cp4

0x5b95,	// (0x00058982) tabs_2_long_active_pane_t1

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp4

0x6ae5,	// (0x000598d2) list_single_midp_graphic_pane_g4_ParamLimits

0x5b87,	// (0x00058974) bg_active_tab_pane_cp5

0x5bb4,	// (0x000589a1) tabs_3_long_active_pane_t1

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp5

0x6ae5,	// (0x000598d2) list_single_midp_graphic_pane_g4

0xec6d,	// (0x00061a5a) bg_popup_window_pane_cp13_ParamLimits

0xec6d,	// (0x00061a5a) bg_popup_window_pane_cp13

0xf43c,	// (0x00062229) listscroll_popup_fast_pane_ParamLimits

0xf43c,	// (0x00062229) listscroll_popup_fast_pane

0xf44b,	// (0x00062238) grid_popup_fast_pane_ParamLimits

0xf44b,	// (0x00062238) grid_popup_fast_pane

0xf45d,	// (0x0006224a) scroll_pane_cp9_ParamLimits

0xf45d,	// (0x0006224a) scroll_pane_cp9

0xbf29,	// (0x0005ed16) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbf29,	// (0x0005ed16) list_single_graphic_hl_pane_t1_cp2

0xf481,	// (0x0006226e) input_focus_pane_cp20_ParamLimits

0xf481,	// (0x0006226e) input_focus_pane_cp20

0xf48f,	// (0x0006227c) query_popup_data_pane_t1_ParamLimits

0xf48f,	// (0x0006227c) query_popup_data_pane_t1

0xf4a2,	// (0x0006228f) query_popup_data_pane_t2_ParamLimits

0xf4a2,	// (0x0006228f) query_popup_data_pane_t2

0xf4e8,	// (0x000622d5) query_popup_data_pane_t3_ParamLimits

0xf4e8,	// (0x000622d5) query_popup_data_pane_t3

0x1258,	// (0x00054045) query_popup_data_pane_t4_ParamLimits

0x1258,	// (0x00054045) query_popup_data_pane_t4

0x1294,	// (0x00054081) query_popup_data_pane_t5_ParamLimits

0x1294,	// (0x00054081) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00062473) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00062473) query_popup_data_pane_t

0xf315,	// (0x00062102) bg_set_opt_pane_g1

0xf31d,	// (0x0006210a) bg_set_opt_pane_g2

0xf325,	// (0x00062112) bg_set_opt_pane_g3

0xf32d,	// (0x0006211a) bg_set_opt_pane_g4

0xf335,	// (0x00062122) bg_set_opt_pane_g5

0xf33d,	// (0x0006212a) bg_set_opt_pane_g6

0xf345,	// (0x00062132) bg_set_opt_pane_g7

0xf34d,	// (0x0006213a) bg_set_opt_pane_g8

0xf355,	// (0x00062142) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0006247e) bg_set_opt_pane_g

0x610c,	// (0x00058ef9) control_top_pane_stacon_ParamLimits

0x610c,	// (0x00058ef9) control_top_pane_stacon

0x615f,	// (0x00058f4c) signal_pane_stacon_ParamLimits

0x615f,	// (0x00058f4c) signal_pane_stacon

0x827f,	// (0x0005b06c) stacon_top_pane_g1_ParamLimits

0x827f,	// (0x0005b06c) stacon_top_pane_g1

0x6184,	// (0x00058f71) title_pane_stacon_ParamLimits

0x6184,	// (0x00058f71) title_pane_stacon

0x61ae,	// (0x00058f9b) uni_indicator_pane_stacon_ParamLimits

0x61ae,	// (0x00058f9b) uni_indicator_pane_stacon

0x61c3,	// (0x00058fb0) battery_pane_stacon_ParamLimits

0x61c3,	// (0x00058fb0) battery_pane_stacon

0x6207,	// (0x00058ff4) control_bottom_pane_stacon_ParamLimits

0x6207,	// (0x00058ff4) control_bottom_pane_stacon

0x622a,	// (0x00059017) navi_pane_stacon_ParamLimits

0x622a,	// (0x00059017) navi_pane_stacon

0x82a1,	// (0x0005b08e) stacon_bottom_pane_g1_ParamLimits

0x82a1,	// (0x0005b08e) stacon_bottom_pane_g1

0x5bc6,	// (0x000589b3) aid_levels_signal_lsc_ParamLimits

0x5bc6,	// (0x000589b3) aid_levels_signal_lsc

0x5bdd,	// (0x000589ca) signal_pane_stacon_g1_ParamLimits

0x5bdd,	// (0x000589ca) signal_pane_stacon_g1

0x5bf1,	// (0x000589de) signal_pane_stacon_g2_ParamLimits

0x5bf1,	// (0x000589de) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00062491) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00062491) signal_pane_stacon_g

0x5c26,	// (0x00058a13) title_pane_stacon_t1_ParamLimits

0x5c26,	// (0x00058a13) title_pane_stacon_t1

0x12ec,	// (0x000540d9) uni_indicator_pane_stacon_g1

0x12f6,	// (0x000540e3) uni_indicator_pane_stacon_g2

0x12d8,	// (0x000540c5) uni_indicator_pane_stacon_g3

0x12e2,	// (0x000540cf) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0006249d) uni_indicator_pane_stacon_g

0x5c4b,	// (0x00058a38) control_top_pane_stacon_g1

0x5c53,	// (0x00058a40) control_top_pane_stacon_t1_ParamLimits

0x5c53,	// (0x00058a40) control_top_pane_stacon_t1

0x5c8a,	// (0x00058a77) aid_levels_battery_lsc_ParamLimits

0x5c8a,	// (0x00058a77) aid_levels_battery_lsc

0x5ca2,	// (0x00058a8f) battery_pane_stacon_g1_ParamLimits

0x5ca2,	// (0x00058a8f) battery_pane_stacon_g1

0x5cb4,	// (0x00058aa1) battery_pane_stacon_g2_ParamLimits

0x5cb4,	// (0x00058aa1) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x000624a6) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x000624a6) battery_pane_stacon_g

0x5cf2,	// (0x00058adf) navi_icon_pane_stacon

0x5d06,	// (0x00058af3) navi_navi_pane_stacon

0x5cf2,	// (0x00058adf) navi_text_pane_stacon

0x5d1c,	// (0x00058b09) control_bottom_pane_stacon_g1

0x5d24,	// (0x00058b11) control_bottom_pane_stacon_t1_ParamLimits

0x5d24,	// (0x00058b11) control_bottom_pane_stacon_t1

0x5d5b,	// (0x00058b48) grid_app_pane_ParamLimits

0x5d5b,	// (0x00058b48) grid_app_pane

0x5d7d,	// (0x00058b6a) scroll_pane_cp15_ParamLimits

0x5d7d,	// (0x00058b6a) scroll_pane_cp15

0x5d90,	// (0x00058b7d) cell_app_pane_ParamLimits

0x5d90,	// (0x00058b7d) cell_app_pane

0x5dbc,	// (0x00058ba9) cell_app_pane_g1_ParamLimits

0x5dbc,	// (0x00058ba9) cell_app_pane_g1

0x3025,	// (0x00055e12) cell_app_pane_g2_ParamLimits

0x3025,	// (0x00055e12) cell_app_pane_g2

0x0001,

0xf6be,	// (0x000624ab) cell_app_pane_g_ParamLimits

0xf6be,	// (0x000624ab) cell_app_pane_g

0x5de0,	// (0x00058bcd) cell_app_pane_t1_ParamLimits

0x5de0,	// (0x00058bcd) cell_app_pane_t1

0x3031,	// (0x00055e1e) grid_highlight_pane_ParamLimits

0x3031,	// (0x00055e1e) grid_highlight_pane

0xf315,	// (0x00062102) cell_highlight_pane_g1

0xf31d,	// (0x0006210a) cell_highlight_pane_g2

0xf325,	// (0x00062112) cell_highlight_pane_g3

0xf32d,	// (0x0006211a) cell_highlight_pane_g4

0xf335,	// (0x00062122) cell_highlight_pane_g5

0xf33d,	// (0x0006212a) cell_highlight_pane_g6

0xf345,	// (0x00062132) cell_highlight_pane_g7

0xf34d,	// (0x0006213a) cell_highlight_pane_g8

0xf355,	// (0x00062142) cell_highlight_pane_g9

0xec15,	// (0x00061a02) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00062459) cell_highlight_pane_g

0x3042,	// (0x00055e2f) bg_scroll_pane

0x5e24,	// (0x00058c11) scroll_handle_pane

0x3089,	// (0x00055e76) scroll_bg_pane_g1

0x309e,	// (0x00055e8b) scroll_bg_pane_g2

0x30b6,	// (0x00055ea3) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x000624b0) scroll_bg_pane_g

0x30cb,	// (0x00055eb8) scroll_handle_focus_pane_ParamLimits

0x30cb,	// (0x00055eb8) scroll_handle_focus_pane

0x3089,	// (0x00055e76) scroll_handle_pane_g1

0x30d8,	// (0x00055ec5) scroll_handle_pane_g2

0x30b6,	// (0x00055ea3) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x000624b7) scroll_handle_pane_g

0xf3a4,	// (0x00062191) bg_popup_sub_pane_cp21_ParamLimits

0xf3a4,	// (0x00062191) bg_popup_sub_pane_cp21

0x30ec,	// (0x00055ed9) popup_fep_japan_predictive_window_t1_ParamLimits

0x30ec,	// (0x00055ed9) popup_fep_japan_predictive_window_t1

0x3103,	// (0x00055ef0) popup_fep_japan_predictive_window_t2_ParamLimits

0x3103,	// (0x00055ef0) popup_fep_japan_predictive_window_t2

0x3136,	// (0x00055f23) popup_fep_japan_predictive_window_t3_ParamLimits

0x3136,	// (0x00055f23) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x000624be) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x000624be) popup_fep_japan_predictive_window_t

0xec1f,	// (0x00061a0c) bg_popup_sub_pane_cp23

0x316d,	// (0x00055f5a) listscroll_japin_cand_pane

0x3175,	// (0x00055f62) popup_fep_japan_candidate_window_t1

0x3183,	// (0x00055f70) candidate_pane_ParamLimits

0x3183,	// (0x00055f70) candidate_pane

0x3195,	// (0x00055f82) scroll_pane_cp30

0x319f,	// (0x00055f8c) list_single_popup_jap_candidate_pane_ParamLimits

0x319f,	// (0x00055f8c) list_single_popup_jap_candidate_pane

0xec1f,	// (0x00061a0c) list_highlight_pane_cp30

0x31b3,	// (0x00055fa0) list_single_popup_jap_candidate_pane_t1

0x5e4d,	// (0x00058c3a) level_1_signal

0x5e5a,	// (0x00058c47) level_2_signal

0x5e67,	// (0x00058c54) level_3_signal

0x5e74,	// (0x00058c61) level_4_signal

0x5e81,	// (0x00058c6e) level_5_signal

0x5e8e,	// (0x00058c7b) level_6_signal

0x5e9b,	// (0x00058c88) level_7_signal

0x5e4d,	// (0x00058c3a) level_1_battery

0x5e5a,	// (0x00058c47) level_2_battery

0x5e67,	// (0x00058c54) level_3_battery

0x5e74,	// (0x00058c61) level_4_battery

0x5e81,	// (0x00058c6e) level_5_battery

0x5e8e,	// (0x00058c7b) level_6_battery

0x5e9b,	// (0x00058c88) level_7_battery

0x31da,	// (0x00055fc7) list_menu_pane_ParamLimits

0x31da,	// (0x00055fc7) list_menu_pane

0x31f0,	// (0x00055fdd) scroll_pane_cp25_ParamLimits

0x31f0,	// (0x00055fdd) scroll_pane_cp25

0x3209,	// (0x00055ff6) list_double2_graphic_pane_cp2_ParamLimits

0x3209,	// (0x00055ff6) list_double2_graphic_pane_cp2

0x3209,	// (0x00055ff6) list_double2_large_graphic_pane_cp2_ParamLimits

0x3209,	// (0x00055ff6) list_double2_large_graphic_pane_cp2

0x3209,	// (0x00055ff6) list_double2_pane_cp2_ParamLimits

0x3209,	// (0x00055ff6) list_double2_pane_cp2

0x3209,	// (0x00055ff6) list_double_graphic_pane_cp2_ParamLimits

0x3209,	// (0x00055ff6) list_double_graphic_pane_cp2

0x3209,	// (0x00055ff6) list_double_large_graphic_pane_cp2_ParamLimits

0x3209,	// (0x00055ff6) list_double_large_graphic_pane_cp2

0x3209,	// (0x00055ff6) list_double_number_pane_cp2_ParamLimits

0x3209,	// (0x00055ff6) list_double_number_pane_cp2

0x3209,	// (0x00055ff6) list_double_pane_cp2_ParamLimits

0x3209,	// (0x00055ff6) list_double_pane_cp2

0x5edd,	// (0x00058cca) list_single_2graphic_pane_cp2_ParamLimits

0x5edd,	// (0x00058cca) list_single_2graphic_pane_cp2

0x5edd,	// (0x00058cca) list_single_graphic_heading_pane_cp2_ParamLimits

0x5edd,	// (0x00058cca) list_single_graphic_heading_pane_cp2

0x5edd,	// (0x00058cca) list_single_graphic_pane_cp2_ParamLimits

0x5edd,	// (0x00058cca) list_single_graphic_pane_cp2

0x5edd,	// (0x00058cca) list_single_heading_pane_cp2_ParamLimits

0x5edd,	// (0x00058cca) list_single_heading_pane_cp2

0x3219,	// (0x00056006) list_single_large_graphic_pane_cp2_ParamLimits

0x3219,	// (0x00056006) list_single_large_graphic_pane_cp2

0x5edd,	// (0x00058cca) list_single_number_heading_pane_cp2_ParamLimits

0x5edd,	// (0x00058cca) list_single_number_heading_pane_cp2

0x5edd,	// (0x00058cca) list_single_number_pane_cp2_ParamLimits

0x5edd,	// (0x00058cca) list_single_number_pane_cp2

0x5efa,	// (0x00058ce7) list_single_pane_cp2_ParamLimits

0x5efa,	// (0x00058ce7) list_single_pane_cp2

0x3232,	// (0x0005601f) bg_popup_sub_pane_cp22

0x5fd6,	// (0x00058dc3) popup_side_volume_key_window_g1

0x6000,	// (0x00058ded) popup_side_volume_key_window_t1

0x601e,	// (0x00058e0b) volume_small_pane_cp1

0xeda0,	// (0x00061b8d) bg_popup_sub_pane_cp24_ParamLimits

0xeda0,	// (0x00061b8d) bg_popup_sub_pane_cp24

0x3248,	// (0x00056035) fep_china_uni_candidate_pane_ParamLimits

0x3248,	// (0x00056035) fep_china_uni_candidate_pane

0x325c,	// (0x00056049) fep_china_uni_entry_pane

0x326c,	// (0x00056059) popup_fep_china_uni_window_g1

0x3288,	// (0x00056075) fep_china_uni_entry_pane_g1

0x3292,	// (0x0005607f) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x000624ef) fep_china_uni_entry_pane_g

0x329c,	// (0x00056089) fep_entry_item_pane

0x32a6,	// (0x00056093) fep_candidate_item_pane

0x32ae,	// (0x0005609b) fep_china_uni_candidate_pane_g1

0x32b8,	// (0x000560a5) fep_china_uni_candidate_pane_g2

0x32c0,	// (0x000560ad) fep_china_uni_candidate_pane_g3

0x32c8,	// (0x000560b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x000624f4) fep_china_uni_candidate_pane_g

0xec15,	// (0x00061a02) fep_entry_item_pane_g1

0x32d2,	// (0x000560bf) fep_entry_item_pane_t1_ParamLimits

0x32d2,	// (0x000560bf) fep_entry_item_pane_t1

0x32e8,	// (0x000560d5) fep_candidate_item_pane_t1_ParamLimits

0x32e8,	// (0x000560d5) fep_candidate_item_pane_t1

0x32fd,	// (0x000560ea) fep_candidate_item_pane_t2_ParamLimits

0x32fd,	// (0x000560ea) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x000624fd) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x000624fd) fep_candidate_item_pane_t

0xec6d,	// (0x00061a5a) list_highlight_pane_cp31_ParamLimits

0xec6d,	// (0x00061a5a) list_highlight_pane_cp31

0x330f,	// (0x000560fc) level_1_signal_lsc

0x3318,	// (0x00056105) level_2_signal_lsc

0x3321,	// (0x0005610e) level_3_signal_lsc

0x332a,	// (0x00056117) level_4_signal_lsc

0x3333,	// (0x00056120) level_5_signal_lsc

0x333c,	// (0x00056129) level_6_signal_lsc

0x3345,	// (0x00056132) level_7_signal_lsc

0x3345,	// (0x00056132) level_1_battery_lsc

0x334e,	// (0x0005613b) level_2_battery_lsc

0x3357,	// (0x00056144) level_3_battery_lsc

0x3360,	// (0x0005614d) level_4_battery_lsc

0x3369,	// (0x00056156) level_5_battery_lsc

0x3372,	// (0x0005615f) level_6_battery_lsc

0x330f,	// (0x000560fc) level_7_battery_lsc

0x337b,	// (0x00056168) scroll_handle_focus_pane_g1

0x3384,	// (0x00056171) scroll_handle_focus_pane_g2

0x338d,	// (0x0005617a) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00062502) scroll_handle_focus_pane_g

0x6026,	// (0x00058e13) list_single_2graphic_pane_g1_ParamLimits

0x6026,	// (0x00058e13) list_single_2graphic_pane_g1

0x5556,	// (0x00058343) list_single_2graphic_pane_g2_ParamLimits

0x5556,	// (0x00058343) list_single_2graphic_pane_g2

0x54b3,	// (0x000582a0) list_single_2graphic_pane_g3_ParamLimits

0x54b3,	// (0x000582a0) list_single_2graphic_pane_g3

0x6032,	// (0x00058e1f) list_single_2graphic_pane_g4_ParamLimits

0x6032,	// (0x00058e1f) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00062509) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00062509) list_single_2graphic_pane_g

0x6043,	// (0x00058e30) list_single_2graphic_pane_t1_ParamLimits

0x6043,	// (0x00058e30) list_single_2graphic_pane_t1

0x6071,	// (0x00058e5e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6071,	// (0x00058e5e) list_double2_graphic_large_graphic_pane_g1

0x5791,	// (0x0005857e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x5791,	// (0x0005857e) list_double2_graphic_large_graphic_pane_g2

0x56c9,	// (0x000584b6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x56c9,	// (0x000584b6) list_double2_graphic_large_graphic_pane_g3

0x6083,	// (0x00058e70) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6083,	// (0x00058e70) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00062512) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00062512) list_double2_graphic_large_graphic_pane_g

0x608f,	// (0x00058e7c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x608f,	// (0x00058e7c) list_double2_graphic_large_graphic_pane_t1

0x60a5,	// (0x00058e92) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x60a5,	// (0x00058e92) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0006251b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0006251b) list_double2_graphic_large_graphic_pane_t

0x8364,	// (0x0005b151) popup_fast_swap_window_ParamLimits

0x8364,	// (0x0005b151) popup_fast_swap_window

0x8382,	// (0x0005b16f) popup_side_volume_key_window

0x83a0,	// (0x0005b18d) stacon_top_pane

0x83aa,	// (0x0005b197) status_pane_ParamLimits

0x83aa,	// (0x0005b197) status_pane

0xec0b,	// (0x000619f8) status_small_pane

0xec1f,	// (0x00061a0c) control_pane

0xec1f,	// (0x00061a0c) stacon_bottom_pane

0xf2a0,	// (0x0006208d) scroll_pane_cp121

0xf297,	// (0x00062084) set_content_pane

0x60b7,	// (0x00058ea4) bg_active_tab_pane_g1_cp1

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp1

0x60c9,	// (0x00058eb6) bg_active_tab_pane_g3_cp1

0x60b7,	// (0x00058ea4) bg_passive_tab_pane_g1_cp1

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp1

0x60c9,	// (0x00058eb6) bg_passive_tab_pane_g3_cp1

0x60d2,	// (0x00058ebf) bg_active_tab_pane_g1_cp2

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp2

0x60db,	// (0x00058ec8) bg_active_tab_pane_g3_cp2

0x60d2,	// (0x00058ebf) bg_passive_tab_pane_g1_cp2

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp2

0x60db,	// (0x00058ec8) bg_passive_tab_pane_g3_cp2

0x60e4,	// (0x00058ed1) bg_active_tab_pane_g1_cp3

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp3

0x60ed,	// (0x00058eda) bg_active_tab_pane_g3_cp3

0x60e4,	// (0x00058ed1) bg_passive_tab_pane_g1_cp3

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp3

0x60ed,	// (0x00058eda) bg_passive_tab_pane_g3_cp3

0x60f6,	// (0x00058ee3) bg_active_tab_pane_g1_cp4

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp4

0x6101,	// (0x00058eee) bg_active_tab_pane_g3_cp4

0x60f6,	// (0x00058ee3) bg_passive_tab_pane_g1_cp4

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp4

0x6101,	// (0x00058eee) bg_passive_tab_pane_g3_cp4

0x82bd,	// (0x0005b0aa) bg_active_tab_pane_g1_cp5

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp5

0x82c6,	// (0x0005b0b3) bg_active_tab_pane_g3_cp5

0x82bd,	// (0x0005b0aa) bg_passive_tab_pane_g1_cp5

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp5

0x82c6,	// (0x0005b0b3) bg_passive_tab_pane_g3_cp5

0x82cf,	// (0x0005b0bc) list_set_graphic_pane_ParamLimits

0x82cf,	// (0x0005b0bc) list_set_graphic_pane

0xec1f,	// (0x00061a0c) bg_set_opt_pane_cp4

0x82e5,	// (0x0005b0d2) list_set_graphic_pane_g1_ParamLimits

0x82e5,	// (0x0005b0d2) list_set_graphic_pane_g1

0x82f1,	// (0x0005b0de) list_set_graphic_pane_g2_ParamLimits

0x82f1,	// (0x0005b0de) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00062520) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00062520) list_set_graphic_pane_g

0x0009,

0xfab4,	// (0x000628a1) volume_small_pane_cp_g

0x8315,	// (0x0005b102) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8315,	// (0x0005b102) list_double2_large_graphic_pane_g1_cp2

0x8323,	// (0x0005b110) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8323,	// (0x0005b110) list_double2_large_graphic_pane_g2_cp2

0x8334,	// (0x0005b121) list_double2_large_graphic_pane_g3_cp2

0x833c,	// (0x0005b129) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x833c,	// (0x0005b129) list_double2_large_graphic_pane_t1_cp2

0x8352,	// (0x0005b13f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8352,	// (0x0005b13f) list_double2_large_graphic_pane_t2_cp2

0xa147,	// (0x0005cf34) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa147,	// (0x0005cf34) list_double_large_graphic_pane_g1_cp2

0xa15a,	// (0x0005cf47) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa15a,	// (0x0005cf47) list_double_large_graphic_pane_g2_cp2

0x84bc,	// (0x0005b2a9) list_double_large_graphic_pane_g3_cp2

0xa16b,	// (0x0005cf58) list_double_large_graphic_pane_g4_cp

0xa173,	// (0x0005cf60) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa173,	// (0x0005cf60) list_double_large_graphic_pane_t1_cp2

0xa18a,	// (0x0005cf77) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa18a,	// (0x0005cf77) list_double_large_graphic_pane_t2_cp2

0x83b8,	// (0x0005b1a5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x83b8,	// (0x0005b1a5) list_double2_graphic_pane_g1_cp2

0x83c6,	// (0x0005b1b3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x83c6,	// (0x0005b1b3) list_double2_graphic_pane_g2_cp2

0x83d7,	// (0x0005b1c4) list_double2_graphic_pane_g3_cp2

0x83e1,	// (0x0005b1ce) list_double2_graphic_pane_t1_cp2_ParamLimits

0x83e1,	// (0x0005b1ce) list_double2_graphic_pane_t1_cp2

0x83f7,	// (0x0005b1e4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x83f7,	// (0x0005b1e4) list_double2_graphic_pane_t2_cp2

0x8273,	// (0x0005b060) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8273,	// (0x0005b060) list_single_number_heading_pane_g1_cp2

0x8409,	// (0x0005b1f6) list_single_number_heading_pane_g2_cp2

0x8411,	// (0x0005b1fe) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8411,	// (0x0005b1fe) list_single_number_heading_pane_t1_cp2

0x8427,	// (0x0005b214) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8427,	// (0x0005b214) list_single_number_heading_pane_t2_cp2

0x843b,	// (0x0005b228) list_single_number_heading_pane_t3_cp2_ParamLimits

0x843b,	// (0x0005b228) list_single_number_heading_pane_t3_cp2

0x8273,	// (0x0005b060) list_single_heading_pane_g1_cp2_ParamLimits

0x8273,	// (0x0005b060) list_single_heading_pane_g1_cp2

0x8409,	// (0x0005b1f6) list_single_heading_pane_g2_cp2

0x8411,	// (0x0005b1fe) list_single_heading_pane_t1_cp2_ParamLimits

0x8411,	// (0x0005b1fe) list_single_heading_pane_t1_cp2

0x9f41,	// (0x0005cd2e) list_single_heading_pane_t2_cp2_ParamLimits

0x9f41,	// (0x0005cd2e) list_single_heading_pane_t2_cp2

0x9e89,	// (0x0005cc76) list_double_graphic_pane_g1_cp2_ParamLimits

0x9e89,	// (0x0005cc76) list_double_graphic_pane_g1_cp2

0x9e95,	// (0x0005cc82) list_double_graphic_pane_g2_cp2_ParamLimits

0x9e95,	// (0x0005cc82) list_double_graphic_pane_g2_cp2

0x9ea4,	// (0x0005cc91) list_double_graphic_pane_g3_cp2

0x9eac,	// (0x0005cc99) list_double_graphic_pane_t1_cp2_ParamLimits

0x9eac,	// (0x0005cc99) list_double_graphic_pane_t1_cp2

0x9ec2,	// (0x0005ccaf) list_double_graphic_pane_t2_cp2_ParamLimits

0x9ec2,	// (0x0005ccaf) list_double_graphic_pane_t2_cp2

0x84b0,	// (0x0005b29d) list_double_number_pane_g1_cp2_ParamLimits

0x84b0,	// (0x0005b29d) list_double_number_pane_g1_cp2

0x84bc,	// (0x0005b2a9) list_double_number_pane_g2_cp2

0x9e4d,	// (0x0005cc3a) list_double_number_pane_t1_cp2_ParamLimits

0x9e4d,	// (0x0005cc3a) list_double_number_pane_t1_cp2

0x9e61,	// (0x0005cc4e) list_double_number_pane_t2_cp2_ParamLimits

0x9e61,	// (0x0005cc4e) list_double_number_pane_t2_cp2

0x9e77,	// (0x0005cc64) list_double_number_pane_t3_cp2_ParamLimits

0x9e77,	// (0x0005cc64) list_double_number_pane_t3_cp2

0x9b48,	// (0x0005c935) list_single_graphic_pane_g1_cp2_ParamLimits

0x9b48,	// (0x0005c935) list_single_graphic_pane_g1_cp2

0x8521,	// (0x0005b30e) list_single_graphic_pane_g2_cp2_ParamLimits

0x8521,	// (0x0005b30e) list_single_graphic_pane_g2_cp2

0x852d,	// (0x0005b31a) list_single_graphic_pane_g3_cp2

0x9b1e,	// (0x0005c90b) list_single_graphic_pane_t1_cp2_ParamLimits

0x9b1e,	// (0x0005c90b) list_single_graphic_pane_t1_cp2

0x8521,	// (0x0005b30e) list_single_number_pane_g1_cp2_ParamLimits

0x8521,	// (0x0005b30e) list_single_number_pane_g1_cp2

0x852d,	// (0x0005b31a) list_single_number_pane_g2_cp2

0x9b1e,	// (0x0005c90b) list_single_number_pane_t1_cp2_ParamLimits

0x9b1e,	// (0x0005c90b) list_single_number_pane_t1_cp2

0x9b34,	// (0x0005c921) list_single_number_pane_t2_cp2_ParamLimits

0x9b34,	// (0x0005c921) list_single_number_pane_t2_cp2

0x8323,	// (0x0005b110) list_double2_pane_g1_cp2_ParamLimits

0x8323,	// (0x0005b110) list_double2_pane_g1_cp2

0x8334,	// (0x0005b121) list_double2_pane_g2_cp2

0x8488,	// (0x0005b275) list_double2_pane_t1_cp2_ParamLimits

0x8488,	// (0x0005b275) list_double2_pane_t1_cp2

0x849e,	// (0x0005b28b) list_double2_pane_t2_cp2_ParamLimits

0x849e,	// (0x0005b28b) list_double2_pane_t2_cp2

0x84b0,	// (0x0005b29d) list_double_pane_g1_cp2_ParamLimits

0x84b0,	// (0x0005b29d) list_double_pane_g1_cp2

0x84bc,	// (0x0005b2a9) list_double_pane_g2_cp2

0x84c4,	// (0x0005b2b1) list_double_pane_t1_cp2_ParamLimits

0x84c4,	// (0x0005b2b1) list_double_pane_t1_cp2

0x84da,	// (0x0005b2c7) list_double_pane_t2_cp2_ParamLimits

0x84da,	// (0x0005b2c7) list_double_pane_t2_cp2

0x8511,	// (0x0005b2fe) list_single_pane_cp2_g3

0x8521,	// (0x0005b30e) list_single_pane_g1_cp2_ParamLimits

0x8521,	// (0x0005b30e) list_single_pane_g1_cp2

0x852d,	// (0x0005b31a) list_single_pane_g2_cp2

0x8535,	// (0x0005b322) list_single_pane_t1_cp2_ParamLimits

0x8535,	// (0x0005b322) list_single_pane_t1_cp2

0x854d,	// (0x0005b33a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x854d,	// (0x0005b33a) list_single_large_graphic_pane_g1_cp2

0x855b,	// (0x0005b348) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x855b,	// (0x0005b348) list_single_large_graphic_pane_g2_cp2

0x8567,	// (0x0005b354) list_single_large_graphic_pane_g3_cp2

0x856f,	// (0x0005b35c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x856f,	// (0x0005b35c) list_single_large_graphic_pane_g4_cp1

0x8589,	// (0x0005b376) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8589,	// (0x0005b376) list_single_large_graphic_pane_t1_cp2

0x9ae8,	// (0x0005c8d5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9ae8,	// (0x0005c8d5) list_single_graphic_heading_pane_g1_cp2

0x9ab5,	// (0x0005c8a2) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9ab5,	// (0x0005c8a2) list_single_graphic_heading_pane_g4_cp2

0x852d,	// (0x0005b31a) list_single_graphic_heading_pane_g5_cp2

0x9af4,	// (0x0005c8e1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9af4,	// (0x0005c8e1) list_single_graphic_heading_pane_t1_cp2

0x9b0a,	// (0x0005c8f7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9b0a,	// (0x0005c8f7) list_single_graphic_heading_pane_t2_cp2

0x9aa9,	// (0x0005c896) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9aa9,	// (0x0005c896) list_single_2graphic_pane_g1_cp2

0x9ab5,	// (0x0005c8a2) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9ab5,	// (0x0005c8a2) list_single_2graphic_pane_g2_cp2

0x852d,	// (0x0005b31a) list_single_2graphic_pane_g3_cp2

0x9ac6,	// (0x0005c8b3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9ac6,	// (0x0005c8b3) list_single_2graphic_pane_g4_cp2

0x9ad2,	// (0x0005c8bf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ad2,	// (0x0005c8bf) list_single_2graphic_pane_t1_cp2

0xec15,	// (0x00061a02) list_highlight_pane_g10_cp1

0x9681,	// (0x0005c46e) list_highlight_pane_g1_cp1

0x9689,	// (0x0005c476) list_highlight_pane_g2_cp1

0x9691,	// (0x0005c47e) list_highlight_pane_g3_cp1

0x9699,	// (0x0005c486) list_highlight_pane_g4_cp1

0x96a1,	// (0x0005c48e) list_highlight_pane_g5_cp1

0x96a9,	// (0x0005c496) list_highlight_pane_g6_cp1

0x96b1,	// (0x0005c49e) list_highlight_pane_g7_cp1

0x96b9,	// (0x0005c4a6) list_highlight_pane_g8_cp1

0x96c1,	// (0x0005c4ae) list_highlight_pane_g9_cp1

0x95a1,	// (0x0005c38e) form_field_slider_pane_t3

0x95af,	// (0x0005c39c) form_field_slider_pane_t4

0x95bd,	// (0x0005c3aa) slider_form_pane_ParamLimits

0x95bd,	// (0x0005c3aa) slider_form_pane

0xec1f,	// (0x00061a0c) control_abbreviations

0xec1f,	// (0x00061a0c) control_conventions

0xec1f,	// (0x00061a0c) control_definitions

0xec1f,	// (0x00061a0c) format_table_attribute

0x9f97,	// (0x0005cd84) bg_popup_preview_window_pane_g9

0xec1f,	// (0x00061a0c) format_table_data2

0xec1f,	// (0x00061a0c) format_table_data3

0xec1f,	// (0x00061a0c) format_table_data_example

0x0008,

0xec1f,	// (0x00061a0c) intro_purpose

0xf8cf,	// (0x000626bc) bg_popup_preview_window_pane_g

0xec1f,	// (0x00061a0c) texts_category

0xec1f,	// (0x00061a0c) texts_graphics

0x859f,	// (0x0005b38c) text_digital

0x85ae,	// (0x0005b39b) text_primary

0x85bd,	// (0x0005b3aa) text_primary_small

0x85cc,	// (0x0005b3b9) text_secondary

0x85db,	// (0x0005b3c8) text_title

0xa6fa,	// (0x0005d4e7) bg_passive_tab_pane_g1_cp3_srt

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp3_srt

0xa703,	// (0x0005d4f0) bg_passive_tab_pane_g3_cp3_srt

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp3_srt_ParamLimits

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp3_srt

0xa70c,	// (0x0005d4f9) tabs_4_active_pane_srt_g1

0xa714,	// (0x0005d501) tabs_4_active_pane_srt_t1_ParamLimits

0xa714,	// (0x0005d501) tabs_4_active_pane_srt_t1

0xa6fa,	// (0x0005d4e7) bg_active_tab_pane_g1_cp3_copy1

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp3_copy1

0xa703,	// (0x0005d4f0) bg_active_tab_pane_g3_cp3_copy1

0xec6d,	// (0x00061a5a) tabs_2_long_active_pane_srt_ParamLimits

0xec6d,	// (0x00061a5a) tabs_2_long_active_pane_srt

0xec6d,	// (0x00061a5a) tabs_2_long_passive_pane_srt_ParamLimits

0xec6d,	// (0x00061a5a) tabs_2_long_passive_pane_srt

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp4_srt

0xa3d1,	// (0x0005d1be) bg_passive_tab_pane_g1_cp4_srt

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp4_srt

0xa3da,	// (0x0005d1c7) bg_passive_tab_pane_g3_cp4_srt

0x5b87,	// (0x00058974) bg_active_tab_pane_cp4_srt_ParamLimits

0x5b87,	// (0x00058974) bg_active_tab_pane_cp4_srt

0xa3e3,	// (0x0005d1d0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa3e3,	// (0x0005d1d0) tabs_2_long_active_pane_srt_t1

0xa3d1,	// (0x0005d1be) bg_active_tab_pane_g1_cp4_srt

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp4_srt

0xa3da,	// (0x0005d1c7) bg_active_tab_pane_g3_cp4_srt

0xeda0,	// (0x00061b8d) tabs_3_long_active_pane_srt_ParamLimits

0xeda0,	// (0x00061b8d) tabs_3_long_active_pane_srt

0xeda0,	// (0x00061b8d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xeda0,	// (0x00061b8d) tabs_3_long_passive_pane_cp_srt

0xeda0,	// (0x00061b8d) tabs_3_long_passive_pane_srt_ParamLimits

0xeda0,	// (0x00061b8d) tabs_3_long_passive_pane_srt

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp5_srt

0x82bd,	// (0x0005b0aa) bg_passive_tab_pane_g1_cp5_srt

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp5_srt

0x82c6,	// (0x0005b0b3) bg_passive_tab_pane_g3_cp5_srt

0x5b87,	// (0x00058974) bg_active_tab_pane_cp5_srt_ParamLimits

0x5b87,	// (0x00058974) bg_active_tab_pane_cp5_srt

0xa3bf,	// (0x0005d1ac) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa3bf,	// (0x0005d1ac) tabs_3_long_active_pane_srt_t1

0x82bd,	// (0x0005b0aa) bg_active_tab_pane_g1_cp5_srt

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp5_srt

0x82c6,	// (0x0005b0b3) bg_active_tab_pane_g3_cp5_srt

0xa3b1,	// (0x0005d19e) navi_text_pane_srt_t1

0xa3a9,	// (0x0005d196) navi_icon_pane_srt_g1

0x87b3,	// (0x0005b5a0) midp_editing_number_pane_srt

0x85ea,	// (0x0005b3d7) midp_ticker_pane_srt

0x87bb,	// (0x0005b5a8) midp_ticker_pane_srt_g1

0x87c3,	// (0x0005b5b0) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0006253f) midp_ticker_pane_srt_g

0x87cb,	// (0x0005b5b8) midp_ticker_pane_srt_t1

0xa39a,	// (0x0005d187) midp_editing_number_pane_t1_copy1

0x85f2,	// (0x0005b3df) listscroll_midp_pane

0x85f2,	// (0x0005b3df) midp_form_pane

0x8661,	// (0x0005b44e) midp_info_popup_window_ParamLimits

0x8661,	// (0x0005b44e) midp_info_popup_window

0xf3a4,	// (0x00062191) bg_popup_sub_pane_cp50_ParamLimits

0xf3a4,	// (0x00062191) bg_popup_sub_pane_cp50

0x92a3,	// (0x0005c090) listscroll_midp_info_pane_ParamLimits

0x92a3,	// (0x0005c090) listscroll_midp_info_pane

0x9283,	// (0x0005c070) listscroll_form_midp_pane_ParamLimits

0x9283,	// (0x0005c070) listscroll_form_midp_pane

0x928f,	// (0x0005c07c) scroll_bar_cp050

0x9263,	// (0x0005c050) list_midp_pane

0xb1ae,	// (0x0005df9b) signal_pane_g2_cp

0x919d,	// (0x0005bf8a) listscroll_midp_info_pane_t1_ParamLimits

0x919d,	// (0x0005bf8a) listscroll_midp_info_pane_t1

0x91b5,	// (0x0005bfa2) listscroll_midp_info_pane_t2_ParamLimits

0x91b5,	// (0x0005bfa2) listscroll_midp_info_pane_t2

0x91f3,	// (0x0005bfe0) listscroll_midp_info_pane_t3_ParamLimits

0x91f3,	// (0x0005bfe0) listscroll_midp_info_pane_t3

0x922d,	// (0x0005c01a) listscroll_midp_info_pane_t4_ParamLimits

0x922d,	// (0x0005c01a) listscroll_midp_info_pane_t4

0x0003,

0xf80a,	// (0x000625f7) listscroll_midp_info_pane_t_ParamLimits

0xf80a,	// (0x000625f7) listscroll_midp_info_pane_t

0xf3f9,	// (0x000621e6) scroll_pane_cp21

0x9137,	// (0x0005bf24) form_midp_field_choice_group_pane

0x9140,	// (0x0005bf2d) form_midp_field_text_pane

0x9183,	// (0x0005bf70) form_midp_field_time_pane

0x918b,	// (0x0005bf78) form_midp_gauge_slider_pane

0x9194,	// (0x0005bf81) form_midp_gauge_wait_pane

0xec1f,	// (0x00061a0c) form_midp_image_pane

0x6bd1,	// (0x000599be) list_single_midp_pane_ParamLimits

0x6bd1,	// (0x000599be) list_single_midp_pane

0x90fb,	// (0x0005bee8) form_midp_field_text_pane_t1

0x8eed,	// (0x0005bcda) input_focus_pane_cp050

0x9126,	// (0x0005bf13) list_midp_form_text_pane

0x90ca,	// (0x0005beb7) form_midp_field_choice_group_pane_t1

0x90d8,	// (0x0005bec5) input_focus_pane_cp051

0x90ec,	// (0x0005bed9) list_midp_choice_pane

0xec1f,	// (0x00061a0c) status_idle_pane

0x90ae,	// (0x0005be9b) form_midp_field_time_pane_t1

0xec15,	// (0x00061a02) wait_anim_pane_g2_copy1

0x90bc,	// (0x0005bea9) form_midp_field_time_pane_t2

0x0001,

0x8711,	// (0x0005b4fe) aid_navinavi_width_2_pane

0xf805,	// (0x000625f2) form_midp_field_time_pane_t

0xec1f,	// (0x00061a0c) input_focus_pane_cp052

0xec1f,	// (0x00061a0c) bg_input_focus_pane_cp040

0x906e,	// (0x0005be5b) form_midp_gauge_slider_pane_t1

0x907c,	// (0x0005be69) form_midp_gauge_slider_pane_t2

0x908a,	// (0x0005be77) form_midp_gauge_slider_pane_t3

0x9098,	// (0x0005be85) form_midp_gauge_slider_pane_t4

0x0003,

0xf7fc,	// (0x000625e9) form_midp_gauge_slider_pane_t

0x90a6,	// (0x0005be93) form_midp_slider_pane

0xec6d,	// (0x00061a5a) bg_input_focus_pane_cp041_ParamLimits

0xec6d,	// (0x00061a5a) bg_input_focus_pane_cp041

0x903b,	// (0x0005be28) form_midp_gauge_wait_pane_t1_ParamLimits

0x903b,	// (0x0005be28) form_midp_gauge_wait_pane_t1

0x904d,	// (0x0005be3a) form_midp_gauge_wait_pane_t2_ParamLimits

0x904d,	// (0x0005be3a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f7,	// (0x000625e4) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f7,	// (0x000625e4) form_midp_gauge_wait_pane_t

0x905f,	// (0x0005be4c) form_midp_wait_pane_ParamLimits

0x905f,	// (0x0005be4c) form_midp_wait_pane

0x9003,	// (0x0005bdf0) form_midp_image_pane_g1

0x900c,	// (0x0005bdf9) form_midp_image_pane_t1

0x901b,	// (0x0005be08) form_midp_image_pane_t2

0x902a,	// (0x0005be17) form_midp_image_pane_t3

0x0002,

0xf7f0,	// (0x000625dd) form_midp_image_pane_t

0x8ffa,	// (0x0005bde7) list_single_midp_pane_g1

0x3c10,	// (0x000569fd) list_single_midp_pane_t1

0x8fe0,	// (0x0005bdcd) list_midp_form_item_pane_ParamLimits

0x8fe0,	// (0x0005bdcd) list_midp_form_item_pane

0x86b9,	// (0x0005b4a6) list_midp_form_item_pane_t1

0x86c8,	// (0x0005b4b5) midp_ticker_pane_g1

0x86d4,	// (0x0005b4c1) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00062525) midp_ticker_pane_g

0x86e0,	// (0x0005b4cd) midp_ticker_pane_t1

0xa607,	// (0x0005d3f4) midp_editing_number_pane_t1

0xa5e5,	// (0x0005d3d2) midp_editing_number_pane

0xa5f4,	// (0x0005d3e1) midp_ticker_pane

0xa38a,	// (0x0005d177) ai_message_heading_pane

0xec1f,	// (0x00061a0c) bg_popup_window_pane_cp14

0xa392,	// (0x0005d17f) listscroll_ai_message_pane

0xa310,	// (0x0005d0fd) ai_message_heading_pane_g1_ParamLimits

0xa310,	// (0x0005d0fd) ai_message_heading_pane_g1

0xa31c,	// (0x0005d109) ai_message_heading_pane_g2_ParamLimits

0xa31c,	// (0x0005d109) ai_message_heading_pane_g2

0xa32a,	// (0x0005d117) ai_message_heading_pane_g3_ParamLimits

0xa32a,	// (0x0005d117) ai_message_heading_pane_g3

0xa336,	// (0x0005d123) ai_message_heading_pane_g4_ParamLimits

0xa336,	// (0x0005d123) ai_message_heading_pane_g4

0x0003,

0xf931,	// (0x0006271e) ai_message_heading_pane_g_ParamLimits

0xf931,	// (0x0006271e) ai_message_heading_pane_g

0xa342,	// (0x0005d12f) ai_message_heading_pane_t1_ParamLimits

0xa342,	// (0x0005d12f) ai_message_heading_pane_t1

0xa35c,	// (0x0005d149) ai_message_heading_pane_t2_ParamLimits

0xa35c,	// (0x0005d149) ai_message_heading_pane_t2

0x0001,

0xf93a,	// (0x00062727) ai_message_heading_pane_t_ParamLimits

0xf93a,	// (0x00062727) ai_message_heading_pane_t

0xa370,	// (0x0005d15d) bg_popup_heading_pane_cp1_ParamLimits

0xa370,	// (0x0005d15d) bg_popup_heading_pane_cp1

0xa2fe,	// (0x0005d0eb) list_ai_message_pane_ParamLimits

0xa2fe,	// (0x0005d0eb) list_ai_message_pane

0xf3f9,	// (0x000621e6) scroll_pane_cp10

0xa29a,	// (0x0005d087) list_ai_message_pane_g1

0xa2a2,	// (0x0005d08f) list_ai_message_pane_g2

0x0001,

0xf90e,	// (0x000626fb) list_ai_message_pane_g

0xa2aa,	// (0x0005d097) list_ai_message_pane_t1_ParamLimits

0xa2aa,	// (0x0005d097) list_ai_message_pane_t1

0xa2bf,	// (0x0005d0ac) list_ai_message_pane_t2_ParamLimits

0xa2bf,	// (0x0005d0ac) list_ai_message_pane_t2

0xa2d4,	// (0x0005d0c1) list_ai_message_pane_t3_ParamLimits

0xa2d4,	// (0x0005d0c1) list_ai_message_pane_t3

0xa2e9,	// (0x0005d0d6) list_ai_message_pane_t4_ParamLimits

0xa2e9,	// (0x0005d0d6) list_ai_message_pane_t4

0x0003,

0xf913,	// (0x00062700) list_ai_message_pane_t_ParamLimits

0xf913,	// (0x00062700) list_ai_message_pane_t

0xa283,	// (0x0005d070) cell_ai_soft_ind_pane_ParamLimits

0xa283,	// (0x0005d070) cell_ai_soft_ind_pane

0x86f2,	// (0x0005b4df) cell_ai_soft_ind_pane_g1_ParamLimits

0x86f2,	// (0x0005b4df) cell_ai_soft_ind_pane_g1

0xec1f,	// (0x00061a0c) grid_highlight_cp1

0x86ff,	// (0x0005b4ec) text_secondary_cp56_ParamLimits

0x86ff,	// (0x0005b4ec) text_secondary_cp56

0xa258,	// (0x0005d045) example_general_pane_ParamLimits

0xa258,	// (0x0005d045) example_general_pane

0xa264,	// (0x0005d051) example_parent_pane_g1_ParamLimits

0xa264,	// (0x0005d051) example_parent_pane_g1

0xa270,	// (0x0005d05d) example_parent_pane_t1_ParamLimits

0xa270,	// (0x0005d05d) example_parent_pane_t1

0x6820,	// (0x0005960d) popup_preview_text_window_ParamLimits

0x6820,	// (0x0005960d) popup_preview_text_window

0x8519,	// (0x0005b306) list_single_pane_cp2_g4

0xee7c,	// (0x00061c69) bg_popup_preview_window_pane_ParamLimits

0xee7c,	// (0x00061c69) bg_popup_preview_window_pane

0x9fa1,	// (0x0005cd8e) popup_preview_text_window_t1_ParamLimits

0x9fa1,	// (0x0005cd8e) popup_preview_text_window_t1

0x9fbf,	// (0x0005cdac) popup_preview_text_window_t2_ParamLimits

0x9fbf,	// (0x0005cdac) popup_preview_text_window_t2

0xa008,	// (0x0005cdf5) popup_preview_text_window_t3_ParamLimits

0xa008,	// (0x0005cdf5) popup_preview_text_window_t3

0xa04d,	// (0x0005ce3a) popup_preview_text_window_t4_ParamLimits

0xa04d,	// (0x0005ce3a) popup_preview_text_window_t4

0x0004,

0xf8e2,	// (0x000626cf) popup_preview_text_window_t_ParamLimits

0xf8e2,	// (0x000626cf) popup_preview_text_window_t

0xa0cb,	// (0x0005ceb8) scroll_pane_cp11

0x8e61,	// (0x0005bc4e) bg_popup_preview_window_pane_g1

0x9f55,	// (0x0005cd42) bg_popup_preview_window_pane_g2

0x9f5f,	// (0x0005cd4c) bg_popup_preview_window_pane_g3

0x9f69,	// (0x0005cd56) bg_popup_preview_window_pane_g4

0x9f73,	// (0x0005cd60) bg_popup_preview_window_pane_g5

0x9f7d,	// (0x0005cd6a) bg_popup_preview_window_pane_g6

0x9f85,	// (0x0005cd72) bg_popup_preview_window_pane_g7

0x9f8d,	// (0x0005cd7a) bg_popup_preview_window_pane_g8

0x4d11,	// (0x00057afe) aid_popup_width_pane

0x67fc,	// (0x000595e9) popup_midp_note_alarm_window_ParamLimits

0x67fc,	// (0x000595e9) popup_midp_note_alarm_window

0xf2b1,	// (0x0006209e) data_form_pane_ParamLimits

0x5a22,	// (0x0005880f) form_field_data_pane_g1

0x5a2c,	// (0x00058819) form_field_data_pane_t1_ParamLimits

0xf2bd,	// (0x000620aa) input_focus_pane_ParamLimits

0x3a41,	// (0x0005682e) data_form_wide_pane_ParamLimits

0x3a52,	// (0x0005683f) form_field_data_wide_pane_g1

0x3a5e,	// (0x0005684b) form_field_data_wide_pane_t1_ParamLimits

0xf038,	// (0x00061e25) input_focus_pane_cp6_ParamLimits

0x5b5f,	// (0x0005894c) input_popup_find_pane_g1_ParamLimits

0x5b5f,	// (0x0005894c) input_popup_find_pane_g1

0x5cc5,	// (0x00058ab2) aid_navi_side_left_pane

0x5cda,	// (0x00058ac7) aid_navi_side_right_pane

0x977c,	// (0x0005c569) bg_popup_window_pane_cp30_ParamLimits

0x977c,	// (0x0005c569) bg_popup_window_pane_cp30

0x97f6,	// (0x0005c5e3) popup_midp_note_alarm_window_g1_ParamLimits

0x97f6,	// (0x0005c5e3) popup_midp_note_alarm_window_g1

0x9826,	// (0x0005c613) popup_midp_note_alarm_window_t1_ParamLimits

0x9826,	// (0x0005c613) popup_midp_note_alarm_window_t1

0x98c7,	// (0x0005c6b4) popup_midp_note_alarm_window_t2_ParamLimits

0x98c7,	// (0x0005c6b4) popup_midp_note_alarm_window_t2

0x9975,	// (0x0005c762) popup_midp_note_alarm_window_t3_ParamLimits

0x9975,	// (0x0005c762) popup_midp_note_alarm_window_t3

0x99a7,	// (0x0005c794) popup_midp_note_alarm_window_t4_ParamLimits

0x99a7,	// (0x0005c794) popup_midp_note_alarm_window_t4

0x99cd,	// (0x0005c7ba) popup_midp_note_alarm_window_t5_ParamLimits

0x99cd,	// (0x0005c7ba) popup_midp_note_alarm_window_t5

0x000a,

0xf87f,	// (0x0006266c) popup_midp_note_alarm_window_t_ParamLimits

0xf87f,	// (0x0006266c) popup_midp_note_alarm_window_t

0x9a79,	// (0x0005c866) wait_bar_pane_cp1_ParamLimits

0x9a79,	// (0x0005c866) wait_bar_pane_cp1

0xec1f,	// (0x00061a0c) wait_anim_pane_copy1

0xec1f,	// (0x00061a0c) wait_border_pane_copy1

0x9461,	// (0x0005c24e) wait_border_pane_g1_copy1

0x3a78,	// (0x00056865) form_field_popup_pane_g1

0x5a46,	// (0x00058833) form_field_popup_pane_t1_ParamLimits

0xf2bd,	// (0x000620aa) input_focus_pane_cp7_ParamLimits

0xf2eb,	// (0x000620d8) list_form_pane_ParamLimits

0x3a80,	// (0x0005686d) form_field_popup_wide_pane_g1

0x3a88,	// (0x00056875) form_field_popup_wide_pane_t1_ParamLimits

0xf2bd,	// (0x000620aa) input_focus_pane_cp8_ParamLimits

0xf2f7,	// (0x000620e4) list_form_wide_pane_ParamLimits

0xa795,	// (0x0005d582) aid_size_cell_graphic_pane

0x5ac5,	// (0x000588b2) data_form_pane_t1_ParamLimits

0x6e60,	// (0x00059c4d) data_form_wide_pane_t1_ParamLimits

0x8a00,	// (0x0005b7ed) bg_status_flat_pane

0x5140,	// (0x00057f2d) title_pane_t1_ParamLimits

0xec35,	// (0x00061a22) title_pane_t2_ParamLimits

0xec5b,	// (0x00061a48) title_pane_t3_ParamLimits

0xf532,	// (0x0006231f) title_pane_t_ParamLimits

0x5e4d,	// (0x00058c3a) level_1_signal_ParamLimits

0x5e5a,	// (0x00058c47) level_2_signal_ParamLimits

0x5e67,	// (0x00058c54) level_3_signal_ParamLimits

0x5e74,	// (0x00058c61) level_4_signal_ParamLimits

0x5e81,	// (0x00058c6e) level_5_signal_ParamLimits

0x5e8e,	// (0x00058c7b) level_6_signal_ParamLimits

0x5e9b,	// (0x00058c88) level_7_signal_ParamLimits

0x5e4d,	// (0x00058c3a) level_1_battery_ParamLimits

0x5e5a,	// (0x00058c47) level_2_battery_ParamLimits

0x5e67,	// (0x00058c54) level_3_battery_ParamLimits

0x5e74,	// (0x00058c61) level_4_battery_ParamLimits

0x5e81,	// (0x00058c6e) level_5_battery_ParamLimits

0x5e8e,	// (0x00058c7b) level_6_battery_ParamLimits

0x5e9b,	// (0x00058c88) level_7_battery_ParamLimits

0x9681,	// (0x0005c46e) bg_status_flat_pane_g1

0x9689,	// (0x0005c476) bg_status_flat_pane_g2

0x9691,	// (0x0005c47e) bg_status_flat_pane_g3

0x9699,	// (0x0005c486) bg_status_flat_pane_g4

0x96a1,	// (0x0005c48e) bg_status_flat_pane_g5

0x96a9,	// (0x0005c496) bg_status_flat_pane_g6

0x96b1,	// (0x0005c49e) bg_status_flat_pane_g7

0x51b0,	// (0x00057f9d) tabs_3_active_pane_t1_ParamLimits

0x51b0,	// (0x00057f9d) tabs_3_passive_pane_t1_ParamLimits

0x51ca,	// (0x00057fb7) tabs_4_active_pane_t1_ParamLimits

0x51ca,	// (0x00057fb7) tabs_4_1_passive_pane_t1_ParamLimits

0x5b75,	// (0x00058962) tabs_2_active_pane_t1_ParamLimits

0x5b75,	// (0x00058962) tabs_2_passive_pane_t1_ParamLimits

0x5b87,	// (0x00058974) bg_active_tab_pane_cp4_ParamLimits

0x5b95,	// (0x00058982) tabs_2_long_active_pane_t1_ParamLimits

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp4_ParamLimits

0x6b18,	// (0x00059905) list_single_midp_graphic_pane_t1_ParamLimits

0x5b87,	// (0x00058974) bg_active_tab_pane_cp5_ParamLimits

0x5bb4,	// (0x000589a1) tabs_3_long_active_pane_t1_ParamLimits

0x5ba8,	// (0x00058995) bg_passive_tab_pane_cp5_ParamLimits

0x6b18,	// (0x00059905) list_single_midp_graphic_pane_t1

0x8a00,	// (0x0005b7ed) bg_status_flat_pane_ParamLimits

0x8acb,	// (0x0005b8b8) indicator_pane_cp2_ParamLimits

0x8acb,	// (0x0005b8b8) indicator_pane_cp2

0x8c0e,	// (0x0005b9fb) navi_pane_srt_ParamLimits

0x8c0e,	// (0x0005b9fb) navi_pane_srt

0x8c32,	// (0x0005ba1f) popup_clock_digital_analogue_window_cp1

0xecb1,	// (0x00061a9e) indicator_pane_t1

0x85ea,	// (0x0005b3d7) copy_highlight_pane

0x85ea,	// (0x0005b3d7) cursor_graphics_pane

0x85ea,	// (0x0005b3d7) graphic_within_text_pane

0x85ea,	// (0x0005b3d7) link_highlight_pane

0xa08e,	// (0x0005ce7b) popup_preview_text_window_t5_ParamLimits

0xa08e,	// (0x0005ce7b) popup_preview_text_window_t5

0x871b,	// (0x0005b508) cursor_digital_pane

0x871b,	// (0x0005b508) cursor_primary_pane

0x872c,	// (0x0005b519) cursor_primary_small_pane

0x8734,	// (0x0005b521) cursor_secondary_pane

0x873c,	// (0x0005b529) cursor_title_pane

0x871b,	// (0x0005b508) link_highlight_digital_pane

0x8723,	// (0x0005b510) link_highlight_primary_pane

0x872c,	// (0x0005b519) link_highlight_primary_small_pane

0x8734,	// (0x0005b521) link_highlight_secondary_pane

0x873c,	// (0x0005b529) link_highlight_title_pane

0x871b,	// (0x0005b508) copy_highlight_digital_pane

0x871b,	// (0x0005b508) copy_highlight_primary_pane

0x872c,	// (0x0005b519) copy_highlight_primary_small_pane

0x8734,	// (0x0005b521) copy_highlight_secondary_pane

0x873c,	// (0x0005b529) copy_highlight_title_pane

0x8734,	// (0x0005b521) graphic_text_digital_pane

0x971f,	// (0x0005c50c) graphic_text_primary_pane

0x9728,	// (0x0005c515) graphic_text_primary_small_pane

0x872c,	// (0x0005b519) graphic_text_secondary_pane

0x871b,	// (0x0005b508) graphic_text_title_pane

0x8744,	// (0x0005b531) cursor_primary_pane_g1

0x9711,	// (0x0005c4fe) cursor_text_primary_t1

0x96f9,	// (0x0005c4e6) cursor_primary_small_pane_g1

0x9703,	// (0x0005c4f0) cursor_text_primary_small_t1

0x96e1,	// (0x0005c4ce) cursor_primary_small_pane_g1_copy1

0x96eb,	// (0x0005c4d8) cursor_text_primary_small_t1_copy1

0x96c9,	// (0x0005c4b6) cursor_text_title_t1

0x96d7,	// (0x0005c4c4) cursor_title_pane_g1

0x8744,	// (0x0005b531) cursor_digital_pane_g1

0x874e,	// (0x0005b53b) cursor_text_digital_t1

0x875c,	// (0x0005b549) link_highlight_primary_pane_g1

0x9672,	// (0x0005c45f) link_highlight_primary_pane_t1

0x875c,	// (0x0005b549) link_highlight_primary_small_pane_g1

0x8764,	// (0x0005b551) link_highlight_primary_small_pane_t1

0x8773,	// (0x0005b560) link_highlight_secondary_pane_g1

0x877b,	// (0x0005b568) link_highlight_secondary_pane_t1

0x95e6,	// (0x0005c3d3) link_highlight_title_pane_g1

0x95ee,	// (0x0005c3db) link_highlight_title_pane_t1

0x95cf,	// (0x0005c3bc) link_highlight_digital_pane_g1

0x95d7,	// (0x0005c3c4) link_highlight_digital_pane_t1

0x9497,	// (0x0005c284) copy_highlight_primary_pane_g1

0x94ae,	// (0x0005c29b) copy_highlight_primary_pane_t1

0x9497,	// (0x0005c284) copy_highlight_primary_small_pane_g1

0x949f,	// (0x0005c28c) copy_highlight_primary_small_pane_t1

0x878a,	// (0x0005b577) copy_highlight_secondary_pane_g1

0x8792,	// (0x0005b57f) copy_highlight_secondary_pane_t1

0x9480,	// (0x0005c26d) copy_highlight_title_pane_g1

0x9488,	// (0x0005c275) copy_highlight_title_pane_t1

0x9497,	// (0x0005c284) copy_highlight_digital_pane_g1

0xa967,	// (0x0005d754) copy_highlight_digital_pane_t1

0xa8bb,	// (0x0005d6a8) graphic_text_primary_pane_g1

0xa94b,	// (0x0005d738) graphic_text_primary_pane_t1

0xa959,	// (0x0005d746) graphic_text_primary_pane_t2

0x0001,

0xf9ae,	// (0x0006279b) graphic_text_primary_pane_t

0xa927,	// (0x0005d714) graphic_text_primary_small_pane_g1

0xa92f,	// (0x0005d71c) graphic_text_primary_small_pane_t1

0xa93d,	// (0x0005d72a) graphic_text_primary_small_pane_t2

0x0001,

0xf9a9,	// (0x00062796) graphic_text_primary_small_pane_t

0xa903,	// (0x0005d6f0) graphic_text_secondary_pane_g1

0xa90b,	// (0x0005d6f8) graphic_text_secondary_pane_t1

0xa919,	// (0x0005d706) graphic_text_secondary_pane_t2

0x0001,

0xf9a4,	// (0x00062791) graphic_text_secondary_pane_t

0xa8df,	// (0x0005d6cc) graphic_text_title_pane_g1

0xa8e7,	// (0x0005d6d4) graphic_text_title_pane_t1

0xa8f5,	// (0x0005d6e2) graphic_text_title_pane_t2

0x0001,

0xf99f,	// (0x0006278c) graphic_text_title_pane_t

0xa8bb,	// (0x0005d6a8) graphic_text_digital_pane_g1

0xa8c3,	// (0x0005d6b0) graphic_text_digital_pane_t1

0xa8d1,	// (0x0005d6be) graphic_text_digital_pane_t2

0x0001,

0xf99a,	// (0x00062787) graphic_text_digital_pane_t

0xec6d,	// (0x00061a5a) navi_icon_pane_srt_ParamLimits

0xec6d,	// (0x00061a5a) navi_icon_pane_srt

0xec1f,	// (0x00061a0c) navi_midp_pane_srt

0xec1f,	// (0x00061a0c) navi_navi_pane_srt

0xec6d,	// (0x00061a5a) navi_text_pane_srt_ParamLimits

0xec6d,	// (0x00061a5a) navi_text_pane_srt

0xa886,	// (0x0005d673) navi_navi_icon_text_pane_srt

0xa88e,	// (0x0005d67b) navi_navi_pane_srt_g1_ParamLimits

0xa88e,	// (0x0005d67b) navi_navi_pane_srt_g1

0xa8a0,	// (0x0005d68d) navi_navi_pane_srt_g2_ParamLimits

0xa8a0,	// (0x0005d68d) navi_navi_pane_srt_g2

0x0001,

0xf995,	// (0x00062782) navi_navi_pane_srt_g_ParamLimits

0xf995,	// (0x00062782) navi_navi_pane_srt_g

0xa8b2,	// (0x0005d69f) navi_navi_tabs_pane_srt

0xa886,	// (0x0005d673) navi_navi_text_pane_srt

0xa886,	// (0x0005d673) navi_navi_volume_pane_srt

0xa877,	// (0x0005d664) navi_navi_text_pane_srt_t1

0x6f6f,	// (0x00059d5c) navi_navi_volume_pane_srt_g1

0x6f77,	// (0x00059d64) volume_small_pane_srt_ParamLimits

0x6f77,	// (0x00059d64) volume_small_pane_srt

0x624d,	// (0x0005903a) volume_small_pane_srt_g1_ParamLimits

0x624d,	// (0x0005903a) volume_small_pane_srt_g1

0x625d,	// (0x0005904a) volume_small_pane_srt_g2_ParamLimits

0x625d,	// (0x0005904a) volume_small_pane_srt_g2

0x626e,	// (0x0005905b) volume_small_pane_srt_g3_ParamLimits

0x626e,	// (0x0005905b) volume_small_pane_srt_g3

0x627f,	// (0x0005906c) volume_small_pane_srt_g4_ParamLimits

0x627f,	// (0x0005906c) volume_small_pane_srt_g4

0x6290,	// (0x0005907d) volume_small_pane_srt_g5_ParamLimits

0x6290,	// (0x0005907d) volume_small_pane_srt_g5

0x62a1,	// (0x0005908e) volume_small_pane_srt_g6_ParamLimits

0x62a1,	// (0x0005908e) volume_small_pane_srt_g6

0x62b2,	// (0x0005909f) volume_small_pane_srt_g7_ParamLimits

0x62b2,	// (0x0005909f) volume_small_pane_srt_g7

0x62c3,	// (0x000590b0) volume_small_pane_srt_g8_ParamLimits

0x62c3,	// (0x000590b0) volume_small_pane_srt_g8

0x62d4,	// (0x000590c1) volume_small_pane_srt_g9_ParamLimits

0x62d4,	// (0x000590c1) volume_small_pane_srt_g9

0x62e5,	// (0x000590d2) volume_small_pane_srt_g10_ParamLimits

0x62e5,	// (0x000590d2) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0006252a) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0006252a) volume_small_pane_srt_g

0xef31,	// (0x00061d1e) query_popup_data_pane_cp2

0xa85d,	// (0x0005d64a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa85d,	// (0x0005d64a) navi_navi_icon_text_pane_srt_t1

0x971f,	// (0x0005c50c) navi_tabs_2_long_pane_srt

0x971f,	// (0x0005c50c) navi_tabs_2_pane_srt

0x971f,	// (0x0005c50c) navi_tabs_3_long_pane_srt

0x971f,	// (0x0005c50c) navi_tabs_3_pane_srt

0x971f,	// (0x0005c50c) navi_tabs_4_pane_srt

0x6f4f,	// (0x00059d3c) tabs_2_active_pane_srt_ParamLimits

0x6f4f,	// (0x00059d3c) tabs_2_active_pane_srt

0x6f5f,	// (0x00059d4c) tabs_2_passive_pane_srt_ParamLimits

0x6f5f,	// (0x00059d4c) tabs_2_passive_pane_srt

0x8911,	// (0x0005b6fe) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8911,	// (0x0005b6fe) bg_passive_tab_pane_cp1_srt

0xa829,	// (0x0005d616) bg_passive_tab_pane_g1_cp1_srt

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp1_srt

0xa832,	// (0x0005d61f) bg_passive_tab_pane_g3_cp1_srt

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp1_srt_ParamLimits

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp1_srt

0xa83b,	// (0x0005d628) tabs_2_active_pane_srt_g1

0xa843,	// (0x0005d630) tabs_2_active_pane_srt_t1_ParamLimits

0xa843,	// (0x0005d630) tabs_2_active_pane_srt_t1

0xa829,	// (0x0005d616) bg_active_tab_pane_g1_cp1_srt

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp1_srt

0xa832,	// (0x0005d61f) bg_active_tab_pane_g3_cp1_srt

0x6f1c,	// (0x00059d09) tabs_3_active_pane_srt_ParamLimits

0x6f1c,	// (0x00059d09) tabs_3_active_pane_srt

0x6f2d,	// (0x00059d1a) tabs_3_passive_pane_cp_srt_ParamLimits

0x6f2d,	// (0x00059d1a) tabs_3_passive_pane_cp_srt

0x6f3e,	// (0x00059d2b) tabs_3_passive_pane_srt_ParamLimits

0x6f3e,	// (0x00059d2b) tabs_3_passive_pane_srt

0x8911,	// (0x0005b6fe) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8911,	// (0x0005b6fe) bg_passive_tab_pane_cp2_srt

0x87a1,	// (0x0005b58e) bg_passive_tab_pane_g1_cp2_srt

0x60c0,	// (0x00058ead) bg_passive_tab_pane_g2_cp2_srt

0x87aa,	// (0x0005b597) bg_passive_tab_pane_g3_cp2_srt

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp2_srt_ParamLimits

0xec6d,	// (0x00061a5a) bg_active_tab_pane_cp2_srt

0xa80f,	// (0x0005d5fc) tabs_3_active_pane_srt_g1

0xa817,	// (0x0005d604) tabs_3_active_pane_srt_t1_ParamLimits

0xa817,	// (0x0005d604) tabs_3_active_pane_srt_t1

0x87a1,	// (0x0005b58e) bg_active_tab_pane_g1_cp2_srt

0x60c0,	// (0x00058ead) bg_active_tab_pane_g2_cp2_srt

0x87aa,	// (0x0005b597) bg_active_tab_pane_g3_cp2_srt

0x6ed4,	// (0x00059cc1) tabs_4_active_pane_srt_ParamLimits

0x6ed4,	// (0x00059cc1) tabs_4_active_pane_srt

0x6ee6,	// (0x00059cd3) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6ee6,	// (0x00059cd3) tabs_4_passive_pane_cp2_srt

0x6437,	// (0x00059224) aid_size_cell_toolbar

0x5ba8,	// (0x00058995) main_idle_act_pane_ParamLimits

0x6622,	// (0x0005940f) popup_large_graphic_colour_window_ParamLimits

0x69c9,	// (0x000597b6) popup_toolbar_window_ParamLimits

0x69c9,	// (0x000597b6) popup_toolbar_window

0xa62d,	// (0x0005d41a) list_single_graphic_2heading_pane_ParamLimits

0xa62d,	// (0x0005d41a) list_single_graphic_2heading_pane

0x1300,	// (0x000540ed) aid_size_cell_apps_grid_lsc_pane

0x1312,	// (0x000540ff) aid_size_cell_apps_grid_prt_pane

0x8911,	// (0x0005b6fe) bg_wml_button_pane_cp1_ParamLimits

0x8911,	// (0x0005b6fe) bg_wml_button_pane_cp1

0x90fb,	// (0x0005bee8) form_midp_field_text_pane_t1_ParamLimits

0x8eed,	// (0x0005bcda) input_focus_pane_cp050_ParamLimits

0x9126,	// (0x0005bf13) list_midp_form_text_pane_ParamLimits

0x90d8,	// (0x0005bec5) input_focus_pane_cp051_ParamLimits

0x90ec,	// (0x0005bed9) list_midp_choice_pane_ParamLimits

0x8fa6,	// (0x0005bd93) list_single_2graphic_pane_cp3_ParamLimits

0x8fa6,	// (0x0005bd93) list_single_2graphic_pane_cp3

0x8fbc,	// (0x0005bda9) list_single_midp_graphic_pane_ParamLimits

0x8fbc,	// (0x0005bda9) list_single_midp_graphic_pane

0x4c7d,	// (0x00057a6a) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c7d,	// (0x00057a6a) list_single_graphic_2heading_pane_g1

0x4c89,	// (0x00057a76) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c89,	// (0x00057a76) list_single_graphic_2heading_pane_g4

0x4c95,	// (0x00057a82) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c95,	// (0x00057a82) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0006257d) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0006257d) list_single_graphic_2heading_pane_g

0x4ca1,	// (0x00057a8e) list_single_graphic_2heading_pane_t1_ParamLimits

0x4ca1,	// (0x00057a8e) list_single_graphic_2heading_pane_t1

0x4cb5,	// (0x00057aa2) list_single_graphic_2heading_pane_t2_ParamLimits

0x4cb5,	// (0x00057aa2) list_single_graphic_2heading_pane_t2

0x4cd1,	// (0x00057abe) list_single_graphic_2heading_pane_t3_ParamLimits

0x4cd1,	// (0x00057abe) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00062584) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00062584) list_single_graphic_2heading_pane_t

0x8d87,	// (0x0005bb74) bg_popup_sub_pane_cp2

0x8db1,	// (0x0005bb9e) grid_toobar_pane

0x6a88,	// (0x00059875) cell_toolbar_pane_ParamLimits

0x6a88,	// (0x00059875) cell_toolbar_pane

0x8e05,	// (0x0005bbf2) cell_toolbar_pane_g1_ParamLimits

0x8e05,	// (0x0005bbf2) cell_toolbar_pane_g1

0x8e19,	// (0x0005bc06) cell_toolbar_pane_g2_ParamLimits

0x8e19,	// (0x0005bc06) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00062592) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00062592) cell_toolbar_pane_g

0x8e3b,	// (0x0005bc28) grid_highlight_pane_cp2_ParamLimits

0x8e3b,	// (0x0005bc28) grid_highlight_pane_cp2

0x8e55,	// (0x0005bc42) toolbar_button_pane

0x8e61,	// (0x0005bc4e) toolbar_button_pane_g1

0x8e69,	// (0x0005bc56) toolbar_button_pane_g2

0x8e71,	// (0x0005bc5e) toolbar_button_pane_g3

0x8e79,	// (0x0005bc66) toolbar_button_pane_g4

0x8e81,	// (0x0005bc6e) toolbar_button_pane_g5

0x8e89,	// (0x0005bc76) toolbar_button_pane_g6

0x8e91,	// (0x0005bc7e) toolbar_button_pane_g7

0x8e99,	// (0x0005bc86) toolbar_button_pane_g8

0x8ea1,	// (0x0005bc8e) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00062597) toolbar_button_pane_g

0x6ac0,	// (0x000598ad) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6ac0,	// (0x000598ad) list_single_2graphic_pane_g1_cp3

0x6acc,	// (0x000598b9) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6acc,	// (0x000598b9) list_single_2graphic_pane_g2_cp3

0x6add,	// (0x000598ca) list_single_2graphic_pane_g3_cp3

0x6ae5,	// (0x000598d2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6ae5,	// (0x000598d2) list_single_2graphic_pane_g4_cp3

0x6af1,	// (0x000598de) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6af1,	// (0x000598de) list_single_2graphic_pane_t1_cp3

0x6b0c,	// (0x000598f9) list_single_midp_graphic_pane_g2_ParamLimits

0x6b0c,	// (0x000598f9) list_single_midp_graphic_pane_g2

0x4c6d,	// (0x00057a5a) aid_zoom_text_primary

0x4c75,	// (0x00057a62) aid_zoom_text_secondary

0x885b,	// (0x0005b648) status_small_pane_g7_ParamLimits

0x885b,	// (0x0005b648) status_small_pane_g7

0x887e,	// (0x0005b66b) status_small_pane_t1_ParamLimits

0x511b,	// (0x00057f08) title_pane_g2

0x0003,

0xf529,	// (0x00062316) title_pane_g

0x5384,	// (0x00058171) aid_size_cell_colour_1_pane_ParamLimits

0x5384,	// (0x00058171) aid_size_cell_colour_1_pane

0x5398,	// (0x00058185) aid_size_cell_colour_2_pane_ParamLimits

0x5398,	// (0x00058185) aid_size_cell_colour_2_pane

0x53ac,	// (0x00058199) aid_size_cell_colour_3_pane_ParamLimits

0x53ac,	// (0x00058199) aid_size_cell_colour_3_pane

0x53c0,	// (0x000581ad) aid_size_cell_colour_4_pane_ParamLimits

0x53c0,	// (0x000581ad) aid_size_cell_colour_4_pane

0x5c02,	// (0x000589ef) title_pane_stacon_g1_ParamLimits

0x5c02,	// (0x000589ef) title_pane_stacon_g1

0x9505,	// (0x0005c2f2) popup_note_wait_window_g3_ParamLimits

0x9505,	// (0x0005c2f2) popup_note_wait_window_g3

0x957c,	// (0x0005c369) popup_note_wait_window_t5_ParamLimits

0x957c,	// (0x0005c369) popup_note_wait_window_t5

0xec1f,	// (0x00061a0c) main_feb_china_hwr_fs_writing_pane

0x64e7,	// (0x000592d4) popup_feb_china_hwr_fs_window_ParamLimits

0x64e7,	// (0x000592d4) popup_feb_china_hwr_fs_window

0x6b2e,	// (0x0005991b) aid_size_cell_hwr_fs_ParamLimits

0x6b2e,	// (0x0005991b) aid_size_cell_hwr_fs

0x8eed,	// (0x0005bcda) bg_popup_sub_pane_cp3_ParamLimits

0x8eed,	// (0x0005bcda) bg_popup_sub_pane_cp3

0x6b43,	// (0x00059930) grid_hwr_fs_pane_ParamLimits

0x6b43,	// (0x00059930) grid_hwr_fs_pane

0x6b5b,	// (0x00059948) linegrid_hwr_fs_pane_ParamLimits

0x6b5b,	// (0x00059948) linegrid_hwr_fs_pane

0x6b6b,	// (0x00059958) cell_hwr_fs_pane_ParamLimits

0x6b6b,	// (0x00059958) cell_hwr_fs_pane

0x8ef9,	// (0x0005bce6) linegrid_hwr_fs_pane_g1_ParamLimits

0x8ef9,	// (0x0005bce6) linegrid_hwr_fs_pane_g1

0x8f05,	// (0x0005bcf2) linegrid_hwr_fs_pane_g2_ParamLimits

0x8f05,	// (0x0005bcf2) linegrid_hwr_fs_pane_g2

0x8f17,	// (0x0005bd04) linegrid_hwr_fs_pane_g3_ParamLimits

0x8f17,	// (0x0005bd04) linegrid_hwr_fs_pane_g3

0x6b8f,	// (0x0005997c) linegrid_hwr_fs_pane_g4_ParamLimits

0x6b8f,	// (0x0005997c) linegrid_hwr_fs_pane_g4

0x6bad,	// (0x0005999a) linegrid_hwr_fs_pane_g5_ParamLimits

0x6bad,	// (0x0005999a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d5,	// (0x000625c2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d5,	// (0x000625c2) linegrid_hwr_fs_pane_g

0x8f23,	// (0x0005bd10) cell_hwr_fs_pane_g1_ParamLimits

0x8f23,	// (0x0005bd10) cell_hwr_fs_pane_g1

0x8cc0,	// (0x0005baad) cell_hwr_fs_pane_g2_ParamLimits

0x8cc0,	// (0x0005baad) cell_hwr_fs_pane_g2

0x8f39,	// (0x0005bd26) cell_hwr_fs_pane_g3_ParamLimits

0x8f39,	// (0x0005bd26) cell_hwr_fs_pane_g3

0x8f46,	// (0x0005bd33) cell_hwr_fs_pane_g4_ParamLimits

0x8f46,	// (0x0005bd33) cell_hwr_fs_pane_g4

0x0003,

0xf7e0,	// (0x000625cd) cell_hwr_fs_pane_g_ParamLimits

0xf7e0,	// (0x000625cd) cell_hwr_fs_pane_g

0x6bc3,	// (0x000599b0) cell_hwr_fs_pane_t1

0xec1f,	// (0x00061a0c) grid_highlight_pane_cp6

0xec1f,	// (0x00061a0c) main_idle_act2_pane

0xf3e0,	// (0x000621cd) aid_inside_area_popup_secondary

0x9bb5,	// (0x0005c9a2) aid_inside_area_window_primary_ParamLimits

0x9bb5,	// (0x0005c9a2) aid_inside_area_window_primary

0xa976,	// (0x0005d763) ai2_news_ticker_pane

0xa97e,	// (0x0005d76b) aid_size_cell_ai1_link_ParamLimits

0xa97e,	// (0x0005d76b) aid_size_cell_ai1_link

0xa998,	// (0x0005d785) popup_ai2_data_window_ParamLimits

0xa998,	// (0x0005d785) popup_ai2_data_window

0xa9b6,	// (0x0005d7a3) popup_ai2_link_window_ParamLimits

0xa9b6,	// (0x0005d7a3) popup_ai2_link_window

0x8eed,	// (0x0005bcda) bg_popup_sub_pane_cp4_ParamLimits

0x8eed,	// (0x0005bcda) bg_popup_sub_pane_cp4

0xa9cc,	// (0x0005d7b9) grid_ai2_link_pane_ParamLimits

0xa9cc,	// (0x0005d7b9) grid_ai2_link_pane

0xa9e3,	// (0x0005d7d0) popup_ai2_link_window_g1_ParamLimits

0xa9e3,	// (0x0005d7d0) popup_ai2_link_window_g1

0xa9ef,	// (0x0005d7dc) popup_ai2_link_window_g2_ParamLimits

0xa9ef,	// (0x0005d7dc) popup_ai2_link_window_g2

0x0001,

0xf9b3,	// (0x000627a0) popup_ai2_link_window_g_ParamLimits

0xf9b3,	// (0x000627a0) popup_ai2_link_window_g

0xaa00,	// (0x0005d7ed) ai2_mp_button_pane

0xaa08,	// (0x0005d7f5) ai2_mp_volume_pane

0x90d8,	// (0x0005bec5) bg_popup_sub_pane_cp5_ParamLimits

0x90d8,	// (0x0005bec5) bg_popup_sub_pane_cp5

0xaa10,	// (0x0005d7fd) heading_ai2_gene_pane_ParamLimits

0xaa10,	// (0x0005d7fd) heading_ai2_gene_pane

0xaa1c,	// (0x0005d809) list_ai2_gene_pane_ParamLimits

0xaa1c,	// (0x0005d809) list_ai2_gene_pane

0xaa64,	// (0x0005d851) cell_ai2_link_pane_ParamLimits

0xaa64,	// (0x0005d851) cell_ai2_link_pane

0xaa7a,	// (0x0005d867) cell_ai2_link_pane_g1

0xec1f,	// (0x00061a0c) grid_highlight_pane_cp7

0x6f8c,	// (0x00059d79) ai2_mp_volume_pane_g1

0xab4d,	// (0x0005d93a) ai2_mp_volume_pane_g2

0xaac2,	// (0x0005d8af) list_ai2_gene_pane_t1

0xab55,	// (0x0005d942) ai2_mp_volume_pane_g3

0x0002,

0xf9cc,	// (0x000627b9) ai2_mp_volume_pane_g

0x6f94,	// (0x00059d81) volume_small_pane_cp3

0xab5d,	// (0x0005d94a) aid_size_cell_ai2_button

0xab65,	// (0x0005d952) grid_ai2_button_pane

0xab6e,	// (0x0005d95b) cell_ai2_button_pane_ParamLimits

0xab6e,	// (0x0005d95b) cell_ai2_button_pane

0xec15,	// (0x00061a02) cell_ai2_button_pane_g1

0xec1f,	// (0x00061a0c) grid_highlight_pane_cp8

0xab0d,	// (0x0005d8fa) ai2_gene_pane_t1_ParamLimits

0xab0d,	// (0x0005d8fa) ai2_gene_pane_t1

0x642d,	// (0x0005921a) aid_height_parent_landscape

0xa433,	// (0x0005d220) aid_height_set_list

0xa444,	// (0x0005d231) aid_size_parent

0xa795,	// (0x0005d582) aid_size_cell_graphic_pane_ParamLimits

0xaa2c,	// (0x0005d819) popup_ai2_data_window_g1_ParamLimits

0xaa2c,	// (0x0005d819) popup_ai2_data_window_g1

0xaa38,	// (0x0005d825) ai2_news_ticker_pane_g1

0xaa40,	// (0x0005d82d) ai2_news_ticker_pane_g2

0x0001,

0xf9b8,	// (0x000627a5) ai2_news_ticker_pane_g

0xaa48,	// (0x0005d835) ai2_news_ticker_pane_t1

0xaa56,	// (0x0005d843) ai2_news_ticker_pane_t2

0x0001,

0xf9bd,	// (0x000627aa) ai2_news_ticker_pane_t

0xaa83,	// (0x0005d870) heading_ai2_gene_pane_g1

0xaa8b,	// (0x0005d878) heading_ai2_gene_pane_t1_ParamLimits

0xaa8b,	// (0x0005d878) heading_ai2_gene_pane_t1

0xaaa0,	// (0x0005d88d) list_highlight_pane_cp6

0xaaa8,	// (0x0005d895) ai2_gene_pane_ParamLimits

0xaaa8,	// (0x0005d895) ai2_gene_pane

0xaad0,	// (0x0005d8bd) list_ai2_gene_pane_t2

0x0001,

0xf9c2,	// (0x000627af) list_ai2_gene_pane_t

0xaade,	// (0x0005d8cb) list_highlight_pane_cp8_ParamLimits

0xaade,	// (0x0005d8cb) list_highlight_pane_cp8

0xaaef,	// (0x0005d8dc) ai2_gene_pane_g1_ParamLimits

0xaaef,	// (0x0005d8dc) ai2_gene_pane_g1

0xab01,	// (0x0005d8ee) ai2_gene_pane_g2_ParamLimits

0xab01,	// (0x0005d8ee) ai2_gene_pane_g2

0x0001,

0xf9c7,	// (0x000627b4) ai2_gene_pane_g_ParamLimits

0xf9c7,	// (0x000627b4) ai2_gene_pane_g

0xf253,	// (0x00062040) scroll_pane_cp12

0x63ec,	// (0x000591d9) control_pane_t3_ParamLimits

0x63ec,	// (0x000591d9) control_pane_t3

0x886f,	// (0x0005b65c) status_small_pane_g8_ParamLimits

0x886f,	// (0x0005b65c) status_small_pane_g8

0x65e5,	// (0x000593d2) popup_find_window_ParamLimits

0x6812,	// (0x000595ff) popup_note_image_window_ParamLimits

0x39ba,	// (0x000567a7) list_double2_graphic_pane_vc_g1_ParamLimits

0x39ba,	// (0x000567a7) list_double2_graphic_pane_vc_g1

0x8ded,	// (0x0005bbda) list_double2_graphic_pane_vc_g2_ParamLimits

0x8ded,	// (0x0005bbda) list_double2_graphic_pane_vc_g2

0x8df9,	// (0x0005bbe6) list_double2_graphic_pane_vc_g3_ParamLimits

0x8df9,	// (0x0005bbe6) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0006258b) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0006258b) list_double2_graphic_pane_vc_g

0x3b62,	// (0x0005694f) list_double2_graphic_pane_vc_t1_ParamLimits

0x3b62,	// (0x0005694f) list_double2_graphic_pane_vc_t1

0x8ded,	// (0x0005bbda) list_single_heading_pane_vc_g1_ParamLimits

0x8ded,	// (0x0005bbda) list_single_heading_pane_vc_g1

0x8df9,	// (0x0005bbe6) list_single_heading_pane_vc_g2_ParamLimits

0x8df9,	// (0x0005bbe6) list_single_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625ac) list_single_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625ac) list_single_heading_pane_vc_g

0x3b78,	// (0x00056965) list_single_heading_pane_vc_t1_ParamLimits

0x3b78,	// (0x00056965) list_single_heading_pane_vc_t1

0x3b8e,	// (0x0005697b) list_single_heading_pane_vc_t2_ParamLimits

0x3b8e,	// (0x0005697b) list_single_heading_pane_vc_t2

0x0001,

0xf7c4,	// (0x000625b1) list_single_heading_pane_vc_t_ParamLimits

0xf7c4,	// (0x000625b1) list_single_heading_pane_vc_t

0x8ea9,	// (0x0005bc96) list_setting_number_pane_vc_g1_ParamLimits

0x8ea9,	// (0x0005bc96) list_setting_number_pane_vc_g1

0x8eb5,	// (0x0005bca2) list_setting_number_pane_vc_g2_ParamLimits

0x8eb5,	// (0x0005bca2) list_setting_number_pane_vc_g2

0x0001,

0xf7c9,	// (0x000625b6) list_setting_number_pane_vc_g_ParamLimits

0xf7c9,	// (0x000625b6) list_setting_number_pane_vc_g

0x3ba0,	// (0x0005698d) list_setting_number_pane_vc_t1_ParamLimits

0x3ba0,	// (0x0005698d) list_setting_number_pane_vc_t1

0x3bb4,	// (0x000569a1) list_setting_number_pane_vc_t2_ParamLimits

0x3bb4,	// (0x000569a1) list_setting_number_pane_vc_t2

0x3bd0,	// (0x000569bd) list_setting_number_pane_vc_t3_ParamLimits

0x3bd0,	// (0x000569bd) list_setting_number_pane_vc_t3

0x0002,

0xf7ce,	// (0x000625bb) list_setting_number_pane_vc_t_ParamLimits

0xf7ce,	// (0x000625bb) list_setting_number_pane_vc_t

0x3bfe,	// (0x000569eb) set_value_pane_vc_ParamLimits

0x3bfe,	// (0x000569eb) set_value_pane_vc

0xa62d,	// (0x0005d41a) list_double2_graphic_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double2_graphic_pane_vc

0xa62d,	// (0x0005d41a) list_double2_large_graphic_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double2_large_graphic_pane_vc

0xa62d,	// (0x0005d41a) list_double2_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double2_pane_vc

0xa62d,	// (0x0005d41a) list_double_graphic_heading_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double_graphic_heading_pane_vc

0xa62d,	// (0x0005d41a) list_double_graphic_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double_graphic_pane_vc

0xa62d,	// (0x0005d41a) list_double_heading_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double_heading_pane_vc

0xa641,	// (0x0005d42e) list_double_large_graphic_pane_vc_ParamLimits

0xa641,	// (0x0005d42e) list_double_large_graphic_pane_vc

0xa62d,	// (0x0005d41a) list_double_number_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double_number_pane_vc

0xa62d,	// (0x0005d41a) list_double_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double_pane_vc

0xa62d,	// (0x0005d41a) list_double_time_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_double_time_pane_vc

0xa62d,	// (0x0005d41a) list_setting_number_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_setting_number_pane_vc

0xa62d,	// (0x0005d41a) list_setting_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_setting_pane_vc

0xa62d,	// (0x0005d41a) list_single_graphic_heading_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_single_graphic_heading_pane_vc

0xa62d,	// (0x0005d41a) list_single_heading_pane_vc_ParamLimits

0xa62d,	// (0x0005d41a) list_single_heading_pane_vc

0x9c53,	// (0x0005ca40) list_single_number_heading_pane_vc_ParamLimits

0x9c53,	// (0x0005ca40) list_single_number_heading_pane_vc

0x39ba,	// (0x000567a7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x39ba,	// (0x000567a7) list_double_graphic_heading_pane_vc_g1

0x855b,	// (0x0005b348) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x855b,	// (0x0005b348) list_double_graphic_heading_pane_vc_g2

0x9cae,	// (0x0005ca9b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x9cae,	// (0x0005ca9b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d3,	// (0x000627c0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d3,	// (0x000627c0) list_double_graphic_heading_pane_vc_g

0x3c47,	// (0x00056a34) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3c47,	// (0x00056a34) list_double_graphic_heading_pane_vc_t1

0x3c5d,	// (0x00056a4a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c5d,	// (0x00056a4a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9da,	// (0x000627c7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9da,	// (0x000627c7) list_double_graphic_heading_pane_vc_t

0x8ea9,	// (0x0005bc96) list_setting_pane_vc_g1_ParamLimits

0x8ea9,	// (0x0005bc96) list_setting_pane_vc_g1

0x8eb5,	// (0x0005bca2) list_setting_pane_vc_g2_ParamLimits

0x8eb5,	// (0x0005bca2) list_setting_pane_vc_g2

0x0001,

0xf7c9,	// (0x000625b6) list_setting_pane_vc_g_ParamLimits

0xf7c9,	// (0x000625b6) list_setting_pane_vc_g

0x3c7b,	// (0x00056a68) list_setting_pane_vc_t1_ParamLimits

0x3c7b,	// (0x00056a68) list_setting_pane_vc_t1

0x3c97,	// (0x00056a84) list_setting_pane_vc_t2_ParamLimits

0x3c97,	// (0x00056a84) list_setting_pane_vc_t2

0x0001,

0xfa08,	// (0x000627f5) list_setting_pane_vc_t_ParamLimits

0xfa08,	// (0x000627f5) list_setting_pane_vc_t

0x3bfe,	// (0x000569eb) set_value_pane_cp_vc_ParamLimits

0x3bfe,	// (0x000569eb) set_value_pane_cp_vc

0x8ded,	// (0x0005bbda) list_single_number_heading_pane_vc_g1_ParamLimits

0x8ded,	// (0x0005bbda) list_single_number_heading_pane_vc_g1

0x8df9,	// (0x0005bbe6) list_single_number_heading_pane_vc_g2_ParamLimits

0x8df9,	// (0x0005bbe6) list_single_number_heading_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625ac) list_single_number_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625ac) list_single_number_heading_pane_vc_g

0x3992,	// (0x0005677f) list_single_number_heading_pane_vc_t1_ParamLimits

0x3992,	// (0x0005677f) list_single_number_heading_pane_vc_t1

0x3cb3,	// (0x00056aa0) list_single_number_heading_pane_vc_t2_ParamLimits

0x3cb3,	// (0x00056aa0) list_single_number_heading_pane_vc_t2

0x39a8,	// (0x00056795) list_single_number_heading_pane_vc_t3_ParamLimits

0x39a8,	// (0x00056795) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0d,	// (0x000627fa) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0d,	// (0x000627fa) list_single_number_heading_pane_vc_t

0x39ba,	// (0x000567a7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x39ba,	// (0x000567a7) list_single_graphic_heading_pane_vc_g1

0x8ded,	// (0x0005bbda) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8ded,	// (0x0005bbda) list_single_graphic_heading_pane_vc_g4

0x8df9,	// (0x0005bbe6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8df9,	// (0x0005bbe6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0006258b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0006258b) list_single_graphic_heading_pane_vc_g

0x3992,	// (0x0005677f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3992,	// (0x0005677f) list_single_graphic_heading_pane_vc_t1

0x3cc9,	// (0x00056ab6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3cc9,	// (0x00056ab6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x00062801) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x00062801) list_single_graphic_heading_pane_vc_t

0x8ded,	// (0x0005bbda) list_double2_pane_vc_g1_ParamLimits

0x8ded,	// (0x0005bbda) list_double2_pane_vc_g1

0x8df9,	// (0x0005bbe6) list_double2_pane_vc_g2_ParamLimits

0x8df9,	// (0x0005bbe6) list_double2_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625ac) list_double2_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625ac) list_double2_pane_vc_g

0x3c31,	// (0x00056a1e) list_double2_pane_vc_t1_ParamLimits

0x3c31,	// (0x00056a1e) list_double2_pane_vc_t1

0x9cba,	// (0x0005caa7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9cba,	// (0x0005caa7) list_double2_large_graphic_pane_vc_g1

0x8ded,	// (0x0005bbda) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8ded,	// (0x0005bbda) list_double2_large_graphic_pane_vc_g2

0x8df9,	// (0x0005bbe6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8df9,	// (0x0005bbe6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x00062806) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x00062806) list_double2_large_graphic_pane_vc_g

0x39c6,	// (0x000567b3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x39c6,	// (0x000567b3) list_double2_large_graphic_pane_vc_t1

0x9cc6,	// (0x0005cab3) list_double_time_pane_vc_g1_ParamLimits

0x9cc6,	// (0x0005cab3) list_double_time_pane_vc_g1

0x9cd2,	// (0x0005cabf) list_double_time_pane_vc_g2_ParamLimits

0x9cd2,	// (0x0005cabf) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x0006280d) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x0006280d) list_double_time_pane_vc_g

0x3cdb,	// (0x00056ac8) list_double_time_pane_vc_t1_ParamLimits

0x3cdb,	// (0x00056ac8) list_double_time_pane_vc_t1

0x3d05,	// (0x00056af2) list_double_time_pane_vc_t2_ParamLimits

0x3d05,	// (0x00056af2) list_double_time_pane_vc_t2

0x3d4e,	// (0x00056b3b) list_double_time_pane_vc_t3_ParamLimits

0x3d4e,	// (0x00056b3b) list_double_time_pane_vc_t3

0x3d60,	// (0x00056b4d) list_double_time_pane_vc_t4_ParamLimits

0x3d60,	// (0x00056b4d) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x00062812) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x00062812) list_double_time_pane_vc_t

0x8ded,	// (0x0005bbda) list_double_pane_vc_g1_ParamLimits

0x8ded,	// (0x0005bbda) list_double_pane_vc_g1

0x8df9,	// (0x0005bbe6) list_double_pane_vc_g2_ParamLimits

0x8df9,	// (0x0005bbe6) list_double_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625ac) list_double_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625ac) list_double_pane_vc_g

0x3d74,	// (0x00056b61) list_double_pane_vc_t1_ParamLimits

0x3d74,	// (0x00056b61) list_double_pane_vc_t1

0x3d88,	// (0x00056b75) list_double_pane_vc_t2_ParamLimits

0x3d88,	// (0x00056b75) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x0006281b) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x0006281b) list_double_pane_vc_t

0x8ded,	// (0x0005bbda) list_double_number_pane_vc_g1_ParamLimits

0x8ded,	// (0x0005bbda) list_double_number_pane_vc_g1

0x8df9,	// (0x0005bbe6) list_double_number_pane_vc_g2_ParamLimits

0x8df9,	// (0x0005bbe6) list_double_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000625ac) list_double_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000625ac) list_double_number_pane_vc_g

0x3c1f,	// (0x00056a0c) list_double_number_pane_vc_t1_ParamLimits

0x3c1f,	// (0x00056a0c) list_double_number_pane_vc_t1

0x3d9e,	// (0x00056b8b) list_double_number_pane_vc_t2_ParamLimits

0x3d9e,	// (0x00056b8b) list_double_number_pane_vc_t2

0x3d88,	// (0x00056b75) list_double_number_pane_vc_t3_ParamLimits

0x3d88,	// (0x00056b75) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x00062820) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x00062820) list_double_number_pane_vc_t

0x9cde,	// (0x0005cacb) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9cde,	// (0x0005cacb) list_double_large_graphic_pane_vc_g1

0x9d00,	// (0x0005caed) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9d00,	// (0x0005caed) list_double_large_graphic_pane_vc_g2

0x9d14,	// (0x0005cb01) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9d14,	// (0x0005cb01) list_double_large_graphic_pane_vc_g3

0x3db2,	// (0x00056b9f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3db2,	// (0x00056b9f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x00062827) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x00062827) list_double_large_graphic_pane_vc_g

0x3dbe,	// (0x00056bab) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3dbe,	// (0x00056bab) list_double_large_graphic_pane_vc_t1

0x3dda,	// (0x00056bc7) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3dda,	// (0x00056bc7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x00062830) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x00062830) list_double_large_graphic_pane_vc_t

0x855b,	// (0x0005b348) list_double_heading_pane_vc_g1_ParamLimits

0x855b,	// (0x0005b348) list_double_heading_pane_vc_g1

0x9cae,	// (0x0005ca9b) list_double_heading_pane_vc_g2_ParamLimits

0x9cae,	// (0x0005ca9b) list_double_heading_pane_vc_g2

0x0001,

0xfa48,	// (0x00062835) list_double_heading_pane_vc_g_ParamLimits

0xfa48,	// (0x00062835) list_double_heading_pane_vc_g

0x3dfa,	// (0x00056be7) list_double_heading_pane_vc_t1_ParamLimits

0x3dfa,	// (0x00056be7) list_double_heading_pane_vc_t1

0x3e0c,	// (0x00056bf9) list_double_heading_pane_vc_t2_ParamLimits

0x3e0c,	// (0x00056bf9) list_double_heading_pane_vc_t2

0x0001,

0xfa4d,	// (0x0006283a) list_double_heading_pane_vc_t_ParamLimits

0xfa4d,	// (0x0006283a) list_double_heading_pane_vc_t

0x3e24,	// (0x00056c11) list_double_graphic_pane_vc_g1_ParamLimits

0x3e24,	// (0x00056c11) list_double_graphic_pane_vc_g1

0x9d23,	// (0x0005cb10) list_double_graphic_pane_vc_g2_ParamLimits

0x9d23,	// (0x0005cb10) list_double_graphic_pane_vc_g2

0x8ded,	// (0x0005bbda) list_double_graphic_pane_vc_g3_ParamLimits

0x8ded,	// (0x0005bbda) list_double_graphic_pane_vc_g3

0x0003,

0xfa52,	// (0x0006283f) list_double_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0006283f) list_double_graphic_pane_vc_g

0x3e30,	// (0x00056c1d) list_double_graphic_pane_vc_t1_ParamLimits

0x3e30,	// (0x00056c1d) list_double_graphic_pane_vc_t1

0x3e5a,	// (0x00056c47) list_double_graphic_pane_vc_t2_ParamLimits

0x3e5a,	// (0x00056c47) list_double_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x00062848) list_double_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x00062848) list_double_graphic_pane_vc_t

0x4d1d,	// (0x00057b0a) aid_size_cell_fastswap

0x4d25,	// (0x00057b12) aid_size_cell_touch_ParamLimits

0x4d25,	// (0x00057b12) aid_size_cell_touch

0x4f90,	// (0x00057d7d) popup_fast_swap_wide_window_ParamLimits

0x4f90,	// (0x00057d7d) popup_fast_swap_wide_window

0x50ae,	// (0x00057e9b) touch_pane_ParamLimits

0x50ae,	// (0x00057e9b) touch_pane

0xf2a9,	// (0x00062096) button_value_adjust_pane_cp2

0x39ea,	// (0x000567d7) button_value_adjust_pane_cp4

0x39f2,	// (0x000567df) form_field_data_pane_cp2

0x59f6,	// (0x000587e3) form_field_data_wide_pane_cp2

0x3042,	// (0x00055e2f) bg_scroll_pane_ParamLimits

0x5e24,	// (0x00058c11) scroll_handle_pane_ParamLimits

0x5e38,	// (0x00058c25) scroll_sc2_down_pane_ParamLimits

0x5e38,	// (0x00058c25) scroll_sc2_down_pane

0x3073,	// (0x00055e60) scroll_sc2_up_pane_ParamLimits

0x3073,	// (0x00055e60) scroll_sc2_up_pane

0xb296,	// (0x0005e083) grid_wheel_folder_pane_g1_ParamLimits

0xb296,	// (0x0005e083) grid_wheel_folder_pane_g1

0x61e5,	// (0x00058fd2) clock_nsta_pane_cp2_ParamLimits

0x61e5,	// (0x00058fd2) clock_nsta_pane_cp2

0x85f2,	// (0x0005b3df) listscroll_midp_pane_ParamLimits

0x85fe,	// (0x0005b3eb) midp_canvas_pane

0x88e9,	// (0x0005b6d6) nsta_clock_indic_pane

0x891d,	// (0x0005b70a) listscroll_form_pane_vc

0x8925,	// (0x0005b712) listscroll_set_pane_vc_ParamLimits

0x8925,	// (0x0005b712) listscroll_set_pane_vc

0x8a1c,	// (0x0005b809) clock_nsta_pane

0x8a99,	// (0x0005b886) indicator_nsta_pane

0x8d87,	// (0x0005bb74) bg_popup_sub_pane_cp2_ParamLimits

0x8d9b,	// (0x0005bb88) find_pane_cp2_ParamLimits

0x8d9b,	// (0x0005bb88) find_pane_cp2

0x8db1,	// (0x0005bb9e) grid_toobar_pane_ParamLimits

0x8ec1,	// (0x0005bcae) list_form_gen_pane_vc_ParamLimits

0x8ec1,	// (0x0005bcae) list_form_gen_pane_vc

0x8ed7,	// (0x0005bcc4) scroll_pane_cp8_vc_ParamLimits

0x8ed7,	// (0x0005bcc4) scroll_pane_cp8_vc

0x8f53,	// (0x0005bd40) data_form_wide_pane_vc_ParamLimits

0x8f53,	// (0x0005bd40) data_form_wide_pane_vc

0x8f5f,	// (0x0005bd4c) form_field_data_wide_pane_vc_g1

0x8f67,	// (0x0005bd54) form_field_data_wide_pane_vc_t1_ParamLimits

0x8f67,	// (0x0005bd54) form_field_data_wide_pane_vc_t1

0xf2bd,	// (0x000620aa) input_focus_pane_cp6_vc_ParamLimits

0xf2bd,	// (0x000620aa) input_focus_pane_cp6_vc

0x9263,	// (0x0005c050) list_midp_pane_ParamLimits

0x926f,	// (0x0005c05c) scroll_pane_cp16_ParamLimits

0x926f,	// (0x0005c05c) scroll_pane_cp16

0x92d9,	// (0x0005c0c6) button_value_adjust_pane_ParamLimits

0x92d9,	// (0x0005c0c6) button_value_adjust_pane

0xa456,	// (0x0005d243) button_value_adjust_pane_cp6_ParamLimits

0xa456,	// (0x0005d243) button_value_adjust_pane_cp6

0xa59e,	// (0x0005d38b) settings_code_pane_cp_ParamLimits

0xa59e,	// (0x0005d38b) settings_code_pane_cp

0xec15,	// (0x00061a02) cell_touch_pane_g1

0xec15,	// (0x00061a02) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x000624d0) cell_touch_pane_g

0xab80,	// (0x0005d96d) cell_touch_pane_cp_ParamLimits

0xab80,	// (0x0005d96d) cell_touch_pane_cp

0xab90,	// (0x0005d97d) cell_touch_pane_ParamLimits

0xab90,	// (0x0005d97d) cell_touch_pane

0xec15,	// (0x00061a02) scroll_sc2_down_pane_g1

0xec15,	// (0x00061a02) scroll_sc2_up_pane_g1

0xec1f,	// (0x00061a0c) bg_set_opt_pane_cp4_vc

0xaba1,	// (0x0005d98e) list_set_graphic_pane_vc_g1_ParamLimits

0xaba1,	// (0x0005d98e) list_set_graphic_pane_vc_g1

0xabad,	// (0x0005d99a) list_set_graphic_pane_vc_g2_ParamLimits

0xabad,	// (0x0005d99a) list_set_graphic_pane_vc_g2

0x0001,

0xf9df,	// (0x000627cc) list_set_graphic_pane_vc_g_ParamLimits

0xf9df,	// (0x000627cc) list_set_graphic_pane_vc_g

0xabb9,	// (0x0005d9a6) text_primary_small_cp13_vc_ParamLimits

0xabb9,	// (0x0005d9a6) text_primary_small_cp13_vc

0xabd1,	// (0x0005d9be) list_set_graphic_pane_vc_ParamLimits

0xabd1,	// (0x0005d9be) list_set_graphic_pane_vc

0xec1f,	// (0x00061a0c) input_focus_pane_cp2_vc

0xec15,	// (0x00061a02) setting_code_pane_vc_g1

0xec84,	// (0x00061a71) setting_code_pane_vc_t1

0xabe4,	// (0x0005d9d1) set_text_pane_vc_t1_ParamLimits

0xabe4,	// (0x0005d9d1) set_text_pane_vc_t1

0xec1f,	// (0x00061a0c) input_focus_pane_cp1_vc

0xac05,	// (0x0005d9f2) list_set_text_pane_vc

0xec15,	// (0x00061a02) setting_text_pane_vc_g1

0xec1f,	// (0x00061a0c) bg_set_opt_pane_cp2_vc

0xec7b,	// (0x00061a68) setting_slider_graphic_pane_vc_g1

0xac0f,	// (0x0005d9fc) setting_slider_graphic_pane_vc_t1

0xac21,	// (0x0005da0e) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e4,	// (0x000627d1) setting_slider_graphic_pane_vc_t

0xac33,	// (0x0005da20) slider_set_pane_cp_vc

0xac3d,	// (0x0005da2a) slider_set_pane_vc_g1

0xac46,	// (0x0005da33) slider_set_pane_vc_g2

0x0006,

0xf9e9,	// (0x000627d6) slider_set_pane_vc_g

0xf315,	// (0x00062102) set_opt_bg_pane_g1_copy1

0xf31d,	// (0x0006210a) set_opt_bg_pane_g2_copy1

0xac72,	// (0x0005da5f) set_opt_bg_pane_g3_copy1

0xf32d,	// (0x0006211a) set_opt_bg_pane_g4_copy1

0xf335,	// (0x00062122) set_opt_bg_pane_g5_copy1

0xf33d,	// (0x0006212a) set_opt_bg_pane_g6_copy1

0xac7c,	// (0x0005da69) set_opt_bg_pane_g7_copy1

0xac86,	// (0x0005da73) set_opt_bg_pane_g8_copy1

0xac90,	// (0x0005da7d) set_opt_bg_pane_g9_copy1

0xec1f,	// (0x00061a0c) bg_set_opt_pane_cp_vc

0xac9a,	// (0x0005da87) setting_slider_pane_vc_t1

0xaca9,	// (0x0005da96) setting_slider_pane_vc_t2

0xacbb,	// (0x0005daa8) setting_slider_pane_vc_t3

0x0002,

0xf9f8,	// (0x000627e5) setting_slider_pane_vc_t

0xaccd,	// (0x0005daba) slider_set_pane_vc

0x6bf0,	// (0x000599dd) volume_set_pane_vc_g1

0x6bf9,	// (0x000599e6) volume_set_pane_vc_g2

0x6c02,	// (0x000599ef) volume_set_pane_vc_g3

0x6c0b,	// (0x000599f8) volume_set_pane_vc_g4

0x6c14,	// (0x00059a01) volume_set_pane_vc_g5

0x6c1d,	// (0x00059a0a) volume_set_pane_vc_g6

0x6c26,	// (0x00059a13) volume_set_pane_vc_g7

0x6c2f,	// (0x00059a1c) volume_set_pane_vc_g8

0x6c38,	// (0x00059a25) volume_set_pane_vc_g9

0x6c41,	// (0x00059a2e) volume_set_pane_vc_g10

0x0009,

0xf896,	// (0x00062683) volume_set_pane_vc_g

0xacd7,	// (0x0005dac4) volume_set_pane_vc

0xace1,	// (0x0005dace) button_value_adjust_pane_cp1_vc

0xaceb,	// (0x0005dad8) list_highlight_pane_cp2_vc

0xacf4,	// (0x0005dae1) list_set_pane_vc_ParamLimits

0xacf4,	// (0x0005dae1) list_set_pane_vc

0xad62,	// (0x0005db4f) main_pane_set_vc_t1_ParamLimits

0xad62,	// (0x0005db4f) main_pane_set_vc_t1

0xad77,	// (0x0005db64) main_pane_set_vc_t2_ParamLimits

0xad77,	// (0x0005db64) main_pane_set_vc_t2

0xad89,	// (0x0005db76) main_pane_set_vc_t3_ParamLimits

0xad89,	// (0x0005db76) main_pane_set_vc_t3

0xad9d,	// (0x0005db8a) main_pane_set_vc_t4_ParamLimits

0xad9d,	// (0x0005db8a) main_pane_set_vc_t4

0x0003,

0xf9ff,	// (0x000627ec) main_pane_set_vc_t_ParamLimits

0xf9ff,	// (0x000627ec) main_pane_set_vc_t

0xadb1,	// (0x0005db9e) setting_code_pane_vc_ParamLimits

0xadb1,	// (0x0005db9e) setting_code_pane_vc

0xadc2,	// (0x0005dbaf) setting_slider_graphic_pane_vc

0xadc2,	// (0x0005dbaf) setting_slider_pane_vc

0xadc2,	// (0x0005dbaf) setting_text_pane_vc

0xadc2,	// (0x0005dbaf) setting_volume_pane_vc

0xadcc,	// (0x0005dbb9) scroll_pane_cp121_vc

0xf297,	// (0x00062084) set_content_pane_vc

0xadd4,	// (0x0005dbc1) button_value_adjust_pane_g1

0xaddd,	// (0x0005dbca) button_value_adjust_pane_g2

0x0001,

0xfa60,	// (0x0006284d) button_value_adjust_pane_g

0xade6,	// (0x0005dbd3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xade6,	// (0x0005dbd3) form_field_slider_wide_pane_vc_t1

0xadf8,	// (0x0005dbe5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xadf8,	// (0x0005dbe5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa65,	// (0x00062852) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa65,	// (0x00062852) form_field_slider_wide_pane_vc_t

0xeda0,	// (0x00061b8d) input_focus_pane_cp10_vc_ParamLimits

0xeda0,	// (0x00061b8d) input_focus_pane_cp10_vc

0xae24,	// (0x0005dc11) slider_cont_pane_cp1_vc_ParamLimits

0xae24,	// (0x0005dc11) slider_cont_pane_cp1_vc

0xae36,	// (0x0005dc23) slider_form_pane_g1_cp2

0xac46,	// (0x0005da33) slider_form_pane_g2_cp2

0xae63,	// (0x0005dc50) form_field_slider_pane_vc_t3

0xae71,	// (0x0005dc5e) form_field_slider_pane_vc_t4

0xae7f,	// (0x0005dc6c) slider_form_pane_vc_ParamLimits

0xae7f,	// (0x0005dc6c) slider_form_pane_vc

0xae8c,	// (0x0005dc79) form_field_slider_pane_vc_t1_ParamLimits

0xae8c,	// (0x0005dc79) form_field_slider_pane_vc_t1

0xadf8,	// (0x0005dbe5) form_field_slider_pane_vc_t2_ParamLimits

0xadf8,	// (0x0005dbe5) form_field_slider_pane_vc_t2

0x0001,

0xfa77,	// (0x00062864) form_field_slider_pane_vc_t_ParamLimits

0xfa77,	// (0x00062864) form_field_slider_pane_vc_t

0xeda0,	// (0x00061b8d) input_focus_pane_cp9_vc_ParamLimits

0xeda0,	// (0x00061b8d) input_focus_pane_cp9_vc

0xaea2,	// (0x0005dc8f) slider_cont_pane_vc_ParamLimits

0xaea2,	// (0x0005dc8f) slider_cont_pane_vc

0xaeb6,	// (0x0005dca3) list_form_graphic_pane_cp_vc_ParamLimits

0xaeb6,	// (0x0005dca3) list_form_graphic_pane_cp_vc

0x8f5f,	// (0x0005bd4c) form_field_popup_wide_pane_vc_g1

0xaecb,	// (0x0005dcb8) form_field_popup_wide_pane_vc_t1_ParamLimits

0xaecb,	// (0x0005dcb8) form_field_popup_wide_pane_vc_t1

0xf2bd,	// (0x000620aa) input_focus_pane_cp8_vc_ParamLimits

0xf2bd,	// (0x000620aa) input_focus_pane_cp8_vc

0xaf10,	// (0x0005dcfd) list_form_wide_pane_vc_ParamLimits

0xaf10,	// (0x0005dcfd) list_form_wide_pane_vc

0xaf1c,	// (0x0005dd09) list_form_graphic_pane_vc_g1

0xaf24,	// (0x0005dd11) list_form_graphic_pane_vc_t1_ParamLimits

0xaf24,	// (0x0005dd11) list_form_graphic_pane_vc_t1

0xec6d,	// (0x00061a5a) list_highlight_pane_cp5_vc_ParamLimits

0xec6d,	// (0x00061a5a) list_highlight_pane_cp5_vc

0xaf40,	// (0x0005dd2d) list_form_graphic_pane_vc_ParamLimits

0xaf40,	// (0x0005dd2d) list_form_graphic_pane_vc

0x8f5f,	// (0x0005bd4c) form_field_popup_pane_vc_g1

0xaf56,	// (0x0005dd43) form_field_popup_pane_vc_t1_ParamLimits

0xaf56,	// (0x0005dd43) form_field_popup_pane_vc_t1

0xf2bd,	// (0x000620aa) input_focus_pane_cp7_vc_ParamLimits

0xf2bd,	// (0x000620aa) input_focus_pane_cp7_vc

0xaf6d,	// (0x0005dd5a) list_form_pane_vc_ParamLimits

0xaf6d,	// (0x0005dd5a) list_form_pane_vc

0xaf79,	// (0x0005dd66) data_form_pane_vc_t1_ParamLimits

0xaf79,	// (0x0005dd66) data_form_pane_vc_t1

0xf315,	// (0x00062102) input_focus_pane_vc_g1

0xf31d,	// (0x0006210a) input_focus_pane_vc_g2

0xf325,	// (0x00062112) input_focus_pane_vc_g3

0xf32d,	// (0x0006211a) input_focus_pane_vc_g4

0xf335,	// (0x00062122) input_focus_pane_vc_g5

0xf33d,	// (0x0006212a) input_focus_pane_vc_g6

0xf345,	// (0x00062132) input_focus_pane_vc_g7

0xf34d,	// (0x0006213a) input_focus_pane_vc_g8

0xf355,	// (0x00062142) input_focus_pane_vc_g9

0xec15,	// (0x00061a02) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00062459) input_focus_pane_vc_g

0x8f53,	// (0x0005bd40) data_form_pane_vc_ParamLimits

0x8f53,	// (0x0005bd40) data_form_pane_vc

0x8f5f,	// (0x0005bd4c) form_field_data_pane_vc_g1

0xaf96,	// (0x0005dd83) form_field_data_pane_vc_t1_ParamLimits

0xaf96,	// (0x0005dd83) form_field_data_pane_vc_t1

0xf2bd,	// (0x000620aa) input_focus_pane_vc_ParamLimits

0xf2bd,	// (0x000620aa) input_focus_pane_vc

0xafb0,	// (0x0005dd9d) button_value_adjust_pane_cp3_vc

0xafb8,	// (0x0005dda5) button_value_adjust_pane_cp5_vc

0xafc0,	// (0x0005ddad) form_field_data_pane_vc_ParamLimits

0xafc0,	// (0x0005ddad) form_field_data_pane_vc

0xafdb,	// (0x0005ddc8) form_field_data_pane_vc_cp2

0xafe3,	// (0x0005ddd0) form_field_data_wide_pane_vc_ParamLimits

0xafe3,	// (0x0005ddd0) form_field_data_wide_pane_vc

0xaffd,	// (0x0005ddea) form_field_data_wide_pane_vc_cp2

0xb005,	// (0x0005ddf2) form_field_popup_pane_vc_ParamLimits

0xb005,	// (0x0005ddf2) form_field_popup_pane_vc

0xb020,	// (0x0005de0d) form_field_popup_wide_pane_vc_ParamLimits

0xb020,	// (0x0005de0d) form_field_popup_wide_pane_vc

0xb03a,	// (0x0005de27) form_field_slider_pane_vc_ParamLimits

0xb03a,	// (0x0005de27) form_field_slider_pane_vc

0xb04d,	// (0x0005de3a) form_field_slider_wide_pane_vc_ParamLimits

0xb04d,	// (0x0005de3a) form_field_slider_wide_pane_vc

0xb060,	// (0x0005de4d) grid_touch_1_pane_ParamLimits

0xb060,	// (0x0005de4d) grid_touch_1_pane

0xb06c,	// (0x0005de59) grid_touch_2_pane_ParamLimits

0xb06c,	// (0x0005de59) grid_touch_2_pane

0x88b4,	// (0x0005b6a1) touch_pane_g1_ParamLimits

0x88b4,	// (0x0005b6a1) touch_pane_g1

0xb086,	// (0x0005de73) cell_app_pane_cp_wide_ParamLimits

0xb086,	// (0x0005de73) cell_app_pane_cp_wide

0xb097,	// (0x0005de84) grid_popup_fast_wide_pane_ParamLimits

0xb097,	// (0x0005de84) grid_popup_fast_wide_pane

0xb0ab,	// (0x0005de98) scroll_pane_cp19_ParamLimits

0xb0ab,	// (0x0005de98) scroll_pane_cp19

0xec1f,	// (0x00061a0c) bg_popup_window_pane_cp20

0xb0bf,	// (0x0005deac) listscroll_popup_fast_wide_pane

0xb0c7,	// (0x0005deb4) grid_indicator_nsta_pane

0xb0d9,	// (0x0005dec6) clock_nsta_pane_g1

0xb0e2,	// (0x0005decf) clock_nsta_pane_t1

0xb0fe,	// (0x0005deeb) cell_indicator_nsta_pane_ParamLimits

0xb0fe,	// (0x0005deeb) cell_indicator_nsta_pane

0xb133,	// (0x0005df20) cell_indicator_nsta_pane_g1

0xb141,	// (0x0005df2e) cell_indicator_nsta_pane_g2

0x0001,

0xfa88,	// (0x00062875) cell_indicator_nsta_pane_g

0xb154,	// (0x0005df41) clock_nsta_pane_cp

0xb15d,	// (0x0005df4a) indicator_nsta_pane_cp

0xb167,	// (0x0005df54) nsta_clock_indic_pane_g1

0xeca9,	// (0x00061a96) grid_indicator_pane

0x3165,	// (0x00055f52) scroll_pane_cp29

0x6134,	// (0x00058f21) indicator_nsta_pane_cp2_ParamLimits

0x6134,	// (0x00058f21) indicator_nsta_pane_cp2

0xec6d,	// (0x00061a5a) main_apps_wheel_pane

0x9140,	// (0x0005bf2d) form_midp_field_text_pane_ParamLimits

0x928f,	// (0x0005c07c) scroll_bar_cp050_ParamLimits

0xb1c0,	// (0x0005dfad) cell_indicator_pane_ParamLimits

0xb1c0,	// (0x0005dfad) cell_indicator_pane

0xb1d8,	// (0x0005dfc5) cell_indicator_pane_g1

0xb1e2,	// (0x0005dfcf) grid_wheel_folder_pane_ParamLimits

0xb1e2,	// (0x0005dfcf) grid_wheel_folder_pane

0xb1f6,	// (0x0005dfe3) list_wheel_apps_pane_ParamLimits

0xb1f6,	// (0x0005dfe3) list_wheel_apps_pane

0xb209,	// (0x0005dff6) main_apps_wheel_pane_g1_ParamLimits

0xb209,	// (0x0005dff6) main_apps_wheel_pane_g1

0xb225,	// (0x0005e012) main_apps_wheel_pane_g2_ParamLimits

0xb225,	// (0x0005e012) main_apps_wheel_pane_g2

0x0001,

0xfaa4,	// (0x00062891) main_apps_wheel_pane_g_ParamLimits

0xfaa4,	// (0x00062891) main_apps_wheel_pane_g

0xb241,	// (0x0005e02e) main_apps_wheel_pane_t1_ParamLimits

0xb241,	// (0x0005e02e) main_apps_wheel_pane_t1

0xb26a,	// (0x0005e057) list_wheel_apps_pane_g1

0xb272,	// (0x0005e05f) list_wheel_apps_pane_g2

0xb27a,	// (0x0005e067) list_wheel_apps_pane_g3

0xb282,	// (0x0005e06f) list_wheel_apps_pane_g4

0xb28c,	// (0x0005e079) list_wheel_apps_pane_g5

0x0004,

0xfaa9,	// (0x00062896) list_wheel_apps_pane_g

0x845b,	// (0x0005b248) navi_icon_text_pane

0x894d,	// (0x0005b73a) aid_fill_nsta

0xb2ad,	// (0x0005e09a) navi_icon_text_pane_g1

0xb2b9,	// (0x0005e0a6) navi_icon_text_pane_t1

0x82fd,	// (0x0005b0ea) list_set_graphic_pane_t1_ParamLimits

0x82fd,	// (0x0005b0ea) list_set_graphic_pane_t1

0x99fc,	// (0x0005c7e9) popup_midp_note_alarm_window_t6_ParamLimits

0x99fc,	// (0x0005c7e9) popup_midp_note_alarm_window_t6

0x9a0e,	// (0x0005c7fb) popup_midp_note_alarm_window_t7_ParamLimits

0x9a0e,	// (0x0005c7fb) popup_midp_note_alarm_window_t7

0x9a20,	// (0x0005c80d) popup_midp_note_alarm_window_t8_ParamLimits

0x9a20,	// (0x0005c80d) popup_midp_note_alarm_window_t8

0x9a32,	// (0x0005c81f) popup_midp_note_alarm_window_t9_ParamLimits

0x9a32,	// (0x0005c81f) popup_midp_note_alarm_window_t9

0x9a44,	// (0x0005c831) popup_midp_note_alarm_window_t10_ParamLimits

0x9a44,	// (0x0005c831) popup_midp_note_alarm_window_t10

0x9a56,	// (0x0005c843) popup_midp_note_alarm_window_t11_ParamLimits

0x9a56,	// (0x0005c843) popup_midp_note_alarm_window_t11

0x9a68,	// (0x0005c855) scroll_pane_cp17_ParamLimits

0x9a68,	// (0x0005c855) scroll_pane_cp17

0x6bf0,	// (0x000599dd) volume_small_pane_cp_g1

0x6f9d,	// (0x00059d8a) volume_small_pane_cp_g2

0x6fa6,	// (0x00059d93) volume_small_pane_cp_g3

0x6faf,	// (0x00059d9c) volume_small_pane_cp_g4

0x6fb8,	// (0x00059da5) volume_small_pane_cp_g5

0x6fc1,	// (0x00059dae) volume_small_pane_cp_g6

0x6fca,	// (0x00059db7) volume_small_pane_cp_g7

0x6fd3,	// (0x00059dc0) volume_small_pane_cp_g8

0x6fdc,	// (0x00059dc9) volume_small_pane_cp_g9

0x6fe5,	// (0x00059dd2) volume_small_pane_cp_g10

0x86c8,	// (0x0005b4b5) midp_ticker_pane_g1_ParamLimits

0x86d4,	// (0x0005b4c1) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00062525) midp_ticker_pane_g_ParamLimits

0x86e0,	// (0x0005b4cd) midp_ticker_pane_t1_ParamLimits

0x8963,	// (0x0005b750) aid_fill_nsta_2

0x927b,	// (0x0005c068) list_form2_midp_pane

0xa5e5,	// (0x0005d3d2) midp_editing_number_pane_ParamLimits

0xa5f4,	// (0x0005d3e1) midp_ticker_pane_ParamLimits

0xb2cb,	// (0x0005e0b8) form2_midp_field_pane

0xb2ef,	// (0x0005e0dc) scroll_pane_cp51

0xb30f,	// (0x0005e0fc) form2_midp_button_pane_ParamLimits

0xb30f,	// (0x0005e0fc) form2_midp_button_pane

0xb321,	// (0x0005e10e) form2_midp_content_pane_ParamLimits

0xb321,	// (0x0005e10e) form2_midp_content_pane

0xb33b,	// (0x0005e128) form2_midp_field_choice_group_pane

0xb343,	// (0x0005e130) form2_midp_field_pane_g1

0xb34b,	// (0x0005e138) form2_midp_field_pane_g2

0xb353,	// (0x0005e140) form2_midp_field_pane_g3

0xb35b,	// (0x0005e148) form2_midp_field_pane_g4

0x0003,

0xface,	// (0x000628bb) form2_midp_field_pane_g

0xb363,	// (0x0005e150) form2_midp_gauge_slider_pane

0xb36b,	// (0x0005e158) form2_midp_gauge_wait_pane

0xb373,	// (0x0005e160) form2_midp_image_pane_ParamLimits

0xb373,	// (0x0005e160) form2_midp_image_pane

0xb38e,	// (0x0005e17b) form2_midp_label_pane_ParamLimits

0xb38e,	// (0x0005e17b) form2_midp_label_pane

0xb3ad,	// (0x0005e19a) form2_midp_label_pane_cp_ParamLimits

0xb3ad,	// (0x0005e19a) form2_midp_label_pane_cp

0xb3ce,	// (0x0005e1bb) form2_midp_string_pane_ParamLimits

0xb3ce,	// (0x0005e1bb) form2_midp_string_pane

0x6fee,	// (0x00059ddb) form2_midp_text_pane_ParamLimits

0x6fee,	// (0x00059ddb) form2_midp_text_pane

0xb3e0,	// (0x0005e1cd) form2_midp_time_pane

0xb3f0,	// (0x0005e1dd) input_focus_pane_cp51_ParamLimits

0xb3f0,	// (0x0005e1dd) input_focus_pane_cp51

0xb408,	// (0x0005e1f5) form2_midp_label_pane_t1_ParamLimits

0xb408,	// (0x0005e1f5) form2_midp_label_pane_t1

0x7011,	// (0x00059dfe) form2_mdip_text_pane_t1_ParamLimits

0x7011,	// (0x00059dfe) form2_mdip_text_pane_t1

0x3e78,	// (0x00056c65) form2_midp_time_pane_t1

0xb456,	// (0x0005e243) form2_midp_gauge_slider_pane_t1

0xb468,	// (0x0005e255) form2_midp_gauge_slider_pane_t2

0xb47a,	// (0x0005e267) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad7,	// (0x000628c4) form2_midp_gauge_slider_pane_t

0xb48c,	// (0x0005e279) form2_midp_slider_pane

0xb498,	// (0x0005e285) form2_midp_gauge_wait_pane_t1

0xb4a6,	// (0x0005e293) form2_midp_wait_pane_ParamLimits

0xb4a6,	// (0x0005e293) form2_midp_wait_pane

0xb4d1,	// (0x0005e2be) list_single_2graphic_pane_cp4_ParamLimits

0xb4d1,	// (0x0005e2be) list_single_2graphic_pane_cp4

0x8fbc,	// (0x0005bda9) list_single_midp_graphic_pane_cp_ParamLimits

0x8fbc,	// (0x0005bda9) list_single_midp_graphic_pane_cp

0xec1f,	// (0x00061a0c) list_highlight_pane_cp20

0xb4ea,	// (0x0005e2d7) list_single_2graphic_pane_g1_cp4

0xaa83,	// (0x0005d870) list_single_2graphic_pane_g2_cp4

0xb4f2,	// (0x0005e2df) list_single_2graphic_pane_t1_cp4

0xec6d,	// (0x00061a5a) list_highlight_pane_cp21

0xb501,	// (0x0005e2ee) list_single_midp_graphic_pane_g4_cp

0xb510,	// (0x0005e2fd) list_single_midp_graphic_pane_t1_cp

0xb525,	// (0x0005e312) form2_mdip_string_pane_t1_ParamLimits

0xb525,	// (0x0005e312) form2_mdip_string_pane_t1

0xec1f,	// (0x00061a0c) bg_wml_button_pane_cp2

0xec15,	// (0x00061a02) form2_midp_image_pane_g1

0x5745,	// (0x00058532) list_double_large_graphic_pane_g5_ParamLimits

0x5745,	// (0x00058532) list_double_large_graphic_pane_g5

0x85f2,	// (0x0005b3df) midp_form_pane_ParamLimits

0xec6d,	// (0x00061a5a) main_apps_wheel_pane_ParamLimits

0x683a,	// (0x00059627) popup_preview_window_ParamLimits

0x683a,	// (0x00059627) popup_preview_window

0x6a21,	// (0x0005980e) popup_touch_info_window_ParamLimits

0x6a21,	// (0x0005980e) popup_touch_info_window

0x6a43,	// (0x00059830) popup_touch_menu_window_ParamLimits

0x6a43,	// (0x00059830) popup_touch_menu_window

0xec0b,	// (0x000619f8) bg_popup_sub_pane_cp6

0xb5c1,	// (0x0005e3ae) list_touch_menu_pane

0xb5c9,	// (0x0005e3b6) list_single_touch_menu_pane_ParamLimits

0xb5c9,	// (0x0005e3b6) list_single_touch_menu_pane

0xb5e1,	// (0x0005e3ce) list_single_touch_menu_pane_t1

0xec6d,	// (0x00061a5a) bg_popup_sub_pane_cp7_ParamLimits

0xec6d,	// (0x00061a5a) bg_popup_sub_pane_cp7

0xb5ef,	// (0x0005e3dc) heading_sub_pane

0xb5f7,	// (0x0005e3e4) list_touch_info_pane_ParamLimits

0xb5f7,	// (0x0005e3e4) list_touch_info_pane

0xb606,	// (0x0005e3f3) list_single_touch_info_pane_ParamLimits

0xb606,	// (0x0005e3f3) list_single_touch_info_pane

0xb618,	// (0x0005e405) list_single_touch_info_pane_t1

0xb626,	// (0x0005e413) list_single_touch_info_pane_t2

0x0001,

0xfae5,	// (0x000628d2) list_single_touch_info_pane_t

0x85ea,	// (0x0005b3d7) bg_popup_heading_pane_cp

0xb634,	// (0x0005e421) heading_sub_pane_t1

0x8eed,	// (0x0005bcda) bg_popup_preview_window_pane_cp_ParamLimits

0x8eed,	// (0x0005bcda) bg_popup_preview_window_pane_cp

0xb5ef,	// (0x0005e3dc) heading_preview_pane

0xb5f7,	// (0x0005e3e4) list_preview_pane_ParamLimits

0xb5f7,	// (0x0005e3e4) list_preview_pane

0xb642,	// (0x0005e42f) popup_preview_window_g1

0xb606,	// (0x0005e3f3) list_single_preview_pane_ParamLimits

0xb606,	// (0x0005e3f3) list_single_preview_pane

0xb64a,	// (0x0005e437) list_single_preview_pane_g1

0xb652,	// (0x0005e43f) list_single_preview_pane_t1

0xb618,	// (0x0005e405) list_single_preview_pane_t2

0x0001,

0xfaea,	// (0x000628d7) list_single_preview_pane_t

0xb660,	// (0x0005e44d) bg_popup_heading_pane_cp2_ParamLimits

0xb660,	// (0x0005e44d) bg_popup_heading_pane_cp2

0xb676,	// (0x0005e463) heading_preview_pane_g1

0xb67e,	// (0x0005e46b) heading_preview_pane_t1_ParamLimits

0xb67e,	// (0x0005e46b) heading_preview_pane_t1

0xecc0,	// (0x00061aad) soft_indicator_pane_t1_ParamLimits

0xf230,	// (0x0006201d) scroll_pane_ParamLimits

0x306a,	// (0x00055e57) scroll_sc2_left_pane

0x3061,	// (0x00055e4e) scroll_sc2_right_pane

0x3089,	// (0x00055e76) scroll_bg_pane_g1_ParamLimits

0x309e,	// (0x00055e8b) scroll_bg_pane_g2_ParamLimits

0x30b6,	// (0x00055ea3) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x000624b0) scroll_bg_pane_g_ParamLimits

0x3089,	// (0x00055e76) scroll_handle_pane_g1_ParamLimits

0x30d8,	// (0x00055ec5) scroll_handle_pane_g2_ParamLimits

0x30b6,	// (0x00055ea3) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x000624b7) scroll_handle_pane_g_ParamLimits

0x647f,	// (0x0005926c) popup_choice_list_window_ParamLimits

0x647f,	// (0x0005926c) popup_choice_list_window

0x8d93,	// (0x0005bb80) choice_list_pane

0x8e2d,	// (0x0005bc1a) cell_toolbar_pane_t1

0x8e55,	// (0x0005bc42) toolbar_button_pane_ParamLimits

0xa120,	// (0x0005cf0d) ai_gene_pane_1_t2_ParamLimits

0xa120,	// (0x0005cf0d) ai_gene_pane_1_t2

0x0001,

0xf8f2,	// (0x000626df) ai_gene_pane_1_t_ParamLimits

0xf8f2,	// (0x000626df) ai_gene_pane_1_t

0xb69b,	// (0x0005e488) scroll_sc2_left_pane_g1

0xb69b,	// (0x0005e488) scroll_sc2_right_pane_g1

0x8911,	// (0x0005b6fe) bg_popup_sub_pane_cp10

0xb6a5,	// (0x0005e492) list_choice_list_pane

0xb6be,	// (0x0005e4ab) list_single_choice_list_pane_ParamLimits

0xb6be,	// (0x0005e4ab) list_single_choice_list_pane

0xb6d6,	// (0x0005e4c3) list_single_choice_list_pane_g1

0xf41e,	// (0x0006220b) list_single_choice_list_pane_t1_ParamLimits

0xf41e,	// (0x0006220b) list_single_choice_list_pane_t1

0xb6de,	// (0x0005e4cb) choice_list_pane_g1

0xb6e6,	// (0x0005e4d3) choice_list_pane_t1

0xec0b,	// (0x000619f8) input_focus_pane_cp11

0x12cb,	// (0x000540b8) title_pane_stacon_g2_ParamLimits

0x12cb,	// (0x000540b8) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00062496) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00062496) title_pane_stacon_g

0x85ea,	// (0x0005b3d7) cursor_press_pane

0x6539,	// (0x00059326) popup_fep_hwr_window_ParamLimits

0x6539,	// (0x00059326) popup_fep_hwr_window

0x65c3,	// (0x000593b0) popup_fep_vkb_window_ParamLimits

0x65c3,	// (0x000593b0) popup_fep_vkb_window

0xb6f4,	// (0x0005e4e1) cursor_press_pane_g1

0x0002,

0xfb13,	// (0x00062900) fep_vkb_side_pane_g_ParamLimits

0x7069,	// (0x00059e56) fep_hwr_candidate_pane_ParamLimits

0x7069,	// (0x00059e56) fep_hwr_candidate_pane

0x7093,	// (0x00059e80) fep_hwr_side_pane_ParamLimits

0x7093,	// (0x00059e80) fep_hwr_side_pane

0x70b5,	// (0x00059ea2) fep_hwr_top_pane_ParamLimits

0x70b5,	// (0x00059ea2) fep_hwr_top_pane

0x70cd,	// (0x00059eba) fep_hwr_write_pane_ParamLimits

0x70cd,	// (0x00059eba) fep_hwr_write_pane

0xfb13,	// (0x00062900) fep_vkb_side_pane_g

0xb6fc,	// (0x0005e4e9) fep_hwr_top_pane_g1

0xb70e,	// (0x0005e4fb) fep_hwr_top_pane_g2

0x7107,	// (0x00059ef4) fep_hwr_top_pane_g3

0x0002,

0xfaef,	// (0x000628dc) fep_hwr_top_pane_g

0x711c,	// (0x00059f09) fep_hwr_top_text_pane

0x31d2,	// (0x00055fbf) fep_hwr_top_text_pane_g1

0xb744,	// (0x0005e531) fep_hwr_top_text_pane_t1

0x7226,	// (0x0005a013) fep_hwr_candidate_pane_g1

0xb98f,	// (0x0005e77c) fep_vkb_keypad_pane_g3_ParamLimits

0xb98f,	// (0x0005e77c) fep_vkb_keypad_pane_g3

0xb9bb,	// (0x0005e7a8) fep_vkb_keypad_pane_g4_ParamLimits

0xb9bb,	// (0x0005e7a8) fep_vkb_keypad_pane_g4

0xba32,	// (0x0005e81f) fep_vkb_bottom_pane_g2_ParamLimits

0xba32,	// (0x0005e81f) fep_vkb_bottom_pane_g2

0x0001,

0xfb1a,	// (0x00062907) fep_vkb_bottom_pane_g_ParamLimits

0xfb1a,	// (0x00062907) fep_vkb_bottom_pane_g

0xb69b,	// (0x0005e488) cell_vkb_side_pane_g2

0x0001,

0xfb24,	// (0x00062911) cell_vkb_side_pane_g

0xbabd,	// (0x0005e8aa) cell_vkb_side_pane_t1

0xbacb,	// (0x0005e8b8) cell_vkb_side_pane_t1_copy1

0xb69b,	// (0x0005e488) bg_fep_vkb_candidate_pane_g2

0xbc0f,	// (0x0005e9fc) cell_vkb_candidate_pane_ParamLimits

0xb752,	// (0x0005e53f) aid_size_cell_vkb_ParamLimits

0xb752,	// (0x0005e53f) aid_size_cell_vkb

0xbc0f,	// (0x0005e9fc) cell_vkb_candidate_pane

0x724d,	// (0x0005a03a) bg_popup_fep_shadow_pane_g1

0xb7e4,	// (0x0005e5d1) fep_vkb_bottom_pane_ParamLimits

0xb7e4,	// (0x0005e5d1) fep_vkb_bottom_pane

0xb821,	// (0x0005e60e) fep_vkb_candidate_pane_ParamLimits

0xb821,	// (0x0005e60e) fep_vkb_candidate_pane

0xb83d,	// (0x0005e62a) fep_vkb_keypad_pane_ParamLimits

0xb83d,	// (0x0005e62a) fep_vkb_keypad_pane

0xb870,	// (0x0005e65d) fep_vkb_side_pane_ParamLimits

0xb870,	// (0x0005e65d) fep_vkb_side_pane

0xb8ac,	// (0x0005e699) fep_vkb_top_pane_ParamLimits

0xb8ac,	// (0x0005e699) fep_vkb_top_pane

0xb8e8,	// (0x0005e6d5) fep_vkb_top_pane_g1_ParamLimits

0xb8e8,	// (0x0005e6d5) fep_vkb_top_pane_g1

0xb8f7,	// (0x0005e6e4) fep_vkb_top_pane_g2_ParamLimits

0xb8f7,	// (0x0005e6e4) fep_vkb_top_pane_g2

0xb906,	// (0x0005e6f3) fep_vkb_top_pane_g3_ParamLimits

0xb906,	// (0x0005e6f3) fep_vkb_top_pane_g3

0x0003,

0xfb0a,	// (0x000628f7) fep_vkb_top_pane_g_ParamLimits

0xfb0a,	// (0x000628f7) fep_vkb_top_pane_g

0xb924,	// (0x0005e711) fep_vkb_top_text_pane_ParamLimits

0xb924,	// (0x0005e711) fep_vkb_top_text_pane

0xb935,	// (0x0005e722) fep_vkb_side_pane_g1_ParamLimits

0xb935,	// (0x0005e722) fep_vkb_side_pane_g1

0xb97e,	// (0x0005e76b) grid_vkb_side_pane_ParamLimits

0xb97e,	// (0x0005e76b) grid_vkb_side_pane

0x7255,	// (0x0005a042) bg_popup_fep_shadow_pane_g2

0x725e,	// (0x0005a04b) bg_popup_fep_shadow_pane_g3

0x7266,	// (0x0005a053) bg_popup_fep_shadow_pane_g4

0x726f,	// (0x0005a05c) bg_popup_fep_shadow_pane_g5

0x7279,	// (0x0005a066) bg_popup_fep_shadow_pane_g6

0x7281,	// (0x0005a06e) bg_popup_fep_shadow_pane_g7

0xf32d,	// (0x0006211a) bg_popup_fep_shadow_pane_g8

0xb9dd,	// (0x0005e7ca) grid_vkb_keypad_number_pane_ParamLimits

0xb9dd,	// (0x0005e7ca) grid_vkb_keypad_number_pane

0xb9f1,	// (0x0005e7de) grid_vkb_keypad_pane_ParamLimits

0xb9f1,	// (0x0005e7de) grid_vkb_keypad_pane

0xba17,	// (0x0005e804) fep_vkb_bottom_pane_g1_ParamLimits

0xba17,	// (0x0005e804) fep_vkb_bottom_pane_g1

0xba40,	// (0x0005e82d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xba40,	// (0x0005e82d) grid_vkb_keypad_bottom_left_pane

0xba55,	// (0x0005e842) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xba55,	// (0x0005e842) grid_vkb_keypad_bottom_right_pane

0xba6a,	// (0x0005e857) fep_vkb_top_text_pane_g1

0xba85,	// (0x0005e872) fep_vkb_top_text_pane_t1

0xba9a,	// (0x0005e887) cell_vkb_side_pane_ParamLimits

0xba9a,	// (0x0005e887) cell_vkb_side_pane

0xb69b,	// (0x0005e488) cell_vkb_side_pane_g1

0xbad9,	// (0x0005e8c6) cell_vkb_keypad_pane_ParamLimits

0xbad9,	// (0x0005e8c6) cell_vkb_keypad_pane

0xbb66,	// (0x0005e953) cell_vkb_keypad_pane_g1

0x0008,

0xfb37,	// (0x00062924) bg_popup_fep_shadow_pane_g

0x7293,	// (0x0005a080) cell_hwr_side_pane_g1

0x7293,	// (0x0005a080) cell_hwr_side_pane_g2

0xbb70,	// (0x0005e95d) cell_vkb_keypad_pane_t1

0xbb7e,	// (0x0005e96b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbb7e,	// (0x0005e96b) cell_vkb_keypad_bottom_left_pane

0xbb9b,	// (0x0005e988) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbb9b,	// (0x0005e988) cell_vkb_keypad_bottom_right_pane

0xb69b,	// (0x0005e488) cell_vkb_keypad_bottom_left_pane_g1

0xb69b,	// (0x0005e488) cell_vkb_keypad_bottom_right_pane_g1

0xbbd4,	// (0x0005e9c1) cell_vkb_keypad_number_pane_ParamLimits

0xbbd4,	// (0x0005e9c1) cell_vkb_keypad_number_pane

0xbbf3,	// (0x0005e9e0) cell_vkb_keypad_number_pane_g1

0xbbfd,	// (0x0005e9ea) cell_vkb_keypad_number_pane_g2

0xbc06,	// (0x0005e9f3) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb29,	// (0x00062916) cell_vkb_keypad_number_pane_g

0xbb70,	// (0x0005e95d) cell_vkb_keypad_number_pane_t1

0xbc30,	// (0x0005ea1d) fep_vkb_candidate_pane_g1

0x0001,

0xfb4a,	// (0x00062937) cell_hwr_side_pane_g

0xbc49,	// (0x0005ea36) cell_hwr_side_pane_t1

0x729d,	// (0x0005a08a) cell_hwr_side_pane_t1_copy1

0x72ab,	// (0x0005a098) cell_hwr_candidate_pane_g1

0x72da,	// (0x0005a0c7) cell_hwr_candidate_pane_t1

0xb69b,	// (0x0005e488) cell_vkb_candidate_pane_g2

0xbc8d,	// (0x0005ea7a) cell_vkb_candidate_pane_t1

0x7030,	// (0x00059e1d) bg_popup_fep_shadow_pane_ParamLimits

0x7030,	// (0x00059e1d) bg_popup_fep_shadow_pane

0x70e7,	// (0x00059ed4) bg_fep_hwr_top_pane_g4

0xb720,	// (0x0005e50d) bg_hwr_side_pane_g1_ParamLimits

0xb720,	// (0x0005e50d) bg_hwr_side_pane_g1

0x715a,	// (0x00059f47) cell_hwr_side_pane_ParamLimits

0x715a,	// (0x00059f47) cell_hwr_side_pane

0x7197,	// (0x00059f84) fep_hwr_write_pane_g1_ParamLimits

0x7197,	// (0x00059f84) fep_hwr_write_pane_g1

0x71a4,	// (0x00059f91) fep_hwr_write_pane_g2_ParamLimits

0x71a4,	// (0x00059f91) fep_hwr_write_pane_g2

0x71b1,	// (0x00059f9e) fep_hwr_write_pane_g3_ParamLimits

0x71b1,	// (0x00059f9e) fep_hwr_write_pane_g3

0x71bf,	// (0x00059fac) fep_hwr_write_pane_g4_ParamLimits

0x71bf,	// (0x00059fac) fep_hwr_write_pane_g4

0x0005,

0xfaf6,	// (0x000628e3) fep_hwr_write_pane_g_ParamLimits

0xfaf6,	// (0x000628e3) fep_hwr_write_pane_g

0x70e7,	// (0x00059ed4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x70e7,	// (0x00059ed4) bg_fep_hwr_candidate_pane_g2

0x71d4,	// (0x00059fc1) cell_hwr_candidate_pane_ParamLimits

0x71d4,	// (0x00059fc1) cell_hwr_candidate_pane

0x7226,	// (0x0005a013) fep_hwr_candidate_pane_g1_ParamLimits

0xb780,	// (0x0005e56d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb780,	// (0x0005e56d) bg_popup_fep_shadow_pane_cp2

0xb916,	// (0x0005e703) fep_vkb_top_pane_g4_ParamLimits

0xb916,	// (0x0005e703) fep_vkb_top_pane_g4

0xb95c,	// (0x0005e749) fep_vkb_side_pane_g2_ParamLimits

0xb95c,	// (0x0005e749) fep_vkb_side_pane_g2

0x58f2,	// (0x000586df) list_setting_pane_t4_ParamLimits

0x58f2,	// (0x000586df) list_setting_pane_t4

0x598e,	// (0x0005877b) list_setting_number_pane_t5_ParamLimits

0x598e,	// (0x0005877b) list_setting_number_pane_t5

0x5ec7,	// (0x00058cb4) list_double_heading_pane_cp2_ParamLimits

0x5ec7,	// (0x00058cb4) list_double_heading_pane_cp2

0xbc9b,	// (0x0005ea88) list_double_heading_pane_g1_cp2_ParamLimits

0xbc9b,	// (0x0005ea88) list_double_heading_pane_g1_cp2

0xbca7,	// (0x0005ea94) list_double_heading_pane_g2_cp2_ParamLimits

0xbca7,	// (0x0005ea94) list_double_heading_pane_g2_cp2

0xbcbb,	// (0x0005eaa8) list_double_heading_pane_t1_cp2_ParamLimits

0xbcbb,	// (0x0005eaa8) list_double_heading_pane_t1_cp2

0xbcd1,	// (0x0005eabe) list_double_heading_pane_t2_cp2_ParamLimits

0xbcd1,	// (0x0005eabe) list_double_heading_pane_t2_cp2

0xec03,	// (0x000619f0) aid_value_unit2

0x4fee,	// (0x00057ddb) popup_preview_fixed_window

0xedae,	// (0x00061b9b) bg_popup_preview_window_pane_cp02

0xbce3,	// (0x0005ead0) list_preview_fixed_pane

0xbd29,	// (0x0005eb16) list_empty_pane_fp_ParamLimits

0xbd29,	// (0x0005eb16) list_empty_pane_fp

0xbd29,	// (0x0005eb16) list_single_cale_day_pane_fp_ParamLimits

0xbd29,	// (0x0005eb16) list_single_cale_day_pane_fp

0xbd29,	// (0x0005eb16) list_single_graphic_heading_pane_fp_ParamLimits

0xbd29,	// (0x0005eb16) list_single_graphic_heading_pane_fp

0xbd29,	// (0x0005eb16) list_single_graphic_pane_fp_ParamLimits

0xbd29,	// (0x0005eb16) list_single_graphic_pane_fp

0xbd29,	// (0x0005eb16) list_single_heading_pane_fp_ParamLimits

0xbd29,	// (0x0005eb16) list_single_heading_pane_fp

0xbd29,	// (0x0005eb16) list_single_pane_fp_ParamLimits

0xbd29,	// (0x0005eb16) list_single_pane_fp

0xbd42,	// (0x0005eb2f) list_single_pane_fp_g1_ParamLimits

0xbd42,	// (0x0005eb2f) list_single_pane_fp_g1

0x9d40,	// (0x0005cb2d) list_single_pane_fp_g2_ParamLimits

0x9d40,	// (0x0005cb2d) list_single_pane_fp_g2

0x9d4c,	// (0x0005cb39) list_single_pane_fp_g3_ParamLimits

0x9d4c,	// (0x0005cb39) list_single_pane_fp_g3

0xbd4e,	// (0x0005eb3b) list_single_pane_fp_g4_ParamLimits

0xbd4e,	// (0x0005eb3b) list_single_pane_fp_g4

0x0003,

0xfb5d,	// (0x0006294a) list_single_pane_fp_g_ParamLimits

0xfb5d,	// (0x0006294a) list_single_pane_fp_g

0x3e8b,	// (0x00056c78) list_single_pane_fp_t1_ParamLimits

0x3e8b,	// (0x00056c78) list_single_pane_fp_t1

0x3ea2,	// (0x00056c8f) list_single_graphic_pane_fp_g1_ParamLimits

0x3ea2,	// (0x00056c8f) list_single_graphic_pane_fp_g1

0xbd42,	// (0x0005eb2f) list_single_graphic_pane_fp_g2_ParamLimits

0xbd42,	// (0x0005eb2f) list_single_graphic_pane_fp_g2

0x9d40,	// (0x0005cb2d) list_single_graphic_pane_fp_g3_ParamLimits

0x9d40,	// (0x0005cb2d) list_single_graphic_pane_fp_g3

0x9d4c,	// (0x0005cb39) list_single_graphic_pane_fp_g4_ParamLimits

0x9d4c,	// (0x0005cb39) list_single_graphic_pane_fp_g4

0xbd4e,	// (0x0005eb3b) list_single_graphic_pane_fp_g5_ParamLimits

0xbd4e,	// (0x0005eb3b) list_single_graphic_pane_fp_g5

0x0004,

0xfb66,	// (0x00062953) list_single_graphic_pane_fp_g_ParamLimits

0xfb66,	// (0x00062953) list_single_graphic_pane_fp_g

0x3eae,	// (0x00056c9b) list_single_graphic_pane_fp_t1_ParamLimits

0x3eae,	// (0x00056c9b) list_single_graphic_pane_fp_t1

0x3ea2,	// (0x00056c8f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3ea2,	// (0x00056c8f) list_single_graphic_heading_pane_fp_g1

0xbd42,	// (0x0005eb2f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xbd42,	// (0x0005eb2f) list_single_graphic_heading_pane_fp_g2

0x9d40,	// (0x0005cb2d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9d40,	// (0x0005cb2d) list_single_graphic_heading_pane_fp_g3

0x9d4c,	// (0x0005cb39) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9d4c,	// (0x0005cb39) list_single_graphic_heading_pane_fp_g4

0xbd4e,	// (0x0005eb3b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xbd4e,	// (0x0005eb3b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb66,	// (0x00062953) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb66,	// (0x00062953) list_single_graphic_heading_pane_fp_g

0x3ec4,	// (0x00056cb1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3ec4,	// (0x00056cb1) list_single_graphic_heading_pane_fp_t1

0x3eda,	// (0x00056cc7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3eda,	// (0x00056cc7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb71,	// (0x0006295e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb71,	// (0x0006295e) list_single_graphic_heading_pane_fp_t

0x3eec,	// (0x00056cd9) list_single_cale_day_pane_fp_g1_ParamLimits

0x3eec,	// (0x00056cd9) list_single_cale_day_pane_fp_g1

0xbd5a,	// (0x0005eb47) list_single_cale_day_pane_fp_g2_ParamLimits

0xbd5a,	// (0x0005eb47) list_single_cale_day_pane_fp_g2

0x9d60,	// (0x0005cb4d) list_single_cale_day_pane_fp_g3_ParamLimits

0x9d60,	// (0x0005cb4d) list_single_cale_day_pane_fp_g3

0x9d88,	// (0x0005cb75) list_single_cale_day_pane_fp_g4_ParamLimits

0x9d88,	// (0x0005cb75) list_single_cale_day_pane_fp_g4

0x9dac,	// (0x0005cb99) list_single_cale_day_pane_fp_g5_ParamLimits

0x9dac,	// (0x0005cb99) list_single_cale_day_pane_fp_g5

0x0004,

0xfb76,	// (0x00062963) list_single_cale_day_pane_fp_g_ParamLimits

0xfb76,	// (0x00062963) list_single_cale_day_pane_fp_g

0x3f24,	// (0x00056d11) list_single_cale_day_pane_fp_t1_ParamLimits

0x3f24,	// (0x00056d11) list_single_cale_day_pane_fp_t1

0x3f4a,	// (0x00056d37) list_single_cale_day_pane_fp_t2_ParamLimits

0x3f4a,	// (0x00056d37) list_single_cale_day_pane_fp_t2

0x3f63,	// (0x00056d50) list_single_cale_day_pane_fp_t3_ParamLimits

0x3f63,	// (0x00056d50) list_single_cale_day_pane_fp_t3

0x0002,

0xfb81,	// (0x0006296e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb81,	// (0x0006296e) list_single_cale_day_pane_fp_t

0xbd42,	// (0x0005eb2f) list_empty_pane_fp_g1_ParamLimits

0xbd42,	// (0x0005eb2f) list_empty_pane_fp_g1

0x3f7c,	// (0x00056d69) list_empty_pane_fp_t1

0x3f8a,	// (0x00056d77) list_empty_pane_fp_t2

0x0001,

0xfb88,	// (0x00062975) list_empty_pane_fp_t

0xbd42,	// (0x0005eb2f) list_single_heading_pane_fp_g1_ParamLimits

0xbd42,	// (0x0005eb2f) list_single_heading_pane_fp_g1

0x9d40,	// (0x0005cb2d) list_single_heading_pane_fp_g2_ParamLimits

0x9d40,	// (0x0005cb2d) list_single_heading_pane_fp_g2

0x9d4c,	// (0x0005cb39) list_single_heading_pane_fp_g3_ParamLimits

0x9d4c,	// (0x0005cb39) list_single_heading_pane_fp_g3

0x0002,

0xfb8d,	// (0x0006297a) list_single_heading_pane_fp_g_ParamLimits

0xfb8d,	// (0x0006297a) list_single_heading_pane_fp_g

0x3f98,	// (0x00056d85) list_single_heading_pane_fp_t1_ParamLimits

0x3f98,	// (0x00056d85) list_single_heading_pane_fp_t1

0x3faa,	// (0x00056d97) list_single_heading_pane_fp_t2_ParamLimits

0x3faa,	// (0x00056d97) list_single_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x00062981) list_single_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x00062981) list_single_heading_pane_fp_t

0xf433,	// (0x00062220) aid_size_cell_fast

0xed83,	// (0x00061b70) soft_indicator_pane_cp1_t1

0xf470,	// (0x0006225d) cell_app_pane_cp2_ParamLimits

0xf470,	// (0x0006225d) cell_app_pane_cp2

0x7052,	// (0x00059e3f) fep_hwr_candidate_drop_down_list_pane

0x7240,	// (0x0005a02d) fep_hwr_candidate_pane_g3_ParamLimits

0x7240,	// (0x0005a02d) fep_hwr_candidate_pane_g3

0x2dc0,	// (0x00055bad) fep_hwr_candidate_pane_g4_ParamLimits

0x2dc0,	// (0x00055bad) fep_hwr_candidate_pane_g4

0x0002,

0xfb03,	// (0x000628f0) fep_hwr_candidate_pane_g_ParamLimits

0xfb03,	// (0x000628f0) fep_hwr_candidate_pane_g

0xb810,	// (0x0005e5fd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb810,	// (0x0005e5fd) fep_vkb_candidate_drop_down_list_pane

0xbc38,	// (0x0005ea25) fep_vkb_candidate_pane_g3

0xbc40,	// (0x0005ea2d) fep_vkb_candidate_pane_g4

0x0002,

0xfb30,	// (0x0006291d) fep_vkb_candidate_pane_g

0x72ab,	// (0x0005a098) cell_hwr_candidate_pane_g1_ParamLimits

0x72b9,	// (0x0005a0a6) cell_hwr_candidate_pane_g3_ParamLimits

0x72b9,	// (0x0005a0a6) cell_hwr_candidate_pane_g3

0xd5fe,	// (0x000603eb) cell_hwr_candidate_pane_g4_ParamLimits

0xd5fe,	// (0x000603eb) cell_hwr_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0006293c) cell_hwr_candidate_pane_g_ParamLimits

0xfb4f,	// (0x0006293c) cell_hwr_candidate_pane_g

0xbc57,	// (0x0005ea44) cell_vkb_candidate_pane_g3_ParamLimits

0xbc57,	// (0x0005ea44) cell_vkb_candidate_pane_g3

0xbc72,	// (0x0005ea5f) cell_vkb_candidate_pane_g4_ParamLimits

0xbc72,	// (0x0005ea5f) cell_vkb_candidate_pane_g4

0xbd66,	// (0x0005eb53) cell_app_pane_cp2_g1_ParamLimits

0xbd66,	// (0x0005eb53) cell_app_pane_cp2_g1

0xbd84,	// (0x0005eb71) cell_app_pane_cp2_g2_ParamLimits

0xbd84,	// (0x0005eb71) cell_app_pane_cp2_g2

0x0001,

0xfb99,	// (0x00062986) cell_app_pane_cp2_g_ParamLimits

0xfb99,	// (0x00062986) cell_app_pane_cp2_g

0xbd90,	// (0x0005eb7d) cell_app_pane_cp2_t1_ParamLimits

0xbd90,	// (0x0005eb7d) cell_app_pane_cp2_t1

0xf2bd,	// (0x000620aa) grid_highlight_pane_cp1_ParamLimits

0xf2bd,	// (0x000620aa) grid_highlight_pane_cp1

0x72f8,	// (0x0005a0e5) cell_hwr_candidate_pane_cp1_ParamLimits

0x72f8,	// (0x0005a0e5) cell_hwr_candidate_pane_cp1

0x72ab,	// (0x0005a098) fep_hwr_candidate_drop_down_list_pane_g1

0x731c,	// (0x0005a109) fep_hwr_candidate_drop_down_list_pane_g2

0x7329,	// (0x0005a116) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9e,	// (0x0006298b) fep_hwr_candidate_drop_down_list_pane_g

0x7336,	// (0x0005a123) fep_hwr_candidate_drop_down_list_scroll_pane

0x733f,	// (0x0005a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x733f,	// (0x0005a12c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x734c,	// (0x0005a139) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x734c,	// (0x0005a139) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7359,	// (0x0005a146) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7359,	// (0x0005a146) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7366,	// (0x0005a153) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7366,	// (0x0005a153) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7381,	// (0x0005a16e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7381,	// (0x0005a16e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x739c,	// (0x0005a189) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x739c,	// (0x0005a189) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x73b7,	// (0x0005a1a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x73b7,	// (0x0005a1a4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x73d2,	// (0x0005a1bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x73d2,	// (0x0005a1bf) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba5,	// (0x00062992) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba5,	// (0x00062992) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbda2,	// (0x0005eb8f) cell_vkb_candidate_pane_cp1_ParamLimits

0xbda2,	// (0x0005eb8f) cell_vkb_candidate_pane_cp1

0xb916,	// (0x0005e703) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb916,	// (0x0005e703) fep_vkb_candidate_drop_down_list_pane_g1

0xbdc8,	// (0x0005ebb5) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbdc8,	// (0x0005ebb5) fep_vkb_candidate_drop_down_list_pane_g2

0xbdd5,	// (0x0005ebc2) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbdd5,	// (0x0005ebc2) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x000629a3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x000629a3) fep_vkb_candidate_drop_down_list_pane_g

0xbde2,	// (0x0005ebcf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbde2,	// (0x0005ebcf) fep_vkb_candidate_drop_down_list_scroll_pane

0xbdef,	// (0x0005ebdc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbdef,	// (0x0005ebdc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbdfc,	// (0x0005ebe9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbdfc,	// (0x0005ebe9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbe08,	// (0x0005ebf5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbe08,	// (0x0005ebf5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xbe14,	// (0x0005ec01) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xbe14,	// (0x0005ec01) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xbe35,	// (0x0005ec22) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xbe35,	// (0x0005ec22) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbe56,	// (0x0005ec43) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbe56,	// (0x0005ec43) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbe77,	// (0x0005ec64) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbe77,	// (0x0005ec64) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbe98,	// (0x0005ec85) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbe98,	// (0x0005ec85) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x000629aa) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x000629aa) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x510e,	// (0x00057efb) title_pane_g1_ParamLimits

0x511b,	// (0x00057f08) title_pane_g2_ParamLimits

0xf529,	// (0x00062316) title_pane_g_ParamLimits

0x31ca,	// (0x00055fb7) aid_call2_pane

0x31c2,	// (0x00055faf) aid_call_pane

0x31d2,	// (0x00055fbf) popup_clock_analogue_window_g1

0x31d2,	// (0x00055fbf) popup_clock_analogue_window_g2

0x5ea8,	// (0x00058c95) popup_clock_analogue_window_g3

0x5eb1,	// (0x00058c9e) popup_clock_analogue_window_g4

0xec15,	// (0x00061a02) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x000624c5) popup_clock_analogue_window_g

0x5eb9,	// (0x00058ca6) popup_clock_analogue_window_t1

0x5f17,	// (0x00058d04) clock_digital_number_pane_ParamLimits

0x5f17,	// (0x00058d04) clock_digital_number_pane

0x5f23,	// (0x00058d10) clock_digital_number_pane_cp02_ParamLimits

0x5f23,	// (0x00058d10) clock_digital_number_pane_cp02

0x5f2f,	// (0x00058d1c) clock_digital_number_pane_cp03_ParamLimits

0x5f2f,	// (0x00058d1c) clock_digital_number_pane_cp03

0x5f3b,	// (0x00058d28) clock_digital_number_pane_cp04_ParamLimits

0x5f3b,	// (0x00058d28) clock_digital_number_pane_cp04

0x5f47,	// (0x00058d34) clock_digital_separator_pane_ParamLimits

0x5f47,	// (0x00058d34) clock_digital_separator_pane

0x5f53,	// (0x00058d40) popup_clock_digital_window_t1_ParamLimits

0x5f53,	// (0x00058d40) popup_clock_digital_window_t1

0xec15,	// (0x00061a02) clock_digital_number_pane_g1

0xec15,	// (0x00061a02) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x000624d0) clock_digital_number_pane_g

0xec15,	// (0x00061a02) clock_digital_separator_pane_g1

0xec15,	// (0x00061a02) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x000624d0) clock_digital_separator_pane_g

0x894d,	// (0x0005b73a) aid_fill_nsta_ParamLimits

0x8a99,	// (0x0005b886) indicator_nsta_pane_ParamLimits

0x8c2a,	// (0x0005ba17) popup_clock_analogue_window

0x8c2a,	// (0x0005ba17) popup_clock_digital_window

0xb0c7,	// (0x0005deb4) grid_indicator_nsta_pane_ParamLimits

0xb0f0,	// (0x0005dedd) clock_nsta_pane_t2

0x0001,

0xfa83,	// (0x00062870) clock_nsta_pane_t

0x5e11,	// (0x00058bfe) aid_size_max_handle

0x5e1b,	// (0x00058c08) aid_size_min_handle

0x85ea,	// (0x0005b3d7) editor_scroll_pane

0xbeb3,	// (0x0005eca0) ex_editor_pane

0xf3f9,	// (0x000621e6) scroll_pane_cp13

0xf25c,	// (0x00062049) scroll_pane_cp14

0x3201,	// (0x00055fee) scroll_pane_cp36

0x5edd,	// (0x00058cca) list_single_graphic_hl_pane_cp2_ParamLimits

0x5edd,	// (0x00058cca) list_single_graphic_hl_pane_cp2

0x6ec0,	// (0x00059cad) list_single_graphic_hl_pane_ParamLimits

0x6ec0,	// (0x00059cad) list_single_graphic_hl_pane

0x3fc0,	// (0x00056dad) aid_size_min_hl_cp1

0xbebb,	// (0x0005eca8) list_highlight_pane_cp34_ParamLimits

0xbebb,	// (0x0005eca8) list_highlight_pane_cp34

0xbecc,	// (0x0005ecb9) list_single_graphic_hl_pane_g1_ParamLimits

0xbecc,	// (0x0005ecb9) list_single_graphic_hl_pane_g1

0x73ed,	// (0x0005a1da) list_single_graphic_hl_pane_g2_ParamLimits

0x73ed,	// (0x0005a1da) list_single_graphic_hl_pane_g2

0x73ed,	// (0x0005a1da) list_single_graphic_hl_pane_g3_ParamLimits

0x73ed,	// (0x0005a1da) list_single_graphic_hl_pane_g3

0x73f9,	// (0x0005a1e6) list_single_graphic_hl_pane_g4_ParamLimits

0x73f9,	// (0x0005a1e6) list_single_graphic_hl_pane_g4

0x7405,	// (0x0005a1f2) list_single_graphic_hl_pane_g5_ParamLimits

0x7405,	// (0x0005a1f2) list_single_graphic_hl_pane_g5

0x0004,

0xfbce,	// (0x000629bb) list_single_graphic_hl_pane_g_ParamLimits

0xfbce,	// (0x000629bb) list_single_graphic_hl_pane_g

0x7419,	// (0x0005a206) list_single_graphic_hl_pane_t1_ParamLimits

0x7419,	// (0x0005a206) list_single_graphic_hl_pane_t1

0xbed9,	// (0x0005ecc6) aid_size_min_hl_cp2

0xbee2,	// (0x0005eccf) list_highlight_pane_cp34_cp2_ParamLimits

0xbee2,	// (0x0005eccf) list_highlight_pane_cp34_cp2

0xbecc,	// (0x0005ecb9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbecc,	// (0x0005ecb9) list_single_graphic_hl_pane_g1_cp2

0xbeef,	// (0x0005ecdc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbeef,	// (0x0005ecdc) list_single_graphic_hl_pane_g2_cp2

0xbefb,	// (0x0005ece8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbefb,	// (0x0005ece8) list_single_graphic_hl_pane_g3_cp2

0xbf09,	// (0x0005ecf6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf09,	// (0x0005ecf6) list_single_graphic_hl_pane_g4_cp2

0xbf15,	// (0x0005ed02) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbf15,	// (0x0005ed02) list_single_graphic_hl_pane_g5_cp2

0x633b,	// (0x00059128) control_pane_g4_ParamLimits

0x633b,	// (0x00059128) control_pane_g4

0x8911,	// (0x0005b6fe) bg_popup_sub_pane_cp10_ParamLimits

0xb6a5,	// (0x0005e492) list_choice_list_pane_ParamLimits

0xb6b4,	// (0x0005e4a1) scroll_pane_cp23

0xedae,	// (0x00061b9b) bg_popup_preview_window_pane_cp02_ParamLimits

0xbce3,	// (0x0005ead0) list_preview_fixed_pane_ParamLimits

0xbcf9,	// (0x0005eae6) list_preview_fixed_pane_cp_ParamLimits

0xbcf9,	// (0x0005eae6) list_preview_fixed_pane_cp

0xbd05,	// (0x0005eaf2) popup_preview_fixed_window_g1_ParamLimits

0xbd05,	// (0x0005eaf2) popup_preview_fixed_window_g1

0xbd11,	// (0x0005eafe) popup_preview_fixed_window_g2_ParamLimits

0xbd11,	// (0x0005eafe) popup_preview_fixed_window_g2

0x0002,

0xfb56,	// (0x00062943) popup_preview_fixed_window_g_ParamLimits

0xfb56,	// (0x00062943) popup_preview_fixed_window_g

0x5cc5,	// (0x00058ab2) aid_navi_side_left_pane_ParamLimits

0x5cda,	// (0x00058ac7) aid_navi_side_right_pane_ParamLimits

0x5cf2,	// (0x00058adf) navi_icon_pane_stacon_ParamLimits

0x5d06,	// (0x00058af3) navi_navi_pane_stacon_ParamLimits

0x5cf2,	// (0x00058adf) navi_text_pane_stacon_ParamLimits

0x4ea5,	// (0x00057c92) main_text_info_pane

0xbf3f,	// (0x0005ed2c) listscroll_text_info_pane

0xbf47,	// (0x0005ed34) list_text_info_pane_ParamLimits

0xbf47,	// (0x0005ed34) list_text_info_pane

0xbf56,	// (0x0005ed43) scroll_pane_cp24_ParamLimits

0xbf56,	// (0x0005ed43) scroll_pane_cp24

0xbf74,	// (0x0005ed61) list_text_info_pane_t1_ParamLimits

0xbf74,	// (0x0005ed61) list_text_info_pane_t1

0x64a1,	// (0x0005928e) popup_fast_swap2_window_ParamLimits

0x64a1,	// (0x0005928e) popup_fast_swap2_window

0xbf99,	// (0x0005ed86) aid_size_cell_fast2

0xec0b,	// (0x000619f8) bg_popup_window_pane_cp17

0xbfa3,	// (0x0005ed90) heading_pane_cp2

0xbfab,	// (0x0005ed98) listscroll_fast2_pane

0xbfb3,	// (0x0005eda0) grid_fast2_pane

0xbfbd,	// (0x0005edaa) listscroll_fast2_pane_g1

0xbfc7,	// (0x0005edb4) listscroll_fast2_pane_g2

0x0001,

0xfbd9,	// (0x000629c6) listscroll_fast2_pane_g

0xf3f9,	// (0x000621e6) scroll_pane_cp26

0xbfd1,	// (0x0005edbe) cell_fast2_pane_ParamLimits

0xbfd1,	// (0x0005edbe) cell_fast2_pane

0xbfe8,	// (0x0005edd5) cell_fast2_pane_g1

0xbff1,	// (0x0005edde) cell_fast2_pane_g2

0xbffa,	// (0x0005ede7) cell_fast2_pane_g3

0x0002,

0xfbde,	// (0x000629cb) cell_fast2_pane_g

0xf023,	// (0x00061e10) grid_highlight_pane_cp9

0x6463,	// (0x00059250) main_eswt_pane_ParamLimits

0x6463,	// (0x00059250) main_eswt_pane

0xbf6b,	// (0x0005ed58) list_single_text_info_pane

0xc002,	// (0x0005edef) eswt_ctrl_button_pane

0xc002,	// (0x0005edef) eswt_ctrl_canvas_pane

0xc00a,	// (0x0005edf7) eswt_ctrl_combo_pane

0xc002,	// (0x0005edef) eswt_ctrl_default_pane

0xc002,	// (0x0005edef) eswt_ctrl_label_pane

0xc012,	// (0x0005edff) eswt_ctrl_wait_pane

0xc01a,	// (0x0005ee07) eswt_shell_pane

0xec0b,	// (0x000619f8) listscroll_eswt_app_pane

0xc03a,	// (0x0005ee27) popup_eswt_tasktip_window_ParamLimits

0xc03a,	// (0x0005ee27) popup_eswt_tasktip_window

0x8eed,	// (0x0005bcda) bg_popup_window_pane_cp18

0xc053,	// (0x0005ee40) eswt_control_pane_g1_ParamLimits

0xc053,	// (0x0005ee40) eswt_control_pane_g1

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_ParamLimits

0xc060,	// (0x0005ee4d) eswt_control_pane_g2

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_ParamLimits

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_ParamLimits

0xc07a,	// (0x0005ee67) eswt_control_pane_g4

0x0003,

0xfbe5,	// (0x000629d2) eswt_control_pane_g_ParamLimits

0xfbe5,	// (0x000629d2) eswt_control_pane_g

0xf2bd,	// (0x000620aa) bg_button_pane_ParamLimits

0xf2bd,	// (0x000620aa) bg_button_pane

0xf038,	// (0x00061e25) common_borders_pane_copy2_ParamLimits

0xf038,	// (0x00061e25) common_borders_pane_copy2

0xc087,	// (0x0005ee74) control_button_pane_g1_ParamLimits

0xc087,	// (0x0005ee74) control_button_pane_g1

0xc093,	// (0x0005ee80) control_button_pane_g2_ParamLimits

0xc093,	// (0x0005ee80) control_button_pane_g2

0xc09f,	// (0x0005ee8c) control_button_pane_g3_ParamLimits

0xc09f,	// (0x0005ee8c) control_button_pane_g3

0x0002,

0xfbee,	// (0x000629db) control_button_pane_g_ParamLimits

0xfbee,	// (0x000629db) control_button_pane_g

0xc0b3,	// (0x0005eea0) control_button_pane_t1

0xc0c1,	// (0x0005eeae) control_button_pane_t2

0x0001,

0xfbf5,	// (0x000629e2) control_button_pane_t

0x8e61,	// (0x0005bc4e) bg_button_pane_g1

0x8e71,	// (0x0005bc5e) bg_button_pane_g2

0x8e69,	// (0x0005bc56) bg_button_pane_g3

0x8e81,	// (0x0005bc6e) bg_button_pane_g4

0x8e79,	// (0x0005bc66) bg_button_pane_g5

0x8e89,	// (0x0005bc76) bg_button_pane_g6

0x8e91,	// (0x0005bc7e) bg_button_pane_g7

0x8ea1,	// (0x0005bc8e) bg_button_pane_g8

0x8e99,	// (0x0005bc86) bg_button_pane_g9

0x0008,

0xf846,	// (0x00062633) bg_button_pane_g

0xb660,	// (0x0005e44d) common_borders_pane_ParamLimits

0xb660,	// (0x0005e44d) common_borders_pane

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy1_ParamLimits

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy1

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy1_ParamLimits

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy1

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy1_ParamLimits

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy1

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy1_ParamLimits

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy1

0xb69b,	// (0x0005e488) bg_eswt_ctrl_canvas_pane_g1

0xb660,	// (0x0005e44d) common_borders_pane_cp2_ParamLimits

0xb660,	// (0x0005e44d) common_borders_pane_cp2

0xb660,	// (0x0005e44d) common_borders_pane_cp3_ParamLimits

0xb660,	// (0x0005e44d) common_borders_pane_cp3

0xc0cf,	// (0x0005eebc) separator_horizontal_pane

0xc0d7,	// (0x0005eec4) separator_vertical_pane

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy2_ParamLimits

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy2

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy2_ParamLimits

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy2

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy2_ParamLimits

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy2

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy2_ParamLimits

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy2

0xec0b,	// (0x000619f8) common_borders_pane_cp4

0xc0e0,	// (0x0005eecd) separator_horizontal_pane_g1

0xc0e9,	// (0x0005eed6) separator_horizontal_pane_g2

0xc0f2,	// (0x0005eedf) separator_horizontal_pane_g3

0x0002,

0xfbfa,	// (0x000629e7) separator_horizontal_pane_g

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy3_ParamLimits

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy3

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy3_ParamLimits

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy3

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy3_ParamLimits

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy3

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy3_ParamLimits

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy3

0xec0b,	// (0x000619f8) common_borders_pane_cp5

0xc0fb,	// (0x0005eee8) separator_vertical_pane_g1

0xc104,	// (0x0005eef1) separator_vertical_pane_g2

0xc10d,	// (0x0005eefa) separator_vertical_pane_g3

0x0002,

0xfc01,	// (0x000629ee) separator_vertical_pane_g

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy4_ParamLimits

0xc053,	// (0x0005ee40) eswt_control_pane_g1_copy4

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy4_ParamLimits

0xc060,	// (0x0005ee4d) eswt_control_pane_g2_copy4

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy4_ParamLimits

0xc06d,	// (0x0005ee5a) eswt_control_pane_g3_copy4

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy4_ParamLimits

0xc07a,	// (0x0005ee67) eswt_control_pane_g4_copy4

0xc116,	// (0x0005ef03) eswt_ctrl_combo_button_pane

0xc11e,	// (0x0005ef0b) eswt_ctrl_input_pane

0xc126,	// (0x0005ef13) popup_choice_list_window_cp70

0xc12e,	// (0x0005ef1b) eswt_ctrl_input_pane_t1

0xec0b,	// (0x000619f8) input_focus_pane_cp70

0xb660,	// (0x0005e44d) bg_button_pane_cp70_ParamLimits

0xb660,	// (0x0005e44d) bg_button_pane_cp70

0xc13c,	// (0x0005ef29) eswt_ctrl_combo_button_pane_g1

0xc144,	// (0x0005ef31) wait_bar_pane_cp70

0x8eed,	// (0x0005bcda) bg_popup_window_pane_cp70_ParamLimits

0x8eed,	// (0x0005bcda) bg_popup_window_pane_cp70

0xc14c,	// (0x0005ef39) popup_eswt_tasktip_window_t1

0xc162,	// (0x0005ef4f) wait_bar_pane_cp71_ParamLimits

0xc162,	// (0x0005ef4f) wait_bar_pane_cp71

0xc16e,	// (0x0005ef5b) grid_eswt_app_pane

0x306a,	// (0x00055e57) scroll_pane_cp70

0xc177,	// (0x0005ef64) cell_eswt_app_pane_ParamLimits

0xc177,	// (0x0005ef64) cell_eswt_app_pane

0xc1a9,	// (0x0005ef96) cell_eswt_app_pane_g1_ParamLimits

0xc1a9,	// (0x0005ef96) cell_eswt_app_pane_g1

0xc1d8,	// (0x0005efc5) cell_eswt_app_pane_g2_ParamLimits

0xc1d8,	// (0x0005efc5) cell_eswt_app_pane_g2

0x0001,

0xfc08,	// (0x000629f5) cell_eswt_app_pane_g_ParamLimits

0xfc08,	// (0x000629f5) cell_eswt_app_pane_g

0xc201,	// (0x0005efee) cell_eswt_app_pane_t1_ParamLimits

0xc201,	// (0x0005efee) cell_eswt_app_pane_t1

0xc233,	// (0x0005f020) grid_highlight_pane_cp70_ParamLimits

0xc233,	// (0x0005f020) grid_highlight_pane_cp70

0x84b0,	// (0x0005b29d) set_content_pane_g1

0x8898,	// (0x0005b685) status_small_volume_pane

0x742f,	// (0x0005a21c) status_small_volume_pane_g1

0x7437,	// (0x0005a224) volume_small2_pane

0x7440,	// (0x0005a22d) volume_small2_pane_g1

0x7449,	// (0x0005a236) volume_small2_pane_g2

0x7452,	// (0x0005a23f) volume_small2_pane_g3

0x745b,	// (0x0005a248) volume_small2_pane_g4

0x7464,	// (0x0005a251) volume_small2_pane_g5

0x746d,	// (0x0005a25a) volume_small2_pane_g6

0x7476,	// (0x0005a263) volume_small2_pane_g7

0x747f,	// (0x0005a26c) volume_small2_pane_g8

0x7488,	// (0x0005a275) volume_small2_pane_g9

0x7491,	// (0x0005a27e) volume_small2_pane_g10

0x0009,

0xfc0d,	// (0x000629fa) volume_small2_pane_g

0xba6a,	// (0x0005e857) fep_vkb_top_text_pane_g1_ParamLimits

0xba85,	// (0x0005e872) fep_vkb_top_text_pane_t1_ParamLimits

0xbd1d,	// (0x0005eb0a) popup_preview_fixed_window_g3_ParamLimits

0xbd1d,	// (0x0005eb0a) popup_preview_fixed_window_g3

0x69b4,	// (0x000597a1) popup_toolbar_trans_pane

0xa433,	// (0x0005d220) aid_height_set_list_ParamLimits

0xa444,	// (0x0005d231) aid_size_parent_ParamLimits

0x8911,	// (0x0005b6fe) list_highlight_pane_cp2_ParamLimits

0x84b0,	// (0x0005b29d) set_content_pane_g1_ParamLimits

0x9c9a,	// (0x0005ca87) list_single_image_pane_ParamLimits

0x9c9a,	// (0x0005ca87) list_single_image_pane

0xc23f,	// (0x0005f02c) aid_size_cell_image_ParamLimits

0xc23f,	// (0x0005f02c) aid_size_cell_image

0xc24c,	// (0x0005f039) grid_single_image_pane_ParamLimits

0xc24c,	// (0x0005f039) grid_single_image_pane

0xf2cb,	// (0x000620b8) list_single_image_pane_g1_ParamLimits

0xf2cb,	// (0x000620b8) list_single_image_pane_g1

0xf2d7,	// (0x000620c4) list_single_image_pane_g2_ParamLimits

0xf2d7,	// (0x000620c4) list_single_image_pane_g2

0x0001,

0xfc22,	// (0x00062a0f) list_single_image_pane_g_ParamLimits

0xfc22,	// (0x00062a0f) list_single_image_pane_g

0xc25a,	// (0x0005f047) list_single_image_pane_t1_ParamLimits

0xc25a,	// (0x0005f047) list_single_image_pane_t1

0xc270,	// (0x0005f05d) cell_image_list_pane_ParamLimits

0xc270,	// (0x0005f05d) cell_image_list_pane

0xc288,	// (0x0005f075) cell_image_list_pane_g1

0xc291,	// (0x0005f07e) cell_image_list_pane_g2

0x0001,

0xfc27,	// (0x00062a14) cell_image_list_pane_g

0xc29a,	// (0x0005f087) aid_size_cell_tb_trans_pane

0xf2bd,	// (0x000620aa) bg_tb_trans_pane

0xc2ac,	// (0x0005f099) grid_tb_trans_pane

0x8e61,	// (0x0005bc4e) bg_tb_trans_pane_g1

0x8e71,	// (0x0005bc5e) bg_tb_trans_pane_g2

0x8e69,	// (0x0005bc56) bg_tb_trans_pane_g3

0x8e81,	// (0x0005bc6e) bg_tb_trans_pane_g4

0x8e79,	// (0x0005bc66) bg_tb_trans_pane_g5

0x8ea1,	// (0x0005bc8e) bg_tb_trans_pane_g6

0x8e99,	// (0x0005bc86) bg_tb_trans_pane_g7

0x8e89,	// (0x0005bc76) bg_tb_trans_pane_g8

0x8e91,	// (0x0005bc7e) bg_tb_trans_pane_g9

0x0008,

0xfc2c,	// (0x00062a19) bg_tb_trans_pane_g

0xc2c0,	// (0x0005f0ad) cell_toolbar_trans_pane_ParamLimits

0xc2c0,	// (0x0005f0ad) cell_toolbar_trans_pane

0xb69b,	// (0x0005e488) cell_toolbar_trans_pane_g1

0xb2d3,	// (0x0005e0c0) list_form2_midp_pane_t1

0xb2e1,	// (0x0005e0ce) list_form2_midp_pane_t2

0x0001,

0xfac9,	// (0x000628b6) list_form2_midp_pane_t

0xb2ef,	// (0x0005e0dc) scroll_pane_cp51_ParamLimits

0xb4b6,	// (0x0005e2a3) form2_midp_wait_pane_g1

0xb4bf,	// (0x0005e2ac) form2_midp_wait_pane_g2

0xb4c8,	// (0x0005e2b5) form2_midp_wait_pane_g3

0x0002,

0xfade,	// (0x000628cb) form2_midp_wait_pane_g

0xec6d,	// (0x00061a5a) list_highlight_pane_cp21_ParamLimits

0xb501,	// (0x0005e2ee) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb510,	// (0x0005e2fd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9c53,	// (0x0005ca40) list_single_2graphic_im_pane_ParamLimits

0x9c53,	// (0x0005ca40) list_single_2graphic_im_pane

0xc2e6,	// (0x0005f0d3) list_single_2graphic_im_pane_g1_ParamLimits

0xc2e6,	// (0x0005f0d3) list_single_2graphic_im_pane_g1

0xc2f7,	// (0x0005f0e4) list_single_2graphic_im_pane_g2_ParamLimits

0xc2f7,	// (0x0005f0e4) list_single_2graphic_im_pane_g2

0xc303,	// (0x0005f0f0) list_single_2graphic_im_pane_g3_ParamLimits

0xc303,	// (0x0005f0f0) list_single_2graphic_im_pane_g3

0x0003,

0xfc3f,	// (0x00062a2c) list_single_2graphic_im_pane_g_ParamLimits

0xfc3f,	// (0x00062a2c) list_single_2graphic_im_pane_g

0xc323,	// (0x0005f110) list_single_2graphic_im_pane_t1_ParamLimits

0xc323,	// (0x0005f110) list_single_2graphic_im_pane_t1

0xbd29,	// (0x0005eb16) list_single_graphic_2heading_pane_fp_ParamLimits

0xbd29,	// (0x0005eb16) list_single_graphic_2heading_pane_fp

0x3ea2,	// (0x00056c8f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3ea2,	// (0x00056c8f) list_single_graphic_2heading_pane_fp_g1

0xbd42,	// (0x0005eb2f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xbd42,	// (0x0005eb2f) list_single_graphic_2heading_pane_fp_g2

0x9d40,	// (0x0005cb2d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9d40,	// (0x0005cb2d) list_single_graphic_2heading_pane_fp_g3

0x9d4c,	// (0x0005cb39) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9d4c,	// (0x0005cb39) list_single_graphic_2heading_pane_fp_g4

0xbd4e,	// (0x0005eb3b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xbd4e,	// (0x0005eb3b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb66,	// (0x00062953) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb66,	// (0x00062953) list_single_graphic_2heading_pane_fp_g

0x3fc9,	// (0x00056db6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3fc9,	// (0x00056db6) list_single_graphic_2heading_pane_fp_t1

0x3eda,	// (0x00056cc7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3eda,	// (0x00056cc7) list_single_graphic_2heading_pane_fp_t2

0x3fdf,	// (0x00056dcc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3fdf,	// (0x00056dcc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc48,	// (0x00062a35) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc48,	// (0x00062a35) list_single_graphic_2heading_pane_fp_t

0xb72c,	// (0x0005e519) fep_hwr_write_pane_g5_ParamLimits

0xb72c,	// (0x0005e519) fep_hwr_write_pane_g5

0xb738,	// (0x0005e525) fep_hwr_write_pane_g6_ParamLimits

0xb738,	// (0x0005e525) fep_hwr_write_pane_g6

0xc01a,	// (0x0005ee07) eswt_shell_pane_ParamLimits

0x8eed,	// (0x0005bcda) bg_popup_window_pane_cp18_ParamLimits

0xc04b,	// (0x0005ee38) heading_pane_cp70

0xc14c,	// (0x0005ef39) popup_eswt_tasktip_window_t1_ParamLimits

0x89a4,	// (0x0005b791) aid_touch_tab_arrow_left

0x89b0,	// (0x0005b79d) aid_touch_tab_arrow_right

0x5134,	// (0x00057f21) title_pane_g3_ParamLimits

0x5134,	// (0x00057f21) title_pane_g3

0xf27c,	// (0x00062069) set_value_pane_g1

0x69b4,	// (0x000597a1) popup_toolbar_trans_pane_ParamLimits

0xc29a,	// (0x0005f087) aid_size_cell_tb_trans_pane_ParamLimits

0xf2bd,	// (0x000620aa) bg_tb_trans_pane_ParamLimits

0xc2ac,	// (0x0005f099) grid_tb_trans_pane_ParamLimits

0xedae,	// (0x00061b9b) cont_note_pane_ParamLimits

0xedae,	// (0x00061b9b) cont_note_pane

0xf038,	// (0x00061e25) cont_snote2_single_text_pane_ParamLimits

0xf038,	// (0x00061e25) cont_snote2_single_text_pane

0xf038,	// (0x00061e25) cont_snote2_single_graphic_pane_ParamLimits

0xf038,	// (0x00061e25) cont_snote2_single_graphic_pane

0x94df,	// (0x0005c2cc) cont_note_wait_pane_ParamLimits

0x94df,	// (0x0005c2cc) cont_note_wait_pane

0x94df,	// (0x0005c2cc) cont_note_image_pane_ParamLimits

0x94df,	// (0x0005c2cc) cont_note_image_pane

0xc354,	// (0x0005f141) popup_note2_window_g1_ParamLimits

0xc354,	// (0x0005f141) popup_note2_window_g1

0xc385,	// (0x0005f172) popup_note2_window_t1_ParamLimits

0xc385,	// (0x0005f172) popup_note2_window_t1

0xc3ca,	// (0x0005f1b7) popup_note2_window_t2_ParamLimits

0xc3ca,	// (0x0005f1b7) popup_note2_window_t2

0xc40f,	// (0x0005f1fc) popup_note2_window_t3_ParamLimits

0xc40f,	// (0x0005f1fc) popup_note2_window_t3

0xc454,	// (0x0005f241) popup_note2_window_t4_ParamLimits

0xc454,	// (0x0005f241) popup_note2_window_t4

0xee32,	// (0x00061c1f) popup_note2_window_t5_ParamLimits

0xee32,	// (0x00061c1f) popup_note2_window_t5

0x0004,

0xfc54,	// (0x00062a41) popup_note2_window_t_ParamLimits

0xfc54,	// (0x00062a41) popup_note2_window_t

0xc483,	// (0x0005f270) popup_note2_image_window_g1_ParamLimits

0xc483,	// (0x0005f270) popup_note2_image_window_g1

0xc48f,	// (0x0005f27c) popup_note2_image_window_g2_ParamLimits

0xc48f,	// (0x0005f27c) popup_note2_image_window_g2

0x0001,

0xfc5f,	// (0x00062a4c) popup_note2_image_window_g_ParamLimits

0xfc5f,	// (0x00062a4c) popup_note2_image_window_g

0xc4a1,	// (0x0005f28e) popup_note2_image_window_t1_ParamLimits

0xc4a1,	// (0x0005f28e) popup_note2_image_window_t1

0xc4b9,	// (0x0005f2a6) popup_note2_image_window_t2_ParamLimits

0xc4b9,	// (0x0005f2a6) popup_note2_image_window_t2

0xc4d1,	// (0x0005f2be) popup_note2_image_window_t3_ParamLimits

0xc4d1,	// (0x0005f2be) popup_note2_image_window_t3

0x0002,

0xfc64,	// (0x00062a51) popup_note2_image_window_t_ParamLimits

0xfc64,	// (0x00062a51) popup_note2_image_window_t

0x94ed,	// (0x0005c2da) popup_note2_wait_window_g1_ParamLimits

0x94ed,	// (0x0005c2da) popup_note2_wait_window_g1

0xc4ed,	// (0x0005f2da) popup_note2_wait_window_g2_ParamLimits

0xc4ed,	// (0x0005f2da) popup_note2_wait_window_g2

0x9505,	// (0x0005c2f2) popup_note2_wait_window_g3_ParamLimits

0x9505,	// (0x0005c2f2) popup_note2_wait_window_g3

0x0002,

0xfc6b,	// (0x00062a58) popup_note2_wait_window_g_ParamLimits

0xfc6b,	// (0x00062a58) popup_note2_wait_window_g

0xc4f9,	// (0x0005f2e6) popup_note2_wait_window_t1_ParamLimits

0xc4f9,	// (0x0005f2e6) popup_note2_wait_window_t1

0xc517,	// (0x0005f304) popup_note2_wait_window_t2_ParamLimits

0xc517,	// (0x0005f304) popup_note2_wait_window_t2

0xc535,	// (0x0005f322) popup_note2_wait_window_t3_ParamLimits

0xc535,	// (0x0005f322) popup_note2_wait_window_t3

0xc547,	// (0x0005f334) popup_note2_wait_window_t4_ParamLimits

0xc547,	// (0x0005f334) popup_note2_wait_window_t4

0x0003,

0xfc72,	// (0x00062a5f) popup_note2_wait_window_t_ParamLimits

0xfc72,	// (0x00062a5f) popup_note2_wait_window_t

0xc559,	// (0x0005f346) wait_bar2_pane_ParamLimits

0xc559,	// (0x0005f346) wait_bar2_pane

0xc571,	// (0x0005f35e) popup_snote2_single_text_window_g1_ParamLimits

0xc571,	// (0x0005f35e) popup_snote2_single_text_window_g1

0xc599,	// (0x0005f386) popup_snote2_single_text_window_t1_ParamLimits

0xc599,	// (0x0005f386) popup_snote2_single_text_window_t1

0xc5e5,	// (0x0005f3d2) popup_snote2_single_text_window_t2_ParamLimits

0xc5e5,	// (0x0005f3d2) popup_snote2_single_text_window_t2

0xc631,	// (0x0005f41e) popup_snote2_single_text_window_t3_ParamLimits

0xc631,	// (0x0005f41e) popup_snote2_single_text_window_t3

0xc672,	// (0x0005f45f) popup_snote2_single_text_window_t4_ParamLimits

0xc672,	// (0x0005f45f) popup_snote2_single_text_window_t4

0xc6a8,	// (0x0005f495) popup_snote2_single_text_window_t5_ParamLimits

0xc6a8,	// (0x0005f495) popup_snote2_single_text_window_t5

0x0004,

0xfc7b,	// (0x00062a68) popup_snote2_single_text_window_t_ParamLimits

0xfc7b,	// (0x00062a68) popup_snote2_single_text_window_t

0xc6d3,	// (0x0005f4c0) popup_snote2_single_graphic_window_g1_ParamLimits

0xc6d3,	// (0x0005f4c0) popup_snote2_single_graphic_window_g1

0xc6fb,	// (0x0005f4e8) popup_snote2_single_graphic_window_g2_ParamLimits

0xc6fb,	// (0x0005f4e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc86,	// (0x00062a73) popup_snote2_single_graphic_window_g_ParamLimits

0xfc86,	// (0x00062a73) popup_snote2_single_graphic_window_g

0xc723,	// (0x0005f510) popup_snote2_single_graphic_window_t1_ParamLimits

0xc723,	// (0x0005f510) popup_snote2_single_graphic_window_t1

0xc76f,	// (0x0005f55c) popup_snote2_single_graphic_window_t2_ParamLimits

0xc76f,	// (0x0005f55c) popup_snote2_single_graphic_window_t2

0xc631,	// (0x0005f41e) popup_snote2_single_graphic_window_t3_ParamLimits

0xc631,	// (0x0005f41e) popup_snote2_single_graphic_window_t3

0xc672,	// (0x0005f45f) popup_snote2_single_graphic_window_t4_ParamLimits

0xc672,	// (0x0005f45f) popup_snote2_single_graphic_window_t4

0xc6a8,	// (0x0005f495) popup_snote2_single_graphic_window_t5_ParamLimits

0xc6a8,	// (0x0005f495) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8b,	// (0x00062a78) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8b,	// (0x00062a78) popup_snote2_single_graphic_window_t

0xb19f,	// (0x0005df8c) clock_nsta_pane_cp2_t1

0xb19f,	// (0x0005df8c) clock_nsta_pane_cp2_t2

0x0001,

0xfa9f,	// (0x0006288c) clock_nsta_pane_cp2_t

0x3a52,	// (0x0005683f) form_field_data_wide_pane_g1_ParamLimits

0xf2cb,	// (0x000620b8) form_field_data_wide_pane_g2_ParamLimits

0xf2cb,	// (0x000620b8) form_field_data_wide_pane_g2

0xf2d7,	// (0x000620c4) form_field_data_wide_pane_g3_ParamLimits

0xf2d7,	// (0x000620c4) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00062448) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00062448) form_field_data_wide_pane_g

0xb07a,	// (0x0005de67) grid_touch_3_pane_ParamLimits

0xb07a,	// (0x0005de67) grid_touch_3_pane

0xc7bb,	// (0x0005f5a8) cell_touch_3_pane_ParamLimits

0xc7bb,	// (0x0005f5a8) cell_touch_3_pane

0xb69b,	// (0x0005e488) cell_touch_3_pane_g1

0xb69b,	// (0x0005e488) cell_touch_3_pane_g2

0x0001,

0xfb24,	// (0x00062911) cell_touch_3_pane_g

0xee8a,	// (0x00061c77) cont_query_data_pane

0xee92,	// (0x00061c7f) cont_query_data_pane_cp1

0xc7ee,	// (0x0005f5db) button_value_adjust_pane_cp7

0xc7f6,	// (0x0005f5e3) query_popup_pane_cp3

0x3232,	// (0x0005601f) bg_popup_sub_pane_cp22_ParamLimits

0x5fc7,	// (0x00058db4) navi_navi_volume_pane_cp2

0x5fe2,	// (0x00058dcf) popup_side_volume_key_window_g2

0x5ff1,	// (0x00058dde) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x000624de) popup_side_volume_key_window_g

0x600e,	// (0x00058dfb) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x000624e5) popup_side_volume_key_window_t

0x8382,	// (0x0005b16f) popup_side_volume_key_window_ParamLimits

0x567d,	// (0x0005846a) list_double_graphic_pane_g4_ParamLimits

0x567d,	// (0x0005846a) list_double_graphic_pane_g4

0x9c82,	// (0x0005ca6f) list_single_2heading_msg_pane_ParamLimits

0x9c82,	// (0x0005ca6f) list_single_2heading_msg_pane

0x9dd0,	// (0x0005cbbd) list_single_2heading_msg_pane_g1_ParamLimits

0x9dd0,	// (0x0005cbbd) list_single_2heading_msg_pane_g1

0x9ddc,	// (0x0005cbc9) list_single_2heading_msg_pane_g2_ParamLimits

0x9ddc,	// (0x0005cbc9) list_single_2heading_msg_pane_g2

0x9de8,	// (0x0005cbd5) list_single_2heading_msg_pane_g3_ParamLimits

0x9de8,	// (0x0005cbd5) list_single_2heading_msg_pane_g3

0x9df4,	// (0x0005cbe1) list_single_2heading_msg_pane_g4_ParamLimits

0x9df4,	// (0x0005cbe1) list_single_2heading_msg_pane_g4

0x0003,

0xfc96,	// (0x00062a83) list_single_2heading_msg_pane_g_ParamLimits

0xfc96,	// (0x00062a83) list_single_2heading_msg_pane_g

0x749a,	// (0x0005a287) list_single_2heading_msg_pane_t1_ParamLimits

0x749a,	// (0x0005a287) list_single_2heading_msg_pane_t1

0x74c2,	// (0x0005a2af) list_single_2heading_msg_pane_t2_ParamLimits

0x74c2,	// (0x0005a2af) list_single_2heading_msg_pane_t2

0x74f1,	// (0x0005a2de) list_single_2heading_msg_pane_t3_ParamLimits

0x74f1,	// (0x0005a2de) list_single_2heading_msg_pane_t3

0x4255,	// (0x00057042) list_single_2heading_msg_pane_t4_ParamLimits

0x4255,	// (0x00057042) list_single_2heading_msg_pane_t4

0x0003,

0xfc9f,	// (0x00062a8c) list_single_2heading_msg_pane_t_ParamLimits

0xfc9f,	// (0x00062a8c) list_single_2heading_msg_pane_t

0xec29,	// (0x00061a16) title_pane_g4_ParamLimits

0xec29,	// (0x00061a16) title_pane_g4

0x5c16,	// (0x00058a03) title_pane_stacon_g3_ParamLimits

0x5c16,	// (0x00058a03) title_pane_stacon_g3

0xc317,	// (0x0005f104) list_single_2graphic_im_pane_g4_ParamLimits

0xc317,	// (0x0005f104) list_single_2graphic_im_pane_g4

0xa13d,	// (0x0005cf2a) popup_side_volume_key_window_cp

0xa98a,	// (0x0005d777) main_idle_act2_pane_t1

0x6ab8,	// (0x000598a5) toolbar_button_pane_g10

0x5491,	// (0x0005827e) popup_toolbar_window_cp1

0xb190,	// (0x0005df7d) clock_nsta_pane_cp_t1

0xb190,	// (0x0005df7d) clock_nsta_pane_cp_t2

0x0001,

0xfa9a,	// (0x00062887) clock_nsta_pane_cp_t

0x5fc7,	// (0x00058db4) navi_navi_volume_pane_cp2_ParamLimits

0x5fd6,	// (0x00058dc3) popup_side_volume_key_window_g1_ParamLimits

0x5fe2,	// (0x00058dcf) popup_side_volume_key_window_g2_ParamLimits

0x5ff1,	// (0x00058dde) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x000624de) popup_side_volume_key_window_g_ParamLimits

0x703e,	// (0x00059e2b) fep_hwr_aid_pane

0x70e7,	// (0x00059ed4) bg_fep_hwr_top_pane_g4_ParamLimits

0xb6fc,	// (0x0005e4e9) fep_hwr_top_pane_g1_ParamLimits

0xb70e,	// (0x0005e4fb) fep_hwr_top_pane_g2_ParamLimits

0x7107,	// (0x00059ef4) fep_hwr_top_pane_g3_ParamLimits

0xfaef,	// (0x000628dc) fep_hwr_top_pane_g_ParamLimits

0x711c,	// (0x00059f09) fep_hwr_top_text_pane_ParamLimits

0x9ef2,	// (0x0005ccdf) aid_touch_tab_arrow_arrow_2

0x9efb,	// (0x0005cce8) aid_touch_tab_arrow_left_2

0x7052,	// (0x00059e3f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7089,	// (0x00059e76) fep_hwr_prediction_pane

0xb864,	// (0x0005e651) fep_vkb_prediction_pane

0xb96a,	// (0x0005e757) fep_vkb_side_pane_g3_ParamLimits

0xb96a,	// (0x0005e757) fep_vkb_side_pane_g3

0x72ab,	// (0x0005a098) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x731c,	// (0x0005a109) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7329,	// (0x0005a116) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9e,	// (0x0006298b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x752a,	// (0x0005a317) fep_hwr_prediction_pane_g1

0x7534,	// (0x0005a321) fep_hwr_prediction_pane_g2

0x753c,	// (0x0005a329) fep_hwr_prediction_pane_g3

0x7544,	// (0x0005a331) fep_hwr_prediction_pane_g4

0x0003,

0xfca8,	// (0x00062a95) fep_hwr_prediction_pane_g

0xc81d,	// (0x0005f60a) fep_vkb_prediction_pane_g1

0xc827,	// (0x0005f614) fep_vkb_prediction_pane_g2

0xc82f,	// (0x0005f61c) fep_vkb_prediction_pane_g3

0xc837,	// (0x0005f624) fep_vkb_prediction_pane_g4

0x0003,

0xfcb1,	// (0x00062a9e) fep_vkb_prediction_pane_g

0x6e08,	// (0x00059bf5) slider_set_pane_g3

0x6e1c,	// (0x00059c09) slider_set_pane_g4

0x6e34,	// (0x00059c21) slider_set_pane_g5

0x6e08,	// (0x00059bf5) slider_set_pane_g6

0x6e4a,	// (0x00059c37) slider_set_pane_g7

0xa5c3,	// (0x0005d3b0) slider_form_pane_g3

0xa5cc,	// (0x0005d3b9) slider_form_pane_g4

0xa5d4,	// (0x0005d3c1) slider_form_pane_g5

0xa5c3,	// (0x0005d3b0) slider_form_pane_g6

0xa5dc,	// (0x0005d3c9) slider_form_pane_g7

0xac4e,	// (0x0005da3b) slider_set_pane_vc_g3

0xac57,	// (0x0005da44) slider_set_pane_vc_g4

0xac60,	// (0x0005da4d) slider_set_pane_vc_g5

0xac4e,	// (0x0005da3b) slider_set_pane_vc_g6

0xac69,	// (0x0005da56) slider_set_pane_vc_g7

0xae3f,	// (0x0005dc2c) slider_form_pane_vc_g1

0xae48,	// (0x0005dc35) slider_form_pane_vc_g2

0xae51,	// (0x0005dc3e) slider_form_pane_vc_g3

0xae3f,	// (0x0005dc2c) slider_form_pane_vc_g4

0xae5a,	// (0x0005dc47) slider_form_pane_vc_g5

0x0004,

0xfa6c,	// (0x00062859) slider_form_pane_vc_g

0x4ea5,	// (0x00057c92) main_idle_act3_pane

0xc83f,	// (0x0005f62c) ai3_links_pane

0xc848,	// (0x0005f635) popup_ai3_data_window_ParamLimits

0xc848,	// (0x0005f635) popup_ai3_data_window

0xec0b,	// (0x000619f8) grid_ai3_links_pane

0xc866,	// (0x0005f653) cell_ai3_links_pane_ParamLimits

0xc866,	// (0x0005f653) cell_ai3_links_pane

0xc880,	// (0x0005f66d) bg_popup_sub_pane_cp11

0xc88d,	// (0x0005f67a) cell_ai3_links_pane_g1

0xec0b,	// (0x000619f8) bg_popup_sub_pane_cp12

0xc8b2,	// (0x0005f69f) heading_ai3_data_pane

0xc8ba,	// (0x0005f6a7) list_ai3_gene_pane

0xc8c6,	// (0x0005f6b3) popup_ai3_data_window_g1

0xc8ce,	// (0x0005f6bb) heading_ai3_data_pane_g1

0xc8d6,	// (0x0005f6c3) heading_ai3_data_pane_t1

0xc8e4,	// (0x0005f6d1) list_double_ai3_gene_pane_ParamLimits

0xc8e4,	// (0x0005f6d1) list_double_ai3_gene_pane

0xc8f1,	// (0x0005f6de) list_single_ai3_gene_pane_ParamLimits

0xc8f1,	// (0x0005f6de) list_single_ai3_gene_pane

0xb660,	// (0x0005e44d) list_highlight_pane_cp7_ParamLimits

0xb660,	// (0x0005e44d) list_highlight_pane_cp7

0xc8fe,	// (0x0005f6eb) list_single_a13_gene_pane_t1_ParamLimits

0xc8fe,	// (0x0005f6eb) list_single_a13_gene_pane_t1

0xc915,	// (0x0005f702) list_single_ai3_gene_pane_g1

0xc91e,	// (0x0005f70b) list_single_ai3_gene_pane_g2

0x0001,

0xfcba,	// (0x00062aa7) list_single_ai3_gene_pane_g

0xc926,	// (0x0005f713) list_double_ai3_gene_pane_g1_ParamLimits

0xc926,	// (0x0005f713) list_double_ai3_gene_pane_g1

0xc932,	// (0x0005f71f) list_double_ai3_gene_pane_t1_ParamLimits

0xc932,	// (0x0005f71f) list_double_ai3_gene_pane_t1

0xc94e,	// (0x0005f73b) list_double_ai3_gene_pane_t2_ParamLimits

0xc94e,	// (0x0005f73b) list_double_ai3_gene_pane_t2

0xc963,	// (0x0005f750) list_double_ai3_gene_pane_t3_ParamLimits

0xc963,	// (0x0005f750) list_double_ai3_gene_pane_t3

0x0002,

0xfcbf,	// (0x00062aac) list_double_ai3_gene_pane_t_ParamLimits

0xfcbf,	// (0x00062aac) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3ff5,	// (0x00056de2) aid_size_min_col_2

0xc807,	// (0x0005f5f4) aid_size_min_msg_ParamLimits

0xc807,	// (0x0005f5f4) aid_size_min_msg

0xba76,	// (0x0005e863) fep_vkb_top_text_pane_g2_ParamLimits

0xba76,	// (0x0005e863) fep_vkb_top_text_pane_g2

0x0001,

0xfb1f,	// (0x0006290c) fep_vkb_top_text_pane_g_ParamLimits

0xfb1f,	// (0x0006290c) fep_vkb_top_text_pane_g

0x4ea5,	// (0x00057c92) main_hc_apps_shell_pane

0xc980,	// (0x0005f76d) grid_hc_apps_pane_ParamLimits

0xc980,	// (0x0005f76d) grid_hc_apps_pane

0xc992,	// (0x0005f77f) list_hc_apps_pane

0xc99a,	// (0x0005f787) scroll_pane_cp37_ParamLimits

0xc99a,	// (0x0005f787) scroll_pane_cp37

0xc9a6,	// (0x0005f793) cell_hc_apps_pane_ParamLimits

0xc9a6,	// (0x0005f793) cell_hc_apps_pane

0xca5a,	// (0x0005f847) cell_hc_apps_pane_g1_ParamLimits

0xca5a,	// (0x0005f847) cell_hc_apps_pane_g1

0xca86,	// (0x0005f873) cell_hc_apps_pane_g2_ParamLimits

0xca86,	// (0x0005f873) cell_hc_apps_pane_g2

0xcaa2,	// (0x0005f88f) cell_hc_apps_pane_g3_ParamLimits

0xcaa2,	// (0x0005f88f) cell_hc_apps_pane_g3

0x0002,

0xfcc6,	// (0x00062ab3) cell_hc_apps_pane_g_ParamLimits

0xfcc6,	// (0x00062ab3) cell_hc_apps_pane_g

0xcac4,	// (0x0005f8b1) cell_hc_apps_pane_t1_ParamLimits

0xcac4,	// (0x0005f8b1) cell_hc_apps_pane_t1

0xedae,	// (0x00061b9b) grid_highlight_pane_cp10_ParamLimits

0xedae,	// (0x00061b9b) grid_highlight_pane_cp10

0xcb04,	// (0x0005f8f1) list_single_hc_apps_pane_ParamLimits

0xcb04,	// (0x0005f8f1) list_single_hc_apps_pane

0xcb43,	// (0x0005f930) list_single_hc_apps_pane_g1

0x9e0c,	// (0x0005cbf9) list_single_hc_apps_pane_g2

0x0001,

0xfccd,	// (0x00062aba) list_single_hc_apps_pane_g

0x9e25,	// (0x0005cc12) list_single_hc_apps_pane_g2_copy1

0x754c,	// (0x0005a339) list_single_hc_apps_pane_t1

0xec6d,	// (0x00061a5a) bg_set_opt_pane_cp_ParamLimits

0x51e6,	// (0x00057fd3) setting_slider_pane_t1_ParamLimits

0x51ff,	// (0x00057fec) setting_slider_pane_t2_ParamLimits

0x5219,	// (0x00058006) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00062326) setting_slider_pane_t_ParamLimits

0x5231,	// (0x0005801e) slider_set_pane_ParamLimits

0x634f,	// (0x0005913c) control_pane_g5_ParamLimits

0x634f,	// (0x0005913c) control_pane_g5

0xa3f6,	// (0x0005d1e3) slider_set_pane_g1_ParamLimits

0x6dfc,	// (0x00059be9) slider_set_pane_g2_ParamLimits

0x6e08,	// (0x00059bf5) slider_set_pane_g3_ParamLimits

0x6e1c,	// (0x00059c09) slider_set_pane_g4_ParamLimits

0x6e34,	// (0x00059c21) slider_set_pane_g5_ParamLimits

0x6e08,	// (0x00059bf5) slider_set_pane_g6_ParamLimits

0x6e4a,	// (0x00059c37) slider_set_pane_g7_ParamLimits

0xf944,	// (0x00062731) slider_set_pane_g_ParamLimits

0x845b,	// (0x0005b248) navi_icon_text_pane_ParamLimits

0x8963,	// (0x0005b750) aid_fill_nsta_2_ParamLimits

0x89a4,	// (0x0005b791) aid_touch_tab_arrow_left_ParamLimits

0x89b0,	// (0x0005b79d) aid_touch_tab_arrow_right_ParamLimits

0x8a1c,	// (0x0005b809) clock_nsta_pane_ParamLimits

0x9ed4,	// (0x0005ccc1) navi_icon_pane_g1_ParamLimits

0x9ee0,	// (0x0005cccd) navi_text_pane_t1_ParamLimits

0xb2ad,	// (0x0005e09a) navi_icon_text_pane_g1_ParamLimits

0xb2b9,	// (0x0005e0a6) navi_icon_text_pane_t1_ParamLimits

0xcb43,	// (0x0005f930) list_single_hc_apps_pane_g1_ParamLimits

0x9e0c,	// (0x0005cbf9) list_single_hc_apps_pane_g2_ParamLimits

0xfccd,	// (0x00062aba) list_single_hc_apps_pane_g_ParamLimits

0x9e25,	// (0x0005cc12) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x754c,	// (0x0005a339) list_single_hc_apps_pane_t1_ParamLimits

0x501a,	// (0x00057e07) popup_toolbar2_fixed_window_ParamLimits

0x501a,	// (0x00057e07) popup_toolbar2_fixed_window

0x69aa,	// (0x00059797) popup_toolbar2_float_window

0xec0b,	// (0x000619f8) bg_popup_sub_pane_cp27

0xcb5c,	// (0x0005f949) grid_toolbar2_float_pane

0xec0b,	// (0x000619f8) bg_popup_sub_pane_cp26

0xcb5c,	// (0x0005f949) grid_toolbar2_fixed_pane

0xcb64,	// (0x0005f951) cell_toolbar2_fixed_pane_ParamLimits

0xcb64,	// (0x0005f951) cell_toolbar2_fixed_pane

0xcb74,	// (0x0005f961) cell_toolbar2_fixed_pane_g1

0xcb7d,	// (0x0005f96a) toolbar2_fixed_button_pane

0x8e61,	// (0x0005bc4e) toolbar2_fixed_button_pane_g1

0x8e71,	// (0x0005bc5e) toolbar2_fixed_button_pane_g2

0x8e69,	// (0x0005bc56) toolbar2_fixed_button_pane_g3

0x8e81,	// (0x0005bc6e) toolbar2_fixed_button_pane_g4

0x8e79,	// (0x0005bc66) toolbar2_fixed_button_pane_g5

0x8e89,	// (0x0005bc76) toolbar2_fixed_button_pane_g6

0x8e91,	// (0x0005bc7e) toolbar2_fixed_button_pane_g7

0x8ea1,	// (0x0005bc8e) toolbar2_fixed_button_pane_g8

0x8e99,	// (0x0005bc86) toolbar2_fixed_button_pane_g9

0x0008,

0xf846,	// (0x00062633) toolbar2_fixed_button_pane_g

0xcb85,	// (0x0005f972) cell_toolbar2_float_pane_ParamLimits

0xcb85,	// (0x0005f972) cell_toolbar2_float_pane

0xcb96,	// (0x0005f983) cell_toolbar2_float_pane_g1

0xcb7d,	// (0x0005f96a) toolbar2_fixed_button_pane_cp

0xb7d2,	// (0x0005e5bf) fep_vkb_accented_list_pane_ParamLimits

0xb7d2,	// (0x0005e5bf) fep_vkb_accented_list_pane

0x728b,	// (0x0005a078) bg_popup_fep_shadow_pane_g9

0x85ea,	// (0x0005b3d7) bg_popup_fep_shadow_pane_cp3

0xf3e0,	// (0x000621cd) list_accented_list_pane

0xcb9f,	// (0x0005f98c) list_single_accented_list_pane_ParamLimits

0xcb9f,	// (0x0005f98c) list_single_accented_list_pane

0x85ea,	// (0x0005b3d7) list_highlight_pane_cp10

0xcbb0,	// (0x0005f99d) list_single_accented_list_pane_t1

0x68f0,	// (0x000596dd) popup_slider_window_ParamLimits

0x68f0,	// (0x000596dd) popup_slider_window

0xc7fe,	// (0x0005f5eb) aid_indentation_list_msg

0xcc80,	// (0x0005fa6d) bg_popup_window_pane_cp19

0xccec,	// (0x0005fad9) popup_slider_window_g1

0xcd08,	// (0x0005faf5) popup_slider_window_g2

0xcd24,	// (0x0005fb11) popup_slider_window_g3

0x0005,

0xfcd2,	// (0x00062abf) popup_slider_window_g

0xcd8a,	// (0x0005fb77) popup_slider_window_t1

0xcdfe,	// (0x0005fbeb) small_volume_slider_vertical_pane

0xb69b,	// (0x0005e488) small_volume_slider_vertical_pane_g1

0xb69b,	// (0x0005e488) small_volume_slider_vertical_pane_g2

0xce1a,	// (0x0005fc07) small_volume_slider_vertical_pane_g3

0x0002,

0xfce4,	// (0x00062ad1) small_volume_slider_vertical_pane_g

0x4dc8,	// (0x00057bb5) area_side_right_pane_ParamLimits

0x4dc8,	// (0x00057bb5) area_side_right_pane

0x757a,	// (0x0005a367) aid_size_side_button_ParamLimits

0x757a,	// (0x0005a367) aid_size_side_button

0x758e,	// (0x0005a37b) grid_sctrl_middle_pane_ParamLimits

0x758e,	// (0x0005a37b) grid_sctrl_middle_pane

0x75ad,	// (0x0005a39a) sctrl_sk_bottom_pane

0x75be,	// (0x0005a3ab) sctrl_sk_top_pane

0x75d0,	// (0x0005a3bd) aid_touch_sctrl_top

0x75dd,	// (0x0005a3ca) bg_sctrl_sk_pane_ParamLimits

0x75dd,	// (0x0005a3ca) bg_sctrl_sk_pane

0x75eb,	// (0x0005a3d8) sctrl_sk_top_pane_g1

0x75f8,	// (0x0005a3e5) sctrl_sk_top_pane_t1

0x75d0,	// (0x0005a3bd) aid_touch_sctrl_bottom

0x75dd,	// (0x0005a3ca) bg_sctrl_sk_pane_cp_ParamLimits

0x75dd,	// (0x0005a3ca) bg_sctrl_sk_pane_cp

0x7613,	// (0x0005a400) sctrl_sk_bottom_pane_g1

0x75f8,	// (0x0005a3e5) sctrl_sk_bottom_pane_t1

0x761c,	// (0x0005a409) cell_sctrl_middle_pane_ParamLimits

0x761c,	// (0x0005a409) cell_sctrl_middle_pane

0x7639,	// (0x0005a426) aid_touch_sctrl_middle_ParamLimits

0x7639,	// (0x0005a426) aid_touch_sctrl_middle

0x764b,	// (0x0005a438) bg_sctrl_middle_pane_ParamLimits

0x764b,	// (0x0005a438) bg_sctrl_middle_pane

0x72ab,	// (0x0005a098) cell_sctrl_middle_pane_g1_ParamLimits

0x72ab,	// (0x0005a098) cell_sctrl_middle_pane_g1

0x7659,	// (0x0005a446) cell_sctrl_middle_pane_g2_ParamLimits

0x7659,	// (0x0005a446) cell_sctrl_middle_pane_g2

0x0001,

0xfcf0,	// (0x00062add) cell_sctrl_middle_pane_g_ParamLimits

0xfcf0,	// (0x00062add) cell_sctrl_middle_pane_g

0x8e61,	// (0x0005bc4e) bg_sctrl_middle_pane_g1

0x8e69,	// (0x0005bc56) bg_sctrl_middle_pane_g2

0x8e71,	// (0x0005bc5e) bg_sctrl_middle_pane_g3

0x8e79,	// (0x0005bc66) bg_sctrl_middle_pane_g4

0x8e81,	// (0x0005bc6e) bg_sctrl_middle_pane_g5

0x8e89,	// (0x0005bc76) bg_sctrl_middle_pane_g6

0x8e91,	// (0x0005bc7e) bg_sctrl_middle_pane_g7

0x8e99,	// (0x0005bc86) bg_sctrl_middle_pane_g8

0x0007,

0xfcf5,	// (0x00062ae2) bg_sctrl_middle_pane_g

0x8ea1,	// (0x0005bc8e) bg_sctrl_middle_pane_g8_copy1

0x8e61,	// (0x0005bc4e) bg_sctrl_sk_pane_g1

0x8e71,	// (0x0005bc5e) bg_sctrl_sk_pane_g2

0x8e69,	// (0x0005bc56) bg_sctrl_sk_pane_g3

0x0008,

0xf846,	// (0x00062633) bg_sctrl_sk_pane_g

0xf1f6,	// (0x00061fe3) aid_size_touch_scroll_bar

0x8e81,	// (0x0005bc6e) bg_sctrl_sk_pane_g4

0x8e79,	// (0x0005bc66) bg_sctrl_sk_pane_g5

0x8e89,	// (0x0005bc76) bg_sctrl_sk_pane_g6

0x8e91,	// (0x0005bc7e) bg_sctrl_sk_pane_g7

0x8ea1,	// (0x0005bc8e) bg_sctrl_sk_pane_g8

0x8e99,	// (0x0005bc86) bg_sctrl_sk_pane_g9

0x6505,	// (0x000592f2) popup_fep_china_hwr2_fs_candidate_window

0x650f,	// (0x000592fc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x650f,	// (0x000592fc) popup_fep_china_hwr2_fs_control_window

0x72ab,	// (0x0005a098) sctrl_sk_top_pane_g2

0x0001,

0xfceb,	// (0x00062ad8) sctrl_sk_top_pane_g

0xce23,	// (0x0005fc10) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce23,	// (0x0005fc10) aid_fep_china_hwr2_fs_cell

0xce36,	// (0x0005fc23) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce36,	// (0x0005fc23) bg_popup_fep_shadow_pane_cp4

0xce4f,	// (0x0005fc3c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce4f,	// (0x0005fc3c) bg_popup_fep_shadow_pane_cp5

0xce61,	// (0x0005fc4e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce61,	// (0x0005fc4e) popup_fep_china_hwr2_fs_control_bar_grid

0xce71,	// (0x0005fc5e) popup_fep_china_hwr2_fs_control_funtion_grid

0xce79,	// (0x0005fc66) aid_fep_china_hwr2_fs_candi_cell

0xec0b,	// (0x000619f8) bg_popup_fep_shadow_pane_cp6

0xce83,	// (0x0005fc70) popup_fep_china_hwr2_fs_candidate_grid

0xce8d,	// (0x0005fc7a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xce8d,	// (0x0005fc7a) cell_fep_china_hwr2_fs_funtion_grid

0xb69b,	// (0x0005e488) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcea5,	// (0x0005fc92) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcea5,	// (0x0005fc92) cell_fep_china_hwr2_fs_funtion_grid_g1

0xceb3,	// (0x0005fca0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xceb3,	// (0x0005fca0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd06,	// (0x00062af3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd06,	// (0x00062af3) cell_fep_china_hwr2_fs_funtion_grid_g

0xcec9,	// (0x0005fcb6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcec9,	// (0x0005fcb6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcede,	// (0x0005fccb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcede,	// (0x0005fccb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0b,	// (0x00062af8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0b,	// (0x00062af8) cell_fep_china_hwr2_fs_funtion_grid_t

0xcefa,	// (0x0005fce7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcf02,	// (0x0005fcef) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcf0a,	// (0x0005fcf7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd10,	// (0x00062afd) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcf12,	// (0x0005fcff) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcf12,	// (0x0005fcff) cell_fep_china_hwr2_fs_candidate_grid

0xcf31,	// (0x0005fd1e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcf39,	// (0x0005fd26) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb69b,	// (0x0005e488) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb69b,	// (0x0005e488) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb24,	// (0x00062911) cell_fep_china_hwr2_fs_candidate_grid_g

0xcf41,	// (0x0005fd2e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8a2f,	// (0x0005b81c) clock_nsta_pane_cp_24_ParamLimits

0x8a2f,	// (0x0005b81c) clock_nsta_pane_cp_24

0x8aaf,	// (0x0005b89c) indicator_nsta_pane_cp_24_ParamLimits

0x8aaf,	// (0x0005b89c) indicator_nsta_pane_cp_24

0x9b62,	// (0x0005c94f) heading_pane_g1

0x0001,

0xf8ab,	// (0x00062698) heading_pane_g

0xa7d1,	// (0x0005d5be) grid_sct_catagory_button_pane

0xa803,	// (0x0005d5f0) scroll_pane_cp5_ParamLimits

0xb2fb,	// (0x0005e0e8) button_value_adjust_pane_cp5_ParamLimits

0xb2fb,	// (0x0005e0e8) button_value_adjust_pane_cp5

0xb3e0,	// (0x0005e1cd) form2_midp_time_pane_ParamLimits

0xcf4f,	// (0x0005fd3c) cell_sct_catagory_button_pane_ParamLimits

0xcf4f,	// (0x0005fd3c) cell_sct_catagory_button_pane

0xb660,	// (0x0005e44d) bg_button_pane_cp01_ParamLimits

0xb660,	// (0x0005e44d) bg_button_pane_cp01

0xb69b,	// (0x0005e488) cell_sct_catagory_button_pane_g1

0x6931,	// (0x0005971e) popup_tb_extension_window

0xcf61,	// (0x0005fd4e) aid_size_cell_ext_ParamLimits

0xcf61,	// (0x0005fd4e) aid_size_cell_ext

0xedae,	// (0x00061b9b) bg_tb_trans_pane_cp1_ParamLimits

0xedae,	// (0x00061b9b) bg_tb_trans_pane_cp1

0xcf81,	// (0x0005fd6e) grid_tb_ext_pane_ParamLimits

0xcf81,	// (0x0005fd6e) grid_tb_ext_pane

0xcfaf,	// (0x0005fd9c) cell_tb_ext_pane_ParamLimits

0xcfaf,	// (0x0005fd9c) cell_tb_ext_pane

0xcfc6,	// (0x0005fdb3) cell_tb_ext_pane_g1_ParamLimits

0xcfc6,	// (0x0005fdb3) cell_tb_ext_pane_g1

0xcfe3,	// (0x0005fdd0) cell_tb_ext_pane_t1

0xedae,	// (0x00061b9b) list_highlight_pane_cp11_ParamLimits

0xedae,	// (0x00061b9b) list_highlight_pane_cp11

0x5039,	// (0x00057e26) popup_uni_indicator_window_ParamLimits

0x5039,	// (0x00057e26) popup_uni_indicator_window

0xf2bd,	// (0x000620aa) bg_popup_sub_pane_cp14

0xcffe,	// (0x0005fdeb) list_uniindi_pane

0xd00a,	// (0x0005fdf7) uniindi_top_pane

0xedae,	// (0x00061b9b) bg_uniindi_top_pane

0xd02b,	// (0x0005fe18) uniindi_top_pane_g1

0xd041,	// (0x0005fe2e) uniindi_top_pane_g2

0x0003,

0xfd17,	// (0x00062b04) uniindi_top_pane_g

0xd06b,	// (0x0005fe58) uniindi_top_pane_t1

0xd097,	// (0x0005fe84) list_single_uniindi_pane_ParamLimits

0xd097,	// (0x0005fe84) list_single_uniindi_pane

0xb69b,	// (0x0005e488) bg_uniindi_top_pane_g1

0xd0aa,	// (0x0005fe97) list_single_uniindi_pane_g1

0xd0bd,	// (0x0005feaa) list_single_uniindi_pane_t1

0x4ea5,	// (0x00057c92) control_bg_pane

0xd0e2,	// (0x0005fecf) bg_sctrl_sk_pane_cp1

0xd0eb,	// (0x0005fed8) bg_sctrl_sk_pane_cp2

0xd0f4,	// (0x0005fee1) control_bg_pane_g1

0xd0fd,	// (0x0005feea) control_bg_pane_g2

0x0001,

0xfd20,	// (0x00062b0d) control_bg_pane_g

0xb133,	// (0x0005df20) cell_indicator_nsta_pane_g1_ParamLimits

0xb141,	// (0x0005df2e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa88,	// (0x00062875) cell_indicator_nsta_pane_g_ParamLimits

0x3e78,	// (0x00056c65) form2_midp_time_pane_t1_ParamLimits

0x6463,	// (0x00059250) main_idle_act4_pane_ParamLimits

0x6463,	// (0x00059250) main_idle_act4_pane

0x6931,	// (0x0005971e) popup_tb_extension_window_ParamLimits

0xcfa1,	// (0x0005fd8e) tb_ext_find_pane_ParamLimits

0xcfa1,	// (0x0005fd8e) tb_ext_find_pane

0xd106,	// (0x0005fef3) ai_gene_pane_1_cp1

0x8734,	// (0x0005b521) ai_gene_pane_2_cp1

0xd10e,	// (0x0005fefb) list_single_idle_plugin_calendar_pane

0xd117,	// (0x0005ff04) list_single_idle_plugin_notification_pane

0xd120,	// (0x0005ff0d) list_single_idle_plugin_player_pane

0xd129,	// (0x0005ff16) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd129,	// (0x0005ff16) list_single_idle_plugin_shortcut_pane

0xd14b,	// (0x0005ff38) main_idle_act4_pane_t1

0xd15d,	// (0x0005ff4a) main_idle_act4_pane_t2

0x0001,

0xfd25,	// (0x00062b12) main_idle_act4_pane_t

0xd16f,	// (0x0005ff5c) middle_sk_idle_act4_pane_ParamLimits

0xd16f,	// (0x0005ff5c) middle_sk_idle_act4_pane

0xd185,	// (0x0005ff72) popup_clock_digital_analogue_window_cp2

0xd19f,	// (0x0005ff8c) shortcut_wheel_idle_act4_pane_ParamLimits

0xd19f,	// (0x0005ff8c) shortcut_wheel_idle_act4_pane

0xb69b,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g1

0xb69b,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g2

0xb69b,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g3

0xb69b,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g4

0xb69b,	// (0x0005e488) shortcut_wheel_idle_act4_pane_g5

0xd1b3,	// (0x0005ffa0) shortcut_wheel_idle_act4_pane_g6

0xd1bb,	// (0x0005ffa8) shortcut_wheel_idle_act4_pane_g7

0xd1c3,	// (0x0005ffb0) shortcut_wheel_idle_act4_pane_g8

0xd1cb,	// (0x0005ffb8) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2a,	// (0x00062b17) shortcut_wheel_idle_act4_pane_g

0xb916,	// (0x0005e703) middle_sk_idle_act4_pane_g1_ParamLimits

0xb916,	// (0x0005e703) middle_sk_idle_act4_pane_g1

0xd22f,	// (0x0006001c) middle_sk_idle_act4_pane_g2_ParamLimits

0xd22f,	// (0x0006001c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4d,	// (0x00062b3a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4d,	// (0x00062b3a) middle_sk_idle_act4_pane_g

0xd23b,	// (0x00060028) middle_sk_idle_act4_pane_t1_ParamLimits

0xd23b,	// (0x00060028) middle_sk_idle_act4_pane_t1

0xd258,	// (0x00060045) grid_ai_shortcut_pane_ParamLimits

0xd258,	// (0x00060045) grid_ai_shortcut_pane

0xd271,	// (0x0006005e) list_highlight_pane_cp16_ParamLimits

0xd271,	// (0x0006005e) list_highlight_pane_cp16

0xd27e,	// (0x0006006b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd27e,	// (0x0006006b) list_single_idle_plugin_shortcut_pane_g1

0xd28a,	// (0x00060077) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd28a,	// (0x00060077) list_single_idle_plugin_shortcut_pane_g2

0xd2a4,	// (0x00060091) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd2a4,	// (0x00060091) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd52,	// (0x00062b3f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd52,	// (0x00062b3f) list_single_idle_plugin_shortcut_pane_g

0xd2b7,	// (0x000600a4) cell_ai_shortcut_pane_ParamLimits

0xd2b7,	// (0x000600a4) cell_ai_shortcut_pane

0xd2da,	// (0x000600c7) cell_ai_shortcut_pane_g1_ParamLimits

0xd2da,	// (0x000600c7) cell_ai_shortcut_pane_g1

0xd106,	// (0x0005fef3) ai_gene_pane_1_cp2

0xd2fc,	// (0x000600e9) ai_gene_pane_2_cp2

0xd304,	// (0x000600f1) list_highlight_pane_cp15

0xd30d,	// (0x000600fa) list_single_idle_plugin_calendar_pane_g1

0xd304,	// (0x000600f1) list_highlight_pane_cp17

0xd315,	// (0x00060102) list_single_idle_plugin_calendar_pane_g1_copy1

0xd31d,	// (0x0006010a) list_single_idle_plugin_player_pane_g1

0xaa38,	// (0x0005d825) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd59,	// (0x00062b46) list_single_idle_plugin_player_pane_g

0xd325,	// (0x00060112) list_single_idle_plugin_player_pane_t1

0xd333,	// (0x00060120) list_single_idle_plugin_player_pane_t2

0xd341,	// (0x0006012e) list_single_idle_plugin_player_pane_t3

0xd34f,	// (0x0006013c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5e,	// (0x00062b4b) list_single_idle_plugin_player_pane_t

0xd35d,	// (0x0006014a) wait_bar_pane_cp15

0xd365,	// (0x00060152) grid_ai_notification_pane

0xaa38,	// (0x0005d825) list_single_idle_plugin_notification_pane_g1

0xd36e,	// (0x0006015b) cell_ai_notification_pane_ParamLimits

0xd36e,	// (0x0006015b) cell_ai_notification_pane

0xd37b,	// (0x00060168) cell_ai_notification_pane_g1

0xd383,	// (0x00060170) cell_ai_notification_pane_t1

0xd391,	// (0x0006017e) tb_ext_find_button_pane

0xd399,	// (0x00060186) tb_ext_find_pane_g1

0xd3a1,	// (0x0006018e) tb_ext_find_pane_t1

0x31d2,	// (0x00055fbf) tb_ext_find_button_pane_g1

0xd3af,	// (0x0006019c) tb_ext_find_button_pane_g2

0x0001,

0xfd67,	// (0x00062b54) tb_ext_find_button_pane_g

0xd14b,	// (0x0005ff38) main_idle_act4_pane_t1_ParamLimits

0xd15d,	// (0x0005ff4a) main_idle_act4_pane_t2_ParamLimits

0xfd25,	// (0x00062b12) main_idle_act4_pane_t_ParamLimits

0xd185,	// (0x0005ff72) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd193,	// (0x0005ff80) sat_plugin_idle_act4_pane_ParamLimits

0xd193,	// (0x0005ff80) sat_plugin_idle_act4_pane

0xd3b8,	// (0x000601a5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd3b8,	// (0x000601a5) sat_plugin_idle_act4_pane_t1

0xd3cb,	// (0x000601b8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd3cb,	// (0x000601b8) sat_plugin_idle_act4_pane_t2

0xd3de,	// (0x000601cb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd3de,	// (0x000601cb) sat_plugin_idle_act4_pane_t3

0xd3f1,	// (0x000601de) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd3f1,	// (0x000601de) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6c,	// (0x00062b59) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6c,	// (0x00062b59) sat_plugin_idle_act4_pane_t

0x4f6a,	// (0x00057d57) popup_battery_window_ParamLimits

0x4f6a,	// (0x00057d57) popup_battery_window

0xedae,	// (0x00061b9b) bg_popup_sub_pane_cp25_ParamLimits

0xedae,	// (0x00061b9b) bg_popup_sub_pane_cp25

0xd404,	// (0x000601f1) popup_battery_window_g1_ParamLimits

0xd404,	// (0x000601f1) popup_battery_window_g1

0xd410,	// (0x000601fd) popup_battery_window_t1_ParamLimits

0xd410,	// (0x000601fd) popup_battery_window_t1

0xd422,	// (0x0006020f) popup_battery_window_t2_ParamLimits

0xd422,	// (0x0006020f) popup_battery_window_t2

0x0001,

0xfd75,	// (0x00062b62) popup_battery_window_t_ParamLimits

0xfd75,	// (0x00062b62) popup_battery_window_t

0x85fe,	// (0x0005b3eb) midp_canvas_pane_ParamLimits

0x8676,	// (0x0005b463) midp_keypad_pane_ParamLimits

0x8676,	// (0x0005b463) midp_keypad_pane

0x8911,	// (0x0005b6fe) main_midp_pane_ParamLimits

0xb1ae,	// (0x0005df9b) signal_pane_g2_cp_ParamLimits

0xd43f,	// (0x0006022c) aid_size_cell_midp_keypad_ParamLimits

0xd43f,	// (0x0006022c) aid_size_cell_midp_keypad

0xd459,	// (0x00060246) midp_keyp_game_grid_pane_ParamLimits

0xd459,	// (0x00060246) midp_keyp_game_grid_pane

0xd479,	// (0x00060266) midp_keyp_rocker_pane_ParamLimits

0xd479,	// (0x00060266) midp_keyp_rocker_pane

0xd4a8,	// (0x00060295) midp_keyp_sk_left_pane_ParamLimits

0xd4a8,	// (0x00060295) midp_keyp_sk_left_pane

0xd504,	// (0x000602f1) midp_keyp_sk_right_pane_ParamLimits

0xd504,	// (0x000602f1) midp_keyp_sk_right_pane

0xec0b,	// (0x000619f8) bg_button_pane_cp03

0xd560,	// (0x0006034d) midp_keyp_sk_left_pane_g1

0xec0b,	// (0x000619f8) bg_button_pane_cp04

0xd560,	// (0x0006034d) midp_keyp_sk_right_pane_g1

0xb69b,	// (0x0005e488) midp_keyp_rocker_pane_g1

0xd568,	// (0x00060355) keyp_game_cell_pane_ParamLimits

0xd568,	// (0x00060355) keyp_game_cell_pane

0xec0b,	// (0x000619f8) bg_button_pane_cp02

0xd57b,	// (0x00060368) keyp_game_cell_pane_g1

0x4fb4,	// (0x00057da1) popup_fep_vkb2_window_ParamLimits

0x4fb4,	// (0x00057da1) popup_fep_vkb2_window

0x7677,	// (0x0005a464) aid_size_cell_vkb2_ParamLimits

0x7677,	// (0x0005a464) aid_size_cell_vkb2

0x76c3,	// (0x0005a4b0) popup_fep_vkb2_window_g1_ParamLimits

0x76c3,	// (0x0005a4b0) popup_fep_vkb2_window_g1

0x770b,	// (0x0005a4f8) vkb2_area_bottom_pane_ParamLimits

0x770b,	// (0x0005a4f8) vkb2_area_bottom_pane

0x775f,	// (0x0005a54c) vkb2_area_keypad_pane_ParamLimits

0x775f,	// (0x0005a54c) vkb2_area_keypad_pane

0x77a5,	// (0x0005a592) vkb2_area_top_pane_ParamLimits

0x77a5,	// (0x0005a592) vkb2_area_top_pane

0x7825,	// (0x0005a612) vkb2_top_entry_pane_ParamLimits

0x7825,	// (0x0005a612) vkb2_top_entry_pane

0x784f,	// (0x0005a63c) vkb2_top_grid_left_pane_ParamLimits

0x784f,	// (0x0005a63c) vkb2_top_grid_left_pane

0x786e,	// (0x0005a65b) vkb2_top_grid_right_pane_ParamLimits

0x786e,	// (0x0005a65b) vkb2_top_grid_right_pane

0x788d,	// (0x0005a67a) vkb2_cell_keypad_pane_ParamLimits

0x788d,	// (0x0005a67a) vkb2_cell_keypad_pane

0x795e,	// (0x0005a74b) vkb2_area_bottom_grid_pane_ParamLimits

0x795e,	// (0x0005a74b) vkb2_area_bottom_grid_pane

0x7984,	// (0x0005a771) vkb2_area_bottom_pane_g1_ParamLimits

0x7984,	// (0x0005a771) vkb2_area_bottom_pane_g1

0x79a8,	// (0x0005a795) vkb2_area_bottom_pane_g2_ParamLimits

0x79a8,	// (0x0005a795) vkb2_area_bottom_pane_g2

0x79d6,	// (0x0005a7c3) vkb2_area_bottom_pane_g3_ParamLimits

0x79d6,	// (0x0005a7c3) vkb2_area_bottom_pane_g3

0x0002,

0xfd7a,	// (0x00062b67) vkb2_area_bottom_pane_g_ParamLimits

0xfd7a,	// (0x00062b67) vkb2_area_bottom_pane_g

0x7a37,	// (0x0005a824) vkb2_top_cell_left_pane_ParamLimits

0x7a37,	// (0x0005a824) vkb2_top_cell_left_pane

0xd58c,	// (0x00060379) vkb2_top_entry_pane_g1_ParamLimits

0xd58c,	// (0x00060379) vkb2_top_entry_pane_g1

0xd59a,	// (0x00060387) vkb2_top_entry_pane_t1_ParamLimits

0xd59a,	// (0x00060387) vkb2_top_entry_pane_t1

0xd5cc,	// (0x000603b9) vkb2_top_entry_pane_t2_ParamLimits

0xd5cc,	// (0x000603b9) vkb2_top_entry_pane_t2

0xd61f,	// (0x0006040c) vkb2_top_entry_pane_t3_ParamLimits

0xd61f,	// (0x0006040c) vkb2_top_entry_pane_t3

0x0002,

0xfd81,	// (0x00062b6e) vkb2_top_entry_pane_t_ParamLimits

0xfd81,	// (0x00062b6e) vkb2_top_entry_pane_t

0x7a84,	// (0x0005a871) vkb2_top_grid_right_pane_g1_ParamLimits

0x7a84,	// (0x0005a871) vkb2_top_grid_right_pane_g1

0x7a9a,	// (0x0005a887) vkb2_top_grid_right_pane_g2_ParamLimits

0x7a9a,	// (0x0005a887) vkb2_top_grid_right_pane_g2

0x7ab2,	// (0x0005a89f) vkb2_top_grid_right_pane_g3_ParamLimits

0x7ab2,	// (0x0005a89f) vkb2_top_grid_right_pane_g3

0x7aca,	// (0x0005a8b7) vkb2_top_grid_right_pane_g4_ParamLimits

0x7aca,	// (0x0005a8b7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd88,	// (0x00062b75) vkb2_top_grid_right_pane_g_ParamLimits

0xfd88,	// (0x00062b75) vkb2_top_grid_right_pane_g

0x7ae0,	// (0x0005a8cd) vkb2_top_cell_left_pane_g1

0x7af7,	// (0x0005a8e4) vkb2_cell_keypad_pane_g1_ParamLimits

0x7af7,	// (0x0005a8e4) vkb2_cell_keypad_pane_g1

0xd643,	// (0x00060430) vkb2_cell_keypad_pane_t1_ParamLimits

0xd643,	// (0x00060430) vkb2_cell_keypad_pane_t1

0x7b05,	// (0x0005a8f2) vkb2_cell_bottom_grid_pane_ParamLimits

0x7b05,	// (0x0005a8f2) vkb2_cell_bottom_grid_pane

0x7b3e,	// (0x0005a92b) vkb2_cell_bottom_grid_pane_g1

0xd1d3,	// (0x0005ffc0) aid_call2_pane_cp02

0xd1db,	// (0x0005ffc8) aid_call_pane_cp02

0xd1e3,	// (0x0005ffd0) clock_digital_number_pane_cp10

0xd1eb,	// (0x0005ffd8) clock_digital_number_pane_cp11

0xd1f3,	// (0x0005ffe0) clock_digital_number_pane_cp12

0xd1fb,	// (0x0005ffe8) clock_digital_number_pane_cp13

0xd203,	// (0x0005fff0) clock_digital_separator_pane_cp10

0x31d2,	// (0x00055fbf) popup_clock_digital_analogue_window_cp2_g1

0x31d2,	// (0x00055fbf) popup_clock_digital_analogue_window_cp2_g2

0xd20b,	// (0x0005fff8) popup_clock_digital_analogue_window_cp2_g3

0x31d2,	// (0x00055fbf) popup_clock_digital_analogue_window_cp2_g4

0xd20b,	// (0x0005fff8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3d,	// (0x00062b2a) popup_clock_digital_analogue_window_cp2_g

0xd213,	// (0x00060000) popup_clock_digital_analogue_window_cp2_t1

0xd221,	// (0x0006000e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd48,	// (0x00062b35) popup_clock_digital_analogue_window_cp2_t

0xb69b,	// (0x0005e488) clock_digital_number_pane_cp10_g1

0xb69b,	// (0x0005e488) clock_digital_number_pane_cp10_g2

0x0001,

0xfb24,	// (0x00062911) clock_digital_number_pane_cp10_g

0xb69b,	// (0x0005e488) clock_digital_separator_pane_cp10_g1

0xb69b,	// (0x0005e488) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb24,	// (0x00062911) clock_digital_separator_pane_cp10_g

0xd04d,	// (0x0005fe3a) uniindi_top_pane_g3

0xd05e,	// (0x0005fe4b) uniindi_top_pane_g4

0x7918,	// (0x0005a705) vkb2_row_keypad_pane_ParamLimits

0x7918,	// (0x0005a705) vkb2_row_keypad_pane

0x7b5a,	// (0x0005a947) vkb2_cell_t_keypad_pane_ParamLimits

0x7b5a,	// (0x0005a947) vkb2_cell_t_keypad_pane

0x7b6a,	// (0x0005a957) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7b6a,	// (0x0005a957) vkb2_cell_t_keypad_pane_cp08

0x7b7f,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7b7f,	// (0x0005a96c) vkb2_cell_t_keypad_pane_cp09

0x7b93,	// (0x0005a980) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7b93,	// (0x0005a980) vkb2_cell_t_keypad_pane_cp01

0x7ba4,	// (0x0005a991) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7ba4,	// (0x0005a991) vkb2_cell_t_keypad_pane_cp02

0x7bb5,	// (0x0005a9a2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7bb5,	// (0x0005a9a2) vkb2_cell_t_keypad_pane_cp03

0x7bc6,	// (0x0005a9b3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7bc6,	// (0x0005a9b3) vkb2_cell_t_keypad_pane_cp04

0x7bd7,	// (0x0005a9c4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7bd7,	// (0x0005a9c4) vkb2_cell_t_keypad_pane_cp05

0x7be8,	// (0x0005a9d5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7be8,	// (0x0005a9d5) vkb2_cell_t_keypad_pane_cp06

0x7bfb,	// (0x0005a9e8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7bfb,	// (0x0005a9e8) vkb2_cell_t_keypad_pane_cp07

0x7c10,	// (0x0005a9fd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7c10,	// (0x0005a9fd) vkb2_cell_t_keypad_pane_cp10

0x72ab,	// (0x0005a098) vkb2_cell_t_keypad_pane_g1

0xd65a,	// (0x00060447) vkb2_cell_t_keypad_pane_t1

0x4ea5,	// (0x00057c92) popup_grid_graphic2_window

0xd66c,	// (0x00060459) aid_size_cell_graphic2_ParamLimits

0xd66c,	// (0x00060459) aid_size_cell_graphic2

0xd6a4,	// (0x00060491) bg_popup_window_pane_cp21_ParamLimits

0xd6a4,	// (0x00060491) bg_popup_window_pane_cp21

0xd6b2,	// (0x0006049f) graphic2_pages_pane_ParamLimits

0xd6b2,	// (0x0006049f) graphic2_pages_pane

0xd6f8,	// (0x000604e5) grid_graphic2_control_pane_ParamLimits

0xd6f8,	// (0x000604e5) grid_graphic2_control_pane

0xd736,	// (0x00060523) grid_graphic2_pane_ParamLimits

0xd736,	// (0x00060523) grid_graphic2_pane

0xd7ac,	// (0x00060599) cell_graphic2_pane

0x4ea5,	// (0x00057c92) main_comp_mode_pane

0xc8ba,	// (0x0005f6a7) list_ai3_gene_pane_ParamLimits

0xcc80,	// (0x0005fa6d) bg_popup_window_pane_cp19_ParamLimits

0xcc8c,	// (0x0005fa79) bg_touch_area_indi_pane_ParamLimits

0xcc8c,	// (0x0005fa79) bg_touch_area_indi_pane

0xcca2,	// (0x0005fa8f) bg_touch_area_indi_pane_cp01_ParamLimits

0xcca2,	// (0x0005fa8f) bg_touch_area_indi_pane_cp01

0xccb8,	// (0x0005faa5) bg_touch_area_indi_pane_cp02_ParamLimits

0xccb8,	// (0x0005faa5) bg_touch_area_indi_pane_cp02

0xccd2,	// (0x0005fabf) bg_touch_area_indi_pane_cp03_ParamLimits

0xccd2,	// (0x0005fabf) bg_touch_area_indi_pane_cp03

0xccec,	// (0x0005fad9) popup_slider_window_g1_ParamLimits

0xcd08,	// (0x0005faf5) popup_slider_window_g2_ParamLimits

0xcd24,	// (0x0005fb11) popup_slider_window_g3_ParamLimits

0xfcd2,	// (0x00062abf) popup_slider_window_g_ParamLimits

0xcd8a,	// (0x0005fb77) popup_slider_window_t1_ParamLimits

0xcdfe,	// (0x0005fbeb) small_volume_slider_vertical_pane_ParamLimits

0xd7ac,	// (0x00060599) cell_graphic2_pane_ParamLimits

0xd800,	// (0x000605ed) bg_button_pane_cp10_ParamLimits

0xd800,	// (0x000605ed) bg_button_pane_cp10

0xd815,	// (0x00060602) bg_button_pane_cp11_ParamLimits

0xd815,	// (0x00060602) bg_button_pane_cp11

0xd82a,	// (0x00060617) graphic2_pages_pane_g1_ParamLimits

0xd82a,	// (0x00060617) graphic2_pages_pane_g1

0xd845,	// (0x00060632) graphic2_pages_pane_g2_ParamLimits

0xd845,	// (0x00060632) graphic2_pages_pane_g2

0x0001,

0xfd96,	// (0x00062b83) graphic2_pages_pane_g_ParamLimits

0xfd96,	// (0x00062b83) graphic2_pages_pane_g

0xd85d,	// (0x0006064a) graphic2_pages_pane_t1_ParamLimits

0xd85d,	// (0x0006064a) graphic2_pages_pane_t1

0xd873,	// (0x00060660) cell_graphic2_control_pane_ParamLimits

0xd873,	// (0x00060660) cell_graphic2_control_pane

0xd893,	// (0x00060680) cell_graphic2_pane_g1_ParamLimits

0xd893,	// (0x00060680) cell_graphic2_pane_g1

0xd8a0,	// (0x0006068d) cell_graphic2_pane_g2_ParamLimits

0xd8a0,	// (0x0006068d) cell_graphic2_pane_g2

0xd8ad,	// (0x0006069a) cell_graphic2_pane_g3_ParamLimits

0xd8ad,	// (0x0006069a) cell_graphic2_pane_g3

0xd8ba,	// (0x000606a7) cell_graphic2_pane_g4_ParamLimits

0xd8ba,	// (0x000606a7) cell_graphic2_pane_g4

0xd8c7,	// (0x000606b4) cell_graphic2_pane_g5_ParamLimits

0xd8c7,	// (0x000606b4) cell_graphic2_pane_g5

0x0004,

0xfd9b,	// (0x00062b88) cell_graphic2_pane_g_ParamLimits

0xfd9b,	// (0x00062b88) cell_graphic2_pane_g

0xd8df,	// (0x000606cc) cell_graphic2_pane_t1_ParamLimits

0xd8df,	// (0x000606cc) cell_graphic2_pane_t1

0x8eed,	// (0x0005bcda) grid_highlight_pane_cp11_ParamLimits

0x8eed,	// (0x0005bcda) grid_highlight_pane_cp11

0xedae,	// (0x00061b9b) bg_button_pane_cp05

0xd915,	// (0x00060702) cell_graphic2_control_pane_g1

0xb69b,	// (0x0005e488) bg_touch_area_indi_pane_g1

0xd93d,	// (0x0006072a) aid_cmod_rocker_key_size

0xd947,	// (0x00060734) aid_cmode_itu_key_size

0xd951,	// (0x0006073e) main_cmode_video_pane

0xd95b,	// (0x00060748) main_comp_mode_itu_pane

0xd967,	// (0x00060754) main_comp_mode_rocker_pane

0xd973,	// (0x00060760) cell_cmode_rocker_pane_ParamLimits

0xd973,	// (0x00060760) cell_cmode_rocker_pane

0xd987,	// (0x00060774) cell_cmode_itu_pane_ParamLimits

0xd987,	// (0x00060774) cell_cmode_itu_pane

0xf2bd,	// (0x000620aa) bg_button_pane_cp06_ParamLimits

0xf2bd,	// (0x000620aa) bg_button_pane_cp06

0xb916,	// (0x0005e703) cell_cmode_rocker_pane_g1_ParamLimits

0xb916,	// (0x0005e703) cell_cmode_rocker_pane_g1

0xcea5,	// (0x0005fc92) cell_cmode_rocker_pane_g2_ParamLimits

0xcea5,	// (0x0005fc92) cell_cmode_rocker_pane_g2

0x0001,

0xfdab,	// (0x00062b98) cell_cmode_rocker_pane_g_ParamLimits

0xfdab,	// (0x00062b98) cell_cmode_rocker_pane_g

0xec0b,	// (0x000619f8) bg_button_pane_cp07

0xd99e,	// (0x0006078b) cell_cmode_itu_pane_g1

0xd9a7,	// (0x00060794) cell_cmode_itu_pane_t1

0xd9b5,	// (0x000607a2) cell_cmode_itu_pane_t2

0x0001,

0xfdb0,	// (0x00062b9d) cell_cmode_itu_pane_t

0xd0d2,	// (0x0005febf) aid_touch_ctrl_left

0xd0da,	// (0x0005fec7) aid_touch_ctrl_right

0xec0b,	// (0x000619f8) compa_mode_pane

0xd9c3,	// (0x000607b0) aid_cmod_rocker_key_size_cp

0xd9cd,	// (0x000607ba) aid_cmode_itu_key_size_cp

0xd9d7,	// (0x000607c4) compa_mode_pane_g1

0xd9df,	// (0x000607cc) compa_mode_pane_g2

0xd9e7,	// (0x000607d4) compa_mode_pane_g3

0x0002,

0xfdb5,	// (0x00062ba2) compa_mode_pane_g

0xd9ef,	// (0x000607dc) main_comp_mode_itu_pane_cp

0xd9f7,	// (0x000607e4) main_comp_mode_rocker_pane_cp

0xd9ff,	// (0x000607ec) cell_cmode_itu_pane_cp_ParamLimits

0xd9ff,	// (0x000607ec) cell_cmode_itu_pane_cp

0xda14,	// (0x00060801) cell_cmode_rocker_pane_cp_ParamLimits

0xda14,	// (0x00060801) cell_cmode_rocker_pane_cp

0xf2bd,	// (0x000620aa) bg_button_pane_cp06_cp_ParamLimits

0xf2bd,	// (0x000620aa) bg_button_pane_cp06_cp

0xb916,	// (0x0005e703) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb916,	// (0x0005e703) cell_cmode_rocker_pane_g1_cp

0xb69b,	// (0x0005e488) cell_cmode_rocker_pane_g2_cp

0xec0b,	// (0x000619f8) bg_button_pane_cp07_cp

0xda26,	// (0x00060813) cell_cmode_itu_pane_g1_cp

0xda2f,	// (0x0006081c) cell_cmode_itu_pane_t1_cp

0xda2f,	// (0x0006081c) cell_cmode_itu_pane_t2_cp

0xa5b2,	// (0x0005d39f) settings_code_pane_cp2

0xec6d,	// (0x00061a5a) bg_popup_window_pane_cp3_ParamLimits

0xefc2,	// (0x00061daf) heading_pane_cp3_ParamLimits

0xefd1,	// (0x00061dbe) listscroll_popup_graphic_pane_ParamLimits

0x703e,	// (0x00059e2b) fep_hwr_aid_pane_ParamLimits

0x75d0,	// (0x0005a3bd) aid_touch_sctrl_top_ParamLimits

0x75eb,	// (0x0005a3d8) sctrl_sk_top_pane_g1_ParamLimits

0x72ab,	// (0x0005a098) sctrl_sk_top_pane_g2_ParamLimits

0xfceb,	// (0x00062ad8) sctrl_sk_top_pane_g_ParamLimits

0x75f8,	// (0x0005a3e5) sctrl_sk_top_pane_t1_ParamLimits

0x75d0,	// (0x0005a3bd) aid_touch_sctrl_bottom_ParamLimits

0x75f8,	// (0x0005a3e5) sctrl_sk_bottom_pane_t1_ParamLimits

0xd017,	// (0x0005fe04) aid_area_touch_clock

0x77eb,	// (0x0005a5d8) aid_vkb2_area_top_pane_cell_ParamLimits

0x77eb,	// (0x0005a5d8) aid_vkb2_area_top_pane_cell

0x793a,	// (0x0005a727) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x793a,	// (0x0005a727) aid_vkb2_area_bottom_pane_cell

0xd584,	// (0x00060371) popup_char_count_window

0xda3d,	// (0x0006082a) popup_char_count_window_g1

0xda46,	// (0x00060833) popup_char_count_window_g2

0xda4f,	// (0x0006083c) popup_char_count_window_g3

0x0002,

0xfdbc,	// (0x00062ba9) popup_char_count_window_g

0xda58,	// (0x00060845) popup_char_count_window_t1

0x76a1,	// (0x0005a48e) popup_fep_char_preview_window_ParamLimits

0x76a1,	// (0x0005a48e) popup_fep_char_preview_window

0x7809,	// (0x0005a5f6) vkb2_top_candi_pane_ParamLimits

0x7809,	// (0x0005a5f6) vkb2_top_candi_pane

0xda66,	// (0x00060853) cell_vkb2_top_candi_pane_ParamLimits

0xda66,	// (0x00060853) cell_vkb2_top_candi_pane

0x7c25,	// (0x0005aa12) bg_popup_fep_char_preview_window_ParamLimits

0x7c25,	// (0x0005aa12) bg_popup_fep_char_preview_window

0x7c33,	// (0x0005aa20) popup_fep_char_preview_window_t1_ParamLimits

0x7c33,	// (0x0005aa20) popup_fep_char_preview_window_t1

0xdab4,	// (0x000608a1) bg_popup_fep_char_preview_window_g1

0xdabc,	// (0x000608a9) bg_popup_fep_char_preview_window_g2

0xdac4,	// (0x000608b1) bg_popup_fep_char_preview_window_g3

0xdacc,	// (0x000608b9) bg_popup_fep_char_preview_window_g4

0xdad4,	// (0x000608c1) bg_popup_fep_char_preview_window_g5

0xdadc,	// (0x000608c9) bg_popup_fep_char_preview_window_g6

0xdae4,	// (0x000608d1) bg_popup_fep_char_preview_window_g7

0xdaec,	// (0x000608d9) bg_popup_fep_char_preview_window_g8

0xdaf4,	// (0x000608e1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc3,	// (0x00062bb0) bg_popup_fep_char_preview_window_g

0x72ab,	// (0x0005a098) cell_vkb2_top_candi_pane_g1_ParamLimits

0x72ab,	// (0x0005a098) cell_vkb2_top_candi_pane_g1

0x72b9,	// (0x0005a0a6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x72b9,	// (0x0005a0a6) cell_vkb2_top_candi_pane_g2

0xd5fe,	// (0x000603eb) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd5fe,	// (0x000603eb) cell_vkb2_top_candi_pane_g3

0x7c75,	// (0x0005aa62) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7c75,	// (0x0005aa62) cell_vkb2_top_candi_pane_g4

0xbe35,	// (0x0005ec22) cell_vkb2_top_candi_pane_g5_ParamLimits

0xbe35,	// (0x0005ec22) cell_vkb2_top_candi_pane_g5

0x7c96,	// (0x0005aa83) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7c96,	// (0x0005aa83) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x00062bc5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x00062bc5) cell_vkb2_top_candi_pane_g

0x7ca4,	// (0x0005aa91) cell_vkb2_top_candi_pane_t1

0x6de8,	// (0x00059bd5) aid_size_touch_slider_mark_ParamLimits

0x6de8,	// (0x00059bd5) aid_size_touch_slider_mark

0xd6e8,	// (0x000604d5) grid_graphic2_catg_pane_ParamLimits

0xd6e8,	// (0x000604d5) grid_graphic2_catg_pane

0xd786,	// (0x00060573) popup_grid_graphic2_window_t1_ParamLimits

0xd786,	// (0x00060573) popup_grid_graphic2_window_t1

0xd798,	// (0x00060585) popup_grid_graphic2_window_t2_ParamLimits

0xd798,	// (0x00060585) popup_grid_graphic2_window_t2

0x0001,

0xfd91,	// (0x00062b7e) popup_grid_graphic2_window_t_ParamLimits

0xfd91,	// (0x00062b7e) popup_grid_graphic2_window_t

0xedae,	// (0x00061b9b) bg_button_pane_cp05_ParamLimits

0xd915,	// (0x00060702) cell_graphic2_control_pane_g1_ParamLimits

0xdafc,	// (0x000608e9) cell_graphic2_catg_pane_ParamLimits

0xdafc,	// (0x000608e9) cell_graphic2_catg_pane

0xec0b,	// (0x000619f8) bg_button_pane_cp12

0xdb0e,	// (0x000608fb) cell_graphic2_catg_pane_g1

0xcfe3,	// (0x0005fdd0) cell_tb_ext_pane_t1_ParamLimits

0x7a57,	// (0x0005a844) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7a57,	// (0x0005a844) vkb2_top_cell_right_narrow_pane

0x7a6f,	// (0x0005a85c) vkb2_top_cell_right_wide_pane_ParamLimits

0x7a6f,	// (0x0005a85c) vkb2_top_cell_right_wide_pane

0x7030,	// (0x00059e1d) bg_vkb2_func_pane_ParamLimits

0x7030,	// (0x00059e1d) bg_vkb2_func_pane

0x7ae0,	// (0x0005a8cd) vkb2_top_cell_left_pane_g1_ParamLimits

0x7030,	// (0x00059e1d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7030,	// (0x00059e1d) bg_vkb2_fuc_pane_cp03

0x7b3e,	// (0x0005a92b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e69,	// (0x0005bc56) bg_vkb2_func_pane_g1

0x8e71,	// (0x0005bc5e) bg_vkb2_func_pane_g2

0x8e81,	// (0x0005bc6e) bg_vkb2_func_pane_g3

0x8e79,	// (0x0005bc66) bg_vkb2_func_pane_g4

0x8e89,	// (0x0005bc76) bg_vkb2_func_pane_g5

0x8e91,	// (0x0005bc7e) bg_vkb2_func_pane_g6

0x8e99,	// (0x0005bc86) bg_vkb2_func_pane_g7

0x8ea1,	// (0x0005bc8e) bg_vkb2_func_pane_g8

0x8e61,	// (0x0005bc4e) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x00062bd2) bg_vkb2_func_pane_g

0x7030,	// (0x00059e1d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7030,	// (0x00059e1d) bg_vkb2_fuc_pane_cp01

0x7ae0,	// (0x0005a8cd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7ae0,	// (0x0005a8cd) vkb2_top_cell_right_wide_pane_g1

0x7030,	// (0x00059e1d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7030,	// (0x00059e1d) bg_vkb2_fuc_pane_cp02

0x7cc2,	// (0x0005aaaf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7cc2,	// (0x0005aaaf) vkb2_top_cell_right_narrow_pane_g1

0xcbfa,	// (0x0005f9e7) aid_touch_area_decrease_ParamLimits

0xcbfa,	// (0x0005f9e7) aid_touch_area_decrease

0xcc1e,	// (0x0005fa0b) aid_touch_area_increase_ParamLimits

0xcc1e,	// (0x0005fa0b) aid_touch_area_increase

0xcc36,	// (0x0005fa23) aid_touch_area_mute_ParamLimits

0xcc36,	// (0x0005fa23) aid_touch_area_mute

0xcc52,	// (0x0005fa3f) aid_touch_area_slider_ParamLimits

0xcc52,	// (0x0005fa3f) aid_touch_area_slider

0xcd40,	// (0x0005fb2d) popup_slider_window_g4_ParamLimits

0xcd40,	// (0x0005fb2d) popup_slider_window_g4

0xcd58,	// (0x0005fb45) popup_slider_window_g5_ParamLimits

0xcd58,	// (0x0005fb45) popup_slider_window_g5

0xcd7a,	// (0x0005fb67) popup_slider_window_g6_ParamLimits

0xcd7a,	// (0x0005fb67) popup_slider_window_g6

0xcdb8,	// (0x0005fba5) popup_slider_window_t2_ParamLimits

0xcdb8,	// (0x0005fba5) popup_slider_window_t2

0x0001,

0xfcdf,	// (0x00062acc) popup_slider_window_t_ParamLimits

0xfcdf,	// (0x00062acc) popup_slider_window_t

0xcdd0,	// (0x0005fbbd) slider_pane_ParamLimits

0xcdd0,	// (0x0005fbbd) slider_pane

0xdb17,	// (0x00060904) slider_pane_g1_ParamLimits

0xdb17,	// (0x00060904) slider_pane_g1

0xdb2b,	// (0x00060918) slider_pane_g2_ParamLimits

0xdb2b,	// (0x00060918) slider_pane_g2

0xdb41,	// (0x0006092e) slider_pane_g3_ParamLimits

0xdb41,	// (0x0006092e) slider_pane_g3

0x0003,

0xfdf8,	// (0x00062be5) slider_pane_g_ParamLimits

0xfdf8,	// (0x00062be5) slider_pane_g

0x6993,	// (0x00059780) popup_tb_float_extension_window_ParamLimits

0x6993,	// (0x00059780) popup_tb_float_extension_window

0xdb6d,	// (0x0006095a) aid_size_cell_tb_float_ext

0xec0b,	// (0x000619f8) bg_popup_sub_window_cp28

0xdb79,	// (0x00060966) grid_tb_float_ext_pane

0xdb85,	// (0x00060972) cell_tb_float_ext_pane_ParamLimits

0xdb85,	// (0x00060972) cell_tb_float_ext_pane

0xdba1,	// (0x0006098e) cell_tb_float_ext_pane_g1

0xdbaa,	// (0x00060997) grid_highlight_pane_cp12

0x7185,	// (0x00059f72) cell_last_hwr_side_pane_ParamLimits

0x7185,	// (0x00059f72) cell_last_hwr_side_pane

0xb69b,	// (0x0005e488) cell_last_hwr_side_pane_g1

0xdbb3,	// (0x000609a0) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x00062bee) cell_last_hwr_side_pane_g

0x7a06,	// (0x0005a7f3) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7a06,	// (0x0005a7f3) vkb2_area_bottom_space_btn_pane

0x72ab,	// (0x0005a098) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd65a,	// (0x00060447) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7ca4,	// (0x0005aa91) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7cde,	// (0x0005aacb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7cde,	// (0x0005aacb) vkb2_area_bottom_space_btn_pane_g1

0x7d18,	// (0x0005ab05) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7d18,	// (0x0005ab05) vkb2_area_bottom_space_btn_pane_g2

0x7d4e,	// (0x0005ab3b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d4e,	// (0x0005ab3b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x00062bf3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x00062bf3) vkb2_area_bottom_space_btn_pane_g

0x70f5,	// (0x00059ee2) cel_fep_hwr_func_pane_ParamLimits

0x70f5,	// (0x00059ee2) cel_fep_hwr_func_pane

0x7131,	// (0x00059f1e) cell_hwr_side_button_pane_ParamLimits

0x7131,	// (0x00059f1e) cell_hwr_side_button_pane

0xd017,	// (0x0005fe04) aid_area_touch_clock_ParamLimits

0xedae,	// (0x00061b9b) bg_uniindi_top_pane_ParamLimits

0xd02b,	// (0x0005fe18) uniindi_top_pane_g1_ParamLimits

0xd041,	// (0x0005fe2e) uniindi_top_pane_g2_ParamLimits

0xd04d,	// (0x0005fe3a) uniindi_top_pane_g3_ParamLimits

0xd05e,	// (0x0005fe4b) uniindi_top_pane_g4_ParamLimits

0xfd17,	// (0x00062b04) uniindi_top_pane_g_ParamLimits

0xd06b,	// (0x0005fe58) uniindi_top_pane_t1_ParamLimits

0xedae,	// (0x00061b9b) bg_vkb2_func_pane_cp01_ParamLimits

0xedae,	// (0x00061b9b) bg_vkb2_func_pane_cp01

0xdbbc,	// (0x000609a9) cel_fep_hwr_func_pane_g1_ParamLimits

0xdbbc,	// (0x000609a9) cel_fep_hwr_func_pane_g1

0xedae,	// (0x00061b9b) bg_vkb2_func_pane_cp02_ParamLimits

0xedae,	// (0x00061b9b) bg_vkb2_func_pane_cp02

0xdbbc,	// (0x000609a9) cell_hwr_side_button_pane_g1_ParamLimits

0xdbbc,	// (0x000609a9) cell_hwr_side_button_pane_g1

0x8ccc,	// (0x0005bab9) status_pane_g4_ParamLimits

0x8ccc,	// (0x0005bab9) status_pane_g4

0x8ce6,	// (0x0005bad3) status_pane_t1

0xb44e,	// (0x0005e23b) form2_midp_gauge_slider_cont_pane

0xb456,	// (0x0005e243) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb468,	// (0x0005e255) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb47a,	// (0x0005e267) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad7,	// (0x000628c4) form2_midp_gauge_slider_pane_t_ParamLimits

0xb48c,	// (0x0005e279) form2_midp_slider_pane_ParamLimits

0x7669,	// (0x0005a456) aid_size_cell_func_vkb2_ParamLimits

0x7669,	// (0x0005a456) aid_size_cell_func_vkb2

0xdb59,	// (0x00060946) slider_pane_g4_ParamLimits

0xdb59,	// (0x00060946) slider_pane_g4

0x7d98,	// (0x0005ab85) form2_midp_gauge_slider_pane_t2_cp01

0x7da6,	// (0x0005ab93) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7da6,	// (0x0005ab93) form2_midp_gauge_slider_pane_t3_cp01

0x7dc3,	// (0x0005abb0) form2_midp_slider_pane_cp01

0xec0b,	// (0x000619f8) navi_smil_pane

0xdbf5,	// (0x000609e2) navi_smil_pane_g1

0xdbfd,	// (0x000609ea) navi_smil_pane_t1

0xdbca,	// (0x000609b7) form2_midp_slider_pane_g1

0xdbd3,	// (0x000609c0) form2_midp_slider_pane_g2

0xdbdb,	// (0x000609c8) form2_midp_slider_pane_g3

0xdbca,	// (0x000609b7) form2_midp_slider_pane_g4

0xdbe3,	// (0x000609d0) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x00062bfc) form2_midp_slider_pane_g

0x7d88,	// (0x0005ab75) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7d88,	// (0x0005ab75) vkb2_area_bottom_space_btn_pane_g4

0x8aeb,	// (0x0005b8d8) lc0_navi_pane_ParamLimits

0x8aeb,	// (0x0005b8d8) lc0_navi_pane

0x8b67,	// (0x0005b954) lc0_stat_indi_pane_ParamLimits

0x8b67,	// (0x0005b954) lc0_stat_indi_pane

0x8b7e,	// (0x0005b96b) ls0_title_pane_ParamLimits

0x8b7e,	// (0x0005b96b) ls0_title_pane

0xf2bd,	// (0x000620aa) bg_popup_sub_pane_cp14_ParamLimits

0xcffe,	// (0x0005fdeb) list_uniindi_pane_ParamLimits

0xd00a,	// (0x0005fdf7) uniindi_top_pane_ParamLimits

0xd0aa,	// (0x0005fe97) list_single_uniindi_pane_g1_ParamLimits

0xd0bd,	// (0x0005feaa) list_single_uniindi_pane_t1_ParamLimits

0x7dcc,	// (0x0005abb9) lc0_stat_clock_pane_ParamLimits

0x7dcc,	// (0x0005abb9) lc0_stat_clock_pane

0xdc0b,	// (0x000609f8) lc0_stat_indi_pane_g1_ParamLimits

0xdc0b,	// (0x000609f8) lc0_stat_indi_pane_g1

0xdc18,	// (0x00060a05) lc0_stat_indi_pane_g2_ParamLimits

0xdc18,	// (0x00060a05) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x00062c07) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x00062c07) lc0_stat_indi_pane_g

0x7dd9,	// (0x0005abc6) lc0_uni_indicator_pane_ParamLimits

0x7dd9,	// (0x0005abc6) lc0_uni_indicator_pane

0xdc25,	// (0x00060a12) ls0_title_pane_g1_ParamLimits

0xdc25,	// (0x00060a12) ls0_title_pane_g1

0xdc39,	// (0x00060a26) ls0_title_pane_t1_ParamLimits

0xdc39,	// (0x00060a26) ls0_title_pane_t1

0x7de6,	// (0x0005abd3) lc0_uni_indicator_pane_g1_ParamLimits

0x7de6,	// (0x0005abd3) lc0_uni_indicator_pane_g1

0xdc6f,	// (0x00060a5c) lc0_stat_clock_pane_t1

0x4ea5,	// (0x00057c92) main_ai5_pane

0xdc7d,	// (0x00060a6a) ai5_sk_pane_ParamLimits

0xdc7d,	// (0x00060a6a) ai5_sk_pane

0xdc8a,	// (0x00060a77) cell_ai5_widget_pane_ParamLimits

0xdc8a,	// (0x00060a77) cell_ai5_widget_pane

0xdd29,	// (0x00060b16) aid_size_cell_widget_grid

0xdd37,	// (0x00060b24) bg_ai5_widget_pane_ParamLimits

0xdd37,	// (0x00060b24) bg_ai5_widget_pane

0xddb3,	// (0x00060ba0) cell_ai5_widget_pane_g2

0xddc7,	// (0x00060bb4) cell_ai5_widget_pane_g3

0xdde1,	// (0x00060bce) cell_ai5_widget_pane_g4

0xddf1,	// (0x00060bde) cell_ai5_widget_pane_g5

0xde01,	// (0x00060bee) cell_ai5_widget_pane_g6

0xde0d,	// (0x00060bfa) cell_ai5_widget_pane_g7

0xde79,	// (0x00060c66) cell_ai5_widget_pane_t1_ParamLimits

0xde79,	// (0x00060c66) cell_ai5_widget_pane_t1

0xde96,	// (0x00060c83) cell_ai5_widget_pane_t2_ParamLimits

0xde96,	// (0x00060c83) cell_ai5_widget_pane_t2

0xdeae,	// (0x00060c9b) cell_ai5_widget_pane_t3_ParamLimits

0xdeae,	// (0x00060c9b) cell_ai5_widget_pane_t3

0xdec6,	// (0x00060cb3) cell_ai5_widget_pane_t4_ParamLimits

0xdec6,	// (0x00060cb3) cell_ai5_widget_pane_t4

0xdeec,	// (0x00060cd9) cell_ai5_widget_pane_t5_ParamLimits

0xdeec,	// (0x00060cd9) cell_ai5_widget_pane_t5

0xdf0c,	// (0x00060cf9) cell_ai5_widget_pane_t6_ParamLimits

0xdf0c,	// (0x00060cf9) cell_ai5_widget_pane_t6

0xdf1e,	// (0x00060d0b) cell_ai5_widget_pane_t7_ParamLimits

0xdf1e,	// (0x00060d0b) cell_ai5_widget_pane_t7

0xdf3d,	// (0x00060d2a) cell_ai5_widget_pane_t8_ParamLimits

0xdf3d,	// (0x00060d2a) cell_ai5_widget_pane_t8

0x000b,

0xfe3a,	// (0x00062c27) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x00062c27) cell_ai5_widget_pane_t

0xdfc1,	// (0x00060dae) grid_ai5_widget_pane

0xf2bd,	// (0x000620aa) highlight_cell_ai5_widget_pane_ParamLimits

0xf2bd,	// (0x000620aa) highlight_cell_ai5_widget_pane

0xdfcf,	// (0x00060dbc) ai5_sk_left_pane

0xdfd9,	// (0x00060dc6) ai5_sk_middle_pane

0xdfe3,	// (0x00060dd0) ai5_sk_right_pane

0xdfed,	// (0x00060dda) bg_ai5_widget_pane_g1_ParamLimits

0xdfed,	// (0x00060dda) bg_ai5_widget_pane_g1

0xdff9,	// (0x00060de6) bg_ai5_widget_pane_g2_ParamLimits

0xdff9,	// (0x00060de6) bg_ai5_widget_pane_g2

0xe005,	// (0x00060df2) bg_ai5_widget_pane_g3_ParamLimits

0xe005,	// (0x00060df2) bg_ai5_widget_pane_g3

0xe011,	// (0x00060dfe) bg_ai5_widget_pane_g4_ParamLimits

0xe011,	// (0x00060dfe) bg_ai5_widget_pane_g4

0xe01d,	// (0x00060e0a) bg_ai5_widget_pane_g5_ParamLimits

0xe01d,	// (0x00060e0a) bg_ai5_widget_pane_g5

0xe029,	// (0x00060e16) bg_ai5_widget_pane_g6_ParamLimits

0xe029,	// (0x00060e16) bg_ai5_widget_pane_g6

0xe035,	// (0x00060e22) bg_ai5_widget_pane_g7_ParamLimits

0xe035,	// (0x00060e22) bg_ai5_widget_pane_g7

0xe041,	// (0x00060e2e) bg_ai5_widget_pane_g8_ParamLimits

0xe041,	// (0x00060e2e) bg_ai5_widget_pane_g8

0xe04d,	// (0x00060e3a) bg_ai5_widget_pane_g9_ParamLimits

0xe04d,	// (0x00060e3a) bg_ai5_widget_pane_g9

0x0008,

0xfe53,	// (0x00062c40) bg_ai5_widget_pane_g_ParamLimits

0xfe53,	// (0x00062c40) bg_ai5_widget_pane_g

0xe085,	// (0x00060e72) cell_shortcut_ai5_widget_pane_ParamLimits

0xe085,	// (0x00060e72) cell_shortcut_ai5_widget_pane

0x85ea,	// (0x0005b3d7) bg_cell_shortcut_ai5_widget_pane

0xe098,	// (0x00060e85) cell_grid_ai5_widget_pane_g1

0x85ea,	// (0x0005b3d7) highlight_cell_shortcut_ai5_widget_pane

0x8e69,	// (0x0005bc56) ai5_sk_left_pane_g1

0xe0a1,	// (0x00060e8e) ai5_sk_left_pane_g2

0xe0a9,	// (0x00060e96) ai5_sk_left_pane_g3

0xe0b1,	// (0x00060e9e) ai5_sk_left_pane_g4

0x0003,

0xfe66,	// (0x00062c53) ai5_sk_left_pane_g

0xe0b9,	// (0x00060ea6) ai5_sk_left_pane_t1

0x8e71,	// (0x0005bc5e) ai5_sk_right_pane_g1

0xe0c7,	// (0x00060eb4) ai5_sk_right_pane_g2

0xe0cf,	// (0x00060ebc) ai5_sk_right_pane_g3

0xe0d7,	// (0x00060ec4) ai5_sk_right_pane_g4

0x0003,

0xfe6f,	// (0x00062c5c) ai5_sk_right_pane_g

0xe0df,	// (0x00060ecc) ai5_sk_right_pane_t1

0x8e71,	// (0x0005bc5e) ai5_sk_middle_pane_g1

0x8e69,	// (0x0005bc56) ai5_sk_middle_pane_g2

0x8e89,	// (0x0005bc76) ai5_sk_middle_pane_g3

0xe0cf,	// (0x00060ebc) ai5_sk_middle_pane_g4

0xe0a9,	// (0x00060e96) ai5_sk_middle_pane_g5

0xe0ed,	// (0x00060eda) ai5_sk_middle_pane_g6

0xe0f5,	// (0x00060ee2) ai5_sk_middle_pane_g7

0x0006,

0xfe78,	// (0x00062c65) ai5_sk_middle_pane_g

0x8971,	// (0x0005b75e) aid_touch_area_size_lc0_ParamLimits

0x8971,	// (0x0005b75e) aid_touch_area_size_lc0

0x72da,	// (0x0005a0c7) cell_hwr_candidate_pane_t1_ParamLimits

0x898f,	// (0x0005b77c) aid_touch_navi_pane

0x8c7e,	// (0x0005ba6b) status_dt_navi_pane_ParamLimits

0x8c7e,	// (0x0005ba6b) status_dt_navi_pane

0x8c8b,	// (0x0005ba78) status_dt_sta_pane_ParamLimits

0x8c8b,	// (0x0005ba78) status_dt_sta_pane

0xe0fd,	// (0x00060eea) dt_sta_controll_pane

0xe10a,	// (0x00060ef7) dt_sta_indi_pane

0xe11b,	// (0x00060f08) dt_sta_title_pane

0xedae,	// (0x00061b9b) bg_dt_sta_indi_pane_ParamLimits

0xedae,	// (0x00061b9b) bg_dt_sta_indi_pane

0xe12e,	// (0x00060f1b) dt_sta_battery_pane

0xe136,	// (0x00060f23) dt_sta_indi_pane_g1

0xe13f,	// (0x00060f2c) dt_sta_indi_pane_g2

0xe148,	// (0x00060f35) dt_sta_indi_pane_g3

0x0002,

0xfe87,	// (0x00062c74) dt_sta_indi_pane_g

0xe151,	// (0x00060f3e) dt_sta_signal_pane

0xf2bd,	// (0x000620aa) bg_dt_sta_title_pane_ParamLimits

0xf2bd,	// (0x000620aa) bg_dt_sta_title_pane

0xe15a,	// (0x00060f47) dt_sta_title_pane_g1

0xe162,	// (0x00060f4f) dt_sta_title_pane_t1_ParamLimits

0xe162,	// (0x00060f4f) dt_sta_title_pane_t1

0xec0b,	// (0x000619f8) bg_dt_sta_control_pane

0xe177,	// (0x00060f64) dt_sta_controll_pane_g1

0xe180,	// (0x00060f6d) bg_dt_sta_title_pane_g1

0xe189,	// (0x00060f76) bg_dt_sta_title_pane_g2

0xe192,	// (0x00060f7f) bg_dt_sta_title_pane_g3

0x0002,

0xfe8e,	// (0x00062c7b) bg_dt_sta_title_pane_g

0xb69b,	// (0x0005e488) bg_dt_sta_indi_pane_g1

0xe19b,	// (0x00060f88) dt_sta_signal_pane_g1

0xe1a3,	// (0x00060f90) dt_sta_signal_pane_g2

0x0001,

0xfe95,	// (0x00062c82) dt_sta_signal_pane_g

0xe1ab,	// (0x00060f98) dt_sta_battery_pane_g1

0xe1b4,	// (0x00060fa1) dt_sta_battery_pane_t1

0xb69b,	// (0x0005e488) bg_dt_sta_control_pane_g1

0x3254,	// (0x00056041) fep_china_uni_eep_pane

0x325c,	// (0x00056049) fep_china_uni_entry_pane_ParamLimits

0x326c,	// (0x00056059) popup_fep_china_uni_window_g1_ParamLimits

0x327c,	// (0x00056069) popup_fep_china_uni_window_g2_ParamLimits

0x327c,	// (0x00056069) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x000624ea) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x000624ea) popup_fep_china_uni_window_g

0xe1c3,	// (0x00060fb0) fep_china_uni_eep_pane_g1

0xe1cb,	// (0x00060fb8) fep_china_uni_eep_pane_t1

0xdbec,	// (0x000609d9) aid_touch_area_size_smil_player

0x8ae3,	// (0x0005b8d0) lc0_clock_pane

0x8cda,	// (0x0005bac7) status_pane_g5_ParamLimits

0x8cda,	// (0x0005bac7) status_pane_g5

0x6618,	// (0x00059405) popup_keymap_window

0x8ca0,	// (0x0005ba8d) status_icon_pane

0xddc7,	// (0x00060bb4) cell_ai5_widget_pane_g3_ParamLimits

0xdde1,	// (0x00060bce) cell_ai5_widget_pane_g4_ParamLimits

0xddf1,	// (0x00060bde) cell_ai5_widget_pane_g5_ParamLimits

0xde19,	// (0x00060c06) cell_ai5_widget_pane_g8_ParamLimits

0xde19,	// (0x00060c06) cell_ai5_widget_pane_g8

0xde2d,	// (0x00060c1a) cell_ai5_widget_pane_g9_ParamLimits

0xde2d,	// (0x00060c1a) cell_ai5_widget_pane_g9

0xde41,	// (0x00060c2e) cell_ai5_widget_pane_g10_ParamLimits

0xde41,	// (0x00060c2e) cell_ai5_widget_pane_g10

0xe1da,	// (0x00060fc7) status_icon_pane_g1

0xec0b,	// (0x000619f8) bg_popup_sub_pane_cp13

0xe1e2,	// (0x00060fcf) popup_keymap_window_t1

0x88c2,	// (0x0005b6af) control_pane_g6_ParamLimits

0x88c2,	// (0x0005b6af) control_pane_g6

0x88cf,	// (0x0005b6bc) control_pane_g7_ParamLimits

0x88cf,	// (0x0005b6bc) control_pane_g7

0x88dc,	// (0x0005b6c9) control_pane_g8_ParamLimits

0x88dc,	// (0x0005b6c9) control_pane_g8

0xe0fd,	// (0x00060eea) dt_sta_controll_pane_ParamLimits

0xe10a,	// (0x00060ef7) dt_sta_indi_pane_ParamLimits

0xe11b,	// (0x00060f08) dt_sta_title_pane_ParamLimits

0xf1ff,	// (0x00061fec) aid_size_touch_scroll_bar_cale

0x4f82,	// (0x00057d6f) popup_discreet_window_ParamLimits

0x4f82,	// (0x00057d6f) popup_discreet_window

0x5010,	// (0x00057dfd) popup_sk_window

0x94df,	// (0x0005c2cc) bg_popup_sub_pane_cp28_ParamLimits

0x94df,	// (0x0005c2cc) bg_popup_sub_pane_cp28

0xe1f0,	// (0x00060fdd) popup_discreet_window_g1_ParamLimits

0xe1f0,	// (0x00060fdd) popup_discreet_window_g1

0xe210,	// (0x00060ffd) popup_discreet_window_t1_ParamLimits

0xe210,	// (0x00060ffd) popup_discreet_window_t1

0xe22e,	// (0x0006101b) popup_discreet_window_t2_ParamLimits

0xe22e,	// (0x0006101b) popup_discreet_window_t2

0x0002,

0xfe9a,	// (0x00062c87) popup_discreet_window_t_ParamLimits

0xfe9a,	// (0x00062c87) popup_discreet_window_t

0x7df9,	// (0x0005abe6) popup_sk_window_g1

0x7e03,	// (0x0005abf0) popup_sk_window_g2

0x0001,

0xfea1,	// (0x00062c8e) popup_sk_window_g

0x7e0b,	// (0x0005abf8) popup_sk_window_t1

0x7e19,	// (0x0005ac06) popup_sk_window_t1_copy1

0xddb3,	// (0x00060ba0) cell_ai5_widget_pane_g2_ParamLimits

0xdf4f,	// (0x00060d3c) cell_ai5_widget_pane_t9_ParamLimits

0xdf4f,	// (0x00060d3c) cell_ai5_widget_pane_t9

0xec0b,	// (0x000619f8) main_fep_fshwr2_pane

0x7e27,	// (0x0005ac14) aid_fshwr2_btn_pane

0x7e37,	// (0x0005ac24) aid_fshwr2_syb_pane

0x7e4b,	// (0x0005ac38) aid_fshwr2_txt_pane

0x7e5b,	// (0x0005ac48) fshwr2_func_candi_pane

0x7e7b,	// (0x0005ac68) fshwr2_hwr_syb_pane

0x7e91,	// (0x0005ac7e) fshwr2_icf_pane

0x4ea5,	// (0x00057c92) fshwr2_icf_bg_pane

0x7ec5,	// (0x0005acb2) fshwr2_icf_pane_t1_ParamLimits

0x7ec5,	// (0x0005acb2) fshwr2_icf_pane_t1

0x31d2,	// (0x00055fbf) fshwr2_func_candi_pane_g1

0xe280,	// (0x0006106d) fshwr2_func_candi_row_pane_ParamLimits

0xe280,	// (0x0006106d) fshwr2_func_candi_row_pane

0x7edd,	// (0x0005acca) cell_fshwr2_syb_pane_ParamLimits

0x7edd,	// (0x0005acca) cell_fshwr2_syb_pane

0x7efe,	// (0x0005aceb) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7efe,	// (0x0005aceb) fshwr2_hwr_syb_pane_g1

0x4ea5,	// (0x00057c92) bg_popup_call_pane_cp01

0x7f0c,	// (0x0005acf9) fshwr2_func_candi_cell_pane_ParamLimits

0x7f0c,	// (0x0005acf9) fshwr2_func_candi_cell_pane

0x9b56,	// (0x0005c943) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9b56,	// (0x0005c943) fshwr2_func_candi_cell_bg_pane

0x7f5d,	// (0x0005ad4a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7f5d,	// (0x0005ad4a) fshwr2_func_candi_cell_pane_g1

0x7f88,	// (0x0005ad75) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7f88,	// (0x0005ad75) fshwr2_func_candi_cell_pane_t1

0x4ea5,	// (0x00057c92) bg_button_pane_cp08

0x8911,	// (0x0005b6fe) cell_fshwr2_syb_bg_pane

0x7f9b,	// (0x0005ad88) cell_fshwr2_syb_bg_pane_g1

0x7faf,	// (0x0005ad9c) cell_fshwr2_syb_bg_pane_t1

0xf2bd,	// (0x000620aa) main_tmo_pane

0xa1f1,	// (0x0005cfde) uni_indicator_pane_g1_ParamLimits

0xa207,	// (0x0005cff4) uni_indicator_pane_g2_ParamLimits

0xa21d,	// (0x0005d00a) uni_indicator_pane_g3_ParamLimits

0xa230,	// (0x0005d01d) uni_indicator_pane_g4_ParamLimits

0xa230,	// (0x0005d01d) uni_indicator_pane_g4

0xa244,	// (0x0005d031) uni_indicator_pane_g5_ParamLimits

0xa244,	// (0x0005d031) uni_indicator_pane_g5

0xa244,	// (0x0005d031) uni_indicator_pane_g6_ParamLimits

0xa244,	// (0x0005d031) uni_indicator_pane_g6

0xf901,	// (0x000626ee) uni_indicator_pane_g_ParamLimits

0xcbca,	// (0x0005f9b7) popup_tmo_note_window_ParamLimits

0xcbca,	// (0x0005f9b7) popup_tmo_note_window

0x764b,	// (0x0005a438) fshwr2_bg_pane

0x7f79,	// (0x0005ad66) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7f79,	// (0x0005ad66) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea6,	// (0x00062c93) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea6,	// (0x00062c93) fshwr2_func_candi_cell_pane_g

0x7293,	// (0x0005a080) bg_popup_window_pane_cp01

0x7fc5,	// (0x0005adb2) bg_popup_window_pane_g1_cp01

0xe2a3,	// (0x00061090) bg_popup_window_pane_cp22_ParamLimits

0xe2a3,	// (0x00061090) bg_popup_window_pane_cp22

0xe2b1,	// (0x0006109e) listscroll_tmo_link_pane_ParamLimits

0xe2b1,	// (0x0006109e) listscroll_tmo_link_pane

0xe2f1,	// (0x000610de) popup_tmo_note_window_g1_ParamLimits

0xe2f1,	// (0x000610de) popup_tmo_note_window_g1

0xe2fe,	// (0x000610eb) tmo_note_info_pane_ParamLimits

0xe2fe,	// (0x000610eb) tmo_note_info_pane

0xe318,	// (0x00061105) list_tmo_note_info_pane_g1_ParamLimits

0xe318,	// (0x00061105) list_tmo_note_info_pane_g1

0xe32f,	// (0x0006111c) list_tmo_note_info_pane_g2_ParamLimits

0xe32f,	// (0x0006111c) list_tmo_note_info_pane_g2

0x0001,

0xfeab,	// (0x00062c98) list_tmo_note_info_pane_g_ParamLimits

0xfeab,	// (0x00062c98) list_tmo_note_info_pane_g

0xe34b,	// (0x00061138) list_tmo_note_info_text_pane_ParamLimits

0xe34b,	// (0x00061138) list_tmo_note_info_text_pane

0xe3d0,	// (0x000611bd) list_tmo_link_pane

0xe3dd,	// (0x000611ca) scroll_pane_cp20

0xe3ea,	// (0x000611d7) list_single_tmo_link_pane_ParamLimits

0xe3ea,	// (0x000611d7) list_single_tmo_link_pane

0xe3fa,	// (0x000611e7) list_single_tmo_link_pane_t1

0xe408,	// (0x000611f5) list_tmo_note_info_text_pane_t1_ParamLimits

0xe408,	// (0x000611f5) list_tmo_note_info_text_pane_t1

0x5b23,	// (0x00058910) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5b23,	// (0x00058910) aid_size_touch_scroll_bar_cp01

0x5a60,	// (0x0005884d) aid_size_touch_slider_marker

0x4ff8,	// (0x00057de5) popup_settings_window_ParamLimits

0x4ff8,	// (0x00057de5) popup_settings_window

0x3aee,	// (0x000568db) popup_candi_list_indi_window

0x898f,	// (0x0005b77c) aid_touch_navi_pane_ParamLimits

0x75a4,	// (0x0005a391) rs_clock_indi_pane

0x75ad,	// (0x0005a39a) sctrl_sk_bottom_pane_ParamLimits

0x75be,	// (0x0005a3ab) sctrl_sk_top_pane_ParamLimits

0x76bb,	// (0x0005a4a8) popup_fep_tooltip_window

0xdd29,	// (0x00060b16) aid_size_cell_widget_grid_ParamLimits

0xdd9e,	// (0x00060b8b) cell_ai5_widget_pane_g1_ParamLimits

0xdd9e,	// (0x00060b8b) cell_ai5_widget_pane_g1

0xde01,	// (0x00060bee) cell_ai5_widget_pane_g6_ParamLimits

0xde0d,	// (0x00060bfa) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1f,	// (0x00062c0c) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x00062c0c) cell_ai5_widget_pane_g

0xdf7e,	// (0x00060d6b) cell_ai5_widget_pane_t10_ParamLimits

0xdf7e,	// (0x00060d6b) cell_ai5_widget_pane_t10

0xdfc1,	// (0x00060dae) grid_ai5_widget_pane_ParamLimits

0xe059,	// (0x00060e46) cell_contacts_ai5_widget_pane_ParamLimits

0xe059,	// (0x00060e46) cell_contacts_ai5_widget_pane

0xe243,	// (0x00061030) popup_discreet_window_t3_ParamLimits

0xe243,	// (0x00061030) popup_discreet_window_t3

0x7ead,	// (0x0005ac9a) popup_fshwr2_char_preview_window_ParamLimits

0x7ead,	// (0x0005ac9a) popup_fshwr2_char_preview_window

0xe369,	// (0x00061156) tmo_note_info_pane_t1

0xe37e,	// (0x0006116b) tmo_note_info_pane_t2

0xe397,	// (0x00061184) tmo_note_info_pane_t3

0xe3ac,	// (0x00061199) tmo_note_info_pane_t4

0xe3be,	// (0x000611ab) tmo_note_info_pane_t5

0x0004,

0xfeb0,	// (0x00062c9d) tmo_note_info_pane_t

0xe3d0,	// (0x000611bd) list_tmo_link_pane_ParamLimits

0xe3dd,	// (0x000611ca) scroll_pane_cp20_ParamLimits

0x4ea5,	// (0x00057c92) bg_popup_fep_char_preview_window_cp01

0xe421,	// (0x0006120e) popup_fshwr2_char_preview_window_t1

0xe42f,	// (0x0006121c) popup_candi_list_indi_window_g1

0xe438,	// (0x00061225) bg_cell_contacts_ai5_widget_pane

0xe444,	// (0x00061231) cell_contacts_ai5_widget_pane_g1

0xe459,	// (0x00061246) cell_contacts_ai5_widget_pane_g2

0xe465,	// (0x00061252) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebb,	// (0x00062ca8) cell_contacts_ai5_widget_pane_g

0xe471,	// (0x0006125e) cell_contacts_ai5_widget_pane_t1

0xf2bd,	// (0x000620aa) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe4e8,	// (0x000612d5) settings_container_pane

0x85ea,	// (0x0005b3d7) listscroll_set_pane_copy1

0xadcc,	// (0x0005dbb9) scroll_pane_cp121_copy1

0xe4f4,	// (0x000612e1) set_content_pane_copy1

0xe4fc,	// (0x000612e9) aid_height_set_list_copy1_ParamLimits

0xe4fc,	// (0x000612e9) aid_height_set_list_copy1

0xa444,	// (0x0005d231) aid_size_parent_copy1_ParamLimits

0xa444,	// (0x0005d231) aid_size_parent_copy1

0xe508,	// (0x000612f5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe508,	// (0x000612f5) button_value_adjust_pane_cp6_copy1

0x8911,	// (0x0005b6fe) list_highlight_pane_cp2_copy1_ParamLimits

0x8911,	// (0x0005b6fe) list_highlight_pane_cp2_copy1

0xe51c,	// (0x00061309) list_set_pane_copy1_ParamLimits

0xe51c,	// (0x00061309) list_set_pane_copy1

0xe483,	// (0x00061270) main_pane_set_t1_copy1_ParamLimits

0xe483,	// (0x00061270) main_pane_set_t1_copy1

0xe4bd,	// (0x000612aa) main_pane_set_t2_copy1_ParamLimits

0xe4bd,	// (0x000612aa) main_pane_set_t2_copy1

0xe5dd,	// (0x000613ca) main_pane_set_t3_copy1

0xe5eb,	// (0x000613d8) main_pane_set_t4_copy1

0xe4dc,	// (0x000612c9) set_content_pane_g1_copy1_ParamLimits

0xe4dc,	// (0x000612c9) set_content_pane_g1_copy1

0xe5f9,	// (0x000613e6) setting_code_pane_copy1

0xe601,	// (0x000613ee) setting_slider_graphic_pane_copy1

0xe601,	// (0x000613ee) setting_slider_pane_copy1

0xe609,	// (0x000613f6) setting_text_pane_copy1

0xe609,	// (0x000613f6) setting_volume_pane_copy1

0xe5f9,	// (0x000613e6) settings_code_pane_cp2_copy1

0xe611,	// (0x000613fe) settings_code_pane_cp_copy1_ParamLimits

0xe611,	// (0x000613fe) settings_code_pane_cp_copy1

0x7fce,	// (0x0005adbb) volume_set_pane_copy1

0xe625,	// (0x00061412) volume_set_pane_g10_copy1

0xe631,	// (0x0006141e) volume_set_pane_g1_copy1

0xe63b,	// (0x00061428) volume_set_pane_g2_copy1

0xe645,	// (0x00061432) volume_set_pane_g3_copy1

0xe64f,	// (0x0006143c) volume_set_pane_g4_copy1

0xe659,	// (0x00061446) volume_set_pane_g5_copy1

0xe663,	// (0x00061450) volume_set_pane_g6_copy1

0xe66d,	// (0x0006145a) volume_set_pane_g7_copy1

0xe677,	// (0x00061464) volume_set_pane_g8_copy1

0xe681,	// (0x0006146e) volume_set_pane_g9_copy1

0xec6d,	// (0x00061a5a) bg_set_opt_pane_cp_copy1_ParamLimits

0xec6d,	// (0x00061a5a) bg_set_opt_pane_cp_copy1

0x7fda,	// (0x0005adc7) setting_slider_pane_t1_copy1_ParamLimits

0x7fda,	// (0x0005adc7) setting_slider_pane_t1_copy1

0x7ff9,	// (0x0005ade6) setting_slider_pane_t2_copy1_ParamLimits

0x7ff9,	// (0x0005ade6) setting_slider_pane_t2_copy1

0x8013,	// (0x0005ae00) setting_slider_pane_t3_copy1_ParamLimits

0x8013,	// (0x0005ae00) setting_slider_pane_t3_copy1

0x802b,	// (0x0005ae18) slider_set_pane_copy1_ParamLimits

0x802b,	// (0x0005ae18) slider_set_pane_copy1

0xf315,	// (0x00062102) set_opt_bg_pane_g1_copy2

0xf31d,	// (0x0006210a) set_opt_bg_pane_g2_copy2

0xe68d,	// (0x0006147a) set_opt_bg_pane_g3_copy2

0xf32d,	// (0x0006211a) set_opt_bg_pane_g4_copy2

0xf335,	// (0x00062122) set_opt_bg_pane_g5_copy2

0xf33d,	// (0x0006212a) set_opt_bg_pane_g6_copy2

0xe697,	// (0x00061484) set_opt_bg_pane_g7_copy2

0xe6a1,	// (0x0006148e) set_opt_bg_pane_g8_copy2

0xe6ab,	// (0x00061498) set_opt_bg_pane_g9_copy2

0x8041,	// (0x0005ae2e) aid_size_touch_slider_mark_copy1_ParamLimits

0x8041,	// (0x0005ae2e) aid_size_touch_slider_mark_copy1

0xe6b5,	// (0x000614a2) slider_set_pane_g1_copy1

0x8055,	// (0x0005ae42) slider_set_pane_g2_copy1

0x6e08,	// (0x00059bf5) slider_set_pane_g3_copy1_ParamLimits

0x6e08,	// (0x00059bf5) slider_set_pane_g3_copy1

0x6e1c,	// (0x00059c09) slider_set_pane_g4_copy1_ParamLimits

0x6e1c,	// (0x00059c09) slider_set_pane_g4_copy1

0x6e34,	// (0x00059c21) slider_set_pane_g5_copy1_ParamLimits

0x6e34,	// (0x00059c21) slider_set_pane_g5_copy1

0x6e08,	// (0x00059bf5) slider_set_pane_g6_copy1_ParamLimits

0x6e08,	// (0x00059bf5) slider_set_pane_g6_copy1

0x805d,	// (0x0005ae4a) slider_set_pane_g7_copy1_ParamLimits

0x805d,	// (0x0005ae4a) slider_set_pane_g7_copy1

0xec1f,	// (0x00061a0c) bg_set_opt_pane_cp2_copy1

0xe6be,	// (0x000614ab) setting_slider_graphic_pane_g1_copy1

0xe6c7,	// (0x000614b4) setting_slider_graphic_pane_t1_copy1

0xe6d7,	// (0x000614c4) setting_slider_graphic_pane_t2_copy1

0xe6e7,	// (0x000614d4) slider_set_pane_cp_copy1

0xe6f7,	// (0x000614e4) input_focus_pane_cp1_copy1

0xe700,	// (0x000614ed) list_set_text_pane_copy1

0xe708,	// (0x000614f5) setting_text_pane_g1_copy1

0x300c,	// (0x00055df9) set_text_pane_t1_copy1

0xe6f7,	// (0x000614e4) input_focus_pane_cp2_copy1

0xe708,	// (0x000614f5) setting_code_pane_g1_copy1

0xe711,	// (0x000614fe) setting_code_pane_t1_copy1

0xabd1,	// (0x0005d9be) list_set_graphic_pane_copy1

0xec1f,	// (0x00061a0c) bg_set_opt_pane_cp4_copy1

0x82e5,	// (0x0005b0d2) list_set_graphic_pane_g1_copy1_ParamLimits

0x82e5,	// (0x0005b0d2) list_set_graphic_pane_g1_copy1

0xe71f,	// (0x0006150c) list_set_graphic_pane_g2_copy1

0x82fd,	// (0x0005b0ea) list_set_graphic_pane_t1_copy1_ParamLimits

0x82fd,	// (0x0005b0ea) list_set_graphic_pane_t1_copy1

0xb69b,	// (0x0005e488) rs_clock_indi_pane_g1

0xe727,	// (0x00061514) rs_clock_indi_pane_t1

0xe735,	// (0x00061522) rs_indi_pane

0xe73d,	// (0x0006152a) rs_indi_pane_g1

0xe746,	// (0x00061533) rs_indi_pane_g2

0xe42f,	// (0x0006121c) rs_indi_pane_g3

0x0002,

0xfec2,	// (0x00062caf) rs_indi_pane_g

0x85ea,	// (0x0005b3d7) bg_popup_preview_window_pane_cp03

0xe74f,	// (0x0006153c) popup_fep_tooltip_window_t1

0xc378,	// (0x0005f165) popup_note2_window_g2_ParamLimits

0xc378,	// (0x0005f165) popup_note2_window_g2

0x0001,

0xfc4f,	// (0x00062a3c) popup_note2_window_g_ParamLimits

0xfc4f,	// (0x00062a3c) popup_note2_window_g

0xc880,	// (0x0005f66d) bg_popup_sub_pane_cp11_ParamLimits

0xc88d,	// (0x0005f67a) cell_ai3_links_pane_g1_ParamLimits

0xc8a4,	// (0x0005f691) cell_ai3_links_pane_t1

0x300c,	// (0x00055df9) set_text_pane_t1_copy1_ParamLimits

0x84ec,	// (0x0005b2d9) cell_graphic_popup_pane_cp2_ParamLimits

0x84ec,	// (0x0005b2d9) cell_graphic_popup_pane_cp2

0xe75d,	// (0x0006154a) cell_graphic_popup_pane_g1_cp2

0xf012,	// (0x00061dff) cell_graphic_popup_pane_g2_cp2

0xe765,	// (0x00061552) cell_graphic_popup_pane_g3_cp2

0xe76d,	// (0x0006155a) cell_graphic_popup_pane_t2_cp2

0xf023,	// (0x00061e10) grid_highlight_pane_cp3_cp2

0x1300,	// (0x000540ed) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf2bd,	// (0x000620aa) main_tmo_pane_ParamLimits

0xcbbe,	// (0x0005f9ab) popup_tmo_big_image_note_window

0xdd8d,	// (0x00060b7a) cell_ai5_widget_list_pane

0xdd95,	// (0x00060b82) cell_ai5_widget_lrg_icon_pane

0xe369,	// (0x00061156) tmo_note_info_pane_t1_ParamLimits

0xe37e,	// (0x0006116b) tmo_note_info_pane_t2_ParamLimits

0xe397,	// (0x00061184) tmo_note_info_pane_t3_ParamLimits

0xe3ac,	// (0x00061199) tmo_note_info_pane_t4_ParamLimits

0xe3be,	// (0x000611ab) tmo_note_info_pane_t5_ParamLimits

0xfeb0,	// (0x00062c9d) tmo_note_info_pane_t_ParamLimits

0xe4e8,	// (0x000612d5) settings_container_pane_ParamLimits

0xe6ef,	// (0x000614dc) indicator_popup_pane_cp5

0xe6ef,	// (0x000614dc) indicator_popup_pane_cp6

0xabd1,	// (0x0005d9be) list_set_graphic_pane_copy1_ParamLimits

0xec0b,	// (0x000619f8) bg_popup_window_pane_cp23

0xe77b,	// (0x00061568) popup_tmo_big_image_note_window_g1

0xe787,	// (0x00061574) popup_tmo_big_image_note_window_t1

0xe797,	// (0x00061584) popup_tmo_big_image_note_window_t2

0xe7a7,	// (0x00061594) popup_tmo_big_image_note_window_t3

0x0002,

0xfec9,	// (0x00062cb6) popup_tmo_big_image_note_window_t

0xb69b,	// (0x0005e488) cell_ai5_widget_lrg_icon_pane_g1

0xe7b7,	// (0x000615a4) cell_ai5_widget_lrg_icon_pane_t1

0xe7c5,	// (0x000615b2) cell_ai5_widget_list_row_pane_ParamLimits

0xe7c5,	// (0x000615b2) cell_ai5_widget_list_row_pane

0xe7dd,	// (0x000615ca) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe7dd,	// (0x000615ca) cell_ai5_widget_list_row_pane_g1

0xe7ea,	// (0x000615d7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe7ea,	// (0x000615d7) cell_ai5_widget_list_row_pane_t1

0xe815,	// (0x00061602) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe815,	// (0x00061602) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed0,	// (0x00062cbd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed0,	// (0x00062cbd) cell_ai5_widget_list_row_pane_t

0x4ea5,	// (0x00057c92) main_fep_vtchi_ss_pane

0xe865,	// (0x00061652) popup_fep_char_pre_window

0xe86d,	// (0x0006165a) popup_fep_ituss_window

0xe899,	// (0x00061686) popup_fep_vkbss_window

0x8911,	// (0x0005b6fe) grid_vkbss_keypad_pane_ParamLimits

0x8911,	// (0x0005b6fe) grid_vkbss_keypad_pane

0xe8db,	// (0x000616c8) ituss_keypad_pane

0x807d,	// (0x0005ae6a) aid_vkbss_key_offset_ParamLimits

0x807d,	// (0x0005ae6a) aid_vkbss_key_offset

0x8089,	// (0x0005ae76) cell_vkbss_key_pane_ParamLimits

0x8089,	// (0x0005ae76) cell_vkbss_key_pane

0xe8e7,	// (0x000616d4) bg_cell_vkbss_key_g1_ParamLimits

0xe8e7,	// (0x000616d4) bg_cell_vkbss_key_g1

0xe8f3,	// (0x000616e0) cell_vkbss_key_3p_pane_ParamLimits

0xe8f3,	// (0x000616e0) cell_vkbss_key_3p_pane

0xe929,	// (0x00061716) cell_vkbss_key_g1_ParamLimits

0xe929,	// (0x00061716) cell_vkbss_key_g1

0xe95f,	// (0x0006174c) cell_vkbss_key_t1_ParamLimits

0xe95f,	// (0x0006174c) cell_vkbss_key_t1

0x80eb,	// (0x0005aed8) cell_ituss_key_pane_ParamLimits

0x80eb,	// (0x0005aed8) cell_ituss_key_pane

0xe9bb,	// (0x000617a8) bg_cell_ituss_key_g1_ParamLimits

0xe9bb,	// (0x000617a8) bg_cell_ituss_key_g1

0xe9c7,	// (0x000617b4) cell_ituss_key_pane_g1_ParamLimits

0xe9c7,	// (0x000617b4) cell_ituss_key_pane_g1

0x80fc,	// (0x0005aee9) cell_ituss_key_pane_g2_ParamLimits

0x80fc,	// (0x0005aee9) cell_ituss_key_pane_g2

0x0005,

0xfed7,	// (0x00062cc4) cell_ituss_key_pane_g_ParamLimits

0xfed7,	// (0x00062cc4) cell_ituss_key_pane_g

0x8180,	// (0x0005af6d) cell_ituss_key_t1_ParamLimits

0x8180,	// (0x0005af6d) cell_ituss_key_t1

0x81ba,	// (0x0005afa7) cell_ituss_key_t2_ParamLimits

0x81ba,	// (0x0005afa7) cell_ituss_key_t2

0x81ec,	// (0x0005afd9) cell_ituss_key_t3_ParamLimits

0x81ec,	// (0x0005afd9) cell_ituss_key_t3

0x821d,	// (0x0005b00a) cell_ituss_key_t4_ParamLimits

0x821d,	// (0x0005b00a) cell_ituss_key_t4

0x0004,

0xfee4,	// (0x00062cd1) cell_ituss_key_t_ParamLimits

0xfee4,	// (0x00062cd1) cell_ituss_key_t

0xe9ed,	// (0x000617da) cell_vkbss_key_3p_pane_g1

0xe9f5,	// (0x000617e2) cell_vkbss_key_3p_pane_g2

0xe9fd,	// (0x000617ea) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeef,	// (0x00062cdc) cell_vkbss_key_3p_pane_g

0x85ea,	// (0x0005b3d7) bg_popup_fep_char_preview_window_cp02

0xea05,	// (0x000617f2) popup_fep_char_pre_window_t1

0xdd16,	// (0x00060b03) main_ai5_sk_pane

0xe438,	// (0x00061225) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe444,	// (0x00061231) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xe459,	// (0x00061246) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe465,	// (0x00061252) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebb,	// (0x00062ca8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe471,	// (0x0006125e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf2bd,	// (0x000620aa) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xea13,	// (0x00061800) main_ai5_sk_pane_g1

0x9317,	// (0x0005c104) popup_query_code_window_g1

0xe883,	// (0x00061670) popup_fep_vkb_icf_pane

0xe8b2,	// (0x0006169f) popup_fep_vtchi_icf_pane

0xea1c,	// (0x00061809) bg_icf_pane

0xea1c,	// (0x00061809) list_vkb_icf_pane

0xea28,	// (0x00061815) bg_icf_pane_cp01

0xea3b,	// (0x00061828) vtchi_icf_list_pane

0xea9b,	// (0x00061888) list_vkb_icf_pane_t1_ParamLimits

0xea9b,	// (0x00061888) list_vkb_icf_pane_t1

0xeab4,	// (0x000618a1) vtchi_icf_list_pane_t1_ParamLimits

0xeab4,	// (0x000618a1) vtchi_icf_list_pane_t1

0xe86d,	// (0x0006165a) popup_fep_ituss_window_ParamLimits

0xe8b2,	// (0x0006169f) popup_fep_vtchi_icf_pane_ParamLimits

0xe8db,	// (0x000616c8) ituss_keypad_pane_ParamLimits

0x8073,	// (0x0005ae60) ituss_sks_pane

0xea1c,	// (0x00061809) bg_icf_pane_ParamLimits

0xe83d,	// (0x0006162a) icf_edit_indi_pane_ParamLimits

0xe83d,	// (0x0006162a) icf_edit_indi_pane

0xea1c,	// (0x00061809) list_vkb_icf_pane_ParamLimits

0xea28,	// (0x00061815) bg_icf_pane_cp01_ParamLimits

0xe858,	// (0x00061645) icf_edit_indi_pane_cp01_ParamLimits

0xe858,	// (0x00061645) icf_edit_indi_pane_cp01

0xea3b,	// (0x00061828) vtchi_query_pane

0xdbbc,	// (0x000609a9) icf_edit_indi_pane_g1_ParamLimits

0xdbbc,	// (0x000609a9) icf_edit_indi_pane_g1

0xeb24,	// (0x00061911) icf_edit_indi_pane_g2_ParamLimits

0xeb24,	// (0x00061911) icf_edit_indi_pane_g2

0x0001,

0xff1a,	// (0x00062d07) icf_edit_indi_pane_g_ParamLimits

0xff1a,	// (0x00062d07) icf_edit_indi_pane_g

0xeb38,	// (0x00061925) icf_edit_indi_pane_t1

0xeacd,	// (0x000618ba) bg_input_focus_pane_cp042

0xf1f6,	// (0x00061fe3) vtchi_button_pane

0xead6,	// (0x000618c3) vtchi_query_pane_t1

0xeae4,	// (0x000618d1) vtchi_query_pane_t2

0xeaf2,	// (0x000618df) vtchi_query_pane_t3

0x0002,

0xff09,	// (0x00062cf6) vtchi_query_pane_t

0x4ea5,	// (0x00057c92) bg_button_pane_cp13

0xeb00,	// (0x000618ed) vtchi_button_pane_g1

0x8260,	// (0x0005b04d) ituss_sks_pane_g1

0x826b,	// (0x0005b058) ituss_sks_pane_g2

0x0001,

0xff10,	// (0x00062cfd) ituss_sks_pane_g

0xeb08,	// (0x000618f5) ituss_sks_pane_t1

0xeb16,	// (0x00061903) ituss_sks_pane_t2

0x0001,

0xff15,	// (0x00062d02) ituss_sks_pane_t

0xb16f,	// (0x0005df5c) indicator_nsta_pane_cp_g1

0xb178,	// (0x0005df65) indicator_nsta_pane_cp_g2

0xb180,	// (0x0005df6d) indicator_nsta_pane_cp_g3

0xb188,	// (0x0005df75) indicator_nsta_pane_cp_g4

0xb178,	// (0x0005df65) indicator_nsta_pane_cp_g5

0xb180,	// (0x0005df6d) indicator_nsta_pane_cp_g6

0x0005,

0xfa8d,	// (0x0006287a) indicator_nsta_pane_cp_g

0xd903,	// (0x000606f0) cell_graphic2_pane_t2_ParamLimits

0xd903,	// (0x000606f0) cell_graphic2_pane_t2

0x0001,

0xfda6,	// (0x00062b93) cell_graphic2_pane_t_ParamLimits

0xfda6,	// (0x00062b93) cell_graphic2_pane_t

0xd92f,	// (0x0006071c) cell_graphic2_control_pane_t1

0x5fa8,	// (0x00058d95) signal_pane_g3_ParamLimits

0x5fa8,	// (0x00058d95) signal_pane_g3

0x5fb7,	// (0x00058da4) signal_pane_g4_ParamLimits

0x5fb7,	// (0x00058da4) signal_pane_g4

0xe827,	// (0x00061614) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe827,	// (0x00061614) cell_ai5_widget_list_row_pane_t3

0xe9db,	// (0x000617c8) cell_ituss_key_pane_t1_ParamLimits

0xe9db,	// (0x000617c8) cell_ituss_key_pane_t1

0x8f7e,	// (0x0005bd6b) form_field_data_wide_pane_vc_t2_ParamLimits

0x8f7e,	// (0x0005bd6b) form_field_data_wide_pane_vc_t2

0x8f92,	// (0x0005bd7f) form_field_data_wide_pane_vc_t3_ParamLimits

0x8f92,	// (0x0005bd7f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e9,	// (0x000625d6) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e9,	// (0x000625d6) form_field_data_wide_pane_vc_t

0xae0c,	// (0x0005dbf9) form_field_slider_wide_pane_vc_t3_ParamLimits

0xae0c,	// (0x0005dbf9) form_field_slider_wide_pane_vc_t3

0xaee2,	// (0x0005dccf) form_field_popup_wide_pane_vc_t2_ParamLimits

0xaee2,	// (0x0005dccf) form_field_popup_wide_pane_vc_t2

0xaef9,	// (0x0005dce6) form_field_popup_wide_pane_vc_t3_ParamLimits

0xaef9,	// (0x0005dce6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7c,	// (0x00062869) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7c,	// (0x00062869) form_field_popup_wide_pane_vc_t

0x7e27,	// (0x0005ac14) aid_fshwr2_btn_pane_ParamLimits

0x7e37,	// (0x0005ac24) aid_fshwr2_syb_pane_ParamLimits

0x7e4b,	// (0x0005ac38) aid_fshwr2_txt_pane_ParamLimits

0x764b,	// (0x0005a438) fshwr2_bg_pane_ParamLimits

0x7e5b,	// (0x0005ac48) fshwr2_func_candi_pane_ParamLimits

0x7e7b,	// (0x0005ac68) fshwr2_hwr_syb_pane_ParamLimits

0x7e91,	// (0x0005ac7e) fshwr2_icf_pane_ParamLimits

0x9d34,	// (0x0005cb21) list_double_graphic_pane_vc_g4_ParamLimits

0x9d34,	// (0x0005cb21) list_double_graphic_pane_vc_g4

0x811c,	// (0x0005af09) cell_ituss_key_pane_g3_ParamLimits

0x811c,	// (0x0005af09) cell_ituss_key_pane_g3

0x824e,	// (0x0005b03b) cell_ituss_key_t5_ParamLimits

0x824e,	// (0x0005b03b) cell_ituss_key_t5

0xe899,	// (0x00061686) popup_fep_vkbss_window_ParamLimits

0xdd20,	// (0x00060b0d) aid_cell_ai5_quarter

0xeb38,	// (0x00061925) icf_edit_indi_pane_t1_ParamLimits

0xee56,	// (0x00061c43) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xee56,	// (0x00061c43) aid_tch_indicator_popup_pane_cp2

0xee69,	// (0x00061c56) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xee69,	// (0x00061c56) aid_tch_query_popup_data_pane_cp2

0x92bf,	// (0x0005c0ac) aid_tch_query_popup_pane_ParamLimits

0x92bf,	// (0x0005c0ac) aid_tch_query_popup_pane

0x92bf,	// (0x0005c0ac) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x92bf,	// (0x0005c0ac) aid_tch_query_popup_data_pane_cp1

0x8911,	// (0x0005b6fe) cell_fshwr2_syb_bg_pane_ParamLimits

0x7f9b,	// (0x0005ad88) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7faf,	// (0x0005ad9c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe883,	// (0x00061670) popup_fep_vkb_icf_pane_ParamLimits

0x7c6d,	// (0x0005aa5a) bg_popup_fep_char_preview_window_g10

0xde55,	// (0x00060c42) cell_ai5_widget_pane_g11_ParamLimits

0xde55,	// (0x00060c42) cell_ai5_widget_pane_g11

0xde61,	// (0x00060c4e) cell_ai5_widget_pane_g12_ParamLimits

0xde61,	// (0x00060c4e) cell_ai5_widget_pane_g12

0xde6d,	// (0x00060c5a) cell_ai5_widget_pane_g13_ParamLimits

0xde6d,	// (0x00060c5a) cell_ai5_widget_pane_g13

0xdf9d,	// (0x00060d8a) cell_ai5_widget_pane_t11_ParamLimits

0xdf9d,	// (0x00060d8a) cell_ai5_widget_pane_t11

0xdfaf,	// (0x00060d9c) cell_ai5_widget_pane_t12_ParamLimits

0xdfaf,	// (0x00060d9c) cell_ai5_widget_pane_t12

0x8128,	// (0x0005af15) cell_ituss_key_pane_g4_ParamLimits

0x8128,	// (0x0005af15) cell_ituss_key_pane_g4

0x8144,	// (0x0005af31) cell_ituss_key_pane_g5_ParamLimits

0x8144,	// (0x0005af31) cell_ituss_key_pane_g5

0x8160,	// (0x0005af4d) cell_ituss_key_pane_g6_ParamLimits

0x8160,	// (0x0005af4d) cell_ituss_key_pane_g6

0x8e61,	// (0x0005bc4e) bg_icf_pane_g1

0xea43,	// (0x00061830) bg_icf_pane_g2

0xea4f,	// (0x0006183c) bg_icf_pane_g3

0xea59,	// (0x00061846) bg_icf_pane_g4

0xea65,	// (0x00061852) bg_icf_pane_g5

0xea6f,	// (0x0006185c) bg_icf_pane_g6

0xea7b,	// (0x00061868) bg_icf_pane_g7

0xea85,	// (0x00061872) bg_icf_pane_g8

0xea91,	// (0x0006187e) bg_icf_pane_g9

0x0008,

0xfef6,	// (0x00062ce3) bg_icf_pane_g

0xe8c8,	// (0x000616b5) popup_hyb_candi_window_ParamLimits

0xe8c8,	// (0x000616b5) popup_hyb_candi_window

0x8eed,	// (0x0005bcda) bg_popup_sub_pane_cp01_ParamLimits

0x8eed,	// (0x0005bcda) bg_popup_sub_pane_cp01

0xeb51,	// (0x0006193e) entry_hyb_candi_pane_ParamLimits

0xeb51,	// (0x0006193e) entry_hyb_candi_pane

0xeb60,	// (0x0006194d) grid_hyb_candi_pane_ParamLimits

0xeb60,	// (0x0006194d) grid_hyb_candi_pane

0xeb75,	// (0x00061962) grid_hyb_phrase_pane_ParamLimits

0xeb75,	// (0x00061962) grid_hyb_phrase_pane

0xeb84,	// (0x00061971) cell_hyb_candi_pane_ParamLimits

0xeb84,	// (0x00061971) cell_hyb_candi_pane

0xf1ff,	// (0x00061fec) cell_hyb_candi_scroll_pane

0x31d2,	// (0x00055fbf) cell_hyb_candi_pane_g1

0xeba0,	// (0x0006198d) cell_hyb_candi_pane_t1

0xebae,	// (0x0006199b) cell_hyb_phrase_pane

0x31d2,	// (0x00055fbf) cell_hyb_phrase_pane_g1

0xebb7,	// (0x000619a4) cell_hyb_phrase_pane_t1

0xebc5,	// (0x000619b2) entry_hyb_candi_pane_t1

0x85ea,	// (0x0005b3d7) input_focus_pane_cp06

0xebd3,	// (0x000619c0) cell_hyb_candi_scroll_pane_g1

0xebdb,	// (0x000619c8) cell_hyb_candi_scroll_pane_g1_aid

0xebe3,	// (0x000619d0) cell_hyb_candi_scroll_pane_g2

0xebeb,	// (0x000619d8) cell_hyb_candi_scroll_pane_g2_aid

0xebf3,	// (0x000619e0) cell_hyb_candi_scroll_pane_g3

0xebfb,	// (0x000619e8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Large

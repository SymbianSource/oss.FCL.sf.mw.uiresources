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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ae59 };

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
0x6dc3,	// (0x00011c1c) Screen

0x6dd7,	// (0x00011c30) application_window_ParamLimits

0x6dd7,	// (0x00011c30) application_window

0x6df1,	// (0x00011c4a) screen_g1

0x4908,	// (0x0000f761) area_bottom_pane_ParamLimits

0x4908,	// (0x0000f761) area_bottom_pane

0x49c8,	// (0x0000f821) area_top_pane_ParamLimits

0x49c8,	// (0x0000f821) area_top_pane

0x4a66,	// (0x0000f8bf) main_pane_ParamLimits

0x4a66,	// (0x0000f8bf) main_pane

0x6dfb,	// (0x00011c54) misc_graphics

0x8f62,	// (0x00013dbb) battery_pane_ParamLimits

0x8f62,	// (0x00013dbb) battery_pane

0x9d4e,	// (0x00014ba7) bg_status_flat_pane_g8

0x9d56,	// (0x00014baf) bg_status_flat_pane_g9

0x9024,	// (0x00013e7d) context_pane_ParamLimits

0x9024,	// (0x00013e7d) context_pane

0x913a,	// (0x00013f93) navi_pane_ParamLimits

0x913a,	// (0x00013f93) navi_pane

0x91be,	// (0x00014017) signal_pane_ParamLimits

0x91be,	// (0x00014017) signal_pane

0x0008,

0xf874,	// (0x0001a6cd) bg_status_flat_pane_g

0x922b,	// (0x00014084) status_pane_g1_ParamLimits

0x922b,	// (0x00014084) status_pane_g1

0x923f,	// (0x00014098) status_pane_g2_ParamLimits

0x923f,	// (0x00014098) status_pane_g2

0x924b,	// (0x000140a4) status_pane_g3_ParamLimits

0x924b,	// (0x000140a4) status_pane_g3

0x0004,

0xf79b,	// (0x0001a5f4) status_pane_g_ParamLimits

0xf79b,	// (0x0001a5f4) status_pane_g

0x927f,	// (0x000140d8) title_pane_ParamLimits

0x927f,	// (0x000140d8) title_pane

0x92bc,	// (0x00014115) uni_indicator_pane_ParamLimits

0x92bc,	// (0x00014115) uni_indicator_pane

0x8e76,	// (0x00013ccf) bg_list_pane_ParamLimits

0x8e76,	// (0x00013ccf) bg_list_pane

0x8e96,	// (0x00013cef) find_pane

0x8e9e,	// (0x00013cf7) listscroll_app_pane_ParamLimits

0x8e9e,	// (0x00013cf7) listscroll_app_pane

0x8eaa,	// (0x00013d03) listscroll_form_pane

0x5339,	// (0x00010192) listscroll_gen_pane_ParamLimits

0x5339,	// (0x00010192) listscroll_gen_pane

0x534d,	// (0x000101a6) listscroll_set_pane

0x803d,	// (0x00012e96) main_idle_act_pane

0x8b7e,	// (0x000139d7) main_idle_trad_pane

0x8b7e,	// (0x000139d7) main_list_empty_pane

0x8ec4,	// (0x00013d1d) main_midp_pane

0x8ed0,	// (0x00013d29) main_pane_g1_ParamLimits

0x8ed0,	// (0x00013d29) main_pane_g1

0x5363,	// (0x000101bc) popup_ai_message_window_ParamLimits

0x5363,	// (0x000101bc) popup_ai_message_window

0x5409,	// (0x00010262) popup_fep_china_uni_window_ParamLimits

0x5409,	// (0x00010262) popup_fep_china_uni_window

0x5465,	// (0x000102be) popup_fep_japan_candidate_window_ParamLimits

0x5465,	// (0x000102be) popup_fep_japan_candidate_window

0x5485,	// (0x000102de) popup_fep_japan_predictive_window_ParamLimits

0x5485,	// (0x000102de) popup_fep_japan_predictive_window

0x54b5,	// (0x0001030e) popup_find_window

0x54c2,	// (0x0001031b) popup_grid_graphic_window_ParamLimits

0x54c2,	// (0x0001031b) popup_grid_graphic_window

0x54ec,	// (0x00010345) popup_large_graphic_colour_window

0x5512,	// (0x0001036b) popup_menu_window_ParamLimits

0x5512,	// (0x0001036b) popup_menu_window

0x56ca,	// (0x00010523) popup_note_image_window

0x56b6,	// (0x0001050f) popup_note_wait_window_ParamLimits

0x56b6,	// (0x0001050f) popup_note_wait_window

0x56b6,	// (0x0001050f) popup_note_window_ParamLimits

0x56b6,	// (0x0001050f) popup_note_window

0x5720,	// (0x00010579) popup_query_code_window_ParamLimits

0x5720,	// (0x00010579) popup_query_code_window

0x5734,	// (0x0001058d) popup_query_data_code_window_ParamLimits

0x5734,	// (0x0001058d) popup_query_data_code_window

0x5751,	// (0x000105aa) popup_query_data_window_ParamLimits

0x5751,	// (0x000105aa) popup_query_data_window

0x576d,	// (0x000105c6) popup_query_sat_info_window_ParamLimits

0x576d,	// (0x000105c6) popup_query_sat_info_window

0x57a6,	// (0x000105ff) popup_snote_single_graphic_window_ParamLimits

0x57a6,	// (0x000105ff) popup_snote_single_graphic_window

0x57a6,	// (0x000105ff) popup_snote_single_text_window_ParamLimits

0x57a6,	// (0x000105ff) popup_snote_single_text_window

0x57bb,	// (0x00010614) popup_sub_window_general

0x58eb,	// (0x00010744) popup_window_general_ParamLimits

0x58eb,	// (0x00010744) popup_window_general

0x8ee6,	// (0x00013d3f) power_save_pane

0x51cd,	// (0x00010026) control_pane_g1_ParamLimits

0x51cd,	// (0x00010026) control_pane_g1

0x51f4,	// (0x0001004d) control_pane_g2_ParamLimits

0x51f4,	// (0x0001004d) control_pane_g2

0x8e39,	// (0x00013c92) control_pane_g3_ParamLimits

0x8e39,	// (0x00013c92) control_pane_g3

0x0007,

0xf783,	// (0x0001a5dc) control_pane_g_ParamLimits

0xf783,	// (0x0001a5dc) control_pane_g

0x523e,	// (0x00010097) control_pane_t1_ParamLimits

0x523e,	// (0x00010097) control_pane_t1

0x528a,	// (0x000100e3) control_pane_t2_ParamLimits

0x528a,	// (0x000100e3) control_pane_t2

0x0002,

0xf794,	// (0x0001a5ed) control_pane_t_ParamLimits

0xf794,	// (0x0001a5ed) control_pane_t

0x8d5e,	// (0x00013bb7) navi_navi_volume_pane_cp1

0x8d66,	// (0x00013bbf) status_small_icon_pane

0x8d6e,	// (0x00013bc7) status_small_pane_g1_ParamLimits

0x8d6e,	// (0x00013bc7) status_small_pane_g1

0x8da2,	// (0x00013bfb) status_small_pane_g2_ParamLimits

0x8da2,	// (0x00013bfb) status_small_pane_g2

0x8dae,	// (0x00013c07) status_small_pane_g3_ParamLimits

0x8dae,	// (0x00013c07) status_small_pane_g3

0x8dba,	// (0x00013c13) status_small_pane_g4_ParamLimits

0x8dba,	// (0x00013c13) status_small_pane_g4

0x8dc6,	// (0x00013c1f) status_small_pane_g5_ParamLimits

0x8dc6,	// (0x00013c1f) status_small_pane_g5

0x8dd4,	// (0x00013c2d) status_small_pane_g6_ParamLimits

0x8dd4,	// (0x00013c2d) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a5cb) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a5cb) status_small_pane_g

0x8e03,	// (0x00013c5c) status_small_pane_t1

0x8e25,	// (0x00013c7e) status_small_wait_pane_ParamLimits

0x8e25,	// (0x00013c7e) status_small_wait_pane

0x8561,	// (0x000133ba) aid_levels_signal_ParamLimits

0x8561,	// (0x000133ba) aid_levels_signal

0x8573,	// (0x000133cc) signal_pane_g1_ParamLimits

0x8573,	// (0x000133cc) signal_pane_g1

0x8588,	// (0x000133e1) signal_pane_g2_ParamLimits

0x8588,	// (0x000133e1) signal_pane_g2

0x0003,

0xf703,	// (0x0001a55c) signal_pane_g_ParamLimits

0xf703,	// (0x0001a55c) signal_pane_g

0x85c3,	// (0x0001341c) context_pane_g1

0x6e05,	// (0x00011c5e) title_pane_g1

0x6e3b,	// (0x00011c94) title_pane_t1

0x6ea3,	// (0x00011cfc) title_pane_t2

0x6ec9,	// (0x00011d22) title_pane_t3

0x0002,

0xf557,	// (0x0001a3b0) title_pane_t

0x92d4,	// (0x0001412d) aid_levels_battery_ParamLimits

0x92d4,	// (0x0001412d) aid_levels_battery

0x92e8,	// (0x00014141) battery_pane_g1_ParamLimits

0x92e8,	// (0x00014141) battery_pane_g1

0x92fe,	// (0x00014157) battery_pane_g2_ParamLimits

0x92fe,	// (0x00014157) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a5ff) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a5ff) battery_pane_g

0xa690,	// (0x000154e9) uni_indicator_pane_g1

0xa6a6,	// (0x000154ff) uni_indicator_pane_g2

0xa6bc,	// (0x00015515) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001a775) uni_indicator_pane_g

0x89f0,	// (0x00013849) navi_icon_pane_ParamLimits

0x89f0,	// (0x00013849) navi_icon_pane

0x892e,	// (0x00013787) navi_midp_pane

0x8a0c,	// (0x00013865) navi_navi_pane

0x8a16,	// (0x0001386f) navi_text_pane_ParamLimits

0x8a16,	// (0x0001386f) navi_text_pane

0x6df1,	// (0x00011c4a) status_small_wait_pane_g1

0x7312,	// (0x0001216b) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001a770) status_small_wait_pane_g

0xa3b5,	// (0x0001520e) navi_navi_icon_text_pane

0xa3bd,	// (0x00015216) navi_navi_pane_g1_ParamLimits

0xa3bd,	// (0x00015216) navi_navi_pane_g1

0xa3cf,	// (0x00015228) navi_navi_pane_g2_ParamLimits

0xa3cf,	// (0x00015228) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001a73e) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001a73e) navi_navi_pane_g

0xa3e1,	// (0x0001523a) navi_navi_tabs_pane

0xa3ea,	// (0x00015243) navi_navi_text_pane

0xa3b5,	// (0x0001520e) navi_navi_volume_pane

0xa391,	// (0x000151ea) navi_text_pane_t1

0xa385,	// (0x000151de) navi_icon_pane_g1

0xa2d8,	// (0x00015131) navi_navi_text_pane_t1

0x5c03,	// (0x00010a5c) navi_navi_volume_pane_g1

0x5c0b,	// (0x00010a64) volume_small_pane

0xa23e,	// (0x00015097) navi_navi_icon_text_pane_g1

0xa246,	// (0x0001509f) navi_navi_icon_text_pane_t1

0x8a0c,	// (0x00013865) navi_tabs_2_long_pane

0x8a0c,	// (0x00013865) navi_tabs_2_pane

0x8a0c,	// (0x00013865) navi_tabs_3_long_pane

0x8a0c,	// (0x00013865) navi_tabs_3_pane

0x8a0c,	// (0x00013865) navi_tabs_4_pane

0x5be3,	// (0x00010a3c) tabs_2_active_pane_ParamLimits

0x5be3,	// (0x00010a3c) tabs_2_active_pane

0x5bf3,	// (0x00010a4c) tabs_2_passive_pane_ParamLimits

0x5bf3,	// (0x00010a4c) tabs_2_passive_pane

0x5bb1,	// (0x00010a0a) tabs_3_active_pane_ParamLimits

0x5bb1,	// (0x00010a0a) tabs_3_active_pane

0x5bc1,	// (0x00010a1a) tabs_3_passive_pane_ParamLimits

0x5bc1,	// (0x00010a1a) tabs_3_passive_pane

0x5bd2,	// (0x00010a2b) tabs_3_passive_pane_cp_ParamLimits

0x5bd2,	// (0x00010a2b) tabs_3_passive_pane_cp

0x5b6d,	// (0x000109c6) tabs_4_active_pane_ParamLimits

0x5b6d,	// (0x000109c6) tabs_4_active_pane

0x5b7e,	// (0x000109d7) tabs_4_passive_pane_ParamLimits

0x5b7e,	// (0x000109d7) tabs_4_passive_pane

0x5b8f,	// (0x000109e8) tabs_4_passive_pane_cp_ParamLimits

0x5b8f,	// (0x000109e8) tabs_4_passive_pane_cp

0x5ba0,	// (0x000109f9) tabs_4_passive_pane_cp2_ParamLimits

0x5ba0,	// (0x000109f9) tabs_4_passive_pane_cp2

0x5b49,	// (0x000109a2) tabs_2_long_active_pane_ParamLimits

0x5b49,	// (0x000109a2) tabs_2_long_active_pane

0x5b5b,	// (0x000109b4) tabs_2_long_passive_pane_ParamLimits

0x5b5b,	// (0x000109b4) tabs_2_long_passive_pane

0x5b0a,	// (0x00010963) tabs_3_long_active_pane_ParamLimits

0x5b0a,	// (0x00010963) tabs_3_long_active_pane

0x5b1d,	// (0x00010976) tabs_3_long_passive_pane_ParamLimits

0x5b1d,	// (0x00010976) tabs_3_long_passive_pane

0x5b36,	// (0x0001098f) tabs_3_long_passive_pane_cp_ParamLimits

0x5b36,	// (0x0001098f) tabs_3_long_passive_pane_cp

0x5ab0,	// (0x00010909) volume_small_pane_g1

0x5ab9,	// (0x00010912) volume_small_pane_g2

0x5ac2,	// (0x0001091b) volume_small_pane_g3

0x5acb,	// (0x00010924) volume_small_pane_g4

0x5ad4,	// (0x0001092d) volume_small_pane_g5

0x5add,	// (0x00010936) volume_small_pane_g6

0x5ae6,	// (0x0001093f) volume_small_pane_g7

0x5aef,	// (0x00010948) volume_small_pane_g8

0x5af8,	// (0x00010951) volume_small_pane_g9

0x5b01,	// (0x0001095a) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001a70a) volume_small_pane_g

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp2_ParamLimits

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp2

0x6ee9,	// (0x00011d42) tabs_3_active_pane_g1

0x6ef1,	// (0x00011d4a) tabs_3_active_pane_t1

0x6edb,	// (0x00011d34) bg_passive_tab_pane_cp2_ParamLimits

0x6edb,	// (0x00011d34) bg_passive_tab_pane_cp2

0x6ee9,	// (0x00011d42) tabs_3_passive_pane_g1

0x6ef1,	// (0x00011d4a) tabs_3_passive_pane_t1

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp3_ParamLimits

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp3

0x6f03,	// (0x00011d5c) tabs_4_active_pane_g1

0x6f0b,	// (0x00011d64) tabs_4_active_pane_t1

0x6edb,	// (0x00011d34) bg_passive_tab_pane_cp3_ParamLimits

0x6edb,	// (0x00011d34) bg_passive_tab_pane_cp3

0x6f03,	// (0x00011d5c) tabs_4_1_passive_pane_g1

0x6f0b,	// (0x00011d64) tabs_4_1_passive_pane_t1

0x8ec4,	// (0x00013d1d) list_highlight_pane_cp2

0xa92c,	// (0x00015785) list_set_pane_ParamLimits

0xa92c,	// (0x00015785) list_set_pane

0xa9d2,	// (0x0001582b) main_pane_set_t1_ParamLimits

0xa9d2,	// (0x0001582b) main_pane_set_t1

0xa9f2,	// (0x0001584b) main_pane_set_t2_ParamLimits

0xa9f2,	// (0x0001584b) main_pane_set_t2

0xaa06,	// (0x0001585f) main_pane_set_t3_ParamLimits

0xaa06,	// (0x0001585f) main_pane_set_t3

0xaa18,	// (0x00015871) main_pane_set_t4_ParamLimits

0xaa18,	// (0x00015871) main_pane_set_t4

0x0003,

0xf981,	// (0x0001a7da) main_pane_set_t_ParamLimits

0xf981,	// (0x0001a7da) main_pane_set_t

0xaa2a,	// (0x00015883) setting_code_pane

0xaa36,	// (0x0001588f) setting_slider_graphic_pane

0xaa36,	// (0x0001588f) setting_slider_pane

0xaa36,	// (0x0001588f) setting_text_pane

0xaa36,	// (0x0001588f) setting_volume_pane

0x4cb5,	// (0x0000fb0e) volume_set_pane

0x6edb,	// (0x00011d34) bg_set_opt_pane_cp

0x4cbd,	// (0x0000fb16) setting_slider_pane_t1

0x4cd6,	// (0x0000fb2f) setting_slider_pane_t2

0x4cf0,	// (0x0000fb49) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a3b7) setting_slider_pane_t

0x4d08,	// (0x0000fb61) slider_set_pane

0x6dfb,	// (0x00011c54) bg_set_opt_pane_cp2

0x6f1d,	// (0x00011d76) setting_slider_graphic_pane_g1

0x4d1e,	// (0x0000fb77) setting_slider_graphic_pane_t1

0x4d2e,	// (0x0000fb87) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a3be) setting_slider_graphic_pane_t

0x4d3e,	// (0x0000fb97) slider_set_pane_cp

0x6dfb,	// (0x00011c54) input_focus_pane_cp1

0xa8eb,	// (0x00015744) list_set_text_pane

0x6df1,	// (0x00011c4a) setting_text_pane_g1

0x6dfb,	// (0x00011c54) input_focus_pane_cp2

0x6df1,	// (0x00011c4a) setting_code_pane_g1

0x6f26,	// (0x00011d7f) setting_code_pane_t1

0x6f34,	// (0x00011d8d) set_text_pane_t1_ParamLimits

0x6f34,	// (0x00011d8d) set_text_pane_t1

0x7e08,	// (0x00012c61) set_opt_bg_pane_g1

0x7e10,	// (0x00012c69) set_opt_bg_pane_g2

0xa8c5,	// (0x0001571e) set_opt_bg_pane_g3

0x7e20,	// (0x00012c79) set_opt_bg_pane_g4

0x7e28,	// (0x00012c81) set_opt_bg_pane_g5

0x7e30,	// (0x00012c89) set_opt_bg_pane_g6

0xa8cf,	// (0x00015728) set_opt_bg_pane_g7

0xa8d7,	// (0x00015730) set_opt_bg_pane_g8

0xa8e1,	// (0x0001573a) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001a7c7) set_opt_bg_pane_g

0xa8b8,	// (0x00015711) slider_set_pane_g1

0x5c78,	// (0x00010ad1) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001a7b8) slider_set_pane_g

0x5c14,	// (0x00010a6d) volume_set_pane_g1

0x5c1c,	// (0x00010a75) volume_set_pane_g2

0x5c24,	// (0x00010a7d) volume_set_pane_g3

0x5c2c,	// (0x00010a85) volume_set_pane_g4

0x5c34,	// (0x00010a8d) volume_set_pane_g5

0x5c3c,	// (0x00010a95) volume_set_pane_g6

0x5c44,	// (0x00010a9d) volume_set_pane_g7

0x5c4c,	// (0x00010aa5) volume_set_pane_g8

0x5c54,	// (0x00010aad) volume_set_pane_g9

0x5c5c,	// (0x00010ab5) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001a790) volume_set_pane_g

0x6f4e,	// (0x00011da7) indicator_pane_ParamLimits

0x6f4e,	// (0x00011da7) indicator_pane

0x6f5a,	// (0x00011db3) main_idle_pane_g2_ParamLimits

0x6f5a,	// (0x00011db3) main_idle_pane_g2

0x6f82,	// (0x00011ddb) main_pane_idle_g1_ParamLimits

0x6f82,	// (0x00011ddb) main_pane_idle_g1

0x6f8f,	// (0x00011de8) popup_clock_digital_analogue_window_ParamLimits

0x6f8f,	// (0x00011de8) popup_clock_digital_analogue_window

0x6fa6,	// (0x00011dff) soft_indicator_pane_ParamLimits

0x6fa6,	// (0x00011dff) soft_indicator_pane

0x6fb2,	// (0x00011e0b) wallpaper_pane_ParamLimits

0x6fb2,	// (0x00011e0b) wallpaper_pane

0x6df1,	// (0x00011c4a) wallpaper_pane_g1

0x6fc6,	// (0x00011e1f) indicator_pane_g1_ParamLimits

0x6fc6,	// (0x00011e1f) indicator_pane_g1

0xadb8,	// (0x00015c11) navi_navi_icon_text_pane_srt_g1

0x6fe1,	// (0x00011e3a) soft_indicator_pane_t1

0x6ffb,	// (0x00011e54) aid_ps_area_pane

0x700c,	// (0x00011e65) aid_ps_clock_pane

0x701a,	// (0x00011e73) aid_ps_indicator_pane

0x7026,	// (0x00011e7f) indicator_ps_pane_ParamLimits

0x7026,	// (0x00011e7f) indicator_ps_pane

0x7035,	// (0x00011e8e) power_save_pane_g1_ParamLimits

0x7035,	// (0x00011e8e) power_save_pane_g1

0x7041,	// (0x00011e9a) power_save_pane_g2_ParamLimits

0x7041,	// (0x00011e9a) power_save_pane_g2

0x48bc,	// (0x0000f715) aid_navinavi_width_pane

0x6ffb,	// (0x00011e54) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a3c3) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a3c3) power_save_pane_g

0x704f,	// (0x00011ea8) power_save_pane_t1_ParamLimits

0x704f,	// (0x00011ea8) power_save_pane_t1

0x700c,	// (0x00011e65) aid_ps_clock_pane_ParamLimits

0x701a,	// (0x00011e73) aid_ps_indicator_pane_ParamLimits

0x7061,	// (0x00011eba) power_save_pane_t4_ParamLimits

0x7061,	// (0x00011eba) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a3c8) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a3c8) power_save_pane_t

0x708b,	// (0x00011ee4) power_save_t3_ParamLimits

0x708b,	// (0x00011ee4) power_save_t3

0x7076,	// (0x00011ecf) power_save_t2_ParamLimits

0x7076,	// (0x00011ecf) power_save_t2

0x70a0,	// (0x00011ef9) indicator_ps_pane_g1

0x70a9,	// (0x00011f02) ai_gene_pane_ParamLimits

0x70a9,	// (0x00011f02) ai_gene_pane

0x70b5,	// (0x00011f0e) ai_links_pane_ParamLimits

0x70b5,	// (0x00011f0e) ai_links_pane

0x70c1,	// (0x00011f1a) indicator_pane_cp1_ParamLimits

0x70c1,	// (0x00011f1a) indicator_pane_cp1

0x70cd,	// (0x00011f26) main_pane_idle_g1_cp_ParamLimits

0x70cd,	// (0x00011f26) main_pane_idle_g1_cp

0x70d9,	// (0x00011f32) popup_ai_links_title_window

0x70e2,	// (0x00011f3b) soft_indicator_pane_cp1_ParamLimits

0x70e2,	// (0x00011f3b) soft_indicator_pane_cp1

0xa67e,	// (0x000154d7) ai_links_pane_g1

0xa687,	// (0x000154e0) grid_ai_links_pane

0xa661,	// (0x000154ba) ai_gene_pane_1

0xa66c,	// (0x000154c5) ai_gene_pane_2

0xa675,	// (0x000154ce) list_highlight_pane_cp4

0xa645,	// (0x0001549e) cell_ai_link_pane_ParamLimits

0xa645,	// (0x0001549e) cell_ai_link_pane

0xa63d,	// (0x00015496) cell_ai_link_pane_g1

0x7312,	// (0x0001216b) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001a76b) cell_ai_link_pane_g

0x6dfb,	// (0x00011c54) grid_highlight_cp2

0x6dfb,	// (0x00011c54) bg_popup_sub_pane_cp1

0x70fc,	// (0x00011f55) popup_ai_links_title_window_t1

0xa58b,	// (0x000153e4) ai_gene_pane_1_g1_ParamLimits

0xa58b,	// (0x000153e4) ai_gene_pane_1_g1

0xa597,	// (0x000153f0) ai_gene_pane_1_g2_ParamLimits

0xa597,	// (0x000153f0) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001a761) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001a761) ai_gene_pane_1_g

0xa5a4,	// (0x000153fd) ai_gene_pane_1_t1_ParamLimits

0xa5a4,	// (0x000153fd) ai_gene_pane_1_t1

0xa5d8,	// (0x00015431) grid_ai_soft_ind_pane

0xa576,	// (0x000153cf) ai_gene_pane_2_t1_ParamLimits

0xa576,	// (0x000153cf) ai_gene_pane_2_t1

0x710b,	// (0x00011f64) main_pane_empty_t1_ParamLimits

0x710b,	// (0x00011f64) main_pane_empty_t1

0x7123,	// (0x00011f7c) main_pane_empty_t2_ParamLimits

0x7123,	// (0x00011f7c) main_pane_empty_t2

0x7138,	// (0x00011f91) main_pane_empty_t3_ParamLimits

0x7138,	// (0x00011f91) main_pane_empty_t3

0x714a,	// (0x00011fa3) main_pane_empty_t4_ParamLimits

0x714a,	// (0x00011fa3) main_pane_empty_t4

0x715c,	// (0x00011fb5) main_pane_empty_t5_ParamLimits

0x715c,	// (0x00011fb5) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a3cd) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a3cd) main_pane_empty_t

0x7f05,	// (0x00012d5e) bg_popup_window_pane_ParamLimits

0x7f05,	// (0x00012d5e) bg_popup_window_pane

0xa2e6,	// (0x0001513f) find_popup_pane_cp2_ParamLimits

0xa2e6,	// (0x0001513f) find_popup_pane_cp2

0xa2f2,	// (0x0001514b) heading_pane_ParamLimits

0xa2f2,	// (0x0001514b) heading_pane

0x6dfb,	// (0x00011c54) bg_popup_sub_pane

0xa260,	// (0x000150b9) bg_popup_window_pane_g1_ParamLimits

0xa260,	// (0x000150b9) bg_popup_window_pane_g1

0xa26c,	// (0x000150c5) bg_popup_window_pane_g2_ParamLimits

0xa26c,	// (0x000150c5) bg_popup_window_pane_g2

0xa278,	// (0x000150d1) bg_popup_window_pane_g3_ParamLimits

0xa278,	// (0x000150d1) bg_popup_window_pane_g3

0xa284,	// (0x000150dd) bg_popup_window_pane_g4_ParamLimits

0xa284,	// (0x000150dd) bg_popup_window_pane_g4

0xa290,	// (0x000150e9) bg_popup_window_pane_g5_ParamLimits

0xa290,	// (0x000150e9) bg_popup_window_pane_g5

0xa29c,	// (0x000150f5) bg_popup_window_pane_g6_ParamLimits

0xa29c,	// (0x000150f5) bg_popup_window_pane_g6

0xa2a8,	// (0x00015101) bg_popup_window_pane_g7_ParamLimits

0xa2a8,	// (0x00015101) bg_popup_window_pane_g7

0xa2b4,	// (0x0001510d) bg_popup_window_pane_g8_ParamLimits

0xa2b4,	// (0x0001510d) bg_popup_window_pane_g8

0xa2c0,	// (0x00015119) bg_popup_window_pane_g9_ParamLimits

0xa2c0,	// (0x00015119) bg_popup_window_pane_g9

0xa2cc,	// (0x00015125) bg_popup_window_pane_g10_ParamLimits

0xa2cc,	// (0x00015125) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001a729) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001a729) bg_popup_window_pane_g

0xa1f5,	// (0x0001504e) bg_popup_heading_pane_ParamLimits

0xa1f5,	// (0x0001504e) bg_popup_heading_pane

0x5d00,	// (0x00010b59) tabs_4_passive_pane_cp_srt_ParamLimits

0x5d00,	// (0x00010b59) tabs_4_passive_pane_cp_srt

0x5d12,	// (0x00010b6b) tabs_4_passive_pane_srt_ParamLimits

0xa209,	// (0x00015062) heading_pane_g2

0x5d12,	// (0x00010b6b) tabs_4_passive_pane_srt

0x8ec4,	// (0x00013d1d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ec4,	// (0x00013d1d) bg_passive_tab_pane_cp3_srt

0xa211,	// (0x0001506a) heading_pane_t1_ParamLimits

0xa211,	// (0x0001506a) heading_pane_t1

0xa228,	// (0x00015081) heading_pane_t2_ParamLimits

0xa228,	// (0x00015081) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001a724) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001a724) heading_pane_t

0x9d16,	// (0x00014b6f) bg_popup_heading_pane_g1

0x9dc5,	// (0x00014c1e) bg_popup_heading_pane_g2

0x9dcf,	// (0x00014c28) bg_popup_heading_pane_g3

0x9dd9,	// (0x00014c32) bg_popup_heading_pane_g4

0x9de3,	// (0x00014c3c) bg_popup_heading_pane_g5

0x9ded,	// (0x00014c46) bg_popup_heading_pane_g6

0x9df5,	// (0x00014c4e) bg_popup_heading_pane_g7

0x9dfd,	// (0x00014c56) bg_popup_heading_pane_g8

0x9e07,	// (0x00014c60) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001a6e0) bg_popup_heading_pane_g

0x9404,	// (0x0001425d) bg_popup_sub_pane_g1

0x9414,	// (0x0001426d) bg_popup_sub_pane_g2

0x940c,	// (0x00014265) bg_popup_sub_pane_g3

0x9424,	// (0x0001427d) bg_popup_sub_pane_g4

0x941c,	// (0x00014275) bg_popup_sub_pane_g5

0x942c,	// (0x00014285) bg_popup_sub_pane_g6

0x9434,	// (0x0001428d) bg_popup_sub_pane_g7

0x9444,	// (0x0001429d) bg_popup_sub_pane_g8

0x943c,	// (0x00014295) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001a6ba) bg_popup_sub_pane_g

0x7170,	// (0x00011fc9) bg_popup_window_pane_cp5_ParamLimits

0x7170,	// (0x00011fc9) bg_popup_window_pane_cp5

0x718c,	// (0x00011fe5) popup_note_window_g1_ParamLimits

0x718c,	// (0x00011fe5) popup_note_window_g1

0x7198,	// (0x00011ff1) popup_note_window_t1_ParamLimits

0x7198,	// (0x00011ff1) popup_note_window_t1

0x71ae,	// (0x00012007) popup_note_window_t2_ParamLimits

0x71ae,	// (0x00012007) popup_note_window_t2

0x71c4,	// (0x0001201d) popup_note_window_t3_ParamLimits

0x71c4,	// (0x0001201d) popup_note_window_t3

0x71da,	// (0x00012033) popup_note_window_t4_ParamLimits

0x71da,	// (0x00012033) popup_note_window_t4

0x7202,	// (0x0001205b) popup_note_window_t5_ParamLimits

0x7202,	// (0x0001205b) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a3d8) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a3d8) popup_note_window_t

0x7226,	// (0x0001207f) bg_popup_window_pane_cp6_ParamLimits

0x7226,	// (0x0001207f) bg_popup_window_pane_cp6

0x9c92,	// (0x00014aeb) popup_note_image_window_g1_ParamLimits

0x9c92,	// (0x00014aeb) popup_note_image_window_g1

0x9c9e,	// (0x00014af7) popup_note_image_window_g2_ParamLimits

0x9c9e,	// (0x00014af7) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001a6ae) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001a6ae) popup_note_image_window_g

0x9cb7,	// (0x00014b10) popup_note_image_window_t1_ParamLimits

0x9cb7,	// (0x00014b10) popup_note_image_window_t1

0x9cd0,	// (0x00014b29) popup_note_image_window_t2_ParamLimits

0x9cd0,	// (0x00014b29) popup_note_image_window_t2

0x9ce9,	// (0x00014b42) popup_note_image_window_t3_ParamLimits

0x9ce9,	// (0x00014b42) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001a6b3) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001a6b3) popup_note_image_window_t

0x9b53,	// (0x000149ac) bg_popup_window_pane_cp7_ParamLimits

0x9b53,	// (0x000149ac) bg_popup_window_pane_cp7

0x9b83,	// (0x000149dc) popup_note_wait_window_g1_ParamLimits

0x9b83,	// (0x000149dc) popup_note_wait_window_g1

0x9b8f,	// (0x000149e8) popup_note_wait_window_g2_ParamLimits

0x9b8f,	// (0x000149e8) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001a69c) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001a69c) popup_note_wait_window_g

0x9ba7,	// (0x00014a00) popup_note_wait_window_t1_ParamLimits

0x9ba7,	// (0x00014a00) popup_note_wait_window_t1

0x9bce,	// (0x00014a27) popup_note_wait_window_t2_ParamLimits

0x9bce,	// (0x00014a27) popup_note_wait_window_t2

0x9beb,	// (0x00014a44) popup_note_wait_window_t3_ParamLimits

0x9beb,	// (0x00014a44) popup_note_wait_window_t3

0x9bfe,	// (0x00014a57) popup_note_wait_window_t4_ParamLimits

0x9bfe,	// (0x00014a57) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001a6a3) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001a6a3) popup_note_wait_window_t

0x9c23,	// (0x00014a7c) wait_bar_pane_ParamLimits

0x9c23,	// (0x00014a7c) wait_bar_pane

0x6dfb,	// (0x00011c54) wait_anim_pane

0x6dfb,	// (0x00011c54) wait_border_pane

0x6df1,	// (0x00011c4a) wait_anim_pane_g1

0x6df1,	// (0x00011c4a) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a557) wait_anim_pane_g

0x9af7,	// (0x00014950) wait_border_pane_g1

0x9b02,	// (0x0001495b) wait_border_pane_g2

0x9b0b,	// (0x00014964) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001a695) wait_border_pane_g

0x9962,	// (0x000147bb) bg_popup_window_pane_cp16_ParamLimits

0x9962,	// (0x000147bb) bg_popup_window_pane_cp16

0x9a62,	// (0x000148bb) indicator_popup_pane_cp4_ParamLimits

0x9a62,	// (0x000148bb) indicator_popup_pane_cp4

0x9a76,	// (0x000148cf) popup_query_data_window_t1_ParamLimits

0x9a76,	// (0x000148cf) popup_query_data_window_t1

0x9a88,	// (0x000148e1) popup_query_data_window_t2_ParamLimits

0x9a88,	// (0x000148e1) popup_query_data_window_t2

0x9aa1,	// (0x000148fa) popup_query_data_window_t3_ParamLimits

0x9aa1,	// (0x000148fa) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001a68e) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001a68e) popup_query_data_window_t

0x9abb,	// (0x00014914) query_popup_data_pane_ParamLimits

0x9abb,	// (0x00014914) query_popup_data_pane

0x9acf,	// (0x00014928) query_popup_data_pane_cp1_ParamLimits

0x9acf,	// (0x00014928) query_popup_data_pane_cp1

0x9962,	// (0x000147bb) bg_popup_window_pane_cp10_ParamLimits

0x9962,	// (0x000147bb) bg_popup_window_pane_cp10

0x9994,	// (0x000147ed) indicator_popup_pane_ParamLimits

0x9994,	// (0x000147ed) indicator_popup_pane

0x99b6,	// (0x0001480f) popup_query_code_window_t1_ParamLimits

0x99b6,	// (0x0001480f) popup_query_code_window_t1

0x99d0,	// (0x00014829) popup_query_code_window_t2_ParamLimits

0x99d0,	// (0x00014829) popup_query_code_window_t2

0x9a19,	// (0x00014872) popup_query_code_window_t3_ParamLimits

0x9a19,	// (0x00014872) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001a687) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001a687) popup_query_code_window_t

0x9a48,	// (0x000148a1) query_popup_pane_ParamLimits

0x9a48,	// (0x000148a1) query_popup_pane

0x7226,	// (0x0001207f) bg_popup_window_pane_cp15_ParamLimits

0x7226,	// (0x0001207f) bg_popup_window_pane_cp15

0x7244,	// (0x0001209d) indicator_popup_pane_cp1_ParamLimits

0x7244,	// (0x0001209d) indicator_popup_pane_cp1

0x7257,	// (0x000120b0) indicator_popup_pane_cp2_ParamLimits

0x7257,	// (0x000120b0) indicator_popup_pane_cp2

0x726a,	// (0x000120c3) popup_query_data_code_window_g1_ParamLimits

0x726a,	// (0x000120c3) popup_query_data_code_window_g1

0x727d,	// (0x000120d6) popup_query_data_code_window_t1_ParamLimits

0x727d,	// (0x000120d6) popup_query_data_code_window_t1

0x728f,	// (0x000120e8) popup_query_data_code_window_t2_ParamLimits

0x728f,	// (0x000120e8) popup_query_data_code_window_t2

0x72a1,	// (0x000120fa) popup_query_data_code_window_t3_ParamLimits

0x72a1,	// (0x000120fa) popup_query_data_code_window_t3

0x72b7,	// (0x00012110) popup_query_data_code_window_t4_ParamLimits

0x72b7,	// (0x00012110) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a3e3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a3e3) popup_query_data_code_window_t

0x59c1,	// (0x0001081a) list_single_midp_graphic_pane_g3

0x72cf,	// (0x00012128) query_popup_data_pane_cp2_ParamLimits

0x72e2,	// (0x0001213b) query_popup_pane_cp2_ParamLimits

0x72e2,	// (0x0001213b) query_popup_pane_cp2

0x6dfb,	// (0x00011c54) bg_popup_window_pane_cp11

0x995a,	// (0x000147b3) heading_pane_cp5

0x73cd,	// (0x00012226) listscroll_popup_info_pane

0x6dfb,	// (0x00011c54) input_focus_pane_cp3

0x72f5,	// (0x0001214e) query_popup_pane_t1

0x7303,	// (0x0001215c) list_popup_info_pane_ParamLimits

0x7303,	// (0x0001215c) list_popup_info_pane

0x7312,	// (0x0001216b) listscroll_popup_info_pane_g1

0x731a,	// (0x00012173) scroll_pane_cp7

0x7324,	// (0x0001217d) popup_info_list_pane_t1_ParamLimits

0x7324,	// (0x0001217d) popup_info_list_pane_t1

0x733e,	// (0x00012197) popup_info_list_pane_t2_ParamLimits

0x733e,	// (0x00012197) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a3ec) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a3ec) popup_info_list_pane_t

0x6dfb,	// (0x00011c54) bg_popup_window_pane_cp12

0xadd2,	// (0x00015c2b) find_popup_pane

0x6edb,	// (0x00011d34) bg_popup_window_pane_cp3

0x7358,	// (0x000121b1) heading_pane_cp3

0x7364,	// (0x000121bd) listscroll_popup_graphic_pane

0x6dfb,	// (0x00011c54) bg_popup_window_pane_cp4

0x73c3,	// (0x0001221c) heading_pane_cp4

0x73cd,	// (0x00012226) listscroll_popup_colour_pane

0x73d5,	// (0x0001222e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x73d5,	// (0x0001222e) cell_large_graphic_colour_none_popup_pane

0x73e9,	// (0x00012242) grid_large_graphic_colour_popup_pane_ParamLimits

0x73e9,	// (0x00012242) grid_large_graphic_colour_popup_pane

0x7415,	// (0x0001226e) listscroll_popup_colour_pane_g1_ParamLimits

0x7415,	// (0x0001226e) listscroll_popup_colour_pane_g1

0x742c,	// (0x00012285) listscroll_popup_colour_pane_g2_ParamLimits

0x742c,	// (0x00012285) listscroll_popup_colour_pane_g2

0x7443,	// (0x0001229c) listscroll_popup_colour_pane_g3_ParamLimits

0x7443,	// (0x0001229c) listscroll_popup_colour_pane_g3

0x7453,	// (0x000122ac) listscroll_popup_colour_pane_g4_ParamLimits

0x7453,	// (0x000122ac) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a3f1) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a3f1) listscroll_popup_colour_pane_g

0x7467,	// (0x000122c0) scroll_pane_cp6_ParamLimits

0x7467,	// (0x000122c0) scroll_pane_cp6

0x7479,	// (0x000122d2) cell_large_graphic_colour_popup_pane_ParamLimits

0x7479,	// (0x000122d2) cell_large_graphic_colour_popup_pane

0x7498,	// (0x000122f1) cell_large_graphic_colour_none_popup_pane_t1

0x6dfb,	// (0x00011c54) grid_highlight_pane_cp5

0x74a7,	// (0x00012300) cell_large_graphic_colour_popup_pane_g1

0x74af,	// (0x00012308) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a3fa) cell_large_graphic_colour_popup_pane_g

0x74b7,	// (0x00012310) cell_large_graphic_colour_popup_pane_g2_copy1

0x74c0,	// (0x00012319) grid_highlight_pane_cp4

0x74c8,	// (0x00012321) bg_popup_window_pane_cp8_ParamLimits

0x74c8,	// (0x00012321) bg_popup_window_pane_cp8

0x74e3,	// (0x0001233c) popup_snote_single_text_window_g1_ParamLimits

0x74e3,	// (0x0001233c) popup_snote_single_text_window_g1

0x74f5,	// (0x0001234e) popup_snote_single_text_window_t1_ParamLimits

0x74f5,	// (0x0001234e) popup_snote_single_text_window_t1

0x7508,	// (0x00012361) popup_snote_single_text_window_t2_ParamLimits

0x7508,	// (0x00012361) popup_snote_single_text_window_t2

0x751b,	// (0x00012374) popup_snote_single_text_window_t3_ParamLimits

0x751b,	// (0x00012374) popup_snote_single_text_window_t3

0x7554,	// (0x000123ad) popup_snote_single_text_window_t4_ParamLimits

0x7554,	// (0x000123ad) popup_snote_single_text_window_t4

0x7588,	// (0x000123e1) popup_snote_single_text_window_t5_ParamLimits

0x7588,	// (0x000123e1) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a3ff) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a3ff) popup_snote_single_text_window_t

0x75b7,	// (0x00012410) bg_popup_window_pane_cp9_ParamLimits

0x75b7,	// (0x00012410) bg_popup_window_pane_cp9

0x74e3,	// (0x0001233c) popup_snote_single_graphic_window_g1_ParamLimits

0x74e3,	// (0x0001233c) popup_snote_single_graphic_window_g1

0x75c5,	// (0x0001241e) popup_snote_single_graphic_window_g2_ParamLimits

0x75c5,	// (0x0001241e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a40a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a40a) popup_snote_single_graphic_window_g

0x75d1,	// (0x0001242a) popup_snote_single_graphic_window_t1_ParamLimits

0x75d1,	// (0x0001242a) popup_snote_single_graphic_window_t1

0x75e4,	// (0x0001243d) popup_snote_single_graphic_window_t2_ParamLimits

0x75e4,	// (0x0001243d) popup_snote_single_graphic_window_t2

0x75f7,	// (0x00012450) popup_snote_single_graphic_window_t3_ParamLimits

0x75f7,	// (0x00012450) popup_snote_single_graphic_window_t3

0x7630,	// (0x00012489) popup_snote_single_graphic_window_t4_ParamLimits

0x7630,	// (0x00012489) popup_snote_single_graphic_window_t4

0x7664,	// (0x000124bd) popup_snote_single_graphic_window_t5_ParamLimits

0x7664,	// (0x000124bd) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a40f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a40f) popup_snote_single_graphic_window_t

0xad16,	// (0x00015b6f) grid_graphic_popup_pane_ParamLimits

0xad16,	// (0x00015b6f) grid_graphic_popup_pane

0xad3e,	// (0x00015b97) listscroll_popup_graphic_pane_g1_ParamLimits

0xad3e,	// (0x00015b97) listscroll_popup_graphic_pane_g1

0xad52,	// (0x00015bab) listscroll_popup_graphic_pane_g2_ParamLimits

0xad52,	// (0x00015bab) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001a804) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001a804) listscroll_popup_graphic_pane_g

0xad66,	// (0x00015bbf) scroll_pane_cp5

0xacb3,	// (0x00015b0c) cell_graphic_popup_pane_ParamLimits

0xacb3,	// (0x00015b0c) cell_graphic_popup_pane

0xac94,	// (0x00015aed) cell_graphic_popup_pane_g1

0xac9c,	// (0x00015af5) cell_graphic_popup_pane_g2

0x74b7,	// (0x00012310) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001a7fd) cell_graphic_popup_pane_g

0xaca5,	// (0x00015afe) cell_graphic_popup_pane_t2

0x74c0,	// (0x00012319) grid_highlight_pane_cp3

0x76a5,	// (0x000124fe) list_gen_pane_ParamLimits

0x76a5,	// (0x000124fe) list_gen_pane

0x76d7,	// (0x00012530) scroll_pane

0xabec,	// (0x00015a45) bg_list_pane_g1_ParamLimits

0xabec,	// (0x00015a45) bg_list_pane_g1

0xac09,	// (0x00015a62) bg_list_pane_g2_ParamLimits

0xac09,	// (0x00015a62) bg_list_pane_g2

0xac1e,	// (0x00015a77) bg_list_pane_g3_ParamLimits

0xac1e,	// (0x00015a77) bg_list_pane_g3

0xac32,	// (0x00015a8b) bg_list_pane_g4_ParamLimits

0xac32,	// (0x00015a8b) bg_list_pane_g4

0xac46,	// (0x00015a9f) bg_list_pane_g5_ParamLimits

0xac46,	// (0x00015a9f) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001a7f2) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001a7f2) bg_list_pane_g

0xaaef,	// (0x00015948) list_double2_graphic_large_graphic_pane_ParamLimits

0xaaef,	// (0x00015948) list_double2_graphic_large_graphic_pane

0xaaef,	// (0x00015948) list_double2_graphic_pane_ParamLimits

0xaaef,	// (0x00015948) list_double2_graphic_pane

0xaaef,	// (0x00015948) list_double2_large_graphic_pane_ParamLimits

0xaaef,	// (0x00015948) list_double2_large_graphic_pane

0xaaef,	// (0x00015948) list_double2_pane_ParamLimits

0xaaef,	// (0x00015948) list_double2_pane

0xaaef,	// (0x00015948) list_double_graphic_heading_pane_ParamLimits

0xaaef,	// (0x00015948) list_double_graphic_heading_pane

0xaaef,	// (0x00015948) list_double_graphic_pane_ParamLimits

0xaaef,	// (0x00015948) list_double_graphic_pane

0xaaef,	// (0x00015948) list_double_heading_pane_ParamLimits

0xaaef,	// (0x00015948) list_double_heading_pane

0xaaef,	// (0x00015948) list_double_large_graphic_pane_ParamLimits

0xaaef,	// (0x00015948) list_double_large_graphic_pane

0xaaef,	// (0x00015948) list_double_number_pane_ParamLimits

0xaaef,	// (0x00015948) list_double_number_pane

0xaaef,	// (0x00015948) list_double_pane_ParamLimits

0xaaef,	// (0x00015948) list_double_pane

0xaaef,	// (0x00015948) list_double_time_pane_ParamLimits

0xaaef,	// (0x00015948) list_double_time_pane

0xaaef,	// (0x00015948) list_setting_number_pane_ParamLimits

0xaaef,	// (0x00015948) list_setting_number_pane

0xaaef,	// (0x00015948) list_setting_pane_ParamLimits

0xaaef,	// (0x00015948) list_setting_pane

0xab58,	// (0x000159b1) list_single_2graphic_pane_ParamLimits

0xab58,	// (0x000159b1) list_single_2graphic_pane

0xab58,	// (0x000159b1) list_single_graphic_heading_pane_ParamLimits

0xab58,	// (0x000159b1) list_single_graphic_heading_pane

0xab58,	// (0x000159b1) list_single_graphic_pane_ParamLimits

0xab58,	// (0x000159b1) list_single_graphic_pane

0xab58,	// (0x000159b1) list_single_heading_pane_ParamLimits

0xab58,	// (0x000159b1) list_single_heading_pane

0xabcd,	// (0x00015a26) list_single_large_graphic_pane_ParamLimits

0xabcd,	// (0x00015a26) list_single_large_graphic_pane

0xab58,	// (0x000159b1) list_single_number_heading_pane_ParamLimits

0xab58,	// (0x000159b1) list_single_number_heading_pane

0xab58,	// (0x000159b1) list_single_number_pane_ParamLimits

0xab58,	// (0x000159b1) list_single_number_pane

0xab58,	// (0x000159b1) list_single_pane_ParamLimits

0xab58,	// (0x000159b1) list_single_pane

0x6dfb,	// (0x00011c54) list_highlight_pane_cp1

0x7717,	// (0x00012570) list_single_pane_g1_ParamLimits

0x7717,	// (0x00012570) list_single_pane_g1

0x7723,	// (0x0001257c) list_single_pane_g2_ParamLimits

0x7723,	// (0x0001257c) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a421) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a421) list_single_pane_g

0xaaa8,	// (0x00015901) list_single_pane_t1_ParamLimits

0xaaa8,	// (0x00015901) list_single_pane_t1

0x7717,	// (0x00012570) list_single_number_pane_g1_ParamLimits

0x7717,	// (0x00012570) list_single_number_pane_g1

0x7723,	// (0x0001257c) list_single_number_pane_g2_ParamLimits

0x7723,	// (0x0001257c) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a421) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a421) list_single_number_pane_g

0xa834,	// (0x0001568d) list_single_number_pane_t1_ParamLimits

0xa834,	// (0x0001568d) list_single_number_pane_t1

0xa84a,	// (0x000156a3) list_single_number_pane_t2_ParamLimits

0xa84a,	// (0x000156a3) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001a7b3) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001a7b3) list_single_number_pane_t

0x770b,	// (0x00012564) list_single_graphic_pane_g1_ParamLimits

0x770b,	// (0x00012564) list_single_graphic_pane_g1

0x7717,	// (0x00012570) list_single_graphic_pane_g2_ParamLimits

0x7717,	// (0x00012570) list_single_graphic_pane_g2

0x7723,	// (0x0001257c) list_single_graphic_pane_g3_ParamLimits

0x7723,	// (0x0001257c) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a41a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a41a) list_single_graphic_pane_g

0x772f,	// (0x00012588) list_single_graphic_pane_t1_ParamLimits

0x772f,	// (0x00012588) list_single_graphic_pane_t1

0x7717,	// (0x00012570) list_single_heading_pane_g1_ParamLimits

0x7717,	// (0x00012570) list_single_heading_pane_g1

0x7723,	// (0x0001257c) list_single_heading_pane_g2_ParamLimits

0x7723,	// (0x0001257c) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a421) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a421) list_single_heading_pane_g

0x7745,	// (0x0001259e) list_single_heading_pane_t1_ParamLimits

0x7745,	// (0x0001259e) list_single_heading_pane_t1

0x775b,	// (0x000125b4) list_single_heading_pane_t2_ParamLimits

0x775b,	// (0x000125b4) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a426) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a426) list_single_heading_pane_t

0x7717,	// (0x00012570) list_single_number_heading_pane_g1_ParamLimits

0x7717,	// (0x00012570) list_single_number_heading_pane_g1

0x7723,	// (0x0001257c) list_single_number_heading_pane_g2_ParamLimits

0x7723,	// (0x0001257c) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a421) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a421) list_single_number_heading_pane_g

0x7745,	// (0x0001259e) list_single_number_heading_pane_t1_ParamLimits

0x7745,	// (0x0001259e) list_single_number_heading_pane_t1

0x776d,	// (0x000125c6) list_single_number_heading_pane_t2_ParamLimits

0x776d,	// (0x000125c6) list_single_number_heading_pane_t2

0x777f,	// (0x000125d8) list_single_number_heading_pane_t3_ParamLimits

0x777f,	// (0x000125d8) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a42b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a42b) list_single_number_heading_pane_t

0x7791,	// (0x000125ea) list_single_graphic_heading_pane_g1_ParamLimits

0x7791,	// (0x000125ea) list_single_graphic_heading_pane_g1

0x779d,	// (0x000125f6) list_single_graphic_heading_pane_g4_ParamLimits

0x779d,	// (0x000125f6) list_single_graphic_heading_pane_g4

0x7723,	// (0x0001257c) list_single_graphic_heading_pane_g5_ParamLimits

0x7723,	// (0x0001257c) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a432) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a432) list_single_graphic_heading_pane_g

0x7745,	// (0x0001259e) list_single_graphic_heading_pane_t1_ParamLimits

0x7745,	// (0x0001259e) list_single_graphic_heading_pane_t1

0x77ae,	// (0x00012607) list_single_graphic_heading_pane_t2_ParamLimits

0x77ae,	// (0x00012607) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a439) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a439) list_single_graphic_heading_pane_t

0x77c0,	// (0x00012619) list_single_large_graphic_pane_g1_ParamLimits

0x77c0,	// (0x00012619) list_single_large_graphic_pane_g1

0x77cc,	// (0x00012625) list_single_large_graphic_pane_g2_ParamLimits

0x77cc,	// (0x00012625) list_single_large_graphic_pane_g2

0x77d8,	// (0x00012631) list_single_large_graphic_pane_g3_ParamLimits

0x77d8,	// (0x00012631) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a43e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a43e) list_single_large_graphic_pane_g

0x9b02,	// (0x0001495b) wait_border_pane_g2_copy1

0x77e4,	// (0x0001263d) list_single_large_graphic_pane_g4_cp2

0x77ec,	// (0x00012645) list_single_large_graphic_pane_t1_ParamLimits

0x77ec,	// (0x00012645) list_single_large_graphic_pane_t1

0x7802,	// (0x0001265b) list_double_pane_g1_ParamLimits

0x7802,	// (0x0001265b) list_double_pane_g1

0x780e,	// (0x00012667) list_double_pane_g2_ParamLimits

0x780e,	// (0x00012667) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a445) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a445) list_double_pane_g

0x781a,	// (0x00012673) list_double_pane_t1_ParamLimits

0x781a,	// (0x00012673) list_double_pane_t1

0x7830,	// (0x00012689) list_double_pane_t2_ParamLimits

0x7830,	// (0x00012689) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a44a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a44a) list_double_pane_t

0x7842,	// (0x0001269b) list_double2_pane_g1_ParamLimits

0x7842,	// (0x0001269b) list_double2_pane_g1

0x7853,	// (0x000126ac) list_double2_pane_g2_ParamLimits

0x7853,	// (0x000126ac) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a44f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a44f) list_double2_pane_g

0x785f,	// (0x000126b8) list_double2_pane_t1_ParamLimits

0x785f,	// (0x000126b8) list_double2_pane_t1

0x7875,	// (0x000126ce) list_double2_pane_t2_ParamLimits

0x7875,	// (0x000126ce) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a454) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a454) list_double2_pane_t

0x7802,	// (0x0001265b) list_double_number_pane_g1_ParamLimits

0x7802,	// (0x0001265b) list_double_number_pane_g1

0x780e,	// (0x00012667) list_double_number_pane_g2_ParamLimits

0x780e,	// (0x00012667) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a445) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a445) list_double_number_pane_g

0x7887,	// (0x000126e0) list_double_number_pane_t1_ParamLimits

0x7887,	// (0x000126e0) list_double_number_pane_t1

0x7899,	// (0x000126f2) list_double_number_pane_t2_ParamLimits

0x7899,	// (0x000126f2) list_double_number_pane_t2

0x78af,	// (0x00012708) list_double_number_pane_t3_ParamLimits

0x78af,	// (0x00012708) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a459) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a459) list_double_number_pane_t

0x78c1,	// (0x0001271a) list_double_graphic_pane_g1_ParamLimits

0x78c1,	// (0x0001271a) list_double_graphic_pane_g1

0x78cd,	// (0x00012726) list_double_graphic_pane_g2_ParamLimits

0x78cd,	// (0x00012726) list_double_graphic_pane_g2

0x78dc,	// (0x00012735) list_double_graphic_pane_g3_ParamLimits

0x78dc,	// (0x00012735) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a460) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a460) list_double_graphic_pane_g

0x78f4,	// (0x0001274d) list_double_graphic_pane_t1_ParamLimits

0x78f4,	// (0x0001274d) list_double_graphic_pane_t1

0x790a,	// (0x00012763) list_double_graphic_pane_t2_ParamLimits

0x790a,	// (0x00012763) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a469) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a469) list_double_graphic_pane_t

0x791c,	// (0x00012775) list_double2_graphic_pane_g1_ParamLimits

0x791c,	// (0x00012775) list_double2_graphic_pane_g1

0x7928,	// (0x00012781) list_double2_graphic_pane_g2_ParamLimits

0x7928,	// (0x00012781) list_double2_graphic_pane_g2

0x7853,	// (0x000126ac) list_double2_graphic_pane_g3_ParamLimits

0x7853,	// (0x000126ac) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a46e) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a46e) list_double2_graphic_pane_g

0x7934,	// (0x0001278d) list_double2_graphic_pane_t1_ParamLimits

0x7934,	// (0x0001278d) list_double2_graphic_pane_t1

0x794a,	// (0x000127a3) list_double2_graphic_pane_t2_ParamLimits

0x794a,	// (0x000127a3) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a475) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a475) list_double2_graphic_pane_t

0x795c,	// (0x000127b5) list_double_large_graphic_pane_g1_ParamLimits

0x795c,	// (0x000127b5) list_double_large_graphic_pane_g1

0x797b,	// (0x000127d4) list_double_large_graphic_pane_g2_ParamLimits

0x797b,	// (0x000127d4) list_double_large_graphic_pane_g2

0x780e,	// (0x00012667) list_double_large_graphic_pane_g3_ParamLimits

0x780e,	// (0x00012667) list_double_large_graphic_pane_g3

0x798c,	// (0x000127e5) list_double_large_graphic_pane_g4_ParamLimits

0x798c,	// (0x000127e5) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a47a) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a47a) list_double_large_graphic_pane_g

0x79b2,	// (0x0001280b) list_double_large_graphic_pane_t1_ParamLimits

0x79b2,	// (0x0001280b) list_double_large_graphic_pane_t1

0x79cb,	// (0x00012824) list_double_large_graphic_pane_t2_ParamLimits

0x79cb,	// (0x00012824) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a485) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a485) list_double_large_graphic_pane_t

0x79dd,	// (0x00012836) list_double2_large_graphic_pane_g1_ParamLimits

0x79dd,	// (0x00012836) list_double2_large_graphic_pane_g1

0x7842,	// (0x0001269b) list_double2_large_graphic_pane_g2_ParamLimits

0x7842,	// (0x0001269b) list_double2_large_graphic_pane_g2

0x7853,	// (0x000126ac) list_double2_large_graphic_pane_g3_ParamLimits

0x7853,	// (0x000126ac) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a48a) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a48a) list_double2_large_graphic_pane_g

0x79e9,	// (0x00012842) list_double2_large_graphic_pane_t1_ParamLimits

0x79e9,	// (0x00012842) list_double2_large_graphic_pane_t1

0x79ff,	// (0x00012858) list_double2_large_graphic_pane_t2_ParamLimits

0x79ff,	// (0x00012858) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a491) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a491) list_double2_large_graphic_pane_t

0x7a11,	// (0x0001286a) list_double_heading_pane_g1_ParamLimits

0x7a11,	// (0x0001286a) list_double_heading_pane_g1

0x7a22,	// (0x0001287b) list_double_heading_pane_g2_ParamLimits

0x7a22,	// (0x0001287b) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a496) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a496) list_double_heading_pane_g

0x7a2e,	// (0x00012887) list_double_heading_pane_t1_ParamLimits

0x7a2e,	// (0x00012887) list_double_heading_pane_t1

0x7a44,	// (0x0001289d) list_double_heading_pane_t2_ParamLimits

0x7a44,	// (0x0001289d) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a49b) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a49b) list_double_heading_pane_t

0x7a56,	// (0x000128af) list_double_graphic_heading_pane_g1_ParamLimits

0x7a56,	// (0x000128af) list_double_graphic_heading_pane_g1

0x7a11,	// (0x0001286a) list_double_graphic_heading_pane_g2_ParamLimits

0x7a11,	// (0x0001286a) list_double_graphic_heading_pane_g2

0x7a22,	// (0x0001287b) list_double_graphic_heading_pane_g3_ParamLimits

0x7a22,	// (0x0001287b) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a4a0) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a4a0) list_double_graphic_heading_pane_g

0x7a62,	// (0x000128bb) list_double_graphic_heading_pane_t1_ParamLimits

0x7a62,	// (0x000128bb) list_double_graphic_heading_pane_t1

0x7a78,	// (0x000128d1) list_double_graphic_heading_pane_t2_ParamLimits

0x7a78,	// (0x000128d1) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a4a7) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a4a7) list_double_graphic_heading_pane_t

0x797b,	// (0x000127d4) list_double_time_pane_g1_ParamLimits

0x797b,	// (0x000127d4) list_double_time_pane_g1

0x780e,	// (0x00012667) list_double_time_pane_g2_ParamLimits

0x780e,	// (0x00012667) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a4ac) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a4ac) list_double_time_pane_g

0x7a8a,	// (0x000128e3) list_double_time_pane_t1_ParamLimits

0x7a8a,	// (0x000128e3) list_double_time_pane_t1

0x7aa0,	// (0x000128f9) list_double_time_pane_t2_ParamLimits

0x7aa0,	// (0x000128f9) list_double_time_pane_t2

0x7ab2,	// (0x0001290b) list_double_time_pane_t3_ParamLimits

0x7ab2,	// (0x0001290b) list_double_time_pane_t3

0x7ac4,	// (0x0001291d) list_double_time_pane_t4_ParamLimits

0x7ac4,	// (0x0001291d) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a4b1) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a4b1) list_double_time_pane_t

0x7928,	// (0x00012781) list_setting_pane_g1_ParamLimits

0x7928,	// (0x00012781) list_setting_pane_g1

0x7853,	// (0x000126ac) list_setting_pane_g2_ParamLimits

0x7853,	// (0x000126ac) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a4ba) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a4ba) list_setting_pane_g

0x7ad6,	// (0x0001292f) list_setting_pane_t1_ParamLimits

0x7ad6,	// (0x0001292f) list_setting_pane_t1

0x7aed,	// (0x00012946) list_setting_pane_t2_ParamLimits

0x7aed,	// (0x00012946) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a4bf) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a4bf) list_setting_pane_t

0x7b2c,	// (0x00012985) set_value_pane_cp_ParamLimits

0x7b2c,	// (0x00012985) set_value_pane_cp

0x7928,	// (0x00012781) list_setting_number_pane_g1_ParamLimits

0x7928,	// (0x00012781) list_setting_number_pane_g1

0x7853,	// (0x000126ac) list_setting_number_pane_g2_ParamLimits

0x7853,	// (0x000126ac) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a4ba) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a4ba) list_setting_number_pane_g

0x7b38,	// (0x00012991) list_setting_number_pane_t1_ParamLimits

0x7b38,	// (0x00012991) list_setting_number_pane_t1

0x7b4c,	// (0x000129a5) list_setting_number_pane_t2_ParamLimits

0x7b4c,	// (0x000129a5) list_setting_number_pane_t2

0x7b63,	// (0x000129bc) list_setting_number_pane_t3_ParamLimits

0x7b63,	// (0x000129bc) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a4c6) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a4c6) list_setting_number_pane_t

0x7b2c,	// (0x00012985) set_value_pane_ParamLimits

0x7b2c,	// (0x00012985) set_value_pane

0x7ba6,	// (0x000129ff) bg_set_opt_pane_ParamLimits

0x7ba6,	// (0x000129ff) bg_set_opt_pane

0x7bc7,	// (0x00012a20) set_value_pane_t1

0x7bd5,	// (0x00012a2e) slider_set_pane_cp3

0x7bde,	// (0x00012a37) volume_small_pane_cp

0x7be7,	// (0x00012a40) list_form_gen_pane

0x7bf0,	// (0x00012a49) scroll_pane_cp8

0x7c09,	// (0x00012a62) form_field_data_pane_ParamLimits

0x7c09,	// (0x00012a62) form_field_data_pane

0x7c2b,	// (0x00012a84) form_field_data_wide_pane_ParamLimits

0x7c2b,	// (0x00012a84) form_field_data_wide_pane

0x7c4e,	// (0x00012aa7) form_field_popup_pane_ParamLimits

0x7c4e,	// (0x00012aa7) form_field_popup_pane

0x7c6e,	// (0x00012ac7) form_field_popup_wide_pane_ParamLimits

0x7c6e,	// (0x00012ac7) form_field_popup_wide_pane

0x7c8b,	// (0x00012ae4) form_field_slider_pane_ParamLimits

0x7c8b,	// (0x00012ae4) form_field_slider_pane

0x7c9e,	// (0x00012af7) form_field_slider_wide_pane_ParamLimits

0x7c9e,	// (0x00012af7) form_field_slider_wide_pane

0x7cb1,	// (0x00012b0a) data_form_pane

0x7cc7,	// (0x00012b20) form_field_data_pane_t1

0x7cdf,	// (0x00012b38) input_focus_pane

0x7ced,	// (0x00012b46) data_form_wide_pane

0x7d19,	// (0x00012b72) form_field_data_wide_pane_t1

0x74d5,	// (0x0001232e) input_focus_pane_cp6

0x7d38,	// (0x00012b91) form_field_popup_pane_t1

0x7cdf,	// (0x00012b38) input_focus_pane_cp7

0x7d50,	// (0x00012ba9) list_form_pane

0x7d64,	// (0x00012bbd) form_field_popup_wide_pane_t1

0x7cdf,	// (0x00012b38) input_focus_pane_cp8

0x7d79,	// (0x00012bd2) list_form_wide_pane

0x7d90,	// (0x00012be9) form_field_slider_pane_t1_ParamLimits

0x7d90,	// (0x00012be9) form_field_slider_pane_t1

0x7da2,	// (0x00012bfb) form_field_slider_pane_t2_ParamLimits

0x7da2,	// (0x00012bfb) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a4d6) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a4d6) form_field_slider_pane_t

0x7170,	// (0x00011fc9) input_focus_pane_cp9_ParamLimits

0x7170,	// (0x00011fc9) input_focus_pane_cp9

0x7db4,	// (0x00012c0d) slider_cont_pane_ParamLimits

0x7db4,	// (0x00012c0d) slider_cont_pane

0x7dc8,	// (0x00012c21) form_field_slider_wide_pane_t1_ParamLimits

0x7dc8,	// (0x00012c21) form_field_slider_wide_pane_t1

0x7dda,	// (0x00012c33) form_field_slider_wide_pane_t2_ParamLimits

0x7dda,	// (0x00012c33) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a4db) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a4db) form_field_slider_wide_pane_t

0x7170,	// (0x00011fc9) input_focus_pane_cp10_ParamLimits

0x7170,	// (0x00011fc9) input_focus_pane_cp10

0x7dec,	// (0x00012c45) slider_cont_pane_cp1_ParamLimits

0x7dec,	// (0x00012c45) slider_cont_pane_cp1

0x7e00,	// (0x00012c59) slider_form_pane_cp

0x7e08,	// (0x00012c61) input_focus_pane_g1

0x7e10,	// (0x00012c69) input_focus_pane_g2

0x7e18,	// (0x00012c71) input_focus_pane_g3

0x7e20,	// (0x00012c79) input_focus_pane_g4

0x7e28,	// (0x00012c81) input_focus_pane_g5

0x7e30,	// (0x00012c89) input_focus_pane_g6

0x7e38,	// (0x00012c91) input_focus_pane_g7

0x7e40,	// (0x00012c99) input_focus_pane_g8

0x7e48,	// (0x00012ca1) input_focus_pane_g9

0x6df1,	// (0x00011c4a) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a4e0) input_focus_pane_g

0x9b0b,	// (0x00014964) wait_border_pane_g3_copy1

0x7e50,	// (0x00012ca9) data_form_pane_t1

0x6df1,	// (0x00011c4a) wait_anim_pane_g1_copy1

0xaa8b,	// (0x000158e4) data_form_wide_pane_t1

0x7e6b,	// (0x00012cc4) list_form_graphic_pane_cp_ParamLimits

0x7e6b,	// (0x00012cc4) list_form_graphic_pane_cp

0xaa60,	// (0x000158b9) slider_form_pane_g1

0xaa69,	// (0x000158c2) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001a7e3) slider_form_pane_g

0x7e84,	// (0x00012cdd) list_form_graphic_pane_ParamLimits

0x7e84,	// (0x00012cdd) list_form_graphic_pane

0x7ea0,	// (0x00012cf9) list_form_graphic_pane_g1

0x7ea8,	// (0x00012d01) list_form_graphic_pane_t1_ParamLimits

0x7ea8,	// (0x00012d01) list_form_graphic_pane_t1

0x6edb,	// (0x00011d34) list_highlight_pane_cp5_ParamLimits

0x6edb,	// (0x00011d34) list_highlight_pane_cp5

0x7ebd,	// (0x00012d16) find_pane_g1

0x7ec6,	// (0x00012d1f) input_find_pane

0x7ecf,	// (0x00012d28) input_find_pane_g1_ParamLimits

0x7ecf,	// (0x00012d28) input_find_pane_g1

0x7edb,	// (0x00012d34) input_find_pane_t1_ParamLimits

0x7edb,	// (0x00012d34) input_find_pane_t1

0x7ef0,	// (0x00012d49) input_find_pane_t2_ParamLimits

0x7ef0,	// (0x00012d49) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a4f5) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a4f5) input_find_pane_t

0x7f05,	// (0x00012d5e) input_focus_pane_cp5_ParamLimits

0x7f05,	// (0x00012d5e) input_focus_pane_cp5

0x7f1f,	// (0x00012d78) bg_popup_window_pane_cp2_ParamLimits

0x7f1f,	// (0x00012d78) bg_popup_window_pane_cp2

0x7f2c,	// (0x00012d85) listscroll_menu_pane_ParamLimits

0x7f2c,	// (0x00012d85) listscroll_menu_pane

0x7f38,	// (0x00012d91) popup_submenu_window_ParamLimits

0x7f38,	// (0x00012d91) popup_submenu_window

0x7f64,	// (0x00012dbd) find_popup_pane_g1

0x7f6c,	// (0x00012dc5) input_popup_find_pane_cp

0x7f05,	// (0x00012d5e) input_focus_pane_cp4_ParamLimits

0x7f05,	// (0x00012d5e) input_focus_pane_cp4

0x7f82,	// (0x00012ddb) input_popup_find_pane_t1_ParamLimits

0x7f82,	// (0x00012ddb) input_popup_find_pane_t1

0x6dfb,	// (0x00011c54) bg_popup_sub_pane_cp

0x7fb0,	// (0x00012e09) listscroll_popup_sub_pane

0x7fb8,	// (0x00012e11) list_submenu_pane_ParamLimits

0x7fb8,	// (0x00012e11) list_submenu_pane

0x7fc9,	// (0x00012e22) scroll_pane_cp4

0x7fd1,	// (0x00012e2a) list_single_popup_submenu_pane_ParamLimits

0x7fd1,	// (0x00012e2a) list_single_popup_submenu_pane

0x7fe5,	// (0x00012e3e) list_single_popup_submenu_pane_g1

0x7fed,	// (0x00012e46) list_single_popup_submenu_pane_t1_ParamLimits

0x7fed,	// (0x00012e46) list_single_popup_submenu_pane_t1

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp1_ParamLimits

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp1

0x8002,	// (0x00012e5b) tabs_2_active_pane_g1

0x800a,	// (0x00012e63) tabs_2_active_pane_t1

0x6edb,	// (0x00011d34) bg_passive_tab_pane_cp1_ParamLimits

0x6edb,	// (0x00011d34) bg_passive_tab_pane_cp1

0x8002,	// (0x00012e5b) tabs_2_passive_pane_g1

0x800a,	// (0x00012e63) tabs_2_passive_pane_t1

0x801c,	// (0x00012e75) bg_active_tab_pane_cp4

0x802a,	// (0x00012e83) tabs_2_long_active_pane_t1

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp4

0x59c9,	// (0x00010822) list_single_midp_graphic_pane_g4_ParamLimits

0x801c,	// (0x00012e75) bg_active_tab_pane_cp5

0x8049,	// (0x00012ea2) tabs_3_long_active_pane_t1

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp5

0x59c9,	// (0x00010822) list_single_midp_graphic_pane_g4

0x6edb,	// (0x00011d34) bg_popup_window_pane_cp13_ParamLimits

0x6edb,	// (0x00011d34) bg_popup_window_pane_cp13

0x8064,	// (0x00012ebd) listscroll_popup_fast_pane_ParamLimits

0x8064,	// (0x00012ebd) listscroll_popup_fast_pane

0x8073,	// (0x00012ecc) grid_popup_fast_pane_ParamLimits

0x8073,	// (0x00012ecc) grid_popup_fast_pane

0x8085,	// (0x00012ede) scroll_pane_cp9_ParamLimits

0x8085,	// (0x00012ede) scroll_pane_cp9

0xc96e,	// (0x000177c7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc96e,	// (0x000177c7) list_single_graphic_hl_pane_t1_cp2

0x80a9,	// (0x00012f02) input_focus_pane_cp20_ParamLimits

0x80a9,	// (0x00012f02) input_focus_pane_cp20

0x80b7,	// (0x00012f10) query_popup_data_pane_t1_ParamLimits

0x80b7,	// (0x00012f10) query_popup_data_pane_t1

0x80ca,	// (0x00012f23) query_popup_data_pane_t2_ParamLimits

0x80ca,	// (0x00012f23) query_popup_data_pane_t2

0x8110,	// (0x00012f69) query_popup_data_pane_t3_ParamLimits

0x8110,	// (0x00012f69) query_popup_data_pane_t3

0x8151,	// (0x00012faa) query_popup_data_pane_t4_ParamLimits

0x8151,	// (0x00012faa) query_popup_data_pane_t4

0x818d,	// (0x00012fe6) query_popup_data_pane_t5_ParamLimits

0x818d,	// (0x00012fe6) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a4fa) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a4fa) query_popup_data_pane_t

0x7e08,	// (0x00012c61) bg_set_opt_pane_g1

0x7e10,	// (0x00012c69) bg_set_opt_pane_g2

0x7e18,	// (0x00012c71) bg_set_opt_pane_g3

0x7e20,	// (0x00012c79) bg_set_opt_pane_g4

0x7e28,	// (0x00012c81) bg_set_opt_pane_g5

0x7e30,	// (0x00012c89) bg_set_opt_pane_g6

0x7e38,	// (0x00012c91) bg_set_opt_pane_g7

0x7e40,	// (0x00012c99) bg_set_opt_pane_g8

0x7e48,	// (0x00012ca1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a505) bg_set_opt_pane_g

0x4fe3,	// (0x0000fe3c) control_top_pane_stacon_ParamLimits

0x4fe3,	// (0x0000fe3c) control_top_pane_stacon

0x5036,	// (0x0000fe8f) signal_pane_stacon_ParamLimits

0x5036,	// (0x0000fe8f) signal_pane_stacon

0x880c,	// (0x00013665) stacon_top_pane_g1_ParamLimits

0x880c,	// (0x00013665) stacon_top_pane_g1

0x505b,	// (0x0000feb4) title_pane_stacon_ParamLimits

0x505b,	// (0x0000feb4) title_pane_stacon

0x5085,	// (0x0000fede) uni_indicator_pane_stacon_ParamLimits

0x5085,	// (0x0000fede) uni_indicator_pane_stacon

0x509a,	// (0x0000fef3) battery_pane_stacon_ParamLimits

0x509a,	// (0x0000fef3) battery_pane_stacon

0x50de,	// (0x0000ff37) control_bottom_pane_stacon_ParamLimits

0x50de,	// (0x0000ff37) control_bottom_pane_stacon

0x5101,	// (0x0000ff5a) navi_pane_stacon_ParamLimits

0x5101,	// (0x0000ff5a) navi_pane_stacon

0x882e,	// (0x00013687) stacon_bottom_pane_g1_ParamLimits

0x882e,	// (0x00013687) stacon_bottom_pane_g1

0x4d46,	// (0x0000fb9f) aid_levels_signal_lsc_ParamLimits

0x4d46,	// (0x0000fb9f) aid_levels_signal_lsc

0x4d5c,	// (0x0000fbb5) signal_pane_stacon_g1_ParamLimits

0x4d5c,	// (0x0000fbb5) signal_pane_stacon_g1

0x4d70,	// (0x0000fbc9) signal_pane_stacon_g2_ParamLimits

0x4d70,	// (0x0000fbc9) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a518) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a518) signal_pane_stacon_g

0x4da5,	// (0x0000fbfe) title_pane_stacon_t1_ParamLimits

0x4da5,	// (0x0000fbfe) title_pane_stacon_t1

0x81d1,	// (0x0001302a) uni_indicator_pane_stacon_g1

0x81db,	// (0x00013034) uni_indicator_pane_stacon_g2

0x81e5,	// (0x0001303e) uni_indicator_pane_stacon_g3

0x81ef,	// (0x00013048) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a524) uni_indicator_pane_stacon_g

0x4dca,	// (0x0000fc23) control_top_pane_stacon_g1

0x4dd2,	// (0x0000fc2b) control_top_pane_stacon_t1_ParamLimits

0x4dd2,	// (0x0000fc2b) control_top_pane_stacon_t1

0x4e09,	// (0x0000fc62) aid_levels_battery_lsc_ParamLimits

0x4e09,	// (0x0000fc62) aid_levels_battery_lsc

0x4e20,	// (0x0000fc79) battery_pane_stacon_g1_ParamLimits

0x4e20,	// (0x0000fc79) battery_pane_stacon_g1

0x4e33,	// (0x0000fc8c) battery_pane_stacon_g2_ParamLimits

0x4e33,	// (0x0000fc8c) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a52d) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a52d) battery_pane_stacon_g

0x4e71,	// (0x0000fcca) navi_icon_pane_stacon

0x4e85,	// (0x0000fcde) navi_navi_pane_stacon

0x4e71,	// (0x0000fcca) navi_text_pane_stacon

0x4dca,	// (0x0000fc23) control_bottom_pane_stacon_g1

0x4e99,	// (0x0000fcf2) control_bottom_pane_stacon_t1_ParamLimits

0x4e99,	// (0x0000fcf2) control_bottom_pane_stacon_t1

0x8213,	// (0x0001306c) grid_app_pane_ParamLimits

0x8213,	// (0x0001306c) grid_app_pane

0x8237,	// (0x00013090) scroll_pane_cp15_ParamLimits

0x8237,	// (0x00013090) scroll_pane_cp15

0x824a,	// (0x000130a3) cell_app_pane_ParamLimits

0x824a,	// (0x000130a3) cell_app_pane

0x826e,	// (0x000130c7) cell_app_pane_g1_ParamLimits

0x826e,	// (0x000130c7) cell_app_pane_g1

0x8292,	// (0x000130eb) cell_app_pane_g2_ParamLimits

0x8292,	// (0x000130eb) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a532) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a532) cell_app_pane_g

0x829e,	// (0x000130f7) cell_app_pane_t1_ParamLimits

0x829e,	// (0x000130f7) cell_app_pane_t1

0x82b5,	// (0x0001310e) grid_highlight_pane_ParamLimits

0x82b5,	// (0x0001310e) grid_highlight_pane

0x7e08,	// (0x00012c61) cell_highlight_pane_g1

0x7e10,	// (0x00012c69) cell_highlight_pane_g2

0x7e18,	// (0x00012c71) cell_highlight_pane_g3

0x7e20,	// (0x00012c79) cell_highlight_pane_g4

0x7e28,	// (0x00012c81) cell_highlight_pane_g5

0x7e30,	// (0x00012c89) cell_highlight_pane_g6

0x7e38,	// (0x00012c91) cell_highlight_pane_g7

0x7e40,	// (0x00012c99) cell_highlight_pane_g8

0x7e48,	// (0x00012ca1) cell_highlight_pane_g9

0x6df1,	// (0x00011c4a) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a4e0) cell_highlight_pane_g

0x82c6,	// (0x0001311f) bg_scroll_pane

0x4ee3,	// (0x0000fd3c) scroll_handle_pane

0x830d,	// (0x00013166) scroll_bg_pane_g1

0x8322,	// (0x0001317b) scroll_bg_pane_g2

0x833a,	// (0x00013193) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a537) scroll_bg_pane_g

0x834f,	// (0x000131a8) scroll_handle_focus_pane_ParamLimits

0x834f,	// (0x000131a8) scroll_handle_focus_pane

0x830d,	// (0x00013166) scroll_handle_pane_g1

0x835c,	// (0x000131b5) scroll_handle_pane_g2

0x833a,	// (0x00013193) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a53e) scroll_handle_pane_g

0x7f05,	// (0x00012d5e) bg_popup_sub_pane_cp21_ParamLimits

0x7f05,	// (0x00012d5e) bg_popup_sub_pane_cp21

0x8370,	// (0x000131c9) popup_fep_japan_predictive_window_t1_ParamLimits

0x8370,	// (0x000131c9) popup_fep_japan_predictive_window_t1

0x838a,	// (0x000131e3) popup_fep_japan_predictive_window_t2_ParamLimits

0x838a,	// (0x000131e3) popup_fep_japan_predictive_window_t2

0x83bd,	// (0x00013216) popup_fep_japan_predictive_window_t3_ParamLimits

0x83bd,	// (0x00013216) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a545) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a545) popup_fep_japan_predictive_window_t

0x6dfb,	// (0x00011c54) bg_popup_sub_pane_cp23

0x83f4,	// (0x0001324d) listscroll_japin_cand_pane

0x83fc,	// (0x00013255) popup_fep_japan_candidate_window_t1

0x840a,	// (0x00013263) candidate_pane_ParamLimits

0x840a,	// (0x00013263) candidate_pane

0x841c,	// (0x00013275) scroll_pane_cp30

0x8424,	// (0x0001327d) list_single_popup_jap_candidate_pane_ParamLimits

0x8424,	// (0x0001327d) list_single_popup_jap_candidate_pane

0x6dfb,	// (0x00011c54) list_highlight_pane_cp30

0x8439,	// (0x00013292) list_single_popup_jap_candidate_pane_t1

0x8448,	// (0x000132a1) level_1_signal

0x845a,	// (0x000132b3) level_2_signal

0x846d,	// (0x000132c6) level_3_signal

0x8480,	// (0x000132d9) level_4_signal

0x8493,	// (0x000132ec) level_5_signal

0x84a6,	// (0x000132ff) level_6_signal

0x84b9,	// (0x00013312) level_7_signal

0x8448,	// (0x000132a1) level_1_battery

0x845a,	// (0x000132b3) level_2_battery

0x846d,	// (0x000132c6) level_3_battery

0x8480,	// (0x000132d9) level_4_battery

0x8493,	// (0x000132ec) level_5_battery

0x84a6,	// (0x000132ff) level_6_battery

0x84b9,	// (0x00013312) level_7_battery

0x84e4,	// (0x0001333d) list_menu_pane_ParamLimits

0x84e4,	// (0x0001333d) list_menu_pane

0x84fa,	// (0x00013353) scroll_pane_cp25_ParamLimits

0x84fa,	// (0x00013353) scroll_pane_cp25

0x8513,	// (0x0001336c) list_double2_graphic_pane_cp2_ParamLimits

0x8513,	// (0x0001336c) list_double2_graphic_pane_cp2

0x8513,	// (0x0001336c) list_double2_large_graphic_pane_cp2_ParamLimits

0x8513,	// (0x0001336c) list_double2_large_graphic_pane_cp2

0x8513,	// (0x0001336c) list_double2_pane_cp2_ParamLimits

0x8513,	// (0x0001336c) list_double2_pane_cp2

0x8513,	// (0x0001336c) list_double_graphic_pane_cp2_ParamLimits

0x8513,	// (0x0001336c) list_double_graphic_pane_cp2

0x8513,	// (0x0001336c) list_double_large_graphic_pane_cp2_ParamLimits

0x8513,	// (0x0001336c) list_double_large_graphic_pane_cp2

0x8513,	// (0x0001336c) list_double_number_pane_cp2_ParamLimits

0x8513,	// (0x0001336c) list_double_number_pane_cp2

0x8513,	// (0x0001336c) list_double_pane_cp2_ParamLimits

0x8513,	// (0x0001336c) list_double_pane_cp2

0x8537,	// (0x00013390) list_single_2graphic_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_2graphic_pane_cp2

0x8537,	// (0x00013390) list_single_graphic_heading_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_graphic_heading_pane_cp2

0x8537,	// (0x00013390) list_single_graphic_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_graphic_pane_cp2

0x8537,	// (0x00013390) list_single_heading_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_heading_pane_cp2

0x8550,	// (0x000133a9) list_single_large_graphic_pane_cp2_ParamLimits

0x8550,	// (0x000133a9) list_single_large_graphic_pane_cp2

0x8537,	// (0x00013390) list_single_number_heading_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_number_heading_pane_cp2

0x8537,	// (0x00013390) list_single_number_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_number_pane_cp2

0x8537,	// (0x00013390) list_single_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_pane_cp2

0x85cc,	// (0x00013425) bg_popup_sub_pane_cp22

0x4f95,	// (0x0000fdee) popup_side_volume_key_window_g1

0x4fbf,	// (0x0000fe18) popup_side_volume_key_window_t1

0x4fdb,	// (0x0000fe34) volume_small_pane_cp1

0x7170,	// (0x00011fc9) bg_popup_sub_pane_cp24_ParamLimits

0x7170,	// (0x00011fc9) bg_popup_sub_pane_cp24

0x85e2,	// (0x0001343b) fep_china_uni_candidate_pane_ParamLimits

0x85e2,	// (0x0001343b) fep_china_uni_candidate_pane

0x85f6,	// (0x0001344f) fep_china_uni_entry_pane

0x8606,	// (0x0001345f) popup_fep_china_uni_window_g1

0x8622,	// (0x0001347b) fep_china_uni_entry_pane_g1

0x862a,	// (0x00013483) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a576) fep_china_uni_entry_pane_g

0x8632,	// (0x0001348b) fep_entry_item_pane

0x863c,	// (0x00013495) fep_candidate_item_pane

0x8644,	// (0x0001349d) fep_china_uni_candidate_pane_g1

0x864c,	// (0x000134a5) fep_china_uni_candidate_pane_g2

0x8654,	// (0x000134ad) fep_china_uni_candidate_pane_g3

0x865c,	// (0x000134b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a57b) fep_china_uni_candidate_pane_g

0x6df1,	// (0x00011c4a) fep_entry_item_pane_g1

0x8664,	// (0x000134bd) fep_entry_item_pane_t1_ParamLimits

0x8664,	// (0x000134bd) fep_entry_item_pane_t1

0x867a,	// (0x000134d3) fep_candidate_item_pane_t1_ParamLimits

0x867a,	// (0x000134d3) fep_candidate_item_pane_t1

0x868f,	// (0x000134e8) fep_candidate_item_pane_t2_ParamLimits

0x868f,	// (0x000134e8) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a584) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a584) fep_candidate_item_pane_t

0x6edb,	// (0x00011d34) list_highlight_pane_cp31_ParamLimits

0x6edb,	// (0x00011d34) list_highlight_pane_cp31

0x86a1,	// (0x000134fa) level_1_signal_lsc

0x86aa,	// (0x00013503) level_2_signal_lsc

0x86b3,	// (0x0001350c) level_3_signal_lsc

0x86bc,	// (0x00013515) level_4_signal_lsc

0x86c5,	// (0x0001351e) level_5_signal_lsc

0x86ce,	// (0x00013527) level_6_signal_lsc

0x86d7,	// (0x00013530) level_7_signal_lsc

0x86d7,	// (0x00013530) level_1_battery_lsc

0x86e0,	// (0x00013539) level_2_battery_lsc

0x86e9,	// (0x00013542) level_3_battery_lsc

0x86f2,	// (0x0001354b) level_4_battery_lsc

0x86fb,	// (0x00013554) level_5_battery_lsc

0x8704,	// (0x0001355d) level_6_battery_lsc

0x86a1,	// (0x000134fa) level_7_battery_lsc

0x870d,	// (0x00013566) scroll_handle_focus_pane_g1

0x8716,	// (0x0001356f) scroll_handle_focus_pane_g2

0x871f,	// (0x00013578) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a589) scroll_handle_focus_pane_g

0x8728,	// (0x00013581) list_single_2graphic_pane_g1_ParamLimits

0x8728,	// (0x00013581) list_single_2graphic_pane_g1

0x779d,	// (0x000125f6) list_single_2graphic_pane_g2_ParamLimits

0x779d,	// (0x000125f6) list_single_2graphic_pane_g2

0x7723,	// (0x0001257c) list_single_2graphic_pane_g3_ParamLimits

0x7723,	// (0x0001257c) list_single_2graphic_pane_g3

0x8734,	// (0x0001358d) list_single_2graphic_pane_g4_ParamLimits

0x8734,	// (0x0001358d) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a590) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a590) list_single_2graphic_pane_g

0x8745,	// (0x0001359e) list_single_2graphic_pane_t1_ParamLimits

0x8745,	// (0x0001359e) list_single_2graphic_pane_t1

0x8773,	// (0x000135cc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8773,	// (0x000135cc) list_double2_graphic_large_graphic_pane_g1

0x7842,	// (0x0001269b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7842,	// (0x0001269b) list_double2_graphic_large_graphic_pane_g2

0x7853,	// (0x000126ac) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7853,	// (0x000126ac) list_double2_graphic_large_graphic_pane_g3

0x8783,	// (0x000135dc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8783,	// (0x000135dc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a599) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a599) list_double2_graphic_large_graphic_pane_g

0x878f,	// (0x000135e8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x878f,	// (0x000135e8) list_double2_graphic_large_graphic_pane_t1

0x87a5,	// (0x000135fe) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x87a5,	// (0x000135fe) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a5a2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a5a2) list_double2_graphic_large_graphic_pane_t

0x88f6,	// (0x0001374f) popup_fast_swap_window_ParamLimits

0x88f6,	// (0x0001374f) popup_fast_swap_window

0x8912,	// (0x0001376b) popup_side_volume_key_window

0x892e,	// (0x00013787) stacon_top_pane

0x8938,	// (0x00013791) status_pane_ParamLimits

0x8938,	// (0x00013791) status_pane

0x8946,	// (0x0001379f) status_small_pane

0x6dfb,	// (0x00011c54) control_pane

0x6dfb,	// (0x00011c54) stacon_bottom_pane

0x7bf0,	// (0x00012a49) scroll_pane_cp121

0x7be7,	// (0x00012a40) set_content_pane

0x87b7,	// (0x00013610) bg_active_tab_pane_g1_cp1

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp1

0x87c9,	// (0x00013622) bg_active_tab_pane_g3_cp1

0x87b7,	// (0x00013610) bg_passive_tab_pane_g1_cp1

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp1

0x87c9,	// (0x00013622) bg_passive_tab_pane_g3_cp1

0x87d2,	// (0x0001362b) bg_active_tab_pane_g1_cp2

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp2

0x87db,	// (0x00013634) bg_active_tab_pane_g3_cp2

0x87d2,	// (0x0001362b) bg_passive_tab_pane_g1_cp2

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp2

0x87db,	// (0x00013634) bg_passive_tab_pane_g3_cp2

0x87e4,	// (0x0001363d) bg_active_tab_pane_g1_cp3

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp3

0x87ed,	// (0x00013646) bg_active_tab_pane_g3_cp3

0x87e4,	// (0x0001363d) bg_passive_tab_pane_g1_cp3

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp3

0x87ed,	// (0x00013646) bg_passive_tab_pane_g3_cp3

0x87f6,	// (0x0001364f) bg_active_tab_pane_g1_cp4

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp4

0x8801,	// (0x0001365a) bg_active_tab_pane_g3_cp4

0x87f6,	// (0x0001364f) bg_passive_tab_pane_g1_cp4

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp4

0x8801,	// (0x0001365a) bg_passive_tab_pane_g3_cp4

0x884a,	// (0x000136a3) bg_active_tab_pane_g1_cp5

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp5

0x8853,	// (0x000136ac) bg_active_tab_pane_g3_cp5

0x884a,	// (0x000136a3) bg_passive_tab_pane_g1_cp5

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp5

0x8853,	// (0x000136ac) bg_passive_tab_pane_g3_cp5

0x885c,	// (0x000136b5) list_set_graphic_pane_ParamLimits

0x885c,	// (0x000136b5) list_set_graphic_pane

0x6dfb,	// (0x00011c54) bg_set_opt_pane_cp4

0x8879,	// (0x000136d2) list_set_graphic_pane_g1_ParamLimits

0x8879,	// (0x000136d2) list_set_graphic_pane_g1

0x8885,	// (0x000136de) list_set_graphic_pane_g2_ParamLimits

0x8885,	// (0x000136de) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a5a7) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a5a7) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001a928) volume_small_pane_cp_g

0x88a9,	// (0x00013702) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x88a9,	// (0x00013702) list_double2_large_graphic_pane_g1_cp2

0x88b5,	// (0x0001370e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x88b5,	// (0x0001370e) list_double2_large_graphic_pane_g2_cp2

0x88c6,	// (0x0001371f) list_double2_large_graphic_pane_g3_cp2

0x88ce,	// (0x00013727) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x88ce,	// (0x00013727) list_double2_large_graphic_pane_t1_cp2

0x88e4,	// (0x0001373d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x88e4,	// (0x0001373d) list_double2_large_graphic_pane_t2_cp2

0xa5ea,	// (0x00015443) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa5ea,	// (0x00015443) list_double_large_graphic_pane_g1_cp2

0xa5fb,	// (0x00015454) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa5fb,	// (0x00015454) list_double_large_graphic_pane_g2_cp2

0x8a5f,	// (0x000138b8) list_double_large_graphic_pane_g3_cp2

0xa60c,	// (0x00015465) list_double_large_graphic_pane_g4_cp

0xa614,	// (0x0001546d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa614,	// (0x0001546d) list_double_large_graphic_pane_t1_cp2

0xa62b,	// (0x00015484) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa62b,	// (0x00015484) list_double_large_graphic_pane_t2_cp2

0x8951,	// (0x000137aa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8951,	// (0x000137aa) list_double2_graphic_pane_g1_cp2

0x895f,	// (0x000137b8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x895f,	// (0x000137b8) list_double2_graphic_pane_g2_cp2

0x8970,	// (0x000137c9) list_double2_graphic_pane_g3_cp2

0x897a,	// (0x000137d3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x897a,	// (0x000137d3) list_double2_graphic_pane_t1_cp2

0x8990,	// (0x000137e9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8990,	// (0x000137e9) list_double2_graphic_pane_t2_cp2

0x89a2,	// (0x000137fb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x89a2,	// (0x000137fb) list_single_number_heading_pane_g1_cp2

0x89ae,	// (0x00013807) list_single_number_heading_pane_g2_cp2

0x89b6,	// (0x0001380f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x89b6,	// (0x0001380f) list_single_number_heading_pane_t1_cp2

0x89cc,	// (0x00013825) list_single_number_heading_pane_t2_cp2_ParamLimits

0x89cc,	// (0x00013825) list_single_number_heading_pane_t2_cp2

0x89de,	// (0x00013837) list_single_number_heading_pane_t3_cp2_ParamLimits

0x89de,	// (0x00013837) list_single_number_heading_pane_t3_cp2

0x89a2,	// (0x000137fb) list_single_heading_pane_g1_cp2_ParamLimits

0x89a2,	// (0x000137fb) list_single_heading_pane_g1_cp2

0x89ae,	// (0x00013807) list_single_heading_pane_g2_cp2

0x89b6,	// (0x0001380f) list_single_heading_pane_t1_cp2_ParamLimits

0x89b6,	// (0x0001380f) list_single_heading_pane_t1_cp2

0xa3f2,	// (0x0001524b) list_single_heading_pane_t2_cp2_ParamLimits

0xa3f2,	// (0x0001524b) list_single_heading_pane_t2_cp2

0xa33a,	// (0x00015193) list_double_graphic_pane_g1_cp2_ParamLimits

0xa33a,	// (0x00015193) list_double_graphic_pane_g1_cp2

0xa346,	// (0x0001519f) list_double_graphic_pane_g2_cp2_ParamLimits

0xa346,	// (0x0001519f) list_double_graphic_pane_g2_cp2

0xa355,	// (0x000151ae) list_double_graphic_pane_g3_cp2

0xa35d,	// (0x000151b6) list_double_graphic_pane_t1_cp2_ParamLimits

0xa35d,	// (0x000151b6) list_double_graphic_pane_t1_cp2

0xa373,	// (0x000151cc) list_double_graphic_pane_t2_cp2_ParamLimits

0xa373,	// (0x000151cc) list_double_graphic_pane_t2_cp2

0x8a53,	// (0x000138ac) list_double_number_pane_g1_cp2_ParamLimits

0x8a53,	// (0x000138ac) list_double_number_pane_g1_cp2

0x8a5f,	// (0x000138b8) list_double_number_pane_g2_cp2

0xa2fe,	// (0x00015157) list_double_number_pane_t1_cp2_ParamLimits

0xa2fe,	// (0x00015157) list_double_number_pane_t1_cp2

0xa312,	// (0x0001516b) list_double_number_pane_t2_cp2_ParamLimits

0xa312,	// (0x0001516b) list_double_number_pane_t2_cp2

0xa328,	// (0x00015181) list_double_number_pane_t3_cp2_ParamLimits

0xa328,	// (0x00015181) list_double_number_pane_t3_cp2

0xa1e7,	// (0x00015040) list_single_graphic_pane_g1_cp2_ParamLimits

0xa1e7,	// (0x00015040) list_single_graphic_pane_g1_cp2

0x8ab7,	// (0x00013910) list_single_graphic_pane_g2_cp2_ParamLimits

0x8ab7,	// (0x00013910) list_single_graphic_pane_g2_cp2

0x8ac3,	// (0x0001391c) list_single_graphic_pane_g3_cp2

0xa1bd,	// (0x00015016) list_single_graphic_pane_t1_cp2_ParamLimits

0xa1bd,	// (0x00015016) list_single_graphic_pane_t1_cp2

0x8ab7,	// (0x00013910) list_single_number_pane_g1_cp2_ParamLimits

0x8ab7,	// (0x00013910) list_single_number_pane_g1_cp2

0x8ac3,	// (0x0001391c) list_single_number_pane_g2_cp2

0xa1bd,	// (0x00015016) list_single_number_pane_t1_cp2_ParamLimits

0xa1bd,	// (0x00015016) list_single_number_pane_t1_cp2

0xa1d3,	// (0x0001502c) list_single_number_pane_t2_cp2_ParamLimits

0xa1d3,	// (0x0001502c) list_single_number_pane_t2_cp2

0x88b5,	// (0x0001370e) list_double2_pane_g1_cp2_ParamLimits

0x88b5,	// (0x0001370e) list_double2_pane_g1_cp2

0x88c6,	// (0x0001371f) list_double2_pane_g2_cp2

0x8a2b,	// (0x00013884) list_double2_pane_t1_cp2_ParamLimits

0x8a2b,	// (0x00013884) list_double2_pane_t1_cp2

0x8a41,	// (0x0001389a) list_double2_pane_t2_cp2_ParamLimits

0x8a41,	// (0x0001389a) list_double2_pane_t2_cp2

0x8a53,	// (0x000138ac) list_double_pane_g1_cp2_ParamLimits

0x8a53,	// (0x000138ac) list_double_pane_g1_cp2

0x8a5f,	// (0x000138b8) list_double_pane_g2_cp2

0x8a67,	// (0x000138c0) list_double_pane_t1_cp2_ParamLimits

0x8a67,	// (0x000138c0) list_double_pane_t1_cp2

0x8a7d,	// (0x000138d6) list_double_pane_t2_cp2_ParamLimits

0x8a7d,	// (0x000138d6) list_double_pane_t2_cp2

0x8aa7,	// (0x00013900) list_single_pane_cp2_g3

0x8ab7,	// (0x00013910) list_single_pane_g1_cp2_ParamLimits

0x8ab7,	// (0x00013910) list_single_pane_g1_cp2

0x8ac3,	// (0x0001391c) list_single_pane_g2_cp2

0x8acb,	// (0x00013924) list_single_pane_t1_cp2_ParamLimits

0x8acb,	// (0x00013924) list_single_pane_t1_cp2

0x8ae3,	// (0x0001393c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8ae3,	// (0x0001393c) list_single_large_graphic_pane_g1_cp2

0x8aef,	// (0x00013948) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8aef,	// (0x00013948) list_single_large_graphic_pane_g2_cp2

0x8afb,	// (0x00013954) list_single_large_graphic_pane_g3_cp2

0x8b03,	// (0x0001395c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b03,	// (0x0001395c) list_single_large_graphic_pane_g4_cp1

0x8b1d,	// (0x00013976) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8b1d,	// (0x00013976) list_single_large_graphic_pane_t1_cp2

0xa189,	// (0x00014fe2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa189,	// (0x00014fe2) list_single_graphic_heading_pane_g1_cp2

0xa14a,	// (0x00014fa3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa14a,	// (0x00014fa3) list_single_graphic_heading_pane_g4_cp2

0x8ac3,	// (0x0001391c) list_single_graphic_heading_pane_g5_cp2

0xa195,	// (0x00014fee) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa195,	// (0x00014fee) list_single_graphic_heading_pane_t1_cp2

0xa1ab,	// (0x00015004) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa1ab,	// (0x00015004) list_single_graphic_heading_pane_t2_cp2

0xa13e,	// (0x00014f97) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa13e,	// (0x00014f97) list_single_2graphic_pane_g1_cp2

0xa14a,	// (0x00014fa3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa14a,	// (0x00014fa3) list_single_2graphic_pane_g2_cp2

0x8ac3,	// (0x0001391c) list_single_2graphic_pane_g3_cp2

0xa167,	// (0x00014fc0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa167,	// (0x00014fc0) list_single_2graphic_pane_g4_cp2

0xa173,	// (0x00014fcc) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa173,	// (0x00014fcc) list_single_2graphic_pane_t1_cp2

0x6df1,	// (0x00011c4a) list_highlight_pane_g10_cp1

0x9d16,	// (0x00014b6f) list_highlight_pane_g1_cp1

0x9d1e,	// (0x00014b77) list_highlight_pane_g2_cp1

0x9d26,	// (0x00014b7f) list_highlight_pane_g3_cp1

0x9d2e,	// (0x00014b87) list_highlight_pane_g4_cp1

0x9d36,	// (0x00014b8f) list_highlight_pane_g5_cp1

0x9d3e,	// (0x00014b97) list_highlight_pane_g6_cp1

0x9d46,	// (0x00014b9f) list_highlight_pane_g7_cp1

0x9d4e,	// (0x00014ba7) list_highlight_pane_g8_cp1

0x9d56,	// (0x00014baf) list_highlight_pane_g9_cp1

0x9c36,	// (0x00014a8f) form_field_slider_pane_t3

0x9c44,	// (0x00014a9d) form_field_slider_pane_t4

0x9c52,	// (0x00014aab) slider_form_pane_ParamLimits

0x9c52,	// (0x00014aab) slider_form_pane

0x6dfb,	// (0x00011c54) control_abbreviations

0x6dfb,	// (0x00011c54) control_conventions

0x6dfb,	// (0x00011c54) control_definitions

0x6dfb,	// (0x00011c54) format_table_attribute

0xa43c,	// (0x00015295) bg_popup_preview_window_pane_g9

0x6dfb,	// (0x00011c54) format_table_data2

0x6dfb,	// (0x00011c54) format_table_data3

0x6dfb,	// (0x00011c54) format_table_data_example

0x0008,

0x6dfb,	// (0x00011c54) intro_purpose

0xf8ea,	// (0x0001a743) bg_popup_preview_window_pane_g

0x6dfb,	// (0x00011c54) texts_category

0x6dfb,	// (0x00011c54) texts_graphics

0x8b33,	// (0x0001398c) text_digital

0x8b42,	// (0x0001399b) text_primary

0x8b51,	// (0x000139aa) text_primary_small

0x8b60,	// (0x000139b9) text_secondary

0x8b6f,	// (0x000139c8) text_title

0xac68,	// (0x00015ac1) bg_passive_tab_pane_g1_cp3_srt

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp3_srt

0xac71,	// (0x00015aca) bg_passive_tab_pane_g3_cp3_srt

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp3_srt_ParamLimits

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp3_srt

0xac7a,	// (0x00015ad3) tabs_4_active_pane_srt_g1

0xac82,	// (0x00015adb) tabs_4_active_pane_srt_t1_ParamLimits

0xac82,	// (0x00015adb) tabs_4_active_pane_srt_t1

0xac68,	// (0x00015ac1) bg_active_tab_pane_g1_cp3_copy1

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp3_copy1

0xac71,	// (0x00015aca) bg_active_tab_pane_g3_cp3_copy1

0x6edb,	// (0x00011d34) tabs_2_long_active_pane_srt_ParamLimits

0x6edb,	// (0x00011d34) tabs_2_long_active_pane_srt

0x6edb,	// (0x00011d34) tabs_2_long_passive_pane_srt_ParamLimits

0x6edb,	// (0x00011d34) tabs_2_long_passive_pane_srt

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp4_srt_ParamLimits

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp4_srt

0xa893,	// (0x000156ec) bg_passive_tab_pane_g1_cp4_srt

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp4_srt

0xa89c,	// (0x000156f5) bg_passive_tab_pane_g3_cp4_srt

0x801c,	// (0x00012e75) bg_active_tab_pane_cp4_srt_ParamLimits

0x801c,	// (0x00012e75) bg_active_tab_pane_cp4_srt

0xa8a5,	// (0x000156fe) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa8a5,	// (0x000156fe) tabs_2_long_active_pane_srt_t1

0xa893,	// (0x000156ec) bg_active_tab_pane_g1_cp4_srt

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp4_srt

0xa89c,	// (0x000156f5) bg_active_tab_pane_g3_cp4_srt

0x7170,	// (0x00011fc9) tabs_3_long_active_pane_srt_ParamLimits

0x7170,	// (0x00011fc9) tabs_3_long_active_pane_srt

0x7170,	// (0x00011fc9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7170,	// (0x00011fc9) tabs_3_long_passive_pane_cp_srt

0x7170,	// (0x00011fc9) tabs_3_long_passive_pane_srt_ParamLimits

0x7170,	// (0x00011fc9) tabs_3_long_passive_pane_srt

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp5_srt_ParamLimits

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp5_srt

0x884a,	// (0x000136a3) bg_passive_tab_pane_g1_cp5_srt

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp5_srt

0x8853,	// (0x000136ac) bg_passive_tab_pane_g3_cp5_srt

0x801c,	// (0x00012e75) bg_active_tab_pane_cp5_srt_ParamLimits

0x801c,	// (0x00012e75) bg_active_tab_pane_cp5_srt

0xa881,	// (0x000156da) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa881,	// (0x000156da) tabs_3_long_active_pane_srt_t1

0x884a,	// (0x000136a3) bg_active_tab_pane_g1_cp5_srt

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp5_srt

0x8853,	// (0x000136ac) bg_active_tab_pane_g3_cp5_srt

0xa873,	// (0x000156cc) navi_text_pane_srt_t1

0xa86b,	// (0x000156c4) navi_icon_pane_srt_g1

0x8d38,	// (0x00013b91) midp_editing_number_pane_srt

0x8b7e,	// (0x000139d7) midp_ticker_pane_srt

0x8d40,	// (0x00013b99) midp_ticker_pane_srt_g1

0x8d48,	// (0x00013ba1) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a5c6) midp_ticker_pane_srt_g

0x8d50,	// (0x00013ba9) midp_ticker_pane_srt_t1

0xa85c,	// (0x000156b5) midp_editing_number_pane_t1_copy1

0x803d,	// (0x00012e96) listscroll_midp_pane

0x803d,	// (0x00012e96) midp_form_pane

0x8bea,	// (0x00013a43) midp_info_popup_window_ParamLimits

0x8bea,	// (0x00013a43) midp_info_popup_window

0x7f05,	// (0x00012d5e) bg_popup_sub_pane_cp50_ParamLimits

0x7f05,	// (0x00012d5e) bg_popup_sub_pane_cp50

0x994e,	// (0x000147a7) listscroll_midp_info_pane_ParamLimits

0x994e,	// (0x000147a7) listscroll_midp_info_pane

0x9936,	// (0x0001478f) listscroll_form_midp_pane_ParamLimits

0x9936,	// (0x0001478f) listscroll_form_midp_pane

0x9942,	// (0x0001479b) scroll_bar_cp050

0x9916,	// (0x0001476f) list_midp_pane

0xb9d4,	// (0x0001682d) signal_pane_g2_cp

0x9850,	// (0x000146a9) listscroll_midp_info_pane_t1_ParamLimits

0x9850,	// (0x000146a9) listscroll_midp_info_pane_t1

0x9868,	// (0x000146c1) listscroll_midp_info_pane_t2_ParamLimits

0x9868,	// (0x000146c1) listscroll_midp_info_pane_t2

0x98a6,	// (0x000146ff) listscroll_midp_info_pane_t3_ParamLimits

0x98a6,	// (0x000146ff) listscroll_midp_info_pane_t3

0x98e0,	// (0x00014739) listscroll_midp_info_pane_t4_ParamLimits

0x98e0,	// (0x00014739) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001a67e) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001a67e) listscroll_midp_info_pane_t

0x7fc9,	// (0x00012e22) scroll_pane_cp21

0x97ee,	// (0x00014647) form_midp_field_choice_group_pane

0x97f7,	// (0x00014650) form_midp_field_text_pane

0x9836,	// (0x0001468f) form_midp_field_time_pane

0x983e,	// (0x00014697) form_midp_gauge_slider_pane

0x9847,	// (0x000146a0) form_midp_gauge_wait_pane

0x6dfb,	// (0x00011c54) form_midp_image_pane

0x97bf,	// (0x00014618) list_single_midp_pane_ParamLimits

0x97bf,	// (0x00014618) list_single_midp_pane

0x9777,	// (0x000145d0) form_midp_field_text_pane_t1

0x9532,	// (0x0001438b) input_focus_pane_cp050

0x97ae,	// (0x00014607) list_midp_form_text_pane

0x9746,	// (0x0001459f) form_midp_field_choice_group_pane_t1

0x9754,	// (0x000145ad) input_focus_pane_cp051

0x9768,	// (0x000145c1) list_midp_choice_pane

0x6dfb,	// (0x00011c54) status_idle_pane

0x972a,	// (0x00014583) form_midp_field_time_pane_t1

0x6df1,	// (0x00011c4a) wait_anim_pane_g2_copy1

0x9738,	// (0x00014591) form_midp_field_time_pane_t2

0x0001,

0x8c98,	// (0x00013af1) aid_navinavi_width_2_pane

0xf820,	// (0x0001a679) form_midp_field_time_pane_t

0x6dfb,	// (0x00011c54) input_focus_pane_cp052

0x6dfb,	// (0x00011c54) bg_input_focus_pane_cp040

0x96ea,	// (0x00014543) form_midp_gauge_slider_pane_t1

0x96f8,	// (0x00014551) form_midp_gauge_slider_pane_t2

0x9706,	// (0x0001455f) form_midp_gauge_slider_pane_t3

0x9714,	// (0x0001456d) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001a670) form_midp_gauge_slider_pane_t

0x9722,	// (0x0001457b) form_midp_slider_pane

0x6edb,	// (0x00011d34) bg_input_focus_pane_cp041_ParamLimits

0x6edb,	// (0x00011d34) bg_input_focus_pane_cp041

0x96b7,	// (0x00014510) form_midp_gauge_wait_pane_t1_ParamLimits

0x96b7,	// (0x00014510) form_midp_gauge_wait_pane_t1

0x96c9,	// (0x00014522) form_midp_gauge_wait_pane_t2_ParamLimits

0x96c9,	// (0x00014522) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001a66b) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001a66b) form_midp_gauge_wait_pane_t

0x96db,	// (0x00014534) form_midp_wait_pane_ParamLimits

0x96db,	// (0x00014534) form_midp_wait_pane

0x9681,	// (0x000144da) form_midp_image_pane_g1

0x968a,	// (0x000144e3) form_midp_image_pane_t1

0x9699,	// (0x000144f2) form_midp_image_pane_t2

0x96a8,	// (0x00014501) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001a664) form_midp_image_pane_t

0x9669,	// (0x000144c2) list_single_midp_pane_g1

0x9672,	// (0x000144cb) list_single_midp_pane_t1

0x9641,	// (0x0001449a) list_midp_form_item_pane_ParamLimits

0x9641,	// (0x0001449a) list_midp_form_item_pane

0x8c40,	// (0x00013a99) list_midp_form_item_pane_t1

0x8c4f,	// (0x00013aa8) midp_ticker_pane_g1

0x8c5b,	// (0x00013ab4) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a5ac) midp_ticker_pane_g

0x8c67,	// (0x00013ac0) midp_ticker_pane_t1

0xaae0,	// (0x00015939) midp_editing_number_pane_t1

0xaabe,	// (0x00015917) midp_editing_number_pane

0xaacd,	// (0x00015926) midp_ticker_pane

0xa824,	// (0x0001567d) ai_message_heading_pane

0x6dfb,	// (0x00011c54) bg_popup_window_pane_cp14

0xa82c,	// (0x00015685) listscroll_ai_message_pane

0xa7ae,	// (0x00015607) ai_message_heading_pane_g1_ParamLimits

0xa7ae,	// (0x00015607) ai_message_heading_pane_g1

0xa7ba,	// (0x00015613) ai_message_heading_pane_g2_ParamLimits

0xa7ba,	// (0x00015613) ai_message_heading_pane_g2

0xa7c6,	// (0x0001561f) ai_message_heading_pane_g3_ParamLimits

0xa7c6,	// (0x0001561f) ai_message_heading_pane_g3

0xa7d2,	// (0x0001562b) ai_message_heading_pane_g4_ParamLimits

0xa7d2,	// (0x0001562b) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001a7a5) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001a7a5) ai_message_heading_pane_g

0xa7de,	// (0x00015637) ai_message_heading_pane_t1_ParamLimits

0xa7de,	// (0x00015637) ai_message_heading_pane_t1

0xa7f8,	// (0x00015651) ai_message_heading_pane_t2_ParamLimits

0xa7f8,	// (0x00015651) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001a7ae) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001a7ae) ai_message_heading_pane_t

0xa80a,	// (0x00015663) bg_popup_heading_pane_cp1_ParamLimits

0xa80a,	// (0x00015663) bg_popup_heading_pane_cp1

0xa79c,	// (0x000155f5) list_ai_message_pane_ParamLimits

0xa79c,	// (0x000155f5) list_ai_message_pane

0x7fc9,	// (0x00012e22) scroll_pane_cp10

0xa738,	// (0x00015591) list_ai_message_pane_g1

0xa740,	// (0x00015599) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001a782) list_ai_message_pane_g

0xa748,	// (0x000155a1) list_ai_message_pane_t1_ParamLimits

0xa748,	// (0x000155a1) list_ai_message_pane_t1

0xa75d,	// (0x000155b6) list_ai_message_pane_t2_ParamLimits

0xa75d,	// (0x000155b6) list_ai_message_pane_t2

0xa772,	// (0x000155cb) list_ai_message_pane_t3_ParamLimits

0xa772,	// (0x000155cb) list_ai_message_pane_t3

0xa787,	// (0x000155e0) list_ai_message_pane_t4_ParamLimits

0xa787,	// (0x000155e0) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001a787) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001a787) list_ai_message_pane_t

0xa723,	// (0x0001557c) cell_ai_soft_ind_pane_ParamLimits

0xa723,	// (0x0001557c) cell_ai_soft_ind_pane

0x8c79,	// (0x00013ad2) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c79,	// (0x00013ad2) cell_ai_soft_ind_pane_g1

0x6dfb,	// (0x00011c54) grid_highlight_cp1

0x8c86,	// (0x00013adf) text_secondary_cp56_ParamLimits

0x8c86,	// (0x00013adf) text_secondary_cp56

0xa6f8,	// (0x00015551) example_general_pane_ParamLimits

0xa6f8,	// (0x00015551) example_general_pane

0xa704,	// (0x0001555d) example_parent_pane_g1_ParamLimits

0xa704,	// (0x0001555d) example_parent_pane_g1

0xa710,	// (0x00015569) example_parent_pane_t1_ParamLimits

0xa710,	// (0x00015569) example_parent_pane_t1

0x56d8,	// (0x00010531) popup_preview_text_window_ParamLimits

0x56d8,	// (0x00010531) popup_preview_text_window

0x8aaf,	// (0x00013908) list_single_pane_cp2_g4

0x7226,	// (0x0001207f) bg_popup_preview_window_pane_ParamLimits

0x7226,	// (0x0001207f) bg_popup_preview_window_pane

0xa444,	// (0x0001529d) popup_preview_text_window_t1_ParamLimits

0xa444,	// (0x0001529d) popup_preview_text_window_t1

0xa462,	// (0x000152bb) popup_preview_text_window_t2_ParamLimits

0xa462,	// (0x000152bb) popup_preview_text_window_t2

0xa4ab,	// (0x00015304) popup_preview_text_window_t3_ParamLimits

0xa4ab,	// (0x00015304) popup_preview_text_window_t3

0xa4f0,	// (0x00015349) popup_preview_text_window_t4_ParamLimits

0xa4f0,	// (0x00015349) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001a756) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001a756) popup_preview_text_window_t

0xa56e,	// (0x000153c7) scroll_pane_cp11

0x9404,	// (0x0001425d) bg_popup_preview_window_pane_g1

0xa404,	// (0x0001525d) bg_popup_preview_window_pane_g2

0xa40c,	// (0x00015265) bg_popup_preview_window_pane_g3

0xa414,	// (0x0001526d) bg_popup_preview_window_pane_g4

0xa41c,	// (0x00015275) bg_popup_preview_window_pane_g5

0xa424,	// (0x0001527d) bg_popup_preview_window_pane_g6

0xa42c,	// (0x00015285) bg_popup_preview_window_pane_g7

0xa434,	// (0x0001528d) bg_popup_preview_window_pane_g8

0x48c8,	// (0x0000f721) aid_popup_width_pane

0x56b6,	// (0x0001050f) popup_midp_note_alarm_window_ParamLimits

0x56b6,	// (0x0001050f) popup_midp_note_alarm_window

0x7cb1,	// (0x00012b0a) data_form_pane_ParamLimits

0x7cbd,	// (0x00012b16) form_field_data_pane_g1

0x7cc7,	// (0x00012b20) form_field_data_pane_t1_ParamLimits

0x7cdf,	// (0x00012b38) input_focus_pane_ParamLimits

0x7ced,	// (0x00012b46) data_form_wide_pane_ParamLimits

0x7cf9,	// (0x00012b52) form_field_data_wide_pane_g1

0x7d19,	// (0x00012b72) form_field_data_wide_pane_t1_ParamLimits

0x74d5,	// (0x0001232e) input_focus_pane_cp6_ParamLimits

0x7f76,	// (0x00012dcf) input_popup_find_pane_g1_ParamLimits

0x7f76,	// (0x00012dcf) input_popup_find_pane_g1

0x4e44,	// (0x0000fc9d) aid_navi_side_left_pane

0x4e59,	// (0x0000fcb2) aid_navi_side_right_pane

0x9e11,	// (0x00014c6a) bg_popup_window_pane_cp30_ParamLimits

0x9e11,	// (0x00014c6a) bg_popup_window_pane_cp30

0x9e8b,	// (0x00014ce4) popup_midp_note_alarm_window_g1_ParamLimits

0x9e8b,	// (0x00014ce4) popup_midp_note_alarm_window_g1

0x9ebb,	// (0x00014d14) popup_midp_note_alarm_window_t1_ParamLimits

0x9ebb,	// (0x00014d14) popup_midp_note_alarm_window_t1

0x9f5c,	// (0x00014db5) popup_midp_note_alarm_window_t2_ParamLimits

0x9f5c,	// (0x00014db5) popup_midp_note_alarm_window_t2

0xa00a,	// (0x00014e63) popup_midp_note_alarm_window_t3_ParamLimits

0xa00a,	// (0x00014e63) popup_midp_note_alarm_window_t3

0xa03c,	// (0x00014e95) popup_midp_note_alarm_window_t4_ParamLimits

0xa03c,	// (0x00014e95) popup_midp_note_alarm_window_t4

0xa062,	// (0x00014ebb) popup_midp_note_alarm_window_t5_ParamLimits

0xa062,	// (0x00014ebb) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001a6f3) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001a6f3) popup_midp_note_alarm_window_t

0xa10e,	// (0x00014f67) wait_bar_pane_cp1_ParamLimits

0xa10e,	// (0x00014f67) wait_bar_pane_cp1

0x6dfb,	// (0x00011c54) wait_anim_pane_copy1

0x6dfb,	// (0x00011c54) wait_border_pane_copy1

0x9af7,	// (0x00014950) wait_border_pane_g1_copy1

0x7d30,	// (0x00012b89) form_field_popup_pane_g1

0x7d38,	// (0x00012b91) form_field_popup_pane_t1_ParamLimits

0x7cdf,	// (0x00012b38) input_focus_pane_cp7_ParamLimits

0x7d50,	// (0x00012ba9) list_form_pane_ParamLimits

0x7d5c,	// (0x00012bb5) form_field_popup_wide_pane_g1

0x7d64,	// (0x00012bbd) form_field_popup_wide_pane_t1_ParamLimits

0x7cdf,	// (0x00012b38) input_focus_pane_cp8_ParamLimits

0x7d79,	// (0x00012bd2) list_form_wide_pane_ParamLimits

0xad00,	// (0x00015b59) aid_size_cell_graphic_pane

0x7e50,	// (0x00012ca9) data_form_pane_t1_ParamLimits

0xaa8b,	// (0x000158e4) data_form_wide_pane_t1_ParamLimits

0x8fa3,	// (0x00013dfc) bg_status_flat_pane

0x6e3b,	// (0x00011c94) title_pane_t1_ParamLimits

0x6ea3,	// (0x00011cfc) title_pane_t2_ParamLimits

0x6ec9,	// (0x00011d22) title_pane_t3_ParamLimits

0xf557,	// (0x0001a3b0) title_pane_t_ParamLimits

0x8448,	// (0x000132a1) level_1_signal_ParamLimits

0x845a,	// (0x000132b3) level_2_signal_ParamLimits

0x846d,	// (0x000132c6) level_3_signal_ParamLimits

0x8480,	// (0x000132d9) level_4_signal_ParamLimits

0x8493,	// (0x000132ec) level_5_signal_ParamLimits

0x84a6,	// (0x000132ff) level_6_signal_ParamLimits

0x84b9,	// (0x00013312) level_7_signal_ParamLimits

0x8448,	// (0x000132a1) level_1_battery_ParamLimits

0x845a,	// (0x000132b3) level_2_battery_ParamLimits

0x846d,	// (0x000132c6) level_3_battery_ParamLimits

0x8480,	// (0x000132d9) level_4_battery_ParamLimits

0x8493,	// (0x000132ec) level_5_battery_ParamLimits

0x84a6,	// (0x000132ff) level_6_battery_ParamLimits

0x84b9,	// (0x00013312) level_7_battery_ParamLimits

0x9d16,	// (0x00014b6f) bg_status_flat_pane_g1

0x9d1e,	// (0x00014b77) bg_status_flat_pane_g2

0x9d26,	// (0x00014b7f) bg_status_flat_pane_g3

0x9d2e,	// (0x00014b87) bg_status_flat_pane_g4

0x9d36,	// (0x00014b8f) bg_status_flat_pane_g5

0x9d3e,	// (0x00014b97) bg_status_flat_pane_g6

0x9d46,	// (0x00014b9f) bg_status_flat_pane_g7

0x6ef1,	// (0x00011d4a) tabs_3_active_pane_t1_ParamLimits

0x6ef1,	// (0x00011d4a) tabs_3_passive_pane_t1_ParamLimits

0x6f0b,	// (0x00011d64) tabs_4_active_pane_t1_ParamLimits

0x6f0b,	// (0x00011d64) tabs_4_1_passive_pane_t1_ParamLimits

0x800a,	// (0x00012e63) tabs_2_active_pane_t1_ParamLimits

0x800a,	// (0x00012e63) tabs_2_passive_pane_t1_ParamLimits

0x801c,	// (0x00012e75) bg_active_tab_pane_cp4_ParamLimits

0x802a,	// (0x00012e83) tabs_2_long_active_pane_t1_ParamLimits

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp4_ParamLimits

0x59fd,	// (0x00010856) list_single_midp_graphic_pane_t1_ParamLimits

0x801c,	// (0x00012e75) bg_active_tab_pane_cp5_ParamLimits

0x8049,	// (0x00012ea2) tabs_3_long_active_pane_t1_ParamLimits

0x803d,	// (0x00012e96) bg_passive_tab_pane_cp5_ParamLimits

0x59fd,	// (0x00010856) list_single_midp_graphic_pane_t1

0x8fa3,	// (0x00013dfc) bg_status_flat_pane_ParamLimits

0x9066,	// (0x00013ebf) indicator_pane_cp2_ParamLimits

0x9066,	// (0x00013ebf) indicator_pane_cp2

0x9191,	// (0x00013fea) navi_pane_srt_ParamLimits

0x9191,	// (0x00013fea) navi_pane_srt

0x91b5,	// (0x0001400e) popup_clock_digital_analogue_window_cp1

0x6fd2,	// (0x00011e2b) indicator_pane_t1

0x8b7e,	// (0x000139d7) copy_highlight_pane

0x8b7e,	// (0x000139d7) cursor_graphics_pane

0x8b7e,	// (0x000139d7) graphic_within_text_pane

0x8b7e,	// (0x000139d7) link_highlight_pane

0xa531,	// (0x0001538a) popup_preview_text_window_t5_ParamLimits

0xa531,	// (0x0001538a) popup_preview_text_window_t5

0x8ca0,	// (0x00013af9) cursor_digital_pane

0x8ca0,	// (0x00013af9) cursor_primary_pane

0x8cb1,	// (0x00013b0a) cursor_primary_small_pane

0x8cb9,	// (0x00013b12) cursor_secondary_pane

0x8cc1,	// (0x00013b1a) cursor_title_pane

0x8ca0,	// (0x00013af9) link_highlight_digital_pane

0x8ca8,	// (0x00013b01) link_highlight_primary_pane

0x8cb1,	// (0x00013b0a) link_highlight_primary_small_pane

0x8cb9,	// (0x00013b12) link_highlight_secondary_pane

0x8cc1,	// (0x00013b1a) link_highlight_title_pane

0x8ca0,	// (0x00013af9) copy_highlight_digital_pane

0x8ca0,	// (0x00013af9) copy_highlight_primary_pane

0x8cb1,	// (0x00013b0a) copy_highlight_primary_small_pane

0x8cb9,	// (0x00013b12) copy_highlight_secondary_pane

0x8cc1,	// (0x00013b1a) copy_highlight_title_pane

0x8cb9,	// (0x00013b12) graphic_text_digital_pane

0x9db4,	// (0x00014c0d) graphic_text_primary_pane

0x9dbd,	// (0x00014c16) graphic_text_primary_small_pane

0x8cb1,	// (0x00013b0a) graphic_text_secondary_pane

0x8ca0,	// (0x00013af9) graphic_text_title_pane

0x8cc9,	// (0x00013b22) cursor_primary_pane_g1

0x9da6,	// (0x00014bff) cursor_text_primary_t1

0x9d8e,	// (0x00014be7) cursor_primary_small_pane_g1

0x9d98,	// (0x00014bf1) cursor_text_primary_small_t1

0x9d76,	// (0x00014bcf) cursor_primary_small_pane_g1_copy1

0x9d80,	// (0x00014bd9) cursor_text_primary_small_t1_copy1

0x9d5e,	// (0x00014bb7) cursor_text_title_t1

0x9d6c,	// (0x00014bc5) cursor_title_pane_g1

0x8cc9,	// (0x00013b22) cursor_digital_pane_g1

0x8cd3,	// (0x00013b2c) cursor_text_digital_t1

0x8cf8,	// (0x00013b51) link_highlight_primary_pane_g1

0x9d07,	// (0x00014b60) link_highlight_primary_pane_t1

0x8ce1,	// (0x00013b3a) link_highlight_primary_small_pane_g1

0x8ce9,	// (0x00013b42) link_highlight_primary_small_pane_t1

0x8cf8,	// (0x00013b51) link_highlight_secondary_pane_g1

0x8d00,	// (0x00013b59) link_highlight_secondary_pane_t1

0x9c7b,	// (0x00014ad4) link_highlight_title_pane_g1

0x9c83,	// (0x00014adc) link_highlight_title_pane_t1

0x9c64,	// (0x00014abd) link_highlight_digital_pane_g1

0x9c6c,	// (0x00014ac5) link_highlight_digital_pane_t1

0x9b3c,	// (0x00014995) copy_highlight_primary_pane_g1

0x9b44,	// (0x0001499d) copy_highlight_primary_pane_t1

0x9b16,	// (0x0001496f) copy_highlight_primary_small_pane_g1

0x9b2d,	// (0x00014986) copy_highlight_primary_small_pane_t1

0x8d0f,	// (0x00013b68) copy_highlight_secondary_pane_g1

0x8d17,	// (0x00013b70) copy_highlight_secondary_pane_t1

0x9b16,	// (0x0001496f) copy_highlight_title_pane_g1

0x9b1e,	// (0x00014977) copy_highlight_title_pane_t1

0x9b3c,	// (0x00014995) copy_highlight_digital_pane_g1

0xaeca,	// (0x00015d23) copy_highlight_digital_pane_t1

0xae1e,	// (0x00015c77) graphic_text_primary_pane_g1

0xaeae,	// (0x00015d07) graphic_text_primary_pane_t1

0xaebc,	// (0x00015d15) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001a822) graphic_text_primary_pane_t

0xae8a,	// (0x00015ce3) graphic_text_primary_small_pane_g1

0xae92,	// (0x00015ceb) graphic_text_primary_small_pane_t1

0xaea0,	// (0x00015cf9) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001a81d) graphic_text_primary_small_pane_t

0xae66,	// (0x00015cbf) graphic_text_secondary_pane_g1

0xae6e,	// (0x00015cc7) graphic_text_secondary_pane_t1

0xae7c,	// (0x00015cd5) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001a818) graphic_text_secondary_pane_t

0xae42,	// (0x00015c9b) graphic_text_title_pane_g1

0xae4a,	// (0x00015ca3) graphic_text_title_pane_t1

0xae58,	// (0x00015cb1) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001a813) graphic_text_title_pane_t

0xae1e,	// (0x00015c77) graphic_text_digital_pane_g1

0xae26,	// (0x00015c7f) graphic_text_digital_pane_t1

0xae34,	// (0x00015c8d) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001a80e) graphic_text_digital_pane_t

0x6edb,	// (0x00011d34) navi_icon_pane_srt_ParamLimits

0x6edb,	// (0x00011d34) navi_icon_pane_srt

0x6dfb,	// (0x00011c54) navi_midp_pane_srt

0x6dfb,	// (0x00011c54) navi_navi_pane_srt

0x6edb,	// (0x00011d34) navi_text_pane_srt_ParamLimits

0x6edb,	// (0x00011d34) navi_text_pane_srt

0xade9,	// (0x00015c42) navi_navi_icon_text_pane_srt

0xadf1,	// (0x00015c4a) navi_navi_pane_srt_g1_ParamLimits

0xadf1,	// (0x00015c4a) navi_navi_pane_srt_g1

0xae03,	// (0x00015c5c) navi_navi_pane_srt_g2_ParamLimits

0xae03,	// (0x00015c5c) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001a809) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001a809) navi_navi_pane_srt_g

0xae15,	// (0x00015c6e) navi_navi_tabs_pane_srt

0xade9,	// (0x00015c42) navi_navi_text_pane_srt

0xade9,	// (0x00015c42) navi_navi_volume_pane_srt

0xadda,	// (0x00015c33) navi_navi_text_pane_srt_t1

0x5d77,	// (0x00010bd0) navi_navi_volume_pane_srt_g1

0x5d7f,	// (0x00010bd8) volume_small_pane_srt_ParamLimits

0x5d7f,	// (0x00010bd8) volume_small_pane_srt

0x5124,	// (0x0000ff7d) volume_small_pane_srt_g1_ParamLimits

0x5124,	// (0x0000ff7d) volume_small_pane_srt_g1

0x5134,	// (0x0000ff8d) volume_small_pane_srt_g2_ParamLimits

0x5134,	// (0x0000ff8d) volume_small_pane_srt_g2

0x5145,	// (0x0000ff9e) volume_small_pane_srt_g3_ParamLimits

0x5145,	// (0x0000ff9e) volume_small_pane_srt_g3

0x5156,	// (0x0000ffaf) volume_small_pane_srt_g4_ParamLimits

0x5156,	// (0x0000ffaf) volume_small_pane_srt_g4

0x5167,	// (0x0000ffc0) volume_small_pane_srt_g5_ParamLimits

0x5167,	// (0x0000ffc0) volume_small_pane_srt_g5

0x5178,	// (0x0000ffd1) volume_small_pane_srt_g6_ParamLimits

0x5178,	// (0x0000ffd1) volume_small_pane_srt_g6

0x5189,	// (0x0000ffe2) volume_small_pane_srt_g7_ParamLimits

0x5189,	// (0x0000ffe2) volume_small_pane_srt_g7

0x519a,	// (0x0000fff3) volume_small_pane_srt_g8_ParamLimits

0x519a,	// (0x0000fff3) volume_small_pane_srt_g8

0x51ab,	// (0x00010004) volume_small_pane_srt_g9_ParamLimits

0x51ab,	// (0x00010004) volume_small_pane_srt_g9

0x51bc,	// (0x00010015) volume_small_pane_srt_g10_ParamLimits

0x51bc,	// (0x00010015) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a5b1) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a5b1) volume_small_pane_srt_g

0x72cf,	// (0x00012128) query_popup_data_pane_cp2

0xadc0,	// (0x00015c19) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xadc0,	// (0x00015c19) navi_navi_icon_text_pane_srt_t1

0x9db4,	// (0x00014c0d) navi_tabs_2_long_pane_srt

0x9db4,	// (0x00014c0d) navi_tabs_2_pane_srt

0x9db4,	// (0x00014c0d) navi_tabs_3_long_pane_srt

0x9db4,	// (0x00014c0d) navi_tabs_3_pane_srt

0x9db4,	// (0x00014c0d) navi_tabs_4_pane_srt

0x5d57,	// (0x00010bb0) tabs_2_active_pane_srt_ParamLimits

0x5d57,	// (0x00010bb0) tabs_2_active_pane_srt

0x5d67,	// (0x00010bc0) tabs_2_passive_pane_srt_ParamLimits

0x5d67,	// (0x00010bc0) tabs_2_passive_pane_srt

0x8ec4,	// (0x00013d1d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ec4,	// (0x00013d1d) bg_passive_tab_pane_cp1_srt

0xad8c,	// (0x00015be5) bg_passive_tab_pane_g1_cp1_srt

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp1_srt

0xad95,	// (0x00015bee) bg_passive_tab_pane_g3_cp1_srt

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp1_srt_ParamLimits

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp1_srt

0xad9e,	// (0x00015bf7) tabs_2_active_pane_srt_g1

0xada6,	// (0x00015bff) tabs_2_active_pane_srt_t1_ParamLimits

0xada6,	// (0x00015bff) tabs_2_active_pane_srt_t1

0xad8c,	// (0x00015be5) bg_active_tab_pane_g1_cp1_srt

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp1_srt

0xad95,	// (0x00015bee) bg_active_tab_pane_g3_cp1_srt

0x5d24,	// (0x00010b7d) tabs_3_active_pane_srt_ParamLimits

0x5d24,	// (0x00010b7d) tabs_3_active_pane_srt

0x5d35,	// (0x00010b8e) tabs_3_passive_pane_cp_srt_ParamLimits

0x5d35,	// (0x00010b8e) tabs_3_passive_pane_cp_srt

0x5d46,	// (0x00010b9f) tabs_3_passive_pane_srt_ParamLimits

0x5d46,	// (0x00010b9f) tabs_3_passive_pane_srt

0x8ec4,	// (0x00013d1d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ec4,	// (0x00013d1d) bg_passive_tab_pane_cp2_srt

0x8d26,	// (0x00013b7f) bg_passive_tab_pane_g1_cp2_srt

0x87c0,	// (0x00013619) bg_passive_tab_pane_g2_cp2_srt

0x8d2f,	// (0x00013b88) bg_passive_tab_pane_g3_cp2_srt

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp2_srt_ParamLimits

0x6edb,	// (0x00011d34) bg_active_tab_pane_cp2_srt

0xad72,	// (0x00015bcb) tabs_3_active_pane_srt_g1

0xad7a,	// (0x00015bd3) tabs_3_active_pane_srt_t1_ParamLimits

0xad7a,	// (0x00015bd3) tabs_3_active_pane_srt_t1

0x8d26,	// (0x00013b7f) bg_active_tab_pane_g1_cp2_srt

0x87c0,	// (0x00013619) bg_active_tab_pane_g2_cp2_srt

0x8d2f,	// (0x00013b88) bg_active_tab_pane_g3_cp2_srt

0x5cdc,	// (0x00010b35) tabs_4_active_pane_srt_ParamLimits

0x5cdc,	// (0x00010b35) tabs_4_active_pane_srt

0x5cee,	// (0x00010b47) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5cee,	// (0x00010b47) tabs_4_passive_pane_cp2_srt

0x5321,	// (0x0001017a) aid_size_cell_toolbar

0x803d,	// (0x00012e96) main_idle_act_pane_ParamLimits

0x54ec,	// (0x00010345) popup_large_graphic_colour_window_ParamLimits

0x5853,	// (0x000106ac) popup_toolbar_window_ParamLimits

0x5853,	// (0x000106ac) popup_toolbar_window

0xab0a,	// (0x00015963) list_single_graphic_2heading_pane_ParamLimits

0xab0a,	// (0x00015963) list_single_graphic_2heading_pane

0x81f9,	// (0x00013052) aid_size_cell_apps_grid_lsc_pane

0x820b,	// (0x00013064) aid_size_cell_apps_grid_prt_pane

0x8ec4,	// (0x00013d1d) bg_wml_button_pane_cp1_ParamLimits

0x8ec4,	// (0x00013d1d) bg_wml_button_pane_cp1

0x9777,	// (0x000145d0) form_midp_field_text_pane_t1_ParamLimits

0x9532,	// (0x0001438b) input_focus_pane_cp050_ParamLimits

0x97ae,	// (0x00014607) list_midp_form_text_pane_ParamLimits

0x9754,	// (0x000145ad) input_focus_pane_cp051_ParamLimits

0x9768,	// (0x000145c1) list_midp_choice_pane_ParamLimits

0x95eb,	// (0x00014444) list_single_2graphic_pane_cp3_ParamLimits

0x95eb,	// (0x00014444) list_single_2graphic_pane_cp3

0x960f,	// (0x00014468) list_single_midp_graphic_pane_ParamLimits

0x960f,	// (0x00014468) list_single_midp_graphic_pane

0x5900,	// (0x00010759) list_single_graphic_2heading_pane_g1_ParamLimits

0x5900,	// (0x00010759) list_single_graphic_2heading_pane_g1

0x590c,	// (0x00010765) list_single_graphic_2heading_pane_g4_ParamLimits

0x590c,	// (0x00010765) list_single_graphic_2heading_pane_g4

0x5918,	// (0x00010771) list_single_graphic_2heading_pane_g5_ParamLimits

0x5918,	// (0x00010771) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a604) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a604) list_single_graphic_2heading_pane_g

0x5924,	// (0x0001077d) list_single_graphic_2heading_pane_t1_ParamLimits

0x5924,	// (0x0001077d) list_single_graphic_2heading_pane_t1

0x5938,	// (0x00010791) list_single_graphic_2heading_pane_t2_ParamLimits

0x5938,	// (0x00010791) list_single_graphic_2heading_pane_t2

0x5954,	// (0x000107ad) list_single_graphic_2heading_pane_t3_ParamLimits

0x5954,	// (0x000107ad) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a60b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a60b) list_single_graphic_2heading_pane_t

0x9314,	// (0x0001416d) bg_popup_sub_pane_cp2

0x933e,	// (0x00014197) grid_toobar_pane

0x596c,	// (0x000107c5) cell_toolbar_pane_ParamLimits

0x596c,	// (0x000107c5) cell_toolbar_pane

0x93a8,	// (0x00014201) cell_toolbar_pane_g1_ParamLimits

0x93a8,	// (0x00014201) cell_toolbar_pane_g1

0x93bc,	// (0x00014215) cell_toolbar_pane_g2_ParamLimits

0x93bc,	// (0x00014215) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a619) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a619) cell_toolbar_pane_g

0x93de,	// (0x00014237) grid_highlight_pane_cp2_ParamLimits

0x93de,	// (0x00014237) grid_highlight_pane_cp2

0x93f8,	// (0x00014251) toolbar_button_pane

0x9404,	// (0x0001425d) toolbar_button_pane_g1

0x940c,	// (0x00014265) toolbar_button_pane_g2

0x9414,	// (0x0001426d) toolbar_button_pane_g3

0x941c,	// (0x00014275) toolbar_button_pane_g4

0x9424,	// (0x0001427d) toolbar_button_pane_g5

0x942c,	// (0x00014285) toolbar_button_pane_g6

0x9434,	// (0x0001428d) toolbar_button_pane_g7

0x943c,	// (0x00014295) toolbar_button_pane_g8

0x9444,	// (0x0001429d) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a61e) toolbar_button_pane_g

0x59a4,	// (0x000107fd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x59a4,	// (0x000107fd) list_single_2graphic_pane_g1_cp3

0x59b0,	// (0x00010809) list_single_2graphic_pane_g2_cp3_ParamLimits

0x59b0,	// (0x00010809) list_single_2graphic_pane_g2_cp3

0x59c1,	// (0x0001081a) list_single_2graphic_pane_g3_cp3

0x59c9,	// (0x00010822) list_single_2graphic_pane_g4_cp3_ParamLimits

0x59c9,	// (0x00010822) list_single_2graphic_pane_g4_cp3

0x59d5,	// (0x0001082e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x59d5,	// (0x0001082e) list_single_2graphic_pane_t1_cp3

0x59f1,	// (0x0001084a) list_single_midp_graphic_pane_g2_ParamLimits

0x59f1,	// (0x0001084a) list_single_midp_graphic_pane_g2

0x5329,	// (0x00010182) aid_zoom_text_primary

0x5331,	// (0x0001018a) aid_zoom_text_secondary

0x8de0,	// (0x00013c39) status_small_pane_g7_ParamLimits

0x8de0,	// (0x00013c39) status_small_pane_g7

0x8e03,	// (0x00013c5c) status_small_pane_t1_ParamLimits

0x6e12,	// (0x00011c6b) title_pane_g2

0x0003,

0xf54e,	// (0x0001a3a7) title_pane_g

0x7373,	// (0x000121cc) aid_size_cell_colour_1_pane_ParamLimits

0x7373,	// (0x000121cc) aid_size_cell_colour_1_pane

0x7387,	// (0x000121e0) aid_size_cell_colour_2_pane_ParamLimits

0x7387,	// (0x000121e0) aid_size_cell_colour_2_pane

0x739b,	// (0x000121f4) aid_size_cell_colour_3_pane_ParamLimits

0x739b,	// (0x000121f4) aid_size_cell_colour_3_pane

0x73af,	// (0x00012208) aid_size_cell_colour_4_pane_ParamLimits

0x73af,	// (0x00012208) aid_size_cell_colour_4_pane

0x4d81,	// (0x0000fbda) title_pane_stacon_g1_ParamLimits

0x4d81,	// (0x0000fbda) title_pane_stacon_g1

0x9b9b,	// (0x000149f4) popup_note_wait_window_g3_ParamLimits

0x9b9b,	// (0x000149f4) popup_note_wait_window_g3

0x9c11,	// (0x00014a6a) popup_note_wait_window_t5_ParamLimits

0x9c11,	// (0x00014a6a) popup_note_wait_window_t5

0x6dfb,	// (0x00011c54) main_feb_china_hwr_fs_writing_pane

0x53cf,	// (0x00010228) popup_feb_china_hwr_fs_window_ParamLimits

0x53cf,	// (0x00010228) popup_feb_china_hwr_fs_window

0x5a13,	// (0x0001086c) aid_size_cell_hwr_fs_ParamLimits

0x5a13,	// (0x0001086c) aid_size_cell_hwr_fs

0x9532,	// (0x0001438b) bg_popup_sub_pane_cp3_ParamLimits

0x9532,	// (0x0001438b) bg_popup_sub_pane_cp3

0x5a28,	// (0x00010881) grid_hwr_fs_pane_ParamLimits

0x5a28,	// (0x00010881) grid_hwr_fs_pane

0x5a40,	// (0x00010899) linegrid_hwr_fs_pane_ParamLimits

0x5a40,	// (0x00010899) linegrid_hwr_fs_pane

0x5a50,	// (0x000108a9) cell_hwr_fs_pane_ParamLimits

0x5a50,	// (0x000108a9) cell_hwr_fs_pane

0x953e,	// (0x00014397) linegrid_hwr_fs_pane_g1_ParamLimits

0x953e,	// (0x00014397) linegrid_hwr_fs_pane_g1

0x954a,	// (0x000143a3) linegrid_hwr_fs_pane_g2_ParamLimits

0x954a,	// (0x000143a3) linegrid_hwr_fs_pane_g2

0x955c,	// (0x000143b5) linegrid_hwr_fs_pane_g3_ParamLimits

0x955c,	// (0x000143b5) linegrid_hwr_fs_pane_g3

0x5a72,	// (0x000108cb) linegrid_hwr_fs_pane_g4_ParamLimits

0x5a72,	// (0x000108cb) linegrid_hwr_fs_pane_g4

0x5a8c,	// (0x000108e5) linegrid_hwr_fs_pane_g5_ParamLimits

0x5a8c,	// (0x000108e5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001a649) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001a649) linegrid_hwr_fs_pane_g

0x9568,	// (0x000143c1) cell_hwr_fs_pane_g1_ParamLimits

0x9568,	// (0x000143c1) cell_hwr_fs_pane_g1

0x924b,	// (0x000140a4) cell_hwr_fs_pane_g2_ParamLimits

0x924b,	// (0x000140a4) cell_hwr_fs_pane_g2

0x957e,	// (0x000143d7) cell_hwr_fs_pane_g3_ParamLimits

0x957e,	// (0x000143d7) cell_hwr_fs_pane_g3

0x958b,	// (0x000143e4) cell_hwr_fs_pane_g4_ParamLimits

0x958b,	// (0x000143e4) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001a654) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001a654) cell_hwr_fs_pane_g

0x5aa2,	// (0x000108fb) cell_hwr_fs_pane_t1

0x6dfb,	// (0x00011c54) grid_highlight_pane_cp6

0x6dfb,	// (0x00011c54) main_idle_act2_pane

0x7fb0,	// (0x00012e09) aid_inside_area_popup_secondary

0xa254,	// (0x000150ad) aid_inside_area_window_primary_ParamLimits

0xa254,	// (0x000150ad) aid_inside_area_window_primary

0xaed9,	// (0x00015d32) ai2_news_ticker_pane

0xaee1,	// (0x00015d3a) aid_size_cell_ai1_link_ParamLimits

0xaee1,	// (0x00015d3a) aid_size_cell_ai1_link

0xaefb,	// (0x00015d54) popup_ai2_data_window_ParamLimits

0xaefb,	// (0x00015d54) popup_ai2_data_window

0xaf11,	// (0x00015d6a) popup_ai2_link_window_ParamLimits

0xaf11,	// (0x00015d6a) popup_ai2_link_window

0x9532,	// (0x0001438b) bg_popup_sub_pane_cp4_ParamLimits

0x9532,	// (0x0001438b) bg_popup_sub_pane_cp4

0xaf25,	// (0x00015d7e) grid_ai2_link_pane_ParamLimits

0xaf25,	// (0x00015d7e) grid_ai2_link_pane

0xaf3c,	// (0x00015d95) popup_ai2_link_window_g1_ParamLimits

0xaf3c,	// (0x00015d95) popup_ai2_link_window_g1

0xaf48,	// (0x00015da1) popup_ai2_link_window_g2_ParamLimits

0xaf48,	// (0x00015da1) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001a827) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001a827) popup_ai2_link_window_g

0xaf57,	// (0x00015db0) ai2_mp_button_pane

0xaf5f,	// (0x00015db8) ai2_mp_volume_pane

0x9754,	// (0x000145ad) bg_popup_sub_pane_cp5_ParamLimits

0x9754,	// (0x000145ad) bg_popup_sub_pane_cp5

0xaf67,	// (0x00015dc0) heading_ai2_gene_pane_ParamLimits

0xaf67,	// (0x00015dc0) heading_ai2_gene_pane

0xaf73,	// (0x00015dcc) list_ai2_gene_pane_ParamLimits

0xaf73,	// (0x00015dcc) list_ai2_gene_pane

0xafbb,	// (0x00015e14) cell_ai2_link_pane_ParamLimits

0xafbb,	// (0x00015e14) cell_ai2_link_pane

0xafd1,	// (0x00015e2a) cell_ai2_link_pane_g1

0x6dfb,	// (0x00011c54) grid_highlight_pane_cp7

0x5d94,	// (0x00010bed) ai2_mp_volume_pane_g1

0xb0a1,	// (0x00015efa) ai2_mp_volume_pane_g2

0xb016,	// (0x00015e6f) list_ai2_gene_pane_t1

0xb0a9,	// (0x00015f02) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001a840) ai2_mp_volume_pane_g

0x5d9c,	// (0x00010bf5) volume_small_pane_cp3

0xb0b1,	// (0x00015f0a) aid_size_cell_ai2_button

0xb0b9,	// (0x00015f12) grid_ai2_button_pane

0xb0c2,	// (0x00015f1b) cell_ai2_button_pane_ParamLimits

0xb0c2,	// (0x00015f1b) cell_ai2_button_pane

0x6df1,	// (0x00011c4a) cell_ai2_button_pane_g1

0x6dfb,	// (0x00011c54) grid_highlight_pane_cp8

0xb061,	// (0x00015eba) ai2_gene_pane_t1_ParamLimits

0xb061,	// (0x00015eba) ai2_gene_pane_t1

0x5317,	// (0x00010170) aid_height_parent_landscape

0xa8f3,	// (0x0001574c) aid_height_set_list

0xa904,	// (0x0001575d) aid_size_parent

0xad00,	// (0x00015b59) aid_size_cell_graphic_pane_ParamLimits

0xaf83,	// (0x00015ddc) popup_ai2_data_window_g1_ParamLimits

0xaf83,	// (0x00015ddc) popup_ai2_data_window_g1

0xaf8f,	// (0x00015de8) ai2_news_ticker_pane_g1

0xaf97,	// (0x00015df0) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001a82c) ai2_news_ticker_pane_g

0xaf9f,	// (0x00015df8) ai2_news_ticker_pane_t1

0xafad,	// (0x00015e06) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001a831) ai2_news_ticker_pane_t

0xafda,	// (0x00015e33) heading_ai2_gene_pane_g1

0xafe2,	// (0x00015e3b) heading_ai2_gene_pane_t1_ParamLimits

0xafe2,	// (0x00015e3b) heading_ai2_gene_pane_t1

0xaff7,	// (0x00015e50) list_highlight_pane_cp6

0xafff,	// (0x00015e58) ai2_gene_pane_ParamLimits

0xafff,	// (0x00015e58) ai2_gene_pane

0xb024,	// (0x00015e7d) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001a836) list_ai2_gene_pane_t

0xb032,	// (0x00015e8b) list_highlight_pane_cp8_ParamLimits

0xb032,	// (0x00015e8b) list_highlight_pane_cp8

0xb043,	// (0x00015e9c) ai2_gene_pane_g1_ParamLimits

0xb043,	// (0x00015e9c) ai2_gene_pane_g1

0xb055,	// (0x00015eae) ai2_gene_pane_g2_ParamLimits

0xb055,	// (0x00015eae) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001a83b) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001a83b) ai2_gene_pane_g

0x76fa,	// (0x00012553) scroll_pane_cp12

0x52d6,	// (0x0001012f) control_pane_t3_ParamLimits

0x52d6,	// (0x0001012f) control_pane_t3

0x8df4,	// (0x00013c4d) status_small_pane_g8_ParamLimits

0x8df4,	// (0x00013c4d) status_small_pane_g8

0x54b5,	// (0x0001030e) popup_find_window_ParamLimits

0x56ca,	// (0x00010523) popup_note_image_window_ParamLimits

0x937a,	// (0x000141d3) list_double2_graphic_pane_vc_g1_ParamLimits

0x937a,	// (0x000141d3) list_double2_graphic_pane_vc_g1

0x8ab7,	// (0x00013910) list_double2_graphic_pane_vc_g2_ParamLimits

0x8ab7,	// (0x00013910) list_double2_graphic_pane_vc_g2

0x9386,	// (0x000141df) list_double2_graphic_pane_vc_g3_ParamLimits

0x9386,	// (0x000141df) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a612) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a612) list_double2_graphic_pane_vc_g

0x9392,	// (0x000141eb) list_double2_graphic_pane_vc_t1_ParamLimits

0x9392,	// (0x000141eb) list_double2_graphic_pane_vc_t1

0x8ab7,	// (0x00013910) list_single_heading_pane_vc_g1_ParamLimits

0x8ab7,	// (0x00013910) list_single_heading_pane_vc_g1

0x9386,	// (0x000141df) list_single_heading_pane_vc_g2_ParamLimits

0x9386,	// (0x000141df) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a633) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a633) list_single_heading_pane_vc_g

0x944c,	// (0x000142a5) list_single_heading_pane_vc_t1_ParamLimits

0x944c,	// (0x000142a5) list_single_heading_pane_vc_t1

0x9464,	// (0x000142bd) list_single_heading_pane_vc_t2_ParamLimits

0x9464,	// (0x000142bd) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001a638) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001a638) list_single_heading_pane_vc_t

0x9480,	// (0x000142d9) list_setting_number_pane_vc_g1_ParamLimits

0x9480,	// (0x000142d9) list_setting_number_pane_vc_g1

0x948c,	// (0x000142e5) list_setting_number_pane_vc_g2_ParamLimits

0x948c,	// (0x000142e5) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a63d) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a63d) list_setting_number_pane_vc_g

0x9498,	// (0x000142f1) list_setting_number_pane_vc_t1_ParamLimits

0x9498,	// (0x000142f1) list_setting_number_pane_vc_t1

0x94ac,	// (0x00014305) list_setting_number_pane_vc_t2_ParamLimits

0x94ac,	// (0x00014305) list_setting_number_pane_vc_t2

0x94c8,	// (0x00014321) list_setting_number_pane_vc_t3_ParamLimits

0x94c8,	// (0x00014321) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001a642) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001a642) list_setting_number_pane_vc_t

0x94f6,	// (0x0001434f) set_value_pane_vc_ParamLimits

0x94f6,	// (0x0001434f) set_value_pane_vc

0xab0a,	// (0x00015963) list_double2_graphic_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double2_graphic_pane_vc

0xab0a,	// (0x00015963) list_double2_large_graphic_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double2_large_graphic_pane_vc

0xab0a,	// (0x00015963) list_double2_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double2_pane_vc

0xab0a,	// (0x00015963) list_double_graphic_heading_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double_graphic_heading_pane_vc

0xab0a,	// (0x00015963) list_double_graphic_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double_graphic_pane_vc

0xab0a,	// (0x00015963) list_double_heading_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double_heading_pane_vc

0xab1c,	// (0x00015975) list_double_large_graphic_pane_vc_ParamLimits

0xab1c,	// (0x00015975) list_double_large_graphic_pane_vc

0xab0a,	// (0x00015963) list_double_number_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double_number_pane_vc

0xab0a,	// (0x00015963) list_double_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double_pane_vc

0xab0a,	// (0x00015963) list_double_time_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_double_time_pane_vc

0xab0a,	// (0x00015963) list_setting_number_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_setting_number_pane_vc

0xab0a,	// (0x00015963) list_setting_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_setting_pane_vc

0xab0a,	// (0x00015963) list_single_graphic_heading_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_single_graphic_heading_pane_vc

0xab0a,	// (0x00015963) list_single_heading_pane_vc_ParamLimits

0xab0a,	// (0x00015963) list_single_heading_pane_vc

0xab3a,	// (0x00015993) list_single_number_heading_pane_vc_ParamLimits

0xab3a,	// (0x00015993) list_single_number_heading_pane_vc

0x937a,	// (0x000141d3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x937a,	// (0x000141d3) list_double_graphic_heading_pane_vc_g1

0xb0f6,	// (0x00015f4f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb0f6,	// (0x00015f4f) list_double_graphic_heading_pane_vc_g2

0xb102,	// (0x00015f5b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb102,	// (0x00015f5b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001a847) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001a847) list_double_graphic_heading_pane_vc_g

0xb10e,	// (0x00015f67) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb10e,	// (0x00015f67) list_double_graphic_heading_pane_vc_t1

0xb12a,	// (0x00015f83) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb12a,	// (0x00015f83) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001a84e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001a84e) list_double_graphic_heading_pane_vc_t

0x9480,	// (0x000142d9) list_setting_pane_vc_g1_ParamLimits

0x9480,	// (0x000142d9) list_setting_pane_vc_g1

0x948c,	// (0x000142e5) list_setting_pane_vc_g2_ParamLimits

0x948c,	// (0x000142e5) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001a63d) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001a63d) list_setting_pane_vc_g

0xb356,	// (0x000161af) list_setting_pane_vc_t1_ParamLimits

0xb356,	// (0x000161af) list_setting_pane_vc_t1

0xb372,	// (0x000161cb) list_setting_pane_vc_t2_ParamLimits

0xb372,	// (0x000161cb) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001a87c) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001a87c) list_setting_pane_vc_t

0x94f6,	// (0x0001434f) set_value_pane_cp_vc_ParamLimits

0x94f6,	// (0x0001434f) set_value_pane_cp_vc

0x8ab7,	// (0x00013910) list_single_number_heading_pane_vc_g1_ParamLimits

0x8ab7,	// (0x00013910) list_single_number_heading_pane_vc_g1

0x9386,	// (0x000141df) list_single_number_heading_pane_vc_g2_ParamLimits

0x9386,	// (0x000141df) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a633) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a633) list_single_number_heading_pane_vc_g

0x944c,	// (0x000142a5) list_single_number_heading_pane_vc_t1_ParamLimits

0x944c,	// (0x000142a5) list_single_number_heading_pane_vc_t1

0xb38e,	// (0x000161e7) list_single_number_heading_pane_vc_t2_ParamLimits

0xb38e,	// (0x000161e7) list_single_number_heading_pane_vc_t2

0xb3a2,	// (0x000161fb) list_single_number_heading_pane_vc_t3_ParamLimits

0xb3a2,	// (0x000161fb) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001a881) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001a881) list_single_number_heading_pane_vc_t

0x937a,	// (0x000141d3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x937a,	// (0x000141d3) list_single_graphic_heading_pane_vc_g1

0x8ab7,	// (0x00013910) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8ab7,	// (0x00013910) list_single_graphic_heading_pane_vc_g4

0x9386,	// (0x000141df) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9386,	// (0x000141df) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a612) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a612) list_single_graphic_heading_pane_vc_g

0x944c,	// (0x000142a5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x944c,	// (0x000142a5) list_single_graphic_heading_pane_vc_t1

0xb3b4,	// (0x0001620d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb3b4,	// (0x0001620d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001a888) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001a888) list_single_graphic_heading_pane_vc_t

0x8ab7,	// (0x00013910) list_double2_pane_vc_g1_ParamLimits

0x8ab7,	// (0x00013910) list_double2_pane_vc_g1

0x9386,	// (0x000141df) list_double2_pane_vc_g2_ParamLimits

0x9386,	// (0x000141df) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a633) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a633) list_double2_pane_vc_g

0xb3c8,	// (0x00016221) list_double2_pane_vc_t1_ParamLimits

0xb3c8,	// (0x00016221) list_double2_pane_vc_t1

0xb3de,	// (0x00016237) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb3de,	// (0x00016237) list_double2_large_graphic_pane_vc_g1

0x8ab7,	// (0x00013910) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8ab7,	// (0x00013910) list_double2_large_graphic_pane_vc_g2

0x9386,	// (0x000141df) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9386,	// (0x000141df) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001a88d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001a88d) list_double2_large_graphic_pane_vc_g

0xb3ea,	// (0x00016243) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb3ea,	// (0x00016243) list_double2_large_graphic_pane_vc_t1

0xb400,	// (0x00016259) list_double_time_pane_vc_g1_ParamLimits

0xb400,	// (0x00016259) list_double_time_pane_vc_g1

0xb40c,	// (0x00016265) list_double_time_pane_vc_g2_ParamLimits

0xb40c,	// (0x00016265) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001a894) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001a894) list_double_time_pane_vc_g

0xb418,	// (0x00016271) list_double_time_pane_vc_t1_ParamLimits

0xb418,	// (0x00016271) list_double_time_pane_vc_t1

0xb43c,	// (0x00016295) list_double_time_pane_vc_t2_ParamLimits

0xb43c,	// (0x00016295) list_double_time_pane_vc_t2

0xb46b,	// (0x000162c4) list_double_time_pane_vc_t3_ParamLimits

0xb46b,	// (0x000162c4) list_double_time_pane_vc_t3

0xb47d,	// (0x000162d6) list_double_time_pane_vc_t4_ParamLimits

0xb47d,	// (0x000162d6) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001a899) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001a899) list_double_time_pane_vc_t

0x8ab7,	// (0x00013910) list_double_pane_vc_g1_ParamLimits

0x8ab7,	// (0x00013910) list_double_pane_vc_g1

0x9386,	// (0x000141df) list_double_pane_vc_g2_ParamLimits

0x9386,	// (0x000141df) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a633) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a633) list_double_pane_vc_g

0xb491,	// (0x000162ea) list_double_pane_vc_t1_ParamLimits

0xb491,	// (0x000162ea) list_double_pane_vc_t1

0xb4a5,	// (0x000162fe) list_double_pane_vc_t2_ParamLimits

0xb4a5,	// (0x000162fe) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001a8a2) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001a8a2) list_double_pane_vc_t

0x8ab7,	// (0x00013910) list_double_number_pane_vc_g1_ParamLimits

0x8ab7,	// (0x00013910) list_double_number_pane_vc_g1

0x9386,	// (0x000141df) list_double_number_pane_vc_g2_ParamLimits

0x9386,	// (0x000141df) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001a633) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001a633) list_double_number_pane_vc_g

0xb4bd,	// (0x00016316) list_double_number_pane_vc_t1_ParamLimits

0xb4bd,	// (0x00016316) list_double_number_pane_vc_t1

0xb4cf,	// (0x00016328) list_double_number_pane_vc_t2_ParamLimits

0xb4cf,	// (0x00016328) list_double_number_pane_vc_t2

0xb4e3,	// (0x0001633c) list_double_number_pane_vc_t3_ParamLimits

0xb4e3,	// (0x0001633c) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001a8a7) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001a8a7) list_double_number_pane_vc_t

0xb4fb,	// (0x00016354) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb4fb,	// (0x00016354) list_double_large_graphic_pane_vc_g1

0xb51d,	// (0x00016376) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb51d,	// (0x00016376) list_double_large_graphic_pane_vc_g2

0xb531,	// (0x0001638a) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb531,	// (0x0001638a) list_double_large_graphic_pane_vc_g3

0xb540,	// (0x00016399) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb540,	// (0x00016399) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001a8ae) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001a8ae) list_double_large_graphic_pane_vc_g

0xb54c,	// (0x000163a5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb54c,	// (0x000163a5) list_double_large_graphic_pane_vc_t1

0xb568,	// (0x000163c1) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb568,	// (0x000163c1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001a8b7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a8b7) list_double_large_graphic_pane_vc_t

0xb0f6,	// (0x00015f4f) list_double_heading_pane_vc_g1_ParamLimits

0xb0f6,	// (0x00015f4f) list_double_heading_pane_vc_g1

0xb102,	// (0x00015f5b) list_double_heading_pane_vc_g2_ParamLimits

0xb102,	// (0x00015f5b) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001a8bc) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001a8bc) list_double_heading_pane_vc_g

0xb58a,	// (0x000163e3) list_double_heading_pane_vc_t1_ParamLimits

0xb58a,	// (0x000163e3) list_double_heading_pane_vc_t1

0x944c,	// (0x000142a5) list_double_heading_pane_vc_t2_ParamLimits

0x944c,	// (0x000142a5) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001a8c1) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001a8c1) list_double_heading_pane_vc_t

0xb59e,	// (0x000163f7) list_double_graphic_pane_vc_g1_ParamLimits

0xb59e,	// (0x000163f7) list_double_graphic_pane_vc_g1

0xb5aa,	// (0x00016403) list_double_graphic_pane_vc_g2_ParamLimits

0xb5aa,	// (0x00016403) list_double_graphic_pane_vc_g2

0x8ab7,	// (0x00013910) list_double_graphic_pane_vc_g3_ParamLimits

0x8ab7,	// (0x00013910) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001a8c6) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001a8c6) list_double_graphic_pane_vc_g

0xb5c7,	// (0x00016420) list_double_graphic_pane_vc_t1_ParamLimits

0xb5c7,	// (0x00016420) list_double_graphic_pane_vc_t1

0xb5f1,	// (0x0001644a) list_double_graphic_pane_vc_t2_ParamLimits

0xb5f1,	// (0x0001644a) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001a8cf) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001a8cf) list_double_graphic_pane_vc_t

0x48d4,	// (0x0000f72d) aid_size_cell_fastswap

0x48dc,	// (0x0000f735) aid_size_cell_touch_ParamLimits

0x48dc,	// (0x0000f735) aid_size_cell_touch

0x4b41,	// (0x0000f99a) popup_fast_swap_wide_window_ParamLimits

0x4b41,	// (0x0000f99a) popup_fast_swap_wide_window

0x4c55,	// (0x0000faae) touch_pane_ParamLimits

0x4c55,	// (0x0000faae) touch_pane

0x7bf9,	// (0x00012a52) button_value_adjust_pane_cp2

0x7c01,	// (0x00012a5a) button_value_adjust_pane_cp4

0x7c23,	// (0x00012a7c) form_field_data_pane_cp2

0x7c44,	// (0x00012a9d) form_field_data_wide_pane_cp2

0x82c6,	// (0x0001311f) bg_scroll_pane_ParamLimits

0x4ee3,	// (0x0000fd3c) scroll_handle_pane_ParamLimits

0x4ef7,	// (0x0000fd50) scroll_sc2_down_pane_ParamLimits

0x4ef7,	// (0x0000fd50) scroll_sc2_down_pane

0x82f7,	// (0x00013150) scroll_sc2_up_pane_ParamLimits

0x82f7,	// (0x00013150) scroll_sc2_up_pane

0xbaa9,	// (0x00016902) grid_wheel_folder_pane_g1_ParamLimits

0xbaa9,	// (0x00016902) grid_wheel_folder_pane_g1

0x50bc,	// (0x0000ff15) clock_nsta_pane_cp2_ParamLimits

0x50bc,	// (0x0000ff15) clock_nsta_pane_cp2

0x803d,	// (0x00012e96) listscroll_midp_pane_ParamLimits

0x8b86,	// (0x000139df) midp_canvas_pane

0x8e6e,	// (0x00013cc7) nsta_clock_indic_pane

0x8eaa,	// (0x00013d03) listscroll_form_pane_vc

0x8eb2,	// (0x00013d0b) listscroll_set_pane_vc_ParamLimits

0x8eb2,	// (0x00013d0b) listscroll_set_pane_vc

0x8fbf,	// (0x00013e18) clock_nsta_pane

0x9034,	// (0x00013e8d) indicator_nsta_pane

0x9314,	// (0x0001416d) bg_popup_sub_pane_cp2_ParamLimits

0x9328,	// (0x00014181) find_pane_cp2_ParamLimits

0x9328,	// (0x00014181) find_pane_cp2

0x933e,	// (0x00014197) grid_toobar_pane_ParamLimits

0x9506,	// (0x0001435f) list_form_gen_pane_vc_ParamLimits

0x9506,	// (0x0001435f) list_form_gen_pane_vc

0x951c,	// (0x00014375) scroll_pane_cp8_vc_ParamLimits

0x951c,	// (0x00014375) scroll_pane_cp8_vc

0x9598,	// (0x000143f1) data_form_wide_pane_vc_ParamLimits

0x9598,	// (0x000143f1) data_form_wide_pane_vc

0x95a4,	// (0x000143fd) form_field_data_wide_pane_vc_g1

0x95ac,	// (0x00014405) form_field_data_wide_pane_vc_t1_ParamLimits

0x95ac,	// (0x00014405) form_field_data_wide_pane_vc_t1

0x7cdf,	// (0x00012b38) input_focus_pane_cp6_vc_ParamLimits

0x7cdf,	// (0x00012b38) input_focus_pane_cp6_vc

0x9916,	// (0x0001476f) list_midp_pane_ParamLimits

0x9922,	// (0x0001477b) scroll_pane_cp16_ParamLimits

0x9922,	// (0x0001477b) scroll_pane_cp16

0x9970,	// (0x000147c9) button_value_adjust_pane_ParamLimits

0x9970,	// (0x000147c9) button_value_adjust_pane

0xa916,	// (0x0001576f) button_value_adjust_pane_cp6_ParamLimits

0xa916,	// (0x0001576f) button_value_adjust_pane_cp6

0xaa40,	// (0x00015899) settings_code_pane_cp_ParamLimits

0xaa40,	// (0x00015899) settings_code_pane_cp

0x6df1,	// (0x00011c4a) cell_touch_pane_g1

0x6df1,	// (0x00011c4a) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a557) cell_touch_pane_g

0xb0d4,	// (0x00015f2d) cell_touch_pane_cp_ParamLimits

0xb0d4,	// (0x00015f2d) cell_touch_pane_cp

0xb0e4,	// (0x00015f3d) cell_touch_pane_ParamLimits

0xb0e4,	// (0x00015f3d) cell_touch_pane

0x6df1,	// (0x00011c4a) scroll_sc2_down_pane_g1

0x6df1,	// (0x00011c4a) scroll_sc2_up_pane_g1

0x6dfb,	// (0x00011c54) bg_set_opt_pane_cp4_vc

0xb148,	// (0x00015fa1) list_set_graphic_pane_vc_g1_ParamLimits

0xb148,	// (0x00015fa1) list_set_graphic_pane_vc_g1

0xb154,	// (0x00015fad) list_set_graphic_pane_vc_g2_ParamLimits

0xb154,	// (0x00015fad) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001a853) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001a853) list_set_graphic_pane_vc_g

0xb160,	// (0x00015fb9) text_primary_small_cp13_vc_ParamLimits

0xb160,	// (0x00015fb9) text_primary_small_cp13_vc

0xb178,	// (0x00015fd1) list_set_graphic_pane_vc_ParamLimits

0xb178,	// (0x00015fd1) list_set_graphic_pane_vc

0x6dfb,	// (0x00011c54) input_focus_pane_cp2_vc

0x6df1,	// (0x00011c4a) setting_code_pane_vc_g1

0x6f26,	// (0x00011d7f) setting_code_pane_vc_t1

0xb18b,	// (0x00015fe4) set_text_pane_vc_t1_ParamLimits

0xb18b,	// (0x00015fe4) set_text_pane_vc_t1

0x6dfb,	// (0x00011c54) input_focus_pane_cp1_vc

0xb1a7,	// (0x00016000) list_set_text_pane_vc

0x6df1,	// (0x00011c4a) setting_text_pane_vc_g1

0x6dfb,	// (0x00011c54) bg_set_opt_pane_cp2_vc

0x6f1d,	// (0x00011d76) setting_slider_graphic_pane_vc_g1

0xb1b1,	// (0x0001600a) setting_slider_graphic_pane_vc_t1

0xb1c1,	// (0x0001601a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001a858) setting_slider_graphic_pane_vc_t

0xb1d1,	// (0x0001602a) slider_set_pane_cp_vc

0xb1d9,	// (0x00016032) slider_set_pane_vc_g1

0xb1e2,	// (0x0001603b) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001a85d) slider_set_pane_vc_g

0x7e08,	// (0x00012c61) set_opt_bg_pane_g1_copy1

0x7e10,	// (0x00012c69) set_opt_bg_pane_g2_copy1

0xb20e,	// (0x00016067) set_opt_bg_pane_g3_copy1

0x7e20,	// (0x00012c79) set_opt_bg_pane_g4_copy1

0x7e28,	// (0x00012c81) set_opt_bg_pane_g5_copy1

0x7e30,	// (0x00012c89) set_opt_bg_pane_g6_copy1

0xb218,	// (0x00016071) set_opt_bg_pane_g7_copy1

0xb220,	// (0x00016079) set_opt_bg_pane_g8_copy1

0xb22a,	// (0x00016083) set_opt_bg_pane_g9_copy1

0x6dfb,	// (0x00011c54) bg_set_opt_pane_cp_vc

0xb234,	// (0x0001608d) setting_slider_pane_vc_t1

0xb243,	// (0x0001609c) setting_slider_pane_vc_t2

0xb253,	// (0x000160ac) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001a86c) setting_slider_pane_vc_t

0xb263,	// (0x000160bc) slider_set_pane_vc

0x5ab0,	// (0x00010909) volume_set_pane_vc_g1

0x5ab9,	// (0x00010912) volume_set_pane_vc_g2

0x5ac2,	// (0x0001091b) volume_set_pane_vc_g3

0x5acb,	// (0x00010924) volume_set_pane_vc_g4

0x5ad4,	// (0x0001092d) volume_set_pane_vc_g5

0x5add,	// (0x00010936) volume_set_pane_vc_g6

0x5ae6,	// (0x0001093f) volume_set_pane_vc_g7

0x5aef,	// (0x00010948) volume_set_pane_vc_g8

0x5af8,	// (0x00010951) volume_set_pane_vc_g9

0x5b01,	// (0x0001095a) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001a70a) volume_set_pane_vc_g

0xb26b,	// (0x000160c4) volume_set_pane_vc

0xb273,	// (0x000160cc) button_value_adjust_pane_cp1_vc

0xb27d,	// (0x000160d6) list_highlight_pane_cp2_vc

0xb286,	// (0x000160df) list_set_pane_vc_ParamLimits

0xb286,	// (0x000160df) list_set_pane_vc

0xb2e4,	// (0x0001613d) main_pane_set_vc_t1_ParamLimits

0xb2e4,	// (0x0001613d) main_pane_set_vc_t1

0xb2f9,	// (0x00016152) main_pane_set_vc_t2_ParamLimits

0xb2f9,	// (0x00016152) main_pane_set_vc_t2

0xb30b,	// (0x00016164) main_pane_set_vc_t3_ParamLimits

0xb30b,	// (0x00016164) main_pane_set_vc_t3

0xb31f,	// (0x00016178) main_pane_set_vc_t4_ParamLimits

0xb31f,	// (0x00016178) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001a873) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001a873) main_pane_set_vc_t

0xb333,	// (0x0001618c) setting_code_pane_vc_ParamLimits

0xb333,	// (0x0001618c) setting_code_pane_vc

0xb344,	// (0x0001619d) setting_slider_graphic_pane_vc

0xb344,	// (0x0001619d) setting_slider_pane_vc

0xb344,	// (0x0001619d) setting_text_pane_vc

0xb344,	// (0x0001619d) setting_volume_pane_vc

0xb34e,	// (0x000161a7) scroll_pane_cp121_vc

0x7be7,	// (0x00012a40) set_content_pane_vc

0xb61b,	// (0x00016474) button_value_adjust_pane_g1

0xb624,	// (0x0001647d) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001a8d4) button_value_adjust_pane_g

0xb62d,	// (0x00016486) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb62d,	// (0x00016486) form_field_slider_wide_pane_vc_t1

0xb641,	// (0x0001649a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb641,	// (0x0001649a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001a8d9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001a8d9) form_field_slider_wide_pane_vc_t

0x7170,	// (0x00011fc9) input_focus_pane_cp10_vc_ParamLimits

0x7170,	// (0x00011fc9) input_focus_pane_cp10_vc

0xb66f,	// (0x000164c8) slider_cont_pane_cp1_vc_ParamLimits

0xb66f,	// (0x000164c8) slider_cont_pane_cp1_vc

0xb681,	// (0x000164da) slider_form_pane_g1_cp2

0xb1e2,	// (0x0001603b) slider_form_pane_g2_cp2

0xb6ae,	// (0x00016507) form_field_slider_pane_vc_t3

0xb6bc,	// (0x00016515) form_field_slider_pane_vc_t4

0xb6ca,	// (0x00016523) slider_form_pane_vc_ParamLimits

0xb6ca,	// (0x00016523) slider_form_pane_vc

0xb6d7,	// (0x00016530) form_field_slider_pane_vc_t1_ParamLimits

0xb6d7,	// (0x00016530) form_field_slider_pane_vc_t1

0xb641,	// (0x0001649a) form_field_slider_pane_vc_t2_ParamLimits

0xb641,	// (0x0001649a) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001a8eb) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001a8eb) form_field_slider_pane_vc_t

0x7170,	// (0x00011fc9) input_focus_pane_cp9_vc_ParamLimits

0x7170,	// (0x00011fc9) input_focus_pane_cp9_vc

0xb6f3,	// (0x0001654c) slider_cont_pane_vc_ParamLimits

0xb6f3,	// (0x0001654c) slider_cont_pane_vc

0xb707,	// (0x00016560) list_form_graphic_pane_cp_vc_ParamLimits

0xb707,	// (0x00016560) list_form_graphic_pane_cp_vc

0x95a4,	// (0x000143fd) form_field_popup_wide_pane_vc_g1

0xb71c,	// (0x00016575) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb71c,	// (0x00016575) form_field_popup_wide_pane_vc_t1

0x7cdf,	// (0x00012b38) input_focus_pane_cp8_vc_ParamLimits

0x7cdf,	// (0x00012b38) input_focus_pane_cp8_vc

0xb761,	// (0x000165ba) list_form_wide_pane_vc_ParamLimits

0xb761,	// (0x000165ba) list_form_wide_pane_vc

0xb76d,	// (0x000165c6) list_form_graphic_pane_vc_g1

0xb775,	// (0x000165ce) list_form_graphic_pane_vc_t1_ParamLimits

0xb775,	// (0x000165ce) list_form_graphic_pane_vc_t1

0x6edb,	// (0x00011d34) list_highlight_pane_cp5_vc_ParamLimits

0x6edb,	// (0x00011d34) list_highlight_pane_cp5_vc

0xb791,	// (0x000165ea) list_form_graphic_pane_vc_ParamLimits

0xb791,	// (0x000165ea) list_form_graphic_pane_vc

0x95a4,	// (0x000143fd) form_field_popup_pane_vc_g1

0xb7a7,	// (0x00016600) form_field_popup_pane_vc_t1_ParamLimits

0xb7a7,	// (0x00016600) form_field_popup_pane_vc_t1

0x7cdf,	// (0x00012b38) input_focus_pane_cp7_vc_ParamLimits

0x7cdf,	// (0x00012b38) input_focus_pane_cp7_vc

0xb7be,	// (0x00016617) list_form_pane_vc_ParamLimits

0xb7be,	// (0x00016617) list_form_pane_vc

0xb7ca,	// (0x00016623) data_form_pane_vc_t1_ParamLimits

0xb7ca,	// (0x00016623) data_form_pane_vc_t1

0x7e08,	// (0x00012c61) input_focus_pane_vc_g1

0x7e10,	// (0x00012c69) input_focus_pane_vc_g2

0x7e18,	// (0x00012c71) input_focus_pane_vc_g3

0x7e20,	// (0x00012c79) input_focus_pane_vc_g4

0x7e28,	// (0x00012c81) input_focus_pane_vc_g5

0x7e30,	// (0x00012c89) input_focus_pane_vc_g6

0x7e38,	// (0x00012c91) input_focus_pane_vc_g7

0x7e40,	// (0x00012c99) input_focus_pane_vc_g8

0x7e48,	// (0x00012ca1) input_focus_pane_vc_g9

0x6df1,	// (0x00011c4a) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a4e0) input_focus_pane_vc_g

0x9598,	// (0x000143f1) data_form_pane_vc_ParamLimits

0x9598,	// (0x000143f1) data_form_pane_vc

0x95a4,	// (0x000143fd) form_field_data_pane_vc_g1

0xb7e5,	// (0x0001663e) form_field_data_pane_vc_t1_ParamLimits

0xb7e5,	// (0x0001663e) form_field_data_pane_vc_t1

0x7cdf,	// (0x00012b38) input_focus_pane_vc_ParamLimits

0x7cdf,	// (0x00012b38) input_focus_pane_vc

0xb7ff,	// (0x00016658) button_value_adjust_pane_cp3_vc

0xb807,	// (0x00016660) button_value_adjust_pane_cp5_vc

0xb80f,	// (0x00016668) form_field_data_pane_vc_ParamLimits

0xb80f,	// (0x00016668) form_field_data_pane_vc

0xb826,	// (0x0001667f) form_field_data_pane_vc_cp2

0xb82e,	// (0x00016687) form_field_data_wide_pane_vc_ParamLimits

0xb82e,	// (0x00016687) form_field_data_wide_pane_vc

0xb844,	// (0x0001669d) form_field_data_wide_pane_vc_cp2

0xb84c,	// (0x000166a5) form_field_popup_pane_vc_ParamLimits

0xb84c,	// (0x000166a5) form_field_popup_pane_vc

0xb863,	// (0x000166bc) form_field_popup_wide_pane_vc_ParamLimits

0xb863,	// (0x000166bc) form_field_popup_wide_pane_vc

0xb879,	// (0x000166d2) form_field_slider_pane_vc_ParamLimits

0xb879,	// (0x000166d2) form_field_slider_pane_vc

0xb88c,	// (0x000166e5) form_field_slider_wide_pane_vc_ParamLimits

0xb88c,	// (0x000166e5) form_field_slider_wide_pane_vc

0xb89f,	// (0x000166f8) grid_touch_1_pane_ParamLimits

0xb89f,	// (0x000166f8) grid_touch_1_pane

0xb8ab,	// (0x00016704) grid_touch_2_pane_ParamLimits

0xb8ab,	// (0x00016704) grid_touch_2_pane

0x8e39,	// (0x00013c92) touch_pane_g1_ParamLimits

0x8e39,	// (0x00013c92) touch_pane_g1

0xb8c3,	// (0x0001671c) cell_app_pane_cp_wide_ParamLimits

0xb8c3,	// (0x0001671c) cell_app_pane_cp_wide

0xb8d4,	// (0x0001672d) grid_popup_fast_wide_pane_ParamLimits

0xb8d4,	// (0x0001672d) grid_popup_fast_wide_pane

0xb8e8,	// (0x00016741) scroll_pane_cp19_ParamLimits

0xb8e8,	// (0x00016741) scroll_pane_cp19

0x6dfb,	// (0x00011c54) bg_popup_window_pane_cp20

0xb8fc,	// (0x00016755) listscroll_popup_fast_wide_pane

0x6edb,	// (0x00011d34) grid_indicator_nsta_pane

0xb904,	// (0x0001675d) clock_nsta_pane_g1

0xb90d,	// (0x00016766) clock_nsta_pane_t1

0xb929,	// (0x00016782) cell_indicator_nsta_pane_ParamLimits

0xb929,	// (0x00016782) cell_indicator_nsta_pane

0xb95a,	// (0x000167b3) cell_indicator_nsta_pane_g1

0xb968,	// (0x000167c1) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001a8fc) cell_indicator_nsta_pane_g

0xb975,	// (0x000167ce) clock_nsta_pane_cp

0xb97d,	// (0x000167d6) indicator_nsta_pane_cp

0xb985,	// (0x000167de) nsta_clock_indic_pane_g1

0x6fbe,	// (0x00011e17) grid_indicator_pane

0x83ec,	// (0x00013245) scroll_pane_cp29

0x500b,	// (0x0000fe64) indicator_nsta_pane_cp2_ParamLimits

0x500b,	// (0x0000fe64) indicator_nsta_pane_cp2

0x6edb,	// (0x00011d34) main_apps_wheel_pane

0x97f7,	// (0x00014650) form_midp_field_text_pane_ParamLimits

0x9942,	// (0x0001479b) scroll_bar_cp050_ParamLimits

0xb9e6,	// (0x0001683f) cell_indicator_pane_ParamLimits

0xb9e6,	// (0x0001683f) cell_indicator_pane

0xb9fd,	// (0x00016856) cell_indicator_pane_g1

0xba07,	// (0x00016860) grid_wheel_folder_pane_ParamLimits

0xba07,	// (0x00016860) grid_wheel_folder_pane

0xba1d,	// (0x00016876) list_wheel_apps_pane_ParamLimits

0xba1d,	// (0x00016876) list_wheel_apps_pane

0xba2e,	// (0x00016887) main_apps_wheel_pane_g1_ParamLimits

0xba2e,	// (0x00016887) main_apps_wheel_pane_g1

0xba42,	// (0x0001689b) main_apps_wheel_pane_g2_ParamLimits

0xba42,	// (0x0001689b) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001a918) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001a918) main_apps_wheel_pane_g

0xba5a,	// (0x000168b3) main_apps_wheel_pane_t1_ParamLimits

0xba5a,	// (0x000168b3) main_apps_wheel_pane_t1

0xba7d,	// (0x000168d6) list_wheel_apps_pane_g1

0xba85,	// (0x000168de) list_wheel_apps_pane_g2

0xba8d,	// (0x000168e6) list_wheel_apps_pane_g3

0xba95,	// (0x000168ee) list_wheel_apps_pane_g4

0xba9f,	// (0x000168f8) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001a91d) list_wheel_apps_pane_g

0x89fe,	// (0x00013857) navi_icon_text_pane

0x8eee,	// (0x00013d47) aid_fill_nsta

0xbac2,	// (0x0001691b) navi_icon_text_pane_g1

0xbace,	// (0x00016927) navi_icon_text_pane_t1

0x8891,	// (0x000136ea) list_set_graphic_pane_t1_ParamLimits

0x8891,	// (0x000136ea) list_set_graphic_pane_t1

0xa091,	// (0x00014eea) popup_midp_note_alarm_window_t6_ParamLimits

0xa091,	// (0x00014eea) popup_midp_note_alarm_window_t6

0xa0a3,	// (0x00014efc) popup_midp_note_alarm_window_t7_ParamLimits

0xa0a3,	// (0x00014efc) popup_midp_note_alarm_window_t7

0xa0b5,	// (0x00014f0e) popup_midp_note_alarm_window_t8_ParamLimits

0xa0b5,	// (0x00014f0e) popup_midp_note_alarm_window_t8

0xa0c7,	// (0x00014f20) popup_midp_note_alarm_window_t9_ParamLimits

0xa0c7,	// (0x00014f20) popup_midp_note_alarm_window_t9

0xa0d9,	// (0x00014f32) popup_midp_note_alarm_window_t10_ParamLimits

0xa0d9,	// (0x00014f32) popup_midp_note_alarm_window_t10

0xa0eb,	// (0x00014f44) popup_midp_note_alarm_window_t11_ParamLimits

0xa0eb,	// (0x00014f44) popup_midp_note_alarm_window_t11

0xa0fd,	// (0x00014f56) scroll_pane_cp17_ParamLimits

0xa0fd,	// (0x00014f56) scroll_pane_cp17

0x5ab0,	// (0x00010909) volume_small_pane_cp_g1

0x5da5,	// (0x00010bfe) volume_small_pane_cp_g2

0x5dae,	// (0x00010c07) volume_small_pane_cp_g3

0x5db7,	// (0x00010c10) volume_small_pane_cp_g4

0x5dc0,	// (0x00010c19) volume_small_pane_cp_g5

0x5dc9,	// (0x00010c22) volume_small_pane_cp_g6

0x5dd2,	// (0x00010c2b) volume_small_pane_cp_g7

0x5ddb,	// (0x00010c34) volume_small_pane_cp_g8

0x5de4,	// (0x00010c3d) volume_small_pane_cp_g9

0x5ded,	// (0x00010c46) volume_small_pane_cp_g10

0x8c4f,	// (0x00013aa8) midp_ticker_pane_g1_ParamLimits

0x8c5b,	// (0x00013ab4) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a5ac) midp_ticker_pane_g_ParamLimits

0x8c67,	// (0x00013ac0) midp_ticker_pane_t1_ParamLimits

0x8f04,	// (0x00013d5d) aid_fill_nsta_2

0x992e,	// (0x00014787) list_form2_midp_pane

0xaabe,	// (0x00015917) midp_editing_number_pane_ParamLimits

0xaacd,	// (0x00015926) midp_ticker_pane_ParamLimits

0xbae0,	// (0x00016939) form2_midp_field_pane

0xbb04,	// (0x0001695d) scroll_pane_cp51

0xbb24,	// (0x0001697d) form2_midp_button_pane_ParamLimits

0xbb24,	// (0x0001697d) form2_midp_button_pane

0xbb36,	// (0x0001698f) form2_midp_content_pane_ParamLimits

0xbb36,	// (0x0001698f) form2_midp_content_pane

0xbb50,	// (0x000169a9) form2_midp_field_choice_group_pane

0xbb58,	// (0x000169b1) form2_midp_field_pane_g1

0xbb60,	// (0x000169b9) form2_midp_field_pane_g2

0xbb68,	// (0x000169c1) form2_midp_field_pane_g3

0xbb70,	// (0x000169c9) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001a942) form2_midp_field_pane_g

0xbb78,	// (0x000169d1) form2_midp_gauge_slider_pane

0xbb80,	// (0x000169d9) form2_midp_gauge_wait_pane

0xbb88,	// (0x000169e1) form2_midp_image_pane_ParamLimits

0xbb88,	// (0x000169e1) form2_midp_image_pane

0xbba3,	// (0x000169fc) form2_midp_label_pane_ParamLimits

0xbba3,	// (0x000169fc) form2_midp_label_pane

0xbbbc,	// (0x00016a15) form2_midp_label_pane_cp_ParamLimits

0xbbbc,	// (0x00016a15) form2_midp_label_pane_cp

0xbbdd,	// (0x00016a36) form2_midp_string_pane_ParamLimits

0xbbdd,	// (0x00016a36) form2_midp_string_pane

0xbbef,	// (0x00016a48) form2_midp_text_pane_ParamLimits

0xbbef,	// (0x00016a48) form2_midp_text_pane

0xbc0c,	// (0x00016a65) form2_midp_time_pane

0xbc1c,	// (0x00016a75) input_focus_pane_cp51_ParamLimits

0xbc1c,	// (0x00016a75) input_focus_pane_cp51

0xbc34,	// (0x00016a8d) form2_midp_label_pane_t1_ParamLimits

0xbc34,	// (0x00016a8d) form2_midp_label_pane_t1

0xbc75,	// (0x00016ace) form2_mdip_text_pane_t1_ParamLimits

0xbc75,	// (0x00016ace) form2_mdip_text_pane_t1

0xbc94,	// (0x00016aed) form2_midp_time_pane_t1

0xbcaf,	// (0x00016b08) form2_midp_gauge_slider_pane_t1

0xbcc1,	// (0x00016b1a) form2_midp_gauge_slider_pane_t2

0xbcd3,	// (0x00016b2c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001a94b) form2_midp_gauge_slider_pane_t

0xbce5,	// (0x00016b3e) form2_midp_slider_pane

0xbcf1,	// (0x00016b4a) form2_midp_gauge_wait_pane_t1

0xbcff,	// (0x00016b58) form2_midp_wait_pane_ParamLimits

0xbcff,	// (0x00016b58) form2_midp_wait_pane

0x95eb,	// (0x00014444) list_single_2graphic_pane_cp4_ParamLimits

0x95eb,	// (0x00014444) list_single_2graphic_pane_cp4

0xbd2a,	// (0x00016b83) list_single_midp_graphic_pane_cp_ParamLimits

0xbd2a,	// (0x00016b83) list_single_midp_graphic_pane_cp

0x6dfb,	// (0x00011c54) list_highlight_pane_cp20

0xbd59,	// (0x00016bb2) list_single_2graphic_pane_g1_cp4

0xbd61,	// (0x00016bba) list_single_2graphic_pane_g2_cp4

0xbd69,	// (0x00016bc2) list_single_2graphic_pane_t1_cp4

0x6edb,	// (0x00011d34) list_highlight_pane_cp21

0xbd78,	// (0x00016bd1) list_single_midp_graphic_pane_g4_cp

0xbd87,	// (0x00016be0) list_single_midp_graphic_pane_t1_cp

0xbd9c,	// (0x00016bf5) form2_mdip_string_pane_t1_ParamLimits

0xbd9c,	// (0x00016bf5) form2_mdip_string_pane_t1

0x6dfb,	// (0x00011c54) bg_wml_button_pane_cp2

0x6df1,	// (0x00011c4a) form2_midp_image_pane_g1

0x799d,	// (0x000127f6) list_double_large_graphic_pane_g5_ParamLimits

0x799d,	// (0x000127f6) list_double_large_graphic_pane_g5

0x803d,	// (0x00012e96) midp_form_pane_ParamLimits

0x6edb,	// (0x00011d34) main_apps_wheel_pane_ParamLimits

0x56f0,	// (0x00010549) popup_preview_window_ParamLimits

0x56f0,	// (0x00010549) popup_preview_window

0x58ab,	// (0x00010704) popup_touch_info_window_ParamLimits

0x58ab,	// (0x00010704) popup_touch_info_window

0x58c9,	// (0x00010722) popup_touch_menu_window_ParamLimits

0x58c9,	// (0x00010722) popup_touch_menu_window

0x6de7,	// (0x00011c40) bg_popup_sub_pane_cp6

0xbe95,	// (0x00016cee) list_touch_menu_pane

0xbe9d,	// (0x00016cf6) list_single_touch_menu_pane_ParamLimits

0xbe9d,	// (0x00016cf6) list_single_touch_menu_pane

0xbeb3,	// (0x00016d0c) list_single_touch_menu_pane_t1

0x6edb,	// (0x00011d34) bg_popup_sub_pane_cp7_ParamLimits

0x6edb,	// (0x00011d34) bg_popup_sub_pane_cp7

0xbec1,	// (0x00016d1a) heading_sub_pane

0xbec9,	// (0x00016d22) list_touch_info_pane_ParamLimits

0xbec9,	// (0x00016d22) list_touch_info_pane

0xbed8,	// (0x00016d31) list_single_touch_info_pane_ParamLimits

0xbed8,	// (0x00016d31) list_single_touch_info_pane

0xbeea,	// (0x00016d43) list_single_touch_info_pane_t1

0xbef8,	// (0x00016d51) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001a959) list_single_touch_info_pane_t

0x8b7e,	// (0x000139d7) bg_popup_heading_pane_cp

0xbf06,	// (0x00016d5f) heading_sub_pane_t1

0x9532,	// (0x0001438b) bg_popup_preview_window_pane_cp_ParamLimits

0x9532,	// (0x0001438b) bg_popup_preview_window_pane_cp

0xbec1,	// (0x00016d1a) heading_preview_pane

0xbec9,	// (0x00016d22) list_preview_pane_ParamLimits

0xbec9,	// (0x00016d22) list_preview_pane

0xbf14,	// (0x00016d6d) popup_preview_window_g1

0xbed8,	// (0x00016d31) list_single_preview_pane_ParamLimits

0xbed8,	// (0x00016d31) list_single_preview_pane

0xbf1c,	// (0x00016d75) list_single_preview_pane_g1

0xbf24,	// (0x00016d7d) list_single_preview_pane_t1

0xbeea,	// (0x00016d43) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001a95e) list_single_preview_pane_t

0xbf32,	// (0x00016d8b) bg_popup_heading_pane_cp2_ParamLimits

0xbf32,	// (0x00016d8b) bg_popup_heading_pane_cp2

0xbf48,	// (0x00016da1) heading_preview_pane_g1

0xbf50,	// (0x00016da9) heading_preview_pane_t1_ParamLimits

0xbf50,	// (0x00016da9) heading_preview_pane_t1

0x6fe1,	// (0x00011e3a) soft_indicator_pane_t1_ParamLimits

0x76d7,	// (0x00012530) scroll_pane_ParamLimits

0x82e5,	// (0x0001313e) scroll_sc2_left_pane

0x82ee,	// (0x00013147) scroll_sc2_right_pane

0x830d,	// (0x00013166) scroll_bg_pane_g1_ParamLimits

0x8322,	// (0x0001317b) scroll_bg_pane_g2_ParamLimits

0x833a,	// (0x00013193) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a537) scroll_bg_pane_g_ParamLimits

0x830d,	// (0x00013166) scroll_handle_pane_g1_ParamLimits

0x835c,	// (0x000131b5) scroll_handle_pane_g2_ParamLimits

0x833a,	// (0x00013193) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a53e) scroll_handle_pane_g_ParamLimits

0x5371,	// (0x000101ca) popup_choice_list_window_ParamLimits

0x5371,	// (0x000101ca) popup_choice_list_window

0x9320,	// (0x00014179) choice_list_pane

0x93d0,	// (0x00014229) cell_toolbar_pane_t1

0x93f8,	// (0x00014251) toolbar_button_pane_ParamLimits

0xa5c3,	// (0x0001541c) ai_gene_pane_1_t2_ParamLimits

0xa5c3,	// (0x0001541c) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001a766) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001a766) ai_gene_pane_1_t

0xbf6d,	// (0x00016dc6) scroll_sc2_left_pane_g1

0xbf6d,	// (0x00016dc6) scroll_sc2_right_pane_g1

0x8ec4,	// (0x00013d1d) bg_popup_sub_pane_cp10

0xbf77,	// (0x00016dd0) list_choice_list_pane

0xbf90,	// (0x00016de9) list_single_choice_list_pane_ParamLimits

0xbf90,	// (0x00016de9) list_single_choice_list_pane

0xbfa3,	// (0x00016dfc) list_single_choice_list_pane_g1

0x7fed,	// (0x00012e46) list_single_choice_list_pane_t1_ParamLimits

0x7fed,	// (0x00012e46) list_single_choice_list_pane_t1

0xbfab,	// (0x00016e04) choice_list_pane_g1

0xbfb3,	// (0x00016e0c) choice_list_pane_t1

0x6de7,	// (0x00011c40) input_focus_pane_cp11

0x81c4,	// (0x0001301d) title_pane_stacon_g2_ParamLimits

0x81c4,	// (0x0001301d) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a51d) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a51d) title_pane_stacon_g

0x8b7e,	// (0x000139d7) cursor_press_pane

0x541d,	// (0x00010276) popup_fep_hwr_window_ParamLimits

0x541d,	// (0x00010276) popup_fep_hwr_window

0x5497,	// (0x000102f0) popup_fep_vkb_window_ParamLimits

0x5497,	// (0x000102f0) popup_fep_vkb_window

0xbfc1,	// (0x00016e1a) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001a987) fep_vkb_side_pane_g_ParamLimits

0x5e2f,	// (0x00010c88) fep_hwr_candidate_pane_ParamLimits

0x5e2f,	// (0x00010c88) fep_hwr_candidate_pane

0x5e59,	// (0x00010cb2) fep_hwr_side_pane_ParamLimits

0x5e59,	// (0x00010cb2) fep_hwr_side_pane

0x5e79,	// (0x00010cd2) fep_hwr_top_pane_ParamLimits

0x5e79,	// (0x00010cd2) fep_hwr_top_pane

0x5e91,	// (0x00010cea) fep_hwr_write_pane_ParamLimits

0x5e91,	// (0x00010cea) fep_hwr_write_pane

0xfb2e,	// (0x0001a987) fep_vkb_side_pane_g

0xbfc9,	// (0x00016e22) fep_hwr_top_pane_g1

0xbfdb,	// (0x00016e34) fep_hwr_top_pane_g2

0x5ecb,	// (0x00010d24) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001a963) fep_hwr_top_pane_g

0x5ee0,	// (0x00010d39) fep_hwr_top_text_pane

0x84dc,	// (0x00013335) fep_hwr_top_text_pane_g1

0xc011,	// (0x00016e6a) fep_hwr_top_text_pane_t1

0x5fd6,	// (0x00010e2f) fep_hwr_candidate_pane_g1

0xc264,	// (0x000170bd) fep_vkb_keypad_pane_g3_ParamLimits

0xc264,	// (0x000170bd) fep_vkb_keypad_pane_g3

0xc28c,	// (0x000170e5) fep_vkb_keypad_pane_g4_ParamLimits

0xc28c,	// (0x000170e5) fep_vkb_keypad_pane_g4

0xc2fb,	// (0x00017154) fep_vkb_bottom_pane_g2_ParamLimits

0xc2fb,	// (0x00017154) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001a98e) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001a98e) fep_vkb_bottom_pane_g

0xbf6d,	// (0x00016dc6) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001a998) cell_vkb_side_pane_g

0xc386,	// (0x000171df) cell_vkb_side_pane_t1

0xc394,	// (0x000171ed) cell_vkb_side_pane_t1_copy1

0xbf6d,	// (0x00016dc6) bg_fep_vkb_candidate_pane_g2

0xc4c0,	// (0x00017319) cell_vkb_candidate_pane_ParamLimits

0xc01f,	// (0x00016e78) aid_size_cell_vkb_ParamLimits

0xc01f,	// (0x00016e78) aid_size_cell_vkb

0xc4c0,	// (0x00017319) cell_vkb_candidate_pane

0x5ffd,	// (0x00010e56) bg_popup_fep_shadow_pane_g1

0xc0ad,	// (0x00016f06) fep_vkb_bottom_pane_ParamLimits

0xc0ad,	// (0x00016f06) fep_vkb_bottom_pane

0xc0e3,	// (0x00016f3c) fep_vkb_candidate_pane_ParamLimits

0xc0e3,	// (0x00016f3c) fep_vkb_candidate_pane

0xc0ff,	// (0x00016f58) fep_vkb_keypad_pane_ParamLimits

0xc0ff,	// (0x00016f58) fep_vkb_keypad_pane

0xc145,	// (0x00016f9e) fep_vkb_side_pane_ParamLimits

0xc145,	// (0x00016f9e) fep_vkb_side_pane

0xc181,	// (0x00016fda) fep_vkb_top_pane_ParamLimits

0xc181,	// (0x00016fda) fep_vkb_top_pane

0xc1bd,	// (0x00017016) fep_vkb_top_pane_g1_ParamLimits

0xc1bd,	// (0x00017016) fep_vkb_top_pane_g1

0xc1cc,	// (0x00017025) fep_vkb_top_pane_g2_ParamLimits

0xc1cc,	// (0x00017025) fep_vkb_top_pane_g2

0xc1db,	// (0x00017034) fep_vkb_top_pane_g3_ParamLimits

0xc1db,	// (0x00017034) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001a97e) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001a97e) fep_vkb_top_pane_g

0xc1f9,	// (0x00017052) fep_vkb_top_text_pane_ParamLimits

0xc1f9,	// (0x00017052) fep_vkb_top_text_pane

0xc20a,	// (0x00017063) fep_vkb_side_pane_g1_ParamLimits

0xc20a,	// (0x00017063) fep_vkb_side_pane_g1

0xc253,	// (0x000170ac) grid_vkb_side_pane_ParamLimits

0xc253,	// (0x000170ac) grid_vkb_side_pane

0x6005,	// (0x00010e5e) bg_popup_fep_shadow_pane_g2

0x600e,	// (0x00010e67) bg_popup_fep_shadow_pane_g3

0x6016,	// (0x00010e6f) bg_popup_fep_shadow_pane_g4

0x601f,	// (0x00010e78) bg_popup_fep_shadow_pane_g5

0x6029,	// (0x00010e82) bg_popup_fep_shadow_pane_g6

0x6031,	// (0x00010e8a) bg_popup_fep_shadow_pane_g7

0x7e20,	// (0x00012c79) bg_popup_fep_shadow_pane_g8

0xc2aa,	// (0x00017103) grid_vkb_keypad_number_pane_ParamLimits

0xc2aa,	// (0x00017103) grid_vkb_keypad_number_pane

0xc2ba,	// (0x00017113) grid_vkb_keypad_pane_ParamLimits

0xc2ba,	// (0x00017113) grid_vkb_keypad_pane

0xc2e0,	// (0x00017139) fep_vkb_bottom_pane_g1_ParamLimits

0xc2e0,	// (0x00017139) fep_vkb_bottom_pane_g1

0xc309,	// (0x00017162) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc309,	// (0x00017162) grid_vkb_keypad_bottom_left_pane

0xc31e,	// (0x00017177) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc31e,	// (0x00017177) grid_vkb_keypad_bottom_right_pane

0xc333,	// (0x0001718c) fep_vkb_top_text_pane_g1

0xc34e,	// (0x000171a7) fep_vkb_top_text_pane_t1

0xc363,	// (0x000171bc) cell_vkb_side_pane_ParamLimits

0xc363,	// (0x000171bc) cell_vkb_side_pane

0xbf6d,	// (0x00016dc6) cell_vkb_side_pane_g1

0xc3a2,	// (0x000171fb) cell_vkb_keypad_pane_ParamLimits

0xc3a2,	// (0x000171fb) cell_vkb_keypad_pane

0xc417,	// (0x00017270) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001a9ab) bg_popup_fep_shadow_pane_g

0x6043,	// (0x00010e9c) cell_hwr_side_pane_g1

0x6043,	// (0x00010e9c) cell_hwr_side_pane_g2

0xc421,	// (0x0001727a) cell_vkb_keypad_pane_t1

0xc42f,	// (0x00017288) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc42f,	// (0x00017288) cell_vkb_keypad_bottom_left_pane

0xc44c,	// (0x000172a5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc44c,	// (0x000172a5) cell_vkb_keypad_bottom_right_pane

0xbf6d,	// (0x00016dc6) cell_vkb_keypad_bottom_left_pane_g1

0xbf6d,	// (0x00016dc6) cell_vkb_keypad_bottom_right_pane_g1

0xc485,	// (0x000172de) cell_vkb_keypad_number_pane_ParamLimits

0xc485,	// (0x000172de) cell_vkb_keypad_number_pane

0xc4a4,	// (0x000172fd) cell_vkb_keypad_number_pane_g1

0xc4ae,	// (0x00017307) cell_vkb_keypad_number_pane_g2

0xc4b7,	// (0x00017310) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001a99d) cell_vkb_keypad_number_pane_g

0xc421,	// (0x0001727a) cell_vkb_keypad_number_pane_t1

0xc4db,	// (0x00017334) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001a9be) cell_hwr_side_pane_g

0xc4f4,	// (0x0001734d) cell_hwr_side_pane_t1

0x604d,	// (0x00010ea6) cell_hwr_side_pane_t1_copy1

0x605b,	// (0x00010eb4) cell_hwr_candidate_pane_g1

0x608a,	// (0x00010ee3) cell_hwr_candidate_pane_t1

0xbf6d,	// (0x00016dc6) cell_vkb_candidate_pane_g2

0xc538,	// (0x00017391) cell_vkb_candidate_pane_t1

0x5df6,	// (0x00010c4f) bg_popup_fep_shadow_pane_ParamLimits

0x5df6,	// (0x00010c4f) bg_popup_fep_shadow_pane

0x5eab,	// (0x00010d04) bg_fep_hwr_top_pane_g4

0xbfed,	// (0x00016e46) bg_hwr_side_pane_g1_ParamLimits

0xbfed,	// (0x00016e46) bg_hwr_side_pane_g1

0x5f1c,	// (0x00010d75) cell_hwr_side_pane_ParamLimits

0x5f1c,	// (0x00010d75) cell_hwr_side_pane

0x5f57,	// (0x00010db0) fep_hwr_write_pane_g1_ParamLimits

0x5f57,	// (0x00010db0) fep_hwr_write_pane_g1

0x5f64,	// (0x00010dbd) fep_hwr_write_pane_g2_ParamLimits

0x5f64,	// (0x00010dbd) fep_hwr_write_pane_g2

0x5f71,	// (0x00010dca) fep_hwr_write_pane_g3_ParamLimits

0x5f71,	// (0x00010dca) fep_hwr_write_pane_g3

0x5f7f,	// (0x00010dd8) fep_hwr_write_pane_g4_ParamLimits

0x5f7f,	// (0x00010dd8) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001a96a) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001a96a) fep_hwr_write_pane_g

0x5eab,	// (0x00010d04) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5eab,	// (0x00010d04) bg_fep_hwr_candidate_pane_g2

0x5f94,	// (0x00010ded) cell_hwr_candidate_pane_ParamLimits

0x5f94,	// (0x00010ded) cell_hwr_candidate_pane

0x5fd6,	// (0x00010e2f) fep_hwr_candidate_pane_g1_ParamLimits

0xc04d,	// (0x00016ea6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc04d,	// (0x00016ea6) bg_popup_fep_shadow_pane_cp2

0xc1eb,	// (0x00017044) fep_vkb_top_pane_g4_ParamLimits

0xc1eb,	// (0x00017044) fep_vkb_top_pane_g4

0xc231,	// (0x0001708a) fep_vkb_side_pane_g2_ParamLimits

0xc231,	// (0x0001708a) fep_vkb_side_pane_g2

0x7b01,	// (0x0001295a) list_setting_pane_t4_ParamLimits

0x7b01,	// (0x0001295a) list_setting_pane_t4

0x7b7b,	// (0x000129d4) list_setting_number_pane_t5_ParamLimits

0x7b7b,	// (0x000129d4) list_setting_number_pane_t5

0x8523,	// (0x0001337c) list_double_heading_pane_cp2_ParamLimits

0x8523,	// (0x0001337c) list_double_heading_pane_cp2

0x7928,	// (0x00012781) list_double_heading_pane_g1_cp2_ParamLimits

0x7928,	// (0x00012781) list_double_heading_pane_g1_cp2

0x7d05,	// (0x00012b5e) list_double_heading_pane_g2_cp2_ParamLimits

0x7d05,	// (0x00012b5e) list_double_heading_pane_g2_cp2

0xc546,	// (0x0001739f) list_double_heading_pane_t1_cp2_ParamLimits

0xc546,	// (0x0001739f) list_double_heading_pane_t1_cp2

0xc55c,	// (0x000173b5) list_double_heading_pane_t2_cp2_ParamLimits

0xc55c,	// (0x000173b5) list_double_heading_pane_t2_cp2

0x6dcf,	// (0x00011c28) aid_value_unit2

0x4b9b,	// (0x0000f9f4) popup_preview_fixed_window

0x717e,	// (0x00011fd7) bg_popup_preview_window_pane_cp02

0xc56e,	// (0x000173c7) list_preview_fixed_pane

0xc5b4,	// (0x0001740d) list_empty_pane_fp_ParamLimits

0xc5b4,	// (0x0001740d) list_empty_pane_fp

0xc5b4,	// (0x0001740d) list_single_cale_day_pane_fp_ParamLimits

0xc5b4,	// (0x0001740d) list_single_cale_day_pane_fp

0xc5b4,	// (0x0001740d) list_single_graphic_heading_pane_fp_ParamLimits

0xc5b4,	// (0x0001740d) list_single_graphic_heading_pane_fp

0xc5b4,	// (0x0001740d) list_single_graphic_pane_fp_ParamLimits

0xc5b4,	// (0x0001740d) list_single_graphic_pane_fp

0xc5b4,	// (0x0001740d) list_single_heading_pane_fp_ParamLimits

0xc5b4,	// (0x0001740d) list_single_heading_pane_fp

0xc5b4,	// (0x0001740d) list_single_pane_fp_ParamLimits

0xc5b4,	// (0x0001740d) list_single_pane_fp

0xc5c9,	// (0x00017422) list_single_pane_fp_g1_ParamLimits

0xc5c9,	// (0x00017422) list_single_pane_fp_g1

0x7928,	// (0x00012781) list_single_pane_fp_g2_ParamLimits

0x7928,	// (0x00012781) list_single_pane_fp_g2

0x7d05,	// (0x00012b5e) list_single_pane_fp_g3_ParamLimits

0x7d05,	// (0x00012b5e) list_single_pane_fp_g3

0xc5d5,	// (0x0001742e) list_single_pane_fp_g4_ParamLimits

0xc5d5,	// (0x0001742e) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001a9d1) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001a9d1) list_single_pane_fp_g

0xc5e1,	// (0x0001743a) list_single_pane_fp_t1_ParamLimits

0xc5e1,	// (0x0001743a) list_single_pane_fp_t1

0xc5f8,	// (0x00017451) list_single_graphic_pane_fp_g1_ParamLimits

0xc5f8,	// (0x00017451) list_single_graphic_pane_fp_g1

0xc5c9,	// (0x00017422) list_single_graphic_pane_fp_g2_ParamLimits

0xc5c9,	// (0x00017422) list_single_graphic_pane_fp_g2

0x7928,	// (0x00012781) list_single_graphic_pane_fp_g3_ParamLimits

0x7928,	// (0x00012781) list_single_graphic_pane_fp_g3

0x7d05,	// (0x00012b5e) list_single_graphic_pane_fp_g4_ParamLimits

0x7d05,	// (0x00012b5e) list_single_graphic_pane_fp_g4

0xc5d5,	// (0x0001742e) list_single_graphic_pane_fp_g5_ParamLimits

0xc5d5,	// (0x0001742e) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a9da) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a9da) list_single_graphic_pane_fp_g

0xc604,	// (0x0001745d) list_single_graphic_pane_fp_t1_ParamLimits

0xc604,	// (0x0001745d) list_single_graphic_pane_fp_t1

0xc5f8,	// (0x00017451) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc5f8,	// (0x00017451) list_single_graphic_heading_pane_fp_g1

0xc5c9,	// (0x00017422) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc5c9,	// (0x00017422) list_single_graphic_heading_pane_fp_g2

0x7928,	// (0x00012781) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7928,	// (0x00012781) list_single_graphic_heading_pane_fp_g3

0x7d05,	// (0x00012b5e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d05,	// (0x00012b5e) list_single_graphic_heading_pane_fp_g4

0xc5d5,	// (0x0001742e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc5d5,	// (0x0001742e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a9da) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a9da) list_single_graphic_heading_pane_fp_g

0xc61a,	// (0x00017473) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc61a,	// (0x00017473) list_single_graphic_heading_pane_fp_t1

0xc630,	// (0x00017489) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc630,	// (0x00017489) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001a9e5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001a9e5) list_single_graphic_heading_pane_fp_t

0xc642,	// (0x0001749b) list_single_cale_day_pane_fp_g1_ParamLimits

0xc642,	// (0x0001749b) list_single_cale_day_pane_fp_g1

0xc67a,	// (0x000174d3) list_single_cale_day_pane_fp_g2_ParamLimits

0xc67a,	// (0x000174d3) list_single_cale_day_pane_fp_g2

0xc686,	// (0x000174df) list_single_cale_day_pane_fp_g3_ParamLimits

0xc686,	// (0x000174df) list_single_cale_day_pane_fp_g3

0xc6ae,	// (0x00017507) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6ae,	// (0x00017507) list_single_cale_day_pane_fp_g4

0xc6d2,	// (0x0001752b) list_single_cale_day_pane_fp_g5_ParamLimits

0xc6d2,	// (0x0001752b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a9ea) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a9ea) list_single_cale_day_pane_fp_g

0xc6f6,	// (0x0001754f) list_single_cale_day_pane_fp_t1_ParamLimits

0xc6f6,	// (0x0001754f) list_single_cale_day_pane_fp_t1

0xc71c,	// (0x00017575) list_single_cale_day_pane_fp_t2_ParamLimits

0xc71c,	// (0x00017575) list_single_cale_day_pane_fp_t2

0xc735,	// (0x0001758e) list_single_cale_day_pane_fp_t3_ParamLimits

0xc735,	// (0x0001758e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001a9f5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a9f5) list_single_cale_day_pane_fp_t

0xc5c9,	// (0x00017422) list_empty_pane_fp_g1_ParamLimits

0xc5c9,	// (0x00017422) list_empty_pane_fp_g1

0xc74e,	// (0x000175a7) list_empty_pane_fp_t1

0xc75c,	// (0x000175b5) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001a9fc) list_empty_pane_fp_t

0xc5c9,	// (0x00017422) list_single_heading_pane_fp_g1_ParamLimits

0xc5c9,	// (0x00017422) list_single_heading_pane_fp_g1

0x7928,	// (0x00012781) list_single_heading_pane_fp_g2_ParamLimits

0x7928,	// (0x00012781) list_single_heading_pane_fp_g2

0x7d05,	// (0x00012b5e) list_single_heading_pane_fp_g3_ParamLimits

0x7d05,	// (0x00012b5e) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001aa01) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001aa01) list_single_heading_pane_fp_g

0xc76a,	// (0x000175c3) list_single_heading_pane_fp_t1_ParamLimits

0xc76a,	// (0x000175c3) list_single_heading_pane_fp_t1

0xc77c,	// (0x000175d5) list_single_heading_pane_fp_t2_ParamLimits

0xc77c,	// (0x000175d5) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001aa08) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001aa08) list_single_heading_pane_fp_t

0x805b,	// (0x00012eb4) aid_size_cell_fast

0x70ee,	// (0x00011f47) soft_indicator_pane_cp1_t1

0x8098,	// (0x00012ef1) cell_app_pane_cp2_ParamLimits

0x8098,	// (0x00012ef1) cell_app_pane_cp2

0x5e18,	// (0x00010c71) fep_hwr_candidate_drop_down_list_pane

0x5ff0,	// (0x00010e49) fep_hwr_candidate_pane_g3_ParamLimits

0x5ff0,	// (0x00010e49) fep_hwr_candidate_pane_g3

0x3e7a,	// (0x0000ecd3) fep_hwr_candidate_pane_g4_ParamLimits

0x3e7a,	// (0x0000ecd3) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001a977) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001a977) fep_hwr_candidate_pane_g

0xc0d2,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc0d2,	// (0x00016f2b) fep_vkb_candidate_drop_down_list_pane

0xc4e3,	// (0x0001733c) fep_vkb_candidate_pane_g3

0xc4eb,	// (0x00017344) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001a9a4) fep_vkb_candidate_pane_g

0x605b,	// (0x00010eb4) cell_hwr_candidate_pane_g1_ParamLimits

0x6069,	// (0x00010ec2) cell_hwr_candidate_pane_g3_ParamLimits

0x6069,	// (0x00010ec2) cell_hwr_candidate_pane_g3

0xdf3f,	// (0x00018d98) cell_hwr_candidate_pane_g4_ParamLimits

0xdf3f,	// (0x00018d98) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001a9c3) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001a9c3) cell_hwr_candidate_pane_g

0xc502,	// (0x0001735b) cell_vkb_candidate_pane_g3_ParamLimits

0xc502,	// (0x0001735b) cell_vkb_candidate_pane_g3

0xc51d,	// (0x00017376) cell_vkb_candidate_pane_g4_ParamLimits

0xc51d,	// (0x00017376) cell_vkb_candidate_pane_g4

0xc792,	// (0x000175eb) cell_app_pane_cp2_g1_ParamLimits

0xc792,	// (0x000175eb) cell_app_pane_cp2_g1

0xc7b0,	// (0x00017609) cell_app_pane_cp2_g2_ParamLimits

0xc7b0,	// (0x00017609) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001aa0d) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001aa0d) cell_app_pane_cp2_g

0xc7bc,	// (0x00017615) cell_app_pane_cp2_t1_ParamLimits

0xc7bc,	// (0x00017615) cell_app_pane_cp2_t1

0x7cdf,	// (0x00012b38) grid_highlight_pane_cp1_ParamLimits

0x7cdf,	// (0x00012b38) grid_highlight_pane_cp1

0x60a8,	// (0x00010f01) cell_hwr_candidate_pane_cp1_ParamLimits

0x60a8,	// (0x00010f01) cell_hwr_candidate_pane_cp1

0x605b,	// (0x00010eb4) fep_hwr_candidate_drop_down_list_pane_g1

0x60c7,	// (0x00010f20) fep_hwr_candidate_drop_down_list_pane_g2

0x60d4,	// (0x00010f2d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001aa12) fep_hwr_candidate_drop_down_list_pane_g

0x60e1,	// (0x00010f3a) fep_hwr_candidate_drop_down_list_scroll_pane

0x60ea,	// (0x00010f43) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x60ea,	// (0x00010f43) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x60f7,	// (0x00010f50) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x60f7,	// (0x00010f50) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6104,	// (0x00010f5d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6104,	// (0x00010f5d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6111,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6111,	// (0x00010f6a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x612c,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x612c,	// (0x00010f85) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6147,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6147,	// (0x00010fa0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6162,	// (0x00010fbb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6162,	// (0x00010fbb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x617d,	// (0x00010fd6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x617d,	// (0x00010fd6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001aa19) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001aa19) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7ce,	// (0x00017627) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7ce,	// (0x00017627) cell_vkb_candidate_pane_cp1

0xc1eb,	// (0x00017044) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc1eb,	// (0x00017044) fep_vkb_candidate_drop_down_list_pane_g1

0xc7ee,	// (0x00017647) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7ee,	// (0x00017647) fep_vkb_candidate_drop_down_list_pane_g2

0xc7fb,	// (0x00017654) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7fb,	// (0x00017654) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001aa2a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001aa2a) fep_vkb_candidate_drop_down_list_pane_g

0xc808,	// (0x00017661) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc808,	// (0x00017661) fep_vkb_candidate_drop_down_list_scroll_pane

0xc815,	// (0x0001766e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc815,	// (0x0001766e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc822,	// (0x0001767b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc822,	// (0x0001767b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc82e,	// (0x00017687) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc82e,	// (0x00017687) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc83a,	// (0x00017693) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc83a,	// (0x00017693) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc85b,	// (0x000176b4) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc85b,	// (0x000176b4) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc87c,	// (0x000176d5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc87c,	// (0x000176d5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc89d,	// (0x000176f6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc89d,	// (0x000176f6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8be,	// (0x00017717) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8be,	// (0x00017717) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001aa31) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001aa31) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6e05,	// (0x00011c5e) title_pane_g1_ParamLimits

0x6e12,	// (0x00011c6b) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a3a7) title_pane_g_ParamLimits

0x84cc,	// (0x00013325) aid_call2_pane

0x84d4,	// (0x0001332d) aid_call_pane

0x84dc,	// (0x00013335) popup_clock_analogue_window_g1

0x84dc,	// (0x00013335) popup_clock_analogue_window_g2

0x4f0c,	// (0x0000fd65) popup_clock_analogue_window_g3

0x4f15,	// (0x0000fd6e) popup_clock_analogue_window_g4

0x6df1,	// (0x00011c4a) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a54c) popup_clock_analogue_window_g

0x4f1d,	// (0x0000fd76) popup_clock_analogue_window_t1

0x4f2b,	// (0x0000fd84) clock_digital_number_pane_ParamLimits

0x4f2b,	// (0x0000fd84) clock_digital_number_pane

0x4f37,	// (0x0000fd90) clock_digital_number_pane_cp02_ParamLimits

0x4f37,	// (0x0000fd90) clock_digital_number_pane_cp02

0x4f43,	// (0x0000fd9c) clock_digital_number_pane_cp03_ParamLimits

0x4f43,	// (0x0000fd9c) clock_digital_number_pane_cp03

0x4f4f,	// (0x0000fda8) clock_digital_number_pane_cp04_ParamLimits

0x4f4f,	// (0x0000fda8) clock_digital_number_pane_cp04

0x4f5b,	// (0x0000fdb4) clock_digital_separator_pane_ParamLimits

0x4f5b,	// (0x0000fdb4) clock_digital_separator_pane

0x4f67,	// (0x0000fdc0) popup_clock_digital_window_t1_ParamLimits

0x4f67,	// (0x0000fdc0) popup_clock_digital_window_t1

0x6df1,	// (0x00011c4a) clock_digital_number_pane_g1

0x6df1,	// (0x00011c4a) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a557) clock_digital_number_pane_g

0x6df1,	// (0x00011c4a) clock_digital_separator_pane_g1

0x6df1,	// (0x00011c4a) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a557) clock_digital_separator_pane_g

0x8eee,	// (0x00013d47) aid_fill_nsta_ParamLimits

0x9034,	// (0x00013e8d) indicator_nsta_pane_ParamLimits

0x91ad,	// (0x00014006) popup_clock_analogue_window

0x91ad,	// (0x00014006) popup_clock_digital_window

0x6edb,	// (0x00011d34) grid_indicator_nsta_pane_ParamLimits

0xb91b,	// (0x00016774) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001a8f7) clock_nsta_pane_t

0x4ed0,	// (0x0000fd29) aid_size_max_handle

0x4eda,	// (0x0000fd33) aid_size_min_handle

0x8b7e,	// (0x000139d7) editor_scroll_pane

0xc8d9,	// (0x00017732) ex_editor_pane

0x7fc9,	// (0x00012e22) scroll_pane_cp13

0x7703,	// (0x0001255c) scroll_pane_cp14

0x850b,	// (0x00013364) scroll_pane_cp36

0x8537,	// (0x00013390) list_single_graphic_hl_pane_cp2_ParamLimits

0x8537,	// (0x00013390) list_single_graphic_hl_pane_cp2

0xab96,	// (0x000159ef) list_single_graphic_hl_pane_ParamLimits

0xab96,	// (0x000159ef) list_single_graphic_hl_pane

0xc8e1,	// (0x0001773a) aid_size_min_hl_cp1

0xc8ea,	// (0x00017743) list_highlight_pane_cp34_ParamLimits

0xc8ea,	// (0x00017743) list_highlight_pane_cp34

0xc8fb,	// (0x00017754) list_single_graphic_hl_pane_g1_ParamLimits

0xc8fb,	// (0x00017754) list_single_graphic_hl_pane_g1

0xc908,	// (0x00017761) list_single_graphic_hl_pane_g2_ParamLimits

0xc908,	// (0x00017761) list_single_graphic_hl_pane_g2

0xc908,	// (0x00017761) list_single_graphic_hl_pane_g3_ParamLimits

0xc908,	// (0x00017761) list_single_graphic_hl_pane_g3

0xb0f6,	// (0x00015f4f) list_single_graphic_hl_pane_g4_ParamLimits

0xb0f6,	// (0x00015f4f) list_single_graphic_hl_pane_g4

0xc914,	// (0x0001776d) list_single_graphic_hl_pane_g5_ParamLimits

0xc914,	// (0x0001776d) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001aa42) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001aa42) list_single_graphic_hl_pane_g

0xc928,	// (0x00017781) list_single_graphic_hl_pane_t1_ParamLimits

0xc928,	// (0x00017781) list_single_graphic_hl_pane_t1

0xc93e,	// (0x00017797) aid_size_min_hl_cp2

0xc947,	// (0x000177a0) list_highlight_pane_cp34_cp2_ParamLimits

0xc947,	// (0x000177a0) list_highlight_pane_cp34_cp2

0xc8fb,	// (0x00017754) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8fb,	// (0x00017754) list_single_graphic_hl_pane_g1_cp2

0xc954,	// (0x000177ad) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc954,	// (0x000177ad) list_single_graphic_hl_pane_g2_cp2

0xc960,	// (0x000177b9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc960,	// (0x000177b9) list_single_graphic_hl_pane_g3_cp2

0xb0f6,	// (0x00015f4f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb0f6,	// (0x00015f4f) list_single_graphic_hl_pane_g4_cp2

0xc914,	// (0x0001776d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc914,	// (0x0001776d) list_single_graphic_hl_pane_g5_cp2

0x521b,	// (0x00010074) control_pane_g4_ParamLimits

0x521b,	// (0x00010074) control_pane_g4

0x8ec4,	// (0x00013d1d) bg_popup_sub_pane_cp10_ParamLimits

0xbf77,	// (0x00016dd0) list_choice_list_pane_ParamLimits

0xbf86,	// (0x00016ddf) scroll_pane_cp23

0x717e,	// (0x00011fd7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc56e,	// (0x000173c7) list_preview_fixed_pane_ParamLimits

0xc584,	// (0x000173dd) list_preview_fixed_pane_cp_ParamLimits

0xc584,	// (0x000173dd) list_preview_fixed_pane_cp

0xc590,	// (0x000173e9) popup_preview_fixed_window_g1_ParamLimits

0xc590,	// (0x000173e9) popup_preview_fixed_window_g1

0xc59c,	// (0x000173f5) popup_preview_fixed_window_g2_ParamLimits

0xc59c,	// (0x000173f5) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001a9ca) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001a9ca) popup_preview_fixed_window_g

0x4e44,	// (0x0000fc9d) aid_navi_side_left_pane_ParamLimits

0x4e59,	// (0x0000fcb2) aid_navi_side_right_pane_ParamLimits

0x4e71,	// (0x0000fcca) navi_icon_pane_stacon_ParamLimits

0x4e85,	// (0x0000fcde) navi_navi_pane_stacon_ParamLimits

0x4e71,	// (0x0000fcca) navi_text_pane_stacon_ParamLimits

0x4a5c,	// (0x0000f8b5) main_text_info_pane

0xc984,	// (0x000177dd) listscroll_text_info_pane

0xc98c,	// (0x000177e5) list_text_info_pane_ParamLimits

0xc98c,	// (0x000177e5) list_text_info_pane

0xc99b,	// (0x000177f4) scroll_pane_cp24_ParamLimits

0xc99b,	// (0x000177f4) scroll_pane_cp24

0xc9b9,	// (0x00017812) list_text_info_pane_t1_ParamLimits

0xc9b9,	// (0x00017812) list_text_info_pane_t1

0x538f,	// (0x000101e8) popup_fast_swap2_window_ParamLimits

0x538f,	// (0x000101e8) popup_fast_swap2_window

0xc9ea,	// (0x00017843) aid_size_cell_fast2

0x6de7,	// (0x00011c40) bg_popup_window_pane_cp17

0x995a,	// (0x000147b3) heading_pane_cp2

0x73cd,	// (0x00012226) listscroll_fast2_pane

0xc9f4,	// (0x0001784d) grid_fast2_pane

0xc9fe,	// (0x00017857) listscroll_fast2_pane_g1

0xca06,	// (0x0001785f) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001aa4d) listscroll_fast2_pane_g

0x7fc9,	// (0x00012e22) scroll_pane_cp26

0xca10,	// (0x00017869) cell_fast2_pane_ParamLimits

0xca10,	// (0x00017869) cell_fast2_pane

0xca25,	// (0x0001787e) cell_fast2_pane_g1

0xca2e,	// (0x00017887) cell_fast2_pane_g2

0xca37,	// (0x00017890) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001aa52) cell_fast2_pane_g

0x74c0,	// (0x00012319) grid_highlight_pane_cp9

0x5355,	// (0x000101ae) main_eswt_pane_ParamLimits

0x5355,	// (0x000101ae) main_eswt_pane

0xc9b0,	// (0x00017809) list_single_text_info_pane

0xca3f,	// (0x00017898) eswt_ctrl_button_pane

0xca3f,	// (0x00017898) eswt_ctrl_canvas_pane

0xca47,	// (0x000178a0) eswt_ctrl_combo_pane

0xca3f,	// (0x00017898) eswt_ctrl_default_pane

0xca3f,	// (0x00017898) eswt_ctrl_label_pane

0xca4f,	// (0x000178a8) eswt_ctrl_wait_pane

0xca57,	// (0x000178b0) eswt_shell_pane

0x6de7,	// (0x00011c40) listscroll_eswt_app_pane

0xca77,	// (0x000178d0) popup_eswt_tasktip_window_ParamLimits

0xca77,	// (0x000178d0) popup_eswt_tasktip_window

0x9532,	// (0x0001438b) bg_popup_window_pane_cp18

0xca88,	// (0x000178e1) eswt_control_pane_g1_ParamLimits

0xca88,	// (0x000178e1) eswt_control_pane_g1

0xca95,	// (0x000178ee) eswt_control_pane_g2_ParamLimits

0xca95,	// (0x000178ee) eswt_control_pane_g2

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_ParamLimits

0xcaa2,	// (0x000178fb) eswt_control_pane_g3

0xcaaf,	// (0x00017908) eswt_control_pane_g4_ParamLimits

0xcaaf,	// (0x00017908) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001aa59) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001aa59) eswt_control_pane_g

0x7cdf,	// (0x00012b38) bg_button_pane_ParamLimits

0x7cdf,	// (0x00012b38) bg_button_pane

0x74d5,	// (0x0001232e) common_borders_pane_copy2_ParamLimits

0x74d5,	// (0x0001232e) common_borders_pane_copy2

0xcabc,	// (0x00017915) control_button_pane_g1_ParamLimits

0xcabc,	// (0x00017915) control_button_pane_g1

0xcac8,	// (0x00017921) control_button_pane_g2_ParamLimits

0xcac8,	// (0x00017921) control_button_pane_g2

0xcad4,	// (0x0001792d) control_button_pane_g3_ParamLimits

0xcad4,	// (0x0001792d) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001aa62) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001aa62) control_button_pane_g

0xcae8,	// (0x00017941) control_button_pane_t1

0xcaf6,	// (0x0001794f) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001aa69) control_button_pane_t

0x9404,	// (0x0001425d) bg_button_pane_g1

0x9414,	// (0x0001426d) bg_button_pane_g2

0x940c,	// (0x00014265) bg_button_pane_g3

0x9424,	// (0x0001427d) bg_button_pane_g4

0x941c,	// (0x00014275) bg_button_pane_g5

0x942c,	// (0x00014285) bg_button_pane_g6

0x9434,	// (0x0001428d) bg_button_pane_g7

0x9444,	// (0x0001429d) bg_button_pane_g8

0x943c,	// (0x00014295) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001a6ba) bg_button_pane_g

0xbf32,	// (0x00016d8b) common_borders_pane_ParamLimits

0xbf32,	// (0x00016d8b) common_borders_pane

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy1_ParamLimits

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy1

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy1_ParamLimits

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy1

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy1_ParamLimits

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy1

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy1_ParamLimits

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy1

0xbf6d,	// (0x00016dc6) bg_eswt_ctrl_canvas_pane_g1

0xbf32,	// (0x00016d8b) common_borders_pane_cp2_ParamLimits

0xbf32,	// (0x00016d8b) common_borders_pane_cp2

0xbf32,	// (0x00016d8b) common_borders_pane_cp3_ParamLimits

0xbf32,	// (0x00016d8b) common_borders_pane_cp3

0xcb04,	// (0x0001795d) separator_horizontal_pane

0xcb0c,	// (0x00017965) separator_vertical_pane

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy2_ParamLimits

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy2

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy2_ParamLimits

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy2

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy2_ParamLimits

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy2

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy2_ParamLimits

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy2

0x6de7,	// (0x00011c40) common_borders_pane_cp4

0xcb15,	// (0x0001796e) separator_horizontal_pane_g1

0xcb1e,	// (0x00017977) separator_horizontal_pane_g2

0xcb27,	// (0x00017980) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001aa6e) separator_horizontal_pane_g

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy3_ParamLimits

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy3

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy3_ParamLimits

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy3

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy3_ParamLimits

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy3

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy3_ParamLimits

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy3

0x6de7,	// (0x00011c40) common_borders_pane_cp5

0xcb30,	// (0x00017989) separator_vertical_pane_g1

0xcb39,	// (0x00017992) separator_vertical_pane_g2

0xcb42,	// (0x0001799b) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001aa75) separator_vertical_pane_g

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy4_ParamLimits

0xca88,	// (0x000178e1) eswt_control_pane_g1_copy4

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy4_ParamLimits

0xca95,	// (0x000178ee) eswt_control_pane_g2_copy4

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy4_ParamLimits

0xcaa2,	// (0x000178fb) eswt_control_pane_g3_copy4

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy4_ParamLimits

0xcaaf,	// (0x00017908) eswt_control_pane_g4_copy4

0xcb4b,	// (0x000179a4) eswt_ctrl_combo_button_pane

0xcb53,	// (0x000179ac) eswt_ctrl_input_pane

0xcb5b,	// (0x000179b4) popup_choice_list_window_cp70

0xcb63,	// (0x000179bc) eswt_ctrl_input_pane_t1

0x6de7,	// (0x00011c40) input_focus_pane_cp70

0xbf32,	// (0x00016d8b) bg_button_pane_cp70_ParamLimits

0xbf32,	// (0x00016d8b) bg_button_pane_cp70

0xcb71,	// (0x000179ca) eswt_ctrl_combo_button_pane_g1

0xcb79,	// (0x000179d2) wait_bar_pane_cp70

0x9532,	// (0x0001438b) bg_popup_window_pane_cp70_ParamLimits

0x9532,	// (0x0001438b) bg_popup_window_pane_cp70

0xcb81,	// (0x000179da) popup_eswt_tasktip_window_t1

0xcb97,	// (0x000179f0) wait_bar_pane_cp71_ParamLimits

0xcb97,	// (0x000179f0) wait_bar_pane_cp71

0xcba3,	// (0x000179fc) grid_eswt_app_pane

0x82e5,	// (0x0001313e) scroll_pane_cp70

0xcbac,	// (0x00017a05) cell_eswt_app_pane_ParamLimits

0xcbac,	// (0x00017a05) cell_eswt_app_pane

0xcbdc,	// (0x00017a35) cell_eswt_app_pane_g1_ParamLimits

0xcbdc,	// (0x00017a35) cell_eswt_app_pane_g1

0xcc0b,	// (0x00017a64) cell_eswt_app_pane_g2_ParamLimits

0xcc0b,	// (0x00017a64) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001aa7c) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001aa7c) cell_eswt_app_pane_g

0xcc34,	// (0x00017a8d) cell_eswt_app_pane_t1_ParamLimits

0xcc34,	// (0x00017a8d) cell_eswt_app_pane_t1

0xcc66,	// (0x00017abf) grid_highlight_pane_cp70_ParamLimits

0xcc66,	// (0x00017abf) grid_highlight_pane_cp70

0x8a53,	// (0x000138ac) set_content_pane_g1

0x8e1d,	// (0x00013c76) status_small_volume_pane

0x6198,	// (0x00010ff1) status_small_volume_pane_g1

0x61a0,	// (0x00010ff9) volume_small2_pane

0x61a9,	// (0x00011002) volume_small2_pane_g1

0x61b2,	// (0x0001100b) volume_small2_pane_g2

0x61bb,	// (0x00011014) volume_small2_pane_g3

0x61c4,	// (0x0001101d) volume_small2_pane_g4

0x61cd,	// (0x00011026) volume_small2_pane_g5

0x61d6,	// (0x0001102f) volume_small2_pane_g6

0x61df,	// (0x00011038) volume_small2_pane_g7

0x61e8,	// (0x00011041) volume_small2_pane_g8

0x61f1,	// (0x0001104a) volume_small2_pane_g9

0x61fa,	// (0x00011053) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001aa81) volume_small2_pane_g

0xc333,	// (0x0001718c) fep_vkb_top_text_pane_g1_ParamLimits

0xc34e,	// (0x000171a7) fep_vkb_top_text_pane_t1_ParamLimits

0xc5a8,	// (0x00017401) popup_preview_fixed_window_g3_ParamLimits

0xc5a8,	// (0x00017401) popup_preview_fixed_window_g3

0x583e,	// (0x00010697) popup_toolbar_trans_pane

0xa8f3,	// (0x0001574c) aid_height_set_list_ParamLimits

0xa904,	// (0x0001575d) aid_size_parent_ParamLimits

0x8ec4,	// (0x00013d1d) list_highlight_pane_cp2_ParamLimits

0x8a53,	// (0x000138ac) set_content_pane_g1_ParamLimits

0xabb2,	// (0x00015a0b) list_single_image_pane_ParamLimits

0xabb2,	// (0x00015a0b) list_single_image_pane

0xcc72,	// (0x00017acb) aid_size_cell_image_ParamLimits

0xcc72,	// (0x00017acb) aid_size_cell_image

0xcc7f,	// (0x00017ad8) grid_single_image_pane_ParamLimits

0xcc7f,	// (0x00017ad8) grid_single_image_pane

0xa15b,	// (0x00014fb4) list_single_image_pane_g1_ParamLimits

0xa15b,	// (0x00014fb4) list_single_image_pane_g1

0xcc8b,	// (0x00017ae4) list_single_image_pane_g2_ParamLimits

0xcc8b,	// (0x00017ae4) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001aa96) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001aa96) list_single_image_pane_g

0xcc9f,	// (0x00017af8) list_single_image_pane_t1_ParamLimits

0xcc9f,	// (0x00017af8) list_single_image_pane_t1

0xccb5,	// (0x00017b0e) cell_image_list_pane_ParamLimits

0xccb5,	// (0x00017b0e) cell_image_list_pane

0xccc9,	// (0x00017b22) cell_image_list_pane_g1

0xccd2,	// (0x00017b2b) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001aa9b) cell_image_list_pane_g

0xccdb,	// (0x00017b34) aid_size_cell_tb_trans_pane

0x7cdf,	// (0x00012b38) bg_tb_trans_pane

0xcced,	// (0x00017b46) grid_tb_trans_pane

0x9404,	// (0x0001425d) bg_tb_trans_pane_g1

0x9414,	// (0x0001426d) bg_tb_trans_pane_g2

0x940c,	// (0x00014265) bg_tb_trans_pane_g3

0x9424,	// (0x0001427d) bg_tb_trans_pane_g4

0x941c,	// (0x00014275) bg_tb_trans_pane_g5

0x9444,	// (0x0001429d) bg_tb_trans_pane_g6

0x943c,	// (0x00014295) bg_tb_trans_pane_g7

0x942c,	// (0x00014285) bg_tb_trans_pane_g8

0x9434,	// (0x0001428d) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001aaa0) bg_tb_trans_pane_g

0xcd01,	// (0x00017b5a) cell_toolbar_trans_pane_ParamLimits

0xcd01,	// (0x00017b5a) cell_toolbar_trans_pane

0xbf6d,	// (0x00016dc6) cell_toolbar_trans_pane_g1

0xbae8,	// (0x00016941) list_form2_midp_pane_t1

0xbaf6,	// (0x0001694f) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001a93d) list_form2_midp_pane_t

0xbb04,	// (0x0001695d) scroll_pane_cp51_ParamLimits

0xbd0f,	// (0x00016b68) form2_midp_wait_pane_g1

0xbd18,	// (0x00016b71) form2_midp_wait_pane_g2

0xbd21,	// (0x00016b7a) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001a952) form2_midp_wait_pane_g

0x6edb,	// (0x00011d34) list_highlight_pane_cp21_ParamLimits

0xbd78,	// (0x00016bd1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbd87,	// (0x00016be0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xab3a,	// (0x00015993) list_single_2graphic_im_pane_ParamLimits

0xab3a,	// (0x00015993) list_single_2graphic_im_pane

0xcd27,	// (0x00017b80) list_single_2graphic_im_pane_g1_ParamLimits

0xcd27,	// (0x00017b80) list_single_2graphic_im_pane_g1

0xcd38,	// (0x00017b91) list_single_2graphic_im_pane_g2_ParamLimits

0xcd38,	// (0x00017b91) list_single_2graphic_im_pane_g2

0xcd44,	// (0x00017b9d) list_single_2graphic_im_pane_g3_ParamLimits

0xcd44,	// (0x00017b9d) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001aab3) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001aab3) list_single_2graphic_im_pane_g

0xcd64,	// (0x00017bbd) list_single_2graphic_im_pane_t1_ParamLimits

0xcd64,	// (0x00017bbd) list_single_2graphic_im_pane_t1

0xc5b4,	// (0x0001740d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5b4,	// (0x0001740d) list_single_graphic_2heading_pane_fp

0xc5f8,	// (0x00017451) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc5f8,	// (0x00017451) list_single_graphic_2heading_pane_fp_g1

0xc5c9,	// (0x00017422) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc5c9,	// (0x00017422) list_single_graphic_2heading_pane_fp_g2

0x7928,	// (0x00012781) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7928,	// (0x00012781) list_single_graphic_2heading_pane_fp_g3

0x7d05,	// (0x00012b5e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d05,	// (0x00012b5e) list_single_graphic_2heading_pane_fp_g4

0xc5d5,	// (0x0001742e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc5d5,	// (0x0001742e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001a9da) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001a9da) list_single_graphic_2heading_pane_fp_g

0xcd95,	// (0x00017bee) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcd95,	// (0x00017bee) list_single_graphic_2heading_pane_fp_t1

0xc630,	// (0x00017489) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc630,	// (0x00017489) list_single_graphic_2heading_pane_fp_t2

0xcdab,	// (0x00017c04) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcdab,	// (0x00017c04) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001aabc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001aabc) list_single_graphic_2heading_pane_fp_t

0xbff9,	// (0x00016e52) fep_hwr_write_pane_g5_ParamLimits

0xbff9,	// (0x00016e52) fep_hwr_write_pane_g5

0xc005,	// (0x00016e5e) fep_hwr_write_pane_g6_ParamLimits

0xc005,	// (0x00016e5e) fep_hwr_write_pane_g6

0xca57,	// (0x000178b0) eswt_shell_pane_ParamLimits

0x9532,	// (0x0001438b) bg_popup_window_pane_cp18_ParamLimits

0xa824,	// (0x0001567d) heading_pane_cp70

0xcb81,	// (0x000179da) popup_eswt_tasktip_window_t1_ParamLimits

0x8f43,	// (0x00013d9c) aid_touch_tab_arrow_left

0x8f52,	// (0x00013dab) aid_touch_tab_arrow_right

0x6e23,	// (0x00011c7c) title_pane_g3_ParamLimits

0x6e23,	// (0x00011c7c) title_pane_g3

0x7bbe,	// (0x00012a17) set_value_pane_g1

0x583e,	// (0x00010697) popup_toolbar_trans_pane_ParamLimits

0xccdb,	// (0x00017b34) aid_size_cell_tb_trans_pane_ParamLimits

0x7cdf,	// (0x00012b38) bg_tb_trans_pane_ParamLimits

0xcced,	// (0x00017b46) grid_tb_trans_pane_ParamLimits

0x717e,	// (0x00011fd7) cont_note_pane_ParamLimits

0x717e,	// (0x00011fd7) cont_note_pane

0x74d5,	// (0x0001232e) cont_snote2_single_text_pane_ParamLimits

0x74d5,	// (0x0001232e) cont_snote2_single_text_pane

0x74d5,	// (0x0001232e) cont_snote2_single_graphic_pane_ParamLimits

0x74d5,	// (0x0001232e) cont_snote2_single_graphic_pane

0x9b75,	// (0x000149ce) cont_note_wait_pane_ParamLimits

0x9b75,	// (0x000149ce) cont_note_wait_pane

0x9b75,	// (0x000149ce) cont_note_image_pane_ParamLimits

0x9b75,	// (0x000149ce) cont_note_image_pane

0xcdc1,	// (0x00017c1a) popup_note2_window_g1_ParamLimits

0xcdc1,	// (0x00017c1a) popup_note2_window_g1

0xcdf2,	// (0x00017c4b) popup_note2_window_t1_ParamLimits

0xcdf2,	// (0x00017c4b) popup_note2_window_t1

0xce37,	// (0x00017c90) popup_note2_window_t2_ParamLimits

0xce37,	// (0x00017c90) popup_note2_window_t2

0xce7c,	// (0x00017cd5) popup_note2_window_t3_ParamLimits

0xce7c,	// (0x00017cd5) popup_note2_window_t3

0xcec1,	// (0x00017d1a) popup_note2_window_t4_ParamLimits

0xcec1,	// (0x00017d1a) popup_note2_window_t4

0x7202,	// (0x0001205b) popup_note2_window_t5_ParamLimits

0x7202,	// (0x0001205b) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001aac8) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001aac8) popup_note2_window_t

0xcef0,	// (0x00017d49) popup_note2_image_window_g1_ParamLimits

0xcef0,	// (0x00017d49) popup_note2_image_window_g1

0xcefc,	// (0x00017d55) popup_note2_image_window_g2_ParamLimits

0xcefc,	// (0x00017d55) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001aad3) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001aad3) popup_note2_image_window_g

0xcf0e,	// (0x00017d67) popup_note2_image_window_t1_ParamLimits

0xcf0e,	// (0x00017d67) popup_note2_image_window_t1

0xcf26,	// (0x00017d7f) popup_note2_image_window_t2_ParamLimits

0xcf26,	// (0x00017d7f) popup_note2_image_window_t2

0xcf3e,	// (0x00017d97) popup_note2_image_window_t3_ParamLimits

0xcf3e,	// (0x00017d97) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001aad8) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001aad8) popup_note2_image_window_t

0x9b83,	// (0x000149dc) popup_note2_wait_window_g1_ParamLimits

0x9b83,	// (0x000149dc) popup_note2_wait_window_g1

0xcf5a,	// (0x00017db3) popup_note2_wait_window_g2_ParamLimits

0xcf5a,	// (0x00017db3) popup_note2_wait_window_g2

0x9b9b,	// (0x000149f4) popup_note2_wait_window_g3_ParamLimits

0x9b9b,	// (0x000149f4) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001aadf) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001aadf) popup_note2_wait_window_g

0xcf66,	// (0x00017dbf) popup_note2_wait_window_t1_ParamLimits

0xcf66,	// (0x00017dbf) popup_note2_wait_window_t1

0xcf84,	// (0x00017ddd) popup_note2_wait_window_t2_ParamLimits

0xcf84,	// (0x00017ddd) popup_note2_wait_window_t2

0xcfa2,	// (0x00017dfb) popup_note2_wait_window_t3_ParamLimits

0xcfa2,	// (0x00017dfb) popup_note2_wait_window_t3

0xcfb4,	// (0x00017e0d) popup_note2_wait_window_t4_ParamLimits

0xcfb4,	// (0x00017e0d) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001aae6) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001aae6) popup_note2_wait_window_t

0xcfc6,	// (0x00017e1f) wait_bar2_pane_ParamLimits

0xcfc6,	// (0x00017e1f) wait_bar2_pane

0xcfde,	// (0x00017e37) popup_snote2_single_text_window_g1_ParamLimits

0xcfde,	// (0x00017e37) popup_snote2_single_text_window_g1

0xd006,	// (0x00017e5f) popup_snote2_single_text_window_t1_ParamLimits

0xd006,	// (0x00017e5f) popup_snote2_single_text_window_t1

0xd052,	// (0x00017eab) popup_snote2_single_text_window_t2_ParamLimits

0xd052,	// (0x00017eab) popup_snote2_single_text_window_t2

0xd09e,	// (0x00017ef7) popup_snote2_single_text_window_t3_ParamLimits

0xd09e,	// (0x00017ef7) popup_snote2_single_text_window_t3

0xd0df,	// (0x00017f38) popup_snote2_single_text_window_t4_ParamLimits

0xd0df,	// (0x00017f38) popup_snote2_single_text_window_t4

0xd115,	// (0x00017f6e) popup_snote2_single_text_window_t5_ParamLimits

0xd115,	// (0x00017f6e) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001aaef) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001aaef) popup_snote2_single_text_window_t

0xd140,	// (0x00017f99) popup_snote2_single_graphic_window_g1_ParamLimits

0xd140,	// (0x00017f99) popup_snote2_single_graphic_window_g1

0xd168,	// (0x00017fc1) popup_snote2_single_graphic_window_g2_ParamLimits

0xd168,	// (0x00017fc1) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001aafa) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001aafa) popup_snote2_single_graphic_window_g

0xd190,	// (0x00017fe9) popup_snote2_single_graphic_window_t1_ParamLimits

0xd190,	// (0x00017fe9) popup_snote2_single_graphic_window_t1

0xd1dc,	// (0x00018035) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1dc,	// (0x00018035) popup_snote2_single_graphic_window_t2

0xd09e,	// (0x00017ef7) popup_snote2_single_graphic_window_t3_ParamLimits

0xd09e,	// (0x00017ef7) popup_snote2_single_graphic_window_t3

0xd0df,	// (0x00017f38) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0df,	// (0x00017f38) popup_snote2_single_graphic_window_t4

0xd115,	// (0x00017f6e) popup_snote2_single_graphic_window_t5_ParamLimits

0xd115,	// (0x00017f6e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001aaff) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001aaff) popup_snote2_single_graphic_window_t

0xb9c5,	// (0x0001681e) clock_nsta_pane_cp2_t1

0xb9c5,	// (0x0001681e) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001a913) clock_nsta_pane_cp2_t

0x7cf9,	// (0x00012b52) form_field_data_wide_pane_g1_ParamLimits

0x7928,	// (0x00012781) form_field_data_wide_pane_g2_ParamLimits

0x7928,	// (0x00012781) form_field_data_wide_pane_g2

0x7d05,	// (0x00012b5e) form_field_data_wide_pane_g3_ParamLimits

0x7d05,	// (0x00012b5e) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a4cf) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a4cf) form_field_data_wide_pane_g

0xb8b7,	// (0x00016710) grid_touch_3_pane_ParamLimits

0xb8b7,	// (0x00016710) grid_touch_3_pane

0xd228,	// (0x00018081) cell_touch_3_pane_ParamLimits

0xd228,	// (0x00018081) cell_touch_3_pane

0xbf6d,	// (0x00016dc6) cell_touch_3_pane_g1

0xbf6d,	// (0x00016dc6) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001a998) cell_touch_3_pane_g

0x7234,	// (0x0001208d) cont_query_data_pane

0x723c,	// (0x00012095) cont_query_data_pane_cp1

0xd256,	// (0x000180af) button_value_adjust_pane_cp7

0xd25e,	// (0x000180b7) query_popup_pane_cp3

0x85cc,	// (0x00013425) bg_popup_sub_pane_cp22_ParamLimits

0x4f86,	// (0x0000fddf) navi_navi_volume_pane_cp2

0x4fa1,	// (0x0000fdfa) popup_side_volume_key_window_g2

0x4fb0,	// (0x0000fe09) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a565) popup_side_volume_key_window_g

0x4fcd,	// (0x0000fe26) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a56c) popup_side_volume_key_window_t

0x8912,	// (0x0001376b) popup_side_volume_key_window_ParamLimits

0x78e8,	// (0x00012741) list_double_graphic_pane_g4_ParamLimits

0x78e8,	// (0x00012741) list_double_graphic_pane_g4

0xab77,	// (0x000159d0) list_single_2heading_msg_pane_ParamLimits

0xab77,	// (0x000159d0) list_single_2heading_msg_pane

0xd28d,	// (0x000180e6) list_single_2heading_msg_pane_g1_ParamLimits

0xd28d,	// (0x000180e6) list_single_2heading_msg_pane_g1

0x8ab7,	// (0x00013910) list_single_2heading_msg_pane_g2_ParamLimits

0x8ab7,	// (0x00013910) list_single_2heading_msg_pane_g2

0xb400,	// (0x00016259) list_single_2heading_msg_pane_g3_ParamLimits

0xb400,	// (0x00016259) list_single_2heading_msg_pane_g3

0xd299,	// (0x000180f2) list_single_2heading_msg_pane_g4_ParamLimits

0xd299,	// (0x000180f2) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001ab0a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001ab0a) list_single_2heading_msg_pane_g

0xd2b1,	// (0x0001810a) list_single_2heading_msg_pane_t1_ParamLimits

0xd2b1,	// (0x0001810a) list_single_2heading_msg_pane_t1

0xd2d9,	// (0x00018132) list_single_2heading_msg_pane_t2_ParamLimits

0xd2d9,	// (0x00018132) list_single_2heading_msg_pane_t2

0xd308,	// (0x00018161) list_single_2heading_msg_pane_t3_ParamLimits

0xd308,	// (0x00018161) list_single_2heading_msg_pane_t3

0xd341,	// (0x0001819a) list_single_2heading_msg_pane_t4_ParamLimits

0xd341,	// (0x0001819a) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001ab13) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001ab13) list_single_2heading_msg_pane_t

0x6e2f,	// (0x00011c88) title_pane_g4_ParamLimits

0x6e2f,	// (0x00011c88) title_pane_g4

0x4d95,	// (0x0000fbee) title_pane_stacon_g3_ParamLimits

0x4d95,	// (0x0000fbee) title_pane_stacon_g3

0xcd58,	// (0x00017bb1) list_single_2graphic_im_pane_g4_ParamLimits

0xcd58,	// (0x00017bb1) list_single_2graphic_im_pane_g4

0xa5e0,	// (0x00015439) popup_side_volume_key_window_cp

0xaeed,	// (0x00015d46) main_idle_act2_pane_t1

0x599c,	// (0x000107f5) toolbar_button_pane_g10

0x76cd,	// (0x00012526) popup_toolbar_window_cp1

0xb9b6,	// (0x0001680f) clock_nsta_pane_cp_t1

0xb9b6,	// (0x0001680f) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001a90e) clock_nsta_pane_cp_t

0x4f86,	// (0x0000fddf) navi_navi_volume_pane_cp2_ParamLimits

0x4f95,	// (0x0000fdee) popup_side_volume_key_window_g1_ParamLimits

0x4fa1,	// (0x0000fdfa) popup_side_volume_key_window_g2_ParamLimits

0x4fb0,	// (0x0000fe09) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a565) popup_side_volume_key_window_g_ParamLimits

0x5e04,	// (0x00010c5d) fep_hwr_aid_pane

0x5eab,	// (0x00010d04) bg_fep_hwr_top_pane_g4_ParamLimits

0xbfc9,	// (0x00016e22) fep_hwr_top_pane_g1_ParamLimits

0xbfdb,	// (0x00016e34) fep_hwr_top_pane_g2_ParamLimits

0x5ecb,	// (0x00010d24) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001a963) fep_hwr_top_pane_g_ParamLimits

0x5ee0,	// (0x00010d39) fep_hwr_top_text_pane_ParamLimits

0xa3a3,	// (0x000151fc) aid_touch_tab_arrow_arrow_2

0xa3ac,	// (0x00015205) aid_touch_tab_arrow_left_2

0x5e18,	// (0x00010c71) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5e4f,	// (0x00010ca8) fep_hwr_prediction_pane

0xc13b,	// (0x00016f94) fep_vkb_prediction_pane

0xc23f,	// (0x00017098) fep_vkb_side_pane_g3_ParamLimits

0xc23f,	// (0x00017098) fep_vkb_side_pane_g3

0x605b,	// (0x00010eb4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x60c7,	// (0x00010f20) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x60d4,	// (0x00010f2d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001aa12) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6203,	// (0x0001105c) fep_hwr_prediction_pane_g1

0x620d,	// (0x00011066) fep_hwr_prediction_pane_g2

0x6215,	// (0x0001106e) fep_hwr_prediction_pane_g3

0x621d,	// (0x00011076) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001ab1c) fep_hwr_prediction_pane_g

0xd366,	// (0x000181bf) fep_vkb_prediction_pane_g1

0xd370,	// (0x000181c9) fep_vkb_prediction_pane_g2

0xd378,	// (0x000181d1) fep_vkb_prediction_pane_g3

0xd380,	// (0x000181d9) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001ab25) fep_vkb_prediction_pane_g

0x5c84,	// (0x00010add) slider_set_pane_g3

0x5c98,	// (0x00010af1) slider_set_pane_g4

0x5cb0,	// (0x00010b09) slider_set_pane_g5

0x5c84,	// (0x00010add) slider_set_pane_g6

0x5cc6,	// (0x00010b1f) slider_set_pane_g7

0xaa69,	// (0x000158c2) slider_form_pane_g3

0xaa72,	// (0x000158cb) slider_form_pane_g4

0xaa7a,	// (0x000158d3) slider_form_pane_g5

0xaa69,	// (0x000158c2) slider_form_pane_g6

0xaa82,	// (0x000158db) slider_form_pane_g7

0xb1ea,	// (0x00016043) slider_set_pane_vc_g3

0xb1f3,	// (0x0001604c) slider_set_pane_vc_g4

0xb1fc,	// (0x00016055) slider_set_pane_vc_g5

0xb1ea,	// (0x00016043) slider_set_pane_vc_g6

0xb205,	// (0x0001605e) slider_set_pane_vc_g7

0xb68a,	// (0x000164e3) slider_form_pane_vc_g1

0xb693,	// (0x000164ec) slider_form_pane_vc_g2

0xb69c,	// (0x000164f5) slider_form_pane_vc_g3

0xb68a,	// (0x000164e3) slider_form_pane_vc_g4

0xb6a5,	// (0x000164fe) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001a8e0) slider_form_pane_vc_g

0x4a5c,	// (0x0000f8b5) main_idle_act3_pane

0xd388,	// (0x000181e1) ai3_links_pane

0xd391,	// (0x000181ea) popup_ai3_data_window_ParamLimits

0xd391,	// (0x000181ea) popup_ai3_data_window

0x6de7,	// (0x00011c40) grid_ai3_links_pane

0xd3ab,	// (0x00018204) cell_ai3_links_pane_ParamLimits

0xd3ab,	// (0x00018204) cell_ai3_links_pane

0xd3c3,	// (0x0001821c) bg_popup_sub_pane_cp11

0xd3d0,	// (0x00018229) cell_ai3_links_pane_g1

0x6de7,	// (0x00011c40) bg_popup_sub_pane_cp12

0xd3f5,	// (0x0001824e) heading_ai3_data_pane

0xd3fd,	// (0x00018256) list_ai3_gene_pane

0xd409,	// (0x00018262) popup_ai3_data_window_g1

0xd411,	// (0x0001826a) heading_ai3_data_pane_g1

0xd419,	// (0x00018272) heading_ai3_data_pane_t1

0xd427,	// (0x00018280) list_double_ai3_gene_pane_ParamLimits

0xd427,	// (0x00018280) list_double_ai3_gene_pane

0xd434,	// (0x0001828d) list_single_ai3_gene_pane_ParamLimits

0xd434,	// (0x0001828d) list_single_ai3_gene_pane

0xbf32,	// (0x00016d8b) list_highlight_pane_cp7_ParamLimits

0xbf32,	// (0x00016d8b) list_highlight_pane_cp7

0xd441,	// (0x0001829a) list_single_a13_gene_pane_t1_ParamLimits

0xd441,	// (0x0001829a) list_single_a13_gene_pane_t1

0xd458,	// (0x000182b1) list_single_ai3_gene_pane_g1

0xd461,	// (0x000182ba) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001ab2e) list_single_ai3_gene_pane_g

0xd469,	// (0x000182c2) list_double_ai3_gene_pane_g1_ParamLimits

0xd469,	// (0x000182c2) list_double_ai3_gene_pane_g1

0xd475,	// (0x000182ce) list_double_ai3_gene_pane_t1_ParamLimits

0xd475,	// (0x000182ce) list_double_ai3_gene_pane_t1

0xd491,	// (0x000182ea) list_double_ai3_gene_pane_t2_ParamLimits

0xd491,	// (0x000182ea) list_double_ai3_gene_pane_t2

0xd4a7,	// (0x00018300) list_double_ai3_gene_pane_t3_ParamLimits

0xd4a7,	// (0x00018300) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001ab33) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001ab33) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd26f,	// (0x000180c8) aid_size_min_col_2

0xd279,	// (0x000180d2) aid_size_min_msg_ParamLimits

0xd279,	// (0x000180d2) aid_size_min_msg

0xc33f,	// (0x00017198) fep_vkb_top_text_pane_g2_ParamLimits

0xc33f,	// (0x00017198) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001a993) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001a993) fep_vkb_top_text_pane_g

0x4a5c,	// (0x0000f8b5) main_hc_apps_shell_pane

0xd4c4,	// (0x0001831d) grid_hc_apps_pane_ParamLimits

0xd4c4,	// (0x0001831d) grid_hc_apps_pane

0xd4d3,	// (0x0001832c) list_hc_apps_pane

0xd4db,	// (0x00018334) scroll_pane_cp37_ParamLimits

0xd4db,	// (0x00018334) scroll_pane_cp37

0xd4e7,	// (0x00018340) cell_hc_apps_pane_ParamLimits

0xd4e7,	// (0x00018340) cell_hc_apps_pane

0xd595,	// (0x000183ee) cell_hc_apps_pane_g1_ParamLimits

0xd595,	// (0x000183ee) cell_hc_apps_pane_g1

0xd5c6,	// (0x0001841f) cell_hc_apps_pane_g2_ParamLimits

0xd5c6,	// (0x0001841f) cell_hc_apps_pane_g2

0xd5e2,	// (0x0001843b) cell_hc_apps_pane_g3_ParamLimits

0xd5e2,	// (0x0001843b) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001ab3a) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001ab3a) cell_hc_apps_pane_g

0xd604,	// (0x0001845d) cell_hc_apps_pane_t1_ParamLimits

0xd604,	// (0x0001845d) cell_hc_apps_pane_t1

0x717e,	// (0x00011fd7) grid_highlight_pane_cp10_ParamLimits

0x717e,	// (0x00011fd7) grid_highlight_pane_cp10

0xd644,	// (0x0001849d) list_single_hc_apps_pane_ParamLimits

0xd644,	// (0x0001849d) list_single_hc_apps_pane

0xd6a0,	// (0x000184f9) list_single_hc_apps_pane_g1

0xd6b9,	// (0x00018512) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001ab41) list_single_hc_apps_pane_g

0xd6d2,	// (0x0001852b) list_single_hc_apps_pane_g2_copy1

0xd6ee,	// (0x00018547) list_single_hc_apps_pane_t1

0x6edb,	// (0x00011d34) bg_set_opt_pane_cp_ParamLimits

0x4cbd,	// (0x0000fb16) setting_slider_pane_t1_ParamLimits

0x4cd6,	// (0x0000fb2f) setting_slider_pane_t2_ParamLimits

0x4cf0,	// (0x0000fb49) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a3b7) setting_slider_pane_t_ParamLimits

0x4d08,	// (0x0000fb61) slider_set_pane_ParamLimits

0x522f,	// (0x00010088) control_pane_g5_ParamLimits

0x522f,	// (0x00010088) control_pane_g5

0xa8b8,	// (0x00015711) slider_set_pane_g1_ParamLimits

0x5c78,	// (0x00010ad1) slider_set_pane_g2_ParamLimits

0x5c84,	// (0x00010add) slider_set_pane_g3_ParamLimits

0x5c98,	// (0x00010af1) slider_set_pane_g4_ParamLimits

0x5cb0,	// (0x00010b09) slider_set_pane_g5_ParamLimits

0x5c84,	// (0x00010add) slider_set_pane_g6_ParamLimits

0x5cc6,	// (0x00010b1f) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001a7b8) slider_set_pane_g_ParamLimits

0x89fe,	// (0x00013857) navi_icon_text_pane_ParamLimits

0x8f04,	// (0x00013d5d) aid_fill_nsta_2_ParamLimits

0x8f43,	// (0x00013d9c) aid_touch_tab_arrow_left_ParamLimits

0x8f52,	// (0x00013dab) aid_touch_tab_arrow_right_ParamLimits

0x8fbf,	// (0x00013e18) clock_nsta_pane_ParamLimits

0xa385,	// (0x000151de) navi_icon_pane_g1_ParamLimits

0xa391,	// (0x000151ea) navi_text_pane_t1_ParamLimits

0xbac2,	// (0x0001691b) navi_icon_text_pane_g1_ParamLimits

0xbace,	// (0x00016927) navi_icon_text_pane_t1_ParamLimits

0xd6a0,	// (0x000184f9) list_single_hc_apps_pane_g1_ParamLimits

0xd6b9,	// (0x00018512) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001ab41) list_single_hc_apps_pane_g_ParamLimits

0xd6d2,	// (0x0001852b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd6ee,	// (0x00018547) list_single_hc_apps_pane_t1_ParamLimits

0x4bc7,	// (0x0000fa20) popup_toolbar2_fixed_window_ParamLimits

0x4bc7,	// (0x0000fa20) popup_toolbar2_fixed_window

0x5834,	// (0x0001068d) popup_toolbar2_float_window

0x6de7,	// (0x00011c40) bg_popup_sub_pane_cp27

0xd71c,	// (0x00018575) grid_toolbar2_float_pane

0x6de7,	// (0x00011c40) bg_popup_sub_pane_cp26

0xd71c,	// (0x00018575) grid_toolbar2_fixed_pane

0xd724,	// (0x0001857d) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x0001857d) cell_toolbar2_fixed_pane

0xd734,	// (0x0001858d) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x00018596) toolbar2_fixed_button_pane

0x9404,	// (0x0001425d) toolbar2_fixed_button_pane_g1

0x9414,	// (0x0001426d) toolbar2_fixed_button_pane_g2

0x940c,	// (0x00014265) toolbar2_fixed_button_pane_g3

0x9424,	// (0x0001427d) toolbar2_fixed_button_pane_g4

0x941c,	// (0x00014275) toolbar2_fixed_button_pane_g5

0x942c,	// (0x00014285) toolbar2_fixed_button_pane_g6

0x9434,	// (0x0001428d) toolbar2_fixed_button_pane_g7

0x9444,	// (0x0001429d) toolbar2_fixed_button_pane_g8

0x943c,	// (0x00014295) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001a6ba) toolbar2_fixed_button_pane_g

0xd745,	// (0x0001859e) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x0001859e) cell_toolbar2_float_pane

0xd756,	// (0x000185af) cell_toolbar2_float_pane_g1

0xd73d,	// (0x00018596) toolbar2_fixed_button_pane_cp

0xc09b,	// (0x00016ef4) fep_vkb_accented_list_pane_ParamLimits

0xc09b,	// (0x00016ef4) fep_vkb_accented_list_pane

0x603b,	// (0x00010e94) bg_popup_fep_shadow_pane_g9

0x8b7e,	// (0x000139d7) bg_popup_fep_shadow_pane_cp3

0x7fb0,	// (0x00012e09) list_accented_list_pane

0xd75f,	// (0x000185b8) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x000185b8) list_single_accented_list_pane

0x8b7e,	// (0x000139d7) list_highlight_pane_cp10

0xd770,	// (0x000185c9) list_single_accented_list_pane_t1

0x5784,	// (0x000105dd) popup_slider_window_ParamLimits

0x5784,	// (0x000105dd) popup_slider_window

0xd266,	// (0x000180bf) aid_indentation_list_msg

0xd82a,	// (0x00018683) bg_popup_window_pane_cp19

0xd894,	// (0x000186ed) popup_slider_window_g1

0xd8b0,	// (0x00018709) popup_slider_window_g2

0xd8cc,	// (0x00018725) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001ab46) popup_slider_window_g

0xd928,	// (0x00018781) popup_slider_window_t1

0xd99c,	// (0x000187f5) small_volume_slider_vertical_pane

0xbf6d,	// (0x00016dc6) small_volume_slider_vertical_pane_g1

0xbf6d,	// (0x00016dc6) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x00018811) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001ab58) small_volume_slider_vertical_pane_g

0x497f,	// (0x0000f7d8) area_side_right_pane_ParamLimits

0x497f,	// (0x0000f7d8) area_side_right_pane

0x6225,	// (0x0001107e) aid_size_side_button_ParamLimits

0x6225,	// (0x0001107e) aid_size_side_button

0x6239,	// (0x00011092) grid_sctrl_middle_pane_ParamLimits

0x6239,	// (0x00011092) grid_sctrl_middle_pane

0x6258,	// (0x000110b1) sctrl_sk_bottom_pane

0x6269,	// (0x000110c2) sctrl_sk_top_pane

0x627b,	// (0x000110d4) aid_touch_sctrl_top

0x6288,	// (0x000110e1) bg_sctrl_sk_pane_ParamLimits

0x6288,	// (0x000110e1) bg_sctrl_sk_pane

0x6296,	// (0x000110ef) sctrl_sk_top_pane_g1

0x62a3,	// (0x000110fc) sctrl_sk_top_pane_t1

0x627b,	// (0x000110d4) aid_touch_sctrl_bottom

0x6288,	// (0x000110e1) bg_sctrl_sk_pane_cp_ParamLimits

0x6288,	// (0x000110e1) bg_sctrl_sk_pane_cp

0x62be,	// (0x00011117) sctrl_sk_bottom_pane_g1

0x62a3,	// (0x000110fc) sctrl_sk_bottom_pane_t1

0x62c7,	// (0x00011120) cell_sctrl_middle_pane_ParamLimits

0x62c7,	// (0x00011120) cell_sctrl_middle_pane

0x62e2,	// (0x0001113b) aid_touch_sctrl_middle_ParamLimits

0x62e2,	// (0x0001113b) aid_touch_sctrl_middle

0x62f4,	// (0x0001114d) bg_sctrl_middle_pane_ParamLimits

0x62f4,	// (0x0001114d) bg_sctrl_middle_pane

0x605b,	// (0x00010eb4) cell_sctrl_middle_pane_g1_ParamLimits

0x605b,	// (0x00010eb4) cell_sctrl_middle_pane_g1

0x6302,	// (0x0001115b) cell_sctrl_middle_pane_g2_ParamLimits

0x6302,	// (0x0001115b) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001ab64) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001ab64) cell_sctrl_middle_pane_g

0x9404,	// (0x0001425d) bg_sctrl_middle_pane_g1

0x940c,	// (0x00014265) bg_sctrl_middle_pane_g2

0x9414,	// (0x0001426d) bg_sctrl_middle_pane_g3

0x941c,	// (0x00014275) bg_sctrl_middle_pane_g4

0x9424,	// (0x0001427d) bg_sctrl_middle_pane_g5

0x942c,	// (0x00014285) bg_sctrl_middle_pane_g6

0x9434,	// (0x0001428d) bg_sctrl_middle_pane_g7

0x943c,	// (0x00014295) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001ab69) bg_sctrl_middle_pane_g

0x9444,	// (0x0001429d) bg_sctrl_middle_pane_g8_copy1

0x9404,	// (0x0001425d) bg_sctrl_sk_pane_g1

0x9414,	// (0x0001426d) bg_sctrl_sk_pane_g2

0x940c,	// (0x00014265) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001a6ba) bg_sctrl_sk_pane_g

0x7693,	// (0x000124ec) aid_size_touch_scroll_bar

0x9424,	// (0x0001427d) bg_sctrl_sk_pane_g4

0x941c,	// (0x00014275) bg_sctrl_sk_pane_g5

0x942c,	// (0x00014285) bg_sctrl_sk_pane_g6

0x9434,	// (0x0001428d) bg_sctrl_sk_pane_g7

0x9444,	// (0x0001429d) bg_sctrl_sk_pane_g8

0x943c,	// (0x00014295) bg_sctrl_sk_pane_g9

0x53ed,	// (0x00010246) popup_fep_china_hwr2_fs_candidate_window

0x53f7,	// (0x00010250) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x53f7,	// (0x00010250) popup_fep_china_hwr2_fs_control_window

0x605b,	// (0x00010eb4) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001ab5f) sctrl_sk_top_pane_g

0xd9c1,	// (0x0001881a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x0001881a) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x0001882c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x0001882c) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x00018843) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x00018843) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x00018855) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x00018855) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x00018865) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x0001886d) aid_fep_china_hwr2_fs_candi_cell

0x6de7,	// (0x00011c40) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x00018877) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x00018881) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x00018881) cell_fep_china_hwr2_fs_funtion_grid

0xbf6d,	// (0x00016dc6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x00018899) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x00018899) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x000188a7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x000188a7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001ab7a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001ab7a) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x000188bd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x000188bd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x000188d2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x000188d2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001ab7f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001ab7f) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x000188ee) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x000188f6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x000188fe) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001ab84) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00018906) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00018906) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x0001891f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x00018927) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbf6d,	// (0x00016dc6) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbf6d,	// (0x00016dc6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001a998) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x0001892f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8fcc,	// (0x00013e25) clock_nsta_pane_cp_24_ParamLimits

0x8fcc,	// (0x00013e25) clock_nsta_pane_cp_24

0x904a,	// (0x00013ea3) indicator_nsta_pane_cp_24_ParamLimits

0x904a,	// (0x00013ea3) indicator_nsta_pane_cp_24

0xa201,	// (0x0001505a) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001a71f) heading_pane_g

0xad36,	// (0x00015b8f) grid_sct_catagory_button_pane

0xad66,	// (0x00015bbf) scroll_pane_cp5_ParamLimits

0xbb10,	// (0x00016969) button_value_adjust_pane_cp5_ParamLimits

0xbb10,	// (0x00016969) button_value_adjust_pane_cp5

0xbc0c,	// (0x00016a65) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x0001893d) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x0001893d) cell_sct_catagory_button_pane

0xbf32,	// (0x00016d8b) bg_button_pane_cp01_ParamLimits

0xbf32,	// (0x00016d8b) bg_button_pane_cp01

0xbf6d,	// (0x00016dc6) cell_sct_catagory_button_pane_g1

0x57c3,	// (0x0001061c) popup_tb_extension_window

0xdaf6,	// (0x0001894f) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x0001894f) aid_size_cell_ext

0x717e,	// (0x00011fd7) bg_tb_trans_pane_cp1_ParamLimits

0x717e,	// (0x00011fd7) bg_tb_trans_pane_cp1

0xdb16,	// (0x0001896f) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x0001896f) grid_tb_ext_pane

0xdb44,	// (0x0001899d) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x0001899d) cell_tb_ext_pane

0xdb5b,	// (0x000189b4) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x000189b4) cell_tb_ext_pane_g1

0xdb78,	// (0x000189d1) cell_tb_ext_pane_t1

0x717e,	// (0x00011fd7) list_highlight_pane_cp11_ParamLimits

0x717e,	// (0x00011fd7) list_highlight_pane_cp11

0x4be6,	// (0x0000fa3f) popup_uni_indicator_window_ParamLimits

0x4be6,	// (0x0000fa3f) popup_uni_indicator_window

0x7cdf,	// (0x00012b38) bg_popup_sub_pane_cp14

0xdb93,	// (0x000189ec) list_uniindi_pane

0xdb9f,	// (0x000189f8) uniindi_top_pane

0x717e,	// (0x00011fd7) bg_uniindi_top_pane

0xdbbe,	// (0x00018a17) uniindi_top_pane_g1

0xdbd4,	// (0x00018a2d) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001ab8b) uniindi_top_pane_g

0xdbfe,	// (0x00018a57) uniindi_top_pane_t1

0xdc28,	// (0x00018a81) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x00018a81) list_single_uniindi_pane

0xbf6d,	// (0x00016dc6) bg_uniindi_top_pane_g1

0xdc3b,	// (0x00018a94) list_single_uniindi_pane_g1

0xdc4e,	// (0x00018aa7) list_single_uniindi_pane_t1

0x4a5c,	// (0x0000f8b5) control_bg_pane

0xdc73,	// (0x00018acc) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00018ad5) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x00018ade) control_bg_pane_g1

0xdc8e,	// (0x00018ae7) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001ab94) control_bg_pane_g

0xb95a,	// (0x000167b3) cell_indicator_nsta_pane_g1_ParamLimits

0xb968,	// (0x000167c1) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001a8fc) cell_indicator_nsta_pane_g_ParamLimits

0xbc94,	// (0x00016aed) form2_midp_time_pane_t1_ParamLimits

0x5355,	// (0x000101ae) main_idle_act4_pane_ParamLimits

0x5355,	// (0x000101ae) main_idle_act4_pane

0x57c3,	// (0x0001061c) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x0001898d) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x0001898d) tb_ext_find_pane

0xdc97,	// (0x00018af0) ai_gene_pane_1_cp1

0x8cb9,	// (0x00013b12) ai_gene_pane_2_cp1

0xdc9f,	// (0x00018af8) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x00018b01) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x00018b0a) list_single_idle_plugin_player_pane

0xdcba,	// (0x00018b13) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x00018b13) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x00018b35) main_idle_act4_pane_t1

0xdcee,	// (0x00018b47) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001ab99) main_idle_act4_pane_t

0xdd00,	// (0x00018b59) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x00018b59) middle_sk_idle_act4_pane

0xdd16,	// (0x00018b6f) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x00018b89) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x00018b89) shortcut_wheel_idle_act4_pane

0xbf6d,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g1

0xbf6d,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g2

0xbf6d,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g3

0xbf6d,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g4

0xbf6d,	// (0x00016dc6) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00018b9d) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x00018ba5) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00018bad) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00018bb5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001ab9e) shortcut_wheel_idle_act4_pane_g

0xc1eb,	// (0x00017044) middle_sk_idle_act4_pane_g1_ParamLimits

0xc1eb,	// (0x00017044) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00018c19) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00018c19) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001abc1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001abc1) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00018c25) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00018c25) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00018c42) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00018c42) grid_ai_shortcut_pane

0xde02,	// (0x00018c5b) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00018c5b) list_highlight_pane_cp16

0xde0f,	// (0x00018c68) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x00018c68) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x00018c74) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x00018c74) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00018c8c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00018c8c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001abc6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001abc6) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x00018c9f) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x00018c9f) cell_ai_shortcut_pane

0xde6a,	// (0x00018cc3) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x00018cc3) cell_ai_shortcut_pane_g1

0xdc97,	// (0x00018af0) ai_gene_pane_1_cp2

0xde8c,	// (0x00018ce5) ai_gene_pane_2_cp2

0xde94,	// (0x00018ced) list_highlight_pane_cp15

0xde9d,	// (0x00018cf6) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x00018ced) list_highlight_pane_cp17

0xdea5,	// (0x00018cfe) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00018d06) list_single_idle_plugin_player_pane_g1

0xaf8f,	// (0x00015de8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001abcd) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00018d0e) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00018d1c) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00018d2a) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x00018d38) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001abd2) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00018d46) wait_bar_pane_cp15

0xdef5,	// (0x00018d4e) grid_ai_notification_pane

0xaf8f,	// (0x00015de8) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x00018d57) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x00018d57) cell_ai_notification_pane

0xdf0b,	// (0x00018d64) cell_ai_notification_pane_g1

0xdf13,	// (0x00018d6c) cell_ai_notification_pane_t1

0xdf21,	// (0x00018d7a) tb_ext_find_button_pane

0xdf29,	// (0x00018d82) tb_ext_find_pane_g1

0xdf31,	// (0x00018d8a) tb_ext_find_pane_t1

0x84dc,	// (0x00013335) tb_ext_find_button_pane_g1

0xdf60,	// (0x00018db9) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001abdb) tb_ext_find_button_pane_g

0xdcdc,	// (0x00018b35) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x00018b47) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001ab99) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x00018b6f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x00018b7d) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x00018b7d) sat_plugin_idle_act4_pane

0xdf69,	// (0x00018dc2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf69,	// (0x00018dc2) sat_plugin_idle_act4_pane_t1

0xdf7c,	// (0x00018dd5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf7c,	// (0x00018dd5) sat_plugin_idle_act4_pane_t2

0xdf8f,	// (0x00018de8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf8f,	// (0x00018de8) sat_plugin_idle_act4_pane_t3

0xdfa2,	// (0x00018dfb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfa2,	// (0x00018dfb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001abe0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001abe0) sat_plugin_idle_act4_pane_t

0x4b21,	// (0x0000f97a) popup_battery_window_ParamLimits

0x4b21,	// (0x0000f97a) popup_battery_window

0x717e,	// (0x00011fd7) bg_popup_sub_pane_cp25_ParamLimits

0x717e,	// (0x00011fd7) bg_popup_sub_pane_cp25

0xdfb5,	// (0x00018e0e) popup_battery_window_g1_ParamLimits

0xdfb5,	// (0x00018e0e) popup_battery_window_g1

0xdfc1,	// (0x00018e1a) popup_battery_window_t1_ParamLimits

0xdfc1,	// (0x00018e1a) popup_battery_window_t1

0xdfd3,	// (0x00018e2c) popup_battery_window_t2_ParamLimits

0xdfd3,	// (0x00018e2c) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001abe9) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001abe9) popup_battery_window_t

0x8b86,	// (0x000139df) midp_canvas_pane_ParamLimits

0x8bfd,	// (0x00013a56) midp_keypad_pane_ParamLimits

0x8bfd,	// (0x00013a56) midp_keypad_pane

0x8ec4,	// (0x00013d1d) main_midp_pane_ParamLimits

0xb9d4,	// (0x0001682d) signal_pane_g2_cp_ParamLimits

0xdff0,	// (0x00018e49) aid_size_cell_midp_keypad_ParamLimits

0xdff0,	// (0x00018e49) aid_size_cell_midp_keypad

0xe00a,	// (0x00018e63) midp_keyp_game_grid_pane_ParamLimits

0xe00a,	// (0x00018e63) midp_keyp_game_grid_pane

0xe02a,	// (0x00018e83) midp_keyp_rocker_pane_ParamLimits

0xe02a,	// (0x00018e83) midp_keyp_rocker_pane

0xe063,	// (0x00018ebc) midp_keyp_sk_left_pane_ParamLimits

0xe063,	// (0x00018ebc) midp_keyp_sk_left_pane

0xe0bd,	// (0x00018f16) midp_keyp_sk_right_pane_ParamLimits

0xe0bd,	// (0x00018f16) midp_keyp_sk_right_pane

0x6de7,	// (0x00011c40) bg_button_pane_cp03

0xe117,	// (0x00018f70) midp_keyp_sk_left_pane_g1

0x6de7,	// (0x00011c40) bg_button_pane_cp04

0xe117,	// (0x00018f70) midp_keyp_sk_right_pane_g1

0xbf6d,	// (0x00016dc6) midp_keyp_rocker_pane_g1

0xe120,	// (0x00018f79) keyp_game_cell_pane_ParamLimits

0xe120,	// (0x00018f79) keyp_game_cell_pane

0x6de7,	// (0x00011c40) bg_button_pane_cp02

0xe133,	// (0x00018f8c) keyp_game_cell_pane_g1

0x4b65,	// (0x0000f9be) popup_fep_vkb2_window_ParamLimits

0x4b65,	// (0x0000f9be) popup_fep_vkb2_window

0x6320,	// (0x00011179) aid_size_cell_vkb2_ParamLimits

0x6320,	// (0x00011179) aid_size_cell_vkb2

0x6374,	// (0x000111cd) popup_fep_vkb2_window_g1_ParamLimits

0x6374,	// (0x000111cd) popup_fep_vkb2_window_g1

0x63bc,	// (0x00011215) vkb2_area_bottom_pane_ParamLimits

0x63bc,	// (0x00011215) vkb2_area_bottom_pane

0x6408,	// (0x00011261) vkb2_area_keypad_pane_ParamLimits

0x6408,	// (0x00011261) vkb2_area_keypad_pane

0x644a,	// (0x000112a3) vkb2_area_top_pane_ParamLimits

0x644a,	// (0x000112a3) vkb2_area_top_pane

0x64c4,	// (0x0001131d) vkb2_top_entry_pane_ParamLimits

0x64c4,	// (0x0001131d) vkb2_top_entry_pane

0x64ee,	// (0x00011347) vkb2_top_grid_left_pane_ParamLimits

0x64ee,	// (0x00011347) vkb2_top_grid_left_pane

0x650c,	// (0x00011365) vkb2_top_grid_right_pane_ParamLimits

0x650c,	// (0x00011365) vkb2_top_grid_right_pane

0x652a,	// (0x00011383) vkb2_cell_keypad_pane_ParamLimits

0x652a,	// (0x00011383) vkb2_cell_keypad_pane

0x65fb,	// (0x00011454) vkb2_area_bottom_grid_pane_ParamLimits

0x65fb,	// (0x00011454) vkb2_area_bottom_grid_pane

0x6621,	// (0x0001147a) vkb2_area_bottom_pane_g1_ParamLimits

0x6621,	// (0x0001147a) vkb2_area_bottom_pane_g1

0x6645,	// (0x0001149e) vkb2_area_bottom_pane_g2_ParamLimits

0x6645,	// (0x0001149e) vkb2_area_bottom_pane_g2

0x6673,	// (0x000114cc) vkb2_area_bottom_pane_g3_ParamLimits

0x6673,	// (0x000114cc) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001abee) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001abee) vkb2_area_bottom_pane_g

0x66d4,	// (0x0001152d) vkb2_top_cell_left_pane_ParamLimits

0x66d4,	// (0x0001152d) vkb2_top_cell_left_pane

0xe144,	// (0x00018f9d) vkb2_top_entry_pane_g1_ParamLimits

0xe144,	// (0x00018f9d) vkb2_top_entry_pane_g1

0xe152,	// (0x00018fab) vkb2_top_entry_pane_t1_ParamLimits

0xe152,	// (0x00018fab) vkb2_top_entry_pane_t1

0xe184,	// (0x00018fdd) vkb2_top_entry_pane_t2_ParamLimits

0xe184,	// (0x00018fdd) vkb2_top_entry_pane_t2

0xe1b6,	// (0x0001900f) vkb2_top_entry_pane_t3_ParamLimits

0xe1b6,	// (0x0001900f) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001abf5) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001abf5) vkb2_top_entry_pane_t

0x6721,	// (0x0001157a) vkb2_top_grid_right_pane_g1_ParamLimits

0x6721,	// (0x0001157a) vkb2_top_grid_right_pane_g1

0x6737,	// (0x00011590) vkb2_top_grid_right_pane_g2_ParamLimits

0x6737,	// (0x00011590) vkb2_top_grid_right_pane_g2

0x674f,	// (0x000115a8) vkb2_top_grid_right_pane_g3_ParamLimits

0x674f,	// (0x000115a8) vkb2_top_grid_right_pane_g3

0x6767,	// (0x000115c0) vkb2_top_grid_right_pane_g4_ParamLimits

0x6767,	// (0x000115c0) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001abfc) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001abfc) vkb2_top_grid_right_pane_g

0x677d,	// (0x000115d6) vkb2_top_cell_left_pane_g1

0x6794,	// (0x000115ed) vkb2_cell_keypad_pane_g1_ParamLimits

0x6794,	// (0x000115ed) vkb2_cell_keypad_pane_g1

0xe1da,	// (0x00019033) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1da,	// (0x00019033) vkb2_cell_keypad_pane_t1

0x67a2,	// (0x000115fb) vkb2_cell_bottom_grid_pane_ParamLimits

0x67a2,	// (0x000115fb) vkb2_cell_bottom_grid_pane

0x67db,	// (0x00011634) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00018bbd) aid_call2_pane_cp02

0xdd6c,	// (0x00018bc5) aid_call_pane_cp02

0xdd74,	// (0x00018bcd) clock_digital_number_pane_cp10

0xdd7c,	// (0x00018bd5) clock_digital_number_pane_cp11

0xdd84,	// (0x00018bdd) clock_digital_number_pane_cp12

0xdd8c,	// (0x00018be5) clock_digital_number_pane_cp13

0xdd94,	// (0x00018bed) clock_digital_separator_pane_cp10

0x84dc,	// (0x00013335) popup_clock_digital_analogue_window_cp2_g1

0x84dc,	// (0x00013335) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00018bf5) popup_clock_digital_analogue_window_cp2_g3

0x84dc,	// (0x00013335) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00018bf5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001abb1) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00018bfd) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00018c0b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001abbc) popup_clock_digital_analogue_window_cp2_t

0xbf6d,	// (0x00016dc6) clock_digital_number_pane_cp10_g1

0xbf6d,	// (0x00016dc6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a998) clock_digital_number_pane_cp10_g

0xbf6d,	// (0x00016dc6) clock_digital_separator_pane_cp10_g1

0xbf6d,	// (0x00016dc6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001a998) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x00018a39) uniindi_top_pane_g3

0xdbf1,	// (0x00018a4a) uniindi_top_pane_g4

0x65b5,	// (0x0001140e) vkb2_row_keypad_pane_ParamLimits

0x65b5,	// (0x0001140e) vkb2_row_keypad_pane

0x67f7,	// (0x00011650) vkb2_cell_t_keypad_pane_ParamLimits

0x67f7,	// (0x00011650) vkb2_cell_t_keypad_pane

0x6807,	// (0x00011660) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6807,	// (0x00011660) vkb2_cell_t_keypad_pane_cp08

0x681a,	// (0x00011673) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x681a,	// (0x00011673) vkb2_cell_t_keypad_pane_cp09

0x682e,	// (0x00011687) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x682e,	// (0x00011687) vkb2_cell_t_keypad_pane_cp01

0x683f,	// (0x00011698) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x683f,	// (0x00011698) vkb2_cell_t_keypad_pane_cp02

0x6850,	// (0x000116a9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6850,	// (0x000116a9) vkb2_cell_t_keypad_pane_cp03

0x6861,	// (0x000116ba) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6861,	// (0x000116ba) vkb2_cell_t_keypad_pane_cp04

0x6872,	// (0x000116cb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6872,	// (0x000116cb) vkb2_cell_t_keypad_pane_cp05

0x6883,	// (0x000116dc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6883,	// (0x000116dc) vkb2_cell_t_keypad_pane_cp06

0x6894,	// (0x000116ed) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6894,	// (0x000116ed) vkb2_cell_t_keypad_pane_cp07

0x68a5,	// (0x000116fe) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x68a5,	// (0x000116fe) vkb2_cell_t_keypad_pane_cp10

0x605b,	// (0x00010eb4) vkb2_cell_t_keypad_pane_g1

0xe1f1,	// (0x0001904a) vkb2_cell_t_keypad_pane_t1

0x4a5c,	// (0x0000f8b5) popup_grid_graphic2_window

0xe203,	// (0x0001905c) aid_size_cell_graphic2_ParamLimits

0xe203,	// (0x0001905c) aid_size_cell_graphic2

0xe23b,	// (0x00019094) bg_popup_window_pane_cp21_ParamLimits

0xe23b,	// (0x00019094) bg_popup_window_pane_cp21

0xe249,	// (0x000190a2) graphic2_pages_pane_ParamLimits

0xe249,	// (0x000190a2) graphic2_pages_pane

0xe28f,	// (0x000190e8) grid_graphic2_control_pane_ParamLimits

0xe28f,	// (0x000190e8) grid_graphic2_control_pane

0xe2cd,	// (0x00019126) grid_graphic2_pane_ParamLimits

0xe2cd,	// (0x00019126) grid_graphic2_pane

0xe341,	// (0x0001919a) cell_graphic2_pane

0x4a5c,	// (0x0000f8b5) main_comp_mode_pane

0xd3fd,	// (0x00018256) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x00018683) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x0001868f) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x0001868f) bg_touch_area_indi_pane

0xd84c,	// (0x000186a5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x000186a5) bg_touch_area_indi_pane_cp01

0xd862,	// (0x000186bb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x000186bb) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x000186d3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x000186d3) bg_touch_area_indi_pane_cp03

0xd894,	// (0x000186ed) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x00018709) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x00018725) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001ab46) popup_slider_window_g_ParamLimits

0xd928,	// (0x00018781) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x000187f5) small_volume_slider_vertical_pane_ParamLimits

0xe341,	// (0x0001919a) cell_graphic2_pane_ParamLimits

0xe38f,	// (0x000191e8) bg_button_pane_cp10_ParamLimits

0xe38f,	// (0x000191e8) bg_button_pane_cp10

0xe3a2,	// (0x000191fb) bg_button_pane_cp11_ParamLimits

0xe3a2,	// (0x000191fb) bg_button_pane_cp11

0xe3b5,	// (0x0001920e) graphic2_pages_pane_g1_ParamLimits

0xe3b5,	// (0x0001920e) graphic2_pages_pane_g1

0xe3d0,	// (0x00019229) graphic2_pages_pane_g2_ParamLimits

0xe3d0,	// (0x00019229) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001ac0a) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001ac0a) graphic2_pages_pane_g

0xe3e8,	// (0x00019241) graphic2_pages_pane_t1_ParamLimits

0xe3e8,	// (0x00019241) graphic2_pages_pane_t1

0xe400,	// (0x00019259) cell_graphic2_control_pane_ParamLimits

0xe400,	// (0x00019259) cell_graphic2_control_pane

0xe421,	// (0x0001927a) cell_graphic2_pane_g1_ParamLimits

0xe421,	// (0x0001927a) cell_graphic2_pane_g1

0xe42e,	// (0x00019287) cell_graphic2_pane_g2_ParamLimits

0xe42e,	// (0x00019287) cell_graphic2_pane_g2

0xe43b,	// (0x00019294) cell_graphic2_pane_g3_ParamLimits

0xe43b,	// (0x00019294) cell_graphic2_pane_g3

0xe448,	// (0x000192a1) cell_graphic2_pane_g4_ParamLimits

0xe448,	// (0x000192a1) cell_graphic2_pane_g4

0xe455,	// (0x000192ae) cell_graphic2_pane_g5_ParamLimits

0xe455,	// (0x000192ae) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001ac0f) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001ac0f) cell_graphic2_pane_g

0xe470,	// (0x000192c9) cell_graphic2_pane_t1_ParamLimits

0xe470,	// (0x000192c9) cell_graphic2_pane_t1

0x9532,	// (0x0001438b) grid_highlight_pane_cp11_ParamLimits

0x9532,	// (0x0001438b) grid_highlight_pane_cp11

0x717e,	// (0x00011fd7) bg_button_pane_cp05

0xe499,	// (0x000192f2) cell_graphic2_control_pane_g1

0xbf6d,	// (0x00016dc6) bg_touch_area_indi_pane_g1

0xe4c1,	// (0x0001931a) aid_cmod_rocker_key_size

0xe4cb,	// (0x00019324) aid_cmode_itu_key_size

0xe4d5,	// (0x0001932e) main_cmode_video_pane

0xe4df,	// (0x00019338) main_comp_mode_itu_pane

0xe4eb,	// (0x00019344) main_comp_mode_rocker_pane

0xe4f7,	// (0x00019350) cell_cmode_rocker_pane_ParamLimits

0xe4f7,	// (0x00019350) cell_cmode_rocker_pane

0xe509,	// (0x00019362) cell_cmode_itu_pane_ParamLimits

0xe509,	// (0x00019362) cell_cmode_itu_pane

0x7cdf,	// (0x00012b38) bg_button_pane_cp06_ParamLimits

0x7cdf,	// (0x00012b38) bg_button_pane_cp06

0xc1eb,	// (0x00017044) cell_cmode_rocker_pane_g1_ParamLimits

0xc1eb,	// (0x00017044) cell_cmode_rocker_pane_g1

0xda40,	// (0x00018899) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x00018899) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001ac1f) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001ac1f) cell_cmode_rocker_pane_g

0x6de7,	// (0x00011c40) bg_button_pane_cp07

0xe51e,	// (0x00019377) cell_cmode_itu_pane_g1

0xe527,	// (0x00019380) cell_cmode_itu_pane_t1

0xe535,	// (0x0001938e) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001ac24) cell_cmode_itu_pane_t

0xdc63,	// (0x00018abc) aid_touch_ctrl_left

0xdc6b,	// (0x00018ac4) aid_touch_ctrl_right

0x6de7,	// (0x00011c40) compa_mode_pane

0xe543,	// (0x0001939c) aid_cmod_rocker_key_size_cp

0xe54d,	// (0x000193a6) aid_cmode_itu_key_size_cp

0xe557,	// (0x000193b0) compa_mode_pane_g1

0xe55f,	// (0x000193b8) compa_mode_pane_g2

0xe567,	// (0x000193c0) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001ac29) compa_mode_pane_g

0xe56f,	// (0x000193c8) main_comp_mode_itu_pane_cp

0xe577,	// (0x000193d0) main_comp_mode_rocker_pane_cp

0xe57f,	// (0x000193d8) cell_cmode_itu_pane_cp_ParamLimits

0xe57f,	// (0x000193d8) cell_cmode_itu_pane_cp

0xe594,	// (0x000193ed) cell_cmode_rocker_pane_cp_ParamLimits

0xe594,	// (0x000193ed) cell_cmode_rocker_pane_cp

0x7cdf,	// (0x00012b38) bg_button_pane_cp06_cp_ParamLimits

0x7cdf,	// (0x00012b38) bg_button_pane_cp06_cp

0xc1eb,	// (0x00017044) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc1eb,	// (0x00017044) cell_cmode_rocker_pane_g1_cp

0xbf6d,	// (0x00016dc6) cell_cmode_rocker_pane_g2_cp

0x6de7,	// (0x00011c40) bg_button_pane_cp07_cp

0xaa69,	// (0x000158c2) cell_cmode_itu_pane_g1_cp

0xe5a6,	// (0x000193ff) cell_cmode_itu_pane_t1_cp

0xe5a6,	// (0x000193ff) cell_cmode_itu_pane_t2_cp

0xaa56,	// (0x000158af) settings_code_pane_cp2

0x6edb,	// (0x00011d34) bg_popup_window_pane_cp3_ParamLimits

0x7358,	// (0x000121b1) heading_pane_cp3_ParamLimits

0x7364,	// (0x000121bd) listscroll_popup_graphic_pane_ParamLimits

0x5e04,	// (0x00010c5d) fep_hwr_aid_pane_ParamLimits

0x627b,	// (0x000110d4) aid_touch_sctrl_top_ParamLimits

0x6296,	// (0x000110ef) sctrl_sk_top_pane_g1_ParamLimits

0x605b,	// (0x00010eb4) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001ab5f) sctrl_sk_top_pane_g_ParamLimits

0x62a3,	// (0x000110fc) sctrl_sk_top_pane_t1_ParamLimits

0x627b,	// (0x000110d4) aid_touch_sctrl_bottom_ParamLimits

0x62a3,	// (0x000110fc) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00018a05) aid_area_touch_clock

0x648c,	// (0x000112e5) aid_vkb2_area_top_pane_cell_ParamLimits

0x648c,	// (0x000112e5) aid_vkb2_area_top_pane_cell

0x65d7,	// (0x00011430) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x65d7,	// (0x00011430) aid_vkb2_area_bottom_pane_cell

0xe13c,	// (0x00018f95) popup_char_count_window

0xe5b4,	// (0x0001940d) popup_char_count_window_g1

0xe5bd,	// (0x00019416) popup_char_count_window_g2

0xe5c6,	// (0x0001941f) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001ac30) popup_char_count_window_g

0xe5cf,	// (0x00019428) popup_char_count_window_t1

0x6352,	// (0x000111ab) popup_fep_char_preview_window_ParamLimits

0x6352,	// (0x000111ab) popup_fep_char_preview_window

0x64aa,	// (0x00011303) vkb2_top_candi_pane_ParamLimits

0x64aa,	// (0x00011303) vkb2_top_candi_pane

0xe5dd,	// (0x00019436) cell_vkb2_top_candi_pane_ParamLimits

0xe5dd,	// (0x00019436) cell_vkb2_top_candi_pane

0x68ba,	// (0x00011713) bg_popup_fep_char_preview_window_ParamLimits

0x68ba,	// (0x00011713) bg_popup_fep_char_preview_window

0x68c8,	// (0x00011721) popup_fep_char_preview_window_t1_ParamLimits

0x68c8,	// (0x00011721) popup_fep_char_preview_window_t1

0xe62a,	// (0x00019483) bg_popup_fep_char_preview_window_g1

0xe632,	// (0x0001948b) bg_popup_fep_char_preview_window_g2

0xe63a,	// (0x00019493) bg_popup_fep_char_preview_window_g3

0xe642,	// (0x0001949b) bg_popup_fep_char_preview_window_g4

0xe64a,	// (0x000194a3) bg_popup_fep_char_preview_window_g5

0x6902,	// (0x0001175b) bg_popup_fep_char_preview_window_g6

0xe652,	// (0x000194ab) bg_popup_fep_char_preview_window_g7

0xe65a,	// (0x000194b3) bg_popup_fep_char_preview_window_g8

0xe662,	// (0x000194bb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001ac37) bg_popup_fep_char_preview_window_g

0x605b,	// (0x00010eb4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x605b,	// (0x00010eb4) cell_vkb2_top_candi_pane_g1

0x6069,	// (0x00010ec2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6069,	// (0x00010ec2) cell_vkb2_top_candi_pane_g2

0xdf3f,	// (0x00018d98) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf3f,	// (0x00018d98) cell_vkb2_top_candi_pane_g3

0x690a,	// (0x00011763) cell_vkb2_top_candi_pane_g4_ParamLimits

0x690a,	// (0x00011763) cell_vkb2_top_candi_pane_g4

0xc85b,	// (0x000176b4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc85b,	// (0x000176b4) cell_vkb2_top_candi_pane_g5

0x692b,	// (0x00011784) cell_vkb2_top_candi_pane_g6_ParamLimits

0x692b,	// (0x00011784) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001ac4a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001ac4a) cell_vkb2_top_candi_pane_g

0x6939,	// (0x00011792) cell_vkb2_top_candi_pane_t1

0x5c64,	// (0x00010abd) aid_size_touch_slider_mark_ParamLimits

0x5c64,	// (0x00010abd) aid_size_touch_slider_mark

0xe27f,	// (0x000190d8) grid_graphic2_catg_pane_ParamLimits

0xe27f,	// (0x000190d8) grid_graphic2_catg_pane

0xe31d,	// (0x00019176) popup_grid_graphic2_window_t1_ParamLimits

0xe31d,	// (0x00019176) popup_grid_graphic2_window_t1

0xe32f,	// (0x00019188) popup_grid_graphic2_window_t2_ParamLimits

0xe32f,	// (0x00019188) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001ac05) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001ac05) popup_grid_graphic2_window_t

0x717e,	// (0x00011fd7) bg_button_pane_cp05_ParamLimits

0xe499,	// (0x000192f2) cell_graphic2_control_pane_g1_ParamLimits

0xe66a,	// (0x000194c3) cell_graphic2_catg_pane_ParamLimits

0xe66a,	// (0x000194c3) cell_graphic2_catg_pane

0x6de7,	// (0x00011c40) bg_button_pane_cp12

0xe67c,	// (0x000194d5) cell_graphic2_catg_pane_g1

0xdb78,	// (0x000189d1) cell_tb_ext_pane_t1_ParamLimits

0x66f4,	// (0x0001154d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x66f4,	// (0x0001154d) vkb2_top_cell_right_narrow_pane

0x670c,	// (0x00011565) vkb2_top_cell_right_wide_pane_ParamLimits

0x670c,	// (0x00011565) vkb2_top_cell_right_wide_pane

0x5df6,	// (0x00010c4f) bg_vkb2_func_pane_ParamLimits

0x5df6,	// (0x00010c4f) bg_vkb2_func_pane

0x677d,	// (0x000115d6) vkb2_top_cell_left_pane_g1_ParamLimits

0x5df6,	// (0x00010c4f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5df6,	// (0x00010c4f) bg_vkb2_fuc_pane_cp03

0x67db,	// (0x00011634) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x940c,	// (0x00014265) bg_vkb2_func_pane_g1

0x9414,	// (0x0001426d) bg_vkb2_func_pane_g2

0x9424,	// (0x0001427d) bg_vkb2_func_pane_g3

0x941c,	// (0x00014275) bg_vkb2_func_pane_g4

0x942c,	// (0x00014285) bg_vkb2_func_pane_g5

0x9434,	// (0x0001428d) bg_vkb2_func_pane_g6

0x943c,	// (0x00014295) bg_vkb2_func_pane_g7

0x9444,	// (0x0001429d) bg_vkb2_func_pane_g8

0x9404,	// (0x0001425d) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001ac57) bg_vkb2_func_pane_g

0x5df6,	// (0x00010c4f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5df6,	// (0x00010c4f) bg_vkb2_fuc_pane_cp01

0x677d,	// (0x000115d6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x677d,	// (0x000115d6) vkb2_top_cell_right_wide_pane_g1

0x5df6,	// (0x00010c4f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5df6,	// (0x00010c4f) bg_vkb2_fuc_pane_cp02

0x67db,	// (0x00011634) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x67db,	// (0x00011634) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x00018607) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x00018607) aid_touch_area_decrease

0xd7cc,	// (0x00018625) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x00018625) aid_touch_area_increase

0xd7d8,	// (0x00018631) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x00018631) aid_touch_area_mute

0xd7fc,	// (0x00018655) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x00018655) aid_touch_area_slider

0xd8e8,	// (0x00018741) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x00018741) popup_slider_window_g4

0xd8f4,	// (0x0001874d) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x0001874d) popup_slider_window_g5

0xd916,	// (0x0001876f) popup_slider_window_g6_ParamLimits

0xd916,	// (0x0001876f) popup_slider_window_g6

0xd956,	// (0x000187af) popup_slider_window_t2_ParamLimits

0xd956,	// (0x000187af) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001ab53) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001ab53) popup_slider_window_t

0xd96e,	// (0x000187c7) slider_pane_ParamLimits

0xd96e,	// (0x000187c7) slider_pane

0xe685,	// (0x000194de) slider_pane_g1_ParamLimits

0xe685,	// (0x000194de) slider_pane_g1

0xe699,	// (0x000194f2) slider_pane_g2_ParamLimits

0xe699,	// (0x000194f2) slider_pane_g2

0xe6af,	// (0x00019508) slider_pane_g3_ParamLimits

0xe6af,	// (0x00019508) slider_pane_g3

0x0003,

0xfe11,	// (0x0001ac6a) slider_pane_g_ParamLimits

0xfe11,	// (0x0001ac6a) slider_pane_g

0x581f,	// (0x00010678) popup_tb_float_extension_window_ParamLimits

0x581f,	// (0x00010678) popup_tb_float_extension_window

0xe6db,	// (0x00019534) aid_size_cell_tb_float_ext

0x6de7,	// (0x00011c40) bg_popup_sub_window_cp28

0xe6e7,	// (0x00019540) grid_tb_float_ext_pane

0xe6f1,	// (0x0001954a) cell_tb_float_ext_pane_ParamLimits

0xe6f1,	// (0x0001954a) cell_tb_float_ext_pane

0xe70b,	// (0x00019564) cell_tb_float_ext_pane_g1

0xe714,	// (0x0001956d) grid_highlight_pane_cp12

0x5f45,	// (0x00010d9e) cell_last_hwr_side_pane_ParamLimits

0x5f45,	// (0x00010d9e) cell_last_hwr_side_pane

0xbf6d,	// (0x00016dc6) cell_last_hwr_side_pane_g1

0xe71d,	// (0x00019576) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001ac73) cell_last_hwr_side_pane_g

0x66a3,	// (0x000114fc) vkb2_area_bottom_space_btn_pane_ParamLimits

0x66a3,	// (0x000114fc) vkb2_area_bottom_space_btn_pane

0x605b,	// (0x00010eb4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f1,	// (0x0001904a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6939,	// (0x00011792) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6958,	// (0x000117b1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6958,	// (0x000117b1) vkb2_area_bottom_space_btn_pane_g1

0x6992,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6992,	// (0x000117eb) vkb2_area_bottom_space_btn_pane_g2

0x69c8,	// (0x00011821) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x69c8,	// (0x00011821) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001ac78) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001ac78) vkb2_area_bottom_space_btn_pane_g

0x5eb9,	// (0x00010d12) cel_fep_hwr_func_pane_ParamLimits

0x5eb9,	// (0x00010d12) cel_fep_hwr_func_pane

0x5ef5,	// (0x00010d4e) cell_hwr_side_button_pane_ParamLimits

0x5ef5,	// (0x00010d4e) cell_hwr_side_button_pane

0xdbac,	// (0x00018a05) aid_area_touch_clock_ParamLimits

0x717e,	// (0x00011fd7) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x00018a17) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x00018a2d) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x00018a39) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x00018a4a) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001ab8b) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x00018a57) uniindi_top_pane_t1_ParamLimits

0x717e,	// (0x00011fd7) bg_vkb2_func_pane_cp01_ParamLimits

0x717e,	// (0x00011fd7) bg_vkb2_func_pane_cp01

0xe726,	// (0x0001957f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe726,	// (0x0001957f) cel_fep_hwr_func_pane_g1

0x717e,	// (0x00011fd7) bg_vkb2_func_pane_cp02_ParamLimits

0x717e,	// (0x00011fd7) bg_vkb2_func_pane_cp02

0xe726,	// (0x0001957f) cell_hwr_side_button_pane_g1_ParamLimits

0xe726,	// (0x0001957f) cell_hwr_side_button_pane_g1

0x9257,	// (0x000140b0) status_pane_g4_ParamLimits

0x9257,	// (0x000140b0) status_pane_g4

0x9271,	// (0x000140ca) status_pane_t1

0xbca7,	// (0x00016b00) form2_midp_gauge_slider_cont_pane

0xbcaf,	// (0x00016b08) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbcc1,	// (0x00016b1a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcd3,	// (0x00016b2c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001a94b) form2_midp_gauge_slider_pane_t_ParamLimits

0xbce5,	// (0x00016b3e) form2_midp_slider_pane_ParamLimits

0x6312,	// (0x0001116b) aid_size_cell_func_vkb2_ParamLimits

0x6312,	// (0x0001116b) aid_size_cell_func_vkb2

0xe6c7,	// (0x00019520) slider_pane_g4_ParamLimits

0xe6c7,	// (0x00019520) slider_pane_g4

0x6a12,	// (0x0001186b) form2_midp_gauge_slider_pane_t2_cp01

0x6a20,	// (0x00011879) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6a20,	// (0x00011879) form2_midp_gauge_slider_pane_t3_cp01

0x6a3d,	// (0x00011896) form2_midp_slider_pane_cp01

0x6de7,	// (0x00011c40) navi_smil_pane

0xe75f,	// (0x000195b8) navi_smil_pane_g1

0xe767,	// (0x000195c0) navi_smil_pane_t1

0xe734,	// (0x0001958d) form2_midp_slider_pane_g1

0xe73d,	// (0x00019596) form2_midp_slider_pane_g2

0xe745,	// (0x0001959e) form2_midp_slider_pane_g3

0xe734,	// (0x0001958d) form2_midp_slider_pane_g4

0xe74d,	// (0x000195a6) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001ac81) form2_midp_slider_pane_g

0x6a02,	// (0x0001185b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6a02,	// (0x0001185b) vkb2_area_bottom_space_btn_pane_g4

0x9086,	// (0x00013edf) lc0_navi_pane_ParamLimits

0x9086,	// (0x00013edf) lc0_navi_pane

0x90fc,	// (0x00013f55) lc0_stat_indi_pane_ParamLimits

0x90fc,	// (0x00013f55) lc0_stat_indi_pane

0x9113,	// (0x00013f6c) ls0_title_pane_ParamLimits

0x9113,	// (0x00013f6c) ls0_title_pane

0x7cdf,	// (0x00012b38) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x000189ec) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x000189f8) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x00018a94) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x00018aa7) list_single_uniindi_pane_t1_ParamLimits

0x6a46,	// (0x0001189f) lc0_stat_clock_pane_ParamLimits

0x6a46,	// (0x0001189f) lc0_stat_clock_pane

0xe775,	// (0x000195ce) lc0_stat_indi_pane_g1_ParamLimits

0xe775,	// (0x000195ce) lc0_stat_indi_pane_g1

0xe782,	// (0x000195db) lc0_stat_indi_pane_g2_ParamLimits

0xe782,	// (0x000195db) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001ac8c) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001ac8c) lc0_stat_indi_pane_g

0x6a53,	// (0x000118ac) lc0_uni_indicator_pane_ParamLimits

0x6a53,	// (0x000118ac) lc0_uni_indicator_pane

0xe78f,	// (0x000195e8) ls0_title_pane_g1_ParamLimits

0xe78f,	// (0x000195e8) ls0_title_pane_g1

0xe7a3,	// (0x000195fc) ls0_title_pane_t1_ParamLimits

0xe7a3,	// (0x000195fc) ls0_title_pane_t1

0x6a60,	// (0x000118b9) lc0_uni_indicator_pane_g1_ParamLimits

0x6a60,	// (0x000118b9) lc0_uni_indicator_pane_g1

0xe7d9,	// (0x00019632) lc0_stat_clock_pane_t1

0x4a5c,	// (0x0000f8b5) main_ai5_pane

0xe7e7,	// (0x00019640) ai5_sk_pane_ParamLimits

0xe7e7,	// (0x00019640) ai5_sk_pane

0xe7f4,	// (0x0001964d) cell_ai5_widget_pane_ParamLimits

0xe7f4,	// (0x0001964d) cell_ai5_widget_pane

0xe8aa,	// (0x00019703) aid_size_cell_widget_grid

0xe8c0,	// (0x00019719) bg_ai5_widget_pane_ParamLimits

0xe8c0,	// (0x00019719) bg_ai5_widget_pane

0xe934,	// (0x0001978d) cell_ai5_widget_pane_g2

0xe944,	// (0x0001979d) cell_ai5_widget_pane_g3

0xe95b,	// (0x000197b4) cell_ai5_widget_pane_g4

0xe967,	// (0x000197c0) cell_ai5_widget_pane_g5

0xe973,	// (0x000197cc) cell_ai5_widget_pane_g6

0xe97f,	// (0x000197d8) cell_ai5_widget_pane_g7

0xe9c7,	// (0x00019820) cell_ai5_widget_pane_t1_ParamLimits

0xe9c7,	// (0x00019820) cell_ai5_widget_pane_t1

0xe9e4,	// (0x0001983d) cell_ai5_widget_pane_t2_ParamLimits

0xe9e4,	// (0x0001983d) cell_ai5_widget_pane_t2

0xe9fc,	// (0x00019855) cell_ai5_widget_pane_t3_ParamLimits

0xe9fc,	// (0x00019855) cell_ai5_widget_pane_t3

0xea14,	// (0x0001986d) cell_ai5_widget_pane_t4_ParamLimits

0xea14,	// (0x0001986d) cell_ai5_widget_pane_t4

0xea31,	// (0x0001988a) cell_ai5_widget_pane_t5_ParamLimits

0xea31,	// (0x0001988a) cell_ai5_widget_pane_t5

0xea50,	// (0x000198a9) cell_ai5_widget_pane_t6_ParamLimits

0xea50,	// (0x000198a9) cell_ai5_widget_pane_t6

0xea62,	// (0x000198bb) cell_ai5_widget_pane_t7_ParamLimits

0xea62,	// (0x000198bb) cell_ai5_widget_pane_t7

0xea7b,	// (0x000198d4) cell_ai5_widget_pane_t8_ParamLimits

0xea7b,	// (0x000198d4) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001aca6) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001aca6) cell_ai5_widget_pane_t

0xeacf,	// (0x00019928) grid_ai5_widget_pane

0x7cdf,	// (0x00012b38) highlight_cell_ai5_widget_pane_ParamLimits

0x7cdf,	// (0x00012b38) highlight_cell_ai5_widget_pane

0xeae6,	// (0x0001993f) ai5_sk_left_pane

0xeaf0,	// (0x00019949) ai5_sk_middle_pane

0xeafa,	// (0x00019953) ai5_sk_right_pane

0xeb04,	// (0x0001995d) bg_ai5_widget_pane_g1_ParamLimits

0xeb04,	// (0x0001995d) bg_ai5_widget_pane_g1

0xeb10,	// (0x00019969) bg_ai5_widget_pane_g2_ParamLimits

0xeb10,	// (0x00019969) bg_ai5_widget_pane_g2

0xeb1c,	// (0x00019975) bg_ai5_widget_pane_g3_ParamLimits

0xeb1c,	// (0x00019975) bg_ai5_widget_pane_g3

0xeb28,	// (0x00019981) bg_ai5_widget_pane_g4_ParamLimits

0xeb28,	// (0x00019981) bg_ai5_widget_pane_g4

0xeb34,	// (0x0001998d) bg_ai5_widget_pane_g5_ParamLimits

0xeb34,	// (0x0001998d) bg_ai5_widget_pane_g5

0xeb40,	// (0x00019999) bg_ai5_widget_pane_g6_ParamLimits

0xeb40,	// (0x00019999) bg_ai5_widget_pane_g6

0xeb4c,	// (0x000199a5) bg_ai5_widget_pane_g7_ParamLimits

0xeb4c,	// (0x000199a5) bg_ai5_widget_pane_g7

0xeb58,	// (0x000199b1) bg_ai5_widget_pane_g8_ParamLimits

0xeb58,	// (0x000199b1) bg_ai5_widget_pane_g8

0xeb64,	// (0x000199bd) bg_ai5_widget_pane_g9_ParamLimits

0xeb64,	// (0x000199bd) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001acbb) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001acbb) bg_ai5_widget_pane_g

0xeb96,	// (0x000199ef) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb96,	// (0x000199ef) cell_shortcut_ai5_widget_pane

0x8b7e,	// (0x000139d7) bg_cell_shortcut_ai5_widget_pane

0xeba7,	// (0x00019a00) cell_grid_ai5_widget_pane_g1

0x8b7e,	// (0x000139d7) highlight_cell_shortcut_ai5_widget_pane

0x940c,	// (0x00014265) ai5_sk_left_pane_g1

0xebb0,	// (0x00019a09) ai5_sk_left_pane_g2

0xebb8,	// (0x00019a11) ai5_sk_left_pane_g3

0xebc0,	// (0x00019a19) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001acce) ai5_sk_left_pane_g

0xebc8,	// (0x00019a21) ai5_sk_left_pane_t1

0x9414,	// (0x0001426d) ai5_sk_right_pane_g1

0xebd6,	// (0x00019a2f) ai5_sk_right_pane_g2

0xebde,	// (0x00019a37) ai5_sk_right_pane_g3

0xebe6,	// (0x00019a3f) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001acd7) ai5_sk_right_pane_g

0xebee,	// (0x00019a47) ai5_sk_right_pane_t1

0x9414,	// (0x0001426d) ai5_sk_middle_pane_g1

0x940c,	// (0x00014265) ai5_sk_middle_pane_g2

0x942c,	// (0x00014285) ai5_sk_middle_pane_g3

0xebde,	// (0x00019a37) ai5_sk_middle_pane_g4

0xebb8,	// (0x00019a11) ai5_sk_middle_pane_g5

0xebfc,	// (0x00019a55) ai5_sk_middle_pane_g6

0xec04,	// (0x00019a5d) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001ace0) ai5_sk_middle_pane_g

0x8f12,	// (0x00013d6b) aid_touch_area_size_lc0_ParamLimits

0x8f12,	// (0x00013d6b) aid_touch_area_size_lc0

0x608a,	// (0x00010ee3) cell_hwr_candidate_pane_t1_ParamLimits

0x8f2e,	// (0x00013d87) aid_touch_navi_pane

0x9201,	// (0x0001405a) status_dt_navi_pane_ParamLimits

0x9201,	// (0x0001405a) status_dt_navi_pane

0x920e,	// (0x00014067) status_dt_sta_pane_ParamLimits

0x920e,	// (0x00014067) status_dt_sta_pane

0xec0c,	// (0x00019a65) dt_sta_controll_pane

0xec19,	// (0x00019a72) dt_sta_indi_pane

0xec2a,	// (0x00019a83) dt_sta_title_pane

0x717e,	// (0x00011fd7) bg_dt_sta_indi_pane_ParamLimits

0x717e,	// (0x00011fd7) bg_dt_sta_indi_pane

0xec3d,	// (0x00019a96) dt_sta_battery_pane

0xec45,	// (0x00019a9e) dt_sta_indi_pane_g1

0xec4e,	// (0x00019aa7) dt_sta_indi_pane_g2

0xec57,	// (0x00019ab0) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001acef) dt_sta_indi_pane_g

0xec60,	// (0x00019ab9) dt_sta_signal_pane

0x7cdf,	// (0x00012b38) bg_dt_sta_title_pane_ParamLimits

0x7cdf,	// (0x00012b38) bg_dt_sta_title_pane

0xec69,	// (0x00019ac2) dt_sta_title_pane_g1

0xec71,	// (0x00019aca) dt_sta_title_pane_t1_ParamLimits

0xec71,	// (0x00019aca) dt_sta_title_pane_t1

0x6de7,	// (0x00011c40) bg_dt_sta_control_pane

0xec86,	// (0x00019adf) dt_sta_controll_pane_g1

0xec8f,	// (0x00019ae8) bg_dt_sta_title_pane_g1

0xec98,	// (0x00019af1) bg_dt_sta_title_pane_g2

0xeca1,	// (0x00019afa) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001acf6) bg_dt_sta_title_pane_g

0xbf6d,	// (0x00016dc6) bg_dt_sta_indi_pane_g1

0xecaa,	// (0x00019b03) dt_sta_signal_pane_g1

0xecb2,	// (0x00019b0b) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001acfd) dt_sta_signal_pane_g

0xecba,	// (0x00019b13) dt_sta_battery_pane_g1

0xecc3,	// (0x00019b1c) dt_sta_battery_pane_t1

0xbf6d,	// (0x00016dc6) bg_dt_sta_control_pane_g1

0x85ee,	// (0x00013447) fep_china_uni_eep_pane

0x85f6,	// (0x0001344f) fep_china_uni_entry_pane_ParamLimits

0x8606,	// (0x0001345f) popup_fep_china_uni_window_g1_ParamLimits

0x8616,	// (0x0001346f) popup_fep_china_uni_window_g2_ParamLimits

0x8616,	// (0x0001346f) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a571) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a571) popup_fep_china_uni_window_g

0xecd2,	// (0x00019b2b) fep_china_uni_eep_pane_g1

0xecda,	// (0x00019b33) fep_china_uni_eep_pane_t1

0xe756,	// (0x000195af) aid_touch_area_size_smil_player

0x907e,	// (0x00013ed7) lc0_clock_pane

0x9265,	// (0x000140be) status_pane_g5_ParamLimits

0x9265,	// (0x000140be) status_pane_g5

0x54e4,	// (0x0001033d) popup_keymap_window

0x9223,	// (0x0001407c) status_icon_pane

0xe944,	// (0x0001979d) cell_ai5_widget_pane_g3_ParamLimits

0xe95b,	// (0x000197b4) cell_ai5_widget_pane_g4_ParamLimits

0xe967,	// (0x000197c0) cell_ai5_widget_pane_g5_ParamLimits

0xe98b,	// (0x000197e4) cell_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x000197e4) cell_ai5_widget_pane_g8

0xe99f,	// (0x000197f8) cell_ai5_widget_pane_g9_ParamLimits

0xe99f,	// (0x000197f8) cell_ai5_widget_pane_g9

0xe9b3,	// (0x0001980c) cell_ai5_widget_pane_g10_ParamLimits

0xe9b3,	// (0x0001980c) cell_ai5_widget_pane_g10

0xece9,	// (0x00019b42) status_icon_pane_g1

0x6de7,	// (0x00011c40) bg_popup_sub_pane_cp13

0xecf1,	// (0x00019b4a) popup_keymap_window_t1

0x8e47,	// (0x00013ca0) control_pane_g6_ParamLimits

0x8e47,	// (0x00013ca0) control_pane_g6

0x8e54,	// (0x00013cad) control_pane_g7_ParamLimits

0x8e54,	// (0x00013cad) control_pane_g7

0x8e61,	// (0x00013cba) control_pane_g8_ParamLimits

0x8e61,	// (0x00013cba) control_pane_g8

0xec0c,	// (0x00019a65) dt_sta_controll_pane_ParamLimits

0xec19,	// (0x00019a72) dt_sta_indi_pane_ParamLimits

0xec2a,	// (0x00019a83) dt_sta_title_pane_ParamLimits

0x769c,	// (0x000124f5) aid_size_touch_scroll_bar_cale

0x4b35,	// (0x0000f98e) popup_discreet_window_ParamLimits

0x4b35,	// (0x0000f98e) popup_discreet_window

0x4bbd,	// (0x0000fa16) popup_sk_window

0x9b75,	// (0x000149ce) bg_popup_sub_pane_cp28_ParamLimits

0x9b75,	// (0x000149ce) bg_popup_sub_pane_cp28

0xecff,	// (0x00019b58) popup_discreet_window_g1_ParamLimits

0xecff,	// (0x00019b58) popup_discreet_window_g1

0xed1f,	// (0x00019b78) popup_discreet_window_t1_ParamLimits

0xed1f,	// (0x00019b78) popup_discreet_window_t1

0xed3d,	// (0x00019b96) popup_discreet_window_t2_ParamLimits

0xed3d,	// (0x00019b96) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001ad02) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001ad02) popup_discreet_window_t

0x6a74,	// (0x000118cd) popup_sk_window_g1

0x6a7e,	// (0x000118d7) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001ad09) popup_sk_window_g

0x6a88,	// (0x000118e1) popup_sk_window_t1

0x6a96,	// (0x000118ef) popup_sk_window_t1_copy1

0xe934,	// (0x0001978d) cell_ai5_widget_pane_g2_ParamLimits

0xea8d,	// (0x000198e6) cell_ai5_widget_pane_t9_ParamLimits

0xea8d,	// (0x000198e6) cell_ai5_widget_pane_t9

0x6de7,	// (0x00011c40) main_fep_fshwr2_pane

0x6aa4,	// (0x000118fd) aid_fshwr2_btn_pane

0x6ab0,	// (0x00011909) aid_fshwr2_syb_pane

0x6abc,	// (0x00011915) aid_fshwr2_txt_pane

0x6ac8,	// (0x00011921) fshwr2_func_candi_pane

0x6add,	// (0x00011936) fshwr2_hwr_syb_pane

0x6aed,	// (0x00011946) fshwr2_icf_pane

0x4a5c,	// (0x0000f8b5) fshwr2_icf_bg_pane

0x6b16,	// (0x0001196f) fshwr2_icf_pane_t1_ParamLimits

0x6b16,	// (0x0001196f) fshwr2_icf_pane_t1

0x84dc,	// (0x00013335) fshwr2_func_candi_pane_g1

0xed8f,	// (0x00019be8) fshwr2_func_candi_row_pane_ParamLimits

0xed8f,	// (0x00019be8) fshwr2_func_candi_row_pane

0x6b2e,	// (0x00011987) cell_fshwr2_syb_pane_ParamLimits

0x6b2e,	// (0x00011987) cell_fshwr2_syb_pane

0x605b,	// (0x00010eb4) fshwr2_hwr_syb_pane_g1_ParamLimits

0x605b,	// (0x00010eb4) fshwr2_hwr_syb_pane_g1

0x4a5c,	// (0x0000f8b5) bg_popup_call_pane_cp01

0x6b44,	// (0x0001199d) fshwr2_func_candi_cell_pane_ParamLimits

0x6b44,	// (0x0001199d) fshwr2_func_candi_cell_pane

0xed9f,	// (0x00019bf8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed9f,	// (0x00019bf8) fshwr2_func_candi_cell_bg_pane

0x6b8d,	// (0x000119e6) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6b8d,	// (0x000119e6) fshwr2_func_candi_cell_pane_g1

0x6bb5,	// (0x00011a0e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6bb5,	// (0x00011a0e) fshwr2_func_candi_cell_pane_t1

0x4a5c,	// (0x0000f8b5) bg_button_pane_cp08

0xedab,	// (0x00019c04) cell_fshwr2_syb_bg_pane

0x6bc8,	// (0x00011a21) cell_fshwr2_syb_bg_pane_g1

0x6bd0,	// (0x00011a29) cell_fshwr2_syb_bg_pane_t1

0x7cdf,	// (0x00012b38) main_tmo_pane

0xa690,	// (0x000154e9) uni_indicator_pane_g1_ParamLimits

0xa6a6,	// (0x000154ff) uni_indicator_pane_g2_ParamLimits

0xa6bc,	// (0x00015515) uni_indicator_pane_g3_ParamLimits

0xa6d0,	// (0x00015529) uni_indicator_pane_g4_ParamLimits

0xa6d0,	// (0x00015529) uni_indicator_pane_g4

0xa6e4,	// (0x0001553d) uni_indicator_pane_g5_ParamLimits

0xa6e4,	// (0x0001553d) uni_indicator_pane_g5

0xa6e4,	// (0x0001553d) uni_indicator_pane_g6_ParamLimits

0xa6e4,	// (0x0001553d) uni_indicator_pane_g6

0xf91c,	// (0x0001a775) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x000185e3) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x000185e3) popup_tmo_note_window

0x62f4,	// (0x0001114d) fshwr2_bg_pane

0x6ba6,	// (0x000119ff) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6ba6,	// (0x000119ff) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001ad0e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001ad0e) fshwr2_func_candi_cell_pane_g

0x6043,	// (0x00010e9c) bg_popup_window_pane_cp01

0x6bdf,	// (0x00011a38) bg_popup_window_pane_g1_cp01

0xedb3,	// (0x00019c0c) bg_popup_window_pane_cp22_ParamLimits

0xedb3,	// (0x00019c0c) bg_popup_window_pane_cp22

0xedc1,	// (0x00019c1a) listscroll_tmo_link_pane_ParamLimits

0xedc1,	// (0x00019c1a) listscroll_tmo_link_pane

0xee01,	// (0x00019c5a) popup_tmo_note_window_g1_ParamLimits

0xee01,	// (0x00019c5a) popup_tmo_note_window_g1

0xee0e,	// (0x00019c67) tmo_note_info_pane_ParamLimits

0xee0e,	// (0x00019c67) tmo_note_info_pane

0xee28,	// (0x00019c81) list_tmo_note_info_pane_g1_ParamLimits

0xee28,	// (0x00019c81) list_tmo_note_info_pane_g1

0xee3f,	// (0x00019c98) list_tmo_note_info_pane_g2_ParamLimits

0xee3f,	// (0x00019c98) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001ad13) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001ad13) list_tmo_note_info_pane_g

0xee5b,	// (0x00019cb4) list_tmo_note_info_text_pane_ParamLimits

0xee5b,	// (0x00019cb4) list_tmo_note_info_text_pane

0xeedc,	// (0x00019d35) list_tmo_link_pane

0xeee9,	// (0x00019d42) scroll_pane_cp20

0xeef6,	// (0x00019d4f) list_single_tmo_link_pane_ParamLimits

0xeef6,	// (0x00019d4f) list_single_tmo_link_pane

0xef06,	// (0x00019d5f) list_single_tmo_link_pane_t1

0xef14,	// (0x00019d6d) list_tmo_note_info_text_pane_t1_ParamLimits

0xef14,	// (0x00019d6d) list_tmo_note_info_text_pane_t1

0x7f13,	// (0x00012d6c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f13,	// (0x00012d6c) aid_size_touch_scroll_bar_cp01

0x7d88,	// (0x00012be1) aid_size_touch_slider_marker

0x4ba5,	// (0x0000f9fe) popup_settings_window_ParamLimits

0x4ba5,	// (0x0000f9fe) popup_settings_window

0x8ede,	// (0x00013d37) popup_candi_list_indi_window

0x8f2e,	// (0x00013d87) aid_touch_navi_pane_ParamLimits

0x624f,	// (0x000110a8) rs_clock_indi_pane

0x6258,	// (0x000110b1) sctrl_sk_bottom_pane_ParamLimits

0x6269,	// (0x000110c2) sctrl_sk_top_pane_ParamLimits

0x636c,	// (0x000111c5) popup_fep_tooltip_window

0xe8aa,	// (0x00019703) aid_size_cell_widget_grid_ParamLimits

0xe91f,	// (0x00019778) cell_ai5_widget_pane_g1_ParamLimits

0xe91f,	// (0x00019778) cell_ai5_widget_pane_g1

0xe973,	// (0x000197cc) cell_ai5_widget_pane_g6_ParamLimits

0xe97f,	// (0x000197d8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001ac91) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001ac91) cell_ai5_widget_pane_g

0xeab1,	// (0x0001990a) cell_ai5_widget_pane_t10_ParamLimits

0xeab1,	// (0x0001990a) cell_ai5_widget_pane_t10

0xeacf,	// (0x00019928) grid_ai5_widget_pane_ParamLimits

0xeb70,	// (0x000199c9) cell_contacts_ai5_widget_pane_ParamLimits

0xeb70,	// (0x000199c9) cell_contacts_ai5_widget_pane

0xed52,	// (0x00019bab) popup_discreet_window_t3_ParamLimits

0xed52,	// (0x00019bab) popup_discreet_window_t3

0x6b02,	// (0x0001195b) popup_fshwr2_char_preview_window_ParamLimits

0x6b02,	// (0x0001195b) popup_fshwr2_char_preview_window

0xee79,	// (0x00019cd2) tmo_note_info_pane_t1

0xee8e,	// (0x00019ce7) tmo_note_info_pane_t2

0xeea3,	// (0x00019cfc) tmo_note_info_pane_t3

0xeeb8,	// (0x00019d11) tmo_note_info_pane_t4

0xeeca,	// (0x00019d23) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001ad18) tmo_note_info_pane_t

0xeedc,	// (0x00019d35) list_tmo_link_pane_ParamLimits

0xeee9,	// (0x00019d42) scroll_pane_cp20_ParamLimits

0x4a5c,	// (0x0000f8b5) bg_popup_fep_char_preview_window_cp01

0xef2d,	// (0x00019d86) popup_fshwr2_char_preview_window_t1

0xef3b,	// (0x00019d94) popup_candi_list_indi_window_g1

0xef44,	// (0x00019d9d) bg_cell_contacts_ai5_widget_pane

0xef50,	// (0x00019da9) cell_contacts_ai5_widget_pane_g1

0xc7b0,	// (0x00017609) cell_contacts_ai5_widget_pane_g2

0xef65,	// (0x00019dbe) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001ad23) cell_contacts_ai5_widget_pane_g

0xef71,	// (0x00019dca) cell_contacts_ai5_widget_pane_t1

0x7cdf,	// (0x00012b38) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefe8,	// (0x00019e41) settings_container_pane

0x8b7e,	// (0x000139d7) listscroll_set_pane_copy1

0xb34e,	// (0x000161a7) scroll_pane_cp121_copy1

0xeff4,	// (0x00019e4d) set_content_pane_copy1

0xeffc,	// (0x00019e55) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x00019e55) aid_height_set_list_copy1

0xa904,	// (0x0001575d) aid_size_parent_copy1_ParamLimits

0xa904,	// (0x0001575d) aid_size_parent_copy1

0xf008,	// (0x00019e61) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00019e61) button_value_adjust_pane_cp6_copy1

0x8ec4,	// (0x00013d1d) list_highlight_pane_cp2_copy1_ParamLimits

0x8ec4,	// (0x00013d1d) list_highlight_pane_cp2_copy1

0xf01c,	// (0x00019e75) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x00019e75) list_set_pane_copy1

0xef83,	// (0x00019ddc) main_pane_set_t1_copy1_ParamLimits

0xef83,	// (0x00019ddc) main_pane_set_t1_copy1

0xefbd,	// (0x00019e16) main_pane_set_t2_copy1_ParamLimits

0xefbd,	// (0x00019e16) main_pane_set_t2_copy1

0xf0c9,	// (0x00019f22) main_pane_set_t3_copy1

0xf0d7,	// (0x00019f30) main_pane_set_t4_copy1

0xefdc,	// (0x00019e35) set_content_pane_g1_copy1_ParamLimits

0xefdc,	// (0x00019e35) set_content_pane_g1_copy1

0xf0e5,	// (0x00019f3e) setting_code_pane_copy1

0xf0ed,	// (0x00019f46) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x00019f46) setting_slider_pane_copy1

0xf0ed,	// (0x00019f46) setting_text_pane_copy1

0xf0ed,	// (0x00019f46) setting_volume_pane_copy1

0xf0e5,	// (0x00019f3e) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00019f4e) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00019f4e) settings_code_pane_cp_copy1

0x6be8,	// (0x00011a41) volume_set_pane_copy1

0xf109,	// (0x00019f62) volume_set_pane_g10_copy1

0xf111,	// (0x00019f6a) volume_set_pane_g1_copy1

0xf119,	// (0x00019f72) volume_set_pane_g2_copy1

0xf121,	// (0x00019f7a) volume_set_pane_g3_copy1

0xf129,	// (0x00019f82) volume_set_pane_g4_copy1

0xf131,	// (0x00019f8a) volume_set_pane_g5_copy1

0xf139,	// (0x00019f92) volume_set_pane_g6_copy1

0xf141,	// (0x00019f9a) volume_set_pane_g7_copy1

0xf149,	// (0x00019fa2) volume_set_pane_g8_copy1

0xf151,	// (0x00019faa) volume_set_pane_g9_copy1

0x6edb,	// (0x00011d34) bg_set_opt_pane_cp_copy1_ParamLimits

0x6edb,	// (0x00011d34) bg_set_opt_pane_cp_copy1

0x6bf0,	// (0x00011a49) setting_slider_pane_t1_copy1_ParamLimits

0x6bf0,	// (0x00011a49) setting_slider_pane_t1_copy1

0x6c0e,	// (0x00011a67) setting_slider_pane_t2_copy1_ParamLimits

0x6c0e,	// (0x00011a67) setting_slider_pane_t2_copy1

0x6c28,	// (0x00011a81) setting_slider_pane_t3_copy1_ParamLimits

0x6c28,	// (0x00011a81) setting_slider_pane_t3_copy1

0x6c40,	// (0x00011a99) slider_set_pane_copy1_ParamLimits

0x6c40,	// (0x00011a99) slider_set_pane_copy1

0x7e08,	// (0x00012c61) set_opt_bg_pane_g1_copy2

0x7e10,	// (0x00012c69) set_opt_bg_pane_g2_copy2

0xf159,	// (0x00019fb2) set_opt_bg_pane_g3_copy2

0x7e20,	// (0x00012c79) set_opt_bg_pane_g4_copy2

0x7e28,	// (0x00012c81) set_opt_bg_pane_g5_copy2

0x7e30,	// (0x00012c89) set_opt_bg_pane_g6_copy2

0xf163,	// (0x00019fbc) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x00019fc4) set_opt_bg_pane_g8_copy2

0xf175,	// (0x00019fce) set_opt_bg_pane_g9_copy2

0x6c56,	// (0x00011aaf) aid_size_touch_slider_mark_copy1_ParamLimits

0x6c56,	// (0x00011aaf) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x00019fd8) slider_set_pane_g1_copy1

0x6c6a,	// (0x00011ac3) slider_set_pane_g2_copy1

0x5c84,	// (0x00010add) slider_set_pane_g3_copy1_ParamLimits

0x5c84,	// (0x00010add) slider_set_pane_g3_copy1

0x5c98,	// (0x00010af1) slider_set_pane_g4_copy1_ParamLimits

0x5c98,	// (0x00010af1) slider_set_pane_g4_copy1

0x5cb0,	// (0x00010b09) slider_set_pane_g5_copy1_ParamLimits

0x5cb0,	// (0x00010b09) slider_set_pane_g5_copy1

0x5c84,	// (0x00010add) slider_set_pane_g6_copy1_ParamLimits

0x5c84,	// (0x00010add) slider_set_pane_g6_copy1

0x6c72,	// (0x00011acb) slider_set_pane_g7_copy1_ParamLimits

0x6c72,	// (0x00011acb) slider_set_pane_g7_copy1

0x6dfb,	// (0x00011c54) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x00019fe1) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x00019fea) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x00019ffa) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x0001a00a) slider_set_pane_cp_copy1

0xf1c1,	// (0x0001a01a) input_focus_pane_cp1_copy1

0xf1ca,	// (0x0001a023) list_set_text_pane_copy1

0xf1d2,	// (0x0001a02b) setting_text_pane_g1_copy1

0x6f34,	// (0x00011d8d) set_text_pane_t1_copy1

0xf1c1,	// (0x0001a01a) input_focus_pane_cp2_copy1

0xf1d2,	// (0x0001a02b) setting_code_pane_g1_copy1

0xf1db,	// (0x0001a034) setting_code_pane_t1_copy1

0xf1e9,	// (0x0001a042) list_set_graphic_pane_copy1

0x6dfb,	// (0x00011c54) bg_set_opt_pane_cp4_copy1

0x8879,	// (0x000136d2) list_set_graphic_pane_g1_copy1_ParamLimits

0x8879,	// (0x000136d2) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x0001a054) list_set_graphic_pane_g2_copy1

0x8891,	// (0x000136ea) list_set_graphic_pane_t1_copy1_ParamLimits

0x8891,	// (0x000136ea) list_set_graphic_pane_t1_copy1

0xbf6d,	// (0x00016dc6) rs_clock_indi_pane_g1

0xf203,	// (0x0001a05c) rs_clock_indi_pane_t1

0xf211,	// (0x0001a06a) rs_indi_pane

0xf219,	// (0x0001a072) rs_indi_pane_g1

0xf222,	// (0x0001a07b) rs_indi_pane_g2

0xf22b,	// (0x0001a084) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001ad2a) rs_indi_pane_g

0x8b7e,	// (0x000139d7) bg_popup_preview_window_pane_cp03

0xf234,	// (0x0001a08d) popup_fep_tooltip_window_t1

0xcde5,	// (0x00017c3e) popup_note2_window_g2_ParamLimits

0xcde5,	// (0x00017c3e) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001aac3) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001aac3) popup_note2_window_g

0xd3c3,	// (0x0001821c) bg_popup_sub_pane_cp11_ParamLimits

0xd3d0,	// (0x00018229) cell_ai3_links_pane_g1_ParamLimits

0xd3e7,	// (0x00018240) cell_ai3_links_pane_t1

0x6f34,	// (0x00011d8d) set_text_pane_t1_copy1_ParamLimits

0x8a8f,	// (0x000138e8) cell_graphic_popup_pane_cp2_ParamLimits

0x8a8f,	// (0x000138e8) cell_graphic_popup_pane_cp2

0xf242,	// (0x0001a09b) cell_graphic_popup_pane_g1_cp2

0x74af,	// (0x00012308) cell_graphic_popup_pane_g2_cp2

0xf24a,	// (0x0001a0a3) cell_graphic_popup_pane_g3_cp2

0xf252,	// (0x0001a0ab) cell_graphic_popup_pane_t2_cp2

0x74c0,	// (0x00012319) grid_highlight_pane_cp3_cp2

0x81f9,	// (0x00013052) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7cdf,	// (0x00012b38) main_tmo_pane_ParamLimits

0xd77e,	// (0x000185d7) popup_tmo_big_image_note_window

0xe90e,	// (0x00019767) cell_ai5_widget_list_pane

0xe916,	// (0x0001976f) cell_ai5_widget_lrg_icon_pane

0xee79,	// (0x00019cd2) tmo_note_info_pane_t1_ParamLimits

0xee8e,	// (0x00019ce7) tmo_note_info_pane_t2_ParamLimits

0xeea3,	// (0x00019cfc) tmo_note_info_pane_t3_ParamLimits

0xeeb8,	// (0x00019d11) tmo_note_info_pane_t4_ParamLimits

0xeeca,	// (0x00019d23) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001ad18) tmo_note_info_pane_t_ParamLimits

0xefe8,	// (0x00019e41) settings_container_pane_ParamLimits

0xf1b9,	// (0x0001a012) indicator_popup_pane_cp5

0xf1b9,	// (0x0001a012) indicator_popup_pane_cp6

0xf1e9,	// (0x0001a042) list_set_graphic_pane_copy1_ParamLimits

0x6de7,	// (0x00011c40) bg_popup_window_pane_cp23

0xf260,	// (0x0001a0b9) popup_tmo_big_image_note_window_g1

0xf26a,	// (0x0001a0c3) popup_tmo_big_image_note_window_t1

0xf27a,	// (0x0001a0d3) popup_tmo_big_image_note_window_t2

0xf28a,	// (0x0001a0e3) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001ad31) popup_tmo_big_image_note_window_t

0xbf6d,	// (0x00016dc6) cell_ai5_widget_lrg_icon_pane_g1

0xf29a,	// (0x0001a0f3) cell_ai5_widget_lrg_icon_pane_t1

0xf2a8,	// (0x0001a101) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a8,	// (0x0001a101) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x0001a118) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x0001a118) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x0001a125) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x0001a125) cell_ai5_widget_list_row_pane_t1

0xf2fd,	// (0x0001a156) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fd,	// (0x0001a156) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001ad38) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001ad38) cell_ai5_widget_list_row_pane_t

0x4a5c,	// (0x0000f8b5) main_fep_vtchi_ss_pane

0xf341,	// (0x0001a19a) popup_fep_char_pre_window

0xf349,	// (0x0001a1a2) popup_fep_ituss_window

0xf36a,	// (0x0001a1c3) popup_fep_vkbss_window

0xf389,	// (0x0001a1e2) grid_vkbss_keypad_pane_ParamLimits

0xf389,	// (0x0001a1e2) grid_vkbss_keypad_pane

0xf399,	// (0x0001a1f2) ituss_keypad_pane

0x6c94,	// (0x00011aed) aid_vkbss_key_offset_ParamLimits

0x6c94,	// (0x00011aed) aid_vkbss_key_offset

0x6ca0,	// (0x00011af9) cell_vkbss_key_pane_ParamLimits

0x6ca0,	// (0x00011af9) cell_vkbss_key_pane

0xf3a8,	// (0x0001a201) bg_cell_vkbss_key_g1_ParamLimits

0xf3a8,	// (0x0001a201) bg_cell_vkbss_key_g1

0xf3b4,	// (0x0001a20d) cell_vkbss_key_3p_pane_ParamLimits

0xf3b4,	// (0x0001a20d) cell_vkbss_key_3p_pane

0xf3ce,	// (0x0001a227) cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0001a227) cell_vkbss_key_g1

0xf3e8,	// (0x0001a241) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0001a241) cell_vkbss_key_t1

0x6cb6,	// (0x00011b0f) cell_ituss_key_pane_ParamLimits

0x6cb6,	// (0x00011b0f) cell_ituss_key_pane

0xf413,	// (0x0001a26c) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0001a26c) bg_cell_ituss_key_g1

0xf41f,	// (0x0001a278) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0001a278) cell_ituss_key_pane_g1

0x6cc7,	// (0x00011b20) cell_ituss_key_pane_g2_ParamLimits

0x6cc7,	// (0x00011b20) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001ad3f) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001ad3f) cell_ituss_key_pane_g

0x6cf3,	// (0x00011b4c) cell_ituss_key_t1_ParamLimits

0x6cf3,	// (0x00011b4c) cell_ituss_key_t1

0x6d2d,	// (0x00011b86) cell_ituss_key_t2_ParamLimits

0x6d2d,	// (0x00011b86) cell_ituss_key_t2

0x6d5e,	// (0x00011bb7) cell_ituss_key_t3_ParamLimits

0x6d5e,	// (0x00011bb7) cell_ituss_key_t3

0x6d2d,	// (0x00011b86) cell_ituss_key_t4_ParamLimits

0x6d2d,	// (0x00011b86) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001ad46) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001ad46) cell_ituss_key_t

0xf44b,	// (0x0001a2a4) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0001a2ac) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0001a2b4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001ad51) cell_vkbss_key_3p_pane_g

0x4a5c,	// (0x0000f8b5) bg_popup_fep_char_preview_window_cp02

0x6da1,	// (0x00011bfa) popup_fep_char_pre_window_t1

0xe8a0,	// (0x000196f9) main_ai5_sk_pane

0xef44,	// (0x00019d9d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef50,	// (0x00019da9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7b0,	// (0x00017609) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef65,	// (0x00019dbe) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001ad23) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef71,	// (0x00019dca) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7cdf,	// (0x00012b38) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0001a2bc) main_ai5_sk_pane_g1

0x99ae,	// (0x00014807) popup_query_code_window_g1

0xf35f,	// (0x0001a1b8) popup_fep_vkb_icf_pane

0xf373,	// (0x0001a1cc) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0001a2c5) bg_icf_pane

0xf478,	// (0x0001a2d1) list_vkb_icf_pane

0xf487,	// (0x0001a2e0) bg_icf_pane_cp01

0xf49a,	// (0x0001a2f3) vtchi_icf_list_pane

0xf4aa,	// (0x0001a303) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0001a303) list_vkb_icf_pane_t1

0xf4c0,	// (0x0001a319) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0001a319) vtchi_icf_list_pane_t1

0xf349,	// (0x0001a1a2) popup_fep_ituss_window_ParamLimits

0xf373,	// (0x0001a1cc) popup_fep_vtchi_icf_pane_ParamLimits

0xf399,	// (0x0001a1f2) ituss_keypad_pane_ParamLimits

0x6c88,	// (0x00011ae1) ituss_sks_pane

0xf46c,	// (0x0001a2c5) bg_icf_pane_ParamLimits

0xf325,	// (0x0001a17e) icf_edit_indi_pane_ParamLimits

0xf325,	// (0x0001a17e) icf_edit_indi_pane

0xf478,	// (0x0001a2d1) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0001a2e0) bg_icf_pane_cp01_ParamLimits

0xf334,	// (0x0001a18d) icf_edit_indi_pane_cp01_ParamLimits

0xf334,	// (0x0001a18d) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0001a2fb) vtchi_query_pane

0xc1eb,	// (0x00017044) icf_edit_indi_pane_g1_ParamLimits

0xc1eb,	// (0x00017044) icf_edit_indi_pane_g1

0xf531,	// (0x0001a38a) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001a38a) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001ad69) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001ad69) icf_edit_indi_pane_g

0xf540,	// (0x0001a399) icf_edit_indi_pane_t1

0xf4da,	// (0x0001a333) bg_input_focus_pane_cp042

0x7693,	// (0x000124ec) vtchi_button_pane

0xf4e3,	// (0x0001a33c) vtchi_query_pane_t1

0xf4f1,	// (0x0001a34a) vtchi_query_pane_t2

0xf4ff,	// (0x0001a358) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001ad58) vtchi_query_pane_t

0x4a5c,	// (0x0000f8b5) bg_button_pane_cp13

0xf50d,	// (0x0001a366) vtchi_button_pane_g1

0x6db0,	// (0x00011c09) ituss_sks_pane_g1

0x6dbb,	// (0x00011c14) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001ad5f) ituss_sks_pane_g

0xf515,	// (0x0001a36e) ituss_sks_pane_t1

0xf523,	// (0x0001a37c) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001ad64) ituss_sks_pane_t

0xb98d,	// (0x000167e6) indicator_nsta_pane_cp_g1

0xb996,	// (0x000167ef) indicator_nsta_pane_cp_g2

0xb99e,	// (0x000167f7) indicator_nsta_pane_cp_g3

0xb9a6,	// (0x000167ff) indicator_nsta_pane_cp_g4

0xb9ae,	// (0x00016807) indicator_nsta_pane_cp_g5

0xb9ae,	// (0x00016807) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001a901) indicator_nsta_pane_cp_g

0xe486,	// (0x000192df) cell_graphic2_pane_t2_ParamLimits

0xe486,	// (0x000192df) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001ac1a) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001ac1a) cell_graphic2_pane_t

0xe4b3,	// (0x0001930c) cell_graphic2_control_pane_t1

0x859d,	// (0x000133f6) signal_pane_g3_ParamLimits

0x859d,	// (0x000133f6) signal_pane_g3

0x85af,	// (0x00013408) signal_pane_g4_ParamLimits

0x85af,	// (0x00013408) signal_pane_g4

0xf30f,	// (0x0001a168) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf30f,	// (0x0001a168) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0001a292) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0001a292) cell_ituss_key_pane_t1

0x95c3,	// (0x0001441c) form_field_data_wide_pane_vc_t2_ParamLimits

0x95c3,	// (0x0001441c) form_field_data_wide_pane_vc_t2

0x95d7,	// (0x00014430) form_field_data_wide_pane_vc_t3_ParamLimits

0x95d7,	// (0x00014430) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001a65d) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001a65d) form_field_data_wide_pane_vc_t

0xb655,	// (0x000164ae) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb655,	// (0x000164ae) form_field_slider_wide_pane_vc_t3

0xb733,	// (0x0001658c) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb733,	// (0x0001658c) form_field_popup_wide_pane_vc_t2

0xb74a,	// (0x000165a3) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb74a,	// (0x000165a3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001a8f0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001a8f0) form_field_popup_wide_pane_vc_t

0x6aa4,	// (0x000118fd) aid_fshwr2_btn_pane_ParamLimits

0x6ab0,	// (0x00011909) aid_fshwr2_syb_pane_ParamLimits

0x6abc,	// (0x00011915) aid_fshwr2_txt_pane_ParamLimits

0x62f4,	// (0x0001114d) fshwr2_bg_pane_ParamLimits

0x6ac8,	// (0x00011921) fshwr2_func_candi_pane_ParamLimits

0x6add,	// (0x00011936) fshwr2_hwr_syb_pane_ParamLimits

0x6aed,	// (0x00011946) fshwr2_icf_pane_ParamLimits

0xb5bb,	// (0x00016414) list_double_graphic_pane_vc_g4_ParamLimits

0xb5bb,	// (0x00016414) list_double_graphic_pane_vc_g4

0x6ce7,	// (0x00011b40) cell_ituss_key_pane_g3_ParamLimits

0x6ce7,	// (0x00011b40) cell_ituss_key_pane_g3

0x6d8f,	// (0x00011be8) cell_ituss_key_t5_ParamLimits

0x6d8f,	// (0x00011be8) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

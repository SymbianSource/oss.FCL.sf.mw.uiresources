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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00030f5b };

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
0xb2a1,	// (0x0003c1fc) Screen

0xb2ad,	// (0x0003c208) application_window_ParamLimits

0xb2ad,	// (0x0003c208) application_window

0xe005,	// (0x0003ef60) screen_g1

0xb2e5,	// (0x0003c240) area_bottom_pane_ParamLimits

0xb2e5,	// (0x0003c240) area_bottom_pane

0xef98,	// (0x0003fef3) area_top_pane_ParamLimits

0xef98,	// (0x0003fef3) area_top_pane

0xf036,	// (0x0003ff91) main_pane_ParamLimits

0xf036,	// (0x0003ff91) main_pane

0x2c59,	// (0x00033bb4) misc_graphics

0xd3ee,	// (0x0003e349) battery_pane_ParamLimits

0xd3ee,	// (0x0003e349) battery_pane

0x55a8,	// (0x00036503) bg_status_flat_pane_g8

0x55b0,	// (0x0003650b) bg_status_flat_pane_g9

0x498e,	// (0x000358e9) context_pane_ParamLimits

0x498e,	// (0x000358e9) context_pane

0xd559,	// (0x0003e4b4) navi_pane_ParamLimits

0xd559,	// (0x0003e4b4) navi_pane

0xd5d7,	// (0x0003e532) signal_pane_ParamLimits

0xd5d7,	// (0x0003e532) signal_pane

0x0008,

0xf84f,	// (0x000407aa) bg_status_flat_pane_g

0xd667,	// (0x0003e5c2) status_pane_g1_ParamLimits

0xd667,	// (0x0003e5c2) status_pane_g1

0xd67d,	// (0x0003e5d8) status_pane_g2_ParamLimits

0xd67d,	// (0x0003e5d8) status_pane_g2

0x4bb5,	// (0x00035b10) status_pane_g3_ParamLimits

0x4bb5,	// (0x00035b10) status_pane_g3

0x0004,

0xf77b,	// (0x000406d6) status_pane_g_ParamLimits

0xf77b,	// (0x000406d6) status_pane_g

0xd689,	// (0x0003e5e4) title_pane_ParamLimits

0xd689,	// (0x0003e5e4) title_pane

0xd6ec,	// (0x0003e647) uni_indicator_pane_ParamLimits

0xd6ec,	// (0x0003e647) uni_indicator_pane

0x47f6,	// (0x00035751) bg_list_pane_ParamLimits

0x47f6,	// (0x00035751) bg_list_pane

0xbfdc,	// (0x0003cf37) find_pane

0x4db4,	// (0x00035d0f) listscroll_app_pane_ParamLimits

0x4db4,	// (0x00035d0f) listscroll_app_pane

0x4822,	// (0x0003577d) listscroll_form_pane

0xb28d,	// (0x0003c1e8) listscroll_gen_pane_ParamLimits

0xb28d,	// (0x0003c1e8) listscroll_gen_pane

0x09d1,	// (0x0003192c) listscroll_set_pane

0x6129,	// (0x00037084) main_idle_act_pane

0x44f2,	// (0x0003544d) main_idle_trad_pane

0x44f2,	// (0x0003544d) main_list_empty_pane

0x4816,	// (0x00035771) main_midp_pane

0x483c,	// (0x00035797) main_pane_g1_ParamLimits

0x483c,	// (0x00035797) main_pane_g1

0xbfe4,	// (0x0003cf3f) popup_ai_message_window_ParamLimits

0xbfe4,	// (0x0003cf3f) popup_ai_message_window

0xc075,	// (0x0003cfd0) popup_fep_china_uni_window_ParamLimits

0xc075,	// (0x0003cfd0) popup_fep_china_uni_window

0x0af1,	// (0x00031a4c) popup_fep_japan_candidate_window_ParamLimits

0x0af1,	// (0x00031a4c) popup_fep_japan_candidate_window

0x0b11,	// (0x00031a6c) popup_fep_japan_predictive_window_ParamLimits

0x0b11,	// (0x00031a6c) popup_fep_japan_predictive_window

0xc0d1,	// (0x0003d02c) popup_find_window

0xc0ee,	// (0x0003d049) popup_grid_graphic_window_ParamLimits

0xc0ee,	// (0x0003d049) popup_grid_graphic_window

0x0b7a,	// (0x00031ad5) popup_large_graphic_colour_window

0xc192,	// (0x0003d0ed) popup_menu_window_ParamLimits

0xc192,	// (0x0003d0ed) popup_menu_window

0xc364,	// (0x0003d2bf) popup_note_image_window

0xc32a,	// (0x0003d285) popup_note_wait_window_ParamLimits

0xc32a,	// (0x0003d285) popup_note_wait_window

0xc37c,	// (0x0003d2d7) popup_note_window_ParamLimits

0xc37c,	// (0x0003d2d7) popup_note_window

0xc422,	// (0x0003d37d) popup_query_code_window_ParamLimits

0xc422,	// (0x0003d37d) popup_query_code_window

0x0dc2,	// (0x00031d1d) popup_query_data_code_window_ParamLimits

0x0dc2,	// (0x00031d1d) popup_query_data_code_window

0xc45c,	// (0x0003d3b7) popup_query_data_window_ParamLimits

0xc45c,	// (0x0003d3b7) popup_query_data_window

0xc4de,	// (0x0003d439) popup_query_sat_info_window_ParamLimits

0xc4de,	// (0x0003d439) popup_query_sat_info_window

0xc575,	// (0x0003d4d0) popup_snote_single_graphic_window_ParamLimits

0xc575,	// (0x0003d4d0) popup_snote_single_graphic_window

0xc575,	// (0x0003d4d0) popup_snote_single_text_window_ParamLimits

0xc575,	// (0x0003d4d0) popup_snote_single_text_window

0x0e49,	// (0x00031da4) popup_sub_window_general

0x0f79,	// (0x00031ed4) popup_window_general_ParamLimits

0x0f79,	// (0x00031ed4) popup_window_general

0x484a,	// (0x000357a5) power_save_pane

0xbe5d,	// (0x0003cdb8) control_pane_g1_ParamLimits

0xbe5d,	// (0x0003cdb8) control_pane_g1

0xbe86,	// (0x0003cde1) control_pane_g2_ParamLimits

0xbe86,	// (0x0003cde1) control_pane_g2

0x47b9,	// (0x00035714) control_pane_g3_ParamLimits

0x47b9,	// (0x00035714) control_pane_g3

0x0007,

0xf763,	// (0x000406be) control_pane_g_ParamLimits

0xf763,	// (0x000406be) control_pane_g

0xbec7,	// (0x0003ce22) control_pane_t1_ParamLimits

0xbec7,	// (0x0003ce22) control_pane_t1

0xbf2f,	// (0x0003ce8a) control_pane_t2_ParamLimits

0xbf2f,	// (0x0003ce8a) control_pane_t2

0x0002,

0xf774,	// (0x000406cf) control_pane_t_ParamLimits

0xf774,	// (0x000406cf) control_pane_t

0x46de,	// (0x00035639) navi_navi_volume_pane_cp1

0x46e6,	// (0x00035641) status_small_icon_pane

0x46ee,	// (0x00035649) status_small_pane_g1_ParamLimits

0x46ee,	// (0x00035649) status_small_pane_g1

0x4722,	// (0x0003567d) status_small_pane_g2_ParamLimits

0x4722,	// (0x0003567d) status_small_pane_g2

0x472e,	// (0x00035689) status_small_pane_g3_ParamLimits

0x472e,	// (0x00035689) status_small_pane_g3

0xd30a,	// (0x0003e265) status_small_pane_g4_ParamLimits

0xd30a,	// (0x0003e265) status_small_pane_g4

0xd318,	// (0x0003e273) status_small_pane_g5_ParamLimits

0xd318,	// (0x0003e273) status_small_pane_g5

0x4754,	// (0x000356af) status_small_pane_g6_ParamLimits

0x4754,	// (0x000356af) status_small_pane_g6

0x0007,

0xf752,	// (0x000406ad) status_small_pane_g_ParamLimits

0xf752,	// (0x000406ad) status_small_pane_g

0x4783,	// (0x000356de) status_small_pane_t1

0xd32e,	// (0x0003e289) status_small_wait_pane_ParamLimits

0xd32e,	// (0x0003e289) status_small_wait_pane

0xd1e0,	// (0x0003e13b) aid_levels_signal_ParamLimits

0xd1e0,	// (0x0003e13b) aid_levels_signal

0xd1f8,	// (0x0003e153) signal_pane_g1_ParamLimits

0xd1f8,	// (0x0003e153) signal_pane_g1

0xd213,	// (0x0003e16e) signal_pane_g2_ParamLimits

0xd213,	// (0x0003e16e) signal_pane_g2

0x0003,

0xf6e3,	// (0x0004063e) signal_pane_g_ParamLimits

0xf6e3,	// (0x0004063e) signal_pane_g

0x3fc5,	// (0x00034f20) context_pane_g1

0xb4c3,	// (0x0003c41e) title_pane_g1

0xb4fa,	// (0x0003c455) title_pane_t1

0x2d01,	// (0x00033c5c) title_pane_t2

0x2d27,	// (0x00033c82) title_pane_t3

0x0002,

0xf532,	// (0x0004048d) title_pane_t

0xd714,	// (0x0003e66f) aid_levels_battery_ParamLimits

0xd714,	// (0x0003e66f) aid_levels_battery

0xd730,	// (0x0003e68b) battery_pane_g1_ParamLimits

0xd730,	// (0x0003e68b) battery_pane_g1

0xd74d,	// (0x0003e6a8) battery_pane_g2_ParamLimits

0xd74d,	// (0x0003e6a8) battery_pane_g2

0x0001,

0xf786,	// (0x000406e1) battery_pane_g_ParamLimits

0xf786,	// (0x000406e1) battery_pane_g

0xd90e,	// (0x0003e869) uni_indicator_pane_g1

0xd924,	// (0x0003e87f) uni_indicator_pane_g2

0xd93a,	// (0x0003e895) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00040852) uni_indicator_pane_g

0x435b,	// (0x000352b6) navi_icon_pane_ParamLimits

0x435b,	// (0x000352b6) navi_icon_pane

0x42a4,	// (0x000351ff) navi_midp_pane

0x4377,	// (0x000352d2) navi_navi_pane

0x4381,	// (0x000352dc) navi_text_pane_ParamLimits

0x4381,	// (0x000352dc) navi_text_pane

0xe005,	// (0x0003ef60) status_small_wait_pane_g1

0x317c,	// (0x000340d7) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0004084d) status_small_wait_pane_g

0x5c03,	// (0x00036b5e) navi_navi_icon_text_pane

0x5c0b,	// (0x00036b66) navi_navi_pane_g1_ParamLimits

0x5c0b,	// (0x00036b66) navi_navi_pane_g1

0x5c1d,	// (0x00036b78) navi_navi_pane_g2_ParamLimits

0x5c1d,	// (0x00036b78) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0004081b) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0004081b) navi_navi_pane_g

0x5c2f,	// (0x00036b8a) navi_navi_tabs_pane

0x5c38,	// (0x00036b93) navi_navi_text_pane

0x5c03,	// (0x00036b5e) navi_navi_volume_pane

0x5bdf,	// (0x00036b3a) navi_text_pane_t1

0x5bd3,	// (0x00036b2e) navi_icon_pane_g1

0x5b26,	// (0x00036a81) navi_navi_text_pane_t1

0x1356,	// (0x000322b1) navi_navi_volume_pane_g1

0x135e,	// (0x000322b9) volume_small_pane

0x5a8c,	// (0x000369e7) navi_navi_icon_text_pane_g1

0x5a94,	// (0x000369ef) navi_navi_icon_text_pane_t1

0x4377,	// (0x000352d2) navi_tabs_2_long_pane

0x4377,	// (0x000352d2) navi_tabs_2_pane

0x4377,	// (0x000352d2) navi_tabs_3_long_pane

0x4377,	// (0x000352d2) navi_tabs_3_pane

0x4377,	// (0x000352d2) navi_tabs_4_pane

0x1336,	// (0x00032291) tabs_2_active_pane_ParamLimits

0x1336,	// (0x00032291) tabs_2_active_pane

0x1346,	// (0x000322a1) tabs_2_passive_pane_ParamLimits

0x1346,	// (0x000322a1) tabs_2_passive_pane

0x1304,	// (0x0003225f) tabs_3_active_pane_ParamLimits

0x1304,	// (0x0003225f) tabs_3_active_pane

0x1314,	// (0x0003226f) tabs_3_passive_pane_ParamLimits

0x1314,	// (0x0003226f) tabs_3_passive_pane

0x1325,	// (0x00032280) tabs_3_passive_pane_cp_ParamLimits

0x1325,	// (0x00032280) tabs_3_passive_pane_cp

0x12c0,	// (0x0003221b) tabs_4_active_pane_ParamLimits

0x12c0,	// (0x0003221b) tabs_4_active_pane

0x12d1,	// (0x0003222c) tabs_4_passive_pane_ParamLimits

0x12d1,	// (0x0003222c) tabs_4_passive_pane

0x12e2,	// (0x0003223d) tabs_4_passive_pane_cp_ParamLimits

0x12e2,	// (0x0003223d) tabs_4_passive_pane_cp

0x12f3,	// (0x0003224e) tabs_4_passive_pane_cp2_ParamLimits

0x12f3,	// (0x0003224e) tabs_4_passive_pane_cp2

0x129c,	// (0x000321f7) tabs_2_long_active_pane_ParamLimits

0x129c,	// (0x000321f7) tabs_2_long_active_pane

0x12ae,	// (0x00032209) tabs_2_long_passive_pane_ParamLimits

0x12ae,	// (0x00032209) tabs_2_long_passive_pane

0x125d,	// (0x000321b8) tabs_3_long_active_pane_ParamLimits

0x125d,	// (0x000321b8) tabs_3_long_active_pane

0x1270,	// (0x000321cb) tabs_3_long_passive_pane_ParamLimits

0x1270,	// (0x000321cb) tabs_3_long_passive_pane

0x1289,	// (0x000321e4) tabs_3_long_passive_pane_cp_ParamLimits

0x1289,	// (0x000321e4) tabs_3_long_passive_pane_cp

0x1203,	// (0x0003215e) volume_small_pane_g1

0x120c,	// (0x00032167) volume_small_pane_g2

0x1215,	// (0x00032170) volume_small_pane_g3

0x121e,	// (0x00032179) volume_small_pane_g4

0x1227,	// (0x00032182) volume_small_pane_g5

0x1230,	// (0x0003218b) volume_small_pane_g6

0x1239,	// (0x00032194) volume_small_pane_g7

0x1242,	// (0x0003219d) volume_small_pane_g8

0x124b,	// (0x000321a6) volume_small_pane_g9

0x1254,	// (0x000321af) volume_small_pane_g10

0x0009,

0xf88c,	// (0x000407e7) volume_small_pane_g

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp2_ParamLimits

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp2

0x2d47,	// (0x00033ca2) tabs_3_active_pane_g1

0xb586,	// (0x0003c4e1) tabs_3_active_pane_t1

0x2fb4,	// (0x00033f0f) bg_passive_tab_pane_cp2_ParamLimits

0x2fb4,	// (0x00033f0f) bg_passive_tab_pane_cp2

0x2d47,	// (0x00033ca2) tabs_3_passive_pane_g1

0xb586,	// (0x0003c4e1) tabs_3_passive_pane_t1

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp3_ParamLimits

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp3

0x2d61,	// (0x00033cbc) tabs_4_active_pane_g1

0xb598,	// (0x0003c4f3) tabs_4_active_pane_t1

0x2fb4,	// (0x00033f0f) bg_passive_tab_pane_cp3_ParamLimits

0x2fb4,	// (0x00033f0f) bg_passive_tab_pane_cp3

0x2d61,	// (0x00033cbc) tabs_4_1_passive_pane_g1

0xb598,	// (0x0003c4f3) tabs_4_1_passive_pane_t1

0x4816,	// (0x00035771) list_highlight_pane_cp2

0xd9c0,	// (0x0003e91b) list_set_pane_ParamLimits

0xd9c0,	// (0x0003e91b) list_set_pane

0xda5a,	// (0x0003e9b5) main_pane_set_t1_ParamLimits

0xda5a,	// (0x0003e9b5) main_pane_set_t1

0xda7a,	// (0x0003e9d5) main_pane_set_t2_ParamLimits

0xda7a,	// (0x0003e9d5) main_pane_set_t2

0xda8e,	// (0x0003e9e9) main_pane_set_t3_ParamLimits

0xda8e,	// (0x0003e9e9) main_pane_set_t3

0xdaa0,	// (0x0003e9fb) main_pane_set_t4_ParamLimits

0xdaa0,	// (0x0003e9fb) main_pane_set_t4

0x0003,

0xf95c,	// (0x000408b7) main_pane_set_t_ParamLimits

0xf95c,	// (0x000408b7) main_pane_set_t

0xdab2,	// (0x0003ea0d) setting_code_pane

0xdabc,	// (0x0003ea17) setting_slider_graphic_pane

0xdabc,	// (0x0003ea17) setting_slider_pane

0xdabc,	// (0x0003ea17) setting_text_pane

0xdabc,	// (0x0003ea17) setting_volume_pane

0xf498,	// (0x000403f3) volume_set_pane

0x2d39,	// (0x00033c94) bg_set_opt_pane_cp

0xf4a0,	// (0x000403fb) setting_slider_pane_t1

0xf4b9,	// (0x00040414) setting_slider_pane_t2

0xf4d3,	// (0x0004042e) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00040494) setting_slider_pane_t

0xf4eb,	// (0x00040446) slider_set_pane

0x2c59,	// (0x00033bb4) bg_set_opt_pane_cp2

0x2d7b,	// (0x00033cd6) setting_slider_graphic_pane_g1

0xf501,	// (0x0004045c) setting_slider_graphic_pane_t1

0xf511,	// (0x0004046c) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004049b) setting_slider_graphic_pane_t

0xf521,	// (0x0004047c) slider_set_pane_cp

0x2c59,	// (0x00033bb4) input_focus_pane_cp1

0x6110,	// (0x0003706b) list_set_text_pane

0xe005,	// (0x0003ef60) setting_text_pane_g1

0x2c59,	// (0x00033bb4) input_focus_pane_cp2

0xe005,	// (0x0003ef60) setting_code_pane_g1

0x2d84,	// (0x00033cdf) setting_code_pane_t1

0xf0f1,	// (0x0004004c) set_text_pane_t1_ParamLimits

0xf0f1,	// (0x0004004c) set_text_pane_t1

0x361e,	// (0x00034579) set_opt_bg_pane_g1

0x3626,	// (0x00034581) set_opt_bg_pane_g2

0x60ea,	// (0x00037045) set_opt_bg_pane_g3

0x3636,	// (0x00034591) set_opt_bg_pane_g4

0x363e,	// (0x00034599) set_opt_bg_pane_g5

0x3646,	// (0x000345a1) set_opt_bg_pane_g6

0x60f4,	// (0x0003704f) set_opt_bg_pane_g7

0x60fc,	// (0x00037057) set_opt_bg_pane_g8

0x6106,	// (0x00037061) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x000408a4) set_opt_bg_pane_g

0x60dd,	// (0x00037038) slider_set_pane_g1

0x13f3,	// (0x0003234e) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00040895) slider_set_pane_g

0x1367,	// (0x000322c2) volume_set_pane_g1

0x136f,	// (0x000322ca) volume_set_pane_g2

0x1377,	// (0x000322d2) volume_set_pane_g3

0x137f,	// (0x000322da) volume_set_pane_g4

0x1387,	// (0x000322e2) volume_set_pane_g5

0x138f,	// (0x000322ea) volume_set_pane_g6

0x1397,	// (0x000322f2) volume_set_pane_g7

0x139f,	// (0x000322fa) volume_set_pane_g8

0x13a7,	// (0x00032302) volume_set_pane_g9

0x13af,	// (0x0003230a) volume_set_pane_g10

0x0009,

0xf912,	// (0x0004086d) volume_set_pane_g

0xb5aa,	// (0x0003c505) indicator_pane_ParamLimits

0xb5aa,	// (0x0003c505) indicator_pane

0xb5d2,	// (0x0003c52d) main_idle_pane_g2_ParamLimits

0xb5d2,	// (0x0003c52d) main_idle_pane_g2

0xb60a,	// (0x0003c565) main_pane_idle_g1_ParamLimits

0xb60a,	// (0x0003c565) main_pane_idle_g1

0x2dd3,	// (0x00033d2e) popup_clock_digital_analogue_window_ParamLimits

0x2dd3,	// (0x00033d2e) popup_clock_digital_analogue_window

0xb631,	// (0x0003c58c) soft_indicator_pane_ParamLimits

0xb631,	// (0x0003c58c) soft_indicator_pane

0xb64b,	// (0x0003c5a6) wallpaper_pane_ParamLimits

0xb64b,	// (0x0003c5a6) wallpaper_pane

0xe005,	// (0x0003ef60) wallpaper_pane_g1

0xb65d,	// (0x0003c5b8) indicator_pane_g1_ParamLimits

0xb65d,	// (0x0003c5b8) indicator_pane_g1

0x652b,	// (0x00037486) navi_navi_icon_text_pane_srt_g1

0x2e25,	// (0x00033d80) soft_indicator_pane_t1

0x2e3f,	// (0x00033d9a) aid_ps_area_pane

0xb673,	// (0x0003c5ce) aid_ps_clock_pane

0x2e5e,	// (0x00033db9) aid_ps_indicator_pane

0x2e6a,	// (0x00033dc5) indicator_ps_pane_ParamLimits

0x2e6a,	// (0x00033dc5) indicator_ps_pane

0x2e79,	// (0x00033dd4) power_save_pane_g1_ParamLimits

0x2e79,	// (0x00033dd4) power_save_pane_g1

0x2e85,	// (0x00033de0) power_save_pane_g2_ParamLimits

0x2e85,	// (0x00033de0) power_save_pane_g2

0xef78,	// (0x0003fed3) aid_navinavi_width_pane

0x2e3f,	// (0x00033d9a) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000404a0) power_save_pane_g_ParamLimits

0xf545,	// (0x000404a0) power_save_pane_g

0x2e93,	// (0x00033dee) power_save_pane_t1_ParamLimits

0x2e93,	// (0x00033dee) power_save_pane_t1

0xb673,	// (0x0003c5ce) aid_ps_clock_pane_ParamLimits

0x2e5e,	// (0x00033db9) aid_ps_indicator_pane_ParamLimits

0x2ea5,	// (0x00033e00) power_save_pane_t4_ParamLimits

0x2ea5,	// (0x00033e00) power_save_pane_t4

0x0001,

0xf54a,	// (0x000404a5) power_save_pane_t_ParamLimits

0xf54a,	// (0x000404a5) power_save_pane_t

0x2ecf,	// (0x00033e2a) power_save_t3_ParamLimits

0x2ecf,	// (0x00033e2a) power_save_t3

0x2eba,	// (0x00033e15) power_save_t2_ParamLimits

0x2eba,	// (0x00033e15) power_save_t2

0x2ee4,	// (0x00033e3f) indicator_ps_pane_g1

0xb681,	// (0x0003c5dc) ai_gene_pane_ParamLimits

0xb681,	// (0x0003c5dc) ai_gene_pane

0xb698,	// (0x0003c5f3) ai_links_pane_ParamLimits

0xb698,	// (0x0003c5f3) ai_links_pane

0xb6b0,	// (0x0003c60b) indicator_pane_cp1_ParamLimits

0xb6b0,	// (0x0003c60b) indicator_pane_cp1

0xb6bf,	// (0x0003c61a) main_pane_idle_g1_cp_ParamLimits

0xb6bf,	// (0x0003c61a) main_pane_idle_g1_cp

0x2f1d,	// (0x00033e78) popup_ai_links_title_window

0xb6d7,	// (0x0003c632) soft_indicator_pane_cp1_ParamLimits

0xb6d7,	// (0x0003c632) soft_indicator_pane_cp1

0x5ecc,	// (0x00036e27) ai_links_pane_g1

0x5ed5,	// (0x00036e30) grid_ai_links_pane

0xd905,	// (0x0003e860) ai_gene_pane_1

0x5eba,	// (0x00036e15) ai_gene_pane_2

0x5ec3,	// (0x00036e1e) list_highlight_pane_cp4

0xd8e1,	// (0x0003e83c) cell_ai_link_pane_ParamLimits

0xd8e1,	// (0x0003e83c) cell_ai_link_pane

0x5e8b,	// (0x00036de6) cell_ai_link_pane_g1

0x317c,	// (0x000340d7) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00040848) cell_ai_link_pane_g

0x2c59,	// (0x00033bb4) grid_highlight_cp2

0x2c59,	// (0x00033bb4) bg_popup_sub_pane_cp1

0x2f40,	// (0x00033e9b) popup_ai_links_title_window_t1

0x5dd9,	// (0x00036d34) ai_gene_pane_1_g1_ParamLimits

0x5dd9,	// (0x00036d34) ai_gene_pane_1_g1

0x5de5,	// (0x00036d40) ai_gene_pane_1_g2_ParamLimits

0x5de5,	// (0x00036d40) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0004083e) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0004083e) ai_gene_pane_1_g

0x5df2,	// (0x00036d4d) ai_gene_pane_1_t1_ParamLimits

0x5df2,	// (0x00036d4d) ai_gene_pane_1_t1

0x5e26,	// (0x00036d81) grid_ai_soft_ind_pane

0x5dc4,	// (0x00036d1f) ai_gene_pane_2_t1_ParamLimits

0x5dc4,	// (0x00036d1f) ai_gene_pane_2_t1

0xb6eb,	// (0x0003c646) main_pane_empty_t1_ParamLimits

0xb6eb,	// (0x0003c646) main_pane_empty_t1

0xb703,	// (0x0003c65e) main_pane_empty_t2_ParamLimits

0xb703,	// (0x0003c65e) main_pane_empty_t2

0xb718,	// (0x0003c673) main_pane_empty_t3_ParamLimits

0xb718,	// (0x0003c673) main_pane_empty_t3

0xb72a,	// (0x0003c685) main_pane_empty_t4_ParamLimits

0xb72a,	// (0x0003c685) main_pane_empty_t4

0xb73c,	// (0x0003c697) main_pane_empty_t5_ParamLimits

0xb73c,	// (0x0003c697) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000404aa) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000404aa) main_pane_empty_t

0x36e5,	// (0x00034640) bg_popup_window_pane_ParamLimits

0x36e5,	// (0x00034640) bg_popup_window_pane

0x5b34,	// (0x00036a8f) find_popup_pane_cp2_ParamLimits

0x5b34,	// (0x00036a8f) find_popup_pane_cp2

0x5b40,	// (0x00036a9b) heading_pane_ParamLimits

0x5b40,	// (0x00036a9b) heading_pane

0x2c59,	// (0x00033bb4) bg_popup_sub_pane

0xd862,	// (0x0003e7bd) bg_popup_window_pane_g1_ParamLimits

0xd862,	// (0x0003e7bd) bg_popup_window_pane_g1

0xd871,	// (0x0003e7cc) bg_popup_window_pane_g2_ParamLimits

0xd871,	// (0x0003e7cc) bg_popup_window_pane_g2

0xd87d,	// (0x0003e7d8) bg_popup_window_pane_g3_ParamLimits

0xd87d,	// (0x0003e7d8) bg_popup_window_pane_g3

0xd889,	// (0x0003e7e4) bg_popup_window_pane_g4_ParamLimits

0xd889,	// (0x0003e7e4) bg_popup_window_pane_g4

0xd898,	// (0x0003e7f3) bg_popup_window_pane_g5_ParamLimits

0xd898,	// (0x0003e7f3) bg_popup_window_pane_g5

0xd8a8,	// (0x0003e803) bg_popup_window_pane_g6_ParamLimits

0xd8a8,	// (0x0003e803) bg_popup_window_pane_g6

0xd8b4,	// (0x0003e80f) bg_popup_window_pane_g7_ParamLimits

0xd8b4,	// (0x0003e80f) bg_popup_window_pane_g7

0xd8c3,	// (0x0003e81e) bg_popup_window_pane_g8_ParamLimits

0xd8c3,	// (0x0003e81e) bg_popup_window_pane_g8

0xd8d2,	// (0x0003e82d) bg_popup_window_pane_g9_ParamLimits

0xd8d2,	// (0x0003e82d) bg_popup_window_pane_g9

0x5b1a,	// (0x00036a75) bg_popup_window_pane_g10_ParamLimits

0x5b1a,	// (0x00036a75) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00040806) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00040806) bg_popup_window_pane_g

0x5a43,	// (0x0003699e) bg_popup_heading_pane_ParamLimits

0x5a43,	// (0x0003699e) bg_popup_heading_pane

0x1569,	// (0x000324c4) tabs_4_passive_pane_cp_srt_ParamLimits

0x1569,	// (0x000324c4) tabs_4_passive_pane_cp_srt

0x157b,	// (0x000324d6) tabs_4_passive_pane_srt_ParamLimits

0x5a57,	// (0x000369b2) heading_pane_g2

0x157b,	// (0x000324d6) tabs_4_passive_pane_srt

0x4db4,	// (0x00035d0f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4db4,	// (0x00035d0f) bg_passive_tab_pane_cp3_srt

0x5a5f,	// (0x000369ba) heading_pane_t1_ParamLimits

0x5a5f,	// (0x000369ba) heading_pane_t1

0x5a76,	// (0x000369d1) heading_pane_t2_ParamLimits

0x5a76,	// (0x000369d1) heading_pane_t2

0x0001,

0xf8a6,	// (0x00040801) heading_pane_t_ParamLimits

0xf8a6,	// (0x00040801) heading_pane_t

0x5570,	// (0x000364cb) bg_popup_heading_pane_g1

0x561f,	// (0x0003657a) bg_popup_heading_pane_g2

0x5629,	// (0x00036584) bg_popup_heading_pane_g3

0x5633,	// (0x0003658e) bg_popup_heading_pane_g4

0x563d,	// (0x00036598) bg_popup_heading_pane_g5

0x5647,	// (0x000365a2) bg_popup_heading_pane_g6

0x564f,	// (0x000365aa) bg_popup_heading_pane_g7

0x5657,	// (0x000365b2) bg_popup_heading_pane_g8

0x5661,	// (0x000365bc) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x000407bd) bg_popup_heading_pane_g

0x4d40,	// (0x00035c9b) bg_popup_sub_pane_g1

0x4d50,	// (0x00035cab) bg_popup_sub_pane_g2

0x4d48,	// (0x00035ca3) bg_popup_sub_pane_g3

0x4d60,	// (0x00035cbb) bg_popup_sub_pane_g4

0x4d58,	// (0x00035cb3) bg_popup_sub_pane_g5

0x4d68,	// (0x00035cc3) bg_popup_sub_pane_g6

0x4d70,	// (0x00035ccb) bg_popup_sub_pane_g7

0x4d80,	// (0x00035cdb) bg_popup_sub_pane_g8

0x4d78,	// (0x00035cd3) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00040797) bg_popup_sub_pane_g

0x2fb4,	// (0x00033f0f) bg_popup_window_pane_cp5_ParamLimits

0x2fb4,	// (0x00033f0f) bg_popup_window_pane_cp5

0x2fd0,	// (0x00033f2b) popup_note_window_g1_ParamLimits

0x2fd0,	// (0x00033f2b) popup_note_window_g1

0x2fdc,	// (0x00033f37) popup_note_window_t1_ParamLimits

0x2fdc,	// (0x00033f37) popup_note_window_t1

0x2ff2,	// (0x00033f4d) popup_note_window_t2_ParamLimits

0x2ff2,	// (0x00033f4d) popup_note_window_t2

0x3008,	// (0x00033f63) popup_note_window_t3_ParamLimits

0x3008,	// (0x00033f63) popup_note_window_t3

0x301e,	// (0x00033f79) popup_note_window_t4_ParamLimits

0x301e,	// (0x00033f79) popup_note_window_t4

0x3046,	// (0x00033fa1) popup_note_window_t5_ParamLimits

0x3046,	// (0x00033fa1) popup_note_window_t5

0x0004,

0xf55a,	// (0x000404b5) popup_note_window_t_ParamLimits

0xf55a,	// (0x000404b5) popup_note_window_t

0x3090,	// (0x00033feb) bg_popup_window_pane_cp6_ParamLimits

0x3090,	// (0x00033feb) bg_popup_window_pane_cp6

0x54ec,	// (0x00036447) popup_note_image_window_g1_ParamLimits

0x54ec,	// (0x00036447) popup_note_image_window_g1

0x54f8,	// (0x00036453) popup_note_image_window_g2_ParamLimits

0x54f8,	// (0x00036453) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0004078b) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0004078b) popup_note_image_window_g

0x5511,	// (0x0003646c) popup_note_image_window_t1_ParamLimits

0x5511,	// (0x0003646c) popup_note_image_window_t1

0x552a,	// (0x00036485) popup_note_image_window_t2_ParamLimits

0x552a,	// (0x00036485) popup_note_image_window_t2

0x5543,	// (0x0003649e) popup_note_image_window_t3_ParamLimits

0x5543,	// (0x0003649e) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00040790) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00040790) popup_note_image_window_t

0x53ad,	// (0x00036308) bg_popup_window_pane_cp7_ParamLimits

0x53ad,	// (0x00036308) bg_popup_window_pane_cp7

0x53dd,	// (0x00036338) popup_note_wait_window_g1_ParamLimits

0x53dd,	// (0x00036338) popup_note_wait_window_g1

0x53e9,	// (0x00036344) popup_note_wait_window_g2_ParamLimits

0x53e9,	// (0x00036344) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00040779) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00040779) popup_note_wait_window_g

0x5401,	// (0x0003635c) popup_note_wait_window_t1_ParamLimits

0x5401,	// (0x0003635c) popup_note_wait_window_t1

0x5428,	// (0x00036383) popup_note_wait_window_t2_ParamLimits

0x5428,	// (0x00036383) popup_note_wait_window_t2

0x5445,	// (0x000363a0) popup_note_wait_window_t3_ParamLimits

0x5445,	// (0x000363a0) popup_note_wait_window_t3

0x5458,	// (0x000363b3) popup_note_wait_window_t4_ParamLimits

0x5458,	// (0x000363b3) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00040780) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00040780) popup_note_wait_window_t

0x547d,	// (0x000363d8) wait_bar_pane_ParamLimits

0x547d,	// (0x000363d8) wait_bar_pane

0x2c59,	// (0x00033bb4) wait_anim_pane

0x2c59,	// (0x00033bb4) wait_border_pane

0xe005,	// (0x0003ef60) wait_anim_pane_g1

0xe005,	// (0x0003ef60) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00040639) wait_anim_pane_g

0x5351,	// (0x000362ac) wait_border_pane_g1

0x535c,	// (0x000362b7) wait_border_pane_g2

0x5365,	// (0x000362c0) wait_border_pane_g3

0x0002,

0xf817,	// (0x00040772) wait_border_pane_g

0x51bc,	// (0x00036117) bg_popup_window_pane_cp16_ParamLimits

0x51bc,	// (0x00036117) bg_popup_window_pane_cp16

0x52bc,	// (0x00036217) indicator_popup_pane_cp4_ParamLimits

0x52bc,	// (0x00036217) indicator_popup_pane_cp4

0x52d0,	// (0x0003622b) popup_query_data_window_t1_ParamLimits

0x52d0,	// (0x0003622b) popup_query_data_window_t1

0x52e2,	// (0x0003623d) popup_query_data_window_t2_ParamLimits

0x52e2,	// (0x0003623d) popup_query_data_window_t2

0x52fb,	// (0x00036256) popup_query_data_window_t3_ParamLimits

0x52fb,	// (0x00036256) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0004076b) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0004076b) popup_query_data_window_t

0x5315,	// (0x00036270) query_popup_data_pane_ParamLimits

0x5315,	// (0x00036270) query_popup_data_pane

0x5329,	// (0x00036284) query_popup_data_pane_cp1_ParamLimits

0x5329,	// (0x00036284) query_popup_data_pane_cp1

0x51bc,	// (0x00036117) bg_popup_window_pane_cp10_ParamLimits

0x51bc,	// (0x00036117) bg_popup_window_pane_cp10

0x51ee,	// (0x00036149) indicator_popup_pane_ParamLimits

0x51ee,	// (0x00036149) indicator_popup_pane

0x5210,	// (0x0003616b) popup_query_code_window_t1_ParamLimits

0x5210,	// (0x0003616b) popup_query_code_window_t1

0x522a,	// (0x00036185) popup_query_code_window_t2_ParamLimits

0x522a,	// (0x00036185) popup_query_code_window_t2

0x5273,	// (0x000361ce) popup_query_code_window_t3_ParamLimits

0x5273,	// (0x000361ce) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00040764) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00040764) popup_query_code_window_t

0x52a2,	// (0x000361fd) query_popup_pane_ParamLimits

0x52a2,	// (0x000361fd) query_popup_pane

0x3090,	// (0x00033feb) bg_popup_window_pane_cp15_ParamLimits

0x3090,	// (0x00033feb) bg_popup_window_pane_cp15

0x30ae,	// (0x00034009) indicator_popup_pane_cp1_ParamLimits

0x30ae,	// (0x00034009) indicator_popup_pane_cp1

0x30c1,	// (0x0003401c) indicator_popup_pane_cp2_ParamLimits

0x30c1,	// (0x0003401c) indicator_popup_pane_cp2

0x30d4,	// (0x0003402f) popup_query_data_code_window_g1_ParamLimits

0x30d4,	// (0x0003402f) popup_query_data_code_window_g1

0x30e7,	// (0x00034042) popup_query_data_code_window_t1_ParamLimits

0x30e7,	// (0x00034042) popup_query_data_code_window_t1

0x30f9,	// (0x00034054) popup_query_data_code_window_t2_ParamLimits

0x30f9,	// (0x00034054) popup_query_data_code_window_t2

0x310b,	// (0x00034066) popup_query_data_code_window_t3_ParamLimits

0x310b,	// (0x00034066) popup_query_data_code_window_t3

0x3121,	// (0x0003407c) popup_query_data_code_window_t4_ParamLimits

0x3121,	// (0x0003407c) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x000404c0) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x000404c0) popup_query_data_code_window_t

0x101d,	// (0x00031f78) list_single_midp_graphic_pane_g3

0x3139,	// (0x00034094) query_popup_data_pane_cp2_ParamLimits

0x314c,	// (0x000340a7) query_popup_pane_cp2_ParamLimits

0x314c,	// (0x000340a7) query_popup_pane_cp2

0x2c59,	// (0x00033bb4) bg_popup_window_pane_cp11

0x51a0,	// (0x000360fb) heading_pane_cp5

0x51a8,	// (0x00036103) listscroll_popup_info_pane

0x2c59,	// (0x00033bb4) input_focus_pane_cp3

0x315f,	// (0x000340ba) query_popup_pane_t1

0x316d,	// (0x000340c8) list_popup_info_pane_ParamLimits

0x316d,	// (0x000340c8) list_popup_info_pane

0x317c,	// (0x000340d7) listscroll_popup_info_pane_g1

0x3184,	// (0x000340df) scroll_pane_cp7

0x318e,	// (0x000340e9) popup_info_list_pane_t1_ParamLimits

0x318e,	// (0x000340e9) popup_info_list_pane_t1

0x31a8,	// (0x00034103) popup_info_list_pane_t2_ParamLimits

0x31a8,	// (0x00034103) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x000404c9) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x000404c9) popup_info_list_pane_t

0x2c59,	// (0x00033bb4) bg_popup_window_pane_cp12

0x6545,	// (0x000374a0) find_popup_pane

0x2d39,	// (0x00033c94) bg_popup_window_pane_cp3

0x31c2,	// (0x0003411d) heading_pane_cp3

0x31d1,	// (0x0003412c) listscroll_popup_graphic_pane

0x2c59,	// (0x00033bb4) bg_popup_window_pane_cp4

0xb79e,	// (0x0003c6f9) heading_pane_cp4

0x323b,	// (0x00034196) listscroll_popup_colour_pane

0xb7a8,	// (0x0003c703) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb7a8,	// (0x0003c703) cell_large_graphic_colour_none_popup_pane

0xb7bc,	// (0x0003c717) grid_large_graphic_colour_popup_pane_ParamLimits

0xb7bc,	// (0x0003c717) grid_large_graphic_colour_popup_pane

0xb7e0,	// (0x0003c73b) listscroll_popup_colour_pane_g1_ParamLimits

0xb7e0,	// (0x0003c73b) listscroll_popup_colour_pane_g1

0xb7f7,	// (0x0003c752) listscroll_popup_colour_pane_g2_ParamLimits

0xb7f7,	// (0x0003c752) listscroll_popup_colour_pane_g2

0xb80b,	// (0x0003c766) listscroll_popup_colour_pane_g3_ParamLimits

0xb80b,	// (0x0003c766) listscroll_popup_colour_pane_g3

0xb81b,	// (0x0003c776) listscroll_popup_colour_pane_g4_ParamLimits

0xb81b,	// (0x0003c776) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x000404ce) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x000404ce) listscroll_popup_colour_pane_g

0x32c9,	// (0x00034224) scroll_pane_cp6_ParamLimits

0x32c9,	// (0x00034224) scroll_pane_cp6

0xb82b,	// (0x0003c786) cell_large_graphic_colour_popup_pane_ParamLimits

0xb82b,	// (0x0003c786) cell_large_graphic_colour_popup_pane

0x32fa,	// (0x00034255) cell_large_graphic_colour_none_popup_pane_t1

0x2c59,	// (0x00033bb4) grid_highlight_pane_cp5

0x3309,	// (0x00034264) cell_large_graphic_colour_popup_pane_g1

0x3311,	// (0x0003426c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x000404d7) cell_large_graphic_colour_popup_pane_g

0x3319,	// (0x00034274) cell_large_graphic_colour_popup_pane_g2_copy1

0x3322,	// (0x0003427d) grid_highlight_pane_cp4

0x332a,	// (0x00034285) bg_popup_window_pane_cp8_ParamLimits

0x332a,	// (0x00034285) bg_popup_window_pane_cp8

0x3345,	// (0x000342a0) popup_snote_single_text_window_g1_ParamLimits

0x3345,	// (0x000342a0) popup_snote_single_text_window_g1

0x3357,	// (0x000342b2) popup_snote_single_text_window_t1_ParamLimits

0x3357,	// (0x000342b2) popup_snote_single_text_window_t1

0x336a,	// (0x000342c5) popup_snote_single_text_window_t2_ParamLimits

0x336a,	// (0x000342c5) popup_snote_single_text_window_t2

0x337d,	// (0x000342d8) popup_snote_single_text_window_t3_ParamLimits

0x337d,	// (0x000342d8) popup_snote_single_text_window_t3

0x33b6,	// (0x00034311) popup_snote_single_text_window_t4_ParamLimits

0x33b6,	// (0x00034311) popup_snote_single_text_window_t4

0x33ea,	// (0x00034345) popup_snote_single_text_window_t5_ParamLimits

0x33ea,	// (0x00034345) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x000404dc) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x000404dc) popup_snote_single_text_window_t

0x3419,	// (0x00034374) bg_popup_window_pane_cp9_ParamLimits

0x3419,	// (0x00034374) bg_popup_window_pane_cp9

0x3345,	// (0x000342a0) popup_snote_single_graphic_window_g1_ParamLimits

0x3345,	// (0x000342a0) popup_snote_single_graphic_window_g1

0x3427,	// (0x00034382) popup_snote_single_graphic_window_g2_ParamLimits

0x3427,	// (0x00034382) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x000404e7) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x000404e7) popup_snote_single_graphic_window_g

0x3433,	// (0x0003438e) popup_snote_single_graphic_window_t1_ParamLimits

0x3433,	// (0x0003438e) popup_snote_single_graphic_window_t1

0x3446,	// (0x000343a1) popup_snote_single_graphic_window_t2_ParamLimits

0x3446,	// (0x000343a1) popup_snote_single_graphic_window_t2

0x3459,	// (0x000343b4) popup_snote_single_graphic_window_t3_ParamLimits

0x3459,	// (0x000343b4) popup_snote_single_graphic_window_t3

0x3492,	// (0x000343ed) popup_snote_single_graphic_window_t4_ParamLimits

0x3492,	// (0x000343ed) popup_snote_single_graphic_window_t4

0x34c6,	// (0x00034421) popup_snote_single_graphic_window_t5_ParamLimits

0x34c6,	// (0x00034421) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x000404ec) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x000404ec) popup_snote_single_graphic_window_t

0x6487,	// (0x000373e2) grid_graphic_popup_pane_ParamLimits

0x6487,	// (0x000373e2) grid_graphic_popup_pane

0x64b1,	// (0x0003740c) listscroll_popup_graphic_pane_g1_ParamLimits

0x64b1,	// (0x0003740c) listscroll_popup_graphic_pane_g1

0xdbc4,	// (0x0003eb1f) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbc4,	// (0x0003eb1f) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x000408e1) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x000408e1) listscroll_popup_graphic_pane_g

0x64d9,	// (0x00037434) scroll_pane_cp5

0xdb81,	// (0x0003eadc) cell_graphic_popup_pane_ParamLimits

0xdb81,	// (0x0003eadc) cell_graphic_popup_pane

0x63f9,	// (0x00037354) cell_graphic_popup_pane_g1

0x6401,	// (0x0003735c) cell_graphic_popup_pane_g2

0x3319,	// (0x00034274) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x000408da) cell_graphic_popup_pane_g

0x640a,	// (0x00037365) cell_graphic_popup_pane_t2

0x3322,	// (0x0003427d) grid_highlight_pane_cp3

0x3507,	// (0x00034462) list_gen_pane_ParamLimits

0x3507,	// (0x00034462) list_gen_pane

0x3539,	// (0x00034494) scroll_pane

0xdb38,	// (0x0003ea93) bg_list_pane_g1_ParamLimits

0xdb38,	// (0x0003ea93) bg_list_pane_g1

0x636e,	// (0x000372c9) bg_list_pane_g2_ParamLimits

0x636e,	// (0x000372c9) bg_list_pane_g2

0x6383,	// (0x000372de) bg_list_pane_g3_ParamLimits

0x6383,	// (0x000372de) bg_list_pane_g3

0x6397,	// (0x000372f2) bg_list_pane_g4_ParamLimits

0x6397,	// (0x000372f2) bg_list_pane_g4

0xdb55,	// (0x0003eab0) bg_list_pane_g5_ParamLimits

0xdb55,	// (0x0003eab0) bg_list_pane_g5

0x0004,

0xf974,	// (0x000408cf) bg_list_pane_g_ParamLimits

0xf974,	// (0x000408cf) bg_list_pane_g

0xdaef,	// (0x0003ea4a) list_double2_graphic_large_graphic_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double2_graphic_large_graphic_pane

0xdaef,	// (0x0003ea4a) list_double2_graphic_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double2_graphic_pane

0xdaef,	// (0x0003ea4a) list_double2_large_graphic_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double2_large_graphic_pane

0xdaef,	// (0x0003ea4a) list_double2_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double2_pane

0xdaef,	// (0x0003ea4a) list_double_graphic_heading_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double_graphic_heading_pane

0xdaef,	// (0x0003ea4a) list_double_graphic_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double_graphic_pane

0xdaef,	// (0x0003ea4a) list_double_heading_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double_heading_pane

0xdaef,	// (0x0003ea4a) list_double_large_graphic_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double_large_graphic_pane

0xdaef,	// (0x0003ea4a) list_double_number_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double_number_pane

0xdaef,	// (0x0003ea4a) list_double_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double_pane

0xdaef,	// (0x0003ea4a) list_double_time_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_double_time_pane

0xdaef,	// (0x0003ea4a) list_setting_number_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_setting_number_pane

0xdaef,	// (0x0003ea4a) list_setting_pane_ParamLimits

0xdaef,	// (0x0003ea4a) list_setting_pane

0xc759,	// (0x0003d6b4) list_single_2graphic_pane_ParamLimits

0xc759,	// (0x0003d6b4) list_single_2graphic_pane

0xc759,	// (0x0003d6b4) list_single_graphic_heading_pane_ParamLimits

0xc759,	// (0x0003d6b4) list_single_graphic_heading_pane

0xc759,	// (0x0003d6b4) list_single_graphic_pane_ParamLimits

0xc759,	// (0x0003d6b4) list_single_graphic_pane

0xc759,	// (0x0003d6b4) list_single_heading_pane_ParamLimits

0xc759,	// (0x0003d6b4) list_single_heading_pane

0xdb25,	// (0x0003ea80) list_single_large_graphic_pane_ParamLimits

0xdb25,	// (0x0003ea80) list_single_large_graphic_pane

0xc759,	// (0x0003d6b4) list_single_number_heading_pane_ParamLimits

0xc759,	// (0x0003d6b4) list_single_number_heading_pane

0xc759,	// (0x0003d6b4) list_single_number_pane_ParamLimits

0xc759,	// (0x0003d6b4) list_single_number_pane

0xc759,	// (0x0003d6b4) list_single_pane_ParamLimits

0xc759,	// (0x0003d6b4) list_single_pane

0x2c59,	// (0x00033bb4) list_highlight_pane_cp1

0x104d,	// (0x00031fa8) list_single_pane_g1_ParamLimits

0x104d,	// (0x00031fa8) list_single_pane_g1

0x1059,	// (0x00031fb4) list_single_pane_g2_ParamLimits

0x1059,	// (0x00031fb4) list_single_pane_g2

0x0001,

0xf5a3,	// (0x000404fe) list_single_pane_g_ParamLimits

0xf5a3,	// (0x000404fe) list_single_pane_g

0x16dc,	// (0x00032637) list_single_pane_t1_ParamLimits

0x16dc,	// (0x00032637) list_single_pane_t1

0x104d,	// (0x00031fa8) list_single_number_pane_g1_ParamLimits

0x104d,	// (0x00031fa8) list_single_number_pane_g1

0x1059,	// (0x00031fb4) list_single_number_pane_g2_ParamLimits

0x1059,	// (0x00031fb4) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x000404fe) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x000404fe) list_single_number_pane_g

0x0fe2,	// (0x00031f3d) list_single_number_pane_t1_ParamLimits

0x0fe2,	// (0x00031f3d) list_single_number_pane_t1

0xc71b,	// (0x0003d676) list_single_number_pane_t2_ParamLimits

0xc71b,	// (0x0003d676) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00040890) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00040890) list_single_number_pane_t

0xb854,	// (0x0003c7af) list_single_graphic_pane_g1_ParamLimits

0xb854,	// (0x0003c7af) list_single_graphic_pane_g1

0x104d,	// (0x00031fa8) list_single_graphic_pane_g2_ParamLimits

0x104d,	// (0x00031fa8) list_single_graphic_pane_g2

0x1059,	// (0x00031fb4) list_single_graphic_pane_g3_ParamLimits

0x1059,	// (0x00031fb4) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x000404f7) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x000404f7) list_single_graphic_pane_g

0xb860,	// (0x0003c7bb) list_single_graphic_pane_t1_ParamLimits

0xb860,	// (0x0003c7bb) list_single_graphic_pane_t1

0x104d,	// (0x00031fa8) list_single_heading_pane_g1_ParamLimits

0x104d,	// (0x00031fa8) list_single_heading_pane_g1

0x1059,	// (0x00031fb4) list_single_heading_pane_g2_ParamLimits

0x1059,	// (0x00031fb4) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x000404fe) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x000404fe) list_single_heading_pane_g

0x168c,	// (0x000325e7) list_single_heading_pane_t1_ParamLimits

0x168c,	// (0x000325e7) list_single_heading_pane_t1

0xb876,	// (0x0003c7d1) list_single_heading_pane_t2_ParamLimits

0xb876,	// (0x0003c7d1) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00040503) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00040503) list_single_heading_pane_t

0x104d,	// (0x00031fa8) list_single_number_heading_pane_g1_ParamLimits

0x104d,	// (0x00031fa8) list_single_number_heading_pane_g1

0x1059,	// (0x00031fb4) list_single_number_heading_pane_g2_ParamLimits

0x1059,	// (0x00031fb4) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x000404fe) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x000404fe) list_single_number_heading_pane_g

0x168c,	// (0x000325e7) list_single_number_heading_pane_t1_ParamLimits

0x168c,	// (0x000325e7) list_single_number_heading_pane_t1

0xb888,	// (0x0003c7e3) list_single_number_heading_pane_t2_ParamLimits

0xb888,	// (0x0003c7e3) list_single_number_heading_pane_t2

0x16b8,	// (0x00032613) list_single_number_heading_pane_t3_ParamLimits

0x16b8,	// (0x00032613) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00040508) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00040508) list_single_number_heading_pane_t

0x0fbe,	// (0x00031f19) list_single_graphic_heading_pane_g1_ParamLimits

0x0fbe,	// (0x00031f19) list_single_graphic_heading_pane_g1

0xb89a,	// (0x0003c7f5) list_single_graphic_heading_pane_g4_ParamLimits

0xb89a,	// (0x0003c7f5) list_single_graphic_heading_pane_g4

0x1059,	// (0x00031fb4) list_single_graphic_heading_pane_g5_ParamLimits

0x1059,	// (0x00031fb4) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0004050f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0004050f) list_single_graphic_heading_pane_g

0x168c,	// (0x000325e7) list_single_graphic_heading_pane_t1_ParamLimits

0x168c,	// (0x000325e7) list_single_graphic_heading_pane_t1

0xb8ab,	// (0x0003c806) list_single_graphic_heading_pane_t2_ParamLimits

0xb8ab,	// (0x0003c806) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00040516) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00040516) list_single_graphic_heading_pane_t

0x16f2,	// (0x0003264d) list_single_large_graphic_pane_g1_ParamLimits

0x16f2,	// (0x0003264d) list_single_large_graphic_pane_g1

0xf10c,	// (0x00040067) list_single_large_graphic_pane_g2_ParamLimits

0xf10c,	// (0x00040067) list_single_large_graphic_pane_g2

0xf118,	// (0x00040073) list_single_large_graphic_pane_g3_ParamLimits

0xf118,	// (0x00040073) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0004051b) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0004051b) list_single_large_graphic_pane_g

0x535c,	// (0x000362b7) wait_border_pane_g2_copy1

0xb8bd,	// (0x0003c818) list_single_large_graphic_pane_g4_cp2

0x16fe,	// (0x00032659) list_single_large_graphic_pane_t1_ParamLimits

0x16fe,	// (0x00032659) list_single_large_graphic_pane_t1

0xb8c5,	// (0x0003c820) list_double_pane_g1_ParamLimits

0xb8c5,	// (0x0003c820) list_double_pane_g1

0xb8d1,	// (0x0003c82c) list_double_pane_g2_ParamLimits

0xb8d1,	// (0x0003c82c) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00040522) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00040522) list_double_pane_g

0xb8dd,	// (0x0003c838) list_double_pane_t1_ParamLimits

0xb8dd,	// (0x0003c838) list_double_pane_t1

0xb8f3,	// (0x0003c84e) list_double_pane_t2_ParamLimits

0xb8f3,	// (0x0003c84e) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00040527) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00040527) list_double_pane_t

0xb905,	// (0x0003c860) list_double2_pane_g1_ParamLimits

0xb905,	// (0x0003c860) list_double2_pane_g1

0xb916,	// (0x0003c871) list_double2_pane_g2_ParamLimits

0xb916,	// (0x0003c871) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0004052c) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0004052c) list_double2_pane_g

0xb922,	// (0x0003c87d) list_double2_pane_t1_ParamLimits

0xb922,	// (0x0003c87d) list_double2_pane_t1

0xb938,	// (0x0003c893) list_double2_pane_t2_ParamLimits

0xb938,	// (0x0003c893) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00040531) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00040531) list_double2_pane_t

0xb8c5,	// (0x0003c820) list_double_number_pane_g1_ParamLimits

0xb8c5,	// (0x0003c820) list_double_number_pane_g1

0xb8d1,	// (0x0003c82c) list_double_number_pane_g2_ParamLimits

0xb8d1,	// (0x0003c82c) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00040522) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00040522) list_double_number_pane_g

0xb94a,	// (0x0003c8a5) list_double_number_pane_t1_ParamLimits

0xb94a,	// (0x0003c8a5) list_double_number_pane_t1

0xb95c,	// (0x0003c8b7) list_double_number_pane_t2_ParamLimits

0xb95c,	// (0x0003c8b7) list_double_number_pane_t2

0xb972,	// (0x0003c8cd) list_double_number_pane_t3_ParamLimits

0xb972,	// (0x0003c8cd) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00040536) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00040536) list_double_number_pane_t

0xb984,	// (0x0003c8df) list_double_graphic_pane_g1_ParamLimits

0xb984,	// (0x0003c8df) list_double_graphic_pane_g1

0xb990,	// (0x0003c8eb) list_double_graphic_pane_g2_ParamLimits

0xb990,	// (0x0003c8eb) list_double_graphic_pane_g2

0xb99f,	// (0x0003c8fa) list_double_graphic_pane_g3_ParamLimits

0xb99f,	// (0x0003c8fa) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0004053d) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0004053d) list_double_graphic_pane_g

0xb9b7,	// (0x0003c912) list_double_graphic_pane_t1_ParamLimits

0xb9b7,	// (0x0003c912) list_double_graphic_pane_t1

0xb9cd,	// (0x0003c928) list_double_graphic_pane_t2_ParamLimits

0xb9cd,	// (0x0003c928) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00040546) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00040546) list_double_graphic_pane_t

0xb9df,	// (0x0003c93a) list_double2_graphic_pane_g1_ParamLimits

0xb9df,	// (0x0003c93a) list_double2_graphic_pane_g1

0xb9eb,	// (0x0003c946) list_double2_graphic_pane_g2_ParamLimits

0xb9eb,	// (0x0003c946) list_double2_graphic_pane_g2

0xb916,	// (0x0003c871) list_double2_graphic_pane_g3_ParamLimits

0xb916,	// (0x0003c871) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0004054b) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0004054b) list_double2_graphic_pane_g

0xb9f7,	// (0x0003c952) list_double2_graphic_pane_t1_ParamLimits

0xb9f7,	// (0x0003c952) list_double2_graphic_pane_t1

0xba0d,	// (0x0003c968) list_double2_graphic_pane_t2_ParamLimits

0xba0d,	// (0x0003c968) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00040552) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00040552) list_double2_graphic_pane_t

0xba1f,	// (0x0003c97a) list_double_large_graphic_pane_g1_ParamLimits

0xba1f,	// (0x0003c97a) list_double_large_graphic_pane_g1

0xba3e,	// (0x0003c999) list_double_large_graphic_pane_g2_ParamLimits

0xba3e,	// (0x0003c999) list_double_large_graphic_pane_g2

0xb8d1,	// (0x0003c82c) list_double_large_graphic_pane_g3_ParamLimits

0xb8d1,	// (0x0003c82c) list_double_large_graphic_pane_g3

0xba4f,	// (0x0003c9aa) list_double_large_graphic_pane_g4_ParamLimits

0xba4f,	// (0x0003c9aa) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00040557) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00040557) list_double_large_graphic_pane_g

0xba62,	// (0x0003c9bd) list_double_large_graphic_pane_t1_ParamLimits

0xba62,	// (0x0003c9bd) list_double_large_graphic_pane_t1

0xba7b,	// (0x0003c9d6) list_double_large_graphic_pane_t2_ParamLimits

0xba7b,	// (0x0003c9d6) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00040562) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00040562) list_double_large_graphic_pane_t

0xba8d,	// (0x0003c9e8) list_double2_large_graphic_pane_g1_ParamLimits

0xba8d,	// (0x0003c9e8) list_double2_large_graphic_pane_g1

0xb905,	// (0x0003c860) list_double2_large_graphic_pane_g2_ParamLimits

0xb905,	// (0x0003c860) list_double2_large_graphic_pane_g2

0xb916,	// (0x0003c871) list_double2_large_graphic_pane_g3_ParamLimits

0xb916,	// (0x0003c871) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00040567) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00040567) list_double2_large_graphic_pane_g

0xba99,	// (0x0003c9f4) list_double2_large_graphic_pane_t1_ParamLimits

0xba99,	// (0x0003c9f4) list_double2_large_graphic_pane_t1

0xbaaf,	// (0x0003ca0a) list_double2_large_graphic_pane_t2_ParamLimits

0xbaaf,	// (0x0003ca0a) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0004056e) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0004056e) list_double2_large_graphic_pane_t

0xbac1,	// (0x0003ca1c) list_double_heading_pane_g1_ParamLimits

0xbac1,	// (0x0003ca1c) list_double_heading_pane_g1

0xf139,	// (0x00040094) list_double_heading_pane_g2_ParamLimits

0xf139,	// (0x00040094) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00040573) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00040573) list_double_heading_pane_g

0xbad2,	// (0x0003ca2d) list_double_heading_pane_t1_ParamLimits

0xbad2,	// (0x0003ca2d) list_double_heading_pane_t1

0xb938,	// (0x0003c893) list_double_heading_pane_t2_ParamLimits

0xb938,	// (0x0003c893) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00040578) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00040578) list_double_heading_pane_t

0xb9df,	// (0x0003c93a) list_double_graphic_heading_pane_g1_ParamLimits

0xb9df,	// (0x0003c93a) list_double_graphic_heading_pane_g1

0xbac1,	// (0x0003ca1c) list_double_graphic_heading_pane_g2_ParamLimits

0xbac1,	// (0x0003ca1c) list_double_graphic_heading_pane_g2

0xf139,	// (0x00040094) list_double_graphic_heading_pane_g3_ParamLimits

0xf139,	// (0x00040094) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0004057d) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0004057d) list_double_graphic_heading_pane_g

0xbae8,	// (0x0003ca43) list_double_graphic_heading_pane_t1_ParamLimits

0xbae8,	// (0x0003ca43) list_double_graphic_heading_pane_t1

0xba0d,	// (0x0003c968) list_double_graphic_heading_pane_t2_ParamLimits

0xba0d,	// (0x0003c968) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00040584) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00040584) list_double_graphic_heading_pane_t

0xba3e,	// (0x0003c999) list_double_time_pane_g1_ParamLimits

0xba3e,	// (0x0003c999) list_double_time_pane_g1

0xb8d1,	// (0x0003c82c) list_double_time_pane_g2_ParamLimits

0xb8d1,	// (0x0003c82c) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00040589) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00040589) list_double_time_pane_g

0xbafe,	// (0x0003ca59) list_double_time_pane_t1_ParamLimits

0xbafe,	// (0x0003ca59) list_double_time_pane_t1

0xbb14,	// (0x0003ca6f) list_double_time_pane_t2_ParamLimits

0xbb14,	// (0x0003ca6f) list_double_time_pane_t2

0xbb26,	// (0x0003ca81) list_double_time_pane_t3_ParamLimits

0xbb26,	// (0x0003ca81) list_double_time_pane_t3

0xbb38,	// (0x0003ca93) list_double_time_pane_t4_ParamLimits

0xbb38,	// (0x0003ca93) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0004058e) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0004058e) list_double_time_pane_t

0xb9eb,	// (0x0003c946) list_setting_pane_g1_ParamLimits

0xb9eb,	// (0x0003c946) list_setting_pane_g1

0xb916,	// (0x0003c871) list_setting_pane_g2_ParamLimits

0xb916,	// (0x0003c871) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00040597) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00040597) list_setting_pane_g

0xbb4a,	// (0x0003caa5) list_setting_pane_t1_ParamLimits

0xbb4a,	// (0x0003caa5) list_setting_pane_t1

0xbb64,	// (0x0003cabf) list_setting_pane_t2_ParamLimits

0xbb64,	// (0x0003cabf) list_setting_pane_t2

0x0002,

0xf641,	// (0x0004059c) list_setting_pane_t_ParamLimits

0xf641,	// (0x0004059c) list_setting_pane_t

0xbba3,	// (0x0003cafe) set_value_pane_cp_ParamLimits

0xbba3,	// (0x0003cafe) set_value_pane_cp

0xbbaf,	// (0x0003cb0a) list_setting_number_pane_g1_ParamLimits

0xbbaf,	// (0x0003cb0a) list_setting_number_pane_g1

0xbbbb,	// (0x0003cb16) list_setting_number_pane_g2_ParamLimits

0xbbbb,	// (0x0003cb16) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x000405a3) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x000405a3) list_setting_number_pane_g

0xbbc7,	// (0x0003cb22) list_setting_number_pane_t1_ParamLimits

0xbbc7,	// (0x0003cb22) list_setting_number_pane_t1

0xbbe0,	// (0x0003cb3b) list_setting_number_pane_t2_ParamLimits

0xbbe0,	// (0x0003cb3b) list_setting_number_pane_t2

0xbbfa,	// (0x0003cb55) list_setting_number_pane_t3_ParamLimits

0xbbfa,	// (0x0003cb55) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x000405a8) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x000405a8) list_setting_number_pane_t

0xbba3,	// (0x0003cafe) set_value_pane_ParamLimits

0xbba3,	// (0x0003cafe) set_value_pane

0x356d,	// (0x000344c8) bg_set_opt_pane_ParamLimits

0x356d,	// (0x000344c8) bg_set_opt_pane

0xf145,	// (0x000400a0) set_value_pane_t1

0x358e,	// (0x000344e9) slider_set_pane_cp3

0x3597,	// (0x000344f2) volume_small_pane_cp

0x35a0,	// (0x000344fb) list_form_gen_pane

0x35a9,	// (0x00034504) scroll_pane_cp8

0xbc3d,	// (0x0003cb98) form_field_data_pane_ParamLimits

0xbc3d,	// (0x0003cb98) form_field_data_pane

0xbc54,	// (0x0003cbaf) form_field_data_wide_pane_ParamLimits

0xbc54,	// (0x0003cbaf) form_field_data_wide_pane

0xbc74,	// (0x0003cbcf) form_field_popup_pane_ParamLimits

0xbc74,	// (0x0003cbcf) form_field_popup_pane

0xbc94,	// (0x0003cbef) form_field_popup_wide_pane_ParamLimits

0xbc94,	// (0x0003cbef) form_field_popup_wide_pane

0x0169,	// (0x000310c4) form_field_slider_pane_ParamLimits

0x0169,	// (0x000310c4) form_field_slider_pane

0x017c,	// (0x000310d7) form_field_slider_wide_pane_ParamLimits

0x017c,	// (0x000310d7) form_field_slider_wide_pane

0x35ba,	// (0x00034515) data_form_pane

0xbcb5,	// (0x0003cc10) form_field_data_pane_t1

0x35c6,	// (0x00034521) input_focus_pane

0x01b1,	// (0x0003110c) data_form_wide_pane

0x01ce,	// (0x00031129) form_field_data_wide_pane_t1

0x3337,	// (0x00034292) input_focus_pane_cp6

0xbccf,	// (0x0003cc2a) form_field_popup_pane_t1

0x35c6,	// (0x00034521) input_focus_pane_cp7

0x35f4,	// (0x0003454f) list_form_pane

0x0210,	// (0x0003116b) form_field_popup_wide_pane_t1

0x35c6,	// (0x00034521) input_focus_pane_cp8

0x3600,	// (0x0003455b) list_form_wide_pane

0xbcf1,	// (0x0003cc4c) form_field_slider_pane_t1_ParamLimits

0xbcf1,	// (0x0003cc4c) form_field_slider_pane_t1

0xbd09,	// (0x0003cc64) form_field_slider_pane_t2_ParamLimits

0xbd09,	// (0x0003cc64) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x000405b8) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x000405b8) form_field_slider_pane_t

0x2fb4,	// (0x00033f0f) input_focus_pane_cp9_ParamLimits

0x2fb4,	// (0x00033f0f) input_focus_pane_cp9

0xbd1e,	// (0x0003cc79) slider_cont_pane_ParamLimits

0xbd1e,	// (0x0003cc79) slider_cont_pane

0x360c,	// (0x00034567) form_field_slider_wide_pane_t1_ParamLimits

0x360c,	// (0x00034567) form_field_slider_wide_pane_t1

0x026c,	// (0x000311c7) form_field_slider_wide_pane_t2_ParamLimits

0x026c,	// (0x000311c7) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x000405bd) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x000405bd) form_field_slider_wide_pane_t

0x2fb4,	// (0x00033f0f) input_focus_pane_cp10_ParamLimits

0x2fb4,	// (0x00033f0f) input_focus_pane_cp10

0xbd32,	// (0x0003cc8d) slider_cont_pane_cp1_ParamLimits

0xbd32,	// (0x0003cc8d) slider_cont_pane_cp1

0xbd46,	// (0x0003cca1) slider_form_pane_cp

0x361e,	// (0x00034579) input_focus_pane_g1

0x3626,	// (0x00034581) input_focus_pane_g2

0x362e,	// (0x00034589) input_focus_pane_g3

0x3636,	// (0x00034591) input_focus_pane_g4

0x363e,	// (0x00034599) input_focus_pane_g5

0x3646,	// (0x000345a1) input_focus_pane_g6

0x364e,	// (0x000345a9) input_focus_pane_g7

0x3656,	// (0x000345b1) input_focus_pane_g8

0x365e,	// (0x000345b9) input_focus_pane_g9

0xe005,	// (0x0003ef60) input_focus_pane_g10

0x0009,

0xf667,	// (0x000405c2) input_focus_pane_g

0x5365,	// (0x000362c0) wait_border_pane_g3_copy1

0xbd4e,	// (0x0003cca9) data_form_pane_t1

0xe005,	// (0x0003ef60) wait_anim_pane_g1_copy1

0xc72d,	// (0x0003d688) data_form_wide_pane_t1

0xbd68,	// (0x0003ccc3) list_form_graphic_pane_cp_ParamLimits

0xbd68,	// (0x0003ccc3) list_form_graphic_pane_cp

0x6285,	// (0x000371e0) slider_form_pane_g1

0x628e,	// (0x000371e9) slider_form_pane_g2

0x0006,

0xf965,	// (0x000408c0) slider_form_pane_g

0xbd7a,	// (0x0003ccd5) list_form_graphic_pane_ParamLimits

0xbd7a,	// (0x0003ccd5) list_form_graphic_pane

0x02ea,	// (0x00031245) list_form_graphic_pane_g1

0x02f2,	// (0x0003124d) list_form_graphic_pane_t1_ParamLimits

0x02f2,	// (0x0003124d) list_form_graphic_pane_t1

0x2d39,	// (0x00033c94) list_highlight_pane_cp5_ParamLimits

0x2d39,	// (0x00033c94) list_highlight_pane_cp5

0xbd8d,	// (0x0003cce8) find_pane_g1

0x3666,	// (0x000345c1) input_find_pane

0xbd96,	// (0x0003ccf1) input_find_pane_g1_ParamLimits

0xbd96,	// (0x0003ccf1) input_find_pane_g1

0xbda2,	// (0x0003ccfd) input_find_pane_t1_ParamLimits

0xbda2,	// (0x0003ccfd) input_find_pane_t1

0xbdb7,	// (0x0003cd12) input_find_pane_t2_ParamLimits

0xbdb7,	// (0x0003cd12) input_find_pane_t2

0x0001,

0xf67c,	// (0x000405d7) input_find_pane_t_ParamLimits

0xf67c,	// (0x000405d7) input_find_pane_t

0x366f,	// (0x000345ca) input_focus_pane_cp5_ParamLimits

0x366f,	// (0x000345ca) input_focus_pane_cp5

0x368e,	// (0x000345e9) bg_popup_window_pane_cp2_ParamLimits

0x368e,	// (0x000345e9) bg_popup_window_pane_cp2

0x369b,	// (0x000345f6) listscroll_menu_pane_ParamLimits

0x369b,	// (0x000345f6) listscroll_menu_pane

0xd07e,	// (0x0003dfd9) popup_submenu_window_ParamLimits

0xd07e,	// (0x0003dfd9) popup_submenu_window

0x36d3,	// (0x0003462e) find_popup_pane_g1

0x36db,	// (0x00034636) input_popup_find_pane_cp

0x36e5,	// (0x00034640) input_focus_pane_cp4_ParamLimits

0x36e5,	// (0x00034640) input_focus_pane_cp4

0x36ff,	// (0x0003465a) input_popup_find_pane_t1_ParamLimits

0x36ff,	// (0x0003465a) input_popup_find_pane_t1

0x2c59,	// (0x00033bb4) bg_popup_sub_pane_cp

0x372d,	// (0x00034688) listscroll_popup_sub_pane

0x3735,	// (0x00034690) list_submenu_pane_ParamLimits

0x3735,	// (0x00034690) list_submenu_pane

0x3746,	// (0x000346a1) scroll_pane_cp4

0x374e,	// (0x000346a9) list_single_popup_submenu_pane_ParamLimits

0x374e,	// (0x000346a9) list_single_popup_submenu_pane

0x3762,	// (0x000346bd) list_single_popup_submenu_pane_g1

0x376a,	// (0x000346c5) list_single_popup_submenu_pane_t1_ParamLimits

0x376a,	// (0x000346c5) list_single_popup_submenu_pane_t1

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp1_ParamLimits

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp1

0x377f,	// (0x000346da) tabs_2_active_pane_g1

0xd0b8,	// (0x0003e013) tabs_2_active_pane_t1

0x2fb4,	// (0x00033f0f) bg_passive_tab_pane_cp1_ParamLimits

0x2fb4,	// (0x00033f0f) bg_passive_tab_pane_cp1

0x377f,	// (0x000346da) tabs_2_passive_pane_g1

0xd0b8,	// (0x0003e013) tabs_2_passive_pane_t1

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp4

0xd0ca,	// (0x0003e025) tabs_2_long_active_pane_t1

0x4816,	// (0x00035771) bg_passive_tab_pane_cp4

0x1025,	// (0x00031f80) list_single_midp_graphic_pane_g4_ParamLimits

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp5

0xd0dd,	// (0x0003e038) tabs_3_long_active_pane_t1

0x4816,	// (0x00035771) bg_passive_tab_pane_cp5

0x1025,	// (0x00031f80) list_single_midp_graphic_pane_g4

0x2d39,	// (0x00033c94) bg_popup_window_pane_cp13_ParamLimits

0x2d39,	// (0x00033c94) bg_popup_window_pane_cp13

0x37e1,	// (0x0003473c) listscroll_popup_fast_pane_ParamLimits

0x37e1,	// (0x0003473c) listscroll_popup_fast_pane

0x37f0,	// (0x0003474b) grid_popup_fast_pane_ParamLimits

0x37f0,	// (0x0003474b) grid_popup_fast_pane

0x3802,	// (0x0003475d) scroll_pane_cp9_ParamLimits

0x3802,	// (0x0003475d) scroll_pane_cp9

0x7bd0,	// (0x00038b2b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7bd0,	// (0x00038b2b) list_single_graphic_hl_pane_t1_cp2

0x3826,	// (0x00034781) input_focus_pane_cp20_ParamLimits

0x3826,	// (0x00034781) input_focus_pane_cp20

0x3834,	// (0x0003478f) query_popup_data_pane_t1_ParamLimits

0x3834,	// (0x0003478f) query_popup_data_pane_t1

0x3847,	// (0x000347a2) query_popup_data_pane_t2_ParamLimits

0x3847,	// (0x000347a2) query_popup_data_pane_t2

0x388d,	// (0x000347e8) query_popup_data_pane_t3_ParamLimits

0x388d,	// (0x000347e8) query_popup_data_pane_t3

0x38ce,	// (0x00034829) query_popup_data_pane_t4_ParamLimits

0x38ce,	// (0x00034829) query_popup_data_pane_t4

0x390a,	// (0x00034865) query_popup_data_pane_t5_ParamLimits

0x390a,	// (0x00034865) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x000405dc) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x000405dc) query_popup_data_pane_t

0x361e,	// (0x00034579) bg_set_opt_pane_g1

0x3626,	// (0x00034581) bg_set_opt_pane_g2

0x362e,	// (0x00034589) bg_set_opt_pane_g3

0x3636,	// (0x00034591) bg_set_opt_pane_g4

0x363e,	// (0x00034599) bg_set_opt_pane_g5

0x3646,	// (0x000345a1) bg_set_opt_pane_g6

0x364e,	// (0x000345a9) bg_set_opt_pane_g7

0x3656,	// (0x000345b1) bg_set_opt_pane_g8

0x365e,	// (0x000345b9) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x000405e7) bg_set_opt_pane_g

0x066d,	// (0x000315c8) control_top_pane_stacon_ParamLimits

0x066d,	// (0x000315c8) control_top_pane_stacon

0x06c0,	// (0x0003161b) signal_pane_stacon_ParamLimits

0x06c0,	// (0x0003161b) signal_pane_stacon

0x417f,	// (0x000350da) stacon_top_pane_g1_ParamLimits

0x417f,	// (0x000350da) stacon_top_pane_g1

0x06e5,	// (0x00031640) title_pane_stacon_ParamLimits

0x06e5,	// (0x00031640) title_pane_stacon

0x070f,	// (0x0003166a) uni_indicator_pane_stacon_ParamLimits

0x070f,	// (0x0003166a) uni_indicator_pane_stacon

0x0724,	// (0x0003167f) battery_pane_stacon_ParamLimits

0x0724,	// (0x0003167f) battery_pane_stacon

0x0768,	// (0x000316c3) control_bottom_pane_stacon_ParamLimits

0x0768,	// (0x000316c3) control_bottom_pane_stacon

0x078b,	// (0x000316e6) navi_pane_stacon_ParamLimits

0x078b,	// (0x000316e6) navi_pane_stacon

0x41a1,	// (0x000350fc) stacon_bottom_pane_g1_ParamLimits

0x41a1,	// (0x000350fc) stacon_bottom_pane_g1

0x0346,	// (0x000312a1) aid_levels_signal_lsc_ParamLimits

0x0346,	// (0x000312a1) aid_levels_signal_lsc

0x035c,	// (0x000312b7) signal_pane_stacon_g1_ParamLimits

0x035c,	// (0x000312b7) signal_pane_stacon_g1

0x0370,	// (0x000312cb) signal_pane_stacon_g2_ParamLimits

0x0370,	// (0x000312cb) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x000405fa) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x000405fa) signal_pane_stacon_g

0x03a5,	// (0x00031300) title_pane_stacon_t1_ParamLimits

0x03a5,	// (0x00031300) title_pane_stacon_t1

0x3bb8,	// (0x00034b13) uni_indicator_pane_stacon_g1

0x3bc2,	// (0x00034b1d) uni_indicator_pane_stacon_g2

0x3bcc,	// (0x00034b27) uni_indicator_pane_stacon_g3

0x3bd6,	// (0x00034b31) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00040606) uni_indicator_pane_stacon_g

0x03ca,	// (0x00031325) control_top_pane_stacon_g1

0x03d2,	// (0x0003132d) control_top_pane_stacon_t1_ParamLimits

0x03d2,	// (0x0003132d) control_top_pane_stacon_t1

0x0409,	// (0x00031364) aid_levels_battery_lsc_ParamLimits

0x0409,	// (0x00031364) aid_levels_battery_lsc

0x0420,	// (0x0003137b) battery_pane_stacon_g1_ParamLimits

0x0420,	// (0x0003137b) battery_pane_stacon_g1

0x0433,	// (0x0003138e) battery_pane_stacon_g2_ParamLimits

0x0433,	// (0x0003138e) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0004060f) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0004060f) battery_pane_stacon_g

0x0471,	// (0x000313cc) navi_icon_pane_stacon

0x0485,	// (0x000313e0) navi_navi_pane_stacon

0x0471,	// (0x000313cc) navi_text_pane_stacon

0x03ca,	// (0x00031325) control_bottom_pane_stacon_g1

0x0499,	// (0x000313f4) control_bottom_pane_stacon_t1_ParamLimits

0x0499,	// (0x000313f4) control_bottom_pane_stacon_t1

0xd0ef,	// (0x0003e04a) grid_app_pane_ParamLimits

0xd0ef,	// (0x0003e04a) grid_app_pane

0xd127,	// (0x0003e082) scroll_pane_cp15_ParamLimits

0xd127,	// (0x0003e082) scroll_pane_cp15

0xd13c,	// (0x0003e097) cell_app_pane_ParamLimits

0xd13c,	// (0x0003e097) cell_app_pane

0xd181,	// (0x0003e0dc) cell_app_pane_g1_ParamLimits

0xd181,	// (0x0003e0dc) cell_app_pane_g1

0x3c7b,	// (0x00034bd6) cell_app_pane_g2_ParamLimits

0x3c7b,	// (0x00034bd6) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00040614) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00040614) cell_app_pane_g

0xd1a5,	// (0x0003e100) cell_app_pane_t1_ParamLimits

0xd1a5,	// (0x0003e100) cell_app_pane_t1

0x3c9e,	// (0x00034bf9) grid_highlight_pane_ParamLimits

0x3c9e,	// (0x00034bf9) grid_highlight_pane

0x361e,	// (0x00034579) cell_highlight_pane_g1

0x3626,	// (0x00034581) cell_highlight_pane_g2

0x362e,	// (0x00034589) cell_highlight_pane_g3

0x3636,	// (0x00034591) cell_highlight_pane_g4

0x363e,	// (0x00034599) cell_highlight_pane_g5

0x3646,	// (0x000345a1) cell_highlight_pane_g6

0x364e,	// (0x000345a9) cell_highlight_pane_g7

0x3656,	// (0x000345b1) cell_highlight_pane_g8

0x365e,	// (0x000345b9) cell_highlight_pane_g9

0xe005,	// (0x0003ef60) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x000405c2) cell_highlight_pane_g

0x3caf,	// (0x00034c0a) bg_scroll_pane

0x04e3,	// (0x0003143e) scroll_handle_pane

0x3cf6,	// (0x00034c51) scroll_bg_pane_g1

0x3d0b,	// (0x00034c66) scroll_bg_pane_g2

0x3d23,	// (0x00034c7e) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00040619) scroll_bg_pane_g

0x3d38,	// (0x00034c93) scroll_handle_focus_pane_ParamLimits

0x3d38,	// (0x00034c93) scroll_handle_focus_pane

0x3cf6,	// (0x00034c51) scroll_handle_pane_g1

0x3d45,	// (0x00034ca0) scroll_handle_pane_g2

0x3d23,	// (0x00034c7e) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00040620) scroll_handle_pane_g

0x36e5,	// (0x00034640) bg_popup_sub_pane_cp21_ParamLimits

0x36e5,	// (0x00034640) bg_popup_sub_pane_cp21

0x3d59,	// (0x00034cb4) popup_fep_japan_predictive_window_t1_ParamLimits

0x3d59,	// (0x00034cb4) popup_fep_japan_predictive_window_t1

0x3d73,	// (0x00034cce) popup_fep_japan_predictive_window_t2_ParamLimits

0x3d73,	// (0x00034cce) popup_fep_japan_predictive_window_t2

0x3da6,	// (0x00034d01) popup_fep_japan_predictive_window_t3_ParamLimits

0x3da6,	// (0x00034d01) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00040627) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00040627) popup_fep_japan_predictive_window_t

0x2c59,	// (0x00033bb4) bg_popup_sub_pane_cp23

0x3ddd,	// (0x00034d38) listscroll_japin_cand_pane

0x3de5,	// (0x00034d40) popup_fep_japan_candidate_window_t1

0x3df3,	// (0x00034d4e) candidate_pane_ParamLimits

0x3df3,	// (0x00034d4e) candidate_pane

0x3e05,	// (0x00034d60) scroll_pane_cp30

0x3e0d,	// (0x00034d68) list_single_popup_jap_candidate_pane_ParamLimits

0x3e0d,	// (0x00034d68) list_single_popup_jap_candidate_pane

0x2c59,	// (0x00033bb4) list_highlight_pane_cp30

0x3e22,	// (0x00034d7d) list_single_popup_jap_candidate_pane_t1

0x3e31,	// (0x00034d8c) level_1_signal

0x3e43,	// (0x00034d9e) level_2_signal

0x3e56,	// (0x00034db1) level_3_signal

0x3e69,	// (0x00034dc4) level_4_signal

0x3e7c,	// (0x00034dd7) level_5_signal

0x3e8f,	// (0x00034dea) level_6_signal

0x3ea2,	// (0x00034dfd) level_7_signal

0x3e31,	// (0x00034d8c) level_1_battery

0x3e43,	// (0x00034d9e) level_2_battery

0x3e56,	// (0x00034db1) level_3_battery

0x3e69,	// (0x00034dc4) level_4_battery

0x3e7c,	// (0x00034dd7) level_5_battery

0x3e8f,	// (0x00034dea) level_6_battery

0x3ea2,	// (0x00034dfd) level_7_battery

0x3ecd,	// (0x00034e28) list_menu_pane_ParamLimits

0x3ecd,	// (0x00034e28) list_menu_pane

0x3ee3,	// (0x00034e3e) scroll_pane_cp25_ParamLimits

0x3ee3,	// (0x00034e3e) scroll_pane_cp25

0x3efc,	// (0x00034e57) list_double2_graphic_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double2_graphic_pane_cp2

0x3efc,	// (0x00034e57) list_double2_large_graphic_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double2_large_graphic_pane_cp2

0x3efc,	// (0x00034e57) list_double2_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double2_pane_cp2

0x3efc,	// (0x00034e57) list_double_graphic_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double_graphic_pane_cp2

0x3efc,	// (0x00034e57) list_double_large_graphic_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double_large_graphic_pane_cp2

0x3efc,	// (0x00034e57) list_double_number_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double_number_pane_cp2

0x3efc,	// (0x00034e57) list_double_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double_pane_cp2

0xd1bc,	// (0x0003e117) list_single_2graphic_pane_cp2_ParamLimits

0xd1bc,	// (0x0003e117) list_single_2graphic_pane_cp2

0xd1bc,	// (0x0003e117) list_single_graphic_heading_pane_cp2_ParamLimits

0xd1bc,	// (0x0003e117) list_single_graphic_heading_pane_cp2

0xd1bc,	// (0x0003e117) list_single_graphic_pane_cp2_ParamLimits

0xd1bc,	// (0x0003e117) list_single_graphic_pane_cp2

0xd1bc,	// (0x0003e117) list_single_heading_pane_cp2_ParamLimits

0xd1bc,	// (0x0003e117) list_single_heading_pane_cp2

0x3f39,	// (0x00034e94) list_single_large_graphic_pane_cp2_ParamLimits

0x3f39,	// (0x00034e94) list_single_large_graphic_pane_cp2

0xd1bc,	// (0x0003e117) list_single_number_heading_pane_cp2_ParamLimits

0xd1bc,	// (0x0003e117) list_single_number_heading_pane_cp2

0xd1bc,	// (0x0003e117) list_single_number_pane_cp2_ParamLimits

0xd1bc,	// (0x0003e117) list_single_number_pane_cp2

0xd1ce,	// (0x0003e129) list_single_pane_cp2_ParamLimits

0xd1ce,	// (0x0003e129) list_single_pane_cp2

0x3fce,	// (0x00034f29) bg_popup_sub_pane_cp22

0x0595,	// (0x000314f0) popup_side_volume_key_window_g1

0x05bf,	// (0x0003151a) popup_side_volume_key_window_t1

0x05db,	// (0x00031536) volume_small_pane_cp1

0x2fb4,	// (0x00033f0f) bg_popup_sub_pane_cp24_ParamLimits

0x2fb4,	// (0x00033f0f) bg_popup_sub_pane_cp24

0x3fe4,	// (0x00034f3f) fep_china_uni_candidate_pane_ParamLimits

0x3fe4,	// (0x00034f3f) fep_china_uni_candidate_pane

0x3ff8,	// (0x00034f53) fep_china_uni_entry_pane

0x4008,	// (0x00034f63) popup_fep_china_uni_window_g1

0x4024,	// (0x00034f7f) fep_china_uni_entry_pane_g1

0x402c,	// (0x00034f87) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00040658) fep_china_uni_entry_pane_g

0x4034,	// (0x00034f8f) fep_entry_item_pane

0x403e,	// (0x00034f99) fep_candidate_item_pane

0x4046,	// (0x00034fa1) fep_china_uni_candidate_pane_g1

0x404e,	// (0x00034fa9) fep_china_uni_candidate_pane_g2

0x4056,	// (0x00034fb1) fep_china_uni_candidate_pane_g3

0x405e,	// (0x00034fb9) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0004065d) fep_china_uni_candidate_pane_g

0xe005,	// (0x0003ef60) fep_entry_item_pane_g1

0x4066,	// (0x00034fc1) fep_entry_item_pane_t1_ParamLimits

0x4066,	// (0x00034fc1) fep_entry_item_pane_t1

0x407c,	// (0x00034fd7) fep_candidate_item_pane_t1_ParamLimits

0x407c,	// (0x00034fd7) fep_candidate_item_pane_t1

0x4091,	// (0x00034fec) fep_candidate_item_pane_t2_ParamLimits

0x4091,	// (0x00034fec) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00040666) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00040666) fep_candidate_item_pane_t

0x2d39,	// (0x00033c94) list_highlight_pane_cp31_ParamLimits

0x2d39,	// (0x00033c94) list_highlight_pane_cp31

0x40a3,	// (0x00034ffe) level_1_signal_lsc

0x40ac,	// (0x00035007) level_2_signal_lsc

0x40b5,	// (0x00035010) level_3_signal_lsc

0x40be,	// (0x00035019) level_4_signal_lsc

0x40c7,	// (0x00035022) level_5_signal_lsc

0x40d0,	// (0x0003502b) level_6_signal_lsc

0x40d9,	// (0x00035034) level_7_signal_lsc

0x40d9,	// (0x00035034) level_1_battery_lsc

0x40e2,	// (0x0003503d) level_2_battery_lsc

0x40eb,	// (0x00035046) level_3_battery_lsc

0x40f4,	// (0x0003504f) level_4_battery_lsc

0x40fd,	// (0x00035058) level_5_battery_lsc

0x4106,	// (0x00035061) level_6_battery_lsc

0x40a3,	// (0x00034ffe) level_7_battery_lsc

0x410f,	// (0x0003506a) scroll_handle_focus_pane_g1

0x4118,	// (0x00035073) scroll_handle_focus_pane_g2

0x4121,	// (0x0003507c) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0004066b) scroll_handle_focus_pane_g

0xbdcc,	// (0x0003cd27) list_single_2graphic_pane_g1_ParamLimits

0xbdcc,	// (0x0003cd27) list_single_2graphic_pane_g1

0xb89a,	// (0x0003c7f5) list_single_2graphic_pane_g2_ParamLimits

0xb89a,	// (0x0003c7f5) list_single_2graphic_pane_g2

0x1059,	// (0x00031fb4) list_single_2graphic_pane_g3_ParamLimits

0x1059,	// (0x00031fb4) list_single_2graphic_pane_g3

0xbdd8,	// (0x0003cd33) list_single_2graphic_pane_g4_ParamLimits

0xbdd8,	// (0x0003cd33) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x00040672) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x00040672) list_single_2graphic_pane_g

0xbde9,	// (0x0003cd44) list_single_2graphic_pane_t1_ParamLimits

0xbde9,	// (0x0003cd44) list_single_2graphic_pane_t1

0xbe17,	// (0x0003cd72) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbe17,	// (0x0003cd72) list_double2_graphic_large_graphic_pane_g1

0xb905,	// (0x0003c860) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb905,	// (0x0003c860) list_double2_graphic_large_graphic_pane_g2

0xb916,	// (0x0003c871) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb916,	// (0x0003c871) list_double2_graphic_large_graphic_pane_g3

0xbe29,	// (0x0003cd84) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe29,	// (0x0003cd84) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0004067b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0004067b) list_double2_graphic_large_graphic_pane_g

0xbe35,	// (0x0003cd90) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe35,	// (0x0003cd90) list_double2_graphic_large_graphic_pane_t1

0xbe4b,	// (0x0003cda6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe4b,	// (0x0003cda6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x00040684) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x00040684) list_double2_graphic_large_graphic_pane_t

0x426c,	// (0x000351c7) popup_fast_swap_window_ParamLimits

0x426c,	// (0x000351c7) popup_fast_swap_window

0x4288,	// (0x000351e3) popup_side_volume_key_window

0x42a4,	// (0x000351ff) stacon_top_pane

0x42ae,	// (0x00035209) status_pane_ParamLimits

0x42ae,	// (0x00035209) status_pane

0xdffb,	// (0x0003ef56) status_small_pane

0x2c59,	// (0x00033bb4) control_pane

0x2c59,	// (0x00033bb4) stacon_bottom_pane

0x35a9,	// (0x00034504) scroll_pane_cp121

0x35a0,	// (0x000344fb) set_content_pane

0x412a,	// (0x00035085) bg_active_tab_pane_g1_cp1

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp1

0x413c,	// (0x00035097) bg_active_tab_pane_g3_cp1

0x412a,	// (0x00035085) bg_passive_tab_pane_g1_cp1

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp1

0x413c,	// (0x00035097) bg_passive_tab_pane_g3_cp1

0x4145,	// (0x000350a0) bg_active_tab_pane_g1_cp2

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp2

0x414e,	// (0x000350a9) bg_active_tab_pane_g3_cp2

0x4145,	// (0x000350a0) bg_passive_tab_pane_g1_cp2

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp2

0x414e,	// (0x000350a9) bg_passive_tab_pane_g3_cp2

0x4157,	// (0x000350b2) bg_active_tab_pane_g1_cp3

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp3

0x4160,	// (0x000350bb) bg_active_tab_pane_g3_cp3

0x4157,	// (0x000350b2) bg_passive_tab_pane_g1_cp3

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp3

0x4160,	// (0x000350bb) bg_passive_tab_pane_g3_cp3

0x4169,	// (0x000350c4) bg_active_tab_pane_g1_cp4

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp4

0x4174,	// (0x000350cf) bg_active_tab_pane_g3_cp4

0x4169,	// (0x000350c4) bg_passive_tab_pane_g1_cp4

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp4

0x4174,	// (0x000350cf) bg_passive_tab_pane_g3_cp4

0x41bd,	// (0x00035118) bg_active_tab_pane_g1_cp5

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp5

0x41c6,	// (0x00035121) bg_active_tab_pane_g3_cp5

0x41bd,	// (0x00035118) bg_passive_tab_pane_g1_cp5

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp5

0x41c6,	// (0x00035121) bg_passive_tab_pane_g3_cp5

0x6899,	// (0x000377f4) list_set_graphic_pane_ParamLimits

0x6899,	// (0x000377f4) list_set_graphic_pane

0x2c59,	// (0x00033bb4) bg_set_opt_pane_cp4

0x41ef,	// (0x0003514a) list_set_graphic_pane_g1_ParamLimits

0x41ef,	// (0x0003514a) list_set_graphic_pane_g1

0x41fb,	// (0x00035156) list_set_graphic_pane_g2_ParamLimits

0x41fb,	// (0x00035156) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00040689) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00040689) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x00040a00) volume_small_pane_cp_g

0x421f,	// (0x0003517a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x421f,	// (0x0003517a) list_double2_large_graphic_pane_g1_cp2

0x422b,	// (0x00035186) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x422b,	// (0x00035186) list_double2_large_graphic_pane_g2_cp2

0x423c,	// (0x00035197) list_double2_large_graphic_pane_g3_cp2

0x4244,	// (0x0003519f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4244,	// (0x0003519f) list_double2_large_graphic_pane_t1_cp2

0x425a,	// (0x000351b5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x425a,	// (0x000351b5) list_double2_large_graphic_pane_t2_cp2

0x5e38,	// (0x00036d93) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e38,	// (0x00036d93) list_double_large_graphic_pane_g1_cp2

0x5e49,	// (0x00036da4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e49,	// (0x00036da4) list_double_large_graphic_pane_g2_cp2

0x43ca,	// (0x00035325) list_double_large_graphic_pane_g3_cp2

0x5e5a,	// (0x00036db5) list_double_large_graphic_pane_g4_cp

0x5e62,	// (0x00036dbd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e62,	// (0x00036dbd) list_double_large_graphic_pane_t1_cp2

0x5e79,	// (0x00036dd4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e79,	// (0x00036dd4) list_double_large_graphic_pane_t2_cp2

0x42bc,	// (0x00035217) list_double2_graphic_pane_g1_cp2_ParamLimits

0x42bc,	// (0x00035217) list_double2_graphic_pane_g1_cp2

0x42ca,	// (0x00035225) list_double2_graphic_pane_g2_cp2_ParamLimits

0x42ca,	// (0x00035225) list_double2_graphic_pane_g2_cp2

0x42db,	// (0x00035236) list_double2_graphic_pane_g3_cp2

0x42e5,	// (0x00035240) list_double2_graphic_pane_t1_cp2_ParamLimits

0x42e5,	// (0x00035240) list_double2_graphic_pane_t1_cp2

0x42fb,	// (0x00035256) list_double2_graphic_pane_t2_cp2_ParamLimits

0x42fb,	// (0x00035256) list_double2_graphic_pane_t2_cp2

0x430d,	// (0x00035268) list_single_number_heading_pane_g1_cp2_ParamLimits

0x430d,	// (0x00035268) list_single_number_heading_pane_g1_cp2

0x4319,	// (0x00035274) list_single_number_heading_pane_g2_cp2

0x4321,	// (0x0003527c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4321,	// (0x0003527c) list_single_number_heading_pane_t1_cp2

0x4337,	// (0x00035292) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4337,	// (0x00035292) list_single_number_heading_pane_t2_cp2

0x4349,	// (0x000352a4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4349,	// (0x000352a4) list_single_number_heading_pane_t3_cp2

0x430d,	// (0x00035268) list_single_heading_pane_g1_cp2_ParamLimits

0x430d,	// (0x00035268) list_single_heading_pane_g1_cp2

0x4319,	// (0x00035274) list_single_heading_pane_g2_cp2

0x4321,	// (0x0003527c) list_single_heading_pane_t1_cp2_ParamLimits

0x4321,	// (0x0003527c) list_single_heading_pane_t1_cp2

0x5c40,	// (0x00036b9b) list_single_heading_pane_t2_cp2_ParamLimits

0x5c40,	// (0x00036b9b) list_single_heading_pane_t2_cp2

0x5b88,	// (0x00036ae3) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b88,	// (0x00036ae3) list_double_graphic_pane_g1_cp2

0x5b94,	// (0x00036aef) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b94,	// (0x00036aef) list_double_graphic_pane_g2_cp2

0x5ba3,	// (0x00036afe) list_double_graphic_pane_g3_cp2

0x5bab,	// (0x00036b06) list_double_graphic_pane_t1_cp2_ParamLimits

0x5bab,	// (0x00036b06) list_double_graphic_pane_t1_cp2

0x5bc1,	// (0x00036b1c) list_double_graphic_pane_t2_cp2_ParamLimits

0x5bc1,	// (0x00036b1c) list_double_graphic_pane_t2_cp2

0x43be,	// (0x00035319) list_double_number_pane_g1_cp2_ParamLimits

0x43be,	// (0x00035319) list_double_number_pane_g1_cp2

0x43ca,	// (0x00035325) list_double_number_pane_g2_cp2

0x5b4c,	// (0x00036aa7) list_double_number_pane_t1_cp2_ParamLimits

0x5b4c,	// (0x00036aa7) list_double_number_pane_t1_cp2

0x5b60,	// (0x00036abb) list_double_number_pane_t2_cp2_ParamLimits

0x5b60,	// (0x00036abb) list_double_number_pane_t2_cp2

0x5b76,	// (0x00036ad1) list_double_number_pane_t3_cp2_ParamLimits

0x5b76,	// (0x00036ad1) list_double_number_pane_t3_cp2

0x5a35,	// (0x00036990) list_single_graphic_pane_g1_cp2_ParamLimits

0x5a35,	// (0x00036990) list_single_graphic_pane_g1_cp2

0x442b,	// (0x00035386) list_single_graphic_pane_g2_cp2_ParamLimits

0x442b,	// (0x00035386) list_single_graphic_pane_g2_cp2

0x4437,	// (0x00035392) list_single_graphic_pane_g3_cp2

0x5a0b,	// (0x00036966) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a0b,	// (0x00036966) list_single_graphic_pane_t1_cp2

0x442b,	// (0x00035386) list_single_number_pane_g1_cp2_ParamLimits

0x442b,	// (0x00035386) list_single_number_pane_g1_cp2

0x4437,	// (0x00035392) list_single_number_pane_g2_cp2

0x5a0b,	// (0x00036966) list_single_number_pane_t1_cp2_ParamLimits

0x5a0b,	// (0x00036966) list_single_number_pane_t1_cp2

0x5a21,	// (0x0003697c) list_single_number_pane_t2_cp2_ParamLimits

0x5a21,	// (0x0003697c) list_single_number_pane_t2_cp2

0x422b,	// (0x00035186) list_double2_pane_g1_cp2_ParamLimits

0x422b,	// (0x00035186) list_double2_pane_g1_cp2

0x423c,	// (0x00035197) list_double2_pane_g2_cp2

0x4396,	// (0x000352f1) list_double2_pane_t1_cp2_ParamLimits

0x4396,	// (0x000352f1) list_double2_pane_t1_cp2

0x43ac,	// (0x00035307) list_double2_pane_t2_cp2_ParamLimits

0x43ac,	// (0x00035307) list_double2_pane_t2_cp2

0x43be,	// (0x00035319) list_double_pane_g1_cp2_ParamLimits

0x43be,	// (0x00035319) list_double_pane_g1_cp2

0x43ca,	// (0x00035325) list_double_pane_g2_cp2

0x43d2,	// (0x0003532d) list_double_pane_t1_cp2_ParamLimits

0x43d2,	// (0x0003532d) list_double_pane_t1_cp2

0x43e8,	// (0x00035343) list_double_pane_t2_cp2_ParamLimits

0x43e8,	// (0x00035343) list_double_pane_t2_cp2

0x441b,	// (0x00035376) list_single_pane_cp2_g3

0x442b,	// (0x00035386) list_single_pane_g1_cp2_ParamLimits

0x442b,	// (0x00035386) list_single_pane_g1_cp2

0x4437,	// (0x00035392) list_single_pane_g2_cp2

0x443f,	// (0x0003539a) list_single_pane_t1_cp2_ParamLimits

0x443f,	// (0x0003539a) list_single_pane_t1_cp2

0x4457,	// (0x000353b2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4457,	// (0x000353b2) list_single_large_graphic_pane_g1_cp2

0x4463,	// (0x000353be) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4463,	// (0x000353be) list_single_large_graphic_pane_g2_cp2

0x446f,	// (0x000353ca) list_single_large_graphic_pane_g3_cp2

0x4477,	// (0x000353d2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4477,	// (0x000353d2) list_single_large_graphic_pane_g4_cp1

0x4491,	// (0x000353ec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4491,	// (0x000353ec) list_single_large_graphic_pane_t1_cp2

0x59d7,	// (0x00036932) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x59d7,	// (0x00036932) list_single_graphic_heading_pane_g1_cp2

0x59a4,	// (0x000368ff) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x59a4,	// (0x000368ff) list_single_graphic_heading_pane_g4_cp2

0x4437,	// (0x00035392) list_single_graphic_heading_pane_g5_cp2

0x59e3,	// (0x0003693e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59e3,	// (0x0003693e) list_single_graphic_heading_pane_t1_cp2

0x59f9,	// (0x00036954) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x59f9,	// (0x00036954) list_single_graphic_heading_pane_t2_cp2

0x5998,	// (0x000368f3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5998,	// (0x000368f3) list_single_2graphic_pane_g1_cp2

0x59a4,	// (0x000368ff) list_single_2graphic_pane_g2_cp2_ParamLimits

0x59a4,	// (0x000368ff) list_single_2graphic_pane_g2_cp2

0x4437,	// (0x00035392) list_single_2graphic_pane_g3_cp2

0x59b5,	// (0x00036910) list_single_2graphic_pane_g4_cp2_ParamLimits

0x59b5,	// (0x00036910) list_single_2graphic_pane_g4_cp2

0x59c1,	// (0x0003691c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x59c1,	// (0x0003691c) list_single_2graphic_pane_t1_cp2

0xe005,	// (0x0003ef60) list_highlight_pane_g10_cp1

0x5570,	// (0x000364cb) list_highlight_pane_g1_cp1

0x5578,	// (0x000364d3) list_highlight_pane_g2_cp1

0x5580,	// (0x000364db) list_highlight_pane_g3_cp1

0x5588,	// (0x000364e3) list_highlight_pane_g4_cp1

0x5590,	// (0x000364eb) list_highlight_pane_g5_cp1

0x5598,	// (0x000364f3) list_highlight_pane_g6_cp1

0x55a0,	// (0x000364fb) list_highlight_pane_g7_cp1

0x55a8,	// (0x00036503) list_highlight_pane_g8_cp1

0x55b0,	// (0x0003650b) list_highlight_pane_g9_cp1

0xd819,	// (0x0003e774) form_field_slider_pane_t3

0xd827,	// (0x0003e782) form_field_slider_pane_t4

0x54ac,	// (0x00036407) slider_form_pane_ParamLimits

0x54ac,	// (0x00036407) slider_form_pane

0x2c59,	// (0x00033bb4) control_abbreviations

0x2c59,	// (0x00033bb4) control_conventions

0x2c59,	// (0x00033bb4) control_definitions

0x2c59,	// (0x00033bb4) format_table_attribute

0x5c8a,	// (0x00036be5) bg_popup_preview_window_pane_g9

0x2c59,	// (0x00033bb4) format_table_data2

0x2c59,	// (0x00033bb4) format_table_data3

0x2c59,	// (0x00033bb4) format_table_data_example

0x0008,

0x2c59,	// (0x00033bb4) intro_purpose

0xf8c5,	// (0x00040820) bg_popup_preview_window_pane_g

0x2c59,	// (0x00033bb4) texts_category

0x2c59,	// (0x00033bb4) texts_graphics

0x44a7,	// (0x00035402) text_digital

0x44b6,	// (0x00035411) text_primary

0x44c5,	// (0x00035420) text_primary_small

0x44d4,	// (0x0003542f) text_secondary

0x44e3,	// (0x0003543e) text_title

0x63cd,	// (0x00037328) bg_passive_tab_pane_g1_cp3_srt

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp3_srt

0x63d6,	// (0x00037331) bg_passive_tab_pane_g3_cp3_srt

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp3_srt_ParamLimits

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp3_srt

0x63df,	// (0x0003733a) tabs_4_active_pane_srt_g1

0xdb6b,	// (0x0003eac6) tabs_4_active_pane_srt_t1_ParamLimits

0xdb6b,	// (0x0003eac6) tabs_4_active_pane_srt_t1

0x63cd,	// (0x00037328) bg_active_tab_pane_g1_cp3_copy1

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp3_copy1

0x63d6,	// (0x00037331) bg_active_tab_pane_g3_cp3_copy1

0x2d39,	// (0x00033c94) tabs_2_long_active_pane_srt_ParamLimits

0x2d39,	// (0x00033c94) tabs_2_long_active_pane_srt

0x2d39,	// (0x00033c94) tabs_2_long_passive_pane_srt_ParamLimits

0x2d39,	// (0x00033c94) tabs_2_long_passive_pane_srt

0x4816,	// (0x00035771) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4816,	// (0x00035771) bg_passive_tab_pane_cp4_srt

0x60b8,	// (0x00037013) bg_passive_tab_pane_g1_cp4_srt

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp4_srt

0x60c1,	// (0x0003701c) bg_passive_tab_pane_g3_cp4_srt

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp4_srt

0xd984,	// (0x0003e8df) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd984,	// (0x0003e8df) tabs_2_long_active_pane_srt_t1

0x60b8,	// (0x00037013) bg_active_tab_pane_g1_cp4_srt

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp4_srt

0x60c1,	// (0x0003701c) bg_active_tab_pane_g3_cp4_srt

0x2fb4,	// (0x00033f0f) tabs_3_long_active_pane_srt_ParamLimits

0x2fb4,	// (0x00033f0f) tabs_3_long_active_pane_srt

0x2fb4,	// (0x00033f0f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2fb4,	// (0x00033f0f) tabs_3_long_passive_pane_cp_srt

0x2fb4,	// (0x00033f0f) tabs_3_long_passive_pane_srt_ParamLimits

0x2fb4,	// (0x00033f0f) tabs_3_long_passive_pane_srt

0x4816,	// (0x00035771) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4816,	// (0x00035771) bg_passive_tab_pane_cp5_srt

0x41bd,	// (0x00035118) bg_passive_tab_pane_g1_cp5_srt

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp5_srt

0x41c6,	// (0x00035121) bg_passive_tab_pane_g3_cp5_srt

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp5_srt

0xd96e,	// (0x0003e8c9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd96e,	// (0x0003e8c9) tabs_3_long_active_pane_srt_t1

0x41bd,	// (0x00035118) bg_active_tab_pane_g1_cp5_srt

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp5_srt

0x41c6,	// (0x00035121) bg_active_tab_pane_g3_cp5_srt

0x6098,	// (0x00036ff3) navi_text_pane_srt_t1

0x6090,	// (0x00036feb) navi_icon_pane_srt_g1

0x46b8,	// (0x00035613) midp_editing_number_pane_srt

0x44f2,	// (0x0003544d) midp_ticker_pane_srt

0x46c0,	// (0x0003561b) midp_ticker_pane_srt_g1

0x46c8,	// (0x00035623) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x000406a8) midp_ticker_pane_srt_g

0x46d0,	// (0x0003562b) midp_ticker_pane_srt_t1

0x6081,	// (0x00036fdc) midp_editing_number_pane_t1_copy1

0xd25b,	// (0x0003e1b6) listscroll_midp_pane

0xd25b,	// (0x0003e1b6) midp_form_pane

0x456a,	// (0x000354c5) midp_info_popup_window_ParamLimits

0x456a,	// (0x000354c5) midp_info_popup_window

0x36e5,	// (0x00034640) bg_popup_sub_pane_cp50_ParamLimits

0x36e5,	// (0x00034640) bg_popup_sub_pane_cp50

0x5194,	// (0x000360ef) listscroll_midp_info_pane_ParamLimits

0x5194,	// (0x000360ef) listscroll_midp_info_pane

0x5174,	// (0x000360cf) listscroll_form_midp_pane_ParamLimits

0x5174,	// (0x000360cf) listscroll_form_midp_pane

0x5180,	// (0x000360db) scroll_bar_cp050

0x5174,	// (0x000360cf) list_midp_pane

0x6e54,	// (0x00037daf) signal_pane_g2_cp

0x508e,	// (0x00035fe9) listscroll_midp_info_pane_t1_ParamLimits

0x508e,	// (0x00035fe9) listscroll_midp_info_pane_t1

0x50a6,	// (0x00036001) listscroll_midp_info_pane_t2_ParamLimits

0x50a6,	// (0x00036001) listscroll_midp_info_pane_t2

0x50e4,	// (0x0003603f) listscroll_midp_info_pane_t3_ParamLimits

0x50e4,	// (0x0003603f) listscroll_midp_info_pane_t3

0x511e,	// (0x00036079) listscroll_midp_info_pane_t4_ParamLimits

0x511e,	// (0x00036079) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0004075b) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0004075b) listscroll_midp_info_pane_t

0x3746,	// (0x000346a1) scroll_pane_cp21

0x502c,	// (0x00035f87) form_midp_field_choice_group_pane

0x5035,	// (0x00035f90) form_midp_field_text_pane

0x5074,	// (0x00035fcf) form_midp_field_time_pane

0x507c,	// (0x00035fd7) form_midp_gauge_slider_pane

0x5085,	// (0x00035fe0) form_midp_gauge_wait_pane

0x2c59,	// (0x00033bb4) form_midp_image_pane

0xc704,	// (0x0003d65f) list_single_midp_pane_ParamLimits

0xc704,	// (0x0003d65f) list_single_midp_pane

0xd7f8,	// (0x0003e753) form_midp_field_text_pane_t1

0x4db4,	// (0x00035d0f) input_focus_pane_cp050

0x501b,	// (0x00035f76) list_midp_form_text_pane

0x4fb3,	// (0x00035f0e) form_midp_field_choice_group_pane_t1

0x4fc1,	// (0x00035f1c) input_focus_pane_cp051

0x4fd5,	// (0x00035f30) list_midp_choice_pane

0x2c59,	// (0x00033bb4) status_idle_pane

0x4f97,	// (0x00035ef2) form_midp_field_time_pane_t1

0xe005,	// (0x0003ef60) wait_anim_pane_g2_copy1

0x4fa5,	// (0x00035f00) form_midp_field_time_pane_t2

0x0001,

0x4618,	// (0x00035573) aid_navinavi_width_2_pane

0xf7fb,	// (0x00040756) form_midp_field_time_pane_t

0x2c59,	// (0x00033bb4) input_focus_pane_cp052

0x2c59,	// (0x00033bb4) bg_input_focus_pane_cp040

0x4f57,	// (0x00035eb2) form_midp_gauge_slider_pane_t1

0x4f65,	// (0x00035ec0) form_midp_gauge_slider_pane_t2

0xd7dc,	// (0x0003e737) form_midp_gauge_slider_pane_t3

0xd7ea,	// (0x0003e745) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0004074d) form_midp_gauge_slider_pane_t

0x4f8f,	// (0x00035eea) form_midp_slider_pane

0x2d39,	// (0x00033c94) bg_input_focus_pane_cp041_ParamLimits

0x2d39,	// (0x00033c94) bg_input_focus_pane_cp041

0x4f24,	// (0x00035e7f) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f24,	// (0x00035e7f) form_midp_gauge_wait_pane_t1

0x4f36,	// (0x00035e91) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f36,	// (0x00035e91) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00040748) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00040748) form_midp_gauge_wait_pane_t

0x4f48,	// (0x00035ea3) form_midp_wait_pane_ParamLimits

0x4f48,	// (0x00035ea3) form_midp_wait_pane

0x4eee,	// (0x00035e49) form_midp_image_pane_g1

0x4ef7,	// (0x00035e52) form_midp_image_pane_t1

0x4f06,	// (0x00035e61) form_midp_image_pane_t2

0x4f15,	// (0x00035e70) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00040741) form_midp_image_pane_t

0x4ee5,	// (0x00035e40) list_single_midp_pane_g1

0x11c2,	// (0x0003211d) list_single_midp_pane_t1

0xd7c8,	// (0x0003e723) list_midp_form_item_pane_ParamLimits

0xd7c8,	// (0x0003e723) list_midp_form_item_pane

0x45c0,	// (0x0003551b) list_midp_form_item_pane_t1

0x45cf,	// (0x0003552a) midp_ticker_pane_g1

0x45db,	// (0x00035536) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0004068e) midp_ticker_pane_g

0x45e7,	// (0x00035542) midp_ticker_pane_t1

0x62d2,	// (0x0003722d) midp_editing_number_pane_t1

0x62b0,	// (0x0003720b) midp_editing_number_pane

0x62bf,	// (0x0003721a) midp_ticker_pane

0x6071,	// (0x00036fcc) ai_message_heading_pane

0x2c59,	// (0x00033bb4) bg_popup_window_pane_cp14

0x6079,	// (0x00036fd4) listscroll_ai_message_pane

0x5ffb,	// (0x00036f56) ai_message_heading_pane_g1_ParamLimits

0x5ffb,	// (0x00036f56) ai_message_heading_pane_g1

0x6007,	// (0x00036f62) ai_message_heading_pane_g2_ParamLimits

0x6007,	// (0x00036f62) ai_message_heading_pane_g2

0x6013,	// (0x00036f6e) ai_message_heading_pane_g3_ParamLimits

0x6013,	// (0x00036f6e) ai_message_heading_pane_g3

0x601f,	// (0x00036f7a) ai_message_heading_pane_g4_ParamLimits

0x601f,	// (0x00036f7a) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00040882) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00040882) ai_message_heading_pane_g

0x602b,	// (0x00036f86) ai_message_heading_pane_t1_ParamLimits

0x602b,	// (0x00036f86) ai_message_heading_pane_t1

0x6045,	// (0x00036fa0) ai_message_heading_pane_t2_ParamLimits

0x6045,	// (0x00036fa0) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0004088b) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0004088b) ai_message_heading_pane_t

0x6057,	// (0x00036fb2) bg_popup_heading_pane_cp1_ParamLimits

0x6057,	// (0x00036fb2) bg_popup_heading_pane_cp1

0x5fe9,	// (0x00036f44) list_ai_message_pane_ParamLimits

0x5fe9,	// (0x00036f44) list_ai_message_pane

0x3746,	// (0x000346a1) scroll_pane_cp10

0x5f85,	// (0x00036ee0) list_ai_message_pane_g1

0x5f8d,	// (0x00036ee8) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0004085f) list_ai_message_pane_g

0x5f95,	// (0x00036ef0) list_ai_message_pane_t1_ParamLimits

0x5f95,	// (0x00036ef0) list_ai_message_pane_t1

0x5faa,	// (0x00036f05) list_ai_message_pane_t2_ParamLimits

0x5faa,	// (0x00036f05) list_ai_message_pane_t2

0x5fbf,	// (0x00036f1a) list_ai_message_pane_t3_ParamLimits

0x5fbf,	// (0x00036f1a) list_ai_message_pane_t3

0x5fd4,	// (0x00036f2f) list_ai_message_pane_t4_ParamLimits

0x5fd4,	// (0x00036f2f) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00040864) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00040864) list_ai_message_pane_t

0xd94d,	// (0x0003e8a8) cell_ai_soft_ind_pane_ParamLimits

0xd94d,	// (0x0003e8a8) cell_ai_soft_ind_pane

0x45f9,	// (0x00035554) cell_ai_soft_ind_pane_g1_ParamLimits

0x45f9,	// (0x00035554) cell_ai_soft_ind_pane_g1

0x2c59,	// (0x00033bb4) grid_highlight_cp1

0x4606,	// (0x00035561) text_secondary_cp56_ParamLimits

0x4606,	// (0x00035561) text_secondary_cp56

0x5f45,	// (0x00036ea0) example_general_pane_ParamLimits

0x5f45,	// (0x00036ea0) example_general_pane

0x5f51,	// (0x00036eac) example_parent_pane_g1_ParamLimits

0x5f51,	// (0x00036eac) example_parent_pane_g1

0x5f5d,	// (0x00036eb8) example_parent_pane_t1_ParamLimits

0x5f5d,	// (0x00036eb8) example_parent_pane_t1

0xc3ae,	// (0x0003d309) popup_preview_text_window_ParamLimits

0xc3ae,	// (0x0003d309) popup_preview_text_window

0x4423,	// (0x0003537e) list_single_pane_cp2_g4

0x3090,	// (0x00033feb) bg_popup_preview_window_pane_ParamLimits

0x3090,	// (0x00033feb) bg_popup_preview_window_pane

0x5c92,	// (0x00036bed) popup_preview_text_window_t1_ParamLimits

0x5c92,	// (0x00036bed) popup_preview_text_window_t1

0x5cb0,	// (0x00036c0b) popup_preview_text_window_t2_ParamLimits

0x5cb0,	// (0x00036c0b) popup_preview_text_window_t2

0x5cf9,	// (0x00036c54) popup_preview_text_window_t3_ParamLimits

0x5cf9,	// (0x00036c54) popup_preview_text_window_t3

0x5d3e,	// (0x00036c99) popup_preview_text_window_t4_ParamLimits

0x5d3e,	// (0x00036c99) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00040833) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00040833) popup_preview_text_window_t

0x5dbc,	// (0x00036d17) scroll_pane_cp11

0x4d40,	// (0x00035c9b) bg_popup_preview_window_pane_g1

0x5c52,	// (0x00036bad) bg_popup_preview_window_pane_g2

0x5c5a,	// (0x00036bb5) bg_popup_preview_window_pane_g3

0x5c62,	// (0x00036bbd) bg_popup_preview_window_pane_g4

0x5c6a,	// (0x00036bc5) bg_popup_preview_window_pane_g5

0x5c72,	// (0x00036bcd) bg_popup_preview_window_pane_g6

0x5c7a,	// (0x00036bd5) bg_popup_preview_window_pane_g7

0x5c82,	// (0x00036bdd) bg_popup_preview_window_pane_g8

0xef84,	// (0x0003fedf) aid_popup_width_pane

0xc32a,	// (0x0003d285) popup_midp_note_alarm_window_ParamLimits

0xc32a,	// (0x0003d285) popup_midp_note_alarm_window

0x35ba,	// (0x00034515) data_form_pane_ParamLimits

0xbcab,	// (0x0003cc06) form_field_data_pane_g1

0xbcb5,	// (0x0003cc10) form_field_data_pane_t1_ParamLimits

0x35c6,	// (0x00034521) input_focus_pane_ParamLimits

0x01b1,	// (0x0003110c) data_form_wide_pane_ParamLimits

0x01c2,	// (0x0003111d) form_field_data_wide_pane_g1

0x01ce,	// (0x00031129) form_field_data_wide_pane_t1_ParamLimits

0x3337,	// (0x00034292) input_focus_pane_cp6_ParamLimits

0xd0aa,	// (0x0003e005) input_popup_find_pane_g1_ParamLimits

0xd0aa,	// (0x0003e005) input_popup_find_pane_g1

0x0444,	// (0x0003139f) aid_navi_side_left_pane

0x0459,	// (0x000313b4) aid_navi_side_right_pane

0x566b,	// (0x000365c6) bg_popup_window_pane_cp30_ParamLimits

0x566b,	// (0x000365c6) bg_popup_window_pane_cp30

0x56e5,	// (0x00036640) popup_midp_note_alarm_window_g1_ParamLimits

0x56e5,	// (0x00036640) popup_midp_note_alarm_window_g1

0x5715,	// (0x00036670) popup_midp_note_alarm_window_t1_ParamLimits

0x5715,	// (0x00036670) popup_midp_note_alarm_window_t1

0x57b6,	// (0x00036711) popup_midp_note_alarm_window_t2_ParamLimits

0x57b6,	// (0x00036711) popup_midp_note_alarm_window_t2

0x5864,	// (0x000367bf) popup_midp_note_alarm_window_t3_ParamLimits

0x5864,	// (0x000367bf) popup_midp_note_alarm_window_t3

0x5896,	// (0x000367f1) popup_midp_note_alarm_window_t4_ParamLimits

0x5896,	// (0x000367f1) popup_midp_note_alarm_window_t4

0x58bc,	// (0x00036817) popup_midp_note_alarm_window_t5_ParamLimits

0x58bc,	// (0x00036817) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x000407d0) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x000407d0) popup_midp_note_alarm_window_t

0x5968,	// (0x000368c3) wait_bar_pane_cp1_ParamLimits

0x5968,	// (0x000368c3) wait_bar_pane_cp1

0x2c59,	// (0x00033bb4) wait_anim_pane_copy1

0x2c59,	// (0x00033bb4) wait_border_pane_copy1

0x5351,	// (0x000362ac) wait_border_pane_g1_copy1

0x01e8,	// (0x00031143) form_field_popup_pane_g1

0xbccf,	// (0x0003cc2a) form_field_popup_pane_t1_ParamLimits

0x35c6,	// (0x00034521) input_focus_pane_cp7_ParamLimits

0x35f4,	// (0x0003454f) list_form_pane_ParamLimits

0x0208,	// (0x00031163) form_field_popup_wide_pane_g1

0x0210,	// (0x0003116b) form_field_popup_wide_pane_t1_ParamLimits

0x35c6,	// (0x00034521) input_focus_pane_cp8_ParamLimits

0x3600,	// (0x0003455b) list_form_wide_pane_ParamLimits

0x646f,	// (0x000373ca) aid_size_cell_graphic_pane

0xbd4e,	// (0x0003cca9) data_form_pane_t1_ParamLimits

0xc72d,	// (0x0003d688) data_form_wide_pane_t1_ParamLimits

0xd44d,	// (0x0003e3a8) bg_status_flat_pane

0xb4fa,	// (0x0003c455) title_pane_t1_ParamLimits

0x2d01,	// (0x00033c5c) title_pane_t2_ParamLimits

0x2d27,	// (0x00033c82) title_pane_t3_ParamLimits

0xf532,	// (0x0004048d) title_pane_t_ParamLimits

0x3e31,	// (0x00034d8c) level_1_signal_ParamLimits

0x3e43,	// (0x00034d9e) level_2_signal_ParamLimits

0x3e56,	// (0x00034db1) level_3_signal_ParamLimits

0x3e69,	// (0x00034dc4) level_4_signal_ParamLimits

0x3e7c,	// (0x00034dd7) level_5_signal_ParamLimits

0x3e8f,	// (0x00034dea) level_6_signal_ParamLimits

0x3ea2,	// (0x00034dfd) level_7_signal_ParamLimits

0x3e31,	// (0x00034d8c) level_1_battery_ParamLimits

0x3e43,	// (0x00034d9e) level_2_battery_ParamLimits

0x3e56,	// (0x00034db1) level_3_battery_ParamLimits

0x3e69,	// (0x00034dc4) level_4_battery_ParamLimits

0x3e7c,	// (0x00034dd7) level_5_battery_ParamLimits

0x3e8f,	// (0x00034dea) level_6_battery_ParamLimits

0x3ea2,	// (0x00034dfd) level_7_battery_ParamLimits

0x5570,	// (0x000364cb) bg_status_flat_pane_g1

0x5578,	// (0x000364d3) bg_status_flat_pane_g2

0x5580,	// (0x000364db) bg_status_flat_pane_g3

0x5588,	// (0x000364e3) bg_status_flat_pane_g4

0x5590,	// (0x000364eb) bg_status_flat_pane_g5

0x5598,	// (0x000364f3) bg_status_flat_pane_g6

0x55a0,	// (0x000364fb) bg_status_flat_pane_g7

0xb586,	// (0x0003c4e1) tabs_3_active_pane_t1_ParamLimits

0xb586,	// (0x0003c4e1) tabs_3_passive_pane_t1_ParamLimits

0xb598,	// (0x0003c4f3) tabs_4_active_pane_t1_ParamLimits

0xb598,	// (0x0003c4f3) tabs_4_1_passive_pane_t1_ParamLimits

0xd0b8,	// (0x0003e013) tabs_2_active_pane_t1_ParamLimits

0xd0b8,	// (0x0003e013) tabs_2_passive_pane_t1_ParamLimits

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp4_ParamLimits

0xd0ca,	// (0x0003e025) tabs_2_long_active_pane_t1_ParamLimits

0x4816,	// (0x00035771) bg_passive_tab_pane_cp4_ParamLimits

0x1099,	// (0x00031ff4) list_single_midp_graphic_pane_t1_ParamLimits

0x2d39,	// (0x00033c94) bg_active_tab_pane_cp5_ParamLimits

0xd0dd,	// (0x0003e038) tabs_3_long_active_pane_t1_ParamLimits

0x4816,	// (0x00035771) bg_passive_tab_pane_cp5_ParamLimits

0x1099,	// (0x00031ff4) list_single_midp_graphic_pane_t1

0xd44d,	// (0x0003e3a8) bg_status_flat_pane_ParamLimits

0x49d0,	// (0x0003592b) indicator_pane_cp2_ParamLimits

0x49d0,	// (0x0003592b) indicator_pane_cp2

0xd5cb,	// (0x0003e526) navi_pane_srt_ParamLimits

0xd5cb,	// (0x0003e526) navi_pane_srt

0x4b1f,	// (0x00035a7a) popup_clock_digital_analogue_window_cp1

0x2e16,	// (0x00033d71) indicator_pane_t1

0x44f2,	// (0x0003544d) copy_highlight_pane

0x44f2,	// (0x0003544d) cursor_graphics_pane

0x44f2,	// (0x0003544d) graphic_within_text_pane

0x44f2,	// (0x0003544d) link_highlight_pane

0x5d7f,	// (0x00036cda) popup_preview_text_window_t5_ParamLimits

0x5d7f,	// (0x00036cda) popup_preview_text_window_t5

0x4620,	// (0x0003557b) cursor_digital_pane

0x4620,	// (0x0003557b) cursor_primary_pane

0x4631,	// (0x0003558c) cursor_primary_small_pane

0x4639,	// (0x00035594) cursor_secondary_pane

0x4641,	// (0x0003559c) cursor_title_pane

0x4620,	// (0x0003557b) link_highlight_digital_pane

0x4628,	// (0x00035583) link_highlight_primary_pane

0x4631,	// (0x0003558c) link_highlight_primary_small_pane

0x4639,	// (0x00035594) link_highlight_secondary_pane

0x4641,	// (0x0003559c) link_highlight_title_pane

0x4620,	// (0x0003557b) copy_highlight_digital_pane

0x4620,	// (0x0003557b) copy_highlight_primary_pane

0x4631,	// (0x0003558c) copy_highlight_primary_small_pane

0x4639,	// (0x00035594) copy_highlight_secondary_pane

0x4641,	// (0x0003559c) copy_highlight_title_pane

0x4639,	// (0x00035594) graphic_text_digital_pane

0x560e,	// (0x00036569) graphic_text_primary_pane

0x5617,	// (0x00036572) graphic_text_primary_small_pane

0x4631,	// (0x0003558c) graphic_text_secondary_pane

0x4620,	// (0x0003557b) graphic_text_title_pane

0xd300,	// (0x0003e25b) cursor_primary_pane_g1

0x5600,	// (0x0003655b) cursor_text_primary_t1

0xd849,	// (0x0003e7a4) cursor_primary_small_pane_g1

0x55f2,	// (0x0003654d) cursor_text_primary_small_t1

0xd83f,	// (0x0003e79a) cursor_primary_small_pane_g1_copy1

0x55da,	// (0x00036535) cursor_text_primary_small_t1_copy1

0x55b8,	// (0x00036513) cursor_text_title_t1

0xd835,	// (0x0003e790) cursor_title_pane_g1

0xd300,	// (0x0003e25b) cursor_digital_pane_g1

0x4653,	// (0x000355ae) cursor_text_digital_t1

0x4678,	// (0x000355d3) link_highlight_primary_pane_g1

0x5561,	// (0x000364bc) link_highlight_primary_pane_t1

0x4661,	// (0x000355bc) link_highlight_primary_small_pane_g1

0x4669,	// (0x000355c4) link_highlight_primary_small_pane_t1

0x4678,	// (0x000355d3) link_highlight_secondary_pane_g1

0x4680,	// (0x000355db) link_highlight_secondary_pane_t1

0x54d5,	// (0x00036430) link_highlight_title_pane_g1

0x54dd,	// (0x00036438) link_highlight_title_pane_t1

0x54be,	// (0x00036419) link_highlight_digital_pane_g1

0x54c6,	// (0x00036421) link_highlight_digital_pane_t1

0x5396,	// (0x000362f1) copy_highlight_primary_pane_g1

0x539e,	// (0x000362f9) copy_highlight_primary_pane_t1

0x5370,	// (0x000362cb) copy_highlight_primary_small_pane_g1

0x5387,	// (0x000362e2) copy_highlight_primary_small_pane_t1

0x468f,	// (0x000355ea) copy_highlight_secondary_pane_g1

0x4697,	// (0x000355f2) copy_highlight_secondary_pane_t1

0x5370,	// (0x000362cb) copy_highlight_title_pane_g1

0x5378,	// (0x000362d3) copy_highlight_title_pane_t1

0x5396,	// (0x000362f1) copy_highlight_digital_pane_g1

0x663d,	// (0x00037598) copy_highlight_digital_pane_t1

0x6591,	// (0x000374ec) graphic_text_primary_pane_g1

0x6621,	// (0x0003757c) graphic_text_primary_pane_t1

0x662f,	// (0x0003758a) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x000408ff) graphic_text_primary_pane_t

0x65fd,	// (0x00037558) graphic_text_primary_small_pane_g1

0x6605,	// (0x00037560) graphic_text_primary_small_pane_t1

0x6613,	// (0x0003756e) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x000408fa) graphic_text_primary_small_pane_t

0x65d9,	// (0x00037534) graphic_text_secondary_pane_g1

0x65e1,	// (0x0003753c) graphic_text_secondary_pane_t1

0x65ef,	// (0x0003754a) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x000408f5) graphic_text_secondary_pane_t

0x65b5,	// (0x00037510) graphic_text_title_pane_g1

0x65bd,	// (0x00037518) graphic_text_title_pane_t1

0x65cb,	// (0x00037526) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x000408f0) graphic_text_title_pane_t

0x6591,	// (0x000374ec) graphic_text_digital_pane_g1

0x6599,	// (0x000374f4) graphic_text_digital_pane_t1

0x65a7,	// (0x00037502) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x000408eb) graphic_text_digital_pane_t

0x2d39,	// (0x00033c94) navi_icon_pane_srt_ParamLimits

0x2d39,	// (0x00033c94) navi_icon_pane_srt

0x2c59,	// (0x00033bb4) navi_midp_pane_srt

0x2c59,	// (0x00033bb4) navi_navi_pane_srt

0x2d39,	// (0x00033c94) navi_text_pane_srt_ParamLimits

0x2d39,	// (0x00033c94) navi_text_pane_srt

0x655c,	// (0x000374b7) navi_navi_icon_text_pane_srt

0x6564,	// (0x000374bf) navi_navi_pane_srt_g1_ParamLimits

0x6564,	// (0x000374bf) navi_navi_pane_srt_g1

0x6576,	// (0x000374d1) navi_navi_pane_srt_g2_ParamLimits

0x6576,	// (0x000374d1) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x000408e6) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x000408e6) navi_navi_pane_srt_g

0x6588,	// (0x000374e3) navi_navi_tabs_pane_srt

0x655c,	// (0x000374b7) navi_navi_text_pane_srt

0x655c,	// (0x000374b7) navi_navi_volume_pane_srt

0x654d,	// (0x000374a8) navi_navi_text_pane_srt_t1

0x15e0,	// (0x0003253b) navi_navi_volume_pane_srt_g1

0x15e8,	// (0x00032543) volume_small_pane_srt_ParamLimits

0x15e8,	// (0x00032543) volume_small_pane_srt

0x07ae,	// (0x00031709) volume_small_pane_srt_g1_ParamLimits

0x07ae,	// (0x00031709) volume_small_pane_srt_g1

0x07be,	// (0x00031719) volume_small_pane_srt_g2_ParamLimits

0x07be,	// (0x00031719) volume_small_pane_srt_g2

0x07cf,	// (0x0003172a) volume_small_pane_srt_g3_ParamLimits

0x07cf,	// (0x0003172a) volume_small_pane_srt_g3

0x07e0,	// (0x0003173b) volume_small_pane_srt_g4_ParamLimits

0x07e0,	// (0x0003173b) volume_small_pane_srt_g4

0x07f1,	// (0x0003174c) volume_small_pane_srt_g5_ParamLimits

0x07f1,	// (0x0003174c) volume_small_pane_srt_g5

0x0802,	// (0x0003175d) volume_small_pane_srt_g6_ParamLimits

0x0802,	// (0x0003175d) volume_small_pane_srt_g6

0x0813,	// (0x0003176e) volume_small_pane_srt_g7_ParamLimits

0x0813,	// (0x0003176e) volume_small_pane_srt_g7

0x0824,	// (0x0003177f) volume_small_pane_srt_g8_ParamLimits

0x0824,	// (0x0003177f) volume_small_pane_srt_g8

0x0835,	// (0x00031790) volume_small_pane_srt_g9_ParamLimits

0x0835,	// (0x00031790) volume_small_pane_srt_g9

0x0846,	// (0x000317a1) volume_small_pane_srt_g10_ParamLimits

0x0846,	// (0x000317a1) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x00040693) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x00040693) volume_small_pane_srt_g

0x3139,	// (0x00034094) query_popup_data_pane_cp2

0x6533,	// (0x0003748e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6533,	// (0x0003748e) navi_navi_icon_text_pane_srt_t1

0x560e,	// (0x00036569) navi_tabs_2_long_pane_srt

0x560e,	// (0x00036569) navi_tabs_2_pane_srt

0x560e,	// (0x00036569) navi_tabs_3_long_pane_srt

0x560e,	// (0x00036569) navi_tabs_3_pane_srt

0x560e,	// (0x00036569) navi_tabs_4_pane_srt

0x15c0,	// (0x0003251b) tabs_2_active_pane_srt_ParamLimits

0x15c0,	// (0x0003251b) tabs_2_active_pane_srt

0x15d0,	// (0x0003252b) tabs_2_passive_pane_srt_ParamLimits

0x15d0,	// (0x0003252b) tabs_2_passive_pane_srt

0x4db4,	// (0x00035d0f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4db4,	// (0x00035d0f) bg_passive_tab_pane_cp1_srt

0x64ff,	// (0x0003745a) bg_passive_tab_pane_g1_cp1_srt

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp1_srt

0x6508,	// (0x00037463) bg_passive_tab_pane_g3_cp1_srt

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp1_srt_ParamLimits

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp1_srt

0x6511,	// (0x0003746c) tabs_2_active_pane_srt_g1

0xdbee,	// (0x0003eb49) tabs_2_active_pane_srt_t1_ParamLimits

0xdbee,	// (0x0003eb49) tabs_2_active_pane_srt_t1

0x64ff,	// (0x0003745a) bg_active_tab_pane_g1_cp1_srt

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp1_srt

0x6508,	// (0x00037463) bg_active_tab_pane_g3_cp1_srt

0x158d,	// (0x000324e8) tabs_3_active_pane_srt_ParamLimits

0x158d,	// (0x000324e8) tabs_3_active_pane_srt

0x159e,	// (0x000324f9) tabs_3_passive_pane_cp_srt_ParamLimits

0x159e,	// (0x000324f9) tabs_3_passive_pane_cp_srt

0x15af,	// (0x0003250a) tabs_3_passive_pane_srt_ParamLimits

0x15af,	// (0x0003250a) tabs_3_passive_pane_srt

0x4db4,	// (0x00035d0f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4db4,	// (0x00035d0f) bg_passive_tab_pane_cp2_srt

0x46a6,	// (0x00035601) bg_passive_tab_pane_g1_cp2_srt

0x4133,	// (0x0003508e) bg_passive_tab_pane_g2_cp2_srt

0x46af,	// (0x0003560a) bg_passive_tab_pane_g3_cp2_srt

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp2_srt_ParamLimits

0x2fb4,	// (0x00033f0f) bg_active_tab_pane_cp2_srt

0x64e5,	// (0x00037440) tabs_3_active_pane_srt_g1

0xdbd8,	// (0x0003eb33) tabs_3_active_pane_srt_t1_ParamLimits

0xdbd8,	// (0x0003eb33) tabs_3_active_pane_srt_t1

0x46a6,	// (0x00035601) bg_active_tab_pane_g1_cp2_srt

0x4133,	// (0x0003508e) bg_active_tab_pane_g2_cp2_srt

0x46af,	// (0x0003560a) bg_active_tab_pane_g3_cp2_srt

0x1545,	// (0x000324a0) tabs_4_active_pane_srt_ParamLimits

0x1545,	// (0x000324a0) tabs_4_active_pane_srt

0x1557,	// (0x000324b2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1557,	// (0x000324b2) tabs_4_passive_pane_cp2_srt

0x09b9,	// (0x00031914) aid_size_cell_toolbar

0x6129,	// (0x00037084) main_idle_act_pane_ParamLimits

0x0b7a,	// (0x00031ad5) popup_large_graphic_colour_window_ParamLimits

0xc63a,	// (0x0003d595) popup_toolbar_window_ParamLimits

0xc63a,	// (0x0003d595) popup_toolbar_window

0x14b7,	// (0x00032412) list_single_graphic_2heading_pane_ParamLimits

0x14b7,	// (0x00032412) list_single_graphic_2heading_pane

0x3be0,	// (0x00034b3b) aid_size_cell_apps_grid_lsc_pane

0x3bf2,	// (0x00034b4d) aid_size_cell_apps_grid_prt_pane

0x4816,	// (0x00035771) bg_wml_button_pane_cp1_ParamLimits

0x4816,	// (0x00035771) bg_wml_button_pane_cp1

0xd7f8,	// (0x0003e753) form_midp_field_text_pane_t1_ParamLimits

0x4db4,	// (0x00035d0f) input_focus_pane_cp050_ParamLimits

0x501b,	// (0x00035f76) list_midp_form_text_pane_ParamLimits

0x4fc1,	// (0x00035f1c) input_focus_pane_cp051_ParamLimits

0x4fd5,	// (0x00035f30) list_midp_choice_pane_ParamLimits

0xd796,	// (0x0003e6f1) list_single_2graphic_pane_cp3_ParamLimits

0xd796,	// (0x0003e6f1) list_single_2graphic_pane_cp3

0xd7a9,	// (0x0003e704) list_single_midp_graphic_pane_ParamLimits

0xd7a9,	// (0x0003e704) list_single_midp_graphic_pane

0xf163,	// (0x000400be) list_single_graphic_2heading_pane_g1_ParamLimits

0xf163,	// (0x000400be) list_single_graphic_2heading_pane_g1

0xf16f,	// (0x000400ca) list_single_graphic_2heading_pane_g4_ParamLimits

0xf16f,	// (0x000400ca) list_single_graphic_2heading_pane_g4

0xf17b,	// (0x000400d6) list_single_graphic_2heading_pane_g5_ParamLimits

0xf17b,	// (0x000400d6) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x000406e6) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x000406e6) list_single_graphic_2heading_pane_g

0xf187,	// (0x000400e2) list_single_graphic_2heading_pane_t1_ParamLimits

0xf187,	// (0x000400e2) list_single_graphic_2heading_pane_t1

0xf19b,	// (0x000400f6) list_single_graphic_2heading_pane_t2_ParamLimits

0xf19b,	// (0x000400f6) list_single_graphic_2heading_pane_t2

0xf1b5,	// (0x00040110) list_single_graphic_2heading_pane_t3_ParamLimits

0xf1b5,	// (0x00040110) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x000406ed) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x000406ed) list_single_graphic_2heading_pane_t

0x4c7e,	// (0x00035bd9) bg_popup_sub_pane_cp2

0x4ca8,	// (0x00035c03) grid_toobar_pane

0x0f8e,	// (0x00031ee9) cell_toolbar_pane_ParamLimits

0x0f8e,	// (0x00031ee9) cell_toolbar_pane

0x4ce4,	// (0x00035c3f) cell_toolbar_pane_g1_ParamLimits

0x4ce4,	// (0x00035c3f) cell_toolbar_pane_g1

0x4cf8,	// (0x00035c53) cell_toolbar_pane_g2_ParamLimits

0x4cf8,	// (0x00035c53) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x000406fb) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x000406fb) cell_toolbar_pane_g

0x4d1a,	// (0x00035c75) grid_highlight_pane_cp2_ParamLimits

0x4d1a,	// (0x00035c75) grid_highlight_pane_cp2

0x4d34,	// (0x00035c8f) toolbar_button_pane

0x4d40,	// (0x00035c9b) toolbar_button_pane_g1

0x4d48,	// (0x00035ca3) toolbar_button_pane_g2

0x4d50,	// (0x00035cab) toolbar_button_pane_g3

0x4d58,	// (0x00035cb3) toolbar_button_pane_g4

0x4d60,	// (0x00035cbb) toolbar_button_pane_g5

0x4d68,	// (0x00035cc3) toolbar_button_pane_g6

0x4d70,	// (0x00035ccb) toolbar_button_pane_g7

0x4d78,	// (0x00035cd3) toolbar_button_pane_g8

0x4d80,	// (0x00035cdb) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00040700) toolbar_button_pane_g

0x1000,	// (0x00031f5b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1000,	// (0x00031f5b) list_single_2graphic_pane_g1_cp3

0xc692,	// (0x0003d5ed) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc692,	// (0x0003d5ed) list_single_2graphic_pane_g2_cp3

0x101d,	// (0x00031f78) list_single_2graphic_pane_g3_cp3

0x1025,	// (0x00031f80) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1025,	// (0x00031f80) list_single_2graphic_pane_g4_cp3

0x1031,	// (0x00031f8c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1031,	// (0x00031f8c) list_single_2graphic_pane_t1_cp3

0x108d,	// (0x00031fe8) list_single_midp_graphic_pane_g2_ParamLimits

0x108d,	// (0x00031fe8) list_single_midp_graphic_pane_g2

0x09c1,	// (0x0003191c) aid_zoom_text_primary

0xf15b,	// (0x000400b6) aid_zoom_text_secondary

0x4760,	// (0x000356bb) status_small_pane_g7_ParamLimits

0x4760,	// (0x000356bb) status_small_pane_g7

0x4783,	// (0x000356de) status_small_pane_t1_ParamLimits

0xb4d6,	// (0x0003c431) title_pane_g2

0x0003,

0xf529,	// (0x00040484) title_pane_g

0xb74e,	// (0x0003c6a9) aid_size_cell_colour_1_pane_ParamLimits

0xb74e,	// (0x0003c6a9) aid_size_cell_colour_1_pane

0xb762,	// (0x0003c6bd) aid_size_cell_colour_2_pane_ParamLimits

0xb762,	// (0x0003c6bd) aid_size_cell_colour_2_pane

0xb776,	// (0x0003c6d1) aid_size_cell_colour_3_pane_ParamLimits

0xb776,	// (0x0003c6d1) aid_size_cell_colour_3_pane

0xb78a,	// (0x0003c6e5) aid_size_cell_colour_4_pane_ParamLimits

0xb78a,	// (0x0003c6e5) aid_size_cell_colour_4_pane

0x0381,	// (0x000312dc) title_pane_stacon_g1_ParamLimits

0x0381,	// (0x000312dc) title_pane_stacon_g1

0x53f5,	// (0x00036350) popup_note_wait_window_g3_ParamLimits

0x53f5,	// (0x00036350) popup_note_wait_window_g3

0x546b,	// (0x000363c6) popup_note_wait_window_t5_ParamLimits

0x546b,	// (0x000363c6) popup_note_wait_window_t5

0x2c59,	// (0x00033bb4) main_feb_china_hwr_fs_writing_pane

0xc03c,	// (0x0003cf97) popup_feb_china_hwr_fs_window_ParamLimits

0xc03c,	// (0x0003cf97) popup_feb_china_hwr_fs_window

0xc6a3,	// (0x0003d5fe) aid_size_cell_hwr_fs_ParamLimits

0xc6a3,	// (0x0003d5fe) aid_size_cell_hwr_fs

0x4db4,	// (0x00035d0f) bg_popup_sub_pane_cp3_ParamLimits

0x4db4,	// (0x00035d0f) bg_popup_sub_pane_cp3

0xc6b8,	// (0x0003d613) grid_hwr_fs_pane_ParamLimits

0xc6b8,	// (0x0003d613) grid_hwr_fs_pane

0x1152,	// (0x000320ad) linegrid_hwr_fs_pane_ParamLimits

0x1152,	// (0x000320ad) linegrid_hwr_fs_pane

0xc6d0,	// (0x0003d62b) cell_hwr_fs_pane_ParamLimits

0xc6d0,	// (0x0003d62b) cell_hwr_fs_pane

0x4dc0,	// (0x00035d1b) linegrid_hwr_fs_pane_g1_ParamLimits

0x4dc0,	// (0x00035d1b) linegrid_hwr_fs_pane_g1

0xd76a,	// (0x0003e6c5) linegrid_hwr_fs_pane_g2_ParamLimits

0xd76a,	// (0x0003e6c5) linegrid_hwr_fs_pane_g2

0x4dde,	// (0x00035d39) linegrid_hwr_fs_pane_g3_ParamLimits

0x4dde,	// (0x00035d39) linegrid_hwr_fs_pane_g3

0x1184,	// (0x000320df) linegrid_hwr_fs_pane_g4_ParamLimits

0x1184,	// (0x000320df) linegrid_hwr_fs_pane_g4

0x119e,	// (0x000320f9) linegrid_hwr_fs_pane_g5_ParamLimits

0x119e,	// (0x000320f9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00040726) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00040726) linegrid_hwr_fs_pane_g

0x4dea,	// (0x00035d45) cell_hwr_fs_pane_g1_ParamLimits

0x4dea,	// (0x00035d45) cell_hwr_fs_pane_g1

0x4bb5,	// (0x00035b10) cell_hwr_fs_pane_g2_ParamLimits

0x4bb5,	// (0x00035b10) cell_hwr_fs_pane_g2

0xd77c,	// (0x0003e6d7) cell_hwr_fs_pane_g3_ParamLimits

0xd77c,	// (0x0003e6d7) cell_hwr_fs_pane_g3

0xd789,	// (0x0003e6e4) cell_hwr_fs_pane_g4_ParamLimits

0xd789,	// (0x0003e6e4) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00040731) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00040731) cell_hwr_fs_pane_g

0xc6f6,	// (0x0003d651) cell_hwr_fs_pane_t1

0x2c59,	// (0x00033bb4) grid_highlight_pane_cp6

0x2c59,	// (0x00033bb4) main_idle_act2_pane

0x372d,	// (0x00034688) aid_inside_area_popup_secondary

0xd853,	// (0x0003e7ae) aid_inside_area_window_primary_ParamLimits

0xd853,	// (0x0003e7ae) aid_inside_area_window_primary

0x664c,	// (0x000375a7) ai2_news_ticker_pane

0x6654,	// (0x000375af) aid_size_cell_ai1_link_ParamLimits

0x6654,	// (0x000375af) aid_size_cell_ai1_link

0xdc04,	// (0x0003eb5f) popup_ai2_data_window_ParamLimits

0xdc04,	// (0x0003eb5f) popup_ai2_data_window

0x6684,	// (0x000375df) popup_ai2_link_window_ParamLimits

0x6684,	// (0x000375df) popup_ai2_link_window

0x4db4,	// (0x00035d0f) bg_popup_sub_pane_cp4_ParamLimits

0x4db4,	// (0x00035d0f) bg_popup_sub_pane_cp4

0x6698,	// (0x000375f3) grid_ai2_link_pane_ParamLimits

0x6698,	// (0x000375f3) grid_ai2_link_pane

0x66af,	// (0x0003760a) popup_ai2_link_window_g1_ParamLimits

0x66af,	// (0x0003760a) popup_ai2_link_window_g1

0x66bb,	// (0x00037616) popup_ai2_link_window_g2_ParamLimits

0x66bb,	// (0x00037616) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00040904) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00040904) popup_ai2_link_window_g

0x66ca,	// (0x00037625) ai2_mp_button_pane

0x66d2,	// (0x0003762d) ai2_mp_volume_pane

0x4fc1,	// (0x00035f1c) bg_popup_sub_pane_cp5_ParamLimits

0x4fc1,	// (0x00035f1c) bg_popup_sub_pane_cp5

0x66da,	// (0x00037635) heading_ai2_gene_pane_ParamLimits

0x66da,	// (0x00037635) heading_ai2_gene_pane

0x66e6,	// (0x00037641) list_ai2_gene_pane_ParamLimits

0x66e6,	// (0x00037641) list_ai2_gene_pane

0x672e,	// (0x00037689) cell_ai2_link_pane_ParamLimits

0x672e,	// (0x00037689) cell_ai2_link_pane

0x6744,	// (0x0003769f) cell_ai2_link_pane_g1

0x2c59,	// (0x00033bb4) grid_highlight_pane_cp7

0x15fd,	// (0x00032558) ai2_mp_volume_pane_g1

0x6814,	// (0x0003776f) ai2_mp_volume_pane_g2

0xdc2e,	// (0x0003eb89) list_ai2_gene_pane_t1

0x681c,	// (0x00037777) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x0004091d) ai2_mp_volume_pane_g

0x1605,	// (0x00032560) volume_small_pane_cp3

0x6824,	// (0x0003777f) aid_size_cell_ai2_button

0x682c,	// (0x00037787) grid_ai2_button_pane

0x6835,	// (0x00037790) cell_ai2_button_pane_ParamLimits

0x6835,	// (0x00037790) cell_ai2_button_pane

0xe005,	// (0x0003ef60) cell_ai2_button_pane_g1

0x2c59,	// (0x00033bb4) grid_highlight_pane_cp8

0x67d4,	// (0x0003772f) ai2_gene_pane_t1_ParamLimits

0x67d4,	// (0x0003772f) ai2_gene_pane_t1

0xbfd2,	// (0x0003cf2d) aid_height_parent_landscape

0xd99b,	// (0x0003e8f6) aid_height_set_list

0x6129,	// (0x00037084) aid_size_parent

0x646f,	// (0x000373ca) aid_size_cell_graphic_pane_ParamLimits

0x66f6,	// (0x00037651) popup_ai2_data_window_g1_ParamLimits

0x66f6,	// (0x00037651) popup_ai2_data_window_g1

0x6702,	// (0x0003765d) ai2_news_ticker_pane_g1

0x670a,	// (0x00037665) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00040909) ai2_news_ticker_pane_g

0x6712,	// (0x0003766d) ai2_news_ticker_pane_t1

0x6720,	// (0x0003767b) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x0004090e) ai2_news_ticker_pane_t

0x674d,	// (0x000376a8) heading_ai2_gene_pane_g1

0x6755,	// (0x000376b0) heading_ai2_gene_pane_t1_ParamLimits

0x6755,	// (0x000376b0) heading_ai2_gene_pane_t1

0x676a,	// (0x000376c5) list_highlight_pane_cp6

0xdc18,	// (0x0003eb73) ai2_gene_pane_ParamLimits

0xdc18,	// (0x0003eb73) ai2_gene_pane

0xdc3c,	// (0x0003eb97) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00040913) list_ai2_gene_pane_t

0x67a5,	// (0x00037700) list_highlight_pane_cp8_ParamLimits

0x67a5,	// (0x00037700) list_highlight_pane_cp8

0x67b6,	// (0x00037711) ai2_gene_pane_g1_ParamLimits

0x67b6,	// (0x00037711) ai2_gene_pane_g1

0x67c8,	// (0x00037723) ai2_gene_pane_g2_ParamLimits

0x67c8,	// (0x00037723) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00040918) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00040918) ai2_gene_pane_g

0x355c,	// (0x000344b7) scroll_pane_cp12

0xbf8f,	// (0x0003ceea) control_pane_t3_ParamLimits

0xbf8f,	// (0x0003ceea) control_pane_t3

0x4774,	// (0x000356cf) status_small_pane_g8_ParamLimits

0x4774,	// (0x000356cf) status_small_pane_g8

0xc0d1,	// (0x0003d02c) popup_find_window_ParamLimits

0xc364,	// (0x0003d2bf) popup_note_image_window_ParamLimits

0x0fbe,	// (0x00031f19) list_double2_graphic_pane_vc_g1_ParamLimits

0x0fbe,	// (0x00031f19) list_double2_graphic_pane_vc_g1

0x0fca,	// (0x00031f25) list_double2_graphic_pane_vc_g2_ParamLimits

0x0fca,	// (0x00031f25) list_double2_graphic_pane_vc_g2

0x0fd6,	// (0x00031f31) list_double2_graphic_pane_vc_g3_ParamLimits

0x0fd6,	// (0x00031f31) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x000406f4) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x000406f4) list_double2_graphic_pane_vc_g

0x0fe2,	// (0x00031f3d) list_double2_graphic_pane_vc_t1_ParamLimits

0x0fe2,	// (0x00031f3d) list_double2_graphic_pane_vc_t1

0x104d,	// (0x00031fa8) list_single_heading_pane_vc_g1_ParamLimits

0x104d,	// (0x00031fa8) list_single_heading_pane_vc_g1

0x1059,	// (0x00031fb4) list_single_heading_pane_vc_g2_ParamLimits

0x1059,	// (0x00031fb4) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000404fe) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000404fe) list_single_heading_pane_vc_g

0x1065,	// (0x00031fc0) list_single_heading_pane_vc_t1_ParamLimits

0x1065,	// (0x00031fc0) list_single_heading_pane_vc_t1

0x107b,	// (0x00031fd6) list_single_heading_pane_vc_t2_ParamLimits

0x107b,	// (0x00031fd6) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00040715) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00040715) list_single_heading_pane_vc_t

0x10af,	// (0x0003200a) list_setting_number_pane_vc_g1_ParamLimits

0x10af,	// (0x0003200a) list_setting_number_pane_vc_g1

0x10bb,	// (0x00032016) list_setting_number_pane_vc_g2_ParamLimits

0x10bb,	// (0x00032016) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0004071a) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0004071a) list_setting_number_pane_vc_g

0x10c7,	// (0x00032022) list_setting_number_pane_vc_t1_ParamLimits

0x10c7,	// (0x00032022) list_setting_number_pane_vc_t1

0x10db,	// (0x00032036) list_setting_number_pane_vc_t2_ParamLimits

0x10db,	// (0x00032036) list_setting_number_pane_vc_t2

0x10f7,	// (0x00032052) list_setting_number_pane_vc_t3_ParamLimits

0x10f7,	// (0x00032052) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0004071f) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0004071f) list_setting_number_pane_vc_t

0x1115,	// (0x00032070) set_value_pane_vc_ParamLimits

0x1115,	// (0x00032070) set_value_pane_vc

0x14b7,	// (0x00032412) list_double2_graphic_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double2_graphic_pane_vc

0x62e1,	// (0x0003723c) list_double2_large_graphic_pane_vc_ParamLimits

0x62e1,	// (0x0003723c) list_double2_large_graphic_pane_vc

0x14b7,	// (0x00032412) list_double2_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double2_pane_vc

0x14b7,	// (0x00032412) list_double_graphic_heading_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double_graphic_heading_pane_vc

0x14b7,	// (0x00032412) list_double_graphic_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double_graphic_pane_vc

0x14b7,	// (0x00032412) list_double_heading_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double_heading_pane_vc

0x62f3,	// (0x0003724e) list_double_large_graphic_pane_vc_ParamLimits

0x62f3,	// (0x0003724e) list_double_large_graphic_pane_vc

0x14b7,	// (0x00032412) list_double_number_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double_number_pane_vc

0x14b7,	// (0x00032412) list_double_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double_pane_vc

0x14b7,	// (0x00032412) list_double_time_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_double_time_pane_vc

0x14b7,	// (0x00032412) list_setting_number_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_setting_number_pane_vc

0x14b7,	// (0x00032412) list_setting_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_setting_pane_vc

0x14b7,	// (0x00032412) list_single_graphic_heading_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_single_graphic_heading_pane_vc

0x14b7,	// (0x00032412) list_single_heading_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_single_heading_pane_vc

0x14b7,	// (0x00032412) list_single_number_heading_pane_vc_ParamLimits

0x14b7,	// (0x00032412) list_single_number_heading_pane_vc

0x160e,	// (0x00032569) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x160e,	// (0x00032569) list_double_graphic_heading_pane_vc_g1

0x104d,	// (0x00031fa8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x104d,	// (0x00031fa8) list_double_graphic_heading_pane_vc_g2

0x1059,	// (0x00031fb4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1059,	// (0x00031fb4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00040924) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00040924) list_double_graphic_heading_pane_vc_g

0x161a,	// (0x00032575) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x161a,	// (0x00032575) list_double_graphic_heading_pane_vc_t1

0x1636,	// (0x00032591) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1636,	// (0x00032591) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x0004092b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x0004092b) list_double_graphic_heading_pane_vc_t

0x10af,	// (0x0003200a) list_setting_pane_vc_g1_ParamLimits

0x10af,	// (0x0003200a) list_setting_pane_vc_g1

0x10bb,	// (0x00032016) list_setting_pane_vc_g2_ParamLimits

0x10bb,	// (0x00032016) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0004071a) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0004071a) list_setting_pane_vc_g

0x1654,	// (0x000325af) list_setting_pane_vc_t1_ParamLimits

0x1654,	// (0x000325af) list_setting_pane_vc_t1

0x1670,	// (0x000325cb) list_setting_pane_vc_t2_ParamLimits

0x1670,	// (0x000325cb) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x00040959) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x00040959) list_setting_pane_vc_t

0x1115,	// (0x00032070) set_value_pane_cp_vc_ParamLimits

0x1115,	// (0x00032070) set_value_pane_cp_vc

0x104d,	// (0x00031fa8) list_single_number_heading_pane_vc_g1_ParamLimits

0x104d,	// (0x00031fa8) list_single_number_heading_pane_vc_g1

0x1059,	// (0x00031fb4) list_single_number_heading_pane_vc_g2_ParamLimits

0x1059,	// (0x00031fb4) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000404fe) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000404fe) list_single_number_heading_pane_vc_g

0x168c,	// (0x000325e7) list_single_number_heading_pane_vc_t1_ParamLimits

0x168c,	// (0x000325e7) list_single_number_heading_pane_vc_t1

0x16a2,	// (0x000325fd) list_single_number_heading_pane_vc_t2_ParamLimits

0x16a2,	// (0x000325fd) list_single_number_heading_pane_vc_t2

0x16b8,	// (0x00032613) list_single_number_heading_pane_vc_t3_ParamLimits

0x16b8,	// (0x00032613) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x0004095e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x0004095e) list_single_number_heading_pane_vc_t

0x0fbe,	// (0x00031f19) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0fbe,	// (0x00031f19) list_single_graphic_heading_pane_vc_g1

0x104d,	// (0x00031fa8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x104d,	// (0x00031fa8) list_single_graphic_heading_pane_vc_g4

0x1059,	// (0x00031fb4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1059,	// (0x00031fb4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0a,	// (0x00040965) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0a,	// (0x00040965) list_single_graphic_heading_pane_vc_g

0x168c,	// (0x000325e7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x168c,	// (0x000325e7) list_single_graphic_heading_pane_vc_t1

0x16ca,	// (0x00032625) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x16ca,	// (0x00032625) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x0004096c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x0004096c) list_single_graphic_heading_pane_vc_t

0x104d,	// (0x00031fa8) list_double2_pane_vc_g1_ParamLimits

0x104d,	// (0x00031fa8) list_double2_pane_vc_g1

0x1059,	// (0x00031fb4) list_double2_pane_vc_g2_ParamLimits

0x1059,	// (0x00031fb4) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x000404fe) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x000404fe) list_double2_pane_vc_g

0x16dc,	// (0x00032637) list_double2_pane_vc_t1_ParamLimits

0x16dc,	// (0x00032637) list_double2_pane_vc_t1

0x16f2,	// (0x0003264d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x16f2,	// (0x0003264d) list_double2_large_graphic_pane_vc_g1

0xf10c,	// (0x00040067) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf10c,	// (0x00040067) list_double2_large_graphic_pane_vc_g2

0xf118,	// (0x00040073) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf118,	// (0x00040073) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0004051b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0004051b) list_double2_large_graphic_pane_vc_g

0x16fe,	// (0x00032659) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x16fe,	// (0x00032659) list_double2_large_graphic_pane_vc_t1

0x1714,	// (0x0003266f) list_double_time_pane_vc_g1_ParamLimits

0x1714,	// (0x0003266f) list_double_time_pane_vc_g1

0x1720,	// (0x0003267b) list_double_time_pane_vc_g2_ParamLimits

0x1720,	// (0x0003267b) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x00040971) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x00040971) list_double_time_pane_vc_g

0x172c,	// (0x00032687) list_double_time_pane_vc_t1_ParamLimits

0x172c,	// (0x00032687) list_double_time_pane_vc_t1

0x1750,	// (0x000326ab) list_double_time_pane_vc_t2_ParamLimits

0x1750,	// (0x000326ab) list_double_time_pane_vc_t2

0x179a,	// (0x000326f5) list_double_time_pane_vc_t3_ParamLimits

0x179a,	// (0x000326f5) list_double_time_pane_vc_t3

0x17ac,	// (0x00032707) list_double_time_pane_vc_t4_ParamLimits

0x17ac,	// (0x00032707) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x00040976) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x00040976) list_double_time_pane_vc_t

0x104d,	// (0x00031fa8) list_double_pane_vc_g1_ParamLimits

0x104d,	// (0x00031fa8) list_double_pane_vc_g1

0x1059,	// (0x00031fb4) list_double_pane_vc_g2_ParamLimits

0x1059,	// (0x00031fb4) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x000404fe) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x000404fe) list_double_pane_vc_g

0x17c0,	// (0x0003271b) list_double_pane_vc_t1_ParamLimits

0x17c0,	// (0x0003271b) list_double_pane_vc_t1

0x17d4,	// (0x0003272f) list_double_pane_vc_t2_ParamLimits

0x17d4,	// (0x0003272f) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x0004097f) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x0004097f) list_double_pane_vc_t

0x104d,	// (0x00031fa8) list_double_number_pane_vc_g1_ParamLimits

0x104d,	// (0x00031fa8) list_double_number_pane_vc_g1

0x1059,	// (0x00031fb4) list_double_number_pane_vc_g2_ParamLimits

0x1059,	// (0x00031fb4) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x000404fe) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x000404fe) list_double_number_pane_vc_g

0x17ec,	// (0x00032747) list_double_number_pane_vc_t1_ParamLimits

0x17ec,	// (0x00032747) list_double_number_pane_vc_t1

0x17fe,	// (0x00032759) list_double_number_pane_vc_t2_ParamLimits

0x17fe,	// (0x00032759) list_double_number_pane_vc_t2

0x1812,	// (0x0003276d) list_double_number_pane_vc_t3_ParamLimits

0x1812,	// (0x0003276d) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x00040984) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x00040984) list_double_number_pane_vc_t

0x182a,	// (0x00032785) list_double_large_graphic_pane_vc_g1_ParamLimits

0x182a,	// (0x00032785) list_double_large_graphic_pane_vc_g1

0x1846,	// (0x000327a1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1846,	// (0x000327a1) list_double_large_graphic_pane_vc_g2

0x185a,	// (0x000327b5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x185a,	// (0x000327b5) list_double_large_graphic_pane_vc_g3

0x1869,	// (0x000327c4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x1869,	// (0x000327c4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x0004098b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x0004098b) list_double_large_graphic_pane_vc_g

0x1878,	// (0x000327d3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x1878,	// (0x000327d3) list_double_large_graphic_pane_vc_t1

0x1894,	// (0x000327ef) list_double_large_graphic_pane_vc_t2_ParamLimits

0x1894,	// (0x000327ef) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x00040994) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x00040994) list_double_large_graphic_pane_vc_t

0x104d,	// (0x00031fa8) list_double_heading_pane_vc_g1_ParamLimits

0x104d,	// (0x00031fa8) list_double_heading_pane_vc_g1

0x1059,	// (0x00031fb4) list_double_heading_pane_vc_g2_ParamLimits

0x1059,	// (0x00031fb4) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x000404fe) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x000404fe) list_double_heading_pane_vc_g

0x18b6,	// (0x00032811) list_double_heading_pane_vc_t1_ParamLimits

0x18b6,	// (0x00032811) list_double_heading_pane_vc_t1

0x18ca,	// (0x00032825) list_double_heading_pane_vc_t2_ParamLimits

0x18ca,	// (0x00032825) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x00040999) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00040999) list_double_heading_pane_vc_t

0x18e2,	// (0x0003283d) list_double_graphic_pane_vc_g1_ParamLimits

0x18e2,	// (0x0003283d) list_double_graphic_pane_vc_g1

0x18f5,	// (0x00032850) list_double_graphic_pane_vc_g2_ParamLimits

0x18f5,	// (0x00032850) list_double_graphic_pane_vc_g2

0x104d,	// (0x00031fa8) list_double_graphic_pane_vc_g3_ParamLimits

0x104d,	// (0x00031fa8) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x0004099e) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x0004099e) list_double_graphic_pane_vc_g

0x1912,	// (0x0003286d) list_double_graphic_pane_vc_t1_ParamLimits

0x1912,	// (0x0003286d) list_double_graphic_pane_vc_t1

0x193c,	// (0x00032897) list_double_graphic_pane_vc_t2_ParamLimits

0x193c,	// (0x00032897) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x000409a7) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x000409a7) list_double_graphic_pane_vc_t

0xef90,	// (0x0003feeb) aid_size_cell_fastswap

0xb2bd,	// (0x0003c218) aid_size_cell_touch_ParamLimits

0xb2bd,	// (0x0003c218) aid_size_cell_touch

0xf46a,	// (0x000403c5) popup_fast_swap_wide_window_ParamLimits

0xf46a,	// (0x000403c5) popup_fast_swap_wide_window

0xb46d,	// (0x0003c3c8) touch_pane_ParamLimits

0xb46d,	// (0x0003c3c8) touch_pane

0x35b2,	// (0x0003450d) button_value_adjust_pane_cp2

0xf153,	// (0x000400ae) button_value_adjust_pane_cp4

0x0103,	// (0x0003105e) form_field_data_pane_cp2

0xbc6a,	// (0x0003cbc5) form_field_data_wide_pane_cp2

0x3caf,	// (0x00034c0a) bg_scroll_pane_ParamLimits

0x04e3,	// (0x0003143e) scroll_handle_pane_ParamLimits

0x04f7,	// (0x00031452) scroll_sc2_down_pane_ParamLimits

0x04f7,	// (0x00031452) scroll_sc2_down_pane

0x3ce0,	// (0x00034c3b) scroll_sc2_up_pane_ParamLimits

0x3ce0,	// (0x00034c3b) scroll_sc2_up_pane

0xdd6c,	// (0x0003ecc7) grid_wheel_folder_pane_g1_ParamLimits

0xdd6c,	// (0x0003ecc7) grid_wheel_folder_pane_g1

0x0746,	// (0x000316a1) clock_nsta_pane_cp2_ParamLimits

0x0746,	// (0x000316a1) clock_nsta_pane_cp2

0xd25b,	// (0x0003e1b6) listscroll_midp_pane_ParamLimits

0xd267,	// (0x0003e1c2) midp_canvas_pane

0x47ee,	// (0x00035749) nsta_clock_indic_pane

0x4822,	// (0x0003577d) listscroll_form_pane_vc

0x482a,	// (0x00035785) listscroll_set_pane_vc_ParamLimits

0x482a,	// (0x00035785) listscroll_set_pane_vc

0xd475,	// (0x0003e3d0) clock_nsta_pane

0xd49f,	// (0x0003e3fa) indicator_nsta_pane

0x4c7e,	// (0x00035bd9) bg_popup_sub_pane_cp2_ParamLimits

0x4c92,	// (0x00035bed) find_pane_cp2_ParamLimits

0x4c92,	// (0x00035bed) find_pane_cp2

0x4ca8,	// (0x00035c03) grid_toobar_pane_ParamLimits

0x4d88,	// (0x00035ce3) list_form_gen_pane_vc_ParamLimits

0x4d88,	// (0x00035ce3) list_form_gen_pane_vc

0x4d9e,	// (0x00035cf9) scroll_pane_cp8_vc_ParamLimits

0x4d9e,	// (0x00035cf9) scroll_pane_cp8_vc

0x4e1a,	// (0x00035d75) data_form_wide_pane_vc_ParamLimits

0x4e1a,	// (0x00035d75) data_form_wide_pane_vc

0x4e26,	// (0x00035d81) form_field_data_wide_pane_vc_g1

0x4e2e,	// (0x00035d89) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e2e,	// (0x00035d89) form_field_data_wide_pane_vc_t1

0x35c6,	// (0x00034521) input_focus_pane_cp6_vc_ParamLimits

0x35c6,	// (0x00034521) input_focus_pane_cp6_vc

0x5174,	// (0x000360cf) list_midp_pane_ParamLimits

0x64d9,	// (0x00037434) scroll_pane_cp16_ParamLimits

0x64d9,	// (0x00037434) scroll_pane_cp16

0x51ca,	// (0x00036125) button_value_adjust_pane_ParamLimits

0x51ca,	// (0x00036125) button_value_adjust_pane

0xd9ac,	// (0x0003e907) button_value_adjust_pane_cp6_ParamLimits

0xd9ac,	// (0x0003e907) button_value_adjust_pane_cp6

0xdac6,	// (0x0003ea21) settings_code_pane_cp_ParamLimits

0xdac6,	// (0x0003ea21) settings_code_pane_cp

0xe005,	// (0x0003ef60) cell_touch_pane_g1

0xe005,	// (0x0003ef60) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00040639) cell_touch_pane_g

0xdc4a,	// (0x0003eba5) cell_touch_pane_cp_ParamLimits

0xdc4a,	// (0x0003eba5) cell_touch_pane_cp

0xdc66,	// (0x0003ebc1) cell_touch_pane_ParamLimits

0xdc66,	// (0x0003ebc1) cell_touch_pane

0xe005,	// (0x0003ef60) scroll_sc2_down_pane_g1

0xe005,	// (0x0003ef60) scroll_sc2_up_pane_g1

0x2c59,	// (0x00033bb4) bg_set_opt_pane_cp4_vc

0x6869,	// (0x000377c4) list_set_graphic_pane_vc_g1_ParamLimits

0x6869,	// (0x000377c4) list_set_graphic_pane_vc_g1

0x6875,	// (0x000377d0) list_set_graphic_pane_vc_g2_ParamLimits

0x6875,	// (0x000377d0) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00040930) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00040930) list_set_graphic_pane_vc_g

0x6881,	// (0x000377dc) text_primary_small_cp13_vc_ParamLimits

0x6881,	// (0x000377dc) text_primary_small_cp13_vc

0x6899,	// (0x000377f4) list_set_graphic_pane_vc_ParamLimits

0x6899,	// (0x000377f4) list_set_graphic_pane_vc

0x2c59,	// (0x00033bb4) input_focus_pane_cp2_vc

0xe005,	// (0x0003ef60) setting_code_pane_vc_g1

0x2d84,	// (0x00033cdf) setting_code_pane_vc_t1

0x68ac,	// (0x00037807) set_text_pane_vc_t1_ParamLimits

0x68ac,	// (0x00037807) set_text_pane_vc_t1

0x2c59,	// (0x00033bb4) input_focus_pane_cp1_vc

0x68c8,	// (0x00037823) list_set_text_pane_vc

0xe005,	// (0x0003ef60) setting_text_pane_vc_g1

0x2c59,	// (0x00033bb4) bg_set_opt_pane_cp2_vc

0x2d7b,	// (0x00033cd6) setting_slider_graphic_pane_vc_g1

0x68d2,	// (0x0003782d) setting_slider_graphic_pane_vc_t1

0x68e2,	// (0x0003783d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00040935) setting_slider_graphic_pane_vc_t

0x68f2,	// (0x0003784d) slider_set_pane_cp_vc

0x68fa,	// (0x00037855) slider_set_pane_vc_g1

0x6903,	// (0x0003785e) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x0004093a) slider_set_pane_vc_g

0x361e,	// (0x00034579) set_opt_bg_pane_g1_copy1

0x3626,	// (0x00034581) set_opt_bg_pane_g2_copy1

0x692f,	// (0x0003788a) set_opt_bg_pane_g3_copy1

0x3636,	// (0x00034591) set_opt_bg_pane_g4_copy1

0x363e,	// (0x00034599) set_opt_bg_pane_g5_copy1

0x3646,	// (0x000345a1) set_opt_bg_pane_g6_copy1

0x6939,	// (0x00037894) set_opt_bg_pane_g7_copy1

0x6943,	// (0x0003789e) set_opt_bg_pane_g8_copy1

0x694d,	// (0x000378a8) set_opt_bg_pane_g9_copy1

0x2c59,	// (0x00033bb4) bg_set_opt_pane_cp_vc

0x6957,	// (0x000378b2) setting_slider_pane_vc_t1

0x6966,	// (0x000378c1) setting_slider_pane_vc_t2

0x6976,	// (0x000378d1) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00040949) setting_slider_pane_vc_t

0x6986,	// (0x000378e1) slider_set_pane_vc

0x1203,	// (0x0003215e) volume_set_pane_vc_g1

0x120c,	// (0x00032167) volume_set_pane_vc_g2

0x1215,	// (0x00032170) volume_set_pane_vc_g3

0x121e,	// (0x00032179) volume_set_pane_vc_g4

0x1227,	// (0x00032182) volume_set_pane_vc_g5

0x1230,	// (0x0003218b) volume_set_pane_vc_g6

0x1239,	// (0x00032194) volume_set_pane_vc_g7

0x1242,	// (0x0003219d) volume_set_pane_vc_g8

0x124b,	// (0x000321a6) volume_set_pane_vc_g9

0x1254,	// (0x000321af) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x000407e7) volume_set_pane_vc_g

0x698e,	// (0x000378e9) volume_set_pane_vc

0x6996,	// (0x000378f1) button_value_adjust_pane_cp1_vc

0x69a0,	// (0x000378fb) list_highlight_pane_cp2_vc

0x69a9,	// (0x00037904) list_set_pane_vc_ParamLimits

0x69a9,	// (0x00037904) list_set_pane_vc

0x6a13,	// (0x0003796e) main_pane_set_vc_t1_ParamLimits

0x6a13,	// (0x0003796e) main_pane_set_vc_t1

0x6a28,	// (0x00037983) main_pane_set_vc_t2_ParamLimits

0x6a28,	// (0x00037983) main_pane_set_vc_t2

0x6a3a,	// (0x00037995) main_pane_set_vc_t3_ParamLimits

0x6a3a,	// (0x00037995) main_pane_set_vc_t3

0x6a4e,	// (0x000379a9) main_pane_set_vc_t4_ParamLimits

0x6a4e,	// (0x000379a9) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x00040950) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x00040950) main_pane_set_vc_t

0x6a62,	// (0x000379bd) setting_code_pane_vc_ParamLimits

0x6a62,	// (0x000379bd) setting_code_pane_vc

0x6a73,	// (0x000379ce) setting_slider_graphic_pane_vc

0x6a73,	// (0x000379ce) setting_slider_pane_vc

0x6a73,	// (0x000379ce) setting_text_pane_vc

0x6a73,	// (0x000379ce) setting_volume_pane_vc

0x6a7d,	// (0x000379d8) scroll_pane_cp121_vc

0x35a0,	// (0x000344fb) set_content_pane_vc

0x6a85,	// (0x000379e0) button_value_adjust_pane_g1

0x6a8e,	// (0x000379e9) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x000409ac) button_value_adjust_pane_g

0x6a97,	// (0x000379f2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a97,	// (0x000379f2) form_field_slider_wide_pane_vc_t1

0x6aab,	// (0x00037a06) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6aab,	// (0x00037a06) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x000409b1) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x000409b1) form_field_slider_wide_pane_vc_t

0x2fb4,	// (0x00033f0f) input_focus_pane_cp10_vc_ParamLimits

0x2fb4,	// (0x00033f0f) input_focus_pane_cp10_vc

0x6ad9,	// (0x00037a34) slider_cont_pane_cp1_vc_ParamLimits

0x6ad9,	// (0x00037a34) slider_cont_pane_cp1_vc

0x6aeb,	// (0x00037a46) slider_form_pane_g1_cp2

0x6903,	// (0x0003785e) slider_form_pane_g2_cp2

0x6b18,	// (0x00037a73) form_field_slider_pane_vc_t3

0x6b26,	// (0x00037a81) form_field_slider_pane_vc_t4

0x6b34,	// (0x00037a8f) slider_form_pane_vc_ParamLimits

0x6b34,	// (0x00037a8f) slider_form_pane_vc

0x6b41,	// (0x00037a9c) form_field_slider_pane_vc_t1_ParamLimits

0x6b41,	// (0x00037a9c) form_field_slider_pane_vc_t1

0x6aab,	// (0x00037a06) form_field_slider_pane_vc_t2_ParamLimits

0x6aab,	// (0x00037a06) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x000409c3) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x000409c3) form_field_slider_pane_vc_t

0x2fb4,	// (0x00033f0f) input_focus_pane_cp9_vc_ParamLimits

0x2fb4,	// (0x00033f0f) input_focus_pane_cp9_vc

0x6b5d,	// (0x00037ab8) slider_cont_pane_vc_ParamLimits

0x6b5d,	// (0x00037ab8) slider_cont_pane_vc

0x6b71,	// (0x00037acc) list_form_graphic_pane_cp_vc_ParamLimits

0x6b71,	// (0x00037acc) list_form_graphic_pane_cp_vc

0x4e26,	// (0x00035d81) form_field_popup_wide_pane_vc_g1

0x6b86,	// (0x00037ae1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b86,	// (0x00037ae1) form_field_popup_wide_pane_vc_t1

0x35c6,	// (0x00034521) input_focus_pane_cp8_vc_ParamLimits

0x35c6,	// (0x00034521) input_focus_pane_cp8_vc

0x6bcb,	// (0x00037b26) list_form_wide_pane_vc_ParamLimits

0x6bcb,	// (0x00037b26) list_form_wide_pane_vc

0x6bd7,	// (0x00037b32) list_form_graphic_pane_vc_g1

0x6bdf,	// (0x00037b3a) list_form_graphic_pane_vc_t1_ParamLimits

0x6bdf,	// (0x00037b3a) list_form_graphic_pane_vc_t1

0x2d39,	// (0x00033c94) list_highlight_pane_cp5_vc_ParamLimits

0x2d39,	// (0x00033c94) list_highlight_pane_cp5_vc

0x6bfb,	// (0x00037b56) list_form_graphic_pane_vc_ParamLimits

0x6bfb,	// (0x00037b56) list_form_graphic_pane_vc

0x4e26,	// (0x00035d81) form_field_popup_pane_vc_g1

0x6c11,	// (0x00037b6c) form_field_popup_pane_vc_t1_ParamLimits

0x6c11,	// (0x00037b6c) form_field_popup_pane_vc_t1

0x35c6,	// (0x00034521) input_focus_pane_cp7_vc_ParamLimits

0x35c6,	// (0x00034521) input_focus_pane_cp7_vc

0x6c28,	// (0x00037b83) list_form_pane_vc_ParamLimits

0x6c28,	// (0x00037b83) list_form_pane_vc

0x6c34,	// (0x00037b8f) data_form_pane_vc_t1_ParamLimits

0x6c34,	// (0x00037b8f) data_form_pane_vc_t1

0x361e,	// (0x00034579) input_focus_pane_vc_g1

0x3626,	// (0x00034581) input_focus_pane_vc_g2

0x362e,	// (0x00034589) input_focus_pane_vc_g3

0x3636,	// (0x00034591) input_focus_pane_vc_g4

0x363e,	// (0x00034599) input_focus_pane_vc_g5

0x3646,	// (0x000345a1) input_focus_pane_vc_g6

0x364e,	// (0x000345a9) input_focus_pane_vc_g7

0x3656,	// (0x000345b1) input_focus_pane_vc_g8

0x365e,	// (0x000345b9) input_focus_pane_vc_g9

0xe005,	// (0x0003ef60) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x000405c2) input_focus_pane_vc_g

0x4e1a,	// (0x00035d75) data_form_pane_vc_ParamLimits

0x4e1a,	// (0x00035d75) data_form_pane_vc

0x4e26,	// (0x00035d81) form_field_data_pane_vc_g1

0x6c4f,	// (0x00037baa) form_field_data_pane_vc_t1_ParamLimits

0x6c4f,	// (0x00037baa) form_field_data_pane_vc_t1

0x35c6,	// (0x00034521) input_focus_pane_vc_ParamLimits

0x35c6,	// (0x00034521) input_focus_pane_vc

0x6c69,	// (0x00037bc4) button_value_adjust_pane_cp3_vc

0x6c71,	// (0x00037bcc) button_value_adjust_pane_cp5_vc

0x6c79,	// (0x00037bd4) form_field_data_pane_vc_ParamLimits

0x6c79,	// (0x00037bd4) form_field_data_pane_vc

0x6c90,	// (0x00037beb) form_field_data_pane_vc_cp2

0x6c98,	// (0x00037bf3) form_field_data_wide_pane_vc_ParamLimits

0x6c98,	// (0x00037bf3) form_field_data_wide_pane_vc

0x6cae,	// (0x00037c09) form_field_data_wide_pane_vc_cp2

0x6cb6,	// (0x00037c11) form_field_popup_pane_vc_ParamLimits

0x6cb6,	// (0x00037c11) form_field_popup_pane_vc

0x6ccd,	// (0x00037c28) form_field_popup_wide_pane_vc_ParamLimits

0x6ccd,	// (0x00037c28) form_field_popup_wide_pane_vc

0x6ce3,	// (0x00037c3e) form_field_slider_pane_vc_ParamLimits

0x6ce3,	// (0x00037c3e) form_field_slider_pane_vc

0x6cf6,	// (0x00037c51) form_field_slider_wide_pane_vc_ParamLimits

0x6cf6,	// (0x00037c51) form_field_slider_wide_pane_vc

0xdc84,	// (0x0003ebdf) grid_touch_1_pane_ParamLimits

0xdc84,	// (0x0003ebdf) grid_touch_1_pane

0xdc98,	// (0x0003ebf3) grid_touch_2_pane_ParamLimits

0xdc98,	// (0x0003ebf3) grid_touch_2_pane

0x6dda,	// (0x00037d35) touch_pane_g1_ParamLimits

0x6dda,	// (0x00037d35) touch_pane_g1

0x6d2d,	// (0x00037c88) cell_app_pane_cp_wide_ParamLimits

0x6d2d,	// (0x00037c88) cell_app_pane_cp_wide

0x6d3e,	// (0x00037c99) grid_popup_fast_wide_pane_ParamLimits

0x6d3e,	// (0x00037c99) grid_popup_fast_wide_pane

0x6d52,	// (0x00037cad) scroll_pane_cp19_ParamLimits

0x6d52,	// (0x00037cad) scroll_pane_cp19

0x2c59,	// (0x00033bb4) bg_popup_window_pane_cp20

0x6d66,	// (0x00037cc1) listscroll_popup_fast_wide_pane

0xdcc2,	// (0x0003ec1d) grid_indicator_nsta_pane

0x6d80,	// (0x00037cdb) clock_nsta_pane_g1

0x6d89,	// (0x00037ce4) clock_nsta_pane_t1

0xdcce,	// (0x0003ec29) cell_indicator_nsta_pane_ParamLimits

0xdcce,	// (0x0003ec29) cell_indicator_nsta_pane

0x6dda,	// (0x00037d35) cell_indicator_nsta_pane_g1

0xdce9,	// (0x0003ec44) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x000409d4) cell_indicator_nsta_pane_g

0x6dfa,	// (0x00037d55) clock_nsta_pane_cp

0x6e03,	// (0x00037d5e) indicator_nsta_pane_cp

0x6e0d,	// (0x00037d68) nsta_clock_indic_pane_g1

0x2e02,	// (0x00033d5d) grid_indicator_pane

0x3dd5,	// (0x00034d30) scroll_pane_cp29

0x0695,	// (0x000315f0) indicator_nsta_pane_cp2_ParamLimits

0x0695,	// (0x000315f0) indicator_nsta_pane_cp2

0x2d39,	// (0x00033c94) main_apps_wheel_pane

0x5035,	// (0x00035f90) form_midp_field_text_pane_ParamLimits

0x5180,	// (0x000360db) scroll_bar_cp050_ParamLimits

0x6e66,	// (0x00037dc1) cell_indicator_pane_ParamLimits

0x6e66,	// (0x00037dc1) cell_indicator_pane

0x6e7d,	// (0x00037dd8) cell_indicator_pane_g1

0xdcf6,	// (0x0003ec51) grid_wheel_folder_pane_ParamLimits

0xdcf6,	// (0x0003ec51) grid_wheel_folder_pane

0xdd04,	// (0x0003ec5f) list_wheel_apps_pane_ParamLimits

0xdd04,	// (0x0003ec5f) list_wheel_apps_pane

0xdd12,	// (0x0003ec6d) main_apps_wheel_pane_g1_ParamLimits

0xdd12,	// (0x0003ec6d) main_apps_wheel_pane_g1

0xdd1e,	// (0x0003ec79) main_apps_wheel_pane_g2_ParamLimits

0xdd1e,	// (0x0003ec79) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x000409f0) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x000409f0) main_apps_wheel_pane_g

0xdd2c,	// (0x0003ec87) main_apps_wheel_pane_t1_ParamLimits

0xdd2c,	// (0x0003ec87) main_apps_wheel_pane_t1

0xdd40,	// (0x0003ec9b) list_wheel_apps_pane_g1

0xdd48,	// (0x0003eca3) list_wheel_apps_pane_g2

0xdd50,	// (0x0003ecab) list_wheel_apps_pane_g3

0xdd58,	// (0x0003ecb3) list_wheel_apps_pane_g4

0xdd62,	// (0x0003ecbd) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x000409f5) list_wheel_apps_pane_g

0x4369,	// (0x000352c4) navi_icon_text_pane

0xd369,	// (0x0003e2c4) aid_fill_nsta

0x6f42,	// (0x00037e9d) navi_icon_text_pane_g1

0x6f4e,	// (0x00037ea9) navi_icon_text_pane_t1

0x4207,	// (0x00035162) list_set_graphic_pane_t1_ParamLimits

0x4207,	// (0x00035162) list_set_graphic_pane_t1

0x58eb,	// (0x00036846) popup_midp_note_alarm_window_t6_ParamLimits

0x58eb,	// (0x00036846) popup_midp_note_alarm_window_t6

0x58fd,	// (0x00036858) popup_midp_note_alarm_window_t7_ParamLimits

0x58fd,	// (0x00036858) popup_midp_note_alarm_window_t7

0x590f,	// (0x0003686a) popup_midp_note_alarm_window_t8_ParamLimits

0x590f,	// (0x0003686a) popup_midp_note_alarm_window_t8

0x5921,	// (0x0003687c) popup_midp_note_alarm_window_t9_ParamLimits

0x5921,	// (0x0003687c) popup_midp_note_alarm_window_t9

0x5933,	// (0x0003688e) popup_midp_note_alarm_window_t10_ParamLimits

0x5933,	// (0x0003688e) popup_midp_note_alarm_window_t10

0x5945,	// (0x000368a0) popup_midp_note_alarm_window_t11_ParamLimits

0x5945,	// (0x000368a0) popup_midp_note_alarm_window_t11

0x5957,	// (0x000368b2) scroll_pane_cp17_ParamLimits

0x5957,	// (0x000368b2) scroll_pane_cp17

0x1203,	// (0x0003215e) volume_small_pane_cp_g1

0x1966,	// (0x000328c1) volume_small_pane_cp_g2

0x196f,	// (0x000328ca) volume_small_pane_cp_g3

0x1978,	// (0x000328d3) volume_small_pane_cp_g4

0x1981,	// (0x000328dc) volume_small_pane_cp_g5

0x198a,	// (0x000328e5) volume_small_pane_cp_g6

0x1993,	// (0x000328ee) volume_small_pane_cp_g7

0x199c,	// (0x000328f7) volume_small_pane_cp_g8

0x19a5,	// (0x00032900) volume_small_pane_cp_g9

0x19ae,	// (0x00032909) volume_small_pane_cp_g10

0x45cf,	// (0x0003552a) midp_ticker_pane_g1_ParamLimits

0x45db,	// (0x00035536) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0004068e) midp_ticker_pane_g_ParamLimits

0x45e7,	// (0x00035542) midp_ticker_pane_t1_ParamLimits

0xd38d,	// (0x0003e2e8) aid_fill_nsta_2

0x516c,	// (0x000360c7) list_form2_midp_pane

0x62b0,	// (0x0003720b) midp_editing_number_pane_ParamLimits

0x62bf,	// (0x0003721a) midp_ticker_pane_ParamLimits

0x6f60,	// (0x00037ebb) form2_midp_field_pane

0x6f84,	// (0x00037edf) scroll_pane_cp51

0x6fa4,	// (0x00037eff) form2_midp_button_pane_ParamLimits

0x6fa4,	// (0x00037eff) form2_midp_button_pane

0x6fb6,	// (0x00037f11) form2_midp_content_pane_ParamLimits

0x6fb6,	// (0x00037f11) form2_midp_content_pane

0x6fd0,	// (0x00037f2b) form2_midp_field_choice_group_pane

0x6fd8,	// (0x00037f33) form2_midp_field_pane_g1

0x6fe0,	// (0x00037f3b) form2_midp_field_pane_g2

0x6fe8,	// (0x00037f43) form2_midp_field_pane_g3

0x6ff0,	// (0x00037f4b) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x00040a1a) form2_midp_field_pane_g

0x6ff8,	// (0x00037f53) form2_midp_gauge_slider_pane

0x7000,	// (0x00037f5b) form2_midp_gauge_wait_pane

0x7008,	// (0x00037f63) form2_midp_image_pane_ParamLimits

0x7008,	// (0x00037f63) form2_midp_image_pane

0x7023,	// (0x00037f7e) form2_midp_label_pane_ParamLimits

0x7023,	// (0x00037f7e) form2_midp_label_pane

0xdd95,	// (0x0003ecf0) form2_midp_label_pane_cp_ParamLimits

0xdd95,	// (0x0003ecf0) form2_midp_label_pane_cp

0x705d,	// (0x00037fb8) form2_midp_string_pane_ParamLimits

0x705d,	// (0x00037fb8) form2_midp_string_pane

0xc781,	// (0x0003d6dc) form2_midp_text_pane_ParamLimits

0xc781,	// (0x0003d6dc) form2_midp_text_pane

0x706f,	// (0x00037fca) form2_midp_time_pane

0x707f,	// (0x00037fda) input_focus_pane_cp51_ParamLimits

0x707f,	// (0x00037fda) input_focus_pane_cp51

0x7097,	// (0x00037ff2) form2_midp_label_pane_t1_ParamLimits

0x7097,	// (0x00037ff2) form2_midp_label_pane_t1

0xc79a,	// (0x0003d6f5) form2_mdip_text_pane_t1_ParamLimits

0xc79a,	// (0x0003d6f5) form2_mdip_text_pane_t1

0x19f0,	// (0x0003294b) form2_midp_time_pane_t1

0x70e0,	// (0x0003803b) form2_midp_gauge_slider_pane_t1

0xddb4,	// (0x0003ed0f) form2_midp_gauge_slider_pane_t2

0xddc6,	// (0x0003ed21) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x00040a23) form2_midp_gauge_slider_pane_t

0x7116,	// (0x00038071) form2_midp_slider_pane

0x7122,	// (0x0003807d) form2_midp_gauge_wait_pane_t1

0x7130,	// (0x0003808b) form2_midp_wait_pane_ParamLimits

0x7130,	// (0x0003808b) form2_midp_wait_pane

0xddd8,	// (0x0003ed33) list_single_2graphic_pane_cp4_ParamLimits

0xddd8,	// (0x0003ed33) list_single_2graphic_pane_cp4

0xd7a9,	// (0x0003e704) list_single_midp_graphic_pane_cp_ParamLimits

0xd7a9,	// (0x0003e704) list_single_midp_graphic_pane_cp

0x2c59,	// (0x00033bb4) list_highlight_pane_cp20

0x717f,	// (0x000380da) list_single_2graphic_pane_g1_cp4

0x7187,	// (0x000380e2) list_single_2graphic_pane_g2_cp4

0x718f,	// (0x000380ea) list_single_2graphic_pane_t1_cp4

0x2d39,	// (0x00033c94) list_highlight_pane_cp21

0x719e,	// (0x000380f9) list_single_midp_graphic_pane_g4_cp

0x71ad,	// (0x00038108) list_single_midp_graphic_pane_t1_cp

0xddec,	// (0x0003ed47) form2_mdip_string_pane_t1_ParamLimits

0xddec,	// (0x0003ed47) form2_mdip_string_pane_t1

0x2c59,	// (0x00033bb4) bg_wml_button_pane_cp2

0xe005,	// (0x0003ef60) form2_midp_image_pane_g1

0xf124,	// (0x0004007f) list_double_large_graphic_pane_g5_ParamLimits

0xf124,	// (0x0004007f) list_double_large_graphic_pane_g5

0xd25b,	// (0x0003e1b6) midp_form_pane_ParamLimits

0x2d39,	// (0x00033c94) main_apps_wheel_pane_ParamLimits

0xc3e2,	// (0x0003d33d) popup_preview_window_ParamLimits

0xc3e2,	// (0x0003d33d) popup_preview_window

0x0f39,	// (0x00031e94) popup_touch_info_window_ParamLimits

0x0f39,	// (0x00031e94) popup_touch_info_window

0x0f57,	// (0x00031eb2) popup_touch_menu_window_ParamLimits

0x0f57,	// (0x00031eb2) popup_touch_menu_window

0xdffb,	// (0x0003ef56) bg_popup_sub_pane_cp6

0x72bb,	// (0x00038216) list_touch_menu_pane

0x72c3,	// (0x0003821e) list_single_touch_menu_pane_ParamLimits

0x72c3,	// (0x0003821e) list_single_touch_menu_pane

0x72d9,	// (0x00038234) list_single_touch_menu_pane_t1

0x2d39,	// (0x00033c94) bg_popup_sub_pane_cp7_ParamLimits

0x2d39,	// (0x00033c94) bg_popup_sub_pane_cp7

0x72e7,	// (0x00038242) heading_sub_pane

0x72ef,	// (0x0003824a) list_touch_info_pane_ParamLimits

0x72ef,	// (0x0003824a) list_touch_info_pane

0x72fe,	// (0x00038259) list_single_touch_info_pane_ParamLimits

0x72fe,	// (0x00038259) list_single_touch_info_pane

0x7310,	// (0x0003826b) list_single_touch_info_pane_t1

0x731e,	// (0x00038279) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x00040a31) list_single_touch_info_pane_t

0x44f2,	// (0x0003544d) bg_popup_heading_pane_cp

0x732c,	// (0x00038287) heading_sub_pane_t1

0x4db4,	// (0x00035d0f) bg_popup_preview_window_pane_cp_ParamLimits

0x4db4,	// (0x00035d0f) bg_popup_preview_window_pane_cp

0x72e7,	// (0x00038242) heading_preview_pane

0x72ef,	// (0x0003824a) list_preview_pane_ParamLimits

0x72ef,	// (0x0003824a) list_preview_pane

0x733a,	// (0x00038295) popup_preview_window_g1

0x72fe,	// (0x00038259) list_single_preview_pane_ParamLimits

0x72fe,	// (0x00038259) list_single_preview_pane

0x7342,	// (0x0003829d) list_single_preview_pane_g1

0x734a,	// (0x000382a5) list_single_preview_pane_t1

0x7310,	// (0x0003826b) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x00040a36) list_single_preview_pane_t

0x7358,	// (0x000382b3) bg_popup_heading_pane_cp2_ParamLimits

0x7358,	// (0x000382b3) bg_popup_heading_pane_cp2

0x736e,	// (0x000382c9) heading_preview_pane_g1

0x7376,	// (0x000382d1) heading_preview_pane_t1_ParamLimits

0x7376,	// (0x000382d1) heading_preview_pane_t1

0x2e25,	// (0x00033d80) soft_indicator_pane_t1_ParamLimits

0x3539,	// (0x00034494) scroll_pane_ParamLimits

0x3cce,	// (0x00034c29) scroll_sc2_left_pane

0x3cd7,	// (0x00034c32) scroll_sc2_right_pane

0x3cf6,	// (0x00034c51) scroll_bg_pane_g1_ParamLimits

0x3d0b,	// (0x00034c66) scroll_bg_pane_g2_ParamLimits

0x3d23,	// (0x00034c7e) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00040619) scroll_bg_pane_g_ParamLimits

0x3cf6,	// (0x00034c51) scroll_handle_pane_g1_ParamLimits

0x3d45,	// (0x00034ca0) scroll_handle_pane_g2_ParamLimits

0x3d23,	// (0x00034c7e) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00040620) scroll_handle_pane_g_ParamLimits

0x09fd,	// (0x00031958) popup_choice_list_window_ParamLimits

0x09fd,	// (0x00031958) popup_choice_list_window

0x4c8a,	// (0x00035be5) choice_list_pane

0x4d0c,	// (0x00035c67) cell_toolbar_pane_t1

0x4d34,	// (0x00035c8f) toolbar_button_pane_ParamLimits

0x5e11,	// (0x00036d6c) ai_gene_pane_1_t2_ParamLimits

0x5e11,	// (0x00036d6c) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00040843) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00040843) ai_gene_pane_1_t

0x7393,	// (0x000382ee) scroll_sc2_left_pane_g1

0x7393,	// (0x000382ee) scroll_sc2_right_pane_g1

0x4816,	// (0x00035771) bg_popup_sub_pane_cp10

0x739d,	// (0x000382f8) list_choice_list_pane

0x73b6,	// (0x00038311) list_single_choice_list_pane_ParamLimits

0x73b6,	// (0x00038311) list_single_choice_list_pane

0x73c9,	// (0x00038324) list_single_choice_list_pane_g1

0x376a,	// (0x000346c5) list_single_choice_list_pane_t1_ParamLimits

0x376a,	// (0x000346c5) list_single_choice_list_pane_t1

0x73d1,	// (0x0003832c) choice_list_pane_g1

0x73d9,	// (0x00038334) choice_list_pane_t1

0xdffb,	// (0x0003ef56) input_focus_pane_cp11

0x3bab,	// (0x00034b06) title_pane_stacon_g2_ParamLimits

0x3bab,	// (0x00034b06) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x000405ff) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x000405ff) title_pane_stacon_g

0x44f2,	// (0x0003544d) cursor_press_pane

0xc089,	// (0x0003cfe4) popup_fep_hwr_window_ParamLimits

0xc089,	// (0x0003cfe4) popup_fep_hwr_window

0x0b23,	// (0x00031a7e) popup_fep_vkb_window_ParamLimits

0x0b23,	// (0x00031a7e) popup_fep_vkb_window

0x73e7,	// (0x00038342) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x00040a5f) fep_vkb_side_pane_g_ParamLimits

0x1a3c,	// (0x00032997) fep_hwr_candidate_pane_ParamLimits

0x1a3c,	// (0x00032997) fep_hwr_candidate_pane

0x1a66,	// (0x000329c1) fep_hwr_side_pane_ParamLimits

0x1a66,	// (0x000329c1) fep_hwr_side_pane

0x1a86,	// (0x000329e1) fep_hwr_top_pane_ParamLimits

0x1a86,	// (0x000329e1) fep_hwr_top_pane

0x1a9e,	// (0x000329f9) fep_hwr_write_pane_ParamLimits

0x1a9e,	// (0x000329f9) fep_hwr_write_pane

0xfb04,	// (0x00040a5f) fep_vkb_side_pane_g

0x73ef,	// (0x0003834a) fep_hwr_top_pane_g1

0x7401,	// (0x0003835c) fep_hwr_top_pane_g2

0x1ad8,	// (0x00032a33) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x00040a3b) fep_hwr_top_pane_g

0x1aed,	// (0x00032a48) fep_hwr_top_text_pane

0x3ec5,	// (0x00034e20) fep_hwr_top_text_pane_g1

0x7437,	// (0x00038392) fep_hwr_top_text_pane_t1

0x1be3,	// (0x00032b3e) fep_hwr_candidate_pane_g1

0x768a,	// (0x000385e5) fep_vkb_keypad_pane_g3_ParamLimits

0x768a,	// (0x000385e5) fep_vkb_keypad_pane_g3

0x76b2,	// (0x0003860d) fep_vkb_keypad_pane_g4_ParamLimits

0x76b2,	// (0x0003860d) fep_vkb_keypad_pane_g4

0x7721,	// (0x0003867c) fep_vkb_bottom_pane_g2_ParamLimits

0x7721,	// (0x0003867c) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x00040a66) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x00040a66) fep_vkb_bottom_pane_g

0x7393,	// (0x000382ee) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x00040a70) cell_vkb_side_pane_g

0x77ac,	// (0x00038707) cell_vkb_side_pane_t1

0x77ba,	// (0x00038715) cell_vkb_side_pane_t1_copy1

0x7393,	// (0x000382ee) bg_fep_vkb_candidate_pane_g2

0x78e6,	// (0x00038841) cell_vkb_candidate_pane_ParamLimits

0x7445,	// (0x000383a0) aid_size_cell_vkb_ParamLimits

0x7445,	// (0x000383a0) aid_size_cell_vkb

0x78e6,	// (0x00038841) cell_vkb_candidate_pane

0x1c0a,	// (0x00032b65) bg_popup_fep_shadow_pane_g1

0xde6e,	// (0x0003edc9) fep_vkb_bottom_pane_ParamLimits

0xde6e,	// (0x0003edc9) fep_vkb_bottom_pane

0x7509,	// (0x00038464) fep_vkb_candidate_pane_ParamLimits

0x7509,	// (0x00038464) fep_vkb_candidate_pane

0xde93,	// (0x0003edee) fep_vkb_keypad_pane_ParamLimits

0xde93,	// (0x0003edee) fep_vkb_keypad_pane

0xdecf,	// (0x0003ee2a) fep_vkb_side_pane_ParamLimits

0xdecf,	// (0x0003ee2a) fep_vkb_side_pane

0xdf0b,	// (0x0003ee66) fep_vkb_top_pane_ParamLimits

0xdf0b,	// (0x0003ee66) fep_vkb_top_pane

0x75e3,	// (0x0003853e) fep_vkb_top_pane_g1_ParamLimits

0x75e3,	// (0x0003853e) fep_vkb_top_pane_g1

0x75f2,	// (0x0003854d) fep_vkb_top_pane_g2_ParamLimits

0x75f2,	// (0x0003854d) fep_vkb_top_pane_g2

0x7601,	// (0x0003855c) fep_vkb_top_pane_g3_ParamLimits

0x7601,	// (0x0003855c) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x00040a56) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x00040a56) fep_vkb_top_pane_g

0x761f,	// (0x0003857a) fep_vkb_top_text_pane_ParamLimits

0x761f,	// (0x0003857a) fep_vkb_top_text_pane

0xdf47,	// (0x0003eea2) fep_vkb_side_pane_g1_ParamLimits

0xdf47,	// (0x0003eea2) fep_vkb_side_pane_g1

0x7679,	// (0x000385d4) grid_vkb_side_pane_ParamLimits

0x7679,	// (0x000385d4) grid_vkb_side_pane

0x1c12,	// (0x00032b6d) bg_popup_fep_shadow_pane_g2

0x1c1b,	// (0x00032b76) bg_popup_fep_shadow_pane_g3

0x1c23,	// (0x00032b7e) bg_popup_fep_shadow_pane_g4

0x1c2c,	// (0x00032b87) bg_popup_fep_shadow_pane_g5

0x1c36,	// (0x00032b91) bg_popup_fep_shadow_pane_g6

0x1c3e,	// (0x00032b99) bg_popup_fep_shadow_pane_g7

0x3636,	// (0x00034591) bg_popup_fep_shadow_pane_g8

0x76d0,	// (0x0003862b) grid_vkb_keypad_number_pane_ParamLimits

0x76d0,	// (0x0003862b) grid_vkb_keypad_number_pane

0x76e0,	// (0x0003863b) grid_vkb_keypad_pane_ParamLimits

0x76e0,	// (0x0003863b) grid_vkb_keypad_pane

0x7706,	// (0x00038661) fep_vkb_bottom_pane_g1_ParamLimits

0x7706,	// (0x00038661) fep_vkb_bottom_pane_g1

0x772f,	// (0x0003868a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x772f,	// (0x0003868a) grid_vkb_keypad_bottom_left_pane

0x7744,	// (0x0003869f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7744,	// (0x0003869f) grid_vkb_keypad_bottom_right_pane

0x7759,	// (0x000386b4) fep_vkb_top_text_pane_g1

0xdf8e,	// (0x0003eee9) fep_vkb_top_text_pane_t1

0xdfa0,	// (0x0003eefb) cell_vkb_side_pane_ParamLimits

0xdfa0,	// (0x0003eefb) cell_vkb_side_pane

0x7393,	// (0x000382ee) cell_vkb_side_pane_g1

0x77c8,	// (0x00038723) cell_vkb_keypad_pane_ParamLimits

0x77c8,	// (0x00038723) cell_vkb_keypad_pane

0x783d,	// (0x00038798) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x00040a83) bg_popup_fep_shadow_pane_g

0x1c50,	// (0x00032bab) cell_hwr_side_pane_g1

0x1c50,	// (0x00032bab) cell_hwr_side_pane_g2

0x7847,	// (0x000387a2) cell_vkb_keypad_pane_t1

0xdfb6,	// (0x0003ef11) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdfb6,	// (0x0003ef11) cell_vkb_keypad_bottom_left_pane

0xe01c,	// (0x0003ef77) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe01c,	// (0x0003ef77) cell_vkb_keypad_bottom_right_pane

0x7393,	// (0x000382ee) cell_vkb_keypad_bottom_left_pane_g1

0x7393,	// (0x000382ee) cell_vkb_keypad_bottom_right_pane_g1

0x78ab,	// (0x00038806) cell_vkb_keypad_number_pane_ParamLimits

0x78ab,	// (0x00038806) cell_vkb_keypad_number_pane

0x78ca,	// (0x00038825) cell_vkb_keypad_number_pane_g1

0x78d4,	// (0x0003882f) cell_vkb_keypad_number_pane_g2

0x78dd,	// (0x00038838) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x00040a75) cell_vkb_keypad_number_pane_g

0x7847,	// (0x000387a2) cell_vkb_keypad_number_pane_t1

0x7901,	// (0x0003885c) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x00040a96) cell_hwr_side_pane_g

0x791a,	// (0x00038875) cell_hwr_side_pane_t1

0x1c5a,	// (0x00032bb5) cell_hwr_side_pane_t1_copy1

0x1c68,	// (0x00032bc3) cell_hwr_candidate_pane_g1

0x1c97,	// (0x00032bf2) cell_hwr_candidate_pane_t1

0x7393,	// (0x000382ee) cell_vkb_candidate_pane_g2

0x79a0,	// (0x000388fb) cell_vkb_candidate_pane_t1

0x1a03,	// (0x0003295e) bg_popup_fep_shadow_pane_ParamLimits

0x1a03,	// (0x0003295e) bg_popup_fep_shadow_pane

0x1ab8,	// (0x00032a13) bg_fep_hwr_top_pane_g4

0x7413,	// (0x0003836e) bg_hwr_side_pane_g1_ParamLimits

0x7413,	// (0x0003836e) bg_hwr_side_pane_g1

0xc7cf,	// (0x0003d72a) cell_hwr_side_pane_ParamLimits

0xc7cf,	// (0x0003d72a) cell_hwr_side_pane

0x1b64,	// (0x00032abf) fep_hwr_write_pane_g1_ParamLimits

0x1b64,	// (0x00032abf) fep_hwr_write_pane_g1

0x1b71,	// (0x00032acc) fep_hwr_write_pane_g2_ParamLimits

0x1b71,	// (0x00032acc) fep_hwr_write_pane_g2

0x1b7e,	// (0x00032ad9) fep_hwr_write_pane_g3_ParamLimits

0x1b7e,	// (0x00032ad9) fep_hwr_write_pane_g3

0xc7ef,	// (0x0003d74a) fep_hwr_write_pane_g4_ParamLimits

0xc7ef,	// (0x0003d74a) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x00040a42) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x00040a42) fep_hwr_write_pane_g

0x1ab8,	// (0x00032a13) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1ab8,	// (0x00032a13) bg_fep_hwr_candidate_pane_g2

0x1ba1,	// (0x00032afc) cell_hwr_candidate_pane_ParamLimits

0x1ba1,	// (0x00032afc) cell_hwr_candidate_pane

0x1be3,	// (0x00032b3e) fep_hwr_candidate_pane_g1_ParamLimits

0x7473,	// (0x000383ce) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7473,	// (0x000383ce) bg_popup_fep_shadow_pane_cp2

0x7611,	// (0x0003856c) fep_vkb_top_pane_g4_ParamLimits

0x7611,	// (0x0003856c) fep_vkb_top_pane_g4

0x7657,	// (0x000385b2) fep_vkb_side_pane_g2_ParamLimits

0x7657,	// (0x000385b2) fep_vkb_side_pane_g2

0xbb78,	// (0x0003cad3) list_setting_pane_t4_ParamLimits

0xbb78,	// (0x0003cad3) list_setting_pane_t4

0xbc12,	// (0x0003cb6d) list_setting_number_pane_t5_ParamLimits

0xbc12,	// (0x0003cb6d) list_setting_number_pane_t5

0x3efc,	// (0x00034e57) list_double_heading_pane_cp2_ParamLimits

0x3efc,	// (0x00034e57) list_double_heading_pane_cp2

0x35d4,	// (0x0003452f) list_double_heading_pane_g1_cp2_ParamLimits

0x35d4,	// (0x0003452f) list_double_heading_pane_g1_cp2

0x35e0,	// (0x0003453b) list_double_heading_pane_g2_cp2_ParamLimits

0x35e0,	// (0x0003453b) list_double_heading_pane_g2_cp2

0x79ae,	// (0x00038909) list_double_heading_pane_t1_cp2_ParamLimits

0x79ae,	// (0x00038909) list_double_heading_pane_t1_cp2

0x79c4,	// (0x0003891f) list_double_heading_pane_t2_cp2_ParamLimits

0x79c4,	// (0x0003891f) list_double_heading_pane_t2_cp2

0xdff3,	// (0x0003ef4e) aid_value_unit2

0xf48e,	// (0x000403e9) popup_preview_fixed_window

0x2fc2,	// (0x00033f1d) bg_popup_preview_window_pane_cp02

0x79d6,	// (0x00038931) list_preview_fixed_pane

0x7a1c,	// (0x00038977) list_empty_pane_fp_ParamLimits

0x7a1c,	// (0x00038977) list_empty_pane_fp

0x7a1c,	// (0x00038977) list_single_cale_day_pane_fp_ParamLimits

0x7a1c,	// (0x00038977) list_single_cale_day_pane_fp

0x7a1c,	// (0x00038977) list_single_graphic_heading_pane_fp_ParamLimits

0x7a1c,	// (0x00038977) list_single_graphic_heading_pane_fp

0x7a1c,	// (0x00038977) list_single_graphic_pane_fp_ParamLimits

0x7a1c,	// (0x00038977) list_single_graphic_pane_fp

0x7a1c,	// (0x00038977) list_single_heading_pane_fp_ParamLimits

0x7a1c,	// (0x00038977) list_single_heading_pane_fp

0x7a1c,	// (0x00038977) list_single_pane_fp_ParamLimits

0x7a1c,	// (0x00038977) list_single_pane_fp

0x7a31,	// (0x0003898c) list_single_pane_fp_g1_ParamLimits

0x7a31,	// (0x0003898c) list_single_pane_fp_g1

0x1cb5,	// (0x00032c10) list_single_pane_fp_g2_ParamLimits

0x1cb5,	// (0x00032c10) list_single_pane_fp_g2

0x1cc1,	// (0x00032c1c) list_single_pane_fp_g3_ParamLimits

0x1cc1,	// (0x00032c1c) list_single_pane_fp_g3

0x7a3d,	// (0x00038998) list_single_pane_fp_g4_ParamLimits

0x7a3d,	// (0x00038998) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x00040aa9) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x00040aa9) list_single_pane_fp_g

0x1cd5,	// (0x00032c30) list_single_pane_fp_t1_ParamLimits

0x1cd5,	// (0x00032c30) list_single_pane_fp_t1

0x1cec,	// (0x00032c47) list_single_graphic_pane_fp_g1_ParamLimits

0x1cec,	// (0x00032c47) list_single_graphic_pane_fp_g1

0x7a31,	// (0x0003898c) list_single_graphic_pane_fp_g2_ParamLimits

0x7a31,	// (0x0003898c) list_single_graphic_pane_fp_g2

0x1cb5,	// (0x00032c10) list_single_graphic_pane_fp_g3_ParamLimits

0x1cb5,	// (0x00032c10) list_single_graphic_pane_fp_g3

0x1cc1,	// (0x00032c1c) list_single_graphic_pane_fp_g4_ParamLimits

0x1cc1,	// (0x00032c1c) list_single_graphic_pane_fp_g4

0x7a3d,	// (0x00038998) list_single_graphic_pane_fp_g5_ParamLimits

0x7a3d,	// (0x00038998) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x00040ab2) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x00040ab2) list_single_graphic_pane_fp_g

0x1cf8,	// (0x00032c53) list_single_graphic_pane_fp_t1_ParamLimits

0x1cf8,	// (0x00032c53) list_single_graphic_pane_fp_t1

0x1cec,	// (0x00032c47) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1cec,	// (0x00032c47) list_single_graphic_heading_pane_fp_g1

0x7a31,	// (0x0003898c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a31,	// (0x0003898c) list_single_graphic_heading_pane_fp_g2

0x1cb5,	// (0x00032c10) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1cb5,	// (0x00032c10) list_single_graphic_heading_pane_fp_g3

0x1cc1,	// (0x00032c1c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1cc1,	// (0x00032c1c) list_single_graphic_heading_pane_fp_g4

0x7a3d,	// (0x00038998) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a3d,	// (0x00038998) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00040ab2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00040ab2) list_single_graphic_heading_pane_fp_g

0x1d0e,	// (0x00032c69) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1d0e,	// (0x00032c69) list_single_graphic_heading_pane_fp_t1

0x1d24,	// (0x00032c7f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1d24,	// (0x00032c7f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x00040abd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x00040abd) list_single_graphic_heading_pane_fp_t

0x1d36,	// (0x00032c91) list_single_cale_day_pane_fp_g1_ParamLimits

0x1d36,	// (0x00032c91) list_single_cale_day_pane_fp_g1

0x7a49,	// (0x000389a4) list_single_cale_day_pane_fp_g2_ParamLimits

0x7a49,	// (0x000389a4) list_single_cale_day_pane_fp_g2

0x1d6e,	// (0x00032cc9) list_single_cale_day_pane_fp_g3_ParamLimits

0x1d6e,	// (0x00032cc9) list_single_cale_day_pane_fp_g3

0x1d96,	// (0x00032cf1) list_single_cale_day_pane_fp_g4_ParamLimits

0x1d96,	// (0x00032cf1) list_single_cale_day_pane_fp_g4

0x1dba,	// (0x00032d15) list_single_cale_day_pane_fp_g5_ParamLimits

0x1dba,	// (0x00032d15) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x00040ac2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x00040ac2) list_single_cale_day_pane_fp_g

0x3941,	// (0x0003489c) list_single_cale_day_pane_fp_t1_ParamLimits

0x3941,	// (0x0003489c) list_single_cale_day_pane_fp_t1

0x3967,	// (0x000348c2) list_single_cale_day_pane_fp_t2_ParamLimits

0x3967,	// (0x000348c2) list_single_cale_day_pane_fp_t2

0x3980,	// (0x000348db) list_single_cale_day_pane_fp_t3_ParamLimits

0x3980,	// (0x000348db) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x00040acd) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x00040acd) list_single_cale_day_pane_fp_t

0x7a31,	// (0x0003898c) list_empty_pane_fp_g1_ParamLimits

0x7a31,	// (0x0003898c) list_empty_pane_fp_g1

0x3999,	// (0x000348f4) list_empty_pane_fp_t1

0x39a7,	// (0x00034902) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x00040ad4) list_empty_pane_fp_t

0x7a31,	// (0x0003898c) list_single_heading_pane_fp_g1_ParamLimits

0x7a31,	// (0x0003898c) list_single_heading_pane_fp_g1

0x1cb5,	// (0x00032c10) list_single_heading_pane_fp_g2_ParamLimits

0x1cb5,	// (0x00032c10) list_single_heading_pane_fp_g2

0x1cc1,	// (0x00032c1c) list_single_heading_pane_fp_g3_ParamLimits

0x1cc1,	// (0x00032c1c) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x00040ad9) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00040ad9) list_single_heading_pane_fp_g

0x39b5,	// (0x00034910) list_single_heading_pane_fp_t1_ParamLimits

0x39b5,	// (0x00034910) list_single_heading_pane_fp_t1

0x39c7,	// (0x00034922) list_single_heading_pane_fp_t2_ParamLimits

0x39c7,	// (0x00034922) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x00040ae0) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x00040ae0) list_single_heading_pane_fp_t

0x37d8,	// (0x00034733) aid_size_cell_fast

0x2f32,	// (0x00033e8d) soft_indicator_pane_cp1_t1

0x3815,	// (0x00034770) cell_app_pane_cp2_ParamLimits

0x3815,	// (0x00034770) cell_app_pane_cp2

0x1a25,	// (0x00032980) fep_hwr_candidate_drop_down_list_pane

0x1bfd,	// (0x00032b58) fep_hwr_candidate_pane_g3_ParamLimits

0x1bfd,	// (0x00032b58) fep_hwr_candidate_pane_g3

0xe00f,	// (0x0003ef6a) fep_hwr_candidate_pane_g4_ParamLimits

0xe00f,	// (0x0003ef6a) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x00040a4f) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x00040a4f) fep_hwr_candidate_pane_g

0x74f8,	// (0x00038453) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x74f8,	// (0x00038453) fep_vkb_candidate_drop_down_list_pane

0x7909,	// (0x00038864) fep_vkb_candidate_pane_g3

0x7911,	// (0x0003886c) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x00040a7c) fep_vkb_candidate_pane_g

0x1c68,	// (0x00032bc3) cell_hwr_candidate_pane_g1_ParamLimits

0x1c76,	// (0x00032bd1) cell_hwr_candidate_pane_g3_ParamLimits

0x1c76,	// (0x00032bd1) cell_hwr_candidate_pane_g3

0x88f4,	// (0x0003984f) cell_hwr_candidate_pane_g4_ParamLimits

0x88f4,	// (0x0003984f) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x00040a9b) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x00040a9b) cell_hwr_candidate_pane_g

0x7928,	// (0x00038883) cell_vkb_candidate_pane_g3_ParamLimits

0x7928,	// (0x00038883) cell_vkb_candidate_pane_g3

0x7985,	// (0x000388e0) cell_vkb_candidate_pane_g4_ParamLimits

0x7985,	// (0x000388e0) cell_vkb_candidate_pane_g4

0x7a55,	// (0x000389b0) cell_app_pane_cp2_g1_ParamLimits

0x7a55,	// (0x000389b0) cell_app_pane_cp2_g1

0x7a73,	// (0x000389ce) cell_app_pane_cp2_g2_ParamLimits

0x7a73,	// (0x000389ce) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x00040ae5) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x00040ae5) cell_app_pane_cp2_g

0x7a7f,	// (0x000389da) cell_app_pane_cp2_t1_ParamLimits

0x7a7f,	// (0x000389da) cell_app_pane_cp2_t1

0x35c6,	// (0x00034521) grid_highlight_pane_cp1_ParamLimits

0x35c6,	// (0x00034521) grid_highlight_pane_cp1

0x1dde,	// (0x00032d39) cell_hwr_candidate_pane_cp1_ParamLimits

0x1dde,	// (0x00032d39) cell_hwr_candidate_pane_cp1

0x1c68,	// (0x00032bc3) fep_hwr_candidate_drop_down_list_pane_g1

0x1dfd,	// (0x00032d58) fep_hwr_candidate_drop_down_list_pane_g2

0x1e0a,	// (0x00032d65) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x00040aea) fep_hwr_candidate_drop_down_list_pane_g

0x1e17,	// (0x00032d72) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e20,	// (0x00032d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e20,	// (0x00032d7b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e2d,	// (0x00032d88) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e2d,	// (0x00032d88) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e3a,	// (0x00032d95) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e3a,	// (0x00032d95) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e47,	// (0x00032da2) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e47,	// (0x00032da2) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e62,	// (0x00032dbd) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e62,	// (0x00032dbd) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e7d,	// (0x00032dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e7d,	// (0x00032dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e98,	// (0x00032df3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e98,	// (0x00032df3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1eb3,	// (0x00032e0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1eb3,	// (0x00032e0e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x00040af1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x00040af1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7a91,	// (0x000389ec) cell_vkb_candidate_pane_cp1_ParamLimits

0x7a91,	// (0x000389ec) cell_vkb_candidate_pane_cp1

0x7611,	// (0x0003856c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7611,	// (0x0003856c) fep_vkb_candidate_drop_down_list_pane_g1

0x7ab1,	// (0x00038a0c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ab1,	// (0x00038a0c) fep_vkb_candidate_drop_down_list_pane_g2

0x7abe,	// (0x00038a19) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7abe,	// (0x00038a19) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x00040b02) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba7,	// (0x00040b02) fep_vkb_candidate_drop_down_list_pane_g

0x7acb,	// (0x00038a26) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7acb,	// (0x00038a26) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ad8,	// (0x00038a33) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ad8,	// (0x00038a33) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ae5,	// (0x00038a40) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ae5,	// (0x00038a40) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7af1,	// (0x00038a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7af1,	// (0x00038a4c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7943,	// (0x0003889e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7943,	// (0x0003889e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7964,	// (0x000388bf) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7964,	// (0x000388bf) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7afd,	// (0x00038a58) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7afd,	// (0x00038a58) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b1e,	// (0x00038a79) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b1e,	// (0x00038a79) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b3f,	// (0x00038a9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b3f,	// (0x00038a9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x00040b09) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x00040b09) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb4c3,	// (0x0003c41e) title_pane_g1_ParamLimits

0xb4d6,	// (0x0003c431) title_pane_g2_ParamLimits

0xf529,	// (0x00040484) title_pane_g_ParamLimits

0x3eb5,	// (0x00034e10) aid_call2_pane

0x3ebd,	// (0x00034e18) aid_call_pane

0x3ec5,	// (0x00034e20) popup_clock_analogue_window_g1

0x3ec5,	// (0x00034e20) popup_clock_analogue_window_g2

0x050c,	// (0x00031467) popup_clock_analogue_window_g3

0x0515,	// (0x00031470) popup_clock_analogue_window_g4

0xe005,	// (0x0003ef60) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0004062e) popup_clock_analogue_window_g

0x051d,	// (0x00031478) popup_clock_analogue_window_t1

0x052b,	// (0x00031486) clock_digital_number_pane_ParamLimits

0x052b,	// (0x00031486) clock_digital_number_pane

0x0537,	// (0x00031492) clock_digital_number_pane_cp02_ParamLimits

0x0537,	// (0x00031492) clock_digital_number_pane_cp02

0x0543,	// (0x0003149e) clock_digital_number_pane_cp03_ParamLimits

0x0543,	// (0x0003149e) clock_digital_number_pane_cp03

0x054f,	// (0x000314aa) clock_digital_number_pane_cp04_ParamLimits

0x054f,	// (0x000314aa) clock_digital_number_pane_cp04

0x055b,	// (0x000314b6) clock_digital_separator_pane_ParamLimits

0x055b,	// (0x000314b6) clock_digital_separator_pane

0x0567,	// (0x000314c2) popup_clock_digital_window_t1_ParamLimits

0x0567,	// (0x000314c2) popup_clock_digital_window_t1

0xe005,	// (0x0003ef60) clock_digital_number_pane_g1

0xe005,	// (0x0003ef60) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00040639) clock_digital_number_pane_g

0xe005,	// (0x0003ef60) clock_digital_separator_pane_g1

0xe005,	// (0x0003ef60) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00040639) clock_digital_separator_pane_g

0xd369,	// (0x0003e2c4) aid_fill_nsta_ParamLimits

0xd49f,	// (0x0003e3fa) indicator_nsta_pane_ParamLimits

0x4b17,	// (0x00035a72) popup_clock_analogue_window

0x4b17,	// (0x00035a72) popup_clock_digital_window

0xdcc2,	// (0x0003ec1d) grid_indicator_nsta_pane_ParamLimits

0x6d97,	// (0x00037cf2) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x000409cf) clock_nsta_pane_t

0x04d0,	// (0x0003142b) aid_size_max_handle

0x04da,	// (0x00031435) aid_size_min_handle

0x44f2,	// (0x0003544d) editor_scroll_pane

0x7b5a,	// (0x00038ab5) ex_editor_pane

0x3746,	// (0x000346a1) scroll_pane_cp13

0x3565,	// (0x000344c0) scroll_pane_cp14

0x3ef4,	// (0x00034e4f) scroll_pane_cp36

0xd1bc,	// (0x0003e117) list_single_graphic_hl_pane_cp2_ParamLimits

0xd1bc,	// (0x0003e117) list_single_graphic_hl_pane_cp2

0xdb01,	// (0x0003ea5c) list_single_graphic_hl_pane_ParamLimits

0xdb01,	// (0x0003ea5c) list_single_graphic_hl_pane

0x39dd,	// (0x00034938) aid_size_min_hl_cp1

0x7b62,	// (0x00038abd) list_highlight_pane_cp34_ParamLimits

0x7b62,	// (0x00038abd) list_highlight_pane_cp34

0x7b73,	// (0x00038ace) list_single_graphic_hl_pane_g1_ParamLimits

0x7b73,	// (0x00038ace) list_single_graphic_hl_pane_g1

0xf1cd,	// (0x00040128) list_single_graphic_hl_pane_g2_ParamLimits

0xf1cd,	// (0x00040128) list_single_graphic_hl_pane_g2

0xf1cd,	// (0x00040128) list_single_graphic_hl_pane_g3_ParamLimits

0xf1cd,	// (0x00040128) list_single_graphic_hl_pane_g3

0xf1d9,	// (0x00040134) list_single_graphic_hl_pane_g4_ParamLimits

0xf1d9,	// (0x00040134) list_single_graphic_hl_pane_g4

0xc804,	// (0x0003d75f) list_single_graphic_hl_pane_g5_ParamLimits

0xc804,	// (0x0003d75f) list_single_graphic_hl_pane_g5

0x0004,

0xfbbf,	// (0x00040b1a) list_single_graphic_hl_pane_g_ParamLimits

0xfbbf,	// (0x00040b1a) list_single_graphic_hl_pane_g

0xc818,	// (0x0003d773) list_single_graphic_hl_pane_t1_ParamLimits

0xc818,	// (0x0003d773) list_single_graphic_hl_pane_t1

0x7b80,	// (0x00038adb) aid_size_min_hl_cp2

0x7b89,	// (0x00038ae4) list_highlight_pane_cp34_cp2_ParamLimits

0x7b89,	// (0x00038ae4) list_highlight_pane_cp34_cp2

0x7b73,	// (0x00038ace) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7b73,	// (0x00038ace) list_single_graphic_hl_pane_g1_cp2

0x7b96,	// (0x00038af1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7b96,	// (0x00038af1) list_single_graphic_hl_pane_g2_cp2

0x7ba2,	// (0x00038afd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7ba2,	// (0x00038afd) list_single_graphic_hl_pane_g3_cp2

0x7bb0,	// (0x00038b0b) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7bb0,	// (0x00038b0b) list_single_graphic_hl_pane_g4_cp2

0x7bbc,	// (0x00038b17) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7bbc,	// (0x00038b17) list_single_graphic_hl_pane_g5_cp2

0xbeaf,	// (0x0003ce0a) control_pane_g4_ParamLimits

0xbeaf,	// (0x0003ce0a) control_pane_g4

0x4816,	// (0x00035771) bg_popup_sub_pane_cp10_ParamLimits

0x739d,	// (0x000382f8) list_choice_list_pane_ParamLimits

0x73ac,	// (0x00038307) scroll_pane_cp23

0x2fc2,	// (0x00033f1d) bg_popup_preview_window_pane_cp02_ParamLimits

0x79d6,	// (0x00038931) list_preview_fixed_pane_ParamLimits

0x79ec,	// (0x00038947) list_preview_fixed_pane_cp_ParamLimits

0x79ec,	// (0x00038947) list_preview_fixed_pane_cp

0x79f8,	// (0x00038953) popup_preview_fixed_window_g1_ParamLimits

0x79f8,	// (0x00038953) popup_preview_fixed_window_g1

0x7a04,	// (0x0003895f) popup_preview_fixed_window_g2_ParamLimits

0x7a04,	// (0x0003895f) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x00040aa2) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x00040aa2) popup_preview_fixed_window_g

0x0444,	// (0x0003139f) aid_navi_side_left_pane_ParamLimits

0x0459,	// (0x000313b4) aid_navi_side_right_pane_ParamLimits

0x0471,	// (0x000313cc) navi_icon_pane_stacon_ParamLimits

0x0485,	// (0x000313e0) navi_navi_pane_stacon_ParamLimits

0x0471,	// (0x000313cc) navi_text_pane_stacon_ParamLimits

0xf02c,	// (0x0003ff87) main_text_info_pane

0x7be6,	// (0x00038b41) listscroll_text_info_pane

0x7bee,	// (0x00038b49) list_text_info_pane_ParamLimits

0x7bee,	// (0x00038b49) list_text_info_pane

0x7bfd,	// (0x00038b58) scroll_pane_cp24_ParamLimits

0x7bfd,	// (0x00038b58) scroll_pane_cp24

0xe037,	// (0x0003ef92) list_text_info_pane_t1_ParamLimits

0xe037,	// (0x0003ef92) list_text_info_pane_t1

0xbffc,	// (0x0003cf57) popup_fast_swap2_window_ParamLimits

0xbffc,	// (0x0003cf57) popup_fast_swap2_window

0x7c4c,	// (0x00038ba7) aid_size_cell_fast2

0xdffb,	// (0x0003ef56) bg_popup_window_pane_cp17

0x7c56,	// (0x00038bb1) heading_pane_cp2

0x7c5e,	// (0x00038bb9) listscroll_fast2_pane

0x7c66,	// (0x00038bc1) grid_fast2_pane

0x7c70,	// (0x00038bcb) listscroll_fast2_pane_g1

0x7c78,	// (0x00038bd3) listscroll_fast2_pane_g2

0x0001,

0xfbca,	// (0x00040b25) listscroll_fast2_pane_g

0x3746,	// (0x000346a1) scroll_pane_cp26

0x7c82,	// (0x00038bdd) cell_fast2_pane_ParamLimits

0x7c82,	// (0x00038bdd) cell_fast2_pane

0x7c97,	// (0x00038bf2) cell_fast2_pane_g1

0x7ca0,	// (0x00038bfb) cell_fast2_pane_g2

0x7ca9,	// (0x00038c04) cell_fast2_pane_g3

0x0002,

0xfbcf,	// (0x00040b2a) cell_fast2_pane_g

0x3322,	// (0x0003427d) grid_highlight_pane_cp9

0x09d9,	// (0x00031934) main_eswt_pane_ParamLimits

0x09d9,	// (0x00031934) main_eswt_pane

0x7c12,	// (0x00038b6d) list_single_text_info_pane

0x7cb1,	// (0x00038c0c) eswt_ctrl_button_pane

0x7cb1,	// (0x00038c0c) eswt_ctrl_canvas_pane

0x7cb9,	// (0x00038c14) eswt_ctrl_combo_pane

0x7cb1,	// (0x00038c0c) eswt_ctrl_default_pane

0x7cb1,	// (0x00038c0c) eswt_ctrl_label_pane

0x7cc1,	// (0x00038c1c) eswt_ctrl_wait_pane

0x7cc9,	// (0x00038c24) eswt_shell_pane

0xdffb,	// (0x0003ef56) listscroll_eswt_app_pane

0x7ce9,	// (0x00038c44) popup_eswt_tasktip_window_ParamLimits

0x7ce9,	// (0x00038c44) popup_eswt_tasktip_window

0x4db4,	// (0x00035d0f) bg_popup_window_pane_cp18

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_ParamLimits

0x7d02,	// (0x00038c5d) eswt_control_pane_g1

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_ParamLimits

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_ParamLimits

0x7d1c,	// (0x00038c77) eswt_control_pane_g3

0x7d29,	// (0x00038c84) eswt_control_pane_g4_ParamLimits

0x7d29,	// (0x00038c84) eswt_control_pane_g4

0x0003,

0xfbd6,	// (0x00040b31) eswt_control_pane_g_ParamLimits

0xfbd6,	// (0x00040b31) eswt_control_pane_g

0x35c6,	// (0x00034521) bg_button_pane_ParamLimits

0x35c6,	// (0x00034521) bg_button_pane

0x3337,	// (0x00034292) common_borders_pane_copy2_ParamLimits

0x3337,	// (0x00034292) common_borders_pane_copy2

0x7d36,	// (0x00038c91) control_button_pane_g1_ParamLimits

0x7d36,	// (0x00038c91) control_button_pane_g1

0x7d42,	// (0x00038c9d) control_button_pane_g2_ParamLimits

0x7d42,	// (0x00038c9d) control_button_pane_g2

0x7d4e,	// (0x00038ca9) control_button_pane_g3_ParamLimits

0x7d4e,	// (0x00038ca9) control_button_pane_g3

0x0002,

0xfbdf,	// (0x00040b3a) control_button_pane_g_ParamLimits

0xfbdf,	// (0x00040b3a) control_button_pane_g

0x7d62,	// (0x00038cbd) control_button_pane_t1

0x7d70,	// (0x00038ccb) control_button_pane_t2

0x0001,

0xfbe6,	// (0x00040b41) control_button_pane_t

0x4d40,	// (0x00035c9b) bg_button_pane_g1

0x4d50,	// (0x00035cab) bg_button_pane_g2

0x4d48,	// (0x00035ca3) bg_button_pane_g3

0x4d60,	// (0x00035cbb) bg_button_pane_g4

0x4d58,	// (0x00035cb3) bg_button_pane_g5

0x4d68,	// (0x00035cc3) bg_button_pane_g6

0x4d70,	// (0x00035ccb) bg_button_pane_g7

0x4d80,	// (0x00035cdb) bg_button_pane_g8

0x4d78,	// (0x00035cd3) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00040797) bg_button_pane_g

0x7358,	// (0x000382b3) common_borders_pane_ParamLimits

0x7358,	// (0x000382b3) common_borders_pane

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy1_ParamLimits

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy1

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy1_ParamLimits

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy1

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy1_ParamLimits

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy1

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy1_ParamLimits

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy1

0x7393,	// (0x000382ee) bg_eswt_ctrl_canvas_pane_g1

0x7358,	// (0x000382b3) common_borders_pane_cp2_ParamLimits

0x7358,	// (0x000382b3) common_borders_pane_cp2

0x7358,	// (0x000382b3) common_borders_pane_cp3_ParamLimits

0x7358,	// (0x000382b3) common_borders_pane_cp3

0x7d7e,	// (0x00038cd9) separator_horizontal_pane

0x7d86,	// (0x00038ce1) separator_vertical_pane

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy2_ParamLimits

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy2

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy2_ParamLimits

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy2

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy2_ParamLimits

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy2

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy2_ParamLimits

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy2

0xdffb,	// (0x0003ef56) common_borders_pane_cp4

0x7d8f,	// (0x00038cea) separator_horizontal_pane_g1

0x7d98,	// (0x00038cf3) separator_horizontal_pane_g2

0x7da1,	// (0x00038cfc) separator_horizontal_pane_g3

0x0002,

0xfbeb,	// (0x00040b46) separator_horizontal_pane_g

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy3_ParamLimits

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy3

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy3_ParamLimits

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy3

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy3_ParamLimits

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy3

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy3_ParamLimits

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy3

0xdffb,	// (0x0003ef56) common_borders_pane_cp5

0x7daa,	// (0x00038d05) separator_vertical_pane_g1

0x7db3,	// (0x00038d0e) separator_vertical_pane_g2

0x7dbc,	// (0x00038d17) separator_vertical_pane_g3

0x0002,

0xfbf2,	// (0x00040b4d) separator_vertical_pane_g

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy4_ParamLimits

0x7d02,	// (0x00038c5d) eswt_control_pane_g1_copy4

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy4_ParamLimits

0x7d0f,	// (0x00038c6a) eswt_control_pane_g2_copy4

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy4_ParamLimits

0x7d1c,	// (0x00038c77) eswt_control_pane_g3_copy4

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy4_ParamLimits

0x7d29,	// (0x00038c84) eswt_control_pane_g4_copy4

0x7dc5,	// (0x00038d20) eswt_ctrl_combo_button_pane

0x7dcd,	// (0x00038d28) eswt_ctrl_input_pane

0x7dd5,	// (0x00038d30) popup_choice_list_window_cp70

0x7ddd,	// (0x00038d38) eswt_ctrl_input_pane_t1

0xdffb,	// (0x0003ef56) input_focus_pane_cp70

0x7358,	// (0x000382b3) bg_button_pane_cp70_ParamLimits

0x7358,	// (0x000382b3) bg_button_pane_cp70

0x7deb,	// (0x00038d46) eswt_ctrl_combo_button_pane_g1

0x7df3,	// (0x00038d4e) wait_bar_pane_cp70

0x4db4,	// (0x00035d0f) bg_popup_window_pane_cp70_ParamLimits

0x4db4,	// (0x00035d0f) bg_popup_window_pane_cp70

0x7dfb,	// (0x00038d56) popup_eswt_tasktip_window_t1

0x7e11,	// (0x00038d6c) wait_bar_pane_cp71_ParamLimits

0x7e11,	// (0x00038d6c) wait_bar_pane_cp71

0x7e1d,	// (0x00038d78) grid_eswt_app_pane

0x3cce,	// (0x00034c29) scroll_pane_cp70

0xe052,	// (0x0003efad) cell_eswt_app_pane_ParamLimits

0xe052,	// (0x0003efad) cell_eswt_app_pane

0xe07c,	// (0x0003efd7) cell_eswt_app_pane_g1_ParamLimits

0xe07c,	// (0x0003efd7) cell_eswt_app_pane_g1

0xe0ab,	// (0x0003f006) cell_eswt_app_pane_g2_ParamLimits

0xe0ab,	// (0x0003f006) cell_eswt_app_pane_g2

0x0001,

0xfbf9,	// (0x00040b54) cell_eswt_app_pane_g_ParamLimits

0xfbf9,	// (0x00040b54) cell_eswt_app_pane_g

0xe0d4,	// (0x0003f02f) cell_eswt_app_pane_t1_ParamLimits

0xe0d4,	// (0x0003f02f) cell_eswt_app_pane_t1

0x7ee0,	// (0x00038e3b) grid_highlight_pane_cp70_ParamLimits

0x7ee0,	// (0x00038e3b) grid_highlight_pane_cp70

0x43be,	// (0x00035319) set_content_pane_g1

0xd326,	// (0x0003e281) status_small_volume_pane

0xc82e,	// (0x0003d789) status_small_volume_pane_g1

0xc836,	// (0x0003d791) volume_small2_pane

0xc83f,	// (0x0003d79a) volume_small2_pane_g1

0xc848,	// (0x0003d7a3) volume_small2_pane_g2

0xc851,	// (0x0003d7ac) volume_small2_pane_g3

0xc85a,	// (0x0003d7b5) volume_small2_pane_g4

0xc863,	// (0x0003d7be) volume_small2_pane_g5

0xc86c,	// (0x0003d7c7) volume_small2_pane_g6

0xc875,	// (0x0003d7d0) volume_small2_pane_g7

0xc87e,	// (0x0003d7d9) volume_small2_pane_g8

0xc887,	// (0x0003d7e2) volume_small2_pane_g9

0xc890,	// (0x0003d7eb) volume_small2_pane_g10

0x0009,

0xfbfe,	// (0x00040b59) volume_small2_pane_g

0x7759,	// (0x000386b4) fep_vkb_top_text_pane_g1_ParamLimits

0xdf8e,	// (0x0003eee9) fep_vkb_top_text_pane_t1_ParamLimits

0x7a10,	// (0x0003896b) popup_preview_fixed_window_g3_ParamLimits

0x7a10,	// (0x0003896b) popup_preview_fixed_window_g3

0xc625,	// (0x0003d580) popup_toolbar_trans_pane

0xd99b,	// (0x0003e8f6) aid_height_set_list_ParamLimits

0x6129,	// (0x00037084) aid_size_parent_ParamLimits

0x4816,	// (0x00035771) list_highlight_pane_cp2_ParamLimits

0x43be,	// (0x00035319) set_content_pane_g1_ParamLimits

0xdb13,	// (0x0003ea6e) list_single_image_pane_ParamLimits

0xdb13,	// (0x0003ea6e) list_single_image_pane

0xe106,	// (0x0003f061) aid_size_cell_image_ParamLimits

0xe106,	// (0x0003f061) aid_size_cell_image

0xe113,	// (0x0003f06e) grid_single_image_pane_ParamLimits

0xe113,	// (0x0003f06e) grid_single_image_pane

0x6a07,	// (0x00037962) list_single_image_pane_g1_ParamLimits

0x6a07,	// (0x00037962) list_single_image_pane_g1

0x7f05,	// (0x00038e60) list_single_image_pane_g2_ParamLimits

0x7f05,	// (0x00038e60) list_single_image_pane_g2

0x0001,

0xfc13,	// (0x00040b6e) list_single_image_pane_g_ParamLimits

0xfc13,	// (0x00040b6e) list_single_image_pane_g

0x7f19,	// (0x00038e74) list_single_image_pane_t1_ParamLimits

0x7f19,	// (0x00038e74) list_single_image_pane_t1

0xe11f,	// (0x0003f07a) cell_image_list_pane_ParamLimits

0xe11f,	// (0x0003f07a) cell_image_list_pane

0xe133,	// (0x0003f08e) cell_image_list_pane_g1

0xe13c,	// (0x0003f097) cell_image_list_pane_g2

0x0001,

0xfc18,	// (0x00040b73) cell_image_list_pane_g

0x7f55,	// (0x00038eb0) aid_size_cell_tb_trans_pane

0x35c6,	// (0x00034521) bg_tb_trans_pane

0x7f67,	// (0x00038ec2) grid_tb_trans_pane

0x4d40,	// (0x00035c9b) bg_tb_trans_pane_g1

0x4d50,	// (0x00035cab) bg_tb_trans_pane_g2

0x4d48,	// (0x00035ca3) bg_tb_trans_pane_g3

0x4d60,	// (0x00035cbb) bg_tb_trans_pane_g4

0x4d58,	// (0x00035cb3) bg_tb_trans_pane_g5

0x4d80,	// (0x00035cdb) bg_tb_trans_pane_g6

0x4d78,	// (0x00035cd3) bg_tb_trans_pane_g7

0x4d68,	// (0x00035cc3) bg_tb_trans_pane_g8

0x4d70,	// (0x00035ccb) bg_tb_trans_pane_g9

0x0008,

0xfc1d,	// (0x00040b78) bg_tb_trans_pane_g

0x7f7b,	// (0x00038ed6) cell_toolbar_trans_pane_ParamLimits

0x7f7b,	// (0x00038ed6) cell_toolbar_trans_pane

0x7393,	// (0x000382ee) cell_toolbar_trans_pane_g1

0xdd79,	// (0x0003ecd4) list_form2_midp_pane_t1

0xdd87,	// (0x0003ece2) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x00040a15) list_form2_midp_pane_t

0x6f84,	// (0x00037edf) scroll_pane_cp51_ParamLimits

0x7140,	// (0x0003809b) form2_midp_wait_pane_g1

0x7149,	// (0x000380a4) form2_midp_wait_pane_g2

0x7152,	// (0x000380ad) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x00040a2a) form2_midp_wait_pane_g

0x2d39,	// (0x00033c94) list_highlight_pane_cp21_ParamLimits

0x719e,	// (0x000380f9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x71ad,	// (0x00038108) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x14b7,	// (0x00032412) list_single_2graphic_im_pane_ParamLimits

0x14b7,	// (0x00032412) list_single_2graphic_im_pane

0x7fa1,	// (0x00038efc) list_single_2graphic_im_pane_g1_ParamLimits

0x7fa1,	// (0x00038efc) list_single_2graphic_im_pane_g1

0x7fb2,	// (0x00038f0d) list_single_2graphic_im_pane_g2_ParamLimits

0x7fb2,	// (0x00038f0d) list_single_2graphic_im_pane_g2

0x7fbe,	// (0x00038f19) list_single_2graphic_im_pane_g3_ParamLimits

0x7fbe,	// (0x00038f19) list_single_2graphic_im_pane_g3

0x0003,

0xfc30,	// (0x00040b8b) list_single_2graphic_im_pane_g_ParamLimits

0xfc30,	// (0x00040b8b) list_single_2graphic_im_pane_g

0x7fde,	// (0x00038f39) list_single_2graphic_im_pane_t1_ParamLimits

0x7fde,	// (0x00038f39) list_single_2graphic_im_pane_t1

0x7a1c,	// (0x00038977) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a1c,	// (0x00038977) list_single_graphic_2heading_pane_fp

0x1cec,	// (0x00032c47) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1cec,	// (0x00032c47) list_single_graphic_2heading_pane_fp_g1

0x7a31,	// (0x0003898c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a31,	// (0x0003898c) list_single_graphic_2heading_pane_fp_g2

0x1cb5,	// (0x00032c10) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1cb5,	// (0x00032c10) list_single_graphic_2heading_pane_fp_g3

0x1cc1,	// (0x00032c1c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1cc1,	// (0x00032c1c) list_single_graphic_2heading_pane_fp_g4

0x7a3d,	// (0x00038998) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a3d,	// (0x00038998) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00040ab2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00040ab2) list_single_graphic_2heading_pane_fp_g

0x3a28,	// (0x00034983) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3a28,	// (0x00034983) list_single_graphic_2heading_pane_fp_t1

0x1d24,	// (0x00032c7f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1d24,	// (0x00032c7f) list_single_graphic_2heading_pane_fp_t2

0x3a3e,	// (0x00034999) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3a3e,	// (0x00034999) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc39,	// (0x00040b94) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc39,	// (0x00040b94) list_single_graphic_2heading_pane_fp_t

0x741f,	// (0x0003837a) fep_hwr_write_pane_g5_ParamLimits

0x741f,	// (0x0003837a) fep_hwr_write_pane_g5

0x742b,	// (0x00038386) fep_hwr_write_pane_g6_ParamLimits

0x742b,	// (0x00038386) fep_hwr_write_pane_g6

0x7cc9,	// (0x00038c24) eswt_shell_pane_ParamLimits

0x4db4,	// (0x00035d0f) bg_popup_window_pane_cp18_ParamLimits

0x7cfa,	// (0x00038c55) heading_pane_cp70

0x7dfb,	// (0x00038d56) popup_eswt_tasktip_window_t1_ParamLimits

0xd3c4,	// (0x0003e31f) aid_touch_tab_arrow_left

0xd3da,	// (0x0003e335) aid_touch_tab_arrow_right

0xb4ee,	// (0x0003c449) title_pane_g3_ParamLimits

0xb4ee,	// (0x0003c449) title_pane_g3

0x3585,	// (0x000344e0) set_value_pane_g1

0xc625,	// (0x0003d580) popup_toolbar_trans_pane_ParamLimits

0x7f55,	// (0x00038eb0) aid_size_cell_tb_trans_pane_ParamLimits

0x35c6,	// (0x00034521) bg_tb_trans_pane_ParamLimits

0x7f67,	// (0x00038ec2) grid_tb_trans_pane_ParamLimits

0x2fc2,	// (0x00033f1d) cont_note_pane_ParamLimits

0x2fc2,	// (0x00033f1d) cont_note_pane

0x3337,	// (0x00034292) cont_snote2_single_text_pane_ParamLimits

0x3337,	// (0x00034292) cont_snote2_single_text_pane

0x3337,	// (0x00034292) cont_snote2_single_graphic_pane_ParamLimits

0x3337,	// (0x00034292) cont_snote2_single_graphic_pane

0x53cf,	// (0x0003632a) cont_note_wait_pane_ParamLimits

0x53cf,	// (0x0003632a) cont_note_wait_pane

0x53cf,	// (0x0003632a) cont_note_image_pane_ParamLimits

0x53cf,	// (0x0003632a) cont_note_image_pane

0x800f,	// (0x00038f6a) popup_note2_window_g1_ParamLimits

0x800f,	// (0x00038f6a) popup_note2_window_g1

0x8040,	// (0x00038f9b) popup_note2_window_t1_ParamLimits

0x8040,	// (0x00038f9b) popup_note2_window_t1

0x8085,	// (0x00038fe0) popup_note2_window_t2_ParamLimits

0x8085,	// (0x00038fe0) popup_note2_window_t2

0x80ca,	// (0x00039025) popup_note2_window_t3_ParamLimits

0x80ca,	// (0x00039025) popup_note2_window_t3

0x810f,	// (0x0003906a) popup_note2_window_t4_ParamLimits

0x810f,	// (0x0003906a) popup_note2_window_t4

0x3046,	// (0x00033fa1) popup_note2_window_t5_ParamLimits

0x3046,	// (0x00033fa1) popup_note2_window_t5

0x0004,

0xfc45,	// (0x00040ba0) popup_note2_window_t_ParamLimits

0xfc45,	// (0x00040ba0) popup_note2_window_t

0x813e,	// (0x00039099) popup_note2_image_window_g1_ParamLimits

0x813e,	// (0x00039099) popup_note2_image_window_g1

0x814a,	// (0x000390a5) popup_note2_image_window_g2_ParamLimits

0x814a,	// (0x000390a5) popup_note2_image_window_g2

0x0001,

0xfc50,	// (0x00040bab) popup_note2_image_window_g_ParamLimits

0xfc50,	// (0x00040bab) popup_note2_image_window_g

0x815c,	// (0x000390b7) popup_note2_image_window_t1_ParamLimits

0x815c,	// (0x000390b7) popup_note2_image_window_t1

0x8174,	// (0x000390cf) popup_note2_image_window_t2_ParamLimits

0x8174,	// (0x000390cf) popup_note2_image_window_t2

0x818c,	// (0x000390e7) popup_note2_image_window_t3_ParamLimits

0x818c,	// (0x000390e7) popup_note2_image_window_t3

0x0002,

0xfc55,	// (0x00040bb0) popup_note2_image_window_t_ParamLimits

0xfc55,	// (0x00040bb0) popup_note2_image_window_t

0x53dd,	// (0x00036338) popup_note2_wait_window_g1_ParamLimits

0x53dd,	// (0x00036338) popup_note2_wait_window_g1

0x81a8,	// (0x00039103) popup_note2_wait_window_g2_ParamLimits

0x81a8,	// (0x00039103) popup_note2_wait_window_g2

0x53f5,	// (0x00036350) popup_note2_wait_window_g3_ParamLimits

0x53f5,	// (0x00036350) popup_note2_wait_window_g3

0x0002,

0xfc5c,	// (0x00040bb7) popup_note2_wait_window_g_ParamLimits

0xfc5c,	// (0x00040bb7) popup_note2_wait_window_g

0x81b4,	// (0x0003910f) popup_note2_wait_window_t1_ParamLimits

0x81b4,	// (0x0003910f) popup_note2_wait_window_t1

0x81d2,	// (0x0003912d) popup_note2_wait_window_t2_ParamLimits

0x81d2,	// (0x0003912d) popup_note2_wait_window_t2

0x81f0,	// (0x0003914b) popup_note2_wait_window_t3_ParamLimits

0x81f0,	// (0x0003914b) popup_note2_wait_window_t3

0x8202,	// (0x0003915d) popup_note2_wait_window_t4_ParamLimits

0x8202,	// (0x0003915d) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x00040bbe) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x00040bbe) popup_note2_wait_window_t

0x8214,	// (0x0003916f) wait_bar2_pane_ParamLimits

0x8214,	// (0x0003916f) wait_bar2_pane

0x822c,	// (0x00039187) popup_snote2_single_text_window_g1_ParamLimits

0x822c,	// (0x00039187) popup_snote2_single_text_window_g1

0x8254,	// (0x000391af) popup_snote2_single_text_window_t1_ParamLimits

0x8254,	// (0x000391af) popup_snote2_single_text_window_t1

0x82a0,	// (0x000391fb) popup_snote2_single_text_window_t2_ParamLimits

0x82a0,	// (0x000391fb) popup_snote2_single_text_window_t2

0x82ec,	// (0x00039247) popup_snote2_single_text_window_t3_ParamLimits

0x82ec,	// (0x00039247) popup_snote2_single_text_window_t3

0x832d,	// (0x00039288) popup_snote2_single_text_window_t4_ParamLimits

0x832d,	// (0x00039288) popup_snote2_single_text_window_t4

0x8363,	// (0x000392be) popup_snote2_single_text_window_t5_ParamLimits

0x8363,	// (0x000392be) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x00040bc7) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x00040bc7) popup_snote2_single_text_window_t

0x838e,	// (0x000392e9) popup_snote2_single_graphic_window_g1_ParamLimits

0x838e,	// (0x000392e9) popup_snote2_single_graphic_window_g1

0x83b6,	// (0x00039311) popup_snote2_single_graphic_window_g2_ParamLimits

0x83b6,	// (0x00039311) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x00040bd2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x00040bd2) popup_snote2_single_graphic_window_g

0x83de,	// (0x00039339) popup_snote2_single_graphic_window_t1_ParamLimits

0x83de,	// (0x00039339) popup_snote2_single_graphic_window_t1

0x842a,	// (0x00039385) popup_snote2_single_graphic_window_t2_ParamLimits

0x842a,	// (0x00039385) popup_snote2_single_graphic_window_t2

0x82ec,	// (0x00039247) popup_snote2_single_graphic_window_t3_ParamLimits

0x82ec,	// (0x00039247) popup_snote2_single_graphic_window_t3

0x832d,	// (0x00039288) popup_snote2_single_graphic_window_t4_ParamLimits

0x832d,	// (0x00039288) popup_snote2_single_graphic_window_t4

0x8363,	// (0x000392be) popup_snote2_single_graphic_window_t5_ParamLimits

0x8363,	// (0x000392be) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x00040bd7) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x00040bd7) popup_snote2_single_graphic_window_t

0x6e45,	// (0x00037da0) clock_nsta_pane_cp2_t1

0x6e45,	// (0x00037da0) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x000409eb) clock_nsta_pane_cp2_t

0x01c2,	// (0x0003111d) form_field_data_wide_pane_g1_ParamLimits

0x35d4,	// (0x0003452f) form_field_data_wide_pane_g2_ParamLimits

0x35d4,	// (0x0003452f) form_field_data_wide_pane_g2

0x35e0,	// (0x0003453b) form_field_data_wide_pane_g3_ParamLimits

0x35e0,	// (0x0003453b) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x000405b1) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x000405b1) form_field_data_wide_pane_g

0xdcac,	// (0x0003ec07) grid_touch_3_pane_ParamLimits

0xdcac,	// (0x0003ec07) grid_touch_3_pane

0xe145,	// (0x0003f0a0) cell_touch_3_pane_ParamLimits

0xe145,	// (0x0003f0a0) cell_touch_3_pane

0x7393,	// (0x000382ee) cell_touch_3_pane_g1

0x7393,	// (0x000382ee) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x00040a70) cell_touch_3_pane_g

0x309e,	// (0x00033ff9) cont_query_data_pane

0x30a6,	// (0x00034001) cont_query_data_pane_cp1

0x84a4,	// (0x000393ff) button_value_adjust_pane_cp7

0x84ac,	// (0x00039407) query_popup_pane_cp3

0x3fce,	// (0x00034f29) bg_popup_sub_pane_cp22_ParamLimits

0x0586,	// (0x000314e1) navi_navi_volume_pane_cp2

0x05a1,	// (0x000314fc) popup_side_volume_key_window_g2

0x05b0,	// (0x0003150b) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00040647) popup_side_volume_key_window_g

0x05cd,	// (0x00031528) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0004064e) popup_side_volume_key_window_t

0x4288,	// (0x000351e3) popup_side_volume_key_window_ParamLimits

0xb9ab,	// (0x0003c906) list_double_graphic_pane_g4_ParamLimits

0xb9ab,	// (0x0003c906) list_double_graphic_pane_g4

0xc76d,	// (0x0003d6c8) list_single_2heading_msg_pane_ParamLimits

0xc76d,	// (0x0003d6c8) list_single_2heading_msg_pane

0xc899,	// (0x0003d7f4) list_single_2heading_msg_pane_g1_ParamLimits

0xc899,	// (0x0003d7f4) list_single_2heading_msg_pane_g1

0xc8a5,	// (0x0003d800) list_single_2heading_msg_pane_g2_ParamLimits

0xc8a5,	// (0x0003d800) list_single_2heading_msg_pane_g2

0xc8b8,	// (0x0003d813) list_single_2heading_msg_pane_g3_ParamLimits

0xc8b8,	// (0x0003d813) list_single_2heading_msg_pane_g3

0xc8c4,	// (0x0003d81f) list_single_2heading_msg_pane_g4_ParamLimits

0xc8c4,	// (0x0003d81f) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x00040be2) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x00040be2) list_single_2heading_msg_pane_g

0xc8dc,	// (0x0003d837) list_single_2heading_msg_pane_t1_ParamLimits

0xc8dc,	// (0x0003d837) list_single_2heading_msg_pane_t1

0xc904,	// (0x0003d85f) list_single_2heading_msg_pane_t2_ParamLimits

0xc904,	// (0x0003d85f) list_single_2heading_msg_pane_t2

0xc96f,	// (0x0003d8ca) list_single_2heading_msg_pane_t3_ParamLimits

0xc96f,	// (0x0003d8ca) list_single_2heading_msg_pane_t3

0x3b23,	// (0x00034a7e) list_single_2heading_msg_pane_t4_ParamLimits

0x3b23,	// (0x00034a7e) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x00040beb) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x00040beb) list_single_2heading_msg_pane_t

0x2c8d,	// (0x00033be8) title_pane_g4_ParamLimits

0x2c8d,	// (0x00033be8) title_pane_g4

0x0395,	// (0x000312f0) title_pane_stacon_g3_ParamLimits

0x0395,	// (0x000312f0) title_pane_stacon_g3

0x7fd2,	// (0x00038f2d) list_single_2graphic_im_pane_g4_ParamLimits

0x7fd2,	// (0x00038f2d) list_single_2graphic_im_pane_g4

0x5e2e,	// (0x00036d89) popup_side_volume_key_window_cp

0x6660,	// (0x000375bb) main_idle_act2_pane_t1

0x0ff8,	// (0x00031f53) toolbar_button_pane_g10

0xb84a,	// (0x0003c7a5) popup_toolbar_window_cp1

0x6e36,	// (0x00037d91) clock_nsta_pane_cp_t1

0x6e36,	// (0x00037d91) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x000409e6) clock_nsta_pane_cp_t

0x0586,	// (0x000314e1) navi_navi_volume_pane_cp2_ParamLimits

0x0595,	// (0x000314f0) popup_side_volume_key_window_g1_ParamLimits

0x05a1,	// (0x000314fc) popup_side_volume_key_window_g2_ParamLimits

0x05b0,	// (0x0003150b) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00040647) popup_side_volume_key_window_g_ParamLimits

0x1a11,	// (0x0003296c) fep_hwr_aid_pane

0x1ab8,	// (0x00032a13) bg_fep_hwr_top_pane_g4_ParamLimits

0x73ef,	// (0x0003834a) fep_hwr_top_pane_g1_ParamLimits

0x7401,	// (0x0003835c) fep_hwr_top_pane_g2_ParamLimits

0x1ad8,	// (0x00032a33) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x00040a3b) fep_hwr_top_pane_g_ParamLimits

0x1aed,	// (0x00032a48) fep_hwr_top_text_pane_ParamLimits

0x5bf1,	// (0x00036b4c) aid_touch_tab_arrow_arrow_2

0x5bfa,	// (0x00036b55) aid_touch_tab_arrow_left_2

0x1a25,	// (0x00032980) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1a5c,	// (0x000329b7) fep_hwr_prediction_pane

0x7561,	// (0x000384bc) fep_vkb_prediction_pane

0xdf6e,	// (0x0003eec9) fep_vkb_side_pane_g3_ParamLimits

0xdf6e,	// (0x0003eec9) fep_vkb_side_pane_g3

0x1c68,	// (0x00032bc3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1dfd,	// (0x00032d58) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e0a,	// (0x00032d65) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x00040aea) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f39,	// (0x00032e94) fep_hwr_prediction_pane_g1

0x1f43,	// (0x00032e9e) fep_hwr_prediction_pane_g2

0x1f4b,	// (0x00032ea6) fep_hwr_prediction_pane_g3

0x1f53,	// (0x00032eae) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x00040bf4) fep_hwr_prediction_pane_g

0x84d1,	// (0x0003942c) fep_vkb_prediction_pane_g1

0x84db,	// (0x00039436) fep_vkb_prediction_pane_g2

0x84e3,	// (0x0003943e) fep_vkb_prediction_pane_g3

0x84eb,	// (0x00039446) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x00040bfd) fep_vkb_prediction_pane_g

0x13ff,	// (0x0003235a) slider_set_pane_g3

0x1413,	// (0x0003236e) slider_set_pane_g4

0x142b,	// (0x00032386) slider_set_pane_g5

0x13ff,	// (0x0003235a) slider_set_pane_g6

0x1441,	// (0x0003239c) slider_set_pane_g7

0x628e,	// (0x000371e9) slider_form_pane_g3

0x6297,	// (0x000371f2) slider_form_pane_g4

0x629f,	// (0x000371fa) slider_form_pane_g5

0x628e,	// (0x000371e9) slider_form_pane_g6

0xdae6,	// (0x0003ea41) slider_form_pane_g7

0x690b,	// (0x00037866) slider_set_pane_vc_g3

0x6914,	// (0x0003786f) slider_set_pane_vc_g4

0x691d,	// (0x00037878) slider_set_pane_vc_g5

0x690b,	// (0x00037866) slider_set_pane_vc_g6

0x6926,	// (0x00037881) slider_set_pane_vc_g7

0x6af4,	// (0x00037a4f) slider_form_pane_vc_g1

0x6afd,	// (0x00037a58) slider_form_pane_vc_g2

0x6b06,	// (0x00037a61) slider_form_pane_vc_g3

0x6af4,	// (0x00037a4f) slider_form_pane_vc_g4

0x6b0f,	// (0x00037a6a) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x000409b8) slider_form_pane_vc_g

0xf02c,	// (0x0003ff87) main_idle_act3_pane

0x84f3,	// (0x0003944e) ai3_links_pane

0xe18d,	// (0x0003f0e8) popup_ai3_data_window_ParamLimits

0xe18d,	// (0x0003f0e8) popup_ai3_data_window

0xdffb,	// (0x0003ef56) grid_ai3_links_pane

0xe1a7,	// (0x0003f102) cell_ai3_links_pane_ParamLimits

0xe1a7,	// (0x0003f102) cell_ai3_links_pane

0x852e,	// (0x00039489) bg_popup_sub_pane_cp11

0x853b,	// (0x00039496) cell_ai3_links_pane_g1

0xdffb,	// (0x0003ef56) bg_popup_sub_pane_cp12

0x8560,	// (0x000394bb) heading_ai3_data_pane

0x8568,	// (0x000394c3) list_ai3_gene_pane

0x8574,	// (0x000394cf) popup_ai3_data_window_g1

0x857c,	// (0x000394d7) heading_ai3_data_pane_g1

0x8584,	// (0x000394df) heading_ai3_data_pane_t1

0x8592,	// (0x000394ed) list_double_ai3_gene_pane_ParamLimits

0x8592,	// (0x000394ed) list_double_ai3_gene_pane

0x859f,	// (0x000394fa) list_single_ai3_gene_pane_ParamLimits

0x859f,	// (0x000394fa) list_single_ai3_gene_pane

0x7358,	// (0x000382b3) list_highlight_pane_cp7_ParamLimits

0x7358,	// (0x000382b3) list_highlight_pane_cp7

0x85ac,	// (0x00039507) list_single_a13_gene_pane_t1_ParamLimits

0x85ac,	// (0x00039507) list_single_a13_gene_pane_t1

0x85c3,	// (0x0003951e) list_single_ai3_gene_pane_g1

0x85cc,	// (0x00039527) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x00040c06) list_single_ai3_gene_pane_g

0x85d4,	// (0x0003952f) list_double_ai3_gene_pane_g1_ParamLimits

0x85d4,	// (0x0003952f) list_double_ai3_gene_pane_g1

0x85e0,	// (0x0003953b) list_double_ai3_gene_pane_t1_ParamLimits

0x85e0,	// (0x0003953b) list_double_ai3_gene_pane_t1

0x85fc,	// (0x00039557) list_double_ai3_gene_pane_t2_ParamLimits

0x85fc,	// (0x00039557) list_double_ai3_gene_pane_t2

0x8612,	// (0x0003956d) list_double_ai3_gene_pane_t3_ParamLimits

0x8612,	// (0x0003956d) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x00040c0b) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x00040c0b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3a54,	// (0x000349af) aid_size_min_col_2

0xe177,	// (0x0003f0d2) aid_size_min_msg_ParamLimits

0xe177,	// (0x0003f0d2) aid_size_min_msg

0xdf82,	// (0x0003eedd) fep_vkb_top_text_pane_g2_ParamLimits

0xdf82,	// (0x0003eedd) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x00040a6b) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x00040a6b) fep_vkb_top_text_pane_g

0xf02c,	// (0x0003ff87) main_hc_apps_shell_pane

0x862f,	// (0x0003958a) grid_hc_apps_pane_ParamLimits

0x862f,	// (0x0003958a) grid_hc_apps_pane

0x8641,	// (0x0003959c) list_hc_apps_pane

0x8649,	// (0x000395a4) scroll_pane_cp37_ParamLimits

0x8649,	// (0x000395a4) scroll_pane_cp37

0xe1c1,	// (0x0003f11c) cell_hc_apps_pane_ParamLimits

0xe1c1,	// (0x0003f11c) cell_hc_apps_pane

0xe27f,	// (0x0003f1da) cell_hc_apps_pane_g1_ParamLimits

0xe27f,	// (0x0003f1da) cell_hc_apps_pane_g1

0x8733,	// (0x0003968e) cell_hc_apps_pane_g2_ParamLimits

0x8733,	// (0x0003968e) cell_hc_apps_pane_g2

0x874f,	// (0x000396aa) cell_hc_apps_pane_g3_ParamLimits

0x874f,	// (0x000396aa) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x00040c12) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x00040c12) cell_hc_apps_pane_g

0xe2ab,	// (0x0003f206) cell_hc_apps_pane_t1_ParamLimits

0xe2ab,	// (0x0003f206) cell_hc_apps_pane_t1

0x2fc2,	// (0x00033f1d) grid_highlight_pane_cp10_ParamLimits

0x2fc2,	// (0x00033f1d) grid_highlight_pane_cp10

0xe2e9,	// (0x0003f244) list_single_hc_apps_pane_ParamLimits

0xe2e9,	// (0x0003f244) list_single_hc_apps_pane

0xe316,	// (0x0003f271) list_single_hc_apps_pane_g1

0xc9dd,	// (0x0003d938) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x00040c19) list_single_hc_apps_pane_g

0xc9f6,	// (0x0003d951) list_single_hc_apps_pane_g2_copy1

0xca12,	// (0x0003d96d) list_single_hc_apps_pane_t1

0x2d39,	// (0x00033c94) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x000403fb) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x00040414) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x0004042e) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00040494) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x00040446) slider_set_pane_ParamLimits

0x08b9,	// (0x00031814) control_pane_g5_ParamLimits

0x08b9,	// (0x00031814) control_pane_g5

0x60dd,	// (0x00037038) slider_set_pane_g1_ParamLimits

0x13f3,	// (0x0003234e) slider_set_pane_g2_ParamLimits

0x13ff,	// (0x0003235a) slider_set_pane_g3_ParamLimits

0x1413,	// (0x0003236e) slider_set_pane_g4_ParamLimits

0x142b,	// (0x00032386) slider_set_pane_g5_ParamLimits

0x13ff,	// (0x0003235a) slider_set_pane_g6_ParamLimits

0x1441,	// (0x0003239c) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00040895) slider_set_pane_g_ParamLimits

0x4369,	// (0x000352c4) navi_icon_text_pane_ParamLimits

0xd38d,	// (0x0003e2e8) aid_fill_nsta_2_ParamLimits

0xd3c4,	// (0x0003e31f) aid_touch_tab_arrow_left_ParamLimits

0xd3da,	// (0x0003e335) aid_touch_tab_arrow_right_ParamLimits

0xd475,	// (0x0003e3d0) clock_nsta_pane_ParamLimits

0x5bd3,	// (0x00036b2e) navi_icon_pane_g1_ParamLimits

0x5bdf,	// (0x00036b3a) navi_text_pane_t1_ParamLimits

0x6f42,	// (0x00037e9d) navi_icon_text_pane_g1_ParamLimits

0x6f4e,	// (0x00037ea9) navi_icon_text_pane_t1_ParamLimits

0xe316,	// (0x0003f271) list_single_hc_apps_pane_g1_ParamLimits

0xc9dd,	// (0x0003d938) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x00040c19) list_single_hc_apps_pane_g_ParamLimits

0xc9f6,	// (0x0003d951) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xca12,	// (0x0003d96d) list_single_hc_apps_pane_t1_ParamLimits

0xb3f3,	// (0x0003c34e) popup_toolbar2_fixed_window_ParamLimits

0xb3f3,	// (0x0003c34e) popup_toolbar2_fixed_window

0xc61b,	// (0x0003d576) popup_toolbar2_float_window

0xdffb,	// (0x0003ef56) bg_popup_sub_pane_cp27

0x8826,	// (0x00039781) grid_toolbar2_float_pane

0xdffb,	// (0x0003ef56) bg_popup_sub_pane_cp26

0x8826,	// (0x00039781) grid_toolbar2_fixed_pane

0xe32f,	// (0x0003f28a) cell_toolbar2_fixed_pane_ParamLimits

0xe32f,	// (0x0003f28a) cell_toolbar2_fixed_pane

0xe349,	// (0x0003f2a4) cell_toolbar2_fixed_pane_g1

0x8847,	// (0x000397a2) toolbar2_fixed_button_pane

0x4d40,	// (0x00035c9b) toolbar2_fixed_button_pane_g1

0x4d50,	// (0x00035cab) toolbar2_fixed_button_pane_g2

0x4d48,	// (0x00035ca3) toolbar2_fixed_button_pane_g3

0x4d60,	// (0x00035cbb) toolbar2_fixed_button_pane_g4

0x4d58,	// (0x00035cb3) toolbar2_fixed_button_pane_g5

0x4d68,	// (0x00035cc3) toolbar2_fixed_button_pane_g6

0x4d70,	// (0x00035ccb) toolbar2_fixed_button_pane_g7

0x4d80,	// (0x00035cdb) toolbar2_fixed_button_pane_g8

0x4d78,	// (0x00035cd3) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00040797) toolbar2_fixed_button_pane_g

0x884f,	// (0x000397aa) cell_toolbar2_float_pane_ParamLimits

0x884f,	// (0x000397aa) cell_toolbar2_float_pane

0x8860,	// (0x000397bb) cell_toolbar2_float_pane_g1

0x8847,	// (0x000397a2) toolbar2_fixed_button_pane_cp

0xde5c,	// (0x0003edb7) fep_vkb_accented_list_pane_ParamLimits

0xde5c,	// (0x0003edb7) fep_vkb_accented_list_pane

0x1c48,	// (0x00032ba3) bg_popup_fep_shadow_pane_g9

0x44f2,	// (0x0003544d) bg_popup_fep_shadow_pane_cp3

0x372d,	// (0x00034688) list_accented_list_pane

0x8869,	// (0x000397c4) list_single_accented_list_pane_ParamLimits

0x8869,	// (0x000397c4) list_single_accented_list_pane

0x44f2,	// (0x0003544d) list_highlight_pane_cp10

0x887a,	// (0x000397d5) list_single_accented_list_pane_t1

0xc545,	// (0x0003d4a0) popup_slider_window_ParamLimits

0xc545,	// (0x0003d4a0) popup_slider_window

0x84b4,	// (0x0003940f) aid_indentation_list_msg

0xe440,	// (0x0003f39b) bg_popup_window_pane_cp19

0x89c7,	// (0x00039922) popup_slider_window_g1

0x89e3,	// (0x0003993e) popup_slider_window_g2

0x89ff,	// (0x0003995a) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x00040c1e) popup_slider_window_g

0x8a65,	// (0x000399c0) popup_slider_window_t1

0x8ad9,	// (0x00039a34) small_volume_slider_vertical_pane

0x7393,	// (0x000382ee) small_volume_slider_vertical_pane_g1

0x7393,	// (0x000382ee) small_volume_slider_vertical_pane_g2

0x8af5,	// (0x00039a50) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x00040c30) small_volume_slider_vertical_pane_g

0xb361,	// (0x0003c2bc) area_side_right_pane_ParamLimits

0xb361,	// (0x0003c2bc) area_side_right_pane

0xca40,	// (0x0003d99b) aid_size_side_button_ParamLimits

0xca40,	// (0x0003d99b) aid_size_side_button

0xca59,	// (0x0003d9b4) grid_sctrl_middle_pane_ParamLimits

0xca59,	// (0x0003d9b4) grid_sctrl_middle_pane

0x1f8e,	// (0x00032ee9) sctrl_sk_bottom_pane

0x1f9f,	// (0x00032efa) sctrl_sk_top_pane

0x1fb1,	// (0x00032f0c) aid_touch_sctrl_top

0x1fbe,	// (0x00032f19) bg_sctrl_sk_pane_ParamLimits

0x1fbe,	// (0x00032f19) bg_sctrl_sk_pane

0x1fcc,	// (0x00032f27) sctrl_sk_top_pane_g1

0x1fd9,	// (0x00032f34) sctrl_sk_top_pane_t1

0x1fb1,	// (0x00032f0c) aid_touch_sctrl_bottom

0x1fbe,	// (0x00032f19) bg_sctrl_sk_pane_cp_ParamLimits

0x1fbe,	// (0x00032f19) bg_sctrl_sk_pane_cp

0x1ff4,	// (0x00032f4f) sctrl_sk_bottom_pane_g1

0x1fd9,	// (0x00032f34) sctrl_sk_bottom_pane_t1

0xca73,	// (0x0003d9ce) cell_sctrl_middle_pane_ParamLimits

0xca73,	// (0x0003d9ce) cell_sctrl_middle_pane

0xca84,	// (0x0003d9df) aid_touch_sctrl_middle_ParamLimits

0xca84,	// (0x0003d9df) aid_touch_sctrl_middle

0xca91,	// (0x0003d9ec) bg_sctrl_middle_pane_ParamLimits

0xca91,	// (0x0003d9ec) bg_sctrl_middle_pane

0x2664,	// (0x000335bf) cell_sctrl_middle_pane_g1_ParamLimits

0x2664,	// (0x000335bf) cell_sctrl_middle_pane_g1

0xca9f,	// (0x0003d9fa) cell_sctrl_middle_pane_g2_ParamLimits

0xca9f,	// (0x0003d9fa) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x00040c3c) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x00040c3c) cell_sctrl_middle_pane_g

0x4d40,	// (0x00035c9b) bg_sctrl_middle_pane_g1

0x4d48,	// (0x00035ca3) bg_sctrl_middle_pane_g2

0x4d50,	// (0x00035cab) bg_sctrl_middle_pane_g3

0x4d58,	// (0x00035cb3) bg_sctrl_middle_pane_g4

0x4d60,	// (0x00035cbb) bg_sctrl_middle_pane_g5

0x4d68,	// (0x00035cc3) bg_sctrl_middle_pane_g6

0x4d70,	// (0x00035ccb) bg_sctrl_middle_pane_g7

0x4d78,	// (0x00035cd3) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x00040c41) bg_sctrl_middle_pane_g

0x4d80,	// (0x00035cdb) bg_sctrl_middle_pane_g8_copy1

0x4d40,	// (0x00035c9b) bg_sctrl_sk_pane_g1

0x4d50,	// (0x00035cab) bg_sctrl_sk_pane_g2

0x4d48,	// (0x00035ca3) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00040797) bg_sctrl_sk_pane_g

0x34f5,	// (0x00034450) aid_size_touch_scroll_bar

0x4d60,	// (0x00035cbb) bg_sctrl_sk_pane_g4

0x4d58,	// (0x00035cb3) bg_sctrl_sk_pane_g5

0x4d68,	// (0x00035cc3) bg_sctrl_sk_pane_g6

0x4d70,	// (0x00035ccb) bg_sctrl_sk_pane_g7

0x4d80,	// (0x00035cdb) bg_sctrl_sk_pane_g8

0x4d78,	// (0x00035cd3) bg_sctrl_sk_pane_g9

0x0a79,	// (0x000319d4) popup_fep_china_hwr2_fs_candidate_window

0xc059,	// (0x0003cfb4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc059,	// (0x0003cfb4) popup_fep_china_hwr2_fs_control_window

0x1c68,	// (0x00032bc3) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x00040c37) sctrl_sk_top_pane_g

0xe4f8,	// (0x0003f453) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4f8,	// (0x0003f453) aid_fep_china_hwr2_fs_cell

0xe50c,	// (0x0003f467) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe50c,	// (0x0003f467) bg_popup_fep_shadow_pane_cp4

0xe523,	// (0x0003f47e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe523,	// (0x0003f47e) bg_popup_fep_shadow_pane_cp5

0xe535,	// (0x0003f490) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe535,	// (0x0003f490) popup_fep_china_hwr2_fs_control_bar_grid

0xe549,	// (0x0003f4a4) popup_fep_china_hwr2_fs_control_funtion_grid

0x8b51,	// (0x00039aac) aid_fep_china_hwr2_fs_candi_cell

0xdffb,	// (0x0003ef56) bg_popup_fep_shadow_pane_cp6

0x8b5b,	// (0x00039ab6) popup_fep_china_hwr2_fs_candidate_grid

0xe551,	// (0x0003f4ac) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe551,	// (0x0003f4ac) cell_fep_china_hwr2_fs_funtion_grid

0x7393,	// (0x000382ee) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8b7d,	// (0x00039ad8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8b7d,	// (0x00039ad8) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8b8b,	// (0x00039ae6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8b8b,	// (0x00039ae6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x00040c52) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x00040c52) cell_fep_china_hwr2_fs_funtion_grid_g

0xe569,	// (0x0003f4c4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe569,	// (0x0003f4c4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe57e,	// (0x0003f4d9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe57e,	// (0x0003f4d9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x00040c57) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x00040c57) cell_fep_china_hwr2_fs_funtion_grid_t

0x8bd2,	// (0x00039b2d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8bda,	// (0x00039b35) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8be2,	// (0x00039b3d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x00040c5c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8bea,	// (0x00039b45) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8bea,	// (0x00039b45) cell_fep_china_hwr2_fs_candidate_grid

0x8c03,	// (0x00039b5e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8c0b,	// (0x00039b66) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7393,	// (0x000382ee) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7393,	// (0x000382ee) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x00040a70) cell_fep_china_hwr2_fs_candidate_grid_g

0x8c13,	// (0x00039b6e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4936,	// (0x00035891) clock_nsta_pane_cp_24_ParamLimits

0x4936,	// (0x00035891) clock_nsta_pane_cp_24

0x49b4,	// (0x0003590f) indicator_nsta_pane_cp_24_ParamLimits

0x49b4,	// (0x0003590f) indicator_nsta_pane_cp_24

0x5a4f,	// (0x000369aa) heading_pane_g1

0x0001,

0xf8a1,	// (0x000407fc) heading_pane_g

0x64a9,	// (0x00037404) grid_sct_catagory_button_pane

0x64d9,	// (0x00037434) scroll_pane_cp5_ParamLimits

0x6f90,	// (0x00037eeb) button_value_adjust_pane_cp5_ParamLimits

0x6f90,	// (0x00037eeb) button_value_adjust_pane_cp5

0x706f,	// (0x00037fca) form2_midp_time_pane_ParamLimits

0x8c21,	// (0x00039b7c) cell_sct_catagory_button_pane_ParamLimits

0x8c21,	// (0x00039b7c) cell_sct_catagory_button_pane

0x7358,	// (0x000382b3) bg_button_pane_cp01_ParamLimits

0x7358,	// (0x000382b3) bg_button_pane_cp01

0x7393,	// (0x000382ee) cell_sct_catagory_button_pane_g1

0xc5be,	// (0x0003d519) popup_tb_extension_window

0xe59a,	// (0x0003f4f5) aid_size_cell_ext_ParamLimits

0xe59a,	// (0x0003f4f5) aid_size_cell_ext

0x3337,	// (0x00034292) bg_tb_trans_pane_cp1_ParamLimits

0x3337,	// (0x00034292) bg_tb_trans_pane_cp1

0xe5c0,	// (0x0003f51b) grid_tb_ext_pane_ParamLimits

0xe5c0,	// (0x0003f51b) grid_tb_ext_pane

0xe5fb,	// (0x0003f556) cell_tb_ext_pane_ParamLimits

0xe5fb,	// (0x0003f556) cell_tb_ext_pane

0xe623,	// (0x0003f57e) cell_tb_ext_pane_g1_ParamLimits

0xe623,	// (0x0003f57e) cell_tb_ext_pane_g1

0x8cb5,	// (0x00039c10) cell_tb_ext_pane_t1

0x2fc2,	// (0x00033f1d) list_highlight_pane_cp11_ParamLimits

0x2fc2,	// (0x00033f1d) list_highlight_pane_cp11

0xb408,	// (0x0003c363) popup_uni_indicator_window_ParamLimits

0xb408,	// (0x0003c363) popup_uni_indicator_window

0x35c6,	// (0x00034521) bg_popup_sub_pane_cp14

0x8cd0,	// (0x00039c2b) list_uniindi_pane

0x8cdc,	// (0x00039c37) uniindi_top_pane

0x2fc2,	// (0x00033f1d) bg_uniindi_top_pane

0x8cfb,	// (0x00039c56) uniindi_top_pane_g1

0x8d11,	// (0x00039c6c) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x00040c63) uniindi_top_pane_g

0x8d3b,	// (0x00039c96) uniindi_top_pane_t1

0x8d65,	// (0x00039cc0) list_single_uniindi_pane_ParamLimits

0x8d65,	// (0x00039cc0) list_single_uniindi_pane

0x7393,	// (0x000382ee) bg_uniindi_top_pane_g1

0x8d78,	// (0x00039cd3) list_single_uniindi_pane_g1

0x8d8b,	// (0x00039ce6) list_single_uniindi_pane_t1

0xf02c,	// (0x0003ff87) control_bg_pane

0x8db0,	// (0x00039d0b) bg_sctrl_sk_pane_cp1

0x8db9,	// (0x00039d14) bg_sctrl_sk_pane_cp2

0x8dc2,	// (0x00039d1d) control_bg_pane_g1

0x8dcb,	// (0x00039d26) control_bg_pane_g2

0x0001,

0xfd11,	// (0x00040c6c) control_bg_pane_g

0x6dda,	// (0x00037d35) cell_indicator_nsta_pane_g1_ParamLimits

0xdce9,	// (0x0003ec44) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x000409d4) cell_indicator_nsta_pane_g_ParamLimits

0x19f0,	// (0x0003294b) form2_midp_time_pane_t1_ParamLimits

0x1a03,	// (0x0003295e) main_idle_act4_pane_ParamLimits

0x1a03,	// (0x0003295e) main_idle_act4_pane

0xc5be,	// (0x0003d519) popup_tb_extension_window_ParamLimits

0xe5e2,	// (0x0003f53d) tb_ext_find_pane_ParamLimits

0xe5e2,	// (0x0003f53d) tb_ext_find_pane

0x8dd4,	// (0x00039d2f) ai_gene_pane_1_cp1

0x4639,	// (0x00035594) ai_gene_pane_2_cp1

0x8ddc,	// (0x00039d37) list_single_idle_plugin_calendar_pane

0x8de5,	// (0x00039d40) list_single_idle_plugin_notification_pane

0x8dee,	// (0x00039d49) list_single_idle_plugin_player_pane

0xe640,	// (0x0003f59b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe640,	// (0x0003f59b) list_single_idle_plugin_shortcut_pane

0xe668,	// (0x0003f5c3) main_idle_act4_pane_t1

0xe67e,	// (0x0003f5d9) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x00040c71) main_idle_act4_pane_t

0xe694,	// (0x0003f5ef) middle_sk_idle_act4_pane_ParamLimits

0xe694,	// (0x0003f5ef) middle_sk_idle_act4_pane

0xe6b0,	// (0x0003f60b) popup_clock_digital_analogue_window_cp2

0xe6d8,	// (0x0003f633) shortcut_wheel_idle_act4_pane_ParamLimits

0xe6d8,	// (0x0003f633) shortcut_wheel_idle_act4_pane

0x7393,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g1

0x7393,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g2

0x7393,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g3

0x7393,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g4

0x7393,	// (0x000382ee) shortcut_wheel_idle_act4_pane_g5

0x8e81,	// (0x00039ddc) shortcut_wheel_idle_act4_pane_g6

0x8e89,	// (0x00039de4) shortcut_wheel_idle_act4_pane_g7

0x8e91,	// (0x00039dec) shortcut_wheel_idle_act4_pane_g8

0x8e99,	// (0x00039df4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x00040c76) shortcut_wheel_idle_act4_pane_g

0xdfcb,	// (0x0003ef26) middle_sk_idle_act4_pane_g1_ParamLimits

0xdfcb,	// (0x0003ef26) middle_sk_idle_act4_pane_g1

0xe755,	// (0x0003f6b0) middle_sk_idle_act4_pane_g2_ParamLimits

0xe755,	// (0x0003f6b0) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x00040c99) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x00040c99) middle_sk_idle_act4_pane_g

0xe76d,	// (0x0003f6c8) middle_sk_idle_act4_pane_t1_ParamLimits

0xe76d,	// (0x0003f6c8) middle_sk_idle_act4_pane_t1

0xe79c,	// (0x0003f6f7) grid_ai_shortcut_pane_ParamLimits

0xe79c,	// (0x0003f6f7) grid_ai_shortcut_pane

0xe7b9,	// (0x0003f714) list_highlight_pane_cp16_ParamLimits

0xe7b9,	// (0x0003f714) list_highlight_pane_cp16

0xe7c6,	// (0x0003f721) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe7c6,	// (0x0003f721) list_single_idle_plugin_shortcut_pane_g1

0xe7d2,	// (0x0003f72d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe7d2,	// (0x0003f72d) list_single_idle_plugin_shortcut_pane_g2

0xe7ee,	// (0x0003f749) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7ee,	// (0x0003f749) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x00040c9e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x00040c9e) list_single_idle_plugin_shortcut_pane_g

0xe803,	// (0x0003f75e) cell_ai_shortcut_pane_ParamLimits

0xe803,	// (0x0003f75e) cell_ai_shortcut_pane

0xe819,	// (0x0003f774) cell_ai_shortcut_pane_g1_ParamLimits

0xe819,	// (0x0003f774) cell_ai_shortcut_pane_g1

0x8dd4,	// (0x00039d2f) ai_gene_pane_1_cp2

0x8fc9,	// (0x00039f24) ai_gene_pane_2_cp2

0x8fd1,	// (0x00039f2c) list_highlight_pane_cp15

0x8fda,	// (0x00039f35) list_single_idle_plugin_calendar_pane_g1

0x8fd1,	// (0x00039f2c) list_highlight_pane_cp17

0x8fe2,	// (0x00039f3d) list_single_idle_plugin_calendar_pane_g1_copy1

0x8fea,	// (0x00039f45) list_single_idle_plugin_player_pane_g1

0x6702,	// (0x0003765d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x00040ca5) list_single_idle_plugin_player_pane_g

0x8ff2,	// (0x00039f4d) list_single_idle_plugin_player_pane_t1

0x9000,	// (0x00039f5b) list_single_idle_plugin_player_pane_t2

0x900e,	// (0x00039f69) list_single_idle_plugin_player_pane_t3

0x901c,	// (0x00039f77) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x00040caa) list_single_idle_plugin_player_pane_t

0x902a,	// (0x00039f85) wait_bar_pane_cp15

0x9032,	// (0x00039f8d) grid_ai_notification_pane

0x6702,	// (0x0003765d) list_single_idle_plugin_notification_pane_g1

0xe83b,	// (0x0003f796) cell_ai_notification_pane_ParamLimits

0xe83b,	// (0x0003f796) cell_ai_notification_pane

0x9048,	// (0x00039fa3) cell_ai_notification_pane_g1

0x9050,	// (0x00039fab) cell_ai_notification_pane_t1

0xe848,	// (0x0003f7a3) tb_ext_find_button_pane

0xe850,	// (0x0003f7ab) tb_ext_find_pane_g1

0xe858,	// (0x0003f7b3) tb_ext_find_pane_t1

0x3ec5,	// (0x00034e20) tb_ext_find_button_pane_g1

0x907c,	// (0x00039fd7) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x00040cb3) tb_ext_find_button_pane_g

0xe668,	// (0x0003f5c3) main_idle_act4_pane_t1_ParamLimits

0xe67e,	// (0x0003f5d9) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x00040c71) main_idle_act4_pane_t_ParamLimits

0xe6b0,	// (0x0003f60b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe6c8,	// (0x0003f623) sat_plugin_idle_act4_pane_ParamLimits

0xe6c8,	// (0x0003f623) sat_plugin_idle_act4_pane

0xe866,	// (0x0003f7c1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe866,	// (0x0003f7c1) sat_plugin_idle_act4_pane_t1

0xe87e,	// (0x0003f7d9) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe87e,	// (0x0003f7d9) sat_plugin_idle_act4_pane_t2

0xe896,	// (0x0003f7f1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe896,	// (0x0003f7f1) sat_plugin_idle_act4_pane_t3

0xe8ae,	// (0x0003f809) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8ae,	// (0x0003f809) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x00040cb8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x00040cb8) sat_plugin_idle_act4_pane_t

0xf44a,	// (0x000403a5) popup_battery_window_ParamLimits

0xf44a,	// (0x000403a5) popup_battery_window

0x2fc2,	// (0x00033f1d) bg_popup_sub_pane_cp25_ParamLimits

0x2fc2,	// (0x00033f1d) bg_popup_sub_pane_cp25

0x90d1,	// (0x0003a02c) popup_battery_window_g1_ParamLimits

0x90d1,	// (0x0003a02c) popup_battery_window_g1

0x90dd,	// (0x0003a038) popup_battery_window_t1_ParamLimits

0x90dd,	// (0x0003a038) popup_battery_window_t1

0x90ef,	// (0x0003a04a) popup_battery_window_t2_ParamLimits

0x90ef,	// (0x0003a04a) popup_battery_window_t2

0x0001,

0xfd66,	// (0x00040cc1) popup_battery_window_t_ParamLimits

0xfd66,	// (0x00040cc1) popup_battery_window_t

0xd267,	// (0x0003e1c2) midp_canvas_pane_ParamLimits

0xd2c4,	// (0x0003e21f) midp_keypad_pane_ParamLimits

0xd2c4,	// (0x0003e21f) midp_keypad_pane

0x4816,	// (0x00035771) main_midp_pane_ParamLimits

0x6e54,	// (0x00037daf) signal_pane_g2_cp_ParamLimits

0xe8c6,	// (0x0003f821) aid_size_cell_midp_keypad_ParamLimits

0xe8c6,	// (0x0003f821) aid_size_cell_midp_keypad

0xe8e4,	// (0x0003f83f) midp_keyp_game_grid_pane_ParamLimits

0xe8e4,	// (0x0003f83f) midp_keyp_game_grid_pane

0xe90b,	// (0x0003f866) midp_keyp_rocker_pane_ParamLimits

0xe90b,	// (0x0003f866) midp_keyp_rocker_pane

0xe95c,	// (0x0003f8b7) midp_keyp_sk_left_pane_ParamLimits

0xe95c,	// (0x0003f8b7) midp_keyp_sk_left_pane

0xe9b0,	// (0x0003f90b) midp_keyp_sk_right_pane_ParamLimits

0xe9b0,	// (0x0003f90b) midp_keyp_sk_right_pane

0xdffb,	// (0x0003ef56) bg_button_pane_cp03

0xea04,	// (0x0003f95f) midp_keyp_sk_left_pane_g1

0xdffb,	// (0x0003ef56) bg_button_pane_cp04

0xea04,	// (0x0003f95f) midp_keyp_sk_right_pane_g1

0x7393,	// (0x000382ee) midp_keyp_rocker_pane_g1

0xea0d,	// (0x0003f968) keyp_game_cell_pane_ParamLimits

0xea0d,	// (0x0003f968) keyp_game_cell_pane

0xdffb,	// (0x0003ef56) bg_button_pane_cp02

0xea31,	// (0x0003f98c) keyp_game_cell_pane_g1

0xb3a3,	// (0x0003c2fe) popup_fep_vkb2_window_ParamLimits

0xb3a3,	// (0x0003c2fe) popup_fep_vkb2_window

0xcaab,	// (0x0003da06) aid_size_cell_vkb2_ParamLimits

0xcaab,	// (0x0003da06) aid_size_cell_vkb2

0xcad7,	// (0x0003da32) popup_fep_vkb2_window_g1_ParamLimits

0xcad7,	// (0x0003da32) popup_fep_vkb2_window_g1

0xcb27,	// (0x0003da82) vkb2_area_bottom_pane_ParamLimits

0xcb27,	// (0x0003da82) vkb2_area_bottom_pane

0xcb7b,	// (0x0003dad6) vkb2_area_keypad_pane_ParamLimits

0xcb7b,	// (0x0003dad6) vkb2_area_keypad_pane

0xcbc3,	// (0x0003db1e) vkb2_area_top_pane_ParamLimits

0xcbc3,	// (0x0003db1e) vkb2_area_top_pane

0xcc4f,	// (0x0003dbaa) vkb2_top_entry_pane_ParamLimits

0xcc4f,	// (0x0003dbaa) vkb2_top_entry_pane

0xcc7c,	// (0x0003dbd7) vkb2_top_grid_left_pane_ParamLimits

0xcc7c,	// (0x0003dbd7) vkb2_top_grid_left_pane

0xcc9d,	// (0x0003dbf8) vkb2_top_grid_right_pane_ParamLimits

0xcc9d,	// (0x0003dbf8) vkb2_top_grid_right_pane

0x225f,	// (0x000331ba) vkb2_cell_keypad_pane_ParamLimits

0x225f,	// (0x000331ba) vkb2_cell_keypad_pane

0xcce5,	// (0x0003dc40) vkb2_area_bottom_grid_pane_ParamLimits

0xcce5,	// (0x0003dc40) vkb2_area_bottom_grid_pane

0xcd0f,	// (0x0003dc6a) vkb2_area_bottom_pane_g1_ParamLimits

0xcd0f,	// (0x0003dc6a) vkb2_area_bottom_pane_g1

0xcd35,	// (0x0003dc90) vkb2_area_bottom_pane_g2_ParamLimits

0xcd35,	// (0x0003dc90) vkb2_area_bottom_pane_g2

0xcd66,	// (0x0003dcc1) vkb2_area_bottom_pane_g3_ParamLimits

0xcd66,	// (0x0003dcc1) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x00040cc6) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x00040cc6) vkb2_area_bottom_pane_g

0x2409,	// (0x00033364) vkb2_top_cell_left_pane_ParamLimits

0x2409,	// (0x00033364) vkb2_top_cell_left_pane

0xea3a,	// (0x0003f995) vkb2_top_entry_pane_g1_ParamLimits

0xea3a,	// (0x0003f995) vkb2_top_entry_pane_g1

0xea48,	// (0x0003f9a3) vkb2_top_entry_pane_t1_ParamLimits

0xea48,	// (0x0003f9a3) vkb2_top_entry_pane_t1

0x92a0,	// (0x0003a1fb) vkb2_top_entry_pane_t2_ParamLimits

0x92a0,	// (0x0003a1fb) vkb2_top_entry_pane_t2

0x92d2,	// (0x0003a22d) vkb2_top_entry_pane_t3_ParamLimits

0x92d2,	// (0x0003a22d) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x00040ccd) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x00040ccd) vkb2_top_entry_pane_t

0xcdd0,	// (0x0003dd2b) vkb2_top_grid_right_pane_g1_ParamLimits

0xcdd0,	// (0x0003dd2b) vkb2_top_grid_right_pane_g1

0x246c,	// (0x000333c7) vkb2_top_grid_right_pane_g2_ParamLimits

0x246c,	// (0x000333c7) vkb2_top_grid_right_pane_g2

0x2484,	// (0x000333df) vkb2_top_grid_right_pane_g3_ParamLimits

0x2484,	// (0x000333df) vkb2_top_grid_right_pane_g3

0xcde6,	// (0x0003dd41) vkb2_top_grid_right_pane_g4_ParamLimits

0xcde6,	// (0x0003dd41) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x00040cd4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x00040cd4) vkb2_top_grid_right_pane_g

0x24b2,	// (0x0003340d) vkb2_top_cell_left_pane_g1

0x24c9,	// (0x00033424) vkb2_cell_keypad_pane_g1_ParamLimits

0x24c9,	// (0x00033424) vkb2_cell_keypad_pane_g1

0x92f6,	// (0x0003a251) vkb2_cell_keypad_pane_t1_ParamLimits

0x92f6,	// (0x0003a251) vkb2_cell_keypad_pane_t1

0x24d7,	// (0x00033432) vkb2_cell_bottom_grid_pane_ParamLimits

0x24d7,	// (0x00033432) vkb2_cell_bottom_grid_pane

0x2510,	// (0x0003346b) vkb2_cell_bottom_grid_pane_g1

0xe6f9,	// (0x0003f654) aid_call2_pane_cp02

0xe701,	// (0x0003f65c) aid_call_pane_cp02

0xe709,	// (0x0003f664) clock_digital_number_pane_cp10

0xe711,	// (0x0003f66c) clock_digital_number_pane_cp11

0xe719,	// (0x0003f674) clock_digital_number_pane_cp12

0xe721,	// (0x0003f67c) clock_digital_number_pane_cp13

0xe729,	// (0x0003f684) clock_digital_separator_pane_cp10

0x3ec5,	// (0x00034e20) popup_clock_digital_analogue_window_cp2_g1

0x3ec5,	// (0x00034e20) popup_clock_digital_analogue_window_cp2_g2

0xe731,	// (0x0003f68c) popup_clock_digital_analogue_window_cp2_g3

0x3ec5,	// (0x00034e20) popup_clock_digital_analogue_window_cp2_g4

0xe731,	// (0x0003f68c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x00040c89) popup_clock_digital_analogue_window_cp2_g

0xe739,	// (0x0003f694) popup_clock_digital_analogue_window_cp2_t1

0xe747,	// (0x0003f6a2) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x00040c94) popup_clock_digital_analogue_window_cp2_t

0x7393,	// (0x000382ee) clock_digital_number_pane_cp10_g1

0x7393,	// (0x000382ee) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x00040a70) clock_digital_number_pane_cp10_g

0x7393,	// (0x000382ee) clock_digital_separator_pane_cp10_g1

0x7393,	// (0x000382ee) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x00040a70) clock_digital_separator_pane_cp10_g

0x8d1d,	// (0x00039c78) uniindi_top_pane_g3

0x8d2e,	// (0x00039c89) uniindi_top_pane_g4

0x22ea,	// (0x00033245) vkb2_row_keypad_pane_ParamLimits

0x22ea,	// (0x00033245) vkb2_row_keypad_pane

0x2530,	// (0x0003348b) vkb2_cell_t_keypad_pane_ParamLimits

0x2530,	// (0x0003348b) vkb2_cell_t_keypad_pane

0x2540,	// (0x0003349b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2540,	// (0x0003349b) vkb2_cell_t_keypad_pane_cp08

0x2553,	// (0x000334ae) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2553,	// (0x000334ae) vkb2_cell_t_keypad_pane_cp09

0x2567,	// (0x000334c2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2567,	// (0x000334c2) vkb2_cell_t_keypad_pane_cp01

0x2578,	// (0x000334d3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2578,	// (0x000334d3) vkb2_cell_t_keypad_pane_cp02

0x2589,	// (0x000334e4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2589,	// (0x000334e4) vkb2_cell_t_keypad_pane_cp03

0x259a,	// (0x000334f5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x259a,	// (0x000334f5) vkb2_cell_t_keypad_pane_cp04

0x25ab,	// (0x00033506) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25ab,	// (0x00033506) vkb2_cell_t_keypad_pane_cp05

0x25bc,	// (0x00033517) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25bc,	// (0x00033517) vkb2_cell_t_keypad_pane_cp06

0x25cd,	// (0x00033528) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25cd,	// (0x00033528) vkb2_cell_t_keypad_pane_cp07

0x25de,	// (0x00033539) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25de,	// (0x00033539) vkb2_cell_t_keypad_pane_cp10

0x1c68,	// (0x00032bc3) vkb2_cell_t_keypad_pane_g1

0x930d,	// (0x0003a268) vkb2_cell_t_keypad_pane_t1

0xf02c,	// (0x0003ff87) popup_grid_graphic2_window

0xea81,	// (0x0003f9dc) aid_size_cell_graphic2_ParamLimits

0xea81,	// (0x0003f9dc) aid_size_cell_graphic2

0xeabf,	// (0x0003fa1a) bg_popup_window_pane_cp21_ParamLimits

0xeabf,	// (0x0003fa1a) bg_popup_window_pane_cp21

0xeacd,	// (0x0003fa28) graphic2_pages_pane_ParamLimits

0xeacd,	// (0x0003fa28) graphic2_pages_pane

0xeb23,	// (0x0003fa7e) grid_graphic2_control_pane_ParamLimits

0xeb23,	// (0x0003fa7e) grid_graphic2_control_pane

0xeb6b,	// (0x0003fac6) grid_graphic2_pane_ParamLimits

0xeb6b,	// (0x0003fac6) grid_graphic2_pane

0xebf2,	// (0x0003fb4d) cell_graphic2_pane

0xf02c,	// (0x0003ff87) main_comp_mode_pane

0x8568,	// (0x000394c3) list_ai3_gene_pane_ParamLimits

0xe440,	// (0x0003f39b) bg_popup_window_pane_cp19_ParamLimits

0x896b,	// (0x000398c6) bg_touch_area_indi_pane_ParamLimits

0x896b,	// (0x000398c6) bg_touch_area_indi_pane

0x8981,	// (0x000398dc) bg_touch_area_indi_pane_cp01_ParamLimits

0x8981,	// (0x000398dc) bg_touch_area_indi_pane_cp01

0x8997,	// (0x000398f2) bg_touch_area_indi_pane_cp02_ParamLimits

0x8997,	// (0x000398f2) bg_touch_area_indi_pane_cp02

0x89ad,	// (0x00039908) bg_touch_area_indi_pane_cp03_ParamLimits

0x89ad,	// (0x00039908) bg_touch_area_indi_pane_cp03

0x89c7,	// (0x00039922) popup_slider_window_g1_ParamLimits

0x89e3,	// (0x0003993e) popup_slider_window_g2_ParamLimits

0x89ff,	// (0x0003995a) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x00040c1e) popup_slider_window_g_ParamLimits

0x8a65,	// (0x000399c0) popup_slider_window_t1_ParamLimits

0x8ad9,	// (0x00039a34) small_volume_slider_vertical_pane_ParamLimits

0xebf2,	// (0x0003fb4d) cell_graphic2_pane_ParamLimits

0xec4d,	// (0x0003fba8) bg_button_pane_cp10_ParamLimits

0xec4d,	// (0x0003fba8) bg_button_pane_cp10

0xec60,	// (0x0003fbbb) bg_button_pane_cp11_ParamLimits

0xec60,	// (0x0003fbbb) bg_button_pane_cp11

0xec73,	// (0x0003fbce) graphic2_pages_pane_g1_ParamLimits

0xec73,	// (0x0003fbce) graphic2_pages_pane_g1

0xec8e,	// (0x0003fbe9) graphic2_pages_pane_g2_ParamLimits

0xec8e,	// (0x0003fbe9) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x00040ce2) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x00040ce2) graphic2_pages_pane_g

0xeca6,	// (0x0003fc01) graphic2_pages_pane_t1_ParamLimits

0xeca6,	// (0x0003fc01) graphic2_pages_pane_t1

0xecbe,	// (0x0003fc19) cell_graphic2_control_pane_ParamLimits

0xecbe,	// (0x0003fc19) cell_graphic2_control_pane

0xecf0,	// (0x0003fc4b) cell_graphic2_pane_g1_ParamLimits

0xecf0,	// (0x0003fc4b) cell_graphic2_pane_g1

0xdfd9,	// (0x0003ef34) cell_graphic2_pane_g2_ParamLimits

0xdfd9,	// (0x0003ef34) cell_graphic2_pane_g2

0xe00f,	// (0x0003ef6a) cell_graphic2_pane_g3_ParamLimits

0xe00f,	// (0x0003ef6a) cell_graphic2_pane_g3

0xdfe6,	// (0x0003ef41) cell_graphic2_pane_g4_ParamLimits

0xdfe6,	// (0x0003ef41) cell_graphic2_pane_g4

0xecfd,	// (0x0003fc58) cell_graphic2_pane_g5_ParamLimits

0xecfd,	// (0x0003fc58) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x00040ce7) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x00040ce7) cell_graphic2_pane_g

0xed1a,	// (0x0003fc75) cell_graphic2_pane_t1_ParamLimits

0xed1a,	// (0x0003fc75) cell_graphic2_pane_t1

0x5a43,	// (0x0003699e) grid_highlight_pane_cp11_ParamLimits

0x5a43,	// (0x0003699e) grid_highlight_pane_cp11

0x2fc2,	// (0x00033f1d) bg_button_pane_cp05

0xed64,	// (0x0003fcbf) cell_graphic2_control_pane_g1

0x7393,	// (0x000382ee) bg_touch_area_indi_pane_g1

0x95e6,	// (0x0003a541) aid_cmod_rocker_key_size

0x95f0,	// (0x0003a54b) aid_cmode_itu_key_size

0x95fa,	// (0x0003a555) main_cmode_video_pane

0x9604,	// (0x0003a55f) main_comp_mode_itu_pane

0x9610,	// (0x0003a56b) main_comp_mode_rocker_pane

0x961c,	// (0x0003a577) cell_cmode_rocker_pane_ParamLimits

0x961c,	// (0x0003a577) cell_cmode_rocker_pane

0x962e,	// (0x0003a589) cell_cmode_itu_pane_ParamLimits

0x962e,	// (0x0003a589) cell_cmode_itu_pane

0x35c6,	// (0x00034521) bg_button_pane_cp06_ParamLimits

0x35c6,	// (0x00034521) bg_button_pane_cp06

0x7611,	// (0x0003856c) cell_cmode_rocker_pane_g1_ParamLimits

0x7611,	// (0x0003856c) cell_cmode_rocker_pane_g1

0x8b7d,	// (0x00039ad8) cell_cmode_rocker_pane_g2_ParamLimits

0x8b7d,	// (0x00039ad8) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x00040cf7) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x00040cf7) cell_cmode_rocker_pane_g

0xdffb,	// (0x0003ef56) bg_button_pane_cp07

0x9643,	// (0x0003a59e) cell_cmode_itu_pane_g1

0x964c,	// (0x0003a5a7) cell_cmode_itu_pane_t1

0x965a,	// (0x0003a5b5) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x00040cfc) cell_cmode_itu_pane_t

0x8da0,	// (0x00039cfb) aid_touch_ctrl_left

0x8da8,	// (0x00039d03) aid_touch_ctrl_right

0xdffb,	// (0x0003ef56) compa_mode_pane

0xed88,	// (0x0003fce3) aid_cmod_rocker_key_size_cp

0xed92,	// (0x0003fced) aid_cmode_itu_key_size_cp

0x967c,	// (0x0003a5d7) compa_mode_pane_g1

0x9684,	// (0x0003a5df) compa_mode_pane_g2

0x968c,	// (0x0003a5e7) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x00040d01) compa_mode_pane_g

0xed9c,	// (0x0003fcf7) main_comp_mode_itu_pane_cp

0xeda4,	// (0x0003fcff) main_comp_mode_rocker_pane_cp

0xedac,	// (0x0003fd07) cell_cmode_itu_pane_cp_ParamLimits

0xedac,	// (0x0003fd07) cell_cmode_itu_pane_cp

0xedc1,	// (0x0003fd1c) cell_cmode_rocker_pane_cp_ParamLimits

0xedc1,	// (0x0003fd1c) cell_cmode_rocker_pane_cp

0x35c6,	// (0x00034521) bg_button_pane_cp06_cp_ParamLimits

0x35c6,	// (0x00034521) bg_button_pane_cp06_cp

0x7611,	// (0x0003856c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7611,	// (0x0003856c) cell_cmode_rocker_pane_g1_cp

0x7393,	// (0x000382ee) cell_cmode_rocker_pane_g2_cp

0xdffb,	// (0x0003ef56) bg_button_pane_cp07_cp

0xedd3,	// (0x0003fd2e) cell_cmode_itu_pane_g1_cp

0xeddc,	// (0x0003fd37) cell_cmode_itu_pane_t1_cp

0xeddc,	// (0x0003fd37) cell_cmode_itu_pane_t2_cp

0xdadc,	// (0x0003ea37) settings_code_pane_cp2

0x2d39,	// (0x00033c94) bg_popup_window_pane_cp3_ParamLimits

0x31c2,	// (0x0003411d) heading_pane_cp3_ParamLimits

0x31d1,	// (0x0003412c) listscroll_popup_graphic_pane_ParamLimits

0x1a11,	// (0x0003296c) fep_hwr_aid_pane_ParamLimits

0x1fb1,	// (0x00032f0c) aid_touch_sctrl_top_ParamLimits

0x1fcc,	// (0x00032f27) sctrl_sk_top_pane_g1_ParamLimits

0x1c68,	// (0x00032bc3) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x00040c37) sctrl_sk_top_pane_g_ParamLimits

0x1fd9,	// (0x00032f34) sctrl_sk_top_pane_t1_ParamLimits

0x1fb1,	// (0x00032f0c) aid_touch_sctrl_bottom_ParamLimits

0x1fd9,	// (0x00032f34) sctrl_sk_bottom_pane_t1_ParamLimits

0x8ce9,	// (0x00039c44) aid_area_touch_clock

0xcc0f,	// (0x0003db6a) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc0f,	// (0x0003db6a) aid_vkb2_area_top_pane_cell

0xccbe,	// (0x0003dc19) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xccbe,	// (0x0003dc19) aid_vkb2_area_bottom_pane_cell

0x9258,	// (0x0003a1b3) popup_char_count_window

0x96d9,	// (0x0003a634) popup_char_count_window_g1

0x96e2,	// (0x0003a63d) popup_char_count_window_g2

0x96eb,	// (0x0003a646) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x00040d08) popup_char_count_window_g

0x96f4,	// (0x0003a64f) popup_char_count_window_t1

0x2080,	// (0x00032fdb) popup_fep_char_preview_window_ParamLimits

0x2080,	// (0x00032fdb) popup_fep_char_preview_window

0xcc2f,	// (0x0003db8a) vkb2_top_candi_pane_ParamLimits

0xcc2f,	// (0x0003db8a) vkb2_top_candi_pane

0xedea,	// (0x0003fd45) cell_vkb2_top_candi_pane_ParamLimits

0xedea,	// (0x0003fd45) cell_vkb2_top_candi_pane

0x25f3,	// (0x0003354e) bg_popup_fep_char_preview_window_ParamLimits

0x25f3,	// (0x0003354e) bg_popup_fep_char_preview_window

0x2601,	// (0x0003355c) popup_fep_char_preview_window_t1_ParamLimits

0x2601,	// (0x0003355c) popup_fep_char_preview_window_t1

0x974c,	// (0x0003a6a7) bg_popup_fep_char_preview_window_g1

0x9754,	// (0x0003a6af) bg_popup_fep_char_preview_window_g2

0x975c,	// (0x0003a6b7) bg_popup_fep_char_preview_window_g3

0x9764,	// (0x0003a6bf) bg_popup_fep_char_preview_window_g4

0x976c,	// (0x0003a6c7) bg_popup_fep_char_preview_window_g5

0x9774,	// (0x0003a6cf) bg_popup_fep_char_preview_window_g6

0x977c,	// (0x0003a6d7) bg_popup_fep_char_preview_window_g7

0x9784,	// (0x0003a6df) bg_popup_fep_char_preview_window_g8

0x978c,	// (0x0003a6e7) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x00040d0f) bg_popup_fep_char_preview_window_g

0x1c68,	// (0x00032bc3) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1c68,	// (0x00032bc3) cell_vkb2_top_candi_pane_g1

0x1c76,	// (0x00032bd1) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1c76,	// (0x00032bd1) cell_vkb2_top_candi_pane_g2

0x88f4,	// (0x0003984f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x88f4,	// (0x0003984f) cell_vkb2_top_candi_pane_g3

0x2643,	// (0x0003359e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2643,	// (0x0003359e) cell_vkb2_top_candi_pane_g4

0x7964,	// (0x000388bf) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7964,	// (0x000388bf) cell_vkb2_top_candi_pane_g5

0x2664,	// (0x000335bf) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2664,	// (0x000335bf) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x00040d24) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x00040d24) cell_vkb2_top_candi_pane_g

0x2672,	// (0x000335cd) cell_vkb2_top_candi_pane_t1

0x13df,	// (0x0003233a) aid_size_touch_slider_mark_ParamLimits

0x13df,	// (0x0003233a) aid_size_touch_slider_mark

0xeb09,	// (0x0003fa64) grid_graphic2_catg_pane_ParamLimits

0xeb09,	// (0x0003fa64) grid_graphic2_catg_pane

0xebc5,	// (0x0003fb20) popup_grid_graphic2_window_t1_ParamLimits

0xebc5,	// (0x0003fb20) popup_grid_graphic2_window_t1

0xebdb,	// (0x0003fb36) popup_grid_graphic2_window_t2_ParamLimits

0xebdb,	// (0x0003fb36) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x00040cdd) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x00040cdd) popup_grid_graphic2_window_t

0x2fc2,	// (0x00033f1d) bg_button_pane_cp05_ParamLimits

0xed64,	// (0x0003fcbf) cell_graphic2_control_pane_g1_ParamLimits

0xee4a,	// (0x0003fda5) cell_graphic2_catg_pane_ParamLimits

0xee4a,	// (0x0003fda5) cell_graphic2_catg_pane

0xdffb,	// (0x0003ef56) bg_button_pane_cp12

0xee5c,	// (0x0003fdb7) cell_graphic2_catg_pane_g1

0x8cb5,	// (0x00039c10) cell_tb_ext_pane_t1_ParamLimits

0x2429,	// (0x00033384) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2429,	// (0x00033384) vkb2_top_cell_right_narrow_pane

0x2441,	// (0x0003339c) vkb2_top_cell_right_wide_pane_ParamLimits

0x2441,	// (0x0003339c) vkb2_top_cell_right_wide_pane

0x1a03,	// (0x0003295e) bg_vkb2_func_pane_ParamLimits

0x1a03,	// (0x0003295e) bg_vkb2_func_pane

0x24b2,	// (0x0003340d) vkb2_top_cell_left_pane_g1_ParamLimits

0x1a03,	// (0x0003295e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1a03,	// (0x0003295e) bg_vkb2_fuc_pane_cp03

0x2510,	// (0x0003346b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4d48,	// (0x00035ca3) bg_vkb2_func_pane_g1

0x4d50,	// (0x00035cab) bg_vkb2_func_pane_g2

0x4d60,	// (0x00035cbb) bg_vkb2_func_pane_g3

0x4d58,	// (0x00035cb3) bg_vkb2_func_pane_g4

0x4d68,	// (0x00035cc3) bg_vkb2_func_pane_g5

0x4d70,	// (0x00035ccb) bg_vkb2_func_pane_g6

0x4d78,	// (0x00035cd3) bg_vkb2_func_pane_g7

0x4d80,	// (0x00035cdb) bg_vkb2_func_pane_g8

0x4d40,	// (0x00035c9b) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x00040d31) bg_vkb2_func_pane_g

0x1a03,	// (0x0003295e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1a03,	// (0x0003295e) bg_vkb2_fuc_pane_cp01

0x24b2,	// (0x0003340d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24b2,	// (0x0003340d) vkb2_top_cell_right_wide_pane_g1

0x1a03,	// (0x0003295e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1a03,	// (0x0003295e) bg_vkb2_fuc_pane_cp02

0x2691,	// (0x000335ec) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2691,	// (0x000335ec) vkb2_top_cell_right_narrow_pane_g1

0xe382,	// (0x0003f2dd) aid_touch_area_decrease_ParamLimits

0xe382,	// (0x0003f2dd) aid_touch_area_decrease

0xe3bc,	// (0x0003f317) aid_touch_area_increase_ParamLimits

0xe3bc,	// (0x0003f317) aid_touch_area_increase

0xe3e4,	// (0x0003f33f) aid_touch_area_mute_ParamLimits

0xe3e4,	// (0x0003f33f) aid_touch_area_mute

0xe40c,	// (0x0003f367) aid_touch_area_slider_ParamLimits

0xe40c,	// (0x0003f367) aid_touch_area_slider

0xe44c,	// (0x0003f3a7) popup_slider_window_g4_ParamLimits

0xe44c,	// (0x0003f3a7) popup_slider_window_g4

0xe474,	// (0x0003f3cf) popup_slider_window_g5_ParamLimits

0xe474,	// (0x0003f3cf) popup_slider_window_g5

0xe4a8,	// (0x0003f403) popup_slider_window_g6_ParamLimits

0xe4a8,	// (0x0003f403) popup_slider_window_g6

0x8a93,	// (0x000399ee) popup_slider_window_t2_ParamLimits

0x8a93,	// (0x000399ee) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x00040c2b) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x00040c2b) popup_slider_window_t

0xe4c4,	// (0x0003f41f) slider_pane_ParamLimits

0xe4c4,	// (0x0003f41f) slider_pane

0x97af,	// (0x0003a70a) slider_pane_g1_ParamLimits

0x97af,	// (0x0003a70a) slider_pane_g1

0x97c3,	// (0x0003a71e) slider_pane_g2_ParamLimits

0x97c3,	// (0x0003a71e) slider_pane_g2

0x97d9,	// (0x0003a734) slider_pane_g3_ParamLimits

0x97d9,	// (0x0003a734) slider_pane_g3

0x0003,

0xfde9,	// (0x00040d44) slider_pane_g_ParamLimits

0xfde9,	// (0x00040d44) slider_pane_g

0xc606,	// (0x0003d561) popup_tb_float_extension_window_ParamLimits

0xc606,	// (0x0003d561) popup_tb_float_extension_window

0x9805,	// (0x0003a760) aid_size_cell_tb_float_ext

0xdffb,	// (0x0003ef56) bg_popup_sub_window_cp28

0x9811,	// (0x0003a76c) grid_tb_float_ext_pane

0x981b,	// (0x0003a776) cell_tb_float_ext_pane_ParamLimits

0x981b,	// (0x0003a776) cell_tb_float_ext_pane

0x9835,	// (0x0003a790) cell_tb_float_ext_pane_g1

0x983e,	// (0x0003a799) grid_highlight_pane_cp12

0xc7e2,	// (0x0003d73d) cell_last_hwr_side_pane_ParamLimits

0xc7e2,	// (0x0003d73d) cell_last_hwr_side_pane

0x7393,	// (0x000382ee) cell_last_hwr_side_pane_g1

0x9847,	// (0x0003a7a2) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x00040d4d) cell_last_hwr_side_pane_g

0xcd9b,	// (0x0003dcf6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd9b,	// (0x0003dcf6) vkb2_area_bottom_space_btn_pane

0x1c68,	// (0x00032bc3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x930d,	// (0x0003a268) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2672,	// (0x000335cd) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26b1,	// (0x0003360c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26b1,	// (0x0003360c) vkb2_area_bottom_space_btn_pane_g1

0x26eb,	// (0x00033646) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26eb,	// (0x00033646) vkb2_area_bottom_space_btn_pane_g2

0x2721,	// (0x0003367c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2721,	// (0x0003367c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x00040d52) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x00040d52) vkb2_area_bottom_space_btn_pane_g

0x1ac6,	// (0x00032a21) cel_fep_hwr_func_pane_ParamLimits

0x1ac6,	// (0x00032a21) cel_fep_hwr_func_pane

0xc7b7,	// (0x0003d712) cell_hwr_side_button_pane_ParamLimits

0xc7b7,	// (0x0003d712) cell_hwr_side_button_pane

0x8ce9,	// (0x00039c44) aid_area_touch_clock_ParamLimits

0x2fc2,	// (0x00033f1d) bg_uniindi_top_pane_ParamLimits

0x8cfb,	// (0x00039c56) uniindi_top_pane_g1_ParamLimits

0x8d11,	// (0x00039c6c) uniindi_top_pane_g2_ParamLimits

0x8d1d,	// (0x00039c78) uniindi_top_pane_g3_ParamLimits

0x8d2e,	// (0x00039c89) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x00040c63) uniindi_top_pane_g_ParamLimits

0x8d3b,	// (0x00039c96) uniindi_top_pane_t1_ParamLimits

0x2fc2,	// (0x00033f1d) bg_vkb2_func_pane_cp01_ParamLimits

0x2fc2,	// (0x00033f1d) bg_vkb2_func_pane_cp01

0x9850,	// (0x0003a7ab) cel_fep_hwr_func_pane_g1_ParamLimits

0x9850,	// (0x0003a7ab) cel_fep_hwr_func_pane_g1

0x2fc2,	// (0x00033f1d) bg_vkb2_func_pane_cp02_ParamLimits

0x2fc2,	// (0x00033f1d) bg_vkb2_func_pane_cp02

0x9850,	// (0x0003a7ab) cell_hwr_side_button_pane_g1_ParamLimits

0x9850,	// (0x0003a7ab) cell_hwr_side_button_pane_g1

0x4bc1,	// (0x00035b1c) status_pane_g4_ParamLimits

0x4bc1,	// (0x00035b1c) status_pane_g4

0x4bdb,	// (0x00035b36) status_pane_t1

0x70d8,	// (0x00038033) form2_midp_gauge_slider_cont_pane

0x70e0,	// (0x0003803b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xddb4,	// (0x0003ed0f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xddc6,	// (0x0003ed21) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x00040a23) form2_midp_gauge_slider_pane_t_ParamLimits

0x7116,	// (0x00038071) form2_midp_slider_pane_ParamLimits

0x2048,	// (0x00032fa3) aid_size_cell_func_vkb2_ParamLimits

0x2048,	// (0x00032fa3) aid_size_cell_func_vkb2

0x97f1,	// (0x0003a74c) slider_pane_g4_ParamLimits

0x97f1,	// (0x0003a74c) slider_pane_g4

0xce04,	// (0x0003dd5f) form2_midp_gauge_slider_pane_t2_cp01

0xce12,	// (0x0003dd6d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce12,	// (0x0003dd6d) form2_midp_gauge_slider_pane_t3_cp01

0x2796,	// (0x000336f1) form2_midp_slider_pane_cp01

0xdffb,	// (0x0003ef56) navi_smil_pane

0x9889,	// (0x0003a7e4) navi_smil_pane_g1

0x9891,	// (0x0003a7ec) navi_smil_pane_t1

0x985e,	// (0x0003a7b9) form2_midp_slider_pane_g1

0x9867,	// (0x0003a7c2) form2_midp_slider_pane_g2

0x986f,	// (0x0003a7ca) form2_midp_slider_pane_g3

0x985e,	// (0x0003a7b9) form2_midp_slider_pane_g4

0xee65,	// (0x0003fdc0) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x00040d5b) form2_midp_slider_pane_g

0x275b,	// (0x000336b6) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x275b,	// (0x000336b6) vkb2_area_bottom_space_btn_pane_g4

0xd4c0,	// (0x0003e41b) lc0_navi_pane_ParamLimits

0xd4c0,	// (0x0003e41b) lc0_navi_pane

0xd52a,	// (0x0003e485) lc0_stat_indi_pane_ParamLimits

0xd52a,	// (0x0003e485) lc0_stat_indi_pane

0xd53f,	// (0x0003e49a) ls0_title_pane_ParamLimits

0xd53f,	// (0x0003e49a) ls0_title_pane

0x35c6,	// (0x00034521) bg_popup_sub_pane_cp14_ParamLimits

0x8cd0,	// (0x00039c2b) list_uniindi_pane_ParamLimits

0x8cdc,	// (0x00039c37) uniindi_top_pane_ParamLimits

0x8d78,	// (0x00039cd3) list_single_uniindi_pane_g1_ParamLimits

0x8d8b,	// (0x00039ce6) list_single_uniindi_pane_t1_ParamLimits

0xce2f,	// (0x0003dd8a) lc0_stat_clock_pane_ParamLimits

0xce2f,	// (0x0003dd8a) lc0_stat_clock_pane

0xee70,	// (0x0003fdcb) lc0_stat_indi_pane_g1_ParamLimits

0xee70,	// (0x0003fdcb) lc0_stat_indi_pane_g1

0xee7d,	// (0x0003fdd8) lc0_stat_indi_pane_g2_ParamLimits

0xee7d,	// (0x0003fdd8) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x00040d66) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x00040d66) lc0_stat_indi_pane_g

0xce3c,	// (0x0003dd97) lc0_uni_indicator_pane_ParamLimits

0xce3c,	// (0x0003dd97) lc0_uni_indicator_pane

0xee8a,	// (0x0003fde5) ls0_title_pane_g1_ParamLimits

0xee8a,	// (0x0003fde5) ls0_title_pane_g1

0xee9e,	// (0x0003fdf9) ls0_title_pane_t1_ParamLimits

0xee9e,	// (0x0003fdf9) ls0_title_pane_t1

0xce49,	// (0x0003dda4) lc0_uni_indicator_pane_g1_ParamLimits

0xce49,	// (0x0003dda4) lc0_uni_indicator_pane_g1

0x9903,	// (0x0003a85e) lc0_stat_clock_pane_t1

0xf02c,	// (0x0003ff87) main_ai5_pane

0x9911,	// (0x0003a86c) ai5_sk_pane_ParamLimits

0x9911,	// (0x0003a86c) ai5_sk_pane

0xeecc,	// (0x0003fe27) cell_ai5_widget_pane_ParamLimits

0xeecc,	// (0x0003fe27) cell_ai5_widget_pane

0x99e7,	// (0x0003a942) aid_size_cell_widget_grid

0x99f5,	// (0x0003a950) bg_ai5_widget_pane_ParamLimits

0x99f5,	// (0x0003a950) bg_ai5_widget_pane

0x9a71,	// (0x0003a9cc) cell_ai5_widget_pane_g2

0x9a85,	// (0x0003a9e0) cell_ai5_widget_pane_g3

0x9a9f,	// (0x0003a9fa) cell_ai5_widget_pane_g4

0x9aaf,	// (0x0003aa0a) cell_ai5_widget_pane_g5

0x9abf,	// (0x0003aa1a) cell_ai5_widget_pane_g6

0x9acb,	// (0x0003aa26) cell_ai5_widget_pane_g7

0x9b37,	// (0x0003aa92) cell_ai5_widget_pane_t1_ParamLimits

0x9b37,	// (0x0003aa92) cell_ai5_widget_pane_t1

0x9b54,	// (0x0003aaaf) cell_ai5_widget_pane_t2_ParamLimits

0x9b54,	// (0x0003aaaf) cell_ai5_widget_pane_t2

0x9b6c,	// (0x0003aac7) cell_ai5_widget_pane_t3_ParamLimits

0x9b6c,	// (0x0003aac7) cell_ai5_widget_pane_t3

0x9b84,	// (0x0003aadf) cell_ai5_widget_pane_t4_ParamLimits

0x9b84,	// (0x0003aadf) cell_ai5_widget_pane_t4

0x9baa,	// (0x0003ab05) cell_ai5_widget_pane_t5_ParamLimits

0x9baa,	// (0x0003ab05) cell_ai5_widget_pane_t5

0x9bc9,	// (0x0003ab24) cell_ai5_widget_pane_t6_ParamLimits

0x9bc9,	// (0x0003ab24) cell_ai5_widget_pane_t6

0x9bdb,	// (0x0003ab36) cell_ai5_widget_pane_t7_ParamLimits

0x9bdb,	// (0x0003ab36) cell_ai5_widget_pane_t7

0x9bfa,	// (0x0003ab55) cell_ai5_widget_pane_t8_ParamLimits

0x9bfa,	// (0x0003ab55) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x00040d86) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x00040d86) cell_ai5_widget_pane_t

0x9c7e,	// (0x0003abd9) grid_ai5_widget_pane

0x35c6,	// (0x00034521) highlight_cell_ai5_widget_pane_ParamLimits

0x35c6,	// (0x00034521) highlight_cell_ai5_widget_pane

0xef38,	// (0x0003fe93) ai5_sk_left_pane

0xef42,	// (0x0003fe9d) ai5_sk_middle_pane

0xef4c,	// (0x0003fea7) ai5_sk_right_pane

0x9caa,	// (0x0003ac05) bg_ai5_widget_pane_g1_ParamLimits

0x9caa,	// (0x0003ac05) bg_ai5_widget_pane_g1

0x9cb6,	// (0x0003ac11) bg_ai5_widget_pane_g2_ParamLimits

0x9cb6,	// (0x0003ac11) bg_ai5_widget_pane_g2

0x9cc2,	// (0x0003ac1d) bg_ai5_widget_pane_g3_ParamLimits

0x9cc2,	// (0x0003ac1d) bg_ai5_widget_pane_g3

0x9cce,	// (0x0003ac29) bg_ai5_widget_pane_g4_ParamLimits

0x9cce,	// (0x0003ac29) bg_ai5_widget_pane_g4

0x9cda,	// (0x0003ac35) bg_ai5_widget_pane_g5_ParamLimits

0x9cda,	// (0x0003ac35) bg_ai5_widget_pane_g5

0x9ce6,	// (0x0003ac41) bg_ai5_widget_pane_g6_ParamLimits

0x9ce6,	// (0x0003ac41) bg_ai5_widget_pane_g6

0x9cf2,	// (0x0003ac4d) bg_ai5_widget_pane_g7_ParamLimits

0x9cf2,	// (0x0003ac4d) bg_ai5_widget_pane_g7

0x9cfe,	// (0x0003ac59) bg_ai5_widget_pane_g8_ParamLimits

0x9cfe,	// (0x0003ac59) bg_ai5_widget_pane_g8

0x9d0a,	// (0x0003ac65) bg_ai5_widget_pane_g9_ParamLimits

0x9d0a,	// (0x0003ac65) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x00040d9f) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x00040d9f) bg_ai5_widget_pane_g

0x9d3c,	// (0x0003ac97) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d3c,	// (0x0003ac97) cell_shortcut_ai5_widget_pane

0x44f2,	// (0x0003544d) bg_cell_shortcut_ai5_widget_pane

0x9d4d,	// (0x0003aca8) cell_grid_ai5_widget_pane_g1

0x44f2,	// (0x0003544d) highlight_cell_shortcut_ai5_widget_pane

0x4d48,	// (0x00035ca3) ai5_sk_left_pane_g1

0x9d56,	// (0x0003acb1) ai5_sk_left_pane_g2

0x9d5e,	// (0x0003acb9) ai5_sk_left_pane_g3

0x9d66,	// (0x0003acc1) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x00040db2) ai5_sk_left_pane_g

0x9d6e,	// (0x0003acc9) ai5_sk_left_pane_t1

0x4d50,	// (0x00035cab) ai5_sk_right_pane_g1

0x9d7c,	// (0x0003acd7) ai5_sk_right_pane_g2

0x9d84,	// (0x0003acdf) ai5_sk_right_pane_g3

0x9d8c,	// (0x0003ace7) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x00040dbb) ai5_sk_right_pane_g

0x9d94,	// (0x0003acef) ai5_sk_right_pane_t1

0x4d50,	// (0x00035cab) ai5_sk_middle_pane_g1

0x4d48,	// (0x00035ca3) ai5_sk_middle_pane_g2

0x4d68,	// (0x00035cc3) ai5_sk_middle_pane_g3

0x9d84,	// (0x0003acdf) ai5_sk_middle_pane_g4

0x9d5e,	// (0x0003acb9) ai5_sk_middle_pane_g5

0x9da2,	// (0x0003acfd) ai5_sk_middle_pane_g6

0xef56,	// (0x0003feb1) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x00040dc4) ai5_sk_middle_pane_g

0xd3ac,	// (0x0003e307) aid_touch_area_size_lc0_ParamLimits

0xd3ac,	// (0x0003e307) aid_touch_area_size_lc0

0x1c97,	// (0x00032bf2) cell_hwr_candidate_pane_t1_ParamLimits

0x4892,	// (0x000357ed) aid_touch_navi_pane

0xd638,	// (0x0003e593) status_dt_navi_pane_ParamLimits

0xd638,	// (0x0003e593) status_dt_navi_pane

0xd650,	// (0x0003e5ab) status_dt_sta_pane_ParamLimits

0xd650,	// (0x0003e5ab) status_dt_sta_pane

0xef5e,	// (0x0003feb9) dt_sta_controll_pane

0xef6b,	// (0x0003fec6) dt_sta_indi_pane

0xf1e5,	// (0x00040140) dt_sta_title_pane

0x2fc2,	// (0x00033f1d) bg_dt_sta_indi_pane_ParamLimits

0x2fc2,	// (0x00033f1d) bg_dt_sta_indi_pane

0xf1f7,	// (0x00040152) dt_sta_battery_pane

0xf1ff,	// (0x0004015a) dt_sta_indi_pane_g1

0x9df4,	// (0x0003ad4f) dt_sta_indi_pane_g2

0x9dfd,	// (0x0003ad58) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x00040dd3) dt_sta_indi_pane_g

0x9e06,	// (0x0003ad61) dt_sta_signal_pane

0x35c6,	// (0x00034521) bg_dt_sta_title_pane_ParamLimits

0x35c6,	// (0x00034521) bg_dt_sta_title_pane

0x9e0f,	// (0x0003ad6a) dt_sta_title_pane_g1

0x9e17,	// (0x0003ad72) dt_sta_title_pane_t1_ParamLimits

0x9e17,	// (0x0003ad72) dt_sta_title_pane_t1

0xdffb,	// (0x0003ef56) bg_dt_sta_control_pane

0xf208,	// (0x00040163) dt_sta_controll_pane_g1

0x9e35,	// (0x0003ad90) bg_dt_sta_title_pane_g1

0x9e3e,	// (0x0003ad99) bg_dt_sta_title_pane_g2

0x9e47,	// (0x0003ada2) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x00040dda) bg_dt_sta_title_pane_g

0x7393,	// (0x000382ee) bg_dt_sta_indi_pane_g1

0x9e50,	// (0x0003adab) dt_sta_signal_pane_g1

0x9e58,	// (0x0003adb3) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x00040de1) dt_sta_signal_pane_g

0x9e60,	// (0x0003adbb) dt_sta_battery_pane_g1

0x9e69,	// (0x0003adc4) dt_sta_battery_pane_t1

0x7393,	// (0x000382ee) bg_dt_sta_control_pane_g1

0x3ff0,	// (0x00034f4b) fep_china_uni_eep_pane

0x3ff8,	// (0x00034f53) fep_china_uni_entry_pane_ParamLimits

0x4008,	// (0x00034f63) popup_fep_china_uni_window_g1_ParamLimits

0x4018,	// (0x00034f73) popup_fep_china_uni_window_g2_ParamLimits

0x4018,	// (0x00034f73) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x00040653) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x00040653) popup_fep_china_uni_window_g

0x9e78,	// (0x0003add3) fep_china_uni_eep_pane_g1

0x9e80,	// (0x0003addb) fep_china_uni_eep_pane_t1

0x9880,	// (0x0003a7db) aid_touch_area_size_smil_player

0x49e8,	// (0x00035943) lc0_clock_pane

0x4bcf,	// (0x00035b2a) status_pane_g5_ParamLimits

0x4bcf,	// (0x00035b2a) status_pane_g5

0xc188,	// (0x0003d0e3) popup_keymap_window

0x4b8d,	// (0x00035ae8) status_icon_pane

0x9a85,	// (0x0003a9e0) cell_ai5_widget_pane_g3_ParamLimits

0x9a9f,	// (0x0003a9fa) cell_ai5_widget_pane_g4_ParamLimits

0x9aaf,	// (0x0003aa0a) cell_ai5_widget_pane_g5_ParamLimits

0x9ad7,	// (0x0003aa32) cell_ai5_widget_pane_g8_ParamLimits

0x9ad7,	// (0x0003aa32) cell_ai5_widget_pane_g8

0x9aeb,	// (0x0003aa46) cell_ai5_widget_pane_g9_ParamLimits

0x9aeb,	// (0x0003aa46) cell_ai5_widget_pane_g9

0x9aff,	// (0x0003aa5a) cell_ai5_widget_pane_g10_ParamLimits

0x9aff,	// (0x0003aa5a) cell_ai5_widget_pane_g10

0x9e8f,	// (0x0003adea) status_icon_pane_g1

0xdffb,	// (0x0003ef56) bg_popup_sub_pane_cp13

0x9e97,	// (0x0003adf2) popup_keymap_window_t1

0xd342,	// (0x0003e29d) control_pane_g6_ParamLimits

0xd342,	// (0x0003e29d) control_pane_g6

0xd34f,	// (0x0003e2aa) control_pane_g7_ParamLimits

0xd34f,	// (0x0003e2aa) control_pane_g7

0xd35c,	// (0x0003e2b7) control_pane_g8_ParamLimits

0xd35c,	// (0x0003e2b7) control_pane_g8

0xef5e,	// (0x0003feb9) dt_sta_controll_pane_ParamLimits

0xef6b,	// (0x0003fec6) dt_sta_indi_pane_ParamLimits

0xf1e5,	// (0x00040140) dt_sta_title_pane_ParamLimits

0x34fe,	// (0x00034459) aid_size_touch_scroll_bar_cale

0xf45e,	// (0x000403b9) popup_discreet_window_ParamLimits

0xf45e,	// (0x000403b9) popup_discreet_window

0xb3e9,	// (0x0003c344) popup_sk_window

0x53cf,	// (0x0003632a) bg_popup_sub_pane_cp28_ParamLimits

0x53cf,	// (0x0003632a) bg_popup_sub_pane_cp28

0x9ea5,	// (0x0003ae00) popup_discreet_window_g1_ParamLimits

0x9ea5,	// (0x0003ae00) popup_discreet_window_g1

0x9ec5,	// (0x0003ae20) popup_discreet_window_t1_ParamLimits

0x9ec5,	// (0x0003ae20) popup_discreet_window_t1

0x9ee3,	// (0x0003ae3e) popup_discreet_window_t2_ParamLimits

0x9ee3,	// (0x0003ae3e) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x00040de6) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x00040de6) popup_discreet_window_t

0x27cd,	// (0x00033728) popup_sk_window_g1

0x27d7,	// (0x00033732) popup_sk_window_g2

0x0001,

0xfe92,	// (0x00040ded) popup_sk_window_g

0x27df,	// (0x0003373a) popup_sk_window_t1

0x27ed,	// (0x00033748) popup_sk_window_t1_copy1

0x9a71,	// (0x0003a9cc) cell_ai5_widget_pane_g2_ParamLimits

0x9c0c,	// (0x0003ab67) cell_ai5_widget_pane_t9_ParamLimits

0x9c0c,	// (0x0003ab67) cell_ai5_widget_pane_t9

0xdffb,	// (0x0003ef56) main_fep_fshwr2_pane

0xce70,	// (0x0003ddcb) aid_fshwr2_btn_pane

0xce80,	// (0x0003dddb) aid_fshwr2_syb_pane

0xce94,	// (0x0003ddef) aid_fshwr2_txt_pane

0xcea4,	// (0x0003ddff) fshwr2_func_candi_pane

0xcec4,	// (0x0003de1f) fshwr2_hwr_syb_pane

0xcee6,	// (0x0003de41) fshwr2_icf_pane

0xf02c,	// (0x0003ff87) fshwr2_icf_bg_pane

0xcf16,	// (0x0003de71) fshwr2_icf_pane_t1_ParamLimits

0xcf16,	// (0x0003de71) fshwr2_icf_pane_t1

0x3ec5,	// (0x00034e20) fshwr2_func_candi_pane_g1

0xf211,	// (0x0004016c) fshwr2_func_candi_row_pane_ParamLimits

0xf211,	// (0x0004016c) fshwr2_func_candi_row_pane

0xcf2f,	// (0x0003de8a) cell_fshwr2_syb_pane_ParamLimits

0xcf2f,	// (0x0003de8a) cell_fshwr2_syb_pane

0x28d6,	// (0x00033831) fshwr2_hwr_syb_pane_g1_ParamLimits

0x28d6,	// (0x00033831) fshwr2_hwr_syb_pane_g1

0xf02c,	// (0x0003ff87) bg_popup_call_pane_cp01

0xcf55,	// (0x0003deb0) fshwr2_func_candi_cell_pane_ParamLimits

0xcf55,	// (0x0003deb0) fshwr2_func_candi_cell_pane

0x51b0,	// (0x0003610b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x51b0,	// (0x0003610b) fshwr2_func_candi_cell_bg_pane

0xcfa0,	// (0x0003defb) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcfa0,	// (0x0003defb) fshwr2_func_candi_cell_pane_g1

0xcfd7,	// (0x0003df32) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcfd7,	// (0x0003df32) fshwr2_func_candi_cell_pane_t1

0xf02c,	// (0x0003ff87) bg_button_pane_cp08

0x4816,	// (0x00035771) cell_fshwr2_syb_bg_pane

0xcff2,	// (0x0003df4d) cell_fshwr2_syb_bg_pane_g1

0xd005,	// (0x0003df60) cell_fshwr2_syb_bg_pane_t1

0x35c6,	// (0x00034521) main_tmo_pane

0xd90e,	// (0x0003e869) uni_indicator_pane_g1_ParamLimits

0xd924,	// (0x0003e87f) uni_indicator_pane_g2_ParamLimits

0xd93a,	// (0x0003e895) uni_indicator_pane_g3_ParamLimits

0x5f1d,	// (0x00036e78) uni_indicator_pane_g4_ParamLimits

0x5f1d,	// (0x00036e78) uni_indicator_pane_g4

0x5f31,	// (0x00036e8c) uni_indicator_pane_g5_ParamLimits

0x5f31,	// (0x00036e8c) uni_indicator_pane_g5

0x5f31,	// (0x00036e8c) uni_indicator_pane_g6_ParamLimits

0x5f31,	// (0x00036e8c) uni_indicator_pane_g6

0xf8f7,	// (0x00040852) uni_indicator_pane_g_ParamLimits

0xe35e,	// (0x0003f2b9) popup_tmo_note_window_ParamLimits

0xe35e,	// (0x0003f2b9) popup_tmo_note_window

0x202a,	// (0x00032f85) fshwr2_bg_pane

0xcfc8,	// (0x0003df23) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcfc8,	// (0x0003df23) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x00040df2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x00040df2) fshwr2_func_candi_cell_pane_g

0x1c50,	// (0x00032bab) bg_popup_window_pane_cp01

0x2997,	// (0x000338f2) bg_popup_window_pane_g1_cp01

0x9f5c,	// (0x0003aeb7) bg_popup_window_pane_cp22_ParamLimits

0x9f5c,	// (0x0003aeb7) bg_popup_window_pane_cp22

0x9f6a,	// (0x0003aec5) listscroll_tmo_link_pane_ParamLimits

0x9f6a,	// (0x0003aec5) listscroll_tmo_link_pane

0x9faa,	// (0x0003af05) popup_tmo_note_window_g1_ParamLimits

0x9faa,	// (0x0003af05) popup_tmo_note_window_g1

0x9fb7,	// (0x0003af12) tmo_note_info_pane_ParamLimits

0x9fb7,	// (0x0003af12) tmo_note_info_pane

0xf234,	// (0x0004018f) list_tmo_note_info_pane_g1_ParamLimits

0xf234,	// (0x0004018f) list_tmo_note_info_pane_g1

0x9fe8,	// (0x0003af43) list_tmo_note_info_pane_g2_ParamLimits

0x9fe8,	// (0x0003af43) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x00040df7) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x00040df7) list_tmo_note_info_pane_g

0xa004,	// (0x0003af5f) list_tmo_note_info_text_pane_ParamLimits

0xa004,	// (0x0003af5f) list_tmo_note_info_text_pane

0xa085,	// (0x0003afe0) list_tmo_link_pane

0xa092,	// (0x0003afed) scroll_pane_cp20

0xa09f,	// (0x0003affa) list_single_tmo_link_pane_ParamLimits

0xa09f,	// (0x0003affa) list_single_tmo_link_pane

0xa0af,	// (0x0003b00a) list_single_tmo_link_pane_t1

0xa0bd,	// (0x0003b018) list_tmo_note_info_text_pane_t1_ParamLimits

0xa0bd,	// (0x0003b018) list_tmo_note_info_text_pane_t1

0xd072,	// (0x0003dfcd) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd072,	// (0x0003dfcd) aid_size_touch_scroll_bar_cp01

0xbce9,	// (0x0003cc44) aid_size_touch_slider_marker

0xb3d9,	// (0x0003c334) popup_settings_window_ParamLimits

0xb3d9,	// (0x0003c334) popup_settings_window

0x09f5,	// (0x00031950) popup_candi_list_indi_window

0x4892,	// (0x000357ed) aid_touch_navi_pane_ParamLimits

0x1f85,	// (0x00032ee0) rs_clock_indi_pane

0x1f8e,	// (0x00032ee9) sctrl_sk_bottom_pane_ParamLimits

0x1f9f,	// (0x00032efa) sctrl_sk_top_pane_ParamLimits

0x209a,	// (0x00032ff5) popup_fep_tooltip_window

0x99e7,	// (0x0003a942) aid_size_cell_widget_grid_ParamLimits

0x9a5c,	// (0x0003a9b7) cell_ai5_widget_pane_g1_ParamLimits

0x9a5c,	// (0x0003a9b7) cell_ai5_widget_pane_g1

0x9abf,	// (0x0003aa1a) cell_ai5_widget_pane_g6_ParamLimits

0x9acb,	// (0x0003aa26) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x00040d6b) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x00040d6b) cell_ai5_widget_pane_g

0x9c3b,	// (0x0003ab96) cell_ai5_widget_pane_t10_ParamLimits

0x9c3b,	// (0x0003ab96) cell_ai5_widget_pane_t10

0x9c7e,	// (0x0003abd9) grid_ai5_widget_pane_ParamLimits

0x9d16,	// (0x0003ac71) cell_contacts_ai5_widget_pane_ParamLimits

0x9d16,	// (0x0003ac71) cell_contacts_ai5_widget_pane

0x9ef8,	// (0x0003ae53) popup_discreet_window_t3_ParamLimits

0x9ef8,	// (0x0003ae53) popup_discreet_window_t3

0xcf02,	// (0x0003de5d) popup_fshwr2_char_preview_window_ParamLimits

0xcf02,	// (0x0003de5d) popup_fshwr2_char_preview_window

0xf24b,	// (0x000401a6) tmo_note_info_pane_t1

0xf260,	// (0x000401bb) tmo_note_info_pane_t2

0xf277,	// (0x000401d2) tmo_note_info_pane_t3

0xa061,	// (0x0003afbc) tmo_note_info_pane_t4

0xa073,	// (0x0003afce) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x00040dfc) tmo_note_info_pane_t

0xa085,	// (0x0003afe0) list_tmo_link_pane_ParamLimits

0xa092,	// (0x0003afed) scroll_pane_cp20_ParamLimits

0xf02c,	// (0x0003ff87) bg_popup_fep_char_preview_window_cp01

0xf28c,	// (0x000401e7) popup_fshwr2_char_preview_window_t1

0xa0e4,	// (0x0003b03f) popup_candi_list_indi_window_g1

0xa0ed,	// (0x0003b048) bg_cell_contacts_ai5_widget_pane

0xa0f9,	// (0x0003b054) cell_contacts_ai5_widget_pane_g1

0x7a73,	// (0x000389ce) cell_contacts_ai5_widget_pane_g2

0xa10e,	// (0x0003b069) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x00040e07) cell_contacts_ai5_widget_pane_g

0xa11a,	// (0x0003b075) cell_contacts_ai5_widget_pane_t1

0x35c6,	// (0x00034521) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa191,	// (0x0003b0ec) settings_container_pane

0x44f2,	// (0x0003544d) listscroll_set_pane_copy1

0x6a7d,	// (0x000379d8) scroll_pane_cp121_copy1

0x516c,	// (0x000360c7) set_content_pane_copy1

0xa19d,	// (0x0003b0f8) aid_height_set_list_copy1_ParamLimits

0xa19d,	// (0x0003b0f8) aid_height_set_list_copy1

0x6129,	// (0x00037084) aid_size_parent_copy1_ParamLimits

0x6129,	// (0x00037084) aid_size_parent_copy1

0xa1a9,	// (0x0003b104) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa1a9,	// (0x0003b104) button_value_adjust_pane_cp6_copy1

0x4816,	// (0x00035771) list_highlight_pane_cp2_copy1_ParamLimits

0x4816,	// (0x00035771) list_highlight_pane_cp2_copy1

0xa1bd,	// (0x0003b118) list_set_pane_copy1_ParamLimits

0xa1bd,	// (0x0003b118) list_set_pane_copy1

0xa12c,	// (0x0003b087) main_pane_set_t1_copy1_ParamLimits

0xa12c,	// (0x0003b087) main_pane_set_t1_copy1

0xa166,	// (0x0003b0c1) main_pane_set_t2_copy1_ParamLimits

0xa166,	// (0x0003b0c1) main_pane_set_t2_copy1

0xa26a,	// (0x0003b1c5) main_pane_set_t3_copy1

0xa278,	// (0x0003b1d3) main_pane_set_t4_copy1

0xa185,	// (0x0003b0e0) set_content_pane_g1_copy1_ParamLimits

0xa185,	// (0x0003b0e0) set_content_pane_g1_copy1

0xa286,	// (0x0003b1e1) setting_code_pane_copy1

0xa28e,	// (0x0003b1e9) setting_slider_graphic_pane_copy1

0xa28e,	// (0x0003b1e9) setting_slider_pane_copy1

0xa296,	// (0x0003b1f1) setting_text_pane_copy1

0xa296,	// (0x0003b1f1) setting_volume_pane_copy1

0xa286,	// (0x0003b1e1) settings_code_pane_cp2_copy1

0xa29e,	// (0x0003b1f9) settings_code_pane_cp_copy1_ParamLimits

0xa29e,	// (0x0003b1f9) settings_code_pane_cp_copy1

0x29a0,	// (0x000338fb) volume_set_pane_copy1

0xa2b2,	// (0x0003b20d) volume_set_pane_g10_copy1

0xa2ba,	// (0x0003b215) volume_set_pane_g1_copy1

0xa2c2,	// (0x0003b21d) volume_set_pane_g2_copy1

0xa2ca,	// (0x0003b225) volume_set_pane_g3_copy1

0xa2d2,	// (0x0003b22d) volume_set_pane_g4_copy1

0xa2da,	// (0x0003b235) volume_set_pane_g5_copy1

0xa2e2,	// (0x0003b23d) volume_set_pane_g6_copy1

0xa2ea,	// (0x0003b245) volume_set_pane_g7_copy1

0xa2f2,	// (0x0003b24d) volume_set_pane_g8_copy1

0xa2fa,	// (0x0003b255) volume_set_pane_g9_copy1

0x2d39,	// (0x00033c94) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d39,	// (0x00033c94) bg_set_opt_pane_cp_copy1

0x29a8,	// (0x00033903) setting_slider_pane_t1_copy1_ParamLimits

0x29a8,	// (0x00033903) setting_slider_pane_t1_copy1

0x29c7,	// (0x00033922) setting_slider_pane_t2_copy1_ParamLimits

0x29c7,	// (0x00033922) setting_slider_pane_t2_copy1

0x29e1,	// (0x0003393c) setting_slider_pane_t3_copy1_ParamLimits

0x29e1,	// (0x0003393c) setting_slider_pane_t3_copy1

0x29f9,	// (0x00033954) slider_set_pane_copy1_ParamLimits

0x29f9,	// (0x00033954) slider_set_pane_copy1

0x361e,	// (0x00034579) set_opt_bg_pane_g1_copy2

0x3626,	// (0x00034581) set_opt_bg_pane_g2_copy2

0xa302,	// (0x0003b25d) set_opt_bg_pane_g3_copy2

0x3636,	// (0x00034591) set_opt_bg_pane_g4_copy2

0x363e,	// (0x00034599) set_opt_bg_pane_g5_copy2

0x3646,	// (0x000345a1) set_opt_bg_pane_g6_copy2

0xa30c,	// (0x0003b267) set_opt_bg_pane_g7_copy2

0xa314,	// (0x0003b26f) set_opt_bg_pane_g8_copy2

0xa31e,	// (0x0003b279) set_opt_bg_pane_g9_copy2

0x2a0f,	// (0x0003396a) aid_size_touch_slider_mark_copy1_ParamLimits

0x2a0f,	// (0x0003396a) aid_size_touch_slider_mark_copy1

0xa328,	// (0x0003b283) slider_set_pane_g1_copy1

0x2a23,	// (0x0003397e) slider_set_pane_g2_copy1

0x13ff,	// (0x0003235a) slider_set_pane_g3_copy1_ParamLimits

0x13ff,	// (0x0003235a) slider_set_pane_g3_copy1

0x1413,	// (0x0003236e) slider_set_pane_g4_copy1_ParamLimits

0x1413,	// (0x0003236e) slider_set_pane_g4_copy1

0x142b,	// (0x00032386) slider_set_pane_g5_copy1_ParamLimits

0x142b,	// (0x00032386) slider_set_pane_g5_copy1

0x13ff,	// (0x0003235a) slider_set_pane_g6_copy1_ParamLimits

0x13ff,	// (0x0003235a) slider_set_pane_g6_copy1

0x2a2b,	// (0x00033986) slider_set_pane_g7_copy1_ParamLimits

0x2a2b,	// (0x00033986) slider_set_pane_g7_copy1

0x2c59,	// (0x00033bb4) bg_set_opt_pane_cp2_copy1

0xa331,	// (0x0003b28c) setting_slider_graphic_pane_g1_copy1

0xa33a,	// (0x0003b295) setting_slider_graphic_pane_t1_copy1

0xa34a,	// (0x0003b2a5) setting_slider_graphic_pane_t2_copy1

0xa35a,	// (0x0003b2b5) slider_set_pane_cp_copy1

0xa36a,	// (0x0003b2c5) input_focus_pane_cp1_copy1

0xa373,	// (0x0003b2ce) list_set_text_pane_copy1

0xa37b,	// (0x0003b2d6) setting_text_pane_g1_copy1

0xf0f1,	// (0x0004004c) set_text_pane_t1_copy1

0xa36a,	// (0x0003b2c5) input_focus_pane_cp2_copy1

0xa37b,	// (0x0003b2d6) setting_code_pane_g1_copy1

0xa384,	// (0x0003b2df) setting_code_pane_t1_copy1

0x6899,	// (0x000377f4) list_set_graphic_pane_copy1

0x2c59,	// (0x00033bb4) bg_set_opt_pane_cp4_copy1

0x41ef,	// (0x0003514a) list_set_graphic_pane_g1_copy1_ParamLimits

0x41ef,	// (0x0003514a) list_set_graphic_pane_g1_copy1

0xa392,	// (0x0003b2ed) list_set_graphic_pane_g2_copy1

0x4207,	// (0x00035162) list_set_graphic_pane_t1_copy1_ParamLimits

0x4207,	// (0x00035162) list_set_graphic_pane_t1_copy1

0x7393,	// (0x000382ee) rs_clock_indi_pane_g1

0xa39a,	// (0x0003b2f5) rs_clock_indi_pane_t1

0xa3a8,	// (0x0003b303) rs_indi_pane

0xa3b0,	// (0x0003b30b) rs_indi_pane_g1

0xa3b9,	// (0x0003b314) rs_indi_pane_g2

0xa3c2,	// (0x0003b31d) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x00040e0e) rs_indi_pane_g

0x44f2,	// (0x0003544d) bg_popup_preview_window_pane_cp03

0xa3cb,	// (0x0003b326) popup_fep_tooltip_window_t1

0x8033,	// (0x00038f8e) popup_note2_window_g2_ParamLimits

0x8033,	// (0x00038f8e) popup_note2_window_g2

0x0001,

0xfc40,	// (0x00040b9b) popup_note2_window_g_ParamLimits

0xfc40,	// (0x00040b9b) popup_note2_window_g

0x852e,	// (0x00039489) bg_popup_sub_pane_cp11_ParamLimits

0x853b,	// (0x00039496) cell_ai3_links_pane_g1_ParamLimits

0x8552,	// (0x000394ad) cell_ai3_links_pane_t1

0xf0f1,	// (0x0004004c) set_text_pane_t1_copy1_ParamLimits

0x43fa,	// (0x00035355) cell_graphic_popup_pane_cp2_ParamLimits

0x43fa,	// (0x00035355) cell_graphic_popup_pane_cp2

0xa3d9,	// (0x0003b334) cell_graphic_popup_pane_g1_cp2

0x3311,	// (0x0003426c) cell_graphic_popup_pane_g2_cp2

0xa3e1,	// (0x0003b33c) cell_graphic_popup_pane_g3_cp2

0xa3e9,	// (0x0003b344) cell_graphic_popup_pane_t2_cp2

0x3322,	// (0x0003427d) grid_highlight_pane_cp3_cp2

0x3be0,	// (0x00034b3b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x35c6,	// (0x00034521) main_tmo_pane_ParamLimits

0xe352,	// (0x0003f2ad) popup_tmo_big_image_note_window

0x9a4b,	// (0x0003a9a6) cell_ai5_widget_list_pane

0x9a53,	// (0x0003a9ae) cell_ai5_widget_lrg_icon_pane

0xf24b,	// (0x000401a6) tmo_note_info_pane_t1_ParamLimits

0xf260,	// (0x000401bb) tmo_note_info_pane_t2_ParamLimits

0xf277,	// (0x000401d2) tmo_note_info_pane_t3_ParamLimits

0xa061,	// (0x0003afbc) tmo_note_info_pane_t4_ParamLimits

0xa073,	// (0x0003afce) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x00040dfc) tmo_note_info_pane_t_ParamLimits

0xa191,	// (0x0003b0ec) settings_container_pane_ParamLimits

0xa362,	// (0x0003b2bd) indicator_popup_pane_cp5

0xa362,	// (0x0003b2bd) indicator_popup_pane_cp6

0x6899,	// (0x000377f4) list_set_graphic_pane_copy1_ParamLimits

0xdffb,	// (0x0003ef56) bg_popup_window_pane_cp23

0xa3f7,	// (0x0003b352) popup_tmo_big_image_note_window_g1

0xa401,	// (0x0003b35c) popup_tmo_big_image_note_window_t1

0xa411,	// (0x0003b36c) popup_tmo_big_image_note_window_t2

0xa421,	// (0x0003b37c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x00040e15) popup_tmo_big_image_note_window_t

0x7393,	// (0x000382ee) cell_ai5_widget_lrg_icon_pane_g1

0xa431,	// (0x0003b38c) cell_ai5_widget_lrg_icon_pane_t1

0xa43f,	// (0x0003b39a) cell_ai5_widget_list_row_pane_ParamLimits

0xa43f,	// (0x0003b39a) cell_ai5_widget_list_row_pane

0xa456,	// (0x0003b3b1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa456,	// (0x0003b3b1) cell_ai5_widget_list_row_pane_g1

0xa463,	// (0x0003b3be) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa463,	// (0x0003b3be) cell_ai5_widget_list_row_pane_t1

0xa494,	// (0x0003b3ef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa494,	// (0x0003b3ef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x00040e1c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x00040e1c) cell_ai5_widget_list_row_pane_t

0xf02c,	// (0x0003ff87) main_fep_vtchi_ss_pane

0xa4e4,	// (0x0003b43f) popup_fep_char_pre_window

0xa4ec,	// (0x0003b447) popup_fep_ituss_window

0xf2c4,	// (0x0004021f) popup_fep_vkbss_window

0x4816,	// (0x00035771) grid_vkbss_keypad_pane_ParamLimits

0x4816,	// (0x00035771) grid_vkbss_keypad_pane

0xa558,	// (0x0003b4b3) ituss_keypad_pane

0x2a4b,	// (0x000339a6) aid_vkbss_key_offset_ParamLimits

0x2a4b,	// (0x000339a6) aid_vkbss_key_offset

0xd01b,	// (0x0003df76) cell_vkbss_key_pane_ParamLimits

0xd01b,	// (0x0003df76) cell_vkbss_key_pane

0xa564,	// (0x0003b4bf) bg_cell_vkbss_key_g1_ParamLimits

0xa564,	// (0x0003b4bf) bg_cell_vkbss_key_g1

0xf2d1,	// (0x0004022c) cell_vkbss_key_3p_pane_ParamLimits

0xf2d1,	// (0x0004022c) cell_vkbss_key_3p_pane

0xf307,	// (0x00040262) cell_vkbss_key_g1_ParamLimits

0xf307,	// (0x00040262) cell_vkbss_key_g1

0xf33d,	// (0x00040298) cell_vkbss_key_t1_ParamLimits

0xf33d,	// (0x00040298) cell_vkbss_key_t1

0x2ab5,	// (0x00033a10) cell_ituss_key_pane_ParamLimits

0x2ab5,	// (0x00033a10) cell_ituss_key_pane

0xa638,	// (0x0003b593) bg_cell_ituss_key_g1_ParamLimits

0xa638,	// (0x0003b593) bg_cell_ituss_key_g1

0xa644,	// (0x0003b59f) cell_ituss_key_pane_g1_ParamLimits

0xa644,	// (0x0003b59f) cell_ituss_key_pane_g1

0x2ac6,	// (0x00033a21) cell_ituss_key_pane_g2_ParamLimits

0x2ac6,	// (0x00033a21) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x00040e23) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x00040e23) cell_ituss_key_pane_g

0x2b4a,	// (0x00033aa5) cell_ituss_key_t1_ParamLimits

0x2b4a,	// (0x00033aa5) cell_ituss_key_t1

0x2b84,	// (0x00033adf) cell_ituss_key_t2_ParamLimits

0x2b84,	// (0x00033adf) cell_ituss_key_t2

0x2bb6,	// (0x00033b11) cell_ituss_key_t3_ParamLimits

0x2bb6,	// (0x00033b11) cell_ituss_key_t3

0x2be7,	// (0x00033b42) cell_ituss_key_t4_ParamLimits

0x2be7,	// (0x00033b42) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x00040e30) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x00040e30) cell_ituss_key_t

0xf399,	// (0x000402f4) cell_vkbss_key_3p_pane_g1

0xf3a1,	// (0x000402fc) cell_vkbss_key_3p_pane_g2

0xf3a9,	// (0x00040304) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x00040e3b) cell_vkbss_key_3p_pane_g

0x44f2,	// (0x0003544d) bg_popup_fep_char_preview_window_cp02

0xa682,	// (0x0003b5dd) popup_fep_char_pre_window_t1

0xef2e,	// (0x0003fe89) main_ai5_sk_pane

0xa0ed,	// (0x0003b048) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa0f9,	// (0x0003b054) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7a73,	// (0x000389ce) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa10e,	// (0x0003b069) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x00040e07) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa11a,	// (0x0003b075) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x35c6,	// (0x00034521) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf3b1,	// (0x0004030c) main_ai5_sk_pane_g1

0x5208,	// (0x00036163) popup_query_code_window_g1

0xf2b5,	// (0x00040210) popup_fep_vkb_icf_pane

0xa52f,	// (0x0003b48a) popup_fep_vtchi_icf_pane

0xa699,	// (0x0003b5f4) bg_icf_pane

0xa699,	// (0x0003b5f4) list_vkb_icf_pane

0xa6a5,	// (0x0003b600) bg_icf_pane_cp01

0xa6b8,	// (0x0003b613) vtchi_icf_list_pane

0xf406,	// (0x00040361) list_vkb_icf_pane_t1_ParamLimits

0xf406,	// (0x00040361) list_vkb_icf_pane_t1

0xa736,	// (0x0003b691) vtchi_icf_list_pane_t1_ParamLimits

0xa736,	// (0x0003b691) vtchi_icf_list_pane_t1

0xa4ec,	// (0x0003b447) popup_fep_ituss_window_ParamLimits

0xa52f,	// (0x0003b48a) popup_fep_vtchi_icf_pane_ParamLimits

0xa558,	// (0x0003b4b3) ituss_keypad_pane_ParamLimits

0x2a41,	// (0x0003399c) ituss_sks_pane

0xa699,	// (0x0003b5f4) bg_icf_pane_ParamLimits

0xf29a,	// (0x000401f5) icf_edit_indi_pane_ParamLimits

0xf29a,	// (0x000401f5) icf_edit_indi_pane

0xa699,	// (0x0003b5f4) list_vkb_icf_pane_ParamLimits

0xa6a5,	// (0x0003b600) bg_icf_pane_cp01_ParamLimits

0xa4d7,	// (0x0003b432) icf_edit_indi_pane_cp01_ParamLimits

0xa4d7,	// (0x0003b432) icf_edit_indi_pane_cp01

0xa6b8,	// (0x0003b613) vtchi_query_pane

0x9850,	// (0x0003a7ab) icf_edit_indi_pane_g1_ParamLimits

0x9850,	// (0x0003a7ab) icf_edit_indi_pane_g1

0xf41d,	// (0x00040378) icf_edit_indi_pane_g2_ParamLimits

0xf41d,	// (0x00040378) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00040e66) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00040e66) icf_edit_indi_pane_g

0xf431,	// (0x0004038c) icf_edit_indi_pane_t1

0xa754,	// (0x0003b6af) bg_input_focus_pane_cp042

0x34f5,	// (0x00034450) vtchi_button_pane

0xa75d,	// (0x0003b6b8) vtchi_query_pane_t1

0xa76b,	// (0x0003b6c6) vtchi_query_pane_t2

0xa779,	// (0x0003b6d4) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00040e55) vtchi_query_pane_t

0xf02c,	// (0x0003ff87) bg_button_pane_cp13

0xa787,	// (0x0003b6e2) vtchi_button_pane_g1

0x2c2a,	// (0x00033b85) ituss_sks_pane_g1

0x2c35,	// (0x00033b90) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00040e5c) ituss_sks_pane_g

0xa78f,	// (0x0003b6ea) ituss_sks_pane_t1

0xa79d,	// (0x0003b6f8) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00040e61) ituss_sks_pane_t

0x6e15,	// (0x00037d70) indicator_nsta_pane_cp_g1

0x6e1e,	// (0x00037d79) indicator_nsta_pane_cp_g2

0x6e26,	// (0x00037d81) indicator_nsta_pane_cp_g3

0x6e2e,	// (0x00037d89) indicator_nsta_pane_cp_g4

0x6e1e,	// (0x00037d79) indicator_nsta_pane_cp_g5

0x6e26,	// (0x00037d81) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x000409d9) indicator_nsta_pane_cp_g

0xed45,	// (0x0003fca0) cell_graphic2_pane_t2_ParamLimits

0xed45,	// (0x0003fca0) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x00040cf2) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x00040cf2) cell_graphic2_pane_t

0xed7a,	// (0x0003fcd5) cell_graphic2_control_pane_t1

0xd22f,	// (0x0003e18a) signal_pane_g3_ParamLimits

0xd22f,	// (0x0003e18a) signal_pane_g3

0xd243,	// (0x0003e19e) signal_pane_g4_ParamLimits

0xd243,	// (0x0003e19e) signal_pane_g4

0xa4a6,	// (0x0003b401) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa4a6,	// (0x0003b401) cell_ai5_widget_list_row_pane_t3

0xa658,	// (0x0003b5b3) cell_ituss_key_pane_t1_ParamLimits

0xa658,	// (0x0003b5b3) cell_ituss_key_pane_t1

0x4e45,	// (0x00035da0) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e45,	// (0x00035da0) form_field_data_wide_pane_vc_t2

0x4e59,	// (0x00035db4) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e59,	// (0x00035db4) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0004073a) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0004073a) form_field_data_wide_pane_vc_t

0x6abf,	// (0x00037a1a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6abf,	// (0x00037a1a) form_field_slider_wide_pane_vc_t3

0x6b9d,	// (0x00037af8) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b9d,	// (0x00037af8) form_field_popup_wide_pane_vc_t2

0x6bb4,	// (0x00037b0f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6bb4,	// (0x00037b0f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x000409c8) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x000409c8) form_field_popup_wide_pane_vc_t

0xce70,	// (0x0003ddcb) aid_fshwr2_btn_pane_ParamLimits

0xce80,	// (0x0003dddb) aid_fshwr2_syb_pane_ParamLimits

0xce94,	// (0x0003ddef) aid_fshwr2_txt_pane_ParamLimits

0x202a,	// (0x00032f85) fshwr2_bg_pane_ParamLimits

0xcea4,	// (0x0003ddff) fshwr2_func_candi_pane_ParamLimits

0xcec4,	// (0x0003de1f) fshwr2_hwr_syb_pane_ParamLimits

0xcee6,	// (0x0003de41) fshwr2_icf_pane_ParamLimits

0x1906,	// (0x00032861) list_double_graphic_pane_vc_g4_ParamLimits

0x1906,	// (0x00032861) list_double_graphic_pane_vc_g4

0x2ae6,	// (0x00033a41) cell_ituss_key_pane_g3_ParamLimits

0x2ae6,	// (0x00033a41) cell_ituss_key_pane_g3

0x2c18,	// (0x00033b73) cell_ituss_key_t5_ParamLimits

0x2c18,	// (0x00033b73) cell_ituss_key_t5

0xf2c4,	// (0x0004021f) popup_fep_vkbss_window_ParamLimits

0x99de,	// (0x0003a939) aid_cell_ai5_quarter

0xf431,	// (0x0004038c) icf_edit_indi_pane_t1_ParamLimits

0x306a,	// (0x00033fc5) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x306a,	// (0x00033fc5) aid_tch_indicator_popup_pane_cp2

0x307d,	// (0x00033fd8) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x307d,	// (0x00033fd8) aid_tch_query_popup_data_pane_cp2

0x51b0,	// (0x0003610b) aid_tch_query_popup_pane_ParamLimits

0x51b0,	// (0x0003610b) aid_tch_query_popup_pane

0x51b0,	// (0x0003610b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x51b0,	// (0x0003610b) aid_tch_query_popup_data_pane_cp1

0x4816,	// (0x00035771) cell_fshwr2_syb_bg_pane_ParamLimits

0xcff2,	// (0x0003df4d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd005,	// (0x0003df60) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf2b5,	// (0x00040210) popup_fep_vkb_icf_pane_ParamLimits

0xcdfc,	// (0x0003dd57) bg_popup_fep_char_preview_window_g10

0x9b13,	// (0x0003aa6e) cell_ai5_widget_pane_g11_ParamLimits

0x9b13,	// (0x0003aa6e) cell_ai5_widget_pane_g11

0x9b1f,	// (0x0003aa7a) cell_ai5_widget_pane_g12_ParamLimits

0x9b1f,	// (0x0003aa7a) cell_ai5_widget_pane_g12

0x9b2b,	// (0x0003aa86) cell_ai5_widget_pane_g13_ParamLimits

0x9b2b,	// (0x0003aa86) cell_ai5_widget_pane_g13

0x9c5a,	// (0x0003abb5) cell_ai5_widget_pane_t11_ParamLimits

0x9c5a,	// (0x0003abb5) cell_ai5_widget_pane_t11

0x9c6c,	// (0x0003abc7) cell_ai5_widget_pane_t12_ParamLimits

0x9c6c,	// (0x0003abc7) cell_ai5_widget_pane_t12

0x2af2,	// (0x00033a4d) cell_ituss_key_pane_g4_ParamLimits

0x2af2,	// (0x00033a4d) cell_ituss_key_pane_g4

0x2b0e,	// (0x00033a69) cell_ituss_key_pane_g5_ParamLimits

0x2b0e,	// (0x00033a69) cell_ituss_key_pane_g5

0x2b2a,	// (0x00033a85) cell_ituss_key_pane_g6_ParamLimits

0x2b2a,	// (0x00033a85) cell_ituss_key_pane_g6

0x4d40,	// (0x00035c9b) bg_icf_pane_g1

0xf3ba,	// (0x00040315) bg_icf_pane_g2

0xf3c4,	// (0x0004031f) bg_icf_pane_g3

0xf3cc,	// (0x00040327) bg_icf_pane_g4

0xf3d6,	// (0x00040331) bg_icf_pane_g5

0xf3e0,	// (0x0004033b) bg_icf_pane_g6

0xf3ea,	// (0x00040345) bg_icf_pane_g7

0xf3f2,	// (0x0004034d) bg_icf_pane_g8

0xf3fc,	// (0x00040357) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x00040e42) bg_icf_pane_g

0xa545,	// (0x0003b4a0) popup_hyb_candi_window_ParamLimits

0xa545,	// (0x0003b4a0) popup_hyb_candi_window

0x4db4,	// (0x00035d0f) bg_popup_sub_pane_cp01_ParamLimits

0x4db4,	// (0x00035d0f) bg_popup_sub_pane_cp01

0xa7d8,	// (0x0003b733) entry_hyb_candi_pane_ParamLimits

0xa7d8,	// (0x0003b733) entry_hyb_candi_pane

0xa7e7,	// (0x0003b742) grid_hyb_candi_pane_ParamLimits

0xa7e7,	// (0x0003b742) grid_hyb_candi_pane

0xa7fc,	// (0x0003b757) grid_hyb_phrase_pane_ParamLimits

0xa7fc,	// (0x0003b757) grid_hyb_phrase_pane

0xa80b,	// (0x0003b766) cell_hyb_candi_pane_ParamLimits

0xa80b,	// (0x0003b766) cell_hyb_candi_pane

0xa82e,	// (0x0003b789) cell_hyb_candi_scroll_pane

0x3ec5,	// (0x00034e20) cell_hyb_candi_pane_g1

0xa837,	// (0x0003b792) cell_hyb_candi_pane_t1

0xa845,	// (0x0003b7a0) cell_hyb_phrase_pane

0x3ec5,	// (0x00034e20) cell_hyb_phrase_pane_g1

0xa84e,	// (0x0003b7a9) cell_hyb_phrase_pane_t1

0xa85c,	// (0x0003b7b7) entry_hyb_candi_pane_t1

0x44f2,	// (0x0003544d) input_focus_pane_cp06

0xa86a,	// (0x0003b7c5) cell_hyb_candi_scroll_pane_g1

0xa872,	// (0x0003b7cd) cell_hyb_candi_scroll_pane_g1_aid

0xa87a,	// (0x0003b7d5) cell_hyb_candi_scroll_pane_g2

0xa882,	// (0x0003b7dd) cell_hyb_candi_scroll_pane_g2_aid

0xa88a,	// (0x0003b7e5) cell_hyb_candi_scroll_pane_g3

0xa892,	// (0x0003b7ed) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

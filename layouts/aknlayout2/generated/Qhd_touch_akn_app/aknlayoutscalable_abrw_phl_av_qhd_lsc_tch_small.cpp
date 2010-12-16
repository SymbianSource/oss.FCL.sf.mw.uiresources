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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003180b };

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
0xb22b,	// (0x0003ca36) Screen

0xb237,	// (0x0003ca42) application_window_ParamLimits

0xb237,	// (0x0003ca42) application_window

0xe1ec,	// (0x0003f9f7) screen_g1

0xb26f,	// (0x0003ca7a) area_bottom_pane_ParamLimits

0xb26f,	// (0x0003ca7a) area_bottom_pane

0xf1fc,	// (0x00040a07) area_top_pane_ParamLimits

0xf1fc,	// (0x00040a07) area_top_pane

0xf29a,	// (0x00040aa5) main_pane_ParamLimits

0xf29a,	// (0x00040aa5) main_pane

0xe1f6,	// (0x0003fa01) misc_graphics

0xd372,	// (0x0003eb7d) battery_pane_ParamLimits

0xd372,	// (0x0003eb7d) battery_pane

0x5540,	// (0x00036d4b) bg_status_flat_pane_g8

0x5548,	// (0x00036d53) bg_status_flat_pane_g9

0x4926,	// (0x00036131) context_pane_ParamLimits

0x4926,	// (0x00036131) context_pane

0xd4dd,	// (0x0003ece8) navi_pane_ParamLimits

0xd4dd,	// (0x0003ece8) navi_pane

0xd55b,	// (0x0003ed66) signal_pane_ParamLimits

0xd55b,	// (0x0003ed66) signal_pane

0x0008,

0xf84d,	// (0x00041058) bg_status_flat_pane_g

0xd5eb,	// (0x0003edf6) status_pane_g1_ParamLimits

0xd5eb,	// (0x0003edf6) status_pane_g1

0xd601,	// (0x0003ee0c) status_pane_g2_ParamLimits

0xd601,	// (0x0003ee0c) status_pane_g2

0x4b4d,	// (0x00036358) status_pane_g3_ParamLimits

0x4b4d,	// (0x00036358) status_pane_g3

0x0004,

0xf779,	// (0x00040f84) status_pane_g_ParamLimits

0xf779,	// (0x00040f84) status_pane_g

0xd60d,	// (0x0003ee18) title_pane_ParamLimits

0xd60d,	// (0x0003ee18) title_pane

0xd66e,	// (0x0003ee79) uni_indicator_pane_ParamLimits

0xd66e,	// (0x0003ee79) uni_indicator_pane

0x478e,	// (0x00035f99) bg_list_pane_ParamLimits

0x478e,	// (0x00035f99) bg_list_pane

0xc0d7,	// (0x0003d8e2) find_pane

0x4d4c,	// (0x00036557) listscroll_app_pane_ParamLimits

0x4d4c,	// (0x00036557) listscroll_app_pane

0x47ba,	// (0x00035fc5) listscroll_form_pane

0xb217,	// (0x0003ca22) listscroll_gen_pane_ParamLimits

0xb217,	// (0x0003ca22) listscroll_gen_pane

0x0923,	// (0x0003212e) listscroll_set_pane

0x60b1,	// (0x000378bc) main_idle_act_pane

0x448a,	// (0x00035c95) main_idle_trad_pane

0x448a,	// (0x00035c95) main_list_empty_pane

0x47ae,	// (0x00035fb9) main_midp_pane

0x47d4,	// (0x00035fdf) main_pane_g1_ParamLimits

0x47d4,	// (0x00035fdf) main_pane_g1

0xc0df,	// (0x0003d8ea) popup_ai_message_window_ParamLimits

0xc0df,	// (0x0003d8ea) popup_ai_message_window

0xc170,	// (0x0003d97b) popup_fep_china_uni_window_ParamLimits

0xc170,	// (0x0003d97b) popup_fep_china_uni_window

0x0a43,	// (0x0003224e) popup_fep_japan_candidate_window_ParamLimits

0x0a43,	// (0x0003224e) popup_fep_japan_candidate_window

0x0a63,	// (0x0003226e) popup_fep_japan_predictive_window_ParamLimits

0x0a63,	// (0x0003226e) popup_fep_japan_predictive_window

0xc1cc,	// (0x0003d9d7) popup_find_window

0xc1e9,	// (0x0003d9f4) popup_grid_graphic_window_ParamLimits

0xc1e9,	// (0x0003d9f4) popup_grid_graphic_window

0x0acc,	// (0x000322d7) popup_large_graphic_colour_window

0xc28d,	// (0x0003da98) popup_menu_window_ParamLimits

0xc28d,	// (0x0003da98) popup_menu_window

0xc45f,	// (0x0003dc6a) popup_note_image_window

0xc425,	// (0x0003dc30) popup_note_wait_window_ParamLimits

0xc425,	// (0x0003dc30) popup_note_wait_window

0xc477,	// (0x0003dc82) popup_note_window_ParamLimits

0xc477,	// (0x0003dc82) popup_note_window

0xc51d,	// (0x0003dd28) popup_query_code_window_ParamLimits

0xc51d,	// (0x0003dd28) popup_query_code_window

0x0d14,	// (0x0003251f) popup_query_data_code_window_ParamLimits

0x0d14,	// (0x0003251f) popup_query_data_code_window

0xc557,	// (0x0003dd62) popup_query_data_window_ParamLimits

0xc557,	// (0x0003dd62) popup_query_data_window

0xc5d9,	// (0x0003dde4) popup_query_sat_info_window_ParamLimits

0xc5d9,	// (0x0003dde4) popup_query_sat_info_window

0xc670,	// (0x0003de7b) popup_snote_single_graphic_window_ParamLimits

0xc670,	// (0x0003de7b) popup_snote_single_graphic_window

0xc670,	// (0x0003de7b) popup_snote_single_text_window_ParamLimits

0xc670,	// (0x0003de7b) popup_snote_single_text_window

0x0d9b,	// (0x000325a6) popup_sub_window_general

0x0ecb,	// (0x000326d6) popup_window_general_ParamLimits

0x0ecb,	// (0x000326d6) popup_window_general

0x47e2,	// (0x00035fed) power_save_pane

0xbf58,	// (0x0003d763) control_pane_g1_ParamLimits

0xbf58,	// (0x0003d763) control_pane_g1

0xbf81,	// (0x0003d78c) control_pane_g2_ParamLimits

0xbf81,	// (0x0003d78c) control_pane_g2

0x4751,	// (0x00035f5c) control_pane_g3_ParamLimits

0x4751,	// (0x00035f5c) control_pane_g3

0x0007,

0xf761,	// (0x00040f6c) control_pane_g_ParamLimits

0xf761,	// (0x00040f6c) control_pane_g

0xbfc2,	// (0x0003d7cd) control_pane_t1_ParamLimits

0xbfc2,	// (0x0003d7cd) control_pane_t1

0xc02a,	// (0x0003d835) control_pane_t2_ParamLimits

0xc02a,	// (0x0003d835) control_pane_t2

0x0002,

0xf772,	// (0x00040f7d) control_pane_t_ParamLimits

0xf772,	// (0x00040f7d) control_pane_t

0x4676,	// (0x00035e81) navi_navi_volume_pane_cp1

0x467e,	// (0x00035e89) status_small_icon_pane

0x4686,	// (0x00035e91) status_small_pane_g1_ParamLimits

0x4686,	// (0x00035e91) status_small_pane_g1

0x46ba,	// (0x00035ec5) status_small_pane_g2_ParamLimits

0x46ba,	// (0x00035ec5) status_small_pane_g2

0x46c6,	// (0x00035ed1) status_small_pane_g3_ParamLimits

0x46c6,	// (0x00035ed1) status_small_pane_g3

0xd28e,	// (0x0003ea99) status_small_pane_g4_ParamLimits

0xd28e,	// (0x0003ea99) status_small_pane_g4

0xd29c,	// (0x0003eaa7) status_small_pane_g5_ParamLimits

0xd29c,	// (0x0003eaa7) status_small_pane_g5

0x46ec,	// (0x00035ef7) status_small_pane_g6_ParamLimits

0x46ec,	// (0x00035ef7) status_small_pane_g6

0x0007,

0xf750,	// (0x00040f5b) status_small_pane_g_ParamLimits

0xf750,	// (0x00040f5b) status_small_pane_g

0x471b,	// (0x00035f26) status_small_pane_t1

0xd2b2,	// (0x0003eabd) status_small_wait_pane_ParamLimits

0xd2b2,	// (0x0003eabd) status_small_wait_pane

0xbe94,	// (0x0003d69f) aid_levels_signal_ParamLimits

0xbe94,	// (0x0003d69f) aid_levels_signal

0xbeac,	// (0x0003d6b7) signal_pane_g1_ParamLimits

0xbeac,	// (0x0003d6b7) signal_pane_g1

0xd197,	// (0x0003e9a2) signal_pane_g2_ParamLimits

0xd197,	// (0x0003e9a2) signal_pane_g2

0x0003,

0xf6e1,	// (0x00040eec) signal_pane_g_ParamLimits

0xf6e1,	// (0x00040eec) signal_pane_g

0x3f59,	// (0x00035764) context_pane_g1

0xb40b,	// (0x0003cc16) title_pane_g1

0xb442,	// (0x0003cc4d) title_pane_t1

0x2d1b,	// (0x00034526) title_pane_t2

0x2d41,	// (0x0003454c) title_pane_t3

0x0002,

0xf530,	// (0x00040d3b) title_pane_t

0xd696,	// (0x0003eea1) aid_levels_battery_ParamLimits

0xd696,	// (0x0003eea1) aid_levels_battery

0xd6b2,	// (0x0003eebd) battery_pane_g1_ParamLimits

0xd6b2,	// (0x0003eebd) battery_pane_g1

0xd6cf,	// (0x0003eeda) battery_pane_g2_ParamLimits

0xd6cf,	// (0x0003eeda) battery_pane_g2

0x0001,

0xf784,	// (0x00040f8f) battery_pane_g_ParamLimits

0xf784,	// (0x00040f8f) battery_pane_g

0xd890,	// (0x0003f09b) uni_indicator_pane_g1

0xd8a6,	// (0x0003f0b1) uni_indicator_pane_g2

0xd8bc,	// (0x0003f0c7) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x00041100) uni_indicator_pane_g

0x42ef,	// (0x00035afa) navi_icon_pane_ParamLimits

0x42ef,	// (0x00035afa) navi_icon_pane

0x4238,	// (0x00035a43) navi_midp_pane

0x430b,	// (0x00035b16) navi_navi_pane

0x4315,	// (0x00035b20) navi_text_pane_ParamLimits

0x4315,	// (0x00035b20) navi_text_pane

0xe1ec,	// (0x0003f9f7) status_small_wait_pane_g1

0x3196,	// (0x000349a1) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x000410fb) status_small_wait_pane_g

0x5b9b,	// (0x000373a6) navi_navi_icon_text_pane

0x5ba3,	// (0x000373ae) navi_navi_pane_g1_ParamLimits

0x5ba3,	// (0x000373ae) navi_navi_pane_g1

0x5bb5,	// (0x000373c0) navi_navi_pane_g2_ParamLimits

0x5bb5,	// (0x000373c0) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x000410c9) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x000410c9) navi_navi_pane_g

0x5bc7,	// (0x000373d2) navi_navi_tabs_pane

0x5bd0,	// (0x000373db) navi_navi_text_pane

0x5b9b,	// (0x000373a6) navi_navi_volume_pane

0x5b77,	// (0x00037382) navi_text_pane_t1

0x5b6b,	// (0x00037376) navi_icon_pane_g1

0x5abe,	// (0x000372c9) navi_navi_text_pane_t1

0x12ac,	// (0x00032ab7) navi_navi_volume_pane_g1

0x12b4,	// (0x00032abf) volume_small_pane

0x5a24,	// (0x0003722f) navi_navi_icon_text_pane_g1

0x5a2c,	// (0x00037237) navi_navi_icon_text_pane_t1

0x430b,	// (0x00035b16) navi_tabs_2_long_pane

0x430b,	// (0x00035b16) navi_tabs_2_pane

0x430b,	// (0x00035b16) navi_tabs_3_long_pane

0x430b,	// (0x00035b16) navi_tabs_3_pane

0x430b,	// (0x00035b16) navi_tabs_4_pane

0x128c,	// (0x00032a97) tabs_2_active_pane_ParamLimits

0x128c,	// (0x00032a97) tabs_2_active_pane

0x129c,	// (0x00032aa7) tabs_2_passive_pane_ParamLimits

0x129c,	// (0x00032aa7) tabs_2_passive_pane

0x125a,	// (0x00032a65) tabs_3_active_pane_ParamLimits

0x125a,	// (0x00032a65) tabs_3_active_pane

0x126a,	// (0x00032a75) tabs_3_passive_pane_ParamLimits

0x126a,	// (0x00032a75) tabs_3_passive_pane

0x127b,	// (0x00032a86) tabs_3_passive_pane_cp_ParamLimits

0x127b,	// (0x00032a86) tabs_3_passive_pane_cp

0x1216,	// (0x00032a21) tabs_4_active_pane_ParamLimits

0x1216,	// (0x00032a21) tabs_4_active_pane

0x1227,	// (0x00032a32) tabs_4_passive_pane_ParamLimits

0x1227,	// (0x00032a32) tabs_4_passive_pane

0x1238,	// (0x00032a43) tabs_4_passive_pane_cp_ParamLimits

0x1238,	// (0x00032a43) tabs_4_passive_pane_cp

0x1249,	// (0x00032a54) tabs_4_passive_pane_cp2_ParamLimits

0x1249,	// (0x00032a54) tabs_4_passive_pane_cp2

0x11f2,	// (0x000329fd) tabs_2_long_active_pane_ParamLimits

0x11f2,	// (0x000329fd) tabs_2_long_active_pane

0x1204,	// (0x00032a0f) tabs_2_long_passive_pane_ParamLimits

0x1204,	// (0x00032a0f) tabs_2_long_passive_pane

0x11b3,	// (0x000329be) tabs_3_long_active_pane_ParamLimits

0x11b3,	// (0x000329be) tabs_3_long_active_pane

0x11c6,	// (0x000329d1) tabs_3_long_passive_pane_ParamLimits

0x11c6,	// (0x000329d1) tabs_3_long_passive_pane

0x11df,	// (0x000329ea) tabs_3_long_passive_pane_cp_ParamLimits

0x11df,	// (0x000329ea) tabs_3_long_passive_pane_cp

0x1159,	// (0x00032964) volume_small_pane_g1

0x1162,	// (0x0003296d) volume_small_pane_g2

0x116b,	// (0x00032976) volume_small_pane_g3

0x1174,	// (0x0003297f) volume_small_pane_g4

0x117d,	// (0x00032988) volume_small_pane_g5

0x1186,	// (0x00032991) volume_small_pane_g6

0x118f,	// (0x0003299a) volume_small_pane_g7

0x1198,	// (0x000329a3) volume_small_pane_g8

0x11a1,	// (0x000329ac) volume_small_pane_g9

0x11aa,	// (0x000329b5) volume_small_pane_g10

0x0009,

0xf88a,	// (0x00041095) volume_small_pane_g

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp2_ParamLimits

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp2

0x2d61,	// (0x0003456c) tabs_3_active_pane_g1

0xb4ce,	// (0x0003ccd9) tabs_3_active_pane_t1

0x2fce,	// (0x000347d9) bg_passive_tab_pane_cp2_ParamLimits

0x2fce,	// (0x000347d9) bg_passive_tab_pane_cp2

0x2d61,	// (0x0003456c) tabs_3_passive_pane_g1

0xb4ce,	// (0x0003ccd9) tabs_3_passive_pane_t1

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp3_ParamLimits

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp3

0x2d7b,	// (0x00034586) tabs_4_active_pane_g1

0xb4e0,	// (0x0003cceb) tabs_4_active_pane_t1

0x2fce,	// (0x000347d9) bg_passive_tab_pane_cp3_ParamLimits

0x2fce,	// (0x000347d9) bg_passive_tab_pane_cp3

0x2d7b,	// (0x00034586) tabs_4_1_passive_pane_g1

0xb4e0,	// (0x0003cceb) tabs_4_1_passive_pane_t1

0x47ae,	// (0x00035fb9) list_highlight_pane_cp2

0xd942,	// (0x0003f14d) list_set_pane_ParamLimits

0xd942,	// (0x0003f14d) list_set_pane

0xd9dc,	// (0x0003f1e7) main_pane_set_t1_ParamLimits

0xd9dc,	// (0x0003f1e7) main_pane_set_t1

0xd9fc,	// (0x0003f207) main_pane_set_t2_ParamLimits

0xd9fc,	// (0x0003f207) main_pane_set_t2

0xda10,	// (0x0003f21b) main_pane_set_t3_ParamLimits

0xda10,	// (0x0003f21b) main_pane_set_t3

0xda22,	// (0x0003f22d) main_pane_set_t4_ParamLimits

0xda22,	// (0x0003f22d) main_pane_set_t4

0x0003,

0xf95a,	// (0x00041165) main_pane_set_t_ParamLimits

0xf95a,	// (0x00041165) main_pane_set_t

0xda34,	// (0x0003f23f) setting_code_pane

0xda3e,	// (0x0003f249) setting_slider_graphic_pane

0xda3e,	// (0x0003f249) setting_slider_pane

0xda3e,	// (0x0003f249) setting_text_pane

0xda3e,	// (0x0003f249) setting_volume_pane

0xf3a3,	// (0x00040bae) volume_set_pane

0x2d53,	// (0x0003455e) bg_set_opt_pane_cp

0xf3ab,	// (0x00040bb6) setting_slider_pane_t1

0xf3c4,	// (0x00040bcf) setting_slider_pane_t2

0xf3de,	// (0x00040be9) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00040d42) setting_slider_pane_t

0xf3f6,	// (0x00040c01) slider_set_pane

0xe1f6,	// (0x0003fa01) bg_set_opt_pane_cp2

0x2d95,	// (0x000345a0) setting_slider_graphic_pane_g1

0xf40c,	// (0x00040c17) setting_slider_graphic_pane_t1

0xf41c,	// (0x00040c27) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00040d49) setting_slider_graphic_pane_t

0xf42c,	// (0x00040c37) slider_set_pane_cp

0xe1f6,	// (0x0003fa01) input_focus_pane_cp1

0x6098,	// (0x000378a3) list_set_text_pane

0xe1ec,	// (0x0003f9f7) setting_text_pane_g1

0xe1f6,	// (0x0003fa01) input_focus_pane_cp2

0xe1ec,	// (0x0003f9f7) setting_code_pane_g1

0x2d9e,	// (0x000345a9) setting_code_pane_t1

0xe200,	// (0x0003fa0b) set_text_pane_t1_ParamLimits

0xe200,	// (0x0003fa0b) set_text_pane_t1

0x3638,	// (0x00034e43) set_opt_bg_pane_g1

0x3640,	// (0x00034e4b) set_opt_bg_pane_g2

0x6072,	// (0x0003787d) set_opt_bg_pane_g3

0x3650,	// (0x00034e5b) set_opt_bg_pane_g4

0x3658,	// (0x00034e63) set_opt_bg_pane_g5

0x3660,	// (0x00034e6b) set_opt_bg_pane_g6

0x607c,	// (0x00037887) set_opt_bg_pane_g7

0x6084,	// (0x0003788f) set_opt_bg_pane_g8

0x608e,	// (0x00037899) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x00041152) set_opt_bg_pane_g

0x6065,	// (0x00037870) slider_set_pane_g1

0x1349,	// (0x00032b54) slider_set_pane_g2

0x0006,

0xf938,	// (0x00041143) slider_set_pane_g

0x12bd,	// (0x00032ac8) volume_set_pane_g1

0x12c5,	// (0x00032ad0) volume_set_pane_g2

0x12cd,	// (0x00032ad8) volume_set_pane_g3

0x12d5,	// (0x00032ae0) volume_set_pane_g4

0x12dd,	// (0x00032ae8) volume_set_pane_g5

0x12e5,	// (0x00032af0) volume_set_pane_g6

0x12ed,	// (0x00032af8) volume_set_pane_g7

0x12f5,	// (0x00032b00) volume_set_pane_g8

0x12fd,	// (0x00032b08) volume_set_pane_g9

0x1305,	// (0x00032b10) volume_set_pane_g10

0x0009,

0xf910,	// (0x0004111b) volume_set_pane_g

0xb4f2,	// (0x0003ccfd) indicator_pane_ParamLimits

0xb4f2,	// (0x0003ccfd) indicator_pane

0xb51a,	// (0x0003cd25) main_idle_pane_g2_ParamLimits

0xb51a,	// (0x0003cd25) main_idle_pane_g2

0xb552,	// (0x0003cd5d) main_pane_idle_g1_ParamLimits

0xb552,	// (0x0003cd5d) main_pane_idle_g1

0x2ded,	// (0x000345f8) popup_clock_digital_analogue_window_ParamLimits

0x2ded,	// (0x000345f8) popup_clock_digital_analogue_window

0xb579,	// (0x0003cd84) soft_indicator_pane_ParamLimits

0xb579,	// (0x0003cd84) soft_indicator_pane

0xb593,	// (0x0003cd9e) wallpaper_pane_ParamLimits

0xb593,	// (0x0003cd9e) wallpaper_pane

0xe1ec,	// (0x0003f9f7) wallpaper_pane_g1

0xb5a5,	// (0x0003cdb0) indicator_pane_g1_ParamLimits

0xb5a5,	// (0x0003cdb0) indicator_pane_g1

0x64b6,	// (0x00037cc1) navi_navi_icon_text_pane_srt_g1

0x2e3f,	// (0x0003464a) soft_indicator_pane_t1

0x2e59,	// (0x00034664) aid_ps_area_pane

0xb5bb,	// (0x0003cdc6) aid_ps_clock_pane

0x2e78,	// (0x00034683) aid_ps_indicator_pane

0x2e84,	// (0x0003468f) indicator_ps_pane_ParamLimits

0x2e84,	// (0x0003468f) indicator_ps_pane

0x2e93,	// (0x0003469e) power_save_pane_g1_ParamLimits

0x2e93,	// (0x0003469e) power_save_pane_g1

0x2e9f,	// (0x000346aa) power_save_pane_g2_ParamLimits

0x2e9f,	// (0x000346aa) power_save_pane_g2

0xf18d,	// (0x00040998) aid_navinavi_width_pane

0x2e59,	// (0x00034664) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00040d4e) power_save_pane_g_ParamLimits

0xf543,	// (0x00040d4e) power_save_pane_g

0x2ead,	// (0x000346b8) power_save_pane_t1_ParamLimits

0x2ead,	// (0x000346b8) power_save_pane_t1

0xb5bb,	// (0x0003cdc6) aid_ps_clock_pane_ParamLimits

0x2e78,	// (0x00034683) aid_ps_indicator_pane_ParamLimits

0x2ebf,	// (0x000346ca) power_save_pane_t4_ParamLimits

0x2ebf,	// (0x000346ca) power_save_pane_t4

0x0001,

0xf548,	// (0x00040d53) power_save_pane_t_ParamLimits

0xf548,	// (0x00040d53) power_save_pane_t

0x2ee9,	// (0x000346f4) power_save_t3_ParamLimits

0x2ee9,	// (0x000346f4) power_save_t3

0x2ed4,	// (0x000346df) power_save_t2_ParamLimits

0x2ed4,	// (0x000346df) power_save_t2

0x2efe,	// (0x00034709) indicator_ps_pane_g1

0xb5c9,	// (0x0003cdd4) ai_gene_pane_ParamLimits

0xb5c9,	// (0x0003cdd4) ai_gene_pane

0xb5e0,	// (0x0003cdeb) ai_links_pane_ParamLimits

0xb5e0,	// (0x0003cdeb) ai_links_pane

0xb5f8,	// (0x0003ce03) indicator_pane_cp1_ParamLimits

0xb5f8,	// (0x0003ce03) indicator_pane_cp1

0xb607,	// (0x0003ce12) main_pane_idle_g1_cp_ParamLimits

0xb607,	// (0x0003ce12) main_pane_idle_g1_cp

0x2f37,	// (0x00034742) popup_ai_links_title_window

0xb61f,	// (0x0003ce2a) soft_indicator_pane_cp1_ParamLimits

0xb61f,	// (0x0003ce2a) soft_indicator_pane_cp1

0x5e64,	// (0x0003766f) ai_links_pane_g1

0x5e6d,	// (0x00037678) grid_ai_links_pane

0xd887,	// (0x0003f092) ai_gene_pane_1

0x5e52,	// (0x0003765d) ai_gene_pane_2

0x5e5b,	// (0x00037666) list_highlight_pane_cp4

0xd863,	// (0x0003f06e) cell_ai_link_pane_ParamLimits

0xd863,	// (0x0003f06e) cell_ai_link_pane

0x5e23,	// (0x0003762e) cell_ai_link_pane_g1

0x3196,	// (0x000349a1) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x000410f6) cell_ai_link_pane_g

0xe1f6,	// (0x0003fa01) grid_highlight_cp2

0xe1f6,	// (0x0003fa01) bg_popup_sub_pane_cp1

0x2f5a,	// (0x00034765) popup_ai_links_title_window_t1

0x5d71,	// (0x0003757c) ai_gene_pane_1_g1_ParamLimits

0x5d71,	// (0x0003757c) ai_gene_pane_1_g1

0x5d7d,	// (0x00037588) ai_gene_pane_1_g2_ParamLimits

0x5d7d,	// (0x00037588) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x000410ec) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x000410ec) ai_gene_pane_1_g

0x5d8a,	// (0x00037595) ai_gene_pane_1_t1_ParamLimits

0x5d8a,	// (0x00037595) ai_gene_pane_1_t1

0x5dbe,	// (0x000375c9) grid_ai_soft_ind_pane

0x5d5c,	// (0x00037567) ai_gene_pane_2_t1_ParamLimits

0x5d5c,	// (0x00037567) ai_gene_pane_2_t1

0xb633,	// (0x0003ce3e) main_pane_empty_t1_ParamLimits

0xb633,	// (0x0003ce3e) main_pane_empty_t1

0xb64b,	// (0x0003ce56) main_pane_empty_t2_ParamLimits

0xb64b,	// (0x0003ce56) main_pane_empty_t2

0xb660,	// (0x0003ce6b) main_pane_empty_t3_ParamLimits

0xb660,	// (0x0003ce6b) main_pane_empty_t3

0xb672,	// (0x0003ce7d) main_pane_empty_t4_ParamLimits

0xb672,	// (0x0003ce7d) main_pane_empty_t4

0xb684,	// (0x0003ce8f) main_pane_empty_t5_ParamLimits

0xb684,	// (0x0003ce8f) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00040d58) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00040d58) main_pane_empty_t

0x36ff,	// (0x00034f0a) bg_popup_window_pane_ParamLimits

0x36ff,	// (0x00034f0a) bg_popup_window_pane

0x5acc,	// (0x000372d7) find_popup_pane_cp2_ParamLimits

0x5acc,	// (0x000372d7) find_popup_pane_cp2

0x5ad8,	// (0x000372e3) heading_pane_ParamLimits

0x5ad8,	// (0x000372e3) heading_pane

0xe1f6,	// (0x0003fa01) bg_popup_sub_pane

0xd7e4,	// (0x0003efef) bg_popup_window_pane_g1_ParamLimits

0xd7e4,	// (0x0003efef) bg_popup_window_pane_g1

0xd7f3,	// (0x0003effe) bg_popup_window_pane_g2_ParamLimits

0xd7f3,	// (0x0003effe) bg_popup_window_pane_g2

0xd7ff,	// (0x0003f00a) bg_popup_window_pane_g3_ParamLimits

0xd7ff,	// (0x0003f00a) bg_popup_window_pane_g3

0xd80b,	// (0x0003f016) bg_popup_window_pane_g4_ParamLimits

0xd80b,	// (0x0003f016) bg_popup_window_pane_g4

0xd81a,	// (0x0003f025) bg_popup_window_pane_g5_ParamLimits

0xd81a,	// (0x0003f025) bg_popup_window_pane_g5

0xd82a,	// (0x0003f035) bg_popup_window_pane_g6_ParamLimits

0xd82a,	// (0x0003f035) bg_popup_window_pane_g6

0xd836,	// (0x0003f041) bg_popup_window_pane_g7_ParamLimits

0xd836,	// (0x0003f041) bg_popup_window_pane_g7

0xd845,	// (0x0003f050) bg_popup_window_pane_g8_ParamLimits

0xd845,	// (0x0003f050) bg_popup_window_pane_g8

0xd854,	// (0x0003f05f) bg_popup_window_pane_g9_ParamLimits

0xd854,	// (0x0003f05f) bg_popup_window_pane_g9

0x5ab2,	// (0x000372bd) bg_popup_window_pane_g10_ParamLimits

0x5ab2,	// (0x000372bd) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x000410b4) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x000410b4) bg_popup_window_pane_g

0x59db,	// (0x000371e6) bg_popup_heading_pane_ParamLimits

0x59db,	// (0x000371e6) bg_popup_heading_pane

0x14bf,	// (0x00032cca) tabs_4_passive_pane_cp_srt_ParamLimits

0x14bf,	// (0x00032cca) tabs_4_passive_pane_cp_srt

0x14d1,	// (0x00032cdc) tabs_4_passive_pane_srt_ParamLimits

0x59ef,	// (0x000371fa) heading_pane_g2

0x14d1,	// (0x00032cdc) tabs_4_passive_pane_srt

0x4d4c,	// (0x00036557) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d4c,	// (0x00036557) bg_passive_tab_pane_cp3_srt

0x59f7,	// (0x00037202) heading_pane_t1_ParamLimits

0x59f7,	// (0x00037202) heading_pane_t1

0x5a0e,	// (0x00037219) heading_pane_t2_ParamLimits

0x5a0e,	// (0x00037219) heading_pane_t2

0x0001,

0xf8a4,	// (0x000410af) heading_pane_t_ParamLimits

0xf8a4,	// (0x000410af) heading_pane_t

0x5508,	// (0x00036d13) bg_popup_heading_pane_g1

0x55b7,	// (0x00036dc2) bg_popup_heading_pane_g2

0x55c1,	// (0x00036dcc) bg_popup_heading_pane_g3

0x55cb,	// (0x00036dd6) bg_popup_heading_pane_g4

0x55d5,	// (0x00036de0) bg_popup_heading_pane_g5

0x55df,	// (0x00036dea) bg_popup_heading_pane_g6

0x55e7,	// (0x00036df2) bg_popup_heading_pane_g7

0x55ef,	// (0x00036dfa) bg_popup_heading_pane_g8

0x55f9,	// (0x00036e04) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x0004106b) bg_popup_heading_pane_g

0x4cd8,	// (0x000364e3) bg_popup_sub_pane_g1

0x4ce8,	// (0x000364f3) bg_popup_sub_pane_g2

0x4ce0,	// (0x000364eb) bg_popup_sub_pane_g3

0x4cf8,	// (0x00036503) bg_popup_sub_pane_g4

0x4cf0,	// (0x000364fb) bg_popup_sub_pane_g5

0x4d00,	// (0x0003650b) bg_popup_sub_pane_g6

0x4d08,	// (0x00036513) bg_popup_sub_pane_g7

0x4d18,	// (0x00036523) bg_popup_sub_pane_g8

0x4d10,	// (0x0003651b) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x00041045) bg_popup_sub_pane_g

0x2fce,	// (0x000347d9) bg_popup_window_pane_cp5_ParamLimits

0x2fce,	// (0x000347d9) bg_popup_window_pane_cp5

0x2fea,	// (0x000347f5) popup_note_window_g1_ParamLimits

0x2fea,	// (0x000347f5) popup_note_window_g1

0x2ff6,	// (0x00034801) popup_note_window_t1_ParamLimits

0x2ff6,	// (0x00034801) popup_note_window_t1

0x300c,	// (0x00034817) popup_note_window_t2_ParamLimits

0x300c,	// (0x00034817) popup_note_window_t2

0x3022,	// (0x0003482d) popup_note_window_t3_ParamLimits

0x3022,	// (0x0003482d) popup_note_window_t3

0x3038,	// (0x00034843) popup_note_window_t4_ParamLimits

0x3038,	// (0x00034843) popup_note_window_t4

0x3060,	// (0x0003486b) popup_note_window_t5_ParamLimits

0x3060,	// (0x0003486b) popup_note_window_t5

0x0004,

0xf558,	// (0x00040d63) popup_note_window_t_ParamLimits

0xf558,	// (0x00040d63) popup_note_window_t

0x30aa,	// (0x000348b5) bg_popup_window_pane_cp6_ParamLimits

0x30aa,	// (0x000348b5) bg_popup_window_pane_cp6

0x5484,	// (0x00036c8f) popup_note_image_window_g1_ParamLimits

0x5484,	// (0x00036c8f) popup_note_image_window_g1

0x5490,	// (0x00036c9b) popup_note_image_window_g2_ParamLimits

0x5490,	// (0x00036c9b) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x00041039) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x00041039) popup_note_image_window_g

0x54a9,	// (0x00036cb4) popup_note_image_window_t1_ParamLimits

0x54a9,	// (0x00036cb4) popup_note_image_window_t1

0x54c2,	// (0x00036ccd) popup_note_image_window_t2_ParamLimits

0x54c2,	// (0x00036ccd) popup_note_image_window_t2

0x54db,	// (0x00036ce6) popup_note_image_window_t3_ParamLimits

0x54db,	// (0x00036ce6) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0004103e) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0004103e) popup_note_image_window_t

0x5345,	// (0x00036b50) bg_popup_window_pane_cp7_ParamLimits

0x5345,	// (0x00036b50) bg_popup_window_pane_cp7

0x5375,	// (0x00036b80) popup_note_wait_window_g1_ParamLimits

0x5375,	// (0x00036b80) popup_note_wait_window_g1

0x5381,	// (0x00036b8c) popup_note_wait_window_g2_ParamLimits

0x5381,	// (0x00036b8c) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x00041027) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x00041027) popup_note_wait_window_g

0x5399,	// (0x00036ba4) popup_note_wait_window_t1_ParamLimits

0x5399,	// (0x00036ba4) popup_note_wait_window_t1

0x53c0,	// (0x00036bcb) popup_note_wait_window_t2_ParamLimits

0x53c0,	// (0x00036bcb) popup_note_wait_window_t2

0x53dd,	// (0x00036be8) popup_note_wait_window_t3_ParamLimits

0x53dd,	// (0x00036be8) popup_note_wait_window_t3

0x53f0,	// (0x00036bfb) popup_note_wait_window_t4_ParamLimits

0x53f0,	// (0x00036bfb) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0004102e) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0004102e) popup_note_wait_window_t

0x5415,	// (0x00036c20) wait_bar_pane_ParamLimits

0x5415,	// (0x00036c20) wait_bar_pane

0xe1f6,	// (0x0003fa01) wait_anim_pane

0xe1f6,	// (0x0003fa01) wait_border_pane

0xe1ec,	// (0x0003f9f7) wait_anim_pane_g1

0xe1ec,	// (0x0003f9f7) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x00040ee7) wait_anim_pane_g

0x52e9,	// (0x00036af4) wait_border_pane_g1

0x52f4,	// (0x00036aff) wait_border_pane_g2

0x52fd,	// (0x00036b08) wait_border_pane_g3

0x0002,

0xf815,	// (0x00041020) wait_border_pane_g

0x5154,	// (0x0003695f) bg_popup_window_pane_cp16_ParamLimits

0x5154,	// (0x0003695f) bg_popup_window_pane_cp16

0x5254,	// (0x00036a5f) indicator_popup_pane_cp4_ParamLimits

0x5254,	// (0x00036a5f) indicator_popup_pane_cp4

0x5268,	// (0x00036a73) popup_query_data_window_t1_ParamLimits

0x5268,	// (0x00036a73) popup_query_data_window_t1

0x527a,	// (0x00036a85) popup_query_data_window_t2_ParamLimits

0x527a,	// (0x00036a85) popup_query_data_window_t2

0x5293,	// (0x00036a9e) popup_query_data_window_t3_ParamLimits

0x5293,	// (0x00036a9e) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x00041019) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x00041019) popup_query_data_window_t

0x52ad,	// (0x00036ab8) query_popup_data_pane_ParamLimits

0x52ad,	// (0x00036ab8) query_popup_data_pane

0x52c1,	// (0x00036acc) query_popup_data_pane_cp1_ParamLimits

0x52c1,	// (0x00036acc) query_popup_data_pane_cp1

0x5154,	// (0x0003695f) bg_popup_window_pane_cp10_ParamLimits

0x5154,	// (0x0003695f) bg_popup_window_pane_cp10

0x5186,	// (0x00036991) indicator_popup_pane_ParamLimits

0x5186,	// (0x00036991) indicator_popup_pane

0x51a8,	// (0x000369b3) popup_query_code_window_t1_ParamLimits

0x51a8,	// (0x000369b3) popup_query_code_window_t1

0x51c2,	// (0x000369cd) popup_query_code_window_t2_ParamLimits

0x51c2,	// (0x000369cd) popup_query_code_window_t2

0x520b,	// (0x00036a16) popup_query_code_window_t3_ParamLimits

0x520b,	// (0x00036a16) popup_query_code_window_t3

0x0002,

0xf807,	// (0x00041012) popup_query_code_window_t_ParamLimits

0xf807,	// (0x00041012) popup_query_code_window_t

0x523a,	// (0x00036a45) query_popup_pane_ParamLimits

0x523a,	// (0x00036a45) query_popup_pane

0x30aa,	// (0x000348b5) bg_popup_window_pane_cp15_ParamLimits

0x30aa,	// (0x000348b5) bg_popup_window_pane_cp15

0x30c8,	// (0x000348d3) indicator_popup_pane_cp1_ParamLimits

0x30c8,	// (0x000348d3) indicator_popup_pane_cp1

0x30db,	// (0x000348e6) indicator_popup_pane_cp2_ParamLimits

0x30db,	// (0x000348e6) indicator_popup_pane_cp2

0x30ee,	// (0x000348f9) popup_query_data_code_window_g1_ParamLimits

0x30ee,	// (0x000348f9) popup_query_data_code_window_g1

0x3101,	// (0x0003490c) popup_query_data_code_window_t1_ParamLimits

0x3101,	// (0x0003490c) popup_query_data_code_window_t1

0x3113,	// (0x0003491e) popup_query_data_code_window_t2_ParamLimits

0x3113,	// (0x0003491e) popup_query_data_code_window_t2

0x3125,	// (0x00034930) popup_query_data_code_window_t3_ParamLimits

0x3125,	// (0x00034930) popup_query_data_code_window_t3

0x313b,	// (0x00034946) popup_query_data_code_window_t4_ParamLimits

0x313b,	// (0x00034946) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00040d6e) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00040d6e) popup_query_data_code_window_t

0x0f6f,	// (0x0003277a) list_single_midp_graphic_pane_g3

0x3153,	// (0x0003495e) query_popup_data_pane_cp2_ParamLimits

0x3166,	// (0x00034971) query_popup_pane_cp2_ParamLimits

0x3166,	// (0x00034971) query_popup_pane_cp2

0xe1f6,	// (0x0003fa01) bg_popup_window_pane_cp11

0x5138,	// (0x00036943) heading_pane_cp5

0x5140,	// (0x0003694b) listscroll_popup_info_pane

0xe1f6,	// (0x0003fa01) input_focus_pane_cp3

0x3179,	// (0x00034984) query_popup_pane_t1

0x3187,	// (0x00034992) list_popup_info_pane_ParamLimits

0x3187,	// (0x00034992) list_popup_info_pane

0x3196,	// (0x000349a1) listscroll_popup_info_pane_g1

0x319e,	// (0x000349a9) scroll_pane_cp7

0x31a8,	// (0x000349b3) popup_info_list_pane_t1_ParamLimits

0x31a8,	// (0x000349b3) popup_info_list_pane_t1

0x31c2,	// (0x000349cd) popup_info_list_pane_t2_ParamLimits

0x31c2,	// (0x000349cd) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00040d77) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00040d77) popup_info_list_pane_t

0xe1f6,	// (0x0003fa01) bg_popup_window_pane_cp12

0x64d0,	// (0x00037cdb) find_popup_pane

0x2d53,	// (0x0003455e) bg_popup_window_pane_cp3

0x31dc,	// (0x000349e7) heading_pane_cp3

0x31eb,	// (0x000349f6) listscroll_popup_graphic_pane

0xe1f6,	// (0x0003fa01) bg_popup_window_pane_cp4

0xb6e6,	// (0x0003cef1) heading_pane_cp4

0x3255,	// (0x00034a60) listscroll_popup_colour_pane

0xb6f0,	// (0x0003cefb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb6f0,	// (0x0003cefb) cell_large_graphic_colour_none_popup_pane

0xb704,	// (0x0003cf0f) grid_large_graphic_colour_popup_pane_ParamLimits

0xb704,	// (0x0003cf0f) grid_large_graphic_colour_popup_pane

0xb728,	// (0x0003cf33) listscroll_popup_colour_pane_g1_ParamLimits

0xb728,	// (0x0003cf33) listscroll_popup_colour_pane_g1

0xb73f,	// (0x0003cf4a) listscroll_popup_colour_pane_g2_ParamLimits

0xb73f,	// (0x0003cf4a) listscroll_popup_colour_pane_g2

0xb753,	// (0x0003cf5e) listscroll_popup_colour_pane_g3_ParamLimits

0xb753,	// (0x0003cf5e) listscroll_popup_colour_pane_g3

0xb763,	// (0x0003cf6e) listscroll_popup_colour_pane_g4_ParamLimits

0xb763,	// (0x0003cf6e) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00040d7c) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00040d7c) listscroll_popup_colour_pane_g

0x32e3,	// (0x00034aee) scroll_pane_cp6_ParamLimits

0x32e3,	// (0x00034aee) scroll_pane_cp6

0xb773,	// (0x0003cf7e) cell_large_graphic_colour_popup_pane_ParamLimits

0xb773,	// (0x0003cf7e) cell_large_graphic_colour_popup_pane

0x3314,	// (0x00034b1f) cell_large_graphic_colour_none_popup_pane_t1

0xe1f6,	// (0x0003fa01) grid_highlight_pane_cp5

0x3323,	// (0x00034b2e) cell_large_graphic_colour_popup_pane_g1

0x332b,	// (0x00034b36) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00040d85) cell_large_graphic_colour_popup_pane_g

0x3333,	// (0x00034b3e) cell_large_graphic_colour_popup_pane_g2_copy1

0x333c,	// (0x00034b47) grid_highlight_pane_cp4

0x3344,	// (0x00034b4f) bg_popup_window_pane_cp8_ParamLimits

0x3344,	// (0x00034b4f) bg_popup_window_pane_cp8

0x335f,	// (0x00034b6a) popup_snote_single_text_window_g1_ParamLimits

0x335f,	// (0x00034b6a) popup_snote_single_text_window_g1

0x3371,	// (0x00034b7c) popup_snote_single_text_window_t1_ParamLimits

0x3371,	// (0x00034b7c) popup_snote_single_text_window_t1

0x3384,	// (0x00034b8f) popup_snote_single_text_window_t2_ParamLimits

0x3384,	// (0x00034b8f) popup_snote_single_text_window_t2

0x3397,	// (0x00034ba2) popup_snote_single_text_window_t3_ParamLimits

0x3397,	// (0x00034ba2) popup_snote_single_text_window_t3

0x33d0,	// (0x00034bdb) popup_snote_single_text_window_t4_ParamLimits

0x33d0,	// (0x00034bdb) popup_snote_single_text_window_t4

0x3404,	// (0x00034c0f) popup_snote_single_text_window_t5_ParamLimits

0x3404,	// (0x00034c0f) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00040d8a) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00040d8a) popup_snote_single_text_window_t

0x3433,	// (0x00034c3e) bg_popup_window_pane_cp9_ParamLimits

0x3433,	// (0x00034c3e) bg_popup_window_pane_cp9

0x335f,	// (0x00034b6a) popup_snote_single_graphic_window_g1_ParamLimits

0x335f,	// (0x00034b6a) popup_snote_single_graphic_window_g1

0x3441,	// (0x00034c4c) popup_snote_single_graphic_window_g2_ParamLimits

0x3441,	// (0x00034c4c) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00040d95) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00040d95) popup_snote_single_graphic_window_g

0x344d,	// (0x00034c58) popup_snote_single_graphic_window_t1_ParamLimits

0x344d,	// (0x00034c58) popup_snote_single_graphic_window_t1

0x3460,	// (0x00034c6b) popup_snote_single_graphic_window_t2_ParamLimits

0x3460,	// (0x00034c6b) popup_snote_single_graphic_window_t2

0x3473,	// (0x00034c7e) popup_snote_single_graphic_window_t3_ParamLimits

0x3473,	// (0x00034c7e) popup_snote_single_graphic_window_t3

0x34ac,	// (0x00034cb7) popup_snote_single_graphic_window_t4_ParamLimits

0x34ac,	// (0x00034cb7) popup_snote_single_graphic_window_t4

0x34e0,	// (0x00034ceb) popup_snote_single_graphic_window_t5_ParamLimits

0x34e0,	// (0x00034ceb) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00040d9a) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00040d9a) popup_snote_single_graphic_window_t

0x6412,	// (0x00037c1d) grid_graphic_popup_pane_ParamLimits

0x6412,	// (0x00037c1d) grid_graphic_popup_pane

0x643c,	// (0x00037c47) listscroll_popup_graphic_pane_g1_ParamLimits

0x643c,	// (0x00037c47) listscroll_popup_graphic_pane_g1

0xdb48,	// (0x0003f353) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb48,	// (0x0003f353) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x0004118f) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x0004118f) listscroll_popup_graphic_pane_g

0x6464,	// (0x00037c6f) scroll_pane_cp5

0xdb03,	// (0x0003f30e) cell_graphic_popup_pane_ParamLimits

0xdb03,	// (0x0003f30e) cell_graphic_popup_pane

0x6381,	// (0x00037b8c) cell_graphic_popup_pane_g1

0x6389,	// (0x00037b94) cell_graphic_popup_pane_g2

0x3333,	// (0x00034b3e) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x00041188) cell_graphic_popup_pane_g

0x6392,	// (0x00037b9d) cell_graphic_popup_pane_t2

0x333c,	// (0x00034b47) grid_highlight_pane_cp3

0x3521,	// (0x00034d2c) list_gen_pane_ParamLimits

0x3521,	// (0x00034d2c) list_gen_pane

0x3553,	// (0x00034d5e) scroll_pane

0xdaba,	// (0x0003f2c5) bg_list_pane_g1_ParamLimits

0xdaba,	// (0x0003f2c5) bg_list_pane_g1

0x62f6,	// (0x00037b01) bg_list_pane_g2_ParamLimits

0x62f6,	// (0x00037b01) bg_list_pane_g2

0x630b,	// (0x00037b16) bg_list_pane_g3_ParamLimits

0x630b,	// (0x00037b16) bg_list_pane_g3

0x631f,	// (0x00037b2a) bg_list_pane_g4_ParamLimits

0x631f,	// (0x00037b2a) bg_list_pane_g4

0xdad7,	// (0x0003f2e2) bg_list_pane_g5_ParamLimits

0xdad7,	// (0x0003f2e2) bg_list_pane_g5

0x0004,

0xf972,	// (0x0004117d) bg_list_pane_g_ParamLimits

0xf972,	// (0x0004117d) bg_list_pane_g

0xda71,	// (0x0003f27c) list_double2_graphic_large_graphic_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double2_graphic_large_graphic_pane

0xda71,	// (0x0003f27c) list_double2_graphic_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double2_graphic_pane

0xda71,	// (0x0003f27c) list_double2_large_graphic_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double2_large_graphic_pane

0xda71,	// (0x0003f27c) list_double2_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double2_pane

0xda71,	// (0x0003f27c) list_double_graphic_heading_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double_graphic_heading_pane

0xda71,	// (0x0003f27c) list_double_graphic_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double_graphic_pane

0xda71,	// (0x0003f27c) list_double_heading_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double_heading_pane

0xda71,	// (0x0003f27c) list_double_large_graphic_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double_large_graphic_pane

0xda71,	// (0x0003f27c) list_double_number_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double_number_pane

0xda71,	// (0x0003f27c) list_double_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double_pane

0xda71,	// (0x0003f27c) list_double_time_pane_ParamLimits

0xda71,	// (0x0003f27c) list_double_time_pane

0xda71,	// (0x0003f27c) list_setting_number_pane_ParamLimits

0xda71,	// (0x0003f27c) list_setting_number_pane

0xda71,	// (0x0003f27c) list_setting_pane_ParamLimits

0xda71,	// (0x0003f27c) list_setting_pane

0xc854,	// (0x0003e05f) list_single_2graphic_pane_ParamLimits

0xc854,	// (0x0003e05f) list_single_2graphic_pane

0xc854,	// (0x0003e05f) list_single_graphic_heading_pane_ParamLimits

0xc854,	// (0x0003e05f) list_single_graphic_heading_pane

0xc854,	// (0x0003e05f) list_single_graphic_pane_ParamLimits

0xc854,	// (0x0003e05f) list_single_graphic_pane

0xc854,	// (0x0003e05f) list_single_heading_pane_ParamLimits

0xc854,	// (0x0003e05f) list_single_heading_pane

0xdaa7,	// (0x0003f2b2) list_single_large_graphic_pane_ParamLimits

0xdaa7,	// (0x0003f2b2) list_single_large_graphic_pane

0xc854,	// (0x0003e05f) list_single_number_heading_pane_ParamLimits

0xc854,	// (0x0003e05f) list_single_number_heading_pane

0xc854,	// (0x0003e05f) list_single_number_pane_ParamLimits

0xc854,	// (0x0003e05f) list_single_number_pane

0xc854,	// (0x0003e05f) list_single_pane_ParamLimits

0xc854,	// (0x0003e05f) list_single_pane

0xe1f6,	// (0x0003fa01) list_highlight_pane_cp1

0x0f9f,	// (0x000327aa) list_single_pane_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_single_pane_g1

0x0fab,	// (0x000327b6) list_single_pane_g2_ParamLimits

0x0fab,	// (0x000327b6) list_single_pane_g2

0x0001,

0xf5a1,	// (0x00040dac) list_single_pane_g_ParamLimits

0xf5a1,	// (0x00040dac) list_single_pane_g

0x1614,	// (0x00032e1f) list_single_pane_t1_ParamLimits

0x1614,	// (0x00032e1f) list_single_pane_t1

0x0f9f,	// (0x000327aa) list_single_number_pane_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_single_number_pane_g1

0x0fab,	// (0x000327b6) list_single_number_pane_g2_ParamLimits

0x0fab,	// (0x000327b6) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x00040dac) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x00040dac) list_single_number_pane_g

0x0f34,	// (0x0003273f) list_single_number_pane_t1_ParamLimits

0x0f34,	// (0x0003273f) list_single_number_pane_t1

0xc816,	// (0x0003e021) list_single_number_pane_t2_ParamLimits

0xc816,	// (0x0003e021) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0004113e) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0004113e) list_single_number_pane_t

0xb79c,	// (0x0003cfa7) list_single_graphic_pane_g1_ParamLimits

0xb79c,	// (0x0003cfa7) list_single_graphic_pane_g1

0x0f9f,	// (0x000327aa) list_single_graphic_pane_g2_ParamLimits

0x0f9f,	// (0x000327aa) list_single_graphic_pane_g2

0x0fab,	// (0x000327b6) list_single_graphic_pane_g3_ParamLimits

0x0fab,	// (0x000327b6) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00040da5) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00040da5) list_single_graphic_pane_g

0xb7a8,	// (0x0003cfb3) list_single_graphic_pane_t1_ParamLimits

0xb7a8,	// (0x0003cfb3) list_single_graphic_pane_t1

0x0f9f,	// (0x000327aa) list_single_heading_pane_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_single_heading_pane_g1

0x0fab,	// (0x000327b6) list_single_heading_pane_g2_ParamLimits

0x0fab,	// (0x000327b6) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00040dac) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00040dac) list_single_heading_pane_g

0x15d6,	// (0x00032de1) list_single_heading_pane_t1_ParamLimits

0x15d6,	// (0x00032de1) list_single_heading_pane_t1

0xb7be,	// (0x0003cfc9) list_single_heading_pane_t2_ParamLimits

0xb7be,	// (0x0003cfc9) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00040db1) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00040db1) list_single_heading_pane_t

0x0f9f,	// (0x000327aa) list_single_number_heading_pane_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_single_number_heading_pane_g1

0x0fab,	// (0x000327b6) list_single_number_heading_pane_g2_ParamLimits

0x0fab,	// (0x000327b6) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x00040dac) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x00040dac) list_single_number_heading_pane_g

0x15d6,	// (0x00032de1) list_single_number_heading_pane_t1_ParamLimits

0x15d6,	// (0x00032de1) list_single_number_heading_pane_t1

0xb7d0,	// (0x0003cfdb) list_single_number_heading_pane_t2_ParamLimits

0xb7d0,	// (0x0003cfdb) list_single_number_heading_pane_t2

0xb7e2,	// (0x0003cfed) list_single_number_heading_pane_t3_ParamLimits

0xb7e2,	// (0x0003cfed) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00040db6) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00040db6) list_single_number_heading_pane_t

0x0f10,	// (0x0003271b) list_single_graphic_heading_pane_g1_ParamLimits

0x0f10,	// (0x0003271b) list_single_graphic_heading_pane_g1

0xb7f4,	// (0x0003cfff) list_single_graphic_heading_pane_g4_ParamLimits

0xb7f4,	// (0x0003cfff) list_single_graphic_heading_pane_g4

0x0fab,	// (0x000327b6) list_single_graphic_heading_pane_g5_ParamLimits

0x0fab,	// (0x000327b6) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x00040dbd) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x00040dbd) list_single_graphic_heading_pane_g

0x15d6,	// (0x00032de1) list_single_graphic_heading_pane_t1_ParamLimits

0x15d6,	// (0x00032de1) list_single_graphic_heading_pane_t1

0xb805,	// (0x0003d010) list_single_graphic_heading_pane_t2_ParamLimits

0xb805,	// (0x0003d010) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00040dc4) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00040dc4) list_single_graphic_heading_pane_t

0x162a,	// (0x00032e35) list_single_large_graphic_pane_g1_ParamLimits

0x162a,	// (0x00032e35) list_single_large_graphic_pane_g1

0xe21b,	// (0x0003fa26) list_single_large_graphic_pane_g2_ParamLimits

0xe21b,	// (0x0003fa26) list_single_large_graphic_pane_g2

0xe227,	// (0x0003fa32) list_single_large_graphic_pane_g3_ParamLimits

0xe227,	// (0x0003fa32) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00040dc9) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00040dc9) list_single_large_graphic_pane_g

0x52f4,	// (0x00036aff) wait_border_pane_g2_copy1

0xb817,	// (0x0003d022) list_single_large_graphic_pane_g4_cp2

0x1636,	// (0x00032e41) list_single_large_graphic_pane_t1_ParamLimits

0x1636,	// (0x00032e41) list_single_large_graphic_pane_t1

0xb81f,	// (0x0003d02a) list_double_pane_g1_ParamLimits

0xb81f,	// (0x0003d02a) list_double_pane_g1

0xb82b,	// (0x0003d036) list_double_pane_g2_ParamLimits

0xb82b,	// (0x0003d036) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00040dd0) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00040dd0) list_double_pane_g

0xb837,	// (0x0003d042) list_double_pane_t1_ParamLimits

0xb837,	// (0x0003d042) list_double_pane_t1

0xb84d,	// (0x0003d058) list_double_pane_t2_ParamLimits

0xb84d,	// (0x0003d058) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00040dd5) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00040dd5) list_double_pane_t

0xb85f,	// (0x0003d06a) list_double2_pane_g1_ParamLimits

0xb85f,	// (0x0003d06a) list_double2_pane_g1

0xb870,	// (0x0003d07b) list_double2_pane_g2_ParamLimits

0xb870,	// (0x0003d07b) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x00040dda) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x00040dda) list_double2_pane_g

0xb87c,	// (0x0003d087) list_double2_pane_t1_ParamLimits

0xb87c,	// (0x0003d087) list_double2_pane_t1

0xb892,	// (0x0003d09d) list_double2_pane_t2_ParamLimits

0xb892,	// (0x0003d09d) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x00040ddf) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x00040ddf) list_double2_pane_t

0xb81f,	// (0x0003d02a) list_double_number_pane_g1_ParamLimits

0xb81f,	// (0x0003d02a) list_double_number_pane_g1

0xb82b,	// (0x0003d036) list_double_number_pane_g2_ParamLimits

0xb82b,	// (0x0003d036) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00040dd0) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00040dd0) list_double_number_pane_g

0xb8a4,	// (0x0003d0af) list_double_number_pane_t1_ParamLimits

0xb8a4,	// (0x0003d0af) list_double_number_pane_t1

0xb8b6,	// (0x0003d0c1) list_double_number_pane_t2_ParamLimits

0xb8b6,	// (0x0003d0c1) list_double_number_pane_t2

0xb8cc,	// (0x0003d0d7) list_double_number_pane_t3_ParamLimits

0xb8cc,	// (0x0003d0d7) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00040de4) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00040de4) list_double_number_pane_t

0xb8de,	// (0x0003d0e9) list_double_graphic_pane_g1_ParamLimits

0xb8de,	// (0x0003d0e9) list_double_graphic_pane_g1

0xb8ea,	// (0x0003d0f5) list_double_graphic_pane_g2_ParamLimits

0xb8ea,	// (0x0003d0f5) list_double_graphic_pane_g2

0xb8f9,	// (0x0003d104) list_double_graphic_pane_g3_ParamLimits

0xb8f9,	// (0x0003d104) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x00040deb) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x00040deb) list_double_graphic_pane_g

0xb911,	// (0x0003d11c) list_double_graphic_pane_t1_ParamLimits

0xb911,	// (0x0003d11c) list_double_graphic_pane_t1

0xb927,	// (0x0003d132) list_double_graphic_pane_t2_ParamLimits

0xb927,	// (0x0003d132) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x00040df4) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x00040df4) list_double_graphic_pane_t

0xb939,	// (0x0003d144) list_double2_graphic_pane_g1_ParamLimits

0xb939,	// (0x0003d144) list_double2_graphic_pane_g1

0xb945,	// (0x0003d150) list_double2_graphic_pane_g2_ParamLimits

0xb945,	// (0x0003d150) list_double2_graphic_pane_g2

0xb870,	// (0x0003d07b) list_double2_graphic_pane_g3_ParamLimits

0xb870,	// (0x0003d07b) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x00040df9) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x00040df9) list_double2_graphic_pane_g

0xb951,	// (0x0003d15c) list_double2_graphic_pane_t1_ParamLimits

0xb951,	// (0x0003d15c) list_double2_graphic_pane_t1

0xb967,	// (0x0003d172) list_double2_graphic_pane_t2_ParamLimits

0xb967,	// (0x0003d172) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x00040e00) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x00040e00) list_double2_graphic_pane_t

0xb979,	// (0x0003d184) list_double_large_graphic_pane_g1_ParamLimits

0xb979,	// (0x0003d184) list_double_large_graphic_pane_g1

0xb998,	// (0x0003d1a3) list_double_large_graphic_pane_g2_ParamLimits

0xb998,	// (0x0003d1a3) list_double_large_graphic_pane_g2

0xb82b,	// (0x0003d036) list_double_large_graphic_pane_g3_ParamLimits

0xb82b,	// (0x0003d036) list_double_large_graphic_pane_g3

0xb9a9,	// (0x0003d1b4) list_double_large_graphic_pane_g4_ParamLimits

0xb9a9,	// (0x0003d1b4) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x00040e05) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x00040e05) list_double_large_graphic_pane_g

0xb9bc,	// (0x0003d1c7) list_double_large_graphic_pane_t1_ParamLimits

0xb9bc,	// (0x0003d1c7) list_double_large_graphic_pane_t1

0xb9d5,	// (0x0003d1e0) list_double_large_graphic_pane_t2_ParamLimits

0xb9d5,	// (0x0003d1e0) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x00040e10) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x00040e10) list_double_large_graphic_pane_t

0xb9e7,	// (0x0003d1f2) list_double2_large_graphic_pane_g1_ParamLimits

0xb9e7,	// (0x0003d1f2) list_double2_large_graphic_pane_g1

0xb85f,	// (0x0003d06a) list_double2_large_graphic_pane_g2_ParamLimits

0xb85f,	// (0x0003d06a) list_double2_large_graphic_pane_g2

0xb870,	// (0x0003d07b) list_double2_large_graphic_pane_g3_ParamLimits

0xb870,	// (0x0003d07b) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x00040e15) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x00040e15) list_double2_large_graphic_pane_g

0xb9f3,	// (0x0003d1fe) list_double2_large_graphic_pane_t1_ParamLimits

0xb9f3,	// (0x0003d1fe) list_double2_large_graphic_pane_t1

0xba09,	// (0x0003d214) list_double2_large_graphic_pane_t2_ParamLimits

0xba09,	// (0x0003d214) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x00040e1c) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x00040e1c) list_double2_large_graphic_pane_t

0xba1b,	// (0x0003d226) list_double_heading_pane_g1_ParamLimits

0xba1b,	// (0x0003d226) list_double_heading_pane_g1

0xf449,	// (0x00040c54) list_double_heading_pane_g2_ParamLimits

0xf449,	// (0x00040c54) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x00040e21) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x00040e21) list_double_heading_pane_g

0xba2c,	// (0x0003d237) list_double_heading_pane_t1_ParamLimits

0xba2c,	// (0x0003d237) list_double_heading_pane_t1

0xb892,	// (0x0003d09d) list_double_heading_pane_t2_ParamLimits

0xb892,	// (0x0003d09d) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x00040e26) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x00040e26) list_double_heading_pane_t

0xb939,	// (0x0003d144) list_double_graphic_heading_pane_g1_ParamLimits

0xb939,	// (0x0003d144) list_double_graphic_heading_pane_g1

0xba1b,	// (0x0003d226) list_double_graphic_heading_pane_g2_ParamLimits

0xba1b,	// (0x0003d226) list_double_graphic_heading_pane_g2

0xf449,	// (0x00040c54) list_double_graphic_heading_pane_g3_ParamLimits

0xf449,	// (0x00040c54) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x00040e2b) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x00040e2b) list_double_graphic_heading_pane_g

0xba42,	// (0x0003d24d) list_double_graphic_heading_pane_t1_ParamLimits

0xba42,	// (0x0003d24d) list_double_graphic_heading_pane_t1

0xb967,	// (0x0003d172) list_double_graphic_heading_pane_t2_ParamLimits

0xb967,	// (0x0003d172) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x00040e32) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x00040e32) list_double_graphic_heading_pane_t

0xb998,	// (0x0003d1a3) list_double_time_pane_g1_ParamLimits

0xb998,	// (0x0003d1a3) list_double_time_pane_g1

0xb82b,	// (0x0003d036) list_double_time_pane_g2_ParamLimits

0xb82b,	// (0x0003d036) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x00040e37) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x00040e37) list_double_time_pane_g

0xba58,	// (0x0003d263) list_double_time_pane_t1_ParamLimits

0xba58,	// (0x0003d263) list_double_time_pane_t1

0xba6e,	// (0x0003d279) list_double_time_pane_t2_ParamLimits

0xba6e,	// (0x0003d279) list_double_time_pane_t2

0xba80,	// (0x0003d28b) list_double_time_pane_t3_ParamLimits

0xba80,	// (0x0003d28b) list_double_time_pane_t3

0xba92,	// (0x0003d29d) list_double_time_pane_t4_ParamLimits

0xba92,	// (0x0003d29d) list_double_time_pane_t4

0x0003,

0xf631,	// (0x00040e3c) list_double_time_pane_t_ParamLimits

0xf631,	// (0x00040e3c) list_double_time_pane_t

0xb945,	// (0x0003d150) list_setting_pane_g1_ParamLimits

0xb945,	// (0x0003d150) list_setting_pane_g1

0xb870,	// (0x0003d07b) list_setting_pane_g2_ParamLimits

0xb870,	// (0x0003d07b) list_setting_pane_g2

0x0001,

0xf63a,	// (0x00040e45) list_setting_pane_g_ParamLimits

0xf63a,	// (0x00040e45) list_setting_pane_g

0xbaa4,	// (0x0003d2af) list_setting_pane_t1_ParamLimits

0xbaa4,	// (0x0003d2af) list_setting_pane_t1

0xbabe,	// (0x0003d2c9) list_setting_pane_t2_ParamLimits

0xbabe,	// (0x0003d2c9) list_setting_pane_t2

0x0002,

0xf63f,	// (0x00040e4a) list_setting_pane_t_ParamLimits

0xf63f,	// (0x00040e4a) list_setting_pane_t

0xbafd,	// (0x0003d308) set_value_pane_cp_ParamLimits

0xbafd,	// (0x0003d308) set_value_pane_cp

0xbb09,	// (0x0003d314) list_setting_number_pane_g1_ParamLimits

0xbb09,	// (0x0003d314) list_setting_number_pane_g1

0xbb15,	// (0x0003d320) list_setting_number_pane_g2_ParamLimits

0xbb15,	// (0x0003d320) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x00040e51) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x00040e51) list_setting_number_pane_g

0xbb21,	// (0x0003d32c) list_setting_number_pane_t1_ParamLimits

0xbb21,	// (0x0003d32c) list_setting_number_pane_t1

0xbb3a,	// (0x0003d345) list_setting_number_pane_t2_ParamLimits

0xbb3a,	// (0x0003d345) list_setting_number_pane_t2

0xbb54,	// (0x0003d35f) list_setting_number_pane_t3_ParamLimits

0xbb54,	// (0x0003d35f) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x00040e56) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x00040e56) list_setting_number_pane_t

0xbafd,	// (0x0003d308) set_value_pane_ParamLimits

0xbafd,	// (0x0003d308) set_value_pane

0x3587,	// (0x00034d92) bg_set_opt_pane_ParamLimits

0x3587,	// (0x00034d92) bg_set_opt_pane

0xf455,	// (0x00040c60) set_value_pane_t1

0x35a8,	// (0x00034db3) slider_set_pane_cp3

0x35b1,	// (0x00034dbc) volume_small_pane_cp

0x35ba,	// (0x00034dc5) list_form_gen_pane

0x35c3,	// (0x00034dce) scroll_pane_cp8

0xbb97,	// (0x0003d3a2) form_field_data_pane_ParamLimits

0xbb97,	// (0x0003d3a2) form_field_data_pane

0xbbae,	// (0x0003d3b9) form_field_data_wide_pane_ParamLimits

0xbbae,	// (0x0003d3b9) form_field_data_wide_pane

0xbbce,	// (0x0003d3d9) form_field_popup_pane_ParamLimits

0xbbce,	// (0x0003d3d9) form_field_popup_pane

0xbbee,	// (0x0003d3f9) form_field_popup_wide_pane_ParamLimits

0xbbee,	// (0x0003d3f9) form_field_popup_wide_pane

0x00bb,	// (0x000318c6) form_field_slider_pane_ParamLimits

0x00bb,	// (0x000318c6) form_field_slider_pane

0x00ce,	// (0x000318d9) form_field_slider_wide_pane_ParamLimits

0x00ce,	// (0x000318d9) form_field_slider_wide_pane

0x35d4,	// (0x00034ddf) data_form_pane

0xbc0f,	// (0x0003d41a) form_field_data_pane_t1

0x35e0,	// (0x00034deb) input_focus_pane

0x0103,	// (0x0003190e) data_form_wide_pane

0x0120,	// (0x0003192b) form_field_data_wide_pane_t1

0x3351,	// (0x00034b5c) input_focus_pane_cp6

0xbc29,	// (0x0003d434) form_field_popup_pane_t1

0x35e0,	// (0x00034deb) input_focus_pane_cp7

0x360e,	// (0x00034e19) list_form_pane

0x0162,	// (0x0003196d) form_field_popup_wide_pane_t1

0x35e0,	// (0x00034deb) input_focus_pane_cp8

0x361a,	// (0x00034e25) list_form_wide_pane

0xbc4b,	// (0x0003d456) form_field_slider_pane_t1_ParamLimits

0xbc4b,	// (0x0003d456) form_field_slider_pane_t1

0xbc63,	// (0x0003d46e) form_field_slider_pane_t2_ParamLimits

0xbc63,	// (0x0003d46e) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x00040e66) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x00040e66) form_field_slider_pane_t

0x2fce,	// (0x000347d9) input_focus_pane_cp9_ParamLimits

0x2fce,	// (0x000347d9) input_focus_pane_cp9

0xbc78,	// (0x0003d483) slider_cont_pane_ParamLimits

0xbc78,	// (0x0003d483) slider_cont_pane

0x3626,	// (0x00034e31) form_field_slider_wide_pane_t1_ParamLimits

0x3626,	// (0x00034e31) form_field_slider_wide_pane_t1

0x01be,	// (0x000319c9) form_field_slider_wide_pane_t2_ParamLimits

0x01be,	// (0x000319c9) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x00040e6b) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x00040e6b) form_field_slider_wide_pane_t

0x2fce,	// (0x000347d9) input_focus_pane_cp10_ParamLimits

0x2fce,	// (0x000347d9) input_focus_pane_cp10

0xbc8c,	// (0x0003d497) slider_cont_pane_cp1_ParamLimits

0xbc8c,	// (0x0003d497) slider_cont_pane_cp1

0xbca0,	// (0x0003d4ab) slider_form_pane_cp

0x3638,	// (0x00034e43) input_focus_pane_g1

0x3640,	// (0x00034e4b) input_focus_pane_g2

0x3648,	// (0x00034e53) input_focus_pane_g3

0x3650,	// (0x00034e5b) input_focus_pane_g4

0x3658,	// (0x00034e63) input_focus_pane_g5

0x3660,	// (0x00034e6b) input_focus_pane_g6

0x3668,	// (0x00034e73) input_focus_pane_g7

0x3670,	// (0x00034e7b) input_focus_pane_g8

0x3678,	// (0x00034e83) input_focus_pane_g9

0xe1ec,	// (0x0003f9f7) input_focus_pane_g10

0x0009,

0xf665,	// (0x00040e70) input_focus_pane_g

0x52fd,	// (0x00036b08) wait_border_pane_g3_copy1

0xbca8,	// (0x0003d4b3) data_form_pane_t1

0xe1ec,	// (0x0003f9f7) wait_anim_pane_g1_copy1

0xc828,	// (0x0003e033) data_form_wide_pane_t1

0xbcc2,	// (0x0003d4cd) list_form_graphic_pane_cp_ParamLimits

0xbcc2,	// (0x0003d4cd) list_form_graphic_pane_cp

0x620d,	// (0x00037a18) slider_form_pane_g1

0x6216,	// (0x00037a21) slider_form_pane_g2

0x0006,

0xf963,	// (0x0004116e) slider_form_pane_g

0xbcd4,	// (0x0003d4df) list_form_graphic_pane_ParamLimits

0xbcd4,	// (0x0003d4df) list_form_graphic_pane

0x023c,	// (0x00031a47) list_form_graphic_pane_g1

0x0244,	// (0x00031a4f) list_form_graphic_pane_t1_ParamLimits

0x0244,	// (0x00031a4f) list_form_graphic_pane_t1

0x2d53,	// (0x0003455e) list_highlight_pane_cp5_ParamLimits

0x2d53,	// (0x0003455e) list_highlight_pane_cp5

0xbce7,	// (0x0003d4f2) find_pane_g1

0x3680,	// (0x00034e8b) input_find_pane

0xbcf0,	// (0x0003d4fb) input_find_pane_g1_ParamLimits

0xbcf0,	// (0x0003d4fb) input_find_pane_g1

0xbcfc,	// (0x0003d507) input_find_pane_t1_ParamLimits

0xbcfc,	// (0x0003d507) input_find_pane_t1

0xbd11,	// (0x0003d51c) input_find_pane_t2_ParamLimits

0xbd11,	// (0x0003d51c) input_find_pane_t2

0x0001,

0xf67a,	// (0x00040e85) input_find_pane_t_ParamLimits

0xf67a,	// (0x00040e85) input_find_pane_t

0x3689,	// (0x00034e94) input_focus_pane_cp5_ParamLimits

0x3689,	// (0x00034e94) input_focus_pane_cp5

0x36a8,	// (0x00034eb3) bg_popup_window_pane_cp2_ParamLimits

0x36a8,	// (0x00034eb3) bg_popup_window_pane_cp2

0x36b5,	// (0x00034ec0) listscroll_menu_pane_ParamLimits

0x36b5,	// (0x00034ec0) listscroll_menu_pane

0xbd32,	// (0x0003d53d) popup_submenu_window_ParamLimits

0xbd32,	// (0x0003d53d) popup_submenu_window

0x36ed,	// (0x00034ef8) find_popup_pane_g1

0x36f5,	// (0x00034f00) input_popup_find_pane_cp

0x36ff,	// (0x00034f0a) input_focus_pane_cp4_ParamLimits

0x36ff,	// (0x00034f0a) input_focus_pane_cp4

0x3719,	// (0x00034f24) input_popup_find_pane_t1_ParamLimits

0x3719,	// (0x00034f24) input_popup_find_pane_t1

0xe1f6,	// (0x0003fa01) bg_popup_sub_pane_cp

0x3747,	// (0x00034f52) listscroll_popup_sub_pane

0x374f,	// (0x00034f5a) list_submenu_pane_ParamLimits

0x374f,	// (0x00034f5a) list_submenu_pane

0x3760,	// (0x00034f6b) scroll_pane_cp4

0x3768,	// (0x00034f73) list_single_popup_submenu_pane_ParamLimits

0x3768,	// (0x00034f73) list_single_popup_submenu_pane

0x377c,	// (0x00034f87) list_single_popup_submenu_pane_g1

0x3784,	// (0x00034f8f) list_single_popup_submenu_pane_t1_ParamLimits

0x3784,	// (0x00034f8f) list_single_popup_submenu_pane_t1

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp1_ParamLimits

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp1

0x3799,	// (0x00034fa4) tabs_2_active_pane_g1

0xbd6c,	// (0x0003d577) tabs_2_active_pane_t1

0x2fce,	// (0x000347d9) bg_passive_tab_pane_cp1_ParamLimits

0x2fce,	// (0x000347d9) bg_passive_tab_pane_cp1

0x3799,	// (0x00034fa4) tabs_2_passive_pane_g1

0xbd6c,	// (0x0003d577) tabs_2_passive_pane_t1

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp4

0xbd7e,	// (0x0003d589) tabs_2_long_active_pane_t1

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp4

0x0f77,	// (0x00032782) list_single_midp_graphic_pane_g4_ParamLimits

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp5

0xbd91,	// (0x0003d59c) tabs_3_long_active_pane_t1

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp5

0x0f77,	// (0x00032782) list_single_midp_graphic_pane_g4

0x2d53,	// (0x0003455e) bg_popup_window_pane_cp13_ParamLimits

0x2d53,	// (0x0003455e) bg_popup_window_pane_cp13

0x37fb,	// (0x00035006) listscroll_popup_fast_pane_ParamLimits

0x37fb,	// (0x00035006) listscroll_popup_fast_pane

0x380a,	// (0x00035015) grid_popup_fast_pane_ParamLimits

0x380a,	// (0x00035015) grid_popup_fast_pane

0x381c,	// (0x00035027) scroll_pane_cp9_ParamLimits

0x381c,	// (0x00035027) scroll_pane_cp9

0x7b54,	// (0x0003935f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7b54,	// (0x0003935f) list_single_graphic_hl_pane_t1_cp2

0x3840,	// (0x0003504b) input_focus_pane_cp20_ParamLimits

0x3840,	// (0x0003504b) input_focus_pane_cp20

0x384e,	// (0x00035059) query_popup_data_pane_t1_ParamLimits

0x384e,	// (0x00035059) query_popup_data_pane_t1

0x3861,	// (0x0003506c) query_popup_data_pane_t2_ParamLimits

0x3861,	// (0x0003506c) query_popup_data_pane_t2

0x38a7,	// (0x000350b2) query_popup_data_pane_t3_ParamLimits

0x38a7,	// (0x000350b2) query_popup_data_pane_t3

0x38e8,	// (0x000350f3) query_popup_data_pane_t4_ParamLimits

0x38e8,	// (0x000350f3) query_popup_data_pane_t4

0x3924,	// (0x0003512f) query_popup_data_pane_t5_ParamLimits

0x3924,	// (0x0003512f) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x00040e8a) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x00040e8a) query_popup_data_pane_t

0x3638,	// (0x00034e43) bg_set_opt_pane_g1

0x3640,	// (0x00034e4b) bg_set_opt_pane_g2

0x3648,	// (0x00034e53) bg_set_opt_pane_g3

0x3650,	// (0x00034e5b) bg_set_opt_pane_g4

0x3658,	// (0x00034e63) bg_set_opt_pane_g5

0x3660,	// (0x00034e6b) bg_set_opt_pane_g6

0x3668,	// (0x00034e73) bg_set_opt_pane_g7

0x3670,	// (0x00034e7b) bg_set_opt_pane_g8

0x3678,	// (0x00034e83) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x00040e95) bg_set_opt_pane_g

0x05bf,	// (0x00031dca) control_top_pane_stacon_ParamLimits

0x05bf,	// (0x00031dca) control_top_pane_stacon

0x0612,	// (0x00031e1d) signal_pane_stacon_ParamLimits

0x0612,	// (0x00031e1d) signal_pane_stacon

0x4113,	// (0x0003591e) stacon_top_pane_g1_ParamLimits

0x4113,	// (0x0003591e) stacon_top_pane_g1

0x0637,	// (0x00031e42) title_pane_stacon_ParamLimits

0x0637,	// (0x00031e42) title_pane_stacon

0x0661,	// (0x00031e6c) uni_indicator_pane_stacon_ParamLimits

0x0661,	// (0x00031e6c) uni_indicator_pane_stacon

0x0676,	// (0x00031e81) battery_pane_stacon_ParamLimits

0x0676,	// (0x00031e81) battery_pane_stacon

0x06ba,	// (0x00031ec5) control_bottom_pane_stacon_ParamLimits

0x06ba,	// (0x00031ec5) control_bottom_pane_stacon

0x06dd,	// (0x00031ee8) navi_pane_stacon_ParamLimits

0x06dd,	// (0x00031ee8) navi_pane_stacon

0x4135,	// (0x00035940) stacon_bottom_pane_g1_ParamLimits

0x4135,	// (0x00035940) stacon_bottom_pane_g1

0x0298,	// (0x00031aa3) aid_levels_signal_lsc_ParamLimits

0x0298,	// (0x00031aa3) aid_levels_signal_lsc

0x02ae,	// (0x00031ab9) signal_pane_stacon_g1_ParamLimits

0x02ae,	// (0x00031ab9) signal_pane_stacon_g1

0x02c2,	// (0x00031acd) signal_pane_stacon_g2_ParamLimits

0x02c2,	// (0x00031acd) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x00040ea8) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x00040ea8) signal_pane_stacon_g

0x02f7,	// (0x00031b02) title_pane_stacon_t1_ParamLimits

0x02f7,	// (0x00031b02) title_pane_stacon_t1

0x3968,	// (0x00035173) uni_indicator_pane_stacon_g1

0x3972,	// (0x0003517d) uni_indicator_pane_stacon_g2

0x397c,	// (0x00035187) uni_indicator_pane_stacon_g3

0x3986,	// (0x00035191) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x00040eb4) uni_indicator_pane_stacon_g

0x031c,	// (0x00031b27) control_top_pane_stacon_g1

0x0324,	// (0x00031b2f) control_top_pane_stacon_t1_ParamLimits

0x0324,	// (0x00031b2f) control_top_pane_stacon_t1

0x035b,	// (0x00031b66) aid_levels_battery_lsc_ParamLimits

0x035b,	// (0x00031b66) aid_levels_battery_lsc

0x0372,	// (0x00031b7d) battery_pane_stacon_g1_ParamLimits

0x0372,	// (0x00031b7d) battery_pane_stacon_g1

0x0385,	// (0x00031b90) battery_pane_stacon_g2_ParamLimits

0x0385,	// (0x00031b90) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x00040ebd) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x00040ebd) battery_pane_stacon_g

0x03c3,	// (0x00031bce) navi_icon_pane_stacon

0x03d7,	// (0x00031be2) navi_navi_pane_stacon

0x03c3,	// (0x00031bce) navi_text_pane_stacon

0x031c,	// (0x00031b27) control_bottom_pane_stacon_g1

0x03eb,	// (0x00031bf6) control_bottom_pane_stacon_t1_ParamLimits

0x03eb,	// (0x00031bf6) control_bottom_pane_stacon_t1

0xbda3,	// (0x0003d5ae) grid_app_pane_ParamLimits

0xbda3,	// (0x0003d5ae) grid_app_pane

0xbddb,	// (0x0003d5e6) scroll_pane_cp15_ParamLimits

0xbddb,	// (0x0003d5e6) scroll_pane_cp15

0xbdf0,	// (0x0003d5fb) cell_app_pane_ParamLimits

0xbdf0,	// (0x0003d5fb) cell_app_pane

0xbe35,	// (0x0003d640) cell_app_pane_g1_ParamLimits

0xbe35,	// (0x0003d640) cell_app_pane_g1

0x3c0f,	// (0x0003541a) cell_app_pane_g2_ParamLimits

0x3c0f,	// (0x0003541a) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x00040ec2) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x00040ec2) cell_app_pane_g

0xbe59,	// (0x0003d664) cell_app_pane_t1_ParamLimits

0xbe59,	// (0x0003d664) cell_app_pane_t1

0x3c32,	// (0x0003543d) grid_highlight_pane_ParamLimits

0x3c32,	// (0x0003543d) grid_highlight_pane

0x3638,	// (0x00034e43) cell_highlight_pane_g1

0x3640,	// (0x00034e4b) cell_highlight_pane_g2

0x3648,	// (0x00034e53) cell_highlight_pane_g3

0x3650,	// (0x00034e5b) cell_highlight_pane_g4

0x3658,	// (0x00034e63) cell_highlight_pane_g5

0x3660,	// (0x00034e6b) cell_highlight_pane_g6

0x3668,	// (0x00034e73) cell_highlight_pane_g7

0x3670,	// (0x00034e7b) cell_highlight_pane_g8

0x3678,	// (0x00034e83) cell_highlight_pane_g9

0xe1ec,	// (0x0003f9f7) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x00040e70) cell_highlight_pane_g

0x3c43,	// (0x0003544e) bg_scroll_pane

0x0435,	// (0x00031c40) scroll_handle_pane

0x3c8a,	// (0x00035495) scroll_bg_pane_g1

0x3c9f,	// (0x000354aa) scroll_bg_pane_g2

0x3cb7,	// (0x000354c2) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x00040ec7) scroll_bg_pane_g

0x3ccc,	// (0x000354d7) scroll_handle_focus_pane_ParamLimits

0x3ccc,	// (0x000354d7) scroll_handle_focus_pane

0x3c8a,	// (0x00035495) scroll_handle_pane_g1

0x3cd9,	// (0x000354e4) scroll_handle_pane_g2

0x3cb7,	// (0x000354c2) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x00040ece) scroll_handle_pane_g

0x36ff,	// (0x00034f0a) bg_popup_sub_pane_cp21_ParamLimits

0x36ff,	// (0x00034f0a) bg_popup_sub_pane_cp21

0x3ced,	// (0x000354f8) popup_fep_japan_predictive_window_t1_ParamLimits

0x3ced,	// (0x000354f8) popup_fep_japan_predictive_window_t1

0x3d07,	// (0x00035512) popup_fep_japan_predictive_window_t2_ParamLimits

0x3d07,	// (0x00035512) popup_fep_japan_predictive_window_t2

0x3d3a,	// (0x00035545) popup_fep_japan_predictive_window_t3_ParamLimits

0x3d3a,	// (0x00035545) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x00040ed5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x00040ed5) popup_fep_japan_predictive_window_t

0xe1f6,	// (0x0003fa01) bg_popup_sub_pane_cp23

0x3d71,	// (0x0003557c) listscroll_japin_cand_pane

0x3d79,	// (0x00035584) popup_fep_japan_candidate_window_t1

0x3d87,	// (0x00035592) candidate_pane_ParamLimits

0x3d87,	// (0x00035592) candidate_pane

0x3d99,	// (0x000355a4) scroll_pane_cp30

0x3da1,	// (0x000355ac) list_single_popup_jap_candidate_pane_ParamLimits

0x3da1,	// (0x000355ac) list_single_popup_jap_candidate_pane

0xe1f6,	// (0x0003fa01) list_highlight_pane_cp30

0x3db6,	// (0x000355c1) list_single_popup_jap_candidate_pane_t1

0x3dc5,	// (0x000355d0) level_1_signal

0x3dd7,	// (0x000355e2) level_2_signal

0x3dea,	// (0x000355f5) level_3_signal

0x3dfd,	// (0x00035608) level_4_signal

0x3e10,	// (0x0003561b) level_5_signal

0x3e23,	// (0x0003562e) level_6_signal

0x3e36,	// (0x00035641) level_7_signal

0x3dc5,	// (0x000355d0) level_1_battery

0x3dd7,	// (0x000355e2) level_2_battery

0x3dea,	// (0x000355f5) level_3_battery

0x3dfd,	// (0x00035608) level_4_battery

0x3e10,	// (0x0003561b) level_5_battery

0x3e23,	// (0x0003562e) level_6_battery

0x3e36,	// (0x00035641) level_7_battery

0x3e61,	// (0x0003566c) list_menu_pane_ParamLimits

0x3e61,	// (0x0003566c) list_menu_pane

0x3e77,	// (0x00035682) scroll_pane_cp25_ParamLimits

0x3e77,	// (0x00035682) scroll_pane_cp25

0x3e90,	// (0x0003569b) list_double2_graphic_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double2_graphic_pane_cp2

0x3e90,	// (0x0003569b) list_double2_large_graphic_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double2_large_graphic_pane_cp2

0x3e90,	// (0x0003569b) list_double2_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double2_pane_cp2

0x3e90,	// (0x0003569b) list_double_graphic_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double_graphic_pane_cp2

0x3e90,	// (0x0003569b) list_double_large_graphic_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double_large_graphic_pane_cp2

0x3e90,	// (0x0003569b) list_double_number_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double_number_pane_cp2

0x3e90,	// (0x0003569b) list_double_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double_pane_cp2

0xbe70,	// (0x0003d67b) list_single_2graphic_pane_cp2_ParamLimits

0xbe70,	// (0x0003d67b) list_single_2graphic_pane_cp2

0xbe70,	// (0x0003d67b) list_single_graphic_heading_pane_cp2_ParamLimits

0xbe70,	// (0x0003d67b) list_single_graphic_heading_pane_cp2

0xbe70,	// (0x0003d67b) list_single_graphic_pane_cp2_ParamLimits

0xbe70,	// (0x0003d67b) list_single_graphic_pane_cp2

0xbe70,	// (0x0003d67b) list_single_heading_pane_cp2_ParamLimits

0xbe70,	// (0x0003d67b) list_single_heading_pane_cp2

0x3ecd,	// (0x000356d8) list_single_large_graphic_pane_cp2_ParamLimits

0x3ecd,	// (0x000356d8) list_single_large_graphic_pane_cp2

0xbe70,	// (0x0003d67b) list_single_number_heading_pane_cp2_ParamLimits

0xbe70,	// (0x0003d67b) list_single_number_heading_pane_cp2

0xbe70,	// (0x0003d67b) list_single_number_pane_cp2_ParamLimits

0xbe70,	// (0x0003d67b) list_single_number_pane_cp2

0xbe82,	// (0x0003d68d) list_single_pane_cp2_ParamLimits

0xbe82,	// (0x0003d68d) list_single_pane_cp2

0x3f62,	// (0x0003576d) bg_popup_sub_pane_cp22

0x04e7,	// (0x00031cf2) popup_side_volume_key_window_g1

0x0511,	// (0x00031d1c) popup_side_volume_key_window_t1

0x052d,	// (0x00031d38) volume_small_pane_cp1

0x2fce,	// (0x000347d9) bg_popup_sub_pane_cp24_ParamLimits

0x2fce,	// (0x000347d9) bg_popup_sub_pane_cp24

0x3f78,	// (0x00035783) fep_china_uni_candidate_pane_ParamLimits

0x3f78,	// (0x00035783) fep_china_uni_candidate_pane

0x3f8c,	// (0x00035797) fep_china_uni_entry_pane

0x3f9c,	// (0x000357a7) popup_fep_china_uni_window_g1

0x3fb8,	// (0x000357c3) fep_china_uni_entry_pane_g1

0x3fc0,	// (0x000357cb) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x00040f06) fep_china_uni_entry_pane_g

0x3fc8,	// (0x000357d3) fep_entry_item_pane

0x3fd2,	// (0x000357dd) fep_candidate_item_pane

0x3fda,	// (0x000357e5) fep_china_uni_candidate_pane_g1

0x3fe2,	// (0x000357ed) fep_china_uni_candidate_pane_g2

0x3fea,	// (0x000357f5) fep_china_uni_candidate_pane_g3

0x3ff2,	// (0x000357fd) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x00040f0b) fep_china_uni_candidate_pane_g

0xe1ec,	// (0x0003f9f7) fep_entry_item_pane_g1

0x3ffa,	// (0x00035805) fep_entry_item_pane_t1_ParamLimits

0x3ffa,	// (0x00035805) fep_entry_item_pane_t1

0x4010,	// (0x0003581b) fep_candidate_item_pane_t1_ParamLimits

0x4010,	// (0x0003581b) fep_candidate_item_pane_t1

0x4025,	// (0x00035830) fep_candidate_item_pane_t2_ParamLimits

0x4025,	// (0x00035830) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x00040f14) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x00040f14) fep_candidate_item_pane_t

0x2d53,	// (0x0003455e) list_highlight_pane_cp31_ParamLimits

0x2d53,	// (0x0003455e) list_highlight_pane_cp31

0x4037,	// (0x00035842) level_1_signal_lsc

0x4040,	// (0x0003584b) level_2_signal_lsc

0x4049,	// (0x00035854) level_3_signal_lsc

0x4052,	// (0x0003585d) level_4_signal_lsc

0x405b,	// (0x00035866) level_5_signal_lsc

0x4064,	// (0x0003586f) level_6_signal_lsc

0x406d,	// (0x00035878) level_7_signal_lsc

0x406d,	// (0x00035878) level_1_battery_lsc

0x4076,	// (0x00035881) level_2_battery_lsc

0x407f,	// (0x0003588a) level_3_battery_lsc

0x4088,	// (0x00035893) level_4_battery_lsc

0x4091,	// (0x0003589c) level_5_battery_lsc

0x409a,	// (0x000358a5) level_6_battery_lsc

0x4037,	// (0x00035842) level_7_battery_lsc

0x40a3,	// (0x000358ae) scroll_handle_focus_pane_g1

0x40ac,	// (0x000358b7) scroll_handle_focus_pane_g2

0x40b5,	// (0x000358c0) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x00040f19) scroll_handle_focus_pane_g

0xbec7,	// (0x0003d6d2) list_single_2graphic_pane_g1_ParamLimits

0xbec7,	// (0x0003d6d2) list_single_2graphic_pane_g1

0xb7f4,	// (0x0003cfff) list_single_2graphic_pane_g2_ParamLimits

0xb7f4,	// (0x0003cfff) list_single_2graphic_pane_g2

0x0fab,	// (0x000327b6) list_single_2graphic_pane_g3_ParamLimits

0x0fab,	// (0x000327b6) list_single_2graphic_pane_g3

0xbed3,	// (0x0003d6de) list_single_2graphic_pane_g4_ParamLimits

0xbed3,	// (0x0003d6de) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x00040f20) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x00040f20) list_single_2graphic_pane_g

0xbee4,	// (0x0003d6ef) list_single_2graphic_pane_t1_ParamLimits

0xbee4,	// (0x0003d6ef) list_single_2graphic_pane_t1

0xbf12,	// (0x0003d71d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf12,	// (0x0003d71d) list_double2_graphic_large_graphic_pane_g1

0xb85f,	// (0x0003d06a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb85f,	// (0x0003d06a) list_double2_graphic_large_graphic_pane_g2

0xb870,	// (0x0003d07b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb870,	// (0x0003d07b) list_double2_graphic_large_graphic_pane_g3

0xbf24,	// (0x0003d72f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf24,	// (0x0003d72f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x00040f29) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x00040f29) list_double2_graphic_large_graphic_pane_g

0xbf30,	// (0x0003d73b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf30,	// (0x0003d73b) list_double2_graphic_large_graphic_pane_t1

0xbf46,	// (0x0003d751) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf46,	// (0x0003d751) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x00040f32) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x00040f32) list_double2_graphic_large_graphic_pane_t

0x4200,	// (0x00035a0b) popup_fast_swap_window_ParamLimits

0x4200,	// (0x00035a0b) popup_fast_swap_window

0x421c,	// (0x00035a27) popup_side_volume_key_window

0x4238,	// (0x00035a43) stacon_top_pane

0x4242,	// (0x00035a4d) status_pane_ParamLimits

0x4242,	// (0x00035a4d) status_pane

0xe1e2,	// (0x0003f9ed) status_small_pane

0xe1f6,	// (0x0003fa01) control_pane

0xe1f6,	// (0x0003fa01) stacon_bottom_pane

0x35c3,	// (0x00034dce) scroll_pane_cp121

0x35ba,	// (0x00034dc5) set_content_pane

0x40be,	// (0x000358c9) bg_active_tab_pane_g1_cp1

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp1

0x40d0,	// (0x000358db) bg_active_tab_pane_g3_cp1

0x40be,	// (0x000358c9) bg_passive_tab_pane_g1_cp1

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp1

0x40d0,	// (0x000358db) bg_passive_tab_pane_g3_cp1

0x40d9,	// (0x000358e4) bg_active_tab_pane_g1_cp2

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp2

0x40e2,	// (0x000358ed) bg_active_tab_pane_g3_cp2

0x40d9,	// (0x000358e4) bg_passive_tab_pane_g1_cp2

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp2

0x40e2,	// (0x000358ed) bg_passive_tab_pane_g3_cp2

0x40eb,	// (0x000358f6) bg_active_tab_pane_g1_cp3

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp3

0x40f4,	// (0x000358ff) bg_active_tab_pane_g3_cp3

0x40eb,	// (0x000358f6) bg_passive_tab_pane_g1_cp3

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp3

0x40f4,	// (0x000358ff) bg_passive_tab_pane_g3_cp3

0x40fd,	// (0x00035908) bg_active_tab_pane_g1_cp4

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp4

0x4108,	// (0x00035913) bg_active_tab_pane_g3_cp4

0x40fd,	// (0x00035908) bg_passive_tab_pane_g1_cp4

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp4

0x4108,	// (0x00035913) bg_passive_tab_pane_g3_cp4

0x4151,	// (0x0003595c) bg_active_tab_pane_g1_cp5

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp5

0x415a,	// (0x00035965) bg_active_tab_pane_g3_cp5

0x4151,	// (0x0003595c) bg_passive_tab_pane_g1_cp5

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp5

0x415a,	// (0x00035965) bg_passive_tab_pane_g3_cp5

0x6824,	// (0x0003802f) list_set_graphic_pane_ParamLimits

0x6824,	// (0x0003802f) list_set_graphic_pane

0xe1f6,	// (0x0003fa01) bg_set_opt_pane_cp4

0x4183,	// (0x0003598e) list_set_graphic_pane_g1_ParamLimits

0x4183,	// (0x0003598e) list_set_graphic_pane_g1

0x418f,	// (0x0003599a) list_set_graphic_pane_g2_ParamLimits

0x418f,	// (0x0003599a) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x00040f37) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x00040f37) list_set_graphic_pane_g

0x0009,

0xfaa8,	// (0x000412b3) volume_small_pane_cp_g

0x41b3,	// (0x000359be) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x41b3,	// (0x000359be) list_double2_large_graphic_pane_g1_cp2

0x41bf,	// (0x000359ca) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x41bf,	// (0x000359ca) list_double2_large_graphic_pane_g2_cp2

0x41d0,	// (0x000359db) list_double2_large_graphic_pane_g3_cp2

0x41d8,	// (0x000359e3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x41d8,	// (0x000359e3) list_double2_large_graphic_pane_t1_cp2

0x41ee,	// (0x000359f9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x41ee,	// (0x000359f9) list_double2_large_graphic_pane_t2_cp2

0x5dd0,	// (0x000375db) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5dd0,	// (0x000375db) list_double_large_graphic_pane_g1_cp2

0x5de1,	// (0x000375ec) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5de1,	// (0x000375ec) list_double_large_graphic_pane_g2_cp2

0x435e,	// (0x00035b69) list_double_large_graphic_pane_g3_cp2

0x5df2,	// (0x000375fd) list_double_large_graphic_pane_g4_cp

0x5dfa,	// (0x00037605) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5dfa,	// (0x00037605) list_double_large_graphic_pane_t1_cp2

0x5e11,	// (0x0003761c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e11,	// (0x0003761c) list_double_large_graphic_pane_t2_cp2

0x4250,	// (0x00035a5b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4250,	// (0x00035a5b) list_double2_graphic_pane_g1_cp2

0x425e,	// (0x00035a69) list_double2_graphic_pane_g2_cp2_ParamLimits

0x425e,	// (0x00035a69) list_double2_graphic_pane_g2_cp2

0x426f,	// (0x00035a7a) list_double2_graphic_pane_g3_cp2

0x4279,	// (0x00035a84) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4279,	// (0x00035a84) list_double2_graphic_pane_t1_cp2

0x428f,	// (0x00035a9a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x428f,	// (0x00035a9a) list_double2_graphic_pane_t2_cp2

0x42a1,	// (0x00035aac) list_single_number_heading_pane_g1_cp2_ParamLimits

0x42a1,	// (0x00035aac) list_single_number_heading_pane_g1_cp2

0x42ad,	// (0x00035ab8) list_single_number_heading_pane_g2_cp2

0x42b5,	// (0x00035ac0) list_single_number_heading_pane_t1_cp2_ParamLimits

0x42b5,	// (0x00035ac0) list_single_number_heading_pane_t1_cp2

0x42cb,	// (0x00035ad6) list_single_number_heading_pane_t2_cp2_ParamLimits

0x42cb,	// (0x00035ad6) list_single_number_heading_pane_t2_cp2

0x42dd,	// (0x00035ae8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x42dd,	// (0x00035ae8) list_single_number_heading_pane_t3_cp2

0x42a1,	// (0x00035aac) list_single_heading_pane_g1_cp2_ParamLimits

0x42a1,	// (0x00035aac) list_single_heading_pane_g1_cp2

0x42ad,	// (0x00035ab8) list_single_heading_pane_g2_cp2

0x42b5,	// (0x00035ac0) list_single_heading_pane_t1_cp2_ParamLimits

0x42b5,	// (0x00035ac0) list_single_heading_pane_t1_cp2

0x5bd8,	// (0x000373e3) list_single_heading_pane_t2_cp2_ParamLimits

0x5bd8,	// (0x000373e3) list_single_heading_pane_t2_cp2

0x5b20,	// (0x0003732b) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b20,	// (0x0003732b) list_double_graphic_pane_g1_cp2

0x5b2c,	// (0x00037337) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b2c,	// (0x00037337) list_double_graphic_pane_g2_cp2

0x5b3b,	// (0x00037346) list_double_graphic_pane_g3_cp2

0x5b43,	// (0x0003734e) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b43,	// (0x0003734e) list_double_graphic_pane_t1_cp2

0x5b59,	// (0x00037364) list_double_graphic_pane_t2_cp2_ParamLimits

0x5b59,	// (0x00037364) list_double_graphic_pane_t2_cp2

0x4352,	// (0x00035b5d) list_double_number_pane_g1_cp2_ParamLimits

0x4352,	// (0x00035b5d) list_double_number_pane_g1_cp2

0x435e,	// (0x00035b69) list_double_number_pane_g2_cp2

0x5ae4,	// (0x000372ef) list_double_number_pane_t1_cp2_ParamLimits

0x5ae4,	// (0x000372ef) list_double_number_pane_t1_cp2

0x5af8,	// (0x00037303) list_double_number_pane_t2_cp2_ParamLimits

0x5af8,	// (0x00037303) list_double_number_pane_t2_cp2

0x5b0e,	// (0x00037319) list_double_number_pane_t3_cp2_ParamLimits

0x5b0e,	// (0x00037319) list_double_number_pane_t3_cp2

0x59cd,	// (0x000371d8) list_single_graphic_pane_g1_cp2_ParamLimits

0x59cd,	// (0x000371d8) list_single_graphic_pane_g1_cp2

0x43c3,	// (0x00035bce) list_single_graphic_pane_g2_cp2_ParamLimits

0x43c3,	// (0x00035bce) list_single_graphic_pane_g2_cp2

0x43cf,	// (0x00035bda) list_single_graphic_pane_g3_cp2

0x59a3,	// (0x000371ae) list_single_graphic_pane_t1_cp2_ParamLimits

0x59a3,	// (0x000371ae) list_single_graphic_pane_t1_cp2

0x43c3,	// (0x00035bce) list_single_number_pane_g1_cp2_ParamLimits

0x43c3,	// (0x00035bce) list_single_number_pane_g1_cp2

0x43cf,	// (0x00035bda) list_single_number_pane_g2_cp2

0x59a3,	// (0x000371ae) list_single_number_pane_t1_cp2_ParamLimits

0x59a3,	// (0x000371ae) list_single_number_pane_t1_cp2

0x59b9,	// (0x000371c4) list_single_number_pane_t2_cp2_ParamLimits

0x59b9,	// (0x000371c4) list_single_number_pane_t2_cp2

0x41bf,	// (0x000359ca) list_double2_pane_g1_cp2_ParamLimits

0x41bf,	// (0x000359ca) list_double2_pane_g1_cp2

0x41d0,	// (0x000359db) list_double2_pane_g2_cp2

0x432a,	// (0x00035b35) list_double2_pane_t1_cp2_ParamLimits

0x432a,	// (0x00035b35) list_double2_pane_t1_cp2

0x4340,	// (0x00035b4b) list_double2_pane_t2_cp2_ParamLimits

0x4340,	// (0x00035b4b) list_double2_pane_t2_cp2

0x4352,	// (0x00035b5d) list_double_pane_g1_cp2_ParamLimits

0x4352,	// (0x00035b5d) list_double_pane_g1_cp2

0x435e,	// (0x00035b69) list_double_pane_g2_cp2

0x4366,	// (0x00035b71) list_double_pane_t1_cp2_ParamLimits

0x4366,	// (0x00035b71) list_double_pane_t1_cp2

0x437c,	// (0x00035b87) list_double_pane_t2_cp2_ParamLimits

0x437c,	// (0x00035b87) list_double_pane_t2_cp2

0x43b3,	// (0x00035bbe) list_single_pane_cp2_g3

0x43c3,	// (0x00035bce) list_single_pane_g1_cp2_ParamLimits

0x43c3,	// (0x00035bce) list_single_pane_g1_cp2

0x43cf,	// (0x00035bda) list_single_pane_g2_cp2

0x43d7,	// (0x00035be2) list_single_pane_t1_cp2_ParamLimits

0x43d7,	// (0x00035be2) list_single_pane_t1_cp2

0x43ef,	// (0x00035bfa) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x43ef,	// (0x00035bfa) list_single_large_graphic_pane_g1_cp2

0x43fb,	// (0x00035c06) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x43fb,	// (0x00035c06) list_single_large_graphic_pane_g2_cp2

0x4407,	// (0x00035c12) list_single_large_graphic_pane_g3_cp2

0x440f,	// (0x00035c1a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x440f,	// (0x00035c1a) list_single_large_graphic_pane_g4_cp1

0x4429,	// (0x00035c34) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4429,	// (0x00035c34) list_single_large_graphic_pane_t1_cp2

0x596f,	// (0x0003717a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x596f,	// (0x0003717a) list_single_graphic_heading_pane_g1_cp2

0x593c,	// (0x00037147) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x593c,	// (0x00037147) list_single_graphic_heading_pane_g4_cp2

0x43cf,	// (0x00035bda) list_single_graphic_heading_pane_g5_cp2

0x597b,	// (0x00037186) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x597b,	// (0x00037186) list_single_graphic_heading_pane_t1_cp2

0x5991,	// (0x0003719c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5991,	// (0x0003719c) list_single_graphic_heading_pane_t2_cp2

0x5930,	// (0x0003713b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5930,	// (0x0003713b) list_single_2graphic_pane_g1_cp2

0x593c,	// (0x00037147) list_single_2graphic_pane_g2_cp2_ParamLimits

0x593c,	// (0x00037147) list_single_2graphic_pane_g2_cp2

0x43cf,	// (0x00035bda) list_single_2graphic_pane_g3_cp2

0x594d,	// (0x00037158) list_single_2graphic_pane_g4_cp2_ParamLimits

0x594d,	// (0x00037158) list_single_2graphic_pane_g4_cp2

0x5959,	// (0x00037164) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5959,	// (0x00037164) list_single_2graphic_pane_t1_cp2

0xe1ec,	// (0x0003f9f7) list_highlight_pane_g10_cp1

0x5508,	// (0x00036d13) list_highlight_pane_g1_cp1

0x5510,	// (0x00036d1b) list_highlight_pane_g2_cp1

0x5518,	// (0x00036d23) list_highlight_pane_g3_cp1

0x5520,	// (0x00036d2b) list_highlight_pane_g4_cp1

0x5528,	// (0x00036d33) list_highlight_pane_g5_cp1

0x5530,	// (0x00036d3b) list_highlight_pane_g6_cp1

0x5538,	// (0x00036d43) list_highlight_pane_g7_cp1

0x5540,	// (0x00036d4b) list_highlight_pane_g8_cp1

0x5548,	// (0x00036d53) list_highlight_pane_g9_cp1

0xd79b,	// (0x0003efa6) form_field_slider_pane_t3

0xd7a9,	// (0x0003efb4) form_field_slider_pane_t4

0x5444,	// (0x00036c4f) slider_form_pane_ParamLimits

0x5444,	// (0x00036c4f) slider_form_pane

0xe1f6,	// (0x0003fa01) control_abbreviations

0xe1f6,	// (0x0003fa01) control_conventions

0xe1f6,	// (0x0003fa01) control_definitions

0xe1f6,	// (0x0003fa01) format_table_attribute

0x5c22,	// (0x0003742d) bg_popup_preview_window_pane_g9

0xe1f6,	// (0x0003fa01) format_table_data2

0xe1f6,	// (0x0003fa01) format_table_data3

0xe1f6,	// (0x0003fa01) format_table_data_example

0x0008,

0xe1f6,	// (0x0003fa01) intro_purpose

0xf8c3,	// (0x000410ce) bg_popup_preview_window_pane_g

0xe1f6,	// (0x0003fa01) texts_category

0xe1f6,	// (0x0003fa01) texts_graphics

0x443f,	// (0x00035c4a) text_digital

0x444e,	// (0x00035c59) text_primary

0x445d,	// (0x00035c68) text_primary_small

0x446c,	// (0x00035c77) text_secondary

0x447b,	// (0x00035c86) text_title

0x6355,	// (0x00037b60) bg_passive_tab_pane_g1_cp3_srt

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp3_srt

0x635e,	// (0x00037b69) bg_passive_tab_pane_g3_cp3_srt

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp3_srt_ParamLimits

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp3_srt

0x6367,	// (0x00037b72) tabs_4_active_pane_srt_g1

0xdaed,	// (0x0003f2f8) tabs_4_active_pane_srt_t1_ParamLimits

0xdaed,	// (0x0003f2f8) tabs_4_active_pane_srt_t1

0x6355,	// (0x00037b60) bg_active_tab_pane_g1_cp3_copy1

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp3_copy1

0x635e,	// (0x00037b69) bg_active_tab_pane_g3_cp3_copy1

0x2d53,	// (0x0003455e) tabs_2_long_active_pane_srt_ParamLimits

0x2d53,	// (0x0003455e) tabs_2_long_active_pane_srt

0x2d53,	// (0x0003455e) tabs_2_long_passive_pane_srt_ParamLimits

0x2d53,	// (0x0003455e) tabs_2_long_passive_pane_srt

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp4_srt

0x6040,	// (0x0003784b) bg_passive_tab_pane_g1_cp4_srt

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp4_srt

0x6049,	// (0x00037854) bg_passive_tab_pane_g3_cp4_srt

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp4_srt

0xd906,	// (0x0003f111) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd906,	// (0x0003f111) tabs_2_long_active_pane_srt_t1

0x6040,	// (0x0003784b) bg_active_tab_pane_g1_cp4_srt

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp4_srt

0x6049,	// (0x00037854) bg_active_tab_pane_g3_cp4_srt

0x2fce,	// (0x000347d9) tabs_3_long_active_pane_srt_ParamLimits

0x2fce,	// (0x000347d9) tabs_3_long_active_pane_srt

0x2fce,	// (0x000347d9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2fce,	// (0x000347d9) tabs_3_long_passive_pane_cp_srt

0x2fce,	// (0x000347d9) tabs_3_long_passive_pane_srt_ParamLimits

0x2fce,	// (0x000347d9) tabs_3_long_passive_pane_srt

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp5_srt

0x4151,	// (0x0003595c) bg_passive_tab_pane_g1_cp5_srt

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp5_srt

0x415a,	// (0x00035965) bg_passive_tab_pane_g3_cp5_srt

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp5_srt

0xd8f0,	// (0x0003f0fb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd8f0,	// (0x0003f0fb) tabs_3_long_active_pane_srt_t1

0x4151,	// (0x0003595c) bg_active_tab_pane_g1_cp5_srt

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp5_srt

0x415a,	// (0x00035965) bg_active_tab_pane_g3_cp5_srt

0x6020,	// (0x0003782b) navi_text_pane_srt_t1

0x6018,	// (0x00037823) navi_icon_pane_srt_g1

0x4650,	// (0x00035e5b) midp_editing_number_pane_srt

0x448a,	// (0x00035c95) midp_ticker_pane_srt

0x4658,	// (0x00035e63) midp_ticker_pane_srt_g1

0x4660,	// (0x00035e6b) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x00040f56) midp_ticker_pane_srt_g

0x4668,	// (0x00035e73) midp_ticker_pane_srt_t1

0x6009,	// (0x00037814) midp_editing_number_pane_t1_copy1

0xd1df,	// (0x0003e9ea) listscroll_midp_pane

0xd1df,	// (0x0003e9ea) midp_form_pane

0x4502,	// (0x00035d0d) midp_info_popup_window_ParamLimits

0x4502,	// (0x00035d0d) midp_info_popup_window

0x36ff,	// (0x00034f0a) bg_popup_sub_pane_cp50_ParamLimits

0x36ff,	// (0x00034f0a) bg_popup_sub_pane_cp50

0x512c,	// (0x00036937) listscroll_midp_info_pane_ParamLimits

0x512c,	// (0x00036937) listscroll_midp_info_pane

0x510c,	// (0x00036917) listscroll_form_midp_pane_ParamLimits

0x510c,	// (0x00036917) listscroll_form_midp_pane

0x5118,	// (0x00036923) scroll_bar_cp050

0x510c,	// (0x00036917) list_midp_pane

0x6ddf,	// (0x000385ea) signal_pane_g2_cp

0x5026,	// (0x00036831) listscroll_midp_info_pane_t1_ParamLimits

0x5026,	// (0x00036831) listscroll_midp_info_pane_t1

0x503e,	// (0x00036849) listscroll_midp_info_pane_t2_ParamLimits

0x503e,	// (0x00036849) listscroll_midp_info_pane_t2

0x507c,	// (0x00036887) listscroll_midp_info_pane_t3_ParamLimits

0x507c,	// (0x00036887) listscroll_midp_info_pane_t3

0x50b6,	// (0x000368c1) listscroll_midp_info_pane_t4_ParamLimits

0x50b6,	// (0x000368c1) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x00041009) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x00041009) listscroll_midp_info_pane_t

0x3760,	// (0x00034f6b) scroll_pane_cp21

0x4fc4,	// (0x000367cf) form_midp_field_choice_group_pane

0x4fcd,	// (0x000367d8) form_midp_field_text_pane

0x500c,	// (0x00036817) form_midp_field_time_pane

0x5014,	// (0x0003681f) form_midp_gauge_slider_pane

0x501d,	// (0x00036828) form_midp_gauge_wait_pane

0xe1f6,	// (0x0003fa01) form_midp_image_pane

0xc7ff,	// (0x0003e00a) list_single_midp_pane_ParamLimits

0xc7ff,	// (0x0003e00a) list_single_midp_pane

0xd77a,	// (0x0003ef85) form_midp_field_text_pane_t1

0x4d4c,	// (0x00036557) input_focus_pane_cp050

0x4fb3,	// (0x000367be) list_midp_form_text_pane

0x4f4b,	// (0x00036756) form_midp_field_choice_group_pane_t1

0x4f59,	// (0x00036764) input_focus_pane_cp051

0x4f6d,	// (0x00036778) list_midp_choice_pane

0xe1f6,	// (0x0003fa01) status_idle_pane

0x4f2f,	// (0x0003673a) form_midp_field_time_pane_t1

0xe1ec,	// (0x0003f9f7) wait_anim_pane_g2_copy1

0x4f3d,	// (0x00036748) form_midp_field_time_pane_t2

0x0001,

0x45b0,	// (0x00035dbb) aid_navinavi_width_2_pane

0xf7f9,	// (0x00041004) form_midp_field_time_pane_t

0xe1f6,	// (0x0003fa01) input_focus_pane_cp052

0xe1f6,	// (0x0003fa01) bg_input_focus_pane_cp040

0x4eef,	// (0x000366fa) form_midp_gauge_slider_pane_t1

0x4efd,	// (0x00036708) form_midp_gauge_slider_pane_t2

0xd75e,	// (0x0003ef69) form_midp_gauge_slider_pane_t3

0xd76c,	// (0x0003ef77) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x00040ffb) form_midp_gauge_slider_pane_t

0x4f27,	// (0x00036732) form_midp_slider_pane

0x2d53,	// (0x0003455e) bg_input_focus_pane_cp041_ParamLimits

0x2d53,	// (0x0003455e) bg_input_focus_pane_cp041

0x4ebc,	// (0x000366c7) form_midp_gauge_wait_pane_t1_ParamLimits

0x4ebc,	// (0x000366c7) form_midp_gauge_wait_pane_t1

0x4ece,	// (0x000366d9) form_midp_gauge_wait_pane_t2_ParamLimits

0x4ece,	// (0x000366d9) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x00040ff6) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x00040ff6) form_midp_gauge_wait_pane_t

0x4ee0,	// (0x000366eb) form_midp_wait_pane_ParamLimits

0x4ee0,	// (0x000366eb) form_midp_wait_pane

0x4e86,	// (0x00036691) form_midp_image_pane_g1

0x4e8f,	// (0x0003669a) form_midp_image_pane_t1

0x4e9e,	// (0x000366a9) form_midp_image_pane_t2

0x4ead,	// (0x000366b8) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x00040fef) form_midp_image_pane_t

0x4e7d,	// (0x00036688) list_single_midp_pane_g1

0x1118,	// (0x00032923) list_single_midp_pane_t1

0xd74a,	// (0x0003ef55) list_midp_form_item_pane_ParamLimits

0xd74a,	// (0x0003ef55) list_midp_form_item_pane

0x4558,	// (0x00035d63) list_midp_form_item_pane_t1

0x4567,	// (0x00035d72) midp_ticker_pane_g1

0x4573,	// (0x00035d7e) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x00040f3c) midp_ticker_pane_g

0x457f,	// (0x00035d8a) midp_ticker_pane_t1

0x625a,	// (0x00037a65) midp_editing_number_pane_t1

0x6238,	// (0x00037a43) midp_editing_number_pane

0x6247,	// (0x00037a52) midp_ticker_pane

0x5138,	// (0x00036943) ai_message_heading_pane

0xe1f6,	// (0x0003fa01) bg_popup_window_pane_cp14

0x5140,	// (0x0003694b) listscroll_ai_message_pane

0x5f93,	// (0x0003779e) ai_message_heading_pane_g1_ParamLimits

0x5f93,	// (0x0003779e) ai_message_heading_pane_g1

0x5f9f,	// (0x000377aa) ai_message_heading_pane_g2_ParamLimits

0x5f9f,	// (0x000377aa) ai_message_heading_pane_g2

0x5fab,	// (0x000377b6) ai_message_heading_pane_g3_ParamLimits

0x5fab,	// (0x000377b6) ai_message_heading_pane_g3

0x5fb7,	// (0x000377c2) ai_message_heading_pane_g4_ParamLimits

0x5fb7,	// (0x000377c2) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x00041130) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x00041130) ai_message_heading_pane_g

0x5fc3,	// (0x000377ce) ai_message_heading_pane_t1_ParamLimits

0x5fc3,	// (0x000377ce) ai_message_heading_pane_t1

0x5fdd,	// (0x000377e8) ai_message_heading_pane_t2_ParamLimits

0x5fdd,	// (0x000377e8) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x00041139) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x00041139) ai_message_heading_pane_t

0x5fef,	// (0x000377fa) bg_popup_heading_pane_cp1_ParamLimits

0x5fef,	// (0x000377fa) bg_popup_heading_pane_cp1

0x5f81,	// (0x0003778c) list_ai_message_pane_ParamLimits

0x5f81,	// (0x0003778c) list_ai_message_pane

0x3760,	// (0x00034f6b) scroll_pane_cp10

0x5f1d,	// (0x00037728) list_ai_message_pane_g1

0x5f25,	// (0x00037730) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0004110d) list_ai_message_pane_g

0x5f2d,	// (0x00037738) list_ai_message_pane_t1_ParamLimits

0x5f2d,	// (0x00037738) list_ai_message_pane_t1

0x5f42,	// (0x0003774d) list_ai_message_pane_t2_ParamLimits

0x5f42,	// (0x0003774d) list_ai_message_pane_t2

0x5f57,	// (0x00037762) list_ai_message_pane_t3_ParamLimits

0x5f57,	// (0x00037762) list_ai_message_pane_t3

0x5f6c,	// (0x00037777) list_ai_message_pane_t4_ParamLimits

0x5f6c,	// (0x00037777) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x00041112) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x00041112) list_ai_message_pane_t

0xd8cf,	// (0x0003f0da) cell_ai_soft_ind_pane_ParamLimits

0xd8cf,	// (0x0003f0da) cell_ai_soft_ind_pane

0x4591,	// (0x00035d9c) cell_ai_soft_ind_pane_g1_ParamLimits

0x4591,	// (0x00035d9c) cell_ai_soft_ind_pane_g1

0xe1f6,	// (0x0003fa01) grid_highlight_cp1

0x459e,	// (0x00035da9) text_secondary_cp56_ParamLimits

0x459e,	// (0x00035da9) text_secondary_cp56

0x5edd,	// (0x000376e8) example_general_pane_ParamLimits

0x5edd,	// (0x000376e8) example_general_pane

0x5ee9,	// (0x000376f4) example_parent_pane_g1_ParamLimits

0x5ee9,	// (0x000376f4) example_parent_pane_g1

0x5ef5,	// (0x00037700) example_parent_pane_t1_ParamLimits

0x5ef5,	// (0x00037700) example_parent_pane_t1

0xc4a9,	// (0x0003dcb4) popup_preview_text_window_ParamLimits

0xc4a9,	// (0x0003dcb4) popup_preview_text_window

0x43bb,	// (0x00035bc6) list_single_pane_cp2_g4

0x30aa,	// (0x000348b5) bg_popup_preview_window_pane_ParamLimits

0x30aa,	// (0x000348b5) bg_popup_preview_window_pane

0x5c2a,	// (0x00037435) popup_preview_text_window_t1_ParamLimits

0x5c2a,	// (0x00037435) popup_preview_text_window_t1

0x5c48,	// (0x00037453) popup_preview_text_window_t2_ParamLimits

0x5c48,	// (0x00037453) popup_preview_text_window_t2

0x5c91,	// (0x0003749c) popup_preview_text_window_t3_ParamLimits

0x5c91,	// (0x0003749c) popup_preview_text_window_t3

0x5cd6,	// (0x000374e1) popup_preview_text_window_t4_ParamLimits

0x5cd6,	// (0x000374e1) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x000410e1) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x000410e1) popup_preview_text_window_t

0x5d54,	// (0x0003755f) scroll_pane_cp11

0x4cd8,	// (0x000364e3) bg_popup_preview_window_pane_g1

0x5bea,	// (0x000373f5) bg_popup_preview_window_pane_g2

0x5bf2,	// (0x000373fd) bg_popup_preview_window_pane_g3

0x5bfa,	// (0x00037405) bg_popup_preview_window_pane_g4

0x5c02,	// (0x0003740d) bg_popup_preview_window_pane_g5

0x5c0a,	// (0x00037415) bg_popup_preview_window_pane_g6

0x5c12,	// (0x0003741d) bg_popup_preview_window_pane_g7

0x5c1a,	// (0x00037425) bg_popup_preview_window_pane_g8

0xf199,	// (0x000409a4) aid_popup_width_pane

0xc425,	// (0x0003dc30) popup_midp_note_alarm_window_ParamLimits

0xc425,	// (0x0003dc30) popup_midp_note_alarm_window

0x35d4,	// (0x00034ddf) data_form_pane_ParamLimits

0xbc05,	// (0x0003d410) form_field_data_pane_g1

0xbc0f,	// (0x0003d41a) form_field_data_pane_t1_ParamLimits

0x35e0,	// (0x00034deb) input_focus_pane_ParamLimits

0x0103,	// (0x0003190e) data_form_wide_pane_ParamLimits

0x0114,	// (0x0003191f) form_field_data_wide_pane_g1

0x0120,	// (0x0003192b) form_field_data_wide_pane_t1_ParamLimits

0x3351,	// (0x00034b5c) input_focus_pane_cp6_ParamLimits

0xbd5e,	// (0x0003d569) input_popup_find_pane_g1_ParamLimits

0xbd5e,	// (0x0003d569) input_popup_find_pane_g1

0x0396,	// (0x00031ba1) aid_navi_side_left_pane

0x03ab,	// (0x00031bb6) aid_navi_side_right_pane

0x5603,	// (0x00036e0e) bg_popup_window_pane_cp30_ParamLimits

0x5603,	// (0x00036e0e) bg_popup_window_pane_cp30

0x567d,	// (0x00036e88) popup_midp_note_alarm_window_g1_ParamLimits

0x567d,	// (0x00036e88) popup_midp_note_alarm_window_g1

0x56ad,	// (0x00036eb8) popup_midp_note_alarm_window_t1_ParamLimits

0x56ad,	// (0x00036eb8) popup_midp_note_alarm_window_t1

0x574e,	// (0x00036f59) popup_midp_note_alarm_window_t2_ParamLimits

0x574e,	// (0x00036f59) popup_midp_note_alarm_window_t2

0x57fc,	// (0x00037007) popup_midp_note_alarm_window_t3_ParamLimits

0x57fc,	// (0x00037007) popup_midp_note_alarm_window_t3

0x582e,	// (0x00037039) popup_midp_note_alarm_window_t4_ParamLimits

0x582e,	// (0x00037039) popup_midp_note_alarm_window_t4

0x5854,	// (0x0003705f) popup_midp_note_alarm_window_t5_ParamLimits

0x5854,	// (0x0003705f) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x0004107e) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x0004107e) popup_midp_note_alarm_window_t

0x5900,	// (0x0003710b) wait_bar_pane_cp1_ParamLimits

0x5900,	// (0x0003710b) wait_bar_pane_cp1

0xe1f6,	// (0x0003fa01) wait_anim_pane_copy1

0xe1f6,	// (0x0003fa01) wait_border_pane_copy1

0x52e9,	// (0x00036af4) wait_border_pane_g1_copy1

0x013a,	// (0x00031945) form_field_popup_pane_g1

0xbc29,	// (0x0003d434) form_field_popup_pane_t1_ParamLimits

0x35e0,	// (0x00034deb) input_focus_pane_cp7_ParamLimits

0x360e,	// (0x00034e19) list_form_pane_ParamLimits

0x015a,	// (0x00031965) form_field_popup_wide_pane_g1

0x0162,	// (0x0003196d) form_field_popup_wide_pane_t1_ParamLimits

0x35e0,	// (0x00034deb) input_focus_pane_cp8_ParamLimits

0x361a,	// (0x00034e25) list_form_wide_pane_ParamLimits

0x63fa,	// (0x00037c05) aid_size_cell_graphic_pane

0xbca8,	// (0x0003d4b3) data_form_pane_t1_ParamLimits

0xc828,	// (0x0003e033) data_form_wide_pane_t1_ParamLimits

0xd3d1,	// (0x0003ebdc) bg_status_flat_pane

0xb442,	// (0x0003cc4d) title_pane_t1_ParamLimits

0x2d1b,	// (0x00034526) title_pane_t2_ParamLimits

0x2d41,	// (0x0003454c) title_pane_t3_ParamLimits

0xf530,	// (0x00040d3b) title_pane_t_ParamLimits

0x3dc5,	// (0x000355d0) level_1_signal_ParamLimits

0x3dd7,	// (0x000355e2) level_2_signal_ParamLimits

0x3dea,	// (0x000355f5) level_3_signal_ParamLimits

0x3dfd,	// (0x00035608) level_4_signal_ParamLimits

0x3e10,	// (0x0003561b) level_5_signal_ParamLimits

0x3e23,	// (0x0003562e) level_6_signal_ParamLimits

0x3e36,	// (0x00035641) level_7_signal_ParamLimits

0x3dc5,	// (0x000355d0) level_1_battery_ParamLimits

0x3dd7,	// (0x000355e2) level_2_battery_ParamLimits

0x3dea,	// (0x000355f5) level_3_battery_ParamLimits

0x3dfd,	// (0x00035608) level_4_battery_ParamLimits

0x3e10,	// (0x0003561b) level_5_battery_ParamLimits

0x3e23,	// (0x0003562e) level_6_battery_ParamLimits

0x3e36,	// (0x00035641) level_7_battery_ParamLimits

0x5508,	// (0x00036d13) bg_status_flat_pane_g1

0x5510,	// (0x00036d1b) bg_status_flat_pane_g2

0x5518,	// (0x00036d23) bg_status_flat_pane_g3

0x5520,	// (0x00036d2b) bg_status_flat_pane_g4

0x5528,	// (0x00036d33) bg_status_flat_pane_g5

0x5530,	// (0x00036d3b) bg_status_flat_pane_g6

0x5538,	// (0x00036d43) bg_status_flat_pane_g7

0xb4ce,	// (0x0003ccd9) tabs_3_active_pane_t1_ParamLimits

0xb4ce,	// (0x0003ccd9) tabs_3_passive_pane_t1_ParamLimits

0xb4e0,	// (0x0003cceb) tabs_4_active_pane_t1_ParamLimits

0xb4e0,	// (0x0003cceb) tabs_4_1_passive_pane_t1_ParamLimits

0xbd6c,	// (0x0003d577) tabs_2_active_pane_t1_ParamLimits

0xbd6c,	// (0x0003d577) tabs_2_passive_pane_t1_ParamLimits

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp4_ParamLimits

0xbd7e,	// (0x0003d589) tabs_2_long_active_pane_t1_ParamLimits

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp4_ParamLimits

0x0fef,	// (0x000327fa) list_single_midp_graphic_pane_t1_ParamLimits

0x2d53,	// (0x0003455e) bg_active_tab_pane_cp5_ParamLimits

0xbd91,	// (0x0003d59c) tabs_3_long_active_pane_t1_ParamLimits

0x47ae,	// (0x00035fb9) bg_passive_tab_pane_cp5_ParamLimits

0x0fef,	// (0x000327fa) list_single_midp_graphic_pane_t1

0xd3d1,	// (0x0003ebdc) bg_status_flat_pane_ParamLimits

0x4968,	// (0x00036173) indicator_pane_cp2_ParamLimits

0x4968,	// (0x00036173) indicator_pane_cp2

0xd54f,	// (0x0003ed5a) navi_pane_srt_ParamLimits

0xd54f,	// (0x0003ed5a) navi_pane_srt

0x4ab7,	// (0x000362c2) popup_clock_digital_analogue_window_cp1

0x2e30,	// (0x0003463b) indicator_pane_t1

0x448a,	// (0x00035c95) copy_highlight_pane

0x448a,	// (0x00035c95) cursor_graphics_pane

0x448a,	// (0x00035c95) graphic_within_text_pane

0x448a,	// (0x00035c95) link_highlight_pane

0x5d17,	// (0x00037522) popup_preview_text_window_t5_ParamLimits

0x5d17,	// (0x00037522) popup_preview_text_window_t5

0x45b8,	// (0x00035dc3) cursor_digital_pane

0x45b8,	// (0x00035dc3) cursor_primary_pane

0x45c9,	// (0x00035dd4) cursor_primary_small_pane

0x45d1,	// (0x00035ddc) cursor_secondary_pane

0x45d9,	// (0x00035de4) cursor_title_pane

0x45b8,	// (0x00035dc3) link_highlight_digital_pane

0x45c0,	// (0x00035dcb) link_highlight_primary_pane

0x45c9,	// (0x00035dd4) link_highlight_primary_small_pane

0x45d1,	// (0x00035ddc) link_highlight_secondary_pane

0x45d9,	// (0x00035de4) link_highlight_title_pane

0x45b8,	// (0x00035dc3) copy_highlight_digital_pane

0x45b8,	// (0x00035dc3) copy_highlight_primary_pane

0x45c9,	// (0x00035dd4) copy_highlight_primary_small_pane

0x45d1,	// (0x00035ddc) copy_highlight_secondary_pane

0x45d9,	// (0x00035de4) copy_highlight_title_pane

0x45d1,	// (0x00035ddc) graphic_text_digital_pane

0x55a6,	// (0x00036db1) graphic_text_primary_pane

0x55af,	// (0x00036dba) graphic_text_primary_small_pane

0x45c9,	// (0x00035dd4) graphic_text_secondary_pane

0x45b8,	// (0x00035dc3) graphic_text_title_pane

0xd284,	// (0x0003ea8f) cursor_primary_pane_g1

0x5598,	// (0x00036da3) cursor_text_primary_t1

0xd7cb,	// (0x0003efd6) cursor_primary_small_pane_g1

0x558a,	// (0x00036d95) cursor_text_primary_small_t1

0xd7c1,	// (0x0003efcc) cursor_primary_small_pane_g1_copy1

0x5572,	// (0x00036d7d) cursor_text_primary_small_t1_copy1

0x5550,	// (0x00036d5b) cursor_text_title_t1

0xd7b7,	// (0x0003efc2) cursor_title_pane_g1

0xd284,	// (0x0003ea8f) cursor_digital_pane_g1

0x45eb,	// (0x00035df6) cursor_text_digital_t1

0x4610,	// (0x00035e1b) link_highlight_primary_pane_g1

0x54f9,	// (0x00036d04) link_highlight_primary_pane_t1

0x45f9,	// (0x00035e04) link_highlight_primary_small_pane_g1

0x4601,	// (0x00035e0c) link_highlight_primary_small_pane_t1

0x4610,	// (0x00035e1b) link_highlight_secondary_pane_g1

0x4618,	// (0x00035e23) link_highlight_secondary_pane_t1

0x546d,	// (0x00036c78) link_highlight_title_pane_g1

0x5475,	// (0x00036c80) link_highlight_title_pane_t1

0x5456,	// (0x00036c61) link_highlight_digital_pane_g1

0x545e,	// (0x00036c69) link_highlight_digital_pane_t1

0x532e,	// (0x00036b39) copy_highlight_primary_pane_g1

0x5336,	// (0x00036b41) copy_highlight_primary_pane_t1

0x5308,	// (0x00036b13) copy_highlight_primary_small_pane_g1

0x531f,	// (0x00036b2a) copy_highlight_primary_small_pane_t1

0x4627,	// (0x00035e32) copy_highlight_secondary_pane_g1

0x462f,	// (0x00035e3a) copy_highlight_secondary_pane_t1

0x5308,	// (0x00036b13) copy_highlight_title_pane_g1

0x5310,	// (0x00036b1b) copy_highlight_title_pane_t1

0x532e,	// (0x00036b39) copy_highlight_digital_pane_g1

0x65c8,	// (0x00037dd3) copy_highlight_digital_pane_t1

0x651c,	// (0x00037d27) graphic_text_primary_pane_g1

0x65ac,	// (0x00037db7) graphic_text_primary_pane_t1

0x65ba,	// (0x00037dc5) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x000411ad) graphic_text_primary_pane_t

0x6588,	// (0x00037d93) graphic_text_primary_small_pane_g1

0x6590,	// (0x00037d9b) graphic_text_primary_small_pane_t1

0x659e,	// (0x00037da9) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x000411a8) graphic_text_primary_small_pane_t

0x6564,	// (0x00037d6f) graphic_text_secondary_pane_g1

0x656c,	// (0x00037d77) graphic_text_secondary_pane_t1

0x657a,	// (0x00037d85) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x000411a3) graphic_text_secondary_pane_t

0x6540,	// (0x00037d4b) graphic_text_title_pane_g1

0x6548,	// (0x00037d53) graphic_text_title_pane_t1

0x6556,	// (0x00037d61) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x0004119e) graphic_text_title_pane_t

0x651c,	// (0x00037d27) graphic_text_digital_pane_g1

0x6524,	// (0x00037d2f) graphic_text_digital_pane_t1

0x6532,	// (0x00037d3d) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x00041199) graphic_text_digital_pane_t

0x2d53,	// (0x0003455e) navi_icon_pane_srt_ParamLimits

0x2d53,	// (0x0003455e) navi_icon_pane_srt

0xe1f6,	// (0x0003fa01) navi_midp_pane_srt

0xe1f6,	// (0x0003fa01) navi_navi_pane_srt

0x2d53,	// (0x0003455e) navi_text_pane_srt_ParamLimits

0x2d53,	// (0x0003455e) navi_text_pane_srt

0x64e7,	// (0x00037cf2) navi_navi_icon_text_pane_srt

0x64ef,	// (0x00037cfa) navi_navi_pane_srt_g1_ParamLimits

0x64ef,	// (0x00037cfa) navi_navi_pane_srt_g1

0x6501,	// (0x00037d0c) navi_navi_pane_srt_g2_ParamLimits

0x6501,	// (0x00037d0c) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x00041194) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x00041194) navi_navi_pane_srt_g

0x6513,	// (0x00037d1e) navi_navi_tabs_pane_srt

0x64e7,	// (0x00037cf2) navi_navi_text_pane_srt

0x64e7,	// (0x00037cf2) navi_navi_volume_pane_srt

0x64d8,	// (0x00037ce3) navi_navi_text_pane_srt_t1

0x1536,	// (0x00032d41) navi_navi_volume_pane_srt_g1

0x153e,	// (0x00032d49) volume_small_pane_srt_ParamLimits

0x153e,	// (0x00032d49) volume_small_pane_srt

0x0700,	// (0x00031f0b) volume_small_pane_srt_g1_ParamLimits

0x0700,	// (0x00031f0b) volume_small_pane_srt_g1

0x0710,	// (0x00031f1b) volume_small_pane_srt_g2_ParamLimits

0x0710,	// (0x00031f1b) volume_small_pane_srt_g2

0x0721,	// (0x00031f2c) volume_small_pane_srt_g3_ParamLimits

0x0721,	// (0x00031f2c) volume_small_pane_srt_g3

0x0732,	// (0x00031f3d) volume_small_pane_srt_g4_ParamLimits

0x0732,	// (0x00031f3d) volume_small_pane_srt_g4

0x0743,	// (0x00031f4e) volume_small_pane_srt_g5_ParamLimits

0x0743,	// (0x00031f4e) volume_small_pane_srt_g5

0x0754,	// (0x00031f5f) volume_small_pane_srt_g6_ParamLimits

0x0754,	// (0x00031f5f) volume_small_pane_srt_g6

0x0765,	// (0x00031f70) volume_small_pane_srt_g7_ParamLimits

0x0765,	// (0x00031f70) volume_small_pane_srt_g7

0x0776,	// (0x00031f81) volume_small_pane_srt_g8_ParamLimits

0x0776,	// (0x00031f81) volume_small_pane_srt_g8

0x0787,	// (0x00031f92) volume_small_pane_srt_g9_ParamLimits

0x0787,	// (0x00031f92) volume_small_pane_srt_g9

0x0798,	// (0x00031fa3) volume_small_pane_srt_g10_ParamLimits

0x0798,	// (0x00031fa3) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x00040f41) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x00040f41) volume_small_pane_srt_g

0x3153,	// (0x0003495e) query_popup_data_pane_cp2

0x64be,	// (0x00037cc9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x64be,	// (0x00037cc9) navi_navi_icon_text_pane_srt_t1

0x55a6,	// (0x00036db1) navi_tabs_2_long_pane_srt

0x55a6,	// (0x00036db1) navi_tabs_2_pane_srt

0x55a6,	// (0x00036db1) navi_tabs_3_long_pane_srt

0x55a6,	// (0x00036db1) navi_tabs_3_pane_srt

0x55a6,	// (0x00036db1) navi_tabs_4_pane_srt

0x1516,	// (0x00032d21) tabs_2_active_pane_srt_ParamLimits

0x1516,	// (0x00032d21) tabs_2_active_pane_srt

0x1526,	// (0x00032d31) tabs_2_passive_pane_srt_ParamLimits

0x1526,	// (0x00032d31) tabs_2_passive_pane_srt

0x4d4c,	// (0x00036557) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d4c,	// (0x00036557) bg_passive_tab_pane_cp1_srt

0x648a,	// (0x00037c95) bg_passive_tab_pane_g1_cp1_srt

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp1_srt

0x6493,	// (0x00037c9e) bg_passive_tab_pane_g3_cp1_srt

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp1_srt_ParamLimits

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp1_srt

0x649c,	// (0x00037ca7) tabs_2_active_pane_srt_g1

0xdb72,	// (0x0003f37d) tabs_2_active_pane_srt_t1_ParamLimits

0xdb72,	// (0x0003f37d) tabs_2_active_pane_srt_t1

0x648a,	// (0x00037c95) bg_active_tab_pane_g1_cp1_srt

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp1_srt

0x6493,	// (0x00037c9e) bg_active_tab_pane_g3_cp1_srt

0x14e3,	// (0x00032cee) tabs_3_active_pane_srt_ParamLimits

0x14e3,	// (0x00032cee) tabs_3_active_pane_srt

0x14f4,	// (0x00032cff) tabs_3_passive_pane_cp_srt_ParamLimits

0x14f4,	// (0x00032cff) tabs_3_passive_pane_cp_srt

0x1505,	// (0x00032d10) tabs_3_passive_pane_srt_ParamLimits

0x1505,	// (0x00032d10) tabs_3_passive_pane_srt

0x4d4c,	// (0x00036557) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d4c,	// (0x00036557) bg_passive_tab_pane_cp2_srt

0x463e,	// (0x00035e49) bg_passive_tab_pane_g1_cp2_srt

0x40c7,	// (0x000358d2) bg_passive_tab_pane_g2_cp2_srt

0x4647,	// (0x00035e52) bg_passive_tab_pane_g3_cp2_srt

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp2_srt_ParamLimits

0x2fce,	// (0x000347d9) bg_active_tab_pane_cp2_srt

0x6470,	// (0x00037c7b) tabs_3_active_pane_srt_g1

0xdb5c,	// (0x0003f367) tabs_3_active_pane_srt_t1_ParamLimits

0xdb5c,	// (0x0003f367) tabs_3_active_pane_srt_t1

0x463e,	// (0x00035e49) bg_active_tab_pane_g1_cp2_srt

0x40c7,	// (0x000358d2) bg_active_tab_pane_g2_cp2_srt

0x4647,	// (0x00035e52) bg_active_tab_pane_g3_cp2_srt

0x149b,	// (0x00032ca6) tabs_4_active_pane_srt_ParamLimits

0x149b,	// (0x00032ca6) tabs_4_active_pane_srt

0x14ad,	// (0x00032cb8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x14ad,	// (0x00032cb8) tabs_4_passive_pane_cp2_srt

0x090b,	// (0x00032116) aid_size_cell_toolbar

0x60b1,	// (0x000378bc) main_idle_act_pane_ParamLimits

0x0acc,	// (0x000322d7) popup_large_graphic_colour_window_ParamLimits

0xc735,	// (0x0003df40) popup_toolbar_window_ParamLimits

0xc735,	// (0x0003df40) popup_toolbar_window

0x140d,	// (0x00032c18) list_single_graphic_2heading_pane_ParamLimits

0x140d,	// (0x00032c18) list_single_graphic_2heading_pane

0x3990,	// (0x0003519b) aid_size_cell_apps_grid_lsc_pane

0x39a2,	// (0x000351ad) aid_size_cell_apps_grid_prt_pane

0x47ae,	// (0x00035fb9) bg_wml_button_pane_cp1_ParamLimits

0x47ae,	// (0x00035fb9) bg_wml_button_pane_cp1

0xd77a,	// (0x0003ef85) form_midp_field_text_pane_t1_ParamLimits

0x4d4c,	// (0x00036557) input_focus_pane_cp050_ParamLimits

0x4fb3,	// (0x000367be) list_midp_form_text_pane_ParamLimits

0x4f59,	// (0x00036764) input_focus_pane_cp051_ParamLimits

0x4f6d,	// (0x00036778) list_midp_choice_pane_ParamLimits

0xd718,	// (0x0003ef23) list_single_2graphic_pane_cp3_ParamLimits

0xd718,	// (0x0003ef23) list_single_2graphic_pane_cp3

0xd72b,	// (0x0003ef36) list_single_midp_graphic_pane_ParamLimits

0xd72b,	// (0x0003ef36) list_single_midp_graphic_pane

0xf47b,	// (0x00040c86) list_single_graphic_2heading_pane_g1_ParamLimits

0xf47b,	// (0x00040c86) list_single_graphic_2heading_pane_g1

0xf487,	// (0x00040c92) list_single_graphic_2heading_pane_g4_ParamLimits

0xf487,	// (0x00040c92) list_single_graphic_2heading_pane_g4

0xf493,	// (0x00040c9e) list_single_graphic_2heading_pane_g5_ParamLimits

0xf493,	// (0x00040c9e) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x00040f94) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x00040f94) list_single_graphic_2heading_pane_g

0xf49f,	// (0x00040caa) list_single_graphic_2heading_pane_t1_ParamLimits

0xf49f,	// (0x00040caa) list_single_graphic_2heading_pane_t1

0xf4b3,	// (0x00040cbe) list_single_graphic_2heading_pane_t2_ParamLimits

0xf4b3,	// (0x00040cbe) list_single_graphic_2heading_pane_t2

0xf4cd,	// (0x00040cd8) list_single_graphic_2heading_pane_t3_ParamLimits

0xf4cd,	// (0x00040cd8) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x00040f9b) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x00040f9b) list_single_graphic_2heading_pane_t

0x4c16,	// (0x00036421) bg_popup_sub_pane_cp2

0x4c40,	// (0x0003644b) grid_toobar_pane

0x0ee0,	// (0x000326eb) cell_toolbar_pane_ParamLimits

0x0ee0,	// (0x000326eb) cell_toolbar_pane

0x4c7c,	// (0x00036487) cell_toolbar_pane_g1_ParamLimits

0x4c7c,	// (0x00036487) cell_toolbar_pane_g1

0x4c90,	// (0x0003649b) cell_toolbar_pane_g2_ParamLimits

0x4c90,	// (0x0003649b) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x00040fa9) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x00040fa9) cell_toolbar_pane_g

0x4cb2,	// (0x000364bd) grid_highlight_pane_cp2_ParamLimits

0x4cb2,	// (0x000364bd) grid_highlight_pane_cp2

0x4ccc,	// (0x000364d7) toolbar_button_pane

0x4cd8,	// (0x000364e3) toolbar_button_pane_g1

0x4ce0,	// (0x000364eb) toolbar_button_pane_g2

0x4ce8,	// (0x000364f3) toolbar_button_pane_g3

0x4cf0,	// (0x000364fb) toolbar_button_pane_g4

0x4cf8,	// (0x00036503) toolbar_button_pane_g5

0x4d00,	// (0x0003650b) toolbar_button_pane_g6

0x4d08,	// (0x00036513) toolbar_button_pane_g7

0x4d10,	// (0x0003651b) toolbar_button_pane_g8

0x4d18,	// (0x00036523) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x00040fae) toolbar_button_pane_g

0x0f52,	// (0x0003275d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0f52,	// (0x0003275d) list_single_2graphic_pane_g1_cp3

0xc78d,	// (0x0003df98) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc78d,	// (0x0003df98) list_single_2graphic_pane_g2_cp3

0x0f6f,	// (0x0003277a) list_single_2graphic_pane_g3_cp3

0x0f77,	// (0x00032782) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0f77,	// (0x00032782) list_single_2graphic_pane_g4_cp3

0x0f83,	// (0x0003278e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0f83,	// (0x0003278e) list_single_2graphic_pane_t1_cp3

0x0fe3,	// (0x000327ee) list_single_midp_graphic_pane_g2_ParamLimits

0x0fe3,	// (0x000327ee) list_single_midp_graphic_pane_g2

0x0913,	// (0x0003211e) aid_zoom_text_primary

0xf473,	// (0x00040c7e) aid_zoom_text_secondary

0x46f8,	// (0x00035f03) status_small_pane_g7_ParamLimits

0x46f8,	// (0x00035f03) status_small_pane_g7

0x471b,	// (0x00035f26) status_small_pane_t1_ParamLimits

0xb41e,	// (0x0003cc29) title_pane_g2

0x0003,

0xf527,	// (0x00040d32) title_pane_g

0xb696,	// (0x0003cea1) aid_size_cell_colour_1_pane_ParamLimits

0xb696,	// (0x0003cea1) aid_size_cell_colour_1_pane

0xb6aa,	// (0x0003ceb5) aid_size_cell_colour_2_pane_ParamLimits

0xb6aa,	// (0x0003ceb5) aid_size_cell_colour_2_pane

0xb6be,	// (0x0003cec9) aid_size_cell_colour_3_pane_ParamLimits

0xb6be,	// (0x0003cec9) aid_size_cell_colour_3_pane

0xb6d2,	// (0x0003cedd) aid_size_cell_colour_4_pane_ParamLimits

0xb6d2,	// (0x0003cedd) aid_size_cell_colour_4_pane

0x02d3,	// (0x00031ade) title_pane_stacon_g1_ParamLimits

0x02d3,	// (0x00031ade) title_pane_stacon_g1

0x538d,	// (0x00036b98) popup_note_wait_window_g3_ParamLimits

0x538d,	// (0x00036b98) popup_note_wait_window_g3

0x5403,	// (0x00036c0e) popup_note_wait_window_t5_ParamLimits

0x5403,	// (0x00036c0e) popup_note_wait_window_t5

0xe1f6,	// (0x0003fa01) main_feb_china_hwr_fs_writing_pane

0xc137,	// (0x0003d942) popup_feb_china_hwr_fs_window_ParamLimits

0xc137,	// (0x0003d942) popup_feb_china_hwr_fs_window

0xc79e,	// (0x0003dfa9) aid_size_cell_hwr_fs_ParamLimits

0xc79e,	// (0x0003dfa9) aid_size_cell_hwr_fs

0x4d4c,	// (0x00036557) bg_popup_sub_pane_cp3_ParamLimits

0x4d4c,	// (0x00036557) bg_popup_sub_pane_cp3

0xc7b3,	// (0x0003dfbe) grid_hwr_fs_pane_ParamLimits

0xc7b3,	// (0x0003dfbe) grid_hwr_fs_pane

0x10a8,	// (0x000328b3) linegrid_hwr_fs_pane_ParamLimits

0x10a8,	// (0x000328b3) linegrid_hwr_fs_pane

0xc7cb,	// (0x0003dfd6) cell_hwr_fs_pane_ParamLimits

0xc7cb,	// (0x0003dfd6) cell_hwr_fs_pane

0x4d58,	// (0x00036563) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d58,	// (0x00036563) linegrid_hwr_fs_pane_g1

0xd6ec,	// (0x0003eef7) linegrid_hwr_fs_pane_g2_ParamLimits

0xd6ec,	// (0x0003eef7) linegrid_hwr_fs_pane_g2

0x4d76,	// (0x00036581) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d76,	// (0x00036581) linegrid_hwr_fs_pane_g3

0x10da,	// (0x000328e5) linegrid_hwr_fs_pane_g4_ParamLimits

0x10da,	// (0x000328e5) linegrid_hwr_fs_pane_g4

0x10f4,	// (0x000328ff) linegrid_hwr_fs_pane_g5_ParamLimits

0x10f4,	// (0x000328ff) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x00040fd4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x00040fd4) linegrid_hwr_fs_pane_g

0x4d82,	// (0x0003658d) cell_hwr_fs_pane_g1_ParamLimits

0x4d82,	// (0x0003658d) cell_hwr_fs_pane_g1

0x4b4d,	// (0x00036358) cell_hwr_fs_pane_g2_ParamLimits

0x4b4d,	// (0x00036358) cell_hwr_fs_pane_g2

0xd6fe,	// (0x0003ef09) cell_hwr_fs_pane_g3_ParamLimits

0xd6fe,	// (0x0003ef09) cell_hwr_fs_pane_g3

0xd70b,	// (0x0003ef16) cell_hwr_fs_pane_g4_ParamLimits

0xd70b,	// (0x0003ef16) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x00040fdf) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x00040fdf) cell_hwr_fs_pane_g

0xc7f1,	// (0x0003dffc) cell_hwr_fs_pane_t1

0xe1f6,	// (0x0003fa01) grid_highlight_pane_cp6

0xe1f6,	// (0x0003fa01) main_idle_act2_pane

0x3747,	// (0x00034f52) aid_inside_area_popup_secondary

0xd7d5,	// (0x0003efe0) aid_inside_area_window_primary_ParamLimits

0xd7d5,	// (0x0003efe0) aid_inside_area_window_primary

0x65d7,	// (0x00037de2) ai2_news_ticker_pane

0x65df,	// (0x00037dea) aid_size_cell_ai1_link_ParamLimits

0x65df,	// (0x00037dea) aid_size_cell_ai1_link

0xdb88,	// (0x0003f393) popup_ai2_data_window_ParamLimits

0xdb88,	// (0x0003f393) popup_ai2_data_window

0x660f,	// (0x00037e1a) popup_ai2_link_window_ParamLimits

0x660f,	// (0x00037e1a) popup_ai2_link_window

0x4d4c,	// (0x00036557) bg_popup_sub_pane_cp4_ParamLimits

0x4d4c,	// (0x00036557) bg_popup_sub_pane_cp4

0x6623,	// (0x00037e2e) grid_ai2_link_pane_ParamLimits

0x6623,	// (0x00037e2e) grid_ai2_link_pane

0x663a,	// (0x00037e45) popup_ai2_link_window_g1_ParamLimits

0x663a,	// (0x00037e45) popup_ai2_link_window_g1

0x6646,	// (0x00037e51) popup_ai2_link_window_g2_ParamLimits

0x6646,	// (0x00037e51) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x000411b2) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x000411b2) popup_ai2_link_window_g

0x6655,	// (0x00037e60) ai2_mp_button_pane

0x665d,	// (0x00037e68) ai2_mp_volume_pane

0x4f59,	// (0x00036764) bg_popup_sub_pane_cp5_ParamLimits

0x4f59,	// (0x00036764) bg_popup_sub_pane_cp5

0x6665,	// (0x00037e70) heading_ai2_gene_pane_ParamLimits

0x6665,	// (0x00037e70) heading_ai2_gene_pane

0x6671,	// (0x00037e7c) list_ai2_gene_pane_ParamLimits

0x6671,	// (0x00037e7c) list_ai2_gene_pane

0x66b9,	// (0x00037ec4) cell_ai2_link_pane_ParamLimits

0x66b9,	// (0x00037ec4) cell_ai2_link_pane

0x66cf,	// (0x00037eda) cell_ai2_link_pane_g1

0xe1f6,	// (0x0003fa01) grid_highlight_pane_cp7

0x1553,	// (0x00032d5e) ai2_mp_volume_pane_g1

0x679f,	// (0x00037faa) ai2_mp_volume_pane_g2

0xdbb2,	// (0x0003f3bd) list_ai2_gene_pane_t1

0x67a7,	// (0x00037fb2) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x000411cb) ai2_mp_volume_pane_g

0x155b,	// (0x00032d66) volume_small_pane_cp3

0x67af,	// (0x00037fba) aid_size_cell_ai2_button

0x67b7,	// (0x00037fc2) grid_ai2_button_pane

0x67c0,	// (0x00037fcb) cell_ai2_button_pane_ParamLimits

0x67c0,	// (0x00037fcb) cell_ai2_button_pane

0xe1ec,	// (0x0003f9f7) cell_ai2_button_pane_g1

0xe1f6,	// (0x0003fa01) grid_highlight_pane_cp8

0x675f,	// (0x00037f6a) ai2_gene_pane_t1_ParamLimits

0x675f,	// (0x00037f6a) ai2_gene_pane_t1

0xc0cd,	// (0x0003d8d8) aid_height_parent_landscape

0xd91d,	// (0x0003f128) aid_height_set_list

0x60b1,	// (0x000378bc) aid_size_parent

0x63fa,	// (0x00037c05) aid_size_cell_graphic_pane_ParamLimits

0x6681,	// (0x00037e8c) popup_ai2_data_window_g1_ParamLimits

0x6681,	// (0x00037e8c) popup_ai2_data_window_g1

0x668d,	// (0x00037e98) ai2_news_ticker_pane_g1

0x6695,	// (0x00037ea0) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x000411b7) ai2_news_ticker_pane_g

0x669d,	// (0x00037ea8) ai2_news_ticker_pane_t1

0x66ab,	// (0x00037eb6) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x000411bc) ai2_news_ticker_pane_t

0x66d8,	// (0x00037ee3) heading_ai2_gene_pane_g1

0x66e0,	// (0x00037eeb) heading_ai2_gene_pane_t1_ParamLimits

0x66e0,	// (0x00037eeb) heading_ai2_gene_pane_t1

0x66f5,	// (0x00037f00) list_highlight_pane_cp6

0xdb9c,	// (0x0003f3a7) ai2_gene_pane_ParamLimits

0xdb9c,	// (0x0003f3a7) ai2_gene_pane

0xdbc0,	// (0x0003f3cb) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x000411c1) list_ai2_gene_pane_t

0x6730,	// (0x00037f3b) list_highlight_pane_cp8_ParamLimits

0x6730,	// (0x00037f3b) list_highlight_pane_cp8

0x6741,	// (0x00037f4c) ai2_gene_pane_g1_ParamLimits

0x6741,	// (0x00037f4c) ai2_gene_pane_g1

0x6753,	// (0x00037f5e) ai2_gene_pane_g2_ParamLimits

0x6753,	// (0x00037f5e) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x000411c6) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x000411c6) ai2_gene_pane_g

0x3576,	// (0x00034d81) scroll_pane_cp12

0xc08a,	// (0x0003d895) control_pane_t3_ParamLimits

0xc08a,	// (0x0003d895) control_pane_t3

0x470c,	// (0x00035f17) status_small_pane_g8_ParamLimits

0x470c,	// (0x00035f17) status_small_pane_g8

0xc1cc,	// (0x0003d9d7) popup_find_window_ParamLimits

0xc45f,	// (0x0003dc6a) popup_note_image_window_ParamLimits

0x0f10,	// (0x0003271b) list_double2_graphic_pane_vc_g1_ParamLimits

0x0f10,	// (0x0003271b) list_double2_graphic_pane_vc_g1

0x0f1c,	// (0x00032727) list_double2_graphic_pane_vc_g2_ParamLimits

0x0f1c,	// (0x00032727) list_double2_graphic_pane_vc_g2

0x0f28,	// (0x00032733) list_double2_graphic_pane_vc_g3_ParamLimits

0x0f28,	// (0x00032733) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x00040fa2) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x00040fa2) list_double2_graphic_pane_vc_g

0x0f34,	// (0x0003273f) list_double2_graphic_pane_vc_t1_ParamLimits

0x0f34,	// (0x0003273f) list_double2_graphic_pane_vc_t1

0x0f9f,	// (0x000327aa) list_single_heading_pane_vc_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_single_heading_pane_vc_g1

0x0fab,	// (0x000327b6) list_single_heading_pane_vc_g2_ParamLimits

0x0fab,	// (0x000327b6) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00040dac) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00040dac) list_single_heading_pane_vc_g

0x0fb7,	// (0x000327c2) list_single_heading_pane_vc_t1_ParamLimits

0x0fb7,	// (0x000327c2) list_single_heading_pane_vc_t1

0x0fcd,	// (0x000327d8) list_single_heading_pane_vc_t2_ParamLimits

0x0fcd,	// (0x000327d8) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x00040fc3) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x00040fc3) list_single_heading_pane_vc_t

0x1005,	// (0x00032810) list_setting_number_pane_vc_g1_ParamLimits

0x1005,	// (0x00032810) list_setting_number_pane_vc_g1

0x1011,	// (0x0003281c) list_setting_number_pane_vc_g2_ParamLimits

0x1011,	// (0x0003281c) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x00040fc8) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x00040fc8) list_setting_number_pane_vc_g

0x101d,	// (0x00032828) list_setting_number_pane_vc_t1_ParamLimits

0x101d,	// (0x00032828) list_setting_number_pane_vc_t1

0x1031,	// (0x0003283c) list_setting_number_pane_vc_t2_ParamLimits

0x1031,	// (0x0003283c) list_setting_number_pane_vc_t2

0x104d,	// (0x00032858) list_setting_number_pane_vc_t3_ParamLimits

0x104d,	// (0x00032858) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x00040fcd) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x00040fcd) list_setting_number_pane_vc_t

0x106b,	// (0x00032876) set_value_pane_vc_ParamLimits

0x106b,	// (0x00032876) set_value_pane_vc

0x140d,	// (0x00032c18) list_double2_graphic_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double2_graphic_pane_vc

0x6269,	// (0x00037a74) list_double2_large_graphic_pane_vc_ParamLimits

0x6269,	// (0x00037a74) list_double2_large_graphic_pane_vc

0x140d,	// (0x00032c18) list_double2_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double2_pane_vc

0x140d,	// (0x00032c18) list_double_graphic_heading_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double_graphic_heading_pane_vc

0x140d,	// (0x00032c18) list_double_graphic_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double_graphic_pane_vc

0x140d,	// (0x00032c18) list_double_heading_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double_heading_pane_vc

0x627b,	// (0x00037a86) list_double_large_graphic_pane_vc_ParamLimits

0x627b,	// (0x00037a86) list_double_large_graphic_pane_vc

0x140d,	// (0x00032c18) list_double_number_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double_number_pane_vc

0x140d,	// (0x00032c18) list_double_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double_pane_vc

0x140d,	// (0x00032c18) list_double_time_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_double_time_pane_vc

0x140d,	// (0x00032c18) list_setting_number_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_setting_number_pane_vc

0x140d,	// (0x00032c18) list_setting_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_setting_pane_vc

0x140d,	// (0x00032c18) list_single_graphic_heading_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_single_graphic_heading_pane_vc

0x140d,	// (0x00032c18) list_single_heading_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_single_heading_pane_vc

0x140d,	// (0x00032c18) list_single_number_heading_pane_vc_ParamLimits

0x140d,	// (0x00032c18) list_single_number_heading_pane_vc

0xf4e5,	// (0x00040cf0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xf4e5,	// (0x00040cf0) list_double_graphic_heading_pane_vc_g1

0xf4f1,	// (0x00040cfc) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf4f1,	// (0x00040cfc) list_double_graphic_heading_pane_vc_g2

0xf4fd,	// (0x00040d08) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xf4fd,	// (0x00040d08) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c7,	// (0x000411d2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c7,	// (0x000411d2) list_double_graphic_heading_pane_vc_g

0x1564,	// (0x00032d6f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1564,	// (0x00032d6f) list_double_graphic_heading_pane_vc_t1

0x1580,	// (0x00032d8b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1580,	// (0x00032d8b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x000411d9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x000411d9) list_double_graphic_heading_pane_vc_t

0x1005,	// (0x00032810) list_setting_pane_vc_g1_ParamLimits

0x1005,	// (0x00032810) list_setting_pane_vc_g1

0x1011,	// (0x0003281c) list_setting_pane_vc_g2_ParamLimits

0x1011,	// (0x0003281c) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x00040fc8) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x00040fc8) list_setting_pane_vc_g

0x159e,	// (0x00032da9) list_setting_pane_vc_t1_ParamLimits

0x159e,	// (0x00032da9) list_setting_pane_vc_t1

0x15ba,	// (0x00032dc5) list_setting_pane_vc_t2_ParamLimits

0x15ba,	// (0x00032dc5) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x00041207) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x00041207) list_setting_pane_vc_t

0x106b,	// (0x00032876) set_value_pane_cp_vc_ParamLimits

0x106b,	// (0x00032876) set_value_pane_cp_vc

0x0f9f,	// (0x000327aa) list_single_number_heading_pane_vc_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_single_number_heading_pane_vc_g1

0x0fab,	// (0x000327b6) list_single_number_heading_pane_vc_g2_ParamLimits

0x0fab,	// (0x000327b6) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00040dac) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00040dac) list_single_number_heading_pane_vc_g

0x15d6,	// (0x00032de1) list_single_number_heading_pane_vc_t1_ParamLimits

0x15d6,	// (0x00032de1) list_single_number_heading_pane_vc_t1

0x15ec,	// (0x00032df7) list_single_number_heading_pane_vc_t2_ParamLimits

0x15ec,	// (0x00032df7) list_single_number_heading_pane_vc_t2

0xf509,	// (0x00040d14) list_single_number_heading_pane_vc_t3_ParamLimits

0xf509,	// (0x00040d14) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0004120c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0004120c) list_single_number_heading_pane_vc_t

0x0f10,	// (0x0003271b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0f10,	// (0x0003271b) list_single_graphic_heading_pane_vc_g1

0x0f9f,	// (0x000327aa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0f9f,	// (0x000327aa) list_single_graphic_heading_pane_vc_g4

0x0fab,	// (0x000327b6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0fab,	// (0x000327b6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa08,	// (0x00041213) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa08,	// (0x00041213) list_single_graphic_heading_pane_vc_g

0x15d6,	// (0x00032de1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x15d6,	// (0x00032de1) list_single_graphic_heading_pane_vc_t1

0x1602,	// (0x00032e0d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1602,	// (0x00032e0d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0004121a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0004121a) list_single_graphic_heading_pane_vc_t

0x0f9f,	// (0x000327aa) list_double2_pane_vc_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_double2_pane_vc_g1

0x0fab,	// (0x000327b6) list_double2_pane_vc_g2_ParamLimits

0x0fab,	// (0x000327b6) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x00040dac) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x00040dac) list_double2_pane_vc_g

0x1614,	// (0x00032e1f) list_double2_pane_vc_t1_ParamLimits

0x1614,	// (0x00032e1f) list_double2_pane_vc_t1

0x162a,	// (0x00032e35) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x162a,	// (0x00032e35) list_double2_large_graphic_pane_vc_g1

0xe21b,	// (0x0003fa26) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe21b,	// (0x0003fa26) list_double2_large_graphic_pane_vc_g2

0xe227,	// (0x0003fa32) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe227,	// (0x0003fa32) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00040dc9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00040dc9) list_double2_large_graphic_pane_vc_g

0x1636,	// (0x00032e41) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1636,	// (0x00032e41) list_double2_large_graphic_pane_vc_t1

0x164c,	// (0x00032e57) list_double_time_pane_vc_g1_ParamLimits

0x164c,	// (0x00032e57) list_double_time_pane_vc_g1

0x1658,	// (0x00032e63) list_double_time_pane_vc_g2_ParamLimits

0x1658,	// (0x00032e63) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0004121f) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0004121f) list_double_time_pane_vc_g

0x1664,	// (0x00032e6f) list_double_time_pane_vc_t1_ParamLimits

0x1664,	// (0x00032e6f) list_double_time_pane_vc_t1

0x1688,	// (0x00032e93) list_double_time_pane_vc_t2_ParamLimits

0x1688,	// (0x00032e93) list_double_time_pane_vc_t2

0x16d2,	// (0x00032edd) list_double_time_pane_vc_t3_ParamLimits

0x16d2,	// (0x00032edd) list_double_time_pane_vc_t3

0x16e4,	// (0x00032eef) list_double_time_pane_vc_t4_ParamLimits

0x16e4,	// (0x00032eef) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x00041224) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x00041224) list_double_time_pane_vc_t

0x0f9f,	// (0x000327aa) list_double_pane_vc_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_double_pane_vc_g1

0x0fab,	// (0x000327b6) list_double_pane_vc_g2_ParamLimits

0x0fab,	// (0x000327b6) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x00040dac) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x00040dac) list_double_pane_vc_g

0x16f8,	// (0x00032f03) list_double_pane_vc_t1_ParamLimits

0x16f8,	// (0x00032f03) list_double_pane_vc_t1

0x170c,	// (0x00032f17) list_double_pane_vc_t2_ParamLimits

0x170c,	// (0x00032f17) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0004122d) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0004122d) list_double_pane_vc_t

0x0f9f,	// (0x000327aa) list_double_number_pane_vc_g1_ParamLimits

0x0f9f,	// (0x000327aa) list_double_number_pane_vc_g1

0x0fab,	// (0x000327b6) list_double_number_pane_vc_g2_ParamLimits

0x0fab,	// (0x000327b6) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x00040dac) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x00040dac) list_double_number_pane_vc_g

0x1724,	// (0x00032f2f) list_double_number_pane_vc_t1_ParamLimits

0x1724,	// (0x00032f2f) list_double_number_pane_vc_t1

0x1736,	// (0x00032f41) list_double_number_pane_vc_t2_ParamLimits

0x1736,	// (0x00032f41) list_double_number_pane_vc_t2

0x174a,	// (0x00032f55) list_double_number_pane_vc_t3_ParamLimits

0x174a,	// (0x00032f55) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x00041232) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x00041232) list_double_number_pane_vc_t

0x1764,	// (0x00032f6f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1764,	// (0x00032f6f) list_double_large_graphic_pane_vc_g1

0x1780,	// (0x00032f8b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1780,	// (0x00032f8b) list_double_large_graphic_pane_vc_g2

0x1794,	// (0x00032f9f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1794,	// (0x00032f9f) list_double_large_graphic_pane_vc_g3

0x17a3,	// (0x00032fae) list_double_large_graphic_pane_vc_g4_ParamLimits

0x17a3,	// (0x00032fae) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x00041239) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x00041239) list_double_large_graphic_pane_vc_g

0x17b2,	// (0x00032fbd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x17b2,	// (0x00032fbd) list_double_large_graphic_pane_vc_t1

0x17ce,	// (0x00032fd9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x17ce,	// (0x00032fd9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x00041242) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x00041242) list_double_large_graphic_pane_vc_t

0xf4f1,	// (0x00040cfc) list_double_heading_pane_vc_g1_ParamLimits

0xf4f1,	// (0x00040cfc) list_double_heading_pane_vc_g1

0xf4fd,	// (0x00040d08) list_double_heading_pane_vc_g2_ParamLimits

0xf4fd,	// (0x00040d08) list_double_heading_pane_vc_g2

0x0001,

0xfa3c,	// (0x00041247) list_double_heading_pane_vc_g_ParamLimits

0xfa3c,	// (0x00041247) list_double_heading_pane_vc_g

0x17f0,	// (0x00032ffb) list_double_heading_pane_vc_t1_ParamLimits

0x17f0,	// (0x00032ffb) list_double_heading_pane_vc_t1

0x1804,	// (0x0003300f) list_double_heading_pane_vc_t2_ParamLimits

0x1804,	// (0x0003300f) list_double_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0004124c) list_double_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0004124c) list_double_heading_pane_vc_t

0x181c,	// (0x00033027) list_double_graphic_pane_vc_g1_ParamLimits

0x181c,	// (0x00033027) list_double_graphic_pane_vc_g1

0x182f,	// (0x0003303a) list_double_graphic_pane_vc_g2_ParamLimits

0x182f,	// (0x0003303a) list_double_graphic_pane_vc_g2

0x0f9f,	// (0x000327aa) list_double_graphic_pane_vc_g3_ParamLimits

0x0f9f,	// (0x000327aa) list_double_graphic_pane_vc_g3

0x0003,

0xfa46,	// (0x00041251) list_double_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x00041251) list_double_graphic_pane_vc_g

0x184c,	// (0x00033057) list_double_graphic_pane_vc_t1_ParamLimits

0x184c,	// (0x00033057) list_double_graphic_pane_vc_t1

0x1876,	// (0x00033081) list_double_graphic_pane_vc_t2_ParamLimits

0x1876,	// (0x00033081) list_double_graphic_pane_vc_t2

0x0001,

0xfa4f,	// (0x0004125a) list_double_graphic_pane_vc_t_ParamLimits

0xfa4f,	// (0x0004125a) list_double_graphic_pane_vc_t

0xf1a5,	// (0x000409b0) aid_size_cell_fastswap

0xb247,	// (0x0003ca52) aid_size_cell_touch_ParamLimits

0xb247,	// (0x0003ca52) aid_size_cell_touch

0xf375,	// (0x00040b80) popup_fast_swap_wide_window_ParamLimits

0xf375,	// (0x00040b80) popup_fast_swap_wide_window

0xb3b5,	// (0x0003cbc0) touch_pane_ParamLimits

0xb3b5,	// (0x0003cbc0) touch_pane

0x35cc,	// (0x00034dd7) button_value_adjust_pane_cp2

0xf463,	// (0x00040c6e) button_value_adjust_pane_cp4

0xf46b,	// (0x00040c76) form_field_data_pane_cp2

0xbbc4,	// (0x0003d3cf) form_field_data_wide_pane_cp2

0x3c43,	// (0x0003544e) bg_scroll_pane_ParamLimits

0x0435,	// (0x00031c40) scroll_handle_pane_ParamLimits

0x0449,	// (0x00031c54) scroll_sc2_down_pane_ParamLimits

0x0449,	// (0x00031c54) scroll_sc2_down_pane

0x3c74,	// (0x0003547f) scroll_sc2_up_pane_ParamLimits

0x3c74,	// (0x0003547f) scroll_sc2_up_pane

0xdcf0,	// (0x0003f4fb) grid_wheel_folder_pane_g1_ParamLimits

0xdcf0,	// (0x0003f4fb) grid_wheel_folder_pane_g1

0x0698,	// (0x00031ea3) clock_nsta_pane_cp2_ParamLimits

0x0698,	// (0x00031ea3) clock_nsta_pane_cp2

0xd1df,	// (0x0003e9ea) listscroll_midp_pane_ParamLimits

0xd1eb,	// (0x0003e9f6) midp_canvas_pane

0x4786,	// (0x00035f91) nsta_clock_indic_pane

0x47ba,	// (0x00035fc5) listscroll_form_pane_vc

0x47c2,	// (0x00035fcd) listscroll_set_pane_vc_ParamLimits

0x47c2,	// (0x00035fcd) listscroll_set_pane_vc

0xd3f9,	// (0x0003ec04) clock_nsta_pane

0xd423,	// (0x0003ec2e) indicator_nsta_pane

0x4c16,	// (0x00036421) bg_popup_sub_pane_cp2_ParamLimits

0x4c2a,	// (0x00036435) find_pane_cp2_ParamLimits

0x4c2a,	// (0x00036435) find_pane_cp2

0x4c40,	// (0x0003644b) grid_toobar_pane_ParamLimits

0x4d20,	// (0x0003652b) list_form_gen_pane_vc_ParamLimits

0x4d20,	// (0x0003652b) list_form_gen_pane_vc

0x4d36,	// (0x00036541) scroll_pane_cp8_vc_ParamLimits

0x4d36,	// (0x00036541) scroll_pane_cp8_vc

0x4db2,	// (0x000365bd) data_form_wide_pane_vc_ParamLimits

0x4db2,	// (0x000365bd) data_form_wide_pane_vc

0x4dbe,	// (0x000365c9) form_field_data_wide_pane_vc_g1

0x4dc6,	// (0x000365d1) form_field_data_wide_pane_vc_t1_ParamLimits

0x4dc6,	// (0x000365d1) form_field_data_wide_pane_vc_t1

0x35e0,	// (0x00034deb) input_focus_pane_cp6_vc_ParamLimits

0x35e0,	// (0x00034deb) input_focus_pane_cp6_vc

0x510c,	// (0x00036917) list_midp_pane_ParamLimits

0x6464,	// (0x00037c6f) scroll_pane_cp16_ParamLimits

0x6464,	// (0x00037c6f) scroll_pane_cp16

0x5162,	// (0x0003696d) button_value_adjust_pane_ParamLimits

0x5162,	// (0x0003696d) button_value_adjust_pane

0xd92e,	// (0x0003f139) button_value_adjust_pane_cp6_ParamLimits

0xd92e,	// (0x0003f139) button_value_adjust_pane_cp6

0xda48,	// (0x0003f253) settings_code_pane_cp_ParamLimits

0xda48,	// (0x0003f253) settings_code_pane_cp

0xe1ec,	// (0x0003f9f7) cell_touch_pane_g1

0xe1ec,	// (0x0003f9f7) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x00040ee7) cell_touch_pane_g

0xdbce,	// (0x0003f3d9) cell_touch_pane_cp_ParamLimits

0xdbce,	// (0x0003f3d9) cell_touch_pane_cp

0xdbea,	// (0x0003f3f5) cell_touch_pane_ParamLimits

0xdbea,	// (0x0003f3f5) cell_touch_pane

0xe1ec,	// (0x0003f9f7) scroll_sc2_down_pane_g1

0xe1ec,	// (0x0003f9f7) scroll_sc2_up_pane_g1

0xe1f6,	// (0x0003fa01) bg_set_opt_pane_cp4_vc

0x67f4,	// (0x00037fff) list_set_graphic_pane_vc_g1_ParamLimits

0x67f4,	// (0x00037fff) list_set_graphic_pane_vc_g1

0x6800,	// (0x0003800b) list_set_graphic_pane_vc_g2_ParamLimits

0x6800,	// (0x0003800b) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x000411de) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x000411de) list_set_graphic_pane_vc_g

0x680c,	// (0x00038017) text_primary_small_cp13_vc_ParamLimits

0x680c,	// (0x00038017) text_primary_small_cp13_vc

0x6824,	// (0x0003802f) list_set_graphic_pane_vc_ParamLimits

0x6824,	// (0x0003802f) list_set_graphic_pane_vc

0xe1f6,	// (0x0003fa01) input_focus_pane_cp2_vc

0xe1ec,	// (0x0003f9f7) setting_code_pane_vc_g1

0x2d9e,	// (0x000345a9) setting_code_pane_vc_t1

0x6837,	// (0x00038042) set_text_pane_vc_t1_ParamLimits

0x6837,	// (0x00038042) set_text_pane_vc_t1

0xe1f6,	// (0x0003fa01) input_focus_pane_cp1_vc

0x6853,	// (0x0003805e) list_set_text_pane_vc

0xe1ec,	// (0x0003f9f7) setting_text_pane_vc_g1

0xe1f6,	// (0x0003fa01) bg_set_opt_pane_cp2_vc

0x2d95,	// (0x000345a0) setting_slider_graphic_pane_vc_g1

0x685d,	// (0x00038068) setting_slider_graphic_pane_vc_t1

0x686d,	// (0x00038078) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x000411e3) setting_slider_graphic_pane_vc_t

0x687d,	// (0x00038088) slider_set_pane_cp_vc

0x6885,	// (0x00038090) slider_set_pane_vc_g1

0x688e,	// (0x00038099) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x000411e8) slider_set_pane_vc_g

0x3638,	// (0x00034e43) set_opt_bg_pane_g1_copy1

0x3640,	// (0x00034e4b) set_opt_bg_pane_g2_copy1

0x68ba,	// (0x000380c5) set_opt_bg_pane_g3_copy1

0x3650,	// (0x00034e5b) set_opt_bg_pane_g4_copy1

0x3658,	// (0x00034e63) set_opt_bg_pane_g5_copy1

0x3660,	// (0x00034e6b) set_opt_bg_pane_g6_copy1

0x68c4,	// (0x000380cf) set_opt_bg_pane_g7_copy1

0x68ce,	// (0x000380d9) set_opt_bg_pane_g8_copy1

0x68d8,	// (0x000380e3) set_opt_bg_pane_g9_copy1

0xe1f6,	// (0x0003fa01) bg_set_opt_pane_cp_vc

0x68e2,	// (0x000380ed) setting_slider_pane_vc_t1

0x68f1,	// (0x000380fc) setting_slider_pane_vc_t2

0x6901,	// (0x0003810c) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x000411f7) setting_slider_pane_vc_t

0x6911,	// (0x0003811c) slider_set_pane_vc

0x1159,	// (0x00032964) volume_set_pane_vc_g1

0x1162,	// (0x0003296d) volume_set_pane_vc_g2

0x116b,	// (0x00032976) volume_set_pane_vc_g3

0x1174,	// (0x0003297f) volume_set_pane_vc_g4

0x117d,	// (0x00032988) volume_set_pane_vc_g5

0x1186,	// (0x00032991) volume_set_pane_vc_g6

0x118f,	// (0x0003299a) volume_set_pane_vc_g7

0x1198,	// (0x000329a3) volume_set_pane_vc_g8

0x11a1,	// (0x000329ac) volume_set_pane_vc_g9

0x11aa,	// (0x000329b5) volume_set_pane_vc_g10

0x0009,

0xf88a,	// (0x00041095) volume_set_pane_vc_g

0x6919,	// (0x00038124) volume_set_pane_vc

0x6921,	// (0x0003812c) button_value_adjust_pane_cp1_vc

0x692b,	// (0x00038136) list_highlight_pane_cp2_vc

0x6934,	// (0x0003813f) list_set_pane_vc_ParamLimits

0x6934,	// (0x0003813f) list_set_pane_vc

0x6992,	// (0x0003819d) main_pane_set_vc_t1_ParamLimits

0x6992,	// (0x0003819d) main_pane_set_vc_t1

0x69a7,	// (0x000381b2) main_pane_set_vc_t2_ParamLimits

0x69a7,	// (0x000381b2) main_pane_set_vc_t2

0x69b9,	// (0x000381c4) main_pane_set_vc_t3_ParamLimits

0x69b9,	// (0x000381c4) main_pane_set_vc_t3

0x69cd,	// (0x000381d8) main_pane_set_vc_t4_ParamLimits

0x69cd,	// (0x000381d8) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x000411fe) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x000411fe) main_pane_set_vc_t

0x69e1,	// (0x000381ec) setting_code_pane_vc_ParamLimits

0x69e1,	// (0x000381ec) setting_code_pane_vc

0x69f2,	// (0x000381fd) setting_slider_graphic_pane_vc

0x69f2,	// (0x000381fd) setting_slider_pane_vc

0x69f2,	// (0x000381fd) setting_text_pane_vc

0x69f2,	// (0x000381fd) setting_volume_pane_vc

0x69fc,	// (0x00038207) scroll_pane_cp121_vc

0x35ba,	// (0x00034dc5) set_content_pane_vc

0x6a04,	// (0x0003820f) button_value_adjust_pane_g1

0x6a0d,	// (0x00038218) button_value_adjust_pane_g2

0x0001,

0xfa54,	// (0x0004125f) button_value_adjust_pane_g

0x6a16,	// (0x00038221) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a16,	// (0x00038221) form_field_slider_wide_pane_vc_t1

0x6a2a,	// (0x00038235) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a2a,	// (0x00038235) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa59,	// (0x00041264) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa59,	// (0x00041264) form_field_slider_wide_pane_vc_t

0x2fce,	// (0x000347d9) input_focus_pane_cp10_vc_ParamLimits

0x2fce,	// (0x000347d9) input_focus_pane_cp10_vc

0x6a58,	// (0x00038263) slider_cont_pane_cp1_vc_ParamLimits

0x6a58,	// (0x00038263) slider_cont_pane_cp1_vc

0x6a6a,	// (0x00038275) slider_form_pane_g1_cp2

0x688e,	// (0x00038099) slider_form_pane_g2_cp2

0x6a97,	// (0x000382a2) form_field_slider_pane_vc_t3

0x6aa5,	// (0x000382b0) form_field_slider_pane_vc_t4

0x6ab3,	// (0x000382be) slider_form_pane_vc_ParamLimits

0x6ab3,	// (0x000382be) slider_form_pane_vc

0x6ac0,	// (0x000382cb) form_field_slider_pane_vc_t1_ParamLimits

0x6ac0,	// (0x000382cb) form_field_slider_pane_vc_t1

0x6a2a,	// (0x00038235) form_field_slider_pane_vc_t2_ParamLimits

0x6a2a,	// (0x00038235) form_field_slider_pane_vc_t2

0x0001,

0xfa6b,	// (0x00041276) form_field_slider_pane_vc_t_ParamLimits

0xfa6b,	// (0x00041276) form_field_slider_pane_vc_t

0x2fce,	// (0x000347d9) input_focus_pane_cp9_vc_ParamLimits

0x2fce,	// (0x000347d9) input_focus_pane_cp9_vc

0x6adc,	// (0x000382e7) slider_cont_pane_vc_ParamLimits

0x6adc,	// (0x000382e7) slider_cont_pane_vc

0x6af0,	// (0x000382fb) list_form_graphic_pane_cp_vc_ParamLimits

0x6af0,	// (0x000382fb) list_form_graphic_pane_cp_vc

0x4dbe,	// (0x000365c9) form_field_popup_wide_pane_vc_g1

0x6b11,	// (0x0003831c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b11,	// (0x0003831c) form_field_popup_wide_pane_vc_t1

0x35e0,	// (0x00034deb) input_focus_pane_cp8_vc_ParamLimits

0x35e0,	// (0x00034deb) input_focus_pane_cp8_vc

0x6b56,	// (0x00038361) list_form_wide_pane_vc_ParamLimits

0x6b56,	// (0x00038361) list_form_wide_pane_vc

0x6b62,	// (0x0003836d) list_form_graphic_pane_vc_g1

0x6b6a,	// (0x00038375) list_form_graphic_pane_vc_t1_ParamLimits

0x6b6a,	// (0x00038375) list_form_graphic_pane_vc_t1

0x2d53,	// (0x0003455e) list_highlight_pane_cp5_vc_ParamLimits

0x2d53,	// (0x0003455e) list_highlight_pane_cp5_vc

0x6b86,	// (0x00038391) list_form_graphic_pane_vc_ParamLimits

0x6b86,	// (0x00038391) list_form_graphic_pane_vc

0x4dbe,	// (0x000365c9) form_field_popup_pane_vc_g1

0x6b9c,	// (0x000383a7) form_field_popup_pane_vc_t1_ParamLimits

0x6b9c,	// (0x000383a7) form_field_popup_pane_vc_t1

0x35e0,	// (0x00034deb) input_focus_pane_cp7_vc_ParamLimits

0x35e0,	// (0x00034deb) input_focus_pane_cp7_vc

0x6bb3,	// (0x000383be) list_form_pane_vc_ParamLimits

0x6bb3,	// (0x000383be) list_form_pane_vc

0x6bbf,	// (0x000383ca) data_form_pane_vc_t1_ParamLimits

0x6bbf,	// (0x000383ca) data_form_pane_vc_t1

0x3638,	// (0x00034e43) input_focus_pane_vc_g1

0x3640,	// (0x00034e4b) input_focus_pane_vc_g2

0x3648,	// (0x00034e53) input_focus_pane_vc_g3

0x3650,	// (0x00034e5b) input_focus_pane_vc_g4

0x3658,	// (0x00034e63) input_focus_pane_vc_g5

0x3660,	// (0x00034e6b) input_focus_pane_vc_g6

0x3668,	// (0x00034e73) input_focus_pane_vc_g7

0x3670,	// (0x00034e7b) input_focus_pane_vc_g8

0x3678,	// (0x00034e83) input_focus_pane_vc_g9

0xe1ec,	// (0x0003f9f7) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x00040e70) input_focus_pane_vc_g

0x4db2,	// (0x000365bd) data_form_pane_vc_ParamLimits

0x4db2,	// (0x000365bd) data_form_pane_vc

0x4dbe,	// (0x000365c9) form_field_data_pane_vc_g1

0x6bda,	// (0x000383e5) form_field_data_pane_vc_t1_ParamLimits

0x6bda,	// (0x000383e5) form_field_data_pane_vc_t1

0x35e0,	// (0x00034deb) input_focus_pane_vc_ParamLimits

0x35e0,	// (0x00034deb) input_focus_pane_vc

0x6bf4,	// (0x000383ff) button_value_adjust_pane_cp3_vc

0x6bfc,	// (0x00038407) button_value_adjust_pane_cp5_vc

0x6c04,	// (0x0003840f) form_field_data_pane_vc_ParamLimits

0x6c04,	// (0x0003840f) form_field_data_pane_vc

0x6c1b,	// (0x00038426) form_field_data_pane_vc_cp2

0x6c23,	// (0x0003842e) form_field_data_wide_pane_vc_ParamLimits

0x6c23,	// (0x0003842e) form_field_data_wide_pane_vc

0x6c39,	// (0x00038444) form_field_data_wide_pane_vc_cp2

0x6c41,	// (0x0003844c) form_field_popup_pane_vc_ParamLimits

0x6c41,	// (0x0003844c) form_field_popup_pane_vc

0x6c58,	// (0x00038463) form_field_popup_wide_pane_vc_ParamLimits

0x6c58,	// (0x00038463) form_field_popup_wide_pane_vc

0x6c6e,	// (0x00038479) form_field_slider_pane_vc_ParamLimits

0x6c6e,	// (0x00038479) form_field_slider_pane_vc

0x6c81,	// (0x0003848c) form_field_slider_wide_pane_vc_ParamLimits

0x6c81,	// (0x0003848c) form_field_slider_wide_pane_vc

0xdc08,	// (0x0003f413) grid_touch_1_pane_ParamLimits

0xdc08,	// (0x0003f413) grid_touch_1_pane

0xdc1c,	// (0x0003f427) grid_touch_2_pane_ParamLimits

0xdc1c,	// (0x0003f427) grid_touch_2_pane

0x6d65,	// (0x00038570) touch_pane_g1_ParamLimits

0x6d65,	// (0x00038570) touch_pane_g1

0x6cb8,	// (0x000384c3) cell_app_pane_cp_wide_ParamLimits

0x6cb8,	// (0x000384c3) cell_app_pane_cp_wide

0x6cc9,	// (0x000384d4) grid_popup_fast_wide_pane_ParamLimits

0x6cc9,	// (0x000384d4) grid_popup_fast_wide_pane

0x6cdd,	// (0x000384e8) scroll_pane_cp19_ParamLimits

0x6cdd,	// (0x000384e8) scroll_pane_cp19

0xe1f6,	// (0x0003fa01) bg_popup_window_pane_cp20

0x6cf1,	// (0x000384fc) listscroll_popup_fast_wide_pane

0xdc46,	// (0x0003f451) grid_indicator_nsta_pane

0x6d0b,	// (0x00038516) clock_nsta_pane_g1

0x6d14,	// (0x0003851f) clock_nsta_pane_t1

0xdc52,	// (0x0003f45d) cell_indicator_nsta_pane_ParamLimits

0xdc52,	// (0x0003f45d) cell_indicator_nsta_pane

0x6d65,	// (0x00038570) cell_indicator_nsta_pane_g1

0xdc6d,	// (0x0003f478) cell_indicator_nsta_pane_g2

0x0001,

0xfa7c,	// (0x00041287) cell_indicator_nsta_pane_g

0x6d85,	// (0x00038590) clock_nsta_pane_cp

0x6d8e,	// (0x00038599) indicator_nsta_pane_cp

0x6d98,	// (0x000385a3) nsta_clock_indic_pane_g1

0x2e1c,	// (0x00034627) grid_indicator_pane

0x3d69,	// (0x00035574) scroll_pane_cp29

0x05e7,	// (0x00031df2) indicator_nsta_pane_cp2_ParamLimits

0x05e7,	// (0x00031df2) indicator_nsta_pane_cp2

0x2d53,	// (0x0003455e) main_apps_wheel_pane

0x4fcd,	// (0x000367d8) form_midp_field_text_pane_ParamLimits

0x5118,	// (0x00036923) scroll_bar_cp050_ParamLimits

0x6df1,	// (0x000385fc) cell_indicator_pane_ParamLimits

0x6df1,	// (0x000385fc) cell_indicator_pane

0x6e08,	// (0x00038613) cell_indicator_pane_g1

0xdc7a,	// (0x0003f485) grid_wheel_folder_pane_ParamLimits

0xdc7a,	// (0x0003f485) grid_wheel_folder_pane

0xdc88,	// (0x0003f493) list_wheel_apps_pane_ParamLimits

0xdc88,	// (0x0003f493) list_wheel_apps_pane

0xdc96,	// (0x0003f4a1) main_apps_wheel_pane_g1_ParamLimits

0xdc96,	// (0x0003f4a1) main_apps_wheel_pane_g1

0xdca2,	// (0x0003f4ad) main_apps_wheel_pane_g2_ParamLimits

0xdca2,	// (0x0003f4ad) main_apps_wheel_pane_g2

0x0001,

0xfa98,	// (0x000412a3) main_apps_wheel_pane_g_ParamLimits

0xfa98,	// (0x000412a3) main_apps_wheel_pane_g

0xdcb0,	// (0x0003f4bb) main_apps_wheel_pane_t1_ParamLimits

0xdcb0,	// (0x0003f4bb) main_apps_wheel_pane_t1

0xdcc4,	// (0x0003f4cf) list_wheel_apps_pane_g1

0xdccc,	// (0x0003f4d7) list_wheel_apps_pane_g2

0xdcd4,	// (0x0003f4df) list_wheel_apps_pane_g3

0xdcdc,	// (0x0003f4e7) list_wheel_apps_pane_g4

0xdce6,	// (0x0003f4f1) list_wheel_apps_pane_g5

0x0004,

0xfa9d,	// (0x000412a8) list_wheel_apps_pane_g

0x42fd,	// (0x00035b08) navi_icon_text_pane

0xd2ed,	// (0x0003eaf8) aid_fill_nsta

0x6ecd,	// (0x000386d8) navi_icon_text_pane_g1

0x6ed9,	// (0x000386e4) navi_icon_text_pane_t1

0x419b,	// (0x000359a6) list_set_graphic_pane_t1_ParamLimits

0x419b,	// (0x000359a6) list_set_graphic_pane_t1

0x5883,	// (0x0003708e) popup_midp_note_alarm_window_t6_ParamLimits

0x5883,	// (0x0003708e) popup_midp_note_alarm_window_t6

0x5895,	// (0x000370a0) popup_midp_note_alarm_window_t7_ParamLimits

0x5895,	// (0x000370a0) popup_midp_note_alarm_window_t7

0x58a7,	// (0x000370b2) popup_midp_note_alarm_window_t8_ParamLimits

0x58a7,	// (0x000370b2) popup_midp_note_alarm_window_t8

0x58b9,	// (0x000370c4) popup_midp_note_alarm_window_t9_ParamLimits

0x58b9,	// (0x000370c4) popup_midp_note_alarm_window_t9

0x58cb,	// (0x000370d6) popup_midp_note_alarm_window_t10_ParamLimits

0x58cb,	// (0x000370d6) popup_midp_note_alarm_window_t10

0x58dd,	// (0x000370e8) popup_midp_note_alarm_window_t11_ParamLimits

0x58dd,	// (0x000370e8) popup_midp_note_alarm_window_t11

0x58ef,	// (0x000370fa) scroll_pane_cp17_ParamLimits

0x58ef,	// (0x000370fa) scroll_pane_cp17

0x1159,	// (0x00032964) volume_small_pane_cp_g1

0x18a5,	// (0x000330b0) volume_small_pane_cp_g2

0x18ae,	// (0x000330b9) volume_small_pane_cp_g3

0x18b7,	// (0x000330c2) volume_small_pane_cp_g4

0x18c0,	// (0x000330cb) volume_small_pane_cp_g5

0x18c9,	// (0x000330d4) volume_small_pane_cp_g6

0x18d2,	// (0x000330dd) volume_small_pane_cp_g7

0x18db,	// (0x000330e6) volume_small_pane_cp_g8

0x18e4,	// (0x000330ef) volume_small_pane_cp_g9

0x18ed,	// (0x000330f8) volume_small_pane_cp_g10

0x4567,	// (0x00035d72) midp_ticker_pane_g1_ParamLimits

0x4573,	// (0x00035d7e) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x00040f3c) midp_ticker_pane_g_ParamLimits

0x457f,	// (0x00035d8a) midp_ticker_pane_t1_ParamLimits

0xd311,	// (0x0003eb1c) aid_fill_nsta_2

0x5104,	// (0x0003690f) list_form2_midp_pane

0x6238,	// (0x00037a43) midp_editing_number_pane_ParamLimits

0x6247,	// (0x00037a52) midp_ticker_pane_ParamLimits

0x6eeb,	// (0x000386f6) form2_midp_field_pane

0x6f0f,	// (0x0003871a) scroll_pane_cp51

0x6f2f,	// (0x0003873a) form2_midp_button_pane_ParamLimits

0x6f2f,	// (0x0003873a) form2_midp_button_pane

0x6f41,	// (0x0003874c) form2_midp_content_pane_ParamLimits

0x6f41,	// (0x0003874c) form2_midp_content_pane

0x6f5b,	// (0x00038766) form2_midp_field_choice_group_pane

0x6f63,	// (0x0003876e) form2_midp_field_pane_g1

0x6f6b,	// (0x00038776) form2_midp_field_pane_g2

0x6f73,	// (0x0003877e) form2_midp_field_pane_g3

0x6f7b,	// (0x00038786) form2_midp_field_pane_g4

0x0003,

0xfac2,	// (0x000412cd) form2_midp_field_pane_g

0x6f83,	// (0x0003878e) form2_midp_gauge_slider_pane

0x6f8b,	// (0x00038796) form2_midp_gauge_wait_pane

0x6f93,	// (0x0003879e) form2_midp_image_pane_ParamLimits

0x6f93,	// (0x0003879e) form2_midp_image_pane

0x6fae,	// (0x000387b9) form2_midp_label_pane_ParamLimits

0x6fae,	// (0x000387b9) form2_midp_label_pane

0xdd19,	// (0x0003f524) form2_midp_label_pane_cp_ParamLimits

0xdd19,	// (0x0003f524) form2_midp_label_pane_cp

0x6fe8,	// (0x000387f3) form2_midp_string_pane_ParamLimits

0x6fe8,	// (0x000387f3) form2_midp_string_pane

0xc87c,	// (0x0003e087) form2_midp_text_pane_ParamLimits

0xc87c,	// (0x0003e087) form2_midp_text_pane

0x6ffa,	// (0x00038805) form2_midp_time_pane

0x700a,	// (0x00038815) input_focus_pane_cp51_ParamLimits

0x700a,	// (0x00038815) input_focus_pane_cp51

0x7022,	// (0x0003882d) form2_midp_label_pane_t1_ParamLimits

0x7022,	// (0x0003882d) form2_midp_label_pane_t1

0xc895,	// (0x0003e0a0) form2_mdip_text_pane_t1_ParamLimits

0xc895,	// (0x0003e0a0) form2_mdip_text_pane_t1

0x192f,	// (0x0003313a) form2_midp_time_pane_t1

0x706b,	// (0x00038876) form2_midp_gauge_slider_pane_t1

0xdd38,	// (0x0003f543) form2_midp_gauge_slider_pane_t2

0xdd4a,	// (0x0003f555) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacb,	// (0x000412d6) form2_midp_gauge_slider_pane_t

0x70a1,	// (0x000388ac) form2_midp_slider_pane

0x70ad,	// (0x000388b8) form2_midp_gauge_wait_pane_t1

0x70bb,	// (0x000388c6) form2_midp_wait_pane_ParamLimits

0x70bb,	// (0x000388c6) form2_midp_wait_pane

0xdd5c,	// (0x0003f567) list_single_2graphic_pane_cp4_ParamLimits

0xdd5c,	// (0x0003f567) list_single_2graphic_pane_cp4

0xd72b,	// (0x0003ef36) list_single_midp_graphic_pane_cp_ParamLimits

0xd72b,	// (0x0003ef36) list_single_midp_graphic_pane_cp

0xe1f6,	// (0x0003fa01) list_highlight_pane_cp20

0x710a,	// (0x00038915) list_single_2graphic_pane_g1_cp4

0x7112,	// (0x0003891d) list_single_2graphic_pane_g2_cp4

0x711a,	// (0x00038925) list_single_2graphic_pane_t1_cp4

0x2d53,	// (0x0003455e) list_highlight_pane_cp21

0x7129,	// (0x00038934) list_single_midp_graphic_pane_g4_cp

0x7138,	// (0x00038943) list_single_midp_graphic_pane_t1_cp

0xdd70,	// (0x0003f57b) form2_mdip_string_pane_t1_ParamLimits

0xdd70,	// (0x0003f57b) form2_mdip_string_pane_t1

0xe1f6,	// (0x0003fa01) bg_wml_button_pane_cp2

0xe1ec,	// (0x0003f9f7) form2_midp_image_pane_g1

0xf434,	// (0x00040c3f) list_double_large_graphic_pane_g5_ParamLimits

0xf434,	// (0x00040c3f) list_double_large_graphic_pane_g5

0xd1df,	// (0x0003e9ea) midp_form_pane_ParamLimits

0x2d53,	// (0x0003455e) main_apps_wheel_pane_ParamLimits

0xc4dd,	// (0x0003dce8) popup_preview_window_ParamLimits

0xc4dd,	// (0x0003dce8) popup_preview_window

0x0e8b,	// (0x00032696) popup_touch_info_window_ParamLimits

0x0e8b,	// (0x00032696) popup_touch_info_window

0x0ea9,	// (0x000326b4) popup_touch_menu_window_ParamLimits

0x0ea9,	// (0x000326b4) popup_touch_menu_window

0xe1e2,	// (0x0003f9ed) bg_popup_sub_pane_cp6

0x7246,	// (0x00038a51) list_touch_menu_pane

0x724e,	// (0x00038a59) list_single_touch_menu_pane_ParamLimits

0x724e,	// (0x00038a59) list_single_touch_menu_pane

0x7264,	// (0x00038a6f) list_single_touch_menu_pane_t1

0x2d53,	// (0x0003455e) bg_popup_sub_pane_cp7_ParamLimits

0x2d53,	// (0x0003455e) bg_popup_sub_pane_cp7

0x5138,	// (0x00036943) heading_sub_pane

0x7272,	// (0x00038a7d) list_touch_info_pane_ParamLimits

0x7272,	// (0x00038a7d) list_touch_info_pane

0x7282,	// (0x00038a8d) list_single_touch_info_pane_ParamLimits

0x7282,	// (0x00038a8d) list_single_touch_info_pane

0x7294,	// (0x00038a9f) list_single_touch_info_pane_t1

0x72a2,	// (0x00038aad) list_single_touch_info_pane_t2

0x0001,

0xfad9,	// (0x000412e4) list_single_touch_info_pane_t

0x448a,	// (0x00035c95) bg_popup_heading_pane_cp

0x72b0,	// (0x00038abb) heading_sub_pane_t1

0x4d4c,	// (0x00036557) bg_popup_preview_window_pane_cp_ParamLimits

0x4d4c,	// (0x00036557) bg_popup_preview_window_pane_cp

0x5138,	// (0x00036943) heading_preview_pane

0x7272,	// (0x00038a7d) list_preview_pane_ParamLimits

0x7272,	// (0x00038a7d) list_preview_pane

0x72be,	// (0x00038ac9) popup_preview_window_g1

0x7282,	// (0x00038a8d) list_single_preview_pane_ParamLimits

0x7282,	// (0x00038a8d) list_single_preview_pane

0x72c6,	// (0x00038ad1) list_single_preview_pane_g1

0x72ce,	// (0x00038ad9) list_single_preview_pane_t1

0x7294,	// (0x00038a9f) list_single_preview_pane_t2

0x0001,

0xfade,	// (0x000412e9) list_single_preview_pane_t

0x72dc,	// (0x00038ae7) bg_popup_heading_pane_cp2_ParamLimits

0x72dc,	// (0x00038ae7) bg_popup_heading_pane_cp2

0x72f2,	// (0x00038afd) heading_preview_pane_g1

0x72fa,	// (0x00038b05) heading_preview_pane_t1_ParamLimits

0x72fa,	// (0x00038b05) heading_preview_pane_t1

0x2e3f,	// (0x0003464a) soft_indicator_pane_t1_ParamLimits

0x3553,	// (0x00034d5e) scroll_pane_ParamLimits

0x3c62,	// (0x0003546d) scroll_sc2_left_pane

0x3c6b,	// (0x00035476) scroll_sc2_right_pane

0x3c8a,	// (0x00035495) scroll_bg_pane_g1_ParamLimits

0x3c9f,	// (0x000354aa) scroll_bg_pane_g2_ParamLimits

0x3cb7,	// (0x000354c2) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x00040ec7) scroll_bg_pane_g_ParamLimits

0x3c8a,	// (0x00035495) scroll_handle_pane_g1_ParamLimits

0x3cd9,	// (0x000354e4) scroll_handle_pane_g2_ParamLimits

0x3cb7,	// (0x000354c2) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x00040ece) scroll_handle_pane_g_ParamLimits

0x094f,	// (0x0003215a) popup_choice_list_window_ParamLimits

0x094f,	// (0x0003215a) popup_choice_list_window

0x4c22,	// (0x0003642d) choice_list_pane

0x4ca4,	// (0x000364af) cell_toolbar_pane_t1

0x4ccc,	// (0x000364d7) toolbar_button_pane_ParamLimits

0x5da9,	// (0x000375b4) ai_gene_pane_1_t2_ParamLimits

0x5da9,	// (0x000375b4) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x000410f1) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x000410f1) ai_gene_pane_1_t

0x7317,	// (0x00038b22) scroll_sc2_left_pane_g1

0x7317,	// (0x00038b22) scroll_sc2_right_pane_g1

0x47ae,	// (0x00035fb9) bg_popup_sub_pane_cp10

0x7321,	// (0x00038b2c) list_choice_list_pane

0x733a,	// (0x00038b45) list_single_choice_list_pane_ParamLimits

0x733a,	// (0x00038b45) list_single_choice_list_pane

0x734d,	// (0x00038b58) list_single_choice_list_pane_g1

0x3784,	// (0x00034f8f) list_single_choice_list_pane_t1_ParamLimits

0x3784,	// (0x00034f8f) list_single_choice_list_pane_t1

0x7355,	// (0x00038b60) choice_list_pane_g1

0x735d,	// (0x00038b68) choice_list_pane_t1

0xe1e2,	// (0x0003f9ed) input_focus_pane_cp11

0x395b,	// (0x00035166) title_pane_stacon_g2_ParamLimits

0x395b,	// (0x00035166) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x00040ead) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x00040ead) title_pane_stacon_g

0x448a,	// (0x00035c95) cursor_press_pane

0xc184,	// (0x0003d98f) popup_fep_hwr_window_ParamLimits

0xc184,	// (0x0003d98f) popup_fep_hwr_window

0x0a75,	// (0x00032280) popup_fep_vkb_window_ParamLimits

0x0a75,	// (0x00032280) popup_fep_vkb_window

0x736b,	// (0x00038b76) cursor_press_pane_g1

0x0002,

0xfb07,	// (0x00041312) fep_vkb_side_pane_g_ParamLimits

0x197b,	// (0x00033186) fep_hwr_candidate_pane_ParamLimits

0x197b,	// (0x00033186) fep_hwr_candidate_pane

0x19a5,	// (0x000331b0) fep_hwr_side_pane_ParamLimits

0x19a5,	// (0x000331b0) fep_hwr_side_pane

0x19c5,	// (0x000331d0) fep_hwr_top_pane_ParamLimits

0x19c5,	// (0x000331d0) fep_hwr_top_pane

0x19dd,	// (0x000331e8) fep_hwr_write_pane_ParamLimits

0x19dd,	// (0x000331e8) fep_hwr_write_pane

0xfb07,	// (0x00041312) fep_vkb_side_pane_g

0x7373,	// (0x00038b7e) fep_hwr_top_pane_g1

0x7385,	// (0x00038b90) fep_hwr_top_pane_g2

0x1a17,	// (0x00033222) fep_hwr_top_pane_g3

0x0002,

0xfae3,	// (0x000412ee) fep_hwr_top_pane_g

0x1a2c,	// (0x00033237) fep_hwr_top_text_pane

0x3e59,	// (0x00035664) fep_hwr_top_text_pane_g1

0x73bb,	// (0x00038bc6) fep_hwr_top_text_pane_t1

0x1b22,	// (0x0003332d) fep_hwr_candidate_pane_g1

0x760e,	// (0x00038e19) fep_vkb_keypad_pane_g3_ParamLimits

0x760e,	// (0x00038e19) fep_vkb_keypad_pane_g3

0x7636,	// (0x00038e41) fep_vkb_keypad_pane_g4_ParamLimits

0x7636,	// (0x00038e41) fep_vkb_keypad_pane_g4

0x76a5,	// (0x00038eb0) fep_vkb_bottom_pane_g2_ParamLimits

0x76a5,	// (0x00038eb0) fep_vkb_bottom_pane_g2

0x0001,

0xfb0e,	// (0x00041319) fep_vkb_bottom_pane_g_ParamLimits

0xfb0e,	// (0x00041319) fep_vkb_bottom_pane_g

0x7317,	// (0x00038b22) cell_vkb_side_pane_g2

0x0001,

0xfb18,	// (0x00041323) cell_vkb_side_pane_g

0x7730,	// (0x00038f3b) cell_vkb_side_pane_t1

0x773e,	// (0x00038f49) cell_vkb_side_pane_t1_copy1

0x7317,	// (0x00038b22) bg_fep_vkb_candidate_pane_g2

0x786a,	// (0x00039075) cell_vkb_candidate_pane_ParamLimits

0x73c9,	// (0x00038bd4) aid_size_cell_vkb_ParamLimits

0x73c9,	// (0x00038bd4) aid_size_cell_vkb

0x786a,	// (0x00039075) cell_vkb_candidate_pane

0x1b49,	// (0x00033354) bg_popup_fep_shadow_pane_g1

0xddf2,	// (0x0003f5fd) fep_vkb_bottom_pane_ParamLimits

0xddf2,	// (0x0003f5fd) fep_vkb_bottom_pane

0x748d,	// (0x00038c98) fep_vkb_candidate_pane_ParamLimits

0x748d,	// (0x00038c98) fep_vkb_candidate_pane

0xde17,	// (0x0003f622) fep_vkb_keypad_pane_ParamLimits

0xde17,	// (0x0003f622) fep_vkb_keypad_pane

0xde53,	// (0x0003f65e) fep_vkb_side_pane_ParamLimits

0xde53,	// (0x0003f65e) fep_vkb_side_pane

0xde8f,	// (0x0003f69a) fep_vkb_top_pane_ParamLimits

0xde8f,	// (0x0003f69a) fep_vkb_top_pane

0x7567,	// (0x00038d72) fep_vkb_top_pane_g1_ParamLimits

0x7567,	// (0x00038d72) fep_vkb_top_pane_g1

0x7576,	// (0x00038d81) fep_vkb_top_pane_g2_ParamLimits

0x7576,	// (0x00038d81) fep_vkb_top_pane_g2

0x7585,	// (0x00038d90) fep_vkb_top_pane_g3_ParamLimits

0x7585,	// (0x00038d90) fep_vkb_top_pane_g3

0x0003,

0xfafe,	// (0x00041309) fep_vkb_top_pane_g_ParamLimits

0xfafe,	// (0x00041309) fep_vkb_top_pane_g

0x75a3,	// (0x00038dae) fep_vkb_top_text_pane_ParamLimits

0x75a3,	// (0x00038dae) fep_vkb_top_text_pane

0xdecb,	// (0x0003f6d6) fep_vkb_side_pane_g1_ParamLimits

0xdecb,	// (0x0003f6d6) fep_vkb_side_pane_g1

0x75fd,	// (0x00038e08) grid_vkb_side_pane_ParamLimits

0x75fd,	// (0x00038e08) grid_vkb_side_pane

0x1b51,	// (0x0003335c) bg_popup_fep_shadow_pane_g2

0x1b5a,	// (0x00033365) bg_popup_fep_shadow_pane_g3

0x1b62,	// (0x0003336d) bg_popup_fep_shadow_pane_g4

0x1b6b,	// (0x00033376) bg_popup_fep_shadow_pane_g5

0x1b75,	// (0x00033380) bg_popup_fep_shadow_pane_g6

0x1b7d,	// (0x00033388) bg_popup_fep_shadow_pane_g7

0x3650,	// (0x00034e5b) bg_popup_fep_shadow_pane_g8

0x7654,	// (0x00038e5f) grid_vkb_keypad_number_pane_ParamLimits

0x7654,	// (0x00038e5f) grid_vkb_keypad_number_pane

0x7664,	// (0x00038e6f) grid_vkb_keypad_pane_ParamLimits

0x7664,	// (0x00038e6f) grid_vkb_keypad_pane

0x768a,	// (0x00038e95) fep_vkb_bottom_pane_g1_ParamLimits

0x768a,	// (0x00038e95) fep_vkb_bottom_pane_g1

0x76b3,	// (0x00038ebe) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x76b3,	// (0x00038ebe) grid_vkb_keypad_bottom_left_pane

0x76c8,	// (0x00038ed3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x76c8,	// (0x00038ed3) grid_vkb_keypad_bottom_right_pane

0x76dd,	// (0x00038ee8) fep_vkb_top_text_pane_g1

0xdf12,	// (0x0003f71d) fep_vkb_top_text_pane_t1

0xdf24,	// (0x0003f72f) cell_vkb_side_pane_ParamLimits

0xdf24,	// (0x0003f72f) cell_vkb_side_pane

0x7317,	// (0x00038b22) cell_vkb_side_pane_g1

0x774c,	// (0x00038f57) cell_vkb_keypad_pane_ParamLimits

0x774c,	// (0x00038f57) cell_vkb_keypad_pane

0x77c1,	// (0x00038fcc) cell_vkb_keypad_pane_g1

0x0008,

0xfb2b,	// (0x00041336) bg_popup_fep_shadow_pane_g

0x1b8f,	// (0x0003339a) cell_hwr_side_pane_g1

0x1b8f,	// (0x0003339a) cell_hwr_side_pane_g2

0x77cb,	// (0x00038fd6) cell_vkb_keypad_pane_t1

0xdf3a,	// (0x0003f745) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf3a,	// (0x0003f745) cell_vkb_keypad_bottom_left_pane

0xdf4f,	// (0x0003f75a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf4f,	// (0x0003f75a) cell_vkb_keypad_bottom_right_pane

0x7317,	// (0x00038b22) cell_vkb_keypad_bottom_left_pane_g1

0x7317,	// (0x00038b22) cell_vkb_keypad_bottom_right_pane_g1

0x782f,	// (0x0003903a) cell_vkb_keypad_number_pane_ParamLimits

0x782f,	// (0x0003903a) cell_vkb_keypad_number_pane

0x784e,	// (0x00039059) cell_vkb_keypad_number_pane_g1

0x7858,	// (0x00039063) cell_vkb_keypad_number_pane_g2

0x7861,	// (0x0003906c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1d,	// (0x00041328) cell_vkb_keypad_number_pane_g

0x77cb,	// (0x00038fd6) cell_vkb_keypad_number_pane_t1

0x7885,	// (0x00039090) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x00041349) cell_hwr_side_pane_g

0x789e,	// (0x000390a9) cell_hwr_side_pane_t1

0x1b99,	// (0x000333a4) cell_hwr_side_pane_t1_copy1

0x1ba7,	// (0x000333b2) cell_hwr_candidate_pane_g1

0x1bd6,	// (0x000333e1) cell_hwr_candidate_pane_t1

0x7317,	// (0x00038b22) cell_vkb_candidate_pane_g2

0x78e2,	// (0x000390ed) cell_vkb_candidate_pane_t1

0x1942,	// (0x0003314d) bg_popup_fep_shadow_pane_ParamLimits

0x1942,	// (0x0003314d) bg_popup_fep_shadow_pane

0x19f7,	// (0x00033202) bg_fep_hwr_top_pane_g4

0x7397,	// (0x00038ba2) bg_hwr_side_pane_g1_ParamLimits

0x7397,	// (0x00038ba2) bg_hwr_side_pane_g1

0xc8ca,	// (0x0003e0d5) cell_hwr_side_pane_ParamLimits

0xc8ca,	// (0x0003e0d5) cell_hwr_side_pane

0x1aa3,	// (0x000332ae) fep_hwr_write_pane_g1_ParamLimits

0x1aa3,	// (0x000332ae) fep_hwr_write_pane_g1

0x1ab0,	// (0x000332bb) fep_hwr_write_pane_g2_ParamLimits

0x1ab0,	// (0x000332bb) fep_hwr_write_pane_g2

0x1abd,	// (0x000332c8) fep_hwr_write_pane_g3_ParamLimits

0x1abd,	// (0x000332c8) fep_hwr_write_pane_g3

0xc8ea,	// (0x0003e0f5) fep_hwr_write_pane_g4_ParamLimits

0xc8ea,	// (0x0003e0f5) fep_hwr_write_pane_g4

0x0005,

0xfaea,	// (0x000412f5) fep_hwr_write_pane_g_ParamLimits

0xfaea,	// (0x000412f5) fep_hwr_write_pane_g

0x19f7,	// (0x00033202) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x19f7,	// (0x00033202) bg_fep_hwr_candidate_pane_g2

0x1ae0,	// (0x000332eb) cell_hwr_candidate_pane_ParamLimits

0x1ae0,	// (0x000332eb) cell_hwr_candidate_pane

0x1b22,	// (0x0003332d) fep_hwr_candidate_pane_g1_ParamLimits

0x73f7,	// (0x00038c02) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x73f7,	// (0x00038c02) bg_popup_fep_shadow_pane_cp2

0x7595,	// (0x00038da0) fep_vkb_top_pane_g4_ParamLimits

0x7595,	// (0x00038da0) fep_vkb_top_pane_g4

0x75db,	// (0x00038de6) fep_vkb_side_pane_g2_ParamLimits

0x75db,	// (0x00038de6) fep_vkb_side_pane_g2

0xbad2,	// (0x0003d2dd) list_setting_pane_t4_ParamLimits

0xbad2,	// (0x0003d2dd) list_setting_pane_t4

0xbb6c,	// (0x0003d377) list_setting_number_pane_t5_ParamLimits

0xbb6c,	// (0x0003d377) list_setting_number_pane_t5

0x3e90,	// (0x0003569b) list_double_heading_pane_cp2_ParamLimits

0x3e90,	// (0x0003569b) list_double_heading_pane_cp2

0x35ee,	// (0x00034df9) list_double_heading_pane_g1_cp2_ParamLimits

0x35ee,	// (0x00034df9) list_double_heading_pane_g1_cp2

0x35fa,	// (0x00034e05) list_double_heading_pane_g2_cp2_ParamLimits

0x35fa,	// (0x00034e05) list_double_heading_pane_g2_cp2

0x78f0,	// (0x000390fb) list_double_heading_pane_t1_cp2_ParamLimits

0x78f0,	// (0x000390fb) list_double_heading_pane_t1_cp2

0x7906,	// (0x00039111) list_double_heading_pane_t2_cp2_ParamLimits

0x7906,	// (0x00039111) list_double_heading_pane_t2_cp2

0xe1da,	// (0x0003f9e5) aid_value_unit2

0xf399,	// (0x00040ba4) popup_preview_fixed_window

0x2fdc,	// (0x000347e7) bg_popup_preview_window_pane_cp02

0x7918,	// (0x00039123) list_preview_fixed_pane

0x795e,	// (0x00039169) list_empty_pane_fp_ParamLimits

0x795e,	// (0x00039169) list_empty_pane_fp

0x795e,	// (0x00039169) list_single_cale_day_pane_fp_ParamLimits

0x795e,	// (0x00039169) list_single_cale_day_pane_fp

0x795e,	// (0x00039169) list_single_graphic_heading_pane_fp_ParamLimits

0x795e,	// (0x00039169) list_single_graphic_heading_pane_fp

0x795e,	// (0x00039169) list_single_graphic_pane_fp_ParamLimits

0x795e,	// (0x00039169) list_single_graphic_pane_fp

0x795e,	// (0x00039169) list_single_heading_pane_fp_ParamLimits

0x795e,	// (0x00039169) list_single_heading_pane_fp

0x795e,	// (0x00039169) list_single_pane_fp_ParamLimits

0x795e,	// (0x00039169) list_single_pane_fp

0x7973,	// (0x0003917e) list_single_pane_fp_g1_ParamLimits

0x7973,	// (0x0003917e) list_single_pane_fp_g1

0x1bf4,	// (0x000333ff) list_single_pane_fp_g2_ParamLimits

0x1bf4,	// (0x000333ff) list_single_pane_fp_g2

0x1c00,	// (0x0003340b) list_single_pane_fp_g3_ParamLimits

0x1c00,	// (0x0003340b) list_single_pane_fp_g3

0x797f,	// (0x0003918a) list_single_pane_fp_g4_ParamLimits

0x797f,	// (0x0003918a) list_single_pane_fp_g4

0x0003,

0xfb51,	// (0x0004135c) list_single_pane_fp_g_ParamLimits

0xfb51,	// (0x0004135c) list_single_pane_fp_g

0x1c14,	// (0x0003341f) list_single_pane_fp_t1_ParamLimits

0x1c14,	// (0x0003341f) list_single_pane_fp_t1

0x1c2b,	// (0x00033436) list_single_graphic_pane_fp_g1_ParamLimits

0x1c2b,	// (0x00033436) list_single_graphic_pane_fp_g1

0x7973,	// (0x0003917e) list_single_graphic_pane_fp_g2_ParamLimits

0x7973,	// (0x0003917e) list_single_graphic_pane_fp_g2

0x1bf4,	// (0x000333ff) list_single_graphic_pane_fp_g3_ParamLimits

0x1bf4,	// (0x000333ff) list_single_graphic_pane_fp_g3

0x1c00,	// (0x0003340b) list_single_graphic_pane_fp_g4_ParamLimits

0x1c00,	// (0x0003340b) list_single_graphic_pane_fp_g4

0x797f,	// (0x0003918a) list_single_graphic_pane_fp_g5_ParamLimits

0x797f,	// (0x0003918a) list_single_graphic_pane_fp_g5

0x0004,

0xfb5a,	// (0x00041365) list_single_graphic_pane_fp_g_ParamLimits

0xfb5a,	// (0x00041365) list_single_graphic_pane_fp_g

0x1c37,	// (0x00033442) list_single_graphic_pane_fp_t1_ParamLimits

0x1c37,	// (0x00033442) list_single_graphic_pane_fp_t1

0x1c2b,	// (0x00033436) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1c2b,	// (0x00033436) list_single_graphic_heading_pane_fp_g1

0x7973,	// (0x0003917e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7973,	// (0x0003917e) list_single_graphic_heading_pane_fp_g2

0x1bf4,	// (0x000333ff) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1bf4,	// (0x000333ff) list_single_graphic_heading_pane_fp_g3

0x1c00,	// (0x0003340b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1c00,	// (0x0003340b) list_single_graphic_heading_pane_fp_g4

0x797f,	// (0x0003918a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x797f,	// (0x0003918a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x00041365) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x00041365) list_single_graphic_heading_pane_fp_g

0x1c4d,	// (0x00033458) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1c4d,	// (0x00033458) list_single_graphic_heading_pane_fp_t1

0x1c63,	// (0x0003346e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1c63,	// (0x0003346e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb65,	// (0x00041370) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb65,	// (0x00041370) list_single_graphic_heading_pane_fp_t

0x1c75,	// (0x00033480) list_single_cale_day_pane_fp_g1_ParamLimits

0x1c75,	// (0x00033480) list_single_cale_day_pane_fp_g1

0x798b,	// (0x00039196) list_single_cale_day_pane_fp_g2_ParamLimits

0x798b,	// (0x00039196) list_single_cale_day_pane_fp_g2

0x1cad,	// (0x000334b8) list_single_cale_day_pane_fp_g3_ParamLimits

0x1cad,	// (0x000334b8) list_single_cale_day_pane_fp_g3

0x1cd5,	// (0x000334e0) list_single_cale_day_pane_fp_g4_ParamLimits

0x1cd5,	// (0x000334e0) list_single_cale_day_pane_fp_g4

0x1cf9,	// (0x00033504) list_single_cale_day_pane_fp_g5_ParamLimits

0x1cf9,	// (0x00033504) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6a,	// (0x00041375) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6a,	// (0x00041375) list_single_cale_day_pane_fp_g

0x1d1d,	// (0x00033528) list_single_cale_day_pane_fp_t1_ParamLimits

0x1d1d,	// (0x00033528) list_single_cale_day_pane_fp_t1

0x1d43,	// (0x0003354e) list_single_cale_day_pane_fp_t2_ParamLimits

0x1d43,	// (0x0003354e) list_single_cale_day_pane_fp_t2

0x1d5c,	// (0x00033567) list_single_cale_day_pane_fp_t3_ParamLimits

0x1d5c,	// (0x00033567) list_single_cale_day_pane_fp_t3

0x0002,

0xfb75,	// (0x00041380) list_single_cale_day_pane_fp_t_ParamLimits

0xfb75,	// (0x00041380) list_single_cale_day_pane_fp_t

0x7973,	// (0x0003917e) list_empty_pane_fp_g1_ParamLimits

0x7973,	// (0x0003917e) list_empty_pane_fp_g1

0x1d75,	// (0x00033580) list_empty_pane_fp_t1

0x1d83,	// (0x0003358e) list_empty_pane_fp_t2

0x0001,

0xfb7c,	// (0x00041387) list_empty_pane_fp_t

0x7973,	// (0x0003917e) list_single_heading_pane_fp_g1_ParamLimits

0x7973,	// (0x0003917e) list_single_heading_pane_fp_g1

0x1bf4,	// (0x000333ff) list_single_heading_pane_fp_g2_ParamLimits

0x1bf4,	// (0x000333ff) list_single_heading_pane_fp_g2

0x1c00,	// (0x0003340b) list_single_heading_pane_fp_g3_ParamLimits

0x1c00,	// (0x0003340b) list_single_heading_pane_fp_g3

0x0002,

0xfb81,	// (0x0004138c) list_single_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0004138c) list_single_heading_pane_fp_g

0x1d91,	// (0x0003359c) list_single_heading_pane_fp_t1_ParamLimits

0x1d91,	// (0x0003359c) list_single_heading_pane_fp_t1

0x3a2b,	// (0x00035236) list_single_heading_pane_fp_t2_ParamLimits

0x3a2b,	// (0x00035236) list_single_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x00041393) list_single_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x00041393) list_single_heading_pane_fp_t

0x37f2,	// (0x00034ffd) aid_size_cell_fast

0x2f4c,	// (0x00034757) soft_indicator_pane_cp1_t1

0x382f,	// (0x0003503a) cell_app_pane_cp2_ParamLimits

0x382f,	// (0x0003503a) cell_app_pane_cp2

0x1964,	// (0x0003316f) fep_hwr_candidate_drop_down_list_pane

0x1b3c,	// (0x00033347) fep_hwr_candidate_pane_g3_ParamLimits

0x1b3c,	// (0x00033347) fep_hwr_candidate_pane_g3

0xe233,	// (0x0003fa3e) fep_hwr_candidate_pane_g4_ParamLimits

0xe233,	// (0x0003fa3e) fep_hwr_candidate_pane_g4

0x0002,

0xfaf7,	// (0x00041302) fep_hwr_candidate_pane_g_ParamLimits

0xfaf7,	// (0x00041302) fep_hwr_candidate_pane_g

0x747c,	// (0x00038c87) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x747c,	// (0x00038c87) fep_vkb_candidate_drop_down_list_pane

0x788d,	// (0x00039098) fep_vkb_candidate_pane_g3

0x7895,	// (0x000390a0) fep_vkb_candidate_pane_g4

0x0002,

0xfb24,	// (0x0004132f) fep_vkb_candidate_pane_g

0x1ba7,	// (0x000333b2) cell_hwr_candidate_pane_g1_ParamLimits

0x1bb5,	// (0x000333c0) cell_hwr_candidate_pane_g3_ParamLimits

0x1bb5,	// (0x000333c0) cell_hwr_candidate_pane_g3

0x8a63,	// (0x0003a26e) cell_hwr_candidate_pane_g4_ParamLimits

0x8a63,	// (0x0003a26e) cell_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0004134e) cell_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0004134e) cell_hwr_candidate_pane_g

0x78ac,	// (0x000390b7) cell_vkb_candidate_pane_g3_ParamLimits

0x78ac,	// (0x000390b7) cell_vkb_candidate_pane_g3

0x78c7,	// (0x000390d2) cell_vkb_candidate_pane_g4_ParamLimits

0x78c7,	// (0x000390d2) cell_vkb_candidate_pane_g4

0x7997,	// (0x000391a2) cell_app_pane_cp2_g1_ParamLimits

0x7997,	// (0x000391a2) cell_app_pane_cp2_g1

0x79b5,	// (0x000391c0) cell_app_pane_cp2_g2_ParamLimits

0x79b5,	// (0x000391c0) cell_app_pane_cp2_g2

0x0001,

0xfb8d,	// (0x00041398) cell_app_pane_cp2_g_ParamLimits

0xfb8d,	// (0x00041398) cell_app_pane_cp2_g

0x79c1,	// (0x000391cc) cell_app_pane_cp2_t1_ParamLimits

0x79c1,	// (0x000391cc) cell_app_pane_cp2_t1

0x35e0,	// (0x00034deb) grid_highlight_pane_cp1_ParamLimits

0x35e0,	// (0x00034deb) grid_highlight_pane_cp1

0x1da3,	// (0x000335ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x1da3,	// (0x000335ae) cell_hwr_candidate_pane_cp1

0x1ba7,	// (0x000333b2) fep_hwr_candidate_drop_down_list_pane_g1

0x1dc2,	// (0x000335cd) fep_hwr_candidate_drop_down_list_pane_g2

0x1dcf,	// (0x000335da) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb92,	// (0x0004139d) fep_hwr_candidate_drop_down_list_pane_g

0x1ddc,	// (0x000335e7) fep_hwr_candidate_drop_down_list_scroll_pane

0x1de5,	// (0x000335f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1de5,	// (0x000335f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1df2,	// (0x000335fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1df2,	// (0x000335fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1dff,	// (0x0003360a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1dff,	// (0x0003360a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e0c,	// (0x00033617) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e0c,	// (0x00033617) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e27,	// (0x00033632) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e27,	// (0x00033632) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e42,	// (0x0003364d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e42,	// (0x0003364d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e5d,	// (0x00033668) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e5d,	// (0x00033668) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e78,	// (0x00033683) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e78,	// (0x00033683) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb99,	// (0x000413a4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb99,	// (0x000413a4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x79d3,	// (0x000391de) cell_vkb_candidate_pane_cp1_ParamLimits

0x79d3,	// (0x000391de) cell_vkb_candidate_pane_cp1

0x7595,	// (0x00038da0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7595,	// (0x00038da0) fep_vkb_candidate_drop_down_list_pane_g1

0x79f3,	// (0x000391fe) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x79f3,	// (0x000391fe) fep_vkb_candidate_drop_down_list_pane_g2

0x7a00,	// (0x0003920b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7a00,	// (0x0003920b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x000413b5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaa,	// (0x000413b5) fep_vkb_candidate_drop_down_list_pane_g

0x7a0d,	// (0x00039218) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7a0d,	// (0x00039218) fep_vkb_candidate_drop_down_list_scroll_pane

0x7a1a,	// (0x00039225) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7a1a,	// (0x00039225) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7a27,	// (0x00039232) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a27,	// (0x00039232) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7a33,	// (0x0003923e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a33,	// (0x0003923e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7a3f,	// (0x0003924a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7a3f,	// (0x0003924a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a60,	// (0x0003926b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a60,	// (0x0003926b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a81,	// (0x0003928c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a81,	// (0x0003928c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7aa2,	// (0x000392ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7aa2,	// (0x000392ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7ac3,	// (0x000392ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ac3,	// (0x000392ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x000413bc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x000413bc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb40b,	// (0x0003cc16) title_pane_g1_ParamLimits

0xb41e,	// (0x0003cc29) title_pane_g2_ParamLimits

0xf527,	// (0x00040d32) title_pane_g_ParamLimits

0x3e49,	// (0x00035654) aid_call2_pane

0x3e51,	// (0x0003565c) aid_call_pane

0x3e59,	// (0x00035664) popup_clock_analogue_window_g1

0x3e59,	// (0x00035664) popup_clock_analogue_window_g2

0x045e,	// (0x00031c69) popup_clock_analogue_window_g3

0x0467,	// (0x00031c72) popup_clock_analogue_window_g4

0xe1ec,	// (0x0003f9f7) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x00040edc) popup_clock_analogue_window_g

0x046f,	// (0x00031c7a) popup_clock_analogue_window_t1

0x047d,	// (0x00031c88) clock_digital_number_pane_ParamLimits

0x047d,	// (0x00031c88) clock_digital_number_pane

0x0489,	// (0x00031c94) clock_digital_number_pane_cp02_ParamLimits

0x0489,	// (0x00031c94) clock_digital_number_pane_cp02

0x0495,	// (0x00031ca0) clock_digital_number_pane_cp03_ParamLimits

0x0495,	// (0x00031ca0) clock_digital_number_pane_cp03

0x04a1,	// (0x00031cac) clock_digital_number_pane_cp04_ParamLimits

0x04a1,	// (0x00031cac) clock_digital_number_pane_cp04

0x04ad,	// (0x00031cb8) clock_digital_separator_pane_ParamLimits

0x04ad,	// (0x00031cb8) clock_digital_separator_pane

0x04b9,	// (0x00031cc4) popup_clock_digital_window_t1_ParamLimits

0x04b9,	// (0x00031cc4) popup_clock_digital_window_t1

0xe1ec,	// (0x0003f9f7) clock_digital_number_pane_g1

0xe1ec,	// (0x0003f9f7) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x00040ee7) clock_digital_number_pane_g

0xe1ec,	// (0x0003f9f7) clock_digital_separator_pane_g1

0xe1ec,	// (0x0003f9f7) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x00040ee7) clock_digital_separator_pane_g

0xd2ed,	// (0x0003eaf8) aid_fill_nsta_ParamLimits

0xd423,	// (0x0003ec2e) indicator_nsta_pane_ParamLimits

0x4aaf,	// (0x000362ba) popup_clock_analogue_window

0x4aaf,	// (0x000362ba) popup_clock_digital_window

0xdc46,	// (0x0003f451) grid_indicator_nsta_pane_ParamLimits

0x6d22,	// (0x0003852d) clock_nsta_pane_t2

0x0001,

0xfa77,	// (0x00041282) clock_nsta_pane_t

0x0422,	// (0x00031c2d) aid_size_max_handle

0x042c,	// (0x00031c37) aid_size_min_handle

0x448a,	// (0x00035c95) editor_scroll_pane

0x7ade,	// (0x000392e9) ex_editor_pane

0x3760,	// (0x00034f6b) scroll_pane_cp13

0x357f,	// (0x00034d8a) scroll_pane_cp14

0x3e88,	// (0x00035693) scroll_pane_cp36

0xbe70,	// (0x0003d67b) list_single_graphic_hl_pane_cp2_ParamLimits

0xbe70,	// (0x0003d67b) list_single_graphic_hl_pane_cp2

0xda83,	// (0x0003f28e) list_single_graphic_hl_pane_ParamLimits

0xda83,	// (0x0003f28e) list_single_graphic_hl_pane

0x3a41,	// (0x0003524c) aid_size_min_hl_cp1

0x7ae6,	// (0x000392f1) list_highlight_pane_cp34_ParamLimits

0x7ae6,	// (0x000392f1) list_highlight_pane_cp34

0x7af7,	// (0x00039302) list_single_graphic_hl_pane_g1_ParamLimits

0x7af7,	// (0x00039302) list_single_graphic_hl_pane_g1

0xf51b,	// (0x00040d26) list_single_graphic_hl_pane_g2_ParamLimits

0xf51b,	// (0x00040d26) list_single_graphic_hl_pane_g2

0xf51b,	// (0x00040d26) list_single_graphic_hl_pane_g3_ParamLimits

0xf51b,	// (0x00040d26) list_single_graphic_hl_pane_g3

0xf4f1,	// (0x00040cfc) list_single_graphic_hl_pane_g4_ParamLimits

0xf4f1,	// (0x00040cfc) list_single_graphic_hl_pane_g4

0xc8ff,	// (0x0003e10a) list_single_graphic_hl_pane_g5_ParamLimits

0xc8ff,	// (0x0003e10a) list_single_graphic_hl_pane_g5

0x0004,

0xfbc2,	// (0x000413cd) list_single_graphic_hl_pane_g_ParamLimits

0xfbc2,	// (0x000413cd) list_single_graphic_hl_pane_g

0xc913,	// (0x0003e11e) list_single_graphic_hl_pane_t1_ParamLimits

0xc913,	// (0x0003e11e) list_single_graphic_hl_pane_t1

0x7b04,	// (0x0003930f) aid_size_min_hl_cp2

0x7b0d,	// (0x00039318) list_highlight_pane_cp34_cp2_ParamLimits

0x7b0d,	// (0x00039318) list_highlight_pane_cp34_cp2

0x7af7,	// (0x00039302) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7af7,	// (0x00039302) list_single_graphic_hl_pane_g1_cp2

0x7b1a,	// (0x00039325) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7b1a,	// (0x00039325) list_single_graphic_hl_pane_g2_cp2

0x7b26,	// (0x00039331) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7b26,	// (0x00039331) list_single_graphic_hl_pane_g3_cp2

0x7b34,	// (0x0003933f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7b34,	// (0x0003933f) list_single_graphic_hl_pane_g4_cp2

0x7b40,	// (0x0003934b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7b40,	// (0x0003934b) list_single_graphic_hl_pane_g5_cp2

0xbfaa,	// (0x0003d7b5) control_pane_g4_ParamLimits

0xbfaa,	// (0x0003d7b5) control_pane_g4

0x47ae,	// (0x00035fb9) bg_popup_sub_pane_cp10_ParamLimits

0x7321,	// (0x00038b2c) list_choice_list_pane_ParamLimits

0x7330,	// (0x00038b3b) scroll_pane_cp23

0x2fdc,	// (0x000347e7) bg_popup_preview_window_pane_cp02_ParamLimits

0x7918,	// (0x00039123) list_preview_fixed_pane_ParamLimits

0x792e,	// (0x00039139) list_preview_fixed_pane_cp_ParamLimits

0x792e,	// (0x00039139) list_preview_fixed_pane_cp

0x793a,	// (0x00039145) popup_preview_fixed_window_g1_ParamLimits

0x793a,	// (0x00039145) popup_preview_fixed_window_g1

0x7946,	// (0x00039151) popup_preview_fixed_window_g2_ParamLimits

0x7946,	// (0x00039151) popup_preview_fixed_window_g2

0x0002,

0xfb4a,	// (0x00041355) popup_preview_fixed_window_g_ParamLimits

0xfb4a,	// (0x00041355) popup_preview_fixed_window_g

0x0396,	// (0x00031ba1) aid_navi_side_left_pane_ParamLimits

0x03ab,	// (0x00031bb6) aid_navi_side_right_pane_ParamLimits

0x03c3,	// (0x00031bce) navi_icon_pane_stacon_ParamLimits

0x03d7,	// (0x00031be2) navi_navi_pane_stacon_ParamLimits

0x03c3,	// (0x00031bce) navi_text_pane_stacon_ParamLimits

0xf290,	// (0x00040a9b) main_text_info_pane

0x7b6a,	// (0x00039375) listscroll_text_info_pane

0x7b72,	// (0x0003937d) list_text_info_pane_ParamLimits

0x7b72,	// (0x0003937d) list_text_info_pane

0x7b81,	// (0x0003938c) scroll_pane_cp24_ParamLimits

0x7b81,	// (0x0003938c) scroll_pane_cp24

0xdf6a,	// (0x0003f775) list_text_info_pane_t1_ParamLimits

0xdf6a,	// (0x0003f775) list_text_info_pane_t1

0xc0f7,	// (0x0003d902) popup_fast_swap2_window_ParamLimits

0xc0f7,	// (0x0003d902) popup_fast_swap2_window

0x7bd0,	// (0x000393db) aid_size_cell_fast2

0xe1e2,	// (0x0003f9ed) bg_popup_window_pane_cp17

0x5138,	// (0x00036943) heading_pane_cp2

0x7bda,	// (0x000393e5) listscroll_fast2_pane

0x7be2,	// (0x000393ed) grid_fast2_pane

0x7bec,	// (0x000393f7) listscroll_fast2_pane_g1

0x7bf4,	// (0x000393ff) listscroll_fast2_pane_g2

0x0001,

0xfbcd,	// (0x000413d8) listscroll_fast2_pane_g

0x3760,	// (0x00034f6b) scroll_pane_cp26

0x7bfe,	// (0x00039409) cell_fast2_pane_ParamLimits

0x7bfe,	// (0x00039409) cell_fast2_pane

0x7c13,	// (0x0003941e) cell_fast2_pane_g1

0x7c1c,	// (0x00039427) cell_fast2_pane_g2

0x7c25,	// (0x00039430) cell_fast2_pane_g3

0x0002,

0xfbd2,	// (0x000413dd) cell_fast2_pane_g

0x333c,	// (0x00034b47) grid_highlight_pane_cp9

0x092b,	// (0x00032136) main_eswt_pane_ParamLimits

0x092b,	// (0x00032136) main_eswt_pane

0x7b96,	// (0x000393a1) list_single_text_info_pane

0x7c2d,	// (0x00039438) eswt_ctrl_button_pane

0x7c2d,	// (0x00039438) eswt_ctrl_canvas_pane

0x7c35,	// (0x00039440) eswt_ctrl_combo_pane

0x7c2d,	// (0x00039438) eswt_ctrl_default_pane

0x7c2d,	// (0x00039438) eswt_ctrl_label_pane

0x7c3d,	// (0x00039448) eswt_ctrl_wait_pane

0x7c45,	// (0x00039450) eswt_shell_pane

0xe1e2,	// (0x0003f9ed) listscroll_eswt_app_pane

0x7c65,	// (0x00039470) popup_eswt_tasktip_window_ParamLimits

0x7c65,	// (0x00039470) popup_eswt_tasktip_window

0x4d4c,	// (0x00036557) bg_popup_window_pane_cp18

0x7c76,	// (0x00039481) eswt_control_pane_g1_ParamLimits

0x7c76,	// (0x00039481) eswt_control_pane_g1

0x7c83,	// (0x0003948e) eswt_control_pane_g2_ParamLimits

0x7c83,	// (0x0003948e) eswt_control_pane_g2

0x7c90,	// (0x0003949b) eswt_control_pane_g3_ParamLimits

0x7c90,	// (0x0003949b) eswt_control_pane_g3

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_ParamLimits

0x7c9d,	// (0x000394a8) eswt_control_pane_g4

0x0003,

0xfbd9,	// (0x000413e4) eswt_control_pane_g_ParamLimits

0xfbd9,	// (0x000413e4) eswt_control_pane_g

0x35e0,	// (0x00034deb) bg_button_pane_ParamLimits

0x35e0,	// (0x00034deb) bg_button_pane

0x3351,	// (0x00034b5c) common_borders_pane_copy2_ParamLimits

0x3351,	// (0x00034b5c) common_borders_pane_copy2

0x7caa,	// (0x000394b5) control_button_pane_g1_ParamLimits

0x7caa,	// (0x000394b5) control_button_pane_g1

0x7cb6,	// (0x000394c1) control_button_pane_g2_ParamLimits

0x7cb6,	// (0x000394c1) control_button_pane_g2

0x7cc2,	// (0x000394cd) control_button_pane_g3_ParamLimits

0x7cc2,	// (0x000394cd) control_button_pane_g3

0x0002,

0xfbe2,	// (0x000413ed) control_button_pane_g_ParamLimits

0xfbe2,	// (0x000413ed) control_button_pane_g

0x7cd6,	// (0x000394e1) control_button_pane_t1

0x7ce4,	// (0x000394ef) control_button_pane_t2

0x0001,

0xfbe9,	// (0x000413f4) control_button_pane_t

0x4cd8,	// (0x000364e3) bg_button_pane_g1

0x4ce8,	// (0x000364f3) bg_button_pane_g2

0x4ce0,	// (0x000364eb) bg_button_pane_g3

0x4cf8,	// (0x00036503) bg_button_pane_g4

0x4cf0,	// (0x000364fb) bg_button_pane_g5

0x4d00,	// (0x0003650b) bg_button_pane_g6

0x4d08,	// (0x00036513) bg_button_pane_g7

0x4d18,	// (0x00036523) bg_button_pane_g8

0x4d10,	// (0x0003651b) bg_button_pane_g9

0x0008,

0xf83a,	// (0x00041045) bg_button_pane_g

0x72dc,	// (0x00038ae7) common_borders_pane_ParamLimits

0x72dc,	// (0x00038ae7) common_borders_pane

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy1_ParamLimits

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy1

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy1_ParamLimits

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy1

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy1_ParamLimits

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy1

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy1_ParamLimits

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy1

0x7317,	// (0x00038b22) bg_eswt_ctrl_canvas_pane_g1

0x72dc,	// (0x00038ae7) common_borders_pane_cp2_ParamLimits

0x72dc,	// (0x00038ae7) common_borders_pane_cp2

0x72dc,	// (0x00038ae7) common_borders_pane_cp3_ParamLimits

0x72dc,	// (0x00038ae7) common_borders_pane_cp3

0x7cf2,	// (0x000394fd) separator_horizontal_pane

0x7cfa,	// (0x00039505) separator_vertical_pane

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy2_ParamLimits

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy2

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy2_ParamLimits

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy2

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy2_ParamLimits

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy2

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy2_ParamLimits

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy2

0xe1e2,	// (0x0003f9ed) common_borders_pane_cp4

0x7d03,	// (0x0003950e) separator_horizontal_pane_g1

0x7d0c,	// (0x00039517) separator_horizontal_pane_g2

0x7d15,	// (0x00039520) separator_horizontal_pane_g3

0x0002,

0xfbee,	// (0x000413f9) separator_horizontal_pane_g

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy3_ParamLimits

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy3

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy3_ParamLimits

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy3

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy3_ParamLimits

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy3

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy3_ParamLimits

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy3

0xe1e2,	// (0x0003f9ed) common_borders_pane_cp5

0x7d1e,	// (0x00039529) separator_vertical_pane_g1

0x7d27,	// (0x00039532) separator_vertical_pane_g2

0x7d30,	// (0x0003953b) separator_vertical_pane_g3

0x0002,

0xfbf5,	// (0x00041400) separator_vertical_pane_g

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy4_ParamLimits

0x7c76,	// (0x00039481) eswt_control_pane_g1_copy4

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy4_ParamLimits

0x7c83,	// (0x0003948e) eswt_control_pane_g2_copy4

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy4_ParamLimits

0x7c90,	// (0x0003949b) eswt_control_pane_g3_copy4

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy4_ParamLimits

0x7c9d,	// (0x000394a8) eswt_control_pane_g4_copy4

0x7d39,	// (0x00039544) eswt_ctrl_combo_button_pane

0x7d41,	// (0x0003954c) eswt_ctrl_input_pane

0x7d49,	// (0x00039554) popup_choice_list_window_cp70

0x7d51,	// (0x0003955c) eswt_ctrl_input_pane_t1

0xe1e2,	// (0x0003f9ed) input_focus_pane_cp70

0x72dc,	// (0x00038ae7) bg_button_pane_cp70_ParamLimits

0x72dc,	// (0x00038ae7) bg_button_pane_cp70

0x7d5f,	// (0x0003956a) eswt_ctrl_combo_button_pane_g1

0x7d67,	// (0x00039572) wait_bar_pane_cp70

0x4d4c,	// (0x00036557) bg_popup_window_pane_cp70_ParamLimits

0x4d4c,	// (0x00036557) bg_popup_window_pane_cp70

0x7d6f,	// (0x0003957a) popup_eswt_tasktip_window_t1

0x7d85,	// (0x00039590) wait_bar_pane_cp71_ParamLimits

0x7d85,	// (0x00039590) wait_bar_pane_cp71

0x7d91,	// (0x0003959c) grid_eswt_app_pane

0x3c62,	// (0x0003546d) scroll_pane_cp70

0xdf85,	// (0x0003f790) cell_eswt_app_pane_ParamLimits

0xdf85,	// (0x0003f790) cell_eswt_app_pane

0xdfaf,	// (0x0003f7ba) cell_eswt_app_pane_g1_ParamLimits

0xdfaf,	// (0x0003f7ba) cell_eswt_app_pane_g1

0xdfde,	// (0x0003f7e9) cell_eswt_app_pane_g2_ParamLimits

0xdfde,	// (0x0003f7e9) cell_eswt_app_pane_g2

0x0001,

0xfbfc,	// (0x00041407) cell_eswt_app_pane_g_ParamLimits

0xfbfc,	// (0x00041407) cell_eswt_app_pane_g

0xe007,	// (0x0003f812) cell_eswt_app_pane_t1_ParamLimits

0xe007,	// (0x0003f812) cell_eswt_app_pane_t1

0x7e54,	// (0x0003965f) grid_highlight_pane_cp70_ParamLimits

0x7e54,	// (0x0003965f) grid_highlight_pane_cp70

0x4352,	// (0x00035b5d) set_content_pane_g1

0xd2aa,	// (0x0003eab5) status_small_volume_pane

0xc929,	// (0x0003e134) status_small_volume_pane_g1

0xc931,	// (0x0003e13c) volume_small2_pane

0xc93a,	// (0x0003e145) volume_small2_pane_g1

0xc943,	// (0x0003e14e) volume_small2_pane_g2

0xc94c,	// (0x0003e157) volume_small2_pane_g3

0xc955,	// (0x0003e160) volume_small2_pane_g4

0xc95e,	// (0x0003e169) volume_small2_pane_g5

0xc967,	// (0x0003e172) volume_small2_pane_g6

0xc970,	// (0x0003e17b) volume_small2_pane_g7

0xc979,	// (0x0003e184) volume_small2_pane_g8

0xc982,	// (0x0003e18d) volume_small2_pane_g9

0xc98b,	// (0x0003e196) volume_small2_pane_g10

0x0009,

0xfc01,	// (0x0004140c) volume_small2_pane_g

0x76dd,	// (0x00038ee8) fep_vkb_top_text_pane_g1_ParamLimits

0xdf12,	// (0x0003f71d) fep_vkb_top_text_pane_t1_ParamLimits

0x7952,	// (0x0003915d) popup_preview_fixed_window_g3_ParamLimits

0x7952,	// (0x0003915d) popup_preview_fixed_window_g3

0xc720,	// (0x0003df2b) popup_toolbar_trans_pane

0xd91d,	// (0x0003f128) aid_height_set_list_ParamLimits

0x60b1,	// (0x000378bc) aid_size_parent_ParamLimits

0x47ae,	// (0x00035fb9) list_highlight_pane_cp2_ParamLimits

0x4352,	// (0x00035b5d) set_content_pane_g1_ParamLimits

0xda95,	// (0x0003f2a0) list_single_image_pane_ParamLimits

0xda95,	// (0x0003f2a0) list_single_image_pane

0xe039,	// (0x0003f844) aid_size_cell_image_ParamLimits

0xe039,	// (0x0003f844) aid_size_cell_image

0xe046,	// (0x0003f851) grid_single_image_pane_ParamLimits

0xe046,	// (0x0003f851) grid_single_image_pane

0x6b05,	// (0x00038310) list_single_image_pane_g1_ParamLimits

0x6b05,	// (0x00038310) list_single_image_pane_g1

0x7e79,	// (0x00039684) list_single_image_pane_g2_ParamLimits

0x7e79,	// (0x00039684) list_single_image_pane_g2

0x0001,

0xfc16,	// (0x00041421) list_single_image_pane_g_ParamLimits

0xfc16,	// (0x00041421) list_single_image_pane_g

0x7e8d,	// (0x00039698) list_single_image_pane_t1_ParamLimits

0x7e8d,	// (0x00039698) list_single_image_pane_t1

0xe052,	// (0x0003f85d) cell_image_list_pane_ParamLimits

0xe052,	// (0x0003f85d) cell_image_list_pane

0xe066,	// (0x0003f871) cell_image_list_pane_g1

0xe06f,	// (0x0003f87a) cell_image_list_pane_g2

0x0001,

0xfc1b,	// (0x00041426) cell_image_list_pane_g

0x7ec9,	// (0x000396d4) aid_size_cell_tb_trans_pane

0x35e0,	// (0x00034deb) bg_tb_trans_pane

0x7edb,	// (0x000396e6) grid_tb_trans_pane

0x4cd8,	// (0x000364e3) bg_tb_trans_pane_g1

0x4ce8,	// (0x000364f3) bg_tb_trans_pane_g2

0x4ce0,	// (0x000364eb) bg_tb_trans_pane_g3

0x4cf8,	// (0x00036503) bg_tb_trans_pane_g4

0x4cf0,	// (0x000364fb) bg_tb_trans_pane_g5

0x4d18,	// (0x00036523) bg_tb_trans_pane_g6

0x4d10,	// (0x0003651b) bg_tb_trans_pane_g7

0x4d00,	// (0x0003650b) bg_tb_trans_pane_g8

0x4d08,	// (0x00036513) bg_tb_trans_pane_g9

0x0008,

0xfc20,	// (0x0004142b) bg_tb_trans_pane_g

0x7eef,	// (0x000396fa) cell_toolbar_trans_pane_ParamLimits

0x7eef,	// (0x000396fa) cell_toolbar_trans_pane

0x7317,	// (0x00038b22) cell_toolbar_trans_pane_g1

0xdcfd,	// (0x0003f508) list_form2_midp_pane_t1

0xdd0b,	// (0x0003f516) list_form2_midp_pane_t2

0x0001,

0xfabd,	// (0x000412c8) list_form2_midp_pane_t

0x6f0f,	// (0x0003871a) scroll_pane_cp51_ParamLimits

0x70cb,	// (0x000388d6) form2_midp_wait_pane_g1

0x70d4,	// (0x000388df) form2_midp_wait_pane_g2

0x70dd,	// (0x000388e8) form2_midp_wait_pane_g3

0x0002,

0xfad2,	// (0x000412dd) form2_midp_wait_pane_g

0x2d53,	// (0x0003455e) list_highlight_pane_cp21_ParamLimits

0x7129,	// (0x00038934) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7138,	// (0x00038943) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x140d,	// (0x00032c18) list_single_2graphic_im_pane_ParamLimits

0x140d,	// (0x00032c18) list_single_2graphic_im_pane

0x7f15,	// (0x00039720) list_single_2graphic_im_pane_g1_ParamLimits

0x7f15,	// (0x00039720) list_single_2graphic_im_pane_g1

0x7f26,	// (0x00039731) list_single_2graphic_im_pane_g2_ParamLimits

0x7f26,	// (0x00039731) list_single_2graphic_im_pane_g2

0x7f32,	// (0x0003973d) list_single_2graphic_im_pane_g3_ParamLimits

0x7f32,	// (0x0003973d) list_single_2graphic_im_pane_g3

0x0003,

0xfc33,	// (0x0004143e) list_single_2graphic_im_pane_g_ParamLimits

0xfc33,	// (0x0004143e) list_single_2graphic_im_pane_g

0x7f52,	// (0x0003975d) list_single_2graphic_im_pane_t1_ParamLimits

0x7f52,	// (0x0003975d) list_single_2graphic_im_pane_t1

0x795e,	// (0x00039169) list_single_graphic_2heading_pane_fp_ParamLimits

0x795e,	// (0x00039169) list_single_graphic_2heading_pane_fp

0x1c2b,	// (0x00033436) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1c2b,	// (0x00033436) list_single_graphic_2heading_pane_fp_g1

0x7973,	// (0x0003917e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7973,	// (0x0003917e) list_single_graphic_2heading_pane_fp_g2

0x1bf4,	// (0x000333ff) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1bf4,	// (0x000333ff) list_single_graphic_2heading_pane_fp_g3

0x1c00,	// (0x0003340b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1c00,	// (0x0003340b) list_single_graphic_2heading_pane_fp_g4

0x797f,	// (0x0003918a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x797f,	// (0x0003918a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x00041365) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x00041365) list_single_graphic_2heading_pane_fp_g

0x3a8c,	// (0x00035297) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3a8c,	// (0x00035297) list_single_graphic_2heading_pane_fp_t1

0x1c63,	// (0x0003346e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1c63,	// (0x0003346e) list_single_graphic_2heading_pane_fp_t2

0x3aa2,	// (0x000352ad) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3aa2,	// (0x000352ad) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3c,	// (0x00041447) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3c,	// (0x00041447) list_single_graphic_2heading_pane_fp_t

0x73a3,	// (0x00038bae) fep_hwr_write_pane_g5_ParamLimits

0x73a3,	// (0x00038bae) fep_hwr_write_pane_g5

0x73af,	// (0x00038bba) fep_hwr_write_pane_g6_ParamLimits

0x73af,	// (0x00038bba) fep_hwr_write_pane_g6

0x7c45,	// (0x00039450) eswt_shell_pane_ParamLimits

0x4d4c,	// (0x00036557) bg_popup_window_pane_cp18_ParamLimits

0x5138,	// (0x00036943) heading_pane_cp70

0x7d6f,	// (0x0003957a) popup_eswt_tasktip_window_t1_ParamLimits

0xd348,	// (0x0003eb53) aid_touch_tab_arrow_left

0xd35e,	// (0x0003eb69) aid_touch_tab_arrow_right

0xb436,	// (0x0003cc41) title_pane_g3_ParamLimits

0xb436,	// (0x0003cc41) title_pane_g3

0x359f,	// (0x00034daa) set_value_pane_g1

0xc720,	// (0x0003df2b) popup_toolbar_trans_pane_ParamLimits

0x7ec9,	// (0x000396d4) aid_size_cell_tb_trans_pane_ParamLimits

0x35e0,	// (0x00034deb) bg_tb_trans_pane_ParamLimits

0x7edb,	// (0x000396e6) grid_tb_trans_pane_ParamLimits

0x2fdc,	// (0x000347e7) cont_note_pane_ParamLimits

0x2fdc,	// (0x000347e7) cont_note_pane

0x3351,	// (0x00034b5c) cont_snote2_single_text_pane_ParamLimits

0x3351,	// (0x00034b5c) cont_snote2_single_text_pane

0x3351,	// (0x00034b5c) cont_snote2_single_graphic_pane_ParamLimits

0x3351,	// (0x00034b5c) cont_snote2_single_graphic_pane

0x5367,	// (0x00036b72) cont_note_wait_pane_ParamLimits

0x5367,	// (0x00036b72) cont_note_wait_pane

0x5367,	// (0x00036b72) cont_note_image_pane_ParamLimits

0x5367,	// (0x00036b72) cont_note_image_pane

0x7f83,	// (0x0003978e) popup_note2_window_g1_ParamLimits

0x7f83,	// (0x0003978e) popup_note2_window_g1

0x7fb4,	// (0x000397bf) popup_note2_window_t1_ParamLimits

0x7fb4,	// (0x000397bf) popup_note2_window_t1

0x7ff9,	// (0x00039804) popup_note2_window_t2_ParamLimits

0x7ff9,	// (0x00039804) popup_note2_window_t2

0x803e,	// (0x00039849) popup_note2_window_t3_ParamLimits

0x803e,	// (0x00039849) popup_note2_window_t3

0x8083,	// (0x0003988e) popup_note2_window_t4_ParamLimits

0x8083,	// (0x0003988e) popup_note2_window_t4

0x3060,	// (0x0003486b) popup_note2_window_t5_ParamLimits

0x3060,	// (0x0003486b) popup_note2_window_t5

0x0004,

0xfc48,	// (0x00041453) popup_note2_window_t_ParamLimits

0xfc48,	// (0x00041453) popup_note2_window_t

0x80b2,	// (0x000398bd) popup_note2_image_window_g1_ParamLimits

0x80b2,	// (0x000398bd) popup_note2_image_window_g1

0x80be,	// (0x000398c9) popup_note2_image_window_g2_ParamLimits

0x80be,	// (0x000398c9) popup_note2_image_window_g2

0x0001,

0xfc53,	// (0x0004145e) popup_note2_image_window_g_ParamLimits

0xfc53,	// (0x0004145e) popup_note2_image_window_g

0x80d0,	// (0x000398db) popup_note2_image_window_t1_ParamLimits

0x80d0,	// (0x000398db) popup_note2_image_window_t1

0x80e8,	// (0x000398f3) popup_note2_image_window_t2_ParamLimits

0x80e8,	// (0x000398f3) popup_note2_image_window_t2

0x8100,	// (0x0003990b) popup_note2_image_window_t3_ParamLimits

0x8100,	// (0x0003990b) popup_note2_image_window_t3

0x0002,

0xfc58,	// (0x00041463) popup_note2_image_window_t_ParamLimits

0xfc58,	// (0x00041463) popup_note2_image_window_t

0x5375,	// (0x00036b80) popup_note2_wait_window_g1_ParamLimits

0x5375,	// (0x00036b80) popup_note2_wait_window_g1

0x811c,	// (0x00039927) popup_note2_wait_window_g2_ParamLimits

0x811c,	// (0x00039927) popup_note2_wait_window_g2

0x538d,	// (0x00036b98) popup_note2_wait_window_g3_ParamLimits

0x538d,	// (0x00036b98) popup_note2_wait_window_g3

0x0002,

0xfc5f,	// (0x0004146a) popup_note2_wait_window_g_ParamLimits

0xfc5f,	// (0x0004146a) popup_note2_wait_window_g

0x8128,	// (0x00039933) popup_note2_wait_window_t1_ParamLimits

0x8128,	// (0x00039933) popup_note2_wait_window_t1

0x8146,	// (0x00039951) popup_note2_wait_window_t2_ParamLimits

0x8146,	// (0x00039951) popup_note2_wait_window_t2

0x8164,	// (0x0003996f) popup_note2_wait_window_t3_ParamLimits

0x8164,	// (0x0003996f) popup_note2_wait_window_t3

0x8176,	// (0x00039981) popup_note2_wait_window_t4_ParamLimits

0x8176,	// (0x00039981) popup_note2_wait_window_t4

0x0003,

0xfc66,	// (0x00041471) popup_note2_wait_window_t_ParamLimits

0xfc66,	// (0x00041471) popup_note2_wait_window_t

0x8188,	// (0x00039993) wait_bar2_pane_ParamLimits

0x8188,	// (0x00039993) wait_bar2_pane

0x81a0,	// (0x000399ab) popup_snote2_single_text_window_g1_ParamLimits

0x81a0,	// (0x000399ab) popup_snote2_single_text_window_g1

0x81c8,	// (0x000399d3) popup_snote2_single_text_window_t1_ParamLimits

0x81c8,	// (0x000399d3) popup_snote2_single_text_window_t1

0x8214,	// (0x00039a1f) popup_snote2_single_text_window_t2_ParamLimits

0x8214,	// (0x00039a1f) popup_snote2_single_text_window_t2

0x8260,	// (0x00039a6b) popup_snote2_single_text_window_t3_ParamLimits

0x8260,	// (0x00039a6b) popup_snote2_single_text_window_t3

0x82a1,	// (0x00039aac) popup_snote2_single_text_window_t4_ParamLimits

0x82a1,	// (0x00039aac) popup_snote2_single_text_window_t4

0x82d7,	// (0x00039ae2) popup_snote2_single_text_window_t5_ParamLimits

0x82d7,	// (0x00039ae2) popup_snote2_single_text_window_t5

0x0004,

0xfc6f,	// (0x0004147a) popup_snote2_single_text_window_t_ParamLimits

0xfc6f,	// (0x0004147a) popup_snote2_single_text_window_t

0x8302,	// (0x00039b0d) popup_snote2_single_graphic_window_g1_ParamLimits

0x8302,	// (0x00039b0d) popup_snote2_single_graphic_window_g1

0x832a,	// (0x00039b35) popup_snote2_single_graphic_window_g2_ParamLimits

0x832a,	// (0x00039b35) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7a,	// (0x00041485) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7a,	// (0x00041485) popup_snote2_single_graphic_window_g

0x8352,	// (0x00039b5d) popup_snote2_single_graphic_window_t1_ParamLimits

0x8352,	// (0x00039b5d) popup_snote2_single_graphic_window_t1

0x839e,	// (0x00039ba9) popup_snote2_single_graphic_window_t2_ParamLimits

0x839e,	// (0x00039ba9) popup_snote2_single_graphic_window_t2

0x8260,	// (0x00039a6b) popup_snote2_single_graphic_window_t3_ParamLimits

0x8260,	// (0x00039a6b) popup_snote2_single_graphic_window_t3

0x82a1,	// (0x00039aac) popup_snote2_single_graphic_window_t4_ParamLimits

0x82a1,	// (0x00039aac) popup_snote2_single_graphic_window_t4

0x82d7,	// (0x00039ae2) popup_snote2_single_graphic_window_t5_ParamLimits

0x82d7,	// (0x00039ae2) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7f,	// (0x0004148a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7f,	// (0x0004148a) popup_snote2_single_graphic_window_t

0x6dd0,	// (0x000385db) clock_nsta_pane_cp2_t1

0x6dd0,	// (0x000385db) clock_nsta_pane_cp2_t2

0x0001,

0xfa93,	// (0x0004129e) clock_nsta_pane_cp2_t

0x0114,	// (0x0003191f) form_field_data_wide_pane_g1_ParamLimits

0x35ee,	// (0x00034df9) form_field_data_wide_pane_g2_ParamLimits

0x35ee,	// (0x00034df9) form_field_data_wide_pane_g2

0x35fa,	// (0x00034e05) form_field_data_wide_pane_g3_ParamLimits

0x35fa,	// (0x00034e05) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x00040e5f) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x00040e5f) form_field_data_wide_pane_g

0xdc30,	// (0x0003f43b) grid_touch_3_pane_ParamLimits

0xdc30,	// (0x0003f43b) grid_touch_3_pane

0xe078,	// (0x0003f883) cell_touch_3_pane_ParamLimits

0xe078,	// (0x0003f883) cell_touch_3_pane

0x7317,	// (0x00038b22) cell_touch_3_pane_g1

0x7317,	// (0x00038b22) cell_touch_3_pane_g2

0x0001,

0xfb18,	// (0x00041323) cell_touch_3_pane_g

0x30b8,	// (0x000348c3) cont_query_data_pane

0x30c0,	// (0x000348cb) cont_query_data_pane_cp1

0x8418,	// (0x00039c23) button_value_adjust_pane_cp7

0x8420,	// (0x00039c2b) query_popup_pane_cp3

0x3f62,	// (0x0003576d) bg_popup_sub_pane_cp22_ParamLimits

0x04d8,	// (0x00031ce3) navi_navi_volume_pane_cp2

0x04f3,	// (0x00031cfe) popup_side_volume_key_window_g2

0x0502,	// (0x00031d0d) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x00040ef5) popup_side_volume_key_window_g

0x051f,	// (0x00031d2a) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x00040efc) popup_side_volume_key_window_t

0x421c,	// (0x00035a27) popup_side_volume_key_window_ParamLimits

0xb905,	// (0x0003d110) list_double_graphic_pane_g4_ParamLimits

0xb905,	// (0x0003d110) list_double_graphic_pane_g4

0xc868,	// (0x0003e073) list_single_2heading_msg_pane_ParamLimits

0xc868,	// (0x0003e073) list_single_2heading_msg_pane

0xc994,	// (0x0003e19f) list_single_2heading_msg_pane_g1_ParamLimits

0xc994,	// (0x0003e19f) list_single_2heading_msg_pane_g1

0xc9a0,	// (0x0003e1ab) list_single_2heading_msg_pane_g2_ParamLimits

0xc9a0,	// (0x0003e1ab) list_single_2heading_msg_pane_g2

0xc9b3,	// (0x0003e1be) list_single_2heading_msg_pane_g3_ParamLimits

0xc9b3,	// (0x0003e1be) list_single_2heading_msg_pane_g3

0xc9bf,	// (0x0003e1ca) list_single_2heading_msg_pane_g4_ParamLimits

0xc9bf,	// (0x0003e1ca) list_single_2heading_msg_pane_g4

0x0003,

0xfc8a,	// (0x00041495) list_single_2heading_msg_pane_g_ParamLimits

0xfc8a,	// (0x00041495) list_single_2heading_msg_pane_g

0xc9d7,	// (0x0003e1e2) list_single_2heading_msg_pane_t1_ParamLimits

0xc9d7,	// (0x0003e1e2) list_single_2heading_msg_pane_t1

0xc9ff,	// (0x0003e20a) list_single_2heading_msg_pane_t2_ParamLimits

0xc9ff,	// (0x0003e20a) list_single_2heading_msg_pane_t2

0xca6a,	// (0x0003e275) list_single_2heading_msg_pane_t3_ParamLimits

0xca6a,	// (0x0003e275) list_single_2heading_msg_pane_t3

0x3b87,	// (0x00035392) list_single_2heading_msg_pane_t4_ParamLimits

0x3b87,	// (0x00035392) list_single_2heading_msg_pane_t4

0x0003,

0xfc93,	// (0x0004149e) list_single_2heading_msg_pane_t_ParamLimits

0xfc93,	// (0x0004149e) list_single_2heading_msg_pane_t

0x2ca7,	// (0x000344b2) title_pane_g4_ParamLimits

0x2ca7,	// (0x000344b2) title_pane_g4

0x02e7,	// (0x00031af2) title_pane_stacon_g3_ParamLimits

0x02e7,	// (0x00031af2) title_pane_stacon_g3

0x7f46,	// (0x00039751) list_single_2graphic_im_pane_g4_ParamLimits

0x7f46,	// (0x00039751) list_single_2graphic_im_pane_g4

0x5dc6,	// (0x000375d1) popup_side_volume_key_window_cp

0x65eb,	// (0x00037df6) main_idle_act2_pane_t1

0x0f4a,	// (0x00032755) toolbar_button_pane_g10

0xb792,	// (0x0003cf9d) popup_toolbar_window_cp1

0x6dc1,	// (0x000385cc) clock_nsta_pane_cp_t1

0x6dc1,	// (0x000385cc) clock_nsta_pane_cp_t2

0x0001,

0xfa8e,	// (0x00041299) clock_nsta_pane_cp_t

0x04d8,	// (0x00031ce3) navi_navi_volume_pane_cp2_ParamLimits

0x04e7,	// (0x00031cf2) popup_side_volume_key_window_g1_ParamLimits

0x04f3,	// (0x00031cfe) popup_side_volume_key_window_g2_ParamLimits

0x0502,	// (0x00031d0d) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x00040ef5) popup_side_volume_key_window_g_ParamLimits

0x1950,	// (0x0003315b) fep_hwr_aid_pane

0x19f7,	// (0x00033202) bg_fep_hwr_top_pane_g4_ParamLimits

0x7373,	// (0x00038b7e) fep_hwr_top_pane_g1_ParamLimits

0x7385,	// (0x00038b90) fep_hwr_top_pane_g2_ParamLimits

0x1a17,	// (0x00033222) fep_hwr_top_pane_g3_ParamLimits

0xfae3,	// (0x000412ee) fep_hwr_top_pane_g_ParamLimits

0x1a2c,	// (0x00033237) fep_hwr_top_text_pane_ParamLimits

0x5b89,	// (0x00037394) aid_touch_tab_arrow_arrow_2

0x5b92,	// (0x0003739d) aid_touch_tab_arrow_left_2

0x1964,	// (0x0003316f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x199b,	// (0x000331a6) fep_hwr_prediction_pane

0x74e5,	// (0x00038cf0) fep_vkb_prediction_pane

0xdef2,	// (0x0003f6fd) fep_vkb_side_pane_g3_ParamLimits

0xdef2,	// (0x0003f6fd) fep_vkb_side_pane_g3

0x1ba7,	// (0x000333b2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1dc2,	// (0x000335cd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1dcf,	// (0x000335da) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb92,	// (0x0004139d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1efe,	// (0x00033709) fep_hwr_prediction_pane_g1

0x1f08,	// (0x00033713) fep_hwr_prediction_pane_g2

0x1f10,	// (0x0003371b) fep_hwr_prediction_pane_g3

0x1f18,	// (0x00033723) fep_hwr_prediction_pane_g4

0x0003,

0xfc9c,	// (0x000414a7) fep_hwr_prediction_pane_g

0x8445,	// (0x00039c50) fep_vkb_prediction_pane_g1

0x844f,	// (0x00039c5a) fep_vkb_prediction_pane_g2

0x8457,	// (0x00039c62) fep_vkb_prediction_pane_g3

0x845f,	// (0x00039c6a) fep_vkb_prediction_pane_g4

0x0003,

0xfca5,	// (0x000414b0) fep_vkb_prediction_pane_g

0x1355,	// (0x00032b60) slider_set_pane_g3

0x1369,	// (0x00032b74) slider_set_pane_g4

0x1381,	// (0x00032b8c) slider_set_pane_g5

0x1355,	// (0x00032b60) slider_set_pane_g6

0x1397,	// (0x00032ba2) slider_set_pane_g7

0x6216,	// (0x00037a21) slider_form_pane_g3

0x621f,	// (0x00037a2a) slider_form_pane_g4

0x6227,	// (0x00037a32) slider_form_pane_g5

0x6216,	// (0x00037a21) slider_form_pane_g6

0xda68,	// (0x0003f273) slider_form_pane_g7

0x6896,	// (0x000380a1) slider_set_pane_vc_g3

0x689f,	// (0x000380aa) slider_set_pane_vc_g4

0x68a8,	// (0x000380b3) slider_set_pane_vc_g5

0x6896,	// (0x000380a1) slider_set_pane_vc_g6

0x68b1,	// (0x000380bc) slider_set_pane_vc_g7

0x6a73,	// (0x0003827e) slider_form_pane_vc_g1

0x6a7c,	// (0x00038287) slider_form_pane_vc_g2

0x6a85,	// (0x00038290) slider_form_pane_vc_g3

0x6a73,	// (0x0003827e) slider_form_pane_vc_g4

0x6a8e,	// (0x00038299) slider_form_pane_vc_g5

0x0004,

0xfa60,	// (0x0004126b) slider_form_pane_vc_g

0xf290,	// (0x00040a9b) main_idle_act3_pane

0x8467,	// (0x00039c72) ai3_links_pane

0xe0c0,	// (0x0003f8cb) popup_ai3_data_window_ParamLimits

0xe0c0,	// (0x0003f8cb) popup_ai3_data_window

0xe1e2,	// (0x0003f9ed) grid_ai3_links_pane

0xe0da,	// (0x0003f8e5) cell_ai3_links_pane_ParamLimits

0xe0da,	// (0x0003f8e5) cell_ai3_links_pane

0x84a2,	// (0x00039cad) bg_popup_sub_pane_cp11

0x84af,	// (0x00039cba) cell_ai3_links_pane_g1

0xe1e2,	// (0x0003f9ed) bg_popup_sub_pane_cp12

0x84d4,	// (0x00039cdf) heading_ai3_data_pane

0x84dc,	// (0x00039ce7) list_ai3_gene_pane

0x84e8,	// (0x00039cf3) popup_ai3_data_window_g1

0x84f0,	// (0x00039cfb) heading_ai3_data_pane_g1

0x84f8,	// (0x00039d03) heading_ai3_data_pane_t1

0x8506,	// (0x00039d11) list_double_ai3_gene_pane_ParamLimits

0x8506,	// (0x00039d11) list_double_ai3_gene_pane

0x8513,	// (0x00039d1e) list_single_ai3_gene_pane_ParamLimits

0x8513,	// (0x00039d1e) list_single_ai3_gene_pane

0x72dc,	// (0x00038ae7) list_highlight_pane_cp7_ParamLimits

0x72dc,	// (0x00038ae7) list_highlight_pane_cp7

0x8520,	// (0x00039d2b) list_single_a13_gene_pane_t1_ParamLimits

0x8520,	// (0x00039d2b) list_single_a13_gene_pane_t1

0x8537,	// (0x00039d42) list_single_ai3_gene_pane_g1

0x8540,	// (0x00039d4b) list_single_ai3_gene_pane_g2

0x0001,

0xfcae,	// (0x000414b9) list_single_ai3_gene_pane_g

0x8548,	// (0x00039d53) list_double_ai3_gene_pane_g1_ParamLimits

0x8548,	// (0x00039d53) list_double_ai3_gene_pane_g1

0x8554,	// (0x00039d5f) list_double_ai3_gene_pane_t1_ParamLimits

0x8554,	// (0x00039d5f) list_double_ai3_gene_pane_t1

0x8570,	// (0x00039d7b) list_double_ai3_gene_pane_t2_ParamLimits

0x8570,	// (0x00039d7b) list_double_ai3_gene_pane_t2

0x8586,	// (0x00039d91) list_double_ai3_gene_pane_t3_ParamLimits

0x8586,	// (0x00039d91) list_double_ai3_gene_pane_t3

0x0002,

0xfcb3,	// (0x000414be) list_double_ai3_gene_pane_t_ParamLimits

0xfcb3,	// (0x000414be) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3ab8,	// (0x000352c3) aid_size_min_col_2

0xe0aa,	// (0x0003f8b5) aid_size_min_msg_ParamLimits

0xe0aa,	// (0x0003f8b5) aid_size_min_msg

0xdf06,	// (0x0003f711) fep_vkb_top_text_pane_g2_ParamLimits

0xdf06,	// (0x0003f711) fep_vkb_top_text_pane_g2

0x0001,

0xfb13,	// (0x0004131e) fep_vkb_top_text_pane_g_ParamLimits

0xfb13,	// (0x0004131e) fep_vkb_top_text_pane_g

0xf290,	// (0x00040a9b) main_hc_apps_shell_pane

0x85a3,	// (0x00039dae) grid_hc_apps_pane_ParamLimits

0x85a3,	// (0x00039dae) grid_hc_apps_pane

0x85b5,	// (0x00039dc0) list_hc_apps_pane

0x85bd,	// (0x00039dc8) scroll_pane_cp37_ParamLimits

0x85bd,	// (0x00039dc8) scroll_pane_cp37

0xe0f4,	// (0x0003f8ff) cell_hc_apps_pane_ParamLimits

0xe0f4,	// (0x0003f8ff) cell_hc_apps_pane

0xe240,	// (0x0003fa4b) cell_hc_apps_pane_g1_ParamLimits

0xe240,	// (0x0003fa4b) cell_hc_apps_pane_g1

0x86a7,	// (0x00039eb2) cell_hc_apps_pane_g2_ParamLimits

0x86a7,	// (0x00039eb2) cell_hc_apps_pane_g2

0x86c3,	// (0x00039ece) cell_hc_apps_pane_g3_ParamLimits

0x86c3,	// (0x00039ece) cell_hc_apps_pane_g3

0x0002,

0xfcba,	// (0x000414c5) cell_hc_apps_pane_g_ParamLimits

0xfcba,	// (0x000414c5) cell_hc_apps_pane_g

0xe26c,	// (0x0003fa77) cell_hc_apps_pane_t1_ParamLimits

0xe26c,	// (0x0003fa77) cell_hc_apps_pane_t1

0x2fdc,	// (0x000347e7) grid_highlight_pane_cp10_ParamLimits

0x2fdc,	// (0x000347e7) grid_highlight_pane_cp10

0xe2aa,	// (0x0003fab5) list_single_hc_apps_pane_ParamLimits

0xe2aa,	// (0x0003fab5) list_single_hc_apps_pane

0xe2d7,	// (0x0003fae2) list_single_hc_apps_pane_g1

0xcad8,	// (0x0003e2e3) list_single_hc_apps_pane_g2

0x0001,

0xfcc1,	// (0x000414cc) list_single_hc_apps_pane_g

0xcaf1,	// (0x0003e2fc) list_single_hc_apps_pane_g2_copy1

0xcb0d,	// (0x0003e318) list_single_hc_apps_pane_t1

0x2d53,	// (0x0003455e) bg_set_opt_pane_cp_ParamLimits

0xf3ab,	// (0x00040bb6) setting_slider_pane_t1_ParamLimits

0xf3c4,	// (0x00040bcf) setting_slider_pane_t2_ParamLimits

0xf3de,	// (0x00040be9) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00040d42) setting_slider_pane_t_ParamLimits

0xf3f6,	// (0x00040c01) slider_set_pane_ParamLimits

0x080b,	// (0x00032016) control_pane_g5_ParamLimits

0x080b,	// (0x00032016) control_pane_g5

0x6065,	// (0x00037870) slider_set_pane_g1_ParamLimits

0x1349,	// (0x00032b54) slider_set_pane_g2_ParamLimits

0x1355,	// (0x00032b60) slider_set_pane_g3_ParamLimits

0x1369,	// (0x00032b74) slider_set_pane_g4_ParamLimits

0x1381,	// (0x00032b8c) slider_set_pane_g5_ParamLimits

0x1355,	// (0x00032b60) slider_set_pane_g6_ParamLimits

0x1397,	// (0x00032ba2) slider_set_pane_g7_ParamLimits

0xf938,	// (0x00041143) slider_set_pane_g_ParamLimits

0x42fd,	// (0x00035b08) navi_icon_text_pane_ParamLimits

0xd311,	// (0x0003eb1c) aid_fill_nsta_2_ParamLimits

0xd348,	// (0x0003eb53) aid_touch_tab_arrow_left_ParamLimits

0xd35e,	// (0x0003eb69) aid_touch_tab_arrow_right_ParamLimits

0xd3f9,	// (0x0003ec04) clock_nsta_pane_ParamLimits

0x5b6b,	// (0x00037376) navi_icon_pane_g1_ParamLimits

0x5b77,	// (0x00037382) navi_text_pane_t1_ParamLimits

0x6ecd,	// (0x000386d8) navi_icon_text_pane_g1_ParamLimits

0x6ed9,	// (0x000386e4) navi_icon_text_pane_t1_ParamLimits

0xe2d7,	// (0x0003fae2) list_single_hc_apps_pane_g1_ParamLimits

0xcad8,	// (0x0003e2e3) list_single_hc_apps_pane_g2_ParamLimits

0xfcc1,	// (0x000414cc) list_single_hc_apps_pane_g_ParamLimits

0xcaf1,	// (0x0003e2fc) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcb0d,	// (0x0003e318) list_single_hc_apps_pane_t1_ParamLimits

0xb33b,	// (0x0003cb46) popup_toolbar2_fixed_window_ParamLimits

0xb33b,	// (0x0003cb46) popup_toolbar2_fixed_window

0xc716,	// (0x0003df21) popup_toolbar2_float_window

0xe1e2,	// (0x0003f9ed) bg_popup_sub_pane_cp27

0x879a,	// (0x00039fa5) grid_toolbar2_float_pane

0xe1e2,	// (0x0003f9ed) bg_popup_sub_pane_cp26

0x879a,	// (0x00039fa5) grid_toolbar2_fixed_pane

0xe2f0,	// (0x0003fafb) cell_toolbar2_fixed_pane_ParamLimits

0xe2f0,	// (0x0003fafb) cell_toolbar2_fixed_pane

0xe30a,	// (0x0003fb15) cell_toolbar2_fixed_pane_g1

0x87bb,	// (0x00039fc6) toolbar2_fixed_button_pane

0x4cd8,	// (0x000364e3) toolbar2_fixed_button_pane_g1

0x4ce8,	// (0x000364f3) toolbar2_fixed_button_pane_g2

0x4ce0,	// (0x000364eb) toolbar2_fixed_button_pane_g3

0x4cf8,	// (0x00036503) toolbar2_fixed_button_pane_g4

0x4cf0,	// (0x000364fb) toolbar2_fixed_button_pane_g5

0x4d00,	// (0x0003650b) toolbar2_fixed_button_pane_g6

0x4d08,	// (0x00036513) toolbar2_fixed_button_pane_g7

0x4d18,	// (0x00036523) toolbar2_fixed_button_pane_g8

0x4d10,	// (0x0003651b) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x00041045) toolbar2_fixed_button_pane_g

0x87c3,	// (0x00039fce) cell_toolbar2_float_pane_ParamLimits

0x87c3,	// (0x00039fce) cell_toolbar2_float_pane

0x87d4,	// (0x00039fdf) cell_toolbar2_float_pane_g1

0x87bb,	// (0x00039fc6) toolbar2_fixed_button_pane_cp

0xdde0,	// (0x0003f5eb) fep_vkb_accented_list_pane_ParamLimits

0xdde0,	// (0x0003f5eb) fep_vkb_accented_list_pane

0x1b87,	// (0x00033392) bg_popup_fep_shadow_pane_g9

0x448a,	// (0x00035c95) bg_popup_fep_shadow_pane_cp3

0x3747,	// (0x00034f52) list_accented_list_pane

0x87dd,	// (0x00039fe8) list_single_accented_list_pane_ParamLimits

0x87dd,	// (0x00039fe8) list_single_accented_list_pane

0x448a,	// (0x00035c95) list_highlight_pane_cp10

0x87ee,	// (0x00039ff9) list_single_accented_list_pane_t1

0xc640,	// (0x0003de4b) popup_slider_window_ParamLimits

0xc640,	// (0x0003de4b) popup_slider_window

0x8428,	// (0x00039c33) aid_indentation_list_msg

0xe401,	// (0x0003fc0c) bg_popup_window_pane_cp19

0x891a,	// (0x0003a125) popup_slider_window_g1

0x8936,	// (0x0003a141) popup_slider_window_g2

0x8952,	// (0x0003a15d) popup_slider_window_g3

0x0005,

0xfcc6,	// (0x000414d1) popup_slider_window_g

0x89b8,	// (0x0003a1c3) popup_slider_window_t1

0x8a2c,	// (0x0003a237) small_volume_slider_vertical_pane

0x7317,	// (0x00038b22) small_volume_slider_vertical_pane_g1

0x7317,	// (0x00038b22) small_volume_slider_vertical_pane_g2

0x8a48,	// (0x0003a253) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd8,	// (0x000414e3) small_volume_slider_vertical_pane_g

0xf1ad,	// (0x000409b8) area_side_right_pane_ParamLimits

0xf1ad,	// (0x000409b8) area_side_right_pane

0xcb3b,	// (0x0003e346) aid_size_side_button_ParamLimits

0xcb3b,	// (0x0003e346) aid_size_side_button

0xcb54,	// (0x0003e35f) grid_sctrl_middle_pane_ParamLimits

0xcb54,	// (0x0003e35f) grid_sctrl_middle_pane

0x1f53,	// (0x0003375e) sctrl_sk_bottom_pane

0x1f64,	// (0x0003376f) sctrl_sk_top_pane

0x1f76,	// (0x00033781) aid_touch_sctrl_top

0x1f83,	// (0x0003378e) bg_sctrl_sk_pane_ParamLimits

0x1f83,	// (0x0003378e) bg_sctrl_sk_pane

0x1f91,	// (0x0003379c) sctrl_sk_top_pane_g1

0x1f9e,	// (0x000337a9) sctrl_sk_top_pane_t1

0x1f76,	// (0x00033781) aid_touch_sctrl_bottom

0x1f83,	// (0x0003378e) bg_sctrl_sk_pane_cp_ParamLimits

0x1f83,	// (0x0003378e) bg_sctrl_sk_pane_cp

0x1fb9,	// (0x000337c4) sctrl_sk_bottom_pane_g1

0x1f9e,	// (0x000337a9) sctrl_sk_bottom_pane_t1

0xcb73,	// (0x0003e37e) cell_sctrl_middle_pane_ParamLimits

0xcb73,	// (0x0003e37e) cell_sctrl_middle_pane

0xcb96,	// (0x0003e3a1) aid_touch_sctrl_middle_ParamLimits

0xcb96,	// (0x0003e3a1) aid_touch_sctrl_middle

0x1f83,	// (0x0003378e) bg_sctrl_middle_pane_ParamLimits

0x1f83,	// (0x0003378e) bg_sctrl_middle_pane

0x289b,	// (0x000340a6) cell_sctrl_middle_pane_g1_ParamLimits

0x289b,	// (0x000340a6) cell_sctrl_middle_pane_g1

0xcbaa,	// (0x0003e3b5) cell_sctrl_middle_pane_g2_ParamLimits

0xcbaa,	// (0x0003e3b5) cell_sctrl_middle_pane_g2

0x0001,

0xfce4,	// (0x000414ef) cell_sctrl_middle_pane_g_ParamLimits

0xfce4,	// (0x000414ef) cell_sctrl_middle_pane_g

0x4cd8,	// (0x000364e3) bg_sctrl_middle_pane_g1

0x4ce0,	// (0x000364eb) bg_sctrl_middle_pane_g2

0x4ce8,	// (0x000364f3) bg_sctrl_middle_pane_g3

0x4cf0,	// (0x000364fb) bg_sctrl_middle_pane_g4

0x4cf8,	// (0x00036503) bg_sctrl_middle_pane_g5

0x4d00,	// (0x0003650b) bg_sctrl_middle_pane_g6

0x4d08,	// (0x00036513) bg_sctrl_middle_pane_g7

0x4d10,	// (0x0003651b) bg_sctrl_middle_pane_g8

0x0007,

0xfce9,	// (0x000414f4) bg_sctrl_middle_pane_g

0x4d18,	// (0x00036523) bg_sctrl_middle_pane_g8_copy1

0x4cd8,	// (0x000364e3) bg_sctrl_sk_pane_g1

0x4ce8,	// (0x000364f3) bg_sctrl_sk_pane_g2

0x4ce0,	// (0x000364eb) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x00041045) bg_sctrl_sk_pane_g

0x350f,	// (0x00034d1a) aid_size_touch_scroll_bar

0x4cf8,	// (0x00036503) bg_sctrl_sk_pane_g4

0x4cf0,	// (0x000364fb) bg_sctrl_sk_pane_g5

0x4d00,	// (0x0003650b) bg_sctrl_sk_pane_g6

0x4d08,	// (0x00036513) bg_sctrl_sk_pane_g7

0x4d18,	// (0x00036523) bg_sctrl_sk_pane_g8

0x4d10,	// (0x0003651b) bg_sctrl_sk_pane_g9

0x09cb,	// (0x000321d6) popup_fep_china_hwr2_fs_candidate_window

0xc154,	// (0x0003d95f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc154,	// (0x0003d95f) popup_fep_china_hwr2_fs_control_window

0x1ba7,	// (0x000333b2) sctrl_sk_top_pane_g2

0x0001,

0xfcdf,	// (0x000414ea) sctrl_sk_top_pane_g

0xe4b9,	// (0x0003fcc4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4b9,	// (0x0003fcc4) aid_fep_china_hwr2_fs_cell

0xe4cd,	// (0x0003fcd8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe4cd,	// (0x0003fcd8) bg_popup_fep_shadow_pane_cp4

0xe4e4,	// (0x0003fcef) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe4e4,	// (0x0003fcef) bg_popup_fep_shadow_pane_cp5

0xe4f6,	// (0x0003fd01) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe4f6,	// (0x0003fd01) popup_fep_china_hwr2_fs_control_bar_grid

0xe50a,	// (0x0003fd15) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ac5,	// (0x0003a2d0) aid_fep_china_hwr2_fs_candi_cell

0xe1e2,	// (0x0003f9ed) bg_popup_fep_shadow_pane_cp6

0x8acf,	// (0x0003a2da) popup_fep_china_hwr2_fs_candidate_grid

0xe512,	// (0x0003fd1d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe512,	// (0x0003fd1d) cell_fep_china_hwr2_fs_funtion_grid

0x7317,	// (0x00038b22) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8af1,	// (0x0003a2fc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8af1,	// (0x0003a2fc) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8aff,	// (0x0003a30a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8aff,	// (0x0003a30a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfa,	// (0x00041505) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfa,	// (0x00041505) cell_fep_china_hwr2_fs_funtion_grid_g

0xe52a,	// (0x0003fd35) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe52a,	// (0x0003fd35) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe53f,	// (0x0003fd4a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe53f,	// (0x0003fd4a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcff,	// (0x0004150a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcff,	// (0x0004150a) cell_fep_china_hwr2_fs_funtion_grid_t

0x8b46,	// (0x0003a351) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8b4e,	// (0x0003a359) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8b56,	// (0x0003a361) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd04,	// (0x0004150f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8b5e,	// (0x0003a369) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8b5e,	// (0x0003a369) cell_fep_china_hwr2_fs_candidate_grid

0x8b77,	// (0x0003a382) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8b7f,	// (0x0003a38a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7317,	// (0x00038b22) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7317,	// (0x00038b22) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb18,	// (0x00041323) cell_fep_china_hwr2_fs_candidate_grid_g

0x8b87,	// (0x0003a392) cell_fep_china_hwr2_fs_candidate_grid_t1

0x48ce,	// (0x000360d9) clock_nsta_pane_cp_24_ParamLimits

0x48ce,	// (0x000360d9) clock_nsta_pane_cp_24

0x494c,	// (0x00036157) indicator_nsta_pane_cp_24_ParamLimits

0x494c,	// (0x00036157) indicator_nsta_pane_cp_24

0x59e7,	// (0x000371f2) heading_pane_g1

0x0001,

0xf89f,	// (0x000410aa) heading_pane_g

0x6434,	// (0x00037c3f) grid_sct_catagory_button_pane

0x6464,	// (0x00037c6f) scroll_pane_cp5_ParamLimits

0x6f1b,	// (0x00038726) button_value_adjust_pane_cp5_ParamLimits

0x6f1b,	// (0x00038726) button_value_adjust_pane_cp5

0x6ffa,	// (0x00038805) form2_midp_time_pane_ParamLimits

0x8b95,	// (0x0003a3a0) cell_sct_catagory_button_pane_ParamLimits

0x8b95,	// (0x0003a3a0) cell_sct_catagory_button_pane

0x72dc,	// (0x00038ae7) bg_button_pane_cp01_ParamLimits

0x72dc,	// (0x00038ae7) bg_button_pane_cp01

0x7317,	// (0x00038b22) cell_sct_catagory_button_pane_g1

0xc6b9,	// (0x0003dec4) popup_tb_extension_window

0xe55b,	// (0x0003fd66) aid_size_cell_ext_ParamLimits

0xe55b,	// (0x0003fd66) aid_size_cell_ext

0x3351,	// (0x00034b5c) bg_tb_trans_pane_cp1_ParamLimits

0x3351,	// (0x00034b5c) bg_tb_trans_pane_cp1

0xe581,	// (0x0003fd8c) grid_tb_ext_pane_ParamLimits

0xe581,	// (0x0003fd8c) grid_tb_ext_pane

0xe5bc,	// (0x0003fdc7) cell_tb_ext_pane_ParamLimits

0xe5bc,	// (0x0003fdc7) cell_tb_ext_pane

0xe5e4,	// (0x0003fdef) cell_tb_ext_pane_g1_ParamLimits

0xe5e4,	// (0x0003fdef) cell_tb_ext_pane_g1

0x8c29,	// (0x0003a434) cell_tb_ext_pane_t1

0x2fdc,	// (0x000347e7) list_highlight_pane_cp11_ParamLimits

0x2fdc,	// (0x000347e7) list_highlight_pane_cp11

0xb350,	// (0x0003cb5b) popup_uni_indicator_window_ParamLimits

0xb350,	// (0x0003cb5b) popup_uni_indicator_window

0x35e0,	// (0x00034deb) bg_popup_sub_pane_cp14

0x8c44,	// (0x0003a44f) list_uniindi_pane

0x8c50,	// (0x0003a45b) uniindi_top_pane

0x2fdc,	// (0x000347e7) bg_uniindi_top_pane

0x8c6f,	// (0x0003a47a) uniindi_top_pane_g1

0x8c85,	// (0x0003a490) uniindi_top_pane_g2

0x0003,

0xfd0b,	// (0x00041516) uniindi_top_pane_g

0x8caf,	// (0x0003a4ba) uniindi_top_pane_t1

0x8cd9,	// (0x0003a4e4) list_single_uniindi_pane_ParamLimits

0x8cd9,	// (0x0003a4e4) list_single_uniindi_pane

0x7317,	// (0x00038b22) bg_uniindi_top_pane_g1

0x8cec,	// (0x0003a4f7) list_single_uniindi_pane_g1

0x8cff,	// (0x0003a50a) list_single_uniindi_pane_t1

0xf290,	// (0x00040a9b) control_bg_pane

0x8d24,	// (0x0003a52f) bg_sctrl_sk_pane_cp1

0x8d2d,	// (0x0003a538) bg_sctrl_sk_pane_cp2

0x8d36,	// (0x0003a541) control_bg_pane_g1

0x8d3f,	// (0x0003a54a) control_bg_pane_g2

0x0001,

0xfd14,	// (0x0004151f) control_bg_pane_g

0x6d65,	// (0x00038570) cell_indicator_nsta_pane_g1_ParamLimits

0xdc6d,	// (0x0003f478) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7c,	// (0x00041287) cell_indicator_nsta_pane_g_ParamLimits

0x192f,	// (0x0003313a) form2_midp_time_pane_t1_ParamLimits

0x1942,	// (0x0003314d) main_idle_act4_pane_ParamLimits

0x1942,	// (0x0003314d) main_idle_act4_pane

0xc6b9,	// (0x0003dec4) popup_tb_extension_window_ParamLimits

0xe5a3,	// (0x0003fdae) tb_ext_find_pane_ParamLimits

0xe5a3,	// (0x0003fdae) tb_ext_find_pane

0x8d48,	// (0x0003a553) ai_gene_pane_1_cp1

0x45d1,	// (0x00035ddc) ai_gene_pane_2_cp1

0x8d50,	// (0x0003a55b) list_single_idle_plugin_calendar_pane

0x8d59,	// (0x0003a564) list_single_idle_plugin_notification_pane

0x8d62,	// (0x0003a56d) list_single_idle_plugin_player_pane

0xe601,	// (0x0003fe0c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe601,	// (0x0003fe0c) list_single_idle_plugin_shortcut_pane

0xe629,	// (0x0003fe34) main_idle_act4_pane_t1

0xe63f,	// (0x0003fe4a) main_idle_act4_pane_t2

0x0001,

0xfd19,	// (0x00041524) main_idle_act4_pane_t

0xe655,	// (0x0003fe60) middle_sk_idle_act4_pane_ParamLimits

0xe655,	// (0x0003fe60) middle_sk_idle_act4_pane

0xe671,	// (0x0003fe7c) popup_clock_digital_analogue_window_cp2

0xe699,	// (0x0003fea4) shortcut_wheel_idle_act4_pane_ParamLimits

0xe699,	// (0x0003fea4) shortcut_wheel_idle_act4_pane

0x7317,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g1

0x7317,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g2

0x7317,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g3

0x7317,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g4

0x7317,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g5

0x8df5,	// (0x0003a600) shortcut_wheel_idle_act4_pane_g6

0x8dfd,	// (0x0003a608) shortcut_wheel_idle_act4_pane_g7

0x8e05,	// (0x0003a610) shortcut_wheel_idle_act4_pane_g8

0x8e0d,	// (0x0003a618) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1e,	// (0x00041529) shortcut_wheel_idle_act4_pane_g

0xe1b2,	// (0x0003f9bd) middle_sk_idle_act4_pane_g1_ParamLimits

0xe1b2,	// (0x0003f9bd) middle_sk_idle_act4_pane_g1

0xe716,	// (0x0003ff21) middle_sk_idle_act4_pane_g2_ParamLimits

0xe716,	// (0x0003ff21) middle_sk_idle_act4_pane_g2

0x0001,

0xfd41,	// (0x0004154c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd41,	// (0x0004154c) middle_sk_idle_act4_pane_g

0xe72e,	// (0x0003ff39) middle_sk_idle_act4_pane_t1_ParamLimits

0xe72e,	// (0x0003ff39) middle_sk_idle_act4_pane_t1

0xe75d,	// (0x0003ff68) grid_ai_shortcut_pane_ParamLimits

0xe75d,	// (0x0003ff68) grid_ai_shortcut_pane

0xe77a,	// (0x0003ff85) list_highlight_pane_cp16_ParamLimits

0xe77a,	// (0x0003ff85) list_highlight_pane_cp16

0xe787,	// (0x0003ff92) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe787,	// (0x0003ff92) list_single_idle_plugin_shortcut_pane_g1

0xe793,	// (0x0003ff9e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe793,	// (0x0003ff9e) list_single_idle_plugin_shortcut_pane_g2

0xe7af,	// (0x0003ffba) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7af,	// (0x0003ffba) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd46,	// (0x00041551) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd46,	// (0x00041551) list_single_idle_plugin_shortcut_pane_g

0xe7c4,	// (0x0003ffcf) cell_ai_shortcut_pane_ParamLimits

0xe7c4,	// (0x0003ffcf) cell_ai_shortcut_pane

0xe7da,	// (0x0003ffe5) cell_ai_shortcut_pane_g1_ParamLimits

0xe7da,	// (0x0003ffe5) cell_ai_shortcut_pane_g1

0x8d48,	// (0x0003a553) ai_gene_pane_1_cp2

0x8f3d,	// (0x0003a748) ai_gene_pane_2_cp2

0x8f45,	// (0x0003a750) list_highlight_pane_cp15

0x8f4e,	// (0x0003a759) list_single_idle_plugin_calendar_pane_g1

0x8f45,	// (0x0003a750) list_highlight_pane_cp17

0x8f56,	// (0x0003a761) list_single_idle_plugin_calendar_pane_g1_copy1

0x8f5e,	// (0x0003a769) list_single_idle_plugin_player_pane_g1

0x668d,	// (0x00037e98) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4d,	// (0x00041558) list_single_idle_plugin_player_pane_g

0x8f66,	// (0x0003a771) list_single_idle_plugin_player_pane_t1

0x8f74,	// (0x0003a77f) list_single_idle_plugin_player_pane_t2

0x8f82,	// (0x0003a78d) list_single_idle_plugin_player_pane_t3

0x8f90,	// (0x0003a79b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd52,	// (0x0004155d) list_single_idle_plugin_player_pane_t

0x8f9e,	// (0x0003a7a9) wait_bar_pane_cp15

0x8fa6,	// (0x0003a7b1) grid_ai_notification_pane

0x668d,	// (0x00037e98) list_single_idle_plugin_notification_pane_g1

0xe7fc,	// (0x00040007) cell_ai_notification_pane_ParamLimits

0xe7fc,	// (0x00040007) cell_ai_notification_pane

0x8fbc,	// (0x0003a7c7) cell_ai_notification_pane_g1

0x8fc4,	// (0x0003a7cf) cell_ai_notification_pane_t1

0xe809,	// (0x00040014) tb_ext_find_button_pane

0xe811,	// (0x0004001c) tb_ext_find_pane_g1

0xe819,	// (0x00040024) tb_ext_find_pane_t1

0x3e59,	// (0x00035664) tb_ext_find_button_pane_g1

0x8ff0,	// (0x0003a7fb) tb_ext_find_button_pane_g2

0x0001,

0xfd5b,	// (0x00041566) tb_ext_find_button_pane_g

0xe629,	// (0x0003fe34) main_idle_act4_pane_t1_ParamLimits

0xe63f,	// (0x0003fe4a) main_idle_act4_pane_t2_ParamLimits

0xfd19,	// (0x00041524) main_idle_act4_pane_t_ParamLimits

0xe671,	// (0x0003fe7c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe689,	// (0x0003fe94) sat_plugin_idle_act4_pane_ParamLimits

0xe689,	// (0x0003fe94) sat_plugin_idle_act4_pane

0xe827,	// (0x00040032) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe827,	// (0x00040032) sat_plugin_idle_act4_pane_t1

0xe83f,	// (0x0004004a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe83f,	// (0x0004004a) sat_plugin_idle_act4_pane_t2

0xe857,	// (0x00040062) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe857,	// (0x00040062) sat_plugin_idle_act4_pane_t3

0xe86f,	// (0x0004007a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe86f,	// (0x0004007a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd60,	// (0x0004156b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd60,	// (0x0004156b) sat_plugin_idle_act4_pane_t

0xf355,	// (0x00040b60) popup_battery_window_ParamLimits

0xf355,	// (0x00040b60) popup_battery_window

0x2fdc,	// (0x000347e7) bg_popup_sub_pane_cp25_ParamLimits

0x2fdc,	// (0x000347e7) bg_popup_sub_pane_cp25

0x9045,	// (0x0003a850) popup_battery_window_g1_ParamLimits

0x9045,	// (0x0003a850) popup_battery_window_g1

0x9051,	// (0x0003a85c) popup_battery_window_t1_ParamLimits

0x9051,	// (0x0003a85c) popup_battery_window_t1

0x9063,	// (0x0003a86e) popup_battery_window_t2_ParamLimits

0x9063,	// (0x0003a86e) popup_battery_window_t2

0x0001,

0xfd69,	// (0x00041574) popup_battery_window_t_ParamLimits

0xfd69,	// (0x00041574) popup_battery_window_t

0xd1eb,	// (0x0003e9f6) midp_canvas_pane_ParamLimits

0xd248,	// (0x0003ea53) midp_keypad_pane_ParamLimits

0xd248,	// (0x0003ea53) midp_keypad_pane

0x47ae,	// (0x00035fb9) main_midp_pane_ParamLimits

0x6ddf,	// (0x000385ea) signal_pane_g2_cp_ParamLimits

0xe887,	// (0x00040092) aid_size_cell_midp_keypad_ParamLimits

0xe887,	// (0x00040092) aid_size_cell_midp_keypad

0xe8a5,	// (0x000400b0) midp_keyp_game_grid_pane_ParamLimits

0xe8a5,	// (0x000400b0) midp_keyp_game_grid_pane

0xe8cc,	// (0x000400d7) midp_keyp_rocker_pane_ParamLimits

0xe8cc,	// (0x000400d7) midp_keyp_rocker_pane

0xe91d,	// (0x00040128) midp_keyp_sk_left_pane_ParamLimits

0xe91d,	// (0x00040128) midp_keyp_sk_left_pane

0xe971,	// (0x0004017c) midp_keyp_sk_right_pane_ParamLimits

0xe971,	// (0x0004017c) midp_keyp_sk_right_pane

0xe1e2,	// (0x0003f9ed) bg_button_pane_cp03

0xe9c5,	// (0x000401d0) midp_keyp_sk_left_pane_g1

0xe1e2,	// (0x0003f9ed) bg_button_pane_cp04

0xe9c5,	// (0x000401d0) midp_keyp_sk_right_pane_g1

0x7317,	// (0x00038b22) midp_keyp_rocker_pane_g1

0xe9ce,	// (0x000401d9) keyp_game_cell_pane_ParamLimits

0xe9ce,	// (0x000401d9) keyp_game_cell_pane

0xe1e2,	// (0x0003f9ed) bg_button_pane_cp02

0xe9f2,	// (0x000401fd) keyp_game_cell_pane_g1

0xb2eb,	// (0x0003caf6) popup_fep_vkb2_window_ParamLimits

0xb2eb,	// (0x0003caf6) popup_fep_vkb2_window

0xcbbc,	// (0x0003e3c7) aid_size_cell_vkb2_ParamLimits

0xcbbc,	// (0x0003e3c7) aid_size_cell_vkb2

0xcbe8,	// (0x0003e3f3) popup_fep_vkb2_window_g1_ParamLimits

0xcbe8,	// (0x0003e3f3) popup_fep_vkb2_window_g1

0xcc38,	// (0x0003e443) vkb2_area_bottom_pane_ParamLimits

0xcc38,	// (0x0003e443) vkb2_area_bottom_pane

0xcc8c,	// (0x0003e497) vkb2_area_keypad_pane_ParamLimits

0xcc8c,	// (0x0003e497) vkb2_area_keypad_pane

0xccd4,	// (0x0003e4df) vkb2_area_top_pane_ParamLimits

0xccd4,	// (0x0003e4df) vkb2_area_top_pane

0xcd60,	// (0x0003e56b) vkb2_top_entry_pane_ParamLimits

0xcd60,	// (0x0003e56b) vkb2_top_entry_pane

0xcd8d,	// (0x0003e598) vkb2_top_grid_left_pane_ParamLimits

0xcd8d,	// (0x0003e598) vkb2_top_grid_left_pane

0xcdae,	// (0x0003e5b9) vkb2_top_grid_right_pane_ParamLimits

0xcdae,	// (0x0003e5b9) vkb2_top_grid_right_pane

0x2224,	// (0x00033a2f) vkb2_cell_keypad_pane_ParamLimits

0x2224,	// (0x00033a2f) vkb2_cell_keypad_pane

0xcdf6,	// (0x0003e601) vkb2_area_bottom_grid_pane_ParamLimits

0xcdf6,	// (0x0003e601) vkb2_area_bottom_grid_pane

0xce20,	// (0x0003e62b) vkb2_area_bottom_pane_g1_ParamLimits

0xce20,	// (0x0003e62b) vkb2_area_bottom_pane_g1

0xce46,	// (0x0003e651) vkb2_area_bottom_pane_g2_ParamLimits

0xce46,	// (0x0003e651) vkb2_area_bottom_pane_g2

0xce77,	// (0x0003e682) vkb2_area_bottom_pane_g3_ParamLimits

0xce77,	// (0x0003e682) vkb2_area_bottom_pane_g3

0x0002,

0xfd6e,	// (0x00041579) vkb2_area_bottom_pane_g_ParamLimits

0xfd6e,	// (0x00041579) vkb2_area_bottom_pane_g

0x23ce,	// (0x00033bd9) vkb2_top_cell_left_pane_ParamLimits

0x23ce,	// (0x00033bd9) vkb2_top_cell_left_pane

0xe9fb,	// (0x00040206) vkb2_top_entry_pane_g1_ParamLimits

0xe9fb,	// (0x00040206) vkb2_top_entry_pane_g1

0xea09,	// (0x00040214) vkb2_top_entry_pane_t1_ParamLimits

0xea09,	// (0x00040214) vkb2_top_entry_pane_t1

0x9214,	// (0x0003aa1f) vkb2_top_entry_pane_t2_ParamLimits

0x9214,	// (0x0003aa1f) vkb2_top_entry_pane_t2

0x9246,	// (0x0003aa51) vkb2_top_entry_pane_t3_ParamLimits

0x9246,	// (0x0003aa51) vkb2_top_entry_pane_t3

0x0002,

0xfd75,	// (0x00041580) vkb2_top_entry_pane_t_ParamLimits

0xfd75,	// (0x00041580) vkb2_top_entry_pane_t

0xcee1,	// (0x0003e6ec) vkb2_top_grid_right_pane_g1_ParamLimits

0xcee1,	// (0x0003e6ec) vkb2_top_grid_right_pane_g1

0x2431,	// (0x00033c3c) vkb2_top_grid_right_pane_g2_ParamLimits

0x2431,	// (0x00033c3c) vkb2_top_grid_right_pane_g2

0x2449,	// (0x00033c54) vkb2_top_grid_right_pane_g3_ParamLimits

0x2449,	// (0x00033c54) vkb2_top_grid_right_pane_g3

0xcef7,	// (0x0003e702) vkb2_top_grid_right_pane_g4_ParamLimits

0xcef7,	// (0x0003e702) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7c,	// (0x00041587) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7c,	// (0x00041587) vkb2_top_grid_right_pane_g

0x2477,	// (0x00033c82) vkb2_top_cell_left_pane_g1

0x248e,	// (0x00033c99) vkb2_cell_keypad_pane_g1_ParamLimits

0x248e,	// (0x00033c99) vkb2_cell_keypad_pane_g1

0x926a,	// (0x0003aa75) vkb2_cell_keypad_pane_t1_ParamLimits

0x926a,	// (0x0003aa75) vkb2_cell_keypad_pane_t1

0x249c,	// (0x00033ca7) vkb2_cell_bottom_grid_pane_ParamLimits

0x249c,	// (0x00033ca7) vkb2_cell_bottom_grid_pane

0x24d5,	// (0x00033ce0) vkb2_cell_bottom_grid_pane_g1

0xe6ba,	// (0x0003fec5) aid_call2_pane_cp02

0xe6c2,	// (0x0003fecd) aid_call_pane_cp02

0xe6ca,	// (0x0003fed5) clock_digital_number_pane_cp10

0xe6d2,	// (0x0003fedd) clock_digital_number_pane_cp11

0xe6da,	// (0x0003fee5) clock_digital_number_pane_cp12

0xe6e2,	// (0x0003feed) clock_digital_number_pane_cp13

0xe6ea,	// (0x0003fef5) clock_digital_separator_pane_cp10

0x3e59,	// (0x00035664) popup_clock_digital_analogue_window_cp2_g1

0x3e59,	// (0x00035664) popup_clock_digital_analogue_window_cp2_g2

0xe6f2,	// (0x0003fefd) popup_clock_digital_analogue_window_cp2_g3

0x3e59,	// (0x00035664) popup_clock_digital_analogue_window_cp2_g4

0xe6f2,	// (0x0003fefd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd31,	// (0x0004153c) popup_clock_digital_analogue_window_cp2_g

0xe6fa,	// (0x0003ff05) popup_clock_digital_analogue_window_cp2_t1

0xe708,	// (0x0003ff13) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3c,	// (0x00041547) popup_clock_digital_analogue_window_cp2_t

0x7317,	// (0x00038b22) clock_digital_number_pane_cp10_g1

0x7317,	// (0x00038b22) clock_digital_number_pane_cp10_g2

0x0001,

0xfb18,	// (0x00041323) clock_digital_number_pane_cp10_g

0x7317,	// (0x00038b22) clock_digital_separator_pane_cp10_g1

0x7317,	// (0x00038b22) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb18,	// (0x00041323) clock_digital_separator_pane_cp10_g

0x8c91,	// (0x0003a49c) uniindi_top_pane_g3

0x8ca2,	// (0x0003a4ad) uniindi_top_pane_g4

0x22af,	// (0x00033aba) vkb2_row_keypad_pane_ParamLimits

0x22af,	// (0x00033aba) vkb2_row_keypad_pane

0x24f5,	// (0x00033d00) vkb2_cell_t_keypad_pane_ParamLimits

0x24f5,	// (0x00033d00) vkb2_cell_t_keypad_pane

0x2505,	// (0x00033d10) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2505,	// (0x00033d10) vkb2_cell_t_keypad_pane_cp08

0x2518,	// (0x00033d23) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2518,	// (0x00033d23) vkb2_cell_t_keypad_pane_cp09

0x252c,	// (0x00033d37) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x252c,	// (0x00033d37) vkb2_cell_t_keypad_pane_cp01

0x253d,	// (0x00033d48) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x253d,	// (0x00033d48) vkb2_cell_t_keypad_pane_cp02

0x254e,	// (0x00033d59) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x254e,	// (0x00033d59) vkb2_cell_t_keypad_pane_cp03

0x255f,	// (0x00033d6a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x255f,	// (0x00033d6a) vkb2_cell_t_keypad_pane_cp04

0x2570,	// (0x00033d7b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2570,	// (0x00033d7b) vkb2_cell_t_keypad_pane_cp05

0x2581,	// (0x00033d8c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2581,	// (0x00033d8c) vkb2_cell_t_keypad_pane_cp06

0x2592,	// (0x00033d9d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2592,	// (0x00033d9d) vkb2_cell_t_keypad_pane_cp07

0x25a3,	// (0x00033dae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25a3,	// (0x00033dae) vkb2_cell_t_keypad_pane_cp10

0x1ba7,	// (0x000333b2) vkb2_cell_t_keypad_pane_g1

0x9281,	// (0x0003aa8c) vkb2_cell_t_keypad_pane_t1

0xf290,	// (0x00040a9b) popup_grid_graphic2_window

0xea42,	// (0x0004024d) aid_size_cell_graphic2_ParamLimits

0xea42,	// (0x0004024d) aid_size_cell_graphic2

0xea80,	// (0x0004028b) bg_popup_window_pane_cp21_ParamLimits

0xea80,	// (0x0004028b) bg_popup_window_pane_cp21

0xea8e,	// (0x00040299) graphic2_pages_pane_ParamLimits

0xea8e,	// (0x00040299) graphic2_pages_pane

0xeae4,	// (0x000402ef) grid_graphic2_control_pane_ParamLimits

0xeae4,	// (0x000402ef) grid_graphic2_control_pane

0xeb2c,	// (0x00040337) grid_graphic2_pane_ParamLimits

0xeb2c,	// (0x00040337) grid_graphic2_pane

0xebb3,	// (0x000403be) cell_graphic2_pane

0xf290,	// (0x00040a9b) main_comp_mode_pane

0x84dc,	// (0x00039ce7) list_ai3_gene_pane_ParamLimits

0xe401,	// (0x0003fc0c) bg_popup_window_pane_cp19_ParamLimits

0x88be,	// (0x0003a0c9) bg_touch_area_indi_pane_ParamLimits

0x88be,	// (0x0003a0c9) bg_touch_area_indi_pane

0x88d4,	// (0x0003a0df) bg_touch_area_indi_pane_cp01_ParamLimits

0x88d4,	// (0x0003a0df) bg_touch_area_indi_pane_cp01

0x88ea,	// (0x0003a0f5) bg_touch_area_indi_pane_cp02_ParamLimits

0x88ea,	// (0x0003a0f5) bg_touch_area_indi_pane_cp02

0x8900,	// (0x0003a10b) bg_touch_area_indi_pane_cp03_ParamLimits

0x8900,	// (0x0003a10b) bg_touch_area_indi_pane_cp03

0x891a,	// (0x0003a125) popup_slider_window_g1_ParamLimits

0x8936,	// (0x0003a141) popup_slider_window_g2_ParamLimits

0x8952,	// (0x0003a15d) popup_slider_window_g3_ParamLimits

0xfcc6,	// (0x000414d1) popup_slider_window_g_ParamLimits

0x89b8,	// (0x0003a1c3) popup_slider_window_t1_ParamLimits

0x8a2c,	// (0x0003a237) small_volume_slider_vertical_pane_ParamLimits

0xebb3,	// (0x000403be) cell_graphic2_pane_ParamLimits

0xec0e,	// (0x00040419) bg_button_pane_cp10_ParamLimits

0xec0e,	// (0x00040419) bg_button_pane_cp10

0xec21,	// (0x0004042c) bg_button_pane_cp11_ParamLimits

0xec21,	// (0x0004042c) bg_button_pane_cp11

0xec34,	// (0x0004043f) graphic2_pages_pane_g1_ParamLimits

0xec34,	// (0x0004043f) graphic2_pages_pane_g1

0xec4f,	// (0x0004045a) graphic2_pages_pane_g2_ParamLimits

0xec4f,	// (0x0004045a) graphic2_pages_pane_g2

0x0001,

0xfd8a,	// (0x00041595) graphic2_pages_pane_g_ParamLimits

0xfd8a,	// (0x00041595) graphic2_pages_pane_g

0xec67,	// (0x00040472) graphic2_pages_pane_t1_ParamLimits

0xec67,	// (0x00040472) graphic2_pages_pane_t1

0xec7f,	// (0x0004048a) cell_graphic2_control_pane_ParamLimits

0xec7f,	// (0x0004048a) cell_graphic2_control_pane

0xecb1,	// (0x000404bc) cell_graphic2_pane_g1_ParamLimits

0xecb1,	// (0x000404bc) cell_graphic2_pane_g1

0xe1c0,	// (0x0003f9cb) cell_graphic2_pane_g2_ParamLimits

0xe1c0,	// (0x0003f9cb) cell_graphic2_pane_g2

0xe233,	// (0x0003fa3e) cell_graphic2_pane_g3_ParamLimits

0xe233,	// (0x0003fa3e) cell_graphic2_pane_g3

0xe1cd,	// (0x0003f9d8) cell_graphic2_pane_g4_ParamLimits

0xe1cd,	// (0x0003f9d8) cell_graphic2_pane_g4

0xecbe,	// (0x000404c9) cell_graphic2_pane_g5_ParamLimits

0xecbe,	// (0x000404c9) cell_graphic2_pane_g5

0x0004,

0xfd8f,	// (0x0004159a) cell_graphic2_pane_g_ParamLimits

0xfd8f,	// (0x0004159a) cell_graphic2_pane_g

0xecdb,	// (0x000404e6) cell_graphic2_pane_t1_ParamLimits

0xecdb,	// (0x000404e6) cell_graphic2_pane_t1

0x59db,	// (0x000371e6) grid_highlight_pane_cp11_ParamLimits

0x59db,	// (0x000371e6) grid_highlight_pane_cp11

0x2fdc,	// (0x000347e7) bg_button_pane_cp05

0xed25,	// (0x00040530) cell_graphic2_control_pane_g1

0x7317,	// (0x00038b22) bg_touch_area_indi_pane_g1

0x955a,	// (0x0003ad65) aid_cmod_rocker_key_size

0x9564,	// (0x0003ad6f) aid_cmode_itu_key_size

0x956e,	// (0x0003ad79) main_cmode_video_pane

0x9578,	// (0x0003ad83) main_comp_mode_itu_pane

0x9584,	// (0x0003ad8f) main_comp_mode_rocker_pane

0x9590,	// (0x0003ad9b) cell_cmode_rocker_pane_ParamLimits

0x9590,	// (0x0003ad9b) cell_cmode_rocker_pane

0x95a2,	// (0x0003adad) cell_cmode_itu_pane_ParamLimits

0x95a2,	// (0x0003adad) cell_cmode_itu_pane

0x35e0,	// (0x00034deb) bg_button_pane_cp06_ParamLimits

0x35e0,	// (0x00034deb) bg_button_pane_cp06

0x7595,	// (0x00038da0) cell_cmode_rocker_pane_g1_ParamLimits

0x7595,	// (0x00038da0) cell_cmode_rocker_pane_g1

0x8af1,	// (0x0003a2fc) cell_cmode_rocker_pane_g2_ParamLimits

0x8af1,	// (0x0003a2fc) cell_cmode_rocker_pane_g2

0x0001,

0xfd9f,	// (0x000415aa) cell_cmode_rocker_pane_g_ParamLimits

0xfd9f,	// (0x000415aa) cell_cmode_rocker_pane_g

0xe1e2,	// (0x0003f9ed) bg_button_pane_cp07

0x95b7,	// (0x0003adc2) cell_cmode_itu_pane_g1

0x95c0,	// (0x0003adcb) cell_cmode_itu_pane_t1

0x95ce,	// (0x0003add9) cell_cmode_itu_pane_t2

0x0001,

0xfda4,	// (0x000415af) cell_cmode_itu_pane_t

0x8d14,	// (0x0003a51f) aid_touch_ctrl_left

0x8d1c,	// (0x0003a527) aid_touch_ctrl_right

0xe1e2,	// (0x0003f9ed) compa_mode_pane

0xed49,	// (0x00040554) aid_cmod_rocker_key_size_cp

0xed53,	// (0x0004055e) aid_cmode_itu_key_size_cp

0x95f0,	// (0x0003adfb) compa_mode_pane_g1

0x95f8,	// (0x0003ae03) compa_mode_pane_g2

0x9600,	// (0x0003ae0b) compa_mode_pane_g3

0x0002,

0xfda9,	// (0x000415b4) compa_mode_pane_g

0xed5d,	// (0x00040568) main_comp_mode_itu_pane_cp

0xed65,	// (0x00040570) main_comp_mode_rocker_pane_cp

0xed6d,	// (0x00040578) cell_cmode_itu_pane_cp_ParamLimits

0xed6d,	// (0x00040578) cell_cmode_itu_pane_cp

0xed82,	// (0x0004058d) cell_cmode_rocker_pane_cp_ParamLimits

0xed82,	// (0x0004058d) cell_cmode_rocker_pane_cp

0x35e0,	// (0x00034deb) bg_button_pane_cp06_cp_ParamLimits

0x35e0,	// (0x00034deb) bg_button_pane_cp06_cp

0x7595,	// (0x00038da0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7595,	// (0x00038da0) cell_cmode_rocker_pane_g1_cp

0x7317,	// (0x00038b22) cell_cmode_rocker_pane_g2_cp

0xe1e2,	// (0x0003f9ed) bg_button_pane_cp07_cp

0xed94,	// (0x0004059f) cell_cmode_itu_pane_g1_cp

0xed9d,	// (0x000405a8) cell_cmode_itu_pane_t1_cp

0xed9d,	// (0x000405a8) cell_cmode_itu_pane_t2_cp

0xda5e,	// (0x0003f269) settings_code_pane_cp2

0x2d53,	// (0x0003455e) bg_popup_window_pane_cp3_ParamLimits

0x31dc,	// (0x000349e7) heading_pane_cp3_ParamLimits

0x31eb,	// (0x000349f6) listscroll_popup_graphic_pane_ParamLimits

0x1950,	// (0x0003315b) fep_hwr_aid_pane_ParamLimits

0x1f76,	// (0x00033781) aid_touch_sctrl_top_ParamLimits

0x1f91,	// (0x0003379c) sctrl_sk_top_pane_g1_ParamLimits

0x1ba7,	// (0x000333b2) sctrl_sk_top_pane_g2_ParamLimits

0xfcdf,	// (0x000414ea) sctrl_sk_top_pane_g_ParamLimits

0x1f9e,	// (0x000337a9) sctrl_sk_top_pane_t1_ParamLimits

0x1f76,	// (0x00033781) aid_touch_sctrl_bottom_ParamLimits

0x1f9e,	// (0x000337a9) sctrl_sk_bottom_pane_t1_ParamLimits

0x8c5d,	// (0x0003a468) aid_area_touch_clock

0xcd20,	// (0x0003e52b) aid_vkb2_area_top_pane_cell_ParamLimits

0xcd20,	// (0x0003e52b) aid_vkb2_area_top_pane_cell

0xcdcf,	// (0x0003e5da) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcdcf,	// (0x0003e5da) aid_vkb2_area_bottom_pane_cell

0x91cc,	// (0x0003a9d7) popup_char_count_window

0x964d,	// (0x0003ae58) popup_char_count_window_g1

0x9656,	// (0x0003ae61) popup_char_count_window_g2

0x965f,	// (0x0003ae6a) popup_char_count_window_g3

0x0002,

0xfdb0,	// (0x000415bb) popup_char_count_window_g

0x9668,	// (0x0003ae73) popup_char_count_window_t1

0x2045,	// (0x00033850) popup_fep_char_preview_window_ParamLimits

0x2045,	// (0x00033850) popup_fep_char_preview_window

0xcd40,	// (0x0003e54b) vkb2_top_candi_pane_ParamLimits

0xcd40,	// (0x0003e54b) vkb2_top_candi_pane

0xedab,	// (0x000405b6) cell_vkb2_top_candi_pane_ParamLimits

0xedab,	// (0x000405b6) cell_vkb2_top_candi_pane

0x25b8,	// (0x00033dc3) bg_popup_fep_char_preview_window_ParamLimits

0x25b8,	// (0x00033dc3) bg_popup_fep_char_preview_window

0x25c6,	// (0x00033dd1) popup_fep_char_preview_window_t1_ParamLimits

0x25c6,	// (0x00033dd1) popup_fep_char_preview_window_t1

0x96c0,	// (0x0003aecb) bg_popup_fep_char_preview_window_g1

0x96c8,	// (0x0003aed3) bg_popup_fep_char_preview_window_g2

0x96d0,	// (0x0003aedb) bg_popup_fep_char_preview_window_g3

0x96d8,	// (0x0003aee3) bg_popup_fep_char_preview_window_g4

0x96e0,	// (0x0003aeeb) bg_popup_fep_char_preview_window_g5

0x96e8,	// (0x0003aef3) bg_popup_fep_char_preview_window_g6

0x96f0,	// (0x0003aefb) bg_popup_fep_char_preview_window_g7

0x96f8,	// (0x0003af03) bg_popup_fep_char_preview_window_g8

0x9700,	// (0x0003af0b) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb7,	// (0x000415c2) bg_popup_fep_char_preview_window_g

0x1ba7,	// (0x000333b2) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1ba7,	// (0x000333b2) cell_vkb2_top_candi_pane_g1

0x1bb5,	// (0x000333c0) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1bb5,	// (0x000333c0) cell_vkb2_top_candi_pane_g2

0x8a63,	// (0x0003a26e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8a63,	// (0x0003a26e) cell_vkb2_top_candi_pane_g3

0x2608,	// (0x00033e13) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2608,	// (0x00033e13) cell_vkb2_top_candi_pane_g4

0x7a60,	// (0x0003926b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7a60,	// (0x0003926b) cell_vkb2_top_candi_pane_g5

0x2629,	// (0x00033e34) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2629,	// (0x00033e34) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcc,	// (0x000415d7) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcc,	// (0x000415d7) cell_vkb2_top_candi_pane_g

0x2637,	// (0x00033e42) cell_vkb2_top_candi_pane_t1

0x1335,	// (0x00032b40) aid_size_touch_slider_mark_ParamLimits

0x1335,	// (0x00032b40) aid_size_touch_slider_mark

0xeaca,	// (0x000402d5) grid_graphic2_catg_pane_ParamLimits

0xeaca,	// (0x000402d5) grid_graphic2_catg_pane

0xeb86,	// (0x00040391) popup_grid_graphic2_window_t1_ParamLimits

0xeb86,	// (0x00040391) popup_grid_graphic2_window_t1

0xeb9c,	// (0x000403a7) popup_grid_graphic2_window_t2_ParamLimits

0xeb9c,	// (0x000403a7) popup_grid_graphic2_window_t2

0x0001,

0xfd85,	// (0x00041590) popup_grid_graphic2_window_t_ParamLimits

0xfd85,	// (0x00041590) popup_grid_graphic2_window_t

0x2fdc,	// (0x000347e7) bg_button_pane_cp05_ParamLimits

0xed25,	// (0x00040530) cell_graphic2_control_pane_g1_ParamLimits

0xee0b,	// (0x00040616) cell_graphic2_catg_pane_ParamLimits

0xee0b,	// (0x00040616) cell_graphic2_catg_pane

0xe1e2,	// (0x0003f9ed) bg_button_pane_cp12

0xee1d,	// (0x00040628) cell_graphic2_catg_pane_g1

0x8c29,	// (0x0003a434) cell_tb_ext_pane_t1_ParamLimits

0x23ee,	// (0x00033bf9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x23ee,	// (0x00033bf9) vkb2_top_cell_right_narrow_pane

0x2406,	// (0x00033c11) vkb2_top_cell_right_wide_pane_ParamLimits

0x2406,	// (0x00033c11) vkb2_top_cell_right_wide_pane

0x1942,	// (0x0003314d) bg_vkb2_func_pane_ParamLimits

0x1942,	// (0x0003314d) bg_vkb2_func_pane

0x2477,	// (0x00033c82) vkb2_top_cell_left_pane_g1_ParamLimits

0x1942,	// (0x0003314d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1942,	// (0x0003314d) bg_vkb2_fuc_pane_cp03

0x24d5,	// (0x00033ce0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ce0,	// (0x000364eb) bg_vkb2_func_pane_g1

0x4ce8,	// (0x000364f3) bg_vkb2_func_pane_g2

0x4cf8,	// (0x00036503) bg_vkb2_func_pane_g3

0x4cf0,	// (0x000364fb) bg_vkb2_func_pane_g4

0x4d00,	// (0x0003650b) bg_vkb2_func_pane_g5

0x4d08,	// (0x00036513) bg_vkb2_func_pane_g6

0x4d10,	// (0x0003651b) bg_vkb2_func_pane_g7

0x4d18,	// (0x00036523) bg_vkb2_func_pane_g8

0x4cd8,	// (0x000364e3) bg_vkb2_func_pane_g9

0x0008,

0xfdd9,	// (0x000415e4) bg_vkb2_func_pane_g

0x1942,	// (0x0003314d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1942,	// (0x0003314d) bg_vkb2_fuc_pane_cp01

0x2477,	// (0x00033c82) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2477,	// (0x00033c82) vkb2_top_cell_right_wide_pane_g1

0x1942,	// (0x0003314d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1942,	// (0x0003314d) bg_vkb2_fuc_pane_cp02

0x2656,	// (0x00033e61) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2656,	// (0x00033e61) vkb2_top_cell_right_narrow_pane_g1

0xe343,	// (0x0003fb4e) aid_touch_area_decrease_ParamLimits

0xe343,	// (0x0003fb4e) aid_touch_area_decrease

0xe37d,	// (0x0003fb88) aid_touch_area_increase_ParamLimits

0xe37d,	// (0x0003fb88) aid_touch_area_increase

0xe3a5,	// (0x0003fbb0) aid_touch_area_mute_ParamLimits

0xe3a5,	// (0x0003fbb0) aid_touch_area_mute

0xe3cd,	// (0x0003fbd8) aid_touch_area_slider_ParamLimits

0xe3cd,	// (0x0003fbd8) aid_touch_area_slider

0xe40d,	// (0x0003fc18) popup_slider_window_g4_ParamLimits

0xe40d,	// (0x0003fc18) popup_slider_window_g4

0xe435,	// (0x0003fc40) popup_slider_window_g5_ParamLimits

0xe435,	// (0x0003fc40) popup_slider_window_g5

0xe469,	// (0x0003fc74) popup_slider_window_g6_ParamLimits

0xe469,	// (0x0003fc74) popup_slider_window_g6

0x89e6,	// (0x0003a1f1) popup_slider_window_t2_ParamLimits

0x89e6,	// (0x0003a1f1) popup_slider_window_t2

0x0001,

0xfcd3,	// (0x000414de) popup_slider_window_t_ParamLimits

0xfcd3,	// (0x000414de) popup_slider_window_t

0xe485,	// (0x0003fc90) slider_pane_ParamLimits

0xe485,	// (0x0003fc90) slider_pane

0x9723,	// (0x0003af2e) slider_pane_g1_ParamLimits

0x9723,	// (0x0003af2e) slider_pane_g1

0x9737,	// (0x0003af42) slider_pane_g2_ParamLimits

0x9737,	// (0x0003af42) slider_pane_g2

0x974d,	// (0x0003af58) slider_pane_g3_ParamLimits

0x974d,	// (0x0003af58) slider_pane_g3

0x0003,

0xfdec,	// (0x000415f7) slider_pane_g_ParamLimits

0xfdec,	// (0x000415f7) slider_pane_g

0xc701,	// (0x0003df0c) popup_tb_float_extension_window_ParamLimits

0xc701,	// (0x0003df0c) popup_tb_float_extension_window

0x9779,	// (0x0003af84) aid_size_cell_tb_float_ext

0xe1e2,	// (0x0003f9ed) bg_popup_sub_window_cp28

0x9785,	// (0x0003af90) grid_tb_float_ext_pane

0x978f,	// (0x0003af9a) cell_tb_float_ext_pane_ParamLimits

0x978f,	// (0x0003af9a) cell_tb_float_ext_pane

0x97a9,	// (0x0003afb4) cell_tb_float_ext_pane_g1

0x97b2,	// (0x0003afbd) grid_highlight_pane_cp12

0xc8dd,	// (0x0003e0e8) cell_last_hwr_side_pane_ParamLimits

0xc8dd,	// (0x0003e0e8) cell_last_hwr_side_pane

0x7317,	// (0x00038b22) cell_last_hwr_side_pane_g1

0x97bb,	// (0x0003afc6) cell_last_hwr_side_pane_g2

0x0001,

0xfdf5,	// (0x00041600) cell_last_hwr_side_pane_g

0xceac,	// (0x0003e6b7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xceac,	// (0x0003e6b7) vkb2_area_bottom_space_btn_pane

0x1ba7,	// (0x000333b2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9281,	// (0x0003aa8c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2637,	// (0x00033e42) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2676,	// (0x00033e81) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2676,	// (0x00033e81) vkb2_area_bottom_space_btn_pane_g1

0x26b0,	// (0x00033ebb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26b0,	// (0x00033ebb) vkb2_area_bottom_space_btn_pane_g2

0x26e6,	// (0x00033ef1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x26e6,	// (0x00033ef1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfa,	// (0x00041605) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfa,	// (0x00041605) vkb2_area_bottom_space_btn_pane_g

0x1a05,	// (0x00033210) cel_fep_hwr_func_pane_ParamLimits

0x1a05,	// (0x00033210) cel_fep_hwr_func_pane

0xc8b2,	// (0x0003e0bd) cell_hwr_side_button_pane_ParamLimits

0xc8b2,	// (0x0003e0bd) cell_hwr_side_button_pane

0x8c5d,	// (0x0003a468) aid_area_touch_clock_ParamLimits

0x2fdc,	// (0x000347e7) bg_uniindi_top_pane_ParamLimits

0x8c6f,	// (0x0003a47a) uniindi_top_pane_g1_ParamLimits

0x8c85,	// (0x0003a490) uniindi_top_pane_g2_ParamLimits

0x8c91,	// (0x0003a49c) uniindi_top_pane_g3_ParamLimits

0x8ca2,	// (0x0003a4ad) uniindi_top_pane_g4_ParamLimits

0xfd0b,	// (0x00041516) uniindi_top_pane_g_ParamLimits

0x8caf,	// (0x0003a4ba) uniindi_top_pane_t1_ParamLimits

0x2fdc,	// (0x000347e7) bg_vkb2_func_pane_cp01_ParamLimits

0x2fdc,	// (0x000347e7) bg_vkb2_func_pane_cp01

0x97c4,	// (0x0003afcf) cel_fep_hwr_func_pane_g1_ParamLimits

0x97c4,	// (0x0003afcf) cel_fep_hwr_func_pane_g1

0x2fdc,	// (0x000347e7) bg_vkb2_func_pane_cp02_ParamLimits

0x2fdc,	// (0x000347e7) bg_vkb2_func_pane_cp02

0x97c4,	// (0x0003afcf) cell_hwr_side_button_pane_g1_ParamLimits

0x97c4,	// (0x0003afcf) cell_hwr_side_button_pane_g1

0x4b59,	// (0x00036364) status_pane_g4_ParamLimits

0x4b59,	// (0x00036364) status_pane_g4

0x4b73,	// (0x0003637e) status_pane_t1

0x7063,	// (0x0003886e) form2_midp_gauge_slider_cont_pane

0x706b,	// (0x00038876) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd38,	// (0x0003f543) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd4a,	// (0x0003f555) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacb,	// (0x000412d6) form2_midp_gauge_slider_pane_t_ParamLimits

0x70a1,	// (0x000388ac) form2_midp_slider_pane_ParamLimits

0x200d,	// (0x00033818) aid_size_cell_func_vkb2_ParamLimits

0x200d,	// (0x00033818) aid_size_cell_func_vkb2

0x9765,	// (0x0003af70) slider_pane_g4_ParamLimits

0x9765,	// (0x0003af70) slider_pane_g4

0xcf15,	// (0x0003e720) form2_midp_gauge_slider_pane_t2_cp01

0xcf23,	// (0x0003e72e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcf23,	// (0x0003e72e) form2_midp_gauge_slider_pane_t3_cp01

0x275b,	// (0x00033f66) form2_midp_slider_pane_cp01

0xe1e2,	// (0x0003f9ed) navi_smil_pane

0x97fd,	// (0x0003b008) navi_smil_pane_g1

0x9805,	// (0x0003b010) navi_smil_pane_t1

0x97d2,	// (0x0003afdd) form2_midp_slider_pane_g1

0x97db,	// (0x0003afe6) form2_midp_slider_pane_g2

0x97e3,	// (0x0003afee) form2_midp_slider_pane_g3

0x97d2,	// (0x0003afdd) form2_midp_slider_pane_g4

0xee26,	// (0x00040631) form2_midp_slider_pane_g5

0x0004,

0xfe03,	// (0x0004160e) form2_midp_slider_pane_g

0x2720,	// (0x00033f2b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2720,	// (0x00033f2b) vkb2_area_bottom_space_btn_pane_g4

0xd444,	// (0x0003ec4f) lc0_navi_pane_ParamLimits

0xd444,	// (0x0003ec4f) lc0_navi_pane

0xd4ae,	// (0x0003ecb9) lc0_stat_indi_pane_ParamLimits

0xd4ae,	// (0x0003ecb9) lc0_stat_indi_pane

0xd4c3,	// (0x0003ecce) ls0_title_pane_ParamLimits

0xd4c3,	// (0x0003ecce) ls0_title_pane

0x35e0,	// (0x00034deb) bg_popup_sub_pane_cp14_ParamLimits

0x8c44,	// (0x0003a44f) list_uniindi_pane_ParamLimits

0x8c50,	// (0x0003a45b) uniindi_top_pane_ParamLimits

0x8cec,	// (0x0003a4f7) list_single_uniindi_pane_g1_ParamLimits

0x8cff,	// (0x0003a50a) list_single_uniindi_pane_t1_ParamLimits

0xcf40,	// (0x0003e74b) lc0_stat_clock_pane_ParamLimits

0xcf40,	// (0x0003e74b) lc0_stat_clock_pane

0xee31,	// (0x0004063c) lc0_stat_indi_pane_g1_ParamLimits

0xee31,	// (0x0004063c) lc0_stat_indi_pane_g1

0xee3e,	// (0x00040649) lc0_stat_indi_pane_g2_ParamLimits

0xee3e,	// (0x00040649) lc0_stat_indi_pane_g2

0x0001,

0xfe0e,	// (0x00041619) lc0_stat_indi_pane_g_ParamLimits

0xfe0e,	// (0x00041619) lc0_stat_indi_pane_g

0xcf4d,	// (0x0003e758) lc0_uni_indicator_pane_ParamLimits

0xcf4d,	// (0x0003e758) lc0_uni_indicator_pane

0xee4b,	// (0x00040656) ls0_title_pane_g1_ParamLimits

0xee4b,	// (0x00040656) ls0_title_pane_g1

0xee5f,	// (0x0004066a) ls0_title_pane_t1_ParamLimits

0xee5f,	// (0x0004066a) ls0_title_pane_t1

0xcf5a,	// (0x0003e765) lc0_uni_indicator_pane_g1_ParamLimits

0xcf5a,	// (0x0003e765) lc0_uni_indicator_pane_g1

0x9877,	// (0x0003b082) lc0_stat_clock_pane_t1

0xf290,	// (0x00040a9b) main_ai5_pane

0x988d,	// (0x0003b098) ai5_sk_pane_ParamLimits

0x988d,	// (0x0003b098) ai5_sk_pane

0xee97,	// (0x000406a2) cell_ai5_widget_pane_ParamLimits

0xee97,	// (0x000406a2) cell_ai5_widget_pane

0x9963,	// (0x0003b16e) aid_size_cell_widget_grid

0x9971,	// (0x0003b17c) bg_ai5_widget_pane_ParamLimits

0x9971,	// (0x0003b17c) bg_ai5_widget_pane

0x99ed,	// (0x0003b1f8) cell_ai5_widget_pane_g2

0x9a01,	// (0x0003b20c) cell_ai5_widget_pane_g3

0x9a1b,	// (0x0003b226) cell_ai5_widget_pane_g4

0x9a2b,	// (0x0003b236) cell_ai5_widget_pane_g5

0x9a3b,	// (0x0003b246) cell_ai5_widget_pane_g6

0x9a47,	// (0x0003b252) cell_ai5_widget_pane_g7

0x9ab3,	// (0x0003b2be) cell_ai5_widget_pane_t1_ParamLimits

0x9ab3,	// (0x0003b2be) cell_ai5_widget_pane_t1

0x9ad0,	// (0x0003b2db) cell_ai5_widget_pane_t2_ParamLimits

0x9ad0,	// (0x0003b2db) cell_ai5_widget_pane_t2

0x9ae8,	// (0x0003b2f3) cell_ai5_widget_pane_t3_ParamLimits

0x9ae8,	// (0x0003b2f3) cell_ai5_widget_pane_t3

0x9b00,	// (0x0003b30b) cell_ai5_widget_pane_t4_ParamLimits

0x9b00,	// (0x0003b30b) cell_ai5_widget_pane_t4

0x9b26,	// (0x0003b331) cell_ai5_widget_pane_t5_ParamLimits

0x9b26,	// (0x0003b331) cell_ai5_widget_pane_t5

0x9b45,	// (0x0003b350) cell_ai5_widget_pane_t6_ParamLimits

0x9b45,	// (0x0003b350) cell_ai5_widget_pane_t6

0x9b57,	// (0x0003b362) cell_ai5_widget_pane_t7_ParamLimits

0x9b57,	// (0x0003b362) cell_ai5_widget_pane_t7

0x9b76,	// (0x0003b381) cell_ai5_widget_pane_t8_ParamLimits

0x9b76,	// (0x0003b381) cell_ai5_widget_pane_t8

0x000b,

0xfe2e,	// (0x00041639) cell_ai5_widget_pane_t_ParamLimits

0xfe2e,	// (0x00041639) cell_ai5_widget_pane_t

0x9bfa,	// (0x0003b405) grid_ai5_widget_pane

0x35e0,	// (0x00034deb) highlight_cell_ai5_widget_pane_ParamLimits

0x35e0,	// (0x00034deb) highlight_cell_ai5_widget_pane

0xef03,	// (0x0004070e) ai5_sk_left_pane

0xef0d,	// (0x00040718) ai5_sk_middle_pane

0xef17,	// (0x00040722) ai5_sk_right_pane

0x9c2c,	// (0x0003b437) bg_ai5_widget_pane_g1_ParamLimits

0x9c2c,	// (0x0003b437) bg_ai5_widget_pane_g1

0x9c38,	// (0x0003b443) bg_ai5_widget_pane_g2_ParamLimits

0x9c38,	// (0x0003b443) bg_ai5_widget_pane_g2

0x9c44,	// (0x0003b44f) bg_ai5_widget_pane_g3_ParamLimits

0x9c44,	// (0x0003b44f) bg_ai5_widget_pane_g3

0x9c50,	// (0x0003b45b) bg_ai5_widget_pane_g4_ParamLimits

0x9c50,	// (0x0003b45b) bg_ai5_widget_pane_g4

0x9c5c,	// (0x0003b467) bg_ai5_widget_pane_g5_ParamLimits

0x9c5c,	// (0x0003b467) bg_ai5_widget_pane_g5

0x9c68,	// (0x0003b473) bg_ai5_widget_pane_g6_ParamLimits

0x9c68,	// (0x0003b473) bg_ai5_widget_pane_g6

0x9c74,	// (0x0003b47f) bg_ai5_widget_pane_g7_ParamLimits

0x9c74,	// (0x0003b47f) bg_ai5_widget_pane_g7

0x9c80,	// (0x0003b48b) bg_ai5_widget_pane_g8_ParamLimits

0x9c80,	// (0x0003b48b) bg_ai5_widget_pane_g8

0x9c8c,	// (0x0003b497) bg_ai5_widget_pane_g9_ParamLimits

0x9c8c,	// (0x0003b497) bg_ai5_widget_pane_g9

0x0008,

0xfe47,	// (0x00041652) bg_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x00041652) bg_ai5_widget_pane_g

0x9cbe,	// (0x0003b4c9) cell_shortcut_ai5_widget_pane_ParamLimits

0x9cbe,	// (0x0003b4c9) cell_shortcut_ai5_widget_pane

0x448a,	// (0x00035c95) bg_cell_shortcut_ai5_widget_pane

0x9ccf,	// (0x0003b4da) cell_grid_ai5_widget_pane_g1

0x448a,	// (0x00035c95) highlight_cell_shortcut_ai5_widget_pane

0x4ce0,	// (0x000364eb) ai5_sk_left_pane_g1

0x9cd8,	// (0x0003b4e3) ai5_sk_left_pane_g2

0x9ce0,	// (0x0003b4eb) ai5_sk_left_pane_g3

0x9ce8,	// (0x0003b4f3) ai5_sk_left_pane_g4

0x0003,

0xfe5a,	// (0x00041665) ai5_sk_left_pane_g

0x9cf0,	// (0x0003b4fb) ai5_sk_left_pane_t1

0x4ce8,	// (0x000364f3) ai5_sk_right_pane_g1

0x9cfe,	// (0x0003b509) ai5_sk_right_pane_g2

0x9d06,	// (0x0003b511) ai5_sk_right_pane_g3

0x9d0e,	// (0x0003b519) ai5_sk_right_pane_g4

0x0003,

0xfe63,	// (0x0004166e) ai5_sk_right_pane_g

0x9d16,	// (0x0003b521) ai5_sk_right_pane_t1

0x4ce8,	// (0x000364f3) ai5_sk_middle_pane_g1

0x4ce0,	// (0x000364eb) ai5_sk_middle_pane_g2

0x4d00,	// (0x0003650b) ai5_sk_middle_pane_g3

0x9d06,	// (0x0003b511) ai5_sk_middle_pane_g4

0x9ce0,	// (0x0003b4eb) ai5_sk_middle_pane_g5

0x9d24,	// (0x0003b52f) ai5_sk_middle_pane_g6

0xef21,	// (0x0004072c) ai5_sk_middle_pane_g7

0x0006,

0xfe6c,	// (0x00041677) ai5_sk_middle_pane_g

0xd330,	// (0x0003eb3b) aid_touch_area_size_lc0_ParamLimits

0xd330,	// (0x0003eb3b) aid_touch_area_size_lc0

0x1bd6,	// (0x000333e1) cell_hwr_candidate_pane_t1_ParamLimits

0x482a,	// (0x00036035) aid_touch_navi_pane

0xd5bc,	// (0x0003edc7) status_dt_navi_pane_ParamLimits

0xd5bc,	// (0x0003edc7) status_dt_navi_pane

0xd5d4,	// (0x0003eddf) status_dt_sta_pane_ParamLimits

0xd5d4,	// (0x0003eddf) status_dt_sta_pane

0xef29,	// (0x00040734) dt_sta_controll_pane

0xef36,	// (0x00040741) dt_sta_indi_pane

0xef43,	// (0x0004074e) dt_sta_title_pane

0x2fdc,	// (0x000347e7) bg_dt_sta_indi_pane_ParamLimits

0x2fdc,	// (0x000347e7) bg_dt_sta_indi_pane

0xef55,	// (0x00040760) dt_sta_battery_pane

0xef5d,	// (0x00040768) dt_sta_indi_pane_g1

0x9d76,	// (0x0003b581) dt_sta_indi_pane_g2

0x9d7f,	// (0x0003b58a) dt_sta_indi_pane_g3

0x0002,

0xfe7b,	// (0x00041686) dt_sta_indi_pane_g

0x9d88,	// (0x0003b593) dt_sta_signal_pane

0x35e0,	// (0x00034deb) bg_dt_sta_title_pane_ParamLimits

0x35e0,	// (0x00034deb) bg_dt_sta_title_pane

0x9d91,	// (0x0003b59c) dt_sta_title_pane_g1

0x9d99,	// (0x0003b5a4) dt_sta_title_pane_t1_ParamLimits

0x9d99,	// (0x0003b5a4) dt_sta_title_pane_t1

0xe1e2,	// (0x0003f9ed) bg_dt_sta_control_pane

0xef66,	// (0x00040771) dt_sta_controll_pane_g1

0x9db7,	// (0x0003b5c2) bg_dt_sta_title_pane_g1

0x9dc0,	// (0x0003b5cb) bg_dt_sta_title_pane_g2

0x9dc9,	// (0x0003b5d4) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0004168d) bg_dt_sta_title_pane_g

0x7317,	// (0x00038b22) bg_dt_sta_indi_pane_g1

0x9dd2,	// (0x0003b5dd) dt_sta_signal_pane_g1

0x9dda,	// (0x0003b5e5) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x00041694) dt_sta_signal_pane_g

0x9de2,	// (0x0003b5ed) dt_sta_battery_pane_g1

0x9deb,	// (0x0003b5f6) dt_sta_battery_pane_t1

0x7317,	// (0x00038b22) bg_dt_sta_control_pane_g1

0x3f84,	// (0x0003578f) fep_china_uni_eep_pane

0x3f8c,	// (0x00035797) fep_china_uni_entry_pane_ParamLimits

0x3f9c,	// (0x000357a7) popup_fep_china_uni_window_g1_ParamLimits

0x3fac,	// (0x000357b7) popup_fep_china_uni_window_g2_ParamLimits

0x3fac,	// (0x000357b7) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x00040f01) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x00040f01) popup_fep_china_uni_window_g

0x9dfa,	// (0x0003b605) fep_china_uni_eep_pane_g1

0x9e02,	// (0x0003b60d) fep_china_uni_eep_pane_t1

0x97f4,	// (0x0003afff) aid_touch_area_size_smil_player

0x4980,	// (0x0003618b) lc0_clock_pane

0x4b67,	// (0x00036372) status_pane_g5_ParamLimits

0x4b67,	// (0x00036372) status_pane_g5

0xc283,	// (0x0003da8e) popup_keymap_window

0x4b25,	// (0x00036330) status_icon_pane

0x9a01,	// (0x0003b20c) cell_ai5_widget_pane_g3_ParamLimits

0x9a1b,	// (0x0003b226) cell_ai5_widget_pane_g4_ParamLimits

0x9a2b,	// (0x0003b236) cell_ai5_widget_pane_g5_ParamLimits

0x9a53,	// (0x0003b25e) cell_ai5_widget_pane_g8_ParamLimits

0x9a53,	// (0x0003b25e) cell_ai5_widget_pane_g8

0x9a67,	// (0x0003b272) cell_ai5_widget_pane_g9_ParamLimits

0x9a67,	// (0x0003b272) cell_ai5_widget_pane_g9

0x9a7b,	// (0x0003b286) cell_ai5_widget_pane_g10_ParamLimits

0x9a7b,	// (0x0003b286) cell_ai5_widget_pane_g10

0x9e11,	// (0x0003b61c) status_icon_pane_g1

0xe1e2,	// (0x0003f9ed) bg_popup_sub_pane_cp13

0x9e19,	// (0x0003b624) popup_keymap_window_t1

0xd2c6,	// (0x0003ead1) control_pane_g6_ParamLimits

0xd2c6,	// (0x0003ead1) control_pane_g6

0xd2d3,	// (0x0003eade) control_pane_g7_ParamLimits

0xd2d3,	// (0x0003eade) control_pane_g7

0xd2e0,	// (0x0003eaeb) control_pane_g8_ParamLimits

0xd2e0,	// (0x0003eaeb) control_pane_g8

0xef29,	// (0x00040734) dt_sta_controll_pane_ParamLimits

0xef36,	// (0x00040741) dt_sta_indi_pane_ParamLimits

0xef43,	// (0x0004074e) dt_sta_title_pane_ParamLimits

0x3518,	// (0x00034d23) aid_size_touch_scroll_bar_cale

0xf369,	// (0x00040b74) popup_discreet_window_ParamLimits

0xf369,	// (0x00040b74) popup_discreet_window

0xb331,	// (0x0003cb3c) popup_sk_window

0x5367,	// (0x00036b72) bg_popup_sub_pane_cp28_ParamLimits

0x5367,	// (0x00036b72) bg_popup_sub_pane_cp28

0x9e27,	// (0x0003b632) popup_discreet_window_g1_ParamLimits

0x9e27,	// (0x0003b632) popup_discreet_window_g1

0x9e47,	// (0x0003b652) popup_discreet_window_t1_ParamLimits

0x9e47,	// (0x0003b652) popup_discreet_window_t1

0x9e65,	// (0x0003b670) popup_discreet_window_t2_ParamLimits

0x9e65,	// (0x0003b670) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x00041699) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x00041699) popup_discreet_window_t

0x2792,	// (0x00033f9d) popup_sk_window_g1

0x279c,	// (0x00033fa7) popup_sk_window_g2

0x0001,

0xfe95,	// (0x000416a0) popup_sk_window_g

0x27a4,	// (0x00033faf) popup_sk_window_t1

0x27b2,	// (0x00033fbd) popup_sk_window_t1_copy1

0x99ed,	// (0x0003b1f8) cell_ai5_widget_pane_g2_ParamLimits

0x9b88,	// (0x0003b393) cell_ai5_widget_pane_t9_ParamLimits

0x9b88,	// (0x0003b393) cell_ai5_widget_pane_t9

0xe1e2,	// (0x0003f9ed) main_fep_fshwr2_pane

0xcf81,	// (0x0003e78c) aid_fshwr2_btn_pane

0xcf91,	// (0x0003e79c) aid_fshwr2_syb_pane

0xcfa5,	// (0x0003e7b0) aid_fshwr2_txt_pane

0xcfb5,	// (0x0003e7c0) fshwr2_func_candi_pane

0xcfd5,	// (0x0003e7e0) fshwr2_hwr_syb_pane

0xcff7,	// (0x0003e802) fshwr2_icf_pane

0xf290,	// (0x00040a9b) fshwr2_icf_bg_pane

0xd027,	// (0x0003e832) fshwr2_icf_pane_t1_ParamLimits

0xd027,	// (0x0003e832) fshwr2_icf_pane_t1

0x3e59,	// (0x00035664) fshwr2_func_candi_pane_g1

0xef6f,	// (0x0004077a) fshwr2_func_candi_row_pane_ParamLimits

0xef6f,	// (0x0004077a) fshwr2_func_candi_row_pane

0xd040,	// (0x0003e84b) cell_fshwr2_syb_pane_ParamLimits

0xd040,	// (0x0003e84b) cell_fshwr2_syb_pane

0x289b,	// (0x000340a6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x289b,	// (0x000340a6) fshwr2_hwr_syb_pane_g1

0xf290,	// (0x00040a9b) bg_popup_call_pane_cp01

0xd066,	// (0x0003e871) fshwr2_func_candi_cell_pane_ParamLimits

0xd066,	// (0x0003e871) fshwr2_func_candi_cell_pane

0x5148,	// (0x00036953) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5148,	// (0x00036953) fshwr2_func_candi_cell_bg_pane

0xd0b1,	// (0x0003e8bc) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd0b1,	// (0x0003e8bc) fshwr2_func_candi_cell_pane_g1

0xd0e8,	// (0x0003e8f3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd0e8,	// (0x0003e8f3) fshwr2_func_candi_cell_pane_t1

0xf290,	// (0x00040a9b) bg_button_pane_cp08

0x47ae,	// (0x00035fb9) cell_fshwr2_syb_bg_pane

0xd103,	// (0x0003e90e) cell_fshwr2_syb_bg_pane_g1

0xd116,	// (0x0003e921) cell_fshwr2_syb_bg_pane_t1

0x35e0,	// (0x00034deb) main_tmo_pane

0xd890,	// (0x0003f09b) uni_indicator_pane_g1_ParamLimits

0xd8a6,	// (0x0003f0b1) uni_indicator_pane_g2_ParamLimits

0xd8bc,	// (0x0003f0c7) uni_indicator_pane_g3_ParamLimits

0x5eb5,	// (0x000376c0) uni_indicator_pane_g4_ParamLimits

0x5eb5,	// (0x000376c0) uni_indicator_pane_g4

0x5ec9,	// (0x000376d4) uni_indicator_pane_g5_ParamLimits

0x5ec9,	// (0x000376d4) uni_indicator_pane_g5

0x5ec9,	// (0x000376d4) uni_indicator_pane_g6_ParamLimits

0x5ec9,	// (0x000376d4) uni_indicator_pane_g6

0xf8f5,	// (0x00041100) uni_indicator_pane_g_ParamLimits

0xe31f,	// (0x0003fb2a) popup_tmo_note_window_ParamLimits

0xe31f,	// (0x0003fb2a) popup_tmo_note_window

0x1fef,	// (0x000337fa) fshwr2_bg_pane

0xd0d9,	// (0x0003e8e4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd0d9,	// (0x0003e8e4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x000416a5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x000416a5) fshwr2_func_candi_cell_pane_g

0x1b8f,	// (0x0003339a) bg_popup_window_pane_cp01

0x295c,	// (0x00034167) bg_popup_window_pane_g1_cp01

0x9ede,	// (0x0003b6e9) bg_popup_window_pane_cp22_ParamLimits

0x9ede,	// (0x0003b6e9) bg_popup_window_pane_cp22

0x9eec,	// (0x0003b6f7) listscroll_tmo_link_pane_ParamLimits

0x9eec,	// (0x0003b6f7) listscroll_tmo_link_pane

0x9f2c,	// (0x0003b737) popup_tmo_note_window_g1_ParamLimits

0x9f2c,	// (0x0003b737) popup_tmo_note_window_g1

0x9f39,	// (0x0003b744) tmo_note_info_pane_ParamLimits

0x9f39,	// (0x0003b744) tmo_note_info_pane

0xef92,	// (0x0004079d) list_tmo_note_info_pane_g1_ParamLimits

0xef92,	// (0x0004079d) list_tmo_note_info_pane_g1

0x9f6a,	// (0x0003b775) list_tmo_note_info_pane_g2_ParamLimits

0x9f6a,	// (0x0003b775) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x000416aa) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x000416aa) list_tmo_note_info_pane_g

0x9f86,	// (0x0003b791) list_tmo_note_info_text_pane_ParamLimits

0x9f86,	// (0x0003b791) list_tmo_note_info_text_pane

0xa007,	// (0x0003b812) list_tmo_link_pane

0xa014,	// (0x0003b81f) scroll_pane_cp20

0xa021,	// (0x0003b82c) list_single_tmo_link_pane_ParamLimits

0xa021,	// (0x0003b82c) list_single_tmo_link_pane

0xa031,	// (0x0003b83c) list_single_tmo_link_pane_t1

0xa03f,	// (0x0003b84a) list_tmo_note_info_text_pane_t1_ParamLimits

0xa03f,	// (0x0003b84a) list_tmo_note_info_text_pane_t1

0xbd26,	// (0x0003d531) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbd26,	// (0x0003d531) aid_size_touch_scroll_bar_cp01

0xbc43,	// (0x0003d44e) aid_size_touch_slider_marker

0xb321,	// (0x0003cb2c) popup_settings_window_ParamLimits

0xb321,	// (0x0003cb2c) popup_settings_window

0x0947,	// (0x00032152) popup_candi_list_indi_window

0x482a,	// (0x00036035) aid_touch_navi_pane_ParamLimits

0x1f4a,	// (0x00033755) rs_clock_indi_pane

0x1f53,	// (0x0003375e) sctrl_sk_bottom_pane_ParamLimits

0x1f64,	// (0x0003376f) sctrl_sk_top_pane_ParamLimits

0x205f,	// (0x0003386a) popup_fep_tooltip_window

0x9963,	// (0x0003b16e) aid_size_cell_widget_grid_ParamLimits

0x99d8,	// (0x0003b1e3) cell_ai5_widget_pane_g1_ParamLimits

0x99d8,	// (0x0003b1e3) cell_ai5_widget_pane_g1

0x9a3b,	// (0x0003b246) cell_ai5_widget_pane_g6_ParamLimits

0x9a47,	// (0x0003b252) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe13,	// (0x0004161e) cell_ai5_widget_pane_g_ParamLimits

0xfe13,	// (0x0004161e) cell_ai5_widget_pane_g

0x9bb7,	// (0x0003b3c2) cell_ai5_widget_pane_t10_ParamLimits

0x9bb7,	// (0x0003b3c2) cell_ai5_widget_pane_t10

0x9bfa,	// (0x0003b405) grid_ai5_widget_pane_ParamLimits

0x9c98,	// (0x0003b4a3) cell_contacts_ai5_widget_pane_ParamLimits

0x9c98,	// (0x0003b4a3) cell_contacts_ai5_widget_pane

0x9e7a,	// (0x0003b685) popup_discreet_window_t3_ParamLimits

0x9e7a,	// (0x0003b685) popup_discreet_window_t3

0xd013,	// (0x0003e81e) popup_fshwr2_char_preview_window_ParamLimits

0xd013,	// (0x0003e81e) popup_fshwr2_char_preview_window

0xefa9,	// (0x000407b4) tmo_note_info_pane_t1

0xefbe,	// (0x000407c9) tmo_note_info_pane_t2

0xefd5,	// (0x000407e0) tmo_note_info_pane_t3

0x9fe3,	// (0x0003b7ee) tmo_note_info_pane_t4

0x9ff5,	// (0x0003b800) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x000416af) tmo_note_info_pane_t

0xa007,	// (0x0003b812) list_tmo_link_pane_ParamLimits

0xa014,	// (0x0003b81f) scroll_pane_cp20_ParamLimits

0xf290,	// (0x00040a9b) bg_popup_fep_char_preview_window_cp01

0xefea,	// (0x000407f5) popup_fshwr2_char_preview_window_t1

0xa066,	// (0x0003b871) popup_candi_list_indi_window_g1

0xa06f,	// (0x0003b87a) bg_cell_contacts_ai5_widget_pane

0xa07b,	// (0x0003b886) cell_contacts_ai5_widget_pane_g1

0x79b5,	// (0x000391c0) cell_contacts_ai5_widget_pane_g2

0xa090,	// (0x0003b89b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x000416ba) cell_contacts_ai5_widget_pane_g

0xa09c,	// (0x0003b8a7) cell_contacts_ai5_widget_pane_t1

0x35e0,	// (0x00034deb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa113,	// (0x0003b91e) settings_container_pane

0x448a,	// (0x00035c95) listscroll_set_pane_copy1

0x69fc,	// (0x00038207) scroll_pane_cp121_copy1

0x5104,	// (0x0003690f) set_content_pane_copy1

0xa11f,	// (0x0003b92a) aid_height_set_list_copy1_ParamLimits

0xa11f,	// (0x0003b92a) aid_height_set_list_copy1

0x60b1,	// (0x000378bc) aid_size_parent_copy1_ParamLimits

0x60b1,	// (0x000378bc) aid_size_parent_copy1

0xa12b,	// (0x0003b936) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa12b,	// (0x0003b936) button_value_adjust_pane_cp6_copy1

0x47ae,	// (0x00035fb9) list_highlight_pane_cp2_copy1_ParamLimits

0x47ae,	// (0x00035fb9) list_highlight_pane_cp2_copy1

0xa13f,	// (0x0003b94a) list_set_pane_copy1_ParamLimits

0xa13f,	// (0x0003b94a) list_set_pane_copy1

0xa0ae,	// (0x0003b8b9) main_pane_set_t1_copy1_ParamLimits

0xa0ae,	// (0x0003b8b9) main_pane_set_t1_copy1

0xa0e8,	// (0x0003b8f3) main_pane_set_t2_copy1_ParamLimits

0xa0e8,	// (0x0003b8f3) main_pane_set_t2_copy1

0xa1ec,	// (0x0003b9f7) main_pane_set_t3_copy1

0xa1fa,	// (0x0003ba05) main_pane_set_t4_copy1

0xa107,	// (0x0003b912) set_content_pane_g1_copy1_ParamLimits

0xa107,	// (0x0003b912) set_content_pane_g1_copy1

0xa208,	// (0x0003ba13) setting_code_pane_copy1

0xa210,	// (0x0003ba1b) setting_slider_graphic_pane_copy1

0xa210,	// (0x0003ba1b) setting_slider_pane_copy1

0xa218,	// (0x0003ba23) setting_text_pane_copy1

0xa218,	// (0x0003ba23) setting_volume_pane_copy1

0xa208,	// (0x0003ba13) settings_code_pane_cp2_copy1

0xa220,	// (0x0003ba2b) settings_code_pane_cp_copy1_ParamLimits

0xa220,	// (0x0003ba2b) settings_code_pane_cp_copy1

0x2965,	// (0x00034170) volume_set_pane_copy1

0xa234,	// (0x0003ba3f) volume_set_pane_g10_copy1

0xa23c,	// (0x0003ba47) volume_set_pane_g1_copy1

0xa244,	// (0x0003ba4f) volume_set_pane_g2_copy1

0xa24c,	// (0x0003ba57) volume_set_pane_g3_copy1

0xa254,	// (0x0003ba5f) volume_set_pane_g4_copy1

0xa25c,	// (0x0003ba67) volume_set_pane_g5_copy1

0xa264,	// (0x0003ba6f) volume_set_pane_g6_copy1

0xa26c,	// (0x0003ba77) volume_set_pane_g7_copy1

0xa274,	// (0x0003ba7f) volume_set_pane_g8_copy1

0xa27c,	// (0x0003ba87) volume_set_pane_g9_copy1

0x2d53,	// (0x0003455e) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d53,	// (0x0003455e) bg_set_opt_pane_cp_copy1

0x296d,	// (0x00034178) setting_slider_pane_t1_copy1_ParamLimits

0x296d,	// (0x00034178) setting_slider_pane_t1_copy1

0x298c,	// (0x00034197) setting_slider_pane_t2_copy1_ParamLimits

0x298c,	// (0x00034197) setting_slider_pane_t2_copy1

0x29a6,	// (0x000341b1) setting_slider_pane_t3_copy1_ParamLimits

0x29a6,	// (0x000341b1) setting_slider_pane_t3_copy1

0x29be,	// (0x000341c9) slider_set_pane_copy1_ParamLimits

0x29be,	// (0x000341c9) slider_set_pane_copy1

0x3638,	// (0x00034e43) set_opt_bg_pane_g1_copy2

0x3640,	// (0x00034e4b) set_opt_bg_pane_g2_copy2

0xa284,	// (0x0003ba8f) set_opt_bg_pane_g3_copy2

0x3650,	// (0x00034e5b) set_opt_bg_pane_g4_copy2

0x3658,	// (0x00034e63) set_opt_bg_pane_g5_copy2

0x3660,	// (0x00034e6b) set_opt_bg_pane_g6_copy2

0xa28e,	// (0x0003ba99) set_opt_bg_pane_g7_copy2

0xa296,	// (0x0003baa1) set_opt_bg_pane_g8_copy2

0xa2a0,	// (0x0003baab) set_opt_bg_pane_g9_copy2

0x29d4,	// (0x000341df) aid_size_touch_slider_mark_copy1_ParamLimits

0x29d4,	// (0x000341df) aid_size_touch_slider_mark_copy1

0xa2aa,	// (0x0003bab5) slider_set_pane_g1_copy1

0x29e8,	// (0x000341f3) slider_set_pane_g2_copy1

0x1355,	// (0x00032b60) slider_set_pane_g3_copy1_ParamLimits

0x1355,	// (0x00032b60) slider_set_pane_g3_copy1

0x1369,	// (0x00032b74) slider_set_pane_g4_copy1_ParamLimits

0x1369,	// (0x00032b74) slider_set_pane_g4_copy1

0x1381,	// (0x00032b8c) slider_set_pane_g5_copy1_ParamLimits

0x1381,	// (0x00032b8c) slider_set_pane_g5_copy1

0x1355,	// (0x00032b60) slider_set_pane_g6_copy1_ParamLimits

0x1355,	// (0x00032b60) slider_set_pane_g6_copy1

0x29f0,	// (0x000341fb) slider_set_pane_g7_copy1_ParamLimits

0x29f0,	// (0x000341fb) slider_set_pane_g7_copy1

0xe1f6,	// (0x0003fa01) bg_set_opt_pane_cp2_copy1

0xa2b3,	// (0x0003babe) setting_slider_graphic_pane_g1_copy1

0xa2bc,	// (0x0003bac7) setting_slider_graphic_pane_t1_copy1

0xa2cc,	// (0x0003bad7) setting_slider_graphic_pane_t2_copy1

0xa2dc,	// (0x0003bae7) slider_set_pane_cp_copy1

0xa2ec,	// (0x0003baf7) input_focus_pane_cp1_copy1

0xa2f5,	// (0x0003bb00) list_set_text_pane_copy1

0xa2fd,	// (0x0003bb08) setting_text_pane_g1_copy1

0xe200,	// (0x0003fa0b) set_text_pane_t1_copy1

0xa2ec,	// (0x0003baf7) input_focus_pane_cp2_copy1

0xa2fd,	// (0x0003bb08) setting_code_pane_g1_copy1

0xa306,	// (0x0003bb11) setting_code_pane_t1_copy1

0x6824,	// (0x0003802f) list_set_graphic_pane_copy1

0xe1f6,	// (0x0003fa01) bg_set_opt_pane_cp4_copy1

0x4183,	// (0x0003598e) list_set_graphic_pane_g1_copy1_ParamLimits

0x4183,	// (0x0003598e) list_set_graphic_pane_g1_copy1

0xa314,	// (0x0003bb1f) list_set_graphic_pane_g2_copy1

0x419b,	// (0x000359a6) list_set_graphic_pane_t1_copy1_ParamLimits

0x419b,	// (0x000359a6) list_set_graphic_pane_t1_copy1

0x7317,	// (0x00038b22) rs_clock_indi_pane_g1

0xa31c,	// (0x0003bb27) rs_clock_indi_pane_t1

0xa32a,	// (0x0003bb35) rs_indi_pane

0xa332,	// (0x0003bb3d) rs_indi_pane_g1

0xa33b,	// (0x0003bb46) rs_indi_pane_g2

0xa344,	// (0x0003bb4f) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x000416c1) rs_indi_pane_g

0x448a,	// (0x00035c95) bg_popup_preview_window_pane_cp03

0xa34d,	// (0x0003bb58) popup_fep_tooltip_window_t1

0x7fa7,	// (0x000397b2) popup_note2_window_g2_ParamLimits

0x7fa7,	// (0x000397b2) popup_note2_window_g2

0x0001,

0xfc43,	// (0x0004144e) popup_note2_window_g_ParamLimits

0xfc43,	// (0x0004144e) popup_note2_window_g

0x84a2,	// (0x00039cad) bg_popup_sub_pane_cp11_ParamLimits

0x84af,	// (0x00039cba) cell_ai3_links_pane_g1_ParamLimits

0x84c6,	// (0x00039cd1) cell_ai3_links_pane_t1

0xe200,	// (0x0003fa0b) set_text_pane_t1_copy1_ParamLimits

0x438e,	// (0x00035b99) cell_graphic_popup_pane_cp2_ParamLimits

0x438e,	// (0x00035b99) cell_graphic_popup_pane_cp2

0xa35b,	// (0x0003bb66) cell_graphic_popup_pane_g1_cp2

0x332b,	// (0x00034b36) cell_graphic_popup_pane_g2_cp2

0xa363,	// (0x0003bb6e) cell_graphic_popup_pane_g3_cp2

0xa36b,	// (0x0003bb76) cell_graphic_popup_pane_t2_cp2

0x333c,	// (0x00034b47) grid_highlight_pane_cp3_cp2

0x3990,	// (0x0003519b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x35e0,	// (0x00034deb) main_tmo_pane_ParamLimits

0xe313,	// (0x0003fb1e) popup_tmo_big_image_note_window

0x99c7,	// (0x0003b1d2) cell_ai5_widget_list_pane

0x99cf,	// (0x0003b1da) cell_ai5_widget_lrg_icon_pane

0xefa9,	// (0x000407b4) tmo_note_info_pane_t1_ParamLimits

0xefbe,	// (0x000407c9) tmo_note_info_pane_t2_ParamLimits

0xefd5,	// (0x000407e0) tmo_note_info_pane_t3_ParamLimits

0x9fe3,	// (0x0003b7ee) tmo_note_info_pane_t4_ParamLimits

0x9ff5,	// (0x0003b800) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x000416af) tmo_note_info_pane_t_ParamLimits

0xa113,	// (0x0003b91e) settings_container_pane_ParamLimits

0xa2e4,	// (0x0003baef) indicator_popup_pane_cp5

0xa2e4,	// (0x0003baef) indicator_popup_pane_cp6

0x6824,	// (0x0003802f) list_set_graphic_pane_copy1_ParamLimits

0xe1e2,	// (0x0003f9ed) bg_popup_window_pane_cp23

0xa379,	// (0x0003bb84) popup_tmo_big_image_note_window_g1

0xa383,	// (0x0003bb8e) popup_tmo_big_image_note_window_t1

0xa393,	// (0x0003bb9e) popup_tmo_big_image_note_window_t2

0xa3a3,	// (0x0003bbae) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x000416c8) popup_tmo_big_image_note_window_t

0x7317,	// (0x00038b22) cell_ai5_widget_lrg_icon_pane_g1

0xa3b3,	// (0x0003bbbe) cell_ai5_widget_lrg_icon_pane_t1

0xa3c1,	// (0x0003bbcc) cell_ai5_widget_list_row_pane_ParamLimits

0xa3c1,	// (0x0003bbcc) cell_ai5_widget_list_row_pane

0xa3d8,	// (0x0003bbe3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa3d8,	// (0x0003bbe3) cell_ai5_widget_list_row_pane_g1

0xa3e5,	// (0x0003bbf0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa3e5,	// (0x0003bbf0) cell_ai5_widget_list_row_pane_t1

0xa410,	// (0x0003bc1b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa410,	// (0x0003bc1b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x000416cf) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x000416cf) cell_ai5_widget_list_row_pane_t

0xf290,	// (0x00040a9b) main_fep_vtchi_ss_pane

0xa460,	// (0x0003bc6b) popup_fep_char_pre_window

0xa468,	// (0x0003bc73) popup_fep_ituss_window

0xf007,	// (0x00040812) popup_fep_vkbss_window

0x47ae,	// (0x00035fb9) grid_vkbss_keypad_pane_ParamLimits

0x47ae,	// (0x00035fb9) grid_vkbss_keypad_pane

0xa4e0,	// (0x0003bceb) ituss_keypad_pane

0x2a31,	// (0x0003423c) aid_vkbss_key_offset_ParamLimits

0x2a31,	// (0x0003423c) aid_vkbss_key_offset

0xd140,	// (0x0003e94b) cell_vkbss_key_pane_ParamLimits

0xd140,	// (0x0003e94b) cell_vkbss_key_pane

0xa4ec,	// (0x0003bcf7) bg_cell_vkbss_key_g1_ParamLimits

0xa4ec,	// (0x0003bcf7) bg_cell_vkbss_key_g1

0xf014,	// (0x0004081f) cell_vkbss_key_3p_pane_ParamLimits

0xf014,	// (0x0004081f) cell_vkbss_key_3p_pane

0xf04a,	// (0x00040855) cell_vkbss_key_g1_ParamLimits

0xf04a,	// (0x00040855) cell_vkbss_key_g1

0xf080,	// (0x0004088b) cell_vkbss_key_t1_ParamLimits

0xf080,	// (0x0004088b) cell_vkbss_key_t1

0x2a9b,	// (0x000342a6) cell_ituss_key_pane_ParamLimits

0x2a9b,	// (0x000342a6) cell_ituss_key_pane

0xa5c0,	// (0x0003bdcb) bg_cell_ituss_key_g1_ParamLimits

0xa5c0,	// (0x0003bdcb) bg_cell_ituss_key_g1

0xa5cc,	// (0x0003bdd7) cell_ituss_key_pane_g1_ParamLimits

0xa5cc,	// (0x0003bdd7) cell_ituss_key_pane_g1

0x2aac,	// (0x000342b7) cell_ituss_key_pane_g2_ParamLimits

0x2aac,	// (0x000342b7) cell_ituss_key_pane_g2

0x0005,

0xfecb,	// (0x000416d6) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x000416d6) cell_ituss_key_pane_g

0x2b30,	// (0x0003433b) cell_ituss_key_t1_ParamLimits

0x2b30,	// (0x0003433b) cell_ituss_key_t1

0x2b6a,	// (0x00034375) cell_ituss_key_t2_ParamLimits

0x2b6a,	// (0x00034375) cell_ituss_key_t2

0x2b9c,	// (0x000343a7) cell_ituss_key_t3_ParamLimits

0x2b9c,	// (0x000343a7) cell_ituss_key_t3

0x2bcd,	// (0x000343d8) cell_ituss_key_t4_ParamLimits

0x2bcd,	// (0x000343d8) cell_ituss_key_t4

0x0005,

0xfed8,	// (0x000416e3) cell_ituss_key_t_ParamLimits

0xfed8,	// (0x000416e3) cell_ituss_key_t

0xf0dc,	// (0x000408e7) cell_vkbss_key_3p_pane_g1

0xf0e4,	// (0x000408ef) cell_vkbss_key_3p_pane_g2

0xf0ec,	// (0x000408f7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x000416f0) cell_vkbss_key_3p_pane_g

0x448a,	// (0x00035c95) bg_popup_fep_char_preview_window_cp02

0xa60a,	// (0x0003be15) popup_fep_char_pre_window_t1

0xeef9,	// (0x00040704) main_ai5_sk_pane

0xa06f,	// (0x0003b87a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa07b,	// (0x0003b886) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x79b5,	// (0x000391c0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa090,	// (0x0003b89b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x000416ba) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa09c,	// (0x0003b8a7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x35e0,	// (0x00034deb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf0f4,	// (0x000408ff) main_ai5_sk_pane_g1

0x51a0,	// (0x000369ab) popup_query_code_window_g1

0xeff8,	// (0x00040803) popup_fep_vkb_icf_pane

0xa4b4,	// (0x0003bcbf) popup_fep_vtchi_icf_pane

0xa621,	// (0x0003be2c) bg_icf_pane

0xa621,	// (0x0003be2c) list_vkb_icf_pane

0xa62d,	// (0x0003be38) bg_icf_pane_cp01

0xa640,	// (0x0003be4b) vtchi_icf_list_pane

0xf149,	// (0x00040954) list_vkb_icf_pane_t1_ParamLimits

0xf149,	// (0x00040954) list_vkb_icf_pane_t1

0xa6be,	// (0x0003bec9) vtchi_icf_list_pane_t1_ParamLimits

0xa6be,	// (0x0003bec9) vtchi_icf_list_pane_t1

0xa468,	// (0x0003bc73) popup_fep_ituss_window_ParamLimits

0xa4b4,	// (0x0003bcbf) popup_fep_vtchi_icf_pane_ParamLimits

0xa4e0,	// (0x0003bceb) ituss_keypad_pane_ParamLimits

0x2a27,	// (0x00034232) ituss_sks_pane

0xa621,	// (0x0003be2c) bg_icf_pane_ParamLimits

0xa438,	// (0x0003bc43) icf_edit_indi_pane_ParamLimits

0xa438,	// (0x0003bc43) icf_edit_indi_pane

0xa621,	// (0x0003be2c) list_vkb_icf_pane_ParamLimits

0xa62d,	// (0x0003be38) bg_icf_pane_cp01_ParamLimits

0xa453,	// (0x0003bc5e) icf_edit_indi_pane_cp01_ParamLimits

0xa453,	// (0x0003bc5e) icf_edit_indi_pane_cp01

0xa640,	// (0x0003be4b) vtchi_query_pane

0x97c4,	// (0x0003afcf) icf_edit_indi_pane_g1_ParamLimits

0x97c4,	// (0x0003afcf) icf_edit_indi_pane_g1

0xf160,	// (0x0004096b) icf_edit_indi_pane_g2_ParamLimits

0xf160,	// (0x0004096b) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0004171b) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0004171b) icf_edit_indi_pane_g

0xf174,	// (0x0004097f) icf_edit_indi_pane_t1

0xa6dc,	// (0x0003bee7) bg_input_focus_pane_cp042

0x350f,	// (0x00034d1a) vtchi_button_pane

0xa6e5,	// (0x0003bef0) vtchi_query_pane_t1

0xa6f3,	// (0x0003befe) vtchi_query_pane_t2

0xa701,	// (0x0003bf0c) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0004170a) vtchi_query_pane_t

0xf290,	// (0x00040a9b) bg_button_pane_cp13

0xa70f,	// (0x0003bf1a) vtchi_button_pane_g1

0x2c4e,	// (0x00034459) ituss_sks_pane_g1

0x2c59,	// (0x00034464) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x00041711) ituss_sks_pane_g

0xa717,	// (0x0003bf22) ituss_sks_pane_t1

0xa725,	// (0x0003bf30) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x00041716) ituss_sks_pane_t

0x6da0,	// (0x000385ab) indicator_nsta_pane_cp_g1

0x6da9,	// (0x000385b4) indicator_nsta_pane_cp_g2

0x6db1,	// (0x000385bc) indicator_nsta_pane_cp_g3

0x6db9,	// (0x000385c4) indicator_nsta_pane_cp_g4

0x6da9,	// (0x000385b4) indicator_nsta_pane_cp_g5

0x6db1,	// (0x000385bc) indicator_nsta_pane_cp_g6

0x0005,

0xfa81,	// (0x0004128c) indicator_nsta_pane_cp_g

0xed06,	// (0x00040511) cell_graphic2_pane_t2_ParamLimits

0xed06,	// (0x00040511) cell_graphic2_pane_t2

0x0001,

0xfd9a,	// (0x000415a5) cell_graphic2_pane_t_ParamLimits

0xfd9a,	// (0x000415a5) cell_graphic2_pane_t

0xed3b,	// (0x00040546) cell_graphic2_control_pane_t1

0xd1b3,	// (0x0003e9be) signal_pane_g3_ParamLimits

0xd1b3,	// (0x0003e9be) signal_pane_g3

0xd1c7,	// (0x0003e9d2) signal_pane_g4_ParamLimits

0xd1c7,	// (0x0003e9d2) signal_pane_g4

0xa422,	// (0x0003bc2d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa422,	// (0x0003bc2d) cell_ai5_widget_list_row_pane_t3

0xa5e0,	// (0x0003bdeb) cell_ituss_key_pane_t1_ParamLimits

0xa5e0,	// (0x0003bdeb) cell_ituss_key_pane_t1

0x4ddd,	// (0x000365e8) form_field_data_wide_pane_vc_t2_ParamLimits

0x4ddd,	// (0x000365e8) form_field_data_wide_pane_vc_t2

0x4df1,	// (0x000365fc) form_field_data_wide_pane_vc_t3_ParamLimits

0x4df1,	// (0x000365fc) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x00040fe8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x00040fe8) form_field_data_wide_pane_vc_t

0x6a3e,	// (0x00038249) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6a3e,	// (0x00038249) form_field_slider_wide_pane_vc_t3

0x6b28,	// (0x00038333) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b28,	// (0x00038333) form_field_popup_wide_pane_vc_t2

0x6b3f,	// (0x0003834a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6b3f,	// (0x0003834a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa70,	// (0x0004127b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa70,	// (0x0004127b) form_field_popup_wide_pane_vc_t

0xcf81,	// (0x0003e78c) aid_fshwr2_btn_pane_ParamLimits

0xcf91,	// (0x0003e79c) aid_fshwr2_syb_pane_ParamLimits

0xcfa5,	// (0x0003e7b0) aid_fshwr2_txt_pane_ParamLimits

0x1fef,	// (0x000337fa) fshwr2_bg_pane_ParamLimits

0xcfb5,	// (0x0003e7c0) fshwr2_func_candi_pane_ParamLimits

0xcfd5,	// (0x0003e7e0) fshwr2_hwr_syb_pane_ParamLimits

0xcff7,	// (0x0003e802) fshwr2_icf_pane_ParamLimits

0x1840,	// (0x0003304b) list_double_graphic_pane_vc_g4_ParamLimits

0x1840,	// (0x0003304b) list_double_graphic_pane_vc_g4

0x2acc,	// (0x000342d7) cell_ituss_key_pane_g3_ParamLimits

0x2acc,	// (0x000342d7) cell_ituss_key_pane_g3

0x2bfe,	// (0x00034409) cell_ituss_key_t5_ParamLimits

0x2bfe,	// (0x00034409) cell_ituss_key_t5

0xf007,	// (0x00040812) popup_fep_vkbss_window_ParamLimits

0x995a,	// (0x0003b165) aid_cell_ai5_quarter

0xf174,	// (0x0004097f) icf_edit_indi_pane_t1_ParamLimits

0x3084,	// (0x0003488f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3084,	// (0x0003488f) aid_tch_indicator_popup_pane_cp2

0x3097,	// (0x000348a2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3097,	// (0x000348a2) aid_tch_query_popup_data_pane_cp2

0x5148,	// (0x00036953) aid_tch_query_popup_pane_ParamLimits

0x5148,	// (0x00036953) aid_tch_query_popup_pane

0x5148,	// (0x00036953) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5148,	// (0x00036953) aid_tch_query_popup_data_pane_cp1

0x47ae,	// (0x00035fb9) cell_fshwr2_syb_bg_pane_ParamLimits

0xd103,	// (0x0003e90e) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd116,	// (0x0003e921) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeff8,	// (0x00040803) popup_fep_vkb_icf_pane_ParamLimits

0xcf0d,	// (0x0003e718) bg_popup_fep_char_preview_window_g10

0x9a8f,	// (0x0003b29a) cell_ai5_widget_pane_g11_ParamLimits

0x9a8f,	// (0x0003b29a) cell_ai5_widget_pane_g11

0x9a9b,	// (0x0003b2a6) cell_ai5_widget_pane_g12_ParamLimits

0x9a9b,	// (0x0003b2a6) cell_ai5_widget_pane_g12

0x9aa7,	// (0x0003b2b2) cell_ai5_widget_pane_g13_ParamLimits

0x9aa7,	// (0x0003b2b2) cell_ai5_widget_pane_g13

0x9bd6,	// (0x0003b3e1) cell_ai5_widget_pane_t11_ParamLimits

0x9bd6,	// (0x0003b3e1) cell_ai5_widget_pane_t11

0x9be8,	// (0x0003b3f3) cell_ai5_widget_pane_t12_ParamLimits

0x9be8,	// (0x0003b3f3) cell_ai5_widget_pane_t12

0x2ad8,	// (0x000342e3) cell_ituss_key_pane_g4_ParamLimits

0x2ad8,	// (0x000342e3) cell_ituss_key_pane_g4

0x2af4,	// (0x000342ff) cell_ituss_key_pane_g5_ParamLimits

0x2af4,	// (0x000342ff) cell_ituss_key_pane_g5

0x2b10,	// (0x0003431b) cell_ituss_key_pane_g6_ParamLimits

0x2b10,	// (0x0003431b) cell_ituss_key_pane_g6

0x4cd8,	// (0x000364e3) bg_icf_pane_g1

0xf0fd,	// (0x00040908) bg_icf_pane_g2

0xf107,	// (0x00040912) bg_icf_pane_g3

0xf10f,	// (0x0004091a) bg_icf_pane_g4

0xf119,	// (0x00040924) bg_icf_pane_g5

0xf123,	// (0x0004092e) bg_icf_pane_g6

0xf12d,	// (0x00040938) bg_icf_pane_g7

0xf135,	// (0x00040940) bg_icf_pane_g8

0xf13f,	// (0x0004094a) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x000416f7) bg_icf_pane_g

0xa4cd,	// (0x0003bcd8) popup_hyb_candi_window_ParamLimits

0xa4cd,	// (0x0003bcd8) popup_hyb_candi_window

0x4d4c,	// (0x00036557) bg_popup_sub_pane_cp01_ParamLimits

0x4d4c,	// (0x00036557) bg_popup_sub_pane_cp01

0xa760,	// (0x0003bf6b) entry_hyb_candi_pane_ParamLimits

0xa760,	// (0x0003bf6b) entry_hyb_candi_pane

0xa76f,	// (0x0003bf7a) grid_hyb_candi_pane_ParamLimits

0xa76f,	// (0x0003bf7a) grid_hyb_candi_pane

0xa784,	// (0x0003bf8f) grid_hyb_phrase_pane_ParamLimits

0xa784,	// (0x0003bf8f) grid_hyb_phrase_pane

0xa793,	// (0x0003bf9e) cell_hyb_candi_pane_ParamLimits

0xa793,	// (0x0003bf9e) cell_hyb_candi_pane

0xa7b6,	// (0x0003bfc1) cell_hyb_candi_scroll_pane

0x3e59,	// (0x00035664) cell_hyb_candi_pane_g1

0xa7bf,	// (0x0003bfca) cell_hyb_candi_pane_t1

0xa7cd,	// (0x0003bfd8) cell_hyb_phrase_pane

0x3e59,	// (0x00035664) cell_hyb_phrase_pane_g1

0xa7d6,	// (0x0003bfe1) cell_hyb_phrase_pane_t1

0xa7e4,	// (0x0003bfef) entry_hyb_candi_pane_t1

0x448a,	// (0x00035c95) input_focus_pane_cp06

0xa7f2,	// (0x0003bffd) cell_hyb_candi_scroll_pane_g1

0xa7fa,	// (0x0003c005) cell_hyb_candi_scroll_pane_g1_aid

0xa802,	// (0x0003c00d) cell_hyb_candi_scroll_pane_g2

0xa80a,	// (0x0003c015) cell_hyb_candi_scroll_pane_g2_aid

0xa812,	// (0x0003c01d) cell_hyb_candi_scroll_pane_g3

0xa81a,	// (0x0003c025) cell_hyb_candi_scroll_pane_g4

0xee8d,	// (0x00040698) ai5_page_g1

0x2c10,	// (0x0003441b) cell_ituss_key_t6_ParamLimits

0x2c10,	// (0x0003441b) cell_ituss_key_t6

0xd12c,	// (0x0003e937) icf_edit_indi_pane_cp02_ParamLimits

0xd12c,	// (0x0003e937) icf_edit_indi_pane_cp02

0x2a1a,	// (0x00034225) icf_edit_indi_pane_cp03_ParamLimits

0x2a1a,	// (0x00034225) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004ee71 };

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
0xcf7c,	// (0x0005bded) Screen

0xcf88,	// (0x0005bdf9) application_window_ParamLimits

0xcf88,	// (0x0005bdf9) application_window

0x2ca4,	// (0x00051b15) screen_g1

0xb6ca,	// (0x0005a53b) area_bottom_pane_ParamLimits

0xb6ca,	// (0x0005a53b) area_bottom_pane

0x004b,	// (0x0004eebc) area_top_pane_ParamLimits

0x004b,	// (0x0004eebc) area_top_pane

0x00e9,	// (0x0004ef5a) main_pane_ParamLimits

0x00e9,	// (0x0004ef5a) main_pane

0x2cae,	// (0x00051b1f) misc_graphics

0xd6c4,	// (0x0005c535) battery_pane_ParamLimits

0xd6c4,	// (0x0005c535) battery_pane

0x5c92,	// (0x00054b03) bg_status_flat_pane_g8

0x5c9a,	// (0x00054b0b) bg_status_flat_pane_g9

0x5080,	// (0x00053ef1) context_pane_ParamLimits

0x5080,	// (0x00053ef1) context_pane

0xd82f,	// (0x0005c6a0) navi_pane_ParamLimits

0xd82f,	// (0x0005c6a0) navi_pane

0xd8ad,	// (0x0005c71e) signal_pane_ParamLimits

0xd8ad,	// (0x0005c71e) signal_pane

0x0008,

0xf879,	// (0x0005e6ea) bg_status_flat_pane_g

0xd9d7,	// (0x0005c848) status_pane_g1_ParamLimits

0xd9d7,	// (0x0005c848) status_pane_g1

0xd9ed,	// (0x0005c85e) status_pane_g2_ParamLimits

0xd9ed,	// (0x0005c85e) status_pane_g2

0x52a7,	// (0x00054118) status_pane_g3_ParamLimits

0x52a7,	// (0x00054118) status_pane_g3

0x0004,

0xf7a5,	// (0x0005e616) status_pane_g_ParamLimits

0xf7a5,	// (0x0005e616) status_pane_g

0xd9f9,	// (0x0005c86a) title_pane_ParamLimits

0xd9f9,	// (0x0005c86a) title_pane

0xda5c,	// (0x0005c8cd) uni_indicator_pane_ParamLimits

0xda5c,	// (0x0005c8cd) uni_indicator_pane

0x4eee,	// (0x00053d5f) bg_list_pane_ParamLimits

0x4eee,	// (0x00053d5f) bg_list_pane

0xd637,	// (0x0005c4a8) find_pane

0x54a6,	// (0x00054317) listscroll_app_pane_ParamLimits

0x54a6,	// (0x00054317) listscroll_app_pane

0x4f1a,	// (0x00053d8b) listscroll_form_pane

0xc0bc,	// (0x0005af2d) listscroll_gen_pane_ParamLimits

0xc0bc,	// (0x0005af2d) listscroll_gen_pane

0x112c,	// (0x0004ff9d) listscroll_set_pane

0x6808,	// (0x00055679) main_idle_act_pane

0x4bea,	// (0x00053a5b) main_idle_trad_pane

0x4bea,	// (0x00053a5b) main_list_empty_pane

0x4f0e,	// (0x00053d7f) main_midp_pane

0x4f34,	// (0x00053da5) main_pane_g1_ParamLimits

0x4f34,	// (0x00053da5) main_pane_g1

0xc0d0,	// (0x0005af41) popup_ai_message_window_ParamLimits

0xc0d0,	// (0x0005af41) popup_ai_message_window

0xc161,	// (0x0005afd2) popup_fep_china_uni_window_ParamLimits

0xc161,	// (0x0005afd2) popup_fep_china_uni_window

0x124c,	// (0x000500bd) popup_fep_japan_candidate_window_ParamLimits

0x124c,	// (0x000500bd) popup_fep_japan_candidate_window

0x126c,	// (0x000500dd) popup_fep_japan_predictive_window_ParamLimits

0x126c,	// (0x000500dd) popup_fep_japan_predictive_window

0xc1bd,	// (0x0005b02e) popup_find_window

0xc1da,	// (0x0005b04b) popup_grid_graphic_window_ParamLimits

0xc1da,	// (0x0005b04b) popup_grid_graphic_window

0x12d3,	// (0x00050144) popup_large_graphic_colour_window

0xc278,	// (0x0005b0e9) popup_menu_window_ParamLimits

0xc278,	// (0x0005b0e9) popup_menu_window

0xc44a,	// (0x0005b2bb) popup_note_image_window

0xc410,	// (0x0005b281) popup_note_wait_window_ParamLimits

0xc410,	// (0x0005b281) popup_note_wait_window

0xc462,	// (0x0005b2d3) popup_note_window_ParamLimits

0xc462,	// (0x0005b2d3) popup_note_window

0xc508,	// (0x0005b379) popup_query_code_window_ParamLimits

0xc508,	// (0x0005b379) popup_query_code_window

0x151b,	// (0x0005038c) popup_query_data_code_window_ParamLimits

0x151b,	// (0x0005038c) popup_query_data_code_window

0xc542,	// (0x0005b3b3) popup_query_data_window_ParamLimits

0xc542,	// (0x0005b3b3) popup_query_data_window

0xc5c4,	// (0x0005b435) popup_query_sat_info_window_ParamLimits

0xc5c4,	// (0x0005b435) popup_query_sat_info_window

0xc65b,	// (0x0005b4cc) popup_snote_single_graphic_window_ParamLimits

0xc65b,	// (0x0005b4cc) popup_snote_single_graphic_window

0xc65b,	// (0x0005b4cc) popup_snote_single_text_window_ParamLimits

0xc65b,	// (0x0005b4cc) popup_snote_single_text_window

0x15a2,	// (0x00050413) popup_sub_window_general

0x16d2,	// (0x00050543) popup_window_general_ParamLimits

0x16d2,	// (0x00050543) popup_window_general

0x4f42,	// (0x00053db3) power_save_pane

0xbf41,	// (0x0005adb2) control_pane_g1_ParamLimits

0xbf41,	// (0x0005adb2) control_pane_g1

0xbf6a,	// (0x0005addb) control_pane_g2_ParamLimits

0xbf6a,	// (0x0005addb) control_pane_g2

0x4eb1,	// (0x00053d22) control_pane_g3_ParamLimits

0x4eb1,	// (0x00053d22) control_pane_g3

0x0007,

0xf78d,	// (0x0005e5fe) control_pane_g_ParamLimits

0xf78d,	// (0x0005e5fe) control_pane_g

0xbfab,	// (0x0005ae1c) control_pane_t1_ParamLimits

0xbfab,	// (0x0005ae1c) control_pane_t1

0xc011,	// (0x0005ae82) control_pane_t2_ParamLimits

0xc011,	// (0x0005ae82) control_pane_t2

0x0002,

0xf79e,	// (0x0005e60f) control_pane_t_ParamLimits

0xf79e,	// (0x0005e60f) control_pane_t

0xd569,	// (0x0005c3da) navi_navi_volume_pane_cp1

0xd571,	// (0x0005c3e2) status_small_icon_pane

0x4de6,	// (0x00053c57) status_small_pane_g1_ParamLimits

0x4de6,	// (0x00053c57) status_small_pane_g1

0xd579,	// (0x0005c3ea) status_small_pane_g2_ParamLimits

0xd579,	// (0x0005c3ea) status_small_pane_g2

0xd585,	// (0x0005c3f6) status_small_pane_g3_ParamLimits

0xd585,	// (0x0005c3f6) status_small_pane_g3

0xd591,	// (0x0005c402) status_small_pane_g4_ParamLimits

0xd591,	// (0x0005c402) status_small_pane_g4

0xd59d,	// (0x0005c40e) status_small_pane_g5_ParamLimits

0xd59d,	// (0x0005c40e) status_small_pane_g5

0xd5ab,	// (0x0005c41c) status_small_pane_g6_ParamLimits

0xd5ab,	// (0x0005c41c) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005e5ed) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005e5ed) status_small_pane_g

0xd5da,	// (0x0005c44b) status_small_pane_t1

0xd5fc,	// (0x0005c46d) status_small_wait_pane_ParamLimits

0xd5fc,	// (0x0005c46d) status_small_wait_pane

0xd434,	// (0x0005c2a5) aid_levels_signal_ParamLimits

0xd434,	// (0x0005c2a5) aid_levels_signal

0xd44c,	// (0x0005c2bd) signal_pane_g1_ParamLimits

0xd44c,	// (0x0005c2bd) signal_pane_g1

0xd467,	// (0x0005c2d8) signal_pane_g2_ParamLimits

0xd467,	// (0x0005c2d8) signal_pane_g2

0x0003,

0xf70d,	// (0x0005e57e) signal_pane_g_ParamLimits

0xf70d,	// (0x0005e57e) signal_pane_g

0x46b2,	// (0x00053523) context_pane_g1

0xcf98,	// (0x0005be09) title_pane_g1

0xcfcf,	// (0x0005be40) title_pane_t1

0x367c,	// (0x000524ed) title_pane_t2

0x36a2,	// (0x00052513) title_pane_t3

0x0002,

0xf557,	// (0x0005e3c8) title_pane_t

0xda84,	// (0x0005c8f5) aid_levels_battery_ParamLimits

0xda84,	// (0x0005c8f5) aid_levels_battery

0xdaa0,	// (0x0005c911) battery_pane_g1_ParamLimits

0xdaa0,	// (0x0005c911) battery_pane_g1

0xdabd,	// (0x0005c92e) battery_pane_g2_ParamLimits

0xdabd,	// (0x0005c92e) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005e621) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005e621) battery_pane_g

0xdc7e,	// (0x0005caef) uni_indicator_pane_g1

0xdc93,	// (0x0005cb04) uni_indicator_pane_g2

0xdca9,	// (0x0005cb1a) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005e792) uni_indicator_pane_g

0x4a5c,	// (0x000538cd) navi_icon_pane_ParamLimits

0x4a5c,	// (0x000538cd) navi_icon_pane

0x498e,	// (0x000537ff) navi_midp_pane

0x4a78,	// (0x000538e9) navi_navi_pane

0x4a82,	// (0x000538f3) navi_text_pane_ParamLimits

0x4a82,	// (0x000538f3) navi_text_pane

0x2ca4,	// (0x00051b15) status_small_wait_pane_g1

0x3af7,	// (0x00052968) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0005e78d) status_small_wait_pane_g

0x62ed,	// (0x0005515e) navi_navi_icon_text_pane

0x62f5,	// (0x00055166) navi_navi_pane_g1_ParamLimits

0x62f5,	// (0x00055166) navi_navi_pane_g1

0x6307,	// (0x00055178) navi_navi_pane_g2_ParamLimits

0x6307,	// (0x00055178) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0005e75b) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0005e75b) navi_navi_pane_g

0x6319,	// (0x0005518a) navi_navi_tabs_pane

0x6322,	// (0x00055193) navi_navi_text_pane

0x62ed,	// (0x0005515e) navi_navi_volume_pane

0x62c9,	// (0x0005513a) navi_text_pane_t1

0x62bd,	// (0x0005512e) navi_icon_pane_g1

0x6210,	// (0x00055081) navi_navi_text_pane_t1

0x1a6d,	// (0x000508de) navi_navi_volume_pane_g1

0x1a75,	// (0x000508e6) volume_small_pane

0x6176,	// (0x00054fe7) navi_navi_icon_text_pane_g1

0x617e,	// (0x00054fef) navi_navi_icon_text_pane_t1

0x4a78,	// (0x000538e9) navi_tabs_2_long_pane

0x4a78,	// (0x000538e9) navi_tabs_2_pane

0x4a78,	// (0x000538e9) navi_tabs_3_long_pane

0x4a78,	// (0x000538e9) navi_tabs_3_pane

0x4a78,	// (0x000538e9) navi_tabs_4_pane

0x1a4d,	// (0x000508be) tabs_2_active_pane_ParamLimits

0x1a4d,	// (0x000508be) tabs_2_active_pane

0x1a5d,	// (0x000508ce) tabs_2_passive_pane_ParamLimits

0x1a5d,	// (0x000508ce) tabs_2_passive_pane

0x1a1b,	// (0x0005088c) tabs_3_active_pane_ParamLimits

0x1a1b,	// (0x0005088c) tabs_3_active_pane

0x1a2b,	// (0x0005089c) tabs_3_passive_pane_ParamLimits

0x1a2b,	// (0x0005089c) tabs_3_passive_pane

0x1a3c,	// (0x000508ad) tabs_3_passive_pane_cp_ParamLimits

0x1a3c,	// (0x000508ad) tabs_3_passive_pane_cp

0x19d7,	// (0x00050848) tabs_4_active_pane_ParamLimits

0x19d7,	// (0x00050848) tabs_4_active_pane

0x19e8,	// (0x00050859) tabs_4_passive_pane_ParamLimits

0x19e8,	// (0x00050859) tabs_4_passive_pane

0x19f9,	// (0x0005086a) tabs_4_passive_pane_cp_ParamLimits

0x19f9,	// (0x0005086a) tabs_4_passive_pane_cp

0x1a0a,	// (0x0005087b) tabs_4_passive_pane_cp2_ParamLimits

0x1a0a,	// (0x0005087b) tabs_4_passive_pane_cp2

0x19b3,	// (0x00050824) tabs_2_long_active_pane_ParamLimits

0x19b3,	// (0x00050824) tabs_2_long_active_pane

0x19c5,	// (0x00050836) tabs_2_long_passive_pane_ParamLimits

0x19c5,	// (0x00050836) tabs_2_long_passive_pane

0x1974,	// (0x000507e5) tabs_3_long_active_pane_ParamLimits

0x1974,	// (0x000507e5) tabs_3_long_active_pane

0x1987,	// (0x000507f8) tabs_3_long_passive_pane_ParamLimits

0x1987,	// (0x000507f8) tabs_3_long_passive_pane

0x19a0,	// (0x00050811) tabs_3_long_passive_pane_cp_ParamLimits

0x19a0,	// (0x00050811) tabs_3_long_passive_pane_cp

0x191a,	// (0x0005078b) volume_small_pane_g1

0x1923,	// (0x00050794) volume_small_pane_g2

0x192c,	// (0x0005079d) volume_small_pane_g3

0x1935,	// (0x000507a6) volume_small_pane_g4

0x193e,	// (0x000507af) volume_small_pane_g5

0x1947,	// (0x000507b8) volume_small_pane_g6

0x1950,	// (0x000507c1) volume_small_pane_g7

0x1959,	// (0x000507ca) volume_small_pane_g8

0x1962,	// (0x000507d3) volume_small_pane_g9

0x196b,	// (0x000507dc) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0005e727) volume_small_pane_g

0x392f,	// (0x000527a0) bg_active_tab_pane_cp2_ParamLimits

0x392f,	// (0x000527a0) bg_active_tab_pane_cp2

0x36c2,	// (0x00052533) tabs_3_active_pane_g1

0xd05b,	// (0x0005becc) tabs_3_active_pane_t1

0x392f,	// (0x000527a0) bg_passive_tab_pane_cp2_ParamLimits

0x392f,	// (0x000527a0) bg_passive_tab_pane_cp2

0x36c2,	// (0x00052533) tabs_3_passive_pane_g1

0xd05b,	// (0x0005becc) tabs_3_passive_pane_t1

0x392f,	// (0x000527a0) bg_active_tab_pane_cp3_ParamLimits

0x392f,	// (0x000527a0) bg_active_tab_pane_cp3

0x36dc,	// (0x0005254d) tabs_4_active_pane_g1

0xd06d,	// (0x0005bede) tabs_4_active_pane_t1

0x392f,	// (0x000527a0) bg_passive_tab_pane_cp3_ParamLimits

0x392f,	// (0x000527a0) bg_passive_tab_pane_cp3

0x36dc,	// (0x0005254d) tabs_4_1_passive_pane_g1

0xd06d,	// (0x0005bede) tabs_4_1_passive_pane_t1

0x4f0e,	// (0x00053d7f) list_highlight_pane_cp2

0xdd2f,	// (0x0005cba0) list_set_pane_ParamLimits

0xdd2f,	// (0x0005cba0) list_set_pane

0xddc9,	// (0x0005cc3a) main_pane_set_t1_ParamLimits

0xddc9,	// (0x0005cc3a) main_pane_set_t1

0xdde9,	// (0x0005cc5a) main_pane_set_t2_ParamLimits

0xdde9,	// (0x0005cc5a) main_pane_set_t2

0xddfd,	// (0x0005cc6e) main_pane_set_t3_ParamLimits

0xddfd,	// (0x0005cc6e) main_pane_set_t3

0xde0f,	// (0x0005cc80) main_pane_set_t4_ParamLimits

0xde0f,	// (0x0005cc80) main_pane_set_t4

0x0003,

0xf986,	// (0x0005e7f7) main_pane_set_t_ParamLimits

0xf986,	// (0x0005e7f7) main_pane_set_t

0xde21,	// (0x0005cc92) setting_code_pane

0xde2b,	// (0x0005cc9c) setting_slider_graphic_pane

0xde2b,	// (0x0005cc9c) setting_slider_pane

0xde2b,	// (0x0005cc9c) setting_text_pane

0xde2b,	// (0x0005cc9c) setting_volume_pane

0x0338,	// (0x0004f1a9) volume_set_pane

0x36b4,	// (0x00052525) bg_set_opt_pane_cp

0x0340,	// (0x0004f1b1) setting_slider_pane_t1

0x0359,	// (0x0004f1ca) setting_slider_pane_t2

0x0373,	// (0x0004f1e4) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005e3cf) setting_slider_pane_t

0x038b,	// (0x0004f1fc) slider_set_pane

0x2cae,	// (0x00051b1f) bg_set_opt_pane_cp2

0x36f6,	// (0x00052567) setting_slider_graphic_pane_g1

0x03a1,	// (0x0004f212) setting_slider_graphic_pane_t1

0x03b1,	// (0x0004f222) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005e3d6) setting_slider_graphic_pane_t

0x03c1,	// (0x0004f232) slider_set_pane_cp

0x2cae,	// (0x00051b1f) input_focus_pane_cp1

0x67ef,	// (0x00055660) list_set_text_pane

0x2ca4,	// (0x00051b15) setting_text_pane_g1

0x2cae,	// (0x00051b1f) input_focus_pane_cp2

0x2ca4,	// (0x00051b15) setting_code_pane_g1

0x36ff,	// (0x00052570) setting_code_pane_t1

0x03c9,	// (0x0004f23a) set_text_pane_t1_ParamLimits

0x03c9,	// (0x0004f23a) set_text_pane_t1

0x3fa1,	// (0x00052e12) set_opt_bg_pane_g1

0x3fa9,	// (0x00052e1a) set_opt_bg_pane_g2

0x67c9,	// (0x0005563a) set_opt_bg_pane_g3

0x3fb9,	// (0x00052e2a) set_opt_bg_pane_g4

0x3fc1,	// (0x00052e32) set_opt_bg_pane_g5

0x3fc9,	// (0x00052e3a) set_opt_bg_pane_g6

0x67d3,	// (0x00055644) set_opt_bg_pane_g7

0x67db,	// (0x0005564c) set_opt_bg_pane_g8

0x67e5,	// (0x00055656) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005e7e4) set_opt_bg_pane_g

0x67bc,	// (0x0005562d) slider_set_pane_g1

0x1b0a,	// (0x0005097b) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005e7d5) slider_set_pane_g

0x1a7e,	// (0x000508ef) volume_set_pane_g1

0x1a86,	// (0x000508f7) volume_set_pane_g2

0x1a8e,	// (0x000508ff) volume_set_pane_g3

0x1a96,	// (0x00050907) volume_set_pane_g4

0x1a9e,	// (0x0005090f) volume_set_pane_g5

0x1aa6,	// (0x00050917) volume_set_pane_g6

0x1aae,	// (0x0005091f) volume_set_pane_g7

0x1ab6,	// (0x00050927) volume_set_pane_g8

0x1abe,	// (0x0005092f) volume_set_pane_g9

0x1ac6,	// (0x00050937) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0005e7ad) volume_set_pane_g

0xd07f,	// (0x0005bef0) indicator_pane_ParamLimits

0xd07f,	// (0x0005bef0) indicator_pane

0xd0a7,	// (0x0005bf18) main_idle_pane_g2_ParamLimits

0xd0a7,	// (0x0005bf18) main_idle_pane_g2

0xd0df,	// (0x0005bf50) main_pane_idle_g1_ParamLimits

0xd0df,	// (0x0005bf50) main_pane_idle_g1

0x374e,	// (0x000525bf) popup_clock_digital_analogue_window_ParamLimits

0x374e,	// (0x000525bf) popup_clock_digital_analogue_window

0xd106,	// (0x0005bf77) soft_indicator_pane_ParamLimits

0xd106,	// (0x0005bf77) soft_indicator_pane

0xd120,	// (0x0005bf91) wallpaper_pane_ParamLimits

0xd120,	// (0x0005bf91) wallpaper_pane

0x2ca4,	// (0x00051b15) wallpaper_pane_g1

0xd132,	// (0x0005bfa3) indicator_pane_g1_ParamLimits

0xd132,	// (0x0005bfa3) indicator_pane_g1

0x6b9e,	// (0x00055a0f) navi_navi_icon_text_pane_srt_g1

0x37a0,	// (0x00052611) soft_indicator_pane_t1

0x37ba,	// (0x0005262b) aid_ps_area_pane

0xd148,	// (0x0005bfb9) aid_ps_clock_pane

0x37d9,	// (0x0005264a) aid_ps_indicator_pane

0x37e5,	// (0x00052656) indicator_ps_pane_ParamLimits

0x37e5,	// (0x00052656) indicator_ps_pane

0x37f4,	// (0x00052665) power_save_pane_g1_ParamLimits

0x37f4,	// (0x00052665) power_save_pane_g1

0x3800,	// (0x00052671) power_save_pane_g2_ParamLimits

0x3800,	// (0x00052671) power_save_pane_g2

0xf4ba,	// (0x0005e32b) aid_navinavi_width_pane

0x37ba,	// (0x0005262b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005e3db) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005e3db) power_save_pane_g

0x380e,	// (0x0005267f) power_save_pane_t1_ParamLimits

0x380e,	// (0x0005267f) power_save_pane_t1

0xd148,	// (0x0005bfb9) aid_ps_clock_pane_ParamLimits

0x37d9,	// (0x0005264a) aid_ps_indicator_pane_ParamLimits

0x3820,	// (0x00052691) power_save_pane_t4_ParamLimits

0x3820,	// (0x00052691) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005e3e0) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005e3e0) power_save_pane_t

0x384a,	// (0x000526bb) power_save_t3_ParamLimits

0x384a,	// (0x000526bb) power_save_t3

0x3835,	// (0x000526a6) power_save_t2_ParamLimits

0x3835,	// (0x000526a6) power_save_t2

0x385f,	// (0x000526d0) indicator_ps_pane_g1

0xd156,	// (0x0005bfc7) ai_gene_pane_ParamLimits

0xd156,	// (0x0005bfc7) ai_gene_pane

0xd16d,	// (0x0005bfde) ai_links_pane_ParamLimits

0xd16d,	// (0x0005bfde) ai_links_pane

0xd185,	// (0x0005bff6) indicator_pane_cp1_ParamLimits

0xd185,	// (0x0005bff6) indicator_pane_cp1

0xd194,	// (0x0005c005) main_pane_idle_g1_cp_ParamLimits

0xd194,	// (0x0005c005) main_pane_idle_g1_cp

0x3898,	// (0x00052709) popup_ai_links_title_window

0xd1ac,	// (0x0005c01d) soft_indicator_pane_cp1_ParamLimits

0xd1ac,	// (0x0005c01d) soft_indicator_pane_cp1

0x65b6,	// (0x00055427) ai_links_pane_g1

0x65bf,	// (0x00055430) grid_ai_links_pane

0xdc75,	// (0x0005cae6) ai_gene_pane_1

0x65a4,	// (0x00055415) ai_gene_pane_2

0x65ad,	// (0x0005541e) list_highlight_pane_cp4

0xdc51,	// (0x0005cac2) cell_ai_link_pane_ParamLimits

0xdc51,	// (0x0005cac2) cell_ai_link_pane

0x6575,	// (0x000553e6) cell_ai_link_pane_g1

0x3af7,	// (0x00052968) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0005e788) cell_ai_link_pane_g

0x2cae,	// (0x00051b1f) grid_highlight_cp2

0x2cae,	// (0x00051b1f) bg_popup_sub_pane_cp1

0x38bb,	// (0x0005272c) popup_ai_links_title_window_t1

0x64c3,	// (0x00055334) ai_gene_pane_1_g1_ParamLimits

0x64c3,	// (0x00055334) ai_gene_pane_1_g1

0x64cf,	// (0x00055340) ai_gene_pane_1_g2_ParamLimits

0x64cf,	// (0x00055340) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0005e77e) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0005e77e) ai_gene_pane_1_g

0x64dc,	// (0x0005534d) ai_gene_pane_1_t1_ParamLimits

0x64dc,	// (0x0005534d) ai_gene_pane_1_t1

0x6510,	// (0x00055381) grid_ai_soft_ind_pane

0x64ae,	// (0x0005531f) ai_gene_pane_2_t1_ParamLimits

0x64ae,	// (0x0005531f) ai_gene_pane_2_t1

0xd1c0,	// (0x0005c031) main_pane_empty_t1_ParamLimits

0xd1c0,	// (0x0005c031) main_pane_empty_t1

0xd1d8,	// (0x0005c049) main_pane_empty_t2_ParamLimits

0xd1d8,	// (0x0005c049) main_pane_empty_t2

0xd1ed,	// (0x0005c05e) main_pane_empty_t3_ParamLimits

0xd1ed,	// (0x0005c05e) main_pane_empty_t3

0xd1ff,	// (0x0005c070) main_pane_empty_t4_ParamLimits

0xd1ff,	// (0x0005c070) main_pane_empty_t4

0xd211,	// (0x0005c082) main_pane_empty_t5_ParamLimits

0xd211,	// (0x0005c082) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005e3e5) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005e3e5) main_pane_empty_t

0x3ff2,	// (0x00052e63) bg_popup_window_pane_ParamLimits

0x3ff2,	// (0x00052e63) bg_popup_window_pane

0x621e,	// (0x0005508f) find_popup_pane_cp2_ParamLimits

0x621e,	// (0x0005508f) find_popup_pane_cp2

0x622a,	// (0x0005509b) heading_pane_ParamLimits

0x622a,	// (0x0005509b) heading_pane

0x2cae,	// (0x00051b1f) bg_popup_sub_pane

0xdbd2,	// (0x0005ca43) bg_popup_window_pane_g1_ParamLimits

0xdbd2,	// (0x0005ca43) bg_popup_window_pane_g1

0xdbe1,	// (0x0005ca52) bg_popup_window_pane_g2_ParamLimits

0xdbe1,	// (0x0005ca52) bg_popup_window_pane_g2

0xdbed,	// (0x0005ca5e) bg_popup_window_pane_g3_ParamLimits

0xdbed,	// (0x0005ca5e) bg_popup_window_pane_g3

0xdbf9,	// (0x0005ca6a) bg_popup_window_pane_g4_ParamLimits

0xdbf9,	// (0x0005ca6a) bg_popup_window_pane_g4

0xdc08,	// (0x0005ca79) bg_popup_window_pane_g5_ParamLimits

0xdc08,	// (0x0005ca79) bg_popup_window_pane_g5

0xdc18,	// (0x0005ca89) bg_popup_window_pane_g6_ParamLimits

0xdc18,	// (0x0005ca89) bg_popup_window_pane_g6

0xdc24,	// (0x0005ca95) bg_popup_window_pane_g7_ParamLimits

0xdc24,	// (0x0005ca95) bg_popup_window_pane_g7

0xdc33,	// (0x0005caa4) bg_popup_window_pane_g8_ParamLimits

0xdc33,	// (0x0005caa4) bg_popup_window_pane_g8

0xdc42,	// (0x0005cab3) bg_popup_window_pane_g9_ParamLimits

0xdc42,	// (0x0005cab3) bg_popup_window_pane_g9

0x6204,	// (0x00055075) bg_popup_window_pane_g10_ParamLimits

0x6204,	// (0x00055075) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0005e746) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0005e746) bg_popup_window_pane_g

0x612d,	// (0x00054f9e) bg_popup_heading_pane_ParamLimits

0x612d,	// (0x00054f9e) bg_popup_heading_pane

0x1bc2,	// (0x00050a33) tabs_4_passive_pane_cp_srt_ParamLimits

0x1bc2,	// (0x00050a33) tabs_4_passive_pane_cp_srt

0x1bd4,	// (0x00050a45) tabs_4_passive_pane_srt_ParamLimits

0x6141,	// (0x00054fb2) heading_pane_g2

0x1bd4,	// (0x00050a45) tabs_4_passive_pane_srt

0x54a6,	// (0x00054317) bg_passive_tab_pane_cp3_srt_ParamLimits

0x54a6,	// (0x00054317) bg_passive_tab_pane_cp3_srt

0x6149,	// (0x00054fba) heading_pane_t1_ParamLimits

0x6149,	// (0x00054fba) heading_pane_t1

0x6160,	// (0x00054fd1) heading_pane_t2_ParamLimits

0x6160,	// (0x00054fd1) heading_pane_t2

0x0001,

0xf8d0,	// (0x0005e741) heading_pane_t_ParamLimits

0xf8d0,	// (0x0005e741) heading_pane_t

0x5c5a,	// (0x00054acb) bg_popup_heading_pane_g1

0x5d09,	// (0x00054b7a) bg_popup_heading_pane_g2

0x5d13,	// (0x00054b84) bg_popup_heading_pane_g3

0x5d1d,	// (0x00054b8e) bg_popup_heading_pane_g4

0x5d27,	// (0x00054b98) bg_popup_heading_pane_g5

0x5d31,	// (0x00054ba2) bg_popup_heading_pane_g6

0x5d39,	// (0x00054baa) bg_popup_heading_pane_g7

0x5d41,	// (0x00054bb2) bg_popup_heading_pane_g8

0x5d4b,	// (0x00054bbc) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0005e6fd) bg_popup_heading_pane_g

0x5432,	// (0x000542a3) bg_popup_sub_pane_g1

0x5442,	// (0x000542b3) bg_popup_sub_pane_g2

0x543a,	// (0x000542ab) bg_popup_sub_pane_g3

0x5452,	// (0x000542c3) bg_popup_sub_pane_g4

0x544a,	// (0x000542bb) bg_popup_sub_pane_g5

0x545a,	// (0x000542cb) bg_popup_sub_pane_g6

0x5462,	// (0x000542d3) bg_popup_sub_pane_g7

0x5472,	// (0x000542e3) bg_popup_sub_pane_g8

0x546a,	// (0x000542db) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005e6d7) bg_popup_sub_pane_g

0x392f,	// (0x000527a0) bg_popup_window_pane_cp5_ParamLimits

0x392f,	// (0x000527a0) bg_popup_window_pane_cp5

0x394b,	// (0x000527bc) popup_note_window_g1_ParamLimits

0x394b,	// (0x000527bc) popup_note_window_g1

0x3957,	// (0x000527c8) popup_note_window_t1_ParamLimits

0x3957,	// (0x000527c8) popup_note_window_t1

0x396d,	// (0x000527de) popup_note_window_t2_ParamLimits

0x396d,	// (0x000527de) popup_note_window_t2

0x3983,	// (0x000527f4) popup_note_window_t3_ParamLimits

0x3983,	// (0x000527f4) popup_note_window_t3

0x3999,	// (0x0005280a) popup_note_window_t4_ParamLimits

0x3999,	// (0x0005280a) popup_note_window_t4

0x39c1,	// (0x00052832) popup_note_window_t5_ParamLimits

0x39c1,	// (0x00052832) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005e3f0) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005e3f0) popup_note_window_t

0x3a0b,	// (0x0005287c) bg_popup_window_pane_cp6_ParamLimits

0x3a0b,	// (0x0005287c) bg_popup_window_pane_cp6

0x5bd6,	// (0x00054a47) popup_note_image_window_g1_ParamLimits

0x5bd6,	// (0x00054a47) popup_note_image_window_g1

0x5be2,	// (0x00054a53) popup_note_image_window_g2_ParamLimits

0x5be2,	// (0x00054a53) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0005e6cb) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0005e6cb) popup_note_image_window_g

0x5bfb,	// (0x00054a6c) popup_note_image_window_t1_ParamLimits

0x5bfb,	// (0x00054a6c) popup_note_image_window_t1

0x5c14,	// (0x00054a85) popup_note_image_window_t2_ParamLimits

0x5c14,	// (0x00054a85) popup_note_image_window_t2

0x5c2d,	// (0x00054a9e) popup_note_image_window_t3_ParamLimits

0x5c2d,	// (0x00054a9e) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0005e6d0) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0005e6d0) popup_note_image_window_t

0x5a97,	// (0x00054908) bg_popup_window_pane_cp7_ParamLimits

0x5a97,	// (0x00054908) bg_popup_window_pane_cp7

0x5ac7,	// (0x00054938) popup_note_wait_window_g1_ParamLimits

0x5ac7,	// (0x00054938) popup_note_wait_window_g1

0x5ad3,	// (0x00054944) popup_note_wait_window_g2_ParamLimits

0x5ad3,	// (0x00054944) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0005e6b9) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0005e6b9) popup_note_wait_window_g

0x5aeb,	// (0x0005495c) popup_note_wait_window_t1_ParamLimits

0x5aeb,	// (0x0005495c) popup_note_wait_window_t1

0x5b12,	// (0x00054983) popup_note_wait_window_t2_ParamLimits

0x5b12,	// (0x00054983) popup_note_wait_window_t2

0x5b2f,	// (0x000549a0) popup_note_wait_window_t3_ParamLimits

0x5b2f,	// (0x000549a0) popup_note_wait_window_t3

0x5b42,	// (0x000549b3) popup_note_wait_window_t4_ParamLimits

0x5b42,	// (0x000549b3) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0005e6c0) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0005e6c0) popup_note_wait_window_t

0x5b67,	// (0x000549d8) wait_bar_pane_ParamLimits

0x5b67,	// (0x000549d8) wait_bar_pane

0x2cae,	// (0x00051b1f) wait_anim_pane

0x2cae,	// (0x00051b1f) wait_border_pane

0x2ca4,	// (0x00051b15) wait_anim_pane_g1

0x2ca4,	// (0x00051b15) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005e579) wait_anim_pane_g

0x5a3b,	// (0x000548ac) wait_border_pane_g1

0x5a46,	// (0x000548b7) wait_border_pane_g2

0x5a4f,	// (0x000548c0) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005e6b2) wait_border_pane_g

0x58a6,	// (0x00054717) bg_popup_window_pane_cp16_ParamLimits

0x58a6,	// (0x00054717) bg_popup_window_pane_cp16

0x59a6,	// (0x00054817) indicator_popup_pane_cp4_ParamLimits

0x59a6,	// (0x00054817) indicator_popup_pane_cp4

0x59ba,	// (0x0005482b) popup_query_data_window_t1_ParamLimits

0x59ba,	// (0x0005482b) popup_query_data_window_t1

0x59cc,	// (0x0005483d) popup_query_data_window_t2_ParamLimits

0x59cc,	// (0x0005483d) popup_query_data_window_t2

0x59e5,	// (0x00054856) popup_query_data_window_t3_ParamLimits

0x59e5,	// (0x00054856) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0005e6ab) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0005e6ab) popup_query_data_window_t

0x59ff,	// (0x00054870) query_popup_data_pane_ParamLimits

0x59ff,	// (0x00054870) query_popup_data_pane

0x5a13,	// (0x00054884) query_popup_data_pane_cp1_ParamLimits

0x5a13,	// (0x00054884) query_popup_data_pane_cp1

0x58a6,	// (0x00054717) bg_popup_window_pane_cp10_ParamLimits

0x58a6,	// (0x00054717) bg_popup_window_pane_cp10

0x58d8,	// (0x00054749) indicator_popup_pane_ParamLimits

0x58d8,	// (0x00054749) indicator_popup_pane

0x58fa,	// (0x0005476b) popup_query_code_window_t1_ParamLimits

0x58fa,	// (0x0005476b) popup_query_code_window_t1

0x5914,	// (0x00054785) popup_query_code_window_t2_ParamLimits

0x5914,	// (0x00054785) popup_query_code_window_t2

0x595d,	// (0x000547ce) popup_query_code_window_t3_ParamLimits

0x595d,	// (0x000547ce) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005e6a4) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005e6a4) popup_query_code_window_t

0x598c,	// (0x000547fd) query_popup_pane_ParamLimits

0x598c,	// (0x000547fd) query_popup_pane

0x3a0b,	// (0x0005287c) bg_popup_window_pane_cp15_ParamLimits

0x3a0b,	// (0x0005287c) bg_popup_window_pane_cp15

0x3a29,	// (0x0005289a) indicator_popup_pane_cp1_ParamLimits

0x3a29,	// (0x0005289a) indicator_popup_pane_cp1

0x3a3c,	// (0x000528ad) indicator_popup_pane_cp2_ParamLimits

0x3a3c,	// (0x000528ad) indicator_popup_pane_cp2

0x3a4f,	// (0x000528c0) popup_query_data_code_window_g1_ParamLimits

0x3a4f,	// (0x000528c0) popup_query_data_code_window_g1

0x3a62,	// (0x000528d3) popup_query_data_code_window_t1_ParamLimits

0x3a62,	// (0x000528d3) popup_query_data_code_window_t1

0x3a74,	// (0x000528e5) popup_query_data_code_window_t2_ParamLimits

0x3a74,	// (0x000528e5) popup_query_data_code_window_t2

0x3a86,	// (0x000528f7) popup_query_data_code_window_t3_ParamLimits

0x3a86,	// (0x000528f7) popup_query_data_code_window_t3

0x3a9c,	// (0x0005290d) popup_query_data_code_window_t4_ParamLimits

0x3a9c,	// (0x0005290d) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005e3fb) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005e3fb) popup_query_data_code_window_t

0x175e,	// (0x000505cf) list_single_midp_graphic_pane_g3

0x3ab4,	// (0x00052925) query_popup_data_pane_cp2_ParamLimits

0x3ac7,	// (0x00052938) query_popup_pane_cp2_ParamLimits

0x3ac7,	// (0x00052938) query_popup_pane_cp2

0x2cae,	// (0x00051b1f) bg_popup_window_pane_cp11

0x5892,	// (0x00054703) heading_pane_cp5

0x3bb2,	// (0x00052a23) listscroll_popup_info_pane

0x2cae,	// (0x00051b1f) input_focus_pane_cp3

0x3ada,	// (0x0005294b) query_popup_pane_t1

0x3ae8,	// (0x00052959) list_popup_info_pane_ParamLimits

0x3ae8,	// (0x00052959) list_popup_info_pane

0x3af7,	// (0x00052968) listscroll_popup_info_pane_g1

0x3aff,	// (0x00052970) scroll_pane_cp7

0x3b09,	// (0x0005297a) popup_info_list_pane_t1_ParamLimits

0x3b09,	// (0x0005297a) popup_info_list_pane_t1

0x3b23,	// (0x00052994) popup_info_list_pane_t2_ParamLimits

0x3b23,	// (0x00052994) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005e404) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005e404) popup_info_list_pane_t

0x2cae,	// (0x00051b1f) bg_popup_window_pane_cp12

0x6bb8,	// (0x00055a29) find_popup_pane

0x36b4,	// (0x00052525) bg_popup_window_pane_cp3

0x3b3d,	// (0x000529ae) heading_pane_cp3

0x3b49,	// (0x000529ba) listscroll_popup_graphic_pane

0x2cae,	// (0x00051b1f) bg_popup_window_pane_cp4

0xd273,	// (0x0005c0e4) heading_pane_cp4

0x3bb2,	// (0x00052a23) listscroll_popup_colour_pane

0x3bba,	// (0x00052a2b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3bba,	// (0x00052a2b) cell_large_graphic_colour_none_popup_pane

0xd27b,	// (0x0005c0ec) grid_large_graphic_colour_popup_pane_ParamLimits

0xd27b,	// (0x0005c0ec) grid_large_graphic_colour_popup_pane

0x3bfa,	// (0x00052a6b) listscroll_popup_colour_pane_g1_ParamLimits

0x3bfa,	// (0x00052a6b) listscroll_popup_colour_pane_g1

0x3c11,	// (0x00052a82) listscroll_popup_colour_pane_g2_ParamLimits

0x3c11,	// (0x00052a82) listscroll_popup_colour_pane_g2

0x3c28,	// (0x00052a99) listscroll_popup_colour_pane_g3_ParamLimits

0x3c28,	// (0x00052a99) listscroll_popup_colour_pane_g3

0xd29f,	// (0x0005c110) listscroll_popup_colour_pane_g4_ParamLimits

0xd29f,	// (0x0005c110) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005e409) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005e409) listscroll_popup_colour_pane_g

0x3c4c,	// (0x00052abd) scroll_pane_cp6_ParamLimits

0x3c4c,	// (0x00052abd) scroll_pane_cp6

0xd2af,	// (0x0005c120) cell_large_graphic_colour_popup_pane_ParamLimits

0xd2af,	// (0x0005c120) cell_large_graphic_colour_popup_pane

0x3c7d,	// (0x00052aee) cell_large_graphic_colour_none_popup_pane_t1

0x2cae,	// (0x00051b1f) grid_highlight_pane_cp5

0x3c8c,	// (0x00052afd) cell_large_graphic_colour_popup_pane_g1

0x3c94,	// (0x00052b05) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005e412) cell_large_graphic_colour_popup_pane_g

0x3c9c,	// (0x00052b0d) cell_large_graphic_colour_popup_pane_g2_copy1

0x3ca5,	// (0x00052b16) grid_highlight_pane_cp4

0x3cad,	// (0x00052b1e) bg_popup_window_pane_cp8_ParamLimits

0x3cad,	// (0x00052b1e) bg_popup_window_pane_cp8

0x3cc8,	// (0x00052b39) popup_snote_single_text_window_g1_ParamLimits

0x3cc8,	// (0x00052b39) popup_snote_single_text_window_g1

0x3cda,	// (0x00052b4b) popup_snote_single_text_window_t1_ParamLimits

0x3cda,	// (0x00052b4b) popup_snote_single_text_window_t1

0x3ced,	// (0x00052b5e) popup_snote_single_text_window_t2_ParamLimits

0x3ced,	// (0x00052b5e) popup_snote_single_text_window_t2

0x3d00,	// (0x00052b71) popup_snote_single_text_window_t3_ParamLimits

0x3d00,	// (0x00052b71) popup_snote_single_text_window_t3

0x3d39,	// (0x00052baa) popup_snote_single_text_window_t4_ParamLimits

0x3d39,	// (0x00052baa) popup_snote_single_text_window_t4

0x3d6d,	// (0x00052bde) popup_snote_single_text_window_t5_ParamLimits

0x3d6d,	// (0x00052bde) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005e417) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005e417) popup_snote_single_text_window_t

0x3d9c,	// (0x00052c0d) bg_popup_window_pane_cp9_ParamLimits

0x3d9c,	// (0x00052c0d) bg_popup_window_pane_cp9

0x3cc8,	// (0x00052b39) popup_snote_single_graphic_window_g1_ParamLimits

0x3cc8,	// (0x00052b39) popup_snote_single_graphic_window_g1

0x3daa,	// (0x00052c1b) popup_snote_single_graphic_window_g2_ParamLimits

0x3daa,	// (0x00052c1b) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005e422) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005e422) popup_snote_single_graphic_window_g

0x3db6,	// (0x00052c27) popup_snote_single_graphic_window_t1_ParamLimits

0x3db6,	// (0x00052c27) popup_snote_single_graphic_window_t1

0x3dc9,	// (0x00052c3a) popup_snote_single_graphic_window_t2_ParamLimits

0x3dc9,	// (0x00052c3a) popup_snote_single_graphic_window_t2

0x3ddc,	// (0x00052c4d) popup_snote_single_graphic_window_t3_ParamLimits

0x3ddc,	// (0x00052c4d) popup_snote_single_graphic_window_t3

0x3e15,	// (0x00052c86) popup_snote_single_graphic_window_t4_ParamLimits

0x3e15,	// (0x00052c86) popup_snote_single_graphic_window_t4

0x3e49,	// (0x00052cba) popup_snote_single_graphic_window_t5_ParamLimits

0x3e49,	// (0x00052cba) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005e427) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005e427) popup_snote_single_graphic_window_t

0x6afa,	// (0x0005596b) grid_graphic_popup_pane_ParamLimits

0x6afa,	// (0x0005596b) grid_graphic_popup_pane

0x6b24,	// (0x00055995) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b24,	// (0x00055995) listscroll_popup_graphic_pane_g1

0xdf3a,	// (0x0005cdab) listscroll_popup_graphic_pane_g2_ParamLimits

0xdf3a,	// (0x0005cdab) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0005e821) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0005e821) listscroll_popup_graphic_pane_g

0x6b4c,	// (0x000559bd) scroll_pane_cp5

0xdedf,	// (0x0005cd50) cell_graphic_popup_pane_ParamLimits

0xdedf,	// (0x0005cd50) cell_graphic_popup_pane

0x6a7a,	// (0x000558eb) cell_graphic_popup_pane_g1

0x6a82,	// (0x000558f3) cell_graphic_popup_pane_g2

0x3c9c,	// (0x00052b0d) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0005e81a) cell_graphic_popup_pane_g

0x6a8b,	// (0x000558fc) cell_graphic_popup_pane_t2

0x3ca5,	// (0x00052b16) grid_highlight_pane_cp3

0x3e8a,	// (0x00052cfb) list_gen_pane_ParamLimits

0x3e8a,	// (0x00052cfb) list_gen_pane

0x3ebc,	// (0x00052d2d) scroll_pane

0xde96,	// (0x0005cd07) bg_list_pane_g1_ParamLimits

0xde96,	// (0x0005cd07) bg_list_pane_g1

0x69ef,	// (0x00055860) bg_list_pane_g2_ParamLimits

0x69ef,	// (0x00055860) bg_list_pane_g2

0x6a04,	// (0x00055875) bg_list_pane_g3_ParamLimits

0x6a04,	// (0x00055875) bg_list_pane_g3

0x6a18,	// (0x00055889) bg_list_pane_g4_ParamLimits

0x6a18,	// (0x00055889) bg_list_pane_g4

0xdeb3,	// (0x0005cd24) bg_list_pane_g5_ParamLimits

0xdeb3,	// (0x0005cd24) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0005e80f) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0005e80f) bg_list_pane_g

0xde5e,	// (0x0005cccf) list_double2_graphic_large_graphic_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double2_graphic_large_graphic_pane

0xde5e,	// (0x0005cccf) list_double2_graphic_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double2_graphic_pane

0xde5e,	// (0x0005cccf) list_double2_large_graphic_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double2_large_graphic_pane

0xde5e,	// (0x0005cccf) list_double2_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double2_pane

0xde5e,	// (0x0005cccf) list_double_graphic_heading_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double_graphic_heading_pane

0xde5e,	// (0x0005cccf) list_double_graphic_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double_graphic_pane

0xde5e,	// (0x0005cccf) list_double_heading_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double_heading_pane

0xde5e,	// (0x0005cccf) list_double_large_graphic_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double_large_graphic_pane

0xde5e,	// (0x0005cccf) list_double_number_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double_number_pane

0xde5e,	// (0x0005cccf) list_double_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double_pane

0xde5e,	// (0x0005cccf) list_double_time_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_double_time_pane

0xde5e,	// (0x0005cccf) list_setting_number_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_setting_number_pane

0xde5e,	// (0x0005cccf) list_setting_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_setting_pane

0xde70,	// (0x0005cce1) list_single_2graphic_pane_ParamLimits

0xde70,	// (0x0005cce1) list_single_2graphic_pane

0xde70,	// (0x0005cce1) list_single_graphic_heading_pane_ParamLimits

0xde70,	// (0x0005cce1) list_single_graphic_heading_pane

0xde70,	// (0x0005cce1) list_single_graphic_pane_ParamLimits

0xde70,	// (0x0005cce1) list_single_graphic_pane

0xde70,	// (0x0005cce1) list_single_heading_pane_ParamLimits

0xde70,	// (0x0005cce1) list_single_heading_pane

0xde5e,	// (0x0005cccf) list_single_large_graphic_pane_ParamLimits

0xde5e,	// (0x0005cccf) list_single_large_graphic_pane

0xde70,	// (0x0005cce1) list_single_number_heading_pane_ParamLimits

0xde70,	// (0x0005cce1) list_single_number_heading_pane

0xde70,	// (0x0005cce1) list_single_number_pane_ParamLimits

0xde70,	// (0x0005cce1) list_single_number_pane

0xde70,	// (0x0005cce1) list_single_pane_ParamLimits

0xde70,	// (0x0005cce1) list_single_pane

0x2cae,	// (0x00051b1f) list_highlight_pane_cp1

0x4b23,	// (0x00053994) list_single_pane_g1_ParamLimits

0x4b23,	// (0x00053994) list_single_pane_g1

0x2e26,	// (0x00051c97) list_single_pane_g2_ParamLimits

0x2e26,	// (0x00051c97) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005e443) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005e443) list_single_pane_g

0x3014,	// (0x00051e85) list_single_pane_t1_ParamLimits

0x3014,	// (0x00051e85) list_single_pane_t1

0x4b23,	// (0x00053994) list_single_number_pane_g1_ParamLimits

0x4b23,	// (0x00053994) list_single_number_pane_g1

0x2e26,	// (0x00051c97) list_single_number_pane_g2_ParamLimits

0x2e26,	// (0x00051c97) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005e443) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005e443) list_single_number_pane_g

0x1723,	// (0x00050594) list_single_number_pane_t1_ParamLimits

0x1723,	// (0x00050594) list_single_number_pane_t1

0xc7ff,	// (0x0005b670) list_single_number_pane_t2_ParamLimits

0xc7ff,	// (0x0005b670) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0005e7d0) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0005e7d0) list_single_number_pane_t

0xb8a8,	// (0x0005a719) list_single_graphic_pane_g1_ParamLimits

0xb8a8,	// (0x0005a719) list_single_graphic_pane_g1

0x4b23,	// (0x00053994) list_single_graphic_pane_g2_ParamLimits

0x4b23,	// (0x00053994) list_single_graphic_pane_g2

0x2e26,	// (0x00051c97) list_single_graphic_pane_g3_ParamLimits

0x2e26,	// (0x00051c97) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005e432) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005e432) list_single_graphic_pane_g

0xb8b4,	// (0x0005a725) list_single_graphic_pane_t1_ParamLimits

0xb8b4,	// (0x0005a725) list_single_graphic_pane_t1

0xb8ca,	// (0x0005a73b) list_single_heading_pane_g1_ParamLimits

0xb8ca,	// (0x0005a73b) list_single_heading_pane_g1

0x2e26,	// (0x00051c97) list_single_heading_pane_g2_ParamLimits

0x2e26,	// (0x00051c97) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005e439) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005e439) list_single_heading_pane_g

0xb8dd,	// (0x0005a74e) list_single_heading_pane_t1_ParamLimits

0xb8dd,	// (0x0005a74e) list_single_heading_pane_t1

0xb8f3,	// (0x0005a764) list_single_heading_pane_t2_ParamLimits

0xb8f3,	// (0x0005a764) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005e43e) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005e43e) list_single_heading_pane_t

0x4b23,	// (0x00053994) list_single_number_heading_pane_g1_ParamLimits

0x4b23,	// (0x00053994) list_single_number_heading_pane_g1

0x2e26,	// (0x00051c97) list_single_number_heading_pane_g2_ParamLimits

0x2e26,	// (0x00051c97) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005e443) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005e443) list_single_number_heading_pane_g

0xb905,	// (0x0005a776) list_single_number_heading_pane_t1_ParamLimits

0xb905,	// (0x0005a776) list_single_number_heading_pane_t1

0x2fde,	// (0x00051e4f) list_single_number_heading_pane_t2_ParamLimits

0x2fde,	// (0x00051e4f) list_single_number_heading_pane_t2

0x2ff0,	// (0x00051e61) list_single_number_heading_pane_t3_ParamLimits

0x2ff0,	// (0x00051e61) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005e448) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005e448) list_single_number_heading_pane_t

0xb91b,	// (0x0005a78c) list_single_graphic_heading_pane_g1_ParamLimits

0xb91b,	// (0x0005a78c) list_single_graphic_heading_pane_g1

0xb933,	// (0x0005a7a4) list_single_graphic_heading_pane_g4_ParamLimits

0xb933,	// (0x0005a7a4) list_single_graphic_heading_pane_g4

0x2e26,	// (0x00051c97) list_single_graphic_heading_pane_g5_ParamLimits

0x2e26,	// (0x00051c97) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005e44f) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005e44f) list_single_graphic_heading_pane_g

0xb905,	// (0x0005a776) list_single_graphic_heading_pane_t1_ParamLimits

0xb905,	// (0x0005a776) list_single_graphic_heading_pane_t1

0xb944,	// (0x0005a7b5) list_single_graphic_heading_pane_t2_ParamLimits

0xb944,	// (0x0005a7b5) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005e456) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005e456) list_single_graphic_heading_pane_t

0x302a,	// (0x00051e9b) list_single_large_graphic_pane_g1_ParamLimits

0x302a,	// (0x00051e9b) list_single_large_graphic_pane_g1

0x3036,	// (0x00051ea7) list_single_large_graphic_pane_g2_ParamLimits

0x3036,	// (0x00051ea7) list_single_large_graphic_pane_g2

0x3042,	// (0x00051eb3) list_single_large_graphic_pane_g3_ParamLimits

0x3042,	// (0x00051eb3) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005e45b) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005e45b) list_single_large_graphic_pane_g

0x5a46,	// (0x000548b7) wait_border_pane_g2_copy1

0x2db5,	// (0x00051c26) list_single_large_graphic_pane_g4_cp2

0x304e,	// (0x00051ebf) list_single_large_graphic_pane_t1_ParamLimits

0x304e,	// (0x00051ebf) list_single_large_graphic_pane_t1

0x4a02,	// (0x00053873) list_double_pane_g1_ParamLimits

0x4a02,	// (0x00053873) list_double_pane_g1

0xb95a,	// (0x0005a7cb) list_double_pane_g2_ParamLimits

0xb95a,	// (0x0005a7cb) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005e462) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005e462) list_double_pane_g

0xb966,	// (0x0005a7d7) list_double_pane_t1_ParamLimits

0xb966,	// (0x0005a7d7) list_double_pane_t1

0xb97c,	// (0x0005a7ed) list_double_pane_t2_ParamLimits

0xb97c,	// (0x0005a7ed) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005e467) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005e467) list_double_pane_t

0xb98e,	// (0x0005a7ff) list_double2_pane_g1_ParamLimits

0xb98e,	// (0x0005a7ff) list_double2_pane_g1

0xb99f,	// (0x0005a810) list_double2_pane_g2_ParamLimits

0xb99f,	// (0x0005a810) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005e46c) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005e46c) list_double2_pane_g

0xb9ab,	// (0x0005a81c) list_double2_pane_t1_ParamLimits

0xb9ab,	// (0x0005a81c) list_double2_pane_t1

0xb9c1,	// (0x0005a832) list_double2_pane_t2_ParamLimits

0xb9c1,	// (0x0005a832) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005e471) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005e471) list_double2_pane_t

0x4a02,	// (0x00053873) list_double_number_pane_g1_ParamLimits

0x4a02,	// (0x00053873) list_double_number_pane_g1

0xb95a,	// (0x0005a7cb) list_double_number_pane_g2_ParamLimits

0xb95a,	// (0x0005a7cb) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005e462) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005e462) list_double_number_pane_g

0xb9d3,	// (0x0005a844) list_double_number_pane_t1_ParamLimits

0xb9d3,	// (0x0005a844) list_double_number_pane_t1

0xb9e5,	// (0x0005a856) list_double_number_pane_t2_ParamLimits

0xb9e5,	// (0x0005a856) list_double_number_pane_t2

0xb9fb,	// (0x0005a86c) list_double_number_pane_t3_ParamLimits

0xb9fb,	// (0x0005a86c) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005e476) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005e476) list_double_number_pane_t

0xba0d,	// (0x0005a87e) list_double_graphic_pane_g1_ParamLimits

0xba0d,	// (0x0005a87e) list_double_graphic_pane_g1

0xba19,	// (0x0005a88a) list_double_graphic_pane_g2_ParamLimits

0xba19,	// (0x0005a88a) list_double_graphic_pane_g2

0xba28,	// (0x0005a899) list_double_graphic_pane_g3_ParamLimits

0xba28,	// (0x0005a899) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005e47d) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005e47d) list_double_graphic_pane_g

0xba40,	// (0x0005a8b1) list_double_graphic_pane_t1_ParamLimits

0xba40,	// (0x0005a8b1) list_double_graphic_pane_t1

0xba56,	// (0x0005a8c7) list_double_graphic_pane_t2_ParamLimits

0xba56,	// (0x0005a8c7) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005e486) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005e486) list_double_graphic_pane_t

0xba68,	// (0x0005a8d9) list_double2_graphic_pane_g1_ParamLimits

0xba68,	// (0x0005a8d9) list_double2_graphic_pane_g1

0xba74,	// (0x0005a8e5) list_double2_graphic_pane_g2_ParamLimits

0xba74,	// (0x0005a8e5) list_double2_graphic_pane_g2

0xba80,	// (0x0005a8f1) list_double2_graphic_pane_g3_ParamLimits

0xba80,	// (0x0005a8f1) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005e48b) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005e48b) list_double2_graphic_pane_g

0xba8c,	// (0x0005a8fd) list_double2_graphic_pane_t1_ParamLimits

0xba8c,	// (0x0005a8fd) list_double2_graphic_pane_t1

0xbaa2,	// (0x0005a913) list_double2_graphic_pane_t2_ParamLimits

0xbaa2,	// (0x0005a913) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005e492) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005e492) list_double2_graphic_pane_t

0xbab4,	// (0x0005a925) list_double_large_graphic_pane_g1_ParamLimits

0xbab4,	// (0x0005a925) list_double_large_graphic_pane_g1

0xbad3,	// (0x0005a944) list_double_large_graphic_pane_g2_ParamLimits

0xbad3,	// (0x0005a944) list_double_large_graphic_pane_g2

0xb95a,	// (0x0005a7cb) list_double_large_graphic_pane_g3_ParamLimits

0xb95a,	// (0x0005a7cb) list_double_large_graphic_pane_g3

0xbae9,	// (0x0005a95a) list_double_large_graphic_pane_g4_ParamLimits

0xbae9,	// (0x0005a95a) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005e497) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005e497) list_double_large_graphic_pane_g

0xbafb,	// (0x0005a96c) list_double_large_graphic_pane_t1_ParamLimits

0xbafb,	// (0x0005a96c) list_double_large_graphic_pane_t1

0xbb14,	// (0x0005a985) list_double_large_graphic_pane_t2_ParamLimits

0xbb14,	// (0x0005a985) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005e4a2) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005e4a2) list_double_large_graphic_pane_t

0xbb26,	// (0x0005a997) list_double2_large_graphic_pane_g1_ParamLimits

0xbb26,	// (0x0005a997) list_double2_large_graphic_pane_g1

0xbb32,	// (0x0005a9a3) list_double2_large_graphic_pane_g2_ParamLimits

0xbb32,	// (0x0005a9a3) list_double2_large_graphic_pane_g2

0xba80,	// (0x0005a8f1) list_double2_large_graphic_pane_g3_ParamLimits

0xba80,	// (0x0005a8f1) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005e4a7) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005e4a7) list_double2_large_graphic_pane_g

0xbb43,	// (0x0005a9b4) list_double2_large_graphic_pane_t1_ParamLimits

0xbb43,	// (0x0005a9b4) list_double2_large_graphic_pane_t1

0xbb59,	// (0x0005a9ca) list_double2_large_graphic_pane_t2_ParamLimits

0xbb59,	// (0x0005a9ca) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005e4ae) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005e4ae) list_double2_large_graphic_pane_t

0xbb6b,	// (0x0005a9dc) list_double_heading_pane_g1_ParamLimits

0xbb6b,	// (0x0005a9dc) list_double_heading_pane_g1

0xbb7c,	// (0x0005a9ed) list_double_heading_pane_g2_ParamLimits

0xbb7c,	// (0x0005a9ed) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005e4b3) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005e4b3) list_double_heading_pane_g

0xbb88,	// (0x0005a9f9) list_double_heading_pane_t1_ParamLimits

0xbb88,	// (0x0005a9f9) list_double_heading_pane_t1

0xb9c1,	// (0x0005a832) list_double_heading_pane_t2_ParamLimits

0xb9c1,	// (0x0005a832) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005e4b8) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005e4b8) list_double_heading_pane_t

0xbb9e,	// (0x0005aa0f) list_double_graphic_heading_pane_g1_ParamLimits

0xbb9e,	// (0x0005aa0f) list_double_graphic_heading_pane_g1

0xbb6b,	// (0x0005a9dc) list_double_graphic_heading_pane_g2_ParamLimits

0xbb6b,	// (0x0005a9dc) list_double_graphic_heading_pane_g2

0xbb7c,	// (0x0005a9ed) list_double_graphic_heading_pane_g3_ParamLimits

0xbb7c,	// (0x0005a9ed) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005e4bd) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005e4bd) list_double_graphic_heading_pane_g

0xbbaa,	// (0x0005aa1b) list_double_graphic_heading_pane_t1_ParamLimits

0xbbaa,	// (0x0005aa1b) list_double_graphic_heading_pane_t1

0xbaa2,	// (0x0005a913) list_double_graphic_heading_pane_t2_ParamLimits

0xbaa2,	// (0x0005a913) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005e4c4) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005e4c4) list_double_graphic_heading_pane_t

0xbbc0,	// (0x0005aa31) list_double_time_pane_g1_ParamLimits

0xbbc0,	// (0x0005aa31) list_double_time_pane_g1

0xbbd1,	// (0x0005aa42) list_double_time_pane_g2_ParamLimits

0xbbd1,	// (0x0005aa42) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005e4c9) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005e4c9) list_double_time_pane_g

0xbbdd,	// (0x0005aa4e) list_double_time_pane_t1_ParamLimits

0xbbdd,	// (0x0005aa4e) list_double_time_pane_t1

0xbbf3,	// (0x0005aa64) list_double_time_pane_t2_ParamLimits

0xbbf3,	// (0x0005aa64) list_double_time_pane_t2

0xbc05,	// (0x0005aa76) list_double_time_pane_t3_ParamLimits

0xbc05,	// (0x0005aa76) list_double_time_pane_t3

0xbc17,	// (0x0005aa88) list_double_time_pane_t4_ParamLimits

0xbc17,	// (0x0005aa88) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005e4ce) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005e4ce) list_double_time_pane_t

0xbc29,	// (0x0005aa9a) list_setting_pane_g1_ParamLimits

0xbc29,	// (0x0005aa9a) list_setting_pane_g1

0xb99f,	// (0x0005a810) list_setting_pane_g2_ParamLimits

0xb99f,	// (0x0005a810) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005e4d7) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005e4d7) list_setting_pane_g

0xbc35,	// (0x0005aaa6) list_setting_pane_t1_ParamLimits

0xbc35,	// (0x0005aaa6) list_setting_pane_t1

0xbc4f,	// (0x0005aac0) list_setting_pane_t2_ParamLimits

0xbc4f,	// (0x0005aac0) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005e4dc) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005e4dc) list_setting_pane_t

0xbc8e,	// (0x0005aaff) set_value_pane_cp_ParamLimits

0xbc8e,	// (0x0005aaff) set_value_pane_cp

0xbc9a,	// (0x0005ab0b) list_setting_number_pane_g1_ParamLimits

0xbc9a,	// (0x0005ab0b) list_setting_number_pane_g1

0xbca6,	// (0x0005ab17) list_setting_number_pane_g2_ParamLimits

0xbca6,	// (0x0005ab17) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005e4e3) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005e4e3) list_setting_number_pane_g

0xbcb2,	// (0x0005ab23) list_setting_number_pane_t1_ParamLimits

0xbcb2,	// (0x0005ab23) list_setting_number_pane_t1

0xbccb,	// (0x0005ab3c) list_setting_number_pane_t2_ParamLimits

0xbccb,	// (0x0005ab3c) list_setting_number_pane_t2

0xbce5,	// (0x0005ab56) list_setting_number_pane_t3_ParamLimits

0xbce5,	// (0x0005ab56) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005e4e8) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005e4e8) list_setting_number_pane_t

0xbc8e,	// (0x0005aaff) set_value_pane_ParamLimits

0xbc8e,	// (0x0005aaff) set_value_pane

0x3efc,	// (0x00052d6d) bg_set_opt_pane_ParamLimits

0x3efc,	// (0x00052d6d) bg_set_opt_pane

0x083c,	// (0x0004f6ad) set_value_pane_t1

0x3f1d,	// (0x00052d8e) slider_set_pane_cp3

0x3f26,	// (0x00052d97) volume_small_pane_cp

0x3f2f,	// (0x00052da0) list_form_gen_pane

0x3f38,	// (0x00052da9) scroll_pane_cp8

0xbd28,	// (0x0005ab99) form_field_data_pane_ParamLimits

0xbd28,	// (0x0005ab99) form_field_data_pane

0xbd3f,	// (0x0005abb0) form_field_data_wide_pane_ParamLimits

0xbd3f,	// (0x0005abb0) form_field_data_wide_pane

0xbd5f,	// (0x0005abd0) form_field_popup_pane_ParamLimits

0xbd5f,	// (0x0005abd0) form_field_popup_pane

0xbd77,	// (0x0005abe8) form_field_popup_wide_pane_ParamLimits

0xbd77,	// (0x0005abe8) form_field_popup_wide_pane

0x08d8,	// (0x0004f749) form_field_slider_pane_ParamLimits

0x08d8,	// (0x0004f749) form_field_slider_pane

0x08eb,	// (0x0004f75c) form_field_slider_wide_pane_ParamLimits

0x08eb,	// (0x0004f75c) form_field_slider_wide_pane

0x3f49,	// (0x00052dba) data_form_pane

0xbd98,	// (0x0005ac09) form_field_data_pane_t1

0x3f55,	// (0x00052dc6) input_focus_pane

0x0920,	// (0x0004f791) data_form_wide_pane

0x093d,	// (0x0004f7ae) form_field_data_wide_pane_t1

0x3cba,	// (0x00052b2b) input_focus_pane_cp6

0xbdb2,	// (0x0005ac23) form_field_popup_pane_t1

0x3f55,	// (0x00052dc6) input_focus_pane_cp7

0x3f77,	// (0x00052de8) list_form_pane

0x097f,	// (0x0004f7f0) form_field_popup_wide_pane_t1

0x3f55,	// (0x00052dc6) input_focus_pane_cp8

0x3f83,	// (0x00052df4) list_form_wide_pane

0xbdd4,	// (0x0005ac45) form_field_slider_pane_t1_ParamLimits

0xbdd4,	// (0x0005ac45) form_field_slider_pane_t1

0xbdec,	// (0x0005ac5d) form_field_slider_pane_t2_ParamLimits

0xbdec,	// (0x0005ac5d) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005e4f8) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005e4f8) form_field_slider_pane_t

0x392f,	// (0x000527a0) input_focus_pane_cp9_ParamLimits

0x392f,	// (0x000527a0) input_focus_pane_cp9

0xbe01,	// (0x0005ac72) slider_cont_pane_ParamLimits

0xbe01,	// (0x0005ac72) slider_cont_pane

0x3f8f,	// (0x00052e00) form_field_slider_wide_pane_t1_ParamLimits

0x3f8f,	// (0x00052e00) form_field_slider_wide_pane_t1

0x09db,	// (0x0004f84c) form_field_slider_wide_pane_t2_ParamLimits

0x09db,	// (0x0004f84c) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005e4fd) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005e4fd) form_field_slider_wide_pane_t

0x392f,	// (0x000527a0) input_focus_pane_cp10_ParamLimits

0x392f,	// (0x000527a0) input_focus_pane_cp10

0xbe15,	// (0x0005ac86) slider_cont_pane_cp1_ParamLimits

0xbe15,	// (0x0005ac86) slider_cont_pane_cp1

0xbe29,	// (0x0005ac9a) slider_form_pane_cp

0x3fa1,	// (0x00052e12) input_focus_pane_g1

0x3fa9,	// (0x00052e1a) input_focus_pane_g2

0x3fb1,	// (0x00052e22) input_focus_pane_g3

0x3fb9,	// (0x00052e2a) input_focus_pane_g4

0x3fc1,	// (0x00052e32) input_focus_pane_g5

0x3fc9,	// (0x00052e3a) input_focus_pane_g6

0x3fd1,	// (0x00052e42) input_focus_pane_g7

0x3fd9,	// (0x00052e4a) input_focus_pane_g8

0x3fe1,	// (0x00052e52) input_focus_pane_g9

0x2ca4,	// (0x00051b15) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005e502) input_focus_pane_g

0x5a4f,	// (0x000548c0) wait_border_pane_g3_copy1

0xbe31,	// (0x0005aca2) data_form_pane_t1

0x2ca4,	// (0x00051b15) wait_anim_pane_g1_copy1

0xc811,	// (0x0005b682) data_form_wide_pane_t1

0xbe4a,	// (0x0005acbb) list_form_graphic_pane_cp_ParamLimits

0xbe4a,	// (0x0005acbb) list_form_graphic_pane_cp

0x6964,	// (0x000557d5) slider_form_pane_g1

0x696d,	// (0x000557de) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0005e800) slider_form_pane_g

0xbe5b,	// (0x0005accc) list_form_graphic_pane_ParamLimits

0xbe5b,	// (0x0005accc) list_form_graphic_pane

0x0a59,	// (0x0004f8ca) list_form_graphic_pane_g1

0x0a61,	// (0x0004f8d2) list_form_graphic_pane_t1_ParamLimits

0x0a61,	// (0x0004f8d2) list_form_graphic_pane_t1

0x36b4,	// (0x00052525) list_highlight_pane_cp5_ParamLimits

0x36b4,	// (0x00052525) list_highlight_pane_cp5

0xbe6d,	// (0x0005acde) find_pane_g1

0x3fe9,	// (0x00052e5a) input_find_pane

0xbe76,	// (0x0005ace7) input_find_pane_g1_ParamLimits

0xbe76,	// (0x0005ace7) input_find_pane_g1

0xbe82,	// (0x0005acf3) input_find_pane_t1_ParamLimits

0xbe82,	// (0x0005acf3) input_find_pane_t1

0xbe97,	// (0x0005ad08) input_find_pane_t2_ParamLimits

0xbe97,	// (0x0005ad08) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005e517) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005e517) input_find_pane_t

0x3ff2,	// (0x00052e63) input_focus_pane_cp5_ParamLimits

0x3ff2,	// (0x00052e63) input_focus_pane_cp5

0x400c,	// (0x00052e7d) bg_popup_window_pane_cp2_ParamLimits

0x400c,	// (0x00052e7d) bg_popup_window_pane_cp2

0x4019,	// (0x00052e8a) listscroll_menu_pane_ParamLimits

0x4019,	// (0x00052e8a) listscroll_menu_pane

0xd2e4,	// (0x0005c155) popup_submenu_window_ParamLimits

0xd2e4,	// (0x0005c155) popup_submenu_window

0x4051,	// (0x00052ec2) find_popup_pane_g1

0x4059,	// (0x00052eca) input_popup_find_pane_cp

0x3ff2,	// (0x00052e63) input_focus_pane_cp4_ParamLimits

0x3ff2,	// (0x00052e63) input_focus_pane_cp4

0x406f,	// (0x00052ee0) input_popup_find_pane_t1_ParamLimits

0x406f,	// (0x00052ee0) input_popup_find_pane_t1

0x2cae,	// (0x00051b1f) bg_popup_sub_pane_cp

0x409d,	// (0x00052f0e) listscroll_popup_sub_pane

0x40a5,	// (0x00052f16) list_submenu_pane_ParamLimits

0x40a5,	// (0x00052f16) list_submenu_pane

0x40b6,	// (0x00052f27) scroll_pane_cp4

0x40be,	// (0x00052f2f) list_single_popup_submenu_pane_ParamLimits

0x40be,	// (0x00052f2f) list_single_popup_submenu_pane

0x40d2,	// (0x00052f43) list_single_popup_submenu_pane_g1

0x40da,	// (0x00052f4b) list_single_popup_submenu_pane_t1_ParamLimits

0x40da,	// (0x00052f4b) list_single_popup_submenu_pane_t1

0x392f,	// (0x000527a0) bg_active_tab_pane_cp1_ParamLimits

0x392f,	// (0x000527a0) bg_active_tab_pane_cp1

0x40ef,	// (0x00052f60) tabs_2_active_pane_g1

0xd31e,	// (0x0005c18f) tabs_2_active_pane_t1

0x392f,	// (0x000527a0) bg_passive_tab_pane_cp1_ParamLimits

0x392f,	// (0x000527a0) bg_passive_tab_pane_cp1

0x40ef,	// (0x00052f60) tabs_2_passive_pane_g1

0xd31e,	// (0x0005c18f) tabs_2_passive_pane_t1

0x36b4,	// (0x00052525) bg_active_tab_pane_cp4

0xd330,	// (0x0005c1a1) tabs_2_long_active_pane_t1

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp4

0x1766,	// (0x000505d7) list_single_midp_graphic_pane_g4_ParamLimits

0x36b4,	// (0x00052525) bg_active_tab_pane_cp5

0xd343,	// (0x0005c1b4) tabs_3_long_active_pane_t1

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp5

0x1766,	// (0x000505d7) list_single_midp_graphic_pane_g4

0x36b4,	// (0x00052525) bg_popup_window_pane_cp13_ParamLimits

0x36b4,	// (0x00052525) bg_popup_window_pane_cp13

0x4151,	// (0x00052fc2) listscroll_popup_fast_pane_ParamLimits

0x4151,	// (0x00052fc2) listscroll_popup_fast_pane

0x4160,	// (0x00052fd1) grid_popup_fast_pane_ParamLimits

0x4160,	// (0x00052fd1) grid_popup_fast_pane

0x4172,	// (0x00052fe3) scroll_pane_cp9_ParamLimits

0x4172,	// (0x00052fe3) scroll_pane_cp9

0x820e,	// (0x0005707f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x820e,	// (0x0005707f) list_single_graphic_hl_pane_t1_cp2

0x4196,	// (0x00053007) input_focus_pane_cp20_ParamLimits

0x4196,	// (0x00053007) input_focus_pane_cp20

0x41a4,	// (0x00053015) query_popup_data_pane_t1_ParamLimits

0x41a4,	// (0x00053015) query_popup_data_pane_t1

0x41b7,	// (0x00053028) query_popup_data_pane_t2_ParamLimits

0x41b7,	// (0x00053028) query_popup_data_pane_t2

0x41fd,	// (0x0005306e) query_popup_data_pane_t3_ParamLimits

0x41fd,	// (0x0005306e) query_popup_data_pane_t3

0x423e,	// (0x000530af) query_popup_data_pane_t4_ParamLimits

0x423e,	// (0x000530af) query_popup_data_pane_t4

0x427a,	// (0x000530eb) query_popup_data_pane_t5_ParamLimits

0x427a,	// (0x000530eb) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005e51c) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005e51c) query_popup_data_pane_t

0x3fa1,	// (0x00052e12) bg_set_opt_pane_g1

0x3fa9,	// (0x00052e1a) bg_set_opt_pane_g2

0x3fb1,	// (0x00052e22) bg_set_opt_pane_g3

0x3fb9,	// (0x00052e2a) bg_set_opt_pane_g4

0x3fc1,	// (0x00052e32) bg_set_opt_pane_g5

0x3fc9,	// (0x00052e3a) bg_set_opt_pane_g6

0x3fd1,	// (0x00052e42) bg_set_opt_pane_g7

0x3fd9,	// (0x00052e4a) bg_set_opt_pane_g8

0x3fe1,	// (0x00052e52) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005e527) bg_set_opt_pane_g

0x0dc0,	// (0x0004fc31) control_top_pane_stacon_ParamLimits

0x0dc0,	// (0x0004fc31) control_top_pane_stacon

0x0e13,	// (0x0004fc84) signal_pane_stacon_ParamLimits

0x0e13,	// (0x0004fc84) signal_pane_stacon

0x486c,	// (0x000536dd) stacon_top_pane_g1_ParamLimits

0x486c,	// (0x000536dd) stacon_top_pane_g1

0x0e38,	// (0x0004fca9) title_pane_stacon_ParamLimits

0x0e38,	// (0x0004fca9) title_pane_stacon

0x0e62,	// (0x0004fcd3) uni_indicator_pane_stacon_ParamLimits

0x0e62,	// (0x0004fcd3) uni_indicator_pane_stacon

0x0e77,	// (0x0004fce8) battery_pane_stacon_ParamLimits

0x0e77,	// (0x0004fce8) battery_pane_stacon

0x0ebb,	// (0x0004fd2c) control_bottom_pane_stacon_ParamLimits

0x0ebb,	// (0x0004fd2c) control_bottom_pane_stacon

0x0ede,	// (0x0004fd4f) navi_pane_stacon_ParamLimits

0x0ede,	// (0x0004fd4f) navi_pane_stacon

0x488e,	// (0x000536ff) stacon_bottom_pane_g1_ParamLimits

0x488e,	// (0x000536ff) stacon_bottom_pane_g1

0x0ab5,	// (0x0004f926) aid_levels_signal_lsc_ParamLimits

0x0ab5,	// (0x0004f926) aid_levels_signal_lsc

0x0acb,	// (0x0004f93c) signal_pane_stacon_g1_ParamLimits

0x0acb,	// (0x0004f93c) signal_pane_stacon_g1

0x0adf,	// (0x0004f950) signal_pane_stacon_g2_ParamLimits

0x0adf,	// (0x0004f950) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005e53a) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005e53a) signal_pane_stacon_g

0x0b14,	// (0x0004f985) title_pane_stacon_t1_ParamLimits

0x0b14,	// (0x0004f985) title_pane_stacon_t1

0x42be,	// (0x0005312f) uni_indicator_pane_stacon_g1

0x42c8,	// (0x00053139) uni_indicator_pane_stacon_g2

0x42d2,	// (0x00053143) uni_indicator_pane_stacon_g3

0x42dc,	// (0x0005314d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005e546) uni_indicator_pane_stacon_g

0x0b39,	// (0x0004f9aa) control_top_pane_stacon_g1

0x0b41,	// (0x0004f9b2) control_top_pane_stacon_t1_ParamLimits

0x0b41,	// (0x0004f9b2) control_top_pane_stacon_t1

0x0b78,	// (0x0004f9e9) aid_levels_battery_lsc_ParamLimits

0x0b78,	// (0x0004f9e9) aid_levels_battery_lsc

0x0b8f,	// (0x0004fa00) battery_pane_stacon_g1_ParamLimits

0x0b8f,	// (0x0004fa00) battery_pane_stacon_g1

0x0ba2,	// (0x0004fa13) battery_pane_stacon_g2_ParamLimits

0x0ba2,	// (0x0004fa13) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005e54f) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005e54f) battery_pane_stacon_g

0x0be0,	// (0x0004fa51) navi_icon_pane_stacon

0x0bf4,	// (0x0004fa65) navi_navi_pane_stacon

0x0be0,	// (0x0004fa51) navi_text_pane_stacon

0x0b39,	// (0x0004f9aa) control_bottom_pane_stacon_g1

0x0c08,	// (0x0004fa79) control_bottom_pane_stacon_t1_ParamLimits

0x0c08,	// (0x0004fa79) control_bottom_pane_stacon_t1

0xd355,	// (0x0005c1c6) grid_app_pane_ParamLimits

0xd355,	// (0x0005c1c6) grid_app_pane

0xd38d,	// (0x0005c1fe) scroll_pane_cp15_ParamLimits

0xd38d,	// (0x0005c1fe) scroll_pane_cp15

0xd3a2,	// (0x0005c213) cell_app_pane_ParamLimits

0xd3a2,	// (0x0005c213) cell_app_pane

0xd3e7,	// (0x0005c258) cell_app_pane_g1_ParamLimits

0xd3e7,	// (0x0005c258) cell_app_pane_g1

0x4381,	// (0x000531f2) cell_app_pane_g2_ParamLimits

0x4381,	// (0x000531f2) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005e554) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005e554) cell_app_pane_g

0xd40b,	// (0x0005c27c) cell_app_pane_t1_ParamLimits

0xd40b,	// (0x0005c27c) cell_app_pane_t1

0x43a4,	// (0x00053215) grid_highlight_pane_ParamLimits

0x43a4,	// (0x00053215) grid_highlight_pane

0x3fa1,	// (0x00052e12) cell_highlight_pane_g1

0x3fa9,	// (0x00052e1a) cell_highlight_pane_g2

0x3fb1,	// (0x00052e22) cell_highlight_pane_g3

0x3fb9,	// (0x00052e2a) cell_highlight_pane_g4

0x3fc1,	// (0x00052e32) cell_highlight_pane_g5

0x3fc9,	// (0x00052e3a) cell_highlight_pane_g6

0x3fd1,	// (0x00052e42) cell_highlight_pane_g7

0x3fd9,	// (0x00052e4a) cell_highlight_pane_g8

0x3fe1,	// (0x00052e52) cell_highlight_pane_g9

0x2ca4,	// (0x00051b15) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005e502) cell_highlight_pane_g

0x43b5,	// (0x00053226) bg_scroll_pane

0x0c52,	// (0x0004fac3) scroll_handle_pane

0x43fc,	// (0x0005326d) scroll_bg_pane_g1

0x4411,	// (0x00053282) scroll_bg_pane_g2

0x4429,	// (0x0005329a) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005e559) scroll_bg_pane_g

0x443e,	// (0x000532af) scroll_handle_focus_pane_ParamLimits

0x443e,	// (0x000532af) scroll_handle_focus_pane

0x43fc,	// (0x0005326d) scroll_handle_pane_g1

0x444b,	// (0x000532bc) scroll_handle_pane_g2

0x4429,	// (0x0005329a) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005e560) scroll_handle_pane_g

0x3ff2,	// (0x00052e63) bg_popup_sub_pane_cp21_ParamLimits

0x3ff2,	// (0x00052e63) bg_popup_sub_pane_cp21

0x445f,	// (0x000532d0) popup_fep_japan_predictive_window_t1_ParamLimits

0x445f,	// (0x000532d0) popup_fep_japan_predictive_window_t1

0x4479,	// (0x000532ea) popup_fep_japan_predictive_window_t2_ParamLimits

0x4479,	// (0x000532ea) popup_fep_japan_predictive_window_t2

0x44ac,	// (0x0005331d) popup_fep_japan_predictive_window_t3_ParamLimits

0x44ac,	// (0x0005331d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005e567) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005e567) popup_fep_japan_predictive_window_t

0x2cae,	// (0x00051b1f) bg_popup_sub_pane_cp23

0x44e3,	// (0x00053354) listscroll_japin_cand_pane

0x44eb,	// (0x0005335c) popup_fep_japan_candidate_window_t1

0x44f9,	// (0x0005336a) candidate_pane_ParamLimits

0x44f9,	// (0x0005336a) candidate_pane

0x450b,	// (0x0005337c) scroll_pane_cp30

0x4513,	// (0x00053384) list_single_popup_jap_candidate_pane_ParamLimits

0x4513,	// (0x00053384) list_single_popup_jap_candidate_pane

0x2cae,	// (0x00051b1f) list_highlight_pane_cp30

0x4528,	// (0x00053399) list_single_popup_jap_candidate_pane_t1

0x4537,	// (0x000533a8) level_1_signal

0x4549,	// (0x000533ba) level_2_signal

0x455c,	// (0x000533cd) level_3_signal

0x456f,	// (0x000533e0) level_4_signal

0x4582,	// (0x000533f3) level_5_signal

0x4595,	// (0x00053406) level_6_signal

0x45a8,	// (0x00053419) level_7_signal

0x4537,	// (0x000533a8) level_1_battery

0x4549,	// (0x000533ba) level_2_battery

0x455c,	// (0x000533cd) level_3_battery

0x456f,	// (0x000533e0) level_4_battery

0x4582,	// (0x000533f3) level_5_battery

0x4595,	// (0x00053406) level_6_battery

0x45a8,	// (0x00053419) level_7_battery

0x45d3,	// (0x00053444) list_menu_pane_ParamLimits

0x45d3,	// (0x00053444) list_menu_pane

0x45e9,	// (0x0005345a) scroll_pane_cp25_ParamLimits

0x45e9,	// (0x0005345a) scroll_pane_cp25

0x4602,	// (0x00053473) list_double2_graphic_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double2_graphic_pane_cp2

0x4602,	// (0x00053473) list_double2_large_graphic_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double2_large_graphic_pane_cp2

0x4602,	// (0x00053473) list_double2_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double2_pane_cp2

0x4602,	// (0x00053473) list_double_graphic_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double_graphic_pane_cp2

0x4602,	// (0x00053473) list_double_large_graphic_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double_large_graphic_pane_cp2

0x4602,	// (0x00053473) list_double_number_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double_number_pane_cp2

0x4602,	// (0x00053473) list_double_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double_pane_cp2

0xd422,	// (0x0005c293) list_single_2graphic_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_2graphic_pane_cp2

0xd422,	// (0x0005c293) list_single_graphic_heading_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_graphic_heading_pane_cp2

0xd422,	// (0x0005c293) list_single_graphic_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_graphic_pane_cp2

0xd422,	// (0x0005c293) list_single_heading_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_heading_pane_cp2

0x463f,	// (0x000534b0) list_single_large_graphic_pane_cp2_ParamLimits

0x463f,	// (0x000534b0) list_single_large_graphic_pane_cp2

0xd422,	// (0x0005c293) list_single_number_heading_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_number_heading_pane_cp2

0xd422,	// (0x0005c293) list_single_number_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_number_pane_cp2

0xd422,	// (0x0005c293) list_single_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_pane_cp2

0x46bb,	// (0x0005352c) bg_popup_sub_pane_cp22

0x0d04,	// (0x0004fb75) popup_side_volume_key_window_g1

0x0d2e,	// (0x0004fb9f) popup_side_volume_key_window_t1

0x0d4a,	// (0x0004fbbb) volume_small_pane_cp1

0x392f,	// (0x000527a0) bg_popup_sub_pane_cp24_ParamLimits

0x392f,	// (0x000527a0) bg_popup_sub_pane_cp24

0x46d1,	// (0x00053542) fep_china_uni_candidate_pane_ParamLimits

0x46d1,	// (0x00053542) fep_china_uni_candidate_pane

0x46e5,	// (0x00053556) fep_china_uni_entry_pane

0x46f5,	// (0x00053566) popup_fep_china_uni_window_g1

0x4711,	// (0x00053582) fep_china_uni_entry_pane_g1

0x4719,	// (0x0005358a) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005e598) fep_china_uni_entry_pane_g

0x4721,	// (0x00053592) fep_entry_item_pane

0x472b,	// (0x0005359c) fep_candidate_item_pane

0x4733,	// (0x000535a4) fep_china_uni_candidate_pane_g1

0x473b,	// (0x000535ac) fep_china_uni_candidate_pane_g2

0x4743,	// (0x000535b4) fep_china_uni_candidate_pane_g3

0x474b,	// (0x000535bc) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005e59d) fep_china_uni_candidate_pane_g

0x2ca4,	// (0x00051b15) fep_entry_item_pane_g1

0x4753,	// (0x000535c4) fep_entry_item_pane_t1_ParamLimits

0x4753,	// (0x000535c4) fep_entry_item_pane_t1

0x4769,	// (0x000535da) fep_candidate_item_pane_t1_ParamLimits

0x4769,	// (0x000535da) fep_candidate_item_pane_t1

0x477e,	// (0x000535ef) fep_candidate_item_pane_t2_ParamLimits

0x477e,	// (0x000535ef) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005e5a6) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005e5a6) fep_candidate_item_pane_t

0x36b4,	// (0x00052525) list_highlight_pane_cp31_ParamLimits

0x36b4,	// (0x00052525) list_highlight_pane_cp31

0x4790,	// (0x00053601) level_1_signal_lsc

0x4799,	// (0x0005360a) level_2_signal_lsc

0x47a2,	// (0x00053613) level_3_signal_lsc

0x47ab,	// (0x0005361c) level_4_signal_lsc

0x47b4,	// (0x00053625) level_5_signal_lsc

0x47bd,	// (0x0005362e) level_6_signal_lsc

0x47c6,	// (0x00053637) level_7_signal_lsc

0x47c6,	// (0x00053637) level_1_battery_lsc

0x47cf,	// (0x00053640) level_2_battery_lsc

0x47d8,	// (0x00053649) level_3_battery_lsc

0x47e1,	// (0x00053652) level_4_battery_lsc

0x47ea,	// (0x0005365b) level_5_battery_lsc

0x47f3,	// (0x00053664) level_6_battery_lsc

0x4790,	// (0x00053601) level_7_battery_lsc

0x47fc,	// (0x0005366d) scroll_handle_focus_pane_g1

0x4805,	// (0x00053676) scroll_handle_focus_pane_g2

0x480e,	// (0x0005367f) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005e5ab) scroll_handle_focus_pane_g

0xbeb5,	// (0x0005ad26) list_single_2graphic_pane_g1_ParamLimits

0xbeb5,	// (0x0005ad26) list_single_2graphic_pane_g1

0xb933,	// (0x0005a7a4) list_single_2graphic_pane_g2_ParamLimits

0xb933,	// (0x0005a7a4) list_single_2graphic_pane_g2

0x2e26,	// (0x00051c97) list_single_2graphic_pane_g3_ParamLimits

0x2e26,	// (0x00051c97) list_single_2graphic_pane_g3

0xbec1,	// (0x0005ad32) list_single_2graphic_pane_g4_ParamLimits

0xbec1,	// (0x0005ad32) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005e5b2) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005e5b2) list_single_2graphic_pane_g

0xbecd,	// (0x0005ad3e) list_single_2graphic_pane_t1_ParamLimits

0xbecd,	// (0x0005ad3e) list_single_2graphic_pane_t1

0xbefb,	// (0x0005ad6c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbefb,	// (0x0005ad6c) list_double2_graphic_large_graphic_pane_g1

0xbb32,	// (0x0005a9a3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb32,	// (0x0005a9a3) list_double2_graphic_large_graphic_pane_g2

0xba80,	// (0x0005a8f1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba80,	// (0x0005a8f1) list_double2_graphic_large_graphic_pane_g3

0xbf0d,	// (0x0005ad7e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf0d,	// (0x0005ad7e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005e5bb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005e5bb) list_double2_graphic_large_graphic_pane_g

0xbf19,	// (0x0005ad8a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf19,	// (0x0005ad8a) list_double2_graphic_large_graphic_pane_t1

0xbf2f,	// (0x0005ada0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf2f,	// (0x0005ada0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005e5c4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005e5c4) list_double2_graphic_large_graphic_pane_t

0x4956,	// (0x000537c7) popup_fast_swap_window_ParamLimits

0x4956,	// (0x000537c7) popup_fast_swap_window

0x4972,	// (0x000537e3) popup_side_volume_key_window

0x498e,	// (0x000537ff) stacon_top_pane

0x4998,	// (0x00053809) status_pane_ParamLimits

0x4998,	// (0x00053809) status_pane

0xd4af,	// (0x0005c320) status_small_pane

0x2cae,	// (0x00051b1f) control_pane

0x2cae,	// (0x00051b1f) stacon_bottom_pane

0x3f38,	// (0x00052da9) scroll_pane_cp121

0x3f2f,	// (0x00052da0) set_content_pane

0x4817,	// (0x00053688) bg_active_tab_pane_g1_cp1

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp1

0x4829,	// (0x0005369a) bg_active_tab_pane_g3_cp1

0x4817,	// (0x00053688) bg_passive_tab_pane_g1_cp1

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp1

0x4829,	// (0x0005369a) bg_passive_tab_pane_g3_cp1

0x4832,	// (0x000536a3) bg_active_tab_pane_g1_cp2

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp2

0x483b,	// (0x000536ac) bg_active_tab_pane_g3_cp2

0x4832,	// (0x000536a3) bg_passive_tab_pane_g1_cp2

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp2

0x483b,	// (0x000536ac) bg_passive_tab_pane_g3_cp2

0x4844,	// (0x000536b5) bg_active_tab_pane_g1_cp3

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp3

0x484d,	// (0x000536be) bg_active_tab_pane_g3_cp3

0x4844,	// (0x000536b5) bg_passive_tab_pane_g1_cp3

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp3

0x484d,	// (0x000536be) bg_passive_tab_pane_g3_cp3

0x4856,	// (0x000536c7) bg_active_tab_pane_g1_cp4

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp4

0x4861,	// (0x000536d2) bg_active_tab_pane_g3_cp4

0x4856,	// (0x000536c7) bg_passive_tab_pane_g1_cp4

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp4

0x4861,	// (0x000536d2) bg_passive_tab_pane_g3_cp4

0x48aa,	// (0x0005371b) bg_active_tab_pane_g1_cp5

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp5

0x48b3,	// (0x00053724) bg_active_tab_pane_g3_cp5

0x48aa,	// (0x0005371b) bg_passive_tab_pane_g1_cp5

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp5

0x48b3,	// (0x00053724) bg_passive_tab_pane_g3_cp5

0x6f0c,	// (0x00055d7d) list_set_graphic_pane_ParamLimits

0x6f0c,	// (0x00055d7d) list_set_graphic_pane

0x2cae,	// (0x00051b1f) bg_set_opt_pane_cp4

0x48d9,	// (0x0005374a) list_set_graphic_pane_g1_ParamLimits

0x48d9,	// (0x0005374a) list_set_graphic_pane_g1

0x48e5,	// (0x00053756) list_set_graphic_pane_g2_ParamLimits

0x48e5,	// (0x00053756) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005e5c9) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005e5c9) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0005e932) volume_small_pane_cp_g

0x4909,	// (0x0005377a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4909,	// (0x0005377a) list_double2_large_graphic_pane_g1_cp2

0x4915,	// (0x00053786) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4915,	// (0x00053786) list_double2_large_graphic_pane_g2_cp2

0x4926,	// (0x00053797) list_double2_large_graphic_pane_g3_cp2

0x492e,	// (0x0005379f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x492e,	// (0x0005379f) list_double2_large_graphic_pane_t1_cp2

0x4944,	// (0x000537b5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4944,	// (0x000537b5) list_double2_large_graphic_pane_t2_cp2

0x6522,	// (0x00055393) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x6522,	// (0x00055393) list_double_large_graphic_pane_g1_cp2

0x6533,	// (0x000553a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x6533,	// (0x000553a4) list_double_large_graphic_pane_g2_cp2

0x4acb,	// (0x0005393c) list_double_large_graphic_pane_g3_cp2

0x6544,	// (0x000553b5) list_double_large_graphic_pane_g4_cp

0x654c,	// (0x000553bd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x654c,	// (0x000553bd) list_double_large_graphic_pane_t1_cp2

0x6563,	// (0x000553d4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6563,	// (0x000553d4) list_double_large_graphic_pane_t2_cp2

0x49b1,	// (0x00053822) list_double2_graphic_pane_g1_cp2_ParamLimits

0x49b1,	// (0x00053822) list_double2_graphic_pane_g1_cp2

0x49bf,	// (0x00053830) list_double2_graphic_pane_g2_cp2_ParamLimits

0x49bf,	// (0x00053830) list_double2_graphic_pane_g2_cp2

0x49d0,	// (0x00053841) list_double2_graphic_pane_g3_cp2

0x49da,	// (0x0005384b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x49da,	// (0x0005384b) list_double2_graphic_pane_t1_cp2

0x49f0,	// (0x00053861) list_double2_graphic_pane_t2_cp2_ParamLimits

0x49f0,	// (0x00053861) list_double2_graphic_pane_t2_cp2

0x4a02,	// (0x00053873) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4a02,	// (0x00053873) list_single_number_heading_pane_g1_cp2

0x4a1a,	// (0x0005388b) list_single_number_heading_pane_g2_cp2

0x4a22,	// (0x00053893) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4a22,	// (0x00053893) list_single_number_heading_pane_t1_cp2

0x4a38,	// (0x000538a9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a38,	// (0x000538a9) list_single_number_heading_pane_t2_cp2

0x4a4a,	// (0x000538bb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4a4a,	// (0x000538bb) list_single_number_heading_pane_t3_cp2

0x4a02,	// (0x00053873) list_single_heading_pane_g1_cp2_ParamLimits

0x4a02,	// (0x00053873) list_single_heading_pane_g1_cp2

0x4a1a,	// (0x0005388b) list_single_heading_pane_g2_cp2

0x4a22,	// (0x00053893) list_single_heading_pane_t1_cp2_ParamLimits

0x4a22,	// (0x00053893) list_single_heading_pane_t1_cp2

0x632a,	// (0x0005519b) list_single_heading_pane_t2_cp2_ParamLimits

0x632a,	// (0x0005519b) list_single_heading_pane_t2_cp2

0x6272,	// (0x000550e3) list_double_graphic_pane_g1_cp2_ParamLimits

0x6272,	// (0x000550e3) list_double_graphic_pane_g1_cp2

0x627e,	// (0x000550ef) list_double_graphic_pane_g2_cp2_ParamLimits

0x627e,	// (0x000550ef) list_double_graphic_pane_g2_cp2

0x628d,	// (0x000550fe) list_double_graphic_pane_g3_cp2

0x6295,	// (0x00055106) list_double_graphic_pane_t1_cp2_ParamLimits

0x6295,	// (0x00055106) list_double_graphic_pane_t1_cp2

0x62ab,	// (0x0005511c) list_double_graphic_pane_t2_cp2_ParamLimits

0x62ab,	// (0x0005511c) list_double_graphic_pane_t2_cp2

0x4abf,	// (0x00053930) list_double_number_pane_g1_cp2_ParamLimits

0x4abf,	// (0x00053930) list_double_number_pane_g1_cp2

0x4acb,	// (0x0005393c) list_double_number_pane_g2_cp2

0x6236,	// (0x000550a7) list_double_number_pane_t1_cp2_ParamLimits

0x6236,	// (0x000550a7) list_double_number_pane_t1_cp2

0x624a,	// (0x000550bb) list_double_number_pane_t2_cp2_ParamLimits

0x624a,	// (0x000550bb) list_double_number_pane_t2_cp2

0x6260,	// (0x000550d1) list_double_number_pane_t3_cp2_ParamLimits

0x6260,	// (0x000550d1) list_double_number_pane_t3_cp2

0x611f,	// (0x00054f90) list_single_graphic_pane_g1_cp2_ParamLimits

0x611f,	// (0x00054f90) list_single_graphic_pane_g1_cp2

0x4b23,	// (0x00053994) list_single_graphic_pane_g2_cp2_ParamLimits

0x4b23,	// (0x00053994) list_single_graphic_pane_g2_cp2

0x4b2f,	// (0x000539a0) list_single_graphic_pane_g3_cp2

0x60f5,	// (0x00054f66) list_single_graphic_pane_t1_cp2_ParamLimits

0x60f5,	// (0x00054f66) list_single_graphic_pane_t1_cp2

0x4b23,	// (0x00053994) list_single_number_pane_g1_cp2_ParamLimits

0x4b23,	// (0x00053994) list_single_number_pane_g1_cp2

0x4b2f,	// (0x000539a0) list_single_number_pane_g2_cp2

0x60f5,	// (0x00054f66) list_single_number_pane_t1_cp2_ParamLimits

0x60f5,	// (0x00054f66) list_single_number_pane_t1_cp2

0x610b,	// (0x00054f7c) list_single_number_pane_t2_cp2_ParamLimits

0x610b,	// (0x00054f7c) list_single_number_pane_t2_cp2

0x4915,	// (0x00053786) list_double2_pane_g1_cp2_ParamLimits

0x4915,	// (0x00053786) list_double2_pane_g1_cp2

0x4926,	// (0x00053797) list_double2_pane_g2_cp2

0x4a97,	// (0x00053908) list_double2_pane_t1_cp2_ParamLimits

0x4a97,	// (0x00053908) list_double2_pane_t1_cp2

0x4aad,	// (0x0005391e) list_double2_pane_t2_cp2_ParamLimits

0x4aad,	// (0x0005391e) list_double2_pane_t2_cp2

0x4abf,	// (0x00053930) list_double_pane_g1_cp2_ParamLimits

0x4abf,	// (0x00053930) list_double_pane_g1_cp2

0x4acb,	// (0x0005393c) list_double_pane_g2_cp2

0x4ad3,	// (0x00053944) list_double_pane_t1_cp2_ParamLimits

0x4ad3,	// (0x00053944) list_double_pane_t1_cp2

0x4ae9,	// (0x0005395a) list_double_pane_t2_cp2_ParamLimits

0x4ae9,	// (0x0005395a) list_double_pane_t2_cp2

0x4b13,	// (0x00053984) list_single_pane_cp2_g3

0x4b23,	// (0x00053994) list_single_pane_g1_cp2_ParamLimits

0x4b23,	// (0x00053994) list_single_pane_g1_cp2

0x4b2f,	// (0x000539a0) list_single_pane_g2_cp2

0x4b37,	// (0x000539a8) list_single_pane_t1_cp2_ParamLimits

0x4b37,	// (0x000539a8) list_single_pane_t1_cp2

0x4b4f,	// (0x000539c0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4b4f,	// (0x000539c0) list_single_large_graphic_pane_g1_cp2

0x4b5b,	// (0x000539cc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4b5b,	// (0x000539cc) list_single_large_graphic_pane_g2_cp2

0x4b67,	// (0x000539d8) list_single_large_graphic_pane_g3_cp2

0x4b6f,	// (0x000539e0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4b6f,	// (0x000539e0) list_single_large_graphic_pane_g4_cp1

0x4b89,	// (0x000539fa) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b89,	// (0x000539fa) list_single_large_graphic_pane_t1_cp2

0x60c1,	// (0x00054f32) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x60c1,	// (0x00054f32) list_single_graphic_heading_pane_g1_cp2

0x608e,	// (0x00054eff) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x608e,	// (0x00054eff) list_single_graphic_heading_pane_g4_cp2

0x4b2f,	// (0x000539a0) list_single_graphic_heading_pane_g5_cp2

0x60cd,	// (0x00054f3e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x60cd,	// (0x00054f3e) list_single_graphic_heading_pane_t1_cp2

0x60e3,	// (0x00054f54) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x60e3,	// (0x00054f54) list_single_graphic_heading_pane_t2_cp2

0x6082,	// (0x00054ef3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6082,	// (0x00054ef3) list_single_2graphic_pane_g1_cp2

0x608e,	// (0x00054eff) list_single_2graphic_pane_g2_cp2_ParamLimits

0x608e,	// (0x00054eff) list_single_2graphic_pane_g2_cp2

0x4b2f,	// (0x000539a0) list_single_2graphic_pane_g3_cp2

0x609f,	// (0x00054f10) list_single_2graphic_pane_g4_cp2_ParamLimits

0x609f,	// (0x00054f10) list_single_2graphic_pane_g4_cp2

0x60ab,	// (0x00054f1c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x60ab,	// (0x00054f1c) list_single_2graphic_pane_t1_cp2

0x2ca4,	// (0x00051b15) list_highlight_pane_g10_cp1

0x5c5a,	// (0x00054acb) list_highlight_pane_g1_cp1

0x5c62,	// (0x00054ad3) list_highlight_pane_g2_cp1

0x5c6a,	// (0x00054adb) list_highlight_pane_g3_cp1

0x5c72,	// (0x00054ae3) list_highlight_pane_g4_cp1

0x5c7a,	// (0x00054aeb) list_highlight_pane_g5_cp1

0x5c82,	// (0x00054af3) list_highlight_pane_g6_cp1

0x5c8a,	// (0x00054afb) list_highlight_pane_g7_cp1

0x5c92,	// (0x00054b03) list_highlight_pane_g8_cp1

0x5c9a,	// (0x00054b0b) list_highlight_pane_g9_cp1

0xdb89,	// (0x0005c9fa) form_field_slider_pane_t3

0xdb97,	// (0x0005ca08) form_field_slider_pane_t4

0x5b96,	// (0x00054a07) slider_form_pane_ParamLimits

0x5b96,	// (0x00054a07) slider_form_pane

0x2cae,	// (0x00051b1f) control_abbreviations

0x2cae,	// (0x00051b1f) control_conventions

0x2cae,	// (0x00051b1f) control_definitions

0x2cae,	// (0x00051b1f) format_table_attribute

0x6374,	// (0x000551e5) bg_popup_preview_window_pane_g9

0x2cae,	// (0x00051b1f) format_table_data2

0x2cae,	// (0x00051b1f) format_table_data3

0x2cae,	// (0x00051b1f) format_table_data_example

0x0008,

0x2cae,	// (0x00051b1f) intro_purpose

0xf8ef,	// (0x0005e760) bg_popup_preview_window_pane_g

0x2cae,	// (0x00051b1f) texts_category

0x2cae,	// (0x00051b1f) texts_graphics

0x4b9f,	// (0x00053a10) text_digital

0x4bae,	// (0x00053a1f) text_primary

0x4bbd,	// (0x00053a2e) text_primary_small

0x4bcc,	// (0x00053a3d) text_secondary

0x4bdb,	// (0x00053a4c) text_title

0x6a4e,	// (0x000558bf) bg_passive_tab_pane_g1_cp3_srt

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp3_srt

0x6a57,	// (0x000558c8) bg_passive_tab_pane_g3_cp3_srt

0x392f,	// (0x000527a0) bg_active_tab_pane_cp3_srt_ParamLimits

0x392f,	// (0x000527a0) bg_active_tab_pane_cp3_srt

0x6a60,	// (0x000558d1) tabs_4_active_pane_srt_g1

0xdec9,	// (0x0005cd3a) tabs_4_active_pane_srt_t1_ParamLimits

0xdec9,	// (0x0005cd3a) tabs_4_active_pane_srt_t1

0x6a4e,	// (0x000558bf) bg_active_tab_pane_g1_cp3_copy1

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp3_copy1

0x6a57,	// (0x000558c8) bg_active_tab_pane_g3_cp3_copy1

0x36b4,	// (0x00052525) tabs_2_long_active_pane_srt_ParamLimits

0x36b4,	// (0x00052525) tabs_2_long_active_pane_srt

0x36b4,	// (0x00052525) tabs_2_long_passive_pane_srt_ParamLimits

0x36b4,	// (0x00052525) tabs_2_long_passive_pane_srt

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp4_srt

0x6797,	// (0x00055608) bg_passive_tab_pane_g1_cp4_srt

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp4_srt

0x67a0,	// (0x00055611) bg_passive_tab_pane_g3_cp4_srt

0x36b4,	// (0x00052525) bg_active_tab_pane_cp4_srt_ParamLimits

0x36b4,	// (0x00052525) bg_active_tab_pane_cp4_srt

0xdcf3,	// (0x0005cb64) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdcf3,	// (0x0005cb64) tabs_2_long_active_pane_srt_t1

0x6797,	// (0x00055608) bg_active_tab_pane_g1_cp4_srt

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp4_srt

0x67a0,	// (0x00055611) bg_active_tab_pane_g3_cp4_srt

0x392f,	// (0x000527a0) tabs_3_long_active_pane_srt_ParamLimits

0x392f,	// (0x000527a0) tabs_3_long_active_pane_srt

0x392f,	// (0x000527a0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x392f,	// (0x000527a0) tabs_3_long_passive_pane_cp_srt

0x392f,	// (0x000527a0) tabs_3_long_passive_pane_srt_ParamLimits

0x392f,	// (0x000527a0) tabs_3_long_passive_pane_srt

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp5_srt

0x48aa,	// (0x0005371b) bg_passive_tab_pane_g1_cp5_srt

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp5_srt

0x48b3,	// (0x00053724) bg_passive_tab_pane_g3_cp5_srt

0x36b4,	// (0x00052525) bg_active_tab_pane_cp5_srt_ParamLimits

0x36b4,	// (0x00052525) bg_active_tab_pane_cp5_srt

0xdcdd,	// (0x0005cb4e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdcdd,	// (0x0005cb4e) tabs_3_long_active_pane_srt_t1

0x48aa,	// (0x0005371b) bg_active_tab_pane_g1_cp5_srt

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp5_srt

0x48b3,	// (0x00053724) bg_active_tab_pane_g3_cp5_srt

0x6777,	// (0x000555e8) navi_text_pane_srt_t1

0x676f,	// (0x000555e0) navi_icon_pane_srt_g1

0x4db0,	// (0x00053c21) midp_editing_number_pane_srt

0x4bea,	// (0x00053a5b) midp_ticker_pane_srt

0x4db8,	// (0x00053c29) midp_ticker_pane_srt_g1

0x4dc0,	// (0x00053c31) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005e5e8) midp_ticker_pane_srt_g

0x4dc8,	// (0x00053c39) midp_ticker_pane_srt_t1

0x6760,	// (0x000555d1) midp_editing_number_pane_t1_copy1

0xd4ba,	// (0x0005c32b) listscroll_midp_pane

0xd4ba,	// (0x0005c32b) midp_form_pane

0x4c62,	// (0x00053ad3) midp_info_popup_window_ParamLimits

0x4c62,	// (0x00053ad3) midp_info_popup_window

0x3ff2,	// (0x00052e63) bg_popup_sub_pane_cp50_ParamLimits

0x3ff2,	// (0x00052e63) bg_popup_sub_pane_cp50

0x5886,	// (0x000546f7) listscroll_midp_info_pane_ParamLimits

0x5886,	// (0x000546f7) listscroll_midp_info_pane

0x5866,	// (0x000546d7) listscroll_form_midp_pane_ParamLimits

0x5866,	// (0x000546d7) listscroll_form_midp_pane

0x5872,	// (0x000546e3) scroll_bar_cp050

0x5866,	// (0x000546d7) list_midp_pane

0x7492,	// (0x00056303) signal_pane_g2_cp

0x5780,	// (0x000545f1) listscroll_midp_info_pane_t1_ParamLimits

0x5780,	// (0x000545f1) listscroll_midp_info_pane_t1

0x5798,	// (0x00054609) listscroll_midp_info_pane_t2_ParamLimits

0x5798,	// (0x00054609) listscroll_midp_info_pane_t2

0x57d6,	// (0x00054647) listscroll_midp_info_pane_t3_ParamLimits

0x57d6,	// (0x00054647) listscroll_midp_info_pane_t3

0x5810,	// (0x00054681) listscroll_midp_info_pane_t4_ParamLimits

0x5810,	// (0x00054681) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0005e69b) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0005e69b) listscroll_midp_info_pane_t

0x40b6,	// (0x00052f27) scroll_pane_cp21

0x571e,	// (0x0005458f) form_midp_field_choice_group_pane

0x5727,	// (0x00054598) form_midp_field_text_pane

0x5766,	// (0x000545d7) form_midp_field_time_pane

0x576e,	// (0x000545df) form_midp_gauge_slider_pane

0x5777,	// (0x000545e8) form_midp_gauge_wait_pane

0x2cae,	// (0x00051b1f) form_midp_image_pane

0xc7ea,	// (0x0005b65b) list_single_midp_pane_ParamLimits

0xc7ea,	// (0x0005b65b) list_single_midp_pane

0xdb68,	// (0x0005c9d9) form_midp_field_text_pane_t1

0x54a6,	// (0x00054317) input_focus_pane_cp050

0x570d,	// (0x0005457e) list_midp_form_text_pane

0x56a5,	// (0x00054516) form_midp_field_choice_group_pane_t1

0x56b3,	// (0x00054524) input_focus_pane_cp051

0x56c7,	// (0x00054538) list_midp_choice_pane

0x2cae,	// (0x00051b1f) status_idle_pane

0x5689,	// (0x000544fa) form_midp_field_time_pane_t1

0x2ca4,	// (0x00051b15) wait_anim_pane_g2_copy1

0x5697,	// (0x00054508) form_midp_field_time_pane_t2

0x0001,

0x4d10,	// (0x00053b81) aid_navinavi_width_2_pane

0xf825,	// (0x0005e696) form_midp_field_time_pane_t

0x2cae,	// (0x00051b1f) input_focus_pane_cp052

0x2cae,	// (0x00051b1f) bg_input_focus_pane_cp040

0x5649,	// (0x000544ba) form_midp_gauge_slider_pane_t1

0x5657,	// (0x000544c8) form_midp_gauge_slider_pane_t2

0xdb4c,	// (0x0005c9bd) form_midp_gauge_slider_pane_t3

0xdb5a,	// (0x0005c9cb) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0005e68d) form_midp_gauge_slider_pane_t

0x5681,	// (0x000544f2) form_midp_slider_pane

0x36b4,	// (0x00052525) bg_input_focus_pane_cp041_ParamLimits

0x36b4,	// (0x00052525) bg_input_focus_pane_cp041

0x5616,	// (0x00054487) form_midp_gauge_wait_pane_t1_ParamLimits

0x5616,	// (0x00054487) form_midp_gauge_wait_pane_t1

0x5628,	// (0x00054499) form_midp_gauge_wait_pane_t2_ParamLimits

0x5628,	// (0x00054499) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0005e688) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0005e688) form_midp_gauge_wait_pane_t

0x563a,	// (0x000544ab) form_midp_wait_pane_ParamLimits

0x563a,	// (0x000544ab) form_midp_wait_pane

0x55e0,	// (0x00054451) form_midp_image_pane_g1

0x55e9,	// (0x0005445a) form_midp_image_pane_t1

0x55f8,	// (0x00054469) form_midp_image_pane_t2

0x5607,	// (0x00054478) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0005e681) form_midp_image_pane_t

0x55d7,	// (0x00054448) list_single_midp_pane_g1

0x18e1,	// (0x00050752) list_single_midp_pane_t1

0xdb38,	// (0x0005c9a9) list_midp_form_item_pane_ParamLimits

0xdb38,	// (0x0005c9a9) list_midp_form_item_pane

0x4cb8,	// (0x00053b29) list_midp_form_item_pane_t1

0x4cc7,	// (0x00053b38) midp_ticker_pane_g1

0x4cd3,	// (0x00053b44) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005e5ce) midp_ticker_pane_g

0x4cdf,	// (0x00053b50) midp_ticker_pane_t1

0x69b1,	// (0x00055822) midp_editing_number_pane_t1

0x698f,	// (0x00055800) midp_editing_number_pane

0x699e,	// (0x0005580f) midp_ticker_pane

0x6750,	// (0x000555c1) ai_message_heading_pane

0x2cae,	// (0x00051b1f) bg_popup_window_pane_cp14

0x6758,	// (0x000555c9) listscroll_ai_message_pane

0x66da,	// (0x0005554b) ai_message_heading_pane_g1_ParamLimits

0x66da,	// (0x0005554b) ai_message_heading_pane_g1

0x66e6,	// (0x00055557) ai_message_heading_pane_g2_ParamLimits

0x66e6,	// (0x00055557) ai_message_heading_pane_g2

0x66f2,	// (0x00055563) ai_message_heading_pane_g3_ParamLimits

0x66f2,	// (0x00055563) ai_message_heading_pane_g3

0x66fe,	// (0x0005556f) ai_message_heading_pane_g4_ParamLimits

0x66fe,	// (0x0005556f) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005e7c2) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005e7c2) ai_message_heading_pane_g

0x670a,	// (0x0005557b) ai_message_heading_pane_t1_ParamLimits

0x670a,	// (0x0005557b) ai_message_heading_pane_t1

0x6724,	// (0x00055595) ai_message_heading_pane_t2_ParamLimits

0x6724,	// (0x00055595) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0005e7cb) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0005e7cb) ai_message_heading_pane_t

0x6736,	// (0x000555a7) bg_popup_heading_pane_cp1_ParamLimits

0x6736,	// (0x000555a7) bg_popup_heading_pane_cp1

0x66c8,	// (0x00055539) list_ai_message_pane_ParamLimits

0x66c8,	// (0x00055539) list_ai_message_pane

0x40b6,	// (0x00052f27) scroll_pane_cp10

0x6664,	// (0x000554d5) list_ai_message_pane_g1

0x666c,	// (0x000554dd) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0005e79f) list_ai_message_pane_g

0x6674,	// (0x000554e5) list_ai_message_pane_t1_ParamLimits

0x6674,	// (0x000554e5) list_ai_message_pane_t1

0x6689,	// (0x000554fa) list_ai_message_pane_t2_ParamLimits

0x6689,	// (0x000554fa) list_ai_message_pane_t2

0x669e,	// (0x0005550f) list_ai_message_pane_t3_ParamLimits

0x669e,	// (0x0005550f) list_ai_message_pane_t3

0x66b3,	// (0x00055524) list_ai_message_pane_t4_ParamLimits

0x66b3,	// (0x00055524) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005e7a4) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005e7a4) list_ai_message_pane_t

0xdcbc,	// (0x0005cb2d) cell_ai_soft_ind_pane_ParamLimits

0xdcbc,	// (0x0005cb2d) cell_ai_soft_ind_pane

0x4cf1,	// (0x00053b62) cell_ai_soft_ind_pane_g1_ParamLimits

0x4cf1,	// (0x00053b62) cell_ai_soft_ind_pane_g1

0x2cae,	// (0x00051b1f) grid_highlight_cp1

0x4cfe,	// (0x00053b6f) text_secondary_cp56_ParamLimits

0x4cfe,	// (0x00053b6f) text_secondary_cp56

0x6624,	// (0x00055495) example_general_pane_ParamLimits

0x6624,	// (0x00055495) example_general_pane

0x6630,	// (0x000554a1) example_parent_pane_g1_ParamLimits

0x6630,	// (0x000554a1) example_parent_pane_g1

0x663c,	// (0x000554ad) example_parent_pane_t1_ParamLimits

0x663c,	// (0x000554ad) example_parent_pane_t1

0xc494,	// (0x0005b305) popup_preview_text_window_ParamLimits

0xc494,	// (0x0005b305) popup_preview_text_window

0x4b1b,	// (0x0005398c) list_single_pane_cp2_g4

0x3a0b,	// (0x0005287c) bg_popup_preview_window_pane_ParamLimits

0x3a0b,	// (0x0005287c) bg_popup_preview_window_pane

0x637c,	// (0x000551ed) popup_preview_text_window_t1_ParamLimits

0x637c,	// (0x000551ed) popup_preview_text_window_t1

0x639a,	// (0x0005520b) popup_preview_text_window_t2_ParamLimits

0x639a,	// (0x0005520b) popup_preview_text_window_t2

0x63e3,	// (0x00055254) popup_preview_text_window_t3_ParamLimits

0x63e3,	// (0x00055254) popup_preview_text_window_t3

0x6428,	// (0x00055299) popup_preview_text_window_t4_ParamLimits

0x6428,	// (0x00055299) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0005e773) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0005e773) popup_preview_text_window_t

0x64a6,	// (0x00055317) scroll_pane_cp11

0x5432,	// (0x000542a3) bg_popup_preview_window_pane_g1

0x633c,	// (0x000551ad) bg_popup_preview_window_pane_g2

0x6344,	// (0x000551b5) bg_popup_preview_window_pane_g3

0x634c,	// (0x000551bd) bg_popup_preview_window_pane_g4

0x6354,	// (0x000551c5) bg_popup_preview_window_pane_g5

0x635c,	// (0x000551cd) bg_popup_preview_window_pane_g6

0x6364,	// (0x000551d5) bg_popup_preview_window_pane_g7

0x636c,	// (0x000551dd) bg_popup_preview_window_pane_g8

0xf4c6,	// (0x0005e337) aid_popup_width_pane

0xc410,	// (0x0005b281) popup_midp_note_alarm_window_ParamLimits

0xc410,	// (0x0005b281) popup_midp_note_alarm_window

0x3f49,	// (0x00052dba) data_form_pane_ParamLimits

0xbd8e,	// (0x0005abff) form_field_data_pane_g1

0xbd98,	// (0x0005ac09) form_field_data_pane_t1_ParamLimits

0x3f55,	// (0x00052dc6) input_focus_pane_ParamLimits

0x0920,	// (0x0004f791) data_form_wide_pane_ParamLimits

0x0931,	// (0x0004f7a2) form_field_data_wide_pane_g1

0x093d,	// (0x0004f7ae) form_field_data_wide_pane_t1_ParamLimits

0x3cba,	// (0x00052b2b) input_focus_pane_cp6_ParamLimits

0xd310,	// (0x0005c181) input_popup_find_pane_g1_ParamLimits

0xd310,	// (0x0005c181) input_popup_find_pane_g1

0x0bb3,	// (0x0004fa24) aid_navi_side_left_pane

0x0bc8,	// (0x0004fa39) aid_navi_side_right_pane

0x5d55,	// (0x00054bc6) bg_popup_window_pane_cp30_ParamLimits

0x5d55,	// (0x00054bc6) bg_popup_window_pane_cp30

0x5dcf,	// (0x00054c40) popup_midp_note_alarm_window_g1_ParamLimits

0x5dcf,	// (0x00054c40) popup_midp_note_alarm_window_g1

0x5dff,	// (0x00054c70) popup_midp_note_alarm_window_t1_ParamLimits

0x5dff,	// (0x00054c70) popup_midp_note_alarm_window_t1

0x5ea0,	// (0x00054d11) popup_midp_note_alarm_window_t2_ParamLimits

0x5ea0,	// (0x00054d11) popup_midp_note_alarm_window_t2

0x5f4e,	// (0x00054dbf) popup_midp_note_alarm_window_t3_ParamLimits

0x5f4e,	// (0x00054dbf) popup_midp_note_alarm_window_t3

0x5f80,	// (0x00054df1) popup_midp_note_alarm_window_t4_ParamLimits

0x5f80,	// (0x00054df1) popup_midp_note_alarm_window_t4

0x5fa6,	// (0x00054e17) popup_midp_note_alarm_window_t5_ParamLimits

0x5fa6,	// (0x00054e17) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0005e710) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0005e710) popup_midp_note_alarm_window_t

0x6052,	// (0x00054ec3) wait_bar_pane_cp1_ParamLimits

0x6052,	// (0x00054ec3) wait_bar_pane_cp1

0x2cae,	// (0x00051b1f) wait_anim_pane_copy1

0x2cae,	// (0x00051b1f) wait_border_pane_copy1

0x5a3b,	// (0x000548ac) wait_border_pane_g1_copy1

0x0957,	// (0x0004f7c8) form_field_popup_pane_g1

0xbdb2,	// (0x0005ac23) form_field_popup_pane_t1_ParamLimits

0x3f55,	// (0x00052dc6) input_focus_pane_cp7_ParamLimits

0x3f77,	// (0x00052de8) list_form_pane_ParamLimits

0x0977,	// (0x0004f7e8) form_field_popup_wide_pane_g1

0x097f,	// (0x0004f7f0) form_field_popup_wide_pane_t1_ParamLimits

0x3f55,	// (0x00052dc6) input_focus_pane_cp8_ParamLimits

0x3f83,	// (0x00052df4) list_form_wide_pane_ParamLimits

0xdf22,	// (0x0005cd93) aid_size_cell_graphic_pane

0xbe31,	// (0x0005aca2) data_form_pane_t1_ParamLimits

0xc811,	// (0x0005b682) data_form_wide_pane_t1_ParamLimits

0xd723,	// (0x0005c594) bg_status_flat_pane

0xcfcf,	// (0x0005be40) title_pane_t1_ParamLimits

0x367c,	// (0x000524ed) title_pane_t2_ParamLimits

0x36a2,	// (0x00052513) title_pane_t3_ParamLimits

0xf557,	// (0x0005e3c8) title_pane_t_ParamLimits

0x4537,	// (0x000533a8) level_1_signal_ParamLimits

0x4549,	// (0x000533ba) level_2_signal_ParamLimits

0x455c,	// (0x000533cd) level_3_signal_ParamLimits

0x456f,	// (0x000533e0) level_4_signal_ParamLimits

0x4582,	// (0x000533f3) level_5_signal_ParamLimits

0x4595,	// (0x00053406) level_6_signal_ParamLimits

0x45a8,	// (0x00053419) level_7_signal_ParamLimits

0x4537,	// (0x000533a8) level_1_battery_ParamLimits

0x4549,	// (0x000533ba) level_2_battery_ParamLimits

0x455c,	// (0x000533cd) level_3_battery_ParamLimits

0x456f,	// (0x000533e0) level_4_battery_ParamLimits

0x4582,	// (0x000533f3) level_5_battery_ParamLimits

0x4595,	// (0x00053406) level_6_battery_ParamLimits

0x45a8,	// (0x00053419) level_7_battery_ParamLimits

0x5c5a,	// (0x00054acb) bg_status_flat_pane_g1

0x5c62,	// (0x00054ad3) bg_status_flat_pane_g2

0x5c6a,	// (0x00054adb) bg_status_flat_pane_g3

0x5c72,	// (0x00054ae3) bg_status_flat_pane_g4

0x5c7a,	// (0x00054aeb) bg_status_flat_pane_g5

0x5c82,	// (0x00054af3) bg_status_flat_pane_g6

0x5c8a,	// (0x00054afb) bg_status_flat_pane_g7

0xd05b,	// (0x0005becc) tabs_3_active_pane_t1_ParamLimits

0xd05b,	// (0x0005becc) tabs_3_passive_pane_t1_ParamLimits

0xd06d,	// (0x0005bede) tabs_4_active_pane_t1_ParamLimits

0xd06d,	// (0x0005bede) tabs_4_1_passive_pane_t1_ParamLimits

0xd31e,	// (0x0005c18f) tabs_2_active_pane_t1_ParamLimits

0xd31e,	// (0x0005c18f) tabs_2_passive_pane_t1_ParamLimits

0x36b4,	// (0x00052525) bg_active_tab_pane_cp4_ParamLimits

0xd330,	// (0x0005c1a1) tabs_2_long_active_pane_t1_ParamLimits

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp4_ParamLimits

0x17c2,	// (0x00050633) list_single_midp_graphic_pane_t1_ParamLimits

0x36b4,	// (0x00052525) bg_active_tab_pane_cp5_ParamLimits

0xd343,	// (0x0005c1b4) tabs_3_long_active_pane_t1_ParamLimits

0x4f0e,	// (0x00053d7f) bg_passive_tab_pane_cp5_ParamLimits

0x17c2,	// (0x00050633) list_single_midp_graphic_pane_t1

0xd723,	// (0x0005c594) bg_status_flat_pane_ParamLimits

0x50c2,	// (0x00053f33) indicator_pane_cp2_ParamLimits

0x50c2,	// (0x00053f33) indicator_pane_cp2

0xd8a1,	// (0x0005c712) navi_pane_srt_ParamLimits

0xd8a1,	// (0x0005c712) navi_pane_srt

0x5211,	// (0x00054082) popup_clock_digital_analogue_window_cp1

0x3791,	// (0x00052602) indicator_pane_t1

0x4bea,	// (0x00053a5b) copy_highlight_pane

0x4bea,	// (0x00053a5b) cursor_graphics_pane

0x4bea,	// (0x00053a5b) graphic_within_text_pane

0x4bea,	// (0x00053a5b) link_highlight_pane

0x6469,	// (0x000552da) popup_preview_text_window_t5_ParamLimits

0x6469,	// (0x000552da) popup_preview_text_window_t5

0x4d18,	// (0x00053b89) cursor_digital_pane

0x4d18,	// (0x00053b89) cursor_primary_pane

0x4d29,	// (0x00053b9a) cursor_primary_small_pane

0x4d31,	// (0x00053ba2) cursor_secondary_pane

0x4d39,	// (0x00053baa) cursor_title_pane

0x4d18,	// (0x00053b89) link_highlight_digital_pane

0x4d20,	// (0x00053b91) link_highlight_primary_pane

0x4d29,	// (0x00053b9a) link_highlight_primary_small_pane

0x4d31,	// (0x00053ba2) link_highlight_secondary_pane

0x4d39,	// (0x00053baa) link_highlight_title_pane

0x4d18,	// (0x00053b89) copy_highlight_digital_pane

0x4d18,	// (0x00053b89) copy_highlight_primary_pane

0x4d29,	// (0x00053b9a) copy_highlight_primary_small_pane

0x4d31,	// (0x00053ba2) copy_highlight_secondary_pane

0x4d39,	// (0x00053baa) copy_highlight_title_pane

0x4d31,	// (0x00053ba2) graphic_text_digital_pane

0x5cf8,	// (0x00054b69) graphic_text_primary_pane

0x5d01,	// (0x00054b72) graphic_text_primary_small_pane

0x4d29,	// (0x00053b9a) graphic_text_secondary_pane

0x4d18,	// (0x00053b89) graphic_text_title_pane

0xd55f,	// (0x0005c3d0) cursor_primary_pane_g1

0x5cea,	// (0x00054b5b) cursor_text_primary_t1

0xdbb9,	// (0x0005ca2a) cursor_primary_small_pane_g1

0x5cdc,	// (0x00054b4d) cursor_text_primary_small_t1

0xdbaf,	// (0x0005ca20) cursor_primary_small_pane_g1_copy1

0x5cc4,	// (0x00054b35) cursor_text_primary_small_t1_copy1

0x5ca2,	// (0x00054b13) cursor_text_title_t1

0xdba5,	// (0x0005ca16) cursor_title_pane_g1

0xd55f,	// (0x0005c3d0) cursor_digital_pane_g1

0x4d4b,	// (0x00053bbc) cursor_text_digital_t1

0x4d70,	// (0x00053be1) link_highlight_primary_pane_g1

0x5c4b,	// (0x00054abc) link_highlight_primary_pane_t1

0x4d59,	// (0x00053bca) link_highlight_primary_small_pane_g1

0x4d61,	// (0x00053bd2) link_highlight_primary_small_pane_t1

0x4d70,	// (0x00053be1) link_highlight_secondary_pane_g1

0x4d78,	// (0x00053be9) link_highlight_secondary_pane_t1

0x5bbf,	// (0x00054a30) link_highlight_title_pane_g1

0x5bc7,	// (0x00054a38) link_highlight_title_pane_t1

0x5ba8,	// (0x00054a19) link_highlight_digital_pane_g1

0x5bb0,	// (0x00054a21) link_highlight_digital_pane_t1

0x5a80,	// (0x000548f1) copy_highlight_primary_pane_g1

0x5a88,	// (0x000548f9) copy_highlight_primary_pane_t1

0x5a5a,	// (0x000548cb) copy_highlight_primary_small_pane_g1

0x5a71,	// (0x000548e2) copy_highlight_primary_small_pane_t1

0x4d87,	// (0x00053bf8) copy_highlight_secondary_pane_g1

0x4d8f,	// (0x00053c00) copy_highlight_secondary_pane_t1

0x5a5a,	// (0x000548cb) copy_highlight_title_pane_g1

0x5a62,	// (0x000548d3) copy_highlight_title_pane_t1

0x5a80,	// (0x000548f1) copy_highlight_digital_pane_g1

0x6cb0,	// (0x00055b21) copy_highlight_digital_pane_t1

0x6c04,	// (0x00055a75) graphic_text_primary_pane_g1

0x6c94,	// (0x00055b05) graphic_text_primary_pane_t1

0x6ca2,	// (0x00055b13) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0005e83f) graphic_text_primary_pane_t

0x6c70,	// (0x00055ae1) graphic_text_primary_small_pane_g1

0x6c78,	// (0x00055ae9) graphic_text_primary_small_pane_t1

0x6c86,	// (0x00055af7) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0005e83a) graphic_text_primary_small_pane_t

0x6c4c,	// (0x00055abd) graphic_text_secondary_pane_g1

0x6c54,	// (0x00055ac5) graphic_text_secondary_pane_t1

0x6c62,	// (0x00055ad3) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0005e835) graphic_text_secondary_pane_t

0x6c28,	// (0x00055a99) graphic_text_title_pane_g1

0x6c30,	// (0x00055aa1) graphic_text_title_pane_t1

0x6c3e,	// (0x00055aaf) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0005e830) graphic_text_title_pane_t

0x6c04,	// (0x00055a75) graphic_text_digital_pane_g1

0x6c0c,	// (0x00055a7d) graphic_text_digital_pane_t1

0x6c1a,	// (0x00055a8b) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0005e82b) graphic_text_digital_pane_t

0x36b4,	// (0x00052525) navi_icon_pane_srt_ParamLimits

0x36b4,	// (0x00052525) navi_icon_pane_srt

0x2cae,	// (0x00051b1f) navi_midp_pane_srt

0x2cae,	// (0x00051b1f) navi_navi_pane_srt

0x36b4,	// (0x00052525) navi_text_pane_srt_ParamLimits

0x36b4,	// (0x00052525) navi_text_pane_srt

0x6bcf,	// (0x00055a40) navi_navi_icon_text_pane_srt

0x6bd7,	// (0x00055a48) navi_navi_pane_srt_g1_ParamLimits

0x6bd7,	// (0x00055a48) navi_navi_pane_srt_g1

0x6be9,	// (0x00055a5a) navi_navi_pane_srt_g2_ParamLimits

0x6be9,	// (0x00055a5a) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0005e826) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0005e826) navi_navi_pane_srt_g

0x6bfb,	// (0x00055a6c) navi_navi_tabs_pane_srt

0x6bcf,	// (0x00055a40) navi_navi_text_pane_srt

0x6bcf,	// (0x00055a40) navi_navi_volume_pane_srt

0x6bc0,	// (0x00055a31) navi_navi_text_pane_srt_t1

0x1c39,	// (0x00050aaa) navi_navi_volume_pane_srt_g1

0x1c41,	// (0x00050ab2) volume_small_pane_srt_ParamLimits

0x1c41,	// (0x00050ab2) volume_small_pane_srt

0x0f01,	// (0x0004fd72) volume_small_pane_srt_g1_ParamLimits

0x0f01,	// (0x0004fd72) volume_small_pane_srt_g1

0x0f11,	// (0x0004fd82) volume_small_pane_srt_g2_ParamLimits

0x0f11,	// (0x0004fd82) volume_small_pane_srt_g2

0x0f22,	// (0x0004fd93) volume_small_pane_srt_g3_ParamLimits

0x0f22,	// (0x0004fd93) volume_small_pane_srt_g3

0x0f33,	// (0x0004fda4) volume_small_pane_srt_g4_ParamLimits

0x0f33,	// (0x0004fda4) volume_small_pane_srt_g4

0x0f44,	// (0x0004fdb5) volume_small_pane_srt_g5_ParamLimits

0x0f44,	// (0x0004fdb5) volume_small_pane_srt_g5

0x0f55,	// (0x0004fdc6) volume_small_pane_srt_g6_ParamLimits

0x0f55,	// (0x0004fdc6) volume_small_pane_srt_g6

0x0f66,	// (0x0004fdd7) volume_small_pane_srt_g7_ParamLimits

0x0f66,	// (0x0004fdd7) volume_small_pane_srt_g7

0x0f77,	// (0x0004fde8) volume_small_pane_srt_g8_ParamLimits

0x0f77,	// (0x0004fde8) volume_small_pane_srt_g8

0x0f88,	// (0x0004fdf9) volume_small_pane_srt_g9_ParamLimits

0x0f88,	// (0x0004fdf9) volume_small_pane_srt_g9

0x0f99,	// (0x0004fe0a) volume_small_pane_srt_g10_ParamLimits

0x0f99,	// (0x0004fe0a) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005e5d3) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005e5d3) volume_small_pane_srt_g

0x3ab4,	// (0x00052925) query_popup_data_pane_cp2

0x6ba6,	// (0x00055a17) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ba6,	// (0x00055a17) navi_navi_icon_text_pane_srt_t1

0x5cf8,	// (0x00054b69) navi_tabs_2_long_pane_srt

0x5cf8,	// (0x00054b69) navi_tabs_2_pane_srt

0x5cf8,	// (0x00054b69) navi_tabs_3_long_pane_srt

0x5cf8,	// (0x00054b69) navi_tabs_3_pane_srt

0x5cf8,	// (0x00054b69) navi_tabs_4_pane_srt

0x1c19,	// (0x00050a8a) tabs_2_active_pane_srt_ParamLimits

0x1c19,	// (0x00050a8a) tabs_2_active_pane_srt

0x1c29,	// (0x00050a9a) tabs_2_passive_pane_srt_ParamLimits

0x1c29,	// (0x00050a9a) tabs_2_passive_pane_srt

0x54a6,	// (0x00054317) bg_passive_tab_pane_cp1_srt_ParamLimits

0x54a6,	// (0x00054317) bg_passive_tab_pane_cp1_srt

0x6b72,	// (0x000559e3) bg_passive_tab_pane_g1_cp1_srt

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp1_srt

0x6b7b,	// (0x000559ec) bg_passive_tab_pane_g3_cp1_srt

0x392f,	// (0x000527a0) bg_active_tab_pane_cp1_srt_ParamLimits

0x392f,	// (0x000527a0) bg_active_tab_pane_cp1_srt

0x6b84,	// (0x000559f5) tabs_2_active_pane_srt_g1

0xdf64,	// (0x0005cdd5) tabs_2_active_pane_srt_t1_ParamLimits

0xdf64,	// (0x0005cdd5) tabs_2_active_pane_srt_t1

0x6b72,	// (0x000559e3) bg_active_tab_pane_g1_cp1_srt

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp1_srt

0x6b7b,	// (0x000559ec) bg_active_tab_pane_g3_cp1_srt

0x1be6,	// (0x00050a57) tabs_3_active_pane_srt_ParamLimits

0x1be6,	// (0x00050a57) tabs_3_active_pane_srt

0x1bf7,	// (0x00050a68) tabs_3_passive_pane_cp_srt_ParamLimits

0x1bf7,	// (0x00050a68) tabs_3_passive_pane_cp_srt

0x1c08,	// (0x00050a79) tabs_3_passive_pane_srt_ParamLimits

0x1c08,	// (0x00050a79) tabs_3_passive_pane_srt

0x54a6,	// (0x00054317) bg_passive_tab_pane_cp2_srt_ParamLimits

0x54a6,	// (0x00054317) bg_passive_tab_pane_cp2_srt

0x4d9e,	// (0x00053c0f) bg_passive_tab_pane_g1_cp2_srt

0x4820,	// (0x00053691) bg_passive_tab_pane_g2_cp2_srt

0x4da7,	// (0x00053c18) bg_passive_tab_pane_g3_cp2_srt

0x392f,	// (0x000527a0) bg_active_tab_pane_cp2_srt_ParamLimits

0x392f,	// (0x000527a0) bg_active_tab_pane_cp2_srt

0x6b58,	// (0x000559c9) tabs_3_active_pane_srt_g1

0xdf4e,	// (0x0005cdbf) tabs_3_active_pane_srt_t1_ParamLimits

0xdf4e,	// (0x0005cdbf) tabs_3_active_pane_srt_t1

0x4d9e,	// (0x00053c0f) bg_active_tab_pane_g1_cp2_srt

0x4820,	// (0x00053691) bg_active_tab_pane_g2_cp2_srt

0x4da7,	// (0x00053c18) bg_active_tab_pane_g3_cp2_srt

0x1b9e,	// (0x00050a0f) tabs_4_active_pane_srt_ParamLimits

0x1b9e,	// (0x00050a0f) tabs_4_active_pane_srt

0x1bb0,	// (0x00050a21) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1bb0,	// (0x00050a21) tabs_4_passive_pane_cp2_srt

0x1108,	// (0x0004ff79) aid_size_cell_toolbar

0x6808,	// (0x00055679) main_idle_act_pane_ParamLimits

0x12d3,	// (0x00050144) popup_large_graphic_colour_window_ParamLimits

0xc720,	// (0x0005b591) popup_toolbar_window_ParamLimits

0xc720,	// (0x0005b591) popup_toolbar_window

0x69c0,	// (0x00055831) list_single_graphic_2heading_pane_ParamLimits

0x69c0,	// (0x00055831) list_single_graphic_2heading_pane

0x42e6,	// (0x00053157) aid_size_cell_apps_grid_lsc_pane

0x42f8,	// (0x00053169) aid_size_cell_apps_grid_prt_pane

0x4f0e,	// (0x00053d7f) bg_wml_button_pane_cp1_ParamLimits

0x4f0e,	// (0x00053d7f) bg_wml_button_pane_cp1

0xdb68,	// (0x0005c9d9) form_midp_field_text_pane_t1_ParamLimits

0x54a6,	// (0x00054317) input_focus_pane_cp050_ParamLimits

0x570d,	// (0x0005457e) list_midp_form_text_pane_ParamLimits

0x56b3,	// (0x00054524) input_focus_pane_cp051_ParamLimits

0x56c7,	// (0x00054538) list_midp_choice_pane_ParamLimits

0xdb06,	// (0x0005c977) list_single_2graphic_pane_cp3_ParamLimits

0xdb06,	// (0x0005c977) list_single_2graphic_pane_cp3

0xdb19,	// (0x0005c98a) list_single_midp_graphic_pane_ParamLimits

0xdb19,	// (0x0005c98a) list_single_midp_graphic_pane

0xf4e2,	// (0x0005e353) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4e2,	// (0x0005e353) list_single_graphic_2heading_pane_g1

0xf4ee,	// (0x0005e35f) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4ee,	// (0x0005e35f) list_single_graphic_2heading_pane_g4

0xf4fa,	// (0x0005e36b) list_single_graphic_2heading_pane_g5_ParamLimits

0xf4fa,	// (0x0005e36b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005e626) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005e626) list_single_graphic_2heading_pane_g

0xf506,	// (0x0005e377) list_single_graphic_2heading_pane_t1_ParamLimits

0xf506,	// (0x0005e377) list_single_graphic_2heading_pane_t1

0xf51a,	// (0x0005e38b) list_single_graphic_2heading_pane_t2_ParamLimits

0xf51a,	// (0x0005e38b) list_single_graphic_2heading_pane_t2

0xf536,	// (0x0005e3a7) list_single_graphic_2heading_pane_t3_ParamLimits

0xf536,	// (0x0005e3a7) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005e62d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005e62d) list_single_graphic_2heading_pane_t

0x5370,	// (0x000541e1) bg_popup_sub_pane_cp2

0x539a,	// (0x0005420b) grid_toobar_pane

0x16e7,	// (0x00050558) cell_toolbar_pane_ParamLimits

0x16e7,	// (0x00050558) cell_toolbar_pane

0x53d6,	// (0x00054247) cell_toolbar_pane_g1_ParamLimits

0x53d6,	// (0x00054247) cell_toolbar_pane_g1

0x53ea,	// (0x0005425b) cell_toolbar_pane_g2_ParamLimits

0x53ea,	// (0x0005425b) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005e63b) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005e63b) cell_toolbar_pane_g

0x540c,	// (0x0005427d) grid_highlight_pane_cp2_ParamLimits

0x540c,	// (0x0005427d) grid_highlight_pane_cp2

0x5426,	// (0x00054297) toolbar_button_pane

0x5432,	// (0x000542a3) toolbar_button_pane_g1

0x543a,	// (0x000542ab) toolbar_button_pane_g2

0x5442,	// (0x000542b3) toolbar_button_pane_g3

0x544a,	// (0x000542bb) toolbar_button_pane_g4

0x5452,	// (0x000542c3) toolbar_button_pane_g5

0x545a,	// (0x000542cb) toolbar_button_pane_g6

0x5462,	// (0x000542d3) toolbar_button_pane_g7

0x546a,	// (0x000542db) toolbar_button_pane_g8

0x5472,	// (0x000542e3) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005e640) toolbar_button_pane_g

0x1741,	// (0x000505b2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1741,	// (0x000505b2) list_single_2graphic_pane_g1_cp3

0xc778,	// (0x0005b5e9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc778,	// (0x0005b5e9) list_single_2graphic_pane_g2_cp3

0x175e,	// (0x000505cf) list_single_2graphic_pane_g3_cp3

0x1766,	// (0x000505d7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1766,	// (0x000505d7) list_single_2graphic_pane_g4_cp3

0x1772,	// (0x000505e3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1772,	// (0x000505e3) list_single_2graphic_pane_t1_cp3

0x17b6,	// (0x00050627) list_single_midp_graphic_pane_g2_ParamLimits

0x17b6,	// (0x00050627) list_single_midp_graphic_pane_g2

0xf4da,	// (0x0005e34b) aid_zoom_text_primary

0x1110,	// (0x0004ff81) aid_zoom_text_secondary

0xd5b7,	// (0x0005c428) status_small_pane_g7_ParamLimits

0xd5b7,	// (0x0005c428) status_small_pane_g7

0xd5da,	// (0x0005c44b) status_small_pane_t1_ParamLimits

0xcfab,	// (0x0005be1c) title_pane_g2

0x0003,

0xf54e,	// (0x0005e3bf) title_pane_g

0xd223,	// (0x0005c094) aid_size_cell_colour_1_pane_ParamLimits

0xd223,	// (0x0005c094) aid_size_cell_colour_1_pane

0xd237,	// (0x0005c0a8) aid_size_cell_colour_2_pane_ParamLimits

0xd237,	// (0x0005c0a8) aid_size_cell_colour_2_pane

0xd24b,	// (0x0005c0bc) aid_size_cell_colour_3_pane_ParamLimits

0xd24b,	// (0x0005c0bc) aid_size_cell_colour_3_pane

0xd25f,	// (0x0005c0d0) aid_size_cell_colour_4_pane_ParamLimits

0xd25f,	// (0x0005c0d0) aid_size_cell_colour_4_pane

0x0af0,	// (0x0004f961) title_pane_stacon_g1_ParamLimits

0x0af0,	// (0x0004f961) title_pane_stacon_g1

0x5adf,	// (0x00054950) popup_note_wait_window_g3_ParamLimits

0x5adf,	// (0x00054950) popup_note_wait_window_g3

0x5b55,	// (0x000549c6) popup_note_wait_window_t5_ParamLimits

0x5b55,	// (0x000549c6) popup_note_wait_window_t5

0x2cae,	// (0x00051b1f) main_feb_china_hwr_fs_writing_pane

0xc128,	// (0x0005af99) popup_feb_china_hwr_fs_window_ParamLimits

0xc128,	// (0x0005af99) popup_feb_china_hwr_fs_window

0xc789,	// (0x0005b5fa) aid_size_cell_hwr_fs_ParamLimits

0xc789,	// (0x0005b5fa) aid_size_cell_hwr_fs

0x54a6,	// (0x00054317) bg_popup_sub_pane_cp3_ParamLimits

0x54a6,	// (0x00054317) bg_popup_sub_pane_cp3

0xc79e,	// (0x0005b60f) grid_hwr_fs_pane_ParamLimits

0xc79e,	// (0x0005b60f) grid_hwr_fs_pane

0x1871,	// (0x000506e2) linegrid_hwr_fs_pane_ParamLimits

0x1871,	// (0x000506e2) linegrid_hwr_fs_pane

0xc7b6,	// (0x0005b627) cell_hwr_fs_pane_ParamLimits

0xc7b6,	// (0x0005b627) cell_hwr_fs_pane

0x54b2,	// (0x00054323) linegrid_hwr_fs_pane_g1_ParamLimits

0x54b2,	// (0x00054323) linegrid_hwr_fs_pane_g1

0xdada,	// (0x0005c94b) linegrid_hwr_fs_pane_g2_ParamLimits

0xdada,	// (0x0005c94b) linegrid_hwr_fs_pane_g2

0x54d0,	// (0x00054341) linegrid_hwr_fs_pane_g3_ParamLimits

0x54d0,	// (0x00054341) linegrid_hwr_fs_pane_g3

0x18a3,	// (0x00050714) linegrid_hwr_fs_pane_g4_ParamLimits

0x18a3,	// (0x00050714) linegrid_hwr_fs_pane_g4

0x18bd,	// (0x0005072e) linegrid_hwr_fs_pane_g5_ParamLimits

0x18bd,	// (0x0005072e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0005e666) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0005e666) linegrid_hwr_fs_pane_g

0x54dc,	// (0x0005434d) cell_hwr_fs_pane_g1_ParamLimits

0x54dc,	// (0x0005434d) cell_hwr_fs_pane_g1

0x52a7,	// (0x00054118) cell_hwr_fs_pane_g2_ParamLimits

0x52a7,	// (0x00054118) cell_hwr_fs_pane_g2

0xdaec,	// (0x0005c95d) cell_hwr_fs_pane_g3_ParamLimits

0xdaec,	// (0x0005c95d) cell_hwr_fs_pane_g3

0xdaf9,	// (0x0005c96a) cell_hwr_fs_pane_g4_ParamLimits

0xdaf9,	// (0x0005c96a) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0005e671) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0005e671) cell_hwr_fs_pane_g

0xc7dc,	// (0x0005b64d) cell_hwr_fs_pane_t1

0x2cae,	// (0x00051b1f) grid_highlight_pane_cp6

0x2cae,	// (0x00051b1f) main_idle_act2_pane

0x409d,	// (0x00052f0e) aid_inside_area_popup_secondary

0xdbc3,	// (0x0005ca34) aid_inside_area_window_primary_ParamLimits

0xdbc3,	// (0x0005ca34) aid_inside_area_window_primary

0x6cbf,	// (0x00055b30) ai2_news_ticker_pane

0x6cc7,	// (0x00055b38) aid_size_cell_ai1_link_ParamLimits

0x6cc7,	// (0x00055b38) aid_size_cell_ai1_link

0xdf7a,	// (0x0005cdeb) popup_ai2_data_window_ParamLimits

0xdf7a,	// (0x0005cdeb) popup_ai2_data_window

0x6cf7,	// (0x00055b68) popup_ai2_link_window_ParamLimits

0x6cf7,	// (0x00055b68) popup_ai2_link_window

0x54a6,	// (0x00054317) bg_popup_sub_pane_cp4_ParamLimits

0x54a6,	// (0x00054317) bg_popup_sub_pane_cp4

0x6d0b,	// (0x00055b7c) grid_ai2_link_pane_ParamLimits

0x6d0b,	// (0x00055b7c) grid_ai2_link_pane

0x6d22,	// (0x00055b93) popup_ai2_link_window_g1_ParamLimits

0x6d22,	// (0x00055b93) popup_ai2_link_window_g1

0x6d2e,	// (0x00055b9f) popup_ai2_link_window_g2_ParamLimits

0x6d2e,	// (0x00055b9f) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0005e844) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0005e844) popup_ai2_link_window_g

0x6d3d,	// (0x00055bae) ai2_mp_button_pane

0x6d45,	// (0x00055bb6) ai2_mp_volume_pane

0x56b3,	// (0x00054524) bg_popup_sub_pane_cp5_ParamLimits

0x56b3,	// (0x00054524) bg_popup_sub_pane_cp5

0x6d4d,	// (0x00055bbe) heading_ai2_gene_pane_ParamLimits

0x6d4d,	// (0x00055bbe) heading_ai2_gene_pane

0x6d59,	// (0x00055bca) list_ai2_gene_pane_ParamLimits

0x6d59,	// (0x00055bca) list_ai2_gene_pane

0x6da1,	// (0x00055c12) cell_ai2_link_pane_ParamLimits

0x6da1,	// (0x00055c12) cell_ai2_link_pane

0x6db7,	// (0x00055c28) cell_ai2_link_pane_g1

0x2cae,	// (0x00051b1f) grid_highlight_pane_cp7

0x1c56,	// (0x00050ac7) ai2_mp_volume_pane_g1

0x6e87,	// (0x00055cf8) ai2_mp_volume_pane_g2

0xdfa4,	// (0x0005ce15) list_ai2_gene_pane_t1

0x6e8f,	// (0x00055d00) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0005e85d) ai2_mp_volume_pane_g

0x1c5e,	// (0x00050acf) volume_small_pane_cp3

0x6e97,	// (0x00055d08) aid_size_cell_ai2_button

0x6e9f,	// (0x00055d10) grid_ai2_button_pane

0x6ea8,	// (0x00055d19) cell_ai2_button_pane_ParamLimits

0x6ea8,	// (0x00055d19) cell_ai2_button_pane

0x2ca4,	// (0x00051b15) cell_ai2_button_pane_g1

0x2cae,	// (0x00051b1f) grid_highlight_pane_cp8

0x6e47,	// (0x00055cb8) ai2_gene_pane_t1_ParamLimits

0x6e47,	// (0x00055cb8) ai2_gene_pane_t1

0xc0b2,	// (0x0005af23) aid_height_parent_landscape

0xdd0a,	// (0x0005cb7b) aid_height_set_list

0x6808,	// (0x00055679) aid_size_parent

0xdf22,	// (0x0005cd93) aid_size_cell_graphic_pane_ParamLimits

0x6d69,	// (0x00055bda) popup_ai2_data_window_g1_ParamLimits

0x6d69,	// (0x00055bda) popup_ai2_data_window_g1

0x6d75,	// (0x00055be6) ai2_news_ticker_pane_g1

0x6d7d,	// (0x00055bee) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0005e849) ai2_news_ticker_pane_g

0x6d85,	// (0x00055bf6) ai2_news_ticker_pane_t1

0x6d93,	// (0x00055c04) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0005e84e) ai2_news_ticker_pane_t

0x6dc0,	// (0x00055c31) heading_ai2_gene_pane_g1

0x6dc8,	// (0x00055c39) heading_ai2_gene_pane_t1_ParamLimits

0x6dc8,	// (0x00055c39) heading_ai2_gene_pane_t1

0x6ddd,	// (0x00055c4e) list_highlight_pane_cp6

0xdf8e,	// (0x0005cdff) ai2_gene_pane_ParamLimits

0xdf8e,	// (0x0005cdff) ai2_gene_pane

0xdfb2,	// (0x0005ce23) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0005e853) list_ai2_gene_pane_t

0x6e18,	// (0x00055c89) list_highlight_pane_cp8_ParamLimits

0x6e18,	// (0x00055c89) list_highlight_pane_cp8

0x6e29,	// (0x00055c9a) ai2_gene_pane_g1_ParamLimits

0x6e29,	// (0x00055c9a) ai2_gene_pane_g1

0x6e3b,	// (0x00055cac) ai2_gene_pane_g2_ParamLimits

0x6e3b,	// (0x00055cac) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0005e858) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0005e858) ai2_gene_pane_g

0x3edf,	// (0x00052d50) scroll_pane_cp12

0xc06f,	// (0x0005aee0) control_pane_t3_ParamLimits

0xc06f,	// (0x0005aee0) control_pane_t3

0xd5cb,	// (0x0005c43c) status_small_pane_g8_ParamLimits

0xd5cb,	// (0x0005c43c) status_small_pane_g8

0xc1bd,	// (0x0005b02e) popup_find_window_ParamLimits

0xc44a,	// (0x0005b2bb) popup_note_image_window_ParamLimits

0x1717,	// (0x00050588) list_double2_graphic_pane_vc_g1_ParamLimits

0x1717,	// (0x00050588) list_double2_graphic_pane_vc_g1

0x4b23,	// (0x00053994) list_double2_graphic_pane_vc_g2_ParamLimits

0x4b23,	// (0x00053994) list_double2_graphic_pane_vc_g2

0x2e26,	// (0x00051c97) list_double2_graphic_pane_vc_g3_ParamLimits

0x2e26,	// (0x00051c97) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005e634) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e634) list_double2_graphic_pane_vc_g

0x1723,	// (0x00050594) list_double2_graphic_pane_vc_t1_ParamLimits

0x1723,	// (0x00050594) list_double2_graphic_pane_vc_t1

0x4b23,	// (0x00053994) list_single_heading_pane_vc_g1_ParamLimits

0x4b23,	// (0x00053994) list_single_heading_pane_vc_g1

0x2e26,	// (0x00051c97) list_single_heading_pane_vc_g2_ParamLimits

0x2e26,	// (0x00051c97) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e443) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e443) list_single_heading_pane_vc_g

0x178e,	// (0x000505ff) list_single_heading_pane_vc_t1_ParamLimits

0x178e,	// (0x000505ff) list_single_heading_pane_vc_t1

0x17a4,	// (0x00050615) list_single_heading_pane_vc_t2_ParamLimits

0x17a4,	// (0x00050615) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0005e655) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0005e655) list_single_heading_pane_vc_t

0x2e32,	// (0x00051ca3) list_setting_number_pane_vc_g1_ParamLimits

0x2e32,	// (0x00051ca3) list_setting_number_pane_vc_g1

0x2e3e,	// (0x00051caf) list_setting_number_pane_vc_g2_ParamLimits

0x2e3e,	// (0x00051caf) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005e65a) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005e65a) list_setting_number_pane_vc_g

0x17d8,	// (0x00050649) list_setting_number_pane_vc_t1_ParamLimits

0x17d8,	// (0x00050649) list_setting_number_pane_vc_t1

0x17ec,	// (0x0005065d) list_setting_number_pane_vc_t2_ParamLimits

0x17ec,	// (0x0005065d) list_setting_number_pane_vc_t2

0x1808,	// (0x00050679) list_setting_number_pane_vc_t3_ParamLimits

0x1808,	// (0x00050679) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0005e65f) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0005e65f) list_setting_number_pane_vc_t

0x1834,	// (0x000506a5) set_value_pane_vc_ParamLimits

0x1834,	// (0x000506a5) set_value_pane_vc

0x69c0,	// (0x00055831) list_double2_graphic_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double2_graphic_pane_vc

0x2e7b,	// (0x00051cec) list_double2_large_graphic_pane_vc_ParamLimits

0x2e7b,	// (0x00051cec) list_double2_large_graphic_pane_vc

0x69c0,	// (0x00055831) list_double2_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double2_pane_vc

0x69c0,	// (0x00055831) list_double_graphic_heading_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double_graphic_heading_pane_vc

0x69c0,	// (0x00055831) list_double_graphic_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double_graphic_pane_vc

0x69c0,	// (0x00055831) list_double_heading_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double_heading_pane_vc

0x2e8c,	// (0x00051cfd) list_double_large_graphic_pane_vc_ParamLimits

0x2e8c,	// (0x00051cfd) list_double_large_graphic_pane_vc

0x69c0,	// (0x00055831) list_double_number_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double_number_pane_vc

0x69c0,	// (0x00055831) list_double_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double_pane_vc

0x69c0,	// (0x00055831) list_double_time_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_double_time_pane_vc

0x69c0,	// (0x00055831) list_setting_number_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_setting_number_pane_vc

0x69c0,	// (0x00055831) list_setting_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_setting_pane_vc

0x69c0,	// (0x00055831) list_single_graphic_heading_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_single_graphic_heading_pane_vc

0x69c0,	// (0x00055831) list_single_heading_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_single_heading_pane_vc

0x69c0,	// (0x00055831) list_single_number_heading_pane_vc_ParamLimits

0x69c0,	// (0x00055831) list_single_number_heading_pane_vc

0x1717,	// (0x00050588) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1717,	// (0x00050588) list_double_graphic_heading_pane_vc_g1

0x4b23,	// (0x00053994) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4b23,	// (0x00053994) list_double_graphic_heading_pane_vc_g2

0x2e26,	// (0x00051c97) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2e26,	// (0x00051c97) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005e634) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e634) list_double_graphic_heading_pane_vc_g

0x2f56,	// (0x00051dc7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2f56,	// (0x00051dc7) list_double_graphic_heading_pane_vc_t1

0x2f72,	// (0x00051de3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2f72,	// (0x00051de3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0005e864) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0005e864) list_double_graphic_heading_pane_vc_t

0x2e32,	// (0x00051ca3) list_setting_pane_vc_g1_ParamLimits

0x2e32,	// (0x00051ca3) list_setting_pane_vc_g1

0x2e3e,	// (0x00051caf) list_setting_pane_vc_g2_ParamLimits

0x2e3e,	// (0x00051caf) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0005e65a) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0005e65a) list_setting_pane_vc_g

0x2f90,	// (0x00051e01) list_setting_pane_vc_t1_ParamLimits

0x2f90,	// (0x00051e01) list_setting_pane_vc_t1

0x2fac,	// (0x00051e1d) list_setting_pane_vc_t2_ParamLimits

0x2fac,	// (0x00051e1d) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0005e892) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0005e892) list_setting_pane_vc_t

0x1834,	// (0x000506a5) set_value_pane_cp_vc_ParamLimits

0x1834,	// (0x000506a5) set_value_pane_cp_vc

0x4b23,	// (0x00053994) list_single_number_heading_pane_vc_g1_ParamLimits

0x4b23,	// (0x00053994) list_single_number_heading_pane_vc_g1

0x2e26,	// (0x00051c97) list_single_number_heading_pane_vc_g2_ParamLimits

0x2e26,	// (0x00051c97) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e443) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e443) list_single_number_heading_pane_vc_g

0x2fc8,	// (0x00051e39) list_single_number_heading_pane_vc_t1_ParamLimits

0x2fc8,	// (0x00051e39) list_single_number_heading_pane_vc_t1

0x2fde,	// (0x00051e4f) list_single_number_heading_pane_vc_t2_ParamLimits

0x2fde,	// (0x00051e4f) list_single_number_heading_pane_vc_t2

0x2ff0,	// (0x00051e61) list_single_number_heading_pane_vc_t3_ParamLimits

0x2ff0,	// (0x00051e61) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0005e897) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0005e897) list_single_number_heading_pane_vc_t

0x1717,	// (0x00050588) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1717,	// (0x00050588) list_single_graphic_heading_pane_vc_g1

0x4b23,	// (0x00053994) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4b23,	// (0x00053994) list_single_graphic_heading_pane_vc_g4

0x2e26,	// (0x00051c97) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2e26,	// (0x00051c97) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005e634) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005e634) list_single_graphic_heading_pane_vc_g

0x2fc8,	// (0x00051e39) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2fc8,	// (0x00051e39) list_single_graphic_heading_pane_vc_t1

0x3002,	// (0x00051e73) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3002,	// (0x00051e73) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0005e89e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0005e89e) list_single_graphic_heading_pane_vc_t

0x4b23,	// (0x00053994) list_double2_pane_vc_g1_ParamLimits

0x4b23,	// (0x00053994) list_double2_pane_vc_g1

0x2e26,	// (0x00051c97) list_double2_pane_vc_g2_ParamLimits

0x2e26,	// (0x00051c97) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e443) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e443) list_double2_pane_vc_g

0x3014,	// (0x00051e85) list_double2_pane_vc_t1_ParamLimits

0x3014,	// (0x00051e85) list_double2_pane_vc_t1

0x302a,	// (0x00051e9b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x302a,	// (0x00051e9b) list_double2_large_graphic_pane_vc_g1

0x3036,	// (0x00051ea7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3036,	// (0x00051ea7) list_double2_large_graphic_pane_vc_g2

0x3042,	// (0x00051eb3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3042,	// (0x00051eb3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0005e45b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0005e45b) list_double2_large_graphic_pane_vc_g

0x304e,	// (0x00051ebf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x304e,	// (0x00051ebf) list_double2_large_graphic_pane_vc_t1

0x3064,	// (0x00051ed5) list_double_time_pane_vc_g1_ParamLimits

0x3064,	// (0x00051ed5) list_double_time_pane_vc_g1

0x3070,	// (0x00051ee1) list_double_time_pane_vc_g2_ParamLimits

0x3070,	// (0x00051ee1) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0005e8a3) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0005e8a3) list_double_time_pane_vc_g

0x307c,	// (0x00051eed) list_double_time_pane_vc_t1_ParamLimits

0x307c,	// (0x00051eed) list_double_time_pane_vc_t1

0x30a0,	// (0x00051f11) list_double_time_pane_vc_t2_ParamLimits

0x30a0,	// (0x00051f11) list_double_time_pane_vc_t2

0x30ef,	// (0x00051f60) list_double_time_pane_vc_t3_ParamLimits

0x30ef,	// (0x00051f60) list_double_time_pane_vc_t3

0x3101,	// (0x00051f72) list_double_time_pane_vc_t4_ParamLimits

0x3101,	// (0x00051f72) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0005e8a8) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0005e8a8) list_double_time_pane_vc_t

0x4b23,	// (0x00053994) list_double_pane_vc_g1_ParamLimits

0x4b23,	// (0x00053994) list_double_pane_vc_g1

0x2e26,	// (0x00051c97) list_double_pane_vc_g2_ParamLimits

0x2e26,	// (0x00051c97) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e443) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e443) list_double_pane_vc_g

0x3115,	// (0x00051f86) list_double_pane_vc_t1_ParamLimits

0x3115,	// (0x00051f86) list_double_pane_vc_t1

0x3129,	// (0x00051f9a) list_double_pane_vc_t2_ParamLimits

0x3129,	// (0x00051f9a) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0005e8b1) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0005e8b1) list_double_pane_vc_t

0x4b23,	// (0x00053994) list_double_number_pane_vc_g1_ParamLimits

0x4b23,	// (0x00053994) list_double_number_pane_vc_g1

0x2e26,	// (0x00051c97) list_double_number_pane_vc_g2_ParamLimits

0x2e26,	// (0x00051c97) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e443) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e443) list_double_number_pane_vc_g

0x3141,	// (0x00051fb2) list_double_number_pane_vc_t1_ParamLimits

0x3141,	// (0x00051fb2) list_double_number_pane_vc_t1

0x3153,	// (0x00051fc4) list_double_number_pane_vc_t2_ParamLimits

0x3153,	// (0x00051fc4) list_double_number_pane_vc_t2

0x3167,	// (0x00051fd8) list_double_number_pane_vc_t3_ParamLimits

0x3167,	// (0x00051fd8) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0005e8b6) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0005e8b6) list_double_number_pane_vc_t

0x317f,	// (0x00051ff0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x317f,	// (0x00051ff0) list_double_large_graphic_pane_vc_g1

0x31a1,	// (0x00052012) list_double_large_graphic_pane_vc_g2_ParamLimits

0x31a1,	// (0x00052012) list_double_large_graphic_pane_vc_g2

0x31b5,	// (0x00052026) list_double_large_graphic_pane_vc_g3_ParamLimits

0x31b5,	// (0x00052026) list_double_large_graphic_pane_vc_g3

0x31c4,	// (0x00052035) list_double_large_graphic_pane_vc_g4_ParamLimits

0x31c4,	// (0x00052035) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0005e8bd) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0005e8bd) list_double_large_graphic_pane_vc_g

0x31d0,	// (0x00052041) list_double_large_graphic_pane_vc_t1_ParamLimits

0x31d0,	// (0x00052041) list_double_large_graphic_pane_vc_t1

0x31ec,	// (0x0005205d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x31ec,	// (0x0005205d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0005e8c6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0005e8c6) list_double_large_graphic_pane_vc_t

0x4b23,	// (0x00053994) list_double_heading_pane_vc_g1_ParamLimits

0x4b23,	// (0x00053994) list_double_heading_pane_vc_g1

0x2e26,	// (0x00051c97) list_double_heading_pane_vc_g2_ParamLimits

0x2e26,	// (0x00051c97) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005e443) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005e443) list_double_heading_pane_vc_g

0x320e,	// (0x0005207f) list_double_heading_pane_vc_t1_ParamLimits

0x320e,	// (0x0005207f) list_double_heading_pane_vc_t1

0x3222,	// (0x00052093) list_double_heading_pane_vc_t2_ParamLimits

0x3222,	// (0x00052093) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0005e8cb) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0005e8cb) list_double_heading_pane_vc_t

0x323a,	// (0x000520ab) list_double_graphic_pane_vc_g1_ParamLimits

0x323a,	// (0x000520ab) list_double_graphic_pane_vc_g1

0x3246,	// (0x000520b7) list_double_graphic_pane_vc_g2_ParamLimits

0x3246,	// (0x000520b7) list_double_graphic_pane_vc_g2

0x4b23,	// (0x00053994) list_double_graphic_pane_vc_g3_ParamLimits

0x4b23,	// (0x00053994) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0005e8d0) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0005e8d0) list_double_graphic_pane_vc_g

0x3263,	// (0x000520d4) list_double_graphic_pane_vc_t1_ParamLimits

0x3263,	// (0x000520d4) list_double_graphic_pane_vc_t1

0x328d,	// (0x000520fe) list_double_graphic_pane_vc_t2_ParamLimits

0x328d,	// (0x000520fe) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0005e8d9) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0005e8d9) list_double_graphic_pane_vc_t

0xf4d2,	// (0x0005e343) aid_size_cell_fastswap

0xb6a2,	// (0x0005a513) aid_size_cell_touch_ParamLimits

0xb6a2,	// (0x0005a513) aid_size_cell_touch

0x01c4,	// (0x0004f035) popup_fast_swap_wide_window_ParamLimits

0x01c4,	// (0x0004f035) popup_fast_swap_wide_window

0xb852,	// (0x0005a6c3) touch_pane_ParamLimits

0xb852,	// (0x0005a6c3) touch_pane

0x3f41,	// (0x00052db2) button_value_adjust_pane_cp2

0x084a,	// (0x0004f6bb) button_value_adjust_pane_cp4

0x086e,	// (0x0004f6df) form_field_data_pane_cp2

0xbd55,	// (0x0005abc6) form_field_data_wide_pane_cp2

0x43b5,	// (0x00053226) bg_scroll_pane_ParamLimits

0x0c52,	// (0x0004fac3) scroll_handle_pane_ParamLimits

0x0c66,	// (0x0004fad7) scroll_sc2_down_pane_ParamLimits

0x0c66,	// (0x0004fad7) scroll_sc2_down_pane

0x43e6,	// (0x00053257) scroll_sc2_up_pane_ParamLimits

0x43e6,	// (0x00053257) scroll_sc2_up_pane

0xe0d2,	// (0x0005cf43) grid_wheel_folder_pane_g1_ParamLimits

0xe0d2,	// (0x0005cf43) grid_wheel_folder_pane_g1

0x0e99,	// (0x0004fd0a) clock_nsta_pane_cp2_ParamLimits

0x0e99,	// (0x0004fd0a) clock_nsta_pane_cp2

0xd4ba,	// (0x0005c32b) listscroll_midp_pane_ParamLimits

0xd4c6,	// (0x0005c337) midp_canvas_pane

0x4ee6,	// (0x00053d57) nsta_clock_indic_pane

0x4f1a,	// (0x00053d8b) listscroll_form_pane_vc

0x4f22,	// (0x00053d93) listscroll_set_pane_vc_ParamLimits

0x4f22,	// (0x00053d93) listscroll_set_pane_vc

0xd74b,	// (0x0005c5bc) clock_nsta_pane

0xd775,	// (0x0005c5e6) indicator_nsta_pane

0x5370,	// (0x000541e1) bg_popup_sub_pane_cp2_ParamLimits

0x5384,	// (0x000541f5) find_pane_cp2_ParamLimits

0x5384,	// (0x000541f5) find_pane_cp2

0x539a,	// (0x0005420b) grid_toobar_pane_ParamLimits

0x547a,	// (0x000542eb) list_form_gen_pane_vc_ParamLimits

0x547a,	// (0x000542eb) list_form_gen_pane_vc

0x5490,	// (0x00054301) scroll_pane_cp8_vc_ParamLimits

0x5490,	// (0x00054301) scroll_pane_cp8_vc

0x550c,	// (0x0005437d) data_form_wide_pane_vc_ParamLimits

0x550c,	// (0x0005437d) data_form_wide_pane_vc

0x5518,	// (0x00054389) form_field_data_wide_pane_vc_g1

0x5520,	// (0x00054391) form_field_data_wide_pane_vc_t1_ParamLimits

0x5520,	// (0x00054391) form_field_data_wide_pane_vc_t1

0x3f55,	// (0x00052dc6) input_focus_pane_cp6_vc_ParamLimits

0x3f55,	// (0x00052dc6) input_focus_pane_cp6_vc

0x5866,	// (0x000546d7) list_midp_pane_ParamLimits

0x6b4c,	// (0x000559bd) scroll_pane_cp16_ParamLimits

0x6b4c,	// (0x000559bd) scroll_pane_cp16

0x58b4,	// (0x00054725) button_value_adjust_pane_ParamLimits

0x58b4,	// (0x00054725) button_value_adjust_pane

0xdd1b,	// (0x0005cb8c) button_value_adjust_pane_cp6_ParamLimits

0xdd1b,	// (0x0005cb8c) button_value_adjust_pane_cp6

0xde35,	// (0x0005cca6) settings_code_pane_cp_ParamLimits

0xde35,	// (0x0005cca6) settings_code_pane_cp

0x2ca4,	// (0x00051b15) cell_touch_pane_g1

0x2ca4,	// (0x00051b15) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005e579) cell_touch_pane_g

0xdfc0,	// (0x0005ce31) cell_touch_pane_cp_ParamLimits

0xdfc0,	// (0x0005ce31) cell_touch_pane_cp

0xdfdc,	// (0x0005ce4d) cell_touch_pane_ParamLimits

0xdfdc,	// (0x0005ce4d) cell_touch_pane

0x2ca4,	// (0x00051b15) scroll_sc2_down_pane_g1

0x2ca4,	// (0x00051b15) scroll_sc2_up_pane_g1

0x2cae,	// (0x00051b1f) bg_set_opt_pane_cp4_vc

0x6edc,	// (0x00055d4d) list_set_graphic_pane_vc_g1_ParamLimits

0x6edc,	// (0x00055d4d) list_set_graphic_pane_vc_g1

0x6ee8,	// (0x00055d59) list_set_graphic_pane_vc_g2_ParamLimits

0x6ee8,	// (0x00055d59) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0005e869) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0005e869) list_set_graphic_pane_vc_g

0x6ef4,	// (0x00055d65) text_primary_small_cp13_vc_ParamLimits

0x6ef4,	// (0x00055d65) text_primary_small_cp13_vc

0x6f0c,	// (0x00055d7d) list_set_graphic_pane_vc_ParamLimits

0x6f0c,	// (0x00055d7d) list_set_graphic_pane_vc

0x2cae,	// (0x00051b1f) input_focus_pane_cp2_vc

0x2ca4,	// (0x00051b15) setting_code_pane_vc_g1

0x36ff,	// (0x00052570) setting_code_pane_vc_t1

0x6f1e,	// (0x00055d8f) set_text_pane_vc_t1_ParamLimits

0x6f1e,	// (0x00055d8f) set_text_pane_vc_t1

0x2cae,	// (0x00051b1f) input_focus_pane_cp1_vc

0x6f3a,	// (0x00055dab) list_set_text_pane_vc

0x2ca4,	// (0x00051b15) setting_text_pane_vc_g1

0x2cae,	// (0x00051b1f) bg_set_opt_pane_cp2_vc

0x36f6,	// (0x00052567) setting_slider_graphic_pane_vc_g1

0x6f44,	// (0x00055db5) setting_slider_graphic_pane_vc_t1

0x6f54,	// (0x00055dc5) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0005e86e) setting_slider_graphic_pane_vc_t

0x6f64,	// (0x00055dd5) slider_set_pane_cp_vc

0x6f6c,	// (0x00055ddd) slider_set_pane_vc_g1

0x6f75,	// (0x00055de6) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0005e873) slider_set_pane_vc_g

0x3fa1,	// (0x00052e12) set_opt_bg_pane_g1_copy1

0x3fa9,	// (0x00052e1a) set_opt_bg_pane_g2_copy1

0x6fa1,	// (0x00055e12) set_opt_bg_pane_g3_copy1

0x3fb9,	// (0x00052e2a) set_opt_bg_pane_g4_copy1

0x3fc1,	// (0x00052e32) set_opt_bg_pane_g5_copy1

0x3fc9,	// (0x00052e3a) set_opt_bg_pane_g6_copy1

0x6fab,	// (0x00055e1c) set_opt_bg_pane_g7_copy1

0x6fb3,	// (0x00055e24) set_opt_bg_pane_g8_copy1

0x6fbd,	// (0x00055e2e) set_opt_bg_pane_g9_copy1

0x2cae,	// (0x00051b1f) bg_set_opt_pane_cp_vc

0x6fc7,	// (0x00055e38) setting_slider_pane_vc_t1

0x6fd6,	// (0x00055e47) setting_slider_pane_vc_t2

0x6fe6,	// (0x00055e57) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0005e882) setting_slider_pane_vc_t

0x6ff6,	// (0x00055e67) slider_set_pane_vc

0x191a,	// (0x0005078b) volume_set_pane_vc_g1

0x1923,	// (0x00050794) volume_set_pane_vc_g2

0x192c,	// (0x0005079d) volume_set_pane_vc_g3

0x1935,	// (0x000507a6) volume_set_pane_vc_g4

0x193e,	// (0x000507af) volume_set_pane_vc_g5

0x1947,	// (0x000507b8) volume_set_pane_vc_g6

0x1950,	// (0x000507c1) volume_set_pane_vc_g7

0x1959,	// (0x000507ca) volume_set_pane_vc_g8

0x1962,	// (0x000507d3) volume_set_pane_vc_g9

0x196b,	// (0x000507dc) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0005e727) volume_set_pane_vc_g

0x6ffe,	// (0x00055e6f) volume_set_pane_vc

0x7006,	// (0x00055e77) button_value_adjust_pane_cp1_vc

0x7010,	// (0x00055e81) list_highlight_pane_cp2_vc

0x7019,	// (0x00055e8a) list_set_pane_vc_ParamLimits

0x7019,	// (0x00055e8a) list_set_pane_vc

0x7077,	// (0x00055ee8) main_pane_set_vc_t1_ParamLimits

0x7077,	// (0x00055ee8) main_pane_set_vc_t1

0x708c,	// (0x00055efd) main_pane_set_vc_t2_ParamLimits

0x708c,	// (0x00055efd) main_pane_set_vc_t2

0x709e,	// (0x00055f0f) main_pane_set_vc_t3_ParamLimits

0x709e,	// (0x00055f0f) main_pane_set_vc_t3

0x70b2,	// (0x00055f23) main_pane_set_vc_t4_ParamLimits

0x70b2,	// (0x00055f23) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0005e889) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0005e889) main_pane_set_vc_t

0x70c6,	// (0x00055f37) setting_code_pane_vc_ParamLimits

0x70c6,	// (0x00055f37) setting_code_pane_vc

0x70d7,	// (0x00055f48) setting_slider_graphic_pane_vc

0x70d7,	// (0x00055f48) setting_slider_pane_vc

0x70d7,	// (0x00055f48) setting_text_pane_vc

0x70d7,	// (0x00055f48) setting_volume_pane_vc

0x70e1,	// (0x00055f52) scroll_pane_cp121_vc

0x3f2f,	// (0x00052da0) set_content_pane_vc

0x70e9,	// (0x00055f5a) button_value_adjust_pane_g1

0x70f2,	// (0x00055f63) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0005e8de) button_value_adjust_pane_g

0x70fb,	// (0x00055f6c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x70fb,	// (0x00055f6c) form_field_slider_wide_pane_vc_t1

0x710f,	// (0x00055f80) form_field_slider_wide_pane_vc_t2_ParamLimits

0x710f,	// (0x00055f80) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0005e8e3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0005e8e3) form_field_slider_wide_pane_vc_t

0x392f,	// (0x000527a0) input_focus_pane_cp10_vc_ParamLimits

0x392f,	// (0x000527a0) input_focus_pane_cp10_vc

0x713d,	// (0x00055fae) slider_cont_pane_cp1_vc_ParamLimits

0x713d,	// (0x00055fae) slider_cont_pane_cp1_vc

0x714f,	// (0x00055fc0) slider_form_pane_g1_cp2

0x6f75,	// (0x00055de6) slider_form_pane_g2_cp2

0x717c,	// (0x00055fed) form_field_slider_pane_vc_t3

0x718a,	// (0x00055ffb) form_field_slider_pane_vc_t4

0x7198,	// (0x00056009) slider_form_pane_vc_ParamLimits

0x7198,	// (0x00056009) slider_form_pane_vc

0x71a5,	// (0x00056016) form_field_slider_pane_vc_t1_ParamLimits

0x71a5,	// (0x00056016) form_field_slider_pane_vc_t1

0x710f,	// (0x00055f80) form_field_slider_pane_vc_t2_ParamLimits

0x710f,	// (0x00055f80) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0005e8f5) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0005e8f5) form_field_slider_pane_vc_t

0x392f,	// (0x000527a0) input_focus_pane_cp9_vc_ParamLimits

0x392f,	// (0x000527a0) input_focus_pane_cp9_vc

0x71c1,	// (0x00056032) slider_cont_pane_vc_ParamLimits

0x71c1,	// (0x00056032) slider_cont_pane_vc

0x71d5,	// (0x00056046) list_form_graphic_pane_cp_vc_ParamLimits

0x71d5,	// (0x00056046) list_form_graphic_pane_cp_vc

0x5518,	// (0x00054389) form_field_popup_wide_pane_vc_g1

0x71ea,	// (0x0005605b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x71ea,	// (0x0005605b) form_field_popup_wide_pane_vc_t1

0x3f55,	// (0x00052dc6) input_focus_pane_cp8_vc_ParamLimits

0x3f55,	// (0x00052dc6) input_focus_pane_cp8_vc

0x722f,	// (0x000560a0) list_form_wide_pane_vc_ParamLimits

0x722f,	// (0x000560a0) list_form_wide_pane_vc

0x723b,	// (0x000560ac) list_form_graphic_pane_vc_g1

0x7243,	// (0x000560b4) list_form_graphic_pane_vc_t1_ParamLimits

0x7243,	// (0x000560b4) list_form_graphic_pane_vc_t1

0x36b4,	// (0x00052525) list_highlight_pane_cp5_vc_ParamLimits

0x36b4,	// (0x00052525) list_highlight_pane_cp5_vc

0x725f,	// (0x000560d0) list_form_graphic_pane_vc_ParamLimits

0x725f,	// (0x000560d0) list_form_graphic_pane_vc

0x5518,	// (0x00054389) form_field_popup_pane_vc_g1

0x7275,	// (0x000560e6) form_field_popup_pane_vc_t1_ParamLimits

0x7275,	// (0x000560e6) form_field_popup_pane_vc_t1

0x3f55,	// (0x00052dc6) input_focus_pane_cp7_vc_ParamLimits

0x3f55,	// (0x00052dc6) input_focus_pane_cp7_vc

0x728c,	// (0x000560fd) list_form_pane_vc_ParamLimits

0x728c,	// (0x000560fd) list_form_pane_vc

0x7298,	// (0x00056109) data_form_pane_vc_t1_ParamLimits

0x7298,	// (0x00056109) data_form_pane_vc_t1

0x3fa1,	// (0x00052e12) input_focus_pane_vc_g1

0x3fa9,	// (0x00052e1a) input_focus_pane_vc_g2

0x3fb1,	// (0x00052e22) input_focus_pane_vc_g3

0x3fb9,	// (0x00052e2a) input_focus_pane_vc_g4

0x3fc1,	// (0x00052e32) input_focus_pane_vc_g5

0x3fc9,	// (0x00052e3a) input_focus_pane_vc_g6

0x3fd1,	// (0x00052e42) input_focus_pane_vc_g7

0x3fd9,	// (0x00052e4a) input_focus_pane_vc_g8

0x3fe1,	// (0x00052e52) input_focus_pane_vc_g9

0x2ca4,	// (0x00051b15) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005e502) input_focus_pane_vc_g

0x550c,	// (0x0005437d) data_form_pane_vc_ParamLimits

0x550c,	// (0x0005437d) data_form_pane_vc

0x5518,	// (0x00054389) form_field_data_pane_vc_g1

0x72b3,	// (0x00056124) form_field_data_pane_vc_t1_ParamLimits

0x72b3,	// (0x00056124) form_field_data_pane_vc_t1

0x3f55,	// (0x00052dc6) input_focus_pane_vc_ParamLimits

0x3f55,	// (0x00052dc6) input_focus_pane_vc

0x72cd,	// (0x0005613e) button_value_adjust_pane_cp3_vc

0x72d5,	// (0x00056146) button_value_adjust_pane_cp5_vc

0x72dd,	// (0x0005614e) form_field_data_pane_vc_ParamLimits

0x72dd,	// (0x0005614e) form_field_data_pane_vc

0x72f4,	// (0x00056165) form_field_data_pane_vc_cp2

0x72fc,	// (0x0005616d) form_field_data_wide_pane_vc_ParamLimits

0x72fc,	// (0x0005616d) form_field_data_wide_pane_vc

0x7312,	// (0x00056183) form_field_data_wide_pane_vc_cp2

0x731a,	// (0x0005618b) form_field_popup_pane_vc_ParamLimits

0x731a,	// (0x0005618b) form_field_popup_pane_vc

0x7331,	// (0x000561a2) form_field_popup_wide_pane_vc_ParamLimits

0x7331,	// (0x000561a2) form_field_popup_wide_pane_vc

0x7347,	// (0x000561b8) form_field_slider_pane_vc_ParamLimits

0x7347,	// (0x000561b8) form_field_slider_pane_vc

0x735a,	// (0x000561cb) form_field_slider_wide_pane_vc_ParamLimits

0x735a,	// (0x000561cb) form_field_slider_wide_pane_vc

0xdffa,	// (0x0005ce6b) grid_touch_1_pane_ParamLimits

0xdffa,	// (0x0005ce6b) grid_touch_1_pane

0xe00e,	// (0x0005ce7f) grid_touch_2_pane_ParamLimits

0xe00e,	// (0x0005ce7f) grid_touch_2_pane

0x7428,	// (0x00056299) touch_pane_g1_ParamLimits

0x7428,	// (0x00056299) touch_pane_g1

0x7391,	// (0x00056202) cell_app_pane_cp_wide_ParamLimits

0x7391,	// (0x00056202) cell_app_pane_cp_wide

0x73a2,	// (0x00056213) grid_popup_fast_wide_pane_ParamLimits

0x73a2,	// (0x00056213) grid_popup_fast_wide_pane

0x73b6,	// (0x00056227) scroll_pane_cp19_ParamLimits

0x73b6,	// (0x00056227) scroll_pane_cp19

0x2cae,	// (0x00051b1f) bg_popup_window_pane_cp20

0x73ca,	// (0x0005623b) listscroll_popup_fast_wide_pane

0x4109,	// (0x00052f7a) grid_indicator_nsta_pane

0x73d2,	// (0x00056243) clock_nsta_pane_g1

0x73db,	// (0x0005624c) clock_nsta_pane_t1

0xe038,	// (0x0005cea9) cell_indicator_nsta_pane_ParamLimits

0xe038,	// (0x0005cea9) cell_indicator_nsta_pane

0x7428,	// (0x00056299) cell_indicator_nsta_pane_g1

0xe04f,	// (0x0005cec0) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0005e906) cell_indicator_nsta_pane_g

0x7443,	// (0x000562b4) clock_nsta_pane_cp

0x744c,	// (0x000562bd) indicator_nsta_pane_cp

0x7454,	// (0x000562c5) nsta_clock_indic_pane_g1

0x377d,	// (0x000525ee) grid_indicator_pane

0x44db,	// (0x0005334c) scroll_pane_cp29

0x0de8,	// (0x0004fc59) indicator_nsta_pane_cp2_ParamLimits

0x0de8,	// (0x0004fc59) indicator_nsta_pane_cp2

0x36b4,	// (0x00052525) main_apps_wheel_pane

0x5727,	// (0x00054598) form_midp_field_text_pane_ParamLimits

0x5872,	// (0x000546e3) scroll_bar_cp050_ParamLimits

0x74a4,	// (0x00056315) cell_indicator_pane_ParamLimits

0x74a4,	// (0x00056315) cell_indicator_pane

0x74bb,	// (0x0005632c) cell_indicator_pane_g1

0xe05c,	// (0x0005cecd) grid_wheel_folder_pane_ParamLimits

0xe05c,	// (0x0005cecd) grid_wheel_folder_pane

0xe06a,	// (0x0005cedb) list_wheel_apps_pane_ParamLimits

0xe06a,	// (0x0005cedb) list_wheel_apps_pane

0xe078,	// (0x0005cee9) main_apps_wheel_pane_g1_ParamLimits

0xe078,	// (0x0005cee9) main_apps_wheel_pane_g1

0xe084,	// (0x0005cef5) main_apps_wheel_pane_g2_ParamLimits

0xe084,	// (0x0005cef5) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0005e922) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0005e922) main_apps_wheel_pane_g

0xe092,	// (0x0005cf03) main_apps_wheel_pane_t1_ParamLimits

0xe092,	// (0x0005cf03) main_apps_wheel_pane_t1

0xe0a6,	// (0x0005cf17) list_wheel_apps_pane_g1

0xe0ae,	// (0x0005cf1f) list_wheel_apps_pane_g2

0xe0b6,	// (0x0005cf27) list_wheel_apps_pane_g3

0xe0be,	// (0x0005cf2f) list_wheel_apps_pane_g4

0xe0c8,	// (0x0005cf39) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0005e927) list_wheel_apps_pane_g

0x4a6a,	// (0x000538db) navi_icon_text_pane

0xd63f,	// (0x0005c4b0) aid_fill_nsta

0x7580,	// (0x000563f1) navi_icon_text_pane_g1

0x758c,	// (0x000563fd) navi_icon_text_pane_t1

0x48f1,	// (0x00053762) list_set_graphic_pane_t1_ParamLimits

0x48f1,	// (0x00053762) list_set_graphic_pane_t1

0x5fd5,	// (0x00054e46) popup_midp_note_alarm_window_t6_ParamLimits

0x5fd5,	// (0x00054e46) popup_midp_note_alarm_window_t6

0x5fe7,	// (0x00054e58) popup_midp_note_alarm_window_t7_ParamLimits

0x5fe7,	// (0x00054e58) popup_midp_note_alarm_window_t7

0x5ff9,	// (0x00054e6a) popup_midp_note_alarm_window_t8_ParamLimits

0x5ff9,	// (0x00054e6a) popup_midp_note_alarm_window_t8

0x600b,	// (0x00054e7c) popup_midp_note_alarm_window_t9_ParamLimits

0x600b,	// (0x00054e7c) popup_midp_note_alarm_window_t9

0x601d,	// (0x00054e8e) popup_midp_note_alarm_window_t10_ParamLimits

0x601d,	// (0x00054e8e) popup_midp_note_alarm_window_t10

0x602f,	// (0x00054ea0) popup_midp_note_alarm_window_t11_ParamLimits

0x602f,	// (0x00054ea0) popup_midp_note_alarm_window_t11

0x6041,	// (0x00054eb2) scroll_pane_cp17_ParamLimits

0x6041,	// (0x00054eb2) scroll_pane_cp17

0x191a,	// (0x0005078b) volume_small_pane_cp_g1

0x1c67,	// (0x00050ad8) volume_small_pane_cp_g2

0x1c70,	// (0x00050ae1) volume_small_pane_cp_g3

0x1c79,	// (0x00050aea) volume_small_pane_cp_g4

0x1c82,	// (0x00050af3) volume_small_pane_cp_g5

0x1c8b,	// (0x00050afc) volume_small_pane_cp_g6

0x1c94,	// (0x00050b05) volume_small_pane_cp_g7

0x1c9d,	// (0x00050b0e) volume_small_pane_cp_g8

0x1ca6,	// (0x00050b17) volume_small_pane_cp_g9

0x1caf,	// (0x00050b20) volume_small_pane_cp_g10

0x4cc7,	// (0x00053b38) midp_ticker_pane_g1_ParamLimits

0x4cd3,	// (0x00053b44) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005e5ce) midp_ticker_pane_g_ParamLimits

0x4cdf,	// (0x00053b50) midp_ticker_pane_t1_ParamLimits

0xd663,	// (0x0005c4d4) aid_fill_nsta_2

0x585e,	// (0x000546cf) list_form2_midp_pane

0x698f,	// (0x00055800) midp_editing_number_pane_ParamLimits

0x699e,	// (0x0005580f) midp_ticker_pane_ParamLimits

0x759e,	// (0x0005640f) form2_midp_field_pane

0x75c2,	// (0x00056433) scroll_pane_cp51

0x75e2,	// (0x00056453) form2_midp_button_pane_ParamLimits

0x75e2,	// (0x00056453) form2_midp_button_pane

0x75f4,	// (0x00056465) form2_midp_content_pane_ParamLimits

0x75f4,	// (0x00056465) form2_midp_content_pane

0x760e,	// (0x0005647f) form2_midp_field_choice_group_pane

0x7616,	// (0x00056487) form2_midp_field_pane_g1

0x761e,	// (0x0005648f) form2_midp_field_pane_g2

0x7626,	// (0x00056497) form2_midp_field_pane_g3

0x762e,	// (0x0005649f) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0005e94c) form2_midp_field_pane_g

0x7636,	// (0x000564a7) form2_midp_gauge_slider_pane

0x763e,	// (0x000564af) form2_midp_gauge_wait_pane

0x7646,	// (0x000564b7) form2_midp_image_pane_ParamLimits

0x7646,	// (0x000564b7) form2_midp_image_pane

0x7661,	// (0x000564d2) form2_midp_label_pane_ParamLimits

0x7661,	// (0x000564d2) form2_midp_label_pane

0xe0fb,	// (0x0005cf6c) form2_midp_label_pane_cp_ParamLimits

0xe0fb,	// (0x0005cf6c) form2_midp_label_pane_cp

0x769b,	// (0x0005650c) form2_midp_string_pane_ParamLimits

0x769b,	// (0x0005650c) form2_midp_string_pane

0xc83d,	// (0x0005b6ae) form2_midp_text_pane_ParamLimits

0xc83d,	// (0x0005b6ae) form2_midp_text_pane

0x76ad,	// (0x0005651e) form2_midp_time_pane

0x76bd,	// (0x0005652e) input_focus_pane_cp51_ParamLimits

0x76bd,	// (0x0005652e) input_focus_pane_cp51

0x76d5,	// (0x00056546) form2_midp_label_pane_t1_ParamLimits

0x76d5,	// (0x00056546) form2_midp_label_pane_t1

0xc856,	// (0x0005b6c7) form2_mdip_text_pane_t1_ParamLimits

0xc856,	// (0x0005b6c7) form2_mdip_text_pane_t1

0x32f4,	// (0x00052165) form2_midp_time_pane_t1

0x771e,	// (0x0005658f) form2_midp_gauge_slider_pane_t1

0xe11a,	// (0x0005cf8b) form2_midp_gauge_slider_pane_t2

0xe12c,	// (0x0005cf9d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0005e955) form2_midp_gauge_slider_pane_t

0x7754,	// (0x000565c5) form2_midp_slider_pane

0x7760,	// (0x000565d1) form2_midp_gauge_wait_pane_t1

0x776e,	// (0x000565df) form2_midp_wait_pane_ParamLimits

0x776e,	// (0x000565df) form2_midp_wait_pane

0xe13e,	// (0x0005cfaf) list_single_2graphic_pane_cp4_ParamLimits

0xe13e,	// (0x0005cfaf) list_single_2graphic_pane_cp4

0xdb19,	// (0x0005c98a) list_single_midp_graphic_pane_cp_ParamLimits

0xdb19,	// (0x0005c98a) list_single_midp_graphic_pane_cp

0x2cae,	// (0x00051b1f) list_highlight_pane_cp20

0x77bd,	// (0x0005662e) list_single_2graphic_pane_g1_cp4

0x77c5,	// (0x00056636) list_single_2graphic_pane_g2_cp4

0x77cd,	// (0x0005663e) list_single_2graphic_pane_t1_cp4

0x36b4,	// (0x00052525) list_highlight_pane_cp21

0x77dc,	// (0x0005664d) list_single_midp_graphic_pane_g4_cp

0x77eb,	// (0x0005665c) list_single_midp_graphic_pane_t1_cp

0xe152,	// (0x0005cfc3) form2_mdip_string_pane_t1_ParamLimits

0xe152,	// (0x0005cfc3) form2_mdip_string_pane_t1

0x2cae,	// (0x00051b1f) bg_wml_button_pane_cp2

0x2ca4,	// (0x00051b15) form2_midp_image_pane_g1

0x2dd5,	// (0x00051c46) list_double_large_graphic_pane_g5_ParamLimits

0x2dd5,	// (0x00051c46) list_double_large_graphic_pane_g5

0xd4ba,	// (0x0005c32b) midp_form_pane_ParamLimits

0x36b4,	// (0x00052525) main_apps_wheel_pane_ParamLimits

0xc4c8,	// (0x0005b339) popup_preview_window_ParamLimits

0xc4c8,	// (0x0005b339) popup_preview_window

0x1692,	// (0x00050503) popup_touch_info_window_ParamLimits

0x1692,	// (0x00050503) popup_touch_info_window

0x16b0,	// (0x00050521) popup_touch_menu_window_ParamLimits

0x16b0,	// (0x00050521) popup_touch_menu_window

0x2c9a,	// (0x00051b0b) bg_popup_sub_pane_cp6

0x78f9,	// (0x0005676a) list_touch_menu_pane

0x7901,	// (0x00056772) list_single_touch_menu_pane_ParamLimits

0x7901,	// (0x00056772) list_single_touch_menu_pane

0x7917,	// (0x00056788) list_single_touch_menu_pane_t1

0x36b4,	// (0x00052525) bg_popup_sub_pane_cp7_ParamLimits

0x36b4,	// (0x00052525) bg_popup_sub_pane_cp7

0x7925,	// (0x00056796) heading_sub_pane

0x792d,	// (0x0005679e) list_touch_info_pane_ParamLimits

0x792d,	// (0x0005679e) list_touch_info_pane

0x793c,	// (0x000567ad) list_single_touch_info_pane_ParamLimits

0x793c,	// (0x000567ad) list_single_touch_info_pane

0x794e,	// (0x000567bf) list_single_touch_info_pane_t1

0x795c,	// (0x000567cd) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0005e963) list_single_touch_info_pane_t

0x4bea,	// (0x00053a5b) bg_popup_heading_pane_cp

0x796a,	// (0x000567db) heading_sub_pane_t1

0x54a6,	// (0x00054317) bg_popup_preview_window_pane_cp_ParamLimits

0x54a6,	// (0x00054317) bg_popup_preview_window_pane_cp

0x7925,	// (0x00056796) heading_preview_pane

0x792d,	// (0x0005679e) list_preview_pane_ParamLimits

0x792d,	// (0x0005679e) list_preview_pane

0x7978,	// (0x000567e9) popup_preview_window_g1

0x793c,	// (0x000567ad) list_single_preview_pane_ParamLimits

0x793c,	// (0x000567ad) list_single_preview_pane

0x7980,	// (0x000567f1) list_single_preview_pane_g1

0x7988,	// (0x000567f9) list_single_preview_pane_t1

0x794e,	// (0x000567bf) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0005e968) list_single_preview_pane_t

0x7996,	// (0x00056807) bg_popup_heading_pane_cp2_ParamLimits

0x7996,	// (0x00056807) bg_popup_heading_pane_cp2

0x79ac,	// (0x0005681d) heading_preview_pane_g1

0x79b4,	// (0x00056825) heading_preview_pane_t1_ParamLimits

0x79b4,	// (0x00056825) heading_preview_pane_t1

0x37a0,	// (0x00052611) soft_indicator_pane_t1_ParamLimits

0x3ebc,	// (0x00052d2d) scroll_pane_ParamLimits

0x43d4,	// (0x00053245) scroll_sc2_left_pane

0x43dd,	// (0x0005324e) scroll_sc2_right_pane

0x43fc,	// (0x0005326d) scroll_bg_pane_g1_ParamLimits

0x4411,	// (0x00053282) scroll_bg_pane_g2_ParamLimits

0x4429,	// (0x0005329a) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005e559) scroll_bg_pane_g_ParamLimits

0x43fc,	// (0x0005326d) scroll_handle_pane_g1_ParamLimits

0x444b,	// (0x000532bc) scroll_handle_pane_g2_ParamLimits

0x4429,	// (0x0005329a) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005e560) scroll_handle_pane_g_ParamLimits

0x1158,	// (0x0004ffc9) popup_choice_list_window_ParamLimits

0x1158,	// (0x0004ffc9) popup_choice_list_window

0x537c,	// (0x000541ed) choice_list_pane

0x53fe,	// (0x0005426f) cell_toolbar_pane_t1

0x5426,	// (0x00054297) toolbar_button_pane_ParamLimits

0x64fb,	// (0x0005536c) ai_gene_pane_1_t2_ParamLimits

0x64fb,	// (0x0005536c) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005e783) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005e783) ai_gene_pane_1_t

0x79d1,	// (0x00056842) scroll_sc2_left_pane_g1

0x79d1,	// (0x00056842) scroll_sc2_right_pane_g1

0x4f0e,	// (0x00053d7f) bg_popup_sub_pane_cp10

0x79db,	// (0x0005684c) list_choice_list_pane

0x79f4,	// (0x00056865) list_single_choice_list_pane_ParamLimits

0x79f4,	// (0x00056865) list_single_choice_list_pane

0x7a07,	// (0x00056878) list_single_choice_list_pane_g1

0x40da,	// (0x00052f4b) list_single_choice_list_pane_t1_ParamLimits

0x40da,	// (0x00052f4b) list_single_choice_list_pane_t1

0x7a0f,	// (0x00056880) choice_list_pane_g1

0x7a17,	// (0x00056888) choice_list_pane_t1

0x2c9a,	// (0x00051b0b) input_focus_pane_cp11

0x42b1,	// (0x00053122) title_pane_stacon_g2_ParamLimits

0x42b1,	// (0x00053122) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005e53f) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005e53f) title_pane_stacon_g

0x4bea,	// (0x00053a5b) cursor_press_pane

0xc175,	// (0x0005afe6) popup_fep_hwr_window_ParamLimits

0xc175,	// (0x0005afe6) popup_fep_hwr_window

0x127e,	// (0x000500ef) popup_fep_vkb_window_ParamLimits

0x127e,	// (0x000500ef) popup_fep_vkb_window

0x7a25,	// (0x00056896) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0005e991) fep_vkb_side_pane_g_ParamLimits

0x1cf1,	// (0x00050b62) fep_hwr_candidate_pane_ParamLimits

0x1cf1,	// (0x00050b62) fep_hwr_candidate_pane

0x1d1b,	// (0x00050b8c) fep_hwr_side_pane_ParamLimits

0x1d1b,	// (0x00050b8c) fep_hwr_side_pane

0x1d3b,	// (0x00050bac) fep_hwr_top_pane_ParamLimits

0x1d3b,	// (0x00050bac) fep_hwr_top_pane

0x1d53,	// (0x00050bc4) fep_hwr_write_pane_ParamLimits

0x1d53,	// (0x00050bc4) fep_hwr_write_pane

0xfb20,	// (0x0005e991) fep_vkb_side_pane_g

0x7a2d,	// (0x0005689e) fep_hwr_top_pane_g1

0x7a3f,	// (0x000568b0) fep_hwr_top_pane_g2

0x1d8d,	// (0x00050bfe) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0005e96d) fep_hwr_top_pane_g

0x1da2,	// (0x00050c13) fep_hwr_top_text_pane

0x45cb,	// (0x0005343c) fep_hwr_top_text_pane_g1

0x7a75,	// (0x000568e6) fep_hwr_top_text_pane_t1

0x1e98,	// (0x00050d09) fep_hwr_candidate_pane_g1

0x7cc8,	// (0x00056b39) fep_vkb_keypad_pane_g3_ParamLimits

0x7cc8,	// (0x00056b39) fep_vkb_keypad_pane_g3

0x7cf0,	// (0x00056b61) fep_vkb_keypad_pane_g4_ParamLimits

0x7cf0,	// (0x00056b61) fep_vkb_keypad_pane_g4

0x7d5f,	// (0x00056bd0) fep_vkb_bottom_pane_g2_ParamLimits

0x7d5f,	// (0x00056bd0) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0005e998) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0005e998) fep_vkb_bottom_pane_g

0x79d1,	// (0x00056842) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0005e9a2) cell_vkb_side_pane_g

0x7dea,	// (0x00056c5b) cell_vkb_side_pane_t1

0x7df8,	// (0x00056c69) cell_vkb_side_pane_t1_copy1

0x79d1,	// (0x00056842) bg_fep_vkb_candidate_pane_g2

0x7f24,	// (0x00056d95) cell_vkb_candidate_pane_ParamLimits

0x7a83,	// (0x000568f4) aid_size_cell_vkb_ParamLimits

0x7a83,	// (0x000568f4) aid_size_cell_vkb

0x7f24,	// (0x00056d95) cell_vkb_candidate_pane

0x1ebf,	// (0x00050d30) bg_popup_fep_shadow_pane_g1

0xe1d4,	// (0x0005d045) fep_vkb_bottom_pane_ParamLimits

0xe1d4,	// (0x0005d045) fep_vkb_bottom_pane

0x7b47,	// (0x000569b8) fep_vkb_candidate_pane_ParamLimits

0x7b47,	// (0x000569b8) fep_vkb_candidate_pane

0xe1f9,	// (0x0005d06a) fep_vkb_keypad_pane_ParamLimits

0xe1f9,	// (0x0005d06a) fep_vkb_keypad_pane

0xe235,	// (0x0005d0a6) fep_vkb_side_pane_ParamLimits

0xe235,	// (0x0005d0a6) fep_vkb_side_pane

0xe271,	// (0x0005d0e2) fep_vkb_top_pane_ParamLimits

0xe271,	// (0x0005d0e2) fep_vkb_top_pane

0x7c21,	// (0x00056a92) fep_vkb_top_pane_g1_ParamLimits

0x7c21,	// (0x00056a92) fep_vkb_top_pane_g1

0x7c30,	// (0x00056aa1) fep_vkb_top_pane_g2_ParamLimits

0x7c30,	// (0x00056aa1) fep_vkb_top_pane_g2

0x7c3f,	// (0x00056ab0) fep_vkb_top_pane_g3_ParamLimits

0x7c3f,	// (0x00056ab0) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0005e988) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0005e988) fep_vkb_top_pane_g

0x7c5d,	// (0x00056ace) fep_vkb_top_text_pane_ParamLimits

0x7c5d,	// (0x00056ace) fep_vkb_top_text_pane

0xe2ad,	// (0x0005d11e) fep_vkb_side_pane_g1_ParamLimits

0xe2ad,	// (0x0005d11e) fep_vkb_side_pane_g1

0x7cb7,	// (0x00056b28) grid_vkb_side_pane_ParamLimits

0x7cb7,	// (0x00056b28) grid_vkb_side_pane

0x1ec7,	// (0x00050d38) bg_popup_fep_shadow_pane_g2

0x1ed0,	// (0x00050d41) bg_popup_fep_shadow_pane_g3

0x1ed8,	// (0x00050d49) bg_popup_fep_shadow_pane_g4

0x1ee1,	// (0x00050d52) bg_popup_fep_shadow_pane_g5

0x1eeb,	// (0x00050d5c) bg_popup_fep_shadow_pane_g6

0x1ef3,	// (0x00050d64) bg_popup_fep_shadow_pane_g7

0x3fb9,	// (0x00052e2a) bg_popup_fep_shadow_pane_g8

0x7d0e,	// (0x00056b7f) grid_vkb_keypad_number_pane_ParamLimits

0x7d0e,	// (0x00056b7f) grid_vkb_keypad_number_pane

0x7d1e,	// (0x00056b8f) grid_vkb_keypad_pane_ParamLimits

0x7d1e,	// (0x00056b8f) grid_vkb_keypad_pane

0x7d44,	// (0x00056bb5) fep_vkb_bottom_pane_g1_ParamLimits

0x7d44,	// (0x00056bb5) fep_vkb_bottom_pane_g1

0x7d6d,	// (0x00056bde) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d6d,	// (0x00056bde) grid_vkb_keypad_bottom_left_pane

0x7d82,	// (0x00056bf3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d82,	// (0x00056bf3) grid_vkb_keypad_bottom_right_pane

0x7d97,	// (0x00056c08) fep_vkb_top_text_pane_g1

0xe2f4,	// (0x0005d165) fep_vkb_top_text_pane_t1

0xe306,	// (0x0005d177) cell_vkb_side_pane_ParamLimits

0xe306,	// (0x0005d177) cell_vkb_side_pane

0x79d1,	// (0x00056842) cell_vkb_side_pane_g1

0x7e06,	// (0x00056c77) cell_vkb_keypad_pane_ParamLimits

0x7e06,	// (0x00056c77) cell_vkb_keypad_pane

0x7e7b,	// (0x00056cec) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0005e9b5) bg_popup_fep_shadow_pane_g

0x1f05,	// (0x00050d76) cell_hwr_side_pane_g1

0x1f05,	// (0x00050d76) cell_hwr_side_pane_g2

0x7e85,	// (0x00056cf6) cell_vkb_keypad_pane_t1

0xe31c,	// (0x0005d18d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe31c,	// (0x0005d18d) cell_vkb_keypad_bottom_left_pane

0xe331,	// (0x0005d1a2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe331,	// (0x0005d1a2) cell_vkb_keypad_bottom_right_pane

0x79d1,	// (0x00056842) cell_vkb_keypad_bottom_left_pane_g1

0x79d1,	// (0x00056842) cell_vkb_keypad_bottom_right_pane_g1

0x7ee9,	// (0x00056d5a) cell_vkb_keypad_number_pane_ParamLimits

0x7ee9,	// (0x00056d5a) cell_vkb_keypad_number_pane

0x7f08,	// (0x00056d79) cell_vkb_keypad_number_pane_g1

0x7f12,	// (0x00056d83) cell_vkb_keypad_number_pane_g2

0x7f1b,	// (0x00056d8c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0005e9a7) cell_vkb_keypad_number_pane_g

0x7e85,	// (0x00056cf6) cell_vkb_keypad_number_pane_t1

0x7f3f,	// (0x00056db0) fep_vkb_candidate_pane_g1

0x0001,

0xfb57,	// (0x0005e9c8) cell_hwr_side_pane_g

0x7f58,	// (0x00056dc9) cell_hwr_side_pane_t1

0x1f0f,	// (0x00050d80) cell_hwr_side_pane_t1_copy1

0x1f1d,	// (0x00050d8e) cell_hwr_candidate_pane_g1

0x1f4c,	// (0x00050dbd) cell_hwr_candidate_pane_t1

0x79d1,	// (0x00056842) cell_vkb_candidate_pane_g2

0x7f9c,	// (0x00056e0d) cell_vkb_candidate_pane_t1

0x1cb8,	// (0x00050b29) bg_popup_fep_shadow_pane_ParamLimits

0x1cb8,	// (0x00050b29) bg_popup_fep_shadow_pane

0x1d6d,	// (0x00050bde) bg_fep_hwr_top_pane_g4

0x7a51,	// (0x000568c2) bg_hwr_side_pane_g1_ParamLimits

0x7a51,	// (0x000568c2) bg_hwr_side_pane_g1

0xc887,	// (0x0005b6f8) cell_hwr_side_pane_ParamLimits

0xc887,	// (0x0005b6f8) cell_hwr_side_pane

0x1e19,	// (0x00050c8a) fep_hwr_write_pane_g1_ParamLimits

0x1e19,	// (0x00050c8a) fep_hwr_write_pane_g1

0x1e26,	// (0x00050c97) fep_hwr_write_pane_g2_ParamLimits

0x1e26,	// (0x00050c97) fep_hwr_write_pane_g2

0x1e33,	// (0x00050ca4) fep_hwr_write_pane_g3_ParamLimits

0x1e33,	// (0x00050ca4) fep_hwr_write_pane_g3

0xc8a7,	// (0x0005b718) fep_hwr_write_pane_g4_ParamLimits

0xc8a7,	// (0x0005b718) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0005e974) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0005e974) fep_hwr_write_pane_g

0x1d6d,	// (0x00050bde) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1d6d,	// (0x00050bde) bg_fep_hwr_candidate_pane_g2

0x1e56,	// (0x00050cc7) cell_hwr_candidate_pane_ParamLimits

0x1e56,	// (0x00050cc7) cell_hwr_candidate_pane

0x1e98,	// (0x00050d09) fep_hwr_candidate_pane_g1_ParamLimits

0x7ab1,	// (0x00056922) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7ab1,	// (0x00056922) bg_popup_fep_shadow_pane_cp2

0x7c4f,	// (0x00056ac0) fep_vkb_top_pane_g4_ParamLimits

0x7c4f,	// (0x00056ac0) fep_vkb_top_pane_g4

0x7c95,	// (0x00056b06) fep_vkb_side_pane_g2_ParamLimits

0x7c95,	// (0x00056b06) fep_vkb_side_pane_g2

0xbc63,	// (0x0005aad4) list_setting_pane_t4_ParamLimits

0xbc63,	// (0x0005aad4) list_setting_pane_t4

0xbcfd,	// (0x0005ab6e) list_setting_number_pane_t5_ParamLimits

0xbcfd,	// (0x0005ab6e) list_setting_number_pane_t5

0x4602,	// (0x00053473) list_double_heading_pane_cp2_ParamLimits

0x4602,	// (0x00053473) list_double_heading_pane_cp2

0x3ef0,	// (0x00052d61) list_double_heading_pane_g1_cp2_ParamLimits

0x3ef0,	// (0x00052d61) list_double_heading_pane_g1_cp2

0x3f63,	// (0x00052dd4) list_double_heading_pane_g2_cp2_ParamLimits

0x3f63,	// (0x00052dd4) list_double_heading_pane_g2_cp2

0x7faa,	// (0x00056e1b) list_double_heading_pane_t1_cp2_ParamLimits

0x7faa,	// (0x00056e1b) list_double_heading_pane_t1_cp2

0x7fc0,	// (0x00056e31) list_double_heading_pane_t2_cp2_ParamLimits

0x7fc0,	// (0x00056e31) list_double_heading_pane_t2_cp2

0x2c82,	// (0x00051af3) aid_value_unit2

0x021e,	// (0x0004f08f) popup_preview_fixed_window

0x393d,	// (0x000527ae) bg_popup_preview_window_pane_cp02

0x7fd2,	// (0x00056e43) list_preview_fixed_pane

0x8018,	// (0x00056e89) list_empty_pane_fp_ParamLimits

0x8018,	// (0x00056e89) list_empty_pane_fp

0x8018,	// (0x00056e89) list_single_cale_day_pane_fp_ParamLimits

0x8018,	// (0x00056e89) list_single_cale_day_pane_fp

0x8018,	// (0x00056e89) list_single_graphic_heading_pane_fp_ParamLimits

0x8018,	// (0x00056e89) list_single_graphic_heading_pane_fp

0x8018,	// (0x00056e89) list_single_graphic_pane_fp_ParamLimits

0x8018,	// (0x00056e89) list_single_graphic_pane_fp

0x8018,	// (0x00056e89) list_single_heading_pane_fp_ParamLimits

0x8018,	// (0x00056e89) list_single_heading_pane_fp

0x8018,	// (0x00056e89) list_single_pane_fp_ParamLimits

0x8018,	// (0x00056e89) list_single_pane_fp

0x802d,	// (0x00056e9e) list_single_pane_fp_g1_ParamLimits

0x802d,	// (0x00056e9e) list_single_pane_fp_g1

0x3ef0,	// (0x00052d61) list_single_pane_fp_g2_ParamLimits

0x3ef0,	// (0x00052d61) list_single_pane_fp_g2

0x3f63,	// (0x00052dd4) list_single_pane_fp_g3_ParamLimits

0x3f63,	// (0x00052dd4) list_single_pane_fp_g3

0x8039,	// (0x00056eaa) list_single_pane_fp_g4_ParamLimits

0x8039,	// (0x00056eaa) list_single_pane_fp_g4

0x0003,

0xfb6a,	// (0x0005e9db) list_single_pane_fp_g_ParamLimits

0xfb6a,	// (0x0005e9db) list_single_pane_fp_g

0x3307,	// (0x00052178) list_single_pane_fp_t1_ParamLimits

0x3307,	// (0x00052178) list_single_pane_fp_t1

0x331e,	// (0x0005218f) list_single_graphic_pane_fp_g1_ParamLimits

0x331e,	// (0x0005218f) list_single_graphic_pane_fp_g1

0x802d,	// (0x00056e9e) list_single_graphic_pane_fp_g2_ParamLimits

0x802d,	// (0x00056e9e) list_single_graphic_pane_fp_g2

0x3ef0,	// (0x00052d61) list_single_graphic_pane_fp_g3_ParamLimits

0x3ef0,	// (0x00052d61) list_single_graphic_pane_fp_g3

0x3f63,	// (0x00052dd4) list_single_graphic_pane_fp_g4_ParamLimits

0x3f63,	// (0x00052dd4) list_single_graphic_pane_fp_g4

0x8039,	// (0x00056eaa) list_single_graphic_pane_fp_g5_ParamLimits

0x8039,	// (0x00056eaa) list_single_graphic_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e9e4) list_single_graphic_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e9e4) list_single_graphic_pane_fp_g

0x332a,	// (0x0005219b) list_single_graphic_pane_fp_t1_ParamLimits

0x332a,	// (0x0005219b) list_single_graphic_pane_fp_t1

0x331e,	// (0x0005218f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x331e,	// (0x0005218f) list_single_graphic_heading_pane_fp_g1

0x802d,	// (0x00056e9e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x802d,	// (0x00056e9e) list_single_graphic_heading_pane_fp_g2

0x3ef0,	// (0x00052d61) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3ef0,	// (0x00052d61) list_single_graphic_heading_pane_fp_g3

0x3f63,	// (0x00052dd4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3f63,	// (0x00052dd4) list_single_graphic_heading_pane_fp_g4

0x8039,	// (0x00056eaa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8039,	// (0x00056eaa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e9e4) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e9e4) list_single_graphic_heading_pane_fp_g

0x3340,	// (0x000521b1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3340,	// (0x000521b1) list_single_graphic_heading_pane_fp_t1

0x3356,	// (0x000521c7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3356,	// (0x000521c7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0005e9ef) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0005e9ef) list_single_graphic_heading_pane_fp_t

0x3368,	// (0x000521d9) list_single_cale_day_pane_fp_g1_ParamLimits

0x3368,	// (0x000521d9) list_single_cale_day_pane_fp_g1

0x8045,	// (0x00056eb6) list_single_cale_day_pane_fp_g2_ParamLimits

0x8045,	// (0x00056eb6) list_single_cale_day_pane_fp_g2

0x33a0,	// (0x00052211) list_single_cale_day_pane_fp_g3_ParamLimits

0x33a0,	// (0x00052211) list_single_cale_day_pane_fp_g3

0x33c8,	// (0x00052239) list_single_cale_day_pane_fp_g4_ParamLimits

0x33c8,	// (0x00052239) list_single_cale_day_pane_fp_g4

0x33ec,	// (0x0005225d) list_single_cale_day_pane_fp_g5_ParamLimits

0x33ec,	// (0x0005225d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb83,	// (0x0005e9f4) list_single_cale_day_pane_fp_g_ParamLimits

0xfb83,	// (0x0005e9f4) list_single_cale_day_pane_fp_g

0x3410,	// (0x00052281) list_single_cale_day_pane_fp_t1_ParamLimits

0x3410,	// (0x00052281) list_single_cale_day_pane_fp_t1

0x3436,	// (0x000522a7) list_single_cale_day_pane_fp_t2_ParamLimits

0x3436,	// (0x000522a7) list_single_cale_day_pane_fp_t2

0x344f,	// (0x000522c0) list_single_cale_day_pane_fp_t3_ParamLimits

0x344f,	// (0x000522c0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb8e,	// (0x0005e9ff) list_single_cale_day_pane_fp_t_ParamLimits

0xfb8e,	// (0x0005e9ff) list_single_cale_day_pane_fp_t

0x802d,	// (0x00056e9e) list_empty_pane_fp_g1_ParamLimits

0x802d,	// (0x00056e9e) list_empty_pane_fp_g1

0x3468,	// (0x000522d9) list_empty_pane_fp_t1

0x3476,	// (0x000522e7) list_empty_pane_fp_t2

0x0001,

0xfb95,	// (0x0005ea06) list_empty_pane_fp_t

0x802d,	// (0x00056e9e) list_single_heading_pane_fp_g1_ParamLimits

0x802d,	// (0x00056e9e) list_single_heading_pane_fp_g1

0x3ef0,	// (0x00052d61) list_single_heading_pane_fp_g2_ParamLimits

0x3ef0,	// (0x00052d61) list_single_heading_pane_fp_g2

0x3f63,	// (0x00052dd4) list_single_heading_pane_fp_g3_ParamLimits

0x3f63,	// (0x00052dd4) list_single_heading_pane_fp_g3

0x0002,

0xfb9a,	// (0x0005ea0b) list_single_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0005ea0b) list_single_heading_pane_fp_g

0x3484,	// (0x000522f5) list_single_heading_pane_fp_t1_ParamLimits

0x3484,	// (0x000522f5) list_single_heading_pane_fp_t1

0x3496,	// (0x00052307) list_single_heading_pane_fp_t2_ParamLimits

0x3496,	// (0x00052307) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0005ea12) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0005ea12) list_single_heading_pane_fp_t

0x4148,	// (0x00052fb9) aid_size_cell_fast

0x38ad,	// (0x0005271e) soft_indicator_pane_cp1_t1

0x4185,	// (0x00052ff6) cell_app_pane_cp2_ParamLimits

0x4185,	// (0x00052ff6) cell_app_pane_cp2

0x1cda,	// (0x00050b4b) fep_hwr_candidate_drop_down_list_pane

0x1eb2,	// (0x00050d23) fep_hwr_candidate_pane_g3_ParamLimits

0x1eb2,	// (0x00050d23) fep_hwr_candidate_pane_g3

0xee91,	// (0x0005dd02) fep_hwr_candidate_pane_g4_ParamLimits

0xee91,	// (0x0005dd02) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0005e981) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0005e981) fep_hwr_candidate_pane_g

0x7b36,	// (0x000569a7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b36,	// (0x000569a7) fep_vkb_candidate_drop_down_list_pane

0x7f47,	// (0x00056db8) fep_vkb_candidate_pane_g3

0x7f4f,	// (0x00056dc0) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0005e9ae) fep_vkb_candidate_pane_g

0x1f1d,	// (0x00050d8e) cell_hwr_candidate_pane_g1_ParamLimits

0x1f2b,	// (0x00050d9c) cell_hwr_candidate_pane_g3_ParamLimits

0x1f2b,	// (0x00050d9c) cell_hwr_candidate_pane_g3

0x9852,	// (0x000586c3) cell_hwr_candidate_pane_g4_ParamLimits

0x9852,	// (0x000586c3) cell_hwr_candidate_pane_g4

0x0002,

0xfb5c,	// (0x0005e9cd) cell_hwr_candidate_pane_g_ParamLimits

0xfb5c,	// (0x0005e9cd) cell_hwr_candidate_pane_g

0x7f66,	// (0x00056dd7) cell_vkb_candidate_pane_g3_ParamLimits

0x7f66,	// (0x00056dd7) cell_vkb_candidate_pane_g3

0x7f81,	// (0x00056df2) cell_vkb_candidate_pane_g4_ParamLimits

0x7f81,	// (0x00056df2) cell_vkb_candidate_pane_g4

0x8051,	// (0x00056ec2) cell_app_pane_cp2_g1_ParamLimits

0x8051,	// (0x00056ec2) cell_app_pane_cp2_g1

0x806f,	// (0x00056ee0) cell_app_pane_cp2_g2_ParamLimits

0x806f,	// (0x00056ee0) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0005ea17) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0005ea17) cell_app_pane_cp2_g

0x807b,	// (0x00056eec) cell_app_pane_cp2_t1_ParamLimits

0x807b,	// (0x00056eec) cell_app_pane_cp2_t1

0x3f55,	// (0x00052dc6) grid_highlight_pane_cp1_ParamLimits

0x3f55,	// (0x00052dc6) grid_highlight_pane_cp1

0x1f6a,	// (0x00050ddb) cell_hwr_candidate_pane_cp1_ParamLimits

0x1f6a,	// (0x00050ddb) cell_hwr_candidate_pane_cp1

0x1f1d,	// (0x00050d8e) fep_hwr_candidate_drop_down_list_pane_g1

0x1f89,	// (0x00050dfa) fep_hwr_candidate_drop_down_list_pane_g2

0x1f96,	// (0x00050e07) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0005ea1c) fep_hwr_candidate_drop_down_list_pane_g

0x1fa3,	// (0x00050e14) fep_hwr_candidate_drop_down_list_scroll_pane

0x1fac,	// (0x00050e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1fac,	// (0x00050e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1fb9,	// (0x00050e2a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1fb9,	// (0x00050e2a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1fc6,	// (0x00050e37) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1fc6,	// (0x00050e37) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1fd3,	// (0x00050e44) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1fd3,	// (0x00050e44) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1fee,	// (0x00050e5f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1fee,	// (0x00050e5f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2009,	// (0x00050e7a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2009,	// (0x00050e7a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2024,	// (0x00050e95) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2024,	// (0x00050e95) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x203f,	// (0x00050eb0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x203f,	// (0x00050eb0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0005ea23) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0005ea23) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x808d,	// (0x00056efe) cell_vkb_candidate_pane_cp1_ParamLimits

0x808d,	// (0x00056efe) cell_vkb_candidate_pane_cp1

0x7c4f,	// (0x00056ac0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7c4f,	// (0x00056ac0) fep_vkb_candidate_drop_down_list_pane_g1

0x80ad,	// (0x00056f1e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x80ad,	// (0x00056f1e) fep_vkb_candidate_drop_down_list_pane_g2

0x80ba,	// (0x00056f2b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x80ba,	// (0x00056f2b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0005ea34) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0005ea34) fep_vkb_candidate_drop_down_list_pane_g

0x80c7,	// (0x00056f38) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x80c7,	// (0x00056f38) fep_vkb_candidate_drop_down_list_scroll_pane

0x80d4,	// (0x00056f45) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x80d4,	// (0x00056f45) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x80e1,	// (0x00056f52) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x80e1,	// (0x00056f52) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x80ed,	// (0x00056f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x80ed,	// (0x00056f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x80f9,	// (0x00056f6a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x80f9,	// (0x00056f6a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x811a,	// (0x00056f8b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x811a,	// (0x00056f8b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x813b,	// (0x00056fac) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x813b,	// (0x00056fac) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x815c,	// (0x00056fcd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x815c,	// (0x00056fcd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x817d,	// (0x00056fee) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x817d,	// (0x00056fee) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0005ea3b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0005ea3b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcf98,	// (0x0005be09) title_pane_g1_ParamLimits

0xcfab,	// (0x0005be1c) title_pane_g2_ParamLimits

0xf54e,	// (0x0005e3bf) title_pane_g_ParamLimits

0x45bb,	// (0x0005342c) aid_call2_pane

0x45c3,	// (0x00053434) aid_call_pane

0x45cb,	// (0x0005343c) popup_clock_analogue_window_g1

0x45cb,	// (0x0005343c) popup_clock_analogue_window_g2

0x0c7b,	// (0x0004faec) popup_clock_analogue_window_g3

0x0c84,	// (0x0004faf5) popup_clock_analogue_window_g4

0x2ca4,	// (0x00051b15) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005e56e) popup_clock_analogue_window_g

0x0c8c,	// (0x0004fafd) popup_clock_analogue_window_t1

0x0c9a,	// (0x0004fb0b) clock_digital_number_pane_ParamLimits

0x0c9a,	// (0x0004fb0b) clock_digital_number_pane

0x0ca6,	// (0x0004fb17) clock_digital_number_pane_cp02_ParamLimits

0x0ca6,	// (0x0004fb17) clock_digital_number_pane_cp02

0x0cb2,	// (0x0004fb23) clock_digital_number_pane_cp03_ParamLimits

0x0cb2,	// (0x0004fb23) clock_digital_number_pane_cp03

0x0cbe,	// (0x0004fb2f) clock_digital_number_pane_cp04_ParamLimits

0x0cbe,	// (0x0004fb2f) clock_digital_number_pane_cp04

0x0cca,	// (0x0004fb3b) clock_digital_separator_pane_ParamLimits

0x0cca,	// (0x0004fb3b) clock_digital_separator_pane

0x0cd6,	// (0x0004fb47) popup_clock_digital_window_t1_ParamLimits

0x0cd6,	// (0x0004fb47) popup_clock_digital_window_t1

0x2ca4,	// (0x00051b15) clock_digital_number_pane_g1

0x2ca4,	// (0x00051b15) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005e579) clock_digital_number_pane_g

0x2ca4,	// (0x00051b15) clock_digital_separator_pane_g1

0x2ca4,	// (0x00051b15) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005e579) clock_digital_separator_pane_g

0xd63f,	// (0x0005c4b0) aid_fill_nsta_ParamLimits

0xd775,	// (0x0005c5e6) indicator_nsta_pane_ParamLimits

0x5209,	// (0x0005407a) popup_clock_analogue_window

0x5209,	// (0x0005407a) popup_clock_digital_window

0x4109,	// (0x00052f7a) grid_indicator_nsta_pane_ParamLimits

0x73e9,	// (0x0005625a) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0005e901) clock_nsta_pane_t

0x0c3f,	// (0x0004fab0) aid_size_max_handle

0xbeac,	// (0x0005ad1d) aid_size_min_handle

0x4bea,	// (0x00053a5b) editor_scroll_pane

0x8198,	// (0x00057009) ex_editor_pane

0x40b6,	// (0x00052f27) scroll_pane_cp13

0x3ee8,	// (0x00052d59) scroll_pane_cp14

0x45fa,	// (0x0005346b) scroll_pane_cp36

0xd422,	// (0x0005c293) list_single_graphic_hl_pane_cp2_ParamLimits

0xd422,	// (0x0005c293) list_single_graphic_hl_pane_cp2

0xd926,	// (0x0005c797) list_single_graphic_hl_pane_ParamLimits

0xd926,	// (0x0005c797) list_single_graphic_hl_pane

0x34ac,	// (0x0005231d) aid_size_min_hl_cp1

0x81a0,	// (0x00057011) list_highlight_pane_cp34_ParamLimits

0x81a0,	// (0x00057011) list_highlight_pane_cp34

0x81b1,	// (0x00057022) list_single_graphic_hl_pane_g1_ParamLimits

0x81b1,	// (0x00057022) list_single_graphic_hl_pane_g1

0xc8bc,	// (0x0005b72d) list_single_graphic_hl_pane_g2_ParamLimits

0xc8bc,	// (0x0005b72d) list_single_graphic_hl_pane_g2

0xc8bc,	// (0x0005b72d) list_single_graphic_hl_pane_g3_ParamLimits

0xc8bc,	// (0x0005b72d) list_single_graphic_hl_pane_g3

0x4b5b,	// (0x000539cc) list_single_graphic_hl_pane_g4_ParamLimits

0x4b5b,	// (0x000539cc) list_single_graphic_hl_pane_g4

0x34c1,	// (0x00052332) list_single_graphic_hl_pane_g5_ParamLimits

0x34c1,	// (0x00052332) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0005ea4c) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0005ea4c) list_single_graphic_hl_pane_g

0xc8c8,	// (0x0005b739) list_single_graphic_hl_pane_t1_ParamLimits

0xc8c8,	// (0x0005b739) list_single_graphic_hl_pane_t1

0x81be,	// (0x0005702f) aid_size_min_hl_cp2

0x81c7,	// (0x00057038) list_highlight_pane_cp34_cp2_ParamLimits

0x81c7,	// (0x00057038) list_highlight_pane_cp34_cp2

0x81b1,	// (0x00057022) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x81b1,	// (0x00057022) list_single_graphic_hl_pane_g1_cp2

0x81d4,	// (0x00057045) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81d4,	// (0x00057045) list_single_graphic_hl_pane_g2_cp2

0x81e0,	// (0x00057051) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81e0,	// (0x00057051) list_single_graphic_hl_pane_g3_cp2

0x81ee,	// (0x0005705f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x81ee,	// (0x0005705f) list_single_graphic_hl_pane_g4_cp2

0x81fa,	// (0x0005706b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x81fa,	// (0x0005706b) list_single_graphic_hl_pane_g5_cp2

0xbf93,	// (0x0005ae04) control_pane_g4_ParamLimits

0xbf93,	// (0x0005ae04) control_pane_g4

0x4f0e,	// (0x00053d7f) bg_popup_sub_pane_cp10_ParamLimits

0x79db,	// (0x0005684c) list_choice_list_pane_ParamLimits

0x79ea,	// (0x0005685b) scroll_pane_cp23

0x393d,	// (0x000527ae) bg_popup_preview_window_pane_cp02_ParamLimits

0x7fd2,	// (0x00056e43) list_preview_fixed_pane_ParamLimits

0x7fe8,	// (0x00056e59) list_preview_fixed_pane_cp_ParamLimits

0x7fe8,	// (0x00056e59) list_preview_fixed_pane_cp

0x7ff4,	// (0x00056e65) popup_preview_fixed_window_g1_ParamLimits

0x7ff4,	// (0x00056e65) popup_preview_fixed_window_g1

0x8000,	// (0x00056e71) popup_preview_fixed_window_g2_ParamLimits

0x8000,	// (0x00056e71) popup_preview_fixed_window_g2

0x0002,

0xfb63,	// (0x0005e9d4) popup_preview_fixed_window_g_ParamLimits

0xfb63,	// (0x0005e9d4) popup_preview_fixed_window_g

0x0bb3,	// (0x0004fa24) aid_navi_side_left_pane_ParamLimits

0x0bc8,	// (0x0004fa39) aid_navi_side_right_pane_ParamLimits

0x0be0,	// (0x0004fa51) navi_icon_pane_stacon_ParamLimits

0x0bf4,	// (0x0004fa65) navi_navi_pane_stacon_ParamLimits

0x0be0,	// (0x0004fa51) navi_text_pane_stacon_ParamLimits

0x00df,	// (0x0004ef50) main_text_info_pane

0x8224,	// (0x00057095) listscroll_text_info_pane

0x822c,	// (0x0005709d) list_text_info_pane_ParamLimits

0x822c,	// (0x0005709d) list_text_info_pane

0x823b,	// (0x000570ac) scroll_pane_cp24_ParamLimits

0x823b,	// (0x000570ac) scroll_pane_cp24

0xe34c,	// (0x0005d1bd) list_text_info_pane_t1_ParamLimits

0xe34c,	// (0x0005d1bd) list_text_info_pane_t1

0xc0e8,	// (0x0005af59) popup_fast_swap2_window_ParamLimits

0xc0e8,	// (0x0005af59) popup_fast_swap2_window

0x828a,	// (0x000570fb) aid_size_cell_fast2

0x2c9a,	// (0x00051b0b) bg_popup_window_pane_cp17

0x5892,	// (0x00054703) heading_pane_cp2

0x3bb2,	// (0x00052a23) listscroll_fast2_pane

0x8294,	// (0x00057105) grid_fast2_pane

0x829e,	// (0x0005710f) listscroll_fast2_pane_g1

0x82a6,	// (0x00057117) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0005ea57) listscroll_fast2_pane_g

0x40b6,	// (0x00052f27) scroll_pane_cp26

0x82b0,	// (0x00057121) cell_fast2_pane_ParamLimits

0x82b0,	// (0x00057121) cell_fast2_pane

0x82c5,	// (0x00057136) cell_fast2_pane_g1

0x82ce,	// (0x0005713f) cell_fast2_pane_g2

0x82d7,	// (0x00057148) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0005ea5c) cell_fast2_pane_g

0x3ca5,	// (0x00052b16) grid_highlight_pane_cp9

0x1134,	// (0x0004ffa5) main_eswt_pane_ParamLimits

0x1134,	// (0x0004ffa5) main_eswt_pane

0x8250,	// (0x000570c1) list_single_text_info_pane

0x82df,	// (0x00057150) eswt_ctrl_button_pane

0x82df,	// (0x00057150) eswt_ctrl_canvas_pane

0x82e7,	// (0x00057158) eswt_ctrl_combo_pane

0x82df,	// (0x00057150) eswt_ctrl_default_pane

0x82df,	// (0x00057150) eswt_ctrl_label_pane

0x82ef,	// (0x00057160) eswt_ctrl_wait_pane

0x82f7,	// (0x00057168) eswt_shell_pane

0x2c9a,	// (0x00051b0b) listscroll_eswt_app_pane

0x8317,	// (0x00057188) popup_eswt_tasktip_window_ParamLimits

0x8317,	// (0x00057188) popup_eswt_tasktip_window

0x54a6,	// (0x00054317) bg_popup_window_pane_cp18

0x8328,	// (0x00057199) eswt_control_pane_g1_ParamLimits

0x8328,	// (0x00057199) eswt_control_pane_g1

0x8335,	// (0x000571a6) eswt_control_pane_g2_ParamLimits

0x8335,	// (0x000571a6) eswt_control_pane_g2

0x8342,	// (0x000571b3) eswt_control_pane_g3_ParamLimits

0x8342,	// (0x000571b3) eswt_control_pane_g3

0x834f,	// (0x000571c0) eswt_control_pane_g4_ParamLimits

0x834f,	// (0x000571c0) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0005ea63) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0005ea63) eswt_control_pane_g

0x3f55,	// (0x00052dc6) bg_button_pane_ParamLimits

0x3f55,	// (0x00052dc6) bg_button_pane

0x3cba,	// (0x00052b2b) common_borders_pane_copy2_ParamLimits

0x3cba,	// (0x00052b2b) common_borders_pane_copy2

0x835c,	// (0x000571cd) control_button_pane_g1_ParamLimits

0x835c,	// (0x000571cd) control_button_pane_g1

0x8368,	// (0x000571d9) control_button_pane_g2_ParamLimits

0x8368,	// (0x000571d9) control_button_pane_g2

0x8374,	// (0x000571e5) control_button_pane_g3_ParamLimits

0x8374,	// (0x000571e5) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0005ea6c) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0005ea6c) control_button_pane_g

0x8388,	// (0x000571f9) control_button_pane_t1

0x8396,	// (0x00057207) control_button_pane_t2

0x0001,

0xfc02,	// (0x0005ea73) control_button_pane_t

0x5432,	// (0x000542a3) bg_button_pane_g1

0x5442,	// (0x000542b3) bg_button_pane_g2

0x543a,	// (0x000542ab) bg_button_pane_g3

0x5452,	// (0x000542c3) bg_button_pane_g4

0x544a,	// (0x000542bb) bg_button_pane_g5

0x545a,	// (0x000542cb) bg_button_pane_g6

0x5462,	// (0x000542d3) bg_button_pane_g7

0x5472,	// (0x000542e3) bg_button_pane_g8

0x546a,	// (0x000542db) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005e6d7) bg_button_pane_g

0x7996,	// (0x00056807) common_borders_pane_ParamLimits

0x7996,	// (0x00056807) common_borders_pane

0x8328,	// (0x00057199) eswt_control_pane_g1_copy1_ParamLimits

0x8328,	// (0x00057199) eswt_control_pane_g1_copy1

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy1_ParamLimits

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy1

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy1_ParamLimits

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy1

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy1_ParamLimits

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy1

0x79d1,	// (0x00056842) bg_eswt_ctrl_canvas_pane_g1

0x7996,	// (0x00056807) common_borders_pane_cp2_ParamLimits

0x7996,	// (0x00056807) common_borders_pane_cp2

0x7996,	// (0x00056807) common_borders_pane_cp3_ParamLimits

0x7996,	// (0x00056807) common_borders_pane_cp3

0x83a4,	// (0x00057215) separator_horizontal_pane

0x83ac,	// (0x0005721d) separator_vertical_pane

0x8328,	// (0x00057199) eswt_control_pane_g1_copy2_ParamLimits

0x8328,	// (0x00057199) eswt_control_pane_g1_copy2

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy2_ParamLimits

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy2

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy2_ParamLimits

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy2

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy2_ParamLimits

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy2

0x2c9a,	// (0x00051b0b) common_borders_pane_cp4

0x83b5,	// (0x00057226) separator_horizontal_pane_g1

0x83be,	// (0x0005722f) separator_horizontal_pane_g2

0x83c7,	// (0x00057238) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0005ea78) separator_horizontal_pane_g

0x8328,	// (0x00057199) eswt_control_pane_g1_copy3_ParamLimits

0x8328,	// (0x00057199) eswt_control_pane_g1_copy3

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy3_ParamLimits

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy3

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy3_ParamLimits

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy3

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy3_ParamLimits

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy3

0x2c9a,	// (0x00051b0b) common_borders_pane_cp5

0x83d0,	// (0x00057241) separator_vertical_pane_g1

0x83d9,	// (0x0005724a) separator_vertical_pane_g2

0x83e2,	// (0x00057253) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0005ea7f) separator_vertical_pane_g

0x8328,	// (0x00057199) eswt_control_pane_g1_copy4_ParamLimits

0x8328,	// (0x00057199) eswt_control_pane_g1_copy4

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy4_ParamLimits

0x8335,	// (0x000571a6) eswt_control_pane_g2_copy4

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy4_ParamLimits

0x8342,	// (0x000571b3) eswt_control_pane_g3_copy4

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy4_ParamLimits

0x834f,	// (0x000571c0) eswt_control_pane_g4_copy4

0xe367,	// (0x0005d1d8) eswt_ctrl_combo_button_pane

0xe36f,	// (0x0005d1e0) eswt_ctrl_input_pane

0xe377,	// (0x0005d1e8) popup_choice_list_window_cp70

0xe37f,	// (0x0005d1f0) eswt_ctrl_input_pane_t1

0x2c9a,	// (0x00051b0b) input_focus_pane_cp70

0x7996,	// (0x00056807) bg_button_pane_cp70_ParamLimits

0x7996,	// (0x00056807) bg_button_pane_cp70

0xe38d,	// (0x0005d1fe) eswt_ctrl_combo_button_pane_g1

0x8419,	// (0x0005728a) wait_bar_pane_cp70

0x54a6,	// (0x00054317) bg_popup_window_pane_cp70_ParamLimits

0x54a6,	// (0x00054317) bg_popup_window_pane_cp70

0x8421,	// (0x00057292) popup_eswt_tasktip_window_t1

0x8437,	// (0x000572a8) wait_bar_pane_cp71_ParamLimits

0x8437,	// (0x000572a8) wait_bar_pane_cp71

0x8443,	// (0x000572b4) grid_eswt_app_pane

0x43d4,	// (0x00053245) scroll_pane_cp70

0xe395,	// (0x0005d206) cell_eswt_app_pane_ParamLimits

0xe395,	// (0x0005d206) cell_eswt_app_pane

0xe3bf,	// (0x0005d230) cell_eswt_app_pane_g1_ParamLimits

0xe3bf,	// (0x0005d230) cell_eswt_app_pane_g1

0xe416,	// (0x0005d287) cell_eswt_app_pane_g2_ParamLimits

0xe416,	// (0x0005d287) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0005ea86) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0005ea86) cell_eswt_app_pane_g

0xe43f,	// (0x0005d2b0) cell_eswt_app_pane_t1_ParamLimits

0xe43f,	// (0x0005d2b0) cell_eswt_app_pane_t1

0x8506,	// (0x00057377) grid_highlight_pane_cp70_ParamLimits

0x8506,	// (0x00057377) grid_highlight_pane_cp70

0x4abf,	// (0x00053930) set_content_pane_g1

0xd5f4,	// (0x0005c465) status_small_volume_pane

0x205a,	// (0x00050ecb) status_small_volume_pane_g1

0x2062,	// (0x00050ed3) volume_small2_pane

0x206b,	// (0x00050edc) volume_small2_pane_g1

0x2074,	// (0x00050ee5) volume_small2_pane_g2

0x207d,	// (0x00050eee) volume_small2_pane_g3

0x2086,	// (0x00050ef7) volume_small2_pane_g4

0x208f,	// (0x00050f00) volume_small2_pane_g5

0x2098,	// (0x00050f09) volume_small2_pane_g6

0x20a1,	// (0x00050f12) volume_small2_pane_g7

0x20aa,	// (0x00050f1b) volume_small2_pane_g8

0x20b3,	// (0x00050f24) volume_small2_pane_g9

0x20bc,	// (0x00050f2d) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0005ea8b) volume_small2_pane_g

0x7d97,	// (0x00056c08) fep_vkb_top_text_pane_g1_ParamLimits

0xe2f4,	// (0x0005d165) fep_vkb_top_text_pane_t1_ParamLimits

0x800c,	// (0x00056e7d) popup_preview_fixed_window_g3_ParamLimits

0x800c,	// (0x00056e7d) popup_preview_fixed_window_g3

0xc70b,	// (0x0005b57c) popup_toolbar_trans_pane

0xdd0a,	// (0x0005cb7b) aid_height_set_list_ParamLimits

0x6808,	// (0x00055679) aid_size_parent_ParamLimits

0x4f0e,	// (0x00053d7f) list_highlight_pane_cp2_ParamLimits

0x4abf,	// (0x00053930) set_content_pane_g1_ParamLimits

0xd937,	// (0x0005c7a8) list_single_image_pane_ParamLimits

0xd937,	// (0x0005c7a8) list_single_image_pane

0xe471,	// (0x0005d2e2) aid_size_cell_image_ParamLimits

0xe471,	// (0x0005d2e2) aid_size_cell_image

0xe47e,	// (0x0005d2ef) grid_single_image_pane_ParamLimits

0xe47e,	// (0x0005d2ef) grid_single_image_pane

0x4a0e,	// (0x0005387f) list_single_image_pane_g1_ParamLimits

0x4a0e,	// (0x0005387f) list_single_image_pane_g1

0x852b,	// (0x0005739c) list_single_image_pane_g2_ParamLimits

0x852b,	// (0x0005739c) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0005eaa0) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0005eaa0) list_single_image_pane_g

0x853f,	// (0x000573b0) list_single_image_pane_t1_ParamLimits

0x853f,	// (0x000573b0) list_single_image_pane_t1

0xe48c,	// (0x0005d2fd) cell_image_list_pane_ParamLimits

0xe48c,	// (0x0005d2fd) cell_image_list_pane

0xe4a2,	// (0x0005d313) cell_image_list_pane_g1

0xe4ab,	// (0x0005d31c) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0005eaa5) cell_image_list_pane_g

0x857b,	// (0x000573ec) aid_size_cell_tb_trans_pane

0x3f55,	// (0x00052dc6) bg_tb_trans_pane

0x858d,	// (0x000573fe) grid_tb_trans_pane

0x5432,	// (0x000542a3) bg_tb_trans_pane_g1

0x5442,	// (0x000542b3) bg_tb_trans_pane_g2

0x543a,	// (0x000542ab) bg_tb_trans_pane_g3

0x5452,	// (0x000542c3) bg_tb_trans_pane_g4

0x544a,	// (0x000542bb) bg_tb_trans_pane_g5

0x5472,	// (0x000542e3) bg_tb_trans_pane_g6

0x546a,	// (0x000542db) bg_tb_trans_pane_g7

0x545a,	// (0x000542cb) bg_tb_trans_pane_g8

0x5462,	// (0x000542d3) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0005eaaa) bg_tb_trans_pane_g

0x85a1,	// (0x00057412) cell_toolbar_trans_pane_ParamLimits

0x85a1,	// (0x00057412) cell_toolbar_trans_pane

0x79d1,	// (0x00056842) cell_toolbar_trans_pane_g1

0xe0df,	// (0x0005cf50) list_form2_midp_pane_t1

0xe0ed,	// (0x0005cf5e) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0005e947) list_form2_midp_pane_t

0x75c2,	// (0x00056433) scroll_pane_cp51_ParamLimits

0x777e,	// (0x000565ef) form2_midp_wait_pane_g1

0x7787,	// (0x000565f8) form2_midp_wait_pane_g2

0x7790,	// (0x00056601) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0005e95c) form2_midp_wait_pane_g

0x36b4,	// (0x00052525) list_highlight_pane_cp21_ParamLimits

0x77dc,	// (0x0005664d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x77eb,	// (0x0005665c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x69c0,	// (0x00055831) list_single_2graphic_im_pane_ParamLimits

0x69c0,	// (0x00055831) list_single_2graphic_im_pane

0xe4b4,	// (0x0005d325) list_single_2graphic_im_pane_g1_ParamLimits

0xe4b4,	// (0x0005d325) list_single_2graphic_im_pane_g1

0xe4c5,	// (0x0005d336) list_single_2graphic_im_pane_g2_ParamLimits

0xe4c5,	// (0x0005d336) list_single_2graphic_im_pane_g2

0xe4d1,	// (0x0005d342) list_single_2graphic_im_pane_g3_ParamLimits

0xe4d1,	// (0x0005d342) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0005eabd) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0005eabd) list_single_2graphic_im_pane_g

0xe4e5,	// (0x0005d356) list_single_2graphic_im_pane_t1_ParamLimits

0xe4e5,	// (0x0005d356) list_single_2graphic_im_pane_t1

0x8018,	// (0x00056e89) list_single_graphic_2heading_pane_fp_ParamLimits

0x8018,	// (0x00056e89) list_single_graphic_2heading_pane_fp

0x331e,	// (0x0005218f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x331e,	// (0x0005218f) list_single_graphic_2heading_pane_fp_g1

0x802d,	// (0x00056e9e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x802d,	// (0x00056e9e) list_single_graphic_2heading_pane_fp_g2

0x3ef0,	// (0x00052d61) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3ef0,	// (0x00052d61) list_single_graphic_2heading_pane_fp_g3

0x3f63,	// (0x00052dd4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3f63,	// (0x00052dd4) list_single_graphic_2heading_pane_fp_g4

0x8039,	// (0x00056eaa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8039,	// (0x00056eaa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb73,	// (0x0005e9e4) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0005e9e4) list_single_graphic_2heading_pane_fp_g

0x34eb,	// (0x0005235c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x34eb,	// (0x0005235c) list_single_graphic_2heading_pane_fp_t1

0x3356,	// (0x000521c7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3356,	// (0x000521c7) list_single_graphic_2heading_pane_fp_t2

0x3501,	// (0x00052372) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3501,	// (0x00052372) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0005eac6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0005eac6) list_single_graphic_2heading_pane_fp_t

0x7a5d,	// (0x000568ce) fep_hwr_write_pane_g5_ParamLimits

0x7a5d,	// (0x000568ce) fep_hwr_write_pane_g5

0x7a69,	// (0x000568da) fep_hwr_write_pane_g6_ParamLimits

0x7a69,	// (0x000568da) fep_hwr_write_pane_g6

0x82f7,	// (0x00057168) eswt_shell_pane_ParamLimits

0x54a6,	// (0x00054317) bg_popup_window_pane_cp18_ParamLimits

0x6750,	// (0x000555c1) heading_pane_cp70

0x8421,	// (0x00057292) popup_eswt_tasktip_window_t1_ParamLimits

0xd69a,	// (0x0005c50b) aid_touch_tab_arrow_left

0xd6b0,	// (0x0005c521) aid_touch_tab_arrow_right

0xcfc3,	// (0x0005be34) title_pane_g3_ParamLimits

0xcfc3,	// (0x0005be34) title_pane_g3

0x3f14,	// (0x00052d85) set_value_pane_g1

0xc70b,	// (0x0005b57c) popup_toolbar_trans_pane_ParamLimits

0x857b,	// (0x000573ec) aid_size_cell_tb_trans_pane_ParamLimits

0x3f55,	// (0x00052dc6) bg_tb_trans_pane_ParamLimits

0x858d,	// (0x000573fe) grid_tb_trans_pane_ParamLimits

0x393d,	// (0x000527ae) cont_note_pane_ParamLimits

0x393d,	// (0x000527ae) cont_note_pane

0x3cba,	// (0x00052b2b) cont_snote2_single_text_pane_ParamLimits

0x3cba,	// (0x00052b2b) cont_snote2_single_text_pane

0x3cba,	// (0x00052b2b) cont_snote2_single_graphic_pane_ParamLimits

0x3cba,	// (0x00052b2b) cont_snote2_single_graphic_pane

0x5ab9,	// (0x0005492a) cont_note_wait_pane_ParamLimits

0x5ab9,	// (0x0005492a) cont_note_wait_pane

0x5ab9,	// (0x0005492a) cont_note_image_pane_ParamLimits

0x5ab9,	// (0x0005492a) cont_note_image_pane

0x8635,	// (0x000574a6) popup_note2_window_g1_ParamLimits

0x8635,	// (0x000574a6) popup_note2_window_g1

0x8666,	// (0x000574d7) popup_note2_window_t1_ParamLimits

0x8666,	// (0x000574d7) popup_note2_window_t1

0x86ab,	// (0x0005751c) popup_note2_window_t2_ParamLimits

0x86ab,	// (0x0005751c) popup_note2_window_t2

0x86f0,	// (0x00057561) popup_note2_window_t3_ParamLimits

0x86f0,	// (0x00057561) popup_note2_window_t3

0x8735,	// (0x000575a6) popup_note2_window_t4_ParamLimits

0x8735,	// (0x000575a6) popup_note2_window_t4

0x39c1,	// (0x00052832) popup_note2_window_t5_ParamLimits

0x39c1,	// (0x00052832) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0005ead2) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0005ead2) popup_note2_window_t

0x8764,	// (0x000575d5) popup_note2_image_window_g1_ParamLimits

0x8764,	// (0x000575d5) popup_note2_image_window_g1

0x8770,	// (0x000575e1) popup_note2_image_window_g2_ParamLimits

0x8770,	// (0x000575e1) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0005eadd) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0005eadd) popup_note2_image_window_g

0x8782,	// (0x000575f3) popup_note2_image_window_t1_ParamLimits

0x8782,	// (0x000575f3) popup_note2_image_window_t1

0x879a,	// (0x0005760b) popup_note2_image_window_t2_ParamLimits

0x879a,	// (0x0005760b) popup_note2_image_window_t2

0x87b2,	// (0x00057623) popup_note2_image_window_t3_ParamLimits

0x87b2,	// (0x00057623) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0005eae2) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0005eae2) popup_note2_image_window_t

0x5ac7,	// (0x00054938) popup_note2_wait_window_g1_ParamLimits

0x5ac7,	// (0x00054938) popup_note2_wait_window_g1

0x87ce,	// (0x0005763f) popup_note2_wait_window_g2_ParamLimits

0x87ce,	// (0x0005763f) popup_note2_wait_window_g2

0x5adf,	// (0x00054950) popup_note2_wait_window_g3_ParamLimits

0x5adf,	// (0x00054950) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0005eae9) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0005eae9) popup_note2_wait_window_g

0x87da,	// (0x0005764b) popup_note2_wait_window_t1_ParamLimits

0x87da,	// (0x0005764b) popup_note2_wait_window_t1

0x87f8,	// (0x00057669) popup_note2_wait_window_t2_ParamLimits

0x87f8,	// (0x00057669) popup_note2_wait_window_t2

0x8816,	// (0x00057687) popup_note2_wait_window_t3_ParamLimits

0x8816,	// (0x00057687) popup_note2_wait_window_t3

0x8828,	// (0x00057699) popup_note2_wait_window_t4_ParamLimits

0x8828,	// (0x00057699) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0005eaf0) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0005eaf0) popup_note2_wait_window_t

0x883a,	// (0x000576ab) wait_bar2_pane_ParamLimits

0x883a,	// (0x000576ab) wait_bar2_pane

0x8852,	// (0x000576c3) popup_snote2_single_text_window_g1_ParamLimits

0x8852,	// (0x000576c3) popup_snote2_single_text_window_g1

0x887a,	// (0x000576eb) popup_snote2_single_text_window_t1_ParamLimits

0x887a,	// (0x000576eb) popup_snote2_single_text_window_t1

0x88c6,	// (0x00057737) popup_snote2_single_text_window_t2_ParamLimits

0x88c6,	// (0x00057737) popup_snote2_single_text_window_t2

0x8912,	// (0x00057783) popup_snote2_single_text_window_t3_ParamLimits

0x8912,	// (0x00057783) popup_snote2_single_text_window_t3

0x8953,	// (0x000577c4) popup_snote2_single_text_window_t4_ParamLimits

0x8953,	// (0x000577c4) popup_snote2_single_text_window_t4

0x8989,	// (0x000577fa) popup_snote2_single_text_window_t5_ParamLimits

0x8989,	// (0x000577fa) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0005eaf9) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0005eaf9) popup_snote2_single_text_window_t

0x89b4,	// (0x00057825) popup_snote2_single_graphic_window_g1_ParamLimits

0x89b4,	// (0x00057825) popup_snote2_single_graphic_window_g1

0x89dc,	// (0x0005784d) popup_snote2_single_graphic_window_g2_ParamLimits

0x89dc,	// (0x0005784d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0005eb04) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0005eb04) popup_snote2_single_graphic_window_g

0x8a04,	// (0x00057875) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a04,	// (0x00057875) popup_snote2_single_graphic_window_t1

0x8a50,	// (0x000578c1) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a50,	// (0x000578c1) popup_snote2_single_graphic_window_t2

0x8912,	// (0x00057783) popup_snote2_single_graphic_window_t3_ParamLimits

0x8912,	// (0x00057783) popup_snote2_single_graphic_window_t3

0x8953,	// (0x000577c4) popup_snote2_single_graphic_window_t4_ParamLimits

0x8953,	// (0x000577c4) popup_snote2_single_graphic_window_t4

0x8989,	// (0x000577fa) popup_snote2_single_graphic_window_t5_ParamLimits

0x8989,	// (0x000577fa) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0005eb09) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0005eb09) popup_snote2_single_graphic_window_t

0x7483,	// (0x000562f4) clock_nsta_pane_cp2_t1

0x7483,	// (0x000562f4) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0005e91d) clock_nsta_pane_cp2_t

0x0931,	// (0x0004f7a2) form_field_data_wide_pane_g1_ParamLimits

0x3ef0,	// (0x00052d61) form_field_data_wide_pane_g2_ParamLimits

0x3ef0,	// (0x00052d61) form_field_data_wide_pane_g2

0x3f63,	// (0x00052dd4) form_field_data_wide_pane_g3_ParamLimits

0x3f63,	// (0x00052dd4) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005e4f1) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005e4f1) form_field_data_wide_pane_g

0xe022,	// (0x0005ce93) grid_touch_3_pane_ParamLimits

0xe022,	// (0x0005ce93) grid_touch_3_pane

0xe516,	// (0x0005d387) cell_touch_3_pane_ParamLimits

0xe516,	// (0x0005d387) cell_touch_3_pane

0x79d1,	// (0x00056842) cell_touch_3_pane_g1

0x79d1,	// (0x00056842) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0005e9a2) cell_touch_3_pane_g

0x3a19,	// (0x0005288a) cont_query_data_pane

0x3a21,	// (0x00052892) cont_query_data_pane_cp1

0x8aca,	// (0x0005793b) button_value_adjust_pane_cp7

0x8ad2,	// (0x00057943) query_popup_pane_cp3

0x46bb,	// (0x0005352c) bg_popup_sub_pane_cp22_ParamLimits

0x0cf5,	// (0x0004fb66) navi_navi_volume_pane_cp2

0x0d10,	// (0x0004fb81) popup_side_volume_key_window_g2

0x0d1f,	// (0x0004fb90) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005e587) popup_side_volume_key_window_g

0x0d3c,	// (0x0004fbad) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005e58e) popup_side_volume_key_window_t

0x4972,	// (0x000537e3) popup_side_volume_key_window_ParamLimits

0xba34,	// (0x0005a8a5) list_double_graphic_pane_g4_ParamLimits

0xba34,	// (0x0005a8a5) list_double_graphic_pane_g4

0xde83,	// (0x0005ccf4) list_single_2heading_msg_pane_ParamLimits

0xde83,	// (0x0005ccf4) list_single_2heading_msg_pane

0xd948,	// (0x0005c7b9) list_single_2heading_msg_pane_g1_ParamLimits

0xd948,	// (0x0005c7b9) list_single_2heading_msg_pane_g1

0xd954,	// (0x0005c7c5) list_single_2heading_msg_pane_g2_ParamLimits

0xd954,	// (0x0005c7c5) list_single_2heading_msg_pane_g2

0xd967,	// (0x0005c7d8) list_single_2heading_msg_pane_g3_ParamLimits

0xd967,	// (0x0005c7d8) list_single_2heading_msg_pane_g3

0xd973,	// (0x0005c7e4) list_single_2heading_msg_pane_g4_ParamLimits

0xd973,	// (0x0005c7e4) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0005eb14) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0005eb14) list_single_2heading_msg_pane_g

0xc8de,	// (0x0005b74f) list_single_2heading_msg_pane_t1_ParamLimits

0xc8de,	// (0x0005b74f) list_single_2heading_msg_pane_t1

0xc906,	// (0x0005b777) list_single_2heading_msg_pane_t2_ParamLimits

0xc906,	// (0x0005b777) list_single_2heading_msg_pane_t2

0xc971,	// (0x0005b7e2) list_single_2heading_msg_pane_t3_ParamLimits

0xc971,	// (0x0005b7e2) list_single_2heading_msg_pane_t3

0x35da,	// (0x0005244b) list_single_2heading_msg_pane_t4_ParamLimits

0x35da,	// (0x0005244b) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0005eb1d) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0005eb1d) list_single_2heading_msg_pane_t

0x2ce2,	// (0x00051b53) title_pane_g4_ParamLimits

0x2ce2,	// (0x00051b53) title_pane_g4

0x0b04,	// (0x0004f975) title_pane_stacon_g3_ParamLimits

0x0b04,	// (0x0004f975) title_pane_stacon_g3

0x85f8,	// (0x00057469) list_single_2graphic_im_pane_g4_ParamLimits

0x85f8,	// (0x00057469) list_single_2graphic_im_pane_g4

0x6518,	// (0x00055389) popup_side_volume_key_window_cp

0x6cd3,	// (0x00055b44) main_idle_act2_pane_t1

0x1739,	// (0x000505aa) toolbar_button_pane_g10

0xd2ce,	// (0x0005c13f) popup_toolbar_window_cp1

0x7474,	// (0x000562e5) clock_nsta_pane_cp_t1

0x7474,	// (0x000562e5) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0005e918) clock_nsta_pane_cp_t

0x0cf5,	// (0x0004fb66) navi_navi_volume_pane_cp2_ParamLimits

0x0d04,	// (0x0004fb75) popup_side_volume_key_window_g1_ParamLimits

0x0d10,	// (0x0004fb81) popup_side_volume_key_window_g2_ParamLimits

0x0d1f,	// (0x0004fb90) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005e587) popup_side_volume_key_window_g_ParamLimits

0x1cc6,	// (0x00050b37) fep_hwr_aid_pane

0x1d6d,	// (0x00050bde) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a2d,	// (0x0005689e) fep_hwr_top_pane_g1_ParamLimits

0x7a3f,	// (0x000568b0) fep_hwr_top_pane_g2_ParamLimits

0x1d8d,	// (0x00050bfe) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0005e96d) fep_hwr_top_pane_g_ParamLimits

0x1da2,	// (0x00050c13) fep_hwr_top_text_pane_ParamLimits

0x62db,	// (0x0005514c) aid_touch_tab_arrow_arrow_2

0x62e4,	// (0x00055155) aid_touch_tab_arrow_left_2

0x1cda,	// (0x00050b4b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1d11,	// (0x00050b82) fep_hwr_prediction_pane

0x7b9f,	// (0x00056a10) fep_vkb_prediction_pane

0xe2d4,	// (0x0005d145) fep_vkb_side_pane_g3_ParamLimits

0xe2d4,	// (0x0005d145) fep_vkb_side_pane_g3

0x1f1d,	// (0x00050d8e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1f89,	// (0x00050dfa) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1f96,	// (0x00050e07) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0005ea1c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x20c5,	// (0x00050f36) fep_hwr_prediction_pane_g1

0x20cf,	// (0x00050f40) fep_hwr_prediction_pane_g2

0x20d7,	// (0x00050f48) fep_hwr_prediction_pane_g3

0x20df,	// (0x00050f50) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0005eb26) fep_hwr_prediction_pane_g

0x8af7,	// (0x00057968) fep_vkb_prediction_pane_g1

0x8b01,	// (0x00057972) fep_vkb_prediction_pane_g2

0x8b09,	// (0x0005797a) fep_vkb_prediction_pane_g3

0x8b11,	// (0x00057982) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0005eb2f) fep_vkb_prediction_pane_g

0x1b16,	// (0x00050987) slider_set_pane_g3

0x1b2a,	// (0x0005099b) slider_set_pane_g4

0x1b42,	// (0x000509b3) slider_set_pane_g5

0x1b16,	// (0x00050987) slider_set_pane_g6

0x1b58,	// (0x000509c9) slider_set_pane_g7

0x696d,	// (0x000557de) slider_form_pane_g3

0x6976,	// (0x000557e7) slider_form_pane_g4

0x697e,	// (0x000557ef) slider_form_pane_g5

0x696d,	// (0x000557de) slider_form_pane_g6

0xde55,	// (0x0005ccc6) slider_form_pane_g7

0x6f7d,	// (0x00055dee) slider_set_pane_vc_g3

0x6f86,	// (0x00055df7) slider_set_pane_vc_g4

0x6f8f,	// (0x00055e00) slider_set_pane_vc_g5

0x6f7d,	// (0x00055dee) slider_set_pane_vc_g6

0x6f98,	// (0x00055e09) slider_set_pane_vc_g7

0x7158,	// (0x00055fc9) slider_form_pane_vc_g1

0x7161,	// (0x00055fd2) slider_form_pane_vc_g2

0x716a,	// (0x00055fdb) slider_form_pane_vc_g3

0x7158,	// (0x00055fc9) slider_form_pane_vc_g4

0x7173,	// (0x00055fe4) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0005e8ea) slider_form_pane_vc_g

0x00df,	// (0x0004ef50) main_idle_act3_pane

0x8b19,	// (0x0005798a) ai3_links_pane

0xe55e,	// (0x0005d3cf) popup_ai3_data_window_ParamLimits

0xe55e,	// (0x0005d3cf) popup_ai3_data_window

0x2c9a,	// (0x00051b0b) grid_ai3_links_pane

0xe578,	// (0x0005d3e9) cell_ai3_links_pane_ParamLimits

0xe578,	// (0x0005d3e9) cell_ai3_links_pane

0x8b54,	// (0x000579c5) bg_popup_sub_pane_cp11

0x8b61,	// (0x000579d2) cell_ai3_links_pane_g1

0x2c9a,	// (0x00051b0b) bg_popup_sub_pane_cp12

0x8b86,	// (0x000579f7) heading_ai3_data_pane

0x8b8e,	// (0x000579ff) list_ai3_gene_pane

0x8b9a,	// (0x00057a0b) popup_ai3_data_window_g1

0x8ba2,	// (0x00057a13) heading_ai3_data_pane_g1

0x8baa,	// (0x00057a1b) heading_ai3_data_pane_t1

0x8bb8,	// (0x00057a29) list_double_ai3_gene_pane_ParamLimits

0x8bb8,	// (0x00057a29) list_double_ai3_gene_pane

0x8bc5,	// (0x00057a36) list_single_ai3_gene_pane_ParamLimits

0x8bc5,	// (0x00057a36) list_single_ai3_gene_pane

0x7996,	// (0x00056807) list_highlight_pane_cp7_ParamLimits

0x7996,	// (0x00056807) list_highlight_pane_cp7

0x8bd2,	// (0x00057a43) list_single_a13_gene_pane_t1_ParamLimits

0x8bd2,	// (0x00057a43) list_single_a13_gene_pane_t1

0x8be9,	// (0x00057a5a) list_single_ai3_gene_pane_g1

0x8bf2,	// (0x00057a63) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0005eb38) list_single_ai3_gene_pane_g

0x8bfa,	// (0x00057a6b) list_double_ai3_gene_pane_g1_ParamLimits

0x8bfa,	// (0x00057a6b) list_double_ai3_gene_pane_g1

0x8c06,	// (0x00057a77) list_double_ai3_gene_pane_t1_ParamLimits

0x8c06,	// (0x00057a77) list_double_ai3_gene_pane_t1

0x8c22,	// (0x00057a93) list_double_ai3_gene_pane_t2_ParamLimits

0x8c22,	// (0x00057a93) list_double_ai3_gene_pane_t2

0x8c38,	// (0x00057aa9) list_double_ai3_gene_pane_t3_ParamLimits

0x8c38,	// (0x00057aa9) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0005eb3d) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0005eb3d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3517,	// (0x00052388) aid_size_min_col_2

0xe548,	// (0x0005d3b9) aid_size_min_msg_ParamLimits

0xe548,	// (0x0005d3b9) aid_size_min_msg

0xe2e8,	// (0x0005d159) fep_vkb_top_text_pane_g2_ParamLimits

0xe2e8,	// (0x0005d159) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0005e99d) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0005e99d) fep_vkb_top_text_pane_g

0x00df,	// (0x0004ef50) main_hc_apps_shell_pane

0x8c55,	// (0x00057ac6) grid_hc_apps_pane_ParamLimits

0x8c55,	// (0x00057ac6) grid_hc_apps_pane

0x8c64,	// (0x00057ad5) list_hc_apps_pane

0x8c6c,	// (0x00057add) scroll_pane_cp37_ParamLimits

0x8c6c,	// (0x00057add) scroll_pane_cp37

0xe592,	// (0x0005d403) cell_hc_apps_pane_ParamLimits

0xe592,	// (0x0005d403) cell_hc_apps_pane

0xe650,	// (0x0005d4c1) cell_hc_apps_pane_g1_ParamLimits

0xe650,	// (0x0005d4c1) cell_hc_apps_pane_g1

0x8d57,	// (0x00057bc8) cell_hc_apps_pane_g2_ParamLimits

0x8d57,	// (0x00057bc8) cell_hc_apps_pane_g2

0x8d73,	// (0x00057be4) cell_hc_apps_pane_g3_ParamLimits

0x8d73,	// (0x00057be4) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0005eb44) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0005eb44) cell_hc_apps_pane_g

0xe67d,	// (0x0005d4ee) cell_hc_apps_pane_t1_ParamLimits

0xe67d,	// (0x0005d4ee) cell_hc_apps_pane_t1

0x393d,	// (0x000527ae) grid_highlight_pane_cp10_ParamLimits

0x393d,	// (0x000527ae) grid_highlight_pane_cp10

0xe6bb,	// (0x0005d52c) list_single_hc_apps_pane_ParamLimits

0xe6bb,	// (0x0005d52c) list_single_hc_apps_pane

0xe6e8,	// (0x0005d559) list_single_hc_apps_pane_g1

0xd98b,	// (0x0005c7fc) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0005eb4b) list_single_hc_apps_pane_g

0xd9a4,	// (0x0005c815) list_single_hc_apps_pane_g2_copy1

0x3634,	// (0x000524a5) list_single_hc_apps_pane_t1

0x36b4,	// (0x00052525) bg_set_opt_pane_cp_ParamLimits

0x0340,	// (0x0004f1b1) setting_slider_pane_t1_ParamLimits

0x0359,	// (0x0004f1ca) setting_slider_pane_t2_ParamLimits

0x0373,	// (0x0004f1e4) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005e3cf) setting_slider_pane_t_ParamLimits

0x038b,	// (0x0004f1fc) slider_set_pane_ParamLimits

0x100c,	// (0x0004fe7d) control_pane_g5_ParamLimits

0x100c,	// (0x0004fe7d) control_pane_g5

0x67bc,	// (0x0005562d) slider_set_pane_g1_ParamLimits

0x1b0a,	// (0x0005097b) slider_set_pane_g2_ParamLimits

0x1b16,	// (0x00050987) slider_set_pane_g3_ParamLimits

0x1b2a,	// (0x0005099b) slider_set_pane_g4_ParamLimits

0x1b42,	// (0x000509b3) slider_set_pane_g5_ParamLimits

0x1b16,	// (0x00050987) slider_set_pane_g6_ParamLimits

0x1b58,	// (0x000509c9) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005e7d5) slider_set_pane_g_ParamLimits

0x4a6a,	// (0x000538db) navi_icon_text_pane_ParamLimits

0xd663,	// (0x0005c4d4) aid_fill_nsta_2_ParamLimits

0xd69a,	// (0x0005c50b) aid_touch_tab_arrow_left_ParamLimits

0xd6b0,	// (0x0005c521) aid_touch_tab_arrow_right_ParamLimits

0xd74b,	// (0x0005c5bc) clock_nsta_pane_ParamLimits

0x62bd,	// (0x0005512e) navi_icon_pane_g1_ParamLimits

0x62c9,	// (0x0005513a) navi_text_pane_t1_ParamLimits

0x7580,	// (0x000563f1) navi_icon_text_pane_g1_ParamLimits

0x758c,	// (0x000563fd) navi_icon_text_pane_t1_ParamLimits

0xe6e8,	// (0x0005d559) list_single_hc_apps_pane_g1_ParamLimits

0xd98b,	// (0x0005c7fc) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0005eb4b) list_single_hc_apps_pane_g_ParamLimits

0xd9a4,	// (0x0005c815) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3634,	// (0x000524a5) list_single_hc_apps_pane_t1_ParamLimits

0xb7d8,	// (0x0005a649) popup_toolbar2_fixed_window_ParamLimits

0xb7d8,	// (0x0005a649) popup_toolbar2_fixed_window

0xc701,	// (0x0005b572) popup_toolbar2_float_window

0x2c9a,	// (0x00051b0b) bg_popup_sub_pane_cp27

0x8e4a,	// (0x00057cbb) grid_toolbar2_float_pane

0x2c9a,	// (0x00051b0b) bg_popup_sub_pane_cp26

0x8e4a,	// (0x00057cbb) grid_toolbar2_fixed_pane

0xe701,	// (0x0005d572) cell_toolbar2_fixed_pane_ParamLimits

0xe701,	// (0x0005d572) cell_toolbar2_fixed_pane

0xe71b,	// (0x0005d58c) cell_toolbar2_fixed_pane_g1

0x8e6b,	// (0x00057cdc) toolbar2_fixed_button_pane

0x5432,	// (0x000542a3) toolbar2_fixed_button_pane_g1

0x5442,	// (0x000542b3) toolbar2_fixed_button_pane_g2

0x543a,	// (0x000542ab) toolbar2_fixed_button_pane_g3

0x5452,	// (0x000542c3) toolbar2_fixed_button_pane_g4

0x544a,	// (0x000542bb) toolbar2_fixed_button_pane_g5

0x545a,	// (0x000542cb) toolbar2_fixed_button_pane_g6

0x5462,	// (0x000542d3) toolbar2_fixed_button_pane_g7

0x5472,	// (0x000542e3) toolbar2_fixed_button_pane_g8

0x546a,	// (0x000542db) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005e6d7) toolbar2_fixed_button_pane_g

0x8e73,	// (0x00057ce4) cell_toolbar2_float_pane_ParamLimits

0x8e73,	// (0x00057ce4) cell_toolbar2_float_pane

0x8e84,	// (0x00057cf5) cell_toolbar2_float_pane_g1

0x8e6b,	// (0x00057cdc) toolbar2_fixed_button_pane_cp

0xe1c2,	// (0x0005d033) fep_vkb_accented_list_pane_ParamLimits

0xe1c2,	// (0x0005d033) fep_vkb_accented_list_pane

0x1efd,	// (0x00050d6e) bg_popup_fep_shadow_pane_g9

0x4bea,	// (0x00053a5b) bg_popup_fep_shadow_pane_cp3

0x409d,	// (0x00052f0e) list_accented_list_pane

0x8e8d,	// (0x00057cfe) list_single_accented_list_pane_ParamLimits

0x8e8d,	// (0x00057cfe) list_single_accented_list_pane

0x4bea,	// (0x00053a5b) list_highlight_pane_cp10

0x8e9e,	// (0x00057d0f) list_single_accented_list_pane_t1

0xc62b,	// (0x0005b49c) popup_slider_window_ParamLimits

0xc62b,	// (0x0005b49c) popup_slider_window

0x8ada,	// (0x0005794b) aid_indentation_list_msg

0xe812,	// (0x0005d683) bg_popup_window_pane_cp19

0x8fca,	// (0x00057e3b) popup_slider_window_g1

0x8fe6,	// (0x00057e57) popup_slider_window_g2

0x9002,	// (0x00057e73) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0005eb50) popup_slider_window_g

0x9068,	// (0x00057ed9) popup_slider_window_t1

0x90dc,	// (0x00057f4d) small_volume_slider_vertical_pane

0x79d1,	// (0x00056842) small_volume_slider_vertical_pane_g1

0x79d1,	// (0x00056842) small_volume_slider_vertical_pane_g2

0x90f8,	// (0x00057f69) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0005eb62) small_volume_slider_vertical_pane_g

0xb746,	// (0x0005a5b7) area_side_right_pane_ParamLimits

0xb746,	// (0x0005a5b7) area_side_right_pane

0xc9df,	// (0x0005b850) aid_size_side_button_ParamLimits

0xc9df,	// (0x0005b850) aid_size_side_button

0xc9f8,	// (0x0005b869) grid_sctrl_middle_pane_ParamLimits

0xc9f8,	// (0x0005b869) grid_sctrl_middle_pane

0x211a,	// (0x00050f8b) sctrl_sk_bottom_pane

0x212b,	// (0x00050f9c) sctrl_sk_top_pane

0x213d,	// (0x00050fae) aid_touch_sctrl_top

0x214a,	// (0x00050fbb) bg_sctrl_sk_pane_ParamLimits

0x214a,	// (0x00050fbb) bg_sctrl_sk_pane

0x2158,	// (0x00050fc9) sctrl_sk_top_pane_g1

0x2165,	// (0x00050fd6) sctrl_sk_top_pane_t1

0x213d,	// (0x00050fae) aid_touch_sctrl_bottom

0x214a,	// (0x00050fbb) bg_sctrl_sk_pane_cp_ParamLimits

0x214a,	// (0x00050fbb) bg_sctrl_sk_pane_cp

0x2180,	// (0x00050ff1) sctrl_sk_bottom_pane_g1

0x2165,	// (0x00050fd6) sctrl_sk_bottom_pane_t1

0xca12,	// (0x0005b883) cell_sctrl_middle_pane_ParamLimits

0xca12,	// (0x0005b883) cell_sctrl_middle_pane

0xca23,	// (0x0005b894) aid_touch_sctrl_middle_ParamLimits

0xca23,	// (0x0005b894) aid_touch_sctrl_middle

0xca30,	// (0x0005b8a1) bg_sctrl_middle_pane_ParamLimits

0xca30,	// (0x0005b8a1) bg_sctrl_middle_pane

0x27ed,	// (0x0005165e) cell_sctrl_middle_pane_g1_ParamLimits

0x27ed,	// (0x0005165e) cell_sctrl_middle_pane_g1

0xca3e,	// (0x0005b8af) cell_sctrl_middle_pane_g2_ParamLimits

0xca3e,	// (0x0005b8af) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0005eb6e) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0005eb6e) cell_sctrl_middle_pane_g

0x5432,	// (0x000542a3) bg_sctrl_middle_pane_g1

0x543a,	// (0x000542ab) bg_sctrl_middle_pane_g2

0x5442,	// (0x000542b3) bg_sctrl_middle_pane_g3

0x544a,	// (0x000542bb) bg_sctrl_middle_pane_g4

0x5452,	// (0x000542c3) bg_sctrl_middle_pane_g5

0x545a,	// (0x000542cb) bg_sctrl_middle_pane_g6

0x5462,	// (0x000542d3) bg_sctrl_middle_pane_g7

0x546a,	// (0x000542db) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0005eb73) bg_sctrl_middle_pane_g

0x5472,	// (0x000542e3) bg_sctrl_middle_pane_g8_copy1

0x5432,	// (0x000542a3) bg_sctrl_sk_pane_g1

0x5442,	// (0x000542b3) bg_sctrl_sk_pane_g2

0x543a,	// (0x000542ab) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005e6d7) bg_sctrl_sk_pane_g

0x3e78,	// (0x00052ce9) aid_size_touch_scroll_bar

0x5452,	// (0x000542c3) bg_sctrl_sk_pane_g4

0x544a,	// (0x000542bb) bg_sctrl_sk_pane_g5

0x545a,	// (0x000542cb) bg_sctrl_sk_pane_g6

0x5462,	// (0x000542d3) bg_sctrl_sk_pane_g7

0x5472,	// (0x000542e3) bg_sctrl_sk_pane_g8

0x546a,	// (0x000542db) bg_sctrl_sk_pane_g9

0x11d4,	// (0x00050045) popup_fep_china_hwr2_fs_candidate_window

0xc145,	// (0x0005afb6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc145,	// (0x0005afb6) popup_fep_china_hwr2_fs_control_window

0x1f1d,	// (0x00050d8e) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0005eb69) sctrl_sk_top_pane_g

0xe8ca,	// (0x0005d73b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe8ca,	// (0x0005d73b) aid_fep_china_hwr2_fs_cell

0xe8de,	// (0x0005d74f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe8de,	// (0x0005d74f) bg_popup_fep_shadow_pane_cp4

0xe8f5,	// (0x0005d766) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe8f5,	// (0x0005d766) bg_popup_fep_shadow_pane_cp5

0xe907,	// (0x0005d778) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe907,	// (0x0005d778) popup_fep_china_hwr2_fs_control_bar_grid

0xe91b,	// (0x0005d78c) popup_fep_china_hwr2_fs_control_funtion_grid

0x9154,	// (0x00057fc5) aid_fep_china_hwr2_fs_candi_cell

0x2c9a,	// (0x00051b0b) bg_popup_fep_shadow_pane_cp6

0x915e,	// (0x00057fcf) popup_fep_china_hwr2_fs_candidate_grid

0xe923,	// (0x0005d794) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe923,	// (0x0005d794) cell_fep_china_hwr2_fs_funtion_grid

0x79d1,	// (0x00056842) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9180,	// (0x00057ff1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9180,	// (0x00057ff1) cell_fep_china_hwr2_fs_funtion_grid_g1

0x918e,	// (0x00057fff) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x918e,	// (0x00057fff) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0005eb84) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0005eb84) cell_fep_china_hwr2_fs_funtion_grid_g

0xe93b,	// (0x0005d7ac) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe93b,	// (0x0005d7ac) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe950,	// (0x0005d7c1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe950,	// (0x0005d7c1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0005eb89) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0005eb89) cell_fep_china_hwr2_fs_funtion_grid_t

0x91d5,	// (0x00058046) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x91dd,	// (0x0005804e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91e5,	// (0x00058056) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0005eb8e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91ed,	// (0x0005805e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91ed,	// (0x0005805e) cell_fep_china_hwr2_fs_candidate_grid

0x9206,	// (0x00058077) popup_fep_china_hwr2_fs_candidate_grid_g20

0x920e,	// (0x0005807f) popup_fep_china_hwr2_fs_candidate_grid_g21

0x79d1,	// (0x00056842) cell_fep_china_hwr2_fs_candidate_grid_g1

0x79d1,	// (0x00056842) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0005e9a2) cell_fep_china_hwr2_fs_candidate_grid_g

0x9216,	// (0x00058087) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5028,	// (0x00053e99) clock_nsta_pane_cp_24_ParamLimits

0x5028,	// (0x00053e99) clock_nsta_pane_cp_24

0x50a6,	// (0x00053f17) indicator_nsta_pane_cp_24_ParamLimits

0x50a6,	// (0x00053f17) indicator_nsta_pane_cp_24

0x6139,	// (0x00054faa) heading_pane_g1

0x0001,

0xf8cb,	// (0x0005e73c) heading_pane_g

0x6b1c,	// (0x0005598d) grid_sct_catagory_button_pane

0x6b4c,	// (0x000559bd) scroll_pane_cp5_ParamLimits

0x75ce,	// (0x0005643f) button_value_adjust_pane_cp5_ParamLimits

0x75ce,	// (0x0005643f) button_value_adjust_pane_cp5

0x76ad,	// (0x0005651e) form2_midp_time_pane_ParamLimits

0x9224,	// (0x00058095) cell_sct_catagory_button_pane_ParamLimits

0x9224,	// (0x00058095) cell_sct_catagory_button_pane

0x7996,	// (0x00056807) bg_button_pane_cp01_ParamLimits

0x7996,	// (0x00056807) bg_button_pane_cp01

0x79d1,	// (0x00056842) cell_sct_catagory_button_pane_g1

0xc6a4,	// (0x0005b515) popup_tb_extension_window

0xe96c,	// (0x0005d7dd) aid_size_cell_ext_ParamLimits

0xe96c,	// (0x0005d7dd) aid_size_cell_ext

0x3cba,	// (0x00052b2b) bg_tb_trans_pane_cp1_ParamLimits

0x3cba,	// (0x00052b2b) bg_tb_trans_pane_cp1

0xe992,	// (0x0005d803) grid_tb_ext_pane_ParamLimits

0xe992,	// (0x0005d803) grid_tb_ext_pane

0xe9cd,	// (0x0005d83e) cell_tb_ext_pane_ParamLimits

0xe9cd,	// (0x0005d83e) cell_tb_ext_pane

0xe9f5,	// (0x0005d866) cell_tb_ext_pane_g1_ParamLimits

0xe9f5,	// (0x0005d866) cell_tb_ext_pane_g1

0x92b8,	// (0x00058129) cell_tb_ext_pane_t1

0x393d,	// (0x000527ae) list_highlight_pane_cp11_ParamLimits

0x393d,	// (0x000527ae) list_highlight_pane_cp11

0xb7ed,	// (0x0005a65e) popup_uni_indicator_window_ParamLimits

0xb7ed,	// (0x0005a65e) popup_uni_indicator_window

0x3f55,	// (0x00052dc6) bg_popup_sub_pane_cp14

0x92d3,	// (0x00058144) list_uniindi_pane

0x92df,	// (0x00058150) uniindi_top_pane

0x393d,	// (0x000527ae) bg_uniindi_top_pane

0x92fe,	// (0x0005816f) uniindi_top_pane_g1

0x9314,	// (0x00058185) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0005eb95) uniindi_top_pane_g

0x933e,	// (0x000581af) uniindi_top_pane_t1

0x9368,	// (0x000581d9) list_single_uniindi_pane_ParamLimits

0x9368,	// (0x000581d9) list_single_uniindi_pane

0x79d1,	// (0x00056842) bg_uniindi_top_pane_g1

0x937b,	// (0x000581ec) list_single_uniindi_pane_g1

0x938e,	// (0x000581ff) list_single_uniindi_pane_t1

0x00df,	// (0x0004ef50) control_bg_pane

0x93b3,	// (0x00058224) bg_sctrl_sk_pane_cp1

0x93bc,	// (0x0005822d) bg_sctrl_sk_pane_cp2

0x93c5,	// (0x00058236) control_bg_pane_g1

0x93ce,	// (0x0005823f) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0005eb9e) control_bg_pane_g

0x7428,	// (0x00056299) cell_indicator_nsta_pane_g1_ParamLimits

0xe04f,	// (0x0005cec0) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0005e906) cell_indicator_nsta_pane_g_ParamLimits

0x32f4,	// (0x00052165) form2_midp_time_pane_t1_ParamLimits

0x1cb8,	// (0x00050b29) main_idle_act4_pane_ParamLimits

0x1cb8,	// (0x00050b29) main_idle_act4_pane

0xc6a4,	// (0x0005b515) popup_tb_extension_window_ParamLimits

0xe9b4,	// (0x0005d825) tb_ext_find_pane_ParamLimits

0xe9b4,	// (0x0005d825) tb_ext_find_pane

0x93d7,	// (0x00058248) ai_gene_pane_1_cp1

0x4d31,	// (0x00053ba2) ai_gene_pane_2_cp1

0x93df,	// (0x00058250) list_single_idle_plugin_calendar_pane

0x93e8,	// (0x00058259) list_single_idle_plugin_notification_pane

0x93f1,	// (0x00058262) list_single_idle_plugin_player_pane

0xea12,	// (0x0005d883) list_single_idle_plugin_shortcut_pane_ParamLimits

0xea12,	// (0x0005d883) list_single_idle_plugin_shortcut_pane

0xea3a,	// (0x0005d8ab) main_idle_act4_pane_t1

0xea50,	// (0x0005d8c1) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0005eba3) main_idle_act4_pane_t

0xea66,	// (0x0005d8d7) middle_sk_idle_act4_pane_ParamLimits

0xea66,	// (0x0005d8d7) middle_sk_idle_act4_pane

0xea82,	// (0x0005d8f3) popup_clock_digital_analogue_window_cp2

0xeaaa,	// (0x0005d91b) shortcut_wheel_idle_act4_pane_ParamLimits

0xeaaa,	// (0x0005d91b) shortcut_wheel_idle_act4_pane

0x79d1,	// (0x00056842) shortcut_wheel_idle_act4_pane_g1

0x79d1,	// (0x00056842) shortcut_wheel_idle_act4_pane_g2

0x79d1,	// (0x00056842) shortcut_wheel_idle_act4_pane_g3

0x79d1,	// (0x00056842) shortcut_wheel_idle_act4_pane_g4

0x79d1,	// (0x00056842) shortcut_wheel_idle_act4_pane_g5

0x9484,	// (0x000582f5) shortcut_wheel_idle_act4_pane_g6

0x948c,	// (0x000582fd) shortcut_wheel_idle_act4_pane_g7

0x9494,	// (0x00058305) shortcut_wheel_idle_act4_pane_g8

0x949c,	// (0x0005830d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0005eba8) shortcut_wheel_idle_act4_pane_g

0xe3ee,	// (0x0005d25f) middle_sk_idle_act4_pane_g1_ParamLimits

0xe3ee,	// (0x0005d25f) middle_sk_idle_act4_pane_g1

0xeb27,	// (0x0005d998) middle_sk_idle_act4_pane_g2_ParamLimits

0xeb27,	// (0x0005d998) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0005ebcb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0005ebcb) middle_sk_idle_act4_pane_g

0xeb3f,	// (0x0005d9b0) middle_sk_idle_act4_pane_t1_ParamLimits

0xeb3f,	// (0x0005d9b0) middle_sk_idle_act4_pane_t1

0xeb6e,	// (0x0005d9df) grid_ai_shortcut_pane_ParamLimits

0xeb6e,	// (0x0005d9df) grid_ai_shortcut_pane

0xeb8b,	// (0x0005d9fc) list_highlight_pane_cp16_ParamLimits

0xeb8b,	// (0x0005d9fc) list_highlight_pane_cp16

0xeb98,	// (0x0005da09) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb98,	// (0x0005da09) list_single_idle_plugin_shortcut_pane_g1

0xeba4,	// (0x0005da15) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeba4,	// (0x0005da15) list_single_idle_plugin_shortcut_pane_g2

0xebc0,	// (0x0005da31) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xebc0,	// (0x0005da31) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0005ebd0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0005ebd0) list_single_idle_plugin_shortcut_pane_g

0xebd5,	// (0x0005da46) cell_ai_shortcut_pane_ParamLimits

0xebd5,	// (0x0005da46) cell_ai_shortcut_pane

0xebeb,	// (0x0005da5c) cell_ai_shortcut_pane_g1_ParamLimits

0xebeb,	// (0x0005da5c) cell_ai_shortcut_pane_g1

0x93d7,	// (0x00058248) ai_gene_pane_1_cp2

0x95cc,	// (0x0005843d) ai_gene_pane_2_cp2

0x95d4,	// (0x00058445) list_highlight_pane_cp15

0x95dd,	// (0x0005844e) list_single_idle_plugin_calendar_pane_g1

0x95d4,	// (0x00058445) list_highlight_pane_cp17

0x95e5,	// (0x00058456) list_single_idle_plugin_calendar_pane_g1_copy1

0x95ed,	// (0x0005845e) list_single_idle_plugin_player_pane_g1

0x6d75,	// (0x00055be6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0005ebd7) list_single_idle_plugin_player_pane_g

0x95f5,	// (0x00058466) list_single_idle_plugin_player_pane_t1

0x9603,	// (0x00058474) list_single_idle_plugin_player_pane_t2

0x9611,	// (0x00058482) list_single_idle_plugin_player_pane_t3

0x961f,	// (0x00058490) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0005ebdc) list_single_idle_plugin_player_pane_t

0x962d,	// (0x0005849e) wait_bar_pane_cp15

0x9635,	// (0x000584a6) grid_ai_notification_pane

0x6d75,	// (0x00055be6) list_single_idle_plugin_notification_pane_g1

0xec0d,	// (0x0005da7e) cell_ai_notification_pane_ParamLimits

0xec0d,	// (0x0005da7e) cell_ai_notification_pane

0x964b,	// (0x000584bc) cell_ai_notification_pane_g1

0x9653,	// (0x000584c4) cell_ai_notification_pane_t1

0xec1a,	// (0x0005da8b) tb_ext_find_button_pane

0xec22,	// (0x0005da93) tb_ext_find_pane_g1

0xec2a,	// (0x0005da9b) tb_ext_find_pane_t1

0x45cb,	// (0x0005343c) tb_ext_find_button_pane_g1

0x967f,	// (0x000584f0) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0005ebe5) tb_ext_find_button_pane_g

0xea3a,	// (0x0005d8ab) main_idle_act4_pane_t1_ParamLimits

0xea50,	// (0x0005d8c1) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0005eba3) main_idle_act4_pane_t_ParamLimits

0xea82,	// (0x0005d8f3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea9a,	// (0x0005d90b) sat_plugin_idle_act4_pane_ParamLimits

0xea9a,	// (0x0005d90b) sat_plugin_idle_act4_pane

0xec38,	// (0x0005daa9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xec38,	// (0x0005daa9) sat_plugin_idle_act4_pane_t1

0xec50,	// (0x0005dac1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xec50,	// (0x0005dac1) sat_plugin_idle_act4_pane_t2

0xec68,	// (0x0005dad9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec68,	// (0x0005dad9) sat_plugin_idle_act4_pane_t3

0xec80,	// (0x0005daf1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec80,	// (0x0005daf1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0005ebea) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0005ebea) sat_plugin_idle_act4_pane_t

0x01a4,	// (0x0004f015) popup_battery_window_ParamLimits

0x01a4,	// (0x0004f015) popup_battery_window

0x393d,	// (0x000527ae) bg_popup_sub_pane_cp25_ParamLimits

0x393d,	// (0x000527ae) bg_popup_sub_pane_cp25

0x96d4,	// (0x00058545) popup_battery_window_g1_ParamLimits

0x96d4,	// (0x00058545) popup_battery_window_g1

0x96e0,	// (0x00058551) popup_battery_window_t1_ParamLimits

0x96e0,	// (0x00058551) popup_battery_window_t1

0x96f2,	// (0x00058563) popup_battery_window_t2_ParamLimits

0x96f2,	// (0x00058563) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0005ebf3) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0005ebf3) popup_battery_window_t

0xd4c6,	// (0x0005c337) midp_canvas_pane_ParamLimits

0xd523,	// (0x0005c394) midp_keypad_pane_ParamLimits

0xd523,	// (0x0005c394) midp_keypad_pane

0x4f0e,	// (0x00053d7f) main_midp_pane_ParamLimits

0x7492,	// (0x00056303) signal_pane_g2_cp_ParamLimits

0xec98,	// (0x0005db09) aid_size_cell_midp_keypad_ParamLimits

0xec98,	// (0x0005db09) aid_size_cell_midp_keypad

0xecb6,	// (0x0005db27) midp_keyp_game_grid_pane_ParamLimits

0xecb6,	// (0x0005db27) midp_keyp_game_grid_pane

0xecdd,	// (0x0005db4e) midp_keyp_rocker_pane_ParamLimits

0xecdd,	// (0x0005db4e) midp_keyp_rocker_pane

0xed2e,	// (0x0005db9f) midp_keyp_sk_left_pane_ParamLimits

0xed2e,	// (0x0005db9f) midp_keyp_sk_left_pane

0xed82,	// (0x0005dbf3) midp_keyp_sk_right_pane_ParamLimits

0xed82,	// (0x0005dbf3) midp_keyp_sk_right_pane

0x2c9a,	// (0x00051b0b) bg_button_pane_cp03

0xedd6,	// (0x0005dc47) midp_keyp_sk_left_pane_g1

0x2c9a,	// (0x00051b0b) bg_button_pane_cp04

0xedd6,	// (0x0005dc47) midp_keyp_sk_right_pane_g1

0x79d1,	// (0x00056842) midp_keyp_rocker_pane_g1

0xeddf,	// (0x0005dc50) keyp_game_cell_pane_ParamLimits

0xeddf,	// (0x0005dc50) keyp_game_cell_pane

0x2c9a,	// (0x00051b0b) bg_button_pane_cp02

0xee03,	// (0x0005dc74) keyp_game_cell_pane_g1

0xb788,	// (0x0005a5f9) popup_fep_vkb2_window_ParamLimits

0xb788,	// (0x0005a5f9) popup_fep_vkb2_window

0xca4a,	// (0x0005b8bb) aid_size_cell_vkb2_ParamLimits

0xca4a,	// (0x0005b8bb) aid_size_cell_vkb2

0xca80,	// (0x0005b8f1) popup_fep_vkb2_window_g1_ParamLimits

0xca80,	// (0x0005b8f1) popup_fep_vkb2_window_g1

0xcad0,	// (0x0005b941) vkb2_area_bottom_pane_ParamLimits

0xcad0,	// (0x0005b941) vkb2_area_bottom_pane

0xcb24,	// (0x0005b995) vkb2_area_keypad_pane_ParamLimits

0xcb24,	// (0x0005b995) vkb2_area_keypad_pane

0xcb6c,	// (0x0005b9dd) vkb2_area_top_pane_ParamLimits

0xcb6c,	// (0x0005b9dd) vkb2_area_top_pane

0xcbf2,	// (0x0005ba63) vkb2_top_entry_pane_ParamLimits

0xcbf2,	// (0x0005ba63) vkb2_top_entry_pane

0xcc1f,	// (0x0005ba90) vkb2_top_grid_left_pane_ParamLimits

0xcc1f,	// (0x0005ba90) vkb2_top_grid_left_pane

0xcc3f,	// (0x0005bab0) vkb2_top_grid_right_pane_ParamLimits

0xcc3f,	// (0x0005bab0) vkb2_top_grid_right_pane

0x23ec,	// (0x0005125d) vkb2_cell_keypad_pane_ParamLimits

0x23ec,	// (0x0005125d) vkb2_cell_keypad_pane

0xcc85,	// (0x0005baf6) vkb2_area_bottom_grid_pane_ParamLimits

0xcc85,	// (0x0005baf6) vkb2_area_bottom_grid_pane

0xccaf,	// (0x0005bb20) vkb2_area_bottom_pane_g1_ParamLimits

0xccaf,	// (0x0005bb20) vkb2_area_bottom_pane_g1

0xccd5,	// (0x0005bb46) vkb2_area_bottom_pane_g2_ParamLimits

0xccd5,	// (0x0005bb46) vkb2_area_bottom_pane_g2

0xcd06,	// (0x0005bb77) vkb2_area_bottom_pane_g3_ParamLimits

0xcd06,	// (0x0005bb77) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0005ebf8) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0005ebf8) vkb2_area_bottom_pane_g

0x2596,	// (0x00051407) vkb2_top_cell_left_pane_ParamLimits

0x2596,	// (0x00051407) vkb2_top_cell_left_pane

0xee0c,	// (0x0005dc7d) vkb2_top_entry_pane_g1_ParamLimits

0xee0c,	// (0x0005dc7d) vkb2_top_entry_pane_g1

0xee1a,	// (0x0005dc8b) vkb2_top_entry_pane_t1_ParamLimits

0xee1a,	// (0x0005dc8b) vkb2_top_entry_pane_t1

0x98c4,	// (0x00058735) vkb2_top_entry_pane_t2_ParamLimits

0x98c4,	// (0x00058735) vkb2_top_entry_pane_t2

0x98f6,	// (0x00058767) vkb2_top_entry_pane_t3_ParamLimits

0x98f6,	// (0x00058767) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0005ebff) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0005ebff) vkb2_top_entry_pane_t

0xcd70,	// (0x0005bbe1) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd70,	// (0x0005bbe1) vkb2_top_grid_right_pane_g1

0x25f9,	// (0x0005146a) vkb2_top_grid_right_pane_g2_ParamLimits

0x25f9,	// (0x0005146a) vkb2_top_grid_right_pane_g2

0x2611,	// (0x00051482) vkb2_top_grid_right_pane_g3_ParamLimits

0x2611,	// (0x00051482) vkb2_top_grid_right_pane_g3

0xcd86,	// (0x0005bbf7) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd86,	// (0x0005bbf7) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0005ec06) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0005ec06) vkb2_top_grid_right_pane_g

0x263f,	// (0x000514b0) vkb2_top_cell_left_pane_g1

0x2656,	// (0x000514c7) vkb2_cell_keypad_pane_g1_ParamLimits

0x2656,	// (0x000514c7) vkb2_cell_keypad_pane_g1

0x991a,	// (0x0005878b) vkb2_cell_keypad_pane_t1_ParamLimits

0x991a,	// (0x0005878b) vkb2_cell_keypad_pane_t1

0x2664,	// (0x000514d5) vkb2_cell_bottom_grid_pane_ParamLimits

0x2664,	// (0x000514d5) vkb2_cell_bottom_grid_pane

0x269d,	// (0x0005150e) vkb2_cell_bottom_grid_pane_g1

0xeacb,	// (0x0005d93c) aid_call2_pane_cp02

0xead3,	// (0x0005d944) aid_call_pane_cp02

0xeadb,	// (0x0005d94c) clock_digital_number_pane_cp10

0xeae3,	// (0x0005d954) clock_digital_number_pane_cp11

0xeaeb,	// (0x0005d95c) clock_digital_number_pane_cp12

0xeaf3,	// (0x0005d964) clock_digital_number_pane_cp13

0xeafb,	// (0x0005d96c) clock_digital_separator_pane_cp10

0x45cb,	// (0x0005343c) popup_clock_digital_analogue_window_cp2_g1

0x45cb,	// (0x0005343c) popup_clock_digital_analogue_window_cp2_g2

0xeb03,	// (0x0005d974) popup_clock_digital_analogue_window_cp2_g3

0x45cb,	// (0x0005343c) popup_clock_digital_analogue_window_cp2_g4

0xeb03,	// (0x0005d974) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0005ebbb) popup_clock_digital_analogue_window_cp2_g

0xeb0b,	// (0x0005d97c) popup_clock_digital_analogue_window_cp2_t1

0xeb19,	// (0x0005d98a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0005ebc6) popup_clock_digital_analogue_window_cp2_t

0x79d1,	// (0x00056842) clock_digital_number_pane_cp10_g1

0x79d1,	// (0x00056842) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005e9a2) clock_digital_number_pane_cp10_g

0x79d1,	// (0x00056842) clock_digital_separator_pane_cp10_g1

0x79d1,	// (0x00056842) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0005e9a2) clock_digital_separator_pane_cp10_g

0x9320,	// (0x00058191) uniindi_top_pane_g3

0x9331,	// (0x000581a2) uniindi_top_pane_g4

0x2477,	// (0x000512e8) vkb2_row_keypad_pane_ParamLimits

0x2477,	// (0x000512e8) vkb2_row_keypad_pane

0x26b9,	// (0x0005152a) vkb2_cell_t_keypad_pane_ParamLimits

0x26b9,	// (0x0005152a) vkb2_cell_t_keypad_pane

0x26c9,	// (0x0005153a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x26c9,	// (0x0005153a) vkb2_cell_t_keypad_pane_cp08

0x26dc,	// (0x0005154d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x26dc,	// (0x0005154d) vkb2_cell_t_keypad_pane_cp09

0x26f0,	// (0x00051561) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x26f0,	// (0x00051561) vkb2_cell_t_keypad_pane_cp01

0x2701,	// (0x00051572) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2701,	// (0x00051572) vkb2_cell_t_keypad_pane_cp02

0x2712,	// (0x00051583) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2712,	// (0x00051583) vkb2_cell_t_keypad_pane_cp03

0x2723,	// (0x00051594) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2723,	// (0x00051594) vkb2_cell_t_keypad_pane_cp04

0x2734,	// (0x000515a5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2734,	// (0x000515a5) vkb2_cell_t_keypad_pane_cp05

0x2745,	// (0x000515b6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2745,	// (0x000515b6) vkb2_cell_t_keypad_pane_cp06

0x2756,	// (0x000515c7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2756,	// (0x000515c7) vkb2_cell_t_keypad_pane_cp07

0x2767,	// (0x000515d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2767,	// (0x000515d8) vkb2_cell_t_keypad_pane_cp10

0x1f1d,	// (0x00050d8e) vkb2_cell_t_keypad_pane_g1

0x9931,	// (0x000587a2) vkb2_cell_t_keypad_pane_t1

0x00df,	// (0x0004ef50) popup_grid_graphic2_window

0xee53,	// (0x0005dcc4) aid_size_cell_graphic2_ParamLimits

0xee53,	// (0x0005dcc4) aid_size_cell_graphic2

0xee9e,	// (0x0005dd0f) bg_popup_window_pane_cp21_ParamLimits

0xee9e,	// (0x0005dd0f) bg_popup_window_pane_cp21

0xeeac,	// (0x0005dd1d) graphic2_pages_pane_ParamLimits

0xeeac,	// (0x0005dd1d) graphic2_pages_pane

0xef02,	// (0x0005dd73) grid_graphic2_control_pane_ParamLimits

0xef02,	// (0x0005dd73) grid_graphic2_control_pane

0xef4a,	// (0x0005ddbb) grid_graphic2_pane_ParamLimits

0xef4a,	// (0x0005ddbb) grid_graphic2_pane

0xefd1,	// (0x0005de42) cell_graphic2_pane

0x00df,	// (0x0004ef50) main_comp_mode_pane

0x8b8e,	// (0x000579ff) list_ai3_gene_pane_ParamLimits

0xe812,	// (0x0005d683) bg_popup_window_pane_cp19_ParamLimits

0x8f6e,	// (0x00057ddf) bg_touch_area_indi_pane_ParamLimits

0x8f6e,	// (0x00057ddf) bg_touch_area_indi_pane

0x8f84,	// (0x00057df5) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f84,	// (0x00057df5) bg_touch_area_indi_pane_cp01

0x8f9a,	// (0x00057e0b) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f9a,	// (0x00057e0b) bg_touch_area_indi_pane_cp02

0x8fb0,	// (0x00057e21) bg_touch_area_indi_pane_cp03_ParamLimits

0x8fb0,	// (0x00057e21) bg_touch_area_indi_pane_cp03

0x8fca,	// (0x00057e3b) popup_slider_window_g1_ParamLimits

0x8fe6,	// (0x00057e57) popup_slider_window_g2_ParamLimits

0x9002,	// (0x00057e73) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0005eb50) popup_slider_window_g_ParamLimits

0x9068,	// (0x00057ed9) popup_slider_window_t1_ParamLimits

0x90dc,	// (0x00057f4d) small_volume_slider_vertical_pane_ParamLimits

0xefd1,	// (0x0005de42) cell_graphic2_pane_ParamLimits

0xf02c,	// (0x0005de9d) bg_button_pane_cp10_ParamLimits

0xf02c,	// (0x0005de9d) bg_button_pane_cp10

0xf03f,	// (0x0005deb0) bg_button_pane_cp11_ParamLimits

0xf03f,	// (0x0005deb0) bg_button_pane_cp11

0xf052,	// (0x0005dec3) graphic2_pages_pane_g1_ParamLimits

0xf052,	// (0x0005dec3) graphic2_pages_pane_g1

0xf06d,	// (0x0005dede) graphic2_pages_pane_g2_ParamLimits

0xf06d,	// (0x0005dede) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0005ec14) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0005ec14) graphic2_pages_pane_g

0xf085,	// (0x0005def6) graphic2_pages_pane_t1_ParamLimits

0xf085,	// (0x0005def6) graphic2_pages_pane_t1

0xf09d,	// (0x0005df0e) cell_graphic2_control_pane_ParamLimits

0xf09d,	// (0x0005df0e) cell_graphic2_control_pane

0xf0cf,	// (0x0005df40) cell_graphic2_pane_g1_ParamLimits

0xf0cf,	// (0x0005df40) cell_graphic2_pane_g1

0xe3fc,	// (0x0005d26d) cell_graphic2_pane_g2_ParamLimits

0xe3fc,	// (0x0005d26d) cell_graphic2_pane_g2

0xee91,	// (0x0005dd02) cell_graphic2_pane_g3_ParamLimits

0xee91,	// (0x0005dd02) cell_graphic2_pane_g3

0xe409,	// (0x0005d27a) cell_graphic2_pane_g4_ParamLimits

0xe409,	// (0x0005d27a) cell_graphic2_pane_g4

0xf0dc,	// (0x0005df4d) cell_graphic2_pane_g5_ParamLimits

0xf0dc,	// (0x0005df4d) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0005ec19) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0005ec19) cell_graphic2_pane_g

0xf0fc,	// (0x0005df6d) cell_graphic2_pane_t1_ParamLimits

0xf0fc,	// (0x0005df6d) cell_graphic2_pane_t1

0x612d,	// (0x00054f9e) grid_highlight_pane_cp11_ParamLimits

0x612d,	// (0x00054f9e) grid_highlight_pane_cp11

0x393d,	// (0x000527ae) bg_button_pane_cp05

0xf145,	// (0x0005dfb6) cell_graphic2_control_pane_g1

0x79d1,	// (0x00056842) bg_touch_area_indi_pane_g1

0x9c0d,	// (0x00058a7e) aid_cmod_rocker_key_size

0x9c17,	// (0x00058a88) aid_cmode_itu_key_size

0x9c21,	// (0x00058a92) main_cmode_video_pane

0x9c2b,	// (0x00058a9c) main_comp_mode_itu_pane

0x9c37,	// (0x00058aa8) main_comp_mode_rocker_pane

0x9c43,	// (0x00058ab4) cell_cmode_rocker_pane_ParamLimits

0x9c43,	// (0x00058ab4) cell_cmode_rocker_pane

0x9c55,	// (0x00058ac6) cell_cmode_itu_pane_ParamLimits

0x9c55,	// (0x00058ac6) cell_cmode_itu_pane

0x3f55,	// (0x00052dc6) bg_button_pane_cp06_ParamLimits

0x3f55,	// (0x00052dc6) bg_button_pane_cp06

0x7c4f,	// (0x00056ac0) cell_cmode_rocker_pane_g1_ParamLimits

0x7c4f,	// (0x00056ac0) cell_cmode_rocker_pane_g1

0x9180,	// (0x00057ff1) cell_cmode_rocker_pane_g2_ParamLimits

0x9180,	// (0x00057ff1) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0005ec29) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0005ec29) cell_cmode_rocker_pane_g

0x2c9a,	// (0x00051b0b) bg_button_pane_cp07

0x9c6a,	// (0x00058adb) cell_cmode_itu_pane_g1

0x9c73,	// (0x00058ae4) cell_cmode_itu_pane_t1

0x9c81,	// (0x00058af2) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0005ec2e) cell_cmode_itu_pane_t

0x93a3,	// (0x00058214) aid_touch_ctrl_left

0x93ab,	// (0x0005821c) aid_touch_ctrl_right

0x2c9a,	// (0x00051b0b) compa_mode_pane

0xf169,	// (0x0005dfda) aid_cmod_rocker_key_size_cp

0xf173,	// (0x0005dfe4) aid_cmode_itu_key_size_cp

0x9ca3,	// (0x00058b14) compa_mode_pane_g1

0x9cab,	// (0x00058b1c) compa_mode_pane_g2

0x9cb3,	// (0x00058b24) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0005ec33) compa_mode_pane_g

0xf17d,	// (0x0005dfee) main_comp_mode_itu_pane_cp

0xf185,	// (0x0005dff6) main_comp_mode_rocker_pane_cp

0xf18d,	// (0x0005dffe) cell_cmode_itu_pane_cp_ParamLimits

0xf18d,	// (0x0005dffe) cell_cmode_itu_pane_cp

0xf1a2,	// (0x0005e013) cell_cmode_rocker_pane_cp_ParamLimits

0xf1a2,	// (0x0005e013) cell_cmode_rocker_pane_cp

0x3f55,	// (0x00052dc6) bg_button_pane_cp06_cp_ParamLimits

0x3f55,	// (0x00052dc6) bg_button_pane_cp06_cp

0x7c4f,	// (0x00056ac0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7c4f,	// (0x00056ac0) cell_cmode_rocker_pane_g1_cp

0x79d1,	// (0x00056842) cell_cmode_rocker_pane_g2_cp

0x2c9a,	// (0x00051b0b) bg_button_pane_cp07_cp

0xf1b4,	// (0x0005e025) cell_cmode_itu_pane_g1_cp

0xf1bd,	// (0x0005e02e) cell_cmode_itu_pane_t1_cp

0xf1bd,	// (0x0005e02e) cell_cmode_itu_pane_t2_cp

0xde4b,	// (0x0005ccbc) settings_code_pane_cp2

0x36b4,	// (0x00052525) bg_popup_window_pane_cp3_ParamLimits

0x3b3d,	// (0x000529ae) heading_pane_cp3_ParamLimits

0x3b49,	// (0x000529ba) listscroll_popup_graphic_pane_ParamLimits

0x1cc6,	// (0x00050b37) fep_hwr_aid_pane_ParamLimits

0x213d,	// (0x00050fae) aid_touch_sctrl_top_ParamLimits

0x2158,	// (0x00050fc9) sctrl_sk_top_pane_g1_ParamLimits

0x1f1d,	// (0x00050d8e) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0005eb69) sctrl_sk_top_pane_g_ParamLimits

0x2165,	// (0x00050fd6) sctrl_sk_top_pane_t1_ParamLimits

0x213d,	// (0x00050fae) aid_touch_sctrl_bottom_ParamLimits

0x2165,	// (0x00050fd6) sctrl_sk_bottom_pane_t1_ParamLimits

0x92ec,	// (0x0005815d) aid_area_touch_clock

0xcbb4,	// (0x0005ba25) aid_vkb2_area_top_pane_cell_ParamLimits

0xcbb4,	// (0x0005ba25) aid_vkb2_area_top_pane_cell

0xcc5f,	// (0x0005bad0) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc5f,	// (0x0005bad0) aid_vkb2_area_bottom_pane_cell

0x987c,	// (0x000586ed) popup_char_count_window

0x9d00,	// (0x00058b71) popup_char_count_window_g1

0x9d09,	// (0x00058b7a) popup_char_count_window_g2

0x9d12,	// (0x00058b83) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0005ec3a) popup_char_count_window_g

0x9d1b,	// (0x00058b8c) popup_char_count_window_t1

0x2214,	// (0x00051085) popup_fep_char_preview_window_ParamLimits

0x2214,	// (0x00051085) popup_fep_char_preview_window

0xcbd4,	// (0x0005ba45) vkb2_top_candi_pane_ParamLimits

0xcbd4,	// (0x0005ba45) vkb2_top_candi_pane

0xf1cb,	// (0x0005e03c) cell_vkb2_top_candi_pane_ParamLimits

0xf1cb,	// (0x0005e03c) cell_vkb2_top_candi_pane

0x277c,	// (0x000515ed) bg_popup_fep_char_preview_window_ParamLimits

0x277c,	// (0x000515ed) bg_popup_fep_char_preview_window

0x278a,	// (0x000515fb) popup_fep_char_preview_window_t1_ParamLimits

0x278a,	// (0x000515fb) popup_fep_char_preview_window_t1

0x9d76,	// (0x00058be7) bg_popup_fep_char_preview_window_g1

0x9d7e,	// (0x00058bef) bg_popup_fep_char_preview_window_g2

0x9d86,	// (0x00058bf7) bg_popup_fep_char_preview_window_g3

0x9d8e,	// (0x00058bff) bg_popup_fep_char_preview_window_g4

0x9d96,	// (0x00058c07) bg_popup_fep_char_preview_window_g5

0x27c4,	// (0x00051635) bg_popup_fep_char_preview_window_g6

0x9d9e,	// (0x00058c0f) bg_popup_fep_char_preview_window_g7

0x9da6,	// (0x00058c17) bg_popup_fep_char_preview_window_g8

0x9dae,	// (0x00058c1f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0005ec41) bg_popup_fep_char_preview_window_g

0x1f1d,	// (0x00050d8e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1f1d,	// (0x00050d8e) cell_vkb2_top_candi_pane_g1

0x1f2b,	// (0x00050d9c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1f2b,	// (0x00050d9c) cell_vkb2_top_candi_pane_g2

0x9852,	// (0x000586c3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9852,	// (0x000586c3) cell_vkb2_top_candi_pane_g3

0x27cc,	// (0x0005163d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x27cc,	// (0x0005163d) cell_vkb2_top_candi_pane_g4

0x811a,	// (0x00056f8b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x811a,	// (0x00056f8b) cell_vkb2_top_candi_pane_g5

0x27ed,	// (0x0005165e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x27ed,	// (0x0005165e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0005ec54) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0005ec54) cell_vkb2_top_candi_pane_g

0x27fb,	// (0x0005166c) cell_vkb2_top_candi_pane_t1

0x1af6,	// (0x00050967) aid_size_touch_slider_mark_ParamLimits

0x1af6,	// (0x00050967) aid_size_touch_slider_mark

0xeee8,	// (0x0005dd59) grid_graphic2_catg_pane_ParamLimits

0xeee8,	// (0x0005dd59) grid_graphic2_catg_pane

0xefa4,	// (0x0005de15) popup_grid_graphic2_window_t1_ParamLimits

0xefa4,	// (0x0005de15) popup_grid_graphic2_window_t1

0xefba,	// (0x0005de2b) popup_grid_graphic2_window_t2_ParamLimits

0xefba,	// (0x0005de2b) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0005ec0f) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0005ec0f) popup_grid_graphic2_window_t

0x393d,	// (0x000527ae) bg_button_pane_cp05_ParamLimits

0xf145,	// (0x0005dfb6) cell_graphic2_control_pane_g1_ParamLimits

0xf231,	// (0x0005e0a2) cell_graphic2_catg_pane_ParamLimits

0xf231,	// (0x0005e0a2) cell_graphic2_catg_pane

0x2c9a,	// (0x00051b0b) bg_button_pane_cp12

0xf243,	// (0x0005e0b4) cell_graphic2_catg_pane_g1

0x92b8,	// (0x00058129) cell_tb_ext_pane_t1_ParamLimits

0x25b6,	// (0x00051427) vkb2_top_cell_right_narrow_pane_ParamLimits

0x25b6,	// (0x00051427) vkb2_top_cell_right_narrow_pane

0x25ce,	// (0x0005143f) vkb2_top_cell_right_wide_pane_ParamLimits

0x25ce,	// (0x0005143f) vkb2_top_cell_right_wide_pane

0x1cb8,	// (0x00050b29) bg_vkb2_func_pane_ParamLimits

0x1cb8,	// (0x00050b29) bg_vkb2_func_pane

0x263f,	// (0x000514b0) vkb2_top_cell_left_pane_g1_ParamLimits

0x1cb8,	// (0x00050b29) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1cb8,	// (0x00050b29) bg_vkb2_fuc_pane_cp03

0x269d,	// (0x0005150e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x543a,	// (0x000542ab) bg_vkb2_func_pane_g1

0x5442,	// (0x000542b3) bg_vkb2_func_pane_g2

0x5452,	// (0x000542c3) bg_vkb2_func_pane_g3

0x544a,	// (0x000542bb) bg_vkb2_func_pane_g4

0x545a,	// (0x000542cb) bg_vkb2_func_pane_g5

0x5462,	// (0x000542d3) bg_vkb2_func_pane_g6

0x546a,	// (0x000542db) bg_vkb2_func_pane_g7

0x5472,	// (0x000542e3) bg_vkb2_func_pane_g8

0x5432,	// (0x000542a3) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0005ec61) bg_vkb2_func_pane_g

0x1cb8,	// (0x00050b29) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1cb8,	// (0x00050b29) bg_vkb2_fuc_pane_cp01

0x263f,	// (0x000514b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x263f,	// (0x000514b0) vkb2_top_cell_right_wide_pane_g1

0x1cb8,	// (0x00050b29) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1cb8,	// (0x00050b29) bg_vkb2_fuc_pane_cp02

0x269d,	// (0x0005150e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x269d,	// (0x0005150e) vkb2_top_cell_right_narrow_pane_g1

0xe754,	// (0x0005d5c5) aid_touch_area_decrease_ParamLimits

0xe754,	// (0x0005d5c5) aid_touch_area_decrease

0xe78e,	// (0x0005d5ff) aid_touch_area_increase_ParamLimits

0xe78e,	// (0x0005d5ff) aid_touch_area_increase

0xe7b6,	// (0x0005d627) aid_touch_area_mute_ParamLimits

0xe7b6,	// (0x0005d627) aid_touch_area_mute

0xe7de,	// (0x0005d64f) aid_touch_area_slider_ParamLimits

0xe7de,	// (0x0005d64f) aid_touch_area_slider

0xe81e,	// (0x0005d68f) popup_slider_window_g4_ParamLimits

0xe81e,	// (0x0005d68f) popup_slider_window_g4

0xe846,	// (0x0005d6b7) popup_slider_window_g5_ParamLimits

0xe846,	// (0x0005d6b7) popup_slider_window_g5

0xe87a,	// (0x0005d6eb) popup_slider_window_g6_ParamLimits

0xe87a,	// (0x0005d6eb) popup_slider_window_g6

0x9096,	// (0x00057f07) popup_slider_window_t2_ParamLimits

0x9096,	// (0x00057f07) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0005eb5d) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0005eb5d) popup_slider_window_t

0xe896,	// (0x0005d707) slider_pane_ParamLimits

0xe896,	// (0x0005d707) slider_pane

0x9dd1,	// (0x00058c42) slider_pane_g1_ParamLimits

0x9dd1,	// (0x00058c42) slider_pane_g1

0x9de5,	// (0x00058c56) slider_pane_g2_ParamLimits

0x9de5,	// (0x00058c56) slider_pane_g2

0x9dfb,	// (0x00058c6c) slider_pane_g3_ParamLimits

0x9dfb,	// (0x00058c6c) slider_pane_g3

0x0003,

0xfe03,	// (0x0005ec74) slider_pane_g_ParamLimits

0xfe03,	// (0x0005ec74) slider_pane_g

0xc6ec,	// (0x0005b55d) popup_tb_float_extension_window_ParamLimits

0xc6ec,	// (0x0005b55d) popup_tb_float_extension_window

0x9e27,	// (0x00058c98) aid_size_cell_tb_float_ext

0x2c9a,	// (0x00051b0b) bg_popup_sub_window_cp28

0x9e33,	// (0x00058ca4) grid_tb_float_ext_pane

0x9e3d,	// (0x00058cae) cell_tb_float_ext_pane_ParamLimits

0x9e3d,	// (0x00058cae) cell_tb_float_ext_pane

0x9e57,	// (0x00058cc8) cell_tb_float_ext_pane_g1

0x9e60,	// (0x00058cd1) grid_highlight_pane_cp12

0xc89a,	// (0x0005b70b) cell_last_hwr_side_pane_ParamLimits

0xc89a,	// (0x0005b70b) cell_last_hwr_side_pane

0x79d1,	// (0x00056842) cell_last_hwr_side_pane_g1

0x9e69,	// (0x00058cda) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0005ec7d) cell_last_hwr_side_pane_g

0xcd3b,	// (0x0005bbac) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd3b,	// (0x0005bbac) vkb2_area_bottom_space_btn_pane

0x1f1d,	// (0x00050d8e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9931,	// (0x000587a2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x27fb,	// (0x0005166c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x281a,	// (0x0005168b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x281a,	// (0x0005168b) vkb2_area_bottom_space_btn_pane_g1

0x2854,	// (0x000516c5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2854,	// (0x000516c5) vkb2_area_bottom_space_btn_pane_g2

0x288a,	// (0x000516fb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x288a,	// (0x000516fb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0005ec82) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0005ec82) vkb2_area_bottom_space_btn_pane_g

0x1d7b,	// (0x00050bec) cel_fep_hwr_func_pane_ParamLimits

0x1d7b,	// (0x00050bec) cel_fep_hwr_func_pane

0xc86f,	// (0x0005b6e0) cell_hwr_side_button_pane_ParamLimits

0xc86f,	// (0x0005b6e0) cell_hwr_side_button_pane

0x92ec,	// (0x0005815d) aid_area_touch_clock_ParamLimits

0x393d,	// (0x000527ae) bg_uniindi_top_pane_ParamLimits

0x92fe,	// (0x0005816f) uniindi_top_pane_g1_ParamLimits

0x9314,	// (0x00058185) uniindi_top_pane_g2_ParamLimits

0x9320,	// (0x00058191) uniindi_top_pane_g3_ParamLimits

0x9331,	// (0x000581a2) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0005eb95) uniindi_top_pane_g_ParamLimits

0x933e,	// (0x000581af) uniindi_top_pane_t1_ParamLimits

0x393d,	// (0x000527ae) bg_vkb2_func_pane_cp01_ParamLimits

0x393d,	// (0x000527ae) bg_vkb2_func_pane_cp01

0x9e72,	// (0x00058ce3) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e72,	// (0x00058ce3) cel_fep_hwr_func_pane_g1

0x393d,	// (0x000527ae) bg_vkb2_func_pane_cp02_ParamLimits

0x393d,	// (0x000527ae) bg_vkb2_func_pane_cp02

0x9e72,	// (0x00058ce3) cell_hwr_side_button_pane_g1_ParamLimits

0x9e72,	// (0x00058ce3) cell_hwr_side_button_pane_g1

0x52b3,	// (0x00054124) status_pane_g4_ParamLimits

0x52b3,	// (0x00054124) status_pane_g4

0x52cd,	// (0x0005413e) status_pane_t1

0x7716,	// (0x00056587) form2_midp_gauge_slider_cont_pane

0x771e,	// (0x0005658f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe11a,	// (0x0005cf8b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe12c,	// (0x0005cf9d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0005e955) form2_midp_gauge_slider_pane_t_ParamLimits

0x7754,	// (0x000565c5) form2_midp_slider_pane_ParamLimits

0x21d4,	// (0x00051045) aid_size_cell_func_vkb2_ParamLimits

0x21d4,	// (0x00051045) aid_size_cell_func_vkb2

0x9e13,	// (0x00058c84) slider_pane_g4_ParamLimits

0x9e13,	// (0x00058c84) slider_pane_g4

0xcd9c,	// (0x0005bc0d) form2_midp_gauge_slider_pane_t2_cp01

0xcdaa,	// (0x0005bc1b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcdaa,	// (0x0005bc1b) form2_midp_gauge_slider_pane_t3_cp01

0x28ff,	// (0x00051770) form2_midp_slider_pane_cp01

0x2c9a,	// (0x00051b0b) navi_smil_pane

0x9eab,	// (0x00058d1c) navi_smil_pane_g1

0x9eb3,	// (0x00058d24) navi_smil_pane_t1

0x9e80,	// (0x00058cf1) form2_midp_slider_pane_g1

0x9e89,	// (0x00058cfa) form2_midp_slider_pane_g2

0x9e91,	// (0x00058d02) form2_midp_slider_pane_g3

0x9e80,	// (0x00058cf1) form2_midp_slider_pane_g4

0xf24c,	// (0x0005e0bd) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0005ec8b) form2_midp_slider_pane_g

0x28c4,	// (0x00051735) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x28c4,	// (0x00051735) vkb2_area_bottom_space_btn_pane_g4

0xd796,	// (0x0005c607) lc0_navi_pane_ParamLimits

0xd796,	// (0x0005c607) lc0_navi_pane

0xd800,	// (0x0005c671) lc0_stat_indi_pane_ParamLimits

0xd800,	// (0x0005c671) lc0_stat_indi_pane

0xd815,	// (0x0005c686) ls0_title_pane_ParamLimits

0xd815,	// (0x0005c686) ls0_title_pane

0x3f55,	// (0x00052dc6) bg_popup_sub_pane_cp14_ParamLimits

0x92d3,	// (0x00058144) list_uniindi_pane_ParamLimits

0x92df,	// (0x00058150) uniindi_top_pane_ParamLimits

0x937b,	// (0x000581ec) list_single_uniindi_pane_g1_ParamLimits

0x938e,	// (0x000581ff) list_single_uniindi_pane_t1_ParamLimits

0xcdc7,	// (0x0005bc38) lc0_stat_clock_pane_ParamLimits

0xcdc7,	// (0x0005bc38) lc0_stat_clock_pane

0xf257,	// (0x0005e0c8) lc0_stat_indi_pane_g1_ParamLimits

0xf257,	// (0x0005e0c8) lc0_stat_indi_pane_g1

0xf264,	// (0x0005e0d5) lc0_stat_indi_pane_g2_ParamLimits

0xf264,	// (0x0005e0d5) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0005ec96) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0005ec96) lc0_stat_indi_pane_g

0xcdd4,	// (0x0005bc45) lc0_uni_indicator_pane_ParamLimits

0xcdd4,	// (0x0005bc45) lc0_uni_indicator_pane

0xf271,	// (0x0005e0e2) ls0_title_pane_g1_ParamLimits

0xf271,	// (0x0005e0e2) ls0_title_pane_g1

0xf285,	// (0x0005e0f6) ls0_title_pane_t1_ParamLimits

0xf285,	// (0x0005e0f6) ls0_title_pane_t1

0xcde1,	// (0x0005bc52) lc0_uni_indicator_pane_g1_ParamLimits

0xcde1,	// (0x0005bc52) lc0_uni_indicator_pane_g1

0x9f25,	// (0x00058d96) lc0_stat_clock_pane_t1

0x00df,	// (0x0004ef50) main_ai5_pane

0x9f33,	// (0x00058da4) ai5_sk_pane_ParamLimits

0x9f33,	// (0x00058da4) ai5_sk_pane

0xf2b3,	// (0x0005e124) cell_ai5_widget_pane_ParamLimits

0xf2b3,	// (0x0005e124) cell_ai5_widget_pane

0x9ffb,	// (0x00058e6c) aid_size_cell_widget_grid

0xa011,	// (0x00058e82) bg_ai5_widget_pane_ParamLimits

0xa011,	// (0x00058e82) bg_ai5_widget_pane

0xa089,	// (0x00058efa) cell_ai5_widget_pane_g2

0xa09d,	// (0x00058f0e) cell_ai5_widget_pane_g3

0xa0b7,	// (0x00058f28) cell_ai5_widget_pane_g4

0xa0c7,	// (0x00058f38) cell_ai5_widget_pane_g5

0xa0d7,	// (0x00058f48) cell_ai5_widget_pane_g6

0xa0e3,	// (0x00058f54) cell_ai5_widget_pane_g7

0xa12b,	// (0x00058f9c) cell_ai5_widget_pane_t1_ParamLimits

0xa12b,	// (0x00058f9c) cell_ai5_widget_pane_t1

0xa148,	// (0x00058fb9) cell_ai5_widget_pane_t2_ParamLimits

0xa148,	// (0x00058fb9) cell_ai5_widget_pane_t2

0xa160,	// (0x00058fd1) cell_ai5_widget_pane_t3_ParamLimits

0xa160,	// (0x00058fd1) cell_ai5_widget_pane_t3

0xa178,	// (0x00058fe9) cell_ai5_widget_pane_t4_ParamLimits

0xa178,	// (0x00058fe9) cell_ai5_widget_pane_t4

0xa19e,	// (0x0005900f) cell_ai5_widget_pane_t5_ParamLimits

0xa19e,	// (0x0005900f) cell_ai5_widget_pane_t5

0xa1be,	// (0x0005902f) cell_ai5_widget_pane_t6_ParamLimits

0xa1be,	// (0x0005902f) cell_ai5_widget_pane_t6

0xa1d0,	// (0x00059041) cell_ai5_widget_pane_t7_ParamLimits

0xa1d0,	// (0x00059041) cell_ai5_widget_pane_t7

0xa1e9,	// (0x0005905a) cell_ai5_widget_pane_t8_ParamLimits

0xa1e9,	// (0x0005905a) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0005ecb0) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0005ecb0) cell_ai5_widget_pane_t

0xa248,	// (0x000590b9) grid_ai5_widget_pane

0x3f55,	// (0x00052dc6) highlight_cell_ai5_widget_pane_ParamLimits

0x3f55,	// (0x00052dc6) highlight_cell_ai5_widget_pane

0xf319,	// (0x0005e18a) ai5_sk_left_pane

0xf323,	// (0x0005e194) ai5_sk_middle_pane

0xf32d,	// (0x0005e19e) ai5_sk_right_pane

0xa27d,	// (0x000590ee) bg_ai5_widget_pane_g1_ParamLimits

0xa27d,	// (0x000590ee) bg_ai5_widget_pane_g1

0xa289,	// (0x000590fa) bg_ai5_widget_pane_g2_ParamLimits

0xa289,	// (0x000590fa) bg_ai5_widget_pane_g2

0xa295,	// (0x00059106) bg_ai5_widget_pane_g3_ParamLimits

0xa295,	// (0x00059106) bg_ai5_widget_pane_g3

0xa2a1,	// (0x00059112) bg_ai5_widget_pane_g4_ParamLimits

0xa2a1,	// (0x00059112) bg_ai5_widget_pane_g4

0xa2ad,	// (0x0005911e) bg_ai5_widget_pane_g5_ParamLimits

0xa2ad,	// (0x0005911e) bg_ai5_widget_pane_g5

0xa2b9,	// (0x0005912a) bg_ai5_widget_pane_g6_ParamLimits

0xa2b9,	// (0x0005912a) bg_ai5_widget_pane_g6

0xa2c5,	// (0x00059136) bg_ai5_widget_pane_g7_ParamLimits

0xa2c5,	// (0x00059136) bg_ai5_widget_pane_g7

0xa2d1,	// (0x00059142) bg_ai5_widget_pane_g8_ParamLimits

0xa2d1,	// (0x00059142) bg_ai5_widget_pane_g8

0xa2dd,	// (0x0005914e) bg_ai5_widget_pane_g9_ParamLimits

0xa2dd,	// (0x0005914e) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0005ecc5) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0005ecc5) bg_ai5_widget_pane_g

0xa30f,	// (0x00059180) cell_shortcut_ai5_widget_pane_ParamLimits

0xa30f,	// (0x00059180) cell_shortcut_ai5_widget_pane

0x4bea,	// (0x00053a5b) bg_cell_shortcut_ai5_widget_pane

0xa320,	// (0x00059191) cell_grid_ai5_widget_pane_g1

0x4bea,	// (0x00053a5b) highlight_cell_shortcut_ai5_widget_pane

0x543a,	// (0x000542ab) ai5_sk_left_pane_g1

0xa329,	// (0x0005919a) ai5_sk_left_pane_g2

0xa331,	// (0x000591a2) ai5_sk_left_pane_g3

0xa339,	// (0x000591aa) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0005ecd8) ai5_sk_left_pane_g

0xa341,	// (0x000591b2) ai5_sk_left_pane_t1

0x5442,	// (0x000542b3) ai5_sk_right_pane_g1

0xa34f,	// (0x000591c0) ai5_sk_right_pane_g2

0xa357,	// (0x000591c8) ai5_sk_right_pane_g3

0xa35f,	// (0x000591d0) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0005ece1) ai5_sk_right_pane_g

0xa367,	// (0x000591d8) ai5_sk_right_pane_t1

0x5442,	// (0x000542b3) ai5_sk_middle_pane_g1

0x543a,	// (0x000542ab) ai5_sk_middle_pane_g2

0x545a,	// (0x000542cb) ai5_sk_middle_pane_g3

0xa357,	// (0x000591c8) ai5_sk_middle_pane_g4

0xa331,	// (0x000591a2) ai5_sk_middle_pane_g5

0xa375,	// (0x000591e6) ai5_sk_middle_pane_g6

0xf337,	// (0x0005e1a8) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0005ecea) ai5_sk_middle_pane_g

0xd682,	// (0x0005c4f3) aid_touch_area_size_lc0_ParamLimits

0xd682,	// (0x0005c4f3) aid_touch_area_size_lc0

0x1f4c,	// (0x00050dbd) cell_hwr_candidate_pane_t1_ParamLimits

0x4f8a,	// (0x00053dfb) aid_touch_navi_pane

0xd90e,	// (0x0005c77f) status_dt_navi_pane_ParamLimits

0xd90e,	// (0x0005c77f) status_dt_navi_pane

0xd9c0,	// (0x0005c831) status_dt_sta_pane_ParamLimits

0xd9c0,	// (0x0005c831) status_dt_sta_pane

0xf33f,	// (0x0005e1b0) dt_sta_controll_pane

0xf34c,	// (0x0005e1bd) dt_sta_indi_pane

0xf359,	// (0x0005e1ca) dt_sta_title_pane

0x393d,	// (0x000527ae) bg_dt_sta_indi_pane_ParamLimits

0x393d,	// (0x000527ae) bg_dt_sta_indi_pane

0xf36b,	// (0x0005e1dc) dt_sta_battery_pane

0xf373,	// (0x0005e1e4) dt_sta_indi_pane_g1

0xa3c7,	// (0x00059238) dt_sta_indi_pane_g2

0xa3d0,	// (0x00059241) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0005ecf9) dt_sta_indi_pane_g

0xa3d9,	// (0x0005924a) dt_sta_signal_pane

0x3f55,	// (0x00052dc6) bg_dt_sta_title_pane_ParamLimits

0x3f55,	// (0x00052dc6) bg_dt_sta_title_pane

0xa3e2,	// (0x00059253) dt_sta_title_pane_g1

0xa3ea,	// (0x0005925b) dt_sta_title_pane_t1_ParamLimits

0xa3ea,	// (0x0005925b) dt_sta_title_pane_t1

0x2c9a,	// (0x00051b0b) bg_dt_sta_control_pane

0xf37c,	// (0x0005e1ed) dt_sta_controll_pane_g1

0xa408,	// (0x00059279) bg_dt_sta_title_pane_g1

0xa411,	// (0x00059282) bg_dt_sta_title_pane_g2

0xa41a,	// (0x0005928b) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0005ed00) bg_dt_sta_title_pane_g

0x79d1,	// (0x00056842) bg_dt_sta_indi_pane_g1

0xa423,	// (0x00059294) dt_sta_signal_pane_g1

0xa42b,	// (0x0005929c) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0005ed07) dt_sta_signal_pane_g

0xa433,	// (0x000592a4) dt_sta_battery_pane_g1

0xa43c,	// (0x000592ad) dt_sta_battery_pane_t1

0x79d1,	// (0x00056842) bg_dt_sta_control_pane_g1

0x46dd,	// (0x0005354e) fep_china_uni_eep_pane

0x46e5,	// (0x00053556) fep_china_uni_entry_pane_ParamLimits

0x46f5,	// (0x00053566) popup_fep_china_uni_window_g1_ParamLimits

0x4705,	// (0x00053576) popup_fep_china_uni_window_g2_ParamLimits

0x4705,	// (0x00053576) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005e593) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005e593) popup_fep_china_uni_window_g

0xa44b,	// (0x000592bc) fep_china_uni_eep_pane_g1

0xa453,	// (0x000592c4) fep_china_uni_eep_pane_t1

0x9ea2,	// (0x00058d13) aid_touch_area_size_smil_player

0x50da,	// (0x00053f4b) lc0_clock_pane

0x52c1,	// (0x00054132) status_pane_g5_ParamLimits

0x52c1,	// (0x00054132) status_pane_g5

0xc26e,	// (0x0005b0df) popup_keymap_window

0x527f,	// (0x000540f0) status_icon_pane

0xa09d,	// (0x00058f0e) cell_ai5_widget_pane_g3_ParamLimits

0xa0b7,	// (0x00058f28) cell_ai5_widget_pane_g4_ParamLimits

0xa0c7,	// (0x00058f38) cell_ai5_widget_pane_g5_ParamLimits

0xa0ef,	// (0x00058f60) cell_ai5_widget_pane_g8_ParamLimits

0xa0ef,	// (0x00058f60) cell_ai5_widget_pane_g8

0xa103,	// (0x00058f74) cell_ai5_widget_pane_g9_ParamLimits

0xa103,	// (0x00058f74) cell_ai5_widget_pane_g9

0xa117,	// (0x00058f88) cell_ai5_widget_pane_g10_ParamLimits

0xa117,	// (0x00058f88) cell_ai5_widget_pane_g10

0xa462,	// (0x000592d3) status_icon_pane_g1

0x2c9a,	// (0x00051b0b) bg_popup_sub_pane_cp13

0xa46a,	// (0x000592db) popup_keymap_window_t1

0xd610,	// (0x0005c481) control_pane_g6_ParamLimits

0xd610,	// (0x0005c481) control_pane_g6

0xd61d,	// (0x0005c48e) control_pane_g7_ParamLimits

0xd61d,	// (0x0005c48e) control_pane_g7

0xd62a,	// (0x0005c49b) control_pane_g8_ParamLimits

0xd62a,	// (0x0005c49b) control_pane_g8

0xf33f,	// (0x0005e1b0) dt_sta_controll_pane_ParamLimits

0xf34c,	// (0x0005e1bd) dt_sta_indi_pane_ParamLimits

0xf359,	// (0x0005e1ca) dt_sta_title_pane_ParamLimits

0x3e81,	// (0x00052cf2) aid_size_touch_scroll_bar_cale

0x01b8,	// (0x0004f029) popup_discreet_window_ParamLimits

0x01b8,	// (0x0004f029) popup_discreet_window

0xb7ce,	// (0x0005a63f) popup_sk_window

0x5ab9,	// (0x0005492a) bg_popup_sub_pane_cp28_ParamLimits

0x5ab9,	// (0x0005492a) bg_popup_sub_pane_cp28

0xa478,	// (0x000592e9) popup_discreet_window_g1_ParamLimits

0xa478,	// (0x000592e9) popup_discreet_window_g1

0xa498,	// (0x00059309) popup_discreet_window_t1_ParamLimits

0xa498,	// (0x00059309) popup_discreet_window_t1

0xa4b6,	// (0x00059327) popup_discreet_window_t2_ParamLimits

0xa4b6,	// (0x00059327) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0005ed0c) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0005ed0c) popup_discreet_window_t

0x2936,	// (0x000517a7) popup_sk_window_g1

0x2940,	// (0x000517b1) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0005ed13) popup_sk_window_g

0x2948,	// (0x000517b9) popup_sk_window_t1

0x2956,	// (0x000517c7) popup_sk_window_t1_copy1

0xa089,	// (0x00058efa) cell_ai5_widget_pane_g2_ParamLimits

0xa1fb,	// (0x0005906c) cell_ai5_widget_pane_t9_ParamLimits

0xa1fb,	// (0x0005906c) cell_ai5_widget_pane_t9

0x2c9a,	// (0x00051b0b) main_fep_fshwr2_pane

0xce08,	// (0x0005bc79) aid_fshwr2_btn_pane

0xce19,	// (0x0005bc8a) aid_fshwr2_syb_pane

0xce2a,	// (0x0005bc9b) aid_fshwr2_txt_pane

0xce36,	// (0x0005bca7) fshwr2_func_candi_pane

0xce55,	// (0x0005bcc6) fshwr2_hwr_syb_pane

0xce70,	// (0x0005bce1) fshwr2_icf_pane

0x00df,	// (0x0004ef50) fshwr2_icf_bg_pane

0x29d6,	// (0x00051847) fshwr2_icf_pane_t1_ParamLimits

0x29d6,	// (0x00051847) fshwr2_icf_pane_t1

0x45cb,	// (0x0005343c) fshwr2_func_candi_pane_g1

0xf385,	// (0x0005e1f6) fshwr2_func_candi_row_pane_ParamLimits

0xf385,	// (0x0005e1f6) fshwr2_func_candi_row_pane

0xce9c,	// (0x0005bd0d) cell_fshwr2_syb_pane_ParamLimits

0xce9c,	// (0x0005bd0d) cell_fshwr2_syb_pane

0x1f1d,	// (0x00050d8e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1f1d,	// (0x00050d8e) fshwr2_hwr_syb_pane_g1

0x00df,	// (0x0004ef50) bg_popup_call_pane_cp01

0xceb2,	// (0x0005bd23) fshwr2_func_candi_cell_pane_ParamLimits

0xceb2,	// (0x0005bd23) fshwr2_func_candi_cell_pane

0xf3a8,	// (0x0005e219) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf3a8,	// (0x0005e219) fshwr2_func_candi_cell_bg_pane

0xcefd,	// (0x0005bd6e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcefd,	// (0x0005bd6e) fshwr2_func_candi_cell_pane_g1

0xcf34,	// (0x0005bda5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf34,	// (0x0005bda5) fshwr2_func_candi_cell_pane_t1

0x00df,	// (0x0004ef50) bg_button_pane_cp08

0xa524,	// (0x00059395) cell_fshwr2_syb_bg_pane

0xcf4f,	// (0x0005bdc0) cell_fshwr2_syb_bg_pane_g1

0xcf57,	// (0x0005bdc8) cell_fshwr2_syb_bg_pane_t1

0x3f55,	// (0x00052dc6) main_tmo_pane

0xdc7e,	// (0x0005caef) uni_indicator_pane_g1_ParamLimits

0xdc93,	// (0x0005cb04) uni_indicator_pane_g2_ParamLimits

0xdca9,	// (0x0005cb1a) uni_indicator_pane_g3_ParamLimits

0x65fc,	// (0x0005546d) uni_indicator_pane_g4_ParamLimits

0x65fc,	// (0x0005546d) uni_indicator_pane_g4

0x6610,	// (0x00055481) uni_indicator_pane_g5_ParamLimits

0x6610,	// (0x00055481) uni_indicator_pane_g5

0x6610,	// (0x00055481) uni_indicator_pane_g6_ParamLimits

0x6610,	// (0x00055481) uni_indicator_pane_g6

0xf921,	// (0x0005e792) uni_indicator_pane_g_ParamLimits

0xe730,	// (0x0005d5a1) popup_tmo_note_window_ParamLimits

0xe730,	// (0x0005d5a1) popup_tmo_note_window

0x21b6,	// (0x00051027) fshwr2_bg_pane

0xcf25,	// (0x0005bd96) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf25,	// (0x0005bd96) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0005ed18) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0005ed18) fshwr2_func_candi_cell_pane_g

0x1f05,	// (0x00050d76) bg_popup_window_pane_cp01

0x2aa1,	// (0x00051912) bg_popup_window_pane_g1_cp01

0xa52c,	// (0x0005939d) bg_popup_window_pane_cp22_ParamLimits

0xa52c,	// (0x0005939d) bg_popup_window_pane_cp22

0xa53a,	// (0x000593ab) listscroll_tmo_link_pane_ParamLimits

0xa53a,	// (0x000593ab) listscroll_tmo_link_pane

0xa57a,	// (0x000593eb) popup_tmo_note_window_g1_ParamLimits

0xa57a,	// (0x000593eb) popup_tmo_note_window_g1

0xa587,	// (0x000593f8) tmo_note_info_pane_ParamLimits

0xa587,	// (0x000593f8) tmo_note_info_pane

0xf3b4,	// (0x0005e225) list_tmo_note_info_pane_g1_ParamLimits

0xf3b4,	// (0x0005e225) list_tmo_note_info_pane_g1

0xa5b8,	// (0x00059429) list_tmo_note_info_pane_g2_ParamLimits

0xa5b8,	// (0x00059429) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0005ed1d) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0005ed1d) list_tmo_note_info_pane_g

0xa5d4,	// (0x00059445) list_tmo_note_info_text_pane_ParamLimits

0xa5d4,	// (0x00059445) list_tmo_note_info_text_pane

0xa655,	// (0x000594c6) list_tmo_link_pane

0xa662,	// (0x000594d3) scroll_pane_cp20

0xa66f,	// (0x000594e0) list_single_tmo_link_pane_ParamLimits

0xa66f,	// (0x000594e0) list_single_tmo_link_pane

0xa67f,	// (0x000594f0) list_single_tmo_link_pane_t1

0xa68d,	// (0x000594fe) list_tmo_note_info_text_pane_t1_ParamLimits

0xa68d,	// (0x000594fe) list_tmo_note_info_text_pane_t1

0xd2d8,	// (0x0005c149) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd2d8,	// (0x0005c149) aid_size_touch_scroll_bar_cp01

0xbdcc,	// (0x0005ac3d) aid_size_touch_slider_marker

0xb7be,	// (0x0005a62f) popup_settings_window_ParamLimits

0xb7be,	// (0x0005a62f) popup_settings_window

0x1150,	// (0x0004ffc1) popup_candi_list_indi_window

0x4f8a,	// (0x00053dfb) aid_touch_navi_pane_ParamLimits

0x2111,	// (0x00050f82) rs_clock_indi_pane

0x211a,	// (0x00050f8b) sctrl_sk_bottom_pane_ParamLimits

0x212b,	// (0x00050f9c) sctrl_sk_top_pane_ParamLimits

0x222e,	// (0x0005109f) popup_fep_tooltip_window

0x9ffb,	// (0x00058e6c) aid_size_cell_widget_grid_ParamLimits

0xa074,	// (0x00058ee5) cell_ai5_widget_pane_g1_ParamLimits

0xa074,	// (0x00058ee5) cell_ai5_widget_pane_g1

0xa0d7,	// (0x00058f48) cell_ai5_widget_pane_g6_ParamLimits

0xa0e3,	// (0x00058f54) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0005ec9b) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0005ec9b) cell_ai5_widget_pane_g

0xa22a,	// (0x0005909b) cell_ai5_widget_pane_t10_ParamLimits

0xa22a,	// (0x0005909b) cell_ai5_widget_pane_t10

0xa248,	// (0x000590b9) grid_ai5_widget_pane_ParamLimits

0xa2e9,	// (0x0005915a) cell_contacts_ai5_widget_pane_ParamLimits

0xa2e9,	// (0x0005915a) cell_contacts_ai5_widget_pane

0xa4cb,	// (0x0005933c) popup_discreet_window_t3_ParamLimits

0xa4cb,	// (0x0005933c) popup_discreet_window_t3

0xce88,	// (0x0005bcf9) popup_fshwr2_char_preview_window_ParamLimits

0xce88,	// (0x0005bcf9) popup_fshwr2_char_preview_window

0xf3cb,	// (0x0005e23c) tmo_note_info_pane_t1

0xf3e0,	// (0x0005e251) tmo_note_info_pane_t2

0xf3f7,	// (0x0005e268) tmo_note_info_pane_t3

0xa631,	// (0x000594a2) tmo_note_info_pane_t4

0xa643,	// (0x000594b4) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0005ed22) tmo_note_info_pane_t

0xa655,	// (0x000594c6) list_tmo_link_pane_ParamLimits

0xa662,	// (0x000594d3) scroll_pane_cp20_ParamLimits

0x00df,	// (0x0004ef50) bg_popup_fep_char_preview_window_cp01

0xa6a6,	// (0x00059517) popup_fshwr2_char_preview_window_t1

0xa6b4,	// (0x00059525) popup_candi_list_indi_window_g1

0xa6bd,	// (0x0005952e) bg_cell_contacts_ai5_widget_pane

0xa6c9,	// (0x0005953a) cell_contacts_ai5_widget_pane_g1

0x806f,	// (0x00056ee0) cell_contacts_ai5_widget_pane_g2

0xa6de,	// (0x0005954f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0005ed2d) cell_contacts_ai5_widget_pane_g

0xa6ea,	// (0x0005955b) cell_contacts_ai5_widget_pane_t1

0x3f55,	// (0x00052dc6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa761,	// (0x000595d2) settings_container_pane

0x4bea,	// (0x00053a5b) listscroll_set_pane_copy1

0x70e1,	// (0x00055f52) scroll_pane_cp121_copy1

0x585e,	// (0x000546cf) set_content_pane_copy1

0xa76d,	// (0x000595de) aid_height_set_list_copy1_ParamLimits

0xa76d,	// (0x000595de) aid_height_set_list_copy1

0x6808,	// (0x00055679) aid_size_parent_copy1_ParamLimits

0x6808,	// (0x00055679) aid_size_parent_copy1

0xa779,	// (0x000595ea) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa779,	// (0x000595ea) button_value_adjust_pane_cp6_copy1

0x4f0e,	// (0x00053d7f) list_highlight_pane_cp2_copy1_ParamLimits

0x4f0e,	// (0x00053d7f) list_highlight_pane_cp2_copy1

0xa78d,	// (0x000595fe) list_set_pane_copy1_ParamLimits

0xa78d,	// (0x000595fe) list_set_pane_copy1

0xa6fc,	// (0x0005956d) main_pane_set_t1_copy1_ParamLimits

0xa6fc,	// (0x0005956d) main_pane_set_t1_copy1

0xa736,	// (0x000595a7) main_pane_set_t2_copy1_ParamLimits

0xa736,	// (0x000595a7) main_pane_set_t2_copy1

0xa83a,	// (0x000596ab) main_pane_set_t3_copy1

0xa848,	// (0x000596b9) main_pane_set_t4_copy1

0xa755,	// (0x000595c6) set_content_pane_g1_copy1_ParamLimits

0xa755,	// (0x000595c6) set_content_pane_g1_copy1

0xa856,	// (0x000596c7) setting_code_pane_copy1

0xa85e,	// (0x000596cf) setting_slider_graphic_pane_copy1

0xa85e,	// (0x000596cf) setting_slider_pane_copy1

0xa85e,	// (0x000596cf) setting_text_pane_copy1

0xa85e,	// (0x000596cf) setting_volume_pane_copy1

0xa856,	// (0x000596c7) settings_code_pane_cp2_copy1

0xa866,	// (0x000596d7) settings_code_pane_cp_copy1_ParamLimits

0xa866,	// (0x000596d7) settings_code_pane_cp_copy1

0x2aaa,	// (0x0005191b) volume_set_pane_copy1

0xa87a,	// (0x000596eb) volume_set_pane_g10_copy1

0xa882,	// (0x000596f3) volume_set_pane_g1_copy1

0xa88a,	// (0x000596fb) volume_set_pane_g2_copy1

0xa892,	// (0x00059703) volume_set_pane_g3_copy1

0xa89a,	// (0x0005970b) volume_set_pane_g4_copy1

0xa8a2,	// (0x00059713) volume_set_pane_g5_copy1

0xa8aa,	// (0x0005971b) volume_set_pane_g6_copy1

0xa8b2,	// (0x00059723) volume_set_pane_g7_copy1

0xa8ba,	// (0x0005972b) volume_set_pane_g8_copy1

0xa8c2,	// (0x00059733) volume_set_pane_g9_copy1

0x36b4,	// (0x00052525) bg_set_opt_pane_cp_copy1_ParamLimits

0x36b4,	// (0x00052525) bg_set_opt_pane_cp_copy1

0x2ab2,	// (0x00051923) setting_slider_pane_t1_copy1_ParamLimits

0x2ab2,	// (0x00051923) setting_slider_pane_t1_copy1

0x2ad0,	// (0x00051941) setting_slider_pane_t2_copy1_ParamLimits

0x2ad0,	// (0x00051941) setting_slider_pane_t2_copy1

0x2aea,	// (0x0005195b) setting_slider_pane_t3_copy1_ParamLimits

0x2aea,	// (0x0005195b) setting_slider_pane_t3_copy1

0x2b02,	// (0x00051973) slider_set_pane_copy1_ParamLimits

0x2b02,	// (0x00051973) slider_set_pane_copy1

0x3fa1,	// (0x00052e12) set_opt_bg_pane_g1_copy2

0x3fa9,	// (0x00052e1a) set_opt_bg_pane_g2_copy2

0xa8ca,	// (0x0005973b) set_opt_bg_pane_g3_copy2

0x3fb9,	// (0x00052e2a) set_opt_bg_pane_g4_copy2

0x3fc1,	// (0x00052e32) set_opt_bg_pane_g5_copy2

0x3fc9,	// (0x00052e3a) set_opt_bg_pane_g6_copy2

0xa8d4,	// (0x00059745) set_opt_bg_pane_g7_copy2

0xa8dc,	// (0x0005974d) set_opt_bg_pane_g8_copy2

0xa8e6,	// (0x00059757) set_opt_bg_pane_g9_copy2

0x2b18,	// (0x00051989) aid_size_touch_slider_mark_copy1_ParamLimits

0x2b18,	// (0x00051989) aid_size_touch_slider_mark_copy1

0xa8f0,	// (0x00059761) slider_set_pane_g1_copy1

0x2b2c,	// (0x0005199d) slider_set_pane_g2_copy1

0x1b16,	// (0x00050987) slider_set_pane_g3_copy1_ParamLimits

0x1b16,	// (0x00050987) slider_set_pane_g3_copy1

0x1b2a,	// (0x0005099b) slider_set_pane_g4_copy1_ParamLimits

0x1b2a,	// (0x0005099b) slider_set_pane_g4_copy1

0x1b42,	// (0x000509b3) slider_set_pane_g5_copy1_ParamLimits

0x1b42,	// (0x000509b3) slider_set_pane_g5_copy1

0x1b16,	// (0x00050987) slider_set_pane_g6_copy1_ParamLimits

0x1b16,	// (0x00050987) slider_set_pane_g6_copy1

0x2b34,	// (0x000519a5) slider_set_pane_g7_copy1_ParamLimits

0x2b34,	// (0x000519a5) slider_set_pane_g7_copy1

0x2cae,	// (0x00051b1f) bg_set_opt_pane_cp2_copy1

0xa8f9,	// (0x0005976a) setting_slider_graphic_pane_g1_copy1

0xa902,	// (0x00059773) setting_slider_graphic_pane_t1_copy1

0xa912,	// (0x00059783) setting_slider_graphic_pane_t2_copy1

0xa922,	// (0x00059793) slider_set_pane_cp_copy1

0xa932,	// (0x000597a3) input_focus_pane_cp1_copy1

0xa93b,	// (0x000597ac) list_set_text_pane_copy1

0xa943,	// (0x000597b4) setting_text_pane_g1_copy1

0x3662,	// (0x000524d3) set_text_pane_t1_copy1

0xa932,	// (0x000597a3) input_focus_pane_cp2_copy1

0xa943,	// (0x000597b4) setting_code_pane_g1_copy1

0xa94c,	// (0x000597bd) setting_code_pane_t1_copy1

0xa95a,	// (0x000597cb) list_set_graphic_pane_copy1

0x2cae,	// (0x00051b1f) bg_set_opt_pane_cp4_copy1

0x48d9,	// (0x0005374a) list_set_graphic_pane_g1_copy1_ParamLimits

0x48d9,	// (0x0005374a) list_set_graphic_pane_g1_copy1

0xa96d,	// (0x000597de) list_set_graphic_pane_g2_copy1

0x48f1,	// (0x00053762) list_set_graphic_pane_t1_copy1_ParamLimits

0x48f1,	// (0x00053762) list_set_graphic_pane_t1_copy1

0x79d1,	// (0x00056842) rs_clock_indi_pane_g1

0xa975,	// (0x000597e6) rs_clock_indi_pane_t1

0xa983,	// (0x000597f4) rs_indi_pane

0xa98b,	// (0x000597fc) rs_indi_pane_g1

0xa994,	// (0x00059805) rs_indi_pane_g2

0xa99d,	// (0x0005980e) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0005ed34) rs_indi_pane_g

0x4bea,	// (0x00053a5b) bg_popup_preview_window_pane_cp03

0xa9a6,	// (0x00059817) popup_fep_tooltip_window_t1

0x8659,	// (0x000574ca) popup_note2_window_g2_ParamLimits

0x8659,	// (0x000574ca) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0005eacd) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0005eacd) popup_note2_window_g

0x8b54,	// (0x000579c5) bg_popup_sub_pane_cp11_ParamLimits

0x8b61,	// (0x000579d2) cell_ai3_links_pane_g1_ParamLimits

0x8b78,	// (0x000579e9) cell_ai3_links_pane_t1

0x3662,	// (0x000524d3) set_text_pane_t1_copy1_ParamLimits

0x4afb,	// (0x0005396c) cell_graphic_popup_pane_cp2_ParamLimits

0x4afb,	// (0x0005396c) cell_graphic_popup_pane_cp2

0xa9b4,	// (0x00059825) cell_graphic_popup_pane_g1_cp2

0x3c94,	// (0x00052b05) cell_graphic_popup_pane_g2_cp2

0xa9bc,	// (0x0005982d) cell_graphic_popup_pane_g3_cp2

0xa9c4,	// (0x00059835) cell_graphic_popup_pane_t2_cp2

0x3ca5,	// (0x00052b16) grid_highlight_pane_cp3_cp2

0x42e6,	// (0x00053157) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f55,	// (0x00052dc6) main_tmo_pane_ParamLimits

0xe724,	// (0x0005d595) popup_tmo_big_image_note_window

0xa063,	// (0x00058ed4) cell_ai5_widget_list_pane

0xa06b,	// (0x00058edc) cell_ai5_widget_lrg_icon_pane

0xf3cb,	// (0x0005e23c) tmo_note_info_pane_t1_ParamLimits

0xf3e0,	// (0x0005e251) tmo_note_info_pane_t2_ParamLimits

0xf3f7,	// (0x0005e268) tmo_note_info_pane_t3_ParamLimits

0xa631,	// (0x000594a2) tmo_note_info_pane_t4_ParamLimits

0xa643,	// (0x000594b4) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0005ed22) tmo_note_info_pane_t_ParamLimits

0xa761,	// (0x000595d2) settings_container_pane_ParamLimits

0xa92a,	// (0x0005979b) indicator_popup_pane_cp5

0xa92a,	// (0x0005979b) indicator_popup_pane_cp6

0xa95a,	// (0x000597cb) list_set_graphic_pane_copy1_ParamLimits

0x2c9a,	// (0x00051b0b) bg_popup_window_pane_cp23

0xa9d2,	// (0x00059843) popup_tmo_big_image_note_window_g1

0xa9dc,	// (0x0005984d) popup_tmo_big_image_note_window_t1

0xa9ec,	// (0x0005985d) popup_tmo_big_image_note_window_t2

0xa9fc,	// (0x0005986d) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0005ed3b) popup_tmo_big_image_note_window_t

0x79d1,	// (0x00056842) cell_ai5_widget_lrg_icon_pane_g1

0xaa0c,	// (0x0005987d) cell_ai5_widget_lrg_icon_pane_t1

0xaa1a,	// (0x0005988b) cell_ai5_widget_list_row_pane_ParamLimits

0xaa1a,	// (0x0005988b) cell_ai5_widget_list_row_pane

0xaa31,	// (0x000598a2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa31,	// (0x000598a2) cell_ai5_widget_list_row_pane_g1

0xaa3e,	// (0x000598af) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa3e,	// (0x000598af) cell_ai5_widget_list_row_pane_t1

0xaa6f,	// (0x000598e0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa6f,	// (0x000598e0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0005ed42) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0005ed42) cell_ai5_widget_list_row_pane_t

0x00df,	// (0x0004ef50) main_fep_vtchi_ss_pane

0xaab7,	// (0x00059928) popup_fep_char_pre_window

0xaabf,	// (0x00059930) popup_fep_ituss_window

0xf40c,	// (0x0005e27d) popup_fep_vkbss_window

0xf419,	// (0x0005e28a) grid_vkbss_keypad_pane_ParamLimits

0xf419,	// (0x0005e28a) grid_vkbss_keypad_pane

0xab1a,	// (0x0005998b) ituss_keypad_pane

0x2b56,	// (0x000519c7) aid_vkbss_key_offset_ParamLimits

0x2b56,	// (0x000519c7) aid_vkbss_key_offset

0xcf66,	// (0x0005bdd7) cell_vkbss_key_pane_ParamLimits

0xcf66,	// (0x0005bdd7) cell_vkbss_key_pane

0xab29,	// (0x0005999a) bg_cell_vkbss_key_g1_ParamLimits

0xab29,	// (0x0005999a) bg_cell_vkbss_key_g1

0xf429,	// (0x0005e29a) cell_vkbss_key_3p_pane_ParamLimits

0xf429,	// (0x0005e29a) cell_vkbss_key_3p_pane

0xf443,	// (0x0005e2b4) cell_vkbss_key_g1_ParamLimits

0xf443,	// (0x0005e2b4) cell_vkbss_key_g1

0xf45d,	// (0x0005e2ce) cell_vkbss_key_t1_ParamLimits

0xf45d,	// (0x0005e2ce) cell_vkbss_key_t1

0x2b78,	// (0x000519e9) cell_ituss_key_pane_ParamLimits

0x2b78,	// (0x000519e9) cell_ituss_key_pane

0xab88,	// (0x000599f9) bg_cell_ituss_key_g1_ParamLimits

0xab88,	// (0x000599f9) bg_cell_ituss_key_g1

0xab94,	// (0x00059a05) cell_ituss_key_pane_g1_ParamLimits

0xab94,	// (0x00059a05) cell_ituss_key_pane_g1

0x2b89,	// (0x000519fa) cell_ituss_key_pane_g2_ParamLimits

0x2b89,	// (0x000519fa) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0005ed49) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0005ed49) cell_ituss_key_pane_g

0x2bb5,	// (0x00051a26) cell_ituss_key_t1_ParamLimits

0x2bb5,	// (0x00051a26) cell_ituss_key_t1

0x2bef,	// (0x00051a60) cell_ituss_key_t2_ParamLimits

0x2bef,	// (0x00051a60) cell_ituss_key_t2

0x2c20,	// (0x00051a91) cell_ituss_key_t3_ParamLimits

0x2c20,	// (0x00051a91) cell_ituss_key_t3

0x2bef,	// (0x00051a60) cell_ituss_key_t4_ParamLimits

0x2bef,	// (0x00051a60) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0005ed50) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0005ed50) cell_ituss_key_t

0xabc0,	// (0x00059a31) cell_vkbss_key_3p_pane_g1

0xabc8,	// (0x00059a39) cell_vkbss_key_3p_pane_g2

0xabd0,	// (0x00059a41) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005ed5b) cell_vkbss_key_3p_pane_g

0x4bea,	// (0x00053a5b) bg_popup_fep_char_preview_window_cp02

0xabd8,	// (0x00059a49) popup_fep_char_pre_window_t1

0xf30f,	// (0x0005e180) main_ai5_sk_pane

0xa6bd,	// (0x0005952e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6c9,	// (0x0005953a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x806f,	// (0x00056ee0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6de,	// (0x0005954f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0005ed2d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6ea,	// (0x0005955b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f55,	// (0x00052dc6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf488,	// (0x0005e2f9) main_ai5_sk_pane_g1

0x58f2,	// (0x00054763) popup_query_code_window_g1

0xaad5,	// (0x00059946) popup_fep_vkb_icf_pane

0xaaf4,	// (0x00059965) popup_fep_vtchi_icf_pane

0xabef,	// (0x00059a60) bg_icf_pane

0xabfb,	// (0x00059a6c) list_vkb_icf_pane

0xac0a,	// (0x00059a7b) bg_icf_pane_cp01

0xac1d,	// (0x00059a8e) vtchi_icf_list_pane

0xac2d,	// (0x00059a9e) list_vkb_icf_pane_t1_ParamLimits

0xac2d,	// (0x00059a9e) list_vkb_icf_pane_t1

0xac43,	// (0x00059ab4) vtchi_icf_list_pane_t1_ParamLimits

0xac43,	// (0x00059ab4) vtchi_icf_list_pane_t1

0xaabf,	// (0x00059930) popup_fep_ituss_window_ParamLimits

0xaaf4,	// (0x00059965) popup_fep_vtchi_icf_pane_ParamLimits

0xab1a,	// (0x0005998b) ituss_keypad_pane_ParamLimits

0x2b4a,	// (0x000519bb) ituss_sks_pane

0xabef,	// (0x00059a60) bg_icf_pane_ParamLimits

0xaa97,	// (0x00059908) icf_edit_indi_pane_ParamLimits

0xaa97,	// (0x00059908) icf_edit_indi_pane

0xabfb,	// (0x00059a6c) list_vkb_icf_pane_ParamLimits

0xac0a,	// (0x00059a7b) bg_icf_pane_cp01_ParamLimits

0xaaaa,	// (0x0005991b) icf_edit_indi_pane_cp01_ParamLimits

0xaaaa,	// (0x0005991b) icf_edit_indi_pane_cp01

0xac25,	// (0x00059a96) vtchi_query_pane

0x9e72,	// (0x00058ce3) icf_edit_indi_pane_g1_ParamLimits

0x9e72,	// (0x00058ce3) icf_edit_indi_pane_g1

0xf491,	// (0x0005e302) icf_edit_indi_pane_g2_ParamLimits

0xf491,	// (0x0005e302) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005ed73) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005ed73) icf_edit_indi_pane_g

0xf4a3,	// (0x0005e314) icf_edit_indi_pane_t1

0xac5d,	// (0x00059ace) bg_input_focus_pane_cp042

0x3e78,	// (0x00052ce9) vtchi_button_pane

0xac66,	// (0x00059ad7) vtchi_query_pane_t1

0xac74,	// (0x00059ae5) vtchi_query_pane_t2

0xac82,	// (0x00059af3) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005ed62) vtchi_query_pane_t

0x00df,	// (0x0004ef50) bg_button_pane_cp13

0xac90,	// (0x00059b01) vtchi_button_pane_g1

0x2c63,	// (0x00051ad4) ituss_sks_pane_g1

0x2c6e,	// (0x00051adf) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005ed69) ituss_sks_pane_g

0xac98,	// (0x00059b09) ituss_sks_pane_t1

0xaca6,	// (0x00059b17) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005ed6e) ituss_sks_pane_t

0x745c,	// (0x000562cd) indicator_nsta_pane_cp_g1

0x7464,	// (0x000562d5) indicator_nsta_pane_cp_g2

0x746c,	// (0x000562dd) indicator_nsta_pane_cp_g3

0x745c,	// (0x000562cd) indicator_nsta_pane_cp_g4

0x7464,	// (0x000562d5) indicator_nsta_pane_cp_g5

0x746c,	// (0x000562dd) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0005e90b) indicator_nsta_pane_cp_g

0xf127,	// (0x0005df98) cell_graphic2_pane_t2_ParamLimits

0xf127,	// (0x0005df98) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0005ec24) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0005ec24) cell_graphic2_pane_t

0xf15b,	// (0x0005dfcc) cell_graphic2_control_pane_t1

0xd483,	// (0x0005c2f4) signal_pane_g3_ParamLimits

0xd483,	// (0x0005c2f4) signal_pane_g3

0xd497,	// (0x0005c308) signal_pane_g4_ParamLimits

0xd497,	// (0x0005c308) signal_pane_g4

0xaa81,	// (0x000598f2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa81,	// (0x000598f2) cell_ai5_widget_list_row_pane_t3

0xabae,	// (0x00059a1f) cell_ituss_key_pane_t1_ParamLimits

0xabae,	// (0x00059a1f) cell_ituss_key_pane_t1

0x5537,	// (0x000543a8) form_field_data_wide_pane_vc_t2_ParamLimits

0x5537,	// (0x000543a8) form_field_data_wide_pane_vc_t2

0x554b,	// (0x000543bc) form_field_data_wide_pane_vc_t3_ParamLimits

0x554b,	// (0x000543bc) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0005e67a) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0005e67a) form_field_data_wide_pane_vc_t

0x7123,	// (0x00055f94) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7123,	// (0x00055f94) form_field_slider_wide_pane_vc_t3

0x7201,	// (0x00056072) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7201,	// (0x00056072) form_field_popup_wide_pane_vc_t2

0x7218,	// (0x00056089) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7218,	// (0x00056089) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0005e8fa) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0005e8fa) form_field_popup_wide_pane_vc_t

0xce08,	// (0x0005bc79) aid_fshwr2_btn_pane_ParamLimits

0xce19,	// (0x0005bc8a) aid_fshwr2_syb_pane_ParamLimits

0xce2a,	// (0x0005bc9b) aid_fshwr2_txt_pane_ParamLimits

0x21b6,	// (0x00051027) fshwr2_bg_pane_ParamLimits

0xce36,	// (0x0005bca7) fshwr2_func_candi_pane_ParamLimits

0xce55,	// (0x0005bcc6) fshwr2_hwr_syb_pane_ParamLimits

0xce70,	// (0x0005bce1) fshwr2_icf_pane_ParamLimits

0x3257,	// (0x000520c8) list_double_graphic_pane_vc_g4_ParamLimits

0x3257,	// (0x000520c8) list_double_graphic_pane_vc_g4

0x2ba9,	// (0x00051a1a) cell_ituss_key_pane_g3_ParamLimits

0x2ba9,	// (0x00051a1a) cell_ituss_key_pane_g3

0x2c51,	// (0x00051ac2) cell_ituss_key_t5_ParamLimits

0x2c51,	// (0x00051ac2) cell_ituss_key_t5

0xf40c,	// (0x0005e27d) popup_fep_vkbss_window_ParamLimits

0x9ff2,	// (0x00058e63) aid_cell_ai5_quarter

0xf4a3,	// (0x0005e314) icf_edit_indi_pane_t1_ParamLimits

0x39e5,	// (0x00052856) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x39e5,	// (0x00052856) aid_tch_indicator_popup_pane_cp2

0x39f8,	// (0x00052869) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x39f8,	// (0x00052869) aid_tch_query_popup_data_pane_cp2

0x589a,	// (0x0005470b) aid_tch_query_popup_pane_ParamLimits

0x589a,	// (0x0005470b) aid_tch_query_popup_pane

0x589a,	// (0x0005470b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x589a,	// (0x0005470b) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

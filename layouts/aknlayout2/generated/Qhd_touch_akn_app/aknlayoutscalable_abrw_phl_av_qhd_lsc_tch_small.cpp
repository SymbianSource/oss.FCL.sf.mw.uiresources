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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00030dd1 };

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
0xb27c,	// (0x0003c04d) Screen

0xb288,	// (0x0003c059) application_window_ParamLimits

0xb288,	// (0x0003c059) application_window

0xdf27,	// (0x0003ecf8) screen_g1

0xb2c0,	// (0x0003c091) area_bottom_pane_ParamLimits

0xb2c0,	// (0x0003c091) area_bottom_pane

0xf2f1,	// (0x000400c2) area_top_pane_ParamLimits

0xf2f1,	// (0x000400c2) area_top_pane

0xf38f,	// (0x00040160) main_pane_ParamLimits

0xf38f,	// (0x00040160) main_pane

0x2bf4,	// (0x000339c5) misc_graphics

0xd3fe,	// (0x0003e1cf) battery_pane_ParamLimits

0xd3fe,	// (0x0003e1cf) battery_pane

0x559c,	// (0x0003636d) bg_status_flat_pane_g8

0x55a4,	// (0x00036375) bg_status_flat_pane_g9

0x4982,	// (0x00035753) context_pane_ParamLimits

0x4982,	// (0x00035753) context_pane

0xd569,	// (0x0003e33a) navi_pane_ParamLimits

0xd569,	// (0x0003e33a) navi_pane

0xd5e7,	// (0x0003e3b8) signal_pane_ParamLimits

0xd5e7,	// (0x0003e3b8) signal_pane

0x0008,

0xf84f,	// (0x00040620) bg_status_flat_pane_g

0xd677,	// (0x0003e448) status_pane_g1_ParamLimits

0xd677,	// (0x0003e448) status_pane_g1

0xd68d,	// (0x0003e45e) status_pane_g2_ParamLimits

0xd68d,	// (0x0003e45e) status_pane_g2

0x4ba9,	// (0x0003597a) status_pane_g3_ParamLimits

0x4ba9,	// (0x0003597a) status_pane_g3

0x0004,

0xf77b,	// (0x0004054c) status_pane_g_ParamLimits

0xf77b,	// (0x0004054c) status_pane_g

0xd699,	// (0x0003e46a) title_pane_ParamLimits

0xd699,	// (0x0003e46a) title_pane

0xd6fc,	// (0x0003e4cd) uni_indicator_pane_ParamLimits

0xd6fc,	// (0x0003e4cd) uni_indicator_pane

0x47ea,	// (0x000355bb) bg_list_pane_ParamLimits

0x47ea,	// (0x000355bb) bg_list_pane

0xbfba,	// (0x0003cd8b) find_pane

0x4da8,	// (0x00035b79) listscroll_app_pane_ParamLimits

0x4da8,	// (0x00035b79) listscroll_app_pane

0x4816,	// (0x000355e7) listscroll_form_pane

0xb268,	// (0x0003c039) listscroll_gen_pane_ParamLimits

0xb268,	// (0x0003c039) listscroll_gen_pane

0x0a40,	// (0x00031811) listscroll_set_pane

0x611d,	// (0x00036eee) main_idle_act_pane

0x44e6,	// (0x000352b7) main_idle_trad_pane

0x44e6,	// (0x000352b7) main_list_empty_pane

0x480a,	// (0x000355db) main_midp_pane

0x4830,	// (0x00035601) main_pane_g1_ParamLimits

0x4830,	// (0x00035601) main_pane_g1

0xbfc2,	// (0x0003cd93) popup_ai_message_window_ParamLimits

0xbfc2,	// (0x0003cd93) popup_ai_message_window

0xc053,	// (0x0003ce24) popup_fep_china_uni_window_ParamLimits

0xc053,	// (0x0003ce24) popup_fep_china_uni_window

0x0b60,	// (0x00031931) popup_fep_japan_candidate_window_ParamLimits

0x0b60,	// (0x00031931) popup_fep_japan_candidate_window

0x0b80,	// (0x00031951) popup_fep_japan_predictive_window_ParamLimits

0x0b80,	// (0x00031951) popup_fep_japan_predictive_window

0xc0af,	// (0x0003ce80) popup_find_window

0xc0cc,	// (0x0003ce9d) popup_grid_graphic_window_ParamLimits

0xc0cc,	// (0x0003ce9d) popup_grid_graphic_window

0x0be9,	// (0x000319ba) popup_large_graphic_colour_window

0xc170,	// (0x0003cf41) popup_menu_window_ParamLimits

0xc170,	// (0x0003cf41) popup_menu_window

0xc342,	// (0x0003d113) popup_note_image_window

0xc308,	// (0x0003d0d9) popup_note_wait_window_ParamLimits

0xc308,	// (0x0003d0d9) popup_note_wait_window

0xc35a,	// (0x0003d12b) popup_note_window_ParamLimits

0xc35a,	// (0x0003d12b) popup_note_window

0xc400,	// (0x0003d1d1) popup_query_code_window_ParamLimits

0xc400,	// (0x0003d1d1) popup_query_code_window

0x0e31,	// (0x00031c02) popup_query_data_code_window_ParamLimits

0x0e31,	// (0x00031c02) popup_query_data_code_window

0xc43a,	// (0x0003d20b) popup_query_data_window_ParamLimits

0xc43a,	// (0x0003d20b) popup_query_data_window

0xc4bc,	// (0x0003d28d) popup_query_sat_info_window_ParamLimits

0xc4bc,	// (0x0003d28d) popup_query_sat_info_window

0xc553,	// (0x0003d324) popup_snote_single_graphic_window_ParamLimits

0xc553,	// (0x0003d324) popup_snote_single_graphic_window

0xc553,	// (0x0003d324) popup_snote_single_text_window_ParamLimits

0xc553,	// (0x0003d324) popup_snote_single_text_window

0x0eb8,	// (0x00031c89) popup_sub_window_general

0x0fe8,	// (0x00031db9) popup_window_general_ParamLimits

0x0fe8,	// (0x00031db9) popup_window_general

0x483e,	// (0x0003560f) power_save_pane

0xbe3f,	// (0x0003cc10) control_pane_g1_ParamLimits

0xbe3f,	// (0x0003cc10) control_pane_g1

0xbe68,	// (0x0003cc39) control_pane_g2_ParamLimits

0xbe68,	// (0x0003cc39) control_pane_g2

0x47ad,	// (0x0003557e) control_pane_g3_ParamLimits

0x47ad,	// (0x0003557e) control_pane_g3

0x0007,

0xf763,	// (0x00040534) control_pane_g_ParamLimits

0xf763,	// (0x00040534) control_pane_g

0xbea9,	// (0x0003cc7a) control_pane_t1_ParamLimits

0xbea9,	// (0x0003cc7a) control_pane_t1

0xbf0f,	// (0x0003cce0) control_pane_t2_ParamLimits

0xbf0f,	// (0x0003cce0) control_pane_t2

0x0002,

0xf774,	// (0x00040545) control_pane_t_ParamLimits

0xf774,	// (0x00040545) control_pane_t

0xd2ab,	// (0x0003e07c) navi_navi_volume_pane_cp1

0xd2b3,	// (0x0003e084) status_small_icon_pane

0x46e2,	// (0x000354b3) status_small_pane_g1_ParamLimits

0x46e2,	// (0x000354b3) status_small_pane_g1

0xd2bb,	// (0x0003e08c) status_small_pane_g2_ParamLimits

0xd2bb,	// (0x0003e08c) status_small_pane_g2

0xd2c7,	// (0x0003e098) status_small_pane_g3_ParamLimits

0xd2c7,	// (0x0003e098) status_small_pane_g3

0xd2d3,	// (0x0003e0a4) status_small_pane_g4_ParamLimits

0xd2d3,	// (0x0003e0a4) status_small_pane_g4

0xd2df,	// (0x0003e0b0) status_small_pane_g5_ParamLimits

0xd2df,	// (0x0003e0b0) status_small_pane_g5

0xd2ed,	// (0x0003e0be) status_small_pane_g6_ParamLimits

0xd2ed,	// (0x0003e0be) status_small_pane_g6

0x0007,

0xf752,	// (0x00040523) status_small_pane_g_ParamLimits

0xf752,	// (0x00040523) status_small_pane_g

0xd31c,	// (0x0003e0ed) status_small_pane_t1

0xd33e,	// (0x0003e10f) status_small_wait_pane_ParamLimits

0xd33e,	// (0x0003e10f) status_small_wait_pane

0xd153,	// (0x0003df24) aid_levels_signal_ParamLimits

0xd153,	// (0x0003df24) aid_levels_signal

0xd16b,	// (0x0003df3c) signal_pane_g1_ParamLimits

0xd16b,	// (0x0003df3c) signal_pane_g1

0xd186,	// (0x0003df57) signal_pane_g2_ParamLimits

0xd186,	// (0x0003df57) signal_pane_g2

0x0003,

0xf6e3,	// (0x000404b4) signal_pane_g_ParamLimits

0xf6e3,	// (0x000404b4) signal_pane_g

0x3fb7,	// (0x00034d88) context_pane_g1

0xb49e,	// (0x0003c26f) title_pane_g1

0xb4d5,	// (0x0003c2a6) title_pane_t1

0x2c9c,	// (0x00033a6d) title_pane_t2

0x2cc2,	// (0x00033a93) title_pane_t3

0x0002,

0xf532,	// (0x00040303) title_pane_t

0xd724,	// (0x0003e4f5) aid_levels_battery_ParamLimits

0xd724,	// (0x0003e4f5) aid_levels_battery

0xd740,	// (0x0003e511) battery_pane_g1_ParamLimits

0xd740,	// (0x0003e511) battery_pane_g1

0xd75d,	// (0x0003e52e) battery_pane_g2_ParamLimits

0xd75d,	// (0x0003e52e) battery_pane_g2

0x0001,

0xf786,	// (0x00040557) battery_pane_g_ParamLimits

0xf786,	// (0x00040557) battery_pane_g

0xd91e,	// (0x0003e6ef) uni_indicator_pane_g1

0xd934,	// (0x0003e705) uni_indicator_pane_g2

0xd94a,	// (0x0003e71b) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x000406c8) uni_indicator_pane_g

0x4358,	// (0x00035129) navi_icon_pane_ParamLimits

0x4358,	// (0x00035129) navi_icon_pane

0x4296,	// (0x00035067) navi_midp_pane

0x4374,	// (0x00035145) navi_navi_pane

0x437e,	// (0x0003514f) navi_text_pane_ParamLimits

0x437e,	// (0x0003514f) navi_text_pane

0xdf27,	// (0x0003ecf8) status_small_wait_pane_g1

0x3117,	// (0x00033ee8) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x000406c3) status_small_wait_pane_g

0x5bf7,	// (0x000369c8) navi_navi_icon_text_pane

0x5bff,	// (0x000369d0) navi_navi_pane_g1_ParamLimits

0x5bff,	// (0x000369d0) navi_navi_pane_g1

0x5c11,	// (0x000369e2) navi_navi_pane_g2_ParamLimits

0x5c11,	// (0x000369e2) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00040691) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00040691) navi_navi_pane_g

0x5c23,	// (0x000369f4) navi_navi_tabs_pane

0x5c2c,	// (0x000369fd) navi_navi_text_pane

0x5bf7,	// (0x000369c8) navi_navi_volume_pane

0x5bd3,	// (0x000369a4) navi_text_pane_t1

0x5bc7,	// (0x00036998) navi_icon_pane_g1

0x5b1a,	// (0x000368eb) navi_navi_text_pane_t1

0x13c5,	// (0x00032196) navi_navi_volume_pane_g1

0x13cd,	// (0x0003219e) volume_small_pane

0x5a80,	// (0x00036851) navi_navi_icon_text_pane_g1

0x5a88,	// (0x00036859) navi_navi_icon_text_pane_t1

0x4374,	// (0x00035145) navi_tabs_2_long_pane

0x4374,	// (0x00035145) navi_tabs_2_pane

0x4374,	// (0x00035145) navi_tabs_3_long_pane

0x4374,	// (0x00035145) navi_tabs_3_pane

0x4374,	// (0x00035145) navi_tabs_4_pane

0x13a5,	// (0x00032176) tabs_2_active_pane_ParamLimits

0x13a5,	// (0x00032176) tabs_2_active_pane

0x13b5,	// (0x00032186) tabs_2_passive_pane_ParamLimits

0x13b5,	// (0x00032186) tabs_2_passive_pane

0x1373,	// (0x00032144) tabs_3_active_pane_ParamLimits

0x1373,	// (0x00032144) tabs_3_active_pane

0x1383,	// (0x00032154) tabs_3_passive_pane_ParamLimits

0x1383,	// (0x00032154) tabs_3_passive_pane

0x1394,	// (0x00032165) tabs_3_passive_pane_cp_ParamLimits

0x1394,	// (0x00032165) tabs_3_passive_pane_cp

0x132f,	// (0x00032100) tabs_4_active_pane_ParamLimits

0x132f,	// (0x00032100) tabs_4_active_pane

0x1340,	// (0x00032111) tabs_4_passive_pane_ParamLimits

0x1340,	// (0x00032111) tabs_4_passive_pane

0x1351,	// (0x00032122) tabs_4_passive_pane_cp_ParamLimits

0x1351,	// (0x00032122) tabs_4_passive_pane_cp

0x1362,	// (0x00032133) tabs_4_passive_pane_cp2_ParamLimits

0x1362,	// (0x00032133) tabs_4_passive_pane_cp2

0x130b,	// (0x000320dc) tabs_2_long_active_pane_ParamLimits

0x130b,	// (0x000320dc) tabs_2_long_active_pane

0x131d,	// (0x000320ee) tabs_2_long_passive_pane_ParamLimits

0x131d,	// (0x000320ee) tabs_2_long_passive_pane

0x12cc,	// (0x0003209d) tabs_3_long_active_pane_ParamLimits

0x12cc,	// (0x0003209d) tabs_3_long_active_pane

0x12df,	// (0x000320b0) tabs_3_long_passive_pane_ParamLimits

0x12df,	// (0x000320b0) tabs_3_long_passive_pane

0x12f8,	// (0x000320c9) tabs_3_long_passive_pane_cp_ParamLimits

0x12f8,	// (0x000320c9) tabs_3_long_passive_pane_cp

0x1272,	// (0x00032043) volume_small_pane_g1

0x127b,	// (0x0003204c) volume_small_pane_g2

0x1284,	// (0x00032055) volume_small_pane_g3

0x128d,	// (0x0003205e) volume_small_pane_g4

0x1296,	// (0x00032067) volume_small_pane_g5

0x129f,	// (0x00032070) volume_small_pane_g6

0x12a8,	// (0x00032079) volume_small_pane_g7

0x12b1,	// (0x00032082) volume_small_pane_g8

0x12ba,	// (0x0003208b) volume_small_pane_g9

0x12c3,	// (0x00032094) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0004065d) volume_small_pane_g

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp2_ParamLimits

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp2

0x2ce2,	// (0x00033ab3) tabs_3_active_pane_g1

0xb561,	// (0x0003c332) tabs_3_active_pane_t1

0x2f4f,	// (0x00033d20) bg_passive_tab_pane_cp2_ParamLimits

0x2f4f,	// (0x00033d20) bg_passive_tab_pane_cp2

0x2ce2,	// (0x00033ab3) tabs_3_passive_pane_g1

0xb561,	// (0x0003c332) tabs_3_passive_pane_t1

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp3_ParamLimits

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp3

0x2cfc,	// (0x00033acd) tabs_4_active_pane_g1

0xb573,	// (0x0003c344) tabs_4_active_pane_t1

0x2f4f,	// (0x00033d20) bg_passive_tab_pane_cp3_ParamLimits

0x2f4f,	// (0x00033d20) bg_passive_tab_pane_cp3

0x2cfc,	// (0x00033acd) tabs_4_1_passive_pane_g1

0xb573,	// (0x0003c344) tabs_4_1_passive_pane_t1

0x480a,	// (0x000355db) list_highlight_pane_cp2

0xd9d0,	// (0x0003e7a1) list_set_pane_ParamLimits

0xd9d0,	// (0x0003e7a1) list_set_pane

0xda6a,	// (0x0003e83b) main_pane_set_t1_ParamLimits

0xda6a,	// (0x0003e83b) main_pane_set_t1

0xda8a,	// (0x0003e85b) main_pane_set_t2_ParamLimits

0xda8a,	// (0x0003e85b) main_pane_set_t2

0xda9e,	// (0x0003e86f) main_pane_set_t3_ParamLimits

0xda9e,	// (0x0003e86f) main_pane_set_t3

0xdab0,	// (0x0003e881) main_pane_set_t4_ParamLimits

0xdab0,	// (0x0003e881) main_pane_set_t4

0x0003,

0xf95c,	// (0x0004072d) main_pane_set_t_ParamLimits

0xf95c,	// (0x0004072d) main_pane_set_t

0xdac2,	// (0x0003e893) setting_code_pane

0xdacc,	// (0x0003e89d) setting_slider_graphic_pane

0xdacc,	// (0x0003e89d) setting_slider_pane

0xdacc,	// (0x0003e89d) setting_text_pane

0xdacc,	// (0x0003e89d) setting_volume_pane

0xf498,	// (0x00040269) volume_set_pane

0x2cd4,	// (0x00033aa5) bg_set_opt_pane_cp

0xf4a0,	// (0x00040271) setting_slider_pane_t1

0xf4b9,	// (0x0004028a) setting_slider_pane_t2

0xf4d3,	// (0x000402a4) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004030a) setting_slider_pane_t

0xf4eb,	// (0x000402bc) slider_set_pane

0x2bf4,	// (0x000339c5) bg_set_opt_pane_cp2

0x2d16,	// (0x00033ae7) setting_slider_graphic_pane_g1

0xf501,	// (0x000402d2) setting_slider_graphic_pane_t1

0xf511,	// (0x000402e2) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00040311) setting_slider_graphic_pane_t

0xf521,	// (0x000402f2) slider_set_pane_cp

0x2bf4,	// (0x000339c5) input_focus_pane_cp1

0x6104,	// (0x00036ed5) list_set_text_pane

0xdf27,	// (0x0003ecf8) setting_text_pane_g1

0x2bf4,	// (0x000339c5) input_focus_pane_cp2

0xdf27,	// (0x0003ecf8) setting_code_pane_g1

0x2d1f,	// (0x00033af0) setting_code_pane_t1

0xee8e,	// (0x0003fc5f) set_text_pane_t1_ParamLimits

0xee8e,	// (0x0003fc5f) set_text_pane_t1

0x35b9,	// (0x0003438a) set_opt_bg_pane_g1

0x35c1,	// (0x00034392) set_opt_bg_pane_g2

0x60de,	// (0x00036eaf) set_opt_bg_pane_g3

0x35d1,	// (0x000343a2) set_opt_bg_pane_g4

0x35d9,	// (0x000343aa) set_opt_bg_pane_g5

0x35e1,	// (0x000343b2) set_opt_bg_pane_g6

0x60e8,	// (0x00036eb9) set_opt_bg_pane_g7

0x60f0,	// (0x00036ec1) set_opt_bg_pane_g8

0x60fa,	// (0x00036ecb) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0004071a) set_opt_bg_pane_g

0x60d1,	// (0x00036ea2) slider_set_pane_g1

0x1462,	// (0x00032233) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0004070b) slider_set_pane_g

0x13d6,	// (0x000321a7) volume_set_pane_g1

0x13de,	// (0x000321af) volume_set_pane_g2

0x13e6,	// (0x000321b7) volume_set_pane_g3

0x13ee,	// (0x000321bf) volume_set_pane_g4

0x13f6,	// (0x000321c7) volume_set_pane_g5

0x13fe,	// (0x000321cf) volume_set_pane_g6

0x1406,	// (0x000321d7) volume_set_pane_g7

0x140e,	// (0x000321df) volume_set_pane_g8

0x1416,	// (0x000321e7) volume_set_pane_g9

0x141e,	// (0x000321ef) volume_set_pane_g10

0x0009,

0xf912,	// (0x000406e3) volume_set_pane_g

0xb585,	// (0x0003c356) indicator_pane_ParamLimits

0xb585,	// (0x0003c356) indicator_pane

0xb5ad,	// (0x0003c37e) main_idle_pane_g2_ParamLimits

0xb5ad,	// (0x0003c37e) main_idle_pane_g2

0xb5e5,	// (0x0003c3b6) main_pane_idle_g1_ParamLimits

0xb5e5,	// (0x0003c3b6) main_pane_idle_g1

0x2d6e,	// (0x00033b3f) popup_clock_digital_analogue_window_ParamLimits

0x2d6e,	// (0x00033b3f) popup_clock_digital_analogue_window

0xb60c,	// (0x0003c3dd) soft_indicator_pane_ParamLimits

0xb60c,	// (0x0003c3dd) soft_indicator_pane

0xb626,	// (0x0003c3f7) wallpaper_pane_ParamLimits

0xb626,	// (0x0003c3f7) wallpaper_pane

0xdf27,	// (0x0003ecf8) wallpaper_pane_g1

0xb638,	// (0x0003c409) indicator_pane_g1_ParamLimits

0xb638,	// (0x0003c409) indicator_pane_g1

0x651f,	// (0x000372f0) navi_navi_icon_text_pane_srt_g1

0x2dc0,	// (0x00033b91) soft_indicator_pane_t1

0x2dda,	// (0x00033bab) aid_ps_area_pane

0xb64e,	// (0x0003c41f) aid_ps_clock_pane

0x2df9,	// (0x00033bca) aid_ps_indicator_pane

0x2e05,	// (0x00033bd6) indicator_ps_pane_ParamLimits

0x2e05,	// (0x00033bd6) indicator_ps_pane

0x2e14,	// (0x00033be5) power_save_pane_g1_ParamLimits

0x2e14,	// (0x00033be5) power_save_pane_g1

0x2e20,	// (0x00033bf1) power_save_pane_g2_ParamLimits

0x2e20,	// (0x00033bf1) power_save_pane_g2

0xee6e,	// (0x0003fc3f) aid_navinavi_width_pane

0x2dda,	// (0x00033bab) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00040316) power_save_pane_g_ParamLimits

0xf545,	// (0x00040316) power_save_pane_g

0x2e2e,	// (0x00033bff) power_save_pane_t1_ParamLimits

0x2e2e,	// (0x00033bff) power_save_pane_t1

0xb64e,	// (0x0003c41f) aid_ps_clock_pane_ParamLimits

0x2df9,	// (0x00033bca) aid_ps_indicator_pane_ParamLimits

0x2e40,	// (0x00033c11) power_save_pane_t4_ParamLimits

0x2e40,	// (0x00033c11) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004031b) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004031b) power_save_pane_t

0x2e6a,	// (0x00033c3b) power_save_t3_ParamLimits

0x2e6a,	// (0x00033c3b) power_save_t3

0x2e55,	// (0x00033c26) power_save_t2_ParamLimits

0x2e55,	// (0x00033c26) power_save_t2

0x2e7f,	// (0x00033c50) indicator_ps_pane_g1

0xb65c,	// (0x0003c42d) ai_gene_pane_ParamLimits

0xb65c,	// (0x0003c42d) ai_gene_pane

0xb673,	// (0x0003c444) ai_links_pane_ParamLimits

0xb673,	// (0x0003c444) ai_links_pane

0xb68b,	// (0x0003c45c) indicator_pane_cp1_ParamLimits

0xb68b,	// (0x0003c45c) indicator_pane_cp1

0xb69a,	// (0x0003c46b) main_pane_idle_g1_cp_ParamLimits

0xb69a,	// (0x0003c46b) main_pane_idle_g1_cp

0x2eb8,	// (0x00033c89) popup_ai_links_title_window

0xb6b2,	// (0x0003c483) soft_indicator_pane_cp1_ParamLimits

0xb6b2,	// (0x0003c483) soft_indicator_pane_cp1

0x5ec0,	// (0x00036c91) ai_links_pane_g1

0x5ec9,	// (0x00036c9a) grid_ai_links_pane

0xd915,	// (0x0003e6e6) ai_gene_pane_1

0x5eae,	// (0x00036c7f) ai_gene_pane_2

0x5eb7,	// (0x00036c88) list_highlight_pane_cp4

0xd8f1,	// (0x0003e6c2) cell_ai_link_pane_ParamLimits

0xd8f1,	// (0x0003e6c2) cell_ai_link_pane

0x5e7f,	// (0x00036c50) cell_ai_link_pane_g1

0x3117,	// (0x00033ee8) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x000406be) cell_ai_link_pane_g

0x2bf4,	// (0x000339c5) grid_highlight_cp2

0x2bf4,	// (0x000339c5) bg_popup_sub_pane_cp1

0x2edb,	// (0x00033cac) popup_ai_links_title_window_t1

0x5dcd,	// (0x00036b9e) ai_gene_pane_1_g1_ParamLimits

0x5dcd,	// (0x00036b9e) ai_gene_pane_1_g1

0x5dd9,	// (0x00036baa) ai_gene_pane_1_g2_ParamLimits

0x5dd9,	// (0x00036baa) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x000406b4) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x000406b4) ai_gene_pane_1_g

0x5de6,	// (0x00036bb7) ai_gene_pane_1_t1_ParamLimits

0x5de6,	// (0x00036bb7) ai_gene_pane_1_t1

0x5e1a,	// (0x00036beb) grid_ai_soft_ind_pane

0x5db8,	// (0x00036b89) ai_gene_pane_2_t1_ParamLimits

0x5db8,	// (0x00036b89) ai_gene_pane_2_t1

0xb6c6,	// (0x0003c497) main_pane_empty_t1_ParamLimits

0xb6c6,	// (0x0003c497) main_pane_empty_t1

0xb6de,	// (0x0003c4af) main_pane_empty_t2_ParamLimits

0xb6de,	// (0x0003c4af) main_pane_empty_t2

0xb6f3,	// (0x0003c4c4) main_pane_empty_t3_ParamLimits

0xb6f3,	// (0x0003c4c4) main_pane_empty_t3

0xb705,	// (0x0003c4d6) main_pane_empty_t4_ParamLimits

0xb705,	// (0x0003c4d6) main_pane_empty_t4

0xb717,	// (0x0003c4e8) main_pane_empty_t5_ParamLimits

0xb717,	// (0x0003c4e8) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00040320) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00040320) main_pane_empty_t

0x3680,	// (0x00034451) bg_popup_window_pane_ParamLimits

0x3680,	// (0x00034451) bg_popup_window_pane

0x5b28,	// (0x000368f9) find_popup_pane_cp2_ParamLimits

0x5b28,	// (0x000368f9) find_popup_pane_cp2

0x5b34,	// (0x00036905) heading_pane_ParamLimits

0x5b34,	// (0x00036905) heading_pane

0x2bf4,	// (0x000339c5) bg_popup_sub_pane

0xd872,	// (0x0003e643) bg_popup_window_pane_g1_ParamLimits

0xd872,	// (0x0003e643) bg_popup_window_pane_g1

0xd881,	// (0x0003e652) bg_popup_window_pane_g2_ParamLimits

0xd881,	// (0x0003e652) bg_popup_window_pane_g2

0xd88d,	// (0x0003e65e) bg_popup_window_pane_g3_ParamLimits

0xd88d,	// (0x0003e65e) bg_popup_window_pane_g3

0xd899,	// (0x0003e66a) bg_popup_window_pane_g4_ParamLimits

0xd899,	// (0x0003e66a) bg_popup_window_pane_g4

0xd8a8,	// (0x0003e679) bg_popup_window_pane_g5_ParamLimits

0xd8a8,	// (0x0003e679) bg_popup_window_pane_g5

0xd8b8,	// (0x0003e689) bg_popup_window_pane_g6_ParamLimits

0xd8b8,	// (0x0003e689) bg_popup_window_pane_g6

0xd8c4,	// (0x0003e695) bg_popup_window_pane_g7_ParamLimits

0xd8c4,	// (0x0003e695) bg_popup_window_pane_g7

0xd8d3,	// (0x0003e6a4) bg_popup_window_pane_g8_ParamLimits

0xd8d3,	// (0x0003e6a4) bg_popup_window_pane_g8

0xd8e2,	// (0x0003e6b3) bg_popup_window_pane_g9_ParamLimits

0xd8e2,	// (0x0003e6b3) bg_popup_window_pane_g9

0x5b0e,	// (0x000368df) bg_popup_window_pane_g10_ParamLimits

0x5b0e,	// (0x000368df) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0004067c) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0004067c) bg_popup_window_pane_g

0x5a37,	// (0x00036808) bg_popup_heading_pane_ParamLimits

0x5a37,	// (0x00036808) bg_popup_heading_pane

0x15d8,	// (0x000323a9) tabs_4_passive_pane_cp_srt_ParamLimits

0x15d8,	// (0x000323a9) tabs_4_passive_pane_cp_srt

0x15ea,	// (0x000323bb) tabs_4_passive_pane_srt_ParamLimits

0x5a4b,	// (0x0003681c) heading_pane_g2

0x15ea,	// (0x000323bb) tabs_4_passive_pane_srt

0x4da8,	// (0x00035b79) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4da8,	// (0x00035b79) bg_passive_tab_pane_cp3_srt

0x5a53,	// (0x00036824) heading_pane_t1_ParamLimits

0x5a53,	// (0x00036824) heading_pane_t1

0x5a6a,	// (0x0003683b) heading_pane_t2_ParamLimits

0x5a6a,	// (0x0003683b) heading_pane_t2

0x0001,

0xf8a6,	// (0x00040677) heading_pane_t_ParamLimits

0xf8a6,	// (0x00040677) heading_pane_t

0x5564,	// (0x00036335) bg_popup_heading_pane_g1

0x5613,	// (0x000363e4) bg_popup_heading_pane_g2

0x561d,	// (0x000363ee) bg_popup_heading_pane_g3

0x5627,	// (0x000363f8) bg_popup_heading_pane_g4

0x5631,	// (0x00036402) bg_popup_heading_pane_g5

0x563b,	// (0x0003640c) bg_popup_heading_pane_g6

0x5643,	// (0x00036414) bg_popup_heading_pane_g7

0x564b,	// (0x0003641c) bg_popup_heading_pane_g8

0x5655,	// (0x00036426) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00040633) bg_popup_heading_pane_g

0x4d34,	// (0x00035b05) bg_popup_sub_pane_g1

0x4d44,	// (0x00035b15) bg_popup_sub_pane_g2

0x4d3c,	// (0x00035b0d) bg_popup_sub_pane_g3

0x4d54,	// (0x00035b25) bg_popup_sub_pane_g4

0x4d4c,	// (0x00035b1d) bg_popup_sub_pane_g5

0x4d5c,	// (0x00035b2d) bg_popup_sub_pane_g6

0x4d64,	// (0x00035b35) bg_popup_sub_pane_g7

0x4d74,	// (0x00035b45) bg_popup_sub_pane_g8

0x4d6c,	// (0x00035b3d) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0004060d) bg_popup_sub_pane_g

0x2f4f,	// (0x00033d20) bg_popup_window_pane_cp5_ParamLimits

0x2f4f,	// (0x00033d20) bg_popup_window_pane_cp5

0x2f6b,	// (0x00033d3c) popup_note_window_g1_ParamLimits

0x2f6b,	// (0x00033d3c) popup_note_window_g1

0x2f77,	// (0x00033d48) popup_note_window_t1_ParamLimits

0x2f77,	// (0x00033d48) popup_note_window_t1

0x2f8d,	// (0x00033d5e) popup_note_window_t2_ParamLimits

0x2f8d,	// (0x00033d5e) popup_note_window_t2

0x2fa3,	// (0x00033d74) popup_note_window_t3_ParamLimits

0x2fa3,	// (0x00033d74) popup_note_window_t3

0x2fb9,	// (0x00033d8a) popup_note_window_t4_ParamLimits

0x2fb9,	// (0x00033d8a) popup_note_window_t4

0x2fe1,	// (0x00033db2) popup_note_window_t5_ParamLimits

0x2fe1,	// (0x00033db2) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004032b) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004032b) popup_note_window_t

0x302b,	// (0x00033dfc) bg_popup_window_pane_cp6_ParamLimits

0x302b,	// (0x00033dfc) bg_popup_window_pane_cp6

0x54e0,	// (0x000362b1) popup_note_image_window_g1_ParamLimits

0x54e0,	// (0x000362b1) popup_note_image_window_g1

0x54ec,	// (0x000362bd) popup_note_image_window_g2_ParamLimits

0x54ec,	// (0x000362bd) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00040601) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00040601) popup_note_image_window_g

0x5505,	// (0x000362d6) popup_note_image_window_t1_ParamLimits

0x5505,	// (0x000362d6) popup_note_image_window_t1

0x551e,	// (0x000362ef) popup_note_image_window_t2_ParamLimits

0x551e,	// (0x000362ef) popup_note_image_window_t2

0x5537,	// (0x00036308) popup_note_image_window_t3_ParamLimits

0x5537,	// (0x00036308) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00040606) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00040606) popup_note_image_window_t

0x53a1,	// (0x00036172) bg_popup_window_pane_cp7_ParamLimits

0x53a1,	// (0x00036172) bg_popup_window_pane_cp7

0x53d1,	// (0x000361a2) popup_note_wait_window_g1_ParamLimits

0x53d1,	// (0x000361a2) popup_note_wait_window_g1

0x53dd,	// (0x000361ae) popup_note_wait_window_g2_ParamLimits

0x53dd,	// (0x000361ae) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x000405ef) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x000405ef) popup_note_wait_window_g

0x53f5,	// (0x000361c6) popup_note_wait_window_t1_ParamLimits

0x53f5,	// (0x000361c6) popup_note_wait_window_t1

0x541c,	// (0x000361ed) popup_note_wait_window_t2_ParamLimits

0x541c,	// (0x000361ed) popup_note_wait_window_t2

0x5439,	// (0x0003620a) popup_note_wait_window_t3_ParamLimits

0x5439,	// (0x0003620a) popup_note_wait_window_t3

0x544c,	// (0x0003621d) popup_note_wait_window_t4_ParamLimits

0x544c,	// (0x0003621d) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x000405f6) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x000405f6) popup_note_wait_window_t

0x5471,	// (0x00036242) wait_bar_pane_ParamLimits

0x5471,	// (0x00036242) wait_bar_pane

0x2bf4,	// (0x000339c5) wait_anim_pane

0x2bf4,	// (0x000339c5) wait_border_pane

0xdf27,	// (0x0003ecf8) wait_anim_pane_g1

0xdf27,	// (0x0003ecf8) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x000404af) wait_anim_pane_g

0x5345,	// (0x00036116) wait_border_pane_g1

0x5350,	// (0x00036121) wait_border_pane_g2

0x5359,	// (0x0003612a) wait_border_pane_g3

0x0002,

0xf817,	// (0x000405e8) wait_border_pane_g

0x51b0,	// (0x00035f81) bg_popup_window_pane_cp16_ParamLimits

0x51b0,	// (0x00035f81) bg_popup_window_pane_cp16

0x52b0,	// (0x00036081) indicator_popup_pane_cp4_ParamLimits

0x52b0,	// (0x00036081) indicator_popup_pane_cp4

0x52c4,	// (0x00036095) popup_query_data_window_t1_ParamLimits

0x52c4,	// (0x00036095) popup_query_data_window_t1

0x52d6,	// (0x000360a7) popup_query_data_window_t2_ParamLimits

0x52d6,	// (0x000360a7) popup_query_data_window_t2

0x52ef,	// (0x000360c0) popup_query_data_window_t3_ParamLimits

0x52ef,	// (0x000360c0) popup_query_data_window_t3

0x0002,

0xf810,	// (0x000405e1) popup_query_data_window_t_ParamLimits

0xf810,	// (0x000405e1) popup_query_data_window_t

0x5309,	// (0x000360da) query_popup_data_pane_ParamLimits

0x5309,	// (0x000360da) query_popup_data_pane

0x531d,	// (0x000360ee) query_popup_data_pane_cp1_ParamLimits

0x531d,	// (0x000360ee) query_popup_data_pane_cp1

0x51b0,	// (0x00035f81) bg_popup_window_pane_cp10_ParamLimits

0x51b0,	// (0x00035f81) bg_popup_window_pane_cp10

0x51e2,	// (0x00035fb3) indicator_popup_pane_ParamLimits

0x51e2,	// (0x00035fb3) indicator_popup_pane

0x5204,	// (0x00035fd5) popup_query_code_window_t1_ParamLimits

0x5204,	// (0x00035fd5) popup_query_code_window_t1

0x521e,	// (0x00035fef) popup_query_code_window_t2_ParamLimits

0x521e,	// (0x00035fef) popup_query_code_window_t2

0x5267,	// (0x00036038) popup_query_code_window_t3_ParamLimits

0x5267,	// (0x00036038) popup_query_code_window_t3

0x0002,

0xf809,	// (0x000405da) popup_query_code_window_t_ParamLimits

0xf809,	// (0x000405da) popup_query_code_window_t

0x5296,	// (0x00036067) query_popup_pane_ParamLimits

0x5296,	// (0x00036067) query_popup_pane

0x302b,	// (0x00033dfc) bg_popup_window_pane_cp15_ParamLimits

0x302b,	// (0x00033dfc) bg_popup_window_pane_cp15

0x3049,	// (0x00033e1a) indicator_popup_pane_cp1_ParamLimits

0x3049,	// (0x00033e1a) indicator_popup_pane_cp1

0x305c,	// (0x00033e2d) indicator_popup_pane_cp2_ParamLimits

0x305c,	// (0x00033e2d) indicator_popup_pane_cp2

0x306f,	// (0x00033e40) popup_query_data_code_window_g1_ParamLimits

0x306f,	// (0x00033e40) popup_query_data_code_window_g1

0x3082,	// (0x00033e53) popup_query_data_code_window_t1_ParamLimits

0x3082,	// (0x00033e53) popup_query_data_code_window_t1

0x3094,	// (0x00033e65) popup_query_data_code_window_t2_ParamLimits

0x3094,	// (0x00033e65) popup_query_data_code_window_t2

0x30a6,	// (0x00033e77) popup_query_data_code_window_t3_ParamLimits

0x30a6,	// (0x00033e77) popup_query_data_code_window_t3

0x30bc,	// (0x00033e8d) popup_query_data_code_window_t4_ParamLimits

0x30bc,	// (0x00033e8d) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00040336) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00040336) popup_query_data_code_window_t

0x108c,	// (0x00031e5d) list_single_midp_graphic_pane_g3

0x30d4,	// (0x00033ea5) query_popup_data_pane_cp2_ParamLimits

0x30e7,	// (0x00033eb8) query_popup_pane_cp2_ParamLimits

0x30e7,	// (0x00033eb8) query_popup_pane_cp2

0x2bf4,	// (0x000339c5) bg_popup_window_pane_cp11

0x5194,	// (0x00035f65) heading_pane_cp5

0x519c,	// (0x00035f6d) listscroll_popup_info_pane

0x2bf4,	// (0x000339c5) input_focus_pane_cp3

0x30fa,	// (0x00033ecb) query_popup_pane_t1

0x3108,	// (0x00033ed9) list_popup_info_pane_ParamLimits

0x3108,	// (0x00033ed9) list_popup_info_pane

0x3117,	// (0x00033ee8) listscroll_popup_info_pane_g1

0x311f,	// (0x00033ef0) scroll_pane_cp7

0x3129,	// (0x00033efa) popup_info_list_pane_t1_ParamLimits

0x3129,	// (0x00033efa) popup_info_list_pane_t1

0x3143,	// (0x00033f14) popup_info_list_pane_t2_ParamLimits

0x3143,	// (0x00033f14) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004033f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004033f) popup_info_list_pane_t

0x2bf4,	// (0x000339c5) bg_popup_window_pane_cp12

0x6539,	// (0x0003730a) find_popup_pane

0x2cd4,	// (0x00033aa5) bg_popup_window_pane_cp3

0x315d,	// (0x00033f2e) heading_pane_cp3

0x316c,	// (0x00033f3d) listscroll_popup_graphic_pane

0x2bf4,	// (0x000339c5) bg_popup_window_pane_cp4

0xb779,	// (0x0003c54a) heading_pane_cp4

0x31d6,	// (0x00033fa7) listscroll_popup_colour_pane

0xb783,	// (0x0003c554) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb783,	// (0x0003c554) cell_large_graphic_colour_none_popup_pane

0xb797,	// (0x0003c568) grid_large_graphic_colour_popup_pane_ParamLimits

0xb797,	// (0x0003c568) grid_large_graphic_colour_popup_pane

0xb7bb,	// (0x0003c58c) listscroll_popup_colour_pane_g1_ParamLimits

0xb7bb,	// (0x0003c58c) listscroll_popup_colour_pane_g1

0xb7d2,	// (0x0003c5a3) listscroll_popup_colour_pane_g2_ParamLimits

0xb7d2,	// (0x0003c5a3) listscroll_popup_colour_pane_g2

0xb7e9,	// (0x0003c5ba) listscroll_popup_colour_pane_g3_ParamLimits

0xb7e9,	// (0x0003c5ba) listscroll_popup_colour_pane_g3

0xb7f9,	// (0x0003c5ca) listscroll_popup_colour_pane_g4_ParamLimits

0xb7f9,	// (0x0003c5ca) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00040344) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00040344) listscroll_popup_colour_pane_g

0x3264,	// (0x00034035) scroll_pane_cp6_ParamLimits

0x3264,	// (0x00034035) scroll_pane_cp6

0xb809,	// (0x0003c5da) cell_large_graphic_colour_popup_pane_ParamLimits

0xb809,	// (0x0003c5da) cell_large_graphic_colour_popup_pane

0x3295,	// (0x00034066) cell_large_graphic_colour_none_popup_pane_t1

0x2bf4,	// (0x000339c5) grid_highlight_pane_cp5

0x32a4,	// (0x00034075) cell_large_graphic_colour_popup_pane_g1

0x32ac,	// (0x0003407d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004034d) cell_large_graphic_colour_popup_pane_g

0x32b4,	// (0x00034085) cell_large_graphic_colour_popup_pane_g2_copy1

0x32bd,	// (0x0003408e) grid_highlight_pane_cp4

0x32c5,	// (0x00034096) bg_popup_window_pane_cp8_ParamLimits

0x32c5,	// (0x00034096) bg_popup_window_pane_cp8

0x32e0,	// (0x000340b1) popup_snote_single_text_window_g1_ParamLimits

0x32e0,	// (0x000340b1) popup_snote_single_text_window_g1

0x32f2,	// (0x000340c3) popup_snote_single_text_window_t1_ParamLimits

0x32f2,	// (0x000340c3) popup_snote_single_text_window_t1

0x3305,	// (0x000340d6) popup_snote_single_text_window_t2_ParamLimits

0x3305,	// (0x000340d6) popup_snote_single_text_window_t2

0x3318,	// (0x000340e9) popup_snote_single_text_window_t3_ParamLimits

0x3318,	// (0x000340e9) popup_snote_single_text_window_t3

0x3351,	// (0x00034122) popup_snote_single_text_window_t4_ParamLimits

0x3351,	// (0x00034122) popup_snote_single_text_window_t4

0x3385,	// (0x00034156) popup_snote_single_text_window_t5_ParamLimits

0x3385,	// (0x00034156) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00040352) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00040352) popup_snote_single_text_window_t

0x33b4,	// (0x00034185) bg_popup_window_pane_cp9_ParamLimits

0x33b4,	// (0x00034185) bg_popup_window_pane_cp9

0x32e0,	// (0x000340b1) popup_snote_single_graphic_window_g1_ParamLimits

0x32e0,	// (0x000340b1) popup_snote_single_graphic_window_g1

0x33c2,	// (0x00034193) popup_snote_single_graphic_window_g2_ParamLimits

0x33c2,	// (0x00034193) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004035d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004035d) popup_snote_single_graphic_window_g

0x33ce,	// (0x0003419f) popup_snote_single_graphic_window_t1_ParamLimits

0x33ce,	// (0x0003419f) popup_snote_single_graphic_window_t1

0x33e1,	// (0x000341b2) popup_snote_single_graphic_window_t2_ParamLimits

0x33e1,	// (0x000341b2) popup_snote_single_graphic_window_t2

0x33f4,	// (0x000341c5) popup_snote_single_graphic_window_t3_ParamLimits

0x33f4,	// (0x000341c5) popup_snote_single_graphic_window_t3

0x342d,	// (0x000341fe) popup_snote_single_graphic_window_t4_ParamLimits

0x342d,	// (0x000341fe) popup_snote_single_graphic_window_t4

0x3461,	// (0x00034232) popup_snote_single_graphic_window_t5_ParamLimits

0x3461,	// (0x00034232) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00040362) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00040362) popup_snote_single_graphic_window_t

0x647b,	// (0x0003724c) grid_graphic_popup_pane_ParamLimits

0x647b,	// (0x0003724c) grid_graphic_popup_pane

0x64a5,	// (0x00037276) listscroll_popup_graphic_pane_g1_ParamLimits

0x64a5,	// (0x00037276) listscroll_popup_graphic_pane_g1

0xdbe2,	// (0x0003e9b3) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbe2,	// (0x0003e9b3) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00040757) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00040757) listscroll_popup_graphic_pane_g

0x64cd,	// (0x0003729e) scroll_pane_cp5

0xdb9f,	// (0x0003e970) cell_graphic_popup_pane_ParamLimits

0xdb9f,	// (0x0003e970) cell_graphic_popup_pane

0x63ed,	// (0x000371be) cell_graphic_popup_pane_g1

0x63f5,	// (0x000371c6) cell_graphic_popup_pane_g2

0x32b4,	// (0x00034085) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00040750) cell_graphic_popup_pane_g

0xdb91,	// (0x0003e962) cell_graphic_popup_pane_t2

0x32bd,	// (0x0003408e) grid_highlight_pane_cp3

0x34a2,	// (0x00034273) list_gen_pane_ParamLimits

0x34a2,	// (0x00034273) list_gen_pane

0x34d4,	// (0x000342a5) scroll_pane

0xdb48,	// (0x0003e919) bg_list_pane_g1_ParamLimits

0xdb48,	// (0x0003e919) bg_list_pane_g1

0x6362,	// (0x00037133) bg_list_pane_g2_ParamLimits

0x6362,	// (0x00037133) bg_list_pane_g2

0x6377,	// (0x00037148) bg_list_pane_g3_ParamLimits

0x6377,	// (0x00037148) bg_list_pane_g3

0x638b,	// (0x0003715c) bg_list_pane_g4_ParamLimits

0x638b,	// (0x0003715c) bg_list_pane_g4

0xdb65,	// (0x0003e936) bg_list_pane_g5_ParamLimits

0xdb65,	// (0x0003e936) bg_list_pane_g5

0x0004,

0xf974,	// (0x00040745) bg_list_pane_g_ParamLimits

0xf974,	// (0x00040745) bg_list_pane_g

0xdaff,	// (0x0003e8d0) list_double2_graphic_large_graphic_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double2_graphic_large_graphic_pane

0xdaff,	// (0x0003e8d0) list_double2_graphic_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double2_graphic_pane

0xdaff,	// (0x0003e8d0) list_double2_large_graphic_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double2_large_graphic_pane

0xdaff,	// (0x0003e8d0) list_double2_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double2_pane

0xdaff,	// (0x0003e8d0) list_double_graphic_heading_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double_graphic_heading_pane

0xdaff,	// (0x0003e8d0) list_double_graphic_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double_graphic_pane

0xdaff,	// (0x0003e8d0) list_double_heading_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double_heading_pane

0xdaff,	// (0x0003e8d0) list_double_large_graphic_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double_large_graphic_pane

0xdaff,	// (0x0003e8d0) list_double_number_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double_number_pane

0xdaff,	// (0x0003e8d0) list_double_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double_pane

0xdaff,	// (0x0003e8d0) list_double_time_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_double_time_pane

0xdaff,	// (0x0003e8d0) list_setting_number_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_setting_number_pane

0xdaff,	// (0x0003e8d0) list_setting_pane_ParamLimits

0xdaff,	// (0x0003e8d0) list_setting_pane

0xc737,	// (0x0003d508) list_single_2graphic_pane_ParamLimits

0xc737,	// (0x0003d508) list_single_2graphic_pane

0xc737,	// (0x0003d508) list_single_graphic_heading_pane_ParamLimits

0xc737,	// (0x0003d508) list_single_graphic_heading_pane

0xc737,	// (0x0003d508) list_single_graphic_pane_ParamLimits

0xc737,	// (0x0003d508) list_single_graphic_pane

0xc737,	// (0x0003d508) list_single_heading_pane_ParamLimits

0xc737,	// (0x0003d508) list_single_heading_pane

0xdb35,	// (0x0003e906) list_single_large_graphic_pane_ParamLimits

0xdb35,	// (0x0003e906) list_single_large_graphic_pane

0xc737,	// (0x0003d508) list_single_number_heading_pane_ParamLimits

0xc737,	// (0x0003d508) list_single_number_heading_pane

0xc737,	// (0x0003d508) list_single_number_pane_ParamLimits

0xc737,	// (0x0003d508) list_single_number_pane

0xc737,	// (0x0003d508) list_single_pane_ParamLimits

0xc737,	// (0x0003d508) list_single_pane

0x2bf4,	// (0x000339c5) list_highlight_pane_cp1

0x10bc,	// (0x00031e8d) list_single_pane_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_single_pane_g1

0x10c8,	// (0x00031e99) list_single_pane_g2_ParamLimits

0x10c8,	// (0x00031e99) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00040374) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00040374) list_single_pane_g

0x175d,	// (0x0003252e) list_single_pane_t1_ParamLimits

0x175d,	// (0x0003252e) list_single_pane_t1

0x10bc,	// (0x00031e8d) list_single_number_pane_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_single_number_pane_g1

0x10c8,	// (0x00031e99) list_single_number_pane_g2_ParamLimits

0x10c8,	// (0x00031e99) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00040374) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00040374) list_single_number_pane_g

0x1051,	// (0x00031e22) list_single_number_pane_t1_ParamLimits

0x1051,	// (0x00031e22) list_single_number_pane_t1

0xc6f9,	// (0x0003d4ca) list_single_number_pane_t2_ParamLimits

0xc6f9,	// (0x0003d4ca) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00040706) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00040706) list_single_number_pane_t

0xb832,	// (0x0003c603) list_single_graphic_pane_g1_ParamLimits

0xb832,	// (0x0003c603) list_single_graphic_pane_g1

0x10bc,	// (0x00031e8d) list_single_graphic_pane_g2_ParamLimits

0x10bc,	// (0x00031e8d) list_single_graphic_pane_g2

0x10c8,	// (0x00031e99) list_single_graphic_pane_g3_ParamLimits

0x10c8,	// (0x00031e99) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004036d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004036d) list_single_graphic_pane_g

0xb83e,	// (0x0003c60f) list_single_graphic_pane_t1_ParamLimits

0xb83e,	// (0x0003c60f) list_single_graphic_pane_t1

0x10bc,	// (0x00031e8d) list_single_heading_pane_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_single_heading_pane_g1

0x10c8,	// (0x00031e99) list_single_heading_pane_g2_ParamLimits

0x10c8,	// (0x00031e99) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00040374) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00040374) list_single_heading_pane_g

0xb854,	// (0x0003c625) list_single_heading_pane_t1_ParamLimits

0xb854,	// (0x0003c625) list_single_heading_pane_t1

0xb86a,	// (0x0003c63b) list_single_heading_pane_t2_ParamLimits

0xb86a,	// (0x0003c63b) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00040379) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00040379) list_single_heading_pane_t

0x10bc,	// (0x00031e8d) list_single_number_heading_pane_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_single_number_heading_pane_g1

0x10c8,	// (0x00031e99) list_single_number_heading_pane_g2_ParamLimits

0x10c8,	// (0x00031e99) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00040374) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00040374) list_single_number_heading_pane_g

0xb854,	// (0x0003c625) list_single_number_heading_pane_t1_ParamLimits

0xb854,	// (0x0003c625) list_single_number_heading_pane_t1

0x1711,	// (0x000324e2) list_single_number_heading_pane_t2_ParamLimits

0x1711,	// (0x000324e2) list_single_number_heading_pane_t2

0x1723,	// (0x000324f4) list_single_number_heading_pane_t3_ParamLimits

0x1723,	// (0x000324f4) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0004037e) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0004037e) list_single_number_heading_pane_t

0x102d,	// (0x00031dfe) list_single_graphic_heading_pane_g1_ParamLimits

0x102d,	// (0x00031dfe) list_single_graphic_heading_pane_g1

0xb87c,	// (0x0003c64d) list_single_graphic_heading_pane_g4_ParamLimits

0xb87c,	// (0x0003c64d) list_single_graphic_heading_pane_g4

0x10c8,	// (0x00031e99) list_single_graphic_heading_pane_g5_ParamLimits

0x10c8,	// (0x00031e99) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00040385) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00040385) list_single_graphic_heading_pane_g

0xb854,	// (0x0003c625) list_single_graphic_heading_pane_t1_ParamLimits

0xb854,	// (0x0003c625) list_single_graphic_heading_pane_t1

0xb88d,	// (0x0003c65e) list_single_graphic_heading_pane_t2_ParamLimits

0xb88d,	// (0x0003c65e) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0004038c) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0004038c) list_single_graphic_heading_pane_t

0x1773,	// (0x00032544) list_single_large_graphic_pane_g1_ParamLimits

0x1773,	// (0x00032544) list_single_large_graphic_pane_g1

0xeea9,	// (0x0003fc7a) list_single_large_graphic_pane_g2_ParamLimits

0xeea9,	// (0x0003fc7a) list_single_large_graphic_pane_g2

0xeeb5,	// (0x0003fc86) list_single_large_graphic_pane_g3_ParamLimits

0xeeb5,	// (0x0003fc86) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00040391) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00040391) list_single_large_graphic_pane_g

0x5350,	// (0x00036121) wait_border_pane_g2_copy1

0xb89f,	// (0x0003c670) list_single_large_graphic_pane_g4_cp2

0x177f,	// (0x00032550) list_single_large_graphic_pane_t1_ParamLimits

0x177f,	// (0x00032550) list_single_large_graphic_pane_t1

0xb8a7,	// (0x0003c678) list_double_pane_g1_ParamLimits

0xb8a7,	// (0x0003c678) list_double_pane_g1

0xb8b3,	// (0x0003c684) list_double_pane_g2_ParamLimits

0xb8b3,	// (0x0003c684) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00040398) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00040398) list_double_pane_g

0xb8bf,	// (0x0003c690) list_double_pane_t1_ParamLimits

0xb8bf,	// (0x0003c690) list_double_pane_t1

0xb8d5,	// (0x0003c6a6) list_double_pane_t2_ParamLimits

0xb8d5,	// (0x0003c6a6) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0004039d) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0004039d) list_double_pane_t

0xb8e7,	// (0x0003c6b8) list_double2_pane_g1_ParamLimits

0xb8e7,	// (0x0003c6b8) list_double2_pane_g1

0xb8f8,	// (0x0003c6c9) list_double2_pane_g2_ParamLimits

0xb8f8,	// (0x0003c6c9) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000403a2) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000403a2) list_double2_pane_g

0xb904,	// (0x0003c6d5) list_double2_pane_t1_ParamLimits

0xb904,	// (0x0003c6d5) list_double2_pane_t1

0xb91a,	// (0x0003c6eb) list_double2_pane_t2_ParamLimits

0xb91a,	// (0x0003c6eb) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000403a7) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000403a7) list_double2_pane_t

0xb8a7,	// (0x0003c678) list_double_number_pane_g1_ParamLimits

0xb8a7,	// (0x0003c678) list_double_number_pane_g1

0xb8b3,	// (0x0003c684) list_double_number_pane_g2_ParamLimits

0xb8b3,	// (0x0003c684) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00040398) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00040398) list_double_number_pane_g

0xb92c,	// (0x0003c6fd) list_double_number_pane_t1_ParamLimits

0xb92c,	// (0x0003c6fd) list_double_number_pane_t1

0xb93e,	// (0x0003c70f) list_double_number_pane_t2_ParamLimits

0xb93e,	// (0x0003c70f) list_double_number_pane_t2

0xb954,	// (0x0003c725) list_double_number_pane_t3_ParamLimits

0xb954,	// (0x0003c725) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000403ac) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000403ac) list_double_number_pane_t

0xb966,	// (0x0003c737) list_double_graphic_pane_g1_ParamLimits

0xb966,	// (0x0003c737) list_double_graphic_pane_g1

0xb972,	// (0x0003c743) list_double_graphic_pane_g2_ParamLimits

0xb972,	// (0x0003c743) list_double_graphic_pane_g2

0xb981,	// (0x0003c752) list_double_graphic_pane_g3_ParamLimits

0xb981,	// (0x0003c752) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000403b3) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000403b3) list_double_graphic_pane_g

0xb999,	// (0x0003c76a) list_double_graphic_pane_t1_ParamLimits

0xb999,	// (0x0003c76a) list_double_graphic_pane_t1

0xb9af,	// (0x0003c780) list_double_graphic_pane_t2_ParamLimits

0xb9af,	// (0x0003c780) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x000403bc) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x000403bc) list_double_graphic_pane_t

0xb9c1,	// (0x0003c792) list_double2_graphic_pane_g1_ParamLimits

0xb9c1,	// (0x0003c792) list_double2_graphic_pane_g1

0xb9cd,	// (0x0003c79e) list_double2_graphic_pane_g2_ParamLimits

0xb9cd,	// (0x0003c79e) list_double2_graphic_pane_g2

0xb8f8,	// (0x0003c6c9) list_double2_graphic_pane_g3_ParamLimits

0xb8f8,	// (0x0003c6c9) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x000403c1) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x000403c1) list_double2_graphic_pane_g

0xb9d9,	// (0x0003c7aa) list_double2_graphic_pane_t1_ParamLimits

0xb9d9,	// (0x0003c7aa) list_double2_graphic_pane_t1

0xb9ef,	// (0x0003c7c0) list_double2_graphic_pane_t2_ParamLimits

0xb9ef,	// (0x0003c7c0) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x000403c8) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x000403c8) list_double2_graphic_pane_t

0xba01,	// (0x0003c7d2) list_double_large_graphic_pane_g1_ParamLimits

0xba01,	// (0x0003c7d2) list_double_large_graphic_pane_g1

0xba20,	// (0x0003c7f1) list_double_large_graphic_pane_g2_ParamLimits

0xba20,	// (0x0003c7f1) list_double_large_graphic_pane_g2

0xb8b3,	// (0x0003c684) list_double_large_graphic_pane_g3_ParamLimits

0xb8b3,	// (0x0003c684) list_double_large_graphic_pane_g3

0xba31,	// (0x0003c802) list_double_large_graphic_pane_g4_ParamLimits

0xba31,	// (0x0003c802) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x000403cd) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x000403cd) list_double_large_graphic_pane_g

0xba44,	// (0x0003c815) list_double_large_graphic_pane_t1_ParamLimits

0xba44,	// (0x0003c815) list_double_large_graphic_pane_t1

0xba5d,	// (0x0003c82e) list_double_large_graphic_pane_t2_ParamLimits

0xba5d,	// (0x0003c82e) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x000403d8) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x000403d8) list_double_large_graphic_pane_t

0xba6f,	// (0x0003c840) list_double2_large_graphic_pane_g1_ParamLimits

0xba6f,	// (0x0003c840) list_double2_large_graphic_pane_g1

0xb8e7,	// (0x0003c6b8) list_double2_large_graphic_pane_g2_ParamLimits

0xb8e7,	// (0x0003c6b8) list_double2_large_graphic_pane_g2

0xb8f8,	// (0x0003c6c9) list_double2_large_graphic_pane_g3_ParamLimits

0xb8f8,	// (0x0003c6c9) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x000403dd) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x000403dd) list_double2_large_graphic_pane_g

0xba7b,	// (0x0003c84c) list_double2_large_graphic_pane_t1_ParamLimits

0xba7b,	// (0x0003c84c) list_double2_large_graphic_pane_t1

0xba91,	// (0x0003c862) list_double2_large_graphic_pane_t2_ParamLimits

0xba91,	// (0x0003c862) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x000403e4) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x000403e4) list_double2_large_graphic_pane_t

0xbaa3,	// (0x0003c874) list_double_heading_pane_g1_ParamLimits

0xbaa3,	// (0x0003c874) list_double_heading_pane_g1

0xeed6,	// (0x0003fca7) list_double_heading_pane_g2_ParamLimits

0xeed6,	// (0x0003fca7) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x000403e9) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x000403e9) list_double_heading_pane_g

0xbab4,	// (0x0003c885) list_double_heading_pane_t1_ParamLimits

0xbab4,	// (0x0003c885) list_double_heading_pane_t1

0xb91a,	// (0x0003c6eb) list_double_heading_pane_t2_ParamLimits

0xb91a,	// (0x0003c6eb) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x000403ee) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x000403ee) list_double_heading_pane_t

0xb9c1,	// (0x0003c792) list_double_graphic_heading_pane_g1_ParamLimits

0xb9c1,	// (0x0003c792) list_double_graphic_heading_pane_g1

0xbaa3,	// (0x0003c874) list_double_graphic_heading_pane_g2_ParamLimits

0xbaa3,	// (0x0003c874) list_double_graphic_heading_pane_g2

0xeed6,	// (0x0003fca7) list_double_graphic_heading_pane_g3_ParamLimits

0xeed6,	// (0x0003fca7) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x000403f3) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000403f3) list_double_graphic_heading_pane_g

0xbaca,	// (0x0003c89b) list_double_graphic_heading_pane_t1_ParamLimits

0xbaca,	// (0x0003c89b) list_double_graphic_heading_pane_t1

0xb9ef,	// (0x0003c7c0) list_double_graphic_heading_pane_t2_ParamLimits

0xb9ef,	// (0x0003c7c0) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000403fa) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000403fa) list_double_graphic_heading_pane_t

0xba20,	// (0x0003c7f1) list_double_time_pane_g1_ParamLimits

0xba20,	// (0x0003c7f1) list_double_time_pane_g1

0xb8b3,	// (0x0003c684) list_double_time_pane_g2_ParamLimits

0xb8b3,	// (0x0003c684) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x000403ff) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x000403ff) list_double_time_pane_g

0xbae0,	// (0x0003c8b1) list_double_time_pane_t1_ParamLimits

0xbae0,	// (0x0003c8b1) list_double_time_pane_t1

0xbaf6,	// (0x0003c8c7) list_double_time_pane_t2_ParamLimits

0xbaf6,	// (0x0003c8c7) list_double_time_pane_t2

0xbb08,	// (0x0003c8d9) list_double_time_pane_t3_ParamLimits

0xbb08,	// (0x0003c8d9) list_double_time_pane_t3

0xbb1a,	// (0x0003c8eb) list_double_time_pane_t4_ParamLimits

0xbb1a,	// (0x0003c8eb) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00040404) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00040404) list_double_time_pane_t

0xb9cd,	// (0x0003c79e) list_setting_pane_g1_ParamLimits

0xb9cd,	// (0x0003c79e) list_setting_pane_g1

0xb8f8,	// (0x0003c6c9) list_setting_pane_g2_ParamLimits

0xb8f8,	// (0x0003c6c9) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0004040d) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0004040d) list_setting_pane_g

0xbb2c,	// (0x0003c8fd) list_setting_pane_t1_ParamLimits

0xbb2c,	// (0x0003c8fd) list_setting_pane_t1

0xbb46,	// (0x0003c917) list_setting_pane_t2_ParamLimits

0xbb46,	// (0x0003c917) list_setting_pane_t2

0x0002,

0xf641,	// (0x00040412) list_setting_pane_t_ParamLimits

0xf641,	// (0x00040412) list_setting_pane_t

0xbb85,	// (0x0003c956) set_value_pane_cp_ParamLimits

0xbb85,	// (0x0003c956) set_value_pane_cp

0xbb91,	// (0x0003c962) list_setting_number_pane_g1_ParamLimits

0xbb91,	// (0x0003c962) list_setting_number_pane_g1

0xbb9d,	// (0x0003c96e) list_setting_number_pane_g2_ParamLimits

0xbb9d,	// (0x0003c96e) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00040419) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00040419) list_setting_number_pane_g

0xbba9,	// (0x0003c97a) list_setting_number_pane_t1_ParamLimits

0xbba9,	// (0x0003c97a) list_setting_number_pane_t1

0xbbc2,	// (0x0003c993) list_setting_number_pane_t2_ParamLimits

0xbbc2,	// (0x0003c993) list_setting_number_pane_t2

0xbbdc,	// (0x0003c9ad) list_setting_number_pane_t3_ParamLimits

0xbbdc,	// (0x0003c9ad) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0004041e) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0004041e) list_setting_number_pane_t

0xbb85,	// (0x0003c956) set_value_pane_ParamLimits

0xbb85,	// (0x0003c956) set_value_pane

0x3508,	// (0x000342d9) bg_set_opt_pane_ParamLimits

0x3508,	// (0x000342d9) bg_set_opt_pane

0x0148,	// (0x00030f19) set_value_pane_t1

0x3529,	// (0x000342fa) slider_set_pane_cp3

0x3532,	// (0x00034303) volume_small_pane_cp

0x353b,	// (0x0003430c) list_form_gen_pane

0x3544,	// (0x00034315) scroll_pane_cp8

0xbc1f,	// (0x0003c9f0) form_field_data_pane_ParamLimits

0xbc1f,	// (0x0003c9f0) form_field_data_pane

0xbc36,	// (0x0003ca07) form_field_data_wide_pane_ParamLimits

0xbc36,	// (0x0003ca07) form_field_data_wide_pane

0xbc56,	// (0x0003ca27) form_field_popup_pane_ParamLimits

0xbc56,	// (0x0003ca27) form_field_popup_pane

0xbc76,	// (0x0003ca47) form_field_popup_wide_pane_ParamLimits

0xbc76,	// (0x0003ca47) form_field_popup_wide_pane

0x01dc,	// (0x00030fad) form_field_slider_pane_ParamLimits

0x01dc,	// (0x00030fad) form_field_slider_pane

0x01ef,	// (0x00030fc0) form_field_slider_wide_pane_ParamLimits

0x01ef,	// (0x00030fc0) form_field_slider_wide_pane

0x3555,	// (0x00034326) data_form_pane

0xbc97,	// (0x0003ca68) form_field_data_pane_t1

0x3561,	// (0x00034332) input_focus_pane

0x0224,	// (0x00030ff5) data_form_wide_pane

0x0241,	// (0x00031012) form_field_data_wide_pane_t1

0x32d2,	// (0x000340a3) input_focus_pane_cp6

0xbcb1,	// (0x0003ca82) form_field_popup_pane_t1

0x3561,	// (0x00034332) input_focus_pane_cp7

0x358f,	// (0x00034360) list_form_pane

0x0283,	// (0x00031054) form_field_popup_wide_pane_t1

0x3561,	// (0x00034332) input_focus_pane_cp8

0x359b,	// (0x0003436c) list_form_wide_pane

0xbcd3,	// (0x0003caa4) form_field_slider_pane_t1_ParamLimits

0xbcd3,	// (0x0003caa4) form_field_slider_pane_t1

0xbceb,	// (0x0003cabc) form_field_slider_pane_t2_ParamLimits

0xbceb,	// (0x0003cabc) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0004042e) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0004042e) form_field_slider_pane_t

0x2f4f,	// (0x00033d20) input_focus_pane_cp9_ParamLimits

0x2f4f,	// (0x00033d20) input_focus_pane_cp9

0xbd00,	// (0x0003cad1) slider_cont_pane_ParamLimits

0xbd00,	// (0x0003cad1) slider_cont_pane

0x35a7,	// (0x00034378) form_field_slider_wide_pane_t1_ParamLimits

0x35a7,	// (0x00034378) form_field_slider_wide_pane_t1

0x02df,	// (0x000310b0) form_field_slider_wide_pane_t2_ParamLimits

0x02df,	// (0x000310b0) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00040433) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00040433) form_field_slider_wide_pane_t

0x2f4f,	// (0x00033d20) input_focus_pane_cp10_ParamLimits

0x2f4f,	// (0x00033d20) input_focus_pane_cp10

0xbd14,	// (0x0003cae5) slider_cont_pane_cp1_ParamLimits

0xbd14,	// (0x0003cae5) slider_cont_pane_cp1

0xbd28,	// (0x0003caf9) slider_form_pane_cp

0x35b9,	// (0x0003438a) input_focus_pane_g1

0x35c1,	// (0x00034392) input_focus_pane_g2

0x35c9,	// (0x0003439a) input_focus_pane_g3

0x35d1,	// (0x000343a2) input_focus_pane_g4

0x35d9,	// (0x000343aa) input_focus_pane_g5

0x35e1,	// (0x000343b2) input_focus_pane_g6

0x35e9,	// (0x000343ba) input_focus_pane_g7

0x35f1,	// (0x000343c2) input_focus_pane_g8

0x35f9,	// (0x000343ca) input_focus_pane_g9

0xdf27,	// (0x0003ecf8) input_focus_pane_g10

0x0009,

0xf667,	// (0x00040438) input_focus_pane_g

0x5359,	// (0x0003612a) wait_border_pane_g3_copy1

0xbd30,	// (0x0003cb01) data_form_pane_t1

0xdf27,	// (0x0003ecf8) wait_anim_pane_g1_copy1

0xc70b,	// (0x0003d4dc) data_form_wide_pane_t1

0xbd4a,	// (0x0003cb1b) list_form_graphic_pane_cp_ParamLimits

0xbd4a,	// (0x0003cb1b) list_form_graphic_pane_cp

0x6279,	// (0x0003704a) slider_form_pane_g1

0x6282,	// (0x00037053) slider_form_pane_g2

0x0006,

0xf965,	// (0x00040736) slider_form_pane_g

0xbd5c,	// (0x0003cb2d) list_form_graphic_pane_ParamLimits

0xbd5c,	// (0x0003cb2d) list_form_graphic_pane

0x035d,	// (0x0003112e) list_form_graphic_pane_g1

0x0365,	// (0x00031136) list_form_graphic_pane_t1_ParamLimits

0x0365,	// (0x00031136) list_form_graphic_pane_t1

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp5_ParamLimits

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp5

0xbd6f,	// (0x0003cb40) find_pane_g1

0x3601,	// (0x000343d2) input_find_pane

0xbd78,	// (0x0003cb49) input_find_pane_g1_ParamLimits

0xbd78,	// (0x0003cb49) input_find_pane_g1

0xbd84,	// (0x0003cb55) input_find_pane_t1_ParamLimits

0xbd84,	// (0x0003cb55) input_find_pane_t1

0xbd99,	// (0x0003cb6a) input_find_pane_t2_ParamLimits

0xbd99,	// (0x0003cb6a) input_find_pane_t2

0x0001,

0xf67c,	// (0x0004044d) input_find_pane_t_ParamLimits

0xf67c,	// (0x0004044d) input_find_pane_t

0x360a,	// (0x000343db) input_focus_pane_cp5_ParamLimits

0x360a,	// (0x000343db) input_focus_pane_cp5

0x3629,	// (0x000343fa) bg_popup_window_pane_cp2_ParamLimits

0x3629,	// (0x000343fa) bg_popup_window_pane_cp2

0x3636,	// (0x00034407) listscroll_menu_pane_ParamLimits

0x3636,	// (0x00034407) listscroll_menu_pane

0xd003,	// (0x0003ddd4) popup_submenu_window_ParamLimits

0xd003,	// (0x0003ddd4) popup_submenu_window

0x366e,	// (0x0003443f) find_popup_pane_g1

0x3676,	// (0x00034447) input_popup_find_pane_cp

0x3680,	// (0x00034451) input_focus_pane_cp4_ParamLimits

0x3680,	// (0x00034451) input_focus_pane_cp4

0x369a,	// (0x0003446b) input_popup_find_pane_t1_ParamLimits

0x369a,	// (0x0003446b) input_popup_find_pane_t1

0x2bf4,	// (0x000339c5) bg_popup_sub_pane_cp

0x36c8,	// (0x00034499) listscroll_popup_sub_pane

0x36d0,	// (0x000344a1) list_submenu_pane_ParamLimits

0x36d0,	// (0x000344a1) list_submenu_pane

0x36e1,	// (0x000344b2) scroll_pane_cp4

0x36e9,	// (0x000344ba) list_single_popup_submenu_pane_ParamLimits

0x36e9,	// (0x000344ba) list_single_popup_submenu_pane

0x36fd,	// (0x000344ce) list_single_popup_submenu_pane_g1

0x3705,	// (0x000344d6) list_single_popup_submenu_pane_t1_ParamLimits

0x3705,	// (0x000344d6) list_single_popup_submenu_pane_t1

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp1_ParamLimits

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp1

0x371a,	// (0x000344eb) tabs_2_active_pane_g1

0xd03d,	// (0x0003de0e) tabs_2_active_pane_t1

0x2f4f,	// (0x00033d20) bg_passive_tab_pane_cp1_ParamLimits

0x2f4f,	// (0x00033d20) bg_passive_tab_pane_cp1

0x371a,	// (0x000344eb) tabs_2_passive_pane_g1

0xd03d,	// (0x0003de0e) tabs_2_passive_pane_t1

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp4

0xd04f,	// (0x0003de20) tabs_2_long_active_pane_t1

0x480a,	// (0x000355db) bg_passive_tab_pane_cp4

0x1094,	// (0x00031e65) list_single_midp_graphic_pane_g4_ParamLimits

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp5

0xd062,	// (0x0003de33) tabs_3_long_active_pane_t1

0x480a,	// (0x000355db) bg_passive_tab_pane_cp5

0x1094,	// (0x00031e65) list_single_midp_graphic_pane_g4

0x2cd4,	// (0x00033aa5) bg_popup_window_pane_cp13_ParamLimits

0x2cd4,	// (0x00033aa5) bg_popup_window_pane_cp13

0x377c,	// (0x0003454d) listscroll_popup_fast_pane_ParamLimits

0x377c,	// (0x0003454d) listscroll_popup_fast_pane

0x378b,	// (0x0003455c) grid_popup_fast_pane_ParamLimits

0x378b,	// (0x0003455c) grid_popup_fast_pane

0x379d,	// (0x0003456e) scroll_pane_cp9_ParamLimits

0x379d,	// (0x0003456e) scroll_pane_cp9

0x7bc4,	// (0x00038995) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7bc4,	// (0x00038995) list_single_graphic_hl_pane_t1_cp2

0x37c1,	// (0x00034592) input_focus_pane_cp20_ParamLimits

0x37c1,	// (0x00034592) input_focus_pane_cp20

0x37cf,	// (0x000345a0) query_popup_data_pane_t1_ParamLimits

0x37cf,	// (0x000345a0) query_popup_data_pane_t1

0x37e2,	// (0x000345b3) query_popup_data_pane_t2_ParamLimits

0x37e2,	// (0x000345b3) query_popup_data_pane_t2

0x3b02,	// (0x000348d3) query_popup_data_pane_t3_ParamLimits

0x3b02,	// (0x000348d3) query_popup_data_pane_t3

0x3b43,	// (0x00034914) query_popup_data_pane_t4_ParamLimits

0x3b43,	// (0x00034914) query_popup_data_pane_t4

0x3b7f,	// (0x00034950) query_popup_data_pane_t5_ParamLimits

0x3b7f,	// (0x00034950) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00040452) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00040452) query_popup_data_pane_t

0x35b9,	// (0x0003438a) bg_set_opt_pane_g1

0x35c1,	// (0x00034392) bg_set_opt_pane_g2

0x35c9,	// (0x0003439a) bg_set_opt_pane_g3

0x35d1,	// (0x000343a2) bg_set_opt_pane_g4

0x35d9,	// (0x000343aa) bg_set_opt_pane_g5

0x35e1,	// (0x000343b2) bg_set_opt_pane_g6

0x35e9,	// (0x000343ba) bg_set_opt_pane_g7

0x35f1,	// (0x000343c2) bg_set_opt_pane_g8

0x35f9,	// (0x000343ca) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0004045d) bg_set_opt_pane_g

0x06e0,	// (0x000314b1) control_top_pane_stacon_ParamLimits

0x06e0,	// (0x000314b1) control_top_pane_stacon

0x0733,	// (0x00031504) signal_pane_stacon_ParamLimits

0x0733,	// (0x00031504) signal_pane_stacon

0x4171,	// (0x00034f42) stacon_top_pane_g1_ParamLimits

0x4171,	// (0x00034f42) stacon_top_pane_g1

0x0758,	// (0x00031529) title_pane_stacon_ParamLimits

0x0758,	// (0x00031529) title_pane_stacon

0x0782,	// (0x00031553) uni_indicator_pane_stacon_ParamLimits

0x0782,	// (0x00031553) uni_indicator_pane_stacon

0x0797,	// (0x00031568) battery_pane_stacon_ParamLimits

0x0797,	// (0x00031568) battery_pane_stacon

0x07db,	// (0x000315ac) control_bottom_pane_stacon_ParamLimits

0x07db,	// (0x000315ac) control_bottom_pane_stacon

0x07fe,	// (0x000315cf) navi_pane_stacon_ParamLimits

0x07fe,	// (0x000315cf) navi_pane_stacon

0x4193,	// (0x00034f64) stacon_bottom_pane_g1_ParamLimits

0x4193,	// (0x00034f64) stacon_bottom_pane_g1

0x03b9,	// (0x0003118a) aid_levels_signal_lsc_ParamLimits

0x03b9,	// (0x0003118a) aid_levels_signal_lsc

0x03cf,	// (0x000311a0) signal_pane_stacon_g1_ParamLimits

0x03cf,	// (0x000311a0) signal_pane_stacon_g1

0x03e3,	// (0x000311b4) signal_pane_stacon_g2_ParamLimits

0x03e3,	// (0x000311b4) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00040470) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00040470) signal_pane_stacon_g

0x0418,	// (0x000311e9) title_pane_stacon_t1_ParamLimits

0x0418,	// (0x000311e9) title_pane_stacon_t1

0x3bc3,	// (0x00034994) uni_indicator_pane_stacon_g1

0x3bcd,	// (0x0003499e) uni_indicator_pane_stacon_g2

0x3bd7,	// (0x000349a8) uni_indicator_pane_stacon_g3

0x3be1,	// (0x000349b2) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0004047c) uni_indicator_pane_stacon_g

0x043d,	// (0x0003120e) control_top_pane_stacon_g1

0x0445,	// (0x00031216) control_top_pane_stacon_t1_ParamLimits

0x0445,	// (0x00031216) control_top_pane_stacon_t1

0x047c,	// (0x0003124d) aid_levels_battery_lsc_ParamLimits

0x047c,	// (0x0003124d) aid_levels_battery_lsc

0x0493,	// (0x00031264) battery_pane_stacon_g1_ParamLimits

0x0493,	// (0x00031264) battery_pane_stacon_g1

0x04a6,	// (0x00031277) battery_pane_stacon_g2_ParamLimits

0x04a6,	// (0x00031277) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x00040485) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x00040485) battery_pane_stacon_g

0x04e4,	// (0x000312b5) navi_icon_pane_stacon

0x04f8,	// (0x000312c9) navi_navi_pane_stacon

0x04e4,	// (0x000312b5) navi_text_pane_stacon

0x043d,	// (0x0003120e) control_bottom_pane_stacon_g1

0x050c,	// (0x000312dd) control_bottom_pane_stacon_t1_ParamLimits

0x050c,	// (0x000312dd) control_bottom_pane_stacon_t1

0xd074,	// (0x0003de45) grid_app_pane_ParamLimits

0xd074,	// (0x0003de45) grid_app_pane

0xd0ac,	// (0x0003de7d) scroll_pane_cp15_ParamLimits

0xd0ac,	// (0x0003de7d) scroll_pane_cp15

0xd0c1,	// (0x0003de92) cell_app_pane_ParamLimits

0xd0c1,	// (0x0003de92) cell_app_pane

0xd106,	// (0x0003ded7) cell_app_pane_g1_ParamLimits

0xd106,	// (0x0003ded7) cell_app_pane_g1

0x3c86,	// (0x00034a57) cell_app_pane_g2_ParamLimits

0x3c86,	// (0x00034a57) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0004048a) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0004048a) cell_app_pane_g

0xd12a,	// (0x0003defb) cell_app_pane_t1_ParamLimits

0xd12a,	// (0x0003defb) cell_app_pane_t1

0x3ca9,	// (0x00034a7a) grid_highlight_pane_ParamLimits

0x3ca9,	// (0x00034a7a) grid_highlight_pane

0x35b9,	// (0x0003438a) cell_highlight_pane_g1

0x35c1,	// (0x00034392) cell_highlight_pane_g2

0x35c9,	// (0x0003439a) cell_highlight_pane_g3

0x35d1,	// (0x000343a2) cell_highlight_pane_g4

0x35d9,	// (0x000343aa) cell_highlight_pane_g5

0x35e1,	// (0x000343b2) cell_highlight_pane_g6

0x35e9,	// (0x000343ba) cell_highlight_pane_g7

0x35f1,	// (0x000343c2) cell_highlight_pane_g8

0x35f9,	// (0x000343ca) cell_highlight_pane_g9

0xdf27,	// (0x0003ecf8) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x00040438) cell_highlight_pane_g

0x3cba,	// (0x00034a8b) bg_scroll_pane

0x0556,	// (0x00031327) scroll_handle_pane

0x3d01,	// (0x00034ad2) scroll_bg_pane_g1

0x3d16,	// (0x00034ae7) scroll_bg_pane_g2

0x3d2e,	// (0x00034aff) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0004048f) scroll_bg_pane_g

0x3d43,	// (0x00034b14) scroll_handle_focus_pane_ParamLimits

0x3d43,	// (0x00034b14) scroll_handle_focus_pane

0x3d01,	// (0x00034ad2) scroll_handle_pane_g1

0x3d50,	// (0x00034b21) scroll_handle_pane_g2

0x3d2e,	// (0x00034aff) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00040496) scroll_handle_pane_g

0x3680,	// (0x00034451) bg_popup_sub_pane_cp21_ParamLimits

0x3680,	// (0x00034451) bg_popup_sub_pane_cp21

0x3d64,	// (0x00034b35) popup_fep_japan_predictive_window_t1_ParamLimits

0x3d64,	// (0x00034b35) popup_fep_japan_predictive_window_t1

0x3d7e,	// (0x00034b4f) popup_fep_japan_predictive_window_t2_ParamLimits

0x3d7e,	// (0x00034b4f) popup_fep_japan_predictive_window_t2

0x3db1,	// (0x00034b82) popup_fep_japan_predictive_window_t3_ParamLimits

0x3db1,	// (0x00034b82) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0004049d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0004049d) popup_fep_japan_predictive_window_t

0x2bf4,	// (0x000339c5) bg_popup_sub_pane_cp23

0x3de8,	// (0x00034bb9) listscroll_japin_cand_pane

0x3df0,	// (0x00034bc1) popup_fep_japan_candidate_window_t1

0x3dfe,	// (0x00034bcf) candidate_pane_ParamLimits

0x3dfe,	// (0x00034bcf) candidate_pane

0x3e10,	// (0x00034be1) scroll_pane_cp30

0x3e18,	// (0x00034be9) list_single_popup_jap_candidate_pane_ParamLimits

0x3e18,	// (0x00034be9) list_single_popup_jap_candidate_pane

0x2bf4,	// (0x000339c5) list_highlight_pane_cp30

0x3e2d,	// (0x00034bfe) list_single_popup_jap_candidate_pane_t1

0x3e3c,	// (0x00034c0d) level_1_signal

0x3e4e,	// (0x00034c1f) level_2_signal

0x3e61,	// (0x00034c32) level_3_signal

0x3e74,	// (0x00034c45) level_4_signal

0x3e87,	// (0x00034c58) level_5_signal

0x3e9a,	// (0x00034c6b) level_6_signal

0x3ead,	// (0x00034c7e) level_7_signal

0x3e3c,	// (0x00034c0d) level_1_battery

0x3e4e,	// (0x00034c1f) level_2_battery

0x3e61,	// (0x00034c32) level_3_battery

0x3e74,	// (0x00034c45) level_4_battery

0x3e87,	// (0x00034c58) level_5_battery

0x3e9a,	// (0x00034c6b) level_6_battery

0x3ead,	// (0x00034c7e) level_7_battery

0x3ed8,	// (0x00034ca9) list_menu_pane_ParamLimits

0x3ed8,	// (0x00034ca9) list_menu_pane

0x3eee,	// (0x00034cbf) scroll_pane_cp25_ParamLimits

0x3eee,	// (0x00034cbf) scroll_pane_cp25

0x3f07,	// (0x00034cd8) list_double2_graphic_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double2_graphic_pane_cp2

0x3f07,	// (0x00034cd8) list_double2_large_graphic_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double2_large_graphic_pane_cp2

0x3f07,	// (0x00034cd8) list_double2_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double2_pane_cp2

0x3f07,	// (0x00034cd8) list_double_graphic_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double_graphic_pane_cp2

0x3f07,	// (0x00034cd8) list_double_large_graphic_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double_large_graphic_pane_cp2

0x3f07,	// (0x00034cd8) list_double_number_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double_number_pane_cp2

0x3f07,	// (0x00034cd8) list_double_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double_pane_cp2

0xd141,	// (0x0003df12) list_single_2graphic_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_2graphic_pane_cp2

0xd141,	// (0x0003df12) list_single_graphic_heading_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_graphic_heading_pane_cp2

0xd141,	// (0x0003df12) list_single_graphic_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_graphic_pane_cp2

0xd141,	// (0x0003df12) list_single_heading_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_heading_pane_cp2

0x3f44,	// (0x00034d15) list_single_large_graphic_pane_cp2_ParamLimits

0x3f44,	// (0x00034d15) list_single_large_graphic_pane_cp2

0xd141,	// (0x0003df12) list_single_number_heading_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_number_heading_pane_cp2

0xd141,	// (0x0003df12) list_single_number_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_number_pane_cp2

0xd141,	// (0x0003df12) list_single_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_pane_cp2

0x3fc0,	// (0x00034d91) bg_popup_sub_pane_cp22

0x0608,	// (0x000313d9) popup_side_volume_key_window_g1

0x0632,	// (0x00031403) popup_side_volume_key_window_t1

0x064e,	// (0x0003141f) volume_small_pane_cp1

0x2f4f,	// (0x00033d20) bg_popup_sub_pane_cp24_ParamLimits

0x2f4f,	// (0x00033d20) bg_popup_sub_pane_cp24

0x3fd6,	// (0x00034da7) fep_china_uni_candidate_pane_ParamLimits

0x3fd6,	// (0x00034da7) fep_china_uni_candidate_pane

0x3fea,	// (0x00034dbb) fep_china_uni_entry_pane

0x3ffa,	// (0x00034dcb) popup_fep_china_uni_window_g1

0x4016,	// (0x00034de7) fep_china_uni_entry_pane_g1

0x401e,	// (0x00034def) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x000404ce) fep_china_uni_entry_pane_g

0x4026,	// (0x00034df7) fep_entry_item_pane

0x4030,	// (0x00034e01) fep_candidate_item_pane

0x4038,	// (0x00034e09) fep_china_uni_candidate_pane_g1

0x4040,	// (0x00034e11) fep_china_uni_candidate_pane_g2

0x4048,	// (0x00034e19) fep_china_uni_candidate_pane_g3

0x4050,	// (0x00034e21) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x000404d3) fep_china_uni_candidate_pane_g

0xdf27,	// (0x0003ecf8) fep_entry_item_pane_g1

0x4058,	// (0x00034e29) fep_entry_item_pane_t1_ParamLimits

0x4058,	// (0x00034e29) fep_entry_item_pane_t1

0x406e,	// (0x00034e3f) fep_candidate_item_pane_t1_ParamLimits

0x406e,	// (0x00034e3f) fep_candidate_item_pane_t1

0x4083,	// (0x00034e54) fep_candidate_item_pane_t2_ParamLimits

0x4083,	// (0x00034e54) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x000404dc) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x000404dc) fep_candidate_item_pane_t

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp31_ParamLimits

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp31

0x4095,	// (0x00034e66) level_1_signal_lsc

0x409e,	// (0x00034e6f) level_2_signal_lsc

0x40a7,	// (0x00034e78) level_3_signal_lsc

0x40b0,	// (0x00034e81) level_4_signal_lsc

0x40b9,	// (0x00034e8a) level_5_signal_lsc

0x40c2,	// (0x00034e93) level_6_signal_lsc

0x40cb,	// (0x00034e9c) level_7_signal_lsc

0x40cb,	// (0x00034e9c) level_1_battery_lsc

0x40d4,	// (0x00034ea5) level_2_battery_lsc

0x40dd,	// (0x00034eae) level_3_battery_lsc

0x40e6,	// (0x00034eb7) level_4_battery_lsc

0x40ef,	// (0x00034ec0) level_5_battery_lsc

0x40f8,	// (0x00034ec9) level_6_battery_lsc

0x4095,	// (0x00034e66) level_7_battery_lsc

0x4101,	// (0x00034ed2) scroll_handle_focus_pane_g1

0x410a,	// (0x00034edb) scroll_handle_focus_pane_g2

0x4113,	// (0x00034ee4) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x000404e1) scroll_handle_focus_pane_g

0xbdae,	// (0x0003cb7f) list_single_2graphic_pane_g1_ParamLimits

0xbdae,	// (0x0003cb7f) list_single_2graphic_pane_g1

0xb87c,	// (0x0003c64d) list_single_2graphic_pane_g2_ParamLimits

0xb87c,	// (0x0003c64d) list_single_2graphic_pane_g2

0x10c8,	// (0x00031e99) list_single_2graphic_pane_g3_ParamLimits

0x10c8,	// (0x00031e99) list_single_2graphic_pane_g3

0xbdba,	// (0x0003cb8b) list_single_2graphic_pane_g4_ParamLimits

0xbdba,	// (0x0003cb8b) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x000404e8) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x000404e8) list_single_2graphic_pane_g

0xbdcb,	// (0x0003cb9c) list_single_2graphic_pane_t1_ParamLimits

0xbdcb,	// (0x0003cb9c) list_single_2graphic_pane_t1

0xbdf9,	// (0x0003cbca) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbdf9,	// (0x0003cbca) list_double2_graphic_large_graphic_pane_g1

0xb8e7,	// (0x0003c6b8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb8e7,	// (0x0003c6b8) list_double2_graphic_large_graphic_pane_g2

0xb8f8,	// (0x0003c6c9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb8f8,	// (0x0003c6c9) list_double2_graphic_large_graphic_pane_g3

0xbe0b,	// (0x0003cbdc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbe0b,	// (0x0003cbdc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x000404f1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x000404f1) list_double2_graphic_large_graphic_pane_g

0xbe17,	// (0x0003cbe8) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe17,	// (0x0003cbe8) list_double2_graphic_large_graphic_pane_t1

0xbe2d,	// (0x0003cbfe) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe2d,	// (0x0003cbfe) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x000404fa) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x000404fa) list_double2_graphic_large_graphic_pane_t

0x425e,	// (0x0003502f) popup_fast_swap_window_ParamLimits

0x425e,	// (0x0003502f) popup_fast_swap_window

0x427a,	// (0x0003504b) popup_side_volume_key_window

0x4296,	// (0x00035067) stacon_top_pane

0x42a0,	// (0x00035071) status_pane_ParamLimits

0x42a0,	// (0x00035071) status_pane

0xd1ce,	// (0x0003df9f) status_small_pane

0x2bf4,	// (0x000339c5) control_pane

0x2bf4,	// (0x000339c5) stacon_bottom_pane

0x3544,	// (0x00034315) scroll_pane_cp121

0x353b,	// (0x0003430c) set_content_pane

0x411c,	// (0x00034eed) bg_active_tab_pane_g1_cp1

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp1

0x412e,	// (0x00034eff) bg_active_tab_pane_g3_cp1

0x411c,	// (0x00034eed) bg_passive_tab_pane_g1_cp1

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp1

0x412e,	// (0x00034eff) bg_passive_tab_pane_g3_cp1

0x4137,	// (0x00034f08) bg_active_tab_pane_g1_cp2

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp2

0x4140,	// (0x00034f11) bg_active_tab_pane_g3_cp2

0x4137,	// (0x00034f08) bg_passive_tab_pane_g1_cp2

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp2

0x4140,	// (0x00034f11) bg_passive_tab_pane_g3_cp2

0x4149,	// (0x00034f1a) bg_active_tab_pane_g1_cp3

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp3

0x4152,	// (0x00034f23) bg_active_tab_pane_g3_cp3

0x4149,	// (0x00034f1a) bg_passive_tab_pane_g1_cp3

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp3

0x4152,	// (0x00034f23) bg_passive_tab_pane_g3_cp3

0x415b,	// (0x00034f2c) bg_active_tab_pane_g1_cp4

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp4

0x4166,	// (0x00034f37) bg_active_tab_pane_g3_cp4

0x415b,	// (0x00034f2c) bg_passive_tab_pane_g1_cp4

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp4

0x4166,	// (0x00034f37) bg_passive_tab_pane_g3_cp4

0x41af,	// (0x00034f80) bg_active_tab_pane_g1_cp5

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp5

0x41b8,	// (0x00034f89) bg_active_tab_pane_g3_cp5

0x41af,	// (0x00034f80) bg_passive_tab_pane_g1_cp5

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp5

0x41b8,	// (0x00034f89) bg_passive_tab_pane_g3_cp5

0x6899,	// (0x0003766a) list_set_graphic_pane_ParamLimits

0x6899,	// (0x0003766a) list_set_graphic_pane

0x2bf4,	// (0x000339c5) bg_set_opt_pane_cp4

0x41e1,	// (0x00034fb2) list_set_graphic_pane_g1_ParamLimits

0x41e1,	// (0x00034fb2) list_set_graphic_pane_g1

0x41ed,	// (0x00034fbe) list_set_graphic_pane_g2_ParamLimits

0x41ed,	// (0x00034fbe) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x000404ff) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x000404ff) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x00040876) volume_small_pane_cp_g

0x4211,	// (0x00034fe2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4211,	// (0x00034fe2) list_double2_large_graphic_pane_g1_cp2

0x421d,	// (0x00034fee) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x421d,	// (0x00034fee) list_double2_large_graphic_pane_g2_cp2

0x422e,	// (0x00034fff) list_double2_large_graphic_pane_g3_cp2

0x4236,	// (0x00035007) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4236,	// (0x00035007) list_double2_large_graphic_pane_t1_cp2

0x424c,	// (0x0003501d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x424c,	// (0x0003501d) list_double2_large_graphic_pane_t2_cp2

0x5e2c,	// (0x00036bfd) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e2c,	// (0x00036bfd) list_double_large_graphic_pane_g1_cp2

0x5e3d,	// (0x00036c0e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e3d,	// (0x00036c0e) list_double_large_graphic_pane_g2_cp2

0x43c7,	// (0x00035198) list_double_large_graphic_pane_g3_cp2

0x5e4e,	// (0x00036c1f) list_double_large_graphic_pane_g4_cp

0x5e56,	// (0x00036c27) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e56,	// (0x00036c27) list_double_large_graphic_pane_t1_cp2

0x5e6d,	// (0x00036c3e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e6d,	// (0x00036c3e) list_double_large_graphic_pane_t2_cp2

0x42b9,	// (0x0003508a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x42b9,	// (0x0003508a) list_double2_graphic_pane_g1_cp2

0x42c7,	// (0x00035098) list_double2_graphic_pane_g2_cp2_ParamLimits

0x42c7,	// (0x00035098) list_double2_graphic_pane_g2_cp2

0x42d8,	// (0x000350a9) list_double2_graphic_pane_g3_cp2

0x42e2,	// (0x000350b3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x42e2,	// (0x000350b3) list_double2_graphic_pane_t1_cp2

0x42f8,	// (0x000350c9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x42f8,	// (0x000350c9) list_double2_graphic_pane_t2_cp2

0x430a,	// (0x000350db) list_single_number_heading_pane_g1_cp2_ParamLimits

0x430a,	// (0x000350db) list_single_number_heading_pane_g1_cp2

0x4316,	// (0x000350e7) list_single_number_heading_pane_g2_cp2

0x431e,	// (0x000350ef) list_single_number_heading_pane_t1_cp2_ParamLimits

0x431e,	// (0x000350ef) list_single_number_heading_pane_t1_cp2

0x4334,	// (0x00035105) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4334,	// (0x00035105) list_single_number_heading_pane_t2_cp2

0x4346,	// (0x00035117) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4346,	// (0x00035117) list_single_number_heading_pane_t3_cp2

0x430a,	// (0x000350db) list_single_heading_pane_g1_cp2_ParamLimits

0x430a,	// (0x000350db) list_single_heading_pane_g1_cp2

0x4316,	// (0x000350e7) list_single_heading_pane_g2_cp2

0x431e,	// (0x000350ef) list_single_heading_pane_t1_cp2_ParamLimits

0x431e,	// (0x000350ef) list_single_heading_pane_t1_cp2

0x5c34,	// (0x00036a05) list_single_heading_pane_t2_cp2_ParamLimits

0x5c34,	// (0x00036a05) list_single_heading_pane_t2_cp2

0x5b7c,	// (0x0003694d) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b7c,	// (0x0003694d) list_double_graphic_pane_g1_cp2

0x5b88,	// (0x00036959) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b88,	// (0x00036959) list_double_graphic_pane_g2_cp2

0x5b97,	// (0x00036968) list_double_graphic_pane_g3_cp2

0x5b9f,	// (0x00036970) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b9f,	// (0x00036970) list_double_graphic_pane_t1_cp2

0x5bb5,	// (0x00036986) list_double_graphic_pane_t2_cp2_ParamLimits

0x5bb5,	// (0x00036986) list_double_graphic_pane_t2_cp2

0x43bb,	// (0x0003518c) list_double_number_pane_g1_cp2_ParamLimits

0x43bb,	// (0x0003518c) list_double_number_pane_g1_cp2

0x43c7,	// (0x00035198) list_double_number_pane_g2_cp2

0x5b40,	// (0x00036911) list_double_number_pane_t1_cp2_ParamLimits

0x5b40,	// (0x00036911) list_double_number_pane_t1_cp2

0x5b54,	// (0x00036925) list_double_number_pane_t2_cp2_ParamLimits

0x5b54,	// (0x00036925) list_double_number_pane_t2_cp2

0x5b6a,	// (0x0003693b) list_double_number_pane_t3_cp2_ParamLimits

0x5b6a,	// (0x0003693b) list_double_number_pane_t3_cp2

0x5a29,	// (0x000367fa) list_single_graphic_pane_g1_cp2_ParamLimits

0x5a29,	// (0x000367fa) list_single_graphic_pane_g1_cp2

0x441f,	// (0x000351f0) list_single_graphic_pane_g2_cp2_ParamLimits

0x441f,	// (0x000351f0) list_single_graphic_pane_g2_cp2

0x442b,	// (0x000351fc) list_single_graphic_pane_g3_cp2

0x59ff,	// (0x000367d0) list_single_graphic_pane_t1_cp2_ParamLimits

0x59ff,	// (0x000367d0) list_single_graphic_pane_t1_cp2

0x441f,	// (0x000351f0) list_single_number_pane_g1_cp2_ParamLimits

0x441f,	// (0x000351f0) list_single_number_pane_g1_cp2

0x442b,	// (0x000351fc) list_single_number_pane_g2_cp2

0x59ff,	// (0x000367d0) list_single_number_pane_t1_cp2_ParamLimits

0x59ff,	// (0x000367d0) list_single_number_pane_t1_cp2

0x5a15,	// (0x000367e6) list_single_number_pane_t2_cp2_ParamLimits

0x5a15,	// (0x000367e6) list_single_number_pane_t2_cp2

0x421d,	// (0x00034fee) list_double2_pane_g1_cp2_ParamLimits

0x421d,	// (0x00034fee) list_double2_pane_g1_cp2

0x422e,	// (0x00034fff) list_double2_pane_g2_cp2

0x4393,	// (0x00035164) list_double2_pane_t1_cp2_ParamLimits

0x4393,	// (0x00035164) list_double2_pane_t1_cp2

0x43a9,	// (0x0003517a) list_double2_pane_t2_cp2_ParamLimits

0x43a9,	// (0x0003517a) list_double2_pane_t2_cp2

0x43bb,	// (0x0003518c) list_double_pane_g1_cp2_ParamLimits

0x43bb,	// (0x0003518c) list_double_pane_g1_cp2

0x43c7,	// (0x00035198) list_double_pane_g2_cp2

0x43cf,	// (0x000351a0) list_double_pane_t1_cp2_ParamLimits

0x43cf,	// (0x000351a0) list_double_pane_t1_cp2

0x43e5,	// (0x000351b6) list_double_pane_t2_cp2_ParamLimits

0x43e5,	// (0x000351b6) list_double_pane_t2_cp2

0x440f,	// (0x000351e0) list_single_pane_cp2_g3

0x441f,	// (0x000351f0) list_single_pane_g1_cp2_ParamLimits

0x441f,	// (0x000351f0) list_single_pane_g1_cp2

0x442b,	// (0x000351fc) list_single_pane_g2_cp2

0x4433,	// (0x00035204) list_single_pane_t1_cp2_ParamLimits

0x4433,	// (0x00035204) list_single_pane_t1_cp2

0x444b,	// (0x0003521c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x444b,	// (0x0003521c) list_single_large_graphic_pane_g1_cp2

0x4457,	// (0x00035228) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4457,	// (0x00035228) list_single_large_graphic_pane_g2_cp2

0x4463,	// (0x00035234) list_single_large_graphic_pane_g3_cp2

0x446b,	// (0x0003523c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x446b,	// (0x0003523c) list_single_large_graphic_pane_g4_cp1

0x4485,	// (0x00035256) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4485,	// (0x00035256) list_single_large_graphic_pane_t1_cp2

0x59cb,	// (0x0003679c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x59cb,	// (0x0003679c) list_single_graphic_heading_pane_g1_cp2

0x5998,	// (0x00036769) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5998,	// (0x00036769) list_single_graphic_heading_pane_g4_cp2

0x442b,	// (0x000351fc) list_single_graphic_heading_pane_g5_cp2

0x59d7,	// (0x000367a8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59d7,	// (0x000367a8) list_single_graphic_heading_pane_t1_cp2

0x59ed,	// (0x000367be) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x59ed,	// (0x000367be) list_single_graphic_heading_pane_t2_cp2

0x598c,	// (0x0003675d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x598c,	// (0x0003675d) list_single_2graphic_pane_g1_cp2

0x5998,	// (0x00036769) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5998,	// (0x00036769) list_single_2graphic_pane_g2_cp2

0x442b,	// (0x000351fc) list_single_2graphic_pane_g3_cp2

0x59a9,	// (0x0003677a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x59a9,	// (0x0003677a) list_single_2graphic_pane_g4_cp2

0x59b5,	// (0x00036786) list_single_2graphic_pane_t1_cp2_ParamLimits

0x59b5,	// (0x00036786) list_single_2graphic_pane_t1_cp2

0xdf27,	// (0x0003ecf8) list_highlight_pane_g10_cp1

0x5564,	// (0x00036335) list_highlight_pane_g1_cp1

0x556c,	// (0x0003633d) list_highlight_pane_g2_cp1

0x5574,	// (0x00036345) list_highlight_pane_g3_cp1

0x557c,	// (0x0003634d) list_highlight_pane_g4_cp1

0x5584,	// (0x00036355) list_highlight_pane_g5_cp1

0x558c,	// (0x0003635d) list_highlight_pane_g6_cp1

0x5594,	// (0x00036365) list_highlight_pane_g7_cp1

0x559c,	// (0x0003636d) list_highlight_pane_g8_cp1

0x55a4,	// (0x00036375) list_highlight_pane_g9_cp1

0xd829,	// (0x0003e5fa) form_field_slider_pane_t3

0xd837,	// (0x0003e608) form_field_slider_pane_t4

0x54a0,	// (0x00036271) slider_form_pane_ParamLimits

0x54a0,	// (0x00036271) slider_form_pane

0x2bf4,	// (0x000339c5) control_abbreviations

0x2bf4,	// (0x000339c5) control_conventions

0x2bf4,	// (0x000339c5) control_definitions

0x2bf4,	// (0x000339c5) format_table_attribute

0x5c7e,	// (0x00036a4f) bg_popup_preview_window_pane_g9

0x2bf4,	// (0x000339c5) format_table_data2

0x2bf4,	// (0x000339c5) format_table_data3

0x2bf4,	// (0x000339c5) format_table_data_example

0x0008,

0x2bf4,	// (0x000339c5) intro_purpose

0xf8c5,	// (0x00040696) bg_popup_preview_window_pane_g

0x2bf4,	// (0x000339c5) texts_category

0x2bf4,	// (0x000339c5) texts_graphics

0x449b,	// (0x0003526c) text_digital

0x44aa,	// (0x0003527b) text_primary

0x44b9,	// (0x0003528a) text_primary_small

0x44c8,	// (0x00035299) text_secondary

0x44d7,	// (0x000352a8) text_title

0x63c1,	// (0x00037192) bg_passive_tab_pane_g1_cp3_srt

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp3_srt

0x63ca,	// (0x0003719b) bg_passive_tab_pane_g3_cp3_srt

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp3_srt_ParamLimits

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp3_srt

0x63d3,	// (0x000371a4) tabs_4_active_pane_srt_g1

0xdb7b,	// (0x0003e94c) tabs_4_active_pane_srt_t1_ParamLimits

0xdb7b,	// (0x0003e94c) tabs_4_active_pane_srt_t1

0x63c1,	// (0x00037192) bg_active_tab_pane_g1_cp3_copy1

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp3_copy1

0x63ca,	// (0x0003719b) bg_active_tab_pane_g3_cp3_copy1

0x2cd4,	// (0x00033aa5) tabs_2_long_active_pane_srt_ParamLimits

0x2cd4,	// (0x00033aa5) tabs_2_long_active_pane_srt

0x2cd4,	// (0x00033aa5) tabs_2_long_passive_pane_srt_ParamLimits

0x2cd4,	// (0x00033aa5) tabs_2_long_passive_pane_srt

0x480a,	// (0x000355db) bg_passive_tab_pane_cp4_srt_ParamLimits

0x480a,	// (0x000355db) bg_passive_tab_pane_cp4_srt

0x60ac,	// (0x00036e7d) bg_passive_tab_pane_g1_cp4_srt

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp4_srt

0x60b5,	// (0x00036e86) bg_passive_tab_pane_g3_cp4_srt

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp4_srt_ParamLimits

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp4_srt

0xd994,	// (0x0003e765) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd994,	// (0x0003e765) tabs_2_long_active_pane_srt_t1

0x60ac,	// (0x00036e7d) bg_active_tab_pane_g1_cp4_srt

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp4_srt

0x60b5,	// (0x00036e86) bg_active_tab_pane_g3_cp4_srt

0x2f4f,	// (0x00033d20) tabs_3_long_active_pane_srt_ParamLimits

0x2f4f,	// (0x00033d20) tabs_3_long_active_pane_srt

0x2f4f,	// (0x00033d20) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2f4f,	// (0x00033d20) tabs_3_long_passive_pane_cp_srt

0x2f4f,	// (0x00033d20) tabs_3_long_passive_pane_srt_ParamLimits

0x2f4f,	// (0x00033d20) tabs_3_long_passive_pane_srt

0x480a,	// (0x000355db) bg_passive_tab_pane_cp5_srt_ParamLimits

0x480a,	// (0x000355db) bg_passive_tab_pane_cp5_srt

0x41af,	// (0x00034f80) bg_passive_tab_pane_g1_cp5_srt

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp5_srt

0x41b8,	// (0x00034f89) bg_passive_tab_pane_g3_cp5_srt

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp5_srt_ParamLimits

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp5_srt

0xd97e,	// (0x0003e74f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd97e,	// (0x0003e74f) tabs_3_long_active_pane_srt_t1

0x41af,	// (0x00034f80) bg_active_tab_pane_g1_cp5_srt

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp5_srt

0x41b8,	// (0x00034f89) bg_active_tab_pane_g3_cp5_srt

0x608c,	// (0x00036e5d) navi_text_pane_srt_t1

0x6084,	// (0x00036e55) navi_icon_pane_srt_g1

0x46ac,	// (0x0003547d) midp_editing_number_pane_srt

0x44e6,	// (0x000352b7) midp_ticker_pane_srt

0x46b4,	// (0x00035485) midp_ticker_pane_srt_g1

0x46bc,	// (0x0003548d) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0004051e) midp_ticker_pane_srt_g

0x46c4,	// (0x00035495) midp_ticker_pane_srt_t1

0x6075,	// (0x00036e46) midp_editing_number_pane_t1_copy1

0xd1fc,	// (0x0003dfcd) listscroll_midp_pane

0xd1fc,	// (0x0003dfcd) midp_form_pane

0x455e,	// (0x0003532f) midp_info_popup_window_ParamLimits

0x455e,	// (0x0003532f) midp_info_popup_window

0x3680,	// (0x00034451) bg_popup_sub_pane_cp50_ParamLimits

0x3680,	// (0x00034451) bg_popup_sub_pane_cp50

0x5188,	// (0x00035f59) listscroll_midp_info_pane_ParamLimits

0x5188,	// (0x00035f59) listscroll_midp_info_pane

0x5168,	// (0x00035f39) listscroll_form_midp_pane_ParamLimits

0x5168,	// (0x00035f39) listscroll_form_midp_pane

0x5174,	// (0x00035f45) scroll_bar_cp050

0x5168,	// (0x00035f39) list_midp_pane

0x6e48,	// (0x00037c19) signal_pane_g2_cp

0x5082,	// (0x00035e53) listscroll_midp_info_pane_t1_ParamLimits

0x5082,	// (0x00035e53) listscroll_midp_info_pane_t1

0x509a,	// (0x00035e6b) listscroll_midp_info_pane_t2_ParamLimits

0x509a,	// (0x00035e6b) listscroll_midp_info_pane_t2

0x50d8,	// (0x00035ea9) listscroll_midp_info_pane_t3_ParamLimits

0x50d8,	// (0x00035ea9) listscroll_midp_info_pane_t3

0x5112,	// (0x00035ee3) listscroll_midp_info_pane_t4_ParamLimits

0x5112,	// (0x00035ee3) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x000405d1) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x000405d1) listscroll_midp_info_pane_t

0x36e1,	// (0x000344b2) scroll_pane_cp21

0x5020,	// (0x00035df1) form_midp_field_choice_group_pane

0x5029,	// (0x00035dfa) form_midp_field_text_pane

0x5068,	// (0x00035e39) form_midp_field_time_pane

0x5070,	// (0x00035e41) form_midp_gauge_slider_pane

0x5079,	// (0x00035e4a) form_midp_gauge_wait_pane

0x2bf4,	// (0x000339c5) form_midp_image_pane

0xc6e2,	// (0x0003d4b3) list_single_midp_pane_ParamLimits

0xc6e2,	// (0x0003d4b3) list_single_midp_pane

0xd808,	// (0x0003e5d9) form_midp_field_text_pane_t1

0x4da8,	// (0x00035b79) input_focus_pane_cp050

0x500f,	// (0x00035de0) list_midp_form_text_pane

0x4fa7,	// (0x00035d78) form_midp_field_choice_group_pane_t1

0x4fb5,	// (0x00035d86) input_focus_pane_cp051

0x4fc9,	// (0x00035d9a) list_midp_choice_pane

0x2bf4,	// (0x000339c5) status_idle_pane

0x4f8b,	// (0x00035d5c) form_midp_field_time_pane_t1

0xdf27,	// (0x0003ecf8) wait_anim_pane_g2_copy1

0x4f99,	// (0x00035d6a) form_midp_field_time_pane_t2

0x0001,

0x460c,	// (0x000353dd) aid_navinavi_width_2_pane

0xf7fb,	// (0x000405cc) form_midp_field_time_pane_t

0x2bf4,	// (0x000339c5) input_focus_pane_cp052

0x2bf4,	// (0x000339c5) bg_input_focus_pane_cp040

0x4f4b,	// (0x00035d1c) form_midp_gauge_slider_pane_t1

0x4f59,	// (0x00035d2a) form_midp_gauge_slider_pane_t2

0xd7ec,	// (0x0003e5bd) form_midp_gauge_slider_pane_t3

0xd7fa,	// (0x0003e5cb) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x000405c3) form_midp_gauge_slider_pane_t

0x4f83,	// (0x00035d54) form_midp_slider_pane

0x2cd4,	// (0x00033aa5) bg_input_focus_pane_cp041_ParamLimits

0x2cd4,	// (0x00033aa5) bg_input_focus_pane_cp041

0x4f18,	// (0x00035ce9) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f18,	// (0x00035ce9) form_midp_gauge_wait_pane_t1

0x4f2a,	// (0x00035cfb) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f2a,	// (0x00035cfb) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x000405be) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x000405be) form_midp_gauge_wait_pane_t

0x4f3c,	// (0x00035d0d) form_midp_wait_pane_ParamLimits

0x4f3c,	// (0x00035d0d) form_midp_wait_pane

0x4ee2,	// (0x00035cb3) form_midp_image_pane_g1

0x4eeb,	// (0x00035cbc) form_midp_image_pane_t1

0x4efa,	// (0x00035ccb) form_midp_image_pane_t2

0x4f09,	// (0x00035cda) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x000405b7) form_midp_image_pane_t

0x4ed9,	// (0x00035caa) list_single_midp_pane_g1

0x1231,	// (0x00032002) list_single_midp_pane_t1

0xd7d8,	// (0x0003e5a9) list_midp_form_item_pane_ParamLimits

0xd7d8,	// (0x0003e5a9) list_midp_form_item_pane

0x45b4,	// (0x00035385) list_midp_form_item_pane_t1

0x45c3,	// (0x00035394) midp_ticker_pane_g1

0x45cf,	// (0x000353a0) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00040504) midp_ticker_pane_g

0x45db,	// (0x000353ac) midp_ticker_pane_t1

0x62c6,	// (0x00037097) midp_editing_number_pane_t1

0x62a4,	// (0x00037075) midp_editing_number_pane

0x62b3,	// (0x00037084) midp_ticker_pane

0x6065,	// (0x00036e36) ai_message_heading_pane

0x2bf4,	// (0x000339c5) bg_popup_window_pane_cp14

0x606d,	// (0x00036e3e) listscroll_ai_message_pane

0x5fef,	// (0x00036dc0) ai_message_heading_pane_g1_ParamLimits

0x5fef,	// (0x00036dc0) ai_message_heading_pane_g1

0x5ffb,	// (0x00036dcc) ai_message_heading_pane_g2_ParamLimits

0x5ffb,	// (0x00036dcc) ai_message_heading_pane_g2

0x6007,	// (0x00036dd8) ai_message_heading_pane_g3_ParamLimits

0x6007,	// (0x00036dd8) ai_message_heading_pane_g3

0x6013,	// (0x00036de4) ai_message_heading_pane_g4_ParamLimits

0x6013,	// (0x00036de4) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x000406f8) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x000406f8) ai_message_heading_pane_g

0x601f,	// (0x00036df0) ai_message_heading_pane_t1_ParamLimits

0x601f,	// (0x00036df0) ai_message_heading_pane_t1

0x6039,	// (0x00036e0a) ai_message_heading_pane_t2_ParamLimits

0x6039,	// (0x00036e0a) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00040701) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00040701) ai_message_heading_pane_t

0x604b,	// (0x00036e1c) bg_popup_heading_pane_cp1_ParamLimits

0x604b,	// (0x00036e1c) bg_popup_heading_pane_cp1

0x5fdd,	// (0x00036dae) list_ai_message_pane_ParamLimits

0x5fdd,	// (0x00036dae) list_ai_message_pane

0x36e1,	// (0x000344b2) scroll_pane_cp10

0x5f79,	// (0x00036d4a) list_ai_message_pane_g1

0x5f81,	// (0x00036d52) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x000406d5) list_ai_message_pane_g

0x5f89,	// (0x00036d5a) list_ai_message_pane_t1_ParamLimits

0x5f89,	// (0x00036d5a) list_ai_message_pane_t1

0x5f9e,	// (0x00036d6f) list_ai_message_pane_t2_ParamLimits

0x5f9e,	// (0x00036d6f) list_ai_message_pane_t2

0x5fb3,	// (0x00036d84) list_ai_message_pane_t3_ParamLimits

0x5fb3,	// (0x00036d84) list_ai_message_pane_t3

0x5fc8,	// (0x00036d99) list_ai_message_pane_t4_ParamLimits

0x5fc8,	// (0x00036d99) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x000406da) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x000406da) list_ai_message_pane_t

0xd95d,	// (0x0003e72e) cell_ai_soft_ind_pane_ParamLimits

0xd95d,	// (0x0003e72e) cell_ai_soft_ind_pane

0x45ed,	// (0x000353be) cell_ai_soft_ind_pane_g1_ParamLimits

0x45ed,	// (0x000353be) cell_ai_soft_ind_pane_g1

0x2bf4,	// (0x000339c5) grid_highlight_cp1

0x45fa,	// (0x000353cb) text_secondary_cp56_ParamLimits

0x45fa,	// (0x000353cb) text_secondary_cp56

0x5f39,	// (0x00036d0a) example_general_pane_ParamLimits

0x5f39,	// (0x00036d0a) example_general_pane

0x5f45,	// (0x00036d16) example_parent_pane_g1_ParamLimits

0x5f45,	// (0x00036d16) example_parent_pane_g1

0x5f51,	// (0x00036d22) example_parent_pane_t1_ParamLimits

0x5f51,	// (0x00036d22) example_parent_pane_t1

0xc38c,	// (0x0003d15d) popup_preview_text_window_ParamLimits

0xc38c,	// (0x0003d15d) popup_preview_text_window

0x4417,	// (0x000351e8) list_single_pane_cp2_g4

0x302b,	// (0x00033dfc) bg_popup_preview_window_pane_ParamLimits

0x302b,	// (0x00033dfc) bg_popup_preview_window_pane

0x5c86,	// (0x00036a57) popup_preview_text_window_t1_ParamLimits

0x5c86,	// (0x00036a57) popup_preview_text_window_t1

0x5ca4,	// (0x00036a75) popup_preview_text_window_t2_ParamLimits

0x5ca4,	// (0x00036a75) popup_preview_text_window_t2

0x5ced,	// (0x00036abe) popup_preview_text_window_t3_ParamLimits

0x5ced,	// (0x00036abe) popup_preview_text_window_t3

0x5d32,	// (0x00036b03) popup_preview_text_window_t4_ParamLimits

0x5d32,	// (0x00036b03) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000406a9) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000406a9) popup_preview_text_window_t

0x5db0,	// (0x00036b81) scroll_pane_cp11

0x4d34,	// (0x00035b05) bg_popup_preview_window_pane_g1

0x5c46,	// (0x00036a17) bg_popup_preview_window_pane_g2

0x5c4e,	// (0x00036a1f) bg_popup_preview_window_pane_g3

0x5c56,	// (0x00036a27) bg_popup_preview_window_pane_g4

0x5c5e,	// (0x00036a2f) bg_popup_preview_window_pane_g5

0x5c66,	// (0x00036a37) bg_popup_preview_window_pane_g6

0x5c6e,	// (0x00036a3f) bg_popup_preview_window_pane_g7

0x5c76,	// (0x00036a47) bg_popup_preview_window_pane_g8

0xee7a,	// (0x0003fc4b) aid_popup_width_pane

0xc308,	// (0x0003d0d9) popup_midp_note_alarm_window_ParamLimits

0xc308,	// (0x0003d0d9) popup_midp_note_alarm_window

0x3555,	// (0x00034326) data_form_pane_ParamLimits

0xbc8d,	// (0x0003ca5e) form_field_data_pane_g1

0xbc97,	// (0x0003ca68) form_field_data_pane_t1_ParamLimits

0x3561,	// (0x00034332) input_focus_pane_ParamLimits

0x0224,	// (0x00030ff5) data_form_wide_pane_ParamLimits

0x0235,	// (0x00031006) form_field_data_wide_pane_g1

0x0241,	// (0x00031012) form_field_data_wide_pane_t1_ParamLimits

0x32d2,	// (0x000340a3) input_focus_pane_cp6_ParamLimits

0xd02f,	// (0x0003de00) input_popup_find_pane_g1_ParamLimits

0xd02f,	// (0x0003de00) input_popup_find_pane_g1

0x04b7,	// (0x00031288) aid_navi_side_left_pane

0x04cc,	// (0x0003129d) aid_navi_side_right_pane

0x565f,	// (0x00036430) bg_popup_window_pane_cp30_ParamLimits

0x565f,	// (0x00036430) bg_popup_window_pane_cp30

0x56d9,	// (0x000364aa) popup_midp_note_alarm_window_g1_ParamLimits

0x56d9,	// (0x000364aa) popup_midp_note_alarm_window_g1

0x5709,	// (0x000364da) popup_midp_note_alarm_window_t1_ParamLimits

0x5709,	// (0x000364da) popup_midp_note_alarm_window_t1

0x57aa,	// (0x0003657b) popup_midp_note_alarm_window_t2_ParamLimits

0x57aa,	// (0x0003657b) popup_midp_note_alarm_window_t2

0x5858,	// (0x00036629) popup_midp_note_alarm_window_t3_ParamLimits

0x5858,	// (0x00036629) popup_midp_note_alarm_window_t3

0x588a,	// (0x0003665b) popup_midp_note_alarm_window_t4_ParamLimits

0x588a,	// (0x0003665b) popup_midp_note_alarm_window_t4

0x58b0,	// (0x00036681) popup_midp_note_alarm_window_t5_ParamLimits

0x58b0,	// (0x00036681) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00040646) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00040646) popup_midp_note_alarm_window_t

0x595c,	// (0x0003672d) wait_bar_pane_cp1_ParamLimits

0x595c,	// (0x0003672d) wait_bar_pane_cp1

0x2bf4,	// (0x000339c5) wait_anim_pane_copy1

0x2bf4,	// (0x000339c5) wait_border_pane_copy1

0x5345,	// (0x00036116) wait_border_pane_g1_copy1

0x025b,	// (0x0003102c) form_field_popup_pane_g1

0xbcb1,	// (0x0003ca82) form_field_popup_pane_t1_ParamLimits

0x3561,	// (0x00034332) input_focus_pane_cp7_ParamLimits

0x358f,	// (0x00034360) list_form_pane_ParamLimits

0x027b,	// (0x0003104c) form_field_popup_wide_pane_g1

0x0283,	// (0x00031054) form_field_popup_wide_pane_t1_ParamLimits

0x3561,	// (0x00034332) input_focus_pane_cp8_ParamLimits

0x359b,	// (0x0003436c) list_form_wide_pane_ParamLimits

0x6463,	// (0x00037234) aid_size_cell_graphic_pane

0xbd30,	// (0x0003cb01) data_form_pane_t1_ParamLimits

0xc70b,	// (0x0003d4dc) data_form_wide_pane_t1_ParamLimits

0xd45d,	// (0x0003e22e) bg_status_flat_pane

0xb4d5,	// (0x0003c2a6) title_pane_t1_ParamLimits

0x2c9c,	// (0x00033a6d) title_pane_t2_ParamLimits

0x2cc2,	// (0x00033a93) title_pane_t3_ParamLimits

0xf532,	// (0x00040303) title_pane_t_ParamLimits

0x3e3c,	// (0x00034c0d) level_1_signal_ParamLimits

0x3e4e,	// (0x00034c1f) level_2_signal_ParamLimits

0x3e61,	// (0x00034c32) level_3_signal_ParamLimits

0x3e74,	// (0x00034c45) level_4_signal_ParamLimits

0x3e87,	// (0x00034c58) level_5_signal_ParamLimits

0x3e9a,	// (0x00034c6b) level_6_signal_ParamLimits

0x3ead,	// (0x00034c7e) level_7_signal_ParamLimits

0x3e3c,	// (0x00034c0d) level_1_battery_ParamLimits

0x3e4e,	// (0x00034c1f) level_2_battery_ParamLimits

0x3e61,	// (0x00034c32) level_3_battery_ParamLimits

0x3e74,	// (0x00034c45) level_4_battery_ParamLimits

0x3e87,	// (0x00034c58) level_5_battery_ParamLimits

0x3e9a,	// (0x00034c6b) level_6_battery_ParamLimits

0x3ead,	// (0x00034c7e) level_7_battery_ParamLimits

0x5564,	// (0x00036335) bg_status_flat_pane_g1

0x556c,	// (0x0003633d) bg_status_flat_pane_g2

0x5574,	// (0x00036345) bg_status_flat_pane_g3

0x557c,	// (0x0003634d) bg_status_flat_pane_g4

0x5584,	// (0x00036355) bg_status_flat_pane_g5

0x558c,	// (0x0003635d) bg_status_flat_pane_g6

0x5594,	// (0x00036365) bg_status_flat_pane_g7

0xb561,	// (0x0003c332) tabs_3_active_pane_t1_ParamLimits

0xb561,	// (0x0003c332) tabs_3_passive_pane_t1_ParamLimits

0xb573,	// (0x0003c344) tabs_4_active_pane_t1_ParamLimits

0xb573,	// (0x0003c344) tabs_4_1_passive_pane_t1_ParamLimits

0xd03d,	// (0x0003de0e) tabs_2_active_pane_t1_ParamLimits

0xd03d,	// (0x0003de0e) tabs_2_passive_pane_t1_ParamLimits

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp4_ParamLimits

0xd04f,	// (0x0003de20) tabs_2_long_active_pane_t1_ParamLimits

0x480a,	// (0x000355db) bg_passive_tab_pane_cp4_ParamLimits

0x1108,	// (0x00031ed9) list_single_midp_graphic_pane_t1_ParamLimits

0x2cd4,	// (0x00033aa5) bg_active_tab_pane_cp5_ParamLimits

0xd062,	// (0x0003de33) tabs_3_long_active_pane_t1_ParamLimits

0x480a,	// (0x000355db) bg_passive_tab_pane_cp5_ParamLimits

0x1108,	// (0x00031ed9) list_single_midp_graphic_pane_t1

0xd45d,	// (0x0003e22e) bg_status_flat_pane_ParamLimits

0x49c4,	// (0x00035795) indicator_pane_cp2_ParamLimits

0x49c4,	// (0x00035795) indicator_pane_cp2

0xd5db,	// (0x0003e3ac) navi_pane_srt_ParamLimits

0xd5db,	// (0x0003e3ac) navi_pane_srt

0x4b13,	// (0x000358e4) popup_clock_digital_analogue_window_cp1

0x2db1,	// (0x00033b82) indicator_pane_t1

0x44e6,	// (0x000352b7) copy_highlight_pane

0x44e6,	// (0x000352b7) cursor_graphics_pane

0x44e6,	// (0x000352b7) graphic_within_text_pane

0x44e6,	// (0x000352b7) link_highlight_pane

0x5d73,	// (0x00036b44) popup_preview_text_window_t5_ParamLimits

0x5d73,	// (0x00036b44) popup_preview_text_window_t5

0x4614,	// (0x000353e5) cursor_digital_pane

0x4614,	// (0x000353e5) cursor_primary_pane

0x4625,	// (0x000353f6) cursor_primary_small_pane

0x462d,	// (0x000353fe) cursor_secondary_pane

0x4635,	// (0x00035406) cursor_title_pane

0x4614,	// (0x000353e5) link_highlight_digital_pane

0x461c,	// (0x000353ed) link_highlight_primary_pane

0x4625,	// (0x000353f6) link_highlight_primary_small_pane

0x462d,	// (0x000353fe) link_highlight_secondary_pane

0x4635,	// (0x00035406) link_highlight_title_pane

0x4614,	// (0x000353e5) copy_highlight_digital_pane

0x4614,	// (0x000353e5) copy_highlight_primary_pane

0x4625,	// (0x000353f6) copy_highlight_primary_small_pane

0x462d,	// (0x000353fe) copy_highlight_secondary_pane

0x4635,	// (0x00035406) copy_highlight_title_pane

0x462d,	// (0x000353fe) graphic_text_digital_pane

0x5602,	// (0x000363d3) graphic_text_primary_pane

0x560b,	// (0x000363dc) graphic_text_primary_small_pane

0x4625,	// (0x000353f6) graphic_text_secondary_pane

0x4614,	// (0x000353e5) graphic_text_title_pane

0xd2a1,	// (0x0003e072) cursor_primary_pane_g1

0x55f4,	// (0x000363c5) cursor_text_primary_t1

0xd859,	// (0x0003e62a) cursor_primary_small_pane_g1

0x55e6,	// (0x000363b7) cursor_text_primary_small_t1

0xd84f,	// (0x0003e620) cursor_primary_small_pane_g1_copy1

0x55ce,	// (0x0003639f) cursor_text_primary_small_t1_copy1

0x55ac,	// (0x0003637d) cursor_text_title_t1

0xd845,	// (0x0003e616) cursor_title_pane_g1

0xd2a1,	// (0x0003e072) cursor_digital_pane_g1

0x4647,	// (0x00035418) cursor_text_digital_t1

0x466c,	// (0x0003543d) link_highlight_primary_pane_g1

0x5555,	// (0x00036326) link_highlight_primary_pane_t1

0x4655,	// (0x00035426) link_highlight_primary_small_pane_g1

0x465d,	// (0x0003542e) link_highlight_primary_small_pane_t1

0x466c,	// (0x0003543d) link_highlight_secondary_pane_g1

0x4674,	// (0x00035445) link_highlight_secondary_pane_t1

0x54c9,	// (0x0003629a) link_highlight_title_pane_g1

0x54d1,	// (0x000362a2) link_highlight_title_pane_t1

0x54b2,	// (0x00036283) link_highlight_digital_pane_g1

0x54ba,	// (0x0003628b) link_highlight_digital_pane_t1

0x538a,	// (0x0003615b) copy_highlight_primary_pane_g1

0x5392,	// (0x00036163) copy_highlight_primary_pane_t1

0x5364,	// (0x00036135) copy_highlight_primary_small_pane_g1

0x537b,	// (0x0003614c) copy_highlight_primary_small_pane_t1

0x4683,	// (0x00035454) copy_highlight_secondary_pane_g1

0x468b,	// (0x0003545c) copy_highlight_secondary_pane_t1

0x5364,	// (0x00036135) copy_highlight_title_pane_g1

0x536c,	// (0x0003613d) copy_highlight_title_pane_t1

0x538a,	// (0x0003615b) copy_highlight_digital_pane_g1

0x6631,	// (0x00037402) copy_highlight_digital_pane_t1

0x6585,	// (0x00037356) graphic_text_primary_pane_g1

0x6615,	// (0x000373e6) graphic_text_primary_pane_t1

0x6623,	// (0x000373f4) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00040775) graphic_text_primary_pane_t

0x65f1,	// (0x000373c2) graphic_text_primary_small_pane_g1

0x65f9,	// (0x000373ca) graphic_text_primary_small_pane_t1

0x6607,	// (0x000373d8) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00040770) graphic_text_primary_small_pane_t

0x65cd,	// (0x0003739e) graphic_text_secondary_pane_g1

0x65d5,	// (0x000373a6) graphic_text_secondary_pane_t1

0x65e3,	// (0x000373b4) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x0004076b) graphic_text_secondary_pane_t

0x65a9,	// (0x0003737a) graphic_text_title_pane_g1

0x65b1,	// (0x00037382) graphic_text_title_pane_t1

0x65bf,	// (0x00037390) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00040766) graphic_text_title_pane_t

0x6585,	// (0x00037356) graphic_text_digital_pane_g1

0x658d,	// (0x0003735e) graphic_text_digital_pane_t1

0x659b,	// (0x0003736c) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00040761) graphic_text_digital_pane_t

0x2cd4,	// (0x00033aa5) navi_icon_pane_srt_ParamLimits

0x2cd4,	// (0x00033aa5) navi_icon_pane_srt

0x2bf4,	// (0x000339c5) navi_midp_pane_srt

0x2bf4,	// (0x000339c5) navi_navi_pane_srt

0x2cd4,	// (0x00033aa5) navi_text_pane_srt_ParamLimits

0x2cd4,	// (0x00033aa5) navi_text_pane_srt

0x6550,	// (0x00037321) navi_navi_icon_text_pane_srt

0x6558,	// (0x00037329) navi_navi_pane_srt_g1_ParamLimits

0x6558,	// (0x00037329) navi_navi_pane_srt_g1

0x656a,	// (0x0003733b) navi_navi_pane_srt_g2_ParamLimits

0x656a,	// (0x0003733b) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x0004075c) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x0004075c) navi_navi_pane_srt_g

0x657c,	// (0x0003734d) navi_navi_tabs_pane_srt

0x6550,	// (0x00037321) navi_navi_text_pane_srt

0x6550,	// (0x00037321) navi_navi_volume_pane_srt

0x6541,	// (0x00037312) navi_navi_text_pane_srt_t1

0x164f,	// (0x00032420) navi_navi_volume_pane_srt_g1

0x1657,	// (0x00032428) volume_small_pane_srt_ParamLimits

0x1657,	// (0x00032428) volume_small_pane_srt

0x0821,	// (0x000315f2) volume_small_pane_srt_g1_ParamLimits

0x0821,	// (0x000315f2) volume_small_pane_srt_g1

0x0831,	// (0x00031602) volume_small_pane_srt_g2_ParamLimits

0x0831,	// (0x00031602) volume_small_pane_srt_g2

0x0842,	// (0x00031613) volume_small_pane_srt_g3_ParamLimits

0x0842,	// (0x00031613) volume_small_pane_srt_g3

0x0853,	// (0x00031624) volume_small_pane_srt_g4_ParamLimits

0x0853,	// (0x00031624) volume_small_pane_srt_g4

0x0864,	// (0x00031635) volume_small_pane_srt_g5_ParamLimits

0x0864,	// (0x00031635) volume_small_pane_srt_g5

0x0875,	// (0x00031646) volume_small_pane_srt_g6_ParamLimits

0x0875,	// (0x00031646) volume_small_pane_srt_g6

0x0886,	// (0x00031657) volume_small_pane_srt_g7_ParamLimits

0x0886,	// (0x00031657) volume_small_pane_srt_g7

0x0897,	// (0x00031668) volume_small_pane_srt_g8_ParamLimits

0x0897,	// (0x00031668) volume_small_pane_srt_g8

0x08a8,	// (0x00031679) volume_small_pane_srt_g9_ParamLimits

0x08a8,	// (0x00031679) volume_small_pane_srt_g9

0x08b9,	// (0x0003168a) volume_small_pane_srt_g10_ParamLimits

0x08b9,	// (0x0003168a) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x00040509) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x00040509) volume_small_pane_srt_g

0x30d4,	// (0x00033ea5) query_popup_data_pane_cp2

0x6527,	// (0x000372f8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6527,	// (0x000372f8) navi_navi_icon_text_pane_srt_t1

0x5602,	// (0x000363d3) navi_tabs_2_long_pane_srt

0x5602,	// (0x000363d3) navi_tabs_2_pane_srt

0x5602,	// (0x000363d3) navi_tabs_3_long_pane_srt

0x5602,	// (0x000363d3) navi_tabs_3_pane_srt

0x5602,	// (0x000363d3) navi_tabs_4_pane_srt

0x162f,	// (0x00032400) tabs_2_active_pane_srt_ParamLimits

0x162f,	// (0x00032400) tabs_2_active_pane_srt

0x163f,	// (0x00032410) tabs_2_passive_pane_srt_ParamLimits

0x163f,	// (0x00032410) tabs_2_passive_pane_srt

0x4da8,	// (0x00035b79) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4da8,	// (0x00035b79) bg_passive_tab_pane_cp1_srt

0x64f3,	// (0x000372c4) bg_passive_tab_pane_g1_cp1_srt

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp1_srt

0x64fc,	// (0x000372cd) bg_passive_tab_pane_g3_cp1_srt

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp1_srt_ParamLimits

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp1_srt

0x6505,	// (0x000372d6) tabs_2_active_pane_srt_g1

0xdc0c,	// (0x0003e9dd) tabs_2_active_pane_srt_t1_ParamLimits

0xdc0c,	// (0x0003e9dd) tabs_2_active_pane_srt_t1

0x64f3,	// (0x000372c4) bg_active_tab_pane_g1_cp1_srt

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp1_srt

0x64fc,	// (0x000372cd) bg_active_tab_pane_g3_cp1_srt

0x15fc,	// (0x000323cd) tabs_3_active_pane_srt_ParamLimits

0x15fc,	// (0x000323cd) tabs_3_active_pane_srt

0x160d,	// (0x000323de) tabs_3_passive_pane_cp_srt_ParamLimits

0x160d,	// (0x000323de) tabs_3_passive_pane_cp_srt

0x161e,	// (0x000323ef) tabs_3_passive_pane_srt_ParamLimits

0x161e,	// (0x000323ef) tabs_3_passive_pane_srt

0x4da8,	// (0x00035b79) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4da8,	// (0x00035b79) bg_passive_tab_pane_cp2_srt

0x469a,	// (0x0003546b) bg_passive_tab_pane_g1_cp2_srt

0x4125,	// (0x00034ef6) bg_passive_tab_pane_g2_cp2_srt

0x46a3,	// (0x00035474) bg_passive_tab_pane_g3_cp2_srt

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp2_srt_ParamLimits

0x2f4f,	// (0x00033d20) bg_active_tab_pane_cp2_srt

0x64d9,	// (0x000372aa) tabs_3_active_pane_srt_g1

0xdbf6,	// (0x0003e9c7) tabs_3_active_pane_srt_t1_ParamLimits

0xdbf6,	// (0x0003e9c7) tabs_3_active_pane_srt_t1

0x469a,	// (0x0003546b) bg_active_tab_pane_g1_cp2_srt

0x4125,	// (0x00034ef6) bg_active_tab_pane_g2_cp2_srt

0x46a3,	// (0x00035474) bg_active_tab_pane_g3_cp2_srt

0x15b4,	// (0x00032385) tabs_4_active_pane_srt_ParamLimits

0x15b4,	// (0x00032385) tabs_4_active_pane_srt

0x15c6,	// (0x00032397) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15c6,	// (0x00032397) tabs_4_passive_pane_cp2_srt

0x0a28,	// (0x000317f9) aid_size_cell_toolbar

0x611d,	// (0x00036eee) main_idle_act_pane_ParamLimits

0x0be9,	// (0x000319ba) popup_large_graphic_colour_window_ParamLimits

0xc618,	// (0x0003d3e9) popup_toolbar_window_ParamLimits

0xc618,	// (0x0003d3e9) popup_toolbar_window

0x1526,	// (0x000322f7) list_single_graphic_2heading_pane_ParamLimits

0x1526,	// (0x000322f7) list_single_graphic_2heading_pane

0x3beb,	// (0x000349bc) aid_size_cell_apps_grid_lsc_pane

0x3bfd,	// (0x000349ce) aid_size_cell_apps_grid_prt_pane

0x480a,	// (0x000355db) bg_wml_button_pane_cp1_ParamLimits

0x480a,	// (0x000355db) bg_wml_button_pane_cp1

0xd808,	// (0x0003e5d9) form_midp_field_text_pane_t1_ParamLimits

0x4da8,	// (0x00035b79) input_focus_pane_cp050_ParamLimits

0x500f,	// (0x00035de0) list_midp_form_text_pane_ParamLimits

0x4fb5,	// (0x00035d86) input_focus_pane_cp051_ParamLimits

0x4fc9,	// (0x00035d9a) list_midp_choice_pane_ParamLimits

0xd7a6,	// (0x0003e577) list_single_2graphic_pane_cp3_ParamLimits

0xd7a6,	// (0x0003e577) list_single_2graphic_pane_cp3

0xd7b9,	// (0x0003e58a) list_single_midp_graphic_pane_ParamLimits

0xd7b9,	// (0x0003e58a) list_single_midp_graphic_pane

0xeeea,	// (0x0003fcbb) list_single_graphic_2heading_pane_g1_ParamLimits

0xeeea,	// (0x0003fcbb) list_single_graphic_2heading_pane_g1

0xeef6,	// (0x0003fcc7) list_single_graphic_2heading_pane_g4_ParamLimits

0xeef6,	// (0x0003fcc7) list_single_graphic_2heading_pane_g4

0xef02,	// (0x0003fcd3) list_single_graphic_2heading_pane_g5_ParamLimits

0xef02,	// (0x0003fcd3) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0004055c) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0004055c) list_single_graphic_2heading_pane_g

0xef0e,	// (0x0003fcdf) list_single_graphic_2heading_pane_t1_ParamLimits

0xef0e,	// (0x0003fcdf) list_single_graphic_2heading_pane_t1

0xef22,	// (0x0003fcf3) list_single_graphic_2heading_pane_t2_ParamLimits

0xef22,	// (0x0003fcf3) list_single_graphic_2heading_pane_t2

0xef3c,	// (0x0003fd0d) list_single_graphic_2heading_pane_t3_ParamLimits

0xef3c,	// (0x0003fd0d) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00040563) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00040563) list_single_graphic_2heading_pane_t

0x4c72,	// (0x00035a43) bg_popup_sub_pane_cp2

0x4c9c,	// (0x00035a6d) grid_toobar_pane

0x0ffd,	// (0x00031dce) cell_toolbar_pane_ParamLimits

0x0ffd,	// (0x00031dce) cell_toolbar_pane

0x4cd8,	// (0x00035aa9) cell_toolbar_pane_g1_ParamLimits

0x4cd8,	// (0x00035aa9) cell_toolbar_pane_g1

0x4cec,	// (0x00035abd) cell_toolbar_pane_g2_ParamLimits

0x4cec,	// (0x00035abd) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00040571) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00040571) cell_toolbar_pane_g

0x4d0e,	// (0x00035adf) grid_highlight_pane_cp2_ParamLimits

0x4d0e,	// (0x00035adf) grid_highlight_pane_cp2

0x4d28,	// (0x00035af9) toolbar_button_pane

0x4d34,	// (0x00035b05) toolbar_button_pane_g1

0x4d3c,	// (0x00035b0d) toolbar_button_pane_g2

0x4d44,	// (0x00035b15) toolbar_button_pane_g3

0x4d4c,	// (0x00035b1d) toolbar_button_pane_g4

0x4d54,	// (0x00035b25) toolbar_button_pane_g5

0x4d5c,	// (0x00035b2d) toolbar_button_pane_g6

0x4d64,	// (0x00035b35) toolbar_button_pane_g7

0x4d6c,	// (0x00035b3d) toolbar_button_pane_g8

0x4d74,	// (0x00035b45) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00040576) toolbar_button_pane_g

0x106f,	// (0x00031e40) list_single_2graphic_pane_g1_cp3_ParamLimits

0x106f,	// (0x00031e40) list_single_2graphic_pane_g1_cp3

0xc670,	// (0x0003d441) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc670,	// (0x0003d441) list_single_2graphic_pane_g2_cp3

0x108c,	// (0x00031e5d) list_single_2graphic_pane_g3_cp3

0x1094,	// (0x00031e65) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1094,	// (0x00031e65) list_single_2graphic_pane_g4_cp3

0x10a0,	// (0x00031e71) list_single_2graphic_pane_t1_cp3_ParamLimits

0x10a0,	// (0x00031e71) list_single_2graphic_pane_t1_cp3

0x10fc,	// (0x00031ecd) list_single_midp_graphic_pane_g2_ParamLimits

0x10fc,	// (0x00031ecd) list_single_midp_graphic_pane_g2

0x0a30,	// (0x00031801) aid_zoom_text_primary

0xeee2,	// (0x0003fcb3) aid_zoom_text_secondary

0xd2f9,	// (0x0003e0ca) status_small_pane_g7_ParamLimits

0xd2f9,	// (0x0003e0ca) status_small_pane_g7

0xd31c,	// (0x0003e0ed) status_small_pane_t1_ParamLimits

0xb4b1,	// (0x0003c282) title_pane_g2

0x0003,

0xf529,	// (0x000402fa) title_pane_g

0xb729,	// (0x0003c4fa) aid_size_cell_colour_1_pane_ParamLimits

0xb729,	// (0x0003c4fa) aid_size_cell_colour_1_pane

0xb73d,	// (0x0003c50e) aid_size_cell_colour_2_pane_ParamLimits

0xb73d,	// (0x0003c50e) aid_size_cell_colour_2_pane

0xb751,	// (0x0003c522) aid_size_cell_colour_3_pane_ParamLimits

0xb751,	// (0x0003c522) aid_size_cell_colour_3_pane

0xb765,	// (0x0003c536) aid_size_cell_colour_4_pane_ParamLimits

0xb765,	// (0x0003c536) aid_size_cell_colour_4_pane

0x03f4,	// (0x000311c5) title_pane_stacon_g1_ParamLimits

0x03f4,	// (0x000311c5) title_pane_stacon_g1

0x53e9,	// (0x000361ba) popup_note_wait_window_g3_ParamLimits

0x53e9,	// (0x000361ba) popup_note_wait_window_g3

0x545f,	// (0x00036230) popup_note_wait_window_t5_ParamLimits

0x545f,	// (0x00036230) popup_note_wait_window_t5

0x2bf4,	// (0x000339c5) main_feb_china_hwr_fs_writing_pane

0xc01a,	// (0x0003cdeb) popup_feb_china_hwr_fs_window_ParamLimits

0xc01a,	// (0x0003cdeb) popup_feb_china_hwr_fs_window

0xc681,	// (0x0003d452) aid_size_cell_hwr_fs_ParamLimits

0xc681,	// (0x0003d452) aid_size_cell_hwr_fs

0x4da8,	// (0x00035b79) bg_popup_sub_pane_cp3_ParamLimits

0x4da8,	// (0x00035b79) bg_popup_sub_pane_cp3

0xc696,	// (0x0003d467) grid_hwr_fs_pane_ParamLimits

0xc696,	// (0x0003d467) grid_hwr_fs_pane

0x11c1,	// (0x00031f92) linegrid_hwr_fs_pane_ParamLimits

0x11c1,	// (0x00031f92) linegrid_hwr_fs_pane

0xc6ae,	// (0x0003d47f) cell_hwr_fs_pane_ParamLimits

0xc6ae,	// (0x0003d47f) cell_hwr_fs_pane

0x4db4,	// (0x00035b85) linegrid_hwr_fs_pane_g1_ParamLimits

0x4db4,	// (0x00035b85) linegrid_hwr_fs_pane_g1

0xd77a,	// (0x0003e54b) linegrid_hwr_fs_pane_g2_ParamLimits

0xd77a,	// (0x0003e54b) linegrid_hwr_fs_pane_g2

0x4dd2,	// (0x00035ba3) linegrid_hwr_fs_pane_g3_ParamLimits

0x4dd2,	// (0x00035ba3) linegrid_hwr_fs_pane_g3

0x11f3,	// (0x00031fc4) linegrid_hwr_fs_pane_g4_ParamLimits

0x11f3,	// (0x00031fc4) linegrid_hwr_fs_pane_g4

0x120d,	// (0x00031fde) linegrid_hwr_fs_pane_g5_ParamLimits

0x120d,	// (0x00031fde) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0004059c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0004059c) linegrid_hwr_fs_pane_g

0x4dde,	// (0x00035baf) cell_hwr_fs_pane_g1_ParamLimits

0x4dde,	// (0x00035baf) cell_hwr_fs_pane_g1

0x4ba9,	// (0x0003597a) cell_hwr_fs_pane_g2_ParamLimits

0x4ba9,	// (0x0003597a) cell_hwr_fs_pane_g2

0xd78c,	// (0x0003e55d) cell_hwr_fs_pane_g3_ParamLimits

0xd78c,	// (0x0003e55d) cell_hwr_fs_pane_g3

0xd799,	// (0x0003e56a) cell_hwr_fs_pane_g4_ParamLimits

0xd799,	// (0x0003e56a) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000405a7) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000405a7) cell_hwr_fs_pane_g

0xc6d4,	// (0x0003d4a5) cell_hwr_fs_pane_t1

0x2bf4,	// (0x000339c5) grid_highlight_pane_cp6

0x2bf4,	// (0x000339c5) main_idle_act2_pane

0x36c8,	// (0x00034499) aid_inside_area_popup_secondary

0xd863,	// (0x0003e634) aid_inside_area_window_primary_ParamLimits

0xd863,	// (0x0003e634) aid_inside_area_window_primary

0x6640,	// (0x00037411) ai2_news_ticker_pane

0x6648,	// (0x00037419) aid_size_cell_ai1_link_ParamLimits

0x6648,	// (0x00037419) aid_size_cell_ai1_link

0xdc22,	// (0x0003e9f3) popup_ai2_data_window_ParamLimits

0xdc22,	// (0x0003e9f3) popup_ai2_data_window

0x6678,	// (0x00037449) popup_ai2_link_window_ParamLimits

0x6678,	// (0x00037449) popup_ai2_link_window

0x4da8,	// (0x00035b79) bg_popup_sub_pane_cp4_ParamLimits

0x4da8,	// (0x00035b79) bg_popup_sub_pane_cp4

0x668c,	// (0x0003745d) grid_ai2_link_pane_ParamLimits

0x668c,	// (0x0003745d) grid_ai2_link_pane

0x66a3,	// (0x00037474) popup_ai2_link_window_g1_ParamLimits

0x66a3,	// (0x00037474) popup_ai2_link_window_g1

0x66af,	// (0x00037480) popup_ai2_link_window_g2_ParamLimits

0x66af,	// (0x00037480) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x0004077a) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x0004077a) popup_ai2_link_window_g

0x66be,	// (0x0003748f) ai2_mp_button_pane

0x66c6,	// (0x00037497) ai2_mp_volume_pane

0x4fb5,	// (0x00035d86) bg_popup_sub_pane_cp5_ParamLimits

0x4fb5,	// (0x00035d86) bg_popup_sub_pane_cp5

0x66ce,	// (0x0003749f) heading_ai2_gene_pane_ParamLimits

0x66ce,	// (0x0003749f) heading_ai2_gene_pane

0x66da,	// (0x000374ab) list_ai2_gene_pane_ParamLimits

0x66da,	// (0x000374ab) list_ai2_gene_pane

0x6722,	// (0x000374f3) cell_ai2_link_pane_ParamLimits

0x6722,	// (0x000374f3) cell_ai2_link_pane

0x6738,	// (0x00037509) cell_ai2_link_pane_g1

0x2bf4,	// (0x000339c5) grid_highlight_pane_cp7

0x166c,	// (0x0003243d) ai2_mp_volume_pane_g1

0x6808,	// (0x000375d9) ai2_mp_volume_pane_g2

0xdc4c,	// (0x0003ea1d) list_ai2_gene_pane_t1

0x6810,	// (0x000375e1) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00040793) ai2_mp_volume_pane_g

0x1674,	// (0x00032445) volume_small_pane_cp3

0x6818,	// (0x000375e9) aid_size_cell_ai2_button

0x6820,	// (0x000375f1) grid_ai2_button_pane

0x6829,	// (0x000375fa) cell_ai2_button_pane_ParamLimits

0x6829,	// (0x000375fa) cell_ai2_button_pane

0xdf27,	// (0x0003ecf8) cell_ai2_button_pane_g1

0x2bf4,	// (0x000339c5) grid_highlight_pane_cp8

0x67c8,	// (0x00037599) ai2_gene_pane_t1_ParamLimits

0x67c8,	// (0x00037599) ai2_gene_pane_t1

0xbfb0,	// (0x0003cd81) aid_height_parent_landscape

0xd9ab,	// (0x0003e77c) aid_height_set_list

0x611d,	// (0x00036eee) aid_size_parent

0x6463,	// (0x00037234) aid_size_cell_graphic_pane_ParamLimits

0x66ea,	// (0x000374bb) popup_ai2_data_window_g1_ParamLimits

0x66ea,	// (0x000374bb) popup_ai2_data_window_g1

0x66f6,	// (0x000374c7) ai2_news_ticker_pane_g1

0x66fe,	// (0x000374cf) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x0004077f) ai2_news_ticker_pane_g

0x6706,	// (0x000374d7) ai2_news_ticker_pane_t1

0x6714,	// (0x000374e5) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00040784) ai2_news_ticker_pane_t

0x6741,	// (0x00037512) heading_ai2_gene_pane_g1

0x6749,	// (0x0003751a) heading_ai2_gene_pane_t1_ParamLimits

0x6749,	// (0x0003751a) heading_ai2_gene_pane_t1

0x675e,	// (0x0003752f) list_highlight_pane_cp6

0xdc36,	// (0x0003ea07) ai2_gene_pane_ParamLimits

0xdc36,	// (0x0003ea07) ai2_gene_pane

0xdc5a,	// (0x0003ea2b) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00040789) list_ai2_gene_pane_t

0x6799,	// (0x0003756a) list_highlight_pane_cp8_ParamLimits

0x6799,	// (0x0003756a) list_highlight_pane_cp8

0x67aa,	// (0x0003757b) ai2_gene_pane_g1_ParamLimits

0x67aa,	// (0x0003757b) ai2_gene_pane_g1

0x67bc,	// (0x0003758d) ai2_gene_pane_g2_ParamLimits

0x67bc,	// (0x0003758d) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x0004078e) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x0004078e) ai2_gene_pane_g

0x34f7,	// (0x000342c8) scroll_pane_cp12

0xbf6d,	// (0x0003cd3e) control_pane_t3_ParamLimits

0xbf6d,	// (0x0003cd3e) control_pane_t3

0xd30d,	// (0x0003e0de) status_small_pane_g8_ParamLimits

0xd30d,	// (0x0003e0de) status_small_pane_g8

0xc0af,	// (0x0003ce80) popup_find_window_ParamLimits

0xc342,	// (0x0003d113) popup_note_image_window_ParamLimits

0x102d,	// (0x00031dfe) list_double2_graphic_pane_vc_g1_ParamLimits

0x102d,	// (0x00031dfe) list_double2_graphic_pane_vc_g1

0x1039,	// (0x00031e0a) list_double2_graphic_pane_vc_g2_ParamLimits

0x1039,	// (0x00031e0a) list_double2_graphic_pane_vc_g2

0x1045,	// (0x00031e16) list_double2_graphic_pane_vc_g3_ParamLimits

0x1045,	// (0x00031e16) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0004056a) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0004056a) list_double2_graphic_pane_vc_g

0x1051,	// (0x00031e22) list_double2_graphic_pane_vc_t1_ParamLimits

0x1051,	// (0x00031e22) list_double2_graphic_pane_vc_t1

0x10bc,	// (0x00031e8d) list_single_heading_pane_vc_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_single_heading_pane_vc_g1

0x10c8,	// (0x00031e99) list_single_heading_pane_vc_g2_ParamLimits

0x10c8,	// (0x00031e99) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040374) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040374) list_single_heading_pane_vc_g

0x10d4,	// (0x00031ea5) list_single_heading_pane_vc_t1_ParamLimits

0x10d4,	// (0x00031ea5) list_single_heading_pane_vc_t1

0x10ea,	// (0x00031ebb) list_single_heading_pane_vc_t2_ParamLimits

0x10ea,	// (0x00031ebb) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0004058b) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0004058b) list_single_heading_pane_vc_t

0x111e,	// (0x00031eef) list_setting_number_pane_vc_g1_ParamLimits

0x111e,	// (0x00031eef) list_setting_number_pane_vc_g1

0x112a,	// (0x00031efb) list_setting_number_pane_vc_g2_ParamLimits

0x112a,	// (0x00031efb) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00040590) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00040590) list_setting_number_pane_vc_g

0x1136,	// (0x00031f07) list_setting_number_pane_vc_t1_ParamLimits

0x1136,	// (0x00031f07) list_setting_number_pane_vc_t1

0x114a,	// (0x00031f1b) list_setting_number_pane_vc_t2_ParamLimits

0x114a,	// (0x00031f1b) list_setting_number_pane_vc_t2

0x1166,	// (0x00031f37) list_setting_number_pane_vc_t3_ParamLimits

0x1166,	// (0x00031f37) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00040595) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00040595) list_setting_number_pane_vc_t

0x1184,	// (0x00031f55) set_value_pane_vc_ParamLimits

0x1184,	// (0x00031f55) set_value_pane_vc

0x1526,	// (0x000322f7) list_double2_graphic_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double2_graphic_pane_vc

0x62d5,	// (0x000370a6) list_double2_large_graphic_pane_vc_ParamLimits

0x62d5,	// (0x000370a6) list_double2_large_graphic_pane_vc

0x1526,	// (0x000322f7) list_double2_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double2_pane_vc

0x1526,	// (0x000322f7) list_double_graphic_heading_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double_graphic_heading_pane_vc

0x1526,	// (0x000322f7) list_double_graphic_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double_graphic_pane_vc

0x1526,	// (0x000322f7) list_double_heading_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double_heading_pane_vc

0x62e7,	// (0x000370b8) list_double_large_graphic_pane_vc_ParamLimits

0x62e7,	// (0x000370b8) list_double_large_graphic_pane_vc

0x1526,	// (0x000322f7) list_double_number_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double_number_pane_vc

0x1526,	// (0x000322f7) list_double_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double_pane_vc

0x1526,	// (0x000322f7) list_double_time_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_double_time_pane_vc

0x1526,	// (0x000322f7) list_setting_number_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_setting_number_pane_vc

0x1526,	// (0x000322f7) list_setting_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_setting_pane_vc

0x1526,	// (0x000322f7) list_single_graphic_heading_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_single_graphic_heading_pane_vc

0x1526,	// (0x000322f7) list_single_heading_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_single_heading_pane_vc

0x1526,	// (0x000322f7) list_single_number_heading_pane_vc_ParamLimits

0x1526,	// (0x000322f7) list_single_number_heading_pane_vc

0x167d,	// (0x0003244e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x167d,	// (0x0003244e) list_double_graphic_heading_pane_vc_g1

0x10bc,	// (0x00031e8d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x10bc,	// (0x00031e8d) list_double_graphic_heading_pane_vc_g2

0x10c8,	// (0x00031e99) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x10c8,	// (0x00031e99) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x0004079a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x0004079a) list_double_graphic_heading_pane_vc_g

0x1689,	// (0x0003245a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1689,	// (0x0003245a) list_double_graphic_heading_pane_vc_t1

0x16a5,	// (0x00032476) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x16a5,	// (0x00032476) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x000407a1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x000407a1) list_double_graphic_heading_pane_vc_t

0x111e,	// (0x00031eef) list_setting_pane_vc_g1_ParamLimits

0x111e,	// (0x00031eef) list_setting_pane_vc_g1

0x112a,	// (0x00031efb) list_setting_pane_vc_g2_ParamLimits

0x112a,	// (0x00031efb) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00040590) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00040590) list_setting_pane_vc_g

0x16c3,	// (0x00032494) list_setting_pane_vc_t1_ParamLimits

0x16c3,	// (0x00032494) list_setting_pane_vc_t1

0x16df,	// (0x000324b0) list_setting_pane_vc_t2_ParamLimits

0x16df,	// (0x000324b0) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x000407cf) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x000407cf) list_setting_pane_vc_t

0x1184,	// (0x00031f55) set_value_pane_cp_vc_ParamLimits

0x1184,	// (0x00031f55) set_value_pane_cp_vc

0x10bc,	// (0x00031e8d) list_single_number_heading_pane_vc_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_single_number_heading_pane_vc_g1

0x10c8,	// (0x00031e99) list_single_number_heading_pane_vc_g2_ParamLimits

0x10c8,	// (0x00031e99) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040374) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040374) list_single_number_heading_pane_vc_g

0x16fb,	// (0x000324cc) list_single_number_heading_pane_vc_t1_ParamLimits

0x16fb,	// (0x000324cc) list_single_number_heading_pane_vc_t1

0x1711,	// (0x000324e2) list_single_number_heading_pane_vc_t2_ParamLimits

0x1711,	// (0x000324e2) list_single_number_heading_pane_vc_t2

0x1723,	// (0x000324f4) list_single_number_heading_pane_vc_t3_ParamLimits

0x1723,	// (0x000324f4) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x000407d4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x000407d4) list_single_number_heading_pane_vc_t

0x102d,	// (0x00031dfe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x102d,	// (0x00031dfe) list_single_graphic_heading_pane_vc_g1

0x10bc,	// (0x00031e8d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x10bc,	// (0x00031e8d) list_single_graphic_heading_pane_vc_g4

0x10c8,	// (0x00031e99) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x10c8,	// (0x00031e99) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0a,	// (0x000407db) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0a,	// (0x000407db) list_single_graphic_heading_pane_vc_g

0x1735,	// (0x00032506) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1735,	// (0x00032506) list_single_graphic_heading_pane_vc_t1

0x174b,	// (0x0003251c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x174b,	// (0x0003251c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x000407e2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x000407e2) list_single_graphic_heading_pane_vc_t

0x10bc,	// (0x00031e8d) list_double2_pane_vc_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_double2_pane_vc_g1

0x10c8,	// (0x00031e99) list_double2_pane_vc_g2_ParamLimits

0x10c8,	// (0x00031e99) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040374) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040374) list_double2_pane_vc_g

0x175d,	// (0x0003252e) list_double2_pane_vc_t1_ParamLimits

0x175d,	// (0x0003252e) list_double2_pane_vc_t1

0x1773,	// (0x00032544) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x1773,	// (0x00032544) list_double2_large_graphic_pane_vc_g1

0xeea9,	// (0x0003fc7a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeea9,	// (0x0003fc7a) list_double2_large_graphic_pane_vc_g2

0xeeb5,	// (0x0003fc86) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeeb5,	// (0x0003fc86) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00040391) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00040391) list_double2_large_graphic_pane_vc_g

0x177f,	// (0x00032550) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x177f,	// (0x00032550) list_double2_large_graphic_pane_vc_t1

0x1795,	// (0x00032566) list_double_time_pane_vc_g1_ParamLimits

0x1795,	// (0x00032566) list_double_time_pane_vc_g1

0x17a1,	// (0x00032572) list_double_time_pane_vc_g2_ParamLimits

0x17a1,	// (0x00032572) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x000407e7) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x000407e7) list_double_time_pane_vc_g

0x17ad,	// (0x0003257e) list_double_time_pane_vc_t1_ParamLimits

0x17ad,	// (0x0003257e) list_double_time_pane_vc_t1

0x17d1,	// (0x000325a2) list_double_time_pane_vc_t2_ParamLimits

0x17d1,	// (0x000325a2) list_double_time_pane_vc_t2

0x181b,	// (0x000325ec) list_double_time_pane_vc_t3_ParamLimits

0x181b,	// (0x000325ec) list_double_time_pane_vc_t3

0x182d,	// (0x000325fe) list_double_time_pane_vc_t4_ParamLimits

0x182d,	// (0x000325fe) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x000407ec) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x000407ec) list_double_time_pane_vc_t

0x10bc,	// (0x00031e8d) list_double_pane_vc_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_double_pane_vc_g1

0x10c8,	// (0x00031e99) list_double_pane_vc_g2_ParamLimits

0x10c8,	// (0x00031e99) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040374) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040374) list_double_pane_vc_g

0x1841,	// (0x00032612) list_double_pane_vc_t1_ParamLimits

0x1841,	// (0x00032612) list_double_pane_vc_t1

0x1855,	// (0x00032626) list_double_pane_vc_t2_ParamLimits

0x1855,	// (0x00032626) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x000407f5) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x000407f5) list_double_pane_vc_t

0x10bc,	// (0x00031e8d) list_double_number_pane_vc_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_double_number_pane_vc_g1

0x10c8,	// (0x00031e99) list_double_number_pane_vc_g2_ParamLimits

0x10c8,	// (0x00031e99) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040374) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040374) list_double_number_pane_vc_g

0x186d,	// (0x0003263e) list_double_number_pane_vc_t1_ParamLimits

0x186d,	// (0x0003263e) list_double_number_pane_vc_t1

0x187f,	// (0x00032650) list_double_number_pane_vc_t2_ParamLimits

0x187f,	// (0x00032650) list_double_number_pane_vc_t2

0x1893,	// (0x00032664) list_double_number_pane_vc_t3_ParamLimits

0x1893,	// (0x00032664) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x000407fa) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x000407fa) list_double_number_pane_vc_t

0x18ab,	// (0x0003267c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x18ab,	// (0x0003267c) list_double_large_graphic_pane_vc_g1

0x18c7,	// (0x00032698) list_double_large_graphic_pane_vc_g2_ParamLimits

0x18c7,	// (0x00032698) list_double_large_graphic_pane_vc_g2

0x18db,	// (0x000326ac) list_double_large_graphic_pane_vc_g3_ParamLimits

0x18db,	// (0x000326ac) list_double_large_graphic_pane_vc_g3

0x18ea,	// (0x000326bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x18ea,	// (0x000326bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x00040801) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x00040801) list_double_large_graphic_pane_vc_g

0x18f9,	// (0x000326ca) list_double_large_graphic_pane_vc_t1_ParamLimits

0x18f9,	// (0x000326ca) list_double_large_graphic_pane_vc_t1

0x1915,	// (0x000326e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x1915,	// (0x000326e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x0004080a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x0004080a) list_double_large_graphic_pane_vc_t

0x10bc,	// (0x00031e8d) list_double_heading_pane_vc_g1_ParamLimits

0x10bc,	// (0x00031e8d) list_double_heading_pane_vc_g1

0x10c8,	// (0x00031e99) list_double_heading_pane_vc_g2_ParamLimits

0x10c8,	// (0x00031e99) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040374) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040374) list_double_heading_pane_vc_g

0x1937,	// (0x00032708) list_double_heading_pane_vc_t1_ParamLimits

0x1937,	// (0x00032708) list_double_heading_pane_vc_t1

0x194b,	// (0x0003271c) list_double_heading_pane_vc_t2_ParamLimits

0x194b,	// (0x0003271c) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x0004080f) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0004080f) list_double_heading_pane_vc_t

0x1963,	// (0x00032734) list_double_graphic_pane_vc_g1_ParamLimits

0x1963,	// (0x00032734) list_double_graphic_pane_vc_g1

0x1976,	// (0x00032747) list_double_graphic_pane_vc_g2_ParamLimits

0x1976,	// (0x00032747) list_double_graphic_pane_vc_g2

0x10bc,	// (0x00031e8d) list_double_graphic_pane_vc_g3_ParamLimits

0x10bc,	// (0x00031e8d) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x00040814) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00040814) list_double_graphic_pane_vc_g

0x1993,	// (0x00032764) list_double_graphic_pane_vc_t1_ParamLimits

0x1993,	// (0x00032764) list_double_graphic_pane_vc_t1

0x19bd,	// (0x0003278e) list_double_graphic_pane_vc_t2_ParamLimits

0x19bd,	// (0x0003278e) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004081d) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004081d) list_double_graphic_pane_vc_t

0xee86,	// (0x0003fc57) aid_size_cell_fastswap

0xb298,	// (0x0003c069) aid_size_cell_touch_ParamLimits

0xb298,	// (0x0003c069) aid_size_cell_touch

0xf46a,	// (0x0004023b) popup_fast_swap_wide_window_ParamLimits

0xf46a,	// (0x0004023b) popup_fast_swap_wide_window

0xb448,	// (0x0003c219) touch_pane_ParamLimits

0xb448,	// (0x0003c219) touch_pane

0x354d,	// (0x0003431e) button_value_adjust_pane_cp2

0x0156,	// (0x00030f27) button_value_adjust_pane_cp4

0x0176,	// (0x00030f47) form_field_data_pane_cp2

0xbc4c,	// (0x0003ca1d) form_field_data_wide_pane_cp2

0x3cba,	// (0x00034a8b) bg_scroll_pane_ParamLimits

0x0556,	// (0x00031327) scroll_handle_pane_ParamLimits

0x056a,	// (0x0003133b) scroll_sc2_down_pane_ParamLimits

0x056a,	// (0x0003133b) scroll_sc2_down_pane

0x3ceb,	// (0x00034abc) scroll_sc2_up_pane_ParamLimits

0x3ceb,	// (0x00034abc) scroll_sc2_up_pane

0xdd8a,	// (0x0003eb5b) grid_wheel_folder_pane_g1_ParamLimits

0xdd8a,	// (0x0003eb5b) grid_wheel_folder_pane_g1

0x07b9,	// (0x0003158a) clock_nsta_pane_cp2_ParamLimits

0x07b9,	// (0x0003158a) clock_nsta_pane_cp2

0xd1fc,	// (0x0003dfcd) listscroll_midp_pane_ParamLimits

0xd208,	// (0x0003dfd9) midp_canvas_pane

0x47e2,	// (0x000355b3) nsta_clock_indic_pane

0x4816,	// (0x000355e7) listscroll_form_pane_vc

0x481e,	// (0x000355ef) listscroll_set_pane_vc_ParamLimits

0x481e,	// (0x000355ef) listscroll_set_pane_vc

0xd485,	// (0x0003e256) clock_nsta_pane

0xd4af,	// (0x0003e280) indicator_nsta_pane

0x4c72,	// (0x00035a43) bg_popup_sub_pane_cp2_ParamLimits

0x4c86,	// (0x00035a57) find_pane_cp2_ParamLimits

0x4c86,	// (0x00035a57) find_pane_cp2

0x4c9c,	// (0x00035a6d) grid_toobar_pane_ParamLimits

0x4d7c,	// (0x00035b4d) list_form_gen_pane_vc_ParamLimits

0x4d7c,	// (0x00035b4d) list_form_gen_pane_vc

0x4d92,	// (0x00035b63) scroll_pane_cp8_vc_ParamLimits

0x4d92,	// (0x00035b63) scroll_pane_cp8_vc

0x4e0e,	// (0x00035bdf) data_form_wide_pane_vc_ParamLimits

0x4e0e,	// (0x00035bdf) data_form_wide_pane_vc

0x4e1a,	// (0x00035beb) form_field_data_wide_pane_vc_g1

0x4e22,	// (0x00035bf3) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e22,	// (0x00035bf3) form_field_data_wide_pane_vc_t1

0x3561,	// (0x00034332) input_focus_pane_cp6_vc_ParamLimits

0x3561,	// (0x00034332) input_focus_pane_cp6_vc

0x5168,	// (0x00035f39) list_midp_pane_ParamLimits

0x64cd,	// (0x0003729e) scroll_pane_cp16_ParamLimits

0x64cd,	// (0x0003729e) scroll_pane_cp16

0x51be,	// (0x00035f8f) button_value_adjust_pane_ParamLimits

0x51be,	// (0x00035f8f) button_value_adjust_pane

0xd9bc,	// (0x0003e78d) button_value_adjust_pane_cp6_ParamLimits

0xd9bc,	// (0x0003e78d) button_value_adjust_pane_cp6

0xdad6,	// (0x0003e8a7) settings_code_pane_cp_ParamLimits

0xdad6,	// (0x0003e8a7) settings_code_pane_cp

0xdf27,	// (0x0003ecf8) cell_touch_pane_g1

0xdf27,	// (0x0003ecf8) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x000404af) cell_touch_pane_g

0xdc68,	// (0x0003ea39) cell_touch_pane_cp_ParamLimits

0xdc68,	// (0x0003ea39) cell_touch_pane_cp

0xdc84,	// (0x0003ea55) cell_touch_pane_ParamLimits

0xdc84,	// (0x0003ea55) cell_touch_pane

0xdf27,	// (0x0003ecf8) scroll_sc2_down_pane_g1

0xdf27,	// (0x0003ecf8) scroll_sc2_up_pane_g1

0x2bf4,	// (0x000339c5) bg_set_opt_pane_cp4_vc

0x685d,	// (0x0003762e) list_set_graphic_pane_vc_g1_ParamLimits

0x685d,	// (0x0003762e) list_set_graphic_pane_vc_g1

0x6869,	// (0x0003763a) list_set_graphic_pane_vc_g2_ParamLimits

0x6869,	// (0x0003763a) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x000407a6) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x000407a6) list_set_graphic_pane_vc_g

0x6875,	// (0x00037646) text_primary_small_cp13_vc_ParamLimits

0x6875,	// (0x00037646) text_primary_small_cp13_vc

0x6899,	// (0x0003766a) list_set_graphic_pane_vc_ParamLimits

0x6899,	// (0x0003766a) list_set_graphic_pane_vc

0x2bf4,	// (0x000339c5) input_focus_pane_cp2_vc

0xdf27,	// (0x0003ecf8) setting_code_pane_vc_g1

0x2d1f,	// (0x00033af0) setting_code_pane_vc_t1

0x68ac,	// (0x0003767d) set_text_pane_vc_t1_ParamLimits

0x68ac,	// (0x0003767d) set_text_pane_vc_t1

0x2bf4,	// (0x000339c5) input_focus_pane_cp1_vc

0x68c8,	// (0x00037699) list_set_text_pane_vc

0xdf27,	// (0x0003ecf8) setting_text_pane_vc_g1

0x2bf4,	// (0x000339c5) bg_set_opt_pane_cp2_vc

0x2d16,	// (0x00033ae7) setting_slider_graphic_pane_vc_g1

0x68d2,	// (0x000376a3) setting_slider_graphic_pane_vc_t1

0x68e2,	// (0x000376b3) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x000407ab) setting_slider_graphic_pane_vc_t

0x68f2,	// (0x000376c3) slider_set_pane_cp_vc

0x68fa,	// (0x000376cb) slider_set_pane_vc_g1

0x6903,	// (0x000376d4) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x000407b0) slider_set_pane_vc_g

0x35b9,	// (0x0003438a) set_opt_bg_pane_g1_copy1

0x35c1,	// (0x00034392) set_opt_bg_pane_g2_copy1

0x692f,	// (0x00037700) set_opt_bg_pane_g3_copy1

0x35d1,	// (0x000343a2) set_opt_bg_pane_g4_copy1

0x35d9,	// (0x000343aa) set_opt_bg_pane_g5_copy1

0x35e1,	// (0x000343b2) set_opt_bg_pane_g6_copy1

0x6939,	// (0x0003770a) set_opt_bg_pane_g7_copy1

0x6943,	// (0x00037714) set_opt_bg_pane_g8_copy1

0x694d,	// (0x0003771e) set_opt_bg_pane_g9_copy1

0x2bf4,	// (0x000339c5) bg_set_opt_pane_cp_vc

0x6957,	// (0x00037728) setting_slider_pane_vc_t1

0x6966,	// (0x00037737) setting_slider_pane_vc_t2

0x6976,	// (0x00037747) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x000407bf) setting_slider_pane_vc_t

0x6986,	// (0x00037757) slider_set_pane_vc

0x1272,	// (0x00032043) volume_set_pane_vc_g1

0x127b,	// (0x0003204c) volume_set_pane_vc_g2

0x1284,	// (0x00032055) volume_set_pane_vc_g3

0x128d,	// (0x0003205e) volume_set_pane_vc_g4

0x1296,	// (0x00032067) volume_set_pane_vc_g5

0x129f,	// (0x00032070) volume_set_pane_vc_g6

0x12a8,	// (0x00032079) volume_set_pane_vc_g7

0x12b1,	// (0x00032082) volume_set_pane_vc_g8

0x12ba,	// (0x0003208b) volume_set_pane_vc_g9

0x12c3,	// (0x00032094) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x0004065d) volume_set_pane_vc_g

0x698e,	// (0x0003775f) volume_set_pane_vc

0x6996,	// (0x00037767) button_value_adjust_pane_cp1_vc

0x69a0,	// (0x00037771) list_highlight_pane_cp2_vc

0x69a9,	// (0x0003777a) list_set_pane_vc_ParamLimits

0x69a9,	// (0x0003777a) list_set_pane_vc

0x6a07,	// (0x000377d8) main_pane_set_vc_t1_ParamLimits

0x6a07,	// (0x000377d8) main_pane_set_vc_t1

0x6a1c,	// (0x000377ed) main_pane_set_vc_t2_ParamLimits

0x6a1c,	// (0x000377ed) main_pane_set_vc_t2

0x6a2e,	// (0x000377ff) main_pane_set_vc_t3_ParamLimits

0x6a2e,	// (0x000377ff) main_pane_set_vc_t3

0x6a42,	// (0x00037813) main_pane_set_vc_t4_ParamLimits

0x6a42,	// (0x00037813) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x000407c6) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x000407c6) main_pane_set_vc_t

0x6a56,	// (0x00037827) setting_code_pane_vc_ParamLimits

0x6a56,	// (0x00037827) setting_code_pane_vc

0x6a67,	// (0x00037838) setting_slider_graphic_pane_vc

0x6a67,	// (0x00037838) setting_slider_pane_vc

0x6a67,	// (0x00037838) setting_text_pane_vc

0x6a67,	// (0x00037838) setting_volume_pane_vc

0x6a71,	// (0x00037842) scroll_pane_cp121_vc

0x353b,	// (0x0003430c) set_content_pane_vc

0x6a79,	// (0x0003784a) button_value_adjust_pane_g1

0x6a82,	// (0x00037853) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x00040822) button_value_adjust_pane_g

0x6a8b,	// (0x0003785c) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a8b,	// (0x0003785c) form_field_slider_wide_pane_vc_t1

0x6a9f,	// (0x00037870) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a9f,	// (0x00037870) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x00040827) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x00040827) form_field_slider_wide_pane_vc_t

0x2f4f,	// (0x00033d20) input_focus_pane_cp10_vc_ParamLimits

0x2f4f,	// (0x00033d20) input_focus_pane_cp10_vc

0x6acd,	// (0x0003789e) slider_cont_pane_cp1_vc_ParamLimits

0x6acd,	// (0x0003789e) slider_cont_pane_cp1_vc

0x6adf,	// (0x000378b0) slider_form_pane_g1_cp2

0x6903,	// (0x000376d4) slider_form_pane_g2_cp2

0x6b0c,	// (0x000378dd) form_field_slider_pane_vc_t3

0x6b1a,	// (0x000378eb) form_field_slider_pane_vc_t4

0x6b28,	// (0x000378f9) slider_form_pane_vc_ParamLimits

0x6b28,	// (0x000378f9) slider_form_pane_vc

0x6b35,	// (0x00037906) form_field_slider_pane_vc_t1_ParamLimits

0x6b35,	// (0x00037906) form_field_slider_pane_vc_t1

0x6a9f,	// (0x00037870) form_field_slider_pane_vc_t2_ParamLimits

0x6a9f,	// (0x00037870) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x00040839) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x00040839) form_field_slider_pane_vc_t

0x2f4f,	// (0x00033d20) input_focus_pane_cp9_vc_ParamLimits

0x2f4f,	// (0x00033d20) input_focus_pane_cp9_vc

0x6b51,	// (0x00037922) slider_cont_pane_vc_ParamLimits

0x6b51,	// (0x00037922) slider_cont_pane_vc

0x6b65,	// (0x00037936) list_form_graphic_pane_cp_vc_ParamLimits

0x6b65,	// (0x00037936) list_form_graphic_pane_cp_vc

0x4e1a,	// (0x00035beb) form_field_popup_wide_pane_vc_g1

0x6b7a,	// (0x0003794b) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b7a,	// (0x0003794b) form_field_popup_wide_pane_vc_t1

0x3561,	// (0x00034332) input_focus_pane_cp8_vc_ParamLimits

0x3561,	// (0x00034332) input_focus_pane_cp8_vc

0x6bbf,	// (0x00037990) list_form_wide_pane_vc_ParamLimits

0x6bbf,	// (0x00037990) list_form_wide_pane_vc

0x6bcb,	// (0x0003799c) list_form_graphic_pane_vc_g1

0x6bd3,	// (0x000379a4) list_form_graphic_pane_vc_t1_ParamLimits

0x6bd3,	// (0x000379a4) list_form_graphic_pane_vc_t1

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp5_vc_ParamLimits

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp5_vc

0x6bef,	// (0x000379c0) list_form_graphic_pane_vc_ParamLimits

0x6bef,	// (0x000379c0) list_form_graphic_pane_vc

0x4e1a,	// (0x00035beb) form_field_popup_pane_vc_g1

0x6c05,	// (0x000379d6) form_field_popup_pane_vc_t1_ParamLimits

0x6c05,	// (0x000379d6) form_field_popup_pane_vc_t1

0x3561,	// (0x00034332) input_focus_pane_cp7_vc_ParamLimits

0x3561,	// (0x00034332) input_focus_pane_cp7_vc

0x6c1c,	// (0x000379ed) list_form_pane_vc_ParamLimits

0x6c1c,	// (0x000379ed) list_form_pane_vc

0x6c28,	// (0x000379f9) data_form_pane_vc_t1_ParamLimits

0x6c28,	// (0x000379f9) data_form_pane_vc_t1

0x35b9,	// (0x0003438a) input_focus_pane_vc_g1

0x35c1,	// (0x00034392) input_focus_pane_vc_g2

0x35c9,	// (0x0003439a) input_focus_pane_vc_g3

0x35d1,	// (0x000343a2) input_focus_pane_vc_g4

0x35d9,	// (0x000343aa) input_focus_pane_vc_g5

0x35e1,	// (0x000343b2) input_focus_pane_vc_g6

0x35e9,	// (0x000343ba) input_focus_pane_vc_g7

0x35f1,	// (0x000343c2) input_focus_pane_vc_g8

0x35f9,	// (0x000343ca) input_focus_pane_vc_g9

0xdf27,	// (0x0003ecf8) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x00040438) input_focus_pane_vc_g

0x4e0e,	// (0x00035bdf) data_form_pane_vc_ParamLimits

0x4e0e,	// (0x00035bdf) data_form_pane_vc

0x4e1a,	// (0x00035beb) form_field_data_pane_vc_g1

0x6c43,	// (0x00037a14) form_field_data_pane_vc_t1_ParamLimits

0x6c43,	// (0x00037a14) form_field_data_pane_vc_t1

0x3561,	// (0x00034332) input_focus_pane_vc_ParamLimits

0x3561,	// (0x00034332) input_focus_pane_vc

0x6c5d,	// (0x00037a2e) button_value_adjust_pane_cp3_vc

0x6c65,	// (0x00037a36) button_value_adjust_pane_cp5_vc

0x6c6d,	// (0x00037a3e) form_field_data_pane_vc_ParamLimits

0x6c6d,	// (0x00037a3e) form_field_data_pane_vc

0x6c84,	// (0x00037a55) form_field_data_pane_vc_cp2

0x6c8c,	// (0x00037a5d) form_field_data_wide_pane_vc_ParamLimits

0x6c8c,	// (0x00037a5d) form_field_data_wide_pane_vc

0x6ca2,	// (0x00037a73) form_field_data_wide_pane_vc_cp2

0x6caa,	// (0x00037a7b) form_field_popup_pane_vc_ParamLimits

0x6caa,	// (0x00037a7b) form_field_popup_pane_vc

0x6cc1,	// (0x00037a92) form_field_popup_wide_pane_vc_ParamLimits

0x6cc1,	// (0x00037a92) form_field_popup_wide_pane_vc

0x6cd7,	// (0x00037aa8) form_field_slider_pane_vc_ParamLimits

0x6cd7,	// (0x00037aa8) form_field_slider_pane_vc

0x6cea,	// (0x00037abb) form_field_slider_wide_pane_vc_ParamLimits

0x6cea,	// (0x00037abb) form_field_slider_wide_pane_vc

0xdca2,	// (0x0003ea73) grid_touch_1_pane_ParamLimits

0xdca2,	// (0x0003ea73) grid_touch_1_pane

0xdcb6,	// (0x0003ea87) grid_touch_2_pane_ParamLimits

0xdcb6,	// (0x0003ea87) grid_touch_2_pane

0x6dce,	// (0x00037b9f) touch_pane_g1_ParamLimits

0x6dce,	// (0x00037b9f) touch_pane_g1

0x6d21,	// (0x00037af2) cell_app_pane_cp_wide_ParamLimits

0x6d21,	// (0x00037af2) cell_app_pane_cp_wide

0x6d32,	// (0x00037b03) grid_popup_fast_wide_pane_ParamLimits

0x6d32,	// (0x00037b03) grid_popup_fast_wide_pane

0x6d46,	// (0x00037b17) scroll_pane_cp19_ParamLimits

0x6d46,	// (0x00037b17) scroll_pane_cp19

0x2bf4,	// (0x000339c5) bg_popup_window_pane_cp20

0x6d5a,	// (0x00037b2b) listscroll_popup_fast_wide_pane

0xdce0,	// (0x0003eab1) grid_indicator_nsta_pane

0x6d74,	// (0x00037b45) clock_nsta_pane_g1

0x6d7d,	// (0x00037b4e) clock_nsta_pane_t1

0xdcec,	// (0x0003eabd) cell_indicator_nsta_pane_ParamLimits

0xdcec,	// (0x0003eabd) cell_indicator_nsta_pane

0x6dce,	// (0x00037b9f) cell_indicator_nsta_pane_g1

0xdd07,	// (0x0003ead8) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x0004084a) cell_indicator_nsta_pane_g

0x6dee,	// (0x00037bbf) clock_nsta_pane_cp

0x6df7,	// (0x00037bc8) indicator_nsta_pane_cp

0x6e01,	// (0x00037bd2) nsta_clock_indic_pane_g1

0x2d9d,	// (0x00033b6e) grid_indicator_pane

0x3de0,	// (0x00034bb1) scroll_pane_cp29

0x0708,	// (0x000314d9) indicator_nsta_pane_cp2_ParamLimits

0x0708,	// (0x000314d9) indicator_nsta_pane_cp2

0x2cd4,	// (0x00033aa5) main_apps_wheel_pane

0x5029,	// (0x00035dfa) form_midp_field_text_pane_ParamLimits

0x5174,	// (0x00035f45) scroll_bar_cp050_ParamLimits

0x6e5a,	// (0x00037c2b) cell_indicator_pane_ParamLimits

0x6e5a,	// (0x00037c2b) cell_indicator_pane

0x6e71,	// (0x00037c42) cell_indicator_pane_g1

0xdd14,	// (0x0003eae5) grid_wheel_folder_pane_ParamLimits

0xdd14,	// (0x0003eae5) grid_wheel_folder_pane

0xdd22,	// (0x0003eaf3) list_wheel_apps_pane_ParamLimits

0xdd22,	// (0x0003eaf3) list_wheel_apps_pane

0xdd30,	// (0x0003eb01) main_apps_wheel_pane_g1_ParamLimits

0xdd30,	// (0x0003eb01) main_apps_wheel_pane_g1

0xdd3c,	// (0x0003eb0d) main_apps_wheel_pane_g2_ParamLimits

0xdd3c,	// (0x0003eb0d) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x00040866) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x00040866) main_apps_wheel_pane_g

0xdd4a,	// (0x0003eb1b) main_apps_wheel_pane_t1_ParamLimits

0xdd4a,	// (0x0003eb1b) main_apps_wheel_pane_t1

0xdd5e,	// (0x0003eb2f) list_wheel_apps_pane_g1

0xdd66,	// (0x0003eb37) list_wheel_apps_pane_g2

0xdd6e,	// (0x0003eb3f) list_wheel_apps_pane_g3

0xdd76,	// (0x0003eb47) list_wheel_apps_pane_g4

0xdd80,	// (0x0003eb51) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x0004086b) list_wheel_apps_pane_g

0x4366,	// (0x00035137) navi_icon_text_pane

0xd379,	// (0x0003e14a) aid_fill_nsta

0x6f36,	// (0x00037d07) navi_icon_text_pane_g1

0x6f42,	// (0x00037d13) navi_icon_text_pane_t1

0x41f9,	// (0x00034fca) list_set_graphic_pane_t1_ParamLimits

0x41f9,	// (0x00034fca) list_set_graphic_pane_t1

0x58df,	// (0x000366b0) popup_midp_note_alarm_window_t6_ParamLimits

0x58df,	// (0x000366b0) popup_midp_note_alarm_window_t6

0x58f1,	// (0x000366c2) popup_midp_note_alarm_window_t7_ParamLimits

0x58f1,	// (0x000366c2) popup_midp_note_alarm_window_t7

0x5903,	// (0x000366d4) popup_midp_note_alarm_window_t8_ParamLimits

0x5903,	// (0x000366d4) popup_midp_note_alarm_window_t8

0x5915,	// (0x000366e6) popup_midp_note_alarm_window_t9_ParamLimits

0x5915,	// (0x000366e6) popup_midp_note_alarm_window_t9

0x5927,	// (0x000366f8) popup_midp_note_alarm_window_t10_ParamLimits

0x5927,	// (0x000366f8) popup_midp_note_alarm_window_t10

0x5939,	// (0x0003670a) popup_midp_note_alarm_window_t11_ParamLimits

0x5939,	// (0x0003670a) popup_midp_note_alarm_window_t11

0x594b,	// (0x0003671c) scroll_pane_cp17_ParamLimits

0x594b,	// (0x0003671c) scroll_pane_cp17

0x1272,	// (0x00032043) volume_small_pane_cp_g1

0x19e7,	// (0x000327b8) volume_small_pane_cp_g2

0x19f0,	// (0x000327c1) volume_small_pane_cp_g3

0x19f9,	// (0x000327ca) volume_small_pane_cp_g4

0x1a02,	// (0x000327d3) volume_small_pane_cp_g5

0x1a0b,	// (0x000327dc) volume_small_pane_cp_g6

0x1a14,	// (0x000327e5) volume_small_pane_cp_g7

0x1a1d,	// (0x000327ee) volume_small_pane_cp_g8

0x1a26,	// (0x000327f7) volume_small_pane_cp_g9

0x1a2f,	// (0x00032800) volume_small_pane_cp_g10

0x45c3,	// (0x00035394) midp_ticker_pane_g1_ParamLimits

0x45cf,	// (0x000353a0) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00040504) midp_ticker_pane_g_ParamLimits

0x45db,	// (0x000353ac) midp_ticker_pane_t1_ParamLimits

0xd39d,	// (0x0003e16e) aid_fill_nsta_2

0x5160,	// (0x00035f31) list_form2_midp_pane

0x62a4,	// (0x00037075) midp_editing_number_pane_ParamLimits

0x62b3,	// (0x00037084) midp_ticker_pane_ParamLimits

0x6f54,	// (0x00037d25) form2_midp_field_pane

0x6f78,	// (0x00037d49) scroll_pane_cp51

0x6f98,	// (0x00037d69) form2_midp_button_pane_ParamLimits

0x6f98,	// (0x00037d69) form2_midp_button_pane

0x6faa,	// (0x00037d7b) form2_midp_content_pane_ParamLimits

0x6faa,	// (0x00037d7b) form2_midp_content_pane

0x6fc4,	// (0x00037d95) form2_midp_field_choice_group_pane

0x6fcc,	// (0x00037d9d) form2_midp_field_pane_g1

0x6fd4,	// (0x00037da5) form2_midp_field_pane_g2

0x6fdc,	// (0x00037dad) form2_midp_field_pane_g3

0x6fe4,	// (0x00037db5) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x00040890) form2_midp_field_pane_g

0x6fec,	// (0x00037dbd) form2_midp_gauge_slider_pane

0x6ff4,	// (0x00037dc5) form2_midp_gauge_wait_pane

0x6ffc,	// (0x00037dcd) form2_midp_image_pane_ParamLimits

0x6ffc,	// (0x00037dcd) form2_midp_image_pane

0x7017,	// (0x00037de8) form2_midp_label_pane_ParamLimits

0x7017,	// (0x00037de8) form2_midp_label_pane

0xddb3,	// (0x0003eb84) form2_midp_label_pane_cp_ParamLimits

0xddb3,	// (0x0003eb84) form2_midp_label_pane_cp

0x7051,	// (0x00037e22) form2_midp_string_pane_ParamLimits

0x7051,	// (0x00037e22) form2_midp_string_pane

0xc75f,	// (0x0003d530) form2_midp_text_pane_ParamLimits

0xc75f,	// (0x0003d530) form2_midp_text_pane

0x7063,	// (0x00037e34) form2_midp_time_pane

0x7073,	// (0x00037e44) input_focus_pane_cp51_ParamLimits

0x7073,	// (0x00037e44) input_focus_pane_cp51

0x708b,	// (0x00037e5c) form2_midp_label_pane_t1_ParamLimits

0x708b,	// (0x00037e5c) form2_midp_label_pane_t1

0xc778,	// (0x0003d549) form2_mdip_text_pane_t1_ParamLimits

0xc778,	// (0x0003d549) form2_mdip_text_pane_t1

0x1a71,	// (0x00032842) form2_midp_time_pane_t1

0x70d4,	// (0x00037ea5) form2_midp_gauge_slider_pane_t1

0xddd2,	// (0x0003eba3) form2_midp_gauge_slider_pane_t2

0xdde4,	// (0x0003ebb5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x00040899) form2_midp_gauge_slider_pane_t

0x710a,	// (0x00037edb) form2_midp_slider_pane

0x7116,	// (0x00037ee7) form2_midp_gauge_wait_pane_t1

0x7124,	// (0x00037ef5) form2_midp_wait_pane_ParamLimits

0x7124,	// (0x00037ef5) form2_midp_wait_pane

0xddf6,	// (0x0003ebc7) list_single_2graphic_pane_cp4_ParamLimits

0xddf6,	// (0x0003ebc7) list_single_2graphic_pane_cp4

0xd7b9,	// (0x0003e58a) list_single_midp_graphic_pane_cp_ParamLimits

0xd7b9,	// (0x0003e58a) list_single_midp_graphic_pane_cp

0x2bf4,	// (0x000339c5) list_highlight_pane_cp20

0x7173,	// (0x00037f44) list_single_2graphic_pane_g1_cp4

0x717b,	// (0x00037f4c) list_single_2graphic_pane_g2_cp4

0x7183,	// (0x00037f54) list_single_2graphic_pane_t1_cp4

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp21

0x7192,	// (0x00037f63) list_single_midp_graphic_pane_g4_cp

0x71a1,	// (0x00037f72) list_single_midp_graphic_pane_t1_cp

0xde0a,	// (0x0003ebdb) form2_mdip_string_pane_t1_ParamLimits

0xde0a,	// (0x0003ebdb) form2_mdip_string_pane_t1

0x2bf4,	// (0x000339c5) bg_wml_button_pane_cp2

0xdf27,	// (0x0003ecf8) form2_midp_image_pane_g1

0xeec1,	// (0x0003fc92) list_double_large_graphic_pane_g5_ParamLimits

0xeec1,	// (0x0003fc92) list_double_large_graphic_pane_g5

0xd1fc,	// (0x0003dfcd) midp_form_pane_ParamLimits

0x2cd4,	// (0x00033aa5) main_apps_wheel_pane_ParamLimits

0xc3c0,	// (0x0003d191) popup_preview_window_ParamLimits

0xc3c0,	// (0x0003d191) popup_preview_window

0x0fa8,	// (0x00031d79) popup_touch_info_window_ParamLimits

0x0fa8,	// (0x00031d79) popup_touch_info_window

0x0fc6,	// (0x00031d97) popup_touch_menu_window_ParamLimits

0x0fc6,	// (0x00031d97) popup_touch_menu_window

0xdf1d,	// (0x0003ecee) bg_popup_sub_pane_cp6

0x72af,	// (0x00038080) list_touch_menu_pane

0x72b7,	// (0x00038088) list_single_touch_menu_pane_ParamLimits

0x72b7,	// (0x00038088) list_single_touch_menu_pane

0x72cd,	// (0x0003809e) list_single_touch_menu_pane_t1

0x2cd4,	// (0x00033aa5) bg_popup_sub_pane_cp7_ParamLimits

0x2cd4,	// (0x00033aa5) bg_popup_sub_pane_cp7

0x72db,	// (0x000380ac) heading_sub_pane

0x72e3,	// (0x000380b4) list_touch_info_pane_ParamLimits

0x72e3,	// (0x000380b4) list_touch_info_pane

0x72f2,	// (0x000380c3) list_single_touch_info_pane_ParamLimits

0x72f2,	// (0x000380c3) list_single_touch_info_pane

0x7304,	// (0x000380d5) list_single_touch_info_pane_t1

0x7312,	// (0x000380e3) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x000408a7) list_single_touch_info_pane_t

0x44e6,	// (0x000352b7) bg_popup_heading_pane_cp

0x7320,	// (0x000380f1) heading_sub_pane_t1

0x4da8,	// (0x00035b79) bg_popup_preview_window_pane_cp_ParamLimits

0x4da8,	// (0x00035b79) bg_popup_preview_window_pane_cp

0x72db,	// (0x000380ac) heading_preview_pane

0x72e3,	// (0x000380b4) list_preview_pane_ParamLimits

0x72e3,	// (0x000380b4) list_preview_pane

0x732e,	// (0x000380ff) popup_preview_window_g1

0x72f2,	// (0x000380c3) list_single_preview_pane_ParamLimits

0x72f2,	// (0x000380c3) list_single_preview_pane

0x7336,	// (0x00038107) list_single_preview_pane_g1

0x733e,	// (0x0003810f) list_single_preview_pane_t1

0x7304,	// (0x000380d5) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x000408ac) list_single_preview_pane_t

0x734c,	// (0x0003811d) bg_popup_heading_pane_cp2_ParamLimits

0x734c,	// (0x0003811d) bg_popup_heading_pane_cp2

0x7362,	// (0x00038133) heading_preview_pane_g1

0x736a,	// (0x0003813b) heading_preview_pane_t1_ParamLimits

0x736a,	// (0x0003813b) heading_preview_pane_t1

0x2dc0,	// (0x00033b91) soft_indicator_pane_t1_ParamLimits

0x34d4,	// (0x000342a5) scroll_pane_ParamLimits

0x3cd9,	// (0x00034aaa) scroll_sc2_left_pane

0x3ce2,	// (0x00034ab3) scroll_sc2_right_pane

0x3d01,	// (0x00034ad2) scroll_bg_pane_g1_ParamLimits

0x3d16,	// (0x00034ae7) scroll_bg_pane_g2_ParamLimits

0x3d2e,	// (0x00034aff) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0004048f) scroll_bg_pane_g_ParamLimits

0x3d01,	// (0x00034ad2) scroll_handle_pane_g1_ParamLimits

0x3d50,	// (0x00034b21) scroll_handle_pane_g2_ParamLimits

0x3d2e,	// (0x00034aff) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00040496) scroll_handle_pane_g_ParamLimits

0x0a6c,	// (0x0003183d) popup_choice_list_window_ParamLimits

0x0a6c,	// (0x0003183d) popup_choice_list_window

0x4c7e,	// (0x00035a4f) choice_list_pane

0x4d00,	// (0x00035ad1) cell_toolbar_pane_t1

0x4d28,	// (0x00035af9) toolbar_button_pane_ParamLimits

0x5e05,	// (0x00036bd6) ai_gene_pane_1_t2_ParamLimits

0x5e05,	// (0x00036bd6) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x000406b9) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x000406b9) ai_gene_pane_1_t

0x7387,	// (0x00038158) scroll_sc2_left_pane_g1

0x7387,	// (0x00038158) scroll_sc2_right_pane_g1

0x480a,	// (0x000355db) bg_popup_sub_pane_cp10

0x7391,	// (0x00038162) list_choice_list_pane

0x73aa,	// (0x0003817b) list_single_choice_list_pane_ParamLimits

0x73aa,	// (0x0003817b) list_single_choice_list_pane

0x73bd,	// (0x0003818e) list_single_choice_list_pane_g1

0x3705,	// (0x000344d6) list_single_choice_list_pane_t1_ParamLimits

0x3705,	// (0x000344d6) list_single_choice_list_pane_t1

0x73c5,	// (0x00038196) choice_list_pane_g1

0x73cd,	// (0x0003819e) choice_list_pane_t1

0xdf1d,	// (0x0003ecee) input_focus_pane_cp11

0x3bb6,	// (0x00034987) title_pane_stacon_g2_ParamLimits

0x3bb6,	// (0x00034987) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00040475) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00040475) title_pane_stacon_g

0x44e6,	// (0x000352b7) cursor_press_pane

0xc067,	// (0x0003ce38) popup_fep_hwr_window_ParamLimits

0xc067,	// (0x0003ce38) popup_fep_hwr_window

0x0b92,	// (0x00031963) popup_fep_vkb_window_ParamLimits

0x0b92,	// (0x00031963) popup_fep_vkb_window

0x73db,	// (0x000381ac) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x000408d5) fep_vkb_side_pane_g_ParamLimits

0x1abd,	// (0x0003288e) fep_hwr_candidate_pane_ParamLimits

0x1abd,	// (0x0003288e) fep_hwr_candidate_pane

0x1ae7,	// (0x000328b8) fep_hwr_side_pane_ParamLimits

0x1ae7,	// (0x000328b8) fep_hwr_side_pane

0x1b07,	// (0x000328d8) fep_hwr_top_pane_ParamLimits

0x1b07,	// (0x000328d8) fep_hwr_top_pane

0x1b1f,	// (0x000328f0) fep_hwr_write_pane_ParamLimits

0x1b1f,	// (0x000328f0) fep_hwr_write_pane

0xfb04,	// (0x000408d5) fep_vkb_side_pane_g

0x73e3,	// (0x000381b4) fep_hwr_top_pane_g1

0x73f5,	// (0x000381c6) fep_hwr_top_pane_g2

0x1b59,	// (0x0003292a) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x000408b1) fep_hwr_top_pane_g

0x1b6e,	// (0x0003293f) fep_hwr_top_text_pane

0x3ed0,	// (0x00034ca1) fep_hwr_top_text_pane_g1

0x742b,	// (0x000381fc) fep_hwr_top_text_pane_t1

0x1c64,	// (0x00032a35) fep_hwr_candidate_pane_g1

0x767e,	// (0x0003844f) fep_vkb_keypad_pane_g3_ParamLimits

0x767e,	// (0x0003844f) fep_vkb_keypad_pane_g3

0x76a6,	// (0x00038477) fep_vkb_keypad_pane_g4_ParamLimits

0x76a6,	// (0x00038477) fep_vkb_keypad_pane_g4

0x7715,	// (0x000384e6) fep_vkb_bottom_pane_g2_ParamLimits

0x7715,	// (0x000384e6) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x000408dc) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x000408dc) fep_vkb_bottom_pane_g

0x7387,	// (0x00038158) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x000408e6) cell_vkb_side_pane_g

0x77a0,	// (0x00038571) cell_vkb_side_pane_t1

0x77ae,	// (0x0003857f) cell_vkb_side_pane_t1_copy1

0x7387,	// (0x00038158) bg_fep_vkb_candidate_pane_g2

0x78da,	// (0x000386ab) cell_vkb_candidate_pane_ParamLimits

0x7439,	// (0x0003820a) aid_size_cell_vkb_ParamLimits

0x7439,	// (0x0003820a) aid_size_cell_vkb

0x78da,	// (0x000386ab) cell_vkb_candidate_pane

0x1c8b,	// (0x00032a5c) bg_popup_fep_shadow_pane_g1

0xde8c,	// (0x0003ec5d) fep_vkb_bottom_pane_ParamLimits

0xde8c,	// (0x0003ec5d) fep_vkb_bottom_pane

0x74fd,	// (0x000382ce) fep_vkb_candidate_pane_ParamLimits

0x74fd,	// (0x000382ce) fep_vkb_candidate_pane

0xdeb1,	// (0x0003ec82) fep_vkb_keypad_pane_ParamLimits

0xdeb1,	// (0x0003ec82) fep_vkb_keypad_pane

0xdf3e,	// (0x0003ed0f) fep_vkb_side_pane_ParamLimits

0xdf3e,	// (0x0003ed0f) fep_vkb_side_pane

0xdf7a,	// (0x0003ed4b) fep_vkb_top_pane_ParamLimits

0xdf7a,	// (0x0003ed4b) fep_vkb_top_pane

0x75d7,	// (0x000383a8) fep_vkb_top_pane_g1_ParamLimits

0x75d7,	// (0x000383a8) fep_vkb_top_pane_g1

0x75e6,	// (0x000383b7) fep_vkb_top_pane_g2_ParamLimits

0x75e6,	// (0x000383b7) fep_vkb_top_pane_g2

0x75f5,	// (0x000383c6) fep_vkb_top_pane_g3_ParamLimits

0x75f5,	// (0x000383c6) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x000408cc) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x000408cc) fep_vkb_top_pane_g

0x7613,	// (0x000383e4) fep_vkb_top_text_pane_ParamLimits

0x7613,	// (0x000383e4) fep_vkb_top_text_pane

0xdfb6,	// (0x0003ed87) fep_vkb_side_pane_g1_ParamLimits

0xdfb6,	// (0x0003ed87) fep_vkb_side_pane_g1

0x766d,	// (0x0003843e) grid_vkb_side_pane_ParamLimits

0x766d,	// (0x0003843e) grid_vkb_side_pane

0x1c93,	// (0x00032a64) bg_popup_fep_shadow_pane_g2

0x1c9c,	// (0x00032a6d) bg_popup_fep_shadow_pane_g3

0x1ca4,	// (0x00032a75) bg_popup_fep_shadow_pane_g4

0x1cad,	// (0x00032a7e) bg_popup_fep_shadow_pane_g5

0x1cb7,	// (0x00032a88) bg_popup_fep_shadow_pane_g6

0x1cbf,	// (0x00032a90) bg_popup_fep_shadow_pane_g7

0x35d1,	// (0x000343a2) bg_popup_fep_shadow_pane_g8

0x76c4,	// (0x00038495) grid_vkb_keypad_number_pane_ParamLimits

0x76c4,	// (0x00038495) grid_vkb_keypad_number_pane

0x76d4,	// (0x000384a5) grid_vkb_keypad_pane_ParamLimits

0x76d4,	// (0x000384a5) grid_vkb_keypad_pane

0x76fa,	// (0x000384cb) fep_vkb_bottom_pane_g1_ParamLimits

0x76fa,	// (0x000384cb) fep_vkb_bottom_pane_g1

0x7723,	// (0x000384f4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7723,	// (0x000384f4) grid_vkb_keypad_bottom_left_pane

0x7738,	// (0x00038509) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7738,	// (0x00038509) grid_vkb_keypad_bottom_right_pane

0x774d,	// (0x0003851e) fep_vkb_top_text_pane_g1

0xdffd,	// (0x0003edce) fep_vkb_top_text_pane_t1

0xe00f,	// (0x0003ede0) cell_vkb_side_pane_ParamLimits

0xe00f,	// (0x0003ede0) cell_vkb_side_pane

0x7387,	// (0x00038158) cell_vkb_side_pane_g1

0x77bc,	// (0x0003858d) cell_vkb_keypad_pane_ParamLimits

0x77bc,	// (0x0003858d) cell_vkb_keypad_pane

0x7831,	// (0x00038602) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x000408f9) bg_popup_fep_shadow_pane_g

0x1cd1,	// (0x00032aa2) cell_hwr_side_pane_g1

0x1cd1,	// (0x00032aa2) cell_hwr_side_pane_g2

0x783b,	// (0x0003860c) cell_vkb_keypad_pane_t1

0xe025,	// (0x0003edf6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe025,	// (0x0003edf6) cell_vkb_keypad_bottom_left_pane

0xe03a,	// (0x0003ee0b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe03a,	// (0x0003ee0b) cell_vkb_keypad_bottom_right_pane

0x7387,	// (0x00038158) cell_vkb_keypad_bottom_left_pane_g1

0x7387,	// (0x00038158) cell_vkb_keypad_bottom_right_pane_g1

0x789f,	// (0x00038670) cell_vkb_keypad_number_pane_ParamLimits

0x789f,	// (0x00038670) cell_vkb_keypad_number_pane

0x78be,	// (0x0003868f) cell_vkb_keypad_number_pane_g1

0x78c8,	// (0x00038699) cell_vkb_keypad_number_pane_g2

0x78d1,	// (0x000386a2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x000408eb) cell_vkb_keypad_number_pane_g

0x783b,	// (0x0003860c) cell_vkb_keypad_number_pane_t1

0x78f5,	// (0x000386c6) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x0004090c) cell_hwr_side_pane_g

0x790e,	// (0x000386df) cell_hwr_side_pane_t1

0x1cdb,	// (0x00032aac) cell_hwr_side_pane_t1_copy1

0x1ce9,	// (0x00032aba) cell_hwr_candidate_pane_g1

0x1d18,	// (0x00032ae9) cell_hwr_candidate_pane_t1

0x7387,	// (0x00038158) cell_vkb_candidate_pane_g2

0x7952,	// (0x00038723) cell_vkb_candidate_pane_t1

0x1a84,	// (0x00032855) bg_popup_fep_shadow_pane_ParamLimits

0x1a84,	// (0x00032855) bg_popup_fep_shadow_pane

0x1b39,	// (0x0003290a) bg_fep_hwr_top_pane_g4

0x7407,	// (0x000381d8) bg_hwr_side_pane_g1_ParamLimits

0x7407,	// (0x000381d8) bg_hwr_side_pane_g1

0xc7ad,	// (0x0003d57e) cell_hwr_side_pane_ParamLimits

0xc7ad,	// (0x0003d57e) cell_hwr_side_pane

0x1be5,	// (0x000329b6) fep_hwr_write_pane_g1_ParamLimits

0x1be5,	// (0x000329b6) fep_hwr_write_pane_g1

0x1bf2,	// (0x000329c3) fep_hwr_write_pane_g2_ParamLimits

0x1bf2,	// (0x000329c3) fep_hwr_write_pane_g2

0x1bff,	// (0x000329d0) fep_hwr_write_pane_g3_ParamLimits

0x1bff,	// (0x000329d0) fep_hwr_write_pane_g3

0xc7cd,	// (0x0003d59e) fep_hwr_write_pane_g4_ParamLimits

0xc7cd,	// (0x0003d59e) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x000408b8) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x000408b8) fep_hwr_write_pane_g

0x1b39,	// (0x0003290a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1b39,	// (0x0003290a) bg_fep_hwr_candidate_pane_g2

0x1c22,	// (0x000329f3) cell_hwr_candidate_pane_ParamLimits

0x1c22,	// (0x000329f3) cell_hwr_candidate_pane

0x1c64,	// (0x00032a35) fep_hwr_candidate_pane_g1_ParamLimits

0x7467,	// (0x00038238) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7467,	// (0x00038238) bg_popup_fep_shadow_pane_cp2

0x7605,	// (0x000383d6) fep_vkb_top_pane_g4_ParamLimits

0x7605,	// (0x000383d6) fep_vkb_top_pane_g4

0x764b,	// (0x0003841c) fep_vkb_side_pane_g2_ParamLimits

0x764b,	// (0x0003841c) fep_vkb_side_pane_g2

0xbb5a,	// (0x0003c92b) list_setting_pane_t4_ParamLimits

0xbb5a,	// (0x0003c92b) list_setting_pane_t4

0xbbf4,	// (0x0003c9c5) list_setting_number_pane_t5_ParamLimits

0xbbf4,	// (0x0003c9c5) list_setting_number_pane_t5

0x3f07,	// (0x00034cd8) list_double_heading_pane_cp2_ParamLimits

0x3f07,	// (0x00034cd8) list_double_heading_pane_cp2

0x356f,	// (0x00034340) list_double_heading_pane_g1_cp2_ParamLimits

0x356f,	// (0x00034340) list_double_heading_pane_g1_cp2

0x357b,	// (0x0003434c) list_double_heading_pane_g2_cp2_ParamLimits

0x357b,	// (0x0003434c) list_double_heading_pane_g2_cp2

0x7960,	// (0x00038731) list_double_heading_pane_t1_cp2_ParamLimits

0x7960,	// (0x00038731) list_double_heading_pane_t1_cp2

0x7976,	// (0x00038747) list_double_heading_pane_t2_cp2_ParamLimits

0x7976,	// (0x00038747) list_double_heading_pane_t2_cp2

0xdf15,	// (0x0003ece6) aid_value_unit2

0xf48e,	// (0x0004025f) popup_preview_fixed_window

0x2f5d,	// (0x00033d2e) bg_popup_preview_window_pane_cp02

0x7988,	// (0x00038759) list_preview_fixed_pane

0x79ce,	// (0x0003879f) list_empty_pane_fp_ParamLimits

0x79ce,	// (0x0003879f) list_empty_pane_fp

0x79ce,	// (0x0003879f) list_single_cale_day_pane_fp_ParamLimits

0x79ce,	// (0x0003879f) list_single_cale_day_pane_fp

0x79ce,	// (0x0003879f) list_single_graphic_heading_pane_fp_ParamLimits

0x79ce,	// (0x0003879f) list_single_graphic_heading_pane_fp

0x79ce,	// (0x0003879f) list_single_graphic_pane_fp_ParamLimits

0x79ce,	// (0x0003879f) list_single_graphic_pane_fp

0x79ce,	// (0x0003879f) list_single_heading_pane_fp_ParamLimits

0x79ce,	// (0x0003879f) list_single_heading_pane_fp

0x79ce,	// (0x0003879f) list_single_pane_fp_ParamLimits

0x79ce,	// (0x0003879f) list_single_pane_fp

0x79e3,	// (0x000387b4) list_single_pane_fp_g1_ParamLimits

0x79e3,	// (0x000387b4) list_single_pane_fp_g1

0x1d36,	// (0x00032b07) list_single_pane_fp_g2_ParamLimits

0x1d36,	// (0x00032b07) list_single_pane_fp_g2

0x1d42,	// (0x00032b13) list_single_pane_fp_g3_ParamLimits

0x1d42,	// (0x00032b13) list_single_pane_fp_g3

0x79ef,	// (0x000387c0) list_single_pane_fp_g4_ParamLimits

0x79ef,	// (0x000387c0) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0004091f) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0004091f) list_single_pane_fp_g

0x1d56,	// (0x00032b27) list_single_pane_fp_t1_ParamLimits

0x1d56,	// (0x00032b27) list_single_pane_fp_t1

0x1d6d,	// (0x00032b3e) list_single_graphic_pane_fp_g1_ParamLimits

0x1d6d,	// (0x00032b3e) list_single_graphic_pane_fp_g1

0x79e3,	// (0x000387b4) list_single_graphic_pane_fp_g2_ParamLimits

0x79e3,	// (0x000387b4) list_single_graphic_pane_fp_g2

0x1d36,	// (0x00032b07) list_single_graphic_pane_fp_g3_ParamLimits

0x1d36,	// (0x00032b07) list_single_graphic_pane_fp_g3

0x1d42,	// (0x00032b13) list_single_graphic_pane_fp_g4_ParamLimits

0x1d42,	// (0x00032b13) list_single_graphic_pane_fp_g4

0x79ef,	// (0x000387c0) list_single_graphic_pane_fp_g5_ParamLimits

0x79ef,	// (0x000387c0) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x00040928) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x00040928) list_single_graphic_pane_fp_g

0x1d79,	// (0x00032b4a) list_single_graphic_pane_fp_t1_ParamLimits

0x1d79,	// (0x00032b4a) list_single_graphic_pane_fp_t1

0x1d6d,	// (0x00032b3e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1d6d,	// (0x00032b3e) list_single_graphic_heading_pane_fp_g1

0x79e3,	// (0x000387b4) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x79e3,	// (0x000387b4) list_single_graphic_heading_pane_fp_g2

0x1d36,	// (0x00032b07) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1d36,	// (0x00032b07) list_single_graphic_heading_pane_fp_g3

0x1d42,	// (0x00032b13) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1d42,	// (0x00032b13) list_single_graphic_heading_pane_fp_g4

0x79ef,	// (0x000387c0) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x79ef,	// (0x000387c0) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00040928) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00040928) list_single_graphic_heading_pane_fp_g

0x1d8f,	// (0x00032b60) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1d8f,	// (0x00032b60) list_single_graphic_heading_pane_fp_t1

0x1da5,	// (0x00032b76) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1da5,	// (0x00032b76) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x00040933) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x00040933) list_single_graphic_heading_pane_fp_t

0x1db7,	// (0x00032b88) list_single_cale_day_pane_fp_g1_ParamLimits

0x1db7,	// (0x00032b88) list_single_cale_day_pane_fp_g1

0x79fb,	// (0x000387cc) list_single_cale_day_pane_fp_g2_ParamLimits

0x79fb,	// (0x000387cc) list_single_cale_day_pane_fp_g2

0x3828,	// (0x000345f9) list_single_cale_day_pane_fp_g3_ParamLimits

0x3828,	// (0x000345f9) list_single_cale_day_pane_fp_g3

0x3850,	// (0x00034621) list_single_cale_day_pane_fp_g4_ParamLimits

0x3850,	// (0x00034621) list_single_cale_day_pane_fp_g4

0x3874,	// (0x00034645) list_single_cale_day_pane_fp_g5_ParamLimits

0x3874,	// (0x00034645) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x00040938) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x00040938) list_single_cale_day_pane_fp_g

0x3898,	// (0x00034669) list_single_cale_day_pane_fp_t1_ParamLimits

0x3898,	// (0x00034669) list_single_cale_day_pane_fp_t1

0x38be,	// (0x0003468f) list_single_cale_day_pane_fp_t2_ParamLimits

0x38be,	// (0x0003468f) list_single_cale_day_pane_fp_t2

0x38d7,	// (0x000346a8) list_single_cale_day_pane_fp_t3_ParamLimits

0x38d7,	// (0x000346a8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x00040943) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x00040943) list_single_cale_day_pane_fp_t

0x79e3,	// (0x000387b4) list_empty_pane_fp_g1_ParamLimits

0x79e3,	// (0x000387b4) list_empty_pane_fp_g1

0x38f0,	// (0x000346c1) list_empty_pane_fp_t1

0x38fe,	// (0x000346cf) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0004094a) list_empty_pane_fp_t

0x79e3,	// (0x000387b4) list_single_heading_pane_fp_g1_ParamLimits

0x79e3,	// (0x000387b4) list_single_heading_pane_fp_g1

0x1d36,	// (0x00032b07) list_single_heading_pane_fp_g2_ParamLimits

0x1d36,	// (0x00032b07) list_single_heading_pane_fp_g2

0x1d42,	// (0x00032b13) list_single_heading_pane_fp_g3_ParamLimits

0x1d42,	// (0x00032b13) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0004094f) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004094f) list_single_heading_pane_fp_g

0x390c,	// (0x000346dd) list_single_heading_pane_fp_t1_ParamLimits

0x390c,	// (0x000346dd) list_single_heading_pane_fp_t1

0x391e,	// (0x000346ef) list_single_heading_pane_fp_t2_ParamLimits

0x391e,	// (0x000346ef) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x00040956) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x00040956) list_single_heading_pane_fp_t

0x3773,	// (0x00034544) aid_size_cell_fast

0x2ecd,	// (0x00033c9e) soft_indicator_pane_cp1_t1

0x37b0,	// (0x00034581) cell_app_pane_cp2_ParamLimits

0x37b0,	// (0x00034581) cell_app_pane_cp2

0x1aa6,	// (0x00032877) fep_hwr_candidate_drop_down_list_pane

0x1c7e,	// (0x00032a4f) fep_hwr_candidate_pane_g3_ParamLimits

0x1c7e,	// (0x00032a4f) fep_hwr_candidate_pane_g3

0xdf31,	// (0x0003ed02) fep_hwr_candidate_pane_g4_ParamLimits

0xdf31,	// (0x0003ed02) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x000408c5) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x000408c5) fep_hwr_candidate_pane_g

0x74ec,	// (0x000382bd) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x74ec,	// (0x000382bd) fep_vkb_candidate_drop_down_list_pane

0x78fd,	// (0x000386ce) fep_vkb_candidate_pane_g3

0x7905,	// (0x000386d6) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x000408f2) fep_vkb_candidate_pane_g

0x1ce9,	// (0x00032aba) cell_hwr_candidate_pane_g1_ParamLimits

0x1cf7,	// (0x00032ac8) cell_hwr_candidate_pane_g3_ParamLimits

0x1cf7,	// (0x00032ac8) cell_hwr_candidate_pane_g3

0x86df,	// (0x000394b0) cell_hwr_candidate_pane_g4_ParamLimits

0x86df,	// (0x000394b0) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x00040911) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x00040911) cell_hwr_candidate_pane_g

0x791c,	// (0x000386ed) cell_vkb_candidate_pane_g3_ParamLimits

0x791c,	// (0x000386ed) cell_vkb_candidate_pane_g3

0x7937,	// (0x00038708) cell_vkb_candidate_pane_g4_ParamLimits

0x7937,	// (0x00038708) cell_vkb_candidate_pane_g4

0x7a07,	// (0x000387d8) cell_app_pane_cp2_g1_ParamLimits

0x7a07,	// (0x000387d8) cell_app_pane_cp2_g1

0x7a25,	// (0x000387f6) cell_app_pane_cp2_g2_ParamLimits

0x7a25,	// (0x000387f6) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0004095b) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0004095b) cell_app_pane_cp2_g

0x7a31,	// (0x00038802) cell_app_pane_cp2_t1_ParamLimits

0x7a31,	// (0x00038802) cell_app_pane_cp2_t1

0x3561,	// (0x00034332) grid_highlight_pane_cp1_ParamLimits

0x3561,	// (0x00034332) grid_highlight_pane_cp1

0x1def,	// (0x00032bc0) cell_hwr_candidate_pane_cp1_ParamLimits

0x1def,	// (0x00032bc0) cell_hwr_candidate_pane_cp1

0x1ce9,	// (0x00032aba) fep_hwr_candidate_drop_down_list_pane_g1

0x1e0e,	// (0x00032bdf) fep_hwr_candidate_drop_down_list_pane_g2

0x1e1b,	// (0x00032bec) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x00040960) fep_hwr_candidate_drop_down_list_pane_g

0x1e28,	// (0x00032bf9) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e31,	// (0x00032c02) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e31,	// (0x00032c02) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e3e,	// (0x00032c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e3e,	// (0x00032c0f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e4b,	// (0x00032c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e4b,	// (0x00032c1c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e58,	// (0x00032c29) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e58,	// (0x00032c29) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e73,	// (0x00032c44) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e73,	// (0x00032c44) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e8e,	// (0x00032c5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e8e,	// (0x00032c5f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ea9,	// (0x00032c7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ea9,	// (0x00032c7a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1ec4,	// (0x00032c95) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1ec4,	// (0x00032c95) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x00040967) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x00040967) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7a43,	// (0x00038814) cell_vkb_candidate_pane_cp1_ParamLimits

0x7a43,	// (0x00038814) cell_vkb_candidate_pane_cp1

0x7605,	// (0x000383d6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7605,	// (0x000383d6) fep_vkb_candidate_drop_down_list_pane_g1

0x7a63,	// (0x00038834) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7a63,	// (0x00038834) fep_vkb_candidate_drop_down_list_pane_g2

0x7a70,	// (0x00038841) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7a70,	// (0x00038841) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x00040978) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba7,	// (0x00040978) fep_vkb_candidate_drop_down_list_pane_g

0x7a7d,	// (0x0003884e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7a7d,	// (0x0003884e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7a8a,	// (0x0003885b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7a8a,	// (0x0003885b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7a97,	// (0x00038868) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a97,	// (0x00038868) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7aa3,	// (0x00038874) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7aa3,	// (0x00038874) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7aaf,	// (0x00038880) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7aaf,	// (0x00038880) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7ad0,	// (0x000388a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7ad0,	// (0x000388a1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7af1,	// (0x000388c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7af1,	// (0x000388c2) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b12,	// (0x000388e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b12,	// (0x000388e3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b33,	// (0x00038904) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b33,	// (0x00038904) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x0004097f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x0004097f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb49e,	// (0x0003c26f) title_pane_g1_ParamLimits

0xb4b1,	// (0x0003c282) title_pane_g2_ParamLimits

0xf529,	// (0x000402fa) title_pane_g_ParamLimits

0x3ec0,	// (0x00034c91) aid_call2_pane

0x3ec8,	// (0x00034c99) aid_call_pane

0x3ed0,	// (0x00034ca1) popup_clock_analogue_window_g1

0x3ed0,	// (0x00034ca1) popup_clock_analogue_window_g2

0x057f,	// (0x00031350) popup_clock_analogue_window_g3

0x0588,	// (0x00031359) popup_clock_analogue_window_g4

0xdf27,	// (0x0003ecf8) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x000404a4) popup_clock_analogue_window_g

0x0590,	// (0x00031361) popup_clock_analogue_window_t1

0x059e,	// (0x0003136f) clock_digital_number_pane_ParamLimits

0x059e,	// (0x0003136f) clock_digital_number_pane

0x05aa,	// (0x0003137b) clock_digital_number_pane_cp02_ParamLimits

0x05aa,	// (0x0003137b) clock_digital_number_pane_cp02

0x05b6,	// (0x00031387) clock_digital_number_pane_cp03_ParamLimits

0x05b6,	// (0x00031387) clock_digital_number_pane_cp03

0x05c2,	// (0x00031393) clock_digital_number_pane_cp04_ParamLimits

0x05c2,	// (0x00031393) clock_digital_number_pane_cp04

0x05ce,	// (0x0003139f) clock_digital_separator_pane_ParamLimits

0x05ce,	// (0x0003139f) clock_digital_separator_pane

0x05da,	// (0x000313ab) popup_clock_digital_window_t1_ParamLimits

0x05da,	// (0x000313ab) popup_clock_digital_window_t1

0xdf27,	// (0x0003ecf8) clock_digital_number_pane_g1

0xdf27,	// (0x0003ecf8) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x000404af) clock_digital_number_pane_g

0xdf27,	// (0x0003ecf8) clock_digital_separator_pane_g1

0xdf27,	// (0x0003ecf8) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x000404af) clock_digital_separator_pane_g

0xd379,	// (0x0003e14a) aid_fill_nsta_ParamLimits

0xd4af,	// (0x0003e280) indicator_nsta_pane_ParamLimits

0x4b0b,	// (0x000358dc) popup_clock_analogue_window

0x4b0b,	// (0x000358dc) popup_clock_digital_window

0xdce0,	// (0x0003eab1) grid_indicator_nsta_pane_ParamLimits

0x6d8b,	// (0x00037b5c) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x00040845) clock_nsta_pane_t

0x0543,	// (0x00031314) aid_size_max_handle

0x054d,	// (0x0003131e) aid_size_min_handle

0x44e6,	// (0x000352b7) editor_scroll_pane

0x7b4e,	// (0x0003891f) ex_editor_pane

0x36e1,	// (0x000344b2) scroll_pane_cp13

0x3500,	// (0x000342d1) scroll_pane_cp14

0x3eff,	// (0x00034cd0) scroll_pane_cp36

0xd141,	// (0x0003df12) list_single_graphic_hl_pane_cp2_ParamLimits

0xd141,	// (0x0003df12) list_single_graphic_hl_pane_cp2

0xdb11,	// (0x0003e8e2) list_single_graphic_hl_pane_ParamLimits

0xdb11,	// (0x0003e8e2) list_single_graphic_hl_pane

0x3934,	// (0x00034705) aid_size_min_hl_cp1

0x7b56,	// (0x00038927) list_highlight_pane_cp34_ParamLimits

0x7b56,	// (0x00038927) list_highlight_pane_cp34

0x7b67,	// (0x00038938) list_single_graphic_hl_pane_g1_ParamLimits

0x7b67,	// (0x00038938) list_single_graphic_hl_pane_g1

0xef54,	// (0x0003fd25) list_single_graphic_hl_pane_g2_ParamLimits

0xef54,	// (0x0003fd25) list_single_graphic_hl_pane_g2

0xef54,	// (0x0003fd25) list_single_graphic_hl_pane_g3_ParamLimits

0xef54,	// (0x0003fd25) list_single_graphic_hl_pane_g3

0xef60,	// (0x0003fd31) list_single_graphic_hl_pane_g4_ParamLimits

0xef60,	// (0x0003fd31) list_single_graphic_hl_pane_g4

0xc7e2,	// (0x0003d5b3) list_single_graphic_hl_pane_g5_ParamLimits

0xc7e2,	// (0x0003d5b3) list_single_graphic_hl_pane_g5

0x0004,

0xfbbf,	// (0x00040990) list_single_graphic_hl_pane_g_ParamLimits

0xfbbf,	// (0x00040990) list_single_graphic_hl_pane_g

0xc7f6,	// (0x0003d5c7) list_single_graphic_hl_pane_t1_ParamLimits

0xc7f6,	// (0x0003d5c7) list_single_graphic_hl_pane_t1

0x7b74,	// (0x00038945) aid_size_min_hl_cp2

0x7b7d,	// (0x0003894e) list_highlight_pane_cp34_cp2_ParamLimits

0x7b7d,	// (0x0003894e) list_highlight_pane_cp34_cp2

0x7b67,	// (0x00038938) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7b67,	// (0x00038938) list_single_graphic_hl_pane_g1_cp2

0x7b8a,	// (0x0003895b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7b8a,	// (0x0003895b) list_single_graphic_hl_pane_g2_cp2

0x7b96,	// (0x00038967) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7b96,	// (0x00038967) list_single_graphic_hl_pane_g3_cp2

0x7ba4,	// (0x00038975) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7ba4,	// (0x00038975) list_single_graphic_hl_pane_g4_cp2

0x7bb0,	// (0x00038981) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7bb0,	// (0x00038981) list_single_graphic_hl_pane_g5_cp2

0xbe91,	// (0x0003cc62) control_pane_g4_ParamLimits

0xbe91,	// (0x0003cc62) control_pane_g4

0x480a,	// (0x000355db) bg_popup_sub_pane_cp10_ParamLimits

0x7391,	// (0x00038162) list_choice_list_pane_ParamLimits

0x73a0,	// (0x00038171) scroll_pane_cp23

0x2f5d,	// (0x00033d2e) bg_popup_preview_window_pane_cp02_ParamLimits

0x7988,	// (0x00038759) list_preview_fixed_pane_ParamLimits

0x799e,	// (0x0003876f) list_preview_fixed_pane_cp_ParamLimits

0x799e,	// (0x0003876f) list_preview_fixed_pane_cp

0x79aa,	// (0x0003877b) popup_preview_fixed_window_g1_ParamLimits

0x79aa,	// (0x0003877b) popup_preview_fixed_window_g1

0x79b6,	// (0x00038787) popup_preview_fixed_window_g2_ParamLimits

0x79b6,	// (0x00038787) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x00040918) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x00040918) popup_preview_fixed_window_g

0x04b7,	// (0x00031288) aid_navi_side_left_pane_ParamLimits

0x04cc,	// (0x0003129d) aid_navi_side_right_pane_ParamLimits

0x04e4,	// (0x000312b5) navi_icon_pane_stacon_ParamLimits

0x04f8,	// (0x000312c9) navi_navi_pane_stacon_ParamLimits

0x04e4,	// (0x000312b5) navi_text_pane_stacon_ParamLimits

0xf385,	// (0x00040156) main_text_info_pane

0x7bda,	// (0x000389ab) listscroll_text_info_pane

0x7be2,	// (0x000389b3) list_text_info_pane_ParamLimits

0x7be2,	// (0x000389b3) list_text_info_pane

0x7bf1,	// (0x000389c2) scroll_pane_cp24_ParamLimits

0x7bf1,	// (0x000389c2) scroll_pane_cp24

0xe055,	// (0x0003ee26) list_text_info_pane_t1_ParamLimits

0xe055,	// (0x0003ee26) list_text_info_pane_t1

0xbfda,	// (0x0003cdab) popup_fast_swap2_window_ParamLimits

0xbfda,	// (0x0003cdab) popup_fast_swap2_window

0x7c40,	// (0x00038a11) aid_size_cell_fast2

0xdf1d,	// (0x0003ecee) bg_popup_window_pane_cp17

0x5194,	// (0x00035f65) heading_pane_cp2

0x519c,	// (0x00035f6d) listscroll_fast2_pane

0x7c4a,	// (0x00038a1b) grid_fast2_pane

0x7c54,	// (0x00038a25) listscroll_fast2_pane_g1

0x7c5c,	// (0x00038a2d) listscroll_fast2_pane_g2

0x0001,

0xfbca,	// (0x0004099b) listscroll_fast2_pane_g

0x36e1,	// (0x000344b2) scroll_pane_cp26

0x7c66,	// (0x00038a37) cell_fast2_pane_ParamLimits

0x7c66,	// (0x00038a37) cell_fast2_pane

0x7c7b,	// (0x00038a4c) cell_fast2_pane_g1

0x7c84,	// (0x00038a55) cell_fast2_pane_g2

0x7c8d,	// (0x00038a5e) cell_fast2_pane_g3

0x0002,

0xfbcf,	// (0x000409a0) cell_fast2_pane_g

0x32bd,	// (0x0003408e) grid_highlight_pane_cp9

0x0a48,	// (0x00031819) main_eswt_pane_ParamLimits

0x0a48,	// (0x00031819) main_eswt_pane

0x7c06,	// (0x000389d7) list_single_text_info_pane

0x7c95,	// (0x00038a66) eswt_ctrl_button_pane

0x7c95,	// (0x00038a66) eswt_ctrl_canvas_pane

0x7c9d,	// (0x00038a6e) eswt_ctrl_combo_pane

0x7c95,	// (0x00038a66) eswt_ctrl_default_pane

0x7c95,	// (0x00038a66) eswt_ctrl_label_pane

0x7ca5,	// (0x00038a76) eswt_ctrl_wait_pane

0x7cad,	// (0x00038a7e) eswt_shell_pane

0xdf1d,	// (0x0003ecee) listscroll_eswt_app_pane

0x7ccd,	// (0x00038a9e) popup_eswt_tasktip_window_ParamLimits

0x7ccd,	// (0x00038a9e) popup_eswt_tasktip_window

0x4da8,	// (0x00035b79) bg_popup_window_pane_cp18

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_ParamLimits

0x7cde,	// (0x00038aaf) eswt_control_pane_g1

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_ParamLimits

0x7ceb,	// (0x00038abc) eswt_control_pane_g2

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_ParamLimits

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_ParamLimits

0x7d05,	// (0x00038ad6) eswt_control_pane_g4

0x0003,

0xfbd6,	// (0x000409a7) eswt_control_pane_g_ParamLimits

0xfbd6,	// (0x000409a7) eswt_control_pane_g

0x3561,	// (0x00034332) bg_button_pane_ParamLimits

0x3561,	// (0x00034332) bg_button_pane

0x32d2,	// (0x000340a3) common_borders_pane_copy2_ParamLimits

0x32d2,	// (0x000340a3) common_borders_pane_copy2

0x7d12,	// (0x00038ae3) control_button_pane_g1_ParamLimits

0x7d12,	// (0x00038ae3) control_button_pane_g1

0x7d1e,	// (0x00038aef) control_button_pane_g2_ParamLimits

0x7d1e,	// (0x00038aef) control_button_pane_g2

0x7d2a,	// (0x00038afb) control_button_pane_g3_ParamLimits

0x7d2a,	// (0x00038afb) control_button_pane_g3

0x0002,

0xfbdf,	// (0x000409b0) control_button_pane_g_ParamLimits

0xfbdf,	// (0x000409b0) control_button_pane_g

0x7d3e,	// (0x00038b0f) control_button_pane_t1

0x7d4c,	// (0x00038b1d) control_button_pane_t2

0x0001,

0xfbe6,	// (0x000409b7) control_button_pane_t

0x4d34,	// (0x00035b05) bg_button_pane_g1

0x4d44,	// (0x00035b15) bg_button_pane_g2

0x4d3c,	// (0x00035b0d) bg_button_pane_g3

0x4d54,	// (0x00035b25) bg_button_pane_g4

0x4d4c,	// (0x00035b1d) bg_button_pane_g5

0x4d5c,	// (0x00035b2d) bg_button_pane_g6

0x4d64,	// (0x00035b35) bg_button_pane_g7

0x4d74,	// (0x00035b45) bg_button_pane_g8

0x4d6c,	// (0x00035b3d) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0004060d) bg_button_pane_g

0x734c,	// (0x0003811d) common_borders_pane_ParamLimits

0x734c,	// (0x0003811d) common_borders_pane

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy1_ParamLimits

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy1

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy1_ParamLimits

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy1

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy1_ParamLimits

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy1

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy1_ParamLimits

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy1

0x7387,	// (0x00038158) bg_eswt_ctrl_canvas_pane_g1

0x734c,	// (0x0003811d) common_borders_pane_cp2_ParamLimits

0x734c,	// (0x0003811d) common_borders_pane_cp2

0x734c,	// (0x0003811d) common_borders_pane_cp3_ParamLimits

0x734c,	// (0x0003811d) common_borders_pane_cp3

0x7d5a,	// (0x00038b2b) separator_horizontal_pane

0x7d62,	// (0x00038b33) separator_vertical_pane

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy2_ParamLimits

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy2

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy2_ParamLimits

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy2

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy2_ParamLimits

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy2

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy2_ParamLimits

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy2

0xdf1d,	// (0x0003ecee) common_borders_pane_cp4

0x7d6b,	// (0x00038b3c) separator_horizontal_pane_g1

0x7d74,	// (0x00038b45) separator_horizontal_pane_g2

0x7d7d,	// (0x00038b4e) separator_horizontal_pane_g3

0x0002,

0xfbeb,	// (0x000409bc) separator_horizontal_pane_g

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy3_ParamLimits

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy3

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy3_ParamLimits

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy3

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy3_ParamLimits

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy3

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy3_ParamLimits

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy3

0xdf1d,	// (0x0003ecee) common_borders_pane_cp5

0x7d86,	// (0x00038b57) separator_vertical_pane_g1

0x7d8f,	// (0x00038b60) separator_vertical_pane_g2

0x7d98,	// (0x00038b69) separator_vertical_pane_g3

0x0002,

0xfbf2,	// (0x000409c3) separator_vertical_pane_g

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy4_ParamLimits

0x7cde,	// (0x00038aaf) eswt_control_pane_g1_copy4

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy4_ParamLimits

0x7ceb,	// (0x00038abc) eswt_control_pane_g2_copy4

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy4_ParamLimits

0x7cf8,	// (0x00038ac9) eswt_control_pane_g3_copy4

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy4_ParamLimits

0x7d05,	// (0x00038ad6) eswt_control_pane_g4_copy4

0x7da1,	// (0x00038b72) eswt_ctrl_combo_button_pane

0x7da9,	// (0x00038b7a) eswt_ctrl_input_pane

0x7db1,	// (0x00038b82) popup_choice_list_window_cp70

0x7db9,	// (0x00038b8a) eswt_ctrl_input_pane_t1

0xdf1d,	// (0x0003ecee) input_focus_pane_cp70

0x734c,	// (0x0003811d) bg_button_pane_cp70_ParamLimits

0x734c,	// (0x0003811d) bg_button_pane_cp70

0x7dc7,	// (0x00038b98) eswt_ctrl_combo_button_pane_g1

0x7dcf,	// (0x00038ba0) wait_bar_pane_cp70

0x4da8,	// (0x00035b79) bg_popup_window_pane_cp70_ParamLimits

0x4da8,	// (0x00035b79) bg_popup_window_pane_cp70

0x7dd7,	// (0x00038ba8) popup_eswt_tasktip_window_t1

0x7ded,	// (0x00038bbe) wait_bar_pane_cp71_ParamLimits

0x7ded,	// (0x00038bbe) wait_bar_pane_cp71

0x7df9,	// (0x00038bca) grid_eswt_app_pane

0x3cd9,	// (0x00034aaa) scroll_pane_cp70

0xe070,	// (0x0003ee41) cell_eswt_app_pane_ParamLimits

0xe070,	// (0x0003ee41) cell_eswt_app_pane

0xe09a,	// (0x0003ee6b) cell_eswt_app_pane_g1_ParamLimits

0xe09a,	// (0x0003ee6b) cell_eswt_app_pane_g1

0xe0c9,	// (0x0003ee9a) cell_eswt_app_pane_g2_ParamLimits

0xe0c9,	// (0x0003ee9a) cell_eswt_app_pane_g2

0x0001,

0xfbf9,	// (0x000409ca) cell_eswt_app_pane_g_ParamLimits

0xfbf9,	// (0x000409ca) cell_eswt_app_pane_g

0xe0f2,	// (0x0003eec3) cell_eswt_app_pane_t1_ParamLimits

0xe0f2,	// (0x0003eec3) cell_eswt_app_pane_t1

0x7ebc,	// (0x00038c8d) grid_highlight_pane_cp70_ParamLimits

0x7ebc,	// (0x00038c8d) grid_highlight_pane_cp70

0x43bb,	// (0x0003518c) set_content_pane_g1

0xd336,	// (0x0003e107) status_small_volume_pane

0x1edf,	// (0x00032cb0) status_small_volume_pane_g1

0x1ee7,	// (0x00032cb8) volume_small2_pane

0x1ef0,	// (0x00032cc1) volume_small2_pane_g1

0x1ef9,	// (0x00032cca) volume_small2_pane_g2

0x1f02,	// (0x00032cd3) volume_small2_pane_g3

0x1f0b,	// (0x00032cdc) volume_small2_pane_g4

0x1f14,	// (0x00032ce5) volume_small2_pane_g5

0x1f1d,	// (0x00032cee) volume_small2_pane_g6

0x1f26,	// (0x00032cf7) volume_small2_pane_g7

0x1f2f,	// (0x00032d00) volume_small2_pane_g8

0x1f38,	// (0x00032d09) volume_small2_pane_g9

0x1f41,	// (0x00032d12) volume_small2_pane_g10

0x0009,

0xfbfe,	// (0x000409cf) volume_small2_pane_g

0x774d,	// (0x0003851e) fep_vkb_top_text_pane_g1_ParamLimits

0xdffd,	// (0x0003edce) fep_vkb_top_text_pane_t1_ParamLimits

0x79c2,	// (0x00038793) popup_preview_fixed_window_g3_ParamLimits

0x79c2,	// (0x00038793) popup_preview_fixed_window_g3

0xc603,	// (0x0003d3d4) popup_toolbar_trans_pane

0xd9ab,	// (0x0003e77c) aid_height_set_list_ParamLimits

0x611d,	// (0x00036eee) aid_size_parent_ParamLimits

0x480a,	// (0x000355db) list_highlight_pane_cp2_ParamLimits

0x43bb,	// (0x0003518c) set_content_pane_g1_ParamLimits

0xdb23,	// (0x0003e8f4) list_single_image_pane_ParamLimits

0xdb23,	// (0x0003e8f4) list_single_image_pane

0xe124,	// (0x0003eef5) aid_size_cell_image_ParamLimits

0xe124,	// (0x0003eef5) aid_size_cell_image

0xe131,	// (0x0003ef02) grid_single_image_pane_ParamLimits

0xe131,	// (0x0003ef02) grid_single_image_pane

0x688d,	// (0x0003765e) list_single_image_pane_g1_ParamLimits

0x688d,	// (0x0003765e) list_single_image_pane_g1

0x7ee1,	// (0x00038cb2) list_single_image_pane_g2_ParamLimits

0x7ee1,	// (0x00038cb2) list_single_image_pane_g2

0x0001,

0xfc13,	// (0x000409e4) list_single_image_pane_g_ParamLimits

0xfc13,	// (0x000409e4) list_single_image_pane_g

0x7ef5,	// (0x00038cc6) list_single_image_pane_t1_ParamLimits

0x7ef5,	// (0x00038cc6) list_single_image_pane_t1

0xe13d,	// (0x0003ef0e) cell_image_list_pane_ParamLimits

0xe13d,	// (0x0003ef0e) cell_image_list_pane

0xe151,	// (0x0003ef22) cell_image_list_pane_g1

0xe15a,	// (0x0003ef2b) cell_image_list_pane_g2

0x0001,

0xfc18,	// (0x000409e9) cell_image_list_pane_g

0x7f31,	// (0x00038d02) aid_size_cell_tb_trans_pane

0x3561,	// (0x00034332) bg_tb_trans_pane

0x7f43,	// (0x00038d14) grid_tb_trans_pane

0x4d34,	// (0x00035b05) bg_tb_trans_pane_g1

0x4d44,	// (0x00035b15) bg_tb_trans_pane_g2

0x4d3c,	// (0x00035b0d) bg_tb_trans_pane_g3

0x4d54,	// (0x00035b25) bg_tb_trans_pane_g4

0x4d4c,	// (0x00035b1d) bg_tb_trans_pane_g5

0x4d74,	// (0x00035b45) bg_tb_trans_pane_g6

0x4d6c,	// (0x00035b3d) bg_tb_trans_pane_g7

0x4d5c,	// (0x00035b2d) bg_tb_trans_pane_g8

0x4d64,	// (0x00035b35) bg_tb_trans_pane_g9

0x0008,

0xfc1d,	// (0x000409ee) bg_tb_trans_pane_g

0x7f57,	// (0x00038d28) cell_toolbar_trans_pane_ParamLimits

0x7f57,	// (0x00038d28) cell_toolbar_trans_pane

0x7387,	// (0x00038158) cell_toolbar_trans_pane_g1

0xdd97,	// (0x0003eb68) list_form2_midp_pane_t1

0xdda5,	// (0x0003eb76) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x0004088b) list_form2_midp_pane_t

0x6f78,	// (0x00037d49) scroll_pane_cp51_ParamLimits

0x7134,	// (0x00037f05) form2_midp_wait_pane_g1

0x713d,	// (0x00037f0e) form2_midp_wait_pane_g2

0x7146,	// (0x00037f17) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x000408a0) form2_midp_wait_pane_g

0x2cd4,	// (0x00033aa5) list_highlight_pane_cp21_ParamLimits

0x7192,	// (0x00037f63) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x71a1,	// (0x00037f72) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x1526,	// (0x000322f7) list_single_2graphic_im_pane_ParamLimits

0x1526,	// (0x000322f7) list_single_2graphic_im_pane

0x7f7d,	// (0x00038d4e) list_single_2graphic_im_pane_g1_ParamLimits

0x7f7d,	// (0x00038d4e) list_single_2graphic_im_pane_g1

0x7f8e,	// (0x00038d5f) list_single_2graphic_im_pane_g2_ParamLimits

0x7f8e,	// (0x00038d5f) list_single_2graphic_im_pane_g2

0x7f9a,	// (0x00038d6b) list_single_2graphic_im_pane_g3_ParamLimits

0x7f9a,	// (0x00038d6b) list_single_2graphic_im_pane_g3

0x0003,

0xfc30,	// (0x00040a01) list_single_2graphic_im_pane_g_ParamLimits

0xfc30,	// (0x00040a01) list_single_2graphic_im_pane_g

0x7fba,	// (0x00038d8b) list_single_2graphic_im_pane_t1_ParamLimits

0x7fba,	// (0x00038d8b) list_single_2graphic_im_pane_t1

0x79ce,	// (0x0003879f) list_single_graphic_2heading_pane_fp_ParamLimits

0x79ce,	// (0x0003879f) list_single_graphic_2heading_pane_fp

0x1d6d,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1d6d,	// (0x00032b3e) list_single_graphic_2heading_pane_fp_g1

0x79e3,	// (0x000387b4) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x79e3,	// (0x000387b4) list_single_graphic_2heading_pane_fp_g2

0x1d36,	// (0x00032b07) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1d36,	// (0x00032b07) list_single_graphic_2heading_pane_fp_g3

0x1d42,	// (0x00032b13) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1d42,	// (0x00032b13) list_single_graphic_2heading_pane_fp_g4

0x79ef,	// (0x000387c0) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x79ef,	// (0x000387c0) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00040928) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00040928) list_single_graphic_2heading_pane_fp_g

0x397f,	// (0x00034750) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x397f,	// (0x00034750) list_single_graphic_2heading_pane_fp_t1

0x1da5,	// (0x00032b76) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1da5,	// (0x00032b76) list_single_graphic_2heading_pane_fp_t2

0x3995,	// (0x00034766) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3995,	// (0x00034766) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc39,	// (0x00040a0a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc39,	// (0x00040a0a) list_single_graphic_2heading_pane_fp_t

0x7413,	// (0x000381e4) fep_hwr_write_pane_g5_ParamLimits

0x7413,	// (0x000381e4) fep_hwr_write_pane_g5

0x741f,	// (0x000381f0) fep_hwr_write_pane_g6_ParamLimits

0x741f,	// (0x000381f0) fep_hwr_write_pane_g6

0x7cad,	// (0x00038a7e) eswt_shell_pane_ParamLimits

0x4da8,	// (0x00035b79) bg_popup_window_pane_cp18_ParamLimits

0x6065,	// (0x00036e36) heading_pane_cp70

0x7dd7,	// (0x00038ba8) popup_eswt_tasktip_window_t1_ParamLimits

0xd3d4,	// (0x0003e1a5) aid_touch_tab_arrow_left

0xd3ea,	// (0x0003e1bb) aid_touch_tab_arrow_right

0xb4c9,	// (0x0003c29a) title_pane_g3_ParamLimits

0xb4c9,	// (0x0003c29a) title_pane_g3

0x3520,	// (0x000342f1) set_value_pane_g1

0xc603,	// (0x0003d3d4) popup_toolbar_trans_pane_ParamLimits

0x7f31,	// (0x00038d02) aid_size_cell_tb_trans_pane_ParamLimits

0x3561,	// (0x00034332) bg_tb_trans_pane_ParamLimits

0x7f43,	// (0x00038d14) grid_tb_trans_pane_ParamLimits

0x2f5d,	// (0x00033d2e) cont_note_pane_ParamLimits

0x2f5d,	// (0x00033d2e) cont_note_pane

0x32d2,	// (0x000340a3) cont_snote2_single_text_pane_ParamLimits

0x32d2,	// (0x000340a3) cont_snote2_single_text_pane

0x32d2,	// (0x000340a3) cont_snote2_single_graphic_pane_ParamLimits

0x32d2,	// (0x000340a3) cont_snote2_single_graphic_pane

0x53c3,	// (0x00036194) cont_note_wait_pane_ParamLimits

0x53c3,	// (0x00036194) cont_note_wait_pane

0x53c3,	// (0x00036194) cont_note_image_pane_ParamLimits

0x53c3,	// (0x00036194) cont_note_image_pane

0x7feb,	// (0x00038dbc) popup_note2_window_g1_ParamLimits

0x7feb,	// (0x00038dbc) popup_note2_window_g1

0x801c,	// (0x00038ded) popup_note2_window_t1_ParamLimits

0x801c,	// (0x00038ded) popup_note2_window_t1

0x8061,	// (0x00038e32) popup_note2_window_t2_ParamLimits

0x8061,	// (0x00038e32) popup_note2_window_t2

0x80a6,	// (0x00038e77) popup_note2_window_t3_ParamLimits

0x80a6,	// (0x00038e77) popup_note2_window_t3

0x80eb,	// (0x00038ebc) popup_note2_window_t4_ParamLimits

0x80eb,	// (0x00038ebc) popup_note2_window_t4

0x2fe1,	// (0x00033db2) popup_note2_window_t5_ParamLimits

0x2fe1,	// (0x00033db2) popup_note2_window_t5

0x0004,

0xfc45,	// (0x00040a16) popup_note2_window_t_ParamLimits

0xfc45,	// (0x00040a16) popup_note2_window_t

0x811a,	// (0x00038eeb) popup_note2_image_window_g1_ParamLimits

0x811a,	// (0x00038eeb) popup_note2_image_window_g1

0x8126,	// (0x00038ef7) popup_note2_image_window_g2_ParamLimits

0x8126,	// (0x00038ef7) popup_note2_image_window_g2

0x0001,

0xfc50,	// (0x00040a21) popup_note2_image_window_g_ParamLimits

0xfc50,	// (0x00040a21) popup_note2_image_window_g

0x8138,	// (0x00038f09) popup_note2_image_window_t1_ParamLimits

0x8138,	// (0x00038f09) popup_note2_image_window_t1

0x8150,	// (0x00038f21) popup_note2_image_window_t2_ParamLimits

0x8150,	// (0x00038f21) popup_note2_image_window_t2

0x8168,	// (0x00038f39) popup_note2_image_window_t3_ParamLimits

0x8168,	// (0x00038f39) popup_note2_image_window_t3

0x0002,

0xfc55,	// (0x00040a26) popup_note2_image_window_t_ParamLimits

0xfc55,	// (0x00040a26) popup_note2_image_window_t

0x53d1,	// (0x000361a2) popup_note2_wait_window_g1_ParamLimits

0x53d1,	// (0x000361a2) popup_note2_wait_window_g1

0x8184,	// (0x00038f55) popup_note2_wait_window_g2_ParamLimits

0x8184,	// (0x00038f55) popup_note2_wait_window_g2

0x53e9,	// (0x000361ba) popup_note2_wait_window_g3_ParamLimits

0x53e9,	// (0x000361ba) popup_note2_wait_window_g3

0x0002,

0xfc5c,	// (0x00040a2d) popup_note2_wait_window_g_ParamLimits

0xfc5c,	// (0x00040a2d) popup_note2_wait_window_g

0x8190,	// (0x00038f61) popup_note2_wait_window_t1_ParamLimits

0x8190,	// (0x00038f61) popup_note2_wait_window_t1

0x81ae,	// (0x00038f7f) popup_note2_wait_window_t2_ParamLimits

0x81ae,	// (0x00038f7f) popup_note2_wait_window_t2

0x81cc,	// (0x00038f9d) popup_note2_wait_window_t3_ParamLimits

0x81cc,	// (0x00038f9d) popup_note2_wait_window_t3

0x81de,	// (0x00038faf) popup_note2_wait_window_t4_ParamLimits

0x81de,	// (0x00038faf) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x00040a34) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x00040a34) popup_note2_wait_window_t

0x81f0,	// (0x00038fc1) wait_bar2_pane_ParamLimits

0x81f0,	// (0x00038fc1) wait_bar2_pane

0x8208,	// (0x00038fd9) popup_snote2_single_text_window_g1_ParamLimits

0x8208,	// (0x00038fd9) popup_snote2_single_text_window_g1

0x8230,	// (0x00039001) popup_snote2_single_text_window_t1_ParamLimits

0x8230,	// (0x00039001) popup_snote2_single_text_window_t1

0x827c,	// (0x0003904d) popup_snote2_single_text_window_t2_ParamLimits

0x827c,	// (0x0003904d) popup_snote2_single_text_window_t2

0x82c8,	// (0x00039099) popup_snote2_single_text_window_t3_ParamLimits

0x82c8,	// (0x00039099) popup_snote2_single_text_window_t3

0x8309,	// (0x000390da) popup_snote2_single_text_window_t4_ParamLimits

0x8309,	// (0x000390da) popup_snote2_single_text_window_t4

0x833f,	// (0x00039110) popup_snote2_single_text_window_t5_ParamLimits

0x833f,	// (0x00039110) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x00040a3d) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x00040a3d) popup_snote2_single_text_window_t

0x836a,	// (0x0003913b) popup_snote2_single_graphic_window_g1_ParamLimits

0x836a,	// (0x0003913b) popup_snote2_single_graphic_window_g1

0x8392,	// (0x00039163) popup_snote2_single_graphic_window_g2_ParamLimits

0x8392,	// (0x00039163) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x00040a48) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x00040a48) popup_snote2_single_graphic_window_g

0x83ba,	// (0x0003918b) popup_snote2_single_graphic_window_t1_ParamLimits

0x83ba,	// (0x0003918b) popup_snote2_single_graphic_window_t1

0x8406,	// (0x000391d7) popup_snote2_single_graphic_window_t2_ParamLimits

0x8406,	// (0x000391d7) popup_snote2_single_graphic_window_t2

0x82c8,	// (0x00039099) popup_snote2_single_graphic_window_t3_ParamLimits

0x82c8,	// (0x00039099) popup_snote2_single_graphic_window_t3

0x8309,	// (0x000390da) popup_snote2_single_graphic_window_t4_ParamLimits

0x8309,	// (0x000390da) popup_snote2_single_graphic_window_t4

0x833f,	// (0x00039110) popup_snote2_single_graphic_window_t5_ParamLimits

0x833f,	// (0x00039110) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x00040a4d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x00040a4d) popup_snote2_single_graphic_window_t

0x6e39,	// (0x00037c0a) clock_nsta_pane_cp2_t1

0x6e39,	// (0x00037c0a) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x00040861) clock_nsta_pane_cp2_t

0x0235,	// (0x00031006) form_field_data_wide_pane_g1_ParamLimits

0x356f,	// (0x00034340) form_field_data_wide_pane_g2_ParamLimits

0x356f,	// (0x00034340) form_field_data_wide_pane_g2

0x357b,	// (0x0003434c) form_field_data_wide_pane_g3_ParamLimits

0x357b,	// (0x0003434c) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00040427) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00040427) form_field_data_wide_pane_g

0xdcca,	// (0x0003ea9b) grid_touch_3_pane_ParamLimits

0xdcca,	// (0x0003ea9b) grid_touch_3_pane

0xe163,	// (0x0003ef34) cell_touch_3_pane_ParamLimits

0xe163,	// (0x0003ef34) cell_touch_3_pane

0x7387,	// (0x00038158) cell_touch_3_pane_g1

0x7387,	// (0x00038158) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x000408e6) cell_touch_3_pane_g

0x3039,	// (0x00033e0a) cont_query_data_pane

0x3041,	// (0x00033e12) cont_query_data_pane_cp1

0x8480,	// (0x00039251) button_value_adjust_pane_cp7

0x8488,	// (0x00039259) query_popup_pane_cp3

0x3fc0,	// (0x00034d91) bg_popup_sub_pane_cp22_ParamLimits

0x05f9,	// (0x000313ca) navi_navi_volume_pane_cp2

0x0614,	// (0x000313e5) popup_side_volume_key_window_g2

0x0623,	// (0x000313f4) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x000404bd) popup_side_volume_key_window_g

0x0640,	// (0x00031411) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x000404c4) popup_side_volume_key_window_t

0x427a,	// (0x0003504b) popup_side_volume_key_window_ParamLimits

0xb98d,	// (0x0003c75e) list_double_graphic_pane_g4_ParamLimits

0xb98d,	// (0x0003c75e) list_double_graphic_pane_g4

0xc74b,	// (0x0003d51c) list_single_2heading_msg_pane_ParamLimits

0xc74b,	// (0x0003d51c) list_single_2heading_msg_pane

0xc80c,	// (0x0003d5dd) list_single_2heading_msg_pane_g1_ParamLimits

0xc80c,	// (0x0003d5dd) list_single_2heading_msg_pane_g1

0xc818,	// (0x0003d5e9) list_single_2heading_msg_pane_g2_ParamLimits

0xc818,	// (0x0003d5e9) list_single_2heading_msg_pane_g2

0xc82b,	// (0x0003d5fc) list_single_2heading_msg_pane_g3_ParamLimits

0xc82b,	// (0x0003d5fc) list_single_2heading_msg_pane_g3

0xc837,	// (0x0003d608) list_single_2heading_msg_pane_g4_ParamLimits

0xc837,	// (0x0003d608) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x00040a58) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x00040a58) list_single_2heading_msg_pane_g

0xc84f,	// (0x0003d620) list_single_2heading_msg_pane_t1_ParamLimits

0xc84f,	// (0x0003d620) list_single_2heading_msg_pane_t1

0xc877,	// (0x0003d648) list_single_2heading_msg_pane_t2_ParamLimits

0xc877,	// (0x0003d648) list_single_2heading_msg_pane_t2

0xc8e2,	// (0x0003d6b3) list_single_2heading_msg_pane_t3_ParamLimits

0xc8e2,	// (0x0003d6b3) list_single_2heading_msg_pane_t3

0x3a7a,	// (0x0003484b) list_single_2heading_msg_pane_t4_ParamLimits

0x3a7a,	// (0x0003484b) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x00040a61) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x00040a61) list_single_2heading_msg_pane_t

0x2c28,	// (0x000339f9) title_pane_g4_ParamLimits

0x2c28,	// (0x000339f9) title_pane_g4

0x0408,	// (0x000311d9) title_pane_stacon_g3_ParamLimits

0x0408,	// (0x000311d9) title_pane_stacon_g3

0x7fae,	// (0x00038d7f) list_single_2graphic_im_pane_g4_ParamLimits

0x7fae,	// (0x00038d7f) list_single_2graphic_im_pane_g4

0x5e22,	// (0x00036bf3) popup_side_volume_key_window_cp

0x6654,	// (0x00037425) main_idle_act2_pane_t1

0x1067,	// (0x00031e38) toolbar_button_pane_g10

0xb828,	// (0x0003c5f9) popup_toolbar_window_cp1

0x6e2a,	// (0x00037bfb) clock_nsta_pane_cp_t1

0x6e2a,	// (0x00037bfb) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x0004085c) clock_nsta_pane_cp_t

0x05f9,	// (0x000313ca) navi_navi_volume_pane_cp2_ParamLimits

0x0608,	// (0x000313d9) popup_side_volume_key_window_g1_ParamLimits

0x0614,	// (0x000313e5) popup_side_volume_key_window_g2_ParamLimits

0x0623,	// (0x000313f4) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x000404bd) popup_side_volume_key_window_g_ParamLimits

0x1a92,	// (0x00032863) fep_hwr_aid_pane

0x1b39,	// (0x0003290a) bg_fep_hwr_top_pane_g4_ParamLimits

0x73e3,	// (0x000381b4) fep_hwr_top_pane_g1_ParamLimits

0x73f5,	// (0x000381c6) fep_hwr_top_pane_g2_ParamLimits

0x1b59,	// (0x0003292a) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x000408b1) fep_hwr_top_pane_g_ParamLimits

0x1b6e,	// (0x0003293f) fep_hwr_top_text_pane_ParamLimits

0x5be5,	// (0x000369b6) aid_touch_tab_arrow_arrow_2

0x5bee,	// (0x000369bf) aid_touch_tab_arrow_left_2

0x1aa6,	// (0x00032877) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1add,	// (0x000328ae) fep_hwr_prediction_pane

0x7555,	// (0x00038326) fep_vkb_prediction_pane

0xdfdd,	// (0x0003edae) fep_vkb_side_pane_g3_ParamLimits

0xdfdd,	// (0x0003edae) fep_vkb_side_pane_g3

0x1ce9,	// (0x00032aba) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e0e,	// (0x00032bdf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e1b,	// (0x00032bec) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x00040960) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f4a,	// (0x00032d1b) fep_hwr_prediction_pane_g1

0x1f54,	// (0x00032d25) fep_hwr_prediction_pane_g2

0x1f5c,	// (0x00032d2d) fep_hwr_prediction_pane_g3

0x1f64,	// (0x00032d35) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x00040a6a) fep_hwr_prediction_pane_g

0x84ad,	// (0x0003927e) fep_vkb_prediction_pane_g1

0x84b7,	// (0x00039288) fep_vkb_prediction_pane_g2

0x84bf,	// (0x00039290) fep_vkb_prediction_pane_g3

0x84c7,	// (0x00039298) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x00040a73) fep_vkb_prediction_pane_g

0x146e,	// (0x0003223f) slider_set_pane_g3

0x1482,	// (0x00032253) slider_set_pane_g4

0x149a,	// (0x0003226b) slider_set_pane_g5

0x146e,	// (0x0003223f) slider_set_pane_g6

0x14b0,	// (0x00032281) slider_set_pane_g7

0x6282,	// (0x00037053) slider_form_pane_g3

0x628b,	// (0x0003705c) slider_form_pane_g4

0x6293,	// (0x00037064) slider_form_pane_g5

0x6282,	// (0x00037053) slider_form_pane_g6

0xdaf6,	// (0x0003e8c7) slider_form_pane_g7

0x690b,	// (0x000376dc) slider_set_pane_vc_g3

0x6914,	// (0x000376e5) slider_set_pane_vc_g4

0x691d,	// (0x000376ee) slider_set_pane_vc_g5

0x690b,	// (0x000376dc) slider_set_pane_vc_g6

0x6926,	// (0x000376f7) slider_set_pane_vc_g7

0x6ae8,	// (0x000378b9) slider_form_pane_vc_g1

0x6af1,	// (0x000378c2) slider_form_pane_vc_g2

0x6afa,	// (0x000378cb) slider_form_pane_vc_g3

0x6ae8,	// (0x000378b9) slider_form_pane_vc_g4

0x6b03,	// (0x000378d4) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x0004082e) slider_form_pane_vc_g

0xf385,	// (0x00040156) main_idle_act3_pane

0x84cf,	// (0x000392a0) ai3_links_pane

0xe1ab,	// (0x0003ef7c) popup_ai3_data_window_ParamLimits

0xe1ab,	// (0x0003ef7c) popup_ai3_data_window

0xdf1d,	// (0x0003ecee) grid_ai3_links_pane

0xe1c5,	// (0x0003ef96) cell_ai3_links_pane_ParamLimits

0xe1c5,	// (0x0003ef96) cell_ai3_links_pane

0x850a,	// (0x000392db) bg_popup_sub_pane_cp11

0x8517,	// (0x000392e8) cell_ai3_links_pane_g1

0xdf1d,	// (0x0003ecee) bg_popup_sub_pane_cp12

0x853c,	// (0x0003930d) heading_ai3_data_pane

0x8544,	// (0x00039315) list_ai3_gene_pane

0x8550,	// (0x00039321) popup_ai3_data_window_g1

0x8558,	// (0x00039329) heading_ai3_data_pane_g1

0x8560,	// (0x00039331) heading_ai3_data_pane_t1

0x856e,	// (0x0003933f) list_double_ai3_gene_pane_ParamLimits

0x856e,	// (0x0003933f) list_double_ai3_gene_pane

0x857b,	// (0x0003934c) list_single_ai3_gene_pane_ParamLimits

0x857b,	// (0x0003934c) list_single_ai3_gene_pane

0x734c,	// (0x0003811d) list_highlight_pane_cp7_ParamLimits

0x734c,	// (0x0003811d) list_highlight_pane_cp7

0x8588,	// (0x00039359) list_single_a13_gene_pane_t1_ParamLimits

0x8588,	// (0x00039359) list_single_a13_gene_pane_t1

0x859f,	// (0x00039370) list_single_ai3_gene_pane_g1

0x85a8,	// (0x00039379) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x00040a7c) list_single_ai3_gene_pane_g

0x85b0,	// (0x00039381) list_double_ai3_gene_pane_g1_ParamLimits

0x85b0,	// (0x00039381) list_double_ai3_gene_pane_g1

0x85bc,	// (0x0003938d) list_double_ai3_gene_pane_t1_ParamLimits

0x85bc,	// (0x0003938d) list_double_ai3_gene_pane_t1

0x85d8,	// (0x000393a9) list_double_ai3_gene_pane_t2_ParamLimits

0x85d8,	// (0x000393a9) list_double_ai3_gene_pane_t2

0x85ee,	// (0x000393bf) list_double_ai3_gene_pane_t3_ParamLimits

0x85ee,	// (0x000393bf) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x00040a81) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x00040a81) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x39ab,	// (0x0003477c) aid_size_min_col_2

0xe195,	// (0x0003ef66) aid_size_min_msg_ParamLimits

0xe195,	// (0x0003ef66) aid_size_min_msg

0xdff1,	// (0x0003edc2) fep_vkb_top_text_pane_g2_ParamLimits

0xdff1,	// (0x0003edc2) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x000408e1) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x000408e1) fep_vkb_top_text_pane_g

0xf385,	// (0x00040156) main_hc_apps_shell_pane

0x860b,	// (0x000393dc) grid_hc_apps_pane_ParamLimits

0x860b,	// (0x000393dc) grid_hc_apps_pane

0x861d,	// (0x000393ee) list_hc_apps_pane

0x8625,	// (0x000393f6) scroll_pane_cp37_ParamLimits

0x8625,	// (0x000393f6) scroll_pane_cp37

0xe1df,	// (0x0003efb0) cell_hc_apps_pane_ParamLimits

0xe1df,	// (0x0003efb0) cell_hc_apps_pane

0xe29d,	// (0x0003f06e) cell_hc_apps_pane_g1_ParamLimits

0xe29d,	// (0x0003f06e) cell_hc_apps_pane_g1

0x8730,	// (0x00039501) cell_hc_apps_pane_g2_ParamLimits

0x8730,	// (0x00039501) cell_hc_apps_pane_g2

0x874c,	// (0x0003951d) cell_hc_apps_pane_g3_ParamLimits

0x874c,	// (0x0003951d) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x00040a88) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x00040a88) cell_hc_apps_pane_g

0xe2c9,	// (0x0003f09a) cell_hc_apps_pane_t1_ParamLimits

0xe2c9,	// (0x0003f09a) cell_hc_apps_pane_t1

0x2f5d,	// (0x00033d2e) grid_highlight_pane_cp10_ParamLimits

0x2f5d,	// (0x00033d2e) grid_highlight_pane_cp10

0xe307,	// (0x0003f0d8) list_single_hc_apps_pane_ParamLimits

0xe307,	// (0x0003f0d8) list_single_hc_apps_pane

0xe334,	// (0x0003f105) list_single_hc_apps_pane_g1

0xc950,	// (0x0003d721) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x00040a8f) list_single_hc_apps_pane_g

0xc969,	// (0x0003d73a) list_single_hc_apps_pane_g2_copy1

0xc985,	// (0x0003d756) list_single_hc_apps_pane_t1

0x2cd4,	// (0x00033aa5) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x00040271) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x0004028a) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x000402a4) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004030a) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x000402bc) slider_set_pane_ParamLimits

0x092c,	// (0x000316fd) control_pane_g5_ParamLimits

0x092c,	// (0x000316fd) control_pane_g5

0x60d1,	// (0x00036ea2) slider_set_pane_g1_ParamLimits

0x1462,	// (0x00032233) slider_set_pane_g2_ParamLimits

0x146e,	// (0x0003223f) slider_set_pane_g3_ParamLimits

0x1482,	// (0x00032253) slider_set_pane_g4_ParamLimits

0x149a,	// (0x0003226b) slider_set_pane_g5_ParamLimits

0x146e,	// (0x0003223f) slider_set_pane_g6_ParamLimits

0x14b0,	// (0x00032281) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0004070b) slider_set_pane_g_ParamLimits

0x4366,	// (0x00035137) navi_icon_text_pane_ParamLimits

0xd39d,	// (0x0003e16e) aid_fill_nsta_2_ParamLimits

0xd3d4,	// (0x0003e1a5) aid_touch_tab_arrow_left_ParamLimits

0xd3ea,	// (0x0003e1bb) aid_touch_tab_arrow_right_ParamLimits

0xd485,	// (0x0003e256) clock_nsta_pane_ParamLimits

0x5bc7,	// (0x00036998) navi_icon_pane_g1_ParamLimits

0x5bd3,	// (0x000369a4) navi_text_pane_t1_ParamLimits

0x6f36,	// (0x00037d07) navi_icon_text_pane_g1_ParamLimits

0x6f42,	// (0x00037d13) navi_icon_text_pane_t1_ParamLimits

0xe334,	// (0x0003f105) list_single_hc_apps_pane_g1_ParamLimits

0xc950,	// (0x0003d721) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x00040a8f) list_single_hc_apps_pane_g_ParamLimits

0xc969,	// (0x0003d73a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc985,	// (0x0003d756) list_single_hc_apps_pane_t1_ParamLimits

0xb3ce,	// (0x0003c19f) popup_toolbar2_fixed_window_ParamLimits

0xb3ce,	// (0x0003c19f) popup_toolbar2_fixed_window

0xc5f9,	// (0x0003d3ca) popup_toolbar2_float_window

0xdf1d,	// (0x0003ecee) bg_popup_sub_pane_cp27

0x8823,	// (0x000395f4) grid_toolbar2_float_pane

0xdf1d,	// (0x0003ecee) bg_popup_sub_pane_cp26

0x8823,	// (0x000395f4) grid_toolbar2_fixed_pane

0xe34d,	// (0x0003f11e) cell_toolbar2_fixed_pane_ParamLimits

0xe34d,	// (0x0003f11e) cell_toolbar2_fixed_pane

0xe367,	// (0x0003f138) cell_toolbar2_fixed_pane_g1

0x8844,	// (0x00039615) toolbar2_fixed_button_pane

0x4d34,	// (0x00035b05) toolbar2_fixed_button_pane_g1

0x4d44,	// (0x00035b15) toolbar2_fixed_button_pane_g2

0x4d3c,	// (0x00035b0d) toolbar2_fixed_button_pane_g3

0x4d54,	// (0x00035b25) toolbar2_fixed_button_pane_g4

0x4d4c,	// (0x00035b1d) toolbar2_fixed_button_pane_g5

0x4d5c,	// (0x00035b2d) toolbar2_fixed_button_pane_g6

0x4d64,	// (0x00035b35) toolbar2_fixed_button_pane_g7

0x4d74,	// (0x00035b45) toolbar2_fixed_button_pane_g8

0x4d6c,	// (0x00035b3d) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0004060d) toolbar2_fixed_button_pane_g

0x884c,	// (0x0003961d) cell_toolbar2_float_pane_ParamLimits

0x884c,	// (0x0003961d) cell_toolbar2_float_pane

0x885d,	// (0x0003962e) cell_toolbar2_float_pane_g1

0x8844,	// (0x00039615) toolbar2_fixed_button_pane_cp

0xde7a,	// (0x0003ec4b) fep_vkb_accented_list_pane_ParamLimits

0xde7a,	// (0x0003ec4b) fep_vkb_accented_list_pane

0x1cc9,	// (0x00032a9a) bg_popup_fep_shadow_pane_g9

0x44e6,	// (0x000352b7) bg_popup_fep_shadow_pane_cp3

0x36c8,	// (0x00034499) list_accented_list_pane

0x8866,	// (0x00039637) list_single_accented_list_pane_ParamLimits

0x8866,	// (0x00039637) list_single_accented_list_pane

0x44e6,	// (0x000352b7) list_highlight_pane_cp10

0x8877,	// (0x00039648) list_single_accented_list_pane_t1

0xc523,	// (0x0003d2f4) popup_slider_window_ParamLimits

0xc523,	// (0x0003d2f4) popup_slider_window

0x8490,	// (0x00039261) aid_indentation_list_msg

0xe45e,	// (0x0003f22f) bg_popup_window_pane_cp19

0x89a3,	// (0x00039774) popup_slider_window_g1

0x89bf,	// (0x00039790) popup_slider_window_g2

0x89db,	// (0x000397ac) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x00040a94) popup_slider_window_g

0x8a41,	// (0x00039812) popup_slider_window_t1

0x8ab5,	// (0x00039886) small_volume_slider_vertical_pane

0x7387,	// (0x00038158) small_volume_slider_vertical_pane_g1

0x7387,	// (0x00038158) small_volume_slider_vertical_pane_g2

0x8ad1,	// (0x000398a2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x00040aa6) small_volume_slider_vertical_pane_g

0xb33c,	// (0x0003c10d) area_side_right_pane_ParamLimits

0xb33c,	// (0x0003c10d) area_side_right_pane

0xc9b3,	// (0x0003d784) aid_size_side_button_ParamLimits

0xc9b3,	// (0x0003d784) aid_size_side_button

0xc9cc,	// (0x0003d79d) grid_sctrl_middle_pane_ParamLimits

0xc9cc,	// (0x0003d79d) grid_sctrl_middle_pane

0x1f9f,	// (0x00032d70) sctrl_sk_bottom_pane

0x1fb0,	// (0x00032d81) sctrl_sk_top_pane

0x1fc2,	// (0x00032d93) aid_touch_sctrl_top

0x1fcf,	// (0x00032da0) bg_sctrl_sk_pane_ParamLimits

0x1fcf,	// (0x00032da0) bg_sctrl_sk_pane

0x1fdd,	// (0x00032dae) sctrl_sk_top_pane_g1

0x1fea,	// (0x00032dbb) sctrl_sk_top_pane_t1

0x1fc2,	// (0x00032d93) aid_touch_sctrl_bottom

0x1fcf,	// (0x00032da0) bg_sctrl_sk_pane_cp_ParamLimits

0x1fcf,	// (0x00032da0) bg_sctrl_sk_pane_cp

0x2005,	// (0x00032dd6) sctrl_sk_bottom_pane_g1

0x1fea,	// (0x00032dbb) sctrl_sk_bottom_pane_t1

0xc9e6,	// (0x0003d7b7) cell_sctrl_middle_pane_ParamLimits

0xc9e6,	// (0x0003d7b7) cell_sctrl_middle_pane

0xc9f7,	// (0x0003d7c8) aid_touch_sctrl_middle_ParamLimits

0xc9f7,	// (0x0003d7c8) aid_touch_sctrl_middle

0xca04,	// (0x0003d7d5) bg_sctrl_middle_pane_ParamLimits

0xca04,	// (0x0003d7d5) bg_sctrl_middle_pane

0x2672,	// (0x00033443) cell_sctrl_middle_pane_g1_ParamLimits

0x2672,	// (0x00033443) cell_sctrl_middle_pane_g1

0xca12,	// (0x0003d7e3) cell_sctrl_middle_pane_g2_ParamLimits

0xca12,	// (0x0003d7e3) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x00040ab2) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x00040ab2) cell_sctrl_middle_pane_g

0x4d34,	// (0x00035b05) bg_sctrl_middle_pane_g1

0x4d3c,	// (0x00035b0d) bg_sctrl_middle_pane_g2

0x4d44,	// (0x00035b15) bg_sctrl_middle_pane_g3

0x4d4c,	// (0x00035b1d) bg_sctrl_middle_pane_g4

0x4d54,	// (0x00035b25) bg_sctrl_middle_pane_g5

0x4d5c,	// (0x00035b2d) bg_sctrl_middle_pane_g6

0x4d64,	// (0x00035b35) bg_sctrl_middle_pane_g7

0x4d6c,	// (0x00035b3d) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x00040ab7) bg_sctrl_middle_pane_g

0x4d74,	// (0x00035b45) bg_sctrl_middle_pane_g8_copy1

0x4d34,	// (0x00035b05) bg_sctrl_sk_pane_g1

0x4d44,	// (0x00035b15) bg_sctrl_sk_pane_g2

0x4d3c,	// (0x00035b0d) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0004060d) bg_sctrl_sk_pane_g

0x3490,	// (0x00034261) aid_size_touch_scroll_bar

0x4d54,	// (0x00035b25) bg_sctrl_sk_pane_g4

0x4d4c,	// (0x00035b1d) bg_sctrl_sk_pane_g5

0x4d5c,	// (0x00035b2d) bg_sctrl_sk_pane_g6

0x4d64,	// (0x00035b35) bg_sctrl_sk_pane_g7

0x4d74,	// (0x00035b45) bg_sctrl_sk_pane_g8

0x4d6c,	// (0x00035b3d) bg_sctrl_sk_pane_g9

0x0ae8,	// (0x000318b9) popup_fep_china_hwr2_fs_candidate_window

0xc037,	// (0x0003ce08) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc037,	// (0x0003ce08) popup_fep_china_hwr2_fs_control_window

0x1ce9,	// (0x00032aba) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x00040aad) sctrl_sk_top_pane_g

0xe516,	// (0x0003f2e7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe516,	// (0x0003f2e7) aid_fep_china_hwr2_fs_cell

0xe52a,	// (0x0003f2fb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe52a,	// (0x0003f2fb) bg_popup_fep_shadow_pane_cp4

0xe541,	// (0x0003f312) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe541,	// (0x0003f312) bg_popup_fep_shadow_pane_cp5

0xe553,	// (0x0003f324) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe553,	// (0x0003f324) popup_fep_china_hwr2_fs_control_bar_grid

0xe567,	// (0x0003f338) popup_fep_china_hwr2_fs_control_funtion_grid

0x8b2d,	// (0x000398fe) aid_fep_china_hwr2_fs_candi_cell

0xdf1d,	// (0x0003ecee) bg_popup_fep_shadow_pane_cp6

0x8b37,	// (0x00039908) popup_fep_china_hwr2_fs_candidate_grid

0xe56f,	// (0x0003f340) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe56f,	// (0x0003f340) cell_fep_china_hwr2_fs_funtion_grid

0x7387,	// (0x00038158) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8b59,	// (0x0003992a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8b59,	// (0x0003992a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8b67,	// (0x00039938) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8b67,	// (0x00039938) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x00040ac8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x00040ac8) cell_fep_china_hwr2_fs_funtion_grid_g

0xe587,	// (0x0003f358) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe587,	// (0x0003f358) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe59c,	// (0x0003f36d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe59c,	// (0x0003f36d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x00040acd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x00040acd) cell_fep_china_hwr2_fs_funtion_grid_t

0x8bae,	// (0x0003997f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8bb6,	// (0x00039987) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8bbe,	// (0x0003998f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x00040ad2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8bc6,	// (0x00039997) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8bc6,	// (0x00039997) cell_fep_china_hwr2_fs_candidate_grid

0x8bdf,	// (0x000399b0) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8be7,	// (0x000399b8) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7387,	// (0x00038158) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7387,	// (0x00038158) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x000408e6) cell_fep_china_hwr2_fs_candidate_grid_g

0x8bef,	// (0x000399c0) cell_fep_china_hwr2_fs_candidate_grid_t1

0x492a,	// (0x000356fb) clock_nsta_pane_cp_24_ParamLimits

0x492a,	// (0x000356fb) clock_nsta_pane_cp_24

0x49a8,	// (0x00035779) indicator_nsta_pane_cp_24_ParamLimits

0x49a8,	// (0x00035779) indicator_nsta_pane_cp_24

0x5a43,	// (0x00036814) heading_pane_g1

0x0001,

0xf8a1,	// (0x00040672) heading_pane_g

0x649d,	// (0x0003726e) grid_sct_catagory_button_pane

0x64cd,	// (0x0003729e) scroll_pane_cp5_ParamLimits

0x6f84,	// (0x00037d55) button_value_adjust_pane_cp5_ParamLimits

0x6f84,	// (0x00037d55) button_value_adjust_pane_cp5

0x7063,	// (0x00037e34) form2_midp_time_pane_ParamLimits

0x8bfd,	// (0x000399ce) cell_sct_catagory_button_pane_ParamLimits

0x8bfd,	// (0x000399ce) cell_sct_catagory_button_pane

0x734c,	// (0x0003811d) bg_button_pane_cp01_ParamLimits

0x734c,	// (0x0003811d) bg_button_pane_cp01

0x7387,	// (0x00038158) cell_sct_catagory_button_pane_g1

0xc59c,	// (0x0003d36d) popup_tb_extension_window

0xe5b8,	// (0x0003f389) aid_size_cell_ext_ParamLimits

0xe5b8,	// (0x0003f389) aid_size_cell_ext

0x32d2,	// (0x000340a3) bg_tb_trans_pane_cp1_ParamLimits

0x32d2,	// (0x000340a3) bg_tb_trans_pane_cp1

0xe5de,	// (0x0003f3af) grid_tb_ext_pane_ParamLimits

0xe5de,	// (0x0003f3af) grid_tb_ext_pane

0xe619,	// (0x0003f3ea) cell_tb_ext_pane_ParamLimits

0xe619,	// (0x0003f3ea) cell_tb_ext_pane

0xe641,	// (0x0003f412) cell_tb_ext_pane_g1_ParamLimits

0xe641,	// (0x0003f412) cell_tb_ext_pane_g1

0x8c91,	// (0x00039a62) cell_tb_ext_pane_t1

0x2f5d,	// (0x00033d2e) list_highlight_pane_cp11_ParamLimits

0x2f5d,	// (0x00033d2e) list_highlight_pane_cp11

0xb3e3,	// (0x0003c1b4) popup_uni_indicator_window_ParamLimits

0xb3e3,	// (0x0003c1b4) popup_uni_indicator_window

0x3561,	// (0x00034332) bg_popup_sub_pane_cp14

0x8cac,	// (0x00039a7d) list_uniindi_pane

0x8cb8,	// (0x00039a89) uniindi_top_pane

0x2f5d,	// (0x00033d2e) bg_uniindi_top_pane

0x8cd7,	// (0x00039aa8) uniindi_top_pane_g1

0x8ced,	// (0x00039abe) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x00040ad9) uniindi_top_pane_g

0x8d17,	// (0x00039ae8) uniindi_top_pane_t1

0x8d41,	// (0x00039b12) list_single_uniindi_pane_ParamLimits

0x8d41,	// (0x00039b12) list_single_uniindi_pane

0x7387,	// (0x00038158) bg_uniindi_top_pane_g1

0x8d54,	// (0x00039b25) list_single_uniindi_pane_g1

0x8d67,	// (0x00039b38) list_single_uniindi_pane_t1

0xf385,	// (0x00040156) control_bg_pane

0x8d8c,	// (0x00039b5d) bg_sctrl_sk_pane_cp1

0x8d95,	// (0x00039b66) bg_sctrl_sk_pane_cp2

0x8d9e,	// (0x00039b6f) control_bg_pane_g1

0x8da7,	// (0x00039b78) control_bg_pane_g2

0x0001,

0xfd11,	// (0x00040ae2) control_bg_pane_g

0x6dce,	// (0x00037b9f) cell_indicator_nsta_pane_g1_ParamLimits

0xdd07,	// (0x0003ead8) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x0004084a) cell_indicator_nsta_pane_g_ParamLimits

0x1a71,	// (0x00032842) form2_midp_time_pane_t1_ParamLimits

0x1a84,	// (0x00032855) main_idle_act4_pane_ParamLimits

0x1a84,	// (0x00032855) main_idle_act4_pane

0xc59c,	// (0x0003d36d) popup_tb_extension_window_ParamLimits

0xe600,	// (0x0003f3d1) tb_ext_find_pane_ParamLimits

0xe600,	// (0x0003f3d1) tb_ext_find_pane

0x8db0,	// (0x00039b81) ai_gene_pane_1_cp1

0x462d,	// (0x000353fe) ai_gene_pane_2_cp1

0x8db8,	// (0x00039b89) list_single_idle_plugin_calendar_pane

0x8dc1,	// (0x00039b92) list_single_idle_plugin_notification_pane

0x8dca,	// (0x00039b9b) list_single_idle_plugin_player_pane

0xe65e,	// (0x0003f42f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe65e,	// (0x0003f42f) list_single_idle_plugin_shortcut_pane

0xe686,	// (0x0003f457) main_idle_act4_pane_t1

0xe69c,	// (0x0003f46d) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x00040ae7) main_idle_act4_pane_t

0xe6b2,	// (0x0003f483) middle_sk_idle_act4_pane_ParamLimits

0xe6b2,	// (0x0003f483) middle_sk_idle_act4_pane

0xe6ce,	// (0x0003f49f) popup_clock_digital_analogue_window_cp2

0xe6f6,	// (0x0003f4c7) shortcut_wheel_idle_act4_pane_ParamLimits

0xe6f6,	// (0x0003f4c7) shortcut_wheel_idle_act4_pane

0x7387,	// (0x00038158) shortcut_wheel_idle_act4_pane_g1

0x7387,	// (0x00038158) shortcut_wheel_idle_act4_pane_g2

0x7387,	// (0x00038158) shortcut_wheel_idle_act4_pane_g3

0x7387,	// (0x00038158) shortcut_wheel_idle_act4_pane_g4

0x7387,	// (0x00038158) shortcut_wheel_idle_act4_pane_g5

0x8e5d,	// (0x00039c2e) shortcut_wheel_idle_act4_pane_g6

0x8e65,	// (0x00039c36) shortcut_wheel_idle_act4_pane_g7

0x8e6d,	// (0x00039c3e) shortcut_wheel_idle_act4_pane_g8

0x8e75,	// (0x00039c46) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x00040aec) shortcut_wheel_idle_act4_pane_g

0xdeed,	// (0x0003ecbe) middle_sk_idle_act4_pane_g1_ParamLimits

0xdeed,	// (0x0003ecbe) middle_sk_idle_act4_pane_g1

0xe773,	// (0x0003f544) middle_sk_idle_act4_pane_g2_ParamLimits

0xe773,	// (0x0003f544) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x00040b0f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x00040b0f) middle_sk_idle_act4_pane_g

0xe78b,	// (0x0003f55c) middle_sk_idle_act4_pane_t1_ParamLimits

0xe78b,	// (0x0003f55c) middle_sk_idle_act4_pane_t1

0xe7ba,	// (0x0003f58b) grid_ai_shortcut_pane_ParamLimits

0xe7ba,	// (0x0003f58b) grid_ai_shortcut_pane

0xe7d7,	// (0x0003f5a8) list_highlight_pane_cp16_ParamLimits

0xe7d7,	// (0x0003f5a8) list_highlight_pane_cp16

0xe7e4,	// (0x0003f5b5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe7e4,	// (0x0003f5b5) list_single_idle_plugin_shortcut_pane_g1

0xe7f0,	// (0x0003f5c1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe7f0,	// (0x0003f5c1) list_single_idle_plugin_shortcut_pane_g2

0xe80c,	// (0x0003f5dd) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe80c,	// (0x0003f5dd) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x00040b14) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x00040b14) list_single_idle_plugin_shortcut_pane_g

0xe821,	// (0x0003f5f2) cell_ai_shortcut_pane_ParamLimits

0xe821,	// (0x0003f5f2) cell_ai_shortcut_pane

0xe837,	// (0x0003f608) cell_ai_shortcut_pane_g1_ParamLimits

0xe837,	// (0x0003f608) cell_ai_shortcut_pane_g1

0x8db0,	// (0x00039b81) ai_gene_pane_1_cp2

0x8fa5,	// (0x00039d76) ai_gene_pane_2_cp2

0x8fad,	// (0x00039d7e) list_highlight_pane_cp15

0x8fb6,	// (0x00039d87) list_single_idle_plugin_calendar_pane_g1

0x8fad,	// (0x00039d7e) list_highlight_pane_cp17

0x8fbe,	// (0x00039d8f) list_single_idle_plugin_calendar_pane_g1_copy1

0x8fc6,	// (0x00039d97) list_single_idle_plugin_player_pane_g1

0x66f6,	// (0x000374c7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x00040b1b) list_single_idle_plugin_player_pane_g

0x8fce,	// (0x00039d9f) list_single_idle_plugin_player_pane_t1

0x8fdc,	// (0x00039dad) list_single_idle_plugin_player_pane_t2

0x8fea,	// (0x00039dbb) list_single_idle_plugin_player_pane_t3

0x8ff8,	// (0x00039dc9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x00040b20) list_single_idle_plugin_player_pane_t

0x9006,	// (0x00039dd7) wait_bar_pane_cp15

0x900e,	// (0x00039ddf) grid_ai_notification_pane

0x66f6,	// (0x000374c7) list_single_idle_plugin_notification_pane_g1

0xe859,	// (0x0003f62a) cell_ai_notification_pane_ParamLimits

0xe859,	// (0x0003f62a) cell_ai_notification_pane

0x9024,	// (0x00039df5) cell_ai_notification_pane_g1

0x902c,	// (0x00039dfd) cell_ai_notification_pane_t1

0xe866,	// (0x0003f637) tb_ext_find_button_pane

0xe86e,	// (0x0003f63f) tb_ext_find_pane_g1

0xe876,	// (0x0003f647) tb_ext_find_pane_t1

0x3ed0,	// (0x00034ca1) tb_ext_find_button_pane_g1

0x9058,	// (0x00039e29) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x00040b29) tb_ext_find_button_pane_g

0xe686,	// (0x0003f457) main_idle_act4_pane_t1_ParamLimits

0xe69c,	// (0x0003f46d) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x00040ae7) main_idle_act4_pane_t_ParamLimits

0xe6ce,	// (0x0003f49f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe6e6,	// (0x0003f4b7) sat_plugin_idle_act4_pane_ParamLimits

0xe6e6,	// (0x0003f4b7) sat_plugin_idle_act4_pane

0xe884,	// (0x0003f655) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe884,	// (0x0003f655) sat_plugin_idle_act4_pane_t1

0xe89c,	// (0x0003f66d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe89c,	// (0x0003f66d) sat_plugin_idle_act4_pane_t2

0xe8b4,	// (0x0003f685) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8b4,	// (0x0003f685) sat_plugin_idle_act4_pane_t3

0xe8cc,	// (0x0003f69d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8cc,	// (0x0003f69d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x00040b2e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x00040b2e) sat_plugin_idle_act4_pane_t

0xf44a,	// (0x0004021b) popup_battery_window_ParamLimits

0xf44a,	// (0x0004021b) popup_battery_window

0x2f5d,	// (0x00033d2e) bg_popup_sub_pane_cp25_ParamLimits

0x2f5d,	// (0x00033d2e) bg_popup_sub_pane_cp25

0x90ad,	// (0x00039e7e) popup_battery_window_g1_ParamLimits

0x90ad,	// (0x00039e7e) popup_battery_window_g1

0x90b9,	// (0x00039e8a) popup_battery_window_t1_ParamLimits

0x90b9,	// (0x00039e8a) popup_battery_window_t1

0x90cb,	// (0x00039e9c) popup_battery_window_t2_ParamLimits

0x90cb,	// (0x00039e9c) popup_battery_window_t2

0x0001,

0xfd66,	// (0x00040b37) popup_battery_window_t_ParamLimits

0xfd66,	// (0x00040b37) popup_battery_window_t

0xd208,	// (0x0003dfd9) midp_canvas_pane_ParamLimits

0xd265,	// (0x0003e036) midp_keypad_pane_ParamLimits

0xd265,	// (0x0003e036) midp_keypad_pane

0x480a,	// (0x000355db) main_midp_pane_ParamLimits

0x6e48,	// (0x00037c19) signal_pane_g2_cp_ParamLimits

0xe8e4,	// (0x0003f6b5) aid_size_cell_midp_keypad_ParamLimits

0xe8e4,	// (0x0003f6b5) aid_size_cell_midp_keypad

0xe902,	// (0x0003f6d3) midp_keyp_game_grid_pane_ParamLimits

0xe902,	// (0x0003f6d3) midp_keyp_game_grid_pane

0xe929,	// (0x0003f6fa) midp_keyp_rocker_pane_ParamLimits

0xe929,	// (0x0003f6fa) midp_keyp_rocker_pane

0xe97a,	// (0x0003f74b) midp_keyp_sk_left_pane_ParamLimits

0xe97a,	// (0x0003f74b) midp_keyp_sk_left_pane

0xe9ce,	// (0x0003f79f) midp_keyp_sk_right_pane_ParamLimits

0xe9ce,	// (0x0003f79f) midp_keyp_sk_right_pane

0xdf1d,	// (0x0003ecee) bg_button_pane_cp03

0xea22,	// (0x0003f7f3) midp_keyp_sk_left_pane_g1

0xdf1d,	// (0x0003ecee) bg_button_pane_cp04

0xea22,	// (0x0003f7f3) midp_keyp_sk_right_pane_g1

0x7387,	// (0x00038158) midp_keyp_rocker_pane_g1

0xea2b,	// (0x0003f7fc) keyp_game_cell_pane_ParamLimits

0xea2b,	// (0x0003f7fc) keyp_game_cell_pane

0xdf1d,	// (0x0003ecee) bg_button_pane_cp02

0xea4f,	// (0x0003f820) keyp_game_cell_pane_g1

0xb37e,	// (0x0003c14f) popup_fep_vkb2_window_ParamLimits

0xb37e,	// (0x0003c14f) popup_fep_vkb2_window

0xca1e,	// (0x0003d7ef) aid_size_cell_vkb2_ParamLimits

0xca1e,	// (0x0003d7ef) aid_size_cell_vkb2

0xca54,	// (0x0003d825) popup_fep_vkb2_window_g1_ParamLimits

0xca54,	// (0x0003d825) popup_fep_vkb2_window_g1

0xcaa4,	// (0x0003d875) vkb2_area_bottom_pane_ParamLimits

0xcaa4,	// (0x0003d875) vkb2_area_bottom_pane

0xcaf8,	// (0x0003d8c9) vkb2_area_keypad_pane_ParamLimits

0xcaf8,	// (0x0003d8c9) vkb2_area_keypad_pane

0xcb40,	// (0x0003d911) vkb2_area_top_pane_ParamLimits

0xcb40,	// (0x0003d911) vkb2_area_top_pane

0xcbc6,	// (0x0003d997) vkb2_top_entry_pane_ParamLimits

0xcbc6,	// (0x0003d997) vkb2_top_entry_pane

0xcbf3,	// (0x0003d9c4) vkb2_top_grid_left_pane_ParamLimits

0xcbf3,	// (0x0003d9c4) vkb2_top_grid_left_pane

0xcc13,	// (0x0003d9e4) vkb2_top_grid_right_pane_ParamLimits

0xcc13,	// (0x0003d9e4) vkb2_top_grid_right_pane

0x2271,	// (0x00033042) vkb2_cell_keypad_pane_ParamLimits

0x2271,	// (0x00033042) vkb2_cell_keypad_pane

0xcc59,	// (0x0003da2a) vkb2_area_bottom_grid_pane_ParamLimits

0xcc59,	// (0x0003da2a) vkb2_area_bottom_grid_pane

0xcc83,	// (0x0003da54) vkb2_area_bottom_pane_g1_ParamLimits

0xcc83,	// (0x0003da54) vkb2_area_bottom_pane_g1

0xcca9,	// (0x0003da7a) vkb2_area_bottom_pane_g2_ParamLimits

0xcca9,	// (0x0003da7a) vkb2_area_bottom_pane_g2

0xccda,	// (0x0003daab) vkb2_area_bottom_pane_g3_ParamLimits

0xccda,	// (0x0003daab) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x00040b3c) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x00040b3c) vkb2_area_bottom_pane_g

0x241b,	// (0x000331ec) vkb2_top_cell_left_pane_ParamLimits

0x241b,	// (0x000331ec) vkb2_top_cell_left_pane

0xea58,	// (0x0003f829) vkb2_top_entry_pane_g1_ParamLimits

0xea58,	// (0x0003f829) vkb2_top_entry_pane_g1

0xea66,	// (0x0003f837) vkb2_top_entry_pane_t1_ParamLimits

0xea66,	// (0x0003f837) vkb2_top_entry_pane_t1

0x927c,	// (0x0003a04d) vkb2_top_entry_pane_t2_ParamLimits

0x927c,	// (0x0003a04d) vkb2_top_entry_pane_t2

0x92ae,	// (0x0003a07f) vkb2_top_entry_pane_t3_ParamLimits

0x92ae,	// (0x0003a07f) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x00040b43) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x00040b43) vkb2_top_entry_pane_t

0xcd44,	// (0x0003db15) vkb2_top_grid_right_pane_g1_ParamLimits

0xcd44,	// (0x0003db15) vkb2_top_grid_right_pane_g1

0x247e,	// (0x0003324f) vkb2_top_grid_right_pane_g2_ParamLimits

0x247e,	// (0x0003324f) vkb2_top_grid_right_pane_g2

0x2496,	// (0x00033267) vkb2_top_grid_right_pane_g3_ParamLimits

0x2496,	// (0x00033267) vkb2_top_grid_right_pane_g3

0xcd5a,	// (0x0003db2b) vkb2_top_grid_right_pane_g4_ParamLimits

0xcd5a,	// (0x0003db2b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x00040b4a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x00040b4a) vkb2_top_grid_right_pane_g

0x24c4,	// (0x00033295) vkb2_top_cell_left_pane_g1

0x24db,	// (0x000332ac) vkb2_cell_keypad_pane_g1_ParamLimits

0x24db,	// (0x000332ac) vkb2_cell_keypad_pane_g1

0x92d2,	// (0x0003a0a3) vkb2_cell_keypad_pane_t1_ParamLimits

0x92d2,	// (0x0003a0a3) vkb2_cell_keypad_pane_t1

0x24e9,	// (0x000332ba) vkb2_cell_bottom_grid_pane_ParamLimits

0x24e9,	// (0x000332ba) vkb2_cell_bottom_grid_pane

0x2522,	// (0x000332f3) vkb2_cell_bottom_grid_pane_g1

0xe717,	// (0x0003f4e8) aid_call2_pane_cp02

0xe71f,	// (0x0003f4f0) aid_call_pane_cp02

0xe727,	// (0x0003f4f8) clock_digital_number_pane_cp10

0xe72f,	// (0x0003f500) clock_digital_number_pane_cp11

0xe737,	// (0x0003f508) clock_digital_number_pane_cp12

0xe73f,	// (0x0003f510) clock_digital_number_pane_cp13

0xe747,	// (0x0003f518) clock_digital_separator_pane_cp10

0x3ed0,	// (0x00034ca1) popup_clock_digital_analogue_window_cp2_g1

0x3ed0,	// (0x00034ca1) popup_clock_digital_analogue_window_cp2_g2

0xe74f,	// (0x0003f520) popup_clock_digital_analogue_window_cp2_g3

0x3ed0,	// (0x00034ca1) popup_clock_digital_analogue_window_cp2_g4

0xe74f,	// (0x0003f520) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x00040aff) popup_clock_digital_analogue_window_cp2_g

0xe757,	// (0x0003f528) popup_clock_digital_analogue_window_cp2_t1

0xe765,	// (0x0003f536) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x00040b0a) popup_clock_digital_analogue_window_cp2_t

0x7387,	// (0x00038158) clock_digital_number_pane_cp10_g1

0x7387,	// (0x00038158) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x000408e6) clock_digital_number_pane_cp10_g

0x7387,	// (0x00038158) clock_digital_separator_pane_cp10_g1

0x7387,	// (0x00038158) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x000408e6) clock_digital_separator_pane_cp10_g

0x8cf9,	// (0x00039aca) uniindi_top_pane_g3

0x8d0a,	// (0x00039adb) uniindi_top_pane_g4

0x22fc,	// (0x000330cd) vkb2_row_keypad_pane_ParamLimits

0x22fc,	// (0x000330cd) vkb2_row_keypad_pane

0x253e,	// (0x0003330f) vkb2_cell_t_keypad_pane_ParamLimits

0x253e,	// (0x0003330f) vkb2_cell_t_keypad_pane

0x254e,	// (0x0003331f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x254e,	// (0x0003331f) vkb2_cell_t_keypad_pane_cp08

0x2561,	// (0x00033332) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2561,	// (0x00033332) vkb2_cell_t_keypad_pane_cp09

0x2575,	// (0x00033346) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2575,	// (0x00033346) vkb2_cell_t_keypad_pane_cp01

0x2586,	// (0x00033357) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2586,	// (0x00033357) vkb2_cell_t_keypad_pane_cp02

0x2597,	// (0x00033368) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2597,	// (0x00033368) vkb2_cell_t_keypad_pane_cp03

0x25a8,	// (0x00033379) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25a8,	// (0x00033379) vkb2_cell_t_keypad_pane_cp04

0x25b9,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25b9,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp05

0x25ca,	// (0x0003339b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25ca,	// (0x0003339b) vkb2_cell_t_keypad_pane_cp06

0x25db,	// (0x000333ac) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25db,	// (0x000333ac) vkb2_cell_t_keypad_pane_cp07

0x25ec,	// (0x000333bd) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25ec,	// (0x000333bd) vkb2_cell_t_keypad_pane_cp10

0x1ce9,	// (0x00032aba) vkb2_cell_t_keypad_pane_g1

0x92e9,	// (0x0003a0ba) vkb2_cell_t_keypad_pane_t1

0xf385,	// (0x00040156) popup_grid_graphic2_window

0xea9f,	// (0x0003f870) aid_size_cell_graphic2_ParamLimits

0xea9f,	// (0x0003f870) aid_size_cell_graphic2

0xeadd,	// (0x0003f8ae) bg_popup_window_pane_cp21_ParamLimits

0xeadd,	// (0x0003f8ae) bg_popup_window_pane_cp21

0xeaeb,	// (0x0003f8bc) graphic2_pages_pane_ParamLimits

0xeaeb,	// (0x0003f8bc) graphic2_pages_pane

0xeb41,	// (0x0003f912) grid_graphic2_control_pane_ParamLimits

0xeb41,	// (0x0003f912) grid_graphic2_control_pane

0xeb89,	// (0x0003f95a) grid_graphic2_pane_ParamLimits

0xeb89,	// (0x0003f95a) grid_graphic2_pane

0xec10,	// (0x0003f9e1) cell_graphic2_pane

0xf385,	// (0x00040156) main_comp_mode_pane

0x8544,	// (0x00039315) list_ai3_gene_pane_ParamLimits

0xe45e,	// (0x0003f22f) bg_popup_window_pane_cp19_ParamLimits

0x8947,	// (0x00039718) bg_touch_area_indi_pane_ParamLimits

0x8947,	// (0x00039718) bg_touch_area_indi_pane

0x895d,	// (0x0003972e) bg_touch_area_indi_pane_cp01_ParamLimits

0x895d,	// (0x0003972e) bg_touch_area_indi_pane_cp01

0x8973,	// (0x00039744) bg_touch_area_indi_pane_cp02_ParamLimits

0x8973,	// (0x00039744) bg_touch_area_indi_pane_cp02

0x8989,	// (0x0003975a) bg_touch_area_indi_pane_cp03_ParamLimits

0x8989,	// (0x0003975a) bg_touch_area_indi_pane_cp03

0x89a3,	// (0x00039774) popup_slider_window_g1_ParamLimits

0x89bf,	// (0x00039790) popup_slider_window_g2_ParamLimits

0x89db,	// (0x000397ac) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x00040a94) popup_slider_window_g_ParamLimits

0x8a41,	// (0x00039812) popup_slider_window_t1_ParamLimits

0x8ab5,	// (0x00039886) small_volume_slider_vertical_pane_ParamLimits

0xec10,	// (0x0003f9e1) cell_graphic2_pane_ParamLimits

0xec6b,	// (0x0003fa3c) bg_button_pane_cp10_ParamLimits

0xec6b,	// (0x0003fa3c) bg_button_pane_cp10

0xec7e,	// (0x0003fa4f) bg_button_pane_cp11_ParamLimits

0xec7e,	// (0x0003fa4f) bg_button_pane_cp11

0xec91,	// (0x0003fa62) graphic2_pages_pane_g1_ParamLimits

0xec91,	// (0x0003fa62) graphic2_pages_pane_g1

0xecac,	// (0x0003fa7d) graphic2_pages_pane_g2_ParamLimits

0xecac,	// (0x0003fa7d) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x00040b58) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x00040b58) graphic2_pages_pane_g

0xecc4,	// (0x0003fa95) graphic2_pages_pane_t1_ParamLimits

0xecc4,	// (0x0003fa95) graphic2_pages_pane_t1

0xecdc,	// (0x0003faad) cell_graphic2_control_pane_ParamLimits

0xecdc,	// (0x0003faad) cell_graphic2_control_pane

0xed0e,	// (0x0003fadf) cell_graphic2_pane_g1_ParamLimits

0xed0e,	// (0x0003fadf) cell_graphic2_pane_g1

0xdefb,	// (0x0003eccc) cell_graphic2_pane_g2_ParamLimits

0xdefb,	// (0x0003eccc) cell_graphic2_pane_g2

0xdf31,	// (0x0003ed02) cell_graphic2_pane_g3_ParamLimits

0xdf31,	// (0x0003ed02) cell_graphic2_pane_g3

0xdf08,	// (0x0003ecd9) cell_graphic2_pane_g4_ParamLimits

0xdf08,	// (0x0003ecd9) cell_graphic2_pane_g4

0xed1b,	// (0x0003faec) cell_graphic2_pane_g5_ParamLimits

0xed1b,	// (0x0003faec) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x00040b5d) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x00040b5d) cell_graphic2_pane_g

0xed38,	// (0x0003fb09) cell_graphic2_pane_t1_ParamLimits

0xed38,	// (0x0003fb09) cell_graphic2_pane_t1

0x5a37,	// (0x00036808) grid_highlight_pane_cp11_ParamLimits

0x5a37,	// (0x00036808) grid_highlight_pane_cp11

0x2f5d,	// (0x00033d2e) bg_button_pane_cp05

0xed82,	// (0x0003fb53) cell_graphic2_control_pane_g1

0x7387,	// (0x00038158) bg_touch_area_indi_pane_g1

0x95c2,	// (0x0003a393) aid_cmod_rocker_key_size

0x95cc,	// (0x0003a39d) aid_cmode_itu_key_size

0x95d6,	// (0x0003a3a7) main_cmode_video_pane

0x95e0,	// (0x0003a3b1) main_comp_mode_itu_pane

0x95ec,	// (0x0003a3bd) main_comp_mode_rocker_pane

0x95f8,	// (0x0003a3c9) cell_cmode_rocker_pane_ParamLimits

0x95f8,	// (0x0003a3c9) cell_cmode_rocker_pane

0x960a,	// (0x0003a3db) cell_cmode_itu_pane_ParamLimits

0x960a,	// (0x0003a3db) cell_cmode_itu_pane

0x3561,	// (0x00034332) bg_button_pane_cp06_ParamLimits

0x3561,	// (0x00034332) bg_button_pane_cp06

0x7605,	// (0x000383d6) cell_cmode_rocker_pane_g1_ParamLimits

0x7605,	// (0x000383d6) cell_cmode_rocker_pane_g1

0x8b59,	// (0x0003992a) cell_cmode_rocker_pane_g2_ParamLimits

0x8b59,	// (0x0003992a) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x00040b6d) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x00040b6d) cell_cmode_rocker_pane_g

0xdf1d,	// (0x0003ecee) bg_button_pane_cp07

0x961f,	// (0x0003a3f0) cell_cmode_itu_pane_g1

0x9628,	// (0x0003a3f9) cell_cmode_itu_pane_t1

0x9636,	// (0x0003a407) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x00040b72) cell_cmode_itu_pane_t

0x8d7c,	// (0x00039b4d) aid_touch_ctrl_left

0x8d84,	// (0x00039b55) aid_touch_ctrl_right

0xdf1d,	// (0x0003ecee) compa_mode_pane

0xeda6,	// (0x0003fb77) aid_cmod_rocker_key_size_cp

0xedb0,	// (0x0003fb81) aid_cmode_itu_key_size_cp

0x9658,	// (0x0003a429) compa_mode_pane_g1

0x9660,	// (0x0003a431) compa_mode_pane_g2

0x9668,	// (0x0003a439) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x00040b77) compa_mode_pane_g

0xedba,	// (0x0003fb8b) main_comp_mode_itu_pane_cp

0xedc2,	// (0x0003fb93) main_comp_mode_rocker_pane_cp

0xedca,	// (0x0003fb9b) cell_cmode_itu_pane_cp_ParamLimits

0xedca,	// (0x0003fb9b) cell_cmode_itu_pane_cp

0xeddf,	// (0x0003fbb0) cell_cmode_rocker_pane_cp_ParamLimits

0xeddf,	// (0x0003fbb0) cell_cmode_rocker_pane_cp

0x3561,	// (0x00034332) bg_button_pane_cp06_cp_ParamLimits

0x3561,	// (0x00034332) bg_button_pane_cp06_cp

0x7605,	// (0x000383d6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7605,	// (0x000383d6) cell_cmode_rocker_pane_g1_cp

0x7387,	// (0x00038158) cell_cmode_rocker_pane_g2_cp

0xdf1d,	// (0x0003ecee) bg_button_pane_cp07_cp

0xedf1,	// (0x0003fbc2) cell_cmode_itu_pane_g1_cp

0xedfa,	// (0x0003fbcb) cell_cmode_itu_pane_t1_cp

0xedfa,	// (0x0003fbcb) cell_cmode_itu_pane_t2_cp

0xdaec,	// (0x0003e8bd) settings_code_pane_cp2

0x2cd4,	// (0x00033aa5) bg_popup_window_pane_cp3_ParamLimits

0x315d,	// (0x00033f2e) heading_pane_cp3_ParamLimits

0x316c,	// (0x00033f3d) listscroll_popup_graphic_pane_ParamLimits

0x1a92,	// (0x00032863) fep_hwr_aid_pane_ParamLimits

0x1fc2,	// (0x00032d93) aid_touch_sctrl_top_ParamLimits

0x1fdd,	// (0x00032dae) sctrl_sk_top_pane_g1_ParamLimits

0x1ce9,	// (0x00032aba) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x00040aad) sctrl_sk_top_pane_g_ParamLimits

0x1fea,	// (0x00032dbb) sctrl_sk_top_pane_t1_ParamLimits

0x1fc2,	// (0x00032d93) aid_touch_sctrl_bottom_ParamLimits

0x1fea,	// (0x00032dbb) sctrl_sk_bottom_pane_t1_ParamLimits

0x8cc5,	// (0x00039a96) aid_area_touch_clock

0xcb88,	// (0x0003d959) aid_vkb2_area_top_pane_cell_ParamLimits

0xcb88,	// (0x0003d959) aid_vkb2_area_top_pane_cell

0xcc33,	// (0x0003da04) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcc33,	// (0x0003da04) aid_vkb2_area_bottom_pane_cell

0x9234,	// (0x0003a005) popup_char_count_window

0x96b5,	// (0x0003a486) popup_char_count_window_g1

0x96be,	// (0x0003a48f) popup_char_count_window_g2

0x96c7,	// (0x0003a498) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x00040b7e) popup_char_count_window_g

0x96d0,	// (0x0003a4a1) popup_char_count_window_t1

0x2099,	// (0x00032e6a) popup_fep_char_preview_window_ParamLimits

0x2099,	// (0x00032e6a) popup_fep_char_preview_window

0xcba8,	// (0x0003d979) vkb2_top_candi_pane_ParamLimits

0xcba8,	// (0x0003d979) vkb2_top_candi_pane

0xee08,	// (0x0003fbd9) cell_vkb2_top_candi_pane_ParamLimits

0xee08,	// (0x0003fbd9) cell_vkb2_top_candi_pane

0x2601,	// (0x000333d2) bg_popup_fep_char_preview_window_ParamLimits

0x2601,	// (0x000333d2) bg_popup_fep_char_preview_window

0x260f,	// (0x000333e0) popup_fep_char_preview_window_t1_ParamLimits

0x260f,	// (0x000333e0) popup_fep_char_preview_window_t1

0x972b,	// (0x0003a4fc) bg_popup_fep_char_preview_window_g1

0x9733,	// (0x0003a504) bg_popup_fep_char_preview_window_g2

0x973b,	// (0x0003a50c) bg_popup_fep_char_preview_window_g3

0x9743,	// (0x0003a514) bg_popup_fep_char_preview_window_g4

0x974b,	// (0x0003a51c) bg_popup_fep_char_preview_window_g5

0x9753,	// (0x0003a524) bg_popup_fep_char_preview_window_g6

0x975b,	// (0x0003a52c) bg_popup_fep_char_preview_window_g7

0x9763,	// (0x0003a534) bg_popup_fep_char_preview_window_g8

0x976b,	// (0x0003a53c) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x00040b85) bg_popup_fep_char_preview_window_g

0x1ce9,	// (0x00032aba) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1ce9,	// (0x00032aba) cell_vkb2_top_candi_pane_g1

0x1cf7,	// (0x00032ac8) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1cf7,	// (0x00032ac8) cell_vkb2_top_candi_pane_g2

0x86df,	// (0x000394b0) cell_vkb2_top_candi_pane_g3_ParamLimits

0x86df,	// (0x000394b0) cell_vkb2_top_candi_pane_g3

0x2651,	// (0x00033422) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2651,	// (0x00033422) cell_vkb2_top_candi_pane_g4

0x7ad0,	// (0x000388a1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7ad0,	// (0x000388a1) cell_vkb2_top_candi_pane_g5

0x2672,	// (0x00033443) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2672,	// (0x00033443) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x00040b9a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x00040b9a) cell_vkb2_top_candi_pane_g

0x2680,	// (0x00033451) cell_vkb2_top_candi_pane_t1

0x144e,	// (0x0003221f) aid_size_touch_slider_mark_ParamLimits

0x144e,	// (0x0003221f) aid_size_touch_slider_mark

0xeb27,	// (0x0003f8f8) grid_graphic2_catg_pane_ParamLimits

0xeb27,	// (0x0003f8f8) grid_graphic2_catg_pane

0xebe3,	// (0x0003f9b4) popup_grid_graphic2_window_t1_ParamLimits

0xebe3,	// (0x0003f9b4) popup_grid_graphic2_window_t1

0xebf9,	// (0x0003f9ca) popup_grid_graphic2_window_t2_ParamLimits

0xebf9,	// (0x0003f9ca) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x00040b53) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x00040b53) popup_grid_graphic2_window_t

0x2f5d,	// (0x00033d2e) bg_button_pane_cp05_ParamLimits

0xed82,	// (0x0003fb53) cell_graphic2_control_pane_g1_ParamLimits

0xef6c,	// (0x0003fd3d) cell_graphic2_catg_pane_ParamLimits

0xef6c,	// (0x0003fd3d) cell_graphic2_catg_pane

0xdf1d,	// (0x0003ecee) bg_button_pane_cp12

0xef7e,	// (0x0003fd4f) cell_graphic2_catg_pane_g1

0x8c91,	// (0x00039a62) cell_tb_ext_pane_t1_ParamLimits

0x243b,	// (0x0003320c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x243b,	// (0x0003320c) vkb2_top_cell_right_narrow_pane

0x2453,	// (0x00033224) vkb2_top_cell_right_wide_pane_ParamLimits

0x2453,	// (0x00033224) vkb2_top_cell_right_wide_pane

0x1a84,	// (0x00032855) bg_vkb2_func_pane_ParamLimits

0x1a84,	// (0x00032855) bg_vkb2_func_pane

0x24c4,	// (0x00033295) vkb2_top_cell_left_pane_g1_ParamLimits

0x1a84,	// (0x00032855) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1a84,	// (0x00032855) bg_vkb2_fuc_pane_cp03

0x2522,	// (0x000332f3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4d3c,	// (0x00035b0d) bg_vkb2_func_pane_g1

0x4d44,	// (0x00035b15) bg_vkb2_func_pane_g2

0x4d54,	// (0x00035b25) bg_vkb2_func_pane_g3

0x4d4c,	// (0x00035b1d) bg_vkb2_func_pane_g4

0x4d5c,	// (0x00035b2d) bg_vkb2_func_pane_g5

0x4d64,	// (0x00035b35) bg_vkb2_func_pane_g6

0x4d6c,	// (0x00035b3d) bg_vkb2_func_pane_g7

0x4d74,	// (0x00035b45) bg_vkb2_func_pane_g8

0x4d34,	// (0x00035b05) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x00040ba7) bg_vkb2_func_pane_g

0x1a84,	// (0x00032855) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1a84,	// (0x00032855) bg_vkb2_fuc_pane_cp01

0x24c4,	// (0x00033295) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24c4,	// (0x00033295) vkb2_top_cell_right_wide_pane_g1

0x1a84,	// (0x00032855) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1a84,	// (0x00032855) bg_vkb2_fuc_pane_cp02

0x2522,	// (0x000332f3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2522,	// (0x000332f3) vkb2_top_cell_right_narrow_pane_g1

0xe3a0,	// (0x0003f171) aid_touch_area_decrease_ParamLimits

0xe3a0,	// (0x0003f171) aid_touch_area_decrease

0xe3da,	// (0x0003f1ab) aid_touch_area_increase_ParamLimits

0xe3da,	// (0x0003f1ab) aid_touch_area_increase

0xe402,	// (0x0003f1d3) aid_touch_area_mute_ParamLimits

0xe402,	// (0x0003f1d3) aid_touch_area_mute

0xe42a,	// (0x0003f1fb) aid_touch_area_slider_ParamLimits

0xe42a,	// (0x0003f1fb) aid_touch_area_slider

0xe46a,	// (0x0003f23b) popup_slider_window_g4_ParamLimits

0xe46a,	// (0x0003f23b) popup_slider_window_g4

0xe492,	// (0x0003f263) popup_slider_window_g5_ParamLimits

0xe492,	// (0x0003f263) popup_slider_window_g5

0xe4c6,	// (0x0003f297) popup_slider_window_g6_ParamLimits

0xe4c6,	// (0x0003f297) popup_slider_window_g6

0x8a6f,	// (0x00039840) popup_slider_window_t2_ParamLimits

0x8a6f,	// (0x00039840) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x00040aa1) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x00040aa1) popup_slider_window_t

0xe4e2,	// (0x0003f2b3) slider_pane_ParamLimits

0xe4e2,	// (0x0003f2b3) slider_pane

0x978e,	// (0x0003a55f) slider_pane_g1_ParamLimits

0x978e,	// (0x0003a55f) slider_pane_g1

0x97a2,	// (0x0003a573) slider_pane_g2_ParamLimits

0x97a2,	// (0x0003a573) slider_pane_g2

0x97b8,	// (0x0003a589) slider_pane_g3_ParamLimits

0x97b8,	// (0x0003a589) slider_pane_g3

0x0003,

0xfde9,	// (0x00040bba) slider_pane_g_ParamLimits

0xfde9,	// (0x00040bba) slider_pane_g

0xc5e4,	// (0x0003d3b5) popup_tb_float_extension_window_ParamLimits

0xc5e4,	// (0x0003d3b5) popup_tb_float_extension_window

0x97e4,	// (0x0003a5b5) aid_size_cell_tb_float_ext

0xdf1d,	// (0x0003ecee) bg_popup_sub_window_cp28

0x97f0,	// (0x0003a5c1) grid_tb_float_ext_pane

0x97fa,	// (0x0003a5cb) cell_tb_float_ext_pane_ParamLimits

0x97fa,	// (0x0003a5cb) cell_tb_float_ext_pane

0x9814,	// (0x0003a5e5) cell_tb_float_ext_pane_g1

0x981d,	// (0x0003a5ee) grid_highlight_pane_cp12

0xc7c0,	// (0x0003d591) cell_last_hwr_side_pane_ParamLimits

0xc7c0,	// (0x0003d591) cell_last_hwr_side_pane

0x7387,	// (0x00038158) cell_last_hwr_side_pane_g1

0x9826,	// (0x0003a5f7) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x00040bc3) cell_last_hwr_side_pane_g

0xcd0f,	// (0x0003dae0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcd0f,	// (0x0003dae0) vkb2_area_bottom_space_btn_pane

0x1ce9,	// (0x00032aba) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x92e9,	// (0x0003a0ba) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2680,	// (0x00033451) cell_vkb2_top_candi_pane_t1_ParamLimits

0x269f,	// (0x00033470) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x269f,	// (0x00033470) vkb2_area_bottom_space_btn_pane_g1

0x26d9,	// (0x000334aa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26d9,	// (0x000334aa) vkb2_area_bottom_space_btn_pane_g2

0x270f,	// (0x000334e0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x270f,	// (0x000334e0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x00040bc8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x00040bc8) vkb2_area_bottom_space_btn_pane_g

0x1b47,	// (0x00032918) cel_fep_hwr_func_pane_ParamLimits

0x1b47,	// (0x00032918) cel_fep_hwr_func_pane

0xc795,	// (0x0003d566) cell_hwr_side_button_pane_ParamLimits

0xc795,	// (0x0003d566) cell_hwr_side_button_pane

0x8cc5,	// (0x00039a96) aid_area_touch_clock_ParamLimits

0x2f5d,	// (0x00033d2e) bg_uniindi_top_pane_ParamLimits

0x8cd7,	// (0x00039aa8) uniindi_top_pane_g1_ParamLimits

0x8ced,	// (0x00039abe) uniindi_top_pane_g2_ParamLimits

0x8cf9,	// (0x00039aca) uniindi_top_pane_g3_ParamLimits

0x8d0a,	// (0x00039adb) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x00040ad9) uniindi_top_pane_g_ParamLimits

0x8d17,	// (0x00039ae8) uniindi_top_pane_t1_ParamLimits

0x2f5d,	// (0x00033d2e) bg_vkb2_func_pane_cp01_ParamLimits

0x2f5d,	// (0x00033d2e) bg_vkb2_func_pane_cp01

0x982f,	// (0x0003a600) cel_fep_hwr_func_pane_g1_ParamLimits

0x982f,	// (0x0003a600) cel_fep_hwr_func_pane_g1

0x2f5d,	// (0x00033d2e) bg_vkb2_func_pane_cp02_ParamLimits

0x2f5d,	// (0x00033d2e) bg_vkb2_func_pane_cp02

0x982f,	// (0x0003a600) cell_hwr_side_button_pane_g1_ParamLimits

0x982f,	// (0x0003a600) cell_hwr_side_button_pane_g1

0x4bb5,	// (0x00035986) status_pane_g4_ParamLimits

0x4bb5,	// (0x00035986) status_pane_g4

0x4bcf,	// (0x000359a0) status_pane_t1

0x70cc,	// (0x00037e9d) form2_midp_gauge_slider_cont_pane

0x70d4,	// (0x00037ea5) form2_midp_gauge_slider_pane_t1_ParamLimits

0xddd2,	// (0x0003eba3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdde4,	// (0x0003ebb5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x00040899) form2_midp_gauge_slider_pane_t_ParamLimits

0x710a,	// (0x00037edb) form2_midp_slider_pane_ParamLimits

0x2059,	// (0x00032e2a) aid_size_cell_func_vkb2_ParamLimits

0x2059,	// (0x00032e2a) aid_size_cell_func_vkb2

0x97d0,	// (0x0003a5a1) slider_pane_g4_ParamLimits

0x97d0,	// (0x0003a5a1) slider_pane_g4

0xcd78,	// (0x0003db49) form2_midp_gauge_slider_pane_t2_cp01

0xcd86,	// (0x0003db57) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcd86,	// (0x0003db57) form2_midp_gauge_slider_pane_t3_cp01

0x2784,	// (0x00033555) form2_midp_slider_pane_cp01

0xdf1d,	// (0x0003ecee) navi_smil_pane

0x9868,	// (0x0003a639) navi_smil_pane_g1

0x9870,	// (0x0003a641) navi_smil_pane_t1

0x983d,	// (0x0003a60e) form2_midp_slider_pane_g1

0x9846,	// (0x0003a617) form2_midp_slider_pane_g2

0x984e,	// (0x0003a61f) form2_midp_slider_pane_g3

0x983d,	// (0x0003a60e) form2_midp_slider_pane_g4

0xef87,	// (0x0003fd58) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x00040bd1) form2_midp_slider_pane_g

0x2749,	// (0x0003351a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2749,	// (0x0003351a) vkb2_area_bottom_space_btn_pane_g4

0xd4d0,	// (0x0003e2a1) lc0_navi_pane_ParamLimits

0xd4d0,	// (0x0003e2a1) lc0_navi_pane

0xd53a,	// (0x0003e30b) lc0_stat_indi_pane_ParamLimits

0xd53a,	// (0x0003e30b) lc0_stat_indi_pane

0xd54f,	// (0x0003e320) ls0_title_pane_ParamLimits

0xd54f,	// (0x0003e320) ls0_title_pane

0x3561,	// (0x00034332) bg_popup_sub_pane_cp14_ParamLimits

0x8cac,	// (0x00039a7d) list_uniindi_pane_ParamLimits

0x8cb8,	// (0x00039a89) uniindi_top_pane_ParamLimits

0x8d54,	// (0x00039b25) list_single_uniindi_pane_g1_ParamLimits

0x8d67,	// (0x00039b38) list_single_uniindi_pane_t1_ParamLimits

0xcda3,	// (0x0003db74) lc0_stat_clock_pane_ParamLimits

0xcda3,	// (0x0003db74) lc0_stat_clock_pane

0xef92,	// (0x0003fd63) lc0_stat_indi_pane_g1_ParamLimits

0xef92,	// (0x0003fd63) lc0_stat_indi_pane_g1

0xef9f,	// (0x0003fd70) lc0_stat_indi_pane_g2_ParamLimits

0xef9f,	// (0x0003fd70) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x00040bdc) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x00040bdc) lc0_stat_indi_pane_g

0xcdb0,	// (0x0003db81) lc0_uni_indicator_pane_ParamLimits

0xcdb0,	// (0x0003db81) lc0_uni_indicator_pane

0xefac,	// (0x0003fd7d) ls0_title_pane_g1_ParamLimits

0xefac,	// (0x0003fd7d) ls0_title_pane_g1

0xefc0,	// (0x0003fd91) ls0_title_pane_t1_ParamLimits

0xefc0,	// (0x0003fd91) ls0_title_pane_t1

0xcdbd,	// (0x0003db8e) lc0_uni_indicator_pane_g1_ParamLimits

0xcdbd,	// (0x0003db8e) lc0_uni_indicator_pane_g1

0x98e2,	// (0x0003a6b3) lc0_stat_clock_pane_t1

0xf385,	// (0x00040156) main_ai5_pane

0x98f0,	// (0x0003a6c1) ai5_sk_pane_ParamLimits

0x98f0,	// (0x0003a6c1) ai5_sk_pane

0xefee,	// (0x0003fdbf) cell_ai5_widget_pane_ParamLimits

0xefee,	// (0x0003fdbf) cell_ai5_widget_pane

0x99c6,	// (0x0003a797) aid_size_cell_widget_grid

0x99dc,	// (0x0003a7ad) bg_ai5_widget_pane_ParamLimits

0x99dc,	// (0x0003a7ad) bg_ai5_widget_pane

0x9a58,	// (0x0003a829) cell_ai5_widget_pane_g2

0x9a6c,	// (0x0003a83d) cell_ai5_widget_pane_g3

0x9a86,	// (0x0003a857) cell_ai5_widget_pane_g4

0x9a96,	// (0x0003a867) cell_ai5_widget_pane_g5

0x9aa6,	// (0x0003a877) cell_ai5_widget_pane_g6

0x9ab2,	// (0x0003a883) cell_ai5_widget_pane_g7

0x9b1e,	// (0x0003a8ef) cell_ai5_widget_pane_t1_ParamLimits

0x9b1e,	// (0x0003a8ef) cell_ai5_widget_pane_t1

0x9b3b,	// (0x0003a90c) cell_ai5_widget_pane_t2_ParamLimits

0x9b3b,	// (0x0003a90c) cell_ai5_widget_pane_t2

0x9b53,	// (0x0003a924) cell_ai5_widget_pane_t3_ParamLimits

0x9b53,	// (0x0003a924) cell_ai5_widget_pane_t3

0x9b6b,	// (0x0003a93c) cell_ai5_widget_pane_t4_ParamLimits

0x9b6b,	// (0x0003a93c) cell_ai5_widget_pane_t4

0x9b91,	// (0x0003a962) cell_ai5_widget_pane_t5_ParamLimits

0x9b91,	// (0x0003a962) cell_ai5_widget_pane_t5

0x9bb0,	// (0x0003a981) cell_ai5_widget_pane_t6_ParamLimits

0x9bb0,	// (0x0003a981) cell_ai5_widget_pane_t6

0x9bc2,	// (0x0003a993) cell_ai5_widget_pane_t7_ParamLimits

0x9bc2,	// (0x0003a993) cell_ai5_widget_pane_t7

0x9be1,	// (0x0003a9b2) cell_ai5_widget_pane_t8_ParamLimits

0x9be1,	// (0x0003a9b2) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x00040bfc) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x00040bfc) cell_ai5_widget_pane_t

0x9c65,	// (0x0003aa36) grid_ai5_widget_pane

0x3561,	// (0x00034332) highlight_cell_ai5_widget_pane_ParamLimits

0x3561,	// (0x00034332) highlight_cell_ai5_widget_pane

0xf05a,	// (0x0003fe2b) ai5_sk_left_pane

0xf064,	// (0x0003fe35) ai5_sk_middle_pane

0xf06e,	// (0x0003fe3f) ai5_sk_right_pane

0x9c9a,	// (0x0003aa6b) bg_ai5_widget_pane_g1_ParamLimits

0x9c9a,	// (0x0003aa6b) bg_ai5_widget_pane_g1

0x9ca6,	// (0x0003aa77) bg_ai5_widget_pane_g2_ParamLimits

0x9ca6,	// (0x0003aa77) bg_ai5_widget_pane_g2

0x9cb2,	// (0x0003aa83) bg_ai5_widget_pane_g3_ParamLimits

0x9cb2,	// (0x0003aa83) bg_ai5_widget_pane_g3

0x9cbe,	// (0x0003aa8f) bg_ai5_widget_pane_g4_ParamLimits

0x9cbe,	// (0x0003aa8f) bg_ai5_widget_pane_g4

0x9cca,	// (0x0003aa9b) bg_ai5_widget_pane_g5_ParamLimits

0x9cca,	// (0x0003aa9b) bg_ai5_widget_pane_g5

0x9cd6,	// (0x0003aaa7) bg_ai5_widget_pane_g6_ParamLimits

0x9cd6,	// (0x0003aaa7) bg_ai5_widget_pane_g6

0x9ce2,	// (0x0003aab3) bg_ai5_widget_pane_g7_ParamLimits

0x9ce2,	// (0x0003aab3) bg_ai5_widget_pane_g7

0x9cee,	// (0x0003aabf) bg_ai5_widget_pane_g8_ParamLimits

0x9cee,	// (0x0003aabf) bg_ai5_widget_pane_g8

0x9cfa,	// (0x0003aacb) bg_ai5_widget_pane_g9_ParamLimits

0x9cfa,	// (0x0003aacb) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x00040c15) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x00040c15) bg_ai5_widget_pane_g

0x9d2c,	// (0x0003aafd) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d2c,	// (0x0003aafd) cell_shortcut_ai5_widget_pane

0x44e6,	// (0x000352b7) bg_cell_shortcut_ai5_widget_pane

0x9d3d,	// (0x0003ab0e) cell_grid_ai5_widget_pane_g1

0x44e6,	// (0x000352b7) highlight_cell_shortcut_ai5_widget_pane

0x4d3c,	// (0x00035b0d) ai5_sk_left_pane_g1

0x9d46,	// (0x0003ab17) ai5_sk_left_pane_g2

0x9d4e,	// (0x0003ab1f) ai5_sk_left_pane_g3

0x9d56,	// (0x0003ab27) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x00040c28) ai5_sk_left_pane_g

0x9d5e,	// (0x0003ab2f) ai5_sk_left_pane_t1

0x4d44,	// (0x00035b15) ai5_sk_right_pane_g1

0x9d6c,	// (0x0003ab3d) ai5_sk_right_pane_g2

0x9d74,	// (0x0003ab45) ai5_sk_right_pane_g3

0x9d7c,	// (0x0003ab4d) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x00040c31) ai5_sk_right_pane_g

0x9d84,	// (0x0003ab55) ai5_sk_right_pane_t1

0x4d44,	// (0x00035b15) ai5_sk_middle_pane_g1

0x4d3c,	// (0x00035b0d) ai5_sk_middle_pane_g2

0x4d5c,	// (0x00035b2d) ai5_sk_middle_pane_g3

0x9d74,	// (0x0003ab45) ai5_sk_middle_pane_g4

0x9d4e,	// (0x0003ab1f) ai5_sk_middle_pane_g5

0x9d92,	// (0x0003ab63) ai5_sk_middle_pane_g6

0xf078,	// (0x0003fe49) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x00040c3a) ai5_sk_middle_pane_g

0xd3bc,	// (0x0003e18d) aid_touch_area_size_lc0_ParamLimits

0xd3bc,	// (0x0003e18d) aid_touch_area_size_lc0

0x1d18,	// (0x00032ae9) cell_hwr_candidate_pane_t1_ParamLimits

0x4886,	// (0x00035657) aid_touch_navi_pane

0xd648,	// (0x0003e419) status_dt_navi_pane_ParamLimits

0xd648,	// (0x0003e419) status_dt_navi_pane

0xd660,	// (0x0003e431) status_dt_sta_pane_ParamLimits

0xd660,	// (0x0003e431) status_dt_sta_pane

0xf080,	// (0x0003fe51) dt_sta_controll_pane

0xf08d,	// (0x0003fe5e) dt_sta_indi_pane

0xf09a,	// (0x0003fe6b) dt_sta_title_pane

0x2f5d,	// (0x00033d2e) bg_dt_sta_indi_pane_ParamLimits

0x2f5d,	// (0x00033d2e) bg_dt_sta_indi_pane

0xf0ac,	// (0x0003fe7d) dt_sta_battery_pane

0xf0b4,	// (0x0003fe85) dt_sta_indi_pane_g1

0x9de4,	// (0x0003abb5) dt_sta_indi_pane_g2

0x9ded,	// (0x0003abbe) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x00040c49) dt_sta_indi_pane_g

0x9df6,	// (0x0003abc7) dt_sta_signal_pane

0x3561,	// (0x00034332) bg_dt_sta_title_pane_ParamLimits

0x3561,	// (0x00034332) bg_dt_sta_title_pane

0x9dff,	// (0x0003abd0) dt_sta_title_pane_g1

0x9e07,	// (0x0003abd8) dt_sta_title_pane_t1_ParamLimits

0x9e07,	// (0x0003abd8) dt_sta_title_pane_t1

0xdf1d,	// (0x0003ecee) bg_dt_sta_control_pane

0xf0bd,	// (0x0003fe8e) dt_sta_controll_pane_g1

0x9e25,	// (0x0003abf6) bg_dt_sta_title_pane_g1

0x9e2e,	// (0x0003abff) bg_dt_sta_title_pane_g2

0x9e37,	// (0x0003ac08) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x00040c50) bg_dt_sta_title_pane_g

0x7387,	// (0x00038158) bg_dt_sta_indi_pane_g1

0x9e40,	// (0x0003ac11) dt_sta_signal_pane_g1

0x9e48,	// (0x0003ac19) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x00040c57) dt_sta_signal_pane_g

0x9e50,	// (0x0003ac21) dt_sta_battery_pane_g1

0x9e59,	// (0x0003ac2a) dt_sta_battery_pane_t1

0x7387,	// (0x00038158) bg_dt_sta_control_pane_g1

0x3fe2,	// (0x00034db3) fep_china_uni_eep_pane

0x3fea,	// (0x00034dbb) fep_china_uni_entry_pane_ParamLimits

0x3ffa,	// (0x00034dcb) popup_fep_china_uni_window_g1_ParamLimits

0x400a,	// (0x00034ddb) popup_fep_china_uni_window_g2_ParamLimits

0x400a,	// (0x00034ddb) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x000404c9) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x000404c9) popup_fep_china_uni_window_g

0x9e68,	// (0x0003ac39) fep_china_uni_eep_pane_g1

0x9e70,	// (0x0003ac41) fep_china_uni_eep_pane_t1

0x985f,	// (0x0003a630) aid_touch_area_size_smil_player

0x49dc,	// (0x000357ad) lc0_clock_pane

0x4bc3,	// (0x00035994) status_pane_g5_ParamLimits

0x4bc3,	// (0x00035994) status_pane_g5

0xc166,	// (0x0003cf37) popup_keymap_window

0x4b81,	// (0x00035952) status_icon_pane

0x9a6c,	// (0x0003a83d) cell_ai5_widget_pane_g3_ParamLimits

0x9a86,	// (0x0003a857) cell_ai5_widget_pane_g4_ParamLimits

0x9a96,	// (0x0003a867) cell_ai5_widget_pane_g5_ParamLimits

0x9abe,	// (0x0003a88f) cell_ai5_widget_pane_g8_ParamLimits

0x9abe,	// (0x0003a88f) cell_ai5_widget_pane_g8

0x9ad2,	// (0x0003a8a3) cell_ai5_widget_pane_g9_ParamLimits

0x9ad2,	// (0x0003a8a3) cell_ai5_widget_pane_g9

0x9ae6,	// (0x0003a8b7) cell_ai5_widget_pane_g10_ParamLimits

0x9ae6,	// (0x0003a8b7) cell_ai5_widget_pane_g10

0x9e7f,	// (0x0003ac50) status_icon_pane_g1

0xdf1d,	// (0x0003ecee) bg_popup_sub_pane_cp13

0x9e87,	// (0x0003ac58) popup_keymap_window_t1

0xd352,	// (0x0003e123) control_pane_g6_ParamLimits

0xd352,	// (0x0003e123) control_pane_g6

0xd35f,	// (0x0003e130) control_pane_g7_ParamLimits

0xd35f,	// (0x0003e130) control_pane_g7

0xd36c,	// (0x0003e13d) control_pane_g8_ParamLimits

0xd36c,	// (0x0003e13d) control_pane_g8

0xf080,	// (0x0003fe51) dt_sta_controll_pane_ParamLimits

0xf08d,	// (0x0003fe5e) dt_sta_indi_pane_ParamLimits

0xf09a,	// (0x0003fe6b) dt_sta_title_pane_ParamLimits

0x3499,	// (0x0003426a) aid_size_touch_scroll_bar_cale

0xf45e,	// (0x0004022f) popup_discreet_window_ParamLimits

0xf45e,	// (0x0004022f) popup_discreet_window

0xb3c4,	// (0x0003c195) popup_sk_window

0x53c3,	// (0x00036194) bg_popup_sub_pane_cp28_ParamLimits

0x53c3,	// (0x00036194) bg_popup_sub_pane_cp28

0x9e95,	// (0x0003ac66) popup_discreet_window_g1_ParamLimits

0x9e95,	// (0x0003ac66) popup_discreet_window_g1

0x9eb5,	// (0x0003ac86) popup_discreet_window_t1_ParamLimits

0x9eb5,	// (0x0003ac86) popup_discreet_window_t1

0x9ed3,	// (0x0003aca4) popup_discreet_window_t2_ParamLimits

0x9ed3,	// (0x0003aca4) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x00040c5c) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x00040c5c) popup_discreet_window_t

0x27bb,	// (0x0003358c) popup_sk_window_g1

0x27c5,	// (0x00033596) popup_sk_window_g2

0x0001,

0xfe92,	// (0x00040c63) popup_sk_window_g

0x27cd,	// (0x0003359e) popup_sk_window_t1

0x27db,	// (0x000335ac) popup_sk_window_t1_copy1

0x9a58,	// (0x0003a829) cell_ai5_widget_pane_g2_ParamLimits

0x9bf3,	// (0x0003a9c4) cell_ai5_widget_pane_t9_ParamLimits

0x9bf3,	// (0x0003a9c4) cell_ai5_widget_pane_t9

0xdf1d,	// (0x0003ecee) main_fep_fshwr2_pane

0xcde4,	// (0x0003dbb5) aid_fshwr2_btn_pane

0xcdf8,	// (0x0003dbc9) aid_fshwr2_syb_pane

0xce0c,	// (0x0003dbdd) aid_fshwr2_txt_pane

0xce1c,	// (0x0003dbed) fshwr2_func_candi_pane

0xce3c,	// (0x0003dc0d) fshwr2_hwr_syb_pane

0xce5e,	// (0x0003dc2f) fshwr2_icf_pane

0xf385,	// (0x00040156) fshwr2_icf_bg_pane

0xce8e,	// (0x0003dc5f) fshwr2_icf_pane_t1_ParamLimits

0xce8e,	// (0x0003dc5f) fshwr2_icf_pane_t1

0x3ed0,	// (0x00034ca1) fshwr2_func_candi_pane_g1

0xf0c6,	// (0x0003fe97) fshwr2_func_candi_row_pane_ParamLimits

0xf0c6,	// (0x0003fe97) fshwr2_func_candi_row_pane

0xcea7,	// (0x0003dc78) cell_fshwr2_syb_pane_ParamLimits

0xcea7,	// (0x0003dc78) cell_fshwr2_syb_pane

0x28b2,	// (0x00033683) fshwr2_hwr_syb_pane_g1_ParamLimits

0x28b2,	// (0x00033683) fshwr2_hwr_syb_pane_g1

0xf385,	// (0x00040156) bg_popup_call_pane_cp01

0xcecd,	// (0x0003dc9e) fshwr2_func_candi_cell_pane_ParamLimits

0xcecd,	// (0x0003dc9e) fshwr2_func_candi_cell_pane

0x51a4,	// (0x00035f75) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x51a4,	// (0x00035f75) fshwr2_func_candi_cell_bg_pane

0xcf18,	// (0x0003dce9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcf18,	// (0x0003dce9) fshwr2_func_candi_cell_pane_g1

0xcf4f,	// (0x0003dd20) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xcf4f,	// (0x0003dd20) fshwr2_func_candi_cell_pane_t1

0xf385,	// (0x00040156) bg_button_pane_cp08

0x480a,	// (0x000355db) cell_fshwr2_syb_bg_pane

0xcf6a,	// (0x0003dd3b) cell_fshwr2_syb_bg_pane_g1

0xcf7d,	// (0x0003dd4e) cell_fshwr2_syb_bg_pane_t1

0x3561,	// (0x00034332) main_tmo_pane

0xd91e,	// (0x0003e6ef) uni_indicator_pane_g1_ParamLimits

0xd934,	// (0x0003e705) uni_indicator_pane_g2_ParamLimits

0xd94a,	// (0x0003e71b) uni_indicator_pane_g3_ParamLimits

0x5f11,	// (0x00036ce2) uni_indicator_pane_g4_ParamLimits

0x5f11,	// (0x00036ce2) uni_indicator_pane_g4

0x5f25,	// (0x00036cf6) uni_indicator_pane_g5_ParamLimits

0x5f25,	// (0x00036cf6) uni_indicator_pane_g5

0x5f25,	// (0x00036cf6) uni_indicator_pane_g6_ParamLimits

0x5f25,	// (0x00036cf6) uni_indicator_pane_g6

0xf8f7,	// (0x000406c8) uni_indicator_pane_g_ParamLimits

0xe37c,	// (0x0003f14d) popup_tmo_note_window_ParamLimits

0xe37c,	// (0x0003f14d) popup_tmo_note_window

0x203b,	// (0x00032e0c) fshwr2_bg_pane

0xcf40,	// (0x0003dd11) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcf40,	// (0x0003dd11) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x00040c68) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x00040c68) fshwr2_func_candi_cell_pane_g

0x1cd1,	// (0x00032aa2) bg_popup_window_pane_cp01

0x2968,	// (0x00033739) bg_popup_window_pane_g1_cp01

0x9f4c,	// (0x0003ad1d) bg_popup_window_pane_cp22_ParamLimits

0x9f4c,	// (0x0003ad1d) bg_popup_window_pane_cp22

0x9f5a,	// (0x0003ad2b) listscroll_tmo_link_pane_ParamLimits

0x9f5a,	// (0x0003ad2b) listscroll_tmo_link_pane

0x9f9a,	// (0x0003ad6b) popup_tmo_note_window_g1_ParamLimits

0x9f9a,	// (0x0003ad6b) popup_tmo_note_window_g1

0x9fa7,	// (0x0003ad78) tmo_note_info_pane_ParamLimits

0x9fa7,	// (0x0003ad78) tmo_note_info_pane

0xf0e9,	// (0x0003feba) list_tmo_note_info_pane_g1_ParamLimits

0xf0e9,	// (0x0003feba) list_tmo_note_info_pane_g1

0x9fd8,	// (0x0003ada9) list_tmo_note_info_pane_g2_ParamLimits

0x9fd8,	// (0x0003ada9) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x00040c6d) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x00040c6d) list_tmo_note_info_pane_g

0x9ff4,	// (0x0003adc5) list_tmo_note_info_text_pane_ParamLimits

0x9ff4,	// (0x0003adc5) list_tmo_note_info_text_pane

0xa075,	// (0x0003ae46) list_tmo_link_pane

0xa082,	// (0x0003ae53) scroll_pane_cp20

0xa08f,	// (0x0003ae60) list_single_tmo_link_pane_ParamLimits

0xa08f,	// (0x0003ae60) list_single_tmo_link_pane

0xa09f,	// (0x0003ae70) list_single_tmo_link_pane_t1

0xa0ad,	// (0x0003ae7e) list_tmo_note_info_text_pane_t1_ParamLimits

0xa0ad,	// (0x0003ae7e) list_tmo_note_info_text_pane_t1

0xcff7,	// (0x0003ddc8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcff7,	// (0x0003ddc8) aid_size_touch_scroll_bar_cp01

0xbccb,	// (0x0003ca9c) aid_size_touch_slider_marker

0xb3b4,	// (0x0003c185) popup_settings_window_ParamLimits

0xb3b4,	// (0x0003c185) popup_settings_window

0x0a64,	// (0x00031835) popup_candi_list_indi_window

0x4886,	// (0x00035657) aid_touch_navi_pane_ParamLimits

0x1f96,	// (0x00032d67) rs_clock_indi_pane

0x1f9f,	// (0x00032d70) sctrl_sk_bottom_pane_ParamLimits

0x1fb0,	// (0x00032d81) sctrl_sk_top_pane_ParamLimits

0x20b3,	// (0x00032e84) popup_fep_tooltip_window

0x99c6,	// (0x0003a797) aid_size_cell_widget_grid_ParamLimits

0x9a43,	// (0x0003a814) cell_ai5_widget_pane_g1_ParamLimits

0x9a43,	// (0x0003a814) cell_ai5_widget_pane_g1

0x9aa6,	// (0x0003a877) cell_ai5_widget_pane_g6_ParamLimits

0x9ab2,	// (0x0003a883) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x00040be1) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x00040be1) cell_ai5_widget_pane_g

0x9c22,	// (0x0003a9f3) cell_ai5_widget_pane_t10_ParamLimits

0x9c22,	// (0x0003a9f3) cell_ai5_widget_pane_t10

0x9c65,	// (0x0003aa36) grid_ai5_widget_pane_ParamLimits

0x9d06,	// (0x0003aad7) cell_contacts_ai5_widget_pane_ParamLimits

0x9d06,	// (0x0003aad7) cell_contacts_ai5_widget_pane

0x9ee8,	// (0x0003acb9) popup_discreet_window_t3_ParamLimits

0x9ee8,	// (0x0003acb9) popup_discreet_window_t3

0xce7a,	// (0x0003dc4b) popup_fshwr2_char_preview_window_ParamLimits

0xce7a,	// (0x0003dc4b) popup_fshwr2_char_preview_window

0xf100,	// (0x0003fed1) tmo_note_info_pane_t1

0xf115,	// (0x0003fee6) tmo_note_info_pane_t2

0xf12c,	// (0x0003fefd) tmo_note_info_pane_t3

0xa051,	// (0x0003ae22) tmo_note_info_pane_t4

0xa063,	// (0x0003ae34) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x00040c72) tmo_note_info_pane_t

0xa075,	// (0x0003ae46) list_tmo_link_pane_ParamLimits

0xa082,	// (0x0003ae53) scroll_pane_cp20_ParamLimits

0xf385,	// (0x00040156) bg_popup_fep_char_preview_window_cp01

0xa0c6,	// (0x0003ae97) popup_fshwr2_char_preview_window_t1

0xa0d4,	// (0x0003aea5) popup_candi_list_indi_window_g1

0xa0dd,	// (0x0003aeae) bg_cell_contacts_ai5_widget_pane

0xa0e9,	// (0x0003aeba) cell_contacts_ai5_widget_pane_g1

0x7a25,	// (0x000387f6) cell_contacts_ai5_widget_pane_g2

0xa0fe,	// (0x0003aecf) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x00040c7d) cell_contacts_ai5_widget_pane_g

0xa10a,	// (0x0003aedb) cell_contacts_ai5_widget_pane_t1

0x3561,	// (0x00034332) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa181,	// (0x0003af52) settings_container_pane

0x44e6,	// (0x000352b7) listscroll_set_pane_copy1

0x6a71,	// (0x00037842) scroll_pane_cp121_copy1

0x5160,	// (0x00035f31) set_content_pane_copy1

0xa18d,	// (0x0003af5e) aid_height_set_list_copy1_ParamLimits

0xa18d,	// (0x0003af5e) aid_height_set_list_copy1

0x611d,	// (0x00036eee) aid_size_parent_copy1_ParamLimits

0x611d,	// (0x00036eee) aid_size_parent_copy1

0xa199,	// (0x0003af6a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa199,	// (0x0003af6a) button_value_adjust_pane_cp6_copy1

0x480a,	// (0x000355db) list_highlight_pane_cp2_copy1_ParamLimits

0x480a,	// (0x000355db) list_highlight_pane_cp2_copy1

0xa1ad,	// (0x0003af7e) list_set_pane_copy1_ParamLimits

0xa1ad,	// (0x0003af7e) list_set_pane_copy1

0xa11c,	// (0x0003aeed) main_pane_set_t1_copy1_ParamLimits

0xa11c,	// (0x0003aeed) main_pane_set_t1_copy1

0xa156,	// (0x0003af27) main_pane_set_t2_copy1_ParamLimits

0xa156,	// (0x0003af27) main_pane_set_t2_copy1

0xa25a,	// (0x0003b02b) main_pane_set_t3_copy1

0xa268,	// (0x0003b039) main_pane_set_t4_copy1

0xa175,	// (0x0003af46) set_content_pane_g1_copy1_ParamLimits

0xa175,	// (0x0003af46) set_content_pane_g1_copy1

0xa276,	// (0x0003b047) setting_code_pane_copy1

0xa27e,	// (0x0003b04f) setting_slider_graphic_pane_copy1

0xa27e,	// (0x0003b04f) setting_slider_pane_copy1

0xa286,	// (0x0003b057) setting_text_pane_copy1

0xa286,	// (0x0003b057) setting_volume_pane_copy1

0xa276,	// (0x0003b047) settings_code_pane_cp2_copy1

0xa28e,	// (0x0003b05f) settings_code_pane_cp_copy1_ParamLimits

0xa28e,	// (0x0003b05f) settings_code_pane_cp_copy1

0x2971,	// (0x00033742) volume_set_pane_copy1

0xa2a2,	// (0x0003b073) volume_set_pane_g10_copy1

0xa2aa,	// (0x0003b07b) volume_set_pane_g1_copy1

0xa2b2,	// (0x0003b083) volume_set_pane_g2_copy1

0xa2ba,	// (0x0003b08b) volume_set_pane_g3_copy1

0xa2c2,	// (0x0003b093) volume_set_pane_g4_copy1

0xa2ca,	// (0x0003b09b) volume_set_pane_g5_copy1

0xa2d2,	// (0x0003b0a3) volume_set_pane_g6_copy1

0xa2da,	// (0x0003b0ab) volume_set_pane_g7_copy1

0xa2e2,	// (0x0003b0b3) volume_set_pane_g8_copy1

0xa2ea,	// (0x0003b0bb) volume_set_pane_g9_copy1

0x2cd4,	// (0x00033aa5) bg_set_opt_pane_cp_copy1_ParamLimits

0x2cd4,	// (0x00033aa5) bg_set_opt_pane_cp_copy1

0x2979,	// (0x0003374a) setting_slider_pane_t1_copy1_ParamLimits

0x2979,	// (0x0003374a) setting_slider_pane_t1_copy1

0x2998,	// (0x00033769) setting_slider_pane_t2_copy1_ParamLimits

0x2998,	// (0x00033769) setting_slider_pane_t2_copy1

0x29b2,	// (0x00033783) setting_slider_pane_t3_copy1_ParamLimits

0x29b2,	// (0x00033783) setting_slider_pane_t3_copy1

0x29ca,	// (0x0003379b) slider_set_pane_copy1_ParamLimits

0x29ca,	// (0x0003379b) slider_set_pane_copy1

0x35b9,	// (0x0003438a) set_opt_bg_pane_g1_copy2

0x35c1,	// (0x00034392) set_opt_bg_pane_g2_copy2

0xa2f2,	// (0x0003b0c3) set_opt_bg_pane_g3_copy2

0x35d1,	// (0x000343a2) set_opt_bg_pane_g4_copy2

0x35d9,	// (0x000343aa) set_opt_bg_pane_g5_copy2

0x35e1,	// (0x000343b2) set_opt_bg_pane_g6_copy2

0xa2fc,	// (0x0003b0cd) set_opt_bg_pane_g7_copy2

0xa304,	// (0x0003b0d5) set_opt_bg_pane_g8_copy2

0xa30e,	// (0x0003b0df) set_opt_bg_pane_g9_copy2

0x29e0,	// (0x000337b1) aid_size_touch_slider_mark_copy1_ParamLimits

0x29e0,	// (0x000337b1) aid_size_touch_slider_mark_copy1

0xa318,	// (0x0003b0e9) slider_set_pane_g1_copy1

0x29f4,	// (0x000337c5) slider_set_pane_g2_copy1

0x146e,	// (0x0003223f) slider_set_pane_g3_copy1_ParamLimits

0x146e,	// (0x0003223f) slider_set_pane_g3_copy1

0x1482,	// (0x00032253) slider_set_pane_g4_copy1_ParamLimits

0x1482,	// (0x00032253) slider_set_pane_g4_copy1

0x149a,	// (0x0003226b) slider_set_pane_g5_copy1_ParamLimits

0x149a,	// (0x0003226b) slider_set_pane_g5_copy1

0x146e,	// (0x0003223f) slider_set_pane_g6_copy1_ParamLimits

0x146e,	// (0x0003223f) slider_set_pane_g6_copy1

0x29fc,	// (0x000337cd) slider_set_pane_g7_copy1_ParamLimits

0x29fc,	// (0x000337cd) slider_set_pane_g7_copy1

0x2bf4,	// (0x000339c5) bg_set_opt_pane_cp2_copy1

0xa321,	// (0x0003b0f2) setting_slider_graphic_pane_g1_copy1

0xa32a,	// (0x0003b0fb) setting_slider_graphic_pane_t1_copy1

0xa33a,	// (0x0003b10b) setting_slider_graphic_pane_t2_copy1

0xa34a,	// (0x0003b11b) slider_set_pane_cp_copy1

0xa35a,	// (0x0003b12b) input_focus_pane_cp1_copy1

0xa363,	// (0x0003b134) list_set_text_pane_copy1

0xa36b,	// (0x0003b13c) setting_text_pane_g1_copy1

0xee8e,	// (0x0003fc5f) set_text_pane_t1_copy1

0xa35a,	// (0x0003b12b) input_focus_pane_cp2_copy1

0xa36b,	// (0x0003b13c) setting_code_pane_g1_copy1

0xa374,	// (0x0003b145) setting_code_pane_t1_copy1

0x6899,	// (0x0003766a) list_set_graphic_pane_copy1

0x2bf4,	// (0x000339c5) bg_set_opt_pane_cp4_copy1

0x41e1,	// (0x00034fb2) list_set_graphic_pane_g1_copy1_ParamLimits

0x41e1,	// (0x00034fb2) list_set_graphic_pane_g1_copy1

0xa382,	// (0x0003b153) list_set_graphic_pane_g2_copy1

0x41f9,	// (0x00034fca) list_set_graphic_pane_t1_copy1_ParamLimits

0x41f9,	// (0x00034fca) list_set_graphic_pane_t1_copy1

0x7387,	// (0x00038158) rs_clock_indi_pane_g1

0xa38a,	// (0x0003b15b) rs_clock_indi_pane_t1

0xa398,	// (0x0003b169) rs_indi_pane

0xa3a0,	// (0x0003b171) rs_indi_pane_g1

0xa3a9,	// (0x0003b17a) rs_indi_pane_g2

0xa3b2,	// (0x0003b183) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x00040c84) rs_indi_pane_g

0x44e6,	// (0x000352b7) bg_popup_preview_window_pane_cp03

0xa3bb,	// (0x0003b18c) popup_fep_tooltip_window_t1

0x800f,	// (0x00038de0) popup_note2_window_g2_ParamLimits

0x800f,	// (0x00038de0) popup_note2_window_g2

0x0001,

0xfc40,	// (0x00040a11) popup_note2_window_g_ParamLimits

0xfc40,	// (0x00040a11) popup_note2_window_g

0x850a,	// (0x000392db) bg_popup_sub_pane_cp11_ParamLimits

0x8517,	// (0x000392e8) cell_ai3_links_pane_g1_ParamLimits

0x852e,	// (0x000392ff) cell_ai3_links_pane_t1

0xee8e,	// (0x0003fc5f) set_text_pane_t1_copy1_ParamLimits

0xd1d9,	// (0x0003dfaa) cell_graphic_popup_pane_cp2_ParamLimits

0xd1d9,	// (0x0003dfaa) cell_graphic_popup_pane_cp2

0xa3c9,	// (0x0003b19a) cell_graphic_popup_pane_g1_cp2

0x32ac,	// (0x0003407d) cell_graphic_popup_pane_g2_cp2

0xa3d1,	// (0x0003b1a2) cell_graphic_popup_pane_g3_cp2

0xa3d9,	// (0x0003b1aa) cell_graphic_popup_pane_t2_cp2

0x32bd,	// (0x0003408e) grid_highlight_pane_cp3_cp2

0x3beb,	// (0x000349bc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3561,	// (0x00034332) main_tmo_pane_ParamLimits

0xe370,	// (0x0003f141) popup_tmo_big_image_note_window

0x9a32,	// (0x0003a803) cell_ai5_widget_list_pane

0x9a3a,	// (0x0003a80b) cell_ai5_widget_lrg_icon_pane

0xf100,	// (0x0003fed1) tmo_note_info_pane_t1_ParamLimits

0xf115,	// (0x0003fee6) tmo_note_info_pane_t2_ParamLimits

0xf12c,	// (0x0003fefd) tmo_note_info_pane_t3_ParamLimits

0xa051,	// (0x0003ae22) tmo_note_info_pane_t4_ParamLimits

0xa063,	// (0x0003ae34) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x00040c72) tmo_note_info_pane_t_ParamLimits

0xa181,	// (0x0003af52) settings_container_pane_ParamLimits

0xa352,	// (0x0003b123) indicator_popup_pane_cp5

0xa352,	// (0x0003b123) indicator_popup_pane_cp6

0x6899,	// (0x0003766a) list_set_graphic_pane_copy1_ParamLimits

0xdf1d,	// (0x0003ecee) bg_popup_window_pane_cp23

0xa3e7,	// (0x0003b1b8) popup_tmo_big_image_note_window_g1

0xa3f1,	// (0x0003b1c2) popup_tmo_big_image_note_window_t1

0xa401,	// (0x0003b1d2) popup_tmo_big_image_note_window_t2

0xa411,	// (0x0003b1e2) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x00040c8b) popup_tmo_big_image_note_window_t

0x7387,	// (0x00038158) cell_ai5_widget_lrg_icon_pane_g1

0xa421,	// (0x0003b1f2) cell_ai5_widget_lrg_icon_pane_t1

0xa42f,	// (0x0003b200) cell_ai5_widget_list_row_pane_ParamLimits

0xa42f,	// (0x0003b200) cell_ai5_widget_list_row_pane

0xa446,	// (0x0003b217) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa446,	// (0x0003b217) cell_ai5_widget_list_row_pane_g1

0xa453,	// (0x0003b224) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa453,	// (0x0003b224) cell_ai5_widget_list_row_pane_t1

0xa484,	// (0x0003b255) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa484,	// (0x0003b255) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x00040c92) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x00040c92) cell_ai5_widget_list_row_pane_t

0xf385,	// (0x00040156) main_fep_vtchi_ss_pane

0xa4d4,	// (0x0003b2a5) popup_fep_char_pre_window

0xa4dc,	// (0x0003b2ad) popup_fep_ituss_window

0xf16b,	// (0x0003ff3c) popup_fep_vkbss_window

0x480a,	// (0x000355db) grid_vkbss_keypad_pane_ParamLimits

0x480a,	// (0x000355db) grid_vkbss_keypad_pane

0x480a,	// (0x000355db) ituss_keypad_pane

0x2a1e,	// (0x000337ef) aid_vkbss_key_offset_ParamLimits

0x2a1e,	// (0x000337ef) aid_vkbss_key_offset

0xcf93,	// (0x0003dd64) cell_vkbss_key_pane_ParamLimits

0xcf93,	// (0x0003dd64) cell_vkbss_key_pane

0xa548,	// (0x0003b319) bg_cell_vkbss_key_g1_ParamLimits

0xa548,	// (0x0003b319) bg_cell_vkbss_key_g1

0xf178,	// (0x0003ff49) cell_vkbss_key_3p_pane_ParamLimits

0xf178,	// (0x0003ff49) cell_vkbss_key_3p_pane

0xf1ae,	// (0x0003ff7f) cell_vkbss_key_g1_ParamLimits

0xf1ae,	// (0x0003ff7f) cell_vkbss_key_g1

0xf1e4,	// (0x0003ffb5) cell_vkbss_key_t1_ParamLimits

0xf1e4,	// (0x0003ffb5) cell_vkbss_key_t1

0x2a82,	// (0x00033853) cell_ituss_key_pane_ParamLimits

0x2a82,	// (0x00033853) cell_ituss_key_pane

0xa61c,	// (0x0003b3ed) bg_cell_ituss_key_g1_ParamLimits

0xa61c,	// (0x0003b3ed) bg_cell_ituss_key_g1

0xa628,	// (0x0003b3f9) cell_ituss_key_pane_g1_ParamLimits

0xa628,	// (0x0003b3f9) cell_ituss_key_pane_g1

0x2a93,	// (0x00033864) cell_ituss_key_pane_g2_ParamLimits

0x2a93,	// (0x00033864) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x00040c99) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x00040c99) cell_ituss_key_pane_g

0x2b17,	// (0x000338e8) cell_ituss_key_t1_ParamLimits

0x2b17,	// (0x000338e8) cell_ituss_key_t1

0x2b51,	// (0x00033922) cell_ituss_key_t2_ParamLimits

0x2b51,	// (0x00033922) cell_ituss_key_t2

0x2b82,	// (0x00033953) cell_ituss_key_t3_ParamLimits

0x2b82,	// (0x00033953) cell_ituss_key_t3

0x2b51,	// (0x00033922) cell_ituss_key_t4_ParamLimits

0x2b51,	// (0x00033922) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x00040ca6) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x00040ca6) cell_ituss_key_t

0xf240,	// (0x00040011) cell_vkbss_key_3p_pane_g1

0xf248,	// (0x00040019) cell_vkbss_key_3p_pane_g2

0xf250,	// (0x00040021) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x00040cb1) cell_vkbss_key_3p_pane_g

0x44e6,	// (0x000352b7) bg_popup_fep_char_preview_window_cp02

0xa666,	// (0x0003b437) popup_fep_char_pre_window_t1

0xf050,	// (0x0003fe21) main_ai5_sk_pane

0xa0dd,	// (0x0003aeae) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa0e9,	// (0x0003aeba) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7a25,	// (0x000387f6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa0fe,	// (0x0003aecf) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x00040c7d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa10a,	// (0x0003aedb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3561,	// (0x00034332) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf258,	// (0x00040029) main_ai5_sk_pane_g1

0x51fc,	// (0x00035fcd) popup_query_code_window_g1

0xf15c,	// (0x0003ff2d) popup_fep_vkb_icf_pane

0xa51f,	// (0x0003b2f0) popup_fep_vtchi_icf_pane

0x480a,	// (0x000355db) bg_icf_pane

0x480a,	// (0x000355db) list_vkb_icf_pane

0xa67d,	// (0x0003b44e) bg_icf_pane_cp01

0x44e6,	// (0x000352b7) vtchi_icf_list_pane

0xf2ad,	// (0x0004007e) list_vkb_icf_pane_t1_ParamLimits

0xf2ad,	// (0x0004007e) list_vkb_icf_pane_t1

0xa711,	// (0x0003b4e2) vtchi_icf_list_pane_t1_ParamLimits

0xa711,	// (0x0003b4e2) vtchi_icf_list_pane_t1

0xa4dc,	// (0x0003b2ad) popup_fep_ituss_window_ParamLimits

0xa51f,	// (0x0003b2f0) popup_fep_vtchi_icf_pane_ParamLimits

0x480a,	// (0x000355db) ituss_keypad_pane_ParamLimits

0x2a12,	// (0x000337e3) ituss_sks_pane

0x480a,	// (0x000355db) bg_icf_pane_ParamLimits

0xf141,	// (0x0003ff12) icf_edit_indi_pane_ParamLimits

0xf141,	// (0x0003ff12) icf_edit_indi_pane

0x480a,	// (0x000355db) list_vkb_icf_pane_ParamLimits

0xa67d,	// (0x0003b44e) bg_icf_pane_cp01_ParamLimits

0xa4c7,	// (0x0003b298) icf_edit_indi_pane_cp01_ParamLimits

0xa4c7,	// (0x0003b298) icf_edit_indi_pane_cp01

0xa690,	// (0x0003b461) vtchi_query_pane

0x982f,	// (0x0003a600) icf_edit_indi_pane_g1_ParamLimits

0x982f,	// (0x0003a600) icf_edit_indi_pane_g1

0xf2c4,	// (0x00040095) icf_edit_indi_pane_g2_ParamLimits

0xf2c4,	// (0x00040095) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00040cdc) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00040cdc) icf_edit_indi_pane_g

0xf2d8,	// (0x000400a9) icf_edit_indi_pane_t1

0xa72f,	// (0x0003b500) bg_input_focus_pane_cp042

0x3490,	// (0x00034261) vtchi_button_pane

0xa738,	// (0x0003b509) vtchi_query_pane_t1

0xa746,	// (0x0003b517) vtchi_query_pane_t2

0xa754,	// (0x0003b525) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00040ccb) vtchi_query_pane_t

0xf385,	// (0x00040156) bg_button_pane_cp13

0xa762,	// (0x0003b533) vtchi_button_pane_g1

0x2bc5,	// (0x00033996) ituss_sks_pane_g1

0x2bd0,	// (0x000339a1) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00040cd2) ituss_sks_pane_g

0xa76a,	// (0x0003b53b) ituss_sks_pane_t1

0xa778,	// (0x0003b549) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00040cd7) ituss_sks_pane_t

0x6e09,	// (0x00037bda) indicator_nsta_pane_cp_g1

0x6e12,	// (0x00037be3) indicator_nsta_pane_cp_g2

0x6e1a,	// (0x00037beb) indicator_nsta_pane_cp_g3

0x6e22,	// (0x00037bf3) indicator_nsta_pane_cp_g4

0x6e12,	// (0x00037be3) indicator_nsta_pane_cp_g5

0x6e1a,	// (0x00037beb) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x0004084f) indicator_nsta_pane_cp_g

0xed63,	// (0x0003fb34) cell_graphic2_pane_t2_ParamLimits

0xed63,	// (0x0003fb34) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x00040b68) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x00040b68) cell_graphic2_pane_t

0xed98,	// (0x0003fb69) cell_graphic2_control_pane_t1

0xd1a2,	// (0x0003df73) signal_pane_g3_ParamLimits

0xd1a2,	// (0x0003df73) signal_pane_g3

0xd1b6,	// (0x0003df87) signal_pane_g4_ParamLimits

0xd1b6,	// (0x0003df87) signal_pane_g4

0xa496,	// (0x0003b267) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa496,	// (0x0003b267) cell_ai5_widget_list_row_pane_t3

0xa63c,	// (0x0003b40d) cell_ituss_key_pane_t1_ParamLimits

0xa63c,	// (0x0003b40d) cell_ituss_key_pane_t1

0x4e39,	// (0x00035c0a) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e39,	// (0x00035c0a) form_field_data_wide_pane_vc_t2

0x4e4d,	// (0x00035c1e) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e4d,	// (0x00035c1e) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x000405b0) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x000405b0) form_field_data_wide_pane_vc_t

0x6ab3,	// (0x00037884) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6ab3,	// (0x00037884) form_field_slider_wide_pane_vc_t3

0x6b91,	// (0x00037962) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b91,	// (0x00037962) form_field_popup_wide_pane_vc_t2

0x6ba8,	// (0x00037979) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6ba8,	// (0x00037979) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x0004083e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x0004083e) form_field_popup_wide_pane_vc_t

0xcde4,	// (0x0003dbb5) aid_fshwr2_btn_pane_ParamLimits

0xcdf8,	// (0x0003dbc9) aid_fshwr2_syb_pane_ParamLimits

0xce0c,	// (0x0003dbdd) aid_fshwr2_txt_pane_ParamLimits

0x203b,	// (0x00032e0c) fshwr2_bg_pane_ParamLimits

0xce1c,	// (0x0003dbed) fshwr2_func_candi_pane_ParamLimits

0xce3c,	// (0x0003dc0d) fshwr2_hwr_syb_pane_ParamLimits

0xce5e,	// (0x0003dc2f) fshwr2_icf_pane_ParamLimits

0x1987,	// (0x00032758) list_double_graphic_pane_vc_g4_ParamLimits

0x1987,	// (0x00032758) list_double_graphic_pane_vc_g4

0x2ab3,	// (0x00033884) cell_ituss_key_pane_g3_ParamLimits

0x2ab3,	// (0x00033884) cell_ituss_key_pane_g3

0x2bb3,	// (0x00033984) cell_ituss_key_t5_ParamLimits

0x2bb3,	// (0x00033984) cell_ituss_key_t5

0xf16b,	// (0x0003ff3c) popup_fep_vkbss_window_ParamLimits

0x99bd,	// (0x0003a78e) aid_cell_ai5_quarter

0xf2d8,	// (0x000400a9) icf_edit_indi_pane_t1_ParamLimits

0x3005,	// (0x00033dd6) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3005,	// (0x00033dd6) aid_tch_indicator_popup_pane_cp2

0x3018,	// (0x00033de9) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3018,	// (0x00033de9) aid_tch_query_popup_data_pane_cp2

0x51a4,	// (0x00035f75) aid_tch_query_popup_pane_ParamLimits

0x51a4,	// (0x00035f75) aid_tch_query_popup_pane

0x51a4,	// (0x00035f75) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x51a4,	// (0x00035f75) aid_tch_query_popup_data_pane_cp1

0x480a,	// (0x000355db) cell_fshwr2_syb_bg_pane_ParamLimits

0xcf6a,	// (0x0003dd3b) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xcf7d,	// (0x0003dd4e) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf15c,	// (0x0003ff2d) popup_fep_vkb_icf_pane_ParamLimits

0xcd70,	// (0x0003db41) bg_popup_fep_char_preview_window_g10

0x9afa,	// (0x0003a8cb) cell_ai5_widget_pane_g11_ParamLimits

0x9afa,	// (0x0003a8cb) cell_ai5_widget_pane_g11

0x9b06,	// (0x0003a8d7) cell_ai5_widget_pane_g12_ParamLimits

0x9b06,	// (0x0003a8d7) cell_ai5_widget_pane_g12

0x9b12,	// (0x0003a8e3) cell_ai5_widget_pane_g13_ParamLimits

0x9b12,	// (0x0003a8e3) cell_ai5_widget_pane_g13

0x9c41,	// (0x0003aa12) cell_ai5_widget_pane_t11_ParamLimits

0x9c41,	// (0x0003aa12) cell_ai5_widget_pane_t11

0x9c53,	// (0x0003aa24) cell_ai5_widget_pane_t12_ParamLimits

0x9c53,	// (0x0003aa24) cell_ai5_widget_pane_t12

0x2abf,	// (0x00033890) cell_ituss_key_pane_g4_ParamLimits

0x2abf,	// (0x00033890) cell_ituss_key_pane_g4

0x2adb,	// (0x000338ac) cell_ituss_key_pane_g5_ParamLimits

0x2adb,	// (0x000338ac) cell_ituss_key_pane_g5

0x2af7,	// (0x000338c8) cell_ituss_key_pane_g6_ParamLimits

0x2af7,	// (0x000338c8) cell_ituss_key_pane_g6

0x4d34,	// (0x00035b05) bg_icf_pane_g1

0xf261,	// (0x00040032) bg_icf_pane_g2

0xf26b,	// (0x0004003c) bg_icf_pane_g3

0xf273,	// (0x00040044) bg_icf_pane_g4

0xf27d,	// (0x0004004e) bg_icf_pane_g5

0xf287,	// (0x00040058) bg_icf_pane_g6

0xf291,	// (0x00040062) bg_icf_pane_g7

0xf299,	// (0x0004006a) bg_icf_pane_g8

0xf2a3,	// (0x00040074) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x00040cb8) bg_icf_pane_g

0xa535,	// (0x0003b306) popup_hyb_candi_window_ParamLimits

0xa535,	// (0x0003b306) popup_hyb_candi_window

0x4da8,	// (0x00035b79) bg_popup_sub_pane_cp01_ParamLimits

0x4da8,	// (0x00035b79) bg_popup_sub_pane_cp01

0xa7b3,	// (0x0003b584) entry_hyb_candi_pane_ParamLimits

0xa7b3,	// (0x0003b584) entry_hyb_candi_pane

0xa7c2,	// (0x0003b593) grid_hyb_candi_pane_ParamLimits

0xa7c2,	// (0x0003b593) grid_hyb_candi_pane

0xa7d7,	// (0x0003b5a8) grid_hyb_phrase_pane_ParamLimits

0xa7d7,	// (0x0003b5a8) grid_hyb_phrase_pane

0xa7e6,	// (0x0003b5b7) cell_hyb_candi_pane_ParamLimits

0xa7e6,	// (0x0003b5b7) cell_hyb_candi_pane

0xa809,	// (0x0003b5da) cell_hyb_candi_scroll_pane

0x3ed0,	// (0x00034ca1) cell_hyb_candi_pane_g1

0xa812,	// (0x0003b5e3) cell_hyb_candi_pane_t1

0xa820,	// (0x0003b5f1) cell_hyb_phrase_pane

0x3ed0,	// (0x00034ca1) cell_hyb_phrase_pane_g1

0xa829,	// (0x0003b5fa) cell_hyb_phrase_pane_t1

0xa837,	// (0x0003b608) entry_hyb_candi_pane_t1

0x44e6,	// (0x000352b7) input_focus_pane_cp06

0xa845,	// (0x0003b616) cell_hyb_candi_scroll_pane_g1

0xa84d,	// (0x0003b61e) cell_hyb_candi_scroll_pane_g1_aid

0xa855,	// (0x0003b626) cell_hyb_candi_scroll_pane_g2

0xa85d,	// (0x0003b62e) cell_hyb_candi_scroll_pane_g2_aid

0xa865,	// (0x0003b636) cell_hyb_candi_scroll_pane_g3

0xa86d,	// (0x0003b63e) cell_hyb_candi_scroll_pane_g4
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

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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000488f9 };

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
0x9c3e,	// (0x00052537) Screen

0x9c4a,	// (0x00052543) application_window_ParamLimits

0x9c4a,	// (0x00052543) application_window

0x712c,	// (0x0004fa25) screen_g1

0x9c82,	// (0x0005257b) area_bottom_pane_ParamLimits

0x9c82,	// (0x0005257b) area_bottom_pane

0xeeb0,	// (0x000577a9) area_top_pane_ParamLimits

0xeeb0,	// (0x000577a9) area_top_pane

0xef44,	// (0x0005783d) main_pane_ParamLimits

0xef44,	// (0x0005783d) main_pane

0x7136,	// (0x0004fa2f) misc_graphics

0xba89,	// (0x00054382) battery_pane_ParamLimits

0xba89,	// (0x00054382) battery_pane

0x339d,	// (0x0004bc96) bg_status_flat_pane_g8

0x33a5,	// (0x0004bc9e) bg_status_flat_pane_g9

0x27a5,	// (0x0004b09e) context_pane_ParamLimits

0x27a5,	// (0x0004b09e) context_pane

0xbc00,	// (0x000544f9) navi_pane_ParamLimits

0xbc00,	// (0x000544f9) navi_pane

0xc590,	// (0x00054e89) signal_pane_ParamLimits

0xc590,	// (0x00054e89) signal_pane

0x0008,

0xf879,	// (0x00058172) bg_status_flat_pane_g

0xc620,	// (0x00054f19) status_pane_g1_ParamLimits

0xc620,	// (0x00054f19) status_pane_g1

0xc636,	// (0x00054f2f) status_pane_g2_ParamLimits

0xc636,	// (0x00054f2f) status_pane_g2

0x29de,	// (0x0004b2d7) status_pane_g3_ParamLimits

0x29de,	// (0x0004b2d7) status_pane_g3

0x0004,

0xf7a5,	// (0x0005809e) status_pane_g_ParamLimits

0xf7a5,	// (0x0005809e) status_pane_g

0xc642,	// (0x00054f3b) title_pane_ParamLimits

0xc642,	// (0x00054f3b) title_pane

0xc6a9,	// (0x00054fa2) uni_indicator_pane_ParamLimits

0xc6a9,	// (0x00054fa2) uni_indicator_pane

0x260d,	// (0x0004af06) bg_list_pane_ParamLimits

0x260d,	// (0x0004af06) bg_list_pane

0xb2c9,	// (0x00053bc2) find_pane

0x2bd9,	// (0x0004b4d2) listscroll_app_pane_ParamLimits

0x2bd9,	// (0x0004b4d2) listscroll_app_pane

0x2641,	// (0x0004af3a) listscroll_form_pane

0xb2d1,	// (0x00053bca) listscroll_gen_pane_ParamLimits

0xb2d1,	// (0x00053bca) listscroll_gen_pane

0x061d,	// (0x00048f16) listscroll_set_pane

0x3f2f,	// (0x0004c828) main_idle_act_pane

0x2306,	// (0x0004abff) main_idle_trad_pane

0x2306,	// (0x0004abff) main_list_empty_pane

0x2635,	// (0x0004af2e) main_midp_pane

0x265b,	// (0x0004af54) main_pane_g1_ParamLimits

0x265b,	// (0x0004af54) main_pane_g1

0xb2e5,	// (0x00053bde) popup_ai_message_window_ParamLimits

0xb2e5,	// (0x00053bde) popup_ai_message_window

0xb385,	// (0x00053c7e) popup_fep_china_uni_window_ParamLimits

0xb385,	// (0x00053c7e) popup_fep_china_uni_window

0x0739,	// (0x00049032) popup_fep_japan_candidate_window_ParamLimits

0x0739,	// (0x00049032) popup_fep_japan_candidate_window

0x0763,	// (0x0004905c) popup_fep_japan_predictive_window_ParamLimits

0x0763,	// (0x0004905c) popup_fep_japan_predictive_window

0xb3e5,	// (0x00053cde) popup_find_window

0xb402,	// (0x00053cfb) popup_grid_graphic_window_ParamLimits

0xb402,	// (0x00053cfb) popup_grid_graphic_window

0x07d4,	// (0x000490cd) popup_large_graphic_colour_window

0xb4a6,	// (0x00053d9f) popup_menu_window_ParamLimits

0xb4a6,	// (0x00053d9f) popup_menu_window

0xb696,	// (0x00053f8f) popup_note_image_window

0xb656,	// (0x00053f4f) popup_note_wait_window_ParamLimits

0xb656,	// (0x00053f4f) popup_note_wait_window

0xb6ae,	// (0x00053fa7) popup_note_window_ParamLimits

0xb6ae,	// (0x00053fa7) popup_note_window

0xb75c,	// (0x00054055) popup_query_code_window_ParamLimits

0xb75c,	// (0x00054055) popup_query_code_window

0x0a40,	// (0x00049339) popup_query_data_code_window_ParamLimits

0x0a40,	// (0x00049339) popup_query_data_code_window

0xb79c,	// (0x00054095) popup_query_data_window_ParamLimits

0xb79c,	// (0x00054095) popup_query_data_window

0xb830,	// (0x00054129) popup_query_sat_info_window_ParamLimits

0xb830,	// (0x00054129) popup_query_sat_info_window

0xb8d9,	// (0x000541d2) popup_snote_single_graphic_window_ParamLimits

0xb8d9,	// (0x000541d2) popup_snote_single_graphic_window

0xb8d9,	// (0x000541d2) popup_snote_single_text_window_ParamLimits

0xb8d9,	// (0x000541d2) popup_snote_single_text_window

0x0adb,	// (0x000493d4) popup_sub_window_general

0x0c21,	// (0x0004951a) popup_window_general_ParamLimits

0x0c21,	// (0x0004951a) popup_window_general

0x2669,	// (0x0004af62) power_save_pane

0xb129,	// (0x00053a22) control_pane_g1_ParamLimits

0xb129,	// (0x00053a22) control_pane_g1

0xb152,	// (0x00053a4b) control_pane_g2_ParamLimits

0xb152,	// (0x00053a4b) control_pane_g2

0x25d0,	// (0x0004aec9) control_pane_g3_ParamLimits

0x25d0,	// (0x0004aec9) control_pane_g3

0x0007,

0xf78d,	// (0x00058086) control_pane_g_ParamLimits

0xf78d,	// (0x00058086) control_pane_g

0xb1b8,	// (0x00053ab1) control_pane_t1_ParamLimits

0xb1b8,	// (0x00053ab1) control_pane_t1

0xb21e,	// (0x00053b17) control_pane_t2_ParamLimits

0xb21e,	// (0x00053b17) control_pane_t2

0x0002,

0xf79e,	// (0x00058097) control_pane_t_ParamLimits

0xf79e,	// (0x00058097) control_pane_t

0xb082,	// (0x0005397b) navi_navi_volume_pane_cp1

0xb08a,	// (0x00053983) status_small_icon_pane

0x2505,	// (0x0004adfe) status_small_pane_g1_ParamLimits

0x2505,	// (0x0004adfe) status_small_pane_g1

0xb092,	// (0x0005398b) status_small_pane_g2_ParamLimits

0xb092,	// (0x0005398b) status_small_pane_g2

0xb09e,	// (0x00053997) status_small_pane_g3_ParamLimits

0xb09e,	// (0x00053997) status_small_pane_g3

0xb0aa,	// (0x000539a3) status_small_pane_g4_ParamLimits

0xb0aa,	// (0x000539a3) status_small_pane_g4

0xb0b6,	// (0x000539af) status_small_pane_g5_ParamLimits

0xb0b6,	// (0x000539af) status_small_pane_g5

0xb0c4,	// (0x000539bd) status_small_pane_g6_ParamLimits

0xb0c4,	// (0x000539bd) status_small_pane_g6

0x0007,

0xf77c,	// (0x00058075) status_small_pane_g_ParamLimits

0xf77c,	// (0x00058075) status_small_pane_g

0xb0f3,	// (0x000539ec) status_small_pane_t1

0xb115,	// (0x00053a0e) status_small_wait_pane_ParamLimits

0xb115,	// (0x00053a0e) status_small_wait_pane

0xaec5,	// (0x000537be) aid_levels_signal_ParamLimits

0xaec5,	// (0x000537be) aid_levels_signal

0xaedd,	// (0x000537d6) signal_pane_g1_ParamLimits

0xaedd,	// (0x000537d6) signal_pane_g1

0xaef8,	// (0x000537f1) signal_pane_g2_ParamLimits

0xaef8,	// (0x000537f1) signal_pane_g2

0x0003,

0xf70d,	// (0x00058006) signal_pane_g_ParamLimits

0xf70d,	// (0x00058006) signal_pane_g

0xe862,	// (0x0005715b) context_pane_g1

0x9e6e,	// (0x00052767) title_pane_g1

0x9eb1,	// (0x000527aa) title_pane_t1

0x714c,	// (0x0004fa45) title_pane_t2

0x7172,	// (0x0004fa6b) title_pane_t3

0x0002,

0xf557,	// (0x00057e50) title_pane_t

0xc6d1,	// (0x00054fca) aid_levels_battery_ParamLimits

0xc6d1,	// (0x00054fca) aid_levels_battery

0xc6ed,	// (0x00054fe6) battery_pane_g1_ParamLimits

0xc6ed,	// (0x00054fe6) battery_pane_g1

0xc70a,	// (0x00055003) battery_pane_g2_ParamLimits

0xc70a,	// (0x00055003) battery_pane_g2

0x0001,

0xf7b0,	// (0x000580a9) battery_pane_g_ParamLimits

0xf7b0,	// (0x000580a9) battery_pane_g

0xc90b,	// (0x00055204) uni_indicator_pane_g1

0xc921,	// (0x0005521a) uni_indicator_pane_g2

0xc937,	// (0x00055230) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0005821a) uni_indicator_pane_g

0xebaf,	// (0x000574a8) navi_icon_pane_ParamLimits

0xebaf,	// (0x000574a8) navi_icon_pane

0xeaf6,	// (0x000573ef) navi_midp_pane

0xebcb,	// (0x000574c4) navi_navi_pane

0xebd5,	// (0x000574ce) navi_text_pane_ParamLimits

0xebd5,	// (0x000574ce) navi_text_pane

0x712c,	// (0x0004fa25) status_small_wait_pane_g1

0xa3e6,	// (0x00052cdf) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00058215) status_small_wait_pane_g

0xc8aa,	// (0x000551a3) navi_navi_icon_text_pane

0xc8b2,	// (0x000551ab) navi_navi_pane_g1_ParamLimits

0xc8b2,	// (0x000551ab) navi_navi_pane_g1

0xc8c4,	// (0x000551bd) navi_navi_pane_g2_ParamLimits

0xc8c4,	// (0x000551bd) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x000581e3) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x000581e3) navi_navi_pane_g

0x3a26,	// (0x0004c31f) navi_navi_tabs_pane

0xc8d6,	// (0x000551cf) navi_navi_text_pane

0xc8aa,	// (0x000551a3) navi_navi_volume_pane

0xc898,	// (0x00055191) navi_text_pane_t1

0xc88c,	// (0x00055185) navi_icon_pane_g1

0x391d,	// (0x0004c216) navi_navi_text_pane_t1

0xbe46,	// (0x0005473f) navi_navi_volume_pane_g1

0xbe4e,	// (0x00054747) volume_small_pane

0xc7e8,	// (0x000550e1) navi_navi_icon_text_pane_g1

0xc7f0,	// (0x000550e9) navi_navi_icon_text_pane_t1

0xebcb,	// (0x000574c4) navi_tabs_2_long_pane

0xebcb,	// (0x000574c4) navi_tabs_2_pane

0xebcb,	// (0x000574c4) navi_tabs_3_long_pane

0xebcb,	// (0x000574c4) navi_tabs_3_pane

0xebcb,	// (0x000574c4) navi_tabs_4_pane

0xbe26,	// (0x0005471f) tabs_2_active_pane_ParamLimits

0xbe26,	// (0x0005471f) tabs_2_active_pane

0xbe36,	// (0x0005472f) tabs_2_passive_pane_ParamLimits

0xbe36,	// (0x0005472f) tabs_2_passive_pane

0xbdf4,	// (0x000546ed) tabs_3_active_pane_ParamLimits

0xbdf4,	// (0x000546ed) tabs_3_active_pane

0xbe04,	// (0x000546fd) tabs_3_passive_pane_ParamLimits

0xbe04,	// (0x000546fd) tabs_3_passive_pane

0xbe15,	// (0x0005470e) tabs_3_passive_pane_cp_ParamLimits

0xbe15,	// (0x0005470e) tabs_3_passive_pane_cp

0xbdb0,	// (0x000546a9) tabs_4_active_pane_ParamLimits

0xbdb0,	// (0x000546a9) tabs_4_active_pane

0xbdc1,	// (0x000546ba) tabs_4_passive_pane_ParamLimits

0xbdc1,	// (0x000546ba) tabs_4_passive_pane

0xbdd2,	// (0x000546cb) tabs_4_passive_pane_cp_ParamLimits

0xbdd2,	// (0x000546cb) tabs_4_passive_pane_cp

0xbde3,	// (0x000546dc) tabs_4_passive_pane_cp2_ParamLimits

0xbde3,	// (0x000546dc) tabs_4_passive_pane_cp2

0xbd8c,	// (0x00054685) tabs_2_long_active_pane_ParamLimits

0xbd8c,	// (0x00054685) tabs_2_long_active_pane

0xbd9e,	// (0x00054697) tabs_2_long_passive_pane_ParamLimits

0xbd9e,	// (0x00054697) tabs_2_long_passive_pane

0xbd41,	// (0x0005463a) tabs_3_long_active_pane_ParamLimits

0xbd41,	// (0x0005463a) tabs_3_long_active_pane

0xbd5a,	// (0x00054653) tabs_3_long_passive_pane_ParamLimits

0xbd5a,	// (0x00054653) tabs_3_long_passive_pane

0xbd73,	// (0x0005466c) tabs_3_long_passive_pane_cp_ParamLimits

0xbd73,	// (0x0005466c) tabs_3_long_passive_pane_cp

0x0d93,	// (0x0004968c) volume_small_pane_g1

0xbcf0,	// (0x000545e9) volume_small_pane_g2

0xbcf9,	// (0x000545f2) volume_small_pane_g3

0xbd02,	// (0x000545fb) volume_small_pane_g4

0xbd0b,	// (0x00054604) volume_small_pane_g5

0xbd14,	// (0x0005460d) volume_small_pane_g6

0xbd1d,	// (0x00054616) volume_small_pane_g7

0xbd26,	// (0x0005461f) volume_small_pane_g8

0xbd2f,	// (0x00054628) volume_small_pane_g9

0xbd38,	// (0x00054631) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x000581af) volume_small_pane_g

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp2_ParamLimits

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp2

0x9f3d,	// (0x00052836) tabs_3_active_pane_g1

0x9f45,	// (0x0005283e) tabs_3_active_pane_t1

0x71c0,	// (0x0004fab9) bg_passive_tab_pane_cp2_ParamLimits

0x71c0,	// (0x0004fab9) bg_passive_tab_pane_cp2

0x9f3d,	// (0x00052836) tabs_3_passive_pane_g1

0x9f45,	// (0x0005283e) tabs_3_passive_pane_t1

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp3_ParamLimits

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp3

0x9f57,	// (0x00052850) tabs_4_active_pane_g1

0x9f5f,	// (0x00052858) tabs_4_active_pane_t1

0x71c0,	// (0x0004fab9) bg_passive_tab_pane_cp3_ParamLimits

0x71c0,	// (0x0004fab9) bg_passive_tab_pane_cp3

0x9f57,	// (0x00052850) tabs_4_1_passive_pane_g1

0x9f5f,	// (0x00052858) tabs_4_1_passive_pane_t1

0x2635,	// (0x0004af2e) list_highlight_pane_cp2

0x3f55,	// (0x0004c84e) list_set_pane_ParamLimits

0x3f55,	// (0x0004c84e) list_set_pane

0xc9ca,	// (0x000552c3) main_pane_set_t1_ParamLimits

0xc9ca,	// (0x000552c3) main_pane_set_t1

0xc9ea,	// (0x000552e3) main_pane_set_t2_ParamLimits

0xc9ea,	// (0x000552e3) main_pane_set_t2

0xc9fe,	// (0x000552f7) main_pane_set_t3_ParamLimits

0xc9fe,	// (0x000552f7) main_pane_set_t3

0xca12,	// (0x0005530b) main_pane_set_t4_ParamLimits

0xca12,	// (0x0005530b) main_pane_set_t4

0x0003,

0xf986,	// (0x0005827f) main_pane_set_t_ParamLimits

0xf986,	// (0x0005827f) main_pane_set_t

0xca26,	// (0x0005531f) setting_code_pane

0x407d,	// (0x0004c976) setting_slider_graphic_pane

0x407d,	// (0x0004c976) setting_slider_pane

0x407d,	// (0x0004c976) setting_text_pane

0x407d,	// (0x0004c976) setting_volume_pane

0xf318,	// (0x00057c11) volume_set_pane

0x7184,	// (0x0004fa7d) bg_set_opt_pane_cp

0xf322,	// (0x00057c1b) setting_slider_pane_t1

0xf33b,	// (0x00057c34) setting_slider_pane_t2

0xf355,	// (0x00057c4e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00057e57) setting_slider_pane_t

0xf36d,	// (0x00057c66) slider_set_pane

0x7136,	// (0x0004fa2f) bg_set_opt_pane_cp2

0x7192,	// (0x0004fa8b) setting_slider_graphic_pane_g1

0xf383,	// (0x00057c7c) setting_slider_graphic_pane_t1

0xf393,	// (0x00057c8c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00057e5e) setting_slider_graphic_pane_t

0xf3a3,	// (0x00057c9c) slider_set_pane_cp

0x7136,	// (0x0004fa2f) input_focus_pane_cp1

0x3f16,	// (0x0004c80f) list_set_text_pane

0x712c,	// (0x0004fa25) setting_text_pane_g1

0x7136,	// (0x0004fa2f) input_focus_pane_cp2

0x712c,	// (0x0004fa25) setting_code_pane_g1

0x719b,	// (0x0004fa94) setting_code_pane_t1

0xe6a6,	// (0x00056f9f) set_text_pane_t1_ParamLimits

0xe6a6,	// (0x00056f9f) set_text_pane_t1

0xa8f2,	// (0x000531eb) set_opt_bg_pane_g1

0xa8fa,	// (0x000531f3) set_opt_bg_pane_g2

0x3eee,	// (0x0004c7e7) set_opt_bg_pane_g3

0xa90a,	// (0x00053203) set_opt_bg_pane_g4

0xa912,	// (0x0005320b) set_opt_bg_pane_g5

0xa91a,	// (0x00053213) set_opt_bg_pane_g6

0x3ef8,	// (0x0004c7f1) set_opt_bg_pane_g7

0x3f02,	// (0x0004c7fb) set_opt_bg_pane_g8

0x3f0c,	// (0x0004c805) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0005826c) set_opt_bg_pane_g

0x3ee1,	// (0x0004c7da) slider_set_pane_g1

0x0f77,	// (0x00049870) slider_set_pane_g2

0x0006,

0xf964,	// (0x0005825d) slider_set_pane_g

0x0eff,	// (0x000497f8) volume_set_pane_g1

0x0f09,	// (0x00049802) volume_set_pane_g2

0x0f13,	// (0x0004980c) volume_set_pane_g3

0x0f1d,	// (0x00049816) volume_set_pane_g4

0x0f27,	// (0x00049820) volume_set_pane_g5

0x0f31,	// (0x0004982a) volume_set_pane_g6

0x0f3b,	// (0x00049834) volume_set_pane_g7

0x0f45,	// (0x0004983e) volume_set_pane_g8

0x0f4f,	// (0x00049848) volume_set_pane_g9

0x0f59,	// (0x00049852) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00058235) volume_set_pane_g

0x9f71,	// (0x0005286a) indicator_pane_ParamLimits

0x9f71,	// (0x0005286a) indicator_pane

0x9f9d,	// (0x00052896) main_idle_pane_g2_ParamLimits

0x9f9d,	// (0x00052896) main_idle_pane_g2

0x9fd5,	// (0x000528ce) main_pane_idle_g1_ParamLimits

0x9fd5,	// (0x000528ce) main_pane_idle_g1

0x71a9,	// (0x0004faa2) popup_clock_digital_analogue_window_ParamLimits

0x71a9,	// (0x0004faa2) popup_clock_digital_analogue_window

0x9fff,	// (0x000528f8) soft_indicator_pane_ParamLimits

0x9fff,	// (0x000528f8) soft_indicator_pane

0xa01b,	// (0x00052914) wallpaper_pane_ParamLimits

0xa01b,	// (0x00052914) wallpaper_pane

0x712c,	// (0x0004fa25) wallpaper_pane_g1

0xa035,	// (0x0005292e) indicator_pane_g1_ParamLimits

0xa035,	// (0x0005292e) indicator_pane_g1

0x4358,	// (0x0004cc51) navi_navi_icon_text_pane_srt_g1

0xa05d,	// (0x00052956) soft_indicator_pane_t1

0xa077,	// (0x00052970) aid_ps_area_pane

0xa088,	// (0x00052981) aid_ps_clock_pane

0xa096,	// (0x0005298f) aid_ps_indicator_pane

0xa0a2,	// (0x0005299b) indicator_ps_pane_ParamLimits

0xa0a2,	// (0x0005299b) indicator_ps_pane

0xa0b1,	// (0x000529aa) power_save_pane_g1_ParamLimits

0xa0b1,	// (0x000529aa) power_save_pane_g1

0xa0bd,	// (0x000529b6) power_save_pane_g2_ParamLimits

0xa0bd,	// (0x000529b6) power_save_pane_g2

0xee90,	// (0x00057789) aid_navinavi_width_pane

0xa077,	// (0x00052970) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00057e63) power_save_pane_g_ParamLimits

0xf56a,	// (0x00057e63) power_save_pane_g

0xa0cb,	// (0x000529c4) power_save_pane_t1_ParamLimits

0xa0cb,	// (0x000529c4) power_save_pane_t1

0xa088,	// (0x00052981) aid_ps_clock_pane_ParamLimits

0xa096,	// (0x0005298f) aid_ps_indicator_pane_ParamLimits

0xa0dd,	// (0x000529d6) power_save_pane_t4_ParamLimits

0xa0dd,	// (0x000529d6) power_save_pane_t4

0x0001,

0xf56f,	// (0x00057e68) power_save_pane_t_ParamLimits

0xf56f,	// (0x00057e68) power_save_pane_t

0xa107,	// (0x00052a00) power_save_t3_ParamLimits

0xa107,	// (0x00052a00) power_save_t3

0xa0f2,	// (0x000529eb) power_save_t2_ParamLimits

0xa0f2,	// (0x000529eb) power_save_t2

0xa11c,	// (0x00052a15) indicator_ps_pane_g1

0xa125,	// (0x00052a1e) ai_gene_pane_ParamLimits

0xa125,	// (0x00052a1e) ai_gene_pane

0xa13c,	// (0x00052a35) ai_links_pane_ParamLimits

0xa13c,	// (0x00052a35) ai_links_pane

0xa154,	// (0x00052a4d) indicator_pane_cp1_ParamLimits

0xa154,	// (0x00052a4d) indicator_pane_cp1

0xa163,	// (0x00052a5c) main_pane_idle_g1_cp_ParamLimits

0xa163,	// (0x00052a5c) main_pane_idle_g1_cp

0xa17b,	// (0x00052a74) popup_ai_links_title_window

0xa184,	// (0x00052a7d) soft_indicator_pane_cp1_ParamLimits

0xa184,	// (0x00052a7d) soft_indicator_pane_cp1

0x3cd5,	// (0x0004c5ce) ai_links_pane_g1

0x3cde,	// (0x0004c5d7) grid_ai_links_pane

0xc902,	// (0x000551fb) ai_gene_pane_1

0x3cc3,	// (0x0004c5bc) ai_gene_pane_2

0x3ccc,	// (0x0004c5c5) list_highlight_pane_cp4

0xc8de,	// (0x000551d7) cell_ai_link_pane_ParamLimits

0xc8de,	// (0x000551d7) cell_ai_link_pane

0x3c92,	// (0x0004c58b) cell_ai_link_pane_g1

0xa3e6,	// (0x00052cdf) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00058210) cell_ai_link_pane_g

0x7136,	// (0x0004fa2f) grid_highlight_cp2

0x7136,	// (0x0004fa2f) bg_popup_sub_pane_cp1

0xa1a6,	// (0x00052a9f) popup_ai_links_title_window_t1

0x3bde,	// (0x0004c4d7) ai_gene_pane_1_g1_ParamLimits

0x3bde,	// (0x0004c4d7) ai_gene_pane_1_g1

0x3bea,	// (0x0004c4e3) ai_gene_pane_1_g2_ParamLimits

0x3bea,	// (0x0004c4e3) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00058206) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00058206) ai_gene_pane_1_g

0x3bf7,	// (0x0004c4f0) ai_gene_pane_1_t1_ParamLimits

0x3bf7,	// (0x0004c4f0) ai_gene_pane_1_t1

0x3c2b,	// (0x0004c524) grid_ai_soft_ind_pane

0x3bc9,	// (0x0004c4c2) ai_gene_pane_2_t1_ParamLimits

0x3bc9,	// (0x0004c4c2) ai_gene_pane_2_t1

0xa1b5,	// (0x00052aae) main_pane_empty_t1_ParamLimits

0xa1b5,	// (0x00052aae) main_pane_empty_t1

0xa1cd,	// (0x00052ac6) main_pane_empty_t2_ParamLimits

0xa1cd,	// (0x00052ac6) main_pane_empty_t2

0xa1e2,	// (0x00052adb) main_pane_empty_t3_ParamLimits

0xa1e2,	// (0x00052adb) main_pane_empty_t3

0xa1f4,	// (0x00052aed) main_pane_empty_t4_ParamLimits

0xa1f4,	// (0x00052aed) main_pane_empty_t4

0xa206,	// (0x00052aff) main_pane_empty_t5_ParamLimits

0xa206,	// (0x00052aff) main_pane_empty_t5

0x0004,

0xf574,	// (0x00057e6d) main_pane_empty_t_ParamLimits

0xf574,	// (0x00057e6d) main_pane_empty_t

0xa943,	// (0x0005323c) bg_popup_window_pane_ParamLimits

0xa943,	// (0x0005323c) bg_popup_window_pane

0x392b,	// (0x0004c224) find_popup_pane_cp2_ParamLimits

0x392b,	// (0x0004c224) find_popup_pane_cp2

0x3937,	// (0x0004c230) heading_pane_ParamLimits

0x3937,	// (0x0004c230) heading_pane

0x7136,	// (0x0004fa2f) bg_popup_sub_pane

0xc80d,	// (0x00055106) bg_popup_window_pane_g1_ParamLimits

0xc80d,	// (0x00055106) bg_popup_window_pane_g1

0xc81c,	// (0x00055115) bg_popup_window_pane_g2_ParamLimits

0xc81c,	// (0x00055115) bg_popup_window_pane_g2

0xc828,	// (0x00055121) bg_popup_window_pane_g3_ParamLimits

0xc828,	// (0x00055121) bg_popup_window_pane_g3

0xc834,	// (0x0005512d) bg_popup_window_pane_g4_ParamLimits

0xc834,	// (0x0005512d) bg_popup_window_pane_g4

0xc843,	// (0x0005513c) bg_popup_window_pane_g5_ParamLimits

0xc843,	// (0x0005513c) bg_popup_window_pane_g5

0xc853,	// (0x0005514c) bg_popup_window_pane_g6_ParamLimits

0xc853,	// (0x0005514c) bg_popup_window_pane_g6

0xc85f,	// (0x00055158) bg_popup_window_pane_g7_ParamLimits

0xc85f,	// (0x00055158) bg_popup_window_pane_g7

0xc86e,	// (0x00055167) bg_popup_window_pane_g8_ParamLimits

0xc86e,	// (0x00055167) bg_popup_window_pane_g8

0xc87d,	// (0x00055176) bg_popup_window_pane_g9_ParamLimits

0xc87d,	// (0x00055176) bg_popup_window_pane_g9

0x3911,	// (0x0004c20a) bg_popup_window_pane_g10_ParamLimits

0x3911,	// (0x0004c20a) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x000581ce) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x000581ce) bg_popup_window_pane_g

0x383a,	// (0x0004c133) bg_popup_heading_pane_ParamLimits

0x383a,	// (0x0004c133) bg_popup_heading_pane

0x103f,	// (0x00049938) tabs_4_passive_pane_cp_srt_ParamLimits

0x103f,	// (0x00049938) tabs_4_passive_pane_cp_srt

0x1051,	// (0x0004994a) tabs_4_passive_pane_srt_ParamLimits

0x384e,	// (0x0004c147) heading_pane_g2

0x1051,	// (0x0004994a) tabs_4_passive_pane_srt

0x2bd9,	// (0x0004b4d2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_passive_tab_pane_cp3_srt

0x3856,	// (0x0004c14f) heading_pane_t1_ParamLimits

0x3856,	// (0x0004c14f) heading_pane_t1

0x386d,	// (0x0004c166) heading_pane_t2_ParamLimits

0x386d,	// (0x0004c166) heading_pane_t2

0x0001,

0xf8d0,	// (0x000581c9) heading_pane_t_ParamLimits

0xf8d0,	// (0x000581c9) heading_pane_t

0x3365,	// (0x0004bc5e) bg_popup_heading_pane_g1

0x3414,	// (0x0004bd0d) bg_popup_heading_pane_g2

0x341e,	// (0x0004bd17) bg_popup_heading_pane_g3

0x3428,	// (0x0004bd21) bg_popup_heading_pane_g4

0x3432,	// (0x0004bd2b) bg_popup_heading_pane_g5

0x343c,	// (0x0004bd35) bg_popup_heading_pane_g6

0x3444,	// (0x0004bd3d) bg_popup_heading_pane_g7

0x344c,	// (0x0004bd45) bg_popup_heading_pane_g8

0x3456,	// (0x0004bd4f) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00058185) bg_popup_heading_pane_g

0x2b65,	// (0x0004b45e) bg_popup_sub_pane_g1

0x2b6d,	// (0x0004b466) bg_popup_sub_pane_g2

0x2b75,	// (0x0004b46e) bg_popup_sub_pane_g3

0x2b7d,	// (0x0004b476) bg_popup_sub_pane_g4

0x2b85,	// (0x0004b47e) bg_popup_sub_pane_g5

0x2b8d,	// (0x0004b486) bg_popup_sub_pane_g6

0x2b95,	// (0x0004b48e) bg_popup_sub_pane_g7

0x2b9d,	// (0x0004b496) bg_popup_sub_pane_g8

0x2ba5,	// (0x0004b49e) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0005815f) bg_popup_sub_pane_g

0x71c0,	// (0x0004fab9) bg_popup_window_pane_cp5_ParamLimits

0x71c0,	// (0x0004fab9) bg_popup_window_pane_cp5

0xa226,	// (0x00052b1f) popup_note_window_g1_ParamLimits

0xa226,	// (0x00052b1f) popup_note_window_g1

0xa232,	// (0x00052b2b) popup_note_window_t1_ParamLimits

0xa232,	// (0x00052b2b) popup_note_window_t1

0xa248,	// (0x00052b41) popup_note_window_t2_ParamLimits

0xa248,	// (0x00052b41) popup_note_window_t2

0xa25e,	// (0x00052b57) popup_note_window_t3_ParamLimits

0xa25e,	// (0x00052b57) popup_note_window_t3

0xa274,	// (0x00052b6d) popup_note_window_t4_ParamLimits

0xa274,	// (0x00052b6d) popup_note_window_t4

0xa29c,	// (0x00052b95) popup_note_window_t5_ParamLimits

0xa29c,	// (0x00052b95) popup_note_window_t5

0x0004,

0xf57f,	// (0x00057e78) popup_note_window_t_ParamLimits

0xf57f,	// (0x00057e78) popup_note_window_t

0xa2e6,	// (0x00052bdf) bg_popup_window_pane_cp6_ParamLimits

0xa2e6,	// (0x00052bdf) bg_popup_window_pane_cp6

0x32e1,	// (0x0004bbda) popup_note_image_window_g1_ParamLimits

0x32e1,	// (0x0004bbda) popup_note_image_window_g1

0x32ed,	// (0x0004bbe6) popup_note_image_window_g2_ParamLimits

0x32ed,	// (0x0004bbe6) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00058153) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00058153) popup_note_image_window_g

0x3306,	// (0x0004bbff) popup_note_image_window_t1_ParamLimits

0x3306,	// (0x0004bbff) popup_note_image_window_t1

0x331f,	// (0x0004bc18) popup_note_image_window_t2_ParamLimits

0x331f,	// (0x0004bc18) popup_note_image_window_t2

0x3338,	// (0x0004bc31) popup_note_image_window_t3_ParamLimits

0x3338,	// (0x0004bc31) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00058158) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00058158) popup_note_image_window_t

0x31a1,	// (0x0004ba9a) bg_popup_window_pane_cp7_ParamLimits

0x31a1,	// (0x0004ba9a) bg_popup_window_pane_cp7

0x31d1,	// (0x0004baca) popup_note_wait_window_g1_ParamLimits

0x31d1,	// (0x0004baca) popup_note_wait_window_g1

0x31dd,	// (0x0004bad6) popup_note_wait_window_g2_ParamLimits

0x31dd,	// (0x0004bad6) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00058141) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00058141) popup_note_wait_window_g

0x31f5,	// (0x0004baee) popup_note_wait_window_t1_ParamLimits

0x31f5,	// (0x0004baee) popup_note_wait_window_t1

0x321c,	// (0x0004bb15) popup_note_wait_window_t2_ParamLimits

0x321c,	// (0x0004bb15) popup_note_wait_window_t2

0x323a,	// (0x0004bb33) popup_note_wait_window_t3_ParamLimits

0x323a,	// (0x0004bb33) popup_note_wait_window_t3

0x324d,	// (0x0004bb46) popup_note_wait_window_t4_ParamLimits

0x324d,	// (0x0004bb46) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00058148) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00058148) popup_note_wait_window_t

0x3272,	// (0x0004bb6b) wait_bar_pane_ParamLimits

0x3272,	// (0x0004bb6b) wait_bar_pane

0x7136,	// (0x0004fa2f) wait_anim_pane

0x7136,	// (0x0004fa2f) wait_border_pane

0x712c,	// (0x0004fa25) wait_anim_pane_g1

0x712c,	// (0x0004fa25) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00058001) wait_anim_pane_g

0x3145,	// (0x0004ba3e) wait_border_pane_g1

0x3150,	// (0x0004ba49) wait_border_pane_g2

0x3159,	// (0x0004ba52) wait_border_pane_g3

0x0002,

0xf841,	// (0x0005813a) wait_border_pane_g

0x2faf,	// (0x0004b8a8) bg_popup_window_pane_cp16_ParamLimits

0x2faf,	// (0x0004b8a8) bg_popup_window_pane_cp16

0x30af,	// (0x0004b9a8) indicator_popup_pane_cp4_ParamLimits

0x30af,	// (0x0004b9a8) indicator_popup_pane_cp4

0x30c3,	// (0x0004b9bc) popup_query_data_window_t1_ParamLimits

0x30c3,	// (0x0004b9bc) popup_query_data_window_t1

0x30d5,	// (0x0004b9ce) popup_query_data_window_t2_ParamLimits

0x30d5,	// (0x0004b9ce) popup_query_data_window_t2

0x30ee,	// (0x0004b9e7) popup_query_data_window_t3_ParamLimits

0x30ee,	// (0x0004b9e7) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00058133) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00058133) popup_query_data_window_t

0x3108,	// (0x0004ba01) query_popup_data_pane_ParamLimits

0x3108,	// (0x0004ba01) query_popup_data_pane

0x311c,	// (0x0004ba15) query_popup_data_pane_cp1_ParamLimits

0x311c,	// (0x0004ba15) query_popup_data_pane_cp1

0x2faf,	// (0x0004b8a8) bg_popup_window_pane_cp10_ParamLimits

0x2faf,	// (0x0004b8a8) bg_popup_window_pane_cp10

0x2fe1,	// (0x0004b8da) indicator_popup_pane_ParamLimits

0x2fe1,	// (0x0004b8da) indicator_popup_pane

0x3003,	// (0x0004b8fc) popup_query_code_window_t1_ParamLimits

0x3003,	// (0x0004b8fc) popup_query_code_window_t1

0x301d,	// (0x0004b916) popup_query_code_window_t2_ParamLimits

0x301d,	// (0x0004b916) popup_query_code_window_t2

0x3066,	// (0x0004b95f) popup_query_code_window_t3_ParamLimits

0x3066,	// (0x0004b95f) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0005812c) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0005812c) popup_query_code_window_t

0x3095,	// (0x0004b98e) query_popup_pane_ParamLimits

0x3095,	// (0x0004b98e) query_popup_pane

0xa2e6,	// (0x00052bdf) bg_popup_window_pane_cp15_ParamLimits

0xa2e6,	// (0x00052bdf) bg_popup_window_pane_cp15

0xa306,	// (0x00052bff) indicator_popup_pane_cp1_ParamLimits

0xa306,	// (0x00052bff) indicator_popup_pane_cp1

0xa319,	// (0x00052c12) indicator_popup_pane_cp2_ParamLimits

0xa319,	// (0x00052c12) indicator_popup_pane_cp2

0xa334,	// (0x00052c2d) popup_query_data_code_window_g1_ParamLimits

0xa334,	// (0x00052c2d) popup_query_data_code_window_g1

0xa347,	// (0x00052c40) popup_query_data_code_window_t1_ParamLimits

0xa347,	// (0x00052c40) popup_query_data_code_window_t1

0xa359,	// (0x00052c52) popup_query_data_code_window_t2_ParamLimits

0xa359,	// (0x00052c52) popup_query_data_code_window_t2

0xa36b,	// (0x00052c64) popup_query_data_code_window_t3_ParamLimits

0xa36b,	// (0x00052c64) popup_query_data_code_window_t3

0xa381,	// (0x00052c7a) popup_query_data_code_window_t4_ParamLimits

0xa381,	// (0x00052c7a) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00057e83) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00057e83) popup_query_data_code_window_t

0xeb6b,	// (0x00057464) list_single_midp_graphic_pane_g3

0xa39b,	// (0x00052c94) query_popup_data_pane_cp2_ParamLimits

0xa3ae,	// (0x00052ca7) query_popup_pane_cp2_ParamLimits

0xa3ae,	// (0x00052ca7) query_popup_pane_cp2

0x7136,	// (0x0004fa2f) bg_popup_window_pane_cp11

0x2f9b,	// (0x0004b894) heading_pane_cp5

0xa4a1,	// (0x00052d9a) listscroll_popup_info_pane

0x7136,	// (0x0004fa2f) input_focus_pane_cp3

0xa3c9,	// (0x00052cc2) query_popup_pane_t1

0xa3d7,	// (0x00052cd0) list_popup_info_pane_ParamLimits

0xa3d7,	// (0x00052cd0) list_popup_info_pane

0xa3e6,	// (0x00052cdf) listscroll_popup_info_pane_g1

0xa3ee,	// (0x00052ce7) scroll_pane_cp7

0xa3f8,	// (0x00052cf1) popup_info_list_pane_t1_ParamLimits

0xa3f8,	// (0x00052cf1) popup_info_list_pane_t1

0xa412,	// (0x00052d0b) popup_info_list_pane_t2_ParamLimits

0xa412,	// (0x00052d0b) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00057e8c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00057e8c) popup_info_list_pane_t

0x7136,	// (0x0004fa2f) bg_popup_window_pane_cp12

0x4372,	// (0x0004cc6b) find_popup_pane

0x7184,	// (0x0004fa7d) bg_popup_window_pane_cp3

0xa42c,	// (0x00052d25) heading_pane_cp3

0xa438,	// (0x00052d31) listscroll_popup_graphic_pane

0x7136,	// (0x0004fa2f) bg_popup_window_pane_cp4

0xa497,	// (0x00052d90) heading_pane_cp4

0xa4a1,	// (0x00052d9a) listscroll_popup_colour_pane

0xa4a9,	// (0x00052da2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa4a9,	// (0x00052da2) cell_large_graphic_colour_none_popup_pane

0xa4bd,	// (0x00052db6) grid_large_graphic_colour_popup_pane_ParamLimits

0xa4bd,	// (0x00052db6) grid_large_graphic_colour_popup_pane

0xa4e1,	// (0x00052dda) listscroll_popup_colour_pane_g1_ParamLimits

0xa4e1,	// (0x00052dda) listscroll_popup_colour_pane_g1

0xa4f8,	// (0x00052df1) listscroll_popup_colour_pane_g2_ParamLimits

0xa4f8,	// (0x00052df1) listscroll_popup_colour_pane_g2

0xa50f,	// (0x00052e08) listscroll_popup_colour_pane_g3_ParamLimits

0xa50f,	// (0x00052e08) listscroll_popup_colour_pane_g3

0xa51f,	// (0x00052e18) listscroll_popup_colour_pane_g4_ParamLimits

0xa51f,	// (0x00052e18) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00057e91) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00057e91) listscroll_popup_colour_pane_g

0xa52f,	// (0x00052e28) scroll_pane_cp6_ParamLimits

0xa52f,	// (0x00052e28) scroll_pane_cp6

0xa541,	// (0x00052e3a) cell_large_graphic_colour_popup_pane_ParamLimits

0xa541,	// (0x00052e3a) cell_large_graphic_colour_popup_pane

0xa562,	// (0x00052e5b) cell_large_graphic_colour_none_popup_pane_t1

0x7136,	// (0x0004fa2f) grid_highlight_pane_cp5

0xa571,	// (0x00052e6a) cell_large_graphic_colour_popup_pane_g1

0xa579,	// (0x00052e72) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00057e9a) cell_large_graphic_colour_popup_pane_g

0xa581,	// (0x00052e7a) cell_large_graphic_colour_popup_pane_g2_copy1

0xa58a,	// (0x00052e83) grid_highlight_pane_cp4

0xa592,	// (0x00052e8b) bg_popup_window_pane_cp8_ParamLimits

0xa592,	// (0x00052e8b) bg_popup_window_pane_cp8

0xa5ad,	// (0x00052ea6) popup_snote_single_text_window_g1_ParamLimits

0xa5ad,	// (0x00052ea6) popup_snote_single_text_window_g1

0xa5bf,	// (0x00052eb8) popup_snote_single_text_window_t1_ParamLimits

0xa5bf,	// (0x00052eb8) popup_snote_single_text_window_t1

0xa5d2,	// (0x00052ecb) popup_snote_single_text_window_t2_ParamLimits

0xa5d2,	// (0x00052ecb) popup_snote_single_text_window_t2

0xa5e5,	// (0x00052ede) popup_snote_single_text_window_t3_ParamLimits

0xa5e5,	// (0x00052ede) popup_snote_single_text_window_t3

0xa61e,	// (0x00052f17) popup_snote_single_text_window_t4_ParamLimits

0xa61e,	// (0x00052f17) popup_snote_single_text_window_t4

0xa652,	// (0x00052f4b) popup_snote_single_text_window_t5_ParamLimits

0xa652,	// (0x00052f4b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00057e9f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00057e9f) popup_snote_single_text_window_t

0xa681,	// (0x00052f7a) bg_popup_window_pane_cp9_ParamLimits

0xa681,	// (0x00052f7a) bg_popup_window_pane_cp9

0xa5ad,	// (0x00052ea6) popup_snote_single_graphic_window_g1_ParamLimits

0xa5ad,	// (0x00052ea6) popup_snote_single_graphic_window_g1

0xa68f,	// (0x00052f88) popup_snote_single_graphic_window_g2_ParamLimits

0xa68f,	// (0x00052f88) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00057eaa) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00057eaa) popup_snote_single_graphic_window_g

0xa69b,	// (0x00052f94) popup_snote_single_graphic_window_t1_ParamLimits

0xa69b,	// (0x00052f94) popup_snote_single_graphic_window_t1

0xa6ae,	// (0x00052fa7) popup_snote_single_graphic_window_t2_ParamLimits

0xa6ae,	// (0x00052fa7) popup_snote_single_graphic_window_t2

0xa6c1,	// (0x00052fba) popup_snote_single_graphic_window_t3_ParamLimits

0xa6c1,	// (0x00052fba) popup_snote_single_graphic_window_t3

0xa6fa,	// (0x00052ff3) popup_snote_single_graphic_window_t4_ParamLimits

0xa6fa,	// (0x00052ff3) popup_snote_single_graphic_window_t4

0xa72e,	// (0x00053027) popup_snote_single_graphic_window_t5_ParamLimits

0xa72e,	// (0x00053027) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00057eaf) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00057eaf) popup_snote_single_graphic_window_t

0x42b0,	// (0x0004cba9) grid_graphic_popup_pane_ParamLimits

0x42b0,	// (0x0004cba9) grid_graphic_popup_pane

0x42de,	// (0x0004cbd7) listscroll_popup_graphic_pane_g1_ParamLimits

0x42de,	// (0x0004cbd7) listscroll_popup_graphic_pane_g1

0xcb4b,	// (0x00055444) listscroll_popup_graphic_pane_g2_ParamLimits

0xcb4b,	// (0x00055444) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x000582a9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x000582a9) listscroll_popup_graphic_pane_g

0x4306,	// (0x0004cbff) scroll_pane_cp5

0xcaea,	// (0x000553e3) cell_graphic_popup_pane_ParamLimits

0xcaea,	// (0x000553e3) cell_graphic_popup_pane

0x4226,	// (0x0004cb1f) cell_graphic_popup_pane_g1

0x422e,	// (0x0004cb27) cell_graphic_popup_pane_g2

0xa581,	// (0x00052e7a) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x000582a2) cell_graphic_popup_pane_g

0x4237,	// (0x0004cb30) cell_graphic_popup_pane_t2

0xa58a,	// (0x00052e83) grid_highlight_pane_cp3

0xa76f,	// (0x00053068) list_gen_pane_ParamLimits

0xa76f,	// (0x00053068) list_gen_pane

0xa7a1,	// (0x0005309a) scroll_pane

0xcaa1,	// (0x0005539a) bg_list_pane_g1_ParamLimits

0xcaa1,	// (0x0005539a) bg_list_pane_g1

0x419b,	// (0x0004ca94) bg_list_pane_g2_ParamLimits

0x419b,	// (0x0004ca94) bg_list_pane_g2

0x41b0,	// (0x0004caa9) bg_list_pane_g3_ParamLimits

0x41b0,	// (0x0004caa9) bg_list_pane_g3

0x41c4,	// (0x0004cabd) bg_list_pane_g4_ParamLimits

0x41c4,	// (0x0004cabd) bg_list_pane_g4

0xcabe,	// (0x000553b7) bg_list_pane_g5_ParamLimits

0xcabe,	// (0x000553b7) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00058297) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00058297) bg_list_pane_g

0xbe57,	// (0x00054750) list_double2_graphic_large_graphic_pane_ParamLimits

0xbe57,	// (0x00054750) list_double2_graphic_large_graphic_pane

0xbe57,	// (0x00054750) list_double2_graphic_pane_ParamLimits

0xbe57,	// (0x00054750) list_double2_graphic_pane

0xbe57,	// (0x00054750) list_double2_large_graphic_pane_ParamLimits

0xbe57,	// (0x00054750) list_double2_large_graphic_pane

0xbe57,	// (0x00054750) list_double2_pane_ParamLimits

0xbe57,	// (0x00054750) list_double2_pane

0xbe57,	// (0x00054750) list_double_graphic_heading_pane_ParamLimits

0xbe57,	// (0x00054750) list_double_graphic_heading_pane

0xbe57,	// (0x00054750) list_double_graphic_pane_ParamLimits

0xbe57,	// (0x00054750) list_double_graphic_pane

0xbe57,	// (0x00054750) list_double_heading_pane_ParamLimits

0xbe57,	// (0x00054750) list_double_heading_pane

0xbe57,	// (0x00054750) list_double_large_graphic_pane_ParamLimits

0xbe57,	// (0x00054750) list_double_large_graphic_pane

0xbe57,	// (0x00054750) list_double_number_pane_ParamLimits

0xbe57,	// (0x00054750) list_double_number_pane

0xbe57,	// (0x00054750) list_double_pane_ParamLimits

0xbe57,	// (0x00054750) list_double_pane

0xbe57,	// (0x00054750) list_double_time_pane_ParamLimits

0xbe57,	// (0x00054750) list_double_time_pane

0xbe57,	// (0x00054750) list_setting_number_pane_ParamLimits

0xbe57,	// (0x00054750) list_setting_number_pane

0xbe57,	// (0x00054750) list_setting_pane_ParamLimits

0xbe57,	// (0x00054750) list_setting_pane

0xca64,	// (0x0005535d) list_single_2graphic_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_2graphic_pane

0xca64,	// (0x0005535d) list_single_graphic_heading_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_graphic_heading_pane

0xca64,	// (0x0005535d) list_single_graphic_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_graphic_pane

0xca64,	// (0x0005535d) list_single_heading_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_heading_pane

0xca64,	// (0x0005535d) list_single_large_graphic_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_large_graphic_pane

0xca64,	// (0x0005535d) list_single_number_heading_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_number_heading_pane

0xca64,	// (0x0005535d) list_single_number_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_number_pane

0xca64,	// (0x0005535d) list_single_pane_ParamLimits

0xca64,	// (0x0005535d) list_single_pane

0x7136,	// (0x0004fa2f) list_highlight_pane_cp1

0x2277,	// (0x0004ab70) list_single_pane_g1_ParamLimits

0x2277,	// (0x0004ab70) list_single_pane_g1

0x0c6a,	// (0x00049563) list_single_pane_g2_ParamLimits

0x0c6a,	// (0x00049563) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_single_pane_g

0xed37,	// (0x00057630) list_single_pane_t1_ParamLimits

0xed37,	// (0x00057630) list_single_pane_t1

0x2277,	// (0x0004ab70) list_single_number_pane_g1_ParamLimits

0x2277,	// (0x0004ab70) list_single_number_pane_g1

0x0c6a,	// (0x00049563) list_single_number_pane_g2_ParamLimits

0x0c6a,	// (0x00049563) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_single_number_pane_g

0xec7a,	// (0x00057573) list_single_number_pane_t1_ParamLimits

0xec7a,	// (0x00057573) list_single_number_pane_t1

0xf053,	// (0x0005794c) list_single_number_pane_t2_ParamLimits

0xf053,	// (0x0005794c) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00058258) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00058258) list_single_number_pane_t

0x943d,	// (0x00051d36) list_single_graphic_pane_g1_ParamLimits

0x943d,	// (0x00051d36) list_single_graphic_pane_g1

0x2277,	// (0x0004ab70) list_single_graphic_pane_g2_ParamLimits

0x2277,	// (0x0004ab70) list_single_graphic_pane_g2

0x0c6a,	// (0x00049563) list_single_graphic_pane_g3_ParamLimits

0x0c6a,	// (0x00049563) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00057eba) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00057eba) list_single_graphic_pane_g

0x9449,	// (0x00051d42) list_single_graphic_pane_t1_ParamLimits

0x9449,	// (0x00051d42) list_single_graphic_pane_t1

0x945f,	// (0x00051d58) list_single_heading_pane_g1_ParamLimits

0x945f,	// (0x00051d58) list_single_heading_pane_g1

0x0c6a,	// (0x00049563) list_single_heading_pane_g2_ParamLimits

0x0c6a,	// (0x00049563) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00057ec1) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00057ec1) list_single_heading_pane_g

0x9472,	// (0x00051d6b) list_single_heading_pane_t1_ParamLimits

0x9472,	// (0x00051d6b) list_single_heading_pane_t1

0xa7d5,	// (0x000530ce) list_single_heading_pane_t2_ParamLimits

0xa7d5,	// (0x000530ce) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00057ec6) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00057ec6) list_single_heading_pane_t

0x2277,	// (0x0004ab70) list_single_number_heading_pane_g1_ParamLimits

0x2277,	// (0x0004ab70) list_single_number_heading_pane_g1

0x0c6a,	// (0x00049563) list_single_number_heading_pane_g2_ParamLimits

0x0c6a,	// (0x00049563) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_single_number_heading_pane_g

0x9488,	// (0x00051d81) list_single_number_heading_pane_t1_ParamLimits

0x9488,	// (0x00051d81) list_single_number_heading_pane_t1

0xe6bf,	// (0x00056fb8) list_single_number_heading_pane_t2_ParamLimits

0xe6bf,	// (0x00056fb8) list_single_number_heading_pane_t2

0xe6d1,	// (0x00056fca) list_single_number_heading_pane_t3_ParamLimits

0xe6d1,	// (0x00056fca) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00057ed0) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00057ed0) list_single_number_heading_pane_t

0x949e,	// (0x00051d97) list_single_graphic_heading_pane_g1_ParamLimits

0x949e,	// (0x00051d97) list_single_graphic_heading_pane_g1

0xa7e7,	// (0x000530e0) list_single_graphic_heading_pane_g4_ParamLimits

0xa7e7,	// (0x000530e0) list_single_graphic_heading_pane_g4

0x0c6a,	// (0x00049563) list_single_graphic_heading_pane_g5_ParamLimits

0x0c6a,	// (0x00049563) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00057ed7) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00057ed7) list_single_graphic_heading_pane_g

0x9488,	// (0x00051d81) list_single_graphic_heading_pane_t1_ParamLimits

0x9488,	// (0x00051d81) list_single_graphic_heading_pane_t1

0x94b6,	// (0x00051daf) list_single_graphic_heading_pane_t2_ParamLimits

0x94b6,	// (0x00051daf) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00057ede) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00057ede) list_single_graphic_heading_pane_t

0x10fc,	// (0x000499f5) list_single_large_graphic_pane_g1_ParamLimits

0x10fc,	// (0x000499f5) list_single_large_graphic_pane_g1

0x2277,	// (0x0004ab70) list_single_large_graphic_pane_g2_ParamLimits

0x2277,	// (0x0004ab70) list_single_large_graphic_pane_g2

0x0c6a,	// (0x00049563) list_single_large_graphic_pane_g3_ParamLimits

0x0c6a,	// (0x00049563) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00057ee3) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00057ee3) list_single_large_graphic_pane_g

0x3150,	// (0x0004ba49) wait_border_pane_g2_copy1

0xa7f8,	// (0x000530f1) list_single_large_graphic_pane_g4_cp2

0xe6e3,	// (0x00056fdc) list_single_large_graphic_pane_t1_ParamLimits

0xe6e3,	// (0x00056fdc) list_single_large_graphic_pane_t1

0x5789,	// (0x0004e082) list_double_pane_g1_ParamLimits

0x5789,	// (0x0004e082) list_double_pane_g1

0x94ce,	// (0x00051dc7) list_double_pane_g2_ParamLimits

0x94ce,	// (0x00051dc7) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00057eea) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00057eea) list_double_pane_g

0x94da,	// (0x00051dd3) list_double_pane_t1_ParamLimits

0x94da,	// (0x00051dd3) list_double_pane_t1

0x94f0,	// (0x00051de9) list_double_pane_t2_ParamLimits

0x94f0,	// (0x00051de9) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00057eef) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00057eef) list_double_pane_t

0x9502,	// (0x00051dfb) list_double2_pane_g1_ParamLimits

0x9502,	// (0x00051dfb) list_double2_pane_g1

0x9513,	// (0x00051e0c) list_double2_pane_g2_ParamLimits

0x9513,	// (0x00051e0c) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00057ef4) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00057ef4) list_double2_pane_g

0x951f,	// (0x00051e18) list_double2_pane_t1_ParamLimits

0x951f,	// (0x00051e18) list_double2_pane_t1

0x9535,	// (0x00051e2e) list_double2_pane_t2_ParamLimits

0x9535,	// (0x00051e2e) list_double2_pane_t2

0x0001,

0xf600,	// (0x00057ef9) list_double2_pane_t_ParamLimits

0xf600,	// (0x00057ef9) list_double2_pane_t

0x5789,	// (0x0004e082) list_double_number_pane_g1_ParamLimits

0x5789,	// (0x0004e082) list_double_number_pane_g1

0x94ce,	// (0x00051dc7) list_double_number_pane_g2_ParamLimits

0x94ce,	// (0x00051dc7) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00057eea) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00057eea) list_double_number_pane_g

0x9547,	// (0x00051e40) list_double_number_pane_t1_ParamLimits

0x9547,	// (0x00051e40) list_double_number_pane_t1

0x9559,	// (0x00051e52) list_double_number_pane_t2_ParamLimits

0x9559,	// (0x00051e52) list_double_number_pane_t2

0x956f,	// (0x00051e68) list_double_number_pane_t3_ParamLimits

0x956f,	// (0x00051e68) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00057efe) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00057efe) list_double_number_pane_t

0x9581,	// (0x00051e7a) list_double_graphic_pane_g1_ParamLimits

0x9581,	// (0x00051e7a) list_double_graphic_pane_g1

0x958d,	// (0x00051e86) list_double_graphic_pane_g2_ParamLimits

0x958d,	// (0x00051e86) list_double_graphic_pane_g2

0x959c,	// (0x00051e95) list_double_graphic_pane_g3_ParamLimits

0x959c,	// (0x00051e95) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00057f05) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00057f05) list_double_graphic_pane_g

0x95b4,	// (0x00051ead) list_double_graphic_pane_t1_ParamLimits

0x95b4,	// (0x00051ead) list_double_graphic_pane_t1

0x95ca,	// (0x00051ec3) list_double_graphic_pane_t2_ParamLimits

0x95ca,	// (0x00051ec3) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00057f0e) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00057f0e) list_double_graphic_pane_t

0x95dc,	// (0x00051ed5) list_double2_graphic_pane_g1_ParamLimits

0x95dc,	// (0x00051ed5) list_double2_graphic_pane_g1

0xa800,	// (0x000530f9) list_double2_graphic_pane_g2_ParamLimits

0xa800,	// (0x000530f9) list_double2_graphic_pane_g2

0xa80c,	// (0x00053105) list_double2_graphic_pane_g3_ParamLimits

0xa80c,	// (0x00053105) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00057f13) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00057f13) list_double2_graphic_pane_g

0x95e8,	// (0x00051ee1) list_double2_graphic_pane_t1_ParamLimits

0x95e8,	// (0x00051ee1) list_double2_graphic_pane_t1

0x95fe,	// (0x00051ef7) list_double2_graphic_pane_t2_ParamLimits

0x95fe,	// (0x00051ef7) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00057f1a) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00057f1a) list_double2_graphic_pane_t

0x9610,	// (0x00051f09) list_double_large_graphic_pane_g1_ParamLimits

0x9610,	// (0x00051f09) list_double_large_graphic_pane_g1

0x962f,	// (0x00051f28) list_double_large_graphic_pane_g2_ParamLimits

0x962f,	// (0x00051f28) list_double_large_graphic_pane_g2

0x94ce,	// (0x00051dc7) list_double_large_graphic_pane_g3_ParamLimits

0x94ce,	// (0x00051dc7) list_double_large_graphic_pane_g3

0x9645,	// (0x00051f3e) list_double_large_graphic_pane_g4_ParamLimits

0x9645,	// (0x00051f3e) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00057f1f) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00057f1f) list_double_large_graphic_pane_g

0x9658,	// (0x00051f51) list_double_large_graphic_pane_t1_ParamLimits

0x9658,	// (0x00051f51) list_double_large_graphic_pane_t1

0x9671,	// (0x00051f6a) list_double_large_graphic_pane_t2_ParamLimits

0x9671,	// (0x00051f6a) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00057f2a) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00057f2a) list_double_large_graphic_pane_t

0xa818,	// (0x00053111) list_double2_large_graphic_pane_g1_ParamLimits

0xa818,	// (0x00053111) list_double2_large_graphic_pane_g1

0xa824,	// (0x0005311d) list_double2_large_graphic_pane_g2_ParamLimits

0xa824,	// (0x0005311d) list_double2_large_graphic_pane_g2

0xa80c,	// (0x00053105) list_double2_large_graphic_pane_g3_ParamLimits

0xa80c,	// (0x00053105) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00057f2f) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00057f2f) list_double2_large_graphic_pane_g

0x9683,	// (0x00051f7c) list_double2_large_graphic_pane_t1_ParamLimits

0x9683,	// (0x00051f7c) list_double2_large_graphic_pane_t1

0x9699,	// (0x00051f92) list_double2_large_graphic_pane_t2_ParamLimits

0x9699,	// (0x00051f92) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00057f36) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00057f36) list_double2_large_graphic_pane_t

0x96ab,	// (0x00051fa4) list_double_heading_pane_g1_ParamLimits

0x96ab,	// (0x00051fa4) list_double_heading_pane_g1

0xa835,	// (0x0005312e) list_double_heading_pane_g2_ParamLimits

0xa835,	// (0x0005312e) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00057f3b) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00057f3b) list_double_heading_pane_g

0x96bc,	// (0x00051fb5) list_double_heading_pane_t1_ParamLimits

0x96bc,	// (0x00051fb5) list_double_heading_pane_t1

0x96d2,	// (0x00051fcb) list_double_heading_pane_t2_ParamLimits

0x96d2,	// (0x00051fcb) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00057f40) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00057f40) list_double_heading_pane_t

0x96e4,	// (0x00051fdd) list_double_graphic_heading_pane_g1_ParamLimits

0x96e4,	// (0x00051fdd) list_double_graphic_heading_pane_g1

0x96ab,	// (0x00051fa4) list_double_graphic_heading_pane_g2_ParamLimits

0x96ab,	// (0x00051fa4) list_double_graphic_heading_pane_g2

0xa835,	// (0x0005312e) list_double_graphic_heading_pane_g3_ParamLimits

0xa835,	// (0x0005312e) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00057f45) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00057f45) list_double_graphic_heading_pane_g

0x96f0,	// (0x00051fe9) list_double_graphic_heading_pane_t1_ParamLimits

0x96f0,	// (0x00051fe9) list_double_graphic_heading_pane_t1

0x9706,	// (0x00051fff) list_double_graphic_heading_pane_t2_ParamLimits

0x9706,	// (0x00051fff) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00057f4c) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00057f4c) list_double_graphic_heading_pane_t

0x9718,	// (0x00052011) list_double_time_pane_g1_ParamLimits

0x9718,	// (0x00052011) list_double_time_pane_g1

0x9729,	// (0x00052022) list_double_time_pane_g2_ParamLimits

0x9729,	// (0x00052022) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00057f51) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00057f51) list_double_time_pane_g

0x9735,	// (0x0005202e) list_double_time_pane_t1_ParamLimits

0x9735,	// (0x0005202e) list_double_time_pane_t1

0x974b,	// (0x00052044) list_double_time_pane_t2_ParamLimits

0x974b,	// (0x00052044) list_double_time_pane_t2

0x975d,	// (0x00052056) list_double_time_pane_t3_ParamLimits

0x975d,	// (0x00052056) list_double_time_pane_t3

0x976f,	// (0x00052068) list_double_time_pane_t4_ParamLimits

0x976f,	// (0x00052068) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00057f56) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00057f56) list_double_time_pane_t

0x9781,	// (0x0005207a) list_setting_pane_g1_ParamLimits

0x9781,	// (0x0005207a) list_setting_pane_g1

0x978d,	// (0x00052086) list_setting_pane_g2_ParamLimits

0x978d,	// (0x00052086) list_setting_pane_g2

0x0001,

0xf666,	// (0x00057f5f) list_setting_pane_g_ParamLimits

0xf666,	// (0x00057f5f) list_setting_pane_g

0x9799,	// (0x00052092) list_setting_pane_t1_ParamLimits

0x9799,	// (0x00052092) list_setting_pane_t1

0x97b3,	// (0x000520ac) list_setting_pane_t2_ParamLimits

0x97b3,	// (0x000520ac) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00057f64) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00057f64) list_setting_pane_t

0x97f2,	// (0x000520eb) set_value_pane_cp_ParamLimits

0x97f2,	// (0x000520eb) set_value_pane_cp

0x9800,	// (0x000520f9) list_setting_number_pane_g1_ParamLimits

0x9800,	// (0x000520f9) list_setting_number_pane_g1

0x980c,	// (0x00052105) list_setting_number_pane_g2_ParamLimits

0x980c,	// (0x00052105) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00057f6b) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00057f6b) list_setting_number_pane_g

0x9818,	// (0x00052111) list_setting_number_pane_t1_ParamLimits

0x9818,	// (0x00052111) list_setting_number_pane_t1

0x9831,	// (0x0005212a) list_setting_number_pane_t2_ParamLimits

0x9831,	// (0x0005212a) list_setting_number_pane_t2

0x984b,	// (0x00052144) list_setting_number_pane_t3_ParamLimits

0x984b,	// (0x00052144) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00057f70) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00057f70) list_setting_number_pane_t

0x97f2,	// (0x000520eb) set_value_pane_ParamLimits

0x97f2,	// (0x000520eb) set_value_pane

0xa841,	// (0x0005313a) bg_set_opt_pane_ParamLimits

0xa841,	// (0x0005313a) bg_set_opt_pane

0xe6f9,	// (0x00056ff2) set_value_pane_t1

0xa862,	// (0x0005315b) slider_set_pane_cp3

0xa86b,	// (0x00053164) volume_small_pane_cp

0xa874,	// (0x0005316d) list_form_gen_pane

0xa87d,	// (0x00053176) scroll_pane_cp8

0x988e,	// (0x00052187) form_field_data_pane_ParamLimits

0x988e,	// (0x00052187) form_field_data_pane

0x98ab,	// (0x000521a4) form_field_data_wide_pane_ParamLimits

0x98ab,	// (0x000521a4) form_field_data_wide_pane

0x98cf,	// (0x000521c8) form_field_popup_pane_ParamLimits

0x98cf,	// (0x000521c8) form_field_popup_pane

0xe717,	// (0x00057010) form_field_popup_wide_pane_ParamLimits

0xe717,	// (0x00057010) form_field_popup_wide_pane

0xe738,	// (0x00057031) form_field_slider_pane_ParamLimits

0xe738,	// (0x00057031) form_field_slider_pane

0xe74b,	// (0x00057044) form_field_slider_wide_pane_ParamLimits

0xe74b,	// (0x00057044) form_field_slider_wide_pane

0xa88e,	// (0x00053187) data_form_pane

0x98fb,	// (0x000521f4) form_field_data_pane_t1

0xa89a,	// (0x00053193) input_focus_pane

0xe75e,	// (0x00057057) data_form_wide_pane

0xe77b,	// (0x00057074) form_field_data_wide_pane_t1

0xa59f,	// (0x00052e98) input_focus_pane_cp6

0x9915,	// (0x0005220e) form_field_popup_pane_t1

0xa89a,	// (0x00053193) input_focus_pane_cp7

0xa8c8,	// (0x000531c1) list_form_pane

0xe7a5,	// (0x0005709e) form_field_popup_wide_pane_t1

0xa89a,	// (0x00053193) input_focus_pane_cp8

0xa8d4,	// (0x000531cd) list_form_wide_pane

0x9937,	// (0x00052230) form_field_slider_pane_t1_ParamLimits

0x9937,	// (0x00052230) form_field_slider_pane_t1

0x994f,	// (0x00052248) form_field_slider_pane_t2_ParamLimits

0x994f,	// (0x00052248) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00057f80) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00057f80) form_field_slider_pane_t

0x71c0,	// (0x0004fab9) input_focus_pane_cp9_ParamLimits

0x71c0,	// (0x0004fab9) input_focus_pane_cp9

0x9964,	// (0x0005225d) slider_cont_pane_ParamLimits

0x9964,	// (0x0005225d) slider_cont_pane

0xa8e0,	// (0x000531d9) form_field_slider_wide_pane_t1_ParamLimits

0xa8e0,	// (0x000531d9) form_field_slider_wide_pane_t1

0xe7ba,	// (0x000570b3) form_field_slider_wide_pane_t2_ParamLimits

0xe7ba,	// (0x000570b3) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00057f85) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00057f85) form_field_slider_wide_pane_t

0x71c0,	// (0x0004fab9) input_focus_pane_cp10_ParamLimits

0x71c0,	// (0x0004fab9) input_focus_pane_cp10

0x9978,	// (0x00052271) slider_cont_pane_cp1_ParamLimits

0x9978,	// (0x00052271) slider_cont_pane_cp1

0x998c,	// (0x00052285) slider_form_pane_cp

0xa8f2,	// (0x000531eb) input_focus_pane_g1

0xa8fa,	// (0x000531f3) input_focus_pane_g2

0xa902,	// (0x000531fb) input_focus_pane_g3

0xa90a,	// (0x00053203) input_focus_pane_g4

0xa912,	// (0x0005320b) input_focus_pane_g5

0xa91a,	// (0x00053213) input_focus_pane_g6

0xa922,	// (0x0005321b) input_focus_pane_g7

0xa92a,	// (0x00053223) input_focus_pane_g8

0xa932,	// (0x0005322b) input_focus_pane_g9

0x712c,	// (0x0004fa25) input_focus_pane_g10

0x0009,

0xf691,	// (0x00057f8a) input_focus_pane_g

0x3159,	// (0x0004ba52) wait_border_pane_g3_copy1

0x9994,	// (0x0005228d) data_form_pane_t1

0x712c,	// (0x0004fa25) wait_anim_pane_g1_copy1

0x9a7e,	// (0x00052377) data_form_wide_pane_t1

0xe7cc,	// (0x000570c5) list_form_graphic_pane_cp_ParamLimits

0xe7cc,	// (0x000570c5) list_form_graphic_pane_cp

0x40a5,	// (0x0004c99e) slider_form_pane_g1

0x40ae,	// (0x0004c9a7) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00058288) slider_form_pane_g

0x99b0,	// (0x000522a9) list_form_graphic_pane_ParamLimits

0x99b0,	// (0x000522a9) list_form_graphic_pane

0xe7de,	// (0x000570d7) list_form_graphic_pane_g1

0xe7e6,	// (0x000570df) list_form_graphic_pane_t1_ParamLimits

0xe7e6,	// (0x000570df) list_form_graphic_pane_t1

0x7184,	// (0x0004fa7d) list_highlight_pane_cp5_ParamLimits

0x7184,	// (0x0004fa7d) list_highlight_pane_cp5

0x99c1,	// (0x000522ba) find_pane_g1

0xa93a,	// (0x00053233) input_find_pane

0x99ca,	// (0x000522c3) input_find_pane_g1_ParamLimits

0x99ca,	// (0x000522c3) input_find_pane_g1

0x99d6,	// (0x000522cf) input_find_pane_t1_ParamLimits

0x99d6,	// (0x000522cf) input_find_pane_t1

0x99eb,	// (0x000522e4) input_find_pane_t2_ParamLimits

0x99eb,	// (0x000522e4) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00057f9f) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00057f9f) input_find_pane_t

0xa943,	// (0x0005323c) input_focus_pane_cp5_ParamLimits

0xa943,	// (0x0005323c) input_focus_pane_cp5

0xa95d,	// (0x00053256) bg_popup_window_pane_cp2_ParamLimits

0xa95d,	// (0x00053256) bg_popup_window_pane_cp2

0xa96a,	// (0x00053263) listscroll_menu_pane_ParamLimits

0xa96a,	// (0x00053263) listscroll_menu_pane

0xa976,	// (0x0005326f) popup_submenu_window_ParamLimits

0xa976,	// (0x0005326f) popup_submenu_window

0xa9a6,	// (0x0005329f) find_popup_pane_g1

0xa9ae,	// (0x000532a7) input_popup_find_pane_cp

0xa943,	// (0x0005323c) input_focus_pane_cp4_ParamLimits

0xa943,	// (0x0005323c) input_focus_pane_cp4

0xa9c6,	// (0x000532bf) input_popup_find_pane_t1_ParamLimits

0xa9c6,	// (0x000532bf) input_popup_find_pane_t1

0x7136,	// (0x0004fa2f) bg_popup_sub_pane_cp

0xa9f4,	// (0x000532ed) listscroll_popup_sub_pane

0xa9fc,	// (0x000532f5) list_submenu_pane_ParamLimits

0xa9fc,	// (0x000532f5) list_submenu_pane

0xaa0d,	// (0x00053306) scroll_pane_cp4

0xaa15,	// (0x0005330e) list_single_popup_submenu_pane_ParamLimits

0xaa15,	// (0x0005330e) list_single_popup_submenu_pane

0xaa2a,	// (0x00053323) list_single_popup_submenu_pane_g1

0xaa32,	// (0x0005332b) list_single_popup_submenu_pane_t1_ParamLimits

0xaa32,	// (0x0005332b) list_single_popup_submenu_pane_t1

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp1_ParamLimits

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp1

0xaa47,	// (0x00053340) tabs_2_active_pane_g1

0xaa4f,	// (0x00053348) tabs_2_active_pane_t1

0x71c0,	// (0x0004fab9) bg_passive_tab_pane_cp1_ParamLimits

0x71c0,	// (0x0004fab9) bg_passive_tab_pane_cp1

0xaa47,	// (0x00053340) tabs_2_passive_pane_g1

0xaa4f,	// (0x00053348) tabs_2_passive_pane_t1

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp4

0xaa61,	// (0x0005335a) tabs_2_long_active_pane_t1

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp4

0x0c9b,	// (0x00049594) list_single_midp_graphic_pane_g4_ParamLimits

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp5

0xaa74,	// (0x0005336d) tabs_3_long_active_pane_t1

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp5

0x0c9b,	// (0x00049594) list_single_midp_graphic_pane_g4

0x7184,	// (0x0004fa7d) bg_popup_window_pane_cp13_ParamLimits

0x7184,	// (0x0004fa7d) bg_popup_window_pane_cp13

0xaa8f,	// (0x00053388) listscroll_popup_fast_pane_ParamLimits

0xaa8f,	// (0x00053388) listscroll_popup_fast_pane

0xaa9e,	// (0x00053397) grid_popup_fast_pane_ParamLimits

0xaa9e,	// (0x00053397) grid_popup_fast_pane

0xaab0,	// (0x000533a9) scroll_pane_cp9_ParamLimits

0xaab0,	// (0x000533a9) scroll_pane_cp9

0x59d5,	// (0x0004e2ce) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x59d5,	// (0x0004e2ce) list_single_graphic_hl_pane_t1_cp2

0xaad4,	// (0x000533cd) input_focus_pane_cp20_ParamLimits

0xaad4,	// (0x000533cd) input_focus_pane_cp20

0xaae2,	// (0x000533db) query_popup_data_pane_t1_ParamLimits

0xaae2,	// (0x000533db) query_popup_data_pane_t1

0xaaf5,	// (0x000533ee) query_popup_data_pane_t2_ParamLimits

0xaaf5,	// (0x000533ee) query_popup_data_pane_t2

0xab3b,	// (0x00053434) query_popup_data_pane_t3_ParamLimits

0xab3b,	// (0x00053434) query_popup_data_pane_t3

0xab7c,	// (0x00053475) query_popup_data_pane_t4_ParamLimits

0xab7c,	// (0x00053475) query_popup_data_pane_t4

0xabb8,	// (0x000534b1) query_popup_data_pane_t5_ParamLimits

0xabb8,	// (0x000534b1) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00057fa4) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00057fa4) query_popup_data_pane_t

0xa8f2,	// (0x000531eb) bg_set_opt_pane_g1

0xa8fa,	// (0x000531f3) bg_set_opt_pane_g2

0xa902,	// (0x000531fb) bg_set_opt_pane_g3

0xa90a,	// (0x00053203) bg_set_opt_pane_g4

0xa912,	// (0x0005320b) bg_set_opt_pane_g5

0xa91a,	// (0x00053213) bg_set_opt_pane_g6

0xa922,	// (0x0005321b) bg_set_opt_pane_g7

0xa92a,	// (0x00053223) bg_set_opt_pane_g8

0xa932,	// (0x0005322b) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00057faf) bg_set_opt_pane_g

0x029e,	// (0x00048b97) control_top_pane_stacon_ParamLimits

0x029e,	// (0x00048b97) control_top_pane_stacon

0x02f1,	// (0x00048bea) signal_pane_stacon_ParamLimits

0x02f1,	// (0x00048bea) signal_pane_stacon

0xe9d8,	// (0x000572d1) stacon_top_pane_g1_ParamLimits

0xe9d8,	// (0x000572d1) stacon_top_pane_g1

0x0316,	// (0x00048c0f) title_pane_stacon_ParamLimits

0x0316,	// (0x00048c0f) title_pane_stacon

0x0340,	// (0x00048c39) uni_indicator_pane_stacon_ParamLimits

0x0340,	// (0x00048c39) uni_indicator_pane_stacon

0x0355,	// (0x00048c4e) battery_pane_stacon_ParamLimits

0x0355,	// (0x00048c4e) battery_pane_stacon

0x0399,	// (0x00048c92) control_bottom_pane_stacon_ParamLimits

0x0399,	// (0x00048c92) control_bottom_pane_stacon

0x03bc,	// (0x00048cb5) navi_pane_stacon_ParamLimits

0x03bc,	// (0x00048cb5) navi_pane_stacon

0xe9fa,	// (0x000572f3) stacon_bottom_pane_g1_ParamLimits

0xe9fa,	// (0x000572f3) stacon_bottom_pane_g1

0xf3c0,	// (0x00057cb9) aid_levels_signal_lsc_ParamLimits

0xf3c0,	// (0x00057cb9) aid_levels_signal_lsc

0xf3d7,	// (0x00057cd0) signal_pane_stacon_g1_ParamLimits

0xf3d7,	// (0x00057cd0) signal_pane_stacon_g1

0xf3eb,	// (0x00057ce4) signal_pane_stacon_g2_ParamLimits

0xf3eb,	// (0x00057ce4) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00057fc2) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00057fc2) signal_pane_stacon_g

0xf420,	// (0x00057d19) title_pane_stacon_t1_ParamLimits

0xf420,	// (0x00057d19) title_pane_stacon_t1

0xabfc,	// (0x000534f5) uni_indicator_pane_stacon_g1

0xac06,	// (0x000534ff) uni_indicator_pane_stacon_g2

0xac10,	// (0x00053509) uni_indicator_pane_stacon_g3

0xac1a,	// (0x00053513) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00057fce) uni_indicator_pane_stacon_g

0xf445,	// (0x00057d3e) control_top_pane_stacon_g1

0xf44d,	// (0x00057d46) control_top_pane_stacon_t1_ParamLimits

0xf44d,	// (0x00057d46) control_top_pane_stacon_t1

0xf484,	// (0x00057d7d) aid_levels_battery_lsc_ParamLimits

0xf484,	// (0x00057d7d) aid_levels_battery_lsc

0xf49c,	// (0x00057d95) battery_pane_stacon_g1_ParamLimits

0xf49c,	// (0x00057d95) battery_pane_stacon_g1

0xf4af,	// (0x00057da8) battery_pane_stacon_g2_ParamLimits

0xf4af,	// (0x00057da8) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00057fd7) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00057fd7) battery_pane_stacon_g

0xf4ed,	// (0x00057de6) navi_icon_pane_stacon

0xf501,	// (0x00057dfa) navi_navi_pane_stacon

0xf4ed,	// (0x00057de6) navi_text_pane_stacon

0xf445,	// (0x00057d3e) control_bottom_pane_stacon_g1

0xf517,	// (0x00057e10) control_bottom_pane_stacon_t1_ParamLimits

0xf517,	// (0x00057e10) control_bottom_pane_stacon_t1

0xac3e,	// (0x00053537) grid_app_pane_ParamLimits

0xac3e,	// (0x00053537) grid_app_pane

0xac76,	// (0x0005356f) scroll_pane_cp15_ParamLimits

0xac76,	// (0x0005356f) scroll_pane_cp15

0xac8b,	// (0x00053584) cell_app_pane_ParamLimits

0xac8b,	// (0x00053584) cell_app_pane

0xacd8,	// (0x000535d1) cell_app_pane_g1_ParamLimits

0xacd8,	// (0x000535d1) cell_app_pane_g1

0xacfc,	// (0x000535f5) cell_app_pane_g2_ParamLimits

0xacfc,	// (0x000535f5) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00057fdc) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00057fdc) cell_app_pane_g

0xad08,	// (0x00053601) cell_app_pane_t1_ParamLimits

0xad08,	// (0x00053601) cell_app_pane_t1

0xad1f,	// (0x00053618) grid_highlight_pane_ParamLimits

0xad1f,	// (0x00053618) grid_highlight_pane

0xa8f2,	// (0x000531eb) cell_highlight_pane_g1

0xa8fa,	// (0x000531f3) cell_highlight_pane_g2

0xa902,	// (0x000531fb) cell_highlight_pane_g3

0xa90a,	// (0x00053203) cell_highlight_pane_g4

0xa912,	// (0x0005320b) cell_highlight_pane_g5

0xa91a,	// (0x00053213) cell_highlight_pane_g6

0xa922,	// (0x0005321b) cell_highlight_pane_g7

0xa92a,	// (0x00053223) cell_highlight_pane_g8

0xa932,	// (0x0005322b) cell_highlight_pane_g9

0x712c,	// (0x0004fa25) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00057f8a) cell_highlight_pane_g

0xad39,	// (0x00053632) bg_scroll_pane

0x005c,	// (0x00048955) scroll_handle_pane

0xad80,	// (0x00053679) scroll_bg_pane_g1

0xad95,	// (0x0005368e) scroll_bg_pane_g2

0xadad,	// (0x000536a6) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00057fe1) scroll_bg_pane_g

0xadc2,	// (0x000536bb) scroll_handle_focus_pane_ParamLimits

0xadc2,	// (0x000536bb) scroll_handle_focus_pane

0xad80,	// (0x00053679) scroll_handle_pane_g1

0xadcf,	// (0x000536c8) scroll_handle_pane_g2

0xadad,	// (0x000536a6) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00057fe8) scroll_handle_pane_g

0xa943,	// (0x0005323c) bg_popup_sub_pane_cp21_ParamLimits

0xa943,	// (0x0005323c) bg_popup_sub_pane_cp21

0xade3,	// (0x000536dc) popup_fep_japan_predictive_window_t1_ParamLimits

0xade3,	// (0x000536dc) popup_fep_japan_predictive_window_t1

0xadfa,	// (0x000536f3) popup_fep_japan_predictive_window_t2_ParamLimits

0xadfa,	// (0x000536f3) popup_fep_japan_predictive_window_t2

0xc4ec,	// (0x00054de5) popup_fep_japan_predictive_window_t3_ParamLimits

0xc4ec,	// (0x00054de5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00057fef) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00057fef) popup_fep_japan_predictive_window_t

0x7136,	// (0x0004fa2f) bg_popup_sub_pane_cp23

0xc523,	// (0x00054e1c) listscroll_japin_cand_pane

0xc52b,	// (0x00054e24) popup_fep_japan_candidate_window_t1

0xc539,	// (0x00054e32) candidate_pane_ParamLimits

0xc539,	// (0x00054e32) candidate_pane

0xc54b,	// (0x00054e44) scroll_pane_cp30

0xc555,	// (0x00054e4e) list_single_popup_jap_candidate_pane_ParamLimits

0xc555,	// (0x00054e4e) list_single_popup_jap_candidate_pane

0x7136,	// (0x0004fa2f) list_highlight_pane_cp30

0xc569,	// (0x00054e62) list_single_popup_jap_candidate_pane_t1

0xae2d,	// (0x00053726) level_1_signal

0xae3f,	// (0x00053738) level_2_signal

0xae52,	// (0x0005374b) level_3_signal

0xae65,	// (0x0005375e) level_4_signal

0xae78,	// (0x00053771) level_5_signal

0xae8b,	// (0x00053784) level_6_signal

0xae9e,	// (0x00053797) level_7_signal

0xae2d,	// (0x00053726) level_1_battery

0xae3f,	// (0x00053738) level_2_battery

0xae52,	// (0x0005374b) level_3_battery

0xae65,	// (0x0005375e) level_4_battery

0xae78,	// (0x00053771) level_5_battery

0xae8b,	// (0x00053784) level_6_battery

0xae9e,	// (0x00053797) level_7_battery

0xe813,	// (0x0005710c) list_menu_pane_ParamLimits

0xe813,	// (0x0005710c) list_menu_pane

0xe829,	// (0x00057122) scroll_pane_cp25_ParamLimits

0xe829,	// (0x00057122) scroll_pane_cp25

0xe842,	// (0x0005713b) list_double2_graphic_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double2_graphic_pane_cp2

0xe842,	// (0x0005713b) list_double2_large_graphic_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double2_large_graphic_pane_cp2

0xe842,	// (0x0005713b) list_double2_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double2_pane_cp2

0xe842,	// (0x0005713b) list_double_graphic_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double_graphic_pane_cp2

0xe842,	// (0x0005713b) list_double_large_graphic_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double_large_graphic_pane_cp2

0xe842,	// (0x0005713b) list_double_number_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double_number_pane_cp2

0xe842,	// (0x0005713b) list_double_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double_pane_cp2

0xaeb1,	// (0x000537aa) list_single_2graphic_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_2graphic_pane_cp2

0xaeb1,	// (0x000537aa) list_single_graphic_heading_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_graphic_heading_pane_cp2

0xaeb1,	// (0x000537aa) list_single_graphic_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_graphic_pane_cp2

0xaeb1,	// (0x000537aa) list_single_heading_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_heading_pane_cp2

0xe852,	// (0x0005714b) list_single_large_graphic_pane_cp2_ParamLimits

0xe852,	// (0x0005714b) list_single_large_graphic_pane_cp2

0xaeb1,	// (0x000537aa) list_single_number_heading_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_number_heading_pane_cp2

0xaeb1,	// (0x000537aa) list_single_number_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_number_pane_cp2

0xaeb1,	// (0x000537aa) list_single_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_pane_cp2

0xe86b,	// (0x00057164) bg_popup_sub_pane_cp22

0x01f1,	// (0x00048aea) popup_side_volume_key_window_g1

0x021b,	// (0x00048b14) popup_side_volume_key_window_t1

0x0239,	// (0x00048b32) volume_small_pane_cp1

0x71c0,	// (0x0004fab9) bg_popup_sub_pane_cp24_ParamLimits

0x71c0,	// (0x0004fab9) bg_popup_sub_pane_cp24

0xe881,	// (0x0005717a) fep_china_uni_candidate_pane_ParamLimits

0xe881,	// (0x0005717a) fep_china_uni_candidate_pane

0xe895,	// (0x0005718e) fep_china_uni_entry_pane

0xe8a5,	// (0x0005719e) popup_fep_china_uni_window_g1

0xe8c1,	// (0x000571ba) fep_china_uni_entry_pane_g1

0xe8cb,	// (0x000571c4) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00058020) fep_china_uni_entry_pane_g

0xe8d5,	// (0x000571ce) fep_entry_item_pane

0xe8df,	// (0x000571d8) fep_candidate_item_pane

0xe8e7,	// (0x000571e0) fep_china_uni_candidate_pane_g1

0xe8f1,	// (0x000571ea) fep_china_uni_candidate_pane_g2

0xe8f9,	// (0x000571f2) fep_china_uni_candidate_pane_g3

0xe901,	// (0x000571fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00058025) fep_china_uni_candidate_pane_g

0x712c,	// (0x0004fa25) fep_entry_item_pane_g1

0xe90b,	// (0x00057204) fep_entry_item_pane_t1_ParamLimits

0xe90b,	// (0x00057204) fep_entry_item_pane_t1

0xe921,	// (0x0005721a) fep_candidate_item_pane_t1_ParamLimits

0xe921,	// (0x0005721a) fep_candidate_item_pane_t1

0xe936,	// (0x0005722f) fep_candidate_item_pane_t2_ParamLimits

0xe936,	// (0x0005722f) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005802e) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005802e) fep_candidate_item_pane_t

0x7184,	// (0x0004fa7d) list_highlight_pane_cp31_ParamLimits

0x7184,	// (0x0004fa7d) list_highlight_pane_cp31

0xe948,	// (0x00057241) level_1_signal_lsc

0xe951,	// (0x0005724a) level_2_signal_lsc

0xe95a,	// (0x00057253) level_3_signal_lsc

0xe963,	// (0x0005725c) level_4_signal_lsc

0xe96c,	// (0x00057265) level_5_signal_lsc

0xe975,	// (0x0005726e) level_6_signal_lsc

0xe97e,	// (0x00057277) level_7_signal_lsc

0xe97e,	// (0x00057277) level_1_battery_lsc

0xe987,	// (0x00057280) level_2_battery_lsc

0xe990,	// (0x00057289) level_3_battery_lsc

0xe999,	// (0x00057292) level_4_battery_lsc

0xe9a2,	// (0x0005729b) level_5_battery_lsc

0xe9ab,	// (0x000572a4) level_6_battery_lsc

0xe948,	// (0x00057241) level_7_battery_lsc

0xe9b4,	// (0x000572ad) scroll_handle_focus_pane_g1

0xe9bd,	// (0x000572b6) scroll_handle_focus_pane_g2

0xe9c6,	// (0x000572bf) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00058033) scroll_handle_focus_pane_g

0x9a00,	// (0x000522f9) list_single_2graphic_pane_g1_ParamLimits

0x9a00,	// (0x000522f9) list_single_2graphic_pane_g1

0xa7e7,	// (0x000530e0) list_single_2graphic_pane_g2_ParamLimits

0xa7e7,	// (0x000530e0) list_single_2graphic_pane_g2

0x0c6a,	// (0x00049563) list_single_2graphic_pane_g3_ParamLimits

0x0c6a,	// (0x00049563) list_single_2graphic_pane_g3

0xaf40,	// (0x00053839) list_single_2graphic_pane_g4_ParamLimits

0xaf40,	// (0x00053839) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005803a) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005803a) list_single_2graphic_pane_g

0x9a0c,	// (0x00052305) list_single_2graphic_pane_t1_ParamLimits

0x9a0c,	// (0x00052305) list_single_2graphic_pane_t1

0xaf51,	// (0x0005384a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaf51,	// (0x0005384a) list_double2_graphic_large_graphic_pane_g1

0xa824,	// (0x0005311d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa824,	// (0x0005311d) list_double2_graphic_large_graphic_pane_g2

0xa80c,	// (0x00053105) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa80c,	// (0x00053105) list_double2_graphic_large_graphic_pane_g3

0xaf63,	// (0x0005385c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaf63,	// (0x0005385c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00058043) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00058043) list_double2_graphic_large_graphic_pane_g

0x9a3a,	// (0x00052333) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9a3a,	// (0x00052333) list_double2_graphic_large_graphic_pane_t1

0x9a50,	// (0x00052349) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9a50,	// (0x00052349) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005804c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005804c) list_double2_graphic_large_graphic_pane_t

0xeaba,	// (0x000573b3) popup_fast_swap_window_ParamLimits

0xeaba,	// (0x000573b3) popup_fast_swap_window

0xead8,	// (0x000573d1) popup_side_volume_key_window

0xeaf6,	// (0x000573ef) stacon_top_pane

0xeb00,	// (0x000573f9) status_pane_ParamLimits

0xeb00,	// (0x000573f9) status_pane

0xafb7,	// (0x000538b0) status_small_pane

0x7136,	// (0x0004fa2f) control_pane

0x7136,	// (0x0004fa2f) stacon_bottom_pane

0xa87d,	// (0x00053176) scroll_pane_cp121

0xa874,	// (0x0005316d) set_content_pane

0xaf6f,	// (0x00053868) bg_active_tab_pane_g1_cp1

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp1

0xaf78,	// (0x00053871) bg_active_tab_pane_g3_cp1

0xaf6f,	// (0x00053868) bg_passive_tab_pane_g1_cp1

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp1

0xaf78,	// (0x00053871) bg_passive_tab_pane_g3_cp1

0xaf81,	// (0x0005387a) bg_active_tab_pane_g1_cp2

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp2

0xaf8a,	// (0x00053883) bg_active_tab_pane_g3_cp2

0xaf81,	// (0x0005387a) bg_passive_tab_pane_g1_cp2

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp2

0xaf8a,	// (0x00053883) bg_passive_tab_pane_g3_cp2

0xaf93,	// (0x0005388c) bg_active_tab_pane_g1_cp3

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp3

0xaf9c,	// (0x00053895) bg_active_tab_pane_g3_cp3

0xaf93,	// (0x0005388c) bg_passive_tab_pane_g1_cp3

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp3

0xaf9c,	// (0x00053895) bg_passive_tab_pane_g3_cp3

0xafa5,	// (0x0005389e) bg_active_tab_pane_g1_cp4

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp4

0xafae,	// (0x000538a7) bg_active_tab_pane_g3_cp4

0xafa5,	// (0x0005389e) bg_passive_tab_pane_g1_cp4

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp4

0xafae,	// (0x000538a7) bg_passive_tab_pane_g3_cp4

0xea16,	// (0x0005730f) bg_active_tab_pane_g1_cp5

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp5

0xea1f,	// (0x00057318) bg_active_tab_pane_g3_cp5

0xea16,	// (0x0005730f) bg_passive_tab_pane_g1_cp5

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp5

0xea1f,	// (0x00057318) bg_passive_tab_pane_g3_cp5

0xea28,	// (0x00057321) list_set_graphic_pane_ParamLimits

0xea28,	// (0x00057321) list_set_graphic_pane

0x7136,	// (0x0004fa2f) bg_set_opt_pane_cp4

0xea3b,	// (0x00057334) list_set_graphic_pane_g1_ParamLimits

0xea3b,	// (0x00057334) list_set_graphic_pane_g1

0xea47,	// (0x00057340) list_set_graphic_pane_g2_ParamLimits

0xea47,	// (0x00057340) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00058051) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00058051) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x000583db) volume_small_pane_cp_g

0xea6b,	// (0x00057364) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xea6b,	// (0x00057364) list_double2_large_graphic_pane_g1_cp2

0xea79,	// (0x00057372) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xea79,	// (0x00057372) list_double2_large_graphic_pane_g2_cp2

0xea8a,	// (0x00057383) list_double2_large_graphic_pane_g3_cp2

0xea92,	// (0x0005738b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xea92,	// (0x0005738b) list_double2_large_graphic_pane_t1_cp2

0xeaa8,	// (0x000573a1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xeaa8,	// (0x000573a1) list_double2_large_graphic_pane_t2_cp2

0x3c3d,	// (0x0004c536) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3c3d,	// (0x0004c536) list_double_large_graphic_pane_g1_cp2

0x3c50,	// (0x0004c549) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3c50,	// (0x0004c549) list_double_large_graphic_pane_g2_cp2

0x21ef,	// (0x0004aae8) list_double_large_graphic_pane_g3_cp2

0x3c61,	// (0x0004c55a) list_double_large_graphic_pane_g4_cp

0x3c69,	// (0x0004c562) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3c69,	// (0x0004c562) list_double_large_graphic_pane_t1_cp2

0x3c80,	// (0x0004c579) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3c80,	// (0x0004c579) list_double_large_graphic_pane_t2_cp2

0xeb0e,	// (0x00057407) list_double2_graphic_pane_g1_cp2_ParamLimits

0xeb0e,	// (0x00057407) list_double2_graphic_pane_g1_cp2

0xeb1c,	// (0x00057415) list_double2_graphic_pane_g2_cp2_ParamLimits

0xeb1c,	// (0x00057415) list_double2_graphic_pane_g2_cp2

0xeb2d,	// (0x00057426) list_double2_graphic_pane_g3_cp2

0xeb37,	// (0x00057430) list_double2_graphic_pane_t1_cp2_ParamLimits

0xeb37,	// (0x00057430) list_double2_graphic_pane_t1_cp2

0xeb4d,	// (0x00057446) list_double2_graphic_pane_t2_cp2_ParamLimits

0xeb4d,	// (0x00057446) list_double2_graphic_pane_t2_cp2

0xeb5f,	// (0x00057458) list_single_number_heading_pane_g1_cp2_ParamLimits

0xeb5f,	// (0x00057458) list_single_number_heading_pane_g1_cp2

0xeb6b,	// (0x00057464) list_single_number_heading_pane_g2_cp2

0xeb73,	// (0x0005746c) list_single_number_heading_pane_t1_cp2_ParamLimits

0xeb73,	// (0x0005746c) list_single_number_heading_pane_t1_cp2

0xeb89,	// (0x00057482) list_single_number_heading_pane_t2_cp2_ParamLimits

0xeb89,	// (0x00057482) list_single_number_heading_pane_t2_cp2

0xeb9d,	// (0x00057496) list_single_number_heading_pane_t3_cp2_ParamLimits

0xeb9d,	// (0x00057496) list_single_number_heading_pane_t3_cp2

0xeb5f,	// (0x00057458) list_single_heading_pane_g1_cp2_ParamLimits

0xeb5f,	// (0x00057458) list_single_heading_pane_g1_cp2

0xeb6b,	// (0x00057464) list_single_heading_pane_g2_cp2

0xeb73,	// (0x0005746c) list_single_heading_pane_t1_cp2_ParamLimits

0xeb73,	// (0x0005746c) list_single_heading_pane_t1_cp2

0x3a37,	// (0x0004c330) list_single_heading_pane_t2_cp2_ParamLimits

0x3a37,	// (0x0004c330) list_single_heading_pane_t2_cp2

0x397f,	// (0x0004c278) list_double_graphic_pane_g1_cp2_ParamLimits

0x397f,	// (0x0004c278) list_double_graphic_pane_g1_cp2

0x398b,	// (0x0004c284) list_double_graphic_pane_g2_cp2_ParamLimits

0x398b,	// (0x0004c284) list_double_graphic_pane_g2_cp2

0x399a,	// (0x0004c293) list_double_graphic_pane_g3_cp2

0x39a2,	// (0x0004c29b) list_double_graphic_pane_t1_cp2_ParamLimits

0x39a2,	// (0x0004c29b) list_double_graphic_pane_t1_cp2

0x39b8,	// (0x0004c2b1) list_double_graphic_pane_t2_cp2_ParamLimits

0x39b8,	// (0x0004c2b1) list_double_graphic_pane_t2_cp2

0x21e3,	// (0x0004aadc) list_double_number_pane_g1_cp2_ParamLimits

0x21e3,	// (0x0004aadc) list_double_number_pane_g1_cp2

0x21ef,	// (0x0004aae8) list_double_number_pane_g2_cp2

0x3943,	// (0x0004c23c) list_double_number_pane_t1_cp2_ParamLimits

0x3943,	// (0x0004c23c) list_double_number_pane_t1_cp2

0x3957,	// (0x0004c250) list_double_number_pane_t2_cp2_ParamLimits

0x3957,	// (0x0004c250) list_double_number_pane_t2_cp2

0x396d,	// (0x0004c266) list_double_number_pane_t3_cp2_ParamLimits

0x396d,	// (0x0004c266) list_double_number_pane_t3_cp2

0x382c,	// (0x0004c125) list_single_graphic_pane_g1_cp2_ParamLimits

0x382c,	// (0x0004c125) list_single_graphic_pane_g1_cp2

0xc578,	// (0x00054e71) list_single_graphic_pane_g2_cp2_ParamLimits

0xc578,	// (0x00054e71) list_single_graphic_pane_g2_cp2

0x2249,	// (0x0004ab42) list_single_graphic_pane_g3_cp2

0x3802,	// (0x0004c0fb) list_single_graphic_pane_t1_cp2_ParamLimits

0x3802,	// (0x0004c0fb) list_single_graphic_pane_t1_cp2

0xc578,	// (0x00054e71) list_single_number_pane_g1_cp2_ParamLimits

0xc578,	// (0x00054e71) list_single_number_pane_g1_cp2

0x2249,	// (0x0004ab42) list_single_number_pane_g2_cp2

0x3802,	// (0x0004c0fb) list_single_number_pane_t1_cp2_ParamLimits

0x3802,	// (0x0004c0fb) list_single_number_pane_t1_cp2

0x3818,	// (0x0004c111) list_single_number_pane_t2_cp2_ParamLimits

0x3818,	// (0x0004c111) list_single_number_pane_t2_cp2

0xea79,	// (0x00057372) list_double2_pane_g1_cp2_ParamLimits

0xea79,	// (0x00057372) list_double2_pane_g1_cp2

0xea8a,	// (0x00057383) list_double2_pane_g2_cp2

0x21bb,	// (0x0004aab4) list_double2_pane_t1_cp2_ParamLimits

0x21bb,	// (0x0004aab4) list_double2_pane_t1_cp2

0x21d1,	// (0x0004aaca) list_double2_pane_t2_cp2_ParamLimits

0x21d1,	// (0x0004aaca) list_double2_pane_t2_cp2

0x21e3,	// (0x0004aadc) list_double_pane_g1_cp2_ParamLimits

0x21e3,	// (0x0004aadc) list_double_pane_g1_cp2

0x21ef,	// (0x0004aae8) list_double_pane_g2_cp2

0x21f7,	// (0x0004aaf0) list_double_pane_t1_cp2_ParamLimits

0x21f7,	// (0x0004aaf0) list_double_pane_t1_cp2

0x220d,	// (0x0004ab06) list_double_pane_t2_cp2_ParamLimits

0x220d,	// (0x0004ab06) list_double_pane_t2_cp2

0x2239,	// (0x0004ab32) list_single_pane_cp2_g3

0xc578,	// (0x00054e71) list_single_pane_g1_cp2_ParamLimits

0xc578,	// (0x00054e71) list_single_pane_g1_cp2

0x2249,	// (0x0004ab42) list_single_pane_g2_cp2

0x2251,	// (0x0004ab4a) list_single_pane_t1_cp2_ParamLimits

0x2251,	// (0x0004ab4a) list_single_pane_t1_cp2

0x2269,	// (0x0004ab62) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2269,	// (0x0004ab62) list_single_large_graphic_pane_g1_cp2

0x2277,	// (0x0004ab70) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2277,	// (0x0004ab70) list_single_large_graphic_pane_g2_cp2

0x2283,	// (0x0004ab7c) list_single_large_graphic_pane_g3_cp2

0x228b,	// (0x0004ab84) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x228b,	// (0x0004ab84) list_single_large_graphic_pane_g4_cp1

0x22a5,	// (0x0004ab9e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x22a5,	// (0x0004ab9e) list_single_large_graphic_pane_t1_cp2

0x37cc,	// (0x0004c0c5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x37cc,	// (0x0004c0c5) list_single_graphic_heading_pane_g1_cp2

0x3799,	// (0x0004c092) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3799,	// (0x0004c092) list_single_graphic_heading_pane_g4_cp2

0x2249,	// (0x0004ab42) list_single_graphic_heading_pane_g5_cp2

0x37d8,	// (0x0004c0d1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x37d8,	// (0x0004c0d1) list_single_graphic_heading_pane_t1_cp2

0x37ee,	// (0x0004c0e7) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x37ee,	// (0x0004c0e7) list_single_graphic_heading_pane_t2_cp2

0x378d,	// (0x0004c086) list_single_2graphic_pane_g1_cp2_ParamLimits

0x378d,	// (0x0004c086) list_single_2graphic_pane_g1_cp2

0x3799,	// (0x0004c092) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3799,	// (0x0004c092) list_single_2graphic_pane_g2_cp2

0x2249,	// (0x0004ab42) list_single_2graphic_pane_g3_cp2

0x37aa,	// (0x0004c0a3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x37aa,	// (0x0004c0a3) list_single_2graphic_pane_g4_cp2

0x37b6,	// (0x0004c0af) list_single_2graphic_pane_t1_cp2_ParamLimits

0x37b6,	// (0x0004c0af) list_single_2graphic_pane_t1_cp2

0x712c,	// (0x0004fa25) list_highlight_pane_g10_cp1

0x3365,	// (0x0004bc5e) list_highlight_pane_g1_cp1

0x336d,	// (0x0004bc66) list_highlight_pane_g2_cp1

0x3375,	// (0x0004bc6e) list_highlight_pane_g3_cp1

0x337d,	// (0x0004bc76) list_highlight_pane_g4_cp1

0x3385,	// (0x0004bc7e) list_highlight_pane_g5_cp1

0x338d,	// (0x0004bc86) list_highlight_pane_g6_cp1

0x3395,	// (0x0004bc8e) list_highlight_pane_g7_cp1

0x339d,	// (0x0004bc96) list_highlight_pane_g8_cp1

0x33a5,	// (0x0004bc9e) list_highlight_pane_g9_cp1

0xc7ae,	// (0x000550a7) form_field_slider_pane_t3

0xc7bc,	// (0x000550b5) form_field_slider_pane_t4

0x32a1,	// (0x0004bb9a) slider_form_pane_ParamLimits

0x32a1,	// (0x0004bb9a) slider_form_pane

0x7136,	// (0x0004fa2f) control_abbreviations

0x7136,	// (0x0004fa2f) control_conventions

0x7136,	// (0x0004fa2f) control_definitions

0x7136,	// (0x0004fa2f) format_table_attribute

0x3a8d,	// (0x0004c386) bg_popup_preview_window_pane_g9

0x7136,	// (0x0004fa2f) format_table_data2

0x7136,	// (0x0004fa2f) format_table_data3

0x7136,	// (0x0004fa2f) format_table_data_example

0x0008,

0x7136,	// (0x0004fa2f) intro_purpose

0xf8ef,	// (0x000581e8) bg_popup_preview_window_pane_g

0x7136,	// (0x0004fa2f) texts_category

0x7136,	// (0x0004fa2f) texts_graphics

0x22bb,	// (0x0004abb4) text_digital

0x22ca,	// (0x0004abc3) text_primary

0x22d9,	// (0x0004abd2) text_primary_small

0x22e8,	// (0x0004abe1) text_secondary

0x22f7,	// (0x0004abf0) text_title

0x41fa,	// (0x0004caf3) bg_passive_tab_pane_g1_cp3_srt

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp3_srt

0x4203,	// (0x0004cafc) bg_passive_tab_pane_g3_cp3_srt

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp3_srt_ParamLimits

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp3_srt

0x420c,	// (0x0004cb05) tabs_4_active_pane_srt_g1

0xcad4,	// (0x000553cd) tabs_4_active_pane_srt_t1_ParamLimits

0xcad4,	// (0x000553cd) tabs_4_active_pane_srt_t1

0x41fa,	// (0x0004caf3) bg_active_tab_pane_g1_cp3_copy1

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp3_copy1

0x4203,	// (0x0004cafc) bg_active_tab_pane_g3_cp3_copy1

0x7184,	// (0x0004fa7d) tabs_2_long_active_pane_srt_ParamLimits

0x7184,	// (0x0004fa7d) tabs_2_long_active_pane_srt

0x7184,	// (0x0004fa7d) tabs_2_long_passive_pane_srt_ParamLimits

0x7184,	// (0x0004fa7d) tabs_2_long_passive_pane_srt

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp4_srt

0x3ebc,	// (0x0004c7b5) bg_passive_tab_pane_g1_cp4_srt

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp4_srt

0x3ec5,	// (0x0004c7be) bg_passive_tab_pane_g3_cp4_srt

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp4_srt_ParamLimits

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp4_srt

0xc98e,	// (0x00055287) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc98e,	// (0x00055287) tabs_2_long_active_pane_srt_t1

0x3ebc,	// (0x0004c7b5) bg_active_tab_pane_g1_cp4_srt

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp4_srt

0x3ec5,	// (0x0004c7be) bg_active_tab_pane_g3_cp4_srt

0x71c0,	// (0x0004fab9) tabs_3_long_active_pane_srt_ParamLimits

0x71c0,	// (0x0004fab9) tabs_3_long_active_pane_srt

0x71c0,	// (0x0004fab9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x71c0,	// (0x0004fab9) tabs_3_long_passive_pane_cp_srt

0x71c0,	// (0x0004fab9) tabs_3_long_passive_pane_srt_ParamLimits

0x71c0,	// (0x0004fab9) tabs_3_long_passive_pane_srt

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp5_srt

0xea16,	// (0x0005730f) bg_passive_tab_pane_g1_cp5_srt

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp5_srt

0xea1f,	// (0x00057318) bg_passive_tab_pane_g3_cp5_srt

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp5_srt_ParamLimits

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp5_srt

0xc978,	// (0x00055271) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc978,	// (0x00055271) tabs_3_long_active_pane_srt_t1

0xea16,	// (0x0005730f) bg_active_tab_pane_g1_cp5_srt

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp5_srt

0xea1f,	// (0x00057318) bg_active_tab_pane_g3_cp5_srt

0x3e9c,	// (0x0004c795) navi_text_pane_srt_t1

0x3e94,	// (0x0004c78d) navi_icon_pane_srt_g1

0x24cf,	// (0x0004adc8) midp_editing_number_pane_srt

0x2306,	// (0x0004abff) midp_ticker_pane_srt

0x24d7,	// (0x0004add0) midp_ticker_pane_srt_g1

0x24df,	// (0x0004add8) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00058070) midp_ticker_pane_srt_g

0x24e7,	// (0x0004ade0) midp_ticker_pane_srt_t1

0x3e85,	// (0x0004c77e) midp_editing_number_pane_t1_copy1

0xafc2,	// (0x000538bb) listscroll_midp_pane

0xafc2,	// (0x000538bb) midp_form_pane

0x237d,	// (0x0004ac76) midp_info_popup_window_ParamLimits

0x237d,	// (0x0004ac76) midp_info_popup_window

0xa943,	// (0x0005323c) bg_popup_sub_pane_cp50_ParamLimits

0xa943,	// (0x0005323c) bg_popup_sub_pane_cp50

0x2f8f,	// (0x0004b888) listscroll_midp_info_pane_ParamLimits

0x2f8f,	// (0x0004b888) listscroll_midp_info_pane

0x2f6f,	// (0x0004b868) listscroll_form_midp_pane_ParamLimits

0x2f6f,	// (0x0004b868) listscroll_form_midp_pane

0x2f7b,	// (0x0004b874) scroll_bar_cp050

0x2f6f,	// (0x0004b868) list_midp_pane

0x4c72,	// (0x0004d56b) signal_pane_g2_cp

0x2e89,	// (0x0004b782) listscroll_midp_info_pane_t1_ParamLimits

0x2e89,	// (0x0004b782) listscroll_midp_info_pane_t1

0x2ea1,	// (0x0004b79a) listscroll_midp_info_pane_t2_ParamLimits

0x2ea1,	// (0x0004b79a) listscroll_midp_info_pane_t2

0x2edf,	// (0x0004b7d8) listscroll_midp_info_pane_t3_ParamLimits

0x2edf,	// (0x0004b7d8) listscroll_midp_info_pane_t3

0x2f19,	// (0x0004b812) listscroll_midp_info_pane_t4_ParamLimits

0x2f19,	// (0x0004b812) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00058123) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00058123) listscroll_midp_info_pane_t

0xaa0d,	// (0x00053306) scroll_pane_cp21

0x2e23,	// (0x0004b71c) form_midp_field_choice_group_pane

0x2e2c,	// (0x0004b725) form_midp_field_text_pane

0x2e6f,	// (0x0004b768) form_midp_field_time_pane

0x2e77,	// (0x0004b770) form_midp_gauge_slider_pane

0x2e80,	// (0x0004b779) form_midp_gauge_wait_pane

0x7136,	// (0x0004fa2f) form_midp_image_pane

0x9a62,	// (0x0005235b) list_single_midp_pane_ParamLimits

0x9a62,	// (0x0005235b) list_single_midp_pane

0xc786,	// (0x0005507f) form_midp_field_text_pane_t1

0x2bd9,	// (0x0004b4d2) input_focus_pane_cp050

0x2e12,	// (0x0004b70b) list_midp_form_text_pane

0x2db6,	// (0x0004b6af) form_midp_field_choice_group_pane_t1

0x2dc4,	// (0x0004b6bd) input_focus_pane_cp051

0x2dd8,	// (0x0004b6d1) list_midp_choice_pane

0x7136,	// (0x0004fa2f) status_idle_pane

0x2d9a,	// (0x0004b693) form_midp_field_time_pane_t1

0x712c,	// (0x0004fa25) wait_anim_pane_g2_copy1

0x2da8,	// (0x0004b6a1) form_midp_field_time_pane_t2

0x0001,

0x242d,	// (0x0004ad26) aid_navinavi_width_2_pane

0xf825,	// (0x0005811e) form_midp_field_time_pane_t

0x7136,	// (0x0004fa2f) input_focus_pane_cp052

0x7136,	// (0x0004fa2f) bg_input_focus_pane_cp040

0x2d5a,	// (0x0004b653) form_midp_gauge_slider_pane_t1

0x2d68,	// (0x0004b661) form_midp_gauge_slider_pane_t2

0xc76a,	// (0x00055063) form_midp_gauge_slider_pane_t3

0xc778,	// (0x00055071) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00058115) form_midp_gauge_slider_pane_t

0x2d92,	// (0x0004b68b) form_midp_slider_pane

0x7184,	// (0x0004fa7d) bg_input_focus_pane_cp041_ParamLimits

0x7184,	// (0x0004fa7d) bg_input_focus_pane_cp041

0x2d27,	// (0x0004b620) form_midp_gauge_wait_pane_t1_ParamLimits

0x2d27,	// (0x0004b620) form_midp_gauge_wait_pane_t1

0x2d39,	// (0x0004b632) form_midp_gauge_wait_pane_t2_ParamLimits

0x2d39,	// (0x0004b632) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00058110) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00058110) form_midp_gauge_wait_pane_t

0x2d4b,	// (0x0004b644) form_midp_wait_pane_ParamLimits

0x2d4b,	// (0x0004b644) form_midp_wait_pane

0x2cef,	// (0x0004b5e8) form_midp_image_pane_g1

0x2cf8,	// (0x0004b5f1) form_midp_image_pane_t1

0x2d07,	// (0x0004b600) form_midp_image_pane_t2

0x2d16,	// (0x0004b60f) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00058109) form_midp_image_pane_t

0x2ce6,	// (0x0004b5df) list_single_midp_pane_g1

0xed28,	// (0x00057621) list_single_midp_pane_t1

0xc753,	// (0x0005504c) list_midp_form_item_pane_ParamLimits

0xc753,	// (0x0005504c) list_midp_form_item_pane

0x23d5,	// (0x0004acce) list_midp_form_item_pane_t1

0x23e4,	// (0x0004acdd) midp_ticker_pane_g1

0x23f0,	// (0x0004ace9) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00058056) midp_ticker_pane_g

0xb066,	// (0x0005395f) midp_ticker_pane_t1

0xca55,	// (0x0005534e) midp_editing_number_pane_t1

0x40d0,	// (0x0004c9c9) midp_editing_number_pane

0x40df,	// (0x0004c9d8) midp_ticker_pane

0x3e75,	// (0x0004c76e) ai_message_heading_pane

0x7136,	// (0x0004fa2f) bg_popup_window_pane_cp14

0x3e7d,	// (0x0004c776) listscroll_ai_message_pane

0x3dfb,	// (0x0004c6f4) ai_message_heading_pane_g1_ParamLimits

0x3dfb,	// (0x0004c6f4) ai_message_heading_pane_g1

0x3e07,	// (0x0004c700) ai_message_heading_pane_g2_ParamLimits

0x3e07,	// (0x0004c700) ai_message_heading_pane_g2

0x3e15,	// (0x0004c70e) ai_message_heading_pane_g3_ParamLimits

0x3e15,	// (0x0004c70e) ai_message_heading_pane_g3

0x3e21,	// (0x0004c71a) ai_message_heading_pane_g4_ParamLimits

0x3e21,	// (0x0004c71a) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0005824a) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0005824a) ai_message_heading_pane_g

0x3e2d,	// (0x0004c726) ai_message_heading_pane_t1_ParamLimits

0x3e2d,	// (0x0004c726) ai_message_heading_pane_t1

0x3e47,	// (0x0004c740) ai_message_heading_pane_t2_ParamLimits

0x3e47,	// (0x0004c740) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00058253) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00058253) ai_message_heading_pane_t

0x3e5b,	// (0x0004c754) bg_popup_heading_pane_cp1_ParamLimits

0x3e5b,	// (0x0004c754) bg_popup_heading_pane_cp1

0x3de9,	// (0x0004c6e2) list_ai_message_pane_ParamLimits

0x3de9,	// (0x0004c6e2) list_ai_message_pane

0xaa0d,	// (0x00053306) scroll_pane_cp10

0x3d85,	// (0x0004c67e) list_ai_message_pane_g1

0x3d8d,	// (0x0004c686) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00058227) list_ai_message_pane_g

0x3d95,	// (0x0004c68e) list_ai_message_pane_t1_ParamLimits

0x3d95,	// (0x0004c68e) list_ai_message_pane_t1

0x3daa,	// (0x0004c6a3) list_ai_message_pane_t2_ParamLimits

0x3daa,	// (0x0004c6a3) list_ai_message_pane_t2

0x3dbf,	// (0x0004c6b8) list_ai_message_pane_t3_ParamLimits

0x3dbf,	// (0x0004c6b8) list_ai_message_pane_t3

0x3dd4,	// (0x0004c6cd) list_ai_message_pane_t4_ParamLimits

0x3dd4,	// (0x0004c6cd) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0005822c) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0005822c) list_ai_message_pane_t

0xc95e,	// (0x00055257) cell_ai_soft_ind_pane_ParamLimits

0xc95e,	// (0x00055257) cell_ai_soft_ind_pane

0x240e,	// (0x0004ad07) cell_ai_soft_ind_pane_g1_ParamLimits

0x240e,	// (0x0004ad07) cell_ai_soft_ind_pane_g1

0x7136,	// (0x0004fa2f) grid_highlight_cp1

0x241b,	// (0x0004ad14) text_secondary_cp56_ParamLimits

0x241b,	// (0x0004ad14) text_secondary_cp56

0x3d43,	// (0x0004c63c) example_general_pane_ParamLimits

0x3d43,	// (0x0004c63c) example_general_pane

0x3d4f,	// (0x0004c648) example_parent_pane_g1_ParamLimits

0x3d4f,	// (0x0004c648) example_parent_pane_g1

0x3d5b,	// (0x0004c654) example_parent_pane_t1_ParamLimits

0x3d5b,	// (0x0004c654) example_parent_pane_t1

0xb6e6,	// (0x00053fdf) popup_preview_text_window_ParamLimits

0xb6e6,	// (0x00053fdf) popup_preview_text_window

0x2241,	// (0x0004ab3a) list_single_pane_cp2_g4

0xa2e6,	// (0x00052bdf) bg_popup_preview_window_pane_ParamLimits

0xa2e6,	// (0x00052bdf) bg_popup_preview_window_pane

0x3a97,	// (0x0004c390) popup_preview_text_window_t1_ParamLimits

0x3a97,	// (0x0004c390) popup_preview_text_window_t1

0x3ab5,	// (0x0004c3ae) popup_preview_text_window_t2_ParamLimits

0x3ab5,	// (0x0004c3ae) popup_preview_text_window_t2

0x3afe,	// (0x0004c3f7) popup_preview_text_window_t3_ParamLimits

0x3afe,	// (0x0004c3f7) popup_preview_text_window_t3

0x3b43,	// (0x0004c43c) popup_preview_text_window_t4_ParamLimits

0x3b43,	// (0x0004c43c) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x000581fb) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x000581fb) popup_preview_text_window_t

0x3bc1,	// (0x0004c4ba) scroll_pane_cp11

0x2b65,	// (0x0004b45e) bg_popup_preview_window_pane_g1

0x3a4b,	// (0x0004c344) bg_popup_preview_window_pane_g2

0x3a55,	// (0x0004c34e) bg_popup_preview_window_pane_g3

0x3a5f,	// (0x0004c358) bg_popup_preview_window_pane_g4

0x3a69,	// (0x0004c362) bg_popup_preview_window_pane_g5

0x3a73,	// (0x0004c36c) bg_popup_preview_window_pane_g6

0x3a7b,	// (0x0004c374) bg_popup_preview_window_pane_g7

0x3a83,	// (0x0004c37c) bg_popup_preview_window_pane_g8

0xee9c,	// (0x00057795) aid_popup_width_pane

0xb656,	// (0x00053f4f) popup_midp_note_alarm_window_ParamLimits

0xb656,	// (0x00053f4f) popup_midp_note_alarm_window

0xa88e,	// (0x00053187) data_form_pane_ParamLimits

0x98f1,	// (0x000521ea) form_field_data_pane_g1

0x98fb,	// (0x000521f4) form_field_data_pane_t1_ParamLimits

0xa89a,	// (0x00053193) input_focus_pane_ParamLimits

0xe75e,	// (0x00057057) data_form_wide_pane_ParamLimits

0xe76f,	// (0x00057068) form_field_data_wide_pane_g1

0xe77b,	// (0x00057074) form_field_data_wide_pane_t1_ParamLimits

0xa59f,	// (0x00052e98) input_focus_pane_cp6_ParamLimits

0xa9b8,	// (0x000532b1) input_popup_find_pane_g1_ParamLimits

0xa9b8,	// (0x000532b1) input_popup_find_pane_g1

0xf4c0,	// (0x00057db9) aid_navi_side_left_pane

0xf4d5,	// (0x00057dce) aid_navi_side_right_pane

0x3460,	// (0x0004bd59) bg_popup_window_pane_cp30_ParamLimits

0x3460,	// (0x0004bd59) bg_popup_window_pane_cp30

0x34da,	// (0x0004bdd3) popup_midp_note_alarm_window_g1_ParamLimits

0x34da,	// (0x0004bdd3) popup_midp_note_alarm_window_g1

0x350a,	// (0x0004be03) popup_midp_note_alarm_window_t1_ParamLimits

0x350a,	// (0x0004be03) popup_midp_note_alarm_window_t1

0x35ab,	// (0x0004bea4) popup_midp_note_alarm_window_t2_ParamLimits

0x35ab,	// (0x0004bea4) popup_midp_note_alarm_window_t2

0x3659,	// (0x0004bf52) popup_midp_note_alarm_window_t3_ParamLimits

0x3659,	// (0x0004bf52) popup_midp_note_alarm_window_t3

0x368b,	// (0x0004bf84) popup_midp_note_alarm_window_t4_ParamLimits

0x368b,	// (0x0004bf84) popup_midp_note_alarm_window_t4

0x36b1,	// (0x0004bfaa) popup_midp_note_alarm_window_t5_ParamLimits

0x36b1,	// (0x0004bfaa) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00058198) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00058198) popup_midp_note_alarm_window_t

0x375d,	// (0x0004c056) wait_bar_pane_cp1_ParamLimits

0x375d,	// (0x0004c056) wait_bar_pane_cp1

0x7136,	// (0x0004fa2f) wait_anim_pane_copy1

0x7136,	// (0x0004fa2f) wait_border_pane_copy1

0x3145,	// (0x0004ba3e) wait_border_pane_g1_copy1

0xe795,	// (0x0005708e) form_field_popup_pane_g1

0x9915,	// (0x0005220e) form_field_popup_pane_t1_ParamLimits

0xa89a,	// (0x00053193) input_focus_pane_cp7_ParamLimits

0xa8c8,	// (0x000531c1) list_form_pane_ParamLimits

0xe79d,	// (0x00057096) form_field_popup_wide_pane_g1

0xe7a5,	// (0x0005709e) form_field_popup_wide_pane_t1_ParamLimits

0xa89a,	// (0x00053193) input_focus_pane_cp8_ParamLimits

0xa8d4,	// (0x000531cd) list_form_wide_pane_ParamLimits

0xcb33,	// (0x0005542c) aid_size_cell_graphic_pane

0x9994,	// (0x0005228d) data_form_pane_t1_ParamLimits

0x9a7e,	// (0x00052377) data_form_wide_pane_t1_ParamLimits

0xbae8,	// (0x000543e1) bg_status_flat_pane

0x9eb1,	// (0x000527aa) title_pane_t1_ParamLimits

0x714c,	// (0x0004fa45) title_pane_t2_ParamLimits

0x7172,	// (0x0004fa6b) title_pane_t3_ParamLimits

0xf557,	// (0x00057e50) title_pane_t_ParamLimits

0xae2d,	// (0x00053726) level_1_signal_ParamLimits

0xae3f,	// (0x00053738) level_2_signal_ParamLimits

0xae52,	// (0x0005374b) level_3_signal_ParamLimits

0xae65,	// (0x0005375e) level_4_signal_ParamLimits

0xae78,	// (0x00053771) level_5_signal_ParamLimits

0xae8b,	// (0x00053784) level_6_signal_ParamLimits

0xae9e,	// (0x00053797) level_7_signal_ParamLimits

0xae2d,	// (0x00053726) level_1_battery_ParamLimits

0xae3f,	// (0x00053738) level_2_battery_ParamLimits

0xae52,	// (0x0005374b) level_3_battery_ParamLimits

0xae65,	// (0x0005375e) level_4_battery_ParamLimits

0xae78,	// (0x00053771) level_5_battery_ParamLimits

0xae8b,	// (0x00053784) level_6_battery_ParamLimits

0xae9e,	// (0x00053797) level_7_battery_ParamLimits

0x3365,	// (0x0004bc5e) bg_status_flat_pane_g1

0x336d,	// (0x0004bc66) bg_status_flat_pane_g2

0x3375,	// (0x0004bc6e) bg_status_flat_pane_g3

0x337d,	// (0x0004bc76) bg_status_flat_pane_g4

0x3385,	// (0x0004bc7e) bg_status_flat_pane_g5

0x338d,	// (0x0004bc86) bg_status_flat_pane_g6

0x3395,	// (0x0004bc8e) bg_status_flat_pane_g7

0x9f45,	// (0x0005283e) tabs_3_active_pane_t1_ParamLimits

0x9f45,	// (0x0005283e) tabs_3_passive_pane_t1_ParamLimits

0x9f5f,	// (0x00052858) tabs_4_active_pane_t1_ParamLimits

0x9f5f,	// (0x00052858) tabs_4_1_passive_pane_t1_ParamLimits

0xaa4f,	// (0x00053348) tabs_2_active_pane_t1_ParamLimits

0xaa4f,	// (0x00053348) tabs_2_passive_pane_t1_ParamLimits

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp4_ParamLimits

0xaa61,	// (0x0005335a) tabs_2_long_active_pane_t1_ParamLimits

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp4_ParamLimits

0x0cc2,	// (0x000495bb) list_single_midp_graphic_pane_t1_ParamLimits

0x7184,	// (0x0004fa7d) bg_active_tab_pane_cp5_ParamLimits

0xaa74,	// (0x0005336d) tabs_3_long_active_pane_t1_ParamLimits

0x2635,	// (0x0004af2e) bg_passive_tab_pane_cp5_ParamLimits

0x0cc2,	// (0x000495bb) list_single_midp_graphic_pane_t1

0xbae8,	// (0x000543e1) bg_status_flat_pane_ParamLimits

0x27e9,	// (0x0004b0e2) indicator_pane_cp2_ParamLimits

0x27e9,	// (0x0004b0e2) indicator_pane_cp2

0xc584,	// (0x00054e7d) navi_pane_srt_ParamLimits

0xc584,	// (0x00054e7d) navi_pane_srt

0x2950,	// (0x0004b249) popup_clock_digital_analogue_window_cp1

0xa04e,	// (0x00052947) indicator_pane_t1

0x2306,	// (0x0004abff) copy_highlight_pane

0x2306,	// (0x0004abff) cursor_graphics_pane

0x2306,	// (0x0004abff) graphic_within_text_pane

0x2306,	// (0x0004abff) link_highlight_pane

0x3b84,	// (0x0004c47d) popup_preview_text_window_t5_ParamLimits

0x3b84,	// (0x0004c47d) popup_preview_text_window_t5

0x2437,	// (0x0004ad30) cursor_digital_pane

0x2437,	// (0x0004ad30) cursor_primary_pane

0x2448,	// (0x0004ad41) cursor_primary_small_pane

0x2450,	// (0x0004ad49) cursor_secondary_pane

0x2458,	// (0x0004ad51) cursor_title_pane

0x2437,	// (0x0004ad30) link_highlight_digital_pane

0x243f,	// (0x0004ad38) link_highlight_primary_pane

0x2448,	// (0x0004ad41) link_highlight_primary_small_pane

0x2450,	// (0x0004ad49) link_highlight_secondary_pane

0x2458,	// (0x0004ad51) link_highlight_title_pane

0x2437,	// (0x0004ad30) copy_highlight_digital_pane

0x2437,	// (0x0004ad30) copy_highlight_primary_pane

0x2448,	// (0x0004ad41) copy_highlight_primary_small_pane

0x2450,	// (0x0004ad49) copy_highlight_secondary_pane

0x2458,	// (0x0004ad51) copy_highlight_title_pane

0x2450,	// (0x0004ad49) graphic_text_digital_pane

0x3403,	// (0x0004bcfc) graphic_text_primary_pane

0x340c,	// (0x0004bd05) graphic_text_primary_small_pane

0x2448,	// (0x0004ad41) graphic_text_secondary_pane

0x2437,	// (0x0004ad30) graphic_text_title_pane

0xb078,	// (0x00053971) cursor_primary_pane_g1

0x33f5,	// (0x0004bcee) cursor_text_primary_t1

0xc7de,	// (0x000550d7) cursor_primary_small_pane_g1

0x33e7,	// (0x0004bce0) cursor_text_primary_small_t1

0xc7d4,	// (0x000550cd) cursor_primary_small_pane_g1_copy1

0x33cf,	// (0x0004bcc8) cursor_text_primary_small_t1_copy1

0x33ad,	// (0x0004bca6) cursor_text_title_t1

0xc7ca,	// (0x000550c3) cursor_title_pane_g1

0xb078,	// (0x00053971) cursor_digital_pane_g1

0x246a,	// (0x0004ad63) cursor_text_digital_t1

0x2478,	// (0x0004ad71) link_highlight_primary_pane_g1

0x3356,	// (0x0004bc4f) link_highlight_primary_pane_t1

0x2478,	// (0x0004ad71) link_highlight_primary_small_pane_g1

0x2480,	// (0x0004ad79) link_highlight_primary_small_pane_t1

0x248f,	// (0x0004ad88) link_highlight_secondary_pane_g1

0x2497,	// (0x0004ad90) link_highlight_secondary_pane_t1

0x32ca,	// (0x0004bbc3) link_highlight_title_pane_g1

0x32d2,	// (0x0004bbcb) link_highlight_title_pane_t1

0x32b3,	// (0x0004bbac) link_highlight_digital_pane_g1

0x32bb,	// (0x0004bbb4) link_highlight_digital_pane_t1

0x317b,	// (0x0004ba74) copy_highlight_primary_pane_g1

0x3192,	// (0x0004ba8b) copy_highlight_primary_pane_t1

0x317b,	// (0x0004ba74) copy_highlight_primary_small_pane_g1

0x3183,	// (0x0004ba7c) copy_highlight_primary_small_pane_t1

0x24a6,	// (0x0004ad9f) copy_highlight_secondary_pane_g1

0x24ae,	// (0x0004ada7) copy_highlight_secondary_pane_t1

0x3164,	// (0x0004ba5d) copy_highlight_title_pane_g1

0x316c,	// (0x0004ba65) copy_highlight_title_pane_t1

0x317b,	// (0x0004ba74) copy_highlight_digital_pane_g1

0x446a,	// (0x0004cd63) copy_highlight_digital_pane_t1

0x43be,	// (0x0004ccb7) graphic_text_primary_pane_g1

0x444e,	// (0x0004cd47) graphic_text_primary_pane_t1

0x445c,	// (0x0004cd55) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x000582c7) graphic_text_primary_pane_t

0x442a,	// (0x0004cd23) graphic_text_primary_small_pane_g1

0x4432,	// (0x0004cd2b) graphic_text_primary_small_pane_t1

0x4440,	// (0x0004cd39) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x000582c2) graphic_text_primary_small_pane_t

0x4406,	// (0x0004ccff) graphic_text_secondary_pane_g1

0x440e,	// (0x0004cd07) graphic_text_secondary_pane_t1

0x441c,	// (0x0004cd15) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x000582bd) graphic_text_secondary_pane_t

0x43e2,	// (0x0004ccdb) graphic_text_title_pane_g1

0x43ea,	// (0x0004cce3) graphic_text_title_pane_t1

0x43f8,	// (0x0004ccf1) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x000582b8) graphic_text_title_pane_t

0x43be,	// (0x0004ccb7) graphic_text_digital_pane_g1

0x43c6,	// (0x0004ccbf) graphic_text_digital_pane_t1

0x43d4,	// (0x0004cccd) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x000582b3) graphic_text_digital_pane_t

0x7184,	// (0x0004fa7d) navi_icon_pane_srt_ParamLimits

0x7184,	// (0x0004fa7d) navi_icon_pane_srt

0x7136,	// (0x0004fa2f) navi_midp_pane_srt

0x7136,	// (0x0004fa2f) navi_navi_pane_srt

0x7184,	// (0x0004fa7d) navi_text_pane_srt_ParamLimits

0x7184,	// (0x0004fa7d) navi_text_pane_srt

0x4389,	// (0x0004cc82) navi_navi_icon_text_pane_srt

0x4391,	// (0x0004cc8a) navi_navi_pane_srt_g1_ParamLimits

0x4391,	// (0x0004cc8a) navi_navi_pane_srt_g1

0x43a3,	// (0x0004cc9c) navi_navi_pane_srt_g2_ParamLimits

0x43a3,	// (0x0004cc9c) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x000582ae) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x000582ae) navi_navi_pane_srt_g

0x43b5,	// (0x0004ccae) navi_navi_tabs_pane_srt

0x4389,	// (0x0004cc82) navi_navi_text_pane_srt

0x4389,	// (0x0004cc82) navi_navi_volume_pane_srt

0x437a,	// (0x0004cc73) navi_navi_text_pane_srt_t1

0x10b6,	// (0x000499af) navi_navi_volume_pane_srt_g1

0x10be,	// (0x000499b7) volume_small_pane_srt_ParamLimits

0x10be,	// (0x000499b7) volume_small_pane_srt

0x03ea,	// (0x00048ce3) volume_small_pane_srt_g1_ParamLimits

0x03ea,	// (0x00048ce3) volume_small_pane_srt_g1

0x03fa,	// (0x00048cf3) volume_small_pane_srt_g2_ParamLimits

0x03fa,	// (0x00048cf3) volume_small_pane_srt_g2

0x040b,	// (0x00048d04) volume_small_pane_srt_g3_ParamLimits

0x040b,	// (0x00048d04) volume_small_pane_srt_g3

0x041c,	// (0x00048d15) volume_small_pane_srt_g4_ParamLimits

0x041c,	// (0x00048d15) volume_small_pane_srt_g4

0x042d,	// (0x00048d26) volume_small_pane_srt_g5_ParamLimits

0x042d,	// (0x00048d26) volume_small_pane_srt_g5

0x043e,	// (0x00048d37) volume_small_pane_srt_g6_ParamLimits

0x043e,	// (0x00048d37) volume_small_pane_srt_g6

0x044f,	// (0x00048d48) volume_small_pane_srt_g7_ParamLimits

0x044f,	// (0x00048d48) volume_small_pane_srt_g7

0x0460,	// (0x00048d59) volume_small_pane_srt_g8_ParamLimits

0x0460,	// (0x00048d59) volume_small_pane_srt_g8

0x0471,	// (0x00048d6a) volume_small_pane_srt_g9_ParamLimits

0x0471,	// (0x00048d6a) volume_small_pane_srt_g9

0x0482,	// (0x00048d7b) volume_small_pane_srt_g10_ParamLimits

0x0482,	// (0x00048d7b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005805b) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005805b) volume_small_pane_srt_g

0xa39b,	// (0x00052c94) query_popup_data_pane_cp2

0x4360,	// (0x0004cc59) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4360,	// (0x0004cc59) navi_navi_icon_text_pane_srt_t1

0x3403,	// (0x0004bcfc) navi_tabs_2_long_pane_srt

0x3403,	// (0x0004bcfc) navi_tabs_2_pane_srt

0x3403,	// (0x0004bcfc) navi_tabs_3_long_pane_srt

0x3403,	// (0x0004bcfc) navi_tabs_3_pane_srt

0x3403,	// (0x0004bcfc) navi_tabs_4_pane_srt

0x1096,	// (0x0004998f) tabs_2_active_pane_srt_ParamLimits

0x1096,	// (0x0004998f) tabs_2_active_pane_srt

0x10a6,	// (0x0004999f) tabs_2_passive_pane_srt_ParamLimits

0x10a6,	// (0x0004999f) tabs_2_passive_pane_srt

0x2bd9,	// (0x0004b4d2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_passive_tab_pane_cp1_srt

0x432c,	// (0x0004cc25) bg_passive_tab_pane_g1_cp1_srt

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp1_srt

0x4335,	// (0x0004cc2e) bg_passive_tab_pane_g3_cp1_srt

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp1_srt_ParamLimits

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp1_srt

0x433e,	// (0x0004cc37) tabs_2_active_pane_srt_g1

0xcb75,	// (0x0005546e) tabs_2_active_pane_srt_t1_ParamLimits

0xcb75,	// (0x0005546e) tabs_2_active_pane_srt_t1

0x432c,	// (0x0004cc25) bg_active_tab_pane_g1_cp1_srt

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp1_srt

0x4335,	// (0x0004cc2e) bg_active_tab_pane_g3_cp1_srt

0x1063,	// (0x0004995c) tabs_3_active_pane_srt_ParamLimits

0x1063,	// (0x0004995c) tabs_3_active_pane_srt

0x1074,	// (0x0004996d) tabs_3_passive_pane_cp_srt_ParamLimits

0x1074,	// (0x0004996d) tabs_3_passive_pane_cp_srt

0x1085,	// (0x0004997e) tabs_3_passive_pane_srt_ParamLimits

0x1085,	// (0x0004997e) tabs_3_passive_pane_srt

0x2bd9,	// (0x0004b4d2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_passive_tab_pane_cp2_srt

0x24bd,	// (0x0004adb6) bg_passive_tab_pane_g1_cp2_srt

0xe9cf,	// (0x000572c8) bg_passive_tab_pane_g2_cp2_srt

0x24c6,	// (0x0004adbf) bg_passive_tab_pane_g3_cp2_srt

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp2_srt_ParamLimits

0x71c0,	// (0x0004fab9) bg_active_tab_pane_cp2_srt

0x4312,	// (0x0004cc0b) tabs_3_active_pane_srt_g1

0xcb5f,	// (0x00055458) tabs_3_active_pane_srt_t1_ParamLimits

0xcb5f,	// (0x00055458) tabs_3_active_pane_srt_t1

0x24bd,	// (0x0004adb6) bg_active_tab_pane_g1_cp2_srt

0xe9cf,	// (0x000572c8) bg_active_tab_pane_g2_cp2_srt

0x24c6,	// (0x0004adbf) bg_active_tab_pane_g3_cp2_srt

0x101b,	// (0x00049914) tabs_4_active_pane_srt_ParamLimits

0x101b,	// (0x00049914) tabs_4_active_pane_srt

0x102d,	// (0x00049926) tabs_4_passive_pane_cp2_srt_ParamLimits

0x102d,	// (0x00049926) tabs_4_passive_pane_cp2_srt

0x0601,	// (0x00048efa) aid_size_cell_toolbar

0x3f2f,	// (0x0004c828) main_idle_act_pane_ParamLimits

0x07d4,	// (0x000490cd) popup_large_graphic_colour_window_ParamLimits

0xb9aa,	// (0x000542a3) popup_toolbar_window_ParamLimits

0xb9aa,	// (0x000542a3) popup_toolbar_window

0x4101,	// (0x0004c9fa) list_single_graphic_2heading_pane_ParamLimits

0x4101,	// (0x0004c9fa) list_single_graphic_2heading_pane

0xac24,	// (0x0005351d) aid_size_cell_apps_grid_lsc_pane

0xac36,	// (0x0005352f) aid_size_cell_apps_grid_prt_pane

0x2635,	// (0x0004af2e) bg_wml_button_pane_cp1_ParamLimits

0x2635,	// (0x0004af2e) bg_wml_button_pane_cp1

0xc786,	// (0x0005507f) form_midp_field_text_pane_t1_ParamLimits

0x2bd9,	// (0x0004b4d2) input_focus_pane_cp050_ParamLimits

0x2e12,	// (0x0004b70b) list_midp_form_text_pane_ParamLimits

0x2dc4,	// (0x0004b6bd) input_focus_pane_cp051_ParamLimits

0x2dd8,	// (0x0004b6d1) list_midp_choice_pane_ParamLimits

0x2c92,	// (0x0004b58b) list_single_2graphic_pane_cp3_ParamLimits

0x2c92,	// (0x0004b58b) list_single_2graphic_pane_cp3

0x2ca8,	// (0x0004b5a1) list_single_midp_graphic_pane_ParamLimits

0x2ca8,	// (0x0004b5a1) list_single_midp_graphic_pane

0xec02,	// (0x000574fb) list_single_graphic_2heading_pane_g1_ParamLimits

0xec02,	// (0x000574fb) list_single_graphic_2heading_pane_g1

0xec0e,	// (0x00057507) list_single_graphic_2heading_pane_g4_ParamLimits

0xec0e,	// (0x00057507) list_single_graphic_2heading_pane_g4

0xec1a,	// (0x00057513) list_single_graphic_2heading_pane_g5_ParamLimits

0xec1a,	// (0x00057513) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x000580ae) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x000580ae) list_single_graphic_2heading_pane_g

0xec26,	// (0x0005751f) list_single_graphic_2heading_pane_t1_ParamLimits

0xec26,	// (0x0005751f) list_single_graphic_2heading_pane_t1

0xec3a,	// (0x00057533) list_single_graphic_2heading_pane_t2_ParamLimits

0xec3a,	// (0x00057533) list_single_graphic_2heading_pane_t2

0xec56,	// (0x0005754f) list_single_graphic_2heading_pane_t3_ParamLimits

0xec56,	// (0x0005754f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x000580b5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x000580b5) list_single_graphic_2heading_pane_t

0x2aa3,	// (0x0004b39c) bg_popup_sub_pane_cp2

0x2acd,	// (0x0004b3c6) grid_toobar_pane

0x0c3a,	// (0x00049533) cell_toolbar_pane_ParamLimits

0x0c3a,	// (0x00049533) cell_toolbar_pane

0x2b09,	// (0x0004b402) cell_toolbar_pane_g1_ParamLimits

0x2b09,	// (0x0004b402) cell_toolbar_pane_g1

0x2b1d,	// (0x0004b416) cell_toolbar_pane_g2_ParamLimits

0x2b1d,	// (0x0004b416) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x000580c3) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x000580c3) cell_toolbar_pane_g

0x2b3f,	// (0x0004b438) grid_highlight_pane_cp2_ParamLimits

0x2b3f,	// (0x0004b438) grid_highlight_pane_cp2

0x2b59,	// (0x0004b452) toolbar_button_pane

0x2b65,	// (0x0004b45e) toolbar_button_pane_g1

0x2b6d,	// (0x0004b466) toolbar_button_pane_g2

0x2b75,	// (0x0004b46e) toolbar_button_pane_g3

0x2b7d,	// (0x0004b476) toolbar_button_pane_g4

0x2b85,	// (0x0004b47e) toolbar_button_pane_g5

0x2b8d,	// (0x0004b486) toolbar_button_pane_g6

0x2b95,	// (0x0004b48e) toolbar_button_pane_g7

0x2b9d,	// (0x0004b496) toolbar_button_pane_g8

0x2ba5,	// (0x0004b49e) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x000580c8) toolbar_button_pane_g

0x0c7e,	// (0x00049577) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0c7e,	// (0x00049577) list_single_2graphic_pane_g1_cp3

0xbc7e,	// (0x00054577) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc7e,	// (0x00054577) list_single_2graphic_pane_g2_cp3

0xeb6b,	// (0x00057464) list_single_2graphic_pane_g3_cp3

0x0c9b,	// (0x00049594) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0c9b,	// (0x00049594) list_single_2graphic_pane_g4_cp3

0x0ca7,	// (0x000495a0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0ca7,	// (0x000495a0) list_single_2graphic_pane_t1_cp3

0xeb5f,	// (0x00057458) list_single_midp_graphic_pane_g2_ParamLimits

0xeb5f,	// (0x00057458) list_single_midp_graphic_pane_g2

0xebea,	// (0x000574e3) aid_zoom_text_primary

0xebf2,	// (0x000574eb) aid_zoom_text_secondary

0xb0d0,	// (0x000539c9) status_small_pane_g7_ParamLimits

0xb0d0,	// (0x000539c9) status_small_pane_g7

0xb0f3,	// (0x000539ec) status_small_pane_t1_ParamLimits

0x9e81,	// (0x0005277a) title_pane_g2

0x0003,

0xf54e,	// (0x00057e47) title_pane_g

0xa447,	// (0x00052d40) aid_size_cell_colour_1_pane_ParamLimits

0xa447,	// (0x00052d40) aid_size_cell_colour_1_pane

0xa45b,	// (0x00052d54) aid_size_cell_colour_2_pane_ParamLimits

0xa45b,	// (0x00052d54) aid_size_cell_colour_2_pane

0xa46f,	// (0x00052d68) aid_size_cell_colour_3_pane_ParamLimits

0xa46f,	// (0x00052d68) aid_size_cell_colour_3_pane

0xa483,	// (0x00052d7c) aid_size_cell_colour_4_pane_ParamLimits

0xa483,	// (0x00052d7c) aid_size_cell_colour_4_pane

0xf3fc,	// (0x00057cf5) title_pane_stacon_g1_ParamLimits

0xf3fc,	// (0x00057cf5) title_pane_stacon_g1

0x31e9,	// (0x0004bae2) popup_note_wait_window_g3_ParamLimits

0x31e9,	// (0x0004bae2) popup_note_wait_window_g3

0x3260,	// (0x0004bb59) popup_note_wait_window_t5_ParamLimits

0x3260,	// (0x0004bb59) popup_note_wait_window_t5

0x7136,	// (0x0004fa2f) main_feb_china_hwr_fs_writing_pane

0xb343,	// (0x00053c3c) popup_feb_china_hwr_fs_window_ParamLimits

0xb343,	// (0x00053c3c) popup_feb_china_hwr_fs_window

0xbc8f,	// (0x00054588) aid_size_cell_hwr_fs_ParamLimits

0xbc8f,	// (0x00054588) aid_size_cell_hwr_fs

0x2bd9,	// (0x0004b4d2) bg_popup_sub_pane_cp3_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_popup_sub_pane_cp3

0xbca4,	// (0x0005459d) grid_hwr_fs_pane_ParamLimits

0xbca4,	// (0x0005459d) grid_hwr_fs_pane

0x0d1d,	// (0x00049616) linegrid_hwr_fs_pane_ParamLimits

0x0d1d,	// (0x00049616) linegrid_hwr_fs_pane

0xbcbc,	// (0x000545b5) cell_hwr_fs_pane_ParamLimits

0xbcbc,	// (0x000545b5) cell_hwr_fs_pane

0x2be5,	// (0x0004b4de) linegrid_hwr_fs_pane_g1_ParamLimits

0x2be5,	// (0x0004b4de) linegrid_hwr_fs_pane_g1

0xc727,	// (0x00055020) linegrid_hwr_fs_pane_g2_ParamLimits

0xc727,	// (0x00055020) linegrid_hwr_fs_pane_g2

0x2c03,	// (0x0004b4fc) linegrid_hwr_fs_pane_g3_ParamLimits

0x2c03,	// (0x0004b4fc) linegrid_hwr_fs_pane_g3

0x0d51,	// (0x0004964a) linegrid_hwr_fs_pane_g4_ParamLimits

0x0d51,	// (0x0004964a) linegrid_hwr_fs_pane_g4

0x0d6f,	// (0x00049668) linegrid_hwr_fs_pane_g5_ParamLimits

0x0d6f,	// (0x00049668) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x000580ee) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x000580ee) linegrid_hwr_fs_pane_g

0x2c0f,	// (0x0004b508) cell_hwr_fs_pane_g1_ParamLimits

0x2c0f,	// (0x0004b508) cell_hwr_fs_pane_g1

0x29de,	// (0x0004b2d7) cell_hwr_fs_pane_g2_ParamLimits

0x29de,	// (0x0004b2d7) cell_hwr_fs_pane_g2

0xc739,	// (0x00055032) cell_hwr_fs_pane_g3_ParamLimits

0xc739,	// (0x00055032) cell_hwr_fs_pane_g3

0xc746,	// (0x0005503f) cell_hwr_fs_pane_g4_ParamLimits

0xc746,	// (0x0005503f) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x000580f9) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x000580f9) cell_hwr_fs_pane_g

0xbce2,	// (0x000545db) cell_hwr_fs_pane_t1

0x7136,	// (0x0004fa2f) grid_highlight_pane_cp6

0x7136,	// (0x0004fa2f) main_idle_act2_pane

0xa9f4,	// (0x000532ed) aid_inside_area_popup_secondary

0xc7fe,	// (0x000550f7) aid_inside_area_window_primary_ParamLimits

0xc7fe,	// (0x000550f7) aid_inside_area_window_primary

0x4479,	// (0x0004cd72) ai2_news_ticker_pane

0x4481,	// (0x0004cd7a) aid_size_cell_ai1_link_ParamLimits

0x4481,	// (0x0004cd7a) aid_size_cell_ai1_link

0x449b,	// (0x0004cd94) popup_ai2_data_window_ParamLimits

0x449b,	// (0x0004cd94) popup_ai2_data_window

0x44b9,	// (0x0004cdb2) popup_ai2_link_window_ParamLimits

0x44b9,	// (0x0004cdb2) popup_ai2_link_window

0x2bd9,	// (0x0004b4d2) bg_popup_sub_pane_cp4_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_popup_sub_pane_cp4

0x44cf,	// (0x0004cdc8) grid_ai2_link_pane_ParamLimits

0x44cf,	// (0x0004cdc8) grid_ai2_link_pane

0x44e6,	// (0x0004cddf) popup_ai2_link_window_g1_ParamLimits

0x44e6,	// (0x0004cddf) popup_ai2_link_window_g1

0x44f2,	// (0x0004cdeb) popup_ai2_link_window_g2_ParamLimits

0x44f2,	// (0x0004cdeb) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x000582cc) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x000582cc) popup_ai2_link_window_g

0x4503,	// (0x0004cdfc) ai2_mp_button_pane

0x450b,	// (0x0004ce04) ai2_mp_volume_pane

0x2dc4,	// (0x0004b6bd) bg_popup_sub_pane_cp5_ParamLimits

0x2dc4,	// (0x0004b6bd) bg_popup_sub_pane_cp5

0x4513,	// (0x0004ce0c) heading_ai2_gene_pane_ParamLimits

0x4513,	// (0x0004ce0c) heading_ai2_gene_pane

0x451f,	// (0x0004ce18) list_ai2_gene_pane_ParamLimits

0x451f,	// (0x0004ce18) list_ai2_gene_pane

0x4567,	// (0x0004ce60) cell_ai2_link_pane_ParamLimits

0x4567,	// (0x0004ce60) cell_ai2_link_pane

0x457d,	// (0x0004ce76) cell_ai2_link_pane_g1

0x7136,	// (0x0004fa2f) grid_highlight_pane_cp7

0x10d3,	// (0x000499cc) ai2_mp_volume_pane_g1

0x4650,	// (0x0004cf49) ai2_mp_volume_pane_g2

0x45c5,	// (0x0004cebe) list_ai2_gene_pane_t1

0x4658,	// (0x0004cf51) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x000582e5) ai2_mp_volume_pane_g

0x10db,	// (0x000499d4) volume_small_pane_cp3

0x4660,	// (0x0004cf59) aid_size_cell_ai2_button

0x4668,	// (0x0004cf61) grid_ai2_button_pane

0x4671,	// (0x0004cf6a) cell_ai2_button_pane_ParamLimits

0x4671,	// (0x0004cf6a) cell_ai2_button_pane

0x712c,	// (0x0004fa25) cell_ai2_button_pane_g1

0x7136,	// (0x0004fa2f) grid_highlight_pane_cp8

0x4610,	// (0x0004cf09) ai2_gene_pane_t1_ParamLimits

0x4610,	// (0x0004cf09) ai2_gene_pane_t1

0xb2bf,	// (0x00053bb8) aid_height_parent_landscape

0xc9a5,	// (0x0005529e) aid_height_set_list

0x3f2f,	// (0x0004c828) aid_size_parent

0xcb33,	// (0x0005542c) aid_size_cell_graphic_pane_ParamLimits

0x452f,	// (0x0004ce28) popup_ai2_data_window_g1_ParamLimits

0x452f,	// (0x0004ce28) popup_ai2_data_window_g1

0x453b,	// (0x0004ce34) ai2_news_ticker_pane_g1

0x4543,	// (0x0004ce3c) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x000582d1) ai2_news_ticker_pane_g

0x454b,	// (0x0004ce44) ai2_news_ticker_pane_t1

0x4559,	// (0x0004ce52) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x000582d6) ai2_news_ticker_pane_t

0x4586,	// (0x0004ce7f) heading_ai2_gene_pane_g1

0x458e,	// (0x0004ce87) heading_ai2_gene_pane_t1_ParamLimits

0x458e,	// (0x0004ce87) heading_ai2_gene_pane_t1

0x45a3,	// (0x0004ce9c) list_highlight_pane_cp6

0x45ab,	// (0x0004cea4) ai2_gene_pane_ParamLimits

0x45ab,	// (0x0004cea4) ai2_gene_pane

0x45d3,	// (0x0004cecc) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x000582db) list_ai2_gene_pane_t

0x45e1,	// (0x0004ceda) list_highlight_pane_cp8_ParamLimits

0x45e1,	// (0x0004ceda) list_highlight_pane_cp8

0x45f2,	// (0x0004ceeb) ai2_gene_pane_g1_ParamLimits

0x45f2,	// (0x0004ceeb) ai2_gene_pane_g1

0x4604,	// (0x0004cefd) ai2_gene_pane_g2_ParamLimits

0x4604,	// (0x0004cefd) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x000582e0) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x000582e0) ai2_gene_pane_g

0xa7c4,	// (0x000530bd) scroll_pane_cp12

0xb27c,	// (0x00053b75) control_pane_t3_ParamLimits

0xb27c,	// (0x00053b75) control_pane_t3

0xb0e4,	// (0x000539dd) status_small_pane_g8_ParamLimits

0xb0e4,	// (0x000539dd) status_small_pane_g8

0xb3e5,	// (0x00053cde) popup_find_window_ParamLimits

0xb696,	// (0x00053f8f) popup_note_image_window_ParamLimits

0xec6e,	// (0x00057567) list_double2_graphic_pane_vc_g1_ParamLimits

0xec6e,	// (0x00057567) list_double2_graphic_pane_vc_g1

0x2277,	// (0x0004ab70) list_double2_graphic_pane_vc_g2_ParamLimits

0x2277,	// (0x0004ab70) list_double2_graphic_pane_vc_g2

0x0c6a,	// (0x00049563) list_double2_graphic_pane_vc_g3_ParamLimits

0x0c6a,	// (0x00049563) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000580bc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000580bc) list_double2_graphic_pane_vc_g

0xec7a,	// (0x00057573) list_double2_graphic_pane_vc_t1_ParamLimits

0xec7a,	// (0x00057573) list_double2_graphic_pane_vc_t1

0x2277,	// (0x0004ab70) list_single_heading_pane_vc_g1_ParamLimits

0x2277,	// (0x0004ab70) list_single_heading_pane_vc_g1

0x0c6a,	// (0x00049563) list_single_heading_pane_vc_g2_ParamLimits

0x0c6a,	// (0x00049563) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_single_heading_pane_vc_g

0xec90,	// (0x00057589) list_single_heading_pane_vc_t1_ParamLimits

0xec90,	// (0x00057589) list_single_heading_pane_vc_t1

0xeca6,	// (0x0005759f) list_single_heading_pane_vc_t2_ParamLimits

0xeca6,	// (0x0005759f) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x000580dd) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x000580dd) list_single_heading_pane_vc_t

0x0cd8,	// (0x000495d1) list_setting_number_pane_vc_g1_ParamLimits

0x0cd8,	// (0x000495d1) list_setting_number_pane_vc_g1

0x0ce4,	// (0x000495dd) list_setting_number_pane_vc_g2_ParamLimits

0x0ce4,	// (0x000495dd) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x000580e2) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x000580e2) list_setting_number_pane_vc_g

0xecb8,	// (0x000575b1) list_setting_number_pane_vc_t1_ParamLimits

0xecb8,	// (0x000575b1) list_setting_number_pane_vc_t1

0xeccc,	// (0x000575c5) list_setting_number_pane_vc_t2_ParamLimits

0xeccc,	// (0x000575c5) list_setting_number_pane_vc_t2

0xece8,	// (0x000575e1) list_setting_number_pane_vc_t3_ParamLimits

0xece8,	// (0x000575e1) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x000580e7) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x000580e7) list_setting_number_pane_vc_t

0xed16,	// (0x0005760f) set_value_pane_vc_ParamLimits

0xed16,	// (0x0005760f) set_value_pane_vc

0x4101,	// (0x0004c9fa) list_double2_graphic_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double2_graphic_pane_vc

0x4101,	// (0x0004c9fa) list_double2_large_graphic_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double2_large_graphic_pane_vc

0x4101,	// (0x0004c9fa) list_double2_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double2_pane_vc

0x4101,	// (0x0004c9fa) list_double_graphic_heading_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double_graphic_heading_pane_vc

0x4101,	// (0x0004c9fa) list_double_graphic_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double_graphic_pane_vc

0x4101,	// (0x0004c9fa) list_double_heading_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double_heading_pane_vc

0x4115,	// (0x0004ca0e) list_double_large_graphic_pane_vc_ParamLimits

0x4115,	// (0x0004ca0e) list_double_large_graphic_pane_vc

0x4101,	// (0x0004c9fa) list_double_number_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double_number_pane_vc

0x4101,	// (0x0004c9fa) list_double_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double_pane_vc

0x4101,	// (0x0004c9fa) list_double_time_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_double_time_pane_vc

0x4101,	// (0x0004c9fa) list_setting_number_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_setting_number_pane_vc

0x4101,	// (0x0004c9fa) list_setting_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_setting_pane_vc

0x4101,	// (0x0004c9fa) list_single_graphic_heading_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_single_graphic_heading_pane_vc

0x4101,	// (0x0004c9fa) list_single_heading_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_single_heading_pane_vc

0x4101,	// (0x0004c9fa) list_single_number_heading_pane_vc_ParamLimits

0x4101,	// (0x0004c9fa) list_single_number_heading_pane_vc

0xec6e,	// (0x00057567) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xec6e,	// (0x00057567) list_double_graphic_heading_pane_vc_g1

0x10e4,	// (0x000499dd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x10e4,	// (0x000499dd) list_double_graphic_heading_pane_vc_g2

0x10f0,	// (0x000499e9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x10f0,	// (0x000499e9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x000582ec) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x000582ec) list_double_graphic_heading_pane_vc_g

0xed4d,	// (0x00057646) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xed4d,	// (0x00057646) list_double_graphic_heading_pane_vc_t1

0xed63,	// (0x0005765c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xed63,	// (0x0005765c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x000582f3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x000582f3) list_double_graphic_heading_pane_vc_t

0x0cd8,	// (0x000495d1) list_setting_pane_vc_g1_ParamLimits

0x0cd8,	// (0x000495d1) list_setting_pane_vc_g1

0x0ce4,	// (0x000495dd) list_setting_pane_vc_g2_ParamLimits

0x0ce4,	// (0x000495dd) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x000580e2) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x000580e2) list_setting_pane_vc_g

0xed81,	// (0x0005767a) list_setting_pane_vc_t1_ParamLimits

0xed81,	// (0x0005767a) list_setting_pane_vc_t1

0xed9d,	// (0x00057696) list_setting_pane_vc_t2_ParamLimits

0xed9d,	// (0x00057696) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x00058336) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x00058336) list_setting_pane_vc_t

0xed16,	// (0x0005760f) set_value_pane_cp_vc_ParamLimits

0xed16,	// (0x0005760f) set_value_pane_cp_vc

0x2277,	// (0x0004ab70) list_single_number_heading_pane_vc_g1_ParamLimits

0x2277,	// (0x0004ab70) list_single_number_heading_pane_vc_g1

0x0c6a,	// (0x00049563) list_single_number_heading_pane_vc_g2_ParamLimits

0x0c6a,	// (0x00049563) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_single_number_heading_pane_vc_g

0xedb9,	// (0x000576b2) list_single_number_heading_pane_vc_t1_ParamLimits

0xedb9,	// (0x000576b2) list_single_number_heading_pane_vc_t1

0xe6bf,	// (0x00056fb8) list_single_number_heading_pane_vc_t2_ParamLimits

0xe6bf,	// (0x00056fb8) list_single_number_heading_pane_vc_t2

0xe6d1,	// (0x00056fca) list_single_number_heading_pane_vc_t3_ParamLimits

0xe6d1,	// (0x00056fca) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0005833b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0005833b) list_single_number_heading_pane_vc_t

0xec6e,	// (0x00057567) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec6e,	// (0x00057567) list_single_graphic_heading_pane_vc_g1

0x2277,	// (0x0004ab70) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2277,	// (0x0004ab70) list_single_graphic_heading_pane_vc_g4

0x0c6a,	// (0x00049563) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0c6a,	// (0x00049563) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000580bc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000580bc) list_single_graphic_heading_pane_vc_g

0xedcf,	// (0x000576c8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xedcf,	// (0x000576c8) list_single_graphic_heading_pane_vc_t1

0xede5,	// (0x000576de) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xede5,	// (0x000576de) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00058342) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00058342) list_single_graphic_heading_pane_vc_t

0x2277,	// (0x0004ab70) list_double2_pane_vc_g1_ParamLimits

0x2277,	// (0x0004ab70) list_double2_pane_vc_g1

0x0c6a,	// (0x00049563) list_double2_pane_vc_g2_ParamLimits

0x0c6a,	// (0x00049563) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_double2_pane_vc_g

0xed37,	// (0x00057630) list_double2_pane_vc_t1_ParamLimits

0xed37,	// (0x00057630) list_double2_pane_vc_t1

0x10fc,	// (0x000499f5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x10fc,	// (0x000499f5) list_double2_large_graphic_pane_vc_g1

0x2277,	// (0x0004ab70) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2277,	// (0x0004ab70) list_double2_large_graphic_pane_vc_g2

0x0c6a,	// (0x00049563) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0c6a,	// (0x00049563) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00057ee3) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00057ee3) list_double2_large_graphic_pane_vc_g

0xe6e3,	// (0x00056fdc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe6e3,	// (0x00056fdc) list_double2_large_graphic_pane_vc_t1

0x1108,	// (0x00049a01) list_double_time_pane_vc_g1_ParamLimits

0x1108,	// (0x00049a01) list_double_time_pane_vc_g1

0x1114,	// (0x00049a0d) list_double_time_pane_vc_g2_ParamLimits

0x1114,	// (0x00049a0d) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00058347) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00058347) list_double_time_pane_vc_g

0xedf7,	// (0x000576f0) list_double_time_pane_vc_t1_ParamLimits

0xedf7,	// (0x000576f0) list_double_time_pane_vc_t1

0xee21,	// (0x0005771a) list_double_time_pane_vc_t2_ParamLimits

0xee21,	// (0x0005771a) list_double_time_pane_vc_t2

0xee6a,	// (0x00057763) list_double_time_pane_vc_t3_ParamLimits

0xee6a,	// (0x00057763) list_double_time_pane_vc_t3

0xee7c,	// (0x00057775) list_double_time_pane_vc_t4_ParamLimits

0xee7c,	// (0x00057775) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0005834c) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0005834c) list_double_time_pane_vc_t

0x2277,	// (0x0004ab70) list_double_pane_vc_g1_ParamLimits

0x2277,	// (0x0004ab70) list_double_pane_vc_g1

0x0c6a,	// (0x00049563) list_double_pane_vc_g2_ParamLimits

0x0c6a,	// (0x00049563) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_double_pane_vc_g

0xf065,	// (0x0005795e) list_double_pane_vc_t1_ParamLimits

0xf065,	// (0x0005795e) list_double_pane_vc_t1

0xf079,	// (0x00057972) list_double_pane_vc_t2_ParamLimits

0xf079,	// (0x00057972) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00058355) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00058355) list_double_pane_vc_t

0x2277,	// (0x0004ab70) list_double_number_pane_vc_g1_ParamLimits

0x2277,	// (0x0004ab70) list_double_number_pane_vc_g1

0x0c6a,	// (0x00049563) list_double_number_pane_vc_g2_ParamLimits

0x0c6a,	// (0x00049563) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x00057ecb) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x00057ecb) list_double_number_pane_vc_g

0xf053,	// (0x0005794c) list_double_number_pane_vc_t1_ParamLimits

0xf053,	// (0x0005794c) list_double_number_pane_vc_t1

0xf08f,	// (0x00057988) list_double_number_pane_vc_t2_ParamLimits

0xf08f,	// (0x00057988) list_double_number_pane_vc_t2

0xf079,	// (0x00057972) list_double_number_pane_vc_t3_ParamLimits

0xf079,	// (0x00057972) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0005835a) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0005835a) list_double_number_pane_vc_t

0x1120,	// (0x00049a19) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1120,	// (0x00049a19) list_double_large_graphic_pane_vc_g1

0x1142,	// (0x00049a3b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1142,	// (0x00049a3b) list_double_large_graphic_pane_vc_g2

0x1156,	// (0x00049a4f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1156,	// (0x00049a4f) list_double_large_graphic_pane_vc_g3

0xf0a3,	// (0x0005799c) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0a3,	// (0x0005799c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00058361) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00058361) list_double_large_graphic_pane_vc_g

0xf0b2,	// (0x000579ab) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf0b2,	// (0x000579ab) list_double_large_graphic_pane_vc_t1

0xf0ce,	// (0x000579c7) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf0ce,	// (0x000579c7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0005836a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0005836a) list_double_large_graphic_pane_vc_t

0x10e4,	// (0x000499dd) list_double_heading_pane_vc_g1_ParamLimits

0x10e4,	// (0x000499dd) list_double_heading_pane_vc_g1

0x10f0,	// (0x000499e9) list_double_heading_pane_vc_g2_ParamLimits

0x10f0,	// (0x000499e9) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0005836f) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0005836f) list_double_heading_pane_vc_g

0xf0ee,	// (0x000579e7) list_double_heading_pane_vc_t1_ParamLimits

0xf0ee,	// (0x000579e7) list_double_heading_pane_vc_t1

0xf100,	// (0x000579f9) list_double_heading_pane_vc_t2_ParamLimits

0xf100,	// (0x000579f9) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x00058374) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x00058374) list_double_heading_pane_vc_t

0xf118,	// (0x00057a11) list_double_graphic_pane_vc_g1_ParamLimits

0xf118,	// (0x00057a11) list_double_graphic_pane_vc_g1

0x1165,	// (0x00049a5e) list_double_graphic_pane_vc_g2_ParamLimits

0x1165,	// (0x00049a5e) list_double_graphic_pane_vc_g2

0x2277,	// (0x0004ab70) list_double_graphic_pane_vc_g3_ParamLimits

0x2277,	// (0x0004ab70) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x00058379) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x00058379) list_double_graphic_pane_vc_g

0xf124,	// (0x00057a1d) list_double_graphic_pane_vc_t1_ParamLimits

0xf124,	// (0x00057a1d) list_double_graphic_pane_vc_t1

0xf14e,	// (0x00057a47) list_double_graphic_pane_vc_t2_ParamLimits

0xf14e,	// (0x00057a47) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00058382) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00058382) list_double_graphic_pane_vc_t

0xeea8,	// (0x000577a1) aid_size_cell_fastswap

0x9c5a,	// (0x00052553) aid_size_cell_touch_ParamLimits

0x9c5a,	// (0x00052553) aid_size_cell_touch

0xf025,	// (0x0005791e) popup_fast_swap_wide_window_ParamLimits

0xf025,	// (0x0005791e) popup_fast_swap_wide_window

0x9e18,	// (0x00052711) touch_pane_ParamLimits

0x9e18,	// (0x00052711) touch_pane

0xa886,	// (0x0005317f) button_value_adjust_pane_cp2

0xe707,	// (0x00057000) button_value_adjust_pane_cp4

0xe70f,	// (0x00057008) form_field_data_pane_cp2

0x98c5,	// (0x000521be) form_field_data_wide_pane_cp2

0xad39,	// (0x00053632) bg_scroll_pane_ParamLimits

0x005c,	// (0x00048955) scroll_handle_pane_ParamLimits

0x0070,	// (0x00048969) scroll_sc2_down_pane_ParamLimits

0x0070,	// (0x00048969) scroll_sc2_down_pane

0xad6a,	// (0x00053663) scroll_sc2_up_pane_ParamLimits

0xad6a,	// (0x00053663) scroll_sc2_up_pane

0xccb5,	// (0x000555ae) grid_wheel_folder_pane_g1_ParamLimits

0xccb5,	// (0x000555ae) grid_wheel_folder_pane_g1

0x0377,	// (0x00048c70) clock_nsta_pane_cp2_ParamLimits

0x0377,	// (0x00048c70) clock_nsta_pane_cp2

0xafc2,	// (0x000538bb) listscroll_midp_pane_ParamLimits

0xafce,	// (0x000538c7) midp_canvas_pane

0x2605,	// (0x0004aefe) nsta_clock_indic_pane

0x2641,	// (0x0004af3a) listscroll_form_pane_vc

0x2649,	// (0x0004af42) listscroll_set_pane_vc_ParamLimits

0x2649,	// (0x0004af42) listscroll_set_pane_vc

0xbb10,	// (0x00054409) clock_nsta_pane

0xbb3a,	// (0x00054433) indicator_nsta_pane

0x2aa3,	// (0x0004b39c) bg_popup_sub_pane_cp2_ParamLimits

0x2ab7,	// (0x0004b3b0) find_pane_cp2_ParamLimits

0x2ab7,	// (0x0004b3b0) find_pane_cp2

0x2acd,	// (0x0004b3c6) grid_toobar_pane_ParamLimits

0x2bad,	// (0x0004b4a6) list_form_gen_pane_vc_ParamLimits

0x2bad,	// (0x0004b4a6) list_form_gen_pane_vc

0x2bc3,	// (0x0004b4bc) scroll_pane_cp8_vc_ParamLimits

0x2bc3,	// (0x0004b4bc) scroll_pane_cp8_vc

0x2c3f,	// (0x0004b538) data_form_wide_pane_vc_ParamLimits

0x2c3f,	// (0x0004b538) data_form_wide_pane_vc

0x2c4b,	// (0x0004b544) form_field_data_wide_pane_vc_g1

0x2c53,	// (0x0004b54c) form_field_data_wide_pane_vc_t1_ParamLimits

0x2c53,	// (0x0004b54c) form_field_data_wide_pane_vc_t1

0xa89a,	// (0x00053193) input_focus_pane_cp6_vc_ParamLimits

0xa89a,	// (0x00053193) input_focus_pane_cp6_vc

0x2f6f,	// (0x0004b868) list_midp_pane_ParamLimits

0x4306,	// (0x0004cbff) scroll_pane_cp16_ParamLimits

0x4306,	// (0x0004cbff) scroll_pane_cp16

0x2fbd,	// (0x0004b8b6) button_value_adjust_pane_ParamLimits

0x2fbd,	// (0x0004b8b6) button_value_adjust_pane

0xc9b6,	// (0x000552af) button_value_adjust_pane_cp6_ParamLimits

0xc9b6,	// (0x000552af) button_value_adjust_pane_cp6

0xca30,	// (0x00055329) settings_code_pane_cp_ParamLimits

0xca30,	// (0x00055329) settings_code_pane_cp

0x712c,	// (0x0004fa25) cell_touch_pane_g1

0x712c,	// (0x0004fa25) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00058001) cell_touch_pane_g

0xcb8b,	// (0x00055484) cell_touch_pane_cp_ParamLimits

0xcb8b,	// (0x00055484) cell_touch_pane_cp

0xcba7,	// (0x000554a0) cell_touch_pane_ParamLimits

0xcba7,	// (0x000554a0) cell_touch_pane

0x712c,	// (0x0004fa25) scroll_sc2_down_pane_g1

0x712c,	// (0x0004fa25) scroll_sc2_up_pane_g1

0x7136,	// (0x0004fa2f) bg_set_opt_pane_cp4_vc

0x46a4,	// (0x0004cf9d) list_set_graphic_pane_vc_g1_ParamLimits

0x46a4,	// (0x0004cf9d) list_set_graphic_pane_vc_g1

0x46b0,	// (0x0004cfa9) list_set_graphic_pane_vc_g2_ParamLimits

0x46b0,	// (0x0004cfa9) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x000582f8) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x000582f8) list_set_graphic_pane_vc_g

0x46bc,	// (0x0004cfb5) text_primary_small_cp13_vc_ParamLimits

0x46bc,	// (0x0004cfb5) text_primary_small_cp13_vc

0xea28,	// (0x00057321) list_set_graphic_pane_vc_ParamLimits

0xea28,	// (0x00057321) list_set_graphic_pane_vc

0x7136,	// (0x0004fa2f) input_focus_pane_cp2_vc

0x712c,	// (0x0004fa25) setting_code_pane_vc_g1

0x719b,	// (0x0004fa94) setting_code_pane_vc_t1

0x46d4,	// (0x0004cfcd) set_text_pane_vc_t1_ParamLimits

0x46d4,	// (0x0004cfcd) set_text_pane_vc_t1

0x7136,	// (0x0004fa2f) input_focus_pane_cp1_vc

0x46f2,	// (0x0004cfeb) list_set_text_pane_vc

0x712c,	// (0x0004fa25) setting_text_pane_vc_g1

0x7136,	// (0x0004fa2f) bg_set_opt_pane_cp2_vc

0x7192,	// (0x0004fa8b) setting_slider_graphic_pane_vc_g1

0x46fc,	// (0x0004cff5) setting_slider_graphic_pane_vc_t1

0x470e,	// (0x0004d007) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x000582fd) setting_slider_graphic_pane_vc_t

0x4720,	// (0x0004d019) slider_set_pane_cp_vc

0x472a,	// (0x0004d023) slider_set_pane_vc_g1

0x4733,	// (0x0004d02c) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x00058302) slider_set_pane_vc_g

0xa8f2,	// (0x000531eb) set_opt_bg_pane_g1_copy1

0xa8fa,	// (0x000531f3) set_opt_bg_pane_g2_copy1

0x475f,	// (0x0004d058) set_opt_bg_pane_g3_copy1

0xa90a,	// (0x00053203) set_opt_bg_pane_g4_copy1

0xa912,	// (0x0005320b) set_opt_bg_pane_g5_copy1

0xa91a,	// (0x00053213) set_opt_bg_pane_g6_copy1

0x4769,	// (0x0004d062) set_opt_bg_pane_g7_copy1

0x4773,	// (0x0004d06c) set_opt_bg_pane_g8_copy1

0x477d,	// (0x0004d076) set_opt_bg_pane_g9_copy1

0x7136,	// (0x0004fa2f) bg_set_opt_pane_cp_vc

0x4787,	// (0x0004d080) setting_slider_pane_vc_t1

0x4796,	// (0x0004d08f) setting_slider_pane_vc_t2

0x47a8,	// (0x0004d0a1) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x00058311) setting_slider_pane_vc_t

0x47ba,	// (0x0004d0b3) slider_set_pane_vc

0x0d93,	// (0x0004968c) volume_set_pane_vc_g1

0x0d9c,	// (0x00049695) volume_set_pane_vc_g2

0x0da5,	// (0x0004969e) volume_set_pane_vc_g3

0x0dae,	// (0x000496a7) volume_set_pane_vc_g4

0x0db7,	// (0x000496b0) volume_set_pane_vc_g5

0x0dc0,	// (0x000496b9) volume_set_pane_vc_g6

0x0dc9,	// (0x000496c2) volume_set_pane_vc_g7

0x0dd2,	// (0x000496cb) volume_set_pane_vc_g8

0x0ddb,	// (0x000496d4) volume_set_pane_vc_g9

0x0de4,	// (0x000496dd) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x00058318) volume_set_pane_vc_g

0x47c2,	// (0x0004d0bb) volume_set_pane_vc

0x47cc,	// (0x0004d0c5) button_value_adjust_pane_cp1_vc

0x47d6,	// (0x0004d0cf) list_highlight_pane_cp2_vc

0x47df,	// (0x0004d0d8) list_set_pane_vc_ParamLimits

0x47df,	// (0x0004d0d8) list_set_pane_vc

0x484d,	// (0x0004d146) main_pane_set_vc_t1_ParamLimits

0x484d,	// (0x0004d146) main_pane_set_vc_t1

0x4862,	// (0x0004d15b) main_pane_set_vc_t2_ParamLimits

0x4862,	// (0x0004d15b) main_pane_set_vc_t2

0x4874,	// (0x0004d16d) main_pane_set_vc_t3_ParamLimits

0x4874,	// (0x0004d16d) main_pane_set_vc_t3

0x4888,	// (0x0004d181) main_pane_set_vc_t4_ParamLimits

0x4888,	// (0x0004d181) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0005832d) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0005832d) main_pane_set_vc_t

0x489c,	// (0x0004d195) setting_code_pane_vc_ParamLimits

0x489c,	// (0x0004d195) setting_code_pane_vc

0x48ad,	// (0x0004d1a6) setting_slider_graphic_pane_vc

0x48ad,	// (0x0004d1a6) setting_slider_pane_vc

0x48ad,	// (0x0004d1a6) setting_text_pane_vc

0x48ad,	// (0x0004d1a6) setting_volume_pane_vc

0x48b7,	// (0x0004d1b0) scroll_pane_cp121_vc

0xa874,	// (0x0005316d) set_content_pane_vc

0x48bf,	// (0x0004d1b8) button_value_adjust_pane_g1

0x48c8,	// (0x0004d1c1) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00058387) button_value_adjust_pane_g

0x48d1,	// (0x0004d1ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0x48d1,	// (0x0004d1ca) form_field_slider_wide_pane_vc_t1

0x48e3,	// (0x0004d1dc) form_field_slider_wide_pane_vc_t2_ParamLimits

0x48e3,	// (0x0004d1dc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x0005838c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0005838c) form_field_slider_wide_pane_vc_t

0x71c0,	// (0x0004fab9) input_focus_pane_cp10_vc_ParamLimits

0x71c0,	// (0x0004fab9) input_focus_pane_cp10_vc

0x490f,	// (0x0004d208) slider_cont_pane_cp1_vc_ParamLimits

0x490f,	// (0x0004d208) slider_cont_pane_cp1_vc

0x4921,	// (0x0004d21a) slider_form_pane_g1_cp2

0x4733,	// (0x0004d02c) slider_form_pane_g2_cp2

0x494e,	// (0x0004d247) form_field_slider_pane_vc_t3

0x495c,	// (0x0004d255) form_field_slider_pane_vc_t4

0x496a,	// (0x0004d263) slider_form_pane_vc_ParamLimits

0x496a,	// (0x0004d263) slider_form_pane_vc

0x4977,	// (0x0004d270) form_field_slider_pane_vc_t1_ParamLimits

0x4977,	// (0x0004d270) form_field_slider_pane_vc_t1

0x48e3,	// (0x0004d1dc) form_field_slider_pane_vc_t2_ParamLimits

0x48e3,	// (0x0004d1dc) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x0005839e) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x0005839e) form_field_slider_pane_vc_t

0x71c0,	// (0x0004fab9) input_focus_pane_cp9_vc_ParamLimits

0x71c0,	// (0x0004fab9) input_focus_pane_cp9_vc

0x498d,	// (0x0004d286) slider_cont_pane_vc_ParamLimits

0x498d,	// (0x0004d286) slider_cont_pane_vc

0x49a1,	// (0x0004d29a) list_form_graphic_pane_cp_vc_ParamLimits

0x49a1,	// (0x0004d29a) list_form_graphic_pane_cp_vc

0x2c4b,	// (0x0004b544) form_field_popup_wide_pane_vc_g1

0x49b6,	// (0x0004d2af) form_field_popup_wide_pane_vc_t1_ParamLimits

0x49b6,	// (0x0004d2af) form_field_popup_wide_pane_vc_t1

0xa89a,	// (0x00053193) input_focus_pane_cp8_vc_ParamLimits

0xa89a,	// (0x00053193) input_focus_pane_cp8_vc

0x49fb,	// (0x0004d2f4) list_form_wide_pane_vc_ParamLimits

0x49fb,	// (0x0004d2f4) list_form_wide_pane_vc

0x4a07,	// (0x0004d300) list_form_graphic_pane_vc_g1

0x4a0f,	// (0x0004d308) list_form_graphic_pane_vc_t1_ParamLimits

0x4a0f,	// (0x0004d308) list_form_graphic_pane_vc_t1

0x7184,	// (0x0004fa7d) list_highlight_pane_cp5_vc_ParamLimits

0x7184,	// (0x0004fa7d) list_highlight_pane_cp5_vc

0x4a2b,	// (0x0004d324) list_form_graphic_pane_vc_ParamLimits

0x4a2b,	// (0x0004d324) list_form_graphic_pane_vc

0x2c4b,	// (0x0004b544) form_field_popup_pane_vc_g1

0x4a41,	// (0x0004d33a) form_field_popup_pane_vc_t1_ParamLimits

0x4a41,	// (0x0004d33a) form_field_popup_pane_vc_t1

0xa89a,	// (0x00053193) input_focus_pane_cp7_vc_ParamLimits

0xa89a,	// (0x00053193) input_focus_pane_cp7_vc

0x4a58,	// (0x0004d351) list_form_pane_vc_ParamLimits

0x4a58,	// (0x0004d351) list_form_pane_vc

0x4a64,	// (0x0004d35d) data_form_pane_vc_t1_ParamLimits

0x4a64,	// (0x0004d35d) data_form_pane_vc_t1

0xa8f2,	// (0x000531eb) input_focus_pane_vc_g1

0xa8fa,	// (0x000531f3) input_focus_pane_vc_g2

0xa902,	// (0x000531fb) input_focus_pane_vc_g3

0xa90a,	// (0x00053203) input_focus_pane_vc_g4

0xa912,	// (0x0005320b) input_focus_pane_vc_g5

0xa91a,	// (0x00053213) input_focus_pane_vc_g6

0xa922,	// (0x0005321b) input_focus_pane_vc_g7

0xa92a,	// (0x00053223) input_focus_pane_vc_g8

0xa932,	// (0x0005322b) input_focus_pane_vc_g9

0x712c,	// (0x0004fa25) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00057f8a) input_focus_pane_vc_g

0x2c3f,	// (0x0004b538) data_form_pane_vc_ParamLimits

0x2c3f,	// (0x0004b538) data_form_pane_vc

0x2c4b,	// (0x0004b544) form_field_data_pane_vc_g1

0x4a81,	// (0x0004d37a) form_field_data_pane_vc_t1_ParamLimits

0x4a81,	// (0x0004d37a) form_field_data_pane_vc_t1

0xa89a,	// (0x00053193) input_focus_pane_vc_ParamLimits

0xa89a,	// (0x00053193) input_focus_pane_vc

0x4a9b,	// (0x0004d394) button_value_adjust_pane_cp3_vc

0x4aa3,	// (0x0004d39c) button_value_adjust_pane_cp5_vc

0x4aab,	// (0x0004d3a4) form_field_data_pane_vc_ParamLimits

0x4aab,	// (0x0004d3a4) form_field_data_pane_vc

0x4ac6,	// (0x0004d3bf) form_field_data_pane_vc_cp2

0x4ace,	// (0x0004d3c7) form_field_data_wide_pane_vc_ParamLimits

0x4ace,	// (0x0004d3c7) form_field_data_wide_pane_vc

0x4ae8,	// (0x0004d3e1) form_field_data_wide_pane_vc_cp2

0x4af0,	// (0x0004d3e9) form_field_popup_pane_vc_ParamLimits

0x4af0,	// (0x0004d3e9) form_field_popup_pane_vc

0x4b0b,	// (0x0004d404) form_field_popup_wide_pane_vc_ParamLimits

0x4b0b,	// (0x0004d404) form_field_popup_wide_pane_vc

0x4b25,	// (0x0004d41e) form_field_slider_pane_vc_ParamLimits

0x4b25,	// (0x0004d41e) form_field_slider_pane_vc

0x4b38,	// (0x0004d431) form_field_slider_wide_pane_vc_ParamLimits

0x4b38,	// (0x0004d431) form_field_slider_wide_pane_vc

0xcbc5,	// (0x000554be) grid_touch_1_pane_ParamLimits

0xcbc5,	// (0x000554be) grid_touch_1_pane

0xcbd9,	// (0x000554d2) grid_touch_2_pane_ParamLimits

0xcbd9,	// (0x000554d2) grid_touch_2_pane

0x4c08,	// (0x0004d501) touch_pane_g1_ParamLimits

0x4c08,	// (0x0004d501) touch_pane_g1

0x4b71,	// (0x0004d46a) cell_app_pane_cp_wide_ParamLimits

0x4b71,	// (0x0004d46a) cell_app_pane_cp_wide

0x4b82,	// (0x0004d47b) grid_popup_fast_wide_pane_ParamLimits

0x4b82,	// (0x0004d47b) grid_popup_fast_wide_pane

0x4b96,	// (0x0004d48f) scroll_pane_cp19_ParamLimits

0x4b96,	// (0x0004d48f) scroll_pane_cp19

0x7136,	// (0x0004fa2f) bg_popup_window_pane_cp20

0x4baa,	// (0x0004d4a3) listscroll_popup_fast_wide_pane

0xcc05,	// (0x000554fe) grid_indicator_nsta_pane

0x4bb2,	// (0x0004d4ab) clock_nsta_pane_g1

0x4bbb,	// (0x0004d4b4) clock_nsta_pane_t1

0xcc13,	// (0x0005550c) cell_indicator_nsta_pane_ParamLimits

0xcc13,	// (0x0005550c) cell_indicator_nsta_pane

0x4c08,	// (0x0004d501) cell_indicator_nsta_pane_g1

0xcc2a,	// (0x00055523) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x000583af) cell_indicator_nsta_pane_g

0x4c23,	// (0x0004d51c) clock_nsta_pane_cp

0x4c2c,	// (0x0004d525) indicator_nsta_pane_cp

0x4c34,	// (0x0004d52d) nsta_clock_indic_pane_g1

0xa02d,	// (0x00052926) grid_indicator_pane

0xc51b,	// (0x00054e14) scroll_pane_cp29

0x02c6,	// (0x00048bbf) indicator_nsta_pane_cp2_ParamLimits

0x02c6,	// (0x00048bbf) indicator_nsta_pane_cp2

0x7184,	// (0x0004fa7d) main_apps_wheel_pane

0x2e2c,	// (0x0004b725) form_midp_field_text_pane_ParamLimits

0x2f7b,	// (0x0004b874) scroll_bar_cp050_ParamLimits

0x4c84,	// (0x0004d57d) cell_indicator_pane_ParamLimits

0x4c84,	// (0x0004d57d) cell_indicator_pane

0x4c9c,	// (0x0004d595) cell_indicator_pane_g1

0xcc37,	// (0x00055530) grid_wheel_folder_pane_ParamLimits

0xcc37,	// (0x00055530) grid_wheel_folder_pane

0xcc45,	// (0x0005553e) list_wheel_apps_pane_ParamLimits

0xcc45,	// (0x0005553e) list_wheel_apps_pane

0xcc53,	// (0x0005554c) main_apps_wheel_pane_g1_ParamLimits

0xcc53,	// (0x0005554c) main_apps_wheel_pane_g1

0xcc63,	// (0x0005555c) main_apps_wheel_pane_g2_ParamLimits

0xcc63,	// (0x0005555c) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x000583cb) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x000583cb) main_apps_wheel_pane_g

0xcc73,	// (0x0005556c) main_apps_wheel_pane_t1_ParamLimits

0xcc73,	// (0x0005556c) main_apps_wheel_pane_t1

0xcc8b,	// (0x00055584) list_wheel_apps_pane_g1

0xcc93,	// (0x0005558c) list_wheel_apps_pane_g2

0xcc9b,	// (0x00055594) list_wheel_apps_pane_g3

0xcca3,	// (0x0005559c) list_wheel_apps_pane_g4

0xccab,	// (0x000555a4) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x000583d0) list_wheel_apps_pane_g

0xebbd,	// (0x000574b6) navi_icon_text_pane

0xba02,	// (0x000542fb) aid_fill_nsta

0xccc8,	// (0x000555c1) navi_icon_text_pane_g1

0xccd4,	// (0x000555cd) navi_icon_text_pane_t1

0xea53,	// (0x0005734c) list_set_graphic_pane_t1_ParamLimits

0xea53,	// (0x0005734c) list_set_graphic_pane_t1

0x36e0,	// (0x0004bfd9) popup_midp_note_alarm_window_t6_ParamLimits

0x36e0,	// (0x0004bfd9) popup_midp_note_alarm_window_t6

0x36f2,	// (0x0004bfeb) popup_midp_note_alarm_window_t7_ParamLimits

0x36f2,	// (0x0004bfeb) popup_midp_note_alarm_window_t7

0x3704,	// (0x0004bffd) popup_midp_note_alarm_window_t8_ParamLimits

0x3704,	// (0x0004bffd) popup_midp_note_alarm_window_t8

0x3716,	// (0x0004c00f) popup_midp_note_alarm_window_t9_ParamLimits

0x3716,	// (0x0004c00f) popup_midp_note_alarm_window_t9

0x3728,	// (0x0004c021) popup_midp_note_alarm_window_t10_ParamLimits

0x3728,	// (0x0004c021) popup_midp_note_alarm_window_t10

0x373a,	// (0x0004c033) popup_midp_note_alarm_window_t11_ParamLimits

0x373a,	// (0x0004c033) popup_midp_note_alarm_window_t11

0x374c,	// (0x0004c045) scroll_pane_cp17_ParamLimits

0x374c,	// (0x0004c045) scroll_pane_cp17

0x0d93,	// (0x0004968c) volume_small_pane_cp_g1

0x1182,	// (0x00049a7b) volume_small_pane_cp_g2

0x118b,	// (0x00049a84) volume_small_pane_cp_g3

0x1194,	// (0x00049a8d) volume_small_pane_cp_g4

0x119d,	// (0x00049a96) volume_small_pane_cp_g5

0x11a6,	// (0x00049a9f) volume_small_pane_cp_g6

0x11af,	// (0x00049aa8) volume_small_pane_cp_g7

0x11b8,	// (0x00049ab1) volume_small_pane_cp_g8

0x11c1,	// (0x00049aba) volume_small_pane_cp_g9

0x11ca,	// (0x00049ac3) volume_small_pane_cp_g10

0x23e4,	// (0x0004acdd) midp_ticker_pane_g1_ParamLimits

0x23f0,	// (0x0004ace9) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00058056) midp_ticker_pane_g_ParamLimits

0xb066,	// (0x0005395f) midp_ticker_pane_t1_ParamLimits

0xba26,	// (0x0005431f) aid_fill_nsta_2

0x2f67,	// (0x0004b860) list_form2_midp_pane

0x40d0,	// (0x0004c9c9) midp_editing_number_pane_ParamLimits

0x40df,	// (0x0004c9d8) midp_ticker_pane_ParamLimits

0x4d8f,	// (0x0004d688) form2_midp_field_pane

0x4db3,	// (0x0004d6ac) scroll_pane_cp51

0x4dd3,	// (0x0004d6cc) form2_midp_button_pane_ParamLimits

0x4dd3,	// (0x0004d6cc) form2_midp_button_pane

0x4de5,	// (0x0004d6de) form2_midp_content_pane_ParamLimits

0x4de5,	// (0x0004d6de) form2_midp_content_pane

0x4dff,	// (0x0004d6f8) form2_midp_field_choice_group_pane

0x4e07,	// (0x0004d700) form2_midp_field_pane_g1

0x4e0f,	// (0x0004d708) form2_midp_field_pane_g2

0x4e17,	// (0x0004d710) form2_midp_field_pane_g3

0x4e1f,	// (0x0004d718) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x000583f5) form2_midp_field_pane_g

0x4e27,	// (0x0004d720) form2_midp_gauge_slider_pane

0x4e2f,	// (0x0004d728) form2_midp_gauge_wait_pane

0x4e37,	// (0x0004d730) form2_midp_image_pane_ParamLimits

0x4e37,	// (0x0004d730) form2_midp_image_pane

0x4e52,	// (0x0004d74b) form2_midp_label_pane_ParamLimits

0x4e52,	// (0x0004d74b) form2_midp_label_pane

0xcd02,	// (0x000555fb) form2_midp_label_pane_cp_ParamLimits

0xcd02,	// (0x000555fb) form2_midp_label_pane_cp

0x4e92,	// (0x0004d78b) form2_midp_string_pane_ParamLimits

0x4e92,	// (0x0004d78b) form2_midp_string_pane

0x9aae,	// (0x000523a7) form2_midp_text_pane_ParamLimits

0x9aae,	// (0x000523a7) form2_midp_text_pane

0x4ea4,	// (0x0004d79d) form2_midp_time_pane

0x4eb4,	// (0x0004d7ad) input_focus_pane_cp51_ParamLimits

0x4eb4,	// (0x0004d7ad) input_focus_pane_cp51

0x4ecc,	// (0x0004d7c5) form2_midp_label_pane_t1_ParamLimits

0x4ecc,	// (0x0004d7c5) form2_midp_label_pane_t1

0x9ad1,	// (0x000523ca) form2_mdip_text_pane_t1_ParamLimits

0x9ad1,	// (0x000523ca) form2_mdip_text_pane_t1

0xf16c,	// (0x00057a65) form2_midp_time_pane_t1

0x4f1a,	// (0x0004d813) form2_midp_gauge_slider_pane_t1

0xcd23,	// (0x0005561c) form2_midp_gauge_slider_pane_t2

0xcd35,	// (0x0005562e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x000583fe) form2_midp_gauge_slider_pane_t

0x4f50,	// (0x0004d849) form2_midp_slider_pane

0x4f5c,	// (0x0004d855) form2_midp_gauge_wait_pane_t1

0x4f6a,	// (0x0004d863) form2_midp_wait_pane_ParamLimits

0x4f6a,	// (0x0004d863) form2_midp_wait_pane

0x2c92,	// (0x0004b58b) list_single_2graphic_pane_cp4_ParamLimits

0x2c92,	// (0x0004b58b) list_single_2graphic_pane_cp4

0xcd47,	// (0x00055640) list_single_midp_graphic_pane_cp_ParamLimits

0xcd47,	// (0x00055640) list_single_midp_graphic_pane_cp

0x7136,	// (0x0004fa2f) list_highlight_pane_cp20

0x4fae,	// (0x0004d8a7) list_single_2graphic_pane_g1_cp4

0x4586,	// (0x0004ce7f) list_single_2graphic_pane_g2_cp4

0x4fb6,	// (0x0004d8af) list_single_2graphic_pane_t1_cp4

0x7184,	// (0x0004fa7d) list_highlight_pane_cp21

0x4fc5,	// (0x0004d8be) list_single_midp_graphic_pane_g4_cp

0x4fd4,	// (0x0004d8cd) list_single_midp_graphic_pane_t1_cp

0xcd68,	// (0x00055661) form2_mdip_string_pane_t1_ParamLimits

0xcd68,	// (0x00055661) form2_mdip_string_pane_t1

0x7136,	// (0x0004fa2f) bg_wml_button_pane_cp2

0x712c,	// (0x0004fa25) form2_midp_image_pane_g1

0xf3ab,	// (0x00057ca4) list_double_large_graphic_pane_g5_ParamLimits

0xf3ab,	// (0x00057ca4) list_double_large_graphic_pane_g5

0xafc2,	// (0x000538bb) midp_form_pane_ParamLimits

0x7184,	// (0x0004fa7d) main_apps_wheel_pane_ParamLimits

0xb71c,	// (0x00054015) popup_preview_window_ParamLimits

0xb71c,	// (0x00054015) popup_preview_window

0x0bd3,	// (0x000494cc) popup_touch_info_window_ParamLimits

0x0bd3,	// (0x000494cc) popup_touch_info_window

0x0bf5,	// (0x000494ee) popup_touch_menu_window_ParamLimits

0x0bf5,	// (0x000494ee) popup_touch_menu_window

0x7122,	// (0x0004fa1b) bg_popup_sub_pane_cp6

0x5085,	// (0x0004d97e) list_touch_menu_pane

0x508d,	// (0x0004d986) list_single_touch_menu_pane_ParamLimits

0x508d,	// (0x0004d986) list_single_touch_menu_pane

0x50a5,	// (0x0004d99e) list_single_touch_menu_pane_t1

0x7184,	// (0x0004fa7d) bg_popup_sub_pane_cp7_ParamLimits

0x7184,	// (0x0004fa7d) bg_popup_sub_pane_cp7

0x50b3,	// (0x0004d9ac) heading_sub_pane

0x50bb,	// (0x0004d9b4) list_touch_info_pane_ParamLimits

0x50bb,	// (0x0004d9b4) list_touch_info_pane

0x50ca,	// (0x0004d9c3) list_single_touch_info_pane_ParamLimits

0x50ca,	// (0x0004d9c3) list_single_touch_info_pane

0x50dc,	// (0x0004d9d5) list_single_touch_info_pane_t1

0x50ea,	// (0x0004d9e3) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x0005840c) list_single_touch_info_pane_t

0x2306,	// (0x0004abff) bg_popup_heading_pane_cp

0x50f8,	// (0x0004d9f1) heading_sub_pane_t1

0x2bd9,	// (0x0004b4d2) bg_popup_preview_window_pane_cp_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_popup_preview_window_pane_cp

0x50b3,	// (0x0004d9ac) heading_preview_pane

0x50bb,	// (0x0004d9b4) list_preview_pane_ParamLimits

0x50bb,	// (0x0004d9b4) list_preview_pane

0x5106,	// (0x0004d9ff) popup_preview_window_g1

0x50ca,	// (0x0004d9c3) list_single_preview_pane_ParamLimits

0x50ca,	// (0x0004d9c3) list_single_preview_pane

0x510e,	// (0x0004da07) list_single_preview_pane_g1

0x5116,	// (0x0004da0f) list_single_preview_pane_t1

0x50dc,	// (0x0004d9d5) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x00058411) list_single_preview_pane_t

0x5124,	// (0x0004da1d) bg_popup_heading_pane_cp2_ParamLimits

0x5124,	// (0x0004da1d) bg_popup_heading_pane_cp2

0x513a,	// (0x0004da33) heading_preview_pane_g1

0x5142,	// (0x0004da3b) heading_preview_pane_t1_ParamLimits

0x5142,	// (0x0004da3b) heading_preview_pane_t1

0xa05d,	// (0x00052956) soft_indicator_pane_t1_ParamLimits

0xa7a1,	// (0x0005309a) scroll_pane_ParamLimits

0xad58,	// (0x00053651) scroll_sc2_left_pane

0xad61,	// (0x0005365a) scroll_sc2_right_pane

0xad80,	// (0x00053679) scroll_bg_pane_g1_ParamLimits

0xad95,	// (0x0005368e) scroll_bg_pane_g2_ParamLimits

0xadad,	// (0x000536a6) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00057fe1) scroll_bg_pane_g_ParamLimits

0xad80,	// (0x00053679) scroll_handle_pane_g1_ParamLimits

0xadcf,	// (0x000536c8) scroll_handle_pane_g2_ParamLimits

0xadad,	// (0x000536a6) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00057fe8) scroll_handle_pane_g_ParamLimits

0x0633,	// (0x00048f2c) popup_choice_list_window_ParamLimits

0x0633,	// (0x00048f2c) popup_choice_list_window

0x2aaf,	// (0x0004b3a8) choice_list_pane

0x2b31,	// (0x0004b42a) cell_toolbar_pane_t1

0x2b59,	// (0x0004b452) toolbar_button_pane_ParamLimits

0x3c16,	// (0x0004c50f) ai_gene_pane_1_t2_ParamLimits

0x3c16,	// (0x0004c50f) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0005820b) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0005820b) ai_gene_pane_1_t

0x515f,	// (0x0004da58) scroll_sc2_left_pane_g1

0x515f,	// (0x0004da58) scroll_sc2_right_pane_g1

0x2635,	// (0x0004af2e) bg_popup_sub_pane_cp10

0x5169,	// (0x0004da62) list_choice_list_pane

0x4166,	// (0x0004ca5f) list_single_choice_list_pane_ParamLimits

0x4166,	// (0x0004ca5f) list_single_choice_list_pane

0x5182,	// (0x0004da7b) list_single_choice_list_pane_g1

0xaa32,	// (0x0005332b) list_single_choice_list_pane_t1_ParamLimits

0xaa32,	// (0x0005332b) list_single_choice_list_pane_t1

0x518a,	// (0x0004da83) choice_list_pane_g1

0x5192,	// (0x0004da8b) choice_list_pane_t1

0x7122,	// (0x0004fa1b) input_focus_pane_cp11

0xabef,	// (0x000534e8) title_pane_stacon_g2_ParamLimits

0xabef,	// (0x000534e8) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00057fc7) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00057fc7) title_pane_stacon_g

0x2306,	// (0x0004abff) cursor_press_pane

0xb399,	// (0x00053c92) popup_fep_hwr_window_ParamLimits

0xb399,	// (0x00053c92) popup_fep_hwr_window

0x0777,	// (0x00049070) popup_fep_vkb_window_ParamLimits

0x0777,	// (0x00049070) popup_fep_vkb_window

0x51a0,	// (0x0004da99) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x0005843a) fep_vkb_side_pane_g_ParamLimits

0x120c,	// (0x00049b05) fep_hwr_candidate_pane_ParamLimits

0x120c,	// (0x00049b05) fep_hwr_candidate_pane

0x1236,	// (0x00049b2f) fep_hwr_side_pane_ParamLimits

0x1236,	// (0x00049b2f) fep_hwr_side_pane

0x1258,	// (0x00049b51) fep_hwr_top_pane_ParamLimits

0x1258,	// (0x00049b51) fep_hwr_top_pane

0x1270,	// (0x00049b69) fep_hwr_write_pane_ParamLimits

0x1270,	// (0x00049b69) fep_hwr_write_pane

0xfb41,	// (0x0005843a) fep_vkb_side_pane_g

0x51a8,	// (0x0004daa1) fep_hwr_top_pane_g1

0x51ba,	// (0x0004dab3) fep_hwr_top_pane_g2

0x129c,	// (0x00049b95) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x00058416) fep_hwr_top_pane_g

0x12b1,	// (0x00049baa) fep_hwr_top_text_pane

0xe80b,	// (0x00057104) fep_hwr_top_text_pane_g1

0x51f0,	// (0x0004dae9) fep_hwr_top_text_pane_t1

0x13bb,	// (0x00049cb4) fep_hwr_candidate_pane_g1

0x543b,	// (0x0004dd34) fep_vkb_keypad_pane_g3_ParamLimits

0x543b,	// (0x0004dd34) fep_vkb_keypad_pane_g3

0x5467,	// (0x0004dd60) fep_vkb_keypad_pane_g4_ParamLimits

0x5467,	// (0x0004dd60) fep_vkb_keypad_pane_g4

0x54de,	// (0x0004ddd7) fep_vkb_bottom_pane_g2_ParamLimits

0x54de,	// (0x0004ddd7) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x00058441) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x00058441) fep_vkb_bottom_pane_g

0x515f,	// (0x0004da58) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x0005844b) cell_vkb_side_pane_g

0x5569,	// (0x0004de62) cell_vkb_side_pane_t1

0x5577,	// (0x0004de70) cell_vkb_side_pane_t1_copy1

0x515f,	// (0x0004da58) bg_fep_vkb_candidate_pane_g2

0x56bb,	// (0x0004dfb4) cell_vkb_candidate_pane_ParamLimits

0x51fe,	// (0x0004daf7) aid_size_cell_vkb_ParamLimits

0x51fe,	// (0x0004daf7) aid_size_cell_vkb

0x56bb,	// (0x0004dfb4) cell_vkb_candidate_pane

0x13d5,	// (0x00049cce) bg_popup_fep_shadow_pane_g1

0xce2c,	// (0x00055725) fep_vkb_bottom_pane_ParamLimits

0xce2c,	// (0x00055725) fep_vkb_bottom_pane

0x52cd,	// (0x0004dbc6) fep_vkb_candidate_pane_ParamLimits

0x52cd,	// (0x0004dbc6) fep_vkb_candidate_pane

0xce58,	// (0x00055751) fep_vkb_keypad_pane_ParamLimits

0xce58,	// (0x00055751) fep_vkb_keypad_pane

0xce7f,	// (0x00055778) fep_vkb_side_pane_ParamLimits

0xce7f,	// (0x00055778) fep_vkb_side_pane

0xcebb,	// (0x000557b4) fep_vkb_top_pane_ParamLimits

0xcebb,	// (0x000557b4) fep_vkb_top_pane

0x5394,	// (0x0004dc8d) fep_vkb_top_pane_g1_ParamLimits

0x5394,	// (0x0004dc8d) fep_vkb_top_pane_g1

0x53a3,	// (0x0004dc9c) fep_vkb_top_pane_g2_ParamLimits

0x53a3,	// (0x0004dc9c) fep_vkb_top_pane_g2

0x53b2,	// (0x0004dcab) fep_vkb_top_pane_g3_ParamLimits

0x53b2,	// (0x0004dcab) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x00058431) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x00058431) fep_vkb_top_pane_g

0x53d0,	// (0x0004dcc9) fep_vkb_top_text_pane_ParamLimits

0x53d0,	// (0x0004dcc9) fep_vkb_top_text_pane

0xcef7,	// (0x000557f0) fep_vkb_side_pane_g1_ParamLimits

0xcef7,	// (0x000557f0) fep_vkb_side_pane_g1

0x542a,	// (0x0004dd23) grid_vkb_side_pane_ParamLimits

0x542a,	// (0x0004dd23) grid_vkb_side_pane

0x13dd,	// (0x00049cd6) bg_popup_fep_shadow_pane_g2

0x13e6,	// (0x00049cdf) bg_popup_fep_shadow_pane_g3

0x13ee,	// (0x00049ce7) bg_popup_fep_shadow_pane_g4

0x13f7,	// (0x00049cf0) bg_popup_fep_shadow_pane_g5

0x1401,	// (0x00049cfa) bg_popup_fep_shadow_pane_g6

0x1409,	// (0x00049d02) bg_popup_fep_shadow_pane_g7

0xa912,	// (0x0005320b) bg_popup_fep_shadow_pane_g8

0x5489,	// (0x0004dd82) grid_vkb_keypad_number_pane_ParamLimits

0x5489,	// (0x0004dd82) grid_vkb_keypad_number_pane

0x549d,	// (0x0004dd96) grid_vkb_keypad_pane_ParamLimits

0x549d,	// (0x0004dd96) grid_vkb_keypad_pane

0x54c3,	// (0x0004ddbc) fep_vkb_bottom_pane_g1_ParamLimits

0x54c3,	// (0x0004ddbc) fep_vkb_bottom_pane_g1

0x54ec,	// (0x0004dde5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x54ec,	// (0x0004dde5) grid_vkb_keypad_bottom_left_pane

0x5501,	// (0x0004ddfa) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5501,	// (0x0004ddfa) grid_vkb_keypad_bottom_right_pane

0x5516,	// (0x0004de0f) fep_vkb_top_text_pane_g1

0xcf3e,	// (0x00055837) fep_vkb_top_text_pane_t1

0xcf50,	// (0x00055849) cell_vkb_side_pane_ParamLimits

0xcf50,	// (0x00055849) cell_vkb_side_pane

0x515f,	// (0x0004da58) cell_vkb_side_pane_g1

0x5585,	// (0x0004de7e) cell_vkb_keypad_pane_ParamLimits

0x5585,	// (0x0004de7e) cell_vkb_keypad_pane

0x5612,	// (0x0004df0b) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x0005845e) bg_popup_fep_shadow_pane_g

0x515f,	// (0x0004da58) cell_hwr_side_pane_g1

0x515f,	// (0x0004da58) cell_hwr_side_pane_g2

0x561c,	// (0x0004df15) cell_vkb_keypad_pane_t1

0xcf66,	// (0x0005585f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcf66,	// (0x0005585f) cell_vkb_keypad_bottom_left_pane

0xcf7b,	// (0x00055874) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcf7b,	// (0x00055874) cell_vkb_keypad_bottom_right_pane

0x515f,	// (0x0004da58) cell_vkb_keypad_bottom_left_pane_g1

0x515f,	// (0x0004da58) cell_vkb_keypad_bottom_right_pane_g1

0x5680,	// (0x0004df79) cell_vkb_keypad_number_pane_ParamLimits

0x5680,	// (0x0004df79) cell_vkb_keypad_number_pane

0x569f,	// (0x0004df98) cell_vkb_keypad_number_pane_g1

0x56a9,	// (0x0004dfa2) cell_vkb_keypad_number_pane_g2

0x56b2,	// (0x0004dfab) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x00058450) cell_vkb_keypad_number_pane_g

0x561c,	// (0x0004df15) cell_vkb_keypad_number_pane_t1

0x56dc,	// (0x0004dfd5) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x0005844b) cell_hwr_side_pane_g

0x56f5,	// (0x0004dfee) cell_hwr_side_pane_t1

0x141b,	// (0x00049d14) cell_hwr_side_pane_t1_copy1

0x53c2,	// (0x0004dcbb) cell_hwr_candidate_pane_g1

0x1429,	// (0x00049d22) cell_hwr_candidate_pane_t1

0x515f,	// (0x0004da58) cell_vkb_candidate_pane_g2

0x577b,	// (0x0004e074) cell_vkb_candidate_pane_t1

0x11d3,	// (0x00049acc) bg_popup_fep_shadow_pane_ParamLimits

0x11d3,	// (0x00049acc) bg_popup_fep_shadow_pane

0xcdf2,	// (0x000556eb) bg_fep_hwr_top_pane_g4

0x51cc,	// (0x0004dac5) bg_hwr_side_pane_g1_ParamLimits

0x51cc,	// (0x0004dac5) bg_hwr_side_pane_g1

0xbe98,	// (0x00054791) cell_hwr_side_pane_ParamLimits

0xbe98,	// (0x00054791) cell_hwr_side_pane

0x132c,	// (0x00049c25) fep_hwr_write_pane_g1_ParamLimits

0x132c,	// (0x00049c25) fep_hwr_write_pane_g1

0x1339,	// (0x00049c32) fep_hwr_write_pane_g2_ParamLimits

0x1339,	// (0x00049c32) fep_hwr_write_pane_g2

0x1346,	// (0x00049c3f) fep_hwr_write_pane_g3_ParamLimits

0x1346,	// (0x00049c3f) fep_hwr_write_pane_g3

0xbeb8,	// (0x000547b1) fep_hwr_write_pane_g4_ParamLimits

0xbeb8,	// (0x000547b1) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x0005841d) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x0005841d) fep_hwr_write_pane_g

0xcdf2,	// (0x000556eb) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcdf2,	// (0x000556eb) bg_fep_hwr_candidate_pane_g2

0x1369,	// (0x00049c62) cell_hwr_candidate_pane_ParamLimits

0x1369,	// (0x00049c62) cell_hwr_candidate_pane

0x13bb,	// (0x00049cb4) fep_hwr_candidate_pane_g1_ParamLimits

0x522c,	// (0x0004db25) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x522c,	// (0x0004db25) bg_popup_fep_shadow_pane_cp2

0x53c2,	// (0x0004dcbb) fep_vkb_top_pane_g4_ParamLimits

0x53c2,	// (0x0004dcbb) fep_vkb_top_pane_g4

0x5408,	// (0x0004dd01) fep_vkb_side_pane_g2_ParamLimits

0x5408,	// (0x0004dd01) fep_vkb_side_pane_g2

0x97c7,	// (0x000520c0) list_setting_pane_t4_ParamLimits

0x97c7,	// (0x000520c0) list_setting_pane_t4

0x9863,	// (0x0005215c) list_setting_number_pane_t5_ParamLimits

0x9863,	// (0x0005215c) list_setting_number_pane_t5

0xe842,	// (0x0005713b) list_double_heading_pane_cp2_ParamLimits

0xe842,	// (0x0005713b) list_double_heading_pane_cp2

0x5789,	// (0x0004e082) list_double_heading_pane_g1_cp2_ParamLimits

0x5789,	// (0x0004e082) list_double_heading_pane_g1_cp2

0x5795,	// (0x0004e08e) list_double_heading_pane_g2_cp2_ParamLimits

0x5795,	// (0x0004e08e) list_double_heading_pane_g2_cp2

0x57a9,	// (0x0004e0a2) list_double_heading_pane_t1_cp2_ParamLimits

0x57a9,	// (0x0004e0a2) list_double_heading_pane_t1_cp2

0x57bf,	// (0x0004e0b8) list_double_heading_pane_t2_cp2_ParamLimits

0x57bf,	// (0x0004e0b8) list_double_heading_pane_t2_cp2

0x711a,	// (0x0004fa13) aid_value_unit2

0xf049,	// (0x00057942) popup_preview_fixed_window

0xa218,	// (0x00052b11) bg_popup_preview_window_pane_cp02

0x57d1,	// (0x0004e0ca) list_preview_fixed_pane

0x5817,	// (0x0004e110) list_empty_pane_fp_ParamLimits

0x5817,	// (0x0004e110) list_empty_pane_fp

0x5817,	// (0x0004e110) list_single_cale_day_pane_fp_ParamLimits

0x5817,	// (0x0004e110) list_single_cale_day_pane_fp

0x5817,	// (0x0004e110) list_single_graphic_heading_pane_fp_ParamLimits

0x5817,	// (0x0004e110) list_single_graphic_heading_pane_fp

0x5817,	// (0x0004e110) list_single_graphic_pane_fp_ParamLimits

0x5817,	// (0x0004e110) list_single_graphic_pane_fp

0x5817,	// (0x0004e110) list_single_heading_pane_fp_ParamLimits

0x5817,	// (0x0004e110) list_single_heading_pane_fp

0x5817,	// (0x0004e110) list_single_pane_fp_ParamLimits

0x5817,	// (0x0004e110) list_single_pane_fp

0x5830,	// (0x0004e129) list_single_pane_fp_g1_ParamLimits

0x5830,	// (0x0004e129) list_single_pane_fp_g1

0x5789,	// (0x0004e082) list_single_pane_fp_g2_ParamLimits

0x5789,	// (0x0004e082) list_single_pane_fp_g2

0x5795,	// (0x0004e08e) list_single_pane_fp_g3_ParamLimits

0x5795,	// (0x0004e08e) list_single_pane_fp_g3

0x583c,	// (0x0004e135) list_single_pane_fp_g4_ParamLimits

0x583c,	// (0x0004e135) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x0005847f) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x0005847f) list_single_pane_fp_g

0xf17f,	// (0x00057a78) list_single_pane_fp_t1_ParamLimits

0xf17f,	// (0x00057a78) list_single_pane_fp_t1

0xf196,	// (0x00057a8f) list_single_graphic_pane_fp_g1_ParamLimits

0xf196,	// (0x00057a8f) list_single_graphic_pane_fp_g1

0x5830,	// (0x0004e129) list_single_graphic_pane_fp_g2_ParamLimits

0x5830,	// (0x0004e129) list_single_graphic_pane_fp_g2

0x5789,	// (0x0004e082) list_single_graphic_pane_fp_g3_ParamLimits

0x5789,	// (0x0004e082) list_single_graphic_pane_fp_g3

0x5795,	// (0x0004e08e) list_single_graphic_pane_fp_g4_ParamLimits

0x5795,	// (0x0004e08e) list_single_graphic_pane_fp_g4

0x583c,	// (0x0004e135) list_single_graphic_pane_fp_g5_ParamLimits

0x583c,	// (0x0004e135) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00058488) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00058488) list_single_graphic_pane_fp_g

0xf1a2,	// (0x00057a9b) list_single_graphic_pane_fp_t1_ParamLimits

0xf1a2,	// (0x00057a9b) list_single_graphic_pane_fp_t1

0xf196,	// (0x00057a8f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf196,	// (0x00057a8f) list_single_graphic_heading_pane_fp_g1

0x5830,	// (0x0004e129) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5830,	// (0x0004e129) list_single_graphic_heading_pane_fp_g2

0x5789,	// (0x0004e082) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5789,	// (0x0004e082) list_single_graphic_heading_pane_fp_g3

0x5795,	// (0x0004e08e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5795,	// (0x0004e08e) list_single_graphic_heading_pane_fp_g4

0x583c,	// (0x0004e135) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x583c,	// (0x0004e135) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00058488) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00058488) list_single_graphic_heading_pane_fp_g

0xf1b8,	// (0x00057ab1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf1b8,	// (0x00057ab1) list_single_graphic_heading_pane_fp_t1

0xf1ce,	// (0x00057ac7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf1ce,	// (0x00057ac7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00058493) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00058493) list_single_graphic_heading_pane_fp_t

0xf1e0,	// (0x00057ad9) list_single_cale_day_pane_fp_g1_ParamLimits

0xf1e0,	// (0x00057ad9) list_single_cale_day_pane_fp_g1

0x5848,	// (0x0004e141) list_single_cale_day_pane_fp_g2_ParamLimits

0x5848,	// (0x0004e141) list_single_cale_day_pane_fp_g2

0x1447,	// (0x00049d40) list_single_cale_day_pane_fp_g3_ParamLimits

0x1447,	// (0x00049d40) list_single_cale_day_pane_fp_g3

0x146f,	// (0x00049d68) list_single_cale_day_pane_fp_g4_ParamLimits

0x146f,	// (0x00049d68) list_single_cale_day_pane_fp_g4

0x1493,	// (0x00049d8c) list_single_cale_day_pane_fp_g5_ParamLimits

0x1493,	// (0x00049d8c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00058498) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00058498) list_single_cale_day_pane_fp_g

0xf218,	// (0x00057b11) list_single_cale_day_pane_fp_t1_ParamLimits

0xf218,	// (0x00057b11) list_single_cale_day_pane_fp_t1

0xf23e,	// (0x00057b37) list_single_cale_day_pane_fp_t2_ParamLimits

0xf23e,	// (0x00057b37) list_single_cale_day_pane_fp_t2

0xf257,	// (0x00057b50) list_single_cale_day_pane_fp_t3_ParamLimits

0xf257,	// (0x00057b50) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x000584a3) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x000584a3) list_single_cale_day_pane_fp_t

0x5830,	// (0x0004e129) list_empty_pane_fp_g1_ParamLimits

0x5830,	// (0x0004e129) list_empty_pane_fp_g1

0xf270,	// (0x00057b69) list_empty_pane_fp_t1

0xf27e,	// (0x00057b77) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x000584aa) list_empty_pane_fp_t

0x5830,	// (0x0004e129) list_single_heading_pane_fp_g1_ParamLimits

0x5830,	// (0x0004e129) list_single_heading_pane_fp_g1

0x5789,	// (0x0004e082) list_single_heading_pane_fp_g2_ParamLimits

0x5789,	// (0x0004e082) list_single_heading_pane_fp_g2

0x5795,	// (0x0004e08e) list_single_heading_pane_fp_g3_ParamLimits

0x5795,	// (0x0004e08e) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x000584af) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x000584af) list_single_heading_pane_fp_g

0xf28c,	// (0x00057b85) list_single_heading_pane_fp_t1_ParamLimits

0xf28c,	// (0x00057b85) list_single_heading_pane_fp_t1

0xf29e,	// (0x00057b97) list_single_heading_pane_fp_t2_ParamLimits

0xf29e,	// (0x00057b97) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x000584b6) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x000584b6) list_single_heading_pane_fp_t

0xaa86,	// (0x0005337f) aid_size_cell_fast

0xa198,	// (0x00052a91) soft_indicator_pane_cp1_t1

0xaac3,	// (0x000533bc) cell_app_pane_cp2_ParamLimits

0xaac3,	// (0x000533bc) cell_app_pane_cp2

0x11f5,	// (0x00049aee) fep_hwr_candidate_drop_down_list_pane

0xce00,	// (0x000556f9) fep_hwr_candidate_pane_g3_ParamLimits

0xce00,	// (0x000556f9) fep_hwr_candidate_pane_g3

0xce0d,	// (0x00055706) fep_hwr_candidate_pane_g4_ParamLimits

0xce0d,	// (0x00055706) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x0005842a) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x0005842a) fep_hwr_candidate_pane_g

0x52bc,	// (0x0004dbb5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x52bc,	// (0x0004dbb5) fep_vkb_candidate_drop_down_list_pane

0x56e4,	// (0x0004dfdd) fep_vkb_candidate_pane_g3

0x56ec,	// (0x0004dfe5) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x00058457) fep_vkb_candidate_pane_g

0x53c2,	// (0x0004dcbb) cell_hwr_candidate_pane_g1_ParamLimits

0x5703,	// (0x0004dffc) cell_hwr_candidate_pane_g3_ParamLimits

0x5703,	// (0x0004dffc) cell_hwr_candidate_pane_g3

0x5724,	// (0x0004e01d) cell_hwr_candidate_pane_g4_ParamLimits

0x5724,	// (0x0004e01d) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x00058471) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x00058471) cell_hwr_candidate_pane_g

0x5745,	// (0x0004e03e) cell_vkb_candidate_pane_g3_ParamLimits

0x5745,	// (0x0004e03e) cell_vkb_candidate_pane_g3

0x5760,	// (0x0004e059) cell_vkb_candidate_pane_g4_ParamLimits

0x5760,	// (0x0004e059) cell_vkb_candidate_pane_g4

0x5854,	// (0x0004e14d) cell_app_pane_cp2_g1_ParamLimits

0x5854,	// (0x0004e14d) cell_app_pane_cp2_g1

0x5872,	// (0x0004e16b) cell_app_pane_cp2_g2_ParamLimits

0x5872,	// (0x0004e16b) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x000584bb) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x000584bb) cell_app_pane_cp2_g

0x587e,	// (0x0004e177) cell_app_pane_cp2_t1_ParamLimits

0x587e,	// (0x0004e177) cell_app_pane_cp2_t1

0xa89a,	// (0x00053193) grid_highlight_pane_cp1_ParamLimits

0xa89a,	// (0x00053193) grid_highlight_pane_cp1

0x14b7,	// (0x00049db0) cell_hwr_candidate_pane_cp1_ParamLimits

0x14b7,	// (0x00049db0) cell_hwr_candidate_pane_cp1

0x53c2,	// (0x0004dcbb) fep_hwr_candidate_drop_down_list_pane_g1

0x5890,	// (0x0004e189) fep_hwr_candidate_drop_down_list_pane_g2

0x589d,	// (0x0004e196) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000584c0) fep_hwr_candidate_drop_down_list_pane_g

0x14db,	// (0x00049dd4) fep_hwr_candidate_drop_down_list_scroll_pane

0x14e4,	// (0x00049ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x14e4,	// (0x00049ddd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x14f1,	// (0x00049dea) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x14f1,	// (0x00049dea) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x14fe,	// (0x00049df7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x14fe,	// (0x00049df7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5745,	// (0x0004e03e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5745,	// (0x0004e03e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5760,	// (0x0004e059) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5760,	// (0x0004e059) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x150b,	// (0x00049e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x150b,	// (0x00049e04) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1526,	// (0x00049e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1526,	// (0x00049e1f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1541,	// (0x00049e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1541,	// (0x00049e3a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x000584c7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x000584c7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x58aa,	// (0x0004e1a3) cell_vkb_candidate_pane_cp1_ParamLimits

0x58aa,	// (0x0004e1a3) cell_vkb_candidate_pane_cp1

0x53c2,	// (0x0004dcbb) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x53c2,	// (0x0004dcbb) fep_vkb_candidate_drop_down_list_pane_g1

0x5890,	// (0x0004e189) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5890,	// (0x0004e189) fep_vkb_candidate_drop_down_list_pane_g2

0x589d,	// (0x0004e196) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x589d,	// (0x0004e196) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x000584c0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x000584c0) fep_vkb_candidate_drop_down_list_pane_g

0x58d0,	// (0x0004e1c9) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x58d0,	// (0x0004e1c9) fep_vkb_candidate_drop_down_list_scroll_pane

0x58dd,	// (0x0004e1d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x58dd,	// (0x0004e1d6) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x58ea,	// (0x0004e1e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x58ea,	// (0x0004e1e3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x58f6,	// (0x0004e1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x58f6,	// (0x0004e1ef) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5703,	// (0x0004dffc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5703,	// (0x0004dffc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5724,	// (0x0004e01d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5724,	// (0x0004e01d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5902,	// (0x0004e1fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5902,	// (0x0004e1fb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5923,	// (0x0004e21c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5923,	// (0x0004e21c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5944,	// (0x0004e23d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5944,	// (0x0004e23d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x000584d8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x000584d8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e6e,	// (0x00052767) title_pane_g1_ParamLimits

0x9e81,	// (0x0005277a) title_pane_g2_ParamLimits

0xf54e,	// (0x00057e47) title_pane_g_ParamLimits

0xe7fb,	// (0x000570f4) aid_call2_pane

0xe803,	// (0x000570fc) aid_call_pane

0xe80b,	// (0x00057104) popup_clock_analogue_window_g1

0xe80b,	// (0x00057104) popup_clock_analogue_window_g2

0x00e0,	// (0x000489d9) popup_clock_analogue_window_g3

0x00e9,	// (0x000489e2) popup_clock_analogue_window_g4

0x712c,	// (0x0004fa25) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00057ff6) popup_clock_analogue_window_g

0x00f1,	// (0x000489ea) popup_clock_analogue_window_t1

0x0132,	// (0x00048a2b) clock_digital_number_pane_ParamLimits

0x0132,	// (0x00048a2b) clock_digital_number_pane

0x013e,	// (0x00048a37) clock_digital_number_pane_cp02_ParamLimits

0x013e,	// (0x00048a37) clock_digital_number_pane_cp02

0x014a,	// (0x00048a43) clock_digital_number_pane_cp03_ParamLimits

0x014a,	// (0x00048a43) clock_digital_number_pane_cp03

0x0156,	// (0x00048a4f) clock_digital_number_pane_cp04_ParamLimits

0x0156,	// (0x00048a4f) clock_digital_number_pane_cp04

0x0162,	// (0x00048a5b) clock_digital_separator_pane_ParamLimits

0x0162,	// (0x00048a5b) clock_digital_separator_pane

0x016e,	// (0x00048a67) popup_clock_digital_window_t1_ParamLimits

0x016e,	// (0x00048a67) popup_clock_digital_window_t1

0x712c,	// (0x0004fa25) clock_digital_number_pane_g1

0x712c,	// (0x0004fa25) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00058001) clock_digital_number_pane_g

0x712c,	// (0x0004fa25) clock_digital_separator_pane_g1

0x712c,	// (0x0004fa25) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00058001) clock_digital_separator_pane_g

0xba02,	// (0x000542fb) aid_fill_nsta_ParamLimits

0xbb3a,	// (0x00054433) indicator_nsta_pane_ParamLimits

0x2948,	// (0x0004b241) popup_clock_analogue_window

0x2948,	// (0x0004b241) popup_clock_digital_window

0xcc05,	// (0x000554fe) grid_indicator_nsta_pane_ParamLimits

0x4bc9,	// (0x0004d4c2) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x000583aa) clock_nsta_pane_t

0x0049,	// (0x00048942) aid_size_max_handle

0xad30,	// (0x00053629) aid_size_min_handle

0x2306,	// (0x0004abff) editor_scroll_pane

0x595f,	// (0x0004e258) ex_editor_pane

0xaa0d,	// (0x00053306) scroll_pane_cp13

0xa7cd,	// (0x000530c6) scroll_pane_cp14

0xe83a,	// (0x00057133) scroll_pane_cp36

0xaeb1,	// (0x000537aa) list_single_graphic_hl_pane_cp2_ParamLimits

0xaeb1,	// (0x000537aa) list_single_graphic_hl_pane_cp2

0xca79,	// (0x00055372) list_single_graphic_hl_pane_ParamLimits

0xca79,	// (0x00055372) list_single_graphic_hl_pane

0xf2b4,	// (0x00057bad) aid_size_min_hl_cp1

0x5967,	// (0x0004e260) list_highlight_pane_cp34_ParamLimits

0x5967,	// (0x0004e260) list_highlight_pane_cp34

0x5978,	// (0x0004e271) list_single_graphic_hl_pane_g1_ParamLimits

0x5978,	// (0x0004e271) list_single_graphic_hl_pane_g1

0x9aed,	// (0x000523e6) list_single_graphic_hl_pane_g2_ParamLimits

0x9aed,	// (0x000523e6) list_single_graphic_hl_pane_g2

0x9aed,	// (0x000523e6) list_single_graphic_hl_pane_g3_ParamLimits

0x9aed,	// (0x000523e6) list_single_graphic_hl_pane_g3

0x59b5,	// (0x0004e2ae) list_single_graphic_hl_pane_g4_ParamLimits

0x59b5,	// (0x0004e2ae) list_single_graphic_hl_pane_g4

0x59c1,	// (0x0004e2ba) list_single_graphic_hl_pane_g5_ParamLimits

0x59c1,	// (0x0004e2ba) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x000584e9) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x000584e9) list_single_graphic_hl_pane_g

0x9af9,	// (0x000523f2) list_single_graphic_hl_pane_t1_ParamLimits

0x9af9,	// (0x000523f2) list_single_graphic_hl_pane_t1

0x5985,	// (0x0004e27e) aid_size_min_hl_cp2

0x598e,	// (0x0004e287) list_highlight_pane_cp34_cp2_ParamLimits

0x598e,	// (0x0004e287) list_highlight_pane_cp34_cp2

0x5978,	// (0x0004e271) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5978,	// (0x0004e271) list_single_graphic_hl_pane_g1_cp2

0x599b,	// (0x0004e294) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x599b,	// (0x0004e294) list_single_graphic_hl_pane_g2_cp2

0x59a7,	// (0x0004e2a0) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x59a7,	// (0x0004e2a0) list_single_graphic_hl_pane_g3_cp2

0x59b5,	// (0x0004e2ae) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x59b5,	// (0x0004e2ae) list_single_graphic_hl_pane_g4_cp2

0x59c1,	// (0x0004e2ba) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x59c1,	// (0x0004e2ba) list_single_graphic_hl_pane_g5_cp2

0xb17b,	// (0x00053a74) control_pane_g4_ParamLimits

0xb17b,	// (0x00053a74) control_pane_g4

0x2635,	// (0x0004af2e) bg_popup_sub_pane_cp10_ParamLimits

0x5169,	// (0x0004da62) list_choice_list_pane_ParamLimits

0x5178,	// (0x0004da71) scroll_pane_cp23

0xa218,	// (0x00052b11) bg_popup_preview_window_pane_cp02_ParamLimits

0x57d1,	// (0x0004e0ca) list_preview_fixed_pane_ParamLimits

0x57e7,	// (0x0004e0e0) list_preview_fixed_pane_cp_ParamLimits

0x57e7,	// (0x0004e0e0) list_preview_fixed_pane_cp

0x57f3,	// (0x0004e0ec) popup_preview_fixed_window_g1_ParamLimits

0x57f3,	// (0x0004e0ec) popup_preview_fixed_window_g1

0x57ff,	// (0x0004e0f8) popup_preview_fixed_window_g2_ParamLimits

0x57ff,	// (0x0004e0f8) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00058478) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00058478) popup_preview_fixed_window_g

0xf4c0,	// (0x00057db9) aid_navi_side_left_pane_ParamLimits

0xf4d5,	// (0x00057dce) aid_navi_side_right_pane_ParamLimits

0xf4ed,	// (0x00057de6) navi_icon_pane_stacon_ParamLimits

0xf501,	// (0x00057dfa) navi_navi_pane_stacon_ParamLimits

0xf4ed,	// (0x00057de6) navi_text_pane_stacon_ParamLimits

0x7122,	// (0x0004fa1b) main_text_info_pane

0x59eb,	// (0x0004e2e4) listscroll_text_info_pane

0x59f3,	// (0x0004e2ec) list_text_info_pane_ParamLimits

0x59f3,	// (0x0004e2ec) list_text_info_pane

0x5a02,	// (0x0004e2fb) scroll_pane_cp24_ParamLimits

0x5a02,	// (0x0004e2fb) scroll_pane_cp24

0xcf96,	// (0x0005588f) list_text_info_pane_t1_ParamLimits

0xcf96,	// (0x0005588f) list_text_info_pane_t1

0xb2fd,	// (0x00053bf6) popup_fast_swap2_window_ParamLimits

0xb2fd,	// (0x00053bf6) popup_fast_swap2_window

0x5a45,	// (0x0004e33e) aid_size_cell_fast2

0x7122,	// (0x0004fa1b) bg_popup_window_pane_cp17

0x2f9b,	// (0x0004b894) heading_pane_cp2

0xa4a1,	// (0x00052d9a) listscroll_fast2_pane

0x5a4f,	// (0x0004e348) grid_fast2_pane

0x5a59,	// (0x0004e352) listscroll_fast2_pane_g1

0x5a63,	// (0x0004e35c) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x000584f4) listscroll_fast2_pane_g

0xaa0d,	// (0x00053306) scroll_pane_cp26

0x5a6d,	// (0x0004e366) cell_fast2_pane_ParamLimits

0x5a6d,	// (0x0004e366) cell_fast2_pane

0x5a84,	// (0x0004e37d) cell_fast2_pane_g1

0x5a8d,	// (0x0004e386) cell_fast2_pane_g2

0x5a96,	// (0x0004e38f) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x000584f9) cell_fast2_pane_g

0xa58a,	// (0x00052e83) grid_highlight_pane_cp9

0xa59f,	// (0x00052e98) main_eswt_pane_ParamLimits

0xa59f,	// (0x00052e98) main_eswt_pane

0x5a17,	// (0x0004e310) list_single_text_info_pane

0x5a9e,	// (0x0004e397) eswt_ctrl_button_pane

0x5a9e,	// (0x0004e397) eswt_ctrl_canvas_pane

0x5aa6,	// (0x0004e39f) eswt_ctrl_combo_pane

0x5a9e,	// (0x0004e397) eswt_ctrl_default_pane

0x5a9e,	// (0x0004e397) eswt_ctrl_label_pane

0x5aae,	// (0x0004e3a7) eswt_ctrl_wait_pane

0x5ab6,	// (0x0004e3af) eswt_shell_pane

0x7122,	// (0x0004fa1b) listscroll_eswt_app_pane

0x5ad6,	// (0x0004e3cf) popup_eswt_tasktip_window_ParamLimits

0x5ad6,	// (0x0004e3cf) popup_eswt_tasktip_window

0x2bd9,	// (0x0004b4d2) bg_popup_window_pane_cp18

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_ParamLimits

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_ParamLimits

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_ParamLimits

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_ParamLimits

0x5b0e,	// (0x0004e407) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x00058500) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x00058500) eswt_control_pane_g

0xa89a,	// (0x00053193) bg_button_pane_ParamLimits

0xa89a,	// (0x00053193) bg_button_pane

0xa59f,	// (0x00052e98) common_borders_pane_copy2_ParamLimits

0xa59f,	// (0x00052e98) common_borders_pane_copy2

0x5b1b,	// (0x0004e414) control_button_pane_g1_ParamLimits

0x5b1b,	// (0x0004e414) control_button_pane_g1

0x5b27,	// (0x0004e420) control_button_pane_g2_ParamLimits

0x5b27,	// (0x0004e420) control_button_pane_g2

0x5b33,	// (0x0004e42c) control_button_pane_g3_ParamLimits

0x5b33,	// (0x0004e42c) control_button_pane_g3

0x0002,

0xfc10,	// (0x00058509) control_button_pane_g_ParamLimits

0xfc10,	// (0x00058509) control_button_pane_g

0x5b47,	// (0x0004e440) control_button_pane_t1

0x5b55,	// (0x0004e44e) control_button_pane_t2

0x0001,

0xfc17,	// (0x00058510) control_button_pane_t

0x2b65,	// (0x0004b45e) bg_button_pane_g1

0x2b6d,	// (0x0004b466) bg_button_pane_g2

0x2b75,	// (0x0004b46e) bg_button_pane_g3

0x2b7d,	// (0x0004b476) bg_button_pane_g4

0x2b85,	// (0x0004b47e) bg_button_pane_g5

0x2b8d,	// (0x0004b486) bg_button_pane_g6

0x2b95,	// (0x0004b48e) bg_button_pane_g7

0x2b9d,	// (0x0004b496) bg_button_pane_g8

0x2ba5,	// (0x0004b49e) bg_button_pane_g9

0x0008,

0xf866,	// (0x0005815f) bg_button_pane_g

0x5124,	// (0x0004da1d) common_borders_pane_ParamLimits

0x5124,	// (0x0004da1d) common_borders_pane

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy1_ParamLimits

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy1

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy1_ParamLimits

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy1

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy1_ParamLimits

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy1

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy1_ParamLimits

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy1

0x515f,	// (0x0004da58) bg_eswt_ctrl_canvas_pane_g1

0x5124,	// (0x0004da1d) common_borders_pane_cp2_ParamLimits

0x5124,	// (0x0004da1d) common_borders_pane_cp2

0x5124,	// (0x0004da1d) common_borders_pane_cp3_ParamLimits

0x5124,	// (0x0004da1d) common_borders_pane_cp3

0x5b63,	// (0x0004e45c) separator_horizontal_pane

0x5b6b,	// (0x0004e464) separator_vertical_pane

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy2_ParamLimits

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy2

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy2_ParamLimits

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy2

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy2_ParamLimits

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy2

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy2_ParamLimits

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy2

0x7122,	// (0x0004fa1b) common_borders_pane_cp4

0x5b74,	// (0x0004e46d) separator_horizontal_pane_g1

0x5b7d,	// (0x0004e476) separator_horizontal_pane_g2

0x5b86,	// (0x0004e47f) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x00058515) separator_horizontal_pane_g

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy3_ParamLimits

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy3

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy3_ParamLimits

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy3

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy3_ParamLimits

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy3

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy3_ParamLimits

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy3

0x7122,	// (0x0004fa1b) common_borders_pane_cp5

0x5b8f,	// (0x0004e488) separator_vertical_pane_g1

0x5b98,	// (0x0004e491) separator_vertical_pane_g2

0x5ba1,	// (0x0004e49a) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x0005851c) separator_vertical_pane_g

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy4_ParamLimits

0x5ae7,	// (0x0004e3e0) eswt_control_pane_g1_copy4

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy4_ParamLimits

0x5af4,	// (0x0004e3ed) eswt_control_pane_g2_copy4

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy4_ParamLimits

0x5b01,	// (0x0004e3fa) eswt_control_pane_g3_copy4

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy4_ParamLimits

0x5b0e,	// (0x0004e407) eswt_control_pane_g4_copy4

0xcfb8,	// (0x000558b1) eswt_ctrl_combo_button_pane

0xcfc0,	// (0x000558b9) eswt_ctrl_input_pane

0xcfc8,	// (0x000558c1) popup_choice_list_window_cp70

0xcfd0,	// (0x000558c9) eswt_ctrl_input_pane_t1

0x7122,	// (0x0004fa1b) input_focus_pane_cp70

0x5124,	// (0x0004da1d) bg_button_pane_cp70_ParamLimits

0x5124,	// (0x0004da1d) bg_button_pane_cp70

0xcfde,	// (0x000558d7) eswt_ctrl_combo_button_pane_g1

0x5bd8,	// (0x0004e4d1) wait_bar_pane_cp70

0x2bd9,	// (0x0004b4d2) bg_popup_window_pane_cp70_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_popup_window_pane_cp70

0x5be0,	// (0x0004e4d9) popup_eswt_tasktip_window_t1

0x5bf6,	// (0x0004e4ef) wait_bar_pane_cp71_ParamLimits

0x5bf6,	// (0x0004e4ef) wait_bar_pane_cp71

0x5c02,	// (0x0004e4fb) grid_eswt_app_pane

0xad61,	// (0x0005365a) scroll_pane_cp70

0xcfe6,	// (0x000558df) cell_eswt_app_pane_ParamLimits

0xcfe6,	// (0x000558df) cell_eswt_app_pane

0xd018,	// (0x00055911) cell_eswt_app_pane_g1_ParamLimits

0xd018,	// (0x00055911) cell_eswt_app_pane_g1

0xd047,	// (0x00055940) cell_eswt_app_pane_g2_ParamLimits

0xd047,	// (0x00055940) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x00058523) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x00058523) cell_eswt_app_pane_g

0xd070,	// (0x00055969) cell_eswt_app_pane_t1_ParamLimits

0xd070,	// (0x00055969) cell_eswt_app_pane_t1

0x5cc7,	// (0x0004e5c0) grid_highlight_pane_cp70_ParamLimits

0x5cc7,	// (0x0004e5c0) grid_highlight_pane_cp70

0x21e3,	// (0x0004aadc) set_content_pane_g1

0xb10d,	// (0x00053a06) status_small_volume_pane

0x1570,	// (0x00049e69) status_small_volume_pane_g1

0x1578,	// (0x00049e71) volume_small2_pane

0x1581,	// (0x00049e7a) volume_small2_pane_g1

0x158a,	// (0x00049e83) volume_small2_pane_g2

0x1593,	// (0x00049e8c) volume_small2_pane_g3

0x159c,	// (0x00049e95) volume_small2_pane_g4

0x15a5,	// (0x00049e9e) volume_small2_pane_g5

0x15ae,	// (0x00049ea7) volume_small2_pane_g6

0x15b7,	// (0x00049eb0) volume_small2_pane_g7

0x15c0,	// (0x00049eb9) volume_small2_pane_g8

0x15c9,	// (0x00049ec2) volume_small2_pane_g9

0x15d2,	// (0x00049ecb) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x00058528) volume_small2_pane_g

0x5516,	// (0x0004de0f) fep_vkb_top_text_pane_g1_ParamLimits

0xcf3e,	// (0x00055837) fep_vkb_top_text_pane_t1_ParamLimits

0x580b,	// (0x0004e104) popup_preview_fixed_window_g3_ParamLimits

0x580b,	// (0x0004e104) popup_preview_fixed_window_g3

0xb995,	// (0x0005428e) popup_toolbar_trans_pane

0xc9a5,	// (0x0005529e) aid_height_set_list_ParamLimits

0x3f2f,	// (0x0004c828) aid_size_parent_ParamLimits

0x2635,	// (0x0004af2e) list_highlight_pane_cp2_ParamLimits

0x21e3,	// (0x0004aadc) set_content_pane_g1_ParamLimits

0xca8d,	// (0x00055386) list_single_image_pane_ParamLimits

0xca8d,	// (0x00055386) list_single_image_pane

0xd0a2,	// (0x0005599b) aid_size_cell_image_ParamLimits

0xd0a2,	// (0x0005599b) aid_size_cell_image

0xd0af,	// (0x000559a8) grid_single_image_pane_ParamLimits

0xd0af,	// (0x000559a8) grid_single_image_pane

0xa8a8,	// (0x000531a1) list_single_image_pane_g1_ParamLimits

0xa8a8,	// (0x000531a1) list_single_image_pane_g1

0xa8b4,	// (0x000531ad) list_single_image_pane_g2_ParamLimits

0xa8b4,	// (0x000531ad) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x0005853d) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x0005853d) list_single_image_pane_g

0x5cee,	// (0x0004e5e7) list_single_image_pane_t1_ParamLimits

0x5cee,	// (0x0004e5e7) list_single_image_pane_t1

0xd0bd,	// (0x000559b6) cell_image_list_pane_ParamLimits

0xd0bd,	// (0x000559b6) cell_image_list_pane

0xd0d1,	// (0x000559ca) cell_image_list_pane_g1

0xd0da,	// (0x000559d3) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x00058542) cell_image_list_pane_g

0x5d2c,	// (0x0004e625) aid_size_cell_tb_trans_pane

0xa89a,	// (0x00053193) bg_tb_trans_pane

0x5d3e,	// (0x0004e637) grid_tb_trans_pane

0x2b65,	// (0x0004b45e) bg_tb_trans_pane_g1

0x2b6d,	// (0x0004b466) bg_tb_trans_pane_g2

0x2b75,	// (0x0004b46e) bg_tb_trans_pane_g3

0x2b7d,	// (0x0004b476) bg_tb_trans_pane_g4

0x2b85,	// (0x0004b47e) bg_tb_trans_pane_g5

0x2b9d,	// (0x0004b496) bg_tb_trans_pane_g6

0x2ba5,	// (0x0004b49e) bg_tb_trans_pane_g7

0x2b8d,	// (0x0004b486) bg_tb_trans_pane_g8

0x2b95,	// (0x0004b48e) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x00058547) bg_tb_trans_pane_g

0x5d52,	// (0x0004e64b) cell_toolbar_trans_pane_ParamLimits

0x5d52,	// (0x0004e64b) cell_toolbar_trans_pane

0x515f,	// (0x0004da58) cell_toolbar_trans_pane_g1

0xcce6,	// (0x000555df) list_form2_midp_pane_t1

0xccf4,	// (0x000555ed) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x000583f0) list_form2_midp_pane_t

0x4db3,	// (0x0004d6ac) scroll_pane_cp51_ParamLimits

0x4f7a,	// (0x0004d873) form2_midp_wait_pane_g1

0x4f83,	// (0x0004d87c) form2_midp_wait_pane_g2

0x4f8c,	// (0x0004d885) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x00058405) form2_midp_wait_pane_g

0x7184,	// (0x0004fa7d) list_highlight_pane_cp21_ParamLimits

0x4fc5,	// (0x0004d8be) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4fd4,	// (0x0004d8cd) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4101,	// (0x0004c9fa) list_single_2graphic_im_pane_ParamLimits

0x4101,	// (0x0004c9fa) list_single_2graphic_im_pane

0xd0e3,	// (0x000559dc) list_single_2graphic_im_pane_g1_ParamLimits

0xd0e3,	// (0x000559dc) list_single_2graphic_im_pane_g1

0xd0f4,	// (0x000559ed) list_single_2graphic_im_pane_g2_ParamLimits

0xd0f4,	// (0x000559ed) list_single_2graphic_im_pane_g2

0xd100,	// (0x000559f9) list_single_2graphic_im_pane_g3_ParamLimits

0xd100,	// (0x000559f9) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x0005855a) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x0005855a) list_single_2graphic_im_pane_g

0xd114,	// (0x00055a0d) list_single_2graphic_im_pane_t1_ParamLimits

0xd114,	// (0x00055a0d) list_single_2graphic_im_pane_t1

0x5817,	// (0x0004e110) list_single_graphic_2heading_pane_fp_ParamLimits

0x5817,	// (0x0004e110) list_single_graphic_2heading_pane_fp

0xf196,	// (0x00057a8f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf196,	// (0x00057a8f) list_single_graphic_2heading_pane_fp_g1

0x5830,	// (0x0004e129) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5830,	// (0x0004e129) list_single_graphic_2heading_pane_fp_g2

0x5789,	// (0x0004e082) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5789,	// (0x0004e082) list_single_graphic_2heading_pane_fp_g3

0x5795,	// (0x0004e08e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5795,	// (0x0004e08e) list_single_graphic_2heading_pane_fp_g4

0x583c,	// (0x0004e135) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x583c,	// (0x0004e135) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00058488) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00058488) list_single_graphic_2heading_pane_fp_g

0xf2bd,	// (0x00057bb6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf2bd,	// (0x00057bb6) list_single_graphic_2heading_pane_fp_t1

0xf1ce,	// (0x00057ac7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf1ce,	// (0x00057ac7) list_single_graphic_2heading_pane_fp_t2

0xf2d3,	// (0x00057bcc) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf2d3,	// (0x00057bcc) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x00058563) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x00058563) list_single_graphic_2heading_pane_fp_t

0x51d8,	// (0x0004dad1) fep_hwr_write_pane_g5_ParamLimits

0x51d8,	// (0x0004dad1) fep_hwr_write_pane_g5

0x51e4,	// (0x0004dadd) fep_hwr_write_pane_g6_ParamLimits

0x51e4,	// (0x0004dadd) fep_hwr_write_pane_g6

0x5ab6,	// (0x0004e3af) eswt_shell_pane_ParamLimits

0x2bd9,	// (0x0004b4d2) bg_popup_window_pane_cp18_ParamLimits

0x3e75,	// (0x0004c76e) heading_pane_cp70

0x5be0,	// (0x0004e4d9) popup_eswt_tasktip_window_t1_ParamLimits

0xba5f,	// (0x00054358) aid_touch_tab_arrow_left

0xba75,	// (0x0005436e) aid_touch_tab_arrow_right

0x9ea5,	// (0x0005279e) title_pane_g3_ParamLimits

0x9ea5,	// (0x0005279e) title_pane_g3

0xa859,	// (0x00053152) set_value_pane_g1

0xb995,	// (0x0005428e) popup_toolbar_trans_pane_ParamLimits

0x5d2c,	// (0x0004e625) aid_size_cell_tb_trans_pane_ParamLimits

0xa89a,	// (0x00053193) bg_tb_trans_pane_ParamLimits

0x5d3e,	// (0x0004e637) grid_tb_trans_pane_ParamLimits

0xa218,	// (0x00052b11) cont_note_pane_ParamLimits

0xa218,	// (0x00052b11) cont_note_pane

0xa59f,	// (0x00052e98) cont_snote2_single_text_pane_ParamLimits

0xa59f,	// (0x00052e98) cont_snote2_single_text_pane

0xa59f,	// (0x00052e98) cont_snote2_single_graphic_pane_ParamLimits

0xa59f,	// (0x00052e98) cont_snote2_single_graphic_pane

0x31c3,	// (0x0004babc) cont_note_wait_pane_ParamLimits

0x31c3,	// (0x0004babc) cont_note_wait_pane

0x31c3,	// (0x0004babc) cont_note_image_pane_ParamLimits

0x31c3,	// (0x0004babc) cont_note_image_pane

0x5de6,	// (0x0004e6df) popup_note2_window_g1_ParamLimits

0x5de6,	// (0x0004e6df) popup_note2_window_g1

0x5e17,	// (0x0004e710) popup_note2_window_t1_ParamLimits

0x5e17,	// (0x0004e710) popup_note2_window_t1

0x5e5c,	// (0x0004e755) popup_note2_window_t2_ParamLimits

0x5e5c,	// (0x0004e755) popup_note2_window_t2

0x5ea1,	// (0x0004e79a) popup_note2_window_t3_ParamLimits

0x5ea1,	// (0x0004e79a) popup_note2_window_t3

0x5ee6,	// (0x0004e7df) popup_note2_window_t4_ParamLimits

0x5ee6,	// (0x0004e7df) popup_note2_window_t4

0xa29c,	// (0x00052b95) popup_note2_window_t5_ParamLimits

0xa29c,	// (0x00052b95) popup_note2_window_t5

0x0004,

0xfc76,	// (0x0005856f) popup_note2_window_t_ParamLimits

0xfc76,	// (0x0005856f) popup_note2_window_t

0x5f15,	// (0x0004e80e) popup_note2_image_window_g1_ParamLimits

0x5f15,	// (0x0004e80e) popup_note2_image_window_g1

0x5f21,	// (0x0004e81a) popup_note2_image_window_g2_ParamLimits

0x5f21,	// (0x0004e81a) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x0005857a) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x0005857a) popup_note2_image_window_g

0x5f33,	// (0x0004e82c) popup_note2_image_window_t1_ParamLimits

0x5f33,	// (0x0004e82c) popup_note2_image_window_t1

0x5f4b,	// (0x0004e844) popup_note2_image_window_t2_ParamLimits

0x5f4b,	// (0x0004e844) popup_note2_image_window_t2

0x5f63,	// (0x0004e85c) popup_note2_image_window_t3_ParamLimits

0x5f63,	// (0x0004e85c) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x0005857f) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x0005857f) popup_note2_image_window_t

0x31d1,	// (0x0004baca) popup_note2_wait_window_g1_ParamLimits

0x31d1,	// (0x0004baca) popup_note2_wait_window_g1

0x5f7f,	// (0x0004e878) popup_note2_wait_window_g2_ParamLimits

0x5f7f,	// (0x0004e878) popup_note2_wait_window_g2

0x31e9,	// (0x0004bae2) popup_note2_wait_window_g3_ParamLimits

0x31e9,	// (0x0004bae2) popup_note2_wait_window_g3

0x0002,

0xfc8d,	// (0x00058586) popup_note2_wait_window_g_ParamLimits

0xfc8d,	// (0x00058586) popup_note2_wait_window_g

0x5f8b,	// (0x0004e884) popup_note2_wait_window_t1_ParamLimits

0x5f8b,	// (0x0004e884) popup_note2_wait_window_t1

0x5fa9,	// (0x0004e8a2) popup_note2_wait_window_t2_ParamLimits

0x5fa9,	// (0x0004e8a2) popup_note2_wait_window_t2

0x5fc7,	// (0x0004e8c0) popup_note2_wait_window_t3_ParamLimits

0x5fc7,	// (0x0004e8c0) popup_note2_wait_window_t3

0x5fd9,	// (0x0004e8d2) popup_note2_wait_window_t4_ParamLimits

0x5fd9,	// (0x0004e8d2) popup_note2_wait_window_t4

0x0003,

0xfc94,	// (0x0005858d) popup_note2_wait_window_t_ParamLimits

0xfc94,	// (0x0005858d) popup_note2_wait_window_t

0x5feb,	// (0x0004e8e4) wait_bar2_pane_ParamLimits

0x5feb,	// (0x0004e8e4) wait_bar2_pane

0x6003,	// (0x0004e8fc) popup_snote2_single_text_window_g1_ParamLimits

0x6003,	// (0x0004e8fc) popup_snote2_single_text_window_g1

0x602b,	// (0x0004e924) popup_snote2_single_text_window_t1_ParamLimits

0x602b,	// (0x0004e924) popup_snote2_single_text_window_t1

0x6077,	// (0x0004e970) popup_snote2_single_text_window_t2_ParamLimits

0x6077,	// (0x0004e970) popup_snote2_single_text_window_t2

0x60c3,	// (0x0004e9bc) popup_snote2_single_text_window_t3_ParamLimits

0x60c3,	// (0x0004e9bc) popup_snote2_single_text_window_t3

0x6104,	// (0x0004e9fd) popup_snote2_single_text_window_t4_ParamLimits

0x6104,	// (0x0004e9fd) popup_snote2_single_text_window_t4

0x613a,	// (0x0004ea33) popup_snote2_single_text_window_t5_ParamLimits

0x613a,	// (0x0004ea33) popup_snote2_single_text_window_t5

0x0004,

0xfc9d,	// (0x00058596) popup_snote2_single_text_window_t_ParamLimits

0xfc9d,	// (0x00058596) popup_snote2_single_text_window_t

0x6165,	// (0x0004ea5e) popup_snote2_single_graphic_window_g1_ParamLimits

0x6165,	// (0x0004ea5e) popup_snote2_single_graphic_window_g1

0x618d,	// (0x0004ea86) popup_snote2_single_graphic_window_g2_ParamLimits

0x618d,	// (0x0004ea86) popup_snote2_single_graphic_window_g2

0x0001,

0xfca8,	// (0x000585a1) popup_snote2_single_graphic_window_g_ParamLimits

0xfca8,	// (0x000585a1) popup_snote2_single_graphic_window_g

0x61b5,	// (0x0004eaae) popup_snote2_single_graphic_window_t1_ParamLimits

0x61b5,	// (0x0004eaae) popup_snote2_single_graphic_window_t1

0x6201,	// (0x0004eafa) popup_snote2_single_graphic_window_t2_ParamLimits

0x6201,	// (0x0004eafa) popup_snote2_single_graphic_window_t2

0x60c3,	// (0x0004e9bc) popup_snote2_single_graphic_window_t3_ParamLimits

0x60c3,	// (0x0004e9bc) popup_snote2_single_graphic_window_t3

0x6104,	// (0x0004e9fd) popup_snote2_single_graphic_window_t4_ParamLimits

0x6104,	// (0x0004e9fd) popup_snote2_single_graphic_window_t4

0x613a,	// (0x0004ea33) popup_snote2_single_graphic_window_t5_ParamLimits

0x613a,	// (0x0004ea33) popup_snote2_single_graphic_window_t5

0x0004,

0xfcad,	// (0x000585a6) popup_snote2_single_graphic_window_t_ParamLimits

0xfcad,	// (0x000585a6) popup_snote2_single_graphic_window_t

0x4c63,	// (0x0004d55c) clock_nsta_pane_cp2_t1

0x4c63,	// (0x0004d55c) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x000583c6) clock_nsta_pane_cp2_t

0xe76f,	// (0x00057068) form_field_data_wide_pane_g1_ParamLimits

0xa8a8,	// (0x000531a1) form_field_data_wide_pane_g2_ParamLimits

0xa8a8,	// (0x000531a1) form_field_data_wide_pane_g2

0xa8b4,	// (0x000531ad) form_field_data_wide_pane_g3_ParamLimits

0xa8b4,	// (0x000531ad) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00057f79) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00057f79) form_field_data_wide_pane_g

0xcbef,	// (0x000554e8) grid_touch_3_pane_ParamLimits

0xcbef,	// (0x000554e8) grid_touch_3_pane

0xd145,	// (0x00055a3e) cell_touch_3_pane_ParamLimits

0xd145,	// (0x00055a3e) cell_touch_3_pane

0x515f,	// (0x0004da58) cell_touch_3_pane_g1

0x515f,	// (0x0004da58) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x0005844b) cell_touch_3_pane_g

0xa2f4,	// (0x00052bed) cont_query_data_pane

0xa2fc,	// (0x00052bf5) cont_query_data_pane_cp1

0x6280,	// (0x0004eb79) button_value_adjust_pane_cp7

0x6288,	// (0x0004eb81) query_popup_pane_cp3

0xe86b,	// (0x00057164) bg_popup_sub_pane_cp22_ParamLimits

0x01e2,	// (0x00048adb) navi_navi_volume_pane_cp2

0x01fd,	// (0x00048af6) popup_side_volume_key_window_g2

0x020c,	// (0x00048b05) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005800f) popup_side_volume_key_window_g

0x0229,	// (0x00048b22) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00058016) popup_side_volume_key_window_t

0xead8,	// (0x000573d1) popup_side_volume_key_window_ParamLimits

0x95a8,	// (0x00051ea1) list_double_graphic_pane_g4_ParamLimits

0x95a8,	// (0x00051ea1) list_double_graphic_pane_g4

0xbe6b,	// (0x00054764) list_single_2heading_msg_pane_ParamLimits

0xbe6b,	// (0x00054764) list_single_2heading_msg_pane

0xbecd,	// (0x000547c6) list_single_2heading_msg_pane_g1_ParamLimits

0xbecd,	// (0x000547c6) list_single_2heading_msg_pane_g1

0xbed9,	// (0x000547d2) list_single_2heading_msg_pane_g2_ParamLimits

0xbed9,	// (0x000547d2) list_single_2heading_msg_pane_g2

0xbeec,	// (0x000547e5) list_single_2heading_msg_pane_g3_ParamLimits

0xbeec,	// (0x000547e5) list_single_2heading_msg_pane_g3

0xbef8,	// (0x000547f1) list_single_2heading_msg_pane_g4_ParamLimits

0xbef8,	// (0x000547f1) list_single_2heading_msg_pane_g4

0x0003,

0xfcb8,	// (0x000585b1) list_single_2heading_msg_pane_g_ParamLimits

0xfcb8,	// (0x000585b1) list_single_2heading_msg_pane_g

0x9b0f,	// (0x00052408) list_single_2heading_msg_pane_t1_ParamLimits

0x9b0f,	// (0x00052408) list_single_2heading_msg_pane_t1

0x9b37,	// (0x00052430) list_single_2heading_msg_pane_t2_ParamLimits

0x9b37,	// (0x00052430) list_single_2heading_msg_pane_t2

0x9ba2,	// (0x0005249b) list_single_2heading_msg_pane_t3_ParamLimits

0x9ba2,	// (0x0005249b) list_single_2heading_msg_pane_t3

0xf2f3,	// (0x00057bec) list_single_2heading_msg_pane_t4_ParamLimits

0xf2f3,	// (0x00057bec) list_single_2heading_msg_pane_t4

0x0003,

0xfcc1,	// (0x000585ba) list_single_2heading_msg_pane_t_ParamLimits

0xfcc1,	// (0x000585ba) list_single_2heading_msg_pane_t

0x7140,	// (0x0004fa39) title_pane_g4_ParamLimits

0x7140,	// (0x0004fa39) title_pane_g4

0xf410,	// (0x00057d09) title_pane_stacon_g3_ParamLimits

0xf410,	// (0x00057d09) title_pane_stacon_g3

0x5da9,	// (0x0004e6a2) list_single_2graphic_im_pane_g4_ParamLimits

0x5da9,	// (0x0004e6a2) list_single_2graphic_im_pane_g4

0x3c33,	// (0x0004c52c) popup_side_volume_key_window_cp

0x448d,	// (0x0004cd86) main_idle_act2_pane_t1

0x0c76,	// (0x0004956f) toolbar_button_pane_g10

0xa797,	// (0x00053090) popup_toolbar_window_cp1

0x4c54,	// (0x0004d54d) clock_nsta_pane_cp_t1

0x4c54,	// (0x0004d54d) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x000583c1) clock_nsta_pane_cp_t

0x01e2,	// (0x00048adb) navi_navi_volume_pane_cp2_ParamLimits

0x01f1,	// (0x00048aea) popup_side_volume_key_window_g1_ParamLimits

0x01fd,	// (0x00048af6) popup_side_volume_key_window_g2_ParamLimits

0x020c,	// (0x00048b05) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005800f) popup_side_volume_key_window_g_ParamLimits

0x11e1,	// (0x00049ada) fep_hwr_aid_pane

0xcdf2,	// (0x000556eb) bg_fep_hwr_top_pane_g4_ParamLimits

0x51a8,	// (0x0004daa1) fep_hwr_top_pane_g1_ParamLimits

0x51ba,	// (0x0004dab3) fep_hwr_top_pane_g2_ParamLimits

0x129c,	// (0x00049b95) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x00058416) fep_hwr_top_pane_g_ParamLimits

0x12b1,	// (0x00049baa) fep_hwr_top_text_pane_ParamLimits

0x39e8,	// (0x0004c2e1) aid_touch_tab_arrow_arrow_2

0x39f1,	// (0x0004c2ea) aid_touch_tab_arrow_left_2

0x11f5,	// (0x00049aee) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x122c,	// (0x00049b25) fep_hwr_prediction_pane

0x5310,	// (0x0004dc09) fep_vkb_prediction_pane

0xcf1e,	// (0x00055817) fep_vkb_side_pane_g3_ParamLimits

0xcf1e,	// (0x00055817) fep_vkb_side_pane_g3

0x53c2,	// (0x0004dcbb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5890,	// (0x0004e189) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x589d,	// (0x0004e196) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x000584c0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x62af,	// (0x0004eba8) fep_hwr_prediction_pane_g1

0x160b,	// (0x00049f04) fep_hwr_prediction_pane_g2

0x1613,	// (0x00049f0c) fep_hwr_prediction_pane_g3

0x161b,	// (0x00049f14) fep_hwr_prediction_pane_g4

0x0003,

0xfcca,	// (0x000585c3) fep_hwr_prediction_pane_g

0x62af,	// (0x0004eba8) fep_vkb_prediction_pane_g1

0x62b9,	// (0x0004ebb2) fep_vkb_prediction_pane_g2

0x62c1,	// (0x0004ebba) fep_vkb_prediction_pane_g3

0x62c9,	// (0x0004ebc2) fep_vkb_prediction_pane_g4

0x0003,

0xfcd3,	// (0x000585cc) fep_vkb_prediction_pane_g

0x0f83,	// (0x0004987c) slider_set_pane_g3

0x0f97,	// (0x00049890) slider_set_pane_g4

0x0faf,	// (0x000498a8) slider_set_pane_g5

0x0f83,	// (0x0004987c) slider_set_pane_g6

0x0fc5,	// (0x000498be) slider_set_pane_g7

0x40ae,	// (0x0004c9a7) slider_form_pane_g3

0x40b7,	// (0x0004c9b0) slider_form_pane_g4

0x40bf,	// (0x0004c9b8) slider_form_pane_g5

0x40ae,	// (0x0004c9a7) slider_form_pane_g6

0xca4c,	// (0x00055345) slider_form_pane_g7

0x473b,	// (0x0004d034) slider_set_pane_vc_g3

0x4744,	// (0x0004d03d) slider_set_pane_vc_g4

0x474d,	// (0x0004d046) slider_set_pane_vc_g5

0x473b,	// (0x0004d034) slider_set_pane_vc_g6

0x4756,	// (0x0004d04f) slider_set_pane_vc_g7

0x492a,	// (0x0004d223) slider_form_pane_vc_g1

0x4933,	// (0x0004d22c) slider_form_pane_vc_g2

0x493c,	// (0x0004d235) slider_form_pane_vc_g3

0x492a,	// (0x0004d223) slider_form_pane_vc_g4

0x4945,	// (0x0004d23e) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x00058393) slider_form_pane_vc_g

0x7122,	// (0x0004fa1b) main_idle_act3_pane

0x62d1,	// (0x0004ebca) ai3_links_pane

0xd191,	// (0x00055a8a) popup_ai3_data_window_ParamLimits

0xd191,	// (0x00055a8a) popup_ai3_data_window

0x7122,	// (0x0004fa1b) grid_ai3_links_pane

0xd1af,	// (0x00055aa8) cell_ai3_links_pane_ParamLimits

0xd1af,	// (0x00055aa8) cell_ai3_links_pane

0x6312,	// (0x0004ec0b) bg_popup_sub_pane_cp11

0x631f,	// (0x0004ec18) cell_ai3_links_pane_g1

0x7122,	// (0x0004fa1b) bg_popup_sub_pane_cp12

0x6344,	// (0x0004ec3d) heading_ai3_data_pane

0x634c,	// (0x0004ec45) list_ai3_gene_pane

0x6358,	// (0x0004ec51) popup_ai3_data_window_g1

0x6360,	// (0x0004ec59) heading_ai3_data_pane_g1

0x6368,	// (0x0004ec61) heading_ai3_data_pane_t1

0x6376,	// (0x0004ec6f) list_double_ai3_gene_pane_ParamLimits

0x6376,	// (0x0004ec6f) list_double_ai3_gene_pane

0x6383,	// (0x0004ec7c) list_single_ai3_gene_pane_ParamLimits

0x6383,	// (0x0004ec7c) list_single_ai3_gene_pane

0x5124,	// (0x0004da1d) list_highlight_pane_cp7_ParamLimits

0x5124,	// (0x0004da1d) list_highlight_pane_cp7

0x6390,	// (0x0004ec89) list_single_a13_gene_pane_t1_ParamLimits

0x6390,	// (0x0004ec89) list_single_a13_gene_pane_t1

0x63a7,	// (0x0004eca0) list_single_ai3_gene_pane_g1

0x63b0,	// (0x0004eca9) list_single_ai3_gene_pane_g2

0x0001,

0xfcdc,	// (0x000585d5) list_single_ai3_gene_pane_g

0x63b8,	// (0x0004ecb1) list_double_ai3_gene_pane_g1_ParamLimits

0x63b8,	// (0x0004ecb1) list_double_ai3_gene_pane_g1

0x63c4,	// (0x0004ecbd) list_double_ai3_gene_pane_t1_ParamLimits

0x63c4,	// (0x0004ecbd) list_double_ai3_gene_pane_t1

0x63e0,	// (0x0004ecd9) list_double_ai3_gene_pane_t2_ParamLimits

0x63e0,	// (0x0004ecd9) list_double_ai3_gene_pane_t2

0x63f5,	// (0x0004ecee) list_double_ai3_gene_pane_t3_ParamLimits

0x63f5,	// (0x0004ecee) list_double_ai3_gene_pane_t3

0x0002,

0xfce1,	// (0x000585da) list_double_ai3_gene_pane_t_ParamLimits

0xfce1,	// (0x000585da) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2e9,	// (0x00057be2) aid_size_min_col_2

0xd17b,	// (0x00055a74) aid_size_min_msg_ParamLimits

0xd17b,	// (0x00055a74) aid_size_min_msg

0xcf32,	// (0x0005582b) fep_vkb_top_text_pane_g2_ParamLimits

0xcf32,	// (0x0005582b) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x00058446) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x00058446) fep_vkb_top_text_pane_g

0x7122,	// (0x0004fa1b) main_hc_apps_shell_pane

0x6412,	// (0x0004ed0b) grid_hc_apps_pane_ParamLimits

0x6412,	// (0x0004ed0b) grid_hc_apps_pane

0x6421,	// (0x0004ed1a) list_hc_apps_pane

0x6429,	// (0x0004ed22) scroll_pane_cp37_ParamLimits

0x6429,	// (0x0004ed22) scroll_pane_cp37

0xd1c9,	// (0x00055ac2) cell_hc_apps_pane_ParamLimits

0xd1c9,	// (0x00055ac2) cell_hc_apps_pane

0xd293,	// (0x00055b8c) cell_hc_apps_pane_g1_ParamLimits

0xd293,	// (0x00055b8c) cell_hc_apps_pane_g1

0x651e,	// (0x0004ee17) cell_hc_apps_pane_g2_ParamLimits

0x651e,	// (0x0004ee17) cell_hc_apps_pane_g2

0x653a,	// (0x0004ee33) cell_hc_apps_pane_g3_ParamLimits

0x653a,	// (0x0004ee33) cell_hc_apps_pane_g3

0x0002,

0xfce8,	// (0x000585e1) cell_hc_apps_pane_g_ParamLimits

0xfce8,	// (0x000585e1) cell_hc_apps_pane_g

0xd2c0,	// (0x00055bb9) cell_hc_apps_pane_t1_ParamLimits

0xd2c0,	// (0x00055bb9) cell_hc_apps_pane_t1

0xa218,	// (0x00052b11) grid_highlight_pane_cp10_ParamLimits

0xa218,	// (0x00052b11) grid_highlight_pane_cp10

0xd300,	// (0x00055bf9) list_single_hc_apps_pane_ParamLimits

0xd300,	// (0x00055bf9) list_single_hc_apps_pane

0xd33a,	// (0x00055c33) list_single_hc_apps_pane_g1

0xbf10,	// (0x00054809) list_single_hc_apps_pane_g2

0x0001,

0xfcef,	// (0x000585e8) list_single_hc_apps_pane_g

0xbf29,	// (0x00054822) list_single_hc_apps_pane_g2_copy1

0x9c10,	// (0x00052509) list_single_hc_apps_pane_t1

0x7184,	// (0x0004fa7d) bg_set_opt_pane_cp_ParamLimits

0xf322,	// (0x00057c1b) setting_slider_pane_t1_ParamLimits

0xf33b,	// (0x00057c34) setting_slider_pane_t2_ParamLimits

0xf355,	// (0x00057c4e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00057e57) setting_slider_pane_t_ParamLimits

0xf36d,	// (0x00057c66) slider_set_pane_ParamLimits

0x04f9,	// (0x00048df2) control_pane_g5_ParamLimits

0x04f9,	// (0x00048df2) control_pane_g5

0x3ee1,	// (0x0004c7da) slider_set_pane_g1_ParamLimits

0x0f77,	// (0x00049870) slider_set_pane_g2_ParamLimits

0x0f83,	// (0x0004987c) slider_set_pane_g3_ParamLimits

0x0f97,	// (0x00049890) slider_set_pane_g4_ParamLimits

0x0faf,	// (0x000498a8) slider_set_pane_g5_ParamLimits

0x0f83,	// (0x0004987c) slider_set_pane_g6_ParamLimits

0x0fc5,	// (0x000498be) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0005825d) slider_set_pane_g_ParamLimits

0xebbd,	// (0x000574b6) navi_icon_text_pane_ParamLimits

0xba26,	// (0x0005431f) aid_fill_nsta_2_ParamLimits

0xba5f,	// (0x00054358) aid_touch_tab_arrow_left_ParamLimits

0xba75,	// (0x0005436e) aid_touch_tab_arrow_right_ParamLimits

0xbb10,	// (0x00054409) clock_nsta_pane_ParamLimits

0xc88c,	// (0x00055185) navi_icon_pane_g1_ParamLimits

0xc898,	// (0x00055191) navi_text_pane_t1_ParamLimits

0xccc8,	// (0x000555c1) navi_icon_text_pane_g1_ParamLimits

0xccd4,	// (0x000555cd) navi_icon_text_pane_t1_ParamLimits

0xd33a,	// (0x00055c33) list_single_hc_apps_pane_g1_ParamLimits

0xbf10,	// (0x00054809) list_single_hc_apps_pane_g2_ParamLimits

0xfcef,	// (0x000585e8) list_single_hc_apps_pane_g_ParamLimits

0xbf29,	// (0x00054822) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9c10,	// (0x00052509) list_single_hc_apps_pane_t1_ParamLimits

0x9d94,	// (0x0005268d) popup_toolbar2_fixed_window_ParamLimits

0x9d94,	// (0x0005268d) popup_toolbar2_fixed_window

0xb98b,	// (0x00054284) popup_toolbar2_float_window

0x7122,	// (0x0004fa1b) bg_popup_sub_pane_cp27

0x65f4,	// (0x0004eeed) grid_toolbar2_float_pane

0x7122,	// (0x0004fa1b) bg_popup_sub_pane_cp26

0x65f4,	// (0x0004eeed) grid_toolbar2_fixed_pane

0xd353,	// (0x00055c4c) cell_toolbar2_fixed_pane_ParamLimits

0xd353,	// (0x00055c4c) cell_toolbar2_fixed_pane

0xd36d,	// (0x00055c66) cell_toolbar2_fixed_pane_g1

0x6615,	// (0x0004ef0e) toolbar2_fixed_button_pane

0x2b65,	// (0x0004b45e) toolbar2_fixed_button_pane_g1

0x2b6d,	// (0x0004b466) toolbar2_fixed_button_pane_g2

0x2b75,	// (0x0004b46e) toolbar2_fixed_button_pane_g3

0x2b7d,	// (0x0004b476) toolbar2_fixed_button_pane_g4

0x2b85,	// (0x0004b47e) toolbar2_fixed_button_pane_g5

0x2b8d,	// (0x0004b486) toolbar2_fixed_button_pane_g6

0x2b95,	// (0x0004b48e) toolbar2_fixed_button_pane_g7

0x2b9d,	// (0x0004b496) toolbar2_fixed_button_pane_g8

0x2ba5,	// (0x0004b49e) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0005815f) toolbar2_fixed_button_pane_g

0x661d,	// (0x0004ef16) cell_toolbar2_float_pane_ParamLimits

0x661d,	// (0x0004ef16) cell_toolbar2_float_pane

0x662e,	// (0x0004ef27) cell_toolbar2_float_pane_g1

0x6615,	// (0x0004ef0e) toolbar2_fixed_button_pane_cp

0xce1a,	// (0x00055713) fep_vkb_accented_list_pane_ParamLimits

0xce1a,	// (0x00055713) fep_vkb_accented_list_pane

0x1413,	// (0x00049d0c) bg_popup_fep_shadow_pane_g9

0x2306,	// (0x0004abff) bg_popup_fep_shadow_pane_cp3

0xa9f4,	// (0x000532ed) list_accented_list_pane

0x6637,	// (0x0004ef30) list_single_accented_list_pane_ParamLimits

0x6637,	// (0x0004ef30) list_single_accented_list_pane

0x2306,	// (0x0004abff) list_highlight_pane_cp10

0x6648,	// (0x0004ef41) list_single_accented_list_pane_t1

0xb8a9,	// (0x000541a2) popup_slider_window_ParamLimits

0xb8a9,	// (0x000541a2) popup_slider_window

0x6290,	// (0x0004eb89) aid_indentation_list_msg

0xd470,	// (0x00055d69) bg_popup_window_pane_cp19

0x6784,	// (0x0004f07d) popup_slider_window_g1

0x67a0,	// (0x0004f099) popup_slider_window_g2

0x67bc,	// (0x0004f0b5) popup_slider_window_g3

0x0005,

0xfcf4,	// (0x000585ed) popup_slider_window_g

0x6822,	// (0x0004f11b) popup_slider_window_t1

0x6896,	// (0x0004f18f) small_volume_slider_vertical_pane

0x515f,	// (0x0004da58) small_volume_slider_vertical_pane_g1

0x515f,	// (0x0004da58) small_volume_slider_vertical_pane_g2

0x68b2,	// (0x0004f1ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfd06,	// (0x000585ff) small_volume_slider_vertical_pane_g

0x9cfe,	// (0x000525f7) area_side_right_pane_ParamLimits

0x9cfe,	// (0x000525f7) area_side_right_pane

0xbf45,	// (0x0005483e) aid_size_side_button_ParamLimits

0xbf45,	// (0x0005483e) aid_size_side_button

0xbf5e,	// (0x00054857) grid_sctrl_middle_pane_ParamLimits

0xbf5e,	// (0x00054857) grid_sctrl_middle_pane

0x168b,	// (0x00049f84) sctrl_sk_bottom_pane

0x169c,	// (0x00049f95) sctrl_sk_top_pane

0x16ae,	// (0x00049fa7) aid_touch_sctrl_top

0xa218,	// (0x00052b11) bg_sctrl_sk_pane_ParamLimits

0xa218,	// (0x00052b11) bg_sctrl_sk_pane

0x16bb,	// (0x00049fb4) sctrl_sk_top_pane_g1

0x16c8,	// (0x00049fc1) sctrl_sk_top_pane_t1

0x16ae,	// (0x00049fa7) aid_touch_sctrl_bottom

0xa218,	// (0x00052b11) bg_sctrl_sk_pane_cp_ParamLimits

0xa218,	// (0x00052b11) bg_sctrl_sk_pane_cp

0x16e3,	// (0x00049fdc) sctrl_sk_bottom_pane_g1

0x16c8,	// (0x00049fc1) sctrl_sk_bottom_pane_t1

0xbf78,	// (0x00054871) cell_sctrl_middle_pane_ParamLimits

0xbf78,	// (0x00054871) cell_sctrl_middle_pane

0xbf8b,	// (0x00054884) aid_touch_sctrl_middle_ParamLimits

0xbf8b,	// (0x00054884) aid_touch_sctrl_middle

0xbf98,	// (0x00054891) bg_sctrl_middle_pane_ParamLimits

0xbf98,	// (0x00054891) bg_sctrl_middle_pane

0x693d,	// (0x0004f236) cell_sctrl_middle_pane_g1_ParamLimits

0x693d,	// (0x0004f236) cell_sctrl_middle_pane_g1

0xbfa6,	// (0x0005489f) cell_sctrl_middle_pane_g2_ParamLimits

0xbfa6,	// (0x0005489f) cell_sctrl_middle_pane_g2

0x0001,

0xfd12,	// (0x0005860b) cell_sctrl_middle_pane_g_ParamLimits

0xfd12,	// (0x0005860b) cell_sctrl_middle_pane_g

0x2b65,	// (0x0004b45e) bg_sctrl_middle_pane_g1

0x2b6d,	// (0x0004b466) bg_sctrl_middle_pane_g2

0x2b75,	// (0x0004b46e) bg_sctrl_middle_pane_g3

0x2b7d,	// (0x0004b476) bg_sctrl_middle_pane_g4

0x2b85,	// (0x0004b47e) bg_sctrl_middle_pane_g5

0x2b8d,	// (0x0004b486) bg_sctrl_middle_pane_g6

0x2b95,	// (0x0004b48e) bg_sctrl_middle_pane_g7

0x2b9d,	// (0x0004b496) bg_sctrl_middle_pane_g8

0x0007,

0xfd17,	// (0x00058610) bg_sctrl_middle_pane_g

0x2ba5,	// (0x0004b49e) bg_sctrl_middle_pane_g8_copy1

0x2b65,	// (0x0004b45e) bg_sctrl_sk_pane_g1

0x2b6d,	// (0x0004b466) bg_sctrl_sk_pane_g2

0x2b75,	// (0x0004b46e) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0005815f) bg_sctrl_sk_pane_g

0xa75d,	// (0x00053056) aid_size_touch_scroll_bar

0x2b7d,	// (0x0004b476) bg_sctrl_sk_pane_g4

0x2b85,	// (0x0004b47e) bg_sctrl_sk_pane_g5

0x2b8d,	// (0x0004b486) bg_sctrl_sk_pane_g6

0x2b95,	// (0x0004b48e) bg_sctrl_sk_pane_g7

0x2b9d,	// (0x0004b496) bg_sctrl_sk_pane_g8

0x2ba5,	// (0x0004b49e) bg_sctrl_sk_pane_g9

0x06b9,	// (0x00048fb2) popup_fep_china_hwr2_fs_candidate_window

0xb361,	// (0x00053c5a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb361,	// (0x00053c5a) popup_fep_china_hwr2_fs_control_window

0x53c2,	// (0x0004dcbb) sctrl_sk_top_pane_g2

0x0001,

0xfd0d,	// (0x00058606) sctrl_sk_top_pane_g

0xd528,	// (0x00055e21) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd528,	// (0x00055e21) aid_fep_china_hwr2_fs_cell

0xd53e,	// (0x00055e37) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd53e,	// (0x00055e37) bg_popup_fep_shadow_pane_cp4

0xd555,	// (0x00055e4e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd555,	// (0x00055e4e) bg_popup_fep_shadow_pane_cp5

0xd567,	// (0x00055e60) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd567,	// (0x00055e60) popup_fep_china_hwr2_fs_control_bar_grid

0xd57b,	// (0x00055e74) popup_fep_china_hwr2_fs_control_funtion_grid

0x6911,	// (0x0004f20a) aid_fep_china_hwr2_fs_candi_cell

0x7122,	// (0x0004fa1b) bg_popup_fep_shadow_pane_cp6

0x691b,	// (0x0004f214) popup_fep_china_hwr2_fs_candidate_grid

0xd583,	// (0x00055e7c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd583,	// (0x00055e7c) cell_fep_china_hwr2_fs_funtion_grid

0x515f,	// (0x0004da58) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x693d,	// (0x0004f236) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x693d,	// (0x0004f236) cell_fep_china_hwr2_fs_funtion_grid_g1

0x694b,	// (0x0004f244) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x694b,	// (0x0004f244) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd28,	// (0x00058621) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd28,	// (0x00058621) cell_fep_china_hwr2_fs_funtion_grid_g

0xd59b,	// (0x00055e94) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd59b,	// (0x00055e94) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd5b0,	// (0x00055ea9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd5b0,	// (0x00055ea9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2d,	// (0x00058626) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2d,	// (0x00058626) cell_fep_china_hwr2_fs_funtion_grid_t

0x6992,	// (0x0004f28b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x699a,	// (0x0004f293) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x69a2,	// (0x0004f29b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd32,	// (0x0005862b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x69aa,	// (0x0004f2a3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x69aa,	// (0x0004f2a3) cell_fep_china_hwr2_fs_candidate_grid

0x69c9,	// (0x0004f2c2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x69d1,	// (0x0004f2ca) popup_fep_china_hwr2_fs_candidate_grid_g21

0x515f,	// (0x0004da58) cell_fep_china_hwr2_fs_candidate_grid_g1

0x515f,	// (0x0004da58) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x0005844b) cell_fep_china_hwr2_fs_candidate_grid_g

0x69d9,	// (0x0004f2d2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x274d,	// (0x0004b046) clock_nsta_pane_cp_24_ParamLimits

0x274d,	// (0x0004b046) clock_nsta_pane_cp_24

0x27cd,	// (0x0004b0c6) indicator_nsta_pane_cp_24_ParamLimits

0x27cd,	// (0x0004b0c6) indicator_nsta_pane_cp_24

0x3846,	// (0x0004c13f) heading_pane_g1

0x0001,

0xf8cb,	// (0x000581c4) heading_pane_g

0x42d4,	// (0x0004cbcd) grid_sct_catagory_button_pane

0x4306,	// (0x0004cbff) scroll_pane_cp5_ParamLimits

0x4dbf,	// (0x0004d6b8) button_value_adjust_pane_cp5_ParamLimits

0x4dbf,	// (0x0004d6b8) button_value_adjust_pane_cp5

0x4ea4,	// (0x0004d79d) form2_midp_time_pane_ParamLimits

0x69e7,	// (0x0004f2e0) cell_sct_catagory_button_pane_ParamLimits

0x69e7,	// (0x0004f2e0) cell_sct_catagory_button_pane

0x5124,	// (0x0004da1d) bg_button_pane_cp01_ParamLimits

0x5124,	// (0x0004da1d) bg_button_pane_cp01

0x515f,	// (0x0004da58) cell_sct_catagory_button_pane_g1

0xb928,	// (0x00054221) popup_tb_extension_window

0xd5cc,	// (0x00055ec5) aid_size_cell_ext_ParamLimits

0xd5cc,	// (0x00055ec5) aid_size_cell_ext

0xa59f,	// (0x00052e98) bg_tb_trans_pane_cp1_ParamLimits

0xa59f,	// (0x00052e98) bg_tb_trans_pane_cp1

0xd5f2,	// (0x00055eeb) grid_tb_ext_pane_ParamLimits

0xd5f2,	// (0x00055eeb) grid_tb_ext_pane

0xd62f,	// (0x00055f28) cell_tb_ext_pane_ParamLimits

0xd62f,	// (0x00055f28) cell_tb_ext_pane

0xd657,	// (0x00055f50) cell_tb_ext_pane_g1_ParamLimits

0xd657,	// (0x00055f50) cell_tb_ext_pane_g1

0x6a7b,	// (0x0004f374) cell_tb_ext_pane_t1

0xa218,	// (0x00052b11) list_highlight_pane_cp11_ParamLimits

0xa218,	// (0x00052b11) list_highlight_pane_cp11

0x9da9,	// (0x000526a2) popup_uni_indicator_window_ParamLimits

0x9da9,	// (0x000526a2) popup_uni_indicator_window

0xa89a,	// (0x00053193) bg_popup_sub_pane_cp14

0x6a96,	// (0x0004f38f) list_uniindi_pane

0x6aa2,	// (0x0004f39b) uniindi_top_pane

0xa218,	// (0x00052b11) bg_uniindi_top_pane

0x6ac3,	// (0x0004f3bc) uniindi_top_pane_g1

0x6ad9,	// (0x0004f3d2) uniindi_top_pane_g2

0x0003,

0xfd39,	// (0x00058632) uniindi_top_pane_g

0x6b03,	// (0x0004f3fc) uniindi_top_pane_t1

0x6b2f,	// (0x0004f428) list_single_uniindi_pane_ParamLimits

0x6b2f,	// (0x0004f428) list_single_uniindi_pane

0x515f,	// (0x0004da58) bg_uniindi_top_pane_g1

0x6b41,	// (0x0004f43a) list_single_uniindi_pane_g1

0x6b54,	// (0x0004f44d) list_single_uniindi_pane_t1

0x7122,	// (0x0004fa1b) control_bg_pane

0x6b79,	// (0x0004f472) bg_sctrl_sk_pane_cp1

0x6b82,	// (0x0004f47b) bg_sctrl_sk_pane_cp2

0x6b8b,	// (0x0004f484) control_bg_pane_g1

0x6b94,	// (0x0004f48d) control_bg_pane_g2

0x0001,

0xfd42,	// (0x0005863b) control_bg_pane_g

0x4c08,	// (0x0004d501) cell_indicator_nsta_pane_g1_ParamLimits

0xcc2a,	// (0x00055523) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x000583af) cell_indicator_nsta_pane_g_ParamLimits

0xf16c,	// (0x00057a65) form2_midp_time_pane_t1_ParamLimits

0x11d3,	// (0x00049acc) main_idle_act4_pane_ParamLimits

0x11d3,	// (0x00049acc) main_idle_act4_pane

0xb928,	// (0x00054221) popup_tb_extension_window_ParamLimits

0xd617,	// (0x00055f10) tb_ext_find_pane_ParamLimits

0xd617,	// (0x00055f10) tb_ext_find_pane

0x6b9d,	// (0x0004f496) ai_gene_pane_1_cp1

0x2450,	// (0x0004ad49) ai_gene_pane_2_cp1

0x6ba5,	// (0x0004f49e) list_single_idle_plugin_calendar_pane

0x6bae,	// (0x0004f4a7) list_single_idle_plugin_notification_pane

0x6bb7,	// (0x0004f4b0) list_single_idle_plugin_player_pane

0xd674,	// (0x00055f6d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd674,	// (0x00055f6d) list_single_idle_plugin_shortcut_pane

0xd69c,	// (0x00055f95) main_idle_act4_pane_t1

0xd6b4,	// (0x00055fad) main_idle_act4_pane_t2

0x0001,

0xfd47,	// (0x00058640) main_idle_act4_pane_t

0xd6cc,	// (0x00055fc5) middle_sk_idle_act4_pane_ParamLimits

0xd6cc,	// (0x00055fc5) middle_sk_idle_act4_pane

0xd6e8,	// (0x00055fe1) popup_clock_digital_analogue_window_cp2

0xd70f,	// (0x00056008) shortcut_wheel_idle_act4_pane_ParamLimits

0xd70f,	// (0x00056008) shortcut_wheel_idle_act4_pane

0x515f,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g1

0x515f,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g2

0x515f,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g3

0x515f,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g4

0x515f,	// (0x0004da58) shortcut_wheel_idle_act4_pane_g5

0x6c4a,	// (0x0004f543) shortcut_wheel_idle_act4_pane_g6

0x6c52,	// (0x0004f54b) shortcut_wheel_idle_act4_pane_g7

0x6c5a,	// (0x0004f553) shortcut_wheel_idle_act4_pane_g8

0x6c62,	// (0x0004f55b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4c,	// (0x00058645) shortcut_wheel_idle_act4_pane_g

0xcdf2,	// (0x000556eb) middle_sk_idle_act4_pane_g1_ParamLimits

0xcdf2,	// (0x000556eb) middle_sk_idle_act4_pane_g1

0xd78c,	// (0x00056085) middle_sk_idle_act4_pane_g2_ParamLimits

0xd78c,	// (0x00056085) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6f,	// (0x00058668) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6f,	// (0x00058668) middle_sk_idle_act4_pane_g

0xd7a4,	// (0x0005609d) middle_sk_idle_act4_pane_t1_ParamLimits

0xd7a4,	// (0x0005609d) middle_sk_idle_act4_pane_t1

0xd7d3,	// (0x000560cc) grid_ai_shortcut_pane_ParamLimits

0xd7d3,	// (0x000560cc) grid_ai_shortcut_pane

0xd7f0,	// (0x000560e9) list_highlight_pane_cp16_ParamLimits

0xd7f0,	// (0x000560e9) list_highlight_pane_cp16

0xd7fd,	// (0x000560f6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd7fd,	// (0x000560f6) list_single_idle_plugin_shortcut_pane_g1

0xd809,	// (0x00056102) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd809,	// (0x00056102) list_single_idle_plugin_shortcut_pane_g2

0xd827,	// (0x00056120) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd827,	// (0x00056120) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd74,	// (0x0005866d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd74,	// (0x0005866d) list_single_idle_plugin_shortcut_pane_g

0xd83c,	// (0x00056135) cell_ai_shortcut_pane_ParamLimits

0xd83c,	// (0x00056135) cell_ai_shortcut_pane

0xd852,	// (0x0005614b) cell_ai_shortcut_pane_g1_ParamLimits

0xd852,	// (0x0005614b) cell_ai_shortcut_pane_g1

0x6b9d,	// (0x0004f496) ai_gene_pane_1_cp2

0x6d93,	// (0x0004f68c) ai_gene_pane_2_cp2

0x6d9b,	// (0x0004f694) list_highlight_pane_cp15

0x6da4,	// (0x0004f69d) list_single_idle_plugin_calendar_pane_g1

0x6d9b,	// (0x0004f694) list_highlight_pane_cp17

0x6dac,	// (0x0004f6a5) list_single_idle_plugin_calendar_pane_g1_copy1

0x6db4,	// (0x0004f6ad) list_single_idle_plugin_player_pane_g1

0x453b,	// (0x0004ce34) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7b,	// (0x00058674) list_single_idle_plugin_player_pane_g

0x6dbc,	// (0x0004f6b5) list_single_idle_plugin_player_pane_t1

0x6dca,	// (0x0004f6c3) list_single_idle_plugin_player_pane_t2

0x6dd8,	// (0x0004f6d1) list_single_idle_plugin_player_pane_t3

0x6de6,	// (0x0004f6df) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd80,	// (0x00058679) list_single_idle_plugin_player_pane_t

0x6df4,	// (0x0004f6ed) wait_bar_pane_cp15

0x6dfc,	// (0x0004f6f5) grid_ai_notification_pane

0x453b,	// (0x0004ce34) list_single_idle_plugin_notification_pane_g1

0xd874,	// (0x0005616d) cell_ai_notification_pane_ParamLimits

0xd874,	// (0x0005616d) cell_ai_notification_pane

0x6e12,	// (0x0004f70b) cell_ai_notification_pane_g1

0x6e1a,	// (0x0004f713) cell_ai_notification_pane_t1

0xd881,	// (0x0005617a) tb_ext_find_button_pane

0xd889,	// (0x00056182) tb_ext_find_pane_g1

0xd891,	// (0x0005618a) tb_ext_find_pane_t1

0xe80b,	// (0x00057104) tb_ext_find_button_pane_g1

0x6e46,	// (0x0004f73f) tb_ext_find_button_pane_g2

0x0001,

0xfd89,	// (0x00058682) tb_ext_find_button_pane_g

0xd69c,	// (0x00055f95) main_idle_act4_pane_t1_ParamLimits

0xd6b4,	// (0x00055fad) main_idle_act4_pane_t2_ParamLimits

0xfd47,	// (0x00058640) main_idle_act4_pane_t_ParamLimits

0xd6e8,	// (0x00055fe1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd6ff,	// (0x00055ff8) sat_plugin_idle_act4_pane_ParamLimits

0xd6ff,	// (0x00055ff8) sat_plugin_idle_act4_pane

0xd89f,	// (0x00056198) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd89f,	// (0x00056198) sat_plugin_idle_act4_pane_t1

0xd8b7,	// (0x000561b0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd8b7,	// (0x000561b0) sat_plugin_idle_act4_pane_t2

0xd8cf,	// (0x000561c8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd8cf,	// (0x000561c8) sat_plugin_idle_act4_pane_t3

0xd8e7,	// (0x000561e0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd8e7,	// (0x000561e0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8e,	// (0x00058687) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8e,	// (0x00058687) sat_plugin_idle_act4_pane_t

0xefff,	// (0x000578f8) popup_battery_window_ParamLimits

0xefff,	// (0x000578f8) popup_battery_window

0xa218,	// (0x00052b11) bg_popup_sub_pane_cp25_ParamLimits

0xa218,	// (0x00052b11) bg_popup_sub_pane_cp25

0x6e9b,	// (0x0004f794) popup_battery_window_g1_ParamLimits

0x6e9b,	// (0x0004f794) popup_battery_window_g1

0x6ea7,	// (0x0004f7a0) popup_battery_window_t1_ParamLimits

0x6ea7,	// (0x0004f7a0) popup_battery_window_t1

0x6eb9,	// (0x0004f7b2) popup_battery_window_t2_ParamLimits

0x6eb9,	// (0x0004f7b2) popup_battery_window_t2

0x0001,

0xfd97,	// (0x00058690) popup_battery_window_t_ParamLimits

0xfd97,	// (0x00058690) popup_battery_window_t

0xafce,	// (0x000538c7) midp_canvas_pane_ParamLimits

0xb02a,	// (0x00053923) midp_keypad_pane_ParamLimits

0xb02a,	// (0x00053923) midp_keypad_pane

0x2635,	// (0x0004af2e) main_midp_pane_ParamLimits

0x4c72,	// (0x0004d56b) signal_pane_g2_cp_ParamLimits

0xd8ff,	// (0x000561f8) aid_size_cell_midp_keypad_ParamLimits

0xd8ff,	// (0x000561f8) aid_size_cell_midp_keypad

0xd91d,	// (0x00056216) midp_keyp_game_grid_pane_ParamLimits

0xd91d,	// (0x00056216) midp_keyp_game_grid_pane

0xd944,	// (0x0005623d) midp_keyp_rocker_pane_ParamLimits

0xd944,	// (0x0005623d) midp_keyp_rocker_pane

0xd993,	// (0x0005628c) midp_keyp_sk_left_pane_ParamLimits

0xd993,	// (0x0005628c) midp_keyp_sk_left_pane

0xd9e9,	// (0x000562e2) midp_keyp_sk_right_pane_ParamLimits

0xd9e9,	// (0x000562e2) midp_keyp_sk_right_pane

0x7122,	// (0x0004fa1b) bg_button_pane_cp03

0xda3f,	// (0x00056338) midp_keyp_sk_left_pane_g1

0x7122,	// (0x0004fa1b) bg_button_pane_cp04

0xda3f,	// (0x00056338) midp_keyp_sk_right_pane_g1

0x515f,	// (0x0004da58) midp_keyp_rocker_pane_g1

0xda47,	// (0x00056340) keyp_game_cell_pane_ParamLimits

0xda47,	// (0x00056340) keyp_game_cell_pane

0x7122,	// (0x0004fa1b) bg_button_pane_cp02

0xda6d,	// (0x00056366) keyp_game_cell_pane_g1

0x9d40,	// (0x00052639) popup_fep_vkb2_window_ParamLimits

0x9d40,	// (0x00052639) popup_fep_vkb2_window

0xbfb2,	// (0x000548ab) aid_size_cell_vkb2_ParamLimits

0xbfb2,	// (0x000548ab) aid_size_cell_vkb2

0xbfe8,	// (0x000548e1) popup_fep_vkb2_window_g1_ParamLimits

0xbfe8,	// (0x000548e1) popup_fep_vkb2_window_g1

0xc038,	// (0x00054931) vkb2_area_bottom_pane_ParamLimits

0xc038,	// (0x00054931) vkb2_area_bottom_pane

0xc094,	// (0x0005498d) vkb2_area_keypad_pane_ParamLimits

0xc094,	// (0x0005498d) vkb2_area_keypad_pane

0xc0e2,	// (0x000549db) vkb2_area_top_pane_ParamLimits

0xc0e2,	// (0x000549db) vkb2_area_top_pane

0xc168,	// (0x00054a61) vkb2_top_entry_pane_ParamLimits

0xc168,	// (0x00054a61) vkb2_top_entry_pane

0xc195,	// (0x00054a8e) vkb2_top_grid_left_pane_ParamLimits

0xc195,	// (0x00054a8e) vkb2_top_grid_left_pane

0xc1b5,	// (0x00054aae) vkb2_top_grid_right_pane_ParamLimits

0xc1b5,	// (0x00054aae) vkb2_top_grid_right_pane

0x194f,	// (0x0004a248) vkb2_cell_keypad_pane_ParamLimits

0x194f,	// (0x0004a248) vkb2_cell_keypad_pane

0xc1fb,	// (0x00054af4) vkb2_area_bottom_grid_pane_ParamLimits

0xc1fb,	// (0x00054af4) vkb2_area_bottom_grid_pane

0xc225,	// (0x00054b1e) vkb2_area_bottom_pane_g1_ParamLimits

0xc225,	// (0x00054b1e) vkb2_area_bottom_pane_g1

0xc24b,	// (0x00054b44) vkb2_area_bottom_pane_g2_ParamLimits

0xc24b,	// (0x00054b44) vkb2_area_bottom_pane_g2

0xc27c,	// (0x00054b75) vkb2_area_bottom_pane_g3_ParamLimits

0xc27c,	// (0x00054b75) vkb2_area_bottom_pane_g3

0x0002,

0xfd9c,	// (0x00058695) vkb2_area_bottom_pane_g_ParamLimits

0xfd9c,	// (0x00058695) vkb2_area_bottom_pane_g

0x1af9,	// (0x0004a3f2) vkb2_top_cell_left_pane_ParamLimits

0x1af9,	// (0x0004a3f2) vkb2_top_cell_left_pane

0xda76,	// (0x0005636f) vkb2_top_entry_pane_g1_ParamLimits

0xda76,	// (0x0005636f) vkb2_top_entry_pane_g1

0xda84,	// (0x0005637d) vkb2_top_entry_pane_t1_ParamLimits

0xda84,	// (0x0005637d) vkb2_top_entry_pane_t1

0x7063,	// (0x0004f95c) vkb2_top_entry_pane_t2_ParamLimits

0x7063,	// (0x0004f95c) vkb2_top_entry_pane_t2

0x7095,	// (0x0004f98e) vkb2_top_entry_pane_t3_ParamLimits

0x7095,	// (0x0004f98e) vkb2_top_entry_pane_t3

0x0002,

0xfda3,	// (0x0005869c) vkb2_top_entry_pane_t_ParamLimits

0xfda3,	// (0x0005869c) vkb2_top_entry_pane_t

0xc2e6,	// (0x00054bdf) vkb2_top_grid_right_pane_g1_ParamLimits

0xc2e6,	// (0x00054bdf) vkb2_top_grid_right_pane_g1

0x1b5c,	// (0x0004a455) vkb2_top_grid_right_pane_g2_ParamLimits

0x1b5c,	// (0x0004a455) vkb2_top_grid_right_pane_g2

0x1b74,	// (0x0004a46d) vkb2_top_grid_right_pane_g3_ParamLimits

0x1b74,	// (0x0004a46d) vkb2_top_grid_right_pane_g3

0xc2fc,	// (0x00054bf5) vkb2_top_grid_right_pane_g4_ParamLimits

0xc2fc,	// (0x00054bf5) vkb2_top_grid_right_pane_g4

0x0003,

0xfdaa,	// (0x000586a3) vkb2_top_grid_right_pane_g_ParamLimits

0xfdaa,	// (0x000586a3) vkb2_top_grid_right_pane_g

0x1ba2,	// (0x0004a49b) vkb2_top_cell_left_pane_g1

0x1bb9,	// (0x0004a4b2) vkb2_cell_keypad_pane_g1_ParamLimits

0x1bb9,	// (0x0004a4b2) vkb2_cell_keypad_pane_g1

0x70b9,	// (0x0004f9b2) vkb2_cell_keypad_pane_t1_ParamLimits

0x70b9,	// (0x0004f9b2) vkb2_cell_keypad_pane_t1

0x1bc7,	// (0x0004a4c0) vkb2_cell_bottom_grid_pane_ParamLimits

0x1bc7,	// (0x0004a4c0) vkb2_cell_bottom_grid_pane

0x1c00,	// (0x0004a4f9) vkb2_cell_bottom_grid_pane_g1

0xd730,	// (0x00056029) aid_call2_pane_cp02

0xd738,	// (0x00056031) aid_call_pane_cp02

0xd740,	// (0x00056039) clock_digital_number_pane_cp10

0xd748,	// (0x00056041) clock_digital_number_pane_cp11

0xd750,	// (0x00056049) clock_digital_number_pane_cp12

0xd758,	// (0x00056051) clock_digital_number_pane_cp13

0xd760,	// (0x00056059) clock_digital_separator_pane_cp10

0xe80b,	// (0x00057104) popup_clock_digital_analogue_window_cp2_g1

0xe80b,	// (0x00057104) popup_clock_digital_analogue_window_cp2_g2

0xd768,	// (0x00056061) popup_clock_digital_analogue_window_cp2_g3

0xe80b,	// (0x00057104) popup_clock_digital_analogue_window_cp2_g4

0xd768,	// (0x00056061) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5f,	// (0x00058658) popup_clock_digital_analogue_window_cp2_g

0xd770,	// (0x00056069) popup_clock_digital_analogue_window_cp2_t1

0xd77e,	// (0x00056077) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6a,	// (0x00058663) popup_clock_digital_analogue_window_cp2_t

0x515f,	// (0x0004da58) clock_digital_number_pane_cp10_g1

0x515f,	// (0x0004da58) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x0005844b) clock_digital_number_pane_cp10_g

0x515f,	// (0x0004da58) clock_digital_separator_pane_cp10_g1

0x515f,	// (0x0004da58) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x0005844b) clock_digital_separator_pane_cp10_g

0x6ae5,	// (0x0004f3de) uniindi_top_pane_g3

0x6af6,	// (0x0004f3ef) uniindi_top_pane_g4

0x19da,	// (0x0004a2d3) vkb2_row_keypad_pane_ParamLimits

0x19da,	// (0x0004a2d3) vkb2_row_keypad_pane

0x1c1c,	// (0x0004a515) vkb2_cell_t_keypad_pane_ParamLimits

0x1c1c,	// (0x0004a515) vkb2_cell_t_keypad_pane

0x1c2c,	// (0x0004a525) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1c2c,	// (0x0004a525) vkb2_cell_t_keypad_pane_cp08

0x1c41,	// (0x0004a53a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1c41,	// (0x0004a53a) vkb2_cell_t_keypad_pane_cp09

0x1c55,	// (0x0004a54e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1c55,	// (0x0004a54e) vkb2_cell_t_keypad_pane_cp01

0x1c66,	// (0x0004a55f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1c66,	// (0x0004a55f) vkb2_cell_t_keypad_pane_cp02

0x1c77,	// (0x0004a570) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1c77,	// (0x0004a570) vkb2_cell_t_keypad_pane_cp03

0x1c88,	// (0x0004a581) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1c88,	// (0x0004a581) vkb2_cell_t_keypad_pane_cp04

0x1c99,	// (0x0004a592) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1c99,	// (0x0004a592) vkb2_cell_t_keypad_pane_cp05

0x1caa,	// (0x0004a5a3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1caa,	// (0x0004a5a3) vkb2_cell_t_keypad_pane_cp06

0x1cbd,	// (0x0004a5b6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1cbd,	// (0x0004a5b6) vkb2_cell_t_keypad_pane_cp07

0x1cd2,	// (0x0004a5cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1cd2,	// (0x0004a5cb) vkb2_cell_t_keypad_pane_cp10

0x53c2,	// (0x0004dcbb) vkb2_cell_t_keypad_pane_g1

0x70d0,	// (0x0004f9c9) vkb2_cell_t_keypad_pane_t1

0x7122,	// (0x0004fa1b) popup_grid_graphic2_window

0xdabd,	// (0x000563b6) aid_size_cell_graphic2_ParamLimits

0xdabd,	// (0x000563b6) aid_size_cell_graphic2

0xdafb,	// (0x000563f4) bg_popup_window_pane_cp21_ParamLimits

0xdafb,	// (0x000563f4) bg_popup_window_pane_cp21

0xdb09,	// (0x00056402) graphic2_pages_pane_ParamLimits

0xdb09,	// (0x00056402) graphic2_pages_pane

0xdb61,	// (0x0005645a) grid_graphic2_control_pane_ParamLimits

0xdb61,	// (0x0005645a) grid_graphic2_control_pane

0xdba9,	// (0x000564a2) grid_graphic2_pane_ParamLimits

0xdba9,	// (0x000564a2) grid_graphic2_pane

0xdc34,	// (0x0005652d) cell_graphic2_pane

0x7122,	// (0x0004fa1b) main_comp_mode_pane

0x634c,	// (0x0004ec45) list_ai3_gene_pane_ParamLimits

0xd470,	// (0x00055d69) bg_popup_window_pane_cp19_ParamLimits

0x6724,	// (0x0004f01d) bg_touch_area_indi_pane_ParamLimits

0x6724,	// (0x0004f01d) bg_touch_area_indi_pane

0x673a,	// (0x0004f033) bg_touch_area_indi_pane_cp01_ParamLimits

0x673a,	// (0x0004f033) bg_touch_area_indi_pane_cp01

0x6750,	// (0x0004f049) bg_touch_area_indi_pane_cp02_ParamLimits

0x6750,	// (0x0004f049) bg_touch_area_indi_pane_cp02

0x676a,	// (0x0004f063) bg_touch_area_indi_pane_cp03_ParamLimits

0x676a,	// (0x0004f063) bg_touch_area_indi_pane_cp03

0x6784,	// (0x0004f07d) popup_slider_window_g1_ParamLimits

0x67a0,	// (0x0004f099) popup_slider_window_g2_ParamLimits

0x67bc,	// (0x0004f0b5) popup_slider_window_g3_ParamLimits

0xfcf4,	// (0x000585ed) popup_slider_window_g_ParamLimits

0x6822,	// (0x0004f11b) popup_slider_window_t1_ParamLimits

0x6896,	// (0x0004f18f) small_volume_slider_vertical_pane_ParamLimits

0xdc34,	// (0x0005652d) cell_graphic2_pane_ParamLimits

0xdc97,	// (0x00056590) bg_button_pane_cp10_ParamLimits

0xdc97,	// (0x00056590) bg_button_pane_cp10

0xdcaa,	// (0x000565a3) bg_button_pane_cp11_ParamLimits

0xdcaa,	// (0x000565a3) bg_button_pane_cp11

0xdcbd,	// (0x000565b6) graphic2_pages_pane_g1_ParamLimits

0xdcbd,	// (0x000565b6) graphic2_pages_pane_g1

0xdcd8,	// (0x000565d1) graphic2_pages_pane_g2_ParamLimits

0xdcd8,	// (0x000565d1) graphic2_pages_pane_g2

0x0001,

0xfdb8,	// (0x000586b1) graphic2_pages_pane_g_ParamLimits

0xfdb8,	// (0x000586b1) graphic2_pages_pane_g

0xdcf0,	// (0x000565e9) graphic2_pages_pane_t1_ParamLimits

0xdcf0,	// (0x000565e9) graphic2_pages_pane_t1

0xdd08,	// (0x00056601) cell_graphic2_control_pane_ParamLimits

0xdd08,	// (0x00056601) cell_graphic2_control_pane

0xdd3c,	// (0x00056635) cell_graphic2_pane_g1_ParamLimits

0xdd3c,	// (0x00056635) cell_graphic2_pane_g1

0xce00,	// (0x000556f9) cell_graphic2_pane_g2_ParamLimits

0xce00,	// (0x000556f9) cell_graphic2_pane_g2

0xdd49,	// (0x00056642) cell_graphic2_pane_g3_ParamLimits

0xdd49,	// (0x00056642) cell_graphic2_pane_g3

0xce0d,	// (0x00055706) cell_graphic2_pane_g4_ParamLimits

0xce0d,	// (0x00055706) cell_graphic2_pane_g4

0xdd56,	// (0x0005664f) cell_graphic2_pane_g5_ParamLimits

0xdd56,	// (0x0005664f) cell_graphic2_pane_g5

0x0004,

0xfdbd,	// (0x000586b6) cell_graphic2_pane_g_ParamLimits

0xfdbd,	// (0x000586b6) cell_graphic2_pane_g

0xdd76,	// (0x0005666f) cell_graphic2_pane_t1_ParamLimits

0xdd76,	// (0x0005666f) cell_graphic2_pane_t1

0x383a,	// (0x0004c133) grid_highlight_pane_cp11_ParamLimits

0x383a,	// (0x0004c133) grid_highlight_pane_cp11

0xa218,	// (0x00052b11) bg_button_pane_cp05

0xddbf,	// (0x000566b8) cell_graphic2_control_pane_g1

0x515f,	// (0x0004da58) bg_touch_area_indi_pane_g1

0x746c,	// (0x0004fd65) aid_cmod_rocker_key_size

0x7476,	// (0x0004fd6f) aid_cmode_itu_key_size

0x7480,	// (0x0004fd79) main_cmode_video_pane

0x748a,	// (0x0004fd83) main_comp_mode_itu_pane

0x7496,	// (0x0004fd8f) main_comp_mode_rocker_pane

0x74a2,	// (0x0004fd9b) cell_cmode_rocker_pane_ParamLimits

0x74a2,	// (0x0004fd9b) cell_cmode_rocker_pane

0x74b6,	// (0x0004fdaf) cell_cmode_itu_pane_ParamLimits

0x74b6,	// (0x0004fdaf) cell_cmode_itu_pane

0xa89a,	// (0x00053193) bg_button_pane_cp06_ParamLimits

0xa89a,	// (0x00053193) bg_button_pane_cp06

0x53c2,	// (0x0004dcbb) cell_cmode_rocker_pane_g1_ParamLimits

0x53c2,	// (0x0004dcbb) cell_cmode_rocker_pane_g1

0x693d,	// (0x0004f236) cell_cmode_rocker_pane_g2_ParamLimits

0x693d,	// (0x0004f236) cell_cmode_rocker_pane_g2

0x0001,

0xfdcd,	// (0x000586c6) cell_cmode_rocker_pane_g_ParamLimits

0xfdcd,	// (0x000586c6) cell_cmode_rocker_pane_g

0x7122,	// (0x0004fa1b) bg_button_pane_cp07

0x74cd,	// (0x0004fdc6) cell_cmode_itu_pane_g1

0x74d6,	// (0x0004fdcf) cell_cmode_itu_pane_t1

0x74e4,	// (0x0004fddd) cell_cmode_itu_pane_t2

0x0001,

0xfdd2,	// (0x000586cb) cell_cmode_itu_pane_t

0x6b69,	// (0x0004f462) aid_touch_ctrl_left

0x6b71,	// (0x0004f46a) aid_touch_ctrl_right

0x7122,	// (0x0004fa1b) compa_mode_pane

0xdde7,	// (0x000566e0) aid_cmod_rocker_key_size_cp

0xddf1,	// (0x000566ea) aid_cmode_itu_key_size_cp

0x7506,	// (0x0004fdff) compa_mode_pane_g1

0x750e,	// (0x0004fe07) compa_mode_pane_g2

0x7516,	// (0x0004fe0f) compa_mode_pane_g3

0x0002,

0xfdd7,	// (0x000586d0) compa_mode_pane_g

0xddfb,	// (0x000566f4) main_comp_mode_itu_pane_cp

0xde03,	// (0x000566fc) main_comp_mode_rocker_pane_cp

0xde0b,	// (0x00056704) cell_cmode_itu_pane_cp_ParamLimits

0xde0b,	// (0x00056704) cell_cmode_itu_pane_cp

0xde20,	// (0x00056719) cell_cmode_rocker_pane_cp_ParamLimits

0xde20,	// (0x00056719) cell_cmode_rocker_pane_cp

0xa89a,	// (0x00053193) bg_button_pane_cp06_cp_ParamLimits

0xa89a,	// (0x00053193) bg_button_pane_cp06_cp

0x53c2,	// (0x0004dcbb) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x53c2,	// (0x0004dcbb) cell_cmode_rocker_pane_g1_cp

0x515f,	// (0x0004da58) cell_cmode_rocker_pane_g2_cp

0x7122,	// (0x0004fa1b) bg_button_pane_cp07_cp

0xde32,	// (0x0005672b) cell_cmode_itu_pane_g1_cp

0xde3b,	// (0x00056734) cell_cmode_itu_pane_t1_cp

0xde3b,	// (0x00056734) cell_cmode_itu_pane_t2_cp

0xca44,	// (0x0005533d) settings_code_pane_cp2

0x7184,	// (0x0004fa7d) bg_popup_window_pane_cp3_ParamLimits

0xa42c,	// (0x00052d25) heading_pane_cp3_ParamLimits

0xa438,	// (0x00052d31) listscroll_popup_graphic_pane_ParamLimits

0x11e1,	// (0x00049ada) fep_hwr_aid_pane_ParamLimits

0x16ae,	// (0x00049fa7) aid_touch_sctrl_top_ParamLimits

0x16bb,	// (0x00049fb4) sctrl_sk_top_pane_g1_ParamLimits

0x53c2,	// (0x0004dcbb) sctrl_sk_top_pane_g2_ParamLimits

0xfd0d,	// (0x00058606) sctrl_sk_top_pane_g_ParamLimits

0x16c8,	// (0x00049fc1) sctrl_sk_top_pane_t1_ParamLimits

0x16ae,	// (0x00049fa7) aid_touch_sctrl_bottom_ParamLimits

0x16c8,	// (0x00049fc1) sctrl_sk_bottom_pane_t1_ParamLimits

0x6aaf,	// (0x0004f3a8) aid_area_touch_clock

0xc12a,	// (0x00054a23) aid_vkb2_area_top_pane_cell_ParamLimits

0xc12a,	// (0x00054a23) aid_vkb2_area_top_pane_cell

0xc1d5,	// (0x00054ace) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc1d5,	// (0x00054ace) aid_vkb2_area_bottom_pane_cell

0x701b,	// (0x0004f914) popup_char_count_window

0x756c,	// (0x0004fe65) popup_char_count_window_g1

0x7575,	// (0x0004fe6e) popup_char_count_window_g2

0x757e,	// (0x0004fe77) popup_char_count_window_g3

0x0002,

0xfdde,	// (0x000586d7) popup_char_count_window_g

0x7587,	// (0x0004fe80) popup_char_count_window_t1

0x176b,	// (0x0004a064) popup_fep_char_preview_window_ParamLimits

0x176b,	// (0x0004a064) popup_fep_char_preview_window

0xc14a,	// (0x00054a43) vkb2_top_candi_pane_ParamLimits

0xc14a,	// (0x00054a43) vkb2_top_candi_pane

0xde49,	// (0x00056742) cell_vkb2_top_candi_pane_ParamLimits

0xde49,	// (0x00056742) cell_vkb2_top_candi_pane

0x31c3,	// (0x0004babc) bg_popup_fep_char_preview_window_ParamLimits

0x31c3,	// (0x0004babc) bg_popup_fep_char_preview_window

0x1ce7,	// (0x0004a5e0) popup_fep_char_preview_window_t1_ParamLimits

0x1ce7,	// (0x0004a5e0) popup_fep_char_preview_window_t1

0x75e6,	// (0x0004fedf) bg_popup_fep_char_preview_window_g1

0x75ee,	// (0x0004fee7) bg_popup_fep_char_preview_window_g2

0x75f6,	// (0x0004feef) bg_popup_fep_char_preview_window_g3

0x75fe,	// (0x0004fef7) bg_popup_fep_char_preview_window_g4

0x7606,	// (0x0004feff) bg_popup_fep_char_preview_window_g5

0x1d21,	// (0x0004a61a) bg_popup_fep_char_preview_window_g6

0x760e,	// (0x0004ff07) bg_popup_fep_char_preview_window_g7

0x7616,	// (0x0004ff0f) bg_popup_fep_char_preview_window_g8

0x761e,	// (0x0004ff17) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde5,	// (0x000586de) bg_popup_fep_char_preview_window_g

0x53c2,	// (0x0004dcbb) cell_vkb2_top_candi_pane_g1_ParamLimits

0x53c2,	// (0x0004dcbb) cell_vkb2_top_candi_pane_g1

0x5703,	// (0x0004dffc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5703,	// (0x0004dffc) cell_vkb2_top_candi_pane_g2

0x5724,	// (0x0004e01d) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5724,	// (0x0004e01d) cell_vkb2_top_candi_pane_g3

0x1d29,	// (0x0004a622) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1d29,	// (0x0004a622) cell_vkb2_top_candi_pane_g4

0x7626,	// (0x0004ff1f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7626,	// (0x0004ff1f) cell_vkb2_top_candi_pane_g5

0x693d,	// (0x0004f236) cell_vkb2_top_candi_pane_g6_ParamLimits

0x693d,	// (0x0004f236) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf8,	// (0x000586f1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf8,	// (0x000586f1) cell_vkb2_top_candi_pane_g

0x1d4a,	// (0x0004a643) cell_vkb2_top_candi_pane_t1

0x0f63,	// (0x0004985c) aid_size_touch_slider_mark_ParamLimits

0x0f63,	// (0x0004985c) aid_size_touch_slider_mark

0xdb45,	// (0x0005643e) grid_graphic2_catg_pane_ParamLimits

0xdb45,	// (0x0005643e) grid_graphic2_catg_pane

0xdc03,	// (0x000564fc) popup_grid_graphic2_window_t1_ParamLimits

0xdc03,	// (0x000564fc) popup_grid_graphic2_window_t1

0xdc19,	// (0x00056512) popup_grid_graphic2_window_t2_ParamLimits

0xdc19,	// (0x00056512) popup_grid_graphic2_window_t2

0x0001,

0xfdb3,	// (0x000586ac) popup_grid_graphic2_window_t_ParamLimits

0xfdb3,	// (0x000586ac) popup_grid_graphic2_window_t

0xa218,	// (0x00052b11) bg_button_pane_cp05_ParamLimits

0xddbf,	// (0x000566b8) cell_graphic2_control_pane_g1_ParamLimits

0xdeb3,	// (0x000567ac) cell_graphic2_catg_pane_ParamLimits

0xdeb3,	// (0x000567ac) cell_graphic2_catg_pane

0x7122,	// (0x0004fa1b) bg_button_pane_cp12

0xdec5,	// (0x000567be) cell_graphic2_catg_pane_g1

0x6a7b,	// (0x0004f374) cell_tb_ext_pane_t1_ParamLimits

0x1b19,	// (0x0004a412) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1b19,	// (0x0004a412) vkb2_top_cell_right_narrow_pane

0x1b31,	// (0x0004a42a) vkb2_top_cell_right_wide_pane_ParamLimits

0x1b31,	// (0x0004a42a) vkb2_top_cell_right_wide_pane

0x11d3,	// (0x00049acc) bg_vkb2_func_pane_ParamLimits

0x11d3,	// (0x00049acc) bg_vkb2_func_pane

0x1ba2,	// (0x0004a49b) vkb2_top_cell_left_pane_g1_ParamLimits

0x11d3,	// (0x00049acc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x11d3,	// (0x00049acc) bg_vkb2_fuc_pane_cp03

0x1c00,	// (0x0004a4f9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2b6d,	// (0x0004b466) bg_vkb2_func_pane_g1

0x2b75,	// (0x0004b46e) bg_vkb2_func_pane_g2

0x2b85,	// (0x0004b47e) bg_vkb2_func_pane_g3

0x2b7d,	// (0x0004b476) bg_vkb2_func_pane_g4

0x2b8d,	// (0x0004b486) bg_vkb2_func_pane_g5

0x2b95,	// (0x0004b48e) bg_vkb2_func_pane_g6

0x2b9d,	// (0x0004b496) bg_vkb2_func_pane_g7

0x2ba5,	// (0x0004b49e) bg_vkb2_func_pane_g8

0x2b65,	// (0x0004b45e) bg_vkb2_func_pane_g9

0x0008,

0xfe05,	// (0x000586fe) bg_vkb2_func_pane_g

0x11d3,	// (0x00049acc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x11d3,	// (0x00049acc) bg_vkb2_fuc_pane_cp01

0x1ba2,	// (0x0004a49b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1ba2,	// (0x0004a49b) vkb2_top_cell_right_wide_pane_g1

0x11d3,	// (0x00049acc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x11d3,	// (0x00049acc) bg_vkb2_fuc_pane_cp02

0x1c00,	// (0x0004a4f9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1c00,	// (0x0004a4f9) vkb2_top_cell_right_narrow_pane_g1

0xd3b2,	// (0x00055cab) aid_touch_area_decrease_ParamLimits

0xd3b2,	// (0x00055cab) aid_touch_area_decrease

0xd3ec,	// (0x00055ce5) aid_touch_area_increase_ParamLimits

0xd3ec,	// (0x00055ce5) aid_touch_area_increase

0xd414,	// (0x00055d0d) aid_touch_area_mute_ParamLimits

0xd414,	// (0x00055d0d) aid_touch_area_mute

0xd43c,	// (0x00055d35) aid_touch_area_slider_ParamLimits

0xd43c,	// (0x00055d35) aid_touch_area_slider

0xd47c,	// (0x00055d75) popup_slider_window_g4_ParamLimits

0xd47c,	// (0x00055d75) popup_slider_window_g4

0xd4a4,	// (0x00055d9d) popup_slider_window_g5_ParamLimits

0xd4a4,	// (0x00055d9d) popup_slider_window_g5

0xd4d8,	// (0x00055dd1) popup_slider_window_g6_ParamLimits

0xd4d8,	// (0x00055dd1) popup_slider_window_g6

0x6850,	// (0x0004f149) popup_slider_window_t2_ParamLimits

0x6850,	// (0x0004f149) popup_slider_window_t2

0x0001,

0xfd01,	// (0x000585fa) popup_slider_window_t_ParamLimits

0xfd01,	// (0x000585fa) popup_slider_window_t

0xd4f4,	// (0x00055ded) slider_pane_ParamLimits

0xd4f4,	// (0x00055ded) slider_pane

0x7662,	// (0x0004ff5b) slider_pane_g1_ParamLimits

0x7662,	// (0x0004ff5b) slider_pane_g1

0x7676,	// (0x0004ff6f) slider_pane_g2_ParamLimits

0x7676,	// (0x0004ff6f) slider_pane_g2

0x768c,	// (0x0004ff85) slider_pane_g3_ParamLimits

0x768c,	// (0x0004ff85) slider_pane_g3

0x0003,

0xfe18,	// (0x00058711) slider_pane_g_ParamLimits

0xfe18,	// (0x00058711) slider_pane_g

0xb974,	// (0x0005426d) popup_tb_float_extension_window_ParamLimits

0xb974,	// (0x0005426d) popup_tb_float_extension_window

0x76b8,	// (0x0004ffb1) aid_size_cell_tb_float_ext

0x7122,	// (0x0004fa1b) bg_popup_sub_window_cp28

0x76c4,	// (0x0004ffbd) grid_tb_float_ext_pane

0x76d0,	// (0x0004ffc9) cell_tb_float_ext_pane_ParamLimits

0x76d0,	// (0x0004ffc9) cell_tb_float_ext_pane

0x76ec,	// (0x0004ffe5) cell_tb_float_ext_pane_g1

0x76f5,	// (0x0004ffee) grid_highlight_pane_cp12

0xbeab,	// (0x000547a4) cell_last_hwr_side_pane_ParamLimits

0xbeab,	// (0x000547a4) cell_last_hwr_side_pane

0x515f,	// (0x0004da58) cell_last_hwr_side_pane_g1

0x76fe,	// (0x0004fff7) cell_last_hwr_side_pane_g2

0x0001,

0xfe21,	// (0x0005871a) cell_last_hwr_side_pane_g

0xc2b1,	// (0x00054baa) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc2b1,	// (0x00054baa) vkb2_area_bottom_space_btn_pane

0x53c2,	// (0x0004dcbb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x70d0,	// (0x0004f9c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1d4a,	// (0x0004a643) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1d68,	// (0x0004a661) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1d68,	// (0x0004a661) vkb2_area_bottom_space_btn_pane_g1

0x1da2,	// (0x0004a69b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1da2,	// (0x0004a69b) vkb2_area_bottom_space_btn_pane_g2

0x1dd8,	// (0x0004a6d1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1dd8,	// (0x0004a6d1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe26,	// (0x0005871f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe26,	// (0x0005871f) vkb2_area_bottom_space_btn_pane_g

0x128a,	// (0x00049b83) cel_fep_hwr_func_pane_ParamLimits

0x128a,	// (0x00049b83) cel_fep_hwr_func_pane

0xbe80,	// (0x00054779) cell_hwr_side_button_pane_ParamLimits

0xbe80,	// (0x00054779) cell_hwr_side_button_pane

0x6aaf,	// (0x0004f3a8) aid_area_touch_clock_ParamLimits

0xa218,	// (0x00052b11) bg_uniindi_top_pane_ParamLimits

0x6ac3,	// (0x0004f3bc) uniindi_top_pane_g1_ParamLimits

0x6ad9,	// (0x0004f3d2) uniindi_top_pane_g2_ParamLimits

0x6ae5,	// (0x0004f3de) uniindi_top_pane_g3_ParamLimits

0x6af6,	// (0x0004f3ef) uniindi_top_pane_g4_ParamLimits

0xfd39,	// (0x00058632) uniindi_top_pane_g_ParamLimits

0x6b03,	// (0x0004f3fc) uniindi_top_pane_t1_ParamLimits

0xa218,	// (0x00052b11) bg_vkb2_func_pane_cp01_ParamLimits

0xa218,	// (0x00052b11) bg_vkb2_func_pane_cp01

0x7707,	// (0x00050000) cel_fep_hwr_func_pane_g1_ParamLimits

0x7707,	// (0x00050000) cel_fep_hwr_func_pane_g1

0xa218,	// (0x00052b11) bg_vkb2_func_pane_cp02_ParamLimits

0xa218,	// (0x00052b11) bg_vkb2_func_pane_cp02

0x7707,	// (0x00050000) cell_hwr_side_button_pane_g1_ParamLimits

0x7707,	// (0x00050000) cell_hwr_side_button_pane_g1

0x29ea,	// (0x0004b2e3) status_pane_g4_ParamLimits

0x29ea,	// (0x0004b2e3) status_pane_g4

0x2a04,	// (0x0004b2fd) status_pane_t1

0x4f12,	// (0x0004d80b) form2_midp_gauge_slider_cont_pane

0x4f1a,	// (0x0004d813) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcd23,	// (0x0005561c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcd35,	// (0x0005562e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x000583fe) form2_midp_gauge_slider_pane_t_ParamLimits

0x4f50,	// (0x0004d849) form2_midp_slider_pane_ParamLimits

0x172b,	// (0x0004a024) aid_size_cell_func_vkb2_ParamLimits

0x172b,	// (0x0004a024) aid_size_cell_func_vkb2

0x76a4,	// (0x0004ff9d) slider_pane_g4_ParamLimits

0x76a4,	// (0x0004ff9d) slider_pane_g4

0xc312,	// (0x00054c0b) form2_midp_gauge_slider_pane_t2_cp01

0xc320,	// (0x00054c19) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc320,	// (0x00054c19) form2_midp_gauge_slider_pane_t3_cp01

0x1e4d,	// (0x0004a746) form2_midp_slider_pane_cp01

0x7122,	// (0x0004fa1b) navi_smil_pane

0x7740,	// (0x00050039) navi_smil_pane_g1

0x7748,	// (0x00050041) navi_smil_pane_t1

0x7715,	// (0x0005000e) form2_midp_slider_pane_g1

0x771e,	// (0x00050017) form2_midp_slider_pane_g2

0x7726,	// (0x0005001f) form2_midp_slider_pane_g3

0x7715,	// (0x0005000e) form2_midp_slider_pane_g4

0xdece,	// (0x000567c7) form2_midp_slider_pane_g5

0x0004,

0xfe2f,	// (0x00058728) form2_midp_slider_pane_g

0x1e12,	// (0x0004a70b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1e12,	// (0x0004a70b) vkb2_area_bottom_space_btn_pane_g4

0xbb5b,	// (0x00054454) lc0_navi_pane_ParamLimits

0xbb5b,	// (0x00054454) lc0_navi_pane

0xbbcb,	// (0x000544c4) lc0_stat_indi_pane_ParamLimits

0xbbcb,	// (0x000544c4) lc0_stat_indi_pane

0xbbe0,	// (0x000544d9) ls0_title_pane_ParamLimits

0xbbe0,	// (0x000544d9) ls0_title_pane

0xa89a,	// (0x00053193) bg_popup_sub_pane_cp14_ParamLimits

0x6a96,	// (0x0004f38f) list_uniindi_pane_ParamLimits

0x6aa2,	// (0x0004f39b) uniindi_top_pane_ParamLimits

0x6b41,	// (0x0004f43a) list_single_uniindi_pane_g1_ParamLimits

0x6b54,	// (0x0004f44d) list_single_uniindi_pane_t1_ParamLimits

0xc33d,	// (0x00054c36) lc0_stat_clock_pane_ParamLimits

0xc33d,	// (0x00054c36) lc0_stat_clock_pane

0xded7,	// (0x000567d0) lc0_stat_indi_pane_g1_ParamLimits

0xded7,	// (0x000567d0) lc0_stat_indi_pane_g1

0xdee4,	// (0x000567dd) lc0_stat_indi_pane_g2_ParamLimits

0xdee4,	// (0x000567dd) lc0_stat_indi_pane_g2

0x0001,

0xfe3a,	// (0x00058733) lc0_stat_indi_pane_g_ParamLimits

0xfe3a,	// (0x00058733) lc0_stat_indi_pane_g

0xc34a,	// (0x00054c43) lc0_uni_indicator_pane_ParamLimits

0xc34a,	// (0x00054c43) lc0_uni_indicator_pane

0xdef1,	// (0x000567ea) ls0_title_pane_g1_ParamLimits

0xdef1,	// (0x000567ea) ls0_title_pane_g1

0xdf05,	// (0x000567fe) ls0_title_pane_t1_ParamLimits

0xdf05,	// (0x000567fe) ls0_title_pane_t1

0xc357,	// (0x00054c50) lc0_uni_indicator_pane_g1_ParamLimits

0xc357,	// (0x00054c50) lc0_uni_indicator_pane_g1

0x77ba,	// (0x000500b3) lc0_stat_clock_pane_t1

0x7122,	// (0x0004fa1b) main_ai5_pane

0x77c8,	// (0x000500c1) ai5_sk_pane_ParamLimits

0x77c8,	// (0x000500c1) ai5_sk_pane

0xdf33,	// (0x0005682c) cell_ai5_widget_pane_ParamLimits

0xdf33,	// (0x0005682c) cell_ai5_widget_pane

0xe28d,	// (0x00056b86) aid_size_cell_widget_grid

0x7d85,	// (0x0005067e) bg_ai5_widget_pane_ParamLimits

0x7d85,	// (0x0005067e) bg_ai5_widget_pane

0xe2c1,	// (0x00056bba) cell_ai5_widget_pane_g2

0xe2d5,	// (0x00056bce) cell_ai5_widget_pane_g3

0xe2ef,	// (0x00056be8) cell_ai5_widget_pane_g4

0xe2ff,	// (0x00056bf8) cell_ai5_widget_pane_g5

0xe30f,	// (0x00056c08) cell_ai5_widget_pane_g6

0xe31b,	// (0x00056c14) cell_ai5_widget_pane_g7

0xe327,	// (0x00056c20) cell_ai5_widget_pane_t1_ParamLimits

0xe327,	// (0x00056c20) cell_ai5_widget_pane_t1

0x7ebc,	// (0x000507b5) cell_ai5_widget_pane_t2_ParamLimits

0x7ebc,	// (0x000507b5) cell_ai5_widget_pane_t2

0x7ed4,	// (0x000507cd) cell_ai5_widget_pane_t3_ParamLimits

0x7ed4,	// (0x000507cd) cell_ai5_widget_pane_t3

0xe344,	// (0x00056c3d) cell_ai5_widget_pane_t4_ParamLimits

0xe344,	// (0x00056c3d) cell_ai5_widget_pane_t4

0xe36a,	// (0x00056c63) cell_ai5_widget_pane_t5_ParamLimits

0xe36a,	// (0x00056c63) cell_ai5_widget_pane_t5

0x7f32,	// (0x0005082b) cell_ai5_widget_pane_t6_ParamLimits

0x7f32,	// (0x0005082b) cell_ai5_widget_pane_t6

0x7f44,	// (0x0005083d) cell_ai5_widget_pane_t7_ParamLimits

0x7f44,	// (0x0005083d) cell_ai5_widget_pane_t7

0x7f5d,	// (0x00050856) cell_ai5_widget_pane_t8_ParamLimits

0x7f5d,	// (0x00050856) cell_ai5_widget_pane_t8

0x0009,

0xfe54,	// (0x0005874d) cell_ai5_widget_pane_t_ParamLimits

0xfe54,	// (0x0005874d) cell_ai5_widget_pane_t

0xe3d7,	// (0x00056cd0) grid_ai5_widget_pane

0xa89a,	// (0x00053193) highlight_cell_ai5_widget_pane_ParamLimits

0xa89a,	// (0x00053193) highlight_cell_ai5_widget_pane

0xe3e5,	// (0x00056cde) ai5_sk_left_pane

0xe3ef,	// (0x00056ce8) ai5_sk_middle_pane

0xe3f9,	// (0x00056cf2) ai5_sk_right_pane

0x7fe8,	// (0x000508e1) bg_ai5_widget_pane_g1_ParamLimits

0x7fe8,	// (0x000508e1) bg_ai5_widget_pane_g1

0x7ff4,	// (0x000508ed) bg_ai5_widget_pane_g2_ParamLimits

0x7ff4,	// (0x000508ed) bg_ai5_widget_pane_g2

0x8000,	// (0x000508f9) bg_ai5_widget_pane_g3_ParamLimits

0x8000,	// (0x000508f9) bg_ai5_widget_pane_g3

0x800c,	// (0x00050905) bg_ai5_widget_pane_g4_ParamLimits

0x800c,	// (0x00050905) bg_ai5_widget_pane_g4

0x8018,	// (0x00050911) bg_ai5_widget_pane_g5_ParamLimits

0x8018,	// (0x00050911) bg_ai5_widget_pane_g5

0x8024,	// (0x0005091d) bg_ai5_widget_pane_g6_ParamLimits

0x8024,	// (0x0005091d) bg_ai5_widget_pane_g6

0x8030,	// (0x00050929) bg_ai5_widget_pane_g7_ParamLimits

0x8030,	// (0x00050929) bg_ai5_widget_pane_g7

0x803c,	// (0x00050935) bg_ai5_widget_pane_g8_ParamLimits

0x803c,	// (0x00050935) bg_ai5_widget_pane_g8

0x8048,	// (0x00050941) bg_ai5_widget_pane_g9_ParamLimits

0x8048,	// (0x00050941) bg_ai5_widget_pane_g9

0x0008,

0xfe69,	// (0x00058762) bg_ai5_widget_pane_g_ParamLimits

0xfe69,	// (0x00058762) bg_ai5_widget_pane_g

0xe42f,	// (0x00056d28) cell_shortcut_ai5_widget_pane_ParamLimits

0xe42f,	// (0x00056d28) cell_shortcut_ai5_widget_pane

0x2306,	// (0x0004abff) bg_cell_shortcut_ai5_widget_pane

0x8093,	// (0x0005098c) cell_grid_ai5_widget_pane_g1

0x2306,	// (0x0004abff) highlight_cell_shortcut_ai5_widget_pane

0x2b75,	// (0x0004b46e) ai5_sk_left_pane_g1

0x809c,	// (0x00050995) ai5_sk_left_pane_g2

0x80a4,	// (0x0005099d) ai5_sk_left_pane_g3

0x80ac,	// (0x000509a5) ai5_sk_left_pane_g4

0x0003,

0xfe7c,	// (0x00058775) ai5_sk_left_pane_g

0x80b4,	// (0x000509ad) ai5_sk_left_pane_t1

0x2b6d,	// (0x0004b466) ai5_sk_right_pane_g1

0x80c2,	// (0x000509bb) ai5_sk_right_pane_g2

0x80ca,	// (0x000509c3) ai5_sk_right_pane_g3

0x80d2,	// (0x000509cb) ai5_sk_right_pane_g4

0x0003,

0xfe85,	// (0x0005877e) ai5_sk_right_pane_g

0x80da,	// (0x000509d3) ai5_sk_right_pane_t1

0x2b6d,	// (0x0004b466) ai5_sk_middle_pane_g1

0x2b75,	// (0x0004b46e) ai5_sk_middle_pane_g2

0x2b8d,	// (0x0004b486) ai5_sk_middle_pane_g3

0x80ca,	// (0x000509c3) ai5_sk_middle_pane_g4

0x80a4,	// (0x0005099d) ai5_sk_middle_pane_g5

0x80e8,	// (0x000509e1) ai5_sk_middle_pane_g6

0xe442,	// (0x00056d3b) ai5_sk_middle_pane_g7

0x0006,

0xfe8e,	// (0x00058787) ai5_sk_middle_pane_g

0xba45,	// (0x0005433e) aid_touch_area_size_lc0_ParamLimits

0xba45,	// (0x0005433e) aid_touch_area_size_lc0

0x1429,	// (0x00049d22) cell_hwr_candidate_pane_t1_ParamLimits

0x26b3,	// (0x0004afac) aid_touch_navi_pane

0xc5f1,	// (0x00054eea) status_dt_navi_pane_ParamLimits

0xc5f1,	// (0x00054eea) status_dt_navi_pane

0xc609,	// (0x00054f02) status_dt_sta_pane_ParamLimits

0xc609,	// (0x00054f02) status_dt_sta_pane

0xe44a,	// (0x00056d43) dt_sta_controll_pane

0xe457,	// (0x00056d50) dt_sta_indi_pane

0xe464,	// (0x00056d5d) dt_sta_title_pane

0xa218,	// (0x00052b11) bg_dt_sta_indi_pane_ParamLimits

0xa218,	// (0x00052b11) bg_dt_sta_indi_pane

0xe476,	// (0x00056d6f) dt_sta_battery_pane

0xe47e,	// (0x00056d77) dt_sta_indi_pane_g1

0xe487,	// (0x00056d80) dt_sta_indi_pane_g2

0xe490,	// (0x00056d89) dt_sta_indi_pane_g3

0x0002,

0xfe9d,	// (0x00058796) dt_sta_indi_pane_g

0xe499,	// (0x00056d92) dt_sta_signal_pane

0xa89a,	// (0x00053193) bg_dt_sta_title_pane_ParamLimits

0xa89a,	// (0x00053193) bg_dt_sta_title_pane

0xe4a2,	// (0x00056d9b) dt_sta_title_pane_g1

0xe4aa,	// (0x00056da3) dt_sta_title_pane_t1_ParamLimits

0xe4aa,	// (0x00056da3) dt_sta_title_pane_t1

0x7122,	// (0x0004fa1b) bg_dt_sta_control_pane

0xe4bf,	// (0x00056db8) dt_sta_controll_pane_g1

0xe4c8,	// (0x00056dc1) bg_dt_sta_title_pane_g1

0xe4d1,	// (0x00056dca) bg_dt_sta_title_pane_g2

0xe4da,	// (0x00056dd3) bg_dt_sta_title_pane_g3

0x0002,

0xfea4,	// (0x0005879d) bg_dt_sta_title_pane_g

0x515f,	// (0x0004da58) bg_dt_sta_indi_pane_g1

0x8196,	// (0x00050a8f) dt_sta_signal_pane_g1

0x819e,	// (0x00050a97) dt_sta_signal_pane_g2

0x0001,

0xfeab,	// (0x000587a4) dt_sta_signal_pane_g

0x81a6,	// (0x00050a9f) dt_sta_battery_pane_g1

0x81af,	// (0x00050aa8) dt_sta_battery_pane_t1

0x515f,	// (0x0004da58) bg_dt_sta_control_pane_g1

0xe88d,	// (0x00057186) fep_china_uni_eep_pane

0xe895,	// (0x0005718e) fep_china_uni_entry_pane_ParamLimits

0xe8a5,	// (0x0005719e) popup_fep_china_uni_window_g1_ParamLimits

0xe8b5,	// (0x000571ae) popup_fep_china_uni_window_g2_ParamLimits

0xe8b5,	// (0x000571ae) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005801b) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005801b) popup_fep_china_uni_window_g

0x81be,	// (0x00050ab7) fep_china_uni_eep_pane_g1

0x81c6,	// (0x00050abf) fep_china_uni_eep_pane_t1

0x7737,	// (0x00050030) aid_touch_area_size_smil_player

0x2801,	// (0x0004b0fa) lc0_clock_pane

0x29f8,	// (0x0004b2f1) status_pane_g5_ParamLimits

0x29f8,	// (0x0004b2f1) status_pane_g5

0xb49c,	// (0x00053d95) popup_keymap_window

0x29be,	// (0x0004b2b7) status_icon_pane

0xe2d5,	// (0x00056bce) cell_ai5_widget_pane_g3_ParamLimits

0xe2ef,	// (0x00056be8) cell_ai5_widget_pane_g4_ParamLimits

0xe2ff,	// (0x00056bf8) cell_ai5_widget_pane_g5_ParamLimits

0x7e63,	// (0x0005075c) cell_ai5_widget_pane_g8_ParamLimits

0x7e63,	// (0x0005075c) cell_ai5_widget_pane_g8

0x7e77,	// (0x00050770) cell_ai5_widget_pane_g9_ParamLimits

0x7e77,	// (0x00050770) cell_ai5_widget_pane_g9

0x7e8b,	// (0x00050784) cell_ai5_widget_pane_g10_ParamLimits

0x7e8b,	// (0x00050784) cell_ai5_widget_pane_g10

0x81d5,	// (0x00050ace) status_icon_pane_g1

0x7122,	// (0x0004fa1b) bg_popup_sub_pane_cp13

0x81dd,	// (0x00050ad6) popup_keymap_window_t1

0xb191,	// (0x00053a8a) control_pane_g6_ParamLimits

0xb191,	// (0x00053a8a) control_pane_g6

0xb19e,	// (0x00053a97) control_pane_g7_ParamLimits

0xb19e,	// (0x00053a97) control_pane_g7

0xb1ab,	// (0x00053aa4) control_pane_g8_ParamLimits

0xb1ab,	// (0x00053aa4) control_pane_g8

0xe44a,	// (0x00056d43) dt_sta_controll_pane_ParamLimits

0xe457,	// (0x00056d50) dt_sta_indi_pane_ParamLimits

0xe464,	// (0x00056d5d) dt_sta_title_pane_ParamLimits

0xa766,	// (0x0005305f) aid_size_touch_scroll_bar_cale

0xf017,	// (0x00057910) popup_discreet_window_ParamLimits

0xf017,	// (0x00057910) popup_discreet_window

0x9d8a,	// (0x00052683) popup_sk_window

0x31c3,	// (0x0004babc) bg_popup_sub_pane_cp28_ParamLimits

0x31c3,	// (0x0004babc) bg_popup_sub_pane_cp28

0x81eb,	// (0x00050ae4) popup_discreet_window_g1_ParamLimits

0x81eb,	// (0x00050ae4) popup_discreet_window_g1

0x820b,	// (0x00050b04) popup_discreet_window_t1_ParamLimits

0x820b,	// (0x00050b04) popup_discreet_window_t1

0x8229,	// (0x00050b22) popup_discreet_window_t2_ParamLimits

0x8229,	// (0x00050b22) popup_discreet_window_t2

0x0002,

0xfeb0,	// (0x000587a9) popup_discreet_window_t_ParamLimits

0xfeb0,	// (0x000587a9) popup_discreet_window_t

0x1e83,	// (0x0004a77c) popup_sk_window_g1

0x1e8d,	// (0x0004a786) popup_sk_window_g2

0x0001,

0xfeb7,	// (0x000587b0) popup_sk_window_g

0x1e95,	// (0x0004a78e) popup_sk_window_t1

0x1ea3,	// (0x0004a79c) popup_sk_window_t1_copy1

0xe2c1,	// (0x00056bba) cell_ai5_widget_pane_g2_ParamLimits

0xe38a,	// (0x00056c83) cell_ai5_widget_pane_t9_ParamLimits

0xe38a,	// (0x00056c83) cell_ai5_widget_pane_t9

0x7122,	// (0x0004fa1b) main_fep_fshwr2_pane

0xc376,	// (0x00054c6f) aid_fshwr2_btn_pane

0xc387,	// (0x00054c80) aid_fshwr2_syb_pane

0xc398,	// (0x00054c91) aid_fshwr2_txt_pane

0xc3a4,	// (0x00054c9d) fshwr2_func_candi_pane

0xc3c5,	// (0x00054cbe) fshwr2_hwr_syb_pane

0xc3e2,	// (0x00054cdb) fshwr2_icf_pane

0x7122,	// (0x0004fa1b) fshwr2_icf_bg_pane

0x1f19,	// (0x0004a812) fshwr2_icf_pane_t1_ParamLimits

0x1f19,	// (0x0004a812) fshwr2_icf_pane_t1

0xe80b,	// (0x00057104) fshwr2_func_candi_pane_g1

0xe4e3,	// (0x00056ddc) fshwr2_func_candi_row_pane_ParamLimits

0xe4e3,	// (0x00056ddc) fshwr2_func_candi_row_pane

0xc40e,	// (0x00054d07) cell_fshwr2_syb_pane_ParamLimits

0xc40e,	// (0x00054d07) cell_fshwr2_syb_pane

0x53c2,	// (0x0004dcbb) fshwr2_hwr_syb_pane_g1_ParamLimits

0x53c2,	// (0x0004dcbb) fshwr2_hwr_syb_pane_g1

0x7122,	// (0x0004fa1b) bg_popup_call_pane_cp01

0xc424,	// (0x00054d1d) fshwr2_func_candi_cell_pane_ParamLimits

0xc424,	// (0x00054d1d) fshwr2_func_candi_cell_pane

0xe50a,	// (0x00056e03) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe50a,	// (0x00056e03) fshwr2_func_candi_cell_bg_pane

0xc46d,	// (0x00054d66) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc46d,	// (0x00054d66) fshwr2_func_candi_cell_pane_g1

0xc4a4,	// (0x00054d9d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc4a4,	// (0x00054d9d) fshwr2_func_candi_cell_pane_t1

0x7122,	// (0x0004fa1b) bg_button_pane_cp08

0x8297,	// (0x00050b90) cell_fshwr2_syb_bg_pane

0xc4bf,	// (0x00054db8) cell_fshwr2_syb_bg_pane_g1

0xc4c7,	// (0x00054dc0) cell_fshwr2_syb_bg_pane_t1

0xa89a,	// (0x00053193) main_tmo_pane

0xc90b,	// (0x00055204) uni_indicator_pane_g1_ParamLimits

0xc921,	// (0x0005521a) uni_indicator_pane_g2_ParamLimits

0xc937,	// (0x00055230) uni_indicator_pane_g3_ParamLimits

0xc94a,	// (0x00055243) uni_indicator_pane_g4_ParamLimits

0xc94a,	// (0x00055243) uni_indicator_pane_g4

0x3d2f,	// (0x0004c628) uni_indicator_pane_g5_ParamLimits

0x3d2f,	// (0x0004c628) uni_indicator_pane_g5

0x3d2f,	// (0x0004c628) uni_indicator_pane_g6_ParamLimits

0x3d2f,	// (0x0004c628) uni_indicator_pane_g6

0xf921,	// (0x0005821a) uni_indicator_pane_g_ParamLimits

0xd382,	// (0x00055c7b) popup_tmo_note_window_ParamLimits

0xd382,	// (0x00055c7b) popup_tmo_note_window

0xa89a,	// (0x00053193) fshwr2_bg_pane

0xc495,	// (0x00054d8e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc495,	// (0x00054d8e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebc,	// (0x000587b5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebc,	// (0x000587b5) fshwr2_func_candi_cell_pane_g

0x515f,	// (0x0004da58) bg_popup_window_pane_cp01

0x1fe2,	// (0x0004a8db) bg_popup_window_pane_g1_cp01

0x829f,	// (0x00050b98) bg_popup_window_pane_cp22_ParamLimits

0x829f,	// (0x00050b98) bg_popup_window_pane_cp22

0x82ad,	// (0x00050ba6) listscroll_tmo_link_pane_ParamLimits

0x82ad,	// (0x00050ba6) listscroll_tmo_link_pane

0x82ed,	// (0x00050be6) popup_tmo_note_window_g1_ParamLimits

0x82ed,	// (0x00050be6) popup_tmo_note_window_g1

0x82fa,	// (0x00050bf3) tmo_note_info_pane_ParamLimits

0x82fa,	// (0x00050bf3) tmo_note_info_pane

0xe516,	// (0x00056e0f) list_tmo_note_info_pane_g1_ParamLimits

0xe516,	// (0x00056e0f) list_tmo_note_info_pane_g1

0x832b,	// (0x00050c24) list_tmo_note_info_pane_g2_ParamLimits

0x832b,	// (0x00050c24) list_tmo_note_info_pane_g2

0x0001,

0xfec1,	// (0x000587ba) list_tmo_note_info_pane_g_ParamLimits

0xfec1,	// (0x000587ba) list_tmo_note_info_pane_g

0x8347,	// (0x00050c40) list_tmo_note_info_text_pane_ParamLimits

0x8347,	// (0x00050c40) list_tmo_note_info_text_pane

0x83cc,	// (0x00050cc5) list_tmo_link_pane

0x83d9,	// (0x00050cd2) scroll_pane_cp20

0x83e6,	// (0x00050cdf) list_single_tmo_link_pane_ParamLimits

0x83e6,	// (0x00050cdf) list_single_tmo_link_pane

0x83f6,	// (0x00050cef) list_single_tmo_link_pane_t1

0x8404,	// (0x00050cfd) list_tmo_note_info_text_pane_t1_ParamLimits

0x8404,	// (0x00050cfd) list_tmo_note_info_text_pane_t1

0xa951,	// (0x0005324a) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa951,	// (0x0005324a) aid_size_touch_scroll_bar_cp01

0x992f,	// (0x00052228) aid_size_touch_slider_marker

0x9d7a,	// (0x00052673) popup_settings_window_ParamLimits

0x9d7a,	// (0x00052673) popup_settings_window

0xebfa,	// (0x000574f3) popup_candi_list_indi_window

0x26b3,	// (0x0004afac) aid_touch_navi_pane_ParamLimits

0x1682,	// (0x00049f7b) rs_clock_indi_pane

0x168b,	// (0x00049f84) sctrl_sk_bottom_pane_ParamLimits

0x169c,	// (0x00049f95) sctrl_sk_top_pane_ParamLimits

0x1785,	// (0x0004a07e) popup_fep_tooltip_window

0xe28d,	// (0x00056b86) aid_size_cell_widget_grid_ParamLimits

0xe2ac,	// (0x00056ba5) cell_ai5_widget_pane_g1_ParamLimits

0xe2ac,	// (0x00056ba5) cell_ai5_widget_pane_g1

0xe30f,	// (0x00056c08) cell_ai5_widget_pane_g6_ParamLimits

0xe31b,	// (0x00056c14) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3f,	// (0x00058738) cell_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x00058738) cell_ai5_widget_pane_g

0xe3b9,	// (0x00056cb2) cell_ai5_widget_pane_t10_ParamLimits

0xe3b9,	// (0x00056cb2) cell_ai5_widget_pane_t10

0xe3d7,	// (0x00056cd0) grid_ai5_widget_pane_ParamLimits

0xe403,	// (0x00056cfc) cell_contacts_ai5_widget_pane_ParamLimits

0xe403,	// (0x00056cfc) cell_contacts_ai5_widget_pane

0x823e,	// (0x00050b37) popup_discreet_window_t3_ParamLimits

0x823e,	// (0x00050b37) popup_discreet_window_t3

0xc3fa,	// (0x00054cf3) popup_fshwr2_char_preview_window_ParamLimits

0xc3fa,	// (0x00054cf3) popup_fshwr2_char_preview_window

0xe52d,	// (0x00056e26) tmo_note_info_pane_t1

0xe542,	// (0x00056e3b) tmo_note_info_pane_t2

0xe55b,	// (0x00056e54) tmo_note_info_pane_t3

0x83a8,	// (0x00050ca1) tmo_note_info_pane_t4

0x83ba,	// (0x00050cb3) tmo_note_info_pane_t5

0x0004,

0xfec6,	// (0x000587bf) tmo_note_info_pane_t

0x83cc,	// (0x00050cc5) list_tmo_link_pane_ParamLimits

0x83d9,	// (0x00050cd2) scroll_pane_cp20_ParamLimits

0x7122,	// (0x0004fa1b) bg_popup_fep_char_preview_window_cp01

0x841d,	// (0x00050d16) popup_fshwr2_char_preview_window_t1

0x842b,	// (0x00050d24) popup_candi_list_indi_window_g1

0x8434,	// (0x00050d2d) bg_cell_contacts_ai5_widget_pane

0x8440,	// (0x00050d39) cell_contacts_ai5_widget_pane_g1

0x8455,	// (0x00050d4e) cell_contacts_ai5_widget_pane_g2

0x8461,	// (0x00050d5a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed1,	// (0x000587ca) cell_contacts_ai5_widget_pane_g

0x846d,	// (0x00050d66) cell_contacts_ai5_widget_pane_t1

0xa89a,	// (0x00053193) highlight_cell_shortcut_ai5_widget_pane_cp01

0x84e4,	// (0x00050ddd) settings_container_pane

0x2306,	// (0x0004abff) listscroll_set_pane_copy1

0x48b7,	// (0x0004d1b0) scroll_pane_cp121_copy1

0x84f0,	// (0x00050de9) set_content_pane_copy1

0x84f8,	// (0x00050df1) aid_height_set_list_copy1_ParamLimits

0x84f8,	// (0x00050df1) aid_height_set_list_copy1

0x3f2f,	// (0x0004c828) aid_size_parent_copy1_ParamLimits

0x3f2f,	// (0x0004c828) aid_size_parent_copy1

0x8504,	// (0x00050dfd) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8504,	// (0x00050dfd) button_value_adjust_pane_cp6_copy1

0x2635,	// (0x0004af2e) list_highlight_pane_cp2_copy1_ParamLimits

0x2635,	// (0x0004af2e) list_highlight_pane_cp2_copy1

0x8518,	// (0x00050e11) list_set_pane_copy1_ParamLimits

0x8518,	// (0x00050e11) list_set_pane_copy1

0x847f,	// (0x00050d78) main_pane_set_t1_copy1_ParamLimits

0x847f,	// (0x00050d78) main_pane_set_t1_copy1

0x84b9,	// (0x00050db2) main_pane_set_t2_copy1_ParamLimits

0x84b9,	// (0x00050db2) main_pane_set_t2_copy1

0x85d9,	// (0x00050ed2) main_pane_set_t3_copy1

0x85e7,	// (0x00050ee0) main_pane_set_t4_copy1

0x84d8,	// (0x00050dd1) set_content_pane_g1_copy1_ParamLimits

0x84d8,	// (0x00050dd1) set_content_pane_g1_copy1

0x85f5,	// (0x00050eee) setting_code_pane_copy1

0x85fd,	// (0x00050ef6) setting_slider_graphic_pane_copy1

0x85fd,	// (0x00050ef6) setting_slider_pane_copy1

0x85fd,	// (0x00050ef6) setting_text_pane_copy1

0x85fd,	// (0x00050ef6) setting_volume_pane_copy1

0x85f5,	// (0x00050eee) settings_code_pane_cp2_copy1

0x8605,	// (0x00050efe) settings_code_pane_cp_copy1_ParamLimits

0x8605,	// (0x00050efe) settings_code_pane_cp_copy1

0x1feb,	// (0x0004a8e4) volume_set_pane_copy1

0x8619,	// (0x00050f12) volume_set_pane_g10_copy1

0x8625,	// (0x00050f1e) volume_set_pane_g1_copy1

0x862f,	// (0x00050f28) volume_set_pane_g2_copy1

0x8639,	// (0x00050f32) volume_set_pane_g3_copy1

0x8643,	// (0x00050f3c) volume_set_pane_g4_copy1

0x864d,	// (0x00050f46) volume_set_pane_g5_copy1

0x8657,	// (0x00050f50) volume_set_pane_g6_copy1

0x8661,	// (0x00050f5a) volume_set_pane_g7_copy1

0x866b,	// (0x00050f64) volume_set_pane_g8_copy1

0x8675,	// (0x00050f6e) volume_set_pane_g9_copy1

0x7184,	// (0x0004fa7d) bg_set_opt_pane_cp_copy1_ParamLimits

0x7184,	// (0x0004fa7d) bg_set_opt_pane_cp_copy1

0x1ff7,	// (0x0004a8f0) setting_slider_pane_t1_copy1_ParamLimits

0x1ff7,	// (0x0004a8f0) setting_slider_pane_t1_copy1

0x2015,	// (0x0004a90e) setting_slider_pane_t2_copy1_ParamLimits

0x2015,	// (0x0004a90e) setting_slider_pane_t2_copy1

0x202f,	// (0x0004a928) setting_slider_pane_t3_copy1_ParamLimits

0x202f,	// (0x0004a928) setting_slider_pane_t3_copy1

0x2047,	// (0x0004a940) slider_set_pane_copy1_ParamLimits

0x2047,	// (0x0004a940) slider_set_pane_copy1

0xa8f2,	// (0x000531eb) set_opt_bg_pane_g1_copy2

0xa8fa,	// (0x000531f3) set_opt_bg_pane_g2_copy2

0x867f,	// (0x00050f78) set_opt_bg_pane_g3_copy2

0xa90a,	// (0x00053203) set_opt_bg_pane_g4_copy2

0xa912,	// (0x0005320b) set_opt_bg_pane_g5_copy2

0xa91a,	// (0x00053213) set_opt_bg_pane_g6_copy2

0x8689,	// (0x00050f82) set_opt_bg_pane_g7_copy2

0x8693,	// (0x00050f8c) set_opt_bg_pane_g8_copy2

0x869d,	// (0x00050f96) set_opt_bg_pane_g9_copy2

0x205d,	// (0x0004a956) aid_size_touch_slider_mark_copy1_ParamLimits

0x205d,	// (0x0004a956) aid_size_touch_slider_mark_copy1

0x86a7,	// (0x00050fa0) slider_set_pane_g1_copy1

0x2071,	// (0x0004a96a) slider_set_pane_g2_copy1

0x0f83,	// (0x0004987c) slider_set_pane_g3_copy1_ParamLimits

0x0f83,	// (0x0004987c) slider_set_pane_g3_copy1

0x0f97,	// (0x00049890) slider_set_pane_g4_copy1_ParamLimits

0x0f97,	// (0x00049890) slider_set_pane_g4_copy1

0x0faf,	// (0x000498a8) slider_set_pane_g5_copy1_ParamLimits

0x0faf,	// (0x000498a8) slider_set_pane_g5_copy1

0x0f83,	// (0x0004987c) slider_set_pane_g6_copy1_ParamLimits

0x0f83,	// (0x0004987c) slider_set_pane_g6_copy1

0x2079,	// (0x0004a972) slider_set_pane_g7_copy1_ParamLimits

0x2079,	// (0x0004a972) slider_set_pane_g7_copy1

0x7136,	// (0x0004fa2f) bg_set_opt_pane_cp2_copy1

0x86b0,	// (0x00050fa9) setting_slider_graphic_pane_g1_copy1

0x86b9,	// (0x00050fb2) setting_slider_graphic_pane_t1_copy1

0x86c9,	// (0x00050fc2) setting_slider_graphic_pane_t2_copy1

0x86d9,	// (0x00050fd2) slider_set_pane_cp_copy1

0x86e9,	// (0x00050fe2) input_focus_pane_cp1_copy1

0x86f2,	// (0x00050feb) list_set_text_pane_copy1

0x86fa,	// (0x00050ff3) setting_text_pane_g1_copy1

0xe6a6,	// (0x00056f9f) set_text_pane_t1_copy1

0x86e9,	// (0x00050fe2) input_focus_pane_cp2_copy1

0x86fa,	// (0x00050ff3) setting_code_pane_g1_copy1

0x8703,	// (0x00050ffc) setting_code_pane_t1_copy1

0xea28,	// (0x00057321) list_set_graphic_pane_copy1

0x7136,	// (0x0004fa2f) bg_set_opt_pane_cp4_copy1

0xea3b,	// (0x00057334) list_set_graphic_pane_g1_copy1_ParamLimits

0xea3b,	// (0x00057334) list_set_graphic_pane_g1_copy1

0x8711,	// (0x0005100a) list_set_graphic_pane_g2_copy1

0xea53,	// (0x0005734c) list_set_graphic_pane_t1_copy1_ParamLimits

0xea53,	// (0x0005734c) list_set_graphic_pane_t1_copy1

0x515f,	// (0x0004da58) rs_clock_indi_pane_g1

0x8719,	// (0x00051012) rs_clock_indi_pane_t1

0x8727,	// (0x00051020) rs_indi_pane

0x872f,	// (0x00051028) rs_indi_pane_g1

0x8738,	// (0x00051031) rs_indi_pane_g2

0x8741,	// (0x0005103a) rs_indi_pane_g3

0x0002,

0xfed8,	// (0x000587d1) rs_indi_pane_g

0x2306,	// (0x0004abff) bg_popup_preview_window_pane_cp03

0x874a,	// (0x00051043) popup_fep_tooltip_window_t1

0x5e0a,	// (0x0004e703) popup_note2_window_g2_ParamLimits

0x5e0a,	// (0x0004e703) popup_note2_window_g2

0x0001,

0xfc71,	// (0x0005856a) popup_note2_window_g_ParamLimits

0xfc71,	// (0x0005856a) popup_note2_window_g

0x6312,	// (0x0004ec0b) bg_popup_sub_pane_cp11_ParamLimits

0x631f,	// (0x0004ec18) cell_ai3_links_pane_g1_ParamLimits

0x6336,	// (0x0004ec2f) cell_ai3_links_pane_t1

0xe6a6,	// (0x00056f9f) set_text_pane_t1_copy1_ParamLimits

0x221f,	// (0x0004ab18) cell_graphic_popup_pane_cp2_ParamLimits

0x221f,	// (0x0004ab18) cell_graphic_popup_pane_cp2

0x8758,	// (0x00051051) cell_graphic_popup_pane_g1_cp2

0xa579,	// (0x00052e72) cell_graphic_popup_pane_g2_cp2

0x8760,	// (0x00051059) cell_graphic_popup_pane_g3_cp2

0x8768,	// (0x00051061) cell_graphic_popup_pane_t2_cp2

0xa58a,	// (0x00052e83) grid_highlight_pane_cp3_cp2

0xac24,	// (0x0005351d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa89a,	// (0x00053193) main_tmo_pane_ParamLimits

0xd376,	// (0x00055c6f) popup_tmo_big_image_note_window

0xe29b,	// (0x00056b94) cell_ai5_widget_list_pane

0xe2a3,	// (0x00056b9c) cell_ai5_widget_lrg_icon_pane

0xe52d,	// (0x00056e26) tmo_note_info_pane_t1_ParamLimits

0xe542,	// (0x00056e3b) tmo_note_info_pane_t2_ParamLimits

0xe55b,	// (0x00056e54) tmo_note_info_pane_t3_ParamLimits

0x83a8,	// (0x00050ca1) tmo_note_info_pane_t4_ParamLimits

0x83ba,	// (0x00050cb3) tmo_note_info_pane_t5_ParamLimits

0xfec6,	// (0x000587bf) tmo_note_info_pane_t_ParamLimits

0x84e4,	// (0x00050ddd) settings_container_pane_ParamLimits

0x86e1,	// (0x00050fda) indicator_popup_pane_cp5

0x86e1,	// (0x00050fda) indicator_popup_pane_cp6

0xea28,	// (0x00057321) list_set_graphic_pane_copy1_ParamLimits

0x7122,	// (0x0004fa1b) bg_popup_window_pane_cp23

0x8776,	// (0x0005106f) popup_tmo_big_image_note_window_g1

0x8782,	// (0x0005107b) popup_tmo_big_image_note_window_t1

0x8792,	// (0x0005108b) popup_tmo_big_image_note_window_t2

0x87a2,	// (0x0005109b) popup_tmo_big_image_note_window_t3

0x0002,

0xfedf,	// (0x000587d8) popup_tmo_big_image_note_window_t

0x515f,	// (0x0004da58) cell_ai5_widget_lrg_icon_pane_g1

0xe570,	// (0x00056e69) cell_ai5_widget_lrg_icon_pane_t1

0xe57e,	// (0x00056e77) cell_ai5_widget_list_row_pane_ParamLimits

0xe57e,	// (0x00056e77) cell_ai5_widget_list_row_pane

0xe596,	// (0x00056e8f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe596,	// (0x00056e8f) cell_ai5_widget_list_row_pane_g1

0xe5a3,	// (0x00056e9c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe5a3,	// (0x00056e9c) cell_ai5_widget_list_row_pane_t1

0xe5ce,	// (0x00056ec7) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe5ce,	// (0x00056ec7) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee6,	// (0x000587df) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee6,	// (0x000587df) cell_ai5_widget_list_row_pane_t

0x7122,	// (0x0004fa1b) main_fep_vtchi_ss_pane

0x8858,	// (0x00051151) popup_fep_char_pre_window

0x8860,	// (0x00051159) popup_fep_ituss_window

0xe5f6,	// (0x00056eef) popup_fep_vkbss_window

0xe605,	// (0x00056efe) grid_vkbss_keypad_pane_ParamLimits

0xe605,	// (0x00056efe) grid_vkbss_keypad_pane

0x88bd,	// (0x000511b6) ituss_keypad_pane

0x209b,	// (0x0004a994) aid_vkbss_key_offset_ParamLimits

0x209b,	// (0x0004a994) aid_vkbss_key_offset

0xc4d6,	// (0x00054dcf) cell_vkbss_key_pane_ParamLimits

0xc4d6,	// (0x00054dcf) cell_vkbss_key_pane

0x88cc,	// (0x000511c5) bg_cell_vkbss_key_g1_ParamLimits

0x88cc,	// (0x000511c5) bg_cell_vkbss_key_g1

0xe615,	// (0x00056f0e) cell_vkbss_key_3p_pane_ParamLimits

0xe615,	// (0x00056f0e) cell_vkbss_key_3p_pane

0xe62f,	// (0x00056f28) cell_vkbss_key_g1_ParamLimits

0xe62f,	// (0x00056f28) cell_vkbss_key_g1

0xe649,	// (0x00056f42) cell_vkbss_key_t1_ParamLimits

0xe649,	// (0x00056f42) cell_vkbss_key_t1

0x20bd,	// (0x0004a9b6) cell_ituss_key_pane_ParamLimits

0x20bd,	// (0x0004a9b6) cell_ituss_key_pane

0x892b,	// (0x00051224) bg_cell_ituss_key_g1_ParamLimits

0x892b,	// (0x00051224) bg_cell_ituss_key_g1

0x8937,	// (0x00051230) cell_ituss_key_pane_g1_ParamLimits

0x8937,	// (0x00051230) cell_ituss_key_pane_g1

0x20ce,	// (0x0004a9c7) cell_ituss_key_pane_g2_ParamLimits

0x20ce,	// (0x0004a9c7) cell_ituss_key_pane_g2

0x0002,

0xfeed,	// (0x000587e6) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x000587e6) cell_ituss_key_pane_g

0x20fa,	// (0x0004a9f3) cell_ituss_key_t1_ParamLimits

0x20fa,	// (0x0004a9f3) cell_ituss_key_t1

0x2134,	// (0x0004aa2d) cell_ituss_key_t2_ParamLimits

0x2134,	// (0x0004aa2d) cell_ituss_key_t2

0x2165,	// (0x0004aa5e) cell_ituss_key_t3_ParamLimits

0x2165,	// (0x0004aa5e) cell_ituss_key_t3

0x2134,	// (0x0004aa2d) cell_ituss_key_t4_ParamLimits

0x2134,	// (0x0004aa2d) cell_ituss_key_t4

0x0004,

0xfef4,	// (0x000587ed) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x000587ed) cell_ituss_key_t

0x895d,	// (0x00051256) cell_vkbss_key_3p_pane_g1

0x8965,	// (0x0005125e) cell_vkbss_key_3p_pane_g2

0x896d,	// (0x00051266) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x000587f8) cell_vkbss_key_3p_pane_g

0x2306,	// (0x0004abff) bg_popup_fep_char_preview_window_cp02

0x8975,	// (0x0005126e) popup_fep_char_pre_window_t1

0xe27a,	// (0x00056b73) main_ai5_sk_pane

0x8434,	// (0x00050d2d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8440,	// (0x00050d39) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8455,	// (0x00050d4e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8461,	// (0x00050d5a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed1,	// (0x000587ca) cell_contacts_ai5_widget_pane_g_ParamLimits

0x846d,	// (0x00050d66) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa89a,	// (0x00053193) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe674,	// (0x00056f6d) main_ai5_sk_pane_g1

0x2ffb,	// (0x0004b8f4) popup_query_code_window_g1

0x8876,	// (0x0005116f) popup_fep_vkb_icf_pane

0x8897,	// (0x00051190) popup_fep_vtchi_icf_pane

0x898c,	// (0x00051285) bg_icf_pane

0x8998,	// (0x00051291) list_vkb_icf_pane

0x89a7,	// (0x000512a0) bg_icf_pane_cp01

0x89ba,	// (0x000512b3) vtchi_icf_list_pane

0x89ca,	// (0x000512c3) list_vkb_icf_pane_t1_ParamLimits

0x89ca,	// (0x000512c3) list_vkb_icf_pane_t1

0x89e0,	// (0x000512d9) vtchi_icf_list_pane_t1_ParamLimits

0x89e0,	// (0x000512d9) vtchi_icf_list_pane_t1

0x8860,	// (0x00051159) popup_fep_ituss_window_ParamLimits

0x8897,	// (0x00051190) popup_fep_vtchi_icf_pane_ParamLimits

0x88bd,	// (0x000511b6) ituss_keypad_pane_ParamLimits

0x208f,	// (0x0004a988) ituss_sks_pane

0x898c,	// (0x00051285) bg_icf_pane_ParamLimits

0x8838,	// (0x00051131) icf_edit_indi_pane_ParamLimits

0x8838,	// (0x00051131) icf_edit_indi_pane

0x8998,	// (0x00051291) list_vkb_icf_pane_ParamLimits

0x89a7,	// (0x000512a0) bg_icf_pane_cp01_ParamLimits

0x884b,	// (0x00051144) icf_edit_indi_pane_cp01_ParamLimits

0x884b,	// (0x00051144) icf_edit_indi_pane_cp01

0x89c2,	// (0x000512bb) vtchi_query_pane

0x7707,	// (0x00050000) icf_edit_indi_pane_g1_ParamLimits

0x7707,	// (0x00050000) icf_edit_indi_pane_g1

0xe67d,	// (0x00056f76) icf_edit_indi_pane_g2_ParamLimits

0xe67d,	// (0x00056f76) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00058810) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00058810) icf_edit_indi_pane_g

0xe68f,	// (0x00056f88) icf_edit_indi_pane_t1

0x89f8,	// (0x000512f1) bg_input_focus_pane_cp042

0xa75d,	// (0x00053056) vtchi_button_pane

0x8a01,	// (0x000512fa) vtchi_query_pane_t1

0x8a0f,	// (0x00051308) vtchi_query_pane_t2

0x8a1d,	// (0x00051316) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x000587ff) vtchi_query_pane_t

0x7122,	// (0x0004fa1b) bg_button_pane_cp13

0x8a2b,	// (0x00051324) vtchi_button_pane_g1

0x21a8,	// (0x0004aaa1) ituss_sks_pane_g1

0x21b3,	// (0x0004aaac) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00058806) ituss_sks_pane_g

0x8a33,	// (0x0005132c) ituss_sks_pane_t1

0x8a41,	// (0x0005133a) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0005880b) ituss_sks_pane_t

0x4c3c,	// (0x0004d535) indicator_nsta_pane_cp_g1

0x4c44,	// (0x0004d53d) indicator_nsta_pane_cp_g2

0x4c4c,	// (0x0004d545) indicator_nsta_pane_cp_g3

0x4c3c,	// (0x0004d535) indicator_nsta_pane_cp_g4

0x4c44,	// (0x0004d53d) indicator_nsta_pane_cp_g5

0x4c4c,	// (0x0004d545) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x000583b4) indicator_nsta_pane_cp_g

0xdda1,	// (0x0005669a) cell_graphic2_pane_t2_ParamLimits

0xdda1,	// (0x0005669a) cell_graphic2_pane_t2

0x0001,

0xfdc8,	// (0x000586c1) cell_graphic2_pane_t_ParamLimits

0xfdc8,	// (0x000586c1) cell_graphic2_pane_t

0xddd9,	// (0x000566d2) cell_graphic2_control_pane_t1

0xaf14,	// (0x0005380d) signal_pane_g3_ParamLimits

0xaf14,	// (0x0005380d) signal_pane_g3

0xaf28,	// (0x00053821) signal_pane_g4_ParamLimits

0xaf28,	// (0x00053821) signal_pane_g4

0xe5e0,	// (0x00056ed9) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe5e0,	// (0x00056ed9) cell_ai5_widget_list_row_pane_t3

0x894b,	// (0x00051244) cell_ituss_key_pane_t1_ParamLimits

0x894b,	// (0x00051244) cell_ituss_key_pane_t1

0x2c6a,	// (0x0004b563) form_field_data_wide_pane_vc_t2_ParamLimits

0x2c6a,	// (0x0004b563) form_field_data_wide_pane_vc_t2

0x2c7e,	// (0x0004b577) form_field_data_wide_pane_vc_t3_ParamLimits

0x2c7e,	// (0x0004b577) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00058102) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00058102) form_field_data_wide_pane_vc_t

0x48f7,	// (0x0004d1f0) form_field_slider_wide_pane_vc_t3_ParamLimits

0x48f7,	// (0x0004d1f0) form_field_slider_wide_pane_vc_t3

0x49cd,	// (0x0004d2c6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x49cd,	// (0x0004d2c6) form_field_popup_wide_pane_vc_t2

0x49e4,	// (0x0004d2dd) form_field_popup_wide_pane_vc_t3_ParamLimits

0x49e4,	// (0x0004d2dd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x000583a3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x000583a3) form_field_popup_wide_pane_vc_t

0xc376,	// (0x00054c6f) aid_fshwr2_btn_pane_ParamLimits

0xc387,	// (0x00054c80) aid_fshwr2_syb_pane_ParamLimits

0xc398,	// (0x00054c91) aid_fshwr2_txt_pane_ParamLimits

0xa89a,	// (0x00053193) fshwr2_bg_pane_ParamLimits

0xc3a4,	// (0x00054c9d) fshwr2_func_candi_pane_ParamLimits

0xc3c5,	// (0x00054cbe) fshwr2_hwr_syb_pane_ParamLimits

0xc3e2,	// (0x00054cdb) fshwr2_icf_pane_ParamLimits

0x1176,	// (0x00049a6f) list_double_graphic_pane_vc_g4_ParamLimits

0x1176,	// (0x00049a6f) list_double_graphic_pane_vc_g4

0x20ee,	// (0x0004a9e7) cell_ituss_key_pane_g3_ParamLimits

0x20ee,	// (0x0004a9e7) cell_ituss_key_pane_g3

0x2196,	// (0x0004aa8f) cell_ituss_key_t5_ParamLimits

0x2196,	// (0x0004aa8f) cell_ituss_key_t5

0xe5f6,	// (0x00056eef) popup_fep_vkbss_window_ParamLimits

0xe284,	// (0x00056b7d) aid_cell_ai5_quarter

0xe68f,	// (0x00056f88) icf_edit_indi_pane_t1_ParamLimits

0xa2c0,	// (0x00052bb9) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xa2c0,	// (0x00052bb9) aid_tch_indicator_popup_pane_cp2

0xa2d3,	// (0x00052bcc) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xa2d3,	// (0x00052bcc) aid_tch_query_popup_data_pane_cp2

0x2fa3,	// (0x0004b89c) aid_tch_query_popup_pane_ParamLimits

0x2fa3,	// (0x0004b89c) aid_tch_query_popup_pane

0x2fa3,	// (0x0004b89c) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2fa3,	// (0x0004b89c) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large

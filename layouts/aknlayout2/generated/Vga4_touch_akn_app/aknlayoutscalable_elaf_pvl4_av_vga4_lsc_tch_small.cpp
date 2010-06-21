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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000256f2 };

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
0xa065,	// (0x0002f757) Screen

0xa079,	// (0x0002f76b) application_window_ParamLimits

0xa079,	// (0x0002f76b) application_window

0xa093,	// (0x0002f785) screen_g1

0xa0c5,	// (0x0002f7b7) area_bottom_pane_ParamLimits

0xa0c5,	// (0x0002f7b7) area_bottom_pane

0xf10c,	// (0x000347fe) area_top_pane_ParamLimits

0xf10c,	// (0x000347fe) area_top_pane

0xf1a0,	// (0x00034892) main_pane_ParamLimits

0xf1a0,	// (0x00034892) main_pane

0xa183,	// (0x0002f875) misc_graphics

0xb47f,	// (0x00030b71) battery_pane_ParamLimits

0xb47f,	// (0x00030b71) battery_pane

0x3812,	// (0x00028f04) bg_status_flat_pane_g8

0x381a,	// (0x00028f0c) bg_status_flat_pane_g9

0x1884,	// (0x00026f76) context_pane_ParamLimits

0x1884,	// (0x00026f76) context_pane

0xb5f6,	// (0x00030ce8) navi_pane_ParamLimits

0xb5f6,	// (0x00030ce8) navi_pane

0xb680,	// (0x00030d72) signal_pane_ParamLimits

0xb680,	// (0x00030d72) signal_pane

0x0008,

0xf874,	// (0x00034f66) bg_status_flat_pane_g

0xb710,	// (0x00030e02) status_pane_g1_ParamLimits

0xb710,	// (0x00030e02) status_pane_g1

0xb726,	// (0x00030e18) status_pane_g2_ParamLimits

0xb726,	// (0x00030e18) status_pane_g2

0x2e53,	// (0x00028545) status_pane_g3_ParamLimits

0x2e53,	// (0x00028545) status_pane_g3

0x0004,

0xf7a0,	// (0x00034e92) status_pane_g_ParamLimits

0xf7a0,	// (0x00034e92) status_pane_g

0xb732,	// (0x00030e24) title_pane_ParamLimits

0xb732,	// (0x00030e24) title_pane

0xb799,	// (0x00030e8b) uni_indicator_pane_ParamLimits

0xb799,	// (0x00030e8b) uni_indicator_pane

0x10bb,	// (0x000267ad) bg_list_pane_ParamLimits

0x10bb,	// (0x000267ad) bg_list_pane

0x9de5,	// (0x0002f4d7) find_pane

0x304e,	// (0x00028740) listscroll_app_pane_ParamLimits

0x304e,	// (0x00028740) listscroll_app_pane

0x10ef,	// (0x000267e1) listscroll_form_pane

0x9ded,	// (0x0002f4df) listscroll_gen_pane_ParamLimits

0x9ded,	// (0x0002f4df) listscroll_gen_pane

0x110b,	// (0x000267fd) listscroll_set_pane

0x43a4,	// (0x00029a96) main_idle_act_pane

0x0b8d,	// (0x0002627f) main_idle_trad_pane

0x0b8d,	// (0x0002627f) main_list_empty_pane

0x10e3,	// (0x000267d5) main_midp_pane

0x1125,	// (0x00026817) main_pane_g1_ParamLimits

0x1125,	// (0x00026817) main_pane_g1

0xacdb,	// (0x000303cd) popup_ai_message_window_ParamLimits

0xacdb,	// (0x000303cd) popup_ai_message_window

0xad7b,	// (0x0003046d) popup_fep_china_uni_window_ParamLimits

0xad7b,	// (0x0003046d) popup_fep_china_uni_window

0x1247,	// (0x00026939) popup_fep_japan_candidate_window_ParamLimits

0x1247,	// (0x00026939) popup_fep_japan_candidate_window

0x1271,	// (0x00026963) popup_fep_japan_predictive_window_ParamLimits

0x1271,	// (0x00026963) popup_fep_japan_predictive_window

0xaddb,	// (0x000304cd) popup_find_window

0xadf8,	// (0x000304ea) popup_grid_graphic_window_ParamLimits

0xadf8,	// (0x000304ea) popup_grid_graphic_window

0x12e2,	// (0x000269d4) popup_large_graphic_colour_window

0xae9c,	// (0x0003058e) popup_menu_window_ParamLimits

0xae9c,	// (0x0003058e) popup_menu_window

0xb08c,	// (0x0003077e) popup_note_image_window

0xb04c,	// (0x0003073e) popup_note_wait_window_ParamLimits

0xb04c,	// (0x0003073e) popup_note_wait_window

0xb0a4,	// (0x00030796) popup_note_window_ParamLimits

0xb0a4,	// (0x00030796) popup_note_window

0xb152,	// (0x00030844) popup_query_code_window_ParamLimits

0xb152,	// (0x00030844) popup_query_code_window

0x154e,	// (0x00026c40) popup_query_data_code_window_ParamLimits

0x154e,	// (0x00026c40) popup_query_data_code_window

0xb192,	// (0x00030884) popup_query_data_window_ParamLimits

0xb192,	// (0x00030884) popup_query_data_window

0xb226,	// (0x00030918) popup_query_sat_info_window_ParamLimits

0xb226,	// (0x00030918) popup_query_sat_info_window

0xb2cf,	// (0x000309c1) popup_snote_single_graphic_window_ParamLimits

0xb2cf,	// (0x000309c1) popup_snote_single_graphic_window

0xb2cf,	// (0x000309c1) popup_snote_single_text_window_ParamLimits

0xb2cf,	// (0x000309c1) popup_snote_single_text_window

0x15e9,	// (0x00026cdb) popup_sub_window_general

0x172f,	// (0x00026e21) popup_window_general_ParamLimits

0x172f,	// (0x00026e21) popup_window_general

0x1748,	// (0x00026e3a) power_save_pane

0xab3b,	// (0x0003022d) control_pane_g1_ParamLimits

0xab3b,	// (0x0003022d) control_pane_g1

0xab64,	// (0x00030256) control_pane_g2_ParamLimits

0xab64,	// (0x00030256) control_pane_g2

0x0f52,	// (0x00026644) control_pane_g3_ParamLimits

0x0f52,	// (0x00026644) control_pane_g3

0x0007,

0xf788,	// (0x00034e7a) control_pane_g_ParamLimits

0xf788,	// (0x00034e7a) control_pane_g

0xabca,	// (0x000302bc) control_pane_t1_ParamLimits

0xabca,	// (0x000302bc) control_pane_t1

0xac30,	// (0x00030322) control_pane_t2_ParamLimits

0xac30,	// (0x00030322) control_pane_t2

0x0002,

0xf799,	// (0x00034e8b) control_pane_t_ParamLimits

0xf799,	// (0x00034e8b) control_pane_t

0xaa94,	// (0x00030186) navi_navi_volume_pane_cp1

0xaa9c,	// (0x0003018e) status_small_icon_pane

0x0e35,	// (0x00026527) status_small_pane_g1_ParamLimits

0x0e35,	// (0x00026527) status_small_pane_g1

0xaaa4,	// (0x00030196) status_small_pane_g2_ParamLimits

0xaaa4,	// (0x00030196) status_small_pane_g2

0xaab0,	// (0x000301a2) status_small_pane_g3_ParamLimits

0xaab0,	// (0x000301a2) status_small_pane_g3

0xaabc,	// (0x000301ae) status_small_pane_g4_ParamLimits

0xaabc,	// (0x000301ae) status_small_pane_g4

0xaac8,	// (0x000301ba) status_small_pane_g5_ParamLimits

0xaac8,	// (0x000301ba) status_small_pane_g5

0xaad6,	// (0x000301c8) status_small_pane_g6_ParamLimits

0xaad6,	// (0x000301c8) status_small_pane_g6

0x0007,

0xf777,	// (0x00034e69) status_small_pane_g_ParamLimits

0xf777,	// (0x00034e69) status_small_pane_g

0xab05,	// (0x000301f7) status_small_pane_t1

0xab27,	// (0x00030219) status_small_wait_pane_ParamLimits

0xab27,	// (0x00030219) status_small_wait_pane

0xa906,	// (0x0002fff8) aid_levels_signal_ParamLimits

0xa906,	// (0x0002fff8) aid_levels_signal

0xa91e,	// (0x00030010) signal_pane_g1_ParamLimits

0xa91e,	// (0x00030010) signal_pane_g1

0xa939,	// (0x0003002b) signal_pane_g2_ParamLimits

0xa939,	// (0x0003002b) signal_pane_g2

0x0003,

0xf708,	// (0x00034dfa) signal_pane_g_ParamLimits

0xf708,	// (0x00034dfa) signal_pane_g

0x04c3,	// (0x00025bb5) context_pane_g1

0xa2bb,	// (0x0002f9ad) title_pane_g1

0xa30a,	// (0x0002f9fc) title_pane_t1

0xa396,	// (0x0002fa88) title_pane_t2

0xa3bc,	// (0x0002faae) title_pane_t3

0x0002,

0xf557,	// (0x00034c49) title_pane_t

0xb7c1,	// (0x00030eb3) aid_levels_battery_ParamLimits

0xb7c1,	// (0x00030eb3) aid_levels_battery

0xb7dd,	// (0x00030ecf) battery_pane_g1_ParamLimits

0xb7dd,	// (0x00030ecf) battery_pane_g1

0xb7fa,	// (0x00030eec) battery_pane_g2_ParamLimits

0xb7fa,	// (0x00030eec) battery_pane_g2

0x0001,

0xf7ab,	// (0x00034e9d) battery_pane_g_ParamLimits

0xf7ab,	// (0x00034e9d) battery_pane_g

0xbbd4,	// (0x000312c6) uni_indicator_pane_g1

0xbbea,	// (0x000312dc) uni_indicator_pane_g2

0xbc00,	// (0x000312f2) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0003500e) uni_indicator_pane_g

0x0a07,	// (0x000260f9) navi_icon_pane_ParamLimits

0x0a07,	// (0x000260f9) navi_icon_pane

0x0943,	// (0x00026035) navi_midp_pane

0x0a23,	// (0x00026115) navi_navi_pane

0x0a2d,	// (0x0002611f) navi_text_pane_ParamLimits

0x0a2d,	// (0x0002611f) navi_text_pane

0xa093,	// (0x0002f785) status_small_wait_pane_g1

0xcfe4,	// (0x000326d6) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00035009) status_small_wait_pane_g

0xbb73,	// (0x00031265) navi_navi_icon_text_pane

0xbb7b,	// (0x0003126d) navi_navi_pane_g1_ParamLimits

0xbb7b,	// (0x0003126d) navi_navi_pane_g1

0xbb8d,	// (0x0003127f) navi_navi_pane_g2_ParamLimits

0xbb8d,	// (0x0003127f) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00034fd7) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00034fd7) navi_navi_pane_g

0x3e9b,	// (0x0002958d) navi_navi_tabs_pane

0xbb9f,	// (0x00031291) navi_navi_text_pane

0xbb73,	// (0x00031265) navi_navi_volume_pane

0xbb61,	// (0x00031253) navi_text_pane_t1

0xbb55,	// (0x00031247) navi_icon_pane_g1

0x3d92,	// (0x00029484) navi_navi_text_pane_t1

0xbb44,	// (0x00031236) navi_navi_volume_pane_g1

0xbb4c,	// (0x0003123e) volume_small_pane

0xbaa0,	// (0x00031192) navi_navi_icon_text_pane_g1

0xbaa8,	// (0x0003119a) navi_navi_icon_text_pane_t1

0x0a23,	// (0x00026115) navi_tabs_2_long_pane

0x0a23,	// (0x00026115) navi_tabs_2_pane

0x0a23,	// (0x00026115) navi_tabs_3_long_pane

0x0a23,	// (0x00026115) navi_tabs_3_pane

0x0a23,	// (0x00026115) navi_tabs_4_pane

0xba80,	// (0x00031172) tabs_2_active_pane_ParamLimits

0xba80,	// (0x00031172) tabs_2_active_pane

0xba90,	// (0x00031182) tabs_2_passive_pane_ParamLimits

0xba90,	// (0x00031182) tabs_2_passive_pane

0xba4e,	// (0x00031140) tabs_3_active_pane_ParamLimits

0xba4e,	// (0x00031140) tabs_3_active_pane

0xba5e,	// (0x00031150) tabs_3_passive_pane_ParamLimits

0xba5e,	// (0x00031150) tabs_3_passive_pane

0xba6f,	// (0x00031161) tabs_3_passive_pane_cp_ParamLimits

0xba6f,	// (0x00031161) tabs_3_passive_pane_cp

0xba0a,	// (0x000310fc) tabs_4_active_pane_ParamLimits

0xba0a,	// (0x000310fc) tabs_4_active_pane

0xba1b,	// (0x0003110d) tabs_4_passive_pane_ParamLimits

0xba1b,	// (0x0003110d) tabs_4_passive_pane

0xba2c,	// (0x0003111e) tabs_4_passive_pane_cp_ParamLimits

0xba2c,	// (0x0003111e) tabs_4_passive_pane_cp

0xba3d,	// (0x0003112f) tabs_4_passive_pane_cp2_ParamLimits

0xba3d,	// (0x0003112f) tabs_4_passive_pane_cp2

0xb9e6,	// (0x000310d8) tabs_2_long_active_pane_ParamLimits

0xb9e6,	// (0x000310d8) tabs_2_long_active_pane

0xb9f8,	// (0x000310ea) tabs_2_long_passive_pane_ParamLimits

0xb9f8,	// (0x000310ea) tabs_2_long_passive_pane

0xb99b,	// (0x0003108d) tabs_3_long_active_pane_ParamLimits

0xb99b,	// (0x0003108d) tabs_3_long_active_pane

0xb9b4,	// (0x000310a6) tabs_3_long_passive_pane_ParamLimits

0xb9b4,	// (0x000310a6) tabs_3_long_passive_pane

0xb9cd,	// (0x000310bf) tabs_3_long_passive_pane_cp_ParamLimits

0xb9cd,	// (0x000310bf) tabs_3_long_passive_pane_cp

0x1b40,	// (0x00027232) volume_small_pane_g1

0xb94a,	// (0x0003103c) volume_small_pane_g2

0xb953,	// (0x00031045) volume_small_pane_g3

0xb95c,	// (0x0003104e) volume_small_pane_g4

0xb965,	// (0x00031057) volume_small_pane_g5

0xb96e,	// (0x00031060) volume_small_pane_g6

0xb977,	// (0x00031069) volume_small_pane_g7

0xb980,	// (0x00031072) volume_small_pane_g8

0xb989,	// (0x0003107b) volume_small_pane_g9

0xb992,	// (0x00031084) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00034fa3) volume_small_pane_g

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp2_ParamLimits

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp2

0xa3dc,	// (0x0002face) tabs_3_active_pane_g1

0xa3e4,	// (0x0002fad6) tabs_3_active_pane_t1

0xa3ce,	// (0x0002fac0) bg_passive_tab_pane_cp2_ParamLimits

0xa3ce,	// (0x0002fac0) bg_passive_tab_pane_cp2

0xa3dc,	// (0x0002face) tabs_3_passive_pane_g1

0xa3e4,	// (0x0002fad6) tabs_3_passive_pane_t1

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp3_ParamLimits

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp3

0xa3f6,	// (0x0002fae8) tabs_4_active_pane_g1

0xa3fe,	// (0x0002faf0) tabs_4_active_pane_t1

0xa3ce,	// (0x0002fac0) bg_passive_tab_pane_cp3_ParamLimits

0xa3ce,	// (0x0002fac0) bg_passive_tab_pane_cp3

0xa3f6,	// (0x0002fae8) tabs_4_1_passive_pane_g1

0xa3fe,	// (0x0002faf0) tabs_4_1_passive_pane_t1

0x10e3,	// (0x000267d5) list_highlight_pane_cp2

0x43ca,	// (0x00029abc) list_set_pane_ParamLimits

0x43ca,	// (0x00029abc) list_set_pane

0xbc93,	// (0x00031385) main_pane_set_t1_ParamLimits

0xbc93,	// (0x00031385) main_pane_set_t1

0xbcb3,	// (0x000313a5) main_pane_set_t2_ParamLimits

0xbcb3,	// (0x000313a5) main_pane_set_t2

0xbcc7,	// (0x000313b9) main_pane_set_t3_ParamLimits

0xbcc7,	// (0x000313b9) main_pane_set_t3

0xbcdb,	// (0x000313cd) main_pane_set_t4_ParamLimits

0xbcdb,	// (0x000313cd) main_pane_set_t4

0x0003,

0xf981,	// (0x00035073) main_pane_set_t_ParamLimits

0xf981,	// (0x00035073) main_pane_set_t

0xbcef,	// (0x000313e1) setting_code_pane

0x44f2,	// (0x00029be4) setting_slider_graphic_pane

0x44f2,	// (0x00029be4) setting_slider_pane

0x44f2,	// (0x00029be4) setting_text_pane

0x44f2,	// (0x00029be4) setting_volume_pane

0xf4bb,	// (0x00034bad) volume_set_pane

0xa410,	// (0x0002fb02) bg_set_opt_pane_cp

0xf4c5,	// (0x00034bb7) setting_slider_pane_t1

0xf4de,	// (0x00034bd0) setting_slider_pane_t2

0xf4f8,	// (0x00034bea) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00034c50) setting_slider_pane_t

0xf510,	// (0x00034c02) slider_set_pane

0xa183,	// (0x0002f875) bg_set_opt_pane_cp2

0xa41e,	// (0x0002fb10) setting_slider_graphic_pane_g1

0xf526,	// (0x00034c18) setting_slider_graphic_pane_t1

0xf536,	// (0x00034c28) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00034c57) setting_slider_graphic_pane_t

0xf546,	// (0x00034c38) slider_set_pane_cp

0xa183,	// (0x0002f875) input_focus_pane_cp1

0x438b,	// (0x00029a7d) list_set_text_pane

0xa093,	// (0x0002f785) setting_text_pane_g1

0xa183,	// (0x0002f875) input_focus_pane_cp2

0xa093,	// (0x0002f785) setting_code_pane_g1

0xa427,	// (0x0002fb19) setting_code_pane_t1

0xea29,	// (0x0003411b) set_text_pane_t1_ParamLimits

0xea29,	// (0x0003411b) set_text_pane_t1

0xd379,	// (0x00032a6b) set_opt_bg_pane_g1

0xd381,	// (0x00032a73) set_opt_bg_pane_g2

0x4363,	// (0x00029a55) set_opt_bg_pane_g3

0xd391,	// (0x00032a83) set_opt_bg_pane_g4

0xd399,	// (0x00032a8b) set_opt_bg_pane_g5

0xd3a1,	// (0x00032a93) set_opt_bg_pane_g6

0x436d,	// (0x00029a5f) set_opt_bg_pane_g7

0x4377,	// (0x00029a69) set_opt_bg_pane_g8

0x4381,	// (0x00029a73) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00035060) set_opt_bg_pane_g

0x4356,	// (0x00029a48) slider_set_pane_g1

0x1d24,	// (0x00027416) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00035051) slider_set_pane_g

0x1cac,	// (0x0002739e) volume_set_pane_g1

0x1cb6,	// (0x000273a8) volume_set_pane_g2

0x1cc0,	// (0x000273b2) volume_set_pane_g3

0x1cca,	// (0x000273bc) volume_set_pane_g4

0x1cd4,	// (0x000273c6) volume_set_pane_g5

0x1cde,	// (0x000273d0) volume_set_pane_g6

0x1ce8,	// (0x000273da) volume_set_pane_g7

0x1cf2,	// (0x000273e4) volume_set_pane_g8

0x1cfc,	// (0x000273ee) volume_set_pane_g9

0x1d06,	// (0x000273f8) volume_set_pane_g10

0x0009,

0xf937,	// (0x00035029) volume_set_pane_g

0xa435,	// (0x0002fb27) indicator_pane_ParamLimits

0xa435,	// (0x0002fb27) indicator_pane

0xa461,	// (0x0002fb53) main_idle_pane_g2_ParamLimits

0xa461,	// (0x0002fb53) main_idle_pane_g2

0xa499,	// (0x0002fb8b) main_pane_idle_g1_ParamLimits

0xa499,	// (0x0002fb8b) main_pane_idle_g1

0xa4c3,	// (0x0002fbb5) popup_clock_digital_analogue_window_ParamLimits

0xa4c3,	// (0x0002fbb5) popup_clock_digital_analogue_window

0xa4da,	// (0x0002fbcc) soft_indicator_pane_ParamLimits

0xa4da,	// (0x0002fbcc) soft_indicator_pane

0xa4f6,	// (0x0002fbe8) wallpaper_pane_ParamLimits

0xa4f6,	// (0x0002fbe8) wallpaper_pane

0xa093,	// (0x0002f785) wallpaper_pane_g1

0xa508,	// (0x0002fbfa) indicator_pane_g1_ParamLimits

0xa508,	// (0x0002fbfa) indicator_pane_g1

0x47e2,	// (0x00029ed4) navi_navi_icon_text_pane_srt_g1

0xcd36,	// (0x00032428) soft_indicator_pane_t1

0xcd50,	// (0x00032442) aid_ps_area_pane

0xa521,	// (0x0002fc13) aid_ps_clock_pane

0xcd61,	// (0x00032453) aid_ps_indicator_pane

0xcd6d,	// (0x0003245f) indicator_ps_pane_ParamLimits

0xcd6d,	// (0x0003245f) indicator_ps_pane

0xcd7c,	// (0x0003246e) power_save_pane_g1_ParamLimits

0xcd7c,	// (0x0003246e) power_save_pane_g1

0xcd88,	// (0x0003247a) power_save_pane_g2_ParamLimits

0xcd88,	// (0x0003247a) power_save_pane_g2

0xf0ec,	// (0x000347de) aid_navinavi_width_pane

0xcd50,	// (0x00032442) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00034c5c) power_save_pane_g_ParamLimits

0xf56a,	// (0x00034c5c) power_save_pane_g

0xcd96,	// (0x00032488) power_save_pane_t1_ParamLimits

0xcd96,	// (0x00032488) power_save_pane_t1

0xa521,	// (0x0002fc13) aid_ps_clock_pane_ParamLimits

0xcd61,	// (0x00032453) aid_ps_indicator_pane_ParamLimits

0xcda8,	// (0x0003249a) power_save_pane_t4_ParamLimits

0xcda8,	// (0x0003249a) power_save_pane_t4

0x0001,

0xf56f,	// (0x00034c61) power_save_pane_t_ParamLimits

0xf56f,	// (0x00034c61) power_save_pane_t

0xcdd2,	// (0x000324c4) power_save_t3_ParamLimits

0xcdd2,	// (0x000324c4) power_save_t3

0xcdbd,	// (0x000324af) power_save_t2_ParamLimits

0xcdbd,	// (0x000324af) power_save_t2

0xcde7,	// (0x000324d9) indicator_ps_pane_g1

0xa52f,	// (0x0002fc21) ai_gene_pane_ParamLimits

0xa52f,	// (0x0002fc21) ai_gene_pane

0xa546,	// (0x0002fc38) ai_links_pane_ParamLimits

0xa546,	// (0x0002fc38) ai_links_pane

0xa55e,	// (0x0002fc50) indicator_pane_cp1_ParamLimits

0xa55e,	// (0x0002fc50) indicator_pane_cp1

0xa56d,	// (0x0002fc5f) main_pane_idle_g1_cp_ParamLimits

0xa56d,	// (0x0002fc5f) main_pane_idle_g1_cp

0xcdf0,	// (0x000324e2) popup_ai_links_title_window

0xa585,	// (0x0002fc77) soft_indicator_pane_cp1_ParamLimits

0xa585,	// (0x0002fc77) soft_indicator_pane_cp1

0x414a,	// (0x0002983c) ai_links_pane_g1

0x4153,	// (0x00029845) grid_ai_links_pane

0xbbcb,	// (0x000312bd) ai_gene_pane_1

0x4138,	// (0x0002982a) ai_gene_pane_2

0x4141,	// (0x00029833) list_highlight_pane_cp4

0xbba7,	// (0x00031299) cell_ai_link_pane_ParamLimits

0xbba7,	// (0x00031299) cell_ai_link_pane

0x4107,	// (0x000297f9) cell_ai_link_pane_g1

0xcfe4,	// (0x000326d6) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00035004) cell_ai_link_pane_g

0xa183,	// (0x0002f875) grid_highlight_cp2

0xa183,	// (0x0002f875) bg_popup_sub_pane_cp1

0xce07,	// (0x000324f9) popup_ai_links_title_window_t1

0x4053,	// (0x00029745) ai_gene_pane_1_g1_ParamLimits

0x4053,	// (0x00029745) ai_gene_pane_1_g1

0x405f,	// (0x00029751) ai_gene_pane_1_g2_ParamLimits

0x405f,	// (0x00029751) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00034ffa) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00034ffa) ai_gene_pane_1_g

0x406c,	// (0x0002975e) ai_gene_pane_1_t1_ParamLimits

0x406c,	// (0x0002975e) ai_gene_pane_1_t1

0x40a0,	// (0x00029792) grid_ai_soft_ind_pane

0x403e,	// (0x00029730) ai_gene_pane_2_t1_ParamLimits

0x403e,	// (0x00029730) ai_gene_pane_2_t1

0xa599,	// (0x0002fc8b) main_pane_empty_t1_ParamLimits

0xa599,	// (0x0002fc8b) main_pane_empty_t1

0xa5b1,	// (0x0002fca3) main_pane_empty_t2_ParamLimits

0xa5b1,	// (0x0002fca3) main_pane_empty_t2

0xa5c6,	// (0x0002fcb8) main_pane_empty_t3_ParamLimits

0xa5c6,	// (0x0002fcb8) main_pane_empty_t3

0xa5d8,	// (0x0002fcca) main_pane_empty_t4_ParamLimits

0xa5d8,	// (0x0002fcca) main_pane_empty_t4

0xa5ea,	// (0x0002fcdc) main_pane_empty_t5_ParamLimits

0xa5ea,	// (0x0002fcdc) main_pane_empty_t5

0x0004,

0xf574,	// (0x00034c66) main_pane_empty_t_ParamLimits

0xf574,	// (0x00034c66) main_pane_empty_t

0xd3ca,	// (0x00032abc) bg_popup_window_pane_ParamLimits

0xd3ca,	// (0x00032abc) bg_popup_window_pane

0x3da0,	// (0x00029492) find_popup_pane_cp2_ParamLimits

0x3da0,	// (0x00029492) find_popup_pane_cp2

0x3dac,	// (0x0002949e) heading_pane_ParamLimits

0x3dac,	// (0x0002949e) heading_pane

0xa183,	// (0x0002f875) bg_popup_sub_pane

0xbac5,	// (0x000311b7) bg_popup_window_pane_g1_ParamLimits

0xbac5,	// (0x000311b7) bg_popup_window_pane_g1

0xbad4,	// (0x000311c6) bg_popup_window_pane_g2_ParamLimits

0xbad4,	// (0x000311c6) bg_popup_window_pane_g2

0xbae0,	// (0x000311d2) bg_popup_window_pane_g3_ParamLimits

0xbae0,	// (0x000311d2) bg_popup_window_pane_g3

0xbaec,	// (0x000311de) bg_popup_window_pane_g4_ParamLimits

0xbaec,	// (0x000311de) bg_popup_window_pane_g4

0xbafb,	// (0x000311ed) bg_popup_window_pane_g5_ParamLimits

0xbafb,	// (0x000311ed) bg_popup_window_pane_g5

0xbb0b,	// (0x000311fd) bg_popup_window_pane_g6_ParamLimits

0xbb0b,	// (0x000311fd) bg_popup_window_pane_g6

0xbb17,	// (0x00031209) bg_popup_window_pane_g7_ParamLimits

0xbb17,	// (0x00031209) bg_popup_window_pane_g7

0xbb26,	// (0x00031218) bg_popup_window_pane_g8_ParamLimits

0xbb26,	// (0x00031218) bg_popup_window_pane_g8

0xbb35,	// (0x00031227) bg_popup_window_pane_g9_ParamLimits

0xbb35,	// (0x00031227) bg_popup_window_pane_g9

0x3d86,	// (0x00029478) bg_popup_window_pane_g10_ParamLimits

0x3d86,	// (0x00029478) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00034fc2) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00034fc2) bg_popup_window_pane_g

0x3caf,	// (0x000293a1) bg_popup_heading_pane_ParamLimits

0x3caf,	// (0x000293a1) bg_popup_heading_pane

0x1dac,	// (0x0002749e) tabs_4_passive_pane_cp_srt_ParamLimits

0x1dac,	// (0x0002749e) tabs_4_passive_pane_cp_srt

0x1dbe,	// (0x000274b0) tabs_4_passive_pane_srt_ParamLimits

0x3cc3,	// (0x000293b5) heading_pane_g2

0x1dbe,	// (0x000274b0) tabs_4_passive_pane_srt

0x304e,	// (0x00028740) bg_passive_tab_pane_cp3_srt_ParamLimits

0x304e,	// (0x00028740) bg_passive_tab_pane_cp3_srt

0x3ccb,	// (0x000293bd) heading_pane_t1_ParamLimits

0x3ccb,	// (0x000293bd) heading_pane_t1

0x3ce2,	// (0x000293d4) heading_pane_t2_ParamLimits

0x3ce2,	// (0x000293d4) heading_pane_t2

0x0001,

0xf8cb,	// (0x00034fbd) heading_pane_t_ParamLimits

0xf8cb,	// (0x00034fbd) heading_pane_t

0x37da,	// (0x00028ecc) bg_popup_heading_pane_g1

0x3889,	// (0x00028f7b) bg_popup_heading_pane_g2

0x3893,	// (0x00028f85) bg_popup_heading_pane_g3

0x389d,	// (0x00028f8f) bg_popup_heading_pane_g4

0x38a7,	// (0x00028f99) bg_popup_heading_pane_g5

0x38b1,	// (0x00028fa3) bg_popup_heading_pane_g6

0x38b9,	// (0x00028fab) bg_popup_heading_pane_g7

0x38c1,	// (0x00028fb3) bg_popup_heading_pane_g8

0x38cb,	// (0x00028fbd) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00034f79) bg_popup_heading_pane_g

0x2fda,	// (0x000286cc) bg_popup_sub_pane_g1

0x2fe2,	// (0x000286d4) bg_popup_sub_pane_g2

0x2fea,	// (0x000286dc) bg_popup_sub_pane_g3

0x2ff2,	// (0x000286e4) bg_popup_sub_pane_g4

0x2ffa,	// (0x000286ec) bg_popup_sub_pane_g5

0x3002,	// (0x000286f4) bg_popup_sub_pane_g6

0x300a,	// (0x000286fc) bg_popup_sub_pane_g7

0x3012,	// (0x00028704) bg_popup_sub_pane_g8

0x301a,	// (0x0002870c) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00034f53) bg_popup_sub_pane_g

0xa3ce,	// (0x0002fac0) bg_popup_window_pane_cp5_ParamLimits

0xa3ce,	// (0x0002fac0) bg_popup_window_pane_cp5

0xce24,	// (0x00032516) popup_note_window_g1_ParamLimits

0xce24,	// (0x00032516) popup_note_window_g1

0xce30,	// (0x00032522) popup_note_window_t1_ParamLimits

0xce30,	// (0x00032522) popup_note_window_t1

0xce46,	// (0x00032538) popup_note_window_t2_ParamLimits

0xce46,	// (0x00032538) popup_note_window_t2

0xce5c,	// (0x0003254e) popup_note_window_t3_ParamLimits

0xce5c,	// (0x0003254e) popup_note_window_t3

0xce72,	// (0x00032564) popup_note_window_t4_ParamLimits

0xce72,	// (0x00032564) popup_note_window_t4

0xce9a,	// (0x0003258c) popup_note_window_t5_ParamLimits

0xce9a,	// (0x0003258c) popup_note_window_t5

0x0004,

0xf57f,	// (0x00034c71) popup_note_window_t_ParamLimits

0xf57f,	// (0x00034c71) popup_note_window_t

0xcee4,	// (0x000325d6) bg_popup_window_pane_cp6_ParamLimits

0xcee4,	// (0x000325d6) bg_popup_window_pane_cp6

0x3756,	// (0x00028e48) popup_note_image_window_g1_ParamLimits

0x3756,	// (0x00028e48) popup_note_image_window_g1

0x3762,	// (0x00028e54) popup_note_image_window_g2_ParamLimits

0x3762,	// (0x00028e54) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00034f47) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00034f47) popup_note_image_window_g

0x377b,	// (0x00028e6d) popup_note_image_window_t1_ParamLimits

0x377b,	// (0x00028e6d) popup_note_image_window_t1

0x3794,	// (0x00028e86) popup_note_image_window_t2_ParamLimits

0x3794,	// (0x00028e86) popup_note_image_window_t2

0x37ad,	// (0x00028e9f) popup_note_image_window_t3_ParamLimits

0x37ad,	// (0x00028e9f) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00034f4c) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00034f4c) popup_note_image_window_t

0x3616,	// (0x00028d08) bg_popup_window_pane_cp7_ParamLimits

0x3616,	// (0x00028d08) bg_popup_window_pane_cp7

0x3646,	// (0x00028d38) popup_note_wait_window_g1_ParamLimits

0x3646,	// (0x00028d38) popup_note_wait_window_g1

0x3652,	// (0x00028d44) popup_note_wait_window_g2_ParamLimits

0x3652,	// (0x00028d44) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00034f35) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00034f35) popup_note_wait_window_g

0x366a,	// (0x00028d5c) popup_note_wait_window_t1_ParamLimits

0x366a,	// (0x00028d5c) popup_note_wait_window_t1

0x3691,	// (0x00028d83) popup_note_wait_window_t2_ParamLimits

0x3691,	// (0x00028d83) popup_note_wait_window_t2

0x36af,	// (0x00028da1) popup_note_wait_window_t3_ParamLimits

0x36af,	// (0x00028da1) popup_note_wait_window_t3

0x36c2,	// (0x00028db4) popup_note_wait_window_t4_ParamLimits

0x36c2,	// (0x00028db4) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00034f3c) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00034f3c) popup_note_wait_window_t

0x36e7,	// (0x00028dd9) wait_bar_pane_ParamLimits

0x36e7,	// (0x00028dd9) wait_bar_pane

0xa183,	// (0x0002f875) wait_anim_pane

0xa183,	// (0x0002f875) wait_border_pane

0xa093,	// (0x0002f785) wait_anim_pane_g1

0xa093,	// (0x0002f785) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00034df5) wait_anim_pane_g

0x35ba,	// (0x00028cac) wait_border_pane_g1

0x35c5,	// (0x00028cb7) wait_border_pane_g2

0x35ce,	// (0x00028cc0) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00034f2e) wait_border_pane_g

0x3424,	// (0x00028b16) bg_popup_window_pane_cp16_ParamLimits

0x3424,	// (0x00028b16) bg_popup_window_pane_cp16

0x3524,	// (0x00028c16) indicator_popup_pane_cp4_ParamLimits

0x3524,	// (0x00028c16) indicator_popup_pane_cp4

0x3538,	// (0x00028c2a) popup_query_data_window_t1_ParamLimits

0x3538,	// (0x00028c2a) popup_query_data_window_t1

0x354a,	// (0x00028c3c) popup_query_data_window_t2_ParamLimits

0x354a,	// (0x00028c3c) popup_query_data_window_t2

0x3563,	// (0x00028c55) popup_query_data_window_t3_ParamLimits

0x3563,	// (0x00028c55) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00034f27) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00034f27) popup_query_data_window_t

0x357d,	// (0x00028c6f) query_popup_data_pane_ParamLimits

0x357d,	// (0x00028c6f) query_popup_data_pane

0x3591,	// (0x00028c83) query_popup_data_pane_cp1_ParamLimits

0x3591,	// (0x00028c83) query_popup_data_pane_cp1

0x3424,	// (0x00028b16) bg_popup_window_pane_cp10_ParamLimits

0x3424,	// (0x00028b16) bg_popup_window_pane_cp10

0x3456,	// (0x00028b48) indicator_popup_pane_ParamLimits

0x3456,	// (0x00028b48) indicator_popup_pane

0x3478,	// (0x00028b6a) popup_query_code_window_t1_ParamLimits

0x3478,	// (0x00028b6a) popup_query_code_window_t1

0x3492,	// (0x00028b84) popup_query_code_window_t2_ParamLimits

0x3492,	// (0x00028b84) popup_query_code_window_t2

0x34db,	// (0x00028bcd) popup_query_code_window_t3_ParamLimits

0x34db,	// (0x00028bcd) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00034f20) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00034f20) popup_query_code_window_t

0x350a,	// (0x00028bfc) query_popup_pane_ParamLimits

0x350a,	// (0x00028bfc) query_popup_pane

0xcee4,	// (0x000325d6) bg_popup_window_pane_cp15_ParamLimits

0xcee4,	// (0x000325d6) bg_popup_window_pane_cp15

0xcf04,	// (0x000325f6) indicator_popup_pane_cp1_ParamLimits

0xcf04,	// (0x000325f6) indicator_popup_pane_cp1

0xcf17,	// (0x00032609) indicator_popup_pane_cp2_ParamLimits

0xcf17,	// (0x00032609) indicator_popup_pane_cp2

0xcf32,	// (0x00032624) popup_query_data_code_window_g1_ParamLimits

0xcf32,	// (0x00032624) popup_query_data_code_window_g1

0xcf45,	// (0x00032637) popup_query_data_code_window_t1_ParamLimits

0xcf45,	// (0x00032637) popup_query_data_code_window_t1

0xcf57,	// (0x00032649) popup_query_data_code_window_t2_ParamLimits

0xcf57,	// (0x00032649) popup_query_data_code_window_t2

0xcf69,	// (0x0003265b) popup_query_data_code_window_t3_ParamLimits

0xcf69,	// (0x0003265b) popup_query_data_code_window_t3

0xcf7f,	// (0x00032671) popup_query_data_code_window_t4_ParamLimits

0xcf7f,	// (0x00032671) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00034c7c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00034c7c) popup_query_data_code_window_t

0x09c3,	// (0x000260b5) list_single_midp_graphic_pane_g3

0xcf99,	// (0x0003268b) query_popup_data_pane_cp2_ParamLimits

0xcfac,	// (0x0003269e) query_popup_pane_cp2_ParamLimits

0xcfac,	// (0x0003269e) query_popup_pane_cp2

0xa183,	// (0x0002f875) bg_popup_window_pane_cp11

0x3410,	// (0x00028b02) heading_pane_cp5

0xd045,	// (0x00032737) listscroll_popup_info_pane

0xa183,	// (0x0002f875) input_focus_pane_cp3

0xcfc7,	// (0x000326b9) query_popup_pane_t1

0xcfd5,	// (0x000326c7) list_popup_info_pane_ParamLimits

0xcfd5,	// (0x000326c7) list_popup_info_pane

0xcfe4,	// (0x000326d6) listscroll_popup_info_pane_g1

0xcfec,	// (0x000326de) scroll_pane_cp7

0xcff6,	// (0x000326e8) popup_info_list_pane_t1_ParamLimits

0xcff6,	// (0x000326e8) popup_info_list_pane_t1

0xd010,	// (0x00032702) popup_info_list_pane_t2_ParamLimits

0xd010,	// (0x00032702) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00034c85) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00034c85) popup_info_list_pane_t

0xa183,	// (0x0002f875) bg_popup_window_pane_cp12

0x47fc,	// (0x00029eee) find_popup_pane

0xa410,	// (0x0002fb02) bg_popup_window_pane_cp3

0xd02a,	// (0x0003271c) heading_pane_cp3

0xd036,	// (0x00032728) listscroll_popup_graphic_pane

0xa183,	// (0x0002f875) bg_popup_window_pane_cp4

0xa64c,	// (0x0002fd3e) heading_pane_cp4

0xd045,	// (0x00032737) listscroll_popup_colour_pane

0xa656,	// (0x0002fd48) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa656,	// (0x0002fd48) cell_large_graphic_colour_none_popup_pane

0xa66a,	// (0x0002fd5c) grid_large_graphic_colour_popup_pane_ParamLimits

0xa66a,	// (0x0002fd5c) grid_large_graphic_colour_popup_pane

0xa68e,	// (0x0002fd80) listscroll_popup_colour_pane_g1_ParamLimits

0xa68e,	// (0x0002fd80) listscroll_popup_colour_pane_g1

0xa6a5,	// (0x0002fd97) listscroll_popup_colour_pane_g2_ParamLimits

0xa6a5,	// (0x0002fd97) listscroll_popup_colour_pane_g2

0xa6bc,	// (0x0002fdae) listscroll_popup_colour_pane_g3_ParamLimits

0xa6bc,	// (0x0002fdae) listscroll_popup_colour_pane_g3

0xa6cc,	// (0x0002fdbe) listscroll_popup_colour_pane_g4_ParamLimits

0xa6cc,	// (0x0002fdbe) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00034c8a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00034c8a) listscroll_popup_colour_pane_g

0xd04d,	// (0x0003273f) scroll_pane_cp6_ParamLimits

0xd04d,	// (0x0003273f) scroll_pane_cp6

0xa6dc,	// (0x0002fdce) cell_large_graphic_colour_popup_pane_ParamLimits

0xa6dc,	// (0x0002fdce) cell_large_graphic_colour_popup_pane

0xd05f,	// (0x00032751) cell_large_graphic_colour_none_popup_pane_t1

0xa183,	// (0x0002f875) grid_highlight_pane_cp5

0xd06e,	// (0x00032760) cell_large_graphic_colour_popup_pane_g1

0xd076,	// (0x00032768) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00034c93) cell_large_graphic_colour_popup_pane_g

0xd07e,	// (0x00032770) cell_large_graphic_colour_popup_pane_g2_copy1

0xd087,	// (0x00032779) grid_highlight_pane_cp4

0xd08f,	// (0x00032781) bg_popup_window_pane_cp8_ParamLimits

0xd08f,	// (0x00032781) bg_popup_window_pane_cp8

0xd0aa,	// (0x0003279c) popup_snote_single_text_window_g1_ParamLimits

0xd0aa,	// (0x0003279c) popup_snote_single_text_window_g1

0xd0bc,	// (0x000327ae) popup_snote_single_text_window_t1_ParamLimits

0xd0bc,	// (0x000327ae) popup_snote_single_text_window_t1

0xd0cf,	// (0x000327c1) popup_snote_single_text_window_t2_ParamLimits

0xd0cf,	// (0x000327c1) popup_snote_single_text_window_t2

0xd0e2,	// (0x000327d4) popup_snote_single_text_window_t3_ParamLimits

0xd0e2,	// (0x000327d4) popup_snote_single_text_window_t3

0xd11b,	// (0x0003280d) popup_snote_single_text_window_t4_ParamLimits

0xd11b,	// (0x0003280d) popup_snote_single_text_window_t4

0xd14f,	// (0x00032841) popup_snote_single_text_window_t5_ParamLimits

0xd14f,	// (0x00032841) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00034c98) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00034c98) popup_snote_single_text_window_t

0xd17e,	// (0x00032870) bg_popup_window_pane_cp9_ParamLimits

0xd17e,	// (0x00032870) bg_popup_window_pane_cp9

0xd0aa,	// (0x0003279c) popup_snote_single_graphic_window_g1_ParamLimits

0xd0aa,	// (0x0003279c) popup_snote_single_graphic_window_g1

0xd18c,	// (0x0003287e) popup_snote_single_graphic_window_g2_ParamLimits

0xd18c,	// (0x0003287e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00034ca3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00034ca3) popup_snote_single_graphic_window_g

0xd198,	// (0x0003288a) popup_snote_single_graphic_window_t1_ParamLimits

0xd198,	// (0x0003288a) popup_snote_single_graphic_window_t1

0xd1ab,	// (0x0003289d) popup_snote_single_graphic_window_t2_ParamLimits

0xd1ab,	// (0x0003289d) popup_snote_single_graphic_window_t2

0xd1be,	// (0x000328b0) popup_snote_single_graphic_window_t3_ParamLimits

0xd1be,	// (0x000328b0) popup_snote_single_graphic_window_t3

0xd1f7,	// (0x000328e9) popup_snote_single_graphic_window_t4_ParamLimits

0xd1f7,	// (0x000328e9) popup_snote_single_graphic_window_t4

0xd22b,	// (0x0003291d) popup_snote_single_graphic_window_t5_ParamLimits

0xd22b,	// (0x0003291d) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00034ca8) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00034ca8) popup_snote_single_graphic_window_t

0x473a,	// (0x00029e2c) grid_graphic_popup_pane_ParamLimits

0x473a,	// (0x00029e2c) grid_graphic_popup_pane

0x4768,	// (0x00029e5a) listscroll_popup_graphic_pane_g1_ParamLimits

0x4768,	// (0x00029e5a) listscroll_popup_graphic_pane_g1

0xbe14,	// (0x00031506) listscroll_popup_graphic_pane_g2_ParamLimits

0xbe14,	// (0x00031506) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0003509d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0003509d) listscroll_popup_graphic_pane_g

0x4790,	// (0x00029e82) scroll_pane_cp5

0xbdb3,	// (0x000314a5) cell_graphic_popup_pane_ParamLimits

0xbdb3,	// (0x000314a5) cell_graphic_popup_pane

0x46b0,	// (0x00029da2) cell_graphic_popup_pane_g1

0x46b8,	// (0x00029daa) cell_graphic_popup_pane_g2

0xd07e,	// (0x00032770) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00035096) cell_graphic_popup_pane_g

0x46c1,	// (0x00029db3) cell_graphic_popup_pane_t2

0xd087,	// (0x00032779) grid_highlight_pane_cp3

0xd26c,	// (0x0003295e) list_gen_pane_ParamLimits

0xd26c,	// (0x0003295e) list_gen_pane

0xd294,	// (0x00032986) scroll_pane

0xbd6a,	// (0x0003145c) bg_list_pane_g1_ParamLimits

0xbd6a,	// (0x0003145c) bg_list_pane_g1

0x4625,	// (0x00029d17) bg_list_pane_g2_ParamLimits

0x4625,	// (0x00029d17) bg_list_pane_g2

0x463a,	// (0x00029d2c) bg_list_pane_g3_ParamLimits

0x463a,	// (0x00029d2c) bg_list_pane_g3

0x464e,	// (0x00029d40) bg_list_pane_g4_ParamLimits

0x464e,	// (0x00029d40) bg_list_pane_g4

0xbd87,	// (0x00031479) bg_list_pane_g5_ParamLimits

0xbd87,	// (0x00031479) bg_list_pane_g5

0x0004,

0xf999,	// (0x0003508b) bg_list_pane_g_ParamLimits

0xf999,	// (0x0003508b) bg_list_pane_g

0xbd2d,	// (0x0003141f) list_double2_graphic_large_graphic_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double2_graphic_large_graphic_pane

0xbd2d,	// (0x0003141f) list_double2_graphic_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double2_graphic_pane

0xbd2d,	// (0x0003141f) list_double2_large_graphic_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double2_large_graphic_pane

0xbd2d,	// (0x0003141f) list_double2_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double2_pane

0xbd2d,	// (0x0003141f) list_double_graphic_heading_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double_graphic_heading_pane

0xbd2d,	// (0x0003141f) list_double_graphic_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double_graphic_pane

0xbd2d,	// (0x0003141f) list_double_heading_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double_heading_pane

0xbd2d,	// (0x0003141f) list_double_large_graphic_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double_large_graphic_pane

0xbd2d,	// (0x0003141f) list_double_number_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double_number_pane

0xbd2d,	// (0x0003141f) list_double_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double_pane

0xbd2d,	// (0x0003141f) list_double_time_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_double_time_pane

0xbd2d,	// (0x0003141f) list_setting_number_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_setting_number_pane

0xbd2d,	// (0x0003141f) list_setting_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_setting_pane

0x9e5c,	// (0x0002f54e) list_single_2graphic_pane_ParamLimits

0x9e5c,	// (0x0002f54e) list_single_2graphic_pane

0x9e5c,	// (0x0002f54e) list_single_graphic_heading_pane_ParamLimits

0x9e5c,	// (0x0002f54e) list_single_graphic_heading_pane

0x9e5c,	// (0x0002f54e) list_single_graphic_pane_ParamLimits

0x9e5c,	// (0x0002f54e) list_single_graphic_pane

0x9e5c,	// (0x0002f54e) list_single_heading_pane_ParamLimits

0x9e5c,	// (0x0002f54e) list_single_heading_pane

0xbd2d,	// (0x0003141f) list_single_large_graphic_pane_ParamLimits

0xbd2d,	// (0x0003141f) list_single_large_graphic_pane

0x9e5c,	// (0x0002f54e) list_single_number_heading_pane_ParamLimits

0x9e5c,	// (0x0002f54e) list_single_number_heading_pane

0x9e5c,	// (0x0002f54e) list_single_number_pane_ParamLimits

0x9e5c,	// (0x0002f54e) list_single_number_pane

0x9e5c,	// (0x0002f54e) list_single_pane_ParamLimits

0x9e5c,	// (0x0002f54e) list_single_pane

0xa183,	// (0x0002f875) list_highlight_pane_cp1

0xea44,	// (0x00034136) list_single_pane_g1_ParamLimits

0xea44,	// (0x00034136) list_single_pane_g1

0xea50,	// (0x00034142) list_single_pane_g2_ParamLimits

0xea50,	// (0x00034142) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00034cba) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00034cba) list_single_pane_g

0xed5f,	// (0x00034451) list_single_pane_t1_ParamLimits

0xed5f,	// (0x00034451) list_single_pane_t1

0xea44,	// (0x00034136) list_single_number_pane_g1_ParamLimits

0xea44,	// (0x00034136) list_single_number_pane_g1

0xea50,	// (0x00034142) list_single_number_pane_g2_ParamLimits

0xea50,	// (0x00034142) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00034cba) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00034cba) list_single_number_pane_g

0xec8a,	// (0x0003437c) list_single_number_pane_t1_ParamLimits

0xec8a,	// (0x0003437c) list_single_number_pane_t1

0x9e1e,	// (0x0002f510) list_single_number_pane_t2_ParamLimits

0x9e1e,	// (0x0002f510) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0003504c) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0003504c) list_single_number_pane_t

0x9804,	// (0x0002eef6) list_single_graphic_pane_g1_ParamLimits

0x9804,	// (0x0002eef6) list_single_graphic_pane_g1

0xea44,	// (0x00034136) list_single_graphic_pane_g2_ParamLimits

0xea44,	// (0x00034136) list_single_graphic_pane_g2

0xea50,	// (0x00034142) list_single_graphic_pane_g3_ParamLimits

0xea50,	// (0x00034142) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00034cb3) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00034cb3) list_single_graphic_pane_g

0x9810,	// (0x0002ef02) list_single_graphic_pane_t1_ParamLimits

0x9810,	// (0x0002ef02) list_single_graphic_pane_t1

0xea44,	// (0x00034136) list_single_heading_pane_g1_ParamLimits

0xea44,	// (0x00034136) list_single_heading_pane_g1

0xea50,	// (0x00034142) list_single_heading_pane_g2_ParamLimits

0xea50,	// (0x00034142) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00034cba) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00034cba) list_single_heading_pane_g

0x9826,	// (0x0002ef18) list_single_heading_pane_t1_ParamLimits

0x9826,	// (0x0002ef18) list_single_heading_pane_t1

0x983c,	// (0x0002ef2e) list_single_heading_pane_t2_ParamLimits

0x983c,	// (0x0002ef2e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00034cbf) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00034cbf) list_single_heading_pane_t

0xea44,	// (0x00034136) list_single_number_heading_pane_g1_ParamLimits

0xea44,	// (0x00034136) list_single_number_heading_pane_g1

0xea50,	// (0x00034142) list_single_number_heading_pane_g2_ParamLimits

0xea50,	// (0x00034142) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00034cba) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00034cba) list_single_number_heading_pane_g

0x9826,	// (0x0002ef18) list_single_number_heading_pane_t1_ParamLimits

0x9826,	// (0x0002ef18) list_single_number_heading_pane_t1

0xea5c,	// (0x0003414e) list_single_number_heading_pane_t2_ParamLimits

0xea5c,	// (0x0003414e) list_single_number_heading_pane_t2

0xea6e,	// (0x00034160) list_single_number_heading_pane_t3_ParamLimits

0xea6e,	// (0x00034160) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00034cc4) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00034cc4) list_single_number_heading_pane_t

0xea80,	// (0x00034172) list_single_graphic_heading_pane_g1_ParamLimits

0xea80,	// (0x00034172) list_single_graphic_heading_pane_g1

0x984e,	// (0x0002ef40) list_single_graphic_heading_pane_g4_ParamLimits

0x984e,	// (0x0002ef40) list_single_graphic_heading_pane_g4

0xea50,	// (0x00034142) list_single_graphic_heading_pane_g5_ParamLimits

0xea50,	// (0x00034142) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00034ccb) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00034ccb) list_single_graphic_heading_pane_g

0x9826,	// (0x0002ef18) list_single_graphic_heading_pane_t1_ParamLimits

0x9826,	// (0x0002ef18) list_single_graphic_heading_pane_t1

0x985f,	// (0x0002ef51) list_single_graphic_heading_pane_t2_ParamLimits

0x985f,	// (0x0002ef51) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00034cd2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00034cd2) list_single_graphic_heading_pane_t

0xea8c,	// (0x0003417e) list_single_large_graphic_pane_g1_ParamLimits

0xea8c,	// (0x0003417e) list_single_large_graphic_pane_g1

0xea98,	// (0x0003418a) list_single_large_graphic_pane_g2_ParamLimits

0xea98,	// (0x0003418a) list_single_large_graphic_pane_g2

0xeaa4,	// (0x00034196) list_single_large_graphic_pane_g3_ParamLimits

0xeaa4,	// (0x00034196) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00034cd7) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00034cd7) list_single_large_graphic_pane_g

0x35c5,	// (0x00028cb7) wait_border_pane_g2_copy1

0x9871,	// (0x0002ef63) list_single_large_graphic_pane_g4_cp2

0xeab0,	// (0x000341a2) list_single_large_graphic_pane_t1_ParamLimits

0xeab0,	// (0x000341a2) list_single_large_graphic_pane_t1

0x9879,	// (0x0002ef6b) list_double_pane_g1_ParamLimits

0x9879,	// (0x0002ef6b) list_double_pane_g1

0xeac6,	// (0x000341b8) list_double_pane_g2_ParamLimits

0xeac6,	// (0x000341b8) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00034cde) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00034cde) list_double_pane_g

0x9885,	// (0x0002ef77) list_double_pane_t1_ParamLimits

0x9885,	// (0x0002ef77) list_double_pane_t1

0x989b,	// (0x0002ef8d) list_double_pane_t2_ParamLimits

0x989b,	// (0x0002ef8d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00034ce3) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00034ce3) list_double_pane_t

0x98ad,	// (0x0002ef9f) list_double2_pane_g1_ParamLimits

0x98ad,	// (0x0002ef9f) list_double2_pane_g1

0x98be,	// (0x0002efb0) list_double2_pane_g2_ParamLimits

0x98be,	// (0x0002efb0) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00034ce8) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00034ce8) list_double2_pane_g

0x98ca,	// (0x0002efbc) list_double2_pane_t1_ParamLimits

0x98ca,	// (0x0002efbc) list_double2_pane_t1

0x98e0,	// (0x0002efd2) list_double2_pane_t2_ParamLimits

0x98e0,	// (0x0002efd2) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00034ced) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00034ced) list_double2_pane_t

0x9879,	// (0x0002ef6b) list_double_number_pane_g1_ParamLimits

0x9879,	// (0x0002ef6b) list_double_number_pane_g1

0xeac6,	// (0x000341b8) list_double_number_pane_g2_ParamLimits

0xeac6,	// (0x000341b8) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00034cde) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00034cde) list_double_number_pane_g

0x98f2,	// (0x0002efe4) list_double_number_pane_t1_ParamLimits

0x98f2,	// (0x0002efe4) list_double_number_pane_t1

0x9904,	// (0x0002eff6) list_double_number_pane_t2_ParamLimits

0x9904,	// (0x0002eff6) list_double_number_pane_t2

0x991a,	// (0x0002f00c) list_double_number_pane_t3_ParamLimits

0x991a,	// (0x0002f00c) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00034cf2) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00034cf2) list_double_number_pane_t

0x992c,	// (0x0002f01e) list_double_graphic_pane_g1_ParamLimits

0x992c,	// (0x0002f01e) list_double_graphic_pane_g1

0x9938,	// (0x0002f02a) list_double_graphic_pane_g2_ParamLimits

0x9938,	// (0x0002f02a) list_double_graphic_pane_g2

0x9947,	// (0x0002f039) list_double_graphic_pane_g3_ParamLimits

0x9947,	// (0x0002f039) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00034cf9) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00034cf9) list_double_graphic_pane_g

0x995f,	// (0x0002f051) list_double_graphic_pane_t1_ParamLimits

0x995f,	// (0x0002f051) list_double_graphic_pane_t1

0x9975,	// (0x0002f067) list_double_graphic_pane_t2_ParamLimits

0x9975,	// (0x0002f067) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00034d02) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00034d02) list_double_graphic_pane_t

0x9987,	// (0x0002f079) list_double2_graphic_pane_g1_ParamLimits

0x9987,	// (0x0002f079) list_double2_graphic_pane_g1

0xead2,	// (0x000341c4) list_double2_graphic_pane_g2_ParamLimits

0xead2,	// (0x000341c4) list_double2_graphic_pane_g2

0xeade,	// (0x000341d0) list_double2_graphic_pane_g3_ParamLimits

0xeade,	// (0x000341d0) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00034d07) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00034d07) list_double2_graphic_pane_g

0x9993,	// (0x0002f085) list_double2_graphic_pane_t1_ParamLimits

0x9993,	// (0x0002f085) list_double2_graphic_pane_t1

0x99a9,	// (0x0002f09b) list_double2_graphic_pane_t2_ParamLimits

0x99a9,	// (0x0002f09b) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00034d0e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00034d0e) list_double2_graphic_pane_t

0x99bb,	// (0x0002f0ad) list_double_large_graphic_pane_g1_ParamLimits

0x99bb,	// (0x0002f0ad) list_double_large_graphic_pane_g1

0x99da,	// (0x0002f0cc) list_double_large_graphic_pane_g2_ParamLimits

0x99da,	// (0x0002f0cc) list_double_large_graphic_pane_g2

0xeac6,	// (0x000341b8) list_double_large_graphic_pane_g3_ParamLimits

0xeac6,	// (0x000341b8) list_double_large_graphic_pane_g3

0x99eb,	// (0x0002f0dd) list_double_large_graphic_pane_g4_ParamLimits

0x99eb,	// (0x0002f0dd) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00034d13) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00034d13) list_double_large_graphic_pane_g

0x99fe,	// (0x0002f0f0) list_double_large_graphic_pane_t1_ParamLimits

0x99fe,	// (0x0002f0f0) list_double_large_graphic_pane_t1

0x9a17,	// (0x0002f109) list_double_large_graphic_pane_t2_ParamLimits

0x9a17,	// (0x0002f109) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00034d1e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00034d1e) list_double_large_graphic_pane_t

0x9a29,	// (0x0002f11b) list_double2_large_graphic_pane_g1_ParamLimits

0x9a29,	// (0x0002f11b) list_double2_large_graphic_pane_g1

0x98ad,	// (0x0002ef9f) list_double2_large_graphic_pane_g2_ParamLimits

0x98ad,	// (0x0002ef9f) list_double2_large_graphic_pane_g2

0x98be,	// (0x0002efb0) list_double2_large_graphic_pane_g3_ParamLimits

0x98be,	// (0x0002efb0) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00034d23) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00034d23) list_double2_large_graphic_pane_g

0x9a35,	// (0x0002f127) list_double2_large_graphic_pane_t1_ParamLimits

0x9a35,	// (0x0002f127) list_double2_large_graphic_pane_t1

0x9a4b,	// (0x0002f13d) list_double2_large_graphic_pane_t2_ParamLimits

0x9a4b,	// (0x0002f13d) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00034d2a) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00034d2a) list_double2_large_graphic_pane_t

0x9a5d,	// (0x0002f14f) list_double_heading_pane_g1_ParamLimits

0x9a5d,	// (0x0002f14f) list_double_heading_pane_g1

0x9a6e,	// (0x0002f160) list_double_heading_pane_g2_ParamLimits

0x9a6e,	// (0x0002f160) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00034d2f) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00034d2f) list_double_heading_pane_g

0x9a7a,	// (0x0002f16c) list_double_heading_pane_t1_ParamLimits

0x9a7a,	// (0x0002f16c) list_double_heading_pane_t1

0x98e0,	// (0x0002efd2) list_double_heading_pane_t2_ParamLimits

0x98e0,	// (0x0002efd2) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00034d34) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00034d34) list_double_heading_pane_t

0xeaff,	// (0x000341f1) list_double_graphic_heading_pane_g1_ParamLimits

0xeaff,	// (0x000341f1) list_double_graphic_heading_pane_g1

0x9a5d,	// (0x0002f14f) list_double_graphic_heading_pane_g2_ParamLimits

0x9a5d,	// (0x0002f14f) list_double_graphic_heading_pane_g2

0x9a6e,	// (0x0002f160) list_double_graphic_heading_pane_g3_ParamLimits

0x9a6e,	// (0x0002f160) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00034d39) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00034d39) list_double_graphic_heading_pane_g

0x9a90,	// (0x0002f182) list_double_graphic_heading_pane_t1_ParamLimits

0x9a90,	// (0x0002f182) list_double_graphic_heading_pane_t1

0x99a9,	// (0x0002f09b) list_double_graphic_heading_pane_t2_ParamLimits

0x99a9,	// (0x0002f09b) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00034d40) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00034d40) list_double_graphic_heading_pane_t

0x99da,	// (0x0002f0cc) list_double_time_pane_g1_ParamLimits

0x99da,	// (0x0002f0cc) list_double_time_pane_g1

0xeac6,	// (0x000341b8) list_double_time_pane_g2_ParamLimits

0xeac6,	// (0x000341b8) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00034d45) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00034d45) list_double_time_pane_g

0x9aa6,	// (0x0002f198) list_double_time_pane_t1_ParamLimits

0x9aa6,	// (0x0002f198) list_double_time_pane_t1

0x9abc,	// (0x0002f1ae) list_double_time_pane_t2_ParamLimits

0x9abc,	// (0x0002f1ae) list_double_time_pane_t2

0x9ace,	// (0x0002f1c0) list_double_time_pane_t3_ParamLimits

0x9ace,	// (0x0002f1c0) list_double_time_pane_t3

0x9ae0,	// (0x0002f1d2) list_double_time_pane_t4_ParamLimits

0x9ae0,	// (0x0002f1d2) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00034d4a) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00034d4a) list_double_time_pane_t

0x9af2,	// (0x0002f1e4) list_setting_pane_g1_ParamLimits

0x9af2,	// (0x0002f1e4) list_setting_pane_g1

0x9afe,	// (0x0002f1f0) list_setting_pane_g2_ParamLimits

0x9afe,	// (0x0002f1f0) list_setting_pane_g2

0x0001,

0xf661,	// (0x00034d53) list_setting_pane_g_ParamLimits

0xf661,	// (0x00034d53) list_setting_pane_g

0x9b0a,	// (0x0002f1fc) list_setting_pane_t1_ParamLimits

0x9b0a,	// (0x0002f1fc) list_setting_pane_t1

0x9b24,	// (0x0002f216) list_setting_pane_t2_ParamLimits

0x9b24,	// (0x0002f216) list_setting_pane_t2

0x0002,

0xf666,	// (0x00034d58) list_setting_pane_t_ParamLimits

0xf666,	// (0x00034d58) list_setting_pane_t

0x9b63,	// (0x0002f255) set_value_pane_cp_ParamLimits

0x9b63,	// (0x0002f255) set_value_pane_cp

0x9b71,	// (0x0002f263) list_setting_number_pane_g1_ParamLimits

0x9b71,	// (0x0002f263) list_setting_number_pane_g1

0x9b7d,	// (0x0002f26f) list_setting_number_pane_g2_ParamLimits

0x9b7d,	// (0x0002f26f) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00034d5f) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00034d5f) list_setting_number_pane_g

0x9b89,	// (0x0002f27b) list_setting_number_pane_t1_ParamLimits

0x9b89,	// (0x0002f27b) list_setting_number_pane_t1

0x9ba2,	// (0x0002f294) list_setting_number_pane_t2_ParamLimits

0x9ba2,	// (0x0002f294) list_setting_number_pane_t2

0x9bbc,	// (0x0002f2ae) list_setting_number_pane_t3_ParamLimits

0x9bbc,	// (0x0002f2ae) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00034d64) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00034d64) list_setting_number_pane_t

0x9b63,	// (0x0002f255) set_value_pane_ParamLimits

0x9b63,	// (0x0002f255) set_value_pane

0xd2c8,	// (0x000329ba) bg_set_opt_pane_ParamLimits

0xd2c8,	// (0x000329ba) bg_set_opt_pane

0xeb0b,	// (0x000341fd) set_value_pane_t1

0xd2e9,	// (0x000329db) slider_set_pane_cp3

0xd2f2,	// (0x000329e4) volume_small_pane_cp

0xd2fb,	// (0x000329ed) list_form_gen_pane

0xd304,	// (0x000329f6) scroll_pane_cp8

0x9bff,	// (0x0002f2f1) form_field_data_pane_ParamLimits

0x9bff,	// (0x0002f2f1) form_field_data_pane

0x9c1a,	// (0x0002f30c) form_field_data_wide_pane_ParamLimits

0x9c1a,	// (0x0002f30c) form_field_data_wide_pane

0xeb29,	// (0x0003421b) form_field_popup_pane_ParamLimits

0xeb29,	// (0x0003421b) form_field_popup_pane

0x9c3c,	// (0x0002f32e) form_field_popup_wide_pane_ParamLimits

0x9c3c,	// (0x0002f32e) form_field_popup_wide_pane

0xeb4b,	// (0x0003423d) form_field_slider_pane_ParamLimits

0xeb4b,	// (0x0003423d) form_field_slider_pane

0xeb5e,	// (0x00034250) form_field_slider_wide_pane_ParamLimits

0xeb5e,	// (0x00034250) form_field_slider_wide_pane

0xd315,	// (0x00032a07) data_form_pane

0x9c67,	// (0x0002f359) form_field_data_pane_t1

0xd321,	// (0x00032a13) input_focus_pane

0xeb71,	// (0x00034263) data_form_wide_pane

0xeb8e,	// (0x00034280) form_field_data_wide_pane_t1

0xd09c,	// (0x0003278e) input_focus_pane_cp6

0x9c81,	// (0x0002f373) form_field_popup_pane_t1

0xd321,	// (0x00032a13) input_focus_pane_cp7

0xd34f,	// (0x00032a41) list_form_pane

0xebb8,	// (0x000342aa) form_field_popup_wide_pane_t1

0xd321,	// (0x00032a13) input_focus_pane_cp8

0xd35b,	// (0x00032a4d) list_form_wide_pane

0x9ca3,	// (0x0002f395) form_field_slider_pane_t1_ParamLimits

0x9ca3,	// (0x0002f395) form_field_slider_pane_t1

0x9cbb,	// (0x0002f3ad) form_field_slider_pane_t2_ParamLimits

0x9cbb,	// (0x0002f3ad) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00034d74) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00034d74) form_field_slider_pane_t

0xa3ce,	// (0x0002fac0) input_focus_pane_cp9_ParamLimits

0xa3ce,	// (0x0002fac0) input_focus_pane_cp9

0x9cd0,	// (0x0002f3c2) slider_cont_pane_ParamLimits

0x9cd0,	// (0x0002f3c2) slider_cont_pane

0xd367,	// (0x00032a59) form_field_slider_wide_pane_t1_ParamLimits

0xd367,	// (0x00032a59) form_field_slider_wide_pane_t1

0xebcd,	// (0x000342bf) form_field_slider_wide_pane_t2_ParamLimits

0xebcd,	// (0x000342bf) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00034d79) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00034d79) form_field_slider_wide_pane_t

0xa3ce,	// (0x0002fac0) input_focus_pane_cp10_ParamLimits

0xa3ce,	// (0x0002fac0) input_focus_pane_cp10

0x9ce4,	// (0x0002f3d6) slider_cont_pane_cp1_ParamLimits

0x9ce4,	// (0x0002f3d6) slider_cont_pane_cp1

0x9cf8,	// (0x0002f3ea) slider_form_pane_cp

0xd379,	// (0x00032a6b) input_focus_pane_g1

0xd381,	// (0x00032a73) input_focus_pane_g2

0xd389,	// (0x00032a7b) input_focus_pane_g3

0xd391,	// (0x00032a83) input_focus_pane_g4

0xd399,	// (0x00032a8b) input_focus_pane_g5

0xd3a1,	// (0x00032a93) input_focus_pane_g6

0xd3a9,	// (0x00032a9b) input_focus_pane_g7

0xd3b1,	// (0x00032aa3) input_focus_pane_g8

0xd3b9,	// (0x00032aab) input_focus_pane_g9

0xa093,	// (0x0002f785) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00034d7e) input_focus_pane_g

0x35ce,	// (0x00028cc0) wait_border_pane_g3_copy1

0x9d00,	// (0x0002f3f2) data_form_pane_t1

0xa093,	// (0x0002f785) wait_anim_pane_g1_copy1

0x9e30,	// (0x0002f522) data_form_wide_pane_t1

0xebdf,	// (0x000342d1) list_form_graphic_pane_cp_ParamLimits

0xebdf,	// (0x000342d1) list_form_graphic_pane_cp

0x451a,	// (0x00029c0c) slider_form_pane_g1

0x4523,	// (0x00029c15) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0003507c) slider_form_pane_g

0xebdf,	// (0x000342d1) list_form_graphic_pane_ParamLimits

0xebdf,	// (0x000342d1) list_form_graphic_pane

0xebf1,	// (0x000342e3) list_form_graphic_pane_g1

0xebf9,	// (0x000342eb) list_form_graphic_pane_t1_ParamLimits

0xebf9,	// (0x000342eb) list_form_graphic_pane_t1

0xa410,	// (0x0002fb02) list_highlight_pane_cp5_ParamLimits

0xa410,	// (0x0002fb02) list_highlight_pane_cp5

0x9d1a,	// (0x0002f40c) find_pane_g1

0xd3c1,	// (0x00032ab3) input_find_pane

0x9d23,	// (0x0002f415) input_find_pane_g1_ParamLimits

0x9d23,	// (0x0002f415) input_find_pane_g1

0x9d2f,	// (0x0002f421) input_find_pane_t1_ParamLimits

0x9d2f,	// (0x0002f421) input_find_pane_t1

0x9d44,	// (0x0002f436) input_find_pane_t2_ParamLimits

0x9d44,	// (0x0002f436) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00034d93) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00034d93) input_find_pane_t

0xd3ca,	// (0x00032abc) input_focus_pane_cp5_ParamLimits

0xd3ca,	// (0x00032abc) input_focus_pane_cp5

0xd3d8,	// (0x00032aca) bg_popup_window_pane_cp2_ParamLimits

0xd3d8,	// (0x00032aca) bg_popup_window_pane_cp2

0xd3e5,	// (0x00032ad7) listscroll_menu_pane_ParamLimits

0xd3e5,	// (0x00032ad7) listscroll_menu_pane

0xa713,	// (0x0002fe05) popup_submenu_window_ParamLimits

0xa713,	// (0x0002fe05) popup_submenu_window

0xd3f1,	// (0x00032ae3) find_popup_pane_g1

0xd3f9,	// (0x00032aeb) input_popup_find_pane_cp

0xd3ca,	// (0x00032abc) input_focus_pane_cp4_ParamLimits

0xd3ca,	// (0x00032abc) input_focus_pane_cp4

0xd403,	// (0x00032af5) input_popup_find_pane_t1_ParamLimits

0xd403,	// (0x00032af5) input_popup_find_pane_t1

0xa183,	// (0x0002f875) bg_popup_sub_pane_cp

0xd431,	// (0x00032b23) listscroll_popup_sub_pane

0xd439,	// (0x00032b2b) list_submenu_pane_ParamLimits

0xd439,	// (0x00032b2b) list_submenu_pane

0xd44a,	// (0x00032b3c) scroll_pane_cp4

0xd452,	// (0x00032b44) list_single_popup_submenu_pane_ParamLimits

0xd452,	// (0x00032b44) list_single_popup_submenu_pane

0xd467,	// (0x00032b59) list_single_popup_submenu_pane_g1

0xd46f,	// (0x00032b61) list_single_popup_submenu_pane_t1_ParamLimits

0xd46f,	// (0x00032b61) list_single_popup_submenu_pane_t1

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp1_ParamLimits

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp1

0xa751,	// (0x0002fe43) tabs_2_active_pane_g1

0xa759,	// (0x0002fe4b) tabs_2_active_pane_t1

0xa3ce,	// (0x0002fac0) bg_passive_tab_pane_cp1_ParamLimits

0xa3ce,	// (0x0002fac0) bg_passive_tab_pane_cp1

0xa751,	// (0x0002fe43) tabs_2_passive_pane_g1

0xa759,	// (0x0002fe4b) tabs_2_passive_pane_t1

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp4

0xa76b,	// (0x0002fe5d) tabs_2_long_active_pane_t1

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp4

0x1a60,	// (0x00027152) list_single_midp_graphic_pane_g4_ParamLimits

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp5

0xa77e,	// (0x0002fe70) tabs_3_long_active_pane_t1

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp5

0x1a60,	// (0x00027152) list_single_midp_graphic_pane_g4

0xa410,	// (0x0002fb02) bg_popup_window_pane_cp13_ParamLimits

0xa410,	// (0x0002fb02) bg_popup_window_pane_cp13

0xd48d,	// (0x00032b7f) listscroll_popup_fast_pane_ParamLimits

0xd48d,	// (0x00032b7f) listscroll_popup_fast_pane

0xd49c,	// (0x00032b8e) grid_popup_fast_pane_ParamLimits

0xd49c,	// (0x00032b8e) grid_popup_fast_pane

0xd4ae,	// (0x00032ba0) scroll_pane_cp9_ParamLimits

0xd4ae,	// (0x00032ba0) scroll_pane_cp9

0x5e5f,	// (0x0002b551) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5e5f,	// (0x0002b551) list_single_graphic_hl_pane_t1_cp2

0xd4d2,	// (0x00032bc4) input_focus_pane_cp20_ParamLimits

0xd4d2,	// (0x00032bc4) input_focus_pane_cp20

0xd4e0,	// (0x00032bd2) query_popup_data_pane_t1_ParamLimits

0xd4e0,	// (0x00032bd2) query_popup_data_pane_t1

0xd4f3,	// (0x00032be5) query_popup_data_pane_t2_ParamLimits

0xd4f3,	// (0x00032be5) query_popup_data_pane_t2

0xd539,	// (0x00032c2b) query_popup_data_pane_t3_ParamLimits

0xd539,	// (0x00032c2b) query_popup_data_pane_t3

0xd57a,	// (0x00032c6c) query_popup_data_pane_t4_ParamLimits

0xd57a,	// (0x00032c6c) query_popup_data_pane_t4

0xd5b6,	// (0x00032ca8) query_popup_data_pane_t5_ParamLimits

0xd5b6,	// (0x00032ca8) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00034d98) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00034d98) query_popup_data_pane_t

0xd379,	// (0x00032a6b) bg_set_opt_pane_g1

0xd381,	// (0x00032a73) bg_set_opt_pane_g2

0xd389,	// (0x00032a7b) bg_set_opt_pane_g3

0xd391,	// (0x00032a83) bg_set_opt_pane_g4

0xd399,	// (0x00032a8b) bg_set_opt_pane_g5

0xd3a1,	// (0x00032a93) bg_set_opt_pane_g6

0xd3a9,	// (0x00032a9b) bg_set_opt_pane_g7

0xd3b1,	// (0x00032aa3) bg_set_opt_pane_g8

0xd3b9,	// (0x00032aab) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00034da3) bg_set_opt_pane_g

0x06e4,	// (0x00025dd6) control_top_pane_stacon_ParamLimits

0x06e4,	// (0x00025dd6) control_top_pane_stacon

0x0737,	// (0x00025e29) signal_pane_stacon_ParamLimits

0x0737,	// (0x00025e29) signal_pane_stacon

0x075c,	// (0x00025e4e) stacon_top_pane_g1_ParamLimits

0x075c,	// (0x00025e4e) stacon_top_pane_g1

0x077e,	// (0x00025e70) title_pane_stacon_ParamLimits

0x077e,	// (0x00025e70) title_pane_stacon

0x07a8,	// (0x00025e9a) uni_indicator_pane_stacon_ParamLimits

0x07a8,	// (0x00025e9a) uni_indicator_pane_stacon

0x07bd,	// (0x00025eaf) battery_pane_stacon_ParamLimits

0x07bd,	// (0x00025eaf) battery_pane_stacon

0x0801,	// (0x00025ef3) control_bottom_pane_stacon_ParamLimits

0x0801,	// (0x00025ef3) control_bottom_pane_stacon

0x0824,	// (0x00025f16) navi_pane_stacon_ParamLimits

0x0824,	// (0x00025f16) navi_pane_stacon

0x0847,	// (0x00025f39) stacon_bottom_pane_g1_ParamLimits

0x0847,	// (0x00025f39) stacon_bottom_pane_g1

0x0099,	// (0x0002578b) aid_levels_signal_lsc_ParamLimits

0x0099,	// (0x0002578b) aid_levels_signal_lsc

0x00b0,	// (0x000257a2) signal_pane_stacon_g1_ParamLimits

0x00b0,	// (0x000257a2) signal_pane_stacon_g1

0x00c4,	// (0x000257b6) signal_pane_stacon_g2_ParamLimits

0x00c4,	// (0x000257b6) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00034db6) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00034db6) signal_pane_stacon_g

0x00f9,	// (0x000257eb) title_pane_stacon_t1_ParamLimits

0x00f9,	// (0x000257eb) title_pane_stacon_t1

0xd5fa,	// (0x00032cec) uni_indicator_pane_stacon_g1

0xd604,	// (0x00032cf6) uni_indicator_pane_stacon_g2

0xd60e,	// (0x00032d00) uni_indicator_pane_stacon_g3

0xd618,	// (0x00032d0a) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00034dc2) uni_indicator_pane_stacon_g

0x011e,	// (0x00025810) control_top_pane_stacon_g1

0x0126,	// (0x00025818) control_top_pane_stacon_t1_ParamLimits

0x0126,	// (0x00025818) control_top_pane_stacon_t1

0x015d,	// (0x0002584f) aid_levels_battery_lsc_ParamLimits

0x015d,	// (0x0002584f) aid_levels_battery_lsc

0x0175,	// (0x00025867) battery_pane_stacon_g1_ParamLimits

0x0175,	// (0x00025867) battery_pane_stacon_g1

0x0188,	// (0x0002587a) battery_pane_stacon_g2_ParamLimits

0x0188,	// (0x0002587a) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00034dcb) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00034dcb) battery_pane_stacon_g

0x01c6,	// (0x000258b8) navi_icon_pane_stacon

0x01da,	// (0x000258cc) navi_navi_pane_stacon

0x01c6,	// (0x000258b8) navi_text_pane_stacon

0x011e,	// (0x00025810) control_bottom_pane_stacon_g1

0x01f0,	// (0x000258e2) control_bottom_pane_stacon_t1_ParamLimits

0x01f0,	// (0x000258e2) control_bottom_pane_stacon_t1

0xa790,	// (0x0002fe82) grid_app_pane_ParamLimits

0xa790,	// (0x0002fe82) grid_app_pane

0xa7c8,	// (0x0002feba) scroll_pane_cp15_ParamLimits

0xa7c8,	// (0x0002feba) scroll_pane_cp15

0xa7dd,	// (0x0002fecf) cell_app_pane_ParamLimits

0xa7dd,	// (0x0002fecf) cell_app_pane

0xa82a,	// (0x0002ff1c) cell_app_pane_g1_ParamLimits

0xa82a,	// (0x0002ff1c) cell_app_pane_g1

0xd63c,	// (0x00032d2e) cell_app_pane_g2_ParamLimits

0xd63c,	// (0x00032d2e) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00034dd0) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00034dd0) cell_app_pane_g

0xa84e,	// (0x0002ff40) cell_app_pane_t1_ParamLimits

0xa84e,	// (0x0002ff40) cell_app_pane_t1

0xd648,	// (0x00032d3a) grid_highlight_pane_ParamLimits

0xd648,	// (0x00032d3a) grid_highlight_pane

0xd379,	// (0x00032a6b) cell_highlight_pane_g1

0xd381,	// (0x00032a73) cell_highlight_pane_g2

0xd389,	// (0x00032a7b) cell_highlight_pane_g3

0xd391,	// (0x00032a83) cell_highlight_pane_g4

0xd399,	// (0x00032a8b) cell_highlight_pane_g5

0xd3a1,	// (0x00032a93) cell_highlight_pane_g6

0xd3a9,	// (0x00032a9b) cell_highlight_pane_g7

0xd3b1,	// (0x00032aa3) cell_highlight_pane_g8

0xd3b9,	// (0x00032aab) cell_highlight_pane_g9

0xa093,	// (0x0002f785) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00034d7e) cell_highlight_pane_g

0xd659,	// (0x00032d4b) bg_scroll_pane

0x02d6,	// (0x000259c8) scroll_handle_pane

0xd6a0,	// (0x00032d92) scroll_bg_pane_g1

0xd6b5,	// (0x00032da7) scroll_bg_pane_g2

0xd6cd,	// (0x00032dbf) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00034dd5) scroll_bg_pane_g

0xd6e2,	// (0x00032dd4) scroll_handle_focus_pane_ParamLimits

0xd6e2,	// (0x00032dd4) scroll_handle_focus_pane

0xd6a0,	// (0x00032d92) scroll_handle_pane_g1

0xd6ef,	// (0x00032de1) scroll_handle_pane_g2

0xd6cd,	// (0x00032dbf) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00034ddc) scroll_handle_pane_g

0xd3ca,	// (0x00032abc) bg_popup_sub_pane_cp21_ParamLimits

0xd3ca,	// (0x00032abc) bg_popup_sub_pane_cp21

0xd703,	// (0x00032df5) popup_fep_japan_predictive_window_t1_ParamLimits

0xd703,	// (0x00032df5) popup_fep_japan_predictive_window_t1

0xd71a,	// (0x00032e0c) popup_fep_japan_predictive_window_t2_ParamLimits

0xd71a,	// (0x00032e0c) popup_fep_japan_predictive_window_t2

0xd74d,	// (0x00032e3f) popup_fep_japan_predictive_window_t3_ParamLimits

0xd74d,	// (0x00032e3f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00034de3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00034de3) popup_fep_japan_predictive_window_t

0xa183,	// (0x0002f875) bg_popup_sub_pane_cp23

0xd784,	// (0x00032e76) listscroll_japin_cand_pane

0xd78c,	// (0x00032e7e) popup_fep_japan_candidate_window_t1

0xd79a,	// (0x00032e8c) candidate_pane_ParamLimits

0xd79a,	// (0x00032e8c) candidate_pane

0xd7ac,	// (0x00032e9e) scroll_pane_cp30

0xd7b6,	// (0x00032ea8) list_single_popup_jap_candidate_pane_ParamLimits

0xd7b6,	// (0x00032ea8) list_single_popup_jap_candidate_pane

0xa183,	// (0x0002f875) list_highlight_pane_cp30

0xd7ca,	// (0x00032ebc) list_single_popup_jap_candidate_pane_t1

0xa86e,	// (0x0002ff60) level_1_signal

0xa880,	// (0x0002ff72) level_2_signal

0xa893,	// (0x0002ff85) level_3_signal

0xa8a6,	// (0x0002ff98) level_4_signal

0xa8b9,	// (0x0002ffab) level_5_signal

0xa8cc,	// (0x0002ffbe) level_6_signal

0xa8df,	// (0x0002ffd1) level_7_signal

0xa86e,	// (0x0002ff60) level_1_battery

0xa880,	// (0x0002ff72) level_2_battery

0xa893,	// (0x0002ff85) level_3_battery

0xa8a6,	// (0x0002ff98) level_4_battery

0xa8b9,	// (0x0002ffab) level_5_battery

0xa8cc,	// (0x0002ffbe) level_6_battery

0xa8df,	// (0x0002ffd1) level_7_battery

0x0391,	// (0x00025a83) list_menu_pane_ParamLimits

0x0391,	// (0x00025a83) list_menu_pane

0x03a7,	// (0x00025a99) scroll_pane_cp25_ParamLimits

0x03a7,	// (0x00025a99) scroll_pane_cp25

0x03c0,	// (0x00025ab2) list_double2_graphic_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double2_graphic_pane_cp2

0x03c0,	// (0x00025ab2) list_double2_large_graphic_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double2_large_graphic_pane_cp2

0x03c0,	// (0x00025ab2) list_double2_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double2_pane_cp2

0x03c0,	// (0x00025ab2) list_double_graphic_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double_graphic_pane_cp2

0x03c0,	// (0x00025ab2) list_double_large_graphic_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double_large_graphic_pane_cp2

0x03c0,	// (0x00025ab2) list_double_number_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double_number_pane_cp2

0x03c0,	// (0x00025ab2) list_double_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double_pane_cp2

0xa8f2,	// (0x0002ffe4) list_single_2graphic_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_2graphic_pane_cp2

0xa8f2,	// (0x0002ffe4) list_single_graphic_heading_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_graphic_heading_pane_cp2

0xa8f2,	// (0x0002ffe4) list_single_graphic_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_graphic_pane_cp2

0xa8f2,	// (0x0002ffe4) list_single_heading_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_heading_pane_cp2

0x0403,	// (0x00025af5) list_single_large_graphic_pane_cp2_ParamLimits

0x0403,	// (0x00025af5) list_single_large_graphic_pane_cp2

0xa8f2,	// (0x0002ffe4) list_single_number_heading_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_number_heading_pane_cp2

0xa8f2,	// (0x0002ffe4) list_single_number_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_number_pane_cp2

0xa8f2,	// (0x0002ffe4) list_single_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_pane_cp2

0x04cc,	// (0x00025bbe) bg_popup_sub_pane_cp22

0x04f1,	// (0x00025be3) popup_side_volume_key_window_g1

0x051b,	// (0x00025c0d) popup_side_volume_key_window_t1

0x0539,	// (0x00025c2b) volume_small_pane_cp1

0xa3ce,	// (0x0002fac0) bg_popup_sub_pane_cp24_ParamLimits

0xa3ce,	// (0x0002fac0) bg_popup_sub_pane_cp24

0x0541,	// (0x00025c33) fep_china_uni_candidate_pane_ParamLimits

0x0541,	// (0x00025c33) fep_china_uni_candidate_pane

0x0555,	// (0x00025c47) fep_china_uni_entry_pane

0x0565,	// (0x00025c57) popup_fep_china_uni_window_g1

0x0581,	// (0x00025c73) fep_china_uni_entry_pane_g1

0x058b,	// (0x00025c7d) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00034e14) fep_china_uni_entry_pane_g

0x0595,	// (0x00025c87) fep_entry_item_pane

0x059f,	// (0x00025c91) fep_candidate_item_pane

0x05a7,	// (0x00025c99) fep_china_uni_candidate_pane_g1

0x05b1,	// (0x00025ca3) fep_china_uni_candidate_pane_g2

0x05b9,	// (0x00025cab) fep_china_uni_candidate_pane_g3

0x05c1,	// (0x00025cb3) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00034e19) fep_china_uni_candidate_pane_g

0xa093,	// (0x0002f785) fep_entry_item_pane_g1

0x05cb,	// (0x00025cbd) fep_entry_item_pane_t1_ParamLimits

0x05cb,	// (0x00025cbd) fep_entry_item_pane_t1

0x05e1,	// (0x00025cd3) fep_candidate_item_pane_t1_ParamLimits

0x05e1,	// (0x00025cd3) fep_candidate_item_pane_t1

0x05f6,	// (0x00025ce8) fep_candidate_item_pane_t2_ParamLimits

0x05f6,	// (0x00025ce8) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00034e22) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00034e22) fep_candidate_item_pane_t

0xa410,	// (0x0002fb02) list_highlight_pane_cp31_ParamLimits

0xa410,	// (0x0002fb02) list_highlight_pane_cp31

0x0608,	// (0x00025cfa) level_1_signal_lsc

0x0611,	// (0x00025d03) level_2_signal_lsc

0x061a,	// (0x00025d0c) level_3_signal_lsc

0x0623,	// (0x00025d15) level_4_signal_lsc

0x062c,	// (0x00025d1e) level_5_signal_lsc

0x0635,	// (0x00025d27) level_6_signal_lsc

0x063e,	// (0x00025d30) level_7_signal_lsc

0x063e,	// (0x00025d30) level_1_battery_lsc

0x0647,	// (0x00025d39) level_2_battery_lsc

0x0650,	// (0x00025d42) level_3_battery_lsc

0x0659,	// (0x00025d4b) level_4_battery_lsc

0x0662,	// (0x00025d54) level_5_battery_lsc

0x066b,	// (0x00025d5d) level_6_battery_lsc

0x0608,	// (0x00025cfa) level_7_battery_lsc

0x0674,	// (0x00025d66) scroll_handle_focus_pane_g1

0x067d,	// (0x00025d6f) scroll_handle_focus_pane_g2

0x0686,	// (0x00025d78) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00034e27) scroll_handle_focus_pane_g

0x9d59,	// (0x0002f44b) list_single_2graphic_pane_g1_ParamLimits

0x9d59,	// (0x0002f44b) list_single_2graphic_pane_g1

0x984e,	// (0x0002ef40) list_single_2graphic_pane_g2_ParamLimits

0x984e,	// (0x0002ef40) list_single_2graphic_pane_g2

0xea50,	// (0x00034142) list_single_2graphic_pane_g3_ParamLimits

0xea50,	// (0x00034142) list_single_2graphic_pane_g3

0x9d65,	// (0x0002f457) list_single_2graphic_pane_g4_ParamLimits

0x9d65,	// (0x0002f457) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00034e2e) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00034e2e) list_single_2graphic_pane_g

0x9d71,	// (0x0002f463) list_single_2graphic_pane_t1_ParamLimits

0x9d71,	// (0x0002f463) list_single_2graphic_pane_t1

0x9d9f,	// (0x0002f491) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9d9f,	// (0x0002f491) list_double2_graphic_large_graphic_pane_g1

0x98ad,	// (0x0002ef9f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x98ad,	// (0x0002ef9f) list_double2_graphic_large_graphic_pane_g2

0x98be,	// (0x0002efb0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x98be,	// (0x0002efb0) list_double2_graphic_large_graphic_pane_g3

0x9db1,	// (0x0002f4a3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9db1,	// (0x0002f4a3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00034e37) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00034e37) list_double2_graphic_large_graphic_pane_g

0x9dbd,	// (0x0002f4af) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9dbd,	// (0x0002f4af) list_double2_graphic_large_graphic_pane_t1

0x9dd3,	// (0x0002f4c5) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9dd3,	// (0x0002f4c5) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00034e40) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00034e40) list_double2_graphic_large_graphic_pane_t

0x0907,	// (0x00025ff9) popup_fast_swap_window_ParamLimits

0x0907,	// (0x00025ff9) popup_fast_swap_window

0x0925,	// (0x00026017) popup_side_volume_key_window

0x0943,	// (0x00026035) stacon_top_pane

0x094d,	// (0x0002603f) status_pane_ParamLimits

0x094d,	// (0x0002603f) status_pane

0xa9c9,	// (0x000300bb) status_small_pane

0xa183,	// (0x0002f875) control_pane

0xa183,	// (0x0002f875) stacon_bottom_pane

0xd304,	// (0x000329f6) scroll_pane_cp121

0xd2fb,	// (0x000329ed) set_content_pane

0xa981,	// (0x00030073) bg_active_tab_pane_g1_cp1

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp1

0xa98a,	// (0x0003007c) bg_active_tab_pane_g3_cp1

0xa981,	// (0x00030073) bg_passive_tab_pane_g1_cp1

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp1

0xa98a,	// (0x0003007c) bg_passive_tab_pane_g3_cp1

0xa993,	// (0x00030085) bg_active_tab_pane_g1_cp2

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp2

0xa99c,	// (0x0003008e) bg_active_tab_pane_g3_cp2

0xa993,	// (0x00030085) bg_passive_tab_pane_g1_cp2

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp2

0xa99c,	// (0x0003008e) bg_passive_tab_pane_g3_cp2

0xa9a5,	// (0x00030097) bg_active_tab_pane_g1_cp3

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp3

0xa9ae,	// (0x000300a0) bg_active_tab_pane_g3_cp3

0xa9a5,	// (0x00030097) bg_passive_tab_pane_g1_cp3

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp3

0xa9ae,	// (0x000300a0) bg_passive_tab_pane_g3_cp3

0xa9b7,	// (0x000300a9) bg_active_tab_pane_g1_cp4

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp4

0xa9c0,	// (0x000300b2) bg_active_tab_pane_g3_cp4

0xa9b7,	// (0x000300a9) bg_passive_tab_pane_g1_cp4

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp4

0xa9c0,	// (0x000300b2) bg_passive_tab_pane_g3_cp4

0x0863,	// (0x00025f55) bg_active_tab_pane_g1_cp5

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp5

0x086c,	// (0x00025f5e) bg_active_tab_pane_g3_cp5

0x0863,	// (0x00025f55) bg_passive_tab_pane_g1_cp5

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp5

0x086c,	// (0x00025f5e) bg_passive_tab_pane_g3_cp5

0x0875,	// (0x00025f67) list_set_graphic_pane_ParamLimits

0x0875,	// (0x00025f67) list_set_graphic_pane

0xa183,	// (0x0002f875) bg_set_opt_pane_cp4

0x0888,	// (0x00025f7a) list_set_graphic_pane_g1_ParamLimits

0x0888,	// (0x00025f7a) list_set_graphic_pane_g1

0x0894,	// (0x00025f86) list_set_graphic_pane_g2_ParamLimits

0x0894,	// (0x00025f86) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00034e45) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00034e45) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x000351ca) volume_small_pane_cp_g

0x08b8,	// (0x00025faa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x08b8,	// (0x00025faa) list_double2_large_graphic_pane_g1_cp2

0x08c6,	// (0x00025fb8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x08c6,	// (0x00025fb8) list_double2_large_graphic_pane_g2_cp2

0x08d7,	// (0x00025fc9) list_double2_large_graphic_pane_g3_cp2

0x08df,	// (0x00025fd1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x08df,	// (0x00025fd1) list_double2_large_graphic_pane_t1_cp2

0x08f5,	// (0x00025fe7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x08f5,	// (0x00025fe7) list_double2_large_graphic_pane_t2_cp2

0x40b2,	// (0x000297a4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x40b2,	// (0x000297a4) list_double_large_graphic_pane_g1_cp2

0x40c5,	// (0x000297b7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x40c5,	// (0x000297b7) list_double_large_graphic_pane_g2_cp2

0x0a76,	// (0x00026168) list_double_large_graphic_pane_g3_cp2

0x40d6,	// (0x000297c8) list_double_large_graphic_pane_g4_cp

0x40de,	// (0x000297d0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x40de,	// (0x000297d0) list_double_large_graphic_pane_t1_cp2

0x40f5,	// (0x000297e7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x40f5,	// (0x000297e7) list_double_large_graphic_pane_t2_cp2

0x0966,	// (0x00026058) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0966,	// (0x00026058) list_double2_graphic_pane_g1_cp2

0x0974,	// (0x00026066) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0974,	// (0x00026066) list_double2_graphic_pane_g2_cp2

0x0985,	// (0x00026077) list_double2_graphic_pane_g3_cp2

0x098f,	// (0x00026081) list_double2_graphic_pane_t1_cp2_ParamLimits

0x098f,	// (0x00026081) list_double2_graphic_pane_t1_cp2

0x09a5,	// (0x00026097) list_double2_graphic_pane_t2_cp2_ParamLimits

0x09a5,	// (0x00026097) list_double2_graphic_pane_t2_cp2

0x09b7,	// (0x000260a9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x09b7,	// (0x000260a9) list_single_number_heading_pane_g1_cp2

0x09c3,	// (0x000260b5) list_single_number_heading_pane_g2_cp2

0x09cb,	// (0x000260bd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x09cb,	// (0x000260bd) list_single_number_heading_pane_t1_cp2

0x09e1,	// (0x000260d3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x09e1,	// (0x000260d3) list_single_number_heading_pane_t2_cp2

0x09f5,	// (0x000260e7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x09f5,	// (0x000260e7) list_single_number_heading_pane_t3_cp2

0x09b7,	// (0x000260a9) list_single_heading_pane_g1_cp2_ParamLimits

0x09b7,	// (0x000260a9) list_single_heading_pane_g1_cp2

0x09c3,	// (0x000260b5) list_single_heading_pane_g2_cp2

0x09cb,	// (0x000260bd) list_single_heading_pane_t1_cp2_ParamLimits

0x09cb,	// (0x000260bd) list_single_heading_pane_t1_cp2

0x3eac,	// (0x0002959e) list_single_heading_pane_t2_cp2_ParamLimits

0x3eac,	// (0x0002959e) list_single_heading_pane_t2_cp2

0x3df4,	// (0x000294e6) list_double_graphic_pane_g1_cp2_ParamLimits

0x3df4,	// (0x000294e6) list_double_graphic_pane_g1_cp2

0x3e00,	// (0x000294f2) list_double_graphic_pane_g2_cp2_ParamLimits

0x3e00,	// (0x000294f2) list_double_graphic_pane_g2_cp2

0x3e0f,	// (0x00029501) list_double_graphic_pane_g3_cp2

0x3e17,	// (0x00029509) list_double_graphic_pane_t1_cp2_ParamLimits

0x3e17,	// (0x00029509) list_double_graphic_pane_t1_cp2

0x3e2d,	// (0x0002951f) list_double_graphic_pane_t2_cp2_ParamLimits

0x3e2d,	// (0x0002951f) list_double_graphic_pane_t2_cp2

0x0a6a,	// (0x0002615c) list_double_number_pane_g1_cp2_ParamLimits

0x0a6a,	// (0x0002615c) list_double_number_pane_g1_cp2

0x0a76,	// (0x00026168) list_double_number_pane_g2_cp2

0x3db8,	// (0x000294aa) list_double_number_pane_t1_cp2_ParamLimits

0x3db8,	// (0x000294aa) list_double_number_pane_t1_cp2

0x3dcc,	// (0x000294be) list_double_number_pane_t2_cp2_ParamLimits

0x3dcc,	// (0x000294be) list_double_number_pane_t2_cp2

0x3de2,	// (0x000294d4) list_double_number_pane_t3_cp2_ParamLimits

0x3de2,	// (0x000294d4) list_double_number_pane_t3_cp2

0x3ca1,	// (0x00029393) list_single_graphic_pane_g1_cp2_ParamLimits

0x3ca1,	// (0x00029393) list_single_graphic_pane_g1_cp2

0xd7d9,	// (0x00032ecb) list_single_graphic_pane_g2_cp2_ParamLimits

0xd7d9,	// (0x00032ecb) list_single_graphic_pane_g2_cp2

0x0ad0,	// (0x000261c2) list_single_graphic_pane_g3_cp2

0x3c77,	// (0x00029369) list_single_graphic_pane_t1_cp2_ParamLimits

0x3c77,	// (0x00029369) list_single_graphic_pane_t1_cp2

0xd7d9,	// (0x00032ecb) list_single_number_pane_g1_cp2_ParamLimits

0xd7d9,	// (0x00032ecb) list_single_number_pane_g1_cp2

0x0ad0,	// (0x000261c2) list_single_number_pane_g2_cp2

0x3c77,	// (0x00029369) list_single_number_pane_t1_cp2_ParamLimits

0x3c77,	// (0x00029369) list_single_number_pane_t1_cp2

0x3c8d,	// (0x0002937f) list_single_number_pane_t2_cp2_ParamLimits

0x3c8d,	// (0x0002937f) list_single_number_pane_t2_cp2

0x08c6,	// (0x00025fb8) list_double2_pane_g1_cp2_ParamLimits

0x08c6,	// (0x00025fb8) list_double2_pane_g1_cp2

0x08d7,	// (0x00025fc9) list_double2_pane_g2_cp2

0x0a42,	// (0x00026134) list_double2_pane_t1_cp2_ParamLimits

0x0a42,	// (0x00026134) list_double2_pane_t1_cp2

0x0a58,	// (0x0002614a) list_double2_pane_t2_cp2_ParamLimits

0x0a58,	// (0x0002614a) list_double2_pane_t2_cp2

0x0a6a,	// (0x0002615c) list_double_pane_g1_cp2_ParamLimits

0x0a6a,	// (0x0002615c) list_double_pane_g1_cp2

0x0a76,	// (0x00026168) list_double_pane_g2_cp2

0x0a7e,	// (0x00026170) list_double_pane_t1_cp2_ParamLimits

0x0a7e,	// (0x00026170) list_double_pane_t1_cp2

0x0a94,	// (0x00026186) list_double_pane_t2_cp2_ParamLimits

0x0a94,	// (0x00026186) list_double_pane_t2_cp2

0x0ac0,	// (0x000261b2) list_single_pane_cp2_g3

0xd7d9,	// (0x00032ecb) list_single_pane_g1_cp2_ParamLimits

0xd7d9,	// (0x00032ecb) list_single_pane_g1_cp2

0x0ad0,	// (0x000261c2) list_single_pane_g2_cp2

0x0ad8,	// (0x000261ca) list_single_pane_t1_cp2_ParamLimits

0x0ad8,	// (0x000261ca) list_single_pane_t1_cp2

0x0af0,	// (0x000261e2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0af0,	// (0x000261e2) list_single_large_graphic_pane_g1_cp2

0x0afe,	// (0x000261f0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0afe,	// (0x000261f0) list_single_large_graphic_pane_g2_cp2

0x0b0a,	// (0x000261fc) list_single_large_graphic_pane_g3_cp2

0x0b12,	// (0x00026204) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0b12,	// (0x00026204) list_single_large_graphic_pane_g4_cp1

0x0b2c,	// (0x0002621e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0b2c,	// (0x0002621e) list_single_large_graphic_pane_t1_cp2

0x3c41,	// (0x00029333) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3c41,	// (0x00029333) list_single_graphic_heading_pane_g1_cp2

0x3c0e,	// (0x00029300) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3c0e,	// (0x00029300) list_single_graphic_heading_pane_g4_cp2

0x0ad0,	// (0x000261c2) list_single_graphic_heading_pane_g5_cp2

0x3c4d,	// (0x0002933f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3c4d,	// (0x0002933f) list_single_graphic_heading_pane_t1_cp2

0x3c63,	// (0x00029355) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3c63,	// (0x00029355) list_single_graphic_heading_pane_t2_cp2

0x3c02,	// (0x000292f4) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3c02,	// (0x000292f4) list_single_2graphic_pane_g1_cp2

0x3c0e,	// (0x00029300) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3c0e,	// (0x00029300) list_single_2graphic_pane_g2_cp2

0x0ad0,	// (0x000261c2) list_single_2graphic_pane_g3_cp2

0x3c1f,	// (0x00029311) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3c1f,	// (0x00029311) list_single_2graphic_pane_g4_cp2

0x3c2b,	// (0x0002931d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3c2b,	// (0x0002931d) list_single_2graphic_pane_t1_cp2

0xa093,	// (0x0002f785) list_highlight_pane_g10_cp1

0x37da,	// (0x00028ecc) list_highlight_pane_g1_cp1

0x37e2,	// (0x00028ed4) list_highlight_pane_g2_cp1

0x37ea,	// (0x00028edc) list_highlight_pane_g3_cp1

0x37f2,	// (0x00028ee4) list_highlight_pane_g4_cp1

0x37fa,	// (0x00028eec) list_highlight_pane_g5_cp1

0x3802,	// (0x00028ef4) list_highlight_pane_g6_cp1

0x380a,	// (0x00028efc) list_highlight_pane_g7_cp1

0x3812,	// (0x00028f04) list_highlight_pane_g8_cp1

0x381a,	// (0x00028f0c) list_highlight_pane_g9_cp1

0xb910,	// (0x00031002) form_field_slider_pane_t3

0xb91e,	// (0x00031010) form_field_slider_pane_t4

0x3716,	// (0x00028e08) slider_form_pane_ParamLimits

0x3716,	// (0x00028e08) slider_form_pane

0xa183,	// (0x0002f875) control_abbreviations

0xa183,	// (0x0002f875) control_conventions

0xa183,	// (0x0002f875) control_definitions

0xa183,	// (0x0002f875) format_table_attribute

0x3f02,	// (0x000295f4) bg_popup_preview_window_pane_g9

0xa183,	// (0x0002f875) format_table_data2

0xa183,	// (0x0002f875) format_table_data3

0xa183,	// (0x0002f875) format_table_data_example

0x0008,

0xa183,	// (0x0002f875) intro_purpose

0xf8ea,	// (0x00034fdc) bg_popup_preview_window_pane_g

0xa183,	// (0x0002f875) texts_category

0xa183,	// (0x0002f875) texts_graphics

0x0b42,	// (0x00026234) text_digital

0x0b51,	// (0x00026243) text_primary

0x0b60,	// (0x00026252) text_primary_small

0x0b6f,	// (0x00026261) text_secondary

0x0b7e,	// (0x00026270) text_title

0x4684,	// (0x00029d76) bg_passive_tab_pane_g1_cp3_srt

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp3_srt

0x468d,	// (0x00029d7f) bg_passive_tab_pane_g3_cp3_srt

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp3_srt_ParamLimits

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp3_srt

0x4696,	// (0x00029d88) tabs_4_active_pane_srt_g1

0xbd9d,	// (0x0003148f) tabs_4_active_pane_srt_t1_ParamLimits

0xbd9d,	// (0x0003148f) tabs_4_active_pane_srt_t1

0x4684,	// (0x00029d76) bg_active_tab_pane_g1_cp3_copy1

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp3_copy1

0x468d,	// (0x00029d7f) bg_active_tab_pane_g3_cp3_copy1

0xa410,	// (0x0002fb02) tabs_2_long_active_pane_srt_ParamLimits

0xa410,	// (0x0002fb02) tabs_2_long_active_pane_srt

0xa410,	// (0x0002fb02) tabs_2_long_passive_pane_srt_ParamLimits

0xa410,	// (0x0002fb02) tabs_2_long_passive_pane_srt

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp4_srt

0x4331,	// (0x00029a23) bg_passive_tab_pane_g1_cp4_srt

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp4_srt

0x433a,	// (0x00029a2c) bg_passive_tab_pane_g3_cp4_srt

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp4_srt_ParamLimits

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp4_srt

0xbc57,	// (0x00031349) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbc57,	// (0x00031349) tabs_2_long_active_pane_srt_t1

0x4331,	// (0x00029a23) bg_active_tab_pane_g1_cp4_srt

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp4_srt

0x433a,	// (0x00029a2c) bg_active_tab_pane_g3_cp4_srt

0xa3ce,	// (0x0002fac0) tabs_3_long_active_pane_srt_ParamLimits

0xa3ce,	// (0x0002fac0) tabs_3_long_active_pane_srt

0xa3ce,	// (0x0002fac0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa3ce,	// (0x0002fac0) tabs_3_long_passive_pane_cp_srt

0xa3ce,	// (0x0002fac0) tabs_3_long_passive_pane_srt_ParamLimits

0xa3ce,	// (0x0002fac0) tabs_3_long_passive_pane_srt

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp5_srt

0x0863,	// (0x00025f55) bg_passive_tab_pane_g1_cp5_srt

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp5_srt

0x086c,	// (0x00025f5e) bg_passive_tab_pane_g3_cp5_srt

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp5_srt_ParamLimits

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp5_srt

0xbc41,	// (0x00031333) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbc41,	// (0x00031333) tabs_3_long_active_pane_srt_t1

0x0863,	// (0x00025f55) bg_active_tab_pane_g1_cp5_srt

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp5_srt

0x086c,	// (0x00025f5e) bg_active_tab_pane_g3_cp5_srt

0x4311,	// (0x00029a03) navi_text_pane_srt_t1

0x4309,	// (0x000299fb) navi_icon_pane_srt_g1

0x0dff,	// (0x000264f1) midp_editing_number_pane_srt

0x0b8d,	// (0x0002627f) midp_ticker_pane_srt

0x0e07,	// (0x000264f9) midp_ticker_pane_srt_g1

0x0e0f,	// (0x00026501) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00034e64) midp_ticker_pane_srt_g

0x0e17,	// (0x00026509) midp_ticker_pane_srt_t1

0x42fa,	// (0x000299ec) midp_editing_number_pane_t1_copy1

0xa9d4,	// (0x000300c6) listscroll_midp_pane

0xa9d4,	// (0x000300c6) midp_form_pane

0x0c04,	// (0x000262f6) midp_info_popup_window_ParamLimits

0x0c04,	// (0x000262f6) midp_info_popup_window

0xd3ca,	// (0x00032abc) bg_popup_sub_pane_cp50_ParamLimits

0xd3ca,	// (0x00032abc) bg_popup_sub_pane_cp50

0x3404,	// (0x00028af6) listscroll_midp_info_pane_ParamLimits

0x3404,	// (0x00028af6) listscroll_midp_info_pane

0x33e4,	// (0x00028ad6) listscroll_form_midp_pane_ParamLimits

0x33e4,	// (0x00028ad6) listscroll_form_midp_pane

0x33f0,	// (0x00028ae2) scroll_bar_cp050

0x33e4,	// (0x00028ad6) list_midp_pane

0x50fc,	// (0x0002a7ee) signal_pane_g2_cp

0x32fe,	// (0x000289f0) listscroll_midp_info_pane_t1_ParamLimits

0x32fe,	// (0x000289f0) listscroll_midp_info_pane_t1

0x3316,	// (0x00028a08) listscroll_midp_info_pane_t2_ParamLimits

0x3316,	// (0x00028a08) listscroll_midp_info_pane_t2

0x3354,	// (0x00028a46) listscroll_midp_info_pane_t3_ParamLimits

0x3354,	// (0x00028a46) listscroll_midp_info_pane_t3

0x338e,	// (0x00028a80) listscroll_midp_info_pane_t4_ParamLimits

0x338e,	// (0x00028a80) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00034f17) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00034f17) listscroll_midp_info_pane_t

0xd44a,	// (0x00032b3c) scroll_pane_cp21

0x3298,	// (0x0002898a) form_midp_field_choice_group_pane

0x32a1,	// (0x00028993) form_midp_field_text_pane

0x32e4,	// (0x000289d6) form_midp_field_time_pane

0x32ec,	// (0x000289de) form_midp_gauge_slider_pane

0x32f5,	// (0x000289e7) form_midp_gauge_wait_pane

0xa183,	// (0x0002f875) form_midp_image_pane

0x9e01,	// (0x0002f4f3) list_single_midp_pane_ParamLimits

0x9e01,	// (0x0002f4f3) list_single_midp_pane

0xb8e8,	// (0x00030fda) form_midp_field_text_pane_t1

0x304e,	// (0x00028740) input_focus_pane_cp050

0x3287,	// (0x00028979) list_midp_form_text_pane

0x322b,	// (0x0002891d) form_midp_field_choice_group_pane_t1

0x3239,	// (0x0002892b) input_focus_pane_cp051

0x324d,	// (0x0002893f) list_midp_choice_pane

0xa183,	// (0x0002f875) status_idle_pane

0x320f,	// (0x00028901) form_midp_field_time_pane_t1

0xa093,	// (0x0002f785) wait_anim_pane_g2_copy1

0x321d,	// (0x0002890f) form_midp_field_time_pane_t2

0x0001,

0x0cb4,	// (0x000263a6) aid_navinavi_width_2_pane

0xf820,	// (0x00034f12) form_midp_field_time_pane_t

0xa183,	// (0x0002f875) input_focus_pane_cp052

0xa183,	// (0x0002f875) bg_input_focus_pane_cp040

0x31cf,	// (0x000288c1) form_midp_gauge_slider_pane_t1

0x31dd,	// (0x000288cf) form_midp_gauge_slider_pane_t2

0xb8cc,	// (0x00030fbe) form_midp_gauge_slider_pane_t3

0xb8da,	// (0x00030fcc) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00034f09) form_midp_gauge_slider_pane_t

0x3207,	// (0x000288f9) form_midp_slider_pane

0xa410,	// (0x0002fb02) bg_input_focus_pane_cp041_ParamLimits

0xa410,	// (0x0002fb02) bg_input_focus_pane_cp041

0x319c,	// (0x0002888e) form_midp_gauge_wait_pane_t1_ParamLimits

0x319c,	// (0x0002888e) form_midp_gauge_wait_pane_t1

0x31ae,	// (0x000288a0) form_midp_gauge_wait_pane_t2_ParamLimits

0x31ae,	// (0x000288a0) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00034f04) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00034f04) form_midp_gauge_wait_pane_t

0x31c0,	// (0x000288b2) form_midp_wait_pane_ParamLimits

0x31c0,	// (0x000288b2) form_midp_wait_pane

0x3164,	// (0x00028856) form_midp_image_pane_g1

0x316d,	// (0x0002885f) form_midp_image_pane_t1

0x317c,	// (0x0002886e) form_midp_image_pane_t2

0x318b,	// (0x0002887d) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00034efd) form_midp_image_pane_t

0x315b,	// (0x0002884d) list_single_midp_pane_g1

0xed50,	// (0x00034442) list_single_midp_pane_t1

0xb8b5,	// (0x00030fa7) list_midp_form_item_pane_ParamLimits

0xb8b5,	// (0x00030fa7) list_midp_form_item_pane

0x0c5c,	// (0x0002634e) list_midp_form_item_pane_t1

0x0c6b,	// (0x0002635d) midp_ticker_pane_g1

0x0c77,	// (0x00026369) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00034e4a) midp_ticker_pane_g

0xaa78,	// (0x0003016a) midp_ticker_pane_t1

0xbd1e,	// (0x00031410) midp_editing_number_pane_t1

0x4545,	// (0x00029c37) midp_editing_number_pane

0x4554,	// (0x00029c46) midp_ticker_pane

0x42ea,	// (0x000299dc) ai_message_heading_pane

0xa183,	// (0x0002f875) bg_popup_window_pane_cp14

0x42f2,	// (0x000299e4) listscroll_ai_message_pane

0x4270,	// (0x00029962) ai_message_heading_pane_g1_ParamLimits

0x4270,	// (0x00029962) ai_message_heading_pane_g1

0x427c,	// (0x0002996e) ai_message_heading_pane_g2_ParamLimits

0x427c,	// (0x0002996e) ai_message_heading_pane_g2

0x428a,	// (0x0002997c) ai_message_heading_pane_g3_ParamLimits

0x428a,	// (0x0002997c) ai_message_heading_pane_g3

0x4296,	// (0x00029988) ai_message_heading_pane_g4_ParamLimits

0x4296,	// (0x00029988) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0003503e) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0003503e) ai_message_heading_pane_g

0x42a2,	// (0x00029994) ai_message_heading_pane_t1_ParamLimits

0x42a2,	// (0x00029994) ai_message_heading_pane_t1

0x42bc,	// (0x000299ae) ai_message_heading_pane_t2_ParamLimits

0x42bc,	// (0x000299ae) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00035047) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00035047) ai_message_heading_pane_t

0x42d0,	// (0x000299c2) bg_popup_heading_pane_cp1_ParamLimits

0x42d0,	// (0x000299c2) bg_popup_heading_pane_cp1

0x425e,	// (0x00029950) list_ai_message_pane_ParamLimits

0x425e,	// (0x00029950) list_ai_message_pane

0xd44a,	// (0x00032b3c) scroll_pane_cp10

0x41fa,	// (0x000298ec) list_ai_message_pane_g1

0x4202,	// (0x000298f4) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0003501b) list_ai_message_pane_g

0x420a,	// (0x000298fc) list_ai_message_pane_t1_ParamLimits

0x420a,	// (0x000298fc) list_ai_message_pane_t1

0x421f,	// (0x00029911) list_ai_message_pane_t2_ParamLimits

0x421f,	// (0x00029911) list_ai_message_pane_t2

0x4234,	// (0x00029926) list_ai_message_pane_t3_ParamLimits

0x4234,	// (0x00029926) list_ai_message_pane_t3

0x4249,	// (0x0002993b) list_ai_message_pane_t4_ParamLimits

0x4249,	// (0x0002993b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00035020) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00035020) list_ai_message_pane_t

0xbc27,	// (0x00031319) cell_ai_soft_ind_pane_ParamLimits

0xbc27,	// (0x00031319) cell_ai_soft_ind_pane

0x0c95,	// (0x00026387) cell_ai_soft_ind_pane_g1_ParamLimits

0x0c95,	// (0x00026387) cell_ai_soft_ind_pane_g1

0xa183,	// (0x0002f875) grid_highlight_cp1

0x0ca2,	// (0x00026394) text_secondary_cp56_ParamLimits

0x0ca2,	// (0x00026394) text_secondary_cp56

0x41b8,	// (0x000298aa) example_general_pane_ParamLimits

0x41b8,	// (0x000298aa) example_general_pane

0x41c4,	// (0x000298b6) example_parent_pane_g1_ParamLimits

0x41c4,	// (0x000298b6) example_parent_pane_g1

0x41d0,	// (0x000298c2) example_parent_pane_t1_ParamLimits

0x41d0,	// (0x000298c2) example_parent_pane_t1

0xb0dc,	// (0x000307ce) popup_preview_text_window_ParamLimits

0xb0dc,	// (0x000307ce) popup_preview_text_window

0x0ac8,	// (0x000261ba) list_single_pane_cp2_g4

0xcee4,	// (0x000325d6) bg_popup_preview_window_pane_ParamLimits

0xcee4,	// (0x000325d6) bg_popup_preview_window_pane

0x3f0c,	// (0x000295fe) popup_preview_text_window_t1_ParamLimits

0x3f0c,	// (0x000295fe) popup_preview_text_window_t1

0x3f2a,	// (0x0002961c) popup_preview_text_window_t2_ParamLimits

0x3f2a,	// (0x0002961c) popup_preview_text_window_t2

0x3f73,	// (0x00029665) popup_preview_text_window_t3_ParamLimits

0x3f73,	// (0x00029665) popup_preview_text_window_t3

0x3fb8,	// (0x000296aa) popup_preview_text_window_t4_ParamLimits

0x3fb8,	// (0x000296aa) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00034fef) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00034fef) popup_preview_text_window_t

0x4036,	// (0x00029728) scroll_pane_cp11

0x2fda,	// (0x000286cc) bg_popup_preview_window_pane_g1

0x3ec0,	// (0x000295b2) bg_popup_preview_window_pane_g2

0x3eca,	// (0x000295bc) bg_popup_preview_window_pane_g3

0x3ed4,	// (0x000295c6) bg_popup_preview_window_pane_g4

0x3ede,	// (0x000295d0) bg_popup_preview_window_pane_g5

0x3ee8,	// (0x000295da) bg_popup_preview_window_pane_g6

0x3ef0,	// (0x000295e2) bg_popup_preview_window_pane_g7

0x3ef8,	// (0x000295ea) bg_popup_preview_window_pane_g8

0xf0f8,	// (0x000347ea) aid_popup_width_pane

0xb04c,	// (0x0003073e) popup_midp_note_alarm_window_ParamLimits

0xb04c,	// (0x0003073e) popup_midp_note_alarm_window

0xd315,	// (0x00032a07) data_form_pane_ParamLimits

0x9c5d,	// (0x0002f34f) form_field_data_pane_g1

0x9c67,	// (0x0002f359) form_field_data_pane_t1_ParamLimits

0xd321,	// (0x00032a13) input_focus_pane_ParamLimits

0xeb71,	// (0x00034263) data_form_wide_pane_ParamLimits

0xeb82,	// (0x00034274) form_field_data_wide_pane_g1

0xeb8e,	// (0x00034280) form_field_data_wide_pane_t1_ParamLimits

0xd09c,	// (0x0003278e) input_focus_pane_cp6_ParamLimits

0xa743,	// (0x0002fe35) input_popup_find_pane_g1_ParamLimits

0xa743,	// (0x0002fe35) input_popup_find_pane_g1

0x0199,	// (0x0002588b) aid_navi_side_left_pane

0x01ae,	// (0x000258a0) aid_navi_side_right_pane

0x38d5,	// (0x00028fc7) bg_popup_window_pane_cp30_ParamLimits

0x38d5,	// (0x00028fc7) bg_popup_window_pane_cp30

0x394f,	// (0x00029041) popup_midp_note_alarm_window_g1_ParamLimits

0x394f,	// (0x00029041) popup_midp_note_alarm_window_g1

0x397f,	// (0x00029071) popup_midp_note_alarm_window_t1_ParamLimits

0x397f,	// (0x00029071) popup_midp_note_alarm_window_t1

0x3a20,	// (0x00029112) popup_midp_note_alarm_window_t2_ParamLimits

0x3a20,	// (0x00029112) popup_midp_note_alarm_window_t2

0x3ace,	// (0x000291c0) popup_midp_note_alarm_window_t3_ParamLimits

0x3ace,	// (0x000291c0) popup_midp_note_alarm_window_t3

0x3b00,	// (0x000291f2) popup_midp_note_alarm_window_t4_ParamLimits

0x3b00,	// (0x000291f2) popup_midp_note_alarm_window_t4

0x3b26,	// (0x00029218) popup_midp_note_alarm_window_t5_ParamLimits

0x3b26,	// (0x00029218) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00034f8c) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00034f8c) popup_midp_note_alarm_window_t

0x3bd2,	// (0x000292c4) wait_bar_pane_cp1_ParamLimits

0x3bd2,	// (0x000292c4) wait_bar_pane_cp1

0xa183,	// (0x0002f875) wait_anim_pane_copy1

0xa183,	// (0x0002f875) wait_border_pane_copy1

0x35ba,	// (0x00028cac) wait_border_pane_g1_copy1

0xeba8,	// (0x0003429a) form_field_popup_pane_g1

0x9c81,	// (0x0002f373) form_field_popup_pane_t1_ParamLimits

0xd321,	// (0x00032a13) input_focus_pane_cp7_ParamLimits

0xd34f,	// (0x00032a41) list_form_pane_ParamLimits

0xebb0,	// (0x000342a2) form_field_popup_wide_pane_g1

0xebb8,	// (0x000342aa) form_field_popup_wide_pane_t1_ParamLimits

0xd321,	// (0x00032a13) input_focus_pane_cp8_ParamLimits

0xd35b,	// (0x00032a4d) list_form_wide_pane_ParamLimits

0xbdfc,	// (0x000314ee) aid_size_cell_graphic_pane

0x9d00,	// (0x0002f3f2) data_form_pane_t1_ParamLimits

0x9e30,	// (0x0002f522) data_form_wide_pane_t1_ParamLimits

0xb4de,	// (0x00030bd0) bg_status_flat_pane

0xa30a,	// (0x0002f9fc) title_pane_t1_ParamLimits

0xa396,	// (0x0002fa88) title_pane_t2_ParamLimits

0xa3bc,	// (0x0002faae) title_pane_t3_ParamLimits

0xf557,	// (0x00034c49) title_pane_t_ParamLimits

0xa86e,	// (0x0002ff60) level_1_signal_ParamLimits

0xa880,	// (0x0002ff72) level_2_signal_ParamLimits

0xa893,	// (0x0002ff85) level_3_signal_ParamLimits

0xa8a6,	// (0x0002ff98) level_4_signal_ParamLimits

0xa8b9,	// (0x0002ffab) level_5_signal_ParamLimits

0xa8cc,	// (0x0002ffbe) level_6_signal_ParamLimits

0xa8df,	// (0x0002ffd1) level_7_signal_ParamLimits

0xa86e,	// (0x0002ff60) level_1_battery_ParamLimits

0xa880,	// (0x0002ff72) level_2_battery_ParamLimits

0xa893,	// (0x0002ff85) level_3_battery_ParamLimits

0xa8a6,	// (0x0002ff98) level_4_battery_ParamLimits

0xa8b9,	// (0x0002ffab) level_5_battery_ParamLimits

0xa8cc,	// (0x0002ffbe) level_6_battery_ParamLimits

0xa8df,	// (0x0002ffd1) level_7_battery_ParamLimits

0x37da,	// (0x00028ecc) bg_status_flat_pane_g1

0x37e2,	// (0x00028ed4) bg_status_flat_pane_g2

0x37ea,	// (0x00028edc) bg_status_flat_pane_g3

0x37f2,	// (0x00028ee4) bg_status_flat_pane_g4

0x37fa,	// (0x00028eec) bg_status_flat_pane_g5

0x3802,	// (0x00028ef4) bg_status_flat_pane_g6

0x380a,	// (0x00028efc) bg_status_flat_pane_g7

0xa3e4,	// (0x0002fad6) tabs_3_active_pane_t1_ParamLimits

0xa3e4,	// (0x0002fad6) tabs_3_passive_pane_t1_ParamLimits

0xa3fe,	// (0x0002faf0) tabs_4_active_pane_t1_ParamLimits

0xa3fe,	// (0x0002faf0) tabs_4_1_passive_pane_t1_ParamLimits

0xa759,	// (0x0002fe4b) tabs_2_active_pane_t1_ParamLimits

0xa759,	// (0x0002fe4b) tabs_2_passive_pane_t1_ParamLimits

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp4_ParamLimits

0xa76b,	// (0x0002fe5d) tabs_2_long_active_pane_t1_ParamLimits

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp4_ParamLimits

0x1a87,	// (0x00027179) list_single_midp_graphic_pane_t1_ParamLimits

0xa410,	// (0x0002fb02) bg_active_tab_pane_cp5_ParamLimits

0xa77e,	// (0x0002fe70) tabs_3_long_active_pane_t1_ParamLimits

0x10e3,	// (0x000267d5) bg_passive_tab_pane_cp5_ParamLimits

0x1a87,	// (0x00027179) list_single_midp_graphic_pane_t1

0xb4de,	// (0x00030bd0) bg_status_flat_pane_ParamLimits

0x18c8,	// (0x00026fba) indicator_pane_cp2_ParamLimits

0x18c8,	// (0x00026fba) indicator_pane_cp2

0xb674,	// (0x00030d66) navi_pane_srt_ParamLimits

0xb674,	// (0x00030d66) navi_pane_srt

0x2dc5,	// (0x000284b7) popup_clock_digital_analogue_window_cp1

0xcd27,	// (0x00032419) indicator_pane_t1

0x0b8d,	// (0x0002627f) copy_highlight_pane

0x0b8d,	// (0x0002627f) cursor_graphics_pane

0x0b8d,	// (0x0002627f) graphic_within_text_pane

0x0b8d,	// (0x0002627f) link_highlight_pane

0x3ff9,	// (0x000296eb) popup_preview_text_window_t5_ParamLimits

0x3ff9,	// (0x000296eb) popup_preview_text_window_t5

0x0cbe,	// (0x000263b0) cursor_digital_pane

0x0cbe,	// (0x000263b0) cursor_primary_pane

0x0ccf,	// (0x000263c1) cursor_primary_small_pane

0x0cd7,	// (0x000263c9) cursor_secondary_pane

0x0cdf,	// (0x000263d1) cursor_title_pane

0x0cbe,	// (0x000263b0) link_highlight_digital_pane

0x0cc6,	// (0x000263b8) link_highlight_primary_pane

0x0ccf,	// (0x000263c1) link_highlight_primary_small_pane

0x0cd7,	// (0x000263c9) link_highlight_secondary_pane

0x0cdf,	// (0x000263d1) link_highlight_title_pane

0x0cbe,	// (0x000263b0) copy_highlight_digital_pane

0x0cbe,	// (0x000263b0) copy_highlight_primary_pane

0x0ccf,	// (0x000263c1) copy_highlight_primary_small_pane

0x0cd7,	// (0x000263c9) copy_highlight_secondary_pane

0x0cdf,	// (0x000263d1) copy_highlight_title_pane

0x0cd7,	// (0x000263c9) graphic_text_digital_pane

0x3878,	// (0x00028f6a) graphic_text_primary_pane

0x3881,	// (0x00028f73) graphic_text_primary_small_pane

0x0ccf,	// (0x000263c1) graphic_text_secondary_pane

0x0cbe,	// (0x000263b0) graphic_text_title_pane

0xaa8a,	// (0x0003017c) cursor_primary_pane_g1

0x386a,	// (0x00028f5c) cursor_text_primary_t1

0xb940,	// (0x00031032) cursor_primary_small_pane_g1

0x385c,	// (0x00028f4e) cursor_text_primary_small_t1

0xb936,	// (0x00031028) cursor_primary_small_pane_g1_copy1

0x3844,	// (0x00028f36) cursor_text_primary_small_t1_copy1

0x3822,	// (0x00028f14) cursor_text_title_t1

0xb92c,	// (0x0003101e) cursor_title_pane_g1

0xaa8a,	// (0x0003017c) cursor_digital_pane_g1

0x0cf1,	// (0x000263e3) cursor_text_digital_t1

0x0cff,	// (0x000263f1) link_highlight_primary_pane_g1

0x37cb,	// (0x00028ebd) link_highlight_primary_pane_t1

0x0cff,	// (0x000263f1) link_highlight_primary_small_pane_g1

0x0d07,	// (0x000263f9) link_highlight_primary_small_pane_t1

0x0d16,	// (0x00026408) link_highlight_secondary_pane_g1

0x0d1e,	// (0x00026410) link_highlight_secondary_pane_t1

0x373f,	// (0x00028e31) link_highlight_title_pane_g1

0x3747,	// (0x00028e39) link_highlight_title_pane_t1

0x3728,	// (0x00028e1a) link_highlight_digital_pane_g1

0x3730,	// (0x00028e22) link_highlight_digital_pane_t1

0x35f0,	// (0x00028ce2) copy_highlight_primary_pane_g1

0x3607,	// (0x00028cf9) copy_highlight_primary_pane_t1

0x35f0,	// (0x00028ce2) copy_highlight_primary_small_pane_g1

0x35f8,	// (0x00028cea) copy_highlight_primary_small_pane_t1

0x0d2d,	// (0x0002641f) copy_highlight_secondary_pane_g1

0x0d35,	// (0x00026427) copy_highlight_secondary_pane_t1

0x35d9,	// (0x00028ccb) copy_highlight_title_pane_g1

0x35e1,	// (0x00028cd3) copy_highlight_title_pane_t1

0x35f0,	// (0x00028ce2) copy_highlight_digital_pane_g1

0x48f4,	// (0x00029fe6) copy_highlight_digital_pane_t1

0x4848,	// (0x00029f3a) graphic_text_primary_pane_g1

0x48d8,	// (0x00029fca) graphic_text_primary_pane_t1

0x48e6,	// (0x00029fd8) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x000350bb) graphic_text_primary_pane_t

0x48b4,	// (0x00029fa6) graphic_text_primary_small_pane_g1

0x48bc,	// (0x00029fae) graphic_text_primary_small_pane_t1

0x48ca,	// (0x00029fbc) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000350b6) graphic_text_primary_small_pane_t

0x4890,	// (0x00029f82) graphic_text_secondary_pane_g1

0x4898,	// (0x00029f8a) graphic_text_secondary_pane_t1

0x48a6,	// (0x00029f98) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x000350b1) graphic_text_secondary_pane_t

0x486c,	// (0x00029f5e) graphic_text_title_pane_g1

0x4874,	// (0x00029f66) graphic_text_title_pane_t1

0x4882,	// (0x00029f74) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x000350ac) graphic_text_title_pane_t

0x4848,	// (0x00029f3a) graphic_text_digital_pane_g1

0x4850,	// (0x00029f42) graphic_text_digital_pane_t1

0x485e,	// (0x00029f50) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x000350a7) graphic_text_digital_pane_t

0xa410,	// (0x0002fb02) navi_icon_pane_srt_ParamLimits

0xa410,	// (0x0002fb02) navi_icon_pane_srt

0xa183,	// (0x0002f875) navi_midp_pane_srt

0xa183,	// (0x0002f875) navi_navi_pane_srt

0xa410,	// (0x0002fb02) navi_text_pane_srt_ParamLimits

0xa410,	// (0x0002fb02) navi_text_pane_srt

0x4813,	// (0x00029f05) navi_navi_icon_text_pane_srt

0x481b,	// (0x00029f0d) navi_navi_pane_srt_g1_ParamLimits

0x481b,	// (0x00029f0d) navi_navi_pane_srt_g1

0x482d,	// (0x00029f1f) navi_navi_pane_srt_g2_ParamLimits

0x482d,	// (0x00029f1f) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x000350a2) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x000350a2) navi_navi_pane_srt_g

0x483f,	// (0x00029f31) navi_navi_tabs_pane_srt

0x4813,	// (0x00029f05) navi_navi_text_pane_srt

0x4813,	// (0x00029f05) navi_navi_volume_pane_srt

0x4804,	// (0x00029ef6) navi_navi_text_pane_srt_t1

0x1e23,	// (0x00027515) navi_navi_volume_pane_srt_g1

0x1e2b,	// (0x0002751d) volume_small_pane_srt_ParamLimits

0x1e2b,	// (0x0002751d) volume_small_pane_srt

0x0d44,	// (0x00026436) volume_small_pane_srt_g1_ParamLimits

0x0d44,	// (0x00026436) volume_small_pane_srt_g1

0x0d54,	// (0x00026446) volume_small_pane_srt_g2_ParamLimits

0x0d54,	// (0x00026446) volume_small_pane_srt_g2

0x0d65,	// (0x00026457) volume_small_pane_srt_g3_ParamLimits

0x0d65,	// (0x00026457) volume_small_pane_srt_g3

0x0d76,	// (0x00026468) volume_small_pane_srt_g4_ParamLimits

0x0d76,	// (0x00026468) volume_small_pane_srt_g4

0x0d87,	// (0x00026479) volume_small_pane_srt_g5_ParamLimits

0x0d87,	// (0x00026479) volume_small_pane_srt_g5

0x0d98,	// (0x0002648a) volume_small_pane_srt_g6_ParamLimits

0x0d98,	// (0x0002648a) volume_small_pane_srt_g6

0x0da9,	// (0x0002649b) volume_small_pane_srt_g7_ParamLimits

0x0da9,	// (0x0002649b) volume_small_pane_srt_g7

0x0dba,	// (0x000264ac) volume_small_pane_srt_g8_ParamLimits

0x0dba,	// (0x000264ac) volume_small_pane_srt_g8

0x0dcb,	// (0x000264bd) volume_small_pane_srt_g9_ParamLimits

0x0dcb,	// (0x000264bd) volume_small_pane_srt_g9

0x0ddc,	// (0x000264ce) volume_small_pane_srt_g10_ParamLimits

0x0ddc,	// (0x000264ce) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00034e4f) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00034e4f) volume_small_pane_srt_g

0xcf99,	// (0x0003268b) query_popup_data_pane_cp2

0x47ea,	// (0x00029edc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x47ea,	// (0x00029edc) navi_navi_icon_text_pane_srt_t1

0x3878,	// (0x00028f6a) navi_tabs_2_long_pane_srt

0x3878,	// (0x00028f6a) navi_tabs_2_pane_srt

0x3878,	// (0x00028f6a) navi_tabs_3_long_pane_srt

0x3878,	// (0x00028f6a) navi_tabs_3_pane_srt

0x3878,	// (0x00028f6a) navi_tabs_4_pane_srt

0x1e03,	// (0x000274f5) tabs_2_active_pane_srt_ParamLimits

0x1e03,	// (0x000274f5) tabs_2_active_pane_srt

0x1e13,	// (0x00027505) tabs_2_passive_pane_srt_ParamLimits

0x1e13,	// (0x00027505) tabs_2_passive_pane_srt

0x304e,	// (0x00028740) bg_passive_tab_pane_cp1_srt_ParamLimits

0x304e,	// (0x00028740) bg_passive_tab_pane_cp1_srt

0x47b6,	// (0x00029ea8) bg_passive_tab_pane_g1_cp1_srt

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp1_srt

0x47bf,	// (0x00029eb1) bg_passive_tab_pane_g3_cp1_srt

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp1_srt_ParamLimits

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp1_srt

0x47c8,	// (0x00029eba) tabs_2_active_pane_srt_g1

0xbe3e,	// (0x00031530) tabs_2_active_pane_srt_t1_ParamLimits

0xbe3e,	// (0x00031530) tabs_2_active_pane_srt_t1

0x47b6,	// (0x00029ea8) bg_active_tab_pane_g1_cp1_srt

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp1_srt

0x47bf,	// (0x00029eb1) bg_active_tab_pane_g3_cp1_srt

0x1dd0,	// (0x000274c2) tabs_3_active_pane_srt_ParamLimits

0x1dd0,	// (0x000274c2) tabs_3_active_pane_srt

0x1de1,	// (0x000274d3) tabs_3_passive_pane_cp_srt_ParamLimits

0x1de1,	// (0x000274d3) tabs_3_passive_pane_cp_srt

0x1df2,	// (0x000274e4) tabs_3_passive_pane_srt_ParamLimits

0x1df2,	// (0x000274e4) tabs_3_passive_pane_srt

0x304e,	// (0x00028740) bg_passive_tab_pane_cp2_srt_ParamLimits

0x304e,	// (0x00028740) bg_passive_tab_pane_cp2_srt

0x0ded,	// (0x000264df) bg_passive_tab_pane_g1_cp2_srt

0x0698,	// (0x00025d8a) bg_passive_tab_pane_g2_cp2_srt

0x0df6,	// (0x000264e8) bg_passive_tab_pane_g3_cp2_srt

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp2_srt_ParamLimits

0xa3ce,	// (0x0002fac0) bg_active_tab_pane_cp2_srt

0x479c,	// (0x00029e8e) tabs_3_active_pane_srt_g1

0xbe28,	// (0x0003151a) tabs_3_active_pane_srt_t1_ParamLimits

0xbe28,	// (0x0003151a) tabs_3_active_pane_srt_t1

0x0ded,	// (0x000264df) bg_active_tab_pane_g1_cp2_srt

0x0698,	// (0x00025d8a) bg_active_tab_pane_g2_cp2_srt

0x0df6,	// (0x000264e8) bg_active_tab_pane_g3_cp2_srt

0x1d88,	// (0x0002747a) tabs_4_active_pane_srt_ParamLimits

0x1d88,	// (0x0002747a) tabs_4_active_pane_srt

0x1d9a,	// (0x0002748c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1d9a,	// (0x0002748c) tabs_4_passive_pane_cp2_srt

0x10ab,	// (0x0002679d) aid_size_cell_toolbar

0x43a4,	// (0x00029a96) main_idle_act_pane_ParamLimits

0x12e2,	// (0x000269d4) popup_large_graphic_colour_window_ParamLimits

0xb3a0,	// (0x00030a92) popup_toolbar_window_ParamLimits

0xb3a0,	// (0x00030a92) popup_toolbar_window

0xed75,	// (0x00034467) list_single_graphic_2heading_pane_ParamLimits

0xed75,	// (0x00034467) list_single_graphic_2heading_pane

0xd622,	// (0x00032d14) aid_size_cell_apps_grid_lsc_pane

0xd634,	// (0x00032d26) aid_size_cell_apps_grid_prt_pane

0x10e3,	// (0x000267d5) bg_wml_button_pane_cp1_ParamLimits

0x10e3,	// (0x000267d5) bg_wml_button_pane_cp1

0xb8e8,	// (0x00030fda) form_midp_field_text_pane_t1_ParamLimits

0x304e,	// (0x00028740) input_focus_pane_cp050_ParamLimits

0x3287,	// (0x00028979) list_midp_form_text_pane_ParamLimits

0x3239,	// (0x0002892b) input_focus_pane_cp051_ParamLimits

0x324d,	// (0x0002893f) list_midp_choice_pane_ParamLimits

0x3107,	// (0x000287f9) list_single_2graphic_pane_cp3_ParamLimits

0x3107,	// (0x000287f9) list_single_2graphic_pane_cp3

0x311d,	// (0x0002880f) list_single_midp_graphic_pane_ParamLimits

0x311d,	// (0x0002880f) list_single_midp_graphic_pane

0xec1e,	// (0x00034310) list_single_graphic_2heading_pane_g1_ParamLimits

0xec1e,	// (0x00034310) list_single_graphic_2heading_pane_g1

0xea44,	// (0x00034136) list_single_graphic_2heading_pane_g4_ParamLimits

0xea44,	// (0x00034136) list_single_graphic_2heading_pane_g4

0xea50,	// (0x00034142) list_single_graphic_2heading_pane_g5_ParamLimits

0xea50,	// (0x00034142) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00034ea2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00034ea2) list_single_graphic_2heading_pane_g

0xec2a,	// (0x0003431c) list_single_graphic_2heading_pane_t1_ParamLimits

0xec2a,	// (0x0003431c) list_single_graphic_2heading_pane_t1

0xec3e,	// (0x00034330) list_single_graphic_2heading_pane_t2_ParamLimits

0xec3e,	// (0x00034330) list_single_graphic_2heading_pane_t2

0xec5a,	// (0x0003434c) list_single_graphic_2heading_pane_t3_ParamLimits

0xec5a,	// (0x0003434c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00034ea9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00034ea9) list_single_graphic_2heading_pane_t

0x2f18,	// (0x0002860a) bg_popup_sub_pane_cp2

0x2f42,	// (0x00028634) grid_toobar_pane

0x1a0b,	// (0x000270fd) cell_toolbar_pane_ParamLimits

0x1a0b,	// (0x000270fd) cell_toolbar_pane

0x2f7e,	// (0x00028670) cell_toolbar_pane_g1_ParamLimits

0x2f7e,	// (0x00028670) cell_toolbar_pane_g1

0x2f92,	// (0x00028684) cell_toolbar_pane_g2_ParamLimits

0x2f92,	// (0x00028684) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00034eb7) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00034eb7) cell_toolbar_pane_g

0x2fb4,	// (0x000286a6) grid_highlight_pane_cp2_ParamLimits

0x2fb4,	// (0x000286a6) grid_highlight_pane_cp2

0x2fce,	// (0x000286c0) toolbar_button_pane

0x2fda,	// (0x000286cc) toolbar_button_pane_g1

0x2fe2,	// (0x000286d4) toolbar_button_pane_g2

0x2fea,	// (0x000286dc) toolbar_button_pane_g3

0x2ff2,	// (0x000286e4) toolbar_button_pane_g4

0x2ffa,	// (0x000286ec) toolbar_button_pane_g5

0x3002,	// (0x000286f4) toolbar_button_pane_g6

0x300a,	// (0x000286fc) toolbar_button_pane_g7

0x3012,	// (0x00028704) toolbar_button_pane_g8

0x301a,	// (0x0002870c) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00034ebc) toolbar_button_pane_g

0x1a43,	// (0x00027135) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1a43,	// (0x00027135) list_single_2graphic_pane_g1_cp3

0xb817,	// (0x00030f09) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb817,	// (0x00030f09) list_single_2graphic_pane_g2_cp3

0x09c3,	// (0x000260b5) list_single_2graphic_pane_g3_cp3

0x1a60,	// (0x00027152) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1a60,	// (0x00027152) list_single_2graphic_pane_g4_cp3

0x1a6c,	// (0x0002715e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1a6c,	// (0x0002715e) list_single_2graphic_pane_t1_cp3

0x09b7,	// (0x000260a9) list_single_midp_graphic_pane_g2_ParamLimits

0x09b7,	// (0x000260a9) list_single_midp_graphic_pane_g2

0x10b3,	// (0x000267a5) aid_zoom_text_primary

0xec0e,	// (0x00034300) aid_zoom_text_secondary

0xaae2,	// (0x000301d4) status_small_pane_g7_ParamLimits

0xaae2,	// (0x000301d4) status_small_pane_g7

0xab05,	// (0x000301f7) status_small_pane_t1_ParamLimits

0xa2ce,	// (0x0002f9c0) title_pane_g2

0x0003,

0xf54e,	// (0x00034c40) title_pane_g

0xa5fc,	// (0x0002fcee) aid_size_cell_colour_1_pane_ParamLimits

0xa5fc,	// (0x0002fcee) aid_size_cell_colour_1_pane

0xa610,	// (0x0002fd02) aid_size_cell_colour_2_pane_ParamLimits

0xa610,	// (0x0002fd02) aid_size_cell_colour_2_pane

0xa624,	// (0x0002fd16) aid_size_cell_colour_3_pane_ParamLimits

0xa624,	// (0x0002fd16) aid_size_cell_colour_3_pane

0xa638,	// (0x0002fd2a) aid_size_cell_colour_4_pane_ParamLimits

0xa638,	// (0x0002fd2a) aid_size_cell_colour_4_pane

0x00d5,	// (0x000257c7) title_pane_stacon_g1_ParamLimits

0x00d5,	// (0x000257c7) title_pane_stacon_g1

0x365e,	// (0x00028d50) popup_note_wait_window_g3_ParamLimits

0x365e,	// (0x00028d50) popup_note_wait_window_g3

0x36d5,	// (0x00028dc7) popup_note_wait_window_t5_ParamLimits

0x36d5,	// (0x00028dc7) popup_note_wait_window_t5

0xa183,	// (0x0002f875) main_feb_china_hwr_fs_writing_pane

0xad39,	// (0x0003042b) popup_feb_china_hwr_fs_window_ParamLimits

0xad39,	// (0x0003042b) popup_feb_china_hwr_fs_window

0xb828,	// (0x00030f1a) aid_size_cell_hwr_fs_ParamLimits

0xb828,	// (0x00030f1a) aid_size_cell_hwr_fs

0x304e,	// (0x00028740) bg_popup_sub_pane_cp3_ParamLimits

0x304e,	// (0x00028740) bg_popup_sub_pane_cp3

0xb83d,	// (0x00030f2f) grid_hwr_fs_pane_ParamLimits

0xb83d,	// (0x00030f2f) grid_hwr_fs_pane

0x1aca,	// (0x000271bc) linegrid_hwr_fs_pane_ParamLimits

0x1aca,	// (0x000271bc) linegrid_hwr_fs_pane

0xb855,	// (0x00030f47) cell_hwr_fs_pane_ParamLimits

0xb855,	// (0x00030f47) cell_hwr_fs_pane

0x305a,	// (0x0002874c) linegrid_hwr_fs_pane_g1_ParamLimits

0x305a,	// (0x0002874c) linegrid_hwr_fs_pane_g1

0xb87b,	// (0x00030f6d) linegrid_hwr_fs_pane_g2_ParamLimits

0xb87b,	// (0x00030f6d) linegrid_hwr_fs_pane_g2

0x3078,	// (0x0002876a) linegrid_hwr_fs_pane_g3_ParamLimits

0x3078,	// (0x0002876a) linegrid_hwr_fs_pane_g3

0x1afe,	// (0x000271f0) linegrid_hwr_fs_pane_g4_ParamLimits

0x1afe,	// (0x000271f0) linegrid_hwr_fs_pane_g4

0x1b1c,	// (0x0002720e) linegrid_hwr_fs_pane_g5_ParamLimits

0x1b1c,	// (0x0002720e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00034ee2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00034ee2) linegrid_hwr_fs_pane_g

0x3084,	// (0x00028776) cell_hwr_fs_pane_g1_ParamLimits

0x3084,	// (0x00028776) cell_hwr_fs_pane_g1

0x2e53,	// (0x00028545) cell_hwr_fs_pane_g2_ParamLimits

0x2e53,	// (0x00028545) cell_hwr_fs_pane_g2

0xb88d,	// (0x00030f7f) cell_hwr_fs_pane_g3_ParamLimits

0xb88d,	// (0x00030f7f) cell_hwr_fs_pane_g3

0xb89a,	// (0x00030f8c) cell_hwr_fs_pane_g4_ParamLimits

0xb89a,	// (0x00030f8c) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00034eed) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00034eed) cell_hwr_fs_pane_g

0xb8a7,	// (0x00030f99) cell_hwr_fs_pane_t1

0xa183,	// (0x0002f875) grid_highlight_pane_cp6

0xa183,	// (0x0002f875) main_idle_act2_pane

0xd431,	// (0x00032b23) aid_inside_area_popup_secondary

0xbab6,	// (0x000311a8) aid_inside_area_window_primary_ParamLimits

0xbab6,	// (0x000311a8) aid_inside_area_window_primary

0x4903,	// (0x00029ff5) ai2_news_ticker_pane

0x490b,	// (0x00029ffd) aid_size_cell_ai1_link_ParamLimits

0x490b,	// (0x00029ffd) aid_size_cell_ai1_link

0x4925,	// (0x0002a017) popup_ai2_data_window_ParamLimits

0x4925,	// (0x0002a017) popup_ai2_data_window

0x4943,	// (0x0002a035) popup_ai2_link_window_ParamLimits

0x4943,	// (0x0002a035) popup_ai2_link_window

0x304e,	// (0x00028740) bg_popup_sub_pane_cp4_ParamLimits

0x304e,	// (0x00028740) bg_popup_sub_pane_cp4

0x4959,	// (0x0002a04b) grid_ai2_link_pane_ParamLimits

0x4959,	// (0x0002a04b) grid_ai2_link_pane

0x4970,	// (0x0002a062) popup_ai2_link_window_g1_ParamLimits

0x4970,	// (0x0002a062) popup_ai2_link_window_g1

0x497c,	// (0x0002a06e) popup_ai2_link_window_g2_ParamLimits

0x497c,	// (0x0002a06e) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x000350c0) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x000350c0) popup_ai2_link_window_g

0x498d,	// (0x0002a07f) ai2_mp_button_pane

0x4995,	// (0x0002a087) ai2_mp_volume_pane

0x3239,	// (0x0002892b) bg_popup_sub_pane_cp5_ParamLimits

0x3239,	// (0x0002892b) bg_popup_sub_pane_cp5

0x499d,	// (0x0002a08f) heading_ai2_gene_pane_ParamLimits

0x499d,	// (0x0002a08f) heading_ai2_gene_pane

0x49a9,	// (0x0002a09b) list_ai2_gene_pane_ParamLimits

0x49a9,	// (0x0002a09b) list_ai2_gene_pane

0x49f1,	// (0x0002a0e3) cell_ai2_link_pane_ParamLimits

0x49f1,	// (0x0002a0e3) cell_ai2_link_pane

0x4a07,	// (0x0002a0f9) cell_ai2_link_pane_g1

0xa183,	// (0x0002f875) grid_highlight_pane_cp7

0x1e40,	// (0x00027532) ai2_mp_volume_pane_g1

0x4ada,	// (0x0002a1cc) ai2_mp_volume_pane_g2

0x4a4f,	// (0x0002a141) list_ai2_gene_pane_t1

0x4ae2,	// (0x0002a1d4) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x000350d9) ai2_mp_volume_pane_g

0x1e48,	// (0x0002753a) volume_small_pane_cp3

0x4aea,	// (0x0002a1dc) aid_size_cell_ai2_button

0x4af2,	// (0x0002a1e4) grid_ai2_button_pane

0x4afb,	// (0x0002a1ed) cell_ai2_button_pane_ParamLimits

0x4afb,	// (0x0002a1ed) cell_ai2_button_pane

0xa093,	// (0x0002f785) cell_ai2_button_pane_g1

0xa183,	// (0x0002f875) grid_highlight_pane_cp8

0x4a9a,	// (0x0002a18c) ai2_gene_pane_t1_ParamLimits

0x4a9a,	// (0x0002a18c) ai2_gene_pane_t1

0xacd1,	// (0x000303c3) aid_height_parent_landscape

0xbc6e,	// (0x00031360) aid_height_set_list

0x43a4,	// (0x00029a96) aid_size_parent

0xbdfc,	// (0x000314ee) aid_size_cell_graphic_pane_ParamLimits

0x49b9,	// (0x0002a0ab) popup_ai2_data_window_g1_ParamLimits

0x49b9,	// (0x0002a0ab) popup_ai2_data_window_g1

0x49c5,	// (0x0002a0b7) ai2_news_ticker_pane_g1

0x49cd,	// (0x0002a0bf) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x000350c5) ai2_news_ticker_pane_g

0x49d5,	// (0x0002a0c7) ai2_news_ticker_pane_t1

0x49e3,	// (0x0002a0d5) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x000350ca) ai2_news_ticker_pane_t

0x4a10,	// (0x0002a102) heading_ai2_gene_pane_g1

0x4a18,	// (0x0002a10a) heading_ai2_gene_pane_t1_ParamLimits

0x4a18,	// (0x0002a10a) heading_ai2_gene_pane_t1

0x4a2d,	// (0x0002a11f) list_highlight_pane_cp6

0x4a35,	// (0x0002a127) ai2_gene_pane_ParamLimits

0x4a35,	// (0x0002a127) ai2_gene_pane

0x4a5d,	// (0x0002a14f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x000350cf) list_ai2_gene_pane_t

0x4a6b,	// (0x0002a15d) list_highlight_pane_cp8_ParamLimits

0x4a6b,	// (0x0002a15d) list_highlight_pane_cp8

0x4a7c,	// (0x0002a16e) ai2_gene_pane_g1_ParamLimits

0x4a7c,	// (0x0002a16e) ai2_gene_pane_g1

0x4a8e,	// (0x0002a180) ai2_gene_pane_g2_ParamLimits

0x4a8e,	// (0x0002a180) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x000350d4) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x000350d4) ai2_gene_pane_g

0xd2b7,	// (0x000329a9) scroll_pane_cp12

0xac8e,	// (0x00030380) control_pane_t3_ParamLimits

0xac8e,	// (0x00030380) control_pane_t3

0xaaf6,	// (0x000301e8) status_small_pane_g8_ParamLimits

0xaaf6,	// (0x000301e8) status_small_pane_g8

0xaddb,	// (0x000304cd) popup_find_window_ParamLimits

0xb08c,	// (0x0003077e) popup_note_image_window_ParamLimits

0xea80,	// (0x00034172) list_double2_graphic_pane_vc_g1_ParamLimits

0xea80,	// (0x00034172) list_double2_graphic_pane_vc_g1

0xec72,	// (0x00034364) list_double2_graphic_pane_vc_g2_ParamLimits

0xec72,	// (0x00034364) list_double2_graphic_pane_vc_g2

0xec7e,	// (0x00034370) list_double2_graphic_pane_vc_g3_ParamLimits

0xec7e,	// (0x00034370) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00034eb0) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00034eb0) list_double2_graphic_pane_vc_g

0xec8a,	// (0x0003437c) list_double2_graphic_pane_vc_t1_ParamLimits

0xec8a,	// (0x0003437c) list_double2_graphic_pane_vc_t1

0xea44,	// (0x00034136) list_single_heading_pane_vc_g1_ParamLimits

0xea44,	// (0x00034136) list_single_heading_pane_vc_g1

0xea50,	// (0x00034142) list_single_heading_pane_vc_g2_ParamLimits

0xea50,	// (0x00034142) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00034cba) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00034cba) list_single_heading_pane_vc_g

0xeca0,	// (0x00034392) list_single_heading_pane_vc_t1_ParamLimits

0xeca0,	// (0x00034392) list_single_heading_pane_vc_t1

0xecb6,	// (0x000343a8) list_single_heading_pane_vc_t2_ParamLimits

0xecb6,	// (0x000343a8) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00034ed1) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00034ed1) list_single_heading_pane_vc_t

0xecc8,	// (0x000343ba) list_setting_number_pane_vc_g1_ParamLimits

0xecc8,	// (0x000343ba) list_setting_number_pane_vc_g1

0xecd4,	// (0x000343c6) list_setting_number_pane_vc_g2_ParamLimits

0xecd4,	// (0x000343c6) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00034ed6) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00034ed6) list_setting_number_pane_vc_g

0xece0,	// (0x000343d2) list_setting_number_pane_vc_t1_ParamLimits

0xece0,	// (0x000343d2) list_setting_number_pane_vc_t1

0xecf4,	// (0x000343e6) list_setting_number_pane_vc_t2_ParamLimits

0xecf4,	// (0x000343e6) list_setting_number_pane_vc_t2

0xed10,	// (0x00034402) list_setting_number_pane_vc_t3_ParamLimits

0xed10,	// (0x00034402) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00034edb) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00034edb) list_setting_number_pane_vc_t

0xed3e,	// (0x00034430) set_value_pane_vc_ParamLimits

0xed3e,	// (0x00034430) set_value_pane_vc

0xed75,	// (0x00034467) list_double2_graphic_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double2_graphic_pane_vc

0x458b,	// (0x00029c7d) list_double2_large_graphic_pane_vc_ParamLimits

0x458b,	// (0x00029c7d) list_double2_large_graphic_pane_vc

0xed75,	// (0x00034467) list_double2_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double2_pane_vc

0xed75,	// (0x00034467) list_double_graphic_heading_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double_graphic_heading_pane_vc

0xed75,	// (0x00034467) list_double_graphic_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double_graphic_pane_vc

0xed75,	// (0x00034467) list_double_heading_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double_heading_pane_vc

0x459f,	// (0x00029c91) list_double_large_graphic_pane_vc_ParamLimits

0x459f,	// (0x00029c91) list_double_large_graphic_pane_vc

0xed75,	// (0x00034467) list_double_number_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double_number_pane_vc

0xed75,	// (0x00034467) list_double_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double_pane_vc

0xed75,	// (0x00034467) list_double_time_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_double_time_pane_vc

0xed75,	// (0x00034467) list_setting_number_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_setting_number_pane_vc

0xed75,	// (0x00034467) list_setting_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_setting_pane_vc

0xed75,	// (0x00034467) list_single_graphic_heading_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_single_graphic_heading_pane_vc

0xed75,	// (0x00034467) list_single_heading_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_single_heading_pane_vc

0xed75,	// (0x00034467) list_single_number_heading_pane_vc_ParamLimits

0xed75,	// (0x00034467) list_single_number_heading_pane_vc

0xea80,	// (0x00034172) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xea80,	// (0x00034172) list_double_graphic_heading_pane_vc_g1

0xea44,	// (0x00034136) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xea44,	// (0x00034136) list_double_graphic_heading_pane_vc_g2

0xea50,	// (0x00034142) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xea50,	// (0x00034142) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x000350e0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000350e0) list_double_graphic_heading_pane_vc_g

0xed8a,	// (0x0003447c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xed8a,	// (0x0003447c) list_double_graphic_heading_pane_vc_t1

0xeda0,	// (0x00034492) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeda0,	// (0x00034492) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x000350e7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x000350e7) list_double_graphic_heading_pane_vc_t

0xecc8,	// (0x000343ba) list_setting_pane_vc_g1_ParamLimits

0xecc8,	// (0x000343ba) list_setting_pane_vc_g1

0xecd4,	// (0x000343c6) list_setting_pane_vc_g2_ParamLimits

0xecd4,	// (0x000343c6) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00034ed6) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00034ed6) list_setting_pane_vc_g

0xedbe,	// (0x000344b0) list_setting_pane_vc_t1_ParamLimits

0xedbe,	// (0x000344b0) list_setting_pane_vc_t1

0xedda,	// (0x000344cc) list_setting_pane_vc_t2_ParamLimits

0xedda,	// (0x000344cc) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x0003512a) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x0003512a) list_setting_pane_vc_t

0xed3e,	// (0x00034430) set_value_pane_cp_vc_ParamLimits

0xed3e,	// (0x00034430) set_value_pane_cp_vc

0xea44,	// (0x00034136) list_single_number_heading_pane_vc_g1_ParamLimits

0xea44,	// (0x00034136) list_single_number_heading_pane_vc_g1

0xea50,	// (0x00034142) list_single_number_heading_pane_vc_g2_ParamLimits

0xea50,	// (0x00034142) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00034cba) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00034cba) list_single_number_heading_pane_vc_g

0xedf6,	// (0x000344e8) list_single_number_heading_pane_vc_t1_ParamLimits

0xedf6,	// (0x000344e8) list_single_number_heading_pane_vc_t1

0xea5c,	// (0x0003414e) list_single_number_heading_pane_vc_t2_ParamLimits

0xea5c,	// (0x0003414e) list_single_number_heading_pane_vc_t2

0xea6e,	// (0x00034160) list_single_number_heading_pane_vc_t3_ParamLimits

0xea6e,	// (0x00034160) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x0003512f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x0003512f) list_single_number_heading_pane_vc_t

0xea80,	// (0x00034172) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xea80,	// (0x00034172) list_single_graphic_heading_pane_vc_g1

0xea44,	// (0x00034136) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xea44,	// (0x00034136) list_single_graphic_heading_pane_vc_g4

0xea50,	// (0x00034142) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xea50,	// (0x00034142) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x000350e0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x000350e0) list_single_graphic_heading_pane_vc_g

0xedf6,	// (0x000344e8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xedf6,	// (0x000344e8) list_single_graphic_heading_pane_vc_t1

0xee0c,	// (0x000344fe) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee0c,	// (0x000344fe) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x00035136) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x00035136) list_single_graphic_heading_pane_vc_t

0xea44,	// (0x00034136) list_double2_pane_vc_g1_ParamLimits

0xea44,	// (0x00034136) list_double2_pane_vc_g1

0xea50,	// (0x00034142) list_double2_pane_vc_g2_ParamLimits

0xea50,	// (0x00034142) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00034cba) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00034cba) list_double2_pane_vc_g

0xed5f,	// (0x00034451) list_double2_pane_vc_t1_ParamLimits

0xed5f,	// (0x00034451) list_double2_pane_vc_t1

0xea8c,	// (0x0003417e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xea8c,	// (0x0003417e) list_double2_large_graphic_pane_vc_g1

0xea98,	// (0x0003418a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xea98,	// (0x0003418a) list_double2_large_graphic_pane_vc_g2

0xeaa4,	// (0x00034196) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeaa4,	// (0x00034196) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00034cd7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00034cd7) list_double2_large_graphic_pane_vc_g

0xeab0,	// (0x000341a2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeab0,	// (0x000341a2) list_double2_large_graphic_pane_vc_t1

0xee1e,	// (0x00034510) list_double_time_pane_vc_g1_ParamLimits

0xee1e,	// (0x00034510) list_double_time_pane_vc_g1

0xee2a,	// (0x0003451c) list_double_time_pane_vc_g2_ParamLimits

0xee2a,	// (0x0003451c) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x0003513b) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x0003513b) list_double_time_pane_vc_g

0xee36,	// (0x00034528) list_double_time_pane_vc_t1_ParamLimits

0xee36,	// (0x00034528) list_double_time_pane_vc_t1

0xee60,	// (0x00034552) list_double_time_pane_vc_t2_ParamLimits

0xee60,	// (0x00034552) list_double_time_pane_vc_t2

0xeea9,	// (0x0003459b) list_double_time_pane_vc_t3_ParamLimits

0xeea9,	// (0x0003459b) list_double_time_pane_vc_t3

0xeebb,	// (0x000345ad) list_double_time_pane_vc_t4_ParamLimits

0xeebb,	// (0x000345ad) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00035140) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00035140) list_double_time_pane_vc_t

0xea44,	// (0x00034136) list_double_pane_vc_g1_ParamLimits

0xea44,	// (0x00034136) list_double_pane_vc_g1

0xea50,	// (0x00034142) list_double_pane_vc_g2_ParamLimits

0xea50,	// (0x00034142) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00034cba) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00034cba) list_double_pane_vc_g

0xeecf,	// (0x000345c1) list_double_pane_vc_t1_ParamLimits

0xeecf,	// (0x000345c1) list_double_pane_vc_t1

0xeee3,	// (0x000345d5) list_double_pane_vc_t2_ParamLimits

0xeee3,	// (0x000345d5) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x00035149) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x00035149) list_double_pane_vc_t

0xea44,	// (0x00034136) list_double_number_pane_vc_g1_ParamLimits

0xea44,	// (0x00034136) list_double_number_pane_vc_g1

0xea50,	// (0x00034142) list_double_number_pane_vc_g2_ParamLimits

0xea50,	// (0x00034142) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00034cba) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00034cba) list_double_number_pane_vc_g

0xeef9,	// (0x000345eb) list_double_number_pane_vc_t1_ParamLimits

0xeef9,	// (0x000345eb) list_double_number_pane_vc_t1

0xef0b,	// (0x000345fd) list_double_number_pane_vc_t2_ParamLimits

0xef0b,	// (0x000345fd) list_double_number_pane_vc_t2

0xeee3,	// (0x000345d5) list_double_number_pane_vc_t3_ParamLimits

0xeee3,	// (0x000345d5) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x0003514e) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003514e) list_double_number_pane_vc_t

0xef1f,	// (0x00034611) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef1f,	// (0x00034611) list_double_large_graphic_pane_vc_g1

0xef41,	// (0x00034633) list_double_large_graphic_pane_vc_g2_ParamLimits

0xef41,	// (0x00034633) list_double_large_graphic_pane_vc_g2

0xef55,	// (0x00034647) list_double_large_graphic_pane_vc_g3_ParamLimits

0xef55,	// (0x00034647) list_double_large_graphic_pane_vc_g3

0xef64,	// (0x00034656) list_double_large_graphic_pane_vc_g4_ParamLimits

0xef64,	// (0x00034656) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x00035155) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x00035155) list_double_large_graphic_pane_vc_g

0xef73,	// (0x00034665) list_double_large_graphic_pane_vc_t1_ParamLimits

0xef73,	// (0x00034665) list_double_large_graphic_pane_vc_t1

0xef8f,	// (0x00034681) list_double_large_graphic_pane_vc_t2_ParamLimits

0xef8f,	// (0x00034681) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0003515e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0003515e) list_double_large_graphic_pane_vc_t

0xea44,	// (0x00034136) list_double_heading_pane_vc_g1_ParamLimits

0xea44,	// (0x00034136) list_double_heading_pane_vc_g1

0xea50,	// (0x00034142) list_double_heading_pane_vc_g2_ParamLimits

0xea50,	// (0x00034142) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00034cba) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00034cba) list_double_heading_pane_vc_g

0xefaf,	// (0x000346a1) list_double_heading_pane_vc_t1_ParamLimits

0xefaf,	// (0x000346a1) list_double_heading_pane_vc_t1

0xefc1,	// (0x000346b3) list_double_heading_pane_vc_t2_ParamLimits

0xefc1,	// (0x000346b3) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00035163) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00035163) list_double_heading_pane_vc_t

0xefd9,	// (0x000346cb) list_double_graphic_pane_vc_g1_ParamLimits

0xefd9,	// (0x000346cb) list_double_graphic_pane_vc_g1

0xefec,	// (0x000346de) list_double_graphic_pane_vc_g2_ParamLimits

0xefec,	// (0x000346de) list_double_graphic_pane_vc_g2

0xea44,	// (0x00034136) list_double_graphic_pane_vc_g3_ParamLimits

0xea44,	// (0x00034136) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00035168) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00035168) list_double_graphic_pane_vc_g

0xf009,	// (0x000346fb) list_double_graphic_pane_vc_t1_ParamLimits

0xf009,	// (0x000346fb) list_double_graphic_pane_vc_t1

0xf033,	// (0x00034725) list_double_graphic_pane_vc_t2_ParamLimits

0xf033,	// (0x00034725) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00035171) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00035171) list_double_graphic_pane_vc_t

0xf104,	// (0x000347f6) aid_size_cell_fastswap

0xa09d,	// (0x0002f78f) aid_size_cell_touch_ParamLimits

0xa09d,	// (0x0002f78f) aid_size_cell_touch

0xf281,	// (0x00034973) popup_fast_swap_wide_window_ParamLimits

0xf281,	// (0x00034973) popup_fast_swap_wide_window

0xa265,	// (0x0002f957) touch_pane_ParamLimits

0xa265,	// (0x0002f957) touch_pane

0xd30d,	// (0x000329ff) button_value_adjust_pane_cp2

0xeb19,	// (0x0003420b) button_value_adjust_pane_cp4

0xeb21,	// (0x00034213) form_field_data_pane_cp2

0x9c32,	// (0x0002f324) form_field_data_wide_pane_cp2

0xd659,	// (0x00032d4b) bg_scroll_pane_ParamLimits

0x02d6,	// (0x000259c8) scroll_handle_pane_ParamLimits

0x02ea,	// (0x000259dc) scroll_sc2_down_pane_ParamLimits

0x02ea,	// (0x000259dc) scroll_sc2_down_pane

0xd68a,	// (0x00032d7c) scroll_sc2_up_pane_ParamLimits

0xd68a,	// (0x00032d7c) scroll_sc2_up_pane

0xbf70,	// (0x00031662) grid_wheel_folder_pane_g1_ParamLimits

0xbf70,	// (0x00031662) grid_wheel_folder_pane_g1

0x07df,	// (0x00025ed1) clock_nsta_pane_cp2_ParamLimits

0x07df,	// (0x00025ed1) clock_nsta_pane_cp2

0xa9d4,	// (0x000300c6) listscroll_midp_pane_ParamLimits

0xa9e0,	// (0x000300d2) midp_canvas_pane

0x1099,	// (0x0002678b) nsta_clock_indic_pane

0x10ef,	// (0x000267e1) listscroll_form_pane_vc

0x1113,	// (0x00026805) listscroll_set_pane_vc_ParamLimits

0x1113,	// (0x00026805) listscroll_set_pane_vc

0xb506,	// (0x00030bf8) clock_nsta_pane

0xb530,	// (0x00030c22) indicator_nsta_pane

0x2f18,	// (0x0002860a) bg_popup_sub_pane_cp2_ParamLimits

0x2f2c,	// (0x0002861e) find_pane_cp2_ParamLimits

0x2f2c,	// (0x0002861e) find_pane_cp2

0x2f42,	// (0x00028634) grid_toobar_pane_ParamLimits

0x3022,	// (0x00028714) list_form_gen_pane_vc_ParamLimits

0x3022,	// (0x00028714) list_form_gen_pane_vc

0x3038,	// (0x0002872a) scroll_pane_cp8_vc_ParamLimits

0x3038,	// (0x0002872a) scroll_pane_cp8_vc

0x30b4,	// (0x000287a6) data_form_wide_pane_vc_ParamLimits

0x30b4,	// (0x000287a6) data_form_wide_pane_vc

0x30c0,	// (0x000287b2) form_field_data_wide_pane_vc_g1

0x30c8,	// (0x000287ba) form_field_data_wide_pane_vc_t1_ParamLimits

0x30c8,	// (0x000287ba) form_field_data_wide_pane_vc_t1

0xd321,	// (0x00032a13) input_focus_pane_cp6_vc_ParamLimits

0xd321,	// (0x00032a13) input_focus_pane_cp6_vc

0x33e4,	// (0x00028ad6) list_midp_pane_ParamLimits

0x4790,	// (0x00029e82) scroll_pane_cp16_ParamLimits

0x4790,	// (0x00029e82) scroll_pane_cp16

0x3432,	// (0x00028b24) button_value_adjust_pane_ParamLimits

0x3432,	// (0x00028b24) button_value_adjust_pane

0xbc7f,	// (0x00031371) button_value_adjust_pane_cp6_ParamLimits

0xbc7f,	// (0x00031371) button_value_adjust_pane_cp6

0xbcf9,	// (0x000313eb) settings_code_pane_cp_ParamLimits

0xbcf9,	// (0x000313eb) settings_code_pane_cp

0xa093,	// (0x0002f785) cell_touch_pane_g1

0xa093,	// (0x0002f785) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00034df5) cell_touch_pane_g

0xbe54,	// (0x00031546) cell_touch_pane_cp_ParamLimits

0xbe54,	// (0x00031546) cell_touch_pane_cp

0xbe70,	// (0x00031562) cell_touch_pane_ParamLimits

0xbe70,	// (0x00031562) cell_touch_pane

0xa093,	// (0x0002f785) scroll_sc2_down_pane_g1

0xa093,	// (0x0002f785) scroll_sc2_up_pane_g1

0xa183,	// (0x0002f875) bg_set_opt_pane_cp4_vc

0x4b2e,	// (0x0002a220) list_set_graphic_pane_vc_g1_ParamLimits

0x4b2e,	// (0x0002a220) list_set_graphic_pane_vc_g1

0x4b3a,	// (0x0002a22c) list_set_graphic_pane_vc_g2_ParamLimits

0x4b3a,	// (0x0002a22c) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x000350ec) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x000350ec) list_set_graphic_pane_vc_g

0x4b46,	// (0x0002a238) text_primary_small_cp13_vc_ParamLimits

0x4b46,	// (0x0002a238) text_primary_small_cp13_vc

0x0875,	// (0x00025f67) list_set_graphic_pane_vc_ParamLimits

0x0875,	// (0x00025f67) list_set_graphic_pane_vc

0xa183,	// (0x0002f875) input_focus_pane_cp2_vc

0xa093,	// (0x0002f785) setting_code_pane_vc_g1

0xa427,	// (0x0002fb19) setting_code_pane_vc_t1

0x4b5e,	// (0x0002a250) set_text_pane_vc_t1_ParamLimits

0x4b5e,	// (0x0002a250) set_text_pane_vc_t1

0xa183,	// (0x0002f875) input_focus_pane_cp1_vc

0x4b7c,	// (0x0002a26e) list_set_text_pane_vc

0xa093,	// (0x0002f785) setting_text_pane_vc_g1

0xa183,	// (0x0002f875) bg_set_opt_pane_cp2_vc

0xa41e,	// (0x0002fb10) setting_slider_graphic_pane_vc_g1

0x4b86,	// (0x0002a278) setting_slider_graphic_pane_vc_t1

0x4b98,	// (0x0002a28a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x000350f1) setting_slider_graphic_pane_vc_t

0x4baa,	// (0x0002a29c) slider_set_pane_cp_vc

0x4bb4,	// (0x0002a2a6) slider_set_pane_vc_g1

0x4bbd,	// (0x0002a2af) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x000350f6) slider_set_pane_vc_g

0xd379,	// (0x00032a6b) set_opt_bg_pane_g1_copy1

0xd381,	// (0x00032a73) set_opt_bg_pane_g2_copy1

0x4be9,	// (0x0002a2db) set_opt_bg_pane_g3_copy1

0xd391,	// (0x00032a83) set_opt_bg_pane_g4_copy1

0xd399,	// (0x00032a8b) set_opt_bg_pane_g5_copy1

0xd3a1,	// (0x00032a93) set_opt_bg_pane_g6_copy1

0x4bf3,	// (0x0002a2e5) set_opt_bg_pane_g7_copy1

0x4bfd,	// (0x0002a2ef) set_opt_bg_pane_g8_copy1

0x4c07,	// (0x0002a2f9) set_opt_bg_pane_g9_copy1

0xa183,	// (0x0002f875) bg_set_opt_pane_cp_vc

0x4c11,	// (0x0002a303) setting_slider_pane_vc_t1

0x4c20,	// (0x0002a312) setting_slider_pane_vc_t2

0x4c32,	// (0x0002a324) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00035105) setting_slider_pane_vc_t

0x4c44,	// (0x0002a336) slider_set_pane_vc

0x1b40,	// (0x00027232) volume_set_pane_vc_g1

0x1b49,	// (0x0002723b) volume_set_pane_vc_g2

0x1b52,	// (0x00027244) volume_set_pane_vc_g3

0x1b5b,	// (0x0002724d) volume_set_pane_vc_g4

0x1b64,	// (0x00027256) volume_set_pane_vc_g5

0x1b6d,	// (0x0002725f) volume_set_pane_vc_g6

0x1b76,	// (0x00027268) volume_set_pane_vc_g7

0x1b7f,	// (0x00027271) volume_set_pane_vc_g8

0x1b88,	// (0x0002727a) volume_set_pane_vc_g9

0x1b91,	// (0x00027283) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x0003510c) volume_set_pane_vc_g

0x4c4c,	// (0x0002a33e) volume_set_pane_vc

0x4c56,	// (0x0002a348) button_value_adjust_pane_cp1_vc

0x4c60,	// (0x0002a352) list_highlight_pane_cp2_vc

0x4c69,	// (0x0002a35b) list_set_pane_vc_ParamLimits

0x4c69,	// (0x0002a35b) list_set_pane_vc

0x4cd7,	// (0x0002a3c9) main_pane_set_vc_t1_ParamLimits

0x4cd7,	// (0x0002a3c9) main_pane_set_vc_t1

0x4cec,	// (0x0002a3de) main_pane_set_vc_t2_ParamLimits

0x4cec,	// (0x0002a3de) main_pane_set_vc_t2

0x4cfe,	// (0x0002a3f0) main_pane_set_vc_t3_ParamLimits

0x4cfe,	// (0x0002a3f0) main_pane_set_vc_t3

0x4d12,	// (0x0002a404) main_pane_set_vc_t4_ParamLimits

0x4d12,	// (0x0002a404) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00035121) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00035121) main_pane_set_vc_t

0x4d26,	// (0x0002a418) setting_code_pane_vc_ParamLimits

0x4d26,	// (0x0002a418) setting_code_pane_vc

0x4d37,	// (0x0002a429) setting_slider_graphic_pane_vc

0x4d37,	// (0x0002a429) setting_slider_pane_vc

0x4d37,	// (0x0002a429) setting_text_pane_vc

0x4d37,	// (0x0002a429) setting_volume_pane_vc

0x4d41,	// (0x0002a433) scroll_pane_cp121_vc

0xd2fb,	// (0x000329ed) set_content_pane_vc

0x4d49,	// (0x0002a43b) button_value_adjust_pane_g1

0x4d52,	// (0x0002a444) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00035176) button_value_adjust_pane_g

0x4d5b,	// (0x0002a44d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4d5b,	// (0x0002a44d) form_field_slider_wide_pane_vc_t1

0x4d6d,	// (0x0002a45f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4d6d,	// (0x0002a45f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0003517b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0003517b) form_field_slider_wide_pane_vc_t

0xa3ce,	// (0x0002fac0) input_focus_pane_cp10_vc_ParamLimits

0xa3ce,	// (0x0002fac0) input_focus_pane_cp10_vc

0x4d99,	// (0x0002a48b) slider_cont_pane_cp1_vc_ParamLimits

0x4d99,	// (0x0002a48b) slider_cont_pane_cp1_vc

0x4dab,	// (0x0002a49d) slider_form_pane_g1_cp2

0x4bbd,	// (0x0002a2af) slider_form_pane_g2_cp2

0x4dd8,	// (0x0002a4ca) form_field_slider_pane_vc_t3

0x4de6,	// (0x0002a4d8) form_field_slider_pane_vc_t4

0x4df4,	// (0x0002a4e6) slider_form_pane_vc_ParamLimits

0x4df4,	// (0x0002a4e6) slider_form_pane_vc

0x4e01,	// (0x0002a4f3) form_field_slider_pane_vc_t1_ParamLimits

0x4e01,	// (0x0002a4f3) form_field_slider_pane_vc_t1

0x4d6d,	// (0x0002a45f) form_field_slider_pane_vc_t2_ParamLimits

0x4d6d,	// (0x0002a45f) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0003518d) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0003518d) form_field_slider_pane_vc_t

0xa3ce,	// (0x0002fac0) input_focus_pane_cp9_vc_ParamLimits

0xa3ce,	// (0x0002fac0) input_focus_pane_cp9_vc

0x4e17,	// (0x0002a509) slider_cont_pane_vc_ParamLimits

0x4e17,	// (0x0002a509) slider_cont_pane_vc

0x4e2b,	// (0x0002a51d) list_form_graphic_pane_cp_vc_ParamLimits

0x4e2b,	// (0x0002a51d) list_form_graphic_pane_cp_vc

0x30c0,	// (0x000287b2) form_field_popup_wide_pane_vc_g1

0x4e40,	// (0x0002a532) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4e40,	// (0x0002a532) form_field_popup_wide_pane_vc_t1

0xd321,	// (0x00032a13) input_focus_pane_cp8_vc_ParamLimits

0xd321,	// (0x00032a13) input_focus_pane_cp8_vc

0x4e85,	// (0x0002a577) list_form_wide_pane_vc_ParamLimits

0x4e85,	// (0x0002a577) list_form_wide_pane_vc

0x4e91,	// (0x0002a583) list_form_graphic_pane_vc_g1

0x4e99,	// (0x0002a58b) list_form_graphic_pane_vc_t1_ParamLimits

0x4e99,	// (0x0002a58b) list_form_graphic_pane_vc_t1

0xa410,	// (0x0002fb02) list_highlight_pane_cp5_vc_ParamLimits

0xa410,	// (0x0002fb02) list_highlight_pane_cp5_vc

0x4eb5,	// (0x0002a5a7) list_form_graphic_pane_vc_ParamLimits

0x4eb5,	// (0x0002a5a7) list_form_graphic_pane_vc

0x30c0,	// (0x000287b2) form_field_popup_pane_vc_g1

0x4ecb,	// (0x0002a5bd) form_field_popup_pane_vc_t1_ParamLimits

0x4ecb,	// (0x0002a5bd) form_field_popup_pane_vc_t1

0xd321,	// (0x00032a13) input_focus_pane_cp7_vc_ParamLimits

0xd321,	// (0x00032a13) input_focus_pane_cp7_vc

0x4ee2,	// (0x0002a5d4) list_form_pane_vc_ParamLimits

0x4ee2,	// (0x0002a5d4) list_form_pane_vc

0x4eee,	// (0x0002a5e0) data_form_pane_vc_t1_ParamLimits

0x4eee,	// (0x0002a5e0) data_form_pane_vc_t1

0xd379,	// (0x00032a6b) input_focus_pane_vc_g1

0xd381,	// (0x00032a73) input_focus_pane_vc_g2

0xd389,	// (0x00032a7b) input_focus_pane_vc_g3

0xd391,	// (0x00032a83) input_focus_pane_vc_g4

0xd399,	// (0x00032a8b) input_focus_pane_vc_g5

0xd3a1,	// (0x00032a93) input_focus_pane_vc_g6

0xd3a9,	// (0x00032a9b) input_focus_pane_vc_g7

0xd3b1,	// (0x00032aa3) input_focus_pane_vc_g8

0xd3b9,	// (0x00032aab) input_focus_pane_vc_g9

0xa093,	// (0x0002f785) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00034d7e) input_focus_pane_vc_g

0x30b4,	// (0x000287a6) data_form_pane_vc_ParamLimits

0x30b4,	// (0x000287a6) data_form_pane_vc

0x30c0,	// (0x000287b2) form_field_data_pane_vc_g1

0x4f0b,	// (0x0002a5fd) form_field_data_pane_vc_t1_ParamLimits

0x4f0b,	// (0x0002a5fd) form_field_data_pane_vc_t1

0xd321,	// (0x00032a13) input_focus_pane_vc_ParamLimits

0xd321,	// (0x00032a13) input_focus_pane_vc

0x4f25,	// (0x0002a617) button_value_adjust_pane_cp3_vc

0x4f2d,	// (0x0002a61f) button_value_adjust_pane_cp5_vc

0x4f35,	// (0x0002a627) form_field_data_pane_vc_ParamLimits

0x4f35,	// (0x0002a627) form_field_data_pane_vc

0x4f50,	// (0x0002a642) form_field_data_pane_vc_cp2

0x4f58,	// (0x0002a64a) form_field_data_wide_pane_vc_ParamLimits

0x4f58,	// (0x0002a64a) form_field_data_wide_pane_vc

0x4f72,	// (0x0002a664) form_field_data_wide_pane_vc_cp2

0x4f7a,	// (0x0002a66c) form_field_popup_pane_vc_ParamLimits

0x4f7a,	// (0x0002a66c) form_field_popup_pane_vc

0x4f95,	// (0x0002a687) form_field_popup_wide_pane_vc_ParamLimits

0x4f95,	// (0x0002a687) form_field_popup_wide_pane_vc

0x4faf,	// (0x0002a6a1) form_field_slider_pane_vc_ParamLimits

0x4faf,	// (0x0002a6a1) form_field_slider_pane_vc

0x4fc2,	// (0x0002a6b4) form_field_slider_wide_pane_vc_ParamLimits

0x4fc2,	// (0x0002a6b4) form_field_slider_wide_pane_vc

0xbe8e,	// (0x00031580) grid_touch_1_pane_ParamLimits

0xbe8e,	// (0x00031580) grid_touch_1_pane

0xbea2,	// (0x00031594) grid_touch_2_pane_ParamLimits

0xbea2,	// (0x00031594) grid_touch_2_pane

0x5092,	// (0x0002a784) touch_pane_g1_ParamLimits

0x5092,	// (0x0002a784) touch_pane_g1

0x4ffb,	// (0x0002a6ed) cell_app_pane_cp_wide_ParamLimits

0x4ffb,	// (0x0002a6ed) cell_app_pane_cp_wide

0x500c,	// (0x0002a6fe) grid_popup_fast_wide_pane_ParamLimits

0x500c,	// (0x0002a6fe) grid_popup_fast_wide_pane

0x5020,	// (0x0002a712) scroll_pane_cp19_ParamLimits

0x5020,	// (0x0002a712) scroll_pane_cp19

0xa183,	// (0x0002f875) bg_popup_window_pane_cp20

0x5034,	// (0x0002a726) listscroll_popup_fast_wide_pane

0xd7e5,	// (0x00032ed7) grid_indicator_nsta_pane

0x503c,	// (0x0002a72e) clock_nsta_pane_g1

0x5045,	// (0x0002a737) clock_nsta_pane_t1

0xbece,	// (0x000315c0) cell_indicator_nsta_pane_ParamLimits

0xbece,	// (0x000315c0) cell_indicator_nsta_pane

0x5092,	// (0x0002a784) cell_indicator_nsta_pane_g1

0xbee5,	// (0x000315d7) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0003519e) cell_indicator_nsta_pane_g

0x50ad,	// (0x0002a79f) clock_nsta_pane_cp

0x50b6,	// (0x0002a7a8) indicator_nsta_pane_cp

0x50be,	// (0x0002a7b0) nsta_clock_indic_pane_g1

0xcd1f,	// (0x00032411) grid_indicator_pane

0xd77c,	// (0x00032e6e) scroll_pane_cp29

0x070c,	// (0x00025dfe) indicator_nsta_pane_cp2_ParamLimits

0x070c,	// (0x00025dfe) indicator_nsta_pane_cp2

0xa410,	// (0x0002fb02) main_apps_wheel_pane

0x32a1,	// (0x00028993) form_midp_field_text_pane_ParamLimits

0x33f0,	// (0x00028ae2) scroll_bar_cp050_ParamLimits

0x510e,	// (0x0002a800) cell_indicator_pane_ParamLimits

0x510e,	// (0x0002a800) cell_indicator_pane

0x5126,	// (0x0002a818) cell_indicator_pane_g1

0xbef2,	// (0x000315e4) grid_wheel_folder_pane_ParamLimits

0xbef2,	// (0x000315e4) grid_wheel_folder_pane

0xbf00,	// (0x000315f2) list_wheel_apps_pane_ParamLimits

0xbf00,	// (0x000315f2) list_wheel_apps_pane

0xbf0e,	// (0x00031600) main_apps_wheel_pane_g1_ParamLimits

0xbf0e,	// (0x00031600) main_apps_wheel_pane_g1

0xbf1e,	// (0x00031610) main_apps_wheel_pane_g2_ParamLimits

0xbf1e,	// (0x00031610) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x000351ba) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x000351ba) main_apps_wheel_pane_g

0xbf2e,	// (0x00031620) main_apps_wheel_pane_t1_ParamLimits

0xbf2e,	// (0x00031620) main_apps_wheel_pane_t1

0xbf46,	// (0x00031638) list_wheel_apps_pane_g1

0xbf4e,	// (0x00031640) list_wheel_apps_pane_g2

0xbf56,	// (0x00031648) list_wheel_apps_pane_g3

0xbf5e,	// (0x00031650) list_wheel_apps_pane_g4

0xbf66,	// (0x00031658) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x000351bf) list_wheel_apps_pane_g

0x0a15,	// (0x00026107) navi_icon_text_pane

0xb3f8,	// (0x00030aea) aid_fill_nsta

0xbf83,	// (0x00031675) navi_icon_text_pane_g1

0xbf8f,	// (0x00031681) navi_icon_text_pane_t1

0x08a0,	// (0x00025f92) list_set_graphic_pane_t1_ParamLimits

0x08a0,	// (0x00025f92) list_set_graphic_pane_t1

0x3b55,	// (0x00029247) popup_midp_note_alarm_window_t6_ParamLimits

0x3b55,	// (0x00029247) popup_midp_note_alarm_window_t6

0x3b67,	// (0x00029259) popup_midp_note_alarm_window_t7_ParamLimits

0x3b67,	// (0x00029259) popup_midp_note_alarm_window_t7

0x3b79,	// (0x0002926b) popup_midp_note_alarm_window_t8_ParamLimits

0x3b79,	// (0x0002926b) popup_midp_note_alarm_window_t8

0x3b8b,	// (0x0002927d) popup_midp_note_alarm_window_t9_ParamLimits

0x3b8b,	// (0x0002927d) popup_midp_note_alarm_window_t9

0x3b9d,	// (0x0002928f) popup_midp_note_alarm_window_t10_ParamLimits

0x3b9d,	// (0x0002928f) popup_midp_note_alarm_window_t10

0x3baf,	// (0x000292a1) popup_midp_note_alarm_window_t11_ParamLimits

0x3baf,	// (0x000292a1) popup_midp_note_alarm_window_t11

0x3bc1,	// (0x000292b3) scroll_pane_cp17_ParamLimits

0x3bc1,	// (0x000292b3) scroll_pane_cp17

0x1b40,	// (0x00027232) volume_small_pane_cp_g1

0x1e51,	// (0x00027543) volume_small_pane_cp_g2

0x1e5a,	// (0x0002754c) volume_small_pane_cp_g3

0x1e63,	// (0x00027555) volume_small_pane_cp_g4

0x1e6c,	// (0x0002755e) volume_small_pane_cp_g5

0x1e75,	// (0x00027567) volume_small_pane_cp_g6

0x1e7e,	// (0x00027570) volume_small_pane_cp_g7

0x1e87,	// (0x00027579) volume_small_pane_cp_g8

0x1e90,	// (0x00027582) volume_small_pane_cp_g9

0x1e99,	// (0x0002758b) volume_small_pane_cp_g10

0x0c6b,	// (0x0002635d) midp_ticker_pane_g1_ParamLimits

0x0c77,	// (0x00026369) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00034e4a) midp_ticker_pane_g_ParamLimits

0xaa78,	// (0x0003016a) midp_ticker_pane_t1_ParamLimits

0xb41c,	// (0x00030b0e) aid_fill_nsta_2

0x33dc,	// (0x00028ace) list_form2_midp_pane

0x4545,	// (0x00029c37) midp_editing_number_pane_ParamLimits

0x4554,	// (0x00029c46) midp_ticker_pane_ParamLimits

0x5219,	// (0x0002a90b) form2_midp_field_pane

0x523d,	// (0x0002a92f) scroll_pane_cp51

0x525d,	// (0x0002a94f) form2_midp_button_pane_ParamLimits

0x525d,	// (0x0002a94f) form2_midp_button_pane

0x526f,	// (0x0002a961) form2_midp_content_pane_ParamLimits

0x526f,	// (0x0002a961) form2_midp_content_pane

0x5289,	// (0x0002a97b) form2_midp_field_choice_group_pane

0x5291,	// (0x0002a983) form2_midp_field_pane_g1

0x5299,	// (0x0002a98b) form2_midp_field_pane_g2

0x52a1,	// (0x0002a993) form2_midp_field_pane_g3

0x52a9,	// (0x0002a99b) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x000351e4) form2_midp_field_pane_g

0x52b1,	// (0x0002a9a3) form2_midp_gauge_slider_pane

0x52b9,	// (0x0002a9ab) form2_midp_gauge_wait_pane

0x52c1,	// (0x0002a9b3) form2_midp_image_pane_ParamLimits

0x52c1,	// (0x0002a9b3) form2_midp_image_pane

0x52dc,	// (0x0002a9ce) form2_midp_label_pane_ParamLimits

0x52dc,	// (0x0002a9ce) form2_midp_label_pane

0xbfbd,	// (0x000316af) form2_midp_label_pane_cp_ParamLimits

0xbfbd,	// (0x000316af) form2_midp_label_pane_cp

0x531c,	// (0x0002aa0e) form2_midp_string_pane_ParamLimits

0x531c,	// (0x0002aa0e) form2_midp_string_pane

0xf051,	// (0x00034743) form2_midp_text_pane_ParamLimits

0xf051,	// (0x00034743) form2_midp_text_pane

0x532e,	// (0x0002aa20) form2_midp_time_pane

0x533e,	// (0x0002aa30) input_focus_pane_cp51_ParamLimits

0x533e,	// (0x0002aa30) input_focus_pane_cp51

0x5356,	// (0x0002aa48) form2_midp_label_pane_t1_ParamLimits

0x5356,	// (0x0002aa48) form2_midp_label_pane_t1

0xf072,	// (0x00034764) form2_mdip_text_pane_t1_ParamLimits

0xf072,	// (0x00034764) form2_mdip_text_pane_t1

0xf096,	// (0x00034788) form2_midp_time_pane_t1

0x53a4,	// (0x0002aa96) form2_midp_gauge_slider_pane_t1

0xbfde,	// (0x000316d0) form2_midp_gauge_slider_pane_t2

0xbff0,	// (0x000316e2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x000351ed) form2_midp_gauge_slider_pane_t

0x53da,	// (0x0002aacc) form2_midp_slider_pane

0x53e6,	// (0x0002aad8) form2_midp_gauge_wait_pane_t1

0x53f4,	// (0x0002aae6) form2_midp_wait_pane_ParamLimits

0x53f4,	// (0x0002aae6) form2_midp_wait_pane

0x3107,	// (0x000287f9) list_single_2graphic_pane_cp4_ParamLimits

0x3107,	// (0x000287f9) list_single_2graphic_pane_cp4

0xc002,	// (0x000316f4) list_single_midp_graphic_pane_cp_ParamLimits

0xc002,	// (0x000316f4) list_single_midp_graphic_pane_cp

0xa183,	// (0x0002f875) list_highlight_pane_cp20

0x5438,	// (0x0002ab2a) list_single_2graphic_pane_g1_cp4

0x4a10,	// (0x0002a102) list_single_2graphic_pane_g2_cp4

0x5440,	// (0x0002ab32) list_single_2graphic_pane_t1_cp4

0xa410,	// (0x0002fb02) list_highlight_pane_cp21

0x544f,	// (0x0002ab41) list_single_midp_graphic_pane_g4_cp

0x545e,	// (0x0002ab50) list_single_midp_graphic_pane_t1_cp

0xc023,	// (0x00031715) form2_mdip_string_pane_t1_ParamLimits

0xc023,	// (0x00031715) form2_mdip_string_pane_t1

0xa183,	// (0x0002f875) bg_wml_button_pane_cp2

0xa093,	// (0x0002f785) form2_midp_image_pane_g1

0xeaea,	// (0x000341dc) list_double_large_graphic_pane_g5_ParamLimits

0xeaea,	// (0x000341dc) list_double_large_graphic_pane_g5

0xa9d4,	// (0x000300c6) midp_form_pane_ParamLimits

0xa410,	// (0x0002fb02) main_apps_wheel_pane_ParamLimits

0xb112,	// (0x00030804) popup_preview_window_ParamLimits

0xb112,	// (0x00030804) popup_preview_window

0x16e1,	// (0x00026dd3) popup_touch_info_window_ParamLimits

0x16e1,	// (0x00026dd3) popup_touch_info_window

0x1703,	// (0x00026df5) popup_touch_menu_window_ParamLimits

0x1703,	// (0x00026df5) popup_touch_menu_window

0xa089,	// (0x0002f77b) bg_popup_sub_pane_cp6

0x550f,	// (0x0002ac01) list_touch_menu_pane

0x5517,	// (0x0002ac09) list_single_touch_menu_pane_ParamLimits

0x5517,	// (0x0002ac09) list_single_touch_menu_pane

0x552f,	// (0x0002ac21) list_single_touch_menu_pane_t1

0xa410,	// (0x0002fb02) bg_popup_sub_pane_cp7_ParamLimits

0xa410,	// (0x0002fb02) bg_popup_sub_pane_cp7

0x553d,	// (0x0002ac2f) heading_sub_pane

0x5545,	// (0x0002ac37) list_touch_info_pane_ParamLimits

0x5545,	// (0x0002ac37) list_touch_info_pane

0x5554,	// (0x0002ac46) list_single_touch_info_pane_ParamLimits

0x5554,	// (0x0002ac46) list_single_touch_info_pane

0x5566,	// (0x0002ac58) list_single_touch_info_pane_t1

0x5574,	// (0x0002ac66) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x000351fb) list_single_touch_info_pane_t

0x0b8d,	// (0x0002627f) bg_popup_heading_pane_cp

0x5582,	// (0x0002ac74) heading_sub_pane_t1

0x304e,	// (0x00028740) bg_popup_preview_window_pane_cp_ParamLimits

0x304e,	// (0x00028740) bg_popup_preview_window_pane_cp

0x553d,	// (0x0002ac2f) heading_preview_pane

0x5545,	// (0x0002ac37) list_preview_pane_ParamLimits

0x5545,	// (0x0002ac37) list_preview_pane

0x5590,	// (0x0002ac82) popup_preview_window_g1

0x5554,	// (0x0002ac46) list_single_preview_pane_ParamLimits

0x5554,	// (0x0002ac46) list_single_preview_pane

0x5598,	// (0x0002ac8a) list_single_preview_pane_g1

0x55a0,	// (0x0002ac92) list_single_preview_pane_t1

0x5566,	// (0x0002ac58) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00035200) list_single_preview_pane_t

0x55ae,	// (0x0002aca0) bg_popup_heading_pane_cp2_ParamLimits

0x55ae,	// (0x0002aca0) bg_popup_heading_pane_cp2

0x55c4,	// (0x0002acb6) heading_preview_pane_g1

0x55cc,	// (0x0002acbe) heading_preview_pane_t1_ParamLimits

0x55cc,	// (0x0002acbe) heading_preview_pane_t1

0xcd36,	// (0x00032428) soft_indicator_pane_t1_ParamLimits

0xd294,	// (0x00032986) scroll_pane_ParamLimits

0xd678,	// (0x00032d6a) scroll_sc2_left_pane

0xd681,	// (0x00032d73) scroll_sc2_right_pane

0xd6a0,	// (0x00032d92) scroll_bg_pane_g1_ParamLimits

0xd6b5,	// (0x00032da7) scroll_bg_pane_g2_ParamLimits

0xd6cd,	// (0x00032dbf) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00034dd5) scroll_bg_pane_g_ParamLimits

0xd6a0,	// (0x00032d92) scroll_handle_pane_g1_ParamLimits

0xd6ef,	// (0x00032de1) scroll_handle_pane_g2_ParamLimits

0xd6cd,	// (0x00032dbf) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00034ddc) scroll_handle_pane_g_ParamLimits

0x1141,	// (0x00026833) popup_choice_list_window_ParamLimits

0x1141,	// (0x00026833) popup_choice_list_window

0x2f24,	// (0x00028616) choice_list_pane

0x2fa6,	// (0x00028698) cell_toolbar_pane_t1

0x2fce,	// (0x000286c0) toolbar_button_pane_ParamLimits

0x408b,	// (0x0002977d) ai_gene_pane_1_t2_ParamLimits

0x408b,	// (0x0002977d) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00034fff) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00034fff) ai_gene_pane_1_t

0x55e9,	// (0x0002acdb) scroll_sc2_left_pane_g1

0x55e9,	// (0x0002acdb) scroll_sc2_right_pane_g1

0x10e3,	// (0x000267d5) bg_popup_sub_pane_cp10

0x55f3,	// (0x0002ace5) list_choice_list_pane

0x45f0,	// (0x00029ce2) list_single_choice_list_pane_ParamLimits

0x45f0,	// (0x00029ce2) list_single_choice_list_pane

0x560c,	// (0x0002acfe) list_single_choice_list_pane_g1

0xd46f,	// (0x00032b61) list_single_choice_list_pane_t1_ParamLimits

0xd46f,	// (0x00032b61) list_single_choice_list_pane_t1

0x5614,	// (0x0002ad06) choice_list_pane_g1

0x561c,	// (0x0002ad0e) choice_list_pane_t1

0xa089,	// (0x0002f77b) input_focus_pane_cp11

0xd5ed,	// (0x00032cdf) title_pane_stacon_g2_ParamLimits

0xd5ed,	// (0x00032cdf) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00034dbb) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00034dbb) title_pane_stacon_g

0x0b8d,	// (0x0002627f) cursor_press_pane

0xad8f,	// (0x00030481) popup_fep_hwr_window_ParamLimits

0xad8f,	// (0x00030481) popup_fep_hwr_window

0x1285,	// (0x00026977) popup_fep_vkb_window_ParamLimits

0x1285,	// (0x00026977) popup_fep_vkb_window

0x562a,	// (0x0002ad1c) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00035229) fep_vkb_side_pane_g_ParamLimits

0x1edb,	// (0x000275cd) fep_hwr_candidate_pane_ParamLimits

0x1edb,	// (0x000275cd) fep_hwr_candidate_pane

0x1f05,	// (0x000275f7) fep_hwr_side_pane_ParamLimits

0x1f05,	// (0x000275f7) fep_hwr_side_pane

0x1f27,	// (0x00027619) fep_hwr_top_pane_ParamLimits

0x1f27,	// (0x00027619) fep_hwr_top_pane

0x1f3f,	// (0x00027631) fep_hwr_write_pane_ParamLimits

0x1f3f,	// (0x00027631) fep_hwr_write_pane

0xfb37,	// (0x00035229) fep_vkb_side_pane_g

0x5632,	// (0x0002ad24) fep_hwr_top_pane_g1

0x5644,	// (0x0002ad36) fep_hwr_top_pane_g2

0x1f6b,	// (0x0002765d) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00035205) fep_hwr_top_pane_g

0x1f80,	// (0x00027672) fep_hwr_top_text_pane

0x036a,	// (0x00025a5c) fep_hwr_top_text_pane_g1

0x567a,	// (0x0002ad6c) fep_hwr_top_text_pane_t1

0x208a,	// (0x0002777c) fep_hwr_candidate_pane_g1

0x58c5,	// (0x0002afb7) fep_vkb_keypad_pane_g3_ParamLimits

0x58c5,	// (0x0002afb7) fep_vkb_keypad_pane_g3

0x58f1,	// (0x0002afe3) fep_vkb_keypad_pane_g4_ParamLimits

0x58f1,	// (0x0002afe3) fep_vkb_keypad_pane_g4

0x5968,	// (0x0002b05a) fep_vkb_bottom_pane_g2_ParamLimits

0x5968,	// (0x0002b05a) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00035230) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00035230) fep_vkb_bottom_pane_g

0x55e9,	// (0x0002acdb) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0003523a) cell_vkb_side_pane_g

0x59f3,	// (0x0002b0e5) cell_vkb_side_pane_t1

0x5a01,	// (0x0002b0f3) cell_vkb_side_pane_t1_copy1

0x55e9,	// (0x0002acdb) bg_fep_vkb_candidate_pane_g2

0x5b45,	// (0x0002b237) cell_vkb_candidate_pane_ParamLimits

0x5688,	// (0x0002ad7a) aid_size_cell_vkb_ParamLimits

0x5688,	// (0x0002ad7a) aid_size_cell_vkb

0x5b45,	// (0x0002b237) cell_vkb_candidate_pane

0x20a4,	// (0x00027796) bg_popup_fep_shadow_pane_g1

0xc134,	// (0x00031826) fep_vkb_bottom_pane_ParamLimits

0xc134,	// (0x00031826) fep_vkb_bottom_pane

0x5757,	// (0x0002ae49) fep_vkb_candidate_pane_ParamLimits

0x5757,	// (0x0002ae49) fep_vkb_candidate_pane

0xc160,	// (0x00031852) fep_vkb_keypad_pane_ParamLimits

0xc160,	// (0x00031852) fep_vkb_keypad_pane

0xc187,	// (0x00031879) fep_vkb_side_pane_ParamLimits

0xc187,	// (0x00031879) fep_vkb_side_pane

0xc1c3,	// (0x000318b5) fep_vkb_top_pane_ParamLimits

0xc1c3,	// (0x000318b5) fep_vkb_top_pane

0x581e,	// (0x0002af10) fep_vkb_top_pane_g1_ParamLimits

0x581e,	// (0x0002af10) fep_vkb_top_pane_g1

0x582d,	// (0x0002af1f) fep_vkb_top_pane_g2_ParamLimits

0x582d,	// (0x0002af1f) fep_vkb_top_pane_g2

0x583c,	// (0x0002af2e) fep_vkb_top_pane_g3_ParamLimits

0x583c,	// (0x0002af2e) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00035220) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00035220) fep_vkb_top_pane_g

0x585a,	// (0x0002af4c) fep_vkb_top_text_pane_ParamLimits

0x585a,	// (0x0002af4c) fep_vkb_top_text_pane

0xc1ff,	// (0x000318f1) fep_vkb_side_pane_g1_ParamLimits

0xc1ff,	// (0x000318f1) fep_vkb_side_pane_g1

0x58b4,	// (0x0002afa6) grid_vkb_side_pane_ParamLimits

0x58b4,	// (0x0002afa6) grid_vkb_side_pane

0x20ac,	// (0x0002779e) bg_popup_fep_shadow_pane_g2

0x20b5,	// (0x000277a7) bg_popup_fep_shadow_pane_g3

0x20bd,	// (0x000277af) bg_popup_fep_shadow_pane_g4

0x20c6,	// (0x000277b8) bg_popup_fep_shadow_pane_g5

0x20d0,	// (0x000277c2) bg_popup_fep_shadow_pane_g6

0x20d8,	// (0x000277ca) bg_popup_fep_shadow_pane_g7

0xd399,	// (0x00032a8b) bg_popup_fep_shadow_pane_g8

0x5913,	// (0x0002b005) grid_vkb_keypad_number_pane_ParamLimits

0x5913,	// (0x0002b005) grid_vkb_keypad_number_pane

0x5927,	// (0x0002b019) grid_vkb_keypad_pane_ParamLimits

0x5927,	// (0x0002b019) grid_vkb_keypad_pane

0x594d,	// (0x0002b03f) fep_vkb_bottom_pane_g1_ParamLimits

0x594d,	// (0x0002b03f) fep_vkb_bottom_pane_g1

0x5976,	// (0x0002b068) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5976,	// (0x0002b068) grid_vkb_keypad_bottom_left_pane

0x598b,	// (0x0002b07d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x598b,	// (0x0002b07d) grid_vkb_keypad_bottom_right_pane

0x59a0,	// (0x0002b092) fep_vkb_top_text_pane_g1

0xc246,	// (0x00031938) fep_vkb_top_text_pane_t1

0xc258,	// (0x0003194a) cell_vkb_side_pane_ParamLimits

0xc258,	// (0x0003194a) cell_vkb_side_pane

0x55e9,	// (0x0002acdb) cell_vkb_side_pane_g1

0x5a0f,	// (0x0002b101) cell_vkb_keypad_pane_ParamLimits

0x5a0f,	// (0x0002b101) cell_vkb_keypad_pane

0x5a9c,	// (0x0002b18e) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0003524d) bg_popup_fep_shadow_pane_g

0x55e9,	// (0x0002acdb) cell_hwr_side_pane_g1

0x55e9,	// (0x0002acdb) cell_hwr_side_pane_g2

0x5aa6,	// (0x0002b198) cell_vkb_keypad_pane_t1

0xc26e,	// (0x00031960) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc26e,	// (0x00031960) cell_vkb_keypad_bottom_left_pane

0xc283,	// (0x00031975) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc283,	// (0x00031975) cell_vkb_keypad_bottom_right_pane

0x55e9,	// (0x0002acdb) cell_vkb_keypad_bottom_left_pane_g1

0x55e9,	// (0x0002acdb) cell_vkb_keypad_bottom_right_pane_g1

0x5b0a,	// (0x0002b1fc) cell_vkb_keypad_number_pane_ParamLimits

0x5b0a,	// (0x0002b1fc) cell_vkb_keypad_number_pane

0x5b29,	// (0x0002b21b) cell_vkb_keypad_number_pane_g1

0x5b33,	// (0x0002b225) cell_vkb_keypad_number_pane_g2

0x5b3c,	// (0x0002b22e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0003523f) cell_vkb_keypad_number_pane_g

0x5aa6,	// (0x0002b198) cell_vkb_keypad_number_pane_t1

0x5b66,	// (0x0002b258) fep_vkb_candidate_pane_g1

0x0001,

0xfb48,	// (0x0003523a) cell_hwr_side_pane_g

0x5b7f,	// (0x0002b271) cell_hwr_side_pane_t1

0x20ea,	// (0x000277dc) cell_hwr_side_pane_t1_copy1

0x584c,	// (0x0002af3e) cell_hwr_candidate_pane_g1

0x20f8,	// (0x000277ea) cell_hwr_candidate_pane_t1

0x55e9,	// (0x0002acdb) cell_vkb_candidate_pane_g2

0x5bc3,	// (0x0002b2b5) cell_vkb_candidate_pane_t1

0x1ea2,	// (0x00027594) bg_popup_fep_shadow_pane_ParamLimits

0x1ea2,	// (0x00027594) bg_popup_fep_shadow_pane

0xc0ad,	// (0x0003179f) bg_fep_hwr_top_pane_g4

0x5656,	// (0x0002ad48) bg_hwr_side_pane_g1_ParamLimits

0x5656,	// (0x0002ad48) bg_hwr_side_pane_g1

0xc0d3,	// (0x000317c5) cell_hwr_side_pane_ParamLimits

0xc0d3,	// (0x000317c5) cell_hwr_side_pane

0x1ffb,	// (0x000276ed) fep_hwr_write_pane_g1_ParamLimits

0x1ffb,	// (0x000276ed) fep_hwr_write_pane_g1

0x2008,	// (0x000276fa) fep_hwr_write_pane_g2_ParamLimits

0x2008,	// (0x000276fa) fep_hwr_write_pane_g2

0x2015,	// (0x00027707) fep_hwr_write_pane_g3_ParamLimits

0x2015,	// (0x00027707) fep_hwr_write_pane_g3

0xc0f3,	// (0x000317e5) fep_hwr_write_pane_g4_ParamLimits

0xc0f3,	// (0x000317e5) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0003520c) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0003520c) fep_hwr_write_pane_g

0xc0ad,	// (0x0003179f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc0ad,	// (0x0003179f) bg_fep_hwr_candidate_pane_g2

0x2038,	// (0x0002772a) cell_hwr_candidate_pane_ParamLimits

0x2038,	// (0x0002772a) cell_hwr_candidate_pane

0x208a,	// (0x0002777c) fep_hwr_candidate_pane_g1_ParamLimits

0x56b6,	// (0x0002ada8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x56b6,	// (0x0002ada8) bg_popup_fep_shadow_pane_cp2

0x584c,	// (0x0002af3e) fep_vkb_top_pane_g4_ParamLimits

0x584c,	// (0x0002af3e) fep_vkb_top_pane_g4

0x5892,	// (0x0002af84) fep_vkb_side_pane_g2_ParamLimits

0x5892,	// (0x0002af84) fep_vkb_side_pane_g2

0x9b38,	// (0x0002f22a) list_setting_pane_t4_ParamLimits

0x9b38,	// (0x0002f22a) list_setting_pane_t4

0x9bd4,	// (0x0002f2c6) list_setting_number_pane_t5_ParamLimits

0x9bd4,	// (0x0002f2c6) list_setting_number_pane_t5

0x03c0,	// (0x00025ab2) list_double_heading_pane_cp2_ParamLimits

0x03c0,	// (0x00025ab2) list_double_heading_pane_cp2

0x5bd1,	// (0x0002b2c3) list_double_heading_pane_g1_cp2_ParamLimits

0x5bd1,	// (0x0002b2c3) list_double_heading_pane_g1_cp2

0x5bdd,	// (0x0002b2cf) list_double_heading_pane_g2_cp2_ParamLimits

0x5bdd,	// (0x0002b2cf) list_double_heading_pane_g2_cp2

0x5bf1,	// (0x0002b2e3) list_double_heading_pane_t1_cp2_ParamLimits

0x5bf1,	// (0x0002b2e3) list_double_heading_pane_t1_cp2

0x5c07,	// (0x0002b2f9) list_double_heading_pane_t2_cp2_ParamLimits

0x5c07,	// (0x0002b2f9) list_double_heading_pane_t2_cp2

0xa071,	// (0x0002f763) aid_value_unit2

0xf2a5,	// (0x00034997) popup_preview_fixed_window

0xce16,	// (0x00032508) bg_popup_preview_window_pane_cp02

0x5c19,	// (0x0002b30b) list_preview_fixed_pane

0x5c5f,	// (0x0002b351) list_empty_pane_fp_ParamLimits

0x5c5f,	// (0x0002b351) list_empty_pane_fp

0x5c5f,	// (0x0002b351) list_single_cale_day_pane_fp_ParamLimits

0x5c5f,	// (0x0002b351) list_single_cale_day_pane_fp

0x5c5f,	// (0x0002b351) list_single_graphic_heading_pane_fp_ParamLimits

0x5c5f,	// (0x0002b351) list_single_graphic_heading_pane_fp

0x5c5f,	// (0x0002b351) list_single_graphic_pane_fp_ParamLimits

0x5c5f,	// (0x0002b351) list_single_graphic_pane_fp

0x5c5f,	// (0x0002b351) list_single_heading_pane_fp_ParamLimits

0x5c5f,	// (0x0002b351) list_single_heading_pane_fp

0x5c5f,	// (0x0002b351) list_single_pane_fp_ParamLimits

0x5c5f,	// (0x0002b351) list_single_pane_fp

0x5c78,	// (0x0002b36a) list_single_pane_fp_g1_ParamLimits

0x5c78,	// (0x0002b36a) list_single_pane_fp_g1

0xf0a9,	// (0x0003479b) list_single_pane_fp_g2_ParamLimits

0xf0a9,	// (0x0003479b) list_single_pane_fp_g2

0xf0b5,	// (0x000347a7) list_single_pane_fp_g3_ParamLimits

0xf0b5,	// (0x000347a7) list_single_pane_fp_g3

0x5c84,	// (0x0002b376) list_single_pane_fp_g4_ParamLimits

0x5c84,	// (0x0002b376) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0003526e) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003526e) list_single_pane_fp_g

0xf0c9,	// (0x000347bb) list_single_pane_fp_t1_ParamLimits

0xf0c9,	// (0x000347bb) list_single_pane_fp_t1

0xf2af,	// (0x000349a1) list_single_graphic_pane_fp_g1_ParamLimits

0xf2af,	// (0x000349a1) list_single_graphic_pane_fp_g1

0x5c78,	// (0x0002b36a) list_single_graphic_pane_fp_g2_ParamLimits

0x5c78,	// (0x0002b36a) list_single_graphic_pane_fp_g2

0xf0a9,	// (0x0003479b) list_single_graphic_pane_fp_g3_ParamLimits

0xf0a9,	// (0x0003479b) list_single_graphic_pane_fp_g3

0xf0b5,	// (0x000347a7) list_single_graphic_pane_fp_g4_ParamLimits

0xf0b5,	// (0x000347a7) list_single_graphic_pane_fp_g4

0x5c84,	// (0x0002b376) list_single_graphic_pane_fp_g5_ParamLimits

0x5c84,	// (0x0002b376) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x00035277) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x00035277) list_single_graphic_pane_fp_g

0xf2bb,	// (0x000349ad) list_single_graphic_pane_fp_t1_ParamLimits

0xf2bb,	// (0x000349ad) list_single_graphic_pane_fp_t1

0xf2af,	// (0x000349a1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf2af,	// (0x000349a1) list_single_graphic_heading_pane_fp_g1

0x5c78,	// (0x0002b36a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5c78,	// (0x0002b36a) list_single_graphic_heading_pane_fp_g2

0xf0a9,	// (0x0003479b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf0a9,	// (0x0003479b) list_single_graphic_heading_pane_fp_g3

0xf0b5,	// (0x000347a7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf0b5,	// (0x000347a7) list_single_graphic_heading_pane_fp_g4

0x5c84,	// (0x0002b376) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5c84,	// (0x0002b376) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00035277) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00035277) list_single_graphic_heading_pane_fp_g

0xf2d1,	// (0x000349c3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf2d1,	// (0x000349c3) list_single_graphic_heading_pane_fp_t1

0xf2e7,	// (0x000349d9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf2e7,	// (0x000349d9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00035282) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00035282) list_single_graphic_heading_pane_fp_t

0xf2f9,	// (0x000349eb) list_single_cale_day_pane_fp_g1_ParamLimits

0xf2f9,	// (0x000349eb) list_single_cale_day_pane_fp_g1

0x5c90,	// (0x0002b382) list_single_cale_day_pane_fp_g2_ParamLimits

0x5c90,	// (0x0002b382) list_single_cale_day_pane_fp_g2

0xf331,	// (0x00034a23) list_single_cale_day_pane_fp_g3_ParamLimits

0xf331,	// (0x00034a23) list_single_cale_day_pane_fp_g3

0xf359,	// (0x00034a4b) list_single_cale_day_pane_fp_g4_ParamLimits

0xf359,	// (0x00034a4b) list_single_cale_day_pane_fp_g4

0xf37d,	// (0x00034a6f) list_single_cale_day_pane_fp_g5_ParamLimits

0xf37d,	// (0x00034a6f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x00035287) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x00035287) list_single_cale_day_pane_fp_g

0xf3a1,	// (0x00034a93) list_single_cale_day_pane_fp_t1_ParamLimits

0xf3a1,	// (0x00034a93) list_single_cale_day_pane_fp_t1

0xf3c7,	// (0x00034ab9) list_single_cale_day_pane_fp_t2_ParamLimits

0xf3c7,	// (0x00034ab9) list_single_cale_day_pane_fp_t2

0xf3e0,	// (0x00034ad2) list_single_cale_day_pane_fp_t3_ParamLimits

0xf3e0,	// (0x00034ad2) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x00035292) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x00035292) list_single_cale_day_pane_fp_t

0x5c78,	// (0x0002b36a) list_empty_pane_fp_g1_ParamLimits

0x5c78,	// (0x0002b36a) list_empty_pane_fp_g1

0xf3f9,	// (0x00034aeb) list_empty_pane_fp_t1

0xf407,	// (0x00034af9) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x00035299) list_empty_pane_fp_t

0x5c78,	// (0x0002b36a) list_single_heading_pane_fp_g1_ParamLimits

0x5c78,	// (0x0002b36a) list_single_heading_pane_fp_g1

0xf0a9,	// (0x0003479b) list_single_heading_pane_fp_g2_ParamLimits

0xf0a9,	// (0x0003479b) list_single_heading_pane_fp_g2

0xf0b5,	// (0x000347a7) list_single_heading_pane_fp_g3_ParamLimits

0xf0b5,	// (0x000347a7) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0003529e) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0003529e) list_single_heading_pane_fp_g

0xf415,	// (0x00034b07) list_single_heading_pane_fp_t1_ParamLimits

0xf415,	// (0x00034b07) list_single_heading_pane_fp_t1

0xf427,	// (0x00034b19) list_single_heading_pane_fp_t2_ParamLimits

0xf427,	// (0x00034b19) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x000352a5) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x000352a5) list_single_heading_pane_fp_t

0xd484,	// (0x00032b76) aid_size_cell_fast

0xcdf9,	// (0x000324eb) soft_indicator_pane_cp1_t1

0xd4c1,	// (0x00032bb3) cell_app_pane_cp2_ParamLimits

0xd4c1,	// (0x00032bb3) cell_app_pane_cp2

0x1ec4,	// (0x000275b6) fep_hwr_candidate_drop_down_list_pane

0xc108,	// (0x000317fa) fep_hwr_candidate_pane_g3_ParamLimits

0xc108,	// (0x000317fa) fep_hwr_candidate_pane_g3

0xc115,	// (0x00031807) fep_hwr_candidate_pane_g4_ParamLimits

0xc115,	// (0x00031807) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00035219) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00035219) fep_hwr_candidate_pane_g

0x5746,	// (0x0002ae38) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5746,	// (0x0002ae38) fep_vkb_candidate_drop_down_list_pane

0x5b6e,	// (0x0002b260) fep_vkb_candidate_pane_g3

0x5b76,	// (0x0002b268) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00035246) fep_vkb_candidate_pane_g

0x584c,	// (0x0002af3e) cell_hwr_candidate_pane_g1_ParamLimits

0x5c9c,	// (0x0002b38e) cell_hwr_candidate_pane_g3_ParamLimits

0x5c9c,	// (0x0002b38e) cell_hwr_candidate_pane_g3

0x5cbd,	// (0x0002b3af) cell_hwr_candidate_pane_g4_ParamLimits

0x5cbd,	// (0x0002b3af) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x00035260) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x00035260) cell_hwr_candidate_pane_g

0x5b8d,	// (0x0002b27f) cell_vkb_candidate_pane_g3_ParamLimits

0x5b8d,	// (0x0002b27f) cell_vkb_candidate_pane_g3

0x5ba8,	// (0x0002b29a) cell_vkb_candidate_pane_g4_ParamLimits

0x5ba8,	// (0x0002b29a) cell_vkb_candidate_pane_g4

0x5cde,	// (0x0002b3d0) cell_app_pane_cp2_g1_ParamLimits

0x5cde,	// (0x0002b3d0) cell_app_pane_cp2_g1

0x5cfc,	// (0x0002b3ee) cell_app_pane_cp2_g2_ParamLimits

0x5cfc,	// (0x0002b3ee) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x000352aa) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x000352aa) cell_app_pane_cp2_g

0x5d08,	// (0x0002b3fa) cell_app_pane_cp2_t1_ParamLimits

0x5d08,	// (0x0002b3fa) cell_app_pane_cp2_t1

0xd321,	// (0x00032a13) grid_highlight_pane_cp1_ParamLimits

0xd321,	// (0x00032a13) grid_highlight_pane_cp1

0x2116,	// (0x00027808) cell_hwr_candidate_pane_cp1_ParamLimits

0x2116,	// (0x00027808) cell_hwr_candidate_pane_cp1

0x584c,	// (0x0002af3e) fep_hwr_candidate_drop_down_list_pane_g1

0x5d1a,	// (0x0002b40c) fep_hwr_candidate_drop_down_list_pane_g2

0x5d27,	// (0x0002b419) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x000352af) fep_hwr_candidate_drop_down_list_pane_g

0x213a,	// (0x0002782c) fep_hwr_candidate_drop_down_list_scroll_pane

0x2143,	// (0x00027835) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2143,	// (0x00027835) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2150,	// (0x00027842) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2150,	// (0x00027842) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x215d,	// (0x0002784f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x215d,	// (0x0002784f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5b8d,	// (0x0002b27f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5b8d,	// (0x0002b27f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5ba8,	// (0x0002b29a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5ba8,	// (0x0002b29a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x216a,	// (0x0002785c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x216a,	// (0x0002785c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2185,	// (0x00027877) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2185,	// (0x00027877) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x21a0,	// (0x00027892) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x21a0,	// (0x00027892) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x000352b6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x000352b6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5d34,	// (0x0002b426) cell_vkb_candidate_pane_cp1_ParamLimits

0x5d34,	// (0x0002b426) cell_vkb_candidate_pane_cp1

0x584c,	// (0x0002af3e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x584c,	// (0x0002af3e) fep_vkb_candidate_drop_down_list_pane_g1

0x5d1a,	// (0x0002b40c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5d1a,	// (0x0002b40c) fep_vkb_candidate_drop_down_list_pane_g2

0x5d27,	// (0x0002b419) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5d27,	// (0x0002b419) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x000352af) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x000352af) fep_vkb_candidate_drop_down_list_pane_g

0x5d5a,	// (0x0002b44c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5d5a,	// (0x0002b44c) fep_vkb_candidate_drop_down_list_scroll_pane

0x5d67,	// (0x0002b459) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5d67,	// (0x0002b459) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5d74,	// (0x0002b466) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5d74,	// (0x0002b466) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5d80,	// (0x0002b472) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5d80,	// (0x0002b472) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5c9c,	// (0x0002b38e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5c9c,	// (0x0002b38e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5cbd,	// (0x0002b3af) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5cbd,	// (0x0002b3af) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5d8c,	// (0x0002b47e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5d8c,	// (0x0002b47e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5dad,	// (0x0002b49f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5dad,	// (0x0002b49f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5dce,	// (0x0002b4c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5dce,	// (0x0002b4c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x000352c7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x000352c7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa2bb,	// (0x0002f9ad) title_pane_g1_ParamLimits

0xa2ce,	// (0x0002f9c0) title_pane_g2_ParamLimits

0xf54e,	// (0x00034c40) title_pane_g_ParamLimits

0x035a,	// (0x00025a4c) aid_call2_pane

0x0362,	// (0x00025a54) aid_call_pane

0x036a,	// (0x00025a5c) popup_clock_analogue_window_g1

0x036a,	// (0x00025a5c) popup_clock_analogue_window_g2

0x0372,	// (0x00025a64) popup_clock_analogue_window_g3

0x037b,	// (0x00025a6d) popup_clock_analogue_window_g4

0xa093,	// (0x0002f785) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00034dea) popup_clock_analogue_window_g

0x0383,	// (0x00025a75) popup_clock_analogue_window_t1

0x0413,	// (0x00025b05) clock_digital_number_pane_ParamLimits

0x0413,	// (0x00025b05) clock_digital_number_pane

0x041f,	// (0x00025b11) clock_digital_number_pane_cp02_ParamLimits

0x041f,	// (0x00025b11) clock_digital_number_pane_cp02

0x042b,	// (0x00025b1d) clock_digital_number_pane_cp03_ParamLimits

0x042b,	// (0x00025b1d) clock_digital_number_pane_cp03

0x0437,	// (0x00025b29) clock_digital_number_pane_cp04_ParamLimits

0x0437,	// (0x00025b29) clock_digital_number_pane_cp04

0x0443,	// (0x00025b35) clock_digital_separator_pane_ParamLimits

0x0443,	// (0x00025b35) clock_digital_separator_pane

0x044f,	// (0x00025b41) popup_clock_digital_window_t1_ParamLimits

0x044f,	// (0x00025b41) popup_clock_digital_window_t1

0xa093,	// (0x0002f785) clock_digital_number_pane_g1

0xa093,	// (0x0002f785) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00034df5) clock_digital_number_pane_g

0xa093,	// (0x0002f785) clock_digital_separator_pane_g1

0xa093,	// (0x0002f785) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00034df5) clock_digital_separator_pane_g

0xb3f8,	// (0x00030aea) aid_fill_nsta_ParamLimits

0xb530,	// (0x00030c22) indicator_nsta_pane_ParamLimits

0x2dbd,	// (0x000284af) popup_clock_analogue_window

0x2dbd,	// (0x000284af) popup_clock_digital_window

0xd7e5,	// (0x00032ed7) grid_indicator_nsta_pane_ParamLimits

0x5053,	// (0x0002a745) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00035199) clock_nsta_pane_t

0x02c3,	// (0x000259b5) aid_size_max_handle

0xa865,	// (0x0002ff57) aid_size_min_handle

0x0b8d,	// (0x0002627f) editor_scroll_pane

0x5de9,	// (0x0002b4db) ex_editor_pane

0xd44a,	// (0x00032b3c) scroll_pane_cp13

0xd2c0,	// (0x000329b2) scroll_pane_cp14

0x03b8,	// (0x00025aaa) scroll_pane_cp36

0xa8f2,	// (0x0002ffe4) list_single_graphic_hl_pane_cp2_ParamLimits

0xa8f2,	// (0x0002ffe4) list_single_graphic_hl_pane_cp2

0xbd42,	// (0x00031434) list_single_graphic_hl_pane_ParamLimits

0xbd42,	// (0x00031434) list_single_graphic_hl_pane

0xf43d,	// (0x00034b2f) aid_size_min_hl_cp1

0x5df1,	// (0x0002b4e3) list_highlight_pane_cp34_ParamLimits

0x5df1,	// (0x0002b4e3) list_highlight_pane_cp34

0x5e02,	// (0x0002b4f4) list_single_graphic_hl_pane_g1_ParamLimits

0x5e02,	// (0x0002b4f4) list_single_graphic_hl_pane_g1

0x9e88,	// (0x0002f57a) list_single_graphic_hl_pane_g2_ParamLimits

0x9e88,	// (0x0002f57a) list_single_graphic_hl_pane_g2

0x9e88,	// (0x0002f57a) list_single_graphic_hl_pane_g3_ParamLimits

0x9e88,	// (0x0002f57a) list_single_graphic_hl_pane_g3

0xf0e0,	// (0x000347d2) list_single_graphic_hl_pane_g4_ParamLimits

0xf0e0,	// (0x000347d2) list_single_graphic_hl_pane_g4

0x9e94,	// (0x0002f586) list_single_graphic_hl_pane_g5_ParamLimits

0x9e94,	// (0x0002f586) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x000352d8) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x000352d8) list_single_graphic_hl_pane_g

0x9ea8,	// (0x0002f59a) list_single_graphic_hl_pane_t1_ParamLimits

0x9ea8,	// (0x0002f59a) list_single_graphic_hl_pane_t1

0x5e0f,	// (0x0002b501) aid_size_min_hl_cp2

0x5e18,	// (0x0002b50a) list_highlight_pane_cp34_cp2_ParamLimits

0x5e18,	// (0x0002b50a) list_highlight_pane_cp34_cp2

0x5e02,	// (0x0002b4f4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5e02,	// (0x0002b4f4) list_single_graphic_hl_pane_g1_cp2

0x5e25,	// (0x0002b517) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5e25,	// (0x0002b517) list_single_graphic_hl_pane_g2_cp2

0x5e31,	// (0x0002b523) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5e31,	// (0x0002b523) list_single_graphic_hl_pane_g3_cp2

0x5e3f,	// (0x0002b531) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5e3f,	// (0x0002b531) list_single_graphic_hl_pane_g4_cp2

0x5e4b,	// (0x0002b53d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5e4b,	// (0x0002b53d) list_single_graphic_hl_pane_g5_cp2

0xab8d,	// (0x0003027f) control_pane_g4_ParamLimits

0xab8d,	// (0x0003027f) control_pane_g4

0x10e3,	// (0x000267d5) bg_popup_sub_pane_cp10_ParamLimits

0x55f3,	// (0x0002ace5) list_choice_list_pane_ParamLimits

0x5602,	// (0x0002acf4) scroll_pane_cp23

0xce16,	// (0x00032508) bg_popup_preview_window_pane_cp02_ParamLimits

0x5c19,	// (0x0002b30b) list_preview_fixed_pane_ParamLimits

0x5c2f,	// (0x0002b321) list_preview_fixed_pane_cp_ParamLimits

0x5c2f,	// (0x0002b321) list_preview_fixed_pane_cp

0x5c3b,	// (0x0002b32d) popup_preview_fixed_window_g1_ParamLimits

0x5c3b,	// (0x0002b32d) popup_preview_fixed_window_g1

0x5c47,	// (0x0002b339) popup_preview_fixed_window_g2_ParamLimits

0x5c47,	// (0x0002b339) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x00035267) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x00035267) popup_preview_fixed_window_g

0x0199,	// (0x0002588b) aid_navi_side_left_pane_ParamLimits

0x01ae,	// (0x000258a0) aid_navi_side_right_pane_ParamLimits

0x01c6,	// (0x000258b8) navi_icon_pane_stacon_ParamLimits

0x01da,	// (0x000258cc) navi_navi_pane_stacon_ParamLimits

0x01c6,	// (0x000258b8) navi_text_pane_stacon_ParamLimits

0xa089,	// (0x0002f77b) main_text_info_pane

0x5e75,	// (0x0002b567) listscroll_text_info_pane

0x5e7d,	// (0x0002b56f) list_text_info_pane_ParamLimits

0x5e7d,	// (0x0002b56f) list_text_info_pane

0x5e8c,	// (0x0002b57e) scroll_pane_cp24_ParamLimits

0x5e8c,	// (0x0002b57e) scroll_pane_cp24

0xc29e,	// (0x00031990) list_text_info_pane_t1_ParamLimits

0xc29e,	// (0x00031990) list_text_info_pane_t1

0xacf3,	// (0x000303e5) popup_fast_swap2_window_ParamLimits

0xacf3,	// (0x000303e5) popup_fast_swap2_window

0x5ecf,	// (0x0002b5c1) aid_size_cell_fast2

0xa089,	// (0x0002f77b) bg_popup_window_pane_cp17

0x3410,	// (0x00028b02) heading_pane_cp2

0xd045,	// (0x00032737) listscroll_fast2_pane

0x5ed9,	// (0x0002b5cb) grid_fast2_pane

0x5ee3,	// (0x0002b5d5) listscroll_fast2_pane_g1

0x5eed,	// (0x0002b5df) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x000352e3) listscroll_fast2_pane_g

0xd44a,	// (0x00032b3c) scroll_pane_cp26

0x5ef7,	// (0x0002b5e9) cell_fast2_pane_ParamLimits

0x5ef7,	// (0x0002b5e9) cell_fast2_pane

0x5f0e,	// (0x0002b600) cell_fast2_pane_g1

0x5f17,	// (0x0002b609) cell_fast2_pane_g2

0x5f20,	// (0x0002b612) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x000352e8) cell_fast2_pane_g

0xd087,	// (0x00032779) grid_highlight_pane_cp9

0xd09c,	// (0x0003278e) main_eswt_pane_ParamLimits

0xd09c,	// (0x0003278e) main_eswt_pane

0x5ea1,	// (0x0002b593) list_single_text_info_pane

0x5f28,	// (0x0002b61a) eswt_ctrl_button_pane

0x5f28,	// (0x0002b61a) eswt_ctrl_canvas_pane

0x5f30,	// (0x0002b622) eswt_ctrl_combo_pane

0x5f28,	// (0x0002b61a) eswt_ctrl_default_pane

0x5f28,	// (0x0002b61a) eswt_ctrl_label_pane

0x5f38,	// (0x0002b62a) eswt_ctrl_wait_pane

0x5f40,	// (0x0002b632) eswt_shell_pane

0xa089,	// (0x0002f77b) listscroll_eswt_app_pane

0x5f60,	// (0x0002b652) popup_eswt_tasktip_window_ParamLimits

0x5f60,	// (0x0002b652) popup_eswt_tasktip_window

0x304e,	// (0x00028740) bg_popup_window_pane_cp18

0x5f71,	// (0x0002b663) eswt_control_pane_g1_ParamLimits

0x5f71,	// (0x0002b663) eswt_control_pane_g1

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_ParamLimits

0x5f7e,	// (0x0002b670) eswt_control_pane_g2

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_ParamLimits

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_ParamLimits

0x5f98,	// (0x0002b68a) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x000352ef) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x000352ef) eswt_control_pane_g

0xd321,	// (0x00032a13) bg_button_pane_ParamLimits

0xd321,	// (0x00032a13) bg_button_pane

0xd09c,	// (0x0003278e) common_borders_pane_copy2_ParamLimits

0xd09c,	// (0x0003278e) common_borders_pane_copy2

0x5fa5,	// (0x0002b697) control_button_pane_g1_ParamLimits

0x5fa5,	// (0x0002b697) control_button_pane_g1

0x5fb1,	// (0x0002b6a3) control_button_pane_g2_ParamLimits

0x5fb1,	// (0x0002b6a3) control_button_pane_g2

0x5fbd,	// (0x0002b6af) control_button_pane_g3_ParamLimits

0x5fbd,	// (0x0002b6af) control_button_pane_g3

0x0002,

0xfc06,	// (0x000352f8) control_button_pane_g_ParamLimits

0xfc06,	// (0x000352f8) control_button_pane_g

0x5fd1,	// (0x0002b6c3) control_button_pane_t1

0x5fdf,	// (0x0002b6d1) control_button_pane_t2

0x0001,

0xfc0d,	// (0x000352ff) control_button_pane_t

0x2fda,	// (0x000286cc) bg_button_pane_g1

0x2fe2,	// (0x000286d4) bg_button_pane_g2

0x2fea,	// (0x000286dc) bg_button_pane_g3

0x2ff2,	// (0x000286e4) bg_button_pane_g4

0x2ffa,	// (0x000286ec) bg_button_pane_g5

0x3002,	// (0x000286f4) bg_button_pane_g6

0x300a,	// (0x000286fc) bg_button_pane_g7

0x3012,	// (0x00028704) bg_button_pane_g8

0x301a,	// (0x0002870c) bg_button_pane_g9

0x0008,

0xf861,	// (0x00034f53) bg_button_pane_g

0x55ae,	// (0x0002aca0) common_borders_pane_ParamLimits

0x55ae,	// (0x0002aca0) common_borders_pane

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy1_ParamLimits

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy1

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy1_ParamLimits

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy1

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy1_ParamLimits

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy1

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy1_ParamLimits

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy1

0x55e9,	// (0x0002acdb) bg_eswt_ctrl_canvas_pane_g1

0x55ae,	// (0x0002aca0) common_borders_pane_cp2_ParamLimits

0x55ae,	// (0x0002aca0) common_borders_pane_cp2

0x55ae,	// (0x0002aca0) common_borders_pane_cp3_ParamLimits

0x55ae,	// (0x0002aca0) common_borders_pane_cp3

0x5fed,	// (0x0002b6df) separator_horizontal_pane

0x5ff5,	// (0x0002b6e7) separator_vertical_pane

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy2_ParamLimits

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy2

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy2_ParamLimits

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy2

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy2_ParamLimits

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy2

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy2_ParamLimits

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy2

0xa089,	// (0x0002f77b) common_borders_pane_cp4

0x5ffe,	// (0x0002b6f0) separator_horizontal_pane_g1

0x6007,	// (0x0002b6f9) separator_horizontal_pane_g2

0x6010,	// (0x0002b702) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x00035304) separator_horizontal_pane_g

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy3_ParamLimits

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy3

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy3_ParamLimits

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy3

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy3_ParamLimits

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy3

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy3_ParamLimits

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy3

0xa089,	// (0x0002f77b) common_borders_pane_cp5

0x6019,	// (0x0002b70b) separator_vertical_pane_g1

0x6022,	// (0x0002b714) separator_vertical_pane_g2

0x602b,	// (0x0002b71d) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x0003530b) separator_vertical_pane_g

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy4_ParamLimits

0x5f71,	// (0x0002b663) eswt_control_pane_g1_copy4

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy4_ParamLimits

0x5f7e,	// (0x0002b670) eswt_control_pane_g2_copy4

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy4_ParamLimits

0x5f8b,	// (0x0002b67d) eswt_control_pane_g3_copy4

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy4_ParamLimits

0x5f98,	// (0x0002b68a) eswt_control_pane_g4_copy4

0xc2c0,	// (0x000319b2) eswt_ctrl_combo_button_pane

0xc2c8,	// (0x000319ba) eswt_ctrl_input_pane

0xc2d0,	// (0x000319c2) popup_choice_list_window_cp70

0xc2d8,	// (0x000319ca) eswt_ctrl_input_pane_t1

0xa089,	// (0x0002f77b) input_focus_pane_cp70

0x55ae,	// (0x0002aca0) bg_button_pane_cp70_ParamLimits

0x55ae,	// (0x0002aca0) bg_button_pane_cp70

0xc2e6,	// (0x000319d8) eswt_ctrl_combo_button_pane_g1

0x6062,	// (0x0002b754) wait_bar_pane_cp70

0x304e,	// (0x00028740) bg_popup_window_pane_cp70_ParamLimits

0x304e,	// (0x00028740) bg_popup_window_pane_cp70

0x606a,	// (0x0002b75c) popup_eswt_tasktip_window_t1

0x6080,	// (0x0002b772) wait_bar_pane_cp71_ParamLimits

0x6080,	// (0x0002b772) wait_bar_pane_cp71

0x608c,	// (0x0002b77e) grid_eswt_app_pane

0xd681,	// (0x00032d73) scroll_pane_cp70

0xc2ee,	// (0x000319e0) cell_eswt_app_pane_ParamLimits

0xc2ee,	// (0x000319e0) cell_eswt_app_pane

0xc320,	// (0x00031a12) cell_eswt_app_pane_g1_ParamLimits

0xc320,	// (0x00031a12) cell_eswt_app_pane_g1

0xc34f,	// (0x00031a41) cell_eswt_app_pane_g2_ParamLimits

0xc34f,	// (0x00031a41) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x00035312) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x00035312) cell_eswt_app_pane_g

0xc378,	// (0x00031a6a) cell_eswt_app_pane_t1_ParamLimits

0xc378,	// (0x00031a6a) cell_eswt_app_pane_t1

0x6151,	// (0x0002b843) grid_highlight_pane_cp70_ParamLimits

0x6151,	// (0x0002b843) grid_highlight_pane_cp70

0x0a6a,	// (0x0002615c) set_content_pane_g1

0xab1f,	// (0x00030211) status_small_volume_pane

0x21bb,	// (0x000278ad) status_small_volume_pane_g1

0x21c3,	// (0x000278b5) volume_small2_pane

0x21cc,	// (0x000278be) volume_small2_pane_g1

0x21d5,	// (0x000278c7) volume_small2_pane_g2

0x21de,	// (0x000278d0) volume_small2_pane_g3

0x21e7,	// (0x000278d9) volume_small2_pane_g4

0x21f0,	// (0x000278e2) volume_small2_pane_g5

0x21f9,	// (0x000278eb) volume_small2_pane_g6

0x2202,	// (0x000278f4) volume_small2_pane_g7

0x220b,	// (0x000278fd) volume_small2_pane_g8

0x2214,	// (0x00027906) volume_small2_pane_g9

0x221d,	// (0x0002790f) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x00035317) volume_small2_pane_g

0x59a0,	// (0x0002b092) fep_vkb_top_text_pane_g1_ParamLimits

0xc246,	// (0x00031938) fep_vkb_top_text_pane_t1_ParamLimits

0x5c53,	// (0x0002b345) popup_preview_fixed_window_g3_ParamLimits

0x5c53,	// (0x0002b345) popup_preview_fixed_window_g3

0xb38b,	// (0x00030a7d) popup_toolbar_trans_pane

0xbc6e,	// (0x00031360) aid_height_set_list_ParamLimits

0x43a4,	// (0x00029a96) aid_size_parent_ParamLimits

0x10e3,	// (0x000267d5) list_highlight_pane_cp2_ParamLimits

0x0a6a,	// (0x0002615c) set_content_pane_g1_ParamLimits

0xbd56,	// (0x00031448) list_single_image_pane_ParamLimits

0xbd56,	// (0x00031448) list_single_image_pane

0xc3aa,	// (0x00031a9c) aid_size_cell_image_ParamLimits

0xc3aa,	// (0x00031a9c) aid_size_cell_image

0xc3b7,	// (0x00031aa9) grid_single_image_pane_ParamLimits

0xc3b7,	// (0x00031aa9) grid_single_image_pane

0xd32f,	// (0x00032a21) list_single_image_pane_g1_ParamLimits

0xd32f,	// (0x00032a21) list_single_image_pane_g1

0xd33b,	// (0x00032a2d) list_single_image_pane_g2_ParamLimits

0xd33b,	// (0x00032a2d) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x0003532c) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x0003532c) list_single_image_pane_g

0x6178,	// (0x0002b86a) list_single_image_pane_t1_ParamLimits

0x6178,	// (0x0002b86a) list_single_image_pane_t1

0xc3c5,	// (0x00031ab7) cell_image_list_pane_ParamLimits

0xc3c5,	// (0x00031ab7) cell_image_list_pane

0xc3d9,	// (0x00031acb) cell_image_list_pane_g1

0xc3e2,	// (0x00031ad4) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x00035331) cell_image_list_pane_g

0x61b6,	// (0x0002b8a8) aid_size_cell_tb_trans_pane

0xd321,	// (0x00032a13) bg_tb_trans_pane

0x61c8,	// (0x0002b8ba) grid_tb_trans_pane

0x2fda,	// (0x000286cc) bg_tb_trans_pane_g1

0x2fe2,	// (0x000286d4) bg_tb_trans_pane_g2

0x2fea,	// (0x000286dc) bg_tb_trans_pane_g3

0x2ff2,	// (0x000286e4) bg_tb_trans_pane_g4

0x2ffa,	// (0x000286ec) bg_tb_trans_pane_g5

0x3012,	// (0x00028704) bg_tb_trans_pane_g6

0x301a,	// (0x0002870c) bg_tb_trans_pane_g7

0x3002,	// (0x000286f4) bg_tb_trans_pane_g8

0x300a,	// (0x000286fc) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x00035336) bg_tb_trans_pane_g

0x61dc,	// (0x0002b8ce) cell_toolbar_trans_pane_ParamLimits

0x61dc,	// (0x0002b8ce) cell_toolbar_trans_pane

0x55e9,	// (0x0002acdb) cell_toolbar_trans_pane_g1

0xbfa1,	// (0x00031693) list_form2_midp_pane_t1

0xbfaf,	// (0x000316a1) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x000351df) list_form2_midp_pane_t

0x523d,	// (0x0002a92f) scroll_pane_cp51_ParamLimits

0x5404,	// (0x0002aaf6) form2_midp_wait_pane_g1

0x540d,	// (0x0002aaff) form2_midp_wait_pane_g2

0x5416,	// (0x0002ab08) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x000351f4) form2_midp_wait_pane_g

0xa410,	// (0x0002fb02) list_highlight_pane_cp21_ParamLimits

0x544f,	// (0x0002ab41) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x545e,	// (0x0002ab50) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xed75,	// (0x00034467) list_single_2graphic_im_pane_ParamLimits

0xed75,	// (0x00034467) list_single_2graphic_im_pane

0xc3eb,	// (0x00031add) list_single_2graphic_im_pane_g1_ParamLimits

0xc3eb,	// (0x00031add) list_single_2graphic_im_pane_g1

0xc3fc,	// (0x00031aee) list_single_2graphic_im_pane_g2_ParamLimits

0xc3fc,	// (0x00031aee) list_single_2graphic_im_pane_g2

0xc408,	// (0x00031afa) list_single_2graphic_im_pane_g3_ParamLimits

0xc408,	// (0x00031afa) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x00035349) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x00035349) list_single_2graphic_im_pane_g

0xc41c,	// (0x00031b0e) list_single_2graphic_im_pane_t1_ParamLimits

0xc41c,	// (0x00031b0e) list_single_2graphic_im_pane_t1

0x5c5f,	// (0x0002b351) list_single_graphic_2heading_pane_fp_ParamLimits

0x5c5f,	// (0x0002b351) list_single_graphic_2heading_pane_fp

0xf2af,	// (0x000349a1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf2af,	// (0x000349a1) list_single_graphic_2heading_pane_fp_g1

0x5c78,	// (0x0002b36a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5c78,	// (0x0002b36a) list_single_graphic_2heading_pane_fp_g2

0xf0a9,	// (0x0003479b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf0a9,	// (0x0003479b) list_single_graphic_2heading_pane_fp_g3

0xf0b5,	// (0x000347a7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf0b5,	// (0x000347a7) list_single_graphic_2heading_pane_fp_g4

0x5c84,	// (0x0002b376) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5c84,	// (0x0002b376) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00035277) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00035277) list_single_graphic_2heading_pane_fp_g

0xf446,	// (0x00034b38) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf446,	// (0x00034b38) list_single_graphic_2heading_pane_fp_t1

0xf2e7,	// (0x000349d9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf2e7,	// (0x000349d9) list_single_graphic_2heading_pane_fp_t2

0xf45c,	// (0x00034b4e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf45c,	// (0x00034b4e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x00035352) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x00035352) list_single_graphic_2heading_pane_fp_t

0x5662,	// (0x0002ad54) fep_hwr_write_pane_g5_ParamLimits

0x5662,	// (0x0002ad54) fep_hwr_write_pane_g5

0x566e,	// (0x0002ad60) fep_hwr_write_pane_g6_ParamLimits

0x566e,	// (0x0002ad60) fep_hwr_write_pane_g6

0x5f40,	// (0x0002b632) eswt_shell_pane_ParamLimits

0x304e,	// (0x00028740) bg_popup_window_pane_cp18_ParamLimits

0x42ea,	// (0x000299dc) heading_pane_cp70

0x606a,	// (0x0002b75c) popup_eswt_tasktip_window_t1_ParamLimits

0xb455,	// (0x00030b47) aid_touch_tab_arrow_left

0xb46b,	// (0x00030b5d) aid_touch_tab_arrow_right

0xa2f2,	// (0x0002f9e4) title_pane_g3_ParamLimits

0xa2f2,	// (0x0002f9e4) title_pane_g3

0xd2e0,	// (0x000329d2) set_value_pane_g1

0xb38b,	// (0x00030a7d) popup_toolbar_trans_pane_ParamLimits

0x61b6,	// (0x0002b8a8) aid_size_cell_tb_trans_pane_ParamLimits

0xd321,	// (0x00032a13) bg_tb_trans_pane_ParamLimits

0x61c8,	// (0x0002b8ba) grid_tb_trans_pane_ParamLimits

0xce16,	// (0x00032508) cont_note_pane_ParamLimits

0xce16,	// (0x00032508) cont_note_pane

0xd09c,	// (0x0003278e) cont_snote2_single_text_pane_ParamLimits

0xd09c,	// (0x0003278e) cont_snote2_single_text_pane

0xd09c,	// (0x0003278e) cont_snote2_single_graphic_pane_ParamLimits

0xd09c,	// (0x0003278e) cont_snote2_single_graphic_pane

0x3638,	// (0x00028d2a) cont_note_wait_pane_ParamLimits

0x3638,	// (0x00028d2a) cont_note_wait_pane

0x3638,	// (0x00028d2a) cont_note_image_pane_ParamLimits

0x3638,	// (0x00028d2a) cont_note_image_pane

0x6270,	// (0x0002b962) popup_note2_window_g1_ParamLimits

0x6270,	// (0x0002b962) popup_note2_window_g1

0x62a1,	// (0x0002b993) popup_note2_window_t1_ParamLimits

0x62a1,	// (0x0002b993) popup_note2_window_t1

0x62e6,	// (0x0002b9d8) popup_note2_window_t2_ParamLimits

0x62e6,	// (0x0002b9d8) popup_note2_window_t2

0x632b,	// (0x0002ba1d) popup_note2_window_t3_ParamLimits

0x632b,	// (0x0002ba1d) popup_note2_window_t3

0x6370,	// (0x0002ba62) popup_note2_window_t4_ParamLimits

0x6370,	// (0x0002ba62) popup_note2_window_t4

0xce9a,	// (0x0003258c) popup_note2_window_t5_ParamLimits

0xce9a,	// (0x0003258c) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x0003535e) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x0003535e) popup_note2_window_t

0x639f,	// (0x0002ba91) popup_note2_image_window_g1_ParamLimits

0x639f,	// (0x0002ba91) popup_note2_image_window_g1

0x63ab,	// (0x0002ba9d) popup_note2_image_window_g2_ParamLimits

0x63ab,	// (0x0002ba9d) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x00035369) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x00035369) popup_note2_image_window_g

0x63bd,	// (0x0002baaf) popup_note2_image_window_t1_ParamLimits

0x63bd,	// (0x0002baaf) popup_note2_image_window_t1

0x63d5,	// (0x0002bac7) popup_note2_image_window_t2_ParamLimits

0x63d5,	// (0x0002bac7) popup_note2_image_window_t2

0x63ed,	// (0x0002badf) popup_note2_image_window_t3_ParamLimits

0x63ed,	// (0x0002badf) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x0003536e) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x0003536e) popup_note2_image_window_t

0x3646,	// (0x00028d38) popup_note2_wait_window_g1_ParamLimits

0x3646,	// (0x00028d38) popup_note2_wait_window_g1

0x6409,	// (0x0002bafb) popup_note2_wait_window_g2_ParamLimits

0x6409,	// (0x0002bafb) popup_note2_wait_window_g2

0x365e,	// (0x00028d50) popup_note2_wait_window_g3_ParamLimits

0x365e,	// (0x00028d50) popup_note2_wait_window_g3

0x0002,

0xfc83,	// (0x00035375) popup_note2_wait_window_g_ParamLimits

0xfc83,	// (0x00035375) popup_note2_wait_window_g

0x6415,	// (0x0002bb07) popup_note2_wait_window_t1_ParamLimits

0x6415,	// (0x0002bb07) popup_note2_wait_window_t1

0x6433,	// (0x0002bb25) popup_note2_wait_window_t2_ParamLimits

0x6433,	// (0x0002bb25) popup_note2_wait_window_t2

0x6451,	// (0x0002bb43) popup_note2_wait_window_t3_ParamLimits

0x6451,	// (0x0002bb43) popup_note2_wait_window_t3

0x6463,	// (0x0002bb55) popup_note2_wait_window_t4_ParamLimits

0x6463,	// (0x0002bb55) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x0003537c) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x0003537c) popup_note2_wait_window_t

0x6475,	// (0x0002bb67) wait_bar2_pane_ParamLimits

0x6475,	// (0x0002bb67) wait_bar2_pane

0x648d,	// (0x0002bb7f) popup_snote2_single_text_window_g1_ParamLimits

0x648d,	// (0x0002bb7f) popup_snote2_single_text_window_g1

0x64b5,	// (0x0002bba7) popup_snote2_single_text_window_t1_ParamLimits

0x64b5,	// (0x0002bba7) popup_snote2_single_text_window_t1

0x6501,	// (0x0002bbf3) popup_snote2_single_text_window_t2_ParamLimits

0x6501,	// (0x0002bbf3) popup_snote2_single_text_window_t2

0x654d,	// (0x0002bc3f) popup_snote2_single_text_window_t3_ParamLimits

0x654d,	// (0x0002bc3f) popup_snote2_single_text_window_t3

0x658e,	// (0x0002bc80) popup_snote2_single_text_window_t4_ParamLimits

0x658e,	// (0x0002bc80) popup_snote2_single_text_window_t4

0x65c4,	// (0x0002bcb6) popup_snote2_single_text_window_t5_ParamLimits

0x65c4,	// (0x0002bcb6) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x00035385) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x00035385) popup_snote2_single_text_window_t

0x65ef,	// (0x0002bce1) popup_snote2_single_graphic_window_g1_ParamLimits

0x65ef,	// (0x0002bce1) popup_snote2_single_graphic_window_g1

0x6617,	// (0x0002bd09) popup_snote2_single_graphic_window_g2_ParamLimits

0x6617,	// (0x0002bd09) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x00035390) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x00035390) popup_snote2_single_graphic_window_g

0x663f,	// (0x0002bd31) popup_snote2_single_graphic_window_t1_ParamLimits

0x663f,	// (0x0002bd31) popup_snote2_single_graphic_window_t1

0x668b,	// (0x0002bd7d) popup_snote2_single_graphic_window_t2_ParamLimits

0x668b,	// (0x0002bd7d) popup_snote2_single_graphic_window_t2

0x654d,	// (0x0002bc3f) popup_snote2_single_graphic_window_t3_ParamLimits

0x654d,	// (0x0002bc3f) popup_snote2_single_graphic_window_t3

0x658e,	// (0x0002bc80) popup_snote2_single_graphic_window_t4_ParamLimits

0x658e,	// (0x0002bc80) popup_snote2_single_graphic_window_t4

0x65c4,	// (0x0002bcb6) popup_snote2_single_graphic_window_t5_ParamLimits

0x65c4,	// (0x0002bcb6) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x00035395) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x00035395) popup_snote2_single_graphic_window_t

0x50ed,	// (0x0002a7df) clock_nsta_pane_cp2_t1

0x50ed,	// (0x0002a7df) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x000351b5) clock_nsta_pane_cp2_t

0xeb82,	// (0x00034274) form_field_data_wide_pane_g1_ParamLimits

0xd32f,	// (0x00032a21) form_field_data_wide_pane_g2_ParamLimits

0xd32f,	// (0x00032a21) form_field_data_wide_pane_g2

0xd33b,	// (0x00032a2d) form_field_data_wide_pane_g3_ParamLimits

0xd33b,	// (0x00032a2d) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00034d6d) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00034d6d) form_field_data_wide_pane_g

0xbeb8,	// (0x000315aa) grid_touch_3_pane_ParamLimits

0xbeb8,	// (0x000315aa) grid_touch_3_pane

0xc44d,	// (0x00031b3f) cell_touch_3_pane_ParamLimits

0xc44d,	// (0x00031b3f) cell_touch_3_pane

0x55e9,	// (0x0002acdb) cell_touch_3_pane_g1

0x55e9,	// (0x0002acdb) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0003523a) cell_touch_3_pane_g

0xcef2,	// (0x000325e4) cont_query_data_pane

0xcefa,	// (0x000325ec) cont_query_data_pane_cp1

0x670a,	// (0x0002bdfc) button_value_adjust_pane_cp7

0x6712,	// (0x0002be04) query_popup_pane_cp3

0x04cc,	// (0x00025bbe) bg_popup_sub_pane_cp22_ParamLimits

0x04e2,	// (0x00025bd4) navi_navi_volume_pane_cp2

0x04fd,	// (0x00025bef) popup_side_volume_key_window_g2

0x050c,	// (0x00025bfe) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00034e03) popup_side_volume_key_window_g

0x0529,	// (0x00025c1b) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00034e0a) popup_side_volume_key_window_t

0x0925,	// (0x00026017) popup_side_volume_key_window_ParamLimits

0x9953,	// (0x0002f045) list_double_graphic_pane_g4_ParamLimits

0x9953,	// (0x0002f045) list_double_graphic_pane_g4

0x9e72,	// (0x0002f564) list_single_2heading_msg_pane_ParamLimits

0x9e72,	// (0x0002f564) list_single_2heading_msg_pane

0x9ebe,	// (0x0002f5b0) list_single_2heading_msg_pane_g1_ParamLimits

0x9ebe,	// (0x0002f5b0) list_single_2heading_msg_pane_g1

0x9eca,	// (0x0002f5bc) list_single_2heading_msg_pane_g2_ParamLimits

0x9eca,	// (0x0002f5bc) list_single_2heading_msg_pane_g2

0x9edd,	// (0x0002f5cf) list_single_2heading_msg_pane_g3_ParamLimits

0x9edd,	// (0x0002f5cf) list_single_2heading_msg_pane_g3

0x9ee9,	// (0x0002f5db) list_single_2heading_msg_pane_g4_ParamLimits

0x9ee9,	// (0x0002f5db) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x000353a0) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x000353a0) list_single_2heading_msg_pane_g

0x9f01,	// (0x0002f5f3) list_single_2heading_msg_pane_t1_ParamLimits

0x9f01,	// (0x0002f5f3) list_single_2heading_msg_pane_t1

0x9f29,	// (0x0002f61b) list_single_2heading_msg_pane_t2_ParamLimits

0x9f29,	// (0x0002f61b) list_single_2heading_msg_pane_t2

0x9f94,	// (0x0002f686) list_single_2heading_msg_pane_t3_ParamLimits

0x9f94,	// (0x0002f686) list_single_2heading_msg_pane_t3

0xf47c,	// (0x00034b6e) list_single_2heading_msg_pane_t4_ParamLimits

0xf47c,	// (0x00034b6e) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x000353a9) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x000353a9) list_single_2heading_msg_pane_t

0xa2fe,	// (0x0002f9f0) title_pane_g4_ParamLimits

0xa2fe,	// (0x0002f9f0) title_pane_g4

0x00e9,	// (0x000257db) title_pane_stacon_g3_ParamLimits

0x00e9,	// (0x000257db) title_pane_stacon_g3

0x6233,	// (0x0002b925) list_single_2graphic_im_pane_g4_ParamLimits

0x6233,	// (0x0002b925) list_single_2graphic_im_pane_g4

0x40a8,	// (0x0002979a) popup_side_volume_key_window_cp

0x4917,	// (0x0002a009) main_idle_act2_pane_t1

0x1a3b,	// (0x0002712d) toolbar_button_pane_g10

0xa6fd,	// (0x0002fdef) popup_toolbar_window_cp1

0x50de,	// (0x0002a7d0) clock_nsta_pane_cp_t1

0x50de,	// (0x0002a7d0) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x000351b0) clock_nsta_pane_cp_t

0x04e2,	// (0x00025bd4) navi_navi_volume_pane_cp2_ParamLimits

0x04f1,	// (0x00025be3) popup_side_volume_key_window_g1_ParamLimits

0x04fd,	// (0x00025bef) popup_side_volume_key_window_g2_ParamLimits

0x050c,	// (0x00025bfe) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00034e03) popup_side_volume_key_window_g_ParamLimits

0x1eb0,	// (0x000275a2) fep_hwr_aid_pane

0xc0ad,	// (0x0003179f) bg_fep_hwr_top_pane_g4_ParamLimits

0x5632,	// (0x0002ad24) fep_hwr_top_pane_g1_ParamLimits

0x5644,	// (0x0002ad36) fep_hwr_top_pane_g2_ParamLimits

0x1f6b,	// (0x0002765d) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00035205) fep_hwr_top_pane_g_ParamLimits

0x1f80,	// (0x00027672) fep_hwr_top_text_pane_ParamLimits

0x3e5d,	// (0x0002954f) aid_touch_tab_arrow_arrow_2

0x3e66,	// (0x00029558) aid_touch_tab_arrow_left_2

0x1ec4,	// (0x000275b6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1efb,	// (0x000275ed) fep_hwr_prediction_pane

0x579a,	// (0x0002ae8c) fep_vkb_prediction_pane

0xc226,	// (0x00031918) fep_vkb_side_pane_g3_ParamLimits

0xc226,	// (0x00031918) fep_vkb_side_pane_g3

0x584c,	// (0x0002af3e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5d1a,	// (0x0002b40c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5d27,	// (0x0002b419) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x000352af) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6739,	// (0x0002be2b) fep_hwr_prediction_pane_g1

0x2226,	// (0x00027918) fep_hwr_prediction_pane_g2

0x222e,	// (0x00027920) fep_hwr_prediction_pane_g3

0x2236,	// (0x00027928) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x000353b2) fep_hwr_prediction_pane_g

0x6739,	// (0x0002be2b) fep_vkb_prediction_pane_g1

0x6743,	// (0x0002be35) fep_vkb_prediction_pane_g2

0x674b,	// (0x0002be3d) fep_vkb_prediction_pane_g3

0x6753,	// (0x0002be45) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x000353bb) fep_vkb_prediction_pane_g

0x1d30,	// (0x00027422) slider_set_pane_g3

0x1d44,	// (0x00027436) slider_set_pane_g4

0x1d5c,	// (0x0002744e) slider_set_pane_g5

0x1d30,	// (0x00027422) slider_set_pane_g6

0x1d72,	// (0x00027464) slider_set_pane_g7

0x4523,	// (0x00029c15) slider_form_pane_g3

0x452c,	// (0x00029c1e) slider_form_pane_g4

0x4534,	// (0x00029c26) slider_form_pane_g5

0x4523,	// (0x00029c15) slider_form_pane_g6

0xbd15,	// (0x00031407) slider_form_pane_g7

0x4bc5,	// (0x0002a2b7) slider_set_pane_vc_g3

0x4bce,	// (0x0002a2c0) slider_set_pane_vc_g4

0x4bd7,	// (0x0002a2c9) slider_set_pane_vc_g5

0x4bc5,	// (0x0002a2b7) slider_set_pane_vc_g6

0x4be0,	// (0x0002a2d2) slider_set_pane_vc_g7

0x4db4,	// (0x0002a4a6) slider_form_pane_vc_g1

0x4dbd,	// (0x0002a4af) slider_form_pane_vc_g2

0x4dc6,	// (0x0002a4b8) slider_form_pane_vc_g3

0x4db4,	// (0x0002a4a6) slider_form_pane_vc_g4

0x4dcf,	// (0x0002a4c1) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00035182) slider_form_pane_vc_g

0xa089,	// (0x0002f77b) main_idle_act3_pane

0x675b,	// (0x0002be4d) ai3_links_pane

0xc499,	// (0x00031b8b) popup_ai3_data_window_ParamLimits

0xc499,	// (0x00031b8b) popup_ai3_data_window

0xa089,	// (0x0002f77b) grid_ai3_links_pane

0xc4b7,	// (0x00031ba9) cell_ai3_links_pane_ParamLimits

0xc4b7,	// (0x00031ba9) cell_ai3_links_pane

0x679c,	// (0x0002be8e) bg_popup_sub_pane_cp11

0x67a9,	// (0x0002be9b) cell_ai3_links_pane_g1

0xa089,	// (0x0002f77b) bg_popup_sub_pane_cp12

0x67ce,	// (0x0002bec0) heading_ai3_data_pane

0x67d6,	// (0x0002bec8) list_ai3_gene_pane

0x67e2,	// (0x0002bed4) popup_ai3_data_window_g1

0x67ea,	// (0x0002bedc) heading_ai3_data_pane_g1

0x67f2,	// (0x0002bee4) heading_ai3_data_pane_t1

0x6800,	// (0x0002bef2) list_double_ai3_gene_pane_ParamLimits

0x6800,	// (0x0002bef2) list_double_ai3_gene_pane

0x680d,	// (0x0002beff) list_single_ai3_gene_pane_ParamLimits

0x680d,	// (0x0002beff) list_single_ai3_gene_pane

0x55ae,	// (0x0002aca0) list_highlight_pane_cp7_ParamLimits

0x55ae,	// (0x0002aca0) list_highlight_pane_cp7

0x681a,	// (0x0002bf0c) list_single_a13_gene_pane_t1_ParamLimits

0x681a,	// (0x0002bf0c) list_single_a13_gene_pane_t1

0x6831,	// (0x0002bf23) list_single_ai3_gene_pane_g1

0x683a,	// (0x0002bf2c) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x000353c4) list_single_ai3_gene_pane_g

0x6842,	// (0x0002bf34) list_double_ai3_gene_pane_g1_ParamLimits

0x6842,	// (0x0002bf34) list_double_ai3_gene_pane_g1

0x684e,	// (0x0002bf40) list_double_ai3_gene_pane_t1_ParamLimits

0x684e,	// (0x0002bf40) list_double_ai3_gene_pane_t1

0x686a,	// (0x0002bf5c) list_double_ai3_gene_pane_t2_ParamLimits

0x686a,	// (0x0002bf5c) list_double_ai3_gene_pane_t2

0x687f,	// (0x0002bf71) list_double_ai3_gene_pane_t3_ParamLimits

0x687f,	// (0x0002bf71) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x000353c9) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x000353c9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf472,	// (0x00034b64) aid_size_min_col_2

0xc483,	// (0x00031b75) aid_size_min_msg_ParamLimits

0xc483,	// (0x00031b75) aid_size_min_msg

0xc23a,	// (0x0003192c) fep_vkb_top_text_pane_g2_ParamLimits

0xc23a,	// (0x0003192c) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00035235) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00035235) fep_vkb_top_text_pane_g

0xa089,	// (0x0002f77b) main_hc_apps_shell_pane

0x689c,	// (0x0002bf8e) grid_hc_apps_pane_ParamLimits

0x689c,	// (0x0002bf8e) grid_hc_apps_pane

0x68ab,	// (0x0002bf9d) list_hc_apps_pane

0x68b3,	// (0x0002bfa5) scroll_pane_cp37_ParamLimits

0x68b3,	// (0x0002bfa5) scroll_pane_cp37

0xc4d1,	// (0x00031bc3) cell_hc_apps_pane_ParamLimits

0xc4d1,	// (0x00031bc3) cell_hc_apps_pane

0xc59b,	// (0x00031c8d) cell_hc_apps_pane_g1_ParamLimits

0xc59b,	// (0x00031c8d) cell_hc_apps_pane_g1

0x69a8,	// (0x0002c09a) cell_hc_apps_pane_g2_ParamLimits

0x69a8,	// (0x0002c09a) cell_hc_apps_pane_g2

0x69c4,	// (0x0002c0b6) cell_hc_apps_pane_g3_ParamLimits

0x69c4,	// (0x0002c0b6) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x000353d0) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x000353d0) cell_hc_apps_pane_g

0xc5c8,	// (0x00031cba) cell_hc_apps_pane_t1_ParamLimits

0xc5c8,	// (0x00031cba) cell_hc_apps_pane_t1

0xce16,	// (0x00032508) grid_highlight_pane_cp10_ParamLimits

0xce16,	// (0x00032508) grid_highlight_pane_cp10

0xc608,	// (0x00031cfa) list_single_hc_apps_pane_ParamLimits

0xc608,	// (0x00031cfa) list_single_hc_apps_pane

0xc642,	// (0x00031d34) list_single_hc_apps_pane_g1

0xa002,	// (0x0002f6f4) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x000353d7) list_single_hc_apps_pane_g

0xa01b,	// (0x0002f70d) list_single_hc_apps_pane_g2_copy1

0xa037,	// (0x0002f729) list_single_hc_apps_pane_t1

0xa410,	// (0x0002fb02) bg_set_opt_pane_cp_ParamLimits

0xf4c5,	// (0x00034bb7) setting_slider_pane_t1_ParamLimits

0xf4de,	// (0x00034bd0) setting_slider_pane_t2_ParamLimits

0xf4f8,	// (0x00034bea) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00034c50) setting_slider_pane_t_ParamLimits

0xf510,	// (0x00034c02) slider_set_pane_ParamLimits

0x0f74,	// (0x00026666) control_pane_g5_ParamLimits

0x0f74,	// (0x00026666) control_pane_g5

0x4356,	// (0x00029a48) slider_set_pane_g1_ParamLimits

0x1d24,	// (0x00027416) slider_set_pane_g2_ParamLimits

0x1d30,	// (0x00027422) slider_set_pane_g3_ParamLimits

0x1d44,	// (0x00027436) slider_set_pane_g4_ParamLimits

0x1d5c,	// (0x0002744e) slider_set_pane_g5_ParamLimits

0x1d30,	// (0x00027422) slider_set_pane_g6_ParamLimits

0x1d72,	// (0x00027464) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00035051) slider_set_pane_g_ParamLimits

0x0a15,	// (0x00026107) navi_icon_text_pane_ParamLimits

0xb41c,	// (0x00030b0e) aid_fill_nsta_2_ParamLimits

0xb455,	// (0x00030b47) aid_touch_tab_arrow_left_ParamLimits

0xb46b,	// (0x00030b5d) aid_touch_tab_arrow_right_ParamLimits

0xb506,	// (0x00030bf8) clock_nsta_pane_ParamLimits

0xbb55,	// (0x00031247) navi_icon_pane_g1_ParamLimits

0xbb61,	// (0x00031253) navi_text_pane_t1_ParamLimits

0xbf83,	// (0x00031675) navi_icon_text_pane_g1_ParamLimits

0xbf8f,	// (0x00031681) navi_icon_text_pane_t1_ParamLimits

0xc642,	// (0x00031d34) list_single_hc_apps_pane_g1_ParamLimits

0xa002,	// (0x0002f6f4) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x000353d7) list_single_hc_apps_pane_g_ParamLimits

0xa01b,	// (0x0002f70d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa037,	// (0x0002f729) list_single_hc_apps_pane_t1_ParamLimits

0xa1e1,	// (0x0002f8d3) popup_toolbar2_fixed_window_ParamLimits

0xa1e1,	// (0x0002f8d3) popup_toolbar2_fixed_window

0xb381,	// (0x00030a73) popup_toolbar2_float_window

0xa089,	// (0x0002f77b) bg_popup_sub_pane_cp27

0x6a7e,	// (0x0002c170) grid_toolbar2_float_pane

0xa089,	// (0x0002f77b) bg_popup_sub_pane_cp26

0x6a7e,	// (0x0002c170) grid_toolbar2_fixed_pane

0xc65b,	// (0x00031d4d) cell_toolbar2_fixed_pane_ParamLimits

0xc65b,	// (0x00031d4d) cell_toolbar2_fixed_pane

0xc675,	// (0x00031d67) cell_toolbar2_fixed_pane_g1

0x6a9f,	// (0x0002c191) toolbar2_fixed_button_pane

0x2fda,	// (0x000286cc) toolbar2_fixed_button_pane_g1

0x2fe2,	// (0x000286d4) toolbar2_fixed_button_pane_g2

0x2fea,	// (0x000286dc) toolbar2_fixed_button_pane_g3

0x2ff2,	// (0x000286e4) toolbar2_fixed_button_pane_g4

0x2ffa,	// (0x000286ec) toolbar2_fixed_button_pane_g5

0x3002,	// (0x000286f4) toolbar2_fixed_button_pane_g6

0x300a,	// (0x000286fc) toolbar2_fixed_button_pane_g7

0x3012,	// (0x00028704) toolbar2_fixed_button_pane_g8

0x301a,	// (0x0002870c) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00034f53) toolbar2_fixed_button_pane_g

0x6aa7,	// (0x0002c199) cell_toolbar2_float_pane_ParamLimits

0x6aa7,	// (0x0002c199) cell_toolbar2_float_pane

0x6ab8,	// (0x0002c1aa) cell_toolbar2_float_pane_g1

0x6a9f,	// (0x0002c191) toolbar2_fixed_button_pane_cp

0xc122,	// (0x00031814) fep_vkb_accented_list_pane_ParamLimits

0xc122,	// (0x00031814) fep_vkb_accented_list_pane

0x20e2,	// (0x000277d4) bg_popup_fep_shadow_pane_g9

0x0b8d,	// (0x0002627f) bg_popup_fep_shadow_pane_cp3

0xd431,	// (0x00032b23) list_accented_list_pane

0x6ac1,	// (0x0002c1b3) list_single_accented_list_pane_ParamLimits

0x6ac1,	// (0x0002c1b3) list_single_accented_list_pane

0x0b8d,	// (0x0002627f) list_highlight_pane_cp10

0x6ad2,	// (0x0002c1c4) list_single_accented_list_pane_t1

0xb29f,	// (0x00030991) popup_slider_window_ParamLimits

0xb29f,	// (0x00030991) popup_slider_window

0x671a,	// (0x0002be0c) aid_indentation_list_msg

0xd7f3,	// (0x00032ee5) bg_popup_window_pane_cp19

0x6c0e,	// (0x0002c300) popup_slider_window_g1

0x6c2a,	// (0x0002c31c) popup_slider_window_g2

0x6c46,	// (0x0002c338) popup_slider_window_g3

0x0005,

0xfcea,	// (0x000353dc) popup_slider_window_g

0x6cac,	// (0x0002c39e) popup_slider_window_t1

0x6d20,	// (0x0002c412) small_volume_slider_vertical_pane

0x55e9,	// (0x0002acdb) small_volume_slider_vertical_pane_g1

0x55e9,	// (0x0002acdb) small_volume_slider_vertical_pane_g2

0x6d3c,	// (0x0002c42e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x000353ee) small_volume_slider_vertical_pane_g

0xa141,	// (0x0002f833) area_side_right_pane_ParamLimits

0xa141,	// (0x0002f833) area_side_right_pane

0xc778,	// (0x00031e6a) aid_size_side_button_ParamLimits

0xc778,	// (0x00031e6a) aid_size_side_button

0xc791,	// (0x00031e83) grid_sctrl_middle_pane_ParamLimits

0xc791,	// (0x00031e83) grid_sctrl_middle_pane

0x2271,	// (0x00027963) sctrl_sk_bottom_pane

0x2282,	// (0x00027974) sctrl_sk_top_pane

0x2294,	// (0x00027986) aid_touch_sctrl_top

0xce16,	// (0x00032508) bg_sctrl_sk_pane_ParamLimits

0xce16,	// (0x00032508) bg_sctrl_sk_pane

0x22a1,	// (0x00027993) sctrl_sk_top_pane_g1

0x22ae,	// (0x000279a0) sctrl_sk_top_pane_t1

0x2294,	// (0x00027986) aid_touch_sctrl_bottom

0xce16,	// (0x00032508) bg_sctrl_sk_pane_cp_ParamLimits

0xce16,	// (0x00032508) bg_sctrl_sk_pane_cp

0x22c9,	// (0x000279bb) sctrl_sk_bottom_pane_g1

0x22ae,	// (0x000279a0) sctrl_sk_bottom_pane_t1

0xc7ab,	// (0x00031e9d) cell_sctrl_middle_pane_ParamLimits

0xc7ab,	// (0x00031e9d) cell_sctrl_middle_pane

0xc7be,	// (0x00031eb0) aid_touch_sctrl_middle_ParamLimits

0xc7be,	// (0x00031eb0) aid_touch_sctrl_middle

0xc7cb,	// (0x00031ebd) bg_sctrl_middle_pane_ParamLimits

0xc7cb,	// (0x00031ebd) bg_sctrl_middle_pane

0x6dc7,	// (0x0002c4b9) cell_sctrl_middle_pane_g1_ParamLimits

0x6dc7,	// (0x0002c4b9) cell_sctrl_middle_pane_g1

0xc7d9,	// (0x00031ecb) cell_sctrl_middle_pane_g2_ParamLimits

0xc7d9,	// (0x00031ecb) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x000353fa) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x000353fa) cell_sctrl_middle_pane_g

0x2fda,	// (0x000286cc) bg_sctrl_middle_pane_g1

0x2fe2,	// (0x000286d4) bg_sctrl_middle_pane_g2

0x2fea,	// (0x000286dc) bg_sctrl_middle_pane_g3

0x2ff2,	// (0x000286e4) bg_sctrl_middle_pane_g4

0x2ffa,	// (0x000286ec) bg_sctrl_middle_pane_g5

0x3002,	// (0x000286f4) bg_sctrl_middle_pane_g6

0x300a,	// (0x000286fc) bg_sctrl_middle_pane_g7

0x3012,	// (0x00028704) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x000353ff) bg_sctrl_middle_pane_g

0x301a,	// (0x0002870c) bg_sctrl_middle_pane_g8_copy1

0x2fda,	// (0x000286cc) bg_sctrl_sk_pane_g1

0x2fe2,	// (0x000286d4) bg_sctrl_sk_pane_g2

0x2fea,	// (0x000286dc) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00034f53) bg_sctrl_sk_pane_g

0xd25a,	// (0x0003294c) aid_size_touch_scroll_bar

0x2ff2,	// (0x000286e4) bg_sctrl_sk_pane_g4

0x2ffa,	// (0x000286ec) bg_sctrl_sk_pane_g5

0x3002,	// (0x000286f4) bg_sctrl_sk_pane_g6

0x300a,	// (0x000286fc) bg_sctrl_sk_pane_g7

0x3012,	// (0x00028704) bg_sctrl_sk_pane_g8

0x301a,	// (0x0002870c) bg_sctrl_sk_pane_g9

0x11c7,	// (0x000268b9) popup_fep_china_hwr2_fs_candidate_window

0xad57,	// (0x00030449) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xad57,	// (0x00030449) popup_fep_china_hwr2_fs_control_window

0x584c,	// (0x0002af3e) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x000353f5) sctrl_sk_top_pane_g

0xd8ab,	// (0x00032f9d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd8ab,	// (0x00032f9d) aid_fep_china_hwr2_fs_cell

0xd8c1,	// (0x00032fb3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd8c1,	// (0x00032fb3) bg_popup_fep_shadow_pane_cp4

0xd8d8,	// (0x00032fca) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd8d8,	// (0x00032fca) bg_popup_fep_shadow_pane_cp5

0xd8ea,	// (0x00032fdc) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd8ea,	// (0x00032fdc) popup_fep_china_hwr2_fs_control_bar_grid

0xd8fe,	// (0x00032ff0) popup_fep_china_hwr2_fs_control_funtion_grid

0x6d9b,	// (0x0002c48d) aid_fep_china_hwr2_fs_candi_cell

0xa089,	// (0x0002f77b) bg_popup_fep_shadow_pane_cp6

0x6da5,	// (0x0002c497) popup_fep_china_hwr2_fs_candidate_grid

0xd906,	// (0x00032ff8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd906,	// (0x00032ff8) cell_fep_china_hwr2_fs_funtion_grid

0x55e9,	// (0x0002acdb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6dc7,	// (0x0002c4b9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6dc7,	// (0x0002c4b9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6dd5,	// (0x0002c4c7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6dd5,	// (0x0002c4c7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x00035410) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x00035410) cell_fep_china_hwr2_fs_funtion_grid_g

0xd91e,	// (0x00033010) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd91e,	// (0x00033010) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd933,	// (0x00033025) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd933,	// (0x00033025) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x00035415) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x00035415) cell_fep_china_hwr2_fs_funtion_grid_t

0x6e1c,	// (0x0002c50e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6e24,	// (0x0002c516) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6e2c,	// (0x0002c51e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x0003541a) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6e34,	// (0x0002c526) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6e34,	// (0x0002c526) cell_fep_china_hwr2_fs_candidate_grid

0x6e53,	// (0x0002c545) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6e5b,	// (0x0002c54d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x55e9,	// (0x0002acdb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x55e9,	// (0x0002acdb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0003523a) cell_fep_china_hwr2_fs_candidate_grid_g

0x6e63,	// (0x0002c555) cell_fep_china_hwr2_fs_candidate_grid_t1

0x182c,	// (0x00026f1e) clock_nsta_pane_cp_24_ParamLimits

0x182c,	// (0x00026f1e) clock_nsta_pane_cp_24

0x18ac,	// (0x00026f9e) indicator_nsta_pane_cp_24_ParamLimits

0x18ac,	// (0x00026f9e) indicator_nsta_pane_cp_24

0x3cbb,	// (0x000293ad) heading_pane_g1

0x0001,

0xf8c6,	// (0x00034fb8) heading_pane_g

0x475e,	// (0x00029e50) grid_sct_catagory_button_pane

0x4790,	// (0x00029e82) scroll_pane_cp5_ParamLimits

0x5249,	// (0x0002a93b) button_value_adjust_pane_cp5_ParamLimits

0x5249,	// (0x0002a93b) button_value_adjust_pane_cp5

0x532e,	// (0x0002aa20) form2_midp_time_pane_ParamLimits

0x6e71,	// (0x0002c563) cell_sct_catagory_button_pane_ParamLimits

0x6e71,	// (0x0002c563) cell_sct_catagory_button_pane

0x55ae,	// (0x0002aca0) bg_button_pane_cp01_ParamLimits

0x55ae,	// (0x0002aca0) bg_button_pane_cp01

0x55e9,	// (0x0002acdb) cell_sct_catagory_button_pane_g1

0xb31e,	// (0x00030a10) popup_tb_extension_window

0xd94f,	// (0x00033041) aid_size_cell_ext_ParamLimits

0xd94f,	// (0x00033041) aid_size_cell_ext

0xd09c,	// (0x0003278e) bg_tb_trans_pane_cp1_ParamLimits

0xd09c,	// (0x0003278e) bg_tb_trans_pane_cp1

0xd975,	// (0x00033067) grid_tb_ext_pane_ParamLimits

0xd975,	// (0x00033067) grid_tb_ext_pane

0xd9b2,	// (0x000330a4) cell_tb_ext_pane_ParamLimits

0xd9b2,	// (0x000330a4) cell_tb_ext_pane

0xd9da,	// (0x000330cc) cell_tb_ext_pane_g1_ParamLimits

0xd9da,	// (0x000330cc) cell_tb_ext_pane_g1

0x6f05,	// (0x0002c5f7) cell_tb_ext_pane_t1

0xce16,	// (0x00032508) list_highlight_pane_cp11_ParamLimits

0xce16,	// (0x00032508) list_highlight_pane_cp11

0xa1f6,	// (0x0002f8e8) popup_uni_indicator_window_ParamLimits

0xa1f6,	// (0x0002f8e8) popup_uni_indicator_window

0xd321,	// (0x00032a13) bg_popup_sub_pane_cp14

0x6f20,	// (0x0002c612) list_uniindi_pane

0x6f2c,	// (0x0002c61e) uniindi_top_pane

0xce16,	// (0x00032508) bg_uniindi_top_pane

0x6f4d,	// (0x0002c63f) uniindi_top_pane_g1

0x6f63,	// (0x0002c655) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x00035421) uniindi_top_pane_g

0x6f8d,	// (0x0002c67f) uniindi_top_pane_t1

0x6fb9,	// (0x0002c6ab) list_single_uniindi_pane_ParamLimits

0x6fb9,	// (0x0002c6ab) list_single_uniindi_pane

0x55e9,	// (0x0002acdb) bg_uniindi_top_pane_g1

0x6fcb,	// (0x0002c6bd) list_single_uniindi_pane_g1

0x6fde,	// (0x0002c6d0) list_single_uniindi_pane_t1

0xa089,	// (0x0002f77b) control_bg_pane

0x7003,	// (0x0002c6f5) bg_sctrl_sk_pane_cp1

0x700c,	// (0x0002c6fe) bg_sctrl_sk_pane_cp2

0x7015,	// (0x0002c707) control_bg_pane_g1

0x701e,	// (0x0002c710) control_bg_pane_g2

0x0001,

0xfd38,	// (0x0003542a) control_bg_pane_g

0x5092,	// (0x0002a784) cell_indicator_nsta_pane_g1_ParamLimits

0xbee5,	// (0x000315d7) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0003519e) cell_indicator_nsta_pane_g_ParamLimits

0xf096,	// (0x00034788) form2_midp_time_pane_t1_ParamLimits

0x1ea2,	// (0x00027594) main_idle_act4_pane_ParamLimits

0x1ea2,	// (0x00027594) main_idle_act4_pane

0xb31e,	// (0x00030a10) popup_tb_extension_window_ParamLimits

0xd99a,	// (0x0003308c) tb_ext_find_pane_ParamLimits

0xd99a,	// (0x0003308c) tb_ext_find_pane

0x7027,	// (0x0002c719) ai_gene_pane_1_cp1

0x0cd7,	// (0x000263c9) ai_gene_pane_2_cp1

0x702f,	// (0x0002c721) list_single_idle_plugin_calendar_pane

0x7038,	// (0x0002c72a) list_single_idle_plugin_notification_pane

0x7041,	// (0x0002c733) list_single_idle_plugin_player_pane

0xd9f7,	// (0x000330e9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd9f7,	// (0x000330e9) list_single_idle_plugin_shortcut_pane

0xda1f,	// (0x00033111) main_idle_act4_pane_t1

0xda37,	// (0x00033129) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x0003542f) main_idle_act4_pane_t

0xda4f,	// (0x00033141) middle_sk_idle_act4_pane_ParamLimits

0xda4f,	// (0x00033141) middle_sk_idle_act4_pane

0xda6b,	// (0x0003315d) popup_clock_digital_analogue_window_cp2

0xda92,	// (0x00033184) shortcut_wheel_idle_act4_pane_ParamLimits

0xda92,	// (0x00033184) shortcut_wheel_idle_act4_pane

0x55e9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g1

0x55e9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g2

0x55e9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g3

0x55e9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g4

0x55e9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g5

0x70d4,	// (0x0002c7c6) shortcut_wheel_idle_act4_pane_g6

0x70dc,	// (0x0002c7ce) shortcut_wheel_idle_act4_pane_g7

0x70e4,	// (0x0002c7d6) shortcut_wheel_idle_act4_pane_g8

0x70ec,	// (0x0002c7de) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x00035434) shortcut_wheel_idle_act4_pane_g

0xc0ad,	// (0x0003179f) middle_sk_idle_act4_pane_g1_ParamLimits

0xc0ad,	// (0x0003179f) middle_sk_idle_act4_pane_g1

0xdb0f,	// (0x00033201) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb0f,	// (0x00033201) middle_sk_idle_act4_pane_g2

0x0001,

0xfd65,	// (0x00035457) middle_sk_idle_act4_pane_g_ParamLimits

0xfd65,	// (0x00035457) middle_sk_idle_act4_pane_g

0xdb27,	// (0x00033219) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb27,	// (0x00033219) middle_sk_idle_act4_pane_t1

0xdb56,	// (0x00033248) grid_ai_shortcut_pane_ParamLimits

0xdb56,	// (0x00033248) grid_ai_shortcut_pane

0xdb73,	// (0x00033265) list_highlight_pane_cp16_ParamLimits

0xdb73,	// (0x00033265) list_highlight_pane_cp16

0xdb80,	// (0x00033272) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb80,	// (0x00033272) list_single_idle_plugin_shortcut_pane_g1

0xdb8c,	// (0x0003327e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb8c,	// (0x0003327e) list_single_idle_plugin_shortcut_pane_g2

0xdbaa,	// (0x0003329c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbaa,	// (0x0003329c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6a,	// (0x0003545c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6a,	// (0x0003545c) list_single_idle_plugin_shortcut_pane_g

0xdbbf,	// (0x000332b1) cell_ai_shortcut_pane_ParamLimits

0xdbbf,	// (0x000332b1) cell_ai_shortcut_pane

0xdbd5,	// (0x000332c7) cell_ai_shortcut_pane_g1_ParamLimits

0xdbd5,	// (0x000332c7) cell_ai_shortcut_pane_g1

0x7027,	// (0x0002c719) ai_gene_pane_1_cp2

0x721d,	// (0x0002c90f) ai_gene_pane_2_cp2

0x7225,	// (0x0002c917) list_highlight_pane_cp15

0x722e,	// (0x0002c920) list_single_idle_plugin_calendar_pane_g1

0x7225,	// (0x0002c917) list_highlight_pane_cp17

0x7236,	// (0x0002c928) list_single_idle_plugin_calendar_pane_g1_copy1

0x723e,	// (0x0002c930) list_single_idle_plugin_player_pane_g1

0x49c5,	// (0x0002a0b7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd71,	// (0x00035463) list_single_idle_plugin_player_pane_g

0x7246,	// (0x0002c938) list_single_idle_plugin_player_pane_t1

0x7254,	// (0x0002c946) list_single_idle_plugin_player_pane_t2

0x7262,	// (0x0002c954) list_single_idle_plugin_player_pane_t3

0x7270,	// (0x0002c962) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd76,	// (0x00035468) list_single_idle_plugin_player_pane_t

0x727e,	// (0x0002c970) wait_bar_pane_cp15

0x7286,	// (0x0002c978) grid_ai_notification_pane

0x49c5,	// (0x0002a0b7) list_single_idle_plugin_notification_pane_g1

0xdbf7,	// (0x000332e9) cell_ai_notification_pane_ParamLimits

0xdbf7,	// (0x000332e9) cell_ai_notification_pane

0x729c,	// (0x0002c98e) cell_ai_notification_pane_g1

0x72a4,	// (0x0002c996) cell_ai_notification_pane_t1

0xdc04,	// (0x000332f6) tb_ext_find_button_pane

0xdc0c,	// (0x000332fe) tb_ext_find_pane_g1

0xdc14,	// (0x00033306) tb_ext_find_pane_t1

0x036a,	// (0x00025a5c) tb_ext_find_button_pane_g1

0x72d0,	// (0x0002c9c2) tb_ext_find_button_pane_g2

0x0001,

0xfd7f,	// (0x00035471) tb_ext_find_button_pane_g

0xda1f,	// (0x00033111) main_idle_act4_pane_t1_ParamLimits

0xda37,	// (0x00033129) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x0003542f) main_idle_act4_pane_t_ParamLimits

0xda6b,	// (0x0003315d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda82,	// (0x00033174) sat_plugin_idle_act4_pane_ParamLimits

0xda82,	// (0x00033174) sat_plugin_idle_act4_pane

0xdc22,	// (0x00033314) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdc22,	// (0x00033314) sat_plugin_idle_act4_pane_t1

0xdc3a,	// (0x0003332c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdc3a,	// (0x0003332c) sat_plugin_idle_act4_pane_t2

0xdc52,	// (0x00033344) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdc52,	// (0x00033344) sat_plugin_idle_act4_pane_t3

0xdc6a,	// (0x0003335c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdc6a,	// (0x0003335c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd84,	// (0x00035476) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd84,	// (0x00035476) sat_plugin_idle_act4_pane_t

0xf25b,	// (0x0003494d) popup_battery_window_ParamLimits

0xf25b,	// (0x0003494d) popup_battery_window

0xce16,	// (0x00032508) bg_popup_sub_pane_cp25_ParamLimits

0xce16,	// (0x00032508) bg_popup_sub_pane_cp25

0x7325,	// (0x0002ca17) popup_battery_window_g1_ParamLimits

0x7325,	// (0x0002ca17) popup_battery_window_g1

0x7331,	// (0x0002ca23) popup_battery_window_t1_ParamLimits

0x7331,	// (0x0002ca23) popup_battery_window_t1

0x7343,	// (0x0002ca35) popup_battery_window_t2_ParamLimits

0x7343,	// (0x0002ca35) popup_battery_window_t2

0x0001,

0xfd8d,	// (0x0003547f) popup_battery_window_t_ParamLimits

0xfd8d,	// (0x0003547f) popup_battery_window_t

0xa9e0,	// (0x000300d2) midp_canvas_pane_ParamLimits

0xaa3c,	// (0x0003012e) midp_keypad_pane_ParamLimits

0xaa3c,	// (0x0003012e) midp_keypad_pane

0x10e3,	// (0x000267d5) main_midp_pane_ParamLimits

0x50fc,	// (0x0002a7ee) signal_pane_g2_cp_ParamLimits

0xdc82,	// (0x00033374) aid_size_cell_midp_keypad_ParamLimits

0xdc82,	// (0x00033374) aid_size_cell_midp_keypad

0xdca0,	// (0x00033392) midp_keyp_game_grid_pane_ParamLimits

0xdca0,	// (0x00033392) midp_keyp_game_grid_pane

0xdcc7,	// (0x000333b9) midp_keyp_rocker_pane_ParamLimits

0xdcc7,	// (0x000333b9) midp_keyp_rocker_pane

0xdd16,	// (0x00033408) midp_keyp_sk_left_pane_ParamLimits

0xdd16,	// (0x00033408) midp_keyp_sk_left_pane

0xdd6c,	// (0x0003345e) midp_keyp_sk_right_pane_ParamLimits

0xdd6c,	// (0x0003345e) midp_keyp_sk_right_pane

0xa089,	// (0x0002f77b) bg_button_pane_cp03

0xddc2,	// (0x000334b4) midp_keyp_sk_left_pane_g1

0xa089,	// (0x0002f77b) bg_button_pane_cp04

0xddc2,	// (0x000334b4) midp_keyp_sk_right_pane_g1

0x55e9,	// (0x0002acdb) midp_keyp_rocker_pane_g1

0xddca,	// (0x000334bc) keyp_game_cell_pane_ParamLimits

0xddca,	// (0x000334bc) keyp_game_cell_pane

0xa089,	// (0x0002f77b) bg_button_pane_cp02

0xddf0,	// (0x000334e2) keyp_game_cell_pane_g1

0xa18d,	// (0x0002f87f) popup_fep_vkb2_window_ParamLimits

0xa18d,	// (0x0002f87f) popup_fep_vkb2_window

0xc7e5,	// (0x00031ed7) aid_size_cell_vkb2_ParamLimits

0xc7e5,	// (0x00031ed7) aid_size_cell_vkb2

0xc81b,	// (0x00031f0d) popup_fep_vkb2_window_g1_ParamLimits

0xc81b,	// (0x00031f0d) popup_fep_vkb2_window_g1

0xc86b,	// (0x00031f5d) vkb2_area_bottom_pane_ParamLimits

0xc86b,	// (0x00031f5d) vkb2_area_bottom_pane

0xc8c7,	// (0x00031fb9) vkb2_area_keypad_pane_ParamLimits

0xc8c7,	// (0x00031fb9) vkb2_area_keypad_pane

0xc915,	// (0x00032007) vkb2_area_top_pane_ParamLimits

0xc915,	// (0x00032007) vkb2_area_top_pane

0xc99b,	// (0x0003208d) vkb2_top_entry_pane_ParamLimits

0xc99b,	// (0x0003208d) vkb2_top_entry_pane

0xc9c8,	// (0x000320ba) vkb2_top_grid_left_pane_ParamLimits

0xc9c8,	// (0x000320ba) vkb2_top_grid_left_pane

0xc9e8,	// (0x000320da) vkb2_top_grid_right_pane_ParamLimits

0xc9e8,	// (0x000320da) vkb2_top_grid_right_pane

0x2535,	// (0x00027c27) vkb2_cell_keypad_pane_ParamLimits

0x2535,	// (0x00027c27) vkb2_cell_keypad_pane

0xca2e,	// (0x00032120) vkb2_area_bottom_grid_pane_ParamLimits

0xca2e,	// (0x00032120) vkb2_area_bottom_grid_pane

0xca58,	// (0x0003214a) vkb2_area_bottom_pane_g1_ParamLimits

0xca58,	// (0x0003214a) vkb2_area_bottom_pane_g1

0xca7e,	// (0x00032170) vkb2_area_bottom_pane_g2_ParamLimits

0xca7e,	// (0x00032170) vkb2_area_bottom_pane_g2

0xcaaf,	// (0x000321a1) vkb2_area_bottom_pane_g3_ParamLimits

0xcaaf,	// (0x000321a1) vkb2_area_bottom_pane_g3

0x0002,

0xfd92,	// (0x00035484) vkb2_area_bottom_pane_g_ParamLimits

0xfd92,	// (0x00035484) vkb2_area_bottom_pane_g

0x26df,	// (0x00027dd1) vkb2_top_cell_left_pane_ParamLimits

0x26df,	// (0x00027dd1) vkb2_top_cell_left_pane

0xddf9,	// (0x000334eb) vkb2_top_entry_pane_g1_ParamLimits

0xddf9,	// (0x000334eb) vkb2_top_entry_pane_g1

0xde07,	// (0x000334f9) vkb2_top_entry_pane_t1_ParamLimits

0xde07,	// (0x000334f9) vkb2_top_entry_pane_t1

0x74ed,	// (0x0002cbdf) vkb2_top_entry_pane_t2_ParamLimits

0x74ed,	// (0x0002cbdf) vkb2_top_entry_pane_t2

0x751f,	// (0x0002cc11) vkb2_top_entry_pane_t3_ParamLimits

0x751f,	// (0x0002cc11) vkb2_top_entry_pane_t3

0x0002,

0xfd99,	// (0x0003548b) vkb2_top_entry_pane_t_ParamLimits

0xfd99,	// (0x0003548b) vkb2_top_entry_pane_t

0xcb19,	// (0x0003220b) vkb2_top_grid_right_pane_g1_ParamLimits

0xcb19,	// (0x0003220b) vkb2_top_grid_right_pane_g1

0x2742,	// (0x00027e34) vkb2_top_grid_right_pane_g2_ParamLimits

0x2742,	// (0x00027e34) vkb2_top_grid_right_pane_g2

0x275a,	// (0x00027e4c) vkb2_top_grid_right_pane_g3_ParamLimits

0x275a,	// (0x00027e4c) vkb2_top_grid_right_pane_g3

0xcb2f,	// (0x00032221) vkb2_top_grid_right_pane_g4_ParamLimits

0xcb2f,	// (0x00032221) vkb2_top_grid_right_pane_g4

0x0003,

0xfda0,	// (0x00035492) vkb2_top_grid_right_pane_g_ParamLimits

0xfda0,	// (0x00035492) vkb2_top_grid_right_pane_g

0x2788,	// (0x00027e7a) vkb2_top_cell_left_pane_g1

0x279f,	// (0x00027e91) vkb2_cell_keypad_pane_g1_ParamLimits

0x279f,	// (0x00027e91) vkb2_cell_keypad_pane_g1

0x7543,	// (0x0002cc35) vkb2_cell_keypad_pane_t1_ParamLimits

0x7543,	// (0x0002cc35) vkb2_cell_keypad_pane_t1

0x27ad,	// (0x00027e9f) vkb2_cell_bottom_grid_pane_ParamLimits

0x27ad,	// (0x00027e9f) vkb2_cell_bottom_grid_pane

0x27e6,	// (0x00027ed8) vkb2_cell_bottom_grid_pane_g1

0xdab3,	// (0x000331a5) aid_call2_pane_cp02

0xdabb,	// (0x000331ad) aid_call_pane_cp02

0xdac3,	// (0x000331b5) clock_digital_number_pane_cp10

0xdacb,	// (0x000331bd) clock_digital_number_pane_cp11

0xdad3,	// (0x000331c5) clock_digital_number_pane_cp12

0xdadb,	// (0x000331cd) clock_digital_number_pane_cp13

0xdae3,	// (0x000331d5) clock_digital_separator_pane_cp10

0x036a,	// (0x00025a5c) popup_clock_digital_analogue_window_cp2_g1

0x036a,	// (0x00025a5c) popup_clock_digital_analogue_window_cp2_g2

0xdaeb,	// (0x000331dd) popup_clock_digital_analogue_window_cp2_g3

0x036a,	// (0x00025a5c) popup_clock_digital_analogue_window_cp2_g4

0xdaeb,	// (0x000331dd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd55,	// (0x00035447) popup_clock_digital_analogue_window_cp2_g

0xdaf3,	// (0x000331e5) popup_clock_digital_analogue_window_cp2_t1

0xdb01,	// (0x000331f3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd60,	// (0x00035452) popup_clock_digital_analogue_window_cp2_t

0x55e9,	// (0x0002acdb) clock_digital_number_pane_cp10_g1

0x55e9,	// (0x0002acdb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003523a) clock_digital_number_pane_cp10_g

0x55e9,	// (0x0002acdb) clock_digital_separator_pane_cp10_g1

0x55e9,	// (0x0002acdb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0003523a) clock_digital_separator_pane_cp10_g

0x6f6f,	// (0x0002c661) uniindi_top_pane_g3

0x6f80,	// (0x0002c672) uniindi_top_pane_g4

0x25c0,	// (0x00027cb2) vkb2_row_keypad_pane_ParamLimits

0x25c0,	// (0x00027cb2) vkb2_row_keypad_pane

0x2802,	// (0x00027ef4) vkb2_cell_t_keypad_pane_ParamLimits

0x2802,	// (0x00027ef4) vkb2_cell_t_keypad_pane

0x2812,	// (0x00027f04) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2812,	// (0x00027f04) vkb2_cell_t_keypad_pane_cp08

0x2827,	// (0x00027f19) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2827,	// (0x00027f19) vkb2_cell_t_keypad_pane_cp09

0x283b,	// (0x00027f2d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x283b,	// (0x00027f2d) vkb2_cell_t_keypad_pane_cp01

0x284c,	// (0x00027f3e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x284c,	// (0x00027f3e) vkb2_cell_t_keypad_pane_cp02

0x285d,	// (0x00027f4f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x285d,	// (0x00027f4f) vkb2_cell_t_keypad_pane_cp03

0x286e,	// (0x00027f60) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x286e,	// (0x00027f60) vkb2_cell_t_keypad_pane_cp04

0x287f,	// (0x00027f71) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x287f,	// (0x00027f71) vkb2_cell_t_keypad_pane_cp05

0x2890,	// (0x00027f82) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2890,	// (0x00027f82) vkb2_cell_t_keypad_pane_cp06

0x28a3,	// (0x00027f95) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x28a3,	// (0x00027f95) vkb2_cell_t_keypad_pane_cp07

0x28b8,	// (0x00027faa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x28b8,	// (0x00027faa) vkb2_cell_t_keypad_pane_cp10

0x584c,	// (0x0002af3e) vkb2_cell_t_keypad_pane_g1

0x755a,	// (0x0002cc4c) vkb2_cell_t_keypad_pane_t1

0xa089,	// (0x0002f77b) popup_grid_graphic2_window

0xde40,	// (0x00033532) aid_size_cell_graphic2_ParamLimits

0xde40,	// (0x00033532) aid_size_cell_graphic2

0xde7e,	// (0x00033570) bg_popup_window_pane_cp21_ParamLimits

0xde7e,	// (0x00033570) bg_popup_window_pane_cp21

0xde8c,	// (0x0003357e) graphic2_pages_pane_ParamLimits

0xde8c,	// (0x0003357e) graphic2_pages_pane

0xdee4,	// (0x000335d6) grid_graphic2_control_pane_ParamLimits

0xdee4,	// (0x000335d6) grid_graphic2_control_pane

0xdf2c,	// (0x0003361e) grid_graphic2_pane_ParamLimits

0xdf2c,	// (0x0003361e) grid_graphic2_pane

0xdfb7,	// (0x000336a9) cell_graphic2_pane

0xa089,	// (0x0002f77b) main_comp_mode_pane

0x67d6,	// (0x0002bec8) list_ai3_gene_pane_ParamLimits

0xd7f3,	// (0x00032ee5) bg_popup_window_pane_cp19_ParamLimits

0x6bae,	// (0x0002c2a0) bg_touch_area_indi_pane_ParamLimits

0x6bae,	// (0x0002c2a0) bg_touch_area_indi_pane

0x6bc4,	// (0x0002c2b6) bg_touch_area_indi_pane_cp01_ParamLimits

0x6bc4,	// (0x0002c2b6) bg_touch_area_indi_pane_cp01

0x6bda,	// (0x0002c2cc) bg_touch_area_indi_pane_cp02_ParamLimits

0x6bda,	// (0x0002c2cc) bg_touch_area_indi_pane_cp02

0x6bf4,	// (0x0002c2e6) bg_touch_area_indi_pane_cp03_ParamLimits

0x6bf4,	// (0x0002c2e6) bg_touch_area_indi_pane_cp03

0x6c0e,	// (0x0002c300) popup_slider_window_g1_ParamLimits

0x6c2a,	// (0x0002c31c) popup_slider_window_g2_ParamLimits

0x6c46,	// (0x0002c338) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x000353dc) popup_slider_window_g_ParamLimits

0x6cac,	// (0x0002c39e) popup_slider_window_t1_ParamLimits

0x6d20,	// (0x0002c412) small_volume_slider_vertical_pane_ParamLimits

0xdfb7,	// (0x000336a9) cell_graphic2_pane_ParamLimits

0xe01a,	// (0x0003370c) bg_button_pane_cp10_ParamLimits

0xe01a,	// (0x0003370c) bg_button_pane_cp10

0xe02d,	// (0x0003371f) bg_button_pane_cp11_ParamLimits

0xe02d,	// (0x0003371f) bg_button_pane_cp11

0xe040,	// (0x00033732) graphic2_pages_pane_g1_ParamLimits

0xe040,	// (0x00033732) graphic2_pages_pane_g1

0xe05b,	// (0x0003374d) graphic2_pages_pane_g2_ParamLimits

0xe05b,	// (0x0003374d) graphic2_pages_pane_g2

0x0001,

0xfdae,	// (0x000354a0) graphic2_pages_pane_g_ParamLimits

0xfdae,	// (0x000354a0) graphic2_pages_pane_g

0xe073,	// (0x00033765) graphic2_pages_pane_t1_ParamLimits

0xe073,	// (0x00033765) graphic2_pages_pane_t1

0xe08b,	// (0x0003377d) cell_graphic2_control_pane_ParamLimits

0xe08b,	// (0x0003377d) cell_graphic2_control_pane

0xe0bf,	// (0x000337b1) cell_graphic2_pane_g1_ParamLimits

0xe0bf,	// (0x000337b1) cell_graphic2_pane_g1

0xc108,	// (0x000317fa) cell_graphic2_pane_g2_ParamLimits

0xc108,	// (0x000317fa) cell_graphic2_pane_g2

0xe0cc,	// (0x000337be) cell_graphic2_pane_g3_ParamLimits

0xe0cc,	// (0x000337be) cell_graphic2_pane_g3

0xc115,	// (0x00031807) cell_graphic2_pane_g4_ParamLimits

0xc115,	// (0x00031807) cell_graphic2_pane_g4

0xe0d9,	// (0x000337cb) cell_graphic2_pane_g5_ParamLimits

0xe0d9,	// (0x000337cb) cell_graphic2_pane_g5

0x0004,

0xfdb3,	// (0x000354a5) cell_graphic2_pane_g_ParamLimits

0xfdb3,	// (0x000354a5) cell_graphic2_pane_g

0xe0f9,	// (0x000337eb) cell_graphic2_pane_t1_ParamLimits

0xe0f9,	// (0x000337eb) cell_graphic2_pane_t1

0x3caf,	// (0x000293a1) grid_highlight_pane_cp11_ParamLimits

0x3caf,	// (0x000293a1) grid_highlight_pane_cp11

0xce16,	// (0x00032508) bg_button_pane_cp05

0xe142,	// (0x00033834) cell_graphic2_control_pane_g1

0x55e9,	// (0x0002acdb) bg_touch_area_indi_pane_g1

0x7842,	// (0x0002cf34) aid_cmod_rocker_key_size

0x784c,	// (0x0002cf3e) aid_cmode_itu_key_size

0x7856,	// (0x0002cf48) main_cmode_video_pane

0x7860,	// (0x0002cf52) main_comp_mode_itu_pane

0x786c,	// (0x0002cf5e) main_comp_mode_rocker_pane

0x7878,	// (0x0002cf6a) cell_cmode_rocker_pane_ParamLimits

0x7878,	// (0x0002cf6a) cell_cmode_rocker_pane

0x788c,	// (0x0002cf7e) cell_cmode_itu_pane_ParamLimits

0x788c,	// (0x0002cf7e) cell_cmode_itu_pane

0xd321,	// (0x00032a13) bg_button_pane_cp06_ParamLimits

0xd321,	// (0x00032a13) bg_button_pane_cp06

0x584c,	// (0x0002af3e) cell_cmode_rocker_pane_g1_ParamLimits

0x584c,	// (0x0002af3e) cell_cmode_rocker_pane_g1

0x6dc7,	// (0x0002c4b9) cell_cmode_rocker_pane_g2_ParamLimits

0x6dc7,	// (0x0002c4b9) cell_cmode_rocker_pane_g2

0x0001,

0xfdc3,	// (0x000354b5) cell_cmode_rocker_pane_g_ParamLimits

0xfdc3,	// (0x000354b5) cell_cmode_rocker_pane_g

0xa089,	// (0x0002f77b) bg_button_pane_cp07

0x78a3,	// (0x0002cf95) cell_cmode_itu_pane_g1

0x78ac,	// (0x0002cf9e) cell_cmode_itu_pane_t1

0x78ba,	// (0x0002cfac) cell_cmode_itu_pane_t2

0x0001,

0xfdc8,	// (0x000354ba) cell_cmode_itu_pane_t

0x6ff3,	// (0x0002c6e5) aid_touch_ctrl_left

0x6ffb,	// (0x0002c6ed) aid_touch_ctrl_right

0xa089,	// (0x0002f77b) compa_mode_pane

0xe16a,	// (0x0003385c) aid_cmod_rocker_key_size_cp

0xe174,	// (0x00033866) aid_cmode_itu_key_size_cp

0x78dc,	// (0x0002cfce) compa_mode_pane_g1

0x78e4,	// (0x0002cfd6) compa_mode_pane_g2

0x78ec,	// (0x0002cfde) compa_mode_pane_g3

0x0002,

0xfdcd,	// (0x000354bf) compa_mode_pane_g

0xe17e,	// (0x00033870) main_comp_mode_itu_pane_cp

0xe186,	// (0x00033878) main_comp_mode_rocker_pane_cp

0xe18e,	// (0x00033880) cell_cmode_itu_pane_cp_ParamLimits

0xe18e,	// (0x00033880) cell_cmode_itu_pane_cp

0xe1a3,	// (0x00033895) cell_cmode_rocker_pane_cp_ParamLimits

0xe1a3,	// (0x00033895) cell_cmode_rocker_pane_cp

0xd321,	// (0x00032a13) bg_button_pane_cp06_cp_ParamLimits

0xd321,	// (0x00032a13) bg_button_pane_cp06_cp

0x584c,	// (0x0002af3e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x584c,	// (0x0002af3e) cell_cmode_rocker_pane_g1_cp

0x55e9,	// (0x0002acdb) cell_cmode_rocker_pane_g2_cp

0xa089,	// (0x0002f77b) bg_button_pane_cp07_cp

0xe1b5,	// (0x000338a7) cell_cmode_itu_pane_g1_cp

0xe1be,	// (0x000338b0) cell_cmode_itu_pane_t1_cp

0xe1be,	// (0x000338b0) cell_cmode_itu_pane_t2_cp

0xbd0d,	// (0x000313ff) settings_code_pane_cp2

0xa410,	// (0x0002fb02) bg_popup_window_pane_cp3_ParamLimits

0xd02a,	// (0x0003271c) heading_pane_cp3_ParamLimits

0xd036,	// (0x00032728) listscroll_popup_graphic_pane_ParamLimits

0x1eb0,	// (0x000275a2) fep_hwr_aid_pane_ParamLimits

0x2294,	// (0x00027986) aid_touch_sctrl_top_ParamLimits

0x22a1,	// (0x00027993) sctrl_sk_top_pane_g1_ParamLimits

0x584c,	// (0x0002af3e) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x000353f5) sctrl_sk_top_pane_g_ParamLimits

0x22ae,	// (0x000279a0) sctrl_sk_top_pane_t1_ParamLimits

0x2294,	// (0x00027986) aid_touch_sctrl_bottom_ParamLimits

0x22ae,	// (0x000279a0) sctrl_sk_bottom_pane_t1_ParamLimits

0x6f39,	// (0x0002c62b) aid_area_touch_clock

0xc95d,	// (0x0003204f) aid_vkb2_area_top_pane_cell_ParamLimits

0xc95d,	// (0x0003204f) aid_vkb2_area_top_pane_cell

0xca08,	// (0x000320fa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xca08,	// (0x000320fa) aid_vkb2_area_bottom_pane_cell

0x74a5,	// (0x0002cb97) popup_char_count_window

0x7942,	// (0x0002d034) popup_char_count_window_g1

0x794b,	// (0x0002d03d) popup_char_count_window_g2

0x7954,	// (0x0002d046) popup_char_count_window_g3

0x0002,

0xfdd4,	// (0x000354c6) popup_char_count_window_g

0x795d,	// (0x0002d04f) popup_char_count_window_t1

0x2351,	// (0x00027a43) popup_fep_char_preview_window_ParamLimits

0x2351,	// (0x00027a43) popup_fep_char_preview_window

0xc97d,	// (0x0003206f) vkb2_top_candi_pane_ParamLimits

0xc97d,	// (0x0003206f) vkb2_top_candi_pane

0xe1cc,	// (0x000338be) cell_vkb2_top_candi_pane_ParamLimits

0xe1cc,	// (0x000338be) cell_vkb2_top_candi_pane

0x3638,	// (0x00028d2a) bg_popup_fep_char_preview_window_ParamLimits

0x3638,	// (0x00028d2a) bg_popup_fep_char_preview_window

0x28cd,	// (0x00027fbf) popup_fep_char_preview_window_t1_ParamLimits

0x28cd,	// (0x00027fbf) popup_fep_char_preview_window_t1

0x79bc,	// (0x0002d0ae) bg_popup_fep_char_preview_window_g1

0x79c4,	// (0x0002d0b6) bg_popup_fep_char_preview_window_g2

0x79cc,	// (0x0002d0be) bg_popup_fep_char_preview_window_g3

0x79d4,	// (0x0002d0c6) bg_popup_fep_char_preview_window_g4

0x79dc,	// (0x0002d0ce) bg_popup_fep_char_preview_window_g5

0x2907,	// (0x00027ff9) bg_popup_fep_char_preview_window_g6

0x79e4,	// (0x0002d0d6) bg_popup_fep_char_preview_window_g7

0x79ec,	// (0x0002d0de) bg_popup_fep_char_preview_window_g8

0x79f4,	// (0x0002d0e6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddb,	// (0x000354cd) bg_popup_fep_char_preview_window_g

0x584c,	// (0x0002af3e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x584c,	// (0x0002af3e) cell_vkb2_top_candi_pane_g1

0x5c9c,	// (0x0002b38e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5c9c,	// (0x0002b38e) cell_vkb2_top_candi_pane_g2

0x5cbd,	// (0x0002b3af) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5cbd,	// (0x0002b3af) cell_vkb2_top_candi_pane_g3

0x290f,	// (0x00028001) cell_vkb2_top_candi_pane_g4_ParamLimits

0x290f,	// (0x00028001) cell_vkb2_top_candi_pane_g4

0x79fc,	// (0x0002d0ee) cell_vkb2_top_candi_pane_g5_ParamLimits

0x79fc,	// (0x0002d0ee) cell_vkb2_top_candi_pane_g5

0x6dc7,	// (0x0002c4b9) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6dc7,	// (0x0002c4b9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdee,	// (0x000354e0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdee,	// (0x000354e0) cell_vkb2_top_candi_pane_g

0x2930,	// (0x00028022) cell_vkb2_top_candi_pane_t1

0x1d10,	// (0x00027402) aid_size_touch_slider_mark_ParamLimits

0x1d10,	// (0x00027402) aid_size_touch_slider_mark

0xdec8,	// (0x000335ba) grid_graphic2_catg_pane_ParamLimits

0xdec8,	// (0x000335ba) grid_graphic2_catg_pane

0xdf86,	// (0x00033678) popup_grid_graphic2_window_t1_ParamLimits

0xdf86,	// (0x00033678) popup_grid_graphic2_window_t1

0xdf9c,	// (0x0003368e) popup_grid_graphic2_window_t2_ParamLimits

0xdf9c,	// (0x0003368e) popup_grid_graphic2_window_t2

0x0001,

0xfda9,	// (0x0003549b) popup_grid_graphic2_window_t_ParamLimits

0xfda9,	// (0x0003549b) popup_grid_graphic2_window_t

0xce16,	// (0x00032508) bg_button_pane_cp05_ParamLimits

0xe142,	// (0x00033834) cell_graphic2_control_pane_g1_ParamLimits

0xe236,	// (0x00033928) cell_graphic2_catg_pane_ParamLimits

0xe236,	// (0x00033928) cell_graphic2_catg_pane

0xa089,	// (0x0002f77b) bg_button_pane_cp12

0xe248,	// (0x0003393a) cell_graphic2_catg_pane_g1

0x6f05,	// (0x0002c5f7) cell_tb_ext_pane_t1_ParamLimits

0x26ff,	// (0x00027df1) vkb2_top_cell_right_narrow_pane_ParamLimits

0x26ff,	// (0x00027df1) vkb2_top_cell_right_narrow_pane

0x2717,	// (0x00027e09) vkb2_top_cell_right_wide_pane_ParamLimits

0x2717,	// (0x00027e09) vkb2_top_cell_right_wide_pane

0x1ea2,	// (0x00027594) bg_vkb2_func_pane_ParamLimits

0x1ea2,	// (0x00027594) bg_vkb2_func_pane

0x2788,	// (0x00027e7a) vkb2_top_cell_left_pane_g1_ParamLimits

0x1ea2,	// (0x00027594) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1ea2,	// (0x00027594) bg_vkb2_fuc_pane_cp03

0x27e6,	// (0x00027ed8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2fe2,	// (0x000286d4) bg_vkb2_func_pane_g1

0x2fea,	// (0x000286dc) bg_vkb2_func_pane_g2

0x2ffa,	// (0x000286ec) bg_vkb2_func_pane_g3

0x2ff2,	// (0x000286e4) bg_vkb2_func_pane_g4

0x3002,	// (0x000286f4) bg_vkb2_func_pane_g5

0x300a,	// (0x000286fc) bg_vkb2_func_pane_g6

0x3012,	// (0x00028704) bg_vkb2_func_pane_g7

0x301a,	// (0x0002870c) bg_vkb2_func_pane_g8

0x2fda,	// (0x000286cc) bg_vkb2_func_pane_g9

0x0008,

0xfdfb,	// (0x000354ed) bg_vkb2_func_pane_g

0x1ea2,	// (0x00027594) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1ea2,	// (0x00027594) bg_vkb2_fuc_pane_cp01

0x2788,	// (0x00027e7a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2788,	// (0x00027e7a) vkb2_top_cell_right_wide_pane_g1

0x1ea2,	// (0x00027594) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1ea2,	// (0x00027594) bg_vkb2_fuc_pane_cp02

0x27e6,	// (0x00027ed8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x27e6,	// (0x00027ed8) vkb2_top_cell_right_narrow_pane_g1

0xc6ba,	// (0x00031dac) aid_touch_area_decrease_ParamLimits

0xc6ba,	// (0x00031dac) aid_touch_area_decrease

0xc6f4,	// (0x00031de6) aid_touch_area_increase_ParamLimits

0xc6f4,	// (0x00031de6) aid_touch_area_increase

0xc71c,	// (0x00031e0e) aid_touch_area_mute_ParamLimits

0xc71c,	// (0x00031e0e) aid_touch_area_mute

0xc744,	// (0x00031e36) aid_touch_area_slider_ParamLimits

0xc744,	// (0x00031e36) aid_touch_area_slider

0xd7ff,	// (0x00032ef1) popup_slider_window_g4_ParamLimits

0xd7ff,	// (0x00032ef1) popup_slider_window_g4

0xd827,	// (0x00032f19) popup_slider_window_g5_ParamLimits

0xd827,	// (0x00032f19) popup_slider_window_g5

0xd85b,	// (0x00032f4d) popup_slider_window_g6_ParamLimits

0xd85b,	// (0x00032f4d) popup_slider_window_g6

0x6cda,	// (0x0002c3cc) popup_slider_window_t2_ParamLimits

0x6cda,	// (0x0002c3cc) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x000353e9) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x000353e9) popup_slider_window_t

0xd877,	// (0x00032f69) slider_pane_ParamLimits

0xd877,	// (0x00032f69) slider_pane

0x7a38,	// (0x0002d12a) slider_pane_g1_ParamLimits

0x7a38,	// (0x0002d12a) slider_pane_g1

0x7a4c,	// (0x0002d13e) slider_pane_g2_ParamLimits

0x7a4c,	// (0x0002d13e) slider_pane_g2

0x7a62,	// (0x0002d154) slider_pane_g3_ParamLimits

0x7a62,	// (0x0002d154) slider_pane_g3

0x0003,

0xfe0e,	// (0x00035500) slider_pane_g_ParamLimits

0xfe0e,	// (0x00035500) slider_pane_g

0xb36a,	// (0x00030a5c) popup_tb_float_extension_window_ParamLimits

0xb36a,	// (0x00030a5c) popup_tb_float_extension_window

0x7a8e,	// (0x0002d180) aid_size_cell_tb_float_ext

0xa089,	// (0x0002f77b) bg_popup_sub_window_cp28

0x7a9a,	// (0x0002d18c) grid_tb_float_ext_pane

0x7aa6,	// (0x0002d198) cell_tb_float_ext_pane_ParamLimits

0x7aa6,	// (0x0002d198) cell_tb_float_ext_pane

0x7ac2,	// (0x0002d1b4) cell_tb_float_ext_pane_g1

0x7acb,	// (0x0002d1bd) grid_highlight_pane_cp12

0xc0e6,	// (0x000317d8) cell_last_hwr_side_pane_ParamLimits

0xc0e6,	// (0x000317d8) cell_last_hwr_side_pane

0x55e9,	// (0x0002acdb) cell_last_hwr_side_pane_g1

0x7ad4,	// (0x0002d1c6) cell_last_hwr_side_pane_g2

0x0001,

0xfe17,	// (0x00035509) cell_last_hwr_side_pane_g

0xcae4,	// (0x000321d6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcae4,	// (0x000321d6) vkb2_area_bottom_space_btn_pane

0x584c,	// (0x0002af3e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x755a,	// (0x0002cc4c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2930,	// (0x00028022) cell_vkb2_top_candi_pane_t1_ParamLimits

0x294e,	// (0x00028040) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x294e,	// (0x00028040) vkb2_area_bottom_space_btn_pane_g1

0x2988,	// (0x0002807a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2988,	// (0x0002807a) vkb2_area_bottom_space_btn_pane_g2

0x29be,	// (0x000280b0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x29be,	// (0x000280b0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1c,	// (0x0003550e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1c,	// (0x0003550e) vkb2_area_bottom_space_btn_pane_g

0x1f59,	// (0x0002764b) cel_fep_hwr_func_pane_ParamLimits

0x1f59,	// (0x0002764b) cel_fep_hwr_func_pane

0xc0bb,	// (0x000317ad) cell_hwr_side_button_pane_ParamLimits

0xc0bb,	// (0x000317ad) cell_hwr_side_button_pane

0x6f39,	// (0x0002c62b) aid_area_touch_clock_ParamLimits

0xce16,	// (0x00032508) bg_uniindi_top_pane_ParamLimits

0x6f4d,	// (0x0002c63f) uniindi_top_pane_g1_ParamLimits

0x6f63,	// (0x0002c655) uniindi_top_pane_g2_ParamLimits

0x6f6f,	// (0x0002c661) uniindi_top_pane_g3_ParamLimits

0x6f80,	// (0x0002c672) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x00035421) uniindi_top_pane_g_ParamLimits

0x6f8d,	// (0x0002c67f) uniindi_top_pane_t1_ParamLimits

0xce16,	// (0x00032508) bg_vkb2_func_pane_cp01_ParamLimits

0xce16,	// (0x00032508) bg_vkb2_func_pane_cp01

0x7add,	// (0x0002d1cf) cel_fep_hwr_func_pane_g1_ParamLimits

0x7add,	// (0x0002d1cf) cel_fep_hwr_func_pane_g1

0xce16,	// (0x00032508) bg_vkb2_func_pane_cp02_ParamLimits

0xce16,	// (0x00032508) bg_vkb2_func_pane_cp02

0x7add,	// (0x0002d1cf) cell_hwr_side_button_pane_g1_ParamLimits

0x7add,	// (0x0002d1cf) cell_hwr_side_button_pane_g1

0x2e5f,	// (0x00028551) status_pane_g4_ParamLimits

0x2e5f,	// (0x00028551) status_pane_g4

0x2e79,	// (0x0002856b) status_pane_t1

0x539c,	// (0x0002aa8e) form2_midp_gauge_slider_cont_pane

0x53a4,	// (0x0002aa96) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfde,	// (0x000316d0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbff0,	// (0x000316e2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x000351ed) form2_midp_gauge_slider_pane_t_ParamLimits

0x53da,	// (0x0002aacc) form2_midp_slider_pane_ParamLimits

0x2311,	// (0x00027a03) aid_size_cell_func_vkb2_ParamLimits

0x2311,	// (0x00027a03) aid_size_cell_func_vkb2

0x7a7a,	// (0x0002d16c) slider_pane_g4_ParamLimits

0x7a7a,	// (0x0002d16c) slider_pane_g4

0xcb45,	// (0x00032237) form2_midp_gauge_slider_pane_t2_cp01

0xcb53,	// (0x00032245) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcb53,	// (0x00032245) form2_midp_gauge_slider_pane_t3_cp01

0x2a33,	// (0x00028125) form2_midp_slider_pane_cp01

0xa089,	// (0x0002f77b) navi_smil_pane

0x7b16,	// (0x0002d208) navi_smil_pane_g1

0x7b1e,	// (0x0002d210) navi_smil_pane_t1

0x7aeb,	// (0x0002d1dd) form2_midp_slider_pane_g1

0x7af4,	// (0x0002d1e6) form2_midp_slider_pane_g2

0x7afc,	// (0x0002d1ee) form2_midp_slider_pane_g3

0x7aeb,	// (0x0002d1dd) form2_midp_slider_pane_g4

0xe251,	// (0x00033943) form2_midp_slider_pane_g5

0x0004,

0xfe25,	// (0x00035517) form2_midp_slider_pane_g

0x29f8,	// (0x000280ea) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x29f8,	// (0x000280ea) vkb2_area_bottom_space_btn_pane_g4

0xb551,	// (0x00030c43) lc0_navi_pane_ParamLimits

0xb551,	// (0x00030c43) lc0_navi_pane

0xb5c1,	// (0x00030cb3) lc0_stat_indi_pane_ParamLimits

0xb5c1,	// (0x00030cb3) lc0_stat_indi_pane

0xb5d6,	// (0x00030cc8) ls0_title_pane_ParamLimits

0xb5d6,	// (0x00030cc8) ls0_title_pane

0xd321,	// (0x00032a13) bg_popup_sub_pane_cp14_ParamLimits

0x6f20,	// (0x0002c612) list_uniindi_pane_ParamLimits

0x6f2c,	// (0x0002c61e) uniindi_top_pane_ParamLimits

0x6fcb,	// (0x0002c6bd) list_single_uniindi_pane_g1_ParamLimits

0x6fde,	// (0x0002c6d0) list_single_uniindi_pane_t1_ParamLimits

0xcb70,	// (0x00032262) lc0_stat_clock_pane_ParamLimits

0xcb70,	// (0x00032262) lc0_stat_clock_pane

0xe25a,	// (0x0003394c) lc0_stat_indi_pane_g1_ParamLimits

0xe25a,	// (0x0003394c) lc0_stat_indi_pane_g1

0xe267,	// (0x00033959) lc0_stat_indi_pane_g2_ParamLimits

0xe267,	// (0x00033959) lc0_stat_indi_pane_g2

0x0001,

0xfe30,	// (0x00035522) lc0_stat_indi_pane_g_ParamLimits

0xfe30,	// (0x00035522) lc0_stat_indi_pane_g

0xcb7d,	// (0x0003226f) lc0_uni_indicator_pane_ParamLimits

0xcb7d,	// (0x0003226f) lc0_uni_indicator_pane

0xe274,	// (0x00033966) ls0_title_pane_g1_ParamLimits

0xe274,	// (0x00033966) ls0_title_pane_g1

0xe288,	// (0x0003397a) ls0_title_pane_t1_ParamLimits

0xe288,	// (0x0003397a) ls0_title_pane_t1

0xcb8a,	// (0x0003227c) lc0_uni_indicator_pane_g1_ParamLimits

0xcb8a,	// (0x0003227c) lc0_uni_indicator_pane_g1

0x7b90,	// (0x0002d282) lc0_stat_clock_pane_t1

0xa089,	// (0x0002f77b) main_ai5_pane

0x7b9e,	// (0x0002d290) ai5_sk_pane_ParamLimits

0x7b9e,	// (0x0002d290) ai5_sk_pane

0xe2b6,	// (0x000339a8) cell_ai5_widget_pane_ParamLimits

0xe2b6,	// (0x000339a8) cell_ai5_widget_pane

0xe610,	// (0x00033d02) aid_size_cell_widget_grid

0x815b,	// (0x0002d84d) bg_ai5_widget_pane_ParamLimits

0x815b,	// (0x0002d84d) bg_ai5_widget_pane

0xe644,	// (0x00033d36) cell_ai5_widget_pane_g2

0xe658,	// (0x00033d4a) cell_ai5_widget_pane_g3

0xe672,	// (0x00033d64) cell_ai5_widget_pane_g4

0xe682,	// (0x00033d74) cell_ai5_widget_pane_g5

0xe692,	// (0x00033d84) cell_ai5_widget_pane_g6

0xe69e,	// (0x00033d90) cell_ai5_widget_pane_g7

0xe6aa,	// (0x00033d9c) cell_ai5_widget_pane_t1_ParamLimits

0xe6aa,	// (0x00033d9c) cell_ai5_widget_pane_t1

0x8292,	// (0x0002d984) cell_ai5_widget_pane_t2_ParamLimits

0x8292,	// (0x0002d984) cell_ai5_widget_pane_t2

0x82aa,	// (0x0002d99c) cell_ai5_widget_pane_t3_ParamLimits

0x82aa,	// (0x0002d99c) cell_ai5_widget_pane_t3

0xe6c7,	// (0x00033db9) cell_ai5_widget_pane_t4_ParamLimits

0xe6c7,	// (0x00033db9) cell_ai5_widget_pane_t4

0xe6ed,	// (0x00033ddf) cell_ai5_widget_pane_t5_ParamLimits

0xe6ed,	// (0x00033ddf) cell_ai5_widget_pane_t5

0x8308,	// (0x0002d9fa) cell_ai5_widget_pane_t6_ParamLimits

0x8308,	// (0x0002d9fa) cell_ai5_widget_pane_t6

0x831a,	// (0x0002da0c) cell_ai5_widget_pane_t7_ParamLimits

0x831a,	// (0x0002da0c) cell_ai5_widget_pane_t7

0x8333,	// (0x0002da25) cell_ai5_widget_pane_t8_ParamLimits

0x8333,	// (0x0002da25) cell_ai5_widget_pane_t8

0x0009,

0xfe4a,	// (0x0003553c) cell_ai5_widget_pane_t_ParamLimits

0xfe4a,	// (0x0003553c) cell_ai5_widget_pane_t

0xe75a,	// (0x00033e4c) grid_ai5_widget_pane

0xd321,	// (0x00032a13) highlight_cell_ai5_widget_pane_ParamLimits

0xd321,	// (0x00032a13) highlight_cell_ai5_widget_pane

0xe768,	// (0x00033e5a) ai5_sk_left_pane

0xe772,	// (0x00033e64) ai5_sk_middle_pane

0xe77c,	// (0x00033e6e) ai5_sk_right_pane

0x83be,	// (0x0002dab0) bg_ai5_widget_pane_g1_ParamLimits

0x83be,	// (0x0002dab0) bg_ai5_widget_pane_g1

0x83ca,	// (0x0002dabc) bg_ai5_widget_pane_g2_ParamLimits

0x83ca,	// (0x0002dabc) bg_ai5_widget_pane_g2

0x83d6,	// (0x0002dac8) bg_ai5_widget_pane_g3_ParamLimits

0x83d6,	// (0x0002dac8) bg_ai5_widget_pane_g3

0x83e2,	// (0x0002dad4) bg_ai5_widget_pane_g4_ParamLimits

0x83e2,	// (0x0002dad4) bg_ai5_widget_pane_g4

0x83ee,	// (0x0002dae0) bg_ai5_widget_pane_g5_ParamLimits

0x83ee,	// (0x0002dae0) bg_ai5_widget_pane_g5

0x83fa,	// (0x0002daec) bg_ai5_widget_pane_g6_ParamLimits

0x83fa,	// (0x0002daec) bg_ai5_widget_pane_g6

0x8406,	// (0x0002daf8) bg_ai5_widget_pane_g7_ParamLimits

0x8406,	// (0x0002daf8) bg_ai5_widget_pane_g7

0x8412,	// (0x0002db04) bg_ai5_widget_pane_g8_ParamLimits

0x8412,	// (0x0002db04) bg_ai5_widget_pane_g8

0x841e,	// (0x0002db10) bg_ai5_widget_pane_g9_ParamLimits

0x841e,	// (0x0002db10) bg_ai5_widget_pane_g9

0x0008,

0xfe5f,	// (0x00035551) bg_ai5_widget_pane_g_ParamLimits

0xfe5f,	// (0x00035551) bg_ai5_widget_pane_g

0xe7b2,	// (0x00033ea4) cell_shortcut_ai5_widget_pane_ParamLimits

0xe7b2,	// (0x00033ea4) cell_shortcut_ai5_widget_pane

0x0b8d,	// (0x0002627f) bg_cell_shortcut_ai5_widget_pane

0x8469,	// (0x0002db5b) cell_grid_ai5_widget_pane_g1

0x0b8d,	// (0x0002627f) highlight_cell_shortcut_ai5_widget_pane

0x2fea,	// (0x000286dc) ai5_sk_left_pane_g1

0x8472,	// (0x0002db64) ai5_sk_left_pane_g2

0x847a,	// (0x0002db6c) ai5_sk_left_pane_g3

0x8482,	// (0x0002db74) ai5_sk_left_pane_g4

0x0003,

0xfe72,	// (0x00035564) ai5_sk_left_pane_g

0x848a,	// (0x0002db7c) ai5_sk_left_pane_t1

0x2fe2,	// (0x000286d4) ai5_sk_right_pane_g1

0x8498,	// (0x0002db8a) ai5_sk_right_pane_g2

0x84a0,	// (0x0002db92) ai5_sk_right_pane_g3

0x84a8,	// (0x0002db9a) ai5_sk_right_pane_g4

0x0003,

0xfe7b,	// (0x0003556d) ai5_sk_right_pane_g

0x84b0,	// (0x0002dba2) ai5_sk_right_pane_t1

0x2fe2,	// (0x000286d4) ai5_sk_middle_pane_g1

0x2fea,	// (0x000286dc) ai5_sk_middle_pane_g2

0x3002,	// (0x000286f4) ai5_sk_middle_pane_g3

0x84a0,	// (0x0002db92) ai5_sk_middle_pane_g4

0x847a,	// (0x0002db6c) ai5_sk_middle_pane_g5

0x84be,	// (0x0002dbb0) ai5_sk_middle_pane_g6

0xe7c5,	// (0x00033eb7) ai5_sk_middle_pane_g7

0x0006,

0xfe84,	// (0x00035576) ai5_sk_middle_pane_g

0xb43b,	// (0x00030b2d) aid_touch_area_size_lc0_ParamLimits

0xb43b,	// (0x00030b2d) aid_touch_area_size_lc0

0x20f8,	// (0x000277ea) cell_hwr_candidate_pane_t1_ParamLimits

0x1792,	// (0x00026e84) aid_touch_navi_pane

0xb6e1,	// (0x00030dd3) status_dt_navi_pane_ParamLimits

0xb6e1,	// (0x00030dd3) status_dt_navi_pane

0xb6f9,	// (0x00030deb) status_dt_sta_pane_ParamLimits

0xb6f9,	// (0x00030deb) status_dt_sta_pane

0xe7cd,	// (0x00033ebf) dt_sta_controll_pane

0xe7da,	// (0x00033ecc) dt_sta_indi_pane

0xe7e7,	// (0x00033ed9) dt_sta_title_pane

0xce16,	// (0x00032508) bg_dt_sta_indi_pane_ParamLimits

0xce16,	// (0x00032508) bg_dt_sta_indi_pane

0xe7f9,	// (0x00033eeb) dt_sta_battery_pane

0xe801,	// (0x00033ef3) dt_sta_indi_pane_g1

0xe80a,	// (0x00033efc) dt_sta_indi_pane_g2

0xe813,	// (0x00033f05) dt_sta_indi_pane_g3

0x0002,

0xfe93,	// (0x00035585) dt_sta_indi_pane_g

0xe81c,	// (0x00033f0e) dt_sta_signal_pane

0xd321,	// (0x00032a13) bg_dt_sta_title_pane_ParamLimits

0xd321,	// (0x00032a13) bg_dt_sta_title_pane

0xe825,	// (0x00033f17) dt_sta_title_pane_g1

0xe82d,	// (0x00033f1f) dt_sta_title_pane_t1_ParamLimits

0xe82d,	// (0x00033f1f) dt_sta_title_pane_t1

0xa089,	// (0x0002f77b) bg_dt_sta_control_pane

0xe842,	// (0x00033f34) dt_sta_controll_pane_g1

0xe84b,	// (0x00033f3d) bg_dt_sta_title_pane_g1

0xe854,	// (0x00033f46) bg_dt_sta_title_pane_g2

0xe85d,	// (0x00033f4f) bg_dt_sta_title_pane_g3

0x0002,

0xfe9a,	// (0x0003558c) bg_dt_sta_title_pane_g

0x55e9,	// (0x0002acdb) bg_dt_sta_indi_pane_g1

0x856c,	// (0x0002dc5e) dt_sta_signal_pane_g1

0x8574,	// (0x0002dc66) dt_sta_signal_pane_g2

0x0001,

0xfea1,	// (0x00035593) dt_sta_signal_pane_g

0x857c,	// (0x0002dc6e) dt_sta_battery_pane_g1

0x8585,	// (0x0002dc77) dt_sta_battery_pane_t1

0x55e9,	// (0x0002acdb) bg_dt_sta_control_pane_g1

0x054d,	// (0x00025c3f) fep_china_uni_eep_pane

0x0555,	// (0x00025c47) fep_china_uni_entry_pane_ParamLimits

0x0565,	// (0x00025c57) popup_fep_china_uni_window_g1_ParamLimits

0x0575,	// (0x00025c67) popup_fep_china_uni_window_g2_ParamLimits

0x0575,	// (0x00025c67) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00034e0f) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00034e0f) popup_fep_china_uni_window_g

0x8594,	// (0x0002dc86) fep_china_uni_eep_pane_g1

0x859c,	// (0x0002dc8e) fep_china_uni_eep_pane_t1

0x7b0d,	// (0x0002d1ff) aid_touch_area_size_smil_player

0x18e0,	// (0x00026fd2) lc0_clock_pane

0x2e6d,	// (0x0002855f) status_pane_g5_ParamLimits

0x2e6d,	// (0x0002855f) status_pane_g5

0xae92,	// (0x00030584) popup_keymap_window

0x2e33,	// (0x00028525) status_icon_pane

0xe658,	// (0x00033d4a) cell_ai5_widget_pane_g3_ParamLimits

0xe672,	// (0x00033d64) cell_ai5_widget_pane_g4_ParamLimits

0xe682,	// (0x00033d74) cell_ai5_widget_pane_g5_ParamLimits

0x8239,	// (0x0002d92b) cell_ai5_widget_pane_g8_ParamLimits

0x8239,	// (0x0002d92b) cell_ai5_widget_pane_g8

0x824d,	// (0x0002d93f) cell_ai5_widget_pane_g9_ParamLimits

0x824d,	// (0x0002d93f) cell_ai5_widget_pane_g9

0x8261,	// (0x0002d953) cell_ai5_widget_pane_g10_ParamLimits

0x8261,	// (0x0002d953) cell_ai5_widget_pane_g10

0x85ab,	// (0x0002dc9d) status_icon_pane_g1

0xa089,	// (0x0002f77b) bg_popup_sub_pane_cp13

0x85b3,	// (0x0002dca5) popup_keymap_window_t1

0xaba3,	// (0x00030295) control_pane_g6_ParamLimits

0xaba3,	// (0x00030295) control_pane_g6

0xabb0,	// (0x000302a2) control_pane_g7_ParamLimits

0xabb0,	// (0x000302a2) control_pane_g7

0xabbd,	// (0x000302af) control_pane_g8_ParamLimits

0xabbd,	// (0x000302af) control_pane_g8

0xe7cd,	// (0x00033ebf) dt_sta_controll_pane_ParamLimits

0xe7da,	// (0x00033ecc) dt_sta_indi_pane_ParamLimits

0xe7e7,	// (0x00033ed9) dt_sta_title_pane_ParamLimits

0xd263,	// (0x00032955) aid_size_touch_scroll_bar_cale

0xf273,	// (0x00034965) popup_discreet_window_ParamLimits

0xf273,	// (0x00034965) popup_discreet_window

0xa1d7,	// (0x0002f8c9) popup_sk_window

0x3638,	// (0x00028d2a) bg_popup_sub_pane_cp28_ParamLimits

0x3638,	// (0x00028d2a) bg_popup_sub_pane_cp28

0x85c1,	// (0x0002dcb3) popup_discreet_window_g1_ParamLimits

0x85c1,	// (0x0002dcb3) popup_discreet_window_g1

0x85e1,	// (0x0002dcd3) popup_discreet_window_t1_ParamLimits

0x85e1,	// (0x0002dcd3) popup_discreet_window_t1

0x85ff,	// (0x0002dcf1) popup_discreet_window_t2_ParamLimits

0x85ff,	// (0x0002dcf1) popup_discreet_window_t2

0x0002,

0xfea6,	// (0x00035598) popup_discreet_window_t_ParamLimits

0xfea6,	// (0x00035598) popup_discreet_window_t

0x2a69,	// (0x0002815b) popup_sk_window_g1

0x2a73,	// (0x00028165) popup_sk_window_g2

0x0001,

0xfead,	// (0x0003559f) popup_sk_window_g

0x2a7b,	// (0x0002816d) popup_sk_window_t1

0x2a89,	// (0x0002817b) popup_sk_window_t1_copy1

0xe644,	// (0x00033d36) cell_ai5_widget_pane_g2_ParamLimits

0xe70d,	// (0x00033dff) cell_ai5_widget_pane_t9_ParamLimits

0xe70d,	// (0x00033dff) cell_ai5_widget_pane_t9

0xa089,	// (0x0002f77b) main_fep_fshwr2_pane

0xcba9,	// (0x0003229b) aid_fshwr2_btn_pane

0xcbba,	// (0x000322ac) aid_fshwr2_syb_pane

0xcbcb,	// (0x000322bd) aid_fshwr2_txt_pane

0xcbd7,	// (0x000322c9) fshwr2_func_candi_pane

0xcbf8,	// (0x000322ea) fshwr2_hwr_syb_pane

0xcc15,	// (0x00032307) fshwr2_icf_pane

0xa089,	// (0x0002f77b) fshwr2_icf_bg_pane

0x2aff,	// (0x000281f1) fshwr2_icf_pane_t1_ParamLimits

0x2aff,	// (0x000281f1) fshwr2_icf_pane_t1

0x036a,	// (0x00025a5c) fshwr2_func_candi_pane_g1

0xe866,	// (0x00033f58) fshwr2_func_candi_row_pane_ParamLimits

0xe866,	// (0x00033f58) fshwr2_func_candi_row_pane

0xcc41,	// (0x00032333) cell_fshwr2_syb_pane_ParamLimits

0xcc41,	// (0x00032333) cell_fshwr2_syb_pane

0x584c,	// (0x0002af3e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x584c,	// (0x0002af3e) fshwr2_hwr_syb_pane_g1

0xa089,	// (0x0002f77b) bg_popup_call_pane_cp01

0xcc57,	// (0x00032349) fshwr2_func_candi_cell_pane_ParamLimits

0xcc57,	// (0x00032349) fshwr2_func_candi_cell_pane

0xe88d,	// (0x00033f7f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe88d,	// (0x00033f7f) fshwr2_func_candi_cell_bg_pane

0xcca0,	// (0x00032392) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcca0,	// (0x00032392) fshwr2_func_candi_cell_pane_g1

0xccd7,	// (0x000323c9) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xccd7,	// (0x000323c9) fshwr2_func_candi_cell_pane_t1

0xa089,	// (0x0002f77b) bg_button_pane_cp08

0x866d,	// (0x0002dd5f) cell_fshwr2_syb_bg_pane

0xccf2,	// (0x000323e4) cell_fshwr2_syb_bg_pane_g1

0xccfa,	// (0x000323ec) cell_fshwr2_syb_bg_pane_t1

0xd321,	// (0x00032a13) main_tmo_pane

0xbbd4,	// (0x000312c6) uni_indicator_pane_g1_ParamLimits

0xbbea,	// (0x000312dc) uni_indicator_pane_g2_ParamLimits

0xbc00,	// (0x000312f2) uni_indicator_pane_g3_ParamLimits

0xbc13,	// (0x00031305) uni_indicator_pane_g4_ParamLimits

0xbc13,	// (0x00031305) uni_indicator_pane_g4

0x41a4,	// (0x00029896) uni_indicator_pane_g5_ParamLimits

0x41a4,	// (0x00029896) uni_indicator_pane_g5

0x41a4,	// (0x00029896) uni_indicator_pane_g6_ParamLimits

0x41a4,	// (0x00029896) uni_indicator_pane_g6

0xf91c,	// (0x0003500e) uni_indicator_pane_g_ParamLimits

0xc68a,	// (0x00031d7c) popup_tmo_note_window_ParamLimits

0xc68a,	// (0x00031d7c) popup_tmo_note_window

0xd321,	// (0x00032a13) fshwr2_bg_pane

0xccc8,	// (0x000323ba) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xccc8,	// (0x000323ba) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb2,	// (0x000355a4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb2,	// (0x000355a4) fshwr2_func_candi_cell_pane_g

0x55e9,	// (0x0002acdb) bg_popup_window_pane_cp01

0x2bc8,	// (0x000282ba) bg_popup_window_pane_g1_cp01

0x8675,	// (0x0002dd67) bg_popup_window_pane_cp22_ParamLimits

0x8675,	// (0x0002dd67) bg_popup_window_pane_cp22

0x8683,	// (0x0002dd75) listscroll_tmo_link_pane_ParamLimits

0x8683,	// (0x0002dd75) listscroll_tmo_link_pane

0x86c3,	// (0x0002ddb5) popup_tmo_note_window_g1_ParamLimits

0x86c3,	// (0x0002ddb5) popup_tmo_note_window_g1

0x86d0,	// (0x0002ddc2) tmo_note_info_pane_ParamLimits

0x86d0,	// (0x0002ddc2) tmo_note_info_pane

0xe899,	// (0x00033f8b) list_tmo_note_info_pane_g1_ParamLimits

0xe899,	// (0x00033f8b) list_tmo_note_info_pane_g1

0x8701,	// (0x0002ddf3) list_tmo_note_info_pane_g2_ParamLimits

0x8701,	// (0x0002ddf3) list_tmo_note_info_pane_g2

0x0001,

0xfeb7,	// (0x000355a9) list_tmo_note_info_pane_g_ParamLimits

0xfeb7,	// (0x000355a9) list_tmo_note_info_pane_g

0x871d,	// (0x0002de0f) list_tmo_note_info_text_pane_ParamLimits

0x871d,	// (0x0002de0f) list_tmo_note_info_text_pane

0x87a2,	// (0x0002de94) list_tmo_link_pane

0x87af,	// (0x0002dea1) scroll_pane_cp20

0x87bc,	// (0x0002deae) list_single_tmo_link_pane_ParamLimits

0x87bc,	// (0x0002deae) list_single_tmo_link_pane

0x87cc,	// (0x0002debe) list_single_tmo_link_pane_t1

0x87da,	// (0x0002decc) list_tmo_note_info_text_pane_t1_ParamLimits

0x87da,	// (0x0002decc) list_tmo_note_info_text_pane_t1

0xa707,	// (0x0002fdf9) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa707,	// (0x0002fdf9) aid_size_touch_scroll_bar_cp01

0x9c9b,	// (0x0002f38d) aid_size_touch_slider_marker

0xa1c7,	// (0x0002f8b9) popup_settings_window_ParamLimits

0xa1c7,	// (0x0002f8b9) popup_settings_window

0xec16,	// (0x00034308) popup_candi_list_indi_window

0x1792,	// (0x00026e84) aid_touch_navi_pane_ParamLimits

0x2268,	// (0x0002795a) rs_clock_indi_pane

0x2271,	// (0x00027963) sctrl_sk_bottom_pane_ParamLimits

0x2282,	// (0x00027974) sctrl_sk_top_pane_ParamLimits

0x236b,	// (0x00027a5d) popup_fep_tooltip_window

0xe610,	// (0x00033d02) aid_size_cell_widget_grid_ParamLimits

0xe62f,	// (0x00033d21) cell_ai5_widget_pane_g1_ParamLimits

0xe62f,	// (0x00033d21) cell_ai5_widget_pane_g1

0xe692,	// (0x00033d84) cell_ai5_widget_pane_g6_ParamLimits

0xe69e,	// (0x00033d90) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe35,	// (0x00035527) cell_ai5_widget_pane_g_ParamLimits

0xfe35,	// (0x00035527) cell_ai5_widget_pane_g

0xe73c,	// (0x00033e2e) cell_ai5_widget_pane_t10_ParamLimits

0xe73c,	// (0x00033e2e) cell_ai5_widget_pane_t10

0xe75a,	// (0x00033e4c) grid_ai5_widget_pane_ParamLimits

0xe786,	// (0x00033e78) cell_contacts_ai5_widget_pane_ParamLimits

0xe786,	// (0x00033e78) cell_contacts_ai5_widget_pane

0x8614,	// (0x0002dd06) popup_discreet_window_t3_ParamLimits

0x8614,	// (0x0002dd06) popup_discreet_window_t3

0xcc2d,	// (0x0003231f) popup_fshwr2_char_preview_window_ParamLimits

0xcc2d,	// (0x0003231f) popup_fshwr2_char_preview_window

0xe8b0,	// (0x00033fa2) tmo_note_info_pane_t1

0xe8c5,	// (0x00033fb7) tmo_note_info_pane_t2

0xe8de,	// (0x00033fd0) tmo_note_info_pane_t3

0x877e,	// (0x0002de70) tmo_note_info_pane_t4

0x8790,	// (0x0002de82) tmo_note_info_pane_t5

0x0004,

0xfebc,	// (0x000355ae) tmo_note_info_pane_t

0x87a2,	// (0x0002de94) list_tmo_link_pane_ParamLimits

0x87af,	// (0x0002dea1) scroll_pane_cp20_ParamLimits

0xa089,	// (0x0002f77b) bg_popup_fep_char_preview_window_cp01

0x87f3,	// (0x0002dee5) popup_fshwr2_char_preview_window_t1

0x8801,	// (0x0002def3) popup_candi_list_indi_window_g1

0x880a,	// (0x0002defc) bg_cell_contacts_ai5_widget_pane

0x8816,	// (0x0002df08) cell_contacts_ai5_widget_pane_g1

0x882b,	// (0x0002df1d) cell_contacts_ai5_widget_pane_g2

0x8837,	// (0x0002df29) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec7,	// (0x000355b9) cell_contacts_ai5_widget_pane_g

0x8843,	// (0x0002df35) cell_contacts_ai5_widget_pane_t1

0xd321,	// (0x00032a13) highlight_cell_shortcut_ai5_widget_pane_cp01

0x88ba,	// (0x0002dfac) settings_container_pane

0x0b8d,	// (0x0002627f) listscroll_set_pane_copy1

0x4d41,	// (0x0002a433) scroll_pane_cp121_copy1

0x88c6,	// (0x0002dfb8) set_content_pane_copy1

0x88ce,	// (0x0002dfc0) aid_height_set_list_copy1_ParamLimits

0x88ce,	// (0x0002dfc0) aid_height_set_list_copy1

0x43a4,	// (0x00029a96) aid_size_parent_copy1_ParamLimits

0x43a4,	// (0x00029a96) aid_size_parent_copy1

0x88da,	// (0x0002dfcc) button_value_adjust_pane_cp6_copy1_ParamLimits

0x88da,	// (0x0002dfcc) button_value_adjust_pane_cp6_copy1

0x10e3,	// (0x000267d5) list_highlight_pane_cp2_copy1_ParamLimits

0x10e3,	// (0x000267d5) list_highlight_pane_cp2_copy1

0x88ee,	// (0x0002dfe0) list_set_pane_copy1_ParamLimits

0x88ee,	// (0x0002dfe0) list_set_pane_copy1

0x8855,	// (0x0002df47) main_pane_set_t1_copy1_ParamLimits

0x8855,	// (0x0002df47) main_pane_set_t1_copy1

0x888f,	// (0x0002df81) main_pane_set_t2_copy1_ParamLimits

0x888f,	// (0x0002df81) main_pane_set_t2_copy1

0x89af,	// (0x0002e0a1) main_pane_set_t3_copy1

0x89bd,	// (0x0002e0af) main_pane_set_t4_copy1

0x88ae,	// (0x0002dfa0) set_content_pane_g1_copy1_ParamLimits

0x88ae,	// (0x0002dfa0) set_content_pane_g1_copy1

0x89cb,	// (0x0002e0bd) setting_code_pane_copy1

0x89d3,	// (0x0002e0c5) setting_slider_graphic_pane_copy1

0x89d3,	// (0x0002e0c5) setting_slider_pane_copy1

0x89d3,	// (0x0002e0c5) setting_text_pane_copy1

0x89d3,	// (0x0002e0c5) setting_volume_pane_copy1

0x89cb,	// (0x0002e0bd) settings_code_pane_cp2_copy1

0x89db,	// (0x0002e0cd) settings_code_pane_cp_copy1_ParamLimits

0x89db,	// (0x0002e0cd) settings_code_pane_cp_copy1

0x2bd1,	// (0x000282c3) volume_set_pane_copy1

0x89ef,	// (0x0002e0e1) volume_set_pane_g10_copy1

0x89fb,	// (0x0002e0ed) volume_set_pane_g1_copy1

0x8a05,	// (0x0002e0f7) volume_set_pane_g2_copy1

0x8a0f,	// (0x0002e101) volume_set_pane_g3_copy1

0x8a19,	// (0x0002e10b) volume_set_pane_g4_copy1

0x8a23,	// (0x0002e115) volume_set_pane_g5_copy1

0x8a2d,	// (0x0002e11f) volume_set_pane_g6_copy1

0x8a37,	// (0x0002e129) volume_set_pane_g7_copy1

0x8a41,	// (0x0002e133) volume_set_pane_g8_copy1

0x8a4b,	// (0x0002e13d) volume_set_pane_g9_copy1

0xa410,	// (0x0002fb02) bg_set_opt_pane_cp_copy1_ParamLimits

0xa410,	// (0x0002fb02) bg_set_opt_pane_cp_copy1

0x2bdd,	// (0x000282cf) setting_slider_pane_t1_copy1_ParamLimits

0x2bdd,	// (0x000282cf) setting_slider_pane_t1_copy1

0x2bfb,	// (0x000282ed) setting_slider_pane_t2_copy1_ParamLimits

0x2bfb,	// (0x000282ed) setting_slider_pane_t2_copy1

0x2c15,	// (0x00028307) setting_slider_pane_t3_copy1_ParamLimits

0x2c15,	// (0x00028307) setting_slider_pane_t3_copy1

0x2c2d,	// (0x0002831f) slider_set_pane_copy1_ParamLimits

0x2c2d,	// (0x0002831f) slider_set_pane_copy1

0xd379,	// (0x00032a6b) set_opt_bg_pane_g1_copy2

0xd381,	// (0x00032a73) set_opt_bg_pane_g2_copy2

0x8a55,	// (0x0002e147) set_opt_bg_pane_g3_copy2

0xd391,	// (0x00032a83) set_opt_bg_pane_g4_copy2

0xd399,	// (0x00032a8b) set_opt_bg_pane_g5_copy2

0xd3a1,	// (0x00032a93) set_opt_bg_pane_g6_copy2

0x8a5f,	// (0x0002e151) set_opt_bg_pane_g7_copy2

0x8a69,	// (0x0002e15b) set_opt_bg_pane_g8_copy2

0x8a73,	// (0x0002e165) set_opt_bg_pane_g9_copy2

0x2c43,	// (0x00028335) aid_size_touch_slider_mark_copy1_ParamLimits

0x2c43,	// (0x00028335) aid_size_touch_slider_mark_copy1

0x8a7d,	// (0x0002e16f) slider_set_pane_g1_copy1

0x2c57,	// (0x00028349) slider_set_pane_g2_copy1

0x1d30,	// (0x00027422) slider_set_pane_g3_copy1_ParamLimits

0x1d30,	// (0x00027422) slider_set_pane_g3_copy1

0x1d44,	// (0x00027436) slider_set_pane_g4_copy1_ParamLimits

0x1d44,	// (0x00027436) slider_set_pane_g4_copy1

0x1d5c,	// (0x0002744e) slider_set_pane_g5_copy1_ParamLimits

0x1d5c,	// (0x0002744e) slider_set_pane_g5_copy1

0x1d30,	// (0x00027422) slider_set_pane_g6_copy1_ParamLimits

0x1d30,	// (0x00027422) slider_set_pane_g6_copy1

0x2c5f,	// (0x00028351) slider_set_pane_g7_copy1_ParamLimits

0x2c5f,	// (0x00028351) slider_set_pane_g7_copy1

0xa183,	// (0x0002f875) bg_set_opt_pane_cp2_copy1

0x8a86,	// (0x0002e178) setting_slider_graphic_pane_g1_copy1

0x8a8f,	// (0x0002e181) setting_slider_graphic_pane_t1_copy1

0x8a9f,	// (0x0002e191) setting_slider_graphic_pane_t2_copy1

0x8aaf,	// (0x0002e1a1) slider_set_pane_cp_copy1

0x8abf,	// (0x0002e1b1) input_focus_pane_cp1_copy1

0x8ac8,	// (0x0002e1ba) list_set_text_pane_copy1

0x8ad0,	// (0x0002e1c2) setting_text_pane_g1_copy1

0xf4a1,	// (0x00034b93) set_text_pane_t1_copy1

0x8abf,	// (0x0002e1b1) input_focus_pane_cp2_copy1

0x8ad0,	// (0x0002e1c2) setting_code_pane_g1_copy1

0x8ad9,	// (0x0002e1cb) setting_code_pane_t1_copy1

0x0875,	// (0x00025f67) list_set_graphic_pane_copy1

0xa183,	// (0x0002f875) bg_set_opt_pane_cp4_copy1

0x0888,	// (0x00025f7a) list_set_graphic_pane_g1_copy1_ParamLimits

0x0888,	// (0x00025f7a) list_set_graphic_pane_g1_copy1

0x8ae7,	// (0x0002e1d9) list_set_graphic_pane_g2_copy1

0x08a0,	// (0x00025f92) list_set_graphic_pane_t1_copy1_ParamLimits

0x08a0,	// (0x00025f92) list_set_graphic_pane_t1_copy1

0x55e9,	// (0x0002acdb) rs_clock_indi_pane_g1

0x8aef,	// (0x0002e1e1) rs_clock_indi_pane_t1

0x8afd,	// (0x0002e1ef) rs_indi_pane

0x8b05,	// (0x0002e1f7) rs_indi_pane_g1

0x8b0e,	// (0x0002e200) rs_indi_pane_g2

0x8b17,	// (0x0002e209) rs_indi_pane_g3

0x0002,

0xfece,	// (0x000355c0) rs_indi_pane_g

0x0b8d,	// (0x0002627f) bg_popup_preview_window_pane_cp03

0x8b20,	// (0x0002e212) popup_fep_tooltip_window_t1

0x6294,	// (0x0002b986) popup_note2_window_g2_ParamLimits

0x6294,	// (0x0002b986) popup_note2_window_g2

0x0001,

0xfc67,	// (0x00035359) popup_note2_window_g_ParamLimits

0xfc67,	// (0x00035359) popup_note2_window_g

0x679c,	// (0x0002be8e) bg_popup_sub_pane_cp11_ParamLimits

0x67a9,	// (0x0002be9b) cell_ai3_links_pane_g1_ParamLimits

0x67c0,	// (0x0002beb2) cell_ai3_links_pane_t1

0xf4a1,	// (0x00034b93) set_text_pane_t1_copy1_ParamLimits

0x0aa6,	// (0x00026198) cell_graphic_popup_pane_cp2_ParamLimits

0x0aa6,	// (0x00026198) cell_graphic_popup_pane_cp2

0x8b2e,	// (0x0002e220) cell_graphic_popup_pane_g1_cp2

0xd076,	// (0x00032768) cell_graphic_popup_pane_g2_cp2

0x8b36,	// (0x0002e228) cell_graphic_popup_pane_g3_cp2

0x8b3e,	// (0x0002e230) cell_graphic_popup_pane_t2_cp2

0xd087,	// (0x00032779) grid_highlight_pane_cp3_cp2

0xd622,	// (0x00032d14) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd321,	// (0x00032a13) main_tmo_pane_ParamLimits

0xc67e,	// (0x00031d70) popup_tmo_big_image_note_window

0xe61e,	// (0x00033d10) cell_ai5_widget_list_pane

0xe626,	// (0x00033d18) cell_ai5_widget_lrg_icon_pane

0xe8b0,	// (0x00033fa2) tmo_note_info_pane_t1_ParamLimits

0xe8c5,	// (0x00033fb7) tmo_note_info_pane_t2_ParamLimits

0xe8de,	// (0x00033fd0) tmo_note_info_pane_t3_ParamLimits

0x877e,	// (0x0002de70) tmo_note_info_pane_t4_ParamLimits

0x8790,	// (0x0002de82) tmo_note_info_pane_t5_ParamLimits

0xfebc,	// (0x000355ae) tmo_note_info_pane_t_ParamLimits

0x88ba,	// (0x0002dfac) settings_container_pane_ParamLimits

0x8ab7,	// (0x0002e1a9) indicator_popup_pane_cp5

0x8ab7,	// (0x0002e1a9) indicator_popup_pane_cp6

0x0875,	// (0x00025f67) list_set_graphic_pane_copy1_ParamLimits

0xa089,	// (0x0002f77b) bg_popup_window_pane_cp23

0x8b4c,	// (0x0002e23e) popup_tmo_big_image_note_window_g1

0x8b58,	// (0x0002e24a) popup_tmo_big_image_note_window_t1

0x8b68,	// (0x0002e25a) popup_tmo_big_image_note_window_t2

0x8b78,	// (0x0002e26a) popup_tmo_big_image_note_window_t3

0x0002,

0xfed5,	// (0x000355c7) popup_tmo_big_image_note_window_t

0x55e9,	// (0x0002acdb) cell_ai5_widget_lrg_icon_pane_g1

0xe8f3,	// (0x00033fe5) cell_ai5_widget_lrg_icon_pane_t1

0xe901,	// (0x00033ff3) cell_ai5_widget_list_row_pane_ParamLimits

0xe901,	// (0x00033ff3) cell_ai5_widget_list_row_pane

0xe919,	// (0x0003400b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe919,	// (0x0003400b) cell_ai5_widget_list_row_pane_g1

0xe926,	// (0x00034018) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe926,	// (0x00034018) cell_ai5_widget_list_row_pane_t1

0xe951,	// (0x00034043) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe951,	// (0x00034043) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedc,	// (0x000355ce) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedc,	// (0x000355ce) cell_ai5_widget_list_row_pane_t

0xa089,	// (0x0002f77b) main_fep_vtchi_ss_pane

0x8c2e,	// (0x0002e320) popup_fep_char_pre_window

0x8c36,	// (0x0002e328) popup_fep_ituss_window

0xe979,	// (0x0003406b) popup_fep_vkbss_window

0xe988,	// (0x0003407a) grid_vkbss_keypad_pane_ParamLimits

0xe988,	// (0x0003407a) grid_vkbss_keypad_pane

0x8c93,	// (0x0002e385) ituss_keypad_pane

0x2c81,	// (0x00028373) aid_vkbss_key_offset_ParamLimits

0x2c81,	// (0x00028373) aid_vkbss_key_offset

0xcd09,	// (0x000323fb) cell_vkbss_key_pane_ParamLimits

0xcd09,	// (0x000323fb) cell_vkbss_key_pane

0x8ca2,	// (0x0002e394) bg_cell_vkbss_key_g1_ParamLimits

0x8ca2,	// (0x0002e394) bg_cell_vkbss_key_g1

0xe998,	// (0x0003408a) cell_vkbss_key_3p_pane_ParamLimits

0xe998,	// (0x0003408a) cell_vkbss_key_3p_pane

0xe9b2,	// (0x000340a4) cell_vkbss_key_g1_ParamLimits

0xe9b2,	// (0x000340a4) cell_vkbss_key_g1

0xe9cc,	// (0x000340be) cell_vkbss_key_t1_ParamLimits

0xe9cc,	// (0x000340be) cell_vkbss_key_t1

0x2ca3,	// (0x00028395) cell_ituss_key_pane_ParamLimits

0x2ca3,	// (0x00028395) cell_ituss_key_pane

0x8d01,	// (0x0002e3f3) bg_cell_ituss_key_g1_ParamLimits

0x8d01,	// (0x0002e3f3) bg_cell_ituss_key_g1

0x8d0d,	// (0x0002e3ff) cell_ituss_key_pane_g1_ParamLimits

0x8d0d,	// (0x0002e3ff) cell_ituss_key_pane_g1

0x2cb4,	// (0x000283a6) cell_ituss_key_pane_g2_ParamLimits

0x2cb4,	// (0x000283a6) cell_ituss_key_pane_g2

0x0002,

0xfee3,	// (0x000355d5) cell_ituss_key_pane_g_ParamLimits

0xfee3,	// (0x000355d5) cell_ituss_key_pane_g

0x2ce0,	// (0x000283d2) cell_ituss_key_t1_ParamLimits

0x2ce0,	// (0x000283d2) cell_ituss_key_t1

0x2d1a,	// (0x0002840c) cell_ituss_key_t2_ParamLimits

0x2d1a,	// (0x0002840c) cell_ituss_key_t2

0x2d4b,	// (0x0002843d) cell_ituss_key_t3_ParamLimits

0x2d4b,	// (0x0002843d) cell_ituss_key_t3

0x2d1a,	// (0x0002840c) cell_ituss_key_t4_ParamLimits

0x2d1a,	// (0x0002840c) cell_ituss_key_t4

0x0004,

0xfeea,	// (0x000355dc) cell_ituss_key_t_ParamLimits

0xfeea,	// (0x000355dc) cell_ituss_key_t

0x8d33,	// (0x0002e425) cell_vkbss_key_3p_pane_g1

0x8d3b,	// (0x0002e42d) cell_vkbss_key_3p_pane_g2

0x8d43,	// (0x0002e435) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef5,	// (0x000355e7) cell_vkbss_key_3p_pane_g

0x0b8d,	// (0x0002627f) bg_popup_fep_char_preview_window_cp02

0x8d4b,	// (0x0002e43d) popup_fep_char_pre_window_t1

0xe5fd,	// (0x00033cef) main_ai5_sk_pane

0x880a,	// (0x0002defc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8816,	// (0x0002df08) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x882b,	// (0x0002df1d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8837,	// (0x0002df29) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec7,	// (0x000355b9) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8843,	// (0x0002df35) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd321,	// (0x00032a13) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9f7,	// (0x000340e9) main_ai5_sk_pane_g1

0x3470,	// (0x00028b62) popup_query_code_window_g1

0x8c4c,	// (0x0002e33e) popup_fep_vkb_icf_pane

0x8c6d,	// (0x0002e35f) popup_fep_vtchi_icf_pane

0x8d62,	// (0x0002e454) bg_icf_pane

0x8d6e,	// (0x0002e460) list_vkb_icf_pane

0x8d7d,	// (0x0002e46f) bg_icf_pane_cp01

0x8d90,	// (0x0002e482) vtchi_icf_list_pane

0x8da0,	// (0x0002e492) list_vkb_icf_pane_t1_ParamLimits

0x8da0,	// (0x0002e492) list_vkb_icf_pane_t1

0x8db6,	// (0x0002e4a8) vtchi_icf_list_pane_t1_ParamLimits

0x8db6,	// (0x0002e4a8) vtchi_icf_list_pane_t1

0x8c36,	// (0x0002e328) popup_fep_ituss_window_ParamLimits

0x8c6d,	// (0x0002e35f) popup_fep_vtchi_icf_pane_ParamLimits

0x8c93,	// (0x0002e385) ituss_keypad_pane_ParamLimits

0x2c75,	// (0x00028367) ituss_sks_pane

0x8d62,	// (0x0002e454) bg_icf_pane_ParamLimits

0x8c0e,	// (0x0002e300) icf_edit_indi_pane_ParamLimits

0x8c0e,	// (0x0002e300) icf_edit_indi_pane

0x8d6e,	// (0x0002e460) list_vkb_icf_pane_ParamLimits

0x8d7d,	// (0x0002e46f) bg_icf_pane_cp01_ParamLimits

0x8c21,	// (0x0002e313) icf_edit_indi_pane_cp01_ParamLimits

0x8c21,	// (0x0002e313) icf_edit_indi_pane_cp01

0x8d98,	// (0x0002e48a) vtchi_query_pane

0x7add,	// (0x0002d1cf) icf_edit_indi_pane_g1_ParamLimits

0x7add,	// (0x0002d1cf) icf_edit_indi_pane_g1

0xea00,	// (0x000340f2) icf_edit_indi_pane_g2_ParamLimits

0xea00,	// (0x000340f2) icf_edit_indi_pane_g2

0x0001,

0xff0d,	// (0x000355ff) icf_edit_indi_pane_g_ParamLimits

0xff0d,	// (0x000355ff) icf_edit_indi_pane_g

0xea12,	// (0x00034104) icf_edit_indi_pane_t1

0x8dce,	// (0x0002e4c0) bg_input_focus_pane_cp042

0xd25a,	// (0x0003294c) vtchi_button_pane

0x8dd7,	// (0x0002e4c9) vtchi_query_pane_t1

0x8de5,	// (0x0002e4d7) vtchi_query_pane_t2

0x8df3,	// (0x0002e4e5) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x000355ee) vtchi_query_pane_t

0xa089,	// (0x0002f77b) bg_button_pane_cp13

0x8e01,	// (0x0002e4f3) vtchi_button_pane_g1

0x2d8e,	// (0x00028480) ituss_sks_pane_g1

0x2d99,	// (0x0002848b) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x000355f5) ituss_sks_pane_g

0x8e09,	// (0x0002e4fb) ituss_sks_pane_t1

0x8e17,	// (0x0002e509) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x000355fa) ituss_sks_pane_t

0x50c6,	// (0x0002a7b8) indicator_nsta_pane_cp_g1

0x50ce,	// (0x0002a7c0) indicator_nsta_pane_cp_g2

0x50d6,	// (0x0002a7c8) indicator_nsta_pane_cp_g3

0x50c6,	// (0x0002a7b8) indicator_nsta_pane_cp_g4

0x50ce,	// (0x0002a7c0) indicator_nsta_pane_cp_g5

0x50d6,	// (0x0002a7c8) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x000351a3) indicator_nsta_pane_cp_g

0xe124,	// (0x00033816) cell_graphic2_pane_t2_ParamLimits

0xe124,	// (0x00033816) cell_graphic2_pane_t2

0x0001,

0xfdbe,	// (0x000354b0) cell_graphic2_pane_t_ParamLimits

0xfdbe,	// (0x000354b0) cell_graphic2_pane_t

0xe15c,	// (0x0003384e) cell_graphic2_control_pane_t1

0xa955,	// (0x00030047) signal_pane_g3_ParamLimits

0xa955,	// (0x00030047) signal_pane_g3

0xa969,	// (0x0003005b) signal_pane_g4_ParamLimits

0xa969,	// (0x0003005b) signal_pane_g4

0xe963,	// (0x00034055) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe963,	// (0x00034055) cell_ai5_widget_list_row_pane_t3

0x8d21,	// (0x0002e413) cell_ituss_key_pane_t1_ParamLimits

0x8d21,	// (0x0002e413) cell_ituss_key_pane_t1

0x30df,	// (0x000287d1) form_field_data_wide_pane_vc_t2_ParamLimits

0x30df,	// (0x000287d1) form_field_data_wide_pane_vc_t2

0x30f3,	// (0x000287e5) form_field_data_wide_pane_vc_t3_ParamLimits

0x30f3,	// (0x000287e5) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00034ef6) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00034ef6) form_field_data_wide_pane_vc_t

0x4d81,	// (0x0002a473) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4d81,	// (0x0002a473) form_field_slider_wide_pane_vc_t3

0x4e57,	// (0x0002a549) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4e57,	// (0x0002a549) form_field_popup_wide_pane_vc_t2

0x4e6e,	// (0x0002a560) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4e6e,	// (0x0002a560) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00035192) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00035192) form_field_popup_wide_pane_vc_t

0xcba9,	// (0x0003229b) aid_fshwr2_btn_pane_ParamLimits

0xcbba,	// (0x000322ac) aid_fshwr2_syb_pane_ParamLimits

0xcbcb,	// (0x000322bd) aid_fshwr2_txt_pane_ParamLimits

0xd321,	// (0x00032a13) fshwr2_bg_pane_ParamLimits

0xcbd7,	// (0x000322c9) fshwr2_func_candi_pane_ParamLimits

0xcbf8,	// (0x000322ea) fshwr2_hwr_syb_pane_ParamLimits

0xcc15,	// (0x00032307) fshwr2_icf_pane_ParamLimits

0xeffd,	// (0x000346ef) list_double_graphic_pane_vc_g4_ParamLimits

0xeffd,	// (0x000346ef) list_double_graphic_pane_vc_g4

0x2cd4,	// (0x000283c6) cell_ituss_key_pane_g3_ParamLimits

0x2cd4,	// (0x000283c6) cell_ituss_key_pane_g3

0x2d7c,	// (0x0002846e) cell_ituss_key_t5_ParamLimits

0x2d7c,	// (0x0002846e) cell_ituss_key_t5

0xe979,	// (0x0003406b) popup_fep_vkbss_window_ParamLimits

0xe607,	// (0x00033cf9) aid_cell_ai5_quarter

0xea12,	// (0x00034104) icf_edit_indi_pane_t1_ParamLimits

0xcebe,	// (0x000325b0) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xcebe,	// (0x000325b0) aid_tch_indicator_popup_pane_cp2

0xced1,	// (0x000325c3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xced1,	// (0x000325c3) aid_tch_query_popup_data_pane_cp2

0x3418,	// (0x00028b0a) aid_tch_query_popup_pane_ParamLimits

0x3418,	// (0x00028b0a) aid_tch_query_popup_pane

0x3418,	// (0x00028b0a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3418,	// (0x00028b0a) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

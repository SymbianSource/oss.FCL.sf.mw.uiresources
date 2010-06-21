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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00032856 };

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
0x5a67,	// (0x000382bd) Screen

0x5a71,	// (0x000382c7) application_window_ParamLimits

0x5a71,	// (0x000382c7) application_window

0xf47c,	// (0x00041cd2) screen_g1

0x5a7f,	// (0x000382d5) area_bottom_pane_ParamLimits

0x5a7f,	// (0x000382d5) area_bottom_pane

0xf486,	// (0x00041cdc) area_top_pane_ParamLimits

0xf486,	// (0x00041cdc) area_top_pane

0xbb93,	// (0x0003e3e9) main_pane_ParamLimits

0xbb93,	// (0x0003e3e9) main_pane

0xf544,	// (0x00041d9a) misc_graphics

0x617f,	// (0x000389d5) battery_pane_ParamLimits

0x617f,	// (0x000389d5) battery_pane

0x3d1a,	// (0x00036570) bg_status_flat_pane_g8

0x3d22,	// (0x00036578) bg_status_flat_pane_g9

0x3451,	// (0x00035ca7) context_pane_ParamLimits

0x3451,	// (0x00035ca7) context_pane

0x62b1,	// (0x00038b07) navi_pane_ParamLimits

0x62b1,	// (0x00038b07) navi_pane

0x631d,	// (0x00038b73) signal_pane_ParamLimits

0x631d,	// (0x00038b73) signal_pane

0x0008,

0xf879,	// (0x000420cf) bg_status_flat_pane_g

0x637e,	// (0x00038bd4) status_pane_g1_ParamLimits

0x637e,	// (0x00038bd4) status_pane_g1

0x34b7,	// (0x00035d0d) status_pane_g2_ParamLimits

0x34b7,	// (0x00035d0d) status_pane_g2

0x34c3,	// (0x00035d19) status_pane_g3_ParamLimits

0x34c3,	// (0x00035d19) status_pane_g3

0x0004,

0xf7a5,	// (0x00041ffb) status_pane_g_ParamLimits

0xf7a5,	// (0x00041ffb) status_pane_g

0x638a,	// (0x00038be0) title_pane_ParamLimits

0x638a,	// (0x00038be0) title_pane

0x63c7,	// (0x00038c1d) uni_indicator_pane_ParamLimits

0x63c7,	// (0x00038c1d) uni_indicator_pane

0x33a8,	// (0x00035bfe) bg_list_pane_ParamLimits

0x33a8,	// (0x00035bfe) bg_list_pane

0xee2b,	// (0x00041681) find_pane

0x6122,	// (0x00038978) listscroll_app_pane_ParamLimits

0x6122,	// (0x00038978) listscroll_app_pane

0x33c8,	// (0x00035c1e) listscroll_form_pane

0xee33,	// (0x00041689) listscroll_gen_pane_ParamLimits

0xee33,	// (0x00041689) listscroll_gen_pane

0xc38a,	// (0x0003ebe0) listscroll_set_pane

0x5dc7,	// (0x0003861d) main_idle_act_pane

0x3213,	// (0x00035a69) main_idle_trad_pane

0x3213,	// (0x00035a69) main_list_empty_pane

0x10b2,	// (0x00033908) main_midp_pane

0x33e2,	// (0x00035c38) main_pane_g1_ParamLimits

0x33e2,	// (0x00035c38) main_pane_g1

0xc3a0,	// (0x0003ebf6) popup_ai_message_window_ParamLimits

0xc3a0,	// (0x0003ebf6) popup_ai_message_window

0xc436,	// (0x0003ec8c) popup_fep_china_uni_window_ParamLimits

0xc436,	// (0x0003ec8c) popup_fep_china_uni_window

0xc474,	// (0x0003ecca) popup_fep_japan_candidate_window_ParamLimits

0xc474,	// (0x0003ecca) popup_fep_japan_candidate_window

0xc492,	// (0x0003ece8) popup_fep_japan_predictive_window_ParamLimits

0xc492,	// (0x0003ece8) popup_fep_japan_predictive_window

0xc4be,	// (0x0003ed14) popup_find_window

0xc4cb,	// (0x0003ed21) popup_grid_graphic_window_ParamLimits

0xc4cb,	// (0x0003ed21) popup_grid_graphic_window

0xc4e9,	// (0x0003ed3f) popup_large_graphic_colour_window

0xc508,	// (0x0003ed5e) popup_menu_window_ParamLimits

0xc508,	// (0x0003ed5e) popup_menu_window

0xc640,	// (0x0003ee96) popup_note_image_window

0xc62e,	// (0x0003ee84) popup_note_wait_window_ParamLimits

0xc62e,	// (0x0003ee84) popup_note_wait_window

0xc62e,	// (0x0003ee84) popup_note_window_ParamLimits

0xc62e,	// (0x0003ee84) popup_note_window

0xc694,	// (0x0003eeea) popup_query_code_window_ParamLimits

0xc694,	// (0x0003eeea) popup_query_code_window

0xc6a6,	// (0x0003eefc) popup_query_data_code_window_ParamLimits

0xc6a6,	// (0x0003eefc) popup_query_data_code_window

0xc6bb,	// (0x0003ef11) popup_query_data_window_ParamLimits

0xc6bb,	// (0x0003ef11) popup_query_data_window

0xc6d1,	// (0x0003ef27) popup_query_sat_info_window_ParamLimits

0xc6d1,	// (0x0003ef27) popup_query_sat_info_window

0xc702,	// (0x0003ef58) popup_snote_single_graphic_window_ParamLimits

0xc702,	// (0x0003ef58) popup_snote_single_graphic_window

0xc702,	// (0x0003ef58) popup_snote_single_text_window_ParamLimits

0xc702,	// (0x0003ef58) popup_snote_single_text_window

0xc715,	// (0x0003ef6b) popup_sub_window_general

0xc819,	// (0x0003f06f) popup_window_general_ParamLimits

0xc819,	// (0x0003f06f) popup_window_general

0x33f0,	// (0x00035c46) power_save_pane

0xc226,	// (0x0003ea7c) control_pane_g1_ParamLimits

0xc226,	// (0x0003ea7c) control_pane_g1

0xc247,	// (0x0003ea9d) control_pane_g2_ParamLimits

0xc247,	// (0x0003ea9d) control_pane_g2

0x339a,	// (0x00035bf0) control_pane_g3_ParamLimits

0x339a,	// (0x00035bf0) control_pane_g3

0x0007,

0xf78d,	// (0x00041fe3) control_pane_g_ParamLimits

0xf78d,	// (0x00041fe3) control_pane_g

0xc289,	// (0x0003eadf) control_pane_t1_ParamLimits

0xc289,	// (0x0003eadf) control_pane_t1

0xc2db,	// (0x0003eb31) control_pane_t2_ParamLimits

0xc2db,	// (0x0003eb31) control_pane_t2

0x0002,

0xf79e,	// (0x00041ff4) control_pane_t_ParamLimits

0xf79e,	// (0x00041ff4) control_pane_t

0x3342,	// (0x00035b98) navi_navi_volume_pane_cp1

0x334a,	// (0x00035ba0) status_small_icon_pane

0x3352,	// (0x00035ba8) status_small_pane_g1_ParamLimits

0x3352,	// (0x00035ba8) status_small_pane_g1

0x607a,	// (0x000388d0) status_small_pane_g2_ParamLimits

0x607a,	// (0x000388d0) status_small_pane_g2

0x6086,	// (0x000388dc) status_small_pane_g3_ParamLimits

0x6086,	// (0x000388dc) status_small_pane_g3

0x6092,	// (0x000388e8) status_small_pane_g4_ParamLimits

0x6092,	// (0x000388e8) status_small_pane_g4

0x609e,	// (0x000388f4) status_small_pane_g5_ParamLimits

0x609e,	// (0x000388f4) status_small_pane_g5

0x3386,	// (0x00035bdc) status_small_pane_g6_ParamLimits

0x3386,	// (0x00035bdc) status_small_pane_g6

0x0007,

0xf77c,	// (0x00041fd2) status_small_pane_g_ParamLimits

0xf77c,	// (0x00041fd2) status_small_pane_g

0x60cd,	// (0x00038923) status_small_pane_t1

0x60e7,	// (0x0003893d) status_small_wait_pane_ParamLimits

0x60e7,	// (0x0003893d) status_small_wait_pane

0x5f02,	// (0x00038758) aid_levels_signal_ParamLimits

0x5f02,	// (0x00038758) aid_levels_signal

0x5f13,	// (0x00038769) signal_pane_g1_ParamLimits

0x5f13,	// (0x00038769) signal_pane_g1

0x5f29,	// (0x0003877f) signal_pane_g2_ParamLimits

0x5f29,	// (0x0003877f) signal_pane_g2

0x0003,

0xf70d,	// (0x00041f63) signal_pane_g_ParamLimits

0xf70d,	// (0x00041f63) signal_pane_g

0x2db8,	// (0x0003560e) context_pane_g1

0x5ae4,	// (0x0003833a) title_pane_g1

0x5b0e,	// (0x00038364) title_pane_t1

0x0091,	// (0x000328e7) title_pane_t2

0x00b7,	// (0x0003290d) title_pane_t3

0x0002,

0xf557,	// (0x00041dad) title_pane_t

0x63dd,	// (0x00038c33) aid_levels_battery_ParamLimits

0x63dd,	// (0x00038c33) aid_levels_battery

0x63f0,	// (0x00038c46) battery_pane_g1_ParamLimits

0x63f0,	// (0x00038c46) battery_pane_g1

0x6405,	// (0x00038c5b) battery_pane_g2_ParamLimits

0x6405,	// (0x00038c5b) battery_pane_g2

0x0001,

0xf7b0,	// (0x00042006) battery_pane_g_ParamLimits

0xf7b0,	// (0x00042006) battery_pane_g

0x6561,	// (0x00038db7) uni_indicator_pane_g1

0x6577,	// (0x00038dcd) uni_indicator_pane_g2

0x658d,	// (0x00038de3) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00042177) uni_indicator_pane_g

0x0862,	// (0x000330b8) navi_icon_pane_ParamLimits

0x0862,	// (0x000330b8) navi_icon_pane

0xf544,	// (0x00041d9a) navi_midp_pane

0xf544,	// (0x00041d9a) navi_navi_pane

0x0862,	// (0x000330b8) navi_text_pane_ParamLimits

0x0862,	// (0x000330b8) navi_text_pane

0xf47c,	// (0x00041cd2) status_small_wait_pane_g1

0x0456,	// (0x00032cac) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00042172) status_small_wait_pane_g

0x4284,	// (0x00036ada) navi_navi_icon_text_pane

0x429e,	// (0x00036af4) navi_navi_pane_g1_ParamLimits

0x429e,	// (0x00036af4) navi_navi_pane_g1

0x428c,	// (0x00036ae2) navi_navi_pane_g2_ParamLimits

0x428c,	// (0x00036ae2) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00042140) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00042140) navi_navi_pane_g

0x42b0,	// (0x00036b06) navi_navi_tabs_pane

0x4284,	// (0x00036ada) navi_navi_text_pane

0x4284,	// (0x00036ada) navi_navi_volume_pane

0x4260,	// (0x00036ab6) navi_text_pane_t1

0x4254,	// (0x00036aaa) navi_icon_pane_g1

0x41a8,	// (0x000369fe) navi_navi_text_pane_t1

0xcaa0,	// (0x0003f2f6) navi_navi_volume_pane_g1

0xcaa8,	// (0x0003f2fe) volume_small_pane

0x64ae,	// (0x00038d04) navi_navi_icon_text_pane_g1

0x64b6,	// (0x00038d0c) navi_navi_icon_text_pane_t1

0x3d62,	// (0x000365b8) navi_tabs_2_long_pane

0x3d62,	// (0x000365b8) navi_tabs_2_pane

0x3d62,	// (0x000365b8) navi_tabs_3_long_pane

0x3d62,	// (0x000365b8) navi_tabs_3_pane

0x3d62,	// (0x000365b8) navi_tabs_4_pane

0xca80,	// (0x0003f2d6) tabs_2_active_pane_ParamLimits

0xca80,	// (0x0003f2d6) tabs_2_active_pane

0xca90,	// (0x0003f2e6) tabs_2_passive_pane_ParamLimits

0xca90,	// (0x0003f2e6) tabs_2_passive_pane

0xca4e,	// (0x0003f2a4) tabs_3_active_pane_ParamLimits

0xca4e,	// (0x0003f2a4) tabs_3_active_pane

0xca5e,	// (0x0003f2b4) tabs_3_passive_pane_ParamLimits

0xca5e,	// (0x0003f2b4) tabs_3_passive_pane

0xca6f,	// (0x0003f2c5) tabs_3_passive_pane_cp_ParamLimits

0xca6f,	// (0x0003f2c5) tabs_3_passive_pane_cp

0xca0a,	// (0x0003f260) tabs_4_active_pane_ParamLimits

0xca0a,	// (0x0003f260) tabs_4_active_pane

0xca1b,	// (0x0003f271) tabs_4_passive_pane_ParamLimits

0xca1b,	// (0x0003f271) tabs_4_passive_pane

0xca2c,	// (0x0003f282) tabs_4_passive_pane_cp_ParamLimits

0xca2c,	// (0x0003f282) tabs_4_passive_pane_cp

0xca3d,	// (0x0003f293) tabs_4_passive_pane_cp2_ParamLimits

0xca3d,	// (0x0003f293) tabs_4_passive_pane_cp2

0xc9ea,	// (0x0003f240) tabs_2_long_active_pane_ParamLimits

0xc9ea,	// (0x0003f240) tabs_2_long_active_pane

0xc9fa,	// (0x0003f250) tabs_2_long_passive_pane_ParamLimits

0xc9fa,	// (0x0003f250) tabs_2_long_passive_pane

0xc9b5,	// (0x0003f20b) tabs_3_long_active_pane_ParamLimits

0xc9b5,	// (0x0003f20b) tabs_3_long_active_pane

0xc9c6,	// (0x0003f21c) tabs_3_long_passive_pane_ParamLimits

0xc9c6,	// (0x0003f21c) tabs_3_long_passive_pane

0xc9d9,	// (0x0003f22f) tabs_3_long_passive_pane_cp_ParamLimits

0xc9d9,	// (0x0003f22f) tabs_3_long_passive_pane_cp

0xc95b,	// (0x0003f1b1) volume_small_pane_g1

0xc964,	// (0x0003f1ba) volume_small_pane_g2

0xc96d,	// (0x0003f1c3) volume_small_pane_g3

0xc976,	// (0x0003f1cc) volume_small_pane_g4

0xc97f,	// (0x0003f1d5) volume_small_pane_g5

0xc988,	// (0x0003f1de) volume_small_pane_g6

0xc991,	// (0x0003f1e7) volume_small_pane_g7

0xc99a,	// (0x0003f1f0) volume_small_pane_g8

0xc9a3,	// (0x0003f1f9) volume_small_pane_g9

0xc9ac,	// (0x0003f202) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004210c) volume_small_pane_g

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp2_ParamLimits

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp2

0x00d7,	// (0x0003292d) tabs_3_active_pane_g1

0x5b76,	// (0x000383cc) tabs_3_active_pane_t1

0x00c9,	// (0x0003291f) bg_passive_tab_pane_cp2_ParamLimits

0x00c9,	// (0x0003291f) bg_passive_tab_pane_cp2

0x00d7,	// (0x0003292d) tabs_3_passive_pane_g1

0x5b76,	// (0x000383cc) tabs_3_passive_pane_t1

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp3_ParamLimits

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp3

0x5b88,	// (0x000383de) tabs_4_active_pane_g1

0x5b90,	// (0x000383e6) tabs_4_active_pane_t1

0x00c9,	// (0x0003291f) bg_passive_tab_pane_cp3_ParamLimits

0x00c9,	// (0x0003291f) bg_passive_tab_pane_cp3

0x5b88,	// (0x000383de) tabs_4_1_passive_pane_g1

0x5b90,	// (0x000383e6) tabs_4_1_passive_pane_t1

0x10b2,	// (0x00033908) list_highlight_pane_cp2

0x6f1e,	// (0x00039774) list_set_pane_ParamLimits

0x6f1e,	// (0x00039774) list_set_pane

0x6fac,	// (0x00039802) main_pane_set_t1_ParamLimits

0x6fac,	// (0x00039802) main_pane_set_t1

0x6fcc,	// (0x00039822) main_pane_set_t2_ParamLimits

0x6fcc,	// (0x00039822) main_pane_set_t2

0x6fde,	// (0x00039834) main_pane_set_t3_ParamLimits

0x6fde,	// (0x00039834) main_pane_set_t3

0x6ff0,	// (0x00039846) main_pane_set_t4_ParamLimits

0x6ff0,	// (0x00039846) main_pane_set_t4

0x0003,

0xf986,	// (0x000421dc) main_pane_set_t_ParamLimits

0xf986,	// (0x000421dc) main_pane_set_t

0x7002,	// (0x00039858) setting_code_pane

0x700a,	// (0x00039860) setting_slider_graphic_pane

0x700a,	// (0x00039860) setting_slider_pane

0x700a,	// (0x00039860) setting_text_pane

0x700a,	// (0x00039860) setting_volume_pane

0xbd92,	// (0x0003e5e8) volume_set_pane

0x00c9,	// (0x0003291f) bg_set_opt_pane_cp

0xbd9a,	// (0x0003e5f0) setting_slider_pane_t1

0xbdb0,	// (0x0003e606) setting_slider_pane_t2

0xbdc9,	// (0x0003e61f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00041db4) setting_slider_pane_t

0xbde0,	// (0x0003e636) slider_set_pane

0xf544,	// (0x00041d9a) bg_set_opt_pane_cp2

0x0143,	// (0x00032999) setting_slider_graphic_pane_g1

0xbdf6,	// (0x0003e64c) setting_slider_graphic_pane_t1

0xbe05,	// (0x0003e65b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00041dbb) setting_slider_graphic_pane_t

0xbe14,	// (0x0003e66a) slider_set_pane_cp

0xf544,	// (0x00041d9a) input_focus_pane_cp1

0x46d1,	// (0x00036f27) list_set_text_pane

0xf47c,	// (0x00041cd2) setting_text_pane_g1

0xf544,	// (0x00041d9a) input_focus_pane_cp2

0xf47c,	// (0x00041cd2) setting_code_pane_g1

0x0172,	// (0x000329c8) setting_code_pane_t1

0xe701,	// (0x00040f57) set_text_pane_t1_ParamLimits

0xe701,	// (0x00040f57) set_text_pane_t1

0x0811,	// (0x00033067) set_opt_bg_pane_g1

0x0819,	// (0x0003306f) set_opt_bg_pane_g2

0x6ede,	// (0x00039734) set_opt_bg_pane_g3

0x0829,	// (0x0003307f) set_opt_bg_pane_g4

0x0831,	// (0x00033087) set_opt_bg_pane_g5

0x0839,	// (0x0003308f) set_opt_bg_pane_g6

0x6ee6,	// (0x0003973c) set_opt_bg_pane_g7

0x6eee,	// (0x00039744) set_opt_bg_pane_g8

0x6ef6,	// (0x0003974c) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x000421c9) set_opt_bg_pane_g

0x46c4,	// (0x00036f1a) slider_set_pane_g1

0xcb15,	// (0x0003f36b) slider_set_pane_g2

0x0006,

0xf964,	// (0x000421ba) slider_set_pane_g

0xcab1,	// (0x0003f307) volume_set_pane_g1

0xcab9,	// (0x0003f30f) volume_set_pane_g2

0xcac1,	// (0x0003f317) volume_set_pane_g3

0xcac9,	// (0x0003f31f) volume_set_pane_g4

0xcad1,	// (0x0003f327) volume_set_pane_g5

0xcad9,	// (0x0003f32f) volume_set_pane_g6

0xcae1,	// (0x0003f337) volume_set_pane_g7

0xcae9,	// (0x0003f33f) volume_set_pane_g8

0xcaf1,	// (0x0003f347) volume_set_pane_g9

0xcaf9,	// (0x0003f34f) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00042192) volume_set_pane_g

0x5ba2,	// (0x000383f8) indicator_pane_ParamLimits

0x5ba2,	// (0x000383f8) indicator_pane

0x5bae,	// (0x00038404) main_idle_pane_g2_ParamLimits

0x5bae,	// (0x00038404) main_idle_pane_g2

0x5bd2,	// (0x00038428) main_pane_idle_g1_ParamLimits

0x5bd2,	// (0x00038428) main_pane_idle_g1

0x0180,	// (0x000329d6) popup_clock_digital_analogue_window_ParamLimits

0x0180,	// (0x000329d6) popup_clock_digital_analogue_window

0x5bdf,	// (0x00038435) soft_indicator_pane_ParamLimits

0x5bdf,	// (0x00038435) soft_indicator_pane

0x5beb,	// (0x00038441) wallpaper_pane_ParamLimits

0x5beb,	// (0x00038441) wallpaper_pane

0xf47c,	// (0x00041cd2) wallpaper_pane_g1

0x5bf7,	// (0x0003844d) indicator_pane_g1_ParamLimits

0x5bf7,	// (0x0003844d) indicator_pane_g1

0x47f9,	// (0x0003704f) navi_navi_icon_text_pane_srt_g1

0x01ae,	// (0x00032a04) soft_indicator_pane_t1

0x01c8,	// (0x00032a1e) aid_ps_area_pane

0x5c03,	// (0x00038459) aid_ps_clock_pane

0x01d9,	// (0x00032a2f) aid_ps_indicator_pane

0x01e5,	// (0x00032a3b) indicator_ps_pane_ParamLimits

0x01e5,	// (0x00032a3b) indicator_ps_pane

0x01f4,	// (0x00032a4a) power_save_pane_g1_ParamLimits

0x01f4,	// (0x00032a4a) power_save_pane_g1

0x0200,	// (0x00032a56) power_save_pane_g2_ParamLimits

0x0200,	// (0x00032a56) power_save_pane_g2

0xbb05,	// (0x0003e35b) aid_navinavi_width_pane

0x01c8,	// (0x00032a1e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00041dc0) power_save_pane_g_ParamLimits

0xf56a,	// (0x00041dc0) power_save_pane_g

0x020e,	// (0x00032a64) power_save_pane_t1_ParamLimits

0x020e,	// (0x00032a64) power_save_pane_t1

0x5c03,	// (0x00038459) aid_ps_clock_pane_ParamLimits

0x01d9,	// (0x00032a2f) aid_ps_indicator_pane_ParamLimits

0x0220,	// (0x00032a76) power_save_pane_t4_ParamLimits

0x0220,	// (0x00032a76) power_save_pane_t4

0x0001,

0xf56f,	// (0x00041dc5) power_save_pane_t_ParamLimits

0xf56f,	// (0x00041dc5) power_save_pane_t

0x024a,	// (0x00032aa0) power_save_t3_ParamLimits

0x024a,	// (0x00032aa0) power_save_t3

0x0235,	// (0x00032a8b) power_save_t2_ParamLimits

0x0235,	// (0x00032a8b) power_save_t2

0x025f,	// (0x00032ab5) indicator_ps_pane_g1

0x5c0f,	// (0x00038465) ai_gene_pane_ParamLimits

0x5c0f,	// (0x00038465) ai_gene_pane

0x5c1b,	// (0x00038471) ai_links_pane_ParamLimits

0x5c1b,	// (0x00038471) ai_links_pane

0x5c27,	// (0x0003847d) indicator_pane_cp1_ParamLimits

0x5c27,	// (0x0003847d) indicator_pane_cp1

0x5c33,	// (0x00038489) main_pane_idle_g1_cp_ParamLimits

0x5c33,	// (0x00038489) main_pane_idle_g1_cp

0x0268,	// (0x00032abe) popup_ai_links_title_window

0x5c3f,	// (0x00038495) soft_indicator_pane_cp1_ParamLimits

0x5c3f,	// (0x00038495) soft_indicator_pane_cp1

0x451a,	// (0x00036d70) ai_links_pane_g1

0x4523,	// (0x00036d79) grid_ai_links_pane

0x6558,	// (0x00038dae) ai_gene_pane_1

0x4508,	// (0x00036d5e) ai_gene_pane_2

0x4511,	// (0x00036d67) list_highlight_pane_cp4

0x653c,	// (0x00038d92) cell_ai_link_pane_ParamLimits

0x653c,	// (0x00038d92) cell_ai_link_pane

0x4500,	// (0x00036d56) cell_ai_link_pane_g1

0x0456,	// (0x00032cac) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004216d) cell_ai_link_pane_g

0xf544,	// (0x00041d9a) grid_highlight_cp2

0xf544,	// (0x00041d9a) bg_popup_sub_pane_cp1

0x027f,	// (0x00032ad5) popup_ai_links_title_window_t1

0x4452,	// (0x00036ca8) ai_gene_pane_1_g1_ParamLimits

0x4452,	// (0x00036ca8) ai_gene_pane_1_g1

0x445e,	// (0x00036cb4) ai_gene_pane_1_g2_ParamLimits

0x445e,	// (0x00036cb4) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00042163) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00042163) ai_gene_pane_1_g

0x446b,	// (0x00036cc1) ai_gene_pane_1_t1_ParamLimits

0x446b,	// (0x00036cc1) ai_gene_pane_1_t1

0x449f,	// (0x00036cf5) grid_ai_soft_ind_pane

0x443d,	// (0x00036c93) ai_gene_pane_2_t1_ParamLimits

0x443d,	// (0x00036c93) ai_gene_pane_2_t1

0x5c4b,	// (0x000384a1) main_pane_empty_t1_ParamLimits

0x5c4b,	// (0x000384a1) main_pane_empty_t1

0x5c68,	// (0x000384be) main_pane_empty_t2_ParamLimits

0x5c68,	// (0x000384be) main_pane_empty_t2

0x5c80,	// (0x000384d6) main_pane_empty_t3_ParamLimits

0x5c80,	// (0x000384d6) main_pane_empty_t3

0x5c93,	// (0x000384e9) main_pane_empty_t4_ParamLimits

0x5c93,	// (0x000384e9) main_pane_empty_t4

0x5ca6,	// (0x000384fc) main_pane_empty_t5_ParamLimits

0x5ca6,	// (0x000384fc) main_pane_empty_t5

0x0004,

0xf574,	// (0x00041dca) main_pane_empty_t_ParamLimits

0xf574,	// (0x00041dca) main_pane_empty_t

0x0862,	// (0x000330b8) bg_popup_window_pane_ParamLimits

0x0862,	// (0x000330b8) bg_popup_window_pane

0x41b7,	// (0x00036a0d) find_popup_pane_cp2_ParamLimits

0x41b7,	// (0x00036a0d) find_popup_pane_cp2

0x41c3,	// (0x00036a19) heading_pane_ParamLimits

0x41c3,	// (0x00036a19) heading_pane

0xf544,	// (0x00041d9a) bg_popup_sub_pane

0x64d0,	// (0x00038d26) bg_popup_window_pane_g1_ParamLimits

0x64d0,	// (0x00038d26) bg_popup_window_pane_g1

0x64dc,	// (0x00038d32) bg_popup_window_pane_g2_ParamLimits

0x64dc,	// (0x00038d32) bg_popup_window_pane_g2

0x64e8,	// (0x00038d3e) bg_popup_window_pane_g3_ParamLimits

0x64e8,	// (0x00038d3e) bg_popup_window_pane_g3

0x64f4,	// (0x00038d4a) bg_popup_window_pane_g4_ParamLimits

0x64f4,	// (0x00038d4a) bg_popup_window_pane_g4

0x6500,	// (0x00038d56) bg_popup_window_pane_g5_ParamLimits

0x6500,	// (0x00038d56) bg_popup_window_pane_g5

0x650c,	// (0x00038d62) bg_popup_window_pane_g6_ParamLimits

0x650c,	// (0x00038d62) bg_popup_window_pane_g6

0x6518,	// (0x00038d6e) bg_popup_window_pane_g7_ParamLimits

0x6518,	// (0x00038d6e) bg_popup_window_pane_g7

0x6524,	// (0x00038d7a) bg_popup_window_pane_g8_ParamLimits

0x6524,	// (0x00038d7a) bg_popup_window_pane_g8

0x6530,	// (0x00038d86) bg_popup_window_pane_g9_ParamLimits

0x6530,	// (0x00038d86) bg_popup_window_pane_g9

0x419c,	// (0x000369f2) bg_popup_window_pane_g10_ParamLimits

0x419c,	// (0x000369f2) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004212b) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004212b) bg_popup_window_pane_g

0x4153,	// (0x000369a9) bg_popup_heading_pane_ParamLimits

0x4153,	// (0x000369a9) bg_popup_heading_pane

0xcb9d,	// (0x0003f3f3) tabs_4_passive_pane_cp_srt_ParamLimits

0xcb9d,	// (0x0003f3f3) tabs_4_passive_pane_cp_srt

0xcbaf,	// (0x0003f405) tabs_4_passive_pane_srt_ParamLimits

0x4167,	// (0x000369bd) heading_pane_g2

0xcbaf,	// (0x0003f405) tabs_4_passive_pane_srt

0x10b2,	// (0x00033908) bg_passive_tab_pane_cp3_srt_ParamLimits

0x10b2,	// (0x00033908) bg_passive_tab_pane_cp3_srt

0x416f,	// (0x000369c5) heading_pane_t1_ParamLimits

0x416f,	// (0x000369c5) heading_pane_t1

0x4186,	// (0x000369dc) heading_pane_t2_ParamLimits

0x4186,	// (0x000369dc) heading_pane_t2

0x0001,

0xf8d0,	// (0x00042126) heading_pane_t_ParamLimits

0xf8d0,	// (0x00042126) heading_pane_t

0x3ce2,	// (0x00036538) bg_popup_heading_pane_g1

0x3d73,	// (0x000365c9) bg_popup_heading_pane_g2

0x3d7b,	// (0x000365d1) bg_popup_heading_pane_g3

0x3d83,	// (0x000365d9) bg_popup_heading_pane_g4

0x3d8b,	// (0x000365e1) bg_popup_heading_pane_g5

0x3d93,	// (0x000365e9) bg_popup_heading_pane_g6

0x3d9b,	// (0x000365f1) bg_popup_heading_pane_g7

0x3da3,	// (0x000365f9) bg_popup_heading_pane_g8

0x3dab,	// (0x00036601) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x000420e2) bg_popup_heading_pane_g

0x35ab,	// (0x00035e01) bg_popup_sub_pane_g1

0x35b3,	// (0x00035e09) bg_popup_sub_pane_g2

0x35bb,	// (0x00035e11) bg_popup_sub_pane_g3

0x35c3,	// (0x00035e19) bg_popup_sub_pane_g4

0x35cb,	// (0x00035e21) bg_popup_sub_pane_g5

0x35d3,	// (0x00035e29) bg_popup_sub_pane_g6

0x35db,	// (0x00035e31) bg_popup_sub_pane_g7

0x35e3,	// (0x00035e39) bg_popup_sub_pane_g8

0x35eb,	// (0x00035e41) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x000420bc) bg_popup_sub_pane_g

0x028e,	// (0x00032ae4) bg_popup_window_pane_cp5_ParamLimits

0x028e,	// (0x00032ae4) bg_popup_window_pane_cp5

0x02aa,	// (0x00032b00) popup_note_window_g1_ParamLimits

0x02aa,	// (0x00032b00) popup_note_window_g1

0x02b6,	// (0x00032b0c) popup_note_window_t1_ParamLimits

0x02b6,	// (0x00032b0c) popup_note_window_t1

0x02cc,	// (0x00032b22) popup_note_window_t2_ParamLimits

0x02cc,	// (0x00032b22) popup_note_window_t2

0x02e2,	// (0x00032b38) popup_note_window_t3_ParamLimits

0x02e2,	// (0x00032b38) popup_note_window_t3

0x02f8,	// (0x00032b4e) popup_note_window_t4_ParamLimits

0x02f8,	// (0x00032b4e) popup_note_window_t4

0x0320,	// (0x00032b76) popup_note_window_t5_ParamLimits

0x0320,	// (0x00032b76) popup_note_window_t5

0x0004,

0xf57f,	// (0x00041dd5) popup_note_window_t_ParamLimits

0xf57f,	// (0x00041dd5) popup_note_window_t

0x036a,	// (0x00032bc0) bg_popup_window_pane_cp6_ParamLimits

0x036a,	// (0x00032bc0) bg_popup_window_pane_cp6

0x3c5e,	// (0x000364b4) popup_note_image_window_g1_ParamLimits

0x3c5e,	// (0x000364b4) popup_note_image_window_g1

0x3c6a,	// (0x000364c0) popup_note_image_window_g2_ParamLimits

0x3c6a,	// (0x000364c0) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x000420b0) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x000420b0) popup_note_image_window_g

0x3c83,	// (0x000364d9) popup_note_image_window_t1_ParamLimits

0x3c83,	// (0x000364d9) popup_note_image_window_t1

0x3c9c,	// (0x000364f2) popup_note_image_window_t2_ParamLimits

0x3c9c,	// (0x000364f2) popup_note_image_window_t2

0x3cb5,	// (0x0003650b) popup_note_image_window_t3_ParamLimits

0x3cb5,	// (0x0003650b) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x000420b5) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x000420b5) popup_note_image_window_t

0x3b49,	// (0x0003639f) bg_popup_window_pane_cp7_ParamLimits

0x3b49,	// (0x0003639f) bg_popup_window_pane_cp7

0x3b79,	// (0x000363cf) popup_note_wait_window_g1_ParamLimits

0x3b79,	// (0x000363cf) popup_note_wait_window_g1

0x3b85,	// (0x000363db) popup_note_wait_window_g2_ParamLimits

0x3b85,	// (0x000363db) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004209e) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004209e) popup_note_wait_window_g

0x3b9d,	// (0x000363f3) popup_note_wait_window_t1_ParamLimits

0x3b9d,	// (0x000363f3) popup_note_wait_window_t1

0x3bc4,	// (0x0003641a) popup_note_wait_window_t2_ParamLimits

0x3bc4,	// (0x0003641a) popup_note_wait_window_t2

0x3be1,	// (0x00036437) popup_note_wait_window_t3_ParamLimits

0x3be1,	// (0x00036437) popup_note_wait_window_t3

0x3bf4,	// (0x0003644a) popup_note_wait_window_t4_ParamLimits

0x3bf4,	// (0x0003644a) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x000420a5) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x000420a5) popup_note_wait_window_t

0x3c19,	// (0x0003646f) wait_bar_pane_ParamLimits

0x3c19,	// (0x0003646f) wait_bar_pane

0xf544,	// (0x00041d9a) wait_anim_pane

0xf544,	// (0x00041d9a) wait_border_pane

0xf47c,	// (0x00041cd2) wait_anim_pane_g1

0xf47c,	// (0x00041cd2) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00041f5e) wait_anim_pane_g

0x3af9,	// (0x0003634f) wait_border_pane_g1

0x3b02,	// (0x00036358) wait_border_pane_g2

0x3b0b,	// (0x00036361) wait_border_pane_g3

0x0002,

0xf841,	// (0x00042097) wait_border_pane_g

0x3969,	// (0x000361bf) bg_popup_window_pane_cp16_ParamLimits

0x3969,	// (0x000361bf) bg_popup_window_pane_cp16

0x3a69,	// (0x000362bf) indicator_popup_pane_cp4_ParamLimits

0x3a69,	// (0x000362bf) indicator_popup_pane_cp4

0x3a7d,	// (0x000362d3) popup_query_data_window_t1_ParamLimits

0x3a7d,	// (0x000362d3) popup_query_data_window_t1

0x3a8f,	// (0x000362e5) popup_query_data_window_t2_ParamLimits

0x3a8f,	// (0x000362e5) popup_query_data_window_t2

0x3aa8,	// (0x000362fe) popup_query_data_window_t3_ParamLimits

0x3aa8,	// (0x000362fe) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00042090) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00042090) popup_query_data_window_t

0x3ac2,	// (0x00036318) query_popup_data_pane_ParamLimits

0x3ac2,	// (0x00036318) query_popup_data_pane

0x3ad6,	// (0x0003632c) query_popup_data_pane_cp1_ParamLimits

0x3ad6,	// (0x0003632c) query_popup_data_pane_cp1

0x3969,	// (0x000361bf) bg_popup_window_pane_cp10_ParamLimits

0x3969,	// (0x000361bf) bg_popup_window_pane_cp10

0x399b,	// (0x000361f1) indicator_popup_pane_ParamLimits

0x399b,	// (0x000361f1) indicator_popup_pane

0x39bd,	// (0x00036213) popup_query_code_window_t1_ParamLimits

0x39bd,	// (0x00036213) popup_query_code_window_t1

0x39d7,	// (0x0003622d) popup_query_code_window_t2_ParamLimits

0x39d7,	// (0x0003622d) popup_query_code_window_t2

0x3a20,	// (0x00036276) popup_query_code_window_t3_ParamLimits

0x3a20,	// (0x00036276) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00042089) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00042089) popup_query_code_window_t

0x3a4f,	// (0x000362a5) query_popup_pane_ParamLimits

0x3a4f,	// (0x000362a5) query_popup_pane

0x036a,	// (0x00032bc0) bg_popup_window_pane_cp15_ParamLimits

0x036a,	// (0x00032bc0) bg_popup_window_pane_cp15

0x0388,	// (0x00032bde) indicator_popup_pane_cp1_ParamLimits

0x0388,	// (0x00032bde) indicator_popup_pane_cp1

0x039b,	// (0x00032bf1) indicator_popup_pane_cp2_ParamLimits

0x039b,	// (0x00032bf1) indicator_popup_pane_cp2

0x03ae,	// (0x00032c04) popup_query_data_code_window_g1_ParamLimits

0x03ae,	// (0x00032c04) popup_query_data_code_window_g1

0x03c1,	// (0x00032c17) popup_query_data_code_window_t1_ParamLimits

0x03c1,	// (0x00032c17) popup_query_data_code_window_t1

0x03d3,	// (0x00032c29) popup_query_data_code_window_t2_ParamLimits

0x03d3,	// (0x00032c29) popup_query_data_code_window_t2

0x03e5,	// (0x00032c3b) popup_query_data_code_window_t3_ParamLimits

0x03e5,	// (0x00032c3b) popup_query_data_code_window_t3

0x03fb,	// (0x00032c51) popup_query_data_code_window_t4_ParamLimits

0x03fb,	// (0x00032c51) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00041de0) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00041de0) popup_query_data_code_window_t

0xc876,	// (0x0003f0cc) list_single_midp_graphic_pane_g3

0x0413,	// (0x00032c69) query_popup_data_pane_cp2_ParamLimits

0x0426,	// (0x00032c7c) query_popup_pane_cp2_ParamLimits

0x0426,	// (0x00032c7c) query_popup_pane_cp2

0xf544,	// (0x00041d9a) bg_popup_window_pane_cp11

0x3955,	// (0x000361ab) heading_pane_cp5

0x04b2,	// (0x00032d08) listscroll_popup_info_pane

0xf544,	// (0x00041d9a) input_focus_pane_cp3

0x0439,	// (0x00032c8f) query_popup_pane_t1

0x0447,	// (0x00032c9d) list_popup_info_pane_ParamLimits

0x0447,	// (0x00032c9d) list_popup_info_pane

0x0456,	// (0x00032cac) listscroll_popup_info_pane_g1

0x045e,	// (0x00032cb4) scroll_pane_cp7

0x0466,	// (0x00032cbc) popup_info_list_pane_t1_ParamLimits

0x0466,	// (0x00032cbc) popup_info_list_pane_t1

0x0480,	// (0x00032cd6) popup_info_list_pane_t2_ParamLimits

0x0480,	// (0x00032cd6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00041de9) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00041de9) popup_info_list_pane_t

0xf544,	// (0x00041d9a) bg_popup_window_pane_cp12

0x4813,	// (0x00037069) find_popup_pane

0x00c9,	// (0x0003291f) bg_popup_window_pane_cp3

0x049a,	// (0x00032cf0) heading_pane_cp3

0x04a6,	// (0x00032cfc) listscroll_popup_graphic_pane

0xf544,	// (0x00041d9a) bg_popup_window_pane_cp4

0x5d09,	// (0x0003855f) heading_pane_cp4

0x04b2,	// (0x00032d08) listscroll_popup_colour_pane

0x04ba,	// (0x00032d10) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x04ba,	// (0x00032d10) cell_large_graphic_colour_none_popup_pane

0x5d11,	// (0x00038567) grid_large_graphic_colour_popup_pane_ParamLimits

0x5d11,	// (0x00038567) grid_large_graphic_colour_popup_pane

0x5d2d,	// (0x00038583) listscroll_popup_colour_pane_g1_ParamLimits

0x5d2d,	// (0x00038583) listscroll_popup_colour_pane_g1

0x5d44,	// (0x0003859a) listscroll_popup_colour_pane_g2_ParamLimits

0x5d44,	// (0x0003859a) listscroll_popup_colour_pane_g2

0x04ca,	// (0x00032d20) listscroll_popup_colour_pane_g3_ParamLimits

0x04ca,	// (0x00032d20) listscroll_popup_colour_pane_g3

0x5d58,	// (0x000385ae) listscroll_popup_colour_pane_g4_ParamLimits

0x5d58,	// (0x000385ae) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00041dee) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00041dee) listscroll_popup_colour_pane_g

0x04da,	// (0x00032d30) scroll_pane_cp6_ParamLimits

0x04da,	// (0x00032d30) scroll_pane_cp6

0x5d67,	// (0x000385bd) cell_large_graphic_colour_popup_pane_ParamLimits

0x5d67,	// (0x000385bd) cell_large_graphic_colour_popup_pane

0x04ec,	// (0x00032d42) cell_large_graphic_colour_none_popup_pane_t1

0xf544,	// (0x00041d9a) grid_highlight_pane_cp5

0x04fb,	// (0x00032d51) cell_large_graphic_colour_popup_pane_g1

0x0503,	// (0x00032d59) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00041df7) cell_large_graphic_colour_popup_pane_g

0x050b,	// (0x00032d61) cell_large_graphic_colour_popup_pane_g2_copy1

0x0514,	// (0x00032d6a) grid_highlight_pane_cp4

0x051c,	// (0x00032d72) bg_popup_window_pane_cp8_ParamLimits

0x051c,	// (0x00032d72) bg_popup_window_pane_cp8

0x0537,	// (0x00032d8d) popup_snote_single_text_window_g1_ParamLimits

0x0537,	// (0x00032d8d) popup_snote_single_text_window_g1

0x0549,	// (0x00032d9f) popup_snote_single_text_window_t1_ParamLimits

0x0549,	// (0x00032d9f) popup_snote_single_text_window_t1

0x055c,	// (0x00032db2) popup_snote_single_text_window_t2_ParamLimits

0x055c,	// (0x00032db2) popup_snote_single_text_window_t2

0x056f,	// (0x00032dc5) popup_snote_single_text_window_t3_ParamLimits

0x056f,	// (0x00032dc5) popup_snote_single_text_window_t3

0x05a8,	// (0x00032dfe) popup_snote_single_text_window_t4_ParamLimits

0x05a8,	// (0x00032dfe) popup_snote_single_text_window_t4

0x05dc,	// (0x00032e32) popup_snote_single_text_window_t5_ParamLimits

0x05dc,	// (0x00032e32) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00041dfc) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00041dfc) popup_snote_single_text_window_t

0x060b,	// (0x00032e61) bg_popup_window_pane_cp9_ParamLimits

0x060b,	// (0x00032e61) bg_popup_window_pane_cp9

0x0537,	// (0x00032d8d) popup_snote_single_graphic_window_g1_ParamLimits

0x0537,	// (0x00032d8d) popup_snote_single_graphic_window_g1

0x0619,	// (0x00032e6f) popup_snote_single_graphic_window_g2_ParamLimits

0x0619,	// (0x00032e6f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00041e07) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00041e07) popup_snote_single_graphic_window_g

0x0625,	// (0x00032e7b) popup_snote_single_graphic_window_t1_ParamLimits

0x0625,	// (0x00032e7b) popup_snote_single_graphic_window_t1

0x0638,	// (0x00032e8e) popup_snote_single_graphic_window_t2_ParamLimits

0x0638,	// (0x00032e8e) popup_snote_single_graphic_window_t2

0x056f,	// (0x00032dc5) popup_snote_single_graphic_window_t3_ParamLimits

0x056f,	// (0x00032dc5) popup_snote_single_graphic_window_t3

0x05a8,	// (0x00032dfe) popup_snote_single_graphic_window_t4_ParamLimits

0x05a8,	// (0x00032dfe) popup_snote_single_graphic_window_t4

0x05dc,	// (0x00032e32) popup_snote_single_graphic_window_t5_ParamLimits

0x05dc,	// (0x00032e32) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00041e0c) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00041e0c) popup_snote_single_graphic_window_t

0x70d1,	// (0x00039927) grid_graphic_popup_pane_ParamLimits

0x70d1,	// (0x00039927) grid_graphic_popup_pane

0x70f4,	// (0x0003994a) listscroll_popup_graphic_pane_g1_ParamLimits

0x70f4,	// (0x0003994a) listscroll_popup_graphic_pane_g1

0x7108,	// (0x0003995e) listscroll_popup_graphic_pane_g2_ParamLimits

0x7108,	// (0x0003995e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00042206) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00042206) listscroll_popup_graphic_pane_g

0x47cb,	// (0x00037021) scroll_pane_cp5

0x708a,	// (0x000398e0) cell_graphic_popup_pane_ParamLimits

0x708a,	// (0x000398e0) cell_graphic_popup_pane

0x4796,	// (0x00036fec) cell_graphic_popup_pane_g1

0x479e,	// (0x00036ff4) cell_graphic_popup_pane_g2

0x050b,	// (0x00032d61) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x000421ff) cell_graphic_popup_pane_g

0x47a7,	// (0x00036ffd) cell_graphic_popup_pane_t2

0x0514,	// (0x00032d6a) grid_highlight_pane_cp3

0x065d,	// (0x00032eb3) list_gen_pane_ParamLimits

0x065d,	// (0x00032eb3) list_gen_pane

0x0686,	// (0x00032edc) scroll_pane

0x705b,	// (0x000398b1) bg_list_pane_g1_ParamLimits

0x705b,	// (0x000398b1) bg_list_pane_g1

0x4745,	// (0x00036f9b) bg_list_pane_g2_ParamLimits

0x4745,	// (0x00036f9b) bg_list_pane_g2

0x4758,	// (0x00036fae) bg_list_pane_g3_ParamLimits

0x4758,	// (0x00036fae) bg_list_pane_g3

0x476a,	// (0x00036fc0) bg_list_pane_g4_ParamLimits

0x476a,	// (0x00036fc0) bg_list_pane_g4

0x7072,	// (0x000398c8) bg_list_pane_g5_ParamLimits

0x7072,	// (0x000398c8) bg_list_pane_g5

0x0004,

0xf99e,	// (0x000421f4) bg_list_pane_g_ParamLimits

0xf99e,	// (0x000421f4) bg_list_pane_g

0x7037,	// (0x0003988d) list_double2_graphic_large_graphic_pane_ParamLimits

0x7037,	// (0x0003988d) list_double2_graphic_large_graphic_pane

0x7037,	// (0x0003988d) list_double2_graphic_pane_ParamLimits

0x7037,	// (0x0003988d) list_double2_graphic_pane

0x7037,	// (0x0003988d) list_double2_large_graphic_pane_ParamLimits

0x7037,	// (0x0003988d) list_double2_large_graphic_pane

0x7037,	// (0x0003988d) list_double2_pane_ParamLimits

0x7037,	// (0x0003988d) list_double2_pane

0x7037,	// (0x0003988d) list_double_graphic_heading_pane_ParamLimits

0x7037,	// (0x0003988d) list_double_graphic_heading_pane

0x7037,	// (0x0003988d) list_double_graphic_pane_ParamLimits

0x7037,	// (0x0003988d) list_double_graphic_pane

0x7037,	// (0x0003988d) list_double_heading_pane_ParamLimits

0x7037,	// (0x0003988d) list_double_heading_pane

0x7037,	// (0x0003988d) list_double_large_graphic_pane_ParamLimits

0x7037,	// (0x0003988d) list_double_large_graphic_pane

0x7037,	// (0x0003988d) list_double_number_pane_ParamLimits

0x7037,	// (0x0003988d) list_double_number_pane

0x7037,	// (0x0003988d) list_double_pane_ParamLimits

0x7037,	// (0x0003988d) list_double_pane

0x7037,	// (0x0003988d) list_double_time_pane_ParamLimits

0x7037,	// (0x0003988d) list_double_time_pane

0x7037,	// (0x0003988d) list_setting_number_pane_ParamLimits

0x7037,	// (0x0003988d) list_setting_number_pane

0x7037,	// (0x0003988d) list_setting_pane_ParamLimits

0x7037,	// (0x0003988d) list_setting_pane

0xef69,	// (0x000417bf) list_single_2graphic_pane_ParamLimits

0xef69,	// (0x000417bf) list_single_2graphic_pane

0xef69,	// (0x000417bf) list_single_graphic_heading_pane_ParamLimits

0xef69,	// (0x000417bf) list_single_graphic_heading_pane

0xef69,	// (0x000417bf) list_single_graphic_pane_ParamLimits

0xef69,	// (0x000417bf) list_single_graphic_pane

0xef69,	// (0x000417bf) list_single_heading_pane_ParamLimits

0xef69,	// (0x000417bf) list_single_heading_pane

0x18be,	// (0x00034114) list_single_large_graphic_pane_ParamLimits

0x18be,	// (0x00034114) list_single_large_graphic_pane

0xef69,	// (0x000417bf) list_single_number_heading_pane_ParamLimits

0xef69,	// (0x000417bf) list_single_number_heading_pane

0xef69,	// (0x000417bf) list_single_number_pane_ParamLimits

0xef69,	// (0x000417bf) list_single_number_pane

0xef69,	// (0x000417bf) list_single_pane_ParamLimits

0xef69,	// (0x000417bf) list_single_pane

0xf544,	// (0x00041d9a) list_highlight_pane_cp1

0x06bb,	// (0x00032f11) list_single_pane_g1_ParamLimits

0x06bb,	// (0x00032f11) list_single_pane_g1

0x06c7,	// (0x00032f1d) list_single_pane_g2_ParamLimits

0x06c7,	// (0x00032f1d) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00041e28) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00041e28) list_single_pane_g

0xef3f,	// (0x00041795) list_single_pane_t1_ParamLimits

0xef3f,	// (0x00041795) list_single_pane_t1

0x06bb,	// (0x00032f11) list_single_number_pane_g1_ParamLimits

0x06bb,	// (0x00032f11) list_single_number_pane_g1

0x06c7,	// (0x00032f1d) list_single_number_pane_g2_ParamLimits

0x06c7,	// (0x00032f1d) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00041e28) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00041e28) list_single_number_pane_g

0xe728,	// (0x00040f7e) list_single_number_pane_t1_ParamLimits

0xe728,	// (0x00040f7e) list_single_number_pane_t1

0xeefe,	// (0x00041754) list_single_number_pane_t2_ParamLimits

0xeefe,	// (0x00041754) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x000421b5) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x000421b5) list_single_number_pane_t

0xe71c,	// (0x00040f72) list_single_graphic_pane_g1_ParamLimits

0xe71c,	// (0x00040f72) list_single_graphic_pane_g1

0x06bb,	// (0x00032f11) list_single_graphic_pane_g2_ParamLimits

0x06bb,	// (0x00032f11) list_single_graphic_pane_g2

0x06c7,	// (0x00032f1d) list_single_graphic_pane_g3_ParamLimits

0x06c7,	// (0x00032f1d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00041e17) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00041e17) list_single_graphic_pane_g

0xe728,	// (0x00040f7e) list_single_graphic_pane_t1_ParamLimits

0xe728,	// (0x00040f7e) list_single_graphic_pane_t1

0xe73e,	// (0x00040f94) list_single_heading_pane_g1_ParamLimits

0xe73e,	// (0x00040f94) list_single_heading_pane_g1

0x06c7,	// (0x00032f1d) list_single_heading_pane_g2_ParamLimits

0x06c7,	// (0x00032f1d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00041e1e) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00041e1e) list_single_heading_pane_g

0xe751,	// (0x00040fa7) list_single_heading_pane_t1_ParamLimits

0xe751,	// (0x00040fa7) list_single_heading_pane_t1

0xe767,	// (0x00040fbd) list_single_heading_pane_t2_ParamLimits

0xe767,	// (0x00040fbd) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00041e23) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00041e23) list_single_heading_pane_t

0x06bb,	// (0x00032f11) list_single_number_heading_pane_g1_ParamLimits

0x06bb,	// (0x00032f11) list_single_number_heading_pane_g1

0x06c7,	// (0x00032f1d) list_single_number_heading_pane_g2_ParamLimits

0x06c7,	// (0x00032f1d) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00041e28) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00041e28) list_single_number_heading_pane_g

0xe779,	// (0x00040fcf) list_single_number_heading_pane_t1_ParamLimits

0xe779,	// (0x00040fcf) list_single_number_heading_pane_t1

0xe78f,	// (0x00040fe5) list_single_number_heading_pane_t2_ParamLimits

0xe78f,	// (0x00040fe5) list_single_number_heading_pane_t2

0xe7a1,	// (0x00040ff7) list_single_number_heading_pane_t3_ParamLimits

0xe7a1,	// (0x00040ff7) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00041e2d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00041e2d) list_single_number_heading_pane_t

0xe7b3,	// (0x00041009) list_single_graphic_heading_pane_g1_ParamLimits

0xe7b3,	// (0x00041009) list_single_graphic_heading_pane_g1

0x06d3,	// (0x00032f29) list_single_graphic_heading_pane_g4_ParamLimits

0x06d3,	// (0x00032f29) list_single_graphic_heading_pane_g4

0x06c7,	// (0x00032f1d) list_single_graphic_heading_pane_g5_ParamLimits

0x06c7,	// (0x00032f1d) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00041e34) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00041e34) list_single_graphic_heading_pane_g

0xe779,	// (0x00040fcf) list_single_graphic_heading_pane_t1_ParamLimits

0xe779,	// (0x00040fcf) list_single_graphic_heading_pane_t1

0xe7c7,	// (0x0004101d) list_single_graphic_heading_pane_t2_ParamLimits

0xe7c7,	// (0x0004101d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00041e3b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00041e3b) list_single_graphic_heading_pane_t

0x06e2,	// (0x00032f38) list_single_large_graphic_pane_g1_ParamLimits

0x06e2,	// (0x00032f38) list_single_large_graphic_pane_g1

0x06ee,	// (0x00032f44) list_single_large_graphic_pane_g2_ParamLimits

0x06ee,	// (0x00032f44) list_single_large_graphic_pane_g2

0x06fa,	// (0x00032f50) list_single_large_graphic_pane_g3_ParamLimits

0x06fa,	// (0x00032f50) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00041e40) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00041e40) list_single_large_graphic_pane_g

0x3b02,	// (0x00036358) wait_border_pane_g2_copy1

0x0706,	// (0x00032f5c) list_single_large_graphic_pane_g4_cp2

0xe7df,	// (0x00041035) list_single_large_graphic_pane_t1_ParamLimits

0xe7df,	// (0x00041035) list_single_large_graphic_pane_t1

0x070e,	// (0x00032f64) list_double_pane_g1_ParamLimits

0x070e,	// (0x00032f64) list_double_pane_g1

0x071a,	// (0x00032f70) list_double_pane_g2_ParamLimits

0x071a,	// (0x00032f70) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00041e47) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00041e47) list_double_pane_g

0xe7f5,	// (0x0004104b) list_double_pane_t1_ParamLimits

0xe7f5,	// (0x0004104b) list_double_pane_t1

0xe80b,	// (0x00041061) list_double_pane_t2_ParamLimits

0xe80b,	// (0x00041061) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00041e4c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00041e4c) list_double_pane_t

0xe81d,	// (0x00041073) list_double2_pane_g1_ParamLimits

0xe81d,	// (0x00041073) list_double2_pane_g1

0xe82c,	// (0x00041082) list_double2_pane_g2_ParamLimits

0xe82c,	// (0x00041082) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00041e51) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00041e51) list_double2_pane_g

0xe838,	// (0x0004108e) list_double2_pane_t1_ParamLimits

0xe838,	// (0x0004108e) list_double2_pane_t1

0xe84e,	// (0x000410a4) list_double2_pane_t2_ParamLimits

0xe84e,	// (0x000410a4) list_double2_pane_t2

0x0001,

0xf600,	// (0x00041e56) list_double2_pane_t_ParamLimits

0xf600,	// (0x00041e56) list_double2_pane_t

0x070e,	// (0x00032f64) list_double_number_pane_g1_ParamLimits

0x070e,	// (0x00032f64) list_double_number_pane_g1

0x071a,	// (0x00032f70) list_double_number_pane_g2_ParamLimits

0x071a,	// (0x00032f70) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00041e47) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00041e47) list_double_number_pane_g

0xe860,	// (0x000410b6) list_double_number_pane_t1_ParamLimits

0xe860,	// (0x000410b6) list_double_number_pane_t1

0xe872,	// (0x000410c8) list_double_number_pane_t2_ParamLimits

0xe872,	// (0x000410c8) list_double_number_pane_t2

0xe888,	// (0x000410de) list_double_number_pane_t3_ParamLimits

0xe888,	// (0x000410de) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00041e5b) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00041e5b) list_double_number_pane_t

0xe89a,	// (0x000410f0) list_double_graphic_pane_g1_ParamLimits

0xe89a,	// (0x000410f0) list_double_graphic_pane_g1

0xe8a6,	// (0x000410fc) list_double_graphic_pane_g2_ParamLimits

0xe8a6,	// (0x000410fc) list_double_graphic_pane_g2

0xe8b5,	// (0x0004110b) list_double_graphic_pane_g3_ParamLimits

0xe8b5,	// (0x0004110b) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00041e62) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00041e62) list_double_graphic_pane_g

0xe8c1,	// (0x00041117) list_double_graphic_pane_t1_ParamLimits

0xe8c1,	// (0x00041117) list_double_graphic_pane_t1

0xe8d7,	// (0x0004112d) list_double_graphic_pane_t2_ParamLimits

0xe8d7,	// (0x0004112d) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00041e6b) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00041e6b) list_double_graphic_pane_t

0xe8e9,	// (0x0004113f) list_double2_graphic_pane_g1_ParamLimits

0xe8e9,	// (0x0004113f) list_double2_graphic_pane_g1

0x0732,	// (0x00032f88) list_double2_graphic_pane_g2_ParamLimits

0x0732,	// (0x00032f88) list_double2_graphic_pane_g2

0x073e,	// (0x00032f94) list_double2_graphic_pane_g3_ParamLimits

0x073e,	// (0x00032f94) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00041e70) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00041e70) list_double2_graphic_pane_g

0xe8f5,	// (0x0004114b) list_double2_graphic_pane_t1_ParamLimits

0xe8f5,	// (0x0004114b) list_double2_graphic_pane_t1

0xe90b,	// (0x00041161) list_double2_graphic_pane_t2_ParamLimits

0xe90b,	// (0x00041161) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00041e77) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00041e77) list_double2_graphic_pane_t

0xe91d,	// (0x00041173) list_double_large_graphic_pane_g1_ParamLimits

0xe91d,	// (0x00041173) list_double_large_graphic_pane_g1

0xe93a,	// (0x00041190) list_double_large_graphic_pane_g2_ParamLimits

0xe93a,	// (0x00041190) list_double_large_graphic_pane_g2

0x071a,	// (0x00032f70) list_double_large_graphic_pane_g3_ParamLimits

0x071a,	// (0x00032f70) list_double_large_graphic_pane_g3

0xe94e,	// (0x000411a4) list_double_large_graphic_pane_g4_ParamLimits

0xe94e,	// (0x000411a4) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00041e7c) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00041e7c) list_double_large_graphic_pane_g

0xe95f,	// (0x000411b5) list_double_large_graphic_pane_t1_ParamLimits

0xe95f,	// (0x000411b5) list_double_large_graphic_pane_t1

0xe978,	// (0x000411ce) list_double_large_graphic_pane_t2_ParamLimits

0xe978,	// (0x000411ce) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00041e87) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00041e87) list_double_large_graphic_pane_t

0x075f,	// (0x00032fb5) list_double2_large_graphic_pane_g1_ParamLimits

0x075f,	// (0x00032fb5) list_double2_large_graphic_pane_g1

0x076b,	// (0x00032fc1) list_double2_large_graphic_pane_g2_ParamLimits

0x076b,	// (0x00032fc1) list_double2_large_graphic_pane_g2

0x073e,	// (0x00032f94) list_double2_large_graphic_pane_g3_ParamLimits

0x073e,	// (0x00032f94) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00041e8c) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00041e8c) list_double2_large_graphic_pane_g

0xe98a,	// (0x000411e0) list_double2_large_graphic_pane_t1_ParamLimits

0xe98a,	// (0x000411e0) list_double2_large_graphic_pane_t1

0xe9a0,	// (0x000411f6) list_double2_large_graphic_pane_t2_ParamLimits

0xe9a0,	// (0x000411f6) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00041e93) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00041e93) list_double2_large_graphic_pane_t

0xe9b2,	// (0x00041208) list_double_heading_pane_g1_ParamLimits

0xe9b2,	// (0x00041208) list_double_heading_pane_g1

0xe9c1,	// (0x00041217) list_double_heading_pane_g2_ParamLimits

0xe9c1,	// (0x00041217) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00041e98) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00041e98) list_double_heading_pane_g

0xe9cd,	// (0x00041223) list_double_heading_pane_t1_ParamLimits

0xe9cd,	// (0x00041223) list_double_heading_pane_t1

0xe84e,	// (0x000410a4) list_double_heading_pane_t2_ParamLimits

0xe84e,	// (0x000410a4) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00041e9d) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00041e9d) list_double_heading_pane_t

0xe9e3,	// (0x00041239) list_double_graphic_heading_pane_g1_ParamLimits

0xe9e3,	// (0x00041239) list_double_graphic_heading_pane_g1

0xe9b2,	// (0x00041208) list_double_graphic_heading_pane_g2_ParamLimits

0xe9b2,	// (0x00041208) list_double_graphic_heading_pane_g2

0xe9c1,	// (0x00041217) list_double_graphic_heading_pane_g3_ParamLimits

0xe9c1,	// (0x00041217) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00041ea2) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00041ea2) list_double_graphic_heading_pane_g

0xe9ef,	// (0x00041245) list_double_graphic_heading_pane_t1_ParamLimits

0xe9ef,	// (0x00041245) list_double_graphic_heading_pane_t1

0xe90b,	// (0x00041161) list_double_graphic_heading_pane_t2_ParamLimits

0xe90b,	// (0x00041161) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00041ea9) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00041ea9) list_double_graphic_heading_pane_t

0xea05,	// (0x0004125b) list_double_time_pane_g1_ParamLimits

0xea05,	// (0x0004125b) list_double_time_pane_g1

0xea14,	// (0x0004126a) list_double_time_pane_g2_ParamLimits

0xea14,	// (0x0004126a) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00041eae) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00041eae) list_double_time_pane_g

0xea20,	// (0x00041276) list_double_time_pane_t1_ParamLimits

0xea20,	// (0x00041276) list_double_time_pane_t1

0xea36,	// (0x0004128c) list_double_time_pane_t2_ParamLimits

0xea36,	// (0x0004128c) list_double_time_pane_t2

0xea48,	// (0x0004129e) list_double_time_pane_t3_ParamLimits

0xea48,	// (0x0004129e) list_double_time_pane_t3

0xea5a,	// (0x000412b0) list_double_time_pane_t4_ParamLimits

0xea5a,	// (0x000412b0) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00041eb3) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00041eb3) list_double_time_pane_t

0xea6c,	// (0x000412c2) list_setting_pane_g1_ParamLimits

0xea6c,	// (0x000412c2) list_setting_pane_g1

0xe82c,	// (0x00041082) list_setting_pane_g2_ParamLimits

0xe82c,	// (0x00041082) list_setting_pane_g2

0x0001,

0xf666,	// (0x00041ebc) list_setting_pane_g_ParamLimits

0xf666,	// (0x00041ebc) list_setting_pane_g

0xea78,	// (0x000412ce) list_setting_pane_t1_ParamLimits

0xea78,	// (0x000412ce) list_setting_pane_t1

0xea92,	// (0x000412e8) list_setting_pane_t2_ParamLimits

0xea92,	// (0x000412e8) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00041ec1) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00041ec1) list_setting_pane_t

0xeacf,	// (0x00041325) set_value_pane_cp_ParamLimits

0xeacf,	// (0x00041325) set_value_pane_cp

0xeadb,	// (0x00041331) list_setting_number_pane_g1_ParamLimits

0xeadb,	// (0x00041331) list_setting_number_pane_g1

0xeae7,	// (0x0004133d) list_setting_number_pane_g2_ParamLimits

0xeae7,	// (0x0004133d) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00041ec8) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00041ec8) list_setting_number_pane_g

0xeaf3,	// (0x00041349) list_setting_number_pane_t1_ParamLimits

0xeaf3,	// (0x00041349) list_setting_number_pane_t1

0xeb0a,	// (0x00041360) list_setting_number_pane_t2_ParamLimits

0xeb0a,	// (0x00041360) list_setting_number_pane_t2

0xeb24,	// (0x0004137a) list_setting_number_pane_t3_ParamLimits

0xeb24,	// (0x0004137a) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00041ecd) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00041ecd) list_setting_number_pane_t

0xeacf,	// (0x00041325) set_value_pane_ParamLimits

0xeacf,	// (0x00041325) set_value_pane

0x077a,	// (0x00032fd0) bg_set_opt_pane_ParamLimits

0x077a,	// (0x00032fd0) bg_set_opt_pane

0xeb65,	// (0x000413bb) set_value_pane_t1

0x079b,	// (0x00032ff1) slider_set_pane_cp3

0x07a4,	// (0x00032ffa) volume_small_pane_cp

0x07ad,	// (0x00033003) list_form_gen_pane

0x06aa,	// (0x00032f00) scroll_pane_cp8

0xeb83,	// (0x000413d9) form_field_data_pane_ParamLimits

0xeb83,	// (0x000413d9) form_field_data_pane

0xeba3,	// (0x000413f9) form_field_data_wide_pane_ParamLimits

0xeba3,	// (0x000413f9) form_field_data_wide_pane

0xebc2,	// (0x00041418) form_field_popup_pane_ParamLimits

0xebc2,	// (0x00041418) form_field_popup_pane

0xebda,	// (0x00041430) form_field_popup_wide_pane_ParamLimits

0xebda,	// (0x00041430) form_field_popup_wide_pane

0xebf1,	// (0x00041447) form_field_slider_pane_ParamLimits

0xebf1,	// (0x00041447) form_field_slider_pane

0xec04,	// (0x0004145a) form_field_slider_wide_pane_ParamLimits

0xec04,	// (0x0004145a) form_field_slider_wide_pane

0x07b6,	// (0x0003300c) data_form_pane

0xec1f,	// (0x00041475) form_field_data_pane_t1

0x07c2,	// (0x00033018) input_focus_pane

0x07d0,	// (0x00033026) data_form_wide_pane

0xec43,	// (0x00041499) form_field_data_wide_pane_t1

0x0529,	// (0x00032d7f) input_focus_pane_cp6

0xec65,	// (0x000414bb) form_field_popup_pane_t1

0x07c2,	// (0x00033018) input_focus_pane_cp7

0x07b6,	// (0x0003300c) list_form_pane

0xec85,	// (0x000414db) form_field_popup_wide_pane_t1

0x07c2,	// (0x00033018) input_focus_pane_cp8

0x07f0,	// (0x00033046) list_form_wide_pane

0xeca2,	// (0x000414f8) form_field_slider_pane_t1_ParamLimits

0xeca2,	// (0x000414f8) form_field_slider_pane_t1

0xecb8,	// (0x0004150e) form_field_slider_pane_t2_ParamLimits

0xecb8,	// (0x0004150e) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00041edd) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00041edd) form_field_slider_pane_t

0x028e,	// (0x00032ae4) input_focus_pane_cp9_ParamLimits

0x028e,	// (0x00032ae4) input_focus_pane_cp9

0xeccd,	// (0x00041523) slider_cont_pane_ParamLimits

0xeccd,	// (0x00041523) slider_cont_pane

0x07ff,	// (0x00033055) form_field_slider_wide_pane_t1_ParamLimits

0x07ff,	// (0x00033055) form_field_slider_wide_pane_t1

0xece1,	// (0x00041537) form_field_slider_wide_pane_t2_ParamLimits

0xece1,	// (0x00041537) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00041ee2) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00041ee2) form_field_slider_wide_pane_t

0x028e,	// (0x00032ae4) input_focus_pane_cp10_ParamLimits

0x028e,	// (0x00032ae4) input_focus_pane_cp10

0xecf3,	// (0x00041549) slider_cont_pane_cp1_ParamLimits

0xecf3,	// (0x00041549) slider_cont_pane_cp1

0xed09,	// (0x0004155f) slider_form_pane_cp

0x0811,	// (0x00033067) input_focus_pane_g1

0x0819,	// (0x0003306f) input_focus_pane_g2

0x0821,	// (0x00033077) input_focus_pane_g3

0x0829,	// (0x0003307f) input_focus_pane_g4

0x0831,	// (0x00033087) input_focus_pane_g5

0x0839,	// (0x0003308f) input_focus_pane_g6

0x0841,	// (0x00033097) input_focus_pane_g7

0x0849,	// (0x0003309f) input_focus_pane_g8

0x0851,	// (0x000330a7) input_focus_pane_g9

0xf47c,	// (0x00041cd2) input_focus_pane_g10

0x0009,

0xf691,	// (0x00041ee7) input_focus_pane_g

0x3b0b,	// (0x00036361) wait_border_pane_g3_copy1

0xed11,	// (0x00041567) data_form_pane_t1

0xf47c,	// (0x00041cd2) wait_anim_pane_g1_copy1

0xef10,	// (0x00041766) data_form_wide_pane_t1

0xed2b,	// (0x00041581) list_form_graphic_pane_cp_ParamLimits

0xed2b,	// (0x00041581) list_form_graphic_pane_cp

0x46eb,	// (0x00036f41) slider_form_pane_g1

0x46f4,	// (0x00036f4a) slider_form_pane_g2

0x0006,

0xf98f,	// (0x000421e5) slider_form_pane_g

0xed3f,	// (0x00041595) list_form_graphic_pane_ParamLimits

0xed3f,	// (0x00041595) list_form_graphic_pane

0xed55,	// (0x000415ab) list_form_graphic_pane_g1

0xed5d,	// (0x000415b3) list_form_graphic_pane_t1_ParamLimits

0xed5d,	// (0x000415b3) list_form_graphic_pane_t1

0x00c9,	// (0x0003291f) list_highlight_pane_cp5_ParamLimits

0x00c9,	// (0x0003291f) list_highlight_pane_cp5

0xed72,	// (0x000415c8) find_pane_g1

0x0859,	// (0x000330af) input_find_pane

0xed7b,	// (0x000415d1) input_find_pane_g1_ParamLimits

0xed7b,	// (0x000415d1) input_find_pane_g1

0xed87,	// (0x000415dd) input_find_pane_t1_ParamLimits

0xed87,	// (0x000415dd) input_find_pane_t1

0xed9c,	// (0x000415f2) input_find_pane_t2_ParamLimits

0xed9c,	// (0x000415f2) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00041efc) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00041efc) input_find_pane_t

0x0862,	// (0x000330b8) input_focus_pane_cp5_ParamLimits

0x0862,	// (0x000330b8) input_focus_pane_cp5

0x028e,	// (0x00032ae4) bg_popup_window_pane_cp2_ParamLimits

0x028e,	// (0x00032ae4) bg_popup_window_pane_cp2

0x087c,	// (0x000330d2) listscroll_menu_pane_ParamLimits

0x087c,	// (0x000330d2) listscroll_menu_pane

0x0888,	// (0x000330de) popup_submenu_window_ParamLimits

0x0888,	// (0x000330de) popup_submenu_window

0x08ac,	// (0x00033102) find_popup_pane_g1

0x08b4,	// (0x0003310a) input_popup_find_pane_cp

0x0862,	// (0x000330b8) input_focus_pane_cp4_ParamLimits

0x0862,	// (0x000330b8) input_focus_pane_cp4

0x08be,	// (0x00033114) input_popup_find_pane_t1_ParamLimits

0x08be,	// (0x00033114) input_popup_find_pane_t1

0xf544,	// (0x00041d9a) bg_popup_sub_pane_cp

0x08ec,	// (0x00033142) listscroll_popup_sub_pane

0x08f4,	// (0x0003314a) list_submenu_pane_ParamLimits

0x08f4,	// (0x0003314a) list_submenu_pane

0x0905,	// (0x0003315b) scroll_pane_cp4

0x090d,	// (0x00033163) list_single_popup_submenu_pane_ParamLimits

0x090d,	// (0x00033163) list_single_popup_submenu_pane

0x091f,	// (0x00033175) list_single_popup_submenu_pane_g1

0x0927,	// (0x0003317d) list_single_popup_submenu_pane_t1_ParamLimits

0x0927,	// (0x0003317d) list_single_popup_submenu_pane_t1

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp1_ParamLimits

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp1

0x5d9a,	// (0x000385f0) tabs_2_active_pane_g1

0x5da2,	// (0x000385f8) tabs_2_active_pane_t1

0x00c9,	// (0x0003291f) bg_passive_tab_pane_cp1_ParamLimits

0x00c9,	// (0x0003291f) bg_passive_tab_pane_cp1

0x5d9a,	// (0x000385f0) tabs_2_passive_pane_g1

0x5da2,	// (0x000385f8) tabs_2_passive_pane_t1

0x2be3,	// (0x00035439) bg_active_tab_pane_cp4

0x5db4,	// (0x0003860a) tabs_2_long_active_pane_t1

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp4

0xc87e,	// (0x0003f0d4) list_single_midp_graphic_pane_g4_ParamLimits

0x2be3,	// (0x00035439) bg_active_tab_pane_cp5

0x5dd3,	// (0x00038629) tabs_3_long_active_pane_t1

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp5

0xc87e,	// (0x0003f0d4) list_single_midp_graphic_pane_g4

0x00c9,	// (0x0003291f) bg_popup_window_pane_cp13_ParamLimits

0x00c9,	// (0x0003291f) bg_popup_window_pane_cp13

0x0945,	// (0x0003319b) listscroll_popup_fast_pane_ParamLimits

0x0945,	// (0x0003319b) listscroll_popup_fast_pane

0x0954,	// (0x000331aa) grid_popup_fast_pane_ParamLimits

0x0954,	// (0x000331aa) grid_popup_fast_pane

0x0966,	// (0x000331bc) scroll_pane_cp9_ParamLimits

0x0966,	// (0x000331bc) scroll_pane_cp9

0x59fc,	// (0x00038252) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x59fc,	// (0x00038252) list_single_graphic_hl_pane_t1_cp2

0x098a,	// (0x000331e0) input_focus_pane_cp20_ParamLimits

0x098a,	// (0x000331e0) input_focus_pane_cp20

0x0998,	// (0x000331ee) query_popup_data_pane_t1_ParamLimits

0x0998,	// (0x000331ee) query_popup_data_pane_t1

0x09ab,	// (0x00033201) query_popup_data_pane_t2_ParamLimits

0x09ab,	// (0x00033201) query_popup_data_pane_t2

0x09f1,	// (0x00033247) query_popup_data_pane_t3_ParamLimits

0x09f1,	// (0x00033247) query_popup_data_pane_t3

0x0a32,	// (0x00033288) query_popup_data_pane_t4_ParamLimits

0x0a32,	// (0x00033288) query_popup_data_pane_t4

0x0a6e,	// (0x000332c4) query_popup_data_pane_t5_ParamLimits

0x0a6e,	// (0x000332c4) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00041f01) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00041f01) query_popup_data_pane_t

0x0811,	// (0x00033067) bg_set_opt_pane_g1

0x0819,	// (0x0003306f) bg_set_opt_pane_g2

0x0821,	// (0x00033077) bg_set_opt_pane_g3

0x0829,	// (0x0003307f) bg_set_opt_pane_g4

0x0831,	// (0x00033087) bg_set_opt_pane_g5

0x0839,	// (0x0003308f) bg_set_opt_pane_g6

0x0841,	// (0x00033097) bg_set_opt_pane_g7

0x0849,	// (0x0003309f) bg_set_opt_pane_g8

0x0851,	// (0x000330a7) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00041f0c) bg_set_opt_pane_g

0xc050,	// (0x0003e8a6) control_top_pane_stacon_ParamLimits

0xc050,	// (0x0003e8a6) control_top_pane_stacon

0xc0a3,	// (0x0003e8f9) signal_pane_stacon_ParamLimits

0xc0a3,	// (0x0003e8f9) signal_pane_stacon

0x2f26,	// (0x0003577c) stacon_top_pane_g1_ParamLimits

0x2f26,	// (0x0003577c) stacon_top_pane_g1

0xc0c8,	// (0x0003e91e) title_pane_stacon_ParamLimits

0xc0c8,	// (0x0003e91e) title_pane_stacon

0xc0ea,	// (0x0003e940) uni_indicator_pane_stacon_ParamLimits

0xc0ea,	// (0x0003e940) uni_indicator_pane_stacon

0xc0ff,	// (0x0003e955) battery_pane_stacon_ParamLimits

0xc0ff,	// (0x0003e955) battery_pane_stacon

0xc13f,	// (0x0003e995) control_bottom_pane_stacon_ParamLimits

0xc13f,	// (0x0003e995) control_bottom_pane_stacon

0xc15e,	// (0x0003e9b4) navi_pane_stacon_ParamLimits

0xc15e,	// (0x0003e9b4) navi_pane_stacon

0x2f48,	// (0x0003579e) stacon_bottom_pane_g1_ParamLimits

0x2f48,	// (0x0003579e) stacon_bottom_pane_g1

0x0aa5,	// (0x000332fb) aid_levels_signal_lsc_ParamLimits

0x0aa5,	// (0x000332fb) aid_levels_signal_lsc

0xbe1c,	// (0x0003e672) signal_pane_stacon_g1_ParamLimits

0xbe1c,	// (0x0003e672) signal_pane_stacon_g1

0xbe28,	// (0x0003e67e) signal_pane_stacon_g2_ParamLimits

0xbe28,	// (0x0003e67e) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00041f1f) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00041f1f) signal_pane_stacon_g

0xbe5c,	// (0x0003e6b2) title_pane_stacon_t1_ParamLimits

0xbe5c,	// (0x0003e6b2) title_pane_stacon_t1

0x0b38,	// (0x0003338e) uni_indicator_pane_stacon_g1

0x0b42,	// (0x00033398) uni_indicator_pane_stacon_g2

0x0b24,	// (0x0003337a) uni_indicator_pane_stacon_g3

0x0b2e,	// (0x00033384) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00041f2b) uni_indicator_pane_stacon_g

0xbe81,	// (0x0003e6d7) control_top_pane_stacon_g1

0xbe89,	// (0x0003e6df) control_top_pane_stacon_t1_ParamLimits

0xbe89,	// (0x0003e6df) control_top_pane_stacon_t1

0x0b85,	// (0x000333db) aid_levels_battery_lsc_ParamLimits

0x0b85,	// (0x000333db) aid_levels_battery_lsc

0xbeba,	// (0x0003e710) battery_pane_stacon_g1_ParamLimits

0xbeba,	// (0x0003e710) battery_pane_stacon_g1

0xbec6,	// (0x0003e71c) battery_pane_stacon_g2_ParamLimits

0xbec6,	// (0x0003e71c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00041f34) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00041f34) battery_pane_stacon_g

0xbef5,	// (0x0003e74b) navi_icon_pane_stacon

0xbf05,	// (0x0003e75b) navi_navi_pane_stacon

0xbef5,	// (0x0003e74b) navi_text_pane_stacon

0xbe81,	// (0x0003e6d7) control_bottom_pane_stacon_g1

0xbf15,	// (0x0003e76b) control_bottom_pane_stacon_t1_ParamLimits

0xbf15,	// (0x0003e76b) control_bottom_pane_stacon_t1

0x5de5,	// (0x0003863b) grid_app_pane_ParamLimits

0x5de5,	// (0x0003863b) grid_app_pane

0x5e01,	// (0x00038657) scroll_pane_cp15_ParamLimits

0x5e01,	// (0x00038657) scroll_pane_cp15

0x5e12,	// (0x00038668) cell_app_pane_ParamLimits

0x5e12,	// (0x00038668) cell_app_pane

0x5e36,	// (0x0003868c) cell_app_pane_g1_ParamLimits

0x5e36,	// (0x0003868c) cell_app_pane_g1

0x0c39,	// (0x0003348f) cell_app_pane_g2_ParamLimits

0x0c39,	// (0x0003348f) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00041f39) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00041f39) cell_app_pane_g

0x5e5a,	// (0x000386b0) cell_app_pane_t1_ParamLimits

0x5e5a,	// (0x000386b0) cell_app_pane_t1

0x0c45,	// (0x0003349b) grid_highlight_pane_ParamLimits

0x0c45,	// (0x0003349b) grid_highlight_pane

0x0811,	// (0x00033067) cell_highlight_pane_g1

0x0819,	// (0x0003306f) cell_highlight_pane_g2

0x0821,	// (0x00033077) cell_highlight_pane_g3

0x0829,	// (0x0003307f) cell_highlight_pane_g4

0x0831,	// (0x00033087) cell_highlight_pane_g5

0x0839,	// (0x0003308f) cell_highlight_pane_g6

0x0841,	// (0x00033097) cell_highlight_pane_g7

0x0849,	// (0x0003309f) cell_highlight_pane_g8

0x0851,	// (0x000330a7) cell_highlight_pane_g9

0xf47c,	// (0x00041cd2) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00041ee7) cell_highlight_pane_g

0x2bf1,	// (0x00035447) bg_scroll_pane

0xbf59,	// (0x0003e7af) scroll_handle_pane

0x2c38,	// (0x0003548e) scroll_bg_pane_g1

0x2c4d,	// (0x000354a3) scroll_bg_pane_g2

0x2c65,	// (0x000354bb) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00041f3e) scroll_bg_pane_g

0x2c7a,	// (0x000354d0) scroll_handle_focus_pane_ParamLimits

0x2c7a,	// (0x000354d0) scroll_handle_focus_pane

0x2c38,	// (0x0003548e) scroll_handle_pane_g1

0x2c87,	// (0x000354dd) scroll_handle_pane_g2

0x2c65,	// (0x000354bb) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00041f45) scroll_handle_pane_g

0x0862,	// (0x000330b8) bg_popup_sub_pane_cp21_ParamLimits

0x0862,	// (0x000330b8) bg_popup_sub_pane_cp21

0x2c9b,	// (0x000354f1) popup_fep_japan_predictive_window_t1_ParamLimits

0x2c9b,	// (0x000354f1) popup_fep_japan_predictive_window_t1

0x2cb2,	// (0x00035508) popup_fep_japan_predictive_window_t2_ParamLimits

0x2cb2,	// (0x00035508) popup_fep_japan_predictive_window_t2

0x2ce5,	// (0x0003553b) popup_fep_japan_predictive_window_t3_ParamLimits

0x2ce5,	// (0x0003553b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00041f4c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00041f4c) popup_fep_japan_predictive_window_t

0xf544,	// (0x00041d9a) bg_popup_sub_pane_cp23

0x2d1c,	// (0x00035572) listscroll_japin_cand_pane

0x2d24,	// (0x0003557a) popup_fep_japan_candidate_window_t1

0x2d32,	// (0x00035588) candidate_pane_ParamLimits

0x2d32,	// (0x00035588) candidate_pane

0x2d45,	// (0x0003559b) scroll_pane_cp30

0x2d4d,	// (0x000355a3) list_single_popup_jap_candidate_pane_ParamLimits

0x2d4d,	// (0x000355a3) list_single_popup_jap_candidate_pane

0xf544,	// (0x00041d9a) list_highlight_pane_cp30

0x2d62,	// (0x000355b8) list_single_popup_jap_candidate_pane_t1

0x5e71,	// (0x000386c7) level_1_signal

0x5e7e,	// (0x000386d4) level_2_signal

0x5e8b,	// (0x000386e1) level_3_signal

0x5e98,	// (0x000386ee) level_4_signal

0x5ea5,	// (0x000386fb) level_5_signal

0x5eb2,	// (0x00038708) level_6_signal

0x5ebf,	// (0x00038715) level_7_signal

0x5e71,	// (0x000386c7) level_1_battery

0x5e7e,	// (0x000386d4) level_2_battery

0x5e8b,	// (0x000386e1) level_3_battery

0x5e98,	// (0x000386ee) level_4_battery

0x5ea5,	// (0x000386fb) level_5_battery

0x5eb2,	// (0x00038708) level_6_battery

0x5ebf,	// (0x00038715) level_7_battery

0x2d89,	// (0x000355df) list_menu_pane_ParamLimits

0x2d89,	// (0x000355df) list_menu_pane

0x2d9f,	// (0x000355f5) scroll_pane_cp25_ParamLimits

0x2d9f,	// (0x000355f5) scroll_pane_cp25

0x5ecc,	// (0x00038722) list_double2_graphic_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double2_graphic_pane_cp2

0x5ecc,	// (0x00038722) list_double2_large_graphic_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double2_large_graphic_pane_cp2

0x5ecc,	// (0x00038722) list_double2_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double2_pane_cp2

0x5ecc,	// (0x00038722) list_double_graphic_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double_graphic_pane_cp2

0x5ecc,	// (0x00038722) list_double_large_graphic_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double_large_graphic_pane_cp2

0x5ecc,	// (0x00038722) list_double_number_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double_number_pane_cp2

0x5ecc,	// (0x00038722) list_double_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double_pane_cp2

0x5edc,	// (0x00038732) list_single_2graphic_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_2graphic_pane_cp2

0x5edc,	// (0x00038732) list_single_graphic_heading_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_graphic_heading_pane_cp2

0x5edc,	// (0x00038732) list_single_graphic_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_graphic_pane_cp2

0x5edc,	// (0x00038732) list_single_heading_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_heading_pane_cp2

0x5ef1,	// (0x00038747) list_single_large_graphic_pane_cp2_ParamLimits

0x5ef1,	// (0x00038747) list_single_large_graphic_pane_cp2

0x5edc,	// (0x00038732) list_single_number_heading_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_number_heading_pane_cp2

0x5edc,	// (0x00038732) list_single_number_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_number_pane_cp2

0x5edc,	// (0x00038732) list_single_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_pane_cp2

0x2dc1,	// (0x00035617) bg_popup_sub_pane_cp22

0xc008,	// (0x0003e85e) popup_side_volume_key_window_g1

0xc02c,	// (0x0003e882) popup_side_volume_key_window_t1

0xc048,	// (0x0003e89e) volume_small_pane_cp1

0x028e,	// (0x00032ae4) bg_popup_sub_pane_cp24_ParamLimits

0x028e,	// (0x00032ae4) bg_popup_sub_pane_cp24

0x2dd7,	// (0x0003562d) fep_china_uni_candidate_pane_ParamLimits

0x2dd7,	// (0x0003562d) fep_china_uni_candidate_pane

0x2deb,	// (0x00035641) fep_china_uni_entry_pane

0x2dfb,	// (0x00035651) popup_fep_china_uni_window_g1

0x2e17,	// (0x0003566d) fep_china_uni_entry_pane_g1

0x2e1f,	// (0x00035675) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00041f7d) fep_china_uni_entry_pane_g

0x2e27,	// (0x0003567d) fep_entry_item_pane

0x2e31,	// (0x00035687) fep_candidate_item_pane

0x2e39,	// (0x0003568f) fep_china_uni_candidate_pane_g1

0x2e41,	// (0x00035697) fep_china_uni_candidate_pane_g2

0x2e49,	// (0x0003569f) fep_china_uni_candidate_pane_g3

0x2e51,	// (0x000356a7) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00041f82) fep_china_uni_candidate_pane_g

0xf47c,	// (0x00041cd2) fep_entry_item_pane_g1

0x2e59,	// (0x000356af) fep_entry_item_pane_t1_ParamLimits

0x2e59,	// (0x000356af) fep_entry_item_pane_t1

0x2e6f,	// (0x000356c5) fep_candidate_item_pane_t1_ParamLimits

0x2e6f,	// (0x000356c5) fep_candidate_item_pane_t1

0x2e84,	// (0x000356da) fep_candidate_item_pane_t2_ParamLimits

0x2e84,	// (0x000356da) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00041f8b) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00041f8b) fep_candidate_item_pane_t

0x00c9,	// (0x0003291f) list_highlight_pane_cp31_ParamLimits

0x00c9,	// (0x0003291f) list_highlight_pane_cp31

0x2e96,	// (0x000356ec) level_1_signal_lsc

0x2e9f,	// (0x000356f5) level_2_signal_lsc

0x2ea8,	// (0x000356fe) level_3_signal_lsc

0x2eb1,	// (0x00035707) level_4_signal_lsc

0x2eba,	// (0x00035710) level_5_signal_lsc

0x2ec3,	// (0x00035719) level_6_signal_lsc

0x2ecc,	// (0x00035722) level_7_signal_lsc

0x2ecc,	// (0x00035722) level_1_battery_lsc

0x2ed5,	// (0x0003572b) level_2_battery_lsc

0x2ede,	// (0x00035734) level_3_battery_lsc

0x2ee7,	// (0x0003573d) level_4_battery_lsc

0x2ef0,	// (0x00035746) level_5_battery_lsc

0x2ef9,	// (0x0003574f) level_6_battery_lsc

0x2e96,	// (0x000356ec) level_7_battery_lsc

0x2f02,	// (0x00035758) scroll_handle_focus_pane_g1

0x2f0b,	// (0x00035761) scroll_handle_focus_pane_g2

0x2f14,	// (0x0003576a) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00041f90) scroll_handle_focus_pane_g

0xedb1,	// (0x00041607) list_single_2graphic_pane_g1_ParamLimits

0xedb1,	// (0x00041607) list_single_2graphic_pane_g1

0x06d3,	// (0x00032f29) list_single_2graphic_pane_g2_ParamLimits

0x06d3,	// (0x00032f29) list_single_2graphic_pane_g2

0x06c7,	// (0x00032f1d) list_single_2graphic_pane_g3_ParamLimits

0x06c7,	// (0x00032f1d) list_single_2graphic_pane_g3

0xedbd,	// (0x00041613) list_single_2graphic_pane_g4_ParamLimits

0xedbd,	// (0x00041613) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00041f97) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00041f97) list_single_2graphic_pane_g

0xedc9,	// (0x0004161f) list_single_2graphic_pane_t1_ParamLimits

0xedc9,	// (0x0004161f) list_single_2graphic_pane_t1

0x0d60,	// (0x000335b6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0d60,	// (0x000335b6) list_double2_graphic_large_graphic_pane_g1

0x076b,	// (0x00032fc1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x076b,	// (0x00032fc1) list_double2_graphic_large_graphic_pane_g2

0x073e,	// (0x00032f94) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x073e,	// (0x00032f94) list_double2_graphic_large_graphic_pane_g3

0xedf7,	// (0x0004164d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xedf7,	// (0x0004164d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00041fa0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00041fa0) list_double2_graphic_large_graphic_pane_g

0xee03,	// (0x00041659) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xee03,	// (0x00041659) list_double2_graphic_large_graphic_pane_t1

0xee19,	// (0x0004166f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xee19,	// (0x0004166f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00041fa9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00041fa9) list_double2_graphic_large_graphic_pane_t

0x2fef,	// (0x00035845) popup_fast_swap_window_ParamLimits

0x2fef,	// (0x00035845) popup_fast_swap_window

0x300b,	// (0x00035861) popup_side_volume_key_window

0x3025,	// (0x0003587b) stacon_top_pane

0x302f,	// (0x00035885) status_pane_ParamLimits

0x302f,	// (0x00035885) status_pane

0x5fc2,	// (0x00038818) status_small_pane

0xf544,	// (0x00041d9a) control_pane

0xf544,	// (0x00041d9a) stacon_bottom_pane

0x06aa,	// (0x00032f00) scroll_pane_cp121

0x07ad,	// (0x00033003) set_content_pane

0x5f6d,	// (0x000387c3) bg_active_tab_pane_g1_cp1

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp1

0x5f64,	// (0x000387ba) bg_active_tab_pane_g3_cp1

0x5f6d,	// (0x000387c3) bg_passive_tab_pane_g1_cp1

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp1

0x5f64,	// (0x000387ba) bg_passive_tab_pane_g3_cp1

0x5f7f,	// (0x000387d5) bg_active_tab_pane_g1_cp2

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp2

0x5f76,	// (0x000387cc) bg_active_tab_pane_g3_cp2

0x5f7f,	// (0x000387d5) bg_passive_tab_pane_g1_cp2

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp2

0x5f76,	// (0x000387cc) bg_passive_tab_pane_g3_cp2

0x5f91,	// (0x000387e7) bg_active_tab_pane_g1_cp3

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp3

0x5f88,	// (0x000387de) bg_active_tab_pane_g3_cp3

0x5f91,	// (0x000387e7) bg_passive_tab_pane_g1_cp3

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp3

0x5f88,	// (0x000387de) bg_passive_tab_pane_g3_cp3

0x5fa3,	// (0x000387f9) bg_active_tab_pane_g1_cp4

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp4

0x5f9a,	// (0x000387f0) bg_active_tab_pane_g3_cp4

0x5fa3,	// (0x000387f9) bg_passive_tab_pane_g1_cp4

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp4

0x5f9a,	// (0x000387f0) bg_passive_tab_pane_g3_cp4

0x2f6d,	// (0x000357c3) bg_active_tab_pane_g1_cp5

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp5

0x2f64,	// (0x000357ba) bg_active_tab_pane_g3_cp5

0x2f6d,	// (0x000357c3) bg_passive_tab_pane_g1_cp5

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp5

0x2f64,	// (0x000357ba) bg_passive_tab_pane_g3_cp5

0x5fac,	// (0x00038802) list_set_graphic_pane_ParamLimits

0x5fac,	// (0x00038802) list_set_graphic_pane

0xf544,	// (0x00041d9a) bg_set_opt_pane_cp4

0x2f76,	// (0x000357cc) list_set_graphic_pane_g1_ParamLimits

0x2f76,	// (0x000357cc) list_set_graphic_pane_g1

0x2f82,	// (0x000357d8) list_set_graphic_pane_g2_ParamLimits

0x2f82,	// (0x000357d8) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00041fae) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00041fae) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00042327) volume_small_pane_cp_g

0x2fa4,	// (0x000357fa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2fa4,	// (0x000357fa) list_double2_large_graphic_pane_g1_cp2

0x2fb0,	// (0x00035806) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2fb0,	// (0x00035806) list_double2_large_graphic_pane_g2_cp2

0x2fbf,	// (0x00035815) list_double2_large_graphic_pane_g3_cp2

0x2fc7,	// (0x0003581d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2fc7,	// (0x0003581d) list_double2_large_graphic_pane_t1_cp2

0x2fdd,	// (0x00035833) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2fdd,	// (0x00035833) list_double2_large_graphic_pane_t2_cp2

0x44af,	// (0x00036d05) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x44af,	// (0x00036d05) list_double_large_graphic_pane_g1_cp2

0x44c0,	// (0x00036d16) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x44c0,	// (0x00036d16) list_double_large_graphic_pane_g2_cp2

0x310a,	// (0x00035960) list_double_large_graphic_pane_g3_cp2

0x44cf,	// (0x00036d25) list_double_large_graphic_pane_g4_cp

0x44d7,	// (0x00036d2d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x44d7,	// (0x00036d2d) list_double_large_graphic_pane_t1_cp2

0x44ee,	// (0x00036d44) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x44ee,	// (0x00036d44) list_double_large_graphic_pane_t2_cp2

0x303d,	// (0x00035893) list_double2_graphic_pane_g1_cp2_ParamLimits

0x303d,	// (0x00035893) list_double2_graphic_pane_g1_cp2

0x3049,	// (0x0003589f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3049,	// (0x0003589f) list_double2_graphic_pane_g2_cp2

0x3058,	// (0x000358ae) list_double2_graphic_pane_g3_cp2

0x3060,	// (0x000358b6) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3060,	// (0x000358b6) list_double2_graphic_pane_t1_cp2

0x3076,	// (0x000358cc) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3076,	// (0x000358cc) list_double2_graphic_pane_t2_cp2

0x3088,	// (0x000358de) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3088,	// (0x000358de) list_single_number_heading_pane_g1_cp2

0x3094,	// (0x000358ea) list_single_number_heading_pane_g2_cp2

0x309c,	// (0x000358f2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x309c,	// (0x000358f2) list_single_number_heading_pane_t1_cp2

0x30b2,	// (0x00035908) list_single_number_heading_pane_t2_cp2_ParamLimits

0x30b2,	// (0x00035908) list_single_number_heading_pane_t2_cp2

0x30c4,	// (0x0003591a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x30c4,	// (0x0003591a) list_single_number_heading_pane_t3_cp2

0x3088,	// (0x000358de) list_single_heading_pane_g1_cp2_ParamLimits

0x3088,	// (0x000358de) list_single_heading_pane_g1_cp2

0x3094,	// (0x000358ea) list_single_heading_pane_g2_cp2

0x309c,	// (0x000358f2) list_single_heading_pane_t1_cp2_ParamLimits

0x309c,	// (0x000358f2) list_single_heading_pane_t1_cp2

0x42b9,	// (0x00036b0f) list_single_heading_pane_t2_cp2_ParamLimits

0x42b9,	// (0x00036b0f) list_single_heading_pane_t2_cp2

0x4209,	// (0x00036a5f) list_double_graphic_pane_g1_cp2_ParamLimits

0x4209,	// (0x00036a5f) list_double_graphic_pane_g1_cp2

0x4215,	// (0x00036a6b) list_double_graphic_pane_g2_cp2_ParamLimits

0x4215,	// (0x00036a6b) list_double_graphic_pane_g2_cp2

0x4224,	// (0x00036a7a) list_double_graphic_pane_g3_cp2

0x422c,	// (0x00036a82) list_double_graphic_pane_t1_cp2_ParamLimits

0x422c,	// (0x00036a82) list_double_graphic_pane_t1_cp2

0x4242,	// (0x00036a98) list_double_graphic_pane_t2_cp2_ParamLimits

0x4242,	// (0x00036a98) list_double_graphic_pane_t2_cp2

0x30fe,	// (0x00035954) list_double_number_pane_g1_cp2_ParamLimits

0x30fe,	// (0x00035954) list_double_number_pane_g1_cp2

0x310a,	// (0x00035960) list_double_number_pane_g2_cp2

0x41cf,	// (0x00036a25) list_double_number_pane_t1_cp2_ParamLimits

0x41cf,	// (0x00036a25) list_double_number_pane_t1_cp2

0x41e1,	// (0x00036a37) list_double_number_pane_t2_cp2_ParamLimits

0x41e1,	// (0x00036a37) list_double_number_pane_t2_cp2

0x41f7,	// (0x00036a4d) list_double_number_pane_t3_cp2_ParamLimits

0x41f7,	// (0x00036a4d) list_double_number_pane_t3_cp2

0x4147,	// (0x0003699d) list_single_graphic_pane_g1_cp2_ParamLimits

0x4147,	// (0x0003699d) list_single_graphic_pane_g1_cp2

0x3088,	// (0x000358de) list_single_graphic_pane_g2_cp2_ParamLimits

0x3088,	// (0x000358de) list_single_graphic_pane_g2_cp2

0x3094,	// (0x000358ea) list_single_graphic_pane_g3_cp2

0x411f,	// (0x00036975) list_single_graphic_pane_t1_cp2_ParamLimits

0x411f,	// (0x00036975) list_single_graphic_pane_t1_cp2

0x3088,	// (0x000358de) list_single_number_pane_g1_cp2_ParamLimits

0x3088,	// (0x000358de) list_single_number_pane_g1_cp2

0x3094,	// (0x000358ea) list_single_number_pane_g2_cp2

0x411f,	// (0x00036975) list_single_number_pane_t1_cp2_ParamLimits

0x411f,	// (0x00036975) list_single_number_pane_t1_cp2

0x4135,	// (0x0003698b) list_single_number_pane_t2_cp2_ParamLimits

0x4135,	// (0x0003698b) list_single_number_pane_t2_cp2

0x2fb0,	// (0x00035806) list_double2_pane_g1_cp2_ParamLimits

0x2fb0,	// (0x00035806) list_double2_pane_g1_cp2

0x2fbf,	// (0x00035815) list_double2_pane_g2_cp2

0x30d6,	// (0x0003592c) list_double2_pane_t1_cp2_ParamLimits

0x30d6,	// (0x0003592c) list_double2_pane_t1_cp2

0x30ec,	// (0x00035942) list_double2_pane_t2_cp2_ParamLimits

0x30ec,	// (0x00035942) list_double2_pane_t2_cp2

0x30fe,	// (0x00035954) list_double_pane_g1_cp2_ParamLimits

0x30fe,	// (0x00035954) list_double_pane_g1_cp2

0x310a,	// (0x00035960) list_double_pane_g2_cp2

0x3112,	// (0x00035968) list_double_pane_t1_cp2_ParamLimits

0x3112,	// (0x00035968) list_double_pane_t1_cp2

0x3128,	// (0x0003597e) list_double_pane_t2_cp2_ParamLimits

0x3128,	// (0x0003597e) list_double_pane_t2_cp2

0x3150,	// (0x000359a6) list_single_pane_cp2_g3

0x3088,	// (0x000358de) list_single_pane_g1_cp2_ParamLimits

0x3088,	// (0x000358de) list_single_pane_g1_cp2

0x3094,	// (0x000358ea) list_single_pane_g2_cp2

0x3160,	// (0x000359b6) list_single_pane_t1_cp2_ParamLimits

0x3160,	// (0x000359b6) list_single_pane_t1_cp2

0x3178,	// (0x000359ce) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3178,	// (0x000359ce) list_single_large_graphic_pane_g1_cp2

0x3184,	// (0x000359da) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3184,	// (0x000359da) list_single_large_graphic_pane_g2_cp2

0x3190,	// (0x000359e6) list_single_large_graphic_pane_g3_cp2

0x3198,	// (0x000359ee) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3198,	// (0x000359ee) list_single_large_graphic_pane_g4_cp1

0x31b2,	// (0x00035a08) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x31b2,	// (0x00035a08) list_single_large_graphic_pane_t1_cp2

0x4101,	// (0x00036957) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4101,	// (0x00036957) list_single_graphic_heading_pane_g1_cp2

0x40dc,	// (0x00036932) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x40dc,	// (0x00036932) list_single_graphic_heading_pane_g4_cp2

0x3094,	// (0x000358ea) list_single_graphic_heading_pane_g5_cp2

0x309c,	// (0x000358f2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x309c,	// (0x000358f2) list_single_graphic_heading_pane_t1_cp2

0x410d,	// (0x00036963) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x410d,	// (0x00036963) list_single_graphic_heading_pane_t2_cp2

0x40d0,	// (0x00036926) list_single_2graphic_pane_g1_cp2_ParamLimits

0x40d0,	// (0x00036926) list_single_2graphic_pane_g1_cp2

0x40dc,	// (0x00036932) list_single_2graphic_pane_g2_cp2_ParamLimits

0x40dc,	// (0x00036932) list_single_2graphic_pane_g2_cp2

0x3094,	// (0x000358ea) list_single_2graphic_pane_g3_cp2

0x35f3,	// (0x00035e49) list_single_2graphic_pane_g4_cp2_ParamLimits

0x35f3,	// (0x00035e49) list_single_2graphic_pane_g4_cp2

0x40eb,	// (0x00036941) list_single_2graphic_pane_t1_cp2_ParamLimits

0x40eb,	// (0x00036941) list_single_2graphic_pane_t1_cp2

0xf47c,	// (0x00041cd2) list_highlight_pane_g10_cp1

0x3ce2,	// (0x00036538) list_highlight_pane_g1_cp1

0x3cea,	// (0x00036540) list_highlight_pane_g2_cp1

0x3cf2,	// (0x00036548) list_highlight_pane_g3_cp1

0x3cfa,	// (0x00036550) list_highlight_pane_g4_cp1

0x3d02,	// (0x00036558) list_highlight_pane_g5_cp1

0x3d0a,	// (0x00036560) list_highlight_pane_g6_cp1

0x3d12,	// (0x00036568) list_highlight_pane_g7_cp1

0x3d1a,	// (0x00036570) list_highlight_pane_g8_cp1

0x3d22,	// (0x00036578) list_highlight_pane_g9_cp1

0x647a,	// (0x00038cd0) form_field_slider_pane_t3

0x6488,	// (0x00038cde) form_field_slider_pane_t4

0x3c2c,	// (0x00036482) slider_form_pane_ParamLimits

0x3c2c,	// (0x00036482) slider_form_pane

0xf544,	// (0x00041d9a) control_abbreviations

0xf544,	// (0x00041d9a) control_conventions

0xf544,	// (0x00041d9a) control_definitions

0xf544,	// (0x00041d9a) format_table_attribute

0x4303,	// (0x00036b59) bg_popup_preview_window_pane_g9

0xf544,	// (0x00041d9a) format_table_data2

0xf544,	// (0x00041d9a) format_table_data3

0xf544,	// (0x00041d9a) format_table_data_example

0x0008,

0xf544,	// (0x00041d9a) intro_purpose

0xf8ef,	// (0x00042145) bg_popup_preview_window_pane_g

0xf544,	// (0x00041d9a) texts_category

0xf544,	// (0x00041d9a) texts_graphics

0x31c8,	// (0x00035a1e) text_digital

0x31d7,	// (0x00035a2d) text_primary

0x31e6,	// (0x00035a3c) text_primary_small

0x31f5,	// (0x00035a4b) text_secondary

0x3204,	// (0x00035a5a) text_title

0x4785,	// (0x00036fdb) bg_passive_tab_pane_g1_cp3_srt

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp3_srt

0x477c,	// (0x00036fd2) bg_passive_tab_pane_g3_cp3_srt

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp3_srt_ParamLimits

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp3_srt

0x478e,	// (0x00036fe4) tabs_4_active_pane_srt_g1

0x5b90,	// (0x000383e6) tabs_4_active_pane_srt_t1_ParamLimits

0x5b90,	// (0x000383e6) tabs_4_active_pane_srt_t1

0x4785,	// (0x00036fdb) bg_active_tab_pane_g1_cp3_copy1

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp3_copy1

0x477c,	// (0x00036fd2) bg_active_tab_pane_g3_cp3_copy1

0x00c9,	// (0x0003291f) tabs_2_long_active_pane_srt_ParamLimits

0x00c9,	// (0x0003291f) tabs_2_long_active_pane_srt

0x00c9,	// (0x0003291f) tabs_2_long_passive_pane_srt_ParamLimits

0x00c9,	// (0x0003291f) tabs_2_long_passive_pane_srt

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp4_srt

0x46bb,	// (0x00036f11) bg_passive_tab_pane_g1_cp4_srt

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp4_srt

0x46b2,	// (0x00036f08) bg_passive_tab_pane_g3_cp4_srt

0x2be3,	// (0x00035439) bg_active_tab_pane_cp4_srt_ParamLimits

0x2be3,	// (0x00035439) bg_active_tab_pane_cp4_srt

0x5db4,	// (0x0003860a) tabs_2_long_active_pane_srt_t1_ParamLimits

0x5db4,	// (0x0003860a) tabs_2_long_active_pane_srt_t1

0x46bb,	// (0x00036f11) bg_active_tab_pane_g1_cp4_srt

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp4_srt

0x46b2,	// (0x00036f08) bg_active_tab_pane_g3_cp4_srt

0x028e,	// (0x00032ae4) tabs_3_long_active_pane_srt_ParamLimits

0x028e,	// (0x00032ae4) tabs_3_long_active_pane_srt

0x028e,	// (0x00032ae4) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x028e,	// (0x00032ae4) tabs_3_long_passive_pane_cp_srt

0x028e,	// (0x00032ae4) tabs_3_long_passive_pane_srt_ParamLimits

0x028e,	// (0x00032ae4) tabs_3_long_passive_pane_srt

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp5_srt

0x2f6d,	// (0x000357c3) bg_passive_tab_pane_g1_cp5_srt

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp5_srt

0x2f64,	// (0x000357ba) bg_passive_tab_pane_g3_cp5_srt

0x2be3,	// (0x00035439) bg_active_tab_pane_cp5_srt_ParamLimits

0x2be3,	// (0x00035439) bg_active_tab_pane_cp5_srt

0x5dd3,	// (0x00038629) tabs_3_long_active_pane_srt_t1_ParamLimits

0x5dd3,	// (0x00038629) tabs_3_long_active_pane_srt_t1

0x2f6d,	// (0x000357c3) bg_active_tab_pane_g1_cp5_srt

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp5_srt

0x2f64,	// (0x000357ba) bg_active_tab_pane_g3_cp5_srt

0x46a4,	// (0x00036efa) navi_text_pane_srt_t1

0x469c,	// (0x00036ef2) navi_icon_pane_srt_g1

0x331c,	// (0x00035b72) midp_editing_number_pane_srt

0x3213,	// (0x00035a69) midp_ticker_pane_srt

0x3324,	// (0x00035b7a) midp_ticker_pane_srt_g1

0x332c,	// (0x00035b82) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00041fcd) midp_ticker_pane_srt_g

0x3334,	// (0x00035b8a) midp_ticker_pane_srt_t1

0x468d,	// (0x00036ee3) midp_editing_number_pane_t1_copy1

0x5fcb,	// (0x00038821) listscroll_midp_pane

0x5fcb,	// (0x00038821) midp_form_pane

0x321b,	// (0x00035a71) midp_info_popup_window_ParamLimits

0x321b,	// (0x00035a71) midp_info_popup_window

0x0862,	// (0x000330b8) bg_popup_sub_pane_cp50_ParamLimits

0x0862,	// (0x000330b8) bg_popup_sub_pane_cp50

0x3949,	// (0x0003619f) listscroll_midp_info_pane_ParamLimits

0x3949,	// (0x0003619f) listscroll_midp_info_pane

0x3931,	// (0x00036187) listscroll_form_midp_pane_ParamLimits

0x3931,	// (0x00036187) listscroll_form_midp_pane

0x393d,	// (0x00036193) scroll_bar_cp050

0x6462,	// (0x00038cb8) list_midp_pane

0x4fa4,	// (0x000377fa) signal_pane_g2_cp

0x3863,	// (0x000360b9) listscroll_midp_info_pane_t1_ParamLimits

0x3863,	// (0x000360b9) listscroll_midp_info_pane_t1

0x387b,	// (0x000360d1) listscroll_midp_info_pane_t2_ParamLimits

0x387b,	// (0x000360d1) listscroll_midp_info_pane_t2

0x38b9,	// (0x0003610f) listscroll_midp_info_pane_t3_ParamLimits

0x38b9,	// (0x0003610f) listscroll_midp_info_pane_t3

0x38f3,	// (0x00036149) listscroll_midp_info_pane_t4_ParamLimits

0x38f3,	// (0x00036149) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00042080) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00042080) listscroll_midp_info_pane_t

0x0905,	// (0x0003315b) scroll_pane_cp21

0x3807,	// (0x0003605d) form_midp_field_choice_group_pane

0x3810,	// (0x00036066) form_midp_field_text_pane

0x3849,	// (0x0003609f) form_midp_field_time_pane

0x3851,	// (0x000360a7) form_midp_gauge_slider_pane

0x385a,	// (0x000360b0) form_midp_gauge_wait_pane

0xf544,	// (0x00041d9a) form_midp_image_pane

0xeee9,	// (0x0004173f) list_single_midp_pane_ParamLimits

0xeee9,	// (0x0004173f) list_single_midp_pane

0x37d5,	// (0x0003602b) form_midp_field_text_pane_t1

0x362b,	// (0x00035e81) input_focus_pane_cp050

0x37f6,	// (0x0003604c) list_midp_form_text_pane

0x37a4,	// (0x00035ffa) form_midp_field_choice_group_pane_t1

0x37b2,	// (0x00036008) input_focus_pane_cp051

0x37c6,	// (0x0003601c) list_midp_choice_pane

0xf544,	// (0x00041d9a) status_idle_pane

0x3788,	// (0x00035fde) form_midp_field_time_pane_t1

0xf47c,	// (0x00041cd2) wait_anim_pane_g2_copy1

0x3796,	// (0x00035fec) form_midp_field_time_pane_t2

0x0001,

0x3286,	// (0x00035adc) aid_navinavi_width_2_pane

0xf825,	// (0x0004207b) form_midp_field_time_pane_t

0xf544,	// (0x00041d9a) input_focus_pane_cp052

0xf544,	// (0x00041d9a) bg_input_focus_pane_cp040

0x3764,	// (0x00035fba) form_midp_gauge_slider_pane_t1

0x3772,	// (0x00035fc8) form_midp_gauge_slider_pane_t2

0x6446,	// (0x00038c9c) form_midp_gauge_slider_pane_t3

0x6454,	// (0x00038caa) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00042072) form_midp_gauge_slider_pane_t

0x3780,	// (0x00035fd6) form_midp_slider_pane

0x00c9,	// (0x0003291f) bg_input_focus_pane_cp041_ParamLimits

0x00c9,	// (0x0003291f) bg_input_focus_pane_cp041

0x3734,	// (0x00035f8a) form_midp_gauge_wait_pane_t1_ParamLimits

0x3734,	// (0x00035f8a) form_midp_gauge_wait_pane_t1

0x3746,	// (0x00035f9c) form_midp_gauge_wait_pane_t2_ParamLimits

0x3746,	// (0x00035f9c) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004206d) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004206d) form_midp_gauge_wait_pane_t

0x3758,	// (0x00035fae) form_midp_wait_pane_ParamLimits

0x3758,	// (0x00035fae) form_midp_wait_pane

0x36fe,	// (0x00035f54) form_midp_image_pane_g1

0x3707,	// (0x00035f5d) form_midp_image_pane_t1

0x3716,	// (0x00035f6c) form_midp_image_pane_t2

0x3725,	// (0x00035f7b) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00042066) form_midp_image_pane_t

0x36f5,	// (0x00035f4b) list_single_midp_pane_g1

0xeeda,	// (0x00041730) list_single_midp_pane_t1

0x36e1,	// (0x00035f37) list_midp_form_item_pane_ParamLimits

0x36e1,	// (0x00035f37) list_midp_form_item_pane

0x322e,	// (0x00035a84) list_midp_form_item_pane_t1

0x323d,	// (0x00035a93) midp_ticker_pane_g1

0x3249,	// (0x00035a9f) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00041fb3) midp_ticker_pane_g

0x3255,	// (0x00035aab) midp_ticker_pane_t1

0x468d,	// (0x00036ee3) midp_editing_number_pane_t1

0x4715,	// (0x00036f6b) midp_editing_number_pane

0x4721,	// (0x00036f77) midp_ticker_pane

0x467d,	// (0x00036ed3) ai_message_heading_pane

0xf544,	// (0x00041d9a) bg_popup_window_pane_cp14

0x4685,	// (0x00036edb) listscroll_ai_message_pane

0x4607,	// (0x00036e5d) ai_message_heading_pane_g1_ParamLimits

0x4607,	// (0x00036e5d) ai_message_heading_pane_g1

0x4613,	// (0x00036e69) ai_message_heading_pane_g2_ParamLimits

0x4613,	// (0x00036e69) ai_message_heading_pane_g2

0x461f,	// (0x00036e75) ai_message_heading_pane_g3_ParamLimits

0x461f,	// (0x00036e75) ai_message_heading_pane_g3

0x462b,	// (0x00036e81) ai_message_heading_pane_g4_ParamLimits

0x462b,	// (0x00036e81) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x000421a7) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x000421a7) ai_message_heading_pane_g

0x4637,	// (0x00036e8d) ai_message_heading_pane_t1_ParamLimits

0x4637,	// (0x00036e8d) ai_message_heading_pane_t1

0x4651,	// (0x00036ea7) ai_message_heading_pane_t2_ParamLimits

0x4651,	// (0x00036ea7) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x000421b0) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x000421b0) ai_message_heading_pane_t

0x4663,	// (0x00036eb9) bg_popup_heading_pane_cp1_ParamLimits

0x4663,	// (0x00036eb9) bg_popup_heading_pane_cp1

0x45f5,	// (0x00036e4b) list_ai_message_pane_ParamLimits

0x45f5,	// (0x00036e4b) list_ai_message_pane

0x0905,	// (0x0003315b) scroll_pane_cp10

0x4591,	// (0x00036de7) list_ai_message_pane_g1

0x4599,	// (0x00036def) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00042184) list_ai_message_pane_g

0x45a1,	// (0x00036df7) list_ai_message_pane_t1_ParamLimits

0x45a1,	// (0x00036df7) list_ai_message_pane_t1

0x45b6,	// (0x00036e0c) list_ai_message_pane_t2_ParamLimits

0x45b6,	// (0x00036e0c) list_ai_message_pane_t2

0x45cb,	// (0x00036e21) list_ai_message_pane_t3_ParamLimits

0x45cb,	// (0x00036e21) list_ai_message_pane_t3

0x45e0,	// (0x00036e36) list_ai_message_pane_t4_ParamLimits

0x45e0,	// (0x00036e36) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00042189) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00042189) list_ai_message_pane_t

0x457f,	// (0x00036dd5) cell_ai_soft_ind_pane_ParamLimits

0x457f,	// (0x00036dd5) cell_ai_soft_ind_pane

0x3267,	// (0x00035abd) cell_ai_soft_ind_pane_g1_ParamLimits

0x3267,	// (0x00035abd) cell_ai_soft_ind_pane_g1

0xf544,	// (0x00041d9a) grid_highlight_cp1

0x3274,	// (0x00035aca) text_secondary_cp56_ParamLimits

0x3274,	// (0x00035aca) text_secondary_cp56

0x4554,	// (0x00036daa) example_general_pane_ParamLimits

0x4554,	// (0x00036daa) example_general_pane

0x4560,	// (0x00036db6) example_parent_pane_g1_ParamLimits

0x4560,	// (0x00036db6) example_parent_pane_g1

0x456c,	// (0x00036dc2) example_parent_pane_t1_ParamLimits

0x456c,	// (0x00036dc2) example_parent_pane_t1

0xc64c,	// (0x0003eea2) popup_preview_text_window_ParamLimits

0xc64c,	// (0x0003eea2) popup_preview_text_window

0x3158,	// (0x000359ae) list_single_pane_cp2_g4

0x036a,	// (0x00032bc0) bg_popup_preview_window_pane_ParamLimits

0x036a,	// (0x00032bc0) bg_popup_preview_window_pane

0x430b,	// (0x00036b61) popup_preview_text_window_t1_ParamLimits

0x430b,	// (0x00036b61) popup_preview_text_window_t1

0x4329,	// (0x00036b7f) popup_preview_text_window_t2_ParamLimits

0x4329,	// (0x00036b7f) popup_preview_text_window_t2

0x4372,	// (0x00036bc8) popup_preview_text_window_t3_ParamLimits

0x4372,	// (0x00036bc8) popup_preview_text_window_t3

0x43b7,	// (0x00036c0d) popup_preview_text_window_t4_ParamLimits

0x43b7,	// (0x00036c0d) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00042158) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00042158) popup_preview_text_window_t

0x4435,	// (0x00036c8b) scroll_pane_cp11

0x35ab,	// (0x00035e01) bg_popup_preview_window_pane_g1

0x42cb,	// (0x00036b21) bg_popup_preview_window_pane_g2

0x42d3,	// (0x00036b29) bg_popup_preview_window_pane_g3

0x42db,	// (0x00036b31) bg_popup_preview_window_pane_g4

0x42e3,	// (0x00036b39) bg_popup_preview_window_pane_g5

0x42eb,	// (0x00036b41) bg_popup_preview_window_pane_g6

0x42f3,	// (0x00036b49) bg_popup_preview_window_pane_g7

0x42fb,	// (0x00036b51) bg_popup_preview_window_pane_g8

0xbb0d,	// (0x0003e363) aid_popup_width_pane

0xc62e,	// (0x0003ee84) popup_midp_note_alarm_window_ParamLimits

0xc62e,	// (0x0003ee84) popup_midp_note_alarm_window

0x07b6,	// (0x0003300c) data_form_pane_ParamLimits

0xec17,	// (0x0004146d) form_field_data_pane_g1

0xec1f,	// (0x00041475) form_field_data_pane_t1_ParamLimits

0x07c2,	// (0x00033018) input_focus_pane_ParamLimits

0x07d0,	// (0x00033026) data_form_wide_pane_ParamLimits

0xec37,	// (0x0004148d) form_field_data_wide_pane_g1

0xec43,	// (0x00041499) form_field_data_wide_pane_t1_ParamLimits

0x0529,	// (0x00032d7f) input_focus_pane_cp6_ParamLimits

0x5d8e,	// (0x000385e4) input_popup_find_pane_g1_ParamLimits

0x5d8e,	// (0x000385e4) input_popup_find_pane_g1

0xbed6,	// (0x0003e72c) aid_navi_side_left_pane

0xbee6,	// (0x0003e73c) aid_navi_side_right_pane

0x3db3,	// (0x00036609) bg_popup_window_pane_cp30_ParamLimits

0x3db3,	// (0x00036609) bg_popup_window_pane_cp30

0x3e2d,	// (0x00036683) popup_midp_note_alarm_window_g1_ParamLimits

0x3e2d,	// (0x00036683) popup_midp_note_alarm_window_g1

0x3e5d,	// (0x000366b3) popup_midp_note_alarm_window_t1_ParamLimits

0x3e5d,	// (0x000366b3) popup_midp_note_alarm_window_t1

0x3efe,	// (0x00036754) popup_midp_note_alarm_window_t2_ParamLimits

0x3efe,	// (0x00036754) popup_midp_note_alarm_window_t2

0x3fac,	// (0x00036802) popup_midp_note_alarm_window_t3_ParamLimits

0x3fac,	// (0x00036802) popup_midp_note_alarm_window_t3

0x3fd4,	// (0x0003682a) popup_midp_note_alarm_window_t4_ParamLimits

0x3fd4,	// (0x0003682a) popup_midp_note_alarm_window_t4

0x3ff4,	// (0x0003684a) popup_midp_note_alarm_window_t5_ParamLimits

0x3ff4,	// (0x0003684a) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x000420f5) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x000420f5) popup_midp_note_alarm_window_t

0x40a0,	// (0x000368f6) wait_bar_pane_cp1_ParamLimits

0x40a0,	// (0x000368f6) wait_bar_pane_cp1

0xf544,	// (0x00041d9a) wait_anim_pane_copy1

0xf544,	// (0x00041d9a) wait_border_pane_copy1

0x3af9,	// (0x0003634f) wait_border_pane_g1_copy1

0xec5d,	// (0x000414b3) form_field_popup_pane_g1

0xec65,	// (0x000414bb) form_field_popup_pane_t1_ParamLimits

0x07c2,	// (0x00033018) input_focus_pane_cp7_ParamLimits

0x07b6,	// (0x0003300c) list_form_pane_ParamLimits

0xec7d,	// (0x000414d3) form_field_popup_wide_pane_g1

0xec85,	// (0x000414db) form_field_popup_wide_pane_t1_ParamLimits

0x07c2,	// (0x00033018) input_focus_pane_cp8_ParamLimits

0x07f0,	// (0x00033046) list_form_wide_pane_ParamLimits

0x47b5,	// (0x0003700b) aid_size_cell_graphic_pane

0xed11,	// (0x00041567) data_form_pane_t1_ParamLimits

0xef10,	// (0x00041766) data_form_wide_pane_t1_ParamLimits

0x61be,	// (0x00038a14) bg_status_flat_pane

0x5b0e,	// (0x00038364) title_pane_t1_ParamLimits

0x0091,	// (0x000328e7) title_pane_t2_ParamLimits

0x00b7,	// (0x0003290d) title_pane_t3_ParamLimits

0xf557,	// (0x00041dad) title_pane_t_ParamLimits

0x5e71,	// (0x000386c7) level_1_signal_ParamLimits

0x5e7e,	// (0x000386d4) level_2_signal_ParamLimits

0x5e8b,	// (0x000386e1) level_3_signal_ParamLimits

0x5e98,	// (0x000386ee) level_4_signal_ParamLimits

0x5ea5,	// (0x000386fb) level_5_signal_ParamLimits

0x5eb2,	// (0x00038708) level_6_signal_ParamLimits

0x5ebf,	// (0x00038715) level_7_signal_ParamLimits

0x5e71,	// (0x000386c7) level_1_battery_ParamLimits

0x5e7e,	// (0x000386d4) level_2_battery_ParamLimits

0x5e8b,	// (0x000386e1) level_3_battery_ParamLimits

0x5e98,	// (0x000386ee) level_4_battery_ParamLimits

0x5ea5,	// (0x000386fb) level_5_battery_ParamLimits

0x5eb2,	// (0x00038708) level_6_battery_ParamLimits

0x5ebf,	// (0x00038715) level_7_battery_ParamLimits

0x3ce2,	// (0x00036538) bg_status_flat_pane_g1

0x3cea,	// (0x00036540) bg_status_flat_pane_g2

0x3cf2,	// (0x00036548) bg_status_flat_pane_g3

0x3cfa,	// (0x00036550) bg_status_flat_pane_g4

0x3d02,	// (0x00036558) bg_status_flat_pane_g5

0x3d0a,	// (0x00036560) bg_status_flat_pane_g6

0x3d12,	// (0x00036568) bg_status_flat_pane_g7

0x5b76,	// (0x000383cc) tabs_3_active_pane_t1_ParamLimits

0x5b76,	// (0x000383cc) tabs_3_passive_pane_t1_ParamLimits

0x5b90,	// (0x000383e6) tabs_4_active_pane_t1_ParamLimits

0x5b90,	// (0x000383e6) tabs_4_1_passive_pane_t1_ParamLimits

0x5da2,	// (0x000385f8) tabs_2_active_pane_t1_ParamLimits

0x5da2,	// (0x000385f8) tabs_2_passive_pane_t1_ParamLimits

0x2be3,	// (0x00035439) bg_active_tab_pane_cp4_ParamLimits

0x5db4,	// (0x0003860a) tabs_2_long_active_pane_t1_ParamLimits

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp4_ParamLimits

0xc8b0,	// (0x0003f106) list_single_midp_graphic_pane_t1_ParamLimits

0x2be3,	// (0x00035439) bg_active_tab_pane_cp5_ParamLimits

0x5dd3,	// (0x00038629) tabs_3_long_active_pane_t1_ParamLimits

0x5dc7,	// (0x0003861d) bg_passive_tab_pane_cp5_ParamLimits

0xc8b0,	// (0x0003f106) list_single_midp_graphic_pane_t1

0x61be,	// (0x00038a14) bg_status_flat_pane_ParamLimits

0x347e,	// (0x00035cd4) indicator_pane_cp2_ParamLimits

0x347e,	// (0x00035cd4) indicator_pane_cp2

0x6301,	// (0x00038b57) navi_pane_srt_ParamLimits

0x6301,	// (0x00038b57) navi_pane_srt

0x34a6,	// (0x00035cfc) popup_clock_digital_analogue_window_cp1

0x019f,	// (0x000329f5) indicator_pane_t1

0x3213,	// (0x00035a69) copy_highlight_pane

0x3213,	// (0x00035a69) cursor_graphics_pane

0x3213,	// (0x00035a69) graphic_within_text_pane

0x3213,	// (0x00035a69) link_highlight_pane

0x43f8,	// (0x00036c4e) popup_preview_text_window_t5_ParamLimits

0x43f8,	// (0x00036c4e) popup_preview_text_window_t5

0x328e,	// (0x00035ae4) cursor_digital_pane

0x328e,	// (0x00035ae4) cursor_primary_pane

0x329f,	// (0x00035af5) cursor_primary_small_pane

0x32a7,	// (0x00035afd) cursor_secondary_pane

0x32af,	// (0x00035b05) cursor_title_pane

0x328e,	// (0x00035ae4) link_highlight_digital_pane

0x3296,	// (0x00035aec) link_highlight_primary_pane

0x329f,	// (0x00035af5) link_highlight_primary_small_pane

0x32a7,	// (0x00035afd) link_highlight_secondary_pane

0x32af,	// (0x00035b05) link_highlight_title_pane

0x328e,	// (0x00035ae4) copy_highlight_digital_pane

0x328e,	// (0x00035ae4) copy_highlight_primary_pane

0x329f,	// (0x00035af5) copy_highlight_primary_small_pane

0x32a7,	// (0x00035afd) copy_highlight_secondary_pane

0x32af,	// (0x00035b05) copy_highlight_title_pane

0x32a7,	// (0x00035afd) graphic_text_digital_pane

0x3d62,	// (0x000365b8) graphic_text_primary_pane

0x3d6b,	// (0x000365c1) graphic_text_primary_small_pane

0x329f,	// (0x00035af5) graphic_text_secondary_pane

0x328e,	// (0x00035ae4) graphic_text_title_pane

0x6072,	// (0x000388c8) cursor_primary_pane_g1

0x3d54,	// (0x000365aa) cursor_text_primary_t1

0x64a6,	// (0x00038cfc) cursor_primary_small_pane_g1

0x3d46,	// (0x0003659c) cursor_text_primary_small_t1

0x649e,	// (0x00038cf4) cursor_primary_small_pane_g1_copy1

0x3d38,	// (0x0003658e) cursor_text_primary_small_t1_copy1

0x3d2a,	// (0x00036580) cursor_text_title_t1

0x6496,	// (0x00038cec) cursor_title_pane_g1

0x6072,	// (0x000388c8) cursor_digital_pane_g1

0x32b7,	// (0x00035b0d) cursor_text_digital_t1

0x32c5,	// (0x00035b1b) link_highlight_primary_pane_g1

0x3cd3,	// (0x00036529) link_highlight_primary_pane_t1

0x32c5,	// (0x00035b1b) link_highlight_primary_small_pane_g1

0x32cd,	// (0x00035b23) link_highlight_primary_small_pane_t1

0x32dc,	// (0x00035b32) link_highlight_secondary_pane_g1

0x32e4,	// (0x00035b3a) link_highlight_secondary_pane_t1

0x3c38,	// (0x0003648e) link_highlight_title_pane_g1

0x3c4f,	// (0x000364a5) link_highlight_title_pane_t1

0x3c38,	// (0x0003648e) link_highlight_digital_pane_g1

0x3c40,	// (0x00036496) link_highlight_digital_pane_t1

0x3b14,	// (0x0003636a) copy_highlight_primary_pane_g1

0x3b3a,	// (0x00036390) copy_highlight_primary_pane_t1

0x3b14,	// (0x0003636a) copy_highlight_primary_small_pane_g1

0x3b2b,	// (0x00036381) copy_highlight_primary_small_pane_t1

0x32f3,	// (0x00035b49) copy_highlight_secondary_pane_g1

0x32fb,	// (0x00035b51) copy_highlight_secondary_pane_t1

0x3b14,	// (0x0003636a) copy_highlight_title_pane_g1

0x3b1c,	// (0x00036372) copy_highlight_title_pane_t1

0x3b14,	// (0x0003636a) copy_highlight_digital_pane_g1

0x48d6,	// (0x0003712c) copy_highlight_digital_pane_t1

0x482a,	// (0x00037080) graphic_text_primary_pane_g1

0x48ba,	// (0x00037110) graphic_text_primary_pane_t1

0x48c8,	// (0x0003711e) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0004221f) graphic_text_primary_pane_t

0x4896,	// (0x000370ec) graphic_text_primary_small_pane_g1

0x489e,	// (0x000370f4) graphic_text_primary_small_pane_t1

0x48ac,	// (0x00037102) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0004221a) graphic_text_primary_small_pane_t

0x4872,	// (0x000370c8) graphic_text_secondary_pane_g1

0x487a,	// (0x000370d0) graphic_text_secondary_pane_t1

0x4888,	// (0x000370de) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00042215) graphic_text_secondary_pane_t

0x484e,	// (0x000370a4) graphic_text_title_pane_g1

0x4856,	// (0x000370ac) graphic_text_title_pane_t1

0x4864,	// (0x000370ba) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00042210) graphic_text_title_pane_t

0x482a,	// (0x00037080) graphic_text_digital_pane_g1

0x4832,	// (0x00037088) graphic_text_digital_pane_t1

0x4840,	// (0x00037096) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0004220b) graphic_text_digital_pane_t

0x00c9,	// (0x0003291f) navi_icon_pane_srt_ParamLimits

0x00c9,	// (0x0003291f) navi_icon_pane_srt

0xf544,	// (0x00041d9a) navi_midp_pane_srt

0xf544,	// (0x00041d9a) navi_navi_pane_srt

0x00c9,	// (0x0003291f) navi_text_pane_srt_ParamLimits

0x00c9,	// (0x0003291f) navi_text_pane_srt

0x4284,	// (0x00036ada) navi_navi_icon_text_pane_srt

0x429e,	// (0x00036af4) navi_navi_pane_srt_g1_ParamLimits

0x429e,	// (0x00036af4) navi_navi_pane_srt_g1

0x428c,	// (0x00036ae2) navi_navi_pane_srt_g2_ParamLimits

0x428c,	// (0x00036ae2) navi_navi_pane_srt_g2

0x0001,

0xf8ea,	// (0x00042140) navi_navi_pane_srt_g_ParamLimits

0xf8ea,	// (0x00042140) navi_navi_pane_srt_g

0x42b0,	// (0x00036b06) navi_navi_tabs_pane_srt

0x4284,	// (0x00036ada) navi_navi_text_pane_srt

0x4284,	// (0x00036ada) navi_navi_volume_pane_srt

0x481b,	// (0x00037071) navi_navi_text_pane_srt_t1

0xcc14,	// (0x0003f46a) navi_navi_volume_pane_srt_g1

0xcc1c,	// (0x0003f472) volume_small_pane_srt_ParamLimits

0xcc1c,	// (0x0003f472) volume_small_pane_srt

0xc17d,	// (0x0003e9d3) volume_small_pane_srt_g1_ParamLimits

0xc17d,	// (0x0003e9d3) volume_small_pane_srt_g1

0xc18d,	// (0x0003e9e3) volume_small_pane_srt_g2_ParamLimits

0xc18d,	// (0x0003e9e3) volume_small_pane_srt_g2

0xc19e,	// (0x0003e9f4) volume_small_pane_srt_g3_ParamLimits

0xc19e,	// (0x0003e9f4) volume_small_pane_srt_g3

0xc1af,	// (0x0003ea05) volume_small_pane_srt_g4_ParamLimits

0xc1af,	// (0x0003ea05) volume_small_pane_srt_g4

0xc1c0,	// (0x0003ea16) volume_small_pane_srt_g5_ParamLimits

0xc1c0,	// (0x0003ea16) volume_small_pane_srt_g5

0xc1d1,	// (0x0003ea27) volume_small_pane_srt_g6_ParamLimits

0xc1d1,	// (0x0003ea27) volume_small_pane_srt_g6

0xc1e2,	// (0x0003ea38) volume_small_pane_srt_g7_ParamLimits

0xc1e2,	// (0x0003ea38) volume_small_pane_srt_g7

0xc1f3,	// (0x0003ea49) volume_small_pane_srt_g8_ParamLimits

0xc1f3,	// (0x0003ea49) volume_small_pane_srt_g8

0xc204,	// (0x0003ea5a) volume_small_pane_srt_g9_ParamLimits

0xc204,	// (0x0003ea5a) volume_small_pane_srt_g9

0xc215,	// (0x0003ea6b) volume_small_pane_srt_g10_ParamLimits

0xc215,	// (0x0003ea6b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00041fb8) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00041fb8) volume_small_pane_srt_g

0x0413,	// (0x00032c69) query_popup_data_pane_cp2

0x4801,	// (0x00037057) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4801,	// (0x00037057) navi_navi_icon_text_pane_srt_t1

0x3d62,	// (0x000365b8) navi_tabs_2_long_pane_srt

0x3d62,	// (0x000365b8) navi_tabs_2_pane_srt

0x3d62,	// (0x000365b8) navi_tabs_3_long_pane_srt

0x3d62,	// (0x000365b8) navi_tabs_3_pane_srt

0x3d62,	// (0x000365b8) navi_tabs_4_pane_srt

0xcbf4,	// (0x0003f44a) tabs_2_active_pane_srt_ParamLimits

0xcbf4,	// (0x0003f44a) tabs_2_active_pane_srt

0xcc04,	// (0x0003f45a) tabs_2_passive_pane_srt_ParamLimits

0xcc04,	// (0x0003f45a) tabs_2_passive_pane_srt

0x10b2,	// (0x00033908) bg_passive_tab_pane_cp1_srt_ParamLimits

0x10b2,	// (0x00033908) bg_passive_tab_pane_cp1_srt

0x47e8,	// (0x0003703e) bg_passive_tab_pane_g1_cp1_srt

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp1_srt

0x47df,	// (0x00037035) bg_passive_tab_pane_g3_cp1_srt

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp1_srt_ParamLimits

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp1_srt

0x47f1,	// (0x00037047) tabs_2_active_pane_srt_g1

0x5da2,	// (0x000385f8) tabs_2_active_pane_srt_t1_ParamLimits

0x5da2,	// (0x000385f8) tabs_2_active_pane_srt_t1

0x47e8,	// (0x0003703e) bg_active_tab_pane_g1_cp1_srt

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp1_srt

0x47df,	// (0x00037035) bg_active_tab_pane_g3_cp1_srt

0xcbc1,	// (0x0003f417) tabs_3_active_pane_srt_ParamLimits

0xcbc1,	// (0x0003f417) tabs_3_active_pane_srt

0xcbd2,	// (0x0003f428) tabs_3_passive_pane_cp_srt_ParamLimits

0xcbd2,	// (0x0003f428) tabs_3_passive_pane_cp_srt

0xcbe3,	// (0x0003f439) tabs_3_passive_pane_srt_ParamLimits

0xcbe3,	// (0x0003f439) tabs_3_passive_pane_srt

0x10b2,	// (0x00033908) bg_passive_tab_pane_cp2_srt_ParamLimits

0x10b2,	// (0x00033908) bg_passive_tab_pane_cp2_srt

0x3313,	// (0x00035b69) bg_passive_tab_pane_g1_cp2_srt

0x2f1d,	// (0x00035773) bg_passive_tab_pane_g2_cp2_srt

0x330a,	// (0x00035b60) bg_passive_tab_pane_g3_cp2_srt

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp2_srt_ParamLimits

0x00c9,	// (0x0003291f) bg_active_tab_pane_cp2_srt

0x47d7,	// (0x0003702d) tabs_3_active_pane_srt_g1

0x5b76,	// (0x000383cc) tabs_3_active_pane_srt_t1_ParamLimits

0x5b76,	// (0x000383cc) tabs_3_active_pane_srt_t1

0x3313,	// (0x00035b69) bg_active_tab_pane_g1_cp2_srt

0x2f1d,	// (0x00035773) bg_active_tab_pane_g2_cp2_srt

0x330a,	// (0x00035b60) bg_active_tab_pane_g3_cp2_srt

0xcb79,	// (0x0003f3cf) tabs_4_active_pane_srt_ParamLimits

0xcb79,	// (0x0003f3cf) tabs_4_active_pane_srt

0xcb8b,	// (0x0003f3e1) tabs_4_passive_pane_cp2_srt_ParamLimits

0xcb8b,	// (0x0003f3e1) tabs_4_passive_pane_cp2_srt

0xc37a,	// (0x0003ebd0) aid_size_cell_toolbar

0x5dc7,	// (0x0003861d) main_idle_act_pane_ParamLimits

0xc4e9,	// (0x0003ed3f) popup_large_graphic_colour_window_ParamLimits

0xc79d,	// (0x0003eff3) popup_toolbar_window_ParamLimits

0xc79d,	// (0x0003eff3) popup_toolbar_window

0x188f,	// (0x000340e5) list_single_graphic_2heading_pane_ParamLimits

0x188f,	// (0x000340e5) list_single_graphic_2heading_pane

0x0c1f,	// (0x00033475) aid_size_cell_apps_grid_lsc_pane

0x0c31,	// (0x00033487) aid_size_cell_apps_grid_prt_pane

0x10b2,	// (0x00033908) bg_wml_button_pane_cp1_ParamLimits

0x10b2,	// (0x00033908) bg_wml_button_pane_cp1

0x37d5,	// (0x0003602b) form_midp_field_text_pane_t1_ParamLimits

0x362b,	// (0x00035e81) input_focus_pane_cp050_ParamLimits

0x37f6,	// (0x0003604c) list_midp_form_text_pane_ParamLimits

0x37b2,	// (0x00036008) input_focus_pane_cp051_ParamLimits

0x37c6,	// (0x0003601c) list_midp_choice_pane_ParamLimits

0x36af,	// (0x00035f05) list_single_2graphic_pane_cp3_ParamLimits

0x36af,	// (0x00035f05) list_single_2graphic_pane_cp3

0x36c2,	// (0x00035f18) list_single_midp_graphic_pane_ParamLimits

0x36c2,	// (0x00035f18) list_single_midp_graphic_pane

0xba9b,	// (0x0003e2f1) list_single_graphic_2heading_pane_g1_ParamLimits

0xba9b,	// (0x0003e2f1) list_single_graphic_2heading_pane_g1

0xbaa7,	// (0x0003e2fd) list_single_graphic_2heading_pane_g4_ParamLimits

0xbaa7,	// (0x0003e2fd) list_single_graphic_2heading_pane_g4

0xbab3,	// (0x0003e309) list_single_graphic_2heading_pane_g5_ParamLimits

0xbab3,	// (0x0003e309) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004200b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004200b) list_single_graphic_2heading_pane_g

0xbabf,	// (0x0003e315) list_single_graphic_2heading_pane_t1_ParamLimits

0xbabf,	// (0x0003e315) list_single_graphic_2heading_pane_t1

0xbad3,	// (0x0003e329) list_single_graphic_2heading_pane_t2_ParamLimits

0xbad3,	// (0x0003e329) list_single_graphic_2heading_pane_t2

0xbaed,	// (0x0003e343) list_single_graphic_2heading_pane_t3_ParamLimits

0xbaed,	// (0x0003e343) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00042012) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00042012) list_single_graphic_2heading_pane_t

0x34f5,	// (0x00035d4b) bg_popup_sub_pane_cp2

0x351b,	// (0x00035d71) grid_toobar_pane

0xc82c,	// (0x0003f082) cell_toolbar_pane_ParamLimits

0xc82c,	// (0x0003f082) cell_toolbar_pane

0x3551,	// (0x00035da7) cell_toolbar_pane_g1_ParamLimits

0x3551,	// (0x00035da7) cell_toolbar_pane_g1

0x3563,	// (0x00035db9) cell_toolbar_pane_g2_ParamLimits

0x3563,	// (0x00035db9) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00042020) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00042020) cell_toolbar_pane_g

0x3585,	// (0x00035ddb) grid_highlight_pane_cp2_ParamLimits

0x3585,	// (0x00035ddb) grid_highlight_pane_cp2

0x359f,	// (0x00035df5) toolbar_button_pane

0x35ab,	// (0x00035e01) toolbar_button_pane_g1

0x35bb,	// (0x00035e11) toolbar_button_pane_g2

0x35b3,	// (0x00035e09) toolbar_button_pane_g3

0x35cb,	// (0x00035e21) toolbar_button_pane_g4

0x35c3,	// (0x00035e19) toolbar_button_pane_g5

0x35d3,	// (0x00035e29) toolbar_button_pane_g6

0x35db,	// (0x00035e31) toolbar_button_pane_g7

0x35eb,	// (0x00035e41) toolbar_button_pane_g8

0x35e3,	// (0x00035e39) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00042025) toolbar_button_pane_g

0xc85b,	// (0x0003f0b1) list_single_2graphic_pane_g1_cp3_ParamLimits

0xc85b,	// (0x0003f0b1) list_single_2graphic_pane_g1_cp3

0xc867,	// (0x0003f0bd) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc867,	// (0x0003f0bd) list_single_2graphic_pane_g2_cp3

0xc876,	// (0x0003f0cc) list_single_2graphic_pane_g3_cp3

0xc87e,	// (0x0003f0d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc87e,	// (0x0003f0d4) list_single_2graphic_pane_g4_cp3

0xc88a,	// (0x0003f0e0) list_single_2graphic_pane_t1_cp3_ParamLimits

0xc88a,	// (0x0003f0e0) list_single_2graphic_pane_t1_cp3

0xc8a4,	// (0x0003f0fa) list_single_midp_graphic_pane_g2_ParamLimits

0xc8a4,	// (0x0003f0fa) list_single_midp_graphic_pane_g2

0xba93,	// (0x0003e2e9) aid_zoom_text_primary

0xc382,	// (0x0003ebd8) aid_zoom_text_secondary

0x60aa,	// (0x00038900) status_small_pane_g7_ParamLimits

0x60aa,	// (0x00038900) status_small_pane_g7

0x60cd,	// (0x00038923) status_small_pane_t1_ParamLimits

0x5af1,	// (0x00038347) title_pane_g2

0x0003,

0xf54e,	// (0x00041da4) title_pane_g

0x5cb9,	// (0x0003850f) aid_size_cell_colour_1_pane_ParamLimits

0x5cb9,	// (0x0003850f) aid_size_cell_colour_1_pane

0x5ccd,	// (0x00038523) aid_size_cell_colour_2_pane_ParamLimits

0x5ccd,	// (0x00038523) aid_size_cell_colour_2_pane

0x5ce1,	// (0x00038537) aid_size_cell_colour_3_pane_ParamLimits

0x5ce1,	// (0x00038537) aid_size_cell_colour_3_pane

0x5cf5,	// (0x0003854b) aid_size_cell_colour_4_pane_ParamLimits

0x5cf5,	// (0x0003854b) aid_size_cell_colour_4_pane

0xbe38,	// (0x0003e68e) title_pane_stacon_g1_ParamLimits

0xbe38,	// (0x0003e68e) title_pane_stacon_g1

0x3b91,	// (0x000363e7) popup_note_wait_window_g3_ParamLimits

0x3b91,	// (0x000363e7) popup_note_wait_window_g3

0x3c07,	// (0x0003645d) popup_note_wait_window_t5_ParamLimits

0x3c07,	// (0x0003645d) popup_note_wait_window_t5

0xf544,	// (0x00041d9a) main_feb_china_hwr_fs_writing_pane

0xc3fe,	// (0x0003ec54) popup_feb_china_hwr_fs_window_ParamLimits

0xc3fe,	// (0x0003ec54) popup_feb_china_hwr_fs_window

0xc8c6,	// (0x0003f11c) aid_size_cell_hwr_fs_ParamLimits

0xc8c6,	// (0x0003f11c) aid_size_cell_hwr_fs

0x362b,	// (0x00035e81) bg_popup_sub_pane_cp3_ParamLimits

0x362b,	// (0x00035e81) bg_popup_sub_pane_cp3

0xc8db,	// (0x0003f131) grid_hwr_fs_pane_ParamLimits

0xc8db,	// (0x0003f131) grid_hwr_fs_pane

0xc8ef,	// (0x0003f145) linegrid_hwr_fs_pane_ParamLimits

0xc8ef,	// (0x0003f145) linegrid_hwr_fs_pane

0xc8ff,	// (0x0003f155) cell_hwr_fs_pane_ParamLimits

0xc8ff,	// (0x0003f155) cell_hwr_fs_pane

0x3637,	// (0x00035e8d) linegrid_hwr_fs_pane_g1_ParamLimits

0x3637,	// (0x00035e8d) linegrid_hwr_fs_pane_g1

0x641a,	// (0x00038c70) linegrid_hwr_fs_pane_g2_ParamLimits

0x641a,	// (0x00038c70) linegrid_hwr_fs_pane_g2

0x3643,	// (0x00035e99) linegrid_hwr_fs_pane_g3_ParamLimits

0x3643,	// (0x00035e99) linegrid_hwr_fs_pane_g3

0xc91d,	// (0x0003f173) linegrid_hwr_fs_pane_g4_ParamLimits

0xc91d,	// (0x0003f173) linegrid_hwr_fs_pane_g4

0xc937,	// (0x0003f18d) linegrid_hwr_fs_pane_g5_ParamLimits

0xc937,	// (0x0003f18d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004204b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004204b) linegrid_hwr_fs_pane_g

0x364f,	// (0x00035ea5) cell_hwr_fs_pane_g1_ParamLimits

0x364f,	// (0x00035ea5) cell_hwr_fs_pane_g1

0x34c3,	// (0x00035d19) cell_hwr_fs_pane_g2_ParamLimits

0x34c3,	// (0x00035d19) cell_hwr_fs_pane_g2

0x642c,	// (0x00038c82) cell_hwr_fs_pane_g3_ParamLimits

0x642c,	// (0x00038c82) cell_hwr_fs_pane_g3

0x6439,	// (0x00038c8f) cell_hwr_fs_pane_g4_ParamLimits

0x6439,	// (0x00038c8f) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00042056) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00042056) cell_hwr_fs_pane_g

0xc94d,	// (0x0003f1a3) cell_hwr_fs_pane_t1

0xf544,	// (0x00041d9a) grid_highlight_pane_cp6

0xf544,	// (0x00041d9a) main_idle_act2_pane

0x08ec,	// (0x00033142) aid_inside_area_popup_secondary

0x64c4,	// (0x00038d1a) aid_inside_area_window_primary_ParamLimits

0x64c4,	// (0x00038d1a) aid_inside_area_window_primary

0x48e5,	// (0x0003713b) ai2_news_ticker_pane

0x48ed,	// (0x00037143) aid_size_cell_ai1_link_ParamLimits

0x48ed,	// (0x00037143) aid_size_cell_ai1_link

0x711c,	// (0x00039972) popup_ai2_data_window_ParamLimits

0x711c,	// (0x00039972) popup_ai2_data_window

0x4907,	// (0x0003715d) popup_ai2_link_window_ParamLimits

0x4907,	// (0x0003715d) popup_ai2_link_window

0x362b,	// (0x00035e81) bg_popup_sub_pane_cp4_ParamLimits

0x362b,	// (0x00035e81) bg_popup_sub_pane_cp4

0x491b,	// (0x00037171) grid_ai2_link_pane_ParamLimits

0x491b,	// (0x00037171) grid_ai2_link_pane

0x4932,	// (0x00037188) popup_ai2_link_window_g1_ParamLimits

0x4932,	// (0x00037188) popup_ai2_link_window_g1

0x493e,	// (0x00037194) popup_ai2_link_window_g2_ParamLimits

0x493e,	// (0x00037194) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00042224) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00042224) popup_ai2_link_window_g

0x494d,	// (0x000371a3) ai2_mp_button_pane

0x4955,	// (0x000371ab) ai2_mp_volume_pane

0x37b2,	// (0x00036008) bg_popup_sub_pane_cp5_ParamLimits

0x37b2,	// (0x00036008) bg_popup_sub_pane_cp5

0x495d,	// (0x000371b3) heading_ai2_gene_pane_ParamLimits

0x495d,	// (0x000371b3) heading_ai2_gene_pane

0x4969,	// (0x000371bf) list_ai2_gene_pane_ParamLimits

0x4969,	// (0x000371bf) list_ai2_gene_pane

0x49b1,	// (0x00037207) cell_ai2_link_pane_ParamLimits

0x49b1,	// (0x00037207) cell_ai2_link_pane

0x49c7,	// (0x0003721d) cell_ai2_link_pane_g1

0xf544,	// (0x00041d9a) grid_highlight_pane_cp7

0xcc31,	// (0x0003f487) ai2_mp_volume_pane_g1

0x4a64,	// (0x000372ba) ai2_mp_volume_pane_g2

0x7147,	// (0x0003999d) list_ai2_gene_pane_t1

0x4a5c,	// (0x000372b2) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0004223d) ai2_mp_volume_pane_g

0xcc39,	// (0x0003f48f) volume_small_pane_cp3

0x4a6c,	// (0x000372c2) aid_size_cell_ai2_button

0x4a74,	// (0x000372ca) grid_ai2_button_pane

0x4a7d,	// (0x000372d3) cell_ai2_button_pane_ParamLimits

0x4a7d,	// (0x000372d3) cell_ai2_button_pane

0xf47c,	// (0x00041cd2) cell_ai2_button_pane_g1

0xf544,	// (0x00041d9a) grid_highlight_pane_cp8

0x4a1c,	// (0x00037272) ai2_gene_pane_t1_ParamLimits

0x4a1c,	// (0x00037272) ai2_gene_pane_t1

0xc370,	// (0x0003ebc6) aid_height_parent_landscape

0x6efe,	// (0x00039754) aid_height_set_list

0x46d9,	// (0x00036f2f) aid_size_parent

0x47b5,	// (0x0003700b) aid_size_cell_graphic_pane_ParamLimits

0x4979,	// (0x000371cf) popup_ai2_data_window_g1_ParamLimits

0x4979,	// (0x000371cf) popup_ai2_data_window_g1

0x4985,	// (0x000371db) ai2_news_ticker_pane_g1

0x498d,	// (0x000371e3) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00042229) ai2_news_ticker_pane_g

0x4995,	// (0x000371eb) ai2_news_ticker_pane_t1

0x49a3,	// (0x000371f9) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0004222e) ai2_news_ticker_pane_t

0x4796,	// (0x00036fec) heading_ai2_gene_pane_g1

0x49d0,	// (0x00037226) heading_ai2_gene_pane_t1_ParamLimits

0x49d0,	// (0x00037226) heading_ai2_gene_pane_t1

0x49e5,	// (0x0003723b) list_highlight_pane_cp6

0x7130,	// (0x00039986) ai2_gene_pane_ParamLimits

0x7130,	// (0x00039986) ai2_gene_pane

0x7155,	// (0x000399ab) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00042233) list_ai2_gene_pane_t

0x49ed,	// (0x00037243) list_highlight_pane_cp8_ParamLimits

0x49ed,	// (0x00037243) list_highlight_pane_cp8

0x49fe,	// (0x00037254) ai2_gene_pane_g1_ParamLimits

0x49fe,	// (0x00037254) ai2_gene_pane_g1

0x4a10,	// (0x00037266) ai2_gene_pane_g2_ParamLimits

0x4a10,	// (0x00037266) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00042238) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00042238) ai2_gene_pane_g

0x06aa,	// (0x00032f00) scroll_pane_cp12

0xc327,	// (0x0003eb7d) control_pane_t3_ParamLimits

0xc327,	// (0x0003eb7d) control_pane_t3

0x60be,	// (0x00038914) status_small_pane_g8_ParamLimits

0x60be,	// (0x00038914) status_small_pane_g8

0xc4be,	// (0x0003ed14) popup_find_window_ParamLimits

0xc640,	// (0x0003ee96) popup_note_image_window_ParamLimits

0xe89a,	// (0x000410f0) list_double2_graphic_pane_vc_g1_ParamLimits

0xe89a,	// (0x000410f0) list_double2_graphic_pane_vc_g1

0x070e,	// (0x00032f64) list_double2_graphic_pane_vc_g2_ParamLimits

0x070e,	// (0x00032f64) list_double2_graphic_pane_vc_g2

0x071a,	// (0x00032f70) list_double2_graphic_pane_vc_g3_ParamLimits

0x071a,	// (0x00032f70) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00042019) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00042019) list_double2_graphic_pane_vc_g

0xe872,	// (0x000410c8) list_double2_graphic_pane_vc_t1_ParamLimits

0xe872,	// (0x000410c8) list_double2_graphic_pane_vc_t1

0x070e,	// (0x00032f64) list_single_heading_pane_vc_g1_ParamLimits

0x070e,	// (0x00032f64) list_single_heading_pane_vc_g1

0x071a,	// (0x00032f70) list_single_heading_pane_vc_g2_ParamLimits

0x071a,	// (0x00032f70) list_single_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041e47) list_single_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041e47) list_single_heading_pane_vc_g

0xee50,	// (0x000416a6) list_single_heading_pane_vc_t1_ParamLimits

0xee50,	// (0x000416a6) list_single_heading_pane_vc_t1

0xee66,	// (0x000416bc) list_single_heading_pane_vc_t2_ParamLimits

0xee66,	// (0x000416bc) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004203a) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004203a) list_single_heading_pane_vc_t

0x15c4,	// (0x00033e1a) list_setting_number_pane_vc_g1_ParamLimits

0x15c4,	// (0x00033e1a) list_setting_number_pane_vc_g1

0x15d0,	// (0x00033e26) list_setting_number_pane_vc_g2_ParamLimits

0x15d0,	// (0x00033e26) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004203f) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004203f) list_setting_number_pane_vc_g

0xee78,	// (0x000416ce) list_setting_number_pane_vc_t1_ParamLimits

0xee78,	// (0x000416ce) list_setting_number_pane_vc_t1

0xee8c,	// (0x000416e2) list_setting_number_pane_vc_t2_ParamLimits

0xee8c,	// (0x000416e2) list_setting_number_pane_vc_t2

0xeea8,	// (0x000416fe) list_setting_number_pane_vc_t3_ParamLimits

0xeea8,	// (0x000416fe) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00042044) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00042044) list_setting_number_pane_vc_t

0xeece,	// (0x00041724) set_value_pane_vc_ParamLimits

0xeece,	// (0x00041724) set_value_pane_vc

0x188f,	// (0x000340e5) list_double2_graphic_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double2_graphic_pane_vc

0x4734,	// (0x00036f8a) list_double2_large_graphic_pane_vc_ParamLimits

0x4734,	// (0x00036f8a) list_double2_large_graphic_pane_vc

0x188f,	// (0x000340e5) list_double2_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double2_pane_vc

0x188f,	// (0x000340e5) list_double_graphic_heading_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double_graphic_heading_pane_vc

0x188f,	// (0x000340e5) list_double_graphic_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double_graphic_pane_vc

0x188f,	// (0x000340e5) list_double_heading_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double_heading_pane_vc

0x18a2,	// (0x000340f8) list_double_large_graphic_pane_vc_ParamLimits

0x18a2,	// (0x000340f8) list_double_large_graphic_pane_vc

0x188f,	// (0x000340e5) list_double_number_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double_number_pane_vc

0x188f,	// (0x000340e5) list_double_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double_pane_vc

0x188f,	// (0x000340e5) list_double_time_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_double_time_pane_vc

0x188f,	// (0x000340e5) list_setting_number_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_setting_number_pane_vc

0x188f,	// (0x000340e5) list_setting_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_setting_pane_vc

0x188f,	// (0x000340e5) list_single_graphic_heading_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_single_graphic_heading_pane_vc

0x188f,	// (0x000340e5) list_single_heading_pane_vc_ParamLimits

0x188f,	// (0x000340e5) list_single_heading_pane_vc

0xef55,	// (0x000417ab) list_single_number_heading_pane_vc_ParamLimits

0xef55,	// (0x000417ab) list_single_number_heading_pane_vc

0xe89a,	// (0x000410f0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe89a,	// (0x000410f0) list_double_graphic_heading_pane_vc_g1

0x070e,	// (0x00032f64) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x070e,	// (0x00032f64) list_double_graphic_heading_pane_vc_g2

0x071a,	// (0x00032f70) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x071a,	// (0x00032f70) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00042019) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00042019) list_double_graphic_heading_pane_vc_g

0xefa8,	// (0x000417fe) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xefa8,	// (0x000417fe) list_double_graphic_heading_pane_vc_t1

0xefbe,	// (0x00041814) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xefbe,	// (0x00041814) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x00042244) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x00042244) list_double_graphic_heading_pane_vc_t

0x15c4,	// (0x00033e1a) list_setting_pane_vc_g1_ParamLimits

0x15c4,	// (0x00033e1a) list_setting_pane_vc_g1

0x15d0,	// (0x00033e26) list_setting_pane_vc_g2_ParamLimits

0x15d0,	// (0x00033e26) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004203f) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004203f) list_setting_pane_vc_g

0xefd6,	// (0x0004182c) list_setting_pane_vc_t1_ParamLimits

0xefd6,	// (0x0004182c) list_setting_pane_vc_t1

0xefea,	// (0x00041840) list_setting_pane_vc_t2_ParamLimits

0xefea,	// (0x00041840) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x00042287) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x00042287) list_setting_pane_vc_t

0xeece,	// (0x00041724) set_value_pane_cp_vc_ParamLimits

0xeece,	// (0x00041724) set_value_pane_cp_vc

0x070e,	// (0x00032f64) list_single_number_heading_pane_vc_g1_ParamLimits

0x070e,	// (0x00032f64) list_single_number_heading_pane_vc_g1

0x071a,	// (0x00032f70) list_single_number_heading_pane_vc_g2_ParamLimits

0x071a,	// (0x00032f70) list_single_number_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041e47) list_single_number_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041e47) list_single_number_heading_pane_vc_g

0xee50,	// (0x000416a6) list_single_number_heading_pane_vc_t1_ParamLimits

0xee50,	// (0x000416a6) list_single_number_heading_pane_vc_t1

0xeffe,	// (0x00041854) list_single_number_heading_pane_vc_t2_ParamLimits

0xeffe,	// (0x00041854) list_single_number_heading_pane_vc_t2

0xf010,	// (0x00041866) list_single_number_heading_pane_vc_t3_ParamLimits

0xf010,	// (0x00041866) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0004228c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0004228c) list_single_number_heading_pane_vc_t

0xe89a,	// (0x000410f0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe89a,	// (0x000410f0) list_single_graphic_heading_pane_vc_g1

0x070e,	// (0x00032f64) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x070e,	// (0x00032f64) list_single_graphic_heading_pane_vc_g4

0x071a,	// (0x00032f70) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x071a,	// (0x00032f70) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00042019) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00042019) list_single_graphic_heading_pane_vc_g

0xee50,	// (0x000416a6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xee50,	// (0x000416a6) list_single_graphic_heading_pane_vc_t1

0xf022,	// (0x00041878) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xf022,	// (0x00041878) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x00042293) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00042293) list_single_graphic_heading_pane_vc_t

0x070e,	// (0x00032f64) list_double2_pane_vc_g1_ParamLimits

0x070e,	// (0x00032f64) list_double2_pane_vc_g1

0x071a,	// (0x00032f70) list_double2_pane_vc_g2_ParamLimits

0x071a,	// (0x00032f70) list_double2_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041e47) list_double2_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041e47) list_double2_pane_vc_g

0xe7f5,	// (0x0004104b) list_double2_pane_vc_t1_ParamLimits

0xe7f5,	// (0x0004104b) list_double2_pane_vc_t1

0x06e2,	// (0x00032f38) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x06e2,	// (0x00032f38) list_double2_large_graphic_pane_vc_g1

0x06ee,	// (0x00032f44) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x06ee,	// (0x00032f44) list_double2_large_graphic_pane_vc_g2

0x06fa,	// (0x00032f50) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x06fa,	// (0x00032f50) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00041e40) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00041e40) list_double2_large_graphic_pane_vc_g

0xe7df,	// (0x00041035) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe7df,	// (0x00041035) list_double2_large_graphic_pane_vc_t1

0x19ee,	// (0x00034244) list_double_time_pane_vc_g1_ParamLimits

0x19ee,	// (0x00034244) list_double_time_pane_vc_g1

0x19fa,	// (0x00034250) list_double_time_pane_vc_g2_ParamLimits

0x19fa,	// (0x00034250) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x00042298) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x00042298) list_double_time_pane_vc_g

0xf034,	// (0x0004188a) list_double_time_pane_vc_t1_ParamLimits

0xf034,	// (0x0004188a) list_double_time_pane_vc_t1

0xf052,	// (0x000418a8) list_double_time_pane_vc_t2_ParamLimits

0xf052,	// (0x000418a8) list_double_time_pane_vc_t2

0xf096,	// (0x000418ec) list_double_time_pane_vc_t3_ParamLimits

0xf096,	// (0x000418ec) list_double_time_pane_vc_t3

0xf0a8,	// (0x000418fe) list_double_time_pane_vc_t4_ParamLimits

0xf0a8,	// (0x000418fe) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x0004229d) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x0004229d) list_double_time_pane_vc_t

0x070e,	// (0x00032f64) list_double_pane_vc_g1_ParamLimits

0x070e,	// (0x00032f64) list_double_pane_vc_g1

0x071a,	// (0x00032f70) list_double_pane_vc_g2_ParamLimits

0x071a,	// (0x00032f70) list_double_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041e47) list_double_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041e47) list_double_pane_vc_g

0xf0ba,	// (0x00041910) list_double_pane_vc_t1_ParamLimits

0xf0ba,	// (0x00041910) list_double_pane_vc_t1

0xf0cc,	// (0x00041922) list_double_pane_vc_t2_ParamLimits

0xf0cc,	// (0x00041922) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x000422a6) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x000422a6) list_double_pane_vc_t

0x070e,	// (0x00032f64) list_double_number_pane_vc_g1_ParamLimits

0x070e,	// (0x00032f64) list_double_number_pane_vc_g1

0x071a,	// (0x00032f70) list_double_number_pane_vc_g2_ParamLimits

0x071a,	// (0x00032f70) list_double_number_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041e47) list_double_number_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041e47) list_double_number_pane_vc_g

0xf0e2,	// (0x00041938) list_double_number_pane_vc_t1_ParamLimits

0xf0e2,	// (0x00041938) list_double_number_pane_vc_t1

0xf0f6,	// (0x0004194c) list_double_number_pane_vc_t2_ParamLimits

0xf0f6,	// (0x0004194c) list_double_number_pane_vc_t2

0xf108,	// (0x0004195e) list_double_number_pane_vc_t3_ParamLimits

0xf108,	// (0x0004195e) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x000422ab) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x000422ab) list_double_number_pane_vc_t

0x1a06,	// (0x0003425c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1a06,	// (0x0003425c) list_double_large_graphic_pane_vc_g1

0x1a2e,	// (0x00034284) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1a2e,	// (0x00034284) list_double_large_graphic_pane_vc_g2

0x1a42,	// (0x00034298) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1a42,	// (0x00034298) list_double_large_graphic_pane_vc_g3

0xf11e,	// (0x00041974) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf11e,	// (0x00041974) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x000422b2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x000422b2) list_double_large_graphic_pane_vc_g

0xf12e,	// (0x00041984) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf12e,	// (0x00041984) list_double_large_graphic_pane_vc_t1

0xf148,	// (0x0004199e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf148,	// (0x0004199e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x000422bb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x000422bb) list_double_large_graphic_pane_vc_t

0x070e,	// (0x00032f64) list_double_heading_pane_vc_g1_ParamLimits

0x070e,	// (0x00032f64) list_double_heading_pane_vc_g1

0x071a,	// (0x00032f70) list_double_heading_pane_vc_g2_ParamLimits

0x071a,	// (0x00032f70) list_double_heading_pane_vc_g2

0x0001,

0xf5f1,	// (0x00041e47) list_double_heading_pane_vc_g_ParamLimits

0xf5f1,	// (0x00041e47) list_double_heading_pane_vc_g

0xf168,	// (0x000419be) list_double_heading_pane_vc_t1_ParamLimits

0xf168,	// (0x000419be) list_double_heading_pane_vc_t1

0xee50,	// (0x000416a6) list_double_heading_pane_vc_t2_ParamLimits

0xee50,	// (0x000416a6) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x000422c0) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x000422c0) list_double_heading_pane_vc_t

0xf17a,	// (0x000419d0) list_double_graphic_pane_vc_g1_ParamLimits

0xf17a,	// (0x000419d0) list_double_graphic_pane_vc_g1

0x1a51,	// (0x000342a7) list_double_graphic_pane_vc_g2_ParamLimits

0x1a51,	// (0x000342a7) list_double_graphic_pane_vc_g2

0x070e,	// (0x00032f64) list_double_graphic_pane_vc_g3_ParamLimits

0x070e,	// (0x00032f64) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x000422c5) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x000422c5) list_double_graphic_pane_vc_g

0xf186,	// (0x000419dc) list_double_graphic_pane_vc_t1_ParamLimits

0xf186,	// (0x000419dc) list_double_graphic_pane_vc_t1

0xf1a4,	// (0x000419fa) list_double_graphic_pane_vc_t2_ParamLimits

0xf1a4,	// (0x000419fa) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x000422ce) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x000422ce) list_double_graphic_pane_vc_t

0xbb15,	// (0x0003e36b) aid_size_cell_fastswap

0xbb1d,	// (0x0003e373) aid_size_cell_touch_ParamLimits

0xbb1d,	// (0x0003e373) aid_size_cell_touch

0xbc6c,	// (0x0003e4c2) popup_fast_swap_wide_window_ParamLimits

0xbc6c,	// (0x0003e4c2) popup_fast_swap_wide_window

0xbd32,	// (0x0003e588) touch_pane_ParamLimits

0xbd32,	// (0x0003e588) touch_pane

0xeb73,	// (0x000413c9) button_value_adjust_pane_cp2

0xeb7b,	// (0x000413d1) button_value_adjust_pane_cp4

0xeb9b,	// (0x000413f1) form_field_data_pane_cp2

0xebba,	// (0x00041410) form_field_data_wide_pane_cp2

0x2bf1,	// (0x00035447) bg_scroll_pane_ParamLimits

0xbf59,	// (0x0003e7af) scroll_handle_pane_ParamLimits

0xbf6d,	// (0x0003e7c3) scroll_sc2_down_pane_ParamLimits

0xbf6d,	// (0x0003e7c3) scroll_sc2_down_pane

0x2c22,	// (0x00035478) scroll_sc2_up_pane_ParamLimits

0x2c22,	// (0x00035478) scroll_sc2_up_pane

0x7277,	// (0x00039acd) grid_wheel_folder_pane_g1_ParamLimits

0x7277,	// (0x00039acd) grid_wheel_folder_pane_g1

0xc121,	// (0x0003e977) clock_nsta_pane_cp2_ParamLimits

0xc121,	// (0x0003e977) clock_nsta_pane_cp2

0x5fcb,	// (0x00038821) listscroll_midp_pane_ParamLimits

0x5fd7,	// (0x0003882d) midp_canvas_pane

0xc368,	// (0x0003ebbe) nsta_clock_indic_pane

0x33c8,	// (0x00035c1e) listscroll_form_pane_vc

0x33d0,	// (0x00035c26) listscroll_set_pane_vc_ParamLimits

0x33d0,	// (0x00035c26) listscroll_set_pane_vc

0x61da,	// (0x00038a30) clock_nsta_pane

0x61e7,	// (0x00038a3d) indicator_nsta_pane

0x34f5,	// (0x00035d4b) bg_popup_sub_pane_cp2_ParamLimits

0x3509,	// (0x00035d5f) find_pane_cp2_ParamLimits

0x3509,	// (0x00035d5f) find_pane_cp2

0x351b,	// (0x00035d71) grid_toobar_pane_ParamLimits

0x35ff,	// (0x00035e55) list_form_gen_pane_vc_ParamLimits

0x35ff,	// (0x00035e55) list_form_gen_pane_vc

0x3615,	// (0x00035e6b) scroll_pane_cp8_vc_ParamLimits

0x3615,	// (0x00035e6b) scroll_pane_cp8_vc

0x3665,	// (0x00035ebb) data_form_wide_pane_vc_ParamLimits

0x3665,	// (0x00035ebb) data_form_wide_pane_vc

0x3671,	// (0x00035ec7) form_field_data_wide_pane_vc_g1

0x3679,	// (0x00035ecf) form_field_data_wide_pane_vc_t1_ParamLimits

0x3679,	// (0x00035ecf) form_field_data_wide_pane_vc_t1

0x07c2,	// (0x00033018) input_focus_pane_cp6_vc_ParamLimits

0x07c2,	// (0x00033018) input_focus_pane_cp6_vc

0x6462,	// (0x00038cb8) list_midp_pane_ParamLimits

0x646e,	// (0x00038cc4) scroll_pane_cp16_ParamLimits

0x646e,	// (0x00038cc4) scroll_pane_cp16

0x3977,	// (0x000361cd) button_value_adjust_pane_ParamLimits

0x3977,	// (0x000361cd) button_value_adjust_pane

0x6f0a,	// (0x00039760) button_value_adjust_pane_cp6_ParamLimits

0x6f0a,	// (0x00039760) button_value_adjust_pane_cp6

0x7012,	// (0x00039868) settings_code_pane_cp_ParamLimits

0x7012,	// (0x00039868) settings_code_pane_cp

0xf47c,	// (0x00041cd2) cell_touch_pane_g1

0xf47c,	// (0x00041cd2) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00041f5e) cell_touch_pane_g

0x7163,	// (0x000399b9) cell_touch_pane_cp_ParamLimits

0x7163,	// (0x000399b9) cell_touch_pane_cp

0x7173,	// (0x000399c9) cell_touch_pane_ParamLimits

0x7173,	// (0x000399c9) cell_touch_pane

0xf47c,	// (0x00041cd2) scroll_sc2_down_pane_g1

0xf47c,	// (0x00041cd2) scroll_sc2_up_pane_g1

0xf544,	// (0x00041d9a) bg_set_opt_pane_cp4_vc

0x4a8f,	// (0x000372e5) list_set_graphic_pane_vc_g1_ParamLimits

0x4a8f,	// (0x000372e5) list_set_graphic_pane_vc_g1

0x4a9b,	// (0x000372f1) list_set_graphic_pane_vc_g2_ParamLimits

0x4a9b,	// (0x000372f1) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x00042249) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x00042249) list_set_graphic_pane_vc_g

0x4aa7,	// (0x000372fd) text_primary_small_cp13_vc_ParamLimits

0x4aa7,	// (0x000372fd) text_primary_small_cp13_vc

0x4abf,	// (0x00037315) list_set_graphic_pane_vc_ParamLimits

0x4abf,	// (0x00037315) list_set_graphic_pane_vc

0xf544,	// (0x00041d9a) input_focus_pane_cp2_vc

0xf47c,	// (0x00041cd2) setting_code_pane_vc_g1

0x4ad2,	// (0x00037328) setting_code_pane_vc_t1

0x4ae0,	// (0x00037336) set_text_pane_vc_t1_ParamLimits

0x4ae0,	// (0x00037336) set_text_pane_vc_t1

0xf544,	// (0x00041d9a) input_focus_pane_cp1_vc

0x4afb,	// (0x00037351) list_set_text_pane_vc

0xf47c,	// (0x00041cd2) setting_text_pane_vc_g1

0xf544,	// (0x00041d9a) bg_set_opt_pane_cp2_vc

0x4b05,	// (0x0003735b) setting_slider_graphic_pane_vc_g1

0x4b0d,	// (0x00037363) setting_slider_graphic_pane_vc_t1

0x4b1b,	// (0x00037371) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004224e) setting_slider_graphic_pane_vc_t

0x4b29,	// (0x0003737f) slider_set_pane_cp_vc

0x4b31,	// (0x00037387) slider_set_pane_vc_g1

0x4b3a,	// (0x00037390) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x00042253) slider_set_pane_vc_g

0x0811,	// (0x00033067) set_opt_bg_pane_g1_copy1

0x0819,	// (0x0003306f) set_opt_bg_pane_g2_copy1

0x4b66,	// (0x000373bc) set_opt_bg_pane_g3_copy1

0x0829,	// (0x0003307f) set_opt_bg_pane_g4_copy1

0x0831,	// (0x00033087) set_opt_bg_pane_g5_copy1

0x0839,	// (0x0003308f) set_opt_bg_pane_g6_copy1

0x4b6e,	// (0x000373c4) set_opt_bg_pane_g7_copy1

0x4b76,	// (0x000373cc) set_opt_bg_pane_g8_copy1

0x4b7e,	// (0x000373d4) set_opt_bg_pane_g9_copy1

0xf544,	// (0x00041d9a) bg_set_opt_pane_cp_vc

0x4b86,	// (0x000373dc) setting_slider_pane_vc_t1

0x4b0d,	// (0x00037363) setting_slider_pane_vc_t2

0x4b1b,	// (0x00037371) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x00042262) setting_slider_pane_vc_t

0x4b29,	// (0x0003737f) slider_set_pane_vc

0xc95b,	// (0x0003f1b1) volume_set_pane_vc_g1

0xcc42,	// (0x0003f498) volume_set_pane_vc_g2

0xcc4b,	// (0x0003f4a1) volume_set_pane_vc_g3

0xcc54,	// (0x0003f4aa) volume_set_pane_vc_g4

0xcc5d,	// (0x0003f4b3) volume_set_pane_vc_g5

0xcc66,	// (0x0003f4bc) volume_set_pane_vc_g6

0xcc6f,	// (0x0003f4c5) volume_set_pane_vc_g7

0xcc78,	// (0x0003f4ce) volume_set_pane_vc_g8

0xcc81,	// (0x0003f4d7) volume_set_pane_vc_g9

0xcc8a,	// (0x0003f4e0) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x00042269) volume_set_pane_vc_g

0x4b95,	// (0x000373eb) volume_set_pane_vc

0x4b9d,	// (0x000373f3) button_value_adjust_pane_cp1_vc

0x4ba7,	// (0x000373fd) list_highlight_pane_cp2_vc

0x4bb0,	// (0x00037406) list_set_pane_vc_ParamLimits

0x4bb0,	// (0x00037406) list_set_pane_vc

0x4c02,	// (0x00037458) main_pane_set_vc_t1_ParamLimits

0x4c02,	// (0x00037458) main_pane_set_vc_t1

0x4c17,	// (0x0003746d) main_pane_set_vc_t2_ParamLimits

0x4c17,	// (0x0003746d) main_pane_set_vc_t2

0x4c29,	// (0x0003747f) main_pane_set_vc_t3_ParamLimits

0x4c29,	// (0x0003747f) main_pane_set_vc_t3

0x4c3b,	// (0x00037491) main_pane_set_vc_t4_ParamLimits

0x4c3b,	// (0x00037491) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x0004227e) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x0004227e) main_pane_set_vc_t

0x4c4d,	// (0x000374a3) setting_code_pane_vc_ParamLimits

0x4c4d,	// (0x000374a3) setting_code_pane_vc

0x4c5c,	// (0x000374b2) setting_slider_graphic_pane_vc

0x4c5c,	// (0x000374b2) setting_slider_pane_vc

0x4c5c,	// (0x000374b2) setting_text_pane_vc

0x4c5c,	// (0x000374b2) setting_volume_pane_vc

0x4c64,	// (0x000374ba) scroll_pane_cp121_vc

0x07ad,	// (0x00033003) set_content_pane_vc

0x4c6c,	// (0x000374c2) button_value_adjust_pane_g1

0x4c75,	// (0x000374cb) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x000422d3) button_value_adjust_pane_g

0x4c7e,	// (0x000374d4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4c7e,	// (0x000374d4) form_field_slider_wide_pane_vc_t1

0x4c94,	// (0x000374ea) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4c94,	// (0x000374ea) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x000422d8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x000422d8) form_field_slider_wide_pane_vc_t

0x028e,	// (0x00032ae4) input_focus_pane_cp10_vc_ParamLimits

0x028e,	// (0x00032ae4) input_focus_pane_cp10_vc

0x4cbf,	// (0x00037515) slider_cont_pane_cp1_vc_ParamLimits

0x4cbf,	// (0x00037515) slider_cont_pane_cp1_vc

0x4b31,	// (0x00037387) slider_form_pane_g1_cp2

0x4b3a,	// (0x00037390) slider_form_pane_g2_cp2

0x4cda,	// (0x00037530) form_field_slider_pane_vc_t3

0x4ce8,	// (0x0003753e) form_field_slider_pane_vc_t4

0x4cf6,	// (0x0003754c) slider_form_pane_vc_ParamLimits

0x4cf6,	// (0x0003754c) slider_form_pane_vc

0x4d03,	// (0x00037559) form_field_slider_pane_vc_t1_ParamLimits

0x4d03,	// (0x00037559) form_field_slider_pane_vc_t1

0x4d19,	// (0x0003756f) form_field_slider_pane_vc_t2_ParamLimits

0x4d19,	// (0x0003756f) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x000422ea) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x000422ea) form_field_slider_pane_vc_t

0x028e,	// (0x00032ae4) input_focus_pane_cp9_vc_ParamLimits

0x028e,	// (0x00032ae4) input_focus_pane_cp9_vc

0x4d2b,	// (0x00037581) slider_cont_pane_vc_ParamLimits

0x4d2b,	// (0x00037581) slider_cont_pane_vc

0x4d3d,	// (0x00037593) list_form_graphic_pane_cp_vc_ParamLimits

0x4d3d,	// (0x00037593) list_form_graphic_pane_cp_vc

0x3671,	// (0x00035ec7) form_field_popup_wide_pane_vc_g1

0x4d52,	// (0x000375a8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4d52,	// (0x000375a8) form_field_popup_wide_pane_vc_t1

0x07c2,	// (0x00033018) input_focus_pane_cp8_vc_ParamLimits

0x07c2,	// (0x00033018) input_focus_pane_cp8_vc

0x4d91,	// (0x000375e7) list_form_wide_pane_vc_ParamLimits

0x4d91,	// (0x000375e7) list_form_wide_pane_vc

0x4d9d,	// (0x000375f3) list_form_graphic_pane_vc_g1

0x4da5,	// (0x000375fb) list_form_graphic_pane_vc_t1_ParamLimits

0x4da5,	// (0x000375fb) list_form_graphic_pane_vc_t1

0x00c9,	// (0x0003291f) list_highlight_pane_cp5_vc_ParamLimits

0x00c9,	// (0x0003291f) list_highlight_pane_cp5_vc

0x4dc1,	// (0x00037617) list_form_graphic_pane_vc_ParamLimits

0x4dc1,	// (0x00037617) list_form_graphic_pane_vc

0x3671,	// (0x00035ec7) form_field_popup_pane_vc_g1

0x4dd7,	// (0x0003762d) form_field_popup_pane_vc_t1_ParamLimits

0x4dd7,	// (0x0003762d) form_field_popup_pane_vc_t1

0x07c2,	// (0x00033018) input_focus_pane_cp7_vc_ParamLimits

0x07c2,	// (0x00033018) input_focus_pane_cp7_vc

0x4dec,	// (0x00037642) list_form_pane_vc_ParamLimits

0x4dec,	// (0x00037642) list_form_pane_vc

0x4df8,	// (0x0003764e) data_form_pane_vc_t1_ParamLimits

0x4df8,	// (0x0003764e) data_form_pane_vc_t1

0x0811,	// (0x00033067) input_focus_pane_vc_g1

0x0819,	// (0x0003306f) input_focus_pane_vc_g2

0x0821,	// (0x00033077) input_focus_pane_vc_g3

0x0829,	// (0x0003307f) input_focus_pane_vc_g4

0x0831,	// (0x00033087) input_focus_pane_vc_g5

0x0839,	// (0x0003308f) input_focus_pane_vc_g6

0x0841,	// (0x00033097) input_focus_pane_vc_g7

0x0849,	// (0x0003309f) input_focus_pane_vc_g8

0x0851,	// (0x000330a7) input_focus_pane_vc_g9

0xf47c,	// (0x00041cd2) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00041ee7) input_focus_pane_vc_g

0x3665,	// (0x00035ebb) data_form_pane_vc_ParamLimits

0x3665,	// (0x00035ebb) data_form_pane_vc

0x3671,	// (0x00035ec7) form_field_data_pane_vc_g1

0x4e13,	// (0x00037669) form_field_data_pane_vc_t1_ParamLimits

0x4e13,	// (0x00037669) form_field_data_pane_vc_t1

0x07c2,	// (0x00033018) input_focus_pane_vc_ParamLimits

0x07c2,	// (0x00033018) input_focus_pane_vc

0x4e29,	// (0x0003767f) button_value_adjust_pane_cp3_vc

0x4e31,	// (0x00037687) button_value_adjust_pane_cp5_vc

0x4e39,	// (0x0003768f) form_field_data_pane_vc_ParamLimits

0x4e39,	// (0x0003768f) form_field_data_pane_vc

0x4e50,	// (0x000376a6) form_field_data_pane_vc_cp2

0x4e58,	// (0x000376ae) form_field_data_wide_pane_vc_ParamLimits

0x4e58,	// (0x000376ae) form_field_data_wide_pane_vc

0x4e6e,	// (0x000376c4) form_field_data_wide_pane_vc_cp2

0x4e76,	// (0x000376cc) form_field_popup_pane_vc_ParamLimits

0x4e76,	// (0x000376cc) form_field_popup_pane_vc

0x4e8d,	// (0x000376e3) form_field_popup_wide_pane_vc_ParamLimits

0x4e8d,	// (0x000376e3) form_field_popup_wide_pane_vc

0x4ea3,	// (0x000376f9) form_field_slider_pane_vc_ParamLimits

0x4ea3,	// (0x000376f9) form_field_slider_pane_vc

0x4eb6,	// (0x0003770c) form_field_slider_wide_pane_vc_ParamLimits

0x4eb6,	// (0x0003770c) form_field_slider_wide_pane_vc

0x7185,	// (0x000399db) grid_touch_1_pane_ParamLimits

0x7185,	// (0x000399db) grid_touch_1_pane

0x7191,	// (0x000399e7) grid_touch_2_pane_ParamLimits

0x7191,	// (0x000399e7) grid_touch_2_pane

0x339a,	// (0x00035bf0) touch_pane_g1_ParamLimits

0x339a,	// (0x00035bf0) touch_pane_g1

0x4ec9,	// (0x0003771f) cell_app_pane_cp_wide_ParamLimits

0x4ec9,	// (0x0003771f) cell_app_pane_cp_wide

0x4ed9,	// (0x0003772f) grid_popup_fast_wide_pane_ParamLimits

0x4ed9,	// (0x0003772f) grid_popup_fast_wide_pane

0x4eed,	// (0x00037743) scroll_pane_cp19_ParamLimits

0x4eed,	// (0x00037743) scroll_pane_cp19

0xf544,	// (0x00041d9a) bg_popup_window_pane_cp20

0x4f01,	// (0x00037757) listscroll_popup_fast_wide_pane

0x00c9,	// (0x0003291f) grid_indicator_nsta_pane

0x4f09,	// (0x0003775f) clock_nsta_pane_g1

0x4f12,	// (0x00037768) clock_nsta_pane_t1

0x71a9,	// (0x000399ff) cell_indicator_nsta_pane_ParamLimits

0x71a9,	// (0x000399ff) cell_indicator_nsta_pane

0x4f2e,	// (0x00037784) cell_indicator_nsta_pane_g1

0x71da,	// (0x00039a30) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x000422fb) cell_indicator_nsta_pane_g

0x4f3c,	// (0x00037792) clock_nsta_pane_cp

0x4f44,	// (0x0003779a) indicator_nsta_pane_cp

0x4f4d,	// (0x000377a3) nsta_clock_indic_pane_g1

0x0197,	// (0x000329ed) grid_indicator_pane

0x2d14,	// (0x0003556a) scroll_pane_cp29

0xc078,	// (0x0003e8ce) indicator_nsta_pane_cp2_ParamLimits

0xc078,	// (0x0003e8ce) indicator_nsta_pane_cp2

0x00c9,	// (0x0003291f) main_apps_wheel_pane

0x3810,	// (0x00036066) form_midp_field_text_pane_ParamLimits

0x393d,	// (0x00036193) scroll_bar_cp050_ParamLimits

0x4fb6,	// (0x0003780c) cell_indicator_pane_ParamLimits

0x4fb6,	// (0x0003780c) cell_indicator_pane

0x4fcc,	// (0x00037822) cell_indicator_pane_g1

0x71e7,	// (0x00039a3d) grid_wheel_folder_pane_ParamLimits

0x71e7,	// (0x00039a3d) grid_wheel_folder_pane

0x71f9,	// (0x00039a4f) list_wheel_apps_pane_ParamLimits

0x71f9,	// (0x00039a4f) list_wheel_apps_pane

0x7208,	// (0x00039a5e) main_apps_wheel_pane_g1_ParamLimits

0x7208,	// (0x00039a5e) main_apps_wheel_pane_g1

0x721c,	// (0x00039a72) main_apps_wheel_pane_g2_ParamLimits

0x721c,	// (0x00039a72) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00042317) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00042317) main_apps_wheel_pane_g

0x7230,	// (0x00039a86) main_apps_wheel_pane_t1_ParamLimits

0x7230,	// (0x00039a86) main_apps_wheel_pane_t1

0x724f,	// (0x00039aa5) list_wheel_apps_pane_g1

0x7257,	// (0x00039aad) list_wheel_apps_pane_g2

0x725f,	// (0x00039ab5) list_wheel_apps_pane_g3

0x7267,	// (0x00039abd) list_wheel_apps_pane_g4

0x726f,	// (0x00039ac5) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0004231c) list_wheel_apps_pane_g

0x00c9,	// (0x0003291f) navi_icon_text_pane

0x612e,	// (0x00038984) aid_fill_nsta

0x4fd6,	// (0x0003782c) navi_icon_text_pane_g1

0x4fe2,	// (0x00037838) navi_icon_text_pane_t1

0x2f8e,	// (0x000357e4) list_set_graphic_pane_t1_ParamLimits

0x2f8e,	// (0x000357e4) list_set_graphic_pane_t1

0x4023,	// (0x00036879) popup_midp_note_alarm_window_t6_ParamLimits

0x4023,	// (0x00036879) popup_midp_note_alarm_window_t6

0x4035,	// (0x0003688b) popup_midp_note_alarm_window_t7_ParamLimits

0x4035,	// (0x0003688b) popup_midp_note_alarm_window_t7

0x4047,	// (0x0003689d) popup_midp_note_alarm_window_t8_ParamLimits

0x4047,	// (0x0003689d) popup_midp_note_alarm_window_t8

0x4059,	// (0x000368af) popup_midp_note_alarm_window_t9_ParamLimits

0x4059,	// (0x000368af) popup_midp_note_alarm_window_t9

0x406b,	// (0x000368c1) popup_midp_note_alarm_window_t10_ParamLimits

0x406b,	// (0x000368c1) popup_midp_note_alarm_window_t10

0x407d,	// (0x000368d3) popup_midp_note_alarm_window_t11_ParamLimits

0x407d,	// (0x000368d3) popup_midp_note_alarm_window_t11

0x408f,	// (0x000368e5) scroll_pane_cp17_ParamLimits

0x408f,	// (0x000368e5) scroll_pane_cp17

0xc95b,	// (0x0003f1b1) volume_small_pane_cp_g1

0xcc93,	// (0x0003f4e9) volume_small_pane_cp_g2

0xcc9c,	// (0x0003f4f2) volume_small_pane_cp_g3

0xcca5,	// (0x0003f4fb) volume_small_pane_cp_g4

0xc988,	// (0x0003f1de) volume_small_pane_cp_g5

0xccae,	// (0x0003f504) volume_small_pane_cp_g6

0xccb7,	// (0x0003f50d) volume_small_pane_cp_g7

0xccc0,	// (0x0003f516) volume_small_pane_cp_g8

0xccc9,	// (0x0003f51f) volume_small_pane_cp_g9

0xccd2,	// (0x0003f528) volume_small_pane_cp_g10

0x323d,	// (0x00035a93) midp_ticker_pane_g1_ParamLimits

0x3249,	// (0x00035a9f) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00041fb3) midp_ticker_pane_g_ParamLimits

0x3255,	// (0x00035aab) midp_ticker_pane_t1_ParamLimits

0x613e,	// (0x00038994) aid_fill_nsta_2

0x3929,	// (0x0003617f) list_form2_midp_pane

0x4715,	// (0x00036f6b) midp_editing_number_pane_ParamLimits

0x4721,	// (0x00036f77) midp_ticker_pane_ParamLimits

0x4ff4,	// (0x0003784a) form2_midp_field_pane

0x4ffc,	// (0x00037852) scroll_pane_cp51

0x501c,	// (0x00037872) form2_midp_button_pane_ParamLimits

0x501c,	// (0x00037872) form2_midp_button_pane

0x502e,	// (0x00037884) form2_midp_content_pane_ParamLimits

0x502e,	// (0x00037884) form2_midp_content_pane

0x5048,	// (0x0003789e) form2_midp_field_choice_group_pane

0x5050,	// (0x000378a6) form2_midp_field_pane_g1

0x5058,	// (0x000378ae) form2_midp_field_pane_g2

0x5060,	// (0x000378b6) form2_midp_field_pane_g3

0x5068,	// (0x000378be) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00042341) form2_midp_field_pane_g

0x5070,	// (0x000378c6) form2_midp_gauge_slider_pane

0x5078,	// (0x000378ce) form2_midp_gauge_wait_pane

0x5080,	// (0x000378d6) form2_midp_image_pane_ParamLimits

0x5080,	// (0x000378d6) form2_midp_image_pane

0x509b,	// (0x000378f1) form2_midp_label_pane_ParamLimits

0x509b,	// (0x000378f1) form2_midp_label_pane

0x72aa,	// (0x00039b00) form2_midp_label_pane_cp_ParamLimits

0x72aa,	// (0x00039b00) form2_midp_label_pane_cp

0x50b4,	// (0x0003790a) form2_midp_string_pane_ParamLimits

0x50b4,	// (0x0003790a) form2_midp_string_pane

0xf1c2,	// (0x00041a18) form2_midp_text_pane_ParamLimits

0xf1c2,	// (0x00041a18) form2_midp_text_pane

0x50c6,	// (0x0003791c) form2_midp_time_pane

0x50d6,	// (0x0003792c) input_focus_pane_cp51_ParamLimits

0x50d6,	// (0x0003792c) input_focus_pane_cp51

0x50ee,	// (0x00037944) form2_midp_label_pane_t1_ParamLimits

0x50ee,	// (0x00037944) form2_midp_label_pane_t1

0xf1db,	// (0x00041a31) form2_mdip_text_pane_t1_ParamLimits

0xf1db,	// (0x00041a31) form2_mdip_text_pane_t1

0xf1f4,	// (0x00041a4a) form2_midp_time_pane_t1

0x5136,	// (0x0003798c) form2_midp_gauge_slider_pane_t1

0x72c9,	// (0x00039b1f) form2_midp_gauge_slider_pane_t2

0x72db,	// (0x00039b31) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0004234a) form2_midp_gauge_slider_pane_t

0x5148,	// (0x0003799e) form2_midp_slider_pane

0x5154,	// (0x000379aa) form2_midp_gauge_wait_pane_t1

0x5162,	// (0x000379b8) form2_midp_wait_pane_ParamLimits

0x5162,	// (0x000379b8) form2_midp_wait_pane

0x36af,	// (0x00035f05) list_single_2graphic_pane_cp4_ParamLimits

0x36af,	// (0x00035f05) list_single_2graphic_pane_cp4

0x518d,	// (0x000379e3) list_single_midp_graphic_pane_cp_ParamLimits

0x518d,	// (0x000379e3) list_single_midp_graphic_pane_cp

0xf544,	// (0x00041d9a) list_highlight_pane_cp20

0x51ab,	// (0x00037a01) list_single_2graphic_pane_g1_cp4

0x4796,	// (0x00036fec) list_single_2graphic_pane_g2_cp4

0x51b3,	// (0x00037a09) list_single_2graphic_pane_t1_cp4

0x00c9,	// (0x0003291f) list_highlight_pane_cp21

0x51c2,	// (0x00037a18) list_single_midp_graphic_pane_g4_cp

0x51d1,	// (0x00037a27) list_single_midp_graphic_pane_t1_cp

0x51e6,	// (0x00037a3c) form2_mdip_string_pane_t1_ParamLimits

0x51e6,	// (0x00037a3c) form2_mdip_string_pane_t1

0xf544,	// (0x00041d9a) bg_wml_button_pane_cp2

0xf47c,	// (0x00041cd2) form2_midp_image_pane_g1

0x074a,	// (0x00032fa0) list_double_large_graphic_pane_g5_ParamLimits

0x074a,	// (0x00032fa0) list_double_large_graphic_pane_g5

0x5fcb,	// (0x00038821) midp_form_pane_ParamLimits

0x00c9,	// (0x0003291f) main_apps_wheel_pane_ParamLimits

0xc664,	// (0x0003eeba) popup_preview_window_ParamLimits

0xc664,	// (0x0003eeba) popup_preview_window

0xc7df,	// (0x0003f035) popup_touch_info_window_ParamLimits

0xc7df,	// (0x0003f035) popup_touch_info_window

0xc7fd,	// (0x0003f053) popup_touch_menu_window_ParamLimits

0xc7fd,	// (0x0003f053) popup_touch_menu_window

0xf472,	// (0x00041cc8) bg_popup_sub_pane_cp6

0x5250,	// (0x00037aa6) list_touch_menu_pane

0x5258,	// (0x00037aae) list_single_touch_menu_pane_ParamLimits

0x5258,	// (0x00037aae) list_single_touch_menu_pane

0x526f,	// (0x00037ac5) list_single_touch_menu_pane_t1

0x00c9,	// (0x0003291f) bg_popup_sub_pane_cp7_ParamLimits

0x00c9,	// (0x0003291f) bg_popup_sub_pane_cp7

0x527d,	// (0x00037ad3) heading_sub_pane

0x5285,	// (0x00037adb) list_touch_info_pane_ParamLimits

0x5285,	// (0x00037adb) list_touch_info_pane

0x5294,	// (0x00037aea) list_single_touch_info_pane_ParamLimits

0x5294,	// (0x00037aea) list_single_touch_info_pane

0x52a5,	// (0x00037afb) list_single_touch_info_pane_t1

0x52b3,	// (0x00037b09) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00042358) list_single_touch_info_pane_t

0x3213,	// (0x00035a69) bg_popup_heading_pane_cp

0x52c1,	// (0x00037b17) heading_sub_pane_t1

0x362b,	// (0x00035e81) bg_popup_preview_window_pane_cp_ParamLimits

0x362b,	// (0x00035e81) bg_popup_preview_window_pane_cp

0x527d,	// (0x00037ad3) heading_preview_pane

0x5285,	// (0x00037adb) list_preview_pane_ParamLimits

0x5285,	// (0x00037adb) list_preview_pane

0x52cf,	// (0x00037b25) popup_preview_window_g1

0x5294,	// (0x00037aea) list_single_preview_pane_ParamLimits

0x5294,	// (0x00037aea) list_single_preview_pane

0x52d7,	// (0x00037b2d) list_single_preview_pane_g1

0x52df,	// (0x00037b35) list_single_preview_pane_t1

0x52a5,	// (0x00037afb) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0004235d) list_single_preview_pane_t

0x52ed,	// (0x00037b43) bg_popup_heading_pane_cp2_ParamLimits

0x52ed,	// (0x00037b43) bg_popup_heading_pane_cp2

0x5303,	// (0x00037b59) heading_preview_pane_g1

0x530b,	// (0x00037b61) heading_preview_pane_t1_ParamLimits

0x530b,	// (0x00037b61) heading_preview_pane_t1

0x01ae,	// (0x00032a04) soft_indicator_pane_t1_ParamLimits

0x0686,	// (0x00032edc) scroll_pane_ParamLimits

0x2c19,	// (0x0003546f) scroll_sc2_left_pane

0x2c10,	// (0x00035466) scroll_sc2_right_pane

0x2c38,	// (0x0003548e) scroll_bg_pane_g1_ParamLimits

0x2c4d,	// (0x000354a3) scroll_bg_pane_g2_ParamLimits

0x2c65,	// (0x000354bb) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00041f3e) scroll_bg_pane_g_ParamLimits

0x2c38,	// (0x0003548e) scroll_handle_pane_g1_ParamLimits

0x2c87,	// (0x000354dd) scroll_handle_pane_g2_ParamLimits

0x2c65,	// (0x000354bb) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00041f45) scroll_handle_pane_g_ParamLimits

0xc3ac,	// (0x0003ec02) popup_choice_list_window_ParamLimits

0xc3ac,	// (0x0003ec02) popup_choice_list_window

0x3501,	// (0x00035d57) choice_list_pane

0x3577,	// (0x00035dcd) cell_toolbar_pane_t1

0x359f,	// (0x00035df5) toolbar_button_pane_ParamLimits

0x448a,	// (0x00036ce0) ai_gene_pane_1_t2_ParamLimits

0x448a,	// (0x00036ce0) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00042168) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00042168) ai_gene_pane_1_t

0x5328,	// (0x00037b7e) scroll_sc2_left_pane_g1

0x5328,	// (0x00037b7e) scroll_sc2_right_pane_g1

0x10b2,	// (0x00033908) bg_popup_sub_pane_cp10

0x5332,	// (0x00037b88) list_choice_list_pane

0x5349,	// (0x00037b9f) list_single_choice_list_pane_ParamLimits

0x5349,	// (0x00037b9f) list_single_choice_list_pane

0x535b,	// (0x00037bb1) list_single_choice_list_pane_g1

0x0927,	// (0x0003317d) list_single_choice_list_pane_t1_ParamLimits

0x0927,	// (0x0003317d) list_single_choice_list_pane_t1

0x5363,	// (0x00037bb9) choice_list_pane_g1

0x536b,	// (0x00037bc1) choice_list_pane_t1

0xf472,	// (0x00041cc8) input_focus_pane_cp11

0x0ae2,	// (0x00033338) title_pane_stacon_g2_ParamLimits

0x0ae2,	// (0x00033338) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00041f24) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00041f24) title_pane_stacon_g

0x3213,	// (0x00035a69) cursor_press_pane

0xc448,	// (0x0003ec9e) popup_fep_hwr_window_ParamLimits

0xc448,	// (0x0003ec9e) popup_fep_hwr_window

0xc4a4,	// (0x0003ecfa) popup_fep_vkb_window_ParamLimits

0xc4a4,	// (0x0003ecfa) popup_fep_vkb_window

0x5379,	// (0x00037bcf) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x00042386) fep_vkb_side_pane_g_ParamLimits

0xcd10,	// (0x0003f566) fep_hwr_candidate_pane_ParamLimits

0xcd10,	// (0x0003f566) fep_hwr_candidate_pane

0xcd38,	// (0x0003f58e) fep_hwr_side_pane_ParamLimits

0xcd38,	// (0x0003f58e) fep_hwr_side_pane

0xcd58,	// (0x0003f5ae) fep_hwr_top_pane_ParamLimits

0xcd58,	// (0x0003f5ae) fep_hwr_top_pane

0xcd70,	// (0x0003f5c6) fep_hwr_write_pane_ParamLimits

0xcd70,	// (0x0003f5c6) fep_hwr_write_pane

0xfb30,	// (0x00042386) fep_vkb_side_pane_g

0x5393,	// (0x00037be9) fep_hwr_top_pane_g1

0x5381,	// (0x00037bd7) fep_hwr_top_pane_g2

0xcdaa,	// (0x0003f600) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x00042362) fep_hwr_top_pane_g

0xcdbf,	// (0x0003f615) fep_hwr_top_text_pane

0x2d81,	// (0x000355d7) fep_hwr_top_text_pane_g1

0x53c9,	// (0x00037c1f) fep_hwr_top_text_pane_t1

0xcead,	// (0x0003f703) fep_hwr_candidate_pane_g1

0x5592,	// (0x00037de8) fep_vkb_keypad_pane_g3_ParamLimits

0x5592,	// (0x00037de8) fep_vkb_keypad_pane_g3

0x55b4,	// (0x00037e0a) fep_vkb_keypad_pane_g4_ParamLimits

0x55b4,	// (0x00037e0a) fep_vkb_keypad_pane_g4

0x5623,	// (0x00037e79) fep_vkb_bottom_pane_g2_ParamLimits

0x5623,	// (0x00037e79) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0004238d) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0004238d) fep_vkb_bottom_pane_g

0x5328,	// (0x00037b7e) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x00042397) cell_vkb_side_pane_g

0x5667,	// (0x00037ebd) cell_vkb_side_pane_t1

0x5675,	// (0x00037ecb) cell_vkb_side_pane_t1_copy1

0x5328,	// (0x00037b7e) bg_fep_vkb_candidate_pane_g2

0x5743,	// (0x00037f99) cell_vkb_candidate_pane_ParamLimits

0x53d7,	// (0x00037c2d) aid_size_cell_vkb_ParamLimits

0x53d7,	// (0x00037c2d) aid_size_cell_vkb

0x5743,	// (0x00037f99) cell_vkb_candidate_pane

0xced4,	// (0x0003f72a) bg_popup_fep_shadow_pane_g1

0x5441,	// (0x00037c97) fep_vkb_bottom_pane_ParamLimits

0x5441,	// (0x00037c97) fep_vkb_bottom_pane

0x547e,	// (0x00037cd4) fep_vkb_candidate_pane_ParamLimits

0x547e,	// (0x00037cd4) fep_vkb_candidate_pane

0x549a,	// (0x00037cf0) fep_vkb_keypad_pane_ParamLimits

0x549a,	// (0x00037cf0) fep_vkb_keypad_pane

0x54ce,	// (0x00037d24) fep_vkb_side_pane_ParamLimits

0x54ce,	// (0x00037d24) fep_vkb_side_pane

0x54fa,	// (0x00037d50) fep_vkb_top_pane_ParamLimits

0x54fa,	// (0x00037d50) fep_vkb_top_pane

0x5526,	// (0x00037d7c) fep_vkb_top_pane_g1_ParamLimits

0x5526,	// (0x00037d7c) fep_vkb_top_pane_g1

0x5535,	// (0x00037d8b) fep_vkb_top_pane_g2_ParamLimits

0x5535,	// (0x00037d8b) fep_vkb_top_pane_g2

0x5544,	// (0x00037d9a) fep_vkb_top_pane_g3_ParamLimits

0x5544,	// (0x00037d9a) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0004237d) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0004237d) fep_vkb_top_pane_g

0x5562,	// (0x00037db8) fep_vkb_top_text_pane_ParamLimits

0x5562,	// (0x00037db8) fep_vkb_top_text_pane

0x72f9,	// (0x00039b4f) fep_vkb_side_pane_g1_ParamLimits

0x72f9,	// (0x00039b4f) fep_vkb_side_pane_g1

0x5581,	// (0x00037dd7) grid_vkb_side_pane_ParamLimits

0x5581,	// (0x00037dd7) grid_vkb_side_pane

0xcedc,	// (0x0003f732) bg_popup_fep_shadow_pane_g2

0xcee5,	// (0x0003f73b) bg_popup_fep_shadow_pane_g3

0xceed,	// (0x0003f743) bg_popup_fep_shadow_pane_g4

0xcef6,	// (0x0003f74c) bg_popup_fep_shadow_pane_g5

0xcefe,	// (0x0003f754) bg_popup_fep_shadow_pane_g6

0xcf06,	// (0x0003f75c) bg_popup_fep_shadow_pane_g7

0x0829,	// (0x0003307f) bg_popup_fep_shadow_pane_g8

0x55d2,	// (0x00037e28) grid_vkb_keypad_number_pane_ParamLimits

0x55d2,	// (0x00037e28) grid_vkb_keypad_number_pane

0x55e2,	// (0x00037e38) grid_vkb_keypad_pane_ParamLimits

0x55e2,	// (0x00037e38) grid_vkb_keypad_pane

0x5608,	// (0x00037e5e) fep_vkb_bottom_pane_g1_ParamLimits

0x5608,	// (0x00037e5e) fep_vkb_bottom_pane_g1

0x5631,	// (0x00037e87) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5631,	// (0x00037e87) grid_vkb_keypad_bottom_left_pane

0x5646,	// (0x00037e9c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5646,	// (0x00037e9c) grid_vkb_keypad_bottom_right_pane

0x565b,	// (0x00037eb1) fep_vkb_top_text_pane_g1

0x7343,	// (0x00039b99) fep_vkb_top_text_pane_t1

0x7358,	// (0x00039bae) cell_vkb_side_pane_ParamLimits

0x7358,	// (0x00039bae) cell_vkb_side_pane

0x5328,	// (0x00037b7e) cell_vkb_side_pane_g1

0x5683,	// (0x00037ed9) cell_vkb_keypad_pane_ParamLimits

0x5683,	// (0x00037ed9) cell_vkb_keypad_pane

0x56f0,	// (0x00037f46) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x000423aa) bg_popup_fep_shadow_pane_g

0xcf16,	// (0x0003f76c) cell_hwr_side_pane_g1

0xcf16,	// (0x0003f76c) cell_hwr_side_pane_g2

0x56fa,	// (0x00037f50) cell_vkb_keypad_pane_t1

0x737b,	// (0x00039bd1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x737b,	// (0x00039bd1) cell_vkb_keypad_bottom_left_pane

0x7398,	// (0x00039bee) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x7398,	// (0x00039bee) cell_vkb_keypad_bottom_right_pane

0x5328,	// (0x00037b7e) cell_vkb_keypad_bottom_left_pane_g1

0x5328,	// (0x00037b7e) cell_vkb_keypad_bottom_right_pane_g1

0x5708,	// (0x00037f5e) cell_vkb_keypad_number_pane_ParamLimits

0x5708,	// (0x00037f5e) cell_vkb_keypad_number_pane

0x5727,	// (0x00037f7d) cell_vkb_keypad_number_pane_g1

0x5731,	// (0x00037f87) cell_vkb_keypad_number_pane_g2

0x573a,	// (0x00037f90) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x0004239c) cell_vkb_keypad_number_pane_g

0x56fa,	// (0x00037f50) cell_vkb_keypad_number_pane_t1

0x575c,	// (0x00037fb2) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x000423bd) cell_hwr_side_pane_g

0x5775,	// (0x00037fcb) cell_hwr_side_pane_t1

0xcf20,	// (0x0003f776) cell_hwr_side_pane_t1_copy1

0xcf2e,	// (0x0003f784) cell_hwr_candidate_pane_g1

0xcf5d,	// (0x0003f7b3) cell_hwr_candidate_pane_t1

0x5328,	// (0x00037b7e) cell_vkb_candidate_pane_g2

0x57fb,	// (0x00038051) cell_vkb_candidate_pane_t1

0xccdb,	// (0x0003f531) bg_popup_fep_shadow_pane_ParamLimits

0xccdb,	// (0x0003f531) bg_popup_fep_shadow_pane

0xcd8a,	// (0x0003f5e0) bg_fep_hwr_top_pane_g4

0x53a5,	// (0x00037bfb) bg_hwr_side_pane_g1_ParamLimits

0x53a5,	// (0x00037bfb) bg_hwr_side_pane_g1

0xcdfb,	// (0x0003f651) cell_hwr_side_pane_ParamLimits

0xcdfb,	// (0x0003f651) cell_hwr_side_pane

0xce36,	// (0x0003f68c) fep_hwr_write_pane_g1_ParamLimits

0xce36,	// (0x0003f68c) fep_hwr_write_pane_g1

0xce43,	// (0x0003f699) fep_hwr_write_pane_g2_ParamLimits

0xce43,	// (0x0003f699) fep_hwr_write_pane_g2

0xce50,	// (0x0003f6a6) fep_hwr_write_pane_g3_ParamLimits

0xce50,	// (0x0003f6a6) fep_hwr_write_pane_g3

0xce5e,	// (0x0003f6b4) fep_hwr_write_pane_g4_ParamLimits

0xce5e,	// (0x0003f6b4) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x00042369) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x00042369) fep_hwr_write_pane_g

0xcd8a,	// (0x0003f5e0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcd8a,	// (0x0003f5e0) bg_fep_hwr_candidate_pane_g2

0xce73,	// (0x0003f6c9) cell_hwr_candidate_pane_ParamLimits

0xce73,	// (0x0003f6c9) cell_hwr_candidate_pane

0xcead,	// (0x0003f703) fep_hwr_candidate_pane_g1_ParamLimits

0x5405,	// (0x00037c5b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5405,	// (0x00037c5b) bg_popup_fep_shadow_pane_cp2

0x5554,	// (0x00037daa) fep_vkb_top_pane_g4_ParamLimits

0x5554,	// (0x00037daa) fep_vkb_top_pane_g4

0x5573,	// (0x00037dc9) fep_vkb_side_pane_g2_ParamLimits

0x5573,	// (0x00037dc9) fep_vkb_side_pane_g2

0xeaa4,	// (0x000412fa) list_setting_pane_t4_ParamLimits

0xeaa4,	// (0x000412fa) list_setting_pane_t4

0xeb3a,	// (0x00041390) list_setting_number_pane_t5_ParamLimits

0xeb3a,	// (0x00041390) list_setting_number_pane_t5

0x5ecc,	// (0x00038722) list_double_heading_pane_cp2_ParamLimits

0x5ecc,	// (0x00038722) list_double_heading_pane_cp2

0x3088,	// (0x000358de) list_double_heading_pane_g1_cp2_ParamLimits

0x3088,	// (0x000358de) list_double_heading_pane_g1_cp2

0x5809,	// (0x0003805f) list_double_heading_pane_g2_cp2_ParamLimits

0x5809,	// (0x0003805f) list_double_heading_pane_g2_cp2

0x581d,	// (0x00038073) list_double_heading_pane_t1_cp2_ParamLimits

0x581d,	// (0x00038073) list_double_heading_pane_t1_cp2

0x5833,	// (0x00038089) list_double_heading_pane_t2_cp2_ParamLimits

0x5833,	// (0x00038089) list_double_heading_pane_t2_cp2

0xf46a,	// (0x00041cc0) aid_value_unit2

0xbca8,	// (0x0003e4fe) popup_preview_fixed_window

0x029c,	// (0x00032af2) bg_popup_preview_window_pane_cp02

0x5845,	// (0x0003809b) list_preview_fixed_pane

0x588b,	// (0x000380e1) list_empty_pane_fp_ParamLimits

0x588b,	// (0x000380e1) list_empty_pane_fp

0x588b,	// (0x000380e1) list_single_cale_day_pane_fp_ParamLimits

0x588b,	// (0x000380e1) list_single_cale_day_pane_fp

0x588b,	// (0x000380e1) list_single_graphic_heading_pane_fp_ParamLimits

0x588b,	// (0x000380e1) list_single_graphic_heading_pane_fp

0x588b,	// (0x000380e1) list_single_graphic_pane_fp_ParamLimits

0x588b,	// (0x000380e1) list_single_graphic_pane_fp

0x588b,	// (0x000380e1) list_single_heading_pane_fp_ParamLimits

0x588b,	// (0x000380e1) list_single_heading_pane_fp

0x588b,	// (0x000380e1) list_single_pane_fp_ParamLimits

0x588b,	// (0x000380e1) list_single_pane_fp

0x589f,	// (0x000380f5) list_single_pane_fp_g1_ParamLimits

0x589f,	// (0x000380f5) list_single_pane_fp_g1

0x070e,	// (0x00032f64) list_single_pane_fp_g2_ParamLimits

0x070e,	// (0x00032f64) list_single_pane_fp_g2

0x1d01,	// (0x00034557) list_single_pane_fp_g3_ParamLimits

0x1d01,	// (0x00034557) list_single_pane_fp_g3

0x58ab,	// (0x00038101) list_single_pane_fp_g4_ParamLimits

0x58ab,	// (0x00038101) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x000423d0) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x000423d0) list_single_pane_fp_g

0xf207,	// (0x00041a5d) list_single_pane_fp_t1_ParamLimits

0xf207,	// (0x00041a5d) list_single_pane_fp_t1

0xf21e,	// (0x00041a74) list_single_graphic_pane_fp_g1_ParamLimits

0xf21e,	// (0x00041a74) list_single_graphic_pane_fp_g1

0x589f,	// (0x000380f5) list_single_graphic_pane_fp_g2_ParamLimits

0x589f,	// (0x000380f5) list_single_graphic_pane_fp_g2

0x070e,	// (0x00032f64) list_single_graphic_pane_fp_g3_ParamLimits

0x070e,	// (0x00032f64) list_single_graphic_pane_fp_g3

0x1d01,	// (0x00034557) list_single_graphic_pane_fp_g4_ParamLimits

0x1d01,	// (0x00034557) list_single_graphic_pane_fp_g4

0x58ab,	// (0x00038101) list_single_graphic_pane_fp_g5_ParamLimits

0x58ab,	// (0x00038101) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x000423d9) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x000423d9) list_single_graphic_pane_fp_g

0xf22a,	// (0x00041a80) list_single_graphic_pane_fp_t1_ParamLimits

0xf22a,	// (0x00041a80) list_single_graphic_pane_fp_t1

0xf21e,	// (0x00041a74) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf21e,	// (0x00041a74) list_single_graphic_heading_pane_fp_g1

0x589f,	// (0x000380f5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x589f,	// (0x000380f5) list_single_graphic_heading_pane_fp_g2

0x070e,	// (0x00032f64) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x070e,	// (0x00032f64) list_single_graphic_heading_pane_fp_g3

0x1d01,	// (0x00034557) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1d01,	// (0x00034557) list_single_graphic_heading_pane_fp_g4

0x58ab,	// (0x00038101) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x58ab,	// (0x00038101) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x000423d9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x000423d9) list_single_graphic_heading_pane_fp_g

0xf240,	// (0x00041a96) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf240,	// (0x00041a96) list_single_graphic_heading_pane_fp_t1

0xf256,	// (0x00041aac) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf256,	// (0x00041aac) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x000423e4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x000423e4) list_single_graphic_heading_pane_fp_t

0xf268,	// (0x00041abe) list_single_cale_day_pane_fp_g1_ParamLimits

0xf268,	// (0x00041abe) list_single_cale_day_pane_fp_g1

0x58b7,	// (0x0003810d) list_single_cale_day_pane_fp_g2_ParamLimits

0x58b7,	// (0x0003810d) list_single_cale_day_pane_fp_g2

0x1d15,	// (0x0003456b) list_single_cale_day_pane_fp_g3_ParamLimits

0x1d15,	// (0x0003456b) list_single_cale_day_pane_fp_g3

0x1d3d,	// (0x00034593) list_single_cale_day_pane_fp_g4_ParamLimits

0x1d3d,	// (0x00034593) list_single_cale_day_pane_fp_g4

0x1d61,	// (0x000345b7) list_single_cale_day_pane_fp_g5_ParamLimits

0x1d61,	// (0x000345b7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x000423e9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x000423e9) list_single_cale_day_pane_fp_g

0xf2a0,	// (0x00041af6) list_single_cale_day_pane_fp_t1_ParamLimits

0xf2a0,	// (0x00041af6) list_single_cale_day_pane_fp_t1

0xf2c6,	// (0x00041b1c) list_single_cale_day_pane_fp_t2_ParamLimits

0xf2c6,	// (0x00041b1c) list_single_cale_day_pane_fp_t2

0xf2df,	// (0x00041b35) list_single_cale_day_pane_fp_t3_ParamLimits

0xf2df,	// (0x00041b35) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x000423f4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x000423f4) list_single_cale_day_pane_fp_t

0x589f,	// (0x000380f5) list_empty_pane_fp_g1_ParamLimits

0x589f,	// (0x000380f5) list_empty_pane_fp_g1

0xf2f8,	// (0x00041b4e) list_empty_pane_fp_t1

0xf306,	// (0x00041b5c) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x000423fb) list_empty_pane_fp_t

0x589f,	// (0x000380f5) list_single_heading_pane_fp_g1_ParamLimits

0x589f,	// (0x000380f5) list_single_heading_pane_fp_g1

0x070e,	// (0x00032f64) list_single_heading_pane_fp_g2_ParamLimits

0x070e,	// (0x00032f64) list_single_heading_pane_fp_g2

0x1d01,	// (0x00034557) list_single_heading_pane_fp_g3_ParamLimits

0x1d01,	// (0x00034557) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x00042400) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x00042400) list_single_heading_pane_fp_g

0xf314,	// (0x00041b6a) list_single_heading_pane_fp_t1_ParamLimits

0xf314,	// (0x00041b6a) list_single_heading_pane_fp_t1

0xf326,	// (0x00041b7c) list_single_heading_pane_fp_t2_ParamLimits

0xf326,	// (0x00041b7c) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x00042407) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x00042407) list_single_heading_pane_fp_t

0x093c,	// (0x00033192) aid_size_cell_fast

0x0271,	// (0x00032ac7) soft_indicator_pane_cp1_t1

0x0979,	// (0x000331cf) cell_app_pane_cp2_ParamLimits

0x0979,	// (0x000331cf) cell_app_pane_cp2

0xccfd,	// (0x0003f553) fep_hwr_candidate_drop_down_list_pane

0xcec7,	// (0x0003f71d) fep_hwr_candidate_pane_g3_ParamLimits

0xcec7,	// (0x0003f71d) fep_hwr_candidate_pane_g3

0x9e71,	// (0x0003c6c7) fep_hwr_candidate_pane_g4_ParamLimits

0x9e71,	// (0x0003c6c7) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x00042376) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x00042376) fep_hwr_candidate_pane_g

0x546d,	// (0x00037cc3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x546d,	// (0x00037cc3) fep_vkb_candidate_drop_down_list_pane

0x5764,	// (0x00037fba) fep_vkb_candidate_pane_g3

0x576c,	// (0x00037fc2) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000423a3) fep_vkb_candidate_pane_g

0xcf2e,	// (0x0003f784) cell_hwr_candidate_pane_g1_ParamLimits

0xcf3c,	// (0x0003f792) cell_hwr_candidate_pane_g3_ParamLimits

0xcf3c,	// (0x0003f792) cell_hwr_candidate_pane_g3

0xa0b4,	// (0x0003c90a) cell_hwr_candidate_pane_g4_ParamLimits

0xa0b4,	// (0x0003c90a) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x000423c2) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x000423c2) cell_hwr_candidate_pane_g

0x57c5,	// (0x0003801b) cell_vkb_candidate_pane_g3_ParamLimits

0x57c5,	// (0x0003801b) cell_vkb_candidate_pane_g3

0x57e0,	// (0x00038036) cell_vkb_candidate_pane_g4_ParamLimits

0x57e0,	// (0x00038036) cell_vkb_candidate_pane_g4

0x58c3,	// (0x00038119) cell_app_pane_cp2_g1_ParamLimits

0x58c3,	// (0x00038119) cell_app_pane_cp2_g1

0x58e1,	// (0x00038137) cell_app_pane_cp2_g2_ParamLimits

0x58e1,	// (0x00038137) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x0004240c) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x0004240c) cell_app_pane_cp2_g

0x58ed,	// (0x00038143) cell_app_pane_cp2_t1_ParamLimits

0x58ed,	// (0x00038143) cell_app_pane_cp2_t1

0x07c2,	// (0x00033018) grid_highlight_pane_cp1_ParamLimits

0x07c2,	// (0x00033018) grid_highlight_pane_cp1

0xcf7a,	// (0x0003f7d0) cell_hwr_candidate_pane_cp1_ParamLimits

0xcf7a,	// (0x0003f7d0) cell_hwr_candidate_pane_cp1

0xcf2e,	// (0x0003f784) fep_hwr_candidate_drop_down_list_pane_g1

0xcf98,	// (0x0003f7ee) fep_hwr_candidate_drop_down_list_pane_g2

0xcfa5,	// (0x0003f7fb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x00042411) fep_hwr_candidate_drop_down_list_pane_g

0xcfb2,	// (0x0003f808) fep_hwr_candidate_drop_down_list_scroll_pane

0xcfbb,	// (0x0003f811) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xcfbb,	// (0x0003f811) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xcfc8,	// (0x0003f81e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xcfc8,	// (0x0003f81e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xcfd5,	// (0x0003f82b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xcfd5,	// (0x0003f82b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xcfe2,	// (0x0003f838) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xcfe2,	// (0x0003f838) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xcffd,	// (0x0003f853) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xcffd,	// (0x0003f853) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xd018,	// (0x0003f86e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd018,	// (0x0003f86e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xd033,	// (0x0003f889) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd033,	// (0x0003f889) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xd04e,	// (0x0003f8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd04e,	// (0x0003f8a4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x00042418) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x00042418) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x73d1,	// (0x00039c27) cell_vkb_candidate_pane_cp1_ParamLimits

0x73d1,	// (0x00039c27) cell_vkb_candidate_pane_cp1

0x5554,	// (0x00037daa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5554,	// (0x00037daa) fep_vkb_candidate_drop_down_list_pane_g1

0x58ff,	// (0x00038155) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x58ff,	// (0x00038155) fep_vkb_candidate_drop_down_list_pane_g2

0x590c,	// (0x00038162) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x590c,	// (0x00038162) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x00042429) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x00042429) fep_vkb_candidate_drop_down_list_pane_g

0x5919,	// (0x0003816f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5919,	// (0x0003816f) fep_vkb_candidate_drop_down_list_scroll_pane

0x5926,	// (0x0003817c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5926,	// (0x0003817c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5933,	// (0x00038189) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5933,	// (0x00038189) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x593f,	// (0x00038195) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x593f,	// (0x00038195) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5783,	// (0x00037fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5783,	// (0x00037fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x57a4,	// (0x00037ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x57a4,	// (0x00037ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x594b,	// (0x000381a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x594b,	// (0x000381a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x596c,	// (0x000381c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x596c,	// (0x000381c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x598d,	// (0x000381e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x598d,	// (0x000381e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x00042430) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x00042430) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5ae4,	// (0x0003833a) title_pane_g1_ParamLimits

0x5af1,	// (0x00038347) title_pane_g2_ParamLimits

0xf54e,	// (0x00041da4) title_pane_g_ParamLimits

0x2d79,	// (0x000355cf) aid_call2_pane

0x2d71,	// (0x000355c7) aid_call_pane

0x2d81,	// (0x000355d7) popup_clock_analogue_window_g1

0x2d81,	// (0x000355d7) popup_clock_analogue_window_g2

0xbf82,	// (0x0003e7d8) popup_clock_analogue_window_g3

0xbf8b,	// (0x0003e7e1) popup_clock_analogue_window_g4

0xf47c,	// (0x00041cd2) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00041f53) popup_clock_analogue_window_g

0xbf93,	// (0x0003e7e9) popup_clock_analogue_window_t1

0xbfa1,	// (0x0003e7f7) clock_digital_number_pane_ParamLimits

0xbfa1,	// (0x0003e7f7) clock_digital_number_pane

0xbfad,	// (0x0003e803) clock_digital_number_pane_cp02_ParamLimits

0xbfad,	// (0x0003e803) clock_digital_number_pane_cp02

0xbfb9,	// (0x0003e80f) clock_digital_number_pane_cp03_ParamLimits

0xbfb9,	// (0x0003e80f) clock_digital_number_pane_cp03

0xbfc5,	// (0x0003e81b) clock_digital_number_pane_cp04_ParamLimits

0xbfc5,	// (0x0003e81b) clock_digital_number_pane_cp04

0xbfd1,	// (0x0003e827) clock_digital_separator_pane_ParamLimits

0xbfd1,	// (0x0003e827) clock_digital_separator_pane

0xbfdd,	// (0x0003e833) popup_clock_digital_window_t1_ParamLimits

0xbfdd,	// (0x0003e833) popup_clock_digital_window_t1

0xf47c,	// (0x00041cd2) clock_digital_number_pane_g1

0xf47c,	// (0x00041cd2) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00041f5e) clock_digital_number_pane_g

0xf47c,	// (0x00041cd2) clock_digital_separator_pane_g1

0xf47c,	// (0x00041cd2) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00041f5e) clock_digital_separator_pane_g

0x612e,	// (0x00038984) aid_fill_nsta_ParamLimits

0x61e7,	// (0x00038a3d) indicator_nsta_pane_ParamLimits

0x349e,	// (0x00035cf4) popup_clock_analogue_window

0x349e,	// (0x00035cf4) popup_clock_digital_window

0x00c9,	// (0x0003291f) grid_indicator_nsta_pane_ParamLimits

0x4f20,	// (0x00037776) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x000422f6) clock_nsta_pane_t

0xbf46,	// (0x0003e79c) aid_size_max_handle

0xbf50,	// (0x0003e7a6) aid_size_min_handle

0x3213,	// (0x00035a69) editor_scroll_pane

0x59a8,	// (0x000381fe) ex_editor_pane

0x0905,	// (0x0003315b) scroll_pane_cp13

0x06b3,	// (0x00032f09) scroll_pane_cp14

0x2db0,	// (0x00035606) scroll_pane_cp36

0x5edc,	// (0x00038732) list_single_graphic_hl_pane_cp2_ParamLimits

0x5edc,	// (0x00038732) list_single_graphic_hl_pane_cp2

0xef94,	// (0x000417ea) list_single_graphic_hl_pane_ParamLimits

0xef94,	// (0x000417ea) list_single_graphic_hl_pane

0xf33c,	// (0x00041b92) aid_size_min_hl_cp1

0x59b0,	// (0x00038206) list_highlight_pane_cp34_ParamLimits

0x59b0,	// (0x00038206) list_highlight_pane_cp34

0x59c1,	// (0x00038217) list_single_graphic_hl_pane_g1_ParamLimits

0x59c1,	// (0x00038217) list_single_graphic_hl_pane_g1

0xf345,	// (0x00041b9b) list_single_graphic_hl_pane_g2_ParamLimits

0xf345,	// (0x00041b9b) list_single_graphic_hl_pane_g2

0xf345,	// (0x00041b9b) list_single_graphic_hl_pane_g3_ParamLimits

0xf345,	// (0x00041b9b) list_single_graphic_hl_pane_g3

0x070e,	// (0x00032f64) list_single_graphic_hl_pane_g4_ParamLimits

0x070e,	// (0x00032f64) list_single_graphic_hl_pane_g4

0x1d01,	// (0x00034557) list_single_graphic_hl_pane_g5_ParamLimits

0x1d01,	// (0x00034557) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00042441) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00042441) list_single_graphic_hl_pane_g

0xe8c1,	// (0x00041117) list_single_graphic_hl_pane_t1_ParamLimits

0xe8c1,	// (0x00041117) list_single_graphic_hl_pane_t1

0x59ce,	// (0x00038224) aid_size_min_hl_cp2

0x59d7,	// (0x0003822d) list_highlight_pane_cp34_cp2_ParamLimits

0x59d7,	// (0x0003822d) list_highlight_pane_cp34_cp2

0x59c1,	// (0x00038217) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x59c1,	// (0x00038217) list_single_graphic_hl_pane_g1_cp2

0x59e4,	// (0x0003823a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x59e4,	// (0x0003823a) list_single_graphic_hl_pane_g2_cp2

0x59f0,	// (0x00038246) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x59f0,	// (0x00038246) list_single_graphic_hl_pane_g3_cp2

0x3088,	// (0x000358de) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3088,	// (0x000358de) list_single_graphic_hl_pane_g4_cp2

0x5809,	// (0x0003805f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5809,	// (0x0003805f) list_single_graphic_hl_pane_g5_cp2

0xc268,	// (0x0003eabe) control_pane_g4_ParamLimits

0xc268,	// (0x0003eabe) control_pane_g4

0x10b2,	// (0x00033908) bg_popup_sub_pane_cp10_ParamLimits

0x5332,	// (0x00037b88) list_choice_list_pane_ParamLimits

0x5341,	// (0x00037b97) scroll_pane_cp23

0x029c,	// (0x00032af2) bg_popup_preview_window_pane_cp02_ParamLimits

0x5845,	// (0x0003809b) list_preview_fixed_pane_ParamLimits

0x585b,	// (0x000380b1) list_preview_fixed_pane_cp_ParamLimits

0x585b,	// (0x000380b1) list_preview_fixed_pane_cp

0x5867,	// (0x000380bd) popup_preview_fixed_window_g1_ParamLimits

0x5867,	// (0x000380bd) popup_preview_fixed_window_g1

0x5873,	// (0x000380c9) popup_preview_fixed_window_g2_ParamLimits

0x5873,	// (0x000380c9) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x000423c9) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x000423c9) popup_preview_fixed_window_g

0xbed6,	// (0x0003e72c) aid_navi_side_left_pane_ParamLimits

0xbee6,	// (0x0003e73c) aid_navi_side_right_pane_ParamLimits

0xbef5,	// (0x0003e74b) navi_icon_pane_stacon_ParamLimits

0xbf05,	// (0x0003e75b) navi_navi_pane_stacon_ParamLimits

0xbef5,	// (0x0003e74b) navi_text_pane_stacon_ParamLimits

0xbb89,	// (0x0003e3df) main_text_info_pane

0x5a12,	// (0x00038268) listscroll_text_info_pane

0x5a1a,	// (0x00038270) list_text_info_pane_ParamLimits

0x5a1a,	// (0x00038270) list_text_info_pane

0x5a29,	// (0x0003827f) scroll_pane_cp24_ParamLimits

0x5a29,	// (0x0003827f) scroll_pane_cp24

0x73f4,	// (0x00039c4a) list_text_info_pane_t1_ParamLimits

0x73f4,	// (0x00039c4a) list_text_info_pane_t1

0xc3c6,	// (0x0003ec1c) popup_fast_swap2_window_ParamLimits

0xc3c6,	// (0x0003ec1c) popup_fast_swap2_window

0x5a47,	// (0x0003829d) aid_size_cell_fast2

0xf472,	// (0x00041cc8) bg_popup_window_pane_cp17

0x3955,	// (0x000361ab) heading_pane_cp2

0x04b2,	// (0x00032d08) listscroll_fast2_pane

0x65a2,	// (0x00038df8) grid_fast2_pane

0x65aa,	// (0x00038e00) listscroll_fast2_pane_g1

0x65b2,	// (0x00038e08) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0004244c) listscroll_fast2_pane_g

0x0905,	// (0x0003315b) scroll_pane_cp26

0x65ba,	// (0x00038e10) cell_fast2_pane_ParamLimits

0x65ba,	// (0x00038e10) cell_fast2_pane

0x65d0,	// (0x00038e26) cell_fast2_pane_g1

0x65d9,	// (0x00038e2f) cell_fast2_pane_g2

0x65e2,	// (0x00038e38) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00042451) cell_fast2_pane_g

0x0514,	// (0x00032d6a) grid_highlight_pane_cp9

0xc392,	// (0x0003ebe8) main_eswt_pane_ParamLimits

0xc392,	// (0x0003ebe8) main_eswt_pane

0x5a3e,	// (0x00038294) list_single_text_info_pane

0x65ea,	// (0x00038e40) eswt_ctrl_button_pane

0x65ea,	// (0x00038e40) eswt_ctrl_canvas_pane

0x65f2,	// (0x00038e48) eswt_ctrl_combo_pane

0x65ea,	// (0x00038e40) eswt_ctrl_default_pane

0x65ea,	// (0x00038e40) eswt_ctrl_label_pane

0x65fa,	// (0x00038e50) eswt_ctrl_wait_pane

0x6602,	// (0x00038e58) eswt_shell_pane

0xf472,	// (0x00041cc8) listscroll_eswt_app_pane

0x661e,	// (0x00038e74) popup_eswt_tasktip_window_ParamLimits

0x661e,	// (0x00038e74) popup_eswt_tasktip_window

0x362b,	// (0x00035e81) bg_popup_window_pane_cp18

0x662f,	// (0x00038e85) eswt_control_pane_g1_ParamLimits

0x662f,	// (0x00038e85) eswt_control_pane_g1

0x663c,	// (0x00038e92) eswt_control_pane_g2_ParamLimits

0x663c,	// (0x00038e92) eswt_control_pane_g2

0x6649,	// (0x00038e9f) eswt_control_pane_g3_ParamLimits

0x6649,	// (0x00038e9f) eswt_control_pane_g3

0x6656,	// (0x00038eac) eswt_control_pane_g4_ParamLimits

0x6656,	// (0x00038eac) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00042458) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00042458) eswt_control_pane_g

0x07c2,	// (0x00033018) bg_button_pane_ParamLimits

0x07c2,	// (0x00033018) bg_button_pane

0x0529,	// (0x00032d7f) common_borders_pane_copy2_ParamLimits

0x0529,	// (0x00032d7f) common_borders_pane_copy2

0x6663,	// (0x00038eb9) control_button_pane_g1_ParamLimits

0x6663,	// (0x00038eb9) control_button_pane_g1

0x666f,	// (0x00038ec5) control_button_pane_g2_ParamLimits

0x666f,	// (0x00038ec5) control_button_pane_g2

0x667b,	// (0x00038ed1) control_button_pane_g3_ParamLimits

0x667b,	// (0x00038ed1) control_button_pane_g3

0x0002,

0xfc0b,	// (0x00042461) control_button_pane_g_ParamLimits

0xfc0b,	// (0x00042461) control_button_pane_g

0x668f,	// (0x00038ee5) control_button_pane_t1

0x669d,	// (0x00038ef3) control_button_pane_t2

0x0001,

0xfc12,	// (0x00042468) control_button_pane_t

0x35ab,	// (0x00035e01) bg_button_pane_g1

0x35b3,	// (0x00035e09) bg_button_pane_g2

0x35bb,	// (0x00035e11) bg_button_pane_g3

0x35c3,	// (0x00035e19) bg_button_pane_g4

0x35cb,	// (0x00035e21) bg_button_pane_g5

0x35d3,	// (0x00035e29) bg_button_pane_g6

0x35db,	// (0x00035e31) bg_button_pane_g7

0x35e3,	// (0x00035e39) bg_button_pane_g8

0x35eb,	// (0x00035e41) bg_button_pane_g9

0x0008,

0xf866,	// (0x000420bc) bg_button_pane_g

0x52ed,	// (0x00037b43) common_borders_pane_ParamLimits

0x52ed,	// (0x00037b43) common_borders_pane

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy1_ParamLimits

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy1

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy1_ParamLimits

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy1

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy1_ParamLimits

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy1

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy1_ParamLimits

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy1

0x5328,	// (0x00037b7e) bg_eswt_ctrl_canvas_pane_g1

0x52ed,	// (0x00037b43) common_borders_pane_cp2_ParamLimits

0x52ed,	// (0x00037b43) common_borders_pane_cp2

0x52ed,	// (0x00037b43) common_borders_pane_cp3_ParamLimits

0x52ed,	// (0x00037b43) common_borders_pane_cp3

0x66ab,	// (0x00038f01) separator_horizontal_pane

0x2c10,	// (0x00035466) separator_vertical_pane

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy2_ParamLimits

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy2

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy2_ParamLimits

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy2

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy2_ParamLimits

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy2

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy2_ParamLimits

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy2

0xf472,	// (0x00041cc8) common_borders_pane_cp4

0x66b3,	// (0x00038f09) separator_horizontal_pane_g1

0x66bc,	// (0x00038f12) separator_horizontal_pane_g2

0x66c5,	// (0x00038f1b) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0004246d) separator_horizontal_pane_g

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy3_ParamLimits

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy3

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy3_ParamLimits

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy3

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy3_ParamLimits

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy3

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy3_ParamLimits

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy3

0xf472,	// (0x00041cc8) common_borders_pane_cp5

0x66ce,	// (0x00038f24) separator_vertical_pane_g1

0x66d7,	// (0x00038f2d) separator_vertical_pane_g2

0x66e0,	// (0x00038f36) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x00042474) separator_vertical_pane_g

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy4_ParamLimits

0x662f,	// (0x00038e85) eswt_control_pane_g1_copy4

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy4_ParamLimits

0x663c,	// (0x00038e92) eswt_control_pane_g2_copy4

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy4_ParamLimits

0x6649,	// (0x00038e9f) eswt_control_pane_g3_copy4

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy4_ParamLimits

0x6656,	// (0x00038eac) eswt_control_pane_g4_copy4

0x7411,	// (0x00039c67) eswt_ctrl_combo_button_pane

0x7419,	// (0x00039c6f) eswt_ctrl_input_pane

0x7421,	// (0x00039c77) popup_choice_list_window_cp70

0x7429,	// (0x00039c7f) eswt_ctrl_input_pane_t1

0xf472,	// (0x00041cc8) input_focus_pane_cp70

0x52ed,	// (0x00037b43) bg_button_pane_cp70_ParamLimits

0x52ed,	// (0x00037b43) bg_button_pane_cp70

0x7437,	// (0x00039c8d) eswt_ctrl_combo_button_pane_g1

0x66e9,	// (0x00038f3f) wait_bar_pane_cp70

0x362b,	// (0x00035e81) bg_popup_window_pane_cp70_ParamLimits

0x362b,	// (0x00035e81) bg_popup_window_pane_cp70

0x66f1,	// (0x00038f47) popup_eswt_tasktip_window_t1

0x6707,	// (0x00038f5d) wait_bar_pane_cp71_ParamLimits

0x6707,	// (0x00038f5d) wait_bar_pane_cp71

0x6713,	// (0x00038f69) grid_eswt_app_pane

0x2c19,	// (0x0003546f) scroll_pane_cp70

0x743f,	// (0x00039c95) cell_eswt_app_pane_ParamLimits

0x743f,	// (0x00039c95) cell_eswt_app_pane

0x7467,	// (0x00039cbd) cell_eswt_app_pane_g1_ParamLimits

0x7467,	// (0x00039cbd) cell_eswt_app_pane_g1

0x7496,	// (0x00039cec) cell_eswt_app_pane_g2_ParamLimits

0x7496,	// (0x00039cec) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0004247b) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0004247b) cell_eswt_app_pane_g

0x74bf,	// (0x00039d15) cell_eswt_app_pane_t1_ParamLimits

0x74bf,	// (0x00039d15) cell_eswt_app_pane_t1

0x671c,	// (0x00038f72) grid_highlight_pane_cp70_ParamLimits

0x671c,	// (0x00038f72) grid_highlight_pane_cp70

0x0732,	// (0x00032f88) set_content_pane_g1

0x3392,	// (0x00035be8) status_small_volume_pane

0xd069,	// (0x0003f8bf) status_small_volume_pane_g1

0xd071,	// (0x0003f8c7) volume_small2_pane

0xd07a,	// (0x0003f8d0) volume_small2_pane_g1

0xd083,	// (0x0003f8d9) volume_small2_pane_g2

0xd08c,	// (0x0003f8e2) volume_small2_pane_g3

0xd095,	// (0x0003f8eb) volume_small2_pane_g4

0xd09e,	// (0x0003f8f4) volume_small2_pane_g5

0xd0a7,	// (0x0003f8fd) volume_small2_pane_g6

0xd0b0,	// (0x0003f906) volume_small2_pane_g7

0xd0b9,	// (0x0003f90f) volume_small2_pane_g8

0xd0c2,	// (0x0003f918) volume_small2_pane_g9

0xd0cb,	// (0x0003f921) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x00042480) volume_small2_pane_g

0x565b,	// (0x00037eb1) fep_vkb_top_text_pane_g1_ParamLimits

0x7343,	// (0x00039b99) fep_vkb_top_text_pane_t1_ParamLimits

0x587f,	// (0x000380d5) popup_preview_fixed_window_g3_ParamLimits

0x587f,	// (0x000380d5) popup_preview_fixed_window_g3

0xc788,	// (0x0003efde) popup_toolbar_trans_pane

0x6efe,	// (0x00039754) aid_height_set_list_ParamLimits

0x46d9,	// (0x00036f2f) aid_size_parent_ParamLimits

0x10b2,	// (0x00033908) list_highlight_pane_cp2_ParamLimits

0x0732,	// (0x00032f88) set_content_pane_g1_ParamLimits

0x7049,	// (0x0003989f) list_single_image_pane_ParamLimits

0x7049,	// (0x0003989f) list_single_image_pane

0x74f1,	// (0x00039d47) aid_size_cell_image_ParamLimits

0x74f1,	// (0x00039d47) aid_size_cell_image

0x74fe,	// (0x00039d54) grid_single_image_pane_ParamLimits

0x74fe,	// (0x00039d54) grid_single_image_pane

0x0732,	// (0x00032f88) list_single_image_pane_g1_ParamLimits

0x0732,	// (0x00032f88) list_single_image_pane_g1

0x07dc,	// (0x00033032) list_single_image_pane_g2_ParamLimits

0x07dc,	// (0x00033032) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x00042495) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x00042495) list_single_image_pane_g

0x5a51,	// (0x000382a7) list_single_image_pane_t1_ParamLimits

0x5a51,	// (0x000382a7) list_single_image_pane_t1

0x750a,	// (0x00039d60) cell_image_list_pane_ParamLimits

0x750a,	// (0x00039d60) cell_image_list_pane

0x751d,	// (0x00039d73) cell_image_list_pane_g1

0x7526,	// (0x00039d7c) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0004249a) cell_image_list_pane_g

0x6728,	// (0x00038f7e) aid_size_cell_tb_trans_pane

0x07c2,	// (0x00033018) bg_tb_trans_pane

0x673a,	// (0x00038f90) grid_tb_trans_pane

0x35ab,	// (0x00035e01) bg_tb_trans_pane_g1

0x35b3,	// (0x00035e09) bg_tb_trans_pane_g2

0x35bb,	// (0x00035e11) bg_tb_trans_pane_g3

0x35c3,	// (0x00035e19) bg_tb_trans_pane_g4

0x35cb,	// (0x00035e21) bg_tb_trans_pane_g5

0x35e3,	// (0x00035e39) bg_tb_trans_pane_g6

0x35eb,	// (0x00035e41) bg_tb_trans_pane_g7

0x35d3,	// (0x00035e29) bg_tb_trans_pane_g8

0x35db,	// (0x00035e31) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0004249f) bg_tb_trans_pane_g

0x674e,	// (0x00038fa4) cell_toolbar_trans_pane_ParamLimits

0x674e,	// (0x00038fa4) cell_toolbar_trans_pane

0x5328,	// (0x00037b7e) cell_toolbar_trans_pane_g1

0x728e,	// (0x00039ae4) list_form2_midp_pane_t1

0x729c,	// (0x00039af2) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0004233c) list_form2_midp_pane_t

0x4ffc,	// (0x00037852) scroll_pane_cp51_ParamLimits

0x5172,	// (0x000379c8) form2_midp_wait_pane_g1

0x517b,	// (0x000379d1) form2_midp_wait_pane_g2

0x5184,	// (0x000379da) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00042351) form2_midp_wait_pane_g

0x00c9,	// (0x0003291f) list_highlight_pane_cp21_ParamLimits

0x51c2,	// (0x00037a18) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x51d1,	// (0x00037a27) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xef55,	// (0x000417ab) list_single_2graphic_im_pane_ParamLimits

0xef55,	// (0x000417ab) list_single_2graphic_im_pane

0x752f,	// (0x00039d85) list_single_2graphic_im_pane_g1_ParamLimits

0x752f,	// (0x00039d85) list_single_2graphic_im_pane_g1

0x7540,	// (0x00039d96) list_single_2graphic_im_pane_g2_ParamLimits

0x7540,	// (0x00039d96) list_single_2graphic_im_pane_g2

0x754c,	// (0x00039da2) list_single_2graphic_im_pane_g3_ParamLimits

0x754c,	// (0x00039da2) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x000424b2) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x000424b2) list_single_2graphic_im_pane_g

0x7560,	// (0x00039db6) list_single_2graphic_im_pane_t1_ParamLimits

0x7560,	// (0x00039db6) list_single_2graphic_im_pane_t1

0x588b,	// (0x000380e1) list_single_graphic_2heading_pane_fp_ParamLimits

0x588b,	// (0x000380e1) list_single_graphic_2heading_pane_fp

0xf21e,	// (0x00041a74) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf21e,	// (0x00041a74) list_single_graphic_2heading_pane_fp_g1

0x589f,	// (0x000380f5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x589f,	// (0x000380f5) list_single_graphic_2heading_pane_fp_g2

0x070e,	// (0x00032f64) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x070e,	// (0x00032f64) list_single_graphic_2heading_pane_fp_g3

0x1d01,	// (0x00034557) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1d01,	// (0x00034557) list_single_graphic_2heading_pane_fp_g4

0x58ab,	// (0x00038101) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x58ab,	// (0x00038101) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x000423d9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x000423d9) list_single_graphic_2heading_pane_fp_g

0xf351,	// (0x00041ba7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf351,	// (0x00041ba7) list_single_graphic_2heading_pane_fp_t1

0xf256,	// (0x00041aac) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf256,	// (0x00041aac) list_single_graphic_2heading_pane_fp_t2

0xf367,	// (0x00041bbd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf367,	// (0x00041bbd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x000424bb) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x000424bb) list_single_graphic_2heading_pane_fp_t

0x53b1,	// (0x00037c07) fep_hwr_write_pane_g5_ParamLimits

0x53b1,	// (0x00037c07) fep_hwr_write_pane_g5

0x53bd,	// (0x00037c13) fep_hwr_write_pane_g6_ParamLimits

0x53bd,	// (0x00037c13) fep_hwr_write_pane_g6

0x6602,	// (0x00038e58) eswt_shell_pane_ParamLimits

0x362b,	// (0x00035e81) bg_popup_window_pane_cp18_ParamLimits

0x467d,	// (0x00036ed3) heading_pane_cp70

0x66f1,	// (0x00038f47) popup_eswt_tasktip_window_t1_ParamLimits

0x6164,	// (0x000389ba) aid_touch_tab_arrow_left

0x6170,	// (0x000389c6) aid_touch_tab_arrow_right

0x5b02,	// (0x00038358) title_pane_g3_ParamLimits

0x5b02,	// (0x00038358) title_pane_g3

0x0792,	// (0x00032fe8) set_value_pane_g1

0xc788,	// (0x0003efde) popup_toolbar_trans_pane_ParamLimits

0x6728,	// (0x00038f7e) aid_size_cell_tb_trans_pane_ParamLimits

0x07c2,	// (0x00033018) bg_tb_trans_pane_ParamLimits

0x673a,	// (0x00038f90) grid_tb_trans_pane_ParamLimits

0x029c,	// (0x00032af2) cont_note_pane_ParamLimits

0x029c,	// (0x00032af2) cont_note_pane

0x0529,	// (0x00032d7f) cont_snote2_single_text_pane_ParamLimits

0x0529,	// (0x00032d7f) cont_snote2_single_text_pane

0x0529,	// (0x00032d7f) cont_snote2_single_graphic_pane_ParamLimits

0x0529,	// (0x00032d7f) cont_snote2_single_graphic_pane

0x3b6b,	// (0x000363c1) cont_note_wait_pane_ParamLimits

0x3b6b,	// (0x000363c1) cont_note_wait_pane

0x3b6b,	// (0x000363c1) cont_note_image_pane_ParamLimits

0x3b6b,	// (0x000363c1) cont_note_image_pane

0x6780,	// (0x00038fd6) popup_note2_window_g1_ParamLimits

0x6780,	// (0x00038fd6) popup_note2_window_g1

0x67b1,	// (0x00039007) popup_note2_window_t1_ParamLimits

0x67b1,	// (0x00039007) popup_note2_window_t1

0x67f6,	// (0x0003904c) popup_note2_window_t2_ParamLimits

0x67f6,	// (0x0003904c) popup_note2_window_t2

0x683b,	// (0x00039091) popup_note2_window_t3_ParamLimits

0x683b,	// (0x00039091) popup_note2_window_t3

0x6880,	// (0x000390d6) popup_note2_window_t4_ParamLimits

0x6880,	// (0x000390d6) popup_note2_window_t4

0x0320,	// (0x00032b76) popup_note2_window_t5_ParamLimits

0x0320,	// (0x00032b76) popup_note2_window_t5

0x0004,

0xfc71,	// (0x000424c7) popup_note2_window_t_ParamLimits

0xfc71,	// (0x000424c7) popup_note2_window_t

0x68af,	// (0x00039105) popup_note2_image_window_g1_ParamLimits

0x68af,	// (0x00039105) popup_note2_image_window_g1

0x68bb,	// (0x00039111) popup_note2_image_window_g2_ParamLimits

0x68bb,	// (0x00039111) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x000424d2) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x000424d2) popup_note2_image_window_g

0x68cd,	// (0x00039123) popup_note2_image_window_t1_ParamLimits

0x68cd,	// (0x00039123) popup_note2_image_window_t1

0x68e5,	// (0x0003913b) popup_note2_image_window_t2_ParamLimits

0x68e5,	// (0x0003913b) popup_note2_image_window_t2

0x68fd,	// (0x00039153) popup_note2_image_window_t3_ParamLimits

0x68fd,	// (0x00039153) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x000424d7) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x000424d7) popup_note2_image_window_t

0x3b79,	// (0x000363cf) popup_note2_wait_window_g1_ParamLimits

0x3b79,	// (0x000363cf) popup_note2_wait_window_g1

0x3b85,	// (0x000363db) popup_note2_wait_window_g2_ParamLimits

0x3b85,	// (0x000363db) popup_note2_wait_window_g2

0x3b91,	// (0x000363e7) popup_note2_wait_window_g3_ParamLimits

0x3b91,	// (0x000363e7) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0004209e) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0004209e) popup_note2_wait_window_g

0x6919,	// (0x0003916f) popup_note2_wait_window_t1_ParamLimits

0x6919,	// (0x0003916f) popup_note2_wait_window_t1

0x6937,	// (0x0003918d) popup_note2_wait_window_t2_ParamLimits

0x6937,	// (0x0003918d) popup_note2_wait_window_t2

0x6955,	// (0x000391ab) popup_note2_wait_window_t3_ParamLimits

0x6955,	// (0x000391ab) popup_note2_wait_window_t3

0x6967,	// (0x000391bd) popup_note2_wait_window_t4_ParamLimits

0x6967,	// (0x000391bd) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x000424de) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x000424de) popup_note2_wait_window_t

0x6979,	// (0x000391cf) wait_bar2_pane_ParamLimits

0x6979,	// (0x000391cf) wait_bar2_pane

0x6991,	// (0x000391e7) popup_snote2_single_text_window_g1_ParamLimits

0x6991,	// (0x000391e7) popup_snote2_single_text_window_g1

0x69b9,	// (0x0003920f) popup_snote2_single_text_window_t1_ParamLimits

0x69b9,	// (0x0003920f) popup_snote2_single_text_window_t1

0x6a05,	// (0x0003925b) popup_snote2_single_text_window_t2_ParamLimits

0x6a05,	// (0x0003925b) popup_snote2_single_text_window_t2

0x6a51,	// (0x000392a7) popup_snote2_single_text_window_t3_ParamLimits

0x6a51,	// (0x000392a7) popup_snote2_single_text_window_t3

0x6a92,	// (0x000392e8) popup_snote2_single_text_window_t4_ParamLimits

0x6a92,	// (0x000392e8) popup_snote2_single_text_window_t4

0x6ac8,	// (0x0003931e) popup_snote2_single_text_window_t5_ParamLimits

0x6ac8,	// (0x0003931e) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x000424e7) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x000424e7) popup_snote2_single_text_window_t

0x6af3,	// (0x00039349) popup_snote2_single_graphic_window_g1_ParamLimits

0x6af3,	// (0x00039349) popup_snote2_single_graphic_window_g1

0x6b1b,	// (0x00039371) popup_snote2_single_graphic_window_g2_ParamLimits

0x6b1b,	// (0x00039371) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x000424f2) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x000424f2) popup_snote2_single_graphic_window_g

0x6b43,	// (0x00039399) popup_snote2_single_graphic_window_t1_ParamLimits

0x6b43,	// (0x00039399) popup_snote2_single_graphic_window_t1

0x6b8f,	// (0x000393e5) popup_snote2_single_graphic_window_t2_ParamLimits

0x6b8f,	// (0x000393e5) popup_snote2_single_graphic_window_t2

0x6a51,	// (0x000392a7) popup_snote2_single_graphic_window_t3_ParamLimits

0x6a51,	// (0x000392a7) popup_snote2_single_graphic_window_t3

0x6a92,	// (0x000392e8) popup_snote2_single_graphic_window_t4_ParamLimits

0x6a92,	// (0x000392e8) popup_snote2_single_graphic_window_t4

0x6ac8,	// (0x0003931e) popup_snote2_single_graphic_window_t5_ParamLimits

0x6ac8,	// (0x0003931e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x000424f7) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x000424f7) popup_snote2_single_graphic_window_t

0x4f95,	// (0x000377eb) clock_nsta_pane_cp2_t1

0x4f95,	// (0x000377eb) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00042312) clock_nsta_pane_cp2_t

0xec37,	// (0x0004148d) form_field_data_wide_pane_g1_ParamLimits

0x0732,	// (0x00032f88) form_field_data_wide_pane_g2_ParamLimits

0x0732,	// (0x00032f88) form_field_data_wide_pane_g2

0x07dc,	// (0x00033032) form_field_data_wide_pane_g3_ParamLimits

0x07dc,	// (0x00033032) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00041ed6) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00041ed6) form_field_data_wide_pane_g

0x719d,	// (0x000399f3) grid_touch_3_pane_ParamLimits

0x719d,	// (0x000399f3) grid_touch_3_pane

0x7591,	// (0x00039de7) cell_touch_3_pane_ParamLimits

0x7591,	// (0x00039de7) cell_touch_3_pane

0x5328,	// (0x00037b7e) cell_touch_3_pane_g1

0x5328,	// (0x00037b7e) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x00042397) cell_touch_3_pane_g

0x0378,	// (0x00032bce) cont_query_data_pane

0x0380,	// (0x00032bd6) cont_query_data_pane_cp1

0x6bdb,	// (0x00039431) button_value_adjust_pane_cp7

0x6be3,	// (0x00039439) query_popup_pane_cp3

0x2dc1,	// (0x00035617) bg_popup_sub_pane_cp22_ParamLimits

0xbffc,	// (0x0003e852) navi_navi_volume_pane_cp2

0xc014,	// (0x0003e86a) popup_side_volume_key_window_g2

0xc020,	// (0x0003e876) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00041f6c) popup_side_volume_key_window_g

0xc03a,	// (0x0003e890) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00041f73) popup_side_volume_key_window_t

0x300b,	// (0x00035861) popup_side_volume_key_window_ParamLimits

0x0726,	// (0x00032f7c) list_double_graphic_pane_g4_ParamLimits

0x0726,	// (0x00032f7c) list_double_graphic_pane_g4

0xef7e,	// (0x000417d4) list_single_2heading_msg_pane_ParamLimits

0xef7e,	// (0x000417d4) list_single_2heading_msg_pane

0xf385,	// (0x00041bdb) list_single_2heading_msg_pane_g1_ParamLimits

0xf385,	// (0x00041bdb) list_single_2heading_msg_pane_g1

0x3088,	// (0x000358de) list_single_2heading_msg_pane_g2_ParamLimits

0x3088,	// (0x000358de) list_single_2heading_msg_pane_g2

0xf391,	// (0x00041be7) list_single_2heading_msg_pane_g3_ParamLimits

0xf391,	// (0x00041be7) list_single_2heading_msg_pane_g3

0xf39d,	// (0x00041bf3) list_single_2heading_msg_pane_g4_ParamLimits

0xf39d,	// (0x00041bf3) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00042502) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00042502) list_single_2heading_msg_pane_g

0xf3b5,	// (0x00041c0b) list_single_2heading_msg_pane_t1_ParamLimits

0xf3b5,	// (0x00041c0b) list_single_2heading_msg_pane_t1

0xf3dd,	// (0x00041c33) list_single_2heading_msg_pane_t2_ParamLimits

0xf3dd,	// (0x00041c33) list_single_2heading_msg_pane_t2

0xf40c,	// (0x00041c62) list_single_2heading_msg_pane_t3_ParamLimits

0xf40c,	// (0x00041c62) list_single_2heading_msg_pane_t3

0xf445,	// (0x00041c9b) list_single_2heading_msg_pane_t4_ParamLimits

0xf445,	// (0x00041c9b) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x0004250b) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x0004250b) list_single_2heading_msg_pane_t

0x0085,	// (0x000328db) title_pane_g4_ParamLimits

0x0085,	// (0x000328db) title_pane_g4

0xbe4c,	// (0x0003e6a2) title_pane_stacon_g3_ParamLimits

0xbe4c,	// (0x0003e6a2) title_pane_stacon_g3

0x6774,	// (0x00038fca) list_single_2graphic_im_pane_g4_ParamLimits

0x6774,	// (0x00038fca) list_single_2graphic_im_pane_g4

0x44a7,	// (0x00036cfd) popup_side_volume_key_window_cp

0x48f9,	// (0x0003714f) main_idle_act2_pane_t1

0xc853,	// (0x0003f0a9) toolbar_button_pane_g10

0x5d86,	// (0x000385dc) popup_toolbar_window_cp1

0x4f86,	// (0x000377dc) clock_nsta_pane_cp_t1

0x4f86,	// (0x000377dc) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0004230d) clock_nsta_pane_cp_t

0xbffc,	// (0x0003e852) navi_navi_volume_pane_cp2_ParamLimits

0xc008,	// (0x0003e85e) popup_side_volume_key_window_g1_ParamLimits

0xc014,	// (0x0003e86a) popup_side_volume_key_window_g2_ParamLimits

0xc020,	// (0x0003e876) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00041f6c) popup_side_volume_key_window_g_ParamLimits

0xcce9,	// (0x0003f53f) fep_hwr_aid_pane

0xcd8a,	// (0x0003f5e0) bg_fep_hwr_top_pane_g4_ParamLimits

0x5393,	// (0x00037be9) fep_hwr_top_pane_g1_ParamLimits

0x5381,	// (0x00037bd7) fep_hwr_top_pane_g2_ParamLimits

0xcdaa,	// (0x0003f600) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x00042362) fep_hwr_top_pane_g_ParamLimits

0xcdbf,	// (0x0003f615) fep_hwr_top_text_pane_ParamLimits

0x427b,	// (0x00036ad1) aid_touch_tab_arrow_arrow_2

0x4272,	// (0x00036ac8) aid_touch_tab_arrow_left_2

0xccfd,	// (0x0003f553) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xcd30,	// (0x0003f586) fep_hwr_prediction_pane

0x54c6,	// (0x00037d1c) fep_vkb_prediction_pane

0x7320,	// (0x00039b76) fep_vkb_side_pane_g3_ParamLimits

0x7320,	// (0x00039b76) fep_vkb_side_pane_g3

0xcf2e,	// (0x0003f784) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xcf98,	// (0x0003f7ee) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xcfa5,	// (0x0003f7fb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x00042411) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd0d4,	// (0x0003f92a) fep_hwr_prediction_pane_g1

0xd0de,	// (0x0003f934) fep_hwr_prediction_pane_g2

0xd0e6,	// (0x0003f93c) fep_hwr_prediction_pane_g3

0xd0ee,	// (0x0003f944) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00042514) fep_hwr_prediction_pane_g

0x6bf4,	// (0x0003944a) fep_vkb_prediction_pane_g1

0x6bfe,	// (0x00039454) fep_vkb_prediction_pane_g2

0x6c06,	// (0x0003945c) fep_vkb_prediction_pane_g3

0x6c0e,	// (0x00039464) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0004251d) fep_vkb_prediction_pane_g

0xcb21,	// (0x0003f377) slider_set_pane_g3

0xcb35,	// (0x0003f38b) slider_set_pane_g4

0xcb4d,	// (0x0003f3a3) slider_set_pane_g5

0xcb21,	// (0x0003f377) slider_set_pane_g6

0xcb63,	// (0x0003f3b9) slider_set_pane_g7

0x46fc,	// (0x00036f52) slider_form_pane_g3

0x4705,	// (0x00036f5b) slider_form_pane_g4

0x470d,	// (0x00036f63) slider_form_pane_g5

0x46fc,	// (0x00036f52) slider_form_pane_g6

0x702e,	// (0x00039884) slider_form_pane_g7

0x4b42,	// (0x00037398) slider_set_pane_vc_g3

0x4b4b,	// (0x000373a1) slider_set_pane_vc_g4

0x4b54,	// (0x000373aa) slider_set_pane_vc_g5

0x4b42,	// (0x00037398) slider_set_pane_vc_g6

0x4b5d,	// (0x000373b3) slider_set_pane_vc_g7

0x4b42,	// (0x00037398) slider_form_pane_vc_g1

0x4b4b,	// (0x000373a1) slider_form_pane_vc_g2

0x4b54,	// (0x000373aa) slider_form_pane_vc_g3

0x4b42,	// (0x00037398) slider_form_pane_vc_g4

0x4cd1,	// (0x00037527) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x000422df) slider_form_pane_vc_g

0xbb89,	// (0x0003e3df) main_idle_act3_pane

0x6c16,	// (0x0003946c) ai3_links_pane

0x75d2,	// (0x00039e28) popup_ai3_data_window_ParamLimits

0x75d2,	// (0x00039e28) popup_ai3_data_window

0xf472,	// (0x00041cc8) grid_ai3_links_pane

0x75ea,	// (0x00039e40) cell_ai3_links_pane_ParamLimits

0x75ea,	// (0x00039e40) cell_ai3_links_pane

0x6c1f,	// (0x00039475) bg_popup_sub_pane_cp11

0x6c2c,	// (0x00039482) cell_ai3_links_pane_g1

0xf472,	// (0x00041cc8) bg_popup_sub_pane_cp12

0x6c51,	// (0x000394a7) heading_ai3_data_pane

0x6c59,	// (0x000394af) list_ai3_gene_pane

0x6c65,	// (0x000394bb) popup_ai3_data_window_g1

0x6c6d,	// (0x000394c3) heading_ai3_data_pane_g1

0x6c75,	// (0x000394cb) heading_ai3_data_pane_t1

0x6c83,	// (0x000394d9) list_double_ai3_gene_pane_ParamLimits

0x6c83,	// (0x000394d9) list_double_ai3_gene_pane

0x6c90,	// (0x000394e6) list_single_ai3_gene_pane_ParamLimits

0x6c90,	// (0x000394e6) list_single_ai3_gene_pane

0x52ed,	// (0x00037b43) list_highlight_pane_cp7_ParamLimits

0x52ed,	// (0x00037b43) list_highlight_pane_cp7

0x6c9d,	// (0x000394f3) list_single_a13_gene_pane_t1_ParamLimits

0x6c9d,	// (0x000394f3) list_single_a13_gene_pane_t1

0x6cb4,	// (0x0003950a) list_single_ai3_gene_pane_g1

0x6cbd,	// (0x00039513) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x00042526) list_single_ai3_gene_pane_g

0x6cc5,	// (0x0003951b) list_double_ai3_gene_pane_g1_ParamLimits

0x6cc5,	// (0x0003951b) list_double_ai3_gene_pane_g1

0x6cd1,	// (0x00039527) list_double_ai3_gene_pane_t1_ParamLimits

0x6cd1,	// (0x00039527) list_double_ai3_gene_pane_t1

0x6ced,	// (0x00039543) list_double_ai3_gene_pane_t2_ParamLimits

0x6ced,	// (0x00039543) list_double_ai3_gene_pane_t2

0x6d02,	// (0x00039558) list_double_ai3_gene_pane_t3_ParamLimits

0x6d02,	// (0x00039558) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x0004252b) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x0004252b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf37d,	// (0x00041bd3) aid_size_min_col_2

0x75be,	// (0x00039e14) aid_size_min_msg_ParamLimits

0x75be,	// (0x00039e14) aid_size_min_msg

0x7334,	// (0x00039b8a) fep_vkb_top_text_pane_g2_ParamLimits

0x7334,	// (0x00039b8a) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x00042392) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x00042392) fep_vkb_top_text_pane_g

0xbb89,	// (0x0003e3df) main_hc_apps_shell_pane

0x6d1f,	// (0x00039575) grid_hc_apps_pane_ParamLimits

0x6d1f,	// (0x00039575) grid_hc_apps_pane

0x6d2e,	// (0x00039584) list_hc_apps_pane

0x6d36,	// (0x0003958c) scroll_pane_cp37_ParamLimits

0x6d36,	// (0x0003958c) scroll_pane_cp37

0x75fe,	// (0x00039e54) cell_hc_apps_pane_ParamLimits

0x75fe,	// (0x00039e54) cell_hc_apps_pane

0x768c,	// (0x00039ee2) cell_hc_apps_pane_g1_ParamLimits

0x768c,	// (0x00039ee2) cell_hc_apps_pane_g1

0x6d42,	// (0x00039598) cell_hc_apps_pane_g2_ParamLimits

0x6d42,	// (0x00039598) cell_hc_apps_pane_g2

0x6d5e,	// (0x000395b4) cell_hc_apps_pane_g3_ParamLimits

0x6d5e,	// (0x000395b4) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x00042532) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x00042532) cell_hc_apps_pane_g

0x76b9,	// (0x00039f0f) cell_hc_apps_pane_t1_ParamLimits

0x76b9,	// (0x00039f0f) cell_hc_apps_pane_t1

0x029c,	// (0x00032af2) grid_highlight_pane_cp10_ParamLimits

0x029c,	// (0x00032af2) grid_highlight_pane_cp10

0x76f7,	// (0x00039f4d) list_single_hc_apps_pane_ParamLimits

0x76f7,	// (0x00039f4d) list_single_hc_apps_pane

0x7727,	// (0x00039f7d) list_single_hc_apps_pane_g1

0x1ea7,	// (0x000346fd) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x00042539) list_single_hc_apps_pane_g

0x1ec0,	// (0x00034716) list_single_hc_apps_pane_g2_copy1

0xf4fe,	// (0x00041d54) list_single_hc_apps_pane_t1

0x00c9,	// (0x0003291f) bg_set_opt_pane_cp_ParamLimits

0xbd9a,	// (0x0003e5f0) setting_slider_pane_t1_ParamLimits

0xbdb0,	// (0x0003e606) setting_slider_pane_t2_ParamLimits

0xbdc9,	// (0x0003e61f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00041db4) setting_slider_pane_t_ParamLimits

0xbde0,	// (0x0003e636) slider_set_pane_ParamLimits

0xc27c,	// (0x0003ead2) control_pane_g5_ParamLimits

0xc27c,	// (0x0003ead2) control_pane_g5

0x46c4,	// (0x00036f1a) slider_set_pane_g1_ParamLimits

0xcb15,	// (0x0003f36b) slider_set_pane_g2_ParamLimits

0xcb21,	// (0x0003f377) slider_set_pane_g3_ParamLimits

0xcb35,	// (0x0003f38b) slider_set_pane_g4_ParamLimits

0xcb4d,	// (0x0003f3a3) slider_set_pane_g5_ParamLimits

0xcb21,	// (0x0003f377) slider_set_pane_g6_ParamLimits

0xcb63,	// (0x0003f3b9) slider_set_pane_g7_ParamLimits

0xf964,	// (0x000421ba) slider_set_pane_g_ParamLimits

0x00c9,	// (0x0003291f) navi_icon_text_pane_ParamLimits

0x613e,	// (0x00038994) aid_fill_nsta_2_ParamLimits

0x6164,	// (0x000389ba) aid_touch_tab_arrow_left_ParamLimits

0x6170,	// (0x000389c6) aid_touch_tab_arrow_right_ParamLimits

0x61da,	// (0x00038a30) clock_nsta_pane_ParamLimits

0x4254,	// (0x00036aaa) navi_icon_pane_g1_ParamLimits

0x4260,	// (0x00036ab6) navi_text_pane_t1_ParamLimits

0x4fd6,	// (0x0003782c) navi_icon_text_pane_g1_ParamLimits

0x4fe2,	// (0x00037838) navi_icon_text_pane_t1_ParamLimits

0x7727,	// (0x00039f7d) list_single_hc_apps_pane_g1_ParamLimits

0x1ea7,	// (0x000346fd) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x00042539) list_single_hc_apps_pane_g_ParamLimits

0x1ec0,	// (0x00034716) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf4fe,	// (0x00041d54) list_single_hc_apps_pane_t1_ParamLimits

0xbccc,	// (0x0003e522) popup_toolbar2_fixed_window_ParamLimits

0xbccc,	// (0x0003e522) popup_toolbar2_fixed_window

0xc780,	// (0x0003efd6) popup_toolbar2_float_window

0xf472,	// (0x00041cc8) bg_popup_sub_pane_cp27

0x6d80,	// (0x000395d6) grid_toolbar2_float_pane

0xf472,	// (0x00041cc8) bg_popup_sub_pane_cp26

0x6d80,	// (0x000395d6) grid_toolbar2_fixed_pane

0x7740,	// (0x00039f96) cell_toolbar2_fixed_pane_ParamLimits

0x7740,	// (0x00039f96) cell_toolbar2_fixed_pane

0x7751,	// (0x00039fa7) cell_toolbar2_fixed_pane_g1

0x6d88,	// (0x000395de) toolbar2_fixed_button_pane

0x35ab,	// (0x00035e01) toolbar2_fixed_button_pane_g1

0x35b3,	// (0x00035e09) toolbar2_fixed_button_pane_g2

0x35bb,	// (0x00035e11) toolbar2_fixed_button_pane_g3

0x35c3,	// (0x00035e19) toolbar2_fixed_button_pane_g4

0x35cb,	// (0x00035e21) toolbar2_fixed_button_pane_g5

0x35d3,	// (0x00035e29) toolbar2_fixed_button_pane_g6

0x35db,	// (0x00035e31) toolbar2_fixed_button_pane_g7

0x35e3,	// (0x00035e39) toolbar2_fixed_button_pane_g8

0x35eb,	// (0x00035e41) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x000420bc) toolbar2_fixed_button_pane_g

0x6d90,	// (0x000395e6) cell_toolbar2_float_pane_ParamLimits

0x6d90,	// (0x000395e6) cell_toolbar2_float_pane

0x6da1,	// (0x000395f7) cell_toolbar2_float_pane_g1

0x6d88,	// (0x000395de) toolbar2_fixed_button_pane_cp

0x72ed,	// (0x00039b43) fep_vkb_accented_list_pane_ParamLimits

0x72ed,	// (0x00039b43) fep_vkb_accented_list_pane

0xcf0e,	// (0x0003f764) bg_popup_fep_shadow_pane_g9

0x3213,	// (0x00035a69) bg_popup_fep_shadow_pane_cp3

0x08ec,	// (0x00033142) list_accented_list_pane

0x6daa,	// (0x00039600) list_single_accented_list_pane_ParamLimits

0x6daa,	// (0x00039600) list_single_accented_list_pane

0x3213,	// (0x00035a69) list_highlight_pane_cp10

0x6dbb,	// (0x00039611) list_single_accented_list_pane_t1

0xc6e6,	// (0x0003ef3c) popup_slider_window_ParamLimits

0xc6e6,	// (0x0003ef3c) popup_slider_window

0x6beb,	// (0x00039441) aid_indentation_list_msg

0x77ec,	// (0x0003a042) bg_popup_window_pane_cp19

0x6e21,	// (0x00039677) popup_slider_window_g1

0x6e3d,	// (0x00039693) popup_slider_window_g2

0x6e59,	// (0x000396af) popup_slider_window_g3

0x0005,

0xfce8,	// (0x0004253e) popup_slider_window_g

0x6e75,	// (0x000396cb) popup_slider_window_t1

0x6eb9,	// (0x0003970f) small_volume_slider_vertical_pane

0x5328,	// (0x00037b7e) small_volume_slider_vertical_pane_g1

0x5328,	// (0x00037b7e) small_volume_slider_vertical_pane_g2

0x6ed5,	// (0x0003972b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x00042550) small_volume_slider_vertical_pane_g

0xbb40,	// (0x0003e396) area_side_right_pane_ParamLimits

0xbb40,	// (0x0003e396) area_side_right_pane

0xd0f6,	// (0x0003f94c) aid_size_side_button_ParamLimits

0xd0f6,	// (0x0003f94c) aid_size_side_button

0xd10a,	// (0x0003f960) grid_sctrl_middle_pane_ParamLimits

0xd10a,	// (0x0003f960) grid_sctrl_middle_pane

0xd126,	// (0x0003f97c) sctrl_sk_bottom_pane

0xd137,	// (0x0003f98d) sctrl_sk_top_pane

0xd149,	// (0x0003f99f) aid_touch_sctrl_top

0xd156,	// (0x0003f9ac) bg_sctrl_sk_pane_ParamLimits

0xd156,	// (0x0003f9ac) bg_sctrl_sk_pane

0xd164,	// (0x0003f9ba) sctrl_sk_top_pane_g1

0xd171,	// (0x0003f9c7) sctrl_sk_top_pane_t1

0xd149,	// (0x0003f99f) aid_touch_sctrl_bottom

0xd156,	// (0x0003f9ac) bg_sctrl_sk_pane_cp_ParamLimits

0xd156,	// (0x0003f9ac) bg_sctrl_sk_pane_cp

0xd18c,	// (0x0003f9e2) sctrl_sk_bottom_pane_g1

0xd171,	// (0x0003f9c7) sctrl_sk_bottom_pane_t1

0xd195,	// (0x0003f9eb) cell_sctrl_middle_pane_ParamLimits

0xd195,	// (0x0003f9eb) cell_sctrl_middle_pane

0xd1b0,	// (0x0003fa06) aid_touch_sctrl_middle_ParamLimits

0xd1b0,	// (0x0003fa06) aid_touch_sctrl_middle

0xd1c1,	// (0x0003fa17) bg_sctrl_middle_pane_ParamLimits

0xd1c1,	// (0x0003fa17) bg_sctrl_middle_pane

0xcf2e,	// (0x0003f784) cell_sctrl_middle_pane_g1_ParamLimits

0xcf2e,	// (0x0003f784) cell_sctrl_middle_pane_g1

0xd1cf,	// (0x0003fa25) cell_sctrl_middle_pane_g2_ParamLimits

0xd1cf,	// (0x0003fa25) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x0004255c) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x0004255c) cell_sctrl_middle_pane_g

0x35ab,	// (0x00035e01) bg_sctrl_middle_pane_g1

0x35bb,	// (0x00035e11) bg_sctrl_middle_pane_g2

0x35b3,	// (0x00035e09) bg_sctrl_middle_pane_g3

0x35cb,	// (0x00035e21) bg_sctrl_middle_pane_g4

0x35c3,	// (0x00035e19) bg_sctrl_middle_pane_g5

0x35d3,	// (0x00035e29) bg_sctrl_middle_pane_g6

0x35db,	// (0x00035e31) bg_sctrl_middle_pane_g7

0x35eb,	// (0x00035e41) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x00042561) bg_sctrl_middle_pane_g

0x35e3,	// (0x00035e39) bg_sctrl_middle_pane_g8_copy1

0x35ab,	// (0x00035e01) bg_sctrl_sk_pane_g1

0x35b3,	// (0x00035e09) bg_sctrl_sk_pane_g2

0x35bb,	// (0x00035e11) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x000420bc) bg_sctrl_sk_pane_g

0x064b,	// (0x00032ea1) aid_size_touch_scroll_bar

0x35c3,	// (0x00035e19) bg_sctrl_sk_pane_g4

0x35cb,	// (0x00035e21) bg_sctrl_sk_pane_g5

0x35d3,	// (0x00035e29) bg_sctrl_sk_pane_g6

0x35db,	// (0x00035e31) bg_sctrl_sk_pane_g7

0x35e3,	// (0x00035e39) bg_sctrl_sk_pane_g8

0x35eb,	// (0x00035e41) bg_sctrl_sk_pane_g9

0xc41c,	// (0x0003ec72) popup_fep_china_hwr2_fs_candidate_window

0xc424,	// (0x0003ec7a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc424,	// (0x0003ec7a) popup_fep_china_hwr2_fs_control_window

0xcf2e,	// (0x0003f784) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x00042557) sctrl_sk_top_pane_g

0xd1e5,	// (0x0003fa3b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd1e5,	// (0x0003fa3b) aid_fep_china_hwr2_fs_cell

0xd1f6,	// (0x0003fa4c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd1f6,	// (0x0003fa4c) bg_popup_fep_shadow_pane_cp4

0xd20d,	// (0x0003fa63) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd20d,	// (0x0003fa63) bg_popup_fep_shadow_pane_cp5

0xd21f,	// (0x0003fa75) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd21f,	// (0x0003fa75) popup_fep_china_hwr2_fs_control_bar_grid

0xd22f,	// (0x0003fa85) popup_fep_china_hwr2_fs_control_funtion_grid

0x95ba,	// (0x0003be10) aid_fep_china_hwr2_fs_candi_cell

0xf472,	// (0x00041cc8) bg_popup_fep_shadow_pane_cp6

0x95c4,	// (0x0003be1a) popup_fep_china_hwr2_fs_candidate_grid

0xd237,	// (0x0003fa8d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd237,	// (0x0003fa8d) cell_fep_china_hwr2_fs_funtion_grid

0x5328,	// (0x00037b7e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x959f,	// (0x0003bdf5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x959f,	// (0x0003bdf5) cell_fep_china_hwr2_fs_funtion_grid_g1

0x95cc,	// (0x0003be22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x95cc,	// (0x0003be22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x00042572) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x00042572) cell_fep_china_hwr2_fs_funtion_grid_g

0xd24f,	// (0x0003faa5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd24f,	// (0x0003faa5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd264,	// (0x0003faba) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd264,	// (0x0003faba) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x00042577) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x00042577) cell_fep_china_hwr2_fs_funtion_grid_t

0x95e2,	// (0x0003be38) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x95ea,	// (0x0003be40) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x95f2,	// (0x0003be48) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x0004257c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x95fa,	// (0x0003be50) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x95fa,	// (0x0003be50) cell_fep_china_hwr2_fs_candidate_grid

0x9613,	// (0x0003be69) popup_fep_china_hwr2_fs_candidate_grid_g20

0x961b,	// (0x0003be71) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5328,	// (0x00037b7e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5328,	// (0x00037b7e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x00042397) cell_fep_china_hwr2_fs_candidate_grid_g

0x9623,	// (0x0003be79) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3404,	// (0x00035c5a) clock_nsta_pane_cp_24_ParamLimits

0x3404,	// (0x00035c5a) clock_nsta_pane_cp_24

0x3461,	// (0x00035cb7) indicator_nsta_pane_cp_24_ParamLimits

0x3461,	// (0x00035cb7) indicator_nsta_pane_cp_24

0x415f,	// (0x000369b5) heading_pane_g1

0x0001,

0xf8cb,	// (0x00042121) heading_pane_g

0x70ec,	// (0x00039942) grid_sct_catagory_button_pane

0x47cb,	// (0x00037021) scroll_pane_cp5_ParamLimits

0x5008,	// (0x0003785e) button_value_adjust_pane_cp5_ParamLimits

0x5008,	// (0x0003785e) button_value_adjust_pane_cp5

0x50c6,	// (0x0003791c) form2_midp_time_pane_ParamLimits

0x9631,	// (0x0003be87) cell_sct_catagory_button_pane_ParamLimits

0x9631,	// (0x0003be87) cell_sct_catagory_button_pane

0x52ed,	// (0x00037b43) bg_button_pane_cp01_ParamLimits

0x52ed,	// (0x00037b43) bg_button_pane_cp01

0x5328,	// (0x00037b7e) cell_sct_catagory_button_pane_g1

0xc71d,	// (0x0003ef73) popup_tb_extension_window

0xd280,	// (0x0003fad6) aid_size_cell_ext_ParamLimits

0xd280,	// (0x0003fad6) aid_size_cell_ext

0x029c,	// (0x00032af2) bg_tb_trans_pane_cp1_ParamLimits

0x029c,	// (0x00032af2) bg_tb_trans_pane_cp1

0xd2a0,	// (0x0003faf6) grid_tb_ext_pane_ParamLimits

0xd2a0,	// (0x0003faf6) grid_tb_ext_pane

0xd2c6,	// (0x0003fb1c) cell_tb_ext_pane_ParamLimits

0xd2c6,	// (0x0003fb1c) cell_tb_ext_pane

0xd2db,	// (0x0003fb31) cell_tb_ext_pane_g1_ParamLimits

0xd2db,	// (0x0003fb31) cell_tb_ext_pane_g1

0x9643,	// (0x0003be99) cell_tb_ext_pane_t1

0x029c,	// (0x00032af2) list_highlight_pane_cp11_ParamLimits

0x029c,	// (0x00032af2) list_highlight_pane_cp11

0xbceb,	// (0x0003e541) popup_uni_indicator_window_ParamLimits

0xbceb,	// (0x0003e541) popup_uni_indicator_window

0x07c2,	// (0x00033018) bg_popup_sub_pane_cp14

0x965e,	// (0x0003beb4) list_uniindi_pane

0x966a,	// (0x0003bec0) uniindi_top_pane

0x029c,	// (0x00032af2) bg_uniindi_top_pane

0x9689,	// (0x0003bedf) uniindi_top_pane_g1

0x969f,	// (0x0003bef5) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x00042583) uniindi_top_pane_g

0x96c9,	// (0x0003bf1f) uniindi_top_pane_t1

0x96f3,	// (0x0003bf49) list_single_uniindi_pane_ParamLimits

0x96f3,	// (0x0003bf49) list_single_uniindi_pane

0x5328,	// (0x00037b7e) bg_uniindi_top_pane_g1

0x9705,	// (0x0003bf5b) list_single_uniindi_pane_g1

0x9718,	// (0x0003bf6e) list_single_uniindi_pane_t1

0xbb89,	// (0x0003e3df) control_bg_pane

0x973d,	// (0x0003bf93) bg_sctrl_sk_pane_cp1

0x9746,	// (0x0003bf9c) bg_sctrl_sk_pane_cp2

0x974f,	// (0x0003bfa5) control_bg_pane_g1

0x9758,	// (0x0003bfae) control_bg_pane_g2

0x0001,

0xfd36,	// (0x0004258c) control_bg_pane_g

0x4f2e,	// (0x00037784) cell_indicator_nsta_pane_g1_ParamLimits

0x71da,	// (0x00039a30) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x000422fb) cell_indicator_nsta_pane_g_ParamLimits

0xf1f4,	// (0x00041a4a) form2_midp_time_pane_t1_ParamLimits

0xc392,	// (0x0003ebe8) main_idle_act4_pane_ParamLimits

0xc392,	// (0x0003ebe8) main_idle_act4_pane

0xc71d,	// (0x0003ef73) popup_tb_extension_window_ParamLimits

0xd2ba,	// (0x0003fb10) tb_ext_find_pane_ParamLimits

0xd2ba,	// (0x0003fb10) tb_ext_find_pane

0x9761,	// (0x0003bfb7) ai_gene_pane_1_cp1

0x32a7,	// (0x00035afd) ai_gene_pane_2_cp1

0x9769,	// (0x0003bfbf) list_single_idle_plugin_calendar_pane

0x9772,	// (0x0003bfc8) list_single_idle_plugin_notification_pane

0x977b,	// (0x0003bfd1) list_single_idle_plugin_player_pane

0xd2f8,	// (0x0003fb4e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd2f8,	// (0x0003fb4e) list_single_idle_plugin_shortcut_pane

0xd31a,	// (0x0003fb70) main_idle_act4_pane_t1

0xd32c,	// (0x0003fb82) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x00042591) main_idle_act4_pane_t

0xd33e,	// (0x0003fb94) middle_sk_idle_act4_pane_ParamLimits

0xd33e,	// (0x0003fb94) middle_sk_idle_act4_pane

0xd354,	// (0x0003fbaa) popup_clock_digital_analogue_window_cp2

0xd36e,	// (0x0003fbc4) shortcut_wheel_idle_act4_pane_ParamLimits

0xd36e,	// (0x0003fbc4) shortcut_wheel_idle_act4_pane

0x5328,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g1

0x5328,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g2

0x5328,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g3

0x5328,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g4

0x5328,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g5

0x9784,	// (0x0003bfda) shortcut_wheel_idle_act4_pane_g6

0x978c,	// (0x0003bfe2) shortcut_wheel_idle_act4_pane_g7

0x9794,	// (0x0003bfea) shortcut_wheel_idle_act4_pane_g8

0x979c,	// (0x0003bff2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x00042596) shortcut_wheel_idle_act4_pane_g

0x5554,	// (0x00037daa) middle_sk_idle_act4_pane_g1_ParamLimits

0x5554,	// (0x00037daa) middle_sk_idle_act4_pane_g1

0xd3de,	// (0x0003fc34) middle_sk_idle_act4_pane_g2_ParamLimits

0xd3de,	// (0x0003fc34) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x000425b9) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x000425b9) middle_sk_idle_act4_pane_g

0xd3ea,	// (0x0003fc40) middle_sk_idle_act4_pane_t1_ParamLimits

0xd3ea,	// (0x0003fc40) middle_sk_idle_act4_pane_t1

0xd407,	// (0x0003fc5d) grid_ai_shortcut_pane_ParamLimits

0xd407,	// (0x0003fc5d) grid_ai_shortcut_pane

0xd420,	// (0x0003fc76) list_highlight_pane_cp16_ParamLimits

0xd420,	// (0x0003fc76) list_highlight_pane_cp16

0xd42d,	// (0x0003fc83) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd42d,	// (0x0003fc83) list_single_idle_plugin_shortcut_pane_g1

0xd439,	// (0x0003fc8f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd439,	// (0x0003fc8f) list_single_idle_plugin_shortcut_pane_g2

0xd451,	// (0x0003fca7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd451,	// (0x0003fca7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x000425be) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x000425be) list_single_idle_plugin_shortcut_pane_g

0xd464,	// (0x0003fcba) cell_ai_shortcut_pane_ParamLimits

0xd464,	// (0x0003fcba) cell_ai_shortcut_pane

0xd485,	// (0x0003fcdb) cell_ai_shortcut_pane_g1_ParamLimits

0xd485,	// (0x0003fcdb) cell_ai_shortcut_pane_g1

0x9761,	// (0x0003bfb7) ai_gene_pane_1_cp2

0x97a4,	// (0x0003bffa) ai_gene_pane_2_cp2

0x97ac,	// (0x0003c002) list_highlight_pane_cp15

0x97b5,	// (0x0003c00b) list_single_idle_plugin_calendar_pane_g1

0x97ac,	// (0x0003c002) list_highlight_pane_cp17

0x97bd,	// (0x0003c013) list_single_idle_plugin_calendar_pane_g1_copy1

0x97c5,	// (0x0003c01b) list_single_idle_plugin_player_pane_g1

0x4985,	// (0x000371db) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x000425c5) list_single_idle_plugin_player_pane_g

0x97cd,	// (0x0003c023) list_single_idle_plugin_player_pane_t1

0x97db,	// (0x0003c031) list_single_idle_plugin_player_pane_t2

0x97e9,	// (0x0003c03f) list_single_idle_plugin_player_pane_t3

0x97f7,	// (0x0003c04d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x000425ca) list_single_idle_plugin_player_pane_t

0x9805,	// (0x0003c05b) wait_bar_pane_cp15

0x980d,	// (0x0003c063) grid_ai_notification_pane

0x4985,	// (0x000371db) list_single_idle_plugin_notification_pane_g1

0xd4a7,	// (0x0003fcfd) cell_ai_notification_pane_ParamLimits

0xd4a7,	// (0x0003fcfd) cell_ai_notification_pane

0x9816,	// (0x0003c06c) cell_ai_notification_pane_g1

0x981e,	// (0x0003c074) cell_ai_notification_pane_t1

0xd4b4,	// (0x0003fd0a) tb_ext_find_button_pane

0xd4bc,	// (0x0003fd12) tb_ext_find_pane_g1

0xd4c4,	// (0x0003fd1a) tb_ext_find_pane_t1

0x2d81,	// (0x000355d7) tb_ext_find_button_pane_g1

0x982c,	// (0x0003c082) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x000425d3) tb_ext_find_button_pane_g

0xd31a,	// (0x0003fb70) main_idle_act4_pane_t1_ParamLimits

0xd32c,	// (0x0003fb82) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x00042591) main_idle_act4_pane_t_ParamLimits

0xd354,	// (0x0003fbaa) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd362,	// (0x0003fbb8) sat_plugin_idle_act4_pane_ParamLimits

0xd362,	// (0x0003fbb8) sat_plugin_idle_act4_pane

0xd4d2,	// (0x0003fd28) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd4d2,	// (0x0003fd28) sat_plugin_idle_act4_pane_t1

0xd4e5,	// (0x0003fd3b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4e5,	// (0x0003fd3b) sat_plugin_idle_act4_pane_t2

0xd4f8,	// (0x0003fd4e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4f8,	// (0x0003fd4e) sat_plugin_idle_act4_pane_t3

0xd50b,	// (0x0003fd61) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd50b,	// (0x0003fd61) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x000425d8) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x000425d8) sat_plugin_idle_act4_pane_t

0xbc4c,	// (0x0003e4a2) popup_battery_window_ParamLimits

0xbc4c,	// (0x0003e4a2) popup_battery_window

0x029c,	// (0x00032af2) bg_popup_sub_pane_cp25_ParamLimits

0x029c,	// (0x00032af2) bg_popup_sub_pane_cp25

0x9835,	// (0x0003c08b) popup_battery_window_g1_ParamLimits

0x9835,	// (0x0003c08b) popup_battery_window_g1

0x9841,	// (0x0003c097) popup_battery_window_t1_ParamLimits

0x9841,	// (0x0003c097) popup_battery_window_t1

0x9853,	// (0x0003c0a9) popup_battery_window_t2_ParamLimits

0x9853,	// (0x0003c0a9) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x000425e1) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x000425e1) popup_battery_window_t

0x5fd7,	// (0x0003882d) midp_canvas_pane_ParamLimits

0x6033,	// (0x00038889) midp_keypad_pane_ParamLimits

0x6033,	// (0x00038889) midp_keypad_pane

0x10b2,	// (0x00033908) main_midp_pane_ParamLimits

0x4fa4,	// (0x000377fa) signal_pane_g2_cp_ParamLimits

0xd51e,	// (0x0003fd74) aid_size_cell_midp_keypad_ParamLimits

0xd51e,	// (0x0003fd74) aid_size_cell_midp_keypad

0xd538,	// (0x0003fd8e) midp_keyp_game_grid_pane_ParamLimits

0xd538,	// (0x0003fd8e) midp_keyp_game_grid_pane

0xd552,	// (0x0003fda8) midp_keyp_rocker_pane_ParamLimits

0xd552,	// (0x0003fda8) midp_keyp_rocker_pane

0xd57f,	// (0x0003fdd5) midp_keyp_sk_left_pane_ParamLimits

0xd57f,	// (0x0003fdd5) midp_keyp_sk_left_pane

0xd5d7,	// (0x0003fe2d) midp_keyp_sk_right_pane_ParamLimits

0xd5d7,	// (0x0003fe2d) midp_keyp_sk_right_pane

0xf472,	// (0x00041cc8) bg_button_pane_cp03

0xd629,	// (0x0003fe7f) midp_keyp_sk_left_pane_g1

0xf472,	// (0x00041cc8) bg_button_pane_cp04

0xd629,	// (0x0003fe7f) midp_keyp_sk_right_pane_g1

0x5328,	// (0x00037b7e) midp_keyp_rocker_pane_g1

0xd632,	// (0x0003fe88) keyp_game_cell_pane_ParamLimits

0xd632,	// (0x0003fe88) keyp_game_cell_pane

0xf472,	// (0x00041cc8) bg_button_pane_cp02

0xd643,	// (0x0003fe99) keyp_game_cell_pane_g1

0xbc82,	// (0x0003e4d8) popup_fep_vkb2_window_ParamLimits

0xbc82,	// (0x0003e4d8) popup_fep_vkb2_window

0xd65a,	// (0x0003feb0) aid_size_cell_vkb2_ParamLimits

0xd65a,	// (0x0003feb0) aid_size_cell_vkb2

0xd6ae,	// (0x0003ff04) popup_fep_vkb2_window_g1_ParamLimits

0xd6ae,	// (0x0003ff04) popup_fep_vkb2_window_g1

0xd6f6,	// (0x0003ff4c) vkb2_area_bottom_pane_ParamLimits

0xd6f6,	// (0x0003ff4c) vkb2_area_bottom_pane

0xd72e,	// (0x0003ff84) vkb2_area_keypad_pane_ParamLimits

0xd72e,	// (0x0003ff84) vkb2_area_keypad_pane

0xd766,	// (0x0003ffbc) vkb2_area_top_pane_ParamLimits

0xd766,	// (0x0003ffbc) vkb2_area_top_pane

0xd7d6,	// (0x0004002c) vkb2_top_entry_pane_ParamLimits

0xd7d6,	// (0x0004002c) vkb2_top_entry_pane

0xd800,	// (0x00040056) vkb2_top_grid_left_pane_ParamLimits

0xd800,	// (0x00040056) vkb2_top_grid_left_pane

0xd81e,	// (0x00040074) vkb2_top_grid_right_pane_ParamLimits

0xd81e,	// (0x00040074) vkb2_top_grid_right_pane

0xd83c,	// (0x00040092) vkb2_cell_keypad_pane_ParamLimits

0xd83c,	// (0x00040092) vkb2_cell_keypad_pane

0xd8ed,	// (0x00040143) vkb2_area_bottom_grid_pane_ParamLimits

0xd8ed,	// (0x00040143) vkb2_area_bottom_grid_pane

0xd911,	// (0x00040167) vkb2_area_bottom_pane_g1_ParamLimits

0xd911,	// (0x00040167) vkb2_area_bottom_pane_g1

0xd935,	// (0x0004018b) vkb2_area_bottom_pane_g2_ParamLimits

0xd935,	// (0x0004018b) vkb2_area_bottom_pane_g2

0xd963,	// (0x000401b9) vkb2_area_bottom_pane_g3_ParamLimits

0xd963,	// (0x000401b9) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x000425e6) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x000425e6) vkb2_area_bottom_pane_g

0xd9b4,	// (0x0004020a) vkb2_top_cell_left_pane_ParamLimits

0xd9b4,	// (0x0004020a) vkb2_top_cell_left_pane

0xd9d4,	// (0x0004022a) vkb2_top_entry_pane_g1_ParamLimits

0xd9d4,	// (0x0004022a) vkb2_top_entry_pane_g1

0xd9e2,	// (0x00040238) vkb2_top_entry_pane_t1_ParamLimits

0xd9e2,	// (0x00040238) vkb2_top_entry_pane_t1

0x9ba3,	// (0x0003c3f9) vkb2_top_entry_pane_t2_ParamLimits

0x9ba3,	// (0x0003c3f9) vkb2_top_entry_pane_t2

0x9bd5,	// (0x0003c42b) vkb2_top_entry_pane_t3_ParamLimits

0x9bd5,	// (0x0003c42b) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x000425ed) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x000425ed) vkb2_top_entry_pane_t

0xda41,	// (0x00040297) vkb2_top_grid_right_pane_g1_ParamLimits

0xda41,	// (0x00040297) vkb2_top_grid_right_pane_g1

0xda57,	// (0x000402ad) vkb2_top_grid_right_pane_g2_ParamLimits

0xda57,	// (0x000402ad) vkb2_top_grid_right_pane_g2

0xda6f,	// (0x000402c5) vkb2_top_grid_right_pane_g3_ParamLimits

0xda6f,	// (0x000402c5) vkb2_top_grid_right_pane_g3

0xda87,	// (0x000402dd) vkb2_top_grid_right_pane_g4_ParamLimits

0xda87,	// (0x000402dd) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x000425f4) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x000425f4) vkb2_top_grid_right_pane_g

0xda9d,	// (0x000402f3) vkb2_top_cell_left_pane_g1

0xdab4,	// (0x0004030a) vkb2_cell_keypad_pane_g1_ParamLimits

0xdab4,	// (0x0004030a) vkb2_cell_keypad_pane_g1

0x9c17,	// (0x0003c46d) vkb2_cell_keypad_pane_t1_ParamLimits

0x9c17,	// (0x0003c46d) vkb2_cell_keypad_pane_t1

0xdac2,	// (0x00040318) vkb2_cell_bottom_grid_pane_ParamLimits

0xdac2,	// (0x00040318) vkb2_cell_bottom_grid_pane

0xdafb,	// (0x00040351) vkb2_cell_bottom_grid_pane_g1

0xd382,	// (0x0003fbd8) aid_call2_pane_cp02

0xd38a,	// (0x0003fbe0) aid_call_pane_cp02

0xd392,	// (0x0003fbe8) clock_digital_number_pane_cp10

0xd39a,	// (0x0003fbf0) clock_digital_number_pane_cp11

0xd3a2,	// (0x0003fbf8) clock_digital_number_pane_cp12

0xd3aa,	// (0x0003fc00) clock_digital_number_pane_cp13

0xd3b2,	// (0x0003fc08) clock_digital_separator_pane_cp10

0x2d81,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g1

0x2d81,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g2

0xd3ba,	// (0x0003fc10) popup_clock_digital_analogue_window_cp2_g3

0x2d81,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g4

0xd3ba,	// (0x0003fc10) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x000425a9) popup_clock_digital_analogue_window_cp2_g

0xd3c2,	// (0x0003fc18) popup_clock_digital_analogue_window_cp2_t1

0xd3d0,	// (0x0003fc26) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x000425b4) popup_clock_digital_analogue_window_cp2_t

0x5328,	// (0x00037b7e) clock_digital_number_pane_cp10_g1

0x5328,	// (0x00037b7e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x00042397) clock_digital_number_pane_cp10_g

0x5328,	// (0x00037b7e) clock_digital_separator_pane_cp10_g1

0x5328,	// (0x00037b7e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x00042397) clock_digital_separator_pane_cp10_g

0x96ab,	// (0x0003bf01) uniindi_top_pane_g3

0x96bc,	// (0x0003bf12) uniindi_top_pane_g4

0xd8a7,	// (0x000400fd) vkb2_row_keypad_pane_ParamLimits

0xd8a7,	// (0x000400fd) vkb2_row_keypad_pane

0xdb17,	// (0x0004036d) vkb2_cell_t_keypad_pane_ParamLimits

0xdb17,	// (0x0004036d) vkb2_cell_t_keypad_pane

0xdb24,	// (0x0004037a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xdb24,	// (0x0004037a) vkb2_cell_t_keypad_pane_cp08

0xdb34,	// (0x0004038a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xdb34,	// (0x0004038a) vkb2_cell_t_keypad_pane_cp09

0xdb45,	// (0x0004039b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xdb45,	// (0x0004039b) vkb2_cell_t_keypad_pane_cp01

0xdb55,	// (0x000403ab) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xdb55,	// (0x000403ab) vkb2_cell_t_keypad_pane_cp02

0xdb65,	// (0x000403bb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xdb65,	// (0x000403bb) vkb2_cell_t_keypad_pane_cp03

0xdb75,	// (0x000403cb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xdb75,	// (0x000403cb) vkb2_cell_t_keypad_pane_cp04

0xdb85,	// (0x000403db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xdb85,	// (0x000403db) vkb2_cell_t_keypad_pane_cp05

0xdb95,	// (0x000403eb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xdb95,	// (0x000403eb) vkb2_cell_t_keypad_pane_cp06

0xdba5,	// (0x000403fb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xdba5,	// (0x000403fb) vkb2_cell_t_keypad_pane_cp07

0xdbb5,	// (0x0004040b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xdbb5,	// (0x0004040b) vkb2_cell_t_keypad_pane_cp10

0xcf2e,	// (0x0003f784) vkb2_cell_t_keypad_pane_g1

0x9c2e,	// (0x0003c484) vkb2_cell_t_keypad_pane_t1

0xbb89,	// (0x0003e3df) popup_grid_graphic2_window

0xdbca,	// (0x00040420) aid_size_cell_graphic2_ParamLimits

0xdbca,	// (0x00040420) aid_size_cell_graphic2

0xdc02,	// (0x00040458) bg_popup_window_pane_cp21_ParamLimits

0xdc02,	// (0x00040458) bg_popup_window_pane_cp21

0xdc10,	// (0x00040466) graphic2_pages_pane_ParamLimits

0xdc10,	// (0x00040466) graphic2_pages_pane

0xdc4a,	// (0x000404a0) grid_graphic2_control_pane_ParamLimits

0xdc4a,	// (0x000404a0) grid_graphic2_control_pane

0xdc80,	// (0x000404d6) grid_graphic2_pane_ParamLimits

0xdc80,	// (0x000404d6) grid_graphic2_pane

0xdce0,	// (0x00040536) cell_graphic2_pane

0xbb89,	// (0x0003e3df) main_comp_mode_pane

0x6c59,	// (0x000394af) list_ai3_gene_pane_ParamLimits

0x77ec,	// (0x0003a042) bg_popup_window_pane_cp19_ParamLimits

0x6dc9,	// (0x0003961f) bg_touch_area_indi_pane_ParamLimits

0x6dc9,	// (0x0003961f) bg_touch_area_indi_pane

0x6ddf,	// (0x00039635) bg_touch_area_indi_pane_cp01_ParamLimits

0x6ddf,	// (0x00039635) bg_touch_area_indi_pane_cp01

0x6df5,	// (0x0003964b) bg_touch_area_indi_pane_cp02_ParamLimits

0x6df5,	// (0x0003964b) bg_touch_area_indi_pane_cp02

0x6e0b,	// (0x00039661) bg_touch_area_indi_pane_cp03_ParamLimits

0x6e0b,	// (0x00039661) bg_touch_area_indi_pane_cp03

0x6e21,	// (0x00039677) popup_slider_window_g1_ParamLimits

0x6e3d,	// (0x00039693) popup_slider_window_g2_ParamLimits

0x6e59,	// (0x000396af) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x0004253e) popup_slider_window_g_ParamLimits

0x6e75,	// (0x000396cb) popup_slider_window_t1_ParamLimits

0x6eb9,	// (0x0003970f) small_volume_slider_vertical_pane_ParamLimits

0xdce0,	// (0x00040536) cell_graphic2_pane_ParamLimits

0xdd1c,	// (0x00040572) bg_button_pane_cp10_ParamLimits

0xdd1c,	// (0x00040572) bg_button_pane_cp10

0xdd2d,	// (0x00040583) bg_button_pane_cp11_ParamLimits

0xdd2d,	// (0x00040583) bg_button_pane_cp11

0xdd3e,	// (0x00040594) graphic2_pages_pane_g1_ParamLimits

0xdd3e,	// (0x00040594) graphic2_pages_pane_g1

0xdd51,	// (0x000405a7) graphic2_pages_pane_g2_ParamLimits

0xdd51,	// (0x000405a7) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00042602) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00042602) graphic2_pages_pane_g

0xdd67,	// (0x000405bd) graphic2_pages_pane_t1_ParamLimits

0xdd67,	// (0x000405bd) graphic2_pages_pane_t1

0xdd7d,	// (0x000405d3) cell_graphic2_control_pane_ParamLimits

0xdd7d,	// (0x000405d3) cell_graphic2_control_pane

0xdd9c,	// (0x000405f2) cell_graphic2_pane_g1_ParamLimits

0xdd9c,	// (0x000405f2) cell_graphic2_pane_g1

0xdda9,	// (0x000405ff) cell_graphic2_pane_g2_ParamLimits

0xdda9,	// (0x000405ff) cell_graphic2_pane_g2

0xddb6,	// (0x0004060c) cell_graphic2_pane_g3_ParamLimits

0xddb6,	// (0x0004060c) cell_graphic2_pane_g3

0xddc3,	// (0x00040619) cell_graphic2_pane_g4_ParamLimits

0xddc3,	// (0x00040619) cell_graphic2_pane_g4

0xddd0,	// (0x00040626) cell_graphic2_pane_g5_ParamLimits

0xddd0,	// (0x00040626) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x00042607) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x00042607) cell_graphic2_pane_g

0xddeb,	// (0x00040641) cell_graphic2_pane_t1_ParamLimits

0xddeb,	// (0x00040641) cell_graphic2_pane_t1

0x362b,	// (0x00035e81) grid_highlight_pane_cp11_ParamLimits

0x362b,	// (0x00035e81) grid_highlight_pane_cp11

0x029c,	// (0x00032af2) bg_button_pane_cp05

0xde14,	// (0x0004066a) cell_graphic2_control_pane_g1

0x5328,	// (0x00037b7e) bg_touch_area_indi_pane_g1

0x9efb,	// (0x0003c751) aid_cmod_rocker_key_size

0x9f05,	// (0x0003c75b) aid_cmode_itu_key_size

0x9f0f,	// (0x0003c765) main_cmode_video_pane

0x9f17,	// (0x0003c76d) main_comp_mode_itu_pane

0x9f21,	// (0x0003c777) main_comp_mode_rocker_pane

0x9f29,	// (0x0003c77f) cell_cmode_rocker_pane_ParamLimits

0x9f29,	// (0x0003c77f) cell_cmode_rocker_pane

0x9f3b,	// (0x0003c791) cell_cmode_itu_pane_ParamLimits

0x9f3b,	// (0x0003c791) cell_cmode_itu_pane

0x07c2,	// (0x00033018) bg_button_pane_cp06_ParamLimits

0x07c2,	// (0x00033018) bg_button_pane_cp06

0x5554,	// (0x00037daa) cell_cmode_rocker_pane_g1_ParamLimits

0x5554,	// (0x00037daa) cell_cmode_rocker_pane_g1

0x959f,	// (0x0003bdf5) cell_cmode_rocker_pane_g2_ParamLimits

0x959f,	// (0x0003bdf5) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x00042617) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x00042617) cell_cmode_rocker_pane_g

0xf472,	// (0x00041cc8) bg_button_pane_cp07

0x9f50,	// (0x0003c7a6) cell_cmode_itu_pane_g1

0x9f59,	// (0x0003c7af) cell_cmode_itu_pane_t1

0x9f67,	// (0x0003c7bd) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x0004261c) cell_cmode_itu_pane_t

0x972d,	// (0x0003bf83) aid_touch_ctrl_left

0x9735,	// (0x0003bf8b) aid_touch_ctrl_right

0xf472,	// (0x00041cc8) compa_mode_pane

0xde3c,	// (0x00040692) aid_cmod_rocker_key_size_cp

0xde46,	// (0x0004069c) aid_cmode_itu_key_size_cp

0x9f89,	// (0x0003c7df) compa_mode_pane_g1

0x9f91,	// (0x0003c7e7) compa_mode_pane_g2

0x9f99,	// (0x0003c7ef) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x00042621) compa_mode_pane_g

0xde50,	// (0x000406a6) main_comp_mode_itu_pane_cp

0xde58,	// (0x000406ae) main_comp_mode_rocker_pane_cp

0xde60,	// (0x000406b6) cell_cmode_itu_pane_cp_ParamLimits

0xde60,	// (0x000406b6) cell_cmode_itu_pane_cp

0xde75,	// (0x000406cb) cell_cmode_rocker_pane_cp_ParamLimits

0xde75,	// (0x000406cb) cell_cmode_rocker_pane_cp

0x07c2,	// (0x00033018) bg_button_pane_cp06_cp_ParamLimits

0x07c2,	// (0x00033018) bg_button_pane_cp06_cp

0x5554,	// (0x00037daa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5554,	// (0x00037daa) cell_cmode_rocker_pane_g1_cp

0x5328,	// (0x00037b7e) cell_cmode_rocker_pane_g2_cp

0xf472,	// (0x00041cc8) bg_button_pane_cp07_cp

0xde87,	// (0x000406dd) cell_cmode_itu_pane_g1_cp

0xde90,	// (0x000406e6) cell_cmode_itu_pane_t1_cp

0xde9e,	// (0x000406f4) cell_cmode_itu_pane_t2_cp

0x7026,	// (0x0003987c) settings_code_pane_cp2

0x00c9,	// (0x0003291f) bg_popup_window_pane_cp3_ParamLimits

0x049a,	// (0x00032cf0) heading_pane_cp3_ParamLimits

0x04a6,	// (0x00032cfc) listscroll_popup_graphic_pane_ParamLimits

0xcce9,	// (0x0003f53f) fep_hwr_aid_pane_ParamLimits

0xd149,	// (0x0003f99f) aid_touch_sctrl_top_ParamLimits

0xd164,	// (0x0003f9ba) sctrl_sk_top_pane_g1_ParamLimits

0xcf2e,	// (0x0003f784) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x00042557) sctrl_sk_top_pane_g_ParamLimits

0xd171,	// (0x0003f9c7) sctrl_sk_top_pane_t1_ParamLimits

0xd149,	// (0x0003f99f) aid_touch_sctrl_bottom_ParamLimits

0xd171,	// (0x0003f9c7) sctrl_sk_bottom_pane_t1_ParamLimits

0x9677,	// (0x0003becd) aid_area_touch_clock

0xd79e,	// (0x0003fff4) aid_vkb2_area_top_pane_cell_ParamLimits

0xd79e,	// (0x0003fff4) aid_vkb2_area_top_pane_cell

0xd8c9,	// (0x0004011f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd8c9,	// (0x0004011f) aid_vkb2_area_bottom_pane_cell

0x9b54,	// (0x0003c3aa) popup_char_count_window

0xa001,	// (0x0003c857) popup_char_count_window_g1

0xa00a,	// (0x0003c860) popup_char_count_window_g2

0xa013,	// (0x0003c869) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x00042628) popup_char_count_window_g

0xa01c,	// (0x0003c872) popup_char_count_window_t1

0xd68c,	// (0x0003fee2) popup_fep_char_preview_window_ParamLimits

0xd68c,	// (0x0003fee2) popup_fep_char_preview_window

0xd7bc,	// (0x00040012) vkb2_top_candi_pane_ParamLimits

0xd7bc,	// (0x00040012) vkb2_top_candi_pane

0xdeac,	// (0x00040702) cell_vkb2_top_candi_pane_ParamLimits

0xdeac,	// (0x00040702) cell_vkb2_top_candi_pane

0xdee5,	// (0x0004073b) bg_popup_fep_char_preview_window_ParamLimits

0xdee5,	// (0x0004073b) bg_popup_fep_char_preview_window

0xdef3,	// (0x00040749) popup_fep_char_preview_window_t1_ParamLimits

0xdef3,	// (0x00040749) popup_fep_char_preview_window_t1

0xa084,	// (0x0003c8da) bg_popup_fep_char_preview_window_g1

0xa07c,	// (0x0003c8d2) bg_popup_fep_char_preview_window_g2

0xa074,	// (0x0003c8ca) bg_popup_fep_char_preview_window_g3

0xa0a4,	// (0x0003c8fa) bg_popup_fep_char_preview_window_g4

0xa09c,	// (0x0003c8f2) bg_popup_fep_char_preview_window_g5

0xdf2d,	// (0x00040783) bg_popup_fep_char_preview_window_g6

0xa094,	// (0x0003c8ea) bg_popup_fep_char_preview_window_g7

0xa08c,	// (0x0003c8e2) bg_popup_fep_char_preview_window_g8

0xa0ac,	// (0x0003c902) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x0004262f) bg_popup_fep_char_preview_window_g

0xcf2e,	// (0x0003f784) cell_vkb2_top_candi_pane_g1_ParamLimits

0xcf2e,	// (0x0003f784) cell_vkb2_top_candi_pane_g1

0xcf3c,	// (0x0003f792) cell_vkb2_top_candi_pane_g2_ParamLimits

0xcf3c,	// (0x0003f792) cell_vkb2_top_candi_pane_g2

0xa0b4,	// (0x0003c90a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xa0b4,	// (0x0003c90a) cell_vkb2_top_candi_pane_g3

0xdf35,	// (0x0004078b) cell_vkb2_top_candi_pane_g4_ParamLimits

0xdf35,	// (0x0004078b) cell_vkb2_top_candi_pane_g4

0x57a4,	// (0x00037ffa) cell_vkb2_top_candi_pane_g5_ParamLimits

0x57a4,	// (0x00037ffa) cell_vkb2_top_candi_pane_g5

0xdf56,	// (0x000407ac) cell_vkb2_top_candi_pane_g6_ParamLimits

0xdf56,	// (0x000407ac) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x00042642) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x00042642) cell_vkb2_top_candi_pane_g

0xdf64,	// (0x000407ba) cell_vkb2_top_candi_pane_t1

0xcb01,	// (0x0003f357) aid_size_touch_slider_mark_ParamLimits

0xcb01,	// (0x0003f357) aid_size_touch_slider_mark

0xdc3e,	// (0x00040494) grid_graphic2_catg_pane_ParamLimits

0xdc3e,	// (0x00040494) grid_graphic2_catg_pane

0xdcbc,	// (0x00040512) popup_grid_graphic2_window_t1_ParamLimits

0xdcbc,	// (0x00040512) popup_grid_graphic2_window_t1

0xdcce,	// (0x00040524) popup_grid_graphic2_window_t2_ParamLimits

0xdcce,	// (0x00040524) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x000425fd) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x000425fd) popup_grid_graphic2_window_t

0x029c,	// (0x00032af2) bg_button_pane_cp05_ParamLimits

0xde14,	// (0x0004066a) cell_graphic2_control_pane_g1_ParamLimits

0xdf7a,	// (0x000407d0) cell_graphic2_catg_pane_ParamLimits

0xdf7a,	// (0x000407d0) cell_graphic2_catg_pane

0xf472,	// (0x00041cc8) bg_button_pane_cp12

0xdf8c,	// (0x000407e2) cell_graphic2_catg_pane_g1

0x9643,	// (0x0003be99) cell_tb_ext_pane_t1_ParamLimits

0xda14,	// (0x0004026a) vkb2_top_cell_right_narrow_pane_ParamLimits

0xda14,	// (0x0004026a) vkb2_top_cell_right_narrow_pane

0xda2c,	// (0x00040282) vkb2_top_cell_right_wide_pane_ParamLimits

0xda2c,	// (0x00040282) vkb2_top_cell_right_wide_pane

0xccdb,	// (0x0003f531) bg_vkb2_func_pane_ParamLimits

0xccdb,	// (0x0003f531) bg_vkb2_func_pane

0xda9d,	// (0x000402f3) vkb2_top_cell_left_pane_g1_ParamLimits

0xccdb,	// (0x0003f531) bg_vkb2_fuc_pane_cp03_ParamLimits

0xccdb,	// (0x0003f531) bg_vkb2_fuc_pane_cp03

0xdafb,	// (0x00040351) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x35bb,	// (0x00035e11) bg_vkb2_func_pane_g1

0x35b3,	// (0x00035e09) bg_vkb2_func_pane_g2

0x35c3,	// (0x00035e19) bg_vkb2_func_pane_g3

0x35cb,	// (0x00035e21) bg_vkb2_func_pane_g4

0x35d3,	// (0x00035e29) bg_vkb2_func_pane_g5

0x35db,	// (0x00035e31) bg_vkb2_func_pane_g6

0x35eb,	// (0x00035e41) bg_vkb2_func_pane_g7

0x35e3,	// (0x00035e39) bg_vkb2_func_pane_g8

0x35ab,	// (0x00035e01) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x0004264f) bg_vkb2_func_pane_g

0xccdb,	// (0x0003f531) bg_vkb2_fuc_pane_cp01_ParamLimits

0xccdb,	// (0x0003f531) bg_vkb2_fuc_pane_cp01

0xda9d,	// (0x000402f3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xda9d,	// (0x000402f3) vkb2_top_cell_right_wide_pane_g1

0xccdb,	// (0x0003f531) bg_vkb2_fuc_pane_cp02_ParamLimits

0xccdb,	// (0x0003f531) bg_vkb2_fuc_pane_cp02

0xdafb,	// (0x00040351) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xdafb,	// (0x00040351) vkb2_top_cell_right_narrow_pane_g1

0x777e,	// (0x00039fd4) aid_touch_area_decrease_ParamLimits

0x777e,	// (0x00039fd4) aid_touch_area_decrease

0x7796,	// (0x00039fec) aid_touch_area_increase_ParamLimits

0x7796,	// (0x00039fec) aid_touch_area_increase

0x77a2,	// (0x00039ff8) aid_touch_area_mute_ParamLimits

0x77a2,	// (0x00039ff8) aid_touch_area_mute

0x77be,	// (0x0003a014) aid_touch_area_slider_ParamLimits

0x77be,	// (0x0003a014) aid_touch_area_slider

0x77f8,	// (0x0003a04e) popup_slider_window_g4_ParamLimits

0x77f8,	// (0x0003a04e) popup_slider_window_g4

0x7804,	// (0x0003a05a) popup_slider_window_g5_ParamLimits

0x7804,	// (0x0003a05a) popup_slider_window_g5

0x7826,	// (0x0003a07c) popup_slider_window_g6_ParamLimits

0x7826,	// (0x0003a07c) popup_slider_window_g6

0x6ea1,	// (0x000396f7) popup_slider_window_t2_ParamLimits

0x6ea1,	// (0x000396f7) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x0004254b) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x0004254b) popup_slider_window_t

0x7838,	// (0x0003a08e) slider_pane_ParamLimits

0x7838,	// (0x0003a08e) slider_pane

0xa0de,	// (0x0003c934) slider_pane_g1_ParamLimits

0xa0de,	// (0x0003c934) slider_pane_g1

0xa0f2,	// (0x0003c948) slider_pane_g2_ParamLimits

0xa0f2,	// (0x0003c948) slider_pane_g2

0xa108,	// (0x0003c95e) slider_pane_g3_ParamLimits

0xa108,	// (0x0003c95e) slider_pane_g3

0x0003,

0xfe0c,	// (0x00042662) slider_pane_g_ParamLimits

0xfe0c,	// (0x00042662) slider_pane_g

0xc76d,	// (0x0003efc3) popup_tb_float_extension_window_ParamLimits

0xc76d,	// (0x0003efc3) popup_tb_float_extension_window

0xa134,	// (0x0003c98a) aid_size_cell_tb_float_ext

0xf472,	// (0x00041cc8) bg_popup_sub_window_cp28

0xa13f,	// (0x0003c995) grid_tb_float_ext_pane

0xa147,	// (0x0003c99d) cell_tb_float_ext_pane_ParamLimits

0xa147,	// (0x0003c99d) cell_tb_float_ext_pane

0xa15f,	// (0x0003c9b5) cell_tb_float_ext_pane_g1

0xa168,	// (0x0003c9be) grid_highlight_pane_cp12

0xce24,	// (0x0003f67a) cell_last_hwr_side_pane_ParamLimits

0xce24,	// (0x0003f67a) cell_last_hwr_side_pane

0x5328,	// (0x00037b7e) cell_last_hwr_side_pane_g1

0xa171,	// (0x0003c9c7) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x0004266b) cell_last_hwr_side_pane_g

0xd991,	// (0x000401e7) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd991,	// (0x000401e7) vkb2_area_bottom_space_btn_pane

0xcf2e,	// (0x0003f784) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9c2e,	// (0x0003c484) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xdf64,	// (0x000407ba) cell_vkb2_top_candi_pane_t1_ParamLimits

0xdf95,	// (0x000407eb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xdf95,	// (0x000407eb) vkb2_area_bottom_space_btn_pane_g1

0xdfcb,	// (0x00040821) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xdfcb,	// (0x00040821) vkb2_area_bottom_space_btn_pane_g2

0xe001,	// (0x00040857) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe001,	// (0x00040857) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x00042670) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x00042670) vkb2_area_bottom_space_btn_pane_g

0xcd98,	// (0x0003f5ee) cel_fep_hwr_func_pane_ParamLimits

0xcd98,	// (0x0003f5ee) cel_fep_hwr_func_pane

0xcdd4,	// (0x0003f62a) cell_hwr_side_button_pane_ParamLimits

0xcdd4,	// (0x0003f62a) cell_hwr_side_button_pane

0x9677,	// (0x0003becd) aid_area_touch_clock_ParamLimits

0x029c,	// (0x00032af2) bg_uniindi_top_pane_ParamLimits

0x9689,	// (0x0003bedf) uniindi_top_pane_g1_ParamLimits

0x969f,	// (0x0003bef5) uniindi_top_pane_g2_ParamLimits

0x96ab,	// (0x0003bf01) uniindi_top_pane_g3_ParamLimits

0x96bc,	// (0x0003bf12) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x00042583) uniindi_top_pane_g_ParamLimits

0x96c9,	// (0x0003bf1f) uniindi_top_pane_t1_ParamLimits

0x029c,	// (0x00032af2) bg_vkb2_func_pane_cp01_ParamLimits

0x029c,	// (0x00032af2) bg_vkb2_func_pane_cp01

0xa17a,	// (0x0003c9d0) cel_fep_hwr_func_pane_g1_ParamLimits

0xa17a,	// (0x0003c9d0) cel_fep_hwr_func_pane_g1

0x029c,	// (0x00032af2) bg_vkb2_func_pane_cp02_ParamLimits

0x029c,	// (0x00032af2) bg_vkb2_func_pane_cp02

0xa17a,	// (0x0003c9d0) cell_hwr_side_button_pane_g1_ParamLimits

0xa17a,	// (0x0003c9d0) cell_hwr_side_button_pane_g1

0x34cf,	// (0x00035d25) status_pane_g4_ParamLimits

0x34cf,	// (0x00035d25) status_pane_g4

0x34e7,	// (0x00035d3d) status_pane_t1

0x512e,	// (0x00037984) form2_midp_gauge_slider_cont_pane

0x5136,	// (0x0003798c) form2_midp_gauge_slider_pane_t1_ParamLimits

0x72c9,	// (0x00039b1f) form2_midp_gauge_slider_pane_t2_ParamLimits

0x72db,	// (0x00039b31) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0004234a) form2_midp_gauge_slider_pane_t_ParamLimits

0x5148,	// (0x0003799e) form2_midp_slider_pane_ParamLimits

0xd64c,	// (0x0003fea2) aid_size_cell_func_vkb2_ParamLimits

0xd64c,	// (0x0003fea2) aid_size_cell_func_vkb2

0xa120,	// (0x0003c976) slider_pane_g4_ParamLimits

0xa120,	// (0x0003c976) slider_pane_g4

0xe047,	// (0x0004089d) form2_midp_gauge_slider_pane_t2_cp01

0xe055,	// (0x000408ab) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe055,	// (0x000408ab) form2_midp_gauge_slider_pane_t3_cp01

0xe072,	// (0x000408c8) form2_midp_slider_pane_cp01

0xf472,	// (0x00041cc8) navi_smil_pane

0xa1de,	// (0x0003ca34) navi_smil_pane_g1

0xa1e6,	// (0x0003ca3c) navi_smil_pane_t1

0xa1b3,	// (0x0003ca09) form2_midp_slider_pane_g1

0xa1bc,	// (0x0003ca12) form2_midp_slider_pane_g2

0xa1c4,	// (0x0003ca1a) form2_midp_slider_pane_g3

0xa1b3,	// (0x0003ca09) form2_midp_slider_pane_g4

0xe07b,	// (0x000408d1) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x00042679) form2_midp_slider_pane_g

0xe037,	// (0x0004088d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe037,	// (0x0004088d) vkb2_area_bottom_space_btn_pane_g4

0x61fd,	// (0x00038a53) lc0_navi_pane_ParamLimits

0x61fd,	// (0x00038a53) lc0_navi_pane

0x6273,	// (0x00038ac9) lc0_stat_indi_pane_ParamLimits

0x6273,	// (0x00038ac9) lc0_stat_indi_pane

0x628a,	// (0x00038ae0) ls0_title_pane_ParamLimits

0x628a,	// (0x00038ae0) ls0_title_pane

0x07c2,	// (0x00033018) bg_popup_sub_pane_cp14_ParamLimits

0x965e,	// (0x0003beb4) list_uniindi_pane_ParamLimits

0x966a,	// (0x0003bec0) uniindi_top_pane_ParamLimits

0x9705,	// (0x0003bf5b) list_single_uniindi_pane_g1_ParamLimits

0x9718,	// (0x0003bf6e) list_single_uniindi_pane_t1_ParamLimits

0xe084,	// (0x000408da) lc0_stat_clock_pane_ParamLimits

0xe084,	// (0x000408da) lc0_stat_clock_pane

0xe091,	// (0x000408e7) lc0_stat_indi_pane_g1_ParamLimits

0xe091,	// (0x000408e7) lc0_stat_indi_pane_g1

0xe09e,	// (0x000408f4) lc0_stat_indi_pane_g2_ParamLimits

0xe09e,	// (0x000408f4) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x00042684) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x00042684) lc0_stat_indi_pane_g

0xe0ab,	// (0x00040901) lc0_uni_indicator_pane_ParamLimits

0xe0ab,	// (0x00040901) lc0_uni_indicator_pane

0xa228,	// (0x0003ca7e) ls0_title_pane_g1_ParamLimits

0xa228,	// (0x0003ca7e) ls0_title_pane_g1

0xe0b8,	// (0x0004090e) ls0_title_pane_t1_ParamLimits

0xe0b8,	// (0x0004090e) ls0_title_pane_t1

0xe0ee,	// (0x00040944) lc0_uni_indicator_pane_g1_ParamLimits

0xe0ee,	// (0x00040944) lc0_uni_indicator_pane_g1

0xa9a3,	// (0x0003d1f9) lc0_stat_clock_pane_t1

0xbb89,	// (0x0003e3df) main_ai5_pane

0xa9b1,	// (0x0003d207) ai5_sk_pane_ParamLimits

0xa9b1,	// (0x0003d207) ai5_sk_pane

0xe100,	// (0x00040956) cell_ai5_widget_pane_ParamLimits

0xe100,	// (0x00040956) cell_ai5_widget_pane

0xa9be,	// (0x0003d214) aid_size_cell_widget_grid

0xa9cb,	// (0x0003d221) bg_ai5_widget_pane_ParamLimits

0xa9cb,	// (0x0003d221) bg_ai5_widget_pane

0xe193,	// (0x000409e9) cell_ai5_widget_pane_g2

0xe1a7,	// (0x000409fd) cell_ai5_widget_pane_g3

0xe1c1,	// (0x00040a17) cell_ai5_widget_pane_g4

0xe1d1,	// (0x00040a27) cell_ai5_widget_pane_g5

0xe1e1,	// (0x00040a37) cell_ai5_widget_pane_g6

0xe1ed,	// (0x00040a43) cell_ai5_widget_pane_g7

0xe235,	// (0x00040a8b) cell_ai5_widget_pane_t1_ParamLimits

0xe235,	// (0x00040a8b) cell_ai5_widget_pane_t1

0xe252,	// (0x00040aa8) cell_ai5_widget_pane_t2_ParamLimits

0xe252,	// (0x00040aa8) cell_ai5_widget_pane_t2

0xe26a,	// (0x00040ac0) cell_ai5_widget_pane_t3_ParamLimits

0xe26a,	// (0x00040ac0) cell_ai5_widget_pane_t3

0xe282,	// (0x00040ad8) cell_ai5_widget_pane_t4_ParamLimits

0xe282,	// (0x00040ad8) cell_ai5_widget_pane_t4

0xe2a8,	// (0x00040afe) cell_ai5_widget_pane_t5_ParamLimits

0xe2a8,	// (0x00040afe) cell_ai5_widget_pane_t5

0xaa03,	// (0x0003d259) cell_ai5_widget_pane_t6_ParamLimits

0xaa03,	// (0x0003d259) cell_ai5_widget_pane_t6

0xaa15,	// (0x0003d26b) cell_ai5_widget_pane_t7_ParamLimits

0xaa15,	// (0x0003d26b) cell_ai5_widget_pane_t7

0xe2c7,	// (0x00040b1d) cell_ai5_widget_pane_t8_ParamLimits

0xe2c7,	// (0x00040b1d) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x0004269e) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x0004269e) cell_ai5_widget_pane_t

0xe326,	// (0x00040b7c) grid_ai5_widget_pane

0x07c2,	// (0x00033018) highlight_cell_ai5_widget_pane_ParamLimits

0x07c2,	// (0x00033018) highlight_cell_ai5_widget_pane

0xe332,	// (0x00040b88) ai5_sk_left_pane

0xe33c,	// (0x00040b92) ai5_sk_middle_pane

0xe346,	// (0x00040b9c) ai5_sk_right_pane

0xaa2e,	// (0x0003d284) bg_ai5_widget_pane_g1_ParamLimits

0xaa2e,	// (0x0003d284) bg_ai5_widget_pane_g1

0xaa3a,	// (0x0003d290) bg_ai5_widget_pane_g2_ParamLimits

0xaa3a,	// (0x0003d290) bg_ai5_widget_pane_g2

0xaa46,	// (0x0003d29c) bg_ai5_widget_pane_g3_ParamLimits

0xaa46,	// (0x0003d29c) bg_ai5_widget_pane_g3

0xaa52,	// (0x0003d2a8) bg_ai5_widget_pane_g4_ParamLimits

0xaa52,	// (0x0003d2a8) bg_ai5_widget_pane_g4

0xaa5e,	// (0x0003d2b4) bg_ai5_widget_pane_g5_ParamLimits

0xaa5e,	// (0x0003d2b4) bg_ai5_widget_pane_g5

0xaa6a,	// (0x0003d2c0) bg_ai5_widget_pane_g6_ParamLimits

0xaa6a,	// (0x0003d2c0) bg_ai5_widget_pane_g6

0xaa76,	// (0x0003d2cc) bg_ai5_widget_pane_g7_ParamLimits

0xaa76,	// (0x0003d2cc) bg_ai5_widget_pane_g7

0xaa82,	// (0x0003d2d8) bg_ai5_widget_pane_g8_ParamLimits

0xaa82,	// (0x0003d2d8) bg_ai5_widget_pane_g8

0xaa8e,	// (0x0003d2e4) bg_ai5_widget_pane_g9_ParamLimits

0xaa8e,	// (0x0003d2e4) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x000426b3) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x000426b3) bg_ai5_widget_pane_g

0xaabe,	// (0x0003d314) cell_shortcut_ai5_widget_pane_ParamLimits

0xaabe,	// (0x0003d314) cell_shortcut_ai5_widget_pane

0xaacf,	// (0x0003d325) bg_cell_shortcut_ai5_widget_pane

0x0456,	// (0x00032cac) cell_grid_ai5_widget_pane_g1

0x3213,	// (0x00035a69) highlight_cell_shortcut_ai5_widget_pane

0x35bb,	// (0x00035e11) ai5_sk_left_pane_g1

0xaad7,	// (0x0003d32d) ai5_sk_left_pane_g2

0xaadf,	// (0x0003d335) ai5_sk_left_pane_g3

0xaae7,	// (0x0003d33d) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x000426c6) ai5_sk_left_pane_g

0xaaef,	// (0x0003d345) ai5_sk_left_pane_t1

0x35b3,	// (0x00035e09) ai5_sk_right_pane_g1

0xaafd,	// (0x0003d353) ai5_sk_right_pane_g2

0xab05,	// (0x0003d35b) ai5_sk_right_pane_g3

0xab0d,	// (0x0003d363) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x000426cf) ai5_sk_right_pane_g

0xab15,	// (0x0003d36b) ai5_sk_right_pane_t1

0x35b3,	// (0x00035e09) ai5_sk_middle_pane_g1

0x35bb,	// (0x00035e11) ai5_sk_middle_pane_g2

0x35d3,	// (0x00035e29) ai5_sk_middle_pane_g3

0xab05,	// (0x0003d35b) ai5_sk_middle_pane_g4

0xaadf,	// (0x0003d335) ai5_sk_middle_pane_g5

0xab23,	// (0x0003d379) ai5_sk_middle_pane_g6

0xe350,	// (0x00040ba6) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x000426d8) ai5_sk_middle_pane_g

0x614a,	// (0x000389a0) aid_touch_area_size_lc0_ParamLimits

0x614a,	// (0x000389a0) aid_touch_area_size_lc0

0xcf5d,	// (0x0003f7b3) cell_hwr_candidate_pane_t1_ParamLimits

0x33f8,	// (0x00035c4e) aid_touch_navi_pane

0x635c,	// (0x00038bb2) status_dt_navi_pane_ParamLimits

0x635c,	// (0x00038bb2) status_dt_navi_pane

0x6369,	// (0x00038bbf) status_dt_sta_pane_ParamLimits

0x6369,	// (0x00038bbf) status_dt_sta_pane

0xe358,	// (0x00040bae) dt_sta_controll_pane

0xe365,	// (0x00040bbb) dt_sta_indi_pane

0xe376,	// (0x00040bcc) dt_sta_title_pane

0x029c,	// (0x00032af2) bg_dt_sta_indi_pane_ParamLimits

0x029c,	// (0x00032af2) bg_dt_sta_indi_pane

0xe389,	// (0x00040bdf) dt_sta_battery_pane

0xe391,	// (0x00040be7) dt_sta_indi_pane_g1

0xe39a,	// (0x00040bf0) dt_sta_indi_pane_g2

0xe3a3,	// (0x00040bf9) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x000426e7) dt_sta_indi_pane_g

0xe3ac,	// (0x00040c02) dt_sta_signal_pane

0x07c2,	// (0x00033018) bg_dt_sta_title_pane_ParamLimits

0x07c2,	// (0x00033018) bg_dt_sta_title_pane

0xe3b5,	// (0x00040c0b) dt_sta_title_pane_g1

0xe3bd,	// (0x00040c13) dt_sta_title_pane_t1_ParamLimits

0xe3bd,	// (0x00040c13) dt_sta_title_pane_t1

0xf472,	// (0x00041cc8) bg_dt_sta_control_pane

0xe3d2,	// (0x00040c28) dt_sta_controll_pane_g1

0xe3db,	// (0x00040c31) bg_dt_sta_title_pane_g1

0xe3e4,	// (0x00040c3a) bg_dt_sta_title_pane_g2

0xe3ed,	// (0x00040c43) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x000426ee) bg_dt_sta_title_pane_g

0x5328,	// (0x00037b7e) bg_dt_sta_indi_pane_g1

0xe3f6,	// (0x00040c4c) dt_sta_signal_pane_g1

0xe3fe,	// (0x00040c54) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x000426f5) dt_sta_signal_pane_g

0xab2b,	// (0x0003d381) dt_sta_battery_pane_g1

0xab34,	// (0x0003d38a) dt_sta_battery_pane_t1

0x5328,	// (0x00037b7e) bg_dt_sta_control_pane_g1

0x2de3,	// (0x00035639) fep_china_uni_eep_pane

0x2deb,	// (0x00035641) fep_china_uni_entry_pane_ParamLimits

0x2dfb,	// (0x00035651) popup_fep_china_uni_window_g1_ParamLimits

0x2e0b,	// (0x00035661) popup_fep_china_uni_window_g2_ParamLimits

0x2e0b,	// (0x00035661) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00041f78) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00041f78) popup_fep_china_uni_window_g

0xab43,	// (0x0003d399) fep_china_uni_eep_pane_g1

0xab4b,	// (0x0003d3a1) fep_china_uni_eep_pane_t1

0xa1d5,	// (0x0003ca2b) aid_touch_area_size_smil_player

0x3496,	// (0x00035cec) lc0_clock_pane

0x34db,	// (0x00035d31) status_pane_g5_ParamLimits

0x34db,	// (0x00035d31) status_pane_g5

0xc4e1,	// (0x0003ed37) popup_keymap_window

0x34af,	// (0x00035d05) status_icon_pane

0xe1a7,	// (0x000409fd) cell_ai5_widget_pane_g3_ParamLimits

0xe1c1,	// (0x00040a17) cell_ai5_widget_pane_g4_ParamLimits

0xe1d1,	// (0x00040a27) cell_ai5_widget_pane_g5_ParamLimits

0xe1f9,	// (0x00040a4f) cell_ai5_widget_pane_g8_ParamLimits

0xe1f9,	// (0x00040a4f) cell_ai5_widget_pane_g8

0xe20d,	// (0x00040a63) cell_ai5_widget_pane_g9_ParamLimits

0xe20d,	// (0x00040a63) cell_ai5_widget_pane_g9

0xe221,	// (0x00040a77) cell_ai5_widget_pane_g10_ParamLimits

0xe221,	// (0x00040a77) cell_ai5_widget_pane_g10

0xab5a,	// (0x0003d3b0) status_icon_pane_g1

0xf472,	// (0x00041cc8) bg_popup_sub_pane_cp13

0xab62,	// (0x0003d3b8) popup_keymap_window_t1

0x6115,	// (0x0003896b) control_pane_g6_ParamLimits

0x6115,	// (0x0003896b) control_pane_g6

0x6108,	// (0x0003895e) control_pane_g7_ParamLimits

0x6108,	// (0x0003895e) control_pane_g7

0x60fb,	// (0x00038951) control_pane_g8_ParamLimits

0x60fb,	// (0x00038951) control_pane_g8

0xe358,	// (0x00040bae) dt_sta_controll_pane_ParamLimits

0xe365,	// (0x00040bbb) dt_sta_indi_pane_ParamLimits

0xe376,	// (0x00040bcc) dt_sta_title_pane_ParamLimits

0x0654,	// (0x00032eaa) aid_size_touch_scroll_bar_cale

0xbc60,	// (0x0003e4b6) popup_discreet_window_ParamLimits

0xbc60,	// (0x0003e4b6) popup_discreet_window

0xbcc4,	// (0x0003e51a) popup_sk_window

0x3b6b,	// (0x000363c1) bg_popup_sub_pane_cp28_ParamLimits

0x3b6b,	// (0x000363c1) bg_popup_sub_pane_cp28

0xab70,	// (0x0003d3c6) popup_discreet_window_g1_ParamLimits

0xab70,	// (0x0003d3c6) popup_discreet_window_g1

0xab90,	// (0x0003d3e6) popup_discreet_window_t1_ParamLimits

0xab90,	// (0x0003d3e6) popup_discreet_window_t1

0xabae,	// (0x0003d404) popup_discreet_window_t2_ParamLimits

0xabae,	// (0x0003d404) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x000426fa) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x000426fa) popup_discreet_window_t

0xe406,	// (0x00040c5c) popup_sk_window_g1

0xe40f,	// (0x00040c65) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00042701) popup_sk_window_g

0xe418,	// (0x00040c6e) popup_sk_window_t1

0xe426,	// (0x00040c7c) popup_sk_window_t1_copy1

0xe193,	// (0x000409e9) cell_ai5_widget_pane_g2_ParamLimits

0xe2d9,	// (0x00040b2f) cell_ai5_widget_pane_t9_ParamLimits

0xe2d9,	// (0x00040b2f) cell_ai5_widget_pane_t9

0xf472,	// (0x00041cc8) main_fep_fshwr2_pane

0xe434,	// (0x00040c8a) aid_fshwr2_btn_pane

0xe440,	// (0x00040c96) aid_fshwr2_syb_pane

0xe44c,	// (0x00040ca2) aid_fshwr2_txt_pane

0xe458,	// (0x00040cae) fshwr2_func_candi_pane

0xe469,	// (0x00040cbf) fshwr2_hwr_syb_pane

0xe475,	// (0x00040ccb) fshwr2_icf_pane

0xbb89,	// (0x0003e3df) fshwr2_icf_bg_pane

0xe49a,	// (0x00040cf0) fshwr2_icf_pane_t1_ParamLimits

0xe49a,	// (0x00040cf0) fshwr2_icf_pane_t1

0x2d81,	// (0x000355d7) fshwr2_func_candi_pane_g1

0xe4b2,	// (0x00040d08) fshwr2_func_candi_row_pane_ParamLimits

0xe4b2,	// (0x00040d08) fshwr2_func_candi_row_pane

0xe4c2,	// (0x00040d18) cell_fshwr2_syb_pane_ParamLimits

0xe4c2,	// (0x00040d18) cell_fshwr2_syb_pane

0xcf2e,	// (0x0003f784) fshwr2_hwr_syb_pane_g1_ParamLimits

0xcf2e,	// (0x0003f784) fshwr2_hwr_syb_pane_g1

0xbb89,	// (0x0003e3df) bg_popup_call_pane_cp01

0xe4d6,	// (0x00040d2c) fshwr2_func_candi_cell_pane_ParamLimits

0xe4d6,	// (0x00040d2c) fshwr2_func_candi_cell_pane

0x4153,	// (0x000369a9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x4153,	// (0x000369a9) fshwr2_func_candi_cell_bg_pane

0xe515,	// (0x00040d6b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe515,	// (0x00040d6b) fshwr2_func_candi_cell_pane_g1

0xe535,	// (0x00040d8b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe535,	// (0x00040d8b) fshwr2_func_candi_cell_pane_t1

0xbb89,	// (0x0003e3df) bg_button_pane_cp08

0x3213,	// (0x00035a69) cell_fshwr2_syb_bg_pane

0xe548,	// (0x00040d9e) cell_fshwr2_syb_bg_pane_g1

0xe550,	// (0x00040da6) cell_fshwr2_syb_bg_pane_t1

0x07c2,	// (0x00033018) main_tmo_pane

0x6561,	// (0x00038db7) uni_indicator_pane_g1_ParamLimits

0x6577,	// (0x00038dcd) uni_indicator_pane_g2_ParamLimits

0x658d,	// (0x00038de3) uni_indicator_pane_g3_ParamLimits

0x452c,	// (0x00036d82) uni_indicator_pane_g4_ParamLimits

0x452c,	// (0x00036d82) uni_indicator_pane_g4

0x4540,	// (0x00036d96) uni_indicator_pane_g5_ParamLimits

0x4540,	// (0x00036d96) uni_indicator_pane_g5

0x4540,	// (0x00036d96) uni_indicator_pane_g6_ParamLimits

0x4540,	// (0x00036d96) uni_indicator_pane_g6

0xf921,	// (0x00042177) uni_indicator_pane_g_ParamLimits

0x7762,	// (0x00039fb8) popup_tmo_note_window_ParamLimits

0x7762,	// (0x00039fb8) popup_tmo_note_window

0xd1c1,	// (0x0003fa17) fshwr2_bg_pane

0xe526,	// (0x00040d7c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe526,	// (0x00040d7c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x00042706) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x00042706) fshwr2_func_candi_cell_pane_g

0xcf16,	// (0x0003f76c) bg_popup_window_pane_cp01

0xe55f,	// (0x00040db5) bg_popup_window_pane_g1_cp01

0xac00,	// (0x0003d456) bg_popup_window_pane_cp22_ParamLimits

0xac00,	// (0x0003d456) bg_popup_window_pane_cp22

0xac0e,	// (0x0003d464) listscroll_tmo_link_pane_ParamLimits

0xac0e,	// (0x0003d464) listscroll_tmo_link_pane

0xac4e,	// (0x0003d4a4) popup_tmo_note_window_g1_ParamLimits

0xac4e,	// (0x0003d4a4) popup_tmo_note_window_g1

0xac5b,	// (0x0003d4b1) tmo_note_info_pane_ParamLimits

0xac5b,	// (0x0003d4b1) tmo_note_info_pane

0x27ca,	// (0x00035020) list_tmo_note_info_pane_g1_ParamLimits

0x27ca,	// (0x00035020) list_tmo_note_info_pane_g1

0xac75,	// (0x0003d4cb) list_tmo_note_info_pane_g2_ParamLimits

0xac75,	// (0x0003d4cb) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x0004270b) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x0004270b) list_tmo_note_info_pane_g

0xac91,	// (0x0003d4e7) list_tmo_note_info_text_pane_ParamLimits

0xac91,	// (0x0003d4e7) list_tmo_note_info_text_pane

0xacd3,	// (0x0003d529) list_tmo_link_pane

0xace0,	// (0x0003d536) scroll_pane_cp20

0xaced,	// (0x0003d543) list_single_tmo_link_pane_ParamLimits

0xaced,	// (0x0003d543) list_single_tmo_link_pane

0xacfd,	// (0x0003d553) list_single_tmo_link_pane_t1

0xad0b,	// (0x0003d561) list_tmo_note_info_text_pane_t1_ParamLimits

0xad0b,	// (0x0003d561) list_tmo_note_info_text_pane_t1

0x0870,	// (0x000330c6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0870,	// (0x000330c6) aid_size_touch_scroll_bar_cp01

0xec9a,	// (0x000414f0) aid_size_touch_slider_marker

0xbcb0,	// (0x0003e506) popup_settings_window_ParamLimits

0xbcb0,	// (0x0003e506) popup_settings_window

0xee48,	// (0x0004169e) popup_candi_list_indi_window

0x33f8,	// (0x00035c4e) aid_touch_navi_pane_ParamLimits

0xd11d,	// (0x0003f973) rs_clock_indi_pane

0xd126,	// (0x0003f97c) sctrl_sk_bottom_pane_ParamLimits

0xd137,	// (0x0003f98d) sctrl_sk_top_pane_ParamLimits

0xd6a6,	// (0x0003fefc) popup_fep_tooltip_window

0xa9be,	// (0x0003d214) aid_size_cell_widget_grid_ParamLimits

0xe17f,	// (0x000409d5) cell_ai5_widget_pane_g1_ParamLimits

0xe17f,	// (0x000409d5) cell_ai5_widget_pane_g1

0xe1e1,	// (0x00040a37) cell_ai5_widget_pane_g6_ParamLimits

0xe1ed,	// (0x00040a43) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x00042689) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x00042689) cell_ai5_widget_pane_g

0xe308,	// (0x00040b5e) cell_ai5_widget_pane_t10_ParamLimits

0xe308,	// (0x00040b5e) cell_ai5_widget_pane_t10

0xe326,	// (0x00040b7c) grid_ai5_widget_pane_ParamLimits

0xaa9a,	// (0x0003d2f0) cell_contacts_ai5_widget_pane_ParamLimits

0xaa9a,	// (0x0003d2f0) cell_contacts_ai5_widget_pane

0xabc3,	// (0x0003d419) popup_discreet_window_t3_ParamLimits

0xabc3,	// (0x0003d419) popup_discreet_window_t3

0xe488,	// (0x00040cde) popup_fshwr2_char_preview_window_ParamLimits

0xe488,	// (0x00040cde) popup_fshwr2_char_preview_window

0x27e1,	// (0x00035037) tmo_note_info_pane_t1

0x27f6,	// (0x0003504c) tmo_note_info_pane_t2

0x280b,	// (0x00035061) tmo_note_info_pane_t3

0xacaf,	// (0x0003d505) tmo_note_info_pane_t4

0xacc1,	// (0x0003d517) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x00042710) tmo_note_info_pane_t

0xacd3,	// (0x0003d529) list_tmo_link_pane_ParamLimits

0xace0,	// (0x0003d536) scroll_pane_cp20_ParamLimits

0xbb89,	// (0x0003e3df) bg_popup_fep_char_preview_window_cp01

0xad24,	// (0x0003d57a) popup_fshwr2_char_preview_window_t1

0xad32,	// (0x0003d588) popup_candi_list_indi_window_g1

0xad3b,	// (0x0003d591) bg_cell_contacts_ai5_widget_pane

0xad47,	// (0x0003d59d) cell_contacts_ai5_widget_pane_g1

0xad5c,	// (0x0003d5b2) cell_contacts_ai5_widget_pane_g2

0xad68,	// (0x0003d5be) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x0004271b) cell_contacts_ai5_widget_pane_g

0xad74,	// (0x0003d5ca) cell_contacts_ai5_widget_pane_t1

0x07c2,	// (0x00033018) highlight_cell_shortcut_ai5_widget_pane_cp01

0x2883,	// (0x000350d9) settings_container_pane

0x3213,	// (0x00035a69) listscroll_set_pane_copy1

0x4c64,	// (0x000374ba) scroll_pane_cp121_copy1

0xad86,	// (0x0003d5dc) set_content_pane_copy1

0xad8e,	// (0x0003d5e4) aid_height_set_list_copy1_ParamLimits

0xad8e,	// (0x0003d5e4) aid_height_set_list_copy1

0x46d9,	// (0x00036f2f) aid_size_parent_copy1_ParamLimits

0x46d9,	// (0x00036f2f) aid_size_parent_copy1

0xad9a,	// (0x0003d5f0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xad9a,	// (0x0003d5f0) button_value_adjust_pane_cp6_copy1

0x10b2,	// (0x00033908) list_highlight_pane_cp2_copy1_ParamLimits

0x10b2,	// (0x00033908) list_highlight_pane_cp2_copy1

0x288f,	// (0x000350e5) list_set_pane_copy1_ParamLimits

0x288f,	// (0x000350e5) list_set_pane_copy1

0x2820,	// (0x00035076) main_pane_set_t1_copy1_ParamLimits

0x2820,	// (0x00035076) main_pane_set_t1_copy1

0x285a,	// (0x000350b0) main_pane_set_t2_copy1_ParamLimits

0x285a,	// (0x000350b0) main_pane_set_t2_copy1

0xadae,	// (0x0003d604) main_pane_set_t3_copy1

0xadbc,	// (0x0003d612) main_pane_set_t4_copy1

0x2877,	// (0x000350cd) set_content_pane_g1_copy1_ParamLimits

0x2877,	// (0x000350cd) set_content_pane_g1_copy1

0xadca,	// (0x0003d620) setting_code_pane_copy1

0xadd2,	// (0x0003d628) setting_slider_graphic_pane_copy1

0xadd2,	// (0x0003d628) setting_slider_pane_copy1

0xadd2,	// (0x0003d628) setting_text_pane_copy1

0xadd2,	// (0x0003d628) setting_volume_pane_copy1

0xadda,	// (0x0003d630) settings_code_pane_cp2_copy1

0xade2,	// (0x0003d638) settings_code_pane_cp_copy1_ParamLimits

0xade2,	// (0x0003d638) settings_code_pane_cp_copy1

0xe568,	// (0x00040dbe) volume_set_pane_copy1

0x2925,	// (0x0003517b) volume_set_pane_g10_copy1

0x292d,	// (0x00035183) volume_set_pane_g1_copy1

0x2935,	// (0x0003518b) volume_set_pane_g2_copy1

0x293d,	// (0x00035193) volume_set_pane_g3_copy1

0x2945,	// (0x0003519b) volume_set_pane_g4_copy1

0x294d,	// (0x000351a3) volume_set_pane_g5_copy1

0x2955,	// (0x000351ab) volume_set_pane_g6_copy1

0x295d,	// (0x000351b3) volume_set_pane_g7_copy1

0x2965,	// (0x000351bb) volume_set_pane_g8_copy1

0x296d,	// (0x000351c3) volume_set_pane_g9_copy1

0x00c9,	// (0x0003291f) bg_set_opt_pane_cp_copy1_ParamLimits

0x00c9,	// (0x0003291f) bg_set_opt_pane_cp_copy1

0xbd9a,	// (0x0003e5f0) setting_slider_pane_t1_copy1_ParamLimits

0xbd9a,	// (0x0003e5f0) setting_slider_pane_t1_copy1

0xe570,	// (0x00040dc6) setting_slider_pane_t2_copy1_ParamLimits

0xe570,	// (0x00040dc6) setting_slider_pane_t2_copy1

0xe589,	// (0x00040ddf) setting_slider_pane_t3_copy1_ParamLimits

0xe589,	// (0x00040ddf) setting_slider_pane_t3_copy1

0xbde0,	// (0x0003e636) slider_set_pane_copy1_ParamLimits

0xbde0,	// (0x0003e636) slider_set_pane_copy1

0x0811,	// (0x00033067) set_opt_bg_pane_g1_copy2

0x0819,	// (0x0003306f) set_opt_bg_pane_g2_copy2

0xadf6,	// (0x0003d64c) set_opt_bg_pane_g3_copy2

0x0829,	// (0x0003307f) set_opt_bg_pane_g4_copy2

0x0831,	// (0x00033087) set_opt_bg_pane_g5_copy2

0x0839,	// (0x0003308f) set_opt_bg_pane_g6_copy2

0x29a5,	// (0x000351fb) set_opt_bg_pane_g7_copy2

0xadfe,	// (0x0003d654) set_opt_bg_pane_g8_copy2

0xae06,	// (0x0003d65c) set_opt_bg_pane_g9_copy2

0xcb01,	// (0x0003f357) aid_size_touch_slider_mark_copy1_ParamLimits

0xcb01,	// (0x0003f357) aid_size_touch_slider_mark_copy1

0x46eb,	// (0x00036f41) slider_set_pane_g1_copy1

0x470d,	// (0x00036f63) slider_set_pane_g2_copy1

0xcb21,	// (0x0003f377) slider_set_pane_g3_copy1_ParamLimits

0xcb21,	// (0x0003f377) slider_set_pane_g3_copy1

0xcb35,	// (0x0003f38b) slider_set_pane_g4_copy1_ParamLimits

0xcb35,	// (0x0003f38b) slider_set_pane_g4_copy1

0xcb4d,	// (0x0003f3a3) slider_set_pane_g5_copy1_ParamLimits

0xcb4d,	// (0x0003f3a3) slider_set_pane_g5_copy1

0xcb21,	// (0x0003f377) slider_set_pane_g6_copy1_ParamLimits

0xcb21,	// (0x0003f377) slider_set_pane_g6_copy1

0xe5a0,	// (0x00040df6) slider_set_pane_g7_copy1_ParamLimits

0xe5a0,	// (0x00040df6) slider_set_pane_g7_copy1

0xf544,	// (0x00041d9a) bg_set_opt_pane_cp2_copy1

0x0143,	// (0x00032999) setting_slider_graphic_pane_g1_copy1

0xe5b6,	// (0x00040e0c) setting_slider_graphic_pane_t1_copy1

0xe5c5,	// (0x00040e1b) setting_slider_graphic_pane_t2_copy1

0xe5d4,	// (0x00040e2a) slider_set_pane_cp_copy1

0xae16,	// (0x0003d66c) input_focus_pane_cp1_copy1

0xae1f,	// (0x0003d675) list_set_text_pane_copy1

0xae27,	// (0x0003d67d) setting_text_pane_g1_copy1

0xf52c,	// (0x00041d82) set_text_pane_t1_copy1

0xae16,	// (0x0003d66c) input_focus_pane_cp2_copy1

0xae27,	// (0x0003d67d) setting_code_pane_g1_copy1

0xae30,	// (0x0003d686) setting_code_pane_t1_copy1

0x29e9,	// (0x0003523f) list_set_graphic_pane_copy1

0xf544,	// (0x00041d9a) bg_set_opt_pane_cp4_copy1

0xae3e,	// (0x0003d694) list_set_graphic_pane_g1_copy1_ParamLimits

0xae3e,	// (0x0003d694) list_set_graphic_pane_g1_copy1

0xae4a,	// (0x0003d6a0) list_set_graphic_pane_g2_copy1

0x2f8e,	// (0x000357e4) list_set_graphic_pane_t1_copy1_ParamLimits

0x2f8e,	// (0x000357e4) list_set_graphic_pane_t1_copy1

0x5328,	// (0x00037b7e) rs_clock_indi_pane_g1

0xae52,	// (0x0003d6a8) rs_clock_indi_pane_t1

0xae60,	// (0x0003d6b6) rs_indi_pane

0xae68,	// (0x0003d6be) rs_indi_pane_g1

0xae71,	// (0x0003d6c7) rs_indi_pane_g2

0xad32,	// (0x0003d588) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x00042722) rs_indi_pane_g

0x3213,	// (0x00035a69) bg_popup_preview_window_pane_cp03

0xae7a,	// (0x0003d6d0) popup_fep_tooltip_window_t1

0x67a4,	// (0x00038ffa) popup_note2_window_g2_ParamLimits

0x67a4,	// (0x00038ffa) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x000424c2) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x000424c2) popup_note2_window_g

0x6c1f,	// (0x00039475) bg_popup_sub_pane_cp11_ParamLimits

0x6c2c,	// (0x00039482) cell_ai3_links_pane_g1_ParamLimits

0x6c43,	// (0x00039499) cell_ai3_links_pane_t1

0xf52c,	// (0x00041d82) set_text_pane_t1_copy1_ParamLimits

0x313a,	// (0x00035990) cell_graphic_popup_pane_cp2_ParamLimits

0x313a,	// (0x00035990) cell_graphic_popup_pane_cp2

0xae88,	// (0x0003d6de) cell_graphic_popup_pane_g1_cp2

0x0503,	// (0x00032d59) cell_graphic_popup_pane_g2_cp2

0xae90,	// (0x0003d6e6) cell_graphic_popup_pane_g3_cp2

0xae98,	// (0x0003d6ee) cell_graphic_popup_pane_t2_cp2

0x0514,	// (0x00032d6a) grid_highlight_pane_cp3_cp2

0x0c1f,	// (0x00033475) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x07c2,	// (0x00033018) main_tmo_pane_ParamLimits

0x775a,	// (0x00039fb0) popup_tmo_big_image_note_window

0xa9fb,	// (0x0003d251) cell_ai5_widget_list_pane

0xe176,	// (0x000409cc) cell_ai5_widget_lrg_icon_pane

0x27e1,	// (0x00035037) tmo_note_info_pane_t1_ParamLimits

0x27f6,	// (0x0003504c) tmo_note_info_pane_t2_ParamLimits

0x280b,	// (0x00035061) tmo_note_info_pane_t3_ParamLimits

0xacaf,	// (0x0003d505) tmo_note_info_pane_t4_ParamLimits

0xacc1,	// (0x0003d517) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x00042710) tmo_note_info_pane_t_ParamLimits

0x2883,	// (0x000350d9) settings_container_pane_ParamLimits

0xae0e,	// (0x0003d664) indicator_popup_pane_cp5

0xae0e,	// (0x0003d664) indicator_popup_pane_cp6

0x29e9,	// (0x0003523f) list_set_graphic_pane_copy1_ParamLimits

0xf472,	// (0x00041cc8) bg_popup_window_pane_cp23

0xaea6,	// (0x0003d6fc) popup_tmo_big_image_note_window_g1

0xaeaf,	// (0x0003d705) popup_tmo_big_image_note_window_t1

0xaebd,	// (0x0003d713) popup_tmo_big_image_note_window_t2

0xaecb,	// (0x0003d721) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x00042729) popup_tmo_big_image_note_window_t

0x5328,	// (0x00037b7e) cell_ai5_widget_lrg_icon_pane_g1

0xaed9,	// (0x0003d72f) cell_ai5_widget_lrg_icon_pane_t1

0x29fd,	// (0x00035253) cell_ai5_widget_list_row_pane_ParamLimits

0x29fd,	// (0x00035253) cell_ai5_widget_list_row_pane

0x2a14,	// (0x0003526a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2a14,	// (0x0003526a) cell_ai5_widget_list_row_pane_g1

0x2a21,	// (0x00035277) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2a21,	// (0x00035277) cell_ai5_widget_list_row_pane_t1

0x2a4f,	// (0x000352a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x2a4f,	// (0x000352a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x00042730) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x00042730) cell_ai5_widget_list_row_pane_t

0xbb89,	// (0x0003e3df) main_fep_vtchi_ss_pane

0xaf07,	// (0x0003d75d) popup_fep_char_pre_window

0xaf0f,	// (0x0003d765) popup_fep_ituss_window

0x2a77,	// (0x000352cd) popup_fep_vkbss_window

0xaf42,	// (0x0003d798) grid_vkbss_keypad_pane_ParamLimits

0xaf42,	// (0x0003d798) grid_vkbss_keypad_pane

0xaf52,	// (0x0003d7a8) ituss_keypad_pane

0xe5e6,	// (0x00040e3c) aid_vkbss_key_offset_ParamLimits

0xe5e6,	// (0x00040e3c) aid_vkbss_key_offset

0xe5f2,	// (0x00040e48) cell_vkbss_key_pane_ParamLimits

0xe5f2,	// (0x00040e48) cell_vkbss_key_pane

0x34b7,	// (0x00035d0d) bg_cell_vkbss_key_g1_ParamLimits

0x34b7,	// (0x00035d0d) bg_cell_vkbss_key_g1

0xaf61,	// (0x0003d7b7) cell_vkbss_key_3p_pane_ParamLimits

0xaf61,	// (0x0003d7b7) cell_vkbss_key_3p_pane

0xaf7b,	// (0x0003d7d1) cell_vkbss_key_g1_ParamLimits

0xaf7b,	// (0x0003d7d1) cell_vkbss_key_g1

0xaf95,	// (0x0003d7eb) cell_vkbss_key_t1_ParamLimits

0xaf95,	// (0x0003d7eb) cell_vkbss_key_t1

0xe608,	// (0x00040e5e) cell_ituss_key_pane_ParamLimits

0xe608,	// (0x00040e5e) cell_ituss_key_pane

0xafc0,	// (0x0003d816) bg_cell_ituss_key_g1_ParamLimits

0xafc0,	// (0x0003d816) bg_cell_ituss_key_g1

0xafcc,	// (0x0003d822) cell_ituss_key_pane_g1_ParamLimits

0xafcc,	// (0x0003d822) cell_ituss_key_pane_g1

0xe619,	// (0x00040e6f) cell_ituss_key_pane_g2_ParamLimits

0xe619,	// (0x00040e6f) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x00042737) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x00042737) cell_ituss_key_pane_g

0xe641,	// (0x00040e97) cell_ituss_key_t1_ParamLimits

0xe641,	// (0x00040e97) cell_ituss_key_t1

0xe67b,	// (0x00040ed1) cell_ituss_key_t2_ParamLimits

0xe67b,	// (0x00040ed1) cell_ituss_key_t2

0xe6ac,	// (0x00040f02) cell_ituss_key_t3_ParamLimits

0xe6ac,	// (0x00040f02) cell_ituss_key_t3

0xe67b,	// (0x00040ed1) cell_ituss_key_t4_ParamLimits

0xe67b,	// (0x00040ed1) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x0004273e) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x0004273e) cell_ituss_key_t

0xb002,	// (0x0003d858) cell_vkbss_key_3p_pane_g1

0xaffa,	// (0x0003d850) cell_vkbss_key_3p_pane_g2

0xaff2,	// (0x0003d848) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00042749) cell_vkbss_key_3p_pane_g

0x3213,	// (0x00035a69) bg_popup_fep_char_preview_window_cp02

0xb00a,	// (0x0003d860) popup_fep_char_pre_window_t1

0xe163,	// (0x000409b9) main_ai5_sk_pane

0xad3b,	// (0x0003d591) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xad47,	// (0x0003d59d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xad5c,	// (0x0003d5b2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xad68,	// (0x0003d5be) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x0004271b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xad74,	// (0x0003d5ca) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x07c2,	// (0x00033018) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x2b9c,	// (0x000353f2) main_ai5_sk_pane_g1

0x39b5,	// (0x0003620b) popup_query_code_window_g1

0xaf21,	// (0x0003d777) popup_fep_vkb_icf_pane

0xaf2c,	// (0x0003d782) popup_fep_vtchi_icf_pane

0xb018,	// (0x0003d86e) bg_icf_pane

0xb024,	// (0x0003d87a) list_vkb_icf_pane

0xb030,	// (0x0003d886) bg_icf_pane_cp01

0xb043,	// (0x0003d899) vtchi_icf_list_pane

0xb053,	// (0x0003d8a9) list_vkb_icf_pane_t1_ParamLimits

0xb053,	// (0x0003d8a9) list_vkb_icf_pane_t1

0xb068,	// (0x0003d8be) vtchi_icf_list_pane_t1_ParamLimits

0xb068,	// (0x0003d8be) vtchi_icf_list_pane_t1

0xaf0f,	// (0x0003d765) popup_fep_ituss_window_ParamLimits

0xaf2c,	// (0x0003d782) popup_fep_vtchi_icf_pane_ParamLimits

0xaf52,	// (0x0003d7a8) ituss_keypad_pane_ParamLimits

0xe5dc,	// (0x00040e32) ituss_sks_pane

0xb018,	// (0x0003d86e) bg_icf_pane_ParamLimits

0xaee7,	// (0x0003d73d) icf_edit_indi_pane_ParamLimits

0xaee7,	// (0x0003d73d) icf_edit_indi_pane

0xb024,	// (0x0003d87a) list_vkb_icf_pane_ParamLimits

0xb030,	// (0x0003d886) bg_icf_pane_cp01_ParamLimits

0xaefa,	// (0x0003d750) icf_edit_indi_pane_cp01_ParamLimits

0xaefa,	// (0x0003d750) icf_edit_indi_pane_cp01

0xb04b,	// (0x0003d8a1) vtchi_query_pane

0xa17a,	// (0x0003c9d0) icf_edit_indi_pane_g1_ParamLimits

0xa17a,	// (0x0003c9d0) icf_edit_indi_pane_g1

0x2bb7,	// (0x0003540d) icf_edit_indi_pane_g2_ParamLimits

0x2bb7,	// (0x0003540d) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00042761) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00042761) icf_edit_indi_pane_g

0x2bc7,	// (0x0003541d) icf_edit_indi_pane_t1

0xb07f,	// (0x0003d8d5) bg_input_focus_pane_cp042

0xb088,	// (0x0003d8de) vtchi_button_pane

0xb091,	// (0x0003d8e7) vtchi_query_pane_t1

0xb09f,	// (0x0003d8f5) vtchi_query_pane_t2

0xb0ad,	// (0x0003d903) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00042750) vtchi_query_pane_t

0xbb89,	// (0x0003e3df) bg_button_pane_cp13

0xb0bb,	// (0x0003d911) vtchi_button_pane_g1

0xe6ef,	// (0x00040f45) ituss_sks_pane_g1

0xe6f8,	// (0x00040f4e) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00042757) ituss_sks_pane_g

0xb0d1,	// (0x0003d927) ituss_sks_pane_t1

0xb0c3,	// (0x0003d919) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0004275c) ituss_sks_pane_t

0x4f55,	// (0x000377ab) indicator_nsta_pane_cp_g1

0x4f5e,	// (0x000377b4) indicator_nsta_pane_cp_g2

0x4f66,	// (0x000377bc) indicator_nsta_pane_cp_g3

0x4f6e,	// (0x000377c4) indicator_nsta_pane_cp_g4

0x4f76,	// (0x000377cc) indicator_nsta_pane_cp_g5

0x4f7e,	// (0x000377d4) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00042300) indicator_nsta_pane_cp_g

0xde01,	// (0x00040657) cell_graphic2_pane_t2_ParamLimits

0xde01,	// (0x00040657) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00042612) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00042612) cell_graphic2_pane_t

0xde2e,	// (0x00040684) cell_graphic2_control_pane_t1

0x5f3f,	// (0x00038795) signal_pane_g3_ParamLimits

0x5f3f,	// (0x00038795) signal_pane_g3

0x5f50,	// (0x000387a6) signal_pane_g4_ParamLimits

0x5f50,	// (0x000387a6) signal_pane_g4

0x2a61,	// (0x000352b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x2a61,	// (0x000352b7) cell_ai5_widget_list_row_pane_t3

0xafe0,	// (0x0003d836) cell_ituss_key_pane_t1_ParamLimits

0xafe0,	// (0x0003d836) cell_ituss_key_pane_t1

0x368b,	// (0x00035ee1) form_field_data_wide_pane_vc_t2_ParamLimits

0x368b,	// (0x00035ee1) form_field_data_wide_pane_vc_t2

0x369d,	// (0x00035ef3) form_field_data_wide_pane_vc_t3_ParamLimits

0x369d,	// (0x00035ef3) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004205f) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004205f) form_field_data_wide_pane_vc_t

0x4ca9,	// (0x000374ff) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4ca9,	// (0x000374ff) form_field_slider_wide_pane_vc_t3

0x4d67,	// (0x000375bd) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4d67,	// (0x000375bd) form_field_popup_wide_pane_vc_t2

0x4d7c,	// (0x000375d2) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4d7c,	// (0x000375d2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x000422ef) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x000422ef) form_field_popup_wide_pane_vc_t

0xe434,	// (0x00040c8a) aid_fshwr2_btn_pane_ParamLimits

0xe440,	// (0x00040c96) aid_fshwr2_syb_pane_ParamLimits

0xe44c,	// (0x00040ca2) aid_fshwr2_txt_pane_ParamLimits

0xd1c1,	// (0x0003fa17) fshwr2_bg_pane_ParamLimits

0xe458,	// (0x00040cae) fshwr2_func_candi_pane_ParamLimits

0xe469,	// (0x00040cbf) fshwr2_hwr_syb_pane_ParamLimits

0xe475,	// (0x00040ccb) fshwr2_icf_pane_ParamLimits

0x1a62,	// (0x000342b8) list_double_graphic_pane_vc_g4_ParamLimits

0x1a62,	// (0x000342b8) list_double_graphic_pane_vc_g4

0xe635,	// (0x00040e8b) cell_ituss_key_pane_g3_ParamLimits

0xe635,	// (0x00040e8b) cell_ituss_key_pane_g3

0xe6dd,	// (0x00040f33) cell_ituss_key_t5_ParamLimits

0xe6dd,	// (0x00040f33) cell_ituss_key_t5

0x2a77,	// (0x000352cd) popup_fep_vkbss_window_ParamLimits

0xe16d,	// (0x000409c3) aid_cell_ai5_quarter

0x2bc7,	// (0x0003541d) icf_edit_indi_pane_t1_ParamLimits

0x0344,	// (0x00032b9a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x0344,	// (0x00032b9a) aid_tch_indicator_popup_pane_cp2

0x0357,	// (0x00032bad) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x0357,	// (0x00032bad) aid_tch_query_popup_data_pane_cp2

0x395d,	// (0x000361b3) aid_tch_query_popup_pane_ParamLimits

0x395d,	// (0x000361b3) aid_tch_query_popup_pane

0x395d,	// (0x000361b3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x395d,	// (0x000361b3) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large

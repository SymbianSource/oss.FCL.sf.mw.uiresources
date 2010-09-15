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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002f2c1 };

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
0xe46d,	// (0x0003d72e) Screen

0xe477,	// (0x0003d738) application_window_ParamLimits

0xe477,	// (0x0003d738) application_window

0x4f7b,	// (0x0003423c) screen_g1

0xe485,	// (0x0003d746) area_bottom_pane_ParamLimits

0xe485,	// (0x0003d746) area_bottom_pane

0x4f85,	// (0x00034246) area_top_pane_ParamLimits

0x4f85,	// (0x00034246) area_top_pane

0x244f,	// (0x00031710) main_pane_ParamLimits

0x244f,	// (0x00031710) main_pane

0x4ffd,	// (0x000342be) misc_graphics

0xbee6,	// (0x0003b1a7) battery_pane_ParamLimits

0xbee6,	// (0x0003b1a7) battery_pane

0x6b3d,	// (0x00035dfe) bg_status_flat_pane_g8

0x6b45,	// (0x00035e06) bg_status_flat_pane_g9

0x6278,	// (0x00035539) context_pane_ParamLimits

0x6278,	// (0x00035539) context_pane

0xc040,	// (0x0003b301) navi_pane_ParamLimits

0xc040,	// (0x0003b301) navi_pane

0xc0b5,	// (0x0003b376) signal_pane_ParamLimits

0xc0b5,	// (0x0003b376) signal_pane

0x0008,

0xf84d,	// (0x0003eb0e) bg_status_flat_pane_g

0xc141,	// (0x0003b402) status_pane_g1_ParamLimits

0xc141,	// (0x0003b402) status_pane_g1

0xc14d,	// (0x0003b40e) status_pane_g2_ParamLimits

0xc14d,	// (0x0003b40e) status_pane_g2

0x62de,	// (0x0003559f) status_pane_g3_ParamLimits

0x62de,	// (0x0003559f) status_pane_g3

0x0004,

0xf780,	// (0x0003ea41) status_pane_g_ParamLimits

0xf780,	// (0x0003ea41) status_pane_g

0xc159,	// (0x0003b41a) title_pane_ParamLimits

0xc159,	// (0x0003b41a) title_pane

0xc1b4,	// (0x0003b475) uni_indicator_pane_ParamLimits

0xc1b4,	// (0x0003b475) uni_indicator_pane

0x61c3,	// (0x00035484) bg_list_pane_ParamLimits

0x61c3,	// (0x00035484) bg_list_pane

0xb395,	// (0x0003a656) find_pane

0xb8c7,	// (0x0003ab88) listscroll_app_pane_ParamLimits

0xb8c7,	// (0x0003ab88) listscroll_app_pane

0x61e3,	// (0x000354a4) listscroll_form_pane

0xb39d,	// (0x0003a65e) listscroll_gen_pane_ParamLimits

0xb39d,	// (0x0003a65e) listscroll_gen_pane

0x2d39,	// (0x00031ffa) listscroll_set_pane

0xb8d7,	// (0x0003ab98) main_idle_act_pane

0x5fe1,	// (0x000352a2) main_idle_trad_pane

0x5fe1,	// (0x000352a2) main_list_empty_pane

0x61fd,	// (0x000354be) main_midp_pane

0x6209,	// (0x000354ca) main_pane_g1_ParamLimits

0x6209,	// (0x000354ca) main_pane_g1

0xb8ea,	// (0x0003abab) popup_ai_message_window_ParamLimits

0xb8ea,	// (0x0003abab) popup_ai_message_window

0xb96e,	// (0x0003ac2f) popup_fep_china_uni_window_ParamLimits

0xb96e,	// (0x0003ac2f) popup_fep_china_uni_window

0x2e15,	// (0x000320d6) popup_fep_japan_candidate_window_ParamLimits

0x2e15,	// (0x000320d6) popup_fep_japan_candidate_window

0x2e33,	// (0x000320f4) popup_fep_japan_predictive_window_ParamLimits

0x2e33,	// (0x000320f4) popup_fep_japan_predictive_window

0xb9ac,	// (0x0003ac6d) popup_find_window

0xb9c5,	// (0x0003ac86) popup_grid_graphic_window_ParamLimits

0xb9c5,	// (0x0003ac86) popup_grid_graphic_window

0x2e8a,	// (0x0003214b) popup_large_graphic_colour_window

0xba41,	// (0x0003ad02) popup_menu_window_ParamLimits

0xba41,	// (0x0003ad02) popup_menu_window

0xbb9f,	// (0x0003ae60) popup_note_image_window

0xbb67,	// (0x0003ae28) popup_note_wait_window_ParamLimits

0xbb67,	// (0x0003ae28) popup_note_wait_window

0xbbb5,	// (0x0003ae76) popup_note_window_ParamLimits

0xbbb5,	// (0x0003ae76) popup_note_window

0xbc49,	// (0x0003af0a) popup_query_code_window_ParamLimits

0xbc49,	// (0x0003af0a) popup_query_code_window

0x304a,	// (0x0003230b) popup_query_data_code_window_ParamLimits

0x304a,	// (0x0003230b) popup_query_data_code_window

0xbc81,	// (0x0003af42) popup_query_data_window_ParamLimits

0xbc81,	// (0x0003af42) popup_query_data_window

0xbcf5,	// (0x0003afb6) popup_query_sat_info_window_ParamLimits

0xbcf5,	// (0x0003afb6) popup_query_sat_info_window

0xbd82,	// (0x0003b043) popup_snote_single_graphic_window_ParamLimits

0xbd82,	// (0x0003b043) popup_snote_single_graphic_window

0xbd82,	// (0x0003b043) popup_snote_single_text_window_ParamLimits

0xbd82,	// (0x0003b043) popup_snote_single_text_window

0x30b9,	// (0x0003237a) popup_sub_window_general

0x31bd,	// (0x0003247e) popup_window_general_ParamLimits

0x31bd,	// (0x0003247e) popup_window_general

0x6217,	// (0x000354d8) power_save_pane

0xb794,	// (0x0003aa55) control_pane_g1_ParamLimits

0xb794,	// (0x0003aa55) control_pane_g1

0x2bd5,	// (0x00031e96) control_pane_g2_ParamLimits

0x2bd5,	// (0x00031e96) control_pane_g2

0x61b5,	// (0x00035476) control_pane_g3_ParamLimits

0x61b5,	// (0x00035476) control_pane_g3

0x0007,

0xf768,	// (0x0003ea29) control_pane_g_ParamLimits

0xf768,	// (0x0003ea29) control_pane_g

0xb7c9,	// (0x0003aa8a) control_pane_t1_ParamLimits

0xb7c9,	// (0x0003aa8a) control_pane_t1

0xb827,	// (0x0003aae8) control_pane_t2_ParamLimits

0xb827,	// (0x0003aae8) control_pane_t2

0x0002,

0xf779,	// (0x0003ea3a) control_pane_t_ParamLimits

0xf779,	// (0x0003ea3a) control_pane_t

0x6110,	// (0x000353d1) navi_navi_volume_pane_cp1

0x6118,	// (0x000353d9) status_small_icon_pane

0x6120,	// (0x000353e1) status_small_pane_g1_ParamLimits

0x6120,	// (0x000353e1) status_small_pane_g1

0x6154,	// (0x00035415) status_small_pane_g2_ParamLimits

0x6154,	// (0x00035415) status_small_pane_g2

0x6160,	// (0x00035421) status_small_pane_g3_ParamLimits

0x6160,	// (0x00035421) status_small_pane_g3

0x0b15,	// (0x0002fdd6) status_small_pane_g4_ParamLimits

0x0b15,	// (0x0002fdd6) status_small_pane_g4

0x0b21,	// (0x0002fde2) status_small_pane_g5_ParamLimits

0x0b21,	// (0x0002fde2) status_small_pane_g5

0x616c,	// (0x0003542d) status_small_pane_g6_ParamLimits

0x616c,	// (0x0003542d) status_small_pane_g6

0x0007,

0xf757,	// (0x0003ea18) status_small_pane_g_ParamLimits

0xf757,	// (0x0003ea18) status_small_pane_g

0x619b,	// (0x0003545c) status_small_pane_t1

0x0b37,	// (0x0002fdf8) status_small_wait_pane_ParamLimits

0x0b37,	// (0x0002fdf8) status_small_wait_pane

0x09c4,	// (0x0002fc85) aid_levels_signal_ParamLimits

0x09c4,	// (0x0002fc85) aid_levels_signal

0x09d8,	// (0x0002fc99) signal_pane_g1_ParamLimits

0x09d8,	// (0x0002fc99) signal_pane_g1

0x09f2,	// (0x0002fcb3) signal_pane_g2_ParamLimits

0x09f2,	// (0x0002fcb3) signal_pane_g2

0x0003,

0xf6e8,	// (0x0003e9a9) signal_pane_g_ParamLimits

0xf6e8,	// (0x0003e9a9) signal_pane_g

0x5b7f,	// (0x00034e40) context_pane_g1

0xf0ce,	// (0x0003e38f) title_pane_g1

0xf110,	// (0x0003e3d1) title_pane_t1

0x5013,	// (0x000342d4) title_pane_t2

0x5039,	// (0x000342fa) title_pane_t3

0x0002,

0xf532,	// (0x0003e7f3) title_pane_t

0xc1da,	// (0x0003b49b) aid_levels_battery_ParamLimits

0xc1da,	// (0x0003b49b) aid_levels_battery

0xc1f2,	// (0x0003b4b3) battery_pane_g1_ParamLimits

0xc1f2,	// (0x0003b4b3) battery_pane_g1

0xc20d,	// (0x0003b4ce) battery_pane_g2_ParamLimits

0xc20d,	// (0x0003b4ce) battery_pane_g2

0x0001,

0xf78b,	// (0x0003ea4c) battery_pane_g_ParamLimits

0xf78b,	// (0x0003ea4c) battery_pane_g

0xc515,	// (0x0003b7d6) uni_indicator_pane_g1

0xc529,	// (0x0003b7ea) uni_indicator_pane_g2

0xc53e,	// (0x0003b7ff) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x0003ebb6) uni_indicator_pane_g

0x573c,	// (0x000349fd) navi_icon_pane_ParamLimits

0x573c,	// (0x000349fd) navi_icon_pane

0x4ffd,	// (0x000342be) navi_midp_pane

0x4ffd,	// (0x000342be) navi_navi_pane

0x573c,	// (0x000349fd) navi_text_pane_ParamLimits

0x573c,	// (0x000349fd) navi_text_pane

0x4f7b,	// (0x0003423c) status_small_wait_pane_g1

0x534e,	// (0x0003460f) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x0003ebb1) status_small_wait_pane_g

0xc4bb,	// (0x0003b77c) navi_navi_icon_text_pane

0xc4c3,	// (0x0003b784) navi_navi_pane_g1_ParamLimits

0xc4c3,	// (0x0003b784) navi_navi_pane_g1

0xc4d5,	// (0x0003b796) navi_navi_pane_g2_ParamLimits

0xc4d5,	// (0x0003b796) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x0003eb7f) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x0003eb7f) navi_navi_pane_g

0xc4e7,	// (0x0003b7a8) navi_navi_tabs_pane

0xc4bb,	// (0x0003b77c) navi_navi_text_pane

0xc4bb,	// (0x0003b77c) navi_navi_volume_pane

0x70c1,	// (0x00036382) navi_text_pane_t1

0x70b5,	// (0x00036376) navi_icon_pane_g1

0x7009,	// (0x000362ca) navi_navi_text_pane_t1

0x3424,	// (0x000326e5) navi_navi_volume_pane_g1

0xc4b2,	// (0x0003b773) volume_small_pane

0xc40e,	// (0x0003b6cf) navi_navi_icon_text_pane_g1

0xc416,	// (0x0003b6d7) navi_navi_icon_text_pane_t1

0x6b85,	// (0x00035e46) navi_tabs_2_long_pane

0x6b85,	// (0x00035e46) navi_tabs_2_pane

0x6b85,	// (0x00035e46) navi_tabs_3_long_pane

0x6b85,	// (0x00035e46) navi_tabs_3_pane

0x6b85,	// (0x00035e46) navi_tabs_4_pane

0xc3ee,	// (0x0003b6af) tabs_2_active_pane_ParamLimits

0xc3ee,	// (0x0003b6af) tabs_2_active_pane

0xc3fe,	// (0x0003b6bf) tabs_2_passive_pane_ParamLimits

0xc3fe,	// (0x0003b6bf) tabs_2_passive_pane

0xc3bc,	// (0x0003b67d) tabs_3_active_pane_ParamLimits

0xc3bc,	// (0x0003b67d) tabs_3_active_pane

0xc3cc,	// (0x0003b68d) tabs_3_passive_pane_ParamLimits

0xc3cc,	// (0x0003b68d) tabs_3_passive_pane

0xc3dd,	// (0x0003b69e) tabs_3_passive_pane_cp_ParamLimits

0xc3dd,	// (0x0003b69e) tabs_3_passive_pane_cp

0xc378,	// (0x0003b639) tabs_4_active_pane_ParamLimits

0xc378,	// (0x0003b639) tabs_4_active_pane

0xc389,	// (0x0003b64a) tabs_4_passive_pane_ParamLimits

0xc389,	// (0x0003b64a) tabs_4_passive_pane

0xc39a,	// (0x0003b65b) tabs_4_passive_pane_cp_ParamLimits

0xc39a,	// (0x0003b65b) tabs_4_passive_pane_cp

0xc3ab,	// (0x0003b66c) tabs_4_passive_pane_cp2_ParamLimits

0xc3ab,	// (0x0003b66c) tabs_4_passive_pane_cp2

0xc358,	// (0x0003b619) tabs_2_long_active_pane_ParamLimits

0xc358,	// (0x0003b619) tabs_2_long_active_pane

0xc368,	// (0x0003b629) tabs_2_long_passive_pane_ParamLimits

0xc368,	// (0x0003b629) tabs_2_long_passive_pane

0xc321,	// (0x0003b5e2) tabs_3_long_active_pane_ParamLimits

0xc321,	// (0x0003b5e2) tabs_3_long_active_pane

0xc334,	// (0x0003b5f5) tabs_3_long_passive_pane_ParamLimits

0xc334,	// (0x0003b5f5) tabs_3_long_passive_pane

0xc345,	// (0x0003b606) tabs_3_long_passive_pane_cp_ParamLimits

0xc345,	// (0x0003b606) tabs_3_long_passive_pane_cp

0x32df,	// (0x000325a0) volume_small_pane_g1

0x32e8,	// (0x000325a9) volume_small_pane_g2

0x32f1,	// (0x000325b2) volume_small_pane_g3

0x32fa,	// (0x000325bb) volume_small_pane_g4

0x3303,	// (0x000325c4) volume_small_pane_g5

0x330c,	// (0x000325cd) volume_small_pane_g6

0x3315,	// (0x000325d6) volume_small_pane_g7

0x331e,	// (0x000325df) volume_small_pane_g8

0x3327,	// (0x000325e8) volume_small_pane_g9

0x3330,	// (0x000325f1) volume_small_pane_g10

0x0009,

0xf88a,	// (0x0003eb4b) volume_small_pane_g

0x5186,	// (0x00034447) bg_active_tab_pane_cp2_ParamLimits

0x5186,	// (0x00034447) bg_active_tab_pane_cp2

0x5059,	// (0x0003431a) tabs_3_active_pane_g1

0xf19d,	// (0x0003e45e) tabs_3_active_pane_t1

0x5186,	// (0x00034447) bg_passive_tab_pane_cp2_ParamLimits

0x5186,	// (0x00034447) bg_passive_tab_pane_cp2

0x5059,	// (0x0003431a) tabs_3_passive_pane_g1

0xf19d,	// (0x0003e45e) tabs_3_passive_pane_t1

0x5186,	// (0x00034447) bg_active_tab_pane_cp3_ParamLimits

0x5186,	// (0x00034447) bg_active_tab_pane_cp3

0x6bb6,	// (0x00035e77) tabs_4_active_pane_g1

0xf1b3,	// (0x0003e474) tabs_4_active_pane_t1

0x5186,	// (0x00034447) bg_passive_tab_pane_cp3_ParamLimits

0x5186,	// (0x00034447) bg_passive_tab_pane_cp3

0x6bb6,	// (0x00035e77) tabs_4_1_passive_pane_g1

0xf1b3,	// (0x0003e474) tabs_4_1_passive_pane_t1

0x61fd,	// (0x000354be) list_highlight_pane_cp2

0xc5ed,	// (0x0003b8ae) list_set_pane_ParamLimits

0xc5ed,	// (0x0003b8ae) list_set_pane

0xc67b,	// (0x0003b93c) main_pane_set_t1_ParamLimits

0xc67b,	// (0x0003b93c) main_pane_set_t1

0xc69b,	// (0x0003b95c) main_pane_set_t2_ParamLimits

0xc69b,	// (0x0003b95c) main_pane_set_t2

0xc6af,	// (0x0003b970) main_pane_set_t3_ParamLimits

0xc6af,	// (0x0003b970) main_pane_set_t3

0xc6c1,	// (0x0003b982) main_pane_set_t4_ParamLimits

0xc6c1,	// (0x0003b982) main_pane_set_t4

0x0003,

0xf95a,	// (0x0003ec1b) main_pane_set_t_ParamLimits

0xf95a,	// (0x0003ec1b) main_pane_set_t

0xc6d3,	// (0x0003b994) setting_code_pane

0xc6db,	// (0x0003b99c) setting_slider_graphic_pane

0xc6db,	// (0x0003b99c) setting_slider_pane

0xc6db,	// (0x0003b99c) setting_text_pane

0xc6db,	// (0x0003b99c) setting_volume_pane

0xb6b3,	// (0x0003a974) volume_set_pane

0x504b,	// (0x0003430c) bg_set_opt_pane_cp

0x2656,	// (0x00031917) setting_slider_pane_t1

0xb6bb,	// (0x0003a97c) setting_slider_pane_t2

0xb6d4,	// (0x0003a995) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003e7fa) setting_slider_pane_t

0x269c,	// (0x0003195d) slider_set_pane

0x4ffd,	// (0x000342be) bg_set_opt_pane_cp2

0x5061,	// (0x00034322) setting_slider_graphic_pane_g1

0xb6eb,	// (0x0003a9ac) setting_slider_graphic_pane_t1

0xb6fa,	// (0x0003a9bb) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003e801) setting_slider_graphic_pane_t

0xb709,	// (0x0003a9ca) slider_set_pane_cp

0x4ffd,	// (0x000342be) input_focus_pane_cp1

0x7532,	// (0x000367f3) list_set_text_pane

0x4f7b,	// (0x0003423c) setting_text_pane_g1

0x4ffd,	// (0x000342be) input_focus_pane_cp2

0x4f7b,	// (0x0003423c) setting_code_pane_g1

0x506a,	// (0x0003432b) setting_code_pane_t1

0xadd4,	// (0x0003a095) set_text_pane_t1_ParamLimits

0xadd4,	// (0x0003a095) set_text_pane_t1

0x568a,	// (0x0003494b) set_opt_bg_pane_g1

0x5692,	// (0x00034953) set_opt_bg_pane_g2

0xc5b9,	// (0x0003b87a) set_opt_bg_pane_g3

0x56a2,	// (0x00034963) set_opt_bg_pane_g4

0x56aa,	// (0x0003496b) set_opt_bg_pane_g5

0x56b2,	// (0x00034973) set_opt_bg_pane_g6

0xc5c1,	// (0x0003b882) set_opt_bg_pane_g7

0xc5c9,	// (0x0003b88a) set_opt_bg_pane_g8

0xc5d1,	// (0x0003b892) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x0003ec08) set_opt_bg_pane_g

0x7525,	// (0x000367e6) slider_set_pane_g1

0x3499,	// (0x0003275a) slider_set_pane_g2

0x0006,

0xf938,	// (0x0003ebf9) slider_set_pane_g

0xc553,	// (0x0003b814) volume_set_pane_g1

0xc55b,	// (0x0003b81c) volume_set_pane_g2

0xc563,	// (0x0003b824) volume_set_pane_g3

0xc56b,	// (0x0003b82c) volume_set_pane_g4

0xc573,	// (0x0003b834) volume_set_pane_g5

0xc57b,	// (0x0003b83c) volume_set_pane_g6

0xc583,	// (0x0003b844) volume_set_pane_g7

0xc58b,	// (0x0003b84c) volume_set_pane_g8

0xc593,	// (0x0003b854) volume_set_pane_g9

0xc59b,	// (0x0003b85c) volume_set_pane_g10

0x0009,

0xf910,	// (0x0003ebd1) volume_set_pane_g

0xf1c9,	// (0x0003e48a) indicator_pane_ParamLimits

0xf1c9,	// (0x0003e48a) indicator_pane

0xf1f1,	// (0x0003e4b2) main_idle_pane_g2_ParamLimits

0xf1f1,	// (0x0003e4b2) main_idle_pane_g2

0xf221,	// (0x0003e4e2) main_pane_idle_g1_ParamLimits

0xf221,	// (0x0003e4e2) main_pane_idle_g1

0x5078,	// (0x00034339) popup_clock_digital_analogue_window_ParamLimits

0x5078,	// (0x00034339) popup_clock_digital_analogue_window

0xf246,	// (0x0003e507) soft_indicator_pane_ParamLimits

0xf246,	// (0x0003e507) soft_indicator_pane

0xf260,	// (0x0003e521) wallpaper_pane_ParamLimits

0xf260,	// (0x0003e521) wallpaper_pane

0x4f7b,	// (0x0003423c) wallpaper_pane_g1

0xf272,	// (0x0003e533) indicator_pane_g1_ParamLimits

0xf272,	// (0x0003e533) indicator_pane_g1

0x7627,	// (0x000368e8) navi_navi_icon_text_pane_srt_g1

0x50a6,	// (0x00034367) soft_indicator_pane_t1

0x50c0,	// (0x00034381) aid_ps_area_pane

0xf28b,	// (0x0003e54c) aid_ps_clock_pane

0x50d1,	// (0x00034392) aid_ps_indicator_pane

0x50dd,	// (0x0003439e) indicator_ps_pane_ParamLimits

0x50dd,	// (0x0003439e) indicator_ps_pane

0x50ec,	// (0x000343ad) power_save_pane_g1_ParamLimits

0x50ec,	// (0x000343ad) power_save_pane_g1

0x50f8,	// (0x000343b9) power_save_pane_g2_ParamLimits

0x50f8,	// (0x000343b9) power_save_pane_g2

0x23cb,	// (0x0003168c) aid_navinavi_width_pane

0x50c0,	// (0x00034381) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003e806) power_save_pane_g_ParamLimits

0xf545,	// (0x0003e806) power_save_pane_g

0x5106,	// (0x000343c7) power_save_pane_t1_ParamLimits

0x5106,	// (0x000343c7) power_save_pane_t1

0xf28b,	// (0x0003e54c) aid_ps_clock_pane_ParamLimits

0x50d1,	// (0x00034392) aid_ps_indicator_pane_ParamLimits

0x5118,	// (0x000343d9) power_save_pane_t4_ParamLimits

0x5118,	// (0x000343d9) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003e80b) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003e80b) power_save_pane_t

0x5142,	// (0x00034403) power_save_t3_ParamLimits

0x5142,	// (0x00034403) power_save_t3

0x512d,	// (0x000343ee) power_save_t2_ParamLimits

0x512d,	// (0x000343ee) power_save_t2

0x5157,	// (0x00034418) indicator_ps_pane_g1

0xf297,	// (0x0003e558) ai_gene_pane_ParamLimits

0xf297,	// (0x0003e558) ai_gene_pane

0xf2ae,	// (0x0003e56f) ai_links_pane_ParamLimits

0xf2ae,	// (0x0003e56f) ai_links_pane

0xf2c0,	// (0x0003e581) indicator_pane_cp1_ParamLimits

0xf2c0,	// (0x0003e581) indicator_pane_cp1

0xf2cf,	// (0x0003e590) main_pane_idle_g1_cp_ParamLimits

0xf2cf,	// (0x0003e590) main_pane_idle_g1_cp

0x5160,	// (0x00034421) popup_ai_links_title_window

0xf2e7,	// (0x0003e5a8) soft_indicator_pane_cp1_ParamLimits

0xf2e7,	// (0x0003e5a8) soft_indicator_pane_cp1

0x737b,	// (0x0003663c) ai_links_pane_g1

0x7384,	// (0x00036645) grid_ai_links_pane

0xc50c,	// (0x0003b7cd) ai_gene_pane_1

0x7369,	// (0x0003662a) ai_gene_pane_2

0x7372,	// (0x00036633) list_highlight_pane_cp4

0xc4f0,	// (0x0003b7b1) cell_ai_link_pane_ParamLimits

0xc4f0,	// (0x0003b7b1) cell_ai_link_pane

0x7361,	// (0x00036622) cell_ai_link_pane_g1

0x534e,	// (0x0003460f) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x0003ebac) cell_ai_link_pane_g

0x4ffd,	// (0x000342be) grid_highlight_cp2

0x4ffd,	// (0x000342be) bg_popup_sub_pane_cp1

0x5177,	// (0x00034438) popup_ai_links_title_window_t1

0x72b3,	// (0x00036574) ai_gene_pane_1_g1_ParamLimits

0x72b3,	// (0x00036574) ai_gene_pane_1_g1

0x72bf,	// (0x00036580) ai_gene_pane_1_g2_ParamLimits

0x72bf,	// (0x00036580) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x0003eba2) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x0003eba2) ai_gene_pane_1_g

0x72cc,	// (0x0003658d) ai_gene_pane_1_t1_ParamLimits

0x72cc,	// (0x0003658d) ai_gene_pane_1_t1

0x7300,	// (0x000365c1) grid_ai_soft_ind_pane

0x729e,	// (0x0003655f) ai_gene_pane_2_t1_ParamLimits

0x729e,	// (0x0003655f) ai_gene_pane_2_t1

0xf2fb,	// (0x0003e5bc) main_pane_empty_t1_ParamLimits

0xf2fb,	// (0x0003e5bc) main_pane_empty_t1

0xf318,	// (0x0003e5d9) main_pane_empty_t2_ParamLimits

0xf318,	// (0x0003e5d9) main_pane_empty_t2

0xf330,	// (0x0003e5f1) main_pane_empty_t3_ParamLimits

0xf330,	// (0x0003e5f1) main_pane_empty_t3

0xf343,	// (0x0003e604) main_pane_empty_t4_ParamLimits

0xf343,	// (0x0003e604) main_pane_empty_t4

0xf356,	// (0x0003e617) main_pane_empty_t5_ParamLimits

0xf356,	// (0x0003e617) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003e810) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003e810) main_pane_empty_t

0x573c,	// (0x000349fd) bg_popup_window_pane_ParamLimits

0x573c,	// (0x000349fd) bg_popup_window_pane

0x7018,	// (0x000362d9) find_popup_pane_cp2_ParamLimits

0x7018,	// (0x000362d9) find_popup_pane_cp2

0x7024,	// (0x000362e5) heading_pane_ParamLimits

0x7024,	// (0x000362e5) heading_pane

0x4ffd,	// (0x000342be) bg_popup_sub_pane

0xc433,	// (0x0003b6f4) bg_popup_window_pane_g1_ParamLimits

0xc433,	// (0x0003b6f4) bg_popup_window_pane_g1

0xc442,	// (0x0003b703) bg_popup_window_pane_g2_ParamLimits

0xc442,	// (0x0003b703) bg_popup_window_pane_g2

0xc44e,	// (0x0003b70f) bg_popup_window_pane_g3_ParamLimits

0xc44e,	// (0x0003b70f) bg_popup_window_pane_g3

0xc45a,	// (0x0003b71b) bg_popup_window_pane_g4_ParamLimits

0xc45a,	// (0x0003b71b) bg_popup_window_pane_g4

0xc469,	// (0x0003b72a) bg_popup_window_pane_g5_ParamLimits

0xc469,	// (0x0003b72a) bg_popup_window_pane_g5

0xc479,	// (0x0003b73a) bg_popup_window_pane_g6_ParamLimits

0xc479,	// (0x0003b73a) bg_popup_window_pane_g6

0xc485,	// (0x0003b746) bg_popup_window_pane_g7_ParamLimits

0xc485,	// (0x0003b746) bg_popup_window_pane_g7

0xc494,	// (0x0003b755) bg_popup_window_pane_g8_ParamLimits

0xc494,	// (0x0003b755) bg_popup_window_pane_g8

0xc4a3,	// (0x0003b764) bg_popup_window_pane_g9_ParamLimits

0xc4a3,	// (0x0003b764) bg_popup_window_pane_g9

0x6ffd,	// (0x000362be) bg_popup_window_pane_g10_ParamLimits

0x6ffd,	// (0x000362be) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x0003eb6a) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x0003eb6a) bg_popup_window_pane_g

0x6fb4,	// (0x00036275) bg_popup_heading_pane_ParamLimits

0x6fb4,	// (0x00036275) bg_popup_heading_pane

0x358f,	// (0x00032850) tabs_4_passive_pane_cp_srt_ParamLimits

0x358f,	// (0x00032850) tabs_4_passive_pane_cp_srt

0x35a1,	// (0x00032862) tabs_4_passive_pane_srt_ParamLimits

0x6fc8,	// (0x00036289) heading_pane_g2

0x35a1,	// (0x00032862) tabs_4_passive_pane_srt

0x6446,	// (0x00035707) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6446,	// (0x00035707) bg_passive_tab_pane_cp3_srt

0x6fd0,	// (0x00036291) heading_pane_t1_ParamLimits

0x6fd0,	// (0x00036291) heading_pane_t1

0x6fe7,	// (0x000362a8) heading_pane_t2_ParamLimits

0x6fe7,	// (0x000362a8) heading_pane_t2

0x0001,

0xf8a4,	// (0x0003eb65) heading_pane_t_ParamLimits

0xf8a4,	// (0x0003eb65) heading_pane_t

0x6b05,	// (0x00035dc6) bg_popup_heading_pane_g1

0x6b96,	// (0x00035e57) bg_popup_heading_pane_g2

0x6b9e,	// (0x00035e5f) bg_popup_heading_pane_g3

0x6ba6,	// (0x00035e67) bg_popup_heading_pane_g4

0x6bae,	// (0x00035e6f) bg_popup_heading_pane_g5

0x6bf4,	// (0x00035eb5) bg_popup_heading_pane_g6

0x6bfc,	// (0x00035ebd) bg_popup_heading_pane_g7

0x6c04,	// (0x00035ec5) bg_popup_heading_pane_g8

0x6c0c,	// (0x00035ecd) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x0003eb21) bg_popup_heading_pane_g

0x63c6,	// (0x00035687) bg_popup_sub_pane_g1

0x63ce,	// (0x0003568f) bg_popup_sub_pane_g2

0x63d6,	// (0x00035697) bg_popup_sub_pane_g3

0x63de,	// (0x0003569f) bg_popup_sub_pane_g4

0x63e6,	// (0x000356a7) bg_popup_sub_pane_g5

0x63ee,	// (0x000356af) bg_popup_sub_pane_g6

0x63f6,	// (0x000356b7) bg_popup_sub_pane_g7

0x63fe,	// (0x000356bf) bg_popup_sub_pane_g8

0x6406,	// (0x000356c7) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x0003eafb) bg_popup_sub_pane_g

0x5186,	// (0x00034447) bg_popup_window_pane_cp5_ParamLimits

0x5186,	// (0x00034447) bg_popup_window_pane_cp5

0x51a2,	// (0x00034463) popup_note_window_g1_ParamLimits

0x51a2,	// (0x00034463) popup_note_window_g1

0x51ae,	// (0x0003446f) popup_note_window_t1_ParamLimits

0x51ae,	// (0x0003446f) popup_note_window_t1

0x51c4,	// (0x00034485) popup_note_window_t2_ParamLimits

0x51c4,	// (0x00034485) popup_note_window_t2

0x51da,	// (0x0003449b) popup_note_window_t3_ParamLimits

0x51da,	// (0x0003449b) popup_note_window_t3

0x51f0,	// (0x000344b1) popup_note_window_t4_ParamLimits

0x51f0,	// (0x000344b1) popup_note_window_t4

0x5218,	// (0x000344d9) popup_note_window_t5_ParamLimits

0x5218,	// (0x000344d9) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003e81b) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003e81b) popup_note_window_t

0x5262,	// (0x00034523) bg_popup_window_pane_cp6_ParamLimits

0x5262,	// (0x00034523) bg_popup_window_pane_cp6

0x6a81,	// (0x00035d42) popup_note_image_window_g1_ParamLimits

0x6a81,	// (0x00035d42) popup_note_image_window_g1

0x6a8d,	// (0x00035d4e) popup_note_image_window_g2_ParamLimits

0x6a8d,	// (0x00035d4e) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x0003eaef) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x0003eaef) popup_note_image_window_g

0x6aa6,	// (0x00035d67) popup_note_image_window_t1_ParamLimits

0x6aa6,	// (0x00035d67) popup_note_image_window_t1

0x6abf,	// (0x00035d80) popup_note_image_window_t2_ParamLimits

0x6abf,	// (0x00035d80) popup_note_image_window_t2

0x6ad8,	// (0x00035d99) popup_note_image_window_t3_ParamLimits

0x6ad8,	// (0x00035d99) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0003eaf4) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0003eaf4) popup_note_image_window_t

0x696c,	// (0x00035c2d) bg_popup_window_pane_cp7_ParamLimits

0x696c,	// (0x00035c2d) bg_popup_window_pane_cp7

0x699c,	// (0x00035c5d) popup_note_wait_window_g1_ParamLimits

0x699c,	// (0x00035c5d) popup_note_wait_window_g1

0x69a8,	// (0x00035c69) popup_note_wait_window_g2_ParamLimits

0x69a8,	// (0x00035c69) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x0003eadd) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x0003eadd) popup_note_wait_window_g

0x69c0,	// (0x00035c81) popup_note_wait_window_t1_ParamLimits

0x69c0,	// (0x00035c81) popup_note_wait_window_t1

0x69e7,	// (0x00035ca8) popup_note_wait_window_t2_ParamLimits

0x69e7,	// (0x00035ca8) popup_note_wait_window_t2

0x6a04,	// (0x00035cc5) popup_note_wait_window_t3_ParamLimits

0x6a04,	// (0x00035cc5) popup_note_wait_window_t3

0x6a17,	// (0x00035cd8) popup_note_wait_window_t4_ParamLimits

0x6a17,	// (0x00035cd8) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0003eae4) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0003eae4) popup_note_wait_window_t

0x6a3c,	// (0x00035cfd) wait_bar_pane_ParamLimits

0x6a3c,	// (0x00035cfd) wait_bar_pane

0x4ffd,	// (0x000342be) wait_anim_pane

0x4ffd,	// (0x000342be) wait_border_pane

0x4f7b,	// (0x0003423c) wait_anim_pane_g1

0x4f7b,	// (0x0003423c) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0003e9a4) wait_anim_pane_g

0x691c,	// (0x00035bdd) wait_border_pane_g1

0x6925,	// (0x00035be6) wait_border_pane_g2

0x692e,	// (0x00035bef) wait_border_pane_g3

0x0002,

0xf815,	// (0x0003ead6) wait_border_pane_g

0x678c,	// (0x00035a4d) bg_popup_window_pane_cp16_ParamLimits

0x678c,	// (0x00035a4d) bg_popup_window_pane_cp16

0x688c,	// (0x00035b4d) indicator_popup_pane_cp4_ParamLimits

0x688c,	// (0x00035b4d) indicator_popup_pane_cp4

0x68a0,	// (0x00035b61) popup_query_data_window_t1_ParamLimits

0x68a0,	// (0x00035b61) popup_query_data_window_t1

0x68b2,	// (0x00035b73) popup_query_data_window_t2_ParamLimits

0x68b2,	// (0x00035b73) popup_query_data_window_t2

0x68cb,	// (0x00035b8c) popup_query_data_window_t3_ParamLimits

0x68cb,	// (0x00035b8c) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x0003eacf) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x0003eacf) popup_query_data_window_t

0x68e5,	// (0x00035ba6) query_popup_data_pane_ParamLimits

0x68e5,	// (0x00035ba6) query_popup_data_pane

0x68f9,	// (0x00035bba) query_popup_data_pane_cp1_ParamLimits

0x68f9,	// (0x00035bba) query_popup_data_pane_cp1

0x678c,	// (0x00035a4d) bg_popup_window_pane_cp10_ParamLimits

0x678c,	// (0x00035a4d) bg_popup_window_pane_cp10

0x67be,	// (0x00035a7f) indicator_popup_pane_ParamLimits

0x67be,	// (0x00035a7f) indicator_popup_pane

0x67e0,	// (0x00035aa1) popup_query_code_window_t1_ParamLimits

0x67e0,	// (0x00035aa1) popup_query_code_window_t1

0x67fa,	// (0x00035abb) popup_query_code_window_t2_ParamLimits

0x67fa,	// (0x00035abb) popup_query_code_window_t2

0x6843,	// (0x00035b04) popup_query_code_window_t3_ParamLimits

0x6843,	// (0x00035b04) popup_query_code_window_t3

0x0002,

0xf807,	// (0x0003eac8) popup_query_code_window_t_ParamLimits

0xf807,	// (0x0003eac8) popup_query_code_window_t

0x6872,	// (0x00035b33) query_popup_pane_ParamLimits

0x6872,	// (0x00035b33) query_popup_pane

0x5262,	// (0x00034523) bg_popup_window_pane_cp15_ParamLimits

0x5262,	// (0x00034523) bg_popup_window_pane_cp15

0x5280,	// (0x00034541) indicator_popup_pane_cp1_ParamLimits

0x5280,	// (0x00034541) indicator_popup_pane_cp1

0x5293,	// (0x00034554) indicator_popup_pane_cp2_ParamLimits

0x5293,	// (0x00034554) indicator_popup_pane_cp2

0x52a6,	// (0x00034567) popup_query_data_code_window_g1_ParamLimits

0x52a6,	// (0x00034567) popup_query_data_code_window_g1

0x52b9,	// (0x0003457a) popup_query_data_code_window_t1_ParamLimits

0x52b9,	// (0x0003457a) popup_query_data_code_window_t1

0x52cb,	// (0x0003458c) popup_query_data_code_window_t2_ParamLimits

0x52cb,	// (0x0003458c) popup_query_data_code_window_t2

0x52dd,	// (0x0003459e) popup_query_data_code_window_t3_ParamLimits

0x52dd,	// (0x0003459e) popup_query_data_code_window_t3

0x52f3,	// (0x000345b4) popup_query_data_code_window_t4_ParamLimits

0x52f3,	// (0x000345b4) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003e826) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003e826) popup_query_data_code_window_t

0x5e5b,	// (0x0003511c) list_single_midp_graphic_pane_g3

0x530b,	// (0x000345cc) query_popup_data_pane_cp2_ParamLimits

0x531e,	// (0x000345df) query_popup_pane_cp2_ParamLimits

0x531e,	// (0x000345df) query_popup_pane_cp2

0x4ffd,	// (0x000342be) bg_popup_window_pane_cp11

0x6770,	// (0x00035a31) heading_pane_cp5

0x6778,	// (0x00035a39) listscroll_popup_info_pane

0x4ffd,	// (0x000342be) input_focus_pane_cp3

0x5331,	// (0x000345f2) query_popup_pane_t1

0x533f,	// (0x00034600) list_popup_info_pane_ParamLimits

0x533f,	// (0x00034600) list_popup_info_pane

0x534e,	// (0x0003460f) listscroll_popup_info_pane_g1

0x5356,	// (0x00034617) scroll_pane_cp7

0x535e,	// (0x0003461f) popup_info_list_pane_t1_ParamLimits

0x535e,	// (0x0003461f) popup_info_list_pane_t1

0x5378,	// (0x00034639) popup_info_list_pane_t2_ParamLimits

0x5378,	// (0x00034639) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003e82f) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003e82f) popup_info_list_pane_t

0x4ffd,	// (0x000342be) bg_popup_window_pane_cp12

0x7641,	// (0x00036902) find_popup_pane

0x504b,	// (0x0003430c) bg_popup_window_pane_cp3

0x5392,	// (0x00034653) heading_pane_cp3

0x53a1,	// (0x00034662) listscroll_popup_graphic_pane

0x4ffd,	// (0x000342be) bg_popup_window_pane_cp4

0xf3b9,	// (0x0003e67a) heading_pane_cp4

0x53b0,	// (0x00034671) listscroll_popup_colour_pane

0x53b8,	// (0x00034679) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x53b8,	// (0x00034679) cell_large_graphic_colour_none_popup_pane

0xf3c1,	// (0x0003e682) grid_large_graphic_colour_popup_pane_ParamLimits

0xf3c1,	// (0x0003e682) grid_large_graphic_colour_popup_pane

0x53c8,	// (0x00034689) listscroll_popup_colour_pane_g1_ParamLimits

0x53c8,	// (0x00034689) listscroll_popup_colour_pane_g1

0x53df,	// (0x000346a0) listscroll_popup_colour_pane_g2_ParamLimits

0x53df,	// (0x000346a0) listscroll_popup_colour_pane_g2

0x53f6,	// (0x000346b7) listscroll_popup_colour_pane_g3_ParamLimits

0x53f6,	// (0x000346b7) listscroll_popup_colour_pane_g3

0xf3dd,	// (0x0003e69e) listscroll_popup_colour_pane_g4_ParamLimits

0xf3dd,	// (0x0003e69e) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003e834) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003e834) listscroll_popup_colour_pane_g

0x5406,	// (0x000346c7) scroll_pane_cp6_ParamLimits

0x5406,	// (0x000346c7) scroll_pane_cp6

0xf3ec,	// (0x0003e6ad) cell_large_graphic_colour_popup_pane_ParamLimits

0xf3ec,	// (0x0003e6ad) cell_large_graphic_colour_popup_pane

0x5418,	// (0x000346d9) cell_large_graphic_colour_none_popup_pane_t1

0x4ffd,	// (0x000342be) grid_highlight_pane_cp5

0x5427,	// (0x000346e8) cell_large_graphic_colour_popup_pane_g1

0x542f,	// (0x000346f0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003e83d) cell_large_graphic_colour_popup_pane_g

0x5437,	// (0x000346f8) cell_large_graphic_colour_popup_pane_g2_copy1

0x5440,	// (0x00034701) grid_highlight_pane_cp4

0x5448,	// (0x00034709) bg_popup_window_pane_cp8_ParamLimits

0x5448,	// (0x00034709) bg_popup_window_pane_cp8

0x5463,	// (0x00034724) popup_snote_single_text_window_g1_ParamLimits

0x5463,	// (0x00034724) popup_snote_single_text_window_g1

0x5475,	// (0x00034736) popup_snote_single_text_window_t1_ParamLimits

0x5475,	// (0x00034736) popup_snote_single_text_window_t1

0x5488,	// (0x00034749) popup_snote_single_text_window_t2_ParamLimits

0x5488,	// (0x00034749) popup_snote_single_text_window_t2

0x549b,	// (0x0003475c) popup_snote_single_text_window_t3_ParamLimits

0x549b,	// (0x0003475c) popup_snote_single_text_window_t3

0x54d4,	// (0x00034795) popup_snote_single_text_window_t4_ParamLimits

0x54d4,	// (0x00034795) popup_snote_single_text_window_t4

0x5508,	// (0x000347c9) popup_snote_single_text_window_t5_ParamLimits

0x5508,	// (0x000347c9) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003e842) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003e842) popup_snote_single_text_window_t

0x5537,	// (0x000347f8) bg_popup_window_pane_cp9_ParamLimits

0x5537,	// (0x000347f8) bg_popup_window_pane_cp9

0x5463,	// (0x00034724) popup_snote_single_graphic_window_g1_ParamLimits

0x5463,	// (0x00034724) popup_snote_single_graphic_window_g1

0x5545,	// (0x00034806) popup_snote_single_graphic_window_g2_ParamLimits

0x5545,	// (0x00034806) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003e84d) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003e84d) popup_snote_single_graphic_window_g

0x5551,	// (0x00034812) popup_snote_single_graphic_window_t1_ParamLimits

0x5551,	// (0x00034812) popup_snote_single_graphic_window_t1

0x5564,	// (0x00034825) popup_snote_single_graphic_window_t2_ParamLimits

0x5564,	// (0x00034825) popup_snote_single_graphic_window_t2

0x549b,	// (0x0003475c) popup_snote_single_graphic_window_t3_ParamLimits

0x549b,	// (0x0003475c) popup_snote_single_graphic_window_t3

0x54d4,	// (0x00034795) popup_snote_single_graphic_window_t4_ParamLimits

0x54d4,	// (0x00034795) popup_snote_single_graphic_window_t4

0x5508,	// (0x000347c9) popup_snote_single_graphic_window_t5_ParamLimits

0x5508,	// (0x000347c9) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003e852) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003e852) popup_snote_single_graphic_window_t

0xc7c4,	// (0x0003ba85) grid_graphic_popup_pane_ParamLimits

0xc7c4,	// (0x0003ba85) grid_graphic_popup_pane

0xc7e7,	// (0x0003baa8) listscroll_popup_graphic_pane_g1_ParamLimits

0xc7e7,	// (0x0003baa8) listscroll_popup_graphic_pane_g1

0xc7fb,	// (0x0003babc) listscroll_popup_graphic_pane_g2_ParamLimits

0xc7fb,	// (0x0003babc) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x0003ec45) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x0003ec45) listscroll_popup_graphic_pane_g

0x6bbe,	// (0x00035e7f) scroll_pane_cp5

0xc780,	// (0x0003ba41) cell_graphic_popup_pane_ParamLimits

0xc780,	// (0x0003ba41) cell_graphic_popup_pane

0x75ea,	// (0x000368ab) cell_graphic_popup_pane_g1

0x75f2,	// (0x000368b3) cell_graphic_popup_pane_g2

0x5437,	// (0x000346f8) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x0003ec3e) cell_graphic_popup_pane_g

0x75fb,	// (0x000368bc) cell_graphic_popup_pane_t2

0x5440,	// (0x00034701) grid_highlight_pane_cp3

0x5589,	// (0x0003484a) list_gen_pane_ParamLimits

0x5589,	// (0x0003484a) list_gen_pane

0x55b2,	// (0x00034873) scroll_pane

0xc753,	// (0x0003ba14) bg_list_pane_g1_ParamLimits

0xc753,	// (0x0003ba14) bg_list_pane_g1

0x75a1,	// (0x00036862) bg_list_pane_g2_ParamLimits

0x75a1,	// (0x00036862) bg_list_pane_g2

0x75b4,	// (0x00036875) bg_list_pane_g3_ParamLimits

0x75b4,	// (0x00036875) bg_list_pane_g3

0x75c6,	// (0x00036887) bg_list_pane_g4_ParamLimits

0x75c6,	// (0x00036887) bg_list_pane_g4

0xc76e,	// (0x0003ba2f) bg_list_pane_g5_ParamLimits

0xc76e,	// (0x0003ba2f) bg_list_pane_g5

0x0004,

0xf972,	// (0x0003ec33) bg_list_pane_g_ParamLimits

0xf972,	// (0x0003ec33) bg_list_pane_g

0xc708,	// (0x0003b9c9) list_double2_graphic_large_graphic_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double2_graphic_large_graphic_pane

0xc708,	// (0x0003b9c9) list_double2_graphic_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double2_graphic_pane

0xc708,	// (0x0003b9c9) list_double2_large_graphic_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double2_large_graphic_pane

0xc708,	// (0x0003b9c9) list_double2_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double2_pane

0xc708,	// (0x0003b9c9) list_double_graphic_heading_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double_graphic_heading_pane

0xc708,	// (0x0003b9c9) list_double_graphic_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double_graphic_pane

0xc708,	// (0x0003b9c9) list_double_heading_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double_heading_pane

0xc708,	// (0x0003b9c9) list_double_large_graphic_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double_large_graphic_pane

0xc708,	// (0x0003b9c9) list_double_number_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double_number_pane

0xc708,	// (0x0003b9c9) list_double_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double_pane

0xc708,	// (0x0003b9c9) list_double_time_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_double_time_pane

0xc708,	// (0x0003b9c9) list_setting_number_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_setting_number_pane

0xc708,	// (0x0003b9c9) list_setting_pane_ParamLimits

0xc708,	// (0x0003b9c9) list_setting_pane

0xb400,	// (0x0003a6c1) list_single_2graphic_pane_ParamLimits

0xb400,	// (0x0003a6c1) list_single_2graphic_pane

0xb400,	// (0x0003a6c1) list_single_graphic_heading_pane_ParamLimits

0xb400,	// (0x0003a6c1) list_single_graphic_heading_pane

0xb400,	// (0x0003a6c1) list_single_graphic_pane_ParamLimits

0xb400,	// (0x0003a6c1) list_single_graphic_pane

0xb400,	// (0x0003a6c1) list_single_heading_pane_ParamLimits

0xb400,	// (0x0003a6c1) list_single_heading_pane

0xc741,	// (0x0003ba02) list_single_large_graphic_pane_ParamLimits

0xc741,	// (0x0003ba02) list_single_large_graphic_pane

0xb400,	// (0x0003a6c1) list_single_number_heading_pane_ParamLimits

0xb400,	// (0x0003a6c1) list_single_number_heading_pane

0xb400,	// (0x0003a6c1) list_single_number_pane_ParamLimits

0xb400,	// (0x0003a6c1) list_single_number_pane

0xb400,	// (0x0003a6c1) list_single_pane_ParamLimits

0xb400,	// (0x0003a6c1) list_single_pane

0x4ffd,	// (0x000342be) list_highlight_pane_cp1

0x2755,	// (0x00031a16) list_single_pane_g1_ParamLimits

0x2755,	// (0x00031a16) list_single_pane_g1

0x2761,	// (0x00031a22) list_single_pane_g2_ParamLimits

0x2761,	// (0x00031a22) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_single_pane_g

0x1eff,	// (0x000311c0) list_single_pane_t1_ParamLimits

0x1eff,	// (0x000311c0) list_single_pane_t1

0x2755,	// (0x00031a16) list_single_number_pane_g1_ParamLimits

0x2755,	// (0x00031a16) list_single_number_pane_g1

0x2761,	// (0x00031a22) list_single_number_pane_g2_ParamLimits

0x2761,	// (0x00031a22) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_single_number_pane_g

0x1758,	// (0x00030a19) list_single_number_pane_t1_ParamLimits

0x1758,	// (0x00030a19) list_single_number_pane_t1

0xb3c7,	// (0x0003a688) list_single_number_pane_t2_ParamLimits

0xb3c7,	// (0x0003a688) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0003ebf4) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0003ebf4) list_single_number_pane_t

0x174c,	// (0x00030a0d) list_single_graphic_pane_g1_ParamLimits

0x174c,	// (0x00030a0d) list_single_graphic_pane_g1

0x2755,	// (0x00031a16) list_single_graphic_pane_g2_ParamLimits

0x2755,	// (0x00031a16) list_single_graphic_pane_g2

0x2761,	// (0x00031a22) list_single_graphic_pane_g3_ParamLimits

0x2761,	// (0x00031a22) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003e85d) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003e85d) list_single_graphic_pane_g

0x1758,	// (0x00030a19) list_single_graphic_pane_t1_ParamLimits

0x1758,	// (0x00030a19) list_single_graphic_pane_t1

0xaded,	// (0x0003a0ae) list_single_heading_pane_g1_ParamLimits

0xaded,	// (0x0003a0ae) list_single_heading_pane_g1

0x2761,	// (0x00031a22) list_single_heading_pane_g2_ParamLimits

0x2761,	// (0x00031a22) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003e864) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003e864) list_single_heading_pane_g

0xae00,	// (0x0003a0c1) list_single_heading_pane_t1_ParamLimits

0xae00,	// (0x0003a0c1) list_single_heading_pane_t1

0xae16,	// (0x0003a0d7) list_single_heading_pane_t2_ParamLimits

0xae16,	// (0x0003a0d7) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003e869) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003e869) list_single_heading_pane_t

0x2755,	// (0x00031a16) list_single_number_heading_pane_g1_ParamLimits

0x2755,	// (0x00031a16) list_single_number_heading_pane_g1

0x2761,	// (0x00031a22) list_single_number_heading_pane_g2_ParamLimits

0x2761,	// (0x00031a22) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_single_number_heading_pane_g

0x1808,	// (0x00030ac9) list_single_number_heading_pane_t1_ParamLimits

0x1808,	// (0x00030ac9) list_single_number_heading_pane_t1

0xae28,	// (0x0003a0e9) list_single_number_heading_pane_t2_ParamLimits

0xae28,	// (0x0003a0e9) list_single_number_heading_pane_t2

0x1edb,	// (0x0003119c) list_single_number_heading_pane_t3_ParamLimits

0x1edb,	// (0x0003119c) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0003e873) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0003e873) list_single_number_heading_pane_t

0xae3a,	// (0x0003a0fb) list_single_graphic_heading_pane_g1_ParamLimits

0xae3a,	// (0x0003a0fb) list_single_graphic_heading_pane_g1

0xb711,	// (0x0003a9d2) list_single_graphic_heading_pane_g4_ParamLimits

0xb711,	// (0x0003a9d2) list_single_graphic_heading_pane_g4

0x2761,	// (0x00031a22) list_single_graphic_heading_pane_g5_ParamLimits

0x2761,	// (0x00031a22) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0003e87a) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0003e87a) list_single_graphic_heading_pane_g

0x1808,	// (0x00030ac9) list_single_graphic_heading_pane_t1_ParamLimits

0x1808,	// (0x00030ac9) list_single_graphic_heading_pane_t1

0xae4e,	// (0x0003a10f) list_single_graphic_heading_pane_t2_ParamLimits

0xae4e,	// (0x0003a10f) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0003e881) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0003e881) list_single_graphic_heading_pane_t

0x2705,	// (0x000319c6) list_single_large_graphic_pane_g1_ParamLimits

0x2705,	// (0x000319c6) list_single_large_graphic_pane_g1

0x2711,	// (0x000319d2) list_single_large_graphic_pane_g2_ParamLimits

0x2711,	// (0x000319d2) list_single_large_graphic_pane_g2

0x271d,	// (0x000319de) list_single_large_graphic_pane_g3_ParamLimits

0x271d,	// (0x000319de) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0003e886) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0003e886) list_single_large_graphic_pane_g

0x6925,	// (0x00035be6) wait_border_pane_g2_copy1

0x2729,	// (0x000319ea) list_single_large_graphic_pane_g4_cp2

0x1642,	// (0x00030903) list_single_large_graphic_pane_t1_ParamLimits

0x1642,	// (0x00030903) list_single_large_graphic_pane_t1

0x5ec5,	// (0x00035186) list_double_pane_g1_ParamLimits

0x5ec5,	// (0x00035186) list_double_pane_g1

0xb722,	// (0x0003a9e3) list_double_pane_g2_ParamLimits

0xb722,	// (0x0003a9e3) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0003e88d) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0003e88d) list_double_pane_g

0xae66,	// (0x0003a127) list_double_pane_t1_ParamLimits

0xae66,	// (0x0003a127) list_double_pane_t1

0xae7c,	// (0x0003a13d) list_double_pane_t2_ParamLimits

0xae7c,	// (0x0003a13d) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0003e892) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0003e892) list_double_pane_t

0xae8e,	// (0x0003a14f) list_double2_pane_g1_ParamLimits

0xae8e,	// (0x0003a14f) list_double2_pane_g1

0xae9f,	// (0x0003a160) list_double2_pane_g2_ParamLimits

0xae9f,	// (0x0003a160) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0003e897) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0003e897) list_double2_pane_g

0xaeab,	// (0x0003a16c) list_double2_pane_t1_ParamLimits

0xaeab,	// (0x0003a16c) list_double2_pane_t1

0xaec1,	// (0x0003a182) list_double2_pane_t2_ParamLimits

0xaec1,	// (0x0003a182) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0003e89c) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0003e89c) list_double2_pane_t

0x5ec5,	// (0x00035186) list_double_number_pane_g1_ParamLimits

0x5ec5,	// (0x00035186) list_double_number_pane_g1

0xb722,	// (0x0003a9e3) list_double_number_pane_g2_ParamLimits

0xb722,	// (0x0003a9e3) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0003e88d) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0003e88d) list_double_number_pane_g

0xaed3,	// (0x0003a194) list_double_number_pane_t1_ParamLimits

0xaed3,	// (0x0003a194) list_double_number_pane_t1

0xaee5,	// (0x0003a1a6) list_double_number_pane_t2_ParamLimits

0xaee5,	// (0x0003a1a6) list_double_number_pane_t2

0xaefb,	// (0x0003a1bc) list_double_number_pane_t3_ParamLimits

0xaefb,	// (0x0003a1bc) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0003e8a1) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0003e8a1) list_double_number_pane_t

0xaf0d,	// (0x0003a1ce) list_double_graphic_pane_g1_ParamLimits

0xaf0d,	// (0x0003a1ce) list_double_graphic_pane_g1

0x7076,	// (0x00036337) list_double_graphic_pane_g2_ParamLimits

0x7076,	// (0x00036337) list_double_graphic_pane_g2

0xb72e,	// (0x0003a9ef) list_double_graphic_pane_g3_ParamLimits

0xb72e,	// (0x0003a9ef) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0003e8a8) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0003e8a8) list_double_graphic_pane_g

0xaf25,	// (0x0003a1e6) list_double_graphic_pane_t1_ParamLimits

0xaf25,	// (0x0003a1e6) list_double_graphic_pane_t1

0xaf3b,	// (0x0003a1fc) list_double_graphic_pane_t2_ParamLimits

0xaf3b,	// (0x0003a1fc) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0003e8b1) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0003e8b1) list_double_graphic_pane_t

0x1861,	// (0x00030b22) list_double2_graphic_pane_g1_ParamLimits

0x1861,	// (0x00030b22) list_double2_graphic_pane_g1

0xb73a,	// (0x0003a9fb) list_double2_graphic_pane_g2_ParamLimits

0xb73a,	// (0x0003a9fb) list_double2_graphic_pane_g2

0xb746,	// (0x0003aa07) list_double2_graphic_pane_g3_ParamLimits

0xb746,	// (0x0003aa07) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0003e8b6) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0003e8b6) list_double2_graphic_pane_g

0xaf4d,	// (0x0003a20e) list_double2_graphic_pane_t1_ParamLimits

0xaf4d,	// (0x0003a20e) list_double2_graphic_pane_t1

0xaf63,	// (0x0003a224) list_double2_graphic_pane_t2_ParamLimits

0xaf63,	// (0x0003a224) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0003e8bd) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0003e8bd) list_double2_graphic_pane_t

0xaf75,	// (0x0003a236) list_double_large_graphic_pane_g1_ParamLimits

0xaf75,	// (0x0003a236) list_double_large_graphic_pane_g1

0xaf99,	// (0x0003a25a) list_double_large_graphic_pane_g2_ParamLimits

0xaf99,	// (0x0003a25a) list_double_large_graphic_pane_g2

0xb722,	// (0x0003a9e3) list_double_large_graphic_pane_g3_ParamLimits

0xb722,	// (0x0003a9e3) list_double_large_graphic_pane_g3

0xafaf,	// (0x0003a270) list_double_large_graphic_pane_g4_ParamLimits

0xafaf,	// (0x0003a270) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0003e8c2) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003e8c2) list_double_large_graphic_pane_g

0xafc0,	// (0x0003a281) list_double_large_graphic_pane_t1_ParamLimits

0xafc0,	// (0x0003a281) list_double_large_graphic_pane_t1

0xafd9,	// (0x0003a29a) list_double_large_graphic_pane_t2_ParamLimits

0xafd9,	// (0x0003a29a) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0003e8cd) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0003e8cd) list_double_large_graphic_pane_t

0xb752,	// (0x0003aa13) list_double2_large_graphic_pane_g1_ParamLimits

0xb752,	// (0x0003aa13) list_double2_large_graphic_pane_g1

0xb75e,	// (0x0003aa1f) list_double2_large_graphic_pane_g2_ParamLimits

0xb75e,	// (0x0003aa1f) list_double2_large_graphic_pane_g2

0xb746,	// (0x0003aa07) list_double2_large_graphic_pane_g3_ParamLimits

0xb746,	// (0x0003aa07) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0003e8d2) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0003e8d2) list_double2_large_graphic_pane_g

0xafeb,	// (0x0003a2ac) list_double2_large_graphic_pane_t1_ParamLimits

0xafeb,	// (0x0003a2ac) list_double2_large_graphic_pane_t1

0xb001,	// (0x0003a2c2) list_double2_large_graphic_pane_t2_ParamLimits

0xb001,	// (0x0003a2c2) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0003e8d9) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0003e8d9) list_double2_large_graphic_pane_t

0xb013,	// (0x0003a2d4) list_double_heading_pane_g1_ParamLimits

0xb013,	// (0x0003a2d4) list_double_heading_pane_g1

0x26d8,	// (0x00031999) list_double_heading_pane_g2_ParamLimits

0x26d8,	// (0x00031999) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0003e8de) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0003e8de) list_double_heading_pane_g

0xb024,	// (0x0003a2e5) list_double_heading_pane_t1_ParamLimits

0xb024,	// (0x0003a2e5) list_double_heading_pane_t1

0xaec1,	// (0x0003a182) list_double_heading_pane_t2_ParamLimits

0xaec1,	// (0x0003a182) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0003e8e3) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0003e8e3) list_double_heading_pane_t

0x1861,	// (0x00030b22) list_double_graphic_heading_pane_g1_ParamLimits

0x1861,	// (0x00030b22) list_double_graphic_heading_pane_g1

0xb013,	// (0x0003a2d4) list_double_graphic_heading_pane_g2_ParamLimits

0xb013,	// (0x0003a2d4) list_double_graphic_heading_pane_g2

0x26d8,	// (0x00031999) list_double_graphic_heading_pane_g3_ParamLimits

0x26d8,	// (0x00031999) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0003e8e8) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0003e8e8) list_double_graphic_heading_pane_g

0xb03a,	// (0x0003a2fb) list_double_graphic_heading_pane_t1_ParamLimits

0xb03a,	// (0x0003a2fb) list_double_graphic_heading_pane_t1

0xaf63,	// (0x0003a224) list_double_graphic_heading_pane_t2_ParamLimits

0xaf63,	// (0x0003a224) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0003e8ef) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0003e8ef) list_double_graphic_heading_pane_t

0xb050,	// (0x0003a311) list_double_time_pane_g1_ParamLimits

0xb050,	// (0x0003a311) list_double_time_pane_g1

0xb061,	// (0x0003a322) list_double_time_pane_g2_ParamLimits

0xb061,	// (0x0003a322) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0003e8f4) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0003e8f4) list_double_time_pane_g

0xb06d,	// (0x0003a32e) list_double_time_pane_t1_ParamLimits

0xb06d,	// (0x0003a32e) list_double_time_pane_t1

0xb083,	// (0x0003a344) list_double_time_pane_t2_ParamLimits

0xb083,	// (0x0003a344) list_double_time_pane_t2

0xb095,	// (0x0003a356) list_double_time_pane_t3_ParamLimits

0xb095,	// (0x0003a356) list_double_time_pane_t3

0xb0a7,	// (0x0003a368) list_double_time_pane_t4_ParamLimits

0xb0a7,	// (0x0003a368) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0003e8f9) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0003e8f9) list_double_time_pane_t

0xb0b9,	// (0x0003a37a) list_setting_pane_g1_ParamLimits

0xb0b9,	// (0x0003a37a) list_setting_pane_g1

0x1892,	// (0x00030b53) list_setting_pane_g2_ParamLimits

0x1892,	// (0x00030b53) list_setting_pane_g2

0x0001,

0xf641,	// (0x0003e902) list_setting_pane_g_ParamLimits

0xf641,	// (0x0003e902) list_setting_pane_g

0xb0c5,	// (0x0003a386) list_setting_pane_t1_ParamLimits

0xb0c5,	// (0x0003a386) list_setting_pane_t1

0xb0df,	// (0x0003a3a0) list_setting_pane_t2_ParamLimits

0xb0df,	// (0x0003a3a0) list_setting_pane_t2

0x0002,

0xf646,	// (0x0003e907) list_setting_pane_t_ParamLimits

0xf646,	// (0x0003e907) list_setting_pane_t

0xb11c,	// (0x0003a3dd) set_value_pane_cp_ParamLimits

0xb11c,	// (0x0003a3dd) set_value_pane_cp

0xb128,	// (0x0003a3e9) list_setting_number_pane_g1_ParamLimits

0xb128,	// (0x0003a3e9) list_setting_number_pane_g1

0xb134,	// (0x0003a3f5) list_setting_number_pane_g2_ParamLimits

0xb134,	// (0x0003a3f5) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0003e90e) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0003e90e) list_setting_number_pane_g

0xb140,	// (0x0003a401) list_setting_number_pane_t1_ParamLimits

0xb140,	// (0x0003a401) list_setting_number_pane_t1

0xb159,	// (0x0003a41a) list_setting_number_pane_t2_ParamLimits

0xb159,	// (0x0003a41a) list_setting_number_pane_t2

0xb173,	// (0x0003a434) list_setting_number_pane_t3_ParamLimits

0xb173,	// (0x0003a434) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0003e913) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0003e913) list_setting_number_pane_t

0xb11c,	// (0x0003a3dd) set_value_pane_ParamLimits

0xb11c,	// (0x0003a3dd) set_value_pane

0x55f3,	// (0x000348b4) bg_set_opt_pane_ParamLimits

0x55f3,	// (0x000348b4) bg_set_opt_pane

0x19ef,	// (0x00030cb0) set_value_pane_t1

0x5614,	// (0x000348d5) slider_set_pane_cp3

0x561d,	// (0x000348de) volume_small_pane_cp

0x5626,	// (0x000348e7) list_form_gen_pane

0x55d6,	// (0x00034897) scroll_pane_cp8

0xb1b6,	// (0x0003a477) form_field_data_pane_ParamLimits

0xb1b6,	// (0x0003a477) form_field_data_pane

0xb1cd,	// (0x0003a48e) form_field_data_wide_pane_ParamLimits

0xb1cd,	// (0x0003a48e) form_field_data_wide_pane

0xb1ed,	// (0x0003a4ae) form_field_popup_pane_ParamLimits

0xb1ed,	// (0x0003a4ae) form_field_popup_pane

0xb205,	// (0x0003a4c6) form_field_popup_wide_pane_ParamLimits

0xb205,	// (0x0003a4c6) form_field_popup_wide_pane

0x1a7b,	// (0x00030d3c) form_field_slider_pane_ParamLimits

0x1a7b,	// (0x00030d3c) form_field_slider_pane

0x1a8e,	// (0x00030d4f) form_field_slider_wide_pane_ParamLimits

0x1a8e,	// (0x00030d4f) form_field_slider_wide_pane

0x562f,	// (0x000348f0) data_form_pane

0xb226,	// (0x0003a4e7) form_field_data_pane_t1

0x563b,	// (0x000348fc) input_focus_pane

0x5649,	// (0x0003490a) data_form_wide_pane

0x1acd,	// (0x00030d8e) form_field_data_wide_pane_t1

0x5455,	// (0x00034716) input_focus_pane_cp6

0xb23e,	// (0x0003a4ff) form_field_popup_pane_t1

0x563b,	// (0x000348fc) input_focus_pane_cp7

0x562f,	// (0x000348f0) list_form_pane

0x1b0f,	// (0x00030dd0) form_field_popup_wide_pane_t1

0x563b,	// (0x000348fc) input_focus_pane_cp8

0x5669,	// (0x0003492a) list_form_wide_pane

0xb25e,	// (0x0003a51f) form_field_slider_pane_t1_ParamLimits

0xb25e,	// (0x0003a51f) form_field_slider_pane_t1

0xb274,	// (0x0003a535) form_field_slider_pane_t2_ParamLimits

0xb274,	// (0x0003a535) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0003e923) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0003e923) form_field_slider_pane_t

0x5186,	// (0x00034447) input_focus_pane_cp9_ParamLimits

0x5186,	// (0x00034447) input_focus_pane_cp9

0xb289,	// (0x0003a54a) slider_cont_pane_ParamLimits

0xb289,	// (0x0003a54a) slider_cont_pane

0x5678,	// (0x00034939) form_field_slider_wide_pane_t1_ParamLimits

0x5678,	// (0x00034939) form_field_slider_wide_pane_t1

0x1b6b,	// (0x00030e2c) form_field_slider_wide_pane_t2_ParamLimits

0x1b6b,	// (0x00030e2c) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0003e928) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0003e928) form_field_slider_wide_pane_t

0x5186,	// (0x00034447) input_focus_pane_cp10_ParamLimits

0x5186,	// (0x00034447) input_focus_pane_cp10

0xb29d,	// (0x0003a55e) slider_cont_pane_cp1_ParamLimits

0xb29d,	// (0x0003a55e) slider_cont_pane_cp1

0xb2b3,	// (0x0003a574) slider_form_pane_cp

0x568a,	// (0x0003494b) input_focus_pane_g1

0x5692,	// (0x00034953) input_focus_pane_g2

0x569a,	// (0x0003495b) input_focus_pane_g3

0x56a2,	// (0x00034963) input_focus_pane_g4

0x56aa,	// (0x0003496b) input_focus_pane_g5

0x56b2,	// (0x00034973) input_focus_pane_g6

0x56ba,	// (0x0003497b) input_focus_pane_g7

0x56c2,	// (0x00034983) input_focus_pane_g8

0x56ca,	// (0x0003498b) input_focus_pane_g9

0x4f7b,	// (0x0003423c) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0003e92d) input_focus_pane_g

0x692e,	// (0x00035bef) wait_border_pane_g3_copy1

0xb2bb,	// (0x0003a57c) data_form_pane_t1

0x4f7b,	// (0x0003423c) wait_anim_pane_g1_copy1

0xb3d9,	// (0x0003a69a) data_form_wide_pane_t1

0xb2d3,	// (0x0003a594) list_form_graphic_pane_cp_ParamLimits

0xb2d3,	// (0x0003a594) list_form_graphic_pane_cp

0x7558,	// (0x00036819) slider_form_pane_g1

0x7561,	// (0x00036822) slider_form_pane_g2

0x0006,

0xf963,	// (0x0003ec24) slider_form_pane_g

0x1bb5,	// (0x00030e76) list_form_graphic_pane_ParamLimits

0x1bb5,	// (0x00030e76) list_form_graphic_pane

0x1bdf,	// (0x00030ea0) list_form_graphic_pane_g1

0x1be7,	// (0x00030ea8) list_form_graphic_pane_t1_ParamLimits

0x1be7,	// (0x00030ea8) list_form_graphic_pane_t1

0x504b,	// (0x0003430c) list_highlight_pane_cp5_ParamLimits

0x504b,	// (0x0003430c) list_highlight_pane_cp5

0xb2e6,	// (0x0003a5a7) find_pane_g1

0x56d2,	// (0x00034993) input_find_pane

0xb2f1,	// (0x0003a5b2) input_find_pane_g1_ParamLimits

0xb2f1,	// (0x0003a5b2) input_find_pane_g1

0xb2fd,	// (0x0003a5be) input_find_pane_t1_ParamLimits

0xb2fd,	// (0x0003a5be) input_find_pane_t1

0xb312,	// (0x0003a5d3) input_find_pane_t2_ParamLimits

0xb312,	// (0x0003a5d3) input_find_pane_t2

0x0001,

0xf681,	// (0x0003e942) input_find_pane_t_ParamLimits

0xf681,	// (0x0003e942) input_find_pane_t

0x56db,	// (0x0003499c) input_focus_pane_cp5_ParamLimits

0x56db,	// (0x0003499c) input_focus_pane_cp5

0x5186,	// (0x00034447) bg_popup_window_pane_cp2_ParamLimits

0x5186,	// (0x00034447) bg_popup_window_pane_cp2

0x56fa,	// (0x000349bb) listscroll_menu_pane_ParamLimits

0x56fa,	// (0x000349bb) listscroll_menu_pane

0x5706,	// (0x000349c7) popup_submenu_window_ParamLimits

0x5706,	// (0x000349c7) popup_submenu_window

0x572a,	// (0x000349eb) find_popup_pane_g1

0x5732,	// (0x000349f3) input_popup_find_pane_cp

0x573c,	// (0x000349fd) input_focus_pane_cp4_ParamLimits

0x573c,	// (0x000349fd) input_focus_pane_cp4

0x574a,	// (0x00034a0b) input_popup_find_pane_t1_ParamLimits

0x574a,	// (0x00034a0b) input_popup_find_pane_t1

0x4ffd,	// (0x000342be) bg_popup_sub_pane_cp

0x5778,	// (0x00034a39) listscroll_popup_sub_pane

0x5780,	// (0x00034a41) list_submenu_pane_ParamLimits

0x5780,	// (0x00034a41) list_submenu_pane

0x5791,	// (0x00034a52) scroll_pane_cp4

0x5799,	// (0x00034a5a) list_single_popup_submenu_pane_ParamLimits

0x5799,	// (0x00034a5a) list_single_popup_submenu_pane

0x57ab,	// (0x00034a6c) list_single_popup_submenu_pane_g1

0x57b3,	// (0x00034a74) list_single_popup_submenu_pane_t1_ParamLimits

0x57b3,	// (0x00034a74) list_single_popup_submenu_pane_t1

0x5186,	// (0x00034447) bg_active_tab_pane_cp1_ParamLimits

0x5186,	// (0x00034447) bg_active_tab_pane_cp1

0x6bdc,	// (0x00035e9d) tabs_2_active_pane_g1

0xf41f,	// (0x0003e6e0) tabs_2_active_pane_t1

0x5186,	// (0x00034447) bg_passive_tab_pane_cp1_ParamLimits

0x5186,	// (0x00034447) bg_passive_tab_pane_cp1

0x6bdc,	// (0x00035e9d) tabs_2_passive_pane_g1

0xf41f,	// (0x0003e6e0) tabs_2_passive_pane_t1

0x504b,	// (0x0003430c) bg_active_tab_pane_cp4

0xf435,	// (0x0003e6f6) tabs_2_long_active_pane_t1

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp4

0x640e,	// (0x000356cf) list_single_midp_graphic_pane_g4_ParamLimits

0x504b,	// (0x0003430c) bg_active_tab_pane_cp5

0xf44c,	// (0x0003e70d) tabs_3_long_active_pane_t1

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp5

0x640e,	// (0x000356cf) list_single_midp_graphic_pane_g4

0x504b,	// (0x0003430c) bg_popup_window_pane_cp13_ParamLimits

0x504b,	// (0x0003430c) bg_popup_window_pane_cp13

0x57d1,	// (0x00034a92) listscroll_popup_fast_pane_ParamLimits

0x57d1,	// (0x00034a92) listscroll_popup_fast_pane

0x57e0,	// (0x00034aa1) grid_popup_fast_pane_ParamLimits

0x57e0,	// (0x00034aa1) grid_popup_fast_pane

0x57f2,	// (0x00034ab3) scroll_pane_cp9_ParamLimits

0x57f2,	// (0x00034ab3) scroll_pane_cp9

0x8822,	// (0x00037ae3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8822,	// (0x00037ae3) list_single_graphic_hl_pane_t1_cp2

0x5816,	// (0x00034ad7) input_focus_pane_cp20_ParamLimits

0x5816,	// (0x00034ad7) input_focus_pane_cp20

0x5824,	// (0x00034ae5) query_popup_data_pane_t1_ParamLimits

0x5824,	// (0x00034ae5) query_popup_data_pane_t1

0x5837,	// (0x00034af8) query_popup_data_pane_t2_ParamLimits

0x5837,	// (0x00034af8) query_popup_data_pane_t2

0x587d,	// (0x00034b3e) query_popup_data_pane_t3_ParamLimits

0x587d,	// (0x00034b3e) query_popup_data_pane_t3

0x58be,	// (0x00034b7f) query_popup_data_pane_t4_ParamLimits

0x58be,	// (0x00034b7f) query_popup_data_pane_t4

0x58fa,	// (0x00034bbb) query_popup_data_pane_t5_ParamLimits

0x58fa,	// (0x00034bbb) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0003e947) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0003e947) query_popup_data_pane_t

0x568a,	// (0x0003494b) bg_set_opt_pane_g1

0x5692,	// (0x00034953) bg_set_opt_pane_g2

0x569a,	// (0x0003495b) bg_set_opt_pane_g3

0x56a2,	// (0x00034963) bg_set_opt_pane_g4

0x56aa,	// (0x0003496b) bg_set_opt_pane_g5

0x56b2,	// (0x00034973) bg_set_opt_pane_g6

0x56ba,	// (0x0003497b) bg_set_opt_pane_g7

0x56c2,	// (0x00034983) bg_set_opt_pane_g8

0x56ca,	// (0x0003498b) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0003e952) bg_set_opt_pane_g

0x29de,	// (0x00031c9f) control_top_pane_stacon_ParamLimits

0x29de,	// (0x00031c9f) control_top_pane_stacon

0x2a31,	// (0x00031cf2) signal_pane_stacon_ParamLimits

0x2a31,	// (0x00031cf2) signal_pane_stacon

0x5ced,	// (0x00034fae) stacon_top_pane_g1_ParamLimits

0x5ced,	// (0x00034fae) stacon_top_pane_g1

0x2a56,	// (0x00031d17) title_pane_stacon_ParamLimits

0x2a56,	// (0x00031d17) title_pane_stacon

0x2a78,	// (0x00031d39) uni_indicator_pane_stacon_ParamLimits

0x2a78,	// (0x00031d39) uni_indicator_pane_stacon

0x2a8d,	// (0x00031d4e) battery_pane_stacon_ParamLimits

0x2a8d,	// (0x00031d4e) battery_pane_stacon

0x2acd,	// (0x00031d8e) control_bottom_pane_stacon_ParamLimits

0x2acd,	// (0x00031d8e) control_bottom_pane_stacon

0x2aec,	// (0x00031dad) navi_pane_stacon_ParamLimits

0x2aec,	// (0x00031dad) navi_pane_stacon

0x5d0f,	// (0x00034fd0) stacon_bottom_pane_g1_ParamLimits

0x5d0f,	// (0x00034fd0) stacon_bottom_pane_g1

0x5931,	// (0x00034bf2) aid_levels_signal_lsc_ParamLimits

0x5931,	// (0x00034bf2) aid_levels_signal_lsc

0x278e,	// (0x00031a4f) signal_pane_stacon_g1_ParamLimits

0x278e,	// (0x00031a4f) signal_pane_stacon_g1

0x279a,	// (0x00031a5b) signal_pane_stacon_g2_ParamLimits

0x279a,	// (0x00031a5b) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0003e965) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003e965) signal_pane_stacon_g

0x27ce,	// (0x00031a8f) title_pane_stacon_t1_ParamLimits

0x27ce,	// (0x00031a8f) title_pane_stacon_t1

0x594b,	// (0x00034c0c) uni_indicator_pane_stacon_g1

0x5955,	// (0x00034c16) uni_indicator_pane_stacon_g2

0x595f,	// (0x00034c20) uni_indicator_pane_stacon_g3

0x5969,	// (0x00034c2a) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0003e971) uni_indicator_pane_stacon_g

0x27f3,	// (0x00031ab4) control_top_pane_stacon_g1

0x27fb,	// (0x00031abc) control_top_pane_stacon_t1_ParamLimits

0x27fb,	// (0x00031abc) control_top_pane_stacon_t1

0x5973,	// (0x00034c34) aid_levels_battery_lsc_ParamLimits

0x5973,	// (0x00034c34) aid_levels_battery_lsc

0x282c,	// (0x00031aed) battery_pane_stacon_g1_ParamLimits

0x282c,	// (0x00031aed) battery_pane_stacon_g1

0x2838,	// (0x00031af9) battery_pane_stacon_g2_ParamLimits

0x2838,	// (0x00031af9) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0003e97a) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0003e97a) battery_pane_stacon_g

0x2867,	// (0x00031b28) navi_icon_pane_stacon

0x2877,	// (0x00031b38) navi_navi_pane_stacon

0x2867,	// (0x00031b28) navi_text_pane_stacon

0x27f3,	// (0x00031ab4) control_bottom_pane_stacon_g1

0x2887,	// (0x00031b48) control_bottom_pane_stacon_t1_ParamLimits

0x2887,	// (0x00031b48) control_bottom_pane_stacon_t1

0xf462,	// (0x0003e723) grid_app_pane_ParamLimits

0xf462,	// (0x0003e723) grid_app_pane

0xf490,	// (0x0003e751) scroll_pane_cp15_ParamLimits

0xf490,	// (0x0003e751) scroll_pane_cp15

0xf4a3,	// (0x0003e764) cell_app_pane_ParamLimits

0xf4a3,	// (0x0003e764) cell_app_pane

0xf4e0,	// (0x0003e7a1) cell_app_pane_g1_ParamLimits

0xf4e0,	// (0x0003e7a1) cell_app_pane_g1

0x599b,	// (0x00034c5c) cell_app_pane_g2_ParamLimits

0x599b,	// (0x00034c5c) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0003e97f) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0003e97f) cell_app_pane_g

0xf504,	// (0x0003e7c5) cell_app_pane_t1_ParamLimits

0xf504,	// (0x0003e7c5) cell_app_pane_t1

0x59a7,	// (0x00034c68) grid_highlight_pane_ParamLimits

0x59a7,	// (0x00034c68) grid_highlight_pane

0x568a,	// (0x0003494b) cell_highlight_pane_g1

0x5692,	// (0x00034953) cell_highlight_pane_g2

0x569a,	// (0x0003495b) cell_highlight_pane_g3

0x56a2,	// (0x00034963) cell_highlight_pane_g4

0x56aa,	// (0x0003496b) cell_highlight_pane_g5

0x56b2,	// (0x00034973) cell_highlight_pane_g6

0x56ba,	// (0x0003497b) cell_highlight_pane_g7

0x56c2,	// (0x00034983) cell_highlight_pane_g8

0x56ca,	// (0x0003498b) cell_highlight_pane_g9

0x4f7b,	// (0x0003423c) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0003e92d) cell_highlight_pane_g

0x59b8,	// (0x00034c79) bg_scroll_pane

0x28cb,	// (0x00031b8c) scroll_handle_pane

0x59ff,	// (0x00034cc0) scroll_bg_pane_g1

0x5a14,	// (0x00034cd5) scroll_bg_pane_g2

0x5a2c,	// (0x00034ced) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0003e984) scroll_bg_pane_g

0x5a41,	// (0x00034d02) scroll_handle_focus_pane_ParamLimits

0x5a41,	// (0x00034d02) scroll_handle_focus_pane

0x59ff,	// (0x00034cc0) scroll_handle_pane_g1

0x5a4e,	// (0x00034d0f) scroll_handle_pane_g2

0x5a2c,	// (0x00034ced) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0003e98b) scroll_handle_pane_g

0x573c,	// (0x000349fd) bg_popup_sub_pane_cp21_ParamLimits

0x573c,	// (0x000349fd) bg_popup_sub_pane_cp21

0x5a62,	// (0x00034d23) popup_fep_japan_predictive_window_t1_ParamLimits

0x5a62,	// (0x00034d23) popup_fep_japan_predictive_window_t1

0x5a79,	// (0x00034d3a) popup_fep_japan_predictive_window_t2_ParamLimits

0x5a79,	// (0x00034d3a) popup_fep_japan_predictive_window_t2

0x5aac,	// (0x00034d6d) popup_fep_japan_predictive_window_t3_ParamLimits

0x5aac,	// (0x00034d6d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0003e992) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0003e992) popup_fep_japan_predictive_window_t

0x4ffd,	// (0x000342be) bg_popup_sub_pane_cp23

0x5ae3,	// (0x00034da4) listscroll_japin_cand_pane

0x5aeb,	// (0x00034dac) popup_fep_japan_candidate_window_t1

0x5af9,	// (0x00034dba) candidate_pane_ParamLimits

0x5af9,	// (0x00034dba) candidate_pane

0x5b0c,	// (0x00034dcd) scroll_pane_cp30

0x5b14,	// (0x00034dd5) list_single_popup_jap_candidate_pane_ParamLimits

0x5b14,	// (0x00034dd5) list_single_popup_jap_candidate_pane

0x4ffd,	// (0x000342be) list_highlight_pane_cp30

0x5b29,	// (0x00034dea) list_single_popup_jap_candidate_pane_t1

0x08f3,	// (0x0002fbb4) level_1_signal

0x0905,	// (0x0002fbc6) level_2_signal

0x0918,	// (0x0002fbd9) level_3_signal

0x092b,	// (0x0002fbec) level_4_signal

0x093e,	// (0x0002fbff) level_5_signal

0x0951,	// (0x0002fc12) level_6_signal

0x0964,	// (0x0002fc25) level_7_signal

0x08f3,	// (0x0002fbb4) level_1_battery

0x0905,	// (0x0002fbc6) level_2_battery

0x0918,	// (0x0002fbd9) level_3_battery

0x092b,	// (0x0002fbec) level_4_battery

0x093e,	// (0x0002fbff) level_5_battery

0x0951,	// (0x0002fc12) level_6_battery

0x0964,	// (0x0002fc25) level_7_battery

0x5b50,	// (0x00034e11) list_menu_pane_ParamLimits

0x5b50,	// (0x00034e11) list_menu_pane

0x5b66,	// (0x00034e27) scroll_pane_cp25_ParamLimits

0x5b66,	// (0x00034e27) scroll_pane_cp25

0x0977,	// (0x0002fc38) list_double2_graphic_pane_cp2_ParamLimits

0x0977,	// (0x0002fc38) list_double2_graphic_pane_cp2

0x0977,	// (0x0002fc38) list_double2_large_graphic_pane_cp2_ParamLimits

0x0977,	// (0x0002fc38) list_double2_large_graphic_pane_cp2

0x0977,	// (0x0002fc38) list_double2_pane_cp2_ParamLimits

0x0977,	// (0x0002fc38) list_double2_pane_cp2

0x0977,	// (0x0002fc38) list_double_graphic_pane_cp2_ParamLimits

0x0977,	// (0x0002fc38) list_double_graphic_pane_cp2

0x0977,	// (0x0002fc38) list_double_large_graphic_pane_cp2_ParamLimits

0x0977,	// (0x0002fc38) list_double_large_graphic_pane_cp2

0x0977,	// (0x0002fc38) list_double_number_pane_cp2_ParamLimits

0x0977,	// (0x0002fc38) list_double_number_pane_cp2

0x0977,	// (0x0002fc38) list_double_pane_cp2_ParamLimits

0x0977,	// (0x0002fc38) list_double_pane_cp2

0x0992,	// (0x0002fc53) list_single_2graphic_pane_cp2_ParamLimits

0x0992,	// (0x0002fc53) list_single_2graphic_pane_cp2

0x0992,	// (0x0002fc53) list_single_graphic_heading_pane_cp2_ParamLimits

0x0992,	// (0x0002fc53) list_single_graphic_heading_pane_cp2

0x0992,	// (0x0002fc53) list_single_graphic_pane_cp2_ParamLimits

0x0992,	// (0x0002fc53) list_single_graphic_pane_cp2

0x0992,	// (0x0002fc53) list_single_heading_pane_cp2_ParamLimits

0x0992,	// (0x0002fc53) list_single_heading_pane_cp2

0x09a3,	// (0x0002fc64) list_single_large_graphic_pane_cp2_ParamLimits

0x09a3,	// (0x0002fc64) list_single_large_graphic_pane_cp2

0x0992,	// (0x0002fc53) list_single_number_heading_pane_cp2_ParamLimits

0x0992,	// (0x0002fc53) list_single_number_heading_pane_cp2

0x0992,	// (0x0002fc53) list_single_number_pane_cp2_ParamLimits

0x0992,	// (0x0002fc53) list_single_number_pane_cp2

0x09b3,	// (0x0002fc74) list_single_pane_cp2_ParamLimits

0x09b3,	// (0x0002fc74) list_single_pane_cp2

0x5b88,	// (0x00034e49) bg_popup_sub_pane_cp22

0x297a,	// (0x00031c3b) popup_side_volume_key_window_g1

0x299e,	// (0x00031c5f) popup_side_volume_key_window_t1

0x29ba,	// (0x00031c7b) volume_small_pane_cp1

0x5186,	// (0x00034447) bg_popup_sub_pane_cp24_ParamLimits

0x5186,	// (0x00034447) bg_popup_sub_pane_cp24

0x5b9e,	// (0x00034e5f) fep_china_uni_candidate_pane_ParamLimits

0x5b9e,	// (0x00034e5f) fep_china_uni_candidate_pane

0x5bb2,	// (0x00034e73) fep_china_uni_entry_pane

0x5bc2,	// (0x00034e83) popup_fep_china_uni_window_g1

0x5bde,	// (0x00034e9f) fep_china_uni_entry_pane_g1

0x5be6,	// (0x00034ea7) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0003e9c3) fep_china_uni_entry_pane_g

0x5bee,	// (0x00034eaf) fep_entry_item_pane

0x5bf8,	// (0x00034eb9) fep_candidate_item_pane

0x5c00,	// (0x00034ec1) fep_china_uni_candidate_pane_g1

0x5c08,	// (0x00034ec9) fep_china_uni_candidate_pane_g2

0x5c10,	// (0x00034ed1) fep_china_uni_candidate_pane_g3

0x5c18,	// (0x00034ed9) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0003e9c8) fep_china_uni_candidate_pane_g

0x4f7b,	// (0x0003423c) fep_entry_item_pane_g1

0x5c20,	// (0x00034ee1) fep_entry_item_pane_t1_ParamLimits

0x5c20,	// (0x00034ee1) fep_entry_item_pane_t1

0x5c36,	// (0x00034ef7) fep_candidate_item_pane_t1_ParamLimits

0x5c36,	// (0x00034ef7) fep_candidate_item_pane_t1

0x5c4b,	// (0x00034f0c) fep_candidate_item_pane_t2_ParamLimits

0x5c4b,	// (0x00034f0c) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0003e9d1) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0003e9d1) fep_candidate_item_pane_t

0x504b,	// (0x0003430c) list_highlight_pane_cp31_ParamLimits

0x504b,	// (0x0003430c) list_highlight_pane_cp31

0x5c5d,	// (0x00034f1e) level_1_signal_lsc

0x5c66,	// (0x00034f27) level_2_signal_lsc

0x5c6f,	// (0x00034f30) level_3_signal_lsc

0x5c78,	// (0x00034f39) level_4_signal_lsc

0x5c81,	// (0x00034f42) level_5_signal_lsc

0x5c8a,	// (0x00034f4b) level_6_signal_lsc

0x5c93,	// (0x00034f54) level_7_signal_lsc

0x5c93,	// (0x00034f54) level_1_battery_lsc

0x5c9c,	// (0x00034f5d) level_2_battery_lsc

0x5ca5,	// (0x00034f66) level_3_battery_lsc

0x5cae,	// (0x00034f6f) level_4_battery_lsc

0x5cb7,	// (0x00034f78) level_5_battery_lsc

0x5cc0,	// (0x00034f81) level_6_battery_lsc

0x5c5d,	// (0x00034f1e) level_7_battery_lsc

0x5cc9,	// (0x00034f8a) scroll_handle_focus_pane_g1

0x5cd2,	// (0x00034f93) scroll_handle_focus_pane_g2

0x5cdb,	// (0x00034f9c) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0003e9d6) scroll_handle_focus_pane_g

0xb327,	// (0x0003a5e8) list_single_2graphic_pane_g1_ParamLimits

0xb327,	// (0x0003a5e8) list_single_2graphic_pane_g1

0xb711,	// (0x0003a9d2) list_single_2graphic_pane_g2_ParamLimits

0xb711,	// (0x0003a9d2) list_single_2graphic_pane_g2

0x2761,	// (0x00031a22) list_single_2graphic_pane_g3_ParamLimits

0x2761,	// (0x00031a22) list_single_2graphic_pane_g3

0xb333,	// (0x0003a5f4) list_single_2graphic_pane_g4_ParamLimits

0xb333,	// (0x0003a5f4) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0003e9dd) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0003e9dd) list_single_2graphic_pane_g

0xb33f,	// (0x0003a600) list_single_2graphic_pane_t1_ParamLimits

0xb33f,	// (0x0003a600) list_single_2graphic_pane_t1

0xb778,	// (0x0003aa39) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb778,	// (0x0003aa39) list_double2_graphic_large_graphic_pane_g1

0xb75e,	// (0x0003aa1f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb75e,	// (0x0003aa1f) list_double2_graphic_large_graphic_pane_g2

0xb746,	// (0x0003aa07) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb746,	// (0x0003aa07) list_double2_graphic_large_graphic_pane_g3

0xb788,	// (0x0003aa49) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb788,	// (0x0003aa49) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0003e9e6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0003e9e6) list_double2_graphic_large_graphic_pane_g

0xb36d,	// (0x0003a62e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb36d,	// (0x0003a62e) list_double2_graphic_large_graphic_pane_t1

0xb383,	// (0x0003a644) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb383,	// (0x0003a644) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0003e9ef) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0003e9ef) list_double2_graphic_large_graphic_pane_t

0x5db6,	// (0x00035077) popup_fast_swap_window_ParamLimits

0x5db6,	// (0x00035077) popup_fast_swap_window

0x5dd2,	// (0x00035093) popup_side_volume_key_window

0x5dec,	// (0x000350ad) stacon_top_pane

0x5df6,	// (0x000350b7) status_pane_ParamLimits

0x5df6,	// (0x000350b7) status_pane

0x4f71,	// (0x00034232) status_small_pane

0x4ffd,	// (0x000342be) control_pane

0x4ffd,	// (0x000342be) stacon_bottom_pane

0x55d6,	// (0x00034897) scroll_pane_cp121

0x5626,	// (0x000348e7) set_content_pane

0x6bca,	// (0x00035e8b) bg_active_tab_pane_g1_cp1

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp1

0x6bd3,	// (0x00035e94) bg_active_tab_pane_g3_cp1

0x6bca,	// (0x00035e8b) bg_passive_tab_pane_g1_cp1

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp1

0x6bd3,	// (0x00035e94) bg_passive_tab_pane_g3_cp1

0x0a42,	// (0x0002fd03) bg_active_tab_pane_g1_cp2

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp2

0x0a39,	// (0x0002fcfa) bg_active_tab_pane_g3_cp2

0x0a42,	// (0x0002fd03) bg_passive_tab_pane_g1_cp2

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp2

0x0a39,	// (0x0002fcfa) bg_passive_tab_pane_g3_cp2

0x0a54,	// (0x0002fd15) bg_active_tab_pane_g1_cp3

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp3

0x0a4b,	// (0x0002fd0c) bg_active_tab_pane_g3_cp3

0x0a54,	// (0x0002fd15) bg_passive_tab_pane_g1_cp3

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp3

0x0a4b,	// (0x0002fd0c) bg_passive_tab_pane_g3_cp3

0x0a66,	// (0x0002fd27) bg_active_tab_pane_g1_cp4

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp4

0x0a5d,	// (0x0002fd1e) bg_active_tab_pane_g3_cp4

0x0a66,	// (0x0002fd27) bg_passive_tab_pane_g1_cp4

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp4

0x0a5d,	// (0x0002fd1e) bg_passive_tab_pane_g3_cp4

0x5d2b,	// (0x00034fec) bg_active_tab_pane_g1_cp5

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp5

0x5d34,	// (0x00034ff5) bg_active_tab_pane_g3_cp5

0x5d2b,	// (0x00034fec) bg_passive_tab_pane_g1_cp5

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp5

0x5d34,	// (0x00034ff5) bg_passive_tab_pane_g3_cp5

0xe4ee,	// (0x0003d7af) list_set_graphic_pane_ParamLimits

0xe4ee,	// (0x0003d7af) list_set_graphic_pane

0x4ffd,	// (0x000342be) bg_set_opt_pane_cp4

0x5d3d,	// (0x00034ffe) list_set_graphic_pane_g1_ParamLimits

0x5d3d,	// (0x00034ffe) list_set_graphic_pane_g1

0x5d49,	// (0x0003500a) list_set_graphic_pane_g2_ParamLimits

0x5d49,	// (0x0003500a) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0003e9f4) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0003e9f4) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0003ed6b) volume_small_pane_cp_g

0x5d6b,	// (0x0003502c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5d6b,	// (0x0003502c) list_double2_large_graphic_pane_g1_cp2

0x5d77,	// (0x00035038) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5d77,	// (0x00035038) list_double2_large_graphic_pane_g2_cp2

0x5d86,	// (0x00035047) list_double2_large_graphic_pane_g3_cp2

0x5d8e,	// (0x0003504f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5d8e,	// (0x0003504f) list_double2_large_graphic_pane_t1_cp2

0x5da4,	// (0x00035065) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5da4,	// (0x00035065) list_double2_large_graphic_pane_t2_cp2

0x7310,	// (0x000365d1) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x7310,	// (0x000365d1) list_double_large_graphic_pane_g1_cp2

0x7321,	// (0x000365e2) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x7321,	// (0x000365e2) list_double_large_graphic_pane_g2_cp2

0x5ed1,	// (0x00035192) list_double_large_graphic_pane_g3_cp2

0x7330,	// (0x000365f1) list_double_large_graphic_pane_g4_cp

0x7338,	// (0x000365f9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7338,	// (0x000365f9) list_double_large_graphic_pane_t1_cp2

0x734f,	// (0x00036610) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x734f,	// (0x00036610) list_double_large_graphic_pane_t2_cp2

0x5e04,	// (0x000350c5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5e04,	// (0x000350c5) list_double2_graphic_pane_g1_cp2

0x5e10,	// (0x000350d1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5e10,	// (0x000350d1) list_double2_graphic_pane_g2_cp2

0x5e1f,	// (0x000350e0) list_double2_graphic_pane_g3_cp2

0x5e27,	// (0x000350e8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5e27,	// (0x000350e8) list_double2_graphic_pane_t1_cp2

0x5e3d,	// (0x000350fe) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5e3d,	// (0x000350fe) list_double2_graphic_pane_t2_cp2

0x5e4f,	// (0x00035110) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5e4f,	// (0x00035110) list_single_number_heading_pane_g1_cp2

0x5e5b,	// (0x0003511c) list_single_number_heading_pane_g2_cp2

0x5e63,	// (0x00035124) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5e63,	// (0x00035124) list_single_number_heading_pane_t1_cp2

0x5e79,	// (0x0003513a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5e79,	// (0x0003513a) list_single_number_heading_pane_t2_cp2

0x5e8b,	// (0x0003514c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5e8b,	// (0x0003514c) list_single_number_heading_pane_t3_cp2

0x5e4f,	// (0x00035110) list_single_heading_pane_g1_cp2_ParamLimits

0x5e4f,	// (0x00035110) list_single_heading_pane_g1_cp2

0x5e5b,	// (0x0003511c) list_single_heading_pane_g2_cp2

0x5e63,	// (0x00035124) list_single_heading_pane_t1_cp2_ParamLimits

0x5e63,	// (0x00035124) list_single_heading_pane_t1_cp2

0x711a,	// (0x000363db) list_single_heading_pane_t2_cp2_ParamLimits

0x711a,	// (0x000363db) list_single_heading_pane_t2_cp2

0x706a,	// (0x0003632b) list_double_graphic_pane_g1_cp2_ParamLimits

0x706a,	// (0x0003632b) list_double_graphic_pane_g1_cp2

0x7076,	// (0x00036337) list_double_graphic_pane_g2_cp2_ParamLimits

0x7076,	// (0x00036337) list_double_graphic_pane_g2_cp2

0x7085,	// (0x00036346) list_double_graphic_pane_g3_cp2

0x708d,	// (0x0003634e) list_double_graphic_pane_t1_cp2_ParamLimits

0x708d,	// (0x0003634e) list_double_graphic_pane_t1_cp2

0x70a3,	// (0x00036364) list_double_graphic_pane_t2_cp2_ParamLimits

0x70a3,	// (0x00036364) list_double_graphic_pane_t2_cp2

0x5ec5,	// (0x00035186) list_double_number_pane_g1_cp2_ParamLimits

0x5ec5,	// (0x00035186) list_double_number_pane_g1_cp2

0x5ed1,	// (0x00035192) list_double_number_pane_g2_cp2

0x7030,	// (0x000362f1) list_double_number_pane_t1_cp2_ParamLimits

0x7030,	// (0x000362f1) list_double_number_pane_t1_cp2

0x7042,	// (0x00036303) list_double_number_pane_t2_cp2_ParamLimits

0x7042,	// (0x00036303) list_double_number_pane_t2_cp2

0x7058,	// (0x00036319) list_double_number_pane_t3_cp2_ParamLimits

0x7058,	// (0x00036319) list_double_number_pane_t3_cp2

0x6fa8,	// (0x00036269) list_single_graphic_pane_g1_cp2_ParamLimits

0x6fa8,	// (0x00036269) list_single_graphic_pane_g1_cp2

0x5e4f,	// (0x00035110) list_single_graphic_pane_g2_cp2_ParamLimits

0x5e4f,	// (0x00035110) list_single_graphic_pane_g2_cp2

0x5e5b,	// (0x0003511c) list_single_graphic_pane_g3_cp2

0x6f80,	// (0x00036241) list_single_graphic_pane_t1_cp2_ParamLimits

0x6f80,	// (0x00036241) list_single_graphic_pane_t1_cp2

0x5e4f,	// (0x00035110) list_single_number_pane_g1_cp2_ParamLimits

0x5e4f,	// (0x00035110) list_single_number_pane_g1_cp2

0x5e5b,	// (0x0003511c) list_single_number_pane_g2_cp2

0x6f80,	// (0x00036241) list_single_number_pane_t1_cp2_ParamLimits

0x6f80,	// (0x00036241) list_single_number_pane_t1_cp2

0x6f96,	// (0x00036257) list_single_number_pane_t2_cp2_ParamLimits

0x6f96,	// (0x00036257) list_single_number_pane_t2_cp2

0x5d77,	// (0x00035038) list_double2_pane_g1_cp2_ParamLimits

0x5d77,	// (0x00035038) list_double2_pane_g1_cp2

0x5d86,	// (0x00035047) list_double2_pane_g2_cp2

0x5e9d,	// (0x0003515e) list_double2_pane_t1_cp2_ParamLimits

0x5e9d,	// (0x0003515e) list_double2_pane_t1_cp2

0x5eb3,	// (0x00035174) list_double2_pane_t2_cp2_ParamLimits

0x5eb3,	// (0x00035174) list_double2_pane_t2_cp2

0x5ec5,	// (0x00035186) list_double_pane_g1_cp2_ParamLimits

0x5ec5,	// (0x00035186) list_double_pane_g1_cp2

0x5ed1,	// (0x00035192) list_double_pane_g2_cp2

0x5ed9,	// (0x0003519a) list_double_pane_t1_cp2_ParamLimits

0x5ed9,	// (0x0003519a) list_double_pane_t1_cp2

0x5eef,	// (0x000351b0) list_double_pane_t2_cp2_ParamLimits

0x5eef,	// (0x000351b0) list_double_pane_t2_cp2

0x5f1e,	// (0x000351df) list_single_pane_cp2_g3

0x5e4f,	// (0x00035110) list_single_pane_g1_cp2_ParamLimits

0x5e4f,	// (0x00035110) list_single_pane_g1_cp2

0x5e5b,	// (0x0003511c) list_single_pane_g2_cp2

0x5f2e,	// (0x000351ef) list_single_pane_t1_cp2_ParamLimits

0x5f2e,	// (0x000351ef) list_single_pane_t1_cp2

0x5f46,	// (0x00035207) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5f46,	// (0x00035207) list_single_large_graphic_pane_g1_cp2

0x5f52,	// (0x00035213) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5f52,	// (0x00035213) list_single_large_graphic_pane_g2_cp2

0x5f5e,	// (0x0003521f) list_single_large_graphic_pane_g3_cp2

0x5f66,	// (0x00035227) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5f66,	// (0x00035227) list_single_large_graphic_pane_g4_cp1

0x5f80,	// (0x00035241) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5f80,	// (0x00035241) list_single_large_graphic_pane_t1_cp2

0x6f62,	// (0x00036223) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6f62,	// (0x00036223) list_single_graphic_heading_pane_g1_cp2

0x6f3d,	// (0x000361fe) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6f3d,	// (0x000361fe) list_single_graphic_heading_pane_g4_cp2

0x5e5b,	// (0x0003511c) list_single_graphic_heading_pane_g5_cp2

0x5e63,	// (0x00035124) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e63,	// (0x00035124) list_single_graphic_heading_pane_t1_cp2

0x6f6e,	// (0x0003622f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x6f6e,	// (0x0003622f) list_single_graphic_heading_pane_t2_cp2

0x6f31,	// (0x000361f2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6f31,	// (0x000361f2) list_single_2graphic_pane_g1_cp2

0x6f3d,	// (0x000361fe) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6f3d,	// (0x000361fe) list_single_2graphic_pane_g2_cp2

0x5e5b,	// (0x0003511c) list_single_2graphic_pane_g3_cp2

0x640e,	// (0x000356cf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x640e,	// (0x000356cf) list_single_2graphic_pane_g4_cp2

0x6f4c,	// (0x0003620d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6f4c,	// (0x0003620d) list_single_2graphic_pane_t1_cp2

0x4f7b,	// (0x0003423c) list_highlight_pane_g10_cp1

0x6b05,	// (0x00035dc6) list_highlight_pane_g1_cp1

0x6b0d,	// (0x00035dce) list_highlight_pane_g2_cp1

0x6b15,	// (0x00035dd6) list_highlight_pane_g3_cp1

0x6b1d,	// (0x00035dde) list_highlight_pane_g4_cp1

0x6b25,	// (0x00035de6) list_highlight_pane_g5_cp1

0x6b2d,	// (0x00035dee) list_highlight_pane_g6_cp1

0x6b35,	// (0x00035df6) list_highlight_pane_g7_cp1

0x6b3d,	// (0x00035dfe) list_highlight_pane_g8_cp1

0x6b45,	// (0x00035e06) list_highlight_pane_g9_cp1

0xc2e7,	// (0x0003b5a8) form_field_slider_pane_t3

0xc2f5,	// (0x0003b5b6) form_field_slider_pane_t4

0x6a4f,	// (0x00035d10) slider_form_pane_ParamLimits

0x6a4f,	// (0x00035d10) slider_form_pane

0x4ffd,	// (0x000342be) control_abbreviations

0x4ffd,	// (0x000342be) control_conventions

0x4ffd,	// (0x000342be) control_definitions

0x4ffd,	// (0x000342be) format_table_attribute

0x7164,	// (0x00036425) bg_popup_preview_window_pane_g9

0x4ffd,	// (0x000342be) format_table_data2

0x4ffd,	// (0x000342be) format_table_data3

0x4ffd,	// (0x000342be) format_table_data_example

0x0008,

0x4ffd,	// (0x000342be) intro_purpose

0xf8c3,	// (0x0003eb84) bg_popup_preview_window_pane_g

0x4ffd,	// (0x000342be) texts_category

0x4ffd,	// (0x000342be) texts_graphics

0x5f96,	// (0x00035257) text_digital

0x5fa5,	// (0x00035266) text_primary

0x5fb4,	// (0x00035275) text_primary_small

0x5fc3,	// (0x00035284) text_secondary

0x5fd2,	// (0x00035293) text_title

0x75d8,	// (0x00036899) bg_passive_tab_pane_g1_cp3_srt

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp3_srt

0x75e1,	// (0x000368a2) bg_passive_tab_pane_g3_cp3_srt

0x5186,	// (0x00034447) bg_active_tab_pane_cp3_srt_ParamLimits

0x5186,	// (0x00034447) bg_active_tab_pane_cp3_srt

0x6bb6,	// (0x00035e77) tabs_4_active_pane_srt_g1

0xf1b3,	// (0x0003e474) tabs_4_active_pane_srt_t1_ParamLimits

0xf1b3,	// (0x0003e474) tabs_4_active_pane_srt_t1

0x75d8,	// (0x00036899) bg_active_tab_pane_g1_cp3_copy1

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp3_copy1

0x75e1,	// (0x000368a2) bg_active_tab_pane_g3_cp3_copy1

0x504b,	// (0x0003430c) tabs_2_long_active_pane_srt_ParamLimits

0x504b,	// (0x0003430c) tabs_2_long_active_pane_srt

0x504b,	// (0x0003430c) tabs_2_long_passive_pane_srt_ParamLimits

0x504b,	// (0x0003430c) tabs_2_long_passive_pane_srt

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp4_srt_ParamLimits

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp4_srt

0x7513,	// (0x000367d4) bg_passive_tab_pane_g1_cp4_srt

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp4_srt

0x751c,	// (0x000367dd) bg_passive_tab_pane_g3_cp4_srt

0x504b,	// (0x0003430c) bg_active_tab_pane_cp4_srt_ParamLimits

0x504b,	// (0x0003430c) bg_active_tab_pane_cp4_srt

0xf435,	// (0x0003e6f6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xf435,	// (0x0003e6f6) tabs_2_long_active_pane_srt_t1

0x7513,	// (0x000367d4) bg_active_tab_pane_g1_cp4_srt

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp4_srt

0x751c,	// (0x000367dd) bg_active_tab_pane_g3_cp4_srt

0x5186,	// (0x00034447) tabs_3_long_active_pane_srt_ParamLimits

0x5186,	// (0x00034447) tabs_3_long_active_pane_srt

0x5186,	// (0x00034447) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x5186,	// (0x00034447) tabs_3_long_passive_pane_cp_srt

0x5186,	// (0x00034447) tabs_3_long_passive_pane_srt_ParamLimits

0x5186,	// (0x00034447) tabs_3_long_passive_pane_srt

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp5_srt_ParamLimits

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp5_srt

0x5d2b,	// (0x00034fec) bg_passive_tab_pane_g1_cp5_srt

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp5_srt

0x5d34,	// (0x00034ff5) bg_passive_tab_pane_g3_cp5_srt

0x504b,	// (0x0003430c) bg_active_tab_pane_cp5_srt_ParamLimits

0x504b,	// (0x0003430c) bg_active_tab_pane_cp5_srt

0xf44c,	// (0x0003e70d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xf44c,	// (0x0003e70d) tabs_3_long_active_pane_srt_t1

0x5d2b,	// (0x00034fec) bg_active_tab_pane_g1_cp5_srt

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp5_srt

0x5d34,	// (0x00034ff5) bg_active_tab_pane_g3_cp5_srt

0x7505,	// (0x000367c6) navi_text_pane_srt_t1

0x74fd,	// (0x000367be) navi_icon_pane_srt_g1

0x60ea,	// (0x000353ab) midp_editing_number_pane_srt

0x5fe1,	// (0x000352a2) midp_ticker_pane_srt

0x60f2,	// (0x000353b3) midp_ticker_pane_srt_g1

0x60fa,	// (0x000353bb) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0003ea13) midp_ticker_pane_srt_g

0x6102,	// (0x000353c3) midp_ticker_pane_srt_t1

0x74ee,	// (0x000367af) midp_editing_number_pane_t1_copy1

0x0a6f,	// (0x0002fd30) listscroll_midp_pane

0x0a6f,	// (0x0002fd30) midp_form_pane

0x5fe9,	// (0x000352aa) midp_info_popup_window_ParamLimits

0x5fe9,	// (0x000352aa) midp_info_popup_window

0x573c,	// (0x000349fd) bg_popup_sub_pane_cp50_ParamLimits

0x573c,	// (0x000349fd) bg_popup_sub_pane_cp50

0x6764,	// (0x00035a25) listscroll_midp_info_pane_ParamLimits

0x6764,	// (0x00035a25) listscroll_midp_info_pane

0x674c,	// (0x00035a0d) listscroll_form_midp_pane_ParamLimits

0x674c,	// (0x00035a0d) listscroll_form_midp_pane

0x6758,	// (0x00035a19) scroll_bar_cp050

0xc2db,	// (0x0003b59c) list_midp_pane

0x7dca,	// (0x0003708b) signal_pane_g2_cp

0x667e,	// (0x0003593f) listscroll_midp_info_pane_t1_ParamLimits

0x667e,	// (0x0003593f) listscroll_midp_info_pane_t1

0x6696,	// (0x00035957) listscroll_midp_info_pane_t2_ParamLimits

0x6696,	// (0x00035957) listscroll_midp_info_pane_t2

0x66d4,	// (0x00035995) listscroll_midp_info_pane_t3_ParamLimits

0x66d4,	// (0x00035995) listscroll_midp_info_pane_t3

0x670e,	// (0x000359cf) listscroll_midp_info_pane_t4_ParamLimits

0x670e,	// (0x000359cf) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x0003eabf) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x0003eabf) listscroll_midp_info_pane_t

0x5791,	// (0x00034a52) scroll_pane_cp21

0x6622,	// (0x000358e3) form_midp_field_choice_group_pane

0x662b,	// (0x000358ec) form_midp_field_text_pane

0x6664,	// (0x00035925) form_midp_field_time_pane

0x666c,	// (0x0003592d) form_midp_gauge_slider_pane

0x6675,	// (0x00035936) form_midp_gauge_wait_pane

0x4ffd,	// (0x000342be) form_midp_image_pane

0xb3b2,	// (0x0003a673) list_single_midp_pane_ParamLimits

0xb3b2,	// (0x0003a673) list_single_midp_pane

0x65f0,	// (0x000358b1) form_midp_field_text_pane_t1

0x6446,	// (0x00035707) input_focus_pane_cp050

0x6611,	// (0x000358d2) list_midp_form_text_pane

0x65bf,	// (0x00035880) form_midp_field_choice_group_pane_t1

0x65cd,	// (0x0003588e) input_focus_pane_cp051

0x65e1,	// (0x000358a2) list_midp_choice_pane

0x4ffd,	// (0x000342be) status_idle_pane

0x65a3,	// (0x00035864) form_midp_field_time_pane_t1

0x4f7b,	// (0x0003423c) wait_anim_pane_g2_copy1

0x65b1,	// (0x00035872) form_midp_field_time_pane_t2

0x0001,

0x6054,	// (0x00035315) aid_navinavi_width_2_pane

0xf7f9,	// (0x0003eaba) form_midp_field_time_pane_t

0x4ffd,	// (0x000342be) input_focus_pane_cp052

0x4ffd,	// (0x000342be) bg_input_focus_pane_cp040

0x657f,	// (0x00035840) form_midp_gauge_slider_pane_t1

0x658d,	// (0x0003584e) form_midp_gauge_slider_pane_t2

0xc2bf,	// (0x0003b580) form_midp_gauge_slider_pane_t3

0xc2cd,	// (0x0003b58e) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x0003eab1) form_midp_gauge_slider_pane_t

0x659b,	// (0x0003585c) form_midp_slider_pane

0x504b,	// (0x0003430c) bg_input_focus_pane_cp041_ParamLimits

0x504b,	// (0x0003430c) bg_input_focus_pane_cp041

0x654f,	// (0x00035810) form_midp_gauge_wait_pane_t1_ParamLimits

0x654f,	// (0x00035810) form_midp_gauge_wait_pane_t1

0x6561,	// (0x00035822) form_midp_gauge_wait_pane_t2_ParamLimits

0x6561,	// (0x00035822) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x0003eaac) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x0003eaac) form_midp_gauge_wait_pane_t

0x6573,	// (0x00035834) form_midp_wait_pane_ParamLimits

0x6573,	// (0x00035834) form_midp_wait_pane

0x6519,	// (0x000357da) form_midp_image_pane_g1

0x6522,	// (0x000357e3) form_midp_image_pane_t1

0x6531,	// (0x000357f2) form_midp_image_pane_t2

0x6540,	// (0x00035801) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x0003eaa5) form_midp_image_pane_t

0x6510,	// (0x000357d1) list_single_midp_pane_g1

0x1dbb,	// (0x0003107c) list_single_midp_pane_t1

0x64fc,	// (0x000357bd) list_midp_form_item_pane_ParamLimits

0x64fc,	// (0x000357bd) list_midp_form_item_pane

0x5ffc,	// (0x000352bd) list_midp_form_item_pane_t1

0x600b,	// (0x000352cc) midp_ticker_pane_g1

0x6017,	// (0x000352d8) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0003e9f9) midp_ticker_pane_g

0x6023,	// (0x000352e4) midp_ticker_pane_t1

0x74ee,	// (0x000367af) midp_editing_number_pane_t1

0x7582,	// (0x00036843) midp_editing_number_pane

0x758e,	// (0x0003684f) midp_ticker_pane

0x74de,	// (0x0003679f) ai_message_heading_pane

0x4ffd,	// (0x000342be) bg_popup_window_pane_cp14

0x74e6,	// (0x000367a7) listscroll_ai_message_pane

0x7468,	// (0x00036729) ai_message_heading_pane_g1_ParamLimits

0x7468,	// (0x00036729) ai_message_heading_pane_g1

0x7474,	// (0x00036735) ai_message_heading_pane_g2_ParamLimits

0x7474,	// (0x00036735) ai_message_heading_pane_g2

0x7480,	// (0x00036741) ai_message_heading_pane_g3_ParamLimits

0x7480,	// (0x00036741) ai_message_heading_pane_g3

0x748c,	// (0x0003674d) ai_message_heading_pane_g4_ParamLimits

0x748c,	// (0x0003674d) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x0003ebe6) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x0003ebe6) ai_message_heading_pane_g

0x7498,	// (0x00036759) ai_message_heading_pane_t1_ParamLimits

0x7498,	// (0x00036759) ai_message_heading_pane_t1

0x74b2,	// (0x00036773) ai_message_heading_pane_t2_ParamLimits

0x74b2,	// (0x00036773) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x0003ebef) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x0003ebef) ai_message_heading_pane_t

0x74c4,	// (0x00036785) bg_popup_heading_pane_cp1_ParamLimits

0x74c4,	// (0x00036785) bg_popup_heading_pane_cp1

0x7456,	// (0x00036717) list_ai_message_pane_ParamLimits

0x7456,	// (0x00036717) list_ai_message_pane

0x5791,	// (0x00034a52) scroll_pane_cp10

0x73f2,	// (0x000366b3) list_ai_message_pane_g1

0x73fa,	// (0x000366bb) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0003ebc3) list_ai_message_pane_g

0x7402,	// (0x000366c3) list_ai_message_pane_t1_ParamLimits

0x7402,	// (0x000366c3) list_ai_message_pane_t1

0x7417,	// (0x000366d8) list_ai_message_pane_t2_ParamLimits

0x7417,	// (0x000366d8) list_ai_message_pane_t2

0x742c,	// (0x000366ed) list_ai_message_pane_t3_ParamLimits

0x742c,	// (0x000366ed) list_ai_message_pane_t3

0x7441,	// (0x00036702) list_ai_message_pane_t4_ParamLimits

0x7441,	// (0x00036702) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x0003ebc8) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x0003ebc8) list_ai_message_pane_t

0x73e0,	// (0x000366a1) cell_ai_soft_ind_pane_ParamLimits

0x73e0,	// (0x000366a1) cell_ai_soft_ind_pane

0x6035,	// (0x000352f6) cell_ai_soft_ind_pane_g1_ParamLimits

0x6035,	// (0x000352f6) cell_ai_soft_ind_pane_g1

0x4ffd,	// (0x000342be) grid_highlight_cp1

0x6042,	// (0x00035303) text_secondary_cp56_ParamLimits

0x6042,	// (0x00035303) text_secondary_cp56

0x73b5,	// (0x00036676) example_general_pane_ParamLimits

0x73b5,	// (0x00036676) example_general_pane

0x73c1,	// (0x00036682) example_parent_pane_g1_ParamLimits

0x73c1,	// (0x00036682) example_parent_pane_g1

0x73cd,	// (0x0003668e) example_parent_pane_t1_ParamLimits

0x73cd,	// (0x0003668e) example_parent_pane_t1

0xbbe5,	// (0x0003aea6) popup_preview_text_window_ParamLimits

0xbbe5,	// (0x0003aea6) popup_preview_text_window

0x5f26,	// (0x000351e7) list_single_pane_cp2_g4

0x5262,	// (0x00034523) bg_popup_preview_window_pane_ParamLimits

0x5262,	// (0x00034523) bg_popup_preview_window_pane

0x716c,	// (0x0003642d) popup_preview_text_window_t1_ParamLimits

0x716c,	// (0x0003642d) popup_preview_text_window_t1

0x718a,	// (0x0003644b) popup_preview_text_window_t2_ParamLimits

0x718a,	// (0x0003644b) popup_preview_text_window_t2

0x71d3,	// (0x00036494) popup_preview_text_window_t3_ParamLimits

0x71d3,	// (0x00036494) popup_preview_text_window_t3

0x7218,	// (0x000364d9) popup_preview_text_window_t4_ParamLimits

0x7218,	// (0x000364d9) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x0003eb97) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x0003eb97) popup_preview_text_window_t

0x7296,	// (0x00036557) scroll_pane_cp11

0x63c6,	// (0x00035687) bg_popup_preview_window_pane_g1

0x712c,	// (0x000363ed) bg_popup_preview_window_pane_g2

0x7134,	// (0x000363f5) bg_popup_preview_window_pane_g3

0x713c,	// (0x000363fd) bg_popup_preview_window_pane_g4

0x7144,	// (0x00036405) bg_popup_preview_window_pane_g5

0x714c,	// (0x0003640d) bg_popup_preview_window_pane_g6

0x7154,	// (0x00036415) bg_popup_preview_window_pane_g7

0x715c,	// (0x0003641d) bg_popup_preview_window_pane_g8

0x23d3,	// (0x00031694) aid_popup_width_pane

0xbb67,	// (0x0003ae28) popup_midp_note_alarm_window_ParamLimits

0xbb67,	// (0x0003ae28) popup_midp_note_alarm_window

0x562f,	// (0x000348f0) data_form_pane_ParamLimits

0xb21c,	// (0x0003a4dd) form_field_data_pane_g1

0xb226,	// (0x0003a4e7) form_field_data_pane_t1_ParamLimits

0x563b,	// (0x000348fc) input_focus_pane_ParamLimits

0x5649,	// (0x0003490a) data_form_wide_pane_ParamLimits

0x1ac1,	// (0x00030d82) form_field_data_wide_pane_g1

0x1acd,	// (0x00030d8e) form_field_data_wide_pane_t1_ParamLimits

0x5455,	// (0x00034716) input_focus_pane_cp6_ParamLimits

0xf413,	// (0x0003e6d4) input_popup_find_pane_g1_ParamLimits

0xf413,	// (0x0003e6d4) input_popup_find_pane_g1

0x2848,	// (0x00031b09) aid_navi_side_left_pane

0x2858,	// (0x00031b19) aid_navi_side_right_pane

0x6c14,	// (0x00035ed5) bg_popup_window_pane_cp30_ParamLimits

0x6c14,	// (0x00035ed5) bg_popup_window_pane_cp30

0x6c8e,	// (0x00035f4f) popup_midp_note_alarm_window_g1_ParamLimits

0x6c8e,	// (0x00035f4f) popup_midp_note_alarm_window_g1

0x6cbe,	// (0x00035f7f) popup_midp_note_alarm_window_t1_ParamLimits

0x6cbe,	// (0x00035f7f) popup_midp_note_alarm_window_t1

0x6d5f,	// (0x00036020) popup_midp_note_alarm_window_t2_ParamLimits

0x6d5f,	// (0x00036020) popup_midp_note_alarm_window_t2

0x6e0d,	// (0x000360ce) popup_midp_note_alarm_window_t3_ParamLimits

0x6e0d,	// (0x000360ce) popup_midp_note_alarm_window_t3

0x6e35,	// (0x000360f6) popup_midp_note_alarm_window_t4_ParamLimits

0x6e35,	// (0x000360f6) popup_midp_note_alarm_window_t4

0x6e55,	// (0x00036116) popup_midp_note_alarm_window_t5_ParamLimits

0x6e55,	// (0x00036116) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x0003eb34) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x0003eb34) popup_midp_note_alarm_window_t

0x6f01,	// (0x000361c2) wait_bar_pane_cp1_ParamLimits

0x6f01,	// (0x000361c2) wait_bar_pane_cp1

0x4ffd,	// (0x000342be) wait_anim_pane_copy1

0x4ffd,	// (0x000342be) wait_border_pane_copy1

0x691c,	// (0x00035bdd) wait_border_pane_g1_copy1

0x1ae7,	// (0x00030da8) form_field_popup_pane_g1

0xb23e,	// (0x0003a4ff) form_field_popup_pane_t1_ParamLimits

0x563b,	// (0x000348fc) input_focus_pane_cp7_ParamLimits

0x562f,	// (0x000348f0) list_form_pane_ParamLimits

0x1b07,	// (0x00030dc8) form_field_popup_wide_pane_g1

0x1b0f,	// (0x00030dd0) form_field_popup_wide_pane_t1_ParamLimits

0x563b,	// (0x000348fc) input_focus_pane_cp8_ParamLimits

0x5669,	// (0x0003492a) list_form_wide_pane_ParamLimits

0x7609,	// (0x000368ca) aid_size_cell_graphic_pane

0xb2bb,	// (0x0003a57c) data_form_pane_t1_ParamLimits

0xb3d9,	// (0x0003a69a) data_form_wide_pane_t1_ParamLimits

0xbf43,	// (0x0003b204) bg_status_flat_pane

0xf110,	// (0x0003e3d1) title_pane_t1_ParamLimits

0x5013,	// (0x000342d4) title_pane_t2_ParamLimits

0x5039,	// (0x000342fa) title_pane_t3_ParamLimits

0xf532,	// (0x0003e7f3) title_pane_t_ParamLimits

0x08f3,	// (0x0002fbb4) level_1_signal_ParamLimits

0x0905,	// (0x0002fbc6) level_2_signal_ParamLimits

0x0918,	// (0x0002fbd9) level_3_signal_ParamLimits

0x092b,	// (0x0002fbec) level_4_signal_ParamLimits

0x093e,	// (0x0002fbff) level_5_signal_ParamLimits

0x0951,	// (0x0002fc12) level_6_signal_ParamLimits

0x0964,	// (0x0002fc25) level_7_signal_ParamLimits

0x08f3,	// (0x0002fbb4) level_1_battery_ParamLimits

0x0905,	// (0x0002fbc6) level_2_battery_ParamLimits

0x0918,	// (0x0002fbd9) level_3_battery_ParamLimits

0x092b,	// (0x0002fbec) level_4_battery_ParamLimits

0x093e,	// (0x0002fbff) level_5_battery_ParamLimits

0x0951,	// (0x0002fc12) level_6_battery_ParamLimits

0x0964,	// (0x0002fc25) level_7_battery_ParamLimits

0x6b05,	// (0x00035dc6) bg_status_flat_pane_g1

0x6b0d,	// (0x00035dce) bg_status_flat_pane_g2

0x6b15,	// (0x00035dd6) bg_status_flat_pane_g3

0x6b1d,	// (0x00035dde) bg_status_flat_pane_g4

0x6b25,	// (0x00035de6) bg_status_flat_pane_g5

0x6b2d,	// (0x00035dee) bg_status_flat_pane_g6

0x6b35,	// (0x00035df6) bg_status_flat_pane_g7

0xf19d,	// (0x0003e45e) tabs_3_active_pane_t1_ParamLimits

0xf19d,	// (0x0003e45e) tabs_3_passive_pane_t1_ParamLimits

0xf1b3,	// (0x0003e474) tabs_4_active_pane_t1_ParamLimits

0xf1b3,	// (0x0003e474) tabs_4_1_passive_pane_t1_ParamLimits

0xf41f,	// (0x0003e6e0) tabs_2_active_pane_t1_ParamLimits

0xf41f,	// (0x0003e6e0) tabs_2_passive_pane_t1_ParamLimits

0x504b,	// (0x0003430c) bg_active_tab_pane_cp4_ParamLimits

0xf435,	// (0x0003e6f6) tabs_2_long_active_pane_t1_ParamLimits

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp4_ParamLimits

0x3234,	// (0x000324f5) list_single_midp_graphic_pane_t1_ParamLimits

0x504b,	// (0x0003430c) bg_active_tab_pane_cp5_ParamLimits

0xf44c,	// (0x0003e70d) tabs_3_long_active_pane_t1_ParamLimits

0x61fd,	// (0x000354be) bg_passive_tab_pane_cp5_ParamLimits

0x3234,	// (0x000324f5) list_single_midp_graphic_pane_t1

0xbf43,	// (0x0003b204) bg_status_flat_pane_ParamLimits

0x62a5,	// (0x00035566) indicator_pane_cp2_ParamLimits

0x62a5,	// (0x00035566) indicator_pane_cp2

0xc0a9,	// (0x0003b36a) navi_pane_srt_ParamLimits

0xc0a9,	// (0x0003b36a) navi_pane_srt

0x62cd,	// (0x0003558e) popup_clock_digital_analogue_window_cp1

0x5097,	// (0x00034358) indicator_pane_t1

0x5fe1,	// (0x000352a2) copy_highlight_pane

0x5fe1,	// (0x000352a2) cursor_graphics_pane

0x5fe1,	// (0x000352a2) graphic_within_text_pane

0x5fe1,	// (0x000352a2) link_highlight_pane

0x7259,	// (0x0003651a) popup_preview_text_window_t5_ParamLimits

0x7259,	// (0x0003651a) popup_preview_text_window_t5

0x605c,	// (0x0003531d) cursor_digital_pane

0x605c,	// (0x0003531d) cursor_primary_pane

0x606d,	// (0x0003532e) cursor_primary_small_pane

0x6075,	// (0x00035336) cursor_secondary_pane

0x607d,	// (0x0003533e) cursor_title_pane

0x605c,	// (0x0003531d) link_highlight_digital_pane

0x6064,	// (0x00035325) link_highlight_primary_pane

0x606d,	// (0x0003532e) link_highlight_primary_small_pane

0x6075,	// (0x00035336) link_highlight_secondary_pane

0x607d,	// (0x0003533e) link_highlight_title_pane

0x605c,	// (0x0003531d) copy_highlight_digital_pane

0x605c,	// (0x0003531d) copy_highlight_primary_pane

0x606d,	// (0x0003532e) copy_highlight_primary_small_pane

0x6075,	// (0x00035336) copy_highlight_secondary_pane

0x607d,	// (0x0003533e) copy_highlight_title_pane

0x6075,	// (0x00035336) graphic_text_digital_pane

0x6b85,	// (0x00035e46) graphic_text_primary_pane

0x6b8e,	// (0x00035e4f) graphic_text_primary_small_pane

0x606d,	// (0x0003532e) graphic_text_secondary_pane

0x605c,	// (0x0003531d) graphic_text_title_pane

0x0b0b,	// (0x0002fdcc) cursor_primary_pane_g1

0x6b77,	// (0x00035e38) cursor_text_primary_t1

0xc317,	// (0x0003b5d8) cursor_primary_small_pane_g1

0x6b69,	// (0x00035e2a) cursor_text_primary_small_t1

0xc30d,	// (0x0003b5ce) cursor_primary_small_pane_g1_copy1

0x6b5b,	// (0x00035e1c) cursor_text_primary_small_t1_copy1

0x6b4d,	// (0x00035e0e) cursor_text_title_t1

0xc303,	// (0x0003b5c4) cursor_title_pane_g1

0x0b0b,	// (0x0002fdcc) cursor_digital_pane_g1

0x6085,	// (0x00035346) cursor_text_digital_t1

0x6093,	// (0x00035354) link_highlight_primary_pane_g1

0x6af6,	// (0x00035db7) link_highlight_primary_pane_t1

0x6093,	// (0x00035354) link_highlight_primary_small_pane_g1

0x609b,	// (0x0003535c) link_highlight_primary_small_pane_t1

0x60aa,	// (0x0003536b) link_highlight_secondary_pane_g1

0x60b2,	// (0x00035373) link_highlight_secondary_pane_t1

0x6a5b,	// (0x00035d1c) link_highlight_title_pane_g1

0x6a72,	// (0x00035d33) link_highlight_title_pane_t1

0x6a5b,	// (0x00035d1c) link_highlight_digital_pane_g1

0x6a63,	// (0x00035d24) link_highlight_digital_pane_t1

0x6937,	// (0x00035bf8) copy_highlight_primary_pane_g1

0x695d,	// (0x00035c1e) copy_highlight_primary_pane_t1

0x6937,	// (0x00035bf8) copy_highlight_primary_small_pane_g1

0x694e,	// (0x00035c0f) copy_highlight_primary_small_pane_t1

0x60c1,	// (0x00035382) copy_highlight_secondary_pane_g1

0x60c9,	// (0x0003538a) copy_highlight_secondary_pane_t1

0x6937,	// (0x00035bf8) copy_highlight_title_pane_g1

0x693f,	// (0x00035c00) copy_highlight_title_pane_t1

0x6937,	// (0x00035bf8) copy_highlight_digital_pane_g1

0x7704,	// (0x000369c5) copy_highlight_digital_pane_t1

0x7658,	// (0x00036919) graphic_text_primary_pane_g1

0x76e8,	// (0x000369a9) graphic_text_primary_pane_t1

0x76f6,	// (0x000369b7) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x0003ec63) graphic_text_primary_pane_t

0x76c4,	// (0x00036985) graphic_text_primary_small_pane_g1

0x76cc,	// (0x0003698d) graphic_text_primary_small_pane_t1

0x76da,	// (0x0003699b) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x0003ec5e) graphic_text_primary_small_pane_t

0x76a0,	// (0x00036961) graphic_text_secondary_pane_g1

0x76a8,	// (0x00036969) graphic_text_secondary_pane_t1

0x76b6,	// (0x00036977) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x0003ec59) graphic_text_secondary_pane_t

0x767c,	// (0x0003693d) graphic_text_title_pane_g1

0x7684,	// (0x00036945) graphic_text_title_pane_t1

0x7692,	// (0x00036953) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x0003ec54) graphic_text_title_pane_t

0x7658,	// (0x00036919) graphic_text_digital_pane_g1

0x7660,	// (0x00036921) graphic_text_digital_pane_t1

0x766e,	// (0x0003692f) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x0003ec4f) graphic_text_digital_pane_t

0x504b,	// (0x0003430c) navi_icon_pane_srt_ParamLimits

0x504b,	// (0x0003430c) navi_icon_pane_srt

0x4ffd,	// (0x000342be) navi_midp_pane_srt

0x4ffd,	// (0x000342be) navi_navi_pane_srt

0x504b,	// (0x0003430c) navi_text_pane_srt_ParamLimits

0x504b,	// (0x0003430c) navi_text_pane_srt

0x70e5,	// (0x000363a6) navi_navi_icon_text_pane_srt

0x70ed,	// (0x000363ae) navi_navi_pane_srt_g1_ParamLimits

0x70ed,	// (0x000363ae) navi_navi_pane_srt_g1

0x70ff,	// (0x000363c0) navi_navi_pane_srt_g2_ParamLimits

0x70ff,	// (0x000363c0) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x0003ec4a) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x0003ec4a) navi_navi_pane_srt_g

0x7111,	// (0x000363d2) navi_navi_tabs_pane_srt

0x70e5,	// (0x000363a6) navi_navi_text_pane_srt

0x70e5,	// (0x000363a6) navi_navi_volume_pane_srt

0x7649,	// (0x0003690a) navi_navi_text_pane_srt_t1

0x3606,	// (0x000328c7) navi_navi_volume_pane_srt_g1

0x360e,	// (0x000328cf) volume_small_pane_srt_ParamLimits

0x360e,	// (0x000328cf) volume_small_pane_srt

0x2b0b,	// (0x00031dcc) volume_small_pane_srt_g1_ParamLimits

0x2b0b,	// (0x00031dcc) volume_small_pane_srt_g1

0x2b1b,	// (0x00031ddc) volume_small_pane_srt_g2_ParamLimits

0x2b1b,	// (0x00031ddc) volume_small_pane_srt_g2

0x2b2c,	// (0x00031ded) volume_small_pane_srt_g3_ParamLimits

0x2b2c,	// (0x00031ded) volume_small_pane_srt_g3

0x2b3d,	// (0x00031dfe) volume_small_pane_srt_g4_ParamLimits

0x2b3d,	// (0x00031dfe) volume_small_pane_srt_g4

0x2b4e,	// (0x00031e0f) volume_small_pane_srt_g5_ParamLimits

0x2b4e,	// (0x00031e0f) volume_small_pane_srt_g5

0x2b5f,	// (0x00031e20) volume_small_pane_srt_g6_ParamLimits

0x2b5f,	// (0x00031e20) volume_small_pane_srt_g6

0x2b70,	// (0x00031e31) volume_small_pane_srt_g7_ParamLimits

0x2b70,	// (0x00031e31) volume_small_pane_srt_g7

0x2b81,	// (0x00031e42) volume_small_pane_srt_g8_ParamLimits

0x2b81,	// (0x00031e42) volume_small_pane_srt_g8

0x2b92,	// (0x00031e53) volume_small_pane_srt_g9_ParamLimits

0x2b92,	// (0x00031e53) volume_small_pane_srt_g9

0x2ba3,	// (0x00031e64) volume_small_pane_srt_g10_ParamLimits

0x2ba3,	// (0x00031e64) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0003e9fe) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0003e9fe) volume_small_pane_srt_g

0x530b,	// (0x000345cc) query_popup_data_pane_cp2

0x762f,	// (0x000368f0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x762f,	// (0x000368f0) navi_navi_icon_text_pane_srt_t1

0x6b85,	// (0x00035e46) navi_tabs_2_long_pane_srt

0x6b85,	// (0x00035e46) navi_tabs_2_pane_srt

0x6b85,	// (0x00035e46) navi_tabs_3_long_pane_srt

0x6b85,	// (0x00035e46) navi_tabs_3_pane_srt

0x6b85,	// (0x00035e46) navi_tabs_4_pane_srt

0x35e6,	// (0x000328a7) tabs_2_active_pane_srt_ParamLimits

0x35e6,	// (0x000328a7) tabs_2_active_pane_srt

0x35f6,	// (0x000328b7) tabs_2_passive_pane_srt_ParamLimits

0x35f6,	// (0x000328b7) tabs_2_passive_pane_srt

0x6446,	// (0x00035707) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6446,	// (0x00035707) bg_passive_tab_pane_cp1_srt

0x6bca,	// (0x00035e8b) bg_passive_tab_pane_g1_cp1_srt

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp1_srt

0x6bd3,	// (0x00035e94) bg_passive_tab_pane_g3_cp1_srt

0x5186,	// (0x00034447) bg_active_tab_pane_cp1_srt_ParamLimits

0x5186,	// (0x00034447) bg_active_tab_pane_cp1_srt

0x6bdc,	// (0x00035e9d) tabs_2_active_pane_srt_g1

0xf41f,	// (0x0003e6e0) tabs_2_active_pane_srt_t1_ParamLimits

0xf41f,	// (0x0003e6e0) tabs_2_active_pane_srt_t1

0x6bca,	// (0x00035e8b) bg_active_tab_pane_g1_cp1_srt

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp1_srt

0x6bd3,	// (0x00035e94) bg_active_tab_pane_g3_cp1_srt

0x35b3,	// (0x00032874) tabs_3_active_pane_srt_ParamLimits

0x35b3,	// (0x00032874) tabs_3_active_pane_srt

0x35c4,	// (0x00032885) tabs_3_passive_pane_cp_srt_ParamLimits

0x35c4,	// (0x00032885) tabs_3_passive_pane_cp_srt

0x35d5,	// (0x00032896) tabs_3_passive_pane_srt_ParamLimits

0x35d5,	// (0x00032896) tabs_3_passive_pane_srt

0x6446,	// (0x00035707) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6446,	// (0x00035707) bg_passive_tab_pane_cp2_srt

0x60d8,	// (0x00035399) bg_passive_tab_pane_g1_cp2_srt

0x5ce4,	// (0x00034fa5) bg_passive_tab_pane_g2_cp2_srt

0x60e1,	// (0x000353a2) bg_passive_tab_pane_g3_cp2_srt

0x5186,	// (0x00034447) bg_active_tab_pane_cp2_srt_ParamLimits

0x5186,	// (0x00034447) bg_active_tab_pane_cp2_srt

0x761f,	// (0x000368e0) tabs_3_active_pane_srt_g1

0xf19d,	// (0x0003e45e) tabs_3_active_pane_srt_t1_ParamLimits

0xf19d,	// (0x0003e45e) tabs_3_active_pane_srt_t1

0x60d8,	// (0x00035399) bg_active_tab_pane_g1_cp2_srt

0x5ce4,	// (0x00034fa5) bg_active_tab_pane_g2_cp2_srt

0x60e1,	// (0x000353a2) bg_active_tab_pane_g3_cp2_srt

0x356b,	// (0x0003282c) tabs_4_active_pane_srt_ParamLimits

0x356b,	// (0x0003282c) tabs_4_active_pane_srt

0x357d,	// (0x0003283e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x357d,	// (0x0003283e) tabs_4_passive_pane_cp2_srt

0x2d0c,	// (0x00031fcd) aid_size_cell_toolbar

0xb8d7,	// (0x0003ab98) main_idle_act_pane_ParamLimits

0x2e8a,	// (0x0003214b) popup_large_graphic_colour_window_ParamLimits

0xbe35,	// (0x0003b0f6) popup_toolbar_window_ParamLimits

0xbe35,	// (0x0003b0f6) popup_toolbar_window

0x1e36,	// (0x000310f7) list_single_graphic_2heading_pane_ParamLimits

0x1e36,	// (0x000310f7) list_single_graphic_2heading_pane

0x5981,	// (0x00034c42) aid_size_cell_apps_grid_lsc_pane

0x5993,	// (0x00034c54) aid_size_cell_apps_grid_prt_pane

0x61fd,	// (0x000354be) bg_wml_button_pane_cp1_ParamLimits

0x61fd,	// (0x000354be) bg_wml_button_pane_cp1

0x65f0,	// (0x000358b1) form_midp_field_text_pane_t1_ParamLimits

0x6446,	// (0x00035707) input_focus_pane_cp050_ParamLimits

0x6611,	// (0x000358d2) list_midp_form_text_pane_ParamLimits

0x65cd,	// (0x0003588e) input_focus_pane_cp051_ParamLimits

0x65e1,	// (0x000358a2) list_midp_choice_pane_ParamLimits

0x64ca,	// (0x0003578b) list_single_2graphic_pane_cp3_ParamLimits

0x64ca,	// (0x0003578b) list_single_2graphic_pane_cp3

0x64dd,	// (0x0003579e) list_single_midp_graphic_pane_ParamLimits

0x64dd,	// (0x0003579e) list_single_midp_graphic_pane

0x1cb9,	// (0x00030f7a) list_single_graphic_2heading_pane_g1_ParamLimits

0x1cb9,	// (0x00030f7a) list_single_graphic_2heading_pane_g1

0x1cc5,	// (0x00030f86) list_single_graphic_2heading_pane_g4_ParamLimits

0x1cc5,	// (0x00030f86) list_single_graphic_2heading_pane_g4

0x168f,	// (0x00030950) list_single_graphic_2heading_pane_g5_ParamLimits

0x168f,	// (0x00030950) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0003ea51) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0003ea51) list_single_graphic_2heading_pane_g

0x1cd1,	// (0x00030f92) list_single_graphic_2heading_pane_t1_ParamLimits

0x1cd1,	// (0x00030f92) list_single_graphic_2heading_pane_t1

0x1ce5,	// (0x00030fa6) list_single_graphic_2heading_pane_t2_ParamLimits

0x1ce5,	// (0x00030fa6) list_single_graphic_2heading_pane_t2

0x1cff,	// (0x00030fc0) list_single_graphic_2heading_pane_t3_ParamLimits

0x1cff,	// (0x00030fc0) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0003ea58) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0003ea58) list_single_graphic_2heading_pane_t

0x6310,	// (0x000355d1) bg_popup_sub_pane_cp2

0x6336,	// (0x000355f7) grid_toobar_pane

0x31d0,	// (0x00032491) cell_toolbar_pane_ParamLimits

0x31d0,	// (0x00032491) cell_toolbar_pane

0x636c,	// (0x0003562d) cell_toolbar_pane_g1_ParamLimits

0x636c,	// (0x0003562d) cell_toolbar_pane_g1

0x637e,	// (0x0003563f) cell_toolbar_pane_g2_ParamLimits

0x637e,	// (0x0003563f) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0003ea5f) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0003ea5f) cell_toolbar_pane_g

0x63a0,	// (0x00035661) grid_highlight_pane_cp2_ParamLimits

0x63a0,	// (0x00035661) grid_highlight_pane_cp2

0x63ba,	// (0x0003567b) toolbar_button_pane

0x63c6,	// (0x00035687) toolbar_button_pane_g1

0x63ce,	// (0x0003568f) toolbar_button_pane_g2

0x63d6,	// (0x00035697) toolbar_button_pane_g3

0x63de,	// (0x0003569f) toolbar_button_pane_g4

0x63e6,	// (0x000356a7) toolbar_button_pane_g5

0x63ee,	// (0x000356af) toolbar_button_pane_g6

0x63f6,	// (0x000356b7) toolbar_button_pane_g7

0x63fe,	// (0x000356bf) toolbar_button_pane_g8

0x6406,	// (0x000356c7) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0003ea64) toolbar_button_pane_g

0x31ff,	// (0x000324c0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x31ff,	// (0x000324c0) list_single_2graphic_pane_g1_cp3

0xc227,	// (0x0003b4e8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc227,	// (0x0003b4e8) list_single_2graphic_pane_g2_cp3

0x5e5b,	// (0x0003511c) list_single_2graphic_pane_g3_cp3

0x640e,	// (0x000356cf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x640e,	// (0x000356cf) list_single_2graphic_pane_g4_cp3

0x321a,	// (0x000324db) list_single_2graphic_pane_t1_cp3_ParamLimits

0x321a,	// (0x000324db) list_single_2graphic_pane_t1_cp3

0x5e4f,	// (0x00035110) list_single_midp_graphic_pane_g2_ParamLimits

0x5e4f,	// (0x00035110) list_single_midp_graphic_pane_g2

0x1ca9,	// (0x00030f6a) aid_zoom_text_primary

0x2d14,	// (0x00031fd5) aid_zoom_text_secondary

0x6178,	// (0x00035439) status_small_pane_g7_ParamLimits

0x6178,	// (0x00035439) status_small_pane_g7

0x619b,	// (0x0003545c) status_small_pane_t1_ParamLimits

0xf0e5,	// (0x0003e3a6) title_pane_g2

0x0003,

0xf529,	// (0x0003e7ea) title_pane_g

0xf369,	// (0x0003e62a) aid_size_cell_colour_1_pane_ParamLimits

0xf369,	// (0x0003e62a) aid_size_cell_colour_1_pane

0xf37d,	// (0x0003e63e) aid_size_cell_colour_2_pane_ParamLimits

0xf37d,	// (0x0003e63e) aid_size_cell_colour_2_pane

0xf391,	// (0x0003e652) aid_size_cell_colour_3_pane_ParamLimits

0xf391,	// (0x0003e652) aid_size_cell_colour_3_pane

0xf3a5,	// (0x0003e666) aid_size_cell_colour_4_pane_ParamLimits

0xf3a5,	// (0x0003e666) aid_size_cell_colour_4_pane

0x27aa,	// (0x00031a6b) title_pane_stacon_g1_ParamLimits

0x27aa,	// (0x00031a6b) title_pane_stacon_g1

0x69b4,	// (0x00035c75) popup_note_wait_window_g3_ParamLimits

0x69b4,	// (0x00035c75) popup_note_wait_window_g3

0x6a2a,	// (0x00035ceb) popup_note_wait_window_t5_ParamLimits

0x6a2a,	// (0x00035ceb) popup_note_wait_window_t5

0x4ffd,	// (0x000342be) main_feb_china_hwr_fs_writing_pane

0xb938,	// (0x0003abf9) popup_feb_china_hwr_fs_window_ParamLimits

0xb938,	// (0x0003abf9) popup_feb_china_hwr_fs_window

0xc238,	// (0x0003b4f9) aid_size_cell_hwr_fs_ParamLimits

0xc238,	// (0x0003b4f9) aid_size_cell_hwr_fs

0x6446,	// (0x00035707) bg_popup_sub_pane_cp3_ParamLimits

0x6446,	// (0x00035707) bg_popup_sub_pane_cp3

0xc24d,	// (0x0003b50e) grid_hwr_fs_pane_ParamLimits

0xc24d,	// (0x0003b50e) grid_hwr_fs_pane

0x3273,	// (0x00032534) linegrid_hwr_fs_pane_ParamLimits

0x3273,	// (0x00032534) linegrid_hwr_fs_pane

0xc265,	// (0x0003b526) cell_hwr_fs_pane_ParamLimits

0xc265,	// (0x0003b526) cell_hwr_fs_pane

0x6452,	// (0x00035713) linegrid_hwr_fs_pane_g1_ParamLimits

0x6452,	// (0x00035713) linegrid_hwr_fs_pane_g1

0xc285,	// (0x0003b546) linegrid_hwr_fs_pane_g2_ParamLimits

0xc285,	// (0x0003b546) linegrid_hwr_fs_pane_g2

0x645e,	// (0x0003571f) linegrid_hwr_fs_pane_g3_ParamLimits

0x645e,	// (0x0003571f) linegrid_hwr_fs_pane_g3

0x32a1,	// (0x00032562) linegrid_hwr_fs_pane_g4_ParamLimits

0x32a1,	// (0x00032562) linegrid_hwr_fs_pane_g4

0x32bb,	// (0x0003257c) linegrid_hwr_fs_pane_g5_ParamLimits

0x32bb,	// (0x0003257c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x0003ea8a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x0003ea8a) linegrid_hwr_fs_pane_g

0x646a,	// (0x0003572b) cell_hwr_fs_pane_g1_ParamLimits

0x646a,	// (0x0003572b) cell_hwr_fs_pane_g1

0x62de,	// (0x0003559f) cell_hwr_fs_pane_g2_ParamLimits

0x62de,	// (0x0003559f) cell_hwr_fs_pane_g2

0xc297,	// (0x0003b558) cell_hwr_fs_pane_g3_ParamLimits

0xc297,	// (0x0003b558) cell_hwr_fs_pane_g3

0xc2a4,	// (0x0003b565) cell_hwr_fs_pane_g4_ParamLimits

0xc2a4,	// (0x0003b565) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x0003ea95) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x0003ea95) cell_hwr_fs_pane_g

0xc2b1,	// (0x0003b572) cell_hwr_fs_pane_t1

0x4ffd,	// (0x000342be) grid_highlight_pane_cp6

0x4ffd,	// (0x000342be) main_idle_act2_pane

0x5778,	// (0x00034a39) aid_inside_area_popup_secondary

0xc424,	// (0x0003b6e5) aid_inside_area_window_primary_ParamLimits

0xc424,	// (0x0003b6e5) aid_inside_area_window_primary

0x7713,	// (0x000369d4) ai2_news_ticker_pane

0x771b,	// (0x000369dc) aid_size_cell_ai1_link_ParamLimits

0x771b,	// (0x000369dc) aid_size_cell_ai1_link

0xc80f,	// (0x0003bad0) popup_ai2_data_window_ParamLimits

0xc80f,	// (0x0003bad0) popup_ai2_data_window

0x7735,	// (0x000369f6) popup_ai2_link_window_ParamLimits

0x7735,	// (0x000369f6) popup_ai2_link_window

0x6446,	// (0x00035707) bg_popup_sub_pane_cp4_ParamLimits

0x6446,	// (0x00035707) bg_popup_sub_pane_cp4

0x7749,	// (0x00036a0a) grid_ai2_link_pane_ParamLimits

0x7749,	// (0x00036a0a) grid_ai2_link_pane

0x7760,	// (0x00036a21) popup_ai2_link_window_g1_ParamLimits

0x7760,	// (0x00036a21) popup_ai2_link_window_g1

0x776c,	// (0x00036a2d) popup_ai2_link_window_g2_ParamLimits

0x776c,	// (0x00036a2d) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x0003ec68) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x0003ec68) popup_ai2_link_window_g

0x777b,	// (0x00036a3c) ai2_mp_button_pane

0x7783,	// (0x00036a44) ai2_mp_volume_pane

0x65cd,	// (0x0003588e) bg_popup_sub_pane_cp5_ParamLimits

0x65cd,	// (0x0003588e) bg_popup_sub_pane_cp5

0x778b,	// (0x00036a4c) heading_ai2_gene_pane_ParamLimits

0x778b,	// (0x00036a4c) heading_ai2_gene_pane

0x7797,	// (0x00036a58) list_ai2_gene_pane_ParamLimits

0x7797,	// (0x00036a58) list_ai2_gene_pane

0x77df,	// (0x00036aa0) cell_ai2_link_pane_ParamLimits

0x77df,	// (0x00036aa0) cell_ai2_link_pane

0x77f5,	// (0x00036ab6) cell_ai2_link_pane_g1

0x4ffd,	// (0x000342be) grid_highlight_pane_cp7

0x3623,	// (0x000328e4) ai2_mp_volume_pane_g1

0x7892,	// (0x00036b53) ai2_mp_volume_pane_g2

0xc839,	// (0x0003bafa) list_ai2_gene_pane_t1

0x789a,	// (0x00036b5b) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0003ec81) ai2_mp_volume_pane_g

0x362b,	// (0x000328ec) volume_small_pane_cp3

0x78a2,	// (0x00036b63) aid_size_cell_ai2_button

0x78aa,	// (0x00036b6b) grid_ai2_button_pane

0x78b3,	// (0x00036b74) cell_ai2_button_pane_ParamLimits

0x78b3,	// (0x00036b74) cell_ai2_button_pane

0x4f7b,	// (0x0003423c) cell_ai2_button_pane_g1

0x4ffd,	// (0x000342be) grid_highlight_pane_cp8

0x7852,	// (0x00036b13) ai2_gene_pane_t1_ParamLimits

0x7852,	// (0x00036b13) ai2_gene_pane_t1

0xb8bf,	// (0x0003ab80) aid_height_parent_landscape

0x753a,	// (0x000367fb) aid_height_set_list

0x7546,	// (0x00036807) aid_size_parent

0x7609,	// (0x000368ca) aid_size_cell_graphic_pane_ParamLimits

0x77a7,	// (0x00036a68) popup_ai2_data_window_g1_ParamLimits

0x77a7,	// (0x00036a68) popup_ai2_data_window_g1

0x77b3,	// (0x00036a74) ai2_news_ticker_pane_g1

0x77bb,	// (0x00036a7c) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x0003ec6d) ai2_news_ticker_pane_g

0x77c3,	// (0x00036a84) ai2_news_ticker_pane_t1

0x77d1,	// (0x00036a92) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x0003ec72) ai2_news_ticker_pane_t

0x77fe,	// (0x00036abf) heading_ai2_gene_pane_g1

0x7806,	// (0x00036ac7) heading_ai2_gene_pane_t1_ParamLimits

0x7806,	// (0x00036ac7) heading_ai2_gene_pane_t1

0x781b,	// (0x00036adc) list_highlight_pane_cp6

0xc823,	// (0x0003bae4) ai2_gene_pane_ParamLimits

0xc823,	// (0x0003bae4) ai2_gene_pane

0xc847,	// (0x0003bb08) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x0003ec77) list_ai2_gene_pane_t

0x7823,	// (0x00036ae4) list_highlight_pane_cp8_ParamLimits

0x7823,	// (0x00036ae4) list_highlight_pane_cp8

0x7834,	// (0x00036af5) ai2_gene_pane_g1_ParamLimits

0x7834,	// (0x00036af5) ai2_gene_pane_g1

0x7846,	// (0x00036b07) ai2_gene_pane_g2_ParamLimits

0x7846,	// (0x00036b07) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0003ec7c) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0003ec7c) ai2_gene_pane_g

0x55d6,	// (0x00034897) scroll_pane_cp12

0xb87e,	// (0x0003ab3f) control_pane_t3_ParamLimits

0xb87e,	// (0x0003ab3f) control_pane_t3

0x618c,	// (0x0003544d) status_small_pane_g8_ParamLimits

0x618c,	// (0x0003544d) status_small_pane_g8

0xb9ac,	// (0x0003ac6d) popup_find_window_ParamLimits

0xbb9f,	// (0x0003ae60) popup_note_image_window_ParamLimits

0x174c,	// (0x00030a0d) list_double2_graphic_pane_vc_g1_ParamLimits

0x174c,	// (0x00030a0d) list_double2_graphic_pane_vc_g1

0x2755,	// (0x00031a16) list_double2_graphic_pane_vc_g2_ParamLimits

0x2755,	// (0x00031a16) list_double2_graphic_pane_vc_g2

0x2761,	// (0x00031a22) list_double2_graphic_pane_vc_g3_ParamLimits

0x2761,	// (0x00031a22) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0003e85d) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0003e85d) list_double2_graphic_pane_vc_g

0x1758,	// (0x00030a19) list_double2_graphic_pane_vc_t1_ParamLimits

0x1758,	// (0x00030a19) list_double2_graphic_pane_vc_t1

0x2755,	// (0x00031a16) list_single_heading_pane_vc_g1_ParamLimits

0x2755,	// (0x00031a16) list_single_heading_pane_vc_g1

0x2761,	// (0x00031a22) list_single_heading_pane_vc_g2_ParamLimits

0x2761,	// (0x00031a22) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_single_heading_pane_vc_g

0x1d17,	// (0x00030fd8) list_single_heading_pane_vc_t1_ParamLimits

0x1d17,	// (0x00030fd8) list_single_heading_pane_vc_t1

0x1d2d,	// (0x00030fee) list_single_heading_pane_vc_t2_ParamLimits

0x1d2d,	// (0x00030fee) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x0003ea79) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x0003ea79) list_single_heading_pane_vc_t

0x1d3f,	// (0x00031000) list_setting_number_pane_vc_g1_ParamLimits

0x1d3f,	// (0x00031000) list_setting_number_pane_vc_g1

0x1d4b,	// (0x0003100c) list_setting_number_pane_vc_g2_ParamLimits

0x1d4b,	// (0x0003100c) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x0003ea7e) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x0003ea7e) list_setting_number_pane_vc_g

0x1d57,	// (0x00031018) list_setting_number_pane_vc_t1_ParamLimits

0x1d57,	// (0x00031018) list_setting_number_pane_vc_t1

0x1d6b,	// (0x0003102c) list_setting_number_pane_vc_t2_ParamLimits

0x1d6b,	// (0x0003102c) list_setting_number_pane_vc_t2

0x1d87,	// (0x00031048) list_setting_number_pane_vc_t3_ParamLimits

0x1d87,	// (0x00031048) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x0003ea83) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x0003ea83) list_setting_number_pane_vc_t

0x1daf,	// (0x00031070) set_value_pane_vc_ParamLimits

0x1daf,	// (0x00031070) set_value_pane_vc

0x1e36,	// (0x000310f7) list_double2_graphic_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double2_graphic_pane_vc

0x34fd,	// (0x000327be) list_double2_large_graphic_pane_vc_ParamLimits

0x34fd,	// (0x000327be) list_double2_large_graphic_pane_vc

0x1e36,	// (0x000310f7) list_double2_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double2_pane_vc

0x1e36,	// (0x000310f7) list_double_graphic_heading_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double_graphic_heading_pane_vc

0x1e36,	// (0x000310f7) list_double_graphic_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double_graphic_pane_vc

0x1e36,	// (0x000310f7) list_double_heading_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double_heading_pane_vc

0x350e,	// (0x000327cf) list_double_large_graphic_pane_vc_ParamLimits

0x350e,	// (0x000327cf) list_double_large_graphic_pane_vc

0x1e36,	// (0x000310f7) list_double_number_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double_number_pane_vc

0x1e36,	// (0x000310f7) list_double_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double_pane_vc

0x1e36,	// (0x000310f7) list_double_time_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_double_time_pane_vc

0x1e36,	// (0x000310f7) list_setting_number_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_setting_number_pane_vc

0x1e36,	// (0x000310f7) list_setting_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_setting_pane_vc

0x1e36,	// (0x000310f7) list_single_graphic_heading_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_single_graphic_heading_pane_vc

0x1e36,	// (0x000310f7) list_single_heading_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_single_heading_pane_vc

0x1e36,	// (0x000310f7) list_single_number_heading_pane_vc_ParamLimits

0x1e36,	// (0x000310f7) list_single_number_heading_pane_vc

0x174c,	// (0x00030a0d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x174c,	// (0x00030a0d) list_double_graphic_heading_pane_vc_g1

0x2755,	// (0x00031a16) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2755,	// (0x00031a16) list_double_graphic_heading_pane_vc_g2

0x2761,	// (0x00031a22) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2761,	// (0x00031a22) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0003e85d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0003e85d) list_double_graphic_heading_pane_vc_g

0x1e73,	// (0x00031134) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1e73,	// (0x00031134) list_double_graphic_heading_pane_vc_t1

0x1e89,	// (0x0003114a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1e89,	// (0x0003114a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c7,	// (0x0003ec88) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c7,	// (0x0003ec88) list_double_graphic_heading_pane_vc_t

0x1d3f,	// (0x00031000) list_setting_pane_vc_g1_ParamLimits

0x1d3f,	// (0x00031000) list_setting_pane_vc_g1

0x1d4b,	// (0x0003100c) list_setting_pane_vc_g2_ParamLimits

0x1d4b,	// (0x0003100c) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x0003ea7e) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x0003ea7e) list_setting_pane_vc_g

0x1ea1,	// (0x00031162) list_setting_pane_vc_t1_ParamLimits

0x1ea1,	// (0x00031162) list_setting_pane_vc_t1

0x1eb5,	// (0x00031176) list_setting_pane_vc_t2_ParamLimits

0x1eb5,	// (0x00031176) list_setting_pane_vc_t2

0x0001,

0xfa0a,	// (0x0003eccb) list_setting_pane_vc_t_ParamLimits

0xfa0a,	// (0x0003eccb) list_setting_pane_vc_t

0x1daf,	// (0x00031070) set_value_pane_cp_vc_ParamLimits

0x1daf,	// (0x00031070) set_value_pane_cp_vc

0x2755,	// (0x00031a16) list_single_number_heading_pane_vc_g1_ParamLimits

0x2755,	// (0x00031a16) list_single_number_heading_pane_vc_g1

0x2761,	// (0x00031a22) list_single_number_heading_pane_vc_g2_ParamLimits

0x2761,	// (0x00031a22) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_single_number_heading_pane_vc_g

0x1d17,	// (0x00030fd8) list_single_number_heading_pane_vc_t1_ParamLimits

0x1d17,	// (0x00030fd8) list_single_number_heading_pane_vc_t1

0x1ec9,	// (0x0003118a) list_single_number_heading_pane_vc_t2_ParamLimits

0x1ec9,	// (0x0003118a) list_single_number_heading_pane_vc_t2

0x1edb,	// (0x0003119c) list_single_number_heading_pane_vc_t3_ParamLimits

0x1edb,	// (0x0003119c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0f,	// (0x0003ecd0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0003ecd0) list_single_number_heading_pane_vc_t

0x174c,	// (0x00030a0d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x174c,	// (0x00030a0d) list_single_graphic_heading_pane_vc_g1

0x2755,	// (0x00031a16) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2755,	// (0x00031a16) list_single_graphic_heading_pane_vc_g4

0x2761,	// (0x00031a22) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2761,	// (0x00031a22) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0003e85d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0003e85d) list_single_graphic_heading_pane_vc_g

0x1d17,	// (0x00030fd8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1d17,	// (0x00030fd8) list_single_graphic_heading_pane_vc_t1

0x1eed,	// (0x000311ae) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1eed,	// (0x000311ae) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0003ecd7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0003ecd7) list_single_graphic_heading_pane_vc_t

0x2755,	// (0x00031a16) list_double2_pane_vc_g1_ParamLimits

0x2755,	// (0x00031a16) list_double2_pane_vc_g1

0x2761,	// (0x00031a22) list_double2_pane_vc_g2_ParamLimits

0x2761,	// (0x00031a22) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_double2_pane_vc_g

0x1eff,	// (0x000311c0) list_double2_pane_vc_t1_ParamLimits

0x1eff,	// (0x000311c0) list_double2_pane_vc_t1

0x2705,	// (0x000319c6) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2705,	// (0x000319c6) list_double2_large_graphic_pane_vc_g1

0x2711,	// (0x000319d2) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2711,	// (0x000319d2) list_double2_large_graphic_pane_vc_g2

0x271d,	// (0x000319de) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x271d,	// (0x000319de) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x0003e886) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x0003e886) list_double2_large_graphic_pane_vc_g

0x1642,	// (0x00030903) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1642,	// (0x00030903) list_double2_large_graphic_pane_vc_t1

0x1f15,	// (0x000311d6) list_double_time_pane_vc_g1_ParamLimits

0x1f15,	// (0x000311d6) list_double_time_pane_vc_g1

0x1f21,	// (0x000311e2) list_double_time_pane_vc_g2_ParamLimits

0x1f21,	// (0x000311e2) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0003ecdc) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003ecdc) list_double_time_pane_vc_g

0x1f2d,	// (0x000311ee) list_double_time_pane_vc_t1_ParamLimits

0x1f2d,	// (0x000311ee) list_double_time_pane_vc_t1

0x1f4b,	// (0x0003120c) list_double_time_pane_vc_t2_ParamLimits

0x1f4b,	// (0x0003120c) list_double_time_pane_vc_t2

0x1f94,	// (0x00031255) list_double_time_pane_vc_t3_ParamLimits

0x1f94,	// (0x00031255) list_double_time_pane_vc_t3

0x1fa6,	// (0x00031267) list_double_time_pane_vc_t4_ParamLimits

0x1fa6,	// (0x00031267) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0003ece1) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0003ece1) list_double_time_pane_vc_t

0x2755,	// (0x00031a16) list_double_pane_vc_g1_ParamLimits

0x2755,	// (0x00031a16) list_double_pane_vc_g1

0x2761,	// (0x00031a22) list_double_pane_vc_g2_ParamLimits

0x2761,	// (0x00031a22) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_double_pane_vc_g

0x1fb8,	// (0x00031279) list_double_pane_vc_t1_ParamLimits

0x1fb8,	// (0x00031279) list_double_pane_vc_t1

0x1fca,	// (0x0003128b) list_double_pane_vc_t2_ParamLimits

0x1fca,	// (0x0003128b) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0003ecea) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0003ecea) list_double_pane_vc_t

0x2755,	// (0x00031a16) list_double_number_pane_vc_g1_ParamLimits

0x2755,	// (0x00031a16) list_double_number_pane_vc_g1

0x2761,	// (0x00031a22) list_double_number_pane_vc_g2_ParamLimits

0x2761,	// (0x00031a22) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_double_number_pane_vc_g

0x1fe0,	// (0x000312a1) list_double_number_pane_vc_t1_ParamLimits

0x1fe0,	// (0x000312a1) list_double_number_pane_vc_t1

0x1ff4,	// (0x000312b5) list_double_number_pane_vc_t2_ParamLimits

0x1ff4,	// (0x000312b5) list_double_number_pane_vc_t2

0x2006,	// (0x000312c7) list_double_number_pane_vc_t3_ParamLimits

0x2006,	// (0x000312c7) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0003ecef) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003ecef) list_double_number_pane_vc_t

0x3685,	// (0x00032946) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3685,	// (0x00032946) list_double_large_graphic_pane_vc_g1

0x36ad,	// (0x0003296e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x36ad,	// (0x0003296e) list_double_large_graphic_pane_vc_g2

0x36c1,	// (0x00032982) list_double_large_graphic_pane_vc_g3_ParamLimits

0x36c1,	// (0x00032982) list_double_large_graphic_pane_vc_g3

0x201c,	// (0x000312dd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x201c,	// (0x000312dd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0003ecf6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0003ecf6) list_double_large_graphic_pane_vc_g

0x202c,	// (0x000312ed) list_double_large_graphic_pane_vc_t1_ParamLimits

0x202c,	// (0x000312ed) list_double_large_graphic_pane_vc_t1

0x2046,	// (0x00031307) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2046,	// (0x00031307) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003ecff) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003ecff) list_double_large_graphic_pane_vc_t

0x2755,	// (0x00031a16) list_double_heading_pane_vc_g1_ParamLimits

0x2755,	// (0x00031a16) list_double_heading_pane_vc_g1

0x2761,	// (0x00031a22) list_double_heading_pane_vc_g2_ParamLimits

0x2761,	// (0x00031a22) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0003e86e) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0003e86e) list_double_heading_pane_vc_g

0x2066,	// (0x00031327) list_double_heading_pane_vc_t1_ParamLimits

0x2066,	// (0x00031327) list_double_heading_pane_vc_t1

0x1d17,	// (0x00030fd8) list_double_heading_pane_vc_t2_ParamLimits

0x1d17,	// (0x00030fd8) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003ed04) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003ed04) list_double_heading_pane_vc_t

0x2078,	// (0x00031339) list_double_graphic_pane_vc_g1_ParamLimits

0x2078,	// (0x00031339) list_double_graphic_pane_vc_g1

0x2084,	// (0x00031345) list_double_graphic_pane_vc_g2_ParamLimits

0x2084,	// (0x00031345) list_double_graphic_pane_vc_g2

0x2755,	// (0x00031a16) list_double_graphic_pane_vc_g3_ParamLimits

0x2755,	// (0x00031a16) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0003ed09) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0003ed09) list_double_graphic_pane_vc_g

0x20a1,	// (0x00031362) list_double_graphic_pane_vc_t1_ParamLimits

0x20a1,	// (0x00031362) list_double_graphic_pane_vc_t1

0x20bf,	// (0x00031380) list_double_graphic_pane_vc_t2_ParamLimits

0x20bf,	// (0x00031380) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0003ed12) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0003ed12) list_double_graphic_pane_vc_t

0x23db,	// (0x0003169c) aid_size_cell_fastswap

0xb565,	// (0x0003a826) aid_size_cell_touch_ParamLimits

0xb565,	// (0x0003a826) aid_size_cell_touch

0x2528,	// (0x000317e9) popup_fast_swap_wide_window_ParamLimits

0x2528,	// (0x000317e9) popup_fast_swap_wide_window

0xb65d,	// (0x0003a91e) touch_pane_ParamLimits

0xb65d,	// (0x0003a91e) touch_pane

0x19fd,	// (0x00030cbe) button_value_adjust_pane_cp2

0x1a05,	// (0x00030cc6) button_value_adjust_pane_cp4

0x1a25,	// (0x00030ce6) form_field_data_pane_cp2

0xb1e3,	// (0x0003a4a4) form_field_data_wide_pane_cp2

0x59b8,	// (0x00034c79) bg_scroll_pane_ParamLimits

0x28cb,	// (0x00031b8c) scroll_handle_pane_ParamLimits

0x28df,	// (0x00031ba0) scroll_sc2_down_pane_ParamLimits

0x28df,	// (0x00031ba0) scroll_sc2_down_pane

0x59e9,	// (0x00034caa) scroll_sc2_up_pane_ParamLimits

0x59e9,	// (0x00034caa) scroll_sc2_up_pane

0xc969,	// (0x0003bc2a) grid_wheel_folder_pane_g1_ParamLimits

0xc969,	// (0x0003bc2a) grid_wheel_folder_pane_g1

0x2aaf,	// (0x00031d70) clock_nsta_pane_cp2_ParamLimits

0x2aaf,	// (0x00031d70) clock_nsta_pane_cp2

0x0a6f,	// (0x0002fd30) listscroll_midp_pane_ParamLimits

0x0a7e,	// (0x0002fd3f) midp_canvas_pane

0x2cfa,	// (0x00031fbb) nsta_clock_indic_pane

0x61e3,	// (0x000354a4) listscroll_form_pane_vc

0x61eb,	// (0x000354ac) listscroll_set_pane_vc_ParamLimits

0x61eb,	// (0x000354ac) listscroll_set_pane_vc

0xbf6b,	// (0x0003b22c) clock_nsta_pane

0xbf8e,	// (0x0003b24f) indicator_nsta_pane

0x6310,	// (0x000355d1) bg_popup_sub_pane_cp2_ParamLimits

0x6324,	// (0x000355e5) find_pane_cp2_ParamLimits

0x6324,	// (0x000355e5) find_pane_cp2

0x6336,	// (0x000355f7) grid_toobar_pane_ParamLimits

0x641a,	// (0x000356db) list_form_gen_pane_vc_ParamLimits

0x641a,	// (0x000356db) list_form_gen_pane_vc

0x6430,	// (0x000356f1) scroll_pane_cp8_vc_ParamLimits

0x6430,	// (0x000356f1) scroll_pane_cp8_vc

0x6480,	// (0x00035741) data_form_wide_pane_vc_ParamLimits

0x6480,	// (0x00035741) data_form_wide_pane_vc

0x648c,	// (0x0003574d) form_field_data_wide_pane_vc_g1

0x6494,	// (0x00035755) form_field_data_wide_pane_vc_t1_ParamLimits

0x6494,	// (0x00035755) form_field_data_wide_pane_vc_t1

0x563b,	// (0x000348fc) input_focus_pane_cp6_vc_ParamLimits

0x563b,	// (0x000348fc) input_focus_pane_cp6_vc

0xc2db,	// (0x0003b59c) list_midp_pane_ParamLimits

0x6bbe,	// (0x00035e7f) scroll_pane_cp16_ParamLimits

0x6bbe,	// (0x00035e7f) scroll_pane_cp16

0x679a,	// (0x00035a5b) button_value_adjust_pane_ParamLimits

0x679a,	// (0x00035a5b) button_value_adjust_pane

0xc5d9,	// (0x0003b89a) button_value_adjust_pane_cp6_ParamLimits

0xc5d9,	// (0x0003b89a) button_value_adjust_pane_cp6

0xc6e3,	// (0x0003b9a4) settings_code_pane_cp_ParamLimits

0xc6e3,	// (0x0003b9a4) settings_code_pane_cp

0x4f7b,	// (0x0003423c) cell_touch_pane_g1

0x4f7b,	// (0x0003423c) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0003e9a4) cell_touch_pane_g

0xc855,	// (0x0003bb16) cell_touch_pane_cp_ParamLimits

0xc855,	// (0x0003bb16) cell_touch_pane_cp

0xc871,	// (0x0003bb32) cell_touch_pane_ParamLimits

0xc871,	// (0x0003bb32) cell_touch_pane

0x4f7b,	// (0x0003423c) scroll_sc2_down_pane_g1

0x4f7b,	// (0x0003423c) scroll_sc2_up_pane_g1

0x4ffd,	// (0x000342be) bg_set_opt_pane_cp4_vc

0x78c5,	// (0x00036b86) list_set_graphic_pane_vc_g1_ParamLimits

0x78c5,	// (0x00036b86) list_set_graphic_pane_vc_g1

0x78d1,	// (0x00036b92) list_set_graphic_pane_vc_g2_ParamLimits

0x78d1,	// (0x00036b92) list_set_graphic_pane_vc_g2

0x0001,

0xf9cc,	// (0x0003ec8d) list_set_graphic_pane_vc_g_ParamLimits

0xf9cc,	// (0x0003ec8d) list_set_graphic_pane_vc_g

0x78dd,	// (0x00036b9e) text_primary_small_cp13_vc_ParamLimits

0x78dd,	// (0x00036b9e) text_primary_small_cp13_vc

0x78f5,	// (0x00036bb6) list_set_graphic_pane_vc_ParamLimits

0x78f5,	// (0x00036bb6) list_set_graphic_pane_vc

0x4ffd,	// (0x000342be) input_focus_pane_cp2_vc

0x4f7b,	// (0x0003423c) setting_code_pane_vc_g1

0x7908,	// (0x00036bc9) setting_code_pane_vc_t1

0x7916,	// (0x00036bd7) set_text_pane_vc_t1_ParamLimits

0x7916,	// (0x00036bd7) set_text_pane_vc_t1

0x4ffd,	// (0x000342be) input_focus_pane_cp1_vc

0x7931,	// (0x00036bf2) list_set_text_pane_vc

0x4f7b,	// (0x0003423c) setting_text_pane_vc_g1

0x4ffd,	// (0x000342be) bg_set_opt_pane_cp2_vc

0x793b,	// (0x00036bfc) setting_slider_graphic_pane_vc_g1

0x7943,	// (0x00036c04) setting_slider_graphic_pane_vc_t1

0x7951,	// (0x00036c12) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x0003ec92) setting_slider_graphic_pane_vc_t

0x795f,	// (0x00036c20) slider_set_pane_cp_vc

0x7967,	// (0x00036c28) slider_set_pane_vc_g1

0x7970,	// (0x00036c31) slider_set_pane_vc_g2

0x0006,

0xf9d6,	// (0x0003ec97) slider_set_pane_vc_g

0x568a,	// (0x0003494b) set_opt_bg_pane_g1_copy1

0x5692,	// (0x00034953) set_opt_bg_pane_g2_copy1

0x799c,	// (0x00036c5d) set_opt_bg_pane_g3_copy1

0x56a2,	// (0x00034963) set_opt_bg_pane_g4_copy1

0x56aa,	// (0x0003496b) set_opt_bg_pane_g5_copy1

0x56b2,	// (0x00034973) set_opt_bg_pane_g6_copy1

0x79a4,	// (0x00036c65) set_opt_bg_pane_g7_copy1

0x79ac,	// (0x00036c6d) set_opt_bg_pane_g8_copy1

0x79b4,	// (0x00036c75) set_opt_bg_pane_g9_copy1

0x4ffd,	// (0x000342be) bg_set_opt_pane_cp_vc

0x79bc,	// (0x00036c7d) setting_slider_pane_vc_t1

0x7943,	// (0x00036c04) setting_slider_pane_vc_t2

0x7951,	// (0x00036c12) setting_slider_pane_vc_t3

0x0002,

0xf9e5,	// (0x0003eca6) setting_slider_pane_vc_t

0x795f,	// (0x00036c20) slider_set_pane_vc

0x32df,	// (0x000325a0) volume_set_pane_vc_g1

0x3634,	// (0x000328f5) volume_set_pane_vc_g2

0x363d,	// (0x000328fe) volume_set_pane_vc_g3

0x3646,	// (0x00032907) volume_set_pane_vc_g4

0x364f,	// (0x00032910) volume_set_pane_vc_g5

0x3658,	// (0x00032919) volume_set_pane_vc_g6

0x3661,	// (0x00032922) volume_set_pane_vc_g7

0x366a,	// (0x0003292b) volume_set_pane_vc_g8

0x3673,	// (0x00032934) volume_set_pane_vc_g9

0x367c,	// (0x0003293d) volume_set_pane_vc_g10

0x0009,

0xf9ec,	// (0x0003ecad) volume_set_pane_vc_g

0x79cb,	// (0x00036c8c) volume_set_pane_vc

0x79d3,	// (0x00036c94) button_value_adjust_pane_cp1_vc

0x79dd,	// (0x00036c9e) list_highlight_pane_cp2_vc

0x79e6,	// (0x00036ca7) list_set_pane_vc_ParamLimits

0x79e6,	// (0x00036ca7) list_set_pane_vc

0x7a38,	// (0x00036cf9) main_pane_set_vc_t1_ParamLimits

0x7a38,	// (0x00036cf9) main_pane_set_vc_t1

0x7a4d,	// (0x00036d0e) main_pane_set_vc_t2_ParamLimits

0x7a4d,	// (0x00036d0e) main_pane_set_vc_t2

0x7a5f,	// (0x00036d20) main_pane_set_vc_t3_ParamLimits

0x7a5f,	// (0x00036d20) main_pane_set_vc_t3

0x7a71,	// (0x00036d32) main_pane_set_vc_t4_ParamLimits

0x7a71,	// (0x00036d32) main_pane_set_vc_t4

0x0003,

0xfa01,	// (0x0003ecc2) main_pane_set_vc_t_ParamLimits

0xfa01,	// (0x0003ecc2) main_pane_set_vc_t

0x7a83,	// (0x00036d44) setting_code_pane_vc_ParamLimits

0x7a83,	// (0x00036d44) setting_code_pane_vc

0x7a92,	// (0x00036d53) setting_slider_graphic_pane_vc

0x7a92,	// (0x00036d53) setting_slider_pane_vc

0x7a92,	// (0x00036d53) setting_text_pane_vc

0x7a92,	// (0x00036d53) setting_volume_pane_vc

0x7a9a,	// (0x00036d5b) scroll_pane_cp121_vc

0x5626,	// (0x000348e7) set_content_pane_vc

0x7aa2,	// (0x00036d63) button_value_adjust_pane_g1

0x7aab,	// (0x00036d6c) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0003ed17) button_value_adjust_pane_g

0x7ab4,	// (0x00036d75) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7ab4,	// (0x00036d75) form_field_slider_wide_pane_vc_t1

0x7aca,	// (0x00036d8b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7aca,	// (0x00036d8b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0003ed1c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003ed1c) form_field_slider_wide_pane_vc_t

0x5186,	// (0x00034447) input_focus_pane_cp10_vc_ParamLimits

0x5186,	// (0x00034447) input_focus_pane_cp10_vc

0x7af5,	// (0x00036db6) slider_cont_pane_cp1_vc_ParamLimits

0x7af5,	// (0x00036db6) slider_cont_pane_cp1_vc

0x7967,	// (0x00036c28) slider_form_pane_g1_cp2

0x7970,	// (0x00036c31) slider_form_pane_g2_cp2

0x7b10,	// (0x00036dd1) form_field_slider_pane_vc_t3

0x7b1e,	// (0x00036ddf) form_field_slider_pane_vc_t4

0x7b2c,	// (0x00036ded) slider_form_pane_vc_ParamLimits

0x7b2c,	// (0x00036ded) slider_form_pane_vc

0x7b39,	// (0x00036dfa) form_field_slider_pane_vc_t1_ParamLimits

0x7b39,	// (0x00036dfa) form_field_slider_pane_vc_t1

0x7b4f,	// (0x00036e10) form_field_slider_pane_vc_t2_ParamLimits

0x7b4f,	// (0x00036e10) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0003ed2e) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0003ed2e) form_field_slider_pane_vc_t

0x5186,	// (0x00034447) input_focus_pane_cp9_vc_ParamLimits

0x5186,	// (0x00034447) input_focus_pane_cp9_vc

0x7b61,	// (0x00036e22) slider_cont_pane_vc_ParamLimits

0x7b61,	// (0x00036e22) slider_cont_pane_vc

0x7b73,	// (0x00036e34) list_form_graphic_pane_cp_vc_ParamLimits

0x7b73,	// (0x00036e34) list_form_graphic_pane_cp_vc

0x648c,	// (0x0003574d) form_field_popup_wide_pane_vc_g1

0x7b88,	// (0x00036e49) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7b88,	// (0x00036e49) form_field_popup_wide_pane_vc_t1

0x563b,	// (0x000348fc) input_focus_pane_cp8_vc_ParamLimits

0x563b,	// (0x000348fc) input_focus_pane_cp8_vc

0x7bc7,	// (0x00036e88) list_form_wide_pane_vc_ParamLimits

0x7bc7,	// (0x00036e88) list_form_wide_pane_vc

0x7bd3,	// (0x00036e94) list_form_graphic_pane_vc_g1

0x7bdb,	// (0x00036e9c) list_form_graphic_pane_vc_t1_ParamLimits

0x7bdb,	// (0x00036e9c) list_form_graphic_pane_vc_t1

0x504b,	// (0x0003430c) list_highlight_pane_cp5_vc_ParamLimits

0x504b,	// (0x0003430c) list_highlight_pane_cp5_vc

0x7bf7,	// (0x00036eb8) list_form_graphic_pane_vc_ParamLimits

0x7bf7,	// (0x00036eb8) list_form_graphic_pane_vc

0x648c,	// (0x0003574d) form_field_popup_pane_vc_g1

0x7c0d,	// (0x00036ece) form_field_popup_pane_vc_t1_ParamLimits

0x7c0d,	// (0x00036ece) form_field_popup_pane_vc_t1

0x563b,	// (0x000348fc) input_focus_pane_cp7_vc_ParamLimits

0x563b,	// (0x000348fc) input_focus_pane_cp7_vc

0x7c22,	// (0x00036ee3) list_form_pane_vc_ParamLimits

0x7c22,	// (0x00036ee3) list_form_pane_vc

0x7c2e,	// (0x00036eef) data_form_pane_vc_t1_ParamLimits

0x7c2e,	// (0x00036eef) data_form_pane_vc_t1

0x568a,	// (0x0003494b) input_focus_pane_vc_g1

0x5692,	// (0x00034953) input_focus_pane_vc_g2

0x569a,	// (0x0003495b) input_focus_pane_vc_g3

0x56a2,	// (0x00034963) input_focus_pane_vc_g4

0x56aa,	// (0x0003496b) input_focus_pane_vc_g5

0x56b2,	// (0x00034973) input_focus_pane_vc_g6

0x56ba,	// (0x0003497b) input_focus_pane_vc_g7

0x56c2,	// (0x00034983) input_focus_pane_vc_g8

0x56ca,	// (0x0003498b) input_focus_pane_vc_g9

0x4f7b,	// (0x0003423c) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0003e92d) input_focus_pane_vc_g

0x6480,	// (0x00035741) data_form_pane_vc_ParamLimits

0x6480,	// (0x00035741) data_form_pane_vc

0x648c,	// (0x0003574d) form_field_data_pane_vc_g1

0x7c49,	// (0x00036f0a) form_field_data_pane_vc_t1_ParamLimits

0x7c49,	// (0x00036f0a) form_field_data_pane_vc_t1

0x563b,	// (0x000348fc) input_focus_pane_vc_ParamLimits

0x563b,	// (0x000348fc) input_focus_pane_vc

0x6be4,	// (0x00035ea5) button_value_adjust_pane_cp3_vc

0x7c5f,	// (0x00036f20) button_value_adjust_pane_cp5_vc

0x7c67,	// (0x00036f28) form_field_data_pane_vc_ParamLimits

0x7c67,	// (0x00036f28) form_field_data_pane_vc

0x6bec,	// (0x00035ead) form_field_data_pane_vc_cp2

0x7c7e,	// (0x00036f3f) form_field_data_wide_pane_vc_ParamLimits

0x7c7e,	// (0x00036f3f) form_field_data_wide_pane_vc

0x7c94,	// (0x00036f55) form_field_data_wide_pane_vc_cp2

0x7c9c,	// (0x00036f5d) form_field_popup_pane_vc_ParamLimits

0x7c9c,	// (0x00036f5d) form_field_popup_pane_vc

0x7cb3,	// (0x00036f74) form_field_popup_wide_pane_vc_ParamLimits

0x7cb3,	// (0x00036f74) form_field_popup_wide_pane_vc

0x7cc9,	// (0x00036f8a) form_field_slider_pane_vc_ParamLimits

0x7cc9,	// (0x00036f8a) form_field_slider_pane_vc

0x7cdc,	// (0x00036f9d) form_field_slider_wide_pane_vc_ParamLimits

0x7cdc,	// (0x00036f9d) form_field_slider_wide_pane_vc

0xc88f,	// (0x0003bb50) grid_touch_1_pane_ParamLimits

0xc88f,	// (0x0003bb50) grid_touch_1_pane

0xc8a3,	// (0x0003bb64) grid_touch_2_pane_ParamLimits

0xc8a3,	// (0x0003bb64) grid_touch_2_pane

0x7d54,	// (0x00037015) touch_pane_g1_ParamLimits

0x7d54,	// (0x00037015) touch_pane_g1

0x7cef,	// (0x00036fb0) cell_app_pane_cp_wide_ParamLimits

0x7cef,	// (0x00036fb0) cell_app_pane_cp_wide

0x7cff,	// (0x00036fc0) grid_popup_fast_wide_pane_ParamLimits

0x7cff,	// (0x00036fc0) grid_popup_fast_wide_pane

0x7d13,	// (0x00036fd4) scroll_pane_cp19_ParamLimits

0x7d13,	// (0x00036fd4) scroll_pane_cp19

0x4ffd,	// (0x000342be) bg_popup_window_pane_cp20

0x7d27,	// (0x00036fe8) listscroll_popup_fast_wide_pane

0xc8cd,	// (0x0003bb8e) grid_indicator_nsta_pane

0x7d2f,	// (0x00036ff0) clock_nsta_pane_g1

0x7d38,	// (0x00036ff9) clock_nsta_pane_t1

0xc8d9,	// (0x0003bb9a) cell_indicator_nsta_pane_ParamLimits

0xc8d9,	// (0x0003bb9a) cell_indicator_nsta_pane

0x7d54,	// (0x00037015) cell_indicator_nsta_pane_g1

0xc8f0,	// (0x0003bbb1) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0003ed3f) cell_indicator_nsta_pane_g

0x7d62,	// (0x00037023) clock_nsta_pane_cp

0x7d6a,	// (0x0003702b) indicator_nsta_pane_cp

0x7d73,	// (0x00037034) nsta_clock_indic_pane_g1

0x508f,	// (0x00034350) grid_indicator_pane

0x5adb,	// (0x00034d9c) scroll_pane_cp29

0x2a06,	// (0x00031cc7) indicator_nsta_pane_cp2_ParamLimits

0x2a06,	// (0x00031cc7) indicator_nsta_pane_cp2

0x504b,	// (0x0003430c) main_apps_wheel_pane

0x662b,	// (0x000358ec) form_midp_field_text_pane_ParamLimits

0x6758,	// (0x00035a19) scroll_bar_cp050_ParamLimits

0x7ddc,	// (0x0003709d) cell_indicator_pane_ParamLimits

0x7ddc,	// (0x0003709d) cell_indicator_pane

0x7df2,	// (0x000370b3) cell_indicator_pane_g1

0xc8fd,	// (0x0003bbbe) grid_wheel_folder_pane_ParamLimits

0xc8fd,	// (0x0003bbbe) grid_wheel_folder_pane

0xc90b,	// (0x0003bbcc) list_wheel_apps_pane_ParamLimits

0xc90b,	// (0x0003bbcc) list_wheel_apps_pane

0xc917,	// (0x0003bbd8) main_apps_wheel_pane_g1_ParamLimits

0xc917,	// (0x0003bbd8) main_apps_wheel_pane_g1

0xc923,	// (0x0003bbe4) main_apps_wheel_pane_g2_ParamLimits

0xc923,	// (0x0003bbe4) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0003ed5b) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0003ed5b) main_apps_wheel_pane_g

0xc92f,	// (0x0003bbf0) main_apps_wheel_pane_t1_ParamLimits

0xc92f,	// (0x0003bbf0) main_apps_wheel_pane_t1

0xc941,	// (0x0003bc02) list_wheel_apps_pane_g1

0xc949,	// (0x0003bc0a) list_wheel_apps_pane_g2

0xc951,	// (0x0003bc12) list_wheel_apps_pane_g3

0xc959,	// (0x0003bc1a) list_wheel_apps_pane_g4

0xc961,	// (0x0003bc22) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0003ed60) list_wheel_apps_pane_g

0x504b,	// (0x0003430c) navi_icon_text_pane

0xbe77,	// (0x0003b138) aid_fill_nsta

0x7dfc,	// (0x000370bd) navi_icon_text_pane_g1

0x7e08,	// (0x000370c9) navi_icon_text_pane_t1

0x5d55,	// (0x00035016) list_set_graphic_pane_t1_ParamLimits

0x5d55,	// (0x00035016) list_set_graphic_pane_t1

0x6e84,	// (0x00036145) popup_midp_note_alarm_window_t6_ParamLimits

0x6e84,	// (0x00036145) popup_midp_note_alarm_window_t6

0x6e96,	// (0x00036157) popup_midp_note_alarm_window_t7_ParamLimits

0x6e96,	// (0x00036157) popup_midp_note_alarm_window_t7

0x6ea8,	// (0x00036169) popup_midp_note_alarm_window_t8_ParamLimits

0x6ea8,	// (0x00036169) popup_midp_note_alarm_window_t8

0x6eba,	// (0x0003617b) popup_midp_note_alarm_window_t9_ParamLimits

0x6eba,	// (0x0003617b) popup_midp_note_alarm_window_t9

0x6ecc,	// (0x0003618d) popup_midp_note_alarm_window_t10_ParamLimits

0x6ecc,	// (0x0003618d) popup_midp_note_alarm_window_t10

0x6ede,	// (0x0003619f) popup_midp_note_alarm_window_t11_ParamLimits

0x6ede,	// (0x0003619f) popup_midp_note_alarm_window_t11

0x6ef0,	// (0x000361b1) scroll_pane_cp17_ParamLimits

0x6ef0,	// (0x000361b1) scroll_pane_cp17

0x32df,	// (0x000325a0) volume_small_pane_cp_g1

0x36d0,	// (0x00032991) volume_small_pane_cp_g2

0x36d9,	// (0x0003299a) volume_small_pane_cp_g3

0x36e2,	// (0x000329a3) volume_small_pane_cp_g4

0x330c,	// (0x000325cd) volume_small_pane_cp_g5

0x36eb,	// (0x000329ac) volume_small_pane_cp_g6

0x36f4,	// (0x000329b5) volume_small_pane_cp_g7

0x36fd,	// (0x000329be) volume_small_pane_cp_g8

0x3706,	// (0x000329c7) volume_small_pane_cp_g9

0x370f,	// (0x000329d0) volume_small_pane_cp_g10

0x600b,	// (0x000352cc) midp_ticker_pane_g1_ParamLimits

0x6017,	// (0x000352d8) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0003e9f9) midp_ticker_pane_g_ParamLimits

0x6023,	// (0x000352e4) midp_ticker_pane_t1_ParamLimits

0xbe8d,	// (0x0003b14e) aid_fill_nsta_2

0x6744,	// (0x00035a05) list_form2_midp_pane

0x7582,	// (0x00036843) midp_editing_number_pane_ParamLimits

0x758e,	// (0x0003684f) midp_ticker_pane_ParamLimits

0x7e1a,	// (0x000370db) form2_midp_field_pane

0x7e22,	// (0x000370e3) scroll_pane_cp51

0x7e42,	// (0x00037103) form2_midp_button_pane_ParamLimits

0x7e42,	// (0x00037103) form2_midp_button_pane

0x7e54,	// (0x00037115) form2_midp_content_pane_ParamLimits

0x7e54,	// (0x00037115) form2_midp_content_pane

0x7e6e,	// (0x0003712f) form2_midp_field_choice_group_pane

0x7e76,	// (0x00037137) form2_midp_field_pane_g1

0x7e7e,	// (0x0003713f) form2_midp_field_pane_g2

0x7e86,	// (0x00037147) form2_midp_field_pane_g3

0x7e8e,	// (0x0003714f) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0003ed85) form2_midp_field_pane_g

0x7e96,	// (0x00037157) form2_midp_gauge_slider_pane

0x7e9e,	// (0x0003715f) form2_midp_gauge_wait_pane

0x7ea6,	// (0x00037167) form2_midp_image_pane_ParamLimits

0x7ea6,	// (0x00037167) form2_midp_image_pane

0x7ec1,	// (0x00037182) form2_midp_label_pane_ParamLimits

0x7ec1,	// (0x00037182) form2_midp_label_pane

0xc996,	// (0x0003bc57) form2_midp_label_pane_cp_ParamLimits

0xc996,	// (0x0003bc57) form2_midp_label_pane_cp

0x7eda,	// (0x0003719b) form2_midp_string_pane_ParamLimits

0x7eda,	// (0x0003719b) form2_midp_string_pane

0x20dd,	// (0x0003139e) form2_midp_text_pane_ParamLimits

0x20dd,	// (0x0003139e) form2_midp_text_pane

0x7eec,	// (0x000371ad) form2_midp_time_pane

0x7efc,	// (0x000371bd) input_focus_pane_cp51_ParamLimits

0x7efc,	// (0x000371bd) input_focus_pane_cp51

0x7f14,	// (0x000371d5) form2_midp_label_pane_t1_ParamLimits

0x7f14,	// (0x000371d5) form2_midp_label_pane_t1

0x20f6,	// (0x000313b7) form2_mdip_text_pane_t1_ParamLimits

0x20f6,	// (0x000313b7) form2_mdip_text_pane_t1

0x210f,	// (0x000313d0) form2_midp_time_pane_t1

0x7f5c,	// (0x0003721d) form2_midp_gauge_slider_pane_t1

0xc9b5,	// (0x0003bc76) form2_midp_gauge_slider_pane_t2

0xc9c7,	// (0x0003bc88) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0003ed8e) form2_midp_gauge_slider_pane_t

0x7f6e,	// (0x0003722f) form2_midp_slider_pane

0x7f7a,	// (0x0003723b) form2_midp_gauge_wait_pane_t1

0x7f88,	// (0x00037249) form2_midp_wait_pane_ParamLimits

0x7f88,	// (0x00037249) form2_midp_wait_pane

0x64ca,	// (0x0003578b) list_single_2graphic_pane_cp4_ParamLimits

0x64ca,	// (0x0003578b) list_single_2graphic_pane_cp4

0x7fb3,	// (0x00037274) list_single_midp_graphic_pane_cp_ParamLimits

0x7fb3,	// (0x00037274) list_single_midp_graphic_pane_cp

0x4ffd,	// (0x000342be) list_highlight_pane_cp20

0x7fd1,	// (0x00037292) list_single_2graphic_pane_g1_cp4

0x77fe,	// (0x00036abf) list_single_2graphic_pane_g2_cp4

0x7fd9,	// (0x0003729a) list_single_2graphic_pane_t1_cp4

0x504b,	// (0x0003430c) list_highlight_pane_cp21

0x7fe8,	// (0x000372a9) list_single_midp_graphic_pane_g4_cp

0x7ff7,	// (0x000372b8) list_single_midp_graphic_pane_t1_cp

0x800c,	// (0x000372cd) form2_mdip_string_pane_t1_ParamLimits

0x800c,	// (0x000372cd) form2_mdip_string_pane_t1

0x4ffd,	// (0x000342be) bg_wml_button_pane_cp2

0x4f7b,	// (0x0003423c) form2_midp_image_pane_g1

0x276d,	// (0x00031a2e) list_double_large_graphic_pane_g5_ParamLimits

0x276d,	// (0x00031a2e) list_double_large_graphic_pane_g5

0x0a6f,	// (0x0002fd30) midp_form_pane_ParamLimits

0x504b,	// (0x0003430c) main_apps_wheel_pane_ParamLimits

0xbc19,	// (0x0003aeda) popup_preview_window_ParamLimits

0xbc19,	// (0x0003aeda) popup_preview_window

0x3183,	// (0x00032444) popup_touch_info_window_ParamLimits

0x3183,	// (0x00032444) popup_touch_info_window

0x31a1,	// (0x00032462) popup_touch_menu_window_ParamLimits

0x31a1,	// (0x00032462) popup_touch_menu_window

0x4f71,	// (0x00034232) bg_popup_sub_pane_cp6

0x8076,	// (0x00037337) list_touch_menu_pane

0x807e,	// (0x0003733f) list_single_touch_menu_pane_ParamLimits

0x807e,	// (0x0003733f) list_single_touch_menu_pane

0x8095,	// (0x00037356) list_single_touch_menu_pane_t1

0x504b,	// (0x0003430c) bg_popup_sub_pane_cp7_ParamLimits

0x504b,	// (0x0003430c) bg_popup_sub_pane_cp7

0x80a3,	// (0x00037364) heading_sub_pane

0x80ab,	// (0x0003736c) list_touch_info_pane_ParamLimits

0x80ab,	// (0x0003736c) list_touch_info_pane

0x80ba,	// (0x0003737b) list_single_touch_info_pane_ParamLimits

0x80ba,	// (0x0003737b) list_single_touch_info_pane

0x80cb,	// (0x0003738c) list_single_touch_info_pane_t1

0x80d9,	// (0x0003739a) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0003ed9c) list_single_touch_info_pane_t

0x5fe1,	// (0x000352a2) bg_popup_heading_pane_cp

0x80e7,	// (0x000373a8) heading_sub_pane_t1

0x6446,	// (0x00035707) bg_popup_preview_window_pane_cp_ParamLimits

0x6446,	// (0x00035707) bg_popup_preview_window_pane_cp

0x80a3,	// (0x00037364) heading_preview_pane

0x80ab,	// (0x0003736c) list_preview_pane_ParamLimits

0x80ab,	// (0x0003736c) list_preview_pane

0x80f5,	// (0x000373b6) popup_preview_window_g1

0x80ba,	// (0x0003737b) list_single_preview_pane_ParamLimits

0x80ba,	// (0x0003737b) list_single_preview_pane

0x80fd,	// (0x000373be) list_single_preview_pane_g1

0x8105,	// (0x000373c6) list_single_preview_pane_t1

0x80cb,	// (0x0003738c) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0003eda1) list_single_preview_pane_t

0x8113,	// (0x000373d4) bg_popup_heading_pane_cp2_ParamLimits

0x8113,	// (0x000373d4) bg_popup_heading_pane_cp2

0x8129,	// (0x000373ea) heading_preview_pane_g1

0x8131,	// (0x000373f2) heading_preview_pane_t1_ParamLimits

0x8131,	// (0x000373f2) heading_preview_pane_t1

0x50a6,	// (0x00034367) soft_indicator_pane_t1_ParamLimits

0x55b2,	// (0x00034873) scroll_pane_ParamLimits

0x59d7,	// (0x00034c98) scroll_sc2_left_pane

0x59e0,	// (0x00034ca1) scroll_sc2_right_pane

0x59ff,	// (0x00034cc0) scroll_bg_pane_g1_ParamLimits

0x5a14,	// (0x00034cd5) scroll_bg_pane_g2_ParamLimits

0x5a2c,	// (0x00034ced) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0003e984) scroll_bg_pane_g_ParamLimits

0x59ff,	// (0x00034cc0) scroll_handle_pane_g1_ParamLimits

0x5a4e,	// (0x00034d0f) scroll_handle_pane_g2_ParamLimits

0x5a2c,	// (0x00034ced) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0003e98b) scroll_handle_pane_g_ParamLimits

0x2d4d,	// (0x0003200e) popup_choice_list_window_ParamLimits

0x2d4d,	// (0x0003200e) popup_choice_list_window

0x631c,	// (0x000355dd) choice_list_pane

0x6392,	// (0x00035653) cell_toolbar_pane_t1

0x63ba,	// (0x0003567b) toolbar_button_pane_ParamLimits

0x72eb,	// (0x000365ac) ai_gene_pane_1_t2_ParamLimits

0x72eb,	// (0x000365ac) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x0003eba7) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x0003eba7) ai_gene_pane_1_t

0x814e,	// (0x0003740f) scroll_sc2_left_pane_g1

0x814e,	// (0x0003740f) scroll_sc2_right_pane_g1

0x61fd,	// (0x000354be) bg_popup_sub_pane_cp10

0x8158,	// (0x00037419) list_choice_list_pane

0x816f,	// (0x00037430) list_single_choice_list_pane_ParamLimits

0x816f,	// (0x00037430) list_single_choice_list_pane

0x8181,	// (0x00037442) list_single_choice_list_pane_g1

0x57b3,	// (0x00034a74) list_single_choice_list_pane_t1_ParamLimits

0x57b3,	// (0x00034a74) list_single_choice_list_pane_t1

0x8189,	// (0x0003744a) choice_list_pane_g1

0x8191,	// (0x00037452) choice_list_pane_t1

0x4f71,	// (0x00034232) input_focus_pane_cp11

0x593e,	// (0x00034bff) title_pane_stacon_g2_ParamLimits

0x593e,	// (0x00034bff) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0003e96a) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0003e96a) title_pane_stacon_g

0x5fe1,	// (0x000352a2) cursor_press_pane

0xb980,	// (0x0003ac41) popup_fep_hwr_window_ParamLimits

0xb980,	// (0x0003ac41) popup_fep_hwr_window

0x2e45,	// (0x00032106) popup_fep_vkb_window_ParamLimits

0x2e45,	// (0x00032106) popup_fep_vkb_window

0x819f,	// (0x00037460) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0003edca) fep_vkb_side_pane_g_ParamLimits

0x374d,	// (0x00032a0e) fep_hwr_candidate_pane_ParamLimits

0x374d,	// (0x00032a0e) fep_hwr_candidate_pane

0x3775,	// (0x00032a36) fep_hwr_side_pane_ParamLimits

0x3775,	// (0x00032a36) fep_hwr_side_pane

0x3795,	// (0x00032a56) fep_hwr_top_pane_ParamLimits

0x3795,	// (0x00032a56) fep_hwr_top_pane

0x37ad,	// (0x00032a6e) fep_hwr_write_pane_ParamLimits

0x37ad,	// (0x00032a6e) fep_hwr_write_pane

0xfb09,	// (0x0003edca) fep_vkb_side_pane_g

0x81a7,	// (0x00037468) fep_hwr_top_pane_g1

0x81b9,	// (0x0003747a) fep_hwr_top_pane_g2

0x37d9,	// (0x00032a9a) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0003eda6) fep_hwr_top_pane_g

0x37ee,	// (0x00032aaf) fep_hwr_top_text_pane

0x5b48,	// (0x00034e09) fep_hwr_top_text_pane_g1

0x81ef,	// (0x000374b0) fep_hwr_top_text_pane_t1

0x38dc,	// (0x00032b9d) fep_hwr_candidate_pane_g1

0x83b8,	// (0x00037679) fep_vkb_keypad_pane_g3_ParamLimits

0x83b8,	// (0x00037679) fep_vkb_keypad_pane_g3

0x83da,	// (0x0003769b) fep_vkb_keypad_pane_g4_ParamLimits

0x83da,	// (0x0003769b) fep_vkb_keypad_pane_g4

0x8449,	// (0x0003770a) fep_vkb_bottom_pane_g2_ParamLimits

0x8449,	// (0x0003770a) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0003edd1) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0003edd1) fep_vkb_bottom_pane_g

0x814e,	// (0x0003740f) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0003eddb) cell_vkb_side_pane_g

0x848d,	// (0x0003774e) cell_vkb_side_pane_t1

0x849b,	// (0x0003775c) cell_vkb_side_pane_t1_copy1

0x814e,	// (0x0003740f) bg_fep_vkb_candidate_pane_g2

0x8569,	// (0x0003782a) cell_vkb_candidate_pane_ParamLimits

0x81fd,	// (0x000374be) aid_size_cell_vkb_ParamLimits

0x81fd,	// (0x000374be) aid_size_cell_vkb

0x8569,	// (0x0003782a) cell_vkb_candidate_pane

0x38f6,	// (0x00032bb7) bg_popup_fep_shadow_pane_g1

0x8267,	// (0x00037528) fep_vkb_bottom_pane_ParamLimits

0x8267,	// (0x00037528) fep_vkb_bottom_pane

0x82a4,	// (0x00037565) fep_vkb_candidate_pane_ParamLimits

0x82a4,	// (0x00037565) fep_vkb_candidate_pane

0x82c0,	// (0x00037581) fep_vkb_keypad_pane_ParamLimits

0x82c0,	// (0x00037581) fep_vkb_keypad_pane

0x82f4,	// (0x000375b5) fep_vkb_side_pane_ParamLimits

0x82f4,	// (0x000375b5) fep_vkb_side_pane

0x8320,	// (0x000375e1) fep_vkb_top_pane_ParamLimits

0x8320,	// (0x000375e1) fep_vkb_top_pane

0x834c,	// (0x0003760d) fep_vkb_top_pane_g1_ParamLimits

0x834c,	// (0x0003760d) fep_vkb_top_pane_g1

0x835b,	// (0x0003761c) fep_vkb_top_pane_g2_ParamLimits

0x835b,	// (0x0003761c) fep_vkb_top_pane_g2

0x836a,	// (0x0003762b) fep_vkb_top_pane_g3_ParamLimits

0x836a,	// (0x0003762b) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0003edc1) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0003edc1) fep_vkb_top_pane_g

0x8388,	// (0x00037649) fep_vkb_top_text_pane_ParamLimits

0x8388,	// (0x00037649) fep_vkb_top_text_pane

0xca36,	// (0x0003bcf7) fep_vkb_side_pane_g1_ParamLimits

0xca36,	// (0x0003bcf7) fep_vkb_side_pane_g1

0x83a7,	// (0x00037668) grid_vkb_side_pane_ParamLimits

0x83a7,	// (0x00037668) grid_vkb_side_pane

0x38fe,	// (0x00032bbf) bg_popup_fep_shadow_pane_g2

0x3907,	// (0x00032bc8) bg_popup_fep_shadow_pane_g3

0x390f,	// (0x00032bd0) bg_popup_fep_shadow_pane_g4

0x3918,	// (0x00032bd9) bg_popup_fep_shadow_pane_g5

0x3920,	// (0x00032be1) bg_popup_fep_shadow_pane_g6

0x3928,	// (0x00032be9) bg_popup_fep_shadow_pane_g7

0x56aa,	// (0x0003496b) bg_popup_fep_shadow_pane_g8

0x83f8,	// (0x000376b9) grid_vkb_keypad_number_pane_ParamLimits

0x83f8,	// (0x000376b9) grid_vkb_keypad_number_pane

0x8408,	// (0x000376c9) grid_vkb_keypad_pane_ParamLimits

0x8408,	// (0x000376c9) grid_vkb_keypad_pane

0x842e,	// (0x000376ef) fep_vkb_bottom_pane_g1_ParamLimits

0x842e,	// (0x000376ef) fep_vkb_bottom_pane_g1

0x8457,	// (0x00037718) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x8457,	// (0x00037718) grid_vkb_keypad_bottom_left_pane

0x846c,	// (0x0003772d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x846c,	// (0x0003772d) grid_vkb_keypad_bottom_right_pane

0x8481,	// (0x00037742) fep_vkb_top_text_pane_g1

0xca7d,	// (0x0003bd3e) fep_vkb_top_text_pane_t1

0xca8f,	// (0x0003bd50) cell_vkb_side_pane_ParamLimits

0xca8f,	// (0x0003bd50) cell_vkb_side_pane

0x814e,	// (0x0003740f) cell_vkb_side_pane_g1

0x84a9,	// (0x0003776a) cell_vkb_keypad_pane_ParamLimits

0x84a9,	// (0x0003776a) cell_vkb_keypad_pane

0x8516,	// (0x000377d7) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0003edee) bg_popup_fep_shadow_pane_g

0x814e,	// (0x0003740f) cell_hwr_side_pane_g1

0x814e,	// (0x0003740f) cell_hwr_side_pane_g2

0x8520,	// (0x000377e1) cell_vkb_keypad_pane_t1

0xcaa5,	// (0x0003bd66) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcaa5,	// (0x0003bd66) cell_vkb_keypad_bottom_left_pane

0xcaba,	// (0x0003bd7b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcaba,	// (0x0003bd7b) cell_vkb_keypad_bottom_right_pane

0x814e,	// (0x0003740f) cell_vkb_keypad_bottom_left_pane_g1

0x814e,	// (0x0003740f) cell_vkb_keypad_bottom_right_pane_g1

0x852e,	// (0x000377ef) cell_vkb_keypad_number_pane_ParamLimits

0x852e,	// (0x000377ef) cell_vkb_keypad_number_pane

0x854d,	// (0x0003780e) cell_vkb_keypad_number_pane_g1

0x8557,	// (0x00037818) cell_vkb_keypad_number_pane_g2

0x8560,	// (0x00037821) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0003ede0) cell_vkb_keypad_number_pane_g

0x8520,	// (0x000377e1) cell_vkb_keypad_number_pane_t1

0x8582,	// (0x00037843) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0003eddb) cell_hwr_side_pane_g

0x859b,	// (0x0003785c) cell_hwr_side_pane_t1

0x3938,	// (0x00032bf9) cell_hwr_side_pane_t1_copy1

0x837a,	// (0x0003763b) cell_hwr_candidate_pane_g1

0x3946,	// (0x00032c07) cell_hwr_candidate_pane_t1

0x814e,	// (0x0003740f) cell_vkb_candidate_pane_g2

0x8621,	// (0x000378e2) cell_vkb_candidate_pane_t1

0x3718,	// (0x000329d9) bg_popup_fep_shadow_pane_ParamLimits

0x3718,	// (0x000329d9) bg_popup_fep_shadow_pane

0xf51b,	// (0x0003e7dc) bg_fep_hwr_top_pane_g4

0x81cb,	// (0x0003748c) bg_hwr_side_pane_g1_ParamLimits

0x81cb,	// (0x0003748c) bg_hwr_side_pane_g1

0xc9f1,	// (0x0003bcb2) cell_hwr_side_pane_ParamLimits

0xc9f1,	// (0x0003bcb2) cell_hwr_side_pane

0x3865,	// (0x00032b26) fep_hwr_write_pane_g1_ParamLimits

0x3865,	// (0x00032b26) fep_hwr_write_pane_g1

0x3872,	// (0x00032b33) fep_hwr_write_pane_g2_ParamLimits

0x3872,	// (0x00032b33) fep_hwr_write_pane_g2

0x387f,	// (0x00032b40) fep_hwr_write_pane_g3_ParamLimits

0x387f,	// (0x00032b40) fep_hwr_write_pane_g3

0xca11,	// (0x0003bcd2) fep_hwr_write_pane_g4_ParamLimits

0xca11,	// (0x0003bcd2) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0003edad) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0003edad) fep_hwr_write_pane_g

0xf51b,	// (0x0003e7dc) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf51b,	// (0x0003e7dc) bg_fep_hwr_candidate_pane_g2

0x38a2,	// (0x00032b63) cell_hwr_candidate_pane_ParamLimits

0x38a2,	// (0x00032b63) cell_hwr_candidate_pane

0x38dc,	// (0x00032b9d) fep_hwr_candidate_pane_g1_ParamLimits

0x822b,	// (0x000374ec) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x822b,	// (0x000374ec) bg_popup_fep_shadow_pane_cp2

0x837a,	// (0x0003763b) fep_vkb_top_pane_g4_ParamLimits

0x837a,	// (0x0003763b) fep_vkb_top_pane_g4

0x8399,	// (0x0003765a) fep_vkb_side_pane_g2_ParamLimits

0x8399,	// (0x0003765a) fep_vkb_side_pane_g2

0xb0f1,	// (0x0003a3b2) list_setting_pane_t4_ParamLimits

0xb0f1,	// (0x0003a3b2) list_setting_pane_t4

0xb18b,	// (0x0003a44c) list_setting_number_pane_t5_ParamLimits

0xb18b,	// (0x0003a44c) list_setting_number_pane_t5

0x0986,	// (0x0002fc47) list_double_heading_pane_cp2_ParamLimits

0x0986,	// (0x0002fc47) list_double_heading_pane_cp2

0x5e4f,	// (0x00035110) list_double_heading_pane_g1_cp2_ParamLimits

0x5e4f,	// (0x00035110) list_double_heading_pane_g1_cp2

0x862f,	// (0x000378f0) list_double_heading_pane_g2_cp2_ParamLimits

0x862f,	// (0x000378f0) list_double_heading_pane_g2_cp2

0x8643,	// (0x00037904) list_double_heading_pane_t1_cp2_ParamLimits

0x8643,	// (0x00037904) list_double_heading_pane_t1_cp2

0x8659,	// (0x0003791a) list_double_heading_pane_t2_cp2_ParamLimits

0x8659,	// (0x0003791a) list_double_heading_pane_t2_cp2

0x4f69,	// (0x0003422a) aid_value_unit2

0x2564,	// (0x00031825) popup_preview_fixed_window

0x5194,	// (0x00034455) bg_popup_preview_window_pane_cp02

0x866b,	// (0x0003792c) list_preview_fixed_pane

0x86b1,	// (0x00037972) list_empty_pane_fp_ParamLimits

0x86b1,	// (0x00037972) list_empty_pane_fp

0x86b1,	// (0x00037972) list_single_cale_day_pane_fp_ParamLimits

0x86b1,	// (0x00037972) list_single_cale_day_pane_fp

0x86b1,	// (0x00037972) list_single_graphic_heading_pane_fp_ParamLimits

0x86b1,	// (0x00037972) list_single_graphic_heading_pane_fp

0x86b1,	// (0x00037972) list_single_graphic_pane_fp_ParamLimits

0x86b1,	// (0x00037972) list_single_graphic_pane_fp

0x86b1,	// (0x00037972) list_single_heading_pane_fp_ParamLimits

0x86b1,	// (0x00037972) list_single_heading_pane_fp

0x86b1,	// (0x00037972) list_single_pane_fp_ParamLimits

0x86b1,	// (0x00037972) list_single_pane_fp

0x86c5,	// (0x00037986) list_single_pane_fp_g1_ParamLimits

0x86c5,	// (0x00037986) list_single_pane_fp_g1

0x2755,	// (0x00031a16) list_single_pane_fp_g2_ParamLimits

0x2755,	// (0x00031a16) list_single_pane_fp_g2

0x3963,	// (0x00032c24) list_single_pane_fp_g3_ParamLimits

0x3963,	// (0x00032c24) list_single_pane_fp_g3

0x86d1,	// (0x00037992) list_single_pane_fp_g4_ParamLimits

0x86d1,	// (0x00037992) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0003ee0f) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0003ee0f) list_single_pane_fp_g

0x2122,	// (0x000313e3) list_single_pane_fp_t1_ParamLimits

0x2122,	// (0x000313e3) list_single_pane_fp_t1

0x2139,	// (0x000313fa) list_single_graphic_pane_fp_g1_ParamLimits

0x2139,	// (0x000313fa) list_single_graphic_pane_fp_g1

0x86c5,	// (0x00037986) list_single_graphic_pane_fp_g2_ParamLimits

0x86c5,	// (0x00037986) list_single_graphic_pane_fp_g2

0x2755,	// (0x00031a16) list_single_graphic_pane_fp_g3_ParamLimits

0x2755,	// (0x00031a16) list_single_graphic_pane_fp_g3

0x3963,	// (0x00032c24) list_single_graphic_pane_fp_g4_ParamLimits

0x3963,	// (0x00032c24) list_single_graphic_pane_fp_g4

0x86d1,	// (0x00037992) list_single_graphic_pane_fp_g5_ParamLimits

0x86d1,	// (0x00037992) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0003ee18) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0003ee18) list_single_graphic_pane_fp_g

0x2145,	// (0x00031406) list_single_graphic_pane_fp_t1_ParamLimits

0x2145,	// (0x00031406) list_single_graphic_pane_fp_t1

0x2139,	// (0x000313fa) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x2139,	// (0x000313fa) list_single_graphic_heading_pane_fp_g1

0x86c5,	// (0x00037986) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x86c5,	// (0x00037986) list_single_graphic_heading_pane_fp_g2

0x2755,	// (0x00031a16) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2755,	// (0x00031a16) list_single_graphic_heading_pane_fp_g3

0x3963,	// (0x00032c24) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3963,	// (0x00032c24) list_single_graphic_heading_pane_fp_g4

0x86d1,	// (0x00037992) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x86d1,	// (0x00037992) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0003ee18) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0003ee18) list_single_graphic_heading_pane_fp_g

0x215b,	// (0x0003141c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x215b,	// (0x0003141c) list_single_graphic_heading_pane_fp_t1

0x2171,	// (0x00031432) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x2171,	// (0x00031432) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0003ee23) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0003ee23) list_single_graphic_heading_pane_fp_t

0x2183,	// (0x00031444) list_single_cale_day_pane_fp_g1_ParamLimits

0x2183,	// (0x00031444) list_single_cale_day_pane_fp_g1

0x86dd,	// (0x0003799e) list_single_cale_day_pane_fp_g2_ParamLimits

0x86dd,	// (0x0003799e) list_single_cale_day_pane_fp_g2

0x3977,	// (0x00032c38) list_single_cale_day_pane_fp_g3_ParamLimits

0x3977,	// (0x00032c38) list_single_cale_day_pane_fp_g3

0x399f,	// (0x00032c60) list_single_cale_day_pane_fp_g4_ParamLimits

0x399f,	// (0x00032c60) list_single_cale_day_pane_fp_g4

0x39c3,	// (0x00032c84) list_single_cale_day_pane_fp_g5_ParamLimits

0x39c3,	// (0x00032c84) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0003ee28) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0003ee28) list_single_cale_day_pane_fp_g

0x21bb,	// (0x0003147c) list_single_cale_day_pane_fp_t1_ParamLimits

0x21bb,	// (0x0003147c) list_single_cale_day_pane_fp_t1

0x21e1,	// (0x000314a2) list_single_cale_day_pane_fp_t2_ParamLimits

0x21e1,	// (0x000314a2) list_single_cale_day_pane_fp_t2

0x21fa,	// (0x000314bb) list_single_cale_day_pane_fp_t3_ParamLimits

0x21fa,	// (0x000314bb) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0003ee33) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0003ee33) list_single_cale_day_pane_fp_t

0x86c5,	// (0x00037986) list_empty_pane_fp_g1_ParamLimits

0x86c5,	// (0x00037986) list_empty_pane_fp_g1

0x2213,	// (0x000314d4) list_empty_pane_fp_t1

0x2221,	// (0x000314e2) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0003ee3a) list_empty_pane_fp_t

0x86c5,	// (0x00037986) list_single_heading_pane_fp_g1_ParamLimits

0x86c5,	// (0x00037986) list_single_heading_pane_fp_g1

0x2755,	// (0x00031a16) list_single_heading_pane_fp_g2_ParamLimits

0x2755,	// (0x00031a16) list_single_heading_pane_fp_g2

0x3963,	// (0x00032c24) list_single_heading_pane_fp_g3_ParamLimits

0x3963,	// (0x00032c24) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0003ee3f) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003ee3f) list_single_heading_pane_fp_g

0x222f,	// (0x000314f0) list_single_heading_pane_fp_t1_ParamLimits

0x222f,	// (0x000314f0) list_single_heading_pane_fp_t1

0x2241,	// (0x00031502) list_single_heading_pane_fp_t2_ParamLimits

0x2241,	// (0x00031502) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003ee46) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003ee46) list_single_heading_pane_fp_t

0x57c8,	// (0x00034a89) aid_size_cell_fast

0x5169,	// (0x0003442a) soft_indicator_pane_cp1_t1

0x5805,	// (0x00034ac6) cell_app_pane_cp2_ParamLimits

0x5805,	// (0x00034ac6) cell_app_pane_cp2

0x373a,	// (0x000329fb) fep_hwr_candidate_drop_down_list_pane

0x01f0,	// (0x0002f4b1) fep_hwr_candidate_pane_g3_ParamLimits

0x01f0,	// (0x0002f4b1) fep_hwr_candidate_pane_g3

0x01fd,	// (0x0002f4be) fep_hwr_candidate_pane_g4_ParamLimits

0x01fd,	// (0x0002f4be) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0003edba) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0003edba) fep_hwr_candidate_pane_g

0x8293,	// (0x00037554) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x8293,	// (0x00037554) fep_vkb_candidate_drop_down_list_pane

0x858a,	// (0x0003784b) fep_vkb_candidate_pane_g3

0x8592,	// (0x00037853) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0003ede7) fep_vkb_candidate_pane_g

0x837a,	// (0x0003763b) cell_hwr_candidate_pane_g1_ParamLimits

0x85a9,	// (0x0003786a) cell_hwr_candidate_pane_g3_ParamLimits

0x85a9,	// (0x0003786a) cell_hwr_candidate_pane_g3

0x85ca,	// (0x0003788b) cell_hwr_candidate_pane_g4_ParamLimits

0x85ca,	// (0x0003788b) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0003ee01) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0003ee01) cell_hwr_candidate_pane_g

0x85eb,	// (0x000378ac) cell_vkb_candidate_pane_g3_ParamLimits

0x85eb,	// (0x000378ac) cell_vkb_candidate_pane_g3

0x8606,	// (0x000378c7) cell_vkb_candidate_pane_g4_ParamLimits

0x8606,	// (0x000378c7) cell_vkb_candidate_pane_g4

0x86e9,	// (0x000379aa) cell_app_pane_cp2_g1_ParamLimits

0x86e9,	// (0x000379aa) cell_app_pane_cp2_g1

0x8707,	// (0x000379c8) cell_app_pane_cp2_g2_ParamLimits

0x8707,	// (0x000379c8) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0003ee4b) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0003ee4b) cell_app_pane_cp2_g

0x8713,	// (0x000379d4) cell_app_pane_cp2_t1_ParamLimits

0x8713,	// (0x000379d4) cell_app_pane_cp2_t1

0x563b,	// (0x000348fc) grid_highlight_pane_cp1_ParamLimits

0x563b,	// (0x000348fc) grid_highlight_pane_cp1

0x39e7,	// (0x00032ca8) cell_hwr_candidate_pane_cp1_ParamLimits

0x39e7,	// (0x00032ca8) cell_hwr_candidate_pane_cp1

0x837a,	// (0x0003763b) fep_hwr_candidate_drop_down_list_pane_g1

0x8725,	// (0x000379e6) fep_hwr_candidate_drop_down_list_pane_g2

0x8732,	// (0x000379f3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0003ee50) fep_hwr_candidate_drop_down_list_pane_g

0x3a05,	// (0x00032cc6) fep_hwr_candidate_drop_down_list_scroll_pane

0x3a0e,	// (0x00032ccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3a0e,	// (0x00032ccf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x3a1b,	// (0x00032cdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3a1b,	// (0x00032cdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3a28,	// (0x00032ce9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3a28,	// (0x00032ce9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x85eb,	// (0x000378ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x85eb,	// (0x000378ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8606,	// (0x000378c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8606,	// (0x000378c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3a35,	// (0x00032cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3a35,	// (0x00032cf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x3a50,	// (0x00032d11) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3a50,	// (0x00032d11) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3a6b,	// (0x00032d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3a6b,	// (0x00032d2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0003ee57) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0003ee57) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xcad5,	// (0x0003bd96) cell_vkb_candidate_pane_cp1_ParamLimits

0xcad5,	// (0x0003bd96) cell_vkb_candidate_pane_cp1

0x837a,	// (0x0003763b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x837a,	// (0x0003763b) fep_vkb_candidate_drop_down_list_pane_g1

0x8725,	// (0x000379e6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8725,	// (0x000379e6) fep_vkb_candidate_drop_down_list_pane_g2

0x8732,	// (0x000379f3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8732,	// (0x000379f3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0003ee50) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0003ee50) fep_vkb_candidate_drop_down_list_pane_g

0x873f,	// (0x00037a00) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x873f,	// (0x00037a00) fep_vkb_candidate_drop_down_list_scroll_pane

0x874c,	// (0x00037a0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x874c,	// (0x00037a0d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8759,	// (0x00037a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8759,	// (0x00037a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8765,	// (0x00037a26) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8765,	// (0x00037a26) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x85a9,	// (0x0003786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x85a9,	// (0x0003786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x85ca,	// (0x0003788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x85ca,	// (0x0003788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8771,	// (0x00037a32) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8771,	// (0x00037a32) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8792,	// (0x00037a53) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8792,	// (0x00037a53) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x87b3,	// (0x00037a74) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x87b3,	// (0x00037a74) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0003ee68) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0003ee68) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xf0ce,	// (0x0003e38f) title_pane_g1_ParamLimits

0xf0e5,	// (0x0003e3a6) title_pane_g2_ParamLimits

0xf529,	// (0x0003e7ea) title_pane_g_ParamLimits

0x5b38,	// (0x00034df9) aid_call2_pane

0x5b40,	// (0x00034e01) aid_call_pane

0x5b48,	// (0x00034e09) popup_clock_analogue_window_g1

0x5b48,	// (0x00034e09) popup_clock_analogue_window_g2

0x28f4,	// (0x00031bb5) popup_clock_analogue_window_g3

0x28fd,	// (0x00031bbe) popup_clock_analogue_window_g4

0x4f7b,	// (0x0003423c) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0003e999) popup_clock_analogue_window_g

0x2905,	// (0x00031bc6) popup_clock_analogue_window_t1

0x2913,	// (0x00031bd4) clock_digital_number_pane_ParamLimits

0x2913,	// (0x00031bd4) clock_digital_number_pane

0x291f,	// (0x00031be0) clock_digital_number_pane_cp02_ParamLimits

0x291f,	// (0x00031be0) clock_digital_number_pane_cp02

0x292b,	// (0x00031bec) clock_digital_number_pane_cp03_ParamLimits

0x292b,	// (0x00031bec) clock_digital_number_pane_cp03

0x2937,	// (0x00031bf8) clock_digital_number_pane_cp04_ParamLimits

0x2937,	// (0x00031bf8) clock_digital_number_pane_cp04

0x2943,	// (0x00031c04) clock_digital_separator_pane_ParamLimits

0x2943,	// (0x00031c04) clock_digital_separator_pane

0x294f,	// (0x00031c10) popup_clock_digital_window_t1_ParamLimits

0x294f,	// (0x00031c10) popup_clock_digital_window_t1

0x4f7b,	// (0x0003423c) clock_digital_number_pane_g1

0x4f7b,	// (0x0003423c) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0003e9a4) clock_digital_number_pane_g

0x4f7b,	// (0x0003423c) clock_digital_separator_pane_g1

0x4f7b,	// (0x0003423c) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0003e9a4) clock_digital_separator_pane_g

0xbe77,	// (0x0003b138) aid_fill_nsta_ParamLimits

0xbf8e,	// (0x0003b24f) indicator_nsta_pane_ParamLimits

0x62c5,	// (0x00035586) popup_clock_analogue_window

0x62c5,	// (0x00035586) popup_clock_digital_window

0xc8cd,	// (0x0003bb8e) grid_indicator_nsta_pane_ParamLimits

0x7d46,	// (0x00037007) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0003ed3a) clock_nsta_pane_t

0x28b8,	// (0x00031b79) aid_size_max_handle

0xb76f,	// (0x0003aa30) aid_size_min_handle

0x5fe1,	// (0x000352a2) editor_scroll_pane

0x87ce,	// (0x00037a8f) ex_editor_pane

0x5791,	// (0x00034a52) scroll_pane_cp13

0x55df,	// (0x000348a0) scroll_pane_cp14

0x5b77,	// (0x00034e38) scroll_pane_cp36

0x0992,	// (0x0002fc53) list_single_graphic_hl_pane_cp2_ParamLimits

0x0992,	// (0x0002fc53) list_single_graphic_hl_pane_cp2

0xc72e,	// (0x0003b9ef) list_single_graphic_hl_pane_ParamLimits

0xc72e,	// (0x0003b9ef) list_single_graphic_hl_pane

0x2257,	// (0x00031518) aid_size_min_hl_cp1

0x87d6,	// (0x00037a97) list_highlight_pane_cp34_ParamLimits

0x87d6,	// (0x00037a97) list_highlight_pane_cp34

0x87e7,	// (0x00037aa8) list_single_graphic_hl_pane_g1_ParamLimits

0x87e7,	// (0x00037aa8) list_single_graphic_hl_pane_g1

0xb414,	// (0x0003a6d5) list_single_graphic_hl_pane_g2_ParamLimits

0xb414,	// (0x0003a6d5) list_single_graphic_hl_pane_g2

0xb414,	// (0x0003a6d5) list_single_graphic_hl_pane_g3_ParamLimits

0xb414,	// (0x0003a6d5) list_single_graphic_hl_pane_g3

0x55e7,	// (0x000348a8) list_single_graphic_hl_pane_g4_ParamLimits

0x55e7,	// (0x000348a8) list_single_graphic_hl_pane_g4

0x5655,	// (0x00034916) list_single_graphic_hl_pane_g5_ParamLimits

0x5655,	// (0x00034916) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0003ee79) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0003ee79) list_single_graphic_hl_pane_g

0xb420,	// (0x0003a6e1) list_single_graphic_hl_pane_t1_ParamLimits

0xb420,	// (0x0003a6e1) list_single_graphic_hl_pane_t1

0x87f4,	// (0x00037ab5) aid_size_min_hl_cp2

0x87fd,	// (0x00037abe) list_highlight_pane_cp34_cp2_ParamLimits

0x87fd,	// (0x00037abe) list_highlight_pane_cp34_cp2

0x87e7,	// (0x00037aa8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x87e7,	// (0x00037aa8) list_single_graphic_hl_pane_g1_cp2

0x880a,	// (0x00037acb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x880a,	// (0x00037acb) list_single_graphic_hl_pane_g2_cp2

0x8816,	// (0x00037ad7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8816,	// (0x00037ad7) list_single_graphic_hl_pane_g3_cp2

0x5e4f,	// (0x00035110) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5e4f,	// (0x00035110) list_single_graphic_hl_pane_g4_cp2

0x862f,	// (0x000378f0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x862f,	// (0x000378f0) list_single_graphic_hl_pane_g5_cp2

0xb7b5,	// (0x0003aa76) control_pane_g4_ParamLimits

0xb7b5,	// (0x0003aa76) control_pane_g4

0x61fd,	// (0x000354be) bg_popup_sub_pane_cp10_ParamLimits

0x8158,	// (0x00037419) list_choice_list_pane_ParamLimits

0x8167,	// (0x00037428) scroll_pane_cp23

0x5194,	// (0x00034455) bg_popup_preview_window_pane_cp02_ParamLimits

0x866b,	// (0x0003792c) list_preview_fixed_pane_ParamLimits

0x8681,	// (0x00037942) list_preview_fixed_pane_cp_ParamLimits

0x8681,	// (0x00037942) list_preview_fixed_pane_cp

0x868d,	// (0x0003794e) popup_preview_fixed_window_g1_ParamLimits

0x868d,	// (0x0003794e) popup_preview_fixed_window_g1

0x8699,	// (0x0003795a) popup_preview_fixed_window_g2_ParamLimits

0x8699,	// (0x0003795a) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0003ee08) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0003ee08) popup_preview_fixed_window_g

0x2848,	// (0x00031b09) aid_navi_side_left_pane_ParamLimits

0x2858,	// (0x00031b19) aid_navi_side_right_pane_ParamLimits

0x2867,	// (0x00031b28) navi_icon_pane_stacon_ParamLimits

0x2877,	// (0x00031b38) navi_navi_pane_stacon_ParamLimits

0x2867,	// (0x00031b28) navi_text_pane_stacon_ParamLimits

0x4f71,	// (0x00034232) main_text_info_pane

0x8838,	// (0x00037af9) listscroll_text_info_pane

0x8840,	// (0x00037b01) list_text_info_pane_ParamLimits

0x8840,	// (0x00037b01) list_text_info_pane

0x8af3,	// (0x00037db4) scroll_pane_cp24_ParamLimits

0x8af3,	// (0x00037db4) scroll_pane_cp24

0xcaf5,	// (0x0003bdb6) list_text_info_pane_t1_ParamLimits

0xcaf5,	// (0x0003bdb6) list_text_info_pane_t1

0xb900,	// (0x0003abc1) popup_fast_swap2_window_ParamLimits

0xb900,	// (0x0003abc1) popup_fast_swap2_window

0x8b11,	// (0x00037dd2) aid_size_cell_fast2

0x4f71,	// (0x00034232) bg_popup_window_pane_cp17

0x6770,	// (0x00035a31) heading_pane_cp2

0x6778,	// (0x00035a39) listscroll_fast2_pane

0x8b1b,	// (0x00037ddc) grid_fast2_pane

0x8b23,	// (0x00037de4) listscroll_fast2_pane_g1

0x8b2b,	// (0x00037dec) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0003ee84) listscroll_fast2_pane_g

0x5791,	// (0x00034a52) scroll_pane_cp26

0x8b33,	// (0x00037df4) cell_fast2_pane_ParamLimits

0x8b33,	// (0x00037df4) cell_fast2_pane

0x8b49,	// (0x00037e0a) cell_fast2_pane_g1

0x8b52,	// (0x00037e13) cell_fast2_pane_g2

0x8b5b,	// (0x00037e1c) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0003ee89) cell_fast2_pane_g

0x5440,	// (0x00034701) grid_highlight_pane_cp9

0x5455,	// (0x00034716) main_eswt_pane_ParamLimits

0x5455,	// (0x00034716) main_eswt_pane

0x8b08,	// (0x00037dc9) list_single_text_info_pane

0x8b63,	// (0x00037e24) eswt_ctrl_button_pane

0x8b63,	// (0x00037e24) eswt_ctrl_canvas_pane

0x8b6b,	// (0x00037e2c) eswt_ctrl_combo_pane

0x8b63,	// (0x00037e24) eswt_ctrl_default_pane

0x8b63,	// (0x00037e24) eswt_ctrl_label_pane

0x8b73,	// (0x00037e34) eswt_ctrl_wait_pane

0x8b7b,	// (0x00037e3c) eswt_shell_pane

0x4f71,	// (0x00034232) listscroll_eswt_app_pane

0x8b97,	// (0x00037e58) popup_eswt_tasktip_window_ParamLimits

0x8b97,	// (0x00037e58) popup_eswt_tasktip_window

0x6446,	// (0x00035707) bg_popup_window_pane_cp18

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_ParamLimits

0x8ba8,	// (0x00037e69) eswt_control_pane_g1

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_ParamLimits

0x8bb5,	// (0x00037e76) eswt_control_pane_g2

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_ParamLimits

0x8bc2,	// (0x00037e83) eswt_control_pane_g3

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_ParamLimits

0x8bcf,	// (0x00037e90) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0003ee90) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0003ee90) eswt_control_pane_g

0x563b,	// (0x000348fc) bg_button_pane_ParamLimits

0x563b,	// (0x000348fc) bg_button_pane

0x5455,	// (0x00034716) common_borders_pane_copy2_ParamLimits

0x5455,	// (0x00034716) common_borders_pane_copy2

0x8bdc,	// (0x00037e9d) control_button_pane_g1_ParamLimits

0x8bdc,	// (0x00037e9d) control_button_pane_g1

0x8be8,	// (0x00037ea9) control_button_pane_g2_ParamLimits

0x8be8,	// (0x00037ea9) control_button_pane_g2

0x8bf4,	// (0x00037eb5) control_button_pane_g3_ParamLimits

0x8bf4,	// (0x00037eb5) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0003ee99) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0003ee99) control_button_pane_g

0x8c08,	// (0x00037ec9) control_button_pane_t1

0x8c16,	// (0x00037ed7) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0003eea0) control_button_pane_t

0x63c6,	// (0x00035687) bg_button_pane_g1

0x63ce,	// (0x0003568f) bg_button_pane_g2

0x63d6,	// (0x00035697) bg_button_pane_g3

0x63de,	// (0x0003569f) bg_button_pane_g4

0x63e6,	// (0x000356a7) bg_button_pane_g5

0x63ee,	// (0x000356af) bg_button_pane_g6

0x63f6,	// (0x000356b7) bg_button_pane_g7

0x63fe,	// (0x000356bf) bg_button_pane_g8

0x6406,	// (0x000356c7) bg_button_pane_g9

0x0008,

0xf83a,	// (0x0003eafb) bg_button_pane_g

0x8113,	// (0x000373d4) common_borders_pane_ParamLimits

0x8113,	// (0x000373d4) common_borders_pane

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy1_ParamLimits

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy1

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy1_ParamLimits

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy1

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy1_ParamLimits

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy1

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy1_ParamLimits

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy1

0x814e,	// (0x0003740f) bg_eswt_ctrl_canvas_pane_g1

0x8113,	// (0x000373d4) common_borders_pane_cp2_ParamLimits

0x8113,	// (0x000373d4) common_borders_pane_cp2

0x8113,	// (0x000373d4) common_borders_pane_cp3_ParamLimits

0x8113,	// (0x000373d4) common_borders_pane_cp3

0x8c24,	// (0x00037ee5) separator_horizontal_pane

0x59d7,	// (0x00034c98) separator_vertical_pane

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy2_ParamLimits

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy2

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy2_ParamLimits

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy2

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy2_ParamLimits

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy2

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy2_ParamLimits

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy2

0x4f71,	// (0x00034232) common_borders_pane_cp4

0x8c2c,	// (0x00037eed) separator_horizontal_pane_g1

0x8c35,	// (0x00037ef6) separator_horizontal_pane_g2

0x8c3e,	// (0x00037eff) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0003eea5) separator_horizontal_pane_g

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy3_ParamLimits

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy3

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy3_ParamLimits

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy3

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy3_ParamLimits

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy3

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy3_ParamLimits

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy3

0x4f71,	// (0x00034232) common_borders_pane_cp5

0x8c47,	// (0x00037f08) separator_vertical_pane_g1

0x8c50,	// (0x00037f11) separator_vertical_pane_g2

0x8c59,	// (0x00037f1a) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0003eeac) separator_vertical_pane_g

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy4_ParamLimits

0x8ba8,	// (0x00037e69) eswt_control_pane_g1_copy4

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy4_ParamLimits

0x8bb5,	// (0x00037e76) eswt_control_pane_g2_copy4

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy4_ParamLimits

0x8bc2,	// (0x00037e83) eswt_control_pane_g3_copy4

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy4_ParamLimits

0x8bcf,	// (0x00037e90) eswt_control_pane_g4_copy4

0xcb10,	// (0x0003bdd1) eswt_ctrl_combo_button_pane

0xcb18,	// (0x0003bdd9) eswt_ctrl_input_pane

0xcb20,	// (0x0003bde1) popup_choice_list_window_cp70

0xcb28,	// (0x0003bde9) eswt_ctrl_input_pane_t1

0x4f71,	// (0x00034232) input_focus_pane_cp70

0x8113,	// (0x000373d4) bg_button_pane_cp70_ParamLimits

0x8113,	// (0x000373d4) bg_button_pane_cp70

0x77bb,	// (0x00036a7c) eswt_ctrl_combo_button_pane_g1

0x8c62,	// (0x00037f23) wait_bar_pane_cp70

0x6446,	// (0x00035707) bg_popup_window_pane_cp70_ParamLimits

0x6446,	// (0x00035707) bg_popup_window_pane_cp70

0x8c6a,	// (0x00037f2b) popup_eswt_tasktip_window_t1

0x8c80,	// (0x00037f41) wait_bar_pane_cp71_ParamLimits

0x8c80,	// (0x00037f41) wait_bar_pane_cp71

0x8c8c,	// (0x00037f4d) grid_eswt_app_pane

0x59e0,	// (0x00034ca1) scroll_pane_cp70

0xcb36,	// (0x0003bdf7) cell_eswt_app_pane_ParamLimits

0xcb36,	// (0x0003bdf7) cell_eswt_app_pane

0xcb5e,	// (0x0003be1f) cell_eswt_app_pane_g1_ParamLimits

0xcb5e,	// (0x0003be1f) cell_eswt_app_pane_g1

0xcb8d,	// (0x0003be4e) cell_eswt_app_pane_g2_ParamLimits

0xcb8d,	// (0x0003be4e) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0003eeb3) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0003eeb3) cell_eswt_app_pane_g

0xcbb6,	// (0x0003be77) cell_eswt_app_pane_t1_ParamLimits

0xcbb6,	// (0x0003be77) cell_eswt_app_pane_t1

0x8c95,	// (0x00037f56) grid_highlight_pane_cp70_ParamLimits

0x8c95,	// (0x00037f56) grid_highlight_pane_cp70

0x55e7,	// (0x000348a8) set_content_pane_g1

0x0b2f,	// (0x0002fdf0) status_small_volume_pane

0xcbe8,	// (0x0003bea9) status_small_volume_pane_g1

0xcbf0,	// (0x0003beb1) volume_small2_pane

0xcbf9,	// (0x0003beba) volume_small2_pane_g1

0xcc02,	// (0x0003bec3) volume_small2_pane_g2

0xcc0b,	// (0x0003becc) volume_small2_pane_g3

0xcc14,	// (0x0003bed5) volume_small2_pane_g4

0xcc1d,	// (0x0003bede) volume_small2_pane_g5

0xcc26,	// (0x0003bee7) volume_small2_pane_g6

0xcc2f,	// (0x0003bef0) volume_small2_pane_g7

0xcc38,	// (0x0003bef9) volume_small2_pane_g8

0xcc41,	// (0x0003bf02) volume_small2_pane_g9

0xcc4a,	// (0x0003bf0b) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0003eeb8) volume_small2_pane_g

0x8481,	// (0x00037742) fep_vkb_top_text_pane_g1_ParamLimits

0xca7d,	// (0x0003bd3e) fep_vkb_top_text_pane_t1_ParamLimits

0x86a5,	// (0x00037966) popup_preview_fixed_window_g3_ParamLimits

0x86a5,	// (0x00037966) popup_preview_fixed_window_g3

0xbe20,	// (0x0003b0e1) popup_toolbar_trans_pane

0x753a,	// (0x000367fb) aid_height_set_list_ParamLimits

0x7546,	// (0x00036807) aid_size_parent_ParamLimits

0x61fd,	// (0x000354be) list_highlight_pane_cp2_ParamLimits

0x55e7,	// (0x000348a8) set_content_pane_g1_ParamLimits

0x5805,	// (0x00034ac6) list_single_image_pane_ParamLimits

0x5805,	// (0x00034ac6) list_single_image_pane

0xcc53,	// (0x0003bf14) aid_size_cell_image_ParamLimits

0xcc53,	// (0x0003bf14) aid_size_cell_image

0xcc60,	// (0x0003bf21) grid_single_image_pane_ParamLimits

0xcc60,	// (0x0003bf21) grid_single_image_pane

0x55e7,	// (0x000348a8) list_single_image_pane_g1_ParamLimits

0x55e7,	// (0x000348a8) list_single_image_pane_g1

0x5655,	// (0x00034916) list_single_image_pane_g2_ParamLimits

0x5655,	// (0x00034916) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0003eecd) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0003eecd) list_single_image_pane_g

0x884f,	// (0x00037b10) list_single_image_pane_t1_ParamLimits

0x884f,	// (0x00037b10) list_single_image_pane_t1

0xcc6e,	// (0x0003bf2f) cell_image_list_pane_ParamLimits

0xcc6e,	// (0x0003bf2f) cell_image_list_pane

0xcc82,	// (0x0003bf43) cell_image_list_pane_g1

0xcc8b,	// (0x0003bf4c) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0003eed2) cell_image_list_pane_g

0x8ca1,	// (0x00037f62) aid_size_cell_tb_trans_pane

0x563b,	// (0x000348fc) bg_tb_trans_pane

0x8cb3,	// (0x00037f74) grid_tb_trans_pane

0x63c6,	// (0x00035687) bg_tb_trans_pane_g1

0x63ce,	// (0x0003568f) bg_tb_trans_pane_g2

0x63d6,	// (0x00035697) bg_tb_trans_pane_g3

0x63de,	// (0x0003569f) bg_tb_trans_pane_g4

0x63e6,	// (0x000356a7) bg_tb_trans_pane_g5

0x63fe,	// (0x000356bf) bg_tb_trans_pane_g6

0x6406,	// (0x000356c7) bg_tb_trans_pane_g7

0x63ee,	// (0x000356af) bg_tb_trans_pane_g8

0x63f6,	// (0x000356b7) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0003eed7) bg_tb_trans_pane_g

0x8cc7,	// (0x00037f88) cell_toolbar_trans_pane_ParamLimits

0x8cc7,	// (0x00037f88) cell_toolbar_trans_pane

0x814e,	// (0x0003740f) cell_toolbar_trans_pane_g1

0xc97a,	// (0x0003bc3b) list_form2_midp_pane_t1

0xc988,	// (0x0003bc49) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0003ed80) list_form2_midp_pane_t

0x7e22,	// (0x000370e3) scroll_pane_cp51_ParamLimits

0x7f98,	// (0x00037259) form2_midp_wait_pane_g1

0x7fa1,	// (0x00037262) form2_midp_wait_pane_g2

0x7faa,	// (0x0003726b) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0003ed95) form2_midp_wait_pane_g

0x504b,	// (0x0003430c) list_highlight_pane_cp21_ParamLimits

0x7fe8,	// (0x000372a9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7ff7,	// (0x000372b8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x1e36,	// (0x000310f7) list_single_2graphic_im_pane_ParamLimits

0x1e36,	// (0x000310f7) list_single_2graphic_im_pane

0xcc94,	// (0x0003bf55) list_single_2graphic_im_pane_g1_ParamLimits

0xcc94,	// (0x0003bf55) list_single_2graphic_im_pane_g1

0xcca5,	// (0x0003bf66) list_single_2graphic_im_pane_g2_ParamLimits

0xcca5,	// (0x0003bf66) list_single_2graphic_im_pane_g2

0xccb1,	// (0x0003bf72) list_single_2graphic_im_pane_g3_ParamLimits

0xccb1,	// (0x0003bf72) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0003eeea) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0003eeea) list_single_2graphic_im_pane_g

0xccc5,	// (0x0003bf86) list_single_2graphic_im_pane_t1_ParamLimits

0xccc5,	// (0x0003bf86) list_single_2graphic_im_pane_t1

0x86b1,	// (0x00037972) list_single_graphic_2heading_pane_fp_ParamLimits

0x86b1,	// (0x00037972) list_single_graphic_2heading_pane_fp

0x2139,	// (0x000313fa) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x2139,	// (0x000313fa) list_single_graphic_2heading_pane_fp_g1

0x86c5,	// (0x00037986) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x86c5,	// (0x00037986) list_single_graphic_2heading_pane_fp_g2

0x2755,	// (0x00031a16) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2755,	// (0x00031a16) list_single_graphic_2heading_pane_fp_g3

0x3963,	// (0x00032c24) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3963,	// (0x00032c24) list_single_graphic_2heading_pane_fp_g4

0x86d1,	// (0x00037992) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x86d1,	// (0x00037992) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0003ee18) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0003ee18) list_single_graphic_2heading_pane_fp_g

0x226c,	// (0x0003152d) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x226c,	// (0x0003152d) list_single_graphic_2heading_pane_fp_t1

0x2171,	// (0x00031432) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x2171,	// (0x00031432) list_single_graphic_2heading_pane_fp_t2

0x2282,	// (0x00031543) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2282,	// (0x00031543) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0003eef3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0003eef3) list_single_graphic_2heading_pane_fp_t

0x81d7,	// (0x00037498) fep_hwr_write_pane_g5_ParamLimits

0x81d7,	// (0x00037498) fep_hwr_write_pane_g5

0x81e3,	// (0x000374a4) fep_hwr_write_pane_g6_ParamLimits

0x81e3,	// (0x000374a4) fep_hwr_write_pane_g6

0x8b7b,	// (0x00037e3c) eswt_shell_pane_ParamLimits

0x6446,	// (0x00035707) bg_popup_window_pane_cp18_ParamLimits

0x74de,	// (0x0003679f) heading_pane_cp70

0x8c6a,	// (0x00037f2b) popup_eswt_tasktip_window_t1_ParamLimits

0xbebb,	// (0x0003b17c) aid_touch_tab_arrow_left

0xbecf,	// (0x0003b190) aid_touch_tab_arrow_right

0xf104,	// (0x0003e3c5) title_pane_g3_ParamLimits

0xf104,	// (0x0003e3c5) title_pane_g3

0x560b,	// (0x000348cc) set_value_pane_g1

0xbe20,	// (0x0003b0e1) popup_toolbar_trans_pane_ParamLimits

0x8ca1,	// (0x00037f62) aid_size_cell_tb_trans_pane_ParamLimits

0x563b,	// (0x000348fc) bg_tb_trans_pane_ParamLimits

0x8cb3,	// (0x00037f74) grid_tb_trans_pane_ParamLimits

0x5194,	// (0x00034455) cont_note_pane_ParamLimits

0x5194,	// (0x00034455) cont_note_pane

0x5455,	// (0x00034716) cont_snote2_single_text_pane_ParamLimits

0x5455,	// (0x00034716) cont_snote2_single_text_pane

0x5455,	// (0x00034716) cont_snote2_single_graphic_pane_ParamLimits

0x5455,	// (0x00034716) cont_snote2_single_graphic_pane

0x698e,	// (0x00035c4f) cont_note_wait_pane_ParamLimits

0x698e,	// (0x00035c4f) cont_note_wait_pane

0x698e,	// (0x00035c4f) cont_note_image_pane_ParamLimits

0x698e,	// (0x00035c4f) cont_note_image_pane

0x8cf9,	// (0x00037fba) popup_note2_window_g1_ParamLimits

0x8cf9,	// (0x00037fba) popup_note2_window_g1

0x8d2a,	// (0x00037feb) popup_note2_window_t1_ParamLimits

0x8d2a,	// (0x00037feb) popup_note2_window_t1

0x8d6f,	// (0x00038030) popup_note2_window_t2_ParamLimits

0x8d6f,	// (0x00038030) popup_note2_window_t2

0x8db4,	// (0x00038075) popup_note2_window_t3_ParamLimits

0x8db4,	// (0x00038075) popup_note2_window_t3

0x8df9,	// (0x000380ba) popup_note2_window_t4_ParamLimits

0x8df9,	// (0x000380ba) popup_note2_window_t4

0x5218,	// (0x000344d9) popup_note2_window_t5_ParamLimits

0x5218,	// (0x000344d9) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0003eeff) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0003eeff) popup_note2_window_t

0x8e28,	// (0x000380e9) popup_note2_image_window_g1_ParamLimits

0x8e28,	// (0x000380e9) popup_note2_image_window_g1

0x8e34,	// (0x000380f5) popup_note2_image_window_g2_ParamLimits

0x8e34,	// (0x000380f5) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0003ef0a) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0003ef0a) popup_note2_image_window_g

0x8e46,	// (0x00038107) popup_note2_image_window_t1_ParamLimits

0x8e46,	// (0x00038107) popup_note2_image_window_t1

0x8e5e,	// (0x0003811f) popup_note2_image_window_t2_ParamLimits

0x8e5e,	// (0x0003811f) popup_note2_image_window_t2

0x8e76,	// (0x00038137) popup_note2_image_window_t3_ParamLimits

0x8e76,	// (0x00038137) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0003ef0f) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0003ef0f) popup_note2_image_window_t

0x699c,	// (0x00035c5d) popup_note2_wait_window_g1_ParamLimits

0x699c,	// (0x00035c5d) popup_note2_wait_window_g1

0x69a8,	// (0x00035c69) popup_note2_wait_window_g2_ParamLimits

0x69a8,	// (0x00035c69) popup_note2_wait_window_g2

0x69b4,	// (0x00035c75) popup_note2_wait_window_g3_ParamLimits

0x69b4,	// (0x00035c75) popup_note2_wait_window_g3

0x0002,

0xf81c,	// (0x0003eadd) popup_note2_wait_window_g_ParamLimits

0xf81c,	// (0x0003eadd) popup_note2_wait_window_g

0x8e92,	// (0x00038153) popup_note2_wait_window_t1_ParamLimits

0x8e92,	// (0x00038153) popup_note2_wait_window_t1

0x8eb0,	// (0x00038171) popup_note2_wait_window_t2_ParamLimits

0x8eb0,	// (0x00038171) popup_note2_wait_window_t2

0x8ece,	// (0x0003818f) popup_note2_wait_window_t3_ParamLimits

0x8ece,	// (0x0003818f) popup_note2_wait_window_t3

0x8ee0,	// (0x000381a1) popup_note2_wait_window_t4_ParamLimits

0x8ee0,	// (0x000381a1) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0003ef16) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0003ef16) popup_note2_wait_window_t

0x8ef2,	// (0x000381b3) wait_bar2_pane_ParamLimits

0x8ef2,	// (0x000381b3) wait_bar2_pane

0x8f0a,	// (0x000381cb) popup_snote2_single_text_window_g1_ParamLimits

0x8f0a,	// (0x000381cb) popup_snote2_single_text_window_g1

0x8f32,	// (0x000381f3) popup_snote2_single_text_window_t1_ParamLimits

0x8f32,	// (0x000381f3) popup_snote2_single_text_window_t1

0x8f7e,	// (0x0003823f) popup_snote2_single_text_window_t2_ParamLimits

0x8f7e,	// (0x0003823f) popup_snote2_single_text_window_t2

0x8fca,	// (0x0003828b) popup_snote2_single_text_window_t3_ParamLimits

0x8fca,	// (0x0003828b) popup_snote2_single_text_window_t3

0x900b,	// (0x000382cc) popup_snote2_single_text_window_t4_ParamLimits

0x900b,	// (0x000382cc) popup_snote2_single_text_window_t4

0x9041,	// (0x00038302) popup_snote2_single_text_window_t5_ParamLimits

0x9041,	// (0x00038302) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x0003ef1f) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x0003ef1f) popup_snote2_single_text_window_t

0x906c,	// (0x0003832d) popup_snote2_single_graphic_window_g1_ParamLimits

0x906c,	// (0x0003832d) popup_snote2_single_graphic_window_g1

0x9094,	// (0x00038355) popup_snote2_single_graphic_window_g2_ParamLimits

0x9094,	// (0x00038355) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x0003ef2a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x0003ef2a) popup_snote2_single_graphic_window_g

0x90bc,	// (0x0003837d) popup_snote2_single_graphic_window_t1_ParamLimits

0x90bc,	// (0x0003837d) popup_snote2_single_graphic_window_t1

0x9108,	// (0x000383c9) popup_snote2_single_graphic_window_t2_ParamLimits

0x9108,	// (0x000383c9) popup_snote2_single_graphic_window_t2

0x8fca,	// (0x0003828b) popup_snote2_single_graphic_window_t3_ParamLimits

0x8fca,	// (0x0003828b) popup_snote2_single_graphic_window_t3

0x900b,	// (0x000382cc) popup_snote2_single_graphic_window_t4_ParamLimits

0x900b,	// (0x000382cc) popup_snote2_single_graphic_window_t4

0x9041,	// (0x00038302) popup_snote2_single_graphic_window_t5_ParamLimits

0x9041,	// (0x00038302) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x0003ef2f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x0003ef2f) popup_snote2_single_graphic_window_t

0x7dbb,	// (0x0003707c) clock_nsta_pane_cp2_t1

0x7dbb,	// (0x0003707c) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0003ed56) clock_nsta_pane_cp2_t

0x1ac1,	// (0x00030d82) form_field_data_wide_pane_g1_ParamLimits

0x55e7,	// (0x000348a8) form_field_data_wide_pane_g2_ParamLimits

0x55e7,	// (0x000348a8) form_field_data_wide_pane_g2

0x5655,	// (0x00034916) form_field_data_wide_pane_g3_ParamLimits

0x5655,	// (0x00034916) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0003e91c) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0003e91c) form_field_data_wide_pane_g

0xc8b7,	// (0x0003bb78) grid_touch_3_pane_ParamLimits

0xc8b7,	// (0x0003bb78) grid_touch_3_pane

0xccf6,	// (0x0003bfb7) cell_touch_3_pane_ParamLimits

0xccf6,	// (0x0003bfb7) cell_touch_3_pane

0x814e,	// (0x0003740f) cell_touch_3_pane_g1

0x814e,	// (0x0003740f) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0003eddb) cell_touch_3_pane_g

0x5270,	// (0x00034531) cont_query_data_pane

0x5278,	// (0x00034539) cont_query_data_pane_cp1

0x9154,	// (0x00038415) button_value_adjust_pane_cp7

0x915c,	// (0x0003841d) query_popup_pane_cp3

0x5b88,	// (0x00034e49) bg_popup_sub_pane_cp22_ParamLimits

0x296e,	// (0x00031c2f) navi_navi_volume_pane_cp2

0x2986,	// (0x00031c47) popup_side_volume_key_window_g2

0x2992,	// (0x00031c53) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0003e9b2) popup_side_volume_key_window_g

0x29ac,	// (0x00031c6d) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0003e9b9) popup_side_volume_key_window_t

0x5dd2,	// (0x00035093) popup_side_volume_key_window_ParamLimits

0xaf19,	// (0x0003a1da) list_double_graphic_pane_g4_ParamLimits

0xaf19,	// (0x0003a1da) list_double_graphic_pane_g4

0xc719,	// (0x0003b9da) list_single_2heading_msg_pane_ParamLimits

0xc719,	// (0x0003b9da) list_single_2heading_msg_pane

0xcd3d,	// (0x0003bffe) list_single_2heading_msg_pane_g1_ParamLimits

0xcd3d,	// (0x0003bffe) list_single_2heading_msg_pane_g1

0xcd49,	// (0x0003c00a) list_single_2heading_msg_pane_g2_ParamLimits

0xcd49,	// (0x0003c00a) list_single_2heading_msg_pane_g2

0xcd5c,	// (0x0003c01d) list_single_2heading_msg_pane_g3_ParamLimits

0xcd5c,	// (0x0003c01d) list_single_2heading_msg_pane_g3

0xcd68,	// (0x0003c029) list_single_2heading_msg_pane_g4_ParamLimits

0xcd68,	// (0x0003c029) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x0003ef3a) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x0003ef3a) list_single_2heading_msg_pane_g

0xb436,	// (0x0003a6f7) list_single_2heading_msg_pane_t1_ParamLimits

0xb436,	// (0x0003a6f7) list_single_2heading_msg_pane_t1

0xb45e,	// (0x0003a71f) list_single_2heading_msg_pane_t2_ParamLimits

0xb45e,	// (0x0003a71f) list_single_2heading_msg_pane_t2

0xb4c9,	// (0x0003a78a) list_single_2heading_msg_pane_t3_ParamLimits

0xb4c9,	// (0x0003a78a) list_single_2heading_msg_pane_t3

0x2360,	// (0x00031621) list_single_2heading_msg_pane_t4_ParamLimits

0x2360,	// (0x00031621) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x0003ef43) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x0003ef43) list_single_2heading_msg_pane_t

0x5007,	// (0x000342c8) title_pane_g4_ParamLimits

0x5007,	// (0x000342c8) title_pane_g4

0x27be,	// (0x00031a7f) title_pane_stacon_g3_ParamLimits

0x27be,	// (0x00031a7f) title_pane_stacon_g3

0x8ced,	// (0x00037fae) list_single_2graphic_im_pane_g4_ParamLimits

0x8ced,	// (0x00037fae) list_single_2graphic_im_pane_g4

0x7308,	// (0x000365c9) popup_side_volume_key_window_cp

0x7727,	// (0x000369e8) main_idle_act2_pane_t1

0x31f7,	// (0x000324b8) toolbar_button_pane_g10

0xf40b,	// (0x0003e6cc) popup_toolbar_window_cp1

0x7dac,	// (0x0003706d) clock_nsta_pane_cp_t1

0x7dac,	// (0x0003706d) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0003ed51) clock_nsta_pane_cp_t

0x296e,	// (0x00031c2f) navi_navi_volume_pane_cp2_ParamLimits

0x297a,	// (0x00031c3b) popup_side_volume_key_window_g1_ParamLimits

0x2986,	// (0x00031c47) popup_side_volume_key_window_g2_ParamLimits

0x2992,	// (0x00031c53) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0003e9b2) popup_side_volume_key_window_g_ParamLimits

0x3726,	// (0x000329e7) fep_hwr_aid_pane

0xf51b,	// (0x0003e7dc) bg_fep_hwr_top_pane_g4_ParamLimits

0x81a7,	// (0x00037468) fep_hwr_top_pane_g1_ParamLimits

0x81b9,	// (0x0003747a) fep_hwr_top_pane_g2_ParamLimits

0x37d9,	// (0x00032a9a) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0003eda6) fep_hwr_top_pane_g_ParamLimits

0x37ee,	// (0x00032aaf) fep_hwr_top_text_pane_ParamLimits

0x70d3,	// (0x00036394) aid_touch_tab_arrow_arrow_2

0x70dc,	// (0x0003639d) aid_touch_tab_arrow_left_2

0x373a,	// (0x000329fb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x376d,	// (0x00032a2e) fep_hwr_prediction_pane

0x82ec,	// (0x000375ad) fep_vkb_prediction_pane

0xca5d,	// (0x0003bd1e) fep_vkb_side_pane_g3_ParamLimits

0xca5d,	// (0x0003bd1e) fep_vkb_side_pane_g3

0x837a,	// (0x0003763b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8725,	// (0x000379e6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8732,	// (0x000379f3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0003ee50) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x916d,	// (0x0003842e) fep_hwr_prediction_pane_g1

0x3af1,	// (0x00032db2) fep_hwr_prediction_pane_g2

0x3af9,	// (0x00032dba) fep_hwr_prediction_pane_g3

0x3b01,	// (0x00032dc2) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x0003ef4c) fep_hwr_prediction_pane_g

0x916d,	// (0x0003842e) fep_vkb_prediction_pane_g1

0x9177,	// (0x00038438) fep_vkb_prediction_pane_g2

0x917f,	// (0x00038440) fep_vkb_prediction_pane_g3

0x9187,	// (0x00038448) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0003ef55) fep_vkb_prediction_pane_g

0x34a5,	// (0x00032766) slider_set_pane_g3

0x34b9,	// (0x0003277a) slider_set_pane_g4

0x34d1,	// (0x00032792) slider_set_pane_g5

0x34a5,	// (0x00032766) slider_set_pane_g6

0xc5a3,	// (0x0003b864) slider_set_pane_g7

0x7569,	// (0x0003682a) slider_form_pane_g3

0x7572,	// (0x00036833) slider_form_pane_g4

0x757a,	// (0x0003683b) slider_form_pane_g5

0x7569,	// (0x0003682a) slider_form_pane_g6

0xc6ff,	// (0x0003b9c0) slider_form_pane_g7

0x7978,	// (0x00036c39) slider_set_pane_vc_g3

0x7981,	// (0x00036c42) slider_set_pane_vc_g4

0x798a,	// (0x00036c4b) slider_set_pane_vc_g5

0x7978,	// (0x00036c39) slider_set_pane_vc_g6

0x7993,	// (0x00036c54) slider_set_pane_vc_g7

0x7978,	// (0x00036c39) slider_form_pane_vc_g1

0x7981,	// (0x00036c42) slider_form_pane_vc_g2

0x798a,	// (0x00036c4b) slider_form_pane_vc_g3

0x7978,	// (0x00036c39) slider_form_pane_vc_g4

0x7b07,	// (0x00036dc8) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0003ed23) slider_form_pane_vc_g

0x4f71,	// (0x00034232) main_idle_act3_pane

0x918f,	// (0x00038450) ai3_links_pane

0xcd80,	// (0x0003c041) popup_ai3_data_window_ParamLimits

0xcd80,	// (0x0003c041) popup_ai3_data_window

0x4f71,	// (0x00034232) grid_ai3_links_pane

0xcd98,	// (0x0003c059) cell_ai3_links_pane_ParamLimits

0xcd98,	// (0x0003c059) cell_ai3_links_pane

0x9198,	// (0x00038459) bg_popup_sub_pane_cp11

0x91a5,	// (0x00038466) cell_ai3_links_pane_g1

0x4f71,	// (0x00034232) bg_popup_sub_pane_cp12

0x91ca,	// (0x0003848b) heading_ai3_data_pane

0x91d2,	// (0x00038493) list_ai3_gene_pane

0x91de,	// (0x0003849f) popup_ai3_data_window_g1

0x91e6,	// (0x000384a7) heading_ai3_data_pane_g1

0x91ee,	// (0x000384af) heading_ai3_data_pane_t1

0x91fc,	// (0x000384bd) list_double_ai3_gene_pane_ParamLimits

0x91fc,	// (0x000384bd) list_double_ai3_gene_pane

0x9209,	// (0x000384ca) list_single_ai3_gene_pane_ParamLimits

0x9209,	// (0x000384ca) list_single_ai3_gene_pane

0x8113,	// (0x000373d4) list_highlight_pane_cp7_ParamLimits

0x8113,	// (0x000373d4) list_highlight_pane_cp7

0x9216,	// (0x000384d7) list_single_a13_gene_pane_t1_ParamLimits

0x9216,	// (0x000384d7) list_single_a13_gene_pane_t1

0x922d,	// (0x000384ee) list_single_ai3_gene_pane_g1

0x9236,	// (0x000384f7) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x0003ef5e) list_single_ai3_gene_pane_g

0x923e,	// (0x000384ff) list_double_ai3_gene_pane_g1_ParamLimits

0x923e,	// (0x000384ff) list_double_ai3_gene_pane_g1

0x924a,	// (0x0003850b) list_double_ai3_gene_pane_t1_ParamLimits

0x924a,	// (0x0003850b) list_double_ai3_gene_pane_t1

0x9266,	// (0x00038527) list_double_ai3_gene_pane_t2_ParamLimits

0x9266,	// (0x00038527) list_double_ai3_gene_pane_t2

0x927b,	// (0x0003853c) list_double_ai3_gene_pane_t3_ParamLimits

0x927b,	// (0x0003853c) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x0003ef63) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x0003ef63) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2298,	// (0x00031559) aid_size_min_col_2

0xcd29,	// (0x0003bfea) aid_size_min_msg_ParamLimits

0xcd29,	// (0x0003bfea) aid_size_min_msg

0xca71,	// (0x0003bd32) fep_vkb_top_text_pane_g2_ParamLimits

0xca71,	// (0x0003bd32) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0003edd6) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0003edd6) fep_vkb_top_text_pane_g

0x4f71,	// (0x00034232) main_hc_apps_shell_pane

0x9298,	// (0x00038559) grid_hc_apps_pane_ParamLimits

0x9298,	// (0x00038559) grid_hc_apps_pane

0x92aa,	// (0x0003856b) list_hc_apps_pane

0x92b2,	// (0x00038573) scroll_pane_cp37_ParamLimits

0x92b2,	// (0x00038573) scroll_pane_cp37

0xcdae,	// (0x0003c06f) cell_hc_apps_pane_ParamLimits

0xcdae,	// (0x0003c06f) cell_hc_apps_pane

0xce48,	// (0x0003c109) cell_hc_apps_pane_g1_ParamLimits

0xce48,	// (0x0003c109) cell_hc_apps_pane_g1

0x92be,	// (0x0003857f) cell_hc_apps_pane_g2_ParamLimits

0x92be,	// (0x0003857f) cell_hc_apps_pane_g2

0x92da,	// (0x0003859b) cell_hc_apps_pane_g3_ParamLimits

0x92da,	// (0x0003859b) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x0003ef6a) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x0003ef6a) cell_hc_apps_pane_g

0xce74,	// (0x0003c135) cell_hc_apps_pane_t1_ParamLimits

0xce74,	// (0x0003c135) cell_hc_apps_pane_t1

0x5194,	// (0x00034455) grid_highlight_pane_cp10_ParamLimits

0x5194,	// (0x00034455) grid_highlight_pane_cp10

0xceb2,	// (0x0003c173) list_single_hc_apps_pane_ParamLimits

0xceb2,	// (0x0003c173) list_single_hc_apps_pane

0xcede,	// (0x0003c19f) list_single_hc_apps_pane_g1

0xcef7,	// (0x0003c1b8) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x0003ef71) list_single_hc_apps_pane_g

0xcf10,	// (0x0003c1d1) list_single_hc_apps_pane_g2_copy1

0xb537,	// (0x0003a7f8) list_single_hc_apps_pane_t1

0x504b,	// (0x0003430c) bg_set_opt_pane_cp_ParamLimits

0x2656,	// (0x00031917) setting_slider_pane_t1_ParamLimits

0xb6bb,	// (0x0003a97c) setting_slider_pane_t2_ParamLimits

0xb6d4,	// (0x0003a995) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003e7fa) setting_slider_pane_t_ParamLimits

0x269c,	// (0x0003195d) slider_set_pane_ParamLimits

0x2c0a,	// (0x00031ecb) control_pane_g5_ParamLimits

0x2c0a,	// (0x00031ecb) control_pane_g5

0x7525,	// (0x000367e6) slider_set_pane_g1_ParamLimits

0x3499,	// (0x0003275a) slider_set_pane_g2_ParamLimits

0x34a5,	// (0x00032766) slider_set_pane_g3_ParamLimits

0x34b9,	// (0x0003277a) slider_set_pane_g4_ParamLimits

0x34d1,	// (0x00032792) slider_set_pane_g5_ParamLimits

0x34a5,	// (0x00032766) slider_set_pane_g6_ParamLimits

0xc5a3,	// (0x0003b864) slider_set_pane_g7_ParamLimits

0xf938,	// (0x0003ebf9) slider_set_pane_g_ParamLimits

0x504b,	// (0x0003430c) navi_icon_text_pane_ParamLimits

0xbe8d,	// (0x0003b14e) aid_fill_nsta_2_ParamLimits

0xbebb,	// (0x0003b17c) aid_touch_tab_arrow_left_ParamLimits

0xbecf,	// (0x0003b190) aid_touch_tab_arrow_right_ParamLimits

0xbf6b,	// (0x0003b22c) clock_nsta_pane_ParamLimits

0x70b5,	// (0x00036376) navi_icon_pane_g1_ParamLimits

0x70c1,	// (0x00036382) navi_text_pane_t1_ParamLimits

0x7dfc,	// (0x000370bd) navi_icon_text_pane_g1_ParamLimits

0x7e08,	// (0x000370c9) navi_icon_text_pane_t1_ParamLimits

0xcede,	// (0x0003c19f) list_single_hc_apps_pane_g1_ParamLimits

0xcef7,	// (0x0003c1b8) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x0003ef71) list_single_hc_apps_pane_g_ParamLimits

0xcf10,	// (0x0003c1d1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb537,	// (0x0003a7f8) list_single_hc_apps_pane_t1_ParamLimits

0xb601,	// (0x0003a8c2) popup_toolbar2_fixed_window_ParamLimits

0xb601,	// (0x0003a8c2) popup_toolbar2_fixed_window

0xbe18,	// (0x0003b0d9) popup_toolbar2_float_window

0x4f71,	// (0x00034232) bg_popup_sub_pane_cp27

0x92fc,	// (0x000385bd) grid_toolbar2_float_pane

0x4f71,	// (0x00034232) bg_popup_sub_pane_cp26

0x92fc,	// (0x000385bd) grid_toolbar2_fixed_pane

0xcf2c,	// (0x0003c1ed) cell_toolbar2_fixed_pane_ParamLimits

0xcf2c,	// (0x0003c1ed) cell_toolbar2_fixed_pane

0xcf47,	// (0x0003c208) cell_toolbar2_fixed_pane_g1

0x9304,	// (0x000385c5) toolbar2_fixed_button_pane

0x63c6,	// (0x00035687) toolbar2_fixed_button_pane_g1

0x63ce,	// (0x0003568f) toolbar2_fixed_button_pane_g2

0x63d6,	// (0x00035697) toolbar2_fixed_button_pane_g3

0x63de,	// (0x0003569f) toolbar2_fixed_button_pane_g4

0x63e6,	// (0x000356a7) toolbar2_fixed_button_pane_g5

0x63ee,	// (0x000356af) toolbar2_fixed_button_pane_g6

0x63f6,	// (0x000356b7) toolbar2_fixed_button_pane_g7

0x63fe,	// (0x000356bf) toolbar2_fixed_button_pane_g8

0x6406,	// (0x000356c7) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x0003eafb) toolbar2_fixed_button_pane_g

0x930c,	// (0x000385cd) cell_toolbar2_float_pane_ParamLimits

0x930c,	// (0x000385cd) cell_toolbar2_float_pane

0x931d,	// (0x000385de) cell_toolbar2_float_pane_g1

0x9304,	// (0x000385c5) toolbar2_fixed_button_pane_cp

0xca26,	// (0x0003bce7) fep_vkb_accented_list_pane_ParamLimits

0xca26,	// (0x0003bce7) fep_vkb_accented_list_pane

0x3930,	// (0x00032bf1) bg_popup_fep_shadow_pane_g9

0x5fe1,	// (0x000352a2) bg_popup_fep_shadow_pane_cp3

0x5778,	// (0x00034a39) list_accented_list_pane

0x9326,	// (0x000385e7) list_single_accented_list_pane_ParamLimits

0x9326,	// (0x000385e7) list_single_accented_list_pane

0x5fe1,	// (0x000352a2) list_highlight_pane_cp10

0x9337,	// (0x000385f8) list_single_accented_list_pane_t1

0xbd5a,	// (0x0003b01b) popup_slider_window_ParamLimits

0xbd5a,	// (0x0003b01b) popup_slider_window

0x9164,	// (0x00038425) aid_indentation_list_msg

0xd026,	// (0x0003c2e7) bg_popup_window_pane_cp19

0x939d,	// (0x0003865e) popup_slider_window_g1

0x93b9,	// (0x0003867a) popup_slider_window_g2

0x93d5,	// (0x00038696) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0003ef76) popup_slider_window_g

0x93f1,	// (0x000386b2) popup_slider_window_t1

0x9435,	// (0x000386f6) small_volume_slider_vertical_pane

0x814e,	// (0x0003740f) small_volume_slider_vertical_pane_g1

0x814e,	// (0x0003740f) small_volume_slider_vertical_pane_g2

0x9451,	// (0x00038712) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0003ef88) small_volume_slider_vertical_pane_g

0xb585,	// (0x0003a846) area_side_right_pane_ParamLimits

0xb585,	// (0x0003a846) area_side_right_pane

0xd0de,	// (0x0003c39f) aid_size_side_button_ParamLimits

0xd0de,	// (0x0003c39f) aid_size_side_button

0xd0f7,	// (0x0003c3b8) grid_sctrl_middle_pane_ParamLimits

0xd0f7,	// (0x0003c3b8) grid_sctrl_middle_pane

0x3b6e,	// (0x00032e2f) sctrl_sk_bottom_pane

0x3b7f,	// (0x00032e40) sctrl_sk_top_pane

0x3b91,	// (0x00032e52) aid_touch_sctrl_top

0x5194,	// (0x00034455) bg_sctrl_sk_pane_ParamLimits

0x5194,	// (0x00034455) bg_sctrl_sk_pane

0x3b9e,	// (0x00032e5f) sctrl_sk_top_pane_g1

0x3bab,	// (0x00032e6c) sctrl_sk_top_pane_t1

0x3b91,	// (0x00032e52) aid_touch_sctrl_bottom

0x5194,	// (0x00034455) bg_sctrl_sk_pane_cp_ParamLimits

0x5194,	// (0x00034455) bg_sctrl_sk_pane_cp

0x3bc6,	// (0x00032e87) sctrl_sk_bottom_pane_g1

0x3bab,	// (0x00032e6c) sctrl_sk_bottom_pane_t1

0xd10d,	// (0x0003c3ce) cell_sctrl_middle_pane_ParamLimits

0xd10d,	// (0x0003c3ce) cell_sctrl_middle_pane

0xd11e,	// (0x0003c3df) aid_touch_sctrl_middle_ParamLimits

0xd11e,	// (0x0003c3df) aid_touch_sctrl_middle

0xd12b,	// (0x0003c3ec) bg_sctrl_middle_pane_ParamLimits

0xd12b,	// (0x0003c3ec) bg_sctrl_middle_pane

0x946c,	// (0x0003872d) cell_sctrl_middle_pane_g1_ParamLimits

0x946c,	// (0x0003872d) cell_sctrl_middle_pane_g1

0xd139,	// (0x0003c3fa) cell_sctrl_middle_pane_g2_ParamLimits

0xd139,	// (0x0003c3fa) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x0003ef94) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x0003ef94) cell_sctrl_middle_pane_g

0x63c6,	// (0x00035687) bg_sctrl_middle_pane_g1

0x63ce,	// (0x0003568f) bg_sctrl_middle_pane_g2

0x63d6,	// (0x00035697) bg_sctrl_middle_pane_g3

0x63de,	// (0x0003569f) bg_sctrl_middle_pane_g4

0x63e6,	// (0x000356a7) bg_sctrl_middle_pane_g5

0x63ee,	// (0x000356af) bg_sctrl_middle_pane_g6

0x63f6,	// (0x000356b7) bg_sctrl_middle_pane_g7

0x63fe,	// (0x000356bf) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x0003ef99) bg_sctrl_middle_pane_g

0x6406,	// (0x000356c7) bg_sctrl_middle_pane_g8_copy1

0x63c6,	// (0x00035687) bg_sctrl_sk_pane_g1

0x63ce,	// (0x0003568f) bg_sctrl_sk_pane_g2

0x63d6,	// (0x00035697) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x0003eafb) bg_sctrl_sk_pane_g

0x5577,	// (0x00034838) aid_size_touch_scroll_bar

0x63de,	// (0x0003569f) bg_sctrl_sk_pane_g4

0x63e6,	// (0x000356a7) bg_sctrl_sk_pane_g5

0x63ee,	// (0x000356af) bg_sctrl_sk_pane_g6

0x63f6,	// (0x000356b7) bg_sctrl_sk_pane_g7

0x63fe,	// (0x000356bf) bg_sctrl_sk_pane_g8

0x6406,	// (0x000356c7) bg_sctrl_sk_pane_g9

0x2dbd,	// (0x0003207e) popup_fep_china_hwr2_fs_candidate_window

0xb955,	// (0x0003ac16) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb955,	// (0x0003ac16) popup_fep_china_hwr2_fs_control_window

0x837a,	// (0x0003763b) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x0003ef8f) sctrl_sk_top_pane_g

0xd146,	// (0x0003c407) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd146,	// (0x0003c407) aid_fep_china_hwr2_fs_cell

0xd15a,	// (0x0003c41b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd15a,	// (0x0003c41b) bg_popup_fep_shadow_pane_cp4

0xd171,	// (0x0003c432) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd171,	// (0x0003c432) bg_popup_fep_shadow_pane_cp5

0xd183,	// (0x0003c444) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd183,	// (0x0003c444) popup_fep_china_hwr2_fs_control_bar_grid

0xd197,	// (0x0003c458) popup_fep_china_hwr2_fs_control_funtion_grid

0x945a,	// (0x0003871b) aid_fep_china_hwr2_fs_candi_cell

0x4f71,	// (0x00034232) bg_popup_fep_shadow_pane_cp6

0x9464,	// (0x00038725) popup_fep_china_hwr2_fs_candidate_grid

0xd19f,	// (0x0003c460) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd19f,	// (0x0003c460) cell_fep_china_hwr2_fs_funtion_grid

0x814e,	// (0x0003740f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x946c,	// (0x0003872d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x946c,	// (0x0003872d) cell_fep_china_hwr2_fs_funtion_grid_g1

0x947a,	// (0x0003873b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x947a,	// (0x0003873b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x0003efaa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x0003efaa) cell_fep_china_hwr2_fs_funtion_grid_g

0xd1b7,	// (0x0003c478) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd1b7,	// (0x0003c478) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd1cc,	// (0x0003c48d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd1cc,	// (0x0003c48d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x0003efaf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x0003efaf) cell_fep_china_hwr2_fs_funtion_grid_t

0x9490,	// (0x00038751) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9498,	// (0x00038759) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x94a0,	// (0x00038761) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x0003efb4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x94a8,	// (0x00038769) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x94a8,	// (0x00038769) cell_fep_china_hwr2_fs_candidate_grid

0x94c1,	// (0x00038782) popup_fep_china_hwr2_fs_candidate_grid_g20

0x94c9,	// (0x0003878a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x814e,	// (0x0003740f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x814e,	// (0x0003740f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0003eddb) cell_fep_china_hwr2_fs_candidate_grid_g

0x94d1,	// (0x00038792) cell_fep_china_hwr2_fs_candidate_grid_t1

0x622b,	// (0x000354ec) clock_nsta_pane_cp_24_ParamLimits

0x622b,	// (0x000354ec) clock_nsta_pane_cp_24

0x6288,	// (0x00035549) indicator_nsta_pane_cp_24_ParamLimits

0x6288,	// (0x00035549) indicator_nsta_pane_cp_24

0x6fc0,	// (0x00036281) heading_pane_g1

0x0001,

0xf89f,	// (0x0003eb60) heading_pane_g

0xc7df,	// (0x0003baa0) grid_sct_catagory_button_pane

0x6bbe,	// (0x00035e7f) scroll_pane_cp5_ParamLimits

0x7e2e,	// (0x000370ef) button_value_adjust_pane_cp5_ParamLimits

0x7e2e,	// (0x000370ef) button_value_adjust_pane_cp5

0x7eec,	// (0x000371ad) form2_midp_time_pane_ParamLimits

0x94df,	// (0x000387a0) cell_sct_catagory_button_pane_ParamLimits

0x94df,	// (0x000387a0) cell_sct_catagory_button_pane

0x8113,	// (0x000373d4) bg_button_pane_cp01_ParamLimits

0x8113,	// (0x000373d4) bg_button_pane_cp01

0x814e,	// (0x0003740f) cell_sct_catagory_button_pane_g1

0xbdc9,	// (0x0003b08a) popup_tb_extension_window

0xd1e8,	// (0x0003c4a9) aid_size_cell_ext_ParamLimits

0xd1e8,	// (0x0003c4a9) aid_size_cell_ext

0x5455,	// (0x00034716) bg_tb_trans_pane_cp1_ParamLimits

0x5455,	// (0x00034716) bg_tb_trans_pane_cp1

0xd20e,	// (0x0003c4cf) grid_tb_ext_pane_ParamLimits

0xd20e,	// (0x0003c4cf) grid_tb_ext_pane

0xd244,	// (0x0003c505) cell_tb_ext_pane_ParamLimits

0xd244,	// (0x0003c505) cell_tb_ext_pane

0xd268,	// (0x0003c529) cell_tb_ext_pane_g1_ParamLimits

0xd268,	// (0x0003c529) cell_tb_ext_pane_g1

0x94f1,	// (0x000387b2) cell_tb_ext_pane_t1

0x5194,	// (0x00034455) list_highlight_pane_cp11_ParamLimits

0x5194,	// (0x00034455) list_highlight_pane_cp11

0xb616,	// (0x0003a8d7) popup_uni_indicator_window_ParamLimits

0xb616,	// (0x0003a8d7) popup_uni_indicator_window

0x563b,	// (0x000348fc) bg_popup_sub_pane_cp14

0x950c,	// (0x000387cd) list_uniindi_pane

0x9518,	// (0x000387d9) uniindi_top_pane

0x5194,	// (0x00034455) bg_uniindi_top_pane

0x9537,	// (0x000387f8) uniindi_top_pane_g1

0x954d,	// (0x0003880e) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x0003efbb) uniindi_top_pane_g

0x9577,	// (0x00038838) uniindi_top_pane_t1

0x95a1,	// (0x00038862) list_single_uniindi_pane_ParamLimits

0x95a1,	// (0x00038862) list_single_uniindi_pane

0x814e,	// (0x0003740f) bg_uniindi_top_pane_g1

0x95b3,	// (0x00038874) list_single_uniindi_pane_g1

0x95c6,	// (0x00038887) list_single_uniindi_pane_t1

0x4f71,	// (0x00034232) control_bg_pane

0x95eb,	// (0x000388ac) bg_sctrl_sk_pane_cp1

0x95f4,	// (0x000388b5) bg_sctrl_sk_pane_cp2

0x95fd,	// (0x000388be) control_bg_pane_g1

0x9606,	// (0x000388c7) control_bg_pane_g2

0x0001,

0xfd03,	// (0x0003efc4) control_bg_pane_g

0x7d54,	// (0x00037015) cell_indicator_nsta_pane_g1_ParamLimits

0xc8f0,	// (0x0003bbb1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0003ed3f) cell_indicator_nsta_pane_g_ParamLimits

0x210f,	// (0x000313d0) form2_midp_time_pane_t1_ParamLimits

0x3718,	// (0x000329d9) main_idle_act4_pane_ParamLimits

0x3718,	// (0x000329d9) main_idle_act4_pane

0xbdc9,	// (0x0003b08a) popup_tb_extension_window_ParamLimits

0xd22e,	// (0x0003c4ef) tb_ext_find_pane_ParamLimits

0xd22e,	// (0x0003c4ef) tb_ext_find_pane

0x960f,	// (0x000388d0) ai_gene_pane_1_cp1

0x6075,	// (0x00035336) ai_gene_pane_2_cp1

0x9617,	// (0x000388d8) list_single_idle_plugin_calendar_pane

0x9620,	// (0x000388e1) list_single_idle_plugin_notification_pane

0x9629,	// (0x000388ea) list_single_idle_plugin_player_pane

0xd285,	// (0x0003c546) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd285,	// (0x0003c546) list_single_idle_plugin_shortcut_pane

0xd2ad,	// (0x0003c56e) main_idle_act4_pane_t1

0xd2c3,	// (0x0003c584) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x0003efc9) main_idle_act4_pane_t

0xd2d9,	// (0x0003c59a) middle_sk_idle_act4_pane_ParamLimits

0xd2d9,	// (0x0003c59a) middle_sk_idle_act4_pane

0xd2f5,	// (0x0003c5b6) popup_clock_digital_analogue_window_cp2

0xd31b,	// (0x0003c5dc) shortcut_wheel_idle_act4_pane_ParamLimits

0xd31b,	// (0x0003c5dc) shortcut_wheel_idle_act4_pane

0x814e,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g1

0x814e,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g2

0x814e,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g3

0x814e,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g4

0x814e,	// (0x0003740f) shortcut_wheel_idle_act4_pane_g5

0x9632,	// (0x000388f3) shortcut_wheel_idle_act4_pane_g6

0x963a,	// (0x000388fb) shortcut_wheel_idle_act4_pane_g7

0x9642,	// (0x00038903) shortcut_wheel_idle_act4_pane_g8

0x964a,	// (0x0003890b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x0003efce) shortcut_wheel_idle_act4_pane_g

0xf51b,	// (0x0003e7dc) middle_sk_idle_act4_pane_g1_ParamLimits

0xf51b,	// (0x0003e7dc) middle_sk_idle_act4_pane_g1

0xd396,	// (0x0003c657) middle_sk_idle_act4_pane_g2_ParamLimits

0xd396,	// (0x0003c657) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x0003eff1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x0003eff1) middle_sk_idle_act4_pane_g

0xd3ae,	// (0x0003c66f) middle_sk_idle_act4_pane_t1_ParamLimits

0xd3ae,	// (0x0003c66f) middle_sk_idle_act4_pane_t1

0xd3dd,	// (0x0003c69e) grid_ai_shortcut_pane_ParamLimits

0xd3dd,	// (0x0003c69e) grid_ai_shortcut_pane

0xd3fa,	// (0x0003c6bb) list_highlight_pane_cp16_ParamLimits

0xd3fa,	// (0x0003c6bb) list_highlight_pane_cp16

0xd407,	// (0x0003c6c8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd407,	// (0x0003c6c8) list_single_idle_plugin_shortcut_pane_g1

0xd413,	// (0x0003c6d4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd413,	// (0x0003c6d4) list_single_idle_plugin_shortcut_pane_g2

0xd42f,	// (0x0003c6f0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd42f,	// (0x0003c6f0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x0003eff6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x0003eff6) list_single_idle_plugin_shortcut_pane_g

0xd444,	// (0x0003c705) cell_ai_shortcut_pane_ParamLimits

0xd444,	// (0x0003c705) cell_ai_shortcut_pane

0xd45a,	// (0x0003c71b) cell_ai_shortcut_pane_g1_ParamLimits

0xd45a,	// (0x0003c71b) cell_ai_shortcut_pane_g1

0x960f,	// (0x000388d0) ai_gene_pane_1_cp2

0x9652,	// (0x00038913) ai_gene_pane_2_cp2

0x965a,	// (0x0003891b) list_highlight_pane_cp15

0x9663,	// (0x00038924) list_single_idle_plugin_calendar_pane_g1

0x965a,	// (0x0003891b) list_highlight_pane_cp17

0x966b,	// (0x0003892c) list_single_idle_plugin_calendar_pane_g1_copy1

0x9673,	// (0x00038934) list_single_idle_plugin_player_pane_g1

0x77b3,	// (0x00036a74) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x0003effd) list_single_idle_plugin_player_pane_g

0x967b,	// (0x0003893c) list_single_idle_plugin_player_pane_t1

0x9689,	// (0x0003894a) list_single_idle_plugin_player_pane_t2

0x9697,	// (0x00038958) list_single_idle_plugin_player_pane_t3

0x96a5,	// (0x00038966) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x0003f002) list_single_idle_plugin_player_pane_t

0x96b3,	// (0x00038974) wait_bar_pane_cp15

0x96bb,	// (0x0003897c) grid_ai_notification_pane

0x77b3,	// (0x00036a74) list_single_idle_plugin_notification_pane_g1

0xd47c,	// (0x0003c73d) cell_ai_notification_pane_ParamLimits

0xd47c,	// (0x0003c73d) cell_ai_notification_pane

0x96c4,	// (0x00038985) cell_ai_notification_pane_g1

0x96cc,	// (0x0003898d) cell_ai_notification_pane_t1

0xd489,	// (0x0003c74a) tb_ext_find_button_pane

0xd491,	// (0x0003c752) tb_ext_find_pane_g1

0xd499,	// (0x0003c75a) tb_ext_find_pane_t1

0x5b48,	// (0x00034e09) tb_ext_find_button_pane_g1

0x96da,	// (0x0003899b) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x0003f00b) tb_ext_find_button_pane_g

0xd2ad,	// (0x0003c56e) main_idle_act4_pane_t1_ParamLimits

0xd2c3,	// (0x0003c584) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x0003efc9) main_idle_act4_pane_t_ParamLimits

0xd2f5,	// (0x0003c5b6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd30b,	// (0x0003c5cc) sat_plugin_idle_act4_pane_ParamLimits

0xd30b,	// (0x0003c5cc) sat_plugin_idle_act4_pane

0xd4a7,	// (0x0003c768) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd4a7,	// (0x0003c768) sat_plugin_idle_act4_pane_t1

0xd4bf,	// (0x0003c780) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4bf,	// (0x0003c780) sat_plugin_idle_act4_pane_t2

0xd4d7,	// (0x0003c798) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4d7,	// (0x0003c798) sat_plugin_idle_act4_pane_t3

0xd4ef,	// (0x0003c7b0) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4ef,	// (0x0003c7b0) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x0003f010) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x0003f010) sat_plugin_idle_act4_pane_t

0x2508,	// (0x000317c9) popup_battery_window_ParamLimits

0x2508,	// (0x000317c9) popup_battery_window

0x5194,	// (0x00034455) bg_popup_sub_pane_cp25_ParamLimits

0x5194,	// (0x00034455) bg_popup_sub_pane_cp25

0x96e3,	// (0x000389a4) popup_battery_window_g1_ParamLimits

0x96e3,	// (0x000389a4) popup_battery_window_g1

0x96ef,	// (0x000389b0) popup_battery_window_t1_ParamLimits

0x96ef,	// (0x000389b0) popup_battery_window_t1

0x9701,	// (0x000389c2) popup_battery_window_t2_ParamLimits

0x9701,	// (0x000389c2) popup_battery_window_t2

0x0001,

0xfd58,	// (0x0003f019) popup_battery_window_t_ParamLimits

0xfd58,	// (0x0003f019) popup_battery_window_t

0x0a7e,	// (0x0002fd3f) midp_canvas_pane_ParamLimits

0x0ad3,	// (0x0002fd94) midp_keypad_pane_ParamLimits

0x0ad3,	// (0x0002fd94) midp_keypad_pane

0x61fd,	// (0x000354be) main_midp_pane_ParamLimits

0x7dca,	// (0x0003708b) signal_pane_g2_cp_ParamLimits

0xd507,	// (0x0003c7c8) aid_size_cell_midp_keypad_ParamLimits

0xd507,	// (0x0003c7c8) aid_size_cell_midp_keypad

0xd525,	// (0x0003c7e6) midp_keyp_game_grid_pane_ParamLimits

0xd525,	// (0x0003c7e6) midp_keyp_game_grid_pane

0xd544,	// (0x0003c805) midp_keyp_rocker_pane_ParamLimits

0xd544,	// (0x0003c805) midp_keyp_rocker_pane

0xd585,	// (0x0003c846) midp_keyp_sk_left_pane_ParamLimits

0xd585,	// (0x0003c846) midp_keyp_sk_left_pane

0xd5d7,	// (0x0003c898) midp_keyp_sk_right_pane_ParamLimits

0xd5d7,	// (0x0003c898) midp_keyp_sk_right_pane

0x4f71,	// (0x00034232) bg_button_pane_cp03

0xd623,	// (0x0003c8e4) midp_keyp_sk_left_pane_g1

0x4f71,	// (0x00034232) bg_button_pane_cp04

0xd623,	// (0x0003c8e4) midp_keyp_sk_right_pane_g1

0x814e,	// (0x0003740f) midp_keyp_rocker_pane_g1

0xd62c,	// (0x0003c8ed) keyp_game_cell_pane_ParamLimits

0xd62c,	// (0x0003c8ed) keyp_game_cell_pane

0x4f71,	// (0x00034232) bg_button_pane_cp02

0xd64e,	// (0x0003c90f) keyp_game_cell_pane_g1

0xb5c7,	// (0x0003a888) popup_fep_vkb2_window_ParamLimits

0xb5c7,	// (0x0003a888) popup_fep_vkb2_window

0xd657,	// (0x0003c918) aid_size_cell_vkb2_ParamLimits

0xd657,	// (0x0003c918) aid_size_cell_vkb2

0xd683,	// (0x0003c944) popup_fep_vkb2_window_g1_ParamLimits

0xd683,	// (0x0003c944) popup_fep_vkb2_window_g1

0xd6d3,	// (0x0003c994) vkb2_area_bottom_pane_ParamLimits

0xd6d3,	// (0x0003c994) vkb2_area_bottom_pane

0xd711,	// (0x0003c9d2) vkb2_area_keypad_pane_ParamLimits

0xd711,	// (0x0003c9d2) vkb2_area_keypad_pane

0xd74f,	// (0x0003ca10) vkb2_area_top_pane_ParamLimits

0xd74f,	// (0x0003ca10) vkb2_area_top_pane

0xd7d1,	// (0x0003ca92) vkb2_top_entry_pane_ParamLimits

0xd7d1,	// (0x0003ca92) vkb2_top_entry_pane

0xd7fe,	// (0x0003cabf) vkb2_top_grid_left_pane_ParamLimits

0xd7fe,	// (0x0003cabf) vkb2_top_grid_left_pane

0xd81f,	// (0x0003cae0) vkb2_top_grid_right_pane_ParamLimits

0xd81f,	// (0x0003cae0) vkb2_top_grid_right_pane

0x3e00,	// (0x000330c1) vkb2_cell_keypad_pane_ParamLimits

0x3e00,	// (0x000330c1) vkb2_cell_keypad_pane

0xd867,	// (0x0003cb28) vkb2_area_bottom_grid_pane_ParamLimits

0xd867,	// (0x0003cb28) vkb2_area_bottom_grid_pane

0xd88d,	// (0x0003cb4e) vkb2_area_bottom_pane_g1_ParamLimits

0xd88d,	// (0x0003cb4e) vkb2_area_bottom_pane_g1

0xd8b3,	// (0x0003cb74) vkb2_area_bottom_pane_g2_ParamLimits

0xd8b3,	// (0x0003cb74) vkb2_area_bottom_pane_g2

0xd8e4,	// (0x0003cba5) vkb2_area_bottom_pane_g3_ParamLimits

0xd8e4,	// (0x0003cba5) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x0003f01e) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x0003f01e) vkb2_area_bottom_pane_g

0x3f78,	// (0x00033239) vkb2_top_cell_left_pane_ParamLimits

0x3f78,	// (0x00033239) vkb2_top_cell_left_pane

0xd93a,	// (0x0003cbfb) vkb2_top_entry_pane_g1_ParamLimits

0xd93a,	// (0x0003cbfb) vkb2_top_entry_pane_g1

0xd948,	// (0x0003cc09) vkb2_top_entry_pane_t1_ParamLimits

0xd948,	// (0x0003cc09) vkb2_top_entry_pane_t1

0x9726,	// (0x000389e7) vkb2_top_entry_pane_t2_ParamLimits

0x9726,	// (0x000389e7) vkb2_top_entry_pane_t2

0x9758,	// (0x00038a19) vkb2_top_entry_pane_t3_ParamLimits

0x9758,	// (0x00038a19) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0003f025) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0003f025) vkb2_top_entry_pane_t

0xd981,	// (0x0003cc42) vkb2_top_grid_right_pane_g1_ParamLimits

0xd981,	// (0x0003cc42) vkb2_top_grid_right_pane_g1

0x3fdb,	// (0x0003329c) vkb2_top_grid_right_pane_g2_ParamLimits

0x3fdb,	// (0x0003329c) vkb2_top_grid_right_pane_g2

0x3ff3,	// (0x000332b4) vkb2_top_grid_right_pane_g3_ParamLimits

0x3ff3,	// (0x000332b4) vkb2_top_grid_right_pane_g3

0xd997,	// (0x0003cc58) vkb2_top_grid_right_pane_g4_ParamLimits

0xd997,	// (0x0003cc58) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x0003f02c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x0003f02c) vkb2_top_grid_right_pane_g

0x4021,	// (0x000332e2) vkb2_top_cell_left_pane_g1

0x4038,	// (0x000332f9) vkb2_cell_keypad_pane_g1_ParamLimits

0x4038,	// (0x000332f9) vkb2_cell_keypad_pane_g1

0x976e,	// (0x00038a2f) vkb2_cell_keypad_pane_t1_ParamLimits

0x976e,	// (0x00038a2f) vkb2_cell_keypad_pane_t1

0x4046,	// (0x00033307) vkb2_cell_bottom_grid_pane_ParamLimits

0x4046,	// (0x00033307) vkb2_cell_bottom_grid_pane

0x407f,	// (0x00033340) vkb2_cell_bottom_grid_pane_g1

0xd33a,	// (0x0003c5fb) aid_call2_pane_cp02

0xd342,	// (0x0003c603) aid_call_pane_cp02

0xd34a,	// (0x0003c60b) clock_digital_number_pane_cp10

0xd352,	// (0x0003c613) clock_digital_number_pane_cp11

0xd35a,	// (0x0003c61b) clock_digital_number_pane_cp12

0xd362,	// (0x0003c623) clock_digital_number_pane_cp13

0xd36a,	// (0x0003c62b) clock_digital_separator_pane_cp10

0x5b48,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g1

0x5b48,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g2

0xd372,	// (0x0003c633) popup_clock_digital_analogue_window_cp2_g3

0x5b48,	// (0x00034e09) popup_clock_digital_analogue_window_cp2_g4

0xd372,	// (0x0003c633) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x0003efe1) popup_clock_digital_analogue_window_cp2_g

0xd37a,	// (0x0003c63b) popup_clock_digital_analogue_window_cp2_t1

0xd388,	// (0x0003c649) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x0003efec) popup_clock_digital_analogue_window_cp2_t

0x814e,	// (0x0003740f) clock_digital_number_pane_cp10_g1

0x814e,	// (0x0003740f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003eddb) clock_digital_number_pane_cp10_g

0x814e,	// (0x0003740f) clock_digital_separator_pane_cp10_g1

0x814e,	// (0x0003740f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0003eddb) clock_digital_separator_pane_cp10_g

0x9559,	// (0x0003881a) uniindi_top_pane_g3

0x956a,	// (0x0003882b) uniindi_top_pane_g4

0x3e6b,	// (0x0003312c) vkb2_row_keypad_pane_ParamLimits

0x3e6b,	// (0x0003312c) vkb2_row_keypad_pane

0x409b,	// (0x0003335c) vkb2_cell_t_keypad_pane_ParamLimits

0x409b,	// (0x0003335c) vkb2_cell_t_keypad_pane

0x40a8,	// (0x00033369) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x40a8,	// (0x00033369) vkb2_cell_t_keypad_pane_cp08

0x40b8,	// (0x00033379) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x40b8,	// (0x00033379) vkb2_cell_t_keypad_pane_cp09

0x40c9,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x40c9,	// (0x0003338a) vkb2_cell_t_keypad_pane_cp01

0x40d9,	// (0x0003339a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x40d9,	// (0x0003339a) vkb2_cell_t_keypad_pane_cp02

0x40e9,	// (0x000333aa) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x40e9,	// (0x000333aa) vkb2_cell_t_keypad_pane_cp03

0x40f9,	// (0x000333ba) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x40f9,	// (0x000333ba) vkb2_cell_t_keypad_pane_cp04

0x4109,	// (0x000333ca) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x4109,	// (0x000333ca) vkb2_cell_t_keypad_pane_cp05

0x4119,	// (0x000333da) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x4119,	// (0x000333da) vkb2_cell_t_keypad_pane_cp06

0x4129,	// (0x000333ea) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x4129,	// (0x000333ea) vkb2_cell_t_keypad_pane_cp07

0x4139,	// (0x000333fa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x4139,	// (0x000333fa) vkb2_cell_t_keypad_pane_cp10

0x837a,	// (0x0003763b) vkb2_cell_t_keypad_pane_g1

0xe503,	// (0x0003d7c4) vkb2_cell_t_keypad_pane_t1

0x4f71,	// (0x00034232) popup_grid_graphic2_window

0xd9ad,	// (0x0003cc6e) aid_size_cell_graphic2_ParamLimits

0xd9ad,	// (0x0003cc6e) aid_size_cell_graphic2

0xd9eb,	// (0x0003ccac) bg_popup_window_pane_cp21_ParamLimits

0xd9eb,	// (0x0003ccac) bg_popup_window_pane_cp21

0xd9f9,	// (0x0003ccba) graphic2_pages_pane_ParamLimits

0xd9f9,	// (0x0003ccba) graphic2_pages_pane

0xda42,	// (0x0003cd03) grid_graphic2_control_pane_ParamLimits

0xda42,	// (0x0003cd03) grid_graphic2_control_pane

0xda80,	// (0x0003cd41) grid_graphic2_pane_ParamLimits

0xda80,	// (0x0003cd41) grid_graphic2_pane

0xdaef,	// (0x0003cdb0) cell_graphic2_pane

0x4f71,	// (0x00034232) main_comp_mode_pane

0x91d2,	// (0x00038493) list_ai3_gene_pane_ParamLimits

0xd026,	// (0x0003c2e7) bg_popup_window_pane_cp19_ParamLimits

0x9345,	// (0x00038606) bg_touch_area_indi_pane_ParamLimits

0x9345,	// (0x00038606) bg_touch_area_indi_pane

0x935b,	// (0x0003861c) bg_touch_area_indi_pane_cp01_ParamLimits

0x935b,	// (0x0003861c) bg_touch_area_indi_pane_cp01

0x9371,	// (0x00038632) bg_touch_area_indi_pane_cp02_ParamLimits

0x9371,	// (0x00038632) bg_touch_area_indi_pane_cp02

0x9387,	// (0x00038648) bg_touch_area_indi_pane_cp03_ParamLimits

0x9387,	// (0x00038648) bg_touch_area_indi_pane_cp03

0x939d,	// (0x0003865e) popup_slider_window_g1_ParamLimits

0x93b9,	// (0x0003867a) popup_slider_window_g2_ParamLimits

0x93d5,	// (0x00038696) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0003ef76) popup_slider_window_g_ParamLimits

0x93f1,	// (0x000386b2) popup_slider_window_t1_ParamLimits

0x9435,	// (0x000386f6) small_volume_slider_vertical_pane_ParamLimits

0xdaef,	// (0x0003cdb0) cell_graphic2_pane_ParamLimits

0xdb3a,	// (0x0003cdfb) bg_button_pane_cp10_ParamLimits

0xdb3a,	// (0x0003cdfb) bg_button_pane_cp10

0xdb4b,	// (0x0003ce0c) bg_button_pane_cp11_ParamLimits

0xdb4b,	// (0x0003ce0c) bg_button_pane_cp11

0xdb5c,	// (0x0003ce1d) graphic2_pages_pane_g1_ParamLimits

0xdb5c,	// (0x0003ce1d) graphic2_pages_pane_g1

0xdb77,	// (0x0003ce38) graphic2_pages_pane_g2_ParamLimits

0xdb77,	// (0x0003ce38) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x0003f03a) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x0003f03a) graphic2_pages_pane_g

0xdb8f,	// (0x0003ce50) graphic2_pages_pane_t1_ParamLimits

0xdb8f,	// (0x0003ce50) graphic2_pages_pane_t1

0xdba7,	// (0x0003ce68) cell_graphic2_control_pane_ParamLimits

0xdba7,	// (0x0003ce68) cell_graphic2_control_pane

0xdbd1,	// (0x0003ce92) cell_graphic2_pane_g1_ParamLimits

0xdbd1,	// (0x0003ce92) cell_graphic2_pane_g1

0x01f0,	// (0x0002f4b1) cell_graphic2_pane_g2_ParamLimits

0x01f0,	// (0x0002f4b1) cell_graphic2_pane_g2

0xdbde,	// (0x0003ce9f) cell_graphic2_pane_g3_ParamLimits

0xdbde,	// (0x0003ce9f) cell_graphic2_pane_g3

0x01fd,	// (0x0002f4be) cell_graphic2_pane_g4_ParamLimits

0x01fd,	// (0x0002f4be) cell_graphic2_pane_g4

0xdbeb,	// (0x0003ceac) cell_graphic2_pane_g5_ParamLimits

0xdbeb,	// (0x0003ceac) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x0003f03f) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x0003f03f) cell_graphic2_pane_g

0xdc08,	// (0x0003cec9) cell_graphic2_pane_t1_ParamLimits

0xdc08,	// (0x0003cec9) cell_graphic2_pane_t1

0x6fb4,	// (0x00036275) grid_highlight_pane_cp11_ParamLimits

0x6fb4,	// (0x00036275) grid_highlight_pane_cp11

0x5194,	// (0x00034455) bg_button_pane_cp05

0xdc3d,	// (0x0003cefe) cell_graphic2_control_pane_g1

0x814e,	// (0x0003740f) bg_touch_area_indi_pane_g1

0xe515,	// (0x0003d7d6) aid_cmod_rocker_key_size

0xe51f,	// (0x0003d7e0) aid_cmode_itu_key_size

0xe529,	// (0x0003d7ea) main_cmode_video_pane

0xe531,	// (0x0003d7f2) main_comp_mode_itu_pane

0xe53b,	// (0x0003d7fc) main_comp_mode_rocker_pane

0xe543,	// (0x0003d804) cell_cmode_rocker_pane_ParamLimits

0xe543,	// (0x0003d804) cell_cmode_rocker_pane

0xe555,	// (0x0003d816) cell_cmode_itu_pane_ParamLimits

0xe555,	// (0x0003d816) cell_cmode_itu_pane

0x563b,	// (0x000348fc) bg_button_pane_cp06_ParamLimits

0x563b,	// (0x000348fc) bg_button_pane_cp06

0x837a,	// (0x0003763b) cell_cmode_rocker_pane_g1_ParamLimits

0x837a,	// (0x0003763b) cell_cmode_rocker_pane_g1

0x946c,	// (0x0003872d) cell_cmode_rocker_pane_g2_ParamLimits

0x946c,	// (0x0003872d) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x0003f04f) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x0003f04f) cell_cmode_rocker_pane_g

0x4f71,	// (0x00034232) bg_button_pane_cp07

0xe56a,	// (0x0003d82b) cell_cmode_itu_pane_g1

0xe573,	// (0x0003d834) cell_cmode_itu_pane_t1

0xe581,	// (0x0003d842) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0003f054) cell_cmode_itu_pane_t

0x95db,	// (0x0003889c) aid_touch_ctrl_left

0x95e3,	// (0x000388a4) aid_touch_ctrl_right

0x4f71,	// (0x00034232) compa_mode_pane

0xdc65,	// (0x0003cf26) aid_cmod_rocker_key_size_cp

0xdc6f,	// (0x0003cf30) aid_cmode_itu_key_size_cp

0xe58f,	// (0x0003d850) compa_mode_pane_g1

0xe597,	// (0x0003d858) compa_mode_pane_g2

0xe59f,	// (0x0003d860) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0003f059) compa_mode_pane_g

0xdc79,	// (0x0003cf3a) main_comp_mode_itu_pane_cp

0xdc83,	// (0x0003cf44) main_comp_mode_rocker_pane_cp

0xdc8d,	// (0x0003cf4e) cell_cmode_itu_pane_cp_ParamLimits

0xdc8d,	// (0x0003cf4e) cell_cmode_itu_pane_cp

0xdca2,	// (0x0003cf63) cell_cmode_rocker_pane_cp_ParamLimits

0xdca2,	// (0x0003cf63) cell_cmode_rocker_pane_cp

0x563b,	// (0x000348fc) bg_button_pane_cp06_cp_ParamLimits

0x563b,	// (0x000348fc) bg_button_pane_cp06_cp

0x837a,	// (0x0003763b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x837a,	// (0x0003763b) cell_cmode_rocker_pane_g1_cp

0x814e,	// (0x0003740f) cell_cmode_rocker_pane_g2_cp

0x4f71,	// (0x00034232) bg_button_pane_cp07_cp

0xdcb4,	// (0x0003cf75) cell_cmode_itu_pane_g1_cp

0xdcbd,	// (0x0003cf7e) cell_cmode_itu_pane_t1_cp

0xdccb,	// (0x0003cf8c) cell_cmode_itu_pane_t2_cp

0xc6f7,	// (0x0003b9b8) settings_code_pane_cp2

0x504b,	// (0x0003430c) bg_popup_window_pane_cp3_ParamLimits

0x5392,	// (0x00034653) heading_pane_cp3_ParamLimits

0x53a1,	// (0x00034662) listscroll_popup_graphic_pane_ParamLimits

0x3726,	// (0x000329e7) fep_hwr_aid_pane_ParamLimits

0x3b91,	// (0x00032e52) aid_touch_sctrl_top_ParamLimits

0x3b9e,	// (0x00032e5f) sctrl_sk_top_pane_g1_ParamLimits

0x837a,	// (0x0003763b) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x0003ef8f) sctrl_sk_top_pane_g_ParamLimits

0x3bab,	// (0x00032e6c) sctrl_sk_top_pane_t1_ParamLimits

0x3b91,	// (0x00032e52) aid_touch_sctrl_bottom_ParamLimits

0x3bab,	// (0x00032e6c) sctrl_sk_bottom_pane_t1_ParamLimits

0x9525,	// (0x000387e6) aid_area_touch_clock

0xd791,	// (0x0003ca52) aid_vkb2_area_top_pane_cell_ParamLimits

0xd791,	// (0x0003ca52) aid_vkb2_area_top_pane_cell

0xd840,	// (0x0003cb01) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd840,	// (0x0003cb01) aid_vkb2_area_bottom_pane_cell

0x971e,	// (0x000389df) popup_char_count_window

0xe5a7,	// (0x0003d868) popup_char_count_window_g1

0xe5b0,	// (0x0003d871) popup_char_count_window_g2

0xe5b9,	// (0x0003d87a) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x0003f060) popup_char_count_window_g

0xe5c2,	// (0x0003d883) popup_char_count_window_t1

0x3c49,	// (0x00032f0a) popup_fep_char_preview_window_ParamLimits

0x3c49,	// (0x00032f0a) popup_fep_char_preview_window

0xd7b1,	// (0x0003ca72) vkb2_top_candi_pane_ParamLimits

0xd7b1,	// (0x0003ca72) vkb2_top_candi_pane

0xdcd9,	// (0x0003cf9a) cell_vkb2_top_candi_pane_ParamLimits

0xdcd9,	// (0x0003cf9a) cell_vkb2_top_candi_pane

0x698e,	// (0x00035c4f) bg_popup_fep_char_preview_window_ParamLimits

0x698e,	// (0x00035c4f) bg_popup_fep_char_preview_window

0x4463,	// (0x00033724) popup_fep_char_preview_window_t1_ParamLimits

0x4463,	// (0x00033724) popup_fep_char_preview_window_t1

0xe5d0,	// (0x0003d891) bg_popup_fep_char_preview_window_g1

0xe5d8,	// (0x0003d899) bg_popup_fep_char_preview_window_g2

0xe5e0,	// (0x0003d8a1) bg_popup_fep_char_preview_window_g3

0xe5e8,	// (0x0003d8a9) bg_popup_fep_char_preview_window_g4

0xe5f0,	// (0x0003d8b1) bg_popup_fep_char_preview_window_g5

0xe5f8,	// (0x0003d8b9) bg_popup_fep_char_preview_window_g6

0xe600,	// (0x0003d8c1) bg_popup_fep_char_preview_window_g7

0xe608,	// (0x0003d8c9) bg_popup_fep_char_preview_window_g8

0xe610,	// (0x0003d8d1) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0003f067) bg_popup_fep_char_preview_window_g

0x837a,	// (0x0003763b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x837a,	// (0x0003763b) cell_vkb2_top_candi_pane_g1

0x85a9,	// (0x0003786a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x85a9,	// (0x0003786a) cell_vkb2_top_candi_pane_g2

0x85ca,	// (0x0003788b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x85ca,	// (0x0003788b) cell_vkb2_top_candi_pane_g3

0x44a5,	// (0x00033766) cell_vkb2_top_candi_pane_g4_ParamLimits

0x44a5,	// (0x00033766) cell_vkb2_top_candi_pane_g4

0xe618,	// (0x0003d8d9) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe618,	// (0x0003d8d9) cell_vkb2_top_candi_pane_g5

0x946c,	// (0x0003872d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x946c,	// (0x0003872d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x0003f07c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x0003f07c) cell_vkb2_top_candi_pane_g

0x44c6,	// (0x00033787) cell_vkb2_top_candi_pane_t1

0x3485,	// (0x00032746) aid_size_touch_slider_mark_ParamLimits

0x3485,	// (0x00032746) aid_size_touch_slider_mark

0xda2d,	// (0x0003ccee) grid_graphic2_catg_pane_ParamLimits

0xda2d,	// (0x0003ccee) grid_graphic2_catg_pane

0xdac4,	// (0x0003cd85) popup_grid_graphic2_window_t1_ParamLimits

0xdac4,	// (0x0003cd85) popup_grid_graphic2_window_t1

0xdad9,	// (0x0003cd9a) popup_grid_graphic2_window_t2_ParamLimits

0xdad9,	// (0x0003cd9a) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0003f035) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0003f035) popup_grid_graphic2_window_t

0x5194,	// (0x00034455) bg_button_pane_cp05_ParamLimits

0xdc3d,	// (0x0003cefe) cell_graphic2_control_pane_g1_ParamLimits

0x95a1,	// (0x00038862) cell_graphic2_catg_pane_ParamLimits

0x95a1,	// (0x00038862) cell_graphic2_catg_pane

0x4f71,	// (0x00034232) bg_button_pane_cp12

0xdd25,	// (0x0003cfe6) cell_graphic2_catg_pane_g1

0x94f1,	// (0x000387b2) cell_tb_ext_pane_t1_ParamLimits

0x3f98,	// (0x00033259) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3f98,	// (0x00033259) vkb2_top_cell_right_narrow_pane

0x3fb0,	// (0x00033271) vkb2_top_cell_right_wide_pane_ParamLimits

0x3fb0,	// (0x00033271) vkb2_top_cell_right_wide_pane

0x3718,	// (0x000329d9) bg_vkb2_func_pane_ParamLimits

0x3718,	// (0x000329d9) bg_vkb2_func_pane

0x4021,	// (0x000332e2) vkb2_top_cell_left_pane_g1_ParamLimits

0x3718,	// (0x000329d9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3718,	// (0x000329d9) bg_vkb2_fuc_pane_cp03

0x407f,	// (0x00033340) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x63ce,	// (0x0003568f) bg_vkb2_func_pane_g1

0x63d6,	// (0x00035697) bg_vkb2_func_pane_g2

0x63e6,	// (0x000356a7) bg_vkb2_func_pane_g3

0x63de,	// (0x0003569f) bg_vkb2_func_pane_g4

0x63ee,	// (0x000356af) bg_vkb2_func_pane_g5

0x63f6,	// (0x000356b7) bg_vkb2_func_pane_g6

0x63fe,	// (0x000356bf) bg_vkb2_func_pane_g7

0x6406,	// (0x000356c7) bg_vkb2_func_pane_g8

0x63c6,	// (0x00035687) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x0003f089) bg_vkb2_func_pane_g

0x3718,	// (0x000329d9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3718,	// (0x000329d9) bg_vkb2_fuc_pane_cp01

0x4021,	// (0x000332e2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x4021,	// (0x000332e2) vkb2_top_cell_right_wide_pane_g1

0x3718,	// (0x000329d9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3718,	// (0x000329d9) bg_vkb2_fuc_pane_cp02

0x407f,	// (0x00033340) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x407f,	// (0x00033340) vkb2_top_cell_right_narrow_pane_g1

0xcf74,	// (0x0003c235) aid_touch_area_decrease_ParamLimits

0xcf74,	// (0x0003c235) aid_touch_area_decrease

0xcfa2,	// (0x0003c263) aid_touch_area_increase_ParamLimits

0xcfa2,	// (0x0003c263) aid_touch_area_increase

0xcfca,	// (0x0003c28b) aid_touch_area_mute_ParamLimits

0xcfca,	// (0x0003c28b) aid_touch_area_mute

0xcff2,	// (0x0003c2b3) aid_touch_area_slider_ParamLimits

0xcff2,	// (0x0003c2b3) aid_touch_area_slider

0xd032,	// (0x0003c2f3) popup_slider_window_g4_ParamLimits

0xd032,	// (0x0003c2f3) popup_slider_window_g4

0xd05a,	// (0x0003c31b) popup_slider_window_g5_ParamLimits

0xd05a,	// (0x0003c31b) popup_slider_window_g5

0xd08e,	// (0x0003c34f) popup_slider_window_g6_ParamLimits

0xd08e,	// (0x0003c34f) popup_slider_window_g6

0x941d,	// (0x000386de) popup_slider_window_t2_ParamLimits

0x941d,	// (0x000386de) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x0003ef83) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x0003ef83) popup_slider_window_t

0xd0aa,	// (0x0003c36b) slider_pane_ParamLimits

0xd0aa,	// (0x0003c36b) slider_pane

0xe639,	// (0x0003d8fa) slider_pane_g1_ParamLimits

0xe639,	// (0x0003d8fa) slider_pane_g1

0xe64d,	// (0x0003d90e) slider_pane_g2_ParamLimits

0xe64d,	// (0x0003d90e) slider_pane_g2

0xe663,	// (0x0003d924) slider_pane_g3_ParamLimits

0xe663,	// (0x0003d924) slider_pane_g3

0x0003,

0xfddb,	// (0x0003f09c) slider_pane_g_ParamLimits

0xfddb,	// (0x0003f09c) slider_pane_g

0xbe05,	// (0x0003b0c6) popup_tb_float_extension_window_ParamLimits

0xbe05,	// (0x0003b0c6) popup_tb_float_extension_window

0xe68f,	// (0x0003d950) aid_size_cell_tb_float_ext

0x4f71,	// (0x00034232) bg_popup_sub_window_cp28

0xe69a,	// (0x0003d95b) grid_tb_float_ext_pane

0xe6a2,	// (0x0003d963) cell_tb_float_ext_pane_ParamLimits

0xe6a2,	// (0x0003d963) cell_tb_float_ext_pane

0xe6ba,	// (0x0003d97b) cell_tb_float_ext_pane_g1

0xe6c3,	// (0x0003d984) grid_highlight_pane_cp12

0xca04,	// (0x0003bcc5) cell_last_hwr_side_pane_ParamLimits

0xca04,	// (0x0003bcc5) cell_last_hwr_side_pane

0x814e,	// (0x0003740f) cell_last_hwr_side_pane_g1

0xe6cc,	// (0x0003d98d) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x0003f0a5) cell_last_hwr_side_pane_g

0xd915,	// (0x0003cbd6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd915,	// (0x0003cbd6) vkb2_area_bottom_space_btn_pane

0x837a,	// (0x0003763b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe503,	// (0x0003d7c4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x44c6,	// (0x00033787) cell_vkb2_top_candi_pane_t1_ParamLimits

0x44f8,	// (0x000337b9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x44f8,	// (0x000337b9) vkb2_area_bottom_space_btn_pane_g1

0x452e,	// (0x000337ef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x452e,	// (0x000337ef) vkb2_area_bottom_space_btn_pane_g2

0x4564,	// (0x00033825) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x4564,	// (0x00033825) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x0003f0aa) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x0003f0aa) vkb2_area_bottom_space_btn_pane_g

0x37c7,	// (0x00032a88) cel_fep_hwr_func_pane_ParamLimits

0x37c7,	// (0x00032a88) cel_fep_hwr_func_pane

0xc9d9,	// (0x0003bc9a) cell_hwr_side_button_pane_ParamLimits

0xc9d9,	// (0x0003bc9a) cell_hwr_side_button_pane

0x9525,	// (0x000387e6) aid_area_touch_clock_ParamLimits

0x5194,	// (0x00034455) bg_uniindi_top_pane_ParamLimits

0x9537,	// (0x000387f8) uniindi_top_pane_g1_ParamLimits

0x954d,	// (0x0003880e) uniindi_top_pane_g2_ParamLimits

0x9559,	// (0x0003881a) uniindi_top_pane_g3_ParamLimits

0x956a,	// (0x0003882b) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x0003efbb) uniindi_top_pane_g_ParamLimits

0x9577,	// (0x00038838) uniindi_top_pane_t1_ParamLimits

0x5194,	// (0x00034455) bg_vkb2_func_pane_cp01_ParamLimits

0x5194,	// (0x00034455) bg_vkb2_func_pane_cp01

0xe6d5,	// (0x0003d996) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6d5,	// (0x0003d996) cel_fep_hwr_func_pane_g1

0x5194,	// (0x00034455) bg_vkb2_func_pane_cp02_ParamLimits

0x5194,	// (0x00034455) bg_vkb2_func_pane_cp02

0xe6d5,	// (0x0003d996) cell_hwr_side_button_pane_g1_ParamLimits

0xe6d5,	// (0x0003d996) cell_hwr_side_button_pane_g1

0x62ea,	// (0x000355ab) status_pane_g4_ParamLimits

0x62ea,	// (0x000355ab) status_pane_g4

0x6302,	// (0x000355c3) status_pane_t1

0x7f54,	// (0x00037215) form2_midp_gauge_slider_cont_pane

0x7f5c,	// (0x0003721d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc9b5,	// (0x0003bc76) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc9c7,	// (0x0003bc88) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0003ed8e) form2_midp_gauge_slider_pane_t_ParamLimits

0x7f6e,	// (0x0003722f) form2_midp_slider_pane_ParamLimits

0x3c11,	// (0x00032ed2) aid_size_cell_func_vkb2_ParamLimits

0x3c11,	// (0x00032ed2) aid_size_cell_func_vkb2

0xe67b,	// (0x0003d93c) slider_pane_g4_ParamLimits

0xe67b,	// (0x0003d93c) slider_pane_g4

0xdd2e,	// (0x0003cfef) form2_midp_gauge_slider_pane_t2_cp01

0xdd3c,	// (0x0003cffd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdd3c,	// (0x0003cffd) form2_midp_gauge_slider_pane_t3_cp01

0x45d5,	// (0x00033896) form2_midp_slider_pane_cp01

0x4f71,	// (0x00034232) navi_smil_pane

0xe705,	// (0x0003d9c6) navi_smil_pane_g1

0xe70d,	// (0x0003d9ce) navi_smil_pane_t1

0xe6e3,	// (0x0003d9a4) form2_midp_slider_pane_g1

0xe6ec,	// (0x0003d9ad) form2_midp_slider_pane_g2

0xe6f4,	// (0x0003d9b5) form2_midp_slider_pane_g3

0xe6e3,	// (0x0003d9a4) form2_midp_slider_pane_g4

0xdd59,	// (0x0003d01a) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x0003f0b3) form2_midp_slider_pane_g

0x459a,	// (0x0003385b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x459a,	// (0x0003385b) vkb2_area_bottom_space_btn_pane_g4

0xbfa7,	// (0x0003b268) lc0_navi_pane_ParamLimits

0xbfa7,	// (0x0003b268) lc0_navi_pane

0xc011,	// (0x0003b2d2) lc0_stat_indi_pane_ParamLimits

0xc011,	// (0x0003b2d2) lc0_stat_indi_pane

0xc026,	// (0x0003b2e7) ls0_title_pane_ParamLimits

0xc026,	// (0x0003b2e7) ls0_title_pane

0x563b,	// (0x000348fc) bg_popup_sub_pane_cp14_ParamLimits

0x950c,	// (0x000387cd) list_uniindi_pane_ParamLimits

0x9518,	// (0x000387d9) uniindi_top_pane_ParamLimits

0x95b3,	// (0x00038874) list_single_uniindi_pane_g1_ParamLimits

0x95c6,	// (0x00038887) list_single_uniindi_pane_t1_ParamLimits

0xdd62,	// (0x0003d023) lc0_stat_clock_pane_ParamLimits

0xdd62,	// (0x0003d023) lc0_stat_clock_pane

0xdd6f,	// (0x0003d030) lc0_stat_indi_pane_g1_ParamLimits

0xdd6f,	// (0x0003d030) lc0_stat_indi_pane_g1

0xdd7c,	// (0x0003d03d) lc0_stat_indi_pane_g2_ParamLimits

0xdd7c,	// (0x0003d03d) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x0003f0be) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x0003f0be) lc0_stat_indi_pane_g

0xdd89,	// (0x0003d04a) lc0_uni_indicator_pane_ParamLimits

0xdd89,	// (0x0003d04a) lc0_uni_indicator_pane

0xe71b,	// (0x0003d9dc) ls0_title_pane_g1_ParamLimits

0xe71b,	// (0x0003d9dc) ls0_title_pane_g1

0xdd96,	// (0x0003d057) ls0_title_pane_t1_ParamLimits

0xdd96,	// (0x0003d057) ls0_title_pane_t1

0xddc4,	// (0x0003d085) lc0_uni_indicator_pane_g1_ParamLimits

0xddc4,	// (0x0003d085) lc0_uni_indicator_pane_g1

0xe72f,	// (0x0003d9f0) lc0_stat_clock_pane_t1

0x4f71,	// (0x00034232) main_ai5_pane

0xe73d,	// (0x0003d9fe) ai5_sk_pane_ParamLimits

0xe73d,	// (0x0003d9fe) ai5_sk_pane

0xddd9,	// (0x0003d09a) cell_ai5_widget_pane_ParamLimits

0xddd9,	// (0x0003d09a) cell_ai5_widget_pane

0xe74a,	// (0x0003da0b) aid_size_cell_widget_grid

0xe757,	// (0x0003da18) bg_ai5_widget_pane_ParamLimits

0xe757,	// (0x0003da18) bg_ai5_widget_pane

0xde66,	// (0x0003d127) cell_ai5_widget_pane_g2

0xde7a,	// (0x0003d13b) cell_ai5_widget_pane_g3

0xde94,	// (0x0003d155) cell_ai5_widget_pane_g4

0xdea4,	// (0x0003d165) cell_ai5_widget_pane_g5

0xdeb4,	// (0x0003d175) cell_ai5_widget_pane_g6

0xdec0,	// (0x0003d181) cell_ai5_widget_pane_g7

0xdf2c,	// (0x0003d1ed) cell_ai5_widget_pane_t1_ParamLimits

0xdf2c,	// (0x0003d1ed) cell_ai5_widget_pane_t1

0xdf49,	// (0x0003d20a) cell_ai5_widget_pane_t2_ParamLimits

0xdf49,	// (0x0003d20a) cell_ai5_widget_pane_t2

0xdf61,	// (0x0003d222) cell_ai5_widget_pane_t3_ParamLimits

0xdf61,	// (0x0003d222) cell_ai5_widget_pane_t3

0xdf79,	// (0x0003d23a) cell_ai5_widget_pane_t4_ParamLimits

0xdf79,	// (0x0003d23a) cell_ai5_widget_pane_t4

0xdf9f,	// (0x0003d260) cell_ai5_widget_pane_t5_ParamLimits

0xdf9f,	// (0x0003d260) cell_ai5_widget_pane_t5

0xe791,	// (0x0003da52) cell_ai5_widget_pane_t6_ParamLimits

0xe791,	// (0x0003da52) cell_ai5_widget_pane_t6

0xe7a3,	// (0x0003da64) cell_ai5_widget_pane_t7_ParamLimits

0xe7a3,	// (0x0003da64) cell_ai5_widget_pane_t7

0xdfbe,	// (0x0003d27f) cell_ai5_widget_pane_t8_ParamLimits

0xdfbe,	// (0x0003d27f) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x0003f0de) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x0003f0de) cell_ai5_widget_pane_t

0xe042,	// (0x0003d303) grid_ai5_widget_pane

0x563b,	// (0x000348fc) highlight_cell_ai5_widget_pane_ParamLimits

0x563b,	// (0x000348fc) highlight_cell_ai5_widget_pane

0xe04e,	// (0x0003d30f) ai5_sk_left_pane

0xe058,	// (0x0003d319) ai5_sk_middle_pane

0xe062,	// (0x0003d323) ai5_sk_right_pane

0xe7c2,	// (0x0003da83) bg_ai5_widget_pane_g1_ParamLimits

0xe7c2,	// (0x0003da83) bg_ai5_widget_pane_g1

0xe7ce,	// (0x0003da8f) bg_ai5_widget_pane_g2_ParamLimits

0xe7ce,	// (0x0003da8f) bg_ai5_widget_pane_g2

0xe7da,	// (0x0003da9b) bg_ai5_widget_pane_g3_ParamLimits

0xe7da,	// (0x0003da9b) bg_ai5_widget_pane_g3

0xe7e6,	// (0x0003daa7) bg_ai5_widget_pane_g4_ParamLimits

0xe7e6,	// (0x0003daa7) bg_ai5_widget_pane_g4

0xe7f2,	// (0x0003dab3) bg_ai5_widget_pane_g5_ParamLimits

0xe7f2,	// (0x0003dab3) bg_ai5_widget_pane_g5

0xe7fe,	// (0x0003dabf) bg_ai5_widget_pane_g6_ParamLimits

0xe7fe,	// (0x0003dabf) bg_ai5_widget_pane_g6

0xe80a,	// (0x0003dacb) bg_ai5_widget_pane_g7_ParamLimits

0xe80a,	// (0x0003dacb) bg_ai5_widget_pane_g7

0xe816,	// (0x0003dad7) bg_ai5_widget_pane_g8_ParamLimits

0xe816,	// (0x0003dad7) bg_ai5_widget_pane_g8

0xe822,	// (0x0003dae3) bg_ai5_widget_pane_g9_ParamLimits

0xe822,	// (0x0003dae3) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x0003f0f7) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0003f0f7) bg_ai5_widget_pane_g

0xe852,	// (0x0003db13) cell_shortcut_ai5_widget_pane_ParamLimits

0xe852,	// (0x0003db13) cell_shortcut_ai5_widget_pane

0xe863,	// (0x0003db24) bg_cell_shortcut_ai5_widget_pane

0x534e,	// (0x0003460f) cell_grid_ai5_widget_pane_g1

0x5fe1,	// (0x000352a2) highlight_cell_shortcut_ai5_widget_pane

0x63d6,	// (0x00035697) ai5_sk_left_pane_g1

0xe86b,	// (0x0003db2c) ai5_sk_left_pane_g2

0xe873,	// (0x0003db34) ai5_sk_left_pane_g3

0xe87b,	// (0x0003db3c) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x0003f10a) ai5_sk_left_pane_g

0xe883,	// (0x0003db44) ai5_sk_left_pane_t1

0x63ce,	// (0x0003568f) ai5_sk_right_pane_g1

0xe891,	// (0x0003db52) ai5_sk_right_pane_g2

0xe899,	// (0x0003db5a) ai5_sk_right_pane_g3

0xe8a1,	// (0x0003db62) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x0003f113) ai5_sk_right_pane_g

0xe8a9,	// (0x0003db6a) ai5_sk_right_pane_t1

0x63ce,	// (0x0003568f) ai5_sk_middle_pane_g1

0x63d6,	// (0x00035697) ai5_sk_middle_pane_g2

0x63ee,	// (0x000356af) ai5_sk_middle_pane_g3

0xe899,	// (0x0003db5a) ai5_sk_middle_pane_g4

0xe873,	// (0x0003db34) ai5_sk_middle_pane_g5

0xe8b7,	// (0x0003db78) ai5_sk_middle_pane_g6

0xe06c,	// (0x0003d32d) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x0003f11c) ai5_sk_middle_pane_g

0xbea5,	// (0x0003b166) aid_touch_area_size_lc0_ParamLimits

0xbea5,	// (0x0003b166) aid_touch_area_size_lc0

0x3946,	// (0x00032c07) cell_hwr_candidate_pane_t1_ParamLimits

0x621f,	// (0x000354e0) aid_touch_navi_pane

0xc112,	// (0x0003b3d3) status_dt_navi_pane_ParamLimits

0xc112,	// (0x0003b3d3) status_dt_navi_pane

0xc12a,	// (0x0003b3eb) status_dt_sta_pane_ParamLimits

0xc12a,	// (0x0003b3eb) status_dt_sta_pane

0xe074,	// (0x0003d335) dt_sta_controll_pane

0xe081,	// (0x0003d342) dt_sta_indi_pane

0xe08e,	// (0x0003d34f) dt_sta_title_pane

0x5194,	// (0x00034455) bg_dt_sta_indi_pane_ParamLimits

0x5194,	// (0x00034455) bg_dt_sta_indi_pane

0xe0a0,	// (0x0003d361) dt_sta_battery_pane

0xe0a8,	// (0x0003d369) dt_sta_indi_pane_g1

0xe0b1,	// (0x0003d372) dt_sta_indi_pane_g2

0xe0ba,	// (0x0003d37b) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x0003f12b) dt_sta_indi_pane_g

0xe0c3,	// (0x0003d384) dt_sta_signal_pane

0x563b,	// (0x000348fc) bg_dt_sta_title_pane_ParamLimits

0x563b,	// (0x000348fc) bg_dt_sta_title_pane

0xe0cc,	// (0x0003d38d) dt_sta_title_pane_g1

0xe0d4,	// (0x0003d395) dt_sta_title_pane_t1_ParamLimits

0xe0d4,	// (0x0003d395) dt_sta_title_pane_t1

0x4f71,	// (0x00034232) bg_dt_sta_control_pane

0xe0e9,	// (0x0003d3aa) dt_sta_controll_pane_g1

0xe0f2,	// (0x0003d3b3) bg_dt_sta_title_pane_g1

0xe0fb,	// (0x0003d3bc) bg_dt_sta_title_pane_g2

0xe104,	// (0x0003d3c5) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x0003f132) bg_dt_sta_title_pane_g

0x814e,	// (0x0003740f) bg_dt_sta_indi_pane_g1

0xe10d,	// (0x0003d3ce) dt_sta_signal_pane_g1

0xe115,	// (0x0003d3d6) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x0003f139) dt_sta_signal_pane_g

0xe8bf,	// (0x0003db80) dt_sta_battery_pane_g1

0xe8c8,	// (0x0003db89) dt_sta_battery_pane_t1

0x814e,	// (0x0003740f) bg_dt_sta_control_pane_g1

0x5baa,	// (0x00034e6b) fep_china_uni_eep_pane

0x5bb2,	// (0x00034e73) fep_china_uni_entry_pane_ParamLimits

0x5bc2,	// (0x00034e83) popup_fep_china_uni_window_g1_ParamLimits

0x5bd2,	// (0x00034e93) popup_fep_china_uni_window_g2_ParamLimits

0x5bd2,	// (0x00034e93) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0003e9be) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0003e9be) popup_fep_china_uni_window_g

0xe8d7,	// (0x0003db98) fep_china_uni_eep_pane_g1

0xe8df,	// (0x0003dba0) fep_china_uni_eep_pane_t1

0xe6fc,	// (0x0003d9bd) aid_touch_area_size_smil_player

0x62bd,	// (0x0003557e) lc0_clock_pane

0x62f6,	// (0x000355b7) status_pane_g5_ParamLimits

0x62f6,	// (0x000355b7) status_pane_g5

0xba39,	// (0x0003acfa) popup_keymap_window

0x62d6,	// (0x00035597) status_icon_pane

0xde7a,	// (0x0003d13b) cell_ai5_widget_pane_g3_ParamLimits

0xde94,	// (0x0003d155) cell_ai5_widget_pane_g4_ParamLimits

0xdea4,	// (0x0003d165) cell_ai5_widget_pane_g5_ParamLimits

0xdecc,	// (0x0003d18d) cell_ai5_widget_pane_g8_ParamLimits

0xdecc,	// (0x0003d18d) cell_ai5_widget_pane_g8

0xdee0,	// (0x0003d1a1) cell_ai5_widget_pane_g9_ParamLimits

0xdee0,	// (0x0003d1a1) cell_ai5_widget_pane_g9

0xdef4,	// (0x0003d1b5) cell_ai5_widget_pane_g10_ParamLimits

0xdef4,	// (0x0003d1b5) cell_ai5_widget_pane_g10

0xe8ee,	// (0x0003dbaf) status_icon_pane_g1

0x4f71,	// (0x00034232) bg_popup_sub_pane_cp13

0xe8f6,	// (0x0003dbb7) popup_keymap_window_t1

0x0b65,	// (0x0002fe26) control_pane_g6_ParamLimits

0x0b65,	// (0x0002fe26) control_pane_g6

0x0b58,	// (0x0002fe19) control_pane_g7_ParamLimits

0x0b58,	// (0x0002fe19) control_pane_g7

0x0b4b,	// (0x0002fe0c) control_pane_g8_ParamLimits

0x0b4b,	// (0x0002fe0c) control_pane_g8

0xe074,	// (0x0003d335) dt_sta_controll_pane_ParamLimits

0xe081,	// (0x0003d342) dt_sta_indi_pane_ParamLimits

0xe08e,	// (0x0003d34f) dt_sta_title_pane_ParamLimits

0x5580,	// (0x00034841) aid_size_touch_scroll_bar_cale

0x251c,	// (0x000317dd) popup_discreet_window_ParamLimits

0x251c,	// (0x000317dd) popup_discreet_window

0xb5f9,	// (0x0003a8ba) popup_sk_window

0x698e,	// (0x00035c4f) bg_popup_sub_pane_cp28_ParamLimits

0x698e,	// (0x00035c4f) bg_popup_sub_pane_cp28

0xe904,	// (0x0003dbc5) popup_discreet_window_g1_ParamLimits

0xe904,	// (0x0003dbc5) popup_discreet_window_g1

0xe924,	// (0x0003dbe5) popup_discreet_window_t1_ParamLimits

0xe924,	// (0x0003dbe5) popup_discreet_window_t1

0xe942,	// (0x0003dc03) popup_discreet_window_t2_ParamLimits

0xe942,	// (0x0003dc03) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x0003f13e) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x0003f13e) popup_discreet_window_t

0x49b1,	// (0x00033c72) popup_sk_window_g1

0x49ba,	// (0x00033c7b) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0003f145) popup_sk_window_g

0x49c3,	// (0x00033c84) popup_sk_window_t1

0x49d1,	// (0x00033c92) popup_sk_window_t1_copy1

0xde66,	// (0x0003d127) cell_ai5_widget_pane_g2_ParamLimits

0xdfd0,	// (0x0003d291) cell_ai5_widget_pane_t9_ParamLimits

0xdfd0,	// (0x0003d291) cell_ai5_widget_pane_t9

0x4f71,	// (0x00034232) main_fep_fshwr2_pane

0xe11d,	// (0x0003d3de) aid_fshwr2_btn_pane

0xe131,	// (0x0003d3f2) aid_fshwr2_syb_pane

0xe145,	// (0x0003d406) aid_fshwr2_txt_pane

0xe155,	// (0x0003d416) fshwr2_func_candi_pane

0xe16d,	// (0x0003d42e) fshwr2_hwr_syb_pane

0xe185,	// (0x0003d446) fshwr2_icf_pane

0x4f71,	// (0x00034232) fshwr2_icf_bg_pane

0xe1af,	// (0x0003d470) fshwr2_icf_pane_t1_ParamLimits

0xe1af,	// (0x0003d470) fshwr2_icf_pane_t1

0x5b48,	// (0x00034e09) fshwr2_func_candi_pane_g1

0xe1c6,	// (0x0003d487) fshwr2_func_candi_row_pane_ParamLimits

0xe1c6,	// (0x0003d487) fshwr2_func_candi_row_pane

0xe1e9,	// (0x0003d4aa) cell_fshwr2_syb_pane_ParamLimits

0xe1e9,	// (0x0003d4aa) cell_fshwr2_syb_pane

0xe6d5,	// (0x0003d996) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe6d5,	// (0x0003d996) fshwr2_hwr_syb_pane_g1

0x4f71,	// (0x00034232) bg_popup_call_pane_cp01

0xe20b,	// (0x0003d4cc) fshwr2_func_candi_cell_pane_ParamLimits

0xe20b,	// (0x0003d4cc) fshwr2_func_candi_cell_pane

0x6780,	// (0x00035a41) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6780,	// (0x00035a41) fshwr2_func_candi_cell_bg_pane

0xe24a,	// (0x0003d50b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe24a,	// (0x0003d50b) fshwr2_func_candi_cell_pane_g1

0xe281,	// (0x0003d542) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe281,	// (0x0003d542) fshwr2_func_candi_cell_pane_t1

0x4f71,	// (0x00034232) bg_button_pane_cp08

0x61fd,	// (0x000354be) cell_fshwr2_syb_bg_pane

0xe29c,	// (0x0003d55d) cell_fshwr2_syb_bg_pane_g1

0xe2b0,	// (0x0003d571) cell_fshwr2_syb_bg_pane_t1

0x563b,	// (0x000348fc) main_tmo_pane

0xc515,	// (0x0003b7d6) uni_indicator_pane_g1_ParamLimits

0xc529,	// (0x0003b7ea) uni_indicator_pane_g2_ParamLimits

0xc53e,	// (0x0003b7ff) uni_indicator_pane_g3_ParamLimits

0x738d,	// (0x0003664e) uni_indicator_pane_g4_ParamLimits

0x738d,	// (0x0003664e) uni_indicator_pane_g4

0x73a1,	// (0x00036662) uni_indicator_pane_g5_ParamLimits

0x73a1,	// (0x00036662) uni_indicator_pane_g5

0x73a1,	// (0x00036662) uni_indicator_pane_g6_ParamLimits

0x73a1,	// (0x00036662) uni_indicator_pane_g6

0xf8f5,	// (0x0003ebb6) uni_indicator_pane_g_ParamLimits

0xcf58,	// (0x0003c219) popup_tmo_note_window_ParamLimits

0xcf58,	// (0x0003c219) popup_tmo_note_window

0x563b,	// (0x000348fc) fshwr2_bg_pane

0xe272,	// (0x0003d533) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe272,	// (0x0003d533) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x0003f14a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x0003f14a) fshwr2_func_candi_cell_pane_g

0x814e,	// (0x0003740f) bg_popup_window_pane_cp01

0x4b66,	// (0x00033e27) bg_popup_window_pane_g1_cp01

0xe994,	// (0x0003dc55) bg_popup_window_pane_cp22_ParamLimits

0xe994,	// (0x0003dc55) bg_popup_window_pane_cp22

0xe9a2,	// (0x0003dc63) listscroll_tmo_link_pane_ParamLimits

0xe9a2,	// (0x0003dc63) listscroll_tmo_link_pane

0xe9e2,	// (0x0003dca3) popup_tmo_note_window_g1_ParamLimits

0xe9e2,	// (0x0003dca3) popup_tmo_note_window_g1

0xe9ef,	// (0x0003dcb0) tmo_note_info_pane_ParamLimits

0xe9ef,	// (0x0003dcb0) tmo_note_info_pane

0xe2c6,	// (0x0003d587) list_tmo_note_info_pane_g1_ParamLimits

0xe2c6,	// (0x0003d587) list_tmo_note_info_pane_g1

0xea09,	// (0x0003dcca) list_tmo_note_info_pane_g2_ParamLimits

0xea09,	// (0x0003dcca) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x0003f14f) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x0003f14f) list_tmo_note_info_pane_g

0xea25,	// (0x0003dce6) list_tmo_note_info_text_pane_ParamLimits

0xea25,	// (0x0003dce6) list_tmo_note_info_text_pane

0xea67,	// (0x0003dd28) list_tmo_link_pane

0xea74,	// (0x0003dd35) scroll_pane_cp20

0xea81,	// (0x0003dd42) list_single_tmo_link_pane_ParamLimits

0xea81,	// (0x0003dd42) list_single_tmo_link_pane

0xea91,	// (0x0003dd52) list_single_tmo_link_pane_t1

0xea9f,	// (0x0003dd60) list_tmo_note_info_text_pane_t1_ParamLimits

0xea9f,	// (0x0003dd60) list_tmo_note_info_text_pane_t1

0x56ee,	// (0x000349af) aid_size_touch_scroll_bar_cp01_ParamLimits

0x56ee,	// (0x000349af) aid_size_touch_scroll_bar_cp01

0xb256,	// (0x0003a517) aid_size_touch_slider_marker

0xb5ed,	// (0x0003a8ae) popup_settings_window_ParamLimits

0xb5ed,	// (0x0003a8ae) popup_settings_window

0x1cb1,	// (0x00030f72) popup_candi_list_indi_window

0x621f,	// (0x000354e0) aid_touch_navi_pane_ParamLimits

0x3b65,	// (0x00032e26) rs_clock_indi_pane

0x3b6e,	// (0x00032e2f) sctrl_sk_bottom_pane_ParamLimits

0x3b7f,	// (0x00032e40) sctrl_sk_top_pane_ParamLimits

0x3c63,	// (0x00032f24) popup_fep_tooltip_window

0xe74a,	// (0x0003da0b) aid_size_cell_widget_grid_ParamLimits

0xde52,	// (0x0003d113) cell_ai5_widget_pane_g1_ParamLimits

0xde52,	// (0x0003d113) cell_ai5_widget_pane_g1

0xdeb4,	// (0x0003d175) cell_ai5_widget_pane_g6_ParamLimits

0xdec0,	// (0x0003d181) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x0003f0c3) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x0003f0c3) cell_ai5_widget_pane_g

0xdfff,	// (0x0003d2c0) cell_ai5_widget_pane_t10_ParamLimits

0xdfff,	// (0x0003d2c0) cell_ai5_widget_pane_t10

0xe042,	// (0x0003d303) grid_ai5_widget_pane_ParamLimits

0xe82e,	// (0x0003daef) cell_contacts_ai5_widget_pane_ParamLimits

0xe82e,	// (0x0003daef) cell_contacts_ai5_widget_pane

0xe957,	// (0x0003dc18) popup_discreet_window_t3_ParamLimits

0xe957,	// (0x0003dc18) popup_discreet_window_t3

0xe19d,	// (0x0003d45e) popup_fshwr2_char_preview_window_ParamLimits

0xe19d,	// (0x0003d45e) popup_fshwr2_char_preview_window

0xe2dd,	// (0x0003d59e) tmo_note_info_pane_t1

0xe2f2,	// (0x0003d5b3) tmo_note_info_pane_t2

0xe307,	// (0x0003d5c8) tmo_note_info_pane_t3

0xea43,	// (0x0003dd04) tmo_note_info_pane_t4

0xea55,	// (0x0003dd16) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0003f154) tmo_note_info_pane_t

0xea67,	// (0x0003dd28) list_tmo_link_pane_ParamLimits

0xea74,	// (0x0003dd35) scroll_pane_cp20_ParamLimits

0x4f71,	// (0x00034232) bg_popup_fep_char_preview_window_cp01

0xeab8,	// (0x0003dd79) popup_fshwr2_char_preview_window_t1

0xeac6,	// (0x0003dd87) popup_candi_list_indi_window_g1

0xeacf,	// (0x0003dd90) bg_cell_contacts_ai5_widget_pane

0xeadb,	// (0x0003dd9c) cell_contacts_ai5_widget_pane_g1

0xeaf0,	// (0x0003ddb1) cell_contacts_ai5_widget_pane_g2

0xeafc,	// (0x0003ddbd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x0003f15f) cell_contacts_ai5_widget_pane_g

0xeb08,	// (0x0003ddc9) cell_contacts_ai5_widget_pane_t1

0x563b,	// (0x000348fc) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeb7d,	// (0x0003de3e) settings_container_pane

0x5fe1,	// (0x000352a2) listscroll_set_pane_copy1

0x7a9a,	// (0x00036d5b) scroll_pane_cp121_copy1

0xeb89,	// (0x0003de4a) set_content_pane_copy1

0xeb91,	// (0x0003de52) aid_height_set_list_copy1_ParamLimits

0xeb91,	// (0x0003de52) aid_height_set_list_copy1

0x7546,	// (0x00036807) aid_size_parent_copy1_ParamLimits

0x7546,	// (0x00036807) aid_size_parent_copy1

0xeb9d,	// (0x0003de5e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeb9d,	// (0x0003de5e) button_value_adjust_pane_cp6_copy1

0x61fd,	// (0x000354be) list_highlight_pane_cp2_copy1_ParamLimits

0x61fd,	// (0x000354be) list_highlight_pane_cp2_copy1

0xebb1,	// (0x0003de72) list_set_pane_copy1_ParamLimits

0xebb1,	// (0x0003de72) list_set_pane_copy1

0xeb1a,	// (0x0003dddb) main_pane_set_t1_copy1_ParamLimits

0xeb1a,	// (0x0003dddb) main_pane_set_t1_copy1

0xeb54,	// (0x0003de15) main_pane_set_t2_copy1_ParamLimits

0xeb54,	// (0x0003de15) main_pane_set_t2_copy1

0xec3f,	// (0x0003df00) main_pane_set_t3_copy1

0xec4d,	// (0x0003df0e) main_pane_set_t4_copy1

0xeb71,	// (0x0003de32) set_content_pane_g1_copy1_ParamLimits

0xeb71,	// (0x0003de32) set_content_pane_g1_copy1

0xec5b,	// (0x0003df1c) setting_code_pane_copy1

0xec63,	// (0x0003df24) setting_slider_graphic_pane_copy1

0xec63,	// (0x0003df24) setting_slider_pane_copy1

0xec63,	// (0x0003df24) setting_text_pane_copy1

0xec63,	// (0x0003df24) setting_volume_pane_copy1

0xec6b,	// (0x0003df2c) settings_code_pane_cp2_copy1

0xec73,	// (0x0003df34) settings_code_pane_cp_copy1_ParamLimits

0xec73,	// (0x0003df34) settings_code_pane_cp_copy1

0x4bc5,	// (0x00033e86) volume_set_pane_copy1

0xec87,	// (0x0003df48) volume_set_pane_g10_copy1

0xec8f,	// (0x0003df50) volume_set_pane_g1_copy1

0xec97,	// (0x0003df58) volume_set_pane_g2_copy1

0xec9f,	// (0x0003df60) volume_set_pane_g3_copy1

0xeca7,	// (0x0003df68) volume_set_pane_g4_copy1

0xecaf,	// (0x0003df70) volume_set_pane_g5_copy1

0xecb7,	// (0x0003df78) volume_set_pane_g6_copy1

0xecbf,	// (0x0003df80) volume_set_pane_g7_copy1

0xecc7,	// (0x0003df88) volume_set_pane_g8_copy1

0xeccf,	// (0x0003df90) volume_set_pane_g9_copy1

0x504b,	// (0x0003430c) bg_set_opt_pane_cp_copy1_ParamLimits

0x504b,	// (0x0003430c) bg_set_opt_pane_cp_copy1

0x4bcd,	// (0x00033e8e) setting_slider_pane_t1_copy1_ParamLimits

0x4bcd,	// (0x00033e8e) setting_slider_pane_t1_copy1

0x4be4,	// (0x00033ea5) setting_slider_pane_t2_copy1_ParamLimits

0x4be4,	// (0x00033ea5) setting_slider_pane_t2_copy1

0x4bfd,	// (0x00033ebe) setting_slider_pane_t3_copy1_ParamLimits

0x4bfd,	// (0x00033ebe) setting_slider_pane_t3_copy1

0x269c,	// (0x0003195d) slider_set_pane_copy1_ParamLimits

0x269c,	// (0x0003195d) slider_set_pane_copy1

0x568a,	// (0x0003494b) set_opt_bg_pane_g1_copy2

0x5692,	// (0x00034953) set_opt_bg_pane_g2_copy2

0xecd7,	// (0x0003df98) set_opt_bg_pane_g3_copy2

0x56a2,	// (0x00034963) set_opt_bg_pane_g4_copy2

0x56aa,	// (0x0003496b) set_opt_bg_pane_g5_copy2

0x56b2,	// (0x00034973) set_opt_bg_pane_g6_copy2

0xecdf,	// (0x0003dfa0) set_opt_bg_pane_g7_copy2

0xece7,	// (0x0003dfa8) set_opt_bg_pane_g8_copy2

0xecef,	// (0x0003dfb0) set_opt_bg_pane_g9_copy2

0x3485,	// (0x00032746) aid_size_touch_slider_mark_copy1_ParamLimits

0x3485,	// (0x00032746) aid_size_touch_slider_mark_copy1

0x7558,	// (0x00036819) slider_set_pane_g1_copy1

0x7561,	// (0x00036822) slider_set_pane_g2_copy1

0x34a5,	// (0x00032766) slider_set_pane_g3_copy1_ParamLimits

0x34a5,	// (0x00032766) slider_set_pane_g3_copy1

0x34b9,	// (0x0003277a) slider_set_pane_g4_copy1_ParamLimits

0x34b9,	// (0x0003277a) slider_set_pane_g4_copy1

0x34d1,	// (0x00032792) slider_set_pane_g5_copy1_ParamLimits

0x34d1,	// (0x00032792) slider_set_pane_g5_copy1

0x34a5,	// (0x00032766) slider_set_pane_g6_copy1_ParamLimits

0x34a5,	// (0x00032766) slider_set_pane_g6_copy1

0x4c14,	// (0x00033ed5) slider_set_pane_g7_copy1_ParamLimits

0x4c14,	// (0x00033ed5) slider_set_pane_g7_copy1

0x4ffd,	// (0x000342be) bg_set_opt_pane_cp2_copy1

0x5061,	// (0x00034322) setting_slider_graphic_pane_g1_copy1

0x4c2a,	// (0x00033eeb) setting_slider_graphic_pane_t1_copy1

0x4c39,	// (0x00033efa) setting_slider_graphic_pane_t2_copy1

0x4c48,	// (0x00033f09) slider_set_pane_cp_copy1

0xecff,	// (0x0003dfc0) input_focus_pane_cp1_copy1

0xed08,	// (0x0003dfc9) list_set_text_pane_copy1

0xed10,	// (0x0003dfd1) setting_text_pane_g1_copy1

0x23b3,	// (0x00031674) set_text_pane_t1_copy1

0xecff,	// (0x0003dfc0) input_focus_pane_cp2_copy1

0xed10,	// (0x0003dfd1) setting_code_pane_g1_copy1

0xed19,	// (0x0003dfda) setting_code_pane_t1_copy1

0xe4ee,	// (0x0003d7af) list_set_graphic_pane_copy1

0x4ffd,	// (0x000342be) bg_set_opt_pane_cp4_copy1

0x5d3d,	// (0x00034ffe) list_set_graphic_pane_g1_copy1_ParamLimits

0x5d3d,	// (0x00034ffe) list_set_graphic_pane_g1_copy1

0xed27,	// (0x0003dfe8) list_set_graphic_pane_g2_copy1

0x5d55,	// (0x00035016) list_set_graphic_pane_t1_copy1_ParamLimits

0x5d55,	// (0x00035016) list_set_graphic_pane_t1_copy1

0x814e,	// (0x0003740f) rs_clock_indi_pane_g1

0xed2f,	// (0x0003dff0) rs_clock_indi_pane_t1

0xed3d,	// (0x0003dffe) rs_indi_pane

0xed45,	// (0x0003e006) rs_indi_pane_g1

0xed4e,	// (0x0003e00f) rs_indi_pane_g2

0xeac6,	// (0x0003dd87) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0003f166) rs_indi_pane_g

0x5fe1,	// (0x000352a2) bg_popup_preview_window_pane_cp03

0xed57,	// (0x0003e018) popup_fep_tooltip_window_t1

0x8d1d,	// (0x00037fde) popup_note2_window_g2_ParamLimits

0x8d1d,	// (0x00037fde) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0003eefa) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0003eefa) popup_note2_window_g

0x9198,	// (0x00038459) bg_popup_sub_pane_cp11_ParamLimits

0x91a5,	// (0x00038466) cell_ai3_links_pane_g1_ParamLimits

0x91bc,	// (0x0003847d) cell_ai3_links_pane_t1

0x23b3,	// (0x00031674) set_text_pane_t1_copy1_ParamLimits

0x5f01,	// (0x000351c2) cell_graphic_popup_pane_cp2_ParamLimits

0x5f01,	// (0x000351c2) cell_graphic_popup_pane_cp2

0xed65,	// (0x0003e026) cell_graphic_popup_pane_g1_cp2

0x542f,	// (0x000346f0) cell_graphic_popup_pane_g2_cp2

0xed6d,	// (0x0003e02e) cell_graphic_popup_pane_g3_cp2

0xed75,	// (0x0003e036) cell_graphic_popup_pane_t2_cp2

0x5440,	// (0x00034701) grid_highlight_pane_cp3_cp2

0x5981,	// (0x00034c42) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x563b,	// (0x000348fc) main_tmo_pane_ParamLimits

0xcf50,	// (0x0003c211) popup_tmo_big_image_note_window

0xe789,	// (0x0003da4a) cell_ai5_widget_list_pane

0xde49,	// (0x0003d10a) cell_ai5_widget_lrg_icon_pane

0xe2dd,	// (0x0003d59e) tmo_note_info_pane_t1_ParamLimits

0xe2f2,	// (0x0003d5b3) tmo_note_info_pane_t2_ParamLimits

0xe307,	// (0x0003d5c8) tmo_note_info_pane_t3_ParamLimits

0xea43,	// (0x0003dd04) tmo_note_info_pane_t4_ParamLimits

0xea55,	// (0x0003dd16) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0003f154) tmo_note_info_pane_t_ParamLimits

0xeb7d,	// (0x0003de3e) settings_container_pane_ParamLimits

0xecf7,	// (0x0003dfb8) indicator_popup_pane_cp5

0xecf7,	// (0x0003dfb8) indicator_popup_pane_cp6

0xe4ee,	// (0x0003d7af) list_set_graphic_pane_copy1_ParamLimits

0x4f71,	// (0x00034232) bg_popup_window_pane_cp23

0xed83,	// (0x0003e044) popup_tmo_big_image_note_window_g1

0xed8c,	// (0x0003e04d) popup_tmo_big_image_note_window_t1

0xed9a,	// (0x0003e05b) popup_tmo_big_image_note_window_t2

0xeda8,	// (0x0003e069) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x0003f16d) popup_tmo_big_image_note_window_t

0x814e,	// (0x0003740f) cell_ai5_widget_lrg_icon_pane_g1

0xedb6,	// (0x0003e077) cell_ai5_widget_lrg_icon_pane_t1

0xe31c,	// (0x0003d5dd) cell_ai5_widget_list_row_pane_ParamLimits

0xe31c,	// (0x0003d5dd) cell_ai5_widget_list_row_pane

0xe333,	// (0x0003d5f4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe333,	// (0x0003d5f4) cell_ai5_widget_list_row_pane_g1

0xe340,	// (0x0003d601) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe340,	// (0x0003d601) cell_ai5_widget_list_row_pane_t1

0xe371,	// (0x0003d632) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe371,	// (0x0003d632) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0003f174) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0003f174) cell_ai5_widget_list_row_pane_t

0x4f71,	// (0x00034232) main_fep_vtchi_ss_pane

0xedd1,	// (0x0003e092) popup_fep_char_pre_window

0xedd9,	// (0x0003e09a) popup_fep_ituss_window

0xe3c2,	// (0x0003d683) popup_fep_vkbss_window

0xee14,	// (0x0003e0d5) grid_vkbss_keypad_pane_ParamLimits

0xee14,	// (0x0003e0d5) grid_vkbss_keypad_pane

0xee24,	// (0x0003e0e5) ituss_keypad_pane

0x4d15,	// (0x00033fd6) aid_vkbss_key_offset_ParamLimits

0x4d15,	// (0x00033fd6) aid_vkbss_key_offset

0x4d21,	// (0x00033fe2) cell_vkbss_key_pane_ParamLimits

0x4d21,	// (0x00033fe2) cell_vkbss_key_pane

0xee30,	// (0x0003e0f1) bg_cell_vkbss_key_g1_ParamLimits

0xee30,	// (0x0003e0f1) bg_cell_vkbss_key_g1

0xee3c,	// (0x0003e0fd) cell_vkbss_key_3p_pane_ParamLimits

0xee3c,	// (0x0003e0fd) cell_vkbss_key_3p_pane

0xee72,	// (0x0003e133) cell_vkbss_key_g1_ParamLimits

0xee72,	// (0x0003e133) cell_vkbss_key_g1

0xeea8,	// (0x0003e169) cell_vkbss_key_t1_ParamLimits

0xeea8,	// (0x0003e169) cell_vkbss_key_t1

0x4d55,	// (0x00034016) cell_ituss_key_pane_ParamLimits

0x4d55,	// (0x00034016) cell_ituss_key_pane

0xef18,	// (0x0003e1d9) bg_cell_ituss_key_g1_ParamLimits

0xef18,	// (0x0003e1d9) bg_cell_ituss_key_g1

0xef24,	// (0x0003e1e5) cell_ituss_key_pane_g1_ParamLimits

0xef24,	// (0x0003e1e5) cell_ituss_key_pane_g1

0x4d66,	// (0x00034027) cell_ituss_key_pane_g2_ParamLimits

0x4d66,	// (0x00034027) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x0003f17b) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0003f17b) cell_ituss_key_pane_g

0x4dea,	// (0x000340ab) cell_ituss_key_t1_ParamLimits

0x4dea,	// (0x000340ab) cell_ituss_key_t1

0x4e20,	// (0x000340e1) cell_ituss_key_t2_ParamLimits

0x4e20,	// (0x000340e1) cell_ituss_key_t2

0x4e52,	// (0x00034113) cell_ituss_key_t3_ParamLimits

0x4e52,	// (0x00034113) cell_ituss_key_t3

0x4e83,	// (0x00034144) cell_ituss_key_t4_ParamLimits

0x4e83,	// (0x00034144) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0003f188) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0003f188) cell_ituss_key_t

0xef4a,	// (0x0003e20b) cell_vkbss_key_3p_pane_g1

0xef52,	// (0x0003e213) cell_vkbss_key_3p_pane_g2

0xef5a,	// (0x0003e21b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0003f193) cell_vkbss_key_3p_pane_g

0x5fe1,	// (0x000352a2) bg_popup_fep_char_preview_window_cp02

0xef62,	// (0x0003e223) popup_fep_char_pre_window_t1

0xde36,	// (0x0003d0f7) main_ai5_sk_pane

0xeacf,	// (0x0003dd90) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeadb,	// (0x0003dd9c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xeaf0,	// (0x0003ddb1) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeafc,	// (0x0003ddbd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x0003f15f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeb08,	// (0x0003ddc9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x563b,	// (0x000348fc) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe3cf,	// (0x0003d690) main_ai5_sk_pane_g1

0x67d8,	// (0x00035a99) popup_query_code_window_g1

0xe3b4,	// (0x0003d675) popup_fep_vkb_icf_pane

0xedeb,	// (0x0003e0ac) popup_fep_vtchi_icf_pane

0xef70,	// (0x0003e231) bg_icf_pane

0xef70,	// (0x0003e231) list_vkb_icf_pane

0xef7c,	// (0x0003e23d) bg_icf_pane_cp01

0xef8f,	// (0x0003e250) vtchi_icf_list_pane

0xe424,	// (0x0003d6e5) list_vkb_icf_pane_t1_ParamLimits

0xe424,	// (0x0003d6e5) list_vkb_icf_pane_t1

0xef9f,	// (0x0003e260) vtchi_icf_list_pane_t1_ParamLimits

0xef9f,	// (0x0003e260) vtchi_icf_list_pane_t1

0xedd9,	// (0x0003e09a) popup_fep_ituss_window_ParamLimits

0xedeb,	// (0x0003e0ac) popup_fep_vtchi_icf_pane_ParamLimits

0xee24,	// (0x0003e0e5) ituss_keypad_pane_ParamLimits

0x4d0d,	// (0x00033fce) ituss_sks_pane

0xef70,	// (0x0003e231) bg_icf_pane_ParamLimits

0xe399,	// (0x0003d65a) icf_edit_indi_pane_ParamLimits

0xe399,	// (0x0003d65a) icf_edit_indi_pane

0xef70,	// (0x0003e231) list_vkb_icf_pane_ParamLimits

0xef7c,	// (0x0003e23d) bg_icf_pane_cp01_ParamLimits

0xedc4,	// (0x0003e085) icf_edit_indi_pane_cp01_ParamLimits

0xedc4,	// (0x0003e085) icf_edit_indi_pane_cp01

0xef97,	// (0x0003e258) vtchi_query_pane

0xe6d5,	// (0x0003d996) icf_edit_indi_pane_g1_ParamLimits

0xe6d5,	// (0x0003d996) icf_edit_indi_pane_g1

0xe43b,	// (0x0003d6fc) icf_edit_indi_pane_g2_ParamLimits

0xe43b,	// (0x0003d6fc) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003f1be) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003f1be) icf_edit_indi_pane_g

0xe44d,	// (0x0003d70e) icf_edit_indi_pane_t1

0xefb7,	// (0x0003e278) bg_input_focus_pane_cp042

0xefc0,	// (0x0003e281) vtchi_button_pane

0xefc9,	// (0x0003e28a) vtchi_query_pane_t1

0xefd7,	// (0x0003e298) vtchi_query_pane_t2

0xefe5,	// (0x0003e2a6) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003f1ad) vtchi_query_pane_t

0x4f71,	// (0x00034232) bg_button_pane_cp13

0xeff3,	// (0x0003e2b4) vtchi_button_pane_g1

0x4f27,	// (0x000341e8) ituss_sks_pane_g1

0x4f30,	// (0x000341f1) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003f1b4) ituss_sks_pane_g

0xeffb,	// (0x0003e2bc) ituss_sks_pane_t1

0xf009,	// (0x0003e2ca) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003f1b9) ituss_sks_pane_t

0x7d7b,	// (0x0003703c) indicator_nsta_pane_cp_g1

0x7d84,	// (0x00037045) indicator_nsta_pane_cp_g2

0x7d8c,	// (0x0003704d) indicator_nsta_pane_cp_g3

0x7d94,	// (0x00037055) indicator_nsta_pane_cp_g4

0x7d9c,	// (0x0003705d) indicator_nsta_pane_cp_g5

0x7da4,	// (0x00037065) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0003ed44) indicator_nsta_pane_cp_g

0xdc1f,	// (0x0003cee0) cell_graphic2_pane_t2_ParamLimits

0xdc1f,	// (0x0003cee0) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x0003f04a) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x0003f04a) cell_graphic2_pane_t

0xdc57,	// (0x0003cf18) cell_graphic2_control_pane_t1

0x0a0d,	// (0x0002fcce) signal_pane_g3_ParamLimits

0x0a0d,	// (0x0002fcce) signal_pane_g3

0x0a21,	// (0x0002fce2) signal_pane_g4_ParamLimits

0x0a21,	// (0x0002fce2) signal_pane_g4

0xe383,	// (0x0003d644) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe383,	// (0x0003d644) cell_ai5_widget_list_row_pane_t3

0xef38,	// (0x0003e1f9) cell_ituss_key_pane_t1_ParamLimits

0xef38,	// (0x0003e1f9) cell_ituss_key_pane_t1

0x64a6,	// (0x00035767) form_field_data_wide_pane_vc_t2_ParamLimits

0x64a6,	// (0x00035767) form_field_data_wide_pane_vc_t2

0x64b8,	// (0x00035779) form_field_data_wide_pane_vc_t3_ParamLimits

0x64b8,	// (0x00035779) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x0003ea9e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x0003ea9e) form_field_data_wide_pane_vc_t

0x7adf,	// (0x00036da0) form_field_slider_wide_pane_vc_t3_ParamLimits

0x7adf,	// (0x00036da0) form_field_slider_wide_pane_vc_t3

0x7b9d,	// (0x00036e5e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7b9d,	// (0x00036e5e) form_field_popup_wide_pane_vc_t2

0x7bb2,	// (0x00036e73) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7bb2,	// (0x00036e73) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0003ed33) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0003ed33) form_field_popup_wide_pane_vc_t

0xe11d,	// (0x0003d3de) aid_fshwr2_btn_pane_ParamLimits

0xe131,	// (0x0003d3f2) aid_fshwr2_syb_pane_ParamLimits

0xe145,	// (0x0003d406) aid_fshwr2_txt_pane_ParamLimits

0x563b,	// (0x000348fc) fshwr2_bg_pane_ParamLimits

0xe155,	// (0x0003d416) fshwr2_func_candi_pane_ParamLimits

0xe16d,	// (0x0003d42e) fshwr2_hwr_syb_pane_ParamLimits

0xe185,	// (0x0003d446) fshwr2_icf_pane_ParamLimits

0x2095,	// (0x00031356) list_double_graphic_pane_vc_g4_ParamLimits

0x2095,	// (0x00031356) list_double_graphic_pane_vc_g4

0x4d86,	// (0x00034047) cell_ituss_key_pane_g3_ParamLimits

0x4d86,	// (0x00034047) cell_ituss_key_pane_g3

0x4eb4,	// (0x00034175) cell_ituss_key_t5_ParamLimits

0x4eb4,	// (0x00034175) cell_ituss_key_t5

0xe3c2,	// (0x0003d683) popup_fep_vkbss_window_ParamLimits

0xde40,	// (0x0003d101) aid_cell_ai5_quarter

0xe44d,	// (0x0003d70e) icf_edit_indi_pane_t1_ParamLimits

0x523c,	// (0x000344fd) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x523c,	// (0x000344fd) aid_tch_indicator_popup_pane_cp2

0x524f,	// (0x00034510) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x524f,	// (0x00034510) aid_tch_query_popup_data_pane_cp2

0x6780,	// (0x00035a41) aid_tch_query_popup_pane_ParamLimits

0x6780,	// (0x00035a41) aid_tch_query_popup_pane

0x6780,	// (0x00035a41) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x6780,	// (0x00035a41) aid_tch_query_popup_data_pane_cp1

0x61fd,	// (0x000354be) cell_fshwr2_syb_bg_pane_ParamLimits

0xe29c,	// (0x0003d55d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe2b0,	// (0x0003d571) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe3b4,	// (0x0003d675) popup_fep_vkb_icf_pane_ParamLimits

0xdd1d,	// (0x0003cfde) bg_popup_fep_char_preview_window_g10

0xdf08,	// (0x0003d1c9) cell_ai5_widget_pane_g11_ParamLimits

0xdf08,	// (0x0003d1c9) cell_ai5_widget_pane_g11

0xdf14,	// (0x0003d1d5) cell_ai5_widget_pane_g12_ParamLimits

0xdf14,	// (0x0003d1d5) cell_ai5_widget_pane_g12

0xdf20,	// (0x0003d1e1) cell_ai5_widget_pane_g13_ParamLimits

0xdf20,	// (0x0003d1e1) cell_ai5_widget_pane_g13

0xe01e,	// (0x0003d2df) cell_ai5_widget_pane_t11_ParamLimits

0xe01e,	// (0x0003d2df) cell_ai5_widget_pane_t11

0xe030,	// (0x0003d2f1) cell_ai5_widget_pane_t12_ParamLimits

0xe030,	// (0x0003d2f1) cell_ai5_widget_pane_t12

0x4d92,	// (0x00034053) cell_ituss_key_pane_g4_ParamLimits

0x4d92,	// (0x00034053) cell_ituss_key_pane_g4

0x4dae,	// (0x0003406f) cell_ituss_key_pane_g5_ParamLimits

0x4dae,	// (0x0003406f) cell_ituss_key_pane_g5

0x4dca,	// (0x0003408b) cell_ituss_key_pane_g6_ParamLimits

0x4dca,	// (0x0003408b) cell_ituss_key_pane_g6

0x63c6,	// (0x00035687) bg_icf_pane_g1

0xe3d8,	// (0x0003d699) bg_icf_pane_g2

0xe3e2,	// (0x0003d6a3) bg_icf_pane_g3

0xe3ea,	// (0x0003d6ab) bg_icf_pane_g4

0xe3f4,	// (0x0003d6b5) bg_icf_pane_g5

0xe3fe,	// (0x0003d6bf) bg_icf_pane_g6

0xe408,	// (0x0003d6c9) bg_icf_pane_g7

0xe410,	// (0x0003d6d1) bg_icf_pane_g8

0xe41a,	// (0x0003d6db) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x0003f19a) bg_icf_pane_g

0xee01,	// (0x0003e0c2) popup_hyb_candi_window_ParamLimits

0xee01,	// (0x0003e0c2) popup_hyb_candi_window

0x6446,	// (0x00035707) bg_popup_sub_pane_cp01_ParamLimits

0x6446,	// (0x00035707) bg_popup_sub_pane_cp01

0xf017,	// (0x0003e2d8) entry_hyb_candi_pane_ParamLimits

0xf017,	// (0x0003e2d8) entry_hyb_candi_pane

0xf026,	// (0x0003e2e7) grid_hyb_candi_pane_ParamLimits

0xf026,	// (0x0003e2e7) grid_hyb_candi_pane

0xf03b,	// (0x0003e2fc) grid_hyb_phrase_pane_ParamLimits

0xf03b,	// (0x0003e2fc) grid_hyb_phrase_pane

0xf04a,	// (0x0003e30b) cell_hyb_candi_pane_ParamLimits

0xf04a,	// (0x0003e30b) cell_hyb_candi_pane

0xf062,	// (0x0003e323) cell_hyb_candi_scroll_pane

0x5b48,	// (0x00034e09) cell_hyb_candi_pane_g1

0xf06b,	// (0x0003e32c) cell_hyb_candi_pane_t1

0xf079,	// (0x0003e33a) cell_hyb_phrase_pane

0x5b48,	// (0x00034e09) cell_hyb_phrase_pane_g1

0xf082,	// (0x0003e343) cell_hyb_phrase_pane_t1

0xf090,	// (0x0003e351) entry_hyb_candi_pane_t1

0x5fe1,	// (0x000352a2) input_focus_pane_cp06

0xf09e,	// (0x0003e35f) cell_hyb_candi_scroll_pane_g1

0xf0a6,	// (0x0003e367) cell_hyb_candi_scroll_pane_g1_aid

0xf0ae,	// (0x0003e36f) cell_hyb_candi_scroll_pane_g2

0xf0b6,	// (0x0003e377) cell_hyb_candi_scroll_pane_g2_aid

0xf0be,	// (0x0003e37f) cell_hyb_candi_scroll_pane_g3

0xf0c6,	// (0x0003e387) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large

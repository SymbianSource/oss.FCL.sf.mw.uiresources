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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00026df4 };

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
0x90d5,	// (0x0002fec9) Screen

0x90e7,	// (0x0002fedb) application_window_ParamLimits

0x90e7,	// (0x0002fedb) application_window

0x90ff,	// (0x0002fef3) screen_g1

0x9129,	// (0x0002ff1d) area_bottom_pane_ParamLimits

0x9129,	// (0x0002ff1d) area_bottom_pane

0x91d4,	// (0x0002ffc8) area_top_pane_ParamLimits

0x91d4,	// (0x0002ffc8) area_top_pane

0x4dba,	// (0x0002bbae) main_pane_ParamLimits

0x4dba,	// (0x0002bbae) main_pane

0x924c,	// (0x00030040) misc_graphics

0xa78e,	// (0x00031582) battery_pane_ParamLimits

0xa78e,	// (0x00031582) battery_pane

0xe2cf,	// (0x000350c3) bg_status_flat_pane_g8

0xe2d7,	// (0x000350cb) bg_status_flat_pane_g9

0xd8f5,	// (0x000346e9) context_pane_ParamLimits

0xd8f5,	// (0x000346e9) context_pane

0xa8e8,	// (0x000316dc) navi_pane_ParamLimits

0xa8e8,	// (0x000316dc) navi_pane

0xa95d,	// (0x00031751) signal_pane_ParamLimits

0xa95d,	// (0x00031751) signal_pane

0x0008,

0xf8ab,	// (0x0003669f) bg_status_flat_pane_g

0xa9e9,	// (0x000317dd) status_pane_g1_ParamLimits

0xa9e9,	// (0x000317dd) status_pane_g1

0xa9f5,	// (0x000317e9) status_pane_g2_ParamLimits

0xa9f5,	// (0x000317e9) status_pane_g2

0xd95b,	// (0x0003474f) status_pane_g3_ParamLimits

0xd95b,	// (0x0003474f) status_pane_g3

0x0004,

0xf7e5,	// (0x000365d9) status_pane_g_ParamLimits

0xf7e5,	// (0x000365d9) status_pane_g

0xaa01,	// (0x000317f5) title_pane_ParamLimits

0xaa01,	// (0x000317f5) title_pane

0xaa5c,	// (0x00031850) uni_indicator_pane_ParamLimits

0xaa5c,	// (0x00031850) uni_indicator_pane

0xd757,	// (0x0003454b) bg_list_pane_ParamLimits

0xd757,	// (0x0003454b) bg_list_pane

0xa156,	// (0x00030f4a) find_pane

0xa15e,	// (0x00030f52) listscroll_app_pane_ParamLimits

0xa15e,	// (0x00030f52) listscroll_app_pane

0xd777,	// (0x0003456b) listscroll_form_pane

0xa16a,	// (0x00030f5e) listscroll_gen_pane_ParamLimits

0xa16a,	// (0x00030f5e) listscroll_gen_pane

0xd777,	// (0x0003456b) listscroll_set_pane

0xa17f,	// (0x00030f73) main_idle_act_pane

0xd535,	// (0x00034329) main_idle_trad_pane

0xd535,	// (0x00034329) main_list_empty_pane

0xcd0a,	// (0x00033afe) main_midp_pane

0xd791,	// (0x00034585) main_pane_g1_ParamLimits

0xd791,	// (0x00034585) main_pane_g1

0xa192,	// (0x00030f86) popup_ai_message_window_ParamLimits

0xa192,	// (0x00030f86) popup_ai_message_window

0xa216,	// (0x0003100a) popup_fep_china_uni_window_ParamLimits

0xa216,	// (0x0003100a) popup_fep_china_uni_window

0xd7c1,	// (0x000345b5) popup_fep_japan_candidate_window_ParamLimits

0xd7c1,	// (0x000345b5) popup_fep_japan_candidate_window

0xd7df,	// (0x000345d3) popup_fep_japan_predictive_window_ParamLimits

0xd7df,	// (0x000345d3) popup_fep_japan_predictive_window

0xa254,	// (0x00031048) popup_find_window

0xa26d,	// (0x00031061) popup_grid_graphic_window_ParamLimits

0xa26d,	// (0x00031061) popup_grid_graphic_window

0xd80b,	// (0x000345ff) popup_large_graphic_colour_window

0xa2e9,	// (0x000310dd) popup_menu_window_ParamLimits

0xa2e9,	// (0x000310dd) popup_menu_window

0xa447,	// (0x0003123b) popup_note_image_window

0xa40f,	// (0x00031203) popup_note_wait_window_ParamLimits

0xa40f,	// (0x00031203) popup_note_wait_window

0xa45d,	// (0x00031251) popup_note_window_ParamLimits

0xa45d,	// (0x00031251) popup_note_window

0xa4f1,	// (0x000312e5) popup_query_code_window_ParamLimits

0xa4f1,	// (0x000312e5) popup_query_code_window

0xd82a,	// (0x0003461e) popup_query_data_code_window_ParamLimits

0xd82a,	// (0x0003461e) popup_query_data_code_window

0xa529,	// (0x0003131d) popup_query_data_window_ParamLimits

0xa529,	// (0x0003131d) popup_query_data_window

0xa59d,	// (0x00031391) popup_query_sat_info_window_ParamLimits

0xa59d,	// (0x00031391) popup_query_sat_info_window

0xa62a,	// (0x0003141e) popup_snote_single_graphic_window_ParamLimits

0xa62a,	// (0x0003141e) popup_snote_single_graphic_window

0xa62a,	// (0x0003141e) popup_snote_single_text_window_ParamLimits

0xa62a,	// (0x0003141e) popup_snote_single_text_window

0xd83f,	// (0x00034633) popup_sub_window_general

0xd881,	// (0x00034675) popup_window_general_ParamLimits

0xd881,	// (0x00034675) popup_window_general

0xd894,	// (0x00034688) power_save_pane

0x9fff,	// (0x00030df3) control_pane_g1_ParamLimits

0x9fff,	// (0x00030df3) control_pane_g1

0x5520,	// (0x0002c314) control_pane_g2_ParamLimits

0x5520,	// (0x0002c314) control_pane_g2

0xd741,	// (0x00034535) control_pane_g3_ParamLimits

0xd741,	// (0x00034535) control_pane_g3

0x0007,

0xf7cd,	// (0x000365c1) control_pane_g_ParamLimits

0xf7cd,	// (0x000365c1) control_pane_g

0xa05c,	// (0x00030e50) control_pane_t1_ParamLimits

0xa05c,	// (0x00030e50) control_pane_t1

0xa0b8,	// (0x00030eac) control_pane_t2_ParamLimits

0xa0b8,	// (0x00030eac) control_pane_t2

0x0002,

0xf7de,	// (0x000365d2) control_pane_t_ParamLimits

0xf7de,	// (0x000365d2) control_pane_t

0xd664,	// (0x00034458) navi_navi_volume_pane_cp1

0xd66d,	// (0x00034461) status_small_icon_pane

0xd675,	// (0x00034469) status_small_pane_g1_ParamLimits

0xd675,	// (0x00034469) status_small_pane_g1

0xd6a9,	// (0x0003449d) status_small_pane_g2_ParamLimits

0xd6a9,	// (0x0003449d) status_small_pane_g2

0xd6b5,	// (0x000344a9) status_small_pane_g3_ParamLimits

0xd6b5,	// (0x000344a9) status_small_pane_g3

0xd6c1,	// (0x000344b5) status_small_pane_g4_ParamLimits

0xd6c1,	// (0x000344b5) status_small_pane_g4

0xd6cd,	// (0x000344c1) status_small_pane_g5_ParamLimits

0xd6cd,	// (0x000344c1) status_small_pane_g5

0xd6da,	// (0x000344ce) status_small_pane_g6_ParamLimits

0xd6da,	// (0x000344ce) status_small_pane_g6

0x0007,

0xf7bc,	// (0x000365b0) status_small_pane_g_ParamLimits

0xf7bc,	// (0x000365b0) status_small_pane_g

0xd70a,	// (0x000344fe) status_small_pane_t1

0xd72d,	// (0x00034521) status_small_wait_pane_ParamLimits

0xd72d,	// (0x00034521) status_small_wait_pane

0x9eb5,	// (0x00030ca9) aid_levels_signal_ParamLimits

0x9eb5,	// (0x00030ca9) aid_levels_signal

0x9ec9,	// (0x00030cbd) signal_pane_g1_ParamLimits

0x9ec9,	// (0x00030cbd) signal_pane_g1

0x9ee3,	// (0x00030cd7) signal_pane_g2_ParamLimits

0x9ee3,	// (0x00030cd7) signal_pane_g2

0x0001,

0xf751,	// (0x00036545) signal_pane_g_ParamLimits

0xf751,	// (0x00036545) signal_pane_g

0xd0da,	// (0x00033ece) context_pane_g1

0x92fb,	// (0x000300ef) title_pane_g1

0x9349,	// (0x0003013d) title_pane_t1

0x93d6,	// (0x000301ca) title_pane_t2

0x93fc,	// (0x000301f0) title_pane_t3

0x0002,

0xf59b,	// (0x0003638f) title_pane_t

0xaa82,	// (0x00031876) aid_levels_battery_ParamLimits

0xaa82,	// (0x00031876) aid_levels_battery

0xaa9a,	// (0x0003188e) battery_pane_g1_ParamLimits

0xaa9a,	// (0x0003188e) battery_pane_g1

0xaab5,	// (0x000318a9) battery_pane_g2_ParamLimits

0xaab5,	// (0x000318a9) battery_pane_g2

0x0001,

0xf7f0,	// (0x000365e4) battery_pane_g_ParamLimits

0xf7f0,	// (0x000365e4) battery_pane_g

0xae24,	// (0x00031c18) uni_indicator_pane_g1

0xae39,	// (0x00031c2d) uni_indicator_pane_g2

0xae4f,	// (0x00031c43) uni_indicator_pane_g3

0x0005,

0xf953,	// (0x00036747) uni_indicator_pane_g

0xcc2e,	// (0x00033a22) navi_icon_pane_ParamLimits

0xcc2e,	// (0x00033a22) navi_icon_pane

0x924c,	// (0x00030040) navi_midp_pane

0x924c,	// (0x00030040) navi_navi_pane

0xcc2e,	// (0x00033a22) navi_text_pane_ParamLimits

0xcc2e,	// (0x00033a22) navi_text_pane

0x90ff,	// (0x0002fef3) status_small_wait_pane_g1

0x9941,	// (0x00030735) status_small_wait_pane_g2

0x0001,

0xf94e,	// (0x00036742) status_small_wait_pane_g

0xadca,	// (0x00031bbe) navi_navi_icon_text_pane

0xadd2,	// (0x00031bc6) navi_navi_pane_g1_ParamLimits

0xadd2,	// (0x00031bc6) navi_navi_pane_g1

0xade4,	// (0x00031bd8) navi_navi_pane_g2_ParamLimits

0xade4,	// (0x00031bd8) navi_navi_pane_g2

0x0001,

0xf91c,	// (0x00036710) navi_navi_pane_g_ParamLimits

0xf91c,	// (0x00036710) navi_navi_pane_g

0xadf6,	// (0x00031bea) navi_navi_tabs_pane

0xadca,	// (0x00031bbe) navi_navi_text_pane

0xadca,	// (0x00031bbe) navi_navi_volume_pane

0xe815,	// (0x00035609) navi_text_pane_t1

0xe809,	// (0x000355fd) navi_icon_pane_g1

0xe75d,	// (0x00035551) navi_navi_text_pane_t1

0x58a6,	// (0x0002c69a) navi_navi_volume_pane_g1

0xadc1,	// (0x00031bb5) volume_small_pane

0xad1d,	// (0x00031b11) navi_navi_icon_text_pane_g1

0xad25,	// (0x00031b19) navi_navi_icon_text_pane_t1

0xe317,	// (0x0003510b) navi_tabs_2_long_pane

0xe317,	// (0x0003510b) navi_tabs_2_pane

0xe317,	// (0x0003510b) navi_tabs_3_long_pane

0xe317,	// (0x0003510b) navi_tabs_3_pane

0xe317,	// (0x0003510b) navi_tabs_4_pane

0xacfd,	// (0x00031af1) tabs_2_active_pane_ParamLimits

0xacfd,	// (0x00031af1) tabs_2_active_pane

0xad0d,	// (0x00031b01) tabs_2_passive_pane_ParamLimits

0xad0d,	// (0x00031b01) tabs_2_passive_pane

0xaccb,	// (0x00031abf) tabs_3_active_pane_ParamLimits

0xaccb,	// (0x00031abf) tabs_3_active_pane

0xacdb,	// (0x00031acf) tabs_3_passive_pane_ParamLimits

0xacdb,	// (0x00031acf) tabs_3_passive_pane

0xacec,	// (0x00031ae0) tabs_3_passive_pane_cp_ParamLimits

0xacec,	// (0x00031ae0) tabs_3_passive_pane_cp

0xac87,	// (0x00031a7b) tabs_4_active_pane_ParamLimits

0xac87,	// (0x00031a7b) tabs_4_active_pane

0xac98,	// (0x00031a8c) tabs_4_passive_pane_ParamLimits

0xac98,	// (0x00031a8c) tabs_4_passive_pane

0xaca9,	// (0x00031a9d) tabs_4_passive_pane_cp_ParamLimits

0xaca9,	// (0x00031a9d) tabs_4_passive_pane_cp

0xacba,	// (0x00031aae) tabs_4_passive_pane_cp2_ParamLimits

0xacba,	// (0x00031aae) tabs_4_passive_pane_cp2

0xac67,	// (0x00031a5b) tabs_2_long_active_pane_ParamLimits

0xac67,	// (0x00031a5b) tabs_2_long_active_pane

0xac77,	// (0x00031a6b) tabs_2_long_passive_pane_ParamLimits

0xac77,	// (0x00031a6b) tabs_2_long_passive_pane

0xac30,	// (0x00031a24) tabs_3_long_active_pane_ParamLimits

0xac30,	// (0x00031a24) tabs_3_long_active_pane

0xac43,	// (0x00031a37) tabs_3_long_passive_pane_ParamLimits

0xac43,	// (0x00031a37) tabs_3_long_passive_pane

0xac54,	// (0x00031a48) tabs_3_long_passive_pane_cp_ParamLimits

0xac54,	// (0x00031a48) tabs_3_long_passive_pane_cp

0x5761,	// (0x0002c555) volume_small_pane_g1

0x576a,	// (0x0002c55e) volume_small_pane_g2

0x5773,	// (0x0002c567) volume_small_pane_g3

0x577c,	// (0x0002c570) volume_small_pane_g4

0x5785,	// (0x0002c579) volume_small_pane_g5

0x578e,	// (0x0002c582) volume_small_pane_g6

0x5797,	// (0x0002c58b) volume_small_pane_g7

0x57a0,	// (0x0002c594) volume_small_pane_g8

0x57a9,	// (0x0002c59d) volume_small_pane_g9

0x57b2,	// (0x0002c5a6) volume_small_pane_g10

0x0009,

0xf8e8,	// (0x000366dc) volume_small_pane_g

0x940e,	// (0x00030202) bg_active_tab_pane_cp2_ParamLimits

0x940e,	// (0x00030202) bg_active_tab_pane_cp2

0x941c,	// (0x00030210) tabs_3_active_pane_g1

0x9424,	// (0x00030218) tabs_3_active_pane_t1

0x940e,	// (0x00030202) bg_passive_tab_pane_cp2_ParamLimits

0x940e,	// (0x00030202) bg_passive_tab_pane_cp2

0x941c,	// (0x00030210) tabs_3_passive_pane_g1

0x9424,	// (0x00030218) tabs_3_passive_pane_t1

0x940e,	// (0x00030202) bg_active_tab_pane_cp3_ParamLimits

0x940e,	// (0x00030202) bg_active_tab_pane_cp3

0xdcb4,	// (0x00034aa8) tabs_4_active_pane_g1

0x943a,	// (0x0003022e) tabs_4_active_pane_t1

0x940e,	// (0x00030202) bg_passive_tab_pane_cp3_ParamLimits

0x940e,	// (0x00030202) bg_passive_tab_pane_cp3

0xdcb4,	// (0x00034aa8) tabs_4_1_passive_pane_g1

0x943a,	// (0x0003022e) tabs_4_1_passive_pane_t1

0xcd0a,	// (0x00033afe) list_highlight_pane_cp2

0xaf0b,	// (0x00031cff) list_set_pane_ParamLimits

0xaf0b,	// (0x00031cff) list_set_pane

0xaf99,	// (0x00031d8d) main_pane_set_t1_ParamLimits

0xaf99,	// (0x00031d8d) main_pane_set_t1

0xafb9,	// (0x00031dad) main_pane_set_t2_ParamLimits

0xafb9,	// (0x00031dad) main_pane_set_t2

0xafcd,	// (0x00031dc1) main_pane_set_t3_ParamLimits

0xafcd,	// (0x00031dc1) main_pane_set_t3

0xafdf,	// (0x00031dd3) main_pane_set_t4_ParamLimits

0xafdf,	// (0x00031dd3) main_pane_set_t4

0x0003,

0xf9b8,	// (0x000367ac) main_pane_set_t_ParamLimits

0xf9b8,	// (0x000367ac) main_pane_set_t

0xaff1,	// (0x00031de5) setting_code_pane

0xaff9,	// (0x00031ded) setting_slider_graphic_pane

0xaff9,	// (0x00031ded) setting_slider_pane

0xaff9,	// (0x00031ded) setting_text_pane

0xaff9,	// (0x00031ded) setting_volume_pane

0x9450,	// (0x00030244) volume_set_pane

0x9458,	// (0x0003024c) bg_set_opt_pane_cp

0x9466,	// (0x0003025a) setting_slider_pane_t1

0x947c,	// (0x00030270) setting_slider_pane_t2

0x9495,	// (0x00030289) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00036396) setting_slider_pane_t

0x94ac,	// (0x000302a0) slider_set_pane

0x924c,	// (0x00030040) bg_set_opt_pane_cp2

0x94c2,	// (0x000302b6) setting_slider_graphic_pane_g1

0x94cb,	// (0x000302bf) setting_slider_graphic_pane_t1

0x94da,	// (0x000302ce) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0003639d) setting_slider_graphic_pane_t

0x94e9,	// (0x000302dd) slider_set_pane_cp

0x924c,	// (0x00030040) input_focus_pane_cp1

0xec65,	// (0x00035a59) list_set_text_pane

0x90ff,	// (0x0002fef3) setting_text_pane_g1

0x924c,	// (0x00030040) input_focus_pane_cp2

0x90ff,	// (0x0002fef3) setting_code_pane_g1

0x94f1,	// (0x000302e5) setting_code_pane_t1

0x8908,	// (0x0002f6fc) set_text_pane_t1_ParamLimits

0x8908,	// (0x0002f6fc) set_text_pane_t1

0xcbdd,	// (0x000339d1) set_opt_bg_pane_g1

0xcbe5,	// (0x000339d9) set_opt_bg_pane_g2

0xaecb,	// (0x00031cbf) set_opt_bg_pane_g3

0xcbf5,	// (0x000339e9) set_opt_bg_pane_g4

0xcbfd,	// (0x000339f1) set_opt_bg_pane_g5

0xcc05,	// (0x000339f9) set_opt_bg_pane_g6

0xaed3,	// (0x00031cc7) set_opt_bg_pane_g7

0xaedb,	// (0x00031ccf) set_opt_bg_pane_g8

0xaee3,	// (0x00031cd7) set_opt_bg_pane_g9

0x0008,

0xf9a5,	// (0x00036799) set_opt_bg_pane_g

0xec58,	// (0x00035a4c) slider_set_pane_g1

0x5907,	// (0x0002c6fb) slider_set_pane_g2

0x0006,

0xf996,	// (0x0003678a) slider_set_pane_g

0xae65,	// (0x00031c59) volume_set_pane_g1

0xae6d,	// (0x00031c61) volume_set_pane_g2

0xae75,	// (0x00031c69) volume_set_pane_g3

0xae7d,	// (0x00031c71) volume_set_pane_g4

0xae85,	// (0x00031c79) volume_set_pane_g5

0xae8d,	// (0x00031c81) volume_set_pane_g6

0xae95,	// (0x00031c89) volume_set_pane_g7

0xae9d,	// (0x00031c91) volume_set_pane_g8

0xaea5,	// (0x00031c99) volume_set_pane_g9

0xaead,	// (0x00031ca1) volume_set_pane_g10

0x0009,

0xf96e,	// (0x00036762) volume_set_pane_g

0x94ff,	// (0x000302f3) indicator_pane_ParamLimits

0x94ff,	// (0x000302f3) indicator_pane

0x9527,	// (0x0003031b) main_idle_pane_g2_ParamLimits

0x9527,	// (0x0003031b) main_idle_pane_g2

0x9557,	// (0x0003034b) main_pane_idle_g1_ParamLimits

0x9557,	// (0x0003034b) main_pane_idle_g1

0x957c,	// (0x00030370) popup_clock_digital_analogue_window_ParamLimits

0x957c,	// (0x00030370) popup_clock_digital_analogue_window

0x9593,	// (0x00030387) soft_indicator_pane_ParamLimits

0x9593,	// (0x00030387) soft_indicator_pane

0x95ad,	// (0x000303a1) wallpaper_pane_ParamLimits

0x95ad,	// (0x000303a1) wallpaper_pane

0x90ff,	// (0x0002fef3) wallpaper_pane_g1

0x95c7,	// (0x000303bb) indicator_pane_g1_ParamLimits

0x95c7,	// (0x000303bb) indicator_pane_g1

0xed5f,	// (0x00035b53) navi_navi_icon_text_pane_srt_g1

0x95ef,	// (0x000303e3) soft_indicator_pane_t1

0x9609,	// (0x000303fd) aid_ps_area_pane

0x961a,	// (0x0003040e) aid_ps_clock_pane

0x9626,	// (0x0003041a) aid_ps_indicator_pane

0x9632,	// (0x00030426) indicator_ps_pane_ParamLimits

0x9632,	// (0x00030426) indicator_ps_pane

0x9641,	// (0x00030435) power_save_pane_g1_ParamLimits

0x9641,	// (0x00030435) power_save_pane_g1

0x964d,	// (0x00030441) power_save_pane_g2_ParamLimits

0x964d,	// (0x00030441) power_save_pane_g2

0x4d36,	// (0x0002bb2a) aid_navinavi_width_pane

0x9609,	// (0x000303fd) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x000363a2) power_save_pane_g_ParamLimits

0xf5ae,	// (0x000363a2) power_save_pane_g

0x965b,	// (0x0003044f) power_save_pane_t1_ParamLimits

0x965b,	// (0x0003044f) power_save_pane_t1

0x961a,	// (0x0003040e) aid_ps_clock_pane_ParamLimits

0x9626,	// (0x0003041a) aid_ps_indicator_pane_ParamLimits

0x966d,	// (0x00030461) power_save_pane_t4_ParamLimits

0x966d,	// (0x00030461) power_save_pane_t4

0x0001,

0xf5b3,	// (0x000363a7) power_save_pane_t_ParamLimits

0xf5b3,	// (0x000363a7) power_save_pane_t

0x9697,	// (0x0003048b) power_save_t3_ParamLimits

0x9697,	// (0x0003048b) power_save_t3

0x9682,	// (0x00030476) power_save_t2_ParamLimits

0x9682,	// (0x00030476) power_save_t2

0x96ac,	// (0x000304a0) indicator_ps_pane_g1

0x96b5,	// (0x000304a9) ai_gene_pane_ParamLimits

0x96b5,	// (0x000304a9) ai_gene_pane

0x96cc,	// (0x000304c0) ai_links_pane_ParamLimits

0x96cc,	// (0x000304c0) ai_links_pane

0x96de,	// (0x000304d2) indicator_pane_cp1_ParamLimits

0x96de,	// (0x000304d2) indicator_pane_cp1

0x96ed,	// (0x000304e1) main_pane_idle_g1_cp_ParamLimits

0x96ed,	// (0x000304e1) main_pane_idle_g1_cp

0x9705,	// (0x000304f9) popup_ai_links_title_window

0x970e,	// (0x00030502) soft_indicator_pane_cp1_ParamLimits

0x970e,	// (0x00030502) soft_indicator_pane_cp1

0xea9a,	// (0x0003588e) ai_links_pane_g1

0xeaa3,	// (0x00035897) grid_ai_links_pane

0xae1b,	// (0x00031c0f) ai_gene_pane_1

0xea88,	// (0x0003587c) ai_gene_pane_2

0xea91,	// (0x00035885) list_highlight_pane_cp4

0xadff,	// (0x00031bf3) cell_ai_link_pane_ParamLimits

0xadff,	// (0x00031bf3) cell_ai_link_pane

0xea80,	// (0x00035874) cell_ai_link_pane_g1

0x9941,	// (0x00030735) cell_ai_link_pane_g2

0x0001,

0xf949,	// (0x0003673d) cell_ai_link_pane_g

0x924c,	// (0x00030040) grid_highlight_cp2

0x924c,	// (0x00030040) bg_popup_sub_pane_cp1

0x9730,	// (0x00030524) popup_ai_links_title_window_t1

0xe9d2,	// (0x000357c6) ai_gene_pane_1_g1_ParamLimits

0xe9d2,	// (0x000357c6) ai_gene_pane_1_g1

0xe9de,	// (0x000357d2) ai_gene_pane_1_g2_ParamLimits

0xe9de,	// (0x000357d2) ai_gene_pane_1_g2

0x0001,

0xf93f,	// (0x00036733) ai_gene_pane_1_g_ParamLimits

0xf93f,	// (0x00036733) ai_gene_pane_1_g

0xe9eb,	// (0x000357df) ai_gene_pane_1_t1_ParamLimits

0xe9eb,	// (0x000357df) ai_gene_pane_1_t1

0xea1f,	// (0x00035813) grid_ai_soft_ind_pane

0xe9bd,	// (0x000357b1) ai_gene_pane_2_t1_ParamLimits

0xe9bd,	// (0x000357b1) ai_gene_pane_2_t1

0x973f,	// (0x00030533) main_pane_empty_t1_ParamLimits

0x973f,	// (0x00030533) main_pane_empty_t1

0x975c,	// (0x00030550) main_pane_empty_t2_ParamLimits

0x975c,	// (0x00030550) main_pane_empty_t2

0x9774,	// (0x00030568) main_pane_empty_t3_ParamLimits

0x9774,	// (0x00030568) main_pane_empty_t3

0x9787,	// (0x0003057b) main_pane_empty_t4_ParamLimits

0x9787,	// (0x0003057b) main_pane_empty_t4

0x979a,	// (0x0003058e) main_pane_empty_t5_ParamLimits

0x979a,	// (0x0003058e) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x000363ac) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x000363ac) main_pane_empty_t

0xcc2e,	// (0x00033a22) bg_popup_window_pane_ParamLimits

0xcc2e,	// (0x00033a22) bg_popup_window_pane

0xe76c,	// (0x00035560) find_popup_pane_cp2_ParamLimits

0xe76c,	// (0x00035560) find_popup_pane_cp2

0xe778,	// (0x0003556c) heading_pane_ParamLimits

0xe778,	// (0x0003556c) heading_pane

0x924c,	// (0x00030040) bg_popup_sub_pane

0xad42,	// (0x00031b36) bg_popup_window_pane_g1_ParamLimits

0xad42,	// (0x00031b36) bg_popup_window_pane_g1

0xad51,	// (0x00031b45) bg_popup_window_pane_g2_ParamLimits

0xad51,	// (0x00031b45) bg_popup_window_pane_g2

0xad5d,	// (0x00031b51) bg_popup_window_pane_g3_ParamLimits

0xad5d,	// (0x00031b51) bg_popup_window_pane_g3

0xad69,	// (0x00031b5d) bg_popup_window_pane_g4_ParamLimits

0xad69,	// (0x00031b5d) bg_popup_window_pane_g4

0xad78,	// (0x00031b6c) bg_popup_window_pane_g5_ParamLimits

0xad78,	// (0x00031b6c) bg_popup_window_pane_g5

0xad88,	// (0x00031b7c) bg_popup_window_pane_g6_ParamLimits

0xad88,	// (0x00031b7c) bg_popup_window_pane_g6

0xad94,	// (0x00031b88) bg_popup_window_pane_g7_ParamLimits

0xad94,	// (0x00031b88) bg_popup_window_pane_g7

0xada3,	// (0x00031b97) bg_popup_window_pane_g8_ParamLimits

0xada3,	// (0x00031b97) bg_popup_window_pane_g8

0xadb2,	// (0x00031ba6) bg_popup_window_pane_g9_ParamLimits

0xadb2,	// (0x00031ba6) bg_popup_window_pane_g9

0xe751,	// (0x00035545) bg_popup_window_pane_g10_ParamLimits

0xe751,	// (0x00035545) bg_popup_window_pane_g10

0x0009,

0xf907,	// (0x000366fb) bg_popup_window_pane_g_ParamLimits

0xf907,	// (0x000366fb) bg_popup_window_pane_g

0xe708,	// (0x000354fc) bg_popup_heading_pane_ParamLimits

0xe708,	// (0x000354fc) bg_popup_heading_pane

0x5976,	// (0x0002c76a) tabs_4_passive_pane_cp_srt_ParamLimits

0x5976,	// (0x0002c76a) tabs_4_passive_pane_cp_srt

0x5988,	// (0x0002c77c) tabs_4_passive_pane_srt_ParamLimits

0xe71c,	// (0x00035510) heading_pane_g2

0x5988,	// (0x0002c77c) tabs_4_passive_pane_srt

0xdb31,	// (0x00034925) bg_passive_tab_pane_cp3_srt_ParamLimits

0xdb31,	// (0x00034925) bg_passive_tab_pane_cp3_srt

0xe724,	// (0x00035518) heading_pane_t1_ParamLimits

0xe724,	// (0x00035518) heading_pane_t1

0xe73b,	// (0x0003552f) heading_pane_t2_ParamLimits

0xe73b,	// (0x0003552f) heading_pane_t2

0x0001,

0xf902,	// (0x000366f6) heading_pane_t_ParamLimits

0xf902,	// (0x000366f6) heading_pane_t

0xe297,	// (0x0003508b) bg_popup_heading_pane_g1

0xe328,	// (0x0003511c) bg_popup_heading_pane_g2

0xe330,	// (0x00035124) bg_popup_heading_pane_g3

0xe338,	// (0x0003512c) bg_popup_heading_pane_g4

0xe340,	// (0x00035134) bg_popup_heading_pane_g5

0xe348,	// (0x0003513c) bg_popup_heading_pane_g6

0xe350,	// (0x00035144) bg_popup_heading_pane_g7

0xe358,	// (0x0003514c) bg_popup_heading_pane_g8

0xe360,	// (0x00035154) bg_popup_heading_pane_g9

0x0008,

0xf8be,	// (0x000366b2) bg_popup_heading_pane_g

0xda43,	// (0x00034837) bg_popup_sub_pane_g1

0xda4b,	// (0x0003483f) bg_popup_sub_pane_g2

0xda53,	// (0x00034847) bg_popup_sub_pane_g3

0xda5b,	// (0x0003484f) bg_popup_sub_pane_g4

0xda63,	// (0x00034857) bg_popup_sub_pane_g5

0xda6b,	// (0x0003485f) bg_popup_sub_pane_g6

0xda73,	// (0x00034867) bg_popup_sub_pane_g7

0xda7b,	// (0x0003486f) bg_popup_sub_pane_g8

0xda83,	// (0x00034877) bg_popup_sub_pane_g9

0x0008,

0xf898,	// (0x0003668c) bg_popup_sub_pane_g

0x940e,	// (0x00030202) bg_popup_window_pane_cp5_ParamLimits

0x940e,	// (0x00030202) bg_popup_window_pane_cp5

0x97bb,	// (0x000305af) popup_note_window_g1_ParamLimits

0x97bb,	// (0x000305af) popup_note_window_g1

0x97c7,	// (0x000305bb) popup_note_window_t1_ParamLimits

0x97c7,	// (0x000305bb) popup_note_window_t1

0x97dd,	// (0x000305d1) popup_note_window_t2_ParamLimits

0x97dd,	// (0x000305d1) popup_note_window_t2

0x97f3,	// (0x000305e7) popup_note_window_t3_ParamLimits

0x97f3,	// (0x000305e7) popup_note_window_t3

0x9809,	// (0x000305fd) popup_note_window_t4_ParamLimits

0x9809,	// (0x000305fd) popup_note_window_t4

0x9831,	// (0x00030625) popup_note_window_t5_ParamLimits

0x9831,	// (0x00030625) popup_note_window_t5

0x0004,

0xf5c3,	// (0x000363b7) popup_note_window_t_ParamLimits

0xf5c3,	// (0x000363b7) popup_note_window_t

0x9855,	// (0x00030649) bg_popup_window_pane_cp6_ParamLimits

0x9855,	// (0x00030649) bg_popup_window_pane_cp6

0xe213,	// (0x00035007) popup_note_image_window_g1_ParamLimits

0xe213,	// (0x00035007) popup_note_image_window_g1

0xe21f,	// (0x00035013) popup_note_image_window_g2_ParamLimits

0xe21f,	// (0x00035013) popup_note_image_window_g2

0x0001,

0xf88c,	// (0x00036680) popup_note_image_window_g_ParamLimits

0xf88c,	// (0x00036680) popup_note_image_window_g

0xe238,	// (0x0003502c) popup_note_image_window_t1_ParamLimits

0xe238,	// (0x0003502c) popup_note_image_window_t1

0xe251,	// (0x00035045) popup_note_image_window_t2_ParamLimits

0xe251,	// (0x00035045) popup_note_image_window_t2

0xe26a,	// (0x0003505e) popup_note_image_window_t3_ParamLimits

0xe26a,	// (0x0003505e) popup_note_image_window_t3

0x0002,

0xf891,	// (0x00036685) popup_note_image_window_t_ParamLimits

0xf891,	// (0x00036685) popup_note_image_window_t

0xe0fe,	// (0x00034ef2) bg_popup_window_pane_cp7_ParamLimits

0xe0fe,	// (0x00034ef2) bg_popup_window_pane_cp7

0xe12e,	// (0x00034f22) popup_note_wait_window_g1_ParamLimits

0xe12e,	// (0x00034f22) popup_note_wait_window_g1

0xe13a,	// (0x00034f2e) popup_note_wait_window_g2_ParamLimits

0xe13a,	// (0x00034f2e) popup_note_wait_window_g2

0x0002,

0xf87a,	// (0x0003666e) popup_note_wait_window_g_ParamLimits

0xf87a,	// (0x0003666e) popup_note_wait_window_g

0xe152,	// (0x00034f46) popup_note_wait_window_t1_ParamLimits

0xe152,	// (0x00034f46) popup_note_wait_window_t1

0xe179,	// (0x00034f6d) popup_note_wait_window_t2_ParamLimits

0xe179,	// (0x00034f6d) popup_note_wait_window_t2

0xe196,	// (0x00034f8a) popup_note_wait_window_t3_ParamLimits

0xe196,	// (0x00034f8a) popup_note_wait_window_t3

0xe1a9,	// (0x00034f9d) popup_note_wait_window_t4_ParamLimits

0xe1a9,	// (0x00034f9d) popup_note_wait_window_t4

0x0004,

0xf881,	// (0x00036675) popup_note_wait_window_t_ParamLimits

0xf881,	// (0x00036675) popup_note_wait_window_t

0xe1ce,	// (0x00034fc2) wait_bar_pane_ParamLimits

0xe1ce,	// (0x00034fc2) wait_bar_pane

0x924c,	// (0x00030040) wait_anim_pane

0x924c,	// (0x00030040) wait_border_pane

0x90ff,	// (0x0002fef3) wait_anim_pane_g1

0x90ff,	// (0x0002fef3) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x00036540) wait_anim_pane_g

0xe0ae,	// (0x00034ea2) wait_border_pane_g1

0xe0b7,	// (0x00034eab) wait_border_pane_g2

0xe0c0,	// (0x00034eb4) wait_border_pane_g3

0x0002,

0xf873,	// (0x00036667) wait_border_pane_g

0xe010,	// (0x00034e04) bg_popup_window_pane_cp16_ParamLimits

0xe010,	// (0x00034e04) bg_popup_window_pane_cp16

0xe01e,	// (0x00034e12) indicator_popup_pane_cp4_ParamLimits

0xe01e,	// (0x00034e12) indicator_popup_pane_cp4

0xe032,	// (0x00034e26) popup_query_data_window_t1_ParamLimits

0xe032,	// (0x00034e26) popup_query_data_window_t1

0xe044,	// (0x00034e38) popup_query_data_window_t2_ParamLimits

0xe044,	// (0x00034e38) popup_query_data_window_t2

0xe05d,	// (0x00034e51) popup_query_data_window_t3_ParamLimits

0xe05d,	// (0x00034e51) popup_query_data_window_t3

0x0002,

0xf86c,	// (0x00036660) popup_query_data_window_t_ParamLimits

0xf86c,	// (0x00036660) popup_query_data_window_t

0xe077,	// (0x00034e6b) query_popup_data_pane_ParamLimits

0xe077,	// (0x00034e6b) query_popup_data_pane

0xe08b,	// (0x00034e7f) query_popup_data_pane_cp1_ParamLimits

0xe08b,	// (0x00034e7f) query_popup_data_pane_cp1

0x9855,	// (0x00030649) bg_popup_window_pane_cp10_ParamLimits

0x9855,	// (0x00030649) bg_popup_window_pane_cp10

0xdf73,	// (0x00034d67) indicator_popup_pane_ParamLimits

0xdf73,	// (0x00034d67) indicator_popup_pane

0x98ac,	// (0x000306a0) popup_query_code_window_t1_ParamLimits

0x98ac,	// (0x000306a0) popup_query_code_window_t1

0xdf8b,	// (0x00034d7f) popup_query_code_window_t2_ParamLimits

0xdf8b,	// (0x00034d7f) popup_query_code_window_t2

0xdfc9,	// (0x00034dbd) popup_query_code_window_t3_ParamLimits

0xdfc9,	// (0x00034dbd) popup_query_code_window_t3

0x0002,

0xf865,	// (0x00036659) popup_query_code_window_t_ParamLimits

0xf865,	// (0x00036659) popup_query_code_window_t

0xdff8,	// (0x00034dec) query_popup_pane_ParamLimits

0xdff8,	// (0x00034dec) query_popup_pane

0x9855,	// (0x00030649) bg_popup_window_pane_cp15_ParamLimits

0x9855,	// (0x00030649) bg_popup_window_pane_cp15

0x9873,	// (0x00030667) indicator_popup_pane_cp1_ParamLimits

0x9873,	// (0x00030667) indicator_popup_pane_cp1

0x9886,	// (0x0003067a) indicator_popup_pane_cp2_ParamLimits

0x9886,	// (0x0003067a) indicator_popup_pane_cp2

0x9899,	// (0x0003068d) popup_query_data_code_window_g1_ParamLimits

0x9899,	// (0x0003068d) popup_query_data_code_window_g1

0x98ac,	// (0x000306a0) popup_query_data_code_window_t1_ParamLimits

0x98ac,	// (0x000306a0) popup_query_data_code_window_t1

0x98be,	// (0x000306b2) popup_query_data_code_window_t2_ParamLimits

0x98be,	// (0x000306b2) popup_query_data_code_window_t2

0x98d0,	// (0x000306c4) popup_query_data_code_window_t3_ParamLimits

0x98d0,	// (0x000306c4) popup_query_data_code_window_t3

0x98e6,	// (0x000306da) popup_query_data_code_window_t4_ParamLimits

0x98e6,	// (0x000306da) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x000363c2) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x000363c2) popup_query_data_code_window_t

0xd3b6,	// (0x000341aa) list_single_midp_graphic_pane_g3

0x98fe,	// (0x000306f2) query_popup_data_pane_cp2_ParamLimits

0x9911,	// (0x00030705) query_popup_pane_cp2_ParamLimits

0x9911,	// (0x00030705) query_popup_pane_cp2

0x924c,	// (0x00030040) bg_popup_window_pane_cp11

0xdf47,	// (0x00034d3b) heading_pane_cp5

0x99f5,	// (0x000307e9) listscroll_popup_info_pane

0x924c,	// (0x00030040) input_focus_pane_cp3

0x9924,	// (0x00030718) query_popup_pane_t1

0x9932,	// (0x00030726) list_popup_info_pane_ParamLimits

0x9932,	// (0x00030726) list_popup_info_pane

0x9941,	// (0x00030735) listscroll_popup_info_pane_g1

0x9949,	// (0x0003073d) scroll_pane_cp7

0x9951,	// (0x00030745) popup_info_list_pane_t1_ParamLimits

0x9951,	// (0x00030745) popup_info_list_pane_t1

0x996b,	// (0x0003075f) popup_info_list_pane_t2_ParamLimits

0x996b,	// (0x0003075f) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x000363cb) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x000363cb) popup_info_list_pane_t

0x924c,	// (0x00030040) bg_popup_window_pane_cp12

0xed79,	// (0x00035b6d) find_popup_pane

0x9458,	// (0x0003024c) bg_popup_window_pane_cp3

0x9985,	// (0x00030779) heading_pane_cp3

0x9991,	// (0x00030785) listscroll_popup_graphic_pane

0x924c,	// (0x00030040) bg_popup_window_pane_cp4

0x99ed,	// (0x000307e1) heading_pane_cp4

0x99f5,	// (0x000307e9) listscroll_popup_colour_pane

0x99fd,	// (0x000307f1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x99fd,	// (0x000307f1) cell_large_graphic_colour_none_popup_pane

0x9a0d,	// (0x00030801) grid_large_graphic_colour_popup_pane_ParamLimits

0x9a0d,	// (0x00030801) grid_large_graphic_colour_popup_pane

0x9a29,	// (0x0003081d) listscroll_popup_colour_pane_g1_ParamLimits

0x9a29,	// (0x0003081d) listscroll_popup_colour_pane_g1

0x9a40,	// (0x00030834) listscroll_popup_colour_pane_g2_ParamLimits

0x9a40,	// (0x00030834) listscroll_popup_colour_pane_g2

0x9a54,	// (0x00030848) listscroll_popup_colour_pane_g3_ParamLimits

0x9a54,	// (0x00030848) listscroll_popup_colour_pane_g3

0x9a64,	// (0x00030858) listscroll_popup_colour_pane_g4_ParamLimits

0x9a64,	// (0x00030858) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x000363d0) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x000363d0) listscroll_popup_colour_pane_g

0x9a73,	// (0x00030867) scroll_pane_cp6_ParamLimits

0x9a73,	// (0x00030867) scroll_pane_cp6

0x9a85,	// (0x00030879) cell_large_graphic_colour_popup_pane_ParamLimits

0x9a85,	// (0x00030879) cell_large_graphic_colour_popup_pane

0x9aa4,	// (0x00030898) cell_large_graphic_colour_none_popup_pane_t1

0x924c,	// (0x00030040) grid_highlight_pane_cp5

0x9ab3,	// (0x000308a7) cell_large_graphic_colour_popup_pane_g1

0x9abb,	// (0x000308af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x000363d9) cell_large_graphic_colour_popup_pane_g

0x9ac3,	// (0x000308b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x9acc,	// (0x000308c0) grid_highlight_pane_cp4

0x9ad4,	// (0x000308c8) bg_popup_window_pane_cp8_ParamLimits

0x9ad4,	// (0x000308c8) bg_popup_window_pane_cp8

0x9aef,	// (0x000308e3) popup_snote_single_text_window_g1_ParamLimits

0x9aef,	// (0x000308e3) popup_snote_single_text_window_g1

0x9b01,	// (0x000308f5) popup_snote_single_text_window_t1_ParamLimits

0x9b01,	// (0x000308f5) popup_snote_single_text_window_t1

0x9b14,	// (0x00030908) popup_snote_single_text_window_t2_ParamLimits

0x9b14,	// (0x00030908) popup_snote_single_text_window_t2

0x9b27,	// (0x0003091b) popup_snote_single_text_window_t3_ParamLimits

0x9b27,	// (0x0003091b) popup_snote_single_text_window_t3

0x9b60,	// (0x00030954) popup_snote_single_text_window_t4_ParamLimits

0x9b60,	// (0x00030954) popup_snote_single_text_window_t4

0x9b94,	// (0x00030988) popup_snote_single_text_window_t5_ParamLimits

0x9b94,	// (0x00030988) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x000363de) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x000363de) popup_snote_single_text_window_t

0x9bc3,	// (0x000309b7) bg_popup_window_pane_cp9_ParamLimits

0x9bc3,	// (0x000309b7) bg_popup_window_pane_cp9

0x9aef,	// (0x000308e3) popup_snote_single_graphic_window_g1_ParamLimits

0x9aef,	// (0x000308e3) popup_snote_single_graphic_window_g1

0x9bd1,	// (0x000309c5) popup_snote_single_graphic_window_g2_ParamLimits

0x9bd1,	// (0x000309c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x000363e9) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x000363e9) popup_snote_single_graphic_window_g

0x9bdd,	// (0x000309d1) popup_snote_single_graphic_window_t1_ParamLimits

0x9bdd,	// (0x000309d1) popup_snote_single_graphic_window_t1

0x9bf0,	// (0x000309e4) popup_snote_single_graphic_window_t2_ParamLimits

0x9bf0,	// (0x000309e4) popup_snote_single_graphic_window_t2

0x9b27,	// (0x0003091b) popup_snote_single_graphic_window_t3_ParamLimits

0x9b27,	// (0x0003091b) popup_snote_single_graphic_window_t3

0x9b60,	// (0x00030954) popup_snote_single_graphic_window_t4_ParamLimits

0x9b60,	// (0x00030954) popup_snote_single_graphic_window_t4

0x9b94,	// (0x00030988) popup_snote_single_graphic_window_t5_ParamLimits

0x9b94,	// (0x00030988) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x000363ee) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x000363ee) popup_snote_single_graphic_window_t

0xb0f3,	// (0x00031ee7) grid_graphic_popup_pane_ParamLimits

0xb0f3,	// (0x00031ee7) grid_graphic_popup_pane

0xb116,	// (0x00031f0a) listscroll_popup_graphic_pane_g1_ParamLimits

0xb116,	// (0x00031f0a) listscroll_popup_graphic_pane_g1

0xb12a,	// (0x00031f1e) listscroll_popup_graphic_pane_g2_ParamLimits

0xb12a,	// (0x00031f1e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e2,	// (0x000367d6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e2,	// (0x000367d6) listscroll_popup_graphic_pane_g

0xdf0f,	// (0x00034d03) scroll_pane_cp5

0xb0ae,	// (0x00031ea2) cell_graphic_popup_pane_ParamLimits

0xb0ae,	// (0x00031ea2) cell_graphic_popup_pane

0xed22,	// (0x00035b16) cell_graphic_popup_pane_g1

0xed2a,	// (0x00035b1e) cell_graphic_popup_pane_g2

0x9ac3,	// (0x000308b7) cell_graphic_popup_pane_g3

0x0002,

0xf9db,	// (0x000367cf) cell_graphic_popup_pane_g

0xed33,	// (0x00035b27) cell_graphic_popup_pane_t2

0x9acc,	// (0x000308c0) grid_highlight_pane_cp3

0x9c15,	// (0x00030a09) list_gen_pane_ParamLimits

0x9c15,	// (0x00030a09) list_gen_pane

0x9c46,	// (0x00030a3a) scroll_pane

0xb081,	// (0x00031e75) bg_list_pane_g1_ParamLimits

0xb081,	// (0x00031e75) bg_list_pane_g1

0xecd9,	// (0x00035acd) bg_list_pane_g2_ParamLimits

0xecd9,	// (0x00035acd) bg_list_pane_g2

0xecec,	// (0x00035ae0) bg_list_pane_g3_ParamLimits

0xecec,	// (0x00035ae0) bg_list_pane_g3

0xecfe,	// (0x00035af2) bg_list_pane_g4_ParamLimits

0xecfe,	// (0x00035af2) bg_list_pane_g4

0xb09c,	// (0x00031e90) bg_list_pane_g5_ParamLimits

0xb09c,	// (0x00031e90) bg_list_pane_g5

0x0004,

0xf9d0,	// (0x000367c4) bg_list_pane_g_ParamLimits

0xf9d0,	// (0x000367c4) bg_list_pane_g

0xb026,	// (0x00031e1a) list_double2_graphic_large_graphic_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double2_graphic_large_graphic_pane

0xb026,	// (0x00031e1a) list_double2_graphic_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double2_graphic_pane

0xb026,	// (0x00031e1a) list_double2_large_graphic_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double2_large_graphic_pane

0xb026,	// (0x00031e1a) list_double2_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double2_pane

0xb026,	// (0x00031e1a) list_double_graphic_heading_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double_graphic_heading_pane

0xb026,	// (0x00031e1a) list_double_graphic_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double_graphic_pane

0xb026,	// (0x00031e1a) list_double_heading_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double_heading_pane

0xb026,	// (0x00031e1a) list_double_large_graphic_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double_large_graphic_pane

0xb026,	// (0x00031e1a) list_double_number_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double_number_pane

0xb026,	// (0x00031e1a) list_double_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double_pane

0xb026,	// (0x00031e1a) list_double_time_pane_ParamLimits

0xb026,	// (0x00031e1a) list_double_time_pane

0xb026,	// (0x00031e1a) list_setting_number_pane_ParamLimits

0xb026,	// (0x00031e1a) list_setting_number_pane

0xb026,	// (0x00031e1a) list_setting_pane_ParamLimits

0xb026,	// (0x00031e1a) list_setting_pane

0xb037,	// (0x00031e2b) list_single_2graphic_pane_ParamLimits

0xb037,	// (0x00031e2b) list_single_2graphic_pane

0xb037,	// (0x00031e2b) list_single_graphic_heading_pane_ParamLimits

0xb037,	// (0x00031e2b) list_single_graphic_heading_pane

0xb037,	// (0x00031e2b) list_single_graphic_pane_ParamLimits

0xb037,	// (0x00031e2b) list_single_graphic_pane

0xb037,	// (0x00031e2b) list_single_heading_pane_ParamLimits

0xb037,	// (0x00031e2b) list_single_heading_pane

0xb06f,	// (0x00031e63) list_single_large_graphic_pane_ParamLimits

0xb06f,	// (0x00031e63) list_single_large_graphic_pane

0xb037,	// (0x00031e2b) list_single_number_heading_pane_ParamLimits

0xb037,	// (0x00031e2b) list_single_number_heading_pane

0xb037,	// (0x00031e2b) list_single_number_pane_ParamLimits

0xb037,	// (0x00031e2b) list_single_number_pane

0xb037,	// (0x00031e2b) list_single_pane_ParamLimits

0xb037,	// (0x00031e2b) list_single_pane

0x924c,	// (0x00030040) list_highlight_pane_cp1

0x506a,	// (0x0002be5e) list_single_pane_g1_ParamLimits

0x506a,	// (0x0002be5e) list_single_pane_g1

0x5076,	// (0x0002be6a) list_single_pane_g2_ParamLimits

0x5076,	// (0x0002be6a) list_single_pane_g2

0x0001,

0xf616,	// (0x0003640a) list_single_pane_g_ParamLimits

0xf616,	// (0x0003640a) list_single_pane_g

0x413d,	// (0x0002af31) list_single_pane_t1_ParamLimits

0x413d,	// (0x0002af31) list_single_pane_t1

0x506a,	// (0x0002be5e) list_single_number_pane_g1_ParamLimits

0x506a,	// (0x0002be5e) list_single_number_pane_g1

0x5076,	// (0x0002be6a) list_single_number_pane_g2_ParamLimits

0x5076,	// (0x0002be6a) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0003640a) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0003640a) list_single_number_pane_g

0x41ba,	// (0x0002afae) list_single_number_pane_t1_ParamLimits

0x41ba,	// (0x0002afae) list_single_number_pane_t1

0x8ec2,	// (0x0002fcb6) list_single_number_pane_t2_ParamLimits

0x8ec2,	// (0x0002fcb6) list_single_number_pane_t2

0x0001,

0xf991,	// (0x00036785) list_single_number_pane_t_ParamLimits

0xf991,	// (0x00036785) list_single_number_pane_t

0x41e2,	// (0x0002afd6) list_single_graphic_pane_g1_ParamLimits

0x41e2,	// (0x0002afd6) list_single_graphic_pane_g1

0x506a,	// (0x0002be5e) list_single_graphic_pane_g2_ParamLimits

0x506a,	// (0x0002be5e) list_single_graphic_pane_g2

0x5076,	// (0x0002be6a) list_single_graphic_pane_g3_ParamLimits

0x5076,	// (0x0002be6a) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x000363f9) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x000363f9) list_single_graphic_pane_g

0x41ba,	// (0x0002afae) list_single_graphic_pane_t1_ParamLimits

0x41ba,	// (0x0002afae) list_single_graphic_pane_t1

0x8921,	// (0x0002f715) list_single_heading_pane_g1_ParamLimits

0x8921,	// (0x0002f715) list_single_heading_pane_g1

0x5076,	// (0x0002be6a) list_single_heading_pane_g2_ParamLimits

0x5076,	// (0x0002be6a) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x00036400) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x00036400) list_single_heading_pane_g

0x8934,	// (0x0002f728) list_single_heading_pane_t1_ParamLimits

0x8934,	// (0x0002f728) list_single_heading_pane_t1

0x9c7b,	// (0x00030a6f) list_single_heading_pane_t2_ParamLimits

0x9c7b,	// (0x00030a6f) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x00036405) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x00036405) list_single_heading_pane_t

0x506a,	// (0x0002be5e) list_single_number_heading_pane_g1_ParamLimits

0x506a,	// (0x0002be5e) list_single_number_heading_pane_g1

0x5076,	// (0x0002be6a) list_single_number_heading_pane_g2_ParamLimits

0x5076,	// (0x0002be6a) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0003640a) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0003640a) list_single_number_heading_pane_g

0x894a,	// (0x0002f73e) list_single_number_heading_pane_t1_ParamLimits

0x894a,	// (0x0002f73e) list_single_number_heading_pane_t1

0x8960,	// (0x0002f754) list_single_number_heading_pane_t2_ParamLimits

0x8960,	// (0x0002f754) list_single_number_heading_pane_t2

0x48ff,	// (0x0002b6f3) list_single_number_heading_pane_t3_ParamLimits

0x48ff,	// (0x0002b6f3) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0003640f) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0003640f) list_single_number_heading_pane_t

0x8972,	// (0x0002f766) list_single_graphic_heading_pane_g1_ParamLimits

0x8972,	// (0x0002f766) list_single_graphic_heading_pane_g1

0x9c8d,	// (0x00030a81) list_single_graphic_heading_pane_g4_ParamLimits

0x9c8d,	// (0x00030a81) list_single_graphic_heading_pane_g4

0x5076,	// (0x0002be6a) list_single_graphic_heading_pane_g5_ParamLimits

0x5076,	// (0x0002be6a) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x00036416) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00036416) list_single_graphic_heading_pane_g

0x894a,	// (0x0002f73e) list_single_graphic_heading_pane_t1_ParamLimits

0x894a,	// (0x0002f73e) list_single_graphic_heading_pane_t1

0x8988,	// (0x0002f77c) list_single_graphic_heading_pane_t2_ParamLimits

0x8988,	// (0x0002f77c) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003641d) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003641d) list_single_graphic_heading_pane_t

0x503e,	// (0x0002be32) list_single_large_graphic_pane_g1_ParamLimits

0x503e,	// (0x0002be32) list_single_large_graphic_pane_g1

0x504a,	// (0x0002be3e) list_single_large_graphic_pane_g2_ParamLimits

0x504a,	// (0x0002be3e) list_single_large_graphic_pane_g2

0x5056,	// (0x0002be4a) list_single_large_graphic_pane_g3_ParamLimits

0x5056,	// (0x0002be4a) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x00036422) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x00036422) list_single_large_graphic_pane_g

0xe0b7,	// (0x00034eab) wait_border_pane_g2_copy1

0x5062,	// (0x0002be56) list_single_large_graphic_pane_g4_cp2

0x4127,	// (0x0002af1b) list_single_large_graphic_pane_t1_ParamLimits

0x4127,	// (0x0002af1b) list_single_large_graphic_pane_t1

0x9c9e,	// (0x00030a92) list_double_pane_g1_ParamLimits

0x9c9e,	// (0x00030a92) list_double_pane_g1

0x9caa,	// (0x00030a9e) list_double_pane_g2_ParamLimits

0x9caa,	// (0x00030a9e) list_double_pane_g2

0x0001,

0xf635,	// (0x00036429) list_double_pane_g_ParamLimits

0xf635,	// (0x00036429) list_double_pane_g

0x89a0,	// (0x0002f794) list_double_pane_t1_ParamLimits

0x89a0,	// (0x0002f794) list_double_pane_t1

0x89b6,	// (0x0002f7aa) list_double_pane_t2_ParamLimits

0x89b6,	// (0x0002f7aa) list_double_pane_t2

0x0001,

0xf63a,	// (0x0003642e) list_double_pane_t_ParamLimits

0xf63a,	// (0x0003642e) list_double_pane_t

0x89c8,	// (0x0002f7bc) list_double2_pane_g1_ParamLimits

0x89c8,	// (0x0002f7bc) list_double2_pane_g1

0x89d9,	// (0x0002f7cd) list_double2_pane_g2_ParamLimits

0x89d9,	// (0x0002f7cd) list_double2_pane_g2

0x0001,

0xf63f,	// (0x00036433) list_double2_pane_g_ParamLimits

0xf63f,	// (0x00036433) list_double2_pane_g

0x89e5,	// (0x0002f7d9) list_double2_pane_t1_ParamLimits

0x89e5,	// (0x0002f7d9) list_double2_pane_t1

0x89fb,	// (0x0002f7ef) list_double2_pane_t2_ParamLimits

0x89fb,	// (0x0002f7ef) list_double2_pane_t2

0x0001,

0xf644,	// (0x00036438) list_double2_pane_t_ParamLimits

0xf644,	// (0x00036438) list_double2_pane_t

0x9c9e,	// (0x00030a92) list_double_number_pane_g1_ParamLimits

0x9c9e,	// (0x00030a92) list_double_number_pane_g1

0x9caa,	// (0x00030a9e) list_double_number_pane_g2_ParamLimits

0x9caa,	// (0x00030a9e) list_double_number_pane_g2

0x0001,

0xf635,	// (0x00036429) list_double_number_pane_g_ParamLimits

0xf635,	// (0x00036429) list_double_number_pane_g

0x8a0d,	// (0x0002f801) list_double_number_pane_t1_ParamLimits

0x8a0d,	// (0x0002f801) list_double_number_pane_t1

0x8a1f,	// (0x0002f813) list_double_number_pane_t2_ParamLimits

0x8a1f,	// (0x0002f813) list_double_number_pane_t2

0x8a35,	// (0x0002f829) list_double_number_pane_t3_ParamLimits

0x8a35,	// (0x0002f829) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0003643d) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0003643d) list_double_number_pane_t

0x4310,	// (0x0002b104) list_double_graphic_pane_g1_ParamLimits

0x4310,	// (0x0002b104) list_double_graphic_pane_g1

0x9cb6,	// (0x00030aaa) list_double_graphic_pane_g2_ParamLimits

0x9cb6,	// (0x00030aaa) list_double_graphic_pane_g2

0x9cc5,	// (0x00030ab9) list_double_graphic_pane_g3_ParamLimits

0x9cc5,	// (0x00030ab9) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x00036444) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x00036444) list_double_graphic_pane_g

0x8a53,	// (0x0002f847) list_double_graphic_pane_t1_ParamLimits

0x8a53,	// (0x0002f847) list_double_graphic_pane_t1

0x8a69,	// (0x0002f85d) list_double_graphic_pane_t2_ParamLimits

0x8a69,	// (0x0002f85d) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0003644d) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0003644d) list_double_graphic_pane_t

0x4064,	// (0x0002ae58) list_double2_graphic_pane_g1_ParamLimits

0x4064,	// (0x0002ae58) list_double2_graphic_pane_g1

0x5017,	// (0x0002be0b) list_double2_graphic_pane_g2_ParamLimits

0x5017,	// (0x0002be0b) list_double2_graphic_pane_g2

0x5023,	// (0x0002be17) list_double2_graphic_pane_g3_ParamLimits

0x5023,	// (0x0002be17) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x00036452) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x00036452) list_double2_graphic_pane_g

0x4070,	// (0x0002ae64) list_double2_graphic_pane_t1_ParamLimits

0x4070,	// (0x0002ae64) list_double2_graphic_pane_t1

0x8a7b,	// (0x0002f86f) list_double2_graphic_pane_t2_ParamLimits

0x8a7b,	// (0x0002f86f) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x00036459) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x00036459) list_double2_graphic_pane_t

0x8a8d,	// (0x0002f881) list_double_large_graphic_pane_g1_ParamLimits

0x8a8d,	// (0x0002f881) list_double_large_graphic_pane_g1

0x8ab1,	// (0x0002f8a5) list_double_large_graphic_pane_g2_ParamLimits

0x8ab1,	// (0x0002f8a5) list_double_large_graphic_pane_g2

0x9caa,	// (0x00030a9e) list_double_large_graphic_pane_g3_ParamLimits

0x9caa,	// (0x00030a9e) list_double_large_graphic_pane_g3

0x8ac7,	// (0x0002f8bb) list_double_large_graphic_pane_g4_ParamLimits

0x8ac7,	// (0x0002f8bb) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0003645e) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0003645e) list_double_large_graphic_pane_g

0x8ad8,	// (0x0002f8cc) list_double_large_graphic_pane_t1_ParamLimits

0x8ad8,	// (0x0002f8cc) list_double_large_graphic_pane_t1

0x8af1,	// (0x0002f8e5) list_double_large_graphic_pane_t2_ParamLimits

0x8af1,	// (0x0002f8e5) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x00036469) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x00036469) list_double_large_graphic_pane_t

0x9cd1,	// (0x00030ac5) list_double2_large_graphic_pane_g1_ParamLimits

0x9cd1,	// (0x00030ac5) list_double2_large_graphic_pane_g1

0x8b03,	// (0x0002f8f7) list_double2_large_graphic_pane_g2_ParamLimits

0x8b03,	// (0x0002f8f7) list_double2_large_graphic_pane_g2

0x5023,	// (0x0002be17) list_double2_large_graphic_pane_g3_ParamLimits

0x5023,	// (0x0002be17) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0003646e) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0003646e) list_double2_large_graphic_pane_g

0x40c1,	// (0x0002aeb5) list_double2_large_graphic_pane_t1_ParamLimits

0x40c1,	// (0x0002aeb5) list_double2_large_graphic_pane_t1

0x8b14,	// (0x0002f908) list_double2_large_graphic_pane_t2_ParamLimits

0x8b14,	// (0x0002f908) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x00036475) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x00036475) list_double2_large_graphic_pane_t

0x8b26,	// (0x0002f91a) list_double_heading_pane_g1_ParamLimits

0x8b26,	// (0x0002f91a) list_double_heading_pane_g1

0x9cdd,	// (0x00030ad1) list_double_heading_pane_g2_ParamLimits

0x9cdd,	// (0x00030ad1) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0003647a) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0003647a) list_double_heading_pane_g

0x8b37,	// (0x0002f92b) list_double_heading_pane_t1_ParamLimits

0x8b37,	// (0x0002f92b) list_double_heading_pane_t1

0x89fb,	// (0x0002f7ef) list_double_heading_pane_t2_ParamLimits

0x89fb,	// (0x0002f7ef) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0003647f) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0003647f) list_double_heading_pane_t

0x4310,	// (0x0002b104) list_double_graphic_heading_pane_g1_ParamLimits

0x4310,	// (0x0002b104) list_double_graphic_heading_pane_g1

0x8b26,	// (0x0002f91a) list_double_graphic_heading_pane_g2_ParamLimits

0x8b26,	// (0x0002f91a) list_double_graphic_heading_pane_g2

0x9cdd,	// (0x00030ad1) list_double_graphic_heading_pane_g3_ParamLimits

0x9cdd,	// (0x00030ad1) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x00036484) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x00036484) list_double_graphic_heading_pane_g

0x8b4d,	// (0x0002f941) list_double_graphic_heading_pane_t1_ParamLimits

0x8b4d,	// (0x0002f941) list_double_graphic_heading_pane_t1

0x8a7b,	// (0x0002f86f) list_double_graphic_heading_pane_t2_ParamLimits

0x8a7b,	// (0x0002f86f) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0003648b) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0003648b) list_double_graphic_heading_pane_t

0x8b63,	// (0x0002f957) list_double_time_pane_g1_ParamLimits

0x8b63,	// (0x0002f957) list_double_time_pane_g1

0x8b74,	// (0x0002f968) list_double_time_pane_g2_ParamLimits

0x8b74,	// (0x0002f968) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x00036490) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x00036490) list_double_time_pane_g

0x8b80,	// (0x0002f974) list_double_time_pane_t1_ParamLimits

0x8b80,	// (0x0002f974) list_double_time_pane_t1

0x8b96,	// (0x0002f98a) list_double_time_pane_t2_ParamLimits

0x8b96,	// (0x0002f98a) list_double_time_pane_t2

0x8ba8,	// (0x0002f99c) list_double_time_pane_t3_ParamLimits

0x8ba8,	// (0x0002f99c) list_double_time_pane_t3

0x8bba,	// (0x0002f9ae) list_double_time_pane_t4_ParamLimits

0x8bba,	// (0x0002f9ae) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x00036495) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x00036495) list_double_time_pane_t

0x4791,	// (0x0002b585) list_setting_pane_g1_ParamLimits

0x4791,	// (0x0002b585) list_setting_pane_g1

0x4341,	// (0x0002b135) list_setting_pane_g2_ParamLimits

0x4341,	// (0x0002b135) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0003649e) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0003649e) list_setting_pane_g

0x8bcc,	// (0x0002f9c0) list_setting_pane_t1_ParamLimits

0x8bcc,	// (0x0002f9c0) list_setting_pane_t1

0x8be6,	// (0x0002f9da) list_setting_pane_t2_ParamLimits

0x8be6,	// (0x0002f9da) list_setting_pane_t2

0x0002,

0xf6af,	// (0x000364a3) list_setting_pane_t_ParamLimits

0xf6af,	// (0x000364a3) list_setting_pane_t

0x8c23,	// (0x0002fa17) set_value_pane_cp_ParamLimits

0x8c23,	// (0x0002fa17) set_value_pane_cp

0x8c2f,	// (0x0002fa23) list_setting_number_pane_g1_ParamLimits

0x8c2f,	// (0x0002fa23) list_setting_number_pane_g1

0x8c3b,	// (0x0002fa2f) list_setting_number_pane_g2_ParamLimits

0x8c3b,	// (0x0002fa2f) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x000364aa) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x000364aa) list_setting_number_pane_g

0x8c47,	// (0x0002fa3b) list_setting_number_pane_t1_ParamLimits

0x8c47,	// (0x0002fa3b) list_setting_number_pane_t1

0x8c60,	// (0x0002fa54) list_setting_number_pane_t2_ParamLimits

0x8c60,	// (0x0002fa54) list_setting_number_pane_t2

0x8c7a,	// (0x0002fa6e) list_setting_number_pane_t3_ParamLimits

0x8c7a,	// (0x0002fa6e) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x000364af) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x000364af) list_setting_number_pane_t

0x8c23,	// (0x0002fa17) set_value_pane_ParamLimits

0x8c23,	// (0x0002fa17) set_value_pane

0xcb46,	// (0x0003393a) bg_set_opt_pane_ParamLimits

0xcb46,	// (0x0003393a) bg_set_opt_pane

0x4492,	// (0x0002b286) set_value_pane_t1

0xcb67,	// (0x0003395b) slider_set_pane_cp3

0xcb70,	// (0x00033964) volume_small_pane_cp

0xcb79,	// (0x0003396d) list_form_gen_pane

0x9c6a,	// (0x00030a5e) scroll_pane_cp8

0x8cbd,	// (0x0002fab1) form_field_data_pane_ParamLimits

0x8cbd,	// (0x0002fab1) form_field_data_pane

0x8cd4,	// (0x0002fac8) form_field_data_wide_pane_ParamLimits

0x8cd4,	// (0x0002fac8) form_field_data_wide_pane

0x8cf4,	// (0x0002fae8) form_field_popup_pane_ParamLimits

0x8cf4,	// (0x0002fae8) form_field_popup_pane

0x8d0c,	// (0x0002fb00) form_field_popup_wide_pane_ParamLimits

0x8d0c,	// (0x0002fb00) form_field_popup_wide_pane

0x451e,	// (0x0002b312) form_field_slider_pane_ParamLimits

0x451e,	// (0x0002b312) form_field_slider_pane

0x4531,	// (0x0002b325) form_field_slider_wide_pane_ParamLimits

0x4531,	// (0x0002b325) form_field_slider_wide_pane

0xcb82,	// (0x00033976) data_form_pane

0x8d2d,	// (0x0002fb21) form_field_data_pane_t1

0xcb8e,	// (0x00033982) input_focus_pane

0xcb9c,	// (0x00033990) data_form_wide_pane

0x4570,	// (0x0002b364) form_field_data_wide_pane_t1

0x9ae1,	// (0x000308d5) input_focus_pane_cp6

0x8d45,	// (0x0002fb39) form_field_popup_pane_t1

0xcb8e,	// (0x00033982) input_focus_pane_cp7

0xcb82,	// (0x00033976) list_form_pane

0x45b2,	// (0x0002b3a6) form_field_popup_wide_pane_t1

0xcb8e,	// (0x00033982) input_focus_pane_cp8

0xcbbc,	// (0x000339b0) list_form_wide_pane

0x8d65,	// (0x0002fb59) form_field_slider_pane_t1_ParamLimits

0x8d65,	// (0x0002fb59) form_field_slider_pane_t1

0x8d7b,	// (0x0002fb6f) form_field_slider_pane_t2_ParamLimits

0x8d7b,	// (0x0002fb6f) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x000364bf) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x000364bf) form_field_slider_pane_t

0x940e,	// (0x00030202) input_focus_pane_cp9_ParamLimits

0x940e,	// (0x00030202) input_focus_pane_cp9

0x8d90,	// (0x0002fb84) slider_cont_pane_ParamLimits

0x8d90,	// (0x0002fb84) slider_cont_pane

0xcbcb,	// (0x000339bf) form_field_slider_wide_pane_t1_ParamLimits

0xcbcb,	// (0x000339bf) form_field_slider_wide_pane_t1

0x460e,	// (0x0002b402) form_field_slider_wide_pane_t2_ParamLimits

0x460e,	// (0x0002b402) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x000364c4) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x000364c4) form_field_slider_wide_pane_t

0x940e,	// (0x00030202) input_focus_pane_cp10_ParamLimits

0x940e,	// (0x00030202) input_focus_pane_cp10

0x8da4,	// (0x0002fb98) slider_cont_pane_cp1_ParamLimits

0x8da4,	// (0x0002fb98) slider_cont_pane_cp1

0x8dba,	// (0x0002fbae) slider_form_pane_cp

0xcbdd,	// (0x000339d1) input_focus_pane_g1

0xcbe5,	// (0x000339d9) input_focus_pane_g2

0xcbed,	// (0x000339e1) input_focus_pane_g3

0xcbf5,	// (0x000339e9) input_focus_pane_g4

0xcbfd,	// (0x000339f1) input_focus_pane_g5

0xcc05,	// (0x000339f9) input_focus_pane_g6

0xcc0d,	// (0x00033a01) input_focus_pane_g7

0xcc15,	// (0x00033a09) input_focus_pane_g8

0xcc1d,	// (0x00033a11) input_focus_pane_g9

0x90ff,	// (0x0002fef3) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x000364c9) input_focus_pane_g

0xe0c0,	// (0x00034eb4) wait_border_pane_g3_copy1

0x8dc2,	// (0x0002fbb6) data_form_pane_t1

0x90ff,	// (0x0002fef3) wait_anim_pane_g1_copy1

0x8ed4,	// (0x0002fcc8) data_form_wide_pane_t1

0x8dda,	// (0x0002fbce) list_form_graphic_pane_cp_ParamLimits

0x8dda,	// (0x0002fbce) list_form_graphic_pane_cp

0xec7f,	// (0x00035a73) slider_form_pane_g1

0xec88,	// (0x00035a7c) slider_form_pane_g2

0x0006,

0xf9c1,	// (0x000367b5) slider_form_pane_g

0x4658,	// (0x0002b44c) list_form_graphic_pane_ParamLimits

0x4658,	// (0x0002b44c) list_form_graphic_pane

0x4682,	// (0x0002b476) list_form_graphic_pane_g1

0x468a,	// (0x0002b47e) list_form_graphic_pane_t1_ParamLimits

0x468a,	// (0x0002b47e) list_form_graphic_pane_t1

0x9458,	// (0x0003024c) list_highlight_pane_cp5_ParamLimits

0x9458,	// (0x0003024c) list_highlight_pane_cp5

0x8ded,	// (0x0002fbe1) find_pane_g1

0xcc25,	// (0x00033a19) input_find_pane

0x8df8,	// (0x0002fbec) input_find_pane_g1_ParamLimits

0x8df8,	// (0x0002fbec) input_find_pane_g1

0x8e04,	// (0x0002fbf8) input_find_pane_t1_ParamLimits

0x8e04,	// (0x0002fbf8) input_find_pane_t1

0x8e19,	// (0x0002fc0d) input_find_pane_t2_ParamLimits

0x8e19,	// (0x0002fc0d) input_find_pane_t2

0x0001,

0xf6ea,	// (0x000364de) input_find_pane_t_ParamLimits

0xf6ea,	// (0x000364de) input_find_pane_t

0xcc2e,	// (0x00033a22) input_focus_pane_cp5_ParamLimits

0xcc2e,	// (0x00033a22) input_focus_pane_cp5

0x940e,	// (0x00030202) bg_popup_window_pane_cp2_ParamLimits

0x940e,	// (0x00030202) bg_popup_window_pane_cp2

0xcc48,	// (0x00033a3c) listscroll_menu_pane_ParamLimits

0xcc48,	// (0x00033a3c) listscroll_menu_pane

0xcc54,	// (0x00033a48) popup_submenu_window_ParamLimits

0xcc54,	// (0x00033a48) popup_submenu_window

0xcc78,	// (0x00033a6c) find_popup_pane_g1

0xcc80,	// (0x00033a74) input_popup_find_pane_cp

0xcc2e,	// (0x00033a22) input_focus_pane_cp4_ParamLimits

0xcc2e,	// (0x00033a22) input_focus_pane_cp4

0xcc8a,	// (0x00033a7e) input_popup_find_pane_t1_ParamLimits

0xcc8a,	// (0x00033a7e) input_popup_find_pane_t1

0x924c,	// (0x00030040) bg_popup_sub_pane_cp

0xccb8,	// (0x00033aac) listscroll_popup_sub_pane

0xccc0,	// (0x00033ab4) list_submenu_pane_ParamLimits

0xccc0,	// (0x00033ab4) list_submenu_pane

0xccd1,	// (0x00033ac5) scroll_pane_cp4

0xccd9,	// (0x00033acd) list_single_popup_submenu_pane_ParamLimits

0xccd9,	// (0x00033acd) list_single_popup_submenu_pane

0xcced,	// (0x00033ae1) list_single_popup_submenu_pane_g1

0xccf5,	// (0x00033ae9) list_single_popup_submenu_pane_t1_ParamLimits

0xccf5,	// (0x00033ae9) list_single_popup_submenu_pane_t1

0x940e,	// (0x00030202) bg_active_tab_pane_cp1_ParamLimits

0x940e,	// (0x00030202) bg_active_tab_pane_cp1

0xdcbc,	// (0x00034ab0) tabs_2_active_pane_g1

0x9d01,	// (0x00030af5) tabs_2_active_pane_t1

0x940e,	// (0x00030202) bg_passive_tab_pane_cp1_ParamLimits

0x940e,	// (0x00030202) bg_passive_tab_pane_cp1

0xdcbc,	// (0x00034ab0) tabs_2_passive_pane_g1

0x9d01,	// (0x00030af5) tabs_2_passive_pane_t1

0x9458,	// (0x0003024c) bg_active_tab_pane_cp4

0x9d17,	// (0x00030b0b) tabs_2_long_active_pane_t1

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp4

0xdcd6,	// (0x00034aca) list_single_midp_graphic_pane_g4_ParamLimits

0x9458,	// (0x0003024c) bg_active_tab_pane_cp5

0x9d2e,	// (0x00030b22) tabs_3_long_active_pane_t1

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp5

0xdcd6,	// (0x00034aca) list_single_midp_graphic_pane_g4

0x9458,	// (0x0003024c) bg_popup_window_pane_cp13_ParamLimits

0x9458,	// (0x0003024c) bg_popup_window_pane_cp13

0xcd1f,	// (0x00033b13) listscroll_popup_fast_pane_ParamLimits

0xcd1f,	// (0x00033b13) listscroll_popup_fast_pane

0xcd2e,	// (0x00033b22) grid_popup_fast_pane_ParamLimits

0xcd2e,	// (0x00033b22) grid_popup_fast_pane

0xcd40,	// (0x00033b34) scroll_pane_cp9_ParamLimits

0xcd40,	// (0x00033b34) scroll_pane_cp9

0x151c,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x151c,	// (0x00028310) list_single_graphic_hl_pane_t1_cp2

0xcd64,	// (0x00033b58) input_focus_pane_cp20_ParamLimits

0xcd64,	// (0x00033b58) input_focus_pane_cp20

0xcd72,	// (0x00033b66) query_popup_data_pane_t1_ParamLimits

0xcd72,	// (0x00033b66) query_popup_data_pane_t1

0xcd85,	// (0x00033b79) query_popup_data_pane_t2_ParamLimits

0xcd85,	// (0x00033b79) query_popup_data_pane_t2

0xcdcb,	// (0x00033bbf) query_popup_data_pane_t3_ParamLimits

0xcdcb,	// (0x00033bbf) query_popup_data_pane_t3

0xce0c,	// (0x00033c00) query_popup_data_pane_t4_ParamLimits

0xce0c,	// (0x00033c00) query_popup_data_pane_t4

0xce48,	// (0x00033c3c) query_popup_data_pane_t5_ParamLimits

0xce48,	// (0x00033c3c) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x000364e3) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x000364e3) query_popup_data_pane_t

0xcbdd,	// (0x000339d1) bg_set_opt_pane_g1

0xcbe5,	// (0x000339d9) bg_set_opt_pane_g2

0xcbed,	// (0x000339e1) bg_set_opt_pane_g3

0xcbf5,	// (0x000339e9) bg_set_opt_pane_g4

0xcbfd,	// (0x000339f1) bg_set_opt_pane_g5

0xcc05,	// (0x000339f9) bg_set_opt_pane_g6

0xcc0d,	// (0x00033a01) bg_set_opt_pane_g7

0xcc15,	// (0x00033a09) bg_set_opt_pane_g8

0xcc1d,	// (0x00033a11) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x000364ee) bg_set_opt_pane_g

0x5329,	// (0x0002c11d) control_top_pane_stacon_ParamLimits

0x5329,	// (0x0002c11d) control_top_pane_stacon

0x537c,	// (0x0002c170) signal_pane_stacon_ParamLimits

0x537c,	// (0x0002c170) signal_pane_stacon

0xd248,	// (0x0003403c) stacon_top_pane_g1_ParamLimits

0xd248,	// (0x0003403c) stacon_top_pane_g1

0x53a1,	// (0x0002c195) title_pane_stacon_ParamLimits

0x53a1,	// (0x0002c195) title_pane_stacon

0x53c3,	// (0x0002c1b7) uni_indicator_pane_stacon_ParamLimits

0x53c3,	// (0x0002c1b7) uni_indicator_pane_stacon

0x53d8,	// (0x0002c1cc) battery_pane_stacon_ParamLimits

0x53d8,	// (0x0002c1cc) battery_pane_stacon

0x5418,	// (0x0002c20c) control_bottom_pane_stacon_ParamLimits

0x5418,	// (0x0002c20c) control_bottom_pane_stacon

0x5437,	// (0x0002c22b) navi_pane_stacon_ParamLimits

0x5437,	// (0x0002c22b) navi_pane_stacon

0xd26a,	// (0x0003405e) stacon_bottom_pane_g1_ParamLimits

0xd26a,	// (0x0003405e) stacon_bottom_pane_g1

0xce7f,	// (0x00033c73) aid_levels_signal_lsc_ParamLimits

0xce7f,	// (0x00033c73) aid_levels_signal_lsc

0x50e5,	// (0x0002bed9) signal_pane_stacon_g1_ParamLimits

0x50e5,	// (0x0002bed9) signal_pane_stacon_g1

0x50f1,	// (0x0002bee5) signal_pane_stacon_g2_ParamLimits

0x50f1,	// (0x0002bee5) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x00036501) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x00036501) signal_pane_stacon_g

0x5125,	// (0x0002bf19) title_pane_stacon_t1_ParamLimits

0x5125,	// (0x0002bf19) title_pane_stacon_t1

0xce99,	// (0x00033c8d) uni_indicator_pane_stacon_g1

0xcea3,	// (0x00033c97) uni_indicator_pane_stacon_g2

0xcead,	// (0x00033ca1) uni_indicator_pane_stacon_g3

0xceb7,	// (0x00033cab) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0003650d) uni_indicator_pane_stacon_g

0x514a,	// (0x0002bf3e) control_top_pane_stacon_g1

0x5152,	// (0x0002bf46) control_top_pane_stacon_t1_ParamLimits

0x5152,	// (0x0002bf46) control_top_pane_stacon_t1

0xcec1,	// (0x00033cb5) aid_levels_battery_lsc_ParamLimits

0xcec1,	// (0x00033cb5) aid_levels_battery_lsc

0x5183,	// (0x0002bf77) battery_pane_stacon_g1_ParamLimits

0x5183,	// (0x0002bf77) battery_pane_stacon_g1

0x518f,	// (0x0002bf83) battery_pane_stacon_g2_ParamLimits

0x518f,	// (0x0002bf83) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x00036516) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x00036516) battery_pane_stacon_g

0x51be,	// (0x0002bfb2) navi_icon_pane_stacon

0x51ce,	// (0x0002bfc2) navi_navi_pane_stacon

0x51be,	// (0x0002bfb2) navi_text_pane_stacon

0x514a,	// (0x0002bf3e) control_bottom_pane_stacon_g1

0x51de,	// (0x0002bfd2) control_bottom_pane_stacon_t1_ParamLimits

0x51de,	// (0x0002bfd2) control_bottom_pane_stacon_t1

0x9d44,	// (0x00030b38) grid_app_pane_ParamLimits

0x9d44,	// (0x00030b38) grid_app_pane

0x9d72,	// (0x00030b66) scroll_pane_cp15_ParamLimits

0x9d72,	// (0x00030b66) scroll_pane_cp15

0x9d89,	// (0x00030b7d) cell_app_pane_ParamLimits

0x9d89,	// (0x00030b7d) cell_app_pane

0x9dc8,	// (0x00030bbc) cell_app_pane_g1_ParamLimits

0x9dc8,	// (0x00030bbc) cell_app_pane_g1

0xcee9,	// (0x00033cdd) cell_app_pane_g2_ParamLimits

0xcee9,	// (0x00033cdd) cell_app_pane_g2

0x0001,

0xf727,	// (0x0003651b) cell_app_pane_g_ParamLimits

0xf727,	// (0x0003651b) cell_app_pane_g

0xcef5,	// (0x00033ce9) cell_app_pane_t1_ParamLimits

0xcef5,	// (0x00033ce9) cell_app_pane_t1

0xcf07,	// (0x00033cfb) grid_highlight_pane_ParamLimits

0xcf07,	// (0x00033cfb) grid_highlight_pane

0xcbdd,	// (0x000339d1) cell_highlight_pane_g1

0xcbe5,	// (0x000339d9) cell_highlight_pane_g2

0xcbed,	// (0x000339e1) cell_highlight_pane_g3

0xcbf5,	// (0x000339e9) cell_highlight_pane_g4

0xcbfd,	// (0x000339f1) cell_highlight_pane_g5

0xcc05,	// (0x000339f9) cell_highlight_pane_g6

0xcc0d,	// (0x00033a01) cell_highlight_pane_g7

0xcc15,	// (0x00033a09) cell_highlight_pane_g8

0xcc1d,	// (0x00033a11) cell_highlight_pane_g9

0x90ff,	// (0x0002fef3) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x000364c9) cell_highlight_pane_g

0xcf18,	// (0x00033d0c) bg_scroll_pane

0x5222,	// (0x0002c016) scroll_handle_pane

0xcf5f,	// (0x00033d53) scroll_bg_pane_g1

0xcf74,	// (0x00033d68) scroll_bg_pane_g2

0xcf8c,	// (0x00033d80) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x00036520) scroll_bg_pane_g

0xcfa1,	// (0x00033d95) scroll_handle_focus_pane_ParamLimits

0xcfa1,	// (0x00033d95) scroll_handle_focus_pane

0xcf5f,	// (0x00033d53) scroll_handle_pane_g1

0xcfae,	// (0x00033da2) scroll_handle_pane_g2

0xcf8c,	// (0x00033d80) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x00036527) scroll_handle_pane_g

0xcc2e,	// (0x00033a22) bg_popup_sub_pane_cp21_ParamLimits

0xcc2e,	// (0x00033a22) bg_popup_sub_pane_cp21

0xcfc2,	// (0x00033db6) popup_fep_japan_predictive_window_t1_ParamLimits

0xcfc2,	// (0x00033db6) popup_fep_japan_predictive_window_t1

0xcfd9,	// (0x00033dcd) popup_fep_japan_predictive_window_t2_ParamLimits

0xcfd9,	// (0x00033dcd) popup_fep_japan_predictive_window_t2

0xd00c,	// (0x00033e00) popup_fep_japan_predictive_window_t3_ParamLimits

0xd00c,	// (0x00033e00) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0003652e) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0003652e) popup_fep_japan_predictive_window_t

0x924c,	// (0x00030040) bg_popup_sub_pane_cp23

0xd043,	// (0x00033e37) listscroll_japin_cand_pane

0xd04b,	// (0x00033e3f) popup_fep_japan_candidate_window_t1

0xd059,	// (0x00033e4d) candidate_pane_ParamLimits

0xd059,	// (0x00033e4d) candidate_pane

0xd06c,	// (0x00033e60) scroll_pane_cp30

0xd074,	// (0x00033e68) list_single_popup_jap_candidate_pane_ParamLimits

0xd074,	// (0x00033e68) list_single_popup_jap_candidate_pane

0x924c,	// (0x00030040) list_highlight_pane_cp30

0xd089,	// (0x00033e7d) list_single_popup_jap_candidate_pane_t1

0x9df5,	// (0x00030be9) level_1_signal

0x9e07,	// (0x00030bfb) level_2_signal

0x9e1a,	// (0x00030c0e) level_3_signal

0x9e2d,	// (0x00030c21) level_4_signal

0x9e40,	// (0x00030c34) level_5_signal

0x9e53,	// (0x00030c47) level_6_signal

0x9e66,	// (0x00030c5a) level_7_signal

0x9df5,	// (0x00030be9) level_1_battery

0x9e07,	// (0x00030bfb) level_2_battery

0x9e1a,	// (0x00030c0e) level_3_battery

0x9e2d,	// (0x00030c21) level_4_battery

0x9e40,	// (0x00030c34) level_5_battery

0x9e53,	// (0x00030c47) level_6_battery

0x9e66,	// (0x00030c5a) level_7_battery

0xd0b0,	// (0x00033ea4) list_menu_pane_ParamLimits

0xd0b0,	// (0x00033ea4) list_menu_pane

0xd0c1,	// (0x00033eb5) scroll_pane_cp25_ParamLimits

0xd0c1,	// (0x00033eb5) scroll_pane_cp25

0x9e79,	// (0x00030c6d) list_double2_graphic_pane_cp2_ParamLimits

0x9e79,	// (0x00030c6d) list_double2_graphic_pane_cp2

0x9e79,	// (0x00030c6d) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e79,	// (0x00030c6d) list_double2_large_graphic_pane_cp2

0x9e79,	// (0x00030c6d) list_double2_pane_cp2_ParamLimits

0x9e79,	// (0x00030c6d) list_double2_pane_cp2

0x9e79,	// (0x00030c6d) list_double_graphic_pane_cp2_ParamLimits

0x9e79,	// (0x00030c6d) list_double_graphic_pane_cp2

0x9e79,	// (0x00030c6d) list_double_large_graphic_pane_cp2_ParamLimits

0x9e79,	// (0x00030c6d) list_double_large_graphic_pane_cp2

0x9e79,	// (0x00030c6d) list_double_number_pane_cp2_ParamLimits

0x9e79,	// (0x00030c6d) list_double_number_pane_cp2

0x9e79,	// (0x00030c6d) list_double_pane_cp2_ParamLimits

0x9e79,	// (0x00030c6d) list_double_pane_cp2

0x9e94,	// (0x00030c88) list_single_2graphic_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_2graphic_pane_cp2

0x9e94,	// (0x00030c88) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_graphic_heading_pane_cp2

0x9e94,	// (0x00030c88) list_single_graphic_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_graphic_pane_cp2

0x9e94,	// (0x00030c88) list_single_heading_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_heading_pane_cp2

0x9ea5,	// (0x00030c99) list_single_large_graphic_pane_cp2_ParamLimits

0x9ea5,	// (0x00030c99) list_single_large_graphic_pane_cp2

0x9e94,	// (0x00030c88) list_single_number_heading_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_number_heading_pane_cp2

0x9e94,	// (0x00030c88) list_single_number_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_number_pane_cp2

0x9e94,	// (0x00030c88) list_single_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_pane_cp2

0xd0e3,	// (0x00033ed7) bg_popup_sub_pane_cp22

0x52d1,	// (0x0002c0c5) popup_side_volume_key_window_g1

0x52f5,	// (0x0002c0e9) popup_side_volume_key_window_t1

0x5311,	// (0x0002c105) volume_small_pane_cp1

0x940e,	// (0x00030202) bg_popup_sub_pane_cp24_ParamLimits

0x940e,	// (0x00030202) bg_popup_sub_pane_cp24

0xd0f9,	// (0x00033eed) fep_china_uni_candidate_pane_ParamLimits

0xd0f9,	// (0x00033eed) fep_china_uni_candidate_pane

0xd10d,	// (0x00033f01) fep_china_uni_entry_pane

0xd11d,	// (0x00033f11) popup_fep_china_uni_window_g1

0xd139,	// (0x00033f2d) fep_china_uni_entry_pane_g1

0xd141,	// (0x00033f35) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0003655b) fep_china_uni_entry_pane_g

0xd149,	// (0x00033f3d) fep_entry_item_pane

0xd153,	// (0x00033f47) fep_candidate_item_pane

0xd15b,	// (0x00033f4f) fep_china_uni_candidate_pane_g1

0xd163,	// (0x00033f57) fep_china_uni_candidate_pane_g2

0xd16b,	// (0x00033f5f) fep_china_uni_candidate_pane_g3

0xd173,	// (0x00033f67) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x00036560) fep_china_uni_candidate_pane_g

0x90ff,	// (0x0002fef3) fep_entry_item_pane_g1

0xd17b,	// (0x00033f6f) fep_entry_item_pane_t1_ParamLimits

0xd17b,	// (0x00033f6f) fep_entry_item_pane_t1

0xd191,	// (0x00033f85) fep_candidate_item_pane_t1_ParamLimits

0xd191,	// (0x00033f85) fep_candidate_item_pane_t1

0xd1a6,	// (0x00033f9a) fep_candidate_item_pane_t2_ParamLimits

0xd1a6,	// (0x00033f9a) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x00036569) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x00036569) fep_candidate_item_pane_t

0x9458,	// (0x0003024c) list_highlight_pane_cp31_ParamLimits

0x9458,	// (0x0003024c) list_highlight_pane_cp31

0xd1b8,	// (0x00033fac) level_1_signal_lsc

0xd1c1,	// (0x00033fb5) level_2_signal_lsc

0xd1ca,	// (0x00033fbe) level_3_signal_lsc

0xd1d3,	// (0x00033fc7) level_4_signal_lsc

0xd1dc,	// (0x00033fd0) level_5_signal_lsc

0xd1e5,	// (0x00033fd9) level_6_signal_lsc

0xd1ee,	// (0x00033fe2) level_7_signal_lsc

0xd1ee,	// (0x00033fe2) level_1_battery_lsc

0xd1f7,	// (0x00033feb) level_2_battery_lsc

0xd200,	// (0x00033ff4) level_3_battery_lsc

0xd209,	// (0x00033ffd) level_4_battery_lsc

0xd212,	// (0x00034006) level_5_battery_lsc

0xd21b,	// (0x0003400f) level_6_battery_lsc

0xd1b8,	// (0x00033fac) level_7_battery_lsc

0xd224,	// (0x00034018) scroll_handle_focus_pane_g1

0xd22d,	// (0x00034021) scroll_handle_focus_pane_g2

0xd236,	// (0x0003402a) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0003656e) scroll_handle_focus_pane_g

0x8e2e,	// (0x0002fc22) list_single_2graphic_pane_g1_ParamLimits

0x8e2e,	// (0x0002fc22) list_single_2graphic_pane_g1

0x9c8d,	// (0x00030a81) list_single_2graphic_pane_g2_ParamLimits

0x9c8d,	// (0x00030a81) list_single_2graphic_pane_g2

0x5076,	// (0x0002be6a) list_single_2graphic_pane_g3_ParamLimits

0x5076,	// (0x0002be6a) list_single_2graphic_pane_g3

0x8e3a,	// (0x0002fc2e) list_single_2graphic_pane_g4_ParamLimits

0x8e3a,	// (0x0002fc2e) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x00036575) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x00036575) list_single_2graphic_pane_g

0x8e4b,	// (0x0002fc3f) list_single_2graphic_pane_t1_ParamLimits

0x8e4b,	// (0x0002fc3f) list_single_2graphic_pane_t1

0x9efe,	// (0x00030cf2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9efe,	// (0x00030cf2) list_double2_graphic_large_graphic_pane_g1

0x8b03,	// (0x0002f8f7) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8b03,	// (0x0002f8f7) list_double2_graphic_large_graphic_pane_g2

0x5023,	// (0x0002be17) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5023,	// (0x0002be17) list_double2_graphic_large_graphic_pane_g3

0x8e79,	// (0x0002fc6d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8e79,	// (0x0002fc6d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0003657e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0003657e) list_double2_graphic_large_graphic_pane_g

0x8e85,	// (0x0002fc79) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8e85,	// (0x0002fc79) list_double2_graphic_large_graphic_pane_t1

0x8e9b,	// (0x0002fc8f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8e9b,	// (0x0002fc8f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x00036587) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x00036587) list_double2_graphic_large_graphic_pane_t

0xd311,	// (0x00034105) popup_fast_swap_window_ParamLimits

0xd311,	// (0x00034105) popup_fast_swap_window

0xd32d,	// (0x00034121) popup_side_volume_key_window

0xd347,	// (0x0003413b) stacon_top_pane

0xd351,	// (0x00034145) status_pane_ParamLimits

0xd351,	// (0x00034145) status_pane

0xd347,	// (0x0003413b) status_small_pane

0x924c,	// (0x00030040) control_pane

0x924c,	// (0x00030040) stacon_bottom_pane

0x9c6a,	// (0x00030a5e) scroll_pane_cp121

0xcb79,	// (0x0003396d) set_content_pane

0xdcc4,	// (0x00034ab8) bg_active_tab_pane_g1_cp1

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp1

0xdccd,	// (0x00034ac1) bg_active_tab_pane_g3_cp1

0xdcc4,	// (0x00034ab8) bg_passive_tab_pane_g1_cp1

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp1

0xdccd,	// (0x00034ac1) bg_passive_tab_pane_g3_cp1

0x9f0e,	// (0x00030d02) bg_active_tab_pane_g1_cp2

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp2

0x9f17,	// (0x00030d0b) bg_active_tab_pane_g3_cp2

0x9f0e,	// (0x00030d02) bg_passive_tab_pane_g1_cp2

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp2

0x9f17,	// (0x00030d0b) bg_passive_tab_pane_g3_cp2

0x9f20,	// (0x00030d14) bg_active_tab_pane_g1_cp3

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp3

0x9f29,	// (0x00030d1d) bg_active_tab_pane_g3_cp3

0x9f20,	// (0x00030d14) bg_passive_tab_pane_g1_cp3

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp3

0x9f29,	// (0x00030d1d) bg_passive_tab_pane_g3_cp3

0x9f32,	// (0x00030d26) bg_active_tab_pane_g1_cp4

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp4

0x9f3b,	// (0x00030d2f) bg_active_tab_pane_g3_cp4

0x9f32,	// (0x00030d26) bg_passive_tab_pane_g1_cp4

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp4

0x9f3b,	// (0x00030d2f) bg_passive_tab_pane_g3_cp4

0xd286,	// (0x0003407a) bg_active_tab_pane_g1_cp5

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp5

0xd28f,	// (0x00034083) bg_active_tab_pane_g3_cp5

0xd286,	// (0x0003407a) bg_passive_tab_pane_g1_cp5

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp5

0xd28f,	// (0x00034083) bg_passive_tab_pane_g3_cp5

0x9f44,	// (0x00030d38) list_set_graphic_pane_ParamLimits

0x9f44,	// (0x00030d38) list_set_graphic_pane

0x924c,	// (0x00030040) bg_set_opt_pane_cp4

0xd298,	// (0x0003408c) list_set_graphic_pane_g1_ParamLimits

0xd298,	// (0x0003408c) list_set_graphic_pane_g1

0xd2a4,	// (0x00034098) list_set_graphic_pane_g2_ParamLimits

0xd2a4,	// (0x00034098) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0003658c) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0003658c) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x000368e4) volume_small_pane_cp_g

0xd2c6,	// (0x000340ba) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd2c6,	// (0x000340ba) list_double2_large_graphic_pane_g1_cp2

0xd2d2,	// (0x000340c6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd2d2,	// (0x000340c6) list_double2_large_graphic_pane_g2_cp2

0xd2e1,	// (0x000340d5) list_double2_large_graphic_pane_g3_cp2

0xd2e9,	// (0x000340dd) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd2e9,	// (0x000340dd) list_double2_large_graphic_pane_t1_cp2

0xd2ff,	// (0x000340f3) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd2ff,	// (0x000340f3) list_double2_large_graphic_pane_t2_cp2

0xea2f,	// (0x00035823) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xea2f,	// (0x00035823) list_double_large_graphic_pane_g1_cp2

0xea40,	// (0x00035834) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xea40,	// (0x00035834) list_double_large_graphic_pane_g2_cp2

0xd42c,	// (0x00034220) list_double_large_graphic_pane_g3_cp2

0xea4f,	// (0x00035843) list_double_large_graphic_pane_g4_cp

0xea57,	// (0x0003584b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xea57,	// (0x0003584b) list_double_large_graphic_pane_t1_cp2

0xea6e,	// (0x00035862) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xea6e,	// (0x00035862) list_double_large_graphic_pane_t2_cp2

0xd35f,	// (0x00034153) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd35f,	// (0x00034153) list_double2_graphic_pane_g1_cp2

0xd36b,	// (0x0003415f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd36b,	// (0x0003415f) list_double2_graphic_pane_g2_cp2

0xd37a,	// (0x0003416e) list_double2_graphic_pane_g3_cp2

0xd382,	// (0x00034176) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd382,	// (0x00034176) list_double2_graphic_pane_t1_cp2

0xd398,	// (0x0003418c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd398,	// (0x0003418c) list_double2_graphic_pane_t2_cp2

0xd3aa,	// (0x0003419e) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd3aa,	// (0x0003419e) list_single_number_heading_pane_g1_cp2

0xd3b6,	// (0x000341aa) list_single_number_heading_pane_g2_cp2

0xd3be,	// (0x000341b2) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd3be,	// (0x000341b2) list_single_number_heading_pane_t1_cp2

0xd3d4,	// (0x000341c8) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd3d4,	// (0x000341c8) list_single_number_heading_pane_t2_cp2

0xd3e6,	// (0x000341da) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd3e6,	// (0x000341da) list_single_number_heading_pane_t3_cp2

0xd3aa,	// (0x0003419e) list_single_heading_pane_g1_cp2_ParamLimits

0xd3aa,	// (0x0003419e) list_single_heading_pane_g1_cp2

0xd3b6,	// (0x000341aa) list_single_heading_pane_g2_cp2

0xd3be,	// (0x000341b2) list_single_heading_pane_t1_cp2_ParamLimits

0xd3be,	// (0x000341b2) list_single_heading_pane_t1_cp2

0xe839,	// (0x0003562d) list_single_heading_pane_t2_cp2_ParamLimits

0xe839,	// (0x0003562d) list_single_heading_pane_t2_cp2

0xe7be,	// (0x000355b2) list_double_graphic_pane_g1_cp2_ParamLimits

0xe7be,	// (0x000355b2) list_double_graphic_pane_g1_cp2

0xe7ca,	// (0x000355be) list_double_graphic_pane_g2_cp2_ParamLimits

0xe7ca,	// (0x000355be) list_double_graphic_pane_g2_cp2

0xe7d9,	// (0x000355cd) list_double_graphic_pane_g3_cp2

0xe7e1,	// (0x000355d5) list_double_graphic_pane_t1_cp2_ParamLimits

0xe7e1,	// (0x000355d5) list_double_graphic_pane_t1_cp2

0xe7f7,	// (0x000355eb) list_double_graphic_pane_t2_cp2_ParamLimits

0xe7f7,	// (0x000355eb) list_double_graphic_pane_t2_cp2

0xd420,	// (0x00034214) list_double_number_pane_g1_cp2_ParamLimits

0xd420,	// (0x00034214) list_double_number_pane_g1_cp2

0xd42c,	// (0x00034220) list_double_number_pane_g2_cp2

0xe784,	// (0x00035578) list_double_number_pane_t1_cp2_ParamLimits

0xe784,	// (0x00035578) list_double_number_pane_t1_cp2

0xe796,	// (0x0003558a) list_double_number_pane_t2_cp2_ParamLimits

0xe796,	// (0x0003558a) list_double_number_pane_t2_cp2

0xe7ac,	// (0x000355a0) list_double_number_pane_t3_cp2_ParamLimits

0xe7ac,	// (0x000355a0) list_double_number_pane_t3_cp2

0xe6fc,	// (0x000354f0) list_single_graphic_pane_g1_cp2_ParamLimits

0xe6fc,	// (0x000354f0) list_single_graphic_pane_g1_cp2

0xd3aa,	// (0x0003419e) list_single_graphic_pane_g2_cp2_ParamLimits

0xd3aa,	// (0x0003419e) list_single_graphic_pane_g2_cp2

0xd3b6,	// (0x000341aa) list_single_graphic_pane_g3_cp2

0xe6d4,	// (0x000354c8) list_single_graphic_pane_t1_cp2_ParamLimits

0xe6d4,	// (0x000354c8) list_single_graphic_pane_t1_cp2

0xd3aa,	// (0x0003419e) list_single_number_pane_g1_cp2_ParamLimits

0xd3aa,	// (0x0003419e) list_single_number_pane_g1_cp2

0xd3b6,	// (0x000341aa) list_single_number_pane_g2_cp2

0xe6d4,	// (0x000354c8) list_single_number_pane_t1_cp2_ParamLimits

0xe6d4,	// (0x000354c8) list_single_number_pane_t1_cp2

0xe6ea,	// (0x000354de) list_single_number_pane_t2_cp2_ParamLimits

0xe6ea,	// (0x000354de) list_single_number_pane_t2_cp2

0xd2d2,	// (0x000340c6) list_double2_pane_g1_cp2_ParamLimits

0xd2d2,	// (0x000340c6) list_double2_pane_g1_cp2

0xd2e1,	// (0x000340d5) list_double2_pane_g2_cp2

0xd3f8,	// (0x000341ec) list_double2_pane_t1_cp2_ParamLimits

0xd3f8,	// (0x000341ec) list_double2_pane_t1_cp2

0xd40e,	// (0x00034202) list_double2_pane_t2_cp2_ParamLimits

0xd40e,	// (0x00034202) list_double2_pane_t2_cp2

0xd420,	// (0x00034214) list_double_pane_g1_cp2_ParamLimits

0xd420,	// (0x00034214) list_double_pane_g1_cp2

0xd42c,	// (0x00034220) list_double_pane_g2_cp2

0xd434,	// (0x00034228) list_double_pane_t1_cp2_ParamLimits

0xd434,	// (0x00034228) list_double_pane_t1_cp2

0xd44a,	// (0x0003423e) list_double_pane_t2_cp2_ParamLimits

0xd44a,	// (0x0003423e) list_double_pane_t2_cp2

0xd472,	// (0x00034266) list_single_pane_cp2_g3

0xd3aa,	// (0x0003419e) list_single_pane_g1_cp2_ParamLimits

0xd3aa,	// (0x0003419e) list_single_pane_g1_cp2

0xd3b6,	// (0x000341aa) list_single_pane_g2_cp2

0xd482,	// (0x00034276) list_single_pane_t1_cp2_ParamLimits

0xd482,	// (0x00034276) list_single_pane_t1_cp2

0xd49a,	// (0x0003428e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd49a,	// (0x0003428e) list_single_large_graphic_pane_g1_cp2

0xd4a6,	// (0x0003429a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd4a6,	// (0x0003429a) list_single_large_graphic_pane_g2_cp2

0xd4b2,	// (0x000342a6) list_single_large_graphic_pane_g3_cp2

0xd4ba,	// (0x000342ae) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd4ba,	// (0x000342ae) list_single_large_graphic_pane_g4_cp1

0xd4d4,	// (0x000342c8) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd4d4,	// (0x000342c8) list_single_large_graphic_pane_t1_cp2

0xe6b6,	// (0x000354aa) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe6b6,	// (0x000354aa) list_single_graphic_heading_pane_g1_cp2

0xe691,	// (0x00035485) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe691,	// (0x00035485) list_single_graphic_heading_pane_g4_cp2

0xd3b6,	// (0x000341aa) list_single_graphic_heading_pane_g5_cp2

0xd3be,	// (0x000341b2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd3be,	// (0x000341b2) list_single_graphic_heading_pane_t1_cp2

0xe6c2,	// (0x000354b6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe6c2,	// (0x000354b6) list_single_graphic_heading_pane_t2_cp2

0xe685,	// (0x00035479) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe685,	// (0x00035479) list_single_2graphic_pane_g1_cp2

0xe691,	// (0x00035485) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe691,	// (0x00035485) list_single_2graphic_pane_g2_cp2

0xd3b6,	// (0x000341aa) list_single_2graphic_pane_g3_cp2

0xdcd6,	// (0x00034aca) list_single_2graphic_pane_g4_cp2_ParamLimits

0xdcd6,	// (0x00034aca) list_single_2graphic_pane_g4_cp2

0xe6a0,	// (0x00035494) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe6a0,	// (0x00035494) list_single_2graphic_pane_t1_cp2

0x90ff,	// (0x0002fef3) list_highlight_pane_g10_cp1

0xe297,	// (0x0003508b) list_highlight_pane_g1_cp1

0xe29f,	// (0x00035093) list_highlight_pane_g2_cp1

0xe2a7,	// (0x0003509b) list_highlight_pane_g3_cp1

0xe2af,	// (0x000350a3) list_highlight_pane_g4_cp1

0xe2b7,	// (0x000350ab) list_highlight_pane_g5_cp1

0xe2bf,	// (0x000350b3) list_highlight_pane_g6_cp1

0xe2c7,	// (0x000350bb) list_highlight_pane_g7_cp1

0xe2cf,	// (0x000350c3) list_highlight_pane_g8_cp1

0xe2d7,	// (0x000350cb) list_highlight_pane_g9_cp1

0xabf6,	// (0x000319ea) form_field_slider_pane_t3

0xac04,	// (0x000319f8) form_field_slider_pane_t4

0xe1e1,	// (0x00034fd5) slider_form_pane_ParamLimits

0xe1e1,	// (0x00034fd5) slider_form_pane

0x924c,	// (0x00030040) control_abbreviations

0x924c,	// (0x00030040) control_conventions

0x924c,	// (0x00030040) control_definitions

0x924c,	// (0x00030040) format_table_attribute

0xe883,	// (0x00035677) bg_popup_preview_window_pane_g9

0x924c,	// (0x00030040) format_table_data2

0x924c,	// (0x00030040) format_table_data3

0x924c,	// (0x00030040) format_table_data_example

0x0008,

0x924c,	// (0x00030040) intro_purpose

0xf921,	// (0x00036715) bg_popup_preview_window_pane_g

0x924c,	// (0x00030040) texts_category

0x924c,	// (0x00030040) texts_graphics

0xd4ea,	// (0x000342de) text_digital

0xd4f9,	// (0x000342ed) text_primary

0xd508,	// (0x000342fc) text_primary_small

0xd517,	// (0x0003430b) text_secondary

0xd526,	// (0x0003431a) text_title

0xed10,	// (0x00035b04) bg_passive_tab_pane_g1_cp3_srt

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp3_srt

0xed19,	// (0x00035b0d) bg_passive_tab_pane_g3_cp3_srt

0x940e,	// (0x00030202) bg_active_tab_pane_cp3_srt_ParamLimits

0x940e,	// (0x00030202) bg_active_tab_pane_cp3_srt

0xdcb4,	// (0x00034aa8) tabs_4_active_pane_srt_g1

0x943a,	// (0x0003022e) tabs_4_active_pane_srt_t1_ParamLimits

0x943a,	// (0x0003022e) tabs_4_active_pane_srt_t1

0xed10,	// (0x00035b04) bg_active_tab_pane_g1_cp3_copy1

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp3_copy1

0xed19,	// (0x00035b0d) bg_active_tab_pane_g3_cp3_copy1

0x9458,	// (0x0003024c) tabs_2_long_active_pane_srt_ParamLimits

0x9458,	// (0x0003024c) tabs_2_long_active_pane_srt

0x9458,	// (0x0003024c) tabs_2_long_passive_pane_srt_ParamLimits

0x9458,	// (0x0003024c) tabs_2_long_passive_pane_srt

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp4_srt_ParamLimits

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp4_srt

0xec46,	// (0x00035a3a) bg_passive_tab_pane_g1_cp4_srt

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp4_srt

0xec4f,	// (0x00035a43) bg_passive_tab_pane_g3_cp4_srt

0x9458,	// (0x0003024c) bg_active_tab_pane_cp4_srt_ParamLimits

0x9458,	// (0x0003024c) bg_active_tab_pane_cp4_srt

0x9d17,	// (0x00030b0b) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9d17,	// (0x00030b0b) tabs_2_long_active_pane_srt_t1

0xec46,	// (0x00035a3a) bg_active_tab_pane_g1_cp4_srt

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp4_srt

0xec4f,	// (0x00035a43) bg_active_tab_pane_g3_cp4_srt

0x940e,	// (0x00030202) tabs_3_long_active_pane_srt_ParamLimits

0x940e,	// (0x00030202) tabs_3_long_active_pane_srt

0x940e,	// (0x00030202) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x940e,	// (0x00030202) tabs_3_long_passive_pane_cp_srt

0x940e,	// (0x00030202) tabs_3_long_passive_pane_srt_ParamLimits

0x940e,	// (0x00030202) tabs_3_long_passive_pane_srt

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp5_srt_ParamLimits

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp5_srt

0xd286,	// (0x0003407a) bg_passive_tab_pane_g1_cp5_srt

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp5_srt

0xd28f,	// (0x00034083) bg_passive_tab_pane_g3_cp5_srt

0x9458,	// (0x0003024c) bg_active_tab_pane_cp5_srt_ParamLimits

0x9458,	// (0x0003024c) bg_active_tab_pane_cp5_srt

0x9d2e,	// (0x00030b22) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9d2e,	// (0x00030b22) tabs_3_long_active_pane_srt_t1

0xd286,	// (0x0003407a) bg_active_tab_pane_g1_cp5_srt

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp5_srt

0xd28f,	// (0x00034083) bg_active_tab_pane_g3_cp5_srt

0xec38,	// (0x00035a2c) navi_text_pane_srt_t1

0xec30,	// (0x00035a24) navi_icon_pane_srt_g1

0xd63e,	// (0x00034432) midp_editing_number_pane_srt

0xd535,	// (0x00034329) midp_ticker_pane_srt

0xd646,	// (0x0003443a) midp_ticker_pane_srt_g1

0xd64e,	// (0x00034442) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x000365ab) midp_ticker_pane_srt_g

0xd656,	// (0x0003444a) midp_ticker_pane_srt_t1

0xec21,	// (0x00035a15) midp_editing_number_pane_t1_copy1

0x9f58,	// (0x00030d4c) listscroll_midp_pane

0x9f58,	// (0x00030d4c) midp_form_pane

0xd53d,	// (0x00034331) midp_info_popup_window_ParamLimits

0xd53d,	// (0x00034331) midp_info_popup_window

0xcc2e,	// (0x00033a22) bg_popup_sub_pane_cp50_ParamLimits

0xcc2e,	// (0x00033a22) bg_popup_sub_pane_cp50

0xdf3b,	// (0x00034d2f) listscroll_midp_info_pane_ParamLimits

0xdf3b,	// (0x00034d2f) listscroll_midp_info_pane

0xdf23,	// (0x00034d17) listscroll_form_midp_pane_ParamLimits

0xdf23,	// (0x00034d17) listscroll_form_midp_pane

0xdf2f,	// (0x00034d23) scroll_bar_cp050

0xabea,	// (0x000319de) list_midp_pane

0xf560,	// (0x00036354) signal_pane_g2_cp

0xde49,	// (0x00034c3d) listscroll_midp_info_pane_t1_ParamLimits

0xde49,	// (0x00034c3d) listscroll_midp_info_pane_t1

0xde61,	// (0x00034c55) listscroll_midp_info_pane_t2_ParamLimits

0xde61,	// (0x00034c55) listscroll_midp_info_pane_t2

0xde9f,	// (0x00034c93) listscroll_midp_info_pane_t3_ParamLimits

0xde9f,	// (0x00034c93) listscroll_midp_info_pane_t3

0xded9,	// (0x00034ccd) listscroll_midp_info_pane_t4_ParamLimits

0xded9,	// (0x00034ccd) listscroll_midp_info_pane_t4

0x0003,

0xf85c,	// (0x00036650) listscroll_midp_info_pane_t_ParamLimits

0xf85c,	// (0x00036650) listscroll_midp_info_pane_t

0xccd1,	// (0x00033ac5) scroll_pane_cp21

0xdded,	// (0x00034be1) form_midp_field_choice_group_pane

0xddf6,	// (0x00034bea) form_midp_field_text_pane

0xde2f,	// (0x00034c23) form_midp_field_time_pane

0xde37,	// (0x00034c2b) form_midp_gauge_slider_pane

0xde40,	// (0x00034c34) form_midp_gauge_wait_pane

0x924c,	// (0x00030040) form_midp_image_pane

0x8ead,	// (0x0002fca1) list_single_midp_pane_ParamLimits

0x8ead,	// (0x0002fca1) list_single_midp_pane

0xabc9,	// (0x000319bd) form_midp_field_text_pane_t1

0xdb31,	// (0x00034925) input_focus_pane_cp050

0xdddc,	// (0x00034bd0) list_midp_form_text_pane

0xddab,	// (0x00034b9f) form_midp_field_choice_group_pane_t1

0xddb9,	// (0x00034bad) input_focus_pane_cp051

0xddcd,	// (0x00034bc1) list_midp_choice_pane

0x924c,	// (0x00030040) status_idle_pane

0xdd8f,	// (0x00034b83) form_midp_field_time_pane_t1

0x90ff,	// (0x0002fef3) wait_anim_pane_g2_copy1

0xdd9d,	// (0x00034b91) form_midp_field_time_pane_t2

0x0001,

0xd5a8,	// (0x0003439c) aid_navinavi_width_2_pane

0xf857,	// (0x0003664b) form_midp_field_time_pane_t

0x924c,	// (0x00030040) input_focus_pane_cp052

0x924c,	// (0x00030040) bg_input_focus_pane_cp040

0xdd6b,	// (0x00034b5f) form_midp_gauge_slider_pane_t1

0xdd79,	// (0x00034b6d) form_midp_gauge_slider_pane_t2

0xabad,	// (0x000319a1) form_midp_gauge_slider_pane_t3

0xabbb,	// (0x000319af) form_midp_gauge_slider_pane_t4

0x0003,

0xf84e,	// (0x00036642) form_midp_gauge_slider_pane_t

0xdd87,	// (0x00034b7b) form_midp_slider_pane

0x9458,	// (0x0003024c) bg_input_focus_pane_cp041_ParamLimits

0x9458,	// (0x0003024c) bg_input_focus_pane_cp041

0xdd3b,	// (0x00034b2f) form_midp_gauge_wait_pane_t1_ParamLimits

0xdd3b,	// (0x00034b2f) form_midp_gauge_wait_pane_t1

0xdd4d,	// (0x00034b41) form_midp_gauge_wait_pane_t2_ParamLimits

0xdd4d,	// (0x00034b41) form_midp_gauge_wait_pane_t2

0x0001,

0xf849,	// (0x0003663d) form_midp_gauge_wait_pane_t_ParamLimits

0xf849,	// (0x0003663d) form_midp_gauge_wait_pane_t

0xdd5f,	// (0x00034b53) form_midp_wait_pane_ParamLimits

0xdd5f,	// (0x00034b53) form_midp_wait_pane

0xdd05,	// (0x00034af9) form_midp_image_pane_g1

0xdd0e,	// (0x00034b02) form_midp_image_pane_t1

0xdd1d,	// (0x00034b11) form_midp_image_pane_t2

0xdd2c,	// (0x00034b20) form_midp_image_pane_t3

0x0002,

0xf842,	// (0x00036636) form_midp_image_pane_t

0xdcfc,	// (0x00034af0) list_single_midp_pane_g1

0x480b,	// (0x0002b5ff) list_single_midp_pane_t1

0xab99,	// (0x0003198d) list_midp_form_item_pane_ParamLimits

0xab99,	// (0x0003198d) list_midp_form_item_pane

0xd550,	// (0x00034344) list_midp_form_item_pane_t1

0xd55f,	// (0x00034353) midp_ticker_pane_g1

0xd56b,	// (0x0003435f) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x00036591) midp_ticker_pane_g

0xd577,	// (0x0003436b) midp_ticker_pane_t1

0xec21,	// (0x00035a15) midp_editing_number_pane_t1

0xeca9,	// (0x00035a9d) midp_editing_number_pane

0xecb5,	// (0x00035aa9) midp_ticker_pane

0xec11,	// (0x00035a05) ai_message_heading_pane

0x924c,	// (0x00030040) bg_popup_window_pane_cp14

0xec19,	// (0x00035a0d) listscroll_ai_message_pane

0xeb9b,	// (0x0003598f) ai_message_heading_pane_g1_ParamLimits

0xeb9b,	// (0x0003598f) ai_message_heading_pane_g1

0xeba7,	// (0x0003599b) ai_message_heading_pane_g2_ParamLimits

0xeba7,	// (0x0003599b) ai_message_heading_pane_g2

0xebb3,	// (0x000359a7) ai_message_heading_pane_g3_ParamLimits

0xebb3,	// (0x000359a7) ai_message_heading_pane_g3

0xebbf,	// (0x000359b3) ai_message_heading_pane_g4_ParamLimits

0xebbf,	// (0x000359b3) ai_message_heading_pane_g4

0x0003,

0xf983,	// (0x00036777) ai_message_heading_pane_g_ParamLimits

0xf983,	// (0x00036777) ai_message_heading_pane_g

0xebcb,	// (0x000359bf) ai_message_heading_pane_t1_ParamLimits

0xebcb,	// (0x000359bf) ai_message_heading_pane_t1

0xebe5,	// (0x000359d9) ai_message_heading_pane_t2_ParamLimits

0xebe5,	// (0x000359d9) ai_message_heading_pane_t2

0x0001,

0xf98c,	// (0x00036780) ai_message_heading_pane_t_ParamLimits

0xf98c,	// (0x00036780) ai_message_heading_pane_t

0xebf7,	// (0x000359eb) bg_popup_heading_pane_cp1_ParamLimits

0xebf7,	// (0x000359eb) bg_popup_heading_pane_cp1

0xeb89,	// (0x0003597d) list_ai_message_pane_ParamLimits

0xeb89,	// (0x0003597d) list_ai_message_pane

0xccd1,	// (0x00033ac5) scroll_pane_cp10

0xeb25,	// (0x00035919) list_ai_message_pane_g1

0xeb2d,	// (0x00035921) list_ai_message_pane_g2

0x0001,

0xf960,	// (0x00036754) list_ai_message_pane_g

0xeb35,	// (0x00035929) list_ai_message_pane_t1_ParamLimits

0xeb35,	// (0x00035929) list_ai_message_pane_t1

0xeb4a,	// (0x0003593e) list_ai_message_pane_t2_ParamLimits

0xeb4a,	// (0x0003593e) list_ai_message_pane_t2

0xeb5f,	// (0x00035953) list_ai_message_pane_t3_ParamLimits

0xeb5f,	// (0x00035953) list_ai_message_pane_t3

0xeb74,	// (0x00035968) list_ai_message_pane_t4_ParamLimits

0xeb74,	// (0x00035968) list_ai_message_pane_t4

0x0003,

0xf965,	// (0x00036759) list_ai_message_pane_t_ParamLimits

0xf965,	// (0x00036759) list_ai_message_pane_t

0xeb13,	// (0x00035907) cell_ai_soft_ind_pane_ParamLimits

0xeb13,	// (0x00035907) cell_ai_soft_ind_pane

0xd589,	// (0x0003437d) cell_ai_soft_ind_pane_g1_ParamLimits

0xd589,	// (0x0003437d) cell_ai_soft_ind_pane_g1

0x924c,	// (0x00030040) grid_highlight_cp1

0xd596,	// (0x0003438a) text_secondary_cp56_ParamLimits

0xd596,	// (0x0003438a) text_secondary_cp56

0xeae8,	// (0x000358dc) example_general_pane_ParamLimits

0xeae8,	// (0x000358dc) example_general_pane

0xeaf4,	// (0x000358e8) example_parent_pane_g1_ParamLimits

0xeaf4,	// (0x000358e8) example_parent_pane_g1

0xeb00,	// (0x000358f4) example_parent_pane_t1_ParamLimits

0xeb00,	// (0x000358f4) example_parent_pane_t1

0xa48d,	// (0x00031281) popup_preview_text_window_ParamLimits

0xa48d,	// (0x00031281) popup_preview_text_window

0xd47a,	// (0x0003426e) list_single_pane_cp2_g4

0x9855,	// (0x00030649) bg_popup_preview_window_pane_ParamLimits

0x9855,	// (0x00030649) bg_popup_preview_window_pane

0xe88b,	// (0x0003567f) popup_preview_text_window_t1_ParamLimits

0xe88b,	// (0x0003567f) popup_preview_text_window_t1

0xe8a9,	// (0x0003569d) popup_preview_text_window_t2_ParamLimits

0xe8a9,	// (0x0003569d) popup_preview_text_window_t2

0xe8f2,	// (0x000356e6) popup_preview_text_window_t3_ParamLimits

0xe8f2,	// (0x000356e6) popup_preview_text_window_t3

0xe937,	// (0x0003572b) popup_preview_text_window_t4_ParamLimits

0xe937,	// (0x0003572b) popup_preview_text_window_t4

0x0004,

0xf934,	// (0x00036728) popup_preview_text_window_t_ParamLimits

0xf934,	// (0x00036728) popup_preview_text_window_t

0xe9b5,	// (0x000357a9) scroll_pane_cp11

0xda43,	// (0x00034837) bg_popup_preview_window_pane_g1

0xe84b,	// (0x0003563f) bg_popup_preview_window_pane_g2

0xe853,	// (0x00035647) bg_popup_preview_window_pane_g3

0xe85b,	// (0x0003564f) bg_popup_preview_window_pane_g4

0xe863,	// (0x00035657) bg_popup_preview_window_pane_g5

0xe86b,	// (0x0003565f) bg_popup_preview_window_pane_g6

0xe873,	// (0x00035667) bg_popup_preview_window_pane_g7

0xe87b,	// (0x0003566f) bg_popup_preview_window_pane_g8

0x4d3e,	// (0x0002bb32) aid_popup_width_pane

0xa40f,	// (0x00031203) popup_midp_note_alarm_window_ParamLimits

0xa40f,	// (0x00031203) popup_midp_note_alarm_window

0xcb82,	// (0x00033976) data_form_pane_ParamLimits

0x8d23,	// (0x0002fb17) form_field_data_pane_g1

0x8d2d,	// (0x0002fb21) form_field_data_pane_t1_ParamLimits

0xcb8e,	// (0x00033982) input_focus_pane_ParamLimits

0xcb9c,	// (0x00033990) data_form_wide_pane_ParamLimits

0x4564,	// (0x0002b358) form_field_data_wide_pane_g1

0x4570,	// (0x0002b364) form_field_data_wide_pane_t1_ParamLimits

0x9ae1,	// (0x000308d5) input_focus_pane_cp6_ParamLimits

0x9cf5,	// (0x00030ae9) input_popup_find_pane_g1_ParamLimits

0x9cf5,	// (0x00030ae9) input_popup_find_pane_g1

0x519f,	// (0x0002bf93) aid_navi_side_left_pane

0x51af,	// (0x0002bfa3) aid_navi_side_right_pane

0xe368,	// (0x0003515c) bg_popup_window_pane_cp30_ParamLimits

0xe368,	// (0x0003515c) bg_popup_window_pane_cp30

0xe3e2,	// (0x000351d6) popup_midp_note_alarm_window_g1_ParamLimits

0xe3e2,	// (0x000351d6) popup_midp_note_alarm_window_g1

0xe412,	// (0x00035206) popup_midp_note_alarm_window_t1_ParamLimits

0xe412,	// (0x00035206) popup_midp_note_alarm_window_t1

0xe4b3,	// (0x000352a7) popup_midp_note_alarm_window_t2_ParamLimits

0xe4b3,	// (0x000352a7) popup_midp_note_alarm_window_t2

0xe561,	// (0x00035355) popup_midp_note_alarm_window_t3_ParamLimits

0xe561,	// (0x00035355) popup_midp_note_alarm_window_t3

0xe589,	// (0x0003537d) popup_midp_note_alarm_window_t4_ParamLimits

0xe589,	// (0x0003537d) popup_midp_note_alarm_window_t4

0xe5a9,	// (0x0003539d) popup_midp_note_alarm_window_t5_ParamLimits

0xe5a9,	// (0x0003539d) popup_midp_note_alarm_window_t5

0x000a,

0xf8d1,	// (0x000366c5) popup_midp_note_alarm_window_t_ParamLimits

0xf8d1,	// (0x000366c5) popup_midp_note_alarm_window_t

0xe655,	// (0x00035449) wait_bar_pane_cp1_ParamLimits

0xe655,	// (0x00035449) wait_bar_pane_cp1

0x924c,	// (0x00030040) wait_anim_pane_copy1

0x924c,	// (0x00030040) wait_border_pane_copy1

0xe0ae,	// (0x00034ea2) wait_border_pane_g1_copy1

0x458a,	// (0x0002b37e) form_field_popup_pane_g1

0x8d45,	// (0x0002fb39) form_field_popup_pane_t1_ParamLimits

0xcb8e,	// (0x00033982) input_focus_pane_cp7_ParamLimits

0xcb82,	// (0x00033976) list_form_pane_ParamLimits

0x45aa,	// (0x0002b39e) form_field_popup_wide_pane_g1

0x45b2,	// (0x0002b3a6) form_field_popup_wide_pane_t1_ParamLimits

0xcb8e,	// (0x00033982) input_focus_pane_cp8_ParamLimits

0xcbbc,	// (0x000339b0) list_form_wide_pane_ParamLimits

0xed41,	// (0x00035b35) aid_size_cell_graphic_pane

0x8dc2,	// (0x0002fbb6) data_form_pane_t1_ParamLimits

0x8ed4,	// (0x0002fcc8) data_form_wide_pane_t1_ParamLimits

0xa7eb,	// (0x000315df) bg_status_flat_pane

0x9349,	// (0x0003013d) title_pane_t1_ParamLimits

0x93d6,	// (0x000301ca) title_pane_t2_ParamLimits

0x93fc,	// (0x000301f0) title_pane_t3_ParamLimits

0xf59b,	// (0x0003638f) title_pane_t_ParamLimits

0x9df5,	// (0x00030be9) level_1_signal_ParamLimits

0x9e07,	// (0x00030bfb) level_2_signal_ParamLimits

0x9e1a,	// (0x00030c0e) level_3_signal_ParamLimits

0x9e2d,	// (0x00030c21) level_4_signal_ParamLimits

0x9e40,	// (0x00030c34) level_5_signal_ParamLimits

0x9e53,	// (0x00030c47) level_6_signal_ParamLimits

0x9e66,	// (0x00030c5a) level_7_signal_ParamLimits

0x9df5,	// (0x00030be9) level_1_battery_ParamLimits

0x9e07,	// (0x00030bfb) level_2_battery_ParamLimits

0x9e1a,	// (0x00030c0e) level_3_battery_ParamLimits

0x9e2d,	// (0x00030c21) level_4_battery_ParamLimits

0x9e40,	// (0x00030c34) level_5_battery_ParamLimits

0x9e53,	// (0x00030c47) level_6_battery_ParamLimits

0x9e66,	// (0x00030c5a) level_7_battery_ParamLimits

0xe297,	// (0x0003508b) bg_status_flat_pane_g1

0xe29f,	// (0x00035093) bg_status_flat_pane_g2

0xe2a7,	// (0x0003509b) bg_status_flat_pane_g3

0xe2af,	// (0x000350a3) bg_status_flat_pane_g4

0xe2b7,	// (0x000350ab) bg_status_flat_pane_g5

0xe2bf,	// (0x000350b3) bg_status_flat_pane_g6

0xe2c7,	// (0x000350bb) bg_status_flat_pane_g7

0x9424,	// (0x00030218) tabs_3_active_pane_t1_ParamLimits

0x9424,	// (0x00030218) tabs_3_passive_pane_t1_ParamLimits

0x943a,	// (0x0003022e) tabs_4_active_pane_t1_ParamLimits

0x943a,	// (0x0003022e) tabs_4_1_passive_pane_t1_ParamLimits

0x9d01,	// (0x00030af5) tabs_2_active_pane_t1_ParamLimits

0x9d01,	// (0x00030af5) tabs_2_passive_pane_t1_ParamLimits

0x9458,	// (0x0003024c) bg_active_tab_pane_cp4_ParamLimits

0x9d17,	// (0x00030b0b) tabs_2_long_active_pane_t1_ParamLimits

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp4_ParamLimits

0x56b6,	// (0x0002c4aa) list_single_midp_graphic_pane_t1_ParamLimits

0x9458,	// (0x0003024c) bg_active_tab_pane_cp5_ParamLimits

0x9d2e,	// (0x00030b22) tabs_3_long_active_pane_t1_ParamLimits

0xcd0a,	// (0x00033afe) bg_passive_tab_pane_cp5_ParamLimits

0x56b6,	// (0x0002c4aa) list_single_midp_graphic_pane_t1

0xa7eb,	// (0x000315df) bg_status_flat_pane_ParamLimits

0xd922,	// (0x00034716) indicator_pane_cp2_ParamLimits

0xd922,	// (0x00034716) indicator_pane_cp2

0xa951,	// (0x00031745) navi_pane_srt_ParamLimits

0xa951,	// (0x00031745) navi_pane_srt

0xd94a,	// (0x0003473e) popup_clock_digital_analogue_window_cp1

0x95e0,	// (0x000303d4) indicator_pane_t1

0xd535,	// (0x00034329) copy_highlight_pane

0xd535,	// (0x00034329) cursor_graphics_pane

0xd535,	// (0x00034329) graphic_within_text_pane

0xd535,	// (0x00034329) link_highlight_pane

0xe978,	// (0x0003576c) popup_preview_text_window_t5_ParamLimits

0xe978,	// (0x0003576c) popup_preview_text_window_t5

0xd5b0,	// (0x000343a4) cursor_digital_pane

0xd5b0,	// (0x000343a4) cursor_primary_pane

0xd5c1,	// (0x000343b5) cursor_primary_small_pane

0xd5c9,	// (0x000343bd) cursor_secondary_pane

0xd5d1,	// (0x000343c5) cursor_title_pane

0xd5b0,	// (0x000343a4) link_highlight_digital_pane

0xd5b8,	// (0x000343ac) link_highlight_primary_pane

0xd5c1,	// (0x000343b5) link_highlight_primary_small_pane

0xd5c9,	// (0x000343bd) link_highlight_secondary_pane

0xd5d1,	// (0x000343c5) link_highlight_title_pane

0xd5b0,	// (0x000343a4) copy_highlight_digital_pane

0xd5b0,	// (0x000343a4) copy_highlight_primary_pane

0xd5c1,	// (0x000343b5) copy_highlight_primary_small_pane

0xd5c9,	// (0x000343bd) copy_highlight_secondary_pane

0xd5d1,	// (0x000343c5) copy_highlight_title_pane

0xd5c9,	// (0x000343bd) graphic_text_digital_pane

0xe317,	// (0x0003510b) graphic_text_primary_pane

0xe320,	// (0x00035114) graphic_text_primary_small_pane

0xd5c1,	// (0x000343b5) graphic_text_secondary_pane

0xd5b0,	// (0x000343a4) graphic_text_title_pane

0x9ff5,	// (0x00030de9) cursor_primary_pane_g1

0xe309,	// (0x000350fd) cursor_text_primary_t1

0xac26,	// (0x00031a1a) cursor_primary_small_pane_g1

0xe2fb,	// (0x000350ef) cursor_text_primary_small_t1

0xac1c,	// (0x00031a10) cursor_primary_small_pane_g1_copy1

0xe2ed,	// (0x000350e1) cursor_text_primary_small_t1_copy1

0xe2df,	// (0x000350d3) cursor_text_title_t1

0xac12,	// (0x00031a06) cursor_title_pane_g1

0x9ff5,	// (0x00030de9) cursor_digital_pane_g1

0xd5d9,	// (0x000343cd) cursor_text_digital_t1

0xd5e7,	// (0x000343db) link_highlight_primary_pane_g1

0xe288,	// (0x0003507c) link_highlight_primary_pane_t1

0xd5e7,	// (0x000343db) link_highlight_primary_small_pane_g1

0xd5ef,	// (0x000343e3) link_highlight_primary_small_pane_t1

0xd5fe,	// (0x000343f2) link_highlight_secondary_pane_g1

0xd606,	// (0x000343fa) link_highlight_secondary_pane_t1

0xe1ed,	// (0x00034fe1) link_highlight_title_pane_g1

0xe204,	// (0x00034ff8) link_highlight_title_pane_t1

0xe1ed,	// (0x00034fe1) link_highlight_digital_pane_g1

0xe1f5,	// (0x00034fe9) link_highlight_digital_pane_t1

0xe0c9,	// (0x00034ebd) copy_highlight_primary_pane_g1

0xe0ef,	// (0x00034ee3) copy_highlight_primary_pane_t1

0xe0c9,	// (0x00034ebd) copy_highlight_primary_small_pane_g1

0xe0e0,	// (0x00034ed4) copy_highlight_primary_small_pane_t1

0xd615,	// (0x00034409) copy_highlight_secondary_pane_g1

0xd61d,	// (0x00034411) copy_highlight_secondary_pane_t1

0xe0c9,	// (0x00034ebd) copy_highlight_title_pane_g1

0xe0d1,	// (0x00034ec5) copy_highlight_title_pane_t1

0xe0c9,	// (0x00034ebd) copy_highlight_digital_pane_g1

0xeec7,	// (0x00035cbb) copy_highlight_digital_pane_t1

0xedc5,	// (0x00035bb9) graphic_text_primary_pane_g1

0xeeab,	// (0x00035c9f) graphic_text_primary_pane_t1

0xeeb9,	// (0x00035cad) graphic_text_primary_pane_t2

0x0001,

0xfa00,	// (0x000367f4) graphic_text_primary_pane_t

0xee87,	// (0x00035c7b) graphic_text_primary_small_pane_g1

0xee8f,	// (0x00035c83) graphic_text_primary_small_pane_t1

0xee9d,	// (0x00035c91) graphic_text_primary_small_pane_t2

0x0001,

0xf9fb,	// (0x000367ef) graphic_text_primary_small_pane_t

0xee0d,	// (0x00035c01) graphic_text_secondary_pane_g1

0xee15,	// (0x00035c09) graphic_text_secondary_pane_t1

0xee79,	// (0x00035c6d) graphic_text_secondary_pane_t2

0x0001,

0xf9f6,	// (0x000367ea) graphic_text_secondary_pane_t

0xede9,	// (0x00035bdd) graphic_text_title_pane_g1

0xedf1,	// (0x00035be5) graphic_text_title_pane_t1

0xedff,	// (0x00035bf3) graphic_text_title_pane_t2

0x0001,

0xf9f1,	// (0x000367e5) graphic_text_title_pane_t

0xedc5,	// (0x00035bb9) graphic_text_digital_pane_g1

0xedcd,	// (0x00035bc1) graphic_text_digital_pane_t1

0xeddb,	// (0x00035bcf) graphic_text_digital_pane_t2

0x0001,

0xf9ec,	// (0x000367e0) graphic_text_digital_pane_t

0x9458,	// (0x0003024c) navi_icon_pane_srt_ParamLimits

0x9458,	// (0x0003024c) navi_icon_pane_srt

0x924c,	// (0x00030040) navi_midp_pane_srt

0x924c,	// (0x00030040) navi_navi_pane_srt

0x9458,	// (0x0003024c) navi_text_pane_srt_ParamLimits

0x9458,	// (0x0003024c) navi_text_pane_srt

0xed90,	// (0x00035b84) navi_navi_icon_text_pane_srt

0xed98,	// (0x00035b8c) navi_navi_pane_srt_g1_ParamLimits

0xed98,	// (0x00035b8c) navi_navi_pane_srt_g1

0xedaa,	// (0x00035b9e) navi_navi_pane_srt_g2_ParamLimits

0xedaa,	// (0x00035b9e) navi_navi_pane_srt_g2

0x0001,

0xf9e7,	// (0x000367db) navi_navi_pane_srt_g_ParamLimits

0xf9e7,	// (0x000367db) navi_navi_pane_srt_g

0xedbc,	// (0x00035bb0) navi_navi_tabs_pane_srt

0xed90,	// (0x00035b84) navi_navi_text_pane_srt

0xed90,	// (0x00035b84) navi_navi_volume_pane_srt

0xed81,	// (0x00035b75) navi_navi_text_pane_srt_t1

0x59ed,	// (0x0002c7e1) navi_navi_volume_pane_srt_g1

0x59f5,	// (0x0002c7e9) volume_small_pane_srt_ParamLimits

0x59f5,	// (0x0002c7e9) volume_small_pane_srt

0x5456,	// (0x0002c24a) volume_small_pane_srt_g1_ParamLimits

0x5456,	// (0x0002c24a) volume_small_pane_srt_g1

0x5466,	// (0x0002c25a) volume_small_pane_srt_g2_ParamLimits

0x5466,	// (0x0002c25a) volume_small_pane_srt_g2

0x5477,	// (0x0002c26b) volume_small_pane_srt_g3_ParamLimits

0x5477,	// (0x0002c26b) volume_small_pane_srt_g3

0x5488,	// (0x0002c27c) volume_small_pane_srt_g4_ParamLimits

0x5488,	// (0x0002c27c) volume_small_pane_srt_g4

0x5499,	// (0x0002c28d) volume_small_pane_srt_g5_ParamLimits

0x5499,	// (0x0002c28d) volume_small_pane_srt_g5

0x54aa,	// (0x0002c29e) volume_small_pane_srt_g6_ParamLimits

0x54aa,	// (0x0002c29e) volume_small_pane_srt_g6

0x54bb,	// (0x0002c2af) volume_small_pane_srt_g7_ParamLimits

0x54bb,	// (0x0002c2af) volume_small_pane_srt_g7

0x54cc,	// (0x0002c2c0) volume_small_pane_srt_g8_ParamLimits

0x54cc,	// (0x0002c2c0) volume_small_pane_srt_g8

0x54dd,	// (0x0002c2d1) volume_small_pane_srt_g9_ParamLimits

0x54dd,	// (0x0002c2d1) volume_small_pane_srt_g9

0x54ee,	// (0x0002c2e2) volume_small_pane_srt_g10_ParamLimits

0x54ee,	// (0x0002c2e2) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x00036596) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x00036596) volume_small_pane_srt_g

0x98fe,	// (0x000306f2) query_popup_data_pane_cp2

0xed67,	// (0x00035b5b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xed67,	// (0x00035b5b) navi_navi_icon_text_pane_srt_t1

0xe317,	// (0x0003510b) navi_tabs_2_long_pane_srt

0xe317,	// (0x0003510b) navi_tabs_2_pane_srt

0xe317,	// (0x0003510b) navi_tabs_3_long_pane_srt

0xe317,	// (0x0003510b) navi_tabs_3_pane_srt

0xe317,	// (0x0003510b) navi_tabs_4_pane_srt

0x59cd,	// (0x0002c7c1) tabs_2_active_pane_srt_ParamLimits

0x59cd,	// (0x0002c7c1) tabs_2_active_pane_srt

0x59dd,	// (0x0002c7d1) tabs_2_passive_pane_srt_ParamLimits

0x59dd,	// (0x0002c7d1) tabs_2_passive_pane_srt

0xdb31,	// (0x00034925) bg_passive_tab_pane_cp1_srt_ParamLimits

0xdb31,	// (0x00034925) bg_passive_tab_pane_cp1_srt

0xdcc4,	// (0x00034ab8) bg_passive_tab_pane_g1_cp1_srt

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp1_srt

0xdccd,	// (0x00034ac1) bg_passive_tab_pane_g3_cp1_srt

0x940e,	// (0x00030202) bg_active_tab_pane_cp1_srt_ParamLimits

0x940e,	// (0x00030202) bg_active_tab_pane_cp1_srt

0xdcbc,	// (0x00034ab0) tabs_2_active_pane_srt_g1

0x9d01,	// (0x00030af5) tabs_2_active_pane_srt_t1_ParamLimits

0x9d01,	// (0x00030af5) tabs_2_active_pane_srt_t1

0xdcc4,	// (0x00034ab8) bg_active_tab_pane_g1_cp1_srt

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp1_srt

0xdccd,	// (0x00034ac1) bg_active_tab_pane_g3_cp1_srt

0x599a,	// (0x0002c78e) tabs_3_active_pane_srt_ParamLimits

0x599a,	// (0x0002c78e) tabs_3_active_pane_srt

0x59ab,	// (0x0002c79f) tabs_3_passive_pane_cp_srt_ParamLimits

0x59ab,	// (0x0002c79f) tabs_3_passive_pane_cp_srt

0x59bc,	// (0x0002c7b0) tabs_3_passive_pane_srt_ParamLimits

0x59bc,	// (0x0002c7b0) tabs_3_passive_pane_srt

0xdb31,	// (0x00034925) bg_passive_tab_pane_cp2_srt_ParamLimits

0xdb31,	// (0x00034925) bg_passive_tab_pane_cp2_srt

0xd62c,	// (0x00034420) bg_passive_tab_pane_g1_cp2_srt

0xd23f,	// (0x00034033) bg_passive_tab_pane_g2_cp2_srt

0xd635,	// (0x00034429) bg_passive_tab_pane_g3_cp2_srt

0x940e,	// (0x00030202) bg_active_tab_pane_cp2_srt_ParamLimits

0x940e,	// (0x00030202) bg_active_tab_pane_cp2_srt

0xed57,	// (0x00035b4b) tabs_3_active_pane_srt_g1

0x9424,	// (0x00030218) tabs_3_active_pane_srt_t1_ParamLimits

0x9424,	// (0x00030218) tabs_3_active_pane_srt_t1

0xd62c,	// (0x00034420) bg_active_tab_pane_g1_cp2_srt

0xd23f,	// (0x00034033) bg_active_tab_pane_g2_cp2_srt

0xd635,	// (0x00034429) bg_active_tab_pane_g3_cp2_srt

0x5952,	// (0x0002c746) tabs_4_active_pane_srt_ParamLimits

0x5952,	// (0x0002c746) tabs_4_active_pane_srt

0x5964,	// (0x0002c758) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5964,	// (0x0002c758) tabs_4_passive_pane_cp2_srt

0xd74f,	// (0x00034543) aid_size_cell_toolbar

0xa17f,	// (0x00030f73) main_idle_act_pane_ParamLimits

0xd80b,	// (0x000345ff) popup_large_graphic_colour_window_ParamLimits

0xa6dd,	// (0x000314d1) popup_toolbar_window_ParamLimits

0xa6dd,	// (0x000314d1) popup_toolbar_window

0x5929,	// (0x0002c71d) list_single_graphic_2heading_pane_ParamLimits

0x5929,	// (0x0002c71d) list_single_graphic_2heading_pane

0xcecf,	// (0x00033cc3) aid_size_cell_apps_grid_lsc_pane

0xcee1,	// (0x00033cd5) aid_size_cell_apps_grid_prt_pane

0xcd0a,	// (0x00033afe) bg_wml_button_pane_cp1_ParamLimits

0xcd0a,	// (0x00033afe) bg_wml_button_pane_cp1

0xabc9,	// (0x000319bd) form_midp_field_text_pane_t1_ParamLimits

0xdb31,	// (0x00034925) input_focus_pane_cp050_ParamLimits

0xdddc,	// (0x00034bd0) list_midp_form_text_pane_ParamLimits

0xddb9,	// (0x00034bad) input_focus_pane_cp051_ParamLimits

0xddcd,	// (0x00034bc1) list_midp_choice_pane_ParamLimits

0xab67,	// (0x0003195b) list_single_2graphic_pane_cp3_ParamLimits

0xab67,	// (0x0003195b) list_single_2graphic_pane_cp3

0xab7a,	// (0x0003196e) list_single_midp_graphic_pane_ParamLimits

0xab7a,	// (0x0003196e) list_single_midp_graphic_pane

0x4785,	// (0x0002b579) list_single_graphic_2heading_pane_g1_ParamLimits

0x4785,	// (0x0002b579) list_single_graphic_2heading_pane_g1

0x4791,	// (0x0002b585) list_single_graphic_2heading_pane_g4_ParamLimits

0x4791,	// (0x0002b585) list_single_graphic_2heading_pane_g4

0x4341,	// (0x0002b135) list_single_graphic_2heading_pane_g5_ParamLimits

0x4341,	// (0x0002b135) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x000365e9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x000365e9) list_single_graphic_2heading_pane_g

0x479d,	// (0x0002b591) list_single_graphic_2heading_pane_t1_ParamLimits

0x479d,	// (0x0002b591) list_single_graphic_2heading_pane_t1

0x47b1,	// (0x0002b5a5) list_single_graphic_2heading_pane_t2_ParamLimits

0x47b1,	// (0x0002b5a5) list_single_graphic_2heading_pane_t2

0x47cb,	// (0x0002b5bf) list_single_graphic_2heading_pane_t3_ParamLimits

0x47cb,	// (0x0002b5bf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x000365f0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x000365f0) list_single_graphic_2heading_pane_t

0xd98d,	// (0x00034781) bg_popup_sub_pane_cp2

0xd9b3,	// (0x000347a7) grid_toobar_pane

0x5652,	// (0x0002c446) cell_toolbar_pane_ParamLimits

0x5652,	// (0x0002c446) cell_toolbar_pane

0xd9e9,	// (0x000347dd) cell_toolbar_pane_g1_ParamLimits

0xd9e9,	// (0x000347dd) cell_toolbar_pane_g1

0xd9fb,	// (0x000347ef) cell_toolbar_pane_g2_ParamLimits

0xd9fb,	// (0x000347ef) cell_toolbar_pane_g2

0x0001,

0xf803,	// (0x000365f7) cell_toolbar_pane_g_ParamLimits

0xf803,	// (0x000365f7) cell_toolbar_pane_g

0xda1d,	// (0x00034811) grid_highlight_pane_cp2_ParamLimits

0xda1d,	// (0x00034811) grid_highlight_pane_cp2

0xda37,	// (0x0003482b) toolbar_button_pane

0xda43,	// (0x00034837) toolbar_button_pane_g1

0xda4b,	// (0x0003483f) toolbar_button_pane_g2

0xda53,	// (0x00034847) toolbar_button_pane_g3

0xda5b,	// (0x0003484f) toolbar_button_pane_g4

0xda63,	// (0x00034857) toolbar_button_pane_g5

0xda6b,	// (0x0003485f) toolbar_button_pane_g6

0xda73,	// (0x00034867) toolbar_button_pane_g7

0xda7b,	// (0x0003486f) toolbar_button_pane_g8

0xda83,	// (0x00034877) toolbar_button_pane_g9

0x0009,

0xf808,	// (0x000365fc) toolbar_button_pane_g

0x5681,	// (0x0002c475) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5681,	// (0x0002c475) list_single_2graphic_pane_g1_cp3

0xaacf,	// (0x000318c3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaacf,	// (0x000318c3) list_single_2graphic_pane_g2_cp3

0xd3b6,	// (0x000341aa) list_single_2graphic_pane_g3_cp3

0xdcd6,	// (0x00034aca) list_single_2graphic_pane_g4_cp3_ParamLimits

0xdcd6,	// (0x00034aca) list_single_2graphic_pane_g4_cp3

0x569c,	// (0x0002c490) list_single_2graphic_pane_t1_cp3_ParamLimits

0x569c,	// (0x0002c490) list_single_2graphic_pane_t1_cp3

0xd3aa,	// (0x0003419e) list_single_midp_graphic_pane_g2_ParamLimits

0xd3aa,	// (0x0003419e) list_single_midp_graphic_pane_g2

0x4758,	// (0x0002b54c) aid_zoom_text_primary

0x564a,	// (0x0002c43e) aid_zoom_text_secondary

0xd6e7,	// (0x000344db) status_small_pane_g7_ParamLimits

0xd6e7,	// (0x000344db) status_small_pane_g7

0xd70a,	// (0x000344fe) status_small_pane_t1_ParamLimits

0x9312,	// (0x00030106) title_pane_g2

0x0003,

0xf592,	// (0x00036386) title_pane_g

0x999d,	// (0x00030791) aid_size_cell_colour_1_pane_ParamLimits

0x999d,	// (0x00030791) aid_size_cell_colour_1_pane

0x99b1,	// (0x000307a5) aid_size_cell_colour_2_pane_ParamLimits

0x99b1,	// (0x000307a5) aid_size_cell_colour_2_pane

0x99c5,	// (0x000307b9) aid_size_cell_colour_3_pane_ParamLimits

0x99c5,	// (0x000307b9) aid_size_cell_colour_3_pane

0x99d9,	// (0x000307cd) aid_size_cell_colour_4_pane_ParamLimits

0x99d9,	// (0x000307cd) aid_size_cell_colour_4_pane

0x5101,	// (0x0002bef5) title_pane_stacon_g1_ParamLimits

0x5101,	// (0x0002bef5) title_pane_stacon_g1

0xe146,	// (0x00034f3a) popup_note_wait_window_g3_ParamLimits

0xe146,	// (0x00034f3a) popup_note_wait_window_g3

0xe1bc,	// (0x00034fb0) popup_note_wait_window_t5_ParamLimits

0xe1bc,	// (0x00034fb0) popup_note_wait_window_t5

0x924c,	// (0x00030040) main_feb_china_hwr_fs_writing_pane

0xa1e0,	// (0x00030fd4) popup_feb_china_hwr_fs_window_ParamLimits

0xa1e0,	// (0x00030fd4) popup_feb_china_hwr_fs_window

0xaae0,	// (0x000318d4) aid_size_cell_hwr_fs_ParamLimits

0xaae0,	// (0x000318d4) aid_size_cell_hwr_fs

0xdb31,	// (0x00034925) bg_popup_sub_pane_cp3_ParamLimits

0xdb31,	// (0x00034925) bg_popup_sub_pane_cp3

0xaaf5,	// (0x000318e9) grid_hwr_fs_pane_ParamLimits

0xaaf5,	// (0x000318e9) grid_hwr_fs_pane

0x56f5,	// (0x0002c4e9) linegrid_hwr_fs_pane_ParamLimits

0x56f5,	// (0x0002c4e9) linegrid_hwr_fs_pane

0xab0d,	// (0x00031901) cell_hwr_fs_pane_ParamLimits

0xab0d,	// (0x00031901) cell_hwr_fs_pane

0xdb3d,	// (0x00034931) linegrid_hwr_fs_pane_g1_ParamLimits

0xdb3d,	// (0x00034931) linegrid_hwr_fs_pane_g1

0xab2d,	// (0x00031921) linegrid_hwr_fs_pane_g2_ParamLimits

0xab2d,	// (0x00031921) linegrid_hwr_fs_pane_g2

0xdb49,	// (0x0003493d) linegrid_hwr_fs_pane_g3_ParamLimits

0xdb49,	// (0x0003493d) linegrid_hwr_fs_pane_g3

0x5723,	// (0x0002c517) linegrid_hwr_fs_pane_g4_ParamLimits

0x5723,	// (0x0002c517) linegrid_hwr_fs_pane_g4

0x573d,	// (0x0002c531) linegrid_hwr_fs_pane_g5_ParamLimits

0x573d,	// (0x0002c531) linegrid_hwr_fs_pane_g5

0x0004,

0xf82e,	// (0x00036622) linegrid_hwr_fs_pane_g_ParamLimits

0xf82e,	// (0x00036622) linegrid_hwr_fs_pane_g

0xdb55,	// (0x00034949) cell_hwr_fs_pane_g1_ParamLimits

0xdb55,	// (0x00034949) cell_hwr_fs_pane_g1

0xd95b,	// (0x0003474f) cell_hwr_fs_pane_g2_ParamLimits

0xd95b,	// (0x0003474f) cell_hwr_fs_pane_g2

0xab3f,	// (0x00031933) cell_hwr_fs_pane_g3_ParamLimits

0xab3f,	// (0x00031933) cell_hwr_fs_pane_g3

0xab4c,	// (0x00031940) cell_hwr_fs_pane_g4_ParamLimits

0xab4c,	// (0x00031940) cell_hwr_fs_pane_g4

0x0003,

0xf839,	// (0x0003662d) cell_hwr_fs_pane_g_ParamLimits

0xf839,	// (0x0003662d) cell_hwr_fs_pane_g

0xab59,	// (0x0003194d) cell_hwr_fs_pane_t1

0x924c,	// (0x00030040) grid_highlight_pane_cp6

0x924c,	// (0x00030040) main_idle_act2_pane

0xccb8,	// (0x00033aac) aid_inside_area_popup_secondary

0xad33,	// (0x00031b27) aid_inside_area_window_primary_ParamLimits

0xad33,	// (0x00031b27) aid_inside_area_window_primary

0xeed6,	// (0x00035cca) ai2_news_ticker_pane

0xeede,	// (0x00035cd2) aid_size_cell_ai1_link_ParamLimits

0xeede,	// (0x00035cd2) aid_size_cell_ai1_link

0xb13e,	// (0x00031f32) popup_ai2_data_window_ParamLimits

0xb13e,	// (0x00031f32) popup_ai2_data_window

0xeef8,	// (0x00035cec) popup_ai2_link_window_ParamLimits

0xeef8,	// (0x00035cec) popup_ai2_link_window

0xdb31,	// (0x00034925) bg_popup_sub_pane_cp4_ParamLimits

0xdb31,	// (0x00034925) bg_popup_sub_pane_cp4

0xef0c,	// (0x00035d00) grid_ai2_link_pane_ParamLimits

0xef0c,	// (0x00035d00) grid_ai2_link_pane

0xef23,	// (0x00035d17) popup_ai2_link_window_g1_ParamLimits

0xef23,	// (0x00035d17) popup_ai2_link_window_g1

0xef2f,	// (0x00035d23) popup_ai2_link_window_g2_ParamLimits

0xef2f,	// (0x00035d23) popup_ai2_link_window_g2

0x0001,

0xfa05,	// (0x000367f9) popup_ai2_link_window_g_ParamLimits

0xfa05,	// (0x000367f9) popup_ai2_link_window_g

0xef3e,	// (0x00035d32) ai2_mp_button_pane

0xef46,	// (0x00035d3a) ai2_mp_volume_pane

0xddb9,	// (0x00034bad) bg_popup_sub_pane_cp5_ParamLimits

0xddb9,	// (0x00034bad) bg_popup_sub_pane_cp5

0xef4e,	// (0x00035d42) heading_ai2_gene_pane_ParamLimits

0xef4e,	// (0x00035d42) heading_ai2_gene_pane

0xef5a,	// (0x00035d4e) list_ai2_gene_pane_ParamLimits

0xef5a,	// (0x00035d4e) list_ai2_gene_pane

0xefa2,	// (0x00035d96) cell_ai2_link_pane_ParamLimits

0xefa2,	// (0x00035d96) cell_ai2_link_pane

0xefb8,	// (0x00035dac) cell_ai2_link_pane_g1

0x924c,	// (0x00030040) grid_highlight_pane_cp7

0x5a0a,	// (0x0002c7fe) ai2_mp_volume_pane_g1

0xf04d,	// (0x00035e41) ai2_mp_volume_pane_g2

0xb168,	// (0x00031f5c) list_ai2_gene_pane_t1

0xf055,	// (0x00035e49) ai2_mp_volume_pane_g3

0x0002,

0xfa1e,	// (0x00036812) ai2_mp_volume_pane_g

0x5a12,	// (0x0002c806) volume_small_pane_cp3

0xf05d,	// (0x00035e51) aid_size_cell_ai2_button

0xf065,	// (0x00035e59) grid_ai2_button_pane

0xf06e,	// (0x00035e62) cell_ai2_button_pane_ParamLimits

0xf06e,	// (0x00035e62) cell_ai2_button_pane

0x90ff,	// (0x0002fef3) cell_ai2_button_pane_g1

0x924c,	// (0x00030040) grid_highlight_pane_cp8

0xf00d,	// (0x00035e01) ai2_gene_pane_t1_ParamLimits

0xf00d,	// (0x00035e01) ai2_gene_pane_t1

0xa14e,	// (0x00030f42) aid_height_parent_landscape

0xaeeb,	// (0x00031cdf) aid_height_set_list

0xec6d,	// (0x00035a61) aid_size_parent

0xed41,	// (0x00035b35) aid_size_cell_graphic_pane_ParamLimits

0xef6a,	// (0x00035d5e) popup_ai2_data_window_g1_ParamLimits

0xef6a,	// (0x00035d5e) popup_ai2_data_window_g1

0xef76,	// (0x00035d6a) ai2_news_ticker_pane_g1

0xef7e,	// (0x00035d72) ai2_news_ticker_pane_g2

0x0001,

0xfa0a,	// (0x000367fe) ai2_news_ticker_pane_g

0xef86,	// (0x00035d7a) ai2_news_ticker_pane_t1

0xef94,	// (0x00035d88) ai2_news_ticker_pane_t2

0x0001,

0xfa0f,	// (0x00036803) ai2_news_ticker_pane_t

0xed22,	// (0x00035b16) heading_ai2_gene_pane_g1

0xefc1,	// (0x00035db5) heading_ai2_gene_pane_t1_ParamLimits

0xefc1,	// (0x00035db5) heading_ai2_gene_pane_t1

0xefd6,	// (0x00035dca) list_highlight_pane_cp6

0xb152,	// (0x00031f46) ai2_gene_pane_ParamLimits

0xb152,	// (0x00031f46) ai2_gene_pane

0xb176,	// (0x00031f6a) list_ai2_gene_pane_t2

0x0001,

0xfa14,	// (0x00036808) list_ai2_gene_pane_t

0xefde,	// (0x00035dd2) list_highlight_pane_cp8_ParamLimits

0xefde,	// (0x00035dd2) list_highlight_pane_cp8

0xefef,	// (0x00035de3) ai2_gene_pane_g1_ParamLimits

0xefef,	// (0x00035de3) ai2_gene_pane_g1

0xf001,	// (0x00035df5) ai2_gene_pane_g2_ParamLimits

0xf001,	// (0x00035df5) ai2_gene_pane_g2

0x0001,

0xfa19,	// (0x0003680d) ai2_gene_pane_g_ParamLimits

0xfa19,	// (0x0003680d) ai2_gene_pane_g

0x9c6a,	// (0x00030a5e) scroll_pane_cp12

0xa10d,	// (0x00030f01) control_pane_t3_ParamLimits

0xa10d,	// (0x00030f01) control_pane_t3

0xd6fb,	// (0x000344ef) status_small_pane_g8_ParamLimits

0xd6fb,	// (0x000344ef) status_small_pane_g8

0xa254,	// (0x00031048) popup_find_window_ParamLimits

0xa447,	// (0x0003123b) popup_note_image_window_ParamLimits

0x41e2,	// (0x0002afd6) list_double2_graphic_pane_vc_g1_ParamLimits

0x41e2,	// (0x0002afd6) list_double2_graphic_pane_vc_g1

0x506a,	// (0x0002be5e) list_double2_graphic_pane_vc_g2_ParamLimits

0x506a,	// (0x0002be5e) list_double2_graphic_pane_vc_g2

0x5076,	// (0x0002be6a) list_double2_graphic_pane_vc_g3_ParamLimits

0x5076,	// (0x0002be6a) list_double2_graphic_pane_vc_g3

0x0002,

0xf605,	// (0x000363f9) list_double2_graphic_pane_vc_g_ParamLimits

0xf605,	// (0x000363f9) list_double2_graphic_pane_vc_g

0x41ba,	// (0x0002afae) list_double2_graphic_pane_vc_t1_ParamLimits

0x41ba,	// (0x0002afae) list_double2_graphic_pane_vc_t1

0x506a,	// (0x0002be5e) list_single_heading_pane_vc_g1_ParamLimits

0x506a,	// (0x0002be5e) list_single_heading_pane_vc_g1

0x5076,	// (0x0002be6a) list_single_heading_pane_vc_g2_ParamLimits

0x5076,	// (0x0002be6a) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003640a) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003640a) list_single_heading_pane_vc_g

0x47e3,	// (0x0002b5d7) list_single_heading_pane_vc_t1_ParamLimits

0x47e3,	// (0x0002b5d7) list_single_heading_pane_vc_t1

0x47f9,	// (0x0002b5ed) list_single_heading_pane_vc_t2_ParamLimits

0x47f9,	// (0x0002b5ed) list_single_heading_pane_vc_t2

0x0001,

0xf81d,	// (0x00036611) list_single_heading_pane_vc_t_ParamLimits

0xf81d,	// (0x00036611) list_single_heading_pane_vc_t

0xda8b,	// (0x0003487f) list_setting_number_pane_vc_g1_ParamLimits

0xda8b,	// (0x0003487f) list_setting_number_pane_vc_g1

0xda97,	// (0x0003488b) list_setting_number_pane_vc_g2_ParamLimits

0xda97,	// (0x0003488b) list_setting_number_pane_vc_g2

0x0001,

0xf822,	// (0x00036616) list_setting_number_pane_vc_g_ParamLimits

0xf822,	// (0x00036616) list_setting_number_pane_vc_g

0xdaa3,	// (0x00034897) list_setting_number_pane_vc_t1_ParamLimits

0xdaa3,	// (0x00034897) list_setting_number_pane_vc_t1

0xdab7,	// (0x000348ab) list_setting_number_pane_vc_t2_ParamLimits

0xdab7,	// (0x000348ab) list_setting_number_pane_vc_t2

0xdad3,	// (0x000348c7) list_setting_number_pane_vc_t3_ParamLimits

0xdad3,	// (0x000348c7) list_setting_number_pane_vc_t3

0x0002,

0xf827,	// (0x0003661b) list_setting_number_pane_vc_t_ParamLimits

0xf827,	// (0x0003661b) list_setting_number_pane_vc_t

0xdaf9,	// (0x000348ed) set_value_pane_vc_ParamLimits

0xdaf9,	// (0x000348ed) set_value_pane_vc

0x5929,	// (0x0002c71d) list_double2_graphic_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double2_graphic_pane_vc

0xecc8,	// (0x00035abc) list_double2_large_graphic_pane_vc_ParamLimits

0xecc8,	// (0x00035abc) list_double2_large_graphic_pane_vc

0x5929,	// (0x0002c71d) list_double2_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double2_pane_vc

0x5929,	// (0x0002c71d) list_double_graphic_heading_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double_graphic_heading_pane_vc

0x5929,	// (0x0002c71d) list_double_graphic_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double_graphic_pane_vc

0x5929,	// (0x0002c71d) list_double_heading_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double_heading_pane_vc

0xecc8,	// (0x00035abc) list_double_large_graphic_pane_vc_ParamLimits

0xecc8,	// (0x00035abc) list_double_large_graphic_pane_vc

0x5929,	// (0x0002c71d) list_double_number_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double_number_pane_vc

0x5929,	// (0x0002c71d) list_double_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double_pane_vc

0x5929,	// (0x0002c71d) list_double_time_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_double_time_pane_vc

0x5929,	// (0x0002c71d) list_setting_number_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_setting_number_pane_vc

0x5929,	// (0x0002c71d) list_setting_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_setting_pane_vc

0x5929,	// (0x0002c71d) list_single_graphic_heading_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_single_graphic_heading_pane_vc

0x5929,	// (0x0002c71d) list_single_heading_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_single_heading_pane_vc

0x5929,	// (0x0002c71d) list_single_number_heading_pane_vc_ParamLimits

0x5929,	// (0x0002c71d) list_single_number_heading_pane_vc

0x41e2,	// (0x0002afd6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x41e2,	// (0x0002afd6) list_double_graphic_heading_pane_vc_g1

0x506a,	// (0x0002be5e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x506a,	// (0x0002be5e) list_double_graphic_heading_pane_vc_g2

0x5076,	// (0x0002be6a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5076,	// (0x0002be6a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf605,	// (0x000363f9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x000363f9) list_double_graphic_heading_pane_vc_g

0x48db,	// (0x0002b6cf) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x48db,	// (0x0002b6cf) list_double_graphic_heading_pane_vc_t1

0x47e3,	// (0x0002b5d7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x47e3,	// (0x0002b5d7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa25,	// (0x00036819) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa25,	// (0x00036819) list_double_graphic_heading_pane_vc_t

0xda8b,	// (0x0003487f) list_setting_pane_vc_g1_ParamLimits

0xda8b,	// (0x0003487f) list_setting_pane_vc_g1

0xda97,	// (0x0003488b) list_setting_pane_vc_g2_ParamLimits

0xda97,	// (0x0003488b) list_setting_pane_vc_g2

0x0001,

0xf822,	// (0x00036616) list_setting_pane_vc_g_ParamLimits

0xf822,	// (0x00036616) list_setting_pane_vc_g

0xf25d,	// (0x00036051) list_setting_pane_vc_t1_ParamLimits

0xf25d,	// (0x00036051) list_setting_pane_vc_t1

0xf271,	// (0x00036065) list_setting_pane_vc_t2_ParamLimits

0xf271,	// (0x00036065) list_setting_pane_vc_t2

0x0001,

0xfa68,	// (0x0003685c) list_setting_pane_vc_t_ParamLimits

0xfa68,	// (0x0003685c) list_setting_pane_vc_t

0xdaf9,	// (0x000348ed) set_value_pane_cp_vc_ParamLimits

0xdaf9,	// (0x000348ed) set_value_pane_cp_vc

0x506a,	// (0x0002be5e) list_single_number_heading_pane_vc_g1_ParamLimits

0x506a,	// (0x0002be5e) list_single_number_heading_pane_vc_g1

0x5076,	// (0x0002be6a) list_single_number_heading_pane_vc_g2_ParamLimits

0x5076,	// (0x0002be6a) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003640a) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003640a) list_single_number_heading_pane_vc_g

0x47e3,	// (0x0002b5d7) list_single_number_heading_pane_vc_t1_ParamLimits

0x47e3,	// (0x0002b5d7) list_single_number_heading_pane_vc_t1

0x48ed,	// (0x0002b6e1) list_single_number_heading_pane_vc_t2_ParamLimits

0x48ed,	// (0x0002b6e1) list_single_number_heading_pane_vc_t2

0x48ff,	// (0x0002b6f3) list_single_number_heading_pane_vc_t3_ParamLimits

0x48ff,	// (0x0002b6f3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6d,	// (0x00036861) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x00036861) list_single_number_heading_pane_vc_t

0x41e2,	// (0x0002afd6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x41e2,	// (0x0002afd6) list_single_graphic_heading_pane_vc_g1

0x506a,	// (0x0002be5e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x506a,	// (0x0002be5e) list_single_graphic_heading_pane_vc_g4

0x5076,	// (0x0002be6a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5076,	// (0x0002be6a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf605,	// (0x000363f9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf605,	// (0x000363f9) list_single_graphic_heading_pane_vc_g

0x47e3,	// (0x0002b5d7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x47e3,	// (0x0002b5d7) list_single_graphic_heading_pane_vc_t1

0x4911,	// (0x0002b705) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4911,	// (0x0002b705) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa74,	// (0x00036868) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa74,	// (0x00036868) list_single_graphic_heading_pane_vc_t

0x506a,	// (0x0002be5e) list_double2_pane_vc_g1_ParamLimits

0x506a,	// (0x0002be5e) list_double2_pane_vc_g1

0x5076,	// (0x0002be6a) list_double2_pane_vc_g2_ParamLimits

0x5076,	// (0x0002be6a) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0003640a) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0003640a) list_double2_pane_vc_g

0x413d,	// (0x0002af31) list_double2_pane_vc_t1_ParamLimits

0x413d,	// (0x0002af31) list_double2_pane_vc_t1

0x503e,	// (0x0002be32) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x503e,	// (0x0002be32) list_double2_large_graphic_pane_vc_g1

0x504a,	// (0x0002be3e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x504a,	// (0x0002be3e) list_double2_large_graphic_pane_vc_g2

0x5056,	// (0x0002be4a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5056,	// (0x0002be4a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x00036422) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x00036422) list_double2_large_graphic_pane_vc_g

0x4127,	// (0x0002af1b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4127,	// (0x0002af1b) list_double2_large_graphic_pane_vc_t1

0x5a6c,	// (0x0002c860) list_double_time_pane_vc_g1_ParamLimits

0x5a6c,	// (0x0002c860) list_double_time_pane_vc_g1

0x5a78,	// (0x0002c86c) list_double_time_pane_vc_g2_ParamLimits

0x5a78,	// (0x0002c86c) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0003686d) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0003686d) list_double_time_pane_vc_g

0x4923,	// (0x0002b717) list_double_time_pane_vc_t1_ParamLimits

0x4923,	// (0x0002b717) list_double_time_pane_vc_t1

0x493c,	// (0x0002b730) list_double_time_pane_vc_t2_ParamLimits

0x493c,	// (0x0002b730) list_double_time_pane_vc_t2

0x4975,	// (0x0002b769) list_double_time_pane_vc_t3_ParamLimits

0x4975,	// (0x0002b769) list_double_time_pane_vc_t3

0x498d,	// (0x0002b781) list_double_time_pane_vc_t4_ParamLimits

0x498d,	// (0x0002b781) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x00036872) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x00036872) list_double_time_pane_vc_t

0x506a,	// (0x0002be5e) list_double_pane_vc_g1_ParamLimits

0x506a,	// (0x0002be5e) list_double_pane_vc_g1

0x5076,	// (0x0002be6a) list_double_pane_vc_g2_ParamLimits

0x5076,	// (0x0002be6a) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0003640a) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0003640a) list_double_pane_vc_g

0x499f,	// (0x0002b793) list_double_pane_vc_t1_ParamLimits

0x499f,	// (0x0002b793) list_double_pane_vc_t1

0x49b1,	// (0x0002b7a5) list_double_pane_vc_t2_ParamLimits

0x49b1,	// (0x0002b7a5) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0003687b) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0003687b) list_double_pane_vc_t

0x506a,	// (0x0002be5e) list_double_number_pane_vc_g1_ParamLimits

0x506a,	// (0x0002be5e) list_double_number_pane_vc_g1

0x5076,	// (0x0002be6a) list_double_number_pane_vc_g2_ParamLimits

0x5076,	// (0x0002be6a) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0003640a) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0003640a) list_double_number_pane_vc_g

0x49c7,	// (0x0002b7bb) list_double_number_pane_vc_t1_ParamLimits

0x49c7,	// (0x0002b7bb) list_double_number_pane_vc_t1

0x49db,	// (0x0002b7cf) list_double_number_pane_vc_t2_ParamLimits

0x49db,	// (0x0002b7cf) list_double_number_pane_vc_t2

0x49b1,	// (0x0002b7a5) list_double_number_pane_vc_t3_ParamLimits

0x49b1,	// (0x0002b7a5) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x00036880) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x00036880) list_double_number_pane_vc_t

0x5a84,	// (0x0002c878) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a84,	// (0x0002c878) list_double_large_graphic_pane_vc_g1

0x5a90,	// (0x0002c884) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a90,	// (0x0002c884) list_double_large_graphic_pane_vc_g2

0x5056,	// (0x0002be4a) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5056,	// (0x0002be4a) list_double_large_graphic_pane_vc_g3

0x49ed,	// (0x0002b7e1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x49ed,	// (0x0002b7e1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x00036887) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x00036887) list_double_large_graphic_pane_vc_g

0x49f9,	// (0x0002b7ed) list_double_large_graphic_pane_vc_t1_ParamLimits

0x49f9,	// (0x0002b7ed) list_double_large_graphic_pane_vc_t1

0x4a0b,	// (0x0002b7ff) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4a0b,	// (0x0002b7ff) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x00036890) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x00036890) list_double_large_graphic_pane_vc_t

0x506a,	// (0x0002be5e) list_double_heading_pane_vc_g1_ParamLimits

0x506a,	// (0x0002be5e) list_double_heading_pane_vc_g1

0x5076,	// (0x0002be6a) list_double_heading_pane_vc_g2_ParamLimits

0x5076,	// (0x0002be6a) list_double_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0003640a) list_double_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0003640a) list_double_heading_pane_vc_g

0x4a22,	// (0x0002b816) list_double_heading_pane_vc_t1_ParamLimits

0x4a22,	// (0x0002b816) list_double_heading_pane_vc_t1

0x47e3,	// (0x0002b5d7) list_double_heading_pane_vc_t2_ParamLimits

0x47e3,	// (0x0002b5d7) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x00036895) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x00036895) list_double_heading_pane_vc_t

0x41e2,	// (0x0002afd6) list_double_graphic_pane_vc_g1_ParamLimits

0x41e2,	// (0x0002afd6) list_double_graphic_pane_vc_g1

0x5082,	// (0x0002be76) list_double_graphic_pane_vc_g2_ParamLimits

0x5082,	// (0x0002be76) list_double_graphic_pane_vc_g2

0x5091,	// (0x0002be85) list_double_graphic_pane_vc_g3_ParamLimits

0x5091,	// (0x0002be85) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0003689a) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0003689a) list_double_graphic_pane_vc_g

0x4a34,	// (0x0002b828) list_double_graphic_pane_vc_t1_ParamLimits

0x4a34,	// (0x0002b828) list_double_graphic_pane_vc_t1

0x49b1,	// (0x0002b7a5) list_double_graphic_pane_vc_t2_ParamLimits

0x49b1,	// (0x0002b7a5) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x000368a1) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x000368a1) list_double_graphic_pane_vc_t

0x4d46,	// (0x0002bb3a) aid_size_cell_fastswap

0x9109,	// (0x0002fefd) aid_size_cell_touch_ParamLimits

0x9109,	// (0x0002fefd) aid_size_cell_touch

0x4e93,	// (0x0002bc87) popup_fast_swap_wide_window_ParamLimits

0x4e93,	// (0x0002bc87) popup_fast_swap_wide_window

0x92a5,	// (0x00030099) touch_pane_ParamLimits

0x92a5,	// (0x00030099) touch_pane

0x44a0,	// (0x0002b294) button_value_adjust_pane_cp2

0x44a8,	// (0x0002b29c) button_value_adjust_pane_cp4

0x44c8,	// (0x0002b2bc) form_field_data_pane_cp2

0x8cea,	// (0x0002fade) form_field_data_wide_pane_cp2

0xcf18,	// (0x00033d0c) bg_scroll_pane_ParamLimits

0x5222,	// (0x0002c016) scroll_handle_pane_ParamLimits

0x5236,	// (0x0002c02a) scroll_sc2_down_pane_ParamLimits

0x5236,	// (0x0002c02a) scroll_sc2_down_pane

0xcf49,	// (0x00033d3d) scroll_sc2_up_pane_ParamLimits

0xcf49,	// (0x00033d3d) scroll_sc2_up_pane

0xb29a,	// (0x0003208e) grid_wheel_folder_pane_g1_ParamLimits

0xb29a,	// (0x0003208e) grid_wheel_folder_pane_g1

0x53fa,	// (0x0002c1ee) clock_nsta_pane_cp2_ParamLimits

0x53fa,	// (0x0002c1ee) clock_nsta_pane_cp2

0x9f58,	// (0x00030d4c) listscroll_midp_pane_ParamLimits

0x9f68,	// (0x00030d5c) midp_canvas_pane

0x5642,	// (0x0002c436) nsta_clock_indic_pane

0xd777,	// (0x0003456b) listscroll_form_pane_vc

0xd77f,	// (0x00034573) listscroll_set_pane_vc_ParamLimits

0xd77f,	// (0x00034573) listscroll_set_pane_vc

0xa813,	// (0x00031607) clock_nsta_pane

0xa836,	// (0x0003162a) indicator_nsta_pane

0xd98d,	// (0x00034781) bg_popup_sub_pane_cp2_ParamLimits

0xd9a1,	// (0x00034795) find_pane_cp2_ParamLimits

0xd9a1,	// (0x00034795) find_pane_cp2

0xd9b3,	// (0x000347a7) grid_toobar_pane_ParamLimits

0xdb05,	// (0x000348f9) list_form_gen_pane_vc_ParamLimits

0xdb05,	// (0x000348f9) list_form_gen_pane_vc

0xdb1b,	// (0x0003490f) scroll_pane_cp8_vc_ParamLimits

0xdb1b,	// (0x0003490f) scroll_pane_cp8_vc

0xdb6b,	// (0x0003495f) data_form_wide_pane_vc_ParamLimits

0xdb6b,	// (0x0003495f) data_form_wide_pane_vc

0xdce2,	// (0x00034ad6) form_field_data_wide_pane_vc_g1

0xdcea,	// (0x00034ade) form_field_data_wide_pane_vc_t1_ParamLimits

0xdcea,	// (0x00034ade) form_field_data_wide_pane_vc_t1

0xcb8e,	// (0x00033982) input_focus_pane_cp6_vc_ParamLimits

0xcb8e,	// (0x00033982) input_focus_pane_cp6_vc

0xabea,	// (0x000319de) list_midp_pane_ParamLimits

0xdf0f,	// (0x00034d03) scroll_pane_cp16_ParamLimits

0xdf0f,	// (0x00034d03) scroll_pane_cp16

0xdf4f,	// (0x00034d43) button_value_adjust_pane_ParamLimits

0xdf4f,	// (0x00034d43) button_value_adjust_pane

0xaef7,	// (0x00031ceb) button_value_adjust_pane_cp6_ParamLimits

0xaef7,	// (0x00031ceb) button_value_adjust_pane_cp6

0xb001,	// (0x00031df5) settings_code_pane_cp_ParamLimits

0xb001,	// (0x00031df5) settings_code_pane_cp

0x90ff,	// (0x0002fef3) cell_touch_pane_g1

0x90ff,	// (0x0002fef3) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x00036540) cell_touch_pane_g

0xb184,	// (0x00031f78) cell_touch_pane_cp_ParamLimits

0xb184,	// (0x00031f78) cell_touch_pane_cp

0xb1a0,	// (0x00031f94) cell_touch_pane_ParamLimits

0xb1a0,	// (0x00031f94) cell_touch_pane

0x90ff,	// (0x0002fef3) scroll_sc2_down_pane_g1

0x90ff,	// (0x0002fef3) scroll_sc2_up_pane_g1

0x924c,	// (0x00030040) bg_set_opt_pane_cp4_vc

0xf080,	// (0x00035e74) list_set_graphic_pane_vc_g1_ParamLimits

0xf080,	// (0x00035e74) list_set_graphic_pane_vc_g1

0xf08c,	// (0x00035e80) list_set_graphic_pane_vc_g2_ParamLimits

0xf08c,	// (0x00035e80) list_set_graphic_pane_vc_g2

0x0001,

0xfa2a,	// (0x0003681e) list_set_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x0003681e) list_set_graphic_pane_vc_g

0xf098,	// (0x00035e8c) text_primary_small_cp13_vc_ParamLimits

0xf098,	// (0x00035e8c) text_primary_small_cp13_vc

0xf0b0,	// (0x00035ea4) list_set_graphic_pane_vc_ParamLimits

0xf0b0,	// (0x00035ea4) list_set_graphic_pane_vc

0x924c,	// (0x00030040) input_focus_pane_cp2_vc

0x90ff,	// (0x0002fef3) setting_code_pane_vc_g1

0xf0c3,	// (0x00035eb7) setting_code_pane_vc_t1

0xf0d1,	// (0x00035ec5) set_text_pane_vc_t1_ParamLimits

0xf0d1,	// (0x00035ec5) set_text_pane_vc_t1

0x924c,	// (0x00030040) input_focus_pane_cp1_vc

0xf0ec,	// (0x00035ee0) list_set_text_pane_vc

0x90ff,	// (0x0002fef3) setting_text_pane_vc_g1

0x924c,	// (0x00030040) bg_set_opt_pane_cp2_vc

0xf0f6,	// (0x00035eea) setting_slider_graphic_pane_vc_g1

0xf0fe,	// (0x00035ef2) setting_slider_graphic_pane_vc_t1

0xf10c,	// (0x00035f00) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2f,	// (0x00036823) setting_slider_graphic_pane_vc_t

0xf11a,	// (0x00035f0e) slider_set_pane_cp_vc

0xf122,	// (0x00035f16) slider_set_pane_vc_g1

0xf12b,	// (0x00035f1f) slider_set_pane_vc_g2

0x0006,

0xfa34,	// (0x00036828) slider_set_pane_vc_g

0xcbdd,	// (0x000339d1) set_opt_bg_pane_g1_copy1

0xcbe5,	// (0x000339d9) set_opt_bg_pane_g2_copy1

0xf157,	// (0x00035f4b) set_opt_bg_pane_g3_copy1

0xcbf5,	// (0x000339e9) set_opt_bg_pane_g4_copy1

0xcbfd,	// (0x000339f1) set_opt_bg_pane_g5_copy1

0xcc05,	// (0x000339f9) set_opt_bg_pane_g6_copy1

0xf15f,	// (0x00035f53) set_opt_bg_pane_g7_copy1

0xf167,	// (0x00035f5b) set_opt_bg_pane_g8_copy1

0xf16f,	// (0x00035f63) set_opt_bg_pane_g9_copy1

0x924c,	// (0x00030040) bg_set_opt_pane_cp_vc

0xf177,	// (0x00035f6b) setting_slider_pane_vc_t1

0xf0fe,	// (0x00035ef2) setting_slider_pane_vc_t2

0xf10c,	// (0x00035f00) setting_slider_pane_vc_t3

0x0002,

0xfa43,	// (0x00036837) setting_slider_pane_vc_t

0xf11a,	// (0x00035f0e) slider_set_pane_vc

0x5761,	// (0x0002c555) volume_set_pane_vc_g1

0x5a1b,	// (0x0002c80f) volume_set_pane_vc_g2

0x5a24,	// (0x0002c818) volume_set_pane_vc_g3

0x5a2d,	// (0x0002c821) volume_set_pane_vc_g4

0x5a36,	// (0x0002c82a) volume_set_pane_vc_g5

0x5a3f,	// (0x0002c833) volume_set_pane_vc_g6

0x5a48,	// (0x0002c83c) volume_set_pane_vc_g7

0x5a51,	// (0x0002c845) volume_set_pane_vc_g8

0x5a5a,	// (0x0002c84e) volume_set_pane_vc_g9

0x5a63,	// (0x0002c857) volume_set_pane_vc_g10

0x0009,

0xfa4a,	// (0x0003683e) volume_set_pane_vc_g

0xf186,	// (0x00035f7a) volume_set_pane_vc

0xf18e,	// (0x00035f82) button_value_adjust_pane_cp1_vc

0xf198,	// (0x00035f8c) list_highlight_pane_cp2_vc

0xf1a1,	// (0x00035f95) list_set_pane_vc_ParamLimits

0xf1a1,	// (0x00035f95) list_set_pane_vc

0xf1f3,	// (0x00035fe7) main_pane_set_vc_t1_ParamLimits

0xf1f3,	// (0x00035fe7) main_pane_set_vc_t1

0xf208,	// (0x00035ffc) main_pane_set_vc_t2_ParamLimits

0xf208,	// (0x00035ffc) main_pane_set_vc_t2

0xf21a,	// (0x0003600e) main_pane_set_vc_t3_ParamLimits

0xf21a,	// (0x0003600e) main_pane_set_vc_t3

0xf22c,	// (0x00036020) main_pane_set_vc_t4_ParamLimits

0xf22c,	// (0x00036020) main_pane_set_vc_t4

0x0003,

0xfa5f,	// (0x00036853) main_pane_set_vc_t_ParamLimits

0xfa5f,	// (0x00036853) main_pane_set_vc_t

0xf23e,	// (0x00036032) setting_code_pane_vc_ParamLimits

0xf23e,	// (0x00036032) setting_code_pane_vc

0xf24d,	// (0x00036041) setting_slider_graphic_pane_vc

0xf24d,	// (0x00036041) setting_slider_pane_vc

0xf24d,	// (0x00036041) setting_text_pane_vc

0xf24d,	// (0x00036041) setting_volume_pane_vc

0xf255,	// (0x00036049) scroll_pane_cp121_vc

0xcb79,	// (0x0003396d) set_content_pane_vc

0xf293,	// (0x00036087) button_value_adjust_pane_g1

0xf29c,	// (0x00036090) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x000368a6) button_value_adjust_pane_g

0xf2a5,	// (0x00036099) form_field_slider_wide_pane_vc_t1_ParamLimits

0xf2a5,	// (0x00036099) form_field_slider_wide_pane_vc_t1

0xf2bb,	// (0x000360af) form_field_slider_wide_pane_vc_t2_ParamLimits

0xf2bb,	// (0x000360af) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x000368ab) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x000368ab) form_field_slider_wide_pane_vc_t

0x940e,	// (0x00030202) input_focus_pane_cp10_vc_ParamLimits

0x940e,	// (0x00030202) input_focus_pane_cp10_vc

0xf2d0,	// (0x000360c4) slider_cont_pane_cp1_vc_ParamLimits

0xf2d0,	// (0x000360c4) slider_cont_pane_cp1_vc

0xf122,	// (0x00035f16) slider_form_pane_g1_cp2

0xf12b,	// (0x00035f1f) slider_form_pane_g2_cp2

0xf2eb,	// (0x000360df) form_field_slider_pane_vc_t3

0xf2f9,	// (0x000360ed) form_field_slider_pane_vc_t4

0xf307,	// (0x000360fb) slider_form_pane_vc_ParamLimits

0xf307,	// (0x000360fb) slider_form_pane_vc

0xf314,	// (0x00036108) form_field_slider_pane_vc_t1_ParamLimits

0xf314,	// (0x00036108) form_field_slider_pane_vc_t1

0xf32a,	// (0x0003611e) form_field_slider_pane_vc_t2_ParamLimits

0xf32a,	// (0x0003611e) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x000368bb) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x000368bb) form_field_slider_pane_vc_t

0x940e,	// (0x00030202) input_focus_pane_cp9_vc_ParamLimits

0x940e,	// (0x00030202) input_focus_pane_cp9_vc

0xf33c,	// (0x00036130) slider_cont_pane_vc_ParamLimits

0xf33c,	// (0x00036130) slider_cont_pane_vc

0xf34e,	// (0x00036142) list_form_graphic_pane_cp_vc_ParamLimits

0xf34e,	// (0x00036142) list_form_graphic_pane_cp_vc

0xdce2,	// (0x00034ad6) form_field_popup_wide_pane_vc_g1

0xf363,	// (0x00036157) form_field_popup_wide_pane_vc_t1_ParamLimits

0xf363,	// (0x00036157) form_field_popup_wide_pane_vc_t1

0xcb8e,	// (0x00033982) input_focus_pane_cp8_vc_ParamLimits

0xcb8e,	// (0x00033982) input_focus_pane_cp8_vc

0xf378,	// (0x0003616c) list_form_wide_pane_vc_ParamLimits

0xf378,	// (0x0003616c) list_form_wide_pane_vc

0xf384,	// (0x00036178) list_form_graphic_pane_vc_g1

0xf38c,	// (0x00036180) list_form_graphic_pane_vc_t1_ParamLimits

0xf38c,	// (0x00036180) list_form_graphic_pane_vc_t1

0x9458,	// (0x0003024c) list_highlight_pane_cp5_vc_ParamLimits

0x9458,	// (0x0003024c) list_highlight_pane_cp5_vc

0xf3a8,	// (0x0003619c) list_form_graphic_pane_vc_ParamLimits

0xf3a8,	// (0x0003619c) list_form_graphic_pane_vc

0xdce2,	// (0x00034ad6) form_field_popup_pane_vc_g1

0xf3be,	// (0x000361b2) form_field_popup_pane_vc_t1_ParamLimits

0xf3be,	// (0x000361b2) form_field_popup_pane_vc_t1

0xcb8e,	// (0x00033982) input_focus_pane_cp7_vc_ParamLimits

0xcb8e,	// (0x00033982) input_focus_pane_cp7_vc

0xf3d3,	// (0x000361c7) list_form_pane_vc_ParamLimits

0xf3d3,	// (0x000361c7) list_form_pane_vc

0xf3df,	// (0x000361d3) data_form_pane_vc_t1_ParamLimits

0xf3df,	// (0x000361d3) data_form_pane_vc_t1

0xcbdd,	// (0x000339d1) input_focus_pane_vc_g1

0xcbe5,	// (0x000339d9) input_focus_pane_vc_g2

0xcbed,	// (0x000339e1) input_focus_pane_vc_g3

0xcbf5,	// (0x000339e9) input_focus_pane_vc_g4

0xcbfd,	// (0x000339f1) input_focus_pane_vc_g5

0xcc05,	// (0x000339f9) input_focus_pane_vc_g6

0xcc0d,	// (0x00033a01) input_focus_pane_vc_g7

0xcc15,	// (0x00033a09) input_focus_pane_vc_g8

0xcc1d,	// (0x00033a11) input_focus_pane_vc_g9

0x90ff,	// (0x0002fef3) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x000364c9) input_focus_pane_vc_g

0xdb6b,	// (0x0003495f) data_form_pane_vc_ParamLimits

0xdb6b,	// (0x0003495f) data_form_pane_vc

0xdce2,	// (0x00034ad6) form_field_data_pane_vc_g1

0xf3fa,	// (0x000361ee) form_field_data_pane_vc_t1_ParamLimits

0xf3fa,	// (0x000361ee) form_field_data_pane_vc_t1

0xcb8e,	// (0x00033982) input_focus_pane_vc_ParamLimits

0xcb8e,	// (0x00033982) input_focus_pane_vc

0xdb77,	// (0x0003496b) button_value_adjust_pane_cp3_vc

0xf410,	// (0x00036204) button_value_adjust_pane_cp5_vc

0xf418,	// (0x0003620c) form_field_data_pane_vc_ParamLimits

0xf418,	// (0x0003620c) form_field_data_pane_vc

0xdb7f,	// (0x00034973) form_field_data_pane_vc_cp2

0xf42f,	// (0x00036223) form_field_data_wide_pane_vc_ParamLimits

0xf42f,	// (0x00036223) form_field_data_wide_pane_vc

0xf445,	// (0x00036239) form_field_data_wide_pane_vc_cp2

0xf44d,	// (0x00036241) form_field_popup_pane_vc_ParamLimits

0xf44d,	// (0x00036241) form_field_popup_pane_vc

0xf464,	// (0x00036258) form_field_popup_wide_pane_vc_ParamLimits

0xf464,	// (0x00036258) form_field_popup_wide_pane_vc

0xf47a,	// (0x0003626e) form_field_slider_pane_vc_ParamLimits

0xf47a,	// (0x0003626e) form_field_slider_pane_vc

0xf48d,	// (0x00036281) form_field_slider_wide_pane_vc_ParamLimits

0xf48d,	// (0x00036281) form_field_slider_wide_pane_vc

0xb1be,	// (0x00031fb2) grid_touch_1_pane_ParamLimits

0xb1be,	// (0x00031fb2) grid_touch_1_pane

0xb1d2,	// (0x00031fc6) grid_touch_2_pane_ParamLimits

0xb1d2,	// (0x00031fc6) grid_touch_2_pane

0xf4f6,	// (0x000362ea) touch_pane_g1_ParamLimits

0xf4f6,	// (0x000362ea) touch_pane_g1

0xf4a0,	// (0x00036294) cell_app_pane_cp_wide_ParamLimits

0xf4a0,	// (0x00036294) cell_app_pane_cp_wide

0xf4b0,	// (0x000362a4) grid_popup_fast_wide_pane_ParamLimits

0xf4b0,	// (0x000362a4) grid_popup_fast_wide_pane

0xf4c4,	// (0x000362b8) scroll_pane_cp19_ParamLimits

0xf4c4,	// (0x000362b8) scroll_pane_cp19

0x924c,	// (0x00030040) bg_popup_window_pane_cp20

0xf4d8,	// (0x000362cc) listscroll_popup_fast_wide_pane

0xdb87,	// (0x0003497b) grid_indicator_nsta_pane

0xf504,	// (0x000362f8) clock_nsta_pane_g1

0xf50d,	// (0x00036301) clock_nsta_pane_t1

0xb1fc,	// (0x00031ff0) cell_indicator_nsta_pane_ParamLimits

0xb1fc,	// (0x00031ff0) cell_indicator_nsta_pane

0xf4f6,	// (0x000362ea) cell_indicator_nsta_pane_g1

0xb219,	// (0x0003200d) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x000368c5) cell_indicator_nsta_pane_g

0xf529,	// (0x0003631d) clock_nsta_pane_cp

0xf531,	// (0x00036325) indicator_nsta_pane_cp

0xf53a,	// (0x0003632e) nsta_clock_indic_pane_g1

0x95bf,	// (0x000303b3) grid_indicator_pane

0xd03b,	// (0x00033e2f) scroll_pane_cp29

0x5351,	// (0x0002c145) indicator_nsta_pane_cp2_ParamLimits

0x5351,	// (0x0002c145) indicator_nsta_pane_cp2

0x9458,	// (0x0003024c) main_apps_wheel_pane

0xddf6,	// (0x00034bea) form_midp_field_text_pane_ParamLimits

0xdf2f,	// (0x00034d23) scroll_bar_cp050_ParamLimits

0xf572,	// (0x00036366) cell_indicator_pane_ParamLimits

0xf572,	// (0x00036366) cell_indicator_pane

0xf588,	// (0x0003637c) cell_indicator_pane_g1

0xb22e,	// (0x00032022) grid_wheel_folder_pane_ParamLimits

0xb22e,	// (0x00032022) grid_wheel_folder_pane

0xb23c,	// (0x00032030) list_wheel_apps_pane_ParamLimits

0xb23c,	// (0x00032030) list_wheel_apps_pane

0xb248,	// (0x0003203c) main_apps_wheel_pane_g1_ParamLimits

0xb248,	// (0x0003203c) main_apps_wheel_pane_g1

0xb254,	// (0x00032048) main_apps_wheel_pane_g2_ParamLimits

0xb254,	// (0x00032048) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x000368d4) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x000368d4) main_apps_wheel_pane_g

0xb260,	// (0x00032054) main_apps_wheel_pane_t1_ParamLimits

0xb260,	// (0x00032054) main_apps_wheel_pane_t1

0xb272,	// (0x00032066) list_wheel_apps_pane_g1

0xb27a,	// (0x0003206e) list_wheel_apps_pane_g2

0xb282,	// (0x00032076) list_wheel_apps_pane_g3

0xb28a,	// (0x0003207e) list_wheel_apps_pane_g4

0xb292,	// (0x00032086) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x000368d9) list_wheel_apps_pane_g

0x9458,	// (0x0003024c) navi_icon_text_pane

0xa71f,	// (0x00031513) aid_fill_nsta

0x0990,	// (0x00027784) navi_icon_text_pane_g1

0x099c,	// (0x00027790) navi_icon_text_pane_t1

0xd2b0,	// (0x000340a4) list_set_graphic_pane_t1_ParamLimits

0xd2b0,	// (0x000340a4) list_set_graphic_pane_t1

0xe5d8,	// (0x000353cc) popup_midp_note_alarm_window_t6_ParamLimits

0xe5d8,	// (0x000353cc) popup_midp_note_alarm_window_t6

0xe5ea,	// (0x000353de) popup_midp_note_alarm_window_t7_ParamLimits

0xe5ea,	// (0x000353de) popup_midp_note_alarm_window_t7

0xe5fc,	// (0x000353f0) popup_midp_note_alarm_window_t8_ParamLimits

0xe5fc,	// (0x000353f0) popup_midp_note_alarm_window_t8

0xe60e,	// (0x00035402) popup_midp_note_alarm_window_t9_ParamLimits

0xe60e,	// (0x00035402) popup_midp_note_alarm_window_t9

0xe620,	// (0x00035414) popup_midp_note_alarm_window_t10_ParamLimits

0xe620,	// (0x00035414) popup_midp_note_alarm_window_t10

0xe632,	// (0x00035426) popup_midp_note_alarm_window_t11_ParamLimits

0xe632,	// (0x00035426) popup_midp_note_alarm_window_t11

0xe644,	// (0x00035438) scroll_pane_cp17_ParamLimits

0xe644,	// (0x00035438) scroll_pane_cp17

0x5761,	// (0x0002c555) volume_small_pane_cp_g1

0x5a9f,	// (0x0002c893) volume_small_pane_cp_g2

0x5aa8,	// (0x0002c89c) volume_small_pane_cp_g3

0x5ab1,	// (0x0002c8a5) volume_small_pane_cp_g4

0x578e,	// (0x0002c582) volume_small_pane_cp_g5

0x5aba,	// (0x0002c8ae) volume_small_pane_cp_g6

0x5ac3,	// (0x0002c8b7) volume_small_pane_cp_g7

0x5acc,	// (0x0002c8c0) volume_small_pane_cp_g8

0x5ad5,	// (0x0002c8c9) volume_small_pane_cp_g9

0x5ade,	// (0x0002c8d2) volume_small_pane_cp_g10

0xd55f,	// (0x00034353) midp_ticker_pane_g1_ParamLimits

0xd56b,	// (0x0003435f) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x00036591) midp_ticker_pane_g_ParamLimits

0xd577,	// (0x0003436b) midp_ticker_pane_t1_ParamLimits

0xa735,	// (0x00031529) aid_fill_nsta_2

0xdf1b,	// (0x00034d0f) list_form2_midp_pane

0xeca9,	// (0x00035a9d) midp_editing_number_pane_ParamLimits

0xecb5,	// (0x00035aa9) midp_ticker_pane_ParamLimits

0x09ae,	// (0x000277a2) form2_midp_field_pane

0x09d2,	// (0x000277c6) scroll_pane_cp51

0x09f2,	// (0x000277e6) form2_midp_button_pane_ParamLimits

0x09f2,	// (0x000277e6) form2_midp_button_pane

0x0a04,	// (0x000277f8) form2_midp_content_pane_ParamLimits

0x0a04,	// (0x000277f8) form2_midp_content_pane

0x0a1e,	// (0x00027812) form2_midp_field_choice_group_pane

0x0a26,	// (0x0002781a) form2_midp_field_pane_g1

0x0a2e,	// (0x00027822) form2_midp_field_pane_g2

0x0a36,	// (0x0002782a) form2_midp_field_pane_g3

0x0a3e,	// (0x00027832) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x000368fe) form2_midp_field_pane_g

0x0a46,	// (0x0002783a) form2_midp_gauge_slider_pane

0x0a4e,	// (0x00027842) form2_midp_gauge_wait_pane

0x0a56,	// (0x0002784a) form2_midp_image_pane_ParamLimits

0x0a56,	// (0x0002784a) form2_midp_image_pane

0x0a71,	// (0x00027865) form2_midp_label_pane_ParamLimits

0x0a71,	// (0x00027865) form2_midp_label_pane

0xb2c7,	// (0x000320bb) form2_midp_label_pane_cp_ParamLimits

0xb2c7,	// (0x000320bb) form2_midp_label_pane_cp

0x0aa9,	// (0x0002789d) form2_midp_string_pane_ParamLimits

0x0aa9,	// (0x0002789d) form2_midp_string_pane

0x8f0f,	// (0x0002fd03) form2_midp_text_pane_ParamLimits

0x8f0f,	// (0x0002fd03) form2_midp_text_pane

0x0abb,	// (0x000278af) form2_midp_time_pane

0x0acb,	// (0x000278bf) input_focus_pane_cp51_ParamLimits

0x0acb,	// (0x000278bf) input_focus_pane_cp51

0x0ae3,	// (0x000278d7) form2_midp_label_pane_t1_ParamLimits

0x0ae3,	// (0x000278d7) form2_midp_label_pane_t1

0x8f28,	// (0x0002fd1c) form2_mdip_text_pane_t1_ParamLimits

0x8f28,	// (0x0002fd1c) form2_mdip_text_pane_t1

0x4a7a,	// (0x0002b86e) form2_midp_time_pane_t1

0x0b2b,	// (0x0002791f) form2_midp_gauge_slider_pane_t1

0xb2e6,	// (0x000320da) form2_midp_gauge_slider_pane_t2

0xb2f8,	// (0x000320ec) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x00036907) form2_midp_gauge_slider_pane_t

0x0b61,	// (0x00027955) form2_midp_slider_pane

0x0b6d,	// (0x00027961) form2_midp_gauge_wait_pane_t1

0x0b7b,	// (0x0002796f) form2_midp_wait_pane_ParamLimits

0x0b7b,	// (0x0002796f) form2_midp_wait_pane

0xab67,	// (0x0003195b) list_single_2graphic_pane_cp4_ParamLimits

0xab67,	// (0x0003195b) list_single_2graphic_pane_cp4

0xb30a,	// (0x000320fe) list_single_midp_graphic_pane_cp_ParamLimits

0xb30a,	// (0x000320fe) list_single_midp_graphic_pane_cp

0x924c,	// (0x00030040) list_highlight_pane_cp20

0x0ba6,	// (0x0002799a) list_single_2graphic_pane_g1_cp4

0xed22,	// (0x00035b16) list_single_2graphic_pane_g2_cp4

0x0bae,	// (0x000279a2) list_single_2graphic_pane_t1_cp4

0x9458,	// (0x0003024c) list_highlight_pane_cp21

0x0bbd,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp

0x0bcc,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp

0xb328,	// (0x0003211c) form2_mdip_string_pane_t1_ParamLimits

0xb328,	// (0x0003211c) form2_mdip_string_pane_t1

0x924c,	// (0x00030040) bg_wml_button_pane_cp2

0x90ff,	// (0x0002fef3) form2_midp_image_pane_g1

0x50b5,	// (0x0002bea9) list_double_large_graphic_pane_g5_ParamLimits

0x50b5,	// (0x0002bea9) list_double_large_graphic_pane_g5

0x9f58,	// (0x00030d4c) midp_form_pane_ParamLimits

0x9458,	// (0x0003024c) main_apps_wheel_pane_ParamLimits

0xa4c1,	// (0x000312b5) popup_preview_window_ParamLimits

0xa4c1,	// (0x000312b5) popup_preview_window

0xd847,	// (0x0003463b) popup_touch_info_window_ParamLimits

0xd847,	// (0x0003463b) popup_touch_info_window

0xd865,	// (0x00034659) popup_touch_menu_window_ParamLimits

0xd865,	// (0x00034659) popup_touch_menu_window

0x90f5,	// (0x0002fee9) bg_popup_sub_pane_cp6

0x0c59,	// (0x00027a4d) list_touch_menu_pane

0x0c61,	// (0x00027a55) list_single_touch_menu_pane_ParamLimits

0x0c61,	// (0x00027a55) list_single_touch_menu_pane

0x0c78,	// (0x00027a6c) list_single_touch_menu_pane_t1

0x9458,	// (0x0003024c) bg_popup_sub_pane_cp7_ParamLimits

0x9458,	// (0x0003024c) bg_popup_sub_pane_cp7

0x0c86,	// (0x00027a7a) heading_sub_pane

0x0c8e,	// (0x00027a82) list_touch_info_pane_ParamLimits

0x0c8e,	// (0x00027a82) list_touch_info_pane

0x0c9d,	// (0x00027a91) list_single_touch_info_pane_ParamLimits

0x0c9d,	// (0x00027a91) list_single_touch_info_pane

0x0cae,	// (0x00027aa2) list_single_touch_info_pane_t1

0x0cbc,	// (0x00027ab0) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x00036915) list_single_touch_info_pane_t

0xd535,	// (0x00034329) bg_popup_heading_pane_cp

0x0cca,	// (0x00027abe) heading_sub_pane_t1

0xdb31,	// (0x00034925) bg_popup_preview_window_pane_cp_ParamLimits

0xdb31,	// (0x00034925) bg_popup_preview_window_pane_cp

0x0c86,	// (0x00027a7a) heading_preview_pane

0x0c8e,	// (0x00027a82) list_preview_pane_ParamLimits

0x0c8e,	// (0x00027a82) list_preview_pane

0x0cd8,	// (0x00027acc) popup_preview_window_g1

0x0c9d,	// (0x00027a91) list_single_preview_pane_ParamLimits

0x0c9d,	// (0x00027a91) list_single_preview_pane

0x0ce0,	// (0x00027ad4) list_single_preview_pane_g1

0x0ce8,	// (0x00027adc) list_single_preview_pane_t1

0x0cae,	// (0x00027aa2) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0003691a) list_single_preview_pane_t

0x0cf6,	// (0x00027aea) bg_popup_heading_pane_cp2_ParamLimits

0x0cf6,	// (0x00027aea) bg_popup_heading_pane_cp2

0x0d0c,	// (0x00027b00) heading_preview_pane_g1

0x0d14,	// (0x00027b08) heading_preview_pane_t1_ParamLimits

0x0d14,	// (0x00027b08) heading_preview_pane_t1

0x95ef,	// (0x000303e3) soft_indicator_pane_t1_ParamLimits

0x9c46,	// (0x00030a3a) scroll_pane_ParamLimits

0xcf37,	// (0x00033d2b) scroll_sc2_left_pane

0xcf40,	// (0x00033d34) scroll_sc2_right_pane

0xcf5f,	// (0x00033d53) scroll_bg_pane_g1_ParamLimits

0xcf74,	// (0x00033d68) scroll_bg_pane_g2_ParamLimits

0xcf8c,	// (0x00033d80) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x00036520) scroll_bg_pane_g_ParamLimits

0xcf5f,	// (0x00033d53) scroll_handle_pane_g1_ParamLimits

0xcfae,	// (0x00033da2) scroll_handle_pane_g2_ParamLimits

0xcf8c,	// (0x00033d80) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x00036527) scroll_handle_pane_g_ParamLimits

0xd79f,	// (0x00034593) popup_choice_list_window_ParamLimits

0xd79f,	// (0x00034593) popup_choice_list_window

0xd999,	// (0x0003478d) choice_list_pane

0xda0f,	// (0x00034803) cell_toolbar_pane_t1

0xda37,	// (0x0003482b) toolbar_button_pane_ParamLimits

0xea0a,	// (0x000357fe) ai_gene_pane_1_t2_ParamLimits

0xea0a,	// (0x000357fe) ai_gene_pane_1_t2

0x0001,

0xf944,	// (0x00036738) ai_gene_pane_1_t_ParamLimits

0xf944,	// (0x00036738) ai_gene_pane_1_t

0x0d31,	// (0x00027b25) scroll_sc2_left_pane_g1

0x0d31,	// (0x00027b25) scroll_sc2_right_pane_g1

0xcd0a,	// (0x00033afe) bg_popup_sub_pane_cp10

0x0d3b,	// (0x00027b2f) list_choice_list_pane

0x0d52,	// (0x00027b46) list_single_choice_list_pane_ParamLimits

0x0d52,	// (0x00027b46) list_single_choice_list_pane

0x0d66,	// (0x00027b5a) list_single_choice_list_pane_g1

0xccf5,	// (0x00033ae9) list_single_choice_list_pane_t1_ParamLimits

0xccf5,	// (0x00033ae9) list_single_choice_list_pane_t1

0x0d6e,	// (0x00027b62) choice_list_pane_g1

0x0d76,	// (0x00027b6a) choice_list_pane_t1

0x90f5,	// (0x0002fee9) input_focus_pane_cp11

0xce8c,	// (0x00033c80) title_pane_stacon_g2_ParamLimits

0xce8c,	// (0x00033c80) title_pane_stacon_g2

0x0002,

0xf712,	// (0x00036506) title_pane_stacon_g_ParamLimits

0xf712,	// (0x00036506) title_pane_stacon_g

0xd535,	// (0x00034329) cursor_press_pane

0xa228,	// (0x0003101c) popup_fep_hwr_window_ParamLimits

0xa228,	// (0x0003101c) popup_fep_hwr_window

0xd7f1,	// (0x000345e5) popup_fep_vkb_window_ParamLimits

0xd7f1,	// (0x000345e5) popup_fep_vkb_window

0x0d84,	// (0x00027b78) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x00036943) fep_vkb_side_pane_g_ParamLimits

0x5b0e,	// (0x0002c902) fep_hwr_candidate_pane_ParamLimits

0x5b0e,	// (0x0002c902) fep_hwr_candidate_pane

0x5b36,	// (0x0002c92a) fep_hwr_side_pane_ParamLimits

0x5b36,	// (0x0002c92a) fep_hwr_side_pane

0x5b56,	// (0x0002c94a) fep_hwr_top_pane_ParamLimits

0x5b56,	// (0x0002c94a) fep_hwr_top_pane

0x5b6e,	// (0x0002c962) fep_hwr_write_pane_ParamLimits

0x5b6e,	// (0x0002c962) fep_hwr_write_pane

0xfb4f,	// (0x00036943) fep_vkb_side_pane_g

0x0dac,	// (0x00027ba0) fep_hwr_top_pane_g1

0x0d9a,	// (0x00027b8e) fep_hwr_top_pane_g2

0x5b9a,	// (0x0002c98e) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0003691f) fep_hwr_top_pane_g

0x5baf,	// (0x0002c9a3) fep_hwr_top_text_pane

0xd0a8,	// (0x00033e9c) fep_hwr_top_text_pane_g1

0x0de2,	// (0x00027bd6) fep_hwr_top_text_pane_t1

0x5c9d,	// (0x0002ca91) fep_hwr_candidate_pane_g1

0x0ff2,	// (0x00027de6) fep_vkb_keypad_pane_g3_ParamLimits

0x0ff2,	// (0x00027de6) fep_vkb_keypad_pane_g3

0x1014,	// (0x00027e08) fep_vkb_keypad_pane_g4_ParamLimits

0x1014,	// (0x00027e08) fep_vkb_keypad_pane_g4

0x1083,	// (0x00027e77) fep_vkb_bottom_pane_g2_ParamLimits

0x1083,	// (0x00027e77) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0003694a) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0003694a) fep_vkb_bottom_pane_g

0x0d31,	// (0x00027b25) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x00036954) cell_vkb_side_pane_g

0x110e,	// (0x00027f02) cell_vkb_side_pane_t1

0x111c,	// (0x00027f10) cell_vkb_side_pane_t1_copy1

0x0d31,	// (0x00027b25) bg_fep_vkb_candidate_pane_g2

0x1240,	// (0x00028034) cell_vkb_candidate_pane_ParamLimits

0x0df0,	// (0x00027be4) aid_size_cell_vkb_ParamLimits

0x0df0,	// (0x00027be4) aid_size_cell_vkb

0x1240,	// (0x00028034) cell_vkb_candidate_pane

0x5cb7,	// (0x0002caab) bg_popup_fep_shadow_pane_g1

0x0e66,	// (0x00027c5a) fep_vkb_bottom_pane_ParamLimits

0x0e66,	// (0x00027c5a) fep_vkb_bottom_pane

0x0ea3,	// (0x00027c97) fep_vkb_candidate_pane_ParamLimits

0x0ea3,	// (0x00027c97) fep_vkb_candidate_pane

0x0ebf,	// (0x00027cb3) fep_vkb_keypad_pane_ParamLimits

0x0ebf,	// (0x00027cb3) fep_vkb_keypad_pane

0x0ef3,	// (0x00027ce7) fep_vkb_side_pane_ParamLimits

0x0ef3,	// (0x00027ce7) fep_vkb_side_pane

0x0f1f,	// (0x00027d13) fep_vkb_top_pane_ParamLimits

0x0f1f,	// (0x00027d13) fep_vkb_top_pane

0x0f4b,	// (0x00027d3f) fep_vkb_top_pane_g1_ParamLimits

0x0f4b,	// (0x00027d3f) fep_vkb_top_pane_g1

0x0f5a,	// (0x00027d4e) fep_vkb_top_pane_g2_ParamLimits

0x0f5a,	// (0x00027d4e) fep_vkb_top_pane_g2

0x0f69,	// (0x00027d5d) fep_vkb_top_pane_g3_ParamLimits

0x0f69,	// (0x00027d5d) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0003693a) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0003693a) fep_vkb_top_pane_g

0x0f87,	// (0x00027d7b) fep_vkb_top_text_pane_ParamLimits

0x0f87,	// (0x00027d7b) fep_vkb_top_text_pane

0xb3ef,	// (0x000321e3) fep_vkb_side_pane_g1_ParamLimits

0xb3ef,	// (0x000321e3) fep_vkb_side_pane_g1

0x0fe1,	// (0x00027dd5) grid_vkb_side_pane_ParamLimits

0x0fe1,	// (0x00027dd5) grid_vkb_side_pane

0x5cbf,	// (0x0002cab3) bg_popup_fep_shadow_pane_g2

0x5cc8,	// (0x0002cabc) bg_popup_fep_shadow_pane_g3

0x5cd0,	// (0x0002cac4) bg_popup_fep_shadow_pane_g4

0x5cd9,	// (0x0002cacd) bg_popup_fep_shadow_pane_g5

0x5ce1,	// (0x0002cad5) bg_popup_fep_shadow_pane_g6

0x5ce9,	// (0x0002cadd) bg_popup_fep_shadow_pane_g7

0xcbfd,	// (0x000339f1) bg_popup_fep_shadow_pane_g8

0x1032,	// (0x00027e26) grid_vkb_keypad_number_pane_ParamLimits

0x1032,	// (0x00027e26) grid_vkb_keypad_number_pane

0x1042,	// (0x00027e36) grid_vkb_keypad_pane_ParamLimits

0x1042,	// (0x00027e36) grid_vkb_keypad_pane

0x1068,	// (0x00027e5c) fep_vkb_bottom_pane_g1_ParamLimits

0x1068,	// (0x00027e5c) fep_vkb_bottom_pane_g1

0x1091,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x1091,	// (0x00027e85) grid_vkb_keypad_bottom_left_pane

0x10a6,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x10a6,	// (0x00027e9a) grid_vkb_keypad_bottom_right_pane

0x10bb,	// (0x00027eaf) fep_vkb_top_text_pane_g1

0xb436,	// (0x0003222a) fep_vkb_top_text_pane_t1

0xb448,	// (0x0003223c) cell_vkb_side_pane_ParamLimits

0xb448,	// (0x0003223c) cell_vkb_side_pane

0x0d31,	// (0x00027b25) cell_vkb_side_pane_g1

0x112a,	// (0x00027f1e) cell_vkb_keypad_pane_ParamLimits

0x112a,	// (0x00027f1e) cell_vkb_keypad_pane

0x1197,	// (0x00027f8b) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x00036967) bg_popup_fep_shadow_pane_g

0x0d31,	// (0x00027b25) cell_hwr_side_pane_g1

0x0d31,	// (0x00027b25) cell_hwr_side_pane_g2

0x11a1,	// (0x00027f95) cell_vkb_keypad_pane_t1

0xb45e,	// (0x00032252) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb45e,	// (0x00032252) cell_vkb_keypad_bottom_left_pane

0xb473,	// (0x00032267) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb473,	// (0x00032267) cell_vkb_keypad_bottom_right_pane

0x0d31,	// (0x00027b25) cell_vkb_keypad_bottom_left_pane_g1

0x0d31,	// (0x00027b25) cell_vkb_keypad_bottom_right_pane_g1

0x1205,	// (0x00027ff9) cell_vkb_keypad_number_pane_ParamLimits

0x1205,	// (0x00027ff9) cell_vkb_keypad_number_pane

0x1224,	// (0x00028018) cell_vkb_keypad_number_pane_g1

0x122e,	// (0x00028022) cell_vkb_keypad_number_pane_g2

0x1237,	// (0x0002802b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x00036959) cell_vkb_keypad_number_pane_g

0x11a1,	// (0x00027f95) cell_vkb_keypad_number_pane_t1

0x1259,	// (0x0002804d) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x00036954) cell_hwr_side_pane_g

0x1272,	// (0x00028066) cell_hwr_side_pane_t1

0x5cf9,	// (0x0002caed) cell_hwr_side_pane_t1_copy1

0x0f79,	// (0x00027d6d) cell_hwr_candidate_pane_g1

0x5d07,	// (0x0002cafb) cell_hwr_candidate_pane_t1

0x0d31,	// (0x00027b25) cell_vkb_candidate_pane_g2

0x12b6,	// (0x000280aa) cell_vkb_candidate_pane_t1

0x0d8c,	// (0x00027b80) bg_popup_fep_shadow_pane_ParamLimits

0x0d8c,	// (0x00027b80) bg_popup_fep_shadow_pane

0x2d2f,	// (0x00029b23) bg_fep_hwr_top_pane_g4

0x0dbe,	// (0x00027bb2) bg_hwr_side_pane_g1_ParamLimits

0x0dbe,	// (0x00027bb2) bg_hwr_side_pane_g1

0xb3aa,	// (0x0003219e) cell_hwr_side_pane_ParamLimits

0xb3aa,	// (0x0003219e) cell_hwr_side_pane

0x5c26,	// (0x0002ca1a) fep_hwr_write_pane_g1_ParamLimits

0x5c26,	// (0x0002ca1a) fep_hwr_write_pane_g1

0x5c33,	// (0x0002ca27) fep_hwr_write_pane_g2_ParamLimits

0x5c33,	// (0x0002ca27) fep_hwr_write_pane_g2

0x5c40,	// (0x0002ca34) fep_hwr_write_pane_g3_ParamLimits

0x5c40,	// (0x0002ca34) fep_hwr_write_pane_g3

0xb3ca,	// (0x000321be) fep_hwr_write_pane_g4_ParamLimits

0xb3ca,	// (0x000321be) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x00036926) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x00036926) fep_hwr_write_pane_g

0x2d2f,	// (0x00029b23) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d2f,	// (0x00029b23) bg_fep_hwr_candidate_pane_g2

0x5c63,	// (0x0002ca57) cell_hwr_candidate_pane_ParamLimits

0x5c63,	// (0x0002ca57) cell_hwr_candidate_pane

0x5c9d,	// (0x0002ca91) fep_hwr_candidate_pane_g1_ParamLimits

0x0e1e,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x0e1e,	// (0x00027c12) bg_popup_fep_shadow_pane_cp2

0x0f79,	// (0x00027d6d) fep_vkb_top_pane_g4_ParamLimits

0x0f79,	// (0x00027d6d) fep_vkb_top_pane_g4

0x0fbf,	// (0x00027db3) fep_vkb_side_pane_g2_ParamLimits

0x0fbf,	// (0x00027db3) fep_vkb_side_pane_g2

0x8bf8,	// (0x0002f9ec) list_setting_pane_t4_ParamLimits

0x8bf8,	// (0x0002f9ec) list_setting_pane_t4

0x8c92,	// (0x0002fa86) list_setting_number_pane_t5_ParamLimits

0x8c92,	// (0x0002fa86) list_setting_number_pane_t5

0x9e88,	// (0x00030c7c) list_double_heading_pane_cp2_ParamLimits

0x9e88,	// (0x00030c7c) list_double_heading_pane_cp2

0xd3aa,	// (0x0003419e) list_double_heading_pane_g1_cp2_ParamLimits

0xd3aa,	// (0x0003419e) list_double_heading_pane_g1_cp2

0x12c4,	// (0x000280b8) list_double_heading_pane_g2_cp2_ParamLimits

0x12c4,	// (0x000280b8) list_double_heading_pane_g2_cp2

0x12d8,	// (0x000280cc) list_double_heading_pane_t1_cp2_ParamLimits

0x12d8,	// (0x000280cc) list_double_heading_pane_t1_cp2

0x12ee,	// (0x000280e2) list_double_heading_pane_t2_cp2_ParamLimits

0x12ee,	// (0x000280e2) list_double_heading_pane_t2_cp2

0x90df,	// (0x0002fed3) aid_value_unit2

0x4ecf,	// (0x0002bcc3) popup_preview_fixed_window

0x97ad,	// (0x000305a1) bg_popup_preview_window_pane_cp02

0x1300,	// (0x000280f4) list_preview_fixed_pane

0x1388,	// (0x0002817c) list_empty_pane_fp_ParamLimits

0x1388,	// (0x0002817c) list_empty_pane_fp

0x1388,	// (0x0002817c) list_single_cale_day_pane_fp_ParamLimits

0x1388,	// (0x0002817c) list_single_cale_day_pane_fp

0x1388,	// (0x0002817c) list_single_graphic_heading_pane_fp_ParamLimits

0x1388,	// (0x0002817c) list_single_graphic_heading_pane_fp

0x1388,	// (0x0002817c) list_single_graphic_pane_fp_ParamLimits

0x1388,	// (0x0002817c) list_single_graphic_pane_fp

0x1388,	// (0x0002817c) list_single_heading_pane_fp_ParamLimits

0x1388,	// (0x0002817c) list_single_heading_pane_fp

0x1388,	// (0x0002817c) list_single_pane_fp_ParamLimits

0x1388,	// (0x0002817c) list_single_pane_fp

0x139c,	// (0x00028190) list_single_pane_fp_g1_ParamLimits

0x139c,	// (0x00028190) list_single_pane_fp_g1

0x506a,	// (0x0002be5e) list_single_pane_fp_g2_ParamLimits

0x506a,	// (0x0002be5e) list_single_pane_fp_g2

0x5d24,	// (0x0002cb18) list_single_pane_fp_g3_ParamLimits

0x5d24,	// (0x0002cb18) list_single_pane_fp_g3

0x13a8,	// (0x0002819c) list_single_pane_fp_g4_ParamLimits

0x13a8,	// (0x0002819c) list_single_pane_fp_g4

0x0003,

0xfb94,	// (0x00036988) list_single_pane_fp_g_ParamLimits

0xfb94,	// (0x00036988) list_single_pane_fp_g

0x4a8d,	// (0x0002b881) list_single_pane_fp_t1_ParamLimits

0x4a8d,	// (0x0002b881) list_single_pane_fp_t1

0x4aa4,	// (0x0002b898) list_single_graphic_pane_fp_g1_ParamLimits

0x4aa4,	// (0x0002b898) list_single_graphic_pane_fp_g1

0x139c,	// (0x00028190) list_single_graphic_pane_fp_g2_ParamLimits

0x139c,	// (0x00028190) list_single_graphic_pane_fp_g2

0x506a,	// (0x0002be5e) list_single_graphic_pane_fp_g3_ParamLimits

0x506a,	// (0x0002be5e) list_single_graphic_pane_fp_g3

0x5d24,	// (0x0002cb18) list_single_graphic_pane_fp_g4_ParamLimits

0x5d24,	// (0x0002cb18) list_single_graphic_pane_fp_g4

0x13a8,	// (0x0002819c) list_single_graphic_pane_fp_g5_ParamLimits

0x13a8,	// (0x0002819c) list_single_graphic_pane_fp_g5

0x0004,

0xfb9d,	// (0x00036991) list_single_graphic_pane_fp_g_ParamLimits

0xfb9d,	// (0x00036991) list_single_graphic_pane_fp_g

0x4ab0,	// (0x0002b8a4) list_single_graphic_pane_fp_t1_ParamLimits

0x4ab0,	// (0x0002b8a4) list_single_graphic_pane_fp_t1

0x4aa4,	// (0x0002b898) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4aa4,	// (0x0002b898) list_single_graphic_heading_pane_fp_g1

0x139c,	// (0x00028190) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x139c,	// (0x00028190) list_single_graphic_heading_pane_fp_g2

0x506a,	// (0x0002be5e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x506a,	// (0x0002be5e) list_single_graphic_heading_pane_fp_g3

0x5d24,	// (0x0002cb18) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5d24,	// (0x0002cb18) list_single_graphic_heading_pane_fp_g4

0x13a8,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x13a8,	// (0x0002819c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00036991) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00036991) list_single_graphic_heading_pane_fp_g

0x4ac6,	// (0x0002b8ba) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4ac6,	// (0x0002b8ba) list_single_graphic_heading_pane_fp_t1

0x4adc,	// (0x0002b8d0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4adc,	// (0x0002b8d0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003699c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003699c) list_single_graphic_heading_pane_fp_t

0x4aee,	// (0x0002b8e2) list_single_cale_day_pane_fp_g1_ParamLimits

0x4aee,	// (0x0002b8e2) list_single_cale_day_pane_fp_g1

0x13b4,	// (0x000281a8) list_single_cale_day_pane_fp_g2_ParamLimits

0x13b4,	// (0x000281a8) list_single_cale_day_pane_fp_g2

0x5d38,	// (0x0002cb2c) list_single_cale_day_pane_fp_g3_ParamLimits

0x5d38,	// (0x0002cb2c) list_single_cale_day_pane_fp_g3

0x5d60,	// (0x0002cb54) list_single_cale_day_pane_fp_g4_ParamLimits

0x5d60,	// (0x0002cb54) list_single_cale_day_pane_fp_g4

0x5d84,	// (0x0002cb78) list_single_cale_day_pane_fp_g5_ParamLimits

0x5d84,	// (0x0002cb78) list_single_cale_day_pane_fp_g5

0x0004,

0xfbad,	// (0x000369a1) list_single_cale_day_pane_fp_g_ParamLimits

0xfbad,	// (0x000369a1) list_single_cale_day_pane_fp_g

0x4b26,	// (0x0002b91a) list_single_cale_day_pane_fp_t1_ParamLimits

0x4b26,	// (0x0002b91a) list_single_cale_day_pane_fp_t1

0x4b4c,	// (0x0002b940) list_single_cale_day_pane_fp_t2_ParamLimits

0x4b4c,	// (0x0002b940) list_single_cale_day_pane_fp_t2

0x4b65,	// (0x0002b959) list_single_cale_day_pane_fp_t3_ParamLimits

0x4b65,	// (0x0002b959) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb8,	// (0x000369ac) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb8,	// (0x000369ac) list_single_cale_day_pane_fp_t

0x139c,	// (0x00028190) list_empty_pane_fp_g1_ParamLimits

0x139c,	// (0x00028190) list_empty_pane_fp_g1

0x4b7e,	// (0x0002b972) list_empty_pane_fp_t1

0x4b8c,	// (0x0002b980) list_empty_pane_fp_t2

0x0001,

0xfbbf,	// (0x000369b3) list_empty_pane_fp_t

0x139c,	// (0x00028190) list_single_heading_pane_fp_g1_ParamLimits

0x139c,	// (0x00028190) list_single_heading_pane_fp_g1

0x506a,	// (0x0002be5e) list_single_heading_pane_fp_g2_ParamLimits

0x506a,	// (0x0002be5e) list_single_heading_pane_fp_g2

0x5d24,	// (0x0002cb18) list_single_heading_pane_fp_g3_ParamLimits

0x5d24,	// (0x0002cb18) list_single_heading_pane_fp_g3

0x0002,

0xfbc4,	// (0x000369b8) list_single_heading_pane_fp_g_ParamLimits

0xfbc4,	// (0x000369b8) list_single_heading_pane_fp_g

0x4b9a,	// (0x0002b98e) list_single_heading_pane_fp_t1_ParamLimits

0x4b9a,	// (0x0002b98e) list_single_heading_pane_fp_t1

0x4bac,	// (0x0002b9a0) list_single_heading_pane_fp_t2_ParamLimits

0x4bac,	// (0x0002b9a0) list_single_heading_pane_fp_t2

0x0001,

0xfbcb,	// (0x000369bf) list_single_heading_pane_fp_t_ParamLimits

0xfbcb,	// (0x000369bf) list_single_heading_pane_fp_t

0xcd16,	// (0x00033b0a) aid_size_cell_fast

0x9722,	// (0x00030516) soft_indicator_pane_cp1_t1

0xcd53,	// (0x00033b47) cell_app_pane_cp2_ParamLimits

0xcd53,	// (0x00033b47) cell_app_pane_cp2

0x5afb,	// (0x0002c8ef) fep_hwr_candidate_drop_down_list_pane

0x304d,	// (0x00029e41) fep_hwr_candidate_pane_g3_ParamLimits

0x304d,	// (0x00029e41) fep_hwr_candidate_pane_g3

0x305a,	// (0x00029e4e) fep_hwr_candidate_pane_g4_ParamLimits

0x305a,	// (0x00029e4e) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x00036933) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x00036933) fep_hwr_candidate_pane_g

0x0e92,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x0e92,	// (0x00027c86) fep_vkb_candidate_drop_down_list_pane

0x1261,	// (0x00028055) fep_vkb_candidate_pane_g3

0x1269,	// (0x0002805d) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x00036960) fep_vkb_candidate_pane_g

0x0f79,	// (0x00027d6d) cell_hwr_candidate_pane_g1_ParamLimits

0x1316,	// (0x0002810a) cell_hwr_candidate_pane_g3_ParamLimits

0x1316,	// (0x0002810a) cell_hwr_candidate_pane_g3

0x1337,	// (0x0002812b) cell_hwr_candidate_pane_g4_ParamLimits

0x1337,	// (0x0002812b) cell_hwr_candidate_pane_g4

0x0002,

0xfb86,	// (0x0003697a) cell_hwr_candidate_pane_g_ParamLimits

0xfb86,	// (0x0003697a) cell_hwr_candidate_pane_g

0x1280,	// (0x00028074) cell_vkb_candidate_pane_g3_ParamLimits

0x1280,	// (0x00028074) cell_vkb_candidate_pane_g3

0x129b,	// (0x0002808f) cell_vkb_candidate_pane_g4_ParamLimits

0x129b,	// (0x0002808f) cell_vkb_candidate_pane_g4

0x13c0,	// (0x000281b4) cell_app_pane_cp2_g1_ParamLimits

0x13c0,	// (0x000281b4) cell_app_pane_cp2_g1

0x13de,	// (0x000281d2) cell_app_pane_cp2_g2_ParamLimits

0x13de,	// (0x000281d2) cell_app_pane_cp2_g2

0x0001,

0xfbd0,	// (0x000369c4) cell_app_pane_cp2_g_ParamLimits

0xfbd0,	// (0x000369c4) cell_app_pane_cp2_g

0x13ea,	// (0x000281de) cell_app_pane_cp2_t1_ParamLimits

0x13ea,	// (0x000281de) cell_app_pane_cp2_t1

0xcb8e,	// (0x00033982) grid_highlight_pane_cp1_ParamLimits

0xcb8e,	// (0x00033982) grid_highlight_pane_cp1

0x5da8,	// (0x0002cb9c) cell_hwr_candidate_pane_cp1_ParamLimits

0x5da8,	// (0x0002cb9c) cell_hwr_candidate_pane_cp1

0x0f79,	// (0x00027d6d) fep_hwr_candidate_drop_down_list_pane_g1

0x13fc,	// (0x000281f0) fep_hwr_candidate_drop_down_list_pane_g2

0x142c,	// (0x00028220) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x000369c9) fep_hwr_candidate_drop_down_list_pane_g

0x5dc6,	// (0x0002cbba) fep_hwr_candidate_drop_down_list_scroll_pane

0x5dcf,	// (0x0002cbc3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5dcf,	// (0x0002cbc3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5ddc,	// (0x0002cbd0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ddc,	// (0x0002cbd0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5de9,	// (0x0002cbdd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5de9,	// (0x0002cbdd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1280,	// (0x00028074) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1280,	// (0x00028074) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x129b,	// (0x0002808f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x129b,	// (0x0002808f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5df6,	// (0x0002cbea) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5df6,	// (0x0002cbea) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5e11,	// (0x0002cc05) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e11,	// (0x0002cc05) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5e2c,	// (0x0002cc20) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5e2c,	// (0x0002cc20) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x000369d0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x000369d0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xb48e,	// (0x00032282) cell_vkb_candidate_pane_cp1_ParamLimits

0xb48e,	// (0x00032282) cell_vkb_candidate_pane_cp1

0x0f79,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x0f79,	// (0x00027d6d) fep_vkb_candidate_drop_down_list_pane_g1

0x13fc,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x13fc,	// (0x000281f0) fep_vkb_candidate_drop_down_list_pane_g2

0x142c,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x142c,	// (0x00028220) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x000369c9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x000369c9) fep_vkb_candidate_drop_down_list_pane_g

0x1439,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x1439,	// (0x0002822d) fep_vkb_candidate_drop_down_list_scroll_pane

0x1446,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1446,	// (0x0002823a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x1453,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1453,	// (0x00028247) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x145f,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x145f,	// (0x00028253) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x1316,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1316,	// (0x0002810a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x1337,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1337,	// (0x0002812b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x146b,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x146b,	// (0x0002825f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x148c,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x148c,	// (0x00028280) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x14ad,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x14ad,	// (0x000282a1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x000369e1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x000369e1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x92fb,	// (0x000300ef) title_pane_g1_ParamLimits

0x9312,	// (0x00030106) title_pane_g2_ParamLimits

0xf592,	// (0x00036386) title_pane_g_ParamLimits

0xd098,	// (0x00033e8c) aid_call2_pane

0xd0a0,	// (0x00033e94) aid_call_pane

0xd0a8,	// (0x00033e9c) popup_clock_analogue_window_g1

0xd0a8,	// (0x00033e9c) popup_clock_analogue_window_g2

0x524b,	// (0x0002c03f) popup_clock_analogue_window_g3

0x5254,	// (0x0002c048) popup_clock_analogue_window_g4

0x90ff,	// (0x0002fef3) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x00036535) popup_clock_analogue_window_g

0x525c,	// (0x0002c050) popup_clock_analogue_window_t1

0x526a,	// (0x0002c05e) clock_digital_number_pane_ParamLimits

0x526a,	// (0x0002c05e) clock_digital_number_pane

0x5276,	// (0x0002c06a) clock_digital_number_pane_cp02_ParamLimits

0x5276,	// (0x0002c06a) clock_digital_number_pane_cp02

0x5282,	// (0x0002c076) clock_digital_number_pane_cp03_ParamLimits

0x5282,	// (0x0002c076) clock_digital_number_pane_cp03

0x528e,	// (0x0002c082) clock_digital_number_pane_cp04_ParamLimits

0x528e,	// (0x0002c082) clock_digital_number_pane_cp04

0x529a,	// (0x0002c08e) clock_digital_separator_pane_ParamLimits

0x529a,	// (0x0002c08e) clock_digital_separator_pane

0x52a6,	// (0x0002c09a) popup_clock_digital_window_t1_ParamLimits

0x52a6,	// (0x0002c09a) popup_clock_digital_window_t1

0x90ff,	// (0x0002fef3) clock_digital_number_pane_g1

0x90ff,	// (0x0002fef3) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x00036540) clock_digital_number_pane_g

0x90ff,	// (0x0002fef3) clock_digital_separator_pane_g1

0x90ff,	// (0x0002fef3) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x00036540) clock_digital_separator_pane_g

0xa71f,	// (0x00031513) aid_fill_nsta_ParamLimits

0xa836,	// (0x0003162a) indicator_nsta_pane_ParamLimits

0xd942,	// (0x00034736) popup_clock_analogue_window

0xd942,	// (0x00034736) popup_clock_digital_window

0xdb87,	// (0x0003497b) grid_indicator_nsta_pane_ParamLimits

0xf51b,	// (0x0003630f) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x000368c0) clock_nsta_pane_t

0x520f,	// (0x0002c003) aid_size_max_handle

0x9dec,	// (0x00030be0) aid_size_min_handle

0xd535,	// (0x00034329) editor_scroll_pane

0x14c8,	// (0x000282bc) ex_editor_pane

0xccd1,	// (0x00033ac5) scroll_pane_cp13

0x9c73,	// (0x00030a67) scroll_pane_cp14

0xd0d2,	// (0x00033ec6) scroll_pane_cp36

0x9e94,	// (0x00030c88) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e94,	// (0x00030c88) list_single_graphic_hl_pane_cp2

0xb04b,	// (0x00031e3f) list_single_graphic_hl_pane_ParamLimits

0xb04b,	// (0x00031e3f) list_single_graphic_hl_pane

0x4bc2,	// (0x0002b9b6) aid_size_min_hl_cp1

0x14d0,	// (0x000282c4) list_highlight_pane_cp34_ParamLimits

0x14d0,	// (0x000282c4) list_highlight_pane_cp34

0x14e1,	// (0x000282d5) list_single_graphic_hl_pane_g1_ParamLimits

0x14e1,	// (0x000282d5) list_single_graphic_hl_pane_g1

0x8f41,	// (0x0002fd35) list_single_graphic_hl_pane_g2_ParamLimits

0x8f41,	// (0x0002fd35) list_single_graphic_hl_pane_g2

0x8f41,	// (0x0002fd35) list_single_graphic_hl_pane_g3_ParamLimits

0x8f41,	// (0x0002fd35) list_single_graphic_hl_pane_g3

0x9ce9,	// (0x00030add) list_single_graphic_hl_pane_g4_ParamLimits

0x9ce9,	// (0x00030add) list_single_graphic_hl_pane_g4

0xcba8,	// (0x0003399c) list_single_graphic_hl_pane_g5_ParamLimits

0xcba8,	// (0x0003399c) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x000369f2) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x000369f2) list_single_graphic_hl_pane_g

0x8f4d,	// (0x0002fd41) list_single_graphic_hl_pane_t1_ParamLimits

0x8f4d,	// (0x0002fd41) list_single_graphic_hl_pane_t1

0x14ee,	// (0x000282e2) aid_size_min_hl_cp2

0x14f7,	// (0x000282eb) list_highlight_pane_cp34_cp2_ParamLimits

0x14f7,	// (0x000282eb) list_highlight_pane_cp34_cp2

0x14e1,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x14e1,	// (0x000282d5) list_single_graphic_hl_pane_g1_cp2

0x1504,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x1504,	// (0x000282f8) list_single_graphic_hl_pane_g2_cp2

0x1510,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x1510,	// (0x00028304) list_single_graphic_hl_pane_g3_cp2

0xd3aa,	// (0x0003419e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd3aa,	// (0x0003419e) list_single_graphic_hl_pane_g4_cp2

0x12c4,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x12c4,	// (0x000280b8) list_single_graphic_hl_pane_g5_cp2

0xa020,	// (0x00030e14) control_pane_g4_ParamLimits

0xa020,	// (0x00030e14) control_pane_g4

0xcd0a,	// (0x00033afe) bg_popup_sub_pane_cp10_ParamLimits

0x0d3b,	// (0x00027b2f) list_choice_list_pane_ParamLimits

0x0d4a,	// (0x00027b3e) scroll_pane_cp23

0x97ad,	// (0x000305a1) bg_popup_preview_window_pane_cp02_ParamLimits

0x1300,	// (0x000280f4) list_preview_fixed_pane_ParamLimits

0x1358,	// (0x0002814c) list_preview_fixed_pane_cp_ParamLimits

0x1358,	// (0x0002814c) list_preview_fixed_pane_cp

0x1364,	// (0x00028158) popup_preview_fixed_window_g1_ParamLimits

0x1364,	// (0x00028158) popup_preview_fixed_window_g1

0x1370,	// (0x00028164) popup_preview_fixed_window_g2_ParamLimits

0x1370,	// (0x00028164) popup_preview_fixed_window_g2

0x0002,

0xfb8d,	// (0x00036981) popup_preview_fixed_window_g_ParamLimits

0xfb8d,	// (0x00036981) popup_preview_fixed_window_g

0x519f,	// (0x0002bf93) aid_navi_side_left_pane_ParamLimits

0x51af,	// (0x0002bfa3) aid_navi_side_right_pane_ParamLimits

0x51be,	// (0x0002bfb2) navi_icon_pane_stacon_ParamLimits

0x51ce,	// (0x0002bfc2) navi_navi_pane_stacon_ParamLimits

0x51be,	// (0x0002bfb2) navi_text_pane_stacon_ParamLimits

0x90f5,	// (0x0002fee9) main_text_info_pane

0x1532,	// (0x00028326) listscroll_text_info_pane

0x153a,	// (0x0002832e) list_text_info_pane_ParamLimits

0x153a,	// (0x0002832e) list_text_info_pane

0x1549,	// (0x0002833d) scroll_pane_cp24_ParamLimits

0x1549,	// (0x0002833d) scroll_pane_cp24

0xb4ae,	// (0x000322a2) list_text_info_pane_t1_ParamLimits

0xb4ae,	// (0x000322a2) list_text_info_pane_t1

0xa1a8,	// (0x00030f9c) popup_fast_swap2_window_ParamLimits

0xa1a8,	// (0x00030f9c) popup_fast_swap2_window

0x1584,	// (0x00028378) aid_size_cell_fast2

0x90f5,	// (0x0002fee9) bg_popup_window_pane_cp17

0xdf47,	// (0x00034d3b) heading_pane_cp2

0x99f5,	// (0x000307e9) listscroll_fast2_pane

0x158e,	// (0x00028382) grid_fast2_pane

0x1596,	// (0x0002838a) listscroll_fast2_pane_g1

0x159e,	// (0x00028392) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x000369fd) listscroll_fast2_pane_g

0xccd1,	// (0x00033ac5) scroll_pane_cp26

0x15a6,	// (0x0002839a) cell_fast2_pane_ParamLimits

0x15a6,	// (0x0002839a) cell_fast2_pane

0x15bc,	// (0x000283b0) cell_fast2_pane_g1

0x15c5,	// (0x000283b9) cell_fast2_pane_g2

0x15ce,	// (0x000283c2) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x00036a02) cell_fast2_pane_g

0x9acc,	// (0x000308c0) grid_highlight_pane_cp9

0x9ae1,	// (0x000308d5) main_eswt_pane_ParamLimits

0x9ae1,	// (0x000308d5) main_eswt_pane

0x155e,	// (0x00028352) list_single_text_info_pane

0x15d6,	// (0x000283ca) eswt_ctrl_button_pane

0x15d6,	// (0x000283ca) eswt_ctrl_canvas_pane

0x15de,	// (0x000283d2) eswt_ctrl_combo_pane

0x15d6,	// (0x000283ca) eswt_ctrl_default_pane

0x15d6,	// (0x000283ca) eswt_ctrl_label_pane

0x15e6,	// (0x000283da) eswt_ctrl_wait_pane

0x15ee,	// (0x000283e2) eswt_shell_pane

0x90f5,	// (0x0002fee9) listscroll_eswt_app_pane

0x160a,	// (0x000283fe) popup_eswt_tasktip_window_ParamLimits

0x160a,	// (0x000283fe) popup_eswt_tasktip_window

0xdb31,	// (0x00034925) bg_popup_window_pane_cp18

0x161b,	// (0x0002840f) eswt_control_pane_g1_ParamLimits

0x161b,	// (0x0002840f) eswt_control_pane_g1

0x1628,	// (0x0002841c) eswt_control_pane_g2_ParamLimits

0x1628,	// (0x0002841c) eswt_control_pane_g2

0x1635,	// (0x00028429) eswt_control_pane_g3_ParamLimits

0x1635,	// (0x00028429) eswt_control_pane_g3

0x1642,	// (0x00028436) eswt_control_pane_g4_ParamLimits

0x1642,	// (0x00028436) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x00036a09) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x00036a09) eswt_control_pane_g

0xcb8e,	// (0x00033982) bg_button_pane_ParamLimits

0xcb8e,	// (0x00033982) bg_button_pane

0x9ae1,	// (0x000308d5) common_borders_pane_copy2_ParamLimits

0x9ae1,	// (0x000308d5) common_borders_pane_copy2

0x164f,	// (0x00028443) control_button_pane_g1_ParamLimits

0x164f,	// (0x00028443) control_button_pane_g1

0x165b,	// (0x0002844f) control_button_pane_g2_ParamLimits

0x165b,	// (0x0002844f) control_button_pane_g2

0x1667,	// (0x0002845b) control_button_pane_g3_ParamLimits

0x1667,	// (0x0002845b) control_button_pane_g3

0x0002,

0xfc1e,	// (0x00036a12) control_button_pane_g_ParamLimits

0xfc1e,	// (0x00036a12) control_button_pane_g

0x167b,	// (0x0002846f) control_button_pane_t1

0x1689,	// (0x0002847d) control_button_pane_t2

0x0001,

0xfc25,	// (0x00036a19) control_button_pane_t

0xda43,	// (0x00034837) bg_button_pane_g1

0xda4b,	// (0x0003483f) bg_button_pane_g2

0xda53,	// (0x00034847) bg_button_pane_g3

0xda5b,	// (0x0003484f) bg_button_pane_g4

0xda63,	// (0x00034857) bg_button_pane_g5

0xda6b,	// (0x0003485f) bg_button_pane_g6

0xda73,	// (0x00034867) bg_button_pane_g7

0xda7b,	// (0x0003486f) bg_button_pane_g8

0xda83,	// (0x00034877) bg_button_pane_g9

0x0008,

0xf898,	// (0x0003668c) bg_button_pane_g

0x0cf6,	// (0x00027aea) common_borders_pane_ParamLimits

0x0cf6,	// (0x00027aea) common_borders_pane

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy1_ParamLimits

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy1

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy1_ParamLimits

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy1

0x1635,	// (0x00028429) eswt_control_pane_g3_copy1_ParamLimits

0x1635,	// (0x00028429) eswt_control_pane_g3_copy1

0x1642,	// (0x00028436) eswt_control_pane_g4_copy1_ParamLimits

0x1642,	// (0x00028436) eswt_control_pane_g4_copy1

0x0d31,	// (0x00027b25) bg_eswt_ctrl_canvas_pane_g1

0x0cf6,	// (0x00027aea) common_borders_pane_cp2_ParamLimits

0x0cf6,	// (0x00027aea) common_borders_pane_cp2

0x0cf6,	// (0x00027aea) common_borders_pane_cp3_ParamLimits

0x0cf6,	// (0x00027aea) common_borders_pane_cp3

0x1697,	// (0x0002848b) separator_horizontal_pane

0xcf37,	// (0x00033d2b) separator_vertical_pane

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy2_ParamLimits

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy2

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy2_ParamLimits

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy2

0x1635,	// (0x00028429) eswt_control_pane_g3_copy2_ParamLimits

0x1635,	// (0x00028429) eswt_control_pane_g3_copy2

0x1642,	// (0x00028436) eswt_control_pane_g4_copy2_ParamLimits

0x1642,	// (0x00028436) eswt_control_pane_g4_copy2

0x90f5,	// (0x0002fee9) common_borders_pane_cp4

0x169f,	// (0x00028493) separator_horizontal_pane_g1

0x16a8,	// (0x0002849c) separator_horizontal_pane_g2

0x16b1,	// (0x000284a5) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x00036a1e) separator_horizontal_pane_g

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy3_ParamLimits

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy3

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy3_ParamLimits

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy3

0x1635,	// (0x00028429) eswt_control_pane_g3_copy3_ParamLimits

0x1635,	// (0x00028429) eswt_control_pane_g3_copy3

0x1642,	// (0x00028436) eswt_control_pane_g4_copy3_ParamLimits

0x1642,	// (0x00028436) eswt_control_pane_g4_copy3

0x90f5,	// (0x0002fee9) common_borders_pane_cp5

0x16ba,	// (0x000284ae) separator_vertical_pane_g1

0x16c3,	// (0x000284b7) separator_vertical_pane_g2

0x16cc,	// (0x000284c0) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x00036a25) separator_vertical_pane_g

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy4_ParamLimits

0x161b,	// (0x0002840f) eswt_control_pane_g1_copy4

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy4_ParamLimits

0x1628,	// (0x0002841c) eswt_control_pane_g2_copy4

0x1635,	// (0x00028429) eswt_control_pane_g3_copy4_ParamLimits

0x1635,	// (0x00028429) eswt_control_pane_g3_copy4

0x1642,	// (0x00028436) eswt_control_pane_g4_copy4_ParamLimits

0x1642,	// (0x00028436) eswt_control_pane_g4_copy4

0xb4c9,	// (0x000322bd) eswt_ctrl_combo_button_pane

0xb4d1,	// (0x000322c5) eswt_ctrl_input_pane

0xb4d9,	// (0x000322cd) popup_choice_list_window_cp70

0xb4e1,	// (0x000322d5) eswt_ctrl_input_pane_t1

0x90f5,	// (0x0002fee9) input_focus_pane_cp70

0x0cf6,	// (0x00027aea) bg_button_pane_cp70_ParamLimits

0x0cf6,	// (0x00027aea) bg_button_pane_cp70

0xb4ef,	// (0x000322e3) eswt_ctrl_combo_button_pane_g1

0x1703,	// (0x000284f7) wait_bar_pane_cp70

0xdb31,	// (0x00034925) bg_popup_window_pane_cp70_ParamLimits

0xdb31,	// (0x00034925) bg_popup_window_pane_cp70

0x170b,	// (0x000284ff) popup_eswt_tasktip_window_t1

0x1721,	// (0x00028515) wait_bar_pane_cp71_ParamLimits

0x1721,	// (0x00028515) wait_bar_pane_cp71

0x172d,	// (0x00028521) grid_eswt_app_pane

0xcf40,	// (0x00033d34) scroll_pane_cp70

0xb4f7,	// (0x000322eb) cell_eswt_app_pane_ParamLimits

0xb4f7,	// (0x000322eb) cell_eswt_app_pane

0xb51f,	// (0x00032313) cell_eswt_app_pane_g1_ParamLimits

0xb51f,	// (0x00032313) cell_eswt_app_pane_g1

0xb54e,	// (0x00032342) cell_eswt_app_pane_g2_ParamLimits

0xb54e,	// (0x00032342) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x00036a2c) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x00036a2c) cell_eswt_app_pane_g

0xb577,	// (0x0003236b) cell_eswt_app_pane_t1_ParamLimits

0xb577,	// (0x0003236b) cell_eswt_app_pane_t1

0x17e8,	// (0x000285dc) grid_highlight_pane_cp70_ParamLimits

0x17e8,	// (0x000285dc) grid_highlight_pane_cp70

0x9ce9,	// (0x00030add) set_content_pane_g1

0xd724,	// (0x00034518) status_small_volume_pane

0x5e47,	// (0x0002cc3b) status_small_volume_pane_g1

0x5e4f,	// (0x0002cc43) volume_small2_pane

0x5e58,	// (0x0002cc4c) volume_small2_pane_g1

0x5e61,	// (0x0002cc55) volume_small2_pane_g2

0x5e6a,	// (0x0002cc5e) volume_small2_pane_g3

0x5e73,	// (0x0002cc67) volume_small2_pane_g4

0x5e7c,	// (0x0002cc70) volume_small2_pane_g5

0x5e85,	// (0x0002cc79) volume_small2_pane_g6

0x5e8e,	// (0x0002cc82) volume_small2_pane_g7

0x5e97,	// (0x0002cc8b) volume_small2_pane_g8

0x5ea0,	// (0x0002cc94) volume_small2_pane_g9

0x5ea9,	// (0x0002cc9d) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x00036a31) volume_small2_pane_g

0x10bb,	// (0x00027eaf) fep_vkb_top_text_pane_g1_ParamLimits

0xb436,	// (0x0003222a) fep_vkb_top_text_pane_t1_ParamLimits

0x137c,	// (0x00028170) popup_preview_fixed_window_g3_ParamLimits

0x137c,	// (0x00028170) popup_preview_fixed_window_g3

0xa6c8,	// (0x000314bc) popup_toolbar_trans_pane

0xaeeb,	// (0x00031cdf) aid_height_set_list_ParamLimits

0xec6d,	// (0x00035a61) aid_size_parent_ParamLimits

0xcd0a,	// (0x00033afe) list_highlight_pane_cp2_ParamLimits

0x9ce9,	// (0x00030add) set_content_pane_g1_ParamLimits

0xb05e,	// (0x00031e52) list_single_image_pane_ParamLimits

0xb05e,	// (0x00031e52) list_single_image_pane

0xb5a9,	// (0x0003239d) aid_size_cell_image_ParamLimits

0xb5a9,	// (0x0003239d) aid_size_cell_image

0xb5b6,	// (0x000323aa) grid_single_image_pane_ParamLimits

0xb5b6,	// (0x000323aa) grid_single_image_pane

0x9ce9,	// (0x00030add) list_single_image_pane_g1_ParamLimits

0x9ce9,	// (0x00030add) list_single_image_pane_g1

0xcba8,	// (0x0003399c) list_single_image_pane_g2_ParamLimits

0xcba8,	// (0x0003399c) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x00036a46) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x00036a46) list_single_image_pane_g

0xf4e0,	// (0x000362d4) list_single_image_pane_t1_ParamLimits

0xf4e0,	// (0x000362d4) list_single_image_pane_t1

0xb5c2,	// (0x000323b6) cell_image_list_pane_ParamLimits

0xb5c2,	// (0x000323b6) cell_image_list_pane

0xb5d6,	// (0x000323ca) cell_image_list_pane_g1

0xb5df,	// (0x000323d3) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x00036a4b) cell_image_list_pane_g

0x2626,	// (0x0002941a) aid_size_cell_tb_trans_pane

0xcb8e,	// (0x00033982) bg_tb_trans_pane

0x2638,	// (0x0002942c) grid_tb_trans_pane

0xda43,	// (0x00034837) bg_tb_trans_pane_g1

0xda4b,	// (0x0003483f) bg_tb_trans_pane_g2

0xda53,	// (0x00034847) bg_tb_trans_pane_g3

0xda5b,	// (0x0003484f) bg_tb_trans_pane_g4

0xda63,	// (0x00034857) bg_tb_trans_pane_g5

0xda7b,	// (0x0003486f) bg_tb_trans_pane_g6

0xda83,	// (0x00034877) bg_tb_trans_pane_g7

0xda6b,	// (0x0003485f) bg_tb_trans_pane_g8

0xda73,	// (0x00034867) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x00036a50) bg_tb_trans_pane_g

0x264c,	// (0x00029440) cell_toolbar_trans_pane_ParamLimits

0x264c,	// (0x00029440) cell_toolbar_trans_pane

0x0d31,	// (0x00027b25) cell_toolbar_trans_pane_g1

0xb2ab,	// (0x0003209f) list_form2_midp_pane_t1

0xb2b9,	// (0x000320ad) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x000368f9) list_form2_midp_pane_t

0x09d2,	// (0x000277c6) scroll_pane_cp51_ParamLimits

0x0b8b,	// (0x0002797f) form2_midp_wait_pane_g1

0x0b94,	// (0x00027988) form2_midp_wait_pane_g2

0x0b9d,	// (0x00027991) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0003690e) form2_midp_wait_pane_g

0x9458,	// (0x0003024c) list_highlight_pane_cp21_ParamLimits

0x0bbd,	// (0x000279b1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x0bcc,	// (0x000279c0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5929,	// (0x0002c71d) list_single_2graphic_im_pane_ParamLimits

0x5929,	// (0x0002c71d) list_single_2graphic_im_pane

0xb5e8,	// (0x000323dc) list_single_2graphic_im_pane_g1_ParamLimits

0xb5e8,	// (0x000323dc) list_single_2graphic_im_pane_g1

0xb5f9,	// (0x000323ed) list_single_2graphic_im_pane_g2_ParamLimits

0xb5f9,	// (0x000323ed) list_single_2graphic_im_pane_g2

0xb605,	// (0x000323f9) list_single_2graphic_im_pane_g3_ParamLimits

0xb605,	// (0x000323f9) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x00036a63) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x00036a63) list_single_2graphic_im_pane_g

0xb619,	// (0x0003240d) list_single_2graphic_im_pane_t1_ParamLimits

0xb619,	// (0x0003240d) list_single_2graphic_im_pane_t1

0x1388,	// (0x0002817c) list_single_graphic_2heading_pane_fp_ParamLimits

0x1388,	// (0x0002817c) list_single_graphic_2heading_pane_fp

0x4aa4,	// (0x0002b898) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4aa4,	// (0x0002b898) list_single_graphic_2heading_pane_fp_g1

0x139c,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x139c,	// (0x00028190) list_single_graphic_2heading_pane_fp_g2

0x506a,	// (0x0002be5e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x506a,	// (0x0002be5e) list_single_graphic_2heading_pane_fp_g3

0x5d24,	// (0x0002cb18) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5d24,	// (0x0002cb18) list_single_graphic_2heading_pane_fp_g4

0x13a8,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x13a8,	// (0x0002819c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x00036991) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00036991) list_single_graphic_2heading_pane_fp_g

0x4bd7,	// (0x0002b9cb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4bd7,	// (0x0002b9cb) list_single_graphic_2heading_pane_fp_t1

0x4adc,	// (0x0002b8d0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4adc,	// (0x0002b8d0) list_single_graphic_2heading_pane_fp_t2

0x4bed,	// (0x0002b9e1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4bed,	// (0x0002b9e1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x00036a6c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x00036a6c) list_single_graphic_2heading_pane_fp_t

0x0dca,	// (0x00027bbe) fep_hwr_write_pane_g5_ParamLimits

0x0dca,	// (0x00027bbe) fep_hwr_write_pane_g5

0x0dd6,	// (0x00027bca) fep_hwr_write_pane_g6_ParamLimits

0x0dd6,	// (0x00027bca) fep_hwr_write_pane_g6

0x15ee,	// (0x000283e2) eswt_shell_pane_ParamLimits

0xdb31,	// (0x00034925) bg_popup_window_pane_cp18_ParamLimits

0xec11,	// (0x00035a05) heading_pane_cp70

0x170b,	// (0x000284ff) popup_eswt_tasktip_window_t1_ParamLimits

0xa763,	// (0x00031557) aid_touch_tab_arrow_left

0xa777,	// (0x0003156b) aid_touch_tab_arrow_right

0x9331,	// (0x00030125) title_pane_g3_ParamLimits

0x9331,	// (0x00030125) title_pane_g3

0xcb5e,	// (0x00033952) set_value_pane_g1

0xa6c8,	// (0x000314bc) popup_toolbar_trans_pane_ParamLimits

0x2626,	// (0x0002941a) aid_size_cell_tb_trans_pane_ParamLimits

0xcb8e,	// (0x00033982) bg_tb_trans_pane_ParamLimits

0x2638,	// (0x0002942c) grid_tb_trans_pane_ParamLimits

0x97ad,	// (0x000305a1) cont_note_pane_ParamLimits

0x97ad,	// (0x000305a1) cont_note_pane

0x9ae1,	// (0x000308d5) cont_snote2_single_text_pane_ParamLimits

0x9ae1,	// (0x000308d5) cont_snote2_single_text_pane

0x9ae1,	// (0x000308d5) cont_snote2_single_graphic_pane_ParamLimits

0x9ae1,	// (0x000308d5) cont_snote2_single_graphic_pane

0xe120,	// (0x00034f14) cont_note_wait_pane_ParamLimits

0xe120,	// (0x00034f14) cont_note_wait_pane

0xe120,	// (0x00034f14) cont_note_image_pane_ParamLimits

0xe120,	// (0x00034f14) cont_note_image_pane

0x267e,	// (0x00029472) popup_note2_window_g1_ParamLimits

0x267e,	// (0x00029472) popup_note2_window_g1

0x26af,	// (0x000294a3) popup_note2_window_t1_ParamLimits

0x26af,	// (0x000294a3) popup_note2_window_t1

0x26f4,	// (0x000294e8) popup_note2_window_t2_ParamLimits

0x26f4,	// (0x000294e8) popup_note2_window_t2

0x2739,	// (0x0002952d) popup_note2_window_t3_ParamLimits

0x2739,	// (0x0002952d) popup_note2_window_t3

0x277e,	// (0x00029572) popup_note2_window_t4_ParamLimits

0x277e,	// (0x00029572) popup_note2_window_t4

0x9831,	// (0x00030625) popup_note2_window_t5_ParamLimits

0x9831,	// (0x00030625) popup_note2_window_t5

0x0004,

0xfc84,	// (0x00036a78) popup_note2_window_t_ParamLimits

0xfc84,	// (0x00036a78) popup_note2_window_t

0x27ad,	// (0x000295a1) popup_note2_image_window_g1_ParamLimits

0x27ad,	// (0x000295a1) popup_note2_image_window_g1

0x27b9,	// (0x000295ad) popup_note2_image_window_g2_ParamLimits

0x27b9,	// (0x000295ad) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x00036a83) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x00036a83) popup_note2_image_window_g

0x27cb,	// (0x000295bf) popup_note2_image_window_t1_ParamLimits

0x27cb,	// (0x000295bf) popup_note2_image_window_t1

0x27e3,	// (0x000295d7) popup_note2_image_window_t2_ParamLimits

0x27e3,	// (0x000295d7) popup_note2_image_window_t2

0x27fb,	// (0x000295ef) popup_note2_image_window_t3_ParamLimits

0x27fb,	// (0x000295ef) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x00036a88) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x00036a88) popup_note2_image_window_t

0xe12e,	// (0x00034f22) popup_note2_wait_window_g1_ParamLimits

0xe12e,	// (0x00034f22) popup_note2_wait_window_g1

0xe13a,	// (0x00034f2e) popup_note2_wait_window_g2_ParamLimits

0xe13a,	// (0x00034f2e) popup_note2_wait_window_g2

0xe146,	// (0x00034f3a) popup_note2_wait_window_g3_ParamLimits

0xe146,	// (0x00034f3a) popup_note2_wait_window_g3

0x0002,

0xf87a,	// (0x0003666e) popup_note2_wait_window_g_ParamLimits

0xf87a,	// (0x0003666e) popup_note2_wait_window_g

0x2817,	// (0x0002960b) popup_note2_wait_window_t1_ParamLimits

0x2817,	// (0x0002960b) popup_note2_wait_window_t1

0x2835,	// (0x00029629) popup_note2_wait_window_t2_ParamLimits

0x2835,	// (0x00029629) popup_note2_wait_window_t2

0x2853,	// (0x00029647) popup_note2_wait_window_t3_ParamLimits

0x2853,	// (0x00029647) popup_note2_wait_window_t3

0x2865,	// (0x00029659) popup_note2_wait_window_t4_ParamLimits

0x2865,	// (0x00029659) popup_note2_wait_window_t4

0x0003,

0xfc9b,	// (0x00036a8f) popup_note2_wait_window_t_ParamLimits

0xfc9b,	// (0x00036a8f) popup_note2_wait_window_t

0x2877,	// (0x0002966b) wait_bar2_pane_ParamLimits

0x2877,	// (0x0002966b) wait_bar2_pane

0x288f,	// (0x00029683) popup_snote2_single_text_window_g1_ParamLimits

0x288f,	// (0x00029683) popup_snote2_single_text_window_g1

0x28b7,	// (0x000296ab) popup_snote2_single_text_window_t1_ParamLimits

0x28b7,	// (0x000296ab) popup_snote2_single_text_window_t1

0x2903,	// (0x000296f7) popup_snote2_single_text_window_t2_ParamLimits

0x2903,	// (0x000296f7) popup_snote2_single_text_window_t2

0x294f,	// (0x00029743) popup_snote2_single_text_window_t3_ParamLimits

0x294f,	// (0x00029743) popup_snote2_single_text_window_t3

0x2990,	// (0x00029784) popup_snote2_single_text_window_t4_ParamLimits

0x2990,	// (0x00029784) popup_snote2_single_text_window_t4

0x29c6,	// (0x000297ba) popup_snote2_single_text_window_t5_ParamLimits

0x29c6,	// (0x000297ba) popup_snote2_single_text_window_t5

0x0004,

0xfca4,	// (0x00036a98) popup_snote2_single_text_window_t_ParamLimits

0xfca4,	// (0x00036a98) popup_snote2_single_text_window_t

0x29f1,	// (0x000297e5) popup_snote2_single_graphic_window_g1_ParamLimits

0x29f1,	// (0x000297e5) popup_snote2_single_graphic_window_g1

0x2a19,	// (0x0002980d) popup_snote2_single_graphic_window_g2_ParamLimits

0x2a19,	// (0x0002980d) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaf,	// (0x00036aa3) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaf,	// (0x00036aa3) popup_snote2_single_graphic_window_g

0x2a41,	// (0x00029835) popup_snote2_single_graphic_window_t1_ParamLimits

0x2a41,	// (0x00029835) popup_snote2_single_graphic_window_t1

0x2a8d,	// (0x00029881) popup_snote2_single_graphic_window_t2_ParamLimits

0x2a8d,	// (0x00029881) popup_snote2_single_graphic_window_t2

0x294f,	// (0x00029743) popup_snote2_single_graphic_window_t3_ParamLimits

0x294f,	// (0x00029743) popup_snote2_single_graphic_window_t3

0x2990,	// (0x00029784) popup_snote2_single_graphic_window_t4_ParamLimits

0x2990,	// (0x00029784) popup_snote2_single_graphic_window_t4

0x29c6,	// (0x000297ba) popup_snote2_single_graphic_window_t5_ParamLimits

0x29c6,	// (0x000297ba) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb4,	// (0x00036aa8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb4,	// (0x00036aa8) popup_snote2_single_graphic_window_t

0xf551,	// (0x00036345) clock_nsta_pane_cp2_t1

0xf551,	// (0x00036345) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x000368cf) clock_nsta_pane_cp2_t

0x4564,	// (0x0002b358) form_field_data_wide_pane_g1_ParamLimits

0x9ce9,	// (0x00030add) form_field_data_wide_pane_g2_ParamLimits

0x9ce9,	// (0x00030add) form_field_data_wide_pane_g2

0xcba8,	// (0x0003399c) form_field_data_wide_pane_g3_ParamLimits

0xcba8,	// (0x0003399c) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x000364b8) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x000364b8) form_field_data_wide_pane_g

0xb1e6,	// (0x00031fda) grid_touch_3_pane_ParamLimits

0xb1e6,	// (0x00031fda) grid_touch_3_pane

0xb64a,	// (0x0003243e) cell_touch_3_pane_ParamLimits

0xb64a,	// (0x0003243e) cell_touch_3_pane

0x0d31,	// (0x00027b25) cell_touch_3_pane_g1

0x0d31,	// (0x00027b25) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x00036954) cell_touch_3_pane_g

0x9863,	// (0x00030657) cont_query_data_pane

0x986b,	// (0x0003065f) cont_query_data_pane_cp1

0x2ad9,	// (0x000298cd) button_value_adjust_pane_cp7

0x2ae1,	// (0x000298d5) query_popup_pane_cp3

0xd0e3,	// (0x00033ed7) bg_popup_sub_pane_cp22_ParamLimits

0x52c5,	// (0x0002c0b9) navi_navi_volume_pane_cp2

0x52dd,	// (0x0002c0d1) popup_side_volume_key_window_g2

0x52e9,	// (0x0002c0dd) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0003654a) popup_side_volume_key_window_g

0x5303,	// (0x0002c0f7) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x00036551) popup_side_volume_key_window_t

0xd32d,	// (0x00034121) popup_side_volume_key_window_ParamLimits

0x8a47,	// (0x0002f83b) list_double_graphic_pane_g4_ParamLimits

0x8a47,	// (0x0002f83b) list_double_graphic_pane_g4

0x8efb,	// (0x0002fcef) list_single_2heading_msg_pane_ParamLimits

0x8efb,	// (0x0002fcef) list_single_2heading_msg_pane

0x8f63,	// (0x0002fd57) list_single_2heading_msg_pane_g1_ParamLimits

0x8f63,	// (0x0002fd57) list_single_2heading_msg_pane_g1

0x8f6f,	// (0x0002fd63) list_single_2heading_msg_pane_g2_ParamLimits

0x8f6f,	// (0x0002fd63) list_single_2heading_msg_pane_g2

0x8f82,	// (0x0002fd76) list_single_2heading_msg_pane_g3_ParamLimits

0x8f82,	// (0x0002fd76) list_single_2heading_msg_pane_g3

0x8f8e,	// (0x0002fd82) list_single_2heading_msg_pane_g4_ParamLimits

0x8f8e,	// (0x0002fd82) list_single_2heading_msg_pane_g4

0x0003,

0xfcbf,	// (0x00036ab3) list_single_2heading_msg_pane_g_ParamLimits

0xfcbf,	// (0x00036ab3) list_single_2heading_msg_pane_g

0x8fa6,	// (0x0002fd9a) list_single_2heading_msg_pane_t1_ParamLimits

0x8fa6,	// (0x0002fd9a) list_single_2heading_msg_pane_t1

0x8fce,	// (0x0002fdc2) list_single_2heading_msg_pane_t2_ParamLimits

0x8fce,	// (0x0002fdc2) list_single_2heading_msg_pane_t2

0x9039,	// (0x0002fe2d) list_single_2heading_msg_pane_t3_ParamLimits

0x9039,	// (0x0002fe2d) list_single_2heading_msg_pane_t3

0x4ccb,	// (0x0002babf) list_single_2heading_msg_pane_t4_ParamLimits

0x4ccb,	// (0x0002babf) list_single_2heading_msg_pane_t4

0x0003,

0xfcc8,	// (0x00036abc) list_single_2heading_msg_pane_t_ParamLimits

0xfcc8,	// (0x00036abc) list_single_2heading_msg_pane_t

0x933d,	// (0x00030131) title_pane_g4_ParamLimits

0x933d,	// (0x00030131) title_pane_g4

0x5115,	// (0x0002bf09) title_pane_stacon_g3_ParamLimits

0x5115,	// (0x0002bf09) title_pane_stacon_g3

0x2672,	// (0x00029466) list_single_2graphic_im_pane_g4_ParamLimits

0x2672,	// (0x00029466) list_single_2graphic_im_pane_g4

0xea27,	// (0x0003581b) popup_side_volume_key_window_cp

0xeeea,	// (0x00035cde) main_idle_act2_pane_t1

0x5679,	// (0x0002c46d) toolbar_button_pane_g10

0x9c3e,	// (0x00030a32) popup_toolbar_window_cp1

0xf542,	// (0x00036336) clock_nsta_pane_cp_t1

0xf542,	// (0x00036336) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x000368ca) clock_nsta_pane_cp_t

0x52c5,	// (0x0002c0b9) navi_navi_volume_pane_cp2_ParamLimits

0x52d1,	// (0x0002c0c5) popup_side_volume_key_window_g1_ParamLimits

0x52dd,	// (0x0002c0d1) popup_side_volume_key_window_g2_ParamLimits

0x52e9,	// (0x0002c0dd) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0003654a) popup_side_volume_key_window_g_ParamLimits

0x5ae7,	// (0x0002c8db) fep_hwr_aid_pane

0x2d2f,	// (0x00029b23) bg_fep_hwr_top_pane_g4_ParamLimits

0x0dac,	// (0x00027ba0) fep_hwr_top_pane_g1_ParamLimits

0x0d9a,	// (0x00027b8e) fep_hwr_top_pane_g2_ParamLimits

0x5b9a,	// (0x0002c98e) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0003691f) fep_hwr_top_pane_g_ParamLimits

0x5baf,	// (0x0002c9a3) fep_hwr_top_text_pane_ParamLimits

0xe827,	// (0x0003561b) aid_touch_tab_arrow_arrow_2

0xe830,	// (0x00035624) aid_touch_tab_arrow_left_2

0x5afb,	// (0x0002c8ef) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5b2e,	// (0x0002c922) fep_hwr_prediction_pane

0x0eeb,	// (0x00027cdf) fep_vkb_prediction_pane

0xb416,	// (0x0003220a) fep_vkb_side_pane_g3_ParamLimits

0xb416,	// (0x0003220a) fep_vkb_side_pane_g3

0x0f79,	// (0x00027d6d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x13fc,	// (0x000281f0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x142c,	// (0x00028220) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd5,	// (0x000369c9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2af2,	// (0x000298e6) fep_hwr_prediction_pane_g1

0x5f93,	// (0x0002cd87) fep_hwr_prediction_pane_g2

0x5f9b,	// (0x0002cd8f) fep_hwr_prediction_pane_g3

0x5fa3,	// (0x0002cd97) fep_hwr_prediction_pane_g4

0x0003,

0xfcd1,	// (0x00036ac5) fep_hwr_prediction_pane_g

0x2af2,	// (0x000298e6) fep_vkb_prediction_pane_g1

0x2afc,	// (0x000298f0) fep_vkb_prediction_pane_g2

0x2b04,	// (0x000298f8) fep_vkb_prediction_pane_g3

0x2b0c,	// (0x00029900) fep_vkb_prediction_pane_g4

0x0003,

0xfcda,	// (0x00036ace) fep_vkb_prediction_pane_g

0xee37,	// (0x00035c2b) slider_set_pane_g3

0xee4b,	// (0x00035c3f) slider_set_pane_g4

0xee63,	// (0x00035c57) slider_set_pane_g5

0xee37,	// (0x00035c2b) slider_set_pane_g6

0xaeb5,	// (0x00031ca9) slider_set_pane_g7

0xec90,	// (0x00035a84) slider_form_pane_g3

0xec99,	// (0x00035a8d) slider_form_pane_g4

0xeca1,	// (0x00035a95) slider_form_pane_g5

0xec90,	// (0x00035a84) slider_form_pane_g6

0xb01d,	// (0x00031e11) slider_form_pane_g7

0xf133,	// (0x00035f27) slider_set_pane_vc_g3

0xf13c,	// (0x00035f30) slider_set_pane_vc_g4

0xf145,	// (0x00035f39) slider_set_pane_vc_g5

0xf133,	// (0x00035f27) slider_set_pane_vc_g6

0xf14e,	// (0x00035f42) slider_set_pane_vc_g7

0xf133,	// (0x00035f27) slider_form_pane_vc_g1

0xf13c,	// (0x00035f30) slider_form_pane_vc_g2

0xf145,	// (0x00035f39) slider_form_pane_vc_g3

0xf133,	// (0x00035f27) slider_form_pane_vc_g4

0xf2e2,	// (0x000360d6) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x000368b0) slider_form_pane_vc_g

0x90f5,	// (0x0002fee9) main_idle_act3_pane

0x2b14,	// (0x00029908) ai3_links_pane

0xb691,	// (0x00032485) popup_ai3_data_window_ParamLimits

0xb691,	// (0x00032485) popup_ai3_data_window

0x90f5,	// (0x0002fee9) grid_ai3_links_pane

0xb6a9,	// (0x0003249d) cell_ai3_links_pane_ParamLimits

0xb6a9,	// (0x0003249d) cell_ai3_links_pane

0x2b1d,	// (0x00029911) bg_popup_sub_pane_cp11

0x2b2a,	// (0x0002991e) cell_ai3_links_pane_g1

0x90f5,	// (0x0002fee9) bg_popup_sub_pane_cp12

0x2b4f,	// (0x00029943) heading_ai3_data_pane

0x2b57,	// (0x0002994b) list_ai3_gene_pane

0x2b63,	// (0x00029957) popup_ai3_data_window_g1

0x2b6b,	// (0x0002995f) heading_ai3_data_pane_g1

0x2b73,	// (0x00029967) heading_ai3_data_pane_t1

0x2b81,	// (0x00029975) list_double_ai3_gene_pane_ParamLimits

0x2b81,	// (0x00029975) list_double_ai3_gene_pane

0x2b8e,	// (0x00029982) list_single_ai3_gene_pane_ParamLimits

0x2b8e,	// (0x00029982) list_single_ai3_gene_pane

0x0cf6,	// (0x00027aea) list_highlight_pane_cp7_ParamLimits

0x0cf6,	// (0x00027aea) list_highlight_pane_cp7

0x2b9b,	// (0x0002998f) list_single_a13_gene_pane_t1_ParamLimits

0x2b9b,	// (0x0002998f) list_single_a13_gene_pane_t1

0x2bb2,	// (0x000299a6) list_single_ai3_gene_pane_g1

0x2bbb,	// (0x000299af) list_single_ai3_gene_pane_g2

0x0001,

0xfce3,	// (0x00036ad7) list_single_ai3_gene_pane_g

0x2bc3,	// (0x000299b7) list_double_ai3_gene_pane_g1_ParamLimits

0x2bc3,	// (0x000299b7) list_double_ai3_gene_pane_g1

0x2bcf,	// (0x000299c3) list_double_ai3_gene_pane_t1_ParamLimits

0x2bcf,	// (0x000299c3) list_double_ai3_gene_pane_t1

0x2beb,	// (0x000299df) list_double_ai3_gene_pane_t2_ParamLimits

0x2beb,	// (0x000299df) list_double_ai3_gene_pane_t2

0x2c00,	// (0x000299f4) list_double_ai3_gene_pane_t3_ParamLimits

0x2c00,	// (0x000299f4) list_double_ai3_gene_pane_t3

0x0002,

0xfce8,	// (0x00036adc) list_double_ai3_gene_pane_t_ParamLimits

0xfce8,	// (0x00036adc) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4c03,	// (0x0002b9f7) aid_size_min_col_2

0xb67d,	// (0x00032471) aid_size_min_msg_ParamLimits

0xb67d,	// (0x00032471) aid_size_min_msg

0xb42a,	// (0x0003221e) fep_vkb_top_text_pane_g2_ParamLimits

0xb42a,	// (0x0003221e) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0003694f) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0003694f) fep_vkb_top_text_pane_g

0x90f5,	// (0x0002fee9) main_hc_apps_shell_pane

0x2c1d,	// (0x00029a11) grid_hc_apps_pane_ParamLimits

0x2c1d,	// (0x00029a11) grid_hc_apps_pane

0x2c2c,	// (0x00029a20) list_hc_apps_pane

0x2c34,	// (0x00029a28) scroll_pane_cp37_ParamLimits

0x2c34,	// (0x00029a28) scroll_pane_cp37

0xb6bf,	// (0x000324b3) cell_hc_apps_pane_ParamLimits

0xb6bf,	// (0x000324b3) cell_hc_apps_pane

0xb759,	// (0x0003254d) cell_hc_apps_pane_g1_ParamLimits

0xb759,	// (0x0003254d) cell_hc_apps_pane_g1

0x2c40,	// (0x00029a34) cell_hc_apps_pane_g2_ParamLimits

0x2c40,	// (0x00029a34) cell_hc_apps_pane_g2

0x2c5c,	// (0x00029a50) cell_hc_apps_pane_g3_ParamLimits

0x2c5c,	// (0x00029a50) cell_hc_apps_pane_g3

0x0002,

0xfcef,	// (0x00036ae3) cell_hc_apps_pane_g_ParamLimits

0xfcef,	// (0x00036ae3) cell_hc_apps_pane_g

0xb786,	// (0x0003257a) cell_hc_apps_pane_t1_ParamLimits

0xb786,	// (0x0003257a) cell_hc_apps_pane_t1

0x97ad,	// (0x000305a1) grid_highlight_pane_cp10_ParamLimits

0x97ad,	// (0x000305a1) grid_highlight_pane_cp10

0xb7c4,	// (0x000325b8) list_single_hc_apps_pane_ParamLimits

0xb7c4,	// (0x000325b8) list_single_hc_apps_pane

0xb7f0,	// (0x000325e4) list_single_hc_apps_pane_g1

0xb809,	// (0x000325fd) list_single_hc_apps_pane_g2

0x0001,

0xfcf6,	// (0x00036aea) list_single_hc_apps_pane_g

0xb822,	// (0x00032616) list_single_hc_apps_pane_g2_copy1

0x90a7,	// (0x0002fe9b) list_single_hc_apps_pane_t1

0x9458,	// (0x0003024c) bg_set_opt_pane_cp_ParamLimits

0x9466,	// (0x0003025a) setting_slider_pane_t1_ParamLimits

0x947c,	// (0x00030270) setting_slider_pane_t2_ParamLimits

0x9495,	// (0x00030289) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00036396) setting_slider_pane_t_ParamLimits

0x94ac,	// (0x000302a0) slider_set_pane_ParamLimits

0x5556,	// (0x0002c34a) control_pane_g5_ParamLimits

0x5556,	// (0x0002c34a) control_pane_g5

0xec58,	// (0x00035a4c) slider_set_pane_g1_ParamLimits

0x5907,	// (0x0002c6fb) slider_set_pane_g2_ParamLimits

0xee37,	// (0x00035c2b) slider_set_pane_g3_ParamLimits

0xee4b,	// (0x00035c3f) slider_set_pane_g4_ParamLimits

0xee63,	// (0x00035c57) slider_set_pane_g5_ParamLimits

0xee37,	// (0x00035c2b) slider_set_pane_g6_ParamLimits

0xaeb5,	// (0x00031ca9) slider_set_pane_g7_ParamLimits

0xf996,	// (0x0003678a) slider_set_pane_g_ParamLimits

0x9458,	// (0x0003024c) navi_icon_text_pane_ParamLimits

0xa735,	// (0x00031529) aid_fill_nsta_2_ParamLimits

0xa763,	// (0x00031557) aid_touch_tab_arrow_left_ParamLimits

0xa777,	// (0x0003156b) aid_touch_tab_arrow_right_ParamLimits

0xa813,	// (0x00031607) clock_nsta_pane_ParamLimits

0xe809,	// (0x000355fd) navi_icon_pane_g1_ParamLimits

0xe815,	// (0x00035609) navi_text_pane_t1_ParamLimits

0x0990,	// (0x00027784) navi_icon_text_pane_g1_ParamLimits

0x099c,	// (0x00027790) navi_icon_text_pane_t1_ParamLimits

0xb7f0,	// (0x000325e4) list_single_hc_apps_pane_g1_ParamLimits

0xb809,	// (0x000325fd) list_single_hc_apps_pane_g2_ParamLimits

0xfcf6,	// (0x00036aea) list_single_hc_apps_pane_g_ParamLimits

0xb822,	// (0x00032616) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x90a7,	// (0x0002fe9b) list_single_hc_apps_pane_t1_ParamLimits

0x9290,	// (0x00030084) popup_toolbar2_fixed_window_ParamLimits

0x9290,	// (0x00030084) popup_toolbar2_fixed_window

0xa6c0,	// (0x000314b4) popup_toolbar2_float_window

0x90f5,	// (0x0002fee9) bg_popup_sub_pane_cp27

0x2c7e,	// (0x00029a72) grid_toolbar2_float_pane

0x90f5,	// (0x0002fee9) bg_popup_sub_pane_cp26

0x2c7e,	// (0x00029a72) grid_toolbar2_fixed_pane

0xb83e,	// (0x00032632) cell_toolbar2_fixed_pane_ParamLimits

0xb83e,	// (0x00032632) cell_toolbar2_fixed_pane

0xb859,	// (0x0003264d) cell_toolbar2_fixed_pane_g1

0x2c86,	// (0x00029a7a) toolbar2_fixed_button_pane

0xda43,	// (0x00034837) toolbar2_fixed_button_pane_g1

0xda4b,	// (0x0003483f) toolbar2_fixed_button_pane_g2

0xda53,	// (0x00034847) toolbar2_fixed_button_pane_g3

0xda5b,	// (0x0003484f) toolbar2_fixed_button_pane_g4

0xda63,	// (0x00034857) toolbar2_fixed_button_pane_g5

0xda6b,	// (0x0003485f) toolbar2_fixed_button_pane_g6

0xda73,	// (0x00034867) toolbar2_fixed_button_pane_g7

0xda7b,	// (0x0003486f) toolbar2_fixed_button_pane_g8

0xda83,	// (0x00034877) toolbar2_fixed_button_pane_g9

0x0008,

0xf898,	// (0x0003668c) toolbar2_fixed_button_pane_g

0x2c8e,	// (0x00029a82) cell_toolbar2_float_pane_ParamLimits

0x2c8e,	// (0x00029a82) cell_toolbar2_float_pane

0x2c9f,	// (0x00029a93) cell_toolbar2_float_pane_g1

0x2c86,	// (0x00029a7a) toolbar2_fixed_button_pane_cp

0xb3df,	// (0x000321d3) fep_vkb_accented_list_pane_ParamLimits

0xb3df,	// (0x000321d3) fep_vkb_accented_list_pane

0x5cf1,	// (0x0002cae5) bg_popup_fep_shadow_pane_g9

0xd535,	// (0x00034329) bg_popup_fep_shadow_pane_cp3

0xccb8,	// (0x00033aac) list_accented_list_pane

0x2ca8,	// (0x00029a9c) list_single_accented_list_pane_ParamLimits

0x2ca8,	// (0x00029a9c) list_single_accented_list_pane

0xd535,	// (0x00034329) list_highlight_pane_cp10

0x2cb9,	// (0x00029aad) list_single_accented_list_pane_t1

0xa602,	// (0x000313f6) popup_slider_window_ParamLimits

0xa602,	// (0x000313f6) popup_slider_window

0x2ae9,	// (0x000298dd) aid_indentation_list_msg

0xb938,	// (0x0003272c) bg_popup_window_pane_cp19

0x3119,	// (0x00029f0d) popup_slider_window_g1

0x3135,	// (0x00029f29) popup_slider_window_g2

0x3151,	// (0x00029f45) popup_slider_window_g3

0x0005,

0xfcfb,	// (0x00036aef) popup_slider_window_g

0x316d,	// (0x00029f61) popup_slider_window_t1

0x31b1,	// (0x00029fa5) small_volume_slider_vertical_pane

0x0d31,	// (0x00027b25) small_volume_slider_vertical_pane_g1

0x0d31,	// (0x00027b25) small_volume_slider_vertical_pane_g2

0x31cd,	// (0x00029fc1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0d,	// (0x00036b01) small_volume_slider_vertical_pane_g

0x9192,	// (0x0002ff86) area_side_right_pane_ParamLimits

0x9192,	// (0x0002ff86) area_side_right_pane

0xb9f0,	// (0x000327e4) aid_size_side_button_ParamLimits

0xb9f0,	// (0x000327e4) aid_size_side_button

0xba09,	// (0x000327fd) grid_sctrl_middle_pane_ParamLimits

0xba09,	// (0x000327fd) grid_sctrl_middle_pane

0x62a4,	// (0x0002d098) sctrl_sk_bottom_pane

0x62b5,	// (0x0002d0a9) sctrl_sk_top_pane

0x62c7,	// (0x0002d0bb) aid_touch_sctrl_top

0x97ad,	// (0x000305a1) bg_sctrl_sk_pane_ParamLimits

0x97ad,	// (0x000305a1) bg_sctrl_sk_pane

0x62d4,	// (0x0002d0c8) sctrl_sk_top_pane_g1

0x62e1,	// (0x0002d0d5) sctrl_sk_top_pane_t1

0x62c7,	// (0x0002d0bb) aid_touch_sctrl_bottom

0x97ad,	// (0x000305a1) bg_sctrl_sk_pane_cp_ParamLimits

0x97ad,	// (0x000305a1) bg_sctrl_sk_pane_cp

0x62fc,	// (0x0002d0f0) sctrl_sk_bottom_pane_g1

0x62e1,	// (0x0002d0d5) sctrl_sk_bottom_pane_t1

0xba1f,	// (0x00032813) cell_sctrl_middle_pane_ParamLimits

0xba1f,	// (0x00032813) cell_sctrl_middle_pane

0xba30,	// (0x00032824) aid_touch_sctrl_middle_ParamLimits

0xba30,	// (0x00032824) aid_touch_sctrl_middle

0xba3d,	// (0x00032831) bg_sctrl_middle_pane_ParamLimits

0xba3d,	// (0x00032831) bg_sctrl_middle_pane

0x31e8,	// (0x00029fdc) cell_sctrl_middle_pane_g1_ParamLimits

0x31e8,	// (0x00029fdc) cell_sctrl_middle_pane_g1

0xba4b,	// (0x0003283f) cell_sctrl_middle_pane_g2_ParamLimits

0xba4b,	// (0x0003283f) cell_sctrl_middle_pane_g2

0x0001,

0xfd19,	// (0x00036b0d) cell_sctrl_middle_pane_g_ParamLimits

0xfd19,	// (0x00036b0d) cell_sctrl_middle_pane_g

0xda43,	// (0x00034837) bg_sctrl_middle_pane_g1

0xda4b,	// (0x0003483f) bg_sctrl_middle_pane_g2

0xda53,	// (0x00034847) bg_sctrl_middle_pane_g3

0xda5b,	// (0x0003484f) bg_sctrl_middle_pane_g4

0xda63,	// (0x00034857) bg_sctrl_middle_pane_g5

0xda6b,	// (0x0003485f) bg_sctrl_middle_pane_g6

0xda73,	// (0x00034867) bg_sctrl_middle_pane_g7

0xda7b,	// (0x0003486f) bg_sctrl_middle_pane_g8

0x0007,

0xfd1e,	// (0x00036b12) bg_sctrl_middle_pane_g

0xda83,	// (0x00034877) bg_sctrl_middle_pane_g8_copy1

0xda43,	// (0x00034837) bg_sctrl_sk_pane_g1

0xda4b,	// (0x0003483f) bg_sctrl_sk_pane_g2

0xda53,	// (0x00034847) bg_sctrl_sk_pane_g3

0x0008,

0xf898,	// (0x0003668c) bg_sctrl_sk_pane_g

0x9c03,	// (0x000309f7) aid_size_touch_scroll_bar

0xda5b,	// (0x0003484f) bg_sctrl_sk_pane_g4

0xda63,	// (0x00034857) bg_sctrl_sk_pane_g5

0xda6b,	// (0x0003485f) bg_sctrl_sk_pane_g6

0xda73,	// (0x00034867) bg_sctrl_sk_pane_g7

0xda7b,	// (0x0003486f) bg_sctrl_sk_pane_g8

0xda83,	// (0x00034877) bg_sctrl_sk_pane_g9

0xd7b9,	// (0x000345ad) popup_fep_china_hwr2_fs_candidate_window

0xa1fd,	// (0x00030ff1) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa1fd,	// (0x00030ff1) popup_fep_china_hwr2_fs_control_window

0x0f79,	// (0x00027d6d) sctrl_sk_top_pane_g2

0x0001,

0xfd14,	// (0x00036b08) sctrl_sk_top_pane_g

0xba58,	// (0x0003284c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xba58,	// (0x0003284c) aid_fep_china_hwr2_fs_cell

0xba6c,	// (0x00032860) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xba6c,	// (0x00032860) bg_popup_fep_shadow_pane_cp4

0xba83,	// (0x00032877) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xba83,	// (0x00032877) bg_popup_fep_shadow_pane_cp5

0xba95,	// (0x00032889) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xba95,	// (0x00032889) popup_fep_china_hwr2_fs_control_bar_grid

0xbaa9,	// (0x0003289d) popup_fep_china_hwr2_fs_control_funtion_grid

0x31d6,	// (0x00029fca) aid_fep_china_hwr2_fs_candi_cell

0x90f5,	// (0x0002fee9) bg_popup_fep_shadow_pane_cp6

0x31e0,	// (0x00029fd4) popup_fep_china_hwr2_fs_candidate_grid

0xbab1,	// (0x000328a5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xbab1,	// (0x000328a5) cell_fep_china_hwr2_fs_funtion_grid

0x0d31,	// (0x00027b25) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x31e8,	// (0x00029fdc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x31e8,	// (0x00029fdc) cell_fep_china_hwr2_fs_funtion_grid_g1

0x31f6,	// (0x00029fea) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x31f6,	// (0x00029fea) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2f,	// (0x00036b23) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2f,	// (0x00036b23) cell_fep_china_hwr2_fs_funtion_grid_g

0xbac9,	// (0x000328bd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xbac9,	// (0x000328bd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xbade,	// (0x000328d2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xbade,	// (0x000328d2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd34,	// (0x00036b28) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd34,	// (0x00036b28) cell_fep_china_hwr2_fs_funtion_grid_t

0x320c,	// (0x0002a000) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x3214,	// (0x0002a008) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x321c,	// (0x0002a010) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd39,	// (0x00036b2d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x3224,	// (0x0002a018) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x3224,	// (0x0002a018) cell_fep_china_hwr2_fs_candidate_grid

0x323d,	// (0x0002a031) popup_fep_china_hwr2_fs_candidate_grid_g20

0x3245,	// (0x0002a039) popup_fep_china_hwr2_fs_candidate_grid_g21

0x0d31,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g1

0x0d31,	// (0x00027b25) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x00036954) cell_fep_china_hwr2_fs_candidate_grid_g

0x324d,	// (0x0002a041) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd8a8,	// (0x0003469c) clock_nsta_pane_cp_24_ParamLimits

0xd8a8,	// (0x0003469c) clock_nsta_pane_cp_24

0xd905,	// (0x000346f9) indicator_nsta_pane_cp_24_ParamLimits

0xd905,	// (0x000346f9) indicator_nsta_pane_cp_24

0xe714,	// (0x00035508) heading_pane_g1

0x0001,

0xf8fd,	// (0x000366f1) heading_pane_g

0xb10e,	// (0x00031f02) grid_sct_catagory_button_pane

0xdf0f,	// (0x00034d03) scroll_pane_cp5_ParamLimits

0x09de,	// (0x000277d2) button_value_adjust_pane_cp5_ParamLimits

0x09de,	// (0x000277d2) button_value_adjust_pane_cp5

0x0abb,	// (0x000278af) form2_midp_time_pane_ParamLimits

0x325b,	// (0x0002a04f) cell_sct_catagory_button_pane_ParamLimits

0x325b,	// (0x0002a04f) cell_sct_catagory_button_pane

0x0cf6,	// (0x00027aea) bg_button_pane_cp01_ParamLimits

0x0cf6,	// (0x00027aea) bg_button_pane_cp01

0x0d31,	// (0x00027b25) cell_sct_catagory_button_pane_g1

0xa671,	// (0x00031465) popup_tb_extension_window

0xbafa,	// (0x000328ee) aid_size_cell_ext_ParamLimits

0xbafa,	// (0x000328ee) aid_size_cell_ext

0x9ae1,	// (0x000308d5) bg_tb_trans_pane_cp1_ParamLimits

0x9ae1,	// (0x000308d5) bg_tb_trans_pane_cp1

0xbb20,	// (0x00032914) grid_tb_ext_pane_ParamLimits

0xbb20,	// (0x00032914) grid_tb_ext_pane

0xbb56,	// (0x0003294a) cell_tb_ext_pane_ParamLimits

0xbb56,	// (0x0003294a) cell_tb_ext_pane

0xbb7a,	// (0x0003296e) cell_tb_ext_pane_g1_ParamLimits

0xbb7a,	// (0x0003296e) cell_tb_ext_pane_g1

0x326d,	// (0x0002a061) cell_tb_ext_pane_t1

0x97ad,	// (0x000305a1) list_highlight_pane_cp11_ParamLimits

0x97ad,	// (0x000305a1) list_highlight_pane_cp11

0x4f12,	// (0x0002bd06) popup_uni_indicator_window_ParamLimits

0x4f12,	// (0x0002bd06) popup_uni_indicator_window

0xcb8e,	// (0x00033982) bg_popup_sub_pane_cp14

0x3288,	// (0x0002a07c) list_uniindi_pane

0x3294,	// (0x0002a088) uniindi_top_pane

0x97ad,	// (0x000305a1) bg_uniindi_top_pane

0x32b3,	// (0x0002a0a7) uniindi_top_pane_g1

0x32c9,	// (0x0002a0bd) uniindi_top_pane_g2

0x0003,

0xfd40,	// (0x00036b34) uniindi_top_pane_g

0x32f3,	// (0x0002a0e7) uniindi_top_pane_t1

0x331d,	// (0x0002a111) list_single_uniindi_pane_ParamLimits

0x331d,	// (0x0002a111) list_single_uniindi_pane

0x0d31,	// (0x00027b25) bg_uniindi_top_pane_g1

0x332f,	// (0x0002a123) list_single_uniindi_pane_g1

0x3342,	// (0x0002a136) list_single_uniindi_pane_t1

0x90f5,	// (0x0002fee9) control_bg_pane

0x3367,	// (0x0002a15b) bg_sctrl_sk_pane_cp1

0x3370,	// (0x0002a164) bg_sctrl_sk_pane_cp2

0x3379,	// (0x0002a16d) control_bg_pane_g1

0x3382,	// (0x0002a176) control_bg_pane_g2

0x0001,

0xfd49,	// (0x00036b3d) control_bg_pane_g

0xf4f6,	// (0x000362ea) cell_indicator_nsta_pane_g1_ParamLimits

0xb219,	// (0x0003200d) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x000368c5) cell_indicator_nsta_pane_g_ParamLimits

0x4a7a,	// (0x0002b86e) form2_midp_time_pane_t1_ParamLimits

0x0d8c,	// (0x00027b80) main_idle_act4_pane_ParamLimits

0x0d8c,	// (0x00027b80) main_idle_act4_pane

0xa671,	// (0x00031465) popup_tb_extension_window_ParamLimits

0xbb40,	// (0x00032934) tb_ext_find_pane_ParamLimits

0xbb40,	// (0x00032934) tb_ext_find_pane

0x338b,	// (0x0002a17f) ai_gene_pane_1_cp1

0xd5c9,	// (0x000343bd) ai_gene_pane_2_cp1

0x3393,	// (0x0002a187) list_single_idle_plugin_calendar_pane

0x339c,	// (0x0002a190) list_single_idle_plugin_notification_pane

0x33a5,	// (0x0002a199) list_single_idle_plugin_player_pane

0xbb97,	// (0x0003298b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xbb97,	// (0x0003298b) list_single_idle_plugin_shortcut_pane

0xbbbf,	// (0x000329b3) main_idle_act4_pane_t1

0xbbd5,	// (0x000329c9) main_idle_act4_pane_t2

0x0001,

0xfd4e,	// (0x00036b42) main_idle_act4_pane_t

0xbbeb,	// (0x000329df) middle_sk_idle_act4_pane_ParamLimits

0xbbeb,	// (0x000329df) middle_sk_idle_act4_pane

0xbc07,	// (0x000329fb) popup_clock_digital_analogue_window_cp2

0xbc2d,	// (0x00032a21) shortcut_wheel_idle_act4_pane_ParamLimits

0xbc2d,	// (0x00032a21) shortcut_wheel_idle_act4_pane

0x0d31,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g1

0x0d31,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g2

0x0d31,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g3

0x0d31,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g4

0x0d31,	// (0x00027b25) shortcut_wheel_idle_act4_pane_g5

0x33ae,	// (0x0002a1a2) shortcut_wheel_idle_act4_pane_g6

0x33b6,	// (0x0002a1aa) shortcut_wheel_idle_act4_pane_g7

0x33be,	// (0x0002a1b2) shortcut_wheel_idle_act4_pane_g8

0x33c6,	// (0x0002a1ba) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd53,	// (0x00036b47) shortcut_wheel_idle_act4_pane_g

0x2d2f,	// (0x00029b23) middle_sk_idle_act4_pane_g1_ParamLimits

0x2d2f,	// (0x00029b23) middle_sk_idle_act4_pane_g1

0xbca8,	// (0x00032a9c) middle_sk_idle_act4_pane_g2_ParamLimits

0xbca8,	// (0x00032a9c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd76,	// (0x00036b6a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd76,	// (0x00036b6a) middle_sk_idle_act4_pane_g

0xbcc0,	// (0x00032ab4) middle_sk_idle_act4_pane_t1_ParamLimits

0xbcc0,	// (0x00032ab4) middle_sk_idle_act4_pane_t1

0xbcef,	// (0x00032ae3) grid_ai_shortcut_pane_ParamLimits

0xbcef,	// (0x00032ae3) grid_ai_shortcut_pane

0xbd0c,	// (0x00032b00) list_highlight_pane_cp16_ParamLimits

0xbd0c,	// (0x00032b00) list_highlight_pane_cp16

0xbd19,	// (0x00032b0d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xbd19,	// (0x00032b0d) list_single_idle_plugin_shortcut_pane_g1

0xbd25,	// (0x00032b19) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xbd25,	// (0x00032b19) list_single_idle_plugin_shortcut_pane_g2

0xbd41,	// (0x00032b35) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xbd41,	// (0x00032b35) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7b,	// (0x00036b6f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7b,	// (0x00036b6f) list_single_idle_plugin_shortcut_pane_g

0xbd56,	// (0x00032b4a) cell_ai_shortcut_pane_ParamLimits

0xbd56,	// (0x00032b4a) cell_ai_shortcut_pane

0xbd6c,	// (0x00032b60) cell_ai_shortcut_pane_g1_ParamLimits

0xbd6c,	// (0x00032b60) cell_ai_shortcut_pane_g1

0x338b,	// (0x0002a17f) ai_gene_pane_1_cp2

0x33ce,	// (0x0002a1c2) ai_gene_pane_2_cp2

0x33d6,	// (0x0002a1ca) list_highlight_pane_cp15

0x33df,	// (0x0002a1d3) list_single_idle_plugin_calendar_pane_g1

0x33d6,	// (0x0002a1ca) list_highlight_pane_cp17

0x33e7,	// (0x0002a1db) list_single_idle_plugin_calendar_pane_g1_copy1

0x33ef,	// (0x0002a1e3) list_single_idle_plugin_player_pane_g1

0xef76,	// (0x00035d6a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd82,	// (0x00036b76) list_single_idle_plugin_player_pane_g

0x33f7,	// (0x0002a1eb) list_single_idle_plugin_player_pane_t1

0x3405,	// (0x0002a1f9) list_single_idle_plugin_player_pane_t2

0x3413,	// (0x0002a207) list_single_idle_plugin_player_pane_t3

0x3421,	// (0x0002a215) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd87,	// (0x00036b7b) list_single_idle_plugin_player_pane_t

0x342f,	// (0x0002a223) wait_bar_pane_cp15

0x3437,	// (0x0002a22b) grid_ai_notification_pane

0xef76,	// (0x00035d6a) list_single_idle_plugin_notification_pane_g1

0xbd8e,	// (0x00032b82) cell_ai_notification_pane_ParamLimits

0xbd8e,	// (0x00032b82) cell_ai_notification_pane

0x3440,	// (0x0002a234) cell_ai_notification_pane_g1

0x3448,	// (0x0002a23c) cell_ai_notification_pane_t1

0xbd9b,	// (0x00032b8f) tb_ext_find_button_pane

0xbda3,	// (0x00032b97) tb_ext_find_pane_g1

0xbdab,	// (0x00032b9f) tb_ext_find_pane_t1

0xd0a8,	// (0x00033e9c) tb_ext_find_button_pane_g1

0x3456,	// (0x0002a24a) tb_ext_find_button_pane_g2

0x0001,

0xfd90,	// (0x00036b84) tb_ext_find_button_pane_g

0xbbbf,	// (0x000329b3) main_idle_act4_pane_t1_ParamLimits

0xbbd5,	// (0x000329c9) main_idle_act4_pane_t2_ParamLimits

0xfd4e,	// (0x00036b42) main_idle_act4_pane_t_ParamLimits

0xbc07,	// (0x000329fb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xbc1d,	// (0x00032a11) sat_plugin_idle_act4_pane_ParamLimits

0xbc1d,	// (0x00032a11) sat_plugin_idle_act4_pane

0xbdb9,	// (0x00032bad) sat_plugin_idle_act4_pane_t1_ParamLimits

0xbdb9,	// (0x00032bad) sat_plugin_idle_act4_pane_t1

0xbdd1,	// (0x00032bc5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xbdd1,	// (0x00032bc5) sat_plugin_idle_act4_pane_t2

0xbde9,	// (0x00032bdd) sat_plugin_idle_act4_pane_t3_ParamLimits

0xbde9,	// (0x00032bdd) sat_plugin_idle_act4_pane_t3

0xbe01,	// (0x00032bf5) sat_plugin_idle_act4_pane_t4_ParamLimits

0xbe01,	// (0x00032bf5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd95,	// (0x00036b89) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd95,	// (0x00036b89) sat_plugin_idle_act4_pane_t

0x4e73,	// (0x0002bc67) popup_battery_window_ParamLimits

0x4e73,	// (0x0002bc67) popup_battery_window

0x97ad,	// (0x000305a1) bg_popup_sub_pane_cp25_ParamLimits

0x97ad,	// (0x000305a1) bg_popup_sub_pane_cp25

0x345f,	// (0x0002a253) popup_battery_window_g1_ParamLimits

0x345f,	// (0x0002a253) popup_battery_window_g1

0x346b,	// (0x0002a25f) popup_battery_window_t1_ParamLimits

0x346b,	// (0x0002a25f) popup_battery_window_t1

0x347d,	// (0x0002a271) popup_battery_window_t2_ParamLimits

0x347d,	// (0x0002a271) popup_battery_window_t2

0x0001,

0xfd9e,	// (0x00036b92) popup_battery_window_t_ParamLimits

0xfd9e,	// (0x00036b92) popup_battery_window_t

0x9f68,	// (0x00030d5c) midp_canvas_pane_ParamLimits

0x9fbd,	// (0x00030db1) midp_keypad_pane_ParamLimits

0x9fbd,	// (0x00030db1) midp_keypad_pane

0xcd0a,	// (0x00033afe) main_midp_pane_ParamLimits

0xf560,	// (0x00036354) signal_pane_g2_cp_ParamLimits

0xbe19,	// (0x00032c0d) aid_size_cell_midp_keypad_ParamLimits

0xbe19,	// (0x00032c0d) aid_size_cell_midp_keypad

0xbe37,	// (0x00032c2b) midp_keyp_game_grid_pane_ParamLimits

0xbe37,	// (0x00032c2b) midp_keyp_game_grid_pane

0xbe56,	// (0x00032c4a) midp_keyp_rocker_pane_ParamLimits

0xbe56,	// (0x00032c4a) midp_keyp_rocker_pane

0xbe97,	// (0x00032c8b) midp_keyp_sk_left_pane_ParamLimits

0xbe97,	// (0x00032c8b) midp_keyp_sk_left_pane

0xbee9,	// (0x00032cdd) midp_keyp_sk_right_pane_ParamLimits

0xbee9,	// (0x00032cdd) midp_keyp_sk_right_pane

0x90f5,	// (0x0002fee9) bg_button_pane_cp03

0xbf35,	// (0x00032d29) midp_keyp_sk_left_pane_g1

0x90f5,	// (0x0002fee9) bg_button_pane_cp04

0xbf35,	// (0x00032d29) midp_keyp_sk_right_pane_g1

0x0d31,	// (0x00027b25) midp_keyp_rocker_pane_g1

0xbf3e,	// (0x00032d32) keyp_game_cell_pane_ParamLimits

0xbf3e,	// (0x00032d32) keyp_game_cell_pane

0x90f5,	// (0x0002fee9) bg_button_pane_cp02

0xbf60,	// (0x00032d54) keyp_game_cell_pane_g1

0x9256,	// (0x0003004a) popup_fep_vkb2_window_ParamLimits

0x9256,	// (0x0003004a) popup_fep_vkb2_window

0xbf69,	// (0x00032d5d) aid_size_cell_vkb2_ParamLimits

0xbf69,	// (0x00032d5d) aid_size_cell_vkb2

0xbf9f,	// (0x00032d93) popup_fep_vkb2_window_g1_ParamLimits

0xbf9f,	// (0x00032d93) popup_fep_vkb2_window_g1

0xbfef,	// (0x00032de3) vkb2_area_bottom_pane_ParamLimits

0xbfef,	// (0x00032de3) vkb2_area_bottom_pane

0xc02d,	// (0x00032e21) vkb2_area_keypad_pane_ParamLimits

0xc02d,	// (0x00032e21) vkb2_area_keypad_pane

0xc06b,	// (0x00032e5f) vkb2_area_top_pane_ParamLimits

0xc06b,	// (0x00032e5f) vkb2_area_top_pane

0xc0e7,	// (0x00032edb) vkb2_top_entry_pane_ParamLimits

0xc0e7,	// (0x00032edb) vkb2_top_entry_pane

0xc114,	// (0x00032f08) vkb2_top_grid_left_pane_ParamLimits

0xc114,	// (0x00032f08) vkb2_top_grid_left_pane

0xc134,	// (0x00032f28) vkb2_top_grid_right_pane_ParamLimits

0xc134,	// (0x00032f28) vkb2_top_grid_right_pane

0x699e,	// (0x0002d792) vkb2_cell_keypad_pane_ParamLimits

0x699e,	// (0x0002d792) vkb2_cell_keypad_pane

0xc17a,	// (0x00032f6e) vkb2_area_bottom_grid_pane_ParamLimits

0xc17a,	// (0x00032f6e) vkb2_area_bottom_grid_pane

0xc1a0,	// (0x00032f94) vkb2_area_bottom_pane_g1_ParamLimits

0xc1a0,	// (0x00032f94) vkb2_area_bottom_pane_g1

0xc1c6,	// (0x00032fba) vkb2_area_bottom_pane_g2_ParamLimits

0xc1c6,	// (0x00032fba) vkb2_area_bottom_pane_g2

0xc1f7,	// (0x00032feb) vkb2_area_bottom_pane_g3_ParamLimits

0xc1f7,	// (0x00032feb) vkb2_area_bottom_pane_g3

0x0002,

0xfda3,	// (0x00036b97) vkb2_area_bottom_pane_g_ParamLimits

0xfda3,	// (0x00036b97) vkb2_area_bottom_pane_g

0x6b16,	// (0x0002d90a) vkb2_top_cell_left_pane_ParamLimits

0x6b16,	// (0x0002d90a) vkb2_top_cell_left_pane

0xc24d,	// (0x00033041) vkb2_top_entry_pane_g1_ParamLimits

0xc24d,	// (0x00033041) vkb2_top_entry_pane_g1

0xc25b,	// (0x0003304f) vkb2_top_entry_pane_t1_ParamLimits

0xc25b,	// (0x0003304f) vkb2_top_entry_pane_t1

0x34a2,	// (0x0002a296) vkb2_top_entry_pane_t2_ParamLimits

0x34a2,	// (0x0002a296) vkb2_top_entry_pane_t2

0x34d4,	// (0x0002a2c8) vkb2_top_entry_pane_t3_ParamLimits

0x34d4,	// (0x0002a2c8) vkb2_top_entry_pane_t3

0x0002,

0xfdaa,	// (0x00036b9e) vkb2_top_entry_pane_t_ParamLimits

0xfdaa,	// (0x00036b9e) vkb2_top_entry_pane_t

0xc294,	// (0x00033088) vkb2_top_grid_right_pane_g1_ParamLimits

0xc294,	// (0x00033088) vkb2_top_grid_right_pane_g1

0x6bb9,	// (0x0002d9ad) vkb2_top_grid_right_pane_g2_ParamLimits

0x6bb9,	// (0x0002d9ad) vkb2_top_grid_right_pane_g2

0x6bd1,	// (0x0002d9c5) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bd1,	// (0x0002d9c5) vkb2_top_grid_right_pane_g3

0xc2aa,	// (0x0003309e) vkb2_top_grid_right_pane_g4_ParamLimits

0xc2aa,	// (0x0003309e) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb1,	// (0x00036ba5) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb1,	// (0x00036ba5) vkb2_top_grid_right_pane_g

0x6bff,	// (0x0002d9f3) vkb2_top_cell_left_pane_g1

0x6c16,	// (0x0002da0a) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c16,	// (0x0002da0a) vkb2_cell_keypad_pane_g1

0x34ea,	// (0x0002a2de) vkb2_cell_keypad_pane_t1_ParamLimits

0x34ea,	// (0x0002a2de) vkb2_cell_keypad_pane_t1

0x6c24,	// (0x0002da18) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c24,	// (0x0002da18) vkb2_cell_bottom_grid_pane

0x6c5d,	// (0x0002da51) vkb2_cell_bottom_grid_pane_g1

0xbc4c,	// (0x00032a40) aid_call2_pane_cp02

0xbc54,	// (0x00032a48) aid_call_pane_cp02

0xbc5c,	// (0x00032a50) clock_digital_number_pane_cp10

0xbc64,	// (0x00032a58) clock_digital_number_pane_cp11

0xbc6c,	// (0x00032a60) clock_digital_number_pane_cp12

0xbc74,	// (0x00032a68) clock_digital_number_pane_cp13

0xbc7c,	// (0x00032a70) clock_digital_separator_pane_cp10

0xd0a8,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g1

0xd0a8,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g2

0xbc84,	// (0x00032a78) popup_clock_digital_analogue_window_cp2_g3

0xd0a8,	// (0x00033e9c) popup_clock_digital_analogue_window_cp2_g4

0xbc84,	// (0x00032a78) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd66,	// (0x00036b5a) popup_clock_digital_analogue_window_cp2_g

0xbc8c,	// (0x00032a80) popup_clock_digital_analogue_window_cp2_t1

0xbc9a,	// (0x00032a8e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd71,	// (0x00036b65) popup_clock_digital_analogue_window_cp2_t

0x0d31,	// (0x00027b25) clock_digital_number_pane_cp10_g1

0x0d31,	// (0x00027b25) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x00036954) clock_digital_number_pane_cp10_g

0x0d31,	// (0x00027b25) clock_digital_separator_pane_cp10_g1

0x0d31,	// (0x00027b25) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x00036954) clock_digital_separator_pane_cp10_g

0x32d5,	// (0x0002a0c9) uniindi_top_pane_g3

0x32e6,	// (0x0002a0da) uniindi_top_pane_g4

0x6a09,	// (0x0002d7fd) vkb2_row_keypad_pane_ParamLimits

0x6a09,	// (0x0002d7fd) vkb2_row_keypad_pane

0x6c79,	// (0x0002da6d) vkb2_cell_t_keypad_pane_ParamLimits

0x6c79,	// (0x0002da6d) vkb2_cell_t_keypad_pane

0x6c86,	// (0x0002da7a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6c86,	// (0x0002da7a) vkb2_cell_t_keypad_pane_cp08

0x6c96,	// (0x0002da8a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6c96,	// (0x0002da8a) vkb2_cell_t_keypad_pane_cp09

0x6ca7,	// (0x0002da9b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6ca7,	// (0x0002da9b) vkb2_cell_t_keypad_pane_cp01

0x6cb7,	// (0x0002daab) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6cb7,	// (0x0002daab) vkb2_cell_t_keypad_pane_cp02

0x6cc7,	// (0x0002dabb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cc7,	// (0x0002dabb) vkb2_cell_t_keypad_pane_cp03

0x6cd7,	// (0x0002dacb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6cd7,	// (0x0002dacb) vkb2_cell_t_keypad_pane_cp04

0x6ce7,	// (0x0002dadb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6ce7,	// (0x0002dadb) vkb2_cell_t_keypad_pane_cp05

0x6cf7,	// (0x0002daeb) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6cf7,	// (0x0002daeb) vkb2_cell_t_keypad_pane_cp06

0x6d07,	// (0x0002dafb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d07,	// (0x0002dafb) vkb2_cell_t_keypad_pane_cp07

0x6d17,	// (0x0002db0b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d17,	// (0x0002db0b) vkb2_cell_t_keypad_pane_cp10

0x0f79,	// (0x00027d6d) vkb2_cell_t_keypad_pane_g1

0x3501,	// (0x0002a2f5) vkb2_cell_t_keypad_pane_t1

0x90f5,	// (0x0002fee9) popup_grid_graphic2_window

0xc2c0,	// (0x000330b4) aid_size_cell_graphic2_ParamLimits

0xc2c0,	// (0x000330b4) aid_size_cell_graphic2

0xe120,	// (0x00034f14) bg_popup_window_pane_cp21_ParamLimits

0xe120,	// (0x00034f14) bg_popup_window_pane_cp21

0xc2f2,	// (0x000330e6) graphic2_pages_pane_ParamLimits

0xc2f2,	// (0x000330e6) graphic2_pages_pane

0xc33b,	// (0x0003312f) grid_graphic2_control_pane_ParamLimits

0xc33b,	// (0x0003312f) grid_graphic2_control_pane

0xc369,	// (0x0003315d) grid_graphic2_pane_ParamLimits

0xc369,	// (0x0003315d) grid_graphic2_pane

0xc3c8,	// (0x000331bc) cell_graphic2_pane

0x90f5,	// (0x0002fee9) main_comp_mode_pane

0x2b57,	// (0x0002994b) list_ai3_gene_pane_ParamLimits

0xb938,	// (0x0003272c) bg_popup_window_pane_cp19_ParamLimits

0x30c1,	// (0x00029eb5) bg_touch_area_indi_pane_ParamLimits

0x30c1,	// (0x00029eb5) bg_touch_area_indi_pane

0x30d7,	// (0x00029ecb) bg_touch_area_indi_pane_cp01_ParamLimits

0x30d7,	// (0x00029ecb) bg_touch_area_indi_pane_cp01

0x30ed,	// (0x00029ee1) bg_touch_area_indi_pane_cp02_ParamLimits

0x30ed,	// (0x00029ee1) bg_touch_area_indi_pane_cp02

0x3103,	// (0x00029ef7) bg_touch_area_indi_pane_cp03_ParamLimits

0x3103,	// (0x00029ef7) bg_touch_area_indi_pane_cp03

0x3119,	// (0x00029f0d) popup_slider_window_g1_ParamLimits

0x3135,	// (0x00029f29) popup_slider_window_g2_ParamLimits

0x3151,	// (0x00029f45) popup_slider_window_g3_ParamLimits

0xfcfb,	// (0x00036aef) popup_slider_window_g_ParamLimits

0x316d,	// (0x00029f61) popup_slider_window_t1_ParamLimits

0x31b1,	// (0x00029fa5) small_volume_slider_vertical_pane_ParamLimits

0xc3c8,	// (0x000331bc) cell_graphic2_pane_ParamLimits

0xc411,	// (0x00033205) bg_button_pane_cp10_ParamLimits

0xc411,	// (0x00033205) bg_button_pane_cp10

0xc422,	// (0x00033216) bg_button_pane_cp11_ParamLimits

0xc422,	// (0x00033216) bg_button_pane_cp11

0xc433,	// (0x00033227) graphic2_pages_pane_g1_ParamLimits

0xc433,	// (0x00033227) graphic2_pages_pane_g1

0xc44e,	// (0x00033242) graphic2_pages_pane_g2_ParamLimits

0xc44e,	// (0x00033242) graphic2_pages_pane_g2

0x0001,

0xfdbf,	// (0x00036bb3) graphic2_pages_pane_g_ParamLimits

0xfdbf,	// (0x00036bb3) graphic2_pages_pane_g

0xc466,	// (0x0003325a) graphic2_pages_pane_t1_ParamLimits

0xc466,	// (0x0003325a) graphic2_pages_pane_t1

0xc47e,	// (0x00033272) cell_graphic2_control_pane_ParamLimits

0xc47e,	// (0x00033272) cell_graphic2_control_pane

0xc498,	// (0x0003328c) cell_graphic2_pane_g1_ParamLimits

0xc498,	// (0x0003328c) cell_graphic2_pane_g1

0x304d,	// (0x00029e41) cell_graphic2_pane_g2_ParamLimits

0x304d,	// (0x00029e41) cell_graphic2_pane_g2

0xc4a5,	// (0x00033299) cell_graphic2_pane_g3_ParamLimits

0xc4a5,	// (0x00033299) cell_graphic2_pane_g3

0x305a,	// (0x00029e4e) cell_graphic2_pane_g4_ParamLimits

0x305a,	// (0x00029e4e) cell_graphic2_pane_g4

0xc4b2,	// (0x000332a6) cell_graphic2_pane_g5_ParamLimits

0xc4b2,	// (0x000332a6) cell_graphic2_pane_g5

0x0004,

0xfdc4,	// (0x00036bb8) cell_graphic2_pane_g_ParamLimits

0xfdc4,	// (0x00036bb8) cell_graphic2_pane_g

0xc4d2,	// (0x000332c6) cell_graphic2_pane_t1_ParamLimits

0xc4d2,	// (0x000332c6) cell_graphic2_pane_t1

0xe708,	// (0x000354fc) grid_highlight_pane_cp11_ParamLimits

0xe708,	// (0x000354fc) grid_highlight_pane_cp11

0xcb8e,	// (0x00033982) bg_button_pane_cp05

0xc4e9,	// (0x000332dd) cell_graphic2_control_pane_g1

0x0d31,	// (0x00027b25) bg_touch_area_indi_pane_g1

0x3513,	// (0x0002a307) aid_cmod_rocker_key_size

0x351d,	// (0x0002a311) aid_cmode_itu_key_size

0x3527,	// (0x0002a31b) main_cmode_video_pane

0x352f,	// (0x0002a323) main_comp_mode_itu_pane

0x3539,	// (0x0002a32d) main_comp_mode_rocker_pane

0x3541,	// (0x0002a335) cell_cmode_rocker_pane_ParamLimits

0x3541,	// (0x0002a335) cell_cmode_rocker_pane

0x3553,	// (0x0002a347) cell_cmode_itu_pane_ParamLimits

0x3553,	// (0x0002a347) cell_cmode_itu_pane

0xcb8e,	// (0x00033982) bg_button_pane_cp06_ParamLimits

0xcb8e,	// (0x00033982) bg_button_pane_cp06

0x0f79,	// (0x00027d6d) cell_cmode_rocker_pane_g1_ParamLimits

0x0f79,	// (0x00027d6d) cell_cmode_rocker_pane_g1

0x31e8,	// (0x00029fdc) cell_cmode_rocker_pane_g2_ParamLimits

0x31e8,	// (0x00029fdc) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00036bc3) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00036bc3) cell_cmode_rocker_pane_g

0x90f5,	// (0x0002fee9) bg_button_pane_cp07

0x3568,	// (0x0002a35c) cell_cmode_itu_pane_g1

0x3571,	// (0x0002a365) cell_cmode_itu_pane_t1

0x357f,	// (0x0002a373) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x00036bc8) cell_cmode_itu_pane_t

0x3357,	// (0x0002a14b) aid_touch_ctrl_left

0x335f,	// (0x0002a153) aid_touch_ctrl_right

0x90f5,	// (0x0002fee9) compa_mode_pane

0xc4f6,	// (0x000332ea) aid_cmod_rocker_key_size_cp

0xc500,	// (0x000332f4) aid_cmode_itu_key_size_cp

0x358d,	// (0x0002a381) compa_mode_pane_g1

0x3595,	// (0x0002a389) compa_mode_pane_g2

0x359d,	// (0x0002a391) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00036bcd) compa_mode_pane_g

0xc50a,	// (0x000332fe) main_comp_mode_itu_pane_cp

0xc514,	// (0x00033308) main_comp_mode_rocker_pane_cp

0xc51e,	// (0x00033312) cell_cmode_itu_pane_cp_ParamLimits

0xc51e,	// (0x00033312) cell_cmode_itu_pane_cp

0xc533,	// (0x00033327) cell_cmode_rocker_pane_cp_ParamLimits

0xc533,	// (0x00033327) cell_cmode_rocker_pane_cp

0xcb8e,	// (0x00033982) bg_button_pane_cp06_cp_ParamLimits

0xcb8e,	// (0x00033982) bg_button_pane_cp06_cp

0x0f79,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x0f79,	// (0x00027d6d) cell_cmode_rocker_pane_g1_cp

0x0d31,	// (0x00027b25) cell_cmode_rocker_pane_g2_cp

0x90f5,	// (0x0002fee9) bg_button_pane_cp07_cp

0xc545,	// (0x00033339) cell_cmode_itu_pane_g1_cp

0xc54e,	// (0x00033342) cell_cmode_itu_pane_t1_cp

0xc55c,	// (0x00033350) cell_cmode_itu_pane_t2_cp

0xb015,	// (0x00031e09) settings_code_pane_cp2

0x9458,	// (0x0003024c) bg_popup_window_pane_cp3_ParamLimits

0x9985,	// (0x00030779) heading_pane_cp3_ParamLimits

0x9991,	// (0x00030785) listscroll_popup_graphic_pane_ParamLimits

0x5ae7,	// (0x0002c8db) fep_hwr_aid_pane_ParamLimits

0x62c7,	// (0x0002d0bb) aid_touch_sctrl_top_ParamLimits

0x62d4,	// (0x0002d0c8) sctrl_sk_top_pane_g1_ParamLimits

0x0f79,	// (0x00027d6d) sctrl_sk_top_pane_g2_ParamLimits

0xfd14,	// (0x00036b08) sctrl_sk_top_pane_g_ParamLimits

0x62e1,	// (0x0002d0d5) sctrl_sk_top_pane_t1_ParamLimits

0x62c7,	// (0x0002d0bb) aid_touch_sctrl_bottom_ParamLimits

0x62e1,	// (0x0002d0d5) sctrl_sk_bottom_pane_t1_ParamLimits

0x32a1,	// (0x0002a095) aid_area_touch_clock

0xc0a9,	// (0x00032e9d) aid_vkb2_area_top_pane_cell_ParamLimits

0xc0a9,	// (0x00032e9d) aid_vkb2_area_top_pane_cell

0xc154,	// (0x00032f48) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc154,	// (0x00032f48) aid_vkb2_area_bottom_pane_cell

0x349a,	// (0x0002a28e) popup_char_count_window

0x35a5,	// (0x0002a399) popup_char_count_window_g1

0x35ae,	// (0x0002a3a2) popup_char_count_window_g2

0x35b7,	// (0x0002a3ab) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00036bd4) popup_char_count_window_g

0x35c0,	// (0x0002a3b4) popup_char_count_window_t1

0x67ee,	// (0x0002d5e2) popup_fep_char_preview_window_ParamLimits

0x67ee,	// (0x0002d5e2) popup_fep_char_preview_window

0xc0c9,	// (0x00032ebd) vkb2_top_candi_pane_ParamLimits

0xc0c9,	// (0x00032ebd) vkb2_top_candi_pane

0xc56a,	// (0x0003335e) cell_vkb2_top_candi_pane_ParamLimits

0xc56a,	// (0x0003335e) cell_vkb2_top_candi_pane

0xe120,	// (0x00034f14) bg_popup_fep_char_preview_window_ParamLimits

0xe120,	// (0x00034f14) bg_popup_fep_char_preview_window

0x6fdd,	// (0x0002ddd1) popup_fep_char_preview_window_t1_ParamLimits

0x6fdd,	// (0x0002ddd1) popup_fep_char_preview_window_t1

0x35ff,	// (0x0002a3f3) bg_popup_fep_char_preview_window_g1

0x35f7,	// (0x0002a3eb) bg_popup_fep_char_preview_window_g2

0x35ef,	// (0x0002a3e3) bg_popup_fep_char_preview_window_g3

0x361f,	// (0x0002a413) bg_popup_fep_char_preview_window_g4

0x3617,	// (0x0002a40b) bg_popup_fep_char_preview_window_g5

0x7017,	// (0x0002de0b) bg_popup_fep_char_preview_window_g6

0x360f,	// (0x0002a403) bg_popup_fep_char_preview_window_g7

0x3607,	// (0x0002a3fb) bg_popup_fep_char_preview_window_g8

0x3627,	// (0x0002a41b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00036bdb) bg_popup_fep_char_preview_window_g

0x0f79,	// (0x00027d6d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f79,	// (0x00027d6d) cell_vkb2_top_candi_pane_g1

0x1316,	// (0x0002810a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1316,	// (0x0002810a) cell_vkb2_top_candi_pane_g2

0x1337,	// (0x0002812b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x1337,	// (0x0002812b) cell_vkb2_top_candi_pane_g3

0x701f,	// (0x0002de13) cell_vkb2_top_candi_pane_g4_ParamLimits

0x701f,	// (0x0002de13) cell_vkb2_top_candi_pane_g4

0x35ce,	// (0x0002a3c2) cell_vkb2_top_candi_pane_g5_ParamLimits

0x35ce,	// (0x0002a3c2) cell_vkb2_top_candi_pane_g5

0x31e8,	// (0x00029fdc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x31e8,	// (0x00029fdc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00036bee) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00036bee) cell_vkb2_top_candi_pane_g

0x7040,	// (0x0002de34) cell_vkb2_top_candi_pane_t1

0xee23,	// (0x00035c17) aid_size_touch_slider_mark_ParamLimits

0xee23,	// (0x00035c17) aid_size_touch_slider_mark

0xc326,	// (0x0003311a) grid_graphic2_catg_pane_ParamLimits

0xc326,	// (0x0003311a) grid_graphic2_catg_pane

0xc39d,	// (0x00033191) popup_grid_graphic2_window_t1_ParamLimits

0xc39d,	// (0x00033191) popup_grid_graphic2_window_t1

0xc3b2,	// (0x000331a6) popup_grid_graphic2_window_t2_ParamLimits

0xc3b2,	// (0x000331a6) popup_grid_graphic2_window_t2

0x0001,

0xfdba,	// (0x00036bae) popup_grid_graphic2_window_t_ParamLimits

0xfdba,	// (0x00036bae) popup_grid_graphic2_window_t

0xcb8e,	// (0x00033982) bg_button_pane_cp05_ParamLimits

0xc4e9,	// (0x000332dd) cell_graphic2_control_pane_g1_ParamLimits

0x331d,	// (0x0002a111) cell_graphic2_catg_pane_ParamLimits

0x331d,	// (0x0002a111) cell_graphic2_catg_pane

0x90f5,	// (0x0002fee9) bg_button_pane_cp12

0xc5b4,	// (0x000333a8) cell_graphic2_catg_pane_g1

0x326d,	// (0x0002a061) cell_tb_ext_pane_t1_ParamLimits

0x6b76,	// (0x0002d96a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6b76,	// (0x0002d96a) vkb2_top_cell_right_narrow_pane

0x6b8e,	// (0x0002d982) vkb2_top_cell_right_wide_pane_ParamLimits

0x6b8e,	// (0x0002d982) vkb2_top_cell_right_wide_pane

0x0d8c,	// (0x00027b80) bg_vkb2_func_pane_ParamLimits

0x0d8c,	// (0x00027b80) bg_vkb2_func_pane

0x6bff,	// (0x0002d9f3) vkb2_top_cell_left_pane_g1_ParamLimits

0x0d8c,	// (0x00027b80) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0d8c,	// (0x00027b80) bg_vkb2_fuc_pane_cp03

0x6c5d,	// (0x0002da51) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xda4b,	// (0x0003483f) bg_vkb2_func_pane_g1

0xda53,	// (0x00034847) bg_vkb2_func_pane_g2

0xda63,	// (0x00034857) bg_vkb2_func_pane_g3

0xda5b,	// (0x0003484f) bg_vkb2_func_pane_g4

0xda6b,	// (0x0003485f) bg_vkb2_func_pane_g5

0xda73,	// (0x00034867) bg_vkb2_func_pane_g6

0xda7b,	// (0x0003486f) bg_vkb2_func_pane_g7

0xda83,	// (0x00034877) bg_vkb2_func_pane_g8

0xda43,	// (0x00034837) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x00036bfb) bg_vkb2_func_pane_g

0x0d8c,	// (0x00027b80) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0d8c,	// (0x00027b80) bg_vkb2_fuc_pane_cp01

0x6bff,	// (0x0002d9f3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6bff,	// (0x0002d9f3) vkb2_top_cell_right_wide_pane_g1

0x0d8c,	// (0x00027b80) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0d8c,	// (0x00027b80) bg_vkb2_fuc_pane_cp02

0x6c5d,	// (0x0002da51) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c5d,	// (0x0002da51) vkb2_top_cell_right_narrow_pane_g1

0xb886,	// (0x0003267a) aid_touch_area_decrease_ParamLimits

0xb886,	// (0x0003267a) aid_touch_area_decrease

0xb8b4,	// (0x000326a8) aid_touch_area_increase_ParamLimits

0xb8b4,	// (0x000326a8) aid_touch_area_increase

0xb8dc,	// (0x000326d0) aid_touch_area_mute_ParamLimits

0xb8dc,	// (0x000326d0) aid_touch_area_mute

0xb904,	// (0x000326f8) aid_touch_area_slider_ParamLimits

0xb904,	// (0x000326f8) aid_touch_area_slider

0xb944,	// (0x00032738) popup_slider_window_g4_ParamLimits

0xb944,	// (0x00032738) popup_slider_window_g4

0xb96c,	// (0x00032760) popup_slider_window_g5_ParamLimits

0xb96c,	// (0x00032760) popup_slider_window_g5

0xb9a0,	// (0x00032794) popup_slider_window_g6_ParamLimits

0xb9a0,	// (0x00032794) popup_slider_window_g6

0x3199,	// (0x00029f8d) popup_slider_window_t2_ParamLimits

0x3199,	// (0x00029f8d) popup_slider_window_t2

0x0001,

0xfd08,	// (0x00036afc) popup_slider_window_t_ParamLimits

0xfd08,	// (0x00036afc) popup_slider_window_t

0xb9bc,	// (0x000327b0) slider_pane_ParamLimits

0xb9bc,	// (0x000327b0) slider_pane

0x362f,	// (0x0002a423) slider_pane_g1_ParamLimits

0x362f,	// (0x0002a423) slider_pane_g1

0x3643,	// (0x0002a437) slider_pane_g2_ParamLimits

0x3643,	// (0x0002a437) slider_pane_g2

0x3659,	// (0x0002a44d) slider_pane_g3_ParamLimits

0x3659,	// (0x0002a44d) slider_pane_g3

0x0003,

0xfe1a,	// (0x00036c0e) slider_pane_g_ParamLimits

0xfe1a,	// (0x00036c0e) slider_pane_g

0xa6ad,	// (0x000314a1) popup_tb_float_extension_window_ParamLimits

0xa6ad,	// (0x000314a1) popup_tb_float_extension_window

0x3685,	// (0x0002a479) aid_size_cell_tb_float_ext

0x90f5,	// (0x0002fee9) bg_popup_sub_window_cp28

0x3690,	// (0x0002a484) grid_tb_float_ext_pane

0x3698,	// (0x0002a48c) cell_tb_float_ext_pane_ParamLimits

0x3698,	// (0x0002a48c) cell_tb_float_ext_pane

0x36b0,	// (0x0002a4a4) cell_tb_float_ext_pane_g1

0x36b9,	// (0x0002a4ad) grid_highlight_pane_cp12

0xb3bd,	// (0x000321b1) cell_last_hwr_side_pane_ParamLimits

0xb3bd,	// (0x000321b1) cell_last_hwr_side_pane

0x0d31,	// (0x00027b25) cell_last_hwr_side_pane_g1

0x36c2,	// (0x0002a4b6) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x00036c17) cell_last_hwr_side_pane_g

0xc228,	// (0x0003301c) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc228,	// (0x0003301c) vkb2_area_bottom_space_btn_pane

0x0f79,	// (0x00027d6d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x3501,	// (0x0002a2f5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7040,	// (0x0002de34) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7071,	// (0x0002de65) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7071,	// (0x0002de65) vkb2_area_bottom_space_btn_pane_g1

0x70a7,	// (0x0002de9b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x70a7,	// (0x0002de9b) vkb2_area_bottom_space_btn_pane_g2

0x70dd,	// (0x0002ded1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x70dd,	// (0x0002ded1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x00036c1c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x00036c1c) vkb2_area_bottom_space_btn_pane_g

0x5b88,	// (0x0002c97c) cel_fep_hwr_func_pane_ParamLimits

0x5b88,	// (0x0002c97c) cel_fep_hwr_func_pane

0xb392,	// (0x00032186) cell_hwr_side_button_pane_ParamLimits

0xb392,	// (0x00032186) cell_hwr_side_button_pane

0x32a1,	// (0x0002a095) aid_area_touch_clock_ParamLimits

0x97ad,	// (0x000305a1) bg_uniindi_top_pane_ParamLimits

0x32b3,	// (0x0002a0a7) uniindi_top_pane_g1_ParamLimits

0x32c9,	// (0x0002a0bd) uniindi_top_pane_g2_ParamLimits

0x32d5,	// (0x0002a0c9) uniindi_top_pane_g3_ParamLimits

0x32e6,	// (0x0002a0da) uniindi_top_pane_g4_ParamLimits

0xfd40,	// (0x00036b34) uniindi_top_pane_g_ParamLimits

0x32f3,	// (0x0002a0e7) uniindi_top_pane_t1_ParamLimits

0x97ad,	// (0x000305a1) bg_vkb2_func_pane_cp01_ParamLimits

0x97ad,	// (0x000305a1) bg_vkb2_func_pane_cp01

0x7123,	// (0x0002df17) cel_fep_hwr_func_pane_g1_ParamLimits

0x7123,	// (0x0002df17) cel_fep_hwr_func_pane_g1

0x97ad,	// (0x000305a1) bg_vkb2_func_pane_cp02_ParamLimits

0x97ad,	// (0x000305a1) bg_vkb2_func_pane_cp02

0x7123,	// (0x0002df17) cell_hwr_side_button_pane_g1_ParamLimits

0x7123,	// (0x0002df17) cell_hwr_side_button_pane_g1

0xd967,	// (0x0003475b) status_pane_g4_ParamLimits

0xd967,	// (0x0003475b) status_pane_g4

0xd97f,	// (0x00034773) status_pane_t1

0x0b23,	// (0x00027917) form2_midp_gauge_slider_cont_pane

0x0b2b,	// (0x0002791f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb2e6,	// (0x000320da) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb2f8,	// (0x000320ec) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x00036907) form2_midp_gauge_slider_pane_t_ParamLimits

0x0b61,	// (0x00027955) form2_midp_slider_pane_ParamLimits

0x67ae,	// (0x0002d5a2) aid_size_cell_func_vkb2_ParamLimits

0x67ae,	// (0x0002d5a2) aid_size_cell_func_vkb2

0x3671,	// (0x0002a465) slider_pane_g4_ParamLimits

0x3671,	// (0x0002a465) slider_pane_g4

0xc5bd,	// (0x000333b1) form2_midp_gauge_slider_pane_t2_cp01

0xc5cb,	// (0x000333bf) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc5cb,	// (0x000333bf) form2_midp_gauge_slider_pane_t3_cp01

0x715c,	// (0x0002df50) form2_midp_slider_pane_cp01

0x90f5,	// (0x0002fee9) navi_smil_pane

0x7190,	// (0x0002df84) navi_smil_pane_g1

0x7198,	// (0x0002df8c) navi_smil_pane_t1

0x7165,	// (0x0002df59) form2_midp_slider_pane_g1

0x716e,	// (0x0002df62) form2_midp_slider_pane_g2

0x7176,	// (0x0002df6a) form2_midp_slider_pane_g3

0x7165,	// (0x0002df59) form2_midp_slider_pane_g4

0xc5e8,	// (0x000333dc) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x00036c25) form2_midp_slider_pane_g

0x7113,	// (0x0002df07) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7113,	// (0x0002df07) vkb2_area_bottom_space_btn_pane_g4

0xa84f,	// (0x00031643) lc0_navi_pane_ParamLimits

0xa84f,	// (0x00031643) lc0_navi_pane

0xa8b9,	// (0x000316ad) lc0_stat_indi_pane_ParamLimits

0xa8b9,	// (0x000316ad) lc0_stat_indi_pane

0xa8ce,	// (0x000316c2) ls0_title_pane_ParamLimits

0xa8ce,	// (0x000316c2) ls0_title_pane

0xcb8e,	// (0x00033982) bg_popup_sub_pane_cp14_ParamLimits

0x3288,	// (0x0002a07c) list_uniindi_pane_ParamLimits

0x3294,	// (0x0002a088) uniindi_top_pane_ParamLimits

0x332f,	// (0x0002a123) list_single_uniindi_pane_g1_ParamLimits

0x3342,	// (0x0002a136) list_single_uniindi_pane_t1_ParamLimits

0xc5f1,	// (0x000333e5) lc0_stat_clock_pane_ParamLimits

0xc5f1,	// (0x000333e5) lc0_stat_clock_pane

0xc5fe,	// (0x000333f2) lc0_stat_indi_pane_g1_ParamLimits

0xc5fe,	// (0x000333f2) lc0_stat_indi_pane_g1

0xc60b,	// (0x000333ff) lc0_stat_indi_pane_g2_ParamLimits

0xc60b,	// (0x000333ff) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x00036c30) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x00036c30) lc0_stat_indi_pane_g

0xc618,	// (0x0003340c) lc0_uni_indicator_pane_ParamLimits

0xc618,	// (0x0003340c) lc0_uni_indicator_pane

0x71da,	// (0x0002dfce) ls0_title_pane_g1_ParamLimits

0x71da,	// (0x0002dfce) ls0_title_pane_g1

0xc625,	// (0x00033419) ls0_title_pane_t1_ParamLimits

0xc625,	// (0x00033419) ls0_title_pane_t1

0xc653,	// (0x00033447) lc0_uni_indicator_pane_g1_ParamLimits

0xc653,	// (0x00033447) lc0_uni_indicator_pane_g1

0x7236,	// (0x0002e02a) lc0_stat_clock_pane_t1

0x90f5,	// (0x0002fee9) main_ai5_pane

0x7244,	// (0x0002e038) ai5_sk_pane_ParamLimits

0x7244,	// (0x0002e038) ai5_sk_pane

0xc668,	// (0x0003345c) cell_ai5_widget_pane_ParamLimits

0xc668,	// (0x0003345c) cell_ai5_widget_pane

0xc6cf,	// (0x000334c3) aid_size_cell_widget_grid

0x72c0,	// (0x0002e0b4) bg_ai5_widget_pane_ParamLimits

0x72c0,	// (0x0002e0b4) bg_ai5_widget_pane

0xc6fe,	// (0x000334f2) cell_ai5_widget_pane_g2

0xc70e,	// (0x00033502) cell_ai5_widget_pane_g3

0xc722,	// (0x00033516) cell_ai5_widget_pane_g4

0xc72e,	// (0x00033522) cell_ai5_widget_pane_g5

0xc73a,	// (0x0003352e) cell_ai5_widget_pane_g6

0xc746,	// (0x0003353a) cell_ai5_widget_pane_g7

0xc78e,	// (0x00033582) cell_ai5_widget_pane_t1_ParamLimits

0xc78e,	// (0x00033582) cell_ai5_widget_pane_t1

0xc7ab,	// (0x0003359f) cell_ai5_widget_pane_t2_ParamLimits

0xc7ab,	// (0x0003359f) cell_ai5_widget_pane_t2

0xc7c3,	// (0x000335b7) cell_ai5_widget_pane_t3_ParamLimits

0xc7c3,	// (0x000335b7) cell_ai5_widget_pane_t3

0xc7db,	// (0x000335cf) cell_ai5_widget_pane_t4_ParamLimits

0xc7db,	// (0x000335cf) cell_ai5_widget_pane_t4

0xc7f5,	// (0x000335e9) cell_ai5_widget_pane_t5_ParamLimits

0xc7f5,	// (0x000335e9) cell_ai5_widget_pane_t5

0x73fe,	// (0x0002e1f2) cell_ai5_widget_pane_t6_ParamLimits

0x73fe,	// (0x0002e1f2) cell_ai5_widget_pane_t6

0x7410,	// (0x0002e204) cell_ai5_widget_pane_t7_ParamLimits

0x7410,	// (0x0002e204) cell_ai5_widget_pane_t7

0xc814,	// (0x00033608) cell_ai5_widget_pane_t8_ParamLimits

0xc814,	// (0x00033608) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x00036c4a) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x00036c4a) cell_ai5_widget_pane_t

0xc85c,	// (0x00033650) grid_ai5_widget_pane

0xcb8e,	// (0x00033982) highlight_cell_ai5_widget_pane_ParamLimits

0xcb8e,	// (0x00033982) highlight_cell_ai5_widget_pane

0xc870,	// (0x00033664) ai5_sk_left_pane

0xc87a,	// (0x0003366e) ai5_sk_middle_pane

0xc884,	// (0x00033678) ai5_sk_right_pane

0x74a5,	// (0x0002e299) bg_ai5_widget_pane_g1_ParamLimits

0x74a5,	// (0x0002e299) bg_ai5_widget_pane_g1

0x74b1,	// (0x0002e2a5) bg_ai5_widget_pane_g2_ParamLimits

0x74b1,	// (0x0002e2a5) bg_ai5_widget_pane_g2

0x74bd,	// (0x0002e2b1) bg_ai5_widget_pane_g3_ParamLimits

0x74bd,	// (0x0002e2b1) bg_ai5_widget_pane_g3

0x74c9,	// (0x0002e2bd) bg_ai5_widget_pane_g4_ParamLimits

0x74c9,	// (0x0002e2bd) bg_ai5_widget_pane_g4

0x74d5,	// (0x0002e2c9) bg_ai5_widget_pane_g5_ParamLimits

0x74d5,	// (0x0002e2c9) bg_ai5_widget_pane_g5

0x74e1,	// (0x0002e2d5) bg_ai5_widget_pane_g6_ParamLimits

0x74e1,	// (0x0002e2d5) bg_ai5_widget_pane_g6

0x74ed,	// (0x0002e2e1) bg_ai5_widget_pane_g7_ParamLimits

0x74ed,	// (0x0002e2e1) bg_ai5_widget_pane_g7

0x74f9,	// (0x0002e2ed) bg_ai5_widget_pane_g8_ParamLimits

0x74f9,	// (0x0002e2ed) bg_ai5_widget_pane_g8

0x7505,	// (0x0002e2f9) bg_ai5_widget_pane_g9_ParamLimits

0x7505,	// (0x0002e2f9) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00036c5f) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00036c5f) bg_ai5_widget_pane_g

0xc88e,	// (0x00033682) cell_shortcut_ai5_widget_pane_ParamLimits

0xc88e,	// (0x00033682) cell_shortcut_ai5_widget_pane

0x95bf,	// (0x000303b3) bg_cell_shortcut_ai5_widget_pane

0xc89f,	// (0x00033693) cell_grid_ai5_widget_pane_g1

0x7547,	// (0x0002e33b) highlight_cell_shortcut_ai5_widget_pane

0xda53,	// (0x00034847) ai5_sk_left_pane_g1

0x754f,	// (0x0002e343) ai5_sk_left_pane_g2

0x7557,	// (0x0002e34b) ai5_sk_left_pane_g3

0x755f,	// (0x0002e353) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00036c72) ai5_sk_left_pane_g

0x7567,	// (0x0002e35b) ai5_sk_left_pane_t1

0xda4b,	// (0x0003483f) ai5_sk_right_pane_g1

0x7575,	// (0x0002e369) ai5_sk_right_pane_g2

0x757d,	// (0x0002e371) ai5_sk_right_pane_g3

0x7585,	// (0x0002e379) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00036c7b) ai5_sk_right_pane_g

0x758d,	// (0x0002e381) ai5_sk_right_pane_t1

0xda4b,	// (0x0003483f) ai5_sk_middle_pane_g1

0xda53,	// (0x00034847) ai5_sk_middle_pane_g2

0xda6b,	// (0x0003485f) ai5_sk_middle_pane_g3

0x757d,	// (0x0002e371) ai5_sk_middle_pane_g4

0x7557,	// (0x0002e34b) ai5_sk_middle_pane_g5

0x759b,	// (0x0002e38f) ai5_sk_middle_pane_g6

0xc8a8,	// (0x0003369c) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00036c84) ai5_sk_middle_pane_g

0xa74d,	// (0x00031541) aid_touch_area_size_lc0_ParamLimits

0xa74d,	// (0x00031541) aid_touch_area_size_lc0

0x5d07,	// (0x0002cafb) cell_hwr_candidate_pane_t1_ParamLimits

0xd89c,	// (0x00034690) aid_touch_navi_pane

0xa9ba,	// (0x000317ae) status_dt_navi_pane_ParamLimits

0xa9ba,	// (0x000317ae) status_dt_navi_pane

0xa9d2,	// (0x000317c6) status_dt_sta_pane_ParamLimits

0xa9d2,	// (0x000317c6) status_dt_sta_pane

0xc8b0,	// (0x000336a4) dt_sta_controll_pane

0xc8bd,	// (0x000336b1) dt_sta_indi_pane

0xc8ca,	// (0x000336be) dt_sta_title_pane

0x97ad,	// (0x000305a1) bg_dt_sta_indi_pane_ParamLimits

0x97ad,	// (0x000305a1) bg_dt_sta_indi_pane

0xc8dc,	// (0x000336d0) dt_sta_battery_pane

0xc8e4,	// (0x000336d8) dt_sta_indi_pane_g1

0xc8ed,	// (0x000336e1) dt_sta_indi_pane_g2

0xc8f6,	// (0x000336ea) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00036c93) dt_sta_indi_pane_g

0xc8ff,	// (0x000336f3) dt_sta_signal_pane

0xcb8e,	// (0x00033982) bg_dt_sta_title_pane_ParamLimits

0xcb8e,	// (0x00033982) bg_dt_sta_title_pane

0xc908,	// (0x000336fc) dt_sta_title_pane_g1

0xc910,	// (0x00033704) dt_sta_title_pane_t1_ParamLimits

0xc910,	// (0x00033704) dt_sta_title_pane_t1

0x90f5,	// (0x0002fee9) bg_dt_sta_control_pane

0xc925,	// (0x00033719) dt_sta_controll_pane_g1

0xc92e,	// (0x00033722) bg_dt_sta_title_pane_g1

0xc937,	// (0x0003372b) bg_dt_sta_title_pane_g2

0xc940,	// (0x00033734) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00036c9a) bg_dt_sta_title_pane_g

0x0d31,	// (0x00027b25) bg_dt_sta_indi_pane_g1

0xc949,	// (0x0003373d) dt_sta_signal_pane_g1

0xc951,	// (0x00033745) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00036ca1) dt_sta_signal_pane_g

0x7659,	// (0x0002e44d) dt_sta_battery_pane_g1

0x7662,	// (0x0002e456) dt_sta_battery_pane_t1

0x0d31,	// (0x00027b25) bg_dt_sta_control_pane_g1

0xd105,	// (0x00033ef9) fep_china_uni_eep_pane

0xd10d,	// (0x00033f01) fep_china_uni_entry_pane_ParamLimits

0xd11d,	// (0x00033f11) popup_fep_china_uni_window_g1_ParamLimits

0xd12d,	// (0x00033f21) popup_fep_china_uni_window_g2_ParamLimits

0xd12d,	// (0x00033f21) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x00036556) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x00036556) popup_fep_china_uni_window_g

0x7671,	// (0x0002e465) fep_china_uni_eep_pane_g1

0x7679,	// (0x0002e46d) fep_china_uni_eep_pane_t1

0x7187,	// (0x0002df7b) aid_touch_area_size_smil_player

0xd93a,	// (0x0003472e) lc0_clock_pane

0xd973,	// (0x00034767) status_pane_g5_ParamLimits

0xd973,	// (0x00034767) status_pane_g5

0xa2e1,	// (0x000310d5) popup_keymap_window

0xd953,	// (0x00034747) status_icon_pane

0xc70e,	// (0x00033502) cell_ai5_widget_pane_g3_ParamLimits

0xc722,	// (0x00033516) cell_ai5_widget_pane_g4_ParamLimits

0xc72e,	// (0x00033522) cell_ai5_widget_pane_g5_ParamLimits

0xc752,	// (0x00033546) cell_ai5_widget_pane_g8_ParamLimits

0xc752,	// (0x00033546) cell_ai5_widget_pane_g8

0xc766,	// (0x0003355a) cell_ai5_widget_pane_g9_ParamLimits

0xc766,	// (0x0003355a) cell_ai5_widget_pane_g9

0xc77a,	// (0x0003356e) cell_ai5_widget_pane_g10_ParamLimits

0xc77a,	// (0x0003356e) cell_ai5_widget_pane_g10

0x7688,	// (0x0002e47c) status_icon_pane_g1

0x90f5,	// (0x0002fee9) bg_popup_sub_pane_cp13

0x7690,	// (0x0002e484) popup_keymap_window_t1

0xa035,	// (0x00030e29) control_pane_g6_ParamLimits

0xa035,	// (0x00030e29) control_pane_g6

0xa042,	// (0x00030e36) control_pane_g7_ParamLimits

0xa042,	// (0x00030e36) control_pane_g7

0xa04f,	// (0x00030e43) control_pane_g8_ParamLimits

0xa04f,	// (0x00030e43) control_pane_g8

0xc8b0,	// (0x000336a4) dt_sta_controll_pane_ParamLimits

0xc8bd,	// (0x000336b1) dt_sta_indi_pane_ParamLimits

0xc8ca,	// (0x000336be) dt_sta_title_pane_ParamLimits

0x9c0c,	// (0x00030a00) aid_size_touch_scroll_bar_cale

0x4e87,	// (0x0002bc7b) popup_discreet_window_ParamLimits

0x4e87,	// (0x0002bc7b) popup_discreet_window

0x9288,	// (0x0003007c) popup_sk_window

0xe120,	// (0x00034f14) bg_popup_sub_pane_cp28_ParamLimits

0xe120,	// (0x00034f14) bg_popup_sub_pane_cp28

0x769e,	// (0x0002e492) popup_discreet_window_g1_ParamLimits

0x769e,	// (0x0002e492) popup_discreet_window_g1

0x76be,	// (0x0002e4b2) popup_discreet_window_t1_ParamLimits

0x76be,	// (0x0002e4b2) popup_discreet_window_t1

0x76dc,	// (0x0002e4d0) popup_discreet_window_t2_ParamLimits

0x76dc,	// (0x0002e4d0) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x00036ca6) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x00036ca6) popup_discreet_window_t

0x772e,	// (0x0002e522) popup_sk_window_g1

0x7737,	// (0x0002e52b) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00036cad) popup_sk_window_g

0x7740,	// (0x0002e534) popup_sk_window_t1

0x774e,	// (0x0002e542) popup_sk_window_t1_copy1

0xc6fe,	// (0x000334f2) cell_ai5_widget_pane_g2_ParamLimits

0xc826,	// (0x0003361a) cell_ai5_widget_pane_t9_ParamLimits

0xc826,	// (0x0003361a) cell_ai5_widget_pane_t9

0x90f5,	// (0x0002fee9) main_fep_fshwr2_pane

0xc959,	// (0x0003374d) aid_fshwr2_btn_pane

0xc961,	// (0x00033755) aid_fshwr2_syb_pane

0xc969,	// (0x0003375d) aid_fshwr2_txt_pane

0xc971,	// (0x00033765) fshwr2_func_candi_pane

0xc979,	// (0x0003376d) fshwr2_hwr_syb_pane

0xc981,	// (0x00033775) fshwr2_icf_pane

0x90f5,	// (0x0002fee9) fshwr2_icf_bg_pane

0xc989,	// (0x0003377d) fshwr2_icf_pane_t1_ParamLimits

0xc989,	// (0x0003377d) fshwr2_icf_pane_t1

0x0d31,	// (0x00027b25) fshwr2_func_candi_pane_g1

0x77b5,	// (0x0002e5a9) fshwr2_func_candi_row_pane_ParamLimits

0x77b5,	// (0x0002e5a9) fshwr2_func_candi_row_pane

0xc9a1,	// (0x00033795) cell_fshwr2_syb_pane_ParamLimits

0xc9a1,	// (0x00033795) cell_fshwr2_syb_pane

0x0f79,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0f79,	// (0x00027d6d) fshwr2_hwr_syb_pane_g1

0x90f5,	// (0x0002fee9) bg_popup_call_pane_cp01

0x77dd,	// (0x0002e5d1) fshwr2_func_candi_cell_pane_ParamLimits

0x77dd,	// (0x0002e5d1) fshwr2_func_candi_cell_pane

0x7808,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7808,	// (0x0002e5fc) fshwr2_func_candi_cell_bg_pane

0x7822,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7822,	// (0x0002e616) fshwr2_func_candi_cell_pane_g1

0x7842,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7842,	// (0x0002e636) fshwr2_func_candi_cell_pane_t1

0x90f5,	// (0x0002fee9) bg_button_pane_cp08

0xd535,	// (0x00034329) cell_fshwr2_syb_bg_pane

0xc9b8,	// (0x000337ac) cell_fshwr2_syb_bg_pane_g1

0xc9c0,	// (0x000337b4) cell_fshwr2_syb_bg_pane_t1

0xcb8e,	// (0x00033982) main_tmo_pane

0xae24,	// (0x00031c18) uni_indicator_pane_g1_ParamLimits

0xae39,	// (0x00031c2d) uni_indicator_pane_g2_ParamLimits

0xae4f,	// (0x00031c43) uni_indicator_pane_g3_ParamLimits

0xeaac,	// (0x000358a0) uni_indicator_pane_g4_ParamLimits

0xeaac,	// (0x000358a0) uni_indicator_pane_g4

0xeac0,	// (0x000358b4) uni_indicator_pane_g5_ParamLimits

0xeac0,	// (0x000358b4) uni_indicator_pane_g5

0xead4,	// (0x000358c8) uni_indicator_pane_g6_ParamLimits

0xead4,	// (0x000358c8) uni_indicator_pane_g6

0xf953,	// (0x00036747) uni_indicator_pane_g_ParamLimits

0xb86a,	// (0x0003265e) popup_tmo_note_window_ParamLimits

0xb86a,	// (0x0003265e) popup_tmo_note_window

0x90f5,	// (0x0002fee9) fshwr2_bg_pane

0x7833,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7833,	// (0x0002e627) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00036cb2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00036cb2) fshwr2_func_candi_cell_pane_g

0x0d31,	// (0x00027b25) bg_popup_window_pane_cp01

0x786c,	// (0x0002e660) bg_popup_window_pane_g1_cp01

0x7875,	// (0x0002e669) bg_popup_window_pane_cp22_ParamLimits

0x7875,	// (0x0002e669) bg_popup_window_pane_cp22

0x7883,	// (0x0002e677) listscroll_tmo_link_pane_ParamLimits

0x7883,	// (0x0002e677) listscroll_tmo_link_pane

0x78c3,	// (0x0002e6b7) popup_tmo_note_window_g1_ParamLimits

0x78c3,	// (0x0002e6b7) popup_tmo_note_window_g1

0x78d0,	// (0x0002e6c4) tmo_note_info_pane_ParamLimits

0x78d0,	// (0x0002e6c4) tmo_note_info_pane

0xc9cf,	// (0x000337c3) list_tmo_note_info_pane_g1_ParamLimits

0xc9cf,	// (0x000337c3) list_tmo_note_info_pane_g1

0x7901,	// (0x0002e6f5) list_tmo_note_info_pane_g2_ParamLimits

0x7901,	// (0x0002e6f5) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x00036cb7) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x00036cb7) list_tmo_note_info_pane_g

0x791d,	// (0x0002e711) list_tmo_note_info_text_pane_ParamLimits

0x791d,	// (0x0002e711) list_tmo_note_info_text_pane

0x799e,	// (0x0002e792) list_tmo_link_pane

0x79ab,	// (0x0002e79f) scroll_pane_cp20

0x79b8,	// (0x0002e7ac) list_single_tmo_link_pane_ParamLimits

0x79b8,	// (0x0002e7ac) list_single_tmo_link_pane

0x79c8,	// (0x0002e7bc) list_single_tmo_link_pane_t1

0x79d6,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1_ParamLimits

0x79d6,	// (0x0002e7ca) list_tmo_note_info_text_pane_t1

0xcc3c,	// (0x00033a30) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcc3c,	// (0x00033a30) aid_size_touch_scroll_bar_cp01

0x8d5d,	// (0x0002fb51) aid_size_touch_slider_marker

0x927c,	// (0x00030070) popup_settings_window_ParamLimits

0x927c,	// (0x00030070) popup_settings_window

0x477d,	// (0x0002b571) popup_candi_list_indi_window

0xd89c,	// (0x00034690) aid_touch_navi_pane_ParamLimits

0x629b,	// (0x0002d08f) rs_clock_indi_pane

0x62a4,	// (0x0002d098) sctrl_sk_bottom_pane_ParamLimits

0x62b5,	// (0x0002d0a9) sctrl_sk_top_pane_ParamLimits

0x6808,	// (0x0002d5fc) popup_fep_tooltip_window

0xc6cf,	// (0x000334c3) aid_size_cell_widget_grid_ParamLimits

0xc6f2,	// (0x000334e6) cell_ai5_widget_pane_g1_ParamLimits

0xc6f2,	// (0x000334e6) cell_ai5_widget_pane_g1

0xc73a,	// (0x0003352e) cell_ai5_widget_pane_g6_ParamLimits

0xc746,	// (0x0003353a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x00036c35) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x00036c35) cell_ai5_widget_pane_g

0xc84a,	// (0x0003363e) cell_ai5_widget_pane_t10_ParamLimits

0xc84a,	// (0x0003363e) cell_ai5_widget_pane_t10

0xc85c,	// (0x00033650) grid_ai5_widget_pane_ParamLimits

0x7511,	// (0x0002e305) cell_contacts_ai5_widget_pane_ParamLimits

0x7511,	// (0x0002e305) cell_contacts_ai5_widget_pane

0x76f1,	// (0x0002e4e5) popup_discreet_window_t3_ParamLimits

0x76f1,	// (0x0002e4e5) popup_discreet_window_t3

0x778c,	// (0x0002e580) popup_fshwr2_char_preview_window_ParamLimits

0x778c,	// (0x0002e580) popup_fshwr2_char_preview_window

0xc9e6,	// (0x000337da) tmo_note_info_pane_t1

0xc9fb,	// (0x000337ef) tmo_note_info_pane_t2

0xca10,	// (0x00033804) tmo_note_info_pane_t3

0x797a,	// (0x0002e76e) tmo_note_info_pane_t4

0x798c,	// (0x0002e780) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00036cbc) tmo_note_info_pane_t

0x799e,	// (0x0002e792) list_tmo_link_pane_ParamLimits

0x79ab,	// (0x0002e79f) scroll_pane_cp20_ParamLimits

0x90f5,	// (0x0002fee9) bg_popup_fep_char_preview_window_cp01

0x79ef,	// (0x0002e7e3) popup_fshwr2_char_preview_window_t1

0x79fd,	// (0x0002e7f1) popup_candi_list_indi_window_g1

0x7a06,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane

0x7a12,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1

0x7a26,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2

0x7a35,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x00036cc7) cell_contacts_ai5_widget_pane_g

0x7a48,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1

0xcb8e,	// (0x00033982) highlight_cell_shortcut_ai5_widget_pane_cp01

0xca88,	// (0x0003387c) settings_container_pane

0xd535,	// (0x00034329) listscroll_set_pane_copy1

0xf255,	// (0x00036049) scroll_pane_cp121_copy1

0x7acc,	// (0x0002e8c0) set_content_pane_copy1

0x7ad4,	// (0x0002e8c8) aid_height_set_list_copy1_ParamLimits

0x7ad4,	// (0x0002e8c8) aid_height_set_list_copy1

0xec6d,	// (0x00035a61) aid_size_parent_copy1_ParamLimits

0xec6d,	// (0x00035a61) aid_size_parent_copy1

0xca94,	// (0x00033888) button_value_adjust_pane_cp6_copy1_ParamLimits

0xca94,	// (0x00033888) button_value_adjust_pane_cp6_copy1

0xcd0a,	// (0x00033afe) list_highlight_pane_cp2_copy1_ParamLimits

0xcd0a,	// (0x00033afe) list_highlight_pane_cp2_copy1

0xcaa8,	// (0x0003389c) list_set_pane_copy1_ParamLimits

0xcaa8,	// (0x0003389c) list_set_pane_copy1

0xca25,	// (0x00033819) main_pane_set_t1_copy1_ParamLimits

0xca25,	// (0x00033819) main_pane_set_t1_copy1

0xca5f,	// (0x00033853) main_pane_set_t2_copy1_ParamLimits

0xca5f,	// (0x00033853) main_pane_set_t2_copy1

0x7b82,	// (0x0002e976) main_pane_set_t3_copy1

0x7b90,	// (0x0002e984) main_pane_set_t4_copy1

0xca7c,	// (0x00033870) set_content_pane_g1_copy1_ParamLimits

0xca7c,	// (0x00033870) set_content_pane_g1_copy1

0xcb36,	// (0x0003392a) setting_code_pane_copy1

0x7ba6,	// (0x0002e99a) setting_slider_graphic_pane_copy1

0x7ba6,	// (0x0002e99a) setting_slider_pane_copy1

0x7bae,	// (0x0002e9a2) setting_text_pane_copy1

0x7ba6,	// (0x0002e99a) setting_volume_pane_copy1

0xcb3e,	// (0x00033932) settings_code_pane_cp2_copy1

0xdb95,	// (0x00034989) settings_code_pane_cp_copy1_ParamLimits

0xdb95,	// (0x00034989) settings_code_pane_cp_copy1

0xdba9,	// (0x0003499d) volume_set_pane_copy1

0xdbb1,	// (0x000349a5) volume_set_pane_g10_copy1

0xdbb9,	// (0x000349ad) volume_set_pane_g1_copy1

0xdbc1,	// (0x000349b5) volume_set_pane_g2_copy1

0xdbc9,	// (0x000349bd) volume_set_pane_g3_copy1

0xdbd1,	// (0x000349c5) volume_set_pane_g4_copy1

0xdbd9,	// (0x000349cd) volume_set_pane_g5_copy1

0xdbe1,	// (0x000349d5) volume_set_pane_g6_copy1

0xdbe9,	// (0x000349dd) volume_set_pane_g7_copy1

0xdbf1,	// (0x000349e5) volume_set_pane_g8_copy1

0xdbf9,	// (0x000349ed) volume_set_pane_g9_copy1

0x9458,	// (0x0003024c) bg_set_opt_pane_cp_copy1_ParamLimits

0x9458,	// (0x0003024c) bg_set_opt_pane_cp_copy1

0x9466,	// (0x0003025a) setting_slider_pane_t1_copy1_ParamLimits

0x9466,	// (0x0003025a) setting_slider_pane_t1_copy1

0x7c2a,	// (0x0002ea1e) setting_slider_pane_t2_copy1_ParamLimits

0x7c2a,	// (0x0002ea1e) setting_slider_pane_t2_copy1

0x7c43,	// (0x0002ea37) setting_slider_pane_t3_copy1_ParamLimits

0x7c43,	// (0x0002ea37) setting_slider_pane_t3_copy1

0x94ac,	// (0x000302a0) slider_set_pane_copy1_ParamLimits

0x94ac,	// (0x000302a0) slider_set_pane_copy1

0xcbdd,	// (0x000339d1) set_opt_bg_pane_g1_copy2

0xcbe5,	// (0x000339d9) set_opt_bg_pane_g2_copy2

0x7c5a,	// (0x0002ea4e) set_opt_bg_pane_g3_copy2

0xcbf5,	// (0x000339e9) set_opt_bg_pane_g4_copy2

0xcbfd,	// (0x000339f1) set_opt_bg_pane_g5_copy2

0xcc05,	// (0x000339f9) set_opt_bg_pane_g6_copy2

0xdc01,	// (0x000349f5) set_opt_bg_pane_g7_copy2

0x7c6a,	// (0x0002ea5e) set_opt_bg_pane_g8_copy2

0x7c72,	// (0x0002ea66) set_opt_bg_pane_g9_copy2

0xee23,	// (0x00035c17) aid_size_touch_slider_mark_copy1_ParamLimits

0xee23,	// (0x00035c17) aid_size_touch_slider_mark_copy1

0xec7f,	// (0x00035a73) slider_set_pane_g1_copy1

0xec88,	// (0x00035a7c) slider_set_pane_g2_copy1

0xee37,	// (0x00035c2b) slider_set_pane_g3_copy1_ParamLimits

0xee37,	// (0x00035c2b) slider_set_pane_g3_copy1

0xee4b,	// (0x00035c3f) slider_set_pane_g4_copy1_ParamLimits

0xee4b,	// (0x00035c3f) slider_set_pane_g4_copy1

0xee63,	// (0x00035c57) slider_set_pane_g5_copy1_ParamLimits

0xee63,	// (0x00035c57) slider_set_pane_g5_copy1

0xee37,	// (0x00035c2b) slider_set_pane_g6_copy1_ParamLimits

0xee37,	// (0x00035c2b) slider_set_pane_g6_copy1

0xdc09,	// (0x000349fd) slider_set_pane_g7_copy1_ParamLimits

0xdc09,	// (0x000349fd) slider_set_pane_g7_copy1

0x924c,	// (0x00030040) bg_set_opt_pane_cp2_copy1

0x94c2,	// (0x000302b6) setting_slider_graphic_pane_g1_copy1

0xdc1f,	// (0x00034a13) setting_slider_graphic_pane_t1_copy1

0xdc2e,	// (0x00034a22) setting_slider_graphic_pane_t2_copy1

0xdc3d,	// (0x00034a31) slider_set_pane_cp_copy1

0x7cbe,	// (0x0002eab2) input_focus_pane_cp1_copy1

0x7cc7,	// (0x0002eabb) list_set_text_pane_copy1

0x7ccf,	// (0x0002eac3) setting_text_pane_g1_copy1

0x4d1e,	// (0x0002bb12) set_text_pane_t1_copy1

0x7cbe,	// (0x0002eab2) input_focus_pane_cp2_copy1

0x7ccf,	// (0x0002eac3) setting_code_pane_g1_copy1

0x7cd8,	// (0x0002eacc) setting_code_pane_t1_copy1

0x9f44,	// (0x00030d38) list_set_graphic_pane_copy1

0x924c,	// (0x00030040) bg_set_opt_pane_cp4_copy1

0x7cfa,	// (0x0002eaee) list_set_graphic_pane_g1_copy1_ParamLimits

0x7cfa,	// (0x0002eaee) list_set_graphic_pane_g1_copy1

0x7d06,	// (0x0002eafa) list_set_graphic_pane_g2_copy1

0xd2b0,	// (0x000340a4) list_set_graphic_pane_t1_copy1_ParamLimits

0xd2b0,	// (0x000340a4) list_set_graphic_pane_t1_copy1

0x0d31,	// (0x00027b25) rs_clock_indi_pane_g1

0x7d0e,	// (0x0002eb02) rs_clock_indi_pane_t1

0x7d1c,	// (0x0002eb10) rs_indi_pane

0x7d24,	// (0x0002eb18) rs_indi_pane_g1

0x7d2d,	// (0x0002eb21) rs_indi_pane_g2

0x79fd,	// (0x0002e7f1) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00036cce) rs_indi_pane_g

0xd535,	// (0x00034329) bg_popup_preview_window_pane_cp03

0x7d36,	// (0x0002eb2a) popup_fep_tooltip_window_t1

0x26a2,	// (0x00029496) popup_note2_window_g2_ParamLimits

0x26a2,	// (0x00029496) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x00036a73) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x00036a73) popup_note2_window_g

0x2b1d,	// (0x00029911) bg_popup_sub_pane_cp11_ParamLimits

0x2b2a,	// (0x0002991e) cell_ai3_links_pane_g1_ParamLimits

0x2b41,	// (0x00029935) cell_ai3_links_pane_t1

0x4d1e,	// (0x0002bb12) set_text_pane_t1_copy1_ParamLimits

0xd45c,	// (0x00034250) cell_graphic_popup_pane_cp2_ParamLimits

0xd45c,	// (0x00034250) cell_graphic_popup_pane_cp2

0x7d44,	// (0x0002eb38) cell_graphic_popup_pane_g1_cp2

0x9abb,	// (0x000308af) cell_graphic_popup_pane_g2_cp2

0x7d4c,	// (0x0002eb40) cell_graphic_popup_pane_g3_cp2

0x7d54,	// (0x0002eb48) cell_graphic_popup_pane_t2_cp2

0x9acc,	// (0x000308c0) grid_highlight_pane_cp3_cp2

0xcecf,	// (0x00033cc3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xcb8e,	// (0x00033982) main_tmo_pane_ParamLimits

0xb862,	// (0x00032656) popup_tmo_big_image_note_window

0xc6e2,	// (0x000334d6) cell_ai5_widget_list_pane

0xc6ea,	// (0x000334de) cell_ai5_widget_lrg_icon_pane

0xc9e6,	// (0x000337da) tmo_note_info_pane_t1_ParamLimits

0xc9fb,	// (0x000337ef) tmo_note_info_pane_t2_ParamLimits

0xca10,	// (0x00033804) tmo_note_info_pane_t3_ParamLimits

0x797a,	// (0x0002e76e) tmo_note_info_pane_t4_ParamLimits

0x798c,	// (0x0002e780) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00036cbc) tmo_note_info_pane_t_ParamLimits

0xca88,	// (0x0003387c) settings_container_pane_ParamLimits

0x7cb6,	// (0x0002eaaa) indicator_popup_pane_cp5

0x7cb6,	// (0x0002eaaa) indicator_popup_pane_cp6

0x9f44,	// (0x00030d38) list_set_graphic_pane_copy1_ParamLimits

0x90f5,	// (0x0002fee9) bg_popup_window_pane_cp23

0x7d62,	// (0x0002eb56) popup_tmo_big_image_note_window_g1

0x7d6b,	// (0x0002eb5f) popup_tmo_big_image_note_window_t1

0x7d79,	// (0x0002eb6d) popup_tmo_big_image_note_window_t2

0x7d87,	// (0x0002eb7b) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x00036cd5) popup_tmo_big_image_note_window_t

0xdc45,	// (0x00034a39) cell_ai5_widget_lrg_icon_pane_g1

0xdc4d,	// (0x00034a41) cell_ai5_widget_lrg_icon_pane_t1

0xdc5b,	// (0x00034a4f) cell_ai5_widget_list_row_pane_ParamLimits

0xdc5b,	// (0x00034a4f) cell_ai5_widget_list_row_pane

0xdc74,	// (0x00034a68) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdc74,	// (0x00034a68) cell_ai5_widget_list_row_pane_g1

0xdc81,	// (0x00034a75) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdc81,	// (0x00034a75) cell_ai5_widget_list_row_pane_t1

0xdc99,	// (0x00034a8d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdc99,	// (0x00034a8d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee8,	// (0x00036cdc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00036cdc) cell_ai5_widget_list_row_pane_t

0x90f5,	// (0x0002fee9) main_fep_vtchi_ss_pane

0x7dfb,	// (0x0002ebef) popup_fep_char_pre_window

0x7e03,	// (0x0002ebf7) popup_fep_ituss_window

0x7e0c,	// (0x0002ec00) popup_fep_vkbss_window

0x7e15,	// (0x0002ec09) grid_vkbss_keypad_pane_ParamLimits

0x7e15,	// (0x0002ec09) grid_vkbss_keypad_pane

0x7e25,	// (0x0002ec19) ituss_keypad_pane

0x7e2d,	// (0x0002ec21) aid_vkbss_key_offset_ParamLimits

0x7e2d,	// (0x0002ec21) aid_vkbss_key_offset

0x7e3c,	// (0x0002ec30) cell_vkbss_key_pane_ParamLimits

0x7e3c,	// (0x0002ec30) cell_vkbss_key_pane

0x7e52,	// (0x0002ec46) bg_cell_vkbss_key_g1_ParamLimits

0x7e52,	// (0x0002ec46) bg_cell_vkbss_key_g1

0x7e5e,	// (0x0002ec52) cell_vkbss_key_3p_pane_ParamLimits

0x7e5e,	// (0x0002ec52) cell_vkbss_key_3p_pane

0x7e72,	// (0x0002ec66) cell_vkbss_key_g1_ParamLimits

0x7e72,	// (0x0002ec66) cell_vkbss_key_g1

0x7e86,	// (0x0002ec7a) cell_vkbss_key_t1_ParamLimits

0x7e86,	// (0x0002ec7a) cell_vkbss_key_t1

0x7eb1,	// (0x0002eca5) cell_ituss_key_pane_ParamLimits

0x7eb1,	// (0x0002eca5) cell_ituss_key_pane

0x7ec0,	// (0x0002ecb4) bg_cell_ituss_key_g1_ParamLimits

0x7ec0,	// (0x0002ecb4) bg_cell_ituss_key_g1

0x7ecc,	// (0x0002ecc0) cell_ituss_key_pane_g1_ParamLimits

0x7ecc,	// (0x0002ecc0) cell_ituss_key_pane_g1

0x7ed8,	// (0x0002eccc) cell_ituss_key_pane_g2_ParamLimits

0x7ed8,	// (0x0002eccc) cell_ituss_key_pane_g2

0x0001,

0xfeed,	// (0x00036ce1) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x00036ce1) cell_ituss_key_pane_g

0x7eeb,	// (0x0002ecdf) cell_ituss_key_t1_ParamLimits

0x7eeb,	// (0x0002ecdf) cell_ituss_key_t1

0x7f09,	// (0x0002ecfd) cell_ituss_key_t2_ParamLimits

0x7f09,	// (0x0002ecfd) cell_ituss_key_t2

0x7f28,	// (0x0002ed1c) cell_ituss_key_t3_ParamLimits

0x7f28,	// (0x0002ed1c) cell_ituss_key_t3

0x7f47,	// (0x0002ed3b) cell_ituss_key_t4_ParamLimits

0x7f47,	// (0x0002ed3b) cell_ituss_key_t4

0x0003,

0xfef2,	// (0x00036ce6) cell_ituss_key_t_ParamLimits

0xfef2,	// (0x00036ce6) cell_ituss_key_t

0x7f66,	// (0x0002ed5a) cell_vkbss_key_3p_pane_g1

0x7f6e,	// (0x0002ed62) cell_vkbss_key_3p_pane_g2

0x7f76,	// (0x0002ed6a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefb,	// (0x00036cef) cell_vkbss_key_3p_pane_g

0x90f5,	// (0x0002fee9) bg_popup_fep_char_preview_window_cp02

0x7f7e,	// (0x0002ed72) popup_fep_char_pre_window_t1

0xc6c5,	// (0x000334b9) main_ai5_sk_pane

0x7a06,	// (0x0002e7fa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7a12,	// (0x0002e806) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7a26,	// (0x0002e81a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7a35,	// (0x0002e829) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x00036cc7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7a48,	// (0x0002e83c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xcb8e,	// (0x00033982) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdcab,	// (0x00034a9f) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large

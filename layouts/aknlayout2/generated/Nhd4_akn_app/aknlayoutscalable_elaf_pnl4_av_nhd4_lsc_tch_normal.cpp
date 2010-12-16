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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00002c3a };

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
0x8cc7,	// (0x0000b901) Screen

0x8cd3,	// (0x0000b90d) application_window_ParamLimits

0x8cd3,	// (0x0000b90d) application_window

0xe0b7,	// (0x00010cf1) screen_g1

0x8d0b,	// (0x0000b945) area_bottom_pane_ParamLimits

0x8d0b,	// (0x0000b945) area_bottom_pane

0x8dd6,	// (0x0000ba10) area_top_pane_ParamLimits

0x8dd6,	// (0x0000ba10) area_top_pane

0x8e6a,	// (0x0000baa4) main_pane_ParamLimits

0x8e6a,	// (0x0000baa4) main_pane

0xe0e1,	// (0x00010d1b) misc_graphics

0xabd2,	// (0x0000d80c) battery_pane_ParamLimits

0xabd2,	// (0x0000d80c) battery_pane

0x1438,	// (0x00004072) bg_status_flat_pane_g8

0x1440,	// (0x0000407a) bg_status_flat_pane_g9

0x058d,	// (0x000031c7) context_pane_ParamLimits

0x058d,	// (0x000031c7) context_pane

0xad3d,	// (0x0000d977) navi_pane_ParamLimits

0xad3d,	// (0x0000d977) navi_pane

0xadbb,	// (0x0000d9f5) signal_pane_ParamLimits

0xadbb,	// (0x0000d9f5) signal_pane

0x0008,

0xf83e,	// (0x00012478) bg_status_flat_pane_g

0xae4b,	// (0x0000da85) status_pane_g1_ParamLimits

0xae4b,	// (0x0000da85) status_pane_g1

0xae61,	// (0x0000da9b) status_pane_g2_ParamLimits

0xae61,	// (0x0000da9b) status_pane_g2

0x07b4,	// (0x000033ee) status_pane_g3_ParamLimits

0x07b4,	// (0x000033ee) status_pane_g3

0x0004,

0xf76a,	// (0x000123a4) status_pane_g_ParamLimits

0xf76a,	// (0x000123a4) status_pane_g

0xae6d,	// (0x0000daa7) title_pane_ParamLimits

0xae6d,	// (0x0000daa7) title_pane

0xaece,	// (0x0000db08) uni_indicator_pane_ParamLimits

0xaece,	// (0x0000db08) uni_indicator_pane

0xf4a7,	// (0x000120e1) bg_list_pane_ParamLimits

0xf4a7,	// (0x000120e1) bg_list_pane

0xa3c0,	// (0x0000cffa) find_pane

0x0b84,	// (0x000037be) listscroll_app_pane_ParamLimits

0x0b84,	// (0x000037be) listscroll_app_pane

0xf4c7,	// (0x00012101) listscroll_form_pane

0xa3c8,	// (0x0000d002) listscroll_gen_pane_ParamLimits

0xa3c8,	// (0x0000d002) listscroll_gen_pane

0xf4cf,	// (0x00012109) listscroll_set_pane

0x21d0,	// (0x00004e0a) main_idle_act_pane

0xf25f,	// (0x00011e99) main_idle_trad_pane

0xf25f,	// (0x00011e99) main_list_empty_pane

0xf47b,	// (0x000120b5) main_midp_pane

0xf4e9,	// (0x00012123) main_pane_g1_ParamLimits

0xf4e9,	// (0x00012123) main_pane_g1

0xa3dc,	// (0x0000d016) popup_ai_message_window_ParamLimits

0xa3dc,	// (0x0000d016) popup_ai_message_window

0xa48d,	// (0x0000d0c7) popup_fep_china_uni_window_ParamLimits

0xa48d,	// (0x0000d0c7) popup_fep_china_uni_window

0xa4e7,	// (0x0000d121) popup_fep_japan_candidate_window_ParamLimits

0xa4e7,	// (0x0000d121) popup_fep_japan_candidate_window

0xa505,	// (0x0000d13f) popup_fep_japan_predictive_window_ParamLimits

0xa505,	// (0x0000d13f) popup_fep_japan_predictive_window

0xa517,	// (0x0000d151) popup_find_window

0xa534,	// (0x0000d16e) popup_grid_graphic_window_ParamLimits

0xa534,	// (0x0000d16e) popup_grid_graphic_window

0x0031,	// (0x00002c6b) popup_large_graphic_colour_window

0xa5d2,	// (0x0000d20c) popup_menu_window_ParamLimits

0xa5d2,	// (0x0000d20c) popup_menu_window

0xa7a4,	// (0x0000d3de) popup_note_image_window

0xa76a,	// (0x0000d3a4) popup_note_wait_window_ParamLimits

0xa76a,	// (0x0000d3a4) popup_note_wait_window

0xa7bc,	// (0x0000d3f6) popup_note_window_ParamLimits

0xa7bc,	// (0x0000d3f6) popup_note_window

0xa86b,	// (0x0000d4a5) popup_query_code_window_ParamLimits

0xa86b,	// (0x0000d4a5) popup_query_code_window

0xa8a5,	// (0x0000d4df) popup_query_data_code_window_ParamLimits

0xa8a5,	// (0x0000d4df) popup_query_data_code_window

0xa8c2,	// (0x0000d4fc) popup_query_data_window_ParamLimits

0xa8c2,	// (0x0000d4fc) popup_query_data_window

0xa944,	// (0x0000d57e) popup_query_sat_info_window_ParamLimits

0xa944,	// (0x0000d57e) popup_query_sat_info_window

0xa9db,	// (0x0000d615) popup_snote_single_graphic_window_ParamLimits

0xa9db,	// (0x0000d615) popup_snote_single_graphic_window

0xa9db,	// (0x0000d615) popup_snote_single_text_window_ParamLimits

0xa9db,	// (0x0000d615) popup_snote_single_text_window

0x0304,	// (0x00002f3e) popup_sub_window_general

0xab38,	// (0x0000d772) popup_window_general_ParamLimits

0xab38,	// (0x0000d772) popup_window_general

0x0449,	// (0x00003083) power_save_pane

0xa21a,	// (0x0000ce54) control_pane_g1_ParamLimits

0xa21a,	// (0x0000ce54) control_pane_g1

0xa243,	// (0x0000ce7d) control_pane_g2_ParamLimits

0xa243,	// (0x0000ce7d) control_pane_g2

0xf45e,	// (0x00012098) control_pane_g3_ParamLimits

0xf45e,	// (0x00012098) control_pane_g3

0x0007,

0xf752,	// (0x0001238c) control_pane_g_ParamLimits

0xf752,	// (0x0001238c) control_pane_g

0xa2ab,	// (0x0000cee5) control_pane_t1_ParamLimits

0xa2ab,	// (0x0000cee5) control_pane_t1

0xa313,	// (0x0000cf4d) control_pane_t2_ParamLimits

0xa313,	// (0x0000cf4d) control_pane_t2

0x0002,

0xf763,	// (0x0001239d) control_pane_t_ParamLimits

0xf763,	// (0x0001239d) control_pane_t

0xa191,	// (0x0000cdcb) navi_navi_volume_pane_cp1

0xa199,	// (0x0000cdd3) status_small_icon_pane

0xf40a,	// (0x00012044) status_small_pane_g1_ParamLimits

0xf40a,	// (0x00012044) status_small_pane_g1

0xa1a1,	// (0x0000cddb) status_small_pane_g2_ParamLimits

0xa1a1,	// (0x0000cddb) status_small_pane_g2

0xf43e,	// (0x00012078) status_small_pane_g3_ParamLimits

0xf43e,	// (0x00012078) status_small_pane_g3

0xa1ad,	// (0x0000cde7) status_small_pane_g4_ParamLimits

0xa1ad,	// (0x0000cde7) status_small_pane_g4

0xa1bb,	// (0x0000cdf5) status_small_pane_g5_ParamLimits

0xa1bb,	// (0x0000cdf5) status_small_pane_g5

0xa1c9,	// (0x0000ce03) status_small_pane_g6_ParamLimits

0xa1c9,	// (0x0000ce03) status_small_pane_g6

0x0007,

0xf741,	// (0x0001237b) status_small_pane_g_ParamLimits

0xf741,	// (0x0001237b) status_small_pane_g

0xa1e4,	// (0x0000ce1e) status_small_pane_t1

0xa206,	// (0x0000ce40) status_small_wait_pane_ParamLimits

0xa206,	// (0x0000ce40) status_small_wait_pane

0x9e78,	// (0x0000cab2) aid_levels_signal_ParamLimits

0x9e78,	// (0x0000cab2) aid_levels_signal

0x9e90,	// (0x0000caca) signal_pane_g1_ParamLimits

0x9e90,	// (0x0000caca) signal_pane_g1

0x9eab,	// (0x0000cae5) signal_pane_g2_ParamLimits

0x9eab,	// (0x0000cae5) signal_pane_g2

0x0003,

0xf6d2,	// (0x0001230c) signal_pane_g_ParamLimits

0xf6d2,	// (0x0001230c) signal_pane_g

0xece6,	// (0x00011920) context_pane_g1

0x9065,	// (0x0000bc9f) title_pane_g1

0x909c,	// (0x0000bcd6) title_pane_t1

0xe117,	// (0x00010d51) title_pane_t2

0xe13d,	// (0x00010d77) title_pane_t3

0x0002,

0xf530,	// (0x0001216a) title_pane_t

0xaef6,	// (0x0000db30) aid_levels_battery_ParamLimits

0xaef6,	// (0x0000db30) aid_levels_battery

0xaf12,	// (0x0000db4c) battery_pane_g1_ParamLimits

0xaf12,	// (0x0000db4c) battery_pane_g1

0xaf2f,	// (0x0000db69) battery_pane_g2_ParamLimits

0xaf2f,	// (0x0000db69) battery_pane_g2

0x0001,

0xf775,	// (0x000123af) battery_pane_g_ParamLimits

0xf775,	// (0x000123af) battery_pane_g

0xb5bc,	// (0x0000e1f6) uni_indicator_pane_g1

0xb5d2,	// (0x0000e20c) uni_indicator_pane_g2

0xb5e8,	// (0x0000e222) uni_indicator_pane_g3

0x0005,

0xf8e6,	// (0x00012520) uni_indicator_pane_g

0xf0fe,	// (0x00011d38) navi_icon_pane_ParamLimits

0xf0fe,	// (0x00011d38) navi_icon_pane

0xf053,	// (0x00011c8d) navi_midp_pane

0xf11a,	// (0x00011d54) navi_navi_pane

0xf124,	// (0x00011d5e) navi_text_pane_ParamLimits

0xf124,	// (0x00011d5e) navi_text_pane

0xe0b7,	// (0x00010cf1) status_small_wait_pane_g1

0xe3a8,	// (0x00010fe2) status_small_wait_pane_g2

0x0001,

0xf8e1,	// (0x0001251b) status_small_wait_pane_g

0xb515,	// (0x0000e14f) navi_navi_icon_text_pane

0x1bf5,	// (0x0000482f) navi_navi_pane_g1_ParamLimits

0x1bf5,	// (0x0000482f) navi_navi_pane_g1

0x1c07,	// (0x00004841) navi_navi_pane_g2_ParamLimits

0x1c07,	// (0x00004841) navi_navi_pane_g2

0x0001,

0xf8af,	// (0x000124e9) navi_navi_pane_g_ParamLimits

0xf8af,	// (0x000124e9) navi_navi_pane_g

0x1c19,	// (0x00004853) navi_navi_tabs_pane

0x1c22,	// (0x0000485c) navi_navi_text_pane

0xb515,	// (0x0000e14f) navi_navi_volume_pane

0x1bc9,	// (0x00004803) navi_text_pane_t1

0x1bbd,	// (0x000047f7) navi_icon_pane_g1

0x1b10,	// (0x0000474a) navi_navi_text_pane_t1

0xb501,	// (0x0000e13b) navi_navi_volume_pane_g1

0x1b07,	// (0x00004741) volume_small_pane

0x1a65,	// (0x0000469f) navi_navi_icon_text_pane_g1

0xb465,	// (0x0000e09f) navi_navi_icon_text_pane_t1

0xf11a,	// (0x00011d54) navi_tabs_2_long_pane

0xf11a,	// (0x00011d54) navi_tabs_2_pane

0xf11a,	// (0x00011d54) navi_tabs_3_long_pane

0xf11a,	// (0x00011d54) navi_tabs_3_pane

0xf11a,	// (0x00011d54) navi_tabs_4_pane

0x19c4,	// (0x000045fe) tabs_2_active_pane_ParamLimits

0x19c4,	// (0x000045fe) tabs_2_active_pane

0x19d4,	// (0x0000460e) tabs_2_passive_pane_ParamLimits

0x19d4,	// (0x0000460e) tabs_2_passive_pane

0x1992,	// (0x000045cc) tabs_3_active_pane_ParamLimits

0x1992,	// (0x000045cc) tabs_3_active_pane

0x19a2,	// (0x000045dc) tabs_3_passive_pane_ParamLimits

0x19a2,	// (0x000045dc) tabs_3_passive_pane

0x19b3,	// (0x000045ed) tabs_3_passive_pane_cp_ParamLimits

0x19b3,	// (0x000045ed) tabs_3_passive_pane_cp

0x194e,	// (0x00004588) tabs_4_active_pane_ParamLimits

0x194e,	// (0x00004588) tabs_4_active_pane

0x195f,	// (0x00004599) tabs_4_passive_pane_ParamLimits

0x195f,	// (0x00004599) tabs_4_passive_pane

0x1970,	// (0x000045aa) tabs_4_passive_pane_cp_ParamLimits

0x1970,	// (0x000045aa) tabs_4_passive_pane_cp

0x1981,	// (0x000045bb) tabs_4_passive_pane_cp2_ParamLimits

0x1981,	// (0x000045bb) tabs_4_passive_pane_cp2

0x192a,	// (0x00004564) tabs_2_long_active_pane_ParamLimits

0x192a,	// (0x00004564) tabs_2_long_active_pane

0x193c,	// (0x00004576) tabs_2_long_passive_pane_ParamLimits

0x193c,	// (0x00004576) tabs_2_long_passive_pane

0x18e5,	// (0x0000451f) tabs_3_long_active_pane_ParamLimits

0x18e5,	// (0x0000451f) tabs_3_long_active_pane

0x18fe,	// (0x00004538) tabs_3_long_passive_pane_ParamLimits

0x18fe,	// (0x00004538) tabs_3_long_passive_pane

0x1911,	// (0x0000454b) tabs_3_long_passive_pane_cp_ParamLimits

0x1911,	// (0x0000454b) tabs_3_long_passive_pane_cp

0x188b,	// (0x000044c5) volume_small_pane_g1

0x1894,	// (0x000044ce) volume_small_pane_g2

0x189d,	// (0x000044d7) volume_small_pane_g3

0x18a6,	// (0x000044e0) volume_small_pane_g4

0x18af,	// (0x000044e9) volume_small_pane_g5

0x18b8,	// (0x000044f2) volume_small_pane_g6

0x18c1,	// (0x000044fb) volume_small_pane_g7

0x18ca,	// (0x00004504) volume_small_pane_g8

0x18d3,	// (0x0000450d) volume_small_pane_g9

0x18dc,	// (0x00004516) volume_small_pane_g10

0x0009,

0xf87b,	// (0x000124b5) volume_small_pane_g

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp2_ParamLimits

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp2

0x9128,	// (0x0000bd62) tabs_3_active_pane_g1

0x9130,	// (0x0000bd6a) tabs_3_active_pane_t1

0xe14f,	// (0x00010d89) bg_passive_tab_pane_cp2_ParamLimits

0xe14f,	// (0x00010d89) bg_passive_tab_pane_cp2

0x9128,	// (0x0000bd62) tabs_3_passive_pane_g1

0x9130,	// (0x0000bd6a) tabs_3_passive_pane_t1

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp3_ParamLimits

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp3

0x9142,	// (0x0000bd7c) tabs_4_active_pane_g1

0x914a,	// (0x0000bd84) tabs_4_active_pane_t1

0xe14f,	// (0x00010d89) bg_passive_tab_pane_cp3_ParamLimits

0xe14f,	// (0x00010d89) bg_passive_tab_pane_cp3

0x9142,	// (0x0000bd7c) tabs_4_1_passive_pane_g1

0x914a,	// (0x0000bd84) tabs_4_1_passive_pane_t1

0xf47b,	// (0x000120b5) list_highlight_pane_cp2

0xb7bc,	// (0x0000e3f6) list_set_pane_ParamLimits

0xb7bc,	// (0x0000e3f6) list_set_pane

0xb856,	// (0x0000e490) main_pane_set_t1_ParamLimits

0xb856,	// (0x0000e490) main_pane_set_t1

0xb876,	// (0x0000e4b0) main_pane_set_t2_ParamLimits

0xb876,	// (0x0000e4b0) main_pane_set_t2

0xb88a,	// (0x0000e4c4) main_pane_set_t3_ParamLimits

0xb88a,	// (0x0000e4c4) main_pane_set_t3

0xb89c,	// (0x0000e4d6) main_pane_set_t4_ParamLimits

0xb89c,	// (0x0000e4d6) main_pane_set_t4

0x0003,

0xf94b,	// (0x00012585) main_pane_set_t_ParamLimits

0xf94b,	// (0x00012585) main_pane_set_t

0xb8ae,	// (0x0000e4e8) setting_code_pane

0xb8b8,	// (0x0000e4f2) setting_slider_graphic_pane

0xb8b8,	// (0x0000e4f2) setting_slider_pane

0xb8b8,	// (0x0000e4f2) setting_text_pane

0xb8b8,	// (0x0000e4f2) setting_volume_pane

0x915c,	// (0x0000bd96) volume_set_pane

0xe15d,	// (0x00010d97) bg_set_opt_pane_cp

0x9164,	// (0x0000bd9e) setting_slider_pane_t1

0x917d,	// (0x0000bdb7) setting_slider_pane_t2

0x9197,	// (0x0000bdd1) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00012171) setting_slider_pane_t

0x91af,	// (0x0000bde9) slider_set_pane

0xe0e1,	// (0x00010d1b) bg_set_opt_pane_cp2

0xe16b,	// (0x00010da5) setting_slider_graphic_pane_g1

0x91c5,	// (0x0000bdff) setting_slider_graphic_pane_t1

0x91d5,	// (0x0000be0f) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00012178) setting_slider_graphic_pane_t

0x91e5,	// (0x0000be1f) slider_set_pane_cp

0xe0e1,	// (0x00010d1b) input_focus_pane_cp1

0x21b7,	// (0x00004df1) list_set_text_pane

0xe0b7,	// (0x00010cf1) setting_text_pane_g1

0xe0e1,	// (0x00010d1b) input_focus_pane_cp2

0xe0b7,	// (0x00010cf1) setting_code_pane_g1

0xe174,	// (0x00010dae) setting_code_pane_t1

0xe182,	// (0x00010dbc) set_text_pane_t1_ParamLimits

0xe182,	// (0x00010dbc) set_text_pane_t1

0xe645,	// (0x0001127f) set_opt_bg_pane_g1

0xe64d,	// (0x00011287) set_opt_bg_pane_g2

0xb771,	// (0x0000e3ab) set_opt_bg_pane_g3

0xe65d,	// (0x00011297) set_opt_bg_pane_g4

0xe665,	// (0x0001129f) set_opt_bg_pane_g5

0xe66d,	// (0x000112a7) set_opt_bg_pane_g6

0xb77b,	// (0x0000e3b5) set_opt_bg_pane_g7

0xb783,	// (0x0000e3bd) set_opt_bg_pane_g8

0xb78d,	// (0x0000e3c7) set_opt_bg_pane_g9

0x0008,

0xf938,	// (0x00012572) set_opt_bg_pane_g

0xb70c,	// (0x0000e346) slider_set_pane_g1

0x212d,	// (0x00004d67) slider_set_pane_g2

0x0006,

0xf929,	// (0x00012563) slider_set_pane_g

0xb61f,	// (0x0000e259) volume_set_pane_g1

0xb627,	// (0x0000e261) volume_set_pane_g2

0xb62f,	// (0x0000e269) volume_set_pane_g3

0xb637,	// (0x0000e271) volume_set_pane_g4

0xb63f,	// (0x0000e279) volume_set_pane_g5

0xb647,	// (0x0000e281) volume_set_pane_g6

0xb64f,	// (0x0000e289) volume_set_pane_g7

0xb657,	// (0x0000e291) volume_set_pane_g8

0xb65f,	// (0x0000e299) volume_set_pane_g9

0xb667,	// (0x0000e2a1) volume_set_pane_g10

0x0009,

0xf901,	// (0x0001253b) volume_set_pane_g

0x91ed,	// (0x0000be27) indicator_pane_ParamLimits

0x91ed,	// (0x0000be27) indicator_pane

0x9215,	// (0x0000be4f) main_idle_pane_g2_ParamLimits

0x9215,	// (0x0000be4f) main_idle_pane_g2

0x924d,	// (0x0000be87) main_pane_idle_g1_ParamLimits

0x924d,	// (0x0000be87) main_pane_idle_g1

0xe19c,	// (0x00010dd6) popup_clock_digital_analogue_window_ParamLimits

0xe19c,	// (0x00010dd6) popup_clock_digital_analogue_window

0x9274,	// (0x0000beae) soft_indicator_pane_ParamLimits

0x9274,	// (0x0000beae) soft_indicator_pane

0x9298,	// (0x0000bed2) wallpaper_pane_ParamLimits

0x9298,	// (0x0000bed2) wallpaper_pane

0xe0b7,	// (0x00010cf1) wallpaper_pane_g1

0x92aa,	// (0x0000bee4) indicator_pane_g1_ParamLimits

0x92aa,	// (0x0000bee4) indicator_pane_g1

0x2734,	// (0x0000536e) navi_navi_icon_text_pane_srt_g1

0xe1ca,	// (0x00010e04) soft_indicator_pane_t1

0xe1e4,	// (0x00010e1e) aid_ps_area_pane

0x92c0,	// (0x0000befa) aid_ps_clock_pane

0xe1f5,	// (0x00010e2f) aid_ps_indicator_pane

0xe201,	// (0x00010e3b) indicator_ps_pane_ParamLimits

0xe201,	// (0x00010e3b) indicator_ps_pane

0xe210,	// (0x00010e4a) power_save_pane_g1_ParamLimits

0xe210,	// (0x00010e4a) power_save_pane_g1

0xe21c,	// (0x00010e56) power_save_pane_g2_ParamLimits

0xe21c,	// (0x00010e56) power_save_pane_g2

0xe0c1,	// (0x00010cfb) aid_navinavi_width_pane

0xe1e4,	// (0x00010e1e) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0001217d) power_save_pane_g_ParamLimits

0xf543,	// (0x0001217d) power_save_pane_g

0xe22a,	// (0x00010e64) power_save_pane_t1_ParamLimits

0xe22a,	// (0x00010e64) power_save_pane_t1

0x92c0,	// (0x0000befa) aid_ps_clock_pane_ParamLimits

0xe1f5,	// (0x00010e2f) aid_ps_indicator_pane_ParamLimits

0xe23c,	// (0x00010e76) power_save_pane_t4_ParamLimits

0xe23c,	// (0x00010e76) power_save_pane_t4

0x0001,

0xf548,	// (0x00012182) power_save_pane_t_ParamLimits

0xf548,	// (0x00012182) power_save_pane_t

0xe266,	// (0x00010ea0) power_save_t3_ParamLimits

0xe266,	// (0x00010ea0) power_save_t3

0xe251,	// (0x00010e8b) power_save_t2_ParamLimits

0xe251,	// (0x00010e8b) power_save_t2

0xe27b,	// (0x00010eb5) indicator_ps_pane_g1

0x92ce,	// (0x0000bf08) ai_gene_pane_ParamLimits

0x92ce,	// (0x0000bf08) ai_gene_pane

0x92e5,	// (0x0000bf1f) ai_links_pane_ParamLimits

0x92e5,	// (0x0000bf1f) ai_links_pane

0x92fd,	// (0x0000bf37) indicator_pane_cp1_ParamLimits

0x92fd,	// (0x0000bf37) indicator_pane_cp1

0x930c,	// (0x0000bf46) main_pane_idle_g1_cp_ParamLimits

0x930c,	// (0x0000bf46) main_pane_idle_g1_cp

0x9324,	// (0x0000bf5e) popup_ai_links_title_window

0x932d,	// (0x0000bf67) soft_indicator_pane_cp1_ParamLimits

0x932d,	// (0x0000bf67) soft_indicator_pane_cp1

0x1eb4,	// (0x00004aee) ai_links_pane_g1

0x1ebd,	// (0x00004af7) grid_ai_links_pane

0xb5b3,	// (0x0000e1ed) ai_gene_pane_1

0x1ea2,	// (0x00004adc) ai_gene_pane_2

0x1eab,	// (0x00004ae5) list_highlight_pane_cp4

0xb58f,	// (0x0000e1c9) cell_ai_link_pane_ParamLimits

0xb58f,	// (0x0000e1c9) cell_ai_link_pane

0x1e73,	// (0x00004aad) cell_ai_link_pane_g1

0xe3a8,	// (0x00010fe2) cell_ai_link_pane_g2

0x0001,

0xf8dc,	// (0x00012516) cell_ai_link_pane_g

0xe0e1,	// (0x00010d1b) grid_highlight_cp2

0xe0e1,	// (0x00010d1b) bg_popup_sub_pane_cp1

0xe292,	// (0x00010ecc) popup_ai_links_title_window_t1

0x1dc3,	// (0x000049fd) ai_gene_pane_1_g1_ParamLimits

0x1dc3,	// (0x000049fd) ai_gene_pane_1_g1

0x1dcf,	// (0x00004a09) ai_gene_pane_1_g2_ParamLimits

0x1dcf,	// (0x00004a09) ai_gene_pane_1_g2

0x0001,

0xf8d2,	// (0x0001250c) ai_gene_pane_1_g_ParamLimits

0xf8d2,	// (0x0001250c) ai_gene_pane_1_g

0x1ddc,	// (0x00004a16) ai_gene_pane_1_t1_ParamLimits

0x1ddc,	// (0x00004a16) ai_gene_pane_1_t1

0x1e10,	// (0x00004a4a) grid_ai_soft_ind_pane

0x1dae,	// (0x000049e8) ai_gene_pane_2_t1_ParamLimits

0x1dae,	// (0x000049e8) ai_gene_pane_2_t1

0x9341,	// (0x0000bf7b) main_pane_empty_t1_ParamLimits

0x9341,	// (0x0000bf7b) main_pane_empty_t1

0x9359,	// (0x0000bf93) main_pane_empty_t2_ParamLimits

0x9359,	// (0x0000bf93) main_pane_empty_t2

0x936e,	// (0x0000bfa8) main_pane_empty_t3_ParamLimits

0x936e,	// (0x0000bfa8) main_pane_empty_t3

0x9380,	// (0x0000bfba) main_pane_empty_t4_ParamLimits

0x9380,	// (0x0000bfba) main_pane_empty_t4

0x9392,	// (0x0000bfcc) main_pane_empty_t5_ParamLimits

0x9392,	// (0x0000bfcc) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00012187) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00012187) main_pane_empty_t

0xe6ca,	// (0x00011304) bg_popup_window_pane_ParamLimits

0xe6ca,	// (0x00011304) bg_popup_window_pane

0xb509,	// (0x0000e143) find_popup_pane_cp2_ParamLimits

0xb509,	// (0x0000e143) find_popup_pane_cp2

0x1b2a,	// (0x00004764) heading_pane_ParamLimits

0x1b2a,	// (0x00004764) heading_pane

0xe0e1,	// (0x00010d1b) bg_popup_sub_pane

0xb482,	// (0x0000e0bc) bg_popup_window_pane_g1_ParamLimits

0xb482,	// (0x0000e0bc) bg_popup_window_pane_g1

0xb491,	// (0x0000e0cb) bg_popup_window_pane_g2_ParamLimits

0xb491,	// (0x0000e0cb) bg_popup_window_pane_g2

0xb49d,	// (0x0000e0d7) bg_popup_window_pane_g3_ParamLimits

0xb49d,	// (0x0000e0d7) bg_popup_window_pane_g3

0xb4a9,	// (0x0000e0e3) bg_popup_window_pane_g4_ParamLimits

0xb4a9,	// (0x0000e0e3) bg_popup_window_pane_g4

0xb4b8,	// (0x0000e0f2) bg_popup_window_pane_g5_ParamLimits

0xb4b8,	// (0x0000e0f2) bg_popup_window_pane_g5

0xb4c8,	// (0x0000e102) bg_popup_window_pane_g6_ParamLimits

0xb4c8,	// (0x0000e102) bg_popup_window_pane_g6

0xb4d4,	// (0x0000e10e) bg_popup_window_pane_g7_ParamLimits

0xb4d4,	// (0x0000e10e) bg_popup_window_pane_g7

0xb4e3,	// (0x0000e11d) bg_popup_window_pane_g8_ParamLimits

0xb4e3,	// (0x0000e11d) bg_popup_window_pane_g8

0xb4f2,	// (0x0000e12c) bg_popup_window_pane_g9_ParamLimits

0xb4f2,	// (0x0000e12c) bg_popup_window_pane_g9

0x1af3,	// (0x0000472d) bg_popup_window_pane_g10_ParamLimits

0x1af3,	// (0x0000472d) bg_popup_window_pane_g10

0x0009,

0xf89a,	// (0x000124d4) bg_popup_window_pane_g_ParamLimits

0xf89a,	// (0x000124d4) bg_popup_window_pane_g

0x1a1c,	// (0x00004656) bg_popup_heading_pane_ParamLimits

0x1a1c,	// (0x00004656) bg_popup_heading_pane

0x2677,	// (0x000052b1) tabs_4_passive_pane_cp_srt_ParamLimits

0x2677,	// (0x000052b1) tabs_4_passive_pane_cp_srt

0x2689,	// (0x000052c3) tabs_4_passive_pane_srt_ParamLimits

0x1a30,	// (0x0000466a) heading_pane_g2

0x2689,	// (0x000052c3) tabs_4_passive_pane_srt

0x0b84,	// (0x000037be) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0b84,	// (0x000037be) bg_passive_tab_pane_cp3_srt

0x1a38,	// (0x00004672) heading_pane_t1_ParamLimits

0x1a38,	// (0x00004672) heading_pane_t1

0x1a4f,	// (0x00004689) heading_pane_t2_ParamLimits

0x1a4f,	// (0x00004689) heading_pane_t2

0x0001,

0xf895,	// (0x000124cf) heading_pane_t_ParamLimits

0xf895,	// (0x000124cf) heading_pane_t

0x1400,	// (0x0000403a) bg_popup_heading_pane_g1

0x14af,	// (0x000040e9) bg_popup_heading_pane_g2

0x14b9,	// (0x000040f3) bg_popup_heading_pane_g3

0x14c3,	// (0x000040fd) bg_popup_heading_pane_g4

0x14cd,	// (0x00004107) bg_popup_heading_pane_g5

0x14d7,	// (0x00004111) bg_popup_heading_pane_g6

0x14df,	// (0x00004119) bg_popup_heading_pane_g7

0x14e7,	// (0x00004121) bg_popup_heading_pane_g8

0x14f1,	// (0x0000412b) bg_popup_heading_pane_g9

0x0008,

0xf851,	// (0x0001248b) bg_popup_heading_pane_g

0x09ec,	// (0x00003626) bg_popup_sub_pane_g1

0x09f4,	// (0x0000362e) bg_popup_sub_pane_g2

0x09fc,	// (0x00003636) bg_popup_sub_pane_g3

0x0a04,	// (0x0000363e) bg_popup_sub_pane_g4

0x0a0c,	// (0x00003646) bg_popup_sub_pane_g5

0x0a14,	// (0x0000364e) bg_popup_sub_pane_g6

0x0a1c,	// (0x00003656) bg_popup_sub_pane_g7

0x0a24,	// (0x0000365e) bg_popup_sub_pane_g8

0x0a2c,	// (0x00003666) bg_popup_sub_pane_g9

0x0008,

0xf82b,	// (0x00012465) bg_popup_sub_pane_g

0xe14f,	// (0x00010d89) bg_popup_window_pane_cp5_ParamLimits

0xe14f,	// (0x00010d89) bg_popup_window_pane_cp5

0xe2af,	// (0x00010ee9) popup_note_window_g1_ParamLimits

0xe2af,	// (0x00010ee9) popup_note_window_g1

0xe2bb,	// (0x00010ef5) popup_note_window_t1_ParamLimits

0xe2bb,	// (0x00010ef5) popup_note_window_t1

0xe2d1,	// (0x00010f0b) popup_note_window_t2_ParamLimits

0xe2d1,	// (0x00010f0b) popup_note_window_t2

0xe2e7,	// (0x00010f21) popup_note_window_t3_ParamLimits

0xe2e7,	// (0x00010f21) popup_note_window_t3

0xe2fd,	// (0x00010f37) popup_note_window_t4_ParamLimits

0xe2fd,	// (0x00010f37) popup_note_window_t4

0xe325,	// (0x00010f5f) popup_note_window_t5_ParamLimits

0xe325,	// (0x00010f5f) popup_note_window_t5

0x0004,

0xf558,	// (0x00012192) popup_note_window_t_ParamLimits

0xf558,	// (0x00012192) popup_note_window_t

0xe349,	// (0x00010f83) bg_popup_window_pane_cp6_ParamLimits

0xe349,	// (0x00010f83) bg_popup_window_pane_cp6

0x137c,	// (0x00003fb6) popup_note_image_window_g1_ParamLimits

0x137c,	// (0x00003fb6) popup_note_image_window_g1

0xb327,	// (0x0000df61) popup_note_image_window_g2_ParamLimits

0xb327,	// (0x0000df61) popup_note_image_window_g2

0x0001,

0xf81f,	// (0x00012459) popup_note_image_window_g_ParamLimits

0xf81f,	// (0x00012459) popup_note_image_window_g

0x13a1,	// (0x00003fdb) popup_note_image_window_t1_ParamLimits

0x13a1,	// (0x00003fdb) popup_note_image_window_t1

0x13ba,	// (0x00003ff4) popup_note_image_window_t2_ParamLimits

0x13ba,	// (0x00003ff4) popup_note_image_window_t2

0x13d3,	// (0x0000400d) popup_note_image_window_t3_ParamLimits

0x13d3,	// (0x0000400d) popup_note_image_window_t3

0x0002,

0xf824,	// (0x0001245e) popup_note_image_window_t_ParamLimits

0xf824,	// (0x0001245e) popup_note_image_window_t

0x1245,	// (0x00003e7f) bg_popup_window_pane_cp7_ParamLimits

0x1245,	// (0x00003e7f) bg_popup_window_pane_cp7

0x1275,	// (0x00003eaf) popup_note_wait_window_g1_ParamLimits

0x1275,	// (0x00003eaf) popup_note_wait_window_g1

0x1281,	// (0x00003ebb) popup_note_wait_window_g2_ParamLimits

0x1281,	// (0x00003ebb) popup_note_wait_window_g2

0x0002,

0xf80d,	// (0x00012447) popup_note_wait_window_g_ParamLimits

0xf80d,	// (0x00012447) popup_note_wait_window_g

0x1299,	// (0x00003ed3) popup_note_wait_window_t1_ParamLimits

0x1299,	// (0x00003ed3) popup_note_wait_window_t1

0xb2c8,	// (0x0000df02) popup_note_wait_window_t2_ParamLimits

0xb2c8,	// (0x0000df02) popup_note_wait_window_t2

0xb2e5,	// (0x0000df1f) popup_note_wait_window_t3_ParamLimits

0xb2e5,	// (0x0000df1f) popup_note_wait_window_t3

0xb2f8,	// (0x0000df32) popup_note_wait_window_t4_ParamLimits

0xb2f8,	// (0x0000df32) popup_note_wait_window_t4

0x0004,

0xf814,	// (0x0001244e) popup_note_wait_window_t_ParamLimits

0xf814,	// (0x0001244e) popup_note_wait_window_t

0x1315,	// (0x00003f4f) wait_bar_pane_ParamLimits

0x1315,	// (0x00003f4f) wait_bar_pane

0xe0e1,	// (0x00010d1b) wait_anim_pane

0xe0e1,	// (0x00010d1b) wait_border_pane

0xe0b7,	// (0x00010cf1) wait_anim_pane_g1

0xe0b7,	// (0x00010cf1) wait_anim_pane_g2

0x0001,

0xf6cd,	// (0x00012307) wait_anim_pane_g

0x11f1,	// (0x00003e2b) wait_border_pane_g1

0x11fc,	// (0x00003e36) wait_border_pane_g2

0x1205,	// (0x00003e3f) wait_border_pane_g3

0x0002,

0xf806,	// (0x00012440) wait_border_pane_g

0x105c,	// (0x00003c96) bg_popup_window_pane_cp16_ParamLimits

0x105c,	// (0x00003c96) bg_popup_window_pane_cp16

0xb278,	// (0x0000deb2) indicator_popup_pane_cp4_ParamLimits

0xb278,	// (0x0000deb2) indicator_popup_pane_cp4

0x1170,	// (0x00003daa) popup_query_data_window_t1_ParamLimits

0x1170,	// (0x00003daa) popup_query_data_window_t1

0x1182,	// (0x00003dbc) popup_query_data_window_t2_ParamLimits

0x1182,	// (0x00003dbc) popup_query_data_window_t2

0x119b,	// (0x00003dd5) popup_query_data_window_t3_ParamLimits

0x119b,	// (0x00003dd5) popup_query_data_window_t3

0x0002,

0xf7ff,	// (0x00012439) popup_query_data_window_t_ParamLimits

0xf7ff,	// (0x00012439) popup_query_data_window_t

0xb28c,	// (0x0000dec6) query_popup_data_pane_ParamLimits

0xb28c,	// (0x0000dec6) query_popup_data_pane

0xb2a0,	// (0x0000deda) query_popup_data_pane_cp1_ParamLimits

0xb2a0,	// (0x0000deda) query_popup_data_pane_cp1

0x105c,	// (0x00003c96) bg_popup_window_pane_cp10_ParamLimits

0x105c,	// (0x00003c96) bg_popup_window_pane_cp10

0xb1f3,	// (0x0000de2d) indicator_popup_pane_ParamLimits

0xb1f3,	// (0x0000de2d) indicator_popup_pane

0xb215,	// (0x0000de4f) popup_query_code_window_t1_ParamLimits

0xb215,	// (0x0000de4f) popup_query_code_window_t1

0xb22f,	// (0x0000de69) popup_query_code_window_t2_ParamLimits

0xb22f,	// (0x0000de69) popup_query_code_window_t2

0x1113,	// (0x00003d4d) popup_query_code_window_t3_ParamLimits

0x1113,	// (0x00003d4d) popup_query_code_window_t3

0x0002,

0xf7f8,	// (0x00012432) popup_query_code_window_t_ParamLimits

0xf7f8,	// (0x00012432) popup_query_code_window_t

0x1142,	// (0x00003d7c) query_popup_pane_ParamLimits

0x1142,	// (0x00003d7c) query_popup_pane

0xe349,	// (0x00010f83) bg_popup_window_pane_cp15_ParamLimits

0xe349,	// (0x00010f83) bg_popup_window_pane_cp15

0x93ca,	// (0x0000c004) indicator_popup_pane_cp1_ParamLimits

0x93ca,	// (0x0000c004) indicator_popup_pane_cp1

0x93dd,	// (0x0000c017) indicator_popup_pane_cp2_ParamLimits

0x93dd,	// (0x0000c017) indicator_popup_pane_cp2

0x93f0,	// (0x0000c02a) popup_query_data_code_window_g1_ParamLimits

0x93f0,	// (0x0000c02a) popup_query_data_code_window_g1

0xe367,	// (0x00010fa1) popup_query_data_code_window_t1_ParamLimits

0xe367,	// (0x00010fa1) popup_query_data_code_window_t1

0xe379,	// (0x00010fb3) popup_query_data_code_window_t2_ParamLimits

0xe379,	// (0x00010fb3) popup_query_data_code_window_t2

0x9403,	// (0x0000c03d) popup_query_data_code_window_t3_ParamLimits

0x9403,	// (0x0000c03d) popup_query_data_code_window_t3

0x9419,	// (0x0000c053) popup_query_data_code_window_t4_ParamLimits

0x9419,	// (0x0000c053) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0001219d) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0001219d) popup_query_data_code_window_t

0xf0bc,	// (0x00011cf6) list_single_midp_graphic_pane_g3

0x9431,	// (0x0000c06b) query_popup_data_pane_cp2_ParamLimits

0x9444,	// (0x0000c07e) query_popup_pane_cp2_ParamLimits

0x9444,	// (0x0000c07e) query_popup_pane_cp2

0xe0e1,	// (0x00010d1b) bg_popup_window_pane_cp11

0x1040,	// (0x00003c7a) heading_pane_cp5

0x1048,	// (0x00003c82) listscroll_popup_info_pane

0xe0e1,	// (0x00010d1b) input_focus_pane_cp3

0xe38b,	// (0x00010fc5) query_popup_pane_t1

0xe399,	// (0x00010fd3) list_popup_info_pane_ParamLimits

0xe399,	// (0x00010fd3) list_popup_info_pane

0xe3a8,	// (0x00010fe2) listscroll_popup_info_pane_g1

0xe3b0,	// (0x00010fea) scroll_pane_cp7

0x9457,	// (0x0000c091) popup_info_list_pane_t1_ParamLimits

0x9457,	// (0x0000c091) popup_info_list_pane_t1

0x9471,	// (0x0000c0ab) popup_info_list_pane_t2_ParamLimits

0x9471,	// (0x0000c0ab) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x000121a6) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x000121a6) popup_info_list_pane_t

0xe0e1,	// (0x00010d1b) bg_popup_window_pane_cp12

0xbaf4,	// (0x0000e72e) find_popup_pane

0xe15d,	// (0x00010d97) bg_popup_window_pane_cp3

0xe3ba,	// (0x00010ff4) heading_pane_cp3

0xe3c9,	// (0x00011003) listscroll_popup_graphic_pane

0xe0e1,	// (0x00010d1b) bg_popup_window_pane_cp4

0x94db,	// (0x0000c115) heading_pane_cp4

0xe3d9,	// (0x00011013) listscroll_popup_colour_pane

0x94e5,	// (0x0000c11f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x94e5,	// (0x0000c11f) cell_large_graphic_colour_none_popup_pane

0x94f9,	// (0x0000c133) grid_large_graphic_colour_popup_pane_ParamLimits

0x94f9,	// (0x0000c133) grid_large_graphic_colour_popup_pane

0x951d,	// (0x0000c157) listscroll_popup_colour_pane_g1_ParamLimits

0x951d,	// (0x0000c157) listscroll_popup_colour_pane_g1

0x9534,	// (0x0000c16e) listscroll_popup_colour_pane_g2_ParamLimits

0x9534,	// (0x0000c16e) listscroll_popup_colour_pane_g2

0x9548,	// (0x0000c182) listscroll_popup_colour_pane_g3_ParamLimits

0x9548,	// (0x0000c182) listscroll_popup_colour_pane_g3

0x9558,	// (0x0000c192) listscroll_popup_colour_pane_g4_ParamLimits

0x9558,	// (0x0000c192) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x000121ab) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x000121ab) listscroll_popup_colour_pane_g

0xe3e1,	// (0x0001101b) scroll_pane_cp6_ParamLimits

0xe3e1,	// (0x0001101b) scroll_pane_cp6

0x9568,	// (0x0000c1a2) cell_large_graphic_colour_popup_pane_ParamLimits

0x9568,	// (0x0000c1a2) cell_large_graphic_colour_popup_pane

0x9587,	// (0x0000c1c1) cell_large_graphic_colour_none_popup_pane_t1

0xe0e1,	// (0x00010d1b) grid_highlight_pane_cp5

0xe3f3,	// (0x0001102d) cell_large_graphic_colour_popup_pane_g1

0xe3fb,	// (0x00011035) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x000121b4) cell_large_graphic_colour_popup_pane_g

0xe403,	// (0x0001103d) cell_large_graphic_colour_popup_pane_g2_copy1

0xe40c,	// (0x00011046) grid_highlight_pane_cp4

0xe414,	// (0x0001104e) bg_popup_window_pane_cp8_ParamLimits

0xe414,	// (0x0001104e) bg_popup_window_pane_cp8

0x9596,	// (0x0000c1d0) popup_snote_single_text_window_g1_ParamLimits

0x9596,	// (0x0000c1d0) popup_snote_single_text_window_g1

0x95a8,	// (0x0000c1e2) popup_snote_single_text_window_t1_ParamLimits

0x95a8,	// (0x0000c1e2) popup_snote_single_text_window_t1

0x95bb,	// (0x0000c1f5) popup_snote_single_text_window_t2_ParamLimits

0x95bb,	// (0x0000c1f5) popup_snote_single_text_window_t2

0x95ce,	// (0x0000c208) popup_snote_single_text_window_t3_ParamLimits

0x95ce,	// (0x0000c208) popup_snote_single_text_window_t3

0x9607,	// (0x0000c241) popup_snote_single_text_window_t4_ParamLimits

0x9607,	// (0x0000c241) popup_snote_single_text_window_t4

0x963b,	// (0x0000c275) popup_snote_single_text_window_t5_ParamLimits

0x963b,	// (0x0000c275) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x000121b9) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x000121b9) popup_snote_single_text_window_t

0xe42f,	// (0x00011069) bg_popup_window_pane_cp9_ParamLimits

0xe42f,	// (0x00011069) bg_popup_window_pane_cp9

0x9596,	// (0x0000c1d0) popup_snote_single_graphic_window_g1_ParamLimits

0x9596,	// (0x0000c1d0) popup_snote_single_graphic_window_g1

0xe43d,	// (0x00011077) popup_snote_single_graphic_window_g2_ParamLimits

0xe43d,	// (0x00011077) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x000121c4) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x000121c4) popup_snote_single_graphic_window_g

0xe449,	// (0x00011083) popup_snote_single_graphic_window_t1_ParamLimits

0xe449,	// (0x00011083) popup_snote_single_graphic_window_t1

0xe45c,	// (0x00011096) popup_snote_single_graphic_window_t2_ParamLimits

0xe45c,	// (0x00011096) popup_snote_single_graphic_window_t2

0x95ce,	// (0x0000c208) popup_snote_single_graphic_window_t3_ParamLimits

0x95ce,	// (0x0000c208) popup_snote_single_graphic_window_t3

0x9607,	// (0x0000c241) popup_snote_single_graphic_window_t4_ParamLimits

0x9607,	// (0x0000c241) popup_snote_single_graphic_window_t4

0x966a,	// (0x0000c2a4) popup_snote_single_graphic_window_t5_ParamLimits

0x966a,	// (0x0000c2a4) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x000121c9) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x000121c9) popup_snote_single_graphic_window_t

0x25f5,	// (0x0000522f) grid_graphic_popup_pane_ParamLimits

0x25f5,	// (0x0000522f) grid_graphic_popup_pane

0x261f,	// (0x00005259) listscroll_popup_graphic_pane_g1_ParamLimits

0x261f,	// (0x00005259) listscroll_popup_graphic_pane_g1

0xba3f,	// (0x0000e679) listscroll_popup_graphic_pane_g2_ParamLimits

0xba3f,	// (0x0000e679) listscroll_popup_graphic_pane_g2

0x0001,

0xf975,	// (0x000125af) listscroll_popup_graphic_pane_g_ParamLimits

0xf975,	// (0x000125af) listscroll_popup_graphic_pane_g

0x2647,	// (0x00005281) scroll_pane_cp5

0xb9fa,	// (0x0000e634) cell_graphic_popup_pane_ParamLimits

0xb9fa,	// (0x0000e634) cell_graphic_popup_pane

0x2565,	// (0x0000519f) cell_graphic_popup_pane_g1

0x256d,	// (0x000051a7) cell_graphic_popup_pane_g2

0xe403,	// (0x0001103d) cell_graphic_popup_pane_g3

0x0002,

0xf96e,	// (0x000125a8) cell_graphic_popup_pane_g

0x2576,	// (0x000051b0) cell_graphic_popup_pane_t2

0xe40c,	// (0x00011046) grid_highlight_pane_cp3

0xe481,	// (0x000110bb) list_gen_pane_ParamLimits

0xe481,	// (0x000110bb) list_gen_pane

0xe4a9,	// (0x000110e3) scroll_pane

0xb964,	// (0x0000e59e) bg_list_pane_g1_ParamLimits

0xb964,	// (0x0000e59e) bg_list_pane_g1

0xb97f,	// (0x0000e5b9) bg_list_pane_g2_ParamLimits

0xb97f,	// (0x0000e5b9) bg_list_pane_g2

0xb992,	// (0x0000e5cc) bg_list_pane_g3_ParamLimits

0xb992,	// (0x0000e5cc) bg_list_pane_g3

0xb9a4,	// (0x0000e5de) bg_list_pane_g4_ParamLimits

0xb9a4,	// (0x0000e5de) bg_list_pane_g4

0xb9b6,	// (0x0000e5f0) bg_list_pane_g5_ParamLimits

0xb9b6,	// (0x0000e5f0) bg_list_pane_g5

0x0004,

0xf963,	// (0x0001259d) bg_list_pane_g_ParamLimits

0xf963,	// (0x0001259d) bg_list_pane_g

0xb907,	// (0x0000e541) list_double2_graphic_large_graphic_pane_ParamLimits

0xb907,	// (0x0000e541) list_double2_graphic_large_graphic_pane

0xb907,	// (0x0000e541) list_double2_graphic_pane_ParamLimits

0xb907,	// (0x0000e541) list_double2_graphic_pane

0xb907,	// (0x0000e541) list_double2_large_graphic_pane_ParamLimits

0xb907,	// (0x0000e541) list_double2_large_graphic_pane

0xb91a,	// (0x0000e554) list_double2_pane_ParamLimits

0xb91a,	// (0x0000e554) list_double2_pane

0xb907,	// (0x0000e541) list_double_graphic_heading_pane_ParamLimits

0xb907,	// (0x0000e541) list_double_graphic_heading_pane

0xb907,	// (0x0000e541) list_double_graphic_pane_ParamLimits

0xb907,	// (0x0000e541) list_double_graphic_pane

0xb907,	// (0x0000e541) list_double_heading_pane_ParamLimits

0xb907,	// (0x0000e541) list_double_heading_pane

0xb907,	// (0x0000e541) list_double_large_graphic_pane_ParamLimits

0xb907,	// (0x0000e541) list_double_large_graphic_pane

0xb907,	// (0x0000e541) list_double_number_pane_ParamLimits

0xb907,	// (0x0000e541) list_double_number_pane

0xb907,	// (0x0000e541) list_double_pane_ParamLimits

0xb907,	// (0x0000e541) list_double_pane

0xb907,	// (0x0000e541) list_double_time_pane_ParamLimits

0xb907,	// (0x0000e541) list_double_time_pane

0xb907,	// (0x0000e541) list_setting_number_pane_ParamLimits

0xb907,	// (0x0000e541) list_setting_number_pane

0xb907,	// (0x0000e541) list_setting_pane_ParamLimits

0xb907,	// (0x0000e541) list_setting_pane

0x9c3b,	// (0x0000c875) list_single_2graphic_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_2graphic_pane

0x9c3b,	// (0x0000c875) list_single_graphic_heading_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_graphic_heading_pane

0x9c3b,	// (0x0000c875) list_single_graphic_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_graphic_pane

0x9c3b,	// (0x0000c875) list_single_heading_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_heading_pane

0xb907,	// (0x0000e541) list_single_large_graphic_pane_ParamLimits

0xb907,	// (0x0000e541) list_single_large_graphic_pane

0x9c3b,	// (0x0000c875) list_single_number_heading_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_number_heading_pane

0x9c3b,	// (0x0000c875) list_single_number_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_number_pane

0x9c3b,	// (0x0000c875) list_single_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_pane

0xe0e1,	// (0x00010d1b) list_highlight_pane_cp1

0xee4d,	// (0x00011a87) list_single_pane_g1_ParamLimits

0xee4d,	// (0x00011a87) list_single_pane_g1

0x0886,	// (0x000034c0) list_single_pane_g2_ParamLimits

0x0886,	// (0x000034c0) list_single_pane_g2

0x0001,

0xf5a1,	// (0x000121db) list_single_pane_g_ParamLimits

0xf5a1,	// (0x000121db) list_single_pane_g

0x4718,	// (0x00007352) list_single_pane_t1_ParamLimits

0x4718,	// (0x00007352) list_single_pane_t1

0xee4d,	// (0x00011a87) list_single_number_pane_g1_ParamLimits

0xee4d,	// (0x00011a87) list_single_number_pane_g1

0x0886,	// (0x000034c0) list_single_number_pane_g2_ParamLimits

0x0886,	// (0x000034c0) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x000121db) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x000121db) list_single_number_pane_g

0x4718,	// (0x00007352) list_single_number_pane_t1_ParamLimits

0x4718,	// (0x00007352) list_single_number_pane_t1

0xb6a7,	// (0x0000e2e1) list_single_number_pane_t2_ParamLimits

0xb6a7,	// (0x0000e2e1) list_single_number_pane_t2

0x0001,

0xf924,	// (0x0001255e) list_single_number_pane_t_ParamLimits

0xf924,	// (0x0001255e) list_single_number_pane_t

0x96a3,	// (0x0000c2dd) list_single_graphic_pane_g1_ParamLimits

0x96a3,	// (0x0000c2dd) list_single_graphic_pane_g1

0xee4d,	// (0x00011a87) list_single_graphic_pane_g2_ParamLimits

0xee4d,	// (0x00011a87) list_single_graphic_pane_g2

0x0886,	// (0x000034c0) list_single_graphic_pane_g3_ParamLimits

0x0886,	// (0x000034c0) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x000121d4) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x000121d4) list_single_graphic_pane_g

0x4718,	// (0x00007352) list_single_graphic_pane_t1_ParamLimits

0x4718,	// (0x00007352) list_single_graphic_pane_t1

0xee4d,	// (0x00011a87) list_single_heading_pane_g1_ParamLimits

0xee4d,	// (0x00011a87) list_single_heading_pane_g1

0x0886,	// (0x000034c0) list_single_heading_pane_g2_ParamLimits

0x0886,	// (0x000034c0) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x000121db) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x000121db) list_single_heading_pane_g

0x2d64,	// (0x0000599e) list_single_heading_pane_t1_ParamLimits

0x2d64,	// (0x0000599e) list_single_heading_pane_t1

0x96af,	// (0x0000c2e9) list_single_heading_pane_t2_ParamLimits

0x96af,	// (0x0000c2e9) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x000121e0) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x000121e0) list_single_heading_pane_t

0xee4d,	// (0x00011a87) list_single_number_heading_pane_g1_ParamLimits

0xee4d,	// (0x00011a87) list_single_number_heading_pane_g1

0x0886,	// (0x000034c0) list_single_number_heading_pane_g2_ParamLimits

0x0886,	// (0x000034c0) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x000121db) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x000121db) list_single_number_heading_pane_g

0x2d64,	// (0x0000599e) list_single_number_heading_pane_t1_ParamLimits

0x2d64,	// (0x0000599e) list_single_number_heading_pane_t1

0x96c1,	// (0x0000c2fb) list_single_number_heading_pane_t2_ParamLimits

0x96c1,	// (0x0000c2fb) list_single_number_heading_pane_t2

0x96d3,	// (0x0000c30d) list_single_number_heading_pane_t3_ParamLimits

0x96d3,	// (0x0000c30d) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x000121e5) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x000121e5) list_single_number_heading_pane_t

0x96e5,	// (0x0000c31f) list_single_graphic_heading_pane_g1_ParamLimits

0x96e5,	// (0x0000c31f) list_single_graphic_heading_pane_g1

0x96f1,	// (0x0000c32b) list_single_graphic_heading_pane_g4_ParamLimits

0x96f1,	// (0x0000c32b) list_single_graphic_heading_pane_g4

0x0886,	// (0x000034c0) list_single_graphic_heading_pane_g5_ParamLimits

0x0886,	// (0x000034c0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x000121ec) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x000121ec) list_single_graphic_heading_pane_g

0x2d64,	// (0x0000599e) list_single_graphic_heading_pane_t1_ParamLimits

0x2d64,	// (0x0000599e) list_single_graphic_heading_pane_t1

0x9702,	// (0x0000c33c) list_single_graphic_heading_pane_t2_ParamLimits

0x9702,	// (0x0000c33c) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x000121f3) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x000121f3) list_single_graphic_heading_pane_t

0x2dd8,	// (0x00005a12) list_single_large_graphic_pane_g1_ParamLimits

0x2dd8,	// (0x00005a12) list_single_large_graphic_pane_g1

0x2de4,	// (0x00005a1e) list_single_large_graphic_pane_g2_ParamLimits

0x2de4,	// (0x00005a1e) list_single_large_graphic_pane_g2

0x2df0,	// (0x00005a2a) list_single_large_graphic_pane_g3_ParamLimits

0x2df0,	// (0x00005a2a) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x000121f8) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x000121f8) list_single_large_graphic_pane_g

0x11fc,	// (0x00003e36) wait_border_pane_g2_copy1

0x9714,	// (0x0000c34e) list_single_large_graphic_pane_g4_cp2

0x2dfc,	// (0x00005a36) list_single_large_graphic_pane_t1_ParamLimits

0x2dfc,	// (0x00005a36) list_single_large_graphic_pane_t1

0xee59,	// (0x00011a93) list_double_pane_g1_ParamLimits

0xee59,	// (0x00011a93) list_double_pane_g1

0xe4dd,	// (0x00011117) list_double_pane_g2_ParamLimits

0xe4dd,	// (0x00011117) list_double_pane_g2

0x0001,

0xf5c5,	// (0x000121ff) list_double_pane_g_ParamLimits

0xf5c5,	// (0x000121ff) list_double_pane_g

0x971c,	// (0x0000c356) list_double_pane_t1_ParamLimits

0x971c,	// (0x0000c356) list_double_pane_t1

0x9732,	// (0x0000c36c) list_double_pane_t2_ParamLimits

0x9732,	// (0x0000c36c) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00012204) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00012204) list_double_pane_t

0x9744,	// (0x0000c37e) list_double2_pane_g1_ParamLimits

0x9744,	// (0x0000c37e) list_double2_pane_g1

0x9755,	// (0x0000c38f) list_double2_pane_g2_ParamLimits

0x9755,	// (0x0000c38f) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x00012209) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x00012209) list_double2_pane_g

0x9761,	// (0x0000c39b) list_double2_pane_t1_ParamLimits

0x9761,	// (0x0000c39b) list_double2_pane_t1

0x9777,	// (0x0000c3b1) list_double2_pane_t2_ParamLimits

0x9777,	// (0x0000c3b1) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0001220e) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0001220e) list_double2_pane_t

0xee59,	// (0x00011a93) list_double_number_pane_g1_ParamLimits

0xee59,	// (0x00011a93) list_double_number_pane_g1

0xe4dd,	// (0x00011117) list_double_number_pane_g2_ParamLimits

0xe4dd,	// (0x00011117) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x000121ff) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x000121ff) list_double_number_pane_g

0x9789,	// (0x0000c3c3) list_double_number_pane_t1_ParamLimits

0x9789,	// (0x0000c3c3) list_double_number_pane_t1

0x971c,	// (0x0000c356) list_double_number_pane_t2_ParamLimits

0x971c,	// (0x0000c356) list_double_number_pane_t2

0x9732,	// (0x0000c36c) list_double_number_pane_t3_ParamLimits

0x9732,	// (0x0000c36c) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00012213) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00012213) list_double_number_pane_t

0x979b,	// (0x0000c3d5) list_double_graphic_pane_g1_ParamLimits

0x979b,	// (0x0000c3d5) list_double_graphic_pane_g1

0x97a7,	// (0x0000c3e1) list_double_graphic_pane_g2_ParamLimits

0x97a7,	// (0x0000c3e1) list_double_graphic_pane_g2

0x97b6,	// (0x0000c3f0) list_double_graphic_pane_g3_ParamLimits

0x97b6,	// (0x0000c3f0) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0001221a) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0001221a) list_double_graphic_pane_g

0x971c,	// (0x0000c356) list_double_graphic_pane_t1_ParamLimits

0x971c,	// (0x0000c356) list_double_graphic_pane_t1

0x9732,	// (0x0000c36c) list_double_graphic_pane_t2_ParamLimits

0x9732,	// (0x0000c36c) list_double_graphic_pane_t2

0x0001,

0xf5ca,	// (0x00012204) list_double_graphic_pane_t_ParamLimits

0xf5ca,	// (0x00012204) list_double_graphic_pane_t

0x97ce,	// (0x0000c408) list_double2_graphic_pane_g1_ParamLimits

0x97ce,	// (0x0000c408) list_double2_graphic_pane_g1

0x97da,	// (0x0000c414) list_double2_graphic_pane_g2_ParamLimits

0x97da,	// (0x0000c414) list_double2_graphic_pane_g2

0x97e6,	// (0x0000c420) list_double2_graphic_pane_g3_ParamLimits

0x97e6,	// (0x0000c420) list_double2_graphic_pane_g3

0x0002,

0xf5e9,	// (0x00012223) list_double2_graphic_pane_g_ParamLimits

0xf5e9,	// (0x00012223) list_double2_graphic_pane_g

0x97f2,	// (0x0000c42c) list_double2_graphic_pane_t1_ParamLimits

0x97f2,	// (0x0000c42c) list_double2_graphic_pane_t1

0x9808,	// (0x0000c442) list_double2_graphic_pane_t2_ParamLimits

0x9808,	// (0x0000c442) list_double2_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0001222a) list_double2_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0001222a) list_double2_graphic_pane_t

0x981a,	// (0x0000c454) list_double_large_graphic_pane_g1_ParamLimits

0x981a,	// (0x0000c454) list_double_large_graphic_pane_g1

0x9839,	// (0x0000c473) list_double_large_graphic_pane_g2_ParamLimits

0x9839,	// (0x0000c473) list_double_large_graphic_pane_g2

0xe4dd,	// (0x00011117) list_double_large_graphic_pane_g3_ParamLimits

0xe4dd,	// (0x00011117) list_double_large_graphic_pane_g3

0x984a,	// (0x0000c484) list_double_large_graphic_pane_g4_ParamLimits

0x984a,	// (0x0000c484) list_double_large_graphic_pane_g4

0x0004,

0xf5f5,	// (0x0001222f) list_double_large_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0001222f) list_double_large_graphic_pane_g

0x985c,	// (0x0000c496) list_double_large_graphic_pane_t1_ParamLimits

0x985c,	// (0x0000c496) list_double_large_graphic_pane_t1

0x9875,	// (0x0000c4af) list_double_large_graphic_pane_t2_ParamLimits

0x9875,	// (0x0000c4af) list_double_large_graphic_pane_t2

0x0001,

0xf600,	// (0x0001223a) list_double_large_graphic_pane_t_ParamLimits

0xf600,	// (0x0001223a) list_double_large_graphic_pane_t

0x9887,	// (0x0000c4c1) list_double2_large_graphic_pane_g1_ParamLimits

0x9887,	// (0x0000c4c1) list_double2_large_graphic_pane_g1

0x9893,	// (0x0000c4cd) list_double2_large_graphic_pane_g2_ParamLimits

0x9893,	// (0x0000c4cd) list_double2_large_graphic_pane_g2

0x97e6,	// (0x0000c420) list_double2_large_graphic_pane_g3_ParamLimits

0x97e6,	// (0x0000c420) list_double2_large_graphic_pane_g3

0x0002,

0xf605,	// (0x0001223f) list_double2_large_graphic_pane_g_ParamLimits

0xf605,	// (0x0001223f) list_double2_large_graphic_pane_g

0x98a4,	// (0x0000c4de) list_double2_large_graphic_pane_t1_ParamLimits

0x98a4,	// (0x0000c4de) list_double2_large_graphic_pane_t1

0x98ba,	// (0x0000c4f4) list_double2_large_graphic_pane_t2_ParamLimits

0x98ba,	// (0x0000c4f4) list_double2_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00012246) list_double2_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00012246) list_double2_large_graphic_pane_t

0x98cc,	// (0x0000c506) list_double_heading_pane_g1_ParamLimits

0x98cc,	// (0x0000c506) list_double_heading_pane_g1

0x98dd,	// (0x0000c517) list_double_heading_pane_g2_ParamLimits

0x98dd,	// (0x0000c517) list_double_heading_pane_g2

0x0001,

0xf611,	// (0x0001224b) list_double_heading_pane_g_ParamLimits

0xf611,	// (0x0001224b) list_double_heading_pane_g

0x98e9,	// (0x0000c523) list_double_heading_pane_t1_ParamLimits

0x98e9,	// (0x0000c523) list_double_heading_pane_t1

0x9808,	// (0x0000c442) list_double_heading_pane_t2_ParamLimits

0x9808,	// (0x0000c442) list_double_heading_pane_t2

0x0001,

0xf616,	// (0x00012250) list_double_heading_pane_t_ParamLimits

0xf616,	// (0x00012250) list_double_heading_pane_t

0x98ff,	// (0x0000c539) list_double_graphic_heading_pane_g1_ParamLimits

0x98ff,	// (0x0000c539) list_double_graphic_heading_pane_g1

0x98cc,	// (0x0000c506) list_double_graphic_heading_pane_g2_ParamLimits

0x98cc,	// (0x0000c506) list_double_graphic_heading_pane_g2

0x98dd,	// (0x0000c517) list_double_graphic_heading_pane_g3_ParamLimits

0x98dd,	// (0x0000c517) list_double_graphic_heading_pane_g3

0x0002,

0xf61b,	// (0x00012255) list_double_graphic_heading_pane_g_ParamLimits

0xf61b,	// (0x00012255) list_double_graphic_heading_pane_g

0x98e9,	// (0x0000c523) list_double_graphic_heading_pane_t1_ParamLimits

0x98e9,	// (0x0000c523) list_double_graphic_heading_pane_t1

0x9808,	// (0x0000c442) list_double_graphic_heading_pane_t2_ParamLimits

0x9808,	// (0x0000c442) list_double_graphic_heading_pane_t2

0x0001,

0xf616,	// (0x00012250) list_double_graphic_heading_pane_t_ParamLimits

0xf616,	// (0x00012250) list_double_graphic_heading_pane_t

0x9839,	// (0x0000c473) list_double_time_pane_g1_ParamLimits

0x9839,	// (0x0000c473) list_double_time_pane_g1

0xe4dd,	// (0x00011117) list_double_time_pane_g2_ParamLimits

0xe4dd,	// (0x00011117) list_double_time_pane_g2

0x0001,

0xf622,	// (0x0001225c) list_double_time_pane_g_ParamLimits

0xf622,	// (0x0001225c) list_double_time_pane_g

0x990b,	// (0x0000c545) list_double_time_pane_t1_ParamLimits

0x990b,	// (0x0000c545) list_double_time_pane_t1

0x9921,	// (0x0000c55b) list_double_time_pane_t2_ParamLimits

0x9921,	// (0x0000c55b) list_double_time_pane_t2

0x9933,	// (0x0000c56d) list_double_time_pane_t3_ParamLimits

0x9933,	// (0x0000c56d) list_double_time_pane_t3

0x9945,	// (0x0000c57f) list_double_time_pane_t4_ParamLimits

0x9945,	// (0x0000c57f) list_double_time_pane_t4

0x0003,

0xf627,	// (0x00012261) list_double_time_pane_t_ParamLimits

0xf627,	// (0x00012261) list_double_time_pane_t

0x97da,	// (0x0000c414) list_setting_pane_g1_ParamLimits

0x97da,	// (0x0000c414) list_setting_pane_g1

0x97e6,	// (0x0000c420) list_setting_pane_g2_ParamLimits

0x97e6,	// (0x0000c420) list_setting_pane_g2

0x0001,

0xf630,	// (0x0001226a) list_setting_pane_g_ParamLimits

0xf630,	// (0x0001226a) list_setting_pane_g

0x9957,	// (0x0000c591) list_setting_pane_t1_ParamLimits

0x9957,	// (0x0000c591) list_setting_pane_t1

0x996e,	// (0x0000c5a8) list_setting_pane_t2_ParamLimits

0x996e,	// (0x0000c5a8) list_setting_pane_t2

0x0002,

0xf635,	// (0x0001226f) list_setting_pane_t_ParamLimits

0xf635,	// (0x0001226f) list_setting_pane_t

0x99ad,	// (0x0000c5e7) set_value_pane_cp_ParamLimits

0x99ad,	// (0x0000c5e7) set_value_pane_cp

0x97da,	// (0x0000c414) list_setting_number_pane_g1_ParamLimits

0x97da,	// (0x0000c414) list_setting_number_pane_g1

0x97e6,	// (0x0000c420) list_setting_number_pane_g2_ParamLimits

0x97e6,	// (0x0000c420) list_setting_number_pane_g2

0x0001,

0xf630,	// (0x0001226a) list_setting_number_pane_g_ParamLimits

0xf630,	// (0x0001226a) list_setting_number_pane_g

0x99b9,	// (0x0000c5f3) list_setting_number_pane_t1_ParamLimits

0x99b9,	// (0x0000c5f3) list_setting_number_pane_t1

0x99cd,	// (0x0000c607) list_setting_number_pane_t2_ParamLimits

0x99cd,	// (0x0000c607) list_setting_number_pane_t2

0x99e4,	// (0x0000c61e) list_setting_number_pane_t3_ParamLimits

0x99e4,	// (0x0000c61e) list_setting_number_pane_t3

0x0003,

0xf63c,	// (0x00012276) list_setting_number_pane_t_ParamLimits

0xf63c,	// (0x00012276) list_setting_number_pane_t

0x99ad,	// (0x0000c5e7) set_value_pane_ParamLimits

0x99ad,	// (0x0000c5e7) set_value_pane

0xe4fe,	// (0x00011138) bg_set_opt_pane_ParamLimits

0xe4fe,	// (0x00011138) bg_set_opt_pane

0xe51f,	// (0x00011159) set_value_pane_t1

0xe52d,	// (0x00011167) slider_set_pane_cp3

0x9a27,	// (0x0000c661) volume_small_pane_cp

0xe536,	// (0x00011170) list_form_gen_pane

0xe53f,	// (0x00011179) scroll_pane_cp8

0x9a30,	// (0x0000c66a) form_field_data_pane_ParamLimits

0x9a30,	// (0x0000c66a) form_field_data_pane

0x9a47,	// (0x0000c681) form_field_data_wide_pane_ParamLimits

0x9a47,	// (0x0000c681) form_field_data_wide_pane

0x9a67,	// (0x0000c6a1) form_field_popup_pane_ParamLimits

0x9a67,	// (0x0000c6a1) form_field_popup_pane

0x9a87,	// (0x0000c6c1) form_field_popup_wide_pane_ParamLimits

0x9a87,	// (0x0000c6c1) form_field_popup_wide_pane

0xe560,	// (0x0001119a) form_field_slider_pane_ParamLimits

0xe560,	// (0x0001119a) form_field_slider_pane

0x9a9e,	// (0x0000c6d8) form_field_slider_wide_pane_ParamLimits

0x9a9e,	// (0x0000c6d8) form_field_slider_wide_pane

0xe573,	// (0x000111ad) data_form_pane

0x9abb,	// (0x0000c6f5) form_field_data_pane_t1

0xe57f,	// (0x000111b9) input_focus_pane

0xe58d,	// (0x000111c7) data_form_wide_pane

0xe5ca,	// (0x00011204) form_field_data_wide_pane_t1

0xe421,	// (0x0001105b) input_focus_pane_cp6

0x9ad5,	// (0x0000c70f) form_field_popup_pane_t1

0xe57f,	// (0x000111b9) input_focus_pane_cp7

0xe5ec,	// (0x00011226) list_form_pane

0xe600,	// (0x0001123a) form_field_popup_wide_pane_t1

0xe57f,	// (0x000111b9) input_focus_pane_cp8

0xe615,	// (0x0001124f) list_form_wide_pane

0x9af7,	// (0x0000c731) form_field_slider_pane_t1_ParamLimits

0x9af7,	// (0x0000c731) form_field_slider_pane_t1

0x9b0f,	// (0x0000c749) form_field_slider_pane_t2_ParamLimits

0x9b0f,	// (0x0000c749) form_field_slider_pane_t2

0x0001,

0xf64c,	// (0x00012286) form_field_slider_pane_t_ParamLimits

0xf64c,	// (0x00012286) form_field_slider_pane_t

0xe14f,	// (0x00010d89) input_focus_pane_cp9_ParamLimits

0xe14f,	// (0x00010d89) input_focus_pane_cp9

0x9b24,	// (0x0000c75e) slider_cont_pane_ParamLimits

0x9b24,	// (0x0000c75e) slider_cont_pane

0xe621,	// (0x0001125b) form_field_slider_wide_pane_t1_ParamLimits

0xe621,	// (0x0001125b) form_field_slider_wide_pane_t1

0xe633,	// (0x0001126d) form_field_slider_wide_pane_t2_ParamLimits

0xe633,	// (0x0001126d) form_field_slider_wide_pane_t2

0x0001,

0xf651,	// (0x0001228b) form_field_slider_wide_pane_t_ParamLimits

0xf651,	// (0x0001228b) form_field_slider_wide_pane_t

0xe14f,	// (0x00010d89) input_focus_pane_cp10_ParamLimits

0xe14f,	// (0x00010d89) input_focus_pane_cp10

0x9b38,	// (0x0000c772) slider_cont_pane_cp1_ParamLimits

0x9b38,	// (0x0000c772) slider_cont_pane_cp1

0x9b4c,	// (0x0000c786) slider_form_pane_cp

0xe645,	// (0x0001127f) input_focus_pane_g1

0xe64d,	// (0x00011287) input_focus_pane_g2

0xe655,	// (0x0001128f) input_focus_pane_g3

0xe65d,	// (0x00011297) input_focus_pane_g4

0xe665,	// (0x0001129f) input_focus_pane_g5

0xe66d,	// (0x000112a7) input_focus_pane_g6

0xe675,	// (0x000112af) input_focus_pane_g7

0xe67d,	// (0x000112b7) input_focus_pane_g8

0xe685,	// (0x000112bf) input_focus_pane_g9

0xe0b7,	// (0x00010cf1) input_focus_pane_g10

0x0009,

0xf656,	// (0x00012290) input_focus_pane_g

0x1205,	// (0x00003e3f) wait_border_pane_g3_copy1

0x9b54,	// (0x0000c78e) data_form_pane_t1

0xe0b7,	// (0x00010cf1) wait_anim_pane_g1_copy1

0xb8eb,	// (0x0000e525) data_form_wide_pane_t1

0x9b6e,	// (0x0000c7a8) list_form_graphic_pane_cp_ParamLimits

0x9b6e,	// (0x0000c7a8) list_form_graphic_pane_cp

0x2328,	// (0x00004f62) slider_form_pane_g1

0x2331,	// (0x00004f6b) slider_form_pane_g2

0x0006,

0xf954,	// (0x0001258e) slider_form_pane_g

0x9b80,	// (0x0000c7ba) list_form_graphic_pane_ParamLimits

0x9b80,	// (0x0000c7ba) list_form_graphic_pane

0x9b93,	// (0x0000c7cd) list_form_graphic_pane_g1

0x9b9b,	// (0x0000c7d5) list_form_graphic_pane_t1_ParamLimits

0x9b9b,	// (0x0000c7d5) list_form_graphic_pane_t1

0xe15d,	// (0x00010d97) list_highlight_pane_cp5_ParamLimits

0xe15d,	// (0x00010d97) list_highlight_pane_cp5

0x9bb0,	// (0x0000c7ea) find_pane_g1

0xe68d,	// (0x000112c7) input_find_pane

0x9bb9,	// (0x0000c7f3) input_find_pane_g1_ParamLimits

0x9bb9,	// (0x0000c7f3) input_find_pane_g1

0x9bc5,	// (0x0000c7ff) input_find_pane_t1_ParamLimits

0x9bc5,	// (0x0000c7ff) input_find_pane_t1

0x9bda,	// (0x0000c814) input_find_pane_t2_ParamLimits

0x9bda,	// (0x0000c814) input_find_pane_t2

0x0001,

0xf66b,	// (0x000122a5) input_find_pane_t_ParamLimits

0xf66b,	// (0x000122a5) input_find_pane_t

0xe696,	// (0x000112d0) input_focus_pane_cp5_ParamLimits

0xe696,	// (0x000112d0) input_focus_pane_cp5

0xe6a9,	// (0x000112e3) bg_popup_window_pane_cp2_ParamLimits

0xe6a9,	// (0x000112e3) bg_popup_window_pane_cp2

0xe6b6,	// (0x000112f0) listscroll_menu_pane_ParamLimits

0xe6b6,	// (0x000112f0) listscroll_menu_pane

0x9bfb,	// (0x0000c835) popup_submenu_window_ParamLimits

0x9bfb,	// (0x0000c835) popup_submenu_window

0xe6c2,	// (0x000112fc) find_popup_pane_g1

0x9c23,	// (0x0000c85d) input_popup_find_pane_cp

0xe6ca,	// (0x00011304) input_focus_pane_cp4_ParamLimits

0xe6ca,	// (0x00011304) input_focus_pane_cp4

0xe6d8,	// (0x00011312) input_popup_find_pane_t1_ParamLimits

0xe6d8,	// (0x00011312) input_popup_find_pane_t1

0xe0e1,	// (0x00010d1b) bg_popup_sub_pane_cp

0xe706,	// (0x00011340) listscroll_popup_sub_pane

0xe70e,	// (0x00011348) list_submenu_pane_ParamLimits

0xe70e,	// (0x00011348) list_submenu_pane

0xe71f,	// (0x00011359) scroll_pane_cp4

0x9c3b,	// (0x0000c875) list_single_popup_submenu_pane_ParamLimits

0x9c3b,	// (0x0000c875) list_single_popup_submenu_pane

0x9c4f,	// (0x0000c889) list_single_popup_submenu_pane_g1

0x9c57,	// (0x0000c891) list_single_popup_submenu_pane_t1_ParamLimits

0x9c57,	// (0x0000c891) list_single_popup_submenu_pane_t1

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp1_ParamLimits

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp1

0xe727,	// (0x00011361) tabs_2_active_pane_g1

0x9c6c,	// (0x0000c8a6) tabs_2_active_pane_t1

0xe14f,	// (0x00010d89) bg_passive_tab_pane_cp1_ParamLimits

0xe14f,	// (0x00010d89) bg_passive_tab_pane_cp1

0xe727,	// (0x00011361) tabs_2_passive_pane_g1

0x9c6c,	// (0x0000c8a6) tabs_2_passive_pane_t1

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp4

0x9c7e,	// (0x0000c8b8) tabs_2_long_active_pane_t1

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp4

0x0a59,	// (0x00003693) list_single_midp_graphic_pane_g4_ParamLimits

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp5

0x9c91,	// (0x0000c8cb) tabs_3_long_active_pane_t1

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp5

0x0a59,	// (0x00003693) list_single_midp_graphic_pane_g4

0xe15d,	// (0x00010d97) bg_popup_window_pane_cp13_ParamLimits

0xe15d,	// (0x00010d97) bg_popup_window_pane_cp13

0xe72f,	// (0x00011369) listscroll_popup_fast_pane_ParamLimits

0xe72f,	// (0x00011369) listscroll_popup_fast_pane

0xe73b,	// (0x00011375) grid_popup_fast_pane_ParamLimits

0xe73b,	// (0x00011375) grid_popup_fast_pane

0xe74d,	// (0x00011387) scroll_pane_cp9_ParamLimits

0xe74d,	// (0x00011387) scroll_pane_cp9

0x4718,	// (0x00007352) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4718,	// (0x00007352) list_single_graphic_hl_pane_t1_cp2

0xe760,	// (0x0001139a) input_focus_pane_cp20_ParamLimits

0xe760,	// (0x0001139a) input_focus_pane_cp20

0xe76e,	// (0x000113a8) query_popup_data_pane_t1_ParamLimits

0xe76e,	// (0x000113a8) query_popup_data_pane_t1

0xe781,	// (0x000113bb) query_popup_data_pane_t2_ParamLimits

0xe781,	// (0x000113bb) query_popup_data_pane_t2

0xe7c7,	// (0x00011401) query_popup_data_pane_t3_ParamLimits

0xe7c7,	// (0x00011401) query_popup_data_pane_t3

0xe808,	// (0x00011442) query_popup_data_pane_t4_ParamLimits

0xe808,	// (0x00011442) query_popup_data_pane_t4

0xe844,	// (0x0001147e) query_popup_data_pane_t5_ParamLimits

0xe844,	// (0x0001147e) query_popup_data_pane_t5

0x0004,

0xf670,	// (0x000122aa) query_popup_data_pane_t_ParamLimits

0xf670,	// (0x000122aa) query_popup_data_pane_t

0xe645,	// (0x0001127f) bg_set_opt_pane_g1

0xe64d,	// (0x00011287) bg_set_opt_pane_g2

0xe655,	// (0x0001128f) bg_set_opt_pane_g3

0xe65d,	// (0x00011297) bg_set_opt_pane_g4

0xe665,	// (0x0001129f) bg_set_opt_pane_g5

0xe66d,	// (0x000112a7) bg_set_opt_pane_g6

0xe675,	// (0x000112af) bg_set_opt_pane_g7

0xe67d,	// (0x000112b7) bg_set_opt_pane_g8

0xe685,	// (0x000112bf) bg_set_opt_pane_g9

0x0008,

0xf67b,	// (0x000122b5) bg_set_opt_pane_g

0xee65,	// (0x00011a9f) control_top_pane_stacon_ParamLimits

0xee65,	// (0x00011a9f) control_top_pane_stacon

0xeeb8,	// (0x00011af2) signal_pane_stacon_ParamLimits

0xeeb8,	// (0x00011af2) signal_pane_stacon

0xeedd,	// (0x00011b17) stacon_top_pane_g1_ParamLimits

0xeedd,	// (0x00011b17) stacon_top_pane_g1

0xeeff,	// (0x00011b39) title_pane_stacon_ParamLimits

0xeeff,	// (0x00011b39) title_pane_stacon

0xef29,	// (0x00011b63) uni_indicator_pane_stacon_ParamLimits

0xef29,	// (0x00011b63) uni_indicator_pane_stacon

0xef3e,	// (0x00011b78) battery_pane_stacon_ParamLimits

0xef3e,	// (0x00011b78) battery_pane_stacon

0xef82,	// (0x00011bbc) control_bottom_pane_stacon_ParamLimits

0xef82,	// (0x00011bbc) control_bottom_pane_stacon

0xefa5,	// (0x00011bdf) navi_pane_stacon_ParamLimits

0xefa5,	// (0x00011bdf) navi_pane_stacon

0xefc8,	// (0x00011c02) stacon_bottom_pane_g1_ParamLimits

0xefc8,	// (0x00011c02) stacon_bottom_pane_g1

0xe8b3,	// (0x000114ed) aid_levels_signal_lsc_ParamLimits

0xe8b3,	// (0x000114ed) aid_levels_signal_lsc

0xe8c9,	// (0x00011503) signal_pane_stacon_g1_ParamLimits

0xe8c9,	// (0x00011503) signal_pane_stacon_g1

0xe8dd,	// (0x00011517) signal_pane_stacon_g2_ParamLimits

0xe8dd,	// (0x00011517) signal_pane_stacon_g2

0x0001,

0xf68e,	// (0x000122c8) signal_pane_stacon_g_ParamLimits

0xf68e,	// (0x000122c8) signal_pane_stacon_g

0xe91f,	// (0x00011559) title_pane_stacon_t1_ParamLimits

0xe91f,	// (0x00011559) title_pane_stacon_t1

0xe944,	// (0x0001157e) uni_indicator_pane_stacon_g1

0xe94e,	// (0x00011588) uni_indicator_pane_stacon_g2

0xe958,	// (0x00011592) uni_indicator_pane_stacon_g3

0xe962,	// (0x0001159c) uni_indicator_pane_stacon_g4

0x0003,

0xf69a,	// (0x000122d4) uni_indicator_pane_stacon_g

0xe96c,	// (0x000115a6) control_top_pane_stacon_g1

0xe974,	// (0x000115ae) control_top_pane_stacon_t1_ParamLimits

0xe974,	// (0x000115ae) control_top_pane_stacon_t1

0xe9ab,	// (0x000115e5) aid_levels_battery_lsc_ParamLimits

0xe9ab,	// (0x000115e5) aid_levels_battery_lsc

0xe9c2,	// (0x000115fc) battery_pane_stacon_g1_ParamLimits

0xe9c2,	// (0x000115fc) battery_pane_stacon_g1

0xe9d5,	// (0x0001160f) battery_pane_stacon_g2_ParamLimits

0xe9d5,	// (0x0001160f) battery_pane_stacon_g2

0x0001,

0xf6a3,	// (0x000122dd) battery_pane_stacon_g_ParamLimits

0xf6a3,	// (0x000122dd) battery_pane_stacon_g

0xea13,	// (0x0001164d) navi_icon_pane_stacon

0xea27,	// (0x00011661) navi_navi_pane_stacon

0xea13,	// (0x0001164d) navi_text_pane_stacon

0xe96c,	// (0x000115a6) control_bottom_pane_stacon_g1

0xea3b,	// (0x00011675) control_bottom_pane_stacon_t1_ParamLimits

0xea3b,	// (0x00011675) control_bottom_pane_stacon_t1

0x9cbd,	// (0x0000c8f7) grid_app_pane_ParamLimits

0x9cbd,	// (0x0000c8f7) grid_app_pane

0x9cf5,	// (0x0000c92f) scroll_pane_cp15_ParamLimits

0x9cf5,	// (0x0000c92f) scroll_pane_cp15

0x9d0a,	// (0x0000c944) cell_app_pane_ParamLimits

0x9d0a,	// (0x0000c944) cell_app_pane

0x9d4f,	// (0x0000c989) cell_app_pane_g1_ParamLimits

0x9d4f,	// (0x0000c989) cell_app_pane_g1

0xea8c,	// (0x000116c6) cell_app_pane_g2_ParamLimits

0xea8c,	// (0x000116c6) cell_app_pane_g2

0x0001,

0xf6a8,	// (0x000122e2) cell_app_pane_g_ParamLimits

0xf6a8,	// (0x000122e2) cell_app_pane_g

0x9d73,	// (0x0000c9ad) cell_app_pane_t1_ParamLimits

0x9d73,	// (0x0000c9ad) cell_app_pane_t1

0xea98,	// (0x000116d2) grid_highlight_pane_ParamLimits

0xea98,	// (0x000116d2) grid_highlight_pane

0xe645,	// (0x0001127f) cell_highlight_pane_g1

0xe64d,	// (0x00011287) cell_highlight_pane_g2

0xe655,	// (0x0001128f) cell_highlight_pane_g3

0xe65d,	// (0x00011297) cell_highlight_pane_g4

0xe665,	// (0x0001129f) cell_highlight_pane_g5

0xe66d,	// (0x000112a7) cell_highlight_pane_g6

0xe675,	// (0x000112af) cell_highlight_pane_g7

0xe67d,	// (0x000112b7) cell_highlight_pane_g8

0xe685,	// (0x000112bf) cell_highlight_pane_g9

0xe0b7,	// (0x00010cf1) cell_highlight_pane_g10

0x0009,

0xf656,	// (0x00012290) cell_highlight_pane_g

0xeab3,	// (0x000116ed) bg_scroll_pane

0x9d93,	// (0x0000c9cd) scroll_handle_pane

0xeb0f,	// (0x00011749) scroll_bg_pane_g1

0xeb24,	// (0x0001175e) scroll_bg_pane_g2

0xeb3c,	// (0x00011776) scroll_bg_pane_g3

0x0002,

0xf6ad,	// (0x000122e7) scroll_bg_pane_g

0x9da7,	// (0x0000c9e1) scroll_handle_focus_pane_ParamLimits

0x9da7,	// (0x0000c9e1) scroll_handle_focus_pane

0xeb0f,	// (0x00011749) scroll_handle_pane_g1

0xeb51,	// (0x0001178b) scroll_handle_pane_g2

0xeb3c,	// (0x00011776) scroll_handle_pane_g3

0x0002,

0xf6b4,	// (0x000122ee) scroll_handle_pane_g

0xe6ca,	// (0x00011304) bg_popup_sub_pane_cp21_ParamLimits

0xe6ca,	// (0x00011304) bg_popup_sub_pane_cp21

0x9db4,	// (0x0000c9ee) popup_fep_japan_predictive_window_t1_ParamLimits

0x9db4,	// (0x0000c9ee) popup_fep_japan_predictive_window_t1

0x9dcb,	// (0x0000ca05) popup_fep_japan_predictive_window_t2_ParamLimits

0x9dcb,	// (0x0000ca05) popup_fep_japan_predictive_window_t2

0x9dfe,	// (0x0000ca38) popup_fep_japan_predictive_window_t3_ParamLimits

0x9dfe,	// (0x0000ca38) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bb,	// (0x000122f5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bb,	// (0x000122f5) popup_fep_japan_predictive_window_t

0xe0e1,	// (0x00010d1b) bg_popup_sub_pane_cp23

0x9e35,	// (0x0000ca6f) listscroll_japin_cand_pane

0xeb65,	// (0x0001179f) popup_fep_japan_candidate_window_t1

0xeb73,	// (0x000117ad) candidate_pane_ParamLimits

0xeb73,	// (0x000117ad) candidate_pane

0x9e3d,	// (0x0000ca77) scroll_pane_cp30

0xeb85,	// (0x000117bf) list_single_popup_jap_candidate_pane_ParamLimits

0xeb85,	// (0x000117bf) list_single_popup_jap_candidate_pane

0xe0e1,	// (0x00010d1b) list_highlight_pane_cp30

0xeb9a,	// (0x000117d4) list_single_popup_jap_candidate_pane_t1

0xeba9,	// (0x000117e3) level_1_signal

0xebb6,	// (0x000117f0) level_2_signal

0xebc3,	// (0x000117fd) level_3_signal

0xebd0,	// (0x0001180a) level_4_signal

0xebdd,	// (0x00011817) level_5_signal

0xebea,	// (0x00011824) level_6_signal

0xebf7,	// (0x00011831) level_7_signal

0xeba9,	// (0x000117e3) level_1_battery

0xebb6,	// (0x000117f0) level_2_battery

0xebc3,	// (0x000117fd) level_3_battery

0xebd0,	// (0x0001180a) level_4_battery

0xebdd,	// (0x00011817) level_5_battery

0xebea,	// (0x00011824) level_6_battery

0xebf7,	// (0x00011831) level_7_battery

0xec3b,	// (0x00011875) list_menu_pane_ParamLimits

0xec3b,	// (0x00011875) list_menu_pane

0xec51,	// (0x0001188b) scroll_pane_cp25_ParamLimits

0xec51,	// (0x0001188b) scroll_pane_cp25

0x9e45,	// (0x0000ca7f) list_double2_graphic_pane_cp2_ParamLimits

0x9e45,	// (0x0000ca7f) list_double2_graphic_pane_cp2

0x9e45,	// (0x0000ca7f) list_double2_large_graphic_pane_cp2_ParamLimits

0x9e45,	// (0x0000ca7f) list_double2_large_graphic_pane_cp2

0x9e45,	// (0x0000ca7f) list_double2_pane_cp2_ParamLimits

0x9e45,	// (0x0000ca7f) list_double2_pane_cp2

0x9e45,	// (0x0000ca7f) list_double_graphic_pane_cp2_ParamLimits

0x9e45,	// (0x0000ca7f) list_double_graphic_pane_cp2

0x9e45,	// (0x0000ca7f) list_double_large_graphic_pane_cp2_ParamLimits

0x9e45,	// (0x0000ca7f) list_double_large_graphic_pane_cp2

0x9e45,	// (0x0000ca7f) list_double_number_pane_cp2_ParamLimits

0x9e45,	// (0x0000ca7f) list_double_number_pane_cp2

0x9e45,	// (0x0000ca7f) list_double_pane_cp2_ParamLimits

0x9e45,	// (0x0000ca7f) list_double_pane_cp2

0x9e54,	// (0x0000ca8e) list_single_2graphic_pane_cp2_ParamLimits

0x9e54,	// (0x0000ca8e) list_single_2graphic_pane_cp2

0x9e54,	// (0x0000ca8e) list_single_graphic_heading_pane_cp2_ParamLimits

0x9e54,	// (0x0000ca8e) list_single_graphic_heading_pane_cp2

0x9e54,	// (0x0000ca8e) list_single_graphic_pane_cp2_ParamLimits

0x9e54,	// (0x0000ca8e) list_single_graphic_pane_cp2

0x9e54,	// (0x0000ca8e) list_single_heading_pane_cp2_ParamLimits

0x9e54,	// (0x0000ca8e) list_single_heading_pane_cp2

0xec7a,	// (0x000118b4) list_single_large_graphic_pane_cp2_ParamLimits

0xec7a,	// (0x000118b4) list_single_large_graphic_pane_cp2

0x9e54,	// (0x0000ca8e) list_single_number_heading_pane_cp2_ParamLimits

0x9e54,	// (0x0000ca8e) list_single_number_heading_pane_cp2

0x9e54,	// (0x0000ca8e) list_single_number_pane_cp2_ParamLimits

0x9e54,	// (0x0000ca8e) list_single_number_pane_cp2

0x9e66,	// (0x0000caa0) list_single_pane_cp2_ParamLimits

0x9e66,	// (0x0000caa0) list_single_pane_cp2

0xecef,	// (0x00011929) bg_popup_sub_pane_cp22

0xed05,	// (0x0001193f) popup_side_volume_key_window_g1

0xed11,	// (0x0001194b) popup_side_volume_key_window_t1

0x9f2e,	// (0x0000cb68) volume_small_pane_cp1

0xe14f,	// (0x00010d89) bg_popup_sub_pane_cp24_ParamLimits

0xe14f,	// (0x00010d89) bg_popup_sub_pane_cp24

0xed1f,	// (0x00011959) fep_china_uni_candidate_pane_ParamLimits

0xed1f,	// (0x00011959) fep_china_uni_candidate_pane

0xed33,	// (0x0001196d) fep_china_uni_entry_pane

0xed43,	// (0x0001197d) popup_fep_china_uni_window_g1

0x9f36,	// (0x0000cb70) fep_china_uni_entry_pane_g1

0x9f3e,	// (0x0000cb78) fep_china_uni_entry_pane_g2

0x0001,

0xf6ec,	// (0x00012326) fep_china_uni_entry_pane_g

0xed5f,	// (0x00011999) fep_entry_item_pane

0xed69,	// (0x000119a3) fep_candidate_item_pane

0x9f46,	// (0x0000cb80) fep_china_uni_candidate_pane_g1

0xed71,	// (0x000119ab) fep_china_uni_candidate_pane_g2

0xed79,	// (0x000119b3) fep_china_uni_candidate_pane_g3

0x9f4e,	// (0x0000cb88) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f1,	// (0x0001232b) fep_china_uni_candidate_pane_g

0xe0b7,	// (0x00010cf1) fep_entry_item_pane_g1

0xed81,	// (0x000119bb) fep_entry_item_pane_t1_ParamLimits

0xed81,	// (0x000119bb) fep_entry_item_pane_t1

0xed97,	// (0x000119d1) fep_candidate_item_pane_t1_ParamLimits

0xed97,	// (0x000119d1) fep_candidate_item_pane_t1

0xedac,	// (0x000119e6) fep_candidate_item_pane_t2_ParamLimits

0xedac,	// (0x000119e6) fep_candidate_item_pane_t2

0x0001,

0xf6fa,	// (0x00012334) fep_candidate_item_pane_t_ParamLimits

0xf6fa,	// (0x00012334) fep_candidate_item_pane_t

0xe15d,	// (0x00010d97) list_highlight_pane_cp31_ParamLimits

0xe15d,	// (0x00010d97) list_highlight_pane_cp31

0xedbe,	// (0x000119f8) level_1_signal_lsc

0xedc7,	// (0x00011a01) level_2_signal_lsc

0xedd0,	// (0x00011a0a) level_3_signal_lsc

0xedd9,	// (0x00011a13) level_4_signal_lsc

0xede2,	// (0x00011a1c) level_5_signal_lsc

0xedeb,	// (0x00011a25) level_6_signal_lsc

0xedf4,	// (0x00011a2e) level_7_signal_lsc

0xedf4,	// (0x00011a2e) level_1_battery_lsc

0xedfd,	// (0x00011a37) level_2_battery_lsc

0xee06,	// (0x00011a40) level_3_battery_lsc

0xee0f,	// (0x00011a49) level_4_battery_lsc

0xee18,	// (0x00011a52) level_5_battery_lsc

0xee21,	// (0x00011a5b) level_6_battery_lsc

0xedbe,	// (0x000119f8) level_7_battery_lsc

0xee2a,	// (0x00011a64) scroll_handle_focus_pane_g1

0xee33,	// (0x00011a6d) scroll_handle_focus_pane_g2

0xee3c,	// (0x00011a76) scroll_handle_focus_pane_g3

0x0002,

0xf6ff,	// (0x00012339) scroll_handle_focus_pane_g

0x9f56,	// (0x0000cb90) list_single_2graphic_pane_g1_ParamLimits

0x9f56,	// (0x0000cb90) list_single_2graphic_pane_g1

0x96f1,	// (0x0000c32b) list_single_2graphic_pane_g2_ParamLimits

0x96f1,	// (0x0000c32b) list_single_2graphic_pane_g2

0x0886,	// (0x000034c0) list_single_2graphic_pane_g3_ParamLimits

0x0886,	// (0x000034c0) list_single_2graphic_pane_g3

0x9f62,	// (0x0000cb9c) list_single_2graphic_pane_g4_ParamLimits

0x9f62,	// (0x0000cb9c) list_single_2graphic_pane_g4

0x0003,

0xf706,	// (0x00012340) list_single_2graphic_pane_g_ParamLimits

0xf706,	// (0x00012340) list_single_2graphic_pane_g

0x9f6e,	// (0x0000cba8) list_single_2graphic_pane_t1_ParamLimits

0x9f6e,	// (0x0000cba8) list_single_2graphic_pane_t1

0x9f9c,	// (0x0000cbd6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9f9c,	// (0x0000cbd6) list_double2_graphic_large_graphic_pane_g1

0x9893,	// (0x0000c4cd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9893,	// (0x0000c4cd) list_double2_graphic_large_graphic_pane_g2

0x97e6,	// (0x0000c420) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x97e6,	// (0x0000c420) list_double2_graphic_large_graphic_pane_g3

0x9fae,	// (0x0000cbe8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9fae,	// (0x0000cbe8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70f,	// (0x00012349) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70f,	// (0x00012349) list_double2_graphic_large_graphic_pane_g

0x9fba,	// (0x0000cbf4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9fba,	// (0x0000cbf4) list_double2_graphic_large_graphic_pane_t1

0x9fd0,	// (0x0000cc0a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9fd0,	// (0x0000cc0a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf718,	// (0x00012352) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf718,	// (0x00012352) list_double2_graphic_large_graphic_pane_t

0xa055,	// (0x0000cc8f) popup_fast_swap_window_ParamLimits

0xa055,	// (0x0000cc8f) popup_fast_swap_window

0xa071,	// (0x0000ccab) popup_side_volume_key_window

0xf053,	// (0x00011c8d) stacon_top_pane

0xf05d,	// (0x00011c97) status_pane_ParamLimits

0xf05d,	// (0x00011c97) status_pane

0xe0ad,	// (0x00010ce7) status_small_pane

0xe0e1,	// (0x00010d1b) control_pane

0xe0e1,	// (0x00010d1b) stacon_bottom_pane

0xe53f,	// (0x00011179) scroll_pane_cp121

0xe536,	// (0x00011170) set_content_pane

0x9fe2,	// (0x0000cc1c) bg_active_tab_pane_g1_cp1

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp1

0x9ff4,	// (0x0000cc2e) bg_active_tab_pane_g3_cp1

0x9fe2,	// (0x0000cc1c) bg_passive_tab_pane_g1_cp1

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp1

0x9ff4,	// (0x0000cc2e) bg_passive_tab_pane_g3_cp1

0x9ffd,	// (0x0000cc37) bg_active_tab_pane_g1_cp2

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp2

0xa006,	// (0x0000cc40) bg_active_tab_pane_g3_cp2

0x9ffd,	// (0x0000cc37) bg_passive_tab_pane_g1_cp2

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp2

0xa006,	// (0x0000cc40) bg_passive_tab_pane_g3_cp2

0xa00f,	// (0x0000cc49) bg_active_tab_pane_g1_cp3

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp3

0xa018,	// (0x0000cc52) bg_active_tab_pane_g3_cp3

0xa00f,	// (0x0000cc49) bg_passive_tab_pane_g1_cp3

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp3

0xa018,	// (0x0000cc52) bg_passive_tab_pane_g3_cp3

0xa021,	// (0x0000cc5b) bg_active_tab_pane_g1_cp4

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp4

0xa02c,	// (0x0000cc66) bg_active_tab_pane_g3_cp4

0xa021,	// (0x0000cc5b) bg_passive_tab_pane_g1_cp4

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp4

0xa02c,	// (0x0000cc66) bg_passive_tab_pane_g3_cp4

0xa037,	// (0x0000cc71) bg_active_tab_pane_g1_cp5

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp5

0xa040,	// (0x0000cc7a) bg_active_tab_pane_g3_cp5

0xa037,	// (0x0000cc71) bg_passive_tab_pane_g1_cp5

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp5

0xa040,	// (0x0000cc7a) bg_passive_tab_pane_g3_cp5

0x2b08,	// (0x00005742) list_set_graphic_pane_ParamLimits

0x2b08,	// (0x00005742) list_set_graphic_pane

0xe0e1,	// (0x00010d1b) bg_set_opt_pane_cp4

0xefe4,	// (0x00011c1e) list_set_graphic_pane_g1_ParamLimits

0xefe4,	// (0x00011c1e) list_set_graphic_pane_g1

0xeff0,	// (0x00011c2a) list_set_graphic_pane_g2_ParamLimits

0xeff0,	// (0x00011c2a) list_set_graphic_pane_g2

0x0001,

0xf71d,	// (0x00012357) list_set_graphic_pane_g_ParamLimits

0xf71d,	// (0x00012357) list_set_graphic_pane_g

0x0009,

0xfaae,	// (0x000126e8) volume_small_pane_cp_g

0xa049,	// (0x0000cc83) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa049,	// (0x0000cc83) list_double2_large_graphic_pane_g1_cp2

0xf012,	// (0x00011c4c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf012,	// (0x00011c4c) list_double2_large_graphic_pane_g2_cp2

0xf023,	// (0x00011c5d) list_double2_large_graphic_pane_g3_cp2

0xf02b,	// (0x00011c65) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf02b,	// (0x00011c65) list_double2_large_graphic_pane_t1_cp2

0xf041,	// (0x00011c7b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf041,	// (0x00011c7b) list_double2_large_graphic_pane_t2_cp2

0xb57e,	// (0x0000e1b8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb57e,	// (0x0000e1b8) list_double_large_graphic_pane_g1_cp2

0x1e31,	// (0x00004a6b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1e31,	// (0x00004a6b) list_double_large_graphic_pane_g2_cp2

0xf16d,	// (0x00011da7) list_double_large_graphic_pane_g3_cp2

0x1e42,	// (0x00004a7c) list_double_large_graphic_pane_g4_cp

0x1e4a,	// (0x00004a84) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1e4a,	// (0x00004a84) list_double_large_graphic_pane_t1_cp2

0x1e61,	// (0x00004a9b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1e61,	// (0x00004a9b) list_double_large_graphic_pane_t2_cp2

0xf06b,	// (0x00011ca5) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf06b,	// (0x00011ca5) list_double2_graphic_pane_g1_cp2

0xf079,	// (0x00011cb3) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf079,	// (0x00011cb3) list_double2_graphic_pane_g2_cp2

0xf08a,	// (0x00011cc4) list_double2_graphic_pane_g3_cp2

0xf094,	// (0x00011cce) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf094,	// (0x00011cce) list_double2_graphic_pane_t1_cp2

0xf0aa,	// (0x00011ce4) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf0aa,	// (0x00011ce4) list_double2_graphic_pane_t2_cp2

0xee59,	// (0x00011a93) list_single_number_heading_pane_g1_cp2_ParamLimits

0xee59,	// (0x00011a93) list_single_number_heading_pane_g1_cp2

0xf0bc,	// (0x00011cf6) list_single_number_heading_pane_g2_cp2

0xf0c4,	// (0x00011cfe) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf0c4,	// (0x00011cfe) list_single_number_heading_pane_t1_cp2

0xf0da,	// (0x00011d14) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf0da,	// (0x00011d14) list_single_number_heading_pane_t2_cp2

0xf0ec,	// (0x00011d26) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf0ec,	// (0x00011d26) list_single_number_heading_pane_t3_cp2

0xee59,	// (0x00011a93) list_single_heading_pane_g1_cp2_ParamLimits

0xee59,	// (0x00011a93) list_single_heading_pane_g1_cp2

0xf0bc,	// (0x00011cf6) list_single_heading_pane_g2_cp2

0xf0c4,	// (0x00011cfe) list_single_heading_pane_t1_cp2_ParamLimits

0xf0c4,	// (0x00011cfe) list_single_heading_pane_t1_cp2

0x1c2a,	// (0x00004864) list_single_heading_pane_t2_cp2_ParamLimits

0x1c2a,	// (0x00004864) list_single_heading_pane_t2_cp2

0x1b72,	// (0x000047ac) list_double_graphic_pane_g1_cp2_ParamLimits

0x1b72,	// (0x000047ac) list_double_graphic_pane_g1_cp2

0x1b7e,	// (0x000047b8) list_double_graphic_pane_g2_cp2_ParamLimits

0x1b7e,	// (0x000047b8) list_double_graphic_pane_g2_cp2

0x1b8d,	// (0x000047c7) list_double_graphic_pane_g3_cp2

0x1b95,	// (0x000047cf) list_double_graphic_pane_t1_cp2_ParamLimits

0x1b95,	// (0x000047cf) list_double_graphic_pane_t1_cp2

0x1bab,	// (0x000047e5) list_double_graphic_pane_t2_cp2_ParamLimits

0x1bab,	// (0x000047e5) list_double_graphic_pane_t2_cp2

0xf161,	// (0x00011d9b) list_double_number_pane_g1_cp2_ParamLimits

0xf161,	// (0x00011d9b) list_double_number_pane_g1_cp2

0xf16d,	// (0x00011da7) list_double_number_pane_g2_cp2

0x1b36,	// (0x00004770) list_double_number_pane_t1_cp2_ParamLimits

0x1b36,	// (0x00004770) list_double_number_pane_t1_cp2

0x1b4a,	// (0x00004784) list_double_number_pane_t2_cp2_ParamLimits

0x1b4a,	// (0x00004784) list_double_number_pane_t2_cp2

0x1b60,	// (0x0000479a) list_double_number_pane_t3_cp2_ParamLimits

0x1b60,	// (0x0000479a) list_double_number_pane_t3_cp2

0x1a0e,	// (0x00004648) list_single_graphic_pane_g1_cp2_ParamLimits

0x1a0e,	// (0x00004648) list_single_graphic_pane_g1_cp2

0xee4d,	// (0x00011a87) list_single_graphic_pane_g2_cp2_ParamLimits

0xee4d,	// (0x00011a87) list_single_graphic_pane_g2_cp2

0xf1ca,	// (0x00011e04) list_single_graphic_pane_g3_cp2

0x19e4,	// (0x0000461e) list_single_graphic_pane_t1_cp2_ParamLimits

0x19e4,	// (0x0000461e) list_single_graphic_pane_t1_cp2

0xee4d,	// (0x00011a87) list_single_number_pane_g1_cp2_ParamLimits

0xee4d,	// (0x00011a87) list_single_number_pane_g1_cp2

0xf1ca,	// (0x00011e04) list_single_number_pane_g2_cp2

0x19e4,	// (0x0000461e) list_single_number_pane_t1_cp2_ParamLimits

0x19e4,	// (0x0000461e) list_single_number_pane_t1_cp2

0x19fa,	// (0x00004634) list_single_number_pane_t2_cp2_ParamLimits

0x19fa,	// (0x00004634) list_single_number_pane_t2_cp2

0xf012,	// (0x00011c4c) list_double2_pane_g1_cp2_ParamLimits

0xf012,	// (0x00011c4c) list_double2_pane_g1_cp2

0xf023,	// (0x00011c5d) list_double2_pane_g2_cp2

0xf139,	// (0x00011d73) list_double2_pane_t1_cp2_ParamLimits

0xf139,	// (0x00011d73) list_double2_pane_t1_cp2

0xf14f,	// (0x00011d89) list_double2_pane_t2_cp2_ParamLimits

0xf14f,	// (0x00011d89) list_double2_pane_t2_cp2

0xf161,	// (0x00011d9b) list_double_pane_g1_cp2_ParamLimits

0xf161,	// (0x00011d9b) list_double_pane_g1_cp2

0xf16d,	// (0x00011da7) list_double_pane_g2_cp2

0xf175,	// (0x00011daf) list_double_pane_t1_cp2_ParamLimits

0xf175,	// (0x00011daf) list_double_pane_t1_cp2

0xf18b,	// (0x00011dc5) list_double_pane_t2_cp2_ParamLimits

0xf18b,	// (0x00011dc5) list_double_pane_t2_cp2

0xa08b,	// (0x0000ccc5) list_single_pane_cp2_g3

0xee4d,	// (0x00011a87) list_single_pane_g1_cp2_ParamLimits

0xee4d,	// (0x00011a87) list_single_pane_g1_cp2

0xf1ca,	// (0x00011e04) list_single_pane_g2_cp2

0xf1d2,	// (0x00011e0c) list_single_pane_t1_cp2_ParamLimits

0xf1d2,	// (0x00011e0c) list_single_pane_t1_cp2

0xa093,	// (0x0000cccd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa093,	// (0x0000cccd) list_single_large_graphic_pane_g1_cp2

0xf1ea,	// (0x00011e24) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf1ea,	// (0x00011e24) list_single_large_graphic_pane_g2_cp2

0xf1f6,	// (0x00011e30) list_single_large_graphic_pane_g3_cp2

0xa09f,	// (0x0000ccd9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa09f,	// (0x0000ccd9) list_single_large_graphic_pane_g4_cp1

0xf1fe,	// (0x00011e38) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf1fe,	// (0x00011e38) list_single_large_graphic_pane_t1_cp2

0x1857,	// (0x00004491) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x1857,	// (0x00004491) list_single_graphic_heading_pane_g1_cp2

0x1824,	// (0x0000445e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x1824,	// (0x0000445e) list_single_graphic_heading_pane_g4_cp2

0xf1ca,	// (0x00011e04) list_single_graphic_heading_pane_g5_cp2

0x1863,	// (0x0000449d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1863,	// (0x0000449d) list_single_graphic_heading_pane_t1_cp2

0x1879,	// (0x000044b3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x1879,	// (0x000044b3) list_single_graphic_heading_pane_t2_cp2

0x1818,	// (0x00004452) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1818,	// (0x00004452) list_single_2graphic_pane_g1_cp2

0x1824,	// (0x0000445e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x1824,	// (0x0000445e) list_single_2graphic_pane_g2_cp2

0xf1ca,	// (0x00011e04) list_single_2graphic_pane_g3_cp2

0x1835,	// (0x0000446f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x1835,	// (0x0000446f) list_single_2graphic_pane_g4_cp2

0x1841,	// (0x0000447b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1841,	// (0x0000447b) list_single_2graphic_pane_t1_cp2

0xe0b7,	// (0x00010cf1) list_highlight_pane_g10_cp1

0x1400,	// (0x0000403a) list_highlight_pane_g1_cp1

0x1408,	// (0x00004042) list_highlight_pane_g2_cp1

0x1410,	// (0x0000404a) list_highlight_pane_g3_cp1

0x1418,	// (0x00004052) list_highlight_pane_g4_cp1

0x1420,	// (0x0000405a) list_highlight_pane_g5_cp1

0x1428,	// (0x00004062) list_highlight_pane_g6_cp1

0x1430,	// (0x0000406a) list_highlight_pane_g7_cp1

0x1438,	// (0x00004072) list_highlight_pane_g8_cp1

0x1440,	// (0x0000407a) list_highlight_pane_g9_cp1

0xb30b,	// (0x0000df45) form_field_slider_pane_t3

0xb319,	// (0x0000df53) form_field_slider_pane_t4

0x1344,	// (0x00003f7e) slider_form_pane_ParamLimits

0x1344,	// (0x00003f7e) slider_form_pane

0xe0e1,	// (0x00010d1b) control_abbreviations

0xe0e1,	// (0x00010d1b) control_conventions

0xe0e1,	// (0x00010d1b) control_definitions

0xe0e1,	// (0x00010d1b) format_table_attribute

0xb555,	// (0x0000e18f) bg_popup_preview_window_pane_g9

0xe0e1,	// (0x00010d1b) format_table_data2

0xe0e1,	// (0x00010d1b) format_table_data3

0xe0e1,	// (0x00010d1b) format_table_data_example

0x0008,

0xe0e1,	// (0x00010d1b) intro_purpose

0xf8b4,	// (0x000124ee) bg_popup_preview_window_pane_g

0xe0e1,	// (0x00010d1b) texts_category

0xe0e1,	// (0x00010d1b) texts_graphics

0xf214,	// (0x00011e4e) text_digital

0xf223,	// (0x00011e5d) text_primary

0xf232,	// (0x00011e6c) text_primary_small

0xf241,	// (0x00011e7b) text_secondary

0xf250,	// (0x00011e8a) text_title

0xb9ca,	// (0x0000e604) bg_passive_tab_pane_g1_cp3_srt

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp3_srt

0xb9d3,	// (0x0000e60d) bg_passive_tab_pane_g3_cp3_srt

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp3_srt_ParamLimits

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp3_srt

0xb9dc,	// (0x0000e616) tabs_4_active_pane_srt_g1

0xb9e4,	// (0x0000e61e) tabs_4_active_pane_srt_t1_ParamLimits

0xb9e4,	// (0x0000e61e) tabs_4_active_pane_srt_t1

0xb9ca,	// (0x0000e604) bg_active_tab_pane_g1_cp3_copy1

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp3_copy1

0xb9d3,	// (0x0000e60d) bg_active_tab_pane_g3_cp3_copy1

0xe15d,	// (0x00010d97) tabs_2_long_active_pane_srt_ParamLimits

0xe15d,	// (0x00010d97) tabs_2_long_active_pane_srt

0xe15d,	// (0x00010d97) tabs_2_long_passive_pane_srt_ParamLimits

0xe15d,	// (0x00010d97) tabs_2_long_passive_pane_srt

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp4_srt_ParamLimits

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp4_srt

0xb6cf,	// (0x0000e309) bg_passive_tab_pane_g1_cp4_srt

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp4_srt

0xb6d8,	// (0x0000e312) bg_passive_tab_pane_g3_cp4_srt

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp4_srt_ParamLimits

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp4_srt

0xb6e1,	// (0x0000e31b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb6e1,	// (0x0000e31b) tabs_2_long_active_pane_srt_t1

0xb6cf,	// (0x0000e309) bg_active_tab_pane_g1_cp4_srt

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp4_srt

0xb6d8,	// (0x0000e312) bg_active_tab_pane_g3_cp4_srt

0xe14f,	// (0x00010d89) tabs_3_long_active_pane_srt_ParamLimits

0xe14f,	// (0x00010d89) tabs_3_long_active_pane_srt

0xe14f,	// (0x00010d89) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe14f,	// (0x00010d89) tabs_3_long_passive_pane_cp_srt

0xe14f,	// (0x00010d89) tabs_3_long_passive_pane_srt_ParamLimits

0xe14f,	// (0x00010d89) tabs_3_long_passive_pane_srt

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp5_srt_ParamLimits

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp5_srt

0xa037,	// (0x0000cc71) bg_passive_tab_pane_g1_cp5_srt

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp5_srt

0xa040,	// (0x0000cc7a) bg_passive_tab_pane_g3_cp5_srt

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp5_srt_ParamLimits

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp5_srt

0xb6b9,	// (0x0000e2f3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb6b9,	// (0x0000e2f3) tabs_3_long_active_pane_srt_t1

0xa037,	// (0x0000cc71) bg_active_tab_pane_g1_cp5_srt

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp5_srt

0xa040,	// (0x0000cc7a) bg_active_tab_pane_g3_cp5_srt

0x20c7,	// (0x00004d01) navi_text_pane_srt_t1

0x20bf,	// (0x00004cf9) navi_icon_pane_srt_g1

0xf3e4,	// (0x0001201e) midp_editing_number_pane_srt

0xf25f,	// (0x00011e99) midp_ticker_pane_srt

0xf3ec,	// (0x00012026) midp_ticker_pane_srt_g1

0xf3f4,	// (0x0001202e) midp_ticker_pane_srt_g2

0x0001,

0xf73c,	// (0x00012376) midp_ticker_pane_srt_g

0xf3fc,	// (0x00012036) midp_ticker_pane_srt_t1

0x20b0,	// (0x00004cea) midp_editing_number_pane_t1_copy1

0xa0b9,	// (0x0000ccf3) listscroll_midp_pane

0xa0b9,	// (0x0000ccf3) midp_form_pane

0xa124,	// (0x0000cd5e) midp_info_popup_window_ParamLimits

0xa124,	// (0x0000cd5e) midp_info_popup_window

0xe6ca,	// (0x00011304) bg_popup_sub_pane_cp50_ParamLimits

0xe6ca,	// (0x00011304) bg_popup_sub_pane_cp50

0x1034,	// (0x00003c6e) listscroll_midp_info_pane_ParamLimits

0x1034,	// (0x00003c6e) listscroll_midp_info_pane

0x1014,	// (0x00003c4e) listscroll_form_midp_pane_ParamLimits

0x1014,	// (0x00003c4e) listscroll_form_midp_pane

0x1020,	// (0x00003c5a) scroll_bar_cp050

0x1014,	// (0x00003c4e) list_midp_pane

0xbbce,	// (0x0000e808) signal_pane_g2_cp

0x0f2e,	// (0x00003b68) listscroll_midp_info_pane_t1_ParamLimits

0x0f2e,	// (0x00003b68) listscroll_midp_info_pane_t1

0xb145,	// (0x0000dd7f) listscroll_midp_info_pane_t2_ParamLimits

0xb145,	// (0x0000dd7f) listscroll_midp_info_pane_t2

0xb183,	// (0x0000ddbd) listscroll_midp_info_pane_t3_ParamLimits

0xb183,	// (0x0000ddbd) listscroll_midp_info_pane_t3

0xb1bd,	// (0x0000ddf7) listscroll_midp_info_pane_t4_ParamLimits

0xb1bd,	// (0x0000ddf7) listscroll_midp_info_pane_t4

0x0003,

0xf7ef,	// (0x00012429) listscroll_midp_info_pane_t_ParamLimits

0xf7ef,	// (0x00012429) listscroll_midp_info_pane_t

0xe71f,	// (0x00011359) scroll_pane_cp21

0x0ece,	// (0x00003b08) form_midp_field_choice_group_pane

0xb108,	// (0x0000dd42) form_midp_field_text_pane

0x0f14,	// (0x00003b4e) form_midp_field_time_pane

0x0f1c,	// (0x00003b56) form_midp_gauge_slider_pane

0x0f25,	// (0x00003b5f) form_midp_gauge_wait_pane

0xe0e1,	// (0x00010d1b) form_midp_image_pane

0xb0f1,	// (0x0000dd2b) list_single_midp_pane_ParamLimits

0xb0f1,	// (0x0000dd2b) list_single_midp_pane

0xb0cf,	// (0x0000dd09) form_midp_field_text_pane_t1

0x0b84,	// (0x000037be) input_focus_pane_cp050

0x0e8b,	// (0x00003ac5) list_midp_form_text_pane

0x0e20,	// (0x00003a5a) form_midp_field_choice_group_pane_t1

0x0e2e,	// (0x00003a68) input_focus_pane_cp051

0x0e42,	// (0x00003a7c) list_midp_choice_pane

0xe0e1,	// (0x00010d1b) status_idle_pane

0x0e04,	// (0x00003a3e) form_midp_field_time_pane_t1

0xe0b7,	// (0x00010cf1) wait_anim_pane_g2_copy1

0x0e12,	// (0x00003a4c) form_midp_field_time_pane_t2

0x0001,

0xf2bf,	// (0x00011ef9) aid_navinavi_width_2_pane

0xf7ea,	// (0x00012424) form_midp_field_time_pane_t

0xe0e1,	// (0x00010d1b) input_focus_pane_cp052

0xe0e1,	// (0x00010d1b) bg_input_focus_pane_cp040

0x0dc4,	// (0x000039fe) form_midp_gauge_slider_pane_t1

0x0dd2,	// (0x00003a0c) form_midp_gauge_slider_pane_t2

0xb0b3,	// (0x0000dced) form_midp_gauge_slider_pane_t3

0xb0c1,	// (0x0000dcfb) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e1,	// (0x0001241b) form_midp_gauge_slider_pane_t

0x0dfc,	// (0x00003a36) form_midp_slider_pane

0xe15d,	// (0x00010d97) bg_input_focus_pane_cp041_ParamLimits

0xe15d,	// (0x00010d97) bg_input_focus_pane_cp041

0x0d91,	// (0x000039cb) form_midp_gauge_wait_pane_t1_ParamLimits

0x0d91,	// (0x000039cb) form_midp_gauge_wait_pane_t1

0x0da3,	// (0x000039dd) form_midp_gauge_wait_pane_t2_ParamLimits

0x0da3,	// (0x000039dd) form_midp_gauge_wait_pane_t2

0x0001,

0xf7dc,	// (0x00012416) form_midp_gauge_wait_pane_t_ParamLimits

0xf7dc,	// (0x00012416) form_midp_gauge_wait_pane_t

0x0db5,	// (0x000039ef) form_midp_wait_pane_ParamLimits

0x0db5,	// (0x000039ef) form_midp_wait_pane

0xb07d,	// (0x0000dcb7) form_midp_image_pane_g1

0xb086,	// (0x0000dcc0) form_midp_image_pane_t1

0xb095,	// (0x0000dccf) form_midp_image_pane_t2

0xb0a4,	// (0x0000dcde) form_midp_image_pane_t3

0x0002,

0xf7d5,	// (0x0001240f) form_midp_image_pane_t

0x0d43,	// (0x0000397d) list_single_midp_pane_g1

0x0d4c,	// (0x00003986) list_single_midp_pane_t1

0xb068,	// (0x0000dca2) list_midp_form_item_pane_ParamLimits

0xb068,	// (0x0000dca2) list_midp_form_item_pane

0xf267,	// (0x00011ea1) list_midp_form_item_pane_t1

0xf276,	// (0x00011eb0) midp_ticker_pane_g1

0xf282,	// (0x00011ebc) midp_ticker_pane_g2

0x0001,

0xf722,	// (0x0001235c) midp_ticker_pane_g

0xf28e,	// (0x00011ec8) midp_ticker_pane_t1

0x2392,	// (0x00004fcc) midp_editing_number_pane_t1

0x2370,	// (0x00004faa) midp_editing_number_pane

0x237f,	// (0x00004fb9) midp_ticker_pane

0x1040,	// (0x00003c7a) ai_message_heading_pane

0xe0e1,	// (0x00010d1b) bg_popup_window_pane_cp14

0x1048,	// (0x00003c82) listscroll_ai_message_pane

0x2028,	// (0x00004c62) ai_message_heading_pane_g1_ParamLimits

0x2028,	// (0x00004c62) ai_message_heading_pane_g1

0xb66f,	// (0x0000e2a9) ai_message_heading_pane_g2_ParamLimits

0xb66f,	// (0x0000e2a9) ai_message_heading_pane_g2

0x2040,	// (0x00004c7a) ai_message_heading_pane_g3_ParamLimits

0x2040,	// (0x00004c7a) ai_message_heading_pane_g3

0x204c,	// (0x00004c86) ai_message_heading_pane_g4_ParamLimits

0x204c,	// (0x00004c86) ai_message_heading_pane_g4

0x0003,

0xf916,	// (0x00012550) ai_message_heading_pane_g_ParamLimits

0xf916,	// (0x00012550) ai_message_heading_pane_g

0xb67b,	// (0x0000e2b5) ai_message_heading_pane_t1_ParamLimits

0xb67b,	// (0x0000e2b5) ai_message_heading_pane_t1

0xb695,	// (0x0000e2cf) ai_message_heading_pane_t2_ParamLimits

0xb695,	// (0x0000e2cf) ai_message_heading_pane_t2

0x0001,

0xf91f,	// (0x00012559) ai_message_heading_pane_t_ParamLimits

0xf91f,	// (0x00012559) ai_message_heading_pane_t

0x2084,	// (0x00004cbe) bg_popup_heading_pane_cp1_ParamLimits

0x2084,	// (0x00004cbe) bg_popup_heading_pane_cp1

0x2016,	// (0x00004c50) list_ai_message_pane_ParamLimits

0x2016,	// (0x00004c50) list_ai_message_pane

0xe71f,	// (0x00011359) scroll_pane_cp10

0x1f62,	// (0x00004b9c) list_ai_message_pane_g1

0x1f6a,	// (0x00004ba4) list_ai_message_pane_g2

0x0001,

0xf8f3,	// (0x0001252d) list_ai_message_pane_g

0x1f72,	// (0x00004bac) list_ai_message_pane_t1_ParamLimits

0x1f72,	// (0x00004bac) list_ai_message_pane_t1

0x1f87,	// (0x00004bc1) list_ai_message_pane_t2_ParamLimits

0x1f87,	// (0x00004bc1) list_ai_message_pane_t2

0x1f9c,	// (0x00004bd6) list_ai_message_pane_t3_ParamLimits

0x1f9c,	// (0x00004bd6) list_ai_message_pane_t3

0x1fb1,	// (0x00004beb) list_ai_message_pane_t4_ParamLimits

0x1fb1,	// (0x00004beb) list_ai_message_pane_t4

0x0003,

0xf8f8,	// (0x00012532) list_ai_message_pane_t_ParamLimits

0xf8f8,	// (0x00012532) list_ai_message_pane_t

0xb5fb,	// (0x0000e235) cell_ai_soft_ind_pane_ParamLimits

0xb5fb,	// (0x0000e235) cell_ai_soft_ind_pane

0xf2a0,	// (0x00011eda) cell_ai_soft_ind_pane_g1_ParamLimits

0xf2a0,	// (0x00011eda) cell_ai_soft_ind_pane_g1

0xe0e1,	// (0x00010d1b) grid_highlight_cp1

0xf2ad,	// (0x00011ee7) text_secondary_cp56_ParamLimits

0xf2ad,	// (0x00011ee7) text_secondary_cp56

0x1f22,	// (0x00004b5c) example_general_pane_ParamLimits

0x1f22,	// (0x00004b5c) example_general_pane

0x1f2e,	// (0x00004b68) example_parent_pane_g1_ParamLimits

0x1f2e,	// (0x00004b68) example_parent_pane_g1

0x1f3a,	// (0x00004b74) example_parent_pane_t1_ParamLimits

0x1f3a,	// (0x00004b74) example_parent_pane_t1

0xa7ee,	// (0x0000d428) popup_preview_text_window_ParamLimits

0xa7ee,	// (0x0000d428) popup_preview_text_window

0xf1c2,	// (0x00011dfc) list_single_pane_cp2_g4

0xe349,	// (0x00010f83) bg_popup_preview_window_pane_ParamLimits

0xe349,	// (0x00010f83) bg_popup_preview_window_pane

0xb55d,	// (0x0000e197) popup_preview_text_window_t1_ParamLimits

0xb55d,	// (0x0000e197) popup_preview_text_window_t1

0x1c9a,	// (0x000048d4) popup_preview_text_window_t2_ParamLimits

0x1c9a,	// (0x000048d4) popup_preview_text_window_t2

0x1ce3,	// (0x0000491d) popup_preview_text_window_t3_ParamLimits

0x1ce3,	// (0x0000491d) popup_preview_text_window_t3

0x1d28,	// (0x00004962) popup_preview_text_window_t4_ParamLimits

0x1d28,	// (0x00004962) popup_preview_text_window_t4

0x0004,

0xf8c7,	// (0x00012501) popup_preview_text_window_t_ParamLimits

0xf8c7,	// (0x00012501) popup_preview_text_window_t

0x1da6,	// (0x000049e0) scroll_pane_cp11

0x09ec,	// (0x00003626) bg_popup_preview_window_pane_g1

0xb51d,	// (0x0000e157) bg_popup_preview_window_pane_g2

0xb525,	// (0x0000e15f) bg_popup_preview_window_pane_g3

0xb52d,	// (0x0000e167) bg_popup_preview_window_pane_g4

0xb535,	// (0x0000e16f) bg_popup_preview_window_pane_g5

0xb53d,	// (0x0000e177) bg_popup_preview_window_pane_g6

0xb545,	// (0x0000e17f) bg_popup_preview_window_pane_g7

0xb54d,	// (0x0000e187) bg_popup_preview_window_pane_g8

0xe0cd,	// (0x00010d07) aid_popup_width_pane

0xa76a,	// (0x0000d3a4) popup_midp_note_alarm_window_ParamLimits

0xa76a,	// (0x0000d3a4) popup_midp_note_alarm_window

0xe573,	// (0x000111ad) data_form_pane_ParamLimits

0x9ab1,	// (0x0000c6eb) form_field_data_pane_g1

0x9abb,	// (0x0000c6f5) form_field_data_pane_t1_ParamLimits

0xe57f,	// (0x000111b9) input_focus_pane_ParamLimits

0xe58d,	// (0x000111c7) data_form_wide_pane_ParamLimits

0xe59e,	// (0x000111d8) form_field_data_wide_pane_g1

0xe5ca,	// (0x00011204) form_field_data_wide_pane_t1_ParamLimits

0xe421,	// (0x0001105b) input_focus_pane_cp6_ParamLimits

0x9c2d,	// (0x0000c867) input_popup_find_pane_g1_ParamLimits

0x9c2d,	// (0x0000c867) input_popup_find_pane_g1

0xe9e6,	// (0x00011620) aid_navi_side_left_pane

0xe9fb,	// (0x00011635) aid_navi_side_right_pane

0x14fb,	// (0x00004135) bg_popup_window_pane_cp30_ParamLimits

0x14fb,	// (0x00004135) bg_popup_window_pane_cp30

0x1575,	// (0x000041af) popup_midp_note_alarm_window_g1_ParamLimits

0x1575,	// (0x000041af) popup_midp_note_alarm_window_g1

0x15a5,	// (0x000041df) popup_midp_note_alarm_window_t1_ParamLimits

0x15a5,	// (0x000041df) popup_midp_note_alarm_window_t1

0xb35e,	// (0x0000df98) popup_midp_note_alarm_window_t2_ParamLimits

0xb35e,	// (0x0000df98) popup_midp_note_alarm_window_t2

0xb40c,	// (0x0000e046) popup_midp_note_alarm_window_t3_ParamLimits

0xb40c,	// (0x0000e046) popup_midp_note_alarm_window_t3

0xb434,	// (0x0000e06e) popup_midp_note_alarm_window_t4_ParamLimits

0xb434,	// (0x0000e06e) popup_midp_note_alarm_window_t4

0x173c,	// (0x00004376) popup_midp_note_alarm_window_t5_ParamLimits

0x173c,	// (0x00004376) popup_midp_note_alarm_window_t5

0x000a,

0xf864,	// (0x0001249e) popup_midp_note_alarm_window_t_ParamLimits

0xf864,	// (0x0001249e) popup_midp_note_alarm_window_t

0x17e8,	// (0x00004422) wait_bar_pane_cp1_ParamLimits

0x17e8,	// (0x00004422) wait_bar_pane_cp1

0xe0e1,	// (0x00010d1b) wait_anim_pane_copy1

0xe0e1,	// (0x00010d1b) wait_border_pane_copy1

0x11f1,	// (0x00003e2b) wait_border_pane_g1_copy1

0xe5e4,	// (0x0001121e) form_field_popup_pane_g1

0x9ad5,	// (0x0000c70f) form_field_popup_pane_t1_ParamLimits

0xe57f,	// (0x000111b9) input_focus_pane_cp7_ParamLimits

0xe5ec,	// (0x00011226) list_form_pane_ParamLimits

0xe5f8,	// (0x00011232) form_field_popup_wide_pane_g1

0xe600,	// (0x0001123a) form_field_popup_wide_pane_t1_ParamLimits

0xe57f,	// (0x000111b9) input_focus_pane_cp8_ParamLimits

0xe615,	// (0x0001124f) list_form_wide_pane_ParamLimits

0x25dd,	// (0x00005217) aid_size_cell_graphic_pane

0x9b54,	// (0x0000c78e) data_form_pane_t1_ParamLimits

0xb8eb,	// (0x0000e525) data_form_wide_pane_t1_ParamLimits

0xac31,	// (0x0000d86b) bg_status_flat_pane

0x909c,	// (0x0000bcd6) title_pane_t1_ParamLimits

0xe117,	// (0x00010d51) title_pane_t2_ParamLimits

0xe13d,	// (0x00010d77) title_pane_t3_ParamLimits

0xf530,	// (0x0001216a) title_pane_t_ParamLimits

0xeba9,	// (0x000117e3) level_1_signal_ParamLimits

0xebb6,	// (0x000117f0) level_2_signal_ParamLimits

0xebc3,	// (0x000117fd) level_3_signal_ParamLimits

0xebd0,	// (0x0001180a) level_4_signal_ParamLimits

0xebdd,	// (0x00011817) level_5_signal_ParamLimits

0xebea,	// (0x00011824) level_6_signal_ParamLimits

0xebf7,	// (0x00011831) level_7_signal_ParamLimits

0xeba9,	// (0x000117e3) level_1_battery_ParamLimits

0xebb6,	// (0x000117f0) level_2_battery_ParamLimits

0xebc3,	// (0x000117fd) level_3_battery_ParamLimits

0xebd0,	// (0x0001180a) level_4_battery_ParamLimits

0xebdd,	// (0x00011817) level_5_battery_ParamLimits

0xebea,	// (0x00011824) level_6_battery_ParamLimits

0xebf7,	// (0x00011831) level_7_battery_ParamLimits

0x1400,	// (0x0000403a) bg_status_flat_pane_g1

0x1408,	// (0x00004042) bg_status_flat_pane_g2

0x1410,	// (0x0000404a) bg_status_flat_pane_g3

0x1418,	// (0x00004052) bg_status_flat_pane_g4

0x1420,	// (0x0000405a) bg_status_flat_pane_g5

0x1428,	// (0x00004062) bg_status_flat_pane_g6

0x1430,	// (0x0000406a) bg_status_flat_pane_g7

0x9130,	// (0x0000bd6a) tabs_3_active_pane_t1_ParamLimits

0x9130,	// (0x0000bd6a) tabs_3_passive_pane_t1_ParamLimits

0x914a,	// (0x0000bd84) tabs_4_active_pane_t1_ParamLimits

0x914a,	// (0x0000bd84) tabs_4_1_passive_pane_t1_ParamLimits

0x9c6c,	// (0x0000c8a6) tabs_2_active_pane_t1_ParamLimits

0x9c6c,	// (0x0000c8a6) tabs_2_passive_pane_t1_ParamLimits

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp4_ParamLimits

0x9c7e,	// (0x0000c8b8) tabs_2_long_active_pane_t1_ParamLimits

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp4_ParamLimits

0x0aa9,	// (0x000036e3) list_single_midp_graphic_pane_t1_ParamLimits

0xe15d,	// (0x00010d97) bg_active_tab_pane_cp5_ParamLimits

0x9c91,	// (0x0000c8cb) tabs_3_long_active_pane_t1_ParamLimits

0xf47b,	// (0x000120b5) bg_passive_tab_pane_cp5_ParamLimits

0x0aa9,	// (0x000036e3) list_single_midp_graphic_pane_t1

0xac31,	// (0x0000d86b) bg_status_flat_pane_ParamLimits

0x05cf,	// (0x00003209) indicator_pane_cp2_ParamLimits

0x05cf,	// (0x00003209) indicator_pane_cp2

0xadaf,	// (0x0000d9e9) navi_pane_srt_ParamLimits

0xadaf,	// (0x0000d9e9) navi_pane_srt

0x071e,	// (0x00003358) popup_clock_digital_analogue_window_cp1

0xe1bb,	// (0x00010df5) indicator_pane_t1

0xf25f,	// (0x00011e99) copy_highlight_pane

0xf25f,	// (0x00011e99) cursor_graphics_pane

0xf25f,	// (0x00011e99) graphic_within_text_pane

0xf25f,	// (0x00011e99) link_highlight_pane

0x1d69,	// (0x000049a3) popup_preview_text_window_t5_ParamLimits

0x1d69,	// (0x000049a3) popup_preview_text_window_t5

0xf2c7,	// (0x00011f01) cursor_digital_pane

0xf2c7,	// (0x00011f01) cursor_primary_pane

0xf2d8,	// (0x00011f12) cursor_primary_small_pane

0xf2e0,	// (0x00011f1a) cursor_secondary_pane

0xf2e8,	// (0x00011f22) cursor_title_pane

0xf2c7,	// (0x00011f01) link_highlight_digital_pane

0xf2cf,	// (0x00011f09) link_highlight_primary_pane

0xf2d8,	// (0x00011f12) link_highlight_primary_small_pane

0xf2e0,	// (0x00011f1a) link_highlight_secondary_pane

0xf2e8,	// (0x00011f22) link_highlight_title_pane

0xf2c7,	// (0x00011f01) copy_highlight_digital_pane

0xf2c7,	// (0x00011f01) copy_highlight_primary_pane

0xf2d8,	// (0x00011f12) copy_highlight_primary_small_pane

0xf2e0,	// (0x00011f1a) copy_highlight_secondary_pane

0xf2e8,	// (0x00011f22) copy_highlight_title_pane

0xf2e0,	// (0x00011f1a) graphic_text_digital_pane

0x149e,	// (0x000040d8) graphic_text_primary_pane

0x14a7,	// (0x000040e1) graphic_text_primary_small_pane

0xf2d8,	// (0x00011f12) graphic_text_secondary_pane

0xf2c7,	// (0x00011f01) graphic_text_title_pane

0xa175,	// (0x0000cdaf) cursor_primary_pane_g1

0x1490,	// (0x000040ca) cursor_text_primary_t1

0xb354,	// (0x0000df8e) cursor_primary_small_pane_g1

0x1482,	// (0x000040bc) cursor_text_primary_small_t1

0xb34a,	// (0x0000df84) cursor_primary_small_pane_g1_copy1

0x146a,	// (0x000040a4) cursor_text_primary_small_t1_copy1

0x1448,	// (0x00004082) cursor_text_title_t1

0xb340,	// (0x0000df7a) cursor_title_pane_g1

0xa175,	// (0x0000cdaf) cursor_digital_pane_g1

0xf2f0,	// (0x00011f2a) cursor_text_digital_t1

0xf2fe,	// (0x00011f38) link_highlight_primary_pane_g1

0x13f1,	// (0x0000402b) link_highlight_primary_pane_t1

0xf2fe,	// (0x00011f38) link_highlight_primary_small_pane_g1

0xf306,	// (0x00011f40) link_highlight_primary_small_pane_t1

0xf2fe,	// (0x00011f38) link_highlight_secondary_pane_g1

0xf315,	// (0x00011f4f) link_highlight_secondary_pane_t1

0x1356,	// (0x00003f90) link_highlight_title_pane_g1

0x136d,	// (0x00003fa7) link_highlight_title_pane_t1

0x1356,	// (0x00003f90) link_highlight_digital_pane_g1

0x135e,	// (0x00003f98) link_highlight_digital_pane_t1

0x1210,	// (0x00003e4a) copy_highlight_primary_pane_g1

0x1236,	// (0x00003e70) copy_highlight_primary_pane_t1

0x1210,	// (0x00003e4a) copy_highlight_primary_small_pane_g1

0x1227,	// (0x00003e61) copy_highlight_primary_small_pane_t1

0xf324,	// (0x00011f5e) copy_highlight_secondary_pane_g1

0xf32c,	// (0x00011f66) copy_highlight_secondary_pane_t1

0x1210,	// (0x00003e4a) copy_highlight_title_pane_g1

0x1218,	// (0x00003e52) copy_highlight_title_pane_t1

0x1210,	// (0x00003e4a) copy_highlight_digital_pane_g1

0x2863,	// (0x0000549d) copy_highlight_digital_pane_t1

0x27b7,	// (0x000053f1) graphic_text_primary_pane_g1

0x2847,	// (0x00005481) graphic_text_primary_pane_t1

0x2855,	// (0x0000548f) graphic_text_primary_pane_t2

0x0001,

0xf993,	// (0x000125cd) graphic_text_primary_pane_t

0x2823,	// (0x0000545d) graphic_text_primary_small_pane_g1

0x282b,	// (0x00005465) graphic_text_primary_small_pane_t1

0x2839,	// (0x00005473) graphic_text_primary_small_pane_t2

0x0001,

0xf98e,	// (0x000125c8) graphic_text_primary_small_pane_t

0x27ff,	// (0x00005439) graphic_text_secondary_pane_g1

0x2807,	// (0x00005441) graphic_text_secondary_pane_t1

0x2815,	// (0x0000544f) graphic_text_secondary_pane_t2

0x0001,

0xf989,	// (0x000125c3) graphic_text_secondary_pane_t

0x27db,	// (0x00005415) graphic_text_title_pane_g1

0x27e3,	// (0x0000541d) graphic_text_title_pane_t1

0x27f1,	// (0x0000542b) graphic_text_title_pane_t2

0x0001,

0xf984,	// (0x000125be) graphic_text_title_pane_t

0x27b7,	// (0x000053f1) graphic_text_digital_pane_g1

0x27bf,	// (0x000053f9) graphic_text_digital_pane_t1

0x27cd,	// (0x00005407) graphic_text_digital_pane_t2

0x0001,

0xf97f,	// (0x000125b9) graphic_text_digital_pane_t

0xe15d,	// (0x00010d97) navi_icon_pane_srt_ParamLimits

0xe15d,	// (0x00010d97) navi_icon_pane_srt

0xe0e1,	// (0x00010d1b) navi_midp_pane_srt

0xe0e1,	// (0x00010d1b) navi_navi_pane_srt

0xe15d,	// (0x00010d97) navi_text_pane_srt_ParamLimits

0xe15d,	// (0x00010d97) navi_text_pane_srt

0x2782,	// (0x000053bc) navi_navi_icon_text_pane_srt

0x278a,	// (0x000053c4) navi_navi_pane_srt_g1_ParamLimits

0x278a,	// (0x000053c4) navi_navi_pane_srt_g1

0x279c,	// (0x000053d6) navi_navi_pane_srt_g2_ParamLimits

0x279c,	// (0x000053d6) navi_navi_pane_srt_g2

0x0001,

0xf97a,	// (0x000125b4) navi_navi_pane_srt_g_ParamLimits

0xf97a,	// (0x000125b4) navi_navi_pane_srt_g

0x27ae,	// (0x000053e8) navi_navi_tabs_pane_srt

0x2782,	// (0x000053bc) navi_navi_text_pane_srt

0x2782,	// (0x000053bc) navi_navi_volume_pane_srt

0x2773,	// (0x000053ad) navi_navi_text_pane_srt_t1

0x274e,	// (0x00005388) navi_navi_volume_pane_srt_g1

0x2756,	// (0x00005390) volume_small_pane_srt_ParamLimits

0x2756,	// (0x00005390) volume_small_pane_srt

0xf33b,	// (0x00011f75) volume_small_pane_srt_g1_ParamLimits

0xf33b,	// (0x00011f75) volume_small_pane_srt_g1

0xf34b,	// (0x00011f85) volume_small_pane_srt_g2_ParamLimits

0xf34b,	// (0x00011f85) volume_small_pane_srt_g2

0xf35c,	// (0x00011f96) volume_small_pane_srt_g3_ParamLimits

0xf35c,	// (0x00011f96) volume_small_pane_srt_g3

0xf36d,	// (0x00011fa7) volume_small_pane_srt_g4_ParamLimits

0xf36d,	// (0x00011fa7) volume_small_pane_srt_g4

0xf37e,	// (0x00011fb8) volume_small_pane_srt_g5_ParamLimits

0xf37e,	// (0x00011fb8) volume_small_pane_srt_g5

0xf38f,	// (0x00011fc9) volume_small_pane_srt_g6_ParamLimits

0xf38f,	// (0x00011fc9) volume_small_pane_srt_g6

0xf3a0,	// (0x00011fda) volume_small_pane_srt_g7_ParamLimits

0xf3a0,	// (0x00011fda) volume_small_pane_srt_g7

0xf3b1,	// (0x00011feb) volume_small_pane_srt_g8_ParamLimits

0xf3b1,	// (0x00011feb) volume_small_pane_srt_g8

0xf3c2,	// (0x00011ffc) volume_small_pane_srt_g9_ParamLimits

0xf3c2,	// (0x00011ffc) volume_small_pane_srt_g9

0xf3d3,	// (0x0001200d) volume_small_pane_srt_g10_ParamLimits

0xf3d3,	// (0x0001200d) volume_small_pane_srt_g10

0x0009,

0xf727,	// (0x00012361) volume_small_pane_srt_g_ParamLimits

0xf727,	// (0x00012361) volume_small_pane_srt_g

0x9431,	// (0x0000c06b) query_popup_data_pane_cp2

0x273c,	// (0x00005376) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x273c,	// (0x00005376) navi_navi_icon_text_pane_srt_t1

0x149e,	// (0x000040d8) navi_tabs_2_long_pane_srt

0x149e,	// (0x000040d8) navi_tabs_2_pane_srt

0x149e,	// (0x000040d8) navi_tabs_3_long_pane_srt

0x149e,	// (0x000040d8) navi_tabs_3_pane_srt

0x149e,	// (0x000040d8) navi_tabs_4_pane_srt

0xbad4,	// (0x0000e70e) tabs_2_active_pane_srt_ParamLimits

0xbad4,	// (0x0000e70e) tabs_2_active_pane_srt

0xbae4,	// (0x0000e71e) tabs_2_passive_pane_srt_ParamLimits

0xbae4,	// (0x0000e71e) tabs_2_passive_pane_srt

0x0b84,	// (0x000037be) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0b84,	// (0x000037be) bg_passive_tab_pane_cp1_srt

0xbaa4,	// (0x0000e6de) bg_passive_tab_pane_g1_cp1_srt

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp1_srt

0xbaad,	// (0x0000e6e7) bg_passive_tab_pane_g3_cp1_srt

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp1_srt_ParamLimits

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp1_srt

0xbab6,	// (0x0000e6f0) tabs_2_active_pane_srt_g1

0xbabe,	// (0x0000e6f8) tabs_2_active_pane_srt_t1_ParamLimits

0xbabe,	// (0x0000e6f8) tabs_2_active_pane_srt_t1

0xbaa4,	// (0x0000e6de) bg_active_tab_pane_g1_cp1_srt

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp1_srt

0xbaad,	// (0x0000e6e7) bg_active_tab_pane_g3_cp1_srt

0xba71,	// (0x0000e6ab) tabs_3_active_pane_srt_ParamLimits

0xba71,	// (0x0000e6ab) tabs_3_active_pane_srt

0xba82,	// (0x0000e6bc) tabs_3_passive_pane_cp_srt_ParamLimits

0xba82,	// (0x0000e6bc) tabs_3_passive_pane_cp_srt

0xba93,	// (0x0000e6cd) tabs_3_passive_pane_srt_ParamLimits

0xba93,	// (0x0000e6cd) tabs_3_passive_pane_srt

0x0b84,	// (0x000037be) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0b84,	// (0x000037be) bg_passive_tab_pane_cp2_srt

0xa17f,	// (0x0000cdb9) bg_passive_tab_pane_g1_cp2_srt

0x9feb,	// (0x0000cc25) bg_passive_tab_pane_g2_cp2_srt

0xa188,	// (0x0000cdc2) bg_passive_tab_pane_g3_cp2_srt

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp2_srt_ParamLimits

0xe14f,	// (0x00010d89) bg_active_tab_pane_cp2_srt

0xba53,	// (0x0000e68d) tabs_3_active_pane_srt_g1

0xba5b,	// (0x0000e695) tabs_3_active_pane_srt_t1_ParamLimits

0xba5b,	// (0x0000e695) tabs_3_active_pane_srt_t1

0xa17f,	// (0x0000cdb9) bg_active_tab_pane_g1_cp2_srt

0x9feb,	// (0x0000cc25) bg_active_tab_pane_g2_cp2_srt

0xa188,	// (0x0000cdc2) bg_active_tab_pane_g3_cp2_srt

0x2653,	// (0x0000528d) tabs_4_active_pane_srt_ParamLimits

0x2653,	// (0x0000528d) tabs_4_active_pane_srt

0x2665,	// (0x0000529f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2665,	// (0x0000529f) tabs_4_passive_pane_cp2_srt

0xf48f,	// (0x000120c9) aid_size_cell_toolbar

0x21d0,	// (0x00004e0a) main_idle_act_pane_ParamLimits

0x0031,	// (0x00002c6b) popup_large_graphic_colour_window_ParamLimits

0xaaa0,	// (0x0000d6da) popup_toolbar_window_ParamLimits

0xaaa0,	// (0x0000d6da) popup_toolbar_window

0x23bd,	// (0x00004ff7) list_single_graphic_2heading_pane_ParamLimits

0x23bd,	// (0x00004ff7) list_single_graphic_2heading_pane

0xea72,	// (0x000116ac) aid_size_cell_apps_grid_lsc_pane

0xea84,	// (0x000116be) aid_size_cell_apps_grid_prt_pane

0xf47b,	// (0x000120b5) bg_wml_button_pane_cp1_ParamLimits

0xf47b,	// (0x000120b5) bg_wml_button_pane_cp1

0xb0cf,	// (0x0000dd09) form_midp_field_text_pane_t1_ParamLimits

0x0b84,	// (0x000037be) input_focus_pane_cp050_ParamLimits

0x0e8b,	// (0x00003ac5) list_midp_form_text_pane_ParamLimits

0x0e2e,	// (0x00003a68) input_focus_pane_cp051_ParamLimits

0x0e42,	// (0x00003a7c) list_midp_choice_pane_ParamLimits

0xb034,	// (0x0000dc6e) list_single_2graphic_pane_cp3_ParamLimits

0xb034,	// (0x0000dc6e) list_single_2graphic_pane_cp3

0xb048,	// (0x0000dc82) list_single_midp_graphic_pane_ParamLimits

0xb048,	// (0x0000dc82) list_single_midp_graphic_pane

0x087a,	// (0x000034b4) list_single_graphic_2heading_pane_g1_ParamLimits

0x087a,	// (0x000034b4) list_single_graphic_2heading_pane_g1

0xee4d,	// (0x00011a87) list_single_graphic_2heading_pane_g4_ParamLimits

0xee4d,	// (0x00011a87) list_single_graphic_2heading_pane_g4

0x0886,	// (0x000034c0) list_single_graphic_2heading_pane_g5_ParamLimits

0x0886,	// (0x000034c0) list_single_graphic_2heading_pane_g5

0x0002,

0xf77a,	// (0x000123b4) list_single_graphic_2heading_pane_g_ParamLimits

0xf77a,	// (0x000123b4) list_single_graphic_2heading_pane_g

0x0892,	// (0x000034cc) list_single_graphic_2heading_pane_t1_ParamLimits

0x0892,	// (0x000034cc) list_single_graphic_2heading_pane_t1

0x08a6,	// (0x000034e0) list_single_graphic_2heading_pane_t2_ParamLimits

0x08a6,	// (0x000034e0) list_single_graphic_2heading_pane_t2

0x08c0,	// (0x000034fa) list_single_graphic_2heading_pane_t3_ParamLimits

0x08c0,	// (0x000034fa) list_single_graphic_2heading_pane_t3

0x0002,

0xf781,	// (0x000123bb) list_single_graphic_2heading_pane_t_ParamLimits

0xf781,	// (0x000123bb) list_single_graphic_2heading_pane_t

0x08d8,	// (0x00003512) bg_popup_sub_pane_cp2

0x0902,	// (0x0000353c) grid_toobar_pane

0x093e,	// (0x00003578) cell_toolbar_pane_ParamLimits

0x093e,	// (0x00003578) cell_toolbar_pane

0x0990,	// (0x000035ca) cell_toolbar_pane_g1_ParamLimits

0x0990,	// (0x000035ca) cell_toolbar_pane_g1

0xaf4c,	// (0x0000db86) cell_toolbar_pane_g2_ParamLimits

0xaf4c,	// (0x0000db86) cell_toolbar_pane_g2

0x0001,

0xf78f,	// (0x000123c9) cell_toolbar_pane_g_ParamLimits

0xf78f,	// (0x000123c9) cell_toolbar_pane_g

0x09c6,	// (0x00003600) grid_highlight_pane_cp2_ParamLimits

0x09c6,	// (0x00003600) grid_highlight_pane_cp2

0x09e0,	// (0x0000361a) toolbar_button_pane

0x09ec,	// (0x00003626) toolbar_button_pane_g1

0x09f4,	// (0x0000362e) toolbar_button_pane_g2

0x09fc,	// (0x00003636) toolbar_button_pane_g3

0x0a04,	// (0x0000363e) toolbar_button_pane_g4

0x0a0c,	// (0x00003646) toolbar_button_pane_g5

0x0a14,	// (0x0000364e) toolbar_button_pane_g6

0x0a1c,	// (0x00003656) toolbar_button_pane_g7

0x0a24,	// (0x0000365e) toolbar_button_pane_g8

0x0a2c,	// (0x00003666) toolbar_button_pane_g9

0x0009,

0xf794,	// (0x000123ce) toolbar_button_pane_g

0x0a3c,	// (0x00003676) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0a3c,	// (0x00003676) list_single_2graphic_pane_g1_cp3

0xaf60,	// (0x0000db9a) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaf60,	// (0x0000db9a) list_single_2graphic_pane_g2_cp3

0xf0bc,	// (0x00011cf6) list_single_2graphic_pane_g3_cp3

0x0a59,	// (0x00003693) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a59,	// (0x00003693) list_single_2graphic_pane_g4_cp3

0xaf71,	// (0x0000dbab) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaf71,	// (0x0000dbab) list_single_2graphic_pane_t1_cp3

0xee59,	// (0x00011a93) list_single_midp_graphic_pane_g2_ParamLimits

0xee59,	// (0x00011a93) list_single_midp_graphic_pane_g2

0xf497,	// (0x000120d1) aid_zoom_text_primary

0xf49f,	// (0x000120d9) aid_zoom_text_secondary

0xf44a,	// (0x00012084) status_small_pane_g7_ParamLimits

0xf44a,	// (0x00012084) status_small_pane_g7

0xa1e4,	// (0x0000ce1e) status_small_pane_t1_ParamLimits

0x9078,	// (0x0000bcb2) title_pane_g2

0x0003,

0xf527,	// (0x00012161) title_pane_g

0x948b,	// (0x0000c0c5) aid_size_cell_colour_1_pane_ParamLimits

0x948b,	// (0x0000c0c5) aid_size_cell_colour_1_pane

0x949f,	// (0x0000c0d9) aid_size_cell_colour_2_pane_ParamLimits

0x949f,	// (0x0000c0d9) aid_size_cell_colour_2_pane

0x94b3,	// (0x0000c0ed) aid_size_cell_colour_3_pane_ParamLimits

0x94b3,	// (0x0000c0ed) aid_size_cell_colour_3_pane

0x94c7,	// (0x0000c101) aid_size_cell_colour_4_pane_ParamLimits

0x94c7,	// (0x0000c101) aid_size_cell_colour_4_pane

0xe8ee,	// (0x00011528) title_pane_stacon_g1_ParamLimits

0xe8ee,	// (0x00011528) title_pane_stacon_g1

0x128d,	// (0x00003ec7) popup_note_wait_window_g3_ParamLimits

0x128d,	// (0x00003ec7) popup_note_wait_window_g3

0x1303,	// (0x00003f3d) popup_note_wait_window_t5_ParamLimits

0x1303,	// (0x00003f3d) popup_note_wait_window_t5

0xe0e1,	// (0x00010d1b) main_feb_china_hwr_fs_writing_pane

0xa454,	// (0x0000d08e) popup_feb_china_hwr_fs_window_ParamLimits

0xa454,	// (0x0000d08e) popup_feb_china_hwr_fs_window

0xaf8d,	// (0x0000dbc7) aid_size_cell_hwr_fs_ParamLimits

0xaf8d,	// (0x0000dbc7) aid_size_cell_hwr_fs

0x0b84,	// (0x000037be) bg_popup_sub_pane_cp3_ParamLimits

0x0b84,	// (0x000037be) bg_popup_sub_pane_cp3

0xafa2,	// (0x0000dbdc) grid_hwr_fs_pane_ParamLimits

0xafa2,	// (0x0000dbdc) grid_hwr_fs_pane

0x0ba8,	// (0x000037e2) linegrid_hwr_fs_pane_ParamLimits

0x0ba8,	// (0x000037e2) linegrid_hwr_fs_pane

0xafba,	// (0x0000dbf4) cell_hwr_fs_pane_ParamLimits

0xafba,	// (0x0000dbf4) cell_hwr_fs_pane

0x0bda,	// (0x00003814) linegrid_hwr_fs_pane_g1_ParamLimits

0x0bda,	// (0x00003814) linegrid_hwr_fs_pane_g1

0xafe0,	// (0x0000dc1a) linegrid_hwr_fs_pane_g2_ParamLimits

0xafe0,	// (0x0000dc1a) linegrid_hwr_fs_pane_g2

0x0bf8,	// (0x00003832) linegrid_hwr_fs_pane_g3_ParamLimits

0x0bf8,	// (0x00003832) linegrid_hwr_fs_pane_g3

0xaff2,	// (0x0000dc2c) linegrid_hwr_fs_pane_g4_ParamLimits

0xaff2,	// (0x0000dc2c) linegrid_hwr_fs_pane_g4

0x0c1e,	// (0x00003858) linegrid_hwr_fs_pane_g5_ParamLimits

0x0c1e,	// (0x00003858) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ba,	// (0x000123f4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ba,	// (0x000123f4) linegrid_hwr_fs_pane_g

0x0c34,	// (0x0000386e) cell_hwr_fs_pane_g1_ParamLimits

0x0c34,	// (0x0000386e) cell_hwr_fs_pane_g1

0x07b4,	// (0x000033ee) cell_hwr_fs_pane_g2_ParamLimits

0x07b4,	// (0x000033ee) cell_hwr_fs_pane_g2

0xb00c,	// (0x0000dc46) cell_hwr_fs_pane_g3_ParamLimits

0xb00c,	// (0x0000dc46) cell_hwr_fs_pane_g3

0xb019,	// (0x0000dc53) cell_hwr_fs_pane_g4_ParamLimits

0xb019,	// (0x0000dc53) cell_hwr_fs_pane_g4

0x0003,

0xf7c5,	// (0x000123ff) cell_hwr_fs_pane_g_ParamLimits

0xf7c5,	// (0x000123ff) cell_hwr_fs_pane_g

0xb026,	// (0x0000dc60) cell_hwr_fs_pane_t1

0xe0e1,	// (0x00010d1b) grid_highlight_pane_cp6

0xe0e1,	// (0x00010d1b) main_idle_act2_pane

0xe706,	// (0x00011340) aid_inside_area_popup_secondary

0xb473,	// (0x0000e0ad) aid_inside_area_window_primary_ParamLimits

0xb473,	// (0x0000e0ad) aid_inside_area_window_primary

0xbafc,	// (0x0000e736) ai2_news_ticker_pane

0x287a,	// (0x000054b4) aid_size_cell_ai1_link_ParamLimits

0x287a,	// (0x000054b4) aid_size_cell_ai1_link

0xbb04,	// (0x0000e73e) popup_ai2_data_window_ParamLimits

0xbb04,	// (0x0000e73e) popup_ai2_data_window

0x28aa,	// (0x000054e4) popup_ai2_link_window_ParamLimits

0x28aa,	// (0x000054e4) popup_ai2_link_window

0x0b84,	// (0x000037be) bg_popup_sub_pane_cp4_ParamLimits

0x0b84,	// (0x000037be) bg_popup_sub_pane_cp4

0x28be,	// (0x000054f8) grid_ai2_link_pane_ParamLimits

0x28be,	// (0x000054f8) grid_ai2_link_pane

0x28d5,	// (0x0000550f) popup_ai2_link_window_g1_ParamLimits

0x28d5,	// (0x0000550f) popup_ai2_link_window_g1

0x28e1,	// (0x0000551b) popup_ai2_link_window_g2_ParamLimits

0x28e1,	// (0x0000551b) popup_ai2_link_window_g2

0x0001,

0xf998,	// (0x000125d2) popup_ai2_link_window_g_ParamLimits

0xf998,	// (0x000125d2) popup_ai2_link_window_g

0x28f0,	// (0x0000552a) ai2_mp_button_pane

0x28f8,	// (0x00005532) ai2_mp_volume_pane

0x0e2e,	// (0x00003a68) bg_popup_sub_pane_cp5_ParamLimits

0x0e2e,	// (0x00003a68) bg_popup_sub_pane_cp5

0x2900,	// (0x0000553a) heading_ai2_gene_pane_ParamLimits

0x2900,	// (0x0000553a) heading_ai2_gene_pane

0x290c,	// (0x00005546) list_ai2_gene_pane_ParamLimits

0x290c,	// (0x00005546) list_ai2_gene_pane

0x2954,	// (0x0000558e) cell_ai2_link_pane_ParamLimits

0x2954,	// (0x0000558e) cell_ai2_link_pane

0x296a,	// (0x000055a4) cell_ai2_link_pane_g1

0xe0e1,	// (0x00010d1b) grid_highlight_pane_cp7

0x2a3a,	// (0x00005674) ai2_mp_volume_pane_g1

0x2a42,	// (0x0000567c) ai2_mp_volume_pane_g2

0x29af,	// (0x000055e9) list_ai2_gene_pane_t1

0x2a4a,	// (0x00005684) ai2_mp_volume_pane_g3

0x0002,

0xf9b1,	// (0x000125eb) ai2_mp_volume_pane_g

0xbb1a,	// (0x0000e754) volume_small_pane_cp3

0x2a5b,	// (0x00005695) aid_size_cell_ai2_button

0x2a63,	// (0x0000569d) grid_ai2_button_pane

0x2a6c,	// (0x000056a6) cell_ai2_button_pane_ParamLimits

0x2a6c,	// (0x000056a6) cell_ai2_button_pane

0xe0b7,	// (0x00010cf1) cell_ai2_button_pane_g1

0xe0e1,	// (0x00010d1b) grid_highlight_pane_cp8

0x29fa,	// (0x00005634) ai2_gene_pane_t1_ParamLimits

0x29fa,	// (0x00005634) ai2_gene_pane_t1

0xa3b6,	// (0x0000cff0) aid_height_parent_landscape

0xb797,	// (0x0000e3d1) aid_height_set_list

0x21d0,	// (0x00004e0a) aid_size_parent

0x25dd,	// (0x00005217) aid_size_cell_graphic_pane_ParamLimits

0x291c,	// (0x00005556) popup_ai2_data_window_g1_ParamLimits

0x291c,	// (0x00005556) popup_ai2_data_window_g1

0x2928,	// (0x00005562) ai2_news_ticker_pane_g1

0x2930,	// (0x0000556a) ai2_news_ticker_pane_g2

0x0001,

0xf99d,	// (0x000125d7) ai2_news_ticker_pane_g

0x2938,	// (0x00005572) ai2_news_ticker_pane_t1

0x2946,	// (0x00005580) ai2_news_ticker_pane_t2

0x0001,

0xf9a2,	// (0x000125dc) ai2_news_ticker_pane_t

0x2973,	// (0x000055ad) heading_ai2_gene_pane_g1

0x297b,	// (0x000055b5) heading_ai2_gene_pane_t1_ParamLimits

0x297b,	// (0x000055b5) heading_ai2_gene_pane_t1

0x2990,	// (0x000055ca) list_highlight_pane_cp6

0x2998,	// (0x000055d2) ai2_gene_pane_ParamLimits

0x2998,	// (0x000055d2) ai2_gene_pane

0x29bd,	// (0x000055f7) list_ai2_gene_pane_t2

0x0001,

0xf9a7,	// (0x000125e1) list_ai2_gene_pane_t

0x29cb,	// (0x00005605) list_highlight_pane_cp8_ParamLimits

0x29cb,	// (0x00005605) list_highlight_pane_cp8

0x29dc,	// (0x00005616) ai2_gene_pane_g1_ParamLimits

0x29dc,	// (0x00005616) ai2_gene_pane_g1

0x29ee,	// (0x00005628) ai2_gene_pane_g2_ParamLimits

0x29ee,	// (0x00005628) ai2_gene_pane_g2

0x0001,

0xf9ac,	// (0x000125e6) ai2_gene_pane_g_ParamLimits

0xf9ac,	// (0x000125e6) ai2_gene_pane_g

0xe4cc,	// (0x00011106) scroll_pane_cp12

0xa373,	// (0x0000cfad) control_pane_t3_ParamLimits

0xa373,	// (0x0000cfad) control_pane_t3

0xa1d5,	// (0x0000ce0f) status_small_pane_g8_ParamLimits

0xa1d5,	// (0x0000ce0f) status_small_pane_g8

0xa517,	// (0x0000d151) popup_find_window_ParamLimits

0xa7a4,	// (0x0000d3de) popup_note_image_window_ParamLimits

0x096e,	// (0x000035a8) list_double2_graphic_pane_vc_g1_ParamLimits

0x096e,	// (0x000035a8) list_double2_graphic_pane_vc_g1

0xee4d,	// (0x00011a87) list_double2_graphic_pane_vc_g2_ParamLimits

0xee4d,	// (0x00011a87) list_double2_graphic_pane_vc_g2

0x0886,	// (0x000034c0) list_double2_graphic_pane_vc_g3_ParamLimits

0x0886,	// (0x000034c0) list_double2_graphic_pane_vc_g3

0x0002,

0xf788,	// (0x000123c2) list_double2_graphic_pane_vc_g_ParamLimits

0xf788,	// (0x000123c2) list_double2_graphic_pane_vc_g

0x097a,	// (0x000035b4) list_double2_graphic_pane_vc_t1_ParamLimits

0x097a,	// (0x000035b4) list_double2_graphic_pane_vc_t1

0xee4d,	// (0x00011a87) list_single_heading_pane_vc_g1_ParamLimits

0xee4d,	// (0x00011a87) list_single_heading_pane_vc_g1

0x0886,	// (0x000034c0) list_single_heading_pane_vc_g2_ParamLimits

0x0886,	// (0x000034c0) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x000121db) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x000121db) list_single_heading_pane_vc_g

0x0a81,	// (0x000036bb) list_single_heading_pane_vc_t1_ParamLimits

0x0a81,	// (0x000036bb) list_single_heading_pane_vc_t1

0x0a97,	// (0x000036d1) list_single_heading_pane_vc_t2_ParamLimits

0x0a97,	// (0x000036d1) list_single_heading_pane_vc_t2

0x0001,

0xf7a9,	// (0x000123e3) list_single_heading_pane_vc_t_ParamLimits

0xf7a9,	// (0x000123e3) list_single_heading_pane_vc_t

0x0abf,	// (0x000036f9) list_setting_number_pane_vc_g1_ParamLimits

0x0abf,	// (0x000036f9) list_setting_number_pane_vc_g1

0x0acb,	// (0x00003705) list_setting_number_pane_vc_g2_ParamLimits

0x0acb,	// (0x00003705) list_setting_number_pane_vc_g2

0x0001,

0xf7ae,	// (0x000123e8) list_setting_number_pane_vc_g_ParamLimits

0xf7ae,	// (0x000123e8) list_setting_number_pane_vc_g

0x0ad7,	// (0x00003711) list_setting_number_pane_vc_t1_ParamLimits

0x0ad7,	// (0x00003711) list_setting_number_pane_vc_t1

0x0aeb,	// (0x00003725) list_setting_number_pane_vc_t2_ParamLimits

0x0aeb,	// (0x00003725) list_setting_number_pane_vc_t2

0x0b07,	// (0x00003741) list_setting_number_pane_vc_t3_ParamLimits

0x0b07,	// (0x00003741) list_setting_number_pane_vc_t3

0x0002,

0xf7b3,	// (0x000123ed) list_setting_number_pane_vc_t_ParamLimits

0xf7b3,	// (0x000123ed) list_setting_number_pane_vc_t

0x0b33,	// (0x0000376d) set_value_pane_vc_ParamLimits

0x0b33,	// (0x0000376d) set_value_pane_vc

0x23bd,	// (0x00004ff7) list_double2_graphic_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double2_graphic_pane_vc

0x23d0,	// (0x0000500a) list_double2_large_graphic_pane_vc_ParamLimits

0x23d0,	// (0x0000500a) list_double2_large_graphic_pane_vc

0x23bd,	// (0x00004ff7) list_double2_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double2_pane_vc

0x23bd,	// (0x00004ff7) list_double_graphic_heading_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double_graphic_heading_pane_vc

0x23bd,	// (0x00004ff7) list_double_graphic_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double_graphic_pane_vc

0x23bd,	// (0x00004ff7) list_double_heading_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double_heading_pane_vc

0x23e2,	// (0x0000501c) list_double_large_graphic_pane_vc_ParamLimits

0x23e2,	// (0x0000501c) list_double_large_graphic_pane_vc

0x23bd,	// (0x00004ff7) list_double_number_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double_number_pane_vc

0x23bd,	// (0x00004ff7) list_double_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double_pane_vc

0x23bd,	// (0x00004ff7) list_double_time_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_double_time_pane_vc

0x23bd,	// (0x00004ff7) list_setting_number_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_setting_number_pane_vc

0x23bd,	// (0x00004ff7) list_setting_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_setting_pane_vc

0x23bd,	// (0x00004ff7) list_single_graphic_heading_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_single_graphic_heading_pane_vc

0x23bd,	// (0x00004ff7) list_single_heading_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_single_heading_pane_vc

0x23bd,	// (0x00004ff7) list_single_number_heading_pane_vc_ParamLimits

0x23bd,	// (0x00004ff7) list_single_number_heading_pane_vc

0x2aa0,	// (0x000056da) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2aa0,	// (0x000056da) list_double_graphic_heading_pane_vc_g1

0xe87b,	// (0x000114b5) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe87b,	// (0x000114b5) list_double_graphic_heading_pane_vc_g2

0xe887,	// (0x000114c1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe887,	// (0x000114c1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9b8,	// (0x000125f2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9b8,	// (0x000125f2) list_double_graphic_heading_pane_vc_g

0x2aac,	// (0x000056e6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2aac,	// (0x000056e6) list_double_graphic_heading_pane_vc_t1

0x2ac0,	// (0x000056fa) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2ac0,	// (0x000056fa) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9bf,	// (0x000125f9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9bf,	// (0x000125f9) list_double_graphic_heading_pane_vc_t

0x0abf,	// (0x000036f9) list_setting_pane_vc_g1_ParamLimits

0x0abf,	// (0x000036f9) list_setting_pane_vc_g1

0x0acb,	// (0x00003705) list_setting_pane_vc_g2_ParamLimits

0x0acb,	// (0x00003705) list_setting_pane_vc_g2

0x0001,

0xf7ae,	// (0x000123e8) list_setting_pane_vc_g_ParamLimits

0xf7ae,	// (0x000123e8) list_setting_pane_vc_g

0x2d2e,	// (0x00005968) list_setting_pane_vc_t1_ParamLimits

0x2d2e,	// (0x00005968) list_setting_pane_vc_t1

0x2d4a,	// (0x00005984) list_setting_pane_vc_t2_ParamLimits

0x2d4a,	// (0x00005984) list_setting_pane_vc_t2

0x0001,

0xfa02,	// (0x0001263c) list_setting_pane_vc_t_ParamLimits

0xfa02,	// (0x0001263c) list_setting_pane_vc_t

0x0b33,	// (0x0000376d) set_value_pane_cp_vc_ParamLimits

0x0b33,	// (0x0000376d) set_value_pane_cp_vc

0xee4d,	// (0x00011a87) list_single_number_heading_pane_vc_g1_ParamLimits

0xee4d,	// (0x00011a87) list_single_number_heading_pane_vc_g1

0x0886,	// (0x000034c0) list_single_number_heading_pane_vc_g2_ParamLimits

0x0886,	// (0x000034c0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x000121db) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x000121db) list_single_number_heading_pane_vc_g

0x2d64,	// (0x0000599e) list_single_number_heading_pane_vc_t1_ParamLimits

0x2d64,	// (0x0000599e) list_single_number_heading_pane_vc_t1

0x2d7a,	// (0x000059b4) list_single_number_heading_pane_vc_t2_ParamLimits

0x2d7a,	// (0x000059b4) list_single_number_heading_pane_vc_t2

0x2d90,	// (0x000059ca) list_single_number_heading_pane_vc_t3_ParamLimits

0x2d90,	// (0x000059ca) list_single_number_heading_pane_vc_t3

0x0002,

0xfa07,	// (0x00012641) list_single_number_heading_pane_vc_t_ParamLimits

0xfa07,	// (0x00012641) list_single_number_heading_pane_vc_t

0x2da2,	// (0x000059dc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2da2,	// (0x000059dc) list_single_graphic_heading_pane_vc_g1

0xee4d,	// (0x00011a87) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xee4d,	// (0x00011a87) list_single_graphic_heading_pane_vc_g4

0x0886,	// (0x000034c0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0886,	// (0x000034c0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0e,	// (0x00012648) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0e,	// (0x00012648) list_single_graphic_heading_pane_vc_g

0x2d64,	// (0x0000599e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x2d64,	// (0x0000599e) list_single_graphic_heading_pane_vc_t1

0x2dae,	// (0x000059e8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2dae,	// (0x000059e8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa15,	// (0x0001264f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa15,	// (0x0001264f) list_single_graphic_heading_pane_vc_t

0xee4d,	// (0x00011a87) list_double2_pane_vc_g1_ParamLimits

0xee4d,	// (0x00011a87) list_double2_pane_vc_g1

0x0886,	// (0x000034c0) list_double2_pane_vc_g2_ParamLimits

0x0886,	// (0x000034c0) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x000121db) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x000121db) list_double2_pane_vc_g

0x2dc0,	// (0x000059fa) list_double2_pane_vc_t1_ParamLimits

0x2dc0,	// (0x000059fa) list_double2_pane_vc_t1

0x2dd8,	// (0x00005a12) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2dd8,	// (0x00005a12) list_double2_large_graphic_pane_vc_g1

0x2de4,	// (0x00005a1e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2de4,	// (0x00005a1e) list_double2_large_graphic_pane_vc_g2

0x2df0,	// (0x00005a2a) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2df0,	// (0x00005a2a) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x000121f8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x000121f8) list_double2_large_graphic_pane_vc_g

0x2dfc,	// (0x00005a36) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2dfc,	// (0x00005a36) list_double2_large_graphic_pane_vc_t1

0x2e12,	// (0x00005a4c) list_double_time_pane_vc_g1_ParamLimits

0x2e12,	// (0x00005a4c) list_double_time_pane_vc_g1

0x2e1e,	// (0x00005a58) list_double_time_pane_vc_g2_ParamLimits

0x2e1e,	// (0x00005a58) list_double_time_pane_vc_g2

0x0001,

0xfa1a,	// (0x00012654) list_double_time_pane_vc_g_ParamLimits

0xfa1a,	// (0x00012654) list_double_time_pane_vc_g

0x2e2a,	// (0x00005a64) list_double_time_pane_vc_t1_ParamLimits

0x2e2a,	// (0x00005a64) list_double_time_pane_vc_t1

0x2e4e,	// (0x00005a88) list_double_time_pane_vc_t2_ParamLimits

0x2e4e,	// (0x00005a88) list_double_time_pane_vc_t2

0x2e78,	// (0x00005ab2) list_double_time_pane_vc_t3_ParamLimits

0x2e78,	// (0x00005ab2) list_double_time_pane_vc_t3

0x2e8a,	// (0x00005ac4) list_double_time_pane_vc_t4_ParamLimits

0x2e8a,	// (0x00005ac4) list_double_time_pane_vc_t4

0x0003,

0xfa1f,	// (0x00012659) list_double_time_pane_vc_t_ParamLimits

0xfa1f,	// (0x00012659) list_double_time_pane_vc_t

0xee4d,	// (0x00011a87) list_double_pane_vc_g1_ParamLimits

0xee4d,	// (0x00011a87) list_double_pane_vc_g1

0x0886,	// (0x000034c0) list_double_pane_vc_g2_ParamLimits

0x0886,	// (0x000034c0) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x000121db) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x000121db) list_double_pane_vc_g

0x2e9e,	// (0x00005ad8) list_double_pane_vc_t1_ParamLimits

0x2e9e,	// (0x00005ad8) list_double_pane_vc_t1

0x2eb2,	// (0x00005aec) list_double_pane_vc_t2_ParamLimits

0x2eb2,	// (0x00005aec) list_double_pane_vc_t2

0x0001,

0xfa28,	// (0x00012662) list_double_pane_vc_t_ParamLimits

0xfa28,	// (0x00012662) list_double_pane_vc_t

0xee4d,	// (0x00011a87) list_double_number_pane_vc_g1_ParamLimits

0xee4d,	// (0x00011a87) list_double_number_pane_vc_g1

0x0886,	// (0x000034c0) list_double_number_pane_vc_g2_ParamLimits

0x0886,	// (0x000034c0) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x000121db) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x000121db) list_double_number_pane_vc_g

0x2eca,	// (0x00005b04) list_double_number_pane_vc_t1_ParamLimits

0x2eca,	// (0x00005b04) list_double_number_pane_vc_t1

0x2e9e,	// (0x00005ad8) list_double_number_pane_vc_t2_ParamLimits

0x2e9e,	// (0x00005ad8) list_double_number_pane_vc_t2

0x2edc,	// (0x00005b16) list_double_number_pane_vc_t3_ParamLimits

0x2edc,	// (0x00005b16) list_double_number_pane_vc_t3

0x0002,

0xfa2d,	// (0x00012667) list_double_number_pane_vc_t_ParamLimits

0xfa2d,	// (0x00012667) list_double_number_pane_vc_t

0x2ef6,	// (0x00005b30) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2ef6,	// (0x00005b30) list_double_large_graphic_pane_vc_g1

0x2f12,	// (0x00005b4c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2f12,	// (0x00005b4c) list_double_large_graphic_pane_vc_g2

0x2f26,	// (0x00005b60) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2f26,	// (0x00005b60) list_double_large_graphic_pane_vc_g3

0x2f35,	// (0x00005b6f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2f35,	// (0x00005b6f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa34,	// (0x0001266e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001266e) list_double_large_graphic_pane_vc_g

0x2f44,	// (0x00005b7e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2f44,	// (0x00005b7e) list_double_large_graphic_pane_vc_t1

0x2f60,	// (0x00005b9a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2f60,	// (0x00005b9a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x00012677) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3d,	// (0x00012677) list_double_large_graphic_pane_vc_t

0xe87b,	// (0x000114b5) list_double_heading_pane_vc_g1_ParamLimits

0xe87b,	// (0x000114b5) list_double_heading_pane_vc_g1

0xe887,	// (0x000114c1) list_double_heading_pane_vc_g2_ParamLimits

0xe887,	// (0x000114c1) list_double_heading_pane_vc_g2

0x0001,

0xfa42,	// (0x0001267c) list_double_heading_pane_vc_g_ParamLimits

0xfa42,	// (0x0001267c) list_double_heading_pane_vc_g

0x2f82,	// (0x00005bbc) list_double_heading_pane_vc_t1_ParamLimits

0x2f82,	// (0x00005bbc) list_double_heading_pane_vc_t1

0x2f96,	// (0x00005bd0) list_double_heading_pane_vc_t2_ParamLimits

0x2f96,	// (0x00005bd0) list_double_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x00012681) list_double_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x00012681) list_double_heading_pane_vc_t

0x2fae,	// (0x00005be8) list_double_graphic_pane_vc_g1_ParamLimits

0x2fae,	// (0x00005be8) list_double_graphic_pane_vc_g1

0x2fc1,	// (0x00005bfb) list_double_graphic_pane_vc_g2_ParamLimits

0x2fc1,	// (0x00005bfb) list_double_graphic_pane_vc_g2

0xee4d,	// (0x00011a87) list_double_graphic_pane_vc_g3_ParamLimits

0xee4d,	// (0x00011a87) list_double_graphic_pane_vc_g3

0x0003,

0xfa4c,	// (0x00012686) list_double_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x00012686) list_double_graphic_pane_vc_g

0x2fde,	// (0x00005c18) list_double_graphic_pane_vc_t1_ParamLimits

0x2fde,	// (0x00005c18) list_double_graphic_pane_vc_t1

0x2ffd,	// (0x00005c37) list_double_graphic_pane_vc_t2_ParamLimits

0x2ffd,	// (0x00005c37) list_double_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0001268f) list_double_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0001268f) list_double_graphic_pane_vc_t

0xe0d9,	// (0x00010d13) aid_size_cell_fastswap

0x8ce3,	// (0x0000b91d) aid_size_cell_touch_ParamLimits

0x8ce3,	// (0x0000b91d) aid_size_cell_touch

0xe0eb,	// (0x00010d25) popup_fast_swap_wide_window_ParamLimits

0xe0eb,	// (0x00010d25) popup_fast_swap_wide_window

0x900f,	// (0x0000bc49) touch_pane_ParamLimits

0x900f,	// (0x0000bc49) touch_pane

0xe548,	// (0x00011182) button_value_adjust_pane_cp2

0xe550,	// (0x0001118a) button_value_adjust_pane_cp4

0xe558,	// (0x00011192) form_field_data_pane_cp2

0x9a5d,	// (0x0000c697) form_field_data_wide_pane_cp2

0xeab3,	// (0x000116ed) bg_scroll_pane_ParamLimits

0x9d93,	// (0x0000c9cd) scroll_handle_pane_ParamLimits

0xead2,	// (0x0001170c) scroll_sc2_down_pane_ParamLimits

0xead2,	// (0x0001170c) scroll_sc2_down_pane

0xeaf9,	// (0x00011733) scroll_sc2_up_pane_ParamLimits

0xeaf9,	// (0x00011733) scroll_sc2_up_pane

0xbc56,	// (0x0000e890) grid_wheel_folder_pane_g1_ParamLimits

0xbc56,	// (0x0000e890) grid_wheel_folder_pane_g1

0xef60,	// (0x00011b9a) clock_nsta_pane_cp2_ParamLimits

0xef60,	// (0x00011b9a) clock_nsta_pane_cp2

0xa0b9,	// (0x0000ccf3) listscroll_midp_pane_ParamLimits

0xa0c5,	// (0x0000ccff) midp_canvas_pane

0xf487,	// (0x000120c1) nsta_clock_indic_pane

0xf4c7,	// (0x00012101) listscroll_form_pane_vc

0xf4d7,	// (0x00012111) listscroll_set_pane_vc_ParamLimits

0xf4d7,	// (0x00012111) listscroll_set_pane_vc

0xac59,	// (0x0000d893) clock_nsta_pane

0xac83,	// (0x0000d8bd) indicator_nsta_pane

0x08d8,	// (0x00003512) bg_popup_sub_pane_cp2_ParamLimits

0x08ec,	// (0x00003526) find_pane_cp2_ParamLimits

0x08ec,	// (0x00003526) find_pane_cp2

0x0902,	// (0x0000353c) grid_toobar_pane_ParamLimits

0x0b43,	// (0x0000377d) list_form_gen_pane_vc_ParamLimits

0x0b43,	// (0x0000377d) list_form_gen_pane_vc

0x0b59,	// (0x00003793) scroll_pane_cp8_vc_ParamLimits

0x0b59,	// (0x00003793) scroll_pane_cp8_vc

0x0c72,	// (0x000038ac) data_form_wide_pane_vc_ParamLimits

0x0c72,	// (0x000038ac) data_form_wide_pane_vc

0x0c7e,	// (0x000038b8) form_field_data_wide_pane_vc_g1

0x0c86,	// (0x000038c0) form_field_data_wide_pane_vc_t1_ParamLimits

0x0c86,	// (0x000038c0) form_field_data_wide_pane_vc_t1

0xe57f,	// (0x000111b9) input_focus_pane_cp6_vc_ParamLimits

0xe57f,	// (0x000111b9) input_focus_pane_cp6_vc

0x1014,	// (0x00003c4e) list_midp_pane_ParamLimits

0x2647,	// (0x00005281) scroll_pane_cp16_ParamLimits

0x2647,	// (0x00005281) scroll_pane_cp16

0x106a,	// (0x00003ca4) button_value_adjust_pane_ParamLimits

0x106a,	// (0x00003ca4) button_value_adjust_pane

0xb7a8,	// (0x0000e3e2) button_value_adjust_pane_cp6_ParamLimits

0xb7a8,	// (0x0000e3e2) button_value_adjust_pane_cp6

0xb8c2,	// (0x0000e4fc) settings_code_pane_cp_ParamLimits

0xb8c2,	// (0x0000e4fc) settings_code_pane_cp

0xe0b7,	// (0x00010cf1) cell_touch_pane_g1

0xe0b7,	// (0x00010cf1) cell_touch_pane_g2

0x0001,

0xf6cd,	// (0x00012307) cell_touch_pane_g

0xbb23,	// (0x0000e75d) cell_touch_pane_cp_ParamLimits

0xbb23,	// (0x0000e75d) cell_touch_pane_cp

0xbb3f,	// (0x0000e779) cell_touch_pane_ParamLimits

0xbb3f,	// (0x0000e779) cell_touch_pane

0xe0b7,	// (0x00010cf1) scroll_sc2_down_pane_g1

0xe0b7,	// (0x00010cf1) scroll_sc2_up_pane_g1

0xe0e1,	// (0x00010d1b) bg_set_opt_pane_cp4_vc

0x2ad8,	// (0x00005712) list_set_graphic_pane_vc_g1_ParamLimits

0x2ad8,	// (0x00005712) list_set_graphic_pane_vc_g1

0x2ae4,	// (0x0000571e) list_set_graphic_pane_vc_g2_ParamLimits

0x2ae4,	// (0x0000571e) list_set_graphic_pane_vc_g2

0x0001,

0xf9c4,	// (0x000125fe) list_set_graphic_pane_vc_g_ParamLimits

0xf9c4,	// (0x000125fe) list_set_graphic_pane_vc_g

0x2af0,	// (0x0000572a) text_primary_small_cp13_vc_ParamLimits

0x2af0,	// (0x0000572a) text_primary_small_cp13_vc

0x2b08,	// (0x00005742) list_set_graphic_pane_vc_ParamLimits

0x2b08,	// (0x00005742) list_set_graphic_pane_vc

0xe0e1,	// (0x00010d1b) input_focus_pane_cp2_vc

0xe0b7,	// (0x00010cf1) setting_code_pane_vc_g1

0xe174,	// (0x00010dae) setting_code_pane_vc_t1

0x2b1b,	// (0x00005755) set_text_pane_vc_t1_ParamLimits

0x2b1b,	// (0x00005755) set_text_pane_vc_t1

0xe0e1,	// (0x00010d1b) input_focus_pane_cp1_vc

0x2b38,	// (0x00005772) list_set_text_pane_vc

0xe0b7,	// (0x00010cf1) setting_text_pane_vc_g1

0xe0e1,	// (0x00010d1b) bg_set_opt_pane_cp2_vc

0xe16b,	// (0x00010da5) setting_slider_graphic_pane_vc_g1

0x2b42,	// (0x0000577c) setting_slider_graphic_pane_vc_t1

0x2b52,	// (0x0000578c) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9c9,	// (0x00012603) setting_slider_graphic_pane_vc_t

0x2b62,	// (0x0000579c) slider_set_pane_cp_vc

0x2b6a,	// (0x000057a4) slider_set_pane_vc_g1

0x2b73,	// (0x000057ad) slider_set_pane_vc_g2

0x0006,

0xf9ce,	// (0x00012608) slider_set_pane_vc_g

0xe645,	// (0x0001127f) set_opt_bg_pane_g1_copy1

0xe64d,	// (0x00011287) set_opt_bg_pane_g2_copy1

0x2b9f,	// (0x000057d9) set_opt_bg_pane_g3_copy1

0xe65d,	// (0x00011297) set_opt_bg_pane_g4_copy1

0xe665,	// (0x0001129f) set_opt_bg_pane_g5_copy1

0xe66d,	// (0x000112a7) set_opt_bg_pane_g6_copy1

0x2ba7,	// (0x000057e1) set_opt_bg_pane_g7_copy1

0x2bb1,	// (0x000057eb) set_opt_bg_pane_g8_copy1

0x2bb9,	// (0x000057f3) set_opt_bg_pane_g9_copy1

0xe0e1,	// (0x00010d1b) bg_set_opt_pane_cp_vc

0x2bc1,	// (0x000057fb) setting_slider_pane_vc_t1

0x2bd0,	// (0x0000580a) setting_slider_pane_vc_t2

0x2be0,	// (0x0000581a) setting_slider_pane_vc_t3

0x0002,

0xf9dd,	// (0x00012617) setting_slider_pane_vc_t

0x2bf0,	// (0x0000582a) slider_set_pane_vc

0x188b,	// (0x000044c5) volume_set_pane_vc_g1

0x2bf8,	// (0x00005832) volume_set_pane_vc_g2

0x2c01,	// (0x0000583b) volume_set_pane_vc_g3

0x2c0a,	// (0x00005844) volume_set_pane_vc_g4

0x2c13,	// (0x0000584d) volume_set_pane_vc_g5

0x2c1c,	// (0x00005856) volume_set_pane_vc_g6

0x2c25,	// (0x0000585f) volume_set_pane_vc_g7

0x2c2e,	// (0x00005868) volume_set_pane_vc_g8

0x2c37,	// (0x00005871) volume_set_pane_vc_g9

0x2c40,	// (0x0000587a) volume_set_pane_vc_g10

0x0009,

0xf9e4,	// (0x0001261e) volume_set_pane_vc_g

0x2c49,	// (0x00005883) volume_set_pane_vc

0x2c53,	// (0x0000588d) button_value_adjust_pane_cp1_vc

0x2c5d,	// (0x00005897) list_highlight_pane_cp2_vc

0x2c66,	// (0x000058a0) list_set_pane_vc_ParamLimits

0x2c66,	// (0x000058a0) list_set_pane_vc

0x2cc4,	// (0x000058fe) main_pane_set_vc_t1_ParamLimits

0x2cc4,	// (0x000058fe) main_pane_set_vc_t1

0x2cd9,	// (0x00005913) main_pane_set_vc_t2_ParamLimits

0x2cd9,	// (0x00005913) main_pane_set_vc_t2

0x2ceb,	// (0x00005925) main_pane_set_vc_t3_ParamLimits

0x2ceb,	// (0x00005925) main_pane_set_vc_t3

0x2cfd,	// (0x00005937) main_pane_set_vc_t4_ParamLimits

0x2cfd,	// (0x00005937) main_pane_set_vc_t4

0x0003,

0xf9f9,	// (0x00012633) main_pane_set_vc_t_ParamLimits

0xf9f9,	// (0x00012633) main_pane_set_vc_t

0x2d0f,	// (0x00005949) setting_code_pane_vc_ParamLimits

0x2d0f,	// (0x00005949) setting_code_pane_vc

0x2d1e,	// (0x00005958) setting_slider_graphic_pane_vc

0x2d1e,	// (0x00005958) setting_slider_pane_vc

0x2d1e,	// (0x00005958) setting_text_pane_vc

0x2d1e,	// (0x00005958) setting_volume_pane_vc

0x2d26,	// (0x00005960) scroll_pane_cp121_vc

0xe536,	// (0x00011170) set_content_pane_vc

0x302c,	// (0x00005c66) button_value_adjust_pane_g1

0x3035,	// (0x00005c6f) button_value_adjust_pane_g2

0x0001,

0xfa5a,	// (0x00012694) button_value_adjust_pane_g

0x303e,	// (0x00005c78) form_field_slider_wide_pane_vc_t1_ParamLimits

0x303e,	// (0x00005c78) form_field_slider_wide_pane_vc_t1

0x3052,	// (0x00005c8c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3052,	// (0x00005c8c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5f,	// (0x00012699) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x00012699) form_field_slider_wide_pane_vc_t

0xe14f,	// (0x00010d89) input_focus_pane_cp10_vc_ParamLimits

0xe14f,	// (0x00010d89) input_focus_pane_cp10_vc

0x3080,	// (0x00005cba) slider_cont_pane_cp1_vc_ParamLimits

0x3080,	// (0x00005cba) slider_cont_pane_cp1_vc

0x3092,	// (0x00005ccc) slider_form_pane_g1_cp2

0x2b73,	// (0x000057ad) slider_form_pane_g2_cp2

0x30bf,	// (0x00005cf9) form_field_slider_pane_vc_t3

0x30cd,	// (0x00005d07) form_field_slider_pane_vc_t4

0x30db,	// (0x00005d15) slider_form_pane_vc_ParamLimits

0x30db,	// (0x00005d15) slider_form_pane_vc

0x30e8,	// (0x00005d22) form_field_slider_pane_vc_t1_ParamLimits

0x30e8,	// (0x00005d22) form_field_slider_pane_vc_t1

0x3052,	// (0x00005c8c) form_field_slider_pane_vc_t2_ParamLimits

0x3052,	// (0x00005c8c) form_field_slider_pane_vc_t2

0x0001,

0xfa71,	// (0x000126ab) form_field_slider_pane_vc_t_ParamLimits

0xfa71,	// (0x000126ab) form_field_slider_pane_vc_t

0xe14f,	// (0x00010d89) input_focus_pane_cp9_vc_ParamLimits

0xe14f,	// (0x00010d89) input_focus_pane_cp9_vc

0x3104,	// (0x00005d3e) slider_cont_pane_vc_ParamLimits

0x3104,	// (0x00005d3e) slider_cont_pane_vc

0x3118,	// (0x00005d52) list_form_graphic_pane_cp_vc_ParamLimits

0x3118,	// (0x00005d52) list_form_graphic_pane_cp_vc

0x0c7e,	// (0x000038b8) form_field_popup_wide_pane_vc_g1

0x312d,	// (0x00005d67) form_field_popup_wide_pane_vc_t1_ParamLimits

0x312d,	// (0x00005d67) form_field_popup_wide_pane_vc_t1

0xe57f,	// (0x000111b9) input_focus_pane_cp8_vc_ParamLimits

0xe57f,	// (0x000111b9) input_focus_pane_cp8_vc

0x3172,	// (0x00005dac) list_form_wide_pane_vc_ParamLimits

0x3172,	// (0x00005dac) list_form_wide_pane_vc

0x317e,	// (0x00005db8) list_form_graphic_pane_vc_g1

0x3186,	// (0x00005dc0) list_form_graphic_pane_vc_t1_ParamLimits

0x3186,	// (0x00005dc0) list_form_graphic_pane_vc_t1

0xe15d,	// (0x00010d97) list_highlight_pane_cp5_vc_ParamLimits

0xe15d,	// (0x00010d97) list_highlight_pane_cp5_vc

0x31a2,	// (0x00005ddc) list_form_graphic_pane_vc_ParamLimits

0x31a2,	// (0x00005ddc) list_form_graphic_pane_vc

0x0c7e,	// (0x000038b8) form_field_popup_pane_vc_g1

0x31b8,	// (0x00005df2) form_field_popup_pane_vc_t1_ParamLimits

0x31b8,	// (0x00005df2) form_field_popup_pane_vc_t1

0xe57f,	// (0x000111b9) input_focus_pane_cp7_vc_ParamLimits

0xe57f,	// (0x000111b9) input_focus_pane_cp7_vc

0x31cf,	// (0x00005e09) list_form_pane_vc_ParamLimits

0x31cf,	// (0x00005e09) list_form_pane_vc

0x31db,	// (0x00005e15) data_form_pane_vc_t1_ParamLimits

0x31db,	// (0x00005e15) data_form_pane_vc_t1

0xe645,	// (0x0001127f) input_focus_pane_vc_g1

0xe64d,	// (0x00011287) input_focus_pane_vc_g2

0xe655,	// (0x0001128f) input_focus_pane_vc_g3

0xe65d,	// (0x00011297) input_focus_pane_vc_g4

0xe665,	// (0x0001129f) input_focus_pane_vc_g5

0xe66d,	// (0x000112a7) input_focus_pane_vc_g6

0xe675,	// (0x000112af) input_focus_pane_vc_g7

0xe67d,	// (0x000112b7) input_focus_pane_vc_g8

0xe685,	// (0x000112bf) input_focus_pane_vc_g9

0xe0b7,	// (0x00010cf1) input_focus_pane_vc_g10

0x0009,

0xf656,	// (0x00012290) input_focus_pane_vc_g

0x0c72,	// (0x000038ac) data_form_pane_vc_ParamLimits

0x0c72,	// (0x000038ac) data_form_pane_vc

0x0c7e,	// (0x000038b8) form_field_data_pane_vc_g1

0x31f6,	// (0x00005e30) form_field_data_pane_vc_t1_ParamLimits

0x31f6,	// (0x00005e30) form_field_data_pane_vc_t1

0xe57f,	// (0x000111b9) input_focus_pane_vc_ParamLimits

0xe57f,	// (0x000111b9) input_focus_pane_vc

0x3210,	// (0x00005e4a) button_value_adjust_pane_cp3_vc

0x3218,	// (0x00005e52) button_value_adjust_pane_cp5_vc

0x3220,	// (0x00005e5a) form_field_data_pane_vc_ParamLimits

0x3220,	// (0x00005e5a) form_field_data_pane_vc

0x3237,	// (0x00005e71) form_field_data_pane_vc_cp2

0x323f,	// (0x00005e79) form_field_data_wide_pane_vc_ParamLimits

0x323f,	// (0x00005e79) form_field_data_wide_pane_vc

0x3255,	// (0x00005e8f) form_field_data_wide_pane_vc_cp2

0x325d,	// (0x00005e97) form_field_popup_pane_vc_ParamLimits

0x325d,	// (0x00005e97) form_field_popup_pane_vc

0x3274,	// (0x00005eae) form_field_popup_wide_pane_vc_ParamLimits

0x3274,	// (0x00005eae) form_field_popup_wide_pane_vc

0x328a,	// (0x00005ec4) form_field_slider_pane_vc_ParamLimits

0x328a,	// (0x00005ec4) form_field_slider_pane_vc

0x329d,	// (0x00005ed7) form_field_slider_wide_pane_vc_ParamLimits

0x329d,	// (0x00005ed7) form_field_slider_wide_pane_vc

0xbb5c,	// (0x0000e796) grid_touch_1_pane_ParamLimits

0xbb5c,	// (0x0000e796) grid_touch_1_pane

0xbb70,	// (0x0000e7aa) grid_touch_2_pane_ParamLimits

0xbb70,	// (0x0000e7aa) grid_touch_2_pane

0x3381,	// (0x00005fbb) touch_pane_g1_ParamLimits

0x3381,	// (0x00005fbb) touch_pane_g1

0x32d4,	// (0x00005f0e) cell_app_pane_cp_wide_ParamLimits

0x32d4,	// (0x00005f0e) cell_app_pane_cp_wide

0x32e5,	// (0x00005f1f) grid_popup_fast_wide_pane_ParamLimits

0x32e5,	// (0x00005f1f) grid_popup_fast_wide_pane

0x32f9,	// (0x00005f33) scroll_pane_cp19_ParamLimits

0x32f9,	// (0x00005f33) scroll_pane_cp19

0xe0e1,	// (0x00010d1b) bg_popup_window_pane_cp20

0x330d,	// (0x00005f47) listscroll_popup_fast_wide_pane

0xbb9a,	// (0x0000e7d4) grid_indicator_nsta_pane

0x3327,	// (0x00005f61) clock_nsta_pane_g1

0x3330,	// (0x00005f6a) clock_nsta_pane_t1

0xbba6,	// (0x0000e7e0) cell_indicator_nsta_pane_ParamLimits

0xbba6,	// (0x0000e7e0) cell_indicator_nsta_pane

0x3381,	// (0x00005fbb) cell_indicator_nsta_pane_g1

0xbbc1,	// (0x0000e7fb) cell_indicator_nsta_pane_g2

0x0001,

0xfa82,	// (0x000126bc) cell_indicator_nsta_pane_g

0x33a1,	// (0x00005fdb) clock_nsta_pane_cp

0x33aa,	// (0x00005fe4) indicator_nsta_pane_cp

0x33b4,	// (0x00005fee) nsta_clock_indic_pane_g1

0xe1b3,	// (0x00010ded) grid_indicator_pane

0x9e2d,	// (0x0000ca67) scroll_pane_cp29

0xee8d,	// (0x00011ac7) indicator_nsta_pane_cp2_ParamLimits

0xee8d,	// (0x00011ac7) indicator_nsta_pane_cp2

0xe15d,	// (0x00010d97) main_apps_wheel_pane

0xb108,	// (0x0000dd42) form_midp_field_text_pane_ParamLimits

0x1020,	// (0x00003c5a) scroll_bar_cp050_ParamLimits

0x340d,	// (0x00006047) cell_indicator_pane_ParamLimits

0x340d,	// (0x00006047) cell_indicator_pane

0x3426,	// (0x00006060) cell_indicator_pane_g1

0xbbe0,	// (0x0000e81a) grid_wheel_folder_pane_ParamLimits

0xbbe0,	// (0x0000e81a) grid_wheel_folder_pane

0xbbee,	// (0x0000e828) list_wheel_apps_pane_ParamLimits

0xbbee,	// (0x0000e828) list_wheel_apps_pane

0xbbfc,	// (0x0000e836) main_apps_wheel_pane_g1_ParamLimits

0xbbfc,	// (0x0000e836) main_apps_wheel_pane_g1

0xbc08,	// (0x0000e842) main_apps_wheel_pane_g2_ParamLimits

0xbc08,	// (0x0000e842) main_apps_wheel_pane_g2

0x0001,

0xfa9e,	// (0x000126d8) main_apps_wheel_pane_g_ParamLimits

0xfa9e,	// (0x000126d8) main_apps_wheel_pane_g

0xbc16,	// (0x0000e850) main_apps_wheel_pane_t1_ParamLimits

0xbc16,	// (0x0000e850) main_apps_wheel_pane_t1

0xbc2a,	// (0x0000e864) list_wheel_apps_pane_g1

0xbc32,	// (0x0000e86c) list_wheel_apps_pane_g2

0xbc3a,	// (0x0000e874) list_wheel_apps_pane_g3

0xbc42,	// (0x0000e87c) list_wheel_apps_pane_g4

0xbc4c,	// (0x0000e886) list_wheel_apps_pane_g5

0x0004,

0xfaa3,	// (0x000126dd) list_wheel_apps_pane_g

0xf10c,	// (0x00011d46) navi_icon_text_pane

0xab4d,	// (0x0000d787) aid_fill_nsta

0x34ed,	// (0x00006127) navi_icon_text_pane_g1

0x34f9,	// (0x00006133) navi_icon_text_pane_t1

0xeffc,	// (0x00011c36) list_set_graphic_pane_t1_ParamLimits

0xeffc,	// (0x00011c36) list_set_graphic_pane_t1

0x176b,	// (0x000043a5) popup_midp_note_alarm_window_t6_ParamLimits

0x176b,	// (0x000043a5) popup_midp_note_alarm_window_t6

0x177d,	// (0x000043b7) popup_midp_note_alarm_window_t7_ParamLimits

0x177d,	// (0x000043b7) popup_midp_note_alarm_window_t7

0x178f,	// (0x000043c9) popup_midp_note_alarm_window_t8_ParamLimits

0x178f,	// (0x000043c9) popup_midp_note_alarm_window_t8

0x17a1,	// (0x000043db) popup_midp_note_alarm_window_t9_ParamLimits

0x17a1,	// (0x000043db) popup_midp_note_alarm_window_t9

0x17b3,	// (0x000043ed) popup_midp_note_alarm_window_t10_ParamLimits

0x17b3,	// (0x000043ed) popup_midp_note_alarm_window_t10

0x17c5,	// (0x000043ff) popup_midp_note_alarm_window_t11_ParamLimits

0x17c5,	// (0x000043ff) popup_midp_note_alarm_window_t11

0xb454,	// (0x0000e08e) scroll_pane_cp17_ParamLimits

0xb454,	// (0x0000e08e) scroll_pane_cp17

0x188b,	// (0x000044c5) volume_small_pane_cp_g1

0x350b,	// (0x00006145) volume_small_pane_cp_g2

0x3514,	// (0x0000614e) volume_small_pane_cp_g3

0x351d,	// (0x00006157) volume_small_pane_cp_g4

0x3526,	// (0x00006160) volume_small_pane_cp_g5

0x2c13,	// (0x0000584d) volume_small_pane_cp_g6

0x352f,	// (0x00006169) volume_small_pane_cp_g7

0x3538,	// (0x00006172) volume_small_pane_cp_g8

0x3541,	// (0x0000617b) volume_small_pane_cp_g9

0x354a,	// (0x00006184) volume_small_pane_cp_g10

0xf276,	// (0x00011eb0) midp_ticker_pane_g1_ParamLimits

0xf282,	// (0x00011ebc) midp_ticker_pane_g2_ParamLimits

0xf722,	// (0x0001235c) midp_ticker_pane_g_ParamLimits

0xf28e,	// (0x00011ec8) midp_ticker_pane_t1_ParamLimits

0xab71,	// (0x0000d7ab) aid_fill_nsta_2

0x100c,	// (0x00003c46) list_form2_midp_pane

0x2370,	// (0x00004faa) midp_editing_number_pane_ParamLimits

0x237f,	// (0x00004fb9) midp_ticker_pane_ParamLimits

0x3553,	// (0x0000618d) form2_midp_field_pane

0x3577,	// (0x000061b1) scroll_pane_cp51

0x3597,	// (0x000061d1) form2_midp_button_pane_ParamLimits

0x3597,	// (0x000061d1) form2_midp_button_pane

0x35a9,	// (0x000061e3) form2_midp_content_pane_ParamLimits

0x35a9,	// (0x000061e3) form2_midp_content_pane

0x35c3,	// (0x000061fd) form2_midp_field_choice_group_pane

0x35cb,	// (0x00006205) form2_midp_field_pane_g1

0x35d3,	// (0x0000620d) form2_midp_field_pane_g2

0x35db,	// (0x00006215) form2_midp_field_pane_g3

0x35e3,	// (0x0000621d) form2_midp_field_pane_g4

0x0003,

0xfac8,	// (0x00012702) form2_midp_field_pane_g

0x35eb,	// (0x00006225) form2_midp_gauge_slider_pane

0x35f3,	// (0x0000622d) form2_midp_gauge_wait_pane

0x35fb,	// (0x00006235) form2_midp_image_pane_ParamLimits

0x35fb,	// (0x00006235) form2_midp_image_pane

0xbc7f,	// (0x0000e8b9) form2_midp_label_pane_ParamLimits

0xbc7f,	// (0x0000e8b9) form2_midp_label_pane

0xbc98,	// (0x0000e8d2) form2_midp_label_pane_cp_ParamLimits

0xbc98,	// (0x0000e8d2) form2_midp_label_pane_cp

0x3650,	// (0x0000628a) form2_midp_string_pane_ParamLimits

0x3650,	// (0x0000628a) form2_midp_string_pane

0xbcb7,	// (0x0000e8f1) form2_midp_text_pane_ParamLimits

0xbcb7,	// (0x0000e8f1) form2_midp_text_pane

0x367d,	// (0x000062b7) form2_midp_time_pane

0x368d,	// (0x000062c7) input_focus_pane_cp51_ParamLimits

0x368d,	// (0x000062c7) input_focus_pane_cp51

0xbcd0,	// (0x0000e90a) form2_midp_label_pane_t1_ParamLimits

0xbcd0,	// (0x0000e90a) form2_midp_label_pane_t1

0xbd10,	// (0x0000e94a) form2_mdip_text_pane_t1_ParamLimits

0xbd10,	// (0x0000e94a) form2_mdip_text_pane_t1

0x3705,	// (0x0000633f) form2_midp_time_pane_t1

0x3720,	// (0x0000635a) form2_midp_gauge_slider_pane_t1

0xbd2c,	// (0x0000e966) form2_midp_gauge_slider_pane_t2

0xbd3e,	// (0x0000e978) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad1,	// (0x0001270b) form2_midp_gauge_slider_pane_t

0x3756,	// (0x00006390) form2_midp_slider_pane

0x3762,	// (0x0000639c) form2_midp_gauge_wait_pane_t1

0x3770,	// (0x000063aa) form2_midp_wait_pane_ParamLimits

0x3770,	// (0x000063aa) form2_midp_wait_pane

0xbd50,	// (0x0000e98a) list_single_2graphic_pane_cp4_ParamLimits

0xbd50,	// (0x0000e98a) list_single_2graphic_pane_cp4

0xb048,	// (0x0000dc82) list_single_midp_graphic_pane_cp_ParamLimits

0xb048,	// (0x0000dc82) list_single_midp_graphic_pane_cp

0xe0e1,	// (0x00010d1b) list_highlight_pane_cp20

0x37c3,	// (0x000063fd) list_single_2graphic_pane_g1_cp4

0x2973,	// (0x000055ad) list_single_2graphic_pane_g2_cp4

0x37cb,	// (0x00006405) list_single_2graphic_pane_t1_cp4

0xe15d,	// (0x00010d97) list_highlight_pane_cp21

0x37da,	// (0x00006414) list_single_midp_graphic_pane_g4_cp

0x37e9,	// (0x00006423) list_single_midp_graphic_pane_t1_cp

0xbd65,	// (0x0000e99f) form2_mdip_string_pane_t1_ParamLimits

0xbd65,	// (0x0000e99f) form2_mdip_string_pane_t1

0xe0e1,	// (0x00010d1b) bg_wml_button_pane_cp2

0xe0b7,	// (0x00010cf1) form2_midp_image_pane_g1

0xe4e9,	// (0x00011123) list_double_large_graphic_pane_g5_ParamLimits

0xe4e9,	// (0x00011123) list_double_large_graphic_pane_g5

0xa0b9,	// (0x0000ccf3) midp_form_pane_ParamLimits

0xe15d,	// (0x00010d97) main_apps_wheel_pane_ParamLimits

0xa82b,	// (0x0000d465) popup_preview_window_ParamLimits

0xa82b,	// (0x0000d465) popup_preview_window

0xaaf8,	// (0x0000d732) popup_touch_info_window_ParamLimits

0xaaf8,	// (0x0000d732) popup_touch_info_window

0xab16,	// (0x0000d750) popup_touch_menu_window_ParamLimits

0xab16,	// (0x0000d750) popup_touch_menu_window

0xe0ad,	// (0x00010ce7) bg_popup_sub_pane_cp6

0x3905,	// (0x0000653f) list_touch_menu_pane

0xbddb,	// (0x0000ea15) list_single_touch_menu_pane_ParamLimits

0xbddb,	// (0x0000ea15) list_single_touch_menu_pane

0xbdef,	// (0x0000ea29) list_single_touch_menu_pane_t1

0xe15d,	// (0x00010d97) bg_popup_sub_pane_cp7_ParamLimits

0xe15d,	// (0x00010d97) bg_popup_sub_pane_cp7

0x1040,	// (0x00003c7a) heading_sub_pane

0x3931,	// (0x0000656b) list_touch_info_pane_ParamLimits

0x3931,	// (0x0000656b) list_touch_info_pane

0x3941,	// (0x0000657b) list_single_touch_info_pane_ParamLimits

0x3941,	// (0x0000657b) list_single_touch_info_pane

0x3953,	// (0x0000658d) list_single_touch_info_pane_t1

0x3961,	// (0x0000659b) list_single_touch_info_pane_t2

0x0001,

0xfadf,	// (0x00012719) list_single_touch_info_pane_t

0xf25f,	// (0x00011e99) bg_popup_heading_pane_cp

0x396f,	// (0x000065a9) heading_sub_pane_t1

0x0b84,	// (0x000037be) bg_popup_preview_window_pane_cp_ParamLimits

0x0b84,	// (0x000037be) bg_popup_preview_window_pane_cp

0x1040,	// (0x00003c7a) heading_preview_pane

0x3931,	// (0x0000656b) list_preview_pane_ParamLimits

0x3931,	// (0x0000656b) list_preview_pane

0x397d,	// (0x000065b7) popup_preview_window_g1

0x3941,	// (0x0000657b) list_single_preview_pane_ParamLimits

0x3941,	// (0x0000657b) list_single_preview_pane

0x3985,	// (0x000065bf) list_single_preview_pane_g1

0x398d,	// (0x000065c7) list_single_preview_pane_t1

0x3953,	// (0x0000658d) list_single_preview_pane_t2

0x0001,

0xfae4,	// (0x0001271e) list_single_preview_pane_t

0x399b,	// (0x000065d5) bg_popup_heading_pane_cp2_ParamLimits

0x399b,	// (0x000065d5) bg_popup_heading_pane_cp2

0x39b1,	// (0x000065eb) heading_preview_pane_g1

0x39b9,	// (0x000065f3) heading_preview_pane_t1_ParamLimits

0x39b9,	// (0x000065f3) heading_preview_pane_t1

0xe1ca,	// (0x00010e04) soft_indicator_pane_t1_ParamLimits

0xe4a9,	// (0x000110e3) scroll_pane_ParamLimits

0xeae7,	// (0x00011721) scroll_sc2_left_pane

0xeaf0,	// (0x0001172a) scroll_sc2_right_pane

0xeb0f,	// (0x00011749) scroll_bg_pane_g1_ParamLimits

0xeb24,	// (0x0001175e) scroll_bg_pane_g2_ParamLimits

0xeb3c,	// (0x00011776) scroll_bg_pane_g3_ParamLimits

0xf6ad,	// (0x000122e7) scroll_bg_pane_g_ParamLimits

0xeb0f,	// (0x00011749) scroll_handle_pane_g1_ParamLimits

0xeb51,	// (0x0001178b) scroll_handle_pane_g2_ParamLimits

0xeb3c,	// (0x00011776) scroll_handle_pane_g3_ParamLimits

0xf6b4,	// (0x000122ee) scroll_handle_pane_g_ParamLimits

0xa3f8,	// (0x0000d032) popup_choice_list_window_ParamLimits

0xa3f8,	// (0x0000d032) popup_choice_list_window

0x08e4,	// (0x0000351e) choice_list_pane

0x09b8,	// (0x000035f2) cell_toolbar_pane_t1

0x09e0,	// (0x0000361a) toolbar_button_pane_ParamLimits

0x1dfb,	// (0x00004a35) ai_gene_pane_1_t2_ParamLimits

0x1dfb,	// (0x00004a35) ai_gene_pane_1_t2

0x0001,

0xf8d7,	// (0x00012511) ai_gene_pane_1_t_ParamLimits

0xf8d7,	// (0x00012511) ai_gene_pane_1_t

0x39d6,	// (0x00006610) scroll_sc2_left_pane_g1

0x39d6,	// (0x00006610) scroll_sc2_right_pane_g1

0xf47b,	// (0x000120b5) bg_popup_sub_pane_cp10

0x39e0,	// (0x0000661a) list_choice_list_pane

0xb92c,	// (0x0000e566) list_single_choice_list_pane_ParamLimits

0xb92c,	// (0x0000e566) list_single_choice_list_pane

0xe893,	// (0x000114cd) list_single_choice_list_pane_g1

0x9c57,	// (0x0000c891) list_single_choice_list_pane_t1_ParamLimits

0x9c57,	// (0x0000c891) list_single_choice_list_pane_t1

0x3a14,	// (0x0000664e) choice_list_pane_g1

0xbdfd,	// (0x0000ea37) choice_list_pane_t1

0xe0ad,	// (0x00010ce7) input_focus_pane_cp11

0xe902,	// (0x0001153c) title_pane_stacon_g2_ParamLimits

0xe902,	// (0x0001153c) title_pane_stacon_g2

0x0002,

0xf693,	// (0x000122cd) title_pane_stacon_g_ParamLimits

0xf693,	// (0x000122cd) title_pane_stacon_g

0xf25f,	// (0x00011e99) cursor_press_pane

0xa49f,	// (0x0000d0d9) popup_fep_hwr_window_ParamLimits

0xa49f,	// (0x0000d0d9) popup_fep_hwr_window

0xf509,	// (0x00012143) popup_fep_vkb_window_ParamLimits

0xf509,	// (0x00012143) popup_fep_vkb_window

0xbe0b,	// (0x0000ea45) cursor_press_pane_g1

0x0002,

0xfb0d,	// (0x00012747) fep_vkb_side_pane_g_ParamLimits

0x3a6b,	// (0x000066a5) fep_hwr_candidate_pane_ParamLimits

0x3a6b,	// (0x000066a5) fep_hwr_candidate_pane

0x3a95,	// (0x000066cf) fep_hwr_side_pane_ParamLimits

0x3a95,	// (0x000066cf) fep_hwr_side_pane

0x3ab5,	// (0x000066ef) fep_hwr_top_pane_ParamLimits

0x3ab5,	// (0x000066ef) fep_hwr_top_pane

0x3acd,	// (0x00006707) fep_hwr_write_pane_ParamLimits

0x3acd,	// (0x00006707) fep_hwr_write_pane

0xfb0d,	// (0x00012747) fep_vkb_side_pane_g

0x3b07,	// (0x00006741) fep_hwr_top_pane_g1

0x3b19,	// (0x00006753) fep_hwr_top_pane_g2

0x3b2b,	// (0x00006765) fep_hwr_top_pane_g3

0x0002,

0xfae9,	// (0x00012723) fep_hwr_top_pane_g

0x3b40,	// (0x0000677a) fep_hwr_top_text_pane

0xec14,	// (0x0001184e) fep_hwr_top_text_pane_g1

0x3c18,	// (0x00006852) fep_hwr_top_text_pane_t1

0x3c68,	// (0x000068a2) fep_hwr_candidate_pane_g1

0x3ed3,	// (0x00006b0d) fep_vkb_keypad_pane_g3_ParamLimits

0x3ed3,	// (0x00006b0d) fep_vkb_keypad_pane_g3

0x3efb,	// (0x00006b35) fep_vkb_keypad_pane_g4_ParamLimits

0x3efb,	// (0x00006b35) fep_vkb_keypad_pane_g4

0x3f6a,	// (0x00006ba4) fep_vkb_bottom_pane_g2_ParamLimits

0x3f6a,	// (0x00006ba4) fep_vkb_bottom_pane_g2

0x0001,

0xfb14,	// (0x0001274e) fep_vkb_bottom_pane_g_ParamLimits

0xfb14,	// (0x0001274e) fep_vkb_bottom_pane_g

0x39d6,	// (0x00006610) cell_vkb_side_pane_g2

0x0001,

0xfb1e,	// (0x00012758) cell_vkb_side_pane_g

0x3ff5,	// (0x00006c2f) cell_vkb_side_pane_t1

0x4003,	// (0x00006c3d) cell_vkb_side_pane_t1_copy1

0x39d6,	// (0x00006610) bg_fep_vkb_candidate_pane_g2

0x412f,	// (0x00006d69) cell_vkb_candidate_pane_ParamLimits

0x3c9c,	// (0x000068d6) aid_size_cell_vkb_ParamLimits

0x3c9c,	// (0x000068d6) aid_size_cell_vkb

0x412f,	// (0x00006d69) cell_vkb_candidate_pane

0x4163,	// (0x00006d9d) bg_popup_fep_shadow_pane_g1

0xbe72,	// (0x0000eaac) fep_vkb_bottom_pane_ParamLimits

0xbe72,	// (0x0000eaac) fep_vkb_bottom_pane

0x3d60,	// (0x0000699a) fep_vkb_candidate_pane_ParamLimits

0x3d60,	// (0x0000699a) fep_vkb_candidate_pane

0xbe97,	// (0x0000ead1) fep_vkb_keypad_pane_ParamLimits

0xbe97,	// (0x0000ead1) fep_vkb_keypad_pane

0xbecc,	// (0x0000eb06) fep_vkb_side_pane_ParamLimits

0xbecc,	// (0x0000eb06) fep_vkb_side_pane

0xbf08,	// (0x0000eb42) fep_vkb_top_pane_ParamLimits

0xbf08,	// (0x0000eb42) fep_vkb_top_pane

0x3e2c,	// (0x00006a66) fep_vkb_top_pane_g1_ParamLimits

0x3e2c,	// (0x00006a66) fep_vkb_top_pane_g1

0x3e3b,	// (0x00006a75) fep_vkb_top_pane_g2_ParamLimits

0x3e3b,	// (0x00006a75) fep_vkb_top_pane_g2

0x3e4a,	// (0x00006a84) fep_vkb_top_pane_g3_ParamLimits

0x3e4a,	// (0x00006a84) fep_vkb_top_pane_g3

0x0003,

0xfb04,	// (0x0001273e) fep_vkb_top_pane_g_ParamLimits

0xfb04,	// (0x0001273e) fep_vkb_top_pane_g

0x3e68,	// (0x00006aa2) fep_vkb_top_text_pane_ParamLimits

0x3e68,	// (0x00006aa2) fep_vkb_top_text_pane

0xbf3d,	// (0x0000eb77) fep_vkb_side_pane_g1_ParamLimits

0xbf3d,	// (0x0000eb77) fep_vkb_side_pane_g1

0x3ec2,	// (0x00006afc) grid_vkb_side_pane_ParamLimits

0x3ec2,	// (0x00006afc) grid_vkb_side_pane

0x416b,	// (0x00006da5) bg_popup_fep_shadow_pane_g2

0x4174,	// (0x00006dae) bg_popup_fep_shadow_pane_g3

0x417c,	// (0x00006db6) bg_popup_fep_shadow_pane_g4

0x4185,	// (0x00006dbf) bg_popup_fep_shadow_pane_g5

0x418f,	// (0x00006dc9) bg_popup_fep_shadow_pane_g6

0x4197,	// (0x00006dd1) bg_popup_fep_shadow_pane_g7

0xe665,	// (0x0001129f) bg_popup_fep_shadow_pane_g8

0x3f19,	// (0x00006b53) grid_vkb_keypad_number_pane_ParamLimits

0x3f19,	// (0x00006b53) grid_vkb_keypad_number_pane

0x3f29,	// (0x00006b63) grid_vkb_keypad_pane_ParamLimits

0x3f29,	// (0x00006b63) grid_vkb_keypad_pane

0x3f4f,	// (0x00006b89) fep_vkb_bottom_pane_g1_ParamLimits

0x3f4f,	// (0x00006b89) fep_vkb_bottom_pane_g1

0x3f78,	// (0x00006bb2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x3f78,	// (0x00006bb2) grid_vkb_keypad_bottom_left_pane

0x3f8d,	// (0x00006bc7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x3f8d,	// (0x00006bc7) grid_vkb_keypad_bottom_right_pane

0x3fa2,	// (0x00006bdc) fep_vkb_top_text_pane_g1

0xbf84,	// (0x0000ebbe) fep_vkb_top_text_pane_t1

0xbf96,	// (0x0000ebd0) cell_vkb_side_pane_ParamLimits

0xbf96,	// (0x0000ebd0) cell_vkb_side_pane

0x39d6,	// (0x00006610) cell_vkb_side_pane_g1

0x4011,	// (0x00006c4b) cell_vkb_keypad_pane_ParamLimits

0x4011,	// (0x00006c4b) cell_vkb_keypad_pane

0x4086,	// (0x00006cc0) cell_vkb_keypad_pane_g1

0x0008,

0xfb31,	// (0x0001276b) bg_popup_fep_shadow_pane_g

0x39d6,	// (0x00006610) cell_hwr_side_pane_g1

0x39d6,	// (0x00006610) cell_hwr_side_pane_g2

0x4090,	// (0x00006cca) cell_vkb_keypad_pane_t1

0xbfac,	// (0x0000ebe6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbfac,	// (0x0000ebe6) cell_vkb_keypad_bottom_left_pane

0xbfc1,	// (0x0000ebfb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbfc1,	// (0x0000ebfb) cell_vkb_keypad_bottom_right_pane

0x39d6,	// (0x00006610) cell_vkb_keypad_bottom_left_pane_g1

0x39d6,	// (0x00006610) cell_vkb_keypad_bottom_right_pane_g1

0x40f4,	// (0x00006d2e) cell_vkb_keypad_number_pane_ParamLimits

0x40f4,	// (0x00006d2e) cell_vkb_keypad_number_pane

0x4113,	// (0x00006d4d) cell_vkb_keypad_number_pane_g1

0x411d,	// (0x00006d57) cell_vkb_keypad_number_pane_g2

0x4126,	// (0x00006d60) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb23,	// (0x0001275d) cell_vkb_keypad_number_pane_g

0x4090,	// (0x00006cca) cell_vkb_keypad_number_pane_t1

0x414a,	// (0x00006d84) fep_vkb_candidate_pane_g1

0x0001,

0xfb1e,	// (0x00012758) cell_hwr_side_pane_g

0x41a9,	// (0x00006de3) cell_hwr_side_pane_t1

0x41b7,	// (0x00006df1) cell_hwr_side_pane_t1_copy1

0x3e5a,	// (0x00006a94) cell_hwr_candidate_pane_g1

0x4207,	// (0x00006e41) cell_hwr_candidate_pane_t1

0x39d6,	// (0x00006610) cell_vkb_candidate_pane_g2

0x425b,	// (0x00006e95) cell_vkb_candidate_pane_t1

0x3a32,	// (0x0000666c) bg_popup_fep_shadow_pane_ParamLimits

0x3a32,	// (0x0000666c) bg_popup_fep_shadow_pane

0x3ae7,	// (0x00006721) bg_fep_hwr_top_pane_g4

0x3b55,	// (0x0000678f) bg_hwr_side_pane_g1_ParamLimits

0x3b55,	// (0x0000678f) bg_hwr_side_pane_g1

0xbe2b,	// (0x0000ea65) cell_hwr_side_pane_ParamLimits

0xbe2b,	// (0x0000ea65) cell_hwr_side_pane

0x3bc3,	// (0x000067fd) fep_hwr_write_pane_g1_ParamLimits

0x3bc3,	// (0x000067fd) fep_hwr_write_pane_g1

0x3bd0,	// (0x0000680a) fep_hwr_write_pane_g2_ParamLimits

0x3bd0,	// (0x0000680a) fep_hwr_write_pane_g2

0x3bdd,	// (0x00006817) fep_hwr_write_pane_g3_ParamLimits

0x3bdd,	// (0x00006817) fep_hwr_write_pane_g3

0xbe4b,	// (0x0000ea85) fep_hwr_write_pane_g4_ParamLimits

0xbe4b,	// (0x0000ea85) fep_hwr_write_pane_g4

0x0005,

0xfaf0,	// (0x0001272a) fep_hwr_write_pane_g_ParamLimits

0xfaf0,	// (0x0001272a) fep_hwr_write_pane_g

0x3ae7,	// (0x00006721) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3ae7,	// (0x00006721) bg_fep_hwr_candidate_pane_g2

0x3c26,	// (0x00006860) cell_hwr_candidate_pane_ParamLimits

0x3c26,	// (0x00006860) cell_hwr_candidate_pane

0x3c68,	// (0x000068a2) fep_hwr_candidate_pane_g1_ParamLimits

0x3cca,	// (0x00006904) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3cca,	// (0x00006904) bg_popup_fep_shadow_pane_cp2

0x3e5a,	// (0x00006a94) fep_vkb_top_pane_g4_ParamLimits

0x3e5a,	// (0x00006a94) fep_vkb_top_pane_g4

0x3ea0,	// (0x00006ada) fep_vkb_side_pane_g2_ParamLimits

0x3ea0,	// (0x00006ada) fep_vkb_side_pane_g2

0x9982,	// (0x0000c5bc) list_setting_pane_t4_ParamLimits

0x9982,	// (0x0000c5bc) list_setting_pane_t4

0x99fc,	// (0x0000c636) list_setting_number_pane_t5_ParamLimits

0x99fc,	// (0x0000c636) list_setting_number_pane_t5

0xec6a,	// (0x000118a4) list_double_heading_pane_cp2_ParamLimits

0xec6a,	// (0x000118a4) list_double_heading_pane_cp2

0xe89b,	// (0x000114d5) list_double_heading_pane_g1_cp2_ParamLimits

0xe89b,	// (0x000114d5) list_double_heading_pane_g1_cp2

0x4269,	// (0x00006ea3) list_double_heading_pane_g2_cp2_ParamLimits

0x4269,	// (0x00006ea3) list_double_heading_pane_g2_cp2

0x427d,	// (0x00006eb7) list_double_heading_pane_t1_cp2_ParamLimits

0x427d,	// (0x00006eb7) list_double_heading_pane_t1_cp2

0x4293,	// (0x00006ecd) list_double_heading_pane_t2_cp2_ParamLimits

0x4293,	// (0x00006ecd) list_double_heading_pane_t2_cp2

0xe0a5,	// (0x00010cdf) aid_value_unit2

0xe101,	// (0x00010d3b) popup_preview_fixed_window

0xe2a1,	// (0x00010edb) bg_popup_preview_window_pane_cp02

0x42a5,	// (0x00006edf) list_preview_fixed_pane

0x42eb,	// (0x00006f25) list_empty_pane_fp_ParamLimits

0x42eb,	// (0x00006f25) list_empty_pane_fp

0x42eb,	// (0x00006f25) list_single_cale_day_pane_fp_ParamLimits

0x42eb,	// (0x00006f25) list_single_cale_day_pane_fp

0x42eb,	// (0x00006f25) list_single_graphic_heading_pane_fp_ParamLimits

0x42eb,	// (0x00006f25) list_single_graphic_heading_pane_fp

0x42eb,	// (0x00006f25) list_single_graphic_pane_fp_ParamLimits

0x42eb,	// (0x00006f25) list_single_graphic_pane_fp

0x42eb,	// (0x00006f25) list_single_heading_pane_fp_ParamLimits

0x42eb,	// (0x00006f25) list_single_heading_pane_fp

0x42eb,	// (0x00006f25) list_single_pane_fp_ParamLimits

0x42eb,	// (0x00006f25) list_single_pane_fp

0x4301,	// (0x00006f3b) list_single_pane_fp_g1_ParamLimits

0x4301,	// (0x00006f3b) list_single_pane_fp_g1

0xe8a7,	// (0x000114e1) list_single_pane_fp_g2_ParamLimits

0xe8a7,	// (0x000114e1) list_single_pane_fp_g2

0x430d,	// (0x00006f47) list_single_pane_fp_g3_ParamLimits

0x430d,	// (0x00006f47) list_single_pane_fp_g3

0x4321,	// (0x00006f5b) list_single_pane_fp_g4_ParamLimits

0x4321,	// (0x00006f5b) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x0001278c) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x0001278c) list_single_pane_fp_g

0x432d,	// (0x00006f67) list_single_pane_fp_t1_ParamLimits

0x432d,	// (0x00006f67) list_single_pane_fp_t1

0x4344,	// (0x00006f7e) list_single_graphic_pane_fp_g1_ParamLimits

0x4344,	// (0x00006f7e) list_single_graphic_pane_fp_g1

0x4301,	// (0x00006f3b) list_single_graphic_pane_fp_g2_ParamLimits

0x4301,	// (0x00006f3b) list_single_graphic_pane_fp_g2

0xe8a7,	// (0x000114e1) list_single_graphic_pane_fp_g3_ParamLimits

0xe8a7,	// (0x000114e1) list_single_graphic_pane_fp_g3

0x430d,	// (0x00006f47) list_single_graphic_pane_fp_g4_ParamLimits

0x430d,	// (0x00006f47) list_single_graphic_pane_fp_g4

0x4321,	// (0x00006f5b) list_single_graphic_pane_fp_g5_ParamLimits

0x4321,	// (0x00006f5b) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x00012795) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x00012795) list_single_graphic_pane_fp_g

0x4350,	// (0x00006f8a) list_single_graphic_pane_fp_t1_ParamLimits

0x4350,	// (0x00006f8a) list_single_graphic_pane_fp_t1

0x4344,	// (0x00006f7e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4344,	// (0x00006f7e) list_single_graphic_heading_pane_fp_g1

0x4301,	// (0x00006f3b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4301,	// (0x00006f3b) list_single_graphic_heading_pane_fp_g2

0xe8a7,	// (0x000114e1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe8a7,	// (0x000114e1) list_single_graphic_heading_pane_fp_g3

0x430d,	// (0x00006f47) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x430d,	// (0x00006f47) list_single_graphic_heading_pane_fp_g4

0x4321,	// (0x00006f5b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4321,	// (0x00006f5b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x00012795) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x00012795) list_single_graphic_heading_pane_fp_g

0x4366,	// (0x00006fa0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4366,	// (0x00006fa0) list_single_graphic_heading_pane_fp_t1

0x437c,	// (0x00006fb6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x437c,	// (0x00006fb6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x000127a0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x000127a0) list_single_graphic_heading_pane_fp_t

0x438e,	// (0x00006fc8) list_single_cale_day_pane_fp_g1_ParamLimits

0x438e,	// (0x00006fc8) list_single_cale_day_pane_fp_g1

0x43c6,	// (0x00007000) list_single_cale_day_pane_fp_g2_ParamLimits

0x43c6,	// (0x00007000) list_single_cale_day_pane_fp_g2

0x43d2,	// (0x0000700c) list_single_cale_day_pane_fp_g3_ParamLimits

0x43d2,	// (0x0000700c) list_single_cale_day_pane_fp_g3

0x43fa,	// (0x00007034) list_single_cale_day_pane_fp_g4_ParamLimits

0x43fa,	// (0x00007034) list_single_cale_day_pane_fp_g4

0x441e,	// (0x00007058) list_single_cale_day_pane_fp_g5_ParamLimits

0x441e,	// (0x00007058) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x000127a5) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x000127a5) list_single_cale_day_pane_fp_g

0x4442,	// (0x0000707c) list_single_cale_day_pane_fp_t1_ParamLimits

0x4442,	// (0x0000707c) list_single_cale_day_pane_fp_t1

0x4468,	// (0x000070a2) list_single_cale_day_pane_fp_t2_ParamLimits

0x4468,	// (0x000070a2) list_single_cale_day_pane_fp_t2

0x4481,	// (0x000070bb) list_single_cale_day_pane_fp_t3_ParamLimits

0x4481,	// (0x000070bb) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x000127b0) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x000127b0) list_single_cale_day_pane_fp_t

0x4301,	// (0x00006f3b) list_empty_pane_fp_g1_ParamLimits

0x4301,	// (0x00006f3b) list_empty_pane_fp_g1

0x449a,	// (0x000070d4) list_empty_pane_fp_t1

0x44a8,	// (0x000070e2) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x000127b7) list_empty_pane_fp_t

0x4301,	// (0x00006f3b) list_single_heading_pane_fp_g1_ParamLimits

0x4301,	// (0x00006f3b) list_single_heading_pane_fp_g1

0xe8a7,	// (0x000114e1) list_single_heading_pane_fp_g2_ParamLimits

0xe8a7,	// (0x000114e1) list_single_heading_pane_fp_g2

0x430d,	// (0x00006f47) list_single_heading_pane_fp_g3_ParamLimits

0x430d,	// (0x00006f47) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x000127bc) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x000127bc) list_single_heading_pane_fp_g

0x44b6,	// (0x000070f0) list_single_heading_pane_fp_t1_ParamLimits

0x44b6,	// (0x000070f0) list_single_heading_pane_fp_t1

0x44c8,	// (0x00007102) list_single_heading_pane_fp_t2_ParamLimits

0x44c8,	// (0x00007102) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x000127c3) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x000127c3) list_single_heading_pane_fp_t

0x9ca3,	// (0x0000c8dd) aid_size_cell_fast

0xe284,	// (0x00010ebe) soft_indicator_pane_cp1_t1

0x9cac,	// (0x0000c8e6) cell_app_pane_cp2_ParamLimits

0x9cac,	// (0x0000c8e6) cell_app_pane_cp2

0x3a54,	// (0x0000668e) fep_hwr_candidate_drop_down_list_pane

0x3c82,	// (0x000068bc) fep_hwr_candidate_pane_g3_ParamLimits

0x3c82,	// (0x000068bc) fep_hwr_candidate_pane_g3

0x3c8f,	// (0x000068c9) fep_hwr_candidate_pane_g4_ParamLimits

0x3c8f,	// (0x000068c9) fep_hwr_candidate_pane_g4

0x0002,

0xfafd,	// (0x00012737) fep_hwr_candidate_pane_g_ParamLimits

0xfafd,	// (0x00012737) fep_hwr_candidate_pane_g

0x3d4f,	// (0x00006989) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3d4f,	// (0x00006989) fep_vkb_candidate_drop_down_list_pane

0x4152,	// (0x00006d8c) fep_vkb_candidate_pane_g3

0x415a,	// (0x00006d94) fep_vkb_candidate_pane_g4

0x0002,

0xfb2a,	// (0x00012764) fep_vkb_candidate_pane_g

0x3e5a,	// (0x00006a94) cell_hwr_candidate_pane_g1_ParamLimits

0x41c5,	// (0x00006dff) cell_hwr_candidate_pane_g3_ParamLimits

0x41c5,	// (0x00006dff) cell_hwr_candidate_pane_g3

0x41e6,	// (0x00006e20) cell_hwr_candidate_pane_g4_ParamLimits

0x41e6,	// (0x00006e20) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x0001277e) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x0001277e) cell_hwr_candidate_pane_g

0x4225,	// (0x00006e5f) cell_vkb_candidate_pane_g3_ParamLimits

0x4225,	// (0x00006e5f) cell_vkb_candidate_pane_g3

0x4240,	// (0x00006e7a) cell_vkb_candidate_pane_g4_ParamLimits

0x4240,	// (0x00006e7a) cell_vkb_candidate_pane_g4

0xbfdc,	// (0x0000ec16) cell_app_pane_cp2_g1_ParamLimits

0xbfdc,	// (0x0000ec16) cell_app_pane_cp2_g1

0x44fc,	// (0x00007136) cell_app_pane_cp2_g2_ParamLimits

0x44fc,	// (0x00007136) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x000127c8) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x000127c8) cell_app_pane_cp2_g

0x4508,	// (0x00007142) cell_app_pane_cp2_t1_ParamLimits

0x4508,	// (0x00007142) cell_app_pane_cp2_t1

0xe57f,	// (0x000111b9) grid_highlight_pane_cp1_ParamLimits

0xe57f,	// (0x000111b9) grid_highlight_pane_cp1

0x451a,	// (0x00007154) cell_hwr_candidate_pane_cp1_ParamLimits

0x451a,	// (0x00007154) cell_hwr_candidate_pane_cp1

0x3e5a,	// (0x00006a94) fep_hwr_candidate_drop_down_list_pane_g1

0x4539,	// (0x00007173) fep_hwr_candidate_drop_down_list_pane_g2

0x4546,	// (0x00007180) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x000127cd) fep_hwr_candidate_drop_down_list_pane_g

0x4553,	// (0x0000718d) fep_hwr_candidate_drop_down_list_scroll_pane

0x455c,	// (0x00007196) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x455c,	// (0x00007196) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x4569,	// (0x000071a3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4569,	// (0x000071a3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x4576,	// (0x000071b0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4576,	// (0x000071b0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4225,	// (0x00006e5f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4225,	// (0x00006e5f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4240,	// (0x00006e7a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4240,	// (0x00006e7a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4583,	// (0x000071bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4583,	// (0x000071bd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x459e,	// (0x000071d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x459e,	// (0x000071d8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x45b9,	// (0x000071f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x45b9,	// (0x000071f3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x000127d4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x000127d4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x45d4,	// (0x0000720e) cell_vkb_candidate_pane_cp1_ParamLimits

0x45d4,	// (0x0000720e) cell_vkb_candidate_pane_cp1

0x3e5a,	// (0x00006a94) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3e5a,	// (0x00006a94) fep_vkb_candidate_drop_down_list_pane_g1

0x4539,	// (0x00007173) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4539,	// (0x00007173) fep_vkb_candidate_drop_down_list_pane_g2

0x4546,	// (0x00007180) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4546,	// (0x00007180) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x000127cd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb93,	// (0x000127cd) fep_vkb_candidate_drop_down_list_pane_g

0x45f4,	// (0x0000722e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x45f4,	// (0x0000722e) fep_vkb_candidate_drop_down_list_scroll_pane

0x4601,	// (0x0000723b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4601,	// (0x0000723b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x460e,	// (0x00007248) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x460e,	// (0x00007248) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x461a,	// (0x00007254) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x461a,	// (0x00007254) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x41c5,	// (0x00006dff) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x41c5,	// (0x00006dff) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x41e6,	// (0x00006e20) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x41e6,	// (0x00006e20) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4626,	// (0x00007260) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4626,	// (0x00007260) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4647,	// (0x00007281) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4647,	// (0x00007281) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4668,	// (0x000072a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4668,	// (0x000072a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbab,	// (0x000127e5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbab,	// (0x000127e5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9065,	// (0x0000bc9f) title_pane_g1_ParamLimits

0x9078,	// (0x0000bcb2) title_pane_g2_ParamLimits

0xf527,	// (0x00012161) title_pane_g_ParamLimits

0xec04,	// (0x0001183e) aid_call2_pane

0xec0c,	// (0x00011846) aid_call_pane

0xec14,	// (0x0001184e) popup_clock_analogue_window_g1

0xec14,	// (0x0001184e) popup_clock_analogue_window_g2

0xec1c,	// (0x00011856) popup_clock_analogue_window_g3

0xec25,	// (0x0001185f) popup_clock_analogue_window_g4

0xe0b7,	// (0x00010cf1) popup_clock_analogue_window_g5

0x0004,

0xf6c2,	// (0x000122fc) popup_clock_analogue_window_g

0xec2d,	// (0x00011867) popup_clock_analogue_window_t1

0xec8b,	// (0x000118c5) clock_digital_number_pane_ParamLimits

0xec8b,	// (0x000118c5) clock_digital_number_pane

0xec97,	// (0x000118d1) clock_digital_number_pane_cp02_ParamLimits

0xec97,	// (0x000118d1) clock_digital_number_pane_cp02

0xeca3,	// (0x000118dd) clock_digital_number_pane_cp03_ParamLimits

0xeca3,	// (0x000118dd) clock_digital_number_pane_cp03

0xecaf,	// (0x000118e9) clock_digital_number_pane_cp04_ParamLimits

0xecaf,	// (0x000118e9) clock_digital_number_pane_cp04

0xecbb,	// (0x000118f5) clock_digital_separator_pane_ParamLimits

0xecbb,	// (0x000118f5) clock_digital_separator_pane

0xecc7,	// (0x00011901) popup_clock_digital_window_t1_ParamLimits

0xecc7,	// (0x00011901) popup_clock_digital_window_t1

0xe0b7,	// (0x00010cf1) clock_digital_number_pane_g1

0xe0b7,	// (0x00010cf1) clock_digital_number_pane_g2

0x0001,

0xf6cd,	// (0x00012307) clock_digital_number_pane_g

0xe0b7,	// (0x00010cf1) clock_digital_separator_pane_g1

0xe0b7,	// (0x00010cf1) clock_digital_separator_pane_g2

0x0001,

0xf6cd,	// (0x00012307) clock_digital_separator_pane_g

0xab4d,	// (0x0000d787) aid_fill_nsta_ParamLimits

0xac83,	// (0x0000d8bd) indicator_nsta_pane_ParamLimits

0x0716,	// (0x00003350) popup_clock_analogue_window

0x0716,	// (0x00003350) popup_clock_digital_window

0xbb9a,	// (0x0000e7d4) grid_indicator_nsta_pane_ParamLimits

0x333e,	// (0x00005f78) clock_nsta_pane_t2

0x0001,

0xfa7d,	// (0x000126b7) clock_nsta_pane_t

0xeaa9,	// (0x000116e3) aid_size_max_handle

0x9d8a,	// (0x0000c9c4) aid_size_min_handle

0xf25f,	// (0x00011e99) editor_scroll_pane

0x4683,	// (0x000072bd) ex_editor_pane

0xe71f,	// (0x00011359) scroll_pane_cp13

0xe4d5,	// (0x0001110f) scroll_pane_cp14

0xec62,	// (0x0001189c) scroll_pane_cp36

0x9e54,	// (0x0000ca8e) list_single_graphic_hl_pane_cp2_ParamLimits

0x9e54,	// (0x0000ca8e) list_single_graphic_hl_pane_cp2

0xb940,	// (0x0000e57a) list_single_graphic_hl_pane_ParamLimits

0xb940,	// (0x0000e57a) list_single_graphic_hl_pane

0x6f44,	// (0x00009b7e) aid_size_min_hl_cp1

0x4694,	// (0x000072ce) list_highlight_pane_cp34_ParamLimits

0x4694,	// (0x000072ce) list_highlight_pane_cp34

0x46a5,	// (0x000072df) list_single_graphic_hl_pane_g1_ParamLimits

0x46a5,	// (0x000072df) list_single_graphic_hl_pane_g1

0xbffa,	// (0x0000ec34) list_single_graphic_hl_pane_g2_ParamLimits

0xbffa,	// (0x0000ec34) list_single_graphic_hl_pane_g2

0xbffa,	// (0x0000ec34) list_single_graphic_hl_pane_g3_ParamLimits

0xbffa,	// (0x0000ec34) list_single_graphic_hl_pane_g3

0xf1ea,	// (0x00011e24) list_single_graphic_hl_pane_g4_ParamLimits

0xf1ea,	// (0x00011e24) list_single_graphic_hl_pane_g4

0xc006,	// (0x0000ec40) list_single_graphic_hl_pane_g5_ParamLimits

0xc006,	// (0x0000ec40) list_single_graphic_hl_pane_g5

0x0004,

0xfbbc,	// (0x000127f6) list_single_graphic_hl_pane_g_ParamLimits

0xfbbc,	// (0x000127f6) list_single_graphic_hl_pane_g

0xc01a,	// (0x0000ec54) list_single_graphic_hl_pane_t1_ParamLimits

0xc01a,	// (0x0000ec54) list_single_graphic_hl_pane_t1

0x46e8,	// (0x00007322) aid_size_min_hl_cp2

0x46f1,	// (0x0000732b) list_highlight_pane_cp34_cp2_ParamLimits

0x46f1,	// (0x0000732b) list_highlight_pane_cp34_cp2

0x46a5,	// (0x000072df) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x46a5,	// (0x000072df) list_single_graphic_hl_pane_g1_cp2

0x46fe,	// (0x00007338) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x46fe,	// (0x00007338) list_single_graphic_hl_pane_g2_cp2

0xc030,	// (0x0000ec6a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc030,	// (0x0000ec6a) list_single_graphic_hl_pane_g3_cp2

0xee4d,	// (0x00011a87) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xee4d,	// (0x00011a87) list_single_graphic_hl_pane_g4_cp2

0x46be,	// (0x000072f8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x46be,	// (0x000072f8) list_single_graphic_hl_pane_g5_cp2

0xa26c,	// (0x0000cea6) control_pane_g4_ParamLimits

0xa26c,	// (0x0000cea6) control_pane_g4

0xf47b,	// (0x000120b5) bg_popup_sub_pane_cp10_ParamLimits

0x39e0,	// (0x0000661a) list_choice_list_pane_ParamLimits

0x39ef,	// (0x00006629) scroll_pane_cp23

0xe2a1,	// (0x00010edb) bg_popup_preview_window_pane_cp02_ParamLimits

0x42a5,	// (0x00006edf) list_preview_fixed_pane_ParamLimits

0x42bb,	// (0x00006ef5) list_preview_fixed_pane_cp_ParamLimits

0x42bb,	// (0x00006ef5) list_preview_fixed_pane_cp

0x42c7,	// (0x00006f01) popup_preview_fixed_window_g1_ParamLimits

0x42c7,	// (0x00006f01) popup_preview_fixed_window_g1

0x42d3,	// (0x00006f0d) popup_preview_fixed_window_g2_ParamLimits

0x42d3,	// (0x00006f0d) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x00012785) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x00012785) popup_preview_fixed_window_g

0xe9e6,	// (0x00011620) aid_navi_side_left_pane_ParamLimits

0xe9fb,	// (0x00011635) aid_navi_side_right_pane_ParamLimits

0xea13,	// (0x0001164d) navi_icon_pane_stacon_ParamLimits

0xea27,	// (0x00011661) navi_navi_pane_stacon_ParamLimits

0xea13,	// (0x0001164d) navi_text_pane_stacon_ParamLimits

0xe0ad,	// (0x00010ce7) main_text_info_pane

0x472e,	// (0x00007368) listscroll_text_info_pane

0x4736,	// (0x00007370) list_text_info_pane_ParamLimits

0x4736,	// (0x00007370) list_text_info_pane

0x4745,	// (0x0000737f) scroll_pane_cp24_ParamLimits

0x4745,	// (0x0000737f) scroll_pane_cp24

0xc03e,	// (0x0000ec78) list_text_info_pane_t1_ParamLimits

0xc03e,	// (0x0000ec78) list_text_info_pane_t1

0xa414,	// (0x0000d04e) popup_fast_swap2_window_ParamLimits

0xa414,	// (0x0000d04e) popup_fast_swap2_window

0x4797,	// (0x000073d1) aid_size_cell_fast2

0xe0ad,	// (0x00010ce7) bg_popup_window_pane_cp17

0x1040,	// (0x00003c7a) heading_pane_cp2

0x47a1,	// (0x000073db) listscroll_fast2_pane

0xc05a,	// (0x0000ec94) grid_fast2_pane

0xc064,	// (0x0000ec9e) listscroll_fast2_pane_g1

0xc06c,	// (0x0000eca6) listscroll_fast2_pane_g2

0x0001,

0xfbc7,	// (0x00012801) listscroll_fast2_pane_g

0xe71f,	// (0x00011359) scroll_pane_cp26

0x47c5,	// (0x000073ff) cell_fast2_pane_ParamLimits

0x47c5,	// (0x000073ff) cell_fast2_pane

0x47da,	// (0x00007414) cell_fast2_pane_g1

0x47e3,	// (0x0000741d) cell_fast2_pane_g2

0x47ec,	// (0x00007426) cell_fast2_pane_g3

0x0002,

0xfbcc,	// (0x00012806) cell_fast2_pane_g

0xe40c,	// (0x00011046) grid_highlight_pane_cp9

0xe421,	// (0x0001105b) main_eswt_pane_ParamLimits

0xe421,	// (0x0001105b) main_eswt_pane

0x475a,	// (0x00007394) list_single_text_info_pane

0x47f4,	// (0x0000742e) eswt_ctrl_button_pane

0x47f4,	// (0x0000742e) eswt_ctrl_canvas_pane

0xc076,	// (0x0000ecb0) eswt_ctrl_combo_pane

0x47f4,	// (0x0000742e) eswt_ctrl_default_pane

0x47f4,	// (0x0000742e) eswt_ctrl_label_pane

0x4804,	// (0x0000743e) eswt_ctrl_wait_pane

0xc07e,	// (0x0000ecb8) eswt_shell_pane

0xe0ad,	// (0x00010ce7) listscroll_eswt_app_pane

0x482c,	// (0x00007466) popup_eswt_tasktip_window_ParamLimits

0x482c,	// (0x00007466) popup_eswt_tasktip_window

0x0b84,	// (0x000037be) bg_popup_window_pane_cp18

0x483d,	// (0x00007477) eswt_control_pane_g1_ParamLimits

0x483d,	// (0x00007477) eswt_control_pane_g1

0x484a,	// (0x00007484) eswt_control_pane_g2_ParamLimits

0x484a,	// (0x00007484) eswt_control_pane_g2

0x4857,	// (0x00007491) eswt_control_pane_g3_ParamLimits

0x4857,	// (0x00007491) eswt_control_pane_g3

0x4864,	// (0x0000749e) eswt_control_pane_g4_ParamLimits

0x4864,	// (0x0000749e) eswt_control_pane_g4

0x0003,

0xfbd3,	// (0x0001280d) eswt_control_pane_g_ParamLimits

0xfbd3,	// (0x0001280d) eswt_control_pane_g

0xe57f,	// (0x000111b9) bg_button_pane_ParamLimits

0xe57f,	// (0x000111b9) bg_button_pane

0xe421,	// (0x0001105b) common_borders_pane_copy2_ParamLimits

0xe421,	// (0x0001105b) common_borders_pane_copy2

0x4871,	// (0x000074ab) control_button_pane_g1_ParamLimits

0x4871,	// (0x000074ab) control_button_pane_g1

0x487d,	// (0x000074b7) control_button_pane_g2_ParamLimits

0x487d,	// (0x000074b7) control_button_pane_g2

0x4889,	// (0x000074c3) control_button_pane_g3_ParamLimits

0x4889,	// (0x000074c3) control_button_pane_g3

0x0002,

0xfbdc,	// (0x00012816) control_button_pane_g_ParamLimits

0xfbdc,	// (0x00012816) control_button_pane_g

0x489d,	// (0x000074d7) control_button_pane_t1

0x48ab,	// (0x000074e5) control_button_pane_t2

0x0001,

0xfbe3,	// (0x0001281d) control_button_pane_t

0x09ec,	// (0x00003626) bg_button_pane_g1

0x09f4,	// (0x0000362e) bg_button_pane_g2

0x09fc,	// (0x00003636) bg_button_pane_g3

0x0a04,	// (0x0000363e) bg_button_pane_g4

0x0a0c,	// (0x00003646) bg_button_pane_g5

0x0a14,	// (0x0000364e) bg_button_pane_g6

0x0a1c,	// (0x00003656) bg_button_pane_g7

0x0a24,	// (0x0000365e) bg_button_pane_g8

0x0a2c,	// (0x00003666) bg_button_pane_g9

0x0008,

0xf82b,	// (0x00012465) bg_button_pane_g

0x399b,	// (0x000065d5) common_borders_pane_ParamLimits

0x399b,	// (0x000065d5) common_borders_pane

0x483d,	// (0x00007477) eswt_control_pane_g1_copy1_ParamLimits

0x483d,	// (0x00007477) eswt_control_pane_g1_copy1

0x484a,	// (0x00007484) eswt_control_pane_g2_copy1_ParamLimits

0x484a,	// (0x00007484) eswt_control_pane_g2_copy1

0x4857,	// (0x00007491) eswt_control_pane_g3_copy1_ParamLimits

0x4857,	// (0x00007491) eswt_control_pane_g3_copy1

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy1_ParamLimits

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy1

0x39d6,	// (0x00006610) bg_eswt_ctrl_canvas_pane_g1

0x399b,	// (0x000065d5) common_borders_pane_cp2_ParamLimits

0x399b,	// (0x000065d5) common_borders_pane_cp2

0x399b,	// (0x000065d5) common_borders_pane_cp3_ParamLimits

0x399b,	// (0x000065d5) common_borders_pane_cp3

0x48b9,	// (0x000074f3) separator_horizontal_pane

0x48c1,	// (0x000074fb) separator_vertical_pane

0x483d,	// (0x00007477) eswt_control_pane_g1_copy2_ParamLimits

0x483d,	// (0x00007477) eswt_control_pane_g1_copy2

0x484a,	// (0x00007484) eswt_control_pane_g2_copy2_ParamLimits

0x484a,	// (0x00007484) eswt_control_pane_g2_copy2

0x4857,	// (0x00007491) eswt_control_pane_g3_copy2_ParamLimits

0x4857,	// (0x00007491) eswt_control_pane_g3_copy2

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy2_ParamLimits

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy2

0xe0ad,	// (0x00010ce7) common_borders_pane_cp4

0x48ca,	// (0x00007504) separator_horizontal_pane_g1

0x48d3,	// (0x0000750d) separator_horizontal_pane_g2

0x48dc,	// (0x00007516) separator_horizontal_pane_g3

0x0002,

0xfbe8,	// (0x00012822) separator_horizontal_pane_g

0x483d,	// (0x00007477) eswt_control_pane_g1_copy3_ParamLimits

0x483d,	// (0x00007477) eswt_control_pane_g1_copy3

0x484a,	// (0x00007484) eswt_control_pane_g2_copy3_ParamLimits

0x484a,	// (0x00007484) eswt_control_pane_g2_copy3

0x4857,	// (0x00007491) eswt_control_pane_g3_copy3_ParamLimits

0x4857,	// (0x00007491) eswt_control_pane_g3_copy3

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy3_ParamLimits

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy3

0xe0ad,	// (0x00010ce7) common_borders_pane_cp5

0x48e5,	// (0x0000751f) separator_vertical_pane_g1

0x48ee,	// (0x00007528) separator_vertical_pane_g2

0x48f7,	// (0x00007531) separator_vertical_pane_g3

0x0002,

0xfbef,	// (0x00012829) separator_vertical_pane_g

0x483d,	// (0x00007477) eswt_control_pane_g1_copy4_ParamLimits

0x483d,	// (0x00007477) eswt_control_pane_g1_copy4

0x484a,	// (0x00007484) eswt_control_pane_g2_copy4_ParamLimits

0x484a,	// (0x00007484) eswt_control_pane_g2_copy4

0x4857,	// (0x00007491) eswt_control_pane_g3_copy4_ParamLimits

0x4857,	// (0x00007491) eswt_control_pane_g3_copy4

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy4_ParamLimits

0x4864,	// (0x0000749e) eswt_control_pane_g4_copy4

0xc09e,	// (0x0000ecd8) eswt_ctrl_combo_button_pane

0xc0a6,	// (0x0000ece0) eswt_ctrl_input_pane

0xc0ae,	// (0x0000ece8) popup_choice_list_window_cp70

0xc0b6,	// (0x0000ecf0) eswt_ctrl_input_pane_t1

0xe0ad,	// (0x00010ce7) input_focus_pane_cp70

0x399b,	// (0x000065d5) bg_button_pane_cp70_ParamLimits

0x399b,	// (0x000065d5) bg_button_pane_cp70

0xc0c4,	// (0x0000ecfe) eswt_ctrl_combo_button_pane_g1

0x492e,	// (0x00007568) wait_bar_pane_cp70

0x0b84,	// (0x000037be) bg_popup_window_pane_cp70_ParamLimits

0x0b84,	// (0x000037be) bg_popup_window_pane_cp70

0x4936,	// (0x00007570) popup_eswt_tasktip_window_t1

0x494c,	// (0x00007586) wait_bar_pane_cp71_ParamLimits

0x494c,	// (0x00007586) wait_bar_pane_cp71

0x4958,	// (0x00007592) grid_eswt_app_pane

0xeaf0,	// (0x0001172a) scroll_pane_cp70

0xc0cc,	// (0x0000ed06) cell_eswt_app_pane_ParamLimits

0xc0cc,	// (0x0000ed06) cell_eswt_app_pane

0xc0f6,	// (0x0000ed30) cell_eswt_app_pane_g1_ParamLimits

0xc0f6,	// (0x0000ed30) cell_eswt_app_pane_g1

0xc125,	// (0x0000ed5f) cell_eswt_app_pane_g2_ParamLimits

0xc125,	// (0x0000ed5f) cell_eswt_app_pane_g2

0x0001,

0xfbf6,	// (0x00012830) cell_eswt_app_pane_g_ParamLimits

0xfbf6,	// (0x00012830) cell_eswt_app_pane_g

0xc149,	// (0x0000ed83) cell_eswt_app_pane_t1_ParamLimits

0xc149,	// (0x0000ed83) cell_eswt_app_pane_t1

0x4a16,	// (0x00007650) grid_highlight_pane_cp70_ParamLimits

0x4a16,	// (0x00007650) grid_highlight_pane_cp70

0xf161,	// (0x00011d9b) set_content_pane_g1

0xa1fe,	// (0x0000ce38) status_small_volume_pane

0xc17b,	// (0x0000edb5) status_small_volume_pane_g1

0xc183,	// (0x0000edbd) volume_small2_pane

0xc18c,	// (0x0000edc6) volume_small2_pane_g1

0xc195,	// (0x0000edcf) volume_small2_pane_g2

0xc19e,	// (0x0000edd8) volume_small2_pane_g3

0xc1a7,	// (0x0000ede1) volume_small2_pane_g4

0xc1b0,	// (0x0000edea) volume_small2_pane_g5

0xc1b9,	// (0x0000edf3) volume_small2_pane_g6

0xc1c2,	// (0x0000edfc) volume_small2_pane_g7

0xc1cb,	// (0x0000ee05) volume_small2_pane_g8

0xc1d4,	// (0x0000ee0e) volume_small2_pane_g9

0xc1dd,	// (0x0000ee17) volume_small2_pane_g10

0x0009,

0xfbfb,	// (0x00012835) volume_small2_pane_g

0x3fa2,	// (0x00006bdc) fep_vkb_top_text_pane_g1_ParamLimits

0xbf84,	// (0x0000ebbe) fep_vkb_top_text_pane_t1_ParamLimits

0x42df,	// (0x00006f19) popup_preview_fixed_window_g3_ParamLimits

0x42df,	// (0x00006f19) popup_preview_fixed_window_g3

0xaa8b,	// (0x0000d6c5) popup_toolbar_trans_pane

0xb797,	// (0x0000e3d1) aid_height_set_list_ParamLimits

0x21d0,	// (0x00004e0a) aid_size_parent_ParamLimits

0xf47b,	// (0x000120b5) list_highlight_pane_cp2_ParamLimits

0xf161,	// (0x00011d9b) set_content_pane_g1_ParamLimits

0xb952,	// (0x0000e58c) list_single_image_pane_ParamLimits

0xb952,	// (0x0000e58c) list_single_image_pane

0xc1e6,	// (0x0000ee20) aid_size_cell_image_ParamLimits

0xc1e6,	// (0x0000ee20) aid_size_cell_image

0xc1f3,	// (0x0000ee2d) grid_single_image_pane_ParamLimits

0xc1f3,	// (0x0000ee2d) grid_single_image_pane

0xe8a7,	// (0x000114e1) list_single_image_pane_g1_ParamLimits

0xe8a7,	// (0x000114e1) list_single_image_pane_g1

0x430d,	// (0x00006f47) list_single_image_pane_g2_ParamLimits

0x430d,	// (0x00006f47) list_single_image_pane_g2

0x0001,

0xfc10,	// (0x0001284a) list_single_image_pane_g_ParamLimits

0xfc10,	// (0x0001284a) list_single_image_pane_g

0x4aa6,	// (0x000076e0) list_single_image_pane_t1_ParamLimits

0x4aa6,	// (0x000076e0) list_single_image_pane_t1

0xc1ff,	// (0x0000ee39) cell_image_list_pane_ParamLimits

0xc1ff,	// (0x0000ee39) cell_image_list_pane

0xc213,	// (0x0000ee4d) cell_image_list_pane_g1

0xc21c,	// (0x0000ee56) cell_image_list_pane_g2

0x0001,

0xfc15,	// (0x0001284f) cell_image_list_pane_g

0xc225,	// (0x0000ee5f) aid_size_cell_tb_trans_pane

0xe57f,	// (0x000111b9) bg_tb_trans_pane

0xc237,	// (0x0000ee71) grid_tb_trans_pane

0x09ec,	// (0x00003626) bg_tb_trans_pane_g1

0x09f4,	// (0x0000362e) bg_tb_trans_pane_g2

0x09fc,	// (0x00003636) bg_tb_trans_pane_g3

0x0a04,	// (0x0000363e) bg_tb_trans_pane_g4

0x0a0c,	// (0x00003646) bg_tb_trans_pane_g5

0x0a24,	// (0x0000365e) bg_tb_trans_pane_g6

0x0a2c,	// (0x00003666) bg_tb_trans_pane_g7

0x0a14,	// (0x0000364e) bg_tb_trans_pane_g8

0x0a1c,	// (0x00003656) bg_tb_trans_pane_g9

0x0008,

0xfc1a,	// (0x00012854) bg_tb_trans_pane_g

0xc24b,	// (0x0000ee85) cell_toolbar_trans_pane_ParamLimits

0xc24b,	// (0x0000ee85) cell_toolbar_trans_pane

0x39d6,	// (0x00006610) cell_toolbar_trans_pane_g1

0xbc63,	// (0x0000e89d) list_form2_midp_pane_t1

0xbc71,	// (0x0000e8ab) list_form2_midp_pane_t2

0x0001,

0xfac3,	// (0x000126fd) list_form2_midp_pane_t

0x3577,	// (0x000061b1) scroll_pane_cp51_ParamLimits

0x3780,	// (0x000063ba) form2_midp_wait_pane_g1

0x3789,	// (0x000063c3) form2_midp_wait_pane_g2

0x3792,	// (0x000063cc) form2_midp_wait_pane_g3

0x0002,

0xfad8,	// (0x00012712) form2_midp_wait_pane_g

0xe15d,	// (0x00010d97) list_highlight_pane_cp21_ParamLimits

0x37da,	// (0x00006414) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x37e9,	// (0x00006423) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x23bd,	// (0x00004ff7) list_single_2graphic_im_pane_ParamLimits

0x23bd,	// (0x00004ff7) list_single_2graphic_im_pane

0xc271,	// (0x0000eeab) list_single_2graphic_im_pane_g1_ParamLimits

0xc271,	// (0x0000eeab) list_single_2graphic_im_pane_g1

0xc282,	// (0x0000eebc) list_single_2graphic_im_pane_g2_ParamLimits

0xc282,	// (0x0000eebc) list_single_2graphic_im_pane_g2

0xc28e,	// (0x0000eec8) list_single_2graphic_im_pane_g3_ParamLimits

0xc28e,	// (0x0000eec8) list_single_2graphic_im_pane_g3

0x0003,

0xfc2d,	// (0x00012867) list_single_2graphic_im_pane_g_ParamLimits

0xfc2d,	// (0x00012867) list_single_2graphic_im_pane_g

0xc2a2,	// (0x0000eedc) list_single_2graphic_im_pane_t1_ParamLimits

0xc2a2,	// (0x0000eedc) list_single_2graphic_im_pane_t1

0x42eb,	// (0x00006f25) list_single_graphic_2heading_pane_fp_ParamLimits

0x42eb,	// (0x00006f25) list_single_graphic_2heading_pane_fp

0x4344,	// (0x00006f7e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4344,	// (0x00006f7e) list_single_graphic_2heading_pane_fp_g1

0x4301,	// (0x00006f3b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4301,	// (0x00006f3b) list_single_graphic_2heading_pane_fp_g2

0xe8a7,	// (0x000114e1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe8a7,	// (0x000114e1) list_single_graphic_2heading_pane_fp_g3

0x430d,	// (0x00006f47) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x430d,	// (0x00006f47) list_single_graphic_2heading_pane_fp_g4

0x4321,	// (0x00006f5b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4321,	// (0x00006f5b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x00012795) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x00012795) list_single_graphic_2heading_pane_fp_g

0x4b9c,	// (0x000077d6) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4b9c,	// (0x000077d6) list_single_graphic_2heading_pane_fp_t1

0x437c,	// (0x00006fb6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x437c,	// (0x00006fb6) list_single_graphic_2heading_pane_fp_t2

0x4bb2,	// (0x000077ec) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4bb2,	// (0x000077ec) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc36,	// (0x00012870) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc36,	// (0x00012870) list_single_graphic_2heading_pane_fp_t

0x3c00,	// (0x0000683a) fep_hwr_write_pane_g5_ParamLimits

0x3c00,	// (0x0000683a) fep_hwr_write_pane_g5

0x3c0c,	// (0x00006846) fep_hwr_write_pane_g6_ParamLimits

0x3c0c,	// (0x00006846) fep_hwr_write_pane_g6

0xc07e,	// (0x0000ecb8) eswt_shell_pane_ParamLimits

0x0b84,	// (0x000037be) bg_popup_window_pane_cp18_ParamLimits

0x1040,	// (0x00003c7a) heading_pane_cp70

0x4936,	// (0x00007570) popup_eswt_tasktip_window_t1_ParamLimits

0xaba8,	// (0x0000d7e2) aid_touch_tab_arrow_left

0xabbe,	// (0x0000d7f8) aid_touch_tab_arrow_right

0x9090,	// (0x0000bcca) title_pane_g3_ParamLimits

0x9090,	// (0x0000bcca) title_pane_g3

0xe516,	// (0x00011150) set_value_pane_g1

0xaa8b,	// (0x0000d6c5) popup_toolbar_trans_pane_ParamLimits

0xc225,	// (0x0000ee5f) aid_size_cell_tb_trans_pane_ParamLimits

0xe57f,	// (0x000111b9) bg_tb_trans_pane_ParamLimits

0xc237,	// (0x0000ee71) grid_tb_trans_pane_ParamLimits

0xe2a1,	// (0x00010edb) cont_note_pane_ParamLimits

0xe2a1,	// (0x00010edb) cont_note_pane

0xe421,	// (0x0001105b) cont_snote2_single_text_pane_ParamLimits

0xe421,	// (0x0001105b) cont_snote2_single_text_pane

0xe421,	// (0x0001105b) cont_snote2_single_graphic_pane_ParamLimits

0xe421,	// (0x0001105b) cont_snote2_single_graphic_pane

0x1267,	// (0x00003ea1) cont_note_wait_pane_ParamLimits

0x1267,	// (0x00003ea1) cont_note_wait_pane

0x1267,	// (0x00003ea1) cont_note_image_pane_ParamLimits

0x1267,	// (0x00003ea1) cont_note_image_pane

0x4bc8,	// (0x00007802) popup_note2_window_g1_ParamLimits

0x4bc8,	// (0x00007802) popup_note2_window_g1

0xc2e0,	// (0x0000ef1a) popup_note2_window_t1_ParamLimits

0xc2e0,	// (0x0000ef1a) popup_note2_window_t1

0xc325,	// (0x0000ef5f) popup_note2_window_t2_ParamLimits

0xc325,	// (0x0000ef5f) popup_note2_window_t2

0xc36a,	// (0x0000efa4) popup_note2_window_t3_ParamLimits

0xc36a,	// (0x0000efa4) popup_note2_window_t3

0x4cc8,	// (0x00007902) popup_note2_window_t4_ParamLimits

0x4cc8,	// (0x00007902) popup_note2_window_t4

0xe325,	// (0x00010f5f) popup_note2_window_t5_ParamLimits

0xe325,	// (0x00010f5f) popup_note2_window_t5

0x0004,

0xfc42,	// (0x0001287c) popup_note2_window_t_ParamLimits

0xfc42,	// (0x0001287c) popup_note2_window_t

0x4cf7,	// (0x00007931) popup_note2_image_window_g1_ParamLimits

0x4cf7,	// (0x00007931) popup_note2_image_window_g1

0xc3af,	// (0x0000efe9) popup_note2_image_window_g2_ParamLimits

0xc3af,	// (0x0000efe9) popup_note2_image_window_g2

0x0001,

0xfc4d,	// (0x00012887) popup_note2_image_window_g_ParamLimits

0xfc4d,	// (0x00012887) popup_note2_image_window_g

0x4d15,	// (0x0000794f) popup_note2_image_window_t1_ParamLimits

0x4d15,	// (0x0000794f) popup_note2_image_window_t1

0x4d2d,	// (0x00007967) popup_note2_image_window_t2_ParamLimits

0x4d2d,	// (0x00007967) popup_note2_image_window_t2

0x4d45,	// (0x0000797f) popup_note2_image_window_t3_ParamLimits

0x4d45,	// (0x0000797f) popup_note2_image_window_t3

0x0002,

0xfc52,	// (0x0001288c) popup_note2_image_window_t_ParamLimits

0xfc52,	// (0x0001288c) popup_note2_image_window_t

0x1275,	// (0x00003eaf) popup_note2_wait_window_g1_ParamLimits

0x1275,	// (0x00003eaf) popup_note2_wait_window_g1

0x1281,	// (0x00003ebb) popup_note2_wait_window_g2_ParamLimits

0x1281,	// (0x00003ebb) popup_note2_wait_window_g2

0x128d,	// (0x00003ec7) popup_note2_wait_window_g3_ParamLimits

0x128d,	// (0x00003ec7) popup_note2_wait_window_g3

0x0002,

0xf80d,	// (0x00012447) popup_note2_wait_window_g_ParamLimits

0xf80d,	// (0x00012447) popup_note2_wait_window_g

0x4d61,	// (0x0000799b) popup_note2_wait_window_t1_ParamLimits

0x4d61,	// (0x0000799b) popup_note2_wait_window_t1

0x4d7f,	// (0x000079b9) popup_note2_wait_window_t2_ParamLimits

0x4d7f,	// (0x000079b9) popup_note2_wait_window_t2

0x4d9d,	// (0x000079d7) popup_note2_wait_window_t3_ParamLimits

0x4d9d,	// (0x000079d7) popup_note2_wait_window_t3

0x4daf,	// (0x000079e9) popup_note2_wait_window_t4_ParamLimits

0x4daf,	// (0x000079e9) popup_note2_wait_window_t4

0x0003,

0xfc59,	// (0x00012893) popup_note2_wait_window_t_ParamLimits

0xfc59,	// (0x00012893) popup_note2_wait_window_t

0x4dc1,	// (0x000079fb) wait_bar2_pane_ParamLimits

0x4dc1,	// (0x000079fb) wait_bar2_pane

0x4dd9,	// (0x00007a13) popup_snote2_single_text_window_g1_ParamLimits

0x4dd9,	// (0x00007a13) popup_snote2_single_text_window_g1

0x4e01,	// (0x00007a3b) popup_snote2_single_text_window_t1_ParamLimits

0x4e01,	// (0x00007a3b) popup_snote2_single_text_window_t1

0x4e4d,	// (0x00007a87) popup_snote2_single_text_window_t2_ParamLimits

0x4e4d,	// (0x00007a87) popup_snote2_single_text_window_t2

0x4e99,	// (0x00007ad3) popup_snote2_single_text_window_t3_ParamLimits

0x4e99,	// (0x00007ad3) popup_snote2_single_text_window_t3

0x4eda,	// (0x00007b14) popup_snote2_single_text_window_t4_ParamLimits

0x4eda,	// (0x00007b14) popup_snote2_single_text_window_t4

0x4f10,	// (0x00007b4a) popup_snote2_single_text_window_t5_ParamLimits

0x4f10,	// (0x00007b4a) popup_snote2_single_text_window_t5

0x0004,

0xfc62,	// (0x0001289c) popup_snote2_single_text_window_t_ParamLimits

0xfc62,	// (0x0001289c) popup_snote2_single_text_window_t

0xc3c1,	// (0x0000effb) popup_snote2_single_graphic_window_g1_ParamLimits

0xc3c1,	// (0x0000effb) popup_snote2_single_graphic_window_g1

0x4f63,	// (0x00007b9d) popup_snote2_single_graphic_window_g2_ParamLimits

0x4f63,	// (0x00007b9d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6d,	// (0x000128a7) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6d,	// (0x000128a7) popup_snote2_single_graphic_window_g

0x4f8b,	// (0x00007bc5) popup_snote2_single_graphic_window_t1_ParamLimits

0x4f8b,	// (0x00007bc5) popup_snote2_single_graphic_window_t1

0x4fd7,	// (0x00007c11) popup_snote2_single_graphic_window_t2_ParamLimits

0x4fd7,	// (0x00007c11) popup_snote2_single_graphic_window_t2

0x4e99,	// (0x00007ad3) popup_snote2_single_graphic_window_t3_ParamLimits

0x4e99,	// (0x00007ad3) popup_snote2_single_graphic_window_t3

0x4eda,	// (0x00007b14) popup_snote2_single_graphic_window_t4_ParamLimits

0x4eda,	// (0x00007b14) popup_snote2_single_graphic_window_t4

0x4f10,	// (0x00007b4a) popup_snote2_single_graphic_window_t5_ParamLimits

0x4f10,	// (0x00007b4a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc72,	// (0x000128ac) popup_snote2_single_graphic_window_t_ParamLimits

0xfc72,	// (0x000128ac) popup_snote2_single_graphic_window_t

0x33ec,	// (0x00006026) clock_nsta_pane_cp2_t1

0x33ec,	// (0x00006026) clock_nsta_pane_cp2_t2

0x0001,

0xfa99,	// (0x000126d3) clock_nsta_pane_cp2_t

0xe59e,	// (0x000111d8) form_field_data_wide_pane_g1_ParamLimits

0xe5aa,	// (0x000111e4) form_field_data_wide_pane_g2_ParamLimits

0xe5aa,	// (0x000111e4) form_field_data_wide_pane_g2

0xe5b6,	// (0x000111f0) form_field_data_wide_pane_g3_ParamLimits

0xe5b6,	// (0x000111f0) form_field_data_wide_pane_g3

0x0002,

0xf645,	// (0x0001227f) form_field_data_wide_pane_g_ParamLimits

0xf645,	// (0x0001227f) form_field_data_wide_pane_g

0xbb84,	// (0x0000e7be) grid_touch_3_pane_ParamLimits

0xbb84,	// (0x0000e7be) grid_touch_3_pane

0xc3e9,	// (0x0000f023) cell_touch_3_pane_ParamLimits

0xc3e9,	// (0x0000f023) cell_touch_3_pane

0x39d6,	// (0x00006610) cell_touch_3_pane_g1

0x39d6,	// (0x00006610) cell_touch_3_pane_g2

0x0001,

0xfb1e,	// (0x00012758) cell_touch_3_pane_g

0xe357,	// (0x00010f91) cont_query_data_pane

0xe35f,	// (0x00010f99) cont_query_data_pane_cp1

0x5051,	// (0x00007c8b) button_value_adjust_pane_cp7

0x5059,	// (0x00007c93) query_popup_pane_cp3

0xecef,	// (0x00011929) bg_popup_sub_pane_cp22_ParamLimits

0x9ef3,	// (0x0000cb2d) navi_navi_volume_pane_cp2

0x9f02,	// (0x0000cb3c) popup_side_volume_key_window_g2

0x9f11,	// (0x0000cb4b) popup_side_volume_key_window_g3

0x0002,

0xf6db,	// (0x00012315) popup_side_volume_key_window_g

0x9f20,	// (0x0000cb5a) popup_side_volume_key_window_t2

0x0001,

0xf6e2,	// (0x0001231c) popup_side_volume_key_window_t

0xa071,	// (0x0000ccab) popup_side_volume_key_window_ParamLimits

0x97c2,	// (0x0000c3fc) list_double_graphic_pane_g4_ParamLimits

0x97c2,	// (0x0000c3fc) list_double_graphic_pane_g4

0xb92c,	// (0x0000e566) list_single_2heading_msg_pane_ParamLimits

0xb92c,	// (0x0000e566) list_single_2heading_msg_pane

0xc432,	// (0x0000f06c) list_single_2heading_msg_pane_g1_ParamLimits

0xc432,	// (0x0000f06c) list_single_2heading_msg_pane_g1

0xc43e,	// (0x0000f078) list_single_2heading_msg_pane_g2_ParamLimits

0xc43e,	// (0x0000f078) list_single_2heading_msg_pane_g2

0xc451,	// (0x0000f08b) list_single_2heading_msg_pane_g3_ParamLimits

0xc451,	// (0x0000f08b) list_single_2heading_msg_pane_g3

0xc45d,	// (0x0000f097) list_single_2heading_msg_pane_g4_ParamLimits

0xc45d,	// (0x0000f097) list_single_2heading_msg_pane_g4

0x0003,

0xfc7d,	// (0x000128b7) list_single_2heading_msg_pane_g_ParamLimits

0xfc7d,	// (0x000128b7) list_single_2heading_msg_pane_g

0xc475,	// (0x0000f0af) list_single_2heading_msg_pane_t1_ParamLimits

0xc475,	// (0x0000f0af) list_single_2heading_msg_pane_t1

0xc49d,	// (0x0000f0d7) list_single_2heading_msg_pane_t2_ParamLimits

0xc49d,	// (0x0000f0d7) list_single_2heading_msg_pane_t2

0xc508,	// (0x0000f142) list_single_2heading_msg_pane_t3_ParamLimits

0xc508,	// (0x0000f142) list_single_2heading_msg_pane_t3

0x5148,	// (0x00007d82) list_single_2heading_msg_pane_t4_ParamLimits

0x5148,	// (0x00007d82) list_single_2heading_msg_pane_t4

0x0003,

0xfc86,	// (0x000128c0) list_single_2heading_msg_pane_t_ParamLimits

0xfc86,	// (0x000128c0) list_single_2heading_msg_pane_t

0xe10b,	// (0x00010d45) title_pane_g4_ParamLimits

0xe10b,	// (0x00010d45) title_pane_g4

0xe90f,	// (0x00011549) title_pane_stacon_g3_ParamLimits

0xe90f,	// (0x00011549) title_pane_stacon_g3

0x4b5f,	// (0x00007799) list_single_2graphic_im_pane_g4_ParamLimits

0x4b5f,	// (0x00007799) list_single_2graphic_im_pane_g4

0xb576,	// (0x0000e1b0) popup_side_volume_key_window_cp

0x2886,	// (0x000054c0) main_idle_act2_pane_t1

0x0a34,	// (0x0000366e) toolbar_button_pane_g10

0x9699,	// (0x0000c2d3) popup_toolbar_window_cp1

0x33dd,	// (0x00006017) clock_nsta_pane_cp_t1

0x33dd,	// (0x00006017) clock_nsta_pane_cp_t2

0x0001,

0xfa94,	// (0x000126ce) clock_nsta_pane_cp_t

0x9ef3,	// (0x0000cb2d) navi_navi_volume_pane_cp2_ParamLimits

0xed05,	// (0x0001193f) popup_side_volume_key_window_g1_ParamLimits

0x9f02,	// (0x0000cb3c) popup_side_volume_key_window_g2_ParamLimits

0x9f11,	// (0x0000cb4b) popup_side_volume_key_window_g3_ParamLimits

0xf6db,	// (0x00012315) popup_side_volume_key_window_g_ParamLimits

0x3a40,	// (0x0000667a) fep_hwr_aid_pane

0x3ae7,	// (0x00006721) bg_fep_hwr_top_pane_g4_ParamLimits

0x3b07,	// (0x00006741) fep_hwr_top_pane_g1_ParamLimits

0x3b19,	// (0x00006753) fep_hwr_top_pane_g2_ParamLimits

0x3b2b,	// (0x00006765) fep_hwr_top_pane_g3_ParamLimits

0xfae9,	// (0x00012723) fep_hwr_top_pane_g_ParamLimits

0x3b40,	// (0x0000677a) fep_hwr_top_text_pane_ParamLimits

0x1bdb,	// (0x00004815) aid_touch_tab_arrow_arrow_2

0x1be4,	// (0x0000481e) aid_touch_tab_arrow_left_2

0x3a54,	// (0x0000668e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3a8b,	// (0x000066c5) fep_hwr_prediction_pane

0x3db1,	// (0x000069eb) fep_vkb_prediction_pane

0xbf64,	// (0x0000eb9e) fep_vkb_side_pane_g3_ParamLimits

0xbf64,	// (0x0000eb9e) fep_vkb_side_pane_g3

0x3e5a,	// (0x00006a94) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4539,	// (0x00007173) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4546,	// (0x00007180) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x000127cd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x516d,	// (0x00007da7) fep_hwr_prediction_pane_g1

0x5177,	// (0x00007db1) fep_hwr_prediction_pane_g2

0x517f,	// (0x00007db9) fep_hwr_prediction_pane_g3

0x5187,	// (0x00007dc1) fep_hwr_prediction_pane_g4

0x0003,

0xfc8f,	// (0x000128c9) fep_hwr_prediction_pane_g

0x516d,	// (0x00007da7) fep_vkb_prediction_pane_g1

0x518f,	// (0x00007dc9) fep_vkb_prediction_pane_g2

0x5197,	// (0x00007dd1) fep_vkb_prediction_pane_g3

0x519f,	// (0x00007dd9) fep_vkb_prediction_pane_g4

0x0003,

0xfc98,	// (0x000128d2) fep_vkb_prediction_pane_g

0xb719,	// (0x0000e353) slider_set_pane_g3

0xb72d,	// (0x0000e367) slider_set_pane_g4

0xb745,	// (0x0000e37f) slider_set_pane_g5

0xb719,	// (0x0000e353) slider_set_pane_g6

0xb75b,	// (0x0000e395) slider_set_pane_g7

0x2331,	// (0x00004f6b) slider_form_pane_g3

0x233a,	// (0x00004f74) slider_form_pane_g4

0x2342,	// (0x00004f7c) slider_form_pane_g5

0x2331,	// (0x00004f6b) slider_form_pane_g6

0xb8e2,	// (0x0000e51c) slider_form_pane_g7

0x2b7b,	// (0x000057b5) slider_set_pane_vc_g3

0x2b84,	// (0x000057be) slider_set_pane_vc_g4

0x2b8d,	// (0x000057c7) slider_set_pane_vc_g5

0x2b7b,	// (0x000057b5) slider_set_pane_vc_g6

0x2b96,	// (0x000057d0) slider_set_pane_vc_g7

0x309b,	// (0x00005cd5) slider_form_pane_vc_g1

0x30a4,	// (0x00005cde) slider_form_pane_vc_g2

0x30ad,	// (0x00005ce7) slider_form_pane_vc_g3

0x309b,	// (0x00005cd5) slider_form_pane_vc_g4

0x30b6,	// (0x00005cf0) slider_form_pane_vc_g5

0x0004,

0xfa66,	// (0x000126a0) slider_form_pane_vc_g

0xe0ad,	// (0x00010ce7) main_idle_act3_pane

0x51a7,	// (0x00007de1) ai3_links_pane

0xc576,	// (0x0000f1b0) popup_ai3_data_window_ParamLimits

0xc576,	// (0x0000f1b0) popup_ai3_data_window

0xe0ad,	// (0x00010ce7) grid_ai3_links_pane

0xc58e,	// (0x0000f1c8) cell_ai3_links_pane_ParamLimits

0xc58e,	// (0x0000f1c8) cell_ai3_links_pane

0x51e0,	// (0x00007e1a) bg_popup_sub_pane_cp11

0x51ed,	// (0x00007e27) cell_ai3_links_pane_g1

0xe0ad,	// (0x00010ce7) bg_popup_sub_pane_cp12

0x5212,	// (0x00007e4c) heading_ai3_data_pane

0x521a,	// (0x00007e54) list_ai3_gene_pane

0x5226,	// (0x00007e60) popup_ai3_data_window_g1

0x522e,	// (0x00007e68) heading_ai3_data_pane_g1

0x5236,	// (0x00007e70) heading_ai3_data_pane_t1

0xc5a8,	// (0x0000f1e2) list_double_ai3_gene_pane_ParamLimits

0xc5a8,	// (0x0000f1e2) list_double_ai3_gene_pane

0x5251,	// (0x00007e8b) list_single_ai3_gene_pane_ParamLimits

0x5251,	// (0x00007e8b) list_single_ai3_gene_pane

0x399b,	// (0x000065d5) list_highlight_pane_cp7_ParamLimits

0x399b,	// (0x000065d5) list_highlight_pane_cp7

0x525e,	// (0x00007e98) list_single_a13_gene_pane_t1_ParamLimits

0x525e,	// (0x00007e98) list_single_a13_gene_pane_t1

0x5275,	// (0x00007eaf) list_single_ai3_gene_pane_g1

0x527e,	// (0x00007eb8) list_single_ai3_gene_pane_g2

0x0001,

0xfca1,	// (0x000128db) list_single_ai3_gene_pane_g

0x5286,	// (0x00007ec0) list_double_ai3_gene_pane_g1_ParamLimits

0x5286,	// (0x00007ec0) list_double_ai3_gene_pane_g1

0xc5b5,	// (0x0000f1ef) list_double_ai3_gene_pane_t1_ParamLimits

0xc5b5,	// (0x0000f1ef) list_double_ai3_gene_pane_t1

0x52ae,	// (0x00007ee8) list_double_ai3_gene_pane_t2_ParamLimits

0x52ae,	// (0x00007ee8) list_double_ai3_gene_pane_t2

0x52c3,	// (0x00007efd) list_double_ai3_gene_pane_t3_ParamLimits

0x52c3,	// (0x00007efd) list_double_ai3_gene_pane_t3

0x0002,

0xfca6,	// (0x000128e0) list_double_ai3_gene_pane_t_ParamLimits

0xfca6,	// (0x000128e0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x506a,	// (0x00007ca4) aid_size_min_col_2

0xc41c,	// (0x0000f056) aid_size_min_msg_ParamLimits

0xc41c,	// (0x0000f056) aid_size_min_msg

0xbf78,	// (0x0000ebb2) fep_vkb_top_text_pane_g2_ParamLimits

0xbf78,	// (0x0000ebb2) fep_vkb_top_text_pane_g2

0x0001,

0xfb19,	// (0x00012753) fep_vkb_top_text_pane_g_ParamLimits

0xfb19,	// (0x00012753) fep_vkb_top_text_pane_g

0xe0ad,	// (0x00010ce7) main_hc_apps_shell_pane

0x52e0,	// (0x00007f1a) grid_hc_apps_pane_ParamLimits

0x52e0,	// (0x00007f1a) grid_hc_apps_pane

0x52f2,	// (0x00007f2c) list_hc_apps_pane

0x52fa,	// (0x00007f34) scroll_pane_cp37_ParamLimits

0x52fa,	// (0x00007f34) scroll_pane_cp37

0xc5d1,	// (0x0000f20b) cell_hc_apps_pane_ParamLimits

0xc5d1,	// (0x0000f20b) cell_hc_apps_pane

0xc68f,	// (0x0000f2c9) cell_hc_apps_pane_g1_ParamLimits

0xc68f,	// (0x0000f2c9) cell_hc_apps_pane_g1

0x53e4,	// (0x0000801e) cell_hc_apps_pane_g2_ParamLimits

0x53e4,	// (0x0000801e) cell_hc_apps_pane_g2

0x5400,	// (0x0000803a) cell_hc_apps_pane_g3_ParamLimits

0x5400,	// (0x0000803a) cell_hc_apps_pane_g3

0x0002,

0xfcad,	// (0x000128e7) cell_hc_apps_pane_g_ParamLimits

0xfcad,	// (0x000128e7) cell_hc_apps_pane_g

0xc6bb,	// (0x0000f2f5) cell_hc_apps_pane_t1_ParamLimits

0xc6bb,	// (0x0000f2f5) cell_hc_apps_pane_t1

0xe2a1,	// (0x00010edb) grid_highlight_pane_cp10_ParamLimits

0xe2a1,	// (0x00010edb) grid_highlight_pane_cp10

0xc6f9,	// (0x0000f333) list_single_hc_apps_pane_ParamLimits

0xc6f9,	// (0x0000f333) list_single_hc_apps_pane

0xc729,	// (0x0000f363) list_single_hc_apps_pane_g1

0xc742,	// (0x0000f37c) list_single_hc_apps_pane_g2

0x0001,

0xfcb4,	// (0x000128ee) list_single_hc_apps_pane_g

0xc75b,	// (0x0000f395) list_single_hc_apps_pane_g2_copy1

0xc777,	// (0x0000f3b1) list_single_hc_apps_pane_t1

0xe15d,	// (0x00010d97) bg_set_opt_pane_cp_ParamLimits

0x9164,	// (0x0000bd9e) setting_slider_pane_t1_ParamLimits

0x917d,	// (0x0000bdb7) setting_slider_pane_t2_ParamLimits

0x9197,	// (0x0000bdd1) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00012171) setting_slider_pane_t_ParamLimits

0x91af,	// (0x0000bde9) slider_set_pane_ParamLimits

0xf46c,	// (0x000120a6) control_pane_g5_ParamLimits

0xf46c,	// (0x000120a6) control_pane_g5

0xb70c,	// (0x0000e346) slider_set_pane_g1_ParamLimits

0x212d,	// (0x00004d67) slider_set_pane_g2_ParamLimits

0xb719,	// (0x0000e353) slider_set_pane_g3_ParamLimits

0xb72d,	// (0x0000e367) slider_set_pane_g4_ParamLimits

0xb745,	// (0x0000e37f) slider_set_pane_g5_ParamLimits

0xb719,	// (0x0000e353) slider_set_pane_g6_ParamLimits

0xb75b,	// (0x0000e395) slider_set_pane_g7_ParamLimits

0xf929,	// (0x00012563) slider_set_pane_g_ParamLimits

0xf10c,	// (0x00011d46) navi_icon_text_pane_ParamLimits

0xab71,	// (0x0000d7ab) aid_fill_nsta_2_ParamLimits

0xaba8,	// (0x0000d7e2) aid_touch_tab_arrow_left_ParamLimits

0xabbe,	// (0x0000d7f8) aid_touch_tab_arrow_right_ParamLimits

0xac59,	// (0x0000d893) clock_nsta_pane_ParamLimits

0x1bbd,	// (0x000047f7) navi_icon_pane_g1_ParamLimits

0x1bc9,	// (0x00004803) navi_text_pane_t1_ParamLimits

0x34ed,	// (0x00006127) navi_icon_text_pane_g1_ParamLimits

0x34f9,	// (0x00006133) navi_icon_text_pane_t1_ParamLimits

0xc729,	// (0x0000f363) list_single_hc_apps_pane_g1_ParamLimits

0xc742,	// (0x0000f37c) list_single_hc_apps_pane_g2_ParamLimits

0xfcb4,	// (0x000128ee) list_single_hc_apps_pane_g_ParamLimits

0xc75b,	// (0x0000f395) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc777,	// (0x0000f3b1) list_single_hc_apps_pane_t1_ParamLimits

0x8f95,	// (0x0000bbcf) popup_toolbar2_fixed_window_ParamLimits

0x8f95,	// (0x0000bbcf) popup_toolbar2_fixed_window

0xaa81,	// (0x0000d6bb) popup_toolbar2_float_window

0xe0ad,	// (0x00010ce7) bg_popup_sub_pane_cp27

0x5541,	// (0x0000817b) grid_toolbar2_float_pane

0xe0ad,	// (0x00010ce7) bg_popup_sub_pane_cp26

0x5541,	// (0x0000817b) grid_toolbar2_fixed_pane

0xc7a5,	// (0x0000f3df) cell_toolbar2_fixed_pane_ParamLimits

0xc7a5,	// (0x0000f3df) cell_toolbar2_fixed_pane

0xc7bf,	// (0x0000f3f9) cell_toolbar2_fixed_pane_g1

0x091a,	// (0x00003554) toolbar2_fixed_button_pane

0x09ec,	// (0x00003626) toolbar2_fixed_button_pane_g1

0x09f4,	// (0x0000362e) toolbar2_fixed_button_pane_g2

0x09fc,	// (0x00003636) toolbar2_fixed_button_pane_g3

0x0a04,	// (0x0000363e) toolbar2_fixed_button_pane_g4

0x0a0c,	// (0x00003646) toolbar2_fixed_button_pane_g5

0x0a14,	// (0x0000364e) toolbar2_fixed_button_pane_g6

0x0a1c,	// (0x00003656) toolbar2_fixed_button_pane_g7

0x0a24,	// (0x0000365e) toolbar2_fixed_button_pane_g8

0x0a2c,	// (0x00003666) toolbar2_fixed_button_pane_g9

0x0008,

0xf82b,	// (0x00012465) toolbar2_fixed_button_pane_g

0x5562,	// (0x0000819c) cell_toolbar2_float_pane_ParamLimits

0x5562,	// (0x0000819c) cell_toolbar2_float_pane

0x5573,	// (0x000081ad) cell_toolbar2_float_pane_g1

0x091a,	// (0x00003554) toolbar2_fixed_button_pane_cp

0xbe60,	// (0x0000ea9a) fep_vkb_accented_list_pane_ParamLimits

0xbe60,	// (0x0000ea9a) fep_vkb_accented_list_pane

0x41a1,	// (0x00006ddb) bg_popup_fep_shadow_pane_g9

0xf25f,	// (0x00011e99) bg_popup_fep_shadow_pane_cp3

0xe706,	// (0x00011340) list_accented_list_pane

0x557c,	// (0x000081b6) list_single_accented_list_pane_ParamLimits

0x557c,	// (0x000081b6) list_single_accented_list_pane

0xf25f,	// (0x00011e99) list_highlight_pane_cp10

0x558d,	// (0x000081c7) list_single_accented_list_pane_t1

0xa9ab,	// (0x0000d5e5) popup_slider_window_ParamLimits

0xa9ab,	// (0x0000d5e5) popup_slider_window

0x5061,	// (0x00007c9b) aid_indentation_list_msg

0xc8b0,	// (0x0000f4ea) bg_popup_window_pane_cp19

0x56b3,	// (0x000082ed) popup_slider_window_g1

0x56cf,	// (0x00008309) popup_slider_window_g2

0x56eb,	// (0x00008325) popup_slider_window_g3

0x0005,

0xfcb9,	// (0x000128f3) popup_slider_window_g

0x5751,	// (0x0000838b) popup_slider_window_t1

0x57c5,	// (0x000083ff) small_volume_slider_vertical_pane

0x39d6,	// (0x00006610) small_volume_slider_vertical_pane_g1

0x39d6,	// (0x00006610) small_volume_slider_vertical_pane_g2

0x57e1,	// (0x0000841b) small_volume_slider_vertical_pane_g3

0x0002,

0xfccb,	// (0x00012905) small_volume_slider_vertical_pane_g

0x8d87,	// (0x0000b9c1) area_side_right_pane_ParamLimits

0x8d87,	// (0x0000b9c1) area_side_right_pane

0xc946,	// (0x0000f580) aid_size_side_button_ParamLimits

0xc946,	// (0x0000f580) aid_size_side_button

0xc95f,	// (0x0000f599) grid_sctrl_middle_pane_ParamLimits

0xc95f,	// (0x0000f599) grid_sctrl_middle_pane

0x581d,	// (0x00008457) sctrl_sk_bottom_pane

0x582e,	// (0x00008468) sctrl_sk_top_pane

0x5840,	// (0x0000847a) aid_touch_sctrl_top

0xe2a1,	// (0x00010edb) bg_sctrl_sk_pane_ParamLimits

0xe2a1,	// (0x00010edb) bg_sctrl_sk_pane

0x584d,	// (0x00008487) sctrl_sk_top_pane_g1

0x585a,	// (0x00008494) sctrl_sk_top_pane_t1

0x5840,	// (0x0000847a) aid_touch_sctrl_bottom

0xe2a1,	// (0x00010edb) bg_sctrl_sk_pane_cp_ParamLimits

0xe2a1,	// (0x00010edb) bg_sctrl_sk_pane_cp

0x5875,	// (0x000084af) sctrl_sk_bottom_pane_g1

0x585a,	// (0x00008494) sctrl_sk_bottom_pane_t1

0xc97e,	// (0x0000f5b8) cell_sctrl_middle_pane_ParamLimits

0xc97e,	// (0x0000f5b8) cell_sctrl_middle_pane

0xc9a1,	// (0x0000f5db) aid_touch_sctrl_middle_ParamLimits

0xc9a1,	// (0x0000f5db) aid_touch_sctrl_middle

0xe2a1,	// (0x00010edb) bg_sctrl_middle_pane_ParamLimits

0xe2a1,	// (0x00010edb) bg_sctrl_middle_pane

0x6d4c,	// (0x00009986) cell_sctrl_middle_pane_g1_ParamLimits

0x6d4c,	// (0x00009986) cell_sctrl_middle_pane_g1

0xc9b5,	// (0x0000f5ef) cell_sctrl_middle_pane_g2_ParamLimits

0xc9b5,	// (0x0000f5ef) cell_sctrl_middle_pane_g2

0x0001,

0xfcd7,	// (0x00012911) cell_sctrl_middle_pane_g_ParamLimits

0xfcd7,	// (0x00012911) cell_sctrl_middle_pane_g

0x09ec,	// (0x00003626) bg_sctrl_middle_pane_g1

0x09f4,	// (0x0000362e) bg_sctrl_middle_pane_g2

0x09fc,	// (0x00003636) bg_sctrl_middle_pane_g3

0x0a04,	// (0x0000363e) bg_sctrl_middle_pane_g4

0x0a0c,	// (0x00003646) bg_sctrl_middle_pane_g5

0x0a14,	// (0x0000364e) bg_sctrl_middle_pane_g6

0x0a1c,	// (0x00003656) bg_sctrl_middle_pane_g7

0x0a24,	// (0x0000365e) bg_sctrl_middle_pane_g8

0x0007,

0xfcdc,	// (0x00012916) bg_sctrl_middle_pane_g

0x0a2c,	// (0x00003666) bg_sctrl_middle_pane_g8_copy1

0x09ec,	// (0x00003626) bg_sctrl_sk_pane_g1

0x09f4,	// (0x0000362e) bg_sctrl_sk_pane_g2

0x09fc,	// (0x00003636) bg_sctrl_sk_pane_g3

0x0008,

0xf82b,	// (0x00012465) bg_sctrl_sk_pane_g

0xe46f,	// (0x000110a9) aid_size_touch_scroll_bar

0x0a04,	// (0x0000363e) bg_sctrl_sk_pane_g4

0x0a0c,	// (0x00003646) bg_sctrl_sk_pane_g5

0x0a14,	// (0x0000364e) bg_sctrl_sk_pane_g6

0x0a1c,	// (0x00003656) bg_sctrl_sk_pane_g7

0x0a24,	// (0x0000365e) bg_sctrl_sk_pane_g8

0x0a2c,	// (0x00003666) bg_sctrl_sk_pane_g9

0xf4ff,	// (0x00012139) popup_fep_china_hwr2_fs_candidate_window

0xa471,	// (0x0000d0ab) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa471,	// (0x0000d0ab) popup_fep_china_hwr2_fs_control_window

0x3e5a,	// (0x00006a94) sctrl_sk_top_pane_g2

0x0001,

0xfcd2,	// (0x0001290c) sctrl_sk_top_pane_g

0xc9cd,	// (0x0000f607) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc9cd,	// (0x0000f607) aid_fep_china_hwr2_fs_cell

0xc9e1,	// (0x0000f61b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc9e1,	// (0x0000f61b) bg_popup_fep_shadow_pane_cp4

0xc9f8,	// (0x0000f632) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc9f8,	// (0x0000f632) bg_popup_fep_shadow_pane_cp5

0xca0a,	// (0x0000f644) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xca0a,	// (0x0000f644) popup_fep_china_hwr2_fs_control_bar_grid

0xee45,	// (0x00011a7f) popup_fep_china_hwr2_fs_control_funtion_grid

0x590e,	// (0x00008548) aid_fep_china_hwr2_fs_candi_cell

0xe0ad,	// (0x00010ce7) bg_popup_fep_shadow_pane_cp6

0x5918,	// (0x00008552) popup_fep_china_hwr2_fs_candidate_grid

0xca1e,	// (0x0000f658) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xca1e,	// (0x0000f658) cell_fep_china_hwr2_fs_funtion_grid

0x39d6,	// (0x00006610) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x593a,	// (0x00008574) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x593a,	// (0x00008574) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5948,	// (0x00008582) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5948,	// (0x00008582) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfced,	// (0x00012927) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfced,	// (0x00012927) cell_fep_china_hwr2_fs_funtion_grid_g

0xca36,	// (0x0000f670) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xca36,	// (0x0000f670) cell_fep_china_hwr2_fs_funtion_grid_t1

0xca4b,	// (0x0000f685) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xca4b,	// (0x0000f685) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf2,	// (0x0001292c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf2,	// (0x0001292c) cell_fep_china_hwr2_fs_funtion_grid_t

0x598f,	// (0x000085c9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5997,	// (0x000085d1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x599f,	// (0x000085d9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf7,	// (0x00012931) popup_fep_china_hwr2_fs_control_bar_grid_g

0x59a7,	// (0x000085e1) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x59a7,	// (0x000085e1) cell_fep_china_hwr2_fs_candidate_grid

0x59c0,	// (0x000085fa) popup_fep_china_hwr2_fs_candidate_grid_g20

0x59c8,	// (0x00008602) popup_fep_china_hwr2_fs_candidate_grid_g21

0x39d6,	// (0x00006610) cell_fep_china_hwr2_fs_candidate_grid_g1

0x39d6,	// (0x00006610) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1e,	// (0x00012758) cell_fep_china_hwr2_fs_candidate_grid_g

0x59d0,	// (0x0000860a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x0535,	// (0x0000316f) clock_nsta_pane_cp_24_ParamLimits

0x0535,	// (0x0000316f) clock_nsta_pane_cp_24

0x05b3,	// (0x000031ed) indicator_nsta_pane_cp_24_ParamLimits

0x05b3,	// (0x000031ed) indicator_nsta_pane_cp_24

0x1a28,	// (0x00004662) heading_pane_g1

0x0001,

0xf890,	// (0x000124ca) heading_pane_g

0x2617,	// (0x00005251) grid_sct_catagory_button_pane

0x2647,	// (0x00005281) scroll_pane_cp5_ParamLimits

0x3583,	// (0x000061bd) button_value_adjust_pane_cp5_ParamLimits

0x3583,	// (0x000061bd) button_value_adjust_pane_cp5

0x367d,	// (0x000062b7) form2_midp_time_pane_ParamLimits

0x59de,	// (0x00008618) cell_sct_catagory_button_pane_ParamLimits

0x59de,	// (0x00008618) cell_sct_catagory_button_pane

0x399b,	// (0x000065d5) bg_button_pane_cp01_ParamLimits

0x399b,	// (0x000065d5) bg_button_pane_cp01

0x39d6,	// (0x00006610) cell_sct_catagory_button_pane_g1

0xaa24,	// (0x0000d65e) popup_tb_extension_window

0xca67,	// (0x0000f6a1) aid_size_cell_ext_ParamLimits

0xca67,	// (0x0000f6a1) aid_size_cell_ext

0xe421,	// (0x0001105b) bg_tb_trans_pane_cp1_ParamLimits

0xe421,	// (0x0001105b) bg_tb_trans_pane_cp1

0xca8d,	// (0x0000f6c7) grid_tb_ext_pane_ParamLimits

0xca8d,	// (0x0000f6c7) grid_tb_ext_pane

0xcacc,	// (0x0000f706) cell_tb_ext_pane_ParamLimits

0xcacc,	// (0x0000f706) cell_tb_ext_pane

0xcaf4,	// (0x0000f72e) cell_tb_ext_pane_g1_ParamLimits

0xcaf4,	// (0x0000f72e) cell_tb_ext_pane_g1

0x5a74,	// (0x000086ae) cell_tb_ext_pane_t1

0xe2a1,	// (0x00010edb) list_highlight_pane_cp11_ParamLimits

0xe2a1,	// (0x00010edb) list_highlight_pane_cp11

0x8faa,	// (0x0000bbe4) popup_uni_indicator_window_ParamLimits

0x8faa,	// (0x0000bbe4) popup_uni_indicator_window

0xe57f,	// (0x000111b9) bg_popup_sub_pane_cp14

0xcb11,	// (0x0000f74b) list_uniindi_pane

0xcb1d,	// (0x0000f757) uniindi_top_pane

0xe2a1,	// (0x00010edb) bg_uniindi_top_pane

0xcb3c,	// (0x0000f776) uniindi_top_pane_g1

0xcb52,	// (0x0000f78c) uniindi_top_pane_g2

0x0003,

0xfcfe,	// (0x00012938) uniindi_top_pane_g

0xcb6f,	// (0x0000f7a9) uniindi_top_pane_t1

0x5b25,	// (0x0000875f) list_single_uniindi_pane_ParamLimits

0x5b25,	// (0x0000875f) list_single_uniindi_pane

0x39d6,	// (0x00006610) bg_uniindi_top_pane_g1

0x5b38,	// (0x00008772) list_single_uniindi_pane_g1

0x5b4b,	// (0x00008785) list_single_uniindi_pane_t1

0xe0ad,	// (0x00010ce7) control_bg_pane

0x5b70,	// (0x000087aa) bg_sctrl_sk_pane_cp1

0x5b79,	// (0x000087b3) bg_sctrl_sk_pane_cp2

0x5b82,	// (0x000087bc) control_bg_pane_g1

0x5b8b,	// (0x000087c5) control_bg_pane_g2

0x0001,

0xfd07,	// (0x00012941) control_bg_pane_g

0x3381,	// (0x00005fbb) cell_indicator_nsta_pane_g1_ParamLimits

0xbbc1,	// (0x0000e7fb) cell_indicator_nsta_pane_g2_ParamLimits

0xfa82,	// (0x000126bc) cell_indicator_nsta_pane_g_ParamLimits

0x3705,	// (0x0000633f) form2_midp_time_pane_t1_ParamLimits

0x3a32,	// (0x0000666c) main_idle_act4_pane_ParamLimits

0x3a32,	// (0x0000666c) main_idle_act4_pane

0xaa24,	// (0x0000d65e) popup_tb_extension_window_ParamLimits

0xcab2,	// (0x0000f6ec) tb_ext_find_pane_ParamLimits

0xcab2,	// (0x0000f6ec) tb_ext_find_pane

0x5b94,	// (0x000087ce) ai_gene_pane_1_cp1

0xf2e0,	// (0x00011f1a) ai_gene_pane_2_cp1

0xcb99,	// (0x0000f7d3) list_single_idle_plugin_calendar_pane

0x5ba5,	// (0x000087df) list_single_idle_plugin_notification_pane

0x5bae,	// (0x000087e8) list_single_idle_plugin_player_pane

0xcba2,	// (0x0000f7dc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcba2,	// (0x0000f7dc) list_single_idle_plugin_shortcut_pane

0xcbca,	// (0x0000f804) main_idle_act4_pane_t1

0xcbe1,	// (0x0000f81b) main_idle_act4_pane_t2

0x0001,

0xfd0c,	// (0x00012946) main_idle_act4_pane_t

0xcbf8,	// (0x0000f832) middle_sk_idle_act4_pane_ParamLimits

0xcbf8,	// (0x0000f832) middle_sk_idle_act4_pane

0xcc14,	// (0x0000f84e) popup_clock_digital_analogue_window_cp2

0xcc40,	// (0x0000f87a) shortcut_wheel_idle_act4_pane_ParamLimits

0xcc40,	// (0x0000f87a) shortcut_wheel_idle_act4_pane

0x39d6,	// (0x00006610) shortcut_wheel_idle_act4_pane_g1

0x39d6,	// (0x00006610) shortcut_wheel_idle_act4_pane_g2

0x39d6,	// (0x00006610) shortcut_wheel_idle_act4_pane_g3

0x39d6,	// (0x00006610) shortcut_wheel_idle_act4_pane_g4

0x39d6,	// (0x00006610) shortcut_wheel_idle_act4_pane_g5

0x5c41,	// (0x0000887b) shortcut_wheel_idle_act4_pane_g6

0x5c49,	// (0x00008883) shortcut_wheel_idle_act4_pane_g7

0x5c51,	// (0x0000888b) shortcut_wheel_idle_act4_pane_g8

0x5c59,	// (0x00008893) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd11,	// (0x0001294b) shortcut_wheel_idle_act4_pane_g

0x3ae7,	// (0x00006721) middle_sk_idle_act4_pane_g1_ParamLimits

0x3ae7,	// (0x00006721) middle_sk_idle_act4_pane_g1

0xccbd,	// (0x0000f8f7) middle_sk_idle_act4_pane_g2_ParamLimits

0xccbd,	// (0x0000f8f7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd34,	// (0x0001296e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd34,	// (0x0001296e) middle_sk_idle_act4_pane_g

0xccd5,	// (0x0000f90f) middle_sk_idle_act4_pane_t1_ParamLimits

0xccd5,	// (0x0000f90f) middle_sk_idle_act4_pane_t1

0xcd04,	// (0x0000f93e) grid_ai_shortcut_pane_ParamLimits

0xcd04,	// (0x0000f93e) grid_ai_shortcut_pane

0xcd21,	// (0x0000f95b) list_highlight_pane_cp16_ParamLimits

0xcd21,	// (0x0000f95b) list_highlight_pane_cp16

0xcd2e,	// (0x0000f968) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcd2e,	// (0x0000f968) list_single_idle_plugin_shortcut_pane_g1

0xcd3a,	// (0x0000f974) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcd3a,	// (0x0000f974) list_single_idle_plugin_shortcut_pane_g2

0xcd56,	// (0x0000f990) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcd56,	// (0x0000f990) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd39,	// (0x00012973) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd39,	// (0x00012973) list_single_idle_plugin_shortcut_pane_g

0xcd6b,	// (0x0000f9a5) cell_ai_shortcut_pane_ParamLimits

0xcd6b,	// (0x0000f9a5) cell_ai_shortcut_pane

0xcd81,	// (0x0000f9bb) cell_ai_shortcut_pane_g1_ParamLimits

0xcd81,	// (0x0000f9bb) cell_ai_shortcut_pane_g1

0x5b94,	// (0x000087ce) ai_gene_pane_1_cp2

0x5d89,	// (0x000089c3) ai_gene_pane_2_cp2

0x5d91,	// (0x000089cb) list_highlight_pane_cp15

0xcda3,	// (0x0000f9dd) list_single_idle_plugin_calendar_pane_g1

0x5d91,	// (0x000089cb) list_highlight_pane_cp17

0x5da2,	// (0x000089dc) list_single_idle_plugin_calendar_pane_g1_copy1

0x5daa,	// (0x000089e4) list_single_idle_plugin_player_pane_g1

0x2928,	// (0x00005562) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd40,	// (0x0001297a) list_single_idle_plugin_player_pane_g

0x5db2,	// (0x000089ec) list_single_idle_plugin_player_pane_t1

0x5dc0,	// (0x000089fa) list_single_idle_plugin_player_pane_t2

0x5dce,	// (0x00008a08) list_single_idle_plugin_player_pane_t3

0x5ddc,	// (0x00008a16) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd45,	// (0x0001297f) list_single_idle_plugin_player_pane_t

0x5dea,	// (0x00008a24) wait_bar_pane_cp15

0x5df2,	// (0x00008a2c) grid_ai_notification_pane

0x2928,	// (0x00005562) list_single_idle_plugin_notification_pane_g1

0xcdab,	// (0x0000f9e5) cell_ai_notification_pane_ParamLimits

0xcdab,	// (0x0000f9e5) cell_ai_notification_pane

0x5e08,	// (0x00008a42) cell_ai_notification_pane_g1

0x5e10,	// (0x00008a4a) cell_ai_notification_pane_t1

0xcdb8,	// (0x0000f9f2) tb_ext_find_button_pane

0xcdc0,	// (0x0000f9fa) tb_ext_find_pane_g1

0xcdc8,	// (0x0000fa02) tb_ext_find_pane_t1

0xec14,	// (0x0001184e) tb_ext_find_button_pane_g1

0xcdd6,	// (0x0000fa10) tb_ext_find_button_pane_g2

0x0001,

0xfd4e,	// (0x00012988) tb_ext_find_button_pane_g

0xcbca,	// (0x0000f804) main_idle_act4_pane_t1_ParamLimits

0xcbe1,	// (0x0000f81b) main_idle_act4_pane_t2_ParamLimits

0xfd0c,	// (0x00012946) main_idle_act4_pane_t_ParamLimits

0xcc14,	// (0x0000f84e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcc2c,	// (0x0000f866) sat_plugin_idle_act4_pane_ParamLimits

0xcc2c,	// (0x0000f866) sat_plugin_idle_act4_pane

0xcddf,	// (0x0000fa19) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcddf,	// (0x0000fa19) sat_plugin_idle_act4_pane_t1

0xcdf7,	// (0x0000fa31) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcdf7,	// (0x0000fa31) sat_plugin_idle_act4_pane_t2

0xce0f,	// (0x0000fa49) sat_plugin_idle_act4_pane_t3_ParamLimits

0xce0f,	// (0x0000fa49) sat_plugin_idle_act4_pane_t3

0xce27,	// (0x0000fa61) sat_plugin_idle_act4_pane_t4_ParamLimits

0xce27,	// (0x0000fa61) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd53,	// (0x0001298d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd53,	// (0x0001298d) sat_plugin_idle_act4_pane_t

0x8f25,	// (0x0000bb5f) popup_battery_window_ParamLimits

0x8f25,	// (0x0000bb5f) popup_battery_window

0xe2a1,	// (0x00010edb) bg_popup_sub_pane_cp25_ParamLimits

0xe2a1,	// (0x00010edb) bg_popup_sub_pane_cp25

0x5e91,	// (0x00008acb) popup_battery_window_g1_ParamLimits

0x5e91,	// (0x00008acb) popup_battery_window_g1

0x5e9d,	// (0x00008ad7) popup_battery_window_t1_ParamLimits

0x5e9d,	// (0x00008ad7) popup_battery_window_t1

0x5eaf,	// (0x00008ae9) popup_battery_window_t2_ParamLimits

0x5eaf,	// (0x00008ae9) popup_battery_window_t2

0x0001,

0xfd5c,	// (0x00012996) popup_battery_window_t_ParamLimits

0xfd5c,	// (0x00012996) popup_battery_window_t

0xa0c5,	// (0x0000ccff) midp_canvas_pane_ParamLimits

0xa137,	// (0x0000cd71) midp_keypad_pane_ParamLimits

0xa137,	// (0x0000cd71) midp_keypad_pane

0xf47b,	// (0x000120b5) main_midp_pane_ParamLimits

0xbbce,	// (0x0000e808) signal_pane_g2_cp_ParamLimits

0xce3f,	// (0x0000fa79) aid_size_cell_midp_keypad_ParamLimits

0xce3f,	// (0x0000fa79) aid_size_cell_midp_keypad

0xce5d,	// (0x0000fa97) midp_keyp_game_grid_pane_ParamLimits

0xce5d,	// (0x0000fa97) midp_keyp_game_grid_pane

0xce84,	// (0x0000fabe) midp_keyp_rocker_pane_ParamLimits

0xce84,	// (0x0000fabe) midp_keyp_rocker_pane

0xced5,	// (0x0000fb0f) midp_keyp_sk_left_pane_ParamLimits

0xced5,	// (0x0000fb0f) midp_keyp_sk_left_pane

0xcf29,	// (0x0000fb63) midp_keyp_sk_right_pane_ParamLimits

0xcf29,	// (0x0000fb63) midp_keyp_sk_right_pane

0xe0ad,	// (0x00010ce7) bg_button_pane_cp03

0xcf7d,	// (0x0000fbb7) midp_keyp_sk_left_pane_g1

0xe0ad,	// (0x00010ce7) bg_button_pane_cp04

0xcf7d,	// (0x0000fbb7) midp_keyp_sk_right_pane_g1

0x39d6,	// (0x00006610) midp_keyp_rocker_pane_g1

0xcf86,	// (0x0000fbc0) keyp_game_cell_pane_ParamLimits

0xcf86,	// (0x0000fbc0) keyp_game_cell_pane

0xe0ad,	// (0x00010ce7) bg_button_pane_cp02

0xcfaa,	// (0x0000fbe4) keyp_game_cell_pane_g1

0x8f45,	// (0x0000bb7f) popup_fep_vkb2_window_ParamLimits

0x8f45,	// (0x0000bb7f) popup_fep_vkb2_window

0xcfb3,	// (0x0000fbed) aid_size_cell_vkb2_ParamLimits

0xcfb3,	// (0x0000fbed) aid_size_cell_vkb2

0xcfe7,	// (0x0000fc21) popup_fep_vkb2_window_g1_ParamLimits

0xcfe7,	// (0x0000fc21) popup_fep_vkb2_window_g1

0xd037,	// (0x0000fc71) vkb2_area_bottom_pane_ParamLimits

0xd037,	// (0x0000fc71) vkb2_area_bottom_pane

0xd08b,	// (0x0000fcc5) vkb2_area_keypad_pane_ParamLimits

0xd08b,	// (0x0000fcc5) vkb2_area_keypad_pane

0xd0d3,	// (0x0000fd0d) vkb2_area_top_pane_ParamLimits

0xd0d3,	// (0x0000fd0d) vkb2_area_top_pane

0xd15f,	// (0x0000fd99) vkb2_top_entry_pane_ParamLimits

0xd15f,	// (0x0000fd99) vkb2_top_entry_pane

0xd18c,	// (0x0000fdc6) vkb2_top_grid_left_pane_ParamLimits

0xd18c,	// (0x0000fdc6) vkb2_top_grid_left_pane

0xd1ad,	// (0x0000fde7) vkb2_top_grid_right_pane_ParamLimits

0xd1ad,	// (0x0000fde7) vkb2_top_grid_right_pane

0x622f,	// (0x00008e69) vkb2_cell_keypad_pane_ParamLimits

0x622f,	// (0x00008e69) vkb2_cell_keypad_pane

0xd1f5,	// (0x0000fe2f) vkb2_area_bottom_grid_pane_ParamLimits

0xd1f5,	// (0x0000fe2f) vkb2_area_bottom_grid_pane

0xd21f,	// (0x0000fe59) vkb2_area_bottom_pane_g1_ParamLimits

0xd21f,	// (0x0000fe59) vkb2_area_bottom_pane_g1

0xd245,	// (0x0000fe7f) vkb2_area_bottom_pane_g2_ParamLimits

0xd245,	// (0x0000fe7f) vkb2_area_bottom_pane_g2

0xd276,	// (0x0000feb0) vkb2_area_bottom_pane_g3_ParamLimits

0xd276,	// (0x0000feb0) vkb2_area_bottom_pane_g3

0x0002,

0xfd61,	// (0x0001299b) vkb2_area_bottom_pane_g_ParamLimits

0xfd61,	// (0x0001299b) vkb2_area_bottom_pane_g

0x63d9,	// (0x00009013) vkb2_top_cell_left_pane_ParamLimits

0x63d9,	// (0x00009013) vkb2_top_cell_left_pane

0xd2e0,	// (0x0000ff1a) vkb2_top_entry_pane_g1_ParamLimits

0xd2e0,	// (0x0000ff1a) vkb2_top_entry_pane_g1

0xd2ee,	// (0x0000ff28) vkb2_top_entry_pane_t1_ParamLimits

0xd2ee,	// (0x0000ff28) vkb2_top_entry_pane_t1

0x6441,	// (0x0000907b) vkb2_top_entry_pane_t2_ParamLimits

0x6441,	// (0x0000907b) vkb2_top_entry_pane_t2

0x6473,	// (0x000090ad) vkb2_top_entry_pane_t3_ParamLimits

0x6473,	// (0x000090ad) vkb2_top_entry_pane_t3

0x0002,

0xfd68,	// (0x000129a2) vkb2_top_entry_pane_t_ParamLimits

0xfd68,	// (0x000129a2) vkb2_top_entry_pane_t

0xd327,	// (0x0000ff61) vkb2_top_grid_right_pane_g1_ParamLimits

0xd327,	// (0x0000ff61) vkb2_top_grid_right_pane_g1

0x64da,	// (0x00009114) vkb2_top_grid_right_pane_g2_ParamLimits

0x64da,	// (0x00009114) vkb2_top_grid_right_pane_g2

0x64f2,	// (0x0000912c) vkb2_top_grid_right_pane_g3_ParamLimits

0x64f2,	// (0x0000912c) vkb2_top_grid_right_pane_g3

0xd33d,	// (0x0000ff77) vkb2_top_grid_right_pane_g4_ParamLimits

0xd33d,	// (0x0000ff77) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6f,	// (0x000129a9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6f,	// (0x000129a9) vkb2_top_grid_right_pane_g

0x6520,	// (0x0000915a) vkb2_top_cell_left_pane_g1

0x6542,	// (0x0000917c) vkb2_cell_keypad_pane_g1_ParamLimits

0x6542,	// (0x0000917c) vkb2_cell_keypad_pane_g1

0x6550,	// (0x0000918a) vkb2_cell_keypad_pane_t1_ParamLimits

0x6550,	// (0x0000918a) vkb2_cell_keypad_pane_t1

0x6567,	// (0x000091a1) vkb2_cell_bottom_grid_pane_ParamLimits

0x6567,	// (0x000091a1) vkb2_cell_bottom_grid_pane

0x65a0,	// (0x000091da) vkb2_cell_bottom_grid_pane_g1

0xcc61,	// (0x0000f89b) aid_call2_pane_cp02

0xcc69,	// (0x0000f8a3) aid_call_pane_cp02

0xcc71,	// (0x0000f8ab) clock_digital_number_pane_cp10

0xcc79,	// (0x0000f8b3) clock_digital_number_pane_cp11

0xcc81,	// (0x0000f8bb) clock_digital_number_pane_cp12

0xcc89,	// (0x0000f8c3) clock_digital_number_pane_cp13

0xcc91,	// (0x0000f8cb) clock_digital_separator_pane_cp10

0xec14,	// (0x0001184e) popup_clock_digital_analogue_window_cp2_g1

0xec14,	// (0x0001184e) popup_clock_digital_analogue_window_cp2_g2

0xcc99,	// (0x0000f8d3) popup_clock_digital_analogue_window_cp2_g3

0xec14,	// (0x0001184e) popup_clock_digital_analogue_window_cp2_g4

0xcc99,	// (0x0000f8d3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd24,	// (0x0001295e) popup_clock_digital_analogue_window_cp2_g

0xcca1,	// (0x0000f8db) popup_clock_digital_analogue_window_cp2_t1

0xccaf,	// (0x0000f8e9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2f,	// (0x00012969) popup_clock_digital_analogue_window_cp2_t

0x39d6,	// (0x00006610) clock_digital_number_pane_cp10_g1

0x39d6,	// (0x00006610) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1e,	// (0x00012758) clock_digital_number_pane_cp10_g

0x39d6,	// (0x00006610) clock_digital_separator_pane_cp10_g1

0x39d6,	// (0x00006610) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1e,	// (0x00012758) clock_digital_separator_pane_cp10_g

0xcb5e,	// (0x0000f798) uniindi_top_pane_g3

0x5aee,	// (0x00008728) uniindi_top_pane_g4

0x62ba,	// (0x00008ef4) vkb2_row_keypad_pane_ParamLimits

0x62ba,	// (0x00008ef4) vkb2_row_keypad_pane

0x65c0,	// (0x000091fa) vkb2_cell_t_keypad_pane_ParamLimits

0x65c0,	// (0x000091fa) vkb2_cell_t_keypad_pane

0x65d0,	// (0x0000920a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x65d0,	// (0x0000920a) vkb2_cell_t_keypad_pane_cp08

0x65e3,	// (0x0000921d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x65e3,	// (0x0000921d) vkb2_cell_t_keypad_pane_cp09

0x65f7,	// (0x00009231) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x65f7,	// (0x00009231) vkb2_cell_t_keypad_pane_cp01

0x6608,	// (0x00009242) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6608,	// (0x00009242) vkb2_cell_t_keypad_pane_cp02

0x6619,	// (0x00009253) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6619,	// (0x00009253) vkb2_cell_t_keypad_pane_cp03

0x662a,	// (0x00009264) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x662a,	// (0x00009264) vkb2_cell_t_keypad_pane_cp04

0x663b,	// (0x00009275) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x663b,	// (0x00009275) vkb2_cell_t_keypad_pane_cp05

0x664c,	// (0x00009286) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x664c,	// (0x00009286) vkb2_cell_t_keypad_pane_cp06

0x665d,	// (0x00009297) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x665d,	// (0x00009297) vkb2_cell_t_keypad_pane_cp07

0x666e,	// (0x000092a8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x666e,	// (0x000092a8) vkb2_cell_t_keypad_pane_cp10

0x3e5a,	// (0x00006a94) vkb2_cell_t_keypad_pane_g1

0x6683,	// (0x000092bd) vkb2_cell_t_keypad_pane_t1

0xe0ad,	// (0x00010ce7) popup_grid_graphic2_window

0xd353,	// (0x0000ff8d) aid_size_cell_graphic2_ParamLimits

0xd353,	// (0x0000ff8d) aid_size_cell_graphic2

0xd391,	// (0x0000ffcb) bg_popup_window_pane_cp21_ParamLimits

0xd391,	// (0x0000ffcb) bg_popup_window_pane_cp21

0xd39f,	// (0x0000ffd9) graphic2_pages_pane_ParamLimits

0xd39f,	// (0x0000ffd9) graphic2_pages_pane

0xd3f5,	// (0x0001002f) grid_graphic2_control_pane_ParamLimits

0xd3f5,	// (0x0001002f) grid_graphic2_control_pane

0xd43d,	// (0x00010077) grid_graphic2_pane_ParamLimits

0xd43d,	// (0x00010077) grid_graphic2_pane

0xd4c4,	// (0x000100fe) cell_graphic2_pane

0xe0ad,	// (0x00010ce7) main_comp_mode_pane

0x521a,	// (0x00007e54) list_ai3_gene_pane_ParamLimits

0xc8b0,	// (0x0000f4ea) bg_popup_window_pane_cp19_ParamLimits

0x5657,	// (0x00008291) bg_touch_area_indi_pane_ParamLimits

0x5657,	// (0x00008291) bg_touch_area_indi_pane

0x566d,	// (0x000082a7) bg_touch_area_indi_pane_cp01_ParamLimits

0x566d,	// (0x000082a7) bg_touch_area_indi_pane_cp01

0x5683,	// (0x000082bd) bg_touch_area_indi_pane_cp02_ParamLimits

0x5683,	// (0x000082bd) bg_touch_area_indi_pane_cp02

0x5699,	// (0x000082d3) bg_touch_area_indi_pane_cp03_ParamLimits

0x5699,	// (0x000082d3) bg_touch_area_indi_pane_cp03

0x56b3,	// (0x000082ed) popup_slider_window_g1_ParamLimits

0x56cf,	// (0x00008309) popup_slider_window_g2_ParamLimits

0x56eb,	// (0x00008325) popup_slider_window_g3_ParamLimits

0xfcb9,	// (0x000128f3) popup_slider_window_g_ParamLimits

0x5751,	// (0x0000838b) popup_slider_window_t1_ParamLimits

0x57c5,	// (0x000083ff) small_volume_slider_vertical_pane_ParamLimits

0xd4c4,	// (0x000100fe) cell_graphic2_pane_ParamLimits

0xd51f,	// (0x00010159) bg_button_pane_cp10_ParamLimits

0xd51f,	// (0x00010159) bg_button_pane_cp10

0xd532,	// (0x0001016c) bg_button_pane_cp11_ParamLimits

0xd532,	// (0x0001016c) bg_button_pane_cp11

0xd545,	// (0x0001017f) graphic2_pages_pane_g1_ParamLimits

0xd545,	// (0x0001017f) graphic2_pages_pane_g1

0xd560,	// (0x0001019a) graphic2_pages_pane_g2_ParamLimits

0xd560,	// (0x0001019a) graphic2_pages_pane_g2

0x0001,

0xfd7d,	// (0x000129b7) graphic2_pages_pane_g_ParamLimits

0xfd7d,	// (0x000129b7) graphic2_pages_pane_g

0xd578,	// (0x000101b2) graphic2_pages_pane_t1_ParamLimits

0xd578,	// (0x000101b2) graphic2_pages_pane_t1

0xd590,	// (0x000101ca) cell_graphic2_control_pane_ParamLimits

0xd590,	// (0x000101ca) cell_graphic2_control_pane

0xd5c2,	// (0x000101fc) cell_graphic2_pane_g1_ParamLimits

0xd5c2,	// (0x000101fc) cell_graphic2_pane_g1

0x3c82,	// (0x000068bc) cell_graphic2_pane_g2_ParamLimits

0x3c82,	// (0x000068bc) cell_graphic2_pane_g2

0xd5cf,	// (0x00010209) cell_graphic2_pane_g3_ParamLimits

0xd5cf,	// (0x00010209) cell_graphic2_pane_g3

0x3c8f,	// (0x000068c9) cell_graphic2_pane_g4_ParamLimits

0x3c8f,	// (0x000068c9) cell_graphic2_pane_g4

0xd5dc,	// (0x00010216) cell_graphic2_pane_g5_ParamLimits

0xd5dc,	// (0x00010216) cell_graphic2_pane_g5

0x0004,

0xfd82,	// (0x000129bc) cell_graphic2_pane_g_ParamLimits

0xfd82,	// (0x000129bc) cell_graphic2_pane_g

0xd5f9,	// (0x00010233) cell_graphic2_pane_t1_ParamLimits

0xd5f9,	// (0x00010233) cell_graphic2_pane_t1

0x1a1c,	// (0x00004656) grid_highlight_pane_cp11_ParamLimits

0x1a1c,	// (0x00004656) grid_highlight_pane_cp11

0xe2a1,	// (0x00010edb) bg_button_pane_cp05

0xd643,	// (0x0001027d) cell_graphic2_control_pane_g1

0x39d6,	// (0x00006610) bg_touch_area_indi_pane_g1

0x695c,	// (0x00009596) aid_cmod_rocker_key_size

0x6966,	// (0x000095a0) aid_cmode_itu_key_size

0x6970,	// (0x000095aa) main_cmode_video_pane

0x697a,	// (0x000095b4) main_comp_mode_itu_pane

0x6986,	// (0x000095c0) main_comp_mode_rocker_pane

0x6992,	// (0x000095cc) cell_cmode_rocker_pane_ParamLimits

0x6992,	// (0x000095cc) cell_cmode_rocker_pane

0x69a4,	// (0x000095de) cell_cmode_itu_pane_ParamLimits

0x69a4,	// (0x000095de) cell_cmode_itu_pane

0xe57f,	// (0x000111b9) bg_button_pane_cp06_ParamLimits

0xe57f,	// (0x000111b9) bg_button_pane_cp06

0x3e5a,	// (0x00006a94) cell_cmode_rocker_pane_g1_ParamLimits

0x3e5a,	// (0x00006a94) cell_cmode_rocker_pane_g1

0x593a,	// (0x00008574) cell_cmode_rocker_pane_g2_ParamLimits

0x593a,	// (0x00008574) cell_cmode_rocker_pane_g2

0x0001,

0xfd92,	// (0x000129cc) cell_cmode_rocker_pane_g_ParamLimits

0xfd92,	// (0x000129cc) cell_cmode_rocker_pane_g

0xe0ad,	// (0x00010ce7) bg_button_pane_cp07

0x69b9,	// (0x000095f3) cell_cmode_itu_pane_g1

0x69c2,	// (0x000095fc) cell_cmode_itu_pane_t1

0x69d0,	// (0x0000960a) cell_cmode_itu_pane_t2

0x0001,

0xfd97,	// (0x000129d1) cell_cmode_itu_pane_t

0x5b60,	// (0x0000879a) aid_touch_ctrl_left

0x5b68,	// (0x000087a2) aid_touch_ctrl_right

0xe0ad,	// (0x00010ce7) compa_mode_pane

0xd669,	// (0x000102a3) aid_cmod_rocker_key_size_cp

0xd673,	// (0x000102ad) aid_cmode_itu_key_size_cp

0x69f2,	// (0x0000962c) compa_mode_pane_g1

0x69fa,	// (0x00009634) compa_mode_pane_g2

0x6a02,	// (0x0000963c) compa_mode_pane_g3

0x0002,

0xfd9c,	// (0x000129d6) compa_mode_pane_g

0xd67d,	// (0x000102b7) main_comp_mode_itu_pane_cp

0xd685,	// (0x000102bf) main_comp_mode_rocker_pane_cp

0xd68d,	// (0x000102c7) cell_cmode_itu_pane_cp_ParamLimits

0xd68d,	// (0x000102c7) cell_cmode_itu_pane_cp

0xd6a2,	// (0x000102dc) cell_cmode_rocker_pane_cp_ParamLimits

0xd6a2,	// (0x000102dc) cell_cmode_rocker_pane_cp

0xe57f,	// (0x000111b9) bg_button_pane_cp06_cp_ParamLimits

0xe57f,	// (0x000111b9) bg_button_pane_cp06_cp

0x3e5a,	// (0x00006a94) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3e5a,	// (0x00006a94) cell_cmode_rocker_pane_g1_cp

0x39d6,	// (0x00006610) cell_cmode_rocker_pane_g2_cp

0xe0ad,	// (0x00010ce7) bg_button_pane_cp07_cp

0xd6b4,	// (0x000102ee) cell_cmode_itu_pane_g1_cp

0xd6bd,	// (0x000102f7) cell_cmode_itu_pane_t1_cp

0xd6bd,	// (0x000102f7) cell_cmode_itu_pane_t2_cp

0xb8d8,	// (0x0000e512) settings_code_pane_cp2

0xe15d,	// (0x00010d97) bg_popup_window_pane_cp3_ParamLimits

0xe3ba,	// (0x00010ff4) heading_pane_cp3_ParamLimits

0xe3c9,	// (0x00011003) listscroll_popup_graphic_pane_ParamLimits

0x3a40,	// (0x0000667a) fep_hwr_aid_pane_ParamLimits

0x5840,	// (0x0000847a) aid_touch_sctrl_top_ParamLimits

0x584d,	// (0x00008487) sctrl_sk_top_pane_g1_ParamLimits

0x3e5a,	// (0x00006a94) sctrl_sk_top_pane_g2_ParamLimits

0xfcd2,	// (0x0001290c) sctrl_sk_top_pane_g_ParamLimits

0x585a,	// (0x00008494) sctrl_sk_top_pane_t1_ParamLimits

0x5840,	// (0x0000847a) aid_touch_sctrl_bottom_ParamLimits

0x585a,	// (0x00008494) sctrl_sk_bottom_pane_t1_ParamLimits

0xcb2a,	// (0x0000f764) aid_area_touch_clock

0xd11f,	// (0x0000fd59) aid_vkb2_area_top_pane_cell_ParamLimits

0xd11f,	// (0x0000fd59) aid_vkb2_area_top_pane_cell

0xd1ce,	// (0x0000fe08) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd1ce,	// (0x0000fe08) aid_vkb2_area_bottom_pane_cell

0x63f9,	// (0x00009033) popup_char_count_window

0x6a58,	// (0x00009692) popup_char_count_window_g1

0x6a61,	// (0x0000969b) popup_char_count_window_g2

0x6a6a,	// (0x000096a4) popup_char_count_window_g3

0x0002,

0xfda3,	// (0x000129dd) popup_char_count_window_g

0x6a73,	// (0x000096ad) popup_char_count_window_t1

0x6050,	// (0x00008c8a) popup_fep_char_preview_window_ParamLimits

0x6050,	// (0x00008c8a) popup_fep_char_preview_window

0xd13f,	// (0x0000fd79) vkb2_top_candi_pane_ParamLimits

0xd13f,	// (0x0000fd79) vkb2_top_candi_pane

0xd6cb,	// (0x00010305) cell_vkb2_top_candi_pane_ParamLimits

0xd6cb,	// (0x00010305) cell_vkb2_top_candi_pane

0x1267,	// (0x00003ea1) bg_popup_fep_char_preview_window_ParamLimits

0x1267,	// (0x00003ea1) bg_popup_fep_char_preview_window

0x6acb,	// (0x00009705) popup_fep_char_preview_window_t1_ParamLimits

0x6acb,	// (0x00009705) popup_fep_char_preview_window_t1

0x6b05,	// (0x0000973f) bg_popup_fep_char_preview_window_g1

0x6b0d,	// (0x00009747) bg_popup_fep_char_preview_window_g2

0x6b15,	// (0x0000974f) bg_popup_fep_char_preview_window_g3

0x6b1d,	// (0x00009757) bg_popup_fep_char_preview_window_g4

0x6b25,	// (0x0000975f) bg_popup_fep_char_preview_window_g5

0x6b2d,	// (0x00009767) bg_popup_fep_char_preview_window_g6

0x6b35,	// (0x0000976f) bg_popup_fep_char_preview_window_g7

0x6b3d,	// (0x00009777) bg_popup_fep_char_preview_window_g8

0x6b45,	// (0x0000977f) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaa,	// (0x000129e4) bg_popup_fep_char_preview_window_g

0x3e5a,	// (0x00006a94) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3e5a,	// (0x00006a94) cell_vkb2_top_candi_pane_g1

0x41c5,	// (0x00006dff) cell_vkb2_top_candi_pane_g2_ParamLimits

0x41c5,	// (0x00006dff) cell_vkb2_top_candi_pane_g2

0x41e6,	// (0x00006e20) cell_vkb2_top_candi_pane_g3_ParamLimits

0x41e6,	// (0x00006e20) cell_vkb2_top_candi_pane_g3

0x6b55,	// (0x0000978f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6b55,	// (0x0000978f) cell_vkb2_top_candi_pane_g4

0x6b76,	// (0x000097b0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6b76,	// (0x000097b0) cell_vkb2_top_candi_pane_g5

0x593a,	// (0x00008574) cell_vkb2_top_candi_pane_g6_ParamLimits

0x593a,	// (0x00008574) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbf,	// (0x000129f9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbf,	// (0x000129f9) cell_vkb2_top_candi_pane_g

0x6b97,	// (0x000097d1) cell_vkb2_top_candi_pane_t1

0xb6f8,	// (0x0000e332) aid_size_touch_slider_mark_ParamLimits

0xb6f8,	// (0x0000e332) aid_size_touch_slider_mark

0xd3db,	// (0x00010015) grid_graphic2_catg_pane_ParamLimits

0xd3db,	// (0x00010015) grid_graphic2_catg_pane

0xd497,	// (0x000100d1) popup_grid_graphic2_window_t1_ParamLimits

0xd497,	// (0x000100d1) popup_grid_graphic2_window_t1

0xd4ad,	// (0x000100e7) popup_grid_graphic2_window_t2_ParamLimits

0xd4ad,	// (0x000100e7) popup_grid_graphic2_window_t2

0x0001,

0xfd78,	// (0x000129b2) popup_grid_graphic2_window_t_ParamLimits

0xfd78,	// (0x000129b2) popup_grid_graphic2_window_t

0xe2a1,	// (0x00010edb) bg_button_pane_cp05_ParamLimits

0xd643,	// (0x0001027d) cell_graphic2_control_pane_g1_ParamLimits

0xd733,	// (0x0001036d) cell_graphic2_catg_pane_ParamLimits

0xd733,	// (0x0001036d) cell_graphic2_catg_pane

0xe0ad,	// (0x00010ce7) bg_button_pane_cp12

0xd745,	// (0x0001037f) cell_graphic2_catg_pane_g1

0x5a74,	// (0x000086ae) cell_tb_ext_pane_t1_ParamLimits

0x6497,	// (0x000090d1) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6497,	// (0x000090d1) vkb2_top_cell_right_narrow_pane

0x64af,	// (0x000090e9) vkb2_top_cell_right_wide_pane_ParamLimits

0x64af,	// (0x000090e9) vkb2_top_cell_right_wide_pane

0x3a32,	// (0x0000666c) bg_vkb2_func_pane_ParamLimits

0x3a32,	// (0x0000666c) bg_vkb2_func_pane

0x6520,	// (0x0000915a) vkb2_top_cell_left_pane_g1_ParamLimits

0x3a32,	// (0x0000666c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3a32,	// (0x0000666c) bg_vkb2_fuc_pane_cp03

0x65a0,	// (0x000091da) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x09f4,	// (0x0000362e) bg_vkb2_func_pane_g1

0x09fc,	// (0x00003636) bg_vkb2_func_pane_g2

0x0a0c,	// (0x00003646) bg_vkb2_func_pane_g3

0x0a04,	// (0x0000363e) bg_vkb2_func_pane_g4

0x0a14,	// (0x0000364e) bg_vkb2_func_pane_g5

0x0a1c,	// (0x00003656) bg_vkb2_func_pane_g6

0x0a24,	// (0x0000365e) bg_vkb2_func_pane_g7

0x0a2c,	// (0x00003666) bg_vkb2_func_pane_g8

0x09ec,	// (0x00003626) bg_vkb2_func_pane_g9

0x0008,

0xfdcc,	// (0x00012a06) bg_vkb2_func_pane_g

0x3a32,	// (0x0000666c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3a32,	// (0x0000666c) bg_vkb2_fuc_pane_cp01

0x6520,	// (0x0000915a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6520,	// (0x0000915a) vkb2_top_cell_right_wide_pane_g1

0x3a32,	// (0x0000666c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3a32,	// (0x0000666c) bg_vkb2_fuc_pane_cp02

0x6bd1,	// (0x0000980b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6bd1,	// (0x0000980b) vkb2_top_cell_right_narrow_pane_g1

0xc7f2,	// (0x0000f42c) aid_touch_area_decrease_ParamLimits

0xc7f2,	// (0x0000f42c) aid_touch_area_decrease

0xc82c,	// (0x0000f466) aid_touch_area_increase_ParamLimits

0xc82c,	// (0x0000f466) aid_touch_area_increase

0xc854,	// (0x0000f48e) aid_touch_area_mute_ParamLimits

0xc854,	// (0x0000f48e) aid_touch_area_mute

0xc87c,	// (0x0000f4b6) aid_touch_area_slider_ParamLimits

0xc87c,	// (0x0000f4b6) aid_touch_area_slider

0xc8bc,	// (0x0000f4f6) popup_slider_window_g4_ParamLimits

0xc8bc,	// (0x0000f4f6) popup_slider_window_g4

0xc8d6,	// (0x0000f510) popup_slider_window_g5_ParamLimits

0xc8d6,	// (0x0000f510) popup_slider_window_g5

0xc8fc,	// (0x0000f536) popup_slider_window_g6_ParamLimits

0xc8fc,	// (0x0000f536) popup_slider_window_g6

0x577f,	// (0x000083b9) popup_slider_window_t2_ParamLimits

0x577f,	// (0x000083b9) popup_slider_window_t2

0x0001,

0xfcc6,	// (0x00012900) popup_slider_window_t_ParamLimits

0xfcc6,	// (0x00012900) popup_slider_window_t

0xc912,	// (0x0000f54c) slider_pane_ParamLimits

0xc912,	// (0x0000f54c) slider_pane

0x6bf1,	// (0x0000982b) slider_pane_g1_ParamLimits

0x6bf1,	// (0x0000982b) slider_pane_g1

0x6c05,	// (0x0000983f) slider_pane_g2_ParamLimits

0x6c05,	// (0x0000983f) slider_pane_g2

0x6c1b,	// (0x00009855) slider_pane_g3_ParamLimits

0x6c1b,	// (0x00009855) slider_pane_g3

0x0003,

0xfddf,	// (0x00012a19) slider_pane_g_ParamLimits

0xfddf,	// (0x00012a19) slider_pane_g

0xaa6c,	// (0x0000d6a6) popup_tb_float_extension_window_ParamLimits

0xaa6c,	// (0x0000d6a6) popup_tb_float_extension_window

0x6c47,	// (0x00009881) aid_size_cell_tb_float_ext

0xe0ad,	// (0x00010ce7) bg_popup_sub_window_cp28

0xd74e,	// (0x00010388) grid_tb_float_ext_pane

0xd758,	// (0x00010392) cell_tb_float_ext_pane_ParamLimits

0xd758,	// (0x00010392) cell_tb_float_ext_pane

0xd772,	// (0x000103ac) cell_tb_float_ext_pane_g1

0xd77b,	// (0x000103b5) grid_highlight_pane_cp12

0xbe3e,	// (0x0000ea78) cell_last_hwr_side_pane_ParamLimits

0xbe3e,	// (0x0000ea78) cell_last_hwr_side_pane

0x39d6,	// (0x00006610) cell_last_hwr_side_pane_g1

0x6c89,	// (0x000098c3) cell_last_hwr_side_pane_g2

0x0001,

0xfde8,	// (0x00012a22) cell_last_hwr_side_pane_g

0xd2ab,	// (0x0000fee5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd2ab,	// (0x0000fee5) vkb2_area_bottom_space_btn_pane

0x3e5a,	// (0x00006a94) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6683,	// (0x000092bd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6b97,	// (0x000097d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6c92,	// (0x000098cc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6c92,	// (0x000098cc) vkb2_area_bottom_space_btn_pane_g1

0x6ccc,	// (0x00009906) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6ccc,	// (0x00009906) vkb2_area_bottom_space_btn_pane_g2

0x6d02,	// (0x0000993c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6d02,	// (0x0000993c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfded,	// (0x00012a27) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfded,	// (0x00012a27) vkb2_area_bottom_space_btn_pane_g

0x3af5,	// (0x0000672f) cel_fep_hwr_func_pane_ParamLimits

0x3af5,	// (0x0000672f) cel_fep_hwr_func_pane

0xbe13,	// (0x0000ea4d) cell_hwr_side_button_pane_ParamLimits

0xbe13,	// (0x0000ea4d) cell_hwr_side_button_pane

0xcb2a,	// (0x0000f764) aid_area_touch_clock_ParamLimits

0xe2a1,	// (0x00010edb) bg_uniindi_top_pane_ParamLimits

0xcb3c,	// (0x0000f776) uniindi_top_pane_g1_ParamLimits

0xcb52,	// (0x0000f78c) uniindi_top_pane_g2_ParamLimits

0xcb5e,	// (0x0000f798) uniindi_top_pane_g3_ParamLimits

0x5aee,	// (0x00008728) uniindi_top_pane_g4_ParamLimits

0xfcfe,	// (0x00012938) uniindi_top_pane_g_ParamLimits

0xcb6f,	// (0x0000f7a9) uniindi_top_pane_t1_ParamLimits

0xe2a1,	// (0x00010edb) bg_vkb2_func_pane_cp01_ParamLimits

0xe2a1,	// (0x00010edb) bg_vkb2_func_pane_cp01

0x6d4c,	// (0x00009986) cel_fep_hwr_func_pane_g1_ParamLimits

0x6d4c,	// (0x00009986) cel_fep_hwr_func_pane_g1

0xe2a1,	// (0x00010edb) bg_vkb2_func_pane_cp02_ParamLimits

0xe2a1,	// (0x00010edb) bg_vkb2_func_pane_cp02

0x6d4c,	// (0x00009986) cell_hwr_side_button_pane_g1_ParamLimits

0x6d4c,	// (0x00009986) cell_hwr_side_button_pane_g1

0x07c0,	// (0x000033fa) status_pane_g4_ParamLimits

0x07c0,	// (0x000033fa) status_pane_g4

0x07da,	// (0x00003414) status_pane_t1

0x3718,	// (0x00006352) form2_midp_gauge_slider_cont_pane

0x3720,	// (0x0000635a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd2c,	// (0x0000e966) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd3e,	// (0x0000e978) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad1,	// (0x0001270b) form2_midp_gauge_slider_pane_t_ParamLimits

0x3756,	// (0x00006390) form2_midp_slider_pane_ParamLimits

0x6018,	// (0x00008c52) aid_size_cell_func_vkb2_ParamLimits

0x6018,	// (0x00008c52) aid_size_cell_func_vkb2

0x6c33,	// (0x0000986d) slider_pane_g4_ParamLimits

0x6c33,	// (0x0000986d) slider_pane_g4

0xd784,	// (0x000103be) form2_midp_gauge_slider_pane_t2_cp01

0xd792,	// (0x000103cc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd792,	// (0x000103cc) form2_midp_gauge_slider_pane_t3_cp01

0x6d85,	// (0x000099bf) form2_midp_slider_pane_cp01

0xe0ad,	// (0x00010ce7) navi_smil_pane

0x6db9,	// (0x000099f3) navi_smil_pane_g1

0x6dc1,	// (0x000099fb) navi_smil_pane_t1

0x6d8e,	// (0x000099c8) form2_midp_slider_pane_g1

0x6d97,	// (0x000099d1) form2_midp_slider_pane_g2

0x6d9f,	// (0x000099d9) form2_midp_slider_pane_g3

0x6d8e,	// (0x000099c8) form2_midp_slider_pane_g4

0xd7af,	// (0x000103e9) form2_midp_slider_pane_g5

0x0004,

0xfdf6,	// (0x00012a30) form2_midp_slider_pane_g

0x6d3c,	// (0x00009976) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6d3c,	// (0x00009976) vkb2_area_bottom_space_btn_pane_g4

0xaca4,	// (0x0000d8de) lc0_navi_pane_ParamLimits

0xaca4,	// (0x0000d8de) lc0_navi_pane

0xad0e,	// (0x0000d948) lc0_stat_indi_pane_ParamLimits

0xad0e,	// (0x0000d948) lc0_stat_indi_pane

0xad23,	// (0x0000d95d) ls0_title_pane_ParamLimits

0xad23,	// (0x0000d95d) ls0_title_pane

0xe57f,	// (0x000111b9) bg_popup_sub_pane_cp14_ParamLimits

0xcb11,	// (0x0000f74b) list_uniindi_pane_ParamLimits

0xcb1d,	// (0x0000f757) uniindi_top_pane_ParamLimits

0x5b38,	// (0x00008772) list_single_uniindi_pane_g1_ParamLimits

0x5b4b,	// (0x00008785) list_single_uniindi_pane_t1_ParamLimits

0xd7ba,	// (0x000103f4) lc0_stat_clock_pane_ParamLimits

0xd7ba,	// (0x000103f4) lc0_stat_clock_pane

0xd7ca,	// (0x00010404) lc0_stat_indi_pane_g1_ParamLimits

0xd7ca,	// (0x00010404) lc0_stat_indi_pane_g1

0xd7d7,	// (0x00010411) lc0_stat_indi_pane_g2_ParamLimits

0xd7d7,	// (0x00010411) lc0_stat_indi_pane_g2

0x0001,

0xfe01,	// (0x00012a3b) lc0_stat_indi_pane_g_ParamLimits

0xfe01,	// (0x00012a3b) lc0_stat_indi_pane_g

0xd7e4,	// (0x0001041e) lc0_uni_indicator_pane_ParamLimits

0xd7e4,	// (0x0001041e) lc0_uni_indicator_pane

0xd7f4,	// (0x0001042e) ls0_title_pane_g1_ParamLimits

0xd7f4,	// (0x0001042e) ls0_title_pane_g1

0xd808,	// (0x00010442) ls0_title_pane_t1_ParamLimits

0xd808,	// (0x00010442) ls0_title_pane_t1

0xd836,	// (0x00010470) lc0_uni_indicator_pane_g1_ParamLimits

0xd836,	// (0x00010470) lc0_uni_indicator_pane_g1

0x6e61,	// (0x00009a9b) lc0_stat_clock_pane_t1

0xe0ad,	// (0x00010ce7) main_ai5_pane

0x6e77,	// (0x00009ab1) ai5_sk_pane_ParamLimits

0x6e77,	// (0x00009ab1) ai5_sk_pane

0xd86b,	// (0x000104a5) cell_ai5_widget_pane_ParamLimits

0xd86b,	// (0x000104a5) cell_ai5_widget_pane

0x6f4d,	// (0x00009b87) aid_size_cell_widget_grid

0x6f5b,	// (0x00009b95) bg_ai5_widget_pane_ParamLimits

0x6f5b,	// (0x00009b95) bg_ai5_widget_pane

0x6fd9,	// (0x00009c13) cell_ai5_widget_pane_g2

0x6fed,	// (0x00009c27) cell_ai5_widget_pane_g3

0x7007,	// (0x00009c41) cell_ai5_widget_pane_g4

0x7017,	// (0x00009c51) cell_ai5_widget_pane_g5

0x7027,	// (0x00009c61) cell_ai5_widget_pane_g6

0x7033,	// (0x00009c6d) cell_ai5_widget_pane_g7

0x709f,	// (0x00009cd9) cell_ai5_widget_pane_t1_ParamLimits

0x709f,	// (0x00009cd9) cell_ai5_widget_pane_t1

0x70bc,	// (0x00009cf6) cell_ai5_widget_pane_t2_ParamLimits

0x70bc,	// (0x00009cf6) cell_ai5_widget_pane_t2

0x70d4,	// (0x00009d0e) cell_ai5_widget_pane_t3_ParamLimits

0x70d4,	// (0x00009d0e) cell_ai5_widget_pane_t3

0x70ec,	// (0x00009d26) cell_ai5_widget_pane_t4_ParamLimits

0x70ec,	// (0x00009d26) cell_ai5_widget_pane_t4

0xd8d7,	// (0x00010511) cell_ai5_widget_pane_t5_ParamLimits

0xd8d7,	// (0x00010511) cell_ai5_widget_pane_t5

0x7131,	// (0x00009d6b) cell_ai5_widget_pane_t6_ParamLimits

0x7131,	// (0x00009d6b) cell_ai5_widget_pane_t6

0x7143,	// (0x00009d7d) cell_ai5_widget_pane_t7_ParamLimits

0x7143,	// (0x00009d7d) cell_ai5_widget_pane_t7

0x7162,	// (0x00009d9c) cell_ai5_widget_pane_t8_ParamLimits

0x7162,	// (0x00009d9c) cell_ai5_widget_pane_t8

0x000b,

0xfe21,	// (0x00012a5b) cell_ai5_widget_pane_t_ParamLimits

0xfe21,	// (0x00012a5b) cell_ai5_widget_pane_t

0x71e6,	// (0x00009e20) grid_ai5_widget_pane

0xe57f,	// (0x000111b9) highlight_cell_ai5_widget_pane_ParamLimits

0xe57f,	// (0x000111b9) highlight_cell_ai5_widget_pane

0xd8f7,	// (0x00010531) ai5_sk_left_pane

0xd901,	// (0x0001053b) ai5_sk_middle_pane

0xd90b,	// (0x00010545) ai5_sk_right_pane

0x7218,	// (0x00009e52) bg_ai5_widget_pane_g1_ParamLimits

0x7218,	// (0x00009e52) bg_ai5_widget_pane_g1

0x7224,	// (0x00009e5e) bg_ai5_widget_pane_g2_ParamLimits

0x7224,	// (0x00009e5e) bg_ai5_widget_pane_g2

0x7230,	// (0x00009e6a) bg_ai5_widget_pane_g3_ParamLimits

0x7230,	// (0x00009e6a) bg_ai5_widget_pane_g3

0x723c,	// (0x00009e76) bg_ai5_widget_pane_g4_ParamLimits

0x723c,	// (0x00009e76) bg_ai5_widget_pane_g4

0x7248,	// (0x00009e82) bg_ai5_widget_pane_g5_ParamLimits

0x7248,	// (0x00009e82) bg_ai5_widget_pane_g5

0x7254,	// (0x00009e8e) bg_ai5_widget_pane_g6_ParamLimits

0x7254,	// (0x00009e8e) bg_ai5_widget_pane_g6

0x7260,	// (0x00009e9a) bg_ai5_widget_pane_g7_ParamLimits

0x7260,	// (0x00009e9a) bg_ai5_widget_pane_g7

0x726c,	// (0x00009ea6) bg_ai5_widget_pane_g8_ParamLimits

0x726c,	// (0x00009ea6) bg_ai5_widget_pane_g8

0x7278,	// (0x00009eb2) bg_ai5_widget_pane_g9_ParamLimits

0x7278,	// (0x00009eb2) bg_ai5_widget_pane_g9

0x0008,

0xfe3a,	// (0x00012a74) bg_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x00012a74) bg_ai5_widget_pane_g

0x72aa,	// (0x00009ee4) cell_shortcut_ai5_widget_pane_ParamLimits

0x72aa,	// (0x00009ee4) cell_shortcut_ai5_widget_pane

0xf25f,	// (0x00011e99) bg_cell_shortcut_ai5_widget_pane

0x72bb,	// (0x00009ef5) cell_grid_ai5_widget_pane_g1

0xf25f,	// (0x00011e99) highlight_cell_shortcut_ai5_widget_pane

0x09fc,	// (0x00003636) ai5_sk_left_pane_g1

0x72c4,	// (0x00009efe) ai5_sk_left_pane_g2

0x72cc,	// (0x00009f06) ai5_sk_left_pane_g3

0x72d4,	// (0x00009f0e) ai5_sk_left_pane_g4

0x0003,

0xfe4d,	// (0x00012a87) ai5_sk_left_pane_g

0x72dc,	// (0x00009f16) ai5_sk_left_pane_t1

0x09f4,	// (0x0000362e) ai5_sk_right_pane_g1

0x72ea,	// (0x00009f24) ai5_sk_right_pane_g2

0x72f2,	// (0x00009f2c) ai5_sk_right_pane_g3

0x72fa,	// (0x00009f34) ai5_sk_right_pane_g4

0x0003,

0xfe56,	// (0x00012a90) ai5_sk_right_pane_g

0x7302,	// (0x00009f3c) ai5_sk_right_pane_t1

0x09f4,	// (0x0000362e) ai5_sk_middle_pane_g1

0x09fc,	// (0x00003636) ai5_sk_middle_pane_g2

0x0a14,	// (0x0000364e) ai5_sk_middle_pane_g3

0x72f2,	// (0x00009f2c) ai5_sk_middle_pane_g4

0x72cc,	// (0x00009f06) ai5_sk_middle_pane_g5

0x7310,	// (0x00009f4a) ai5_sk_middle_pane_g6

0xd915,	// (0x0001054f) ai5_sk_middle_pane_g7

0x0006,

0xfe5f,	// (0x00012a99) ai5_sk_middle_pane_g

0xab90,	// (0x0000d7ca) aid_touch_area_size_lc0_ParamLimits

0xab90,	// (0x0000d7ca) aid_touch_area_size_lc0

0x4207,	// (0x00006e41) cell_hwr_candidate_pane_t1_ParamLimits

0x0491,	// (0x000030cb) aid_touch_navi_pane

0xae1c,	// (0x0000da56) status_dt_navi_pane_ParamLimits

0xae1c,	// (0x0000da56) status_dt_navi_pane

0xae34,	// (0x0000da6e) status_dt_sta_pane_ParamLimits

0xae34,	// (0x0000da6e) status_dt_sta_pane

0xd91d,	// (0x00010557) dt_sta_controll_pane

0xd92a,	// (0x00010564) dt_sta_indi_pane

0xd937,	// (0x00010571) dt_sta_title_pane

0xe2a1,	// (0x00010edb) bg_dt_sta_indi_pane_ParamLimits

0xe2a1,	// (0x00010edb) bg_dt_sta_indi_pane

0xd949,	// (0x00010583) dt_sta_battery_pane

0xd951,	// (0x0001058b) dt_sta_indi_pane_g1

0x7362,	// (0x00009f9c) dt_sta_indi_pane_g2

0x736b,	// (0x00009fa5) dt_sta_indi_pane_g3

0x0002,

0xfe6e,	// (0x00012aa8) dt_sta_indi_pane_g

0x7374,	// (0x00009fae) dt_sta_signal_pane

0xe57f,	// (0x000111b9) bg_dt_sta_title_pane_ParamLimits

0xe57f,	// (0x000111b9) bg_dt_sta_title_pane

0x1b8d,	// (0x000047c7) dt_sta_title_pane_g1

0xd95a,	// (0x00010594) dt_sta_title_pane_t1_ParamLimits

0xd95a,	// (0x00010594) dt_sta_title_pane_t1

0xe0ad,	// (0x00010ce7) bg_dt_sta_control_pane

0xd96f,	// (0x000105a9) dt_sta_controll_pane_g1

0xd978,	// (0x000105b2) bg_dt_sta_title_pane_g1

0xd981,	// (0x000105bb) bg_dt_sta_title_pane_g2

0xd98a,	// (0x000105c4) bg_dt_sta_title_pane_g3

0x0002,

0xfe75,	// (0x00012aaf) bg_dt_sta_title_pane_g

0x39d6,	// (0x00006610) bg_dt_sta_indi_pane_g1

0x73b6,	// (0x00009ff0) dt_sta_signal_pane_g1

0x73be,	// (0x00009ff8) dt_sta_signal_pane_g2

0x0001,

0xfe7c,	// (0x00012ab6) dt_sta_signal_pane_g

0x73c6,	// (0x0000a000) dt_sta_battery_pane_g1

0x73cf,	// (0x0000a009) dt_sta_battery_pane_t1

0x39d6,	// (0x00006610) bg_dt_sta_control_pane_g1

0xed2b,	// (0x00011965) fep_china_uni_eep_pane

0xed33,	// (0x0001196d) fep_china_uni_entry_pane_ParamLimits

0xed43,	// (0x0001197d) popup_fep_china_uni_window_g1_ParamLimits

0xed53,	// (0x0001198d) popup_fep_china_uni_window_g2_ParamLimits

0xed53,	// (0x0001198d) popup_fep_china_uni_window_g2

0x0001,

0xf6e7,	// (0x00012321) popup_fep_china_uni_window_g_ParamLimits

0xf6e7,	// (0x00012321) popup_fep_china_uni_window_g

0x73de,	// (0x0000a018) fep_china_uni_eep_pane_g1

0x73e6,	// (0x0000a020) fep_china_uni_eep_pane_t1

0x6db0,	// (0x000099ea) aid_touch_area_size_smil_player

0x05e7,	// (0x00003221) lc0_clock_pane

0x07ce,	// (0x00003408) status_pane_g5_ParamLimits

0x07ce,	// (0x00003408) status_pane_g5

0xa5c8,	// (0x0000d202) popup_keymap_window

0x078c,	// (0x000033c6) status_icon_pane

0x6fed,	// (0x00009c27) cell_ai5_widget_pane_g3_ParamLimits

0x7007,	// (0x00009c41) cell_ai5_widget_pane_g4_ParamLimits

0x7017,	// (0x00009c51) cell_ai5_widget_pane_g5_ParamLimits

0x703f,	// (0x00009c79) cell_ai5_widget_pane_g8_ParamLimits

0x703f,	// (0x00009c79) cell_ai5_widget_pane_g8

0x7053,	// (0x00009c8d) cell_ai5_widget_pane_g9_ParamLimits

0x7053,	// (0x00009c8d) cell_ai5_widget_pane_g9

0x7067,	// (0x00009ca1) cell_ai5_widget_pane_g10_ParamLimits

0x7067,	// (0x00009ca1) cell_ai5_widget_pane_g10

0x73f5,	// (0x0000a02f) status_icon_pane_g1

0xe0ad,	// (0x00010ce7) bg_popup_sub_pane_cp13

0x73fd,	// (0x0000a037) popup_keymap_window_t1

0xa284,	// (0x0000cebe) control_pane_g6_ParamLimits

0xa284,	// (0x0000cebe) control_pane_g6

0xa291,	// (0x0000cecb) control_pane_g7_ParamLimits

0xa291,	// (0x0000cecb) control_pane_g7

0xa29e,	// (0x0000ced8) control_pane_g8_ParamLimits

0xa29e,	// (0x0000ced8) control_pane_g8

0xd91d,	// (0x00010557) dt_sta_controll_pane_ParamLimits

0xd92a,	// (0x00010564) dt_sta_indi_pane_ParamLimits

0xd937,	// (0x00010571) dt_sta_title_pane_ParamLimits

0xe478,	// (0x000110b2) aid_size_touch_scroll_bar_cale

0x8f39,	// (0x0000bb73) popup_discreet_window_ParamLimits

0x8f39,	// (0x0000bb73) popup_discreet_window

0x8f8b,	// (0x0000bbc5) popup_sk_window

0x1267,	// (0x00003ea1) bg_popup_sub_pane_cp28_ParamLimits

0x1267,	// (0x00003ea1) bg_popup_sub_pane_cp28

0x740b,	// (0x0000a045) popup_discreet_window_g1_ParamLimits

0x740b,	// (0x0000a045) popup_discreet_window_g1

0x742b,	// (0x0000a065) popup_discreet_window_t1_ParamLimits

0x742b,	// (0x0000a065) popup_discreet_window_t1

0x7449,	// (0x0000a083) popup_discreet_window_t2_ParamLimits

0x7449,	// (0x0000a083) popup_discreet_window_t2

0x0002,

0xfe81,	// (0x00012abb) popup_discreet_window_t_ParamLimits

0xfe81,	// (0x00012abb) popup_discreet_window_t

0x749b,	// (0x0000a0d5) popup_sk_window_g1

0x74a5,	// (0x0000a0df) popup_sk_window_g2

0x0001,

0xfe88,	// (0x00012ac2) popup_sk_window_g

0xd993,	// (0x000105cd) popup_sk_window_t1

0xd9a1,	// (0x000105db) popup_sk_window_t1_copy1

0x6fd9,	// (0x00009c13) cell_ai5_widget_pane_g2_ParamLimits

0x7174,	// (0x00009dae) cell_ai5_widget_pane_t9_ParamLimits

0x7174,	// (0x00009dae) cell_ai5_widget_pane_t9

0xe0ad,	// (0x00010ce7) main_fep_fshwr2_pane

0xd9af,	// (0x000105e9) aid_fshwr2_btn_pane

0xd9c3,	// (0x000105fd) aid_fshwr2_syb_pane

0xd9d7,	// (0x00010611) aid_fshwr2_txt_pane

0xd9e7,	// (0x00010621) fshwr2_func_candi_pane

0xda07,	// (0x00010641) fshwr2_hwr_syb_pane

0xda29,	// (0x00010663) fshwr2_icf_pane

0xe0ad,	// (0x00010ce7) fshwr2_icf_bg_pane

0x756d,	// (0x0000a1a7) fshwr2_icf_pane_t1_ParamLimits

0x756d,	// (0x0000a1a7) fshwr2_icf_pane_t1

0xec14,	// (0x0001184e) fshwr2_func_candi_pane_g1

0xda59,	// (0x00010693) fshwr2_func_candi_row_pane_ParamLimits

0xda59,	// (0x00010693) fshwr2_func_candi_row_pane

0xda7c,	// (0x000106b6) cell_fshwr2_syb_pane_ParamLimits

0xda7c,	// (0x000106b6) cell_fshwr2_syb_pane

0x6d4c,	// (0x00009986) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6d4c,	// (0x00009986) fshwr2_hwr_syb_pane_g1

0xe0ad,	// (0x00010ce7) bg_popup_call_pane_cp01

0xdaa2,	// (0x000106dc) fshwr2_func_candi_cell_pane_ParamLimits

0xdaa2,	// (0x000106dc) fshwr2_func_candi_cell_pane

0x1050,	// (0x00003c8a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1050,	// (0x00003c8a) fshwr2_func_candi_cell_bg_pane

0xdaed,	// (0x00010727) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xdaed,	// (0x00010727) fshwr2_func_candi_cell_pane_g1

0xdb24,	// (0x0001075e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xdb24,	// (0x0001075e) fshwr2_func_candi_cell_pane_t1

0xe0ad,	// (0x00010ce7) bg_button_pane_cp08

0xf47b,	// (0x000120b5) cell_fshwr2_syb_bg_pane

0xdb3f,	// (0x00010779) cell_fshwr2_syb_bg_pane_g1

0xdb52,	// (0x0001078c) cell_fshwr2_syb_bg_pane_t1

0xe57f,	// (0x000111b9) main_tmo_pane

0xb5bc,	// (0x0000e1f6) uni_indicator_pane_g1_ParamLimits

0xb5d2,	// (0x0000e20c) uni_indicator_pane_g2_ParamLimits

0xb5e8,	// (0x0000e222) uni_indicator_pane_g3_ParamLimits

0x1efa,	// (0x00004b34) uni_indicator_pane_g4_ParamLimits

0x1efa,	// (0x00004b34) uni_indicator_pane_g4

0x1f0e,	// (0x00004b48) uni_indicator_pane_g5_ParamLimits

0x1f0e,	// (0x00004b48) uni_indicator_pane_g5

0x1f0e,	// (0x00004b48) uni_indicator_pane_g6_ParamLimits

0x1f0e,	// (0x00004b48) uni_indicator_pane_g6

0xf8e6,	// (0x00012520) uni_indicator_pane_g_ParamLimits

0xc7d4,	// (0x0000f40e) popup_tmo_note_window_ParamLimits

0xc7d4,	// (0x0000f40e) popup_tmo_note_window

0xe57f,	// (0x000111b9) fshwr2_bg_pane

0xdb15,	// (0x0001074f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xdb15,	// (0x0001074f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8d,	// (0x00012ac7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8d,	// (0x00012ac7) fshwr2_func_candi_cell_pane_g

0x39d6,	// (0x00006610) bg_popup_window_pane_cp01

0x7678,	// (0x0000a2b2) bg_popup_window_pane_g1_cp01

0x7681,	// (0x0000a2bb) bg_popup_window_pane_cp22_ParamLimits

0x7681,	// (0x0000a2bb) bg_popup_window_pane_cp22

0xdb68,	// (0x000107a2) listscroll_tmo_link_pane_ParamLimits

0xdb68,	// (0x000107a2) listscroll_tmo_link_pane

0x76cf,	// (0x0000a309) popup_tmo_note_window_g1_ParamLimits

0x76cf,	// (0x0000a309) popup_tmo_note_window_g1

0xdba8,	// (0x000107e2) tmo_note_info_pane_ParamLimits

0xdba8,	// (0x000107e2) tmo_note_info_pane

0xdbc2,	// (0x000107fc) list_tmo_note_info_pane_g1_ParamLimits

0xdbc2,	// (0x000107fc) list_tmo_note_info_pane_g1

0x770d,	// (0x0000a347) list_tmo_note_info_pane_g2_ParamLimits

0x770d,	// (0x0000a347) list_tmo_note_info_pane_g2

0x0001,

0xfe92,	// (0x00012acc) list_tmo_note_info_pane_g_ParamLimits

0xfe92,	// (0x00012acc) list_tmo_note_info_pane_g

0x7729,	// (0x0000a363) list_tmo_note_info_text_pane_ParamLimits

0x7729,	// (0x0000a363) list_tmo_note_info_text_pane

0x77aa,	// (0x0000a3e4) list_tmo_link_pane

0x77b7,	// (0x0000a3f1) scroll_pane_cp20

0x77c4,	// (0x0000a3fe) list_single_tmo_link_pane_ParamLimits

0x77c4,	// (0x0000a3fe) list_single_tmo_link_pane

0x77d4,	// (0x0000a40e) list_single_tmo_link_pane_t1

0x77e2,	// (0x0000a41c) list_tmo_note_info_text_pane_t1_ParamLimits

0x77e2,	// (0x0000a41c) list_tmo_note_info_text_pane_t1

0x9bef,	// (0x0000c829) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9bef,	// (0x0000c829) aid_size_touch_scroll_bar_cp01

0x9aef,	// (0x0000c729) aid_size_touch_slider_marker

0x8f7b,	// (0x0000bbb5) popup_settings_window_ParamLimits

0x8f7b,	// (0x0000bbb5) popup_settings_window

0xf4f7,	// (0x00012131) popup_candi_list_indi_window

0x0491,	// (0x000030cb) aid_touch_navi_pane_ParamLimits

0x5814,	// (0x0000844e) rs_clock_indi_pane

0x581d,	// (0x00008457) sctrl_sk_bottom_pane_ParamLimits

0x582e,	// (0x00008468) sctrl_sk_top_pane_ParamLimits

0xcfdf,	// (0x0000fc19) popup_fep_tooltip_window

0x6f4d,	// (0x00009b87) aid_size_cell_widget_grid_ParamLimits

0x6fc2,	// (0x00009bfc) cell_ai5_widget_pane_g1_ParamLimits

0x6fc2,	// (0x00009bfc) cell_ai5_widget_pane_g1

0x7027,	// (0x00009c61) cell_ai5_widget_pane_g6_ParamLimits

0x7033,	// (0x00009c6d) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe06,	// (0x00012a40) cell_ai5_widget_pane_g_ParamLimits

0xfe06,	// (0x00012a40) cell_ai5_widget_pane_g

0x71a3,	// (0x00009ddd) cell_ai5_widget_pane_t10_ParamLimits

0x71a3,	// (0x00009ddd) cell_ai5_widget_pane_t10

0x71e6,	// (0x00009e20) grid_ai5_widget_pane_ParamLimits

0x7284,	// (0x00009ebe) cell_contacts_ai5_widget_pane_ParamLimits

0x7284,	// (0x00009ebe) cell_contacts_ai5_widget_pane

0x745e,	// (0x0000a098) popup_discreet_window_t3_ParamLimits

0x745e,	// (0x0000a098) popup_discreet_window_t3

0xda45,	// (0x0001067f) popup_fshwr2_char_preview_window_ParamLimits

0xda45,	// (0x0001067f) popup_fshwr2_char_preview_window

0xdbd9,	// (0x00010813) tmo_note_info_pane_t1

0xdbee,	// (0x00010828) tmo_note_info_pane_t2

0xdc05,	// (0x0001083f) tmo_note_info_pane_t3

0x7786,	// (0x0000a3c0) tmo_note_info_pane_t4

0x7798,	// (0x0000a3d2) tmo_note_info_pane_t5

0x0004,

0xfe97,	// (0x00012ad1) tmo_note_info_pane_t

0x77aa,	// (0x0000a3e4) list_tmo_link_pane_ParamLimits

0x77b7,	// (0x0000a3f1) scroll_pane_cp20_ParamLimits

0xe0ad,	// (0x00010ce7) bg_popup_fep_char_preview_window_cp01

0xdc1a,	// (0x00010854) popup_fshwr2_char_preview_window_t1

0x7809,	// (0x0000a443) popup_candi_list_indi_window_g1

0x7812,	// (0x0000a44c) bg_cell_contacts_ai5_widget_pane

0x781e,	// (0x0000a458) cell_contacts_ai5_widget_pane_g1

0x44fc,	// (0x00007136) cell_contacts_ai5_widget_pane_g2

0x7833,	// (0x0000a46d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea2,	// (0x00012adc) cell_contacts_ai5_widget_pane_g

0x783f,	// (0x0000a479) cell_contacts_ai5_widget_pane_t1

0xe57f,	// (0x000111b9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x78b6,	// (0x0000a4f0) settings_container_pane

0xf25f,	// (0x00011e99) listscroll_set_pane_copy1

0x2d26,	// (0x00005960) scroll_pane_cp121_copy1

0x100c,	// (0x00003c46) set_content_pane_copy1

0xdc28,	// (0x00010862) aid_height_set_list_copy1_ParamLimits

0xdc28,	// (0x00010862) aid_height_set_list_copy1

0x21d0,	// (0x00004e0a) aid_size_parent_copy1_ParamLimits

0x21d0,	// (0x00004e0a) aid_size_parent_copy1

0xdc34,	// (0x0001086e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdc34,	// (0x0001086e) button_value_adjust_pane_cp6_copy1

0xf47b,	// (0x000120b5) list_highlight_pane_cp2_copy1_ParamLimits

0xf47b,	// (0x000120b5) list_highlight_pane_cp2_copy1

0xdc48,	// (0x00010882) list_set_pane_copy1_ParamLimits

0xdc48,	// (0x00010882) list_set_pane_copy1

0x7851,	// (0x0000a48b) main_pane_set_t1_copy1_ParamLimits

0x7851,	// (0x0000a48b) main_pane_set_t1_copy1

0x788b,	// (0x0000a4c5) main_pane_set_t2_copy1_ParamLimits

0x788b,	// (0x0000a4c5) main_pane_set_t2_copy1

0xdcf5,	// (0x0001092f) main_pane_set_t3_copy1

0xdd03,	// (0x0001093d) main_pane_set_t4_copy1

0x78aa,	// (0x0000a4e4) set_content_pane_g1_copy1_ParamLimits

0x78aa,	// (0x0000a4e4) set_content_pane_g1_copy1

0xdd11,	// (0x0001094b) setting_code_pane_copy1

0x79b3,	// (0x0000a5ed) setting_slider_graphic_pane_copy1

0x79b3,	// (0x0000a5ed) setting_slider_pane_copy1

0x79bb,	// (0x0000a5f5) setting_text_pane_copy1

0x79bb,	// (0x0000a5f5) setting_volume_pane_copy1

0xdd11,	// (0x0001094b) settings_code_pane_cp2_copy1

0xdd19,	// (0x00010953) settings_code_pane_cp_copy1_ParamLimits

0xdd19,	// (0x00010953) settings_code_pane_cp_copy1

0xdd2d,	// (0x00010967) volume_set_pane_copy1

0xdd35,	// (0x0001096f) volume_set_pane_g10_copy1

0xdd3d,	// (0x00010977) volume_set_pane_g1_copy1

0xdd45,	// (0x0001097f) volume_set_pane_g2_copy1

0xdd4d,	// (0x00010987) volume_set_pane_g3_copy1

0xdd55,	// (0x0001098f) volume_set_pane_g4_copy1

0xdd5d,	// (0x00010997) volume_set_pane_g5_copy1

0xdd65,	// (0x0001099f) volume_set_pane_g6_copy1

0xdd6d,	// (0x000109a7) volume_set_pane_g7_copy1

0xdd75,	// (0x000109af) volume_set_pane_g8_copy1

0xdd7d,	// (0x000109b7) volume_set_pane_g9_copy1

0xe15d,	// (0x00010d97) bg_set_opt_pane_cp_copy1_ParamLimits

0xe15d,	// (0x00010d97) bg_set_opt_pane_cp_copy1

0xdd85,	// (0x000109bf) setting_slider_pane_t1_copy1_ParamLimits

0xdd85,	// (0x000109bf) setting_slider_pane_t1_copy1

0xdda4,	// (0x000109de) setting_slider_pane_t2_copy1_ParamLimits

0xdda4,	// (0x000109de) setting_slider_pane_t2_copy1

0xddbe,	// (0x000109f8) setting_slider_pane_t3_copy1_ParamLimits

0xddbe,	// (0x000109f8) setting_slider_pane_t3_copy1

0xddd6,	// (0x00010a10) slider_set_pane_copy1_ParamLimits

0xddd6,	// (0x00010a10) slider_set_pane_copy1

0xe645,	// (0x0001127f) set_opt_bg_pane_g1_copy2

0xe64d,	// (0x00011287) set_opt_bg_pane_g2_copy2

0x7a96,	// (0x0000a6d0) set_opt_bg_pane_g3_copy2

0xe65d,	// (0x00011297) set_opt_bg_pane_g4_copy2

0xe665,	// (0x0001129f) set_opt_bg_pane_g5_copy2

0xe66d,	// (0x000112a7) set_opt_bg_pane_g6_copy2

0xddec,	// (0x00010a26) set_opt_bg_pane_g7_copy2

0x7aa8,	// (0x0000a6e2) set_opt_bg_pane_g8_copy2

0x7ab2,	// (0x0000a6ec) set_opt_bg_pane_g9_copy2

0xddf4,	// (0x00010a2e) aid_size_touch_slider_mark_copy1_ParamLimits

0xddf4,	// (0x00010a2e) aid_size_touch_slider_mark_copy1

0xde08,	// (0x00010a42) slider_set_pane_g1_copy1

0x7ad9,	// (0x0000a713) slider_set_pane_g2_copy1

0xb719,	// (0x0000e353) slider_set_pane_g3_copy1_ParamLimits

0xb719,	// (0x0000e353) slider_set_pane_g3_copy1

0xb72d,	// (0x0000e367) slider_set_pane_g4_copy1_ParamLimits

0xb72d,	// (0x0000e367) slider_set_pane_g4_copy1

0xb745,	// (0x0000e37f) slider_set_pane_g5_copy1_ParamLimits

0xb745,	// (0x0000e37f) slider_set_pane_g5_copy1

0xb719,	// (0x0000e353) slider_set_pane_g6_copy1_ParamLimits

0xb719,	// (0x0000e353) slider_set_pane_g6_copy1

0xde11,	// (0x00010a4b) slider_set_pane_g7_copy1_ParamLimits

0xde11,	// (0x00010a4b) slider_set_pane_g7_copy1

0xe0e1,	// (0x00010d1b) bg_set_opt_pane_cp2_copy1

0xde27,	// (0x00010a61) setting_slider_graphic_pane_g1_copy1

0xde30,	// (0x00010a6a) setting_slider_graphic_pane_t1_copy1

0xde40,	// (0x00010a7a) setting_slider_graphic_pane_t2_copy1

0xde50,	// (0x00010a8a) slider_set_pane_cp_copy1

0x7b30,	// (0x0000a76a) input_focus_pane_cp1_copy1

0x7b39,	// (0x0000a773) list_set_text_pane_copy1

0x7b41,	// (0x0000a77b) setting_text_pane_g1_copy1

0x7b4a,	// (0x0000a784) set_text_pane_t1_copy1

0x7b30,	// (0x0000a76a) input_focus_pane_cp2_copy1

0x7b41,	// (0x0000a77b) setting_code_pane_g1_copy1

0x7b65,	// (0x0000a79f) setting_code_pane_t1_copy1

0x7b73,	// (0x0000a7ad) list_set_graphic_pane_copy1

0xe0e1,	// (0x00010d1b) bg_set_opt_pane_cp4_copy1

0xefe4,	// (0x00011c1e) list_set_graphic_pane_g1_copy1_ParamLimits

0xefe4,	// (0x00011c1e) list_set_graphic_pane_g1_copy1

0x7b87,	// (0x0000a7c1) list_set_graphic_pane_g2_copy1

0xeffc,	// (0x00011c36) list_set_graphic_pane_t1_copy1_ParamLimits

0xeffc,	// (0x00011c36) list_set_graphic_pane_t1_copy1

0x39d6,	// (0x00006610) rs_clock_indi_pane_g1

0x7b8f,	// (0x0000a7c9) rs_clock_indi_pane_t1

0x7b9d,	// (0x0000a7d7) rs_indi_pane

0x7ba5,	// (0x0000a7df) rs_indi_pane_g1

0x7bae,	// (0x0000a7e8) rs_indi_pane_g2

0x7809,	// (0x0000a443) rs_indi_pane_g3

0x0002,

0xfea9,	// (0x00012ae3) rs_indi_pane_g

0xf25f,	// (0x00011e99) bg_popup_preview_window_pane_cp03

0x7bb7,	// (0x0000a7f1) popup_fep_tooltip_window_t1

0xc2d3,	// (0x0000ef0d) popup_note2_window_g2_ParamLimits

0xc2d3,	// (0x0000ef0d) popup_note2_window_g2

0x0001,

0xfc3d,	// (0x00012877) popup_note2_window_g_ParamLimits

0xfc3d,	// (0x00012877) popup_note2_window_g

0x51e0,	// (0x00007e1a) bg_popup_sub_pane_cp11_ParamLimits

0x51ed,	// (0x00007e27) cell_ai3_links_pane_g1_ParamLimits

0x5204,	// (0x00007e3e) cell_ai3_links_pane_t1

0x7b4a,	// (0x0000a784) set_text_pane_t1_copy1_ParamLimits

0xf19d,	// (0x00011dd7) cell_graphic_popup_pane_cp2_ParamLimits

0xf19d,	// (0x00011dd7) cell_graphic_popup_pane_cp2

0xde60,	// (0x00010a9a) cell_graphic_popup_pane_g1_cp2

0xe3fb,	// (0x00011035) cell_graphic_popup_pane_g2_cp2

0x7bcd,	// (0x0000a807) cell_graphic_popup_pane_g3_cp2

0xde68,	// (0x00010aa2) cell_graphic_popup_pane_t2_cp2

0xe40c,	// (0x00011046) grid_highlight_pane_cp3_cp2

0xea72,	// (0x000116ac) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe57f,	// (0x000111b9) main_tmo_pane_ParamLimits

0xc7c8,	// (0x0000f402) popup_tmo_big_image_note_window

0x6fb1,	// (0x00009beb) cell_ai5_widget_list_pane

0x6fb9,	// (0x00009bf3) cell_ai5_widget_lrg_icon_pane

0xdbd9,	// (0x00010813) tmo_note_info_pane_t1_ParamLimits

0xdbee,	// (0x00010828) tmo_note_info_pane_t2_ParamLimits

0xdc05,	// (0x0001083f) tmo_note_info_pane_t3_ParamLimits

0x7786,	// (0x0000a3c0) tmo_note_info_pane_t4_ParamLimits

0x7798,	// (0x0000a3d2) tmo_note_info_pane_t5_ParamLimits

0xfe97,	// (0x00012ad1) tmo_note_info_pane_t_ParamLimits

0x78b6,	// (0x0000a4f0) settings_container_pane_ParamLimits

0xde58,	// (0x00010a92) indicator_popup_pane_cp5

0xde58,	// (0x00010a92) indicator_popup_pane_cp6

0x7b73,	// (0x0000a7ad) list_set_graphic_pane_copy1_ParamLimits

0xe0ad,	// (0x00010ce7) bg_popup_window_pane_cp23

0x7be3,	// (0x0000a81d) popup_tmo_big_image_note_window_g1

0x7bec,	// (0x0000a826) popup_tmo_big_image_note_window_t1

0x7bfc,	// (0x0000a836) popup_tmo_big_image_note_window_t2

0x7c0c,	// (0x0000a846) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb0,	// (0x00012aea) popup_tmo_big_image_note_window_t

0x39d6,	// (0x00006610) cell_ai5_widget_lrg_icon_pane_g1

0x7c1c,	// (0x0000a856) cell_ai5_widget_lrg_icon_pane_t1

0x7c2a,	// (0x0000a864) cell_ai5_widget_list_row_pane_ParamLimits

0x7c2a,	// (0x0000a864) cell_ai5_widget_list_row_pane

0x7c41,	// (0x0000a87b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7c41,	// (0x0000a87b) cell_ai5_widget_list_row_pane_g1

0x7c4e,	// (0x0000a888) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7c4e,	// (0x0000a888) cell_ai5_widget_list_row_pane_t1

0x7c79,	// (0x0000a8b3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7c79,	// (0x0000a8b3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb7,	// (0x00012af1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb7,	// (0x00012af1) cell_ai5_widget_list_row_pane_t

0xe0ad,	// (0x00010ce7) main_fep_vtchi_ss_pane

0x7cc9,	// (0x0000a903) popup_fep_char_pre_window

0x7cd1,	// (0x0000a90b) popup_fep_ituss_window

0xdea0,	// (0x00010ada) popup_fep_vkbss_window

0xf47b,	// (0x000120b5) grid_vkbss_keypad_pane_ParamLimits

0xf47b,	// (0x000120b5) grid_vkbss_keypad_pane

0x7d6a,	// (0x0000a9a4) ituss_keypad_pane

0x7d84,	// (0x0000a9be) aid_vkbss_key_offset_ParamLimits

0x7d84,	// (0x0000a9be) aid_vkbss_key_offset

0xdec1,	// (0x00010afb) cell_vkbss_key_pane_ParamLimits

0xdec1,	// (0x00010afb) cell_vkbss_key_pane

0x7ddb,	// (0x0000aa15) bg_cell_vkbss_key_g1_ParamLimits

0x7ddb,	// (0x0000aa15) bg_cell_vkbss_key_g1

0xdf2b,	// (0x00010b65) cell_vkbss_key_3p_pane_ParamLimits

0xdf2b,	// (0x00010b65) cell_vkbss_key_3p_pane

0xdf61,	// (0x00010b9b) cell_vkbss_key_g1_ParamLimits

0xdf61,	// (0x00010b9b) cell_vkbss_key_g1

0xdf97,	// (0x00010bd1) cell_vkbss_key_t1_ParamLimits

0xdf97,	// (0x00010bd1) cell_vkbss_key_t1

0x7eaf,	// (0x0000aae9) cell_ituss_key_pane_ParamLimits

0x7eaf,	// (0x0000aae9) cell_ituss_key_pane

0x7ec0,	// (0x0000aafa) bg_cell_ituss_key_g1_ParamLimits

0x7ec0,	// (0x0000aafa) bg_cell_ituss_key_g1

0x7ecc,	// (0x0000ab06) cell_ituss_key_pane_g1_ParamLimits

0x7ecc,	// (0x0000ab06) cell_ituss_key_pane_g1

0x7ee0,	// (0x0000ab1a) cell_ituss_key_pane_g2_ParamLimits

0x7ee0,	// (0x0000ab1a) cell_ituss_key_pane_g2

0x0005,

0xfebe,	// (0x00012af8) cell_ituss_key_pane_g_ParamLimits

0xfebe,	// (0x00012af8) cell_ituss_key_pane_g

0x7f76,	// (0x0000abb0) cell_ituss_key_t1_ParamLimits

0x7f76,	// (0x0000abb0) cell_ituss_key_t1

0x7fb0,	// (0x0000abea) cell_ituss_key_t2_ParamLimits

0x7fb0,	// (0x0000abea) cell_ituss_key_t2

0x7fe2,	// (0x0000ac1c) cell_ituss_key_t3_ParamLimits

0x7fe2,	// (0x0000ac1c) cell_ituss_key_t3

0x8013,	// (0x0000ac4d) cell_ituss_key_t4_ParamLimits

0x8013,	// (0x0000ac4d) cell_ituss_key_t4

0x0005,

0xfecb,	// (0x00012b05) cell_ituss_key_t_ParamLimits

0xfecb,	// (0x00012b05) cell_ituss_key_t

0xdff3,	// (0x00010c2d) cell_vkbss_key_3p_pane_g1

0xdffb,	// (0x00010c35) cell_vkbss_key_3p_pane_g2

0xe003,	// (0x00010c3d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed8,	// (0x00012b12) cell_vkbss_key_3p_pane_g

0xf25f,	// (0x00011e99) bg_popup_fep_char_preview_window_cp02

0x80ac,	// (0x0000ace6) popup_fep_char_pre_window_t1

0xd8cd,	// (0x00010507) main_ai5_sk_pane

0x7812,	// (0x0000a44c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x781e,	// (0x0000a458) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x44fc,	// (0x00007136) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7833,	// (0x0000a46d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea2,	// (0x00012adc) cell_contacts_ai5_widget_pane_g_ParamLimits

0x783f,	// (0x0000a479) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe57f,	// (0x000111b9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe00b,	// (0x00010c45) main_ai5_sk_pane_g1

0xb20d,	// (0x0000de47) popup_query_code_window_g1

0xde91,	// (0x00010acb) popup_fep_vkb_icf_pane

0x7d1d,	// (0x0000a957) popup_fep_vtchi_icf_pane

0x80c3,	// (0x0000acfd) bg_icf_pane

0x80c3,	// (0x0000acfd) list_vkb_icf_pane

0x80cf,	// (0x0000ad09) bg_icf_pane_cp01

0x80e2,	// (0x0000ad1c) vtchi_icf_list_pane

0xe060,	// (0x00010c9a) list_vkb_icf_pane_t1_ParamLimits

0xe060,	// (0x00010c9a) list_vkb_icf_pane_t1

0x8167,	// (0x0000ada1) vtchi_icf_list_pane_t1_ParamLimits

0x8167,	// (0x0000ada1) vtchi_icf_list_pane_t1

0x7cd1,	// (0x0000a90b) popup_fep_ituss_window_ParamLimits

0x7d1d,	// (0x0000a957) popup_fep_vtchi_icf_pane_ParamLimits

0x7d6a,	// (0x0000a9a4) ituss_keypad_pane_ParamLimits

0x7d7a,	// (0x0000a9b4) ituss_sks_pane

0x80c3,	// (0x0000acfd) bg_icf_pane_ParamLimits

0xde76,	// (0x00010ab0) icf_edit_indi_pane_ParamLimits

0xde76,	// (0x00010ab0) icf_edit_indi_pane

0x80c3,	// (0x0000acfd) list_vkb_icf_pane_ParamLimits

0x80cf,	// (0x0000ad09) bg_icf_pane_cp01_ParamLimits

0x7cbc,	// (0x0000a8f6) icf_edit_indi_pane_cp01_ParamLimits

0x7cbc,	// (0x0000a8f6) icf_edit_indi_pane_cp01

0x80e2,	// (0x0000ad1c) vtchi_query_pane

0x6d4c,	// (0x00009986) icf_edit_indi_pane_g1_ParamLimits

0x6d4c,	// (0x00009986) icf_edit_indi_pane_g1

0xe078,	// (0x00010cb2) icf_edit_indi_pane_g2_ParamLimits

0xe078,	// (0x00010cb2) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00012b3d) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00012b3d) icf_edit_indi_pane_g

0xe08c,	// (0x00010cc6) icf_edit_indi_pane_t1

0x818b,	// (0x0000adc5) bg_input_focus_pane_cp042

0xe46f,	// (0x000110a9) vtchi_button_pane

0x8194,	// (0x0000adce) vtchi_query_pane_t1

0x81a2,	// (0x0000addc) vtchi_query_pane_t2

0x81b0,	// (0x0000adea) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x00012b2c) vtchi_query_pane_t

0xe0ad,	// (0x00010ce7) bg_button_pane_cp13

0x81be,	// (0x0000adf8) vtchi_button_pane_g1

0x81c6,	// (0x0000ae00) ituss_sks_pane_g1

0x81d1,	// (0x0000ae0b) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x00012b33) ituss_sks_pane_g

0x81d9,	// (0x0000ae13) ituss_sks_pane_t1

0x81e7,	// (0x0000ae21) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x00012b38) ituss_sks_pane_t

0x33bc,	// (0x00005ff6) indicator_nsta_pane_cp_g1

0x33c5,	// (0x00005fff) indicator_nsta_pane_cp_g2

0x33cd,	// (0x00006007) indicator_nsta_pane_cp_g3

0x33d5,	// (0x0000600f) indicator_nsta_pane_cp_g4

0x33c5,	// (0x00005fff) indicator_nsta_pane_cp_g5

0x33cd,	// (0x00006007) indicator_nsta_pane_cp_g6

0x0005,

0xfa87,	// (0x000126c1) indicator_nsta_pane_cp_g

0xd624,	// (0x0001025e) cell_graphic2_pane_t2_ParamLimits

0xd624,	// (0x0001025e) cell_graphic2_pane_t2

0x0001,

0xfd8d,	// (0x000129c7) cell_graphic2_pane_t_ParamLimits

0xfd8d,	// (0x000129c7) cell_graphic2_pane_t

0xd65b,	// (0x00010295) cell_graphic2_control_pane_t1

0x9ec7,	// (0x0000cb01) signal_pane_g3_ParamLimits

0x9ec7,	// (0x0000cb01) signal_pane_g3

0x9edb,	// (0x0000cb15) signal_pane_g4_ParamLimits

0x9edb,	// (0x0000cb15) signal_pane_g4

0x7c8b,	// (0x0000a8c5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7c8b,	// (0x0000a8c5) cell_ai5_widget_list_row_pane_t3

0x7f64,	// (0x0000ab9e) cell_ituss_key_pane_t1_ParamLimits

0x7f64,	// (0x0000ab9e) cell_ituss_key_pane_t1

0x0c9a,	// (0x000038d4) form_field_data_wide_pane_vc_t2_ParamLimits

0x0c9a,	// (0x000038d4) form_field_data_wide_pane_vc_t2

0x0cae,	// (0x000038e8) form_field_data_wide_pane_vc_t3_ParamLimits

0x0cae,	// (0x000038e8) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ce,	// (0x00012408) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ce,	// (0x00012408) form_field_data_wide_pane_vc_t

0x3066,	// (0x00005ca0) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3066,	// (0x00005ca0) form_field_slider_wide_pane_vc_t3

0x3144,	// (0x00005d7e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3144,	// (0x00005d7e) form_field_popup_wide_pane_vc_t2

0x315b,	// (0x00005d95) form_field_popup_wide_pane_vc_t3_ParamLimits

0x315b,	// (0x00005d95) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa76,	// (0x000126b0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x000126b0) form_field_popup_wide_pane_vc_t

0xd9af,	// (0x000105e9) aid_fshwr2_btn_pane_ParamLimits

0xd9c3,	// (0x000105fd) aid_fshwr2_syb_pane_ParamLimits

0xd9d7,	// (0x00010611) aid_fshwr2_txt_pane_ParamLimits

0xe57f,	// (0x000111b9) fshwr2_bg_pane_ParamLimits

0xd9e7,	// (0x00010621) fshwr2_func_candi_pane_ParamLimits

0xda07,	// (0x00010641) fshwr2_hwr_syb_pane_ParamLimits

0xda29,	// (0x00010663) fshwr2_icf_pane_ParamLimits

0x2fd2,	// (0x00005c0c) list_double_graphic_pane_vc_g4_ParamLimits

0x2fd2,	// (0x00005c0c) list_double_graphic_pane_vc_g4

0x7f00,	// (0x0000ab3a) cell_ituss_key_pane_g3_ParamLimits

0x7f00,	// (0x0000ab3a) cell_ituss_key_pane_g3

0x8044,	// (0x0000ac7e) cell_ituss_key_t5_ParamLimits

0x8044,	// (0x0000ac7e) cell_ituss_key_t5

0xdea0,	// (0x00010ada) popup_fep_vkbss_window_ParamLimits

0x6f44,	// (0x00009b7e) aid_cell_ai5_quarter

0xe08c,	// (0x00010cc6) icf_edit_indi_pane_t1_ParamLimits

0x93a4,	// (0x0000bfde) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x93a4,	// (0x0000bfde) aid_tch_indicator_popup_pane_cp2

0x93b7,	// (0x0000bff1) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x93b7,	// (0x0000bff1) aid_tch_query_popup_data_pane_cp2

0x1050,	// (0x00003c8a) aid_tch_query_popup_pane_ParamLimits

0x1050,	// (0x00003c8a) aid_tch_query_popup_pane

0x1050,	// (0x00003c8a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1050,	// (0x00003c8a) aid_tch_query_popup_data_pane_cp1

0xf47b,	// (0x000120b5) cell_fshwr2_syb_bg_pane_ParamLimits

0xdb3f,	// (0x00010779) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xdb52,	// (0x0001078c) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xde91,	// (0x00010acb) popup_fep_vkb_icf_pane_ParamLimits

0xd72b,	// (0x00010365) bg_popup_fep_char_preview_window_g10

0x707b,	// (0x00009cb5) cell_ai5_widget_pane_g11_ParamLimits

0x707b,	// (0x00009cb5) cell_ai5_widget_pane_g11

0x7087,	// (0x00009cc1) cell_ai5_widget_pane_g12_ParamLimits

0x7087,	// (0x00009cc1) cell_ai5_widget_pane_g12

0x7093,	// (0x00009ccd) cell_ai5_widget_pane_g13_ParamLimits

0x7093,	// (0x00009ccd) cell_ai5_widget_pane_g13

0x71c2,	// (0x00009dfc) cell_ai5_widget_pane_t11_ParamLimits

0x71c2,	// (0x00009dfc) cell_ai5_widget_pane_t11

0x71d4,	// (0x00009e0e) cell_ai5_widget_pane_t12_ParamLimits

0x71d4,	// (0x00009e0e) cell_ai5_widget_pane_t12

0x7f0c,	// (0x0000ab46) cell_ituss_key_pane_g4_ParamLimits

0x7f0c,	// (0x0000ab46) cell_ituss_key_pane_g4

0x7f28,	// (0x0000ab62) cell_ituss_key_pane_g5_ParamLimits

0x7f28,	// (0x0000ab62) cell_ituss_key_pane_g5

0x7f44,	// (0x0000ab7e) cell_ituss_key_pane_g6_ParamLimits

0x7f44,	// (0x0000ab7e) cell_ituss_key_pane_g6

0x09ec,	// (0x00003626) bg_icf_pane_g1

0xe014,	// (0x00010c4e) bg_icf_pane_g2

0xe01e,	// (0x00010c58) bg_icf_pane_g3

0xe026,	// (0x00010c60) bg_icf_pane_g4

0xe030,	// (0x00010c6a) bg_icf_pane_g5

0xe03a,	// (0x00010c74) bg_icf_pane_g6

0xe044,	// (0x00010c7e) bg_icf_pane_g7

0xe04c,	// (0x00010c86) bg_icf_pane_g8

0xe056,	// (0x00010c90) bg_icf_pane_g9

0x0008,

0xfedf,	// (0x00012b19) bg_icf_pane_g

0x7d36,	// (0x0000a970) popup_hyb_candi_window_ParamLimits

0x7d36,	// (0x0000a970) popup_hyb_candi_window

0x0b84,	// (0x000037be) bg_popup_sub_pane_cp01_ParamLimits

0x0b84,	// (0x000037be) bg_popup_sub_pane_cp01

0x8222,	// (0x0000ae5c) entry_hyb_candi_pane_ParamLimits

0x8222,	// (0x0000ae5c) entry_hyb_candi_pane

0x8231,	// (0x0000ae6b) grid_hyb_candi_pane_ParamLimits

0x8231,	// (0x0000ae6b) grid_hyb_candi_pane

0x8246,	// (0x0000ae80) grid_hyb_phrase_pane_ParamLimits

0x8246,	// (0x0000ae80) grid_hyb_phrase_pane

0x8255,	// (0x0000ae8f) cell_hyb_candi_pane_ParamLimits

0x8255,	// (0x0000ae8f) cell_hyb_candi_pane

0x8278,	// (0x0000aeb2) cell_hyb_candi_scroll_pane

0xec14,	// (0x0001184e) cell_hyb_candi_pane_g1

0x8281,	// (0x0000aebb) cell_hyb_candi_pane_t1

0x828f,	// (0x0000aec9) cell_hyb_phrase_pane

0xec14,	// (0x0001184e) cell_hyb_phrase_pane_g1

0x8298,	// (0x0000aed2) cell_hyb_phrase_pane_t1

0x82a6,	// (0x0000aee0) entry_hyb_candi_pane_t1

0xf25f,	// (0x00011e99) input_focus_pane_cp06

0x82b4,	// (0x0000aeee) cell_hyb_candi_scroll_pane_g1

0x82bc,	// (0x0000aef6) cell_hyb_candi_scroll_pane_g1_aid

0x82c4,	// (0x0000aefe) cell_hyb_candi_scroll_pane_g2

0x82cc,	// (0x0000af06) cell_hyb_candi_scroll_pane_g2_aid

0x82d4,	// (0x0000af0e) cell_hyb_candi_scroll_pane_g3

0x82dc,	// (0x0000af16) cell_hyb_candi_scroll_pane_g4

0xd861,	// (0x0001049b) ai5_page_g1

0x8056,	// (0x0000ac90) cell_ituss_key_t6_ParamLimits

0x8056,	// (0x0000ac90) cell_ituss_key_t6

0xdead,	// (0x00010ae7) icf_edit_indi_pane_cp02_ParamLimits

0xdead,	// (0x00010ae7) icf_edit_indi_pane_cp02

0x7d5d,	// (0x0000a997) icf_edit_indi_pane_cp03_ParamLimits

0x7d5d,	// (0x0000a997) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

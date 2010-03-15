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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f7d2 };

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
0xbd0c,	// (0x0002b4de) Screen

0xbd18,	// (0x0002b4ea) application_window_ParamLimits

0xbd18,	// (0x0002b4ea) application_window

0x322b,	// (0x000229fd) screen_g1

0xbd50,	// (0x0002b522) area_bottom_pane_ParamLimits

0xbd50,	// (0x0002b522) area_bottom_pane

0x1187,	// (0x00020959) area_top_pane_ParamLimits

0x1187,	// (0x00020959) area_top_pane

0x121b,	// (0x000209ed) main_pane_ParamLimits

0x121b,	// (0x000209ed) main_pane

0x3235,	// (0x00022a07) misc_graphics

0xd57a,	// (0x0002cd4c) battery_pane_ParamLimits

0xd57a,	// (0x0002cd4c) battery_pane

0x58a0,	// (0x00025072) bg_status_flat_pane_g8

0x58a8,	// (0x0002507a) bg_status_flat_pane_g9

0x4c9e,	// (0x00024470) context_pane_ParamLimits

0x4c9e,	// (0x00024470) context_pane

0xd6e5,	// (0x0002ceb7) navi_pane_ParamLimits

0xd6e5,	// (0x0002ceb7) navi_pane

0xd75d,	// (0x0002cf2f) signal_pane_ParamLimits

0xd75d,	// (0x0002cf2f) signal_pane

0x0008,

0xf873,	// (0x0002f045) bg_status_flat_pane_g

0xd7ed,	// (0x0002cfbf) status_pane_g1_ParamLimits

0xd7ed,	// (0x0002cfbf) status_pane_g1

0xd803,	// (0x0002cfd5) status_pane_g2_ParamLimits

0xd803,	// (0x0002cfd5) status_pane_g2

0x4eb7,	// (0x00024689) status_pane_g3_ParamLimits

0x4eb7,	// (0x00024689) status_pane_g3

0x0004,

0xf7a6,	// (0x0002ef78) status_pane_g_ParamLimits

0xf7a6,	// (0x0002ef78) status_pane_g

0xd80f,	// (0x0002cfe1) title_pane_ParamLimits

0xd80f,	// (0x0002cfe1) title_pane

0xd872,	// (0x0002d044) uni_indicator_pane_ParamLimits

0xd872,	// (0x0002d044) uni_indicator_pane

0x4b04,	// (0x000242d6) bg_list_pane_ParamLimits

0x4b04,	// (0x000242d6) bg_list_pane

0xd4e1,	// (0x0002ccb3) find_pane

0xd4e9,	// (0x0002ccbb) listscroll_app_pane_ParamLimits

0xd4e9,	// (0x0002ccbb) listscroll_app_pane

0x4b30,	// (0x00024302) listscroll_form_pane

0xc1c1,	// (0x0002b993) listscroll_gen_pane_ParamLimits

0xc1c1,	// (0x0002b993) listscroll_gen_pane

0x4b30,	// (0x00024302) listscroll_set_pane

0x6437,	// (0x00025c09) main_idle_act_pane

0x480a,	// (0x00023fdc) main_idle_trad_pane

0x480a,	// (0x00023fdc) main_list_empty_pane

0x4b4a,	// (0x0002431c) main_midp_pane

0x4b56,	// (0x00024328) main_pane_g1_ParamLimits

0x4b56,	// (0x00024328) main_pane_g1

0xc1d5,	// (0x0002b9a7) popup_ai_message_window_ParamLimits

0xc1d5,	// (0x0002b9a7) popup_ai_message_window

0xc266,	// (0x0002ba38) popup_fep_china_uni_window_ParamLimits

0xc266,	// (0x0002ba38) popup_fep_china_uni_window

0x1bde,	// (0x000213b0) popup_fep_japan_candidate_window_ParamLimits

0x1bde,	// (0x000213b0) popup_fep_japan_candidate_window

0x1bfe,	// (0x000213d0) popup_fep_japan_predictive_window_ParamLimits

0x1bfe,	// (0x000213d0) popup_fep_japan_predictive_window

0xc2c2,	// (0x0002ba94) popup_find_window

0xc2df,	// (0x0002bab1) popup_grid_graphic_window_ParamLimits

0xc2df,	// (0x0002bab1) popup_grid_graphic_window

0x1c63,	// (0x00021435) popup_large_graphic_colour_window

0xc377,	// (0x0002bb49) popup_menu_window_ParamLimits

0xc377,	// (0x0002bb49) popup_menu_window

0xc549,	// (0x0002bd1b) popup_note_image_window

0xc50f,	// (0x0002bce1) popup_note_wait_window_ParamLimits

0xc50f,	// (0x0002bce1) popup_note_wait_window

0xc561,	// (0x0002bd33) popup_note_window_ParamLimits

0xc561,	// (0x0002bd33) popup_note_window

0xc607,	// (0x0002bdd9) popup_query_code_window_ParamLimits

0xc607,	// (0x0002bdd9) popup_query_code_window

0x1eab,	// (0x0002167d) popup_query_data_code_window_ParamLimits

0x1eab,	// (0x0002167d) popup_query_data_code_window

0xc641,	// (0x0002be13) popup_query_data_window_ParamLimits

0xc641,	// (0x0002be13) popup_query_data_window

0xc6c3,	// (0x0002be95) popup_query_sat_info_window_ParamLimits

0xc6c3,	// (0x0002be95) popup_query_sat_info_window

0xc75a,	// (0x0002bf2c) popup_snote_single_graphic_window_ParamLimits

0xc75a,	// (0x0002bf2c) popup_snote_single_graphic_window

0xc75a,	// (0x0002bf2c) popup_snote_single_text_window_ParamLimits

0xc75a,	// (0x0002bf2c) popup_snote_single_text_window

0x1f32,	// (0x00021704) popup_sub_window_general

0x2062,	// (0x00021834) popup_window_general_ParamLimits

0x2062,	// (0x00021834) popup_window_general

0x4b64,	// (0x00024336) power_save_pane

0xc050,	// (0x0002b822) control_pane_g1_ParamLimits

0xc050,	// (0x0002b822) control_pane_g1

0xc079,	// (0x0002b84b) control_pane_g2_ParamLimits

0xc079,	// (0x0002b84b) control_pane_g2

0x4ac7,	// (0x00024299) control_pane_g3_ParamLimits

0x4ac7,	// (0x00024299) control_pane_g3

0x0007,

0xf78e,	// (0x0002ef60) control_pane_g_ParamLimits

0xf78e,	// (0x0002ef60) control_pane_g

0xc0ba,	// (0x0002b88c) control_pane_t1_ParamLimits

0xc0ba,	// (0x0002b88c) control_pane_t1

0xc118,	// (0x0002b8ea) control_pane_t2_ParamLimits

0xc118,	// (0x0002b8ea) control_pane_t2

0x0002,

0xf79f,	// (0x0002ef71) control_pane_t_ParamLimits

0xf79f,	// (0x0002ef71) control_pane_t

0x49e8,	// (0x000241ba) navi_navi_volume_pane_cp1

0x49f1,	// (0x000241c3) status_small_icon_pane

0x49f9,	// (0x000241cb) status_small_pane_g1_ParamLimits

0x49f9,	// (0x000241cb) status_small_pane_g1

0x4a2d,	// (0x000241ff) status_small_pane_g2_ParamLimits

0x4a2d,	// (0x000241ff) status_small_pane_g2

0x4a39,	// (0x0002420b) status_small_pane_g3_ParamLimits

0x4a39,	// (0x0002420b) status_small_pane_g3

0x4a45,	// (0x00024217) status_small_pane_g4_ParamLimits

0x4a45,	// (0x00024217) status_small_pane_g4

0x4a51,	// (0x00024223) status_small_pane_g5_ParamLimits

0x4a51,	// (0x00024223) status_small_pane_g5

0x4a60,	// (0x00024232) status_small_pane_g6_ParamLimits

0x4a60,	// (0x00024232) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002ef4f) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002ef4f) status_small_pane_g

0x4a90,	// (0x00024262) status_small_pane_t1

0x4ab3,	// (0x00024285) status_small_wait_pane_ParamLimits

0x4ab3,	// (0x00024285) status_small_wait_pane

0xd2b6,	// (0x0002ca88) aid_levels_signal_ParamLimits

0xd2b6,	// (0x0002ca88) aid_levels_signal

0xd2ce,	// (0x0002caa0) signal_pane_g1_ParamLimits

0xd2ce,	// (0x0002caa0) signal_pane_g1

0xd2e9,	// (0x0002cabb) signal_pane_g2_ParamLimits

0xd2e9,	// (0x0002cabb) signal_pane_g2

0x0003,

0xf70e,	// (0x0002eee0) signal_pane_g_ParamLimits

0xf70e,	// (0x0002eee0) signal_pane_g

0x42e9,	// (0x00023abb) context_pane_g1

0xbec9,	// (0x0002b69b) title_pane_g1

0xbf00,	// (0x0002b6d2) title_pane_t1

0x32dd,	// (0x00022aaf) title_pane_t2

0x3303,	// (0x00022ad5) title_pane_t3

0x0002,

0xf55d,	// (0x0002ed2f) title_pane_t

0xd89a,	// (0x0002d06c) aid_levels_battery_ParamLimits

0xd89a,	// (0x0002d06c) aid_levels_battery

0xd8b6,	// (0x0002d088) battery_pane_g1_ParamLimits

0xd8b6,	// (0x0002d088) battery_pane_g1

0xd8d3,	// (0x0002d0a5) battery_pane_g2_ParamLimits

0xd8d3,	// (0x0002d0a5) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002ef83) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002ef83) battery_pane_g

0xdb7f,	// (0x0002d351) uni_indicator_pane_g1

0xdb94,	// (0x0002d366) uni_indicator_pane_g2

0x6201,	// (0x000259d3) uni_indicator_pane_g3

0x0005,

0xf91b,	// (0x0002f0ed) uni_indicator_pane_g

0x467c,	// (0x00023e4e) navi_icon_pane_ParamLimits

0x467c,	// (0x00023e4e) navi_icon_pane

0x45c5,	// (0x00023d97) navi_midp_pane

0x4698,	// (0x00023e6a) navi_navi_pane

0x46a2,	// (0x00023e74) navi_text_pane_ParamLimits

0x46a2,	// (0x00023e74) navi_text_pane

0x322b,	// (0x000229fd) status_small_wait_pane_g1

0x3732,	// (0x00022f04) status_small_wait_pane_g2

0x0001,

0xf916,	// (0x0002f0e8) status_small_wait_pane_g

0xdae6,	// (0x0002d2b8) navi_navi_icon_text_pane

0xdaee,	// (0x0002d2c0) navi_navi_pane_g1_ParamLimits

0xdaee,	// (0x0002d2c0) navi_navi_pane_g1

0xdb00,	// (0x0002d2d2) navi_navi_pane_g2_ParamLimits

0xdb00,	// (0x0002d2d2) navi_navi_pane_g2

0x0001,

0xf8e4,	// (0x0002f0b6) navi_navi_pane_g_ParamLimits

0xf8e4,	// (0x0002f0b6) navi_navi_pane_g

0x5f27,	// (0x000256f9) navi_navi_tabs_pane

0xdb12,	// (0x0002d2e4) navi_navi_text_pane

0xdae6,	// (0x0002d2b8) navi_navi_volume_pane

0x5ed7,	// (0x000256a9) navi_text_pane_t1

0x5ecb,	// (0x0002569d) navi_icon_pane_g1

0x5e1e,	// (0x000255f0) navi_navi_text_pane_t1

0xca23,	// (0x0002c1f5) navi_navi_volume_pane_g1

0xca2b,	// (0x0002c1fd) volume_small_pane

0xda2e,	// (0x0002d200) navi_navi_icon_text_pane_g1

0xda36,	// (0x0002d208) navi_navi_icon_text_pane_t1

0x4698,	// (0x00023e6a) navi_tabs_2_long_pane

0x4698,	// (0x00023e6a) navi_tabs_2_pane

0x4698,	// (0x00023e6a) navi_tabs_3_long_pane

0x4698,	// (0x00023e6a) navi_tabs_3_pane

0x4698,	// (0x00023e6a) navi_tabs_4_pane

0xca03,	// (0x0002c1d5) tabs_2_active_pane_ParamLimits

0xca03,	// (0x0002c1d5) tabs_2_active_pane

0xca13,	// (0x0002c1e5) tabs_2_passive_pane_ParamLimits

0xca13,	// (0x0002c1e5) tabs_2_passive_pane

0xc9d1,	// (0x0002c1a3) tabs_3_active_pane_ParamLimits

0xc9d1,	// (0x0002c1a3) tabs_3_active_pane

0xc9e1,	// (0x0002c1b3) tabs_3_passive_pane_ParamLimits

0xc9e1,	// (0x0002c1b3) tabs_3_passive_pane

0xc9f2,	// (0x0002c1c4) tabs_3_passive_pane_cp_ParamLimits

0xc9f2,	// (0x0002c1c4) tabs_3_passive_pane_cp

0xc98d,	// (0x0002c15f) tabs_4_active_pane_ParamLimits

0xc98d,	// (0x0002c15f) tabs_4_active_pane

0xc99e,	// (0x0002c170) tabs_4_passive_pane_ParamLimits

0xc99e,	// (0x0002c170) tabs_4_passive_pane

0xc9af,	// (0x0002c181) tabs_4_passive_pane_cp_ParamLimits

0xc9af,	// (0x0002c181) tabs_4_passive_pane_cp

0xc9c0,	// (0x0002c192) tabs_4_passive_pane_cp2_ParamLimits

0xc9c0,	// (0x0002c192) tabs_4_passive_pane_cp2

0xc96d,	// (0x0002c13f) tabs_2_long_active_pane_ParamLimits

0xc96d,	// (0x0002c13f) tabs_2_long_active_pane

0xc97d,	// (0x0002c14f) tabs_2_long_passive_pane_ParamLimits

0xc97d,	// (0x0002c14f) tabs_2_long_passive_pane

0xc93a,	// (0x0002c10c) tabs_3_long_active_pane_ParamLimits

0xc93a,	// (0x0002c10c) tabs_3_long_active_pane

0xc94b,	// (0x0002c11d) tabs_3_long_passive_pane_ParamLimits

0xc94b,	// (0x0002c11d) tabs_3_long_passive_pane

0xc95c,	// (0x0002c12e) tabs_3_long_passive_pane_cp_ParamLimits

0xc95c,	// (0x0002c12e) tabs_3_long_passive_pane_cp

0x21af,	// (0x00021981) volume_small_pane_g1

0xc8e9,	// (0x0002c0bb) volume_small_pane_g2

0xc8f2,	// (0x0002c0c4) volume_small_pane_g3

0xc8fb,	// (0x0002c0cd) volume_small_pane_g4

0xc904,	// (0x0002c0d6) volume_small_pane_g5

0xc90d,	// (0x0002c0df) volume_small_pane_g6

0xc916,	// (0x0002c0e8) volume_small_pane_g7

0xc91f,	// (0x0002c0f1) volume_small_pane_g8

0xc928,	// (0x0002c0fa) volume_small_pane_g9

0xc931,	// (0x0002c103) volume_small_pane_g10

0x0009,

0xf8b0,	// (0x0002f082) volume_small_pane_g

0x3590,	// (0x00022d62) bg_active_tab_pane_cp2_ParamLimits

0x3590,	// (0x00022d62) bg_active_tab_pane_cp2

0xbf8c,	// (0x0002b75e) tabs_3_active_pane_g1

0xbf94,	// (0x0002b766) tabs_3_active_pane_t1

0x3590,	// (0x00022d62) bg_passive_tab_pane_cp2_ParamLimits

0x3590,	// (0x00022d62) bg_passive_tab_pane_cp2

0xbf8c,	// (0x0002b75e) tabs_3_passive_pane_g1

0xbf94,	// (0x0002b766) tabs_3_passive_pane_t1

0x3590,	// (0x00022d62) bg_active_tab_pane_cp3_ParamLimits

0x3590,	// (0x00022d62) bg_active_tab_pane_cp3

0xbfa6,	// (0x0002b778) tabs_4_active_pane_g1

0xbfae,	// (0x0002b780) tabs_4_active_pane_t1

0x3590,	// (0x00022d62) bg_passive_tab_pane_cp3_ParamLimits

0x3590,	// (0x00022d62) bg_passive_tab_pane_cp3

0xbfa6,	// (0x0002b778) tabs_4_1_passive_pane_g1

0xbfae,	// (0x0002b780) tabs_4_1_passive_pane_t1

0x4b4a,	// (0x0002431c) list_highlight_pane_cp2

0xdc45,	// (0x0002d417) list_set_pane_ParamLimits

0xdc45,	// (0x0002d417) list_set_pane

0xdcdf,	// (0x0002d4b1) main_pane_set_t1_ParamLimits

0xdcdf,	// (0x0002d4b1) main_pane_set_t1

0xdcff,	// (0x0002d4d1) main_pane_set_t2_ParamLimits

0xdcff,	// (0x0002d4d1) main_pane_set_t2

0xdd13,	// (0x0002d4e5) main_pane_set_t3_ParamLimits

0xdd13,	// (0x0002d4e5) main_pane_set_t3

0xdd25,	// (0x0002d4f7) main_pane_set_t4_ParamLimits

0xdd25,	// (0x0002d4f7) main_pane_set_t4

0x0003,

0xf980,	// (0x0002f152) main_pane_set_t_ParamLimits

0xf980,	// (0x0002f152) main_pane_set_t

0xdd37,	// (0x0002d509) setting_code_pane

0xdd41,	// (0x0002d513) setting_slider_graphic_pane

0xdd41,	// (0x0002d513) setting_slider_pane

0xdd41,	// (0x0002d513) setting_text_pane

0xdd41,	// (0x0002d513) setting_volume_pane

0x1460,	// (0x00020c32) volume_set_pane

0x3315,	// (0x00022ae7) bg_set_opt_pane_cp

0x1468,	// (0x00020c3a) setting_slider_pane_t1

0x1481,	// (0x00020c53) setting_slider_pane_t2

0x149b,	// (0x00020c6d) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002ed36) setting_slider_pane_t

0x14b3,	// (0x00020c85) slider_set_pane

0x3235,	// (0x00022a07) bg_set_opt_pane_cp2

0x3357,	// (0x00022b29) setting_slider_graphic_pane_g1

0x14c9,	// (0x00020c9b) setting_slider_graphic_pane_t1

0x14d9,	// (0x00020cab) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002ed3d) setting_slider_graphic_pane_t

0x14e9,	// (0x00020cbb) slider_set_pane_cp

0x3235,	// (0x00022a07) input_focus_pane_cp1

0x641e,	// (0x00025bf0) list_set_text_pane

0x322b,	// (0x000229fd) setting_text_pane_g1

0x3235,	// (0x00022a07) input_focus_pane_cp2

0x322b,	// (0x000229fd) setting_code_pane_g1

0x3360,	// (0x00022b32) setting_code_pane_t1

0xf539,	// (0x0002ed0b) set_text_pane_t1_ParamLimits

0xf539,	// (0x0002ed0b) set_text_pane_t1

0x3bdc,	// (0x000233ae) set_opt_bg_pane_g1

0x3be4,	// (0x000233b6) set_opt_bg_pane_g2

0x63f8,	// (0x00025bca) set_opt_bg_pane_g3

0x3bf4,	// (0x000233c6) set_opt_bg_pane_g4

0x3bfc,	// (0x000233ce) set_opt_bg_pane_g5

0x3c04,	// (0x000233d6) set_opt_bg_pane_g6

0x6402,	// (0x00025bd4) set_opt_bg_pane_g7

0x640a,	// (0x00025bdc) set_opt_bg_pane_g8

0x6414,	// (0x00025be6) set_opt_bg_pane_g9

0x0008,

0xf96d,	// (0x0002f13f) set_opt_bg_pane_g

0x63eb,	// (0x00025bbd) slider_set_pane_g1

0x2377,	// (0x00021b49) slider_set_pane_g2

0x0006,

0xf95e,	// (0x0002f130) slider_set_pane_g

0x2313,	// (0x00021ae5) volume_set_pane_g1

0x231b,	// (0x00021aed) volume_set_pane_g2

0x2323,	// (0x00021af5) volume_set_pane_g3

0x232b,	// (0x00021afd) volume_set_pane_g4

0x2333,	// (0x00021b05) volume_set_pane_g5

0x233b,	// (0x00021b0d) volume_set_pane_g6

0x2343,	// (0x00021b15) volume_set_pane_g7

0x234b,	// (0x00021b1d) volume_set_pane_g8

0x2353,	// (0x00021b25) volume_set_pane_g9

0x235b,	// (0x00021b2d) volume_set_pane_g10

0x0009,

0xf936,	// (0x0002f108) volume_set_pane_g

0xbfc0,	// (0x0002b792) indicator_pane_ParamLimits

0xbfc0,	// (0x0002b792) indicator_pane

0xbfe8,	// (0x0002b7ba) main_idle_pane_g2_ParamLimits

0xbfe8,	// (0x0002b7ba) main_idle_pane_g2

0xc020,	// (0x0002b7f2) main_pane_idle_g1_ParamLimits

0xc020,	// (0x0002b7f2) main_pane_idle_g1

0x33af,	// (0x00022b81) popup_clock_digital_analogue_window_ParamLimits

0x33af,	// (0x00022b81) popup_clock_digital_analogue_window

0xcf6e,	// (0x0002c740) soft_indicator_pane_ParamLimits

0xcf6e,	// (0x0002c740) soft_indicator_pane

0xcf88,	// (0x0002c75a) wallpaper_pane_ParamLimits

0xcf88,	// (0x0002c75a) wallpaper_pane

0x322b,	// (0x000229fd) wallpaper_pane_g1

0xcf9a,	// (0x0002c76c) indicator_pane_g1_ParamLimits

0xcf9a,	// (0x0002c76c) indicator_pane_g1

0x683a,	// (0x0002600c) navi_navi_icon_text_pane_srt_g1

0x3401,	// (0x00022bd3) soft_indicator_pane_t1

0x341b,	// (0x00022bed) aid_ps_area_pane

0xcfb0,	// (0x0002c782) aid_ps_clock_pane

0x343a,	// (0x00022c0c) aid_ps_indicator_pane

0x3446,	// (0x00022c18) indicator_ps_pane_ParamLimits

0x3446,	// (0x00022c18) indicator_ps_pane

0x3455,	// (0x00022c27) power_save_pane_g1_ParamLimits

0x3455,	// (0x00022c27) power_save_pane_g1

0x3461,	// (0x00022c33) power_save_pane_g2_ParamLimits

0x3461,	// (0x00022c33) power_save_pane_g2

0x107b,	// (0x0002084d) aid_navinavi_width_pane

0x341b,	// (0x00022bed) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002ed42) power_save_pane_g_ParamLimits

0xf570,	// (0x0002ed42) power_save_pane_g

0x346f,	// (0x00022c41) power_save_pane_t1_ParamLimits

0x346f,	// (0x00022c41) power_save_pane_t1

0xcfb0,	// (0x0002c782) aid_ps_clock_pane_ParamLimits

0x343a,	// (0x00022c0c) aid_ps_indicator_pane_ParamLimits

0x3481,	// (0x00022c53) power_save_pane_t4_ParamLimits

0x3481,	// (0x00022c53) power_save_pane_t4

0x0001,

0xf575,	// (0x0002ed47) power_save_pane_t_ParamLimits

0xf575,	// (0x0002ed47) power_save_pane_t

0x34ab,	// (0x00022c7d) power_save_t3_ParamLimits

0x34ab,	// (0x00022c7d) power_save_t3

0x3496,	// (0x00022c68) power_save_t2_ParamLimits

0x3496,	// (0x00022c68) power_save_t2

0x34c0,	// (0x00022c92) indicator_ps_pane_g1

0xcfbe,	// (0x0002c790) ai_gene_pane_ParamLimits

0xcfbe,	// (0x0002c790) ai_gene_pane

0xcfd5,	// (0x0002c7a7) ai_links_pane_ParamLimits

0xcfd5,	// (0x0002c7a7) ai_links_pane

0xcfed,	// (0x0002c7bf) indicator_pane_cp1_ParamLimits

0xcfed,	// (0x0002c7bf) indicator_pane_cp1

0xcffc,	// (0x0002c7ce) main_pane_idle_g1_cp_ParamLimits

0xcffc,	// (0x0002c7ce) main_pane_idle_g1_cp

0x34f9,	// (0x00022ccb) popup_ai_links_title_window

0xd014,	// (0x0002c7e6) soft_indicator_pane_cp1_ParamLimits

0xd014,	// (0x0002c7e6) soft_indicator_pane_cp1

0x61c4,	// (0x00025996) ai_links_pane_g1

0x61cd,	// (0x0002599f) grid_ai_links_pane

0xdb76,	// (0x0002d348) ai_gene_pane_1

0x61b2,	// (0x00025984) ai_gene_pane_2

0x61bb,	// (0x0002598d) list_highlight_pane_cp4

0xdb52,	// (0x0002d324) cell_ai_link_pane_ParamLimits

0xdb52,	// (0x0002d324) cell_ai_link_pane

0x6183,	// (0x00025955) cell_ai_link_pane_g1

0x3732,	// (0x00022f04) cell_ai_link_pane_g2

0x0001,

0xf911,	// (0x0002f0e3) cell_ai_link_pane_g

0x3235,	// (0x00022a07) grid_highlight_cp2

0x3235,	// (0x00022a07) bg_popup_sub_pane_cp1

0x351c,	// (0x00022cee) popup_ai_links_title_window_t1

0x60d1,	// (0x000258a3) ai_gene_pane_1_g1_ParamLimits

0x60d1,	// (0x000258a3) ai_gene_pane_1_g1

0x60dd,	// (0x000258af) ai_gene_pane_1_g2_ParamLimits

0x60dd,	// (0x000258af) ai_gene_pane_1_g2

0x0001,

0xf907,	// (0x0002f0d9) ai_gene_pane_1_g_ParamLimits

0xf907,	// (0x0002f0d9) ai_gene_pane_1_g

0x60ea,	// (0x000258bc) ai_gene_pane_1_t1_ParamLimits

0x60ea,	// (0x000258bc) ai_gene_pane_1_t1

0x611e,	// (0x000258f0) grid_ai_soft_ind_pane

0x60bc,	// (0x0002588e) ai_gene_pane_2_t1_ParamLimits

0x60bc,	// (0x0002588e) ai_gene_pane_2_t1

0xd028,	// (0x0002c7fa) main_pane_empty_t1_ParamLimits

0xd028,	// (0x0002c7fa) main_pane_empty_t1

0xd040,	// (0x0002c812) main_pane_empty_t2_ParamLimits

0xd040,	// (0x0002c812) main_pane_empty_t2

0xd055,	// (0x0002c827) main_pane_empty_t3_ParamLimits

0xd055,	// (0x0002c827) main_pane_empty_t3

0xd067,	// (0x0002c839) main_pane_empty_t4_ParamLimits

0xd067,	// (0x0002c839) main_pane_empty_t4

0xd079,	// (0x0002c84b) main_pane_empty_t5_ParamLimits

0xd079,	// (0x0002c84b) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002ed4c) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002ed4c) main_pane_empty_t

0x3c2d,	// (0x000233ff) bg_popup_window_pane_ParamLimits

0x3c2d,	// (0x000233ff) bg_popup_window_pane

0x5e2c,	// (0x000255fe) find_popup_pane_cp2_ParamLimits

0x5e2c,	// (0x000255fe) find_popup_pane_cp2

0x5e38,	// (0x0002560a) heading_pane_ParamLimits

0x5e38,	// (0x0002560a) heading_pane

0x3235,	// (0x00022a07) bg_popup_sub_pane

0xda53,	// (0x0002d225) bg_popup_window_pane_g1_ParamLimits

0xda53,	// (0x0002d225) bg_popup_window_pane_g1

0xda62,	// (0x0002d234) bg_popup_window_pane_g2_ParamLimits

0xda62,	// (0x0002d234) bg_popup_window_pane_g2

0xda6e,	// (0x0002d240) bg_popup_window_pane_g3_ParamLimits

0xda6e,	// (0x0002d240) bg_popup_window_pane_g3

0xda7a,	// (0x0002d24c) bg_popup_window_pane_g4_ParamLimits

0xda7a,	// (0x0002d24c) bg_popup_window_pane_g4

0xda89,	// (0x0002d25b) bg_popup_window_pane_g5_ParamLimits

0xda89,	// (0x0002d25b) bg_popup_window_pane_g5

0xda99,	// (0x0002d26b) bg_popup_window_pane_g6_ParamLimits

0xda99,	// (0x0002d26b) bg_popup_window_pane_g6

0xdaa5,	// (0x0002d277) bg_popup_window_pane_g7_ParamLimits

0xdaa5,	// (0x0002d277) bg_popup_window_pane_g7

0xdab4,	// (0x0002d286) bg_popup_window_pane_g8_ParamLimits

0xdab4,	// (0x0002d286) bg_popup_window_pane_g8

0xdac3,	// (0x0002d295) bg_popup_window_pane_g9_ParamLimits

0xdac3,	// (0x0002d295) bg_popup_window_pane_g9

0x5e12,	// (0x000255e4) bg_popup_window_pane_g10_ParamLimits

0x5e12,	// (0x000255e4) bg_popup_window_pane_g10

0x0009,

0xf8cf,	// (0x0002f0a1) bg_popup_window_pane_g_ParamLimits

0xf8cf,	// (0x0002f0a1) bg_popup_window_pane_g

0x5d3b,	// (0x0002550d) bg_popup_heading_pane_ParamLimits

0x5d3b,	// (0x0002550d) bg_popup_heading_pane

0x23bd,	// (0x00021b8f) tabs_4_passive_pane_cp_srt_ParamLimits

0x23bd,	// (0x00021b8f) tabs_4_passive_pane_cp_srt

0x23cf,	// (0x00021ba1) tabs_4_passive_pane_srt_ParamLimits

0x5d4f,	// (0x00025521) heading_pane_g2

0x23cf,	// (0x00021ba1) tabs_4_passive_pane_srt

0x50b6,	// (0x00024888) bg_passive_tab_pane_cp3_srt_ParamLimits

0x50b6,	// (0x00024888) bg_passive_tab_pane_cp3_srt

0x5d57,	// (0x00025529) heading_pane_t1_ParamLimits

0x5d57,	// (0x00025529) heading_pane_t1

0x5d6e,	// (0x00025540) heading_pane_t2_ParamLimits

0x5d6e,	// (0x00025540) heading_pane_t2

0x0001,

0xf8ca,	// (0x0002f09c) heading_pane_t_ParamLimits

0xf8ca,	// (0x0002f09c) heading_pane_t

0x5868,	// (0x0002503a) bg_popup_heading_pane_g1

0x5917,	// (0x000250e9) bg_popup_heading_pane_g2

0x5921,	// (0x000250f3) bg_popup_heading_pane_g3

0x592b,	// (0x000250fd) bg_popup_heading_pane_g4

0x5935,	// (0x00025107) bg_popup_heading_pane_g5

0x593f,	// (0x00025111) bg_popup_heading_pane_g6

0x5947,	// (0x00025119) bg_popup_heading_pane_g7

0x594f,	// (0x00025121) bg_popup_heading_pane_g8

0x5959,	// (0x0002512b) bg_popup_heading_pane_g9

0x0008,

0xf886,	// (0x0002f058) bg_popup_heading_pane_g

0x5042,	// (0x00024814) bg_popup_sub_pane_g1

0x504a,	// (0x0002481c) bg_popup_sub_pane_g2

0x5052,	// (0x00024824) bg_popup_sub_pane_g3

0x505a,	// (0x0002482c) bg_popup_sub_pane_g4

0x5062,	// (0x00024834) bg_popup_sub_pane_g5

0x506a,	// (0x0002483c) bg_popup_sub_pane_g6

0x5072,	// (0x00024844) bg_popup_sub_pane_g7

0x507a,	// (0x0002484c) bg_popup_sub_pane_g8

0x5082,	// (0x00024854) bg_popup_sub_pane_g9

0x0008,

0xf860,	// (0x0002f032) bg_popup_sub_pane_g

0x3590,	// (0x00022d62) bg_popup_window_pane_cp5_ParamLimits

0x3590,	// (0x00022d62) bg_popup_window_pane_cp5

0x35ac,	// (0x00022d7e) popup_note_window_g1_ParamLimits

0x35ac,	// (0x00022d7e) popup_note_window_g1

0x35b8,	// (0x00022d8a) popup_note_window_t1_ParamLimits

0x35b8,	// (0x00022d8a) popup_note_window_t1

0x35ce,	// (0x00022da0) popup_note_window_t2_ParamLimits

0x35ce,	// (0x00022da0) popup_note_window_t2

0x35e4,	// (0x00022db6) popup_note_window_t3_ParamLimits

0x35e4,	// (0x00022db6) popup_note_window_t3

0x35fa,	// (0x00022dcc) popup_note_window_t4_ParamLimits

0x35fa,	// (0x00022dcc) popup_note_window_t4

0x3622,	// (0x00022df4) popup_note_window_t5_ParamLimits

0x3622,	// (0x00022df4) popup_note_window_t5

0x0004,

0xf585,	// (0x0002ed57) popup_note_window_t_ParamLimits

0xf585,	// (0x0002ed57) popup_note_window_t

0x3646,	// (0x00022e18) bg_popup_window_pane_cp6_ParamLimits

0x3646,	// (0x00022e18) bg_popup_window_pane_cp6

0x57e4,	// (0x00024fb6) popup_note_image_window_g1_ParamLimits

0x57e4,	// (0x00024fb6) popup_note_image_window_g1

0x57f0,	// (0x00024fc2) popup_note_image_window_g2_ParamLimits

0x57f0,	// (0x00024fc2) popup_note_image_window_g2

0x0001,

0xf854,	// (0x0002f026) popup_note_image_window_g_ParamLimits

0xf854,	// (0x0002f026) popup_note_image_window_g

0x5809,	// (0x00024fdb) popup_note_image_window_t1_ParamLimits

0x5809,	// (0x00024fdb) popup_note_image_window_t1

0x5822,	// (0x00024ff4) popup_note_image_window_t2_ParamLimits

0x5822,	// (0x00024ff4) popup_note_image_window_t2

0x583b,	// (0x0002500d) popup_note_image_window_t3_ParamLimits

0x583b,	// (0x0002500d) popup_note_image_window_t3

0x0002,

0xf859,	// (0x0002f02b) popup_note_image_window_t_ParamLimits

0xf859,	// (0x0002f02b) popup_note_image_window_t

0x56a5,	// (0x00024e77) bg_popup_window_pane_cp7_ParamLimits

0x56a5,	// (0x00024e77) bg_popup_window_pane_cp7

0x56d5,	// (0x00024ea7) popup_note_wait_window_g1_ParamLimits

0x56d5,	// (0x00024ea7) popup_note_wait_window_g1

0x56e1,	// (0x00024eb3) popup_note_wait_window_g2_ParamLimits

0x56e1,	// (0x00024eb3) popup_note_wait_window_g2

0x0002,

0xf842,	// (0x0002f014) popup_note_wait_window_g_ParamLimits

0xf842,	// (0x0002f014) popup_note_wait_window_g

0x56f9,	// (0x00024ecb) popup_note_wait_window_t1_ParamLimits

0x56f9,	// (0x00024ecb) popup_note_wait_window_t1

0x5720,	// (0x00024ef2) popup_note_wait_window_t2_ParamLimits

0x5720,	// (0x00024ef2) popup_note_wait_window_t2

0x573d,	// (0x00024f0f) popup_note_wait_window_t3_ParamLimits

0x573d,	// (0x00024f0f) popup_note_wait_window_t3

0x5750,	// (0x00024f22) popup_note_wait_window_t4_ParamLimits

0x5750,	// (0x00024f22) popup_note_wait_window_t4

0x0004,

0xf849,	// (0x0002f01b) popup_note_wait_window_t_ParamLimits

0xf849,	// (0x0002f01b) popup_note_wait_window_t

0x5775,	// (0x00024f47) wait_bar_pane_ParamLimits

0x5775,	// (0x00024f47) wait_bar_pane

0x3235,	// (0x00022a07) wait_anim_pane

0x3235,	// (0x00022a07) wait_border_pane

0x322b,	// (0x000229fd) wait_anim_pane_g1

0x322b,	// (0x000229fd) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002eedb) wait_anim_pane_g

0x5649,	// (0x00024e1b) wait_border_pane_g1

0x5654,	// (0x00024e26) wait_border_pane_g2

0x565d,	// (0x00024e2f) wait_border_pane_g3

0x0002,

0xf83b,	// (0x0002f00d) wait_border_pane_g

0x54a8,	// (0x00024c7a) bg_popup_window_pane_cp16_ParamLimits

0x54a8,	// (0x00024c7a) bg_popup_window_pane_cp16

0x55b4,	// (0x00024d86) indicator_popup_pane_cp4_ParamLimits

0x55b4,	// (0x00024d86) indicator_popup_pane_cp4

0x55c8,	// (0x00024d9a) popup_query_data_window_t1_ParamLimits

0x55c8,	// (0x00024d9a) popup_query_data_window_t1

0x55da,	// (0x00024dac) popup_query_data_window_t2_ParamLimits

0x55da,	// (0x00024dac) popup_query_data_window_t2

0x55f3,	// (0x00024dc5) popup_query_data_window_t3_ParamLimits

0x55f3,	// (0x00024dc5) popup_query_data_window_t3

0x0002,

0xf834,	// (0x0002f006) popup_query_data_window_t_ParamLimits

0xf834,	// (0x0002f006) popup_query_data_window_t

0x560d,	// (0x00024ddf) query_popup_data_pane_ParamLimits

0x560d,	// (0x00024ddf) query_popup_data_pane

0x5621,	// (0x00024df3) query_popup_data_pane_cp1_ParamLimits

0x5621,	// (0x00024df3) query_popup_data_pane_cp1

0x54a8,	// (0x00024c7a) bg_popup_window_pane_cp10_ParamLimits

0x54a8,	// (0x00024c7a) bg_popup_window_pane_cp10

0x54da,	// (0x00024cac) indicator_popup_pane_ParamLimits

0x54da,	// (0x00024cac) indicator_popup_pane

0x54fc,	// (0x00024cce) popup_query_code_window_t1_ParamLimits

0x54fc,	// (0x00024cce) popup_query_code_window_t1

0x5516,	// (0x00024ce8) popup_query_code_window_t2_ParamLimits

0x5516,	// (0x00024ce8) popup_query_code_window_t2

0x556b,	// (0x00024d3d) popup_query_code_window_t3_ParamLimits

0x556b,	// (0x00024d3d) popup_query_code_window_t3

0x0002,

0xf82d,	// (0x0002efff) popup_query_code_window_t_ParamLimits

0xf82d,	// (0x0002efff) popup_query_code_window_t

0x559a,	// (0x00024d6c) query_popup_pane_ParamLimits

0x559a,	// (0x00024d6c) query_popup_pane

0x3646,	// (0x00022e18) bg_popup_window_pane_cp15_ParamLimits

0x3646,	// (0x00022e18) bg_popup_window_pane_cp15

0x3664,	// (0x00022e36) indicator_popup_pane_cp1_ParamLimits

0x3664,	// (0x00022e36) indicator_popup_pane_cp1

0x3677,	// (0x00022e49) indicator_popup_pane_cp2_ParamLimits

0x3677,	// (0x00022e49) indicator_popup_pane_cp2

0x368a,	// (0x00022e5c) popup_query_data_code_window_g1_ParamLimits

0x368a,	// (0x00022e5c) popup_query_data_code_window_g1

0x369d,	// (0x00022e6f) popup_query_data_code_window_t1_ParamLimits

0x369d,	// (0x00022e6f) popup_query_data_code_window_t1

0x36af,	// (0x00022e81) popup_query_data_code_window_t2_ParamLimits

0x36af,	// (0x00022e81) popup_query_data_code_window_t2

0x36c1,	// (0x00022e93) popup_query_data_code_window_t3_ParamLimits

0x36c1,	// (0x00022e93) popup_query_data_code_window_t3

0x36d7,	// (0x00022ea9) popup_query_data_code_window_t4_ParamLimits

0x36d7,	// (0x00022ea9) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002ed62) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002ed62) popup_query_data_code_window_t

0x20cc,	// (0x0002189e) list_single_midp_graphic_pane_g3

0x36ef,	// (0x00022ec1) query_popup_data_pane_cp2_ParamLimits

0x3702,	// (0x00022ed4) query_popup_pane_cp2_ParamLimits

0x3702,	// (0x00022ed4) query_popup_pane_cp2

0x3235,	// (0x00022a07) bg_popup_window_pane_cp11

0x54a0,	// (0x00024c72) heading_pane_cp5

0x37ea,	// (0x00022fbc) listscroll_popup_info_pane

0x3235,	// (0x00022a07) input_focus_pane_cp3

0x3715,	// (0x00022ee7) query_popup_pane_t1

0x3723,	// (0x00022ef5) list_popup_info_pane_ParamLimits

0x3723,	// (0x00022ef5) list_popup_info_pane

0x3732,	// (0x00022f04) listscroll_popup_info_pane_g1

0x373a,	// (0x00022f0c) scroll_pane_cp7

0x3744,	// (0x00022f16) popup_info_list_pane_t1_ParamLimits

0x3744,	// (0x00022f16) popup_info_list_pane_t1

0x375e,	// (0x00022f30) popup_info_list_pane_t2_ParamLimits

0x375e,	// (0x00022f30) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002ed6b) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002ed6b) popup_info_list_pane_t

0x3235,	// (0x00022a07) bg_popup_window_pane_cp12

0x6854,	// (0x00026026) find_popup_pane

0x3315,	// (0x00022ae7) bg_popup_window_pane_cp3

0x3778,	// (0x00022f4a) heading_pane_cp3

0x3784,	// (0x00022f56) listscroll_popup_graphic_pane

0x3235,	// (0x00022a07) bg_popup_window_pane_cp4

0xd0db,	// (0x0002c8ad) heading_pane_cp4

0x37ea,	// (0x00022fbc) listscroll_popup_colour_pane

0x37f2,	// (0x00022fc4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x37f2,	// (0x00022fc4) cell_large_graphic_colour_none_popup_pane

0xd0e3,	// (0x0002c8b5) grid_large_graphic_colour_popup_pane_ParamLimits

0xd0e3,	// (0x0002c8b5) grid_large_graphic_colour_popup_pane

0x3832,	// (0x00023004) listscroll_popup_colour_pane_g1_ParamLimits

0x3832,	// (0x00023004) listscroll_popup_colour_pane_g1

0x3849,	// (0x0002301b) listscroll_popup_colour_pane_g2_ParamLimits

0x3849,	// (0x0002301b) listscroll_popup_colour_pane_g2

0x3860,	// (0x00023032) listscroll_popup_colour_pane_g3_ParamLimits

0x3860,	// (0x00023032) listscroll_popup_colour_pane_g3

0xd107,	// (0x0002c8d9) listscroll_popup_colour_pane_g4_ParamLimits

0xd107,	// (0x0002c8d9) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002ed70) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002ed70) listscroll_popup_colour_pane_g

0x3884,	// (0x00023056) scroll_pane_cp6_ParamLimits

0x3884,	// (0x00023056) scroll_pane_cp6

0xd117,	// (0x0002c8e9) cell_large_graphic_colour_popup_pane_ParamLimits

0xd117,	// (0x0002c8e9) cell_large_graphic_colour_popup_pane

0x38b5,	// (0x00023087) cell_large_graphic_colour_none_popup_pane_t1

0x3235,	// (0x00022a07) grid_highlight_pane_cp5

0x38c4,	// (0x00023096) cell_large_graphic_colour_popup_pane_g1

0x38cc,	// (0x0002309e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002ed79) cell_large_graphic_colour_popup_pane_g

0x38d4,	// (0x000230a6) cell_large_graphic_colour_popup_pane_g2_copy1

0x38dd,	// (0x000230af) grid_highlight_pane_cp4

0x38e5,	// (0x000230b7) bg_popup_window_pane_cp8_ParamLimits

0x38e5,	// (0x000230b7) bg_popup_window_pane_cp8

0x3900,	// (0x000230d2) popup_snote_single_text_window_g1_ParamLimits

0x3900,	// (0x000230d2) popup_snote_single_text_window_g1

0x3912,	// (0x000230e4) popup_snote_single_text_window_t1_ParamLimits

0x3912,	// (0x000230e4) popup_snote_single_text_window_t1

0x3925,	// (0x000230f7) popup_snote_single_text_window_t2_ParamLimits

0x3925,	// (0x000230f7) popup_snote_single_text_window_t2

0x3938,	// (0x0002310a) popup_snote_single_text_window_t3_ParamLimits

0x3938,	// (0x0002310a) popup_snote_single_text_window_t3

0x3971,	// (0x00023143) popup_snote_single_text_window_t4_ParamLimits

0x3971,	// (0x00023143) popup_snote_single_text_window_t4

0x39a5,	// (0x00023177) popup_snote_single_text_window_t5_ParamLimits

0x39a5,	// (0x00023177) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002ed7e) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002ed7e) popup_snote_single_text_window_t

0x39d4,	// (0x000231a6) bg_popup_window_pane_cp9_ParamLimits

0x39d4,	// (0x000231a6) bg_popup_window_pane_cp9

0x3900,	// (0x000230d2) popup_snote_single_graphic_window_g1_ParamLimits

0x3900,	// (0x000230d2) popup_snote_single_graphic_window_g1

0x39e2,	// (0x000231b4) popup_snote_single_graphic_window_g2_ParamLimits

0x39e2,	// (0x000231b4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002ed89) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002ed89) popup_snote_single_graphic_window_g

0x39ee,	// (0x000231c0) popup_snote_single_graphic_window_t1_ParamLimits

0x39ee,	// (0x000231c0) popup_snote_single_graphic_window_t1

0x3a01,	// (0x000231d3) popup_snote_single_graphic_window_t2_ParamLimits

0x3a01,	// (0x000231d3) popup_snote_single_graphic_window_t2

0x3a14,	// (0x000231e6) popup_snote_single_graphic_window_t3_ParamLimits

0x3a14,	// (0x000231e6) popup_snote_single_graphic_window_t3

0x3a4d,	// (0x0002321f) popup_snote_single_graphic_window_t4_ParamLimits

0x3a4d,	// (0x0002321f) popup_snote_single_graphic_window_t4

0x3a81,	// (0x00023253) popup_snote_single_graphic_window_t5_ParamLimits

0x3a81,	// (0x00023253) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002ed8e) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002ed8e) popup_snote_single_graphic_window_t

0x6798,	// (0x00025f6a) grid_graphic_popup_pane_ParamLimits

0x6798,	// (0x00025f6a) grid_graphic_popup_pane

0x67c0,	// (0x00025f92) listscroll_popup_graphic_pane_g1_ParamLimits

0x67c0,	// (0x00025f92) listscroll_popup_graphic_pane_g1

0xde32,	// (0x0002d604) listscroll_popup_graphic_pane_g2_ParamLimits

0xde32,	// (0x0002d604) listscroll_popup_graphic_pane_g2

0x0001,

0xf9aa,	// (0x0002f17c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9aa,	// (0x0002f17c) listscroll_popup_graphic_pane_g

0x67e8,	// (0x00025fba) scroll_pane_cp5

0xddf5,	// (0x0002d5c7) cell_graphic_popup_pane_ParamLimits

0xddf5,	// (0x0002d5c7) cell_graphic_popup_pane

0x6722,	// (0x00025ef4) cell_graphic_popup_pane_g1

0x672a,	// (0x00025efc) cell_graphic_popup_pane_g2

0x38d4,	// (0x000230a6) cell_graphic_popup_pane_g3

0x0002,

0xf9a3,	// (0x0002f175) cell_graphic_popup_pane_g

0x6733,	// (0x00025f05) cell_graphic_popup_pane_t2

0x38dd,	// (0x000230af) grid_highlight_pane_cp3

0x3ac2,	// (0x00023294) list_gen_pane_ParamLimits

0x3ac2,	// (0x00023294) list_gen_pane

0x3af4,	// (0x000232c6) scroll_pane

0xddac,	// (0x0002d57e) bg_list_pane_g1_ParamLimits

0xddac,	// (0x0002d57e) bg_list_pane_g1

0x6697,	// (0x00025e69) bg_list_pane_g2_ParamLimits

0x6697,	// (0x00025e69) bg_list_pane_g2

0x66ac,	// (0x00025e7e) bg_list_pane_g3_ParamLimits

0x66ac,	// (0x00025e7e) bg_list_pane_g3

0x66c0,	// (0x00025e92) bg_list_pane_g4_ParamLimits

0x66c0,	// (0x00025e92) bg_list_pane_g4

0xddc9,	// (0x0002d59b) bg_list_pane_g5_ParamLimits

0xddc9,	// (0x0002d59b) bg_list_pane_g5

0x0004,

0xf998,	// (0x0002f16a) bg_list_pane_g_ParamLimits

0xf998,	// (0x0002f16a) bg_list_pane_g

0xdd74,	// (0x0002d546) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double2_graphic_large_graphic_pane

0xdd74,	// (0x0002d546) list_double2_graphic_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double2_graphic_pane

0xdd74,	// (0x0002d546) list_double2_large_graphic_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double2_large_graphic_pane

0xdd74,	// (0x0002d546) list_double2_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double2_pane

0xdd74,	// (0x0002d546) list_double_graphic_heading_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double_graphic_heading_pane

0xdd74,	// (0x0002d546) list_double_graphic_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double_graphic_pane

0xdd74,	// (0x0002d546) list_double_heading_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double_heading_pane

0xdd74,	// (0x0002d546) list_double_large_graphic_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double_large_graphic_pane

0xdd74,	// (0x0002d546) list_double_number_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double_number_pane

0xdd74,	// (0x0002d546) list_double_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double_pane

0xdd74,	// (0x0002d546) list_double_time_pane_ParamLimits

0xdd74,	// (0x0002d546) list_double_time_pane

0xdd74,	// (0x0002d546) list_setting_number_pane_ParamLimits

0xdd74,	// (0x0002d546) list_setting_number_pane

0xdd74,	// (0x0002d546) list_setting_pane_ParamLimits

0xdd74,	// (0x0002d546) list_setting_pane

0xdd86,	// (0x0002d558) list_single_2graphic_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_2graphic_pane

0xdd86,	// (0x0002d558) list_single_graphic_heading_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_graphic_heading_pane

0xdd86,	// (0x0002d558) list_single_graphic_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_graphic_pane

0xdd86,	// (0x0002d558) list_single_heading_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_heading_pane

0xdd86,	// (0x0002d558) list_single_large_graphic_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_large_graphic_pane

0xdd86,	// (0x0002d558) list_single_number_heading_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_number_heading_pane

0xdd86,	// (0x0002d558) list_single_number_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_number_pane

0xdd86,	// (0x0002d558) list_single_pane_ParamLimits

0xdd86,	// (0x0002d558) list_single_pane

0x3235,	// (0x00022a07) list_highlight_pane_cp1

0x0780,	// (0x0001ff52) list_single_pane_g1_ParamLimits

0x0780,	// (0x0001ff52) list_single_pane_g1

0x078c,	// (0x0001ff5e) list_single_pane_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_single_pane_g

0x0a8e,	// (0x00020260) list_single_pane_t1_ParamLimits

0x0a8e,	// (0x00020260) list_single_pane_t1

0x0780,	// (0x0001ff52) list_single_number_pane_g1_ParamLimits

0x0780,	// (0x0001ff52) list_single_number_pane_g1

0x078c,	// (0x0001ff5e) list_single_number_pane_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_single_number_pane_g

0x07e0,	// (0x0001ffb2) list_single_number_pane_t1_ParamLimits

0x07e0,	// (0x0001ffb2) list_single_number_pane_t1

0xba71,	// (0x0002b243) list_single_number_pane_t2_ParamLimits

0xba71,	// (0x0002b243) list_single_number_pane_t2

0x0001,

0xf959,	// (0x0002f12b) list_single_number_pane_t_ParamLimits

0xf959,	// (0x0002f12b) list_single_number_pane_t

0xb465,	// (0x0002ac37) list_single_graphic_pane_g1_ParamLimits

0xb465,	// (0x0002ac37) list_single_graphic_pane_g1

0x0780,	// (0x0001ff52) list_single_graphic_pane_g2_ParamLimits

0x0780,	// (0x0001ff52) list_single_graphic_pane_g2

0x078c,	// (0x0001ff5e) list_single_graphic_pane_g3_ParamLimits

0x078c,	// (0x0001ff5e) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002ed99) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002ed99) list_single_graphic_pane_g

0xb471,	// (0x0002ac43) list_single_graphic_pane_t1_ParamLimits

0xb471,	// (0x0002ac43) list_single_graphic_pane_t1

0x0780,	// (0x0001ff52) list_single_heading_pane_g1_ParamLimits

0x0780,	// (0x0001ff52) list_single_heading_pane_g1

0x078c,	// (0x0001ff5e) list_single_heading_pane_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_single_heading_pane_g

0x0ab0,	// (0x00020282) list_single_heading_pane_t1_ParamLimits

0x0ab0,	// (0x00020282) list_single_heading_pane_t1

0xb487,	// (0x0002ac59) list_single_heading_pane_t2_ParamLimits

0xb487,	// (0x0002ac59) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002eda5) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002eda5) list_single_heading_pane_t

0x0780,	// (0x0001ff52) list_single_number_heading_pane_g1_ParamLimits

0x0780,	// (0x0001ff52) list_single_number_heading_pane_g1

0x078c,	// (0x0001ff5e) list_single_number_heading_pane_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_single_number_heading_pane_g

0x0ab0,	// (0x00020282) list_single_number_heading_pane_t1_ParamLimits

0x0ab0,	// (0x00020282) list_single_number_heading_pane_t1

0xb499,	// (0x0002ac6b) list_single_number_heading_pane_t2_ParamLimits

0xb499,	// (0x0002ac6b) list_single_number_heading_pane_t2

0x0a68,	// (0x0002023a) list_single_number_heading_pane_t3_ParamLimits

0x0a68,	// (0x0002023a) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002edaa) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002edaa) list_single_number_heading_pane_t

0x0774,	// (0x0001ff46) list_single_graphic_heading_pane_g1_ParamLimits

0x0774,	// (0x0001ff46) list_single_graphic_heading_pane_g1

0xb4ab,	// (0x0002ac7d) list_single_graphic_heading_pane_g4_ParamLimits

0xb4ab,	// (0x0002ac7d) list_single_graphic_heading_pane_g4

0x078c,	// (0x0001ff5e) list_single_graphic_heading_pane_g5_ParamLimits

0x078c,	// (0x0001ff5e) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002edb1) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002edb1) list_single_graphic_heading_pane_g

0x0ab0,	// (0x00020282) list_single_graphic_heading_pane_t1_ParamLimits

0x0ab0,	// (0x00020282) list_single_graphic_heading_pane_t1

0xb4bc,	// (0x0002ac8e) list_single_graphic_heading_pane_t2_ParamLimits

0xb4bc,	// (0x0002ac8e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002edb8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002edb8) list_single_graphic_heading_pane_t

0x0aa4,	// (0x00020276) list_single_large_graphic_pane_g1_ParamLimits

0x0aa4,	// (0x00020276) list_single_large_graphic_pane_g1

0x0780,	// (0x0001ff52) list_single_large_graphic_pane_g2_ParamLimits

0x0780,	// (0x0001ff52) list_single_large_graphic_pane_g2

0x078c,	// (0x0001ff5e) list_single_large_graphic_pane_g3_ParamLimits

0x078c,	// (0x0001ff5e) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002edbd) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002edbd) list_single_large_graphic_pane_g

0x5654,	// (0x00024e26) wait_border_pane_g2_copy1

0xb4ce,	// (0x0002aca0) list_single_large_graphic_pane_g4_cp2

0x0ab0,	// (0x00020282) list_single_large_graphic_pane_t1_ParamLimits

0x0ab0,	// (0x00020282) list_single_large_graphic_pane_t1

0xb4d6,	// (0x0002aca8) list_double_pane_g1_ParamLimits

0xb4d6,	// (0x0002aca8) list_double_pane_g1

0xb4e2,	// (0x0002acb4) list_double_pane_g2_ParamLimits

0xb4e2,	// (0x0002acb4) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002edc4) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002edc4) list_double_pane_g

0xb4ee,	// (0x0002acc0) list_double_pane_t1_ParamLimits

0xb4ee,	// (0x0002acc0) list_double_pane_t1

0xb504,	// (0x0002acd6) list_double_pane_t2_ParamLimits

0xb504,	// (0x0002acd6) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002edc9) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002edc9) list_double_pane_t

0xb516,	// (0x0002ace8) list_double2_pane_g1_ParamLimits

0xb516,	// (0x0002ace8) list_double2_pane_g1

0xb527,	// (0x0002acf9) list_double2_pane_g2_ParamLimits

0xb527,	// (0x0002acf9) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002edce) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002edce) list_double2_pane_g

0xb533,	// (0x0002ad05) list_double2_pane_t1_ParamLimits

0xb533,	// (0x0002ad05) list_double2_pane_t1

0xb549,	// (0x0002ad1b) list_double2_pane_t2_ParamLimits

0xb549,	// (0x0002ad1b) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002edd3) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002edd3) list_double2_pane_t

0xb4d6,	// (0x0002aca8) list_double_number_pane_g1_ParamLimits

0xb4d6,	// (0x0002aca8) list_double_number_pane_g1

0xb4e2,	// (0x0002acb4) list_double_number_pane_g2_ParamLimits

0xb4e2,	// (0x0002acb4) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002edc4) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002edc4) list_double_number_pane_g

0xb55b,	// (0x0002ad2d) list_double_number_pane_t1_ParamLimits

0xb55b,	// (0x0002ad2d) list_double_number_pane_t1

0xb56d,	// (0x0002ad3f) list_double_number_pane_t2_ParamLimits

0xb56d,	// (0x0002ad3f) list_double_number_pane_t2

0xb583,	// (0x0002ad55) list_double_number_pane_t3_ParamLimits

0xb583,	// (0x0002ad55) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002edd8) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002edd8) list_double_number_pane_t

0xb595,	// (0x0002ad67) list_double_graphic_pane_g1_ParamLimits

0xb595,	// (0x0002ad67) list_double_graphic_pane_g1

0xb5a1,	// (0x0002ad73) list_double_graphic_pane_g2_ParamLimits

0xb5a1,	// (0x0002ad73) list_double_graphic_pane_g2

0xb5b0,	// (0x0002ad82) list_double_graphic_pane_g3_ParamLimits

0xb5b0,	// (0x0002ad82) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002eddf) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002eddf) list_double_graphic_pane_g

0xb5c8,	// (0x0002ad9a) list_double_graphic_pane_t1_ParamLimits

0xb5c8,	// (0x0002ad9a) list_double_graphic_pane_t1

0xb5de,	// (0x0002adb0) list_double_graphic_pane_t2_ParamLimits

0xb5de,	// (0x0002adb0) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002ede8) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002ede8) list_double_graphic_pane_t

0x02ec,	// (0x0001fabe) list_double2_graphic_pane_g1_ParamLimits

0x02ec,	// (0x0001fabe) list_double2_graphic_pane_g1

0x0ce8,	// (0x000204ba) list_double2_graphic_pane_g2_ParamLimits

0x0ce8,	// (0x000204ba) list_double2_graphic_pane_g2

0xb527,	// (0x0002acf9) list_double2_graphic_pane_g3_ParamLimits

0xb527,	// (0x0002acf9) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002eded) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002eded) list_double2_graphic_pane_g

0xb5f0,	// (0x0002adc2) list_double2_graphic_pane_t1_ParamLimits

0xb5f0,	// (0x0002adc2) list_double2_graphic_pane_t1

0xb606,	// (0x0002add8) list_double2_graphic_pane_t2_ParamLimits

0xb606,	// (0x0002add8) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002edf4) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002edf4) list_double2_graphic_pane_t

0xb618,	// (0x0002adea) list_double_large_graphic_pane_g1_ParamLimits

0xb618,	// (0x0002adea) list_double_large_graphic_pane_g1

0xb643,	// (0x0002ae15) list_double_large_graphic_pane_g2_ParamLimits

0xb643,	// (0x0002ae15) list_double_large_graphic_pane_g2

0xb4e2,	// (0x0002acb4) list_double_large_graphic_pane_g3_ParamLimits

0xb4e2,	// (0x0002acb4) list_double_large_graphic_pane_g3

0xb654,	// (0x0002ae26) list_double_large_graphic_pane_g4_ParamLimits

0xb654,	// (0x0002ae26) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002edf9) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002edf9) list_double_large_graphic_pane_g

0xb667,	// (0x0002ae39) list_double_large_graphic_pane_t1_ParamLimits

0xb667,	// (0x0002ae39) list_double_large_graphic_pane_t1

0xb680,	// (0x0002ae52) list_double_large_graphic_pane_t2_ParamLimits

0xb680,	// (0x0002ae52) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002ee04) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002ee04) list_double_large_graphic_pane_t

0xb692,	// (0x0002ae64) list_double2_large_graphic_pane_g1_ParamLimits

0xb692,	// (0x0002ae64) list_double2_large_graphic_pane_g1

0xb516,	// (0x0002ace8) list_double2_large_graphic_pane_g2_ParamLimits

0xb516,	// (0x0002ace8) list_double2_large_graphic_pane_g2

0xb527,	// (0x0002acf9) list_double2_large_graphic_pane_g3_ParamLimits

0xb527,	// (0x0002acf9) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002ee09) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002ee09) list_double2_large_graphic_pane_g

0xb69e,	// (0x0002ae70) list_double2_large_graphic_pane_t1_ParamLimits

0xb69e,	// (0x0002ae70) list_double2_large_graphic_pane_t1

0xb6b4,	// (0x0002ae86) list_double2_large_graphic_pane_t2_ParamLimits

0xb6b4,	// (0x0002ae86) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002ee10) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002ee10) list_double2_large_graphic_pane_t

0xb6c6,	// (0x0002ae98) list_double_heading_pane_g1_ParamLimits

0xb6c6,	// (0x0002ae98) list_double_heading_pane_g1

0x00b7,	// (0x0001f889) list_double_heading_pane_g2_ParamLimits

0x00b7,	// (0x0001f889) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002ee15) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002ee15) list_double_heading_pane_g

0xb6d7,	// (0x0002aea9) list_double_heading_pane_t1_ParamLimits

0xb6d7,	// (0x0002aea9) list_double_heading_pane_t1

0xb549,	// (0x0002ad1b) list_double_heading_pane_t2_ParamLimits

0xb549,	// (0x0002ad1b) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002ee1a) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002ee1a) list_double_heading_pane_t

0x02ec,	// (0x0001fabe) list_double_graphic_heading_pane_g1_ParamLimits

0x02ec,	// (0x0001fabe) list_double_graphic_heading_pane_g1

0xb6c6,	// (0x0002ae98) list_double_graphic_heading_pane_g2_ParamLimits

0xb6c6,	// (0x0002ae98) list_double_graphic_heading_pane_g2

0x00b7,	// (0x0001f889) list_double_graphic_heading_pane_g3_ParamLimits

0x00b7,	// (0x0001f889) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002ee1f) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002ee1f) list_double_graphic_heading_pane_g

0xb6ed,	// (0x0002aebf) list_double_graphic_heading_pane_t1_ParamLimits

0xb6ed,	// (0x0002aebf) list_double_graphic_heading_pane_t1

0xb606,	// (0x0002add8) list_double_graphic_heading_pane_t2_ParamLimits

0xb606,	// (0x0002add8) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002ee26) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002ee26) list_double_graphic_heading_pane_t

0xb643,	// (0x0002ae15) list_double_time_pane_g1_ParamLimits

0xb643,	// (0x0002ae15) list_double_time_pane_g1

0xb4e2,	// (0x0002acb4) list_double_time_pane_g2_ParamLimits

0xb4e2,	// (0x0002acb4) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002ee2b) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002ee2b) list_double_time_pane_g

0xb703,	// (0x0002aed5) list_double_time_pane_t1_ParamLimits

0xb703,	// (0x0002aed5) list_double_time_pane_t1

0xb719,	// (0x0002aeeb) list_double_time_pane_t2_ParamLimits

0xb719,	// (0x0002aeeb) list_double_time_pane_t2

0xb72b,	// (0x0002aefd) list_double_time_pane_t3_ParamLimits

0xb72b,	// (0x0002aefd) list_double_time_pane_t3

0xb73d,	// (0x0002af0f) list_double_time_pane_t4_ParamLimits

0xb73d,	// (0x0002af0f) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002ee30) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002ee30) list_double_time_pane_t

0xb74f,	// (0x0002af21) list_setting_pane_g1_ParamLimits

0xb74f,	// (0x0002af21) list_setting_pane_g1

0xb75b,	// (0x0002af2d) list_setting_pane_g2_ParamLimits

0xb75b,	// (0x0002af2d) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002ee39) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002ee39) list_setting_pane_g

0xb767,	// (0x0002af39) list_setting_pane_t1_ParamLimits

0xb767,	// (0x0002af39) list_setting_pane_t1

0xb781,	// (0x0002af53) list_setting_pane_t2_ParamLimits

0xb781,	// (0x0002af53) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002ee3e) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002ee3e) list_setting_pane_t

0xb7c0,	// (0x0002af92) set_value_pane_cp_ParamLimits

0xb7c0,	// (0x0002af92) set_value_pane_cp

0xb7cc,	// (0x0002af9e) list_setting_number_pane_g1_ParamLimits

0xb7cc,	// (0x0002af9e) list_setting_number_pane_g1

0xb7d8,	// (0x0002afaa) list_setting_number_pane_g2_ParamLimits

0xb7d8,	// (0x0002afaa) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002ee45) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002ee45) list_setting_number_pane_g

0xb7e4,	// (0x0002afb6) list_setting_number_pane_t1_ParamLimits

0xb7e4,	// (0x0002afb6) list_setting_number_pane_t1

0xb7fd,	// (0x0002afcf) list_setting_number_pane_t2_ParamLimits

0xb7fd,	// (0x0002afcf) list_setting_number_pane_t2

0xb817,	// (0x0002afe9) list_setting_number_pane_t3_ParamLimits

0xb817,	// (0x0002afe9) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002ee4a) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002ee4a) list_setting_number_pane_t

0xb7c0,	// (0x0002af92) set_value_pane_ParamLimits

0xb7c0,	// (0x0002af92) set_value_pane

0x3b28,	// (0x000232fa) bg_set_opt_pane_ParamLimits

0x3b28,	// (0x000232fa) bg_set_opt_pane

0x044d,	// (0x0001fc1f) set_value_pane_t1

0x3b49,	// (0x0002331b) slider_set_pane_cp3

0x3b52,	// (0x00023324) volume_small_pane_cp

0x3b5b,	// (0x0002332d) list_form_gen_pane

0x3b64,	// (0x00023336) scroll_pane_cp8

0xb85a,	// (0x0002b02c) form_field_data_pane_ParamLimits

0xb85a,	// (0x0002b02c) form_field_data_pane

0xb871,	// (0x0002b043) form_field_data_wide_pane_ParamLimits

0xb871,	// (0x0002b043) form_field_data_wide_pane

0xb891,	// (0x0002b063) form_field_popup_pane_ParamLimits

0xb891,	// (0x0002b063) form_field_popup_pane

0xb8a9,	// (0x0002b07b) form_field_popup_wide_pane_ParamLimits

0xb8a9,	// (0x0002b07b) form_field_popup_wide_pane

0x04e1,	// (0x0001fcb3) form_field_slider_pane_ParamLimits

0x04e1,	// (0x0001fcb3) form_field_slider_pane

0x04f4,	// (0x0001fcc6) form_field_slider_wide_pane_ParamLimits

0x04f4,	// (0x0001fcc6) form_field_slider_wide_pane

0x3b75,	// (0x00023347) data_form_pane

0xb8ca,	// (0x0002b09c) form_field_data_pane_t1

0x3b81,	// (0x00023353) input_focus_pane

0x0529,	// (0x0001fcfb) data_form_wide_pane

0x0546,	// (0x0001fd18) form_field_data_wide_pane_t1

0x38f2,	// (0x000230c4) input_focus_pane_cp6

0xb8e4,	// (0x0002b0b6) form_field_popup_pane_t1

0x3b81,	// (0x00023353) input_focus_pane_cp7

0x3baf,	// (0x00023381) list_form_pane

0x0588,	// (0x0001fd5a) form_field_popup_wide_pane_t1

0x3b81,	// (0x00023353) input_focus_pane_cp8

0x3bbb,	// (0x0002338d) list_form_wide_pane

0xb906,	// (0x0002b0d8) form_field_slider_pane_t1_ParamLimits

0xb906,	// (0x0002b0d8) form_field_slider_pane_t1

0xb91e,	// (0x0002b0f0) form_field_slider_pane_t2_ParamLimits

0xb91e,	// (0x0002b0f0) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002ee5a) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002ee5a) form_field_slider_pane_t

0x3590,	// (0x00022d62) input_focus_pane_cp9_ParamLimits

0x3590,	// (0x00022d62) input_focus_pane_cp9

0xb933,	// (0x0002b105) slider_cont_pane_ParamLimits

0xb933,	// (0x0002b105) slider_cont_pane

0x3bca,	// (0x0002339c) form_field_slider_wide_pane_t1_ParamLimits

0x3bca,	// (0x0002339c) form_field_slider_wide_pane_t1

0x05e4,	// (0x0001fdb6) form_field_slider_wide_pane_t2_ParamLimits

0x05e4,	// (0x0001fdb6) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002ee5f) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002ee5f) form_field_slider_wide_pane_t

0x3590,	// (0x00022d62) input_focus_pane_cp10_ParamLimits

0x3590,	// (0x00022d62) input_focus_pane_cp10

0xb947,	// (0x0002b119) slider_cont_pane_cp1_ParamLimits

0xb947,	// (0x0002b119) slider_cont_pane_cp1

0xb95b,	// (0x0002b12d) slider_form_pane_cp

0x3bdc,	// (0x000233ae) input_focus_pane_g1

0x3be4,	// (0x000233b6) input_focus_pane_g2

0x3bec,	// (0x000233be) input_focus_pane_g3

0x3bf4,	// (0x000233c6) input_focus_pane_g4

0x3bfc,	// (0x000233ce) input_focus_pane_g5

0x3c04,	// (0x000233d6) input_focus_pane_g6

0x3c0c,	// (0x000233de) input_focus_pane_g7

0x3c14,	// (0x000233e6) input_focus_pane_g8

0x3c1c,	// (0x000233ee) input_focus_pane_g9

0x322b,	// (0x000229fd) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002ee64) input_focus_pane_g

0x565d,	// (0x00024e2f) wait_border_pane_g3_copy1

0xb963,	// (0x0002b135) data_form_pane_t1

0x322b,	// (0x000229fd) wait_anim_pane_g1_copy1

0xba83,	// (0x0002b255) data_form_wide_pane_t1

0xb97d,	// (0x0002b14f) list_form_graphic_pane_cp_ParamLimits

0xb97d,	// (0x0002b14f) list_form_graphic_pane_cp

0x6593,	// (0x00025d65) slider_form_pane_g1

0x659c,	// (0x00025d6e) slider_form_pane_g2

0x0006,

0xf989,	// (0x0002f15b) slider_form_pane_g

0xb97d,	// (0x0002b14f) list_form_graphic_pane_ParamLimits

0xb97d,	// (0x0002b14f) list_form_graphic_pane

0x0662,	// (0x0001fe34) list_form_graphic_pane_g1

0x066a,	// (0x0001fe3c) list_form_graphic_pane_t1_ParamLimits

0x066a,	// (0x0001fe3c) list_form_graphic_pane_t1

0x3315,	// (0x00022ae7) list_highlight_pane_cp5_ParamLimits

0x3315,	// (0x00022ae7) list_highlight_pane_cp5

0xb98f,	// (0x0002b161) find_pane_g1

0x3c24,	// (0x000233f6) input_find_pane

0xb998,	// (0x0002b16a) input_find_pane_g1_ParamLimits

0xb998,	// (0x0002b16a) input_find_pane_g1

0xb9a4,	// (0x0002b176) input_find_pane_t1_ParamLimits

0xb9a4,	// (0x0002b176) input_find_pane_t1

0xb9b9,	// (0x0002b18b) input_find_pane_t2_ParamLimits

0xb9b9,	// (0x0002b18b) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002ee79) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002ee79) input_find_pane_t

0x3c2d,	// (0x000233ff) input_focus_pane_cp5_ParamLimits

0x3c2d,	// (0x000233ff) input_focus_pane_cp5

0x3c47,	// (0x00023419) bg_popup_window_pane_cp2_ParamLimits

0x3c47,	// (0x00023419) bg_popup_window_pane_cp2

0x3c54,	// (0x00023426) listscroll_menu_pane_ParamLimits

0x3c54,	// (0x00023426) listscroll_menu_pane

0xd14c,	// (0x0002c91e) popup_submenu_window_ParamLimits

0xd14c,	// (0x0002c91e) popup_submenu_window

0x3c8c,	// (0x0002345e) find_popup_pane_g1

0x3c94,	// (0x00023466) input_popup_find_pane_cp

0x3c2d,	// (0x000233ff) input_focus_pane_cp4_ParamLimits

0x3c2d,	// (0x000233ff) input_focus_pane_cp4

0x3caa,	// (0x0002347c) input_popup_find_pane_t1_ParamLimits

0x3caa,	// (0x0002347c) input_popup_find_pane_t1

0x3235,	// (0x00022a07) bg_popup_sub_pane_cp

0x3cd8,	// (0x000234aa) listscroll_popup_sub_pane

0x3ce0,	// (0x000234b2) list_submenu_pane_ParamLimits

0x3ce0,	// (0x000234b2) list_submenu_pane

0x3cf1,	// (0x000234c3) scroll_pane_cp4

0x3cf9,	// (0x000234cb) list_single_popup_submenu_pane_ParamLimits

0x3cf9,	// (0x000234cb) list_single_popup_submenu_pane

0x3d0d,	// (0x000234df) list_single_popup_submenu_pane_g1

0x3d15,	// (0x000234e7) list_single_popup_submenu_pane_t1_ParamLimits

0x3d15,	// (0x000234e7) list_single_popup_submenu_pane_t1

0x3590,	// (0x00022d62) bg_active_tab_pane_cp1_ParamLimits

0x3590,	// (0x00022d62) bg_active_tab_pane_cp1

0xd186,	// (0x0002c958) tabs_2_active_pane_g1

0xd18e,	// (0x0002c960) tabs_2_active_pane_t1

0x3590,	// (0x00022d62) bg_passive_tab_pane_cp1_ParamLimits

0x3590,	// (0x00022d62) bg_passive_tab_pane_cp1

0xd186,	// (0x0002c958) tabs_2_passive_pane_g1

0xd18e,	// (0x0002c960) tabs_2_passive_pane_t1

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp4

0xd1a0,	// (0x0002c972) tabs_2_long_active_pane_t1

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp4

0x20d4,	// (0x000218a6) list_single_midp_graphic_pane_g4_ParamLimits

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp5

0xd1b3,	// (0x0002c985) tabs_3_long_active_pane_t1

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp5

0x20d4,	// (0x000218a6) list_single_midp_graphic_pane_g4

0x3315,	// (0x00022ae7) bg_popup_window_pane_cp13_ParamLimits

0x3315,	// (0x00022ae7) bg_popup_window_pane_cp13

0x3d8c,	// (0x0002355e) listscroll_popup_fast_pane_ParamLimits

0x3d8c,	// (0x0002355e) listscroll_popup_fast_pane

0x3d9b,	// (0x0002356d) grid_popup_fast_pane_ParamLimits

0x3d9b,	// (0x0002356d) grid_popup_fast_pane

0x3dad,	// (0x0002357f) scroll_pane_cp9_ParamLimits

0x3dad,	// (0x0002357f) scroll_pane_cp9

0x7ecd,	// (0x0002769f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7ecd,	// (0x0002769f) list_single_graphic_hl_pane_t1_cp2

0x3dd1,	// (0x000235a3) input_focus_pane_cp20_ParamLimits

0x3dd1,	// (0x000235a3) input_focus_pane_cp20

0x3ddf,	// (0x000235b1) query_popup_data_pane_t1_ParamLimits

0x3ddf,	// (0x000235b1) query_popup_data_pane_t1

0x3df2,	// (0x000235c4) query_popup_data_pane_t2_ParamLimits

0x3df2,	// (0x000235c4) query_popup_data_pane_t2

0x3e38,	// (0x0002360a) query_popup_data_pane_t3_ParamLimits

0x3e38,	// (0x0002360a) query_popup_data_pane_t3

0x3e79,	// (0x0002364b) query_popup_data_pane_t4_ParamLimits

0x3e79,	// (0x0002364b) query_popup_data_pane_t4

0x3eb5,	// (0x00023687) query_popup_data_pane_t5_ParamLimits

0x3eb5,	// (0x00023687) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002ee7e) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002ee7e) query_popup_data_pane_t

0x3bdc,	// (0x000233ae) bg_set_opt_pane_g1

0x3be4,	// (0x000233b6) bg_set_opt_pane_g2

0x3bec,	// (0x000233be) bg_set_opt_pane_g3

0x3bf4,	// (0x000233c6) bg_set_opt_pane_g4

0x3bfc,	// (0x000233ce) bg_set_opt_pane_g5

0x3c04,	// (0x000233d6) bg_set_opt_pane_g6

0x3c0c,	// (0x000233de) bg_set_opt_pane_g7

0x3c14,	// (0x000233e6) bg_set_opt_pane_g8

0x3c1c,	// (0x000233ee) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002ee89) bg_set_opt_pane_g

0x178e,	// (0x00020f60) control_top_pane_stacon_ParamLimits

0x178e,	// (0x00020f60) control_top_pane_stacon

0x17e1,	// (0x00020fb3) signal_pane_stacon_ParamLimits

0x17e1,	// (0x00020fb3) signal_pane_stacon

0x44a3,	// (0x00023c75) stacon_top_pane_g1_ParamLimits

0x44a3,	// (0x00023c75) stacon_top_pane_g1

0x1806,	// (0x00020fd8) title_pane_stacon_ParamLimits

0x1806,	// (0x00020fd8) title_pane_stacon

0x1830,	// (0x00021002) uni_indicator_pane_stacon_ParamLimits

0x1830,	// (0x00021002) uni_indicator_pane_stacon

0x1845,	// (0x00021017) battery_pane_stacon_ParamLimits

0x1845,	// (0x00021017) battery_pane_stacon

0x1889,	// (0x0002105b) control_bottom_pane_stacon_ParamLimits

0x1889,	// (0x0002105b) control_bottom_pane_stacon

0x18ac,	// (0x0002107e) navi_pane_stacon_ParamLimits

0x18ac,	// (0x0002107e) navi_pane_stacon

0x44c5,	// (0x00023c97) stacon_bottom_pane_g1_ParamLimits

0x44c5,	// (0x00023c97) stacon_bottom_pane_g1

0x14f1,	// (0x00020cc3) aid_levels_signal_lsc_ParamLimits

0x14f1,	// (0x00020cc3) aid_levels_signal_lsc

0x1507,	// (0x00020cd9) signal_pane_stacon_g1_ParamLimits

0x1507,	// (0x00020cd9) signal_pane_stacon_g1

0x151b,	// (0x00020ced) signal_pane_stacon_g2_ParamLimits

0x151b,	// (0x00020ced) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002ee9c) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002ee9c) signal_pane_stacon_g

0x1550,	// (0x00020d22) title_pane_stacon_t1_ParamLimits

0x1550,	// (0x00020d22) title_pane_stacon_t1

0x3ef9,	// (0x000236cb) uni_indicator_pane_stacon_g1

0x3f03,	// (0x000236d5) uni_indicator_pane_stacon_g2

0x3f0d,	// (0x000236df) uni_indicator_pane_stacon_g3

0x3f17,	// (0x000236e9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002eea8) uni_indicator_pane_stacon_g

0x1575,	// (0x00020d47) control_top_pane_stacon_g1

0x157d,	// (0x00020d4f) control_top_pane_stacon_t1_ParamLimits

0x157d,	// (0x00020d4f) control_top_pane_stacon_t1

0x15b4,	// (0x00020d86) aid_levels_battery_lsc_ParamLimits

0x15b4,	// (0x00020d86) aid_levels_battery_lsc

0x15cb,	// (0x00020d9d) battery_pane_stacon_g1_ParamLimits

0x15cb,	// (0x00020d9d) battery_pane_stacon_g1

0x15de,	// (0x00020db0) battery_pane_stacon_g2_ParamLimits

0x15de,	// (0x00020db0) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002eeb1) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002eeb1) battery_pane_stacon_g

0x161c,	// (0x00020dee) navi_icon_pane_stacon

0x1630,	// (0x00020e02) navi_navi_pane_stacon

0x161c,	// (0x00020dee) navi_text_pane_stacon

0x1575,	// (0x00020d47) control_bottom_pane_stacon_g1

0x1644,	// (0x00020e16) control_bottom_pane_stacon_t1_ParamLimits

0x1644,	// (0x00020e16) control_bottom_pane_stacon_t1

0xd1c5,	// (0x0002c997) grid_app_pane_ParamLimits

0xd1c5,	// (0x0002c997) grid_app_pane

0xd1fd,	// (0x0002c9cf) scroll_pane_cp15_ParamLimits

0xd1fd,	// (0x0002c9cf) scroll_pane_cp15

0xd216,	// (0x0002c9e8) cell_app_pane_ParamLimits

0xd216,	// (0x0002c9e8) cell_app_pane

0xd25b,	// (0x0002ca2d) cell_app_pane_g1_ParamLimits

0xd25b,	// (0x0002ca2d) cell_app_pane_g1

0x3fb8,	// (0x0002378a) cell_app_pane_g2_ParamLimits

0x3fb8,	// (0x0002378a) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002eeb6) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002eeb6) cell_app_pane_g

0xd27b,	// (0x0002ca4d) cell_app_pane_t1_ParamLimits

0xd27b,	// (0x0002ca4d) cell_app_pane_t1

0x3fdb,	// (0x000237ad) grid_highlight_pane_ParamLimits

0x3fdb,	// (0x000237ad) grid_highlight_pane

0x3bdc,	// (0x000233ae) cell_highlight_pane_g1

0x3be4,	// (0x000233b6) cell_highlight_pane_g2

0x3bec,	// (0x000233be) cell_highlight_pane_g3

0x3bf4,	// (0x000233c6) cell_highlight_pane_g4

0x3bfc,	// (0x000233ce) cell_highlight_pane_g5

0x3c04,	// (0x000233d6) cell_highlight_pane_g6

0x3c0c,	// (0x000233de) cell_highlight_pane_g7

0x3c14,	// (0x000233e6) cell_highlight_pane_g8

0x3c1c,	// (0x000233ee) cell_highlight_pane_g9

0x322b,	// (0x000229fd) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002ee64) cell_highlight_pane_g

0x3fec,	// (0x000237be) bg_scroll_pane

0x168e,	// (0x00020e60) scroll_handle_pane

0x4033,	// (0x00023805) scroll_bg_pane_g1

0x4048,	// (0x0002381a) scroll_bg_pane_g2

0x4060,	// (0x00023832) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002eebb) scroll_bg_pane_g

0x4075,	// (0x00023847) scroll_handle_focus_pane_ParamLimits

0x4075,	// (0x00023847) scroll_handle_focus_pane

0x4033,	// (0x00023805) scroll_handle_pane_g1

0x4082,	// (0x00023854) scroll_handle_pane_g2

0x4060,	// (0x00023832) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002eec2) scroll_handle_pane_g

0x3c2d,	// (0x000233ff) bg_popup_sub_pane_cp21_ParamLimits

0x3c2d,	// (0x000233ff) bg_popup_sub_pane_cp21

0x4096,	// (0x00023868) popup_fep_japan_predictive_window_t1_ParamLimits

0x4096,	// (0x00023868) popup_fep_japan_predictive_window_t1

0x40b0,	// (0x00023882) popup_fep_japan_predictive_window_t2_ParamLimits

0x40b0,	// (0x00023882) popup_fep_japan_predictive_window_t2

0x40e3,	// (0x000238b5) popup_fep_japan_predictive_window_t3_ParamLimits

0x40e3,	// (0x000238b5) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002eec9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002eec9) popup_fep_japan_predictive_window_t

0x3235,	// (0x00022a07) bg_popup_sub_pane_cp23

0x411a,	// (0x000238ec) listscroll_japin_cand_pane

0x4122,	// (0x000238f4) popup_fep_japan_candidate_window_t1

0x4130,	// (0x00023902) candidate_pane_ParamLimits

0x4130,	// (0x00023902) candidate_pane

0x4142,	// (0x00023914) scroll_pane_cp30

0x414a,	// (0x0002391c) list_single_popup_jap_candidate_pane_ParamLimits

0x414a,	// (0x0002391c) list_single_popup_jap_candidate_pane

0x3235,	// (0x00022a07) list_highlight_pane_cp30

0x415f,	// (0x00023931) list_single_popup_jap_candidate_pane_t1

0x416e,	// (0x00023940) level_1_signal

0x4180,	// (0x00023952) level_2_signal

0x4193,	// (0x00023965) level_3_signal

0x41a6,	// (0x00023978) level_4_signal

0x41b9,	// (0x0002398b) level_5_signal

0x41cc,	// (0x0002399e) level_6_signal

0x41df,	// (0x000239b1) level_7_signal

0x416e,	// (0x00023940) level_1_battery

0x4180,	// (0x00023952) level_2_battery

0x4193,	// (0x00023965) level_3_battery

0x41a6,	// (0x00023978) level_4_battery

0x41b9,	// (0x0002398b) level_5_battery

0x41cc,	// (0x0002399e) level_6_battery

0x41df,	// (0x000239b1) level_7_battery

0x420a,	// (0x000239dc) list_menu_pane_ParamLimits

0x420a,	// (0x000239dc) list_menu_pane

0x4220,	// (0x000239f2) scroll_pane_cp25_ParamLimits

0x4220,	// (0x000239f2) scroll_pane_cp25

0x4239,	// (0x00023a0b) list_double2_graphic_pane_cp2_ParamLimits

0x4239,	// (0x00023a0b) list_double2_graphic_pane_cp2

0x4239,	// (0x00023a0b) list_double2_large_graphic_pane_cp2_ParamLimits

0x4239,	// (0x00023a0b) list_double2_large_graphic_pane_cp2

0x4239,	// (0x00023a0b) list_double2_pane_cp2_ParamLimits

0x4239,	// (0x00023a0b) list_double2_pane_cp2

0x4239,	// (0x00023a0b) list_double_graphic_pane_cp2_ParamLimits

0x4239,	// (0x00023a0b) list_double_graphic_pane_cp2

0x4239,	// (0x00023a0b) list_double_large_graphic_pane_cp2_ParamLimits

0x4239,	// (0x00023a0b) list_double_large_graphic_pane_cp2

0x4239,	// (0x00023a0b) list_double_number_pane_cp2_ParamLimits

0x4239,	// (0x00023a0b) list_double_number_pane_cp2

0x4239,	// (0x00023a0b) list_double_pane_cp2_ParamLimits

0x4239,	// (0x00023a0b) list_double_pane_cp2

0xd2a3,	// (0x0002ca75) list_single_2graphic_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_2graphic_pane_cp2

0xd2a3,	// (0x0002ca75) list_single_graphic_heading_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_graphic_heading_pane_cp2

0xd2a3,	// (0x0002ca75) list_single_graphic_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_graphic_pane_cp2

0xd2a3,	// (0x0002ca75) list_single_heading_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_heading_pane_cp2

0x4276,	// (0x00023a48) list_single_large_graphic_pane_cp2_ParamLimits

0x4276,	// (0x00023a48) list_single_large_graphic_pane_cp2

0xd2a3,	// (0x0002ca75) list_single_number_heading_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_number_heading_pane_cp2

0xd2a3,	// (0x0002ca75) list_single_number_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_number_pane_cp2

0xd2a3,	// (0x0002ca75) list_single_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_pane_cp2

0x42f2,	// (0x00023ac4) bg_popup_sub_pane_cp22

0x1740,	// (0x00020f12) popup_side_volume_key_window_g1

0x176a,	// (0x00020f3c) popup_side_volume_key_window_t1

0x1786,	// (0x00020f58) volume_small_pane_cp1

0x3590,	// (0x00022d62) bg_popup_sub_pane_cp24_ParamLimits

0x3590,	// (0x00022d62) bg_popup_sub_pane_cp24

0x4308,	// (0x00023ada) fep_china_uni_candidate_pane_ParamLimits

0x4308,	// (0x00023ada) fep_china_uni_candidate_pane

0x431c,	// (0x00023aee) fep_china_uni_entry_pane

0x432c,	// (0x00023afe) popup_fep_china_uni_window_g1

0x4348,	// (0x00023b1a) fep_china_uni_entry_pane_g1

0x4350,	// (0x00023b22) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002eefa) fep_china_uni_entry_pane_g

0x4358,	// (0x00023b2a) fep_entry_item_pane

0x4362,	// (0x00023b34) fep_candidate_item_pane

0x436a,	// (0x00023b3c) fep_china_uni_candidate_pane_g1

0x4372,	// (0x00023b44) fep_china_uni_candidate_pane_g2

0x437a,	// (0x00023b4c) fep_china_uni_candidate_pane_g3

0x4382,	// (0x00023b54) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002eeff) fep_china_uni_candidate_pane_g

0x322b,	// (0x000229fd) fep_entry_item_pane_g1

0x438a,	// (0x00023b5c) fep_entry_item_pane_t1_ParamLimits

0x438a,	// (0x00023b5c) fep_entry_item_pane_t1

0x43a0,	// (0x00023b72) fep_candidate_item_pane_t1_ParamLimits

0x43a0,	// (0x00023b72) fep_candidate_item_pane_t1

0x43b5,	// (0x00023b87) fep_candidate_item_pane_t2_ParamLimits

0x43b5,	// (0x00023b87) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002ef08) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002ef08) fep_candidate_item_pane_t

0x3315,	// (0x00022ae7) list_highlight_pane_cp31_ParamLimits

0x3315,	// (0x00022ae7) list_highlight_pane_cp31

0x43c7,	// (0x00023b99) level_1_signal_lsc

0x43d0,	// (0x00023ba2) level_2_signal_lsc

0x43d9,	// (0x00023bab) level_3_signal_lsc

0x43e2,	// (0x00023bb4) level_4_signal_lsc

0x43eb,	// (0x00023bbd) level_5_signal_lsc

0x43f4,	// (0x00023bc6) level_6_signal_lsc

0x43fd,	// (0x00023bcf) level_7_signal_lsc

0x43fd,	// (0x00023bcf) level_1_battery_lsc

0x4406,	// (0x00023bd8) level_2_battery_lsc

0x440f,	// (0x00023be1) level_3_battery_lsc

0x4418,	// (0x00023bea) level_4_battery_lsc

0x4421,	// (0x00023bf3) level_5_battery_lsc

0x442a,	// (0x00023bfc) level_6_battery_lsc

0x43c7,	// (0x00023b99) level_7_battery_lsc

0x4433,	// (0x00023c05) scroll_handle_focus_pane_g1

0x443c,	// (0x00023c0e) scroll_handle_focus_pane_g2

0x4445,	// (0x00023c17) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002ef0d) scroll_handle_focus_pane_g

0xb9ce,	// (0x0002b1a0) list_single_2graphic_pane_g1_ParamLimits

0xb9ce,	// (0x0002b1a0) list_single_2graphic_pane_g1

0xb4ab,	// (0x0002ac7d) list_single_2graphic_pane_g2_ParamLimits

0xb4ab,	// (0x0002ac7d) list_single_2graphic_pane_g2

0x078c,	// (0x0001ff5e) list_single_2graphic_pane_g3_ParamLimits

0x078c,	// (0x0001ff5e) list_single_2graphic_pane_g3

0xb9da,	// (0x0002b1ac) list_single_2graphic_pane_g4_ParamLimits

0xb9da,	// (0x0002b1ac) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002ef14) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002ef14) list_single_2graphic_pane_g

0xb9e6,	// (0x0002b1b8) list_single_2graphic_pane_t1_ParamLimits

0xb9e6,	// (0x0002b1b8) list_single_2graphic_pane_t1

0xba14,	// (0x0002b1e6) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba14,	// (0x0002b1e6) list_double2_graphic_large_graphic_pane_g1

0xb516,	// (0x0002ace8) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb516,	// (0x0002ace8) list_double2_graphic_large_graphic_pane_g2

0xb527,	// (0x0002acf9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb527,	// (0x0002acf9) list_double2_graphic_large_graphic_pane_g3

0xba26,	// (0x0002b1f8) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba26,	// (0x0002b1f8) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002ef1d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002ef1d) list_double2_graphic_large_graphic_pane_g

0xba32,	// (0x0002b204) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba32,	// (0x0002b204) list_double2_graphic_large_graphic_pane_t1

0xba48,	// (0x0002b21a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba48,	// (0x0002b21a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002ef26) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002ef26) list_double2_graphic_large_graphic_pane_t

0x458d,	// (0x00023d5f) popup_fast_swap_window_ParamLimits

0x458d,	// (0x00023d5f) popup_fast_swap_window

0x45a9,	// (0x00023d7b) popup_side_volume_key_window

0x45c5,	// (0x00023d97) stacon_top_pane

0x45cf,	// (0x00023da1) status_pane_ParamLimits

0x45cf,	// (0x00023da1) status_pane

0x45c5,	// (0x00023d97) status_small_pane

0x3235,	// (0x00022a07) control_pane

0x3235,	// (0x00022a07) stacon_bottom_pane

0x3b64,	// (0x00023336) scroll_pane_cp121

0x3b5b,	// (0x0002332d) set_content_pane

0x4469,	// (0x00023c3b) bg_active_tab_pane_g1_cp1

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp1

0x4472,	// (0x00023c44) bg_active_tab_pane_g3_cp1

0x4469,	// (0x00023c3b) bg_passive_tab_pane_g1_cp1

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp1

0x4472,	// (0x00023c44) bg_passive_tab_pane_g3_cp1

0xd331,	// (0x0002cb03) bg_active_tab_pane_g1_cp2

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp2

0xd33a,	// (0x0002cb0c) bg_active_tab_pane_g3_cp2

0xd331,	// (0x0002cb03) bg_passive_tab_pane_g1_cp2

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp2

0xd33a,	// (0x0002cb0c) bg_passive_tab_pane_g3_cp2

0xd343,	// (0x0002cb15) bg_active_tab_pane_g1_cp3

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp3

0xd34c,	// (0x0002cb1e) bg_active_tab_pane_g3_cp3

0xd343,	// (0x0002cb15) bg_passive_tab_pane_g1_cp3

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp3

0xd34c,	// (0x0002cb1e) bg_passive_tab_pane_g3_cp3

0xd355,	// (0x0002cb27) bg_active_tab_pane_g1_cp4

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp4

0xd35e,	// (0x0002cb30) bg_active_tab_pane_g3_cp4

0xd355,	// (0x0002cb27) bg_passive_tab_pane_g1_cp4

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp4

0xd35e,	// (0x0002cb30) bg_passive_tab_pane_g3_cp4

0x44e1,	// (0x00023cb3) bg_active_tab_pane_g1_cp5

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp5

0x44ea,	// (0x00023cbc) bg_active_tab_pane_g3_cp5

0x44e1,	// (0x00023cb3) bg_passive_tab_pane_g1_cp5

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp5

0x44ea,	// (0x00023cbc) bg_passive_tab_pane_g3_cp5

0x6ba8,	// (0x0002637a) list_set_graphic_pane_ParamLimits

0x6ba8,	// (0x0002637a) list_set_graphic_pane

0x3235,	// (0x00022a07) bg_set_opt_pane_cp4

0xd367,	// (0x0002cb39) list_set_graphic_pane_g1_ParamLimits

0xd367,	// (0x0002cb39) list_set_graphic_pane_g1

0xd373,	// (0x0002cb45) list_set_graphic_pane_g2_ParamLimits

0xd373,	// (0x0002cb45) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002ef2b) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002ef2b) list_set_graphic_pane_g

0x0009,

0xface,	// (0x0002f2a0) volume_small_pane_cp_g

0xd397,	// (0x0002cb69) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd397,	// (0x0002cb69) list_double2_large_graphic_pane_g1_cp2

0xd3a5,	// (0x0002cb77) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd3a5,	// (0x0002cb77) list_double2_large_graphic_pane_g2_cp2

0x455d,	// (0x00023d2f) list_double2_large_graphic_pane_g3_cp2

0x4565,	// (0x00023d37) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4565,	// (0x00023d37) list_double2_large_graphic_pane_t1_cp2

0x457b,	// (0x00023d4d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x457b,	// (0x00023d4d) list_double2_large_graphic_pane_t2_cp2

0xdb2e,	// (0x0002d300) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdb2e,	// (0x0002d300) list_double_large_graphic_pane_g1_cp2

0xdb41,	// (0x0002d313) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdb41,	// (0x0002d313) list_double_large_graphic_pane_g2_cp2

0x46eb,	// (0x00023ebd) list_double_large_graphic_pane_g3_cp2

0x6152,	// (0x00025924) list_double_large_graphic_pane_g4_cp

0x615a,	// (0x0002592c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x615a,	// (0x0002592c) list_double_large_graphic_pane_t1_cp2

0x6171,	// (0x00025943) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6171,	// (0x00025943) list_double_large_graphic_pane_t2_cp2

0xd3b6,	// (0x0002cb88) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd3b6,	// (0x0002cb88) list_double2_graphic_pane_g1_cp2

0xd3c4,	// (0x0002cb96) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd3c4,	// (0x0002cb96) list_double2_graphic_pane_g2_cp2

0xd3d5,	// (0x0002cba7) list_double2_graphic_pane_g3_cp2

0x4606,	// (0x00023dd8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4606,	// (0x00023dd8) list_double2_graphic_pane_t1_cp2

0x461c,	// (0x00023dee) list_double2_graphic_pane_t2_cp2_ParamLimits

0x461c,	// (0x00023dee) list_double2_graphic_pane_t2_cp2

0x462e,	// (0x00023e00) list_single_number_heading_pane_g1_cp2_ParamLimits

0x462e,	// (0x00023e00) list_single_number_heading_pane_g1_cp2

0x463a,	// (0x00023e0c) list_single_number_heading_pane_g2_cp2

0x4642,	// (0x00023e14) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4642,	// (0x00023e14) list_single_number_heading_pane_t1_cp2

0xd3df,	// (0x0002cbb1) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd3df,	// (0x0002cbb1) list_single_number_heading_pane_t2_cp2

0x466a,	// (0x00023e3c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x466a,	// (0x00023e3c) list_single_number_heading_pane_t3_cp2

0x462e,	// (0x00023e00) list_single_heading_pane_g1_cp2_ParamLimits

0x462e,	// (0x00023e00) list_single_heading_pane_g1_cp2

0x463a,	// (0x00023e0c) list_single_heading_pane_g2_cp2

0x4642,	// (0x00023e14) list_single_heading_pane_t1_cp2_ParamLimits

0x4642,	// (0x00023e14) list_single_heading_pane_t1_cp2

0xdb1a,	// (0x0002d2ec) list_single_heading_pane_t2_cp2_ParamLimits

0xdb1a,	// (0x0002d2ec) list_single_heading_pane_t2_cp2

0x5e80,	// (0x00025652) list_double_graphic_pane_g1_cp2_ParamLimits

0x5e80,	// (0x00025652) list_double_graphic_pane_g1_cp2

0x5e8c,	// (0x0002565e) list_double_graphic_pane_g2_cp2_ParamLimits

0x5e8c,	// (0x0002565e) list_double_graphic_pane_g2_cp2

0x5e9b,	// (0x0002566d) list_double_graphic_pane_g3_cp2

0x5ea3,	// (0x00025675) list_double_graphic_pane_t1_cp2_ParamLimits

0x5ea3,	// (0x00025675) list_double_graphic_pane_t1_cp2

0x5eb9,	// (0x0002568b) list_double_graphic_pane_t2_cp2_ParamLimits

0x5eb9,	// (0x0002568b) list_double_graphic_pane_t2_cp2

0x46df,	// (0x00023eb1) list_double_number_pane_g1_cp2_ParamLimits

0x46df,	// (0x00023eb1) list_double_number_pane_g1_cp2

0x46eb,	// (0x00023ebd) list_double_number_pane_g2_cp2

0xdad2,	// (0x0002d2a4) list_double_number_pane_t1_cp2_ParamLimits

0xdad2,	// (0x0002d2a4) list_double_number_pane_t1_cp2

0x5e58,	// (0x0002562a) list_double_number_pane_t2_cp2_ParamLimits

0x5e58,	// (0x0002562a) list_double_number_pane_t2_cp2

0x5e6e,	// (0x00025640) list_double_number_pane_t3_cp2_ParamLimits

0x5e6e,	// (0x00025640) list_double_number_pane_t3_cp2

0xda20,	// (0x0002d1f2) list_single_graphic_pane_g1_cp2_ParamLimits

0xda20,	// (0x0002d1f2) list_single_graphic_pane_g1_cp2

0x4743,	// (0x00023f15) list_single_graphic_pane_g2_cp2_ParamLimits

0x4743,	// (0x00023f15) list_single_graphic_pane_g2_cp2

0x474f,	// (0x00023f21) list_single_graphic_pane_g3_cp2

0x5d03,	// (0x000254d5) list_single_graphic_pane_t1_cp2_ParamLimits

0x5d03,	// (0x000254d5) list_single_graphic_pane_t1_cp2

0x4743,	// (0x00023f15) list_single_number_pane_g1_cp2_ParamLimits

0x4743,	// (0x00023f15) list_single_number_pane_g1_cp2

0x474f,	// (0x00023f21) list_single_number_pane_g2_cp2

0x5d03,	// (0x000254d5) list_single_number_pane_t1_cp2_ParamLimits

0x5d03,	// (0x000254d5) list_single_number_pane_t1_cp2

0xda0c,	// (0x0002d1de) list_single_number_pane_t2_cp2_ParamLimits

0xda0c,	// (0x0002d1de) list_single_number_pane_t2_cp2

0xd3a5,	// (0x0002cb77) list_double2_pane_g1_cp2_ParamLimits

0xd3a5,	// (0x0002cb77) list_double2_pane_g1_cp2

0x455d,	// (0x00023d2f) list_double2_pane_g2_cp2

0x46b7,	// (0x00023e89) list_double2_pane_t1_cp2_ParamLimits

0x46b7,	// (0x00023e89) list_double2_pane_t1_cp2

0x46cd,	// (0x00023e9f) list_double2_pane_t2_cp2_ParamLimits

0x46cd,	// (0x00023e9f) list_double2_pane_t2_cp2

0x46df,	// (0x00023eb1) list_double_pane_g1_cp2_ParamLimits

0x46df,	// (0x00023eb1) list_double_pane_g1_cp2

0x46eb,	// (0x00023ebd) list_double_pane_g2_cp2

0x46f3,	// (0x00023ec5) list_double_pane_t1_cp2_ParamLimits

0x46f3,	// (0x00023ec5) list_double_pane_t1_cp2

0x4709,	// (0x00023edb) list_double_pane_t2_cp2_ParamLimits

0x4709,	// (0x00023edb) list_double_pane_t2_cp2

0x4733,	// (0x00023f05) list_single_pane_cp2_g3

0x4743,	// (0x00023f15) list_single_pane_g1_cp2_ParamLimits

0x4743,	// (0x00023f15) list_single_pane_g1_cp2

0x474f,	// (0x00023f21) list_single_pane_g2_cp2

0x4757,	// (0x00023f29) list_single_pane_t1_cp2_ParamLimits

0x4757,	// (0x00023f29) list_single_pane_t1_cp2

0xd40b,	// (0x0002cbdd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd40b,	// (0x0002cbdd) list_single_large_graphic_pane_g1_cp2

0x477b,	// (0x00023f4d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x477b,	// (0x00023f4d) list_single_large_graphic_pane_g2_cp2

0x4787,	// (0x00023f59) list_single_large_graphic_pane_g3_cp2

0x478f,	// (0x00023f61) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x478f,	// (0x00023f61) list_single_large_graphic_pane_g4_cp1

0x47a9,	// (0x00023f7b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x47a9,	// (0x00023f7b) list_single_large_graphic_pane_t1_cp2

0x5ccf,	// (0x000254a1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5ccf,	// (0x000254a1) list_single_graphic_heading_pane_g1_cp2

0xd9e7,	// (0x0002d1b9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd9e7,	// (0x0002d1b9) list_single_graphic_heading_pane_g4_cp2

0x474f,	// (0x00023f21) list_single_graphic_heading_pane_g5_cp2

0x5cdb,	// (0x000254ad) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5cdb,	// (0x000254ad) list_single_graphic_heading_pane_t1_cp2

0xd9f8,	// (0x0002d1ca) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd9f8,	// (0x0002d1ca) list_single_graphic_heading_pane_t2_cp2

0x5c90,	// (0x00025462) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5c90,	// (0x00025462) list_single_2graphic_pane_g1_cp2

0xd9e7,	// (0x0002d1b9) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd9e7,	// (0x0002d1b9) list_single_2graphic_pane_g2_cp2

0x474f,	// (0x00023f21) list_single_2graphic_pane_g3_cp2

0x5cad,	// (0x0002547f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5cad,	// (0x0002547f) list_single_2graphic_pane_g4_cp2

0x5cb9,	// (0x0002548b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5cb9,	// (0x0002548b) list_single_2graphic_pane_t1_cp2

0x322b,	// (0x000229fd) list_highlight_pane_g10_cp1

0x5868,	// (0x0002503a) list_highlight_pane_g1_cp1

0x5870,	// (0x00025042) list_highlight_pane_g2_cp1

0x5878,	// (0x0002504a) list_highlight_pane_g3_cp1

0x5880,	// (0x00025052) list_highlight_pane_g4_cp1

0x5888,	// (0x0002505a) list_highlight_pane_g5_cp1

0x5890,	// (0x00025062) list_highlight_pane_g6_cp1

0x5898,	// (0x0002506a) list_highlight_pane_g7_cp1

0x58a0,	// (0x00025072) list_highlight_pane_g8_cp1

0x58a8,	// (0x0002507a) list_highlight_pane_g9_cp1

0xd9ad,	// (0x0002d17f) form_field_slider_pane_t3

0xd9bb,	// (0x0002d18d) form_field_slider_pane_t4

0x57a4,	// (0x00024f76) slider_form_pane_ParamLimits

0x57a4,	// (0x00024f76) slider_form_pane

0x3235,	// (0x00022a07) control_abbreviations

0x3235,	// (0x00022a07) control_conventions

0x3235,	// (0x00022a07) control_definitions

0x3235,	// (0x00022a07) format_table_attribute

0x5f82,	// (0x00025754) bg_popup_preview_window_pane_g9

0x3235,	// (0x00022a07) format_table_data2

0x3235,	// (0x00022a07) format_table_data3

0x3235,	// (0x00022a07) format_table_data_example

0x0008,

0x3235,	// (0x00022a07) intro_purpose

0xf8e9,	// (0x0002f0bb) bg_popup_preview_window_pane_g

0x3235,	// (0x00022a07) texts_category

0x3235,	// (0x00022a07) texts_graphics

0x47bf,	// (0x00023f91) text_digital

0x47ce,	// (0x00023fa0) text_primary

0x47dd,	// (0x00023faf) text_primary_small

0x47ec,	// (0x00023fbe) text_secondary

0x47fb,	// (0x00023fcd) text_title

0x66f6,	// (0x00025ec8) bg_passive_tab_pane_g1_cp3_srt

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp3_srt

0x66ff,	// (0x00025ed1) bg_passive_tab_pane_g3_cp3_srt

0x3590,	// (0x00022d62) bg_active_tab_pane_cp3_srt_ParamLimits

0x3590,	// (0x00022d62) bg_active_tab_pane_cp3_srt

0x6708,	// (0x00025eda) tabs_4_active_pane_srt_g1

0xdddf,	// (0x0002d5b1) tabs_4_active_pane_srt_t1_ParamLimits

0xdddf,	// (0x0002d5b1) tabs_4_active_pane_srt_t1

0x66f6,	// (0x00025ec8) bg_active_tab_pane_g1_cp3_copy1

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp3_copy1

0x66ff,	// (0x00025ed1) bg_active_tab_pane_g3_cp3_copy1

0x3315,	// (0x00022ae7) tabs_2_long_active_pane_srt_ParamLimits

0x3315,	// (0x00022ae7) tabs_2_long_active_pane_srt

0x3315,	// (0x00022ae7) tabs_2_long_passive_pane_srt_ParamLimits

0x3315,	// (0x00022ae7) tabs_2_long_passive_pane_srt

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp4_srt

0x63c6,	// (0x00025b98) bg_passive_tab_pane_g1_cp4_srt

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp4_srt

0x63cf,	// (0x00025ba1) bg_passive_tab_pane_g3_cp4_srt

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp4_srt_ParamLimits

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp4_srt

0xdc09,	// (0x0002d3db) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdc09,	// (0x0002d3db) tabs_2_long_active_pane_srt_t1

0x63c6,	// (0x00025b98) bg_active_tab_pane_g1_cp4_srt

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp4_srt

0x63cf,	// (0x00025ba1) bg_active_tab_pane_g3_cp4_srt

0x3590,	// (0x00022d62) tabs_3_long_active_pane_srt_ParamLimits

0x3590,	// (0x00022d62) tabs_3_long_active_pane_srt

0x3590,	// (0x00022d62) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3590,	// (0x00022d62) tabs_3_long_passive_pane_cp_srt

0x3590,	// (0x00022d62) tabs_3_long_passive_pane_srt_ParamLimits

0x3590,	// (0x00022d62) tabs_3_long_passive_pane_srt

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp5_srt

0x44e1,	// (0x00023cb3) bg_passive_tab_pane_g1_cp5_srt

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp5_srt

0x44ea,	// (0x00023cbc) bg_passive_tab_pane_g3_cp5_srt

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp5_srt_ParamLimits

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp5_srt

0xdbf3,	// (0x0002d3c5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdbf3,	// (0x0002d3c5) tabs_3_long_active_pane_srt_t1

0x44e1,	// (0x00023cb3) bg_active_tab_pane_g1_cp5_srt

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp5_srt

0x44ea,	// (0x00023cbc) bg_active_tab_pane_g3_cp5_srt

0x63a6,	// (0x00025b78) navi_text_pane_srt_t1

0x639e,	// (0x00025b70) navi_icon_pane_srt_g1

0x49c2,	// (0x00024194) midp_editing_number_pane_srt

0x480a,	// (0x00023fdc) midp_ticker_pane_srt

0x49ca,	// (0x0002419c) midp_ticker_pane_srt_g1

0x49d2,	// (0x000241a4) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002ef4a) midp_ticker_pane_srt_g

0x49da,	// (0x000241ac) midp_ticker_pane_srt_t1

0x638f,	// (0x00025b61) midp_editing_number_pane_t1_copy1

0x4b4a,	// (0x0002431c) listscroll_midp_pane

0x4b4a,	// (0x0002431c) midp_form_pane

0x4874,	// (0x00024046) midp_info_popup_window_ParamLimits

0x4874,	// (0x00024046) midp_info_popup_window

0x3c2d,	// (0x000233ff) bg_popup_sub_pane_cp50_ParamLimits

0x3c2d,	// (0x000233ff) bg_popup_sub_pane_cp50

0x5494,	// (0x00024c66) listscroll_midp_info_pane_ParamLimits

0x5494,	// (0x00024c66) listscroll_midp_info_pane

0x547c,	// (0x00024c4e) listscroll_form_midp_pane_ParamLimits

0x547c,	// (0x00024c4e) listscroll_form_midp_pane

0x5488,	// (0x00024c5a) scroll_bar_cp050

0xd9a1,	// (0x0002d173) list_midp_pane

0x7146,	// (0x00026918) signal_pane_g2_cp

0x5396,	// (0x00024b68) listscroll_midp_info_pane_t1_ParamLimits

0x5396,	// (0x00024b68) listscroll_midp_info_pane_t1

0x53ae,	// (0x00024b80) listscroll_midp_info_pane_t2_ParamLimits

0x53ae,	// (0x00024b80) listscroll_midp_info_pane_t2

0x53ec,	// (0x00024bbe) listscroll_midp_info_pane_t3_ParamLimits

0x53ec,	// (0x00024bbe) listscroll_midp_info_pane_t3

0x5426,	// (0x00024bf8) listscroll_midp_info_pane_t4_ParamLimits

0x5426,	// (0x00024bf8) listscroll_midp_info_pane_t4

0x0003,

0xf824,	// (0x0002eff6) listscroll_midp_info_pane_t_ParamLimits

0xf824,	// (0x0002eff6) listscroll_midp_info_pane_t

0x3cf1,	// (0x000234c3) scroll_pane_cp21

0x5334,	// (0x00024b06) form_midp_field_choice_group_pane

0x533d,	// (0x00024b0f) form_midp_field_text_pane

0x537c,	// (0x00024b4e) form_midp_field_time_pane

0x5384,	// (0x00024b56) form_midp_gauge_slider_pane

0x538d,	// (0x00024b5f) form_midp_gauge_wait_pane

0x3235,	// (0x00022a07) form_midp_image_pane

0xba5a,	// (0x0002b22c) list_single_midp_pane_ParamLimits

0xba5a,	// (0x0002b22c) list_single_midp_pane

0xd97f,	// (0x0002d151) form_midp_field_text_pane_t1

0x50b6,	// (0x00024888) input_focus_pane_cp050

0x5323,	// (0x00024af5) list_midp_form_text_pane

0x52bb,	// (0x00024a8d) form_midp_field_choice_group_pane_t1

0x52c9,	// (0x00024a9b) input_focus_pane_cp051

0x52dd,	// (0x00024aaf) list_midp_choice_pane

0x3235,	// (0x00022a07) status_idle_pane

0x529f,	// (0x00024a71) form_midp_field_time_pane_t1

0x322b,	// (0x000229fd) wait_anim_pane_g2_copy1

0x52ad,	// (0x00024a7f) form_midp_field_time_pane_t2

0x0001,

0x4922,	// (0x000240f4) aid_navinavi_width_2_pane

0xf81f,	// (0x0002eff1) form_midp_field_time_pane_t

0x3235,	// (0x00022a07) input_focus_pane_cp052

0x3235,	// (0x00022a07) bg_input_focus_pane_cp040

0x525f,	// (0x00024a31) form_midp_gauge_slider_pane_t1

0x526d,	// (0x00024a3f) form_midp_gauge_slider_pane_t2

0xd963,	// (0x0002d135) form_midp_gauge_slider_pane_t3

0xd971,	// (0x0002d143) form_midp_gauge_slider_pane_t4

0x0003,

0xf816,	// (0x0002efe8) form_midp_gauge_slider_pane_t

0x5297,	// (0x00024a69) form_midp_slider_pane

0x3315,	// (0x00022ae7) bg_input_focus_pane_cp041_ParamLimits

0x3315,	// (0x00022ae7) bg_input_focus_pane_cp041

0x522c,	// (0x000249fe) form_midp_gauge_wait_pane_t1_ParamLimits

0x522c,	// (0x000249fe) form_midp_gauge_wait_pane_t1

0x523e,	// (0x00024a10) form_midp_gauge_wait_pane_t2_ParamLimits

0x523e,	// (0x00024a10) form_midp_gauge_wait_pane_t2

0x0001,

0xf811,	// (0x0002efe3) form_midp_gauge_wait_pane_t_ParamLimits

0xf811,	// (0x0002efe3) form_midp_gauge_wait_pane_t

0x5250,	// (0x00024a22) form_midp_wait_pane_ParamLimits

0x5250,	// (0x00024a22) form_midp_wait_pane

0x51f6,	// (0x000249c8) form_midp_image_pane_g1

0x51ff,	// (0x000249d1) form_midp_image_pane_t1

0x520e,	// (0x000249e0) form_midp_image_pane_t2

0x521d,	// (0x000249ef) form_midp_image_pane_t3

0x0002,

0xf80a,	// (0x0002efdc) form_midp_image_pane_t

0x51ed,	// (0x000249bf) list_single_midp_pane_g1

0x0898,	// (0x0002006a) list_single_midp_pane_t1

0xd94e,	// (0x0002d120) list_midp_form_item_pane_ParamLimits

0xd94e,	// (0x0002d120) list_midp_form_item_pane

0x48ca,	// (0x0002409c) list_midp_form_item_pane_t1

0x48d9,	// (0x000240ab) midp_ticker_pane_g1

0x48e5,	// (0x000240b7) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002ef30) midp_ticker_pane_g

0x48f1,	// (0x000240c3) midp_ticker_pane_t1

0x65e0,	// (0x00025db2) midp_editing_number_pane_t1

0x65be,	// (0x00025d90) midp_editing_number_pane

0x65cd,	// (0x00025d9f) midp_ticker_pane

0x637f,	// (0x00025b51) ai_message_heading_pane

0x3235,	// (0x00022a07) bg_popup_window_pane_cp14

0x6387,	// (0x00025b59) listscroll_ai_message_pane

0x6309,	// (0x00025adb) ai_message_heading_pane_g1_ParamLimits

0x6309,	// (0x00025adb) ai_message_heading_pane_g1

0x6315,	// (0x00025ae7) ai_message_heading_pane_g2_ParamLimits

0x6315,	// (0x00025ae7) ai_message_heading_pane_g2

0x6321,	// (0x00025af3) ai_message_heading_pane_g3_ParamLimits

0x6321,	// (0x00025af3) ai_message_heading_pane_g3

0x632d,	// (0x00025aff) ai_message_heading_pane_g4_ParamLimits

0x632d,	// (0x00025aff) ai_message_heading_pane_g4

0x0003,

0xf94b,	// (0x0002f11d) ai_message_heading_pane_g_ParamLimits

0xf94b,	// (0x0002f11d) ai_message_heading_pane_g

0x6339,	// (0x00025b0b) ai_message_heading_pane_t1_ParamLimits

0x6339,	// (0x00025b0b) ai_message_heading_pane_t1

0x6353,	// (0x00025b25) ai_message_heading_pane_t2_ParamLimits

0x6353,	// (0x00025b25) ai_message_heading_pane_t2

0x0001,

0xf954,	// (0x0002f126) ai_message_heading_pane_t_ParamLimits

0xf954,	// (0x0002f126) ai_message_heading_pane_t

0x6365,	// (0x00025b37) bg_popup_heading_pane_cp1_ParamLimits

0x6365,	// (0x00025b37) bg_popup_heading_pane_cp1

0x62f7,	// (0x00025ac9) list_ai_message_pane_ParamLimits

0x62f7,	// (0x00025ac9) list_ai_message_pane

0x3cf1,	// (0x000234c3) scroll_pane_cp10

0x6293,	// (0x00025a65) list_ai_message_pane_g1

0x629b,	// (0x00025a6d) list_ai_message_pane_g2

0x0001,

0xf928,	// (0x0002f0fa) list_ai_message_pane_g

0x62a3,	// (0x00025a75) list_ai_message_pane_t1_ParamLimits

0x62a3,	// (0x00025a75) list_ai_message_pane_t1

0x62b8,	// (0x00025a8a) list_ai_message_pane_t2_ParamLimits

0x62b8,	// (0x00025a8a) list_ai_message_pane_t2

0x62cd,	// (0x00025a9f) list_ai_message_pane_t3_ParamLimits

0x62cd,	// (0x00025a9f) list_ai_message_pane_t3

0x62e2,	// (0x00025ab4) list_ai_message_pane_t4_ParamLimits

0x62e2,	// (0x00025ab4) list_ai_message_pane_t4

0x0003,

0xf92d,	// (0x0002f0ff) list_ai_message_pane_t_ParamLimits

0xf92d,	// (0x0002f0ff) list_ai_message_pane_t

0xdbaa,	// (0x0002d37c) cell_ai_soft_ind_pane_ParamLimits

0xdbaa,	// (0x0002d37c) cell_ai_soft_ind_pane

0x4903,	// (0x000240d5) cell_ai_soft_ind_pane_g1_ParamLimits

0x4903,	// (0x000240d5) cell_ai_soft_ind_pane_g1

0x3235,	// (0x00022a07) grid_highlight_cp1

0x4910,	// (0x000240e2) text_secondary_cp56_ParamLimits

0x4910,	// (0x000240e2) text_secondary_cp56

0x6253,	// (0x00025a25) example_general_pane_ParamLimits

0x6253,	// (0x00025a25) example_general_pane

0x625f,	// (0x00025a31) example_parent_pane_g1_ParamLimits

0x625f,	// (0x00025a31) example_parent_pane_g1

0x626b,	// (0x00025a3d) example_parent_pane_t1_ParamLimits

0x626b,	// (0x00025a3d) example_parent_pane_t1

0xc593,	// (0x0002bd65) popup_preview_text_window_ParamLimits

0xc593,	// (0x0002bd65) popup_preview_text_window

0x473b,	// (0x00023f0d) list_single_pane_cp2_g4

0x3646,	// (0x00022e18) bg_popup_preview_window_pane_ParamLimits

0x3646,	// (0x00022e18) bg_popup_preview_window_pane

0x5f8a,	// (0x0002575c) popup_preview_text_window_t1_ParamLimits

0x5f8a,	// (0x0002575c) popup_preview_text_window_t1

0x5fa8,	// (0x0002577a) popup_preview_text_window_t2_ParamLimits

0x5fa8,	// (0x0002577a) popup_preview_text_window_t2

0x5ff1,	// (0x000257c3) popup_preview_text_window_t3_ParamLimits

0x5ff1,	// (0x000257c3) popup_preview_text_window_t3

0x6036,	// (0x00025808) popup_preview_text_window_t4_ParamLimits

0x6036,	// (0x00025808) popup_preview_text_window_t4

0x0004,

0xf8fc,	// (0x0002f0ce) popup_preview_text_window_t_ParamLimits

0xf8fc,	// (0x0002f0ce) popup_preview_text_window_t

0x60b4,	// (0x00025886) scroll_pane_cp11

0x5042,	// (0x00024814) bg_popup_preview_window_pane_g1

0x5f4a,	// (0x0002571c) bg_popup_preview_window_pane_g2

0x5f52,	// (0x00025724) bg_popup_preview_window_pane_g3

0x5f5a,	// (0x0002572c) bg_popup_preview_window_pane_g4

0x5f62,	// (0x00025734) bg_popup_preview_window_pane_g5

0x5f6a,	// (0x0002573c) bg_popup_preview_window_pane_g6

0x5f72,	// (0x00025744) bg_popup_preview_window_pane_g7

0x5f7a,	// (0x0002574c) bg_popup_preview_window_pane_g8

0x1087,	// (0x00020859) aid_popup_width_pane

0xc50f,	// (0x0002bce1) popup_midp_note_alarm_window_ParamLimits

0xc50f,	// (0x0002bce1) popup_midp_note_alarm_window

0x3b75,	// (0x00023347) data_form_pane_ParamLimits

0xb8c0,	// (0x0002b092) form_field_data_pane_g1

0xb8ca,	// (0x0002b09c) form_field_data_pane_t1_ParamLimits

0x3b81,	// (0x00023353) input_focus_pane_ParamLimits

0x0529,	// (0x0001fcfb) data_form_wide_pane_ParamLimits

0x053a,	// (0x0001fd0c) form_field_data_wide_pane_g1

0x0546,	// (0x0001fd18) form_field_data_wide_pane_t1_ParamLimits

0x38f2,	// (0x000230c4) input_focus_pane_cp6_ParamLimits

0xd178,	// (0x0002c94a) input_popup_find_pane_g1_ParamLimits

0xd178,	// (0x0002c94a) input_popup_find_pane_g1

0x15ef,	// (0x00020dc1) aid_navi_side_left_pane

0x1604,	// (0x00020dd6) aid_navi_side_right_pane

0x5963,	// (0x00025135) bg_popup_window_pane_cp30_ParamLimits

0x5963,	// (0x00025135) bg_popup_window_pane_cp30

0x59dd,	// (0x000251af) popup_midp_note_alarm_window_g1_ParamLimits

0x59dd,	// (0x000251af) popup_midp_note_alarm_window_g1

0x5a0d,	// (0x000251df) popup_midp_note_alarm_window_t1_ParamLimits

0x5a0d,	// (0x000251df) popup_midp_note_alarm_window_t1

0x5aae,	// (0x00025280) popup_midp_note_alarm_window_t2_ParamLimits

0x5aae,	// (0x00025280) popup_midp_note_alarm_window_t2

0x5b5c,	// (0x0002532e) popup_midp_note_alarm_window_t3_ParamLimits

0x5b5c,	// (0x0002532e) popup_midp_note_alarm_window_t3

0x5b8e,	// (0x00025360) popup_midp_note_alarm_window_t4_ParamLimits

0x5b8e,	// (0x00025360) popup_midp_note_alarm_window_t4

0x5bb4,	// (0x00025386) popup_midp_note_alarm_window_t5_ParamLimits

0x5bb4,	// (0x00025386) popup_midp_note_alarm_window_t5

0x000a,

0xf899,	// (0x0002f06b) popup_midp_note_alarm_window_t_ParamLimits

0xf899,	// (0x0002f06b) popup_midp_note_alarm_window_t

0x5c60,	// (0x00025432) wait_bar_pane_cp1_ParamLimits

0x5c60,	// (0x00025432) wait_bar_pane_cp1

0x3235,	// (0x00022a07) wait_anim_pane_copy1

0x3235,	// (0x00022a07) wait_border_pane_copy1

0x5649,	// (0x00024e1b) wait_border_pane_g1_copy1

0x0560,	// (0x0001fd32) form_field_popup_pane_g1

0xb8e4,	// (0x0002b0b6) form_field_popup_pane_t1_ParamLimits

0x3b81,	// (0x00023353) input_focus_pane_cp7_ParamLimits

0x3baf,	// (0x00023381) list_form_pane_ParamLimits

0x0580,	// (0x0001fd52) form_field_popup_wide_pane_g1

0x0588,	// (0x0001fd5a) form_field_popup_wide_pane_t1_ParamLimits

0x3b81,	// (0x00023353) input_focus_pane_cp8_ParamLimits

0x3bbb,	// (0x0002338d) list_form_wide_pane_ParamLimits

0x6782,	// (0x00025f54) aid_size_cell_graphic_pane

0xb963,	// (0x0002b135) data_form_pane_t1_ParamLimits

0xba83,	// (0x0002b255) data_form_wide_pane_t1_ParamLimits

0xd5d9,	// (0x0002cdab) bg_status_flat_pane

0xbf00,	// (0x0002b6d2) title_pane_t1_ParamLimits

0x32dd,	// (0x00022aaf) title_pane_t2_ParamLimits

0x3303,	// (0x00022ad5) title_pane_t3_ParamLimits

0xf55d,	// (0x0002ed2f) title_pane_t_ParamLimits

0x416e,	// (0x00023940) level_1_signal_ParamLimits

0x4180,	// (0x00023952) level_2_signal_ParamLimits

0x4193,	// (0x00023965) level_3_signal_ParamLimits

0x41a6,	// (0x00023978) level_4_signal_ParamLimits

0x41b9,	// (0x0002398b) level_5_signal_ParamLimits

0x41cc,	// (0x0002399e) level_6_signal_ParamLimits

0x41df,	// (0x000239b1) level_7_signal_ParamLimits

0x416e,	// (0x00023940) level_1_battery_ParamLimits

0x4180,	// (0x00023952) level_2_battery_ParamLimits

0x4193,	// (0x00023965) level_3_battery_ParamLimits

0x41a6,	// (0x00023978) level_4_battery_ParamLimits

0x41b9,	// (0x0002398b) level_5_battery_ParamLimits

0x41cc,	// (0x0002399e) level_6_battery_ParamLimits

0x41df,	// (0x000239b1) level_7_battery_ParamLimits

0x5868,	// (0x0002503a) bg_status_flat_pane_g1

0x5870,	// (0x00025042) bg_status_flat_pane_g2

0x5878,	// (0x0002504a) bg_status_flat_pane_g3

0x5880,	// (0x00025052) bg_status_flat_pane_g4

0x5888,	// (0x0002505a) bg_status_flat_pane_g5

0x5890,	// (0x00025062) bg_status_flat_pane_g6

0x5898,	// (0x0002506a) bg_status_flat_pane_g7

0xbf94,	// (0x0002b766) tabs_3_active_pane_t1_ParamLimits

0xbf94,	// (0x0002b766) tabs_3_passive_pane_t1_ParamLimits

0xbfae,	// (0x0002b780) tabs_4_active_pane_t1_ParamLimits

0xbfae,	// (0x0002b780) tabs_4_1_passive_pane_t1_ParamLimits

0xd18e,	// (0x0002c960) tabs_2_active_pane_t1_ParamLimits

0xd18e,	// (0x0002c960) tabs_2_passive_pane_t1_ParamLimits

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp4_ParamLimits

0xd1a0,	// (0x0002c972) tabs_2_long_active_pane_t1_ParamLimits

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp4_ParamLimits

0x20fc,	// (0x000218ce) list_single_midp_graphic_pane_t1_ParamLimits

0x3315,	// (0x00022ae7) bg_active_tab_pane_cp5_ParamLimits

0xd1b3,	// (0x0002c985) tabs_3_long_active_pane_t1_ParamLimits

0x4b4a,	// (0x0002431c) bg_passive_tab_pane_cp5_ParamLimits

0x20fc,	// (0x000218ce) list_single_midp_graphic_pane_t1

0xd5d9,	// (0x0002cdab) bg_status_flat_pane_ParamLimits

0x4ce0,	// (0x000244b2) indicator_pane_cp2_ParamLimits

0x4ce0,	// (0x000244b2) indicator_pane_cp2

0xd751,	// (0x0002cf23) navi_pane_srt_ParamLimits

0xd751,	// (0x0002cf23) navi_pane_srt

0x4e29,	// (0x000245fb) popup_clock_digital_analogue_window_cp1

0x33f2,	// (0x00022bc4) indicator_pane_t1

0x480a,	// (0x00023fdc) copy_highlight_pane

0x480a,	// (0x00023fdc) cursor_graphics_pane

0x480a,	// (0x00023fdc) graphic_within_text_pane

0x480a,	// (0x00023fdc) link_highlight_pane

0x6077,	// (0x00025849) popup_preview_text_window_t5_ParamLimits

0x6077,	// (0x00025849) popup_preview_text_window_t5

0x492a,	// (0x000240fc) cursor_digital_pane

0x492a,	// (0x000240fc) cursor_primary_pane

0x493b,	// (0x0002410d) cursor_primary_small_pane

0x4943,	// (0x00024115) cursor_secondary_pane

0x494b,	// (0x0002411d) cursor_title_pane

0x492a,	// (0x000240fc) link_highlight_digital_pane

0x4932,	// (0x00024104) link_highlight_primary_pane

0x493b,	// (0x0002410d) link_highlight_primary_small_pane

0x4943,	// (0x00024115) link_highlight_secondary_pane

0x494b,	// (0x0002411d) link_highlight_title_pane

0x492a,	// (0x000240fc) copy_highlight_digital_pane

0x492a,	// (0x000240fc) copy_highlight_primary_pane

0x493b,	// (0x0002410d) copy_highlight_primary_small_pane

0x4943,	// (0x00024115) copy_highlight_secondary_pane

0x494b,	// (0x0002411d) copy_highlight_title_pane

0x4943,	// (0x00024115) graphic_text_digital_pane

0x5906,	// (0x000250d8) graphic_text_primary_pane

0x590f,	// (0x000250e1) graphic_text_primary_small_pane

0x493b,	// (0x0002410d) graphic_text_secondary_pane

0x492a,	// (0x000240fc) graphic_text_title_pane

0xd4b0,	// (0x0002cc82) cursor_primary_pane_g1

0x58f8,	// (0x000250ca) cursor_text_primary_t1

0xd9dd,	// (0x0002d1af) cursor_primary_small_pane_g1

0x58ea,	// (0x000250bc) cursor_text_primary_small_t1

0xd9d3,	// (0x0002d1a5) cursor_primary_small_pane_g1_copy1

0x58d2,	// (0x000250a4) cursor_text_primary_small_t1_copy1

0x58b0,	// (0x00025082) cursor_text_title_t1

0xd9c9,	// (0x0002d19b) cursor_title_pane_g1

0xd4b0,	// (0x0002cc82) cursor_digital_pane_g1

0x495d,	// (0x0002412f) cursor_text_digital_t1

0x4982,	// (0x00024154) link_highlight_primary_pane_g1

0x5859,	// (0x0002502b) link_highlight_primary_pane_t1

0x496b,	// (0x0002413d) link_highlight_primary_small_pane_g1

0x4973,	// (0x00024145) link_highlight_primary_small_pane_t1

0x4982,	// (0x00024154) link_highlight_secondary_pane_g1

0x498a,	// (0x0002415c) link_highlight_secondary_pane_t1

0x57cd,	// (0x00024f9f) link_highlight_title_pane_g1

0x57d5,	// (0x00024fa7) link_highlight_title_pane_t1

0x57b6,	// (0x00024f88) link_highlight_digital_pane_g1

0x57be,	// (0x00024f90) link_highlight_digital_pane_t1

0x568e,	// (0x00024e60) copy_highlight_primary_pane_g1

0x5696,	// (0x00024e68) copy_highlight_primary_pane_t1

0x5668,	// (0x00024e3a) copy_highlight_primary_small_pane_g1

0x567f,	// (0x00024e51) copy_highlight_primary_small_pane_t1

0x4999,	// (0x0002416b) copy_highlight_secondary_pane_g1

0x49a1,	// (0x00024173) copy_highlight_secondary_pane_t1

0x5668,	// (0x00024e3a) copy_highlight_title_pane_g1

0x5670,	// (0x00024e42) copy_highlight_title_pane_t1

0x568e,	// (0x00024e60) copy_highlight_digital_pane_g1

0x694c,	// (0x0002611e) copy_highlight_digital_pane_t1

0x68a0,	// (0x00026072) graphic_text_primary_pane_g1

0x6930,	// (0x00026102) graphic_text_primary_pane_t1

0x693e,	// (0x00026110) graphic_text_primary_pane_t2

0x0001,

0xf9c8,	// (0x0002f19a) graphic_text_primary_pane_t

0x690c,	// (0x000260de) graphic_text_primary_small_pane_g1

0x6914,	// (0x000260e6) graphic_text_primary_small_pane_t1

0x6922,	// (0x000260f4) graphic_text_primary_small_pane_t2

0x0001,

0xf9c3,	// (0x0002f195) graphic_text_primary_small_pane_t

0x68e8,	// (0x000260ba) graphic_text_secondary_pane_g1

0x68f0,	// (0x000260c2) graphic_text_secondary_pane_t1

0x68fe,	// (0x000260d0) graphic_text_secondary_pane_t2

0x0001,

0xf9be,	// (0x0002f190) graphic_text_secondary_pane_t

0x68c4,	// (0x00026096) graphic_text_title_pane_g1

0x68cc,	// (0x0002609e) graphic_text_title_pane_t1

0x68da,	// (0x000260ac) graphic_text_title_pane_t2

0x0001,

0xf9b9,	// (0x0002f18b) graphic_text_title_pane_t

0x68a0,	// (0x00026072) graphic_text_digital_pane_g1

0x68a8,	// (0x0002607a) graphic_text_digital_pane_t1

0x68b6,	// (0x00026088) graphic_text_digital_pane_t2

0x0001,

0xf9b4,	// (0x0002f186) graphic_text_digital_pane_t

0x3315,	// (0x00022ae7) navi_icon_pane_srt_ParamLimits

0x3315,	// (0x00022ae7) navi_icon_pane_srt

0x3235,	// (0x00022a07) navi_midp_pane_srt

0x3235,	// (0x00022a07) navi_navi_pane_srt

0x3315,	// (0x00022ae7) navi_text_pane_srt_ParamLimits

0x3315,	// (0x00022ae7) navi_text_pane_srt

0x686b,	// (0x0002603d) navi_navi_icon_text_pane_srt

0x6873,	// (0x00026045) navi_navi_pane_srt_g1_ParamLimits

0x6873,	// (0x00026045) navi_navi_pane_srt_g1

0x6885,	// (0x00026057) navi_navi_pane_srt_g2_ParamLimits

0x6885,	// (0x00026057) navi_navi_pane_srt_g2

0x0001,

0xf9af,	// (0x0002f181) navi_navi_pane_srt_g_ParamLimits

0xf9af,	// (0x0002f181) navi_navi_pane_srt_g

0x6897,	// (0x00026069) navi_navi_tabs_pane_srt

0x686b,	// (0x0002603d) navi_navi_text_pane_srt

0x686b,	// (0x0002603d) navi_navi_volume_pane_srt

0x685c,	// (0x0002602e) navi_navi_text_pane_srt_t1

0x2434,	// (0x00021c06) navi_navi_volume_pane_srt_g1

0x243c,	// (0x00021c0e) volume_small_pane_srt_ParamLimits

0x243c,	// (0x00021c0e) volume_small_pane_srt

0x18cf,	// (0x000210a1) volume_small_pane_srt_g1_ParamLimits

0x18cf,	// (0x000210a1) volume_small_pane_srt_g1

0x18df,	// (0x000210b1) volume_small_pane_srt_g2_ParamLimits

0x18df,	// (0x000210b1) volume_small_pane_srt_g2

0x18f0,	// (0x000210c2) volume_small_pane_srt_g3_ParamLimits

0x18f0,	// (0x000210c2) volume_small_pane_srt_g3

0x1901,	// (0x000210d3) volume_small_pane_srt_g4_ParamLimits

0x1901,	// (0x000210d3) volume_small_pane_srt_g4

0x1912,	// (0x000210e4) volume_small_pane_srt_g5_ParamLimits

0x1912,	// (0x000210e4) volume_small_pane_srt_g5

0x1923,	// (0x000210f5) volume_small_pane_srt_g6_ParamLimits

0x1923,	// (0x000210f5) volume_small_pane_srt_g6

0x1934,	// (0x00021106) volume_small_pane_srt_g7_ParamLimits

0x1934,	// (0x00021106) volume_small_pane_srt_g7

0x1945,	// (0x00021117) volume_small_pane_srt_g8_ParamLimits

0x1945,	// (0x00021117) volume_small_pane_srt_g8

0x1956,	// (0x00021128) volume_small_pane_srt_g9_ParamLimits

0x1956,	// (0x00021128) volume_small_pane_srt_g9

0x1967,	// (0x00021139) volume_small_pane_srt_g10_ParamLimits

0x1967,	// (0x00021139) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002ef35) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002ef35) volume_small_pane_srt_g

0x36ef,	// (0x00022ec1) query_popup_data_pane_cp2

0x6842,	// (0x00026014) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6842,	// (0x00026014) navi_navi_icon_text_pane_srt_t1

0x5906,	// (0x000250d8) navi_tabs_2_long_pane_srt

0x5906,	// (0x000250d8) navi_tabs_2_pane_srt

0x5906,	// (0x000250d8) navi_tabs_3_long_pane_srt

0x5906,	// (0x000250d8) navi_tabs_3_pane_srt

0x5906,	// (0x000250d8) navi_tabs_4_pane_srt

0x2414,	// (0x00021be6) tabs_2_active_pane_srt_ParamLimits

0x2414,	// (0x00021be6) tabs_2_active_pane_srt

0x2424,	// (0x00021bf6) tabs_2_passive_pane_srt_ParamLimits

0x2424,	// (0x00021bf6) tabs_2_passive_pane_srt

0x50b6,	// (0x00024888) bg_passive_tab_pane_cp1_srt_ParamLimits

0x50b6,	// (0x00024888) bg_passive_tab_pane_cp1_srt

0x680e,	// (0x00025fe0) bg_passive_tab_pane_g1_cp1_srt

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp1_srt

0x6817,	// (0x00025fe9) bg_passive_tab_pane_g3_cp1_srt

0x3590,	// (0x00022d62) bg_active_tab_pane_cp1_srt_ParamLimits

0x3590,	// (0x00022d62) bg_active_tab_pane_cp1_srt

0x6820,	// (0x00025ff2) tabs_2_active_pane_srt_g1

0xde5c,	// (0x0002d62e) tabs_2_active_pane_srt_t1_ParamLimits

0xde5c,	// (0x0002d62e) tabs_2_active_pane_srt_t1

0x680e,	// (0x00025fe0) bg_active_tab_pane_g1_cp1_srt

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp1_srt

0x6817,	// (0x00025fe9) bg_active_tab_pane_g3_cp1_srt

0x23e1,	// (0x00021bb3) tabs_3_active_pane_srt_ParamLimits

0x23e1,	// (0x00021bb3) tabs_3_active_pane_srt

0x23f2,	// (0x00021bc4) tabs_3_passive_pane_cp_srt_ParamLimits

0x23f2,	// (0x00021bc4) tabs_3_passive_pane_cp_srt

0x2403,	// (0x00021bd5) tabs_3_passive_pane_srt_ParamLimits

0x2403,	// (0x00021bd5) tabs_3_passive_pane_srt

0x50b6,	// (0x00024888) bg_passive_tab_pane_cp2_srt_ParamLimits

0x50b6,	// (0x00024888) bg_passive_tab_pane_cp2_srt

0x49b0,	// (0x00024182) bg_passive_tab_pane_g1_cp2_srt

0x4457,	// (0x00023c29) bg_passive_tab_pane_g2_cp2_srt

0x49b9,	// (0x0002418b) bg_passive_tab_pane_g3_cp2_srt

0x3590,	// (0x00022d62) bg_active_tab_pane_cp2_srt_ParamLimits

0x3590,	// (0x00022d62) bg_active_tab_pane_cp2_srt

0x67f4,	// (0x00025fc6) tabs_3_active_pane_srt_g1

0xde46,	// (0x0002d618) tabs_3_active_pane_srt_t1_ParamLimits

0xde46,	// (0x0002d618) tabs_3_active_pane_srt_t1

0x49b0,	// (0x00024182) bg_active_tab_pane_g1_cp2_srt

0x4457,	// (0x00023c29) bg_active_tab_pane_g2_cp2_srt

0x49b9,	// (0x0002418b) bg_active_tab_pane_g3_cp2_srt

0x2399,	// (0x00021b6b) tabs_4_active_pane_srt_ParamLimits

0x2399,	// (0x00021b6b) tabs_4_active_pane_srt

0x23ab,	// (0x00021b7d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x23ab,	// (0x00021b7d) tabs_4_passive_pane_cp2_srt

0x1acc,	// (0x0002129e) aid_size_cell_toolbar

0x6437,	// (0x00025c09) main_idle_act_pane_ParamLimits

0x1c63,	// (0x00021435) popup_large_graphic_colour_window_ParamLimits

0xc81f,	// (0x0002bff1) popup_toolbar_window_ParamLimits

0xc81f,	// (0x0002bff1) popup_toolbar_window

0x6631,	// (0x00025e03) list_single_graphic_2heading_pane_ParamLimits

0x6631,	// (0x00025e03) list_single_graphic_2heading_pane

0x3f21,	// (0x000236f3) aid_size_cell_apps_grid_lsc_pane

0x3f33,	// (0x00023705) aid_size_cell_apps_grid_prt_pane

0x4b4a,	// (0x0002431c) bg_wml_button_pane_cp1_ParamLimits

0x4b4a,	// (0x0002431c) bg_wml_button_pane_cp1

0xd97f,	// (0x0002d151) form_midp_field_text_pane_t1_ParamLimits

0x50b6,	// (0x00024888) input_focus_pane_cp050_ParamLimits

0x5323,	// (0x00024af5) list_midp_form_text_pane_ParamLimits

0x52c9,	// (0x00024a9b) input_focus_pane_cp051_ParamLimits

0x52dd,	// (0x00024aaf) list_midp_choice_pane_ParamLimits

0xd91c,	// (0x0002d0ee) list_single_2graphic_pane_cp3_ParamLimits

0xd91c,	// (0x0002d0ee) list_single_2graphic_pane_cp3

0xd92f,	// (0x0002d101) list_single_midp_graphic_pane_ParamLimits

0xd92f,	// (0x0002d101) list_single_midp_graphic_pane

0x0774,	// (0x0001ff46) list_single_graphic_2heading_pane_g1_ParamLimits

0x0774,	// (0x0001ff46) list_single_graphic_2heading_pane_g1

0x0780,	// (0x0001ff52) list_single_graphic_2heading_pane_g4_ParamLimits

0x0780,	// (0x0001ff52) list_single_graphic_2heading_pane_g4

0x078c,	// (0x0001ff5e) list_single_graphic_2heading_pane_g5_ParamLimits

0x078c,	// (0x0001ff5e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002ef88) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002ef88) list_single_graphic_2heading_pane_g

0x0798,	// (0x0001ff6a) list_single_graphic_2heading_pane_t1_ParamLimits

0x0798,	// (0x0001ff6a) list_single_graphic_2heading_pane_t1

0x07ac,	// (0x0001ff7e) list_single_graphic_2heading_pane_t2_ParamLimits

0x07ac,	// (0x0001ff7e) list_single_graphic_2heading_pane_t2

0x07c8,	// (0x0001ff9a) list_single_graphic_2heading_pane_t3_ParamLimits

0x07c8,	// (0x0001ff9a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002ef8f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002ef8f) list_single_graphic_2heading_pane_t

0x4f80,	// (0x00024752) bg_popup_sub_pane_cp2

0x4faa,	// (0x0002477c) grid_toobar_pane

0x2077,	// (0x00021849) cell_toolbar_pane_ParamLimits

0x2077,	// (0x00021849) cell_toolbar_pane

0x4fe6,	// (0x000247b8) cell_toolbar_pane_g1_ParamLimits

0x4fe6,	// (0x000247b8) cell_toolbar_pane_g1

0x4ffa,	// (0x000247cc) cell_toolbar_pane_g2_ParamLimits

0x4ffa,	// (0x000247cc) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x0002ef96) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x0002ef96) cell_toolbar_pane_g

0x501c,	// (0x000247ee) grid_highlight_pane_cp2_ParamLimits

0x501c,	// (0x000247ee) grid_highlight_pane_cp2

0x5036,	// (0x00024808) toolbar_button_pane

0x5042,	// (0x00024814) toolbar_button_pane_g1

0x504a,	// (0x0002481c) toolbar_button_pane_g2

0x5052,	// (0x00024824) toolbar_button_pane_g3

0x505a,	// (0x0002482c) toolbar_button_pane_g4

0x5062,	// (0x00024834) toolbar_button_pane_g5

0x506a,	// (0x0002483c) toolbar_button_pane_g6

0x5072,	// (0x00024844) toolbar_button_pane_g7

0x507a,	// (0x0002484c) toolbar_button_pane_g8

0x5082,	// (0x00024854) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x0002ef9b) toolbar_button_pane_g

0x20af,	// (0x00021881) list_single_2graphic_pane_g1_cp3_ParamLimits

0x20af,	// (0x00021881) list_single_2graphic_pane_g1_cp3

0xc877,	// (0x0002c049) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc877,	// (0x0002c049) list_single_2graphic_pane_g2_cp3

0x20cc,	// (0x0002189e) list_single_2graphic_pane_g3_cp3

0x20d4,	// (0x000218a6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x20d4,	// (0x000218a6) list_single_2graphic_pane_g4_cp3

0x20e0,	// (0x000218b2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x20e0,	// (0x000218b2) list_single_2graphic_pane_t1_cp3

0x555f,	// (0x00024d31) list_single_midp_graphic_pane_g2_ParamLimits

0x555f,	// (0x00024d31) list_single_midp_graphic_pane_g2

0x1ad4,	// (0x000212a6) aid_zoom_text_primary

0x0748,	// (0x0001ff1a) aid_zoom_text_secondary

0x4a6d,	// (0x0002423f) status_small_pane_g7_ParamLimits

0x4a6d,	// (0x0002423f) status_small_pane_g7

0x4a90,	// (0x00024262) status_small_pane_t1_ParamLimits

0xbedc,	// (0x0002b6ae) title_pane_g2

0x0003,

0xf554,	// (0x0002ed26) title_pane_g

0xd08b,	// (0x0002c85d) aid_size_cell_colour_1_pane_ParamLimits

0xd08b,	// (0x0002c85d) aid_size_cell_colour_1_pane

0xd09f,	// (0x0002c871) aid_size_cell_colour_2_pane_ParamLimits

0xd09f,	// (0x0002c871) aid_size_cell_colour_2_pane

0xd0b3,	// (0x0002c885) aid_size_cell_colour_3_pane_ParamLimits

0xd0b3,	// (0x0002c885) aid_size_cell_colour_3_pane

0xd0c7,	// (0x0002c899) aid_size_cell_colour_4_pane_ParamLimits

0xd0c7,	// (0x0002c899) aid_size_cell_colour_4_pane

0x152c,	// (0x00020cfe) title_pane_stacon_g1_ParamLimits

0x152c,	// (0x00020cfe) title_pane_stacon_g1

0x56ed,	// (0x00024ebf) popup_note_wait_window_g3_ParamLimits

0x56ed,	// (0x00024ebf) popup_note_wait_window_g3

0x5763,	// (0x00024f35) popup_note_wait_window_t5_ParamLimits

0x5763,	// (0x00024f35) popup_note_wait_window_t5

0x3235,	// (0x00022a07) main_feb_china_hwr_fs_writing_pane

0xc22d,	// (0x0002b9ff) popup_feb_china_hwr_fs_window_ParamLimits

0xc22d,	// (0x0002b9ff) popup_feb_china_hwr_fs_window

0xc888,	// (0x0002c05a) aid_size_cell_hwr_fs_ParamLimits

0xc888,	// (0x0002c05a) aid_size_cell_hwr_fs

0x50b6,	// (0x00024888) bg_popup_sub_pane_cp3_ParamLimits

0x50b6,	// (0x00024888) bg_popup_sub_pane_cp3

0xc89d,	// (0x0002c06f) grid_hwr_fs_pane_ParamLimits

0xc89d,	// (0x0002c06f) grid_hwr_fs_pane

0x213f,	// (0x00021911) linegrid_hwr_fs_pane_ParamLimits

0x213f,	// (0x00021911) linegrid_hwr_fs_pane

0xc8b5,	// (0x0002c087) cell_hwr_fs_pane_ParamLimits

0xc8b5,	// (0x0002c087) cell_hwr_fs_pane

0x50c2,	// (0x00024894) linegrid_hwr_fs_pane_g1_ParamLimits

0x50c2,	// (0x00024894) linegrid_hwr_fs_pane_g1

0xd8f0,	// (0x0002d0c2) linegrid_hwr_fs_pane_g2_ParamLimits

0xd8f0,	// (0x0002d0c2) linegrid_hwr_fs_pane_g2

0x50e0,	// (0x000248b2) linegrid_hwr_fs_pane_g3_ParamLimits

0x50e0,	// (0x000248b2) linegrid_hwr_fs_pane_g3

0x2171,	// (0x00021943) linegrid_hwr_fs_pane_g4_ParamLimits

0x2171,	// (0x00021943) linegrid_hwr_fs_pane_g4

0x218b,	// (0x0002195d) linegrid_hwr_fs_pane_g5_ParamLimits

0x218b,	// (0x0002195d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ef,	// (0x0002efc1) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x0002efc1) linegrid_hwr_fs_pane_g

0x50ec,	// (0x000248be) cell_hwr_fs_pane_g1_ParamLimits

0x50ec,	// (0x000248be) cell_hwr_fs_pane_g1

0x4eb7,	// (0x00024689) cell_hwr_fs_pane_g2_ParamLimits

0x4eb7,	// (0x00024689) cell_hwr_fs_pane_g2

0xd902,	// (0x0002d0d4) cell_hwr_fs_pane_g3_ParamLimits

0xd902,	// (0x0002d0d4) cell_hwr_fs_pane_g3

0xd90f,	// (0x0002d0e1) cell_hwr_fs_pane_g4_ParamLimits

0xd90f,	// (0x0002d0e1) cell_hwr_fs_pane_g4

0x0003,

0xf7fa,	// (0x0002efcc) cell_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0002efcc) cell_hwr_fs_pane_g

0xc8db,	// (0x0002c0ad) cell_hwr_fs_pane_t1

0x3235,	// (0x00022a07) grid_highlight_pane_cp6

0x3235,	// (0x00022a07) main_idle_act2_pane

0x3cd8,	// (0x000234aa) aid_inside_area_popup_secondary

0xda44,	// (0x0002d216) aid_inside_area_window_primary_ParamLimits

0xda44,	// (0x0002d216) aid_inside_area_window_primary

0x695b,	// (0x0002612d) ai2_news_ticker_pane

0x6963,	// (0x00026135) aid_size_cell_ai1_link_ParamLimits

0x6963,	// (0x00026135) aid_size_cell_ai1_link

0xde72,	// (0x0002d644) popup_ai2_data_window_ParamLimits

0xde72,	// (0x0002d644) popup_ai2_data_window

0x6993,	// (0x00026165) popup_ai2_link_window_ParamLimits

0x6993,	// (0x00026165) popup_ai2_link_window

0x50b6,	// (0x00024888) bg_popup_sub_pane_cp4_ParamLimits

0x50b6,	// (0x00024888) bg_popup_sub_pane_cp4

0x69a7,	// (0x00026179) grid_ai2_link_pane_ParamLimits

0x69a7,	// (0x00026179) grid_ai2_link_pane

0x69be,	// (0x00026190) popup_ai2_link_window_g1_ParamLimits

0x69be,	// (0x00026190) popup_ai2_link_window_g1

0x69ca,	// (0x0002619c) popup_ai2_link_window_g2_ParamLimits

0x69ca,	// (0x0002619c) popup_ai2_link_window_g2

0x0001,

0xf9cd,	// (0x0002f19f) popup_ai2_link_window_g_ParamLimits

0xf9cd,	// (0x0002f19f) popup_ai2_link_window_g

0x69d9,	// (0x000261ab) ai2_mp_button_pane

0x69e1,	// (0x000261b3) ai2_mp_volume_pane

0x52c9,	// (0x00024a9b) bg_popup_sub_pane_cp5_ParamLimits

0x52c9,	// (0x00024a9b) bg_popup_sub_pane_cp5

0x69e9,	// (0x000261bb) heading_ai2_gene_pane_ParamLimits

0x69e9,	// (0x000261bb) heading_ai2_gene_pane

0x69f5,	// (0x000261c7) list_ai2_gene_pane_ParamLimits

0x69f5,	// (0x000261c7) list_ai2_gene_pane

0x6a3d,	// (0x0002620f) cell_ai2_link_pane_ParamLimits

0x6a3d,	// (0x0002620f) cell_ai2_link_pane

0x6a53,	// (0x00026225) cell_ai2_link_pane_g1

0x3235,	// (0x00022a07) grid_highlight_pane_cp7

0x2451,	// (0x00021c23) ai2_mp_volume_pane_g1

0x6b23,	// (0x000262f5) ai2_mp_volume_pane_g2

0xde9c,	// (0x0002d66e) list_ai2_gene_pane_t1

0x6b2b,	// (0x000262fd) ai2_mp_volume_pane_g3

0x0002,

0xf9e6,	// (0x0002f1b8) ai2_mp_volume_pane_g

0x2459,	// (0x00021c2b) volume_small_pane_cp3

0x6b33,	// (0x00026305) aid_size_cell_ai2_button

0x6b3b,	// (0x0002630d) grid_ai2_button_pane

0x6b44,	// (0x00026316) cell_ai2_button_pane_ParamLimits

0x6b44,	// (0x00026316) cell_ai2_button_pane

0x322b,	// (0x000229fd) cell_ai2_button_pane_g1

0x3235,	// (0x00022a07) grid_highlight_pane_cp8

0x6ae3,	// (0x000262b5) ai2_gene_pane_t1_ParamLimits

0x6ae3,	// (0x000262b5) ai2_gene_pane_t1

0xc1b7,	// (0x0002b989) aid_height_parent_landscape

0xdc20,	// (0x0002d3f2) aid_height_set_list

0x6437,	// (0x00025c09) aid_size_parent

0x6782,	// (0x00025f54) aid_size_cell_graphic_pane_ParamLimits

0x6a05,	// (0x000261d7) popup_ai2_data_window_g1_ParamLimits

0x6a05,	// (0x000261d7) popup_ai2_data_window_g1

0x6a11,	// (0x000261e3) ai2_news_ticker_pane_g1

0x6a19,	// (0x000261eb) ai2_news_ticker_pane_g2

0x0001,

0xf9d2,	// (0x0002f1a4) ai2_news_ticker_pane_g

0x6a21,	// (0x000261f3) ai2_news_ticker_pane_t1

0x6a2f,	// (0x00026201) ai2_news_ticker_pane_t2

0x0001,

0xf9d7,	// (0x0002f1a9) ai2_news_ticker_pane_t

0x6a5c,	// (0x0002622e) heading_ai2_gene_pane_g1

0x6a64,	// (0x00026236) heading_ai2_gene_pane_t1_ParamLimits

0x6a64,	// (0x00026236) heading_ai2_gene_pane_t1

0x6a79,	// (0x0002624b) list_highlight_pane_cp6

0xde86,	// (0x0002d658) ai2_gene_pane_ParamLimits

0xde86,	// (0x0002d658) ai2_gene_pane

0xdeaa,	// (0x0002d67c) list_ai2_gene_pane_t2

0x0001,

0xf9dc,	// (0x0002f1ae) list_ai2_gene_pane_t

0x6ab4,	// (0x00026286) list_highlight_pane_cp8_ParamLimits

0x6ab4,	// (0x00026286) list_highlight_pane_cp8

0x6ac5,	// (0x00026297) ai2_gene_pane_g1_ParamLimits

0x6ac5,	// (0x00026297) ai2_gene_pane_g1

0x6ad7,	// (0x000262a9) ai2_gene_pane_g2_ParamLimits

0x6ad7,	// (0x000262a9) ai2_gene_pane_g2

0x0001,

0xf9e1,	// (0x0002f1b3) ai2_gene_pane_g_ParamLimits

0xf9e1,	// (0x0002f1b3) ai2_gene_pane_g

0x3b17,	// (0x000232e9) scroll_pane_cp12

0xc176,	// (0x0002b948) control_pane_t3_ParamLimits

0xc176,	// (0x0002b948) control_pane_t3

0x4a81,	// (0x00024253) status_small_pane_g8_ParamLimits

0x4a81,	// (0x00024253) status_small_pane_g8

0xc2c2,	// (0x0002ba94) popup_find_window_ParamLimits

0xc549,	// (0x0002bd1b) popup_note_image_window_ParamLimits

0x0774,	// (0x0001ff46) list_double2_graphic_pane_vc_g1_ParamLimits

0x0774,	// (0x0001ff46) list_double2_graphic_pane_vc_g1

0x0780,	// (0x0001ff52) list_double2_graphic_pane_vc_g2_ParamLimits

0x0780,	// (0x0001ff52) list_double2_graphic_pane_vc_g2

0x078c,	// (0x0001ff5e) list_double2_graphic_pane_vc_g3_ParamLimits

0x078c,	// (0x0001ff5e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002ef88) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002ef88) list_double2_graphic_pane_vc_g

0x07e0,	// (0x0001ffb2) list_double2_graphic_pane_vc_t1_ParamLimits

0x07e0,	// (0x0001ffb2) list_double2_graphic_pane_vc_t1

0x0780,	// (0x0001ff52) list_single_heading_pane_vc_g1_ParamLimits

0x0780,	// (0x0001ff52) list_single_heading_pane_vc_g1

0x078c,	// (0x0001ff5e) list_single_heading_pane_vc_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_single_heading_pane_vc_g

0x07f6,	// (0x0001ffc8) list_single_heading_pane_vc_t1_ParamLimits

0x07f6,	// (0x0001ffc8) list_single_heading_pane_vc_t1

0x080e,	// (0x0001ffe0) list_single_heading_pane_vc_t2_ParamLimits

0x080e,	// (0x0001ffe0) list_single_heading_pane_vc_t2

0x0001,

0xf7de,	// (0x0002efb0) list_single_heading_pane_vc_t_ParamLimits

0xf7de,	// (0x0002efb0) list_single_heading_pane_vc_t

0x0822,	// (0x0001fff4) list_setting_number_pane_vc_g1_ParamLimits

0x0822,	// (0x0001fff4) list_setting_number_pane_vc_g1

0x082e,	// (0x00020000) list_setting_number_pane_vc_g2_ParamLimits

0x082e,	// (0x00020000) list_setting_number_pane_vc_g2

0x0001,

0xf7e3,	// (0x0002efb5) list_setting_number_pane_vc_g_ParamLimits

0xf7e3,	// (0x0002efb5) list_setting_number_pane_vc_g

0x083a,	// (0x0002000c) list_setting_number_pane_vc_t1_ParamLimits

0x083a,	// (0x0002000c) list_setting_number_pane_vc_t1

0x084e,	// (0x00020020) list_setting_number_pane_vc_t2_ParamLimits

0x084e,	// (0x00020020) list_setting_number_pane_vc_t2

0x086a,	// (0x0002003c) list_setting_number_pane_vc_t3_ParamLimits

0x086a,	// (0x0002003c) list_setting_number_pane_vc_t3

0x0002,

0xf7e8,	// (0x0002efba) list_setting_number_pane_vc_t_ParamLimits

0xf7e8,	// (0x0002efba) list_setting_number_pane_vc_t

0x0888,	// (0x0002005a) set_value_pane_vc_ParamLimits

0x0888,	// (0x0002005a) set_value_pane_vc

0x6631,	// (0x00025e03) list_double2_graphic_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double2_graphic_pane_vc

0x6631,	// (0x00025e03) list_double2_large_graphic_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double2_large_graphic_pane_vc

0x6631,	// (0x00025e03) list_double2_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double2_pane_vc

0x6631,	// (0x00025e03) list_double_graphic_heading_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double_graphic_heading_pane_vc

0x6631,	// (0x00025e03) list_double_graphic_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double_graphic_pane_vc

0x6631,	// (0x00025e03) list_double_heading_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double_heading_pane_vc

0x6631,	// (0x00025e03) list_double_large_graphic_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double_large_graphic_pane_vc

0x6631,	// (0x00025e03) list_double_number_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double_number_pane_vc

0x6631,	// (0x00025e03) list_double_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double_pane_vc

0x6631,	// (0x00025e03) list_double_time_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_double_time_pane_vc

0x6631,	// (0x00025e03) list_setting_number_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_setting_number_pane_vc

0x6631,	// (0x00025e03) list_setting_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_setting_pane_vc

0x6631,	// (0x00025e03) list_single_graphic_heading_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_single_graphic_heading_pane_vc

0x6631,	// (0x00025e03) list_single_heading_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_single_heading_pane_vc

0x6631,	// (0x00025e03) list_single_number_heading_pane_vc_ParamLimits

0x6631,	// (0x00025e03) list_single_number_heading_pane_vc

0x0774,	// (0x0001ff46) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0774,	// (0x0001ff46) list_double_graphic_heading_pane_vc_g1

0x0780,	// (0x0001ff52) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0780,	// (0x0001ff52) list_double_graphic_heading_pane_vc_g2

0x078c,	// (0x0001ff5e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x078c,	// (0x0001ff5e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b6,	// (0x0002ef88) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002ef88) list_double_graphic_heading_pane_vc_g

0x09e2,	// (0x000201b4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x09e2,	// (0x000201b4) list_double_graphic_heading_pane_vc_t1

0x09fe,	// (0x000201d0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x09fe,	// (0x000201d0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ed,	// (0x0002f1bf) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ed,	// (0x0002f1bf) list_double_graphic_heading_pane_vc_t

0x0822,	// (0x0001fff4) list_setting_pane_vc_g1_ParamLimits

0x0822,	// (0x0001fff4) list_setting_pane_vc_g1

0x082e,	// (0x00020000) list_setting_pane_vc_g2_ParamLimits

0x082e,	// (0x00020000) list_setting_pane_vc_g2

0x0001,

0xf7e3,	// (0x0002efb5) list_setting_pane_vc_g_ParamLimits

0xf7e3,	// (0x0002efb5) list_setting_pane_vc_g

0x0a1c,	// (0x000201ee) list_setting_pane_vc_t1_ParamLimits

0x0a1c,	// (0x000201ee) list_setting_pane_vc_t1

0x0a38,	// (0x0002020a) list_setting_pane_vc_t2_ParamLimits

0x0a38,	// (0x0002020a) list_setting_pane_vc_t2

0x0001,

0xfa30,	// (0x0002f202) list_setting_pane_vc_t_ParamLimits

0xfa30,	// (0x0002f202) list_setting_pane_vc_t

0x0888,	// (0x0002005a) set_value_pane_cp_vc_ParamLimits

0x0888,	// (0x0002005a) set_value_pane_cp_vc

0x0780,	// (0x0001ff52) list_single_number_heading_pane_vc_g1_ParamLimits

0x0780,	// (0x0001ff52) list_single_number_heading_pane_vc_g1

0x078c,	// (0x0001ff5e) list_single_number_heading_pane_vc_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_single_number_heading_pane_vc_g

0x07f6,	// (0x0001ffc8) list_single_number_heading_pane_vc_t1_ParamLimits

0x07f6,	// (0x0001ffc8) list_single_number_heading_pane_vc_t1

0x0a54,	// (0x00020226) list_single_number_heading_pane_vc_t2_ParamLimits

0x0a54,	// (0x00020226) list_single_number_heading_pane_vc_t2

0x0a68,	// (0x0002023a) list_single_number_heading_pane_vc_t3_ParamLimits

0x0a68,	// (0x0002023a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa35,	// (0x0002f207) list_single_number_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0002f207) list_single_number_heading_pane_vc_t

0x0774,	// (0x0001ff46) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0774,	// (0x0001ff46) list_single_graphic_heading_pane_vc_g1

0x0780,	// (0x0001ff52) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0780,	// (0x0001ff52) list_single_graphic_heading_pane_vc_g4

0x078c,	// (0x0001ff5e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x078c,	// (0x0001ff5e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x0002ef88) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x0002ef88) list_single_graphic_heading_pane_vc_g

0x07f6,	// (0x0001ffc8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x07f6,	// (0x0001ffc8) list_single_graphic_heading_pane_vc_t1

0x0a7a,	// (0x0002024c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0a7a,	// (0x0002024c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0002f20e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0002f20e) list_single_graphic_heading_pane_vc_t

0x0780,	// (0x0001ff52) list_double2_pane_vc_g1_ParamLimits

0x0780,	// (0x0001ff52) list_double2_pane_vc_g1

0x078c,	// (0x0001ff5e) list_double2_pane_vc_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_double2_pane_vc_g

0x0a8e,	// (0x00020260) list_double2_pane_vc_t1_ParamLimits

0x0a8e,	// (0x00020260) list_double2_pane_vc_t1

0x0aa4,	// (0x00020276) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0aa4,	// (0x00020276) list_double2_large_graphic_pane_vc_g1

0x0780,	// (0x0001ff52) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0780,	// (0x0001ff52) list_double2_large_graphic_pane_vc_g2

0x078c,	// (0x0001ff5e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x078c,	// (0x0001ff5e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0002edbd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0002edbd) list_double2_large_graphic_pane_vc_g

0x0ab0,	// (0x00020282) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0ab0,	// (0x00020282) list_double2_large_graphic_pane_vc_t1

0x0ac6,	// (0x00020298) list_double_time_pane_vc_g1_ParamLimits

0x0ac6,	// (0x00020298) list_double_time_pane_vc_g1

0x0ad2,	// (0x000202a4) list_double_time_pane_vc_g2_ParamLimits

0x0ad2,	// (0x000202a4) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0002f213) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0002f213) list_double_time_pane_vc_g

0x0ade,	// (0x000202b0) list_double_time_pane_vc_t1_ParamLimits

0x0ade,	// (0x000202b0) list_double_time_pane_vc_t1

0x0b02,	// (0x000202d4) list_double_time_pane_vc_t2_ParamLimits

0x0b02,	// (0x000202d4) list_double_time_pane_vc_t2

0x0b51,	// (0x00020323) list_double_time_pane_vc_t3_ParamLimits

0x0b51,	// (0x00020323) list_double_time_pane_vc_t3

0x0b63,	// (0x00020335) list_double_time_pane_vc_t4_ParamLimits

0x0b63,	// (0x00020335) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0002f218) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0002f218) list_double_time_pane_vc_t

0x0780,	// (0x0001ff52) list_double_pane_vc_g1_ParamLimits

0x0780,	// (0x0001ff52) list_double_pane_vc_g1

0x078c,	// (0x0001ff5e) list_double_pane_vc_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_double_pane_vc_g

0x0b77,	// (0x00020349) list_double_pane_vc_t1_ParamLimits

0x0b77,	// (0x00020349) list_double_pane_vc_t1

0x0b8b,	// (0x0002035d) list_double_pane_vc_t2_ParamLimits

0x0b8b,	// (0x0002035d) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002f221) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002f221) list_double_pane_vc_t

0x0780,	// (0x0001ff52) list_double_number_pane_vc_g1_ParamLimits

0x0780,	// (0x0001ff52) list_double_number_pane_vc_g1

0x078c,	// (0x0001ff5e) list_double_number_pane_vc_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_double_number_pane_vc_g

0x0ba3,	// (0x00020375) list_double_number_pane_vc_t1_ParamLimits

0x0ba3,	// (0x00020375) list_double_number_pane_vc_t1

0x0bb7,	// (0x00020389) list_double_number_pane_vc_t2_ParamLimits

0x0bb7,	// (0x00020389) list_double_number_pane_vc_t2

0x0bcb,	// (0x0002039d) list_double_number_pane_vc_t3_ParamLimits

0x0bcb,	// (0x0002039d) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0002f226) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0002f226) list_double_number_pane_vc_t

0x0be3,	// (0x000203b5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0be3,	// (0x000203b5) list_double_large_graphic_pane_vc_g1

0x0bf4,	// (0x000203c6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0bf4,	// (0x000203c6) list_double_large_graphic_pane_vc_g2

0x078c,	// (0x0001ff5e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x078c,	// (0x0001ff5e) list_double_large_graphic_pane_vc_g3

0x0c03,	// (0x000203d5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0c03,	// (0x000203d5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0002f22d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0002f22d) list_double_large_graphic_pane_vc_g

0x0c0f,	// (0x000203e1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0c0f,	// (0x000203e1) list_double_large_graphic_pane_vc_t1

0x0c28,	// (0x000203fa) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0c28,	// (0x000203fa) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0002f236) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0002f236) list_double_large_graphic_pane_vc_t

0x0780,	// (0x0001ff52) list_double_heading_pane_vc_g1_ParamLimits

0x0780,	// (0x0001ff52) list_double_heading_pane_vc_g1

0x078c,	// (0x0001ff5e) list_double_heading_pane_vc_g2_ParamLimits

0x078c,	// (0x0001ff5e) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002eda0) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002eda0) list_double_heading_pane_vc_g

0x0c41,	// (0x00020413) list_double_heading_pane_vc_t1_ParamLimits

0x0c41,	// (0x00020413) list_double_heading_pane_vc_t1

0x07f6,	// (0x0001ffc8) list_double_heading_pane_vc_t2_ParamLimits

0x07f6,	// (0x0001ffc8) list_double_heading_pane_vc_t2

0x0001,

0xfa69,	// (0x0002f23b) list_double_heading_pane_vc_t_ParamLimits

0xfa69,	// (0x0002f23b) list_double_heading_pane_vc_t

0x0774,	// (0x0001ff46) list_double_graphic_pane_vc_g1_ParamLimits

0x0774,	// (0x0001ff46) list_double_graphic_pane_vc_g1

0x0c55,	// (0x00020427) list_double_graphic_pane_vc_g2_ParamLimits

0x0c55,	// (0x00020427) list_double_graphic_pane_vc_g2

0x0c64,	// (0x00020436) list_double_graphic_pane_vc_g3_ParamLimits

0x0c64,	// (0x00020436) list_double_graphic_pane_vc_g3

0x0002,

0xfa6e,	// (0x0002f240) list_double_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x0002f240) list_double_graphic_pane_vc_g

0x0c70,	// (0x00020442) list_double_graphic_pane_vc_t1_ParamLimits

0x0c70,	// (0x00020442) list_double_graphic_pane_vc_t1

0x0c84,	// (0x00020456) list_double_graphic_pane_vc_t2_ParamLimits

0x0c84,	// (0x00020456) list_double_graphic_pane_vc_t2

0x0001,

0xfa75,	// (0x0002f247) list_double_graphic_pane_vc_t_ParamLimits

0xfa75,	// (0x0002f247) list_double_graphic_pane_vc_t

0x1093,	// (0x00020865) aid_size_cell_fastswap

0xbd28,	// (0x0002b4fa) aid_size_cell_touch_ParamLimits

0xbd28,	// (0x0002b4fa) aid_size_cell_touch

0x12f6,	// (0x00020ac8) popup_fast_swap_wide_window_ParamLimits

0x12f6,	// (0x00020ac8) popup_fast_swap_wide_window

0xbe73,	// (0x0002b645) touch_pane_ParamLimits

0xbe73,	// (0x0002b645) touch_pane

0x3b6d,	// (0x0002333f) button_value_adjust_pane_cp2

0x045b,	// (0x0001fc2d) button_value_adjust_pane_cp4

0x047b,	// (0x0001fc4d) form_field_data_pane_cp2

0xb887,	// (0x0002b059) form_field_data_wide_pane_cp2

0x3fec,	// (0x000237be) bg_scroll_pane_ParamLimits

0x168e,	// (0x00020e60) scroll_handle_pane_ParamLimits

0x16a2,	// (0x00020e74) scroll_sc2_down_pane_ParamLimits

0x16a2,	// (0x00020e74) scroll_sc2_down_pane

0x401d,	// (0x000237ef) scroll_sc2_up_pane_ParamLimits

0x401d,	// (0x000237ef) scroll_sc2_up_pane

0xdfd4,	// (0x0002d7a6) grid_wheel_folder_pane_g1_ParamLimits

0xdfd4,	// (0x0002d7a6) grid_wheel_folder_pane_g1

0x1867,	// (0x00021039) clock_nsta_pane_cp2_ParamLimits

0x1867,	// (0x00021039) clock_nsta_pane_cp2

0x4b4a,	// (0x0002431c) listscroll_midp_pane_ParamLimits

0xd419,	// (0x0002cbeb) midp_canvas_pane

0x4afc,	// (0x000242ce) nsta_clock_indic_pane

0x4b30,	// (0x00024302) listscroll_form_pane_vc

0x4b38,	// (0x0002430a) listscroll_set_pane_vc_ParamLimits

0x4b38,	// (0x0002430a) listscroll_set_pane_vc

0xd601,	// (0x0002cdd3) clock_nsta_pane

0xd62b,	// (0x0002cdfd) indicator_nsta_pane

0x4f80,	// (0x00024752) bg_popup_sub_pane_cp2_ParamLimits

0x4f94,	// (0x00024766) find_pane_cp2_ParamLimits

0x4f94,	// (0x00024766) find_pane_cp2

0x4faa,	// (0x0002477c) grid_toobar_pane_ParamLimits

0x508a,	// (0x0002485c) list_form_gen_pane_vc_ParamLimits

0x508a,	// (0x0002485c) list_form_gen_pane_vc

0x50a0,	// (0x00024872) scroll_pane_cp8_vc_ParamLimits

0x50a0,	// (0x00024872) scroll_pane_cp8_vc

0x511c,	// (0x000248ee) data_form_wide_pane_vc_ParamLimits

0x511c,	// (0x000248ee) data_form_wide_pane_vc

0x5128,	// (0x000248fa) form_field_data_wide_pane_vc_g1

0x5130,	// (0x00024902) form_field_data_wide_pane_vc_t1_ParamLimits

0x5130,	// (0x00024902) form_field_data_wide_pane_vc_t1

0x3b81,	// (0x00023353) input_focus_pane_cp6_vc_ParamLimits

0x3b81,	// (0x00023353) input_focus_pane_cp6_vc

0xd9a1,	// (0x0002d173) list_midp_pane_ParamLimits

0x67e8,	// (0x00025fba) scroll_pane_cp16_ParamLimits

0x67e8,	// (0x00025fba) scroll_pane_cp16

0x54b6,	// (0x00024c88) button_value_adjust_pane_ParamLimits

0x54b6,	// (0x00024c88) button_value_adjust_pane

0xdc31,	// (0x0002d403) button_value_adjust_pane_cp6_ParamLimits

0xdc31,	// (0x0002d403) button_value_adjust_pane_cp6

0xdd4b,	// (0x0002d51d) settings_code_pane_cp_ParamLimits

0xdd4b,	// (0x0002d51d) settings_code_pane_cp

0x322b,	// (0x000229fd) cell_touch_pane_g1

0x322b,	// (0x000229fd) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002eedb) cell_touch_pane_g

0xdeb8,	// (0x0002d68a) cell_touch_pane_cp_ParamLimits

0xdeb8,	// (0x0002d68a) cell_touch_pane_cp

0xded4,	// (0x0002d6a6) cell_touch_pane_ParamLimits

0xded4,	// (0x0002d6a6) cell_touch_pane

0x322b,	// (0x000229fd) scroll_sc2_down_pane_g1

0x322b,	// (0x000229fd) scroll_sc2_up_pane_g1

0x3235,	// (0x00022a07) bg_set_opt_pane_cp4_vc

0x6b78,	// (0x0002634a) list_set_graphic_pane_vc_g1_ParamLimits

0x6b78,	// (0x0002634a) list_set_graphic_pane_vc_g1

0x6b84,	// (0x00026356) list_set_graphic_pane_vc_g2_ParamLimits

0x6b84,	// (0x00026356) list_set_graphic_pane_vc_g2

0x0001,

0xf9f2,	// (0x0002f1c4) list_set_graphic_pane_vc_g_ParamLimits

0xf9f2,	// (0x0002f1c4) list_set_graphic_pane_vc_g

0x6b90,	// (0x00026362) text_primary_small_cp13_vc_ParamLimits

0x6b90,	// (0x00026362) text_primary_small_cp13_vc

0x6ba8,	// (0x0002637a) list_set_graphic_pane_vc_ParamLimits

0x6ba8,	// (0x0002637a) list_set_graphic_pane_vc

0x3235,	// (0x00022a07) input_focus_pane_cp2_vc

0x322b,	// (0x000229fd) setting_code_pane_vc_g1

0x3360,	// (0x00022b32) setting_code_pane_vc_t1

0x6bba,	// (0x0002638c) set_text_pane_vc_t1_ParamLimits

0x6bba,	// (0x0002638c) set_text_pane_vc_t1

0x3235,	// (0x00022a07) input_focus_pane_cp1_vc

0x6bd6,	// (0x000263a8) list_set_text_pane_vc

0x322b,	// (0x000229fd) setting_text_pane_vc_g1

0x3235,	// (0x00022a07) bg_set_opt_pane_cp2_vc

0x3357,	// (0x00022b29) setting_slider_graphic_pane_vc_g1

0x6be0,	// (0x000263b2) setting_slider_graphic_pane_vc_t1

0x6bf0,	// (0x000263c2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f7,	// (0x0002f1c9) setting_slider_graphic_pane_vc_t

0x6c00,	// (0x000263d2) slider_set_pane_cp_vc

0x6c08,	// (0x000263da) slider_set_pane_vc_g1

0x6c11,	// (0x000263e3) slider_set_pane_vc_g2

0x0006,

0xf9fc,	// (0x0002f1ce) slider_set_pane_vc_g

0x3bdc,	// (0x000233ae) set_opt_bg_pane_g1_copy1

0x3be4,	// (0x000233b6) set_opt_bg_pane_g2_copy1

0x6c3d,	// (0x0002640f) set_opt_bg_pane_g3_copy1

0x3bf4,	// (0x000233c6) set_opt_bg_pane_g4_copy1

0x3bfc,	// (0x000233ce) set_opt_bg_pane_g5_copy1

0x3c04,	// (0x000233d6) set_opt_bg_pane_g6_copy1

0x6c47,	// (0x00026419) set_opt_bg_pane_g7_copy1

0x6c4f,	// (0x00026421) set_opt_bg_pane_g8_copy1

0x6c59,	// (0x0002642b) set_opt_bg_pane_g9_copy1

0x3235,	// (0x00022a07) bg_set_opt_pane_cp_vc

0x6c63,	// (0x00026435) setting_slider_pane_vc_t1

0x6c72,	// (0x00026444) setting_slider_pane_vc_t2

0x6c82,	// (0x00026454) setting_slider_pane_vc_t3

0x0002,

0xfa0b,	// (0x0002f1dd) setting_slider_pane_vc_t

0x6c92,	// (0x00026464) slider_set_pane_vc

0x21af,	// (0x00021981) volume_set_pane_vc_g1

0x21b8,	// (0x0002198a) volume_set_pane_vc_g2

0x21c1,	// (0x00021993) volume_set_pane_vc_g3

0x21ca,	// (0x0002199c) volume_set_pane_vc_g4

0x21d3,	// (0x000219a5) volume_set_pane_vc_g5

0x21dc,	// (0x000219ae) volume_set_pane_vc_g6

0x21e5,	// (0x000219b7) volume_set_pane_vc_g7

0x21ee,	// (0x000219c0) volume_set_pane_vc_g8

0x21f7,	// (0x000219c9) volume_set_pane_vc_g9

0x2200,	// (0x000219d2) volume_set_pane_vc_g10

0x0009,

0xfa12,	// (0x0002f1e4) volume_set_pane_vc_g

0x6c9a,	// (0x0002646c) volume_set_pane_vc

0x6ca2,	// (0x00026474) button_value_adjust_pane_cp1_vc

0x6cac,	// (0x0002647e) list_highlight_pane_cp2_vc

0x6cb5,	// (0x00026487) list_set_pane_vc_ParamLimits

0x6cb5,	// (0x00026487) list_set_pane_vc

0x6d13,	// (0x000264e5) main_pane_set_vc_t1_ParamLimits

0x6d13,	// (0x000264e5) main_pane_set_vc_t1

0x6d28,	// (0x000264fa) main_pane_set_vc_t2_ParamLimits

0x6d28,	// (0x000264fa) main_pane_set_vc_t2

0x6d3a,	// (0x0002650c) main_pane_set_vc_t3_ParamLimits

0x6d3a,	// (0x0002650c) main_pane_set_vc_t3

0x6d4e,	// (0x00026520) main_pane_set_vc_t4_ParamLimits

0x6d4e,	// (0x00026520) main_pane_set_vc_t4

0x0003,

0xfa27,	// (0x0002f1f9) main_pane_set_vc_t_ParamLimits

0xfa27,	// (0x0002f1f9) main_pane_set_vc_t

0x6d62,	// (0x00026534) setting_code_pane_vc_ParamLimits

0x6d62,	// (0x00026534) setting_code_pane_vc

0x6d73,	// (0x00026545) setting_slider_graphic_pane_vc

0x6d73,	// (0x00026545) setting_slider_pane_vc

0x6d73,	// (0x00026545) setting_text_pane_vc

0x6d73,	// (0x00026545) setting_volume_pane_vc

0x6d7d,	// (0x0002654f) scroll_pane_cp121_vc

0x3b5b,	// (0x0002332d) set_content_pane_vc

0x6d85,	// (0x00026557) button_value_adjust_pane_g1

0x6d8e,	// (0x00026560) button_value_adjust_pane_g2

0x0001,

0xfa7a,	// (0x0002f24c) button_value_adjust_pane_g

0x6d97,	// (0x00026569) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6d97,	// (0x00026569) form_field_slider_wide_pane_vc_t1

0x6dab,	// (0x0002657d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6dab,	// (0x0002657d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7f,	// (0x0002f251) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7f,	// (0x0002f251) form_field_slider_wide_pane_vc_t

0x3590,	// (0x00022d62) input_focus_pane_cp10_vc_ParamLimits

0x3590,	// (0x00022d62) input_focus_pane_cp10_vc

0x6dd9,	// (0x000265ab) slider_cont_pane_cp1_vc_ParamLimits

0x6dd9,	// (0x000265ab) slider_cont_pane_cp1_vc

0x6deb,	// (0x000265bd) slider_form_pane_g1_cp2

0x6c11,	// (0x000263e3) slider_form_pane_g2_cp2

0x6e18,	// (0x000265ea) form_field_slider_pane_vc_t3

0x6e26,	// (0x000265f8) form_field_slider_pane_vc_t4

0x6e34,	// (0x00026606) slider_form_pane_vc_ParamLimits

0x6e34,	// (0x00026606) slider_form_pane_vc

0x6e41,	// (0x00026613) form_field_slider_pane_vc_t1_ParamLimits

0x6e41,	// (0x00026613) form_field_slider_pane_vc_t1

0x6dab,	// (0x0002657d) form_field_slider_pane_vc_t2_ParamLimits

0x6dab,	// (0x0002657d) form_field_slider_pane_vc_t2

0x0001,

0xfa91,	// (0x0002f263) form_field_slider_pane_vc_t_ParamLimits

0xfa91,	// (0x0002f263) form_field_slider_pane_vc_t

0x3590,	// (0x00022d62) input_focus_pane_cp9_vc_ParamLimits

0x3590,	// (0x00022d62) input_focus_pane_cp9_vc

0x6e5d,	// (0x0002662f) slider_cont_pane_vc_ParamLimits

0x6e5d,	// (0x0002662f) slider_cont_pane_vc

0x6e71,	// (0x00026643) list_form_graphic_pane_cp_vc_ParamLimits

0x6e71,	// (0x00026643) list_form_graphic_pane_cp_vc

0x5128,	// (0x000248fa) form_field_popup_wide_pane_vc_g1

0x6e86,	// (0x00026658) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6e86,	// (0x00026658) form_field_popup_wide_pane_vc_t1

0x3b81,	// (0x00023353) input_focus_pane_cp8_vc_ParamLimits

0x3b81,	// (0x00023353) input_focus_pane_cp8_vc

0x6ecb,	// (0x0002669d) list_form_wide_pane_vc_ParamLimits

0x6ecb,	// (0x0002669d) list_form_wide_pane_vc

0x6ed7,	// (0x000266a9) list_form_graphic_pane_vc_g1

0x6edf,	// (0x000266b1) list_form_graphic_pane_vc_t1_ParamLimits

0x6edf,	// (0x000266b1) list_form_graphic_pane_vc_t1

0x3315,	// (0x00022ae7) list_highlight_pane_cp5_vc_ParamLimits

0x3315,	// (0x00022ae7) list_highlight_pane_cp5_vc

0x6efb,	// (0x000266cd) list_form_graphic_pane_vc_ParamLimits

0x6efb,	// (0x000266cd) list_form_graphic_pane_vc

0x5128,	// (0x000248fa) form_field_popup_pane_vc_g1

0x6f11,	// (0x000266e3) form_field_popup_pane_vc_t1_ParamLimits

0x6f11,	// (0x000266e3) form_field_popup_pane_vc_t1

0x3b81,	// (0x00023353) input_focus_pane_cp7_vc_ParamLimits

0x3b81,	// (0x00023353) input_focus_pane_cp7_vc

0x6f28,	// (0x000266fa) list_form_pane_vc_ParamLimits

0x6f28,	// (0x000266fa) list_form_pane_vc

0x6f34,	// (0x00026706) data_form_pane_vc_t1_ParamLimits

0x6f34,	// (0x00026706) data_form_pane_vc_t1

0x3bdc,	// (0x000233ae) input_focus_pane_vc_g1

0x3be4,	// (0x000233b6) input_focus_pane_vc_g2

0x3bec,	// (0x000233be) input_focus_pane_vc_g3

0x3bf4,	// (0x000233c6) input_focus_pane_vc_g4

0x3bfc,	// (0x000233ce) input_focus_pane_vc_g5

0x3c04,	// (0x000233d6) input_focus_pane_vc_g6

0x3c0c,	// (0x000233de) input_focus_pane_vc_g7

0x3c14,	// (0x000233e6) input_focus_pane_vc_g8

0x3c1c,	// (0x000233ee) input_focus_pane_vc_g9

0x322b,	// (0x000229fd) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002ee64) input_focus_pane_vc_g

0x511c,	// (0x000248ee) data_form_pane_vc_ParamLimits

0x511c,	// (0x000248ee) data_form_pane_vc

0x5128,	// (0x000248fa) form_field_data_pane_vc_g1

0x6f4f,	// (0x00026721) form_field_data_pane_vc_t1_ParamLimits

0x6f4f,	// (0x00026721) form_field_data_pane_vc_t1

0x3b81,	// (0x00023353) input_focus_pane_vc_ParamLimits

0x3b81,	// (0x00023353) input_focus_pane_vc

0x6f69,	// (0x0002673b) button_value_adjust_pane_cp3_vc

0x6f71,	// (0x00026743) button_value_adjust_pane_cp5_vc

0x6f79,	// (0x0002674b) form_field_data_pane_vc_ParamLimits

0x6f79,	// (0x0002674b) form_field_data_pane_vc

0x6f90,	// (0x00026762) form_field_data_pane_vc_cp2

0x6f98,	// (0x0002676a) form_field_data_wide_pane_vc_ParamLimits

0x6f98,	// (0x0002676a) form_field_data_wide_pane_vc

0x6fae,	// (0x00026780) form_field_data_wide_pane_vc_cp2

0x6fb6,	// (0x00026788) form_field_popup_pane_vc_ParamLimits

0x6fb6,	// (0x00026788) form_field_popup_pane_vc

0x6fcd,	// (0x0002679f) form_field_popup_wide_pane_vc_ParamLimits

0x6fcd,	// (0x0002679f) form_field_popup_wide_pane_vc

0x6fe3,	// (0x000267b5) form_field_slider_pane_vc_ParamLimits

0x6fe3,	// (0x000267b5) form_field_slider_pane_vc

0x6ff6,	// (0x000267c8) form_field_slider_wide_pane_vc_ParamLimits

0x6ff6,	// (0x000267c8) form_field_slider_wide_pane_vc

0xdef2,	// (0x0002d6c4) grid_touch_1_pane_ParamLimits

0xdef2,	// (0x0002d6c4) grid_touch_1_pane

0xdf06,	// (0x0002d6d8) grid_touch_2_pane_ParamLimits

0xdf06,	// (0x0002d6d8) grid_touch_2_pane

0x70cb,	// (0x0002689d) touch_pane_g1_ParamLimits

0x70cb,	// (0x0002689d) touch_pane_g1

0x702d,	// (0x000267ff) cell_app_pane_cp_wide_ParamLimits

0x702d,	// (0x000267ff) cell_app_pane_cp_wide

0x703e,	// (0x00026810) grid_popup_fast_wide_pane_ParamLimits

0x703e,	// (0x00026810) grid_popup_fast_wide_pane

0x7052,	// (0x00026824) scroll_pane_cp19_ParamLimits

0x7052,	// (0x00026824) scroll_pane_cp19

0x3235,	// (0x00022a07) bg_popup_window_pane_cp20

0x7066,	// (0x00026838) listscroll_popup_fast_wide_pane

0x3d44,	// (0x00023516) grid_indicator_nsta_pane

0x706e,	// (0x00026840) clock_nsta_pane_g1

0x7077,	// (0x00026849) clock_nsta_pane_t1

0xdf30,	// (0x0002d702) cell_indicator_nsta_pane_ParamLimits

0xdf30,	// (0x0002d702) cell_indicator_nsta_pane

0x70cb,	// (0x0002689d) cell_indicator_nsta_pane_g1

0xdf49,	// (0x0002d71b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa2,	// (0x0002f274) cell_indicator_nsta_pane_g

0x70ef,	// (0x000268c1) clock_nsta_pane_cp

0x70f7,	// (0x000268c9) indicator_nsta_pane_cp

0x70ff,	// (0x000268d1) nsta_clock_indic_pane_g1

0x33de,	// (0x00022bb0) grid_indicator_pane

0x4112,	// (0x000238e4) scroll_pane_cp29

0x17b6,	// (0x00020f88) indicator_nsta_pane_cp2_ParamLimits

0x17b6,	// (0x00020f88) indicator_nsta_pane_cp2

0x3315,	// (0x00022ae7) main_apps_wheel_pane

0x533d,	// (0x00024b0f) form_midp_field_text_pane_ParamLimits

0x5488,	// (0x00024c5a) scroll_bar_cp050_ParamLimits

0x7158,	// (0x0002692a) cell_indicator_pane_ParamLimits

0x7158,	// (0x0002692a) cell_indicator_pane

0x716f,	// (0x00026941) cell_indicator_pane_g1

0xdf5e,	// (0x0002d730) grid_wheel_folder_pane_ParamLimits

0xdf5e,	// (0x0002d730) grid_wheel_folder_pane

0xdf6c,	// (0x0002d73e) list_wheel_apps_pane_ParamLimits

0xdf6c,	// (0x0002d73e) list_wheel_apps_pane

0xdf7a,	// (0x0002d74c) main_apps_wheel_pane_g1_ParamLimits

0xdf7a,	// (0x0002d74c) main_apps_wheel_pane_g1

0xdf86,	// (0x0002d758) main_apps_wheel_pane_g2_ParamLimits

0xdf86,	// (0x0002d758) main_apps_wheel_pane_g2

0x0001,

0xfabe,	// (0x0002f290) main_apps_wheel_pane_g_ParamLimits

0xfabe,	// (0x0002f290) main_apps_wheel_pane_g

0xdf94,	// (0x0002d766) main_apps_wheel_pane_t1_ParamLimits

0xdf94,	// (0x0002d766) main_apps_wheel_pane_t1

0xdfa8,	// (0x0002d77a) list_wheel_apps_pane_g1

0xdfb0,	// (0x0002d782) list_wheel_apps_pane_g2

0xdfb8,	// (0x0002d78a) list_wheel_apps_pane_g3

0xdfc0,	// (0x0002d792) list_wheel_apps_pane_g4

0xdfca,	// (0x0002d79c) list_wheel_apps_pane_g5

0x0004,

0xfac3,	// (0x0002f295) list_wheel_apps_pane_g

0x468a,	// (0x00023e5c) navi_icon_text_pane

0xd4f5,	// (0x0002ccc7) aid_fill_nsta

0xdfe1,	// (0x0002d7b3) navi_icon_text_pane_g1

0x7240,	// (0x00026a12) navi_icon_text_pane_t1

0xd37f,	// (0x0002cb51) list_set_graphic_pane_t1_ParamLimits

0xd37f,	// (0x0002cb51) list_set_graphic_pane_t1

0x5be3,	// (0x000253b5) popup_midp_note_alarm_window_t6_ParamLimits

0x5be3,	// (0x000253b5) popup_midp_note_alarm_window_t6

0x5bf5,	// (0x000253c7) popup_midp_note_alarm_window_t7_ParamLimits

0x5bf5,	// (0x000253c7) popup_midp_note_alarm_window_t7

0x5c07,	// (0x000253d9) popup_midp_note_alarm_window_t8_ParamLimits

0x5c07,	// (0x000253d9) popup_midp_note_alarm_window_t8

0x5c19,	// (0x000253eb) popup_midp_note_alarm_window_t9_ParamLimits

0x5c19,	// (0x000253eb) popup_midp_note_alarm_window_t9

0x5c2b,	// (0x000253fd) popup_midp_note_alarm_window_t10_ParamLimits

0x5c2b,	// (0x000253fd) popup_midp_note_alarm_window_t10

0x5c3d,	// (0x0002540f) popup_midp_note_alarm_window_t11_ParamLimits

0x5c3d,	// (0x0002540f) popup_midp_note_alarm_window_t11

0x5c4f,	// (0x00025421) scroll_pane_cp17_ParamLimits

0x5c4f,	// (0x00025421) scroll_pane_cp17

0x21af,	// (0x00021981) volume_small_pane_cp_g1

0x2462,	// (0x00021c34) volume_small_pane_cp_g2

0x246b,	// (0x00021c3d) volume_small_pane_cp_g3

0x2474,	// (0x00021c46) volume_small_pane_cp_g4

0x247d,	// (0x00021c4f) volume_small_pane_cp_g5

0x2486,	// (0x00021c58) volume_small_pane_cp_g6

0x248f,	// (0x00021c61) volume_small_pane_cp_g7

0x2498,	// (0x00021c6a) volume_small_pane_cp_g8

0x24a1,	// (0x00021c73) volume_small_pane_cp_g9

0x24aa,	// (0x00021c7c) volume_small_pane_cp_g10

0x48d9,	// (0x000240ab) midp_ticker_pane_g1_ParamLimits

0x48e5,	// (0x000240b7) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002ef30) midp_ticker_pane_g_ParamLimits

0x48f1,	// (0x000240c3) midp_ticker_pane_t1_ParamLimits

0xd519,	// (0x0002cceb) aid_fill_nsta_2

0x5474,	// (0x00024c46) list_form2_midp_pane

0x65be,	// (0x00025d90) midp_editing_number_pane_ParamLimits

0x65cd,	// (0x00025d9f) midp_ticker_pane_ParamLimits

0x7252,	// (0x00026a24) form2_midp_field_pane

0x7276,	// (0x00026a48) scroll_pane_cp51

0x7296,	// (0x00026a68) form2_midp_button_pane_ParamLimits

0x7296,	// (0x00026a68) form2_midp_button_pane

0x72a8,	// (0x00026a7a) form2_midp_content_pane_ParamLimits

0x72a8,	// (0x00026a7a) form2_midp_content_pane

0x72c2,	// (0x00026a94) form2_midp_field_choice_group_pane

0x72ca,	// (0x00026a9c) form2_midp_field_pane_g1

0x72d2,	// (0x00026aa4) form2_midp_field_pane_g2

0x72da,	// (0x00026aac) form2_midp_field_pane_g3

0x72e2,	// (0x00026ab4) form2_midp_field_pane_g4

0x0003,

0xfae8,	// (0x0002f2ba) form2_midp_field_pane_g

0x72ea,	// (0x00026abc) form2_midp_gauge_slider_pane

0x72f2,	// (0x00026ac4) form2_midp_gauge_wait_pane

0x72fa,	// (0x00026acc) form2_midp_image_pane_ParamLimits

0x72fa,	// (0x00026acc) form2_midp_image_pane

0x7315,	// (0x00026ae7) form2_midp_label_pane_ParamLimits

0x7315,	// (0x00026ae7) form2_midp_label_pane

0xe009,	// (0x0002d7db) form2_midp_label_pane_cp_ParamLimits

0xe009,	// (0x0002d7db) form2_midp_label_pane_cp

0x735b,	// (0x00026b2d) form2_midp_string_pane_ParamLimits

0x735b,	// (0x00026b2d) form2_midp_string_pane

0xbad3,	// (0x0002b2a5) form2_midp_text_pane_ParamLimits

0xbad3,	// (0x0002b2a5) form2_midp_text_pane

0x736d,	// (0x00026b3f) form2_midp_time_pane

0x737d,	// (0x00026b4f) input_focus_pane_cp51_ParamLimits

0x737d,	// (0x00026b4f) input_focus_pane_cp51

0x7395,	// (0x00026b67) form2_midp_label_pane_t1_ParamLimits

0x7395,	// (0x00026b67) form2_midp_label_pane_t1

0xbaec,	// (0x0002b2be) form2_mdip_text_pane_t1_ParamLimits

0xbaec,	// (0x0002b2be) form2_mdip_text_pane_t1

0x0cd5,	// (0x000204a7) form2_midp_time_pane_t1

0x73de,	// (0x00026bb0) form2_midp_gauge_slider_pane_t1

0xe028,	// (0x0002d7fa) form2_midp_gauge_slider_pane_t2

0xe03a,	// (0x0002d80c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf1,	// (0x0002f2c3) form2_midp_gauge_slider_pane_t

0x7414,	// (0x00026be6) form2_midp_slider_pane

0x7420,	// (0x00026bf2) form2_midp_gauge_wait_pane_t1

0x742e,	// (0x00026c00) form2_midp_wait_pane_ParamLimits

0x742e,	// (0x00026c00) form2_midp_wait_pane

0xe04c,	// (0x0002d81e) list_single_2graphic_pane_cp4_ParamLimits

0xe04c,	// (0x0002d81e) list_single_2graphic_pane_cp4

0xd92f,	// (0x0002d101) list_single_midp_graphic_pane_cp_ParamLimits

0xd92f,	// (0x0002d101) list_single_midp_graphic_pane_cp

0x3235,	// (0x00022a07) list_highlight_pane_cp20

0x7488,	// (0x00026c5a) list_single_2graphic_pane_g1_cp4

0x7490,	// (0x00026c62) list_single_2graphic_pane_g2_cp4

0x7498,	// (0x00026c6a) list_single_2graphic_pane_t1_cp4

0x3315,	// (0x00022ae7) list_highlight_pane_cp21

0x74a7,	// (0x00026c79) list_single_midp_graphic_pane_g4_cp

0x74b6,	// (0x00026c88) list_single_midp_graphic_pane_t1_cp

0xe060,	// (0x0002d832) form2_mdip_string_pane_t1_ParamLimits

0xe060,	// (0x0002d832) form2_mdip_string_pane_t1

0x3235,	// (0x00022a07) bg_wml_button_pane_cp2

0x322b,	// (0x000229fd) form2_midp_image_pane_g1

0x0245,	// (0x0001fa17) list_double_large_graphic_pane_g5_ParamLimits

0x0245,	// (0x0001fa17) list_double_large_graphic_pane_g5

0x4b4a,	// (0x0002431c) midp_form_pane_ParamLimits

0x3315,	// (0x00022ae7) main_apps_wheel_pane_ParamLimits

0xc5c7,	// (0x0002bd99) popup_preview_window_ParamLimits

0xc5c7,	// (0x0002bd99) popup_preview_window

0x2022,	// (0x000217f4) popup_touch_info_window_ParamLimits

0x2022,	// (0x000217f4) popup_touch_info_window

0x2040,	// (0x00021812) popup_touch_menu_window_ParamLimits

0x2040,	// (0x00021812) popup_touch_menu_window

0x3221,	// (0x000229f3) bg_popup_sub_pane_cp6

0x75c4,	// (0x00026d96) list_touch_menu_pane

0x75cc,	// (0x00026d9e) list_single_touch_menu_pane_ParamLimits

0x75cc,	// (0x00026d9e) list_single_touch_menu_pane

0x75e2,	// (0x00026db4) list_single_touch_menu_pane_t1

0x3315,	// (0x00022ae7) bg_popup_sub_pane_cp7_ParamLimits

0x3315,	// (0x00022ae7) bg_popup_sub_pane_cp7

0x75f0,	// (0x00026dc2) heading_sub_pane

0x75f8,	// (0x00026dca) list_touch_info_pane_ParamLimits

0x75f8,	// (0x00026dca) list_touch_info_pane

0x7607,	// (0x00026dd9) list_single_touch_info_pane_ParamLimits

0x7607,	// (0x00026dd9) list_single_touch_info_pane

0x7619,	// (0x00026deb) list_single_touch_info_pane_t1

0x7627,	// (0x00026df9) list_single_touch_info_pane_t2

0x0001,

0xfaff,	// (0x0002f2d1) list_single_touch_info_pane_t

0x480a,	// (0x00023fdc) bg_popup_heading_pane_cp

0x7635,	// (0x00026e07) heading_sub_pane_t1

0x50b6,	// (0x00024888) bg_popup_preview_window_pane_cp_ParamLimits

0x50b6,	// (0x00024888) bg_popup_preview_window_pane_cp

0x75f0,	// (0x00026dc2) heading_preview_pane

0x75f8,	// (0x00026dca) list_preview_pane_ParamLimits

0x75f8,	// (0x00026dca) list_preview_pane

0x7643,	// (0x00026e15) popup_preview_window_g1

0x7607,	// (0x00026dd9) list_single_preview_pane_ParamLimits

0x7607,	// (0x00026dd9) list_single_preview_pane

0x764b,	// (0x00026e1d) list_single_preview_pane_g1

0x7653,	// (0x00026e25) list_single_preview_pane_t1

0x7619,	// (0x00026deb) list_single_preview_pane_t2

0x0001,

0xfb04,	// (0x0002f2d6) list_single_preview_pane_t

0x7661,	// (0x00026e33) bg_popup_heading_pane_cp2_ParamLimits

0x7661,	// (0x00026e33) bg_popup_heading_pane_cp2

0x7677,	// (0x00026e49) heading_preview_pane_g1

0x767f,	// (0x00026e51) heading_preview_pane_t1_ParamLimits

0x767f,	// (0x00026e51) heading_preview_pane_t1

0x3401,	// (0x00022bd3) soft_indicator_pane_t1_ParamLimits

0x3af4,	// (0x000232c6) scroll_pane_ParamLimits

0x400b,	// (0x000237dd) scroll_sc2_left_pane

0x4014,	// (0x000237e6) scroll_sc2_right_pane

0x4033,	// (0x00023805) scroll_bg_pane_g1_ParamLimits

0x4048,	// (0x0002381a) scroll_bg_pane_g2_ParamLimits

0x4060,	// (0x00023832) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002eebb) scroll_bg_pane_g_ParamLimits

0x4033,	// (0x00023805) scroll_handle_pane_g1_ParamLimits

0x4082,	// (0x00023854) scroll_handle_pane_g2_ParamLimits

0x4060,	// (0x00023832) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002eec2) scroll_handle_pane_g_ParamLimits

0x1aea,	// (0x000212bc) popup_choice_list_window_ParamLimits

0x1aea,	// (0x000212bc) popup_choice_list_window

0x4f8c,	// (0x0002475e) choice_list_pane

0x500e,	// (0x000247e0) cell_toolbar_pane_t1

0x5036,	// (0x00024808) toolbar_button_pane_ParamLimits

0x6109,	// (0x000258db) ai_gene_pane_1_t2_ParamLimits

0x6109,	// (0x000258db) ai_gene_pane_1_t2

0x0001,

0xf90c,	// (0x0002f0de) ai_gene_pane_1_t_ParamLimits

0xf90c,	// (0x0002f0de) ai_gene_pane_1_t

0x769c,	// (0x00026e6e) scroll_sc2_left_pane_g1

0x769c,	// (0x00026e6e) scroll_sc2_right_pane_g1

0x4b4a,	// (0x0002431c) bg_popup_sub_pane_cp10

0x76a6,	// (0x00026e78) list_choice_list_pane

0x76bf,	// (0x00026e91) list_single_choice_list_pane_ParamLimits

0x76bf,	// (0x00026e91) list_single_choice_list_pane

0x76d2,	// (0x00026ea4) list_single_choice_list_pane_g1

0x3d15,	// (0x000234e7) list_single_choice_list_pane_t1_ParamLimits

0x3d15,	// (0x000234e7) list_single_choice_list_pane_t1

0x76da,	// (0x00026eac) choice_list_pane_g1

0x76e2,	// (0x00026eb4) choice_list_pane_t1

0x3221,	// (0x000229f3) input_focus_pane_cp11

0x3eec,	// (0x000236be) title_pane_stacon_g2_ParamLimits

0x3eec,	// (0x000236be) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002eea1) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002eea1) title_pane_stacon_g

0x480a,	// (0x00023fdc) cursor_press_pane

0xc27a,	// (0x0002ba4c) popup_fep_hwr_window_ParamLimits

0xc27a,	// (0x0002ba4c) popup_fep_hwr_window

0x1c10,	// (0x000213e2) popup_fep_vkb_window_ParamLimits

0x1c10,	// (0x000213e2) popup_fep_vkb_window

0x76f0,	// (0x00026ec2) cursor_press_pane_g1

0x0002,

0xfb2d,	// (0x0002f2ff) fep_vkb_side_pane_g_ParamLimits

0x24ec,	// (0x00021cbe) fep_hwr_candidate_pane_ParamLimits

0x24ec,	// (0x00021cbe) fep_hwr_candidate_pane

0x2516,	// (0x00021ce8) fep_hwr_side_pane_ParamLimits

0x2516,	// (0x00021ce8) fep_hwr_side_pane

0x2536,	// (0x00021d08) fep_hwr_top_pane_ParamLimits

0x2536,	// (0x00021d08) fep_hwr_top_pane

0x254e,	// (0x00021d20) fep_hwr_write_pane_ParamLimits

0x254e,	// (0x00021d20) fep_hwr_write_pane

0xfb2d,	// (0x0002f2ff) fep_vkb_side_pane_g

0x76f8,	// (0x00026eca) fep_hwr_top_pane_g1

0x770a,	// (0x00026edc) fep_hwr_top_pane_g2

0x257a,	// (0x00021d4c) fep_hwr_top_pane_g3

0x0002,

0xfb09,	// (0x0002f2db) fep_hwr_top_pane_g

0x258f,	// (0x00021d61) fep_hwr_top_text_pane

0x4202,	// (0x000239d4) fep_hwr_top_text_pane_g1

0x7740,	// (0x00026f12) fep_hwr_top_text_pane_t1

0x2685,	// (0x00021e57) fep_hwr_candidate_pane_g1

0x7993,	// (0x00027165) fep_vkb_keypad_pane_g3_ParamLimits

0x7993,	// (0x00027165) fep_vkb_keypad_pane_g3

0x79bb,	// (0x0002718d) fep_vkb_keypad_pane_g4_ParamLimits

0x79bb,	// (0x0002718d) fep_vkb_keypad_pane_g4

0x7a2a,	// (0x000271fc) fep_vkb_bottom_pane_g2_ParamLimits

0x7a2a,	// (0x000271fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb34,	// (0x0002f306) fep_vkb_bottom_pane_g_ParamLimits

0xfb34,	// (0x0002f306) fep_vkb_bottom_pane_g

0x769c,	// (0x00026e6e) cell_vkb_side_pane_g2

0x0001,

0xfb3e,	// (0x0002f310) cell_vkb_side_pane_g

0x7ab5,	// (0x00027287) cell_vkb_side_pane_t1

0x7ac3,	// (0x00027295) cell_vkb_side_pane_t1_copy1

0x769c,	// (0x00026e6e) bg_fep_vkb_candidate_pane_g2

0x7bef,	// (0x000273c1) cell_vkb_candidate_pane_ParamLimits

0x774e,	// (0x00026f20) aid_size_cell_vkb_ParamLimits

0x774e,	// (0x00026f20) aid_size_cell_vkb

0x7bef,	// (0x000273c1) cell_vkb_candidate_pane

0x269f,	// (0x00021e71) bg_popup_fep_shadow_pane_g1

0xe0e4,	// (0x0002d8b6) fep_vkb_bottom_pane_ParamLimits

0xe0e4,	// (0x0002d8b6) fep_vkb_bottom_pane

0x7812,	// (0x00026fe4) fep_vkb_candidate_pane_ParamLimits

0x7812,	// (0x00026fe4) fep_vkb_candidate_pane

0xe109,	// (0x0002d8db) fep_vkb_keypad_pane_ParamLimits

0xe109,	// (0x0002d8db) fep_vkb_keypad_pane

0xe145,	// (0x0002d917) fep_vkb_side_pane_ParamLimits

0xe145,	// (0x0002d917) fep_vkb_side_pane

0xe181,	// (0x0002d953) fep_vkb_top_pane_ParamLimits

0xe181,	// (0x0002d953) fep_vkb_top_pane

0x78ec,	// (0x000270be) fep_vkb_top_pane_g1_ParamLimits

0x78ec,	// (0x000270be) fep_vkb_top_pane_g1

0x78fb,	// (0x000270cd) fep_vkb_top_pane_g2_ParamLimits

0x78fb,	// (0x000270cd) fep_vkb_top_pane_g2

0x790a,	// (0x000270dc) fep_vkb_top_pane_g3_ParamLimits

0x790a,	// (0x000270dc) fep_vkb_top_pane_g3

0x0003,

0xfb24,	// (0x0002f2f6) fep_vkb_top_pane_g_ParamLimits

0xfb24,	// (0x0002f2f6) fep_vkb_top_pane_g

0x7928,	// (0x000270fa) fep_vkb_top_text_pane_ParamLimits

0x7928,	// (0x000270fa) fep_vkb_top_text_pane

0xe1bd,	// (0x0002d98f) fep_vkb_side_pane_g1_ParamLimits

0xe1bd,	// (0x0002d98f) fep_vkb_side_pane_g1

0x7982,	// (0x00027154) grid_vkb_side_pane_ParamLimits

0x7982,	// (0x00027154) grid_vkb_side_pane

0x26a7,	// (0x00021e79) bg_popup_fep_shadow_pane_g2

0x26b0,	// (0x00021e82) bg_popup_fep_shadow_pane_g3

0x26b8,	// (0x00021e8a) bg_popup_fep_shadow_pane_g4

0x26c1,	// (0x00021e93) bg_popup_fep_shadow_pane_g5

0x26cb,	// (0x00021e9d) bg_popup_fep_shadow_pane_g6

0x26d3,	// (0x00021ea5) bg_popup_fep_shadow_pane_g7

0x3bfc,	// (0x000233ce) bg_popup_fep_shadow_pane_g8

0x79d9,	// (0x000271ab) grid_vkb_keypad_number_pane_ParamLimits

0x79d9,	// (0x000271ab) grid_vkb_keypad_number_pane

0x79e9,	// (0x000271bb) grid_vkb_keypad_pane_ParamLimits

0x79e9,	// (0x000271bb) grid_vkb_keypad_pane

0x7a0f,	// (0x000271e1) fep_vkb_bottom_pane_g1_ParamLimits

0x7a0f,	// (0x000271e1) fep_vkb_bottom_pane_g1

0x7a38,	// (0x0002720a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7a38,	// (0x0002720a) grid_vkb_keypad_bottom_left_pane

0x7a4d,	// (0x0002721f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7a4d,	// (0x0002721f) grid_vkb_keypad_bottom_right_pane

0x7a62,	// (0x00027234) fep_vkb_top_text_pane_g1

0xe204,	// (0x0002d9d6) fep_vkb_top_text_pane_t1

0xe216,	// (0x0002d9e8) cell_vkb_side_pane_ParamLimits

0xe216,	// (0x0002d9e8) cell_vkb_side_pane

0x769c,	// (0x00026e6e) cell_vkb_side_pane_g1

0x7ad1,	// (0x000272a3) cell_vkb_keypad_pane_ParamLimits

0x7ad1,	// (0x000272a3) cell_vkb_keypad_pane

0x7b46,	// (0x00027318) cell_vkb_keypad_pane_g1

0x0008,

0xfb51,	// (0x0002f323) bg_popup_fep_shadow_pane_g

0x769c,	// (0x00026e6e) cell_hwr_side_pane_g1

0x769c,	// (0x00026e6e) cell_hwr_side_pane_g2

0x7b50,	// (0x00027322) cell_vkb_keypad_pane_t1

0xe22c,	// (0x0002d9fe) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe22c,	// (0x0002d9fe) cell_vkb_keypad_bottom_left_pane

0xe241,	// (0x0002da13) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe241,	// (0x0002da13) cell_vkb_keypad_bottom_right_pane

0x769c,	// (0x00026e6e) cell_vkb_keypad_bottom_left_pane_g1

0x769c,	// (0x00026e6e) cell_vkb_keypad_bottom_right_pane_g1

0x7bb4,	// (0x00027386) cell_vkb_keypad_number_pane_ParamLimits

0x7bb4,	// (0x00027386) cell_vkb_keypad_number_pane

0x7bd3,	// (0x000273a5) cell_vkb_keypad_number_pane_g1

0x7bdd,	// (0x000273af) cell_vkb_keypad_number_pane_g2

0x7be6,	// (0x000273b8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb43,	// (0x0002f315) cell_vkb_keypad_number_pane_g

0x7b50,	// (0x00027322) cell_vkb_keypad_number_pane_t1

0x7c0a,	// (0x000273dc) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x0002f310) cell_hwr_side_pane_g

0x7c23,	// (0x000273f5) cell_hwr_side_pane_t1

0x26e5,	// (0x00021eb7) cell_hwr_side_pane_t1_copy1

0x791a,	// (0x000270ec) cell_hwr_candidate_pane_g1

0x26f3,	// (0x00021ec5) cell_hwr_candidate_pane_t1

0x769c,	// (0x00026e6e) cell_vkb_candidate_pane_g2

0x7ca9,	// (0x0002747b) cell_vkb_candidate_pane_t1

0x24b3,	// (0x00021c85) bg_popup_fep_shadow_pane_ParamLimits

0x24b3,	// (0x00021c85) bg_popup_fep_shadow_pane

0xdbcb,	// (0x0002d39d) bg_fep_hwr_top_pane_g4

0x771c,	// (0x00026eee) bg_hwr_side_pane_g1_ParamLimits

0x771c,	// (0x00026eee) bg_hwr_side_pane_g1

0xca4c,	// (0x0002c21e) cell_hwr_side_pane_ParamLimits

0xca4c,	// (0x0002c21e) cell_hwr_side_pane

0x2606,	// (0x00021dd8) fep_hwr_write_pane_g1_ParamLimits

0x2606,	// (0x00021dd8) fep_hwr_write_pane_g1

0x2613,	// (0x00021de5) fep_hwr_write_pane_g2_ParamLimits

0x2613,	// (0x00021de5) fep_hwr_write_pane_g2

0x2620,	// (0x00021df2) fep_hwr_write_pane_g3_ParamLimits

0x2620,	// (0x00021df2) fep_hwr_write_pane_g3

0xca6c,	// (0x0002c23e) fep_hwr_write_pane_g4_ParamLimits

0xca6c,	// (0x0002c23e) fep_hwr_write_pane_g4

0x0005,

0xfb10,	// (0x0002f2e2) fep_hwr_write_pane_g_ParamLimits

0xfb10,	// (0x0002f2e2) fep_hwr_write_pane_g

0xdbcb,	// (0x0002d39d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdbcb,	// (0x0002d39d) bg_fep_hwr_candidate_pane_g2

0x2643,	// (0x00021e15) cell_hwr_candidate_pane_ParamLimits

0x2643,	// (0x00021e15) cell_hwr_candidate_pane

0x2685,	// (0x00021e57) fep_hwr_candidate_pane_g1_ParamLimits

0x777c,	// (0x00026f4e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x777c,	// (0x00026f4e) bg_popup_fep_shadow_pane_cp2

0x791a,	// (0x000270ec) fep_vkb_top_pane_g4_ParamLimits

0x791a,	// (0x000270ec) fep_vkb_top_pane_g4

0x7960,	// (0x00027132) fep_vkb_side_pane_g2_ParamLimits

0x7960,	// (0x00027132) fep_vkb_side_pane_g2

0xb795,	// (0x0002af67) list_setting_pane_t4_ParamLimits

0xb795,	// (0x0002af67) list_setting_pane_t4

0xb82f,	// (0x0002b001) list_setting_number_pane_t5_ParamLimits

0xb82f,	// (0x0002b001) list_setting_number_pane_t5

0xd292,	// (0x0002ca64) list_double_heading_pane_cp2_ParamLimits

0xd292,	// (0x0002ca64) list_double_heading_pane_cp2

0x3b8f,	// (0x00023361) list_double_heading_pane_g1_cp2_ParamLimits

0x3b8f,	// (0x00023361) list_double_heading_pane_g1_cp2

0x3b9b,	// (0x0002336d) list_double_heading_pane_g2_cp2_ParamLimits

0x3b9b,	// (0x0002336d) list_double_heading_pane_g2_cp2

0x7cb7,	// (0x00027489) list_double_heading_pane_t1_cp2_ParamLimits

0x7cb7,	// (0x00027489) list_double_heading_pane_t1_cp2

0x7ccd,	// (0x0002749f) list_double_heading_pane_t2_cp2_ParamLimits

0x7ccd,	// (0x0002749f) list_double_heading_pane_t2_cp2

0x3209,	// (0x000229db) aid_value_unit2

0x1350,	// (0x00020b22) popup_preview_fixed_window

0x359e,	// (0x00022d70) bg_popup_preview_window_pane_cp02

0x7cdf,	// (0x000274b1) list_preview_fixed_pane

0x7d25,	// (0x000274f7) list_empty_pane_fp_ParamLimits

0x7d25,	// (0x000274f7) list_empty_pane_fp

0x7d25,	// (0x000274f7) list_single_cale_day_pane_fp_ParamLimits

0x7d25,	// (0x000274f7) list_single_cale_day_pane_fp

0x7d25,	// (0x000274f7) list_single_graphic_heading_pane_fp_ParamLimits

0x7d25,	// (0x000274f7) list_single_graphic_heading_pane_fp

0x7d25,	// (0x000274f7) list_single_graphic_pane_fp_ParamLimits

0x7d25,	// (0x000274f7) list_single_graphic_pane_fp

0x7d25,	// (0x000274f7) list_single_heading_pane_fp_ParamLimits

0x7d25,	// (0x000274f7) list_single_heading_pane_fp

0x7d25,	// (0x000274f7) list_single_pane_fp_ParamLimits

0x7d25,	// (0x000274f7) list_single_pane_fp

0x7d3a,	// (0x0002750c) list_single_pane_fp_g1_ParamLimits

0x7d3a,	// (0x0002750c) list_single_pane_fp_g1

0x0ce8,	// (0x000204ba) list_single_pane_fp_g2_ParamLimits

0x0ce8,	// (0x000204ba) list_single_pane_fp_g2

0x0cf4,	// (0x000204c6) list_single_pane_fp_g3_ParamLimits

0x0cf4,	// (0x000204c6) list_single_pane_fp_g3

0x7d46,	// (0x00027518) list_single_pane_fp_g4_ParamLimits

0x7d46,	// (0x00027518) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x0002f344) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x0002f344) list_single_pane_fp_g

0x0d08,	// (0x000204da) list_single_pane_fp_t1_ParamLimits

0x0d08,	// (0x000204da) list_single_pane_fp_t1

0x0d1f,	// (0x000204f1) list_single_graphic_pane_fp_g1_ParamLimits

0x0d1f,	// (0x000204f1) list_single_graphic_pane_fp_g1

0x7d3a,	// (0x0002750c) list_single_graphic_pane_fp_g2_ParamLimits

0x7d3a,	// (0x0002750c) list_single_graphic_pane_fp_g2

0x0ce8,	// (0x000204ba) list_single_graphic_pane_fp_g3_ParamLimits

0x0ce8,	// (0x000204ba) list_single_graphic_pane_fp_g3

0x0cf4,	// (0x000204c6) list_single_graphic_pane_fp_g4_ParamLimits

0x0cf4,	// (0x000204c6) list_single_graphic_pane_fp_g4

0x7d46,	// (0x00027518) list_single_graphic_pane_fp_g5_ParamLimits

0x7d46,	// (0x00027518) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002f34d) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002f34d) list_single_graphic_pane_fp_g

0x0d2b,	// (0x000204fd) list_single_graphic_pane_fp_t1_ParamLimits

0x0d2b,	// (0x000204fd) list_single_graphic_pane_fp_t1

0x0d1f,	// (0x000204f1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0d1f,	// (0x000204f1) list_single_graphic_heading_pane_fp_g1

0x7d3a,	// (0x0002750c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7d3a,	// (0x0002750c) list_single_graphic_heading_pane_fp_g2

0x0ce8,	// (0x000204ba) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0ce8,	// (0x000204ba) list_single_graphic_heading_pane_fp_g3

0x0cf4,	// (0x000204c6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0cf4,	// (0x000204c6) list_single_graphic_heading_pane_fp_g4

0x7d46,	// (0x00027518) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7d46,	// (0x00027518) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002f34d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002f34d) list_single_graphic_heading_pane_fp_g

0x0d41,	// (0x00020513) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0d41,	// (0x00020513) list_single_graphic_heading_pane_fp_t1

0x0d57,	// (0x00020529) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0d57,	// (0x00020529) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x0002f358) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x0002f358) list_single_graphic_heading_pane_fp_t

0x0d69,	// (0x0002053b) list_single_cale_day_pane_fp_g1_ParamLimits

0x0d69,	// (0x0002053b) list_single_cale_day_pane_fp_g1

0x7d52,	// (0x00027524) list_single_cale_day_pane_fp_g2_ParamLimits

0x7d52,	// (0x00027524) list_single_cale_day_pane_fp_g2

0x0da1,	// (0x00020573) list_single_cale_day_pane_fp_g3_ParamLimits

0x0da1,	// (0x00020573) list_single_cale_day_pane_fp_g3

0x0dc9,	// (0x0002059b) list_single_cale_day_pane_fp_g4_ParamLimits

0x0dc9,	// (0x0002059b) list_single_cale_day_pane_fp_g4

0x0ded,	// (0x000205bf) list_single_cale_day_pane_fp_g5_ParamLimits

0x0ded,	// (0x000205bf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x0002f35d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x0002f35d) list_single_cale_day_pane_fp_g

0x0e11,	// (0x000205e3) list_single_cale_day_pane_fp_t1_ParamLimits

0x0e11,	// (0x000205e3) list_single_cale_day_pane_fp_t1

0x0e37,	// (0x00020609) list_single_cale_day_pane_fp_t2_ParamLimits

0x0e37,	// (0x00020609) list_single_cale_day_pane_fp_t2

0x0e50,	// (0x00020622) list_single_cale_day_pane_fp_t3_ParamLimits

0x0e50,	// (0x00020622) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x0002f368) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x0002f368) list_single_cale_day_pane_fp_t

0x7d3a,	// (0x0002750c) list_empty_pane_fp_g1_ParamLimits

0x7d3a,	// (0x0002750c) list_empty_pane_fp_g1

0x0e69,	// (0x0002063b) list_empty_pane_fp_t1

0x0e77,	// (0x00020649) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x0002f36f) list_empty_pane_fp_t

0x7d3a,	// (0x0002750c) list_single_heading_pane_fp_g1_ParamLimits

0x7d3a,	// (0x0002750c) list_single_heading_pane_fp_g1

0x0ce8,	// (0x000204ba) list_single_heading_pane_fp_g2_ParamLimits

0x0ce8,	// (0x000204ba) list_single_heading_pane_fp_g2

0x0cf4,	// (0x000204c6) list_single_heading_pane_fp_g3_ParamLimits

0x0cf4,	// (0x000204c6) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x0002f374) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x0002f374) list_single_heading_pane_fp_g

0x0e85,	// (0x00020657) list_single_heading_pane_fp_t1_ParamLimits

0x0e85,	// (0x00020657) list_single_heading_pane_fp_t1

0x0e97,	// (0x00020669) list_single_heading_pane_fp_t2_ParamLimits

0x0e97,	// (0x00020669) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x0002f37b) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x0002f37b) list_single_heading_pane_fp_t

0x3d83,	// (0x00023555) aid_size_cell_fast

0x350e,	// (0x00022ce0) soft_indicator_pane_cp1_t1

0x3dc0,	// (0x00023592) cell_app_pane_cp2_ParamLimits

0x3dc0,	// (0x00023592) cell_app_pane_cp2

0x24d5,	// (0x00021ca7) fep_hwr_candidate_drop_down_list_pane

0xdbd9,	// (0x0002d3ab) fep_hwr_candidate_pane_g3_ParamLimits

0xdbd9,	// (0x0002d3ab) fep_hwr_candidate_pane_g3

0xdbe6,	// (0x0002d3b8) fep_hwr_candidate_pane_g4_ParamLimits

0xdbe6,	// (0x0002d3b8) fep_hwr_candidate_pane_g4

0x0002,

0xfb1d,	// (0x0002f2ef) fep_hwr_candidate_pane_g_ParamLimits

0xfb1d,	// (0x0002f2ef) fep_hwr_candidate_pane_g

0x7801,	// (0x00026fd3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7801,	// (0x00026fd3) fep_vkb_candidate_drop_down_list_pane

0x7c12,	// (0x000273e4) fep_vkb_candidate_pane_g3

0x7c1a,	// (0x000273ec) fep_vkb_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0002f31c) fep_vkb_candidate_pane_g

0x791a,	// (0x000270ec) cell_hwr_candidate_pane_g1_ParamLimits

0x7c31,	// (0x00027403) cell_hwr_candidate_pane_g3_ParamLimits

0x7c31,	// (0x00027403) cell_hwr_candidate_pane_g3

0x7c52,	// (0x00027424) cell_hwr_candidate_pane_g4_ParamLimits

0x7c52,	// (0x00027424) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x0002f336) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x0002f336) cell_hwr_candidate_pane_g

0x7c73,	// (0x00027445) cell_vkb_candidate_pane_g3_ParamLimits

0x7c73,	// (0x00027445) cell_vkb_candidate_pane_g3

0x7c8e,	// (0x00027460) cell_vkb_candidate_pane_g4_ParamLimits

0x7c8e,	// (0x00027460) cell_vkb_candidate_pane_g4

0x7d5e,	// (0x00027530) cell_app_pane_cp2_g1_ParamLimits

0x7d5e,	// (0x00027530) cell_app_pane_cp2_g1

0x7d7c,	// (0x0002754e) cell_app_pane_cp2_g2_ParamLimits

0x7d7c,	// (0x0002754e) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x0002f380) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x0002f380) cell_app_pane_cp2_g

0x7d88,	// (0x0002755a) cell_app_pane_cp2_t1_ParamLimits

0x7d88,	// (0x0002755a) cell_app_pane_cp2_t1

0x3b81,	// (0x00023353) grid_highlight_pane_cp1_ParamLimits

0x3b81,	// (0x00023353) grid_highlight_pane_cp1

0x2711,	// (0x00021ee3) cell_hwr_candidate_pane_cp1_ParamLimits

0x2711,	// (0x00021ee3) cell_hwr_candidate_pane_cp1

0x791a,	// (0x000270ec) fep_hwr_candidate_drop_down_list_pane_g1

0x7d9a,	// (0x0002756c) fep_hwr_candidate_drop_down_list_pane_g2

0x7da7,	// (0x00027579) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002f385) fep_hwr_candidate_drop_down_list_pane_g

0x2730,	// (0x00021f02) fep_hwr_candidate_drop_down_list_scroll_pane

0x2739,	// (0x00021f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2739,	// (0x00021f0b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2746,	// (0x00021f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2746,	// (0x00021f18) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2753,	// (0x00021f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2753,	// (0x00021f25) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7c73,	// (0x00027445) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c73,	// (0x00027445) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7c8e,	// (0x00027460) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c8e,	// (0x00027460) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2760,	// (0x00021f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2760,	// (0x00021f32) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x277b,	// (0x00021f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x277b,	// (0x00021f4d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2796,	// (0x00021f68) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2796,	// (0x00021f68) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0002f38c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0002f38c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7db4,	// (0x00027586) cell_vkb_candidate_pane_cp1_ParamLimits

0x7db4,	// (0x00027586) cell_vkb_candidate_pane_cp1

0x791a,	// (0x000270ec) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x791a,	// (0x000270ec) fep_vkb_candidate_drop_down_list_pane_g1

0x7d9a,	// (0x0002756c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7d9a,	// (0x0002756c) fep_vkb_candidate_drop_down_list_pane_g2

0x7da7,	// (0x00027579) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7da7,	// (0x00027579) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0002f385) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x0002f385) fep_vkb_candidate_drop_down_list_pane_g

0x7dd4,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7dd4,	// (0x000275a6) fep_vkb_candidate_drop_down_list_scroll_pane

0x7de1,	// (0x000275b3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7de1,	// (0x000275b3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7dee,	// (0x000275c0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7dee,	// (0x000275c0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7dfa,	// (0x000275cc) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7dfa,	// (0x000275cc) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7c31,	// (0x00027403) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7c31,	// (0x00027403) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7c52,	// (0x00027424) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7c52,	// (0x00027424) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7e06,	// (0x000275d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7e06,	// (0x000275d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7e27,	// (0x000275f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7e27,	// (0x000275f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7e48,	// (0x0002761a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7e48,	// (0x0002761a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0002f39d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0002f39d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbec9,	// (0x0002b69b) title_pane_g1_ParamLimits

0xbedc,	// (0x0002b6ae) title_pane_g2_ParamLimits

0xf554,	// (0x0002ed26) title_pane_g_ParamLimits

0x41f2,	// (0x000239c4) aid_call2_pane

0x41fa,	// (0x000239cc) aid_call_pane

0x4202,	// (0x000239d4) popup_clock_analogue_window_g1

0x4202,	// (0x000239d4) popup_clock_analogue_window_g2

0x16b7,	// (0x00020e89) popup_clock_analogue_window_g3

0x16c0,	// (0x00020e92) popup_clock_analogue_window_g4

0x322b,	// (0x000229fd) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002eed0) popup_clock_analogue_window_g

0x16c8,	// (0x00020e9a) popup_clock_analogue_window_t1

0x16d6,	// (0x00020ea8) clock_digital_number_pane_ParamLimits

0x16d6,	// (0x00020ea8) clock_digital_number_pane

0x16e2,	// (0x00020eb4) clock_digital_number_pane_cp02_ParamLimits

0x16e2,	// (0x00020eb4) clock_digital_number_pane_cp02

0x16ee,	// (0x00020ec0) clock_digital_number_pane_cp03_ParamLimits

0x16ee,	// (0x00020ec0) clock_digital_number_pane_cp03

0x16fa,	// (0x00020ecc) clock_digital_number_pane_cp04_ParamLimits

0x16fa,	// (0x00020ecc) clock_digital_number_pane_cp04

0x1706,	// (0x00020ed8) clock_digital_separator_pane_ParamLimits

0x1706,	// (0x00020ed8) clock_digital_separator_pane

0x1712,	// (0x00020ee4) popup_clock_digital_window_t1_ParamLimits

0x1712,	// (0x00020ee4) popup_clock_digital_window_t1

0x322b,	// (0x000229fd) clock_digital_number_pane_g1

0x322b,	// (0x000229fd) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002eedb) clock_digital_number_pane_g

0x322b,	// (0x000229fd) clock_digital_separator_pane_g1

0x322b,	// (0x000229fd) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002eedb) clock_digital_separator_pane_g

0xd4f5,	// (0x0002ccc7) aid_fill_nsta_ParamLimits

0xd62b,	// (0x0002cdfd) indicator_nsta_pane_ParamLimits

0x4e21,	// (0x000245f3) popup_clock_analogue_window

0x4e21,	// (0x000245f3) popup_clock_digital_window

0x3d44,	// (0x00023516) grid_indicator_nsta_pane_ParamLimits

0x7085,	// (0x00026857) clock_nsta_pane_t2

0x0001,

0xfa9d,	// (0x0002f26f) clock_nsta_pane_t

0x167b,	// (0x00020e4d) aid_size_max_handle

0xc047,	// (0x0002b819) aid_size_min_handle

0x480a,	// (0x00023fdc) editor_scroll_pane

0x7e63,	// (0x00027635) ex_editor_pane

0x3cf1,	// (0x000234c3) scroll_pane_cp13

0x3b20,	// (0x000232f2) scroll_pane_cp14

0x4231,	// (0x00023a03) scroll_pane_cp36

0xd2a3,	// (0x0002ca75) list_single_graphic_hl_pane_cp2_ParamLimits

0xd2a3,	// (0x0002ca75) list_single_graphic_hl_pane_cp2

0xbaaf,	// (0x0002b281) list_single_graphic_hl_pane_ParamLimits

0xbaaf,	// (0x0002b281) list_single_graphic_hl_pane

0x0ead,	// (0x0002067f) aid_size_min_hl_cp1

0x7e6b,	// (0x0002763d) list_highlight_pane_cp34_ParamLimits

0x7e6b,	// (0x0002763d) list_highlight_pane_cp34

0x7e7c,	// (0x0002764e) list_single_graphic_hl_pane_g1_ParamLimits

0x7e7c,	// (0x0002764e) list_single_graphic_hl_pane_g1

0xbb09,	// (0x0002b2db) list_single_graphic_hl_pane_g2_ParamLimits

0xbb09,	// (0x0002b2db) list_single_graphic_hl_pane_g2

0xbb09,	// (0x0002b2db) list_single_graphic_hl_pane_g3_ParamLimits

0xbb09,	// (0x0002b2db) list_single_graphic_hl_pane_g3

0xbb15,	// (0x0002b2e7) list_single_graphic_hl_pane_g4_ParamLimits

0xbb15,	// (0x0002b2e7) list_single_graphic_hl_pane_g4

0xbb21,	// (0x0002b2f3) list_single_graphic_hl_pane_g5_ParamLimits

0xbb21,	// (0x0002b2f3) list_single_graphic_hl_pane_g5

0x0004,

0xfbdc,	// (0x0002f3ae) list_single_graphic_hl_pane_g_ParamLimits

0xfbdc,	// (0x0002f3ae) list_single_graphic_hl_pane_g

0xbb35,	// (0x0002b307) list_single_graphic_hl_pane_t1_ParamLimits

0xbb35,	// (0x0002b307) list_single_graphic_hl_pane_t1

0x7e9d,	// (0x0002766f) aid_size_min_hl_cp2

0x7ea6,	// (0x00027678) list_highlight_pane_cp34_cp2_ParamLimits

0x7ea6,	// (0x00027678) list_highlight_pane_cp34_cp2

0x7e7c,	// (0x0002764e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7e7c,	// (0x0002764e) list_single_graphic_hl_pane_g1_cp2

0x7eb3,	// (0x00027685) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7eb3,	// (0x00027685) list_single_graphic_hl_pane_g2_cp2

0xe25c,	// (0x0002da2e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe25c,	// (0x0002da2e) list_single_graphic_hl_pane_g3_cp2

0x734f,	// (0x00026b21) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x734f,	// (0x00026b21) list_single_graphic_hl_pane_g4_cp2

0x7e89,	// (0x0002765b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7e89,	// (0x0002765b) list_single_graphic_hl_pane_g5_cp2

0xc0a2,	// (0x0002b874) control_pane_g4_ParamLimits

0xc0a2,	// (0x0002b874) control_pane_g4

0x4b4a,	// (0x0002431c) bg_popup_sub_pane_cp10_ParamLimits

0x76a6,	// (0x00026e78) list_choice_list_pane_ParamLimits

0x76b5,	// (0x00026e87) scroll_pane_cp23

0x359e,	// (0x00022d70) bg_popup_preview_window_pane_cp02_ParamLimits

0x7cdf,	// (0x000274b1) list_preview_fixed_pane_ParamLimits

0x7cf5,	// (0x000274c7) list_preview_fixed_pane_cp_ParamLimits

0x7cf5,	// (0x000274c7) list_preview_fixed_pane_cp

0x7d01,	// (0x000274d3) popup_preview_fixed_window_g1_ParamLimits

0x7d01,	// (0x000274d3) popup_preview_fixed_window_g1

0x7d0d,	// (0x000274df) popup_preview_fixed_window_g2_ParamLimits

0x7d0d,	// (0x000274df) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x0002f33d) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x0002f33d) popup_preview_fixed_window_g

0x15ef,	// (0x00020dc1) aid_navi_side_left_pane_ParamLimits

0x1604,	// (0x00020dd6) aid_navi_side_right_pane_ParamLimits

0x161c,	// (0x00020dee) navi_icon_pane_stacon_ParamLimits

0x1630,	// (0x00020e02) navi_navi_pane_stacon_ParamLimits

0x161c,	// (0x00020dee) navi_text_pane_stacon_ParamLimits

0x3221,	// (0x000229f3) main_text_info_pane

0x7ee3,	// (0x000276b5) listscroll_text_info_pane

0x7eeb,	// (0x000276bd) list_text_info_pane_ParamLimits

0x7eeb,	// (0x000276bd) list_text_info_pane

0x7efa,	// (0x000276cc) scroll_pane_cp24_ParamLimits

0x7efa,	// (0x000276cc) scroll_pane_cp24

0xe26a,	// (0x0002da3c) list_text_info_pane_t1_ParamLimits

0xe26a,	// (0x0002da3c) list_text_info_pane_t1

0xc1ed,	// (0x0002b9bf) popup_fast_swap2_window_ParamLimits

0xc1ed,	// (0x0002b9bf) popup_fast_swap2_window

0x7f49,	// (0x0002771b) aid_size_cell_fast2

0x3221,	// (0x000229f3) bg_popup_window_pane_cp17

0x54a0,	// (0x00024c72) heading_pane_cp2

0x37ea,	// (0x00022fbc) listscroll_fast2_pane

0x7f53,	// (0x00027725) grid_fast2_pane

0x7f5d,	// (0x0002772f) listscroll_fast2_pane_g1

0x7f65,	// (0x00027737) listscroll_fast2_pane_g2

0x0001,

0xfbe7,	// (0x0002f3b9) listscroll_fast2_pane_g

0x3cf1,	// (0x000234c3) scroll_pane_cp26

0x7f6f,	// (0x00027741) cell_fast2_pane_ParamLimits

0x7f6f,	// (0x00027741) cell_fast2_pane

0x7f84,	// (0x00027756) cell_fast2_pane_g1

0x7f8d,	// (0x0002775f) cell_fast2_pane_g2

0x7f96,	// (0x00027768) cell_fast2_pane_g3

0x0002,

0xfbec,	// (0x0002f3be) cell_fast2_pane_g

0x38dd,	// (0x000230af) grid_highlight_pane_cp9

0x38f2,	// (0x000230c4) main_eswt_pane_ParamLimits

0x38f2,	// (0x000230c4) main_eswt_pane

0x7f0f,	// (0x000276e1) list_single_text_info_pane

0x7f9e,	// (0x00027770) eswt_ctrl_button_pane

0x7f9e,	// (0x00027770) eswt_ctrl_canvas_pane

0x7fa6,	// (0x00027778) eswt_ctrl_combo_pane

0x7f9e,	// (0x00027770) eswt_ctrl_default_pane

0x7f9e,	// (0x00027770) eswt_ctrl_label_pane

0x7fae,	// (0x00027780) eswt_ctrl_wait_pane

0x7fb6,	// (0x00027788) eswt_shell_pane

0x3221,	// (0x000229f3) listscroll_eswt_app_pane

0x7fd6,	// (0x000277a8) popup_eswt_tasktip_window_ParamLimits

0x7fd6,	// (0x000277a8) popup_eswt_tasktip_window

0x50b6,	// (0x00024888) bg_popup_window_pane_cp18

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_ParamLimits

0x7fe7,	// (0x000277b9) eswt_control_pane_g1

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_ParamLimits

0x7ff4,	// (0x000277c6) eswt_control_pane_g2

0x8001,	// (0x000277d3) eswt_control_pane_g3_ParamLimits

0x8001,	// (0x000277d3) eswt_control_pane_g3

0x800e,	// (0x000277e0) eswt_control_pane_g4_ParamLimits

0x800e,	// (0x000277e0) eswt_control_pane_g4

0x0003,

0xfbf3,	// (0x0002f3c5) eswt_control_pane_g_ParamLimits

0xfbf3,	// (0x0002f3c5) eswt_control_pane_g

0x3b81,	// (0x00023353) bg_button_pane_ParamLimits

0x3b81,	// (0x00023353) bg_button_pane

0x38f2,	// (0x000230c4) common_borders_pane_copy2_ParamLimits

0x38f2,	// (0x000230c4) common_borders_pane_copy2

0x801b,	// (0x000277ed) control_button_pane_g1_ParamLimits

0x801b,	// (0x000277ed) control_button_pane_g1

0x8027,	// (0x000277f9) control_button_pane_g2_ParamLimits

0x8027,	// (0x000277f9) control_button_pane_g2

0x8033,	// (0x00027805) control_button_pane_g3_ParamLimits

0x8033,	// (0x00027805) control_button_pane_g3

0x0002,

0xfbfc,	// (0x0002f3ce) control_button_pane_g_ParamLimits

0xfbfc,	// (0x0002f3ce) control_button_pane_g

0x8047,	// (0x00027819) control_button_pane_t1

0x8055,	// (0x00027827) control_button_pane_t2

0x0001,

0xfc03,	// (0x0002f3d5) control_button_pane_t

0x5042,	// (0x00024814) bg_button_pane_g1

0x504a,	// (0x0002481c) bg_button_pane_g2

0x5052,	// (0x00024824) bg_button_pane_g3

0x505a,	// (0x0002482c) bg_button_pane_g4

0x5062,	// (0x00024834) bg_button_pane_g5

0x506a,	// (0x0002483c) bg_button_pane_g6

0x5072,	// (0x00024844) bg_button_pane_g7

0x507a,	// (0x0002484c) bg_button_pane_g8

0x5082,	// (0x00024854) bg_button_pane_g9

0x0008,

0xf860,	// (0x0002f032) bg_button_pane_g

0x7661,	// (0x00026e33) common_borders_pane_ParamLimits

0x7661,	// (0x00026e33) common_borders_pane

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy1_ParamLimits

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy1

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy1_ParamLimits

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy1

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy1_ParamLimits

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy1

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy1_ParamLimits

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy1

0x769c,	// (0x00026e6e) bg_eswt_ctrl_canvas_pane_g1

0x7661,	// (0x00026e33) common_borders_pane_cp2_ParamLimits

0x7661,	// (0x00026e33) common_borders_pane_cp2

0x7661,	// (0x00026e33) common_borders_pane_cp3_ParamLimits

0x7661,	// (0x00026e33) common_borders_pane_cp3

0x8063,	// (0x00027835) separator_horizontal_pane

0x806b,	// (0x0002783d) separator_vertical_pane

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy2_ParamLimits

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy2

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy2_ParamLimits

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy2

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy2_ParamLimits

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy2

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy2_ParamLimits

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy2

0x3221,	// (0x000229f3) common_borders_pane_cp4

0x8074,	// (0x00027846) separator_horizontal_pane_g1

0x807d,	// (0x0002784f) separator_horizontal_pane_g2

0x8086,	// (0x00027858) separator_horizontal_pane_g3

0x0002,

0xfc08,	// (0x0002f3da) separator_horizontal_pane_g

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy3_ParamLimits

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy3

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy3_ParamLimits

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy3

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy3_ParamLimits

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy3

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy3_ParamLimits

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy3

0x3221,	// (0x000229f3) common_borders_pane_cp5

0x808f,	// (0x00027861) separator_vertical_pane_g1

0x8098,	// (0x0002786a) separator_vertical_pane_g2

0x80a1,	// (0x00027873) separator_vertical_pane_g3

0x0002,

0xfc0f,	// (0x0002f3e1) separator_vertical_pane_g

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy4_ParamLimits

0x7fe7,	// (0x000277b9) eswt_control_pane_g1_copy4

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy4_ParamLimits

0x7ff4,	// (0x000277c6) eswt_control_pane_g2_copy4

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy4_ParamLimits

0x8001,	// (0x000277d3) eswt_control_pane_g3_copy4

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy4_ParamLimits

0x800e,	// (0x000277e0) eswt_control_pane_g4_copy4

0xe285,	// (0x0002da57) eswt_ctrl_combo_button_pane

0xe28d,	// (0x0002da5f) eswt_ctrl_input_pane

0xe295,	// (0x0002da67) popup_choice_list_window_cp70

0xe29d,	// (0x0002da6f) eswt_ctrl_input_pane_t1

0x3221,	// (0x000229f3) input_focus_pane_cp70

0x7661,	// (0x00026e33) bg_button_pane_cp70_ParamLimits

0x7661,	// (0x00026e33) bg_button_pane_cp70

0xe2ab,	// (0x0002da7d) eswt_ctrl_combo_button_pane_g1

0x80d8,	// (0x000278aa) wait_bar_pane_cp70

0x50b6,	// (0x00024888) bg_popup_window_pane_cp70_ParamLimits

0x50b6,	// (0x00024888) bg_popup_window_pane_cp70

0x80e0,	// (0x000278b2) popup_eswt_tasktip_window_t1

0x80f6,	// (0x000278c8) wait_bar_pane_cp71_ParamLimits

0x80f6,	// (0x000278c8) wait_bar_pane_cp71

0x8102,	// (0x000278d4) grid_eswt_app_pane

0x4014,	// (0x000237e6) scroll_pane_cp70

0xe2b3,	// (0x0002da85) cell_eswt_app_pane_ParamLimits

0xe2b3,	// (0x0002da85) cell_eswt_app_pane

0xe2dd,	// (0x0002daaf) cell_eswt_app_pane_g1_ParamLimits

0xe2dd,	// (0x0002daaf) cell_eswt_app_pane_g1

0xe30c,	// (0x0002dade) cell_eswt_app_pane_g2_ParamLimits

0xe30c,	// (0x0002dade) cell_eswt_app_pane_g2

0x0001,

0xfc16,	// (0x0002f3e8) cell_eswt_app_pane_g_ParamLimits

0xfc16,	// (0x0002f3e8) cell_eswt_app_pane_g

0xe335,	// (0x0002db07) cell_eswt_app_pane_t1_ParamLimits

0xe335,	// (0x0002db07) cell_eswt_app_pane_t1

0x81c5,	// (0x00027997) grid_highlight_pane_cp70_ParamLimits

0x81c5,	// (0x00027997) grid_highlight_pane_cp70

0x46df,	// (0x00023eb1) set_content_pane_g1

0x4aaa,	// (0x0002427c) status_small_volume_pane

0x27b1,	// (0x00021f83) status_small_volume_pane_g1

0x27b9,	// (0x00021f8b) volume_small2_pane

0x27c2,	// (0x00021f94) volume_small2_pane_g1

0x27cb,	// (0x00021f9d) volume_small2_pane_g2

0x27d4,	// (0x00021fa6) volume_small2_pane_g3

0x27dd,	// (0x00021faf) volume_small2_pane_g4

0x27e6,	// (0x00021fb8) volume_small2_pane_g5

0x27ef,	// (0x00021fc1) volume_small2_pane_g6

0x27f8,	// (0x00021fca) volume_small2_pane_g7

0x2801,	// (0x00021fd3) volume_small2_pane_g8

0x280a,	// (0x00021fdc) volume_small2_pane_g9

0x2813,	// (0x00021fe5) volume_small2_pane_g10

0x0009,

0xfc1b,	// (0x0002f3ed) volume_small2_pane_g

0x7a62,	// (0x00027234) fep_vkb_top_text_pane_g1_ParamLimits

0xe204,	// (0x0002d9d6) fep_vkb_top_text_pane_t1_ParamLimits

0x7d19,	// (0x000274eb) popup_preview_fixed_window_g3_ParamLimits

0x7d19,	// (0x000274eb) popup_preview_fixed_window_g3

0xc80a,	// (0x0002bfdc) popup_toolbar_trans_pane

0xdc20,	// (0x0002d3f2) aid_height_set_list_ParamLimits

0x6437,	// (0x00025c09) aid_size_parent_ParamLimits

0x4b4a,	// (0x0002431c) list_highlight_pane_cp2_ParamLimits

0x46df,	// (0x00023eb1) set_content_pane_g1_ParamLimits

0xbac1,	// (0x0002b293) list_single_image_pane_ParamLimits

0xbac1,	// (0x0002b293) list_single_image_pane

0xe367,	// (0x0002db39) aid_size_cell_image_ParamLimits

0xe367,	// (0x0002db39) aid_size_cell_image

0xe374,	// (0x0002db46) grid_single_image_pane_ParamLimits

0xe374,	// (0x0002db46) grid_single_image_pane

0x555f,	// (0x00024d31) list_single_image_pane_g1_ParamLimits

0x555f,	// (0x00024d31) list_single_image_pane_g1

0x81ea,	// (0x000279bc) list_single_image_pane_g2_ParamLimits

0x81ea,	// (0x000279bc) list_single_image_pane_g2

0x0001,

0xfc30,	// (0x0002f402) list_single_image_pane_g_ParamLimits

0xfc30,	// (0x0002f402) list_single_image_pane_g

0x81fe,	// (0x000279d0) list_single_image_pane_t1_ParamLimits

0x81fe,	// (0x000279d0) list_single_image_pane_t1

0xe382,	// (0x0002db54) cell_image_list_pane_ParamLimits

0xe382,	// (0x0002db54) cell_image_list_pane

0xe398,	// (0x0002db6a) cell_image_list_pane_g1

0xe3a1,	// (0x0002db73) cell_image_list_pane_g2

0x0001,

0xfc35,	// (0x0002f407) cell_image_list_pane_g

0x823a,	// (0x00027a0c) aid_size_cell_tb_trans_pane

0x3b81,	// (0x00023353) bg_tb_trans_pane

0x824c,	// (0x00027a1e) grid_tb_trans_pane

0x5042,	// (0x00024814) bg_tb_trans_pane_g1

0x504a,	// (0x0002481c) bg_tb_trans_pane_g2

0x5052,	// (0x00024824) bg_tb_trans_pane_g3

0x505a,	// (0x0002482c) bg_tb_trans_pane_g4

0x5062,	// (0x00024834) bg_tb_trans_pane_g5

0x507a,	// (0x0002484c) bg_tb_trans_pane_g6

0x5082,	// (0x00024854) bg_tb_trans_pane_g7

0x506a,	// (0x0002483c) bg_tb_trans_pane_g8

0x5072,	// (0x00024844) bg_tb_trans_pane_g9

0x0008,

0xfc3a,	// (0x0002f40c) bg_tb_trans_pane_g

0x8260,	// (0x00027a32) cell_toolbar_trans_pane_ParamLimits

0x8260,	// (0x00027a32) cell_toolbar_trans_pane

0x769c,	// (0x00026e6e) cell_toolbar_trans_pane_g1

0xdfed,	// (0x0002d7bf) list_form2_midp_pane_t1

0xdffb,	// (0x0002d7cd) list_form2_midp_pane_t2

0x0001,

0xfae3,	// (0x0002f2b5) list_form2_midp_pane_t

0x7276,	// (0x00026a48) scroll_pane_cp51_ParamLimits

0x743e,	// (0x00026c10) form2_midp_wait_pane_g1

0x7447,	// (0x00026c19) form2_midp_wait_pane_g2

0x7450,	// (0x00026c22) form2_midp_wait_pane_g3

0x0002,

0xfaf8,	// (0x0002f2ca) form2_midp_wait_pane_g

0x3315,	// (0x00022ae7) list_highlight_pane_cp21_ParamLimits

0x74a7,	// (0x00026c79) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x74b6,	// (0x00026c88) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6631,	// (0x00025e03) list_single_2graphic_im_pane_ParamLimits

0x6631,	// (0x00025e03) list_single_2graphic_im_pane

0xe3aa,	// (0x0002db7c) list_single_2graphic_im_pane_g1_ParamLimits

0xe3aa,	// (0x0002db7c) list_single_2graphic_im_pane_g1

0xe3bb,	// (0x0002db8d) list_single_2graphic_im_pane_g2_ParamLimits

0xe3bb,	// (0x0002db8d) list_single_2graphic_im_pane_g2

0xe3c7,	// (0x0002db99) list_single_2graphic_im_pane_g3_ParamLimits

0xe3c7,	// (0x0002db99) list_single_2graphic_im_pane_g3

0x0003,

0xfc4d,	// (0x0002f41f) list_single_2graphic_im_pane_g_ParamLimits

0xfc4d,	// (0x0002f41f) list_single_2graphic_im_pane_g

0xe3db,	// (0x0002dbad) list_single_2graphic_im_pane_t1_ParamLimits

0xe3db,	// (0x0002dbad) list_single_2graphic_im_pane_t1

0x7d25,	// (0x000274f7) list_single_graphic_2heading_pane_fp_ParamLimits

0x7d25,	// (0x000274f7) list_single_graphic_2heading_pane_fp

0x0d1f,	// (0x000204f1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0d1f,	// (0x000204f1) list_single_graphic_2heading_pane_fp_g1

0x7d3a,	// (0x0002750c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7d3a,	// (0x0002750c) list_single_graphic_2heading_pane_fp_g2

0x0ce8,	// (0x000204ba) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0ce8,	// (0x000204ba) list_single_graphic_2heading_pane_fp_g3

0x0cf4,	// (0x000204c6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0cf4,	// (0x000204c6) list_single_graphic_2heading_pane_fp_g4

0x7d46,	// (0x00027518) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7d46,	// (0x00027518) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x0002f34d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x0002f34d) list_single_graphic_2heading_pane_fp_g

0x0ef8,	// (0x000206ca) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0ef8,	// (0x000206ca) list_single_graphic_2heading_pane_fp_t1

0x0d57,	// (0x00020529) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0d57,	// (0x00020529) list_single_graphic_2heading_pane_fp_t2

0x0f0e,	// (0x000206e0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0f0e,	// (0x000206e0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc56,	// (0x0002f428) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc56,	// (0x0002f428) list_single_graphic_2heading_pane_fp_t

0x7728,	// (0x00026efa) fep_hwr_write_pane_g5_ParamLimits

0x7728,	// (0x00026efa) fep_hwr_write_pane_g5

0x7734,	// (0x00026f06) fep_hwr_write_pane_g6_ParamLimits

0x7734,	// (0x00026f06) fep_hwr_write_pane_g6

0x7fb6,	// (0x00027788) eswt_shell_pane_ParamLimits

0x50b6,	// (0x00024888) bg_popup_window_pane_cp18_ParamLimits

0x637f,	// (0x00025b51) heading_pane_cp70

0x80e0,	// (0x000278b2) popup_eswt_tasktip_window_t1_ParamLimits

0xd550,	// (0x0002cd22) aid_touch_tab_arrow_left

0xd566,	// (0x0002cd38) aid_touch_tab_arrow_right

0xbef4,	// (0x0002b6c6) title_pane_g3_ParamLimits

0xbef4,	// (0x0002b6c6) title_pane_g3

0x3b40,	// (0x00023312) set_value_pane_g1

0xc80a,	// (0x0002bfdc) popup_toolbar_trans_pane_ParamLimits

0x823a,	// (0x00027a0c) aid_size_cell_tb_trans_pane_ParamLimits

0x3b81,	// (0x00023353) bg_tb_trans_pane_ParamLimits

0x824c,	// (0x00027a1e) grid_tb_trans_pane_ParamLimits

0x359e,	// (0x00022d70) cont_note_pane_ParamLimits

0x359e,	// (0x00022d70) cont_note_pane

0x38f2,	// (0x000230c4) cont_snote2_single_text_pane_ParamLimits

0x38f2,	// (0x000230c4) cont_snote2_single_text_pane

0x38f2,	// (0x000230c4) cont_snote2_single_graphic_pane_ParamLimits

0x38f2,	// (0x000230c4) cont_snote2_single_graphic_pane

0x56c7,	// (0x00024e99) cont_note_wait_pane_ParamLimits

0x56c7,	// (0x00024e99) cont_note_wait_pane

0x56c7,	// (0x00024e99) cont_note_image_pane_ParamLimits

0x56c7,	// (0x00024e99) cont_note_image_pane

0x82f4,	// (0x00027ac6) popup_note2_window_g1_ParamLimits

0x82f4,	// (0x00027ac6) popup_note2_window_g1

0x8325,	// (0x00027af7) popup_note2_window_t1_ParamLimits

0x8325,	// (0x00027af7) popup_note2_window_t1

0x836a,	// (0x00027b3c) popup_note2_window_t2_ParamLimits

0x836a,	// (0x00027b3c) popup_note2_window_t2

0x83af,	// (0x00027b81) popup_note2_window_t3_ParamLimits

0x83af,	// (0x00027b81) popup_note2_window_t3

0x83f4,	// (0x00027bc6) popup_note2_window_t4_ParamLimits

0x83f4,	// (0x00027bc6) popup_note2_window_t4

0x3622,	// (0x00022df4) popup_note2_window_t5_ParamLimits

0x3622,	// (0x00022df4) popup_note2_window_t5

0x0004,

0xfc62,	// (0x0002f434) popup_note2_window_t_ParamLimits

0xfc62,	// (0x0002f434) popup_note2_window_t

0x8423,	// (0x00027bf5) popup_note2_image_window_g1_ParamLimits

0x8423,	// (0x00027bf5) popup_note2_image_window_g1

0x842f,	// (0x00027c01) popup_note2_image_window_g2_ParamLimits

0x842f,	// (0x00027c01) popup_note2_image_window_g2

0x0001,

0xfc6d,	// (0x0002f43f) popup_note2_image_window_g_ParamLimits

0xfc6d,	// (0x0002f43f) popup_note2_image_window_g

0x8441,	// (0x00027c13) popup_note2_image_window_t1_ParamLimits

0x8441,	// (0x00027c13) popup_note2_image_window_t1

0x8459,	// (0x00027c2b) popup_note2_image_window_t2_ParamLimits

0x8459,	// (0x00027c2b) popup_note2_image_window_t2

0x8471,	// (0x00027c43) popup_note2_image_window_t3_ParamLimits

0x8471,	// (0x00027c43) popup_note2_image_window_t3

0x0002,

0xfc72,	// (0x0002f444) popup_note2_image_window_t_ParamLimits

0xfc72,	// (0x0002f444) popup_note2_image_window_t

0x56d5,	// (0x00024ea7) popup_note2_wait_window_g1_ParamLimits

0x56d5,	// (0x00024ea7) popup_note2_wait_window_g1

0x848d,	// (0x00027c5f) popup_note2_wait_window_g2_ParamLimits

0x848d,	// (0x00027c5f) popup_note2_wait_window_g2

0x56ed,	// (0x00024ebf) popup_note2_wait_window_g3_ParamLimits

0x56ed,	// (0x00024ebf) popup_note2_wait_window_g3

0x0002,

0xfc79,	// (0x0002f44b) popup_note2_wait_window_g_ParamLimits

0xfc79,	// (0x0002f44b) popup_note2_wait_window_g

0x8499,	// (0x00027c6b) popup_note2_wait_window_t1_ParamLimits

0x8499,	// (0x00027c6b) popup_note2_wait_window_t1

0x84b7,	// (0x00027c89) popup_note2_wait_window_t2_ParamLimits

0x84b7,	// (0x00027c89) popup_note2_wait_window_t2

0x84d5,	// (0x00027ca7) popup_note2_wait_window_t3_ParamLimits

0x84d5,	// (0x00027ca7) popup_note2_wait_window_t3

0x84e7,	// (0x00027cb9) popup_note2_wait_window_t4_ParamLimits

0x84e7,	// (0x00027cb9) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x0002f452) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x0002f452) popup_note2_wait_window_t

0x84f9,	// (0x00027ccb) wait_bar2_pane_ParamLimits

0x84f9,	// (0x00027ccb) wait_bar2_pane

0x8511,	// (0x00027ce3) popup_snote2_single_text_window_g1_ParamLimits

0x8511,	// (0x00027ce3) popup_snote2_single_text_window_g1

0x8539,	// (0x00027d0b) popup_snote2_single_text_window_t1_ParamLimits

0x8539,	// (0x00027d0b) popup_snote2_single_text_window_t1

0x8585,	// (0x00027d57) popup_snote2_single_text_window_t2_ParamLimits

0x8585,	// (0x00027d57) popup_snote2_single_text_window_t2

0x85d1,	// (0x00027da3) popup_snote2_single_text_window_t3_ParamLimits

0x85d1,	// (0x00027da3) popup_snote2_single_text_window_t3

0x8612,	// (0x00027de4) popup_snote2_single_text_window_t4_ParamLimits

0x8612,	// (0x00027de4) popup_snote2_single_text_window_t4

0x8648,	// (0x00027e1a) popup_snote2_single_text_window_t5_ParamLimits

0x8648,	// (0x00027e1a) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x0002f45b) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x0002f45b) popup_snote2_single_text_window_t

0x8673,	// (0x00027e45) popup_snote2_single_graphic_window_g1_ParamLimits

0x8673,	// (0x00027e45) popup_snote2_single_graphic_window_g1

0x869b,	// (0x00027e6d) popup_snote2_single_graphic_window_g2_ParamLimits

0x869b,	// (0x00027e6d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x0002f466) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x0002f466) popup_snote2_single_graphic_window_g

0x86c3,	// (0x00027e95) popup_snote2_single_graphic_window_t1_ParamLimits

0x86c3,	// (0x00027e95) popup_snote2_single_graphic_window_t1

0x870f,	// (0x00027ee1) popup_snote2_single_graphic_window_t2_ParamLimits

0x870f,	// (0x00027ee1) popup_snote2_single_graphic_window_t2

0x85d1,	// (0x00027da3) popup_snote2_single_graphic_window_t3_ParamLimits

0x85d1,	// (0x00027da3) popup_snote2_single_graphic_window_t3

0x8612,	// (0x00027de4) popup_snote2_single_graphic_window_t4_ParamLimits

0x8612,	// (0x00027de4) popup_snote2_single_graphic_window_t4

0x8648,	// (0x00027e1a) popup_snote2_single_graphic_window_t5_ParamLimits

0x8648,	// (0x00027e1a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x0002f46b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x0002f46b) popup_snote2_single_graphic_window_t

0x7137,	// (0x00026909) clock_nsta_pane_cp2_t1

0x7137,	// (0x00026909) clock_nsta_pane_cp2_t2

0x0001,

0xfab9,	// (0x0002f28b) clock_nsta_pane_cp2_t

0x053a,	// (0x0001fd0c) form_field_data_wide_pane_g1_ParamLimits

0x3b8f,	// (0x00023361) form_field_data_wide_pane_g2_ParamLimits

0x3b8f,	// (0x00023361) form_field_data_wide_pane_g2

0x3b9b,	// (0x0002336d) form_field_data_wide_pane_g3_ParamLimits

0x3b9b,	// (0x0002336d) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002ee53) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002ee53) form_field_data_wide_pane_g

0xdf1a,	// (0x0002d6ec) grid_touch_3_pane_ParamLimits

0xdf1a,	// (0x0002d6ec) grid_touch_3_pane

0xe40c,	// (0x0002dbde) cell_touch_3_pane_ParamLimits

0xe40c,	// (0x0002dbde) cell_touch_3_pane

0x769c,	// (0x00026e6e) cell_touch_3_pane_g1

0x769c,	// (0x00026e6e) cell_touch_3_pane_g2

0x0001,

0xfb3e,	// (0x0002f310) cell_touch_3_pane_g

0x3654,	// (0x00022e26) cont_query_data_pane

0x365c,	// (0x00022e2e) cont_query_data_pane_cp1

0x8789,	// (0x00027f5b) button_value_adjust_pane_cp7

0x8791,	// (0x00027f63) query_popup_pane_cp3

0x42f2,	// (0x00023ac4) bg_popup_sub_pane_cp22_ParamLimits

0x1731,	// (0x00020f03) navi_navi_volume_pane_cp2

0x174c,	// (0x00020f1e) popup_side_volume_key_window_g2

0x175b,	// (0x00020f2d) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002eee9) popup_side_volume_key_window_g

0x1778,	// (0x00020f4a) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002eef0) popup_side_volume_key_window_t

0x45a9,	// (0x00023d7b) popup_side_volume_key_window_ParamLimits

0xb5bc,	// (0x0002ad8e) list_double_graphic_pane_g4_ParamLimits

0xb5bc,	// (0x0002ad8e) list_double_graphic_pane_g4

0xdd99,	// (0x0002d56b) list_single_2heading_msg_pane_ParamLimits

0xdd99,	// (0x0002d56b) list_single_2heading_msg_pane

0xbb4b,	// (0x0002b31d) list_single_2heading_msg_pane_g1_ParamLimits

0xbb4b,	// (0x0002b31d) list_single_2heading_msg_pane_g1

0xbb57,	// (0x0002b329) list_single_2heading_msg_pane_g2_ParamLimits

0xbb57,	// (0x0002b329) list_single_2heading_msg_pane_g2

0xbb6a,	// (0x0002b33c) list_single_2heading_msg_pane_g3_ParamLimits

0xbb6a,	// (0x0002b33c) list_single_2heading_msg_pane_g3

0xbb76,	// (0x0002b348) list_single_2heading_msg_pane_g4_ParamLimits

0xbb76,	// (0x0002b348) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x0002f476) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x0002f476) list_single_2heading_msg_pane_g

0xbb8e,	// (0x0002b360) list_single_2heading_msg_pane_t1_ParamLimits

0xbb8e,	// (0x0002b360) list_single_2heading_msg_pane_t1

0xbbb6,	// (0x0002b388) list_single_2heading_msg_pane_t2_ParamLimits

0xbbb6,	// (0x0002b388) list_single_2heading_msg_pane_t2

0xbc21,	// (0x0002b3f3) list_single_2heading_msg_pane_t3_ParamLimits

0xbc21,	// (0x0002b3f3) list_single_2heading_msg_pane_t3

0x0ff3,	// (0x000207c5) list_single_2heading_msg_pane_t4_ParamLimits

0x0ff3,	// (0x000207c5) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x0002f47f) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x0002f47f) list_single_2heading_msg_pane_t

0x3269,	// (0x00022a3b) title_pane_g4_ParamLimits

0x3269,	// (0x00022a3b) title_pane_g4

0x1540,	// (0x00020d12) title_pane_stacon_g3_ParamLimits

0x1540,	// (0x00020d12) title_pane_stacon_g3

0x82b7,	// (0x00027a89) list_single_2graphic_im_pane_g4_ParamLimits

0x82b7,	// (0x00027a89) list_single_2graphic_im_pane_g4

0x6126,	// (0x000258f8) popup_side_volume_key_window_cp

0x696f,	// (0x00026141) main_idle_act2_pane_t1

0x20a7,	// (0x00021879) toolbar_button_pane_g10

0xd136,	// (0x0002c908) popup_toolbar_window_cp1

0x7128,	// (0x000268fa) clock_nsta_pane_cp_t1

0x7128,	// (0x000268fa) clock_nsta_pane_cp_t2

0x0001,

0xfab4,	// (0x0002f286) clock_nsta_pane_cp_t

0x1731,	// (0x00020f03) navi_navi_volume_pane_cp2_ParamLimits

0x1740,	// (0x00020f12) popup_side_volume_key_window_g1_ParamLimits

0x174c,	// (0x00020f1e) popup_side_volume_key_window_g2_ParamLimits

0x175b,	// (0x00020f2d) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002eee9) popup_side_volume_key_window_g_ParamLimits

0x24c1,	// (0x00021c93) fep_hwr_aid_pane

0xdbcb,	// (0x0002d39d) bg_fep_hwr_top_pane_g4_ParamLimits

0x76f8,	// (0x00026eca) fep_hwr_top_pane_g1_ParamLimits

0x770a,	// (0x00026edc) fep_hwr_top_pane_g2_ParamLimits

0x257a,	// (0x00021d4c) fep_hwr_top_pane_g3_ParamLimits

0xfb09,	// (0x0002f2db) fep_hwr_top_pane_g_ParamLimits

0x258f,	// (0x00021d61) fep_hwr_top_text_pane_ParamLimits

0x5ee9,	// (0x000256bb) aid_touch_tab_arrow_arrow_2

0x5ef2,	// (0x000256c4) aid_touch_tab_arrow_left_2

0x24d5,	// (0x00021ca7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x250c,	// (0x00021cde) fep_hwr_prediction_pane

0x786a,	// (0x0002703c) fep_vkb_prediction_pane

0xe1e4,	// (0x0002d9b6) fep_vkb_side_pane_g3_ParamLimits

0xe1e4,	// (0x0002d9b6) fep_vkb_side_pane_g3

0x791a,	// (0x000270ec) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7d9a,	// (0x0002756c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7da7,	// (0x00027579) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x0002f385) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x87b6,	// (0x00027f88) fep_hwr_prediction_pane_g1

0x281c,	// (0x00021fee) fep_hwr_prediction_pane_g2

0x2824,	// (0x00021ff6) fep_hwr_prediction_pane_g3

0x282c,	// (0x00021ffe) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x0002f488) fep_hwr_prediction_pane_g

0x87b6,	// (0x00027f88) fep_vkb_prediction_pane_g1

0x87c0,	// (0x00027f92) fep_vkb_prediction_pane_g2

0x87c8,	// (0x00027f9a) fep_vkb_prediction_pane_g3

0x87d0,	// (0x00027fa2) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0002f491) fep_vkb_prediction_pane_g

0x65ef,	// (0x00025dc1) slider_set_pane_g3

0x6603,	// (0x00025dd5) slider_set_pane_g4

0x661b,	// (0x00025ded) slider_set_pane_g5

0x65ef,	// (0x00025dc1) slider_set_pane_g6

0x2383,	// (0x00021b55) slider_set_pane_g7

0x659c,	// (0x00025d6e) slider_form_pane_g3

0x65a5,	// (0x00025d77) slider_form_pane_g4

0x65ad,	// (0x00025d7f) slider_form_pane_g5

0x659c,	// (0x00025d6e) slider_form_pane_g6

0xdd6b,	// (0x0002d53d) slider_form_pane_g7

0x6c19,	// (0x000263eb) slider_set_pane_vc_g3

0x6c22,	// (0x000263f4) slider_set_pane_vc_g4

0x6c2b,	// (0x000263fd) slider_set_pane_vc_g5

0x6c19,	// (0x000263eb) slider_set_pane_vc_g6

0x6c34,	// (0x00026406) slider_set_pane_vc_g7

0x6df4,	// (0x000265c6) slider_form_pane_vc_g1

0x6dfd,	// (0x000265cf) slider_form_pane_vc_g2

0x6e06,	// (0x000265d8) slider_form_pane_vc_g3

0x6df4,	// (0x000265c6) slider_form_pane_vc_g4

0x6e0f,	// (0x000265e1) slider_form_pane_vc_g5

0x0004,

0xfa86,	// (0x0002f258) slider_form_pane_vc_g

0x3221,	// (0x000229f3) main_idle_act3_pane

0x87d8,	// (0x00027faa) ai3_links_pane

0xe454,	// (0x0002dc26) popup_ai3_data_window_ParamLimits

0xe454,	// (0x0002dc26) popup_ai3_data_window

0x3221,	// (0x000229f3) grid_ai3_links_pane

0xe46e,	// (0x0002dc40) cell_ai3_links_pane_ParamLimits

0xe46e,	// (0x0002dc40) cell_ai3_links_pane

0x8813,	// (0x00027fe5) bg_popup_sub_pane_cp11

0x8820,	// (0x00027ff2) cell_ai3_links_pane_g1

0x3221,	// (0x000229f3) bg_popup_sub_pane_cp12

0x8845,	// (0x00028017) heading_ai3_data_pane

0x884d,	// (0x0002801f) list_ai3_gene_pane

0x8859,	// (0x0002802b) popup_ai3_data_window_g1

0x8861,	// (0x00028033) heading_ai3_data_pane_g1

0x8869,	// (0x0002803b) heading_ai3_data_pane_t1

0x8877,	// (0x00028049) list_double_ai3_gene_pane_ParamLimits

0x8877,	// (0x00028049) list_double_ai3_gene_pane

0x8884,	// (0x00028056) list_single_ai3_gene_pane_ParamLimits

0x8884,	// (0x00028056) list_single_ai3_gene_pane

0x7661,	// (0x00026e33) list_highlight_pane_cp7_ParamLimits

0x7661,	// (0x00026e33) list_highlight_pane_cp7

0x8891,	// (0x00028063) list_single_a13_gene_pane_t1_ParamLimits

0x8891,	// (0x00028063) list_single_a13_gene_pane_t1

0x88a8,	// (0x0002807a) list_single_ai3_gene_pane_g1

0x88b1,	// (0x00028083) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x0002f49a) list_single_ai3_gene_pane_g

0x88b9,	// (0x0002808b) list_double_ai3_gene_pane_g1_ParamLimits

0x88b9,	// (0x0002808b) list_double_ai3_gene_pane_g1

0x88c5,	// (0x00028097) list_double_ai3_gene_pane_t1_ParamLimits

0x88c5,	// (0x00028097) list_double_ai3_gene_pane_t1

0x88e1,	// (0x000280b3) list_double_ai3_gene_pane_t2_ParamLimits

0x88e1,	// (0x000280b3) list_double_ai3_gene_pane_t2

0x88f7,	// (0x000280c9) list_double_ai3_gene_pane_t3_ParamLimits

0x88f7,	// (0x000280c9) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x0002f49f) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x0002f49f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f24,	// (0x000206f6) aid_size_min_col_2

0xe43e,	// (0x0002dc10) aid_size_min_msg_ParamLimits

0xe43e,	// (0x0002dc10) aid_size_min_msg

0xe1f8,	// (0x0002d9ca) fep_vkb_top_text_pane_g2_ParamLimits

0xe1f8,	// (0x0002d9ca) fep_vkb_top_text_pane_g2

0x0001,

0xfb39,	// (0x0002f30b) fep_vkb_top_text_pane_g_ParamLimits

0xfb39,	// (0x0002f30b) fep_vkb_top_text_pane_g

0x3221,	// (0x000229f3) main_hc_apps_shell_pane

0x8914,	// (0x000280e6) grid_hc_apps_pane_ParamLimits

0x8914,	// (0x000280e6) grid_hc_apps_pane

0x8923,	// (0x000280f5) list_hc_apps_pane

0x892b,	// (0x000280fd) scroll_pane_cp37_ParamLimits

0x892b,	// (0x000280fd) scroll_pane_cp37

0xe488,	// (0x0002dc5a) cell_hc_apps_pane_ParamLimits

0xe488,	// (0x0002dc5a) cell_hc_apps_pane

0xe546,	// (0x0002dd18) cell_hc_apps_pane_g1_ParamLimits

0xe546,	// (0x0002dd18) cell_hc_apps_pane_g1

0x8a16,	// (0x000281e8) cell_hc_apps_pane_g2_ParamLimits

0x8a16,	// (0x000281e8) cell_hc_apps_pane_g2

0x8a32,	// (0x00028204) cell_hc_apps_pane_g3_ParamLimits

0x8a32,	// (0x00028204) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x0002f4a6) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x0002f4a6) cell_hc_apps_pane_g

0xe573,	// (0x0002dd45) cell_hc_apps_pane_t1_ParamLimits

0xe573,	// (0x0002dd45) cell_hc_apps_pane_t1

0x359e,	// (0x00022d70) grid_highlight_pane_cp10_ParamLimits

0x359e,	// (0x00022d70) grid_highlight_pane_cp10

0xe5b1,	// (0x0002dd83) list_single_hc_apps_pane_ParamLimits

0xe5b1,	// (0x0002dd83) list_single_hc_apps_pane

0xe5de,	// (0x0002ddb0) list_single_hc_apps_pane_g1

0xbc8f,	// (0x0002b461) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x0002f4ad) list_single_hc_apps_pane_g

0xbca8,	// (0x0002b47a) list_single_hc_apps_pane_g2_copy1

0xbcc4,	// (0x0002b496) list_single_hc_apps_pane_t1

0x3315,	// (0x00022ae7) bg_set_opt_pane_cp_ParamLimits

0x1468,	// (0x00020c3a) setting_slider_pane_t1_ParamLimits

0x1481,	// (0x00020c53) setting_slider_pane_t2_ParamLimits

0x149b,	// (0x00020c6d) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002ed36) setting_slider_pane_t_ParamLimits

0x14b3,	// (0x00020c85) slider_set_pane_ParamLimits

0x19da,	// (0x000211ac) control_pane_g5_ParamLimits

0x19da,	// (0x000211ac) control_pane_g5

0x63eb,	// (0x00025bbd) slider_set_pane_g1_ParamLimits

0x2377,	// (0x00021b49) slider_set_pane_g2_ParamLimits

0x65ef,	// (0x00025dc1) slider_set_pane_g3_ParamLimits

0x6603,	// (0x00025dd5) slider_set_pane_g4_ParamLimits

0x661b,	// (0x00025ded) slider_set_pane_g5_ParamLimits

0x65ef,	// (0x00025dc1) slider_set_pane_g6_ParamLimits

0x2383,	// (0x00021b55) slider_set_pane_g7_ParamLimits

0xf95e,	// (0x0002f130) slider_set_pane_g_ParamLimits

0x468a,	// (0x00023e5c) navi_icon_text_pane_ParamLimits

0xd519,	// (0x0002cceb) aid_fill_nsta_2_ParamLimits

0xd550,	// (0x0002cd22) aid_touch_tab_arrow_left_ParamLimits

0xd566,	// (0x0002cd38) aid_touch_tab_arrow_right_ParamLimits

0xd601,	// (0x0002cdd3) clock_nsta_pane_ParamLimits

0x5ecb,	// (0x0002569d) navi_icon_pane_g1_ParamLimits

0x5ed7,	// (0x000256a9) navi_text_pane_t1_ParamLimits

0xdfe1,	// (0x0002d7b3) navi_icon_text_pane_g1_ParamLimits

0x7240,	// (0x00026a12) navi_icon_text_pane_t1_ParamLimits

0xe5de,	// (0x0002ddb0) list_single_hc_apps_pane_g1_ParamLimits

0xbc8f,	// (0x0002b461) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x0002f4ad) list_single_hc_apps_pane_g_ParamLimits

0xbca8,	// (0x0002b47a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbcc4,	// (0x0002b496) list_single_hc_apps_pane_t1_ParamLimits

0xbe5e,	// (0x0002b630) popup_toolbar2_fixed_window_ParamLimits

0xbe5e,	// (0x0002b630) popup_toolbar2_fixed_window

0xc800,	// (0x0002bfd2) popup_toolbar2_float_window

0x3221,	// (0x000229f3) bg_popup_sub_pane_cp27

0x8b09,	// (0x000282db) grid_toolbar2_float_pane

0x3221,	// (0x000229f3) bg_popup_sub_pane_cp26

0x8b09,	// (0x000282db) grid_toolbar2_fixed_pane

0xe5f7,	// (0x0002ddc9) cell_toolbar2_fixed_pane_ParamLimits

0xe5f7,	// (0x0002ddc9) cell_toolbar2_fixed_pane

0xe611,	// (0x0002dde3) cell_toolbar2_fixed_pane_g1

0x8b2a,	// (0x000282fc) toolbar2_fixed_button_pane

0x5042,	// (0x00024814) toolbar2_fixed_button_pane_g1

0x504a,	// (0x0002481c) toolbar2_fixed_button_pane_g2

0x5052,	// (0x00024824) toolbar2_fixed_button_pane_g3

0x505a,	// (0x0002482c) toolbar2_fixed_button_pane_g4

0x5062,	// (0x00024834) toolbar2_fixed_button_pane_g5

0x506a,	// (0x0002483c) toolbar2_fixed_button_pane_g6

0x5072,	// (0x00024844) toolbar2_fixed_button_pane_g7

0x507a,	// (0x0002484c) toolbar2_fixed_button_pane_g8

0x5082,	// (0x00024854) toolbar2_fixed_button_pane_g9

0x0008,

0xf860,	// (0x0002f032) toolbar2_fixed_button_pane_g

0x8b32,	// (0x00028304) cell_toolbar2_float_pane_ParamLimits

0x8b32,	// (0x00028304) cell_toolbar2_float_pane

0x8b43,	// (0x00028315) cell_toolbar2_float_pane_g1

0x8b2a,	// (0x000282fc) toolbar2_fixed_button_pane_cp

0xe0d2,	// (0x0002d8a4) fep_vkb_accented_list_pane_ParamLimits

0xe0d2,	// (0x0002d8a4) fep_vkb_accented_list_pane

0x26dd,	// (0x00021eaf) bg_popup_fep_shadow_pane_g9

0x480a,	// (0x00023fdc) bg_popup_fep_shadow_pane_cp3

0x3cd8,	// (0x000234aa) list_accented_list_pane

0x8b4c,	// (0x0002831e) list_single_accented_list_pane_ParamLimits

0x8b4c,	// (0x0002831e) list_single_accented_list_pane

0x480a,	// (0x00023fdc) list_highlight_pane_cp10

0x8b5d,	// (0x0002832f) list_single_accented_list_pane_t1

0xc72a,	// (0x0002befc) popup_slider_window_ParamLimits

0xc72a,	// (0x0002befc) popup_slider_window

0x8799,	// (0x00027f6b) aid_indentation_list_msg

0xe70a,	// (0x0002dedc) bg_popup_window_pane_cp19

0x8c81,	// (0x00028453) popup_slider_window_g1

0x8c9d,	// (0x0002846f) popup_slider_window_g2

0x8cb9,	// (0x0002848b) popup_slider_window_g3

0x0005,

0xfce0,	// (0x0002f4b2) popup_slider_window_g

0x8d15,	// (0x000284e7) popup_slider_window_t1

0x8d89,	// (0x0002855b) small_volume_slider_vertical_pane

0x769c,	// (0x00026e6e) small_volume_slider_vertical_pane_g1

0x769c,	// (0x00026e6e) small_volume_slider_vertical_pane_g2

0x8da5,	// (0x00028577) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x0002f4c4) small_volume_slider_vertical_pane_g

0xbdcc,	// (0x0002b59e) area_side_right_pane_ParamLimits

0xbdcc,	// (0x0002b59e) area_side_right_pane

0xca81,	// (0x0002c253) aid_size_side_button_ParamLimits

0xca81,	// (0x0002c253) aid_size_side_button

0xca9a,	// (0x0002c26c) grid_sctrl_middle_pane_ParamLimits

0xca9a,	// (0x0002c26c) grid_sctrl_middle_pane

0x2867,	// (0x00022039) sctrl_sk_bottom_pane

0x2878,	// (0x0002204a) sctrl_sk_top_pane

0x288a,	// (0x0002205c) aid_touch_sctrl_top

0x359e,	// (0x00022d70) bg_sctrl_sk_pane_ParamLimits

0x359e,	// (0x00022d70) bg_sctrl_sk_pane

0x2897,	// (0x00022069) sctrl_sk_top_pane_g1

0x28a4,	// (0x00022076) sctrl_sk_top_pane_t1

0x288a,	// (0x0002205c) aid_touch_sctrl_bottom

0x359e,	// (0x00022d70) bg_sctrl_sk_pane_cp_ParamLimits

0x359e,	// (0x00022d70) bg_sctrl_sk_pane_cp

0x28bf,	// (0x00022091) sctrl_sk_bottom_pane_g1

0x28a4,	// (0x00022076) sctrl_sk_bottom_pane_t1

0xcab4,	// (0x0002c286) cell_sctrl_middle_pane_ParamLimits

0xcab4,	// (0x0002c286) cell_sctrl_middle_pane

0xcac5,	// (0x0002c297) aid_touch_sctrl_middle_ParamLimits

0xcac5,	// (0x0002c297) aid_touch_sctrl_middle

0xcad2,	// (0x0002c2a4) bg_sctrl_middle_pane_ParamLimits

0xcad2,	// (0x0002c2a4) bg_sctrl_middle_pane

0x8e2d,	// (0x000285ff) cell_sctrl_middle_pane_g1_ParamLimits

0x8e2d,	// (0x000285ff) cell_sctrl_middle_pane_g1

0xcae0,	// (0x0002c2b2) cell_sctrl_middle_pane_g2_ParamLimits

0xcae0,	// (0x0002c2b2) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x0002f4d0) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x0002f4d0) cell_sctrl_middle_pane_g

0x5042,	// (0x00024814) bg_sctrl_middle_pane_g1

0x504a,	// (0x0002481c) bg_sctrl_middle_pane_g2

0x5052,	// (0x00024824) bg_sctrl_middle_pane_g3

0x505a,	// (0x0002482c) bg_sctrl_middle_pane_g4

0x5062,	// (0x00024834) bg_sctrl_middle_pane_g5

0x506a,	// (0x0002483c) bg_sctrl_middle_pane_g6

0x5072,	// (0x00024844) bg_sctrl_middle_pane_g7

0x507a,	// (0x0002484c) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x0002f4d5) bg_sctrl_middle_pane_g

0x5082,	// (0x00024854) bg_sctrl_middle_pane_g8_copy1

0x5042,	// (0x00024814) bg_sctrl_sk_pane_g1

0x504a,	// (0x0002481c) bg_sctrl_sk_pane_g2

0x5052,	// (0x00024824) bg_sctrl_sk_pane_g3

0x0008,

0xf860,	// (0x0002f032) bg_sctrl_sk_pane_g

0x3ab0,	// (0x00023282) aid_size_touch_scroll_bar

0x505a,	// (0x0002482c) bg_sctrl_sk_pane_g4

0x5062,	// (0x00024834) bg_sctrl_sk_pane_g5

0x506a,	// (0x0002483c) bg_sctrl_sk_pane_g6

0x5072,	// (0x00024844) bg_sctrl_sk_pane_g7

0x507a,	// (0x0002484c) bg_sctrl_sk_pane_g8

0x5082,	// (0x00024854) bg_sctrl_sk_pane_g9

0x1b66,	// (0x00021338) popup_fep_china_hwr2_fs_candidate_window

0xc24a,	// (0x0002ba1c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc24a,	// (0x0002ba1c) popup_fep_china_hwr2_fs_control_window

0x791a,	// (0x000270ec) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x0002f4cb) sctrl_sk_top_pane_g

0xe7c2,	// (0x0002df94) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7c2,	// (0x0002df94) aid_fep_china_hwr2_fs_cell

0xe7d6,	// (0x0002dfa8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7d6,	// (0x0002dfa8) bg_popup_fep_shadow_pane_cp4

0xe7ed,	// (0x0002dfbf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7ed,	// (0x0002dfbf) bg_popup_fep_shadow_pane_cp5

0xe7ff,	// (0x0002dfd1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7ff,	// (0x0002dfd1) popup_fep_china_hwr2_fs_control_bar_grid

0xe813,	// (0x0002dfe5) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e01,	// (0x000285d3) aid_fep_china_hwr2_fs_candi_cell

0x3221,	// (0x000229f3) bg_popup_fep_shadow_pane_cp6

0x8e0b,	// (0x000285dd) popup_fep_china_hwr2_fs_candidate_grid

0xe81b,	// (0x0002dfed) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe81b,	// (0x0002dfed) cell_fep_china_hwr2_fs_funtion_grid

0x769c,	// (0x00026e6e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e2d,	// (0x000285ff) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e2d,	// (0x000285ff) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e3b,	// (0x0002860d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e3b,	// (0x0002860d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x0002f4e6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x0002f4e6) cell_fep_china_hwr2_fs_funtion_grid_g

0xe833,	// (0x0002e005) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe833,	// (0x0002e005) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe848,	// (0x0002e01a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe848,	// (0x0002e01a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x0002f4eb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x0002f4eb) cell_fep_china_hwr2_fs_funtion_grid_t

0x8e82,	// (0x00028654) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8e8a,	// (0x0002865c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8e92,	// (0x00028664) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x0002f4f0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8e9a,	// (0x0002866c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8e9a,	// (0x0002866c) cell_fep_china_hwr2_fs_candidate_grid

0x8eb3,	// (0x00028685) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8ebb,	// (0x0002868d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x769c,	// (0x00026e6e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x769c,	// (0x00026e6e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3e,	// (0x0002f310) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ec3,	// (0x00028695) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4c46,	// (0x00024418) clock_nsta_pane_cp_24_ParamLimits

0x4c46,	// (0x00024418) clock_nsta_pane_cp_24

0x4cc4,	// (0x00024496) indicator_nsta_pane_cp_24_ParamLimits

0x4cc4,	// (0x00024496) indicator_nsta_pane_cp_24

0x5d47,	// (0x00025519) heading_pane_g1

0x0001,

0xf8c5,	// (0x0002f097) heading_pane_g

0x67b8,	// (0x00025f8a) grid_sct_catagory_button_pane

0x67e8,	// (0x00025fba) scroll_pane_cp5_ParamLimits

0x7282,	// (0x00026a54) button_value_adjust_pane_cp5_ParamLimits

0x7282,	// (0x00026a54) button_value_adjust_pane_cp5

0x736d,	// (0x00026b3f) form2_midp_time_pane_ParamLimits

0x8ed1,	// (0x000286a3) cell_sct_catagory_button_pane_ParamLimits

0x8ed1,	// (0x000286a3) cell_sct_catagory_button_pane

0x7661,	// (0x00026e33) bg_button_pane_cp01_ParamLimits

0x7661,	// (0x00026e33) bg_button_pane_cp01

0x769c,	// (0x00026e6e) cell_sct_catagory_button_pane_g1

0xc7a3,	// (0x0002bf75) popup_tb_extension_window

0xe864,	// (0x0002e036) aid_size_cell_ext_ParamLimits

0xe864,	// (0x0002e036) aid_size_cell_ext

0x38f2,	// (0x000230c4) bg_tb_trans_pane_cp1_ParamLimits

0x38f2,	// (0x000230c4) bg_tb_trans_pane_cp1

0xe88a,	// (0x0002e05c) grid_tb_ext_pane_ParamLimits

0xe88a,	// (0x0002e05c) grid_tb_ext_pane

0xe8c5,	// (0x0002e097) cell_tb_ext_pane_ParamLimits

0xe8c5,	// (0x0002e097) cell_tb_ext_pane

0xe8ed,	// (0x0002e0bf) cell_tb_ext_pane_g1_ParamLimits

0xe8ed,	// (0x0002e0bf) cell_tb_ext_pane_g1

0x8f65,	// (0x00028737) cell_tb_ext_pane_t1

0x359e,	// (0x00022d70) list_highlight_pane_cp11_ParamLimits

0x359e,	// (0x00022d70) list_highlight_pane_cp11

0x139b,	// (0x00020b6d) popup_uni_indicator_window_ParamLimits

0x139b,	// (0x00020b6d) popup_uni_indicator_window

0x3b81,	// (0x00023353) bg_popup_sub_pane_cp14

0x8f80,	// (0x00028752) list_uniindi_pane

0x8f8c,	// (0x0002875e) uniindi_top_pane

0x359e,	// (0x00022d70) bg_uniindi_top_pane

0x8fab,	// (0x0002877d) uniindi_top_pane_g1

0x8fc1,	// (0x00028793) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x0002f4f7) uniindi_top_pane_g

0x8feb,	// (0x000287bd) uniindi_top_pane_t1

0x9015,	// (0x000287e7) list_single_uniindi_pane_ParamLimits

0x9015,	// (0x000287e7) list_single_uniindi_pane

0x769c,	// (0x00026e6e) bg_uniindi_top_pane_g1

0x9028,	// (0x000287fa) list_single_uniindi_pane_g1

0x903b,	// (0x0002880d) list_single_uniindi_pane_t1

0x3221,	// (0x000229f3) control_bg_pane

0x9060,	// (0x00028832) bg_sctrl_sk_pane_cp1

0x9069,	// (0x0002883b) bg_sctrl_sk_pane_cp2

0x9072,	// (0x00028844) control_bg_pane_g1

0x907b,	// (0x0002884d) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x0002f500) control_bg_pane_g

0x70cb,	// (0x0002689d) cell_indicator_nsta_pane_g1_ParamLimits

0xdf49,	// (0x0002d71b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa2,	// (0x0002f274) cell_indicator_nsta_pane_g_ParamLimits

0x0cd5,	// (0x000204a7) form2_midp_time_pane_t1_ParamLimits

0x24b3,	// (0x00021c85) main_idle_act4_pane_ParamLimits

0x24b3,	// (0x00021c85) main_idle_act4_pane

0xc7a3,	// (0x0002bf75) popup_tb_extension_window_ParamLimits

0xe8ac,	// (0x0002e07e) tb_ext_find_pane_ParamLimits

0xe8ac,	// (0x0002e07e) tb_ext_find_pane

0x9084,	// (0x00028856) ai_gene_pane_1_cp1

0x4943,	// (0x00024115) ai_gene_pane_2_cp1

0x908c,	// (0x0002885e) list_single_idle_plugin_calendar_pane

0x9095,	// (0x00028867) list_single_idle_plugin_notification_pane

0x909e,	// (0x00028870) list_single_idle_plugin_player_pane

0xe90a,	// (0x0002e0dc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe90a,	// (0x0002e0dc) list_single_idle_plugin_shortcut_pane

0xe932,	// (0x0002e104) main_idle_act4_pane_t1

0xe948,	// (0x0002e11a) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x0002f505) main_idle_act4_pane_t

0xe95e,	// (0x0002e130) middle_sk_idle_act4_pane_ParamLimits

0xe95e,	// (0x0002e130) middle_sk_idle_act4_pane

0xe97a,	// (0x0002e14c) popup_clock_digital_analogue_window_cp2

0xe9a2,	// (0x0002e174) shortcut_wheel_idle_act4_pane_ParamLimits

0xe9a2,	// (0x0002e174) shortcut_wheel_idle_act4_pane

0x769c,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g1

0x769c,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g2

0x769c,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g3

0x769c,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g4

0x769c,	// (0x00026e6e) shortcut_wheel_idle_act4_pane_g5

0x9131,	// (0x00028903) shortcut_wheel_idle_act4_pane_g6

0x9139,	// (0x0002890b) shortcut_wheel_idle_act4_pane_g7

0x9141,	// (0x00028913) shortcut_wheel_idle_act4_pane_g8

0x9149,	// (0x0002891b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x0002f50a) shortcut_wheel_idle_act4_pane_g

0xdbcb,	// (0x0002d39d) middle_sk_idle_act4_pane_g1_ParamLimits

0xdbcb,	// (0x0002d39d) middle_sk_idle_act4_pane_g1

0xea1f,	// (0x0002e1f1) middle_sk_idle_act4_pane_g2_ParamLimits

0xea1f,	// (0x0002e1f1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x0002f52d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x0002f52d) middle_sk_idle_act4_pane_g

0xea37,	// (0x0002e209) middle_sk_idle_act4_pane_t1_ParamLimits

0xea37,	// (0x0002e209) middle_sk_idle_act4_pane_t1

0xea66,	// (0x0002e238) grid_ai_shortcut_pane_ParamLimits

0xea66,	// (0x0002e238) grid_ai_shortcut_pane

0xea83,	// (0x0002e255) list_highlight_pane_cp16_ParamLimits

0xea83,	// (0x0002e255) list_highlight_pane_cp16

0xea90,	// (0x0002e262) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea90,	// (0x0002e262) list_single_idle_plugin_shortcut_pane_g1

0xea9c,	// (0x0002e26e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea9c,	// (0x0002e26e) list_single_idle_plugin_shortcut_pane_g2

0xeab8,	// (0x0002e28a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeab8,	// (0x0002e28a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x0002f532) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x0002f532) list_single_idle_plugin_shortcut_pane_g

0xeacd,	// (0x0002e29f) cell_ai_shortcut_pane_ParamLimits

0xeacd,	// (0x0002e29f) cell_ai_shortcut_pane

0xeae3,	// (0x0002e2b5) cell_ai_shortcut_pane_g1_ParamLimits

0xeae3,	// (0x0002e2b5) cell_ai_shortcut_pane_g1

0x9084,	// (0x00028856) ai_gene_pane_1_cp2

0x9279,	// (0x00028a4b) ai_gene_pane_2_cp2

0x9281,	// (0x00028a53) list_highlight_pane_cp15

0x928a,	// (0x00028a5c) list_single_idle_plugin_calendar_pane_g1

0x9281,	// (0x00028a53) list_highlight_pane_cp17

0x9292,	// (0x00028a64) list_single_idle_plugin_calendar_pane_g1_copy1

0x929a,	// (0x00028a6c) list_single_idle_plugin_player_pane_g1

0x6a11,	// (0x000261e3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x0002f539) list_single_idle_plugin_player_pane_g

0x92a2,	// (0x00028a74) list_single_idle_plugin_player_pane_t1

0x92b0,	// (0x00028a82) list_single_idle_plugin_player_pane_t2

0x92be,	// (0x00028a90) list_single_idle_plugin_player_pane_t3

0x92cc,	// (0x00028a9e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x0002f53e) list_single_idle_plugin_player_pane_t

0x92da,	// (0x00028aac) wait_bar_pane_cp15

0x92e2,	// (0x00028ab4) grid_ai_notification_pane

0x6a11,	// (0x000261e3) list_single_idle_plugin_notification_pane_g1

0xeb05,	// (0x0002e2d7) cell_ai_notification_pane_ParamLimits

0xeb05,	// (0x0002e2d7) cell_ai_notification_pane

0x92f8,	// (0x00028aca) cell_ai_notification_pane_g1

0x9300,	// (0x00028ad2) cell_ai_notification_pane_t1

0xeb12,	// (0x0002e2e4) tb_ext_find_button_pane

0xeb1a,	// (0x0002e2ec) tb_ext_find_pane_g1

0xeb22,	// (0x0002e2f4) tb_ext_find_pane_t1

0x4202,	// (0x000239d4) tb_ext_find_button_pane_g1

0x932c,	// (0x00028afe) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x0002f547) tb_ext_find_button_pane_g

0xe932,	// (0x0002e104) main_idle_act4_pane_t1_ParamLimits

0xe948,	// (0x0002e11a) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x0002f505) main_idle_act4_pane_t_ParamLimits

0xe97a,	// (0x0002e14c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe992,	// (0x0002e164) sat_plugin_idle_act4_pane_ParamLimits

0xe992,	// (0x0002e164) sat_plugin_idle_act4_pane

0xeb30,	// (0x0002e302) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb30,	// (0x0002e302) sat_plugin_idle_act4_pane_t1

0xeb48,	// (0x0002e31a) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb48,	// (0x0002e31a) sat_plugin_idle_act4_pane_t2

0xeb60,	// (0x0002e332) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb60,	// (0x0002e332) sat_plugin_idle_act4_pane_t3

0xeb78,	// (0x0002e34a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb78,	// (0x0002e34a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x0002f54c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x0002f54c) sat_plugin_idle_act4_pane_t

0x12d6,	// (0x00020aa8) popup_battery_window_ParamLimits

0x12d6,	// (0x00020aa8) popup_battery_window

0x359e,	// (0x00022d70) bg_popup_sub_pane_cp25_ParamLimits

0x359e,	// (0x00022d70) bg_popup_sub_pane_cp25

0x9381,	// (0x00028b53) popup_battery_window_g1_ParamLimits

0x9381,	// (0x00028b53) popup_battery_window_g1

0x938d,	// (0x00028b5f) popup_battery_window_t1_ParamLimits

0x938d,	// (0x00028b5f) popup_battery_window_t1

0x939f,	// (0x00028b71) popup_battery_window_t2_ParamLimits

0x939f,	// (0x00028b71) popup_battery_window_t2

0x0001,

0xfd83,	// (0x0002f555) popup_battery_window_t_ParamLimits

0xfd83,	// (0x0002f555) popup_battery_window_t

0xd419,	// (0x0002cbeb) midp_canvas_pane_ParamLimits

0xd474,	// (0x0002cc46) midp_keypad_pane_ParamLimits

0xd474,	// (0x0002cc46) midp_keypad_pane

0x4b4a,	// (0x0002431c) main_midp_pane_ParamLimits

0x7146,	// (0x00026918) signal_pane_g2_cp_ParamLimits

0xeb90,	// (0x0002e362) aid_size_cell_midp_keypad_ParamLimits

0xeb90,	// (0x0002e362) aid_size_cell_midp_keypad

0xebae,	// (0x0002e380) midp_keyp_game_grid_pane_ParamLimits

0xebae,	// (0x0002e380) midp_keyp_game_grid_pane

0xebd5,	// (0x0002e3a7) midp_keyp_rocker_pane_ParamLimits

0xebd5,	// (0x0002e3a7) midp_keyp_rocker_pane

0xec1e,	// (0x0002e3f0) midp_keyp_sk_left_pane_ParamLimits

0xec1e,	// (0x0002e3f0) midp_keyp_sk_left_pane

0xec70,	// (0x0002e442) midp_keyp_sk_right_pane_ParamLimits

0xec70,	// (0x0002e442) midp_keyp_sk_right_pane

0x3221,	// (0x000229f3) bg_button_pane_cp03

0xecc2,	// (0x0002e494) midp_keyp_sk_left_pane_g1

0x3221,	// (0x000229f3) bg_button_pane_cp04

0xecc2,	// (0x0002e494) midp_keyp_sk_right_pane_g1

0x769c,	// (0x00026e6e) midp_keyp_rocker_pane_g1

0xeccb,	// (0x0002e49d) keyp_game_cell_pane_ParamLimits

0xeccb,	// (0x0002e49d) keyp_game_cell_pane

0x3221,	// (0x000229f3) bg_button_pane_cp02

0xecef,	// (0x0002e4c1) keyp_game_cell_pane_g1

0xbe0e,	// (0x0002b5e0) popup_fep_vkb2_window_ParamLimits

0xbe0e,	// (0x0002b5e0) popup_fep_vkb2_window

0xcaec,	// (0x0002c2be) aid_size_cell_vkb2_ParamLimits

0xcaec,	// (0x0002c2be) aid_size_cell_vkb2

0xcb22,	// (0x0002c2f4) popup_fep_vkb2_window_g1_ParamLimits

0xcb22,	// (0x0002c2f4) popup_fep_vkb2_window_g1

0xcb72,	// (0x0002c344) vkb2_area_bottom_pane_ParamLimits

0xcb72,	// (0x0002c344) vkb2_area_bottom_pane

0xcbc6,	// (0x0002c398) vkb2_area_keypad_pane_ParamLimits

0xcbc6,	// (0x0002c398) vkb2_area_keypad_pane

0xcc0e,	// (0x0002c3e0) vkb2_area_top_pane_ParamLimits

0xcc0e,	// (0x0002c3e0) vkb2_area_top_pane

0xcc94,	// (0x0002c466) vkb2_top_entry_pane_ParamLimits

0xcc94,	// (0x0002c466) vkb2_top_entry_pane

0xccc1,	// (0x0002c493) vkb2_top_grid_left_pane_ParamLimits

0xccc1,	// (0x0002c493) vkb2_top_grid_left_pane

0xcce1,	// (0x0002c4b3) vkb2_top_grid_right_pane_ParamLimits

0xcce1,	// (0x0002c4b3) vkb2_top_grid_right_pane

0x2b1d,	// (0x000222ef) vkb2_cell_keypad_pane_ParamLimits

0x2b1d,	// (0x000222ef) vkb2_cell_keypad_pane

0xcd27,	// (0x0002c4f9) vkb2_area_bottom_grid_pane_ParamLimits

0xcd27,	// (0x0002c4f9) vkb2_area_bottom_grid_pane

0xcd51,	// (0x0002c523) vkb2_area_bottom_pane_g1_ParamLimits

0xcd51,	// (0x0002c523) vkb2_area_bottom_pane_g1

0xcd77,	// (0x0002c549) vkb2_area_bottom_pane_g2_ParamLimits

0xcd77,	// (0x0002c549) vkb2_area_bottom_pane_g2

0xcda8,	// (0x0002c57a) vkb2_area_bottom_pane_g3_ParamLimits

0xcda8,	// (0x0002c57a) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x0002f55a) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x0002f55a) vkb2_area_bottom_pane_g

0x2cc7,	// (0x00022499) vkb2_top_cell_left_pane_ParamLimits

0x2cc7,	// (0x00022499) vkb2_top_cell_left_pane

0xecf8,	// (0x0002e4ca) vkb2_top_entry_pane_g1_ParamLimits

0xecf8,	// (0x0002e4ca) vkb2_top_entry_pane_g1

0xed06,	// (0x0002e4d8) vkb2_top_entry_pane_t1_ParamLimits

0xed06,	// (0x0002e4d8) vkb2_top_entry_pane_t1

0x9548,	// (0x00028d1a) vkb2_top_entry_pane_t2_ParamLimits

0x9548,	// (0x00028d1a) vkb2_top_entry_pane_t2

0x957a,	// (0x00028d4c) vkb2_top_entry_pane_t3_ParamLimits

0x957a,	// (0x00028d4c) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x0002f561) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x0002f561) vkb2_top_entry_pane_t

0xce12,	// (0x0002c5e4) vkb2_top_grid_right_pane_g1_ParamLimits

0xce12,	// (0x0002c5e4) vkb2_top_grid_right_pane_g1

0x2d2a,	// (0x000224fc) vkb2_top_grid_right_pane_g2_ParamLimits

0x2d2a,	// (0x000224fc) vkb2_top_grid_right_pane_g2

0x2d42,	// (0x00022514) vkb2_top_grid_right_pane_g3_ParamLimits

0x2d42,	// (0x00022514) vkb2_top_grid_right_pane_g3

0xce28,	// (0x0002c5fa) vkb2_top_grid_right_pane_g4_ParamLimits

0xce28,	// (0x0002c5fa) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x0002f568) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x0002f568) vkb2_top_grid_right_pane_g

0x2d70,	// (0x00022542) vkb2_top_cell_left_pane_g1

0x2d87,	// (0x00022559) vkb2_cell_keypad_pane_g1_ParamLimits

0x2d87,	// (0x00022559) vkb2_cell_keypad_pane_g1

0x959e,	// (0x00028d70) vkb2_cell_keypad_pane_t1_ParamLimits

0x959e,	// (0x00028d70) vkb2_cell_keypad_pane_t1

0x2d95,	// (0x00022567) vkb2_cell_bottom_grid_pane_ParamLimits

0x2d95,	// (0x00022567) vkb2_cell_bottom_grid_pane

0x2dce,	// (0x000225a0) vkb2_cell_bottom_grid_pane_g1

0xe9c3,	// (0x0002e195) aid_call2_pane_cp02

0xe9cb,	// (0x0002e19d) aid_call_pane_cp02

0xe9d3,	// (0x0002e1a5) clock_digital_number_pane_cp10

0xe9db,	// (0x0002e1ad) clock_digital_number_pane_cp11

0xe9e3,	// (0x0002e1b5) clock_digital_number_pane_cp12

0xe9eb,	// (0x0002e1bd) clock_digital_number_pane_cp13

0xe9f3,	// (0x0002e1c5) clock_digital_separator_pane_cp10

0x4202,	// (0x000239d4) popup_clock_digital_analogue_window_cp2_g1

0x4202,	// (0x000239d4) popup_clock_digital_analogue_window_cp2_g2

0xe9fb,	// (0x0002e1cd) popup_clock_digital_analogue_window_cp2_g3

0x4202,	// (0x000239d4) popup_clock_digital_analogue_window_cp2_g4

0xe9fb,	// (0x0002e1cd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x0002f51d) popup_clock_digital_analogue_window_cp2_g

0xea03,	// (0x0002e1d5) popup_clock_digital_analogue_window_cp2_t1

0xea11,	// (0x0002e1e3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x0002f528) popup_clock_digital_analogue_window_cp2_t

0x769c,	// (0x00026e6e) clock_digital_number_pane_cp10_g1

0x769c,	// (0x00026e6e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002f310) clock_digital_number_pane_cp10_g

0x769c,	// (0x00026e6e) clock_digital_separator_pane_cp10_g1

0x769c,	// (0x00026e6e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3e,	// (0x0002f310) clock_digital_separator_pane_cp10_g

0x8fcd,	// (0x0002879f) uniindi_top_pane_g3

0x8fde,	// (0x000287b0) uniindi_top_pane_g4

0x2ba8,	// (0x0002237a) vkb2_row_keypad_pane_ParamLimits

0x2ba8,	// (0x0002237a) vkb2_row_keypad_pane

0x2dea,	// (0x000225bc) vkb2_cell_t_keypad_pane_ParamLimits

0x2dea,	// (0x000225bc) vkb2_cell_t_keypad_pane

0x2dfa,	// (0x000225cc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2dfa,	// (0x000225cc) vkb2_cell_t_keypad_pane_cp08

0x2e0d,	// (0x000225df) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2e0d,	// (0x000225df) vkb2_cell_t_keypad_pane_cp09

0x2e21,	// (0x000225f3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2e21,	// (0x000225f3) vkb2_cell_t_keypad_pane_cp01

0x2e32,	// (0x00022604) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2e32,	// (0x00022604) vkb2_cell_t_keypad_pane_cp02

0x2e43,	// (0x00022615) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2e43,	// (0x00022615) vkb2_cell_t_keypad_pane_cp03

0x2e54,	// (0x00022626) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2e54,	// (0x00022626) vkb2_cell_t_keypad_pane_cp04

0x2e65,	// (0x00022637) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2e65,	// (0x00022637) vkb2_cell_t_keypad_pane_cp05

0x2e76,	// (0x00022648) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2e76,	// (0x00022648) vkb2_cell_t_keypad_pane_cp06

0x2e87,	// (0x00022659) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2e87,	// (0x00022659) vkb2_cell_t_keypad_pane_cp07

0x2e98,	// (0x0002266a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2e98,	// (0x0002266a) vkb2_cell_t_keypad_pane_cp10

0x791a,	// (0x000270ec) vkb2_cell_t_keypad_pane_g1

0x95b5,	// (0x00028d87) vkb2_cell_t_keypad_pane_t1

0x3221,	// (0x000229f3) popup_grid_graphic2_window

0xed3f,	// (0x0002e511) aid_size_cell_graphic2_ParamLimits

0xed3f,	// (0x0002e511) aid_size_cell_graphic2

0xed7d,	// (0x0002e54f) bg_popup_window_pane_cp21_ParamLimits

0xed7d,	// (0x0002e54f) bg_popup_window_pane_cp21

0xed8b,	// (0x0002e55d) graphic2_pages_pane_ParamLimits

0xed8b,	// (0x0002e55d) graphic2_pages_pane

0xede1,	// (0x0002e5b3) grid_graphic2_control_pane_ParamLimits

0xede1,	// (0x0002e5b3) grid_graphic2_control_pane

0xee29,	// (0x0002e5fb) grid_graphic2_pane_ParamLimits

0xee29,	// (0x0002e5fb) grid_graphic2_pane

0xeeb0,	// (0x0002e682) cell_graphic2_pane

0x3221,	// (0x000229f3) main_comp_mode_pane

0x884d,	// (0x0002801f) list_ai3_gene_pane_ParamLimits

0xe70a,	// (0x0002dedc) bg_popup_window_pane_cp19_ParamLimits

0x8c23,	// (0x000283f5) bg_touch_area_indi_pane_ParamLimits

0x8c23,	// (0x000283f5) bg_touch_area_indi_pane

0x8c39,	// (0x0002840b) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c39,	// (0x0002840b) bg_touch_area_indi_pane_cp01

0x8c4f,	// (0x00028421) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c4f,	// (0x00028421) bg_touch_area_indi_pane_cp02

0x8c67,	// (0x00028439) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c67,	// (0x00028439) bg_touch_area_indi_pane_cp03

0x8c81,	// (0x00028453) popup_slider_window_g1_ParamLimits

0x8c9d,	// (0x0002846f) popup_slider_window_g2_ParamLimits

0x8cb9,	// (0x0002848b) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x0002f4b2) popup_slider_window_g_ParamLimits

0x8d15,	// (0x000284e7) popup_slider_window_t1_ParamLimits

0x8d89,	// (0x0002855b) small_volume_slider_vertical_pane_ParamLimits

0xeeb0,	// (0x0002e682) cell_graphic2_pane_ParamLimits

0xef0d,	// (0x0002e6df) bg_button_pane_cp10_ParamLimits

0xef0d,	// (0x0002e6df) bg_button_pane_cp10

0xef20,	// (0x0002e6f2) bg_button_pane_cp11_ParamLimits

0xef20,	// (0x0002e6f2) bg_button_pane_cp11

0xef33,	// (0x0002e705) graphic2_pages_pane_g1_ParamLimits

0xef33,	// (0x0002e705) graphic2_pages_pane_g1

0xef4e,	// (0x0002e720) graphic2_pages_pane_g2_ParamLimits

0xef4e,	// (0x0002e720) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x0002f576) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x0002f576) graphic2_pages_pane_g

0xef66,	// (0x0002e738) graphic2_pages_pane_t1_ParamLimits

0xef66,	// (0x0002e738) graphic2_pages_pane_t1

0xef7e,	// (0x0002e750) cell_graphic2_control_pane_ParamLimits

0xef7e,	// (0x0002e750) cell_graphic2_control_pane

0xefb0,	// (0x0002e782) cell_graphic2_pane_g1_ParamLimits

0xefb0,	// (0x0002e782) cell_graphic2_pane_g1

0xdbd9,	// (0x0002d3ab) cell_graphic2_pane_g2_ParamLimits

0xdbd9,	// (0x0002d3ab) cell_graphic2_pane_g2

0xefbd,	// (0x0002e78f) cell_graphic2_pane_g3_ParamLimits

0xefbd,	// (0x0002e78f) cell_graphic2_pane_g3

0xdbe6,	// (0x0002d3b8) cell_graphic2_pane_g4_ParamLimits

0xdbe6,	// (0x0002d3b8) cell_graphic2_pane_g4

0xefca,	// (0x0002e79c) cell_graphic2_pane_g5_ParamLimits

0xefca,	// (0x0002e79c) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x0002f57b) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x0002f57b) cell_graphic2_pane_g

0xefea,	// (0x0002e7bc) cell_graphic2_pane_t1_ParamLimits

0xefea,	// (0x0002e7bc) cell_graphic2_pane_t1

0x5d3b,	// (0x0002550d) grid_highlight_pane_cp11_ParamLimits

0x5d3b,	// (0x0002550d) grid_highlight_pane_cp11

0x359e,	// (0x00022d70) bg_button_pane_cp05

0xf01f,	// (0x0002e7f1) cell_graphic2_control_pane_g1

0x769c,	// (0x00026e6e) bg_touch_area_indi_pane_g1

0x9885,	// (0x00029057) aid_cmod_rocker_key_size

0x988f,	// (0x00029061) aid_cmode_itu_key_size

0x9899,	// (0x0002906b) main_cmode_video_pane

0x98a3,	// (0x00029075) main_comp_mode_itu_pane

0x98af,	// (0x00029081) main_comp_mode_rocker_pane

0x98bb,	// (0x0002908d) cell_cmode_rocker_pane_ParamLimits

0x98bb,	// (0x0002908d) cell_cmode_rocker_pane

0x98cd,	// (0x0002909f) cell_cmode_itu_pane_ParamLimits

0x98cd,	// (0x0002909f) cell_cmode_itu_pane

0x3b81,	// (0x00023353) bg_button_pane_cp06_ParamLimits

0x3b81,	// (0x00023353) bg_button_pane_cp06

0x791a,	// (0x000270ec) cell_cmode_rocker_pane_g1_ParamLimits

0x791a,	// (0x000270ec) cell_cmode_rocker_pane_g1

0x8e2d,	// (0x000285ff) cell_cmode_rocker_pane_g2_ParamLimits

0x8e2d,	// (0x000285ff) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x0002f58b) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x0002f58b) cell_cmode_rocker_pane_g

0x3221,	// (0x000229f3) bg_button_pane_cp07

0x98e2,	// (0x000290b4) cell_cmode_itu_pane_g1

0x98eb,	// (0x000290bd) cell_cmode_itu_pane_t1

0x98f9,	// (0x000290cb) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x0002f590) cell_cmode_itu_pane_t

0x9050,	// (0x00028822) aid_touch_ctrl_left

0x9058,	// (0x0002882a) aid_touch_ctrl_right

0x3221,	// (0x000229f3) compa_mode_pane

0xf045,	// (0x0002e817) aid_cmod_rocker_key_size_cp

0xf04f,	// (0x0002e821) aid_cmode_itu_key_size_cp

0x991b,	// (0x000290ed) compa_mode_pane_g1

0x9923,	// (0x000290f5) compa_mode_pane_g2

0x992b,	// (0x000290fd) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x0002f595) compa_mode_pane_g

0xf059,	// (0x0002e82b) main_comp_mode_itu_pane_cp

0xf061,	// (0x0002e833) main_comp_mode_rocker_pane_cp

0xf069,	// (0x0002e83b) cell_cmode_itu_pane_cp_ParamLimits

0xf069,	// (0x0002e83b) cell_cmode_itu_pane_cp

0xf07e,	// (0x0002e850) cell_cmode_rocker_pane_cp_ParamLimits

0xf07e,	// (0x0002e850) cell_cmode_rocker_pane_cp

0x3b81,	// (0x00023353) bg_button_pane_cp06_cp_ParamLimits

0x3b81,	// (0x00023353) bg_button_pane_cp06_cp

0x791a,	// (0x000270ec) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x791a,	// (0x000270ec) cell_cmode_rocker_pane_g1_cp

0x769c,	// (0x00026e6e) cell_cmode_rocker_pane_g2_cp

0x3221,	// (0x000229f3) bg_button_pane_cp07_cp

0xf090,	// (0x0002e862) cell_cmode_itu_pane_g1_cp

0xf099,	// (0x0002e86b) cell_cmode_itu_pane_t1_cp

0xf099,	// (0x0002e86b) cell_cmode_itu_pane_t2_cp

0xdd61,	// (0x0002d533) settings_code_pane_cp2

0x3315,	// (0x00022ae7) bg_popup_window_pane_cp3_ParamLimits

0x3778,	// (0x00022f4a) heading_pane_cp3_ParamLimits

0x3784,	// (0x00022f56) listscroll_popup_graphic_pane_ParamLimits

0x24c1,	// (0x00021c93) fep_hwr_aid_pane_ParamLimits

0x288a,	// (0x0002205c) aid_touch_sctrl_top_ParamLimits

0x2897,	// (0x00022069) sctrl_sk_top_pane_g1_ParamLimits

0x791a,	// (0x000270ec) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x0002f4cb) sctrl_sk_top_pane_g_ParamLimits

0x28a4,	// (0x00022076) sctrl_sk_top_pane_t1_ParamLimits

0x288a,	// (0x0002205c) aid_touch_sctrl_bottom_ParamLimits

0x28a4,	// (0x00022076) sctrl_sk_bottom_pane_t1_ParamLimits

0x8f99,	// (0x0002876b) aid_area_touch_clock

0xcc56,	// (0x0002c428) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc56,	// (0x0002c428) aid_vkb2_area_top_pane_cell

0xcd01,	// (0x0002c4d3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd01,	// (0x0002c4d3) aid_vkb2_area_bottom_pane_cell

0x9500,	// (0x00028cd2) popup_char_count_window

0x9978,	// (0x0002914a) popup_char_count_window_g1

0x9981,	// (0x00029153) popup_char_count_window_g2

0x998a,	// (0x0002915c) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x0002f59c) popup_char_count_window_g

0x9993,	// (0x00029165) popup_char_count_window_t1

0x2945,	// (0x00022117) popup_fep_char_preview_window_ParamLimits

0x2945,	// (0x00022117) popup_fep_char_preview_window

0xcc76,	// (0x0002c448) vkb2_top_candi_pane_ParamLimits

0xcc76,	// (0x0002c448) vkb2_top_candi_pane

0xf0a7,	// (0x0002e879) cell_vkb2_top_candi_pane_ParamLimits

0xf0a7,	// (0x0002e879) cell_vkb2_top_candi_pane

0x56c7,	// (0x00024e99) bg_popup_fep_char_preview_window_ParamLimits

0x56c7,	// (0x00024e99) bg_popup_fep_char_preview_window

0x2ead,	// (0x0002267f) popup_fep_char_preview_window_t1_ParamLimits

0x2ead,	// (0x0002267f) popup_fep_char_preview_window_t1

0x99ee,	// (0x000291c0) bg_popup_fep_char_preview_window_g1

0x99f6,	// (0x000291c8) bg_popup_fep_char_preview_window_g2

0x99fe,	// (0x000291d0) bg_popup_fep_char_preview_window_g3

0x9a06,	// (0x000291d8) bg_popup_fep_char_preview_window_g4

0x9a0e,	// (0x000291e0) bg_popup_fep_char_preview_window_g5

0x2ee7,	// (0x000226b9) bg_popup_fep_char_preview_window_g6

0x9a16,	// (0x000291e8) bg_popup_fep_char_preview_window_g7

0x9a1e,	// (0x000291f0) bg_popup_fep_char_preview_window_g8

0x9a26,	// (0x000291f8) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x0002f5a3) bg_popup_fep_char_preview_window_g

0x791a,	// (0x000270ec) cell_vkb2_top_candi_pane_g1_ParamLimits

0x791a,	// (0x000270ec) cell_vkb2_top_candi_pane_g1

0x7c31,	// (0x00027403) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7c31,	// (0x00027403) cell_vkb2_top_candi_pane_g2

0x7c52,	// (0x00027424) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7c52,	// (0x00027424) cell_vkb2_top_candi_pane_g3

0x2eef,	// (0x000226c1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2eef,	// (0x000226c1) cell_vkb2_top_candi_pane_g4

0x9a2e,	// (0x00029200) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9a2e,	// (0x00029200) cell_vkb2_top_candi_pane_g5

0x8e2d,	// (0x000285ff) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8e2d,	// (0x000285ff) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x0002f5b6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x0002f5b6) cell_vkb2_top_candi_pane_g

0x2f10,	// (0x000226e2) cell_vkb2_top_candi_pane_t1

0x2363,	// (0x00021b35) aid_size_touch_slider_mark_ParamLimits

0x2363,	// (0x00021b35) aid_size_touch_slider_mark

0xedc7,	// (0x0002e599) grid_graphic2_catg_pane_ParamLimits

0xedc7,	// (0x0002e599) grid_graphic2_catg_pane

0xee83,	// (0x0002e655) popup_grid_graphic2_window_t1_ParamLimits

0xee83,	// (0x0002e655) popup_grid_graphic2_window_t1

0xee99,	// (0x0002e66b) popup_grid_graphic2_window_t2_ParamLimits

0xee99,	// (0x0002e66b) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x0002f571) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x0002f571) popup_grid_graphic2_window_t

0x359e,	// (0x00022d70) bg_button_pane_cp05_ParamLimits

0xf01f,	// (0x0002e7f1) cell_graphic2_control_pane_g1_ParamLimits

0xf10d,	// (0x0002e8df) cell_graphic2_catg_pane_ParamLimits

0xf10d,	// (0x0002e8df) cell_graphic2_catg_pane

0x3221,	// (0x000229f3) bg_button_pane_cp12

0xf11f,	// (0x0002e8f1) cell_graphic2_catg_pane_g1

0x8f65,	// (0x00028737) cell_tb_ext_pane_t1_ParamLimits

0x2ce7,	// (0x000224b9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2ce7,	// (0x000224b9) vkb2_top_cell_right_narrow_pane

0x2cff,	// (0x000224d1) vkb2_top_cell_right_wide_pane_ParamLimits

0x2cff,	// (0x000224d1) vkb2_top_cell_right_wide_pane

0x24b3,	// (0x00021c85) bg_vkb2_func_pane_ParamLimits

0x24b3,	// (0x00021c85) bg_vkb2_func_pane

0x2d70,	// (0x00022542) vkb2_top_cell_left_pane_g1_ParamLimits

0x24b3,	// (0x00021c85) bg_vkb2_fuc_pane_cp03_ParamLimits

0x24b3,	// (0x00021c85) bg_vkb2_fuc_pane_cp03

0x2dce,	// (0x000225a0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x504a,	// (0x0002481c) bg_vkb2_func_pane_g1

0x5052,	// (0x00024824) bg_vkb2_func_pane_g2

0x5062,	// (0x00024834) bg_vkb2_func_pane_g3

0x505a,	// (0x0002482c) bg_vkb2_func_pane_g4

0x506a,	// (0x0002483c) bg_vkb2_func_pane_g5

0x5072,	// (0x00024844) bg_vkb2_func_pane_g6

0x507a,	// (0x0002484c) bg_vkb2_func_pane_g7

0x5082,	// (0x00024854) bg_vkb2_func_pane_g8

0x5042,	// (0x00024814) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x0002f5c3) bg_vkb2_func_pane_g

0x24b3,	// (0x00021c85) bg_vkb2_fuc_pane_cp01_ParamLimits

0x24b3,	// (0x00021c85) bg_vkb2_fuc_pane_cp01

0x2d70,	// (0x00022542) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2d70,	// (0x00022542) vkb2_top_cell_right_wide_pane_g1

0x24b3,	// (0x00021c85) bg_vkb2_fuc_pane_cp02_ParamLimits

0x24b3,	// (0x00021c85) bg_vkb2_fuc_pane_cp02

0x2dce,	// (0x000225a0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2dce,	// (0x000225a0) vkb2_top_cell_right_narrow_pane_g1

0xe64a,	// (0x0002de1c) aid_touch_area_decrease_ParamLimits

0xe64a,	// (0x0002de1c) aid_touch_area_decrease

0xe67e,	// (0x0002de50) aid_touch_area_increase_ParamLimits

0xe67e,	// (0x0002de50) aid_touch_area_increase

0xe6a6,	// (0x0002de78) aid_touch_area_mute_ParamLimits

0xe6a6,	// (0x0002de78) aid_touch_area_mute

0xe6d6,	// (0x0002dea8) aid_touch_area_slider_ParamLimits

0xe6d6,	// (0x0002dea8) aid_touch_area_slider

0xe716,	// (0x0002dee8) popup_slider_window_g4_ParamLimits

0xe716,	// (0x0002dee8) popup_slider_window_g4

0xe73e,	// (0x0002df10) popup_slider_window_g5_ParamLimits

0xe73e,	// (0x0002df10) popup_slider_window_g5

0xe772,	// (0x0002df44) popup_slider_window_g6_ParamLimits

0xe772,	// (0x0002df44) popup_slider_window_g6

0x8d43,	// (0x00028515) popup_slider_window_t2_ParamLimits

0x8d43,	// (0x00028515) popup_slider_window_t2

0x0001,

0xfced,	// (0x0002f4bf) popup_slider_window_t_ParamLimits

0xfced,	// (0x0002f4bf) popup_slider_window_t

0xe78e,	// (0x0002df60) slider_pane_ParamLimits

0xe78e,	// (0x0002df60) slider_pane

0x9a6a,	// (0x0002923c) slider_pane_g1_ParamLimits

0x9a6a,	// (0x0002923c) slider_pane_g1

0x9a7e,	// (0x00029250) slider_pane_g2_ParamLimits

0x9a7e,	// (0x00029250) slider_pane_g2

0x9a94,	// (0x00029266) slider_pane_g3_ParamLimits

0x9a94,	// (0x00029266) slider_pane_g3

0x0003,

0xfe04,	// (0x0002f5d6) slider_pane_g_ParamLimits

0xfe04,	// (0x0002f5d6) slider_pane_g

0xc7eb,	// (0x0002bfbd) popup_tb_float_extension_window_ParamLimits

0xc7eb,	// (0x0002bfbd) popup_tb_float_extension_window

0x9ac0,	// (0x00029292) aid_size_cell_tb_float_ext

0x3221,	// (0x000229f3) bg_popup_sub_window_cp28

0x9acc,	// (0x0002929e) grid_tb_float_ext_pane

0x9ad6,	// (0x000292a8) cell_tb_float_ext_pane_ParamLimits

0x9ad6,	// (0x000292a8) cell_tb_float_ext_pane

0x9af0,	// (0x000292c2) cell_tb_float_ext_pane_g1

0x9af9,	// (0x000292cb) grid_highlight_pane_cp12

0xca5f,	// (0x0002c231) cell_last_hwr_side_pane_ParamLimits

0xca5f,	// (0x0002c231) cell_last_hwr_side_pane

0x769c,	// (0x00026e6e) cell_last_hwr_side_pane_g1

0x9b02,	// (0x000292d4) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x0002f5df) cell_last_hwr_side_pane_g

0xcddd,	// (0x0002c5af) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcddd,	// (0x0002c5af) vkb2_area_bottom_space_btn_pane

0x791a,	// (0x000270ec) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95b5,	// (0x00028d87) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2f10,	// (0x000226e2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2f2f,	// (0x00022701) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2f2f,	// (0x00022701) vkb2_area_bottom_space_btn_pane_g1

0x2f69,	// (0x0002273b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2f69,	// (0x0002273b) vkb2_area_bottom_space_btn_pane_g2

0x2f9f,	// (0x00022771) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2f9f,	// (0x00022771) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x0002f5e4) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x0002f5e4) vkb2_area_bottom_space_btn_pane_g

0x2568,	// (0x00021d3a) cel_fep_hwr_func_pane_ParamLimits

0x2568,	// (0x00021d3a) cel_fep_hwr_func_pane

0xca34,	// (0x0002c206) cell_hwr_side_button_pane_ParamLimits

0xca34,	// (0x0002c206) cell_hwr_side_button_pane

0x8f99,	// (0x0002876b) aid_area_touch_clock_ParamLimits

0x359e,	// (0x00022d70) bg_uniindi_top_pane_ParamLimits

0x8fab,	// (0x0002877d) uniindi_top_pane_g1_ParamLimits

0x8fc1,	// (0x00028793) uniindi_top_pane_g2_ParamLimits

0x8fcd,	// (0x0002879f) uniindi_top_pane_g3_ParamLimits

0x8fde,	// (0x000287b0) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x0002f4f7) uniindi_top_pane_g_ParamLimits

0x8feb,	// (0x000287bd) uniindi_top_pane_t1_ParamLimits

0x359e,	// (0x00022d70) bg_vkb2_func_pane_cp01_ParamLimits

0x359e,	// (0x00022d70) bg_vkb2_func_pane_cp01

0x9b0b,	// (0x000292dd) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b0b,	// (0x000292dd) cel_fep_hwr_func_pane_g1

0x359e,	// (0x00022d70) bg_vkb2_func_pane_cp02_ParamLimits

0x359e,	// (0x00022d70) bg_vkb2_func_pane_cp02

0x9b0b,	// (0x000292dd) cell_hwr_side_button_pane_g1_ParamLimits

0x9b0b,	// (0x000292dd) cell_hwr_side_button_pane_g1

0x4ec3,	// (0x00024695) status_pane_g4_ParamLimits

0x4ec3,	// (0x00024695) status_pane_g4

0x4edd,	// (0x000246af) status_pane_t1

0x73d6,	// (0x00026ba8) form2_midp_gauge_slider_cont_pane

0x73de,	// (0x00026bb0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe028,	// (0x0002d7fa) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe03a,	// (0x0002d80c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf1,	// (0x0002f2c3) form2_midp_gauge_slider_pane_t_ParamLimits

0x7414,	// (0x00026be6) form2_midp_slider_pane_ParamLimits

0x2905,	// (0x000220d7) aid_size_cell_func_vkb2_ParamLimits

0x2905,	// (0x000220d7) aid_size_cell_func_vkb2

0x9aac,	// (0x0002927e) slider_pane_g4_ParamLimits

0x9aac,	// (0x0002927e) slider_pane_g4

0xce3e,	// (0x0002c610) form2_midp_gauge_slider_pane_t2_cp01

0xce4c,	// (0x0002c61e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce4c,	// (0x0002c61e) form2_midp_gauge_slider_pane_t3_cp01

0x3014,	// (0x000227e6) form2_midp_slider_pane_cp01

0x3221,	// (0x000229f3) navi_smil_pane

0x9b44,	// (0x00029316) navi_smil_pane_g1

0x9b4c,	// (0x0002931e) navi_smil_pane_t1

0x9b19,	// (0x000292eb) form2_midp_slider_pane_g1

0x9b22,	// (0x000292f4) form2_midp_slider_pane_g2

0x9b2a,	// (0x000292fc) form2_midp_slider_pane_g3

0x9b19,	// (0x000292eb) form2_midp_slider_pane_g4

0xf128,	// (0x0002e8fa) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x0002f5ed) form2_midp_slider_pane_g

0x2fd9,	// (0x000227ab) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2fd9,	// (0x000227ab) vkb2_area_bottom_space_btn_pane_g4

0xd64c,	// (0x0002ce1e) lc0_navi_pane_ParamLimits

0xd64c,	// (0x0002ce1e) lc0_navi_pane

0xd6b6,	// (0x0002ce88) lc0_stat_indi_pane_ParamLimits

0xd6b6,	// (0x0002ce88) lc0_stat_indi_pane

0xd6cb,	// (0x0002ce9d) ls0_title_pane_ParamLimits

0xd6cb,	// (0x0002ce9d) ls0_title_pane

0x3b81,	// (0x00023353) bg_popup_sub_pane_cp14_ParamLimits

0x8f80,	// (0x00028752) list_uniindi_pane_ParamLimits

0x8f8c,	// (0x0002875e) uniindi_top_pane_ParamLimits

0x9028,	// (0x000287fa) list_single_uniindi_pane_g1_ParamLimits

0x903b,	// (0x0002880d) list_single_uniindi_pane_t1_ParamLimits

0xce69,	// (0x0002c63b) lc0_stat_clock_pane_ParamLimits

0xce69,	// (0x0002c63b) lc0_stat_clock_pane

0xf133,	// (0x0002e905) lc0_stat_indi_pane_g1_ParamLimits

0xf133,	// (0x0002e905) lc0_stat_indi_pane_g1

0xf140,	// (0x0002e912) lc0_stat_indi_pane_g2_ParamLimits

0xf140,	// (0x0002e912) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x0002f5f8) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x0002f5f8) lc0_stat_indi_pane_g

0xce76,	// (0x0002c648) lc0_uni_indicator_pane_ParamLimits

0xce76,	// (0x0002c648) lc0_uni_indicator_pane

0xf14d,	// (0x0002e91f) ls0_title_pane_g1_ParamLimits

0xf14d,	// (0x0002e91f) ls0_title_pane_g1

0xf161,	// (0x0002e933) ls0_title_pane_t1_ParamLimits

0xf161,	// (0x0002e933) ls0_title_pane_t1

0xce83,	// (0x0002c655) lc0_uni_indicator_pane_g1_ParamLimits

0xce83,	// (0x0002c655) lc0_uni_indicator_pane_g1

0x9bbe,	// (0x00029390) lc0_stat_clock_pane_t1

0x3221,	// (0x000229f3) main_ai5_pane

0x9bcc,	// (0x0002939e) ai5_sk_pane_ParamLimits

0x9bcc,	// (0x0002939e) ai5_sk_pane

0xf18f,	// (0x0002e961) cell_ai5_widget_pane_ParamLimits

0xf18f,	// (0x0002e961) cell_ai5_widget_pane

0x9c8f,	// (0x00029461) aid_size_cell_widget_grid

0x9ca5,	// (0x00029477) bg_ai5_widget_pane_ParamLimits

0x9ca5,	// (0x00029477) bg_ai5_widget_pane

0x9d0f,	// (0x000294e1) cell_ai5_widget_pane_g2

0x9d1f,	// (0x000294f1) cell_ai5_widget_pane_g3

0x9d3e,	// (0x00029510) cell_ai5_widget_pane_g4

0x9d4a,	// (0x0002951c) cell_ai5_widget_pane_g5

0x9d56,	// (0x00029528) cell_ai5_widget_pane_g6

0x9d62,	// (0x00029534) cell_ai5_widget_pane_g7

0x9daa,	// (0x0002957c) cell_ai5_widget_pane_t1_ParamLimits

0x9daa,	// (0x0002957c) cell_ai5_widget_pane_t1

0x9dc7,	// (0x00029599) cell_ai5_widget_pane_t2_ParamLimits

0x9dc7,	// (0x00029599) cell_ai5_widget_pane_t2

0x9ddf,	// (0x000295b1) cell_ai5_widget_pane_t3_ParamLimits

0x9ddf,	// (0x000295b1) cell_ai5_widget_pane_t3

0x9df7,	// (0x000295c9) cell_ai5_widget_pane_t4_ParamLimits

0x9df7,	// (0x000295c9) cell_ai5_widget_pane_t4

0x9e11,	// (0x000295e3) cell_ai5_widget_pane_t5_ParamLimits

0x9e11,	// (0x000295e3) cell_ai5_widget_pane_t5

0x9e30,	// (0x00029602) cell_ai5_widget_pane_t6_ParamLimits

0x9e30,	// (0x00029602) cell_ai5_widget_pane_t6

0x9e42,	// (0x00029614) cell_ai5_widget_pane_t7_ParamLimits

0x9e42,	// (0x00029614) cell_ai5_widget_pane_t7

0x9e5b,	// (0x0002962d) cell_ai5_widget_pane_t8_ParamLimits

0x9e5b,	// (0x0002962d) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x0002f612) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x0002f612) cell_ai5_widget_pane_t

0x9ea7,	// (0x00029679) grid_ai5_widget_pane

0x3b81,	// (0x00023353) highlight_cell_ai5_widget_pane_ParamLimits

0x3b81,	// (0x00023353) highlight_cell_ai5_widget_pane

0xf1f9,	// (0x0002e9cb) ai5_sk_left_pane

0xf203,	// (0x0002e9d5) ai5_sk_middle_pane

0xf20d,	// (0x0002e9df) ai5_sk_right_pane

0x9edd,	// (0x000296af) bg_ai5_widget_pane_g1_ParamLimits

0x9edd,	// (0x000296af) bg_ai5_widget_pane_g1

0x9ee9,	// (0x000296bb) bg_ai5_widget_pane_g2_ParamLimits

0x9ee9,	// (0x000296bb) bg_ai5_widget_pane_g2

0x9ef5,	// (0x000296c7) bg_ai5_widget_pane_g3_ParamLimits

0x9ef5,	// (0x000296c7) bg_ai5_widget_pane_g3

0x9f01,	// (0x000296d3) bg_ai5_widget_pane_g4_ParamLimits

0x9f01,	// (0x000296d3) bg_ai5_widget_pane_g4

0x9f0d,	// (0x000296df) bg_ai5_widget_pane_g5_ParamLimits

0x9f0d,	// (0x000296df) bg_ai5_widget_pane_g5

0x9f19,	// (0x000296eb) bg_ai5_widget_pane_g6_ParamLimits

0x9f19,	// (0x000296eb) bg_ai5_widget_pane_g6

0x9f25,	// (0x000296f7) bg_ai5_widget_pane_g7_ParamLimits

0x9f25,	// (0x000296f7) bg_ai5_widget_pane_g7

0x9f31,	// (0x00029703) bg_ai5_widget_pane_g8_ParamLimits

0x9f31,	// (0x00029703) bg_ai5_widget_pane_g8

0x9f3d,	// (0x0002970f) bg_ai5_widget_pane_g9_ParamLimits

0x9f3d,	// (0x0002970f) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x0002f627) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x0002f627) bg_ai5_widget_pane_g

0x9f70,	// (0x00029742) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f70,	// (0x00029742) cell_shortcut_ai5_widget_pane

0x480a,	// (0x00023fdc) bg_cell_shortcut_ai5_widget_pane

0x9f81,	// (0x00029753) cell_grid_ai5_widget_pane_g1

0x9f8a,	// (0x0002975c) highlight_cell_shortcut_ai5_widget_pane

0x5052,	// (0x00024824) ai5_sk_left_pane_g1

0x9f92,	// (0x00029764) ai5_sk_left_pane_g2

0x9f9a,	// (0x0002976c) ai5_sk_left_pane_g3

0x9fa2,	// (0x00029774) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x0002f63a) ai5_sk_left_pane_g

0x9faa,	// (0x0002977c) ai5_sk_left_pane_t1

0x504a,	// (0x0002481c) ai5_sk_right_pane_g1

0x9fb8,	// (0x0002978a) ai5_sk_right_pane_g2

0x9fc0,	// (0x00029792) ai5_sk_right_pane_g3

0x9fc8,	// (0x0002979a) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x0002f643) ai5_sk_right_pane_g

0x9fd0,	// (0x000297a2) ai5_sk_right_pane_t1

0x504a,	// (0x0002481c) ai5_sk_middle_pane_g1

0x5052,	// (0x00024824) ai5_sk_middle_pane_g2

0x506a,	// (0x0002483c) ai5_sk_middle_pane_g3

0x9fc0,	// (0x00029792) ai5_sk_middle_pane_g4

0x9f9a,	// (0x0002976c) ai5_sk_middle_pane_g5

0x9fde,	// (0x000297b0) ai5_sk_middle_pane_g6

0xf217,	// (0x0002e9e9) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x0002f64c) ai5_sk_middle_pane_g

0xd538,	// (0x0002cd0a) aid_touch_area_size_lc0_ParamLimits

0xd538,	// (0x0002cd0a) aid_touch_area_size_lc0

0x26f3,	// (0x00021ec5) cell_hwr_candidate_pane_t1_ParamLimits

0x4bac,	// (0x0002437e) aid_touch_navi_pane

0xd7be,	// (0x0002cf90) status_dt_navi_pane_ParamLimits

0xd7be,	// (0x0002cf90) status_dt_navi_pane

0xd7d6,	// (0x0002cfa8) status_dt_sta_pane_ParamLimits

0xd7d6,	// (0x0002cfa8) status_dt_sta_pane

0xf21f,	// (0x0002e9f1) dt_sta_controll_pane

0xf22c,	// (0x0002e9fe) dt_sta_indi_pane

0xf239,	// (0x0002ea0b) dt_sta_title_pane

0x359e,	// (0x00022d70) bg_dt_sta_indi_pane_ParamLimits

0x359e,	// (0x00022d70) bg_dt_sta_indi_pane

0xf24b,	// (0x0002ea1d) dt_sta_battery_pane

0xf253,	// (0x0002ea25) dt_sta_indi_pane_g1

0xa030,	// (0x00029802) dt_sta_indi_pane_g2

0xa039,	// (0x0002980b) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x0002f65b) dt_sta_indi_pane_g

0xa042,	// (0x00029814) dt_sta_signal_pane

0x3b81,	// (0x00023353) bg_dt_sta_title_pane_ParamLimits

0x3b81,	// (0x00023353) bg_dt_sta_title_pane

0xa04b,	// (0x0002981d) dt_sta_title_pane_g1

0xa053,	// (0x00029825) dt_sta_title_pane_t1_ParamLimits

0xa053,	// (0x00029825) dt_sta_title_pane_t1

0x3221,	// (0x000229f3) bg_dt_sta_control_pane

0xf25c,	// (0x0002ea2e) dt_sta_controll_pane_g1

0xa071,	// (0x00029843) bg_dt_sta_title_pane_g1

0xa07a,	// (0x0002984c) bg_dt_sta_title_pane_g2

0xa083,	// (0x00029855) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x0002f662) bg_dt_sta_title_pane_g

0x769c,	// (0x00026e6e) bg_dt_sta_indi_pane_g1

0xa08c,	// (0x0002985e) dt_sta_signal_pane_g1

0xa094,	// (0x00029866) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x0002f669) dt_sta_signal_pane_g

0xa09c,	// (0x0002986e) dt_sta_battery_pane_g1

0xa0a5,	// (0x00029877) dt_sta_battery_pane_t1

0x769c,	// (0x00026e6e) bg_dt_sta_control_pane_g1

0x4314,	// (0x00023ae6) fep_china_uni_eep_pane

0x431c,	// (0x00023aee) fep_china_uni_entry_pane_ParamLimits

0x432c,	// (0x00023afe) popup_fep_china_uni_window_g1_ParamLimits

0x433c,	// (0x00023b0e) popup_fep_china_uni_window_g2_ParamLimits

0x433c,	// (0x00023b0e) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002eef5) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002eef5) popup_fep_china_uni_window_g

0xa0b4,	// (0x00029886) fep_china_uni_eep_pane_g1

0xa0bc,	// (0x0002988e) fep_china_uni_eep_pane_t1

0x9b3b,	// (0x0002930d) aid_touch_area_size_smil_player

0x4cf8,	// (0x000244ca) lc0_clock_pane

0x4ed1,	// (0x000246a3) status_pane_g5_ParamLimits

0x4ed1,	// (0x000246a3) status_pane_g5

0xc36d,	// (0x0002bb3f) popup_keymap_window

0x4e97,	// (0x00024669) status_icon_pane

0x9d1f,	// (0x000294f1) cell_ai5_widget_pane_g3_ParamLimits

0x9d3e,	// (0x00029510) cell_ai5_widget_pane_g4_ParamLimits

0x9d4a,	// (0x0002951c) cell_ai5_widget_pane_g5_ParamLimits

0x9d6e,	// (0x00029540) cell_ai5_widget_pane_g8_ParamLimits

0x9d6e,	// (0x00029540) cell_ai5_widget_pane_g8

0x9d82,	// (0x00029554) cell_ai5_widget_pane_g9_ParamLimits

0x9d82,	// (0x00029554) cell_ai5_widget_pane_g9

0x9d96,	// (0x00029568) cell_ai5_widget_pane_g10_ParamLimits

0x9d96,	// (0x00029568) cell_ai5_widget_pane_g10

0xa0cb,	// (0x0002989d) status_icon_pane_g1

0x3221,	// (0x000229f3) bg_popup_sub_pane_cp13

0xa0d3,	// (0x000298a5) popup_keymap_window_t1

0xd4ba,	// (0x0002cc8c) control_pane_g6_ParamLimits

0xd4ba,	// (0x0002cc8c) control_pane_g6

0xd4c7,	// (0x0002cc99) control_pane_g7_ParamLimits

0xd4c7,	// (0x0002cc99) control_pane_g7

0xd4d4,	// (0x0002cca6) control_pane_g8_ParamLimits

0xd4d4,	// (0x0002cca6) control_pane_g8

0xf21f,	// (0x0002e9f1) dt_sta_controll_pane_ParamLimits

0xf22c,	// (0x0002e9fe) dt_sta_indi_pane_ParamLimits

0xf239,	// (0x0002ea0b) dt_sta_title_pane_ParamLimits

0x3ab9,	// (0x0002328b) aid_size_touch_scroll_bar_cale

0x12ea,	// (0x00020abc) popup_discreet_window_ParamLimits

0x12ea,	// (0x00020abc) popup_discreet_window

0xbe54,	// (0x0002b626) popup_sk_window

0x56c7,	// (0x00024e99) bg_popup_sub_pane_cp28_ParamLimits

0x56c7,	// (0x00024e99) bg_popup_sub_pane_cp28

0xa0e1,	// (0x000298b3) popup_discreet_window_g1_ParamLimits

0xa0e1,	// (0x000298b3) popup_discreet_window_g1

0xa101,	// (0x000298d3) popup_discreet_window_t1_ParamLimits

0xa101,	// (0x000298d3) popup_discreet_window_t1

0xa11f,	// (0x000298f1) popup_discreet_window_t2_ParamLimits

0xa11f,	// (0x000298f1) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x0002f66e) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x0002f66e) popup_discreet_window_t

0x304b,	// (0x0002281d) popup_sk_window_g1

0x3055,	// (0x00022827) popup_sk_window_g2

0x0001,

0xfea3,	// (0x0002f675) popup_sk_window_g

0x305f,	// (0x00022831) popup_sk_window_t1

0x306d,	// (0x0002283f) popup_sk_window_t1_copy1

0x9d0f,	// (0x000294e1) cell_ai5_widget_pane_g2_ParamLimits

0x9e6d,	// (0x0002963f) cell_ai5_widget_pane_t9_ParamLimits

0x9e6d,	// (0x0002963f) cell_ai5_widget_pane_t9

0x3221,	// (0x000229f3) main_fep_fshwr2_pane

0xceaa,	// (0x0002c67c) aid_fshwr2_btn_pane

0xceb9,	// (0x0002c68b) aid_fshwr2_syb_pane

0xcecb,	// (0x0002c69d) aid_fshwr2_txt_pane

0xceda,	// (0x0002c6ac) fshwr2_func_candi_pane

0xceeb,	// (0x0002c6bd) fshwr2_hwr_syb_pane

0xcf06,	// (0x0002c6d8) fshwr2_icf_pane

0x3221,	// (0x000229f3) fshwr2_icf_bg_pane

0xf265,	// (0x0002ea37) fshwr2_icf_pane_t1_ParamLimits

0xf265,	// (0x0002ea37) fshwr2_icf_pane_t1

0x769c,	// (0x00026e6e) fshwr2_func_candi_pane_g1

0xa188,	// (0x0002995a) fshwr2_func_candi_row_pane_ParamLimits

0xa188,	// (0x0002995a) fshwr2_func_candi_row_pane

0xf27d,	// (0x0002ea4f) cell_fshwr2_syb_pane_ParamLimits

0xf27d,	// (0x0002ea4f) cell_fshwr2_syb_pane

0x791a,	// (0x000270ec) fshwr2_hwr_syb_pane_g1_ParamLimits

0x791a,	// (0x000270ec) fshwr2_hwr_syb_pane_g1

0x3221,	// (0x000229f3) bg_popup_call_pane_cp01

0xa1b3,	// (0x00029985) fshwr2_func_candi_cell_pane_ParamLimits

0xa1b3,	// (0x00029985) fshwr2_func_candi_cell_pane

0xa1e4,	// (0x000299b6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa1e4,	// (0x000299b6) fshwr2_func_candi_cell_bg_pane

0xa1fe,	// (0x000299d0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa1fe,	// (0x000299d0) fshwr2_func_candi_cell_pane_g1

0xa226,	// (0x000299f8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa226,	// (0x000299f8) fshwr2_func_candi_cell_pane_t1

0x3221,	// (0x000229f3) bg_button_pane_cp08

0x480a,	// (0x00023fdc) cell_fshwr2_syb_bg_pane

0xf297,	// (0x0002ea69) cell_fshwr2_syb_bg_pane_g1

0xf29f,	// (0x0002ea71) cell_fshwr2_syb_bg_pane_t1

0x3b81,	// (0x00023353) main_tmo_pane

0xdb7f,	// (0x0002d351) uni_indicator_pane_g1_ParamLimits

0xdb94,	// (0x0002d366) uni_indicator_pane_g2_ParamLimits

0x6201,	// (0x000259d3) uni_indicator_pane_g3_ParamLimits

0x6217,	// (0x000259e9) uni_indicator_pane_g4_ParamLimits

0x6217,	// (0x000259e9) uni_indicator_pane_g4

0x622b,	// (0x000259fd) uni_indicator_pane_g5_ParamLimits

0x622b,	// (0x000259fd) uni_indicator_pane_g5

0x623f,	// (0x00025a11) uni_indicator_pane_g6_ParamLimits

0x623f,	// (0x00025a11) uni_indicator_pane_g6

0xf91b,	// (0x0002f0ed) uni_indicator_pane_g_ParamLimits

0xe626,	// (0x0002ddf8) popup_tmo_note_window_ParamLimits

0xe626,	// (0x0002ddf8) popup_tmo_note_window

0x3b81,	// (0x00023353) fshwr2_bg_pane

0xa217,	// (0x000299e9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa217,	// (0x000299e9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x0002f67a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x0002f67a) fshwr2_func_candi_cell_pane_g

0x769c,	// (0x00026e6e) bg_popup_window_pane_cp01

0xa250,	// (0x00029a22) bg_popup_window_pane_g1_cp01

0xa259,	// (0x00029a2b) bg_popup_window_pane_cp22_ParamLimits

0xa259,	// (0x00029a2b) bg_popup_window_pane_cp22

0xa267,	// (0x00029a39) listscroll_tmo_link_pane_ParamLimits

0xa267,	// (0x00029a39) listscroll_tmo_link_pane

0xa2a7,	// (0x00029a79) popup_tmo_note_window_g1_ParamLimits

0xa2a7,	// (0x00029a79) popup_tmo_note_window_g1

0xa2b4,	// (0x00029a86) tmo_note_info_pane_ParamLimits

0xa2b4,	// (0x00029a86) tmo_note_info_pane

0xf2ae,	// (0x0002ea80) list_tmo_note_info_pane_g1_ParamLimits

0xf2ae,	// (0x0002ea80) list_tmo_note_info_pane_g1

0xa2e5,	// (0x00029ab7) list_tmo_note_info_pane_g2_ParamLimits

0xa2e5,	// (0x00029ab7) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x0002f67f) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x0002f67f) list_tmo_note_info_pane_g

0xa301,	// (0x00029ad3) list_tmo_note_info_text_pane_ParamLimits

0xa301,	// (0x00029ad3) list_tmo_note_info_text_pane

0xa382,	// (0x00029b54) list_tmo_link_pane

0xa38f,	// (0x00029b61) scroll_pane_cp20

0xa39c,	// (0x00029b6e) list_single_tmo_link_pane_ParamLimits

0xa39c,	// (0x00029b6e) list_single_tmo_link_pane

0xa3ac,	// (0x00029b7e) list_single_tmo_link_pane_t1

0xa3ba,	// (0x00029b8c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3ba,	// (0x00029b8c) list_tmo_note_info_text_pane_t1

0xd140,	// (0x0002c912) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd140,	// (0x0002c912) aid_size_touch_scroll_bar_cp01

0xb8fe,	// (0x0002b0d0) aid_size_touch_slider_marker

0xbe44,	// (0x0002b616) popup_settings_window_ParamLimits

0xbe44,	// (0x0002b616) popup_settings_window

0x076c,	// (0x0001ff3e) popup_candi_list_indi_window

0x4bac,	// (0x0002437e) aid_touch_navi_pane_ParamLimits

0x285e,	// (0x00022030) rs_clock_indi_pane

0x2867,	// (0x00022039) sctrl_sk_bottom_pane_ParamLimits

0x2878,	// (0x0002204a) sctrl_sk_top_pane_ParamLimits

0x295f,	// (0x00022131) popup_fep_tooltip_window

0x9c8f,	// (0x00029461) aid_size_cell_widget_grid_ParamLimits

0x9d03,	// (0x000294d5) cell_ai5_widget_pane_g1_ParamLimits

0x9d03,	// (0x000294d5) cell_ai5_widget_pane_g1

0x9d56,	// (0x00029528) cell_ai5_widget_pane_g6_ParamLimits

0x9d62,	// (0x00029534) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x0002f5fd) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x0002f5fd) cell_ai5_widget_pane_g

0x9e91,	// (0x00029663) cell_ai5_widget_pane_t10_ParamLimits

0x9e91,	// (0x00029663) cell_ai5_widget_pane_t10

0x9ea7,	// (0x00029679) grid_ai5_widget_pane_ParamLimits

0x9f49,	// (0x0002971b) cell_contacts_ai5_widget_pane_ParamLimits

0x9f49,	// (0x0002971b) cell_contacts_ai5_widget_pane

0xa134,	// (0x00029906) popup_discreet_window_t3_ParamLimits

0xa134,	// (0x00029906) popup_discreet_window_t3

0x30e5,	// (0x000228b7) popup_fshwr2_char_preview_window_ParamLimits

0x30e5,	// (0x000228b7) popup_fshwr2_char_preview_window

0xf2c5,	// (0x0002ea97) tmo_note_info_pane_t1

0xf2da,	// (0x0002eaac) tmo_note_info_pane_t2

0xf2f1,	// (0x0002eac3) tmo_note_info_pane_t3

0xa35e,	// (0x00029b30) tmo_note_info_pane_t4

0xa370,	// (0x00029b42) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x0002f684) tmo_note_info_pane_t

0xa382,	// (0x00029b54) list_tmo_link_pane_ParamLimits

0xa38f,	// (0x00029b61) scroll_pane_cp20_ParamLimits

0x3221,	// (0x000229f3) bg_popup_fep_char_preview_window_cp01

0xa3d3,	// (0x00029ba5) popup_fshwr2_char_preview_window_t1

0xa3e1,	// (0x00029bb3) popup_candi_list_indi_window_g1

0xa3ea,	// (0x00029bbc) bg_cell_contacts_ai5_widget_pane

0xa3f6,	// (0x00029bc8) cell_contacts_ai5_widget_pane_g1

0xa40a,	// (0x00029bdc) cell_contacts_ai5_widget_pane_g2

0xa416,	// (0x00029be8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x0002f68f) cell_contacts_ai5_widget_pane_g

0xa429,	// (0x00029bfb) cell_contacts_ai5_widget_pane_t1

0x3b81,	// (0x00023353) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf36b,	// (0x0002eb3d) settings_container_pane

0x480a,	// (0x00023fdc) listscroll_set_pane_copy1

0x6d7d,	// (0x0002654f) scroll_pane_cp121_copy1

0xa4ac,	// (0x00029c7e) set_content_pane_copy1

0xf377,	// (0x0002eb49) aid_height_set_list_copy1_ParamLimits

0xf377,	// (0x0002eb49) aid_height_set_list_copy1

0x6437,	// (0x00025c09) aid_size_parent_copy1_ParamLimits

0x6437,	// (0x00025c09) aid_size_parent_copy1

0xf383,	// (0x0002eb55) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf383,	// (0x0002eb55) button_value_adjust_pane_cp6_copy1

0x4b4a,	// (0x0002431c) list_highlight_pane_cp2_copy1_ParamLimits

0x4b4a,	// (0x0002431c) list_highlight_pane_cp2_copy1

0xf397,	// (0x0002eb69) list_set_pane_copy1_ParamLimits

0xf397,	// (0x0002eb69) list_set_pane_copy1

0xf306,	// (0x0002ead8) main_pane_set_t1_copy1_ParamLimits

0xf306,	// (0x0002ead8) main_pane_set_t1_copy1

0xf340,	// (0x0002eb12) main_pane_set_t2_copy1_ParamLimits

0xf340,	// (0x0002eb12) main_pane_set_t2_copy1

0xf444,	// (0x0002ec16) main_pane_set_t3_copy1

0xf452,	// (0x0002ec24) main_pane_set_t4_copy1

0xf35f,	// (0x0002eb31) set_content_pane_g1_copy1_ParamLimits

0xf35f,	// (0x0002eb31) set_content_pane_g1_copy1

0xf460,	// (0x0002ec32) setting_code_pane_copy1

0xa5a5,	// (0x00029d77) setting_slider_graphic_pane_copy1

0xa5a5,	// (0x00029d77) setting_slider_pane_copy1

0xa5a5,	// (0x00029d77) setting_text_pane_copy1

0xa5a5,	// (0x00029d77) setting_volume_pane_copy1

0xf460,	// (0x0002ec32) settings_code_pane_cp2_copy1

0xf468,	// (0x0002ec3a) settings_code_pane_cp_copy1_ParamLimits

0xf468,	// (0x0002ec3a) settings_code_pane_cp_copy1

0xcf1e,	// (0x0002c6f0) volume_set_pane_copy1

0xf47c,	// (0x0002ec4e) volume_set_pane_g10_copy1

0xf484,	// (0x0002ec56) volume_set_pane_g1_copy1

0xf48c,	// (0x0002ec5e) volume_set_pane_g2_copy1

0xf494,	// (0x0002ec66) volume_set_pane_g3_copy1

0xf49c,	// (0x0002ec6e) volume_set_pane_g4_copy1

0xf4a4,	// (0x0002ec76) volume_set_pane_g5_copy1

0xf4ac,	// (0x0002ec7e) volume_set_pane_g6_copy1

0xf4b4,	// (0x0002ec86) volume_set_pane_g7_copy1

0xf4bc,	// (0x0002ec8e) volume_set_pane_g8_copy1

0xf4c4,	// (0x0002ec96) volume_set_pane_g9_copy1

0x3315,	// (0x00022ae7) bg_set_opt_pane_cp_copy1_ParamLimits

0x3315,	// (0x00022ae7) bg_set_opt_pane_cp_copy1

0x3101,	// (0x000228d3) setting_slider_pane_t1_copy1_ParamLimits

0x3101,	// (0x000228d3) setting_slider_pane_t1_copy1

0xcf26,	// (0x0002c6f8) setting_slider_pane_t2_copy1_ParamLimits

0xcf26,	// (0x0002c6f8) setting_slider_pane_t2_copy1

0xcf40,	// (0x0002c712) setting_slider_pane_t3_copy1_ParamLimits

0xcf40,	// (0x0002c712) setting_slider_pane_t3_copy1

0xcf58,	// (0x0002c72a) slider_set_pane_copy1_ParamLimits

0xcf58,	// (0x0002c72a) slider_set_pane_copy1

0x3bdc,	// (0x000233ae) set_opt_bg_pane_g1_copy2

0x3be4,	// (0x000233b6) set_opt_bg_pane_g2_copy2

0xa611,	// (0x00029de3) set_opt_bg_pane_g3_copy2

0x3bf4,	// (0x000233c6) set_opt_bg_pane_g4_copy2

0x3bfc,	// (0x000233ce) set_opt_bg_pane_g5_copy2

0x3c04,	// (0x000233d6) set_opt_bg_pane_g6_copy2

0xf4cc,	// (0x0002ec9e) set_opt_bg_pane_g7_copy2

0xa623,	// (0x00029df5) set_opt_bg_pane_g8_copy2

0xa62d,	// (0x00029dff) set_opt_bg_pane_g9_copy2

0xa637,	// (0x00029e09) aid_size_touch_slider_mark_copy1_ParamLimits

0xa637,	// (0x00029e09) aid_size_touch_slider_mark_copy1

0xa64b,	// (0x00029e1d) slider_set_pane_g1_copy1

0xa654,	// (0x00029e26) slider_set_pane_g2_copy1

0x65ef,	// (0x00025dc1) slider_set_pane_g3_copy1_ParamLimits

0x65ef,	// (0x00025dc1) slider_set_pane_g3_copy1

0x6603,	// (0x00025dd5) slider_set_pane_g4_copy1_ParamLimits

0x6603,	// (0x00025dd5) slider_set_pane_g4_copy1

0x661b,	// (0x00025ded) slider_set_pane_g5_copy1_ParamLimits

0x661b,	// (0x00025ded) slider_set_pane_g5_copy1

0x65ef,	// (0x00025dc1) slider_set_pane_g6_copy1_ParamLimits

0x65ef,	// (0x00025dc1) slider_set_pane_g6_copy1

0xf4d4,	// (0x0002eca6) slider_set_pane_g7_copy1_ParamLimits

0xf4d4,	// (0x0002eca6) slider_set_pane_g7_copy1

0x3235,	// (0x00022a07) bg_set_opt_pane_cp2_copy1

0xa672,	// (0x00029e44) setting_slider_graphic_pane_g1_copy1

0xf4ea,	// (0x0002ecbc) setting_slider_graphic_pane_t1_copy1

0xf4fa,	// (0x0002eccc) setting_slider_graphic_pane_t2_copy1

0xf50a,	// (0x0002ecdc) slider_set_pane_cp_copy1

0xa6ab,	// (0x00029e7d) input_focus_pane_cp1_copy1

0xa6b4,	// (0x00029e86) list_set_text_pane_copy1

0xa6bc,	// (0x00029e8e) setting_text_pane_g1_copy1

0xbcf2,	// (0x0002b4c4) set_text_pane_t1_copy1

0xa6ab,	// (0x00029e7d) input_focus_pane_cp2_copy1

0xa6bc,	// (0x00029e8e) setting_code_pane_g1_copy1

0xf512,	// (0x0002ece4) setting_code_pane_t1_copy1

0x6ba8,	// (0x0002637a) list_set_graphic_pane_copy1

0x3235,	// (0x00022a07) bg_set_opt_pane_cp4_copy1

0xd367,	// (0x0002cb39) list_set_graphic_pane_g1_copy1_ParamLimits

0xd367,	// (0x0002cb39) list_set_graphic_pane_g1_copy1

0xf520,	// (0x0002ecf2) list_set_graphic_pane_g2_copy1

0xd37f,	// (0x0002cb51) list_set_graphic_pane_t1_copy1_ParamLimits

0xd37f,	// (0x0002cb51) list_set_graphic_pane_t1_copy1

0x769c,	// (0x00026e6e) rs_clock_indi_pane_g1

0xa6ed,	// (0x00029ebf) rs_clock_indi_pane_t1

0xa6fb,	// (0x00029ecd) rs_indi_pane

0xa703,	// (0x00029ed5) rs_indi_pane_g1

0xa70c,	// (0x00029ede) rs_indi_pane_g2

0xa715,	// (0x00029ee7) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x0002f696) rs_indi_pane_g

0x480a,	// (0x00023fdc) bg_popup_preview_window_pane_cp03

0xa71e,	// (0x00029ef0) popup_fep_tooltip_window_t1

0x8318,	// (0x00027aea) popup_note2_window_g2_ParamLimits

0x8318,	// (0x00027aea) popup_note2_window_g2

0x0001,

0xfc5d,	// (0x0002f42f) popup_note2_window_g_ParamLimits

0xfc5d,	// (0x0002f42f) popup_note2_window_g

0x8813,	// (0x00027fe5) bg_popup_sub_pane_cp11_ParamLimits

0x8820,	// (0x00027ff2) cell_ai3_links_pane_g1_ParamLimits

0x8837,	// (0x00028009) cell_ai3_links_pane_t1

0xbcf2,	// (0x0002b4c4) set_text_pane_t1_copy1_ParamLimits

0xd3f3,	// (0x0002cbc5) cell_graphic_popup_pane_cp2_ParamLimits

0xd3f3,	// (0x0002cbc5) cell_graphic_popup_pane_cp2

0xf528,	// (0x0002ecfa) cell_graphic_popup_pane_g1_cp2

0x38cc,	// (0x0002309e) cell_graphic_popup_pane_g2_cp2

0xa734,	// (0x00029f06) cell_graphic_popup_pane_g3_cp2

0xa73c,	// (0x00029f0e) cell_graphic_popup_pane_t2_cp2

0x38dd,	// (0x000230af) grid_highlight_pane_cp3_cp2

0x3f21,	// (0x000236f3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3b81,	// (0x00023353) main_tmo_pane_ParamLimits

0xe61a,	// (0x0002ddec) popup_tmo_big_image_note_window

0x9cf3,	// (0x000294c5) cell_ai5_widget_list_pane

0x9cfb,	// (0x000294cd) cell_ai5_widget_lrg_icon_pane

0xf2c5,	// (0x0002ea97) tmo_note_info_pane_t1_ParamLimits

0xf2da,	// (0x0002eaac) tmo_note_info_pane_t2_ParamLimits

0xf2f1,	// (0x0002eac3) tmo_note_info_pane_t3_ParamLimits

0xa35e,	// (0x00029b30) tmo_note_info_pane_t4_ParamLimits

0xa370,	// (0x00029b42) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x0002f684) tmo_note_info_pane_t_ParamLimits

0xf36b,	// (0x0002eb3d) settings_container_pane_ParamLimits

0xa6a3,	// (0x00029e75) indicator_popup_pane_cp5

0xa6a3,	// (0x00029e75) indicator_popup_pane_cp6

0x6ba8,	// (0x0002637a) list_set_graphic_pane_copy1_ParamLimits

0x3221,	// (0x000229f3) bg_popup_window_pane_cp23

0xa74a,	// (0x00029f1c) popup_tmo_big_image_note_window_g1

0xa754,	// (0x00029f26) popup_tmo_big_image_note_window_t1

0xa764,	// (0x00029f36) popup_tmo_big_image_note_window_t2

0xa774,	// (0x00029f46) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x0002f69d) popup_tmo_big_image_note_window_t

0xa784,	// (0x00029f56) cell_ai5_widget_lrg_icon_pane_g1

0xa78c,	// (0x00029f5e) cell_ai5_widget_lrg_icon_pane_t1

0xa79a,	// (0x00029f6c) cell_ai5_widget_list_row_pane_ParamLimits

0xa79a,	// (0x00029f6c) cell_ai5_widget_list_row_pane

0xa7b2,	// (0x00029f84) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7b2,	// (0x00029f84) cell_ai5_widget_list_row_pane_g1

0xa7bf,	// (0x00029f91) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa7bf,	// (0x00029f91) cell_ai5_widget_list_row_pane_t1

0xa7d7,	// (0x00029fa9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa7d7,	// (0x00029fa9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x0002f6a4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x0002f6a4) cell_ai5_widget_list_row_pane_t

0x3221,	// (0x000229f3) main_fep_vtchi_ss_pane

0x3176,	// (0x00022948) popup_fep_char_pre_window

0x317e,	// (0x00022950) popup_fep_ituss_window

0x319f,	// (0x00022971) popup_fep_vkbss_window

0xa7ff,	// (0x00029fd1) grid_vkbss_keypad_pane_ParamLimits

0xa7ff,	// (0x00029fd1) grid_vkbss_keypad_pane

0xa80f,	// (0x00029fe1) ituss_keypad_pane

0x31ca,	// (0x0002299c) aid_vkbss_key_offset_ParamLimits

0x31ca,	// (0x0002299c) aid_vkbss_key_offset

0x31d6,	// (0x000229a8) cell_vkbss_key_pane_ParamLimits

0x31d6,	// (0x000229a8) cell_vkbss_key_pane

0xa81f,	// (0x00029ff1) bg_cell_vkbss_key_g1_ParamLimits

0xa81f,	// (0x00029ff1) bg_cell_vkbss_key_g1

0xa82b,	// (0x00029ffd) cell_vkbss_key_3p_pane_ParamLimits

0xa82b,	// (0x00029ffd) cell_vkbss_key_3p_pane

0xa845,	// (0x0002a017) cell_vkbss_key_g1_ParamLimits

0xa845,	// (0x0002a017) cell_vkbss_key_g1

0xa85f,	// (0x0002a031) cell_vkbss_key_t1_ParamLimits

0xa85f,	// (0x0002a031) cell_vkbss_key_t1

0x31ec,	// (0x000229be) cell_ituss_key_pane_ParamLimits

0x31ec,	// (0x000229be) cell_ituss_key_pane

0xa88a,	// (0x0002a05c) bg_cell_ituss_key_g1_ParamLimits

0xa88a,	// (0x0002a05c) bg_cell_ituss_key_g1

0xa896,	// (0x0002a068) cell_ituss_key_pane_g1_ParamLimits

0xa896,	// (0x0002a068) cell_ituss_key_pane_g1

0xa8b0,	// (0x0002a082) cell_ituss_key_pane_g2_ParamLimits

0xa8b0,	// (0x0002a082) cell_ituss_key_pane_g2

0x0001,

0xfed9,	// (0x0002f6ab) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x0002f6ab) cell_ituss_key_pane_g

0xa8de,	// (0x0002a0b0) cell_ituss_key_t1_ParamLimits

0xa8de,	// (0x0002a0b0) cell_ituss_key_t1

0xa914,	// (0x0002a0e6) cell_ituss_key_t2_ParamLimits

0xa914,	// (0x0002a0e6) cell_ituss_key_t2

0xa945,	// (0x0002a117) cell_ituss_key_t3_ParamLimits

0xa945,	// (0x0002a117) cell_ituss_key_t3

0xa97f,	// (0x0002a151) cell_ituss_key_t4_ParamLimits

0xa97f,	// (0x0002a151) cell_ituss_key_t4

0x0003,

0xfede,	// (0x0002f6b0) cell_ituss_key_t_ParamLimits

0xfede,	// (0x0002f6b0) cell_ituss_key_t

0xa9b9,	// (0x0002a18b) cell_vkbss_key_3p_pane_g1

0xa9c1,	// (0x0002a193) cell_vkbss_key_3p_pane_g2

0xa9c9,	// (0x0002a19b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002f6b9) cell_vkbss_key_3p_pane_g

0x3221,	// (0x000229f3) bg_popup_fep_char_preview_window_cp02

0xa9d1,	// (0x0002a1a3) popup_fep_char_pre_window_t1

0xf1ef,	// (0x0002e9c1) main_ai5_sk_pane

0xa3ea,	// (0x00029bbc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3f6,	// (0x00029bc8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa40a,	// (0x00029bdc) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa416,	// (0x00029be8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x0002f68f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa429,	// (0x00029bfb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3b81,	// (0x00023353) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf530,	// (0x0002ed02) main_ai5_sk_pane_g1

0x54f4,	// (0x00024cc6) popup_query_code_window_g1

0x3194,	// (0x00022966) popup_fep_vkb_icf_pane

0x31a8,	// (0x0002297a) popup_fep_vtchi_icf_pane

0x3b81,	// (0x00023353) bg_icf_pane

0xa9e9,	// (0x0002a1bb) list_vkb_icf_pane

0x3b81,	// (0x00023353) bg_icf_pane_cp01

0xa9f5,	// (0x0002a1c7) vtchi_icf_list_pane

0xaa06,	// (0x0002a1d8) list_vkb_icf_pane_t1_ParamLimits

0xaa06,	// (0x0002a1d8) list_vkb_icf_pane_t1

0xaa1c,	// (0x0002a1ee) vtchi_icf_list_pane_t1_ParamLimits

0xaa1c,	// (0x0002a1ee) vtchi_icf_list_pane_t1

0x317e,	// (0x00022950) popup_fep_ituss_window_ParamLimits

0x31a8,	// (0x0002297a) popup_fep_vtchi_icf_pane_ParamLimits

0xa80f,	// (0x00029fe1) ituss_keypad_pane_ParamLimits

0x31be,	// (0x00022990) ituss_sks_pane

0x3b81,	// (0x00023353) bg_icf_pane_ParamLimits

0x3167,	// (0x00022939) icf_edit_indi_pane_ParamLimits

0x3167,	// (0x00022939) icf_edit_indi_pane

0xa9e9,	// (0x0002a1bb) list_vkb_icf_pane_ParamLimits

0x3b81,	// (0x00023353) bg_icf_pane_cp01_ParamLimits

0x3167,	// (0x00022939) icf_edit_indi_pane_cp01_ParamLimits

0x3167,	// (0x00022939) icf_edit_indi_pane_cp01

0xa9fd,	// (0x0002a1cf) vtchi_query_pane

0x791a,	// (0x000270ec) icf_edit_indi_pane_g1_ParamLimits

0x791a,	// (0x000270ec) icf_edit_indi_pane_g1

0xaaa1,	// (0x0002a273) icf_edit_indi_pane_g2_ParamLimits

0xaaa1,	// (0x0002a273) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002f6d1) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002f6d1) icf_edit_indi_pane_g

0xaab0,	// (0x0002a282) icf_edit_indi_pane_t1

0xaa37,	// (0x0002a209) bg_input_focus_pane_cp042

0x3ab0,	// (0x00023282) vtchi_button_pane

0xaa40,	// (0x0002a212) vtchi_query_pane_t1

0xaa4e,	// (0x0002a220) vtchi_query_pane_t2

0xaa5c,	// (0x0002a22e) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002f6c0) vtchi_query_pane_t

0x3221,	// (0x000229f3) bg_button_pane_cp13

0xaa6a,	// (0x0002a23c) vtchi_button_pane_g1

0xaa72,	// (0x0002a244) ituss_sks_pane_g1

0xaa7d,	// (0x0002a24f) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002f6c7) ituss_sks_pane_g

0xaa85,	// (0x0002a257) ituss_sks_pane_t1

0xaa93,	// (0x0002a265) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002f6cc) ituss_sks_pane_t

0x7107,	// (0x000268d9) indicator_nsta_pane_cp_g1

0x7110,	// (0x000268e2) indicator_nsta_pane_cp_g2

0x7118,	// (0x000268ea) indicator_nsta_pane_cp_g3

0x7120,	// (0x000268f2) indicator_nsta_pane_cp_g4

0x7120,	// (0x000268f2) indicator_nsta_pane_cp_g5

0x7120,	// (0x000268f2) indicator_nsta_pane_cp_g6

0x0005,

0xfaa7,	// (0x0002f279) indicator_nsta_pane_cp_g

0xf001,	// (0x0002e7d3) cell_graphic2_pane_t2_ParamLimits

0xf001,	// (0x0002e7d3) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x0002f586) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x0002f586) cell_graphic2_pane_t

0xf037,	// (0x0002e809) cell_graphic2_control_pane_t1

0xd305,	// (0x0002cad7) signal_pane_g3_ParamLimits

0xd305,	// (0x0002cad7) signal_pane_g3

0xd319,	// (0x0002caeb) signal_pane_g4_ParamLimits

0xd319,	// (0x0002caeb) signal_pane_g4

0xa7e9,	// (0x00029fbb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa7e9,	// (0x00029fbb) cell_ai5_widget_list_row_pane_t3

0xa8cc,	// (0x0002a09e) cell_ituss_key_pane_t1_ParamLimits

0xa8cc,	// (0x0002a09e) cell_ituss_key_pane_t1

0x5147,	// (0x00024919) form_field_data_wide_pane_vc_t2_ParamLimits

0x5147,	// (0x00024919) form_field_data_wide_pane_vc_t2

0x515b,	// (0x0002492d) form_field_data_wide_pane_vc_t3_ParamLimits

0x515b,	// (0x0002492d) form_field_data_wide_pane_vc_t3

0x0002,

0xf803,	// (0x0002efd5) form_field_data_wide_pane_vc_t_ParamLimits

0xf803,	// (0x0002efd5) form_field_data_wide_pane_vc_t

0x6dbf,	// (0x00026591) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6dbf,	// (0x00026591) form_field_slider_wide_pane_vc_t3

0x6e9d,	// (0x0002666f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6e9d,	// (0x0002666f) form_field_popup_wide_pane_vc_t2

0x6eb4,	// (0x00026686) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6eb4,	// (0x00026686) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa96,	// (0x0002f268) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x0002f268) form_field_popup_wide_pane_vc_t

0xceaa,	// (0x0002c67c) aid_fshwr2_btn_pane_ParamLimits

0xceb9,	// (0x0002c68b) aid_fshwr2_syb_pane_ParamLimits

0xcecb,	// (0x0002c69d) aid_fshwr2_txt_pane_ParamLimits

0x3b81,	// (0x00023353) fshwr2_bg_pane_ParamLimits

0xceda,	// (0x0002c6ac) fshwr2_func_candi_pane_ParamLimits

0xceeb,	// (0x0002c6bd) fshwr2_hwr_syb_pane_ParamLimits

0xcf06,	// (0x0002c6d8) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000ceb8 };

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
0xdd11,	// (0x0001abc9) Screen

0xdd1d,	// (0x0001abd5) application_window_ParamLimits

0xdd1d,	// (0x0001abd5) application_window

0x411c,	// (0x00010fd4) screen_g1

0xc81a,	// (0x000196d2) area_bottom_pane_ParamLimits

0xc81a,	// (0x000196d2) area_bottom_pane

0x25d4,	// (0x0000f48c) area_top_pane_ParamLimits

0x25d4,	// (0x0000f48c) area_top_pane

0x2672,	// (0x0000f52a) main_pane_ParamLimits

0x2672,	// (0x0000f52a) main_pane

0x4126,	// (0x00010fde) misc_graphics

0xf0e3,	// (0x0001bf9b) battery_pane_ParamLimits

0xf0e3,	// (0x0001bf9b) battery_pane

0x75c7,	// (0x0001447f) bg_status_flat_pane_g8

0x75cf,	// (0x00014487) bg_status_flat_pane_g9

0x68d4,	// (0x0001378c) context_pane_ParamLimits

0x68d4,	// (0x0001378c) context_pane

0xf24e,	// (0x0001c106) navi_pane_ParamLimits

0xf24e,	// (0x0001c106) navi_pane

0xf2c6,	// (0x0001c17e) signal_pane_ParamLimits

0xf2c6,	// (0x0001c17e) signal_pane

0x0008,

0xf880,	// (0x0001c738) bg_status_flat_pane_g

0xf356,	// (0x0001c20e) status_pane_g1_ParamLimits

0xf356,	// (0x0001c20e) status_pane_g1

0xf36c,	// (0x0001c224) status_pane_g2_ParamLimits

0xf36c,	// (0x0001c224) status_pane_g2

0x6aed,	// (0x000139a5) status_pane_g3_ParamLimits

0x6aed,	// (0x000139a5) status_pane_g3

0x0004,

0xf7b3,	// (0x0001c66b) status_pane_g_ParamLimits

0xf7b3,	// (0x0001c66b) status_pane_g

0xf378,	// (0x0001c230) title_pane_ParamLimits

0xf378,	// (0x0001c230) title_pane

0xf3db,	// (0x0001c293) uni_indicator_pane_ParamLimits

0xf3db,	// (0x0001c293) uni_indicator_pane

0x617b,	// (0x00013033) bg_list_pane_ParamLimits

0x617b,	// (0x00013033) bg_list_pane

0xe9b8,	// (0x0001b870) find_pane

0xe9c0,	// (0x0001b878) listscroll_app_pane_ParamLimits

0xe9c0,	// (0x0001b878) listscroll_app_pane

0x61af,	// (0x00013067) listscroll_form_pane

0xe9cc,	// (0x0001b884) listscroll_gen_pane_ParamLimits

0xe9cc,	// (0x0001b884) listscroll_gen_pane

0x61af,	// (0x00013067) listscroll_set_pane

0x8186,	// (0x0001503e) main_idle_act_pane

0x5e5f,	// (0x00012d17) main_idle_trad_pane

0x5e5f,	// (0x00012d17) main_list_empty_pane

0x61dd,	// (0x00013095) main_midp_pane

0x61e9,	// (0x000130a1) main_pane_g1_ParamLimits

0x61e9,	// (0x000130a1) main_pane_g1

0xe9e0,	// (0x0001b898) popup_ai_message_window_ParamLimits

0xe9e0,	// (0x0001b898) popup_ai_message_window

0xea71,	// (0x0001b929) popup_fep_china_uni_window_ParamLimits

0xea71,	// (0x0001b929) popup_fep_china_uni_window

0x6301,	// (0x000131b9) popup_fep_japan_candidate_window_ParamLimits

0x6301,	// (0x000131b9) popup_fep_japan_candidate_window

0x6321,	// (0x000131d9) popup_fep_japan_predictive_window_ParamLimits

0x6321,	// (0x000131d9) popup_fep_japan_predictive_window

0xeacd,	// (0x0001b985) popup_find_window

0xeaea,	// (0x0001b9a2) popup_grid_graphic_window_ParamLimits

0xeaea,	// (0x0001b9a2) popup_grid_graphic_window

0x6386,	// (0x0001323e) popup_large_graphic_colour_window

0xeb82,	// (0x0001ba3a) popup_menu_window_ParamLimits

0xeb82,	// (0x0001ba3a) popup_menu_window

0xed3c,	// (0x0001bbf4) popup_note_image_window

0xed02,	// (0x0001bbba) popup_note_wait_window_ParamLimits

0xed02,	// (0x0001bbba) popup_note_wait_window

0xed54,	// (0x0001bc0c) popup_note_window_ParamLimits

0xed54,	// (0x0001bc0c) popup_note_window

0xedfa,	// (0x0001bcb2) popup_query_code_window_ParamLimits

0xedfa,	// (0x0001bcb2) popup_query_code_window

0x65ce,	// (0x00013486) popup_query_data_code_window_ParamLimits

0x65ce,	// (0x00013486) popup_query_data_code_window

0xee34,	// (0x0001bcec) popup_query_data_window_ParamLimits

0xee34,	// (0x0001bcec) popup_query_data_window

0xeeaa,	// (0x0001bd62) popup_query_sat_info_window_ParamLimits

0xeeaa,	// (0x0001bd62) popup_query_sat_info_window

0xef41,	// (0x0001bdf9) popup_snote_single_graphic_window_ParamLimits

0xef41,	// (0x0001bdf9) popup_snote_single_graphic_window

0xef41,	// (0x0001bdf9) popup_snote_single_text_window_ParamLimits

0xef41,	// (0x0001bdf9) popup_snote_single_text_window

0x6655,	// (0x0001350d) popup_sub_window_general

0x6785,	// (0x0001363d) popup_window_general_ParamLimits

0x6785,	// (0x0001363d) popup_window_general

0x679a,	// (0x00013652) power_save_pane

0xc99c,	// (0x00019854) control_pane_g1_ParamLimits

0xc99c,	// (0x00019854) control_pane_g1

0xc9c5,	// (0x0001987d) control_pane_g2_ParamLimits

0xc9c5,	// (0x0001987d) control_pane_g2

0x611c,	// (0x00012fd4) control_pane_g3_ParamLimits

0x611c,	// (0x00012fd4) control_pane_g3

0x0007,

0xf79b,	// (0x0001c653) control_pane_g_ParamLimits

0xf79b,	// (0x0001c653) control_pane_g

0xca02,	// (0x000198ba) control_pane_t1_ParamLimits

0xca02,	// (0x000198ba) control_pane_t1

0xca60,	// (0x00019918) control_pane_t2_ParamLimits

0xca60,	// (0x00019918) control_pane_t2

0x0002,

0xf7ac,	// (0x0001c664) control_pane_t_ParamLimits

0xf7ac,	// (0x0001c664) control_pane_t

0x603d,	// (0x00012ef5) navi_navi_volume_pane_cp1

0x6046,	// (0x00012efe) status_small_icon_pane

0x604e,	// (0x00012f06) status_small_pane_g1_ParamLimits

0x604e,	// (0x00012f06) status_small_pane_g1

0x6082,	// (0x00012f3a) status_small_pane_g2_ParamLimits

0x6082,	// (0x00012f3a) status_small_pane_g2

0x608e,	// (0x00012f46) status_small_pane_g3_ParamLimits

0x608e,	// (0x00012f46) status_small_pane_g3

0x609a,	// (0x00012f52) status_small_pane_g4_ParamLimits

0x609a,	// (0x00012f52) status_small_pane_g4

0x60a6,	// (0x00012f5e) status_small_pane_g5_ParamLimits

0x60a6,	// (0x00012f5e) status_small_pane_g5

0x60b5,	// (0x00012f6d) status_small_pane_g6_ParamLimits

0x60b5,	// (0x00012f6d) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001c642) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001c642) status_small_pane_g

0x60e5,	// (0x00012f9d) status_small_pane_t1

0x6108,	// (0x00012fc0) status_small_wait_pane_ParamLimits

0x6108,	// (0x00012fc0) status_small_wait_pane

0xe767,	// (0x0001b61f) aid_levels_signal_ParamLimits

0xe767,	// (0x0001b61f) aid_levels_signal

0xe77f,	// (0x0001b637) signal_pane_g1_ParamLimits

0xe77f,	// (0x0001b637) signal_pane_g1

0xe79a,	// (0x0001b652) signal_pane_g2_ParamLimits

0xe79a,	// (0x0001b652) signal_pane_g2

0x0003,

0xf71b,	// (0x0001c5d3) signal_pane_g_ParamLimits

0xf71b,	// (0x0001c5d3) signal_pane_g

0x58af,	// (0x00012767) context_pane_g1

0xdd2d,	// (0x0001abe5) title_pane_g1

0xdd64,	// (0x0001ac1c) title_pane_t1

0x41ce,	// (0x00011086) title_pane_t2

0x41f4,	// (0x000110ac) title_pane_t3

0x0002,

0xf56f,	// (0x0001c427) title_pane_t

0xf403,	// (0x0001c2bb) aid_levels_battery_ParamLimits

0xf403,	// (0x0001c2bb) aid_levels_battery

0xf41f,	// (0x0001c2d7) battery_pane_g1_ParamLimits

0xf41f,	// (0x0001c2d7) battery_pane_g1

0xf43c,	// (0x0001c2f4) battery_pane_g2_ParamLimits

0xf43c,	// (0x0001c2f4) battery_pane_g2

0x0001,

0xf7be,	// (0x0001c676) battery_pane_g_ParamLimits

0xf7be,	// (0x0001c676) battery_pane_g

0x7efd,	// (0x00014db5) uni_indicator_pane_g1

0x7f12,	// (0x00014dca) uni_indicator_pane_g2

0x7f28,	// (0x00014de0) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0001c7e0) uni_indicator_pane_g

0x5cd1,	// (0x00012b89) navi_icon_pane_ParamLimits

0x5cd1,	// (0x00012b89) navi_icon_pane

0x5c1a,	// (0x00012ad2) navi_midp_pane

0x5ced,	// (0x00012ba5) navi_navi_pane

0x5cf7,	// (0x00012baf) navi_text_pane_ParamLimits

0x5cf7,	// (0x00012baf) navi_text_pane

0x411c,	// (0x00010fd4) status_small_wait_pane_g1

0x463d,	// (0x000114f5) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0001c7db) status_small_wait_pane_g

0x7c22,	// (0x00014ada) navi_navi_icon_text_pane

0x7c2a,	// (0x00014ae2) navi_navi_pane_g1_ParamLimits

0x7c2a,	// (0x00014ae2) navi_navi_pane_g1

0x7c3c,	// (0x00014af4) navi_navi_pane_g2_ParamLimits

0x7c3c,	// (0x00014af4) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0001c7a9) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0001c7a9) navi_navi_pane_g

0x7c4e,	// (0x00014b06) navi_navi_tabs_pane

0x7c57,	// (0x00014b0f) navi_navi_text_pane

0x7c22,	// (0x00014ada) navi_navi_volume_pane

0x7bfe,	// (0x00014ab6) navi_text_pane_t1

0x7bf2,	// (0x00014aaa) navi_icon_pane_g1

0x7b45,	// (0x000149fd) navi_navi_text_pane_t1

0xccab,	// (0x00019b63) navi_navi_volume_pane_g1

0xccb3,	// (0x00019b6b) volume_small_pane

0x00c9,	// (0x0000cf81) navi_navi_icon_text_pane_g1

0x00d1,	// (0x0000cf89) navi_navi_icon_text_pane_t1

0x5ced,	// (0x00012ba5) navi_tabs_2_long_pane

0x5ced,	// (0x00012ba5) navi_tabs_2_pane

0x5ced,	// (0x00012ba5) navi_tabs_3_long_pane

0x5ced,	// (0x00012ba5) navi_tabs_3_pane

0x5ced,	// (0x00012ba5) navi_tabs_4_pane

0xcc8b,	// (0x00019b43) tabs_2_active_pane_ParamLimits

0xcc8b,	// (0x00019b43) tabs_2_active_pane

0xcc9b,	// (0x00019b53) tabs_2_passive_pane_ParamLimits

0xcc9b,	// (0x00019b53) tabs_2_passive_pane

0xcc59,	// (0x00019b11) tabs_3_active_pane_ParamLimits

0xcc59,	// (0x00019b11) tabs_3_active_pane

0xcc69,	// (0x00019b21) tabs_3_passive_pane_ParamLimits

0xcc69,	// (0x00019b21) tabs_3_passive_pane

0xcc7a,	// (0x00019b32) tabs_3_passive_pane_cp_ParamLimits

0xcc7a,	// (0x00019b32) tabs_3_passive_pane_cp

0xcc15,	// (0x00019acd) tabs_4_active_pane_ParamLimits

0xcc15,	// (0x00019acd) tabs_4_active_pane

0xcc26,	// (0x00019ade) tabs_4_passive_pane_ParamLimits

0xcc26,	// (0x00019ade) tabs_4_passive_pane

0xcc37,	// (0x00019aef) tabs_4_passive_pane_cp_ParamLimits

0xcc37,	// (0x00019aef) tabs_4_passive_pane_cp

0xcc48,	// (0x00019b00) tabs_4_passive_pane_cp2_ParamLimits

0xcc48,	// (0x00019b00) tabs_4_passive_pane_cp2

0xcbf5,	// (0x00019aad) tabs_2_long_active_pane_ParamLimits

0xcbf5,	// (0x00019aad) tabs_2_long_active_pane

0xcc05,	// (0x00019abd) tabs_2_long_passive_pane_ParamLimits

0xcc05,	// (0x00019abd) tabs_2_long_passive_pane

0xcbc2,	// (0x00019a7a) tabs_3_long_active_pane_ParamLimits

0xcbc2,	// (0x00019a7a) tabs_3_long_active_pane

0xcbd3,	// (0x00019a8b) tabs_3_long_passive_pane_ParamLimits

0xcbd3,	// (0x00019a8b) tabs_3_long_passive_pane

0xcbe4,	// (0x00019a9c) tabs_3_long_passive_pane_cp_ParamLimits

0xcbe4,	// (0x00019a9c) tabs_3_long_passive_pane_cp

0x30c7,	// (0x0000ff7f) volume_small_pane_g1

0xcb71,	// (0x00019a29) volume_small_pane_g2

0xcb7a,	// (0x00019a32) volume_small_pane_g3

0xcb83,	// (0x00019a3b) volume_small_pane_g4

0xcb8c,	// (0x00019a44) volume_small_pane_g5

0xcb95,	// (0x00019a4d) volume_small_pane_g6

0xcb9e,	// (0x00019a56) volume_small_pane_g7

0xcba7,	// (0x00019a5f) volume_small_pane_g8

0xcbb0,	// (0x00019a68) volume_small_pane_g9

0xcbb9,	// (0x00019a71) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0001c775) volume_small_pane_g

0x449b,	// (0x00011353) bg_active_tab_pane_cp2_ParamLimits

0x449b,	// (0x00011353) bg_active_tab_pane_cp2

0xddf0,	// (0x0001aca8) tabs_3_active_pane_g1

0xddf8,	// (0x0001acb0) tabs_3_active_pane_t1

0x449b,	// (0x00011353) bg_passive_tab_pane_cp2_ParamLimits

0x449b,	// (0x00011353) bg_passive_tab_pane_cp2

0xddf0,	// (0x0001aca8) tabs_3_passive_pane_g1

0xddf8,	// (0x0001acb0) tabs_3_passive_pane_t1

0x449b,	// (0x00011353) bg_active_tab_pane_cp3_ParamLimits

0x449b,	// (0x00011353) bg_active_tab_pane_cp3

0xde0a,	// (0x0001acc2) tabs_4_active_pane_g1

0xde12,	// (0x0001acca) tabs_4_active_pane_t1

0x449b,	// (0x00011353) bg_passive_tab_pane_cp3_ParamLimits

0x449b,	// (0x00011353) bg_passive_tab_pane_cp3

0xde0a,	// (0x0001acc2) tabs_4_1_passive_pane_g1

0xde12,	// (0x0001acca) tabs_4_1_passive_pane_t1

0x61dd,	// (0x00013095) list_highlight_pane_cp2

0x0230,	// (0x0000d0e8) list_set_pane_ParamLimits

0x0230,	// (0x0000d0e8) list_set_pane

0x02ca,	// (0x0000d182) main_pane_set_t1_ParamLimits

0x02ca,	// (0x0000d182) main_pane_set_t1

0x02ea,	// (0x0000d1a2) main_pane_set_t2_ParamLimits

0x02ea,	// (0x0000d1a2) main_pane_set_t2

0x02fe,	// (0x0000d1b6) main_pane_set_t3_ParamLimits

0x02fe,	// (0x0000d1b6) main_pane_set_t3

0x0310,	// (0x0000d1c8) main_pane_set_t4_ParamLimits

0x0310,	// (0x0000d1c8) main_pane_set_t4

0x0003,

0xf98d,	// (0x0001c845) main_pane_set_t_ParamLimits

0xf98d,	// (0x0001c845) main_pane_set_t

0x0322,	// (0x0000d1da) setting_code_pane

0x032c,	// (0x0000d1e4) setting_slider_graphic_pane

0x032c,	// (0x0000d1e4) setting_slider_pane

0x032c,	// (0x0000d1e4) setting_text_pane

0x032c,	// (0x0000d1e4) setting_volume_pane

0x28b7,	// (0x0000f76f) volume_set_pane

0x4206,	// (0x000110be) bg_set_opt_pane_cp

0x28bf,	// (0x0000f777) setting_slider_pane_t1

0x28d8,	// (0x0000f790) setting_slider_pane_t2

0x28f2,	// (0x0000f7aa) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0001c42e) setting_slider_pane_t

0x290a,	// (0x0000f7c2) slider_set_pane

0x4126,	// (0x00010fde) bg_set_opt_pane_cp2

0x4248,	// (0x00011100) setting_slider_graphic_pane_g1

0x2920,	// (0x0000f7d8) setting_slider_graphic_pane_t1

0x2930,	// (0x0000f7e8) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0001c435) setting_slider_graphic_pane_t

0x2940,	// (0x0000f7f8) slider_set_pane_cp

0x4126,	// (0x00010fde) input_focus_pane_cp1

0x816d,	// (0x00015025) list_set_text_pane

0x411c,	// (0x00010fd4) setting_text_pane_g1

0x4126,	// (0x00010fde) input_focus_pane_cp2

0x411c,	// (0x00010fd4) setting_code_pane_g1

0x4251,	// (0x00011109) setting_code_pane_t1

0x425f,	// (0x00011117) set_text_pane_t1_ParamLimits

0x425f,	// (0x00011117) set_text_pane_t1

0x5125,	// (0x00011fdd) set_opt_bg_pane_g1

0x512d,	// (0x00011fe5) set_opt_bg_pane_g2

0x8147,	// (0x00014fff) set_opt_bg_pane_g3

0x513d,	// (0x00011ff5) set_opt_bg_pane_g4

0x5145,	// (0x00011ffd) set_opt_bg_pane_g5

0x514d,	// (0x00012005) set_opt_bg_pane_g6

0x8151,	// (0x00015009) set_opt_bg_pane_g7

0x8159,	// (0x00015011) set_opt_bg_pane_g8

0x8163,	// (0x0001501b) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0001c832) set_opt_bg_pane_g

0x813a,	// (0x00014ff2) slider_set_pane_g1

0x328f,	// (0x00010147) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0001c823) slider_set_pane_g

0x322b,	// (0x000100e3) volume_set_pane_g1

0x3233,	// (0x000100eb) volume_set_pane_g2

0x323b,	// (0x000100f3) volume_set_pane_g3

0x3243,	// (0x000100fb) volume_set_pane_g4

0x324b,	// (0x00010103) volume_set_pane_g5

0x3253,	// (0x0001010b) volume_set_pane_g6

0x325b,	// (0x00010113) volume_set_pane_g7

0x3263,	// (0x0001011b) volume_set_pane_g8

0x326b,	// (0x00010123) volume_set_pane_g9

0x3273,	// (0x0001012b) volume_set_pane_g10

0x0009,

0xf943,	// (0x0001c7fb) volume_set_pane_g

0xde24,	// (0x0001acdc) indicator_pane_ParamLimits

0xde24,	// (0x0001acdc) indicator_pane

0xde4c,	// (0x0001ad04) main_idle_pane_g2_ParamLimits

0xde4c,	// (0x0001ad04) main_idle_pane_g2

0xde84,	// (0x0001ad3c) main_pane_idle_g1_ParamLimits

0xde84,	// (0x0001ad3c) main_pane_idle_g1

0x42ba,	// (0x00011172) popup_clock_digital_analogue_window_ParamLimits

0x42ba,	// (0x00011172) popup_clock_digital_analogue_window

0xdeab,	// (0x0001ad63) soft_indicator_pane_ParamLimits

0xdeab,	// (0x0001ad63) soft_indicator_pane

0xdec5,	// (0x0001ad7d) wallpaper_pane_ParamLimits

0xdec5,	// (0x0001ad7d) wallpaper_pane

0x411c,	// (0x00010fd4) wallpaper_pane_g1

0xded7,	// (0x0001ad8f) indicator_pane_g1_ParamLimits

0xded7,	// (0x0001ad8f) indicator_pane_g1

0x861e,	// (0x000154d6) navi_navi_icon_text_pane_srt_g1

0x430c,	// (0x000111c4) soft_indicator_pane_t1

0x4326,	// (0x000111de) aid_ps_area_pane

0xdeed,	// (0x0001ada5) aid_ps_clock_pane

0x4345,	// (0x000111fd) aid_ps_indicator_pane

0x4351,	// (0x00011209) indicator_ps_pane_ParamLimits

0x4351,	// (0x00011209) indicator_ps_pane

0x4360,	// (0x00011218) power_save_pane_g1_ParamLimits

0x4360,	// (0x00011218) power_save_pane_g1

0x436c,	// (0x00011224) power_save_pane_g2_ParamLimits

0x436c,	// (0x00011224) power_save_pane_g2

0x24c8,	// (0x0000f380) aid_navinavi_width_pane

0x4326,	// (0x000111de) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0001c43a) power_save_pane_g_ParamLimits

0xf582,	// (0x0001c43a) power_save_pane_g

0x437a,	// (0x00011232) power_save_pane_t1_ParamLimits

0x437a,	// (0x00011232) power_save_pane_t1

0xdeed,	// (0x0001ada5) aid_ps_clock_pane_ParamLimits

0x4345,	// (0x000111fd) aid_ps_indicator_pane_ParamLimits

0x438c,	// (0x00011244) power_save_pane_t4_ParamLimits

0x438c,	// (0x00011244) power_save_pane_t4

0x0001,

0xf587,	// (0x0001c43f) power_save_pane_t_ParamLimits

0xf587,	// (0x0001c43f) power_save_pane_t

0x43b6,	// (0x0001126e) power_save_t3_ParamLimits

0x43b6,	// (0x0001126e) power_save_t3

0x43a1,	// (0x00011259) power_save_t2_ParamLimits

0x43a1,	// (0x00011259) power_save_t2

0x43cb,	// (0x00011283) indicator_ps_pane_g1

0xdefb,	// (0x0001adb3) ai_gene_pane_ParamLimits

0xdefb,	// (0x0001adb3) ai_gene_pane

0xdf12,	// (0x0001adca) ai_links_pane_ParamLimits

0xdf12,	// (0x0001adca) ai_links_pane

0xdf2a,	// (0x0001ade2) indicator_pane_cp1_ParamLimits

0xdf2a,	// (0x0001ade2) indicator_pane_cp1

0xdf39,	// (0x0001adf1) main_pane_idle_g1_cp_ParamLimits

0xdf39,	// (0x0001adf1) main_pane_idle_g1_cp

0x4404,	// (0x000112bc) popup_ai_links_title_window

0xdf51,	// (0x0001ae09) soft_indicator_pane_cp1_ParamLimits

0xdf51,	// (0x0001ae09) soft_indicator_pane_cp1

0x7eeb,	// (0x00014da3) ai_links_pane_g1

0x7ef4,	// (0x00014dac) grid_ai_links_pane

0x01a2,	// (0x0000d05a) ai_gene_pane_1

0x7ed9,	// (0x00014d91) ai_gene_pane_2

0x7ee2,	// (0x00014d9a) list_highlight_pane_cp4

0x017e,	// (0x0000d036) cell_ai_link_pane_ParamLimits

0x017e,	// (0x0000d036) cell_ai_link_pane

0x7eaa,	// (0x00014d62) cell_ai_link_pane_g1

0x463d,	// (0x000114f5) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0001c7d6) cell_ai_link_pane_g

0x4126,	// (0x00010fde) grid_highlight_cp2

0x4126,	// (0x00010fde) bg_popup_sub_pane_cp1

0x4427,	// (0x000112df) popup_ai_links_title_window_t1

0x7df8,	// (0x00014cb0) ai_gene_pane_1_g1_ParamLimits

0x7df8,	// (0x00014cb0) ai_gene_pane_1_g1

0x7e04,	// (0x00014cbc) ai_gene_pane_1_g2_ParamLimits

0x7e04,	// (0x00014cbc) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0001c7cc) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0001c7cc) ai_gene_pane_1_g

0x7e11,	// (0x00014cc9) ai_gene_pane_1_t1_ParamLimits

0x7e11,	// (0x00014cc9) ai_gene_pane_1_t1

0x7e45,	// (0x00014cfd) grid_ai_soft_ind_pane

0x7de3,	// (0x00014c9b) ai_gene_pane_2_t1_ParamLimits

0x7de3,	// (0x00014c9b) ai_gene_pane_2_t1

0xdf65,	// (0x0001ae1d) main_pane_empty_t1_ParamLimits

0xdf65,	// (0x0001ae1d) main_pane_empty_t1

0xdf7d,	// (0x0001ae35) main_pane_empty_t2_ParamLimits

0xdf7d,	// (0x0001ae35) main_pane_empty_t2

0xdf92,	// (0x0001ae4a) main_pane_empty_t3_ParamLimits

0xdf92,	// (0x0001ae4a) main_pane_empty_t3

0xdfa4,	// (0x0001ae5c) main_pane_empty_t4_ParamLimits

0xdfa4,	// (0x0001ae5c) main_pane_empty_t4

0xdfb6,	// (0x0001ae6e) main_pane_empty_t5_ParamLimits

0xdfb6,	// (0x0001ae6e) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0001c444) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0001c444) main_pane_empty_t

0x5222,	// (0x000120da) bg_popup_window_pane_ParamLimits

0x5222,	// (0x000120da) bg_popup_window_pane

0x7b53,	// (0x00014a0b) find_popup_pane_cp2_ParamLimits

0x7b53,	// (0x00014a0b) find_popup_pane_cp2

0x7b5f,	// (0x00014a17) heading_pane_ParamLimits

0x7b5f,	// (0x00014a17) heading_pane

0x4126,	// (0x00010fde) bg_popup_sub_pane

0x00ee,	// (0x0000cfa6) bg_popup_window_pane_g1_ParamLimits

0x00ee,	// (0x0000cfa6) bg_popup_window_pane_g1

0x00fd,	// (0x0000cfb5) bg_popup_window_pane_g2_ParamLimits

0x00fd,	// (0x0000cfb5) bg_popup_window_pane_g2

0x0109,	// (0x0000cfc1) bg_popup_window_pane_g3_ParamLimits

0x0109,	// (0x0000cfc1) bg_popup_window_pane_g3

0x0115,	// (0x0000cfcd) bg_popup_window_pane_g4_ParamLimits

0x0115,	// (0x0000cfcd) bg_popup_window_pane_g4

0x0124,	// (0x0000cfdc) bg_popup_window_pane_g5_ParamLimits

0x0124,	// (0x0000cfdc) bg_popup_window_pane_g5

0x0134,	// (0x0000cfec) bg_popup_window_pane_g6_ParamLimits

0x0134,	// (0x0000cfec) bg_popup_window_pane_g6

0x0140,	// (0x0000cff8) bg_popup_window_pane_g7_ParamLimits

0x0140,	// (0x0000cff8) bg_popup_window_pane_g7

0x014f,	// (0x0000d007) bg_popup_window_pane_g8_ParamLimits

0x014f,	// (0x0000d007) bg_popup_window_pane_g8

0x015e,	// (0x0000d016) bg_popup_window_pane_g9_ParamLimits

0x015e,	// (0x0000d016) bg_popup_window_pane_g9

0x7b39,	// (0x000149f1) bg_popup_window_pane_g10_ParamLimits

0x7b39,	// (0x000149f1) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0001c794) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0001c794) bg_popup_window_pane_g

0x7a62,	// (0x0001491a) bg_popup_heading_pane_ParamLimits

0x7a62,	// (0x0001491a) bg_popup_heading_pane

0x3317,	// (0x000101cf) tabs_4_passive_pane_cp_srt_ParamLimits

0x3317,	// (0x000101cf) tabs_4_passive_pane_cp_srt

0x3329,	// (0x000101e1) tabs_4_passive_pane_srt_ParamLimits

0x7a76,	// (0x0001492e) heading_pane_g2

0x3329,	// (0x000101e1) tabs_4_passive_pane_srt

0x6dd3,	// (0x00013c8b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6dd3,	// (0x00013c8b) bg_passive_tab_pane_cp3_srt

0x7a7e,	// (0x00014936) heading_pane_t1_ParamLimits

0x7a7e,	// (0x00014936) heading_pane_t1

0x7a95,	// (0x0001494d) heading_pane_t2_ParamLimits

0x7a95,	// (0x0001494d) heading_pane_t2

0x0001,

0xf8d7,	// (0x0001c78f) heading_pane_t_ParamLimits

0xf8d7,	// (0x0001c78f) heading_pane_t

0x758f,	// (0x00014447) bg_popup_heading_pane_g1

0x763e,	// (0x000144f6) bg_popup_heading_pane_g2

0x7648,	// (0x00014500) bg_popup_heading_pane_g3

0x7652,	// (0x0001450a) bg_popup_heading_pane_g4

0x765c,	// (0x00014514) bg_popup_heading_pane_g5

0x7666,	// (0x0001451e) bg_popup_heading_pane_g6

0x766e,	// (0x00014526) bg_popup_heading_pane_g7

0x7676,	// (0x0001452e) bg_popup_heading_pane_g8

0x7680,	// (0x00014538) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0001c74b) bg_popup_heading_pane_g

0x6caf,	// (0x00013b67) bg_popup_sub_pane_g1

0x6cbf,	// (0x00013b77) bg_popup_sub_pane_g2

0x6cb7,	// (0x00013b6f) bg_popup_sub_pane_g3

0x6ccf,	// (0x00013b87) bg_popup_sub_pane_g4

0x6cc7,	// (0x00013b7f) bg_popup_sub_pane_g5

0x6cd7,	// (0x00013b8f) bg_popup_sub_pane_g6

0x6cdf,	// (0x00013b97) bg_popup_sub_pane_g7

0x6cef,	// (0x00013ba7) bg_popup_sub_pane_g8

0x6ce7,	// (0x00013b9f) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0001c725) bg_popup_sub_pane_g

0x449b,	// (0x00011353) bg_popup_window_pane_cp5_ParamLimits

0x449b,	// (0x00011353) bg_popup_window_pane_cp5

0x44b7,	// (0x0001136f) popup_note_window_g1_ParamLimits

0x44b7,	// (0x0001136f) popup_note_window_g1

0x44c3,	// (0x0001137b) popup_note_window_t1_ParamLimits

0x44c3,	// (0x0001137b) popup_note_window_t1

0x44d9,	// (0x00011391) popup_note_window_t2_ParamLimits

0x44d9,	// (0x00011391) popup_note_window_t2

0x44ef,	// (0x000113a7) popup_note_window_t3_ParamLimits

0x44ef,	// (0x000113a7) popup_note_window_t3

0x4505,	// (0x000113bd) popup_note_window_t4_ParamLimits

0x4505,	// (0x000113bd) popup_note_window_t4

0x452d,	// (0x000113e5) popup_note_window_t5_ParamLimits

0x452d,	// (0x000113e5) popup_note_window_t5

0x0004,

0xf597,	// (0x0001c44f) popup_note_window_t_ParamLimits

0xf597,	// (0x0001c44f) popup_note_window_t

0x4551,	// (0x00011409) bg_popup_window_pane_cp6_ParamLimits

0x4551,	// (0x00011409) bg_popup_window_pane_cp6

0x750b,	// (0x000143c3) popup_note_image_window_g1_ParamLimits

0x750b,	// (0x000143c3) popup_note_image_window_g1

0x7517,	// (0x000143cf) popup_note_image_window_g2_ParamLimits

0x7517,	// (0x000143cf) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0001c719) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0001c719) popup_note_image_window_g

0x7530,	// (0x000143e8) popup_note_image_window_t1_ParamLimits

0x7530,	// (0x000143e8) popup_note_image_window_t1

0x7549,	// (0x00014401) popup_note_image_window_t2_ParamLimits

0x7549,	// (0x00014401) popup_note_image_window_t2

0x7562,	// (0x0001441a) popup_note_image_window_t3_ParamLimits

0x7562,	// (0x0001441a) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0001c71e) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0001c71e) popup_note_image_window_t

0x73cc,	// (0x00014284) bg_popup_window_pane_cp7_ParamLimits

0x73cc,	// (0x00014284) bg_popup_window_pane_cp7

0x73fc,	// (0x000142b4) popup_note_wait_window_g1_ParamLimits

0x73fc,	// (0x000142b4) popup_note_wait_window_g1

0x7408,	// (0x000142c0) popup_note_wait_window_g2_ParamLimits

0x7408,	// (0x000142c0) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0001c707) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0001c707) popup_note_wait_window_g

0x7420,	// (0x000142d8) popup_note_wait_window_t1_ParamLimits

0x7420,	// (0x000142d8) popup_note_wait_window_t1

0x7447,	// (0x000142ff) popup_note_wait_window_t2_ParamLimits

0x7447,	// (0x000142ff) popup_note_wait_window_t2

0x7464,	// (0x0001431c) popup_note_wait_window_t3_ParamLimits

0x7464,	// (0x0001431c) popup_note_wait_window_t3

0x7477,	// (0x0001432f) popup_note_wait_window_t4_ParamLimits

0x7477,	// (0x0001432f) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0001c70e) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0001c70e) popup_note_wait_window_t

0x749c,	// (0x00014354) wait_bar_pane_ParamLimits

0x749c,	// (0x00014354) wait_bar_pane

0x4126,	// (0x00010fde) wait_anim_pane

0x4126,	// (0x00010fde) wait_border_pane

0x411c,	// (0x00010fd4) wait_anim_pane_g1

0x411c,	// (0x00010fd4) wait_anim_pane_g2

0x0001,

0xf716,	// (0x0001c5ce) wait_anim_pane_g

0x7370,	// (0x00014228) wait_border_pane_g1

0x737b,	// (0x00014233) wait_border_pane_g2

0x7384,	// (0x0001423c) wait_border_pane_g3

0x0002,

0xf848,	// (0x0001c700) wait_border_pane_g

0x71db,	// (0x00014093) bg_popup_window_pane_cp16_ParamLimits

0x71db,	// (0x00014093) bg_popup_window_pane_cp16

0x72db,	// (0x00014193) indicator_popup_pane_cp4_ParamLimits

0x72db,	// (0x00014193) indicator_popup_pane_cp4

0x72ef,	// (0x000141a7) popup_query_data_window_t1_ParamLimits

0x72ef,	// (0x000141a7) popup_query_data_window_t1

0x7301,	// (0x000141b9) popup_query_data_window_t2_ParamLimits

0x7301,	// (0x000141b9) popup_query_data_window_t2

0x731a,	// (0x000141d2) popup_query_data_window_t3_ParamLimits

0x731a,	// (0x000141d2) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0001c6f9) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0001c6f9) popup_query_data_window_t

0x7334,	// (0x000141ec) query_popup_data_pane_ParamLimits

0x7334,	// (0x000141ec) query_popup_data_pane

0x7348,	// (0x00014200) query_popup_data_pane_cp1_ParamLimits

0x7348,	// (0x00014200) query_popup_data_pane_cp1

0x71db,	// (0x00014093) bg_popup_window_pane_cp10_ParamLimits

0x71db,	// (0x00014093) bg_popup_window_pane_cp10

0x720d,	// (0x000140c5) indicator_popup_pane_ParamLimits

0x720d,	// (0x000140c5) indicator_popup_pane

0x722f,	// (0x000140e7) popup_query_code_window_t1_ParamLimits

0x722f,	// (0x000140e7) popup_query_code_window_t1

0x7249,	// (0x00014101) popup_query_code_window_t2_ParamLimits

0x7249,	// (0x00014101) popup_query_code_window_t2

0x7292,	// (0x0001414a) popup_query_code_window_t3_ParamLimits

0x7292,	// (0x0001414a) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0001c6f2) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0001c6f2) popup_query_code_window_t

0x72c1,	// (0x00014179) query_popup_pane_ParamLimits

0x72c1,	// (0x00014179) query_popup_pane

0x4551,	// (0x00011409) bg_popup_window_pane_cp15_ParamLimits

0x4551,	// (0x00011409) bg_popup_window_pane_cp15

0x456f,	// (0x00011427) indicator_popup_pane_cp1_ParamLimits

0x456f,	// (0x00011427) indicator_popup_pane_cp1

0x4582,	// (0x0001143a) indicator_popup_pane_cp2_ParamLimits

0x4582,	// (0x0001143a) indicator_popup_pane_cp2

0x4595,	// (0x0001144d) popup_query_data_code_window_g1_ParamLimits

0x4595,	// (0x0001144d) popup_query_data_code_window_g1

0x45a8,	// (0x00011460) popup_query_data_code_window_t1_ParamLimits

0x45a8,	// (0x00011460) popup_query_data_code_window_t1

0x45ba,	// (0x00011472) popup_query_data_code_window_t2_ParamLimits

0x45ba,	// (0x00011472) popup_query_data_code_window_t2

0x45cc,	// (0x00011484) popup_query_data_code_window_t3_ParamLimits

0x45cc,	// (0x00011484) popup_query_data_code_window_t3

0x45e2,	// (0x0001149a) popup_query_data_code_window_t4_ParamLimits

0x45e2,	// (0x0001149a) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0001c45a) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0001c45a) popup_query_data_code_window_t

0x2fd8,	// (0x0000fe90) list_single_midp_graphic_pane_g3

0x45fa,	// (0x000114b2) query_popup_data_pane_cp2_ParamLimits

0x460d,	// (0x000114c5) query_popup_pane_cp2_ParamLimits

0x460d,	// (0x000114c5) query_popup_pane_cp2

0x4126,	// (0x00010fde) bg_popup_window_pane_cp11

0x71d3,	// (0x0001408b) heading_pane_cp5

0x46f5,	// (0x000115ad) listscroll_popup_info_pane

0x4126,	// (0x00010fde) input_focus_pane_cp3

0x4620,	// (0x000114d8) query_popup_pane_t1

0x462e,	// (0x000114e6) list_popup_info_pane_ParamLimits

0x462e,	// (0x000114e6) list_popup_info_pane

0x463d,	// (0x000114f5) listscroll_popup_info_pane_g1

0x4645,	// (0x000114fd) scroll_pane_cp7

0x464f,	// (0x00011507) popup_info_list_pane_t1_ParamLimits

0x464f,	// (0x00011507) popup_info_list_pane_t1

0x4669,	// (0x00011521) popup_info_list_pane_t2_ParamLimits

0x4669,	// (0x00011521) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0001c463) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0001c463) popup_info_list_pane_t

0x4126,	// (0x00010fde) bg_popup_window_pane_cp12

0x8638,	// (0x000154f0) find_popup_pane

0x4206,	// (0x000110be) bg_popup_window_pane_cp3

0x4683,	// (0x0001153b) heading_pane_cp3

0x468f,	// (0x00011547) listscroll_popup_graphic_pane

0x4126,	// (0x00010fde) bg_popup_window_pane_cp4

0xe018,	// (0x0001aed0) heading_pane_cp4

0x46f5,	// (0x000115ad) listscroll_popup_colour_pane

0xe020,	// (0x0001aed8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xe020,	// (0x0001aed8) cell_large_graphic_colour_none_popup_pane

0xe034,	// (0x0001aeec) grid_large_graphic_colour_popup_pane_ParamLimits

0xe034,	// (0x0001aeec) grid_large_graphic_colour_popup_pane

0xe058,	// (0x0001af10) listscroll_popup_colour_pane_g1_ParamLimits

0xe058,	// (0x0001af10) listscroll_popup_colour_pane_g1

0xe06f,	// (0x0001af27) listscroll_popup_colour_pane_g2_ParamLimits

0xe06f,	// (0x0001af27) listscroll_popup_colour_pane_g2

0xe086,	// (0x0001af3e) listscroll_popup_colour_pane_g3_ParamLimits

0xe086,	// (0x0001af3e) listscroll_popup_colour_pane_g3

0xe096,	// (0x0001af4e) listscroll_popup_colour_pane_g4_ParamLimits

0xe096,	// (0x0001af4e) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0001c468) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0001c468) listscroll_popup_colour_pane_g

0x478f,	// (0x00011647) scroll_pane_cp6_ParamLimits

0x478f,	// (0x00011647) scroll_pane_cp6

0xe0a6,	// (0x0001af5e) cell_large_graphic_colour_popup_pane_ParamLimits

0xe0a6,	// (0x0001af5e) cell_large_graphic_colour_popup_pane

0x47c0,	// (0x00011678) cell_large_graphic_colour_none_popup_pane_t1

0x4126,	// (0x00010fde) grid_highlight_pane_cp5

0x47cf,	// (0x00011687) cell_large_graphic_colour_popup_pane_g1

0x47d7,	// (0x0001168f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0001c471) cell_large_graphic_colour_popup_pane_g

0x47df,	// (0x00011697) cell_large_graphic_colour_popup_pane_g2_copy1

0x47e8,	// (0x000116a0) grid_highlight_pane_cp4

0x47f0,	// (0x000116a8) bg_popup_window_pane_cp8_ParamLimits

0x47f0,	// (0x000116a8) bg_popup_window_pane_cp8

0x480b,	// (0x000116c3) popup_snote_single_text_window_g1_ParamLimits

0x480b,	// (0x000116c3) popup_snote_single_text_window_g1

0x481d,	// (0x000116d5) popup_snote_single_text_window_t1_ParamLimits

0x481d,	// (0x000116d5) popup_snote_single_text_window_t1

0x4830,	// (0x000116e8) popup_snote_single_text_window_t2_ParamLimits

0x4830,	// (0x000116e8) popup_snote_single_text_window_t2

0x4843,	// (0x000116fb) popup_snote_single_text_window_t3_ParamLimits

0x4843,	// (0x000116fb) popup_snote_single_text_window_t3

0x487c,	// (0x00011734) popup_snote_single_text_window_t4_ParamLimits

0x487c,	// (0x00011734) popup_snote_single_text_window_t4

0x48b0,	// (0x00011768) popup_snote_single_text_window_t5_ParamLimits

0x48b0,	// (0x00011768) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0001c476) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0001c476) popup_snote_single_text_window_t

0x48df,	// (0x00011797) bg_popup_window_pane_cp9_ParamLimits

0x48df,	// (0x00011797) bg_popup_window_pane_cp9

0x480b,	// (0x000116c3) popup_snote_single_graphic_window_g1_ParamLimits

0x480b,	// (0x000116c3) popup_snote_single_graphic_window_g1

0x48ed,	// (0x000117a5) popup_snote_single_graphic_window_g2_ParamLimits

0x48ed,	// (0x000117a5) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0001c481) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0001c481) popup_snote_single_graphic_window_g

0x48f9,	// (0x000117b1) popup_snote_single_graphic_window_t1_ParamLimits

0x48f9,	// (0x000117b1) popup_snote_single_graphic_window_t1

0x490c,	// (0x000117c4) popup_snote_single_graphic_window_t2_ParamLimits

0x490c,	// (0x000117c4) popup_snote_single_graphic_window_t2

0x491f,	// (0x000117d7) popup_snote_single_graphic_window_t3_ParamLimits

0x491f,	// (0x000117d7) popup_snote_single_graphic_window_t3

0x4958,	// (0x00011810) popup_snote_single_graphic_window_t4_ParamLimits

0x4958,	// (0x00011810) popup_snote_single_graphic_window_t4

0x498c,	// (0x00011844) popup_snote_single_graphic_window_t5_ParamLimits

0x498c,	// (0x00011844) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0001c486) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0001c486) popup_snote_single_graphic_window_t

0x857c,	// (0x00015434) grid_graphic_popup_pane_ParamLimits

0x857c,	// (0x00015434) grid_graphic_popup_pane

0x85a4,	// (0x0001545c) listscroll_popup_graphic_pane_g1_ParamLimits

0x85a4,	// (0x0001545c) listscroll_popup_graphic_pane_g1

0x045a,	// (0x0000d312) listscroll_popup_graphic_pane_g2_ParamLimits

0x045a,	// (0x0000d312) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0001c86f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0001c86f) listscroll_popup_graphic_pane_g

0x85cc,	// (0x00015484) scroll_pane_cp5

0x041e,	// (0x0000d2d6) cell_graphic_popup_pane_ParamLimits

0x041e,	// (0x0000d2d6) cell_graphic_popup_pane

0x8506,	// (0x000153be) cell_graphic_popup_pane_g1

0x850e,	// (0x000153c6) cell_graphic_popup_pane_g2

0x47df,	// (0x00011697) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0001c868) cell_graphic_popup_pane_g

0x8517,	// (0x000153cf) cell_graphic_popup_pane_t2

0x47e8,	// (0x000116a0) grid_highlight_pane_cp3

0x49cd,	// (0x00011885) list_gen_pane_ParamLimits

0x49cd,	// (0x00011885) list_gen_pane

0x49ff,	// (0x000118b7) scroll_pane

0x03d5,	// (0x0000d28d) bg_list_pane_g1_ParamLimits

0x03d5,	// (0x0000d28d) bg_list_pane_g1

0x847b,	// (0x00015333) bg_list_pane_g2_ParamLimits

0x847b,	// (0x00015333) bg_list_pane_g2

0x8490,	// (0x00015348) bg_list_pane_g3_ParamLimits

0x8490,	// (0x00015348) bg_list_pane_g3

0x84a4,	// (0x0001535c) bg_list_pane_g4_ParamLimits

0x84a4,	// (0x0001535c) bg_list_pane_g4

0x03f2,	// (0x0000d2aa) bg_list_pane_g5_ParamLimits

0x03f2,	// (0x0000d2aa) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0001c85d) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0001c85d) bg_list_pane_g

0x037b,	// (0x0000d233) list_double2_graphic_large_graphic_pane_ParamLimits

0x037b,	// (0x0000d233) list_double2_graphic_large_graphic_pane

0x037b,	// (0x0000d233) list_double2_graphic_pane_ParamLimits

0x037b,	// (0x0000d233) list_double2_graphic_pane

0x037b,	// (0x0000d233) list_double2_large_graphic_pane_ParamLimits

0x037b,	// (0x0000d233) list_double2_large_graphic_pane

0x037b,	// (0x0000d233) list_double2_pane_ParamLimits

0x037b,	// (0x0000d233) list_double2_pane

0x037b,	// (0x0000d233) list_double_graphic_heading_pane_ParamLimits

0x037b,	// (0x0000d233) list_double_graphic_heading_pane

0x037b,	// (0x0000d233) list_double_graphic_pane_ParamLimits

0x037b,	// (0x0000d233) list_double_graphic_pane

0x037b,	// (0x0000d233) list_double_heading_pane_ParamLimits

0x037b,	// (0x0000d233) list_double_heading_pane

0x037b,	// (0x0000d233) list_double_large_graphic_pane_ParamLimits

0x037b,	// (0x0000d233) list_double_large_graphic_pane

0x037b,	// (0x0000d233) list_double_number_pane_ParamLimits

0x037b,	// (0x0000d233) list_double_number_pane

0x037b,	// (0x0000d233) list_double_pane_ParamLimits

0x037b,	// (0x0000d233) list_double_pane

0x037b,	// (0x0000d233) list_double_time_pane_ParamLimits

0x037b,	// (0x0000d233) list_double_time_pane

0x037b,	// (0x0000d233) list_setting_number_pane_ParamLimits

0x037b,	// (0x0000d233) list_setting_number_pane

0x037b,	// (0x0000d233) list_setting_pane_ParamLimits

0x037b,	// (0x0000d233) list_setting_pane

0x038d,	// (0x0000d245) list_single_2graphic_pane_ParamLimits

0x038d,	// (0x0000d245) list_single_2graphic_pane

0x038d,	// (0x0000d245) list_single_graphic_heading_pane_ParamLimits

0x038d,	// (0x0000d245) list_single_graphic_heading_pane

0x038d,	// (0x0000d245) list_single_graphic_pane_ParamLimits

0x038d,	// (0x0000d245) list_single_graphic_pane

0x038d,	// (0x0000d245) list_single_heading_pane_ParamLimits

0x038d,	// (0x0000d245) list_single_heading_pane

0x037b,	// (0x0000d233) list_single_large_graphic_pane_ParamLimits

0x037b,	// (0x0000d233) list_single_large_graphic_pane

0x038d,	// (0x0000d245) list_single_number_heading_pane_ParamLimits

0x038d,	// (0x0000d245) list_single_number_heading_pane

0x038d,	// (0x0000d245) list_single_number_pane_ParamLimits

0x038d,	// (0x0000d245) list_single_number_pane

0x038d,	// (0x0000d245) list_single_pane_ParamLimits

0x038d,	// (0x0000d245) list_single_pane

0x4126,	// (0x00010fde) list_highlight_pane_cp1

0x6c25,	// (0x00013add) list_single_pane_g1_ParamLimits

0x6c25,	// (0x00013add) list_single_pane_g1

0x6c31,	// (0x00013ae9) list_single_pane_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_single_pane_g2

0x0001,

0xf5e0,	// (0x0001c498) list_single_pane_g_ParamLimits

0xf5e0,	// (0x0001c498) list_single_pane_g

0x8bf2,	// (0x00015aaa) list_single_pane_t1_ParamLimits

0x8bf2,	// (0x00015aaa) list_single_pane_t1

0x6c25,	// (0x00013add) list_single_number_pane_g1_ParamLimits

0x6c25,	// (0x00013add) list_single_number_pane_g1

0x6c31,	// (0x00013ae9) list_single_number_pane_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x0001c498) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x0001c498) list_single_number_pane_g

0x6c3d,	// (0x00013af5) list_single_number_pane_t1_ParamLimits

0x6c3d,	// (0x00013af5) list_single_number_pane_t1

0x01cc,	// (0x0000d084) list_single_number_pane_t2_ParamLimits

0x01cc,	// (0x0000d084) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0001c81e) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0001c81e) list_single_number_pane_t

0xa03f,	// (0x00016ef7) list_single_graphic_pane_g1_ParamLimits

0xa03f,	// (0x00016ef7) list_single_graphic_pane_g1

0x6c25,	// (0x00013add) list_single_graphic_pane_g2_ParamLimits

0x6c25,	// (0x00013add) list_single_graphic_pane_g2

0x6c31,	// (0x00013ae9) list_single_graphic_pane_g3_ParamLimits

0x6c31,	// (0x00013ae9) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0001c491) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0001c491) list_single_graphic_pane_g

0xe0cf,	// (0x0001af87) list_single_graphic_pane_t1_ParamLimits

0xe0cf,	// (0x0001af87) list_single_graphic_pane_t1

0x6c25,	// (0x00013add) list_single_heading_pane_g1_ParamLimits

0x6c25,	// (0x00013add) list_single_heading_pane_g1

0x6c31,	// (0x00013ae9) list_single_heading_pane_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001c498) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001c498) list_single_heading_pane_g

0xe0e5,	// (0x0001af9d) list_single_heading_pane_t1_ParamLimits

0xe0e5,	// (0x0001af9d) list_single_heading_pane_t1

0xe0fb,	// (0x0001afb3) list_single_heading_pane_t2_ParamLimits

0xe0fb,	// (0x0001afb3) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0001c49d) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0001c49d) list_single_heading_pane_t

0x6c25,	// (0x00013add) list_single_number_heading_pane_g1_ParamLimits

0x6c25,	// (0x00013add) list_single_number_heading_pane_g1

0x6c31,	// (0x00013ae9) list_single_number_heading_pane_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x0001c498) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x0001c498) list_single_number_heading_pane_g

0xe0e5,	// (0x0001af9d) list_single_number_heading_pane_t1_ParamLimits

0xe0e5,	// (0x0001af9d) list_single_number_heading_pane_t1

0xe10d,	// (0x0001afc5) list_single_number_heading_pane_t2_ParamLimits

0xe10d,	// (0x0001afc5) list_single_number_heading_pane_t2

0x8bcc,	// (0x00015a84) list_single_number_heading_pane_t3_ParamLimits

0x8bcc,	// (0x00015a84) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x0001c4a2) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x0001c4a2) list_single_number_heading_pane_t

0x6c19,	// (0x00013ad1) list_single_graphic_heading_pane_g1_ParamLimits

0x6c19,	// (0x00013ad1) list_single_graphic_heading_pane_g1

0xe11f,	// (0x0001afd7) list_single_graphic_heading_pane_g4_ParamLimits

0xe11f,	// (0x0001afd7) list_single_graphic_heading_pane_g4

0x6c31,	// (0x00013ae9) list_single_graphic_heading_pane_g5_ParamLimits

0x6c31,	// (0x00013ae9) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x0001c4a9) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x0001c4a9) list_single_graphic_heading_pane_g

0xe0e5,	// (0x0001af9d) list_single_graphic_heading_pane_t1_ParamLimits

0xe0e5,	// (0x0001af9d) list_single_graphic_heading_pane_t1

0xe130,	// (0x0001afe8) list_single_graphic_heading_pane_t2_ParamLimits

0xe130,	// (0x0001afe8) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x0001c4b0) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x0001c4b0) list_single_graphic_heading_pane_t

0x8c08,	// (0x00015ac0) list_single_large_graphic_pane_g1_ParamLimits

0x8c08,	// (0x00015ac0) list_single_large_graphic_pane_g1

0x8c14,	// (0x00015acc) list_single_large_graphic_pane_g2_ParamLimits

0x8c14,	// (0x00015acc) list_single_large_graphic_pane_g2

0x8c20,	// (0x00015ad8) list_single_large_graphic_pane_g3_ParamLimits

0x8c20,	// (0x00015ad8) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x0001c4b5) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x0001c4b5) list_single_large_graphic_pane_g

0x737b,	// (0x00014233) wait_border_pane_g2_copy1

0xe142,	// (0x0001affa) list_single_large_graphic_pane_g4_cp2

0x8c2c,	// (0x00015ae4) list_single_large_graphic_pane_t1_ParamLimits

0x8c2c,	// (0x00015ae4) list_single_large_graphic_pane_t1

0x4c50,	// (0x00011b08) list_double_pane_g1_ParamLimits

0x4c50,	// (0x00011b08) list_double_pane_g1

0x4b7b,	// (0x00011a33) list_double_pane_g2_ParamLimits

0x4b7b,	// (0x00011a33) list_double_pane_g2

0x0001,

0xf604,	// (0x0001c4bc) list_double_pane_g_ParamLimits

0xf604,	// (0x0001c4bc) list_double_pane_g

0x4b87,	// (0x00011a3f) list_double_pane_t1_ParamLimits

0x4b87,	// (0x00011a3f) list_double_pane_t1

0xe14a,	// (0x0001b002) list_double_pane_t2_ParamLimits

0xe14a,	// (0x0001b002) list_double_pane_t2

0x0001,

0xf609,	// (0x0001c4c1) list_double_pane_t_ParamLimits

0xf609,	// (0x0001c4c1) list_double_pane_t

0xe15c,	// (0x0001b014) list_double2_pane_g1_ParamLimits

0xe15c,	// (0x0001b014) list_double2_pane_g1

0xe16d,	// (0x0001b025) list_double2_pane_g2_ParamLimits

0xe16d,	// (0x0001b025) list_double2_pane_g2

0x0001,

0xf60e,	// (0x0001c4c6) list_double2_pane_g_ParamLimits

0xf60e,	// (0x0001c4c6) list_double2_pane_g

0xe179,	// (0x0001b031) list_double2_pane_t1_ParamLimits

0xe179,	// (0x0001b031) list_double2_pane_t1

0xe18f,	// (0x0001b047) list_double2_pane_t2_ParamLimits

0xe18f,	// (0x0001b047) list_double2_pane_t2

0x0001,

0xf613,	// (0x0001c4cb) list_double2_pane_t_ParamLimits

0xf613,	// (0x0001c4cb) list_double2_pane_t

0x4c50,	// (0x00011b08) list_double_number_pane_g1_ParamLimits

0x4c50,	// (0x00011b08) list_double_number_pane_g1

0x4b7b,	// (0x00011a33) list_double_number_pane_g2_ParamLimits

0x4b7b,	// (0x00011a33) list_double_number_pane_g2

0x0001,

0xf604,	// (0x0001c4bc) list_double_number_pane_g_ParamLimits

0xf604,	// (0x0001c4bc) list_double_number_pane_g

0xe1a1,	// (0x0001b059) list_double_number_pane_t1_ParamLimits

0xe1a1,	// (0x0001b059) list_double_number_pane_t1

0x4c5c,	// (0x00011b14) list_double_number_pane_t2_ParamLimits

0x4c5c,	// (0x00011b14) list_double_number_pane_t2

0xe1b3,	// (0x0001b06b) list_double_number_pane_t3_ParamLimits

0xe1b3,	// (0x0001b06b) list_double_number_pane_t3

0x0002,

0xf618,	// (0x0001c4d0) list_double_number_pane_t_ParamLimits

0xf618,	// (0x0001c4d0) list_double_number_pane_t

0x4c44,	// (0x00011afc) list_double_graphic_pane_g1_ParamLimits

0x4c44,	// (0x00011afc) list_double_graphic_pane_g1

0xe1c5,	// (0x0001b07d) list_double_graphic_pane_g2_ParamLimits

0xe1c5,	// (0x0001b07d) list_double_graphic_pane_g2

0xe1d4,	// (0x0001b08c) list_double_graphic_pane_g3_ParamLimits

0xe1d4,	// (0x0001b08c) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x0001c4d7) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x0001c4d7) list_double_graphic_pane_g

0xe1ec,	// (0x0001b0a4) list_double_graphic_pane_t1_ParamLimits

0xe1ec,	// (0x0001b0a4) list_double_graphic_pane_t1

0xe202,	// (0x0001b0ba) list_double_graphic_pane_t2_ParamLimits

0xe202,	// (0x0001b0ba) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0001c4e0) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0001c4e0) list_double_graphic_pane_t

0xe214,	// (0x0001b0cc) list_double2_graphic_pane_g1_ParamLimits

0xe214,	// (0x0001b0cc) list_double2_graphic_pane_g1

0x5c83,	// (0x00012b3b) list_double2_graphic_pane_g2_ParamLimits

0x5c83,	// (0x00012b3b) list_double2_graphic_pane_g2

0xe16d,	// (0x0001b025) list_double2_graphic_pane_g3_ParamLimits

0xe16d,	// (0x0001b025) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x0001c4e5) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x0001c4e5) list_double2_graphic_pane_g

0xe220,	// (0x0001b0d8) list_double2_graphic_pane_t1_ParamLimits

0xe220,	// (0x0001b0d8) list_double2_graphic_pane_t1

0xe236,	// (0x0001b0ee) list_double2_graphic_pane_t2_ParamLimits

0xe236,	// (0x0001b0ee) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x0001c4ec) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x0001c4ec) list_double2_graphic_pane_t

0xe248,	// (0x0001b100) list_double_large_graphic_pane_g1_ParamLimits

0xe248,	// (0x0001b100) list_double_large_graphic_pane_g1

0xe273,	// (0x0001b12b) list_double_large_graphic_pane_g2_ParamLimits

0xe273,	// (0x0001b12b) list_double_large_graphic_pane_g2

0x4b7b,	// (0x00011a33) list_double_large_graphic_pane_g3_ParamLimits

0x4b7b,	// (0x00011a33) list_double_large_graphic_pane_g3

0xe284,	// (0x0001b13c) list_double_large_graphic_pane_g4_ParamLimits

0xe284,	// (0x0001b13c) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0001c4f1) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0001c4f1) list_double_large_graphic_pane_g

0xe296,	// (0x0001b14e) list_double_large_graphic_pane_t1_ParamLimits

0xe296,	// (0x0001b14e) list_double_large_graphic_pane_t1

0xe2af,	// (0x0001b167) list_double_large_graphic_pane_t2_ParamLimits

0xe2af,	// (0x0001b167) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x0001c4fc) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x0001c4fc) list_double_large_graphic_pane_t

0xe2c1,	// (0x0001b179) list_double2_large_graphic_pane_g1_ParamLimits

0xe2c1,	// (0x0001b179) list_double2_large_graphic_pane_g1

0xe15c,	// (0x0001b014) list_double2_large_graphic_pane_g2_ParamLimits

0xe15c,	// (0x0001b014) list_double2_large_graphic_pane_g2

0xe16d,	// (0x0001b025) list_double2_large_graphic_pane_g3_ParamLimits

0xe16d,	// (0x0001b025) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0001c501) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0001c501) list_double2_large_graphic_pane_g

0xe2cd,	// (0x0001b185) list_double2_large_graphic_pane_t1_ParamLimits

0xe2cd,	// (0x0001b185) list_double2_large_graphic_pane_t1

0xe2e3,	// (0x0001b19b) list_double2_large_graphic_pane_t2_ParamLimits

0xe2e3,	// (0x0001b19b) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x0001c508) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x0001c508) list_double2_large_graphic_pane_t

0xe2f5,	// (0x0001b1ad) list_double_heading_pane_g1_ParamLimits

0xe2f5,	// (0x0001b1ad) list_double_heading_pane_g1

0xe306,	// (0x0001b1be) list_double_heading_pane_g2_ParamLimits

0xe306,	// (0x0001b1be) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0001c50d) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0001c50d) list_double_heading_pane_g

0xe312,	// (0x0001b1ca) list_double_heading_pane_t1_ParamLimits

0xe312,	// (0x0001b1ca) list_double_heading_pane_t1

0xe328,	// (0x0001b1e0) list_double_heading_pane_t2_ParamLimits

0xe328,	// (0x0001b1e0) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0001c512) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0001c512) list_double_heading_pane_t

0x4be9,	// (0x00011aa1) list_double_graphic_heading_pane_g1_ParamLimits

0x4be9,	// (0x00011aa1) list_double_graphic_heading_pane_g1

0xe2f5,	// (0x0001b1ad) list_double_graphic_heading_pane_g2_ParamLimits

0xe2f5,	// (0x0001b1ad) list_double_graphic_heading_pane_g2

0xe306,	// (0x0001b1be) list_double_graphic_heading_pane_g3_ParamLimits

0xe306,	// (0x0001b1be) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x0001c517) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x0001c517) list_double_graphic_heading_pane_g

0xe33a,	// (0x0001b1f2) list_double_graphic_heading_pane_t1_ParamLimits

0xe33a,	// (0x0001b1f2) list_double_graphic_heading_pane_t1

0xe350,	// (0x0001b208) list_double_graphic_heading_pane_t2_ParamLimits

0xe350,	// (0x0001b208) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0001c51e) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0001c51e) list_double_graphic_heading_pane_t

0xe273,	// (0x0001b12b) list_double_time_pane_g1_ParamLimits

0xe273,	// (0x0001b12b) list_double_time_pane_g1

0x4b7b,	// (0x00011a33) list_double_time_pane_g2_ParamLimits

0x4b7b,	// (0x00011a33) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x0001c523) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x0001c523) list_double_time_pane_g

0x4d1b,	// (0x00011bd3) list_double_time_pane_t1_ParamLimits

0x4d1b,	// (0x00011bd3) list_double_time_pane_t1

0xe362,	// (0x0001b21a) list_double_time_pane_t2_ParamLimits

0xe362,	// (0x0001b21a) list_double_time_pane_t2

0xe374,	// (0x0001b22c) list_double_time_pane_t3_ParamLimits

0xe374,	// (0x0001b22c) list_double_time_pane_t3

0xe386,	// (0x0001b23e) list_double_time_pane_t4_ParamLimits

0xe386,	// (0x0001b23e) list_double_time_pane_t4

0x0003,

0xf670,	// (0x0001c528) list_double_time_pane_t_ParamLimits

0xf670,	// (0x0001c528) list_double_time_pane_t

0x5c83,	// (0x00012b3b) list_setting_pane_g1_ParamLimits

0x5c83,	// (0x00012b3b) list_setting_pane_g1

0xe16d,	// (0x0001b025) list_setting_pane_g2_ParamLimits

0xe16d,	// (0x0001b025) list_setting_pane_g2

0x0001,

0xf679,	// (0x0001c531) list_setting_pane_g_ParamLimits

0xf679,	// (0x0001c531) list_setting_pane_g

0xe398,	// (0x0001b250) list_setting_pane_t1_ParamLimits

0xe398,	// (0x0001b250) list_setting_pane_t1

0xe3af,	// (0x0001b267) list_setting_pane_t2_ParamLimits

0xe3af,	// (0x0001b267) list_setting_pane_t2

0x0002,

0xf67e,	// (0x0001c536) list_setting_pane_t_ParamLimits

0xf67e,	// (0x0001c536) list_setting_pane_t

0xe3ee,	// (0x0001b2a6) set_value_pane_cp_ParamLimits

0xe3ee,	// (0x0001b2a6) set_value_pane_cp

0x5c83,	// (0x00012b3b) list_setting_number_pane_g1_ParamLimits

0x5c83,	// (0x00012b3b) list_setting_number_pane_g1

0xe16d,	// (0x0001b025) list_setting_number_pane_g2_ParamLimits

0xe16d,	// (0x0001b025) list_setting_number_pane_g2

0x0001,

0xf679,	// (0x0001c531) list_setting_number_pane_g_ParamLimits

0xf679,	// (0x0001c531) list_setting_number_pane_g

0xe3fa,	// (0x0001b2b2) list_setting_number_pane_t1_ParamLimits

0xe3fa,	// (0x0001b2b2) list_setting_number_pane_t1

0xe40e,	// (0x0001b2c6) list_setting_number_pane_t2_ParamLimits

0xe40e,	// (0x0001b2c6) list_setting_number_pane_t2

0xe425,	// (0x0001b2dd) list_setting_number_pane_t3_ParamLimits

0xe425,	// (0x0001b2dd) list_setting_number_pane_t3

0x0003,

0xf685,	// (0x0001c53d) list_setting_number_pane_t_ParamLimits

0xf685,	// (0x0001c53d) list_setting_number_pane_t

0xe3ee,	// (0x0001b2a6) set_value_pane_ParamLimits

0xe3ee,	// (0x0001b2a6) set_value_pane

0x4eb4,	// (0x00011d6c) bg_set_opt_pane_ParamLimits

0x4eb4,	// (0x00011d6c) bg_set_opt_pane

0x4ed5,	// (0x00011d8d) set_value_pane_t1

0x4ee3,	// (0x00011d9b) slider_set_pane_cp3

0x4eec,	// (0x00011da4) volume_small_pane_cp

0x4ef5,	// (0x00011dad) list_form_gen_pane

0x4efe,	// (0x00011db6) scroll_pane_cp8

0xe468,	// (0x0001b320) form_field_data_pane_ParamLimits

0xe468,	// (0x0001b320) form_field_data_pane

0xe47f,	// (0x0001b337) form_field_data_wide_pane_ParamLimits

0xe47f,	// (0x0001b337) form_field_data_wide_pane

0xe49f,	// (0x0001b357) form_field_popup_pane_ParamLimits

0xe49f,	// (0x0001b357) form_field_popup_pane

0xe4b7,	// (0x0001b36f) form_field_popup_wide_pane_ParamLimits

0xe4b7,	// (0x0001b36f) form_field_popup_wide_pane

0x4f99,	// (0x00011e51) form_field_slider_pane_ParamLimits

0x4f99,	// (0x00011e51) form_field_slider_pane

0x4fac,	// (0x00011e64) form_field_slider_wide_pane_ParamLimits

0x4fac,	// (0x00011e64) form_field_slider_wide_pane

0x4fbf,	// (0x00011e77) data_form_pane

0xe4d8,	// (0x0001b390) form_field_data_pane_t1

0x4fed,	// (0x00011ea5) input_focus_pane

0x4ffb,	// (0x00011eb3) data_form_wide_pane

0x5033,	// (0x00011eeb) form_field_data_wide_pane_t1

0x47fd,	// (0x000116b5) input_focus_pane_cp6

0xe4f2,	// (0x0001b3aa) form_field_popup_pane_t1

0x4fed,	// (0x00011ea5) input_focus_pane_cp7

0x506d,	// (0x00011f25) list_form_pane

0x5081,	// (0x00011f39) form_field_popup_wide_pane_t1

0x4fed,	// (0x00011ea5) input_focus_pane_cp8

0x5096,	// (0x00011f4e) list_form_wide_pane

0xe514,	// (0x0001b3cc) form_field_slider_pane_t1_ParamLimits

0xe514,	// (0x0001b3cc) form_field_slider_pane_t1

0xe52c,	// (0x0001b3e4) form_field_slider_pane_t2_ParamLimits

0xe52c,	// (0x0001b3e4) form_field_slider_pane_t2

0x0001,

0xf695,	// (0x0001c54d) form_field_slider_pane_t_ParamLimits

0xf695,	// (0x0001c54d) form_field_slider_pane_t

0x449b,	// (0x00011353) input_focus_pane_cp9_ParamLimits

0x449b,	// (0x00011353) input_focus_pane_cp9

0xe541,	// (0x0001b3f9) slider_cont_pane_ParamLimits

0xe541,	// (0x0001b3f9) slider_cont_pane

0x50e5,	// (0x00011f9d) form_field_slider_wide_pane_t1_ParamLimits

0x50e5,	// (0x00011f9d) form_field_slider_wide_pane_t1

0x50f7,	// (0x00011faf) form_field_slider_wide_pane_t2_ParamLimits

0x50f7,	// (0x00011faf) form_field_slider_wide_pane_t2

0x0001,

0xf69a,	// (0x0001c552) form_field_slider_wide_pane_t_ParamLimits

0xf69a,	// (0x0001c552) form_field_slider_wide_pane_t

0x449b,	// (0x00011353) input_focus_pane_cp10_ParamLimits

0x449b,	// (0x00011353) input_focus_pane_cp10

0xe555,	// (0x0001b40d) slider_cont_pane_cp1_ParamLimits

0xe555,	// (0x0001b40d) slider_cont_pane_cp1

0xe569,	// (0x0001b421) slider_form_pane_cp

0x5125,	// (0x00011fdd) input_focus_pane_g1

0x512d,	// (0x00011fe5) input_focus_pane_g2

0x5135,	// (0x00011fed) input_focus_pane_g3

0x513d,	// (0x00011ff5) input_focus_pane_g4

0x5145,	// (0x00011ffd) input_focus_pane_g5

0x514d,	// (0x00012005) input_focus_pane_g6

0x5155,	// (0x0001200d) input_focus_pane_g7

0x515d,	// (0x00012015) input_focus_pane_g8

0x5165,	// (0x0001201d) input_focus_pane_g9

0x411c,	// (0x00010fd4) input_focus_pane_g10

0x0009,

0xf69f,	// (0x0001c557) input_focus_pane_g

0x7384,	// (0x0001423c) wait_border_pane_g3_copy1

0xe571,	// (0x0001b429) data_form_pane_t1

0x411c,	// (0x00010fd4) wait_anim_pane_g1_copy1

0x035f,	// (0x0000d217) data_form_wide_pane_t1

0xe58b,	// (0x0001b443) list_form_graphic_pane_cp_ParamLimits

0xe58b,	// (0x0001b443) list_form_graphic_pane_cp

0x82e2,	// (0x0001519a) slider_form_pane_g1

0x82eb,	// (0x000151a3) slider_form_pane_g2

0x0006,

0xf996,	// (0x0001c84e) slider_form_pane_g

0xe58b,	// (0x0001b443) list_form_graphic_pane_ParamLimits

0xe58b,	// (0x0001b443) list_form_graphic_pane

0x51bd,	// (0x00012075) list_form_graphic_pane_g1

0x51c5,	// (0x0001207d) list_form_graphic_pane_t1_ParamLimits

0x51c5,	// (0x0001207d) list_form_graphic_pane_t1

0x4206,	// (0x000110be) list_highlight_pane_cp5_ParamLimits

0x4206,	// (0x000110be) list_highlight_pane_cp5

0xe59d,	// (0x0001b455) find_pane_g1

0x51e3,	// (0x0001209b) input_find_pane

0xe5a6,	// (0x0001b45e) input_find_pane_g1_ParamLimits

0xe5a6,	// (0x0001b45e) input_find_pane_g1

0xe5b2,	// (0x0001b46a) input_find_pane_t1_ParamLimits

0xe5b2,	// (0x0001b46a) input_find_pane_t1

0xe5c7,	// (0x0001b47f) input_find_pane_t2_ParamLimits

0xe5c7,	// (0x0001b47f) input_find_pane_t2

0x0001,

0xf6b4,	// (0x0001c56c) input_find_pane_t_ParamLimits

0xf6b4,	// (0x0001c56c) input_find_pane_t

0x5222,	// (0x000120da) input_focus_pane_cp5_ParamLimits

0x5222,	// (0x000120da) input_focus_pane_cp5

0xe5e8,	// (0x0001b4a0) bg_popup_window_pane_cp2_ParamLimits

0xe5e8,	// (0x0001b4a0) bg_popup_window_pane_cp2

0xe5f5,	// (0x0001b4ad) listscroll_menu_pane_ParamLimits

0xe5f5,	// (0x0001b4ad) listscroll_menu_pane

0xe601,	// (0x0001b4b9) popup_submenu_window_ParamLimits

0xe601,	// (0x0001b4b9) popup_submenu_window

0x5281,	// (0x00012139) find_popup_pane_g1

0x5289,	// (0x00012141) input_popup_find_pane_cp

0x5222,	// (0x000120da) input_focus_pane_cp4_ParamLimits

0x5222,	// (0x000120da) input_focus_pane_cp4

0x529f,	// (0x00012157) input_popup_find_pane_t1_ParamLimits

0x529f,	// (0x00012157) input_popup_find_pane_t1

0x4126,	// (0x00010fde) bg_popup_sub_pane_cp

0x52cd,	// (0x00012185) listscroll_popup_sub_pane

0x52d5,	// (0x0001218d) list_submenu_pane_ParamLimits

0x52d5,	// (0x0001218d) list_submenu_pane

0x52e6,	// (0x0001219e) scroll_pane_cp4

0x52ee,	// (0x000121a6) list_single_popup_submenu_pane_ParamLimits

0x52ee,	// (0x000121a6) list_single_popup_submenu_pane

0x5302,	// (0x000121ba) list_single_popup_submenu_pane_g1

0x530a,	// (0x000121c2) list_single_popup_submenu_pane_t1_ParamLimits

0x530a,	// (0x000121c2) list_single_popup_submenu_pane_t1

0x449b,	// (0x00011353) bg_active_tab_pane_cp1_ParamLimits

0x449b,	// (0x00011353) bg_active_tab_pane_cp1

0xe63b,	// (0x0001b4f3) tabs_2_active_pane_g1

0xe643,	// (0x0001b4fb) tabs_2_active_pane_t1

0x449b,	// (0x00011353) bg_passive_tab_pane_cp1_ParamLimits

0x449b,	// (0x00011353) bg_passive_tab_pane_cp1

0xe63b,	// (0x0001b4f3) tabs_2_passive_pane_g1

0xe643,	// (0x0001b4fb) tabs_2_passive_pane_t1

0x4206,	// (0x000110be) bg_active_tab_pane_cp4

0xe655,	// (0x0001b50d) tabs_2_long_active_pane_t1

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp4

0x2fe0,	// (0x0000fe98) list_single_midp_graphic_pane_g4_ParamLimits

0x4206,	// (0x000110be) bg_active_tab_pane_cp5

0xe668,	// (0x0001b520) tabs_3_long_active_pane_t1

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp5

0x2fe0,	// (0x0000fe98) list_single_midp_graphic_pane_g4

0x4206,	// (0x000110be) bg_popup_window_pane_cp13_ParamLimits

0x4206,	// (0x000110be) bg_popup_window_pane_cp13

0x5381,	// (0x00012239) listscroll_popup_fast_pane_ParamLimits

0x5381,	// (0x00012239) listscroll_popup_fast_pane

0x5390,	// (0x00012248) grid_popup_fast_pane_ParamLimits

0x5390,	// (0x00012248) grid_popup_fast_pane

0x53a2,	// (0x0001225a) scroll_pane_cp9_ParamLimits

0x53a2,	// (0x0001225a) scroll_pane_cp9

0xa0a5,	// (0x00016f5d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xa0a5,	// (0x00016f5d) list_single_graphic_hl_pane_t1_cp2

0x53c6,	// (0x0001227e) input_focus_pane_cp20_ParamLimits

0x53c6,	// (0x0001227e) input_focus_pane_cp20

0x53d4,	// (0x0001228c) query_popup_data_pane_t1_ParamLimits

0x53d4,	// (0x0001228c) query_popup_data_pane_t1

0x53e7,	// (0x0001229f) query_popup_data_pane_t2_ParamLimits

0x53e7,	// (0x0001229f) query_popup_data_pane_t2

0x542d,	// (0x000122e5) query_popup_data_pane_t3_ParamLimits

0x542d,	// (0x000122e5) query_popup_data_pane_t3

0x546e,	// (0x00012326) query_popup_data_pane_t4_ParamLimits

0x546e,	// (0x00012326) query_popup_data_pane_t4

0x54aa,	// (0x00012362) query_popup_data_pane_t5_ParamLimits

0x54aa,	// (0x00012362) query_popup_data_pane_t5

0x0004,

0xf6b9,	// (0x0001c571) query_popup_data_pane_t_ParamLimits

0xf6b9,	// (0x0001c571) query_popup_data_pane_t

0x5125,	// (0x00011fdd) bg_set_opt_pane_g1

0x512d,	// (0x00011fe5) bg_set_opt_pane_g2

0x5135,	// (0x00011fed) bg_set_opt_pane_g3

0x513d,	// (0x00011ff5) bg_set_opt_pane_g4

0x5145,	// (0x00011ffd) bg_set_opt_pane_g5

0x514d,	// (0x00012005) bg_set_opt_pane_g6

0x5155,	// (0x0001200d) bg_set_opt_pane_g7

0x515d,	// (0x00012015) bg_set_opt_pane_g8

0x5165,	// (0x0001201d) bg_set_opt_pane_g9

0x0008,

0xf6c4,	// (0x0001c57c) bg_set_opt_pane_g

0x2be7,	// (0x0000fa9f) control_top_pane_stacon_ParamLimits

0x2be7,	// (0x0000fa9f) control_top_pane_stacon

0x2c3a,	// (0x0000faf2) signal_pane_stacon_ParamLimits

0x2c3a,	// (0x0000faf2) signal_pane_stacon

0x5af8,	// (0x000129b0) stacon_top_pane_g1_ParamLimits

0x5af8,	// (0x000129b0) stacon_top_pane_g1

0x2c5f,	// (0x0000fb17) title_pane_stacon_ParamLimits

0x2c5f,	// (0x0000fb17) title_pane_stacon

0x2c89,	// (0x0000fb41) uni_indicator_pane_stacon_ParamLimits

0x2c89,	// (0x0000fb41) uni_indicator_pane_stacon

0x2c9e,	// (0x0000fb56) battery_pane_stacon_ParamLimits

0x2c9e,	// (0x0000fb56) battery_pane_stacon

0x2ce2,	// (0x0000fb9a) control_bottom_pane_stacon_ParamLimits

0x2ce2,	// (0x0000fb9a) control_bottom_pane_stacon

0x2d05,	// (0x0000fbbd) navi_pane_stacon_ParamLimits

0x2d05,	// (0x0000fbbd) navi_pane_stacon

0x5b1a,	// (0x000129d2) stacon_bottom_pane_g1_ParamLimits

0x5b1a,	// (0x000129d2) stacon_bottom_pane_g1

0x2948,	// (0x0000f800) aid_levels_signal_lsc_ParamLimits

0x2948,	// (0x0000f800) aid_levels_signal_lsc

0x295f,	// (0x0000f817) signal_pane_stacon_g1_ParamLimits

0x295f,	// (0x0000f817) signal_pane_stacon_g1

0x2973,	// (0x0000f82b) signal_pane_stacon_g2_ParamLimits

0x2973,	// (0x0000f82b) signal_pane_stacon_g2

0x0001,

0xf6d7,	// (0x0001c58f) signal_pane_stacon_g_ParamLimits

0xf6d7,	// (0x0001c58f) signal_pane_stacon_g

0x29a8,	// (0x0000f860) title_pane_stacon_t1_ParamLimits

0x29a8,	// (0x0000f860) title_pane_stacon_t1

0x54ee,	// (0x000123a6) uni_indicator_pane_stacon_g1

0x54f8,	// (0x000123b0) uni_indicator_pane_stacon_g2

0x5502,	// (0x000123ba) uni_indicator_pane_stacon_g3

0x550c,	// (0x000123c4) uni_indicator_pane_stacon_g4

0x0003,

0xf6e3,	// (0x0001c59b) uni_indicator_pane_stacon_g

0x29cd,	// (0x0000f885) control_top_pane_stacon_g1

0x29d5,	// (0x0000f88d) control_top_pane_stacon_t1_ParamLimits

0x29d5,	// (0x0000f88d) control_top_pane_stacon_t1

0x2a0c,	// (0x0000f8c4) aid_levels_battery_lsc_ParamLimits

0x2a0c,	// (0x0000f8c4) aid_levels_battery_lsc

0x2a24,	// (0x0000f8dc) battery_pane_stacon_g1_ParamLimits

0x2a24,	// (0x0000f8dc) battery_pane_stacon_g1

0x2a37,	// (0x0000f8ef) battery_pane_stacon_g2_ParamLimits

0x2a37,	// (0x0000f8ef) battery_pane_stacon_g2

0x0001,

0xf6ec,	// (0x0001c5a4) battery_pane_stacon_g_ParamLimits

0xf6ec,	// (0x0001c5a4) battery_pane_stacon_g

0x2a75,	// (0x0000f92d) navi_icon_pane_stacon

0x2a89,	// (0x0000f941) navi_navi_pane_stacon

0x2a75,	// (0x0000f92d) navi_text_pane_stacon

0x29cd,	// (0x0000f885) control_bottom_pane_stacon_g1

0x2a9d,	// (0x0000f955) control_bottom_pane_stacon_t1_ParamLimits

0x2a9d,	// (0x0000f955) control_bottom_pane_stacon_t1

0xe67a,	// (0x0001b532) grid_app_pane_ParamLimits

0xe67a,	// (0x0001b532) grid_app_pane

0xe6b2,	// (0x0001b56a) scroll_pane_cp15_ParamLimits

0xe6b2,	// (0x0001b56a) scroll_pane_cp15

0xe6cb,	// (0x0001b583) cell_app_pane_ParamLimits

0xe6cb,	// (0x0001b583) cell_app_pane

0xe710,	// (0x0001b5c8) cell_app_pane_g1_ParamLimits

0xe710,	// (0x0001b5c8) cell_app_pane_g1

0x55ad,	// (0x00012465) cell_app_pane_g2_ParamLimits

0x55ad,	// (0x00012465) cell_app_pane_g2

0x0001,

0xf6f1,	// (0x0001c5a9) cell_app_pane_g_ParamLimits

0xf6f1,	// (0x0001c5a9) cell_app_pane_g

0xe730,	// (0x0001b5e8) cell_app_pane_t1_ParamLimits

0xe730,	// (0x0001b5e8) cell_app_pane_t1

0x55d0,	// (0x00012488) grid_highlight_pane_ParamLimits

0x55d0,	// (0x00012488) grid_highlight_pane

0x5125,	// (0x00011fdd) cell_highlight_pane_g1

0x512d,	// (0x00011fe5) cell_highlight_pane_g2

0x5135,	// (0x00011fed) cell_highlight_pane_g3

0x513d,	// (0x00011ff5) cell_highlight_pane_g4

0x5145,	// (0x00011ffd) cell_highlight_pane_g5

0x514d,	// (0x00012005) cell_highlight_pane_g6

0x5155,	// (0x0001200d) cell_highlight_pane_g7

0x515d,	// (0x00012015) cell_highlight_pane_g8

0x5165,	// (0x0001201d) cell_highlight_pane_g9

0x411c,	// (0x00010fd4) cell_highlight_pane_g10

0x0009,

0xf69f,	// (0x0001c557) cell_highlight_pane_g

0x55e1,	// (0x00012499) bg_scroll_pane

0x2ae7,	// (0x0000f99f) scroll_handle_pane

0x5628,	// (0x000124e0) scroll_bg_pane_g1

0x563d,	// (0x000124f5) scroll_bg_pane_g2

0x5655,	// (0x0001250d) scroll_bg_pane_g3

0x0002,

0xf6f6,	// (0x0001c5ae) scroll_bg_pane_g

0x566a,	// (0x00012522) scroll_handle_focus_pane_ParamLimits

0x566a,	// (0x00012522) scroll_handle_focus_pane

0x5628,	// (0x000124e0) scroll_handle_pane_g1

0x5677,	// (0x0001252f) scroll_handle_pane_g2

0x5655,	// (0x0001250d) scroll_handle_pane_g3

0x0002,

0xf6fd,	// (0x0001c5b5) scroll_handle_pane_g

0x5222,	// (0x000120da) bg_popup_sub_pane_cp21_ParamLimits

0x5222,	// (0x000120da) bg_popup_sub_pane_cp21

0x568b,	// (0x00012543) popup_fep_japan_predictive_window_t1_ParamLimits

0x568b,	// (0x00012543) popup_fep_japan_predictive_window_t1

0x56a5,	// (0x0001255d) popup_fep_japan_predictive_window_t2_ParamLimits

0x56a5,	// (0x0001255d) popup_fep_japan_predictive_window_t2

0x56d8,	// (0x00012590) popup_fep_japan_predictive_window_t3_ParamLimits

0x56d8,	// (0x00012590) popup_fep_japan_predictive_window_t3

0x0002,

0xf704,	// (0x0001c5bc) popup_fep_japan_predictive_window_t_ParamLimits

0xf704,	// (0x0001c5bc) popup_fep_japan_predictive_window_t

0x4126,	// (0x00010fde) bg_popup_sub_pane_cp23

0x570f,	// (0x000125c7) listscroll_japin_cand_pane

0x5717,	// (0x000125cf) popup_fep_japan_candidate_window_t1

0x5725,	// (0x000125dd) candidate_pane_ParamLimits

0x5725,	// (0x000125dd) candidate_pane

0x5737,	// (0x000125ef) scroll_pane_cp30

0x573f,	// (0x000125f7) list_single_popup_jap_candidate_pane_ParamLimits

0x573f,	// (0x000125f7) list_single_popup_jap_candidate_pane

0x4126,	// (0x00010fde) list_highlight_pane_cp30

0x5754,	// (0x0001260c) list_single_popup_jap_candidate_pane_t1

0x5763,	// (0x0001261b) level_1_signal

0x5770,	// (0x00012628) level_2_signal

0x577d,	// (0x00012635) level_3_signal

0x578a,	// (0x00012642) level_4_signal

0x5797,	// (0x0001264f) level_5_signal

0x57a4,	// (0x0001265c) level_6_signal

0x57b1,	// (0x00012669) level_7_signal

0x5763,	// (0x0001261b) level_1_battery

0x5770,	// (0x00012628) level_2_battery

0x577d,	// (0x00012635) level_3_battery

0x578a,	// (0x00012642) level_4_battery

0x5797,	// (0x0001264f) level_5_battery

0x57a4,	// (0x0001265c) level_6_battery

0x57b1,	// (0x00012669) level_7_battery

0x57d6,	// (0x0001268e) list_menu_pane_ParamLimits

0x57d6,	// (0x0001268e) list_menu_pane

0x57ec,	// (0x000126a4) scroll_pane_cp25_ParamLimits

0x57ec,	// (0x000126a4) scroll_pane_cp25

0x5805,	// (0x000126bd) list_double2_graphic_pane_cp2_ParamLimits

0x5805,	// (0x000126bd) list_double2_graphic_pane_cp2

0x5805,	// (0x000126bd) list_double2_large_graphic_pane_cp2_ParamLimits

0x5805,	// (0x000126bd) list_double2_large_graphic_pane_cp2

0x5805,	// (0x000126bd) list_double2_pane_cp2_ParamLimits

0x5805,	// (0x000126bd) list_double2_pane_cp2

0x5805,	// (0x000126bd) list_double_graphic_pane_cp2_ParamLimits

0x5805,	// (0x000126bd) list_double_graphic_pane_cp2

0x5805,	// (0x000126bd) list_double_large_graphic_pane_cp2_ParamLimits

0x5805,	// (0x000126bd) list_double_large_graphic_pane_cp2

0x5805,	// (0x000126bd) list_double_number_pane_cp2_ParamLimits

0x5805,	// (0x000126bd) list_double_number_pane_cp2

0x5805,	// (0x000126bd) list_double_pane_cp2_ParamLimits

0x5805,	// (0x000126bd) list_double_pane_cp2

0xe756,	// (0x0001b60e) list_single_2graphic_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_2graphic_pane_cp2

0xe756,	// (0x0001b60e) list_single_graphic_heading_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_graphic_heading_pane_cp2

0xe756,	// (0x0001b60e) list_single_graphic_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_graphic_pane_cp2

0xe756,	// (0x0001b60e) list_single_heading_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_heading_pane_cp2

0x5842,	// (0x000126fa) list_single_large_graphic_pane_cp2_ParamLimits

0x5842,	// (0x000126fa) list_single_large_graphic_pane_cp2

0xe756,	// (0x0001b60e) list_single_number_heading_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_number_heading_pane_cp2

0xe756,	// (0x0001b60e) list_single_number_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_number_pane_cp2

0xe756,	// (0x0001b60e) list_single_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_pane_cp2

0x58b8,	// (0x00012770) bg_popup_sub_pane_cp22

0x2b99,	// (0x0000fa51) popup_side_volume_key_window_g1

0x2bc3,	// (0x0000fa7b) popup_side_volume_key_window_t1

0x2bdf,	// (0x0000fa97) volume_small_pane_cp1

0x449b,	// (0x00011353) bg_popup_sub_pane_cp24_ParamLimits

0x449b,	// (0x00011353) bg_popup_sub_pane_cp24

0x58ce,	// (0x00012786) fep_china_uni_candidate_pane_ParamLimits

0x58ce,	// (0x00012786) fep_china_uni_candidate_pane

0x58e2,	// (0x0001279a) fep_china_uni_entry_pane

0x58f2,	// (0x000127aa) popup_fep_china_uni_window_g1

0x590e,	// (0x000127c6) fep_china_uni_entry_pane_g1

0x5916,	// (0x000127ce) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001c5ed) fep_china_uni_entry_pane_g

0x591e,	// (0x000127d6) fep_entry_item_pane

0x5928,	// (0x000127e0) fep_candidate_item_pane

0x5930,	// (0x000127e8) fep_china_uni_candidate_pane_g1

0x5938,	// (0x000127f0) fep_china_uni_candidate_pane_g2

0x5940,	// (0x000127f8) fep_china_uni_candidate_pane_g3

0x5948,	// (0x00012800) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001c5f2) fep_china_uni_candidate_pane_g

0x411c,	// (0x00010fd4) fep_entry_item_pane_g1

0x5950,	// (0x00012808) fep_entry_item_pane_t1_ParamLimits

0x5950,	// (0x00012808) fep_entry_item_pane_t1

0x5966,	// (0x0001281e) fep_candidate_item_pane_t1_ParamLimits

0x5966,	// (0x0001281e) fep_candidate_item_pane_t1

0x597b,	// (0x00012833) fep_candidate_item_pane_t2_ParamLimits

0x597b,	// (0x00012833) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001c5fb) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001c5fb) fep_candidate_item_pane_t

0x4206,	// (0x000110be) list_highlight_pane_cp31_ParamLimits

0x4206,	// (0x000110be) list_highlight_pane_cp31

0x598d,	// (0x00012845) level_1_signal_lsc

0x5996,	// (0x0001284e) level_2_signal_lsc

0x599f,	// (0x00012857) level_3_signal_lsc

0x59a8,	// (0x00012860) level_4_signal_lsc

0x59b1,	// (0x00012869) level_5_signal_lsc

0x59ba,	// (0x00012872) level_6_signal_lsc

0x59c3,	// (0x0001287b) level_7_signal_lsc

0x59c3,	// (0x0001287b) level_1_battery_lsc

0x59cc,	// (0x00012884) level_2_battery_lsc

0x59d5,	// (0x0001288d) level_3_battery_lsc

0x59de,	// (0x00012896) level_4_battery_lsc

0x59e7,	// (0x0001289f) level_5_battery_lsc

0x59f0,	// (0x000128a8) level_6_battery_lsc

0x598d,	// (0x00012845) level_7_battery_lsc

0x59f9,	// (0x000128b1) scroll_handle_focus_pane_g1

0x5a02,	// (0x000128ba) scroll_handle_focus_pane_g2

0x5a0b,	// (0x000128c3) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001c600) scroll_handle_focus_pane_g

0xe7e2,	// (0x0001b69a) list_single_2graphic_pane_g1_ParamLimits

0xe7e2,	// (0x0001b69a) list_single_2graphic_pane_g1

0xe11f,	// (0x0001afd7) list_single_2graphic_pane_g2_ParamLimits

0xe11f,	// (0x0001afd7) list_single_2graphic_pane_g2

0x6c31,	// (0x00013ae9) list_single_2graphic_pane_g3_ParamLimits

0x6c31,	// (0x00013ae9) list_single_2graphic_pane_g3

0xe7ee,	// (0x0001b6a6) list_single_2graphic_pane_g4_ParamLimits

0xe7ee,	// (0x0001b6a6) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001c607) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001c607) list_single_2graphic_pane_g

0xe7fa,	// (0x0001b6b2) list_single_2graphic_pane_t1_ParamLimits

0xe7fa,	// (0x0001b6b2) list_single_2graphic_pane_t1

0xe828,	// (0x0001b6e0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xe828,	// (0x0001b6e0) list_double2_graphic_large_graphic_pane_g1

0xe15c,	// (0x0001b014) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe15c,	// (0x0001b014) list_double2_graphic_large_graphic_pane_g2

0xe16d,	// (0x0001b025) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe16d,	// (0x0001b025) list_double2_graphic_large_graphic_pane_g3

0xe83a,	// (0x0001b6f2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xe83a,	// (0x0001b6f2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001c610) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001c610) list_double2_graphic_large_graphic_pane_g

0xe846,	// (0x0001b6fe) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xe846,	// (0x0001b6fe) list_double2_graphic_large_graphic_pane_t1

0xe85c,	// (0x0001b714) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xe85c,	// (0x0001b714) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001c619) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001c619) list_double2_graphic_large_graphic_pane_t

0x5be2,	// (0x00012a9a) popup_fast_swap_window_ParamLimits

0x5be2,	// (0x00012a9a) popup_fast_swap_window

0x5bfe,	// (0x00012ab6) popup_side_volume_key_window

0x5c1a,	// (0x00012ad2) stacon_top_pane

0x5c24,	// (0x00012adc) status_pane_ParamLimits

0x5c24,	// (0x00012adc) status_pane

0x5c1a,	// (0x00012ad2) status_small_pane

0x4126,	// (0x00010fde) control_pane

0x4126,	// (0x00010fde) stacon_bottom_pane

0x4efe,	// (0x00011db6) scroll_pane_cp121

0x4ef5,	// (0x00011dad) set_content_pane

0x5abe,	// (0x00012976) bg_active_tab_pane_g1_cp1

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp1

0x5ac7,	// (0x0001297f) bg_active_tab_pane_g3_cp1

0x5abe,	// (0x00012976) bg_passive_tab_pane_g1_cp1

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp1

0x5ac7,	// (0x0001297f) bg_passive_tab_pane_g3_cp1

0xe86e,	// (0x0001b726) bg_active_tab_pane_g1_cp2

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp2

0xe877,	// (0x0001b72f) bg_active_tab_pane_g3_cp2

0xe86e,	// (0x0001b726) bg_passive_tab_pane_g1_cp2

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp2

0xe877,	// (0x0001b72f) bg_passive_tab_pane_g3_cp2

0xe880,	// (0x0001b738) bg_active_tab_pane_g1_cp3

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp3

0xe889,	// (0x0001b741) bg_active_tab_pane_g3_cp3

0xe880,	// (0x0001b738) bg_passive_tab_pane_g1_cp3

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp3

0xe889,	// (0x0001b741) bg_passive_tab_pane_g3_cp3

0xe892,	// (0x0001b74a) bg_active_tab_pane_g1_cp4

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp4

0xe89b,	// (0x0001b753) bg_active_tab_pane_g3_cp4

0xe892,	// (0x0001b74a) bg_passive_tab_pane_g1_cp4

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp4

0xe89b,	// (0x0001b753) bg_passive_tab_pane_g3_cp4

0x5b36,	// (0x000129ee) bg_active_tab_pane_g1_cp5

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp5

0x5b3f,	// (0x000129f7) bg_active_tab_pane_g3_cp5

0x5b36,	// (0x000129ee) bg_passive_tab_pane_g1_cp5

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp5

0x5b3f,	// (0x000129f7) bg_passive_tab_pane_g3_cp5

0xe8a4,	// (0x0001b75c) list_set_graphic_pane_ParamLimits

0xe8a4,	// (0x0001b75c) list_set_graphic_pane

0x4126,	// (0x00010fde) bg_set_opt_pane_cp4

0xe8b6,	// (0x0001b76e) list_set_graphic_pane_g1_ParamLimits

0xe8b6,	// (0x0001b76e) list_set_graphic_pane_g1

0xe8c2,	// (0x0001b77a) list_set_graphic_pane_g2_ParamLimits

0xe8c2,	// (0x0001b77a) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001c61e) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001c61e) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x0001c991) volume_small_pane_cp_g

0x5b95,	// (0x00012a4d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x5b95,	// (0x00012a4d) list_double2_large_graphic_pane_g1_cp2

0x5ba1,	// (0x00012a59) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x5ba1,	// (0x00012a59) list_double2_large_graphic_pane_g2_cp2

0x5bb2,	// (0x00012a6a) list_double2_large_graphic_pane_g3_cp2

0x5bba,	// (0x00012a72) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x5bba,	// (0x00012a72) list_double2_large_graphic_pane_t1_cp2

0x5bd0,	// (0x00012a88) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x5bd0,	// (0x00012a88) list_double2_large_graphic_pane_t2_cp2

0x7e57,	// (0x00014d0f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x7e57,	// (0x00014d0f) list_double_large_graphic_pane_g1_cp2

0x7e68,	// (0x00014d20) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x7e68,	// (0x00014d20) list_double_large_graphic_pane_g2_cp2

0x5d40,	// (0x00012bf8) list_double_large_graphic_pane_g3_cp2

0x7e79,	// (0x00014d31) list_double_large_graphic_pane_g4_cp

0x7e81,	// (0x00014d39) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x7e81,	// (0x00014d39) list_double_large_graphic_pane_t1_cp2

0x7e98,	// (0x00014d50) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x7e98,	// (0x00014d50) list_double_large_graphic_pane_t2_cp2

0x5c32,	// (0x00012aea) list_double2_graphic_pane_g1_cp2_ParamLimits

0x5c32,	// (0x00012aea) list_double2_graphic_pane_g1_cp2

0x5c40,	// (0x00012af8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x5c40,	// (0x00012af8) list_double2_graphic_pane_g2_cp2

0x5c51,	// (0x00012b09) list_double2_graphic_pane_g3_cp2

0x5c5b,	// (0x00012b13) list_double2_graphic_pane_t1_cp2_ParamLimits

0x5c5b,	// (0x00012b13) list_double2_graphic_pane_t1_cp2

0x5c71,	// (0x00012b29) list_double2_graphic_pane_t2_cp2_ParamLimits

0x5c71,	// (0x00012b29) list_double2_graphic_pane_t2_cp2

0x5c83,	// (0x00012b3b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x5c83,	// (0x00012b3b) list_single_number_heading_pane_g1_cp2

0x5c8f,	// (0x00012b47) list_single_number_heading_pane_g2_cp2

0x5c97,	// (0x00012b4f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x5c97,	// (0x00012b4f) list_single_number_heading_pane_t1_cp2

0x5cad,	// (0x00012b65) list_single_number_heading_pane_t2_cp2_ParamLimits

0x5cad,	// (0x00012b65) list_single_number_heading_pane_t2_cp2

0x5cbf,	// (0x00012b77) list_single_number_heading_pane_t3_cp2_ParamLimits

0x5cbf,	// (0x00012b77) list_single_number_heading_pane_t3_cp2

0x5c83,	// (0x00012b3b) list_single_heading_pane_g1_cp2_ParamLimits

0x5c83,	// (0x00012b3b) list_single_heading_pane_g1_cp2

0x5c8f,	// (0x00012b47) list_single_heading_pane_g2_cp2

0x5c97,	// (0x00012b4f) list_single_heading_pane_t1_cp2_ParamLimits

0x5c97,	// (0x00012b4f) list_single_heading_pane_t1_cp2

0x7c5f,	// (0x00014b17) list_single_heading_pane_t2_cp2_ParamLimits

0x7c5f,	// (0x00014b17) list_single_heading_pane_t2_cp2

0x7ba7,	// (0x00014a5f) list_double_graphic_pane_g1_cp2_ParamLimits

0x7ba7,	// (0x00014a5f) list_double_graphic_pane_g1_cp2

0x7bb3,	// (0x00014a6b) list_double_graphic_pane_g2_cp2_ParamLimits

0x7bb3,	// (0x00014a6b) list_double_graphic_pane_g2_cp2

0x7bc2,	// (0x00014a7a) list_double_graphic_pane_g3_cp2

0x7bca,	// (0x00014a82) list_double_graphic_pane_t1_cp2_ParamLimits

0x7bca,	// (0x00014a82) list_double_graphic_pane_t1_cp2

0x7be0,	// (0x00014a98) list_double_graphic_pane_t2_cp2_ParamLimits

0x7be0,	// (0x00014a98) list_double_graphic_pane_t2_cp2

0x5d34,	// (0x00012bec) list_double_number_pane_g1_cp2_ParamLimits

0x5d34,	// (0x00012bec) list_double_number_pane_g1_cp2

0x5d40,	// (0x00012bf8) list_double_number_pane_g2_cp2

0x7b6b,	// (0x00014a23) list_double_number_pane_t1_cp2_ParamLimits

0x7b6b,	// (0x00014a23) list_double_number_pane_t1_cp2

0x7b7f,	// (0x00014a37) list_double_number_pane_t2_cp2_ParamLimits

0x7b7f,	// (0x00014a37) list_double_number_pane_t2_cp2

0x7b95,	// (0x00014a4d) list_double_number_pane_t3_cp2_ParamLimits

0x7b95,	// (0x00014a4d) list_double_number_pane_t3_cp2

0x7a54,	// (0x0001490c) list_single_graphic_pane_g1_cp2_ParamLimits

0x7a54,	// (0x0001490c) list_single_graphic_pane_g1_cp2

0x5d98,	// (0x00012c50) list_single_graphic_pane_g2_cp2_ParamLimits

0x5d98,	// (0x00012c50) list_single_graphic_pane_g2_cp2

0x5da4,	// (0x00012c5c) list_single_graphic_pane_g3_cp2

0x7a2a,	// (0x000148e2) list_single_graphic_pane_t1_cp2_ParamLimits

0x7a2a,	// (0x000148e2) list_single_graphic_pane_t1_cp2

0x5d98,	// (0x00012c50) list_single_number_pane_g1_cp2_ParamLimits

0x5d98,	// (0x00012c50) list_single_number_pane_g1_cp2

0x5da4,	// (0x00012c5c) list_single_number_pane_g2_cp2

0x7a2a,	// (0x000148e2) list_single_number_pane_t1_cp2_ParamLimits

0x7a2a,	// (0x000148e2) list_single_number_pane_t1_cp2

0x7a40,	// (0x000148f8) list_single_number_pane_t2_cp2_ParamLimits

0x7a40,	// (0x000148f8) list_single_number_pane_t2_cp2

0x5ba1,	// (0x00012a59) list_double2_pane_g1_cp2_ParamLimits

0x5ba1,	// (0x00012a59) list_double2_pane_g1_cp2

0x5bb2,	// (0x00012a6a) list_double2_pane_g2_cp2

0x5d0c,	// (0x00012bc4) list_double2_pane_t1_cp2_ParamLimits

0x5d0c,	// (0x00012bc4) list_double2_pane_t1_cp2

0x5d22,	// (0x00012bda) list_double2_pane_t2_cp2_ParamLimits

0x5d22,	// (0x00012bda) list_double2_pane_t2_cp2

0x5d34,	// (0x00012bec) list_double_pane_g1_cp2_ParamLimits

0x5d34,	// (0x00012bec) list_double_pane_g1_cp2

0x5d40,	// (0x00012bf8) list_double_pane_g2_cp2

0x5d48,	// (0x00012c00) list_double_pane_t1_cp2_ParamLimits

0x5d48,	// (0x00012c00) list_double_pane_t1_cp2

0x5d5e,	// (0x00012c16) list_double_pane_t2_cp2_ParamLimits

0x5d5e,	// (0x00012c16) list_double_pane_t2_cp2

0x5d88,	// (0x00012c40) list_single_pane_cp2_g3

0x5d98,	// (0x00012c50) list_single_pane_g1_cp2_ParamLimits

0x5d98,	// (0x00012c50) list_single_pane_g1_cp2

0x5da4,	// (0x00012c5c) list_single_pane_g2_cp2

0x5dac,	// (0x00012c64) list_single_pane_t1_cp2_ParamLimits

0x5dac,	// (0x00012c64) list_single_pane_t1_cp2

0x5dc4,	// (0x00012c7c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x5dc4,	// (0x00012c7c) list_single_large_graphic_pane_g1_cp2

0x5dd0,	// (0x00012c88) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x5dd0,	// (0x00012c88) list_single_large_graphic_pane_g2_cp2

0x5ddc,	// (0x00012c94) list_single_large_graphic_pane_g3_cp2

0x5de4,	// (0x00012c9c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x5de4,	// (0x00012c9c) list_single_large_graphic_pane_g4_cp1

0x5dfe,	// (0x00012cb6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x5dfe,	// (0x00012cb6) list_single_large_graphic_pane_t1_cp2

0x79f6,	// (0x000148ae) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x79f6,	// (0x000148ae) list_single_graphic_heading_pane_g1_cp2

0x79c3,	// (0x0001487b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x79c3,	// (0x0001487b) list_single_graphic_heading_pane_g4_cp2

0x5da4,	// (0x00012c5c) list_single_graphic_heading_pane_g5_cp2

0x7a02,	// (0x000148ba) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x7a02,	// (0x000148ba) list_single_graphic_heading_pane_t1_cp2

0x7a18,	// (0x000148d0) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x7a18,	// (0x000148d0) list_single_graphic_heading_pane_t2_cp2

0x79b7,	// (0x0001486f) list_single_2graphic_pane_g1_cp2_ParamLimits

0x79b7,	// (0x0001486f) list_single_2graphic_pane_g1_cp2

0x79c3,	// (0x0001487b) list_single_2graphic_pane_g2_cp2_ParamLimits

0x79c3,	// (0x0001487b) list_single_2graphic_pane_g2_cp2

0x5da4,	// (0x00012c5c) list_single_2graphic_pane_g3_cp2

0x79d4,	// (0x0001488c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x79d4,	// (0x0001488c) list_single_2graphic_pane_g4_cp2

0x79e0,	// (0x00014898) list_single_2graphic_pane_t1_cp2_ParamLimits

0x79e0,	// (0x00014898) list_single_2graphic_pane_t1_cp2

0x411c,	// (0x00010fd4) list_highlight_pane_g10_cp1

0x758f,	// (0x00014447) list_highlight_pane_g1_cp1

0x7597,	// (0x0001444f) list_highlight_pane_g2_cp1

0x759f,	// (0x00014457) list_highlight_pane_g3_cp1

0x75a7,	// (0x0001445f) list_highlight_pane_g4_cp1

0x75af,	// (0x00014467) list_highlight_pane_g5_cp1

0x75b7,	// (0x0001446f) list_highlight_pane_g6_cp1

0x75bf,	// (0x00014477) list_highlight_pane_g7_cp1

0x75c7,	// (0x0001447f) list_highlight_pane_g8_cp1

0x75cf,	// (0x00014487) list_highlight_pane_g9_cp1

0xf52c,	// (0x0001c3e4) form_field_slider_pane_t3

0xf53a,	// (0x0001c3f2) form_field_slider_pane_t4

0x74cb,	// (0x00014383) slider_form_pane_ParamLimits

0x74cb,	// (0x00014383) slider_form_pane

0x4126,	// (0x00010fde) control_abbreviations

0x4126,	// (0x00010fde) control_conventions

0x4126,	// (0x00010fde) control_definitions

0x4126,	// (0x00010fde) format_table_attribute

0x7ca9,	// (0x00014b61) bg_popup_preview_window_pane_g9

0x4126,	// (0x00010fde) format_table_data2

0x4126,	// (0x00010fde) format_table_data3

0x4126,	// (0x00010fde) format_table_data_example

0x0008,

0x4126,	// (0x00010fde) intro_purpose

0xf8f6,	// (0x0001c7ae) bg_popup_preview_window_pane_g

0x4126,	// (0x00010fde) texts_category

0x4126,	// (0x00010fde) texts_graphics

0x5e14,	// (0x00012ccc) text_digital

0x5e23,	// (0x00012cdb) text_primary

0x5e32,	// (0x00012cea) text_primary_small

0x5e41,	// (0x00012cf9) text_secondary

0x5e50,	// (0x00012d08) text_title

0x84da,	// (0x00015392) bg_passive_tab_pane_g1_cp3_srt

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp3_srt

0x84e3,	// (0x0001539b) bg_passive_tab_pane_g3_cp3_srt

0x449b,	// (0x00011353) bg_active_tab_pane_cp3_srt_ParamLimits

0x449b,	// (0x00011353) bg_active_tab_pane_cp3_srt

0x84ec,	// (0x000153a4) tabs_4_active_pane_srt_g1

0x0408,	// (0x0000d2c0) tabs_4_active_pane_srt_t1_ParamLimits

0x0408,	// (0x0000d2c0) tabs_4_active_pane_srt_t1

0x84da,	// (0x00015392) bg_active_tab_pane_g1_cp3_copy1

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp3_copy1

0x84e3,	// (0x0001539b) bg_active_tab_pane_g3_cp3_copy1

0x4206,	// (0x000110be) tabs_2_long_active_pane_srt_ParamLimits

0x4206,	// (0x000110be) tabs_2_long_active_pane_srt

0x4206,	// (0x000110be) tabs_2_long_passive_pane_srt_ParamLimits

0x4206,	// (0x000110be) tabs_2_long_passive_pane_srt

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp4_srt_ParamLimits

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp4_srt

0x8115,	// (0x00014fcd) bg_passive_tab_pane_g1_cp4_srt

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp4_srt

0x811e,	// (0x00014fd6) bg_passive_tab_pane_g3_cp4_srt

0x4206,	// (0x000110be) bg_active_tab_pane_cp4_srt_ParamLimits

0x4206,	// (0x000110be) bg_active_tab_pane_cp4_srt

0x01f4,	// (0x0000d0ac) tabs_2_long_active_pane_srt_t1_ParamLimits

0x01f4,	// (0x0000d0ac) tabs_2_long_active_pane_srt_t1

0x8115,	// (0x00014fcd) bg_active_tab_pane_g1_cp4_srt

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp4_srt

0x811e,	// (0x00014fd6) bg_active_tab_pane_g3_cp4_srt

0x449b,	// (0x00011353) tabs_3_long_active_pane_srt_ParamLimits

0x449b,	// (0x00011353) tabs_3_long_active_pane_srt

0x449b,	// (0x00011353) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x449b,	// (0x00011353) tabs_3_long_passive_pane_cp_srt

0x449b,	// (0x00011353) tabs_3_long_passive_pane_srt_ParamLimits

0x449b,	// (0x00011353) tabs_3_long_passive_pane_srt

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp5_srt_ParamLimits

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp5_srt

0x5b36,	// (0x000129ee) bg_passive_tab_pane_g1_cp5_srt

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp5_srt

0x5b3f,	// (0x000129f7) bg_passive_tab_pane_g3_cp5_srt

0x4206,	// (0x000110be) bg_active_tab_pane_cp5_srt_ParamLimits

0x4206,	// (0x000110be) bg_active_tab_pane_cp5_srt

0x01de,	// (0x0000d096) tabs_3_long_active_pane_srt_t1_ParamLimits

0x01de,	// (0x0000d096) tabs_3_long_active_pane_srt_t1

0x5b36,	// (0x000129ee) bg_active_tab_pane_g1_cp5_srt

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp5_srt

0x5b3f,	// (0x000129f7) bg_active_tab_pane_g3_cp5_srt

0x80f5,	// (0x00014fad) navi_text_pane_srt_t1

0x80ed,	// (0x00014fa5) navi_icon_pane_srt_g1

0x6017,	// (0x00012ecf) midp_editing_number_pane_srt

0x5e5f,	// (0x00012d17) midp_ticker_pane_srt

0x601f,	// (0x00012ed7) midp_ticker_pane_srt_g1

0x6027,	// (0x00012edf) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001c63d) midp_ticker_pane_srt_g

0x602f,	// (0x00012ee7) midp_ticker_pane_srt_t1

0x80de,	// (0x00014f96) midp_editing_number_pane_t1_copy1

0x61dd,	// (0x00013095) listscroll_midp_pane

0x61dd,	// (0x00013095) midp_form_pane

0x5ec9,	// (0x00012d81) midp_info_popup_window_ParamLimits

0x5ec9,	// (0x00012d81) midp_info_popup_window

0x5222,	// (0x000120da) bg_popup_sub_pane_cp50_ParamLimits

0x5222,	// (0x000120da) bg_popup_sub_pane_cp50

0x71c7,	// (0x0001407f) listscroll_midp_info_pane_ParamLimits

0x71c7,	// (0x0001407f) listscroll_midp_info_pane

0x71af,	// (0x00014067) listscroll_form_midp_pane_ParamLimits

0x71af,	// (0x00014067) listscroll_form_midp_pane

0x71bb,	// (0x00014073) scroll_bar_cp050

0xf520,	// (0x0001c3d8) list_midp_pane

0x910d,	// (0x00015fc5) signal_pane_g2_cp

0x70c9,	// (0x00013f81) listscroll_midp_info_pane_t1_ParamLimits

0x70c9,	// (0x00013f81) listscroll_midp_info_pane_t1

0x70e1,	// (0x00013f99) listscroll_midp_info_pane_t2_ParamLimits

0x70e1,	// (0x00013f99) listscroll_midp_info_pane_t2

0x711f,	// (0x00013fd7) listscroll_midp_info_pane_t3_ParamLimits

0x711f,	// (0x00013fd7) listscroll_midp_info_pane_t3

0x7159,	// (0x00014011) listscroll_midp_info_pane_t4_ParamLimits

0x7159,	// (0x00014011) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0001c6e9) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0001c6e9) listscroll_midp_info_pane_t

0x52e6,	// (0x0001219e) scroll_pane_cp21

0x7067,	// (0x00013f1f) form_midp_field_choice_group_pane

0x7070,	// (0x00013f28) form_midp_field_text_pane

0x70af,	// (0x00013f67) form_midp_field_time_pane

0x70b7,	// (0x00013f6f) form_midp_gauge_slider_pane

0x70c0,	// (0x00013f78) form_midp_gauge_wait_pane

0x4126,	// (0x00010fde) form_midp_image_pane

0xf50a,	// (0x0001c3c2) list_single_midp_pane_ParamLimits

0xf50a,	// (0x0001c3c2) list_single_midp_pane

0xf4e8,	// (0x0001c3a0) form_midp_field_text_pane_t1

0x6dd3,	// (0x00013c8b) input_focus_pane_cp050

0x7027,	// (0x00013edf) list_midp_form_text_pane

0x6fbf,	// (0x00013e77) form_midp_field_choice_group_pane_t1

0x6fcd,	// (0x00013e85) input_focus_pane_cp051

0x6fe1,	// (0x00013e99) list_midp_choice_pane

0x4126,	// (0x00010fde) status_idle_pane

0x6fa3,	// (0x00013e5b) form_midp_field_time_pane_t1

0x411c,	// (0x00010fd4) wait_anim_pane_g2_copy1

0x6fb1,	// (0x00013e69) form_midp_field_time_pane_t2

0x0001,

0x5f77,	// (0x00012e2f) aid_navinavi_width_2_pane

0xf82c,	// (0x0001c6e4) form_midp_field_time_pane_t

0x4126,	// (0x00010fde) input_focus_pane_cp052

0x4126,	// (0x00010fde) bg_input_focus_pane_cp040

0x6f63,	// (0x00013e1b) form_midp_gauge_slider_pane_t1

0x6f71,	// (0x00013e29) form_midp_gauge_slider_pane_t2

0xf4cc,	// (0x0001c384) form_midp_gauge_slider_pane_t3

0xf4da,	// (0x0001c392) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0001c6db) form_midp_gauge_slider_pane_t

0x6f9b,	// (0x00013e53) form_midp_slider_pane

0x4206,	// (0x000110be) bg_input_focus_pane_cp041_ParamLimits

0x4206,	// (0x000110be) bg_input_focus_pane_cp041

0x6f30,	// (0x00013de8) form_midp_gauge_wait_pane_t1_ParamLimits

0x6f30,	// (0x00013de8) form_midp_gauge_wait_pane_t1

0x6f42,	// (0x00013dfa) form_midp_gauge_wait_pane_t2_ParamLimits

0x6f42,	// (0x00013dfa) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0001c6d6) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0001c6d6) form_midp_gauge_wait_pane_t

0x6f54,	// (0x00013e0c) form_midp_wait_pane_ParamLimits

0x6f54,	// (0x00013e0c) form_midp_wait_pane

0x6efa,	// (0x00013db2) form_midp_image_pane_g1

0x6f03,	// (0x00013dbb) form_midp_image_pane_t1

0x6f12,	// (0x00013dca) form_midp_image_pane_t2

0x6f21,	// (0x00013dd9) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0001c6cf) form_midp_image_pane_t

0x6ee2,	// (0x00013d9a) list_single_midp_pane_g1

0x6eeb,	// (0x00013da3) list_single_midp_pane_t1

0xf4b7,	// (0x0001c36f) list_midp_form_item_pane_ParamLimits

0xf4b7,	// (0x0001c36f) list_midp_form_item_pane

0x5f1f,	// (0x00012dd7) list_midp_form_item_pane_t1

0x5f2e,	// (0x00012de6) midp_ticker_pane_g1

0x5f3a,	// (0x00012df2) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001c623) midp_ticker_pane_g

0x5f46,	// (0x00012dfe) midp_ticker_pane_t1

0x8362,	// (0x0001521a) midp_editing_number_pane_t1

0x8340,	// (0x000151f8) midp_editing_number_pane

0x834f,	// (0x00015207) midp_ticker_pane

0x80a6,	// (0x00014f5e) ai_message_heading_pane

0x4126,	// (0x00010fde) bg_popup_window_pane_cp14

0x80ae,	// (0x00014f66) listscroll_ai_message_pane

0x8030,	// (0x00014ee8) ai_message_heading_pane_g1_ParamLimits

0x8030,	// (0x00014ee8) ai_message_heading_pane_g1

0x803c,	// (0x00014ef4) ai_message_heading_pane_g2_ParamLimits

0x803c,	// (0x00014ef4) ai_message_heading_pane_g2

0x8048,	// (0x00014f00) ai_message_heading_pane_g3_ParamLimits

0x8048,	// (0x00014f00) ai_message_heading_pane_g3

0x8054,	// (0x00014f0c) ai_message_heading_pane_g4_ParamLimits

0x8054,	// (0x00014f0c) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0001c810) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0001c810) ai_message_heading_pane_g

0x8060,	// (0x00014f18) ai_message_heading_pane_t1_ParamLimits

0x8060,	// (0x00014f18) ai_message_heading_pane_t1

0x807a,	// (0x00014f32) ai_message_heading_pane_t2_ParamLimits

0x807a,	// (0x00014f32) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0001c819) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0001c819) ai_message_heading_pane_t

0x808c,	// (0x00014f44) bg_popup_heading_pane_cp1_ParamLimits

0x808c,	// (0x00014f44) bg_popup_heading_pane_cp1

0x801e,	// (0x00014ed6) list_ai_message_pane_ParamLimits

0x801e,	// (0x00014ed6) list_ai_message_pane

0x52e6,	// (0x0001219e) scroll_pane_cp10

0x7fba,	// (0x00014e72) list_ai_message_pane_g1

0x7fc2,	// (0x00014e7a) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0001c7ed) list_ai_message_pane_g

0x7fca,	// (0x00014e82) list_ai_message_pane_t1_ParamLimits

0x7fca,	// (0x00014e82) list_ai_message_pane_t1

0x7fdf,	// (0x00014e97) list_ai_message_pane_t2_ParamLimits

0x7fdf,	// (0x00014e97) list_ai_message_pane_t2

0x7ff4,	// (0x00014eac) list_ai_message_pane_t3_ParamLimits

0x7ff4,	// (0x00014eac) list_ai_message_pane_t3

0x8009,	// (0x00014ec1) list_ai_message_pane_t4_ParamLimits

0x8009,	// (0x00014ec1) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0001c7f2) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0001c7f2) list_ai_message_pane_t

0x01ab,	// (0x0000d063) cell_ai_soft_ind_pane_ParamLimits

0x01ab,	// (0x0000d063) cell_ai_soft_ind_pane

0x5f58,	// (0x00012e10) cell_ai_soft_ind_pane_g1_ParamLimits

0x5f58,	// (0x00012e10) cell_ai_soft_ind_pane_g1

0x4126,	// (0x00010fde) grid_highlight_cp1

0x5f65,	// (0x00012e1d) text_secondary_cp56_ParamLimits

0x5f65,	// (0x00012e1d) text_secondary_cp56

0x7f7a,	// (0x00014e32) example_general_pane_ParamLimits

0x7f7a,	// (0x00014e32) example_general_pane

0x7f86,	// (0x00014e3e) example_parent_pane_g1_ParamLimits

0x7f86,	// (0x00014e3e) example_parent_pane_g1

0x7f92,	// (0x00014e4a) example_parent_pane_t1_ParamLimits

0x7f92,	// (0x00014e4a) example_parent_pane_t1

0xed86,	// (0x0001bc3e) popup_preview_text_window_ParamLimits

0xed86,	// (0x0001bc3e) popup_preview_text_window

0x5d90,	// (0x00012c48) list_single_pane_cp2_g4

0x4551,	// (0x00011409) bg_popup_preview_window_pane_ParamLimits

0x4551,	// (0x00011409) bg_popup_preview_window_pane

0x7cb1,	// (0x00014b69) popup_preview_text_window_t1_ParamLimits

0x7cb1,	// (0x00014b69) popup_preview_text_window_t1

0x7ccf,	// (0x00014b87) popup_preview_text_window_t2_ParamLimits

0x7ccf,	// (0x00014b87) popup_preview_text_window_t2

0x7d18,	// (0x00014bd0) popup_preview_text_window_t3_ParamLimits

0x7d18,	// (0x00014bd0) popup_preview_text_window_t3

0x7d5d,	// (0x00014c15) popup_preview_text_window_t4_ParamLimits

0x7d5d,	// (0x00014c15) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0001c7c1) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0001c7c1) popup_preview_text_window_t

0x7ddb,	// (0x00014c93) scroll_pane_cp11

0x6caf,	// (0x00013b67) bg_popup_preview_window_pane_g1

0x7c71,	// (0x00014b29) bg_popup_preview_window_pane_g2

0x7c79,	// (0x00014b31) bg_popup_preview_window_pane_g3

0x7c81,	// (0x00014b39) bg_popup_preview_window_pane_g4

0x7c89,	// (0x00014b41) bg_popup_preview_window_pane_g5

0x7c91,	// (0x00014b49) bg_popup_preview_window_pane_g6

0x7c99,	// (0x00014b51) bg_popup_preview_window_pane_g7

0x7ca1,	// (0x00014b59) bg_popup_preview_window_pane_g8

0x24d4,	// (0x0000f38c) aid_popup_width_pane

0xed02,	// (0x0001bbba) popup_midp_note_alarm_window_ParamLimits

0xed02,	// (0x0001bbba) popup_midp_note_alarm_window

0x4fbf,	// (0x00011e77) data_form_pane_ParamLimits

0xe4ce,	// (0x0001b386) form_field_data_pane_g1

0xe4d8,	// (0x0001b390) form_field_data_pane_t1_ParamLimits

0x4fed,	// (0x00011ea5) input_focus_pane_ParamLimits

0x4ffb,	// (0x00011eb3) data_form_wide_pane_ParamLimits

0x5007,	// (0x00011ebf) form_field_data_wide_pane_g1

0x5033,	// (0x00011eeb) form_field_data_wide_pane_t1_ParamLimits

0x47fd,	// (0x000116b5) input_focus_pane_cp6_ParamLimits

0xe62d,	// (0x0001b4e5) input_popup_find_pane_g1_ParamLimits

0xe62d,	// (0x0001b4e5) input_popup_find_pane_g1

0x2a48,	// (0x0000f900) aid_navi_side_left_pane

0x2a5d,	// (0x0000f915) aid_navi_side_right_pane

0x768a,	// (0x00014542) bg_popup_window_pane_cp30_ParamLimits

0x768a,	// (0x00014542) bg_popup_window_pane_cp30

0x7704,	// (0x000145bc) popup_midp_note_alarm_window_g1_ParamLimits

0x7704,	// (0x000145bc) popup_midp_note_alarm_window_g1

0x7734,	// (0x000145ec) popup_midp_note_alarm_window_t1_ParamLimits

0x7734,	// (0x000145ec) popup_midp_note_alarm_window_t1

0x77d5,	// (0x0001468d) popup_midp_note_alarm_window_t2_ParamLimits

0x77d5,	// (0x0001468d) popup_midp_note_alarm_window_t2

0x7883,	// (0x0001473b) popup_midp_note_alarm_window_t3_ParamLimits

0x7883,	// (0x0001473b) popup_midp_note_alarm_window_t3

0x78b5,	// (0x0001476d) popup_midp_note_alarm_window_t4_ParamLimits

0x78b5,	// (0x0001476d) popup_midp_note_alarm_window_t4

0x78db,	// (0x00014793) popup_midp_note_alarm_window_t5_ParamLimits

0x78db,	// (0x00014793) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0001c75e) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0001c75e) popup_midp_note_alarm_window_t

0x7987,	// (0x0001483f) wait_bar_pane_cp1_ParamLimits

0x7987,	// (0x0001483f) wait_bar_pane_cp1

0x4126,	// (0x00010fde) wait_anim_pane_copy1

0x4126,	// (0x00010fde) wait_border_pane_copy1

0x7370,	// (0x00014228) wait_border_pane_g1_copy1

0x504d,	// (0x00011f05) form_field_popup_pane_g1

0xe4f2,	// (0x0001b3aa) form_field_popup_pane_t1_ParamLimits

0x4fed,	// (0x00011ea5) input_focus_pane_cp7_ParamLimits

0x506d,	// (0x00011f25) list_form_pane_ParamLimits

0x5079,	// (0x00011f31) form_field_popup_wide_pane_g1

0x5081,	// (0x00011f39) form_field_popup_wide_pane_t1_ParamLimits

0x4fed,	// (0x00011ea5) input_focus_pane_cp8_ParamLimits

0x5096,	// (0x00011f4e) list_form_wide_pane_ParamLimits

0x8566,	// (0x0001541e) aid_size_cell_graphic_pane

0xe571,	// (0x0001b429) data_form_pane_t1_ParamLimits

0x035f,	// (0x0000d217) data_form_wide_pane_t1_ParamLimits

0xf142,	// (0x0001bffa) bg_status_flat_pane

0xdd64,	// (0x0001ac1c) title_pane_t1_ParamLimits

0x41ce,	// (0x00011086) title_pane_t2_ParamLimits

0x41f4,	// (0x000110ac) title_pane_t3_ParamLimits

0xf56f,	// (0x0001c427) title_pane_t_ParamLimits

0x5763,	// (0x0001261b) level_1_signal_ParamLimits

0x5770,	// (0x00012628) level_2_signal_ParamLimits

0x577d,	// (0x00012635) level_3_signal_ParamLimits

0x578a,	// (0x00012642) level_4_signal_ParamLimits

0x5797,	// (0x0001264f) level_5_signal_ParamLimits

0x57a4,	// (0x0001265c) level_6_signal_ParamLimits

0x57b1,	// (0x00012669) level_7_signal_ParamLimits

0x5763,	// (0x0001261b) level_1_battery_ParamLimits

0x5770,	// (0x00012628) level_2_battery_ParamLimits

0x577d,	// (0x00012635) level_3_battery_ParamLimits

0x578a,	// (0x00012642) level_4_battery_ParamLimits

0x5797,	// (0x0001264f) level_5_battery_ParamLimits

0x57a4,	// (0x0001265c) level_6_battery_ParamLimits

0x57b1,	// (0x00012669) level_7_battery_ParamLimits

0x758f,	// (0x00014447) bg_status_flat_pane_g1

0x7597,	// (0x0001444f) bg_status_flat_pane_g2

0x759f,	// (0x00014457) bg_status_flat_pane_g3

0x75a7,	// (0x0001445f) bg_status_flat_pane_g4

0x75af,	// (0x00014467) bg_status_flat_pane_g5

0x75b7,	// (0x0001446f) bg_status_flat_pane_g6

0x75bf,	// (0x00014477) bg_status_flat_pane_g7

0xddf8,	// (0x0001acb0) tabs_3_active_pane_t1_ParamLimits

0xddf8,	// (0x0001acb0) tabs_3_passive_pane_t1_ParamLimits

0xde12,	// (0x0001acca) tabs_4_active_pane_t1_ParamLimits

0xde12,	// (0x0001acca) tabs_4_1_passive_pane_t1_ParamLimits

0xe643,	// (0x0001b4fb) tabs_2_active_pane_t1_ParamLimits

0xe643,	// (0x0001b4fb) tabs_2_passive_pane_t1_ParamLimits

0x4206,	// (0x000110be) bg_active_tab_pane_cp4_ParamLimits

0xe655,	// (0x0001b50d) tabs_2_long_active_pane_t1_ParamLimits

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp4_ParamLimits

0x3014,	// (0x0000fecc) list_single_midp_graphic_pane_t1_ParamLimits

0x4206,	// (0x000110be) bg_active_tab_pane_cp5_ParamLimits

0xe668,	// (0x0001b520) tabs_3_long_active_pane_t1_ParamLimits

0x61dd,	// (0x00013095) bg_passive_tab_pane_cp5_ParamLimits

0x3014,	// (0x0000fecc) list_single_midp_graphic_pane_t1

0xf142,	// (0x0001bffa) bg_status_flat_pane_ParamLimits

0x6916,	// (0x000137ce) indicator_pane_cp2_ParamLimits

0x6916,	// (0x000137ce) indicator_pane_cp2

0xf2ba,	// (0x0001c172) navi_pane_srt_ParamLimits

0xf2ba,	// (0x0001c172) navi_pane_srt

0x6a5f,	// (0x00013917) popup_clock_digital_analogue_window_cp1

0x42fd,	// (0x000111b5) indicator_pane_t1

0x5e5f,	// (0x00012d17) copy_highlight_pane

0x5e5f,	// (0x00012d17) cursor_graphics_pane

0x5e5f,	// (0x00012d17) graphic_within_text_pane

0x5e5f,	// (0x00012d17) link_highlight_pane

0x7d9e,	// (0x00014c56) popup_preview_text_window_t5_ParamLimits

0x7d9e,	// (0x00014c56) popup_preview_text_window_t5

0x5f7f,	// (0x00012e37) cursor_digital_pane

0x5f7f,	// (0x00012e37) cursor_primary_pane

0x5f90,	// (0x00012e48) cursor_primary_small_pane

0x5f98,	// (0x00012e50) cursor_secondary_pane

0x5fa0,	// (0x00012e58) cursor_title_pane

0x5f7f,	// (0x00012e37) link_highlight_digital_pane

0x5f87,	// (0x00012e3f) link_highlight_primary_pane

0x5f90,	// (0x00012e48) link_highlight_primary_small_pane

0x5f98,	// (0x00012e50) link_highlight_secondary_pane

0x5fa0,	// (0x00012e58) link_highlight_title_pane

0x5f7f,	// (0x00012e37) copy_highlight_digital_pane

0x5f7f,	// (0x00012e37) copy_highlight_primary_pane

0x5f90,	// (0x00012e48) copy_highlight_primary_small_pane

0x5f98,	// (0x00012e50) copy_highlight_secondary_pane

0x5fa0,	// (0x00012e58) copy_highlight_title_pane

0x5f98,	// (0x00012e50) graphic_text_digital_pane

0x762d,	// (0x000144e5) graphic_text_primary_pane

0x7636,	// (0x000144ee) graphic_text_primary_small_pane

0x5f90,	// (0x00012e48) graphic_text_secondary_pane

0x5f7f,	// (0x00012e37) graphic_text_title_pane

0xe97d,	// (0x0001b835) cursor_primary_pane_g1

0x761f,	// (0x000144d7) cursor_text_primary_t1

0xf55c,	// (0x0001c414) cursor_primary_small_pane_g1

0x7611,	// (0x000144c9) cursor_text_primary_small_t1

0xf552,	// (0x0001c40a) cursor_primary_small_pane_g1_copy1

0x75f9,	// (0x000144b1) cursor_text_primary_small_t1_copy1

0x75d7,	// (0x0001448f) cursor_text_title_t1

0xf548,	// (0x0001c400) cursor_title_pane_g1

0xe97d,	// (0x0001b835) cursor_digital_pane_g1

0x5fb2,	// (0x00012e6a) cursor_text_digital_t1

0x5fd7,	// (0x00012e8f) link_highlight_primary_pane_g1

0x7580,	// (0x00014438) link_highlight_primary_pane_t1

0x5fc0,	// (0x00012e78) link_highlight_primary_small_pane_g1

0x5fc8,	// (0x00012e80) link_highlight_primary_small_pane_t1

0x5fd7,	// (0x00012e8f) link_highlight_secondary_pane_g1

0x5fdf,	// (0x00012e97) link_highlight_secondary_pane_t1

0x74f4,	// (0x000143ac) link_highlight_title_pane_g1

0x74fc,	// (0x000143b4) link_highlight_title_pane_t1

0x74dd,	// (0x00014395) link_highlight_digital_pane_g1

0x74e5,	// (0x0001439d) link_highlight_digital_pane_t1

0x73b5,	// (0x0001426d) copy_highlight_primary_pane_g1

0x73bd,	// (0x00014275) copy_highlight_primary_pane_t1

0x738f,	// (0x00014247) copy_highlight_primary_small_pane_g1

0x73a6,	// (0x0001425e) copy_highlight_primary_small_pane_t1

0x5fee,	// (0x00012ea6) copy_highlight_secondary_pane_g1

0x5ff6,	// (0x00012eae) copy_highlight_secondary_pane_t1

0x738f,	// (0x00014247) copy_highlight_title_pane_g1

0x7397,	// (0x0001424f) copy_highlight_title_pane_t1

0x73b5,	// (0x0001426d) copy_highlight_digital_pane_g1

0x8730,	// (0x000155e8) copy_highlight_digital_pane_t1

0x8684,	// (0x0001553c) graphic_text_primary_pane_g1

0x8714,	// (0x000155cc) graphic_text_primary_pane_t1

0x8722,	// (0x000155da) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0001c88d) graphic_text_primary_pane_t

0x86f0,	// (0x000155a8) graphic_text_primary_small_pane_g1

0x86f8,	// (0x000155b0) graphic_text_primary_small_pane_t1

0x8706,	// (0x000155be) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0001c888) graphic_text_primary_small_pane_t

0x86cc,	// (0x00015584) graphic_text_secondary_pane_g1

0x86d4,	// (0x0001558c) graphic_text_secondary_pane_t1

0x86e2,	// (0x0001559a) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0001c883) graphic_text_secondary_pane_t

0x86a8,	// (0x00015560) graphic_text_title_pane_g1

0x86b0,	// (0x00015568) graphic_text_title_pane_t1

0x86be,	// (0x00015576) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0001c87e) graphic_text_title_pane_t

0x8684,	// (0x0001553c) graphic_text_digital_pane_g1

0x868c,	// (0x00015544) graphic_text_digital_pane_t1

0x869a,	// (0x00015552) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0001c879) graphic_text_digital_pane_t

0x4206,	// (0x000110be) navi_icon_pane_srt_ParamLimits

0x4206,	// (0x000110be) navi_icon_pane_srt

0x4126,	// (0x00010fde) navi_midp_pane_srt

0x4126,	// (0x00010fde) navi_navi_pane_srt

0x4206,	// (0x000110be) navi_text_pane_srt_ParamLimits

0x4206,	// (0x000110be) navi_text_pane_srt

0x864f,	// (0x00015507) navi_navi_icon_text_pane_srt

0x8657,	// (0x0001550f) navi_navi_pane_srt_g1_ParamLimits

0x8657,	// (0x0001550f) navi_navi_pane_srt_g1

0x8669,	// (0x00015521) navi_navi_pane_srt_g2_ParamLimits

0x8669,	// (0x00015521) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0001c874) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0001c874) navi_navi_pane_srt_g

0x867b,	// (0x00015533) navi_navi_tabs_pane_srt

0x864f,	// (0x00015507) navi_navi_text_pane_srt

0x864f,	// (0x00015507) navi_navi_volume_pane_srt

0x8640,	// (0x000154f8) navi_navi_text_pane_srt_t1

0x338e,	// (0x00010246) navi_navi_volume_pane_srt_g1

0x3396,	// (0x0001024e) volume_small_pane_srt_ParamLimits

0x3396,	// (0x0001024e) volume_small_pane_srt

0x2d28,	// (0x0000fbe0) volume_small_pane_srt_g1_ParamLimits

0x2d28,	// (0x0000fbe0) volume_small_pane_srt_g1

0x2d38,	// (0x0000fbf0) volume_small_pane_srt_g2_ParamLimits

0x2d38,	// (0x0000fbf0) volume_small_pane_srt_g2

0x2d49,	// (0x0000fc01) volume_small_pane_srt_g3_ParamLimits

0x2d49,	// (0x0000fc01) volume_small_pane_srt_g3

0x2d5a,	// (0x0000fc12) volume_small_pane_srt_g4_ParamLimits

0x2d5a,	// (0x0000fc12) volume_small_pane_srt_g4

0x2d6b,	// (0x0000fc23) volume_small_pane_srt_g5_ParamLimits

0x2d6b,	// (0x0000fc23) volume_small_pane_srt_g5

0x2d7c,	// (0x0000fc34) volume_small_pane_srt_g6_ParamLimits

0x2d7c,	// (0x0000fc34) volume_small_pane_srt_g6

0x2d8d,	// (0x0000fc45) volume_small_pane_srt_g7_ParamLimits

0x2d8d,	// (0x0000fc45) volume_small_pane_srt_g7

0x2d9e,	// (0x0000fc56) volume_small_pane_srt_g8_ParamLimits

0x2d9e,	// (0x0000fc56) volume_small_pane_srt_g8

0x2daf,	// (0x0000fc67) volume_small_pane_srt_g9_ParamLimits

0x2daf,	// (0x0000fc67) volume_small_pane_srt_g9

0x2dc0,	// (0x0000fc78) volume_small_pane_srt_g10_ParamLimits

0x2dc0,	// (0x0000fc78) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001c628) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001c628) volume_small_pane_srt_g

0x45fa,	// (0x000114b2) query_popup_data_pane_cp2

0x8626,	// (0x000154de) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x8626,	// (0x000154de) navi_navi_icon_text_pane_srt_t1

0x762d,	// (0x000144e5) navi_tabs_2_long_pane_srt

0x762d,	// (0x000144e5) navi_tabs_2_pane_srt

0x762d,	// (0x000144e5) navi_tabs_3_long_pane_srt

0x762d,	// (0x000144e5) navi_tabs_3_pane_srt

0x762d,	// (0x000144e5) navi_tabs_4_pane_srt

0x336e,	// (0x00010226) tabs_2_active_pane_srt_ParamLimits

0x336e,	// (0x00010226) tabs_2_active_pane_srt

0x337e,	// (0x00010236) tabs_2_passive_pane_srt_ParamLimits

0x337e,	// (0x00010236) tabs_2_passive_pane_srt

0x6dd3,	// (0x00013c8b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6dd3,	// (0x00013c8b) bg_passive_tab_pane_cp1_srt

0x85f2,	// (0x000154aa) bg_passive_tab_pane_g1_cp1_srt

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp1_srt

0x85fb,	// (0x000154b3) bg_passive_tab_pane_g3_cp1_srt

0x449b,	// (0x00011353) bg_active_tab_pane_cp1_srt_ParamLimits

0x449b,	// (0x00011353) bg_active_tab_pane_cp1_srt

0x8604,	// (0x000154bc) tabs_2_active_pane_srt_g1

0x0484,	// (0x0000d33c) tabs_2_active_pane_srt_t1_ParamLimits

0x0484,	// (0x0000d33c) tabs_2_active_pane_srt_t1

0x85f2,	// (0x000154aa) bg_active_tab_pane_g1_cp1_srt

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp1_srt

0x85fb,	// (0x000154b3) bg_active_tab_pane_g3_cp1_srt

0x333b,	// (0x000101f3) tabs_3_active_pane_srt_ParamLimits

0x333b,	// (0x000101f3) tabs_3_active_pane_srt

0x334c,	// (0x00010204) tabs_3_passive_pane_cp_srt_ParamLimits

0x334c,	// (0x00010204) tabs_3_passive_pane_cp_srt

0x335d,	// (0x00010215) tabs_3_passive_pane_srt_ParamLimits

0x335d,	// (0x00010215) tabs_3_passive_pane_srt

0x6dd3,	// (0x00013c8b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6dd3,	// (0x00013c8b) bg_passive_tab_pane_cp2_srt

0x6005,	// (0x00012ebd) bg_passive_tab_pane_g1_cp2_srt

0x5aac,	// (0x00012964) bg_passive_tab_pane_g2_cp2_srt

0x600e,	// (0x00012ec6) bg_passive_tab_pane_g3_cp2_srt

0x449b,	// (0x00011353) bg_active_tab_pane_cp2_srt_ParamLimits

0x449b,	// (0x00011353) bg_active_tab_pane_cp2_srt

0x85d8,	// (0x00015490) tabs_3_active_pane_srt_g1

0x046e,	// (0x0000d326) tabs_3_active_pane_srt_t1_ParamLimits

0x046e,	// (0x0000d326) tabs_3_active_pane_srt_t1

0x6005,	// (0x00012ebd) bg_active_tab_pane_g1_cp2_srt

0x5aac,	// (0x00012964) bg_active_tab_pane_g2_cp2_srt

0x600e,	// (0x00012ec6) bg_active_tab_pane_g3_cp2_srt

0x32f3,	// (0x000101ab) tabs_4_active_pane_srt_ParamLimits

0x32f3,	// (0x000101ab) tabs_4_active_pane_srt

0x3305,	// (0x000101bd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3305,	// (0x000101bd) tabs_4_passive_pane_cp2_srt

0x6163,	// (0x0001301b) aid_size_cell_toolbar

0x8186,	// (0x0001503e) main_idle_act_pane_ParamLimits

0x6386,	// (0x0001323e) popup_large_graphic_colour_window_ParamLimits

0xf006,	// (0x0001bebe) popup_toolbar_window_ParamLimits

0xf006,	// (0x0001bebe) popup_toolbar_window

0x838c,	// (0x00015244) list_single_graphic_2heading_pane_ParamLimits

0x838c,	// (0x00015244) list_single_graphic_2heading_pane

0x5516,	// (0x000123ce) aid_size_cell_apps_grid_lsc_pane

0x5528,	// (0x000123e0) aid_size_cell_apps_grid_prt_pane

0x61dd,	// (0x00013095) bg_wml_button_pane_cp1_ParamLimits

0x61dd,	// (0x00013095) bg_wml_button_pane_cp1

0xf4e8,	// (0x0001c3a0) form_midp_field_text_pane_t1_ParamLimits

0x6dd3,	// (0x00013c8b) input_focus_pane_cp050_ParamLimits

0x7027,	// (0x00013edf) list_midp_form_text_pane_ParamLimits

0x6fcd,	// (0x00013e85) input_focus_pane_cp051_ParamLimits

0x6fe1,	// (0x00013e99) list_midp_choice_pane_ParamLimits

0xf485,	// (0x0001c33d) list_single_2graphic_pane_cp3_ParamLimits

0xf485,	// (0x0001c33d) list_single_2graphic_pane_cp3

0xf498,	// (0x0001c350) list_single_midp_graphic_pane_ParamLimits

0xf498,	// (0x0001c350) list_single_midp_graphic_pane

0x2f17,	// (0x0000fdcf) list_single_graphic_2heading_pane_g1_ParamLimits

0x2f17,	// (0x0000fdcf) list_single_graphic_2heading_pane_g1

0x2f23,	// (0x0000fddb) list_single_graphic_2heading_pane_g4_ParamLimits

0x2f23,	// (0x0000fddb) list_single_graphic_2heading_pane_g4

0x2f2f,	// (0x0000fde7) list_single_graphic_2heading_pane_g5_ParamLimits

0x2f2f,	// (0x0000fde7) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001c67b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001c67b) list_single_graphic_2heading_pane_g

0x2f3b,	// (0x0000fdf3) list_single_graphic_2heading_pane_t1_ParamLimits

0x2f3b,	// (0x0000fdf3) list_single_graphic_2heading_pane_t1

0x2f4f,	// (0x0000fe07) list_single_graphic_2heading_pane_t2_ParamLimits

0x2f4f,	// (0x0000fe07) list_single_graphic_2heading_pane_t2

0x2f6b,	// (0x0000fe23) list_single_graphic_2heading_pane_t3_ParamLimits

0x2f6b,	// (0x0000fe23) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001c682) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001c682) list_single_graphic_2heading_pane_t

0x6bb3,	// (0x00013a6b) bg_popup_sub_pane_cp2

0x6bdd,	// (0x00013a95) grid_toobar_pane

0x2f83,	// (0x0000fe3b) cell_toolbar_pane_ParamLimits

0x2f83,	// (0x0000fe3b) cell_toolbar_pane

0x6c53,	// (0x00013b0b) cell_toolbar_pane_g1_ParamLimits

0x6c53,	// (0x00013b0b) cell_toolbar_pane_g1

0x6c67,	// (0x00013b1f) cell_toolbar_pane_g2_ParamLimits

0x6c67,	// (0x00013b1f) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001c690) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001c690) cell_toolbar_pane_g

0x6c89,	// (0x00013b41) grid_highlight_pane_cp2_ParamLimits

0x6c89,	// (0x00013b41) grid_highlight_pane_cp2

0x6ca3,	// (0x00013b5b) toolbar_button_pane

0x6caf,	// (0x00013b67) toolbar_button_pane_g1

0x6cb7,	// (0x00013b6f) toolbar_button_pane_g2

0x6cbf,	// (0x00013b77) toolbar_button_pane_g3

0x6cc7,	// (0x00013b7f) toolbar_button_pane_g4

0x6ccf,	// (0x00013b87) toolbar_button_pane_g5

0x6cd7,	// (0x00013b8f) toolbar_button_pane_g6

0x6cdf,	// (0x00013b97) toolbar_button_pane_g7

0x6ce7,	// (0x00013b9f) toolbar_button_pane_g8

0x6cef,	// (0x00013ba7) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001c695) toolbar_button_pane_g

0x2fbb,	// (0x0000fe73) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2fbb,	// (0x0000fe73) list_single_2graphic_pane_g1_cp3

0xcaff,	// (0x000199b7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcaff,	// (0x000199b7) list_single_2graphic_pane_g2_cp3

0x2fd8,	// (0x0000fe90) list_single_2graphic_pane_g3_cp3

0x2fe0,	// (0x0000fe98) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2fe0,	// (0x0000fe98) list_single_2graphic_pane_g4_cp3

0x2fec,	// (0x0000fea4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2fec,	// (0x0000fea4) list_single_2graphic_pane_t1_cp3

0x3008,	// (0x0000fec0) list_single_midp_graphic_pane_g2_ParamLimits

0x3008,	// (0x0000fec0) list_single_midp_graphic_pane_g2

0x616b,	// (0x00013023) aid_zoom_text_primary

0x6173,	// (0x0001302b) aid_zoom_text_secondary

0x60c2,	// (0x00012f7a) status_small_pane_g7_ParamLimits

0x60c2,	// (0x00012f7a) status_small_pane_g7

0x60e5,	// (0x00012f9d) status_small_pane_t1_ParamLimits

0xdd40,	// (0x0001abf8) title_pane_g2

0x0003,

0xf566,	// (0x0001c41e) title_pane_g

0xdfc8,	// (0x0001ae80) aid_size_cell_colour_1_pane_ParamLimits

0xdfc8,	// (0x0001ae80) aid_size_cell_colour_1_pane

0xdfdc,	// (0x0001ae94) aid_size_cell_colour_2_pane_ParamLimits

0xdfdc,	// (0x0001ae94) aid_size_cell_colour_2_pane

0xdff0,	// (0x0001aea8) aid_size_cell_colour_3_pane_ParamLimits

0xdff0,	// (0x0001aea8) aid_size_cell_colour_3_pane

0xe004,	// (0x0001aebc) aid_size_cell_colour_4_pane_ParamLimits

0xe004,	// (0x0001aebc) aid_size_cell_colour_4_pane

0x2984,	// (0x0000f83c) title_pane_stacon_g1_ParamLimits

0x2984,	// (0x0000f83c) title_pane_stacon_g1

0x7414,	// (0x000142cc) popup_note_wait_window_g3_ParamLimits

0x7414,	// (0x000142cc) popup_note_wait_window_g3

0x748a,	// (0x00014342) popup_note_wait_window_t5_ParamLimits

0x748a,	// (0x00014342) popup_note_wait_window_t5

0x4126,	// (0x00010fde) main_feb_china_hwr_fs_writing_pane

0xea38,	// (0x0001b8f0) popup_feb_china_hwr_fs_window_ParamLimits

0xea38,	// (0x0001b8f0) popup_feb_china_hwr_fs_window

0xcb10,	// (0x000199c8) aid_size_cell_hwr_fs_ParamLimits

0xcb10,	// (0x000199c8) aid_size_cell_hwr_fs

0x6dd3,	// (0x00013c8b) bg_popup_sub_pane_cp3_ParamLimits

0x6dd3,	// (0x00013c8b) bg_popup_sub_pane_cp3

0xcb25,	// (0x000199dd) grid_hwr_fs_pane_ParamLimits

0xcb25,	// (0x000199dd) grid_hwr_fs_pane

0x3057,	// (0x0000ff0f) linegrid_hwr_fs_pane_ParamLimits

0x3057,	// (0x0000ff0f) linegrid_hwr_fs_pane

0xcb3d,	// (0x000199f5) cell_hwr_fs_pane_ParamLimits

0xcb3d,	// (0x000199f5) cell_hwr_fs_pane

0x6ddf,	// (0x00013c97) linegrid_hwr_fs_pane_g1_ParamLimits

0x6ddf,	// (0x00013c97) linegrid_hwr_fs_pane_g1

0xf459,	// (0x0001c311) linegrid_hwr_fs_pane_g2_ParamLimits

0xf459,	// (0x0001c311) linegrid_hwr_fs_pane_g2

0x6dfd,	// (0x00013cb5) linegrid_hwr_fs_pane_g3_ParamLimits

0x6dfd,	// (0x00013cb5) linegrid_hwr_fs_pane_g3

0x3089,	// (0x0000ff41) linegrid_hwr_fs_pane_g4_ParamLimits

0x3089,	// (0x0000ff41) linegrid_hwr_fs_pane_g4

0x30a3,	// (0x0000ff5b) linegrid_hwr_fs_pane_g5_ParamLimits

0x30a3,	// (0x0000ff5b) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0001c6bb) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0001c6bb) linegrid_hwr_fs_pane_g

0x6e09,	// (0x00013cc1) cell_hwr_fs_pane_g1_ParamLimits

0x6e09,	// (0x00013cc1) cell_hwr_fs_pane_g1

0x6aed,	// (0x000139a5) cell_hwr_fs_pane_g2_ParamLimits

0x6aed,	// (0x000139a5) cell_hwr_fs_pane_g2

0xf46b,	// (0x0001c323) cell_hwr_fs_pane_g3_ParamLimits

0xf46b,	// (0x0001c323) cell_hwr_fs_pane_g3

0xf478,	// (0x0001c330) cell_hwr_fs_pane_g4_ParamLimits

0xf478,	// (0x0001c330) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0001c6c6) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0001c6c6) cell_hwr_fs_pane_g

0xcb63,	// (0x00019a1b) cell_hwr_fs_pane_t1

0x4126,	// (0x00010fde) grid_highlight_pane_cp6

0x4126,	// (0x00010fde) main_idle_act2_pane

0x52cd,	// (0x00012185) aid_inside_area_popup_secondary

0x00df,	// (0x0000cf97) aid_inside_area_window_primary_ParamLimits

0x00df,	// (0x0000cf97) aid_inside_area_window_primary

0x873f,	// (0x000155f7) ai2_news_ticker_pane

0x8747,	// (0x000155ff) aid_size_cell_ai1_link_ParamLimits

0x8747,	// (0x000155ff) aid_size_cell_ai1_link

0x049a,	// (0x0000d352) popup_ai2_data_window_ParamLimits

0x049a,	// (0x0000d352) popup_ai2_data_window

0x8777,	// (0x0001562f) popup_ai2_link_window_ParamLimits

0x8777,	// (0x0001562f) popup_ai2_link_window

0x6dd3,	// (0x00013c8b) bg_popup_sub_pane_cp4_ParamLimits

0x6dd3,	// (0x00013c8b) bg_popup_sub_pane_cp4

0x878b,	// (0x00015643) grid_ai2_link_pane_ParamLimits

0x878b,	// (0x00015643) grid_ai2_link_pane

0x87a2,	// (0x0001565a) popup_ai2_link_window_g1_ParamLimits

0x87a2,	// (0x0001565a) popup_ai2_link_window_g1

0x87ae,	// (0x00015666) popup_ai2_link_window_g2_ParamLimits

0x87ae,	// (0x00015666) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0001c892) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0001c892) popup_ai2_link_window_g

0x87bd,	// (0x00015675) ai2_mp_button_pane

0x87c5,	// (0x0001567d) ai2_mp_volume_pane

0x6fcd,	// (0x00013e85) bg_popup_sub_pane_cp5_ParamLimits

0x6fcd,	// (0x00013e85) bg_popup_sub_pane_cp5

0x87cd,	// (0x00015685) heading_ai2_gene_pane_ParamLimits

0x87cd,	// (0x00015685) heading_ai2_gene_pane

0x87d9,	// (0x00015691) list_ai2_gene_pane_ParamLimits

0x87d9,	// (0x00015691) list_ai2_gene_pane

0x8821,	// (0x000156d9) cell_ai2_link_pane_ParamLimits

0x8821,	// (0x000156d9) cell_ai2_link_pane

0x8837,	// (0x000156ef) cell_ai2_link_pane_g1

0x4126,	// (0x00010fde) grid_highlight_pane_cp7

0x33ab,	// (0x00010263) ai2_mp_volume_pane_g1

0x8907,	// (0x000157bf) ai2_mp_volume_pane_g2

0x04c4,	// (0x0000d37c) list_ai2_gene_pane_t1

0x890f,	// (0x000157c7) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0001c8ab) ai2_mp_volume_pane_g

0x33b3,	// (0x0001026b) volume_small_pane_cp3

0x8917,	// (0x000157cf) aid_size_cell_ai2_button

0x891f,	// (0x000157d7) grid_ai2_button_pane

0x8928,	// (0x000157e0) cell_ai2_button_pane_ParamLimits

0x8928,	// (0x000157e0) cell_ai2_button_pane

0x411c,	// (0x00010fd4) cell_ai2_button_pane_g1

0x4126,	// (0x00010fde) grid_highlight_pane_cp8

0x88c7,	// (0x0001577f) ai2_gene_pane_t1_ParamLimits

0x88c7,	// (0x0001577f) ai2_gene_pane_t1

0xe9ae,	// (0x0001b866) aid_height_parent_landscape

0x020b,	// (0x0000d0c3) aid_height_set_list

0x8186,	// (0x0001503e) aid_size_parent

0x8566,	// (0x0001541e) aid_size_cell_graphic_pane_ParamLimits

0x87e9,	// (0x000156a1) popup_ai2_data_window_g1_ParamLimits

0x87e9,	// (0x000156a1) popup_ai2_data_window_g1

0x87f5,	// (0x000156ad) ai2_news_ticker_pane_g1

0x87fd,	// (0x000156b5) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0001c897) ai2_news_ticker_pane_g

0x8805,	// (0x000156bd) ai2_news_ticker_pane_t1

0x8813,	// (0x000156cb) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0001c89c) ai2_news_ticker_pane_t

0x8840,	// (0x000156f8) heading_ai2_gene_pane_g1

0x8848,	// (0x00015700) heading_ai2_gene_pane_t1_ParamLimits

0x8848,	// (0x00015700) heading_ai2_gene_pane_t1

0x885d,	// (0x00015715) list_highlight_pane_cp6

0x04ae,	// (0x0000d366) ai2_gene_pane_ParamLimits

0x04ae,	// (0x0000d366) ai2_gene_pane

0x04d2,	// (0x0000d38a) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0001c8a1) list_ai2_gene_pane_t

0x8898,	// (0x00015750) list_highlight_pane_cp8_ParamLimits

0x8898,	// (0x00015750) list_highlight_pane_cp8

0x88a9,	// (0x00015761) ai2_gene_pane_g1_ParamLimits

0x88a9,	// (0x00015761) ai2_gene_pane_g1

0x88bb,	// (0x00015773) ai2_gene_pane_g2_ParamLimits

0x88bb,	// (0x00015773) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0001c8a6) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0001c8a6) ai2_gene_pane_g

0x4a22,	// (0x000118da) scroll_pane_cp12

0xcabe,	// (0x00019976) control_pane_t3_ParamLimits

0xcabe,	// (0x00019976) control_pane_t3

0x60d6,	// (0x00012f8e) status_small_pane_g8_ParamLimits

0x60d6,	// (0x00012f8e) status_small_pane_g8

0xeacd,	// (0x0001b985) popup_find_window_ParamLimits

0xed3c,	// (0x0001bbf4) popup_note_image_window_ParamLimits

0x6c19,	// (0x00013ad1) list_double2_graphic_pane_vc_g1_ParamLimits

0x6c19,	// (0x00013ad1) list_double2_graphic_pane_vc_g1

0x6c25,	// (0x00013add) list_double2_graphic_pane_vc_g2_ParamLimits

0x6c25,	// (0x00013add) list_double2_graphic_pane_vc_g2

0x6c31,	// (0x00013ae9) list_double2_graphic_pane_vc_g3_ParamLimits

0x6c31,	// (0x00013ae9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001c689) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001c689) list_double2_graphic_pane_vc_g

0x6c3d,	// (0x00013af5) list_double2_graphic_pane_vc_t1_ParamLimits

0x6c3d,	// (0x00013af5) list_double2_graphic_pane_vc_t1

0x6c25,	// (0x00013add) list_single_heading_pane_vc_g1_ParamLimits

0x6c25,	// (0x00013add) list_single_heading_pane_vc_g1

0x6c31,	// (0x00013ae9) list_single_heading_pane_vc_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001c498) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001c498) list_single_heading_pane_vc_g

0x6cf7,	// (0x00013baf) list_single_heading_pane_vc_t1_ParamLimits

0x6cf7,	// (0x00013baf) list_single_heading_pane_vc_t1

0x6d0f,	// (0x00013bc7) list_single_heading_pane_vc_t2_ParamLimits

0x6d0f,	// (0x00013bc7) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0001c6aa) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0001c6aa) list_single_heading_pane_vc_t

0x6d23,	// (0x00013bdb) list_setting_number_pane_vc_g1_ParamLimits

0x6d23,	// (0x00013bdb) list_setting_number_pane_vc_g1

0x6d2f,	// (0x00013be7) list_setting_number_pane_vc_g2_ParamLimits

0x6d2f,	// (0x00013be7) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001c6af) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001c6af) list_setting_number_pane_vc_g

0x6d3b,	// (0x00013bf3) list_setting_number_pane_vc_t1_ParamLimits

0x6d3b,	// (0x00013bf3) list_setting_number_pane_vc_t1

0x6d4f,	// (0x00013c07) list_setting_number_pane_vc_t2_ParamLimits

0x6d4f,	// (0x00013c07) list_setting_number_pane_vc_t2

0x6d6b,	// (0x00013c23) list_setting_number_pane_vc_t3_ParamLimits

0x6d6b,	// (0x00013c23) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0001c6b4) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0001c6b4) list_setting_number_pane_vc_t

0x6d97,	// (0x00013c4f) set_value_pane_vc_ParamLimits

0x6d97,	// (0x00013c4f) set_value_pane_vc

0x838c,	// (0x00015244) list_double2_graphic_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double2_graphic_pane_vc

0x839e,	// (0x00015256) list_double2_large_graphic_pane_vc_ParamLimits

0x839e,	// (0x00015256) list_double2_large_graphic_pane_vc

0x838c,	// (0x00015244) list_double2_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double2_pane_vc

0x838c,	// (0x00015244) list_double_graphic_heading_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double_graphic_heading_pane_vc

0x838c,	// (0x00015244) list_double_graphic_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double_graphic_pane_vc

0x838c,	// (0x00015244) list_double_heading_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double_heading_pane_vc

0x839e,	// (0x00015256) list_double_large_graphic_pane_vc_ParamLimits

0x839e,	// (0x00015256) list_double_large_graphic_pane_vc

0x838c,	// (0x00015244) list_double_number_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double_number_pane_vc

0x838c,	// (0x00015244) list_double_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double_pane_vc

0x838c,	// (0x00015244) list_double_time_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_double_time_pane_vc

0x838c,	// (0x00015244) list_setting_number_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_setting_number_pane_vc

0x838c,	// (0x00015244) list_setting_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_setting_pane_vc

0x838c,	// (0x00015244) list_single_graphic_heading_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_single_graphic_heading_pane_vc

0x838c,	// (0x00015244) list_single_heading_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_single_heading_pane_vc

0x838c,	// (0x00015244) list_single_number_heading_pane_vc_ParamLimits

0x838c,	// (0x00015244) list_single_number_heading_pane_vc

0x895c,	// (0x00015814) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x895c,	// (0x00015814) list_double_graphic_heading_pane_vc_g1

0x6c25,	// (0x00013add) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6c25,	// (0x00013add) list_double_graphic_heading_pane_vc_g2

0x6c31,	// (0x00013ae9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6c31,	// (0x00013ae9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x0001c8b2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001c8b2) list_double_graphic_heading_pane_vc_g

0x8968,	// (0x00015820) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x8968,	// (0x00015820) list_double_graphic_heading_pane_vc_t1

0x6cf7,	// (0x00013baf) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6cf7,	// (0x00013baf) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x0001c8b9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0001c8b9) list_double_graphic_heading_pane_vc_t

0x6d23,	// (0x00013bdb) list_setting_pane_vc_g1_ParamLimits

0x6d23,	// (0x00013bdb) list_setting_pane_vc_g1

0x6d2f,	// (0x00013be7) list_setting_pane_vc_g2_ParamLimits

0x6d2f,	// (0x00013be7) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001c6af) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001c6af) list_setting_pane_vc_g

0x8b80,	// (0x00015a38) list_setting_pane_vc_t1_ParamLimits

0x8b80,	// (0x00015a38) list_setting_pane_vc_t1

0x8b9c,	// (0x00015a54) list_setting_pane_vc_t2_ParamLimits

0x8b9c,	// (0x00015a54) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x0001c8fc) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x0001c8fc) list_setting_pane_vc_t

0x6d97,	// (0x00013c4f) set_value_pane_cp_vc_ParamLimits

0x6d97,	// (0x00013c4f) set_value_pane_cp_vc

0x6c25,	// (0x00013add) list_single_number_heading_pane_vc_g1_ParamLimits

0x6c25,	// (0x00013add) list_single_number_heading_pane_vc_g1

0x6c31,	// (0x00013ae9) list_single_number_heading_pane_vc_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001c498) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001c498) list_single_number_heading_pane_vc_g

0x6cf7,	// (0x00013baf) list_single_number_heading_pane_vc_t1_ParamLimits

0x6cf7,	// (0x00013baf) list_single_number_heading_pane_vc_t1

0x8bb8,	// (0x00015a70) list_single_number_heading_pane_vc_t2_ParamLimits

0x8bb8,	// (0x00015a70) list_single_number_heading_pane_vc_t2

0x8bcc,	// (0x00015a84) list_single_number_heading_pane_vc_t3_ParamLimits

0x8bcc,	// (0x00015a84) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x0001c901) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001c901) list_single_number_heading_pane_vc_t

0x6c19,	// (0x00013ad1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6c19,	// (0x00013ad1) list_single_graphic_heading_pane_vc_g1

0x6c25,	// (0x00013add) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6c25,	// (0x00013add) list_single_graphic_heading_pane_vc_g4

0x6c31,	// (0x00013ae9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6c31,	// (0x00013ae9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001c689) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001c689) list_single_graphic_heading_pane_vc_g

0x6cf7,	// (0x00013baf) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6cf7,	// (0x00013baf) list_single_graphic_heading_pane_vc_t1

0x8bde,	// (0x00015a96) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x8bde,	// (0x00015a96) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x0001c908) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x0001c908) list_single_graphic_heading_pane_vc_t

0x6c25,	// (0x00013add) list_double2_pane_vc_g1_ParamLimits

0x6c25,	// (0x00013add) list_double2_pane_vc_g1

0x6c31,	// (0x00013ae9) list_double2_pane_vc_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001c498) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001c498) list_double2_pane_vc_g

0x8bf2,	// (0x00015aaa) list_double2_pane_vc_t1_ParamLimits

0x8bf2,	// (0x00015aaa) list_double2_pane_vc_t1

0x8c08,	// (0x00015ac0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x8c08,	// (0x00015ac0) list_double2_large_graphic_pane_vc_g1

0x8c14,	// (0x00015acc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8c14,	// (0x00015acc) list_double2_large_graphic_pane_vc_g2

0x8c20,	// (0x00015ad8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8c20,	// (0x00015ad8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x0001c4b5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x0001c4b5) list_double2_large_graphic_pane_vc_g

0x8c2c,	// (0x00015ae4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x8c2c,	// (0x00015ae4) list_double2_large_graphic_pane_vc_t1

0x8c42,	// (0x00015afa) list_double_time_pane_vc_g1_ParamLimits

0x8c42,	// (0x00015afa) list_double_time_pane_vc_g1

0x8c4e,	// (0x00015b06) list_double_time_pane_vc_g2_ParamLimits

0x8c4e,	// (0x00015b06) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x0001c90d) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x0001c90d) list_double_time_pane_vc_g

0x8c5a,	// (0x00015b12) list_double_time_pane_vc_t1_ParamLimits

0x8c5a,	// (0x00015b12) list_double_time_pane_vc_t1

0x8c75,	// (0x00015b2d) list_double_time_pane_vc_t2_ParamLimits

0x8c75,	// (0x00015b2d) list_double_time_pane_vc_t2

0x8c90,	// (0x00015b48) list_double_time_pane_vc_t3_ParamLimits

0x8c90,	// (0x00015b48) list_double_time_pane_vc_t3

0x8ca8,	// (0x00015b60) list_double_time_pane_vc_t4_ParamLimits

0x8ca8,	// (0x00015b60) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x0001c912) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x0001c912) list_double_time_pane_vc_t

0x6c25,	// (0x00013add) list_double_pane_vc_g1_ParamLimits

0x6c25,	// (0x00013add) list_double_pane_vc_g1

0x6c31,	// (0x00013ae9) list_double_pane_vc_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001c498) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001c498) list_double_pane_vc_g

0x8cbc,	// (0x00015b74) list_double_pane_vc_t1_ParamLimits

0x8cbc,	// (0x00015b74) list_double_pane_vc_t1

0x8cd0,	// (0x00015b88) list_double_pane_vc_t2_ParamLimits

0x8cd0,	// (0x00015b88) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x0001c91b) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x0001c91b) list_double_pane_vc_t

0x6c25,	// (0x00013add) list_double_number_pane_vc_g1_ParamLimits

0x6c25,	// (0x00013add) list_double_number_pane_vc_g1

0x6c31,	// (0x00013ae9) list_double_number_pane_vc_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001c498) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001c498) list_double_number_pane_vc_g

0x8ce8,	// (0x00015ba0) list_double_number_pane_vc_t1_ParamLimits

0x8ce8,	// (0x00015ba0) list_double_number_pane_vc_t1

0x8cfc,	// (0x00015bb4) list_double_number_pane_vc_t2_ParamLimits

0x8cfc,	// (0x00015bb4) list_double_number_pane_vc_t2

0x8cd0,	// (0x00015b88) list_double_number_pane_vc_t3_ParamLimits

0x8cd0,	// (0x00015b88) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x0001c920) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x0001c920) list_double_number_pane_vc_t

0x8d10,	// (0x00015bc8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x8d10,	// (0x00015bc8) list_double_large_graphic_pane_vc_g1

0x8d1c,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x8d1c,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2

0x8c20,	// (0x00015ad8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x8c20,	// (0x00015ad8) list_double_large_graphic_pane_vc_g3

0x8d2b,	// (0x00015be3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x8d2b,	// (0x00015be3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x0001c927) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x0001c927) list_double_large_graphic_pane_vc_g

0x8d37,	// (0x00015bef) list_double_large_graphic_pane_vc_t1_ParamLimits

0x8d37,	// (0x00015bef) list_double_large_graphic_pane_vc_t1

0x8d4b,	// (0x00015c03) list_double_large_graphic_pane_vc_t2_ParamLimits

0x8d4b,	// (0x00015c03) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0001c930) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0001c930) list_double_large_graphic_pane_vc_t

0x6c25,	// (0x00013add) list_double_heading_pane_vc_g1_ParamLimits

0x6c25,	// (0x00013add) list_double_heading_pane_vc_g1

0x6c31,	// (0x00013ae9) list_double_heading_pane_vc_g2_ParamLimits

0x6c31,	// (0x00013ae9) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x0001c498) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x0001c498) list_double_heading_pane_vc_g

0x8d64,	// (0x00015c1c) list_double_heading_pane_vc_t1_ParamLimits

0x8d64,	// (0x00015c1c) list_double_heading_pane_vc_t1

0x6cf7,	// (0x00013baf) list_double_heading_pane_vc_t2_ParamLimits

0x6cf7,	// (0x00013baf) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x0001c935) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x0001c935) list_double_heading_pane_vc_t

0x6c19,	// (0x00013ad1) list_double_graphic_pane_vc_g1_ParamLimits

0x6c19,	// (0x00013ad1) list_double_graphic_pane_vc_g1

0x8d78,	// (0x00015c30) list_double_graphic_pane_vc_g2_ParamLimits

0x8d78,	// (0x00015c30) list_double_graphic_pane_vc_g2

0x8d87,	// (0x00015c3f) list_double_graphic_pane_vc_g3_ParamLimits

0x8d87,	// (0x00015c3f) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x0001c93a) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x0001c93a) list_double_graphic_pane_vc_g

0x8d93,	// (0x00015c4b) list_double_graphic_pane_vc_t1_ParamLimits

0x8d93,	// (0x00015c4b) list_double_graphic_pane_vc_t1

0x8cd0,	// (0x00015b88) list_double_graphic_pane_vc_t2_ParamLimits

0x8cd0,	// (0x00015b88) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x0001c941) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x0001c941) list_double_graphic_pane_vc_t

0x24e0,	// (0x0000f398) aid_size_cell_fastswap

0xc7f2,	// (0x000196aa) aid_size_cell_touch_ParamLimits

0xc7f2,	// (0x000196aa) aid_size_cell_touch

0x274d,	// (0x0000f605) popup_fast_swap_wide_window_ParamLimits

0x274d,	// (0x0000f605) popup_fast_swap_wide_window

0xc93d,	// (0x000197f5) touch_pane_ParamLimits

0xc93d,	// (0x000197f5) touch_pane

0x4f07,	// (0x00011dbf) button_value_adjust_pane_cp2

0x4f0f,	// (0x00011dc7) button_value_adjust_pane_cp4

0x4f31,	// (0x00011de9) form_field_data_pane_cp2

0xe495,	// (0x0001b34d) form_field_data_wide_pane_cp2

0x55e1,	// (0x00012499) bg_scroll_pane_ParamLimits

0x2ae7,	// (0x0000f99f) scroll_handle_pane_ParamLimits

0x2afb,	// (0x0000f9b3) scroll_sc2_down_pane_ParamLimits

0x2afb,	// (0x0000f9b3) scroll_sc2_down_pane

0x5612,	// (0x000124ca) scroll_sc2_up_pane_ParamLimits

0x5612,	// (0x000124ca) scroll_sc2_up_pane

0x05fc,	// (0x0000d4b4) grid_wheel_folder_pane_g1_ParamLimits

0x05fc,	// (0x0000d4b4) grid_wheel_folder_pane_g1

0x2cc0,	// (0x0000fb78) clock_nsta_pane_cp2_ParamLimits

0x2cc0,	// (0x0000fb78) clock_nsta_pane_cp2

0x61dd,	// (0x00013095) listscroll_midp_pane_ParamLimits

0xe8e6,	// (0x0001b79e) midp_canvas_pane

0x6151,	// (0x00013009) nsta_clock_indic_pane

0x61af,	// (0x00013067) listscroll_form_pane_vc

0x61cb,	// (0x00013083) listscroll_set_pane_vc_ParamLimits

0x61cb,	// (0x00013083) listscroll_set_pane_vc

0xf16a,	// (0x0001c022) clock_nsta_pane

0xf194,	// (0x0001c04c) indicator_nsta_pane

0x6bb3,	// (0x00013a6b) bg_popup_sub_pane_cp2_ParamLimits

0x6bc7,	// (0x00013a7f) find_pane_cp2_ParamLimits

0x6bc7,	// (0x00013a7f) find_pane_cp2

0x6bdd,	// (0x00013a95) grid_toobar_pane_ParamLimits

0x6da7,	// (0x00013c5f) list_form_gen_pane_vc_ParamLimits

0x6da7,	// (0x00013c5f) list_form_gen_pane_vc

0x6dbd,	// (0x00013c75) scroll_pane_cp8_vc_ParamLimits

0x6dbd,	// (0x00013c75) scroll_pane_cp8_vc

0x6e39,	// (0x00013cf1) data_form_wide_pane_vc_ParamLimits

0x6e39,	// (0x00013cf1) data_form_wide_pane_vc

0x6e45,	// (0x00013cfd) form_field_data_wide_pane_vc_g1

0x6e4d,	// (0x00013d05) form_field_data_wide_pane_vc_t1_ParamLimits

0x6e4d,	// (0x00013d05) form_field_data_wide_pane_vc_t1

0x4fed,	// (0x00011ea5) input_focus_pane_cp6_vc_ParamLimits

0x4fed,	// (0x00011ea5) input_focus_pane_cp6_vc

0xf520,	// (0x0001c3d8) list_midp_pane_ParamLimits

0x85cc,	// (0x00015484) scroll_pane_cp16_ParamLimits

0x85cc,	// (0x00015484) scroll_pane_cp16

0x71e9,	// (0x000140a1) button_value_adjust_pane_ParamLimits

0x71e9,	// (0x000140a1) button_value_adjust_pane

0x021c,	// (0x0000d0d4) button_value_adjust_pane_cp6_ParamLimits

0x021c,	// (0x0000d0d4) button_value_adjust_pane_cp6

0x0336,	// (0x0000d1ee) settings_code_pane_cp_ParamLimits

0x0336,	// (0x0000d1ee) settings_code_pane_cp

0x411c,	// (0x00010fd4) cell_touch_pane_g1

0x411c,	// (0x00010fd4) cell_touch_pane_g2

0x0001,

0xf716,	// (0x0001c5ce) cell_touch_pane_g

0x04e0,	// (0x0000d398) cell_touch_pane_cp_ParamLimits

0x04e0,	// (0x0000d398) cell_touch_pane_cp

0x04fc,	// (0x0000d3b4) cell_touch_pane_ParamLimits

0x04fc,	// (0x0000d3b4) cell_touch_pane

0x411c,	// (0x00010fd4) scroll_sc2_down_pane_g1

0x411c,	// (0x00010fd4) scroll_sc2_up_pane_g1

0x4126,	// (0x00010fde) bg_set_opt_pane_cp4_vc

0x897c,	// (0x00015834) list_set_graphic_pane_vc_g1_ParamLimits

0x897c,	// (0x00015834) list_set_graphic_pane_vc_g1

0x8988,	// (0x00015840) list_set_graphic_pane_vc_g2_ParamLimits

0x8988,	// (0x00015840) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x0001c8be) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x0001c8be) list_set_graphic_pane_vc_g

0x8994,	// (0x0001584c) text_primary_small_cp13_vc_ParamLimits

0x8994,	// (0x0001584c) text_primary_small_cp13_vc

0x89ac,	// (0x00015864) list_set_graphic_pane_vc_ParamLimits

0x89ac,	// (0x00015864) list_set_graphic_pane_vc

0x4126,	// (0x00010fde) input_focus_pane_cp2_vc

0x411c,	// (0x00010fd4) setting_code_pane_vc_g1

0x89c0,	// (0x00015878) setting_code_pane_vc_t1

0x89ce,	// (0x00015886) set_text_pane_vc_t1_ParamLimits

0x89ce,	// (0x00015886) set_text_pane_vc_t1

0x4126,	// (0x00010fde) input_focus_pane_cp1_vc

0x89e9,	// (0x000158a1) list_set_text_pane_vc

0x411c,	// (0x00010fd4) setting_text_pane_vc_g1

0x4126,	// (0x00010fde) bg_set_opt_pane_cp2_vc

0x89f3,	// (0x000158ab) setting_slider_graphic_pane_vc_g1

0x89fb,	// (0x000158b3) setting_slider_graphic_pane_vc_t1

0x8a09,	// (0x000158c1) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x0001c8c3) setting_slider_graphic_pane_vc_t

0x8a17,	// (0x000158cf) slider_set_pane_cp_vc

0x8a1f,	// (0x000158d7) slider_set_pane_vc_g1

0x8a28,	// (0x000158e0) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x0001c8c8) slider_set_pane_vc_g

0x5125,	// (0x00011fdd) set_opt_bg_pane_g1_copy1

0x512d,	// (0x00011fe5) set_opt_bg_pane_g2_copy1

0x8a54,	// (0x0001590c) set_opt_bg_pane_g3_copy1

0x513d,	// (0x00011ff5) set_opt_bg_pane_g4_copy1

0x5145,	// (0x00011ffd) set_opt_bg_pane_g5_copy1

0x514d,	// (0x00012005) set_opt_bg_pane_g6_copy1

0x8a5e,	// (0x00015916) set_opt_bg_pane_g7_copy1

0x8a66,	// (0x0001591e) set_opt_bg_pane_g8_copy1

0x8a70,	// (0x00015928) set_opt_bg_pane_g9_copy1

0x4126,	// (0x00010fde) bg_set_opt_pane_cp_vc

0x8a7a,	// (0x00015932) setting_slider_pane_vc_t1

0x89fb,	// (0x000158b3) setting_slider_pane_vc_t2

0x8a09,	// (0x000158c1) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x0001c8d7) setting_slider_pane_vc_t

0x8a17,	// (0x000158cf) slider_set_pane_vc

0x30c7,	// (0x0000ff7f) volume_set_pane_vc_g1

0x30d0,	// (0x0000ff88) volume_set_pane_vc_g2

0x30d9,	// (0x0000ff91) volume_set_pane_vc_g3

0x30e2,	// (0x0000ff9a) volume_set_pane_vc_g4

0x30eb,	// (0x0000ffa3) volume_set_pane_vc_g5

0x30f4,	// (0x0000ffac) volume_set_pane_vc_g6

0x30fd,	// (0x0000ffb5) volume_set_pane_vc_g7

0x3106,	// (0x0000ffbe) volume_set_pane_vc_g8

0x310f,	// (0x0000ffc7) volume_set_pane_vc_g9

0x3118,	// (0x0000ffd0) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x0001c8de) volume_set_pane_vc_g

0x8a89,	// (0x00015941) volume_set_pane_vc

0x8a91,	// (0x00015949) button_value_adjust_pane_cp1_vc

0x8a9b,	// (0x00015953) list_highlight_pane_cp2_vc

0x8aa4,	// (0x0001595c) list_set_pane_vc_ParamLimits

0x8aa4,	// (0x0001595c) list_set_pane_vc

0x8b0e,	// (0x000159c6) main_pane_set_vc_t1_ParamLimits

0x8b0e,	// (0x000159c6) main_pane_set_vc_t1

0x8b23,	// (0x000159db) main_pane_set_vc_t2_ParamLimits

0x8b23,	// (0x000159db) main_pane_set_vc_t2

0x8b35,	// (0x000159ed) main_pane_set_vc_t3_ParamLimits

0x8b35,	// (0x000159ed) main_pane_set_vc_t3

0x8b49,	// (0x00015a01) main_pane_set_vc_t4_ParamLimits

0x8b49,	// (0x00015a01) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x0001c8f3) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x0001c8f3) main_pane_set_vc_t

0x8b5d,	// (0x00015a15) setting_code_pane_vc_ParamLimits

0x8b5d,	// (0x00015a15) setting_code_pane_vc

0x8b6e,	// (0x00015a26) setting_slider_graphic_pane_vc

0x8b6e,	// (0x00015a26) setting_slider_pane_vc

0x8b6e,	// (0x00015a26) setting_text_pane_vc

0x8b6e,	// (0x00015a26) setting_volume_pane_vc

0x8b78,	// (0x00015a30) scroll_pane_cp121_vc

0x4ef5,	// (0x00011dad) set_content_pane_vc

0x8da7,	// (0x00015c5f) button_value_adjust_pane_g1

0x8db0,	// (0x00015c68) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x0001c946) button_value_adjust_pane_g

0x8db9,	// (0x00015c71) form_field_slider_wide_pane_vc_t1_ParamLimits

0x8db9,	// (0x00015c71) form_field_slider_wide_pane_vc_t1

0x8dcd,	// (0x00015c85) form_field_slider_wide_pane_vc_t2_ParamLimits

0x8dcd,	// (0x00015c85) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x0001c94b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x0001c94b) form_field_slider_wide_pane_vc_t

0x449b,	// (0x00011353) input_focus_pane_cp10_vc_ParamLimits

0x449b,	// (0x00011353) input_focus_pane_cp10_vc

0x8de1,	// (0x00015c99) slider_cont_pane_cp1_vc_ParamLimits

0x8de1,	// (0x00015c99) slider_cont_pane_cp1_vc

0x8a1f,	// (0x000158d7) slider_form_pane_g1_cp2

0x8a28,	// (0x000158e0) slider_form_pane_g2_cp2

0x8dfc,	// (0x00015cb4) form_field_slider_pane_vc_t3

0x8e0a,	// (0x00015cc2) form_field_slider_pane_vc_t4

0x8e18,	// (0x00015cd0) slider_form_pane_vc_ParamLimits

0x8e18,	// (0x00015cd0) slider_form_pane_vc

0x8e25,	// (0x00015cdd) form_field_slider_pane_vc_t1_ParamLimits

0x8e25,	// (0x00015cdd) form_field_slider_pane_vc_t1

0x8dcd,	// (0x00015c85) form_field_slider_pane_vc_t2_ParamLimits

0x8dcd,	// (0x00015c85) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x0001c95b) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x0001c95b) form_field_slider_pane_vc_t

0x449b,	// (0x00011353) input_focus_pane_cp9_vc_ParamLimits

0x449b,	// (0x00011353) input_focus_pane_cp9_vc

0x8e41,	// (0x00015cf9) slider_cont_pane_vc_ParamLimits

0x8e41,	// (0x00015cf9) slider_cont_pane_vc

0x8e55,	// (0x00015d0d) list_form_graphic_pane_cp_vc_ParamLimits

0x8e55,	// (0x00015d0d) list_form_graphic_pane_cp_vc

0x6e45,	// (0x00013cfd) form_field_popup_wide_pane_vc_g1

0x8e6a,	// (0x00015d22) form_field_popup_wide_pane_vc_t1_ParamLimits

0x8e6a,	// (0x00015d22) form_field_popup_wide_pane_vc_t1

0x4fed,	// (0x00011ea5) input_focus_pane_cp8_vc_ParamLimits

0x4fed,	// (0x00011ea5) input_focus_pane_cp8_vc

0x8e81,	// (0x00015d39) list_form_wide_pane_vc_ParamLimits

0x8e81,	// (0x00015d39) list_form_wide_pane_vc

0x8e8d,	// (0x00015d45) list_form_graphic_pane_vc_g1

0x8e95,	// (0x00015d4d) list_form_graphic_pane_vc_t1_ParamLimits

0x8e95,	// (0x00015d4d) list_form_graphic_pane_vc_t1

0x4206,	// (0x000110be) list_highlight_pane_cp5_vc_ParamLimits

0x4206,	// (0x000110be) list_highlight_pane_cp5_vc

0x8eb1,	// (0x00015d69) list_form_graphic_pane_vc_ParamLimits

0x8eb1,	// (0x00015d69) list_form_graphic_pane_vc

0x6e45,	// (0x00013cfd) form_field_popup_pane_vc_g1

0x8ec7,	// (0x00015d7f) form_field_popup_pane_vc_t1_ParamLimits

0x8ec7,	// (0x00015d7f) form_field_popup_pane_vc_t1

0x4fed,	// (0x00011ea5) input_focus_pane_cp7_vc_ParamLimits

0x4fed,	// (0x00011ea5) input_focus_pane_cp7_vc

0x8ede,	// (0x00015d96) list_form_pane_vc_ParamLimits

0x8ede,	// (0x00015d96) list_form_pane_vc

0x8eea,	// (0x00015da2) data_form_pane_vc_t1_ParamLimits

0x8eea,	// (0x00015da2) data_form_pane_vc_t1

0x5125,	// (0x00011fdd) input_focus_pane_vc_g1

0x512d,	// (0x00011fe5) input_focus_pane_vc_g2

0x5135,	// (0x00011fed) input_focus_pane_vc_g3

0x513d,	// (0x00011ff5) input_focus_pane_vc_g4

0x5145,	// (0x00011ffd) input_focus_pane_vc_g5

0x514d,	// (0x00012005) input_focus_pane_vc_g6

0x5155,	// (0x0001200d) input_focus_pane_vc_g7

0x515d,	// (0x00012015) input_focus_pane_vc_g8

0x5165,	// (0x0001201d) input_focus_pane_vc_g9

0x411c,	// (0x00010fd4) input_focus_pane_vc_g10

0x0009,

0xf69f,	// (0x0001c557) input_focus_pane_vc_g

0x6e39,	// (0x00013cf1) data_form_pane_vc_ParamLimits

0x6e39,	// (0x00013cf1) data_form_pane_vc

0x6e45,	// (0x00013cfd) form_field_data_pane_vc_g1

0x8f05,	// (0x00015dbd) form_field_data_pane_vc_t1_ParamLimits

0x8f05,	// (0x00015dbd) form_field_data_pane_vc_t1

0x4fed,	// (0x00011ea5) input_focus_pane_vc_ParamLimits

0x4fed,	// (0x00011ea5) input_focus_pane_vc

0x8f1f,	// (0x00015dd7) button_value_adjust_pane_cp3_vc

0x8f27,	// (0x00015ddf) button_value_adjust_pane_cp5_vc

0x8f2f,	// (0x00015de7) form_field_data_pane_vc_ParamLimits

0x8f2f,	// (0x00015de7) form_field_data_pane_vc

0x8f46,	// (0x00015dfe) form_field_data_pane_vc_cp2

0x8f4e,	// (0x00015e06) form_field_data_wide_pane_vc_ParamLimits

0x8f4e,	// (0x00015e06) form_field_data_wide_pane_vc

0x8f64,	// (0x00015e1c) form_field_data_wide_pane_vc_cp2

0x8f6c,	// (0x00015e24) form_field_popup_pane_vc_ParamLimits

0x8f6c,	// (0x00015e24) form_field_popup_pane_vc

0x8f83,	// (0x00015e3b) form_field_popup_wide_pane_vc_ParamLimits

0x8f83,	// (0x00015e3b) form_field_popup_wide_pane_vc

0x8f99,	// (0x00015e51) form_field_slider_pane_vc_ParamLimits

0x8f99,	// (0x00015e51) form_field_slider_pane_vc

0x8fac,	// (0x00015e64) form_field_slider_wide_pane_vc_ParamLimits

0x8fac,	// (0x00015e64) form_field_slider_wide_pane_vc

0x051a,	// (0x0000d3d2) grid_touch_1_pane_ParamLimits

0x051a,	// (0x0000d3d2) grid_touch_1_pane

0x052e,	// (0x0000d3e6) grid_touch_2_pane_ParamLimits

0x052e,	// (0x0000d3e6) grid_touch_2_pane

0x9081,	// (0x00015f39) touch_pane_g1_ParamLimits

0x9081,	// (0x00015f39) touch_pane_g1

0x8fe3,	// (0x00015e9b) cell_app_pane_cp_wide_ParamLimits

0x8fe3,	// (0x00015e9b) cell_app_pane_cp_wide

0x8ff4,	// (0x00015eac) grid_popup_fast_wide_pane_ParamLimits

0x8ff4,	// (0x00015eac) grid_popup_fast_wide_pane

0x9008,	// (0x00015ec0) scroll_pane_cp19_ParamLimits

0x9008,	// (0x00015ec0) scroll_pane_cp19

0x4126,	// (0x00010fde) bg_popup_window_pane_cp20

0x901c,	// (0x00015ed4) listscroll_popup_fast_wide_pane

0x5339,	// (0x000121f1) grid_indicator_nsta_pane

0x9024,	// (0x00015edc) clock_nsta_pane_g1

0x902d,	// (0x00015ee5) clock_nsta_pane_t1

0x0558,	// (0x0000d410) cell_indicator_nsta_pane_ParamLimits

0x0558,	// (0x0000d410) cell_indicator_nsta_pane

0x9081,	// (0x00015f39) cell_indicator_nsta_pane_g1

0x0571,	// (0x0000d429) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x0001c965) cell_indicator_nsta_pane_g

0x90a5,	// (0x00015f5d) clock_nsta_pane_cp

0x90ad,	// (0x00015f65) indicator_nsta_pane_cp

0x90b6,	// (0x00015f6e) nsta_clock_indic_pane_g1

0x42e9,	// (0x000111a1) grid_indicator_pane

0x5707,	// (0x000125bf) scroll_pane_cp29

0x2c0f,	// (0x0000fac7) indicator_nsta_pane_cp2_ParamLimits

0x2c0f,	// (0x0000fac7) indicator_nsta_pane_cp2

0x4206,	// (0x000110be) main_apps_wheel_pane

0x7070,	// (0x00013f28) form_midp_field_text_pane_ParamLimits

0x71bb,	// (0x00014073) scroll_bar_cp050_ParamLimits

0x911f,	// (0x00015fd7) cell_indicator_pane_ParamLimits

0x911f,	// (0x00015fd7) cell_indicator_pane

0x9136,	// (0x00015fee) cell_indicator_pane_g1

0x0586,	// (0x0000d43e) grid_wheel_folder_pane_ParamLimits

0x0586,	// (0x0000d43e) grid_wheel_folder_pane

0x0594,	// (0x0000d44c) list_wheel_apps_pane_ParamLimits

0x0594,	// (0x0000d44c) list_wheel_apps_pane

0x05a2,	// (0x0000d45a) main_apps_wheel_pane_g1_ParamLimits

0x05a2,	// (0x0000d45a) main_apps_wheel_pane_g1

0x05ae,	// (0x0000d466) main_apps_wheel_pane_g2_ParamLimits

0x05ae,	// (0x0000d466) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x0001c981) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x0001c981) main_apps_wheel_pane_g

0x05bc,	// (0x0000d474) main_apps_wheel_pane_t1_ParamLimits

0x05bc,	// (0x0000d474) main_apps_wheel_pane_t1

0x05d0,	// (0x0000d488) list_wheel_apps_pane_g1

0x05d8,	// (0x0000d490) list_wheel_apps_pane_g2

0x05e0,	// (0x0000d498) list_wheel_apps_pane_g3

0x05e8,	// (0x0000d4a0) list_wheel_apps_pane_g4

0x05f2,	// (0x0000d4aa) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x0001c986) list_wheel_apps_pane_g

0x5cdf,	// (0x00012b97) navi_icon_text_pane

0xf05e,	// (0x0001bf16) aid_fill_nsta

0x91f9,	// (0x000160b1) navi_icon_text_pane_g1

0x9205,	// (0x000160bd) navi_icon_text_pane_t1

0xe8ce,	// (0x0001b786) list_set_graphic_pane_t1_ParamLimits

0xe8ce,	// (0x0001b786) list_set_graphic_pane_t1

0x790a,	// (0x000147c2) popup_midp_note_alarm_window_t6_ParamLimits

0x790a,	// (0x000147c2) popup_midp_note_alarm_window_t6

0x791c,	// (0x000147d4) popup_midp_note_alarm_window_t7_ParamLimits

0x791c,	// (0x000147d4) popup_midp_note_alarm_window_t7

0x792e,	// (0x000147e6) popup_midp_note_alarm_window_t8_ParamLimits

0x792e,	// (0x000147e6) popup_midp_note_alarm_window_t8

0x7940,	// (0x000147f8) popup_midp_note_alarm_window_t9_ParamLimits

0x7940,	// (0x000147f8) popup_midp_note_alarm_window_t9

0x7952,	// (0x0001480a) popup_midp_note_alarm_window_t10_ParamLimits

0x7952,	// (0x0001480a) popup_midp_note_alarm_window_t10

0x7964,	// (0x0001481c) popup_midp_note_alarm_window_t11_ParamLimits

0x7964,	// (0x0001481c) popup_midp_note_alarm_window_t11

0x7976,	// (0x0001482e) scroll_pane_cp17_ParamLimits

0x7976,	// (0x0001482e) scroll_pane_cp17

0x30c7,	// (0x0000ff7f) volume_small_pane_cp_g1

0x33bc,	// (0x00010274) volume_small_pane_cp_g2

0x33c5,	// (0x0001027d) volume_small_pane_cp_g3

0x33ce,	// (0x00010286) volume_small_pane_cp_g4

0x33d7,	// (0x0001028f) volume_small_pane_cp_g5

0x33e0,	// (0x00010298) volume_small_pane_cp_g6

0x33e9,	// (0x000102a1) volume_small_pane_cp_g7

0x33f2,	// (0x000102aa) volume_small_pane_cp_g8

0x33fb,	// (0x000102b3) volume_small_pane_cp_g9

0x3404,	// (0x000102bc) volume_small_pane_cp_g10

0x5f2e,	// (0x00012de6) midp_ticker_pane_g1_ParamLimits

0x5f3a,	// (0x00012df2) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001c623) midp_ticker_pane_g_ParamLimits

0x5f46,	// (0x00012dfe) midp_ticker_pane_t1_ParamLimits

0xf082,	// (0x0001bf3a) aid_fill_nsta_2

0x71a7,	// (0x0001405f) list_form2_midp_pane

0x8340,	// (0x000151f8) midp_editing_number_pane_ParamLimits

0x834f,	// (0x00015207) midp_ticker_pane_ParamLimits

0x9217,	// (0x000160cf) form2_midp_field_pane

0x923b,	// (0x000160f3) scroll_pane_cp51

0x925b,	// (0x00016113) form2_midp_button_pane_ParamLimits

0x925b,	// (0x00016113) form2_midp_button_pane

0x926d,	// (0x00016125) form2_midp_content_pane_ParamLimits

0x926d,	// (0x00016125) form2_midp_content_pane

0x9287,	// (0x0001613f) form2_midp_field_choice_group_pane

0x928f,	// (0x00016147) form2_midp_field_pane_g1

0x9297,	// (0x0001614f) form2_midp_field_pane_g2

0x929f,	// (0x00016157) form2_midp_field_pane_g3

0x92a7,	// (0x0001615f) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x0001c9ab) form2_midp_field_pane_g

0x92af,	// (0x00016167) form2_midp_gauge_slider_pane

0x92b7,	// (0x0001616f) form2_midp_gauge_wait_pane

0x92bf,	// (0x00016177) form2_midp_image_pane_ParamLimits

0x92bf,	// (0x00016177) form2_midp_image_pane

0x92da,	// (0x00016192) form2_midp_label_pane_ParamLimits

0x92da,	// (0x00016192) form2_midp_label_pane

0x0625,	// (0x0000d4dd) form2_midp_label_pane_cp_ParamLimits

0x0625,	// (0x0000d4dd) form2_midp_label_pane_cp

0x9314,	// (0x000161cc) form2_midp_string_pane_ParamLimits

0x9314,	// (0x000161cc) form2_midp_string_pane

0x0644,	// (0x0000d4fc) form2_midp_text_pane_ParamLimits

0x0644,	// (0x0000d4fc) form2_midp_text_pane

0x9343,	// (0x000161fb) form2_midp_time_pane

0x9353,	// (0x0001620b) input_focus_pane_cp51_ParamLimits

0x9353,	// (0x0001620b) input_focus_pane_cp51

0x936b,	// (0x00016223) form2_midp_label_pane_t1_ParamLimits

0x936b,	// (0x00016223) form2_midp_label_pane_t1

0x065d,	// (0x0000d515) form2_mdip_text_pane_t1_ParamLimits

0x065d,	// (0x0000d515) form2_mdip_text_pane_t1

0x93cb,	// (0x00016283) form2_midp_time_pane_t1

0x93e6,	// (0x0001629e) form2_midp_gauge_slider_pane_t1

0x0678,	// (0x0000d530) form2_midp_gauge_slider_pane_t2

0x068a,	// (0x0000d542) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x0001c9b4) form2_midp_gauge_slider_pane_t

0x941c,	// (0x000162d4) form2_midp_slider_pane

0x9428,	// (0x000162e0) form2_midp_gauge_wait_pane_t1

0x9436,	// (0x000162ee) form2_midp_wait_pane_ParamLimits

0x9436,	// (0x000162ee) form2_midp_wait_pane

0x069c,	// (0x0000d554) list_single_2graphic_pane_cp4_ParamLimits

0x069c,	// (0x0000d554) list_single_2graphic_pane_cp4

0xf498,	// (0x0001c350) list_single_midp_graphic_pane_cp_ParamLimits

0xf498,	// (0x0001c350) list_single_midp_graphic_pane_cp

0x4126,	// (0x00010fde) list_highlight_pane_cp20

0x9490,	// (0x00016348) list_single_2graphic_pane_g1_cp4

0x9498,	// (0x00016350) list_single_2graphic_pane_g2_cp4

0x94a0,	// (0x00016358) list_single_2graphic_pane_t1_cp4

0x4206,	// (0x000110be) list_highlight_pane_cp21

0x94af,	// (0x00016367) list_single_midp_graphic_pane_g4_cp

0x94be,	// (0x00016376) list_single_midp_graphic_pane_t1_cp

0x06b0,	// (0x0000d568) form2_mdip_string_pane_t1_ParamLimits

0x06b0,	// (0x0000d568) form2_mdip_string_pane_t1

0x4126,	// (0x00010fde) bg_wml_button_pane_cp2

0x411c,	// (0x00010fd4) form2_midp_image_pane_g1

0x4ccf,	// (0x00011b87) list_double_large_graphic_pane_g5_ParamLimits

0x4ccf,	// (0x00011b87) list_double_large_graphic_pane_g5

0x61dd,	// (0x00013095) midp_form_pane_ParamLimits

0x4206,	// (0x000110be) main_apps_wheel_pane_ParamLimits

0xedba,	// (0x0001bc72) popup_preview_window_ParamLimits

0xedba,	// (0x0001bc72) popup_preview_window

0x6745,	// (0x000135fd) popup_touch_info_window_ParamLimits

0x6745,	// (0x000135fd) popup_touch_info_window

0x6763,	// (0x0001361b) popup_touch_menu_window_ParamLimits

0x6763,	// (0x0001361b) popup_touch_menu_window

0x4112,	// (0x00010fca) bg_popup_sub_pane_cp6

0x95cc,	// (0x00016484) list_touch_menu_pane

0x95d4,	// (0x0001648c) list_single_touch_menu_pane_ParamLimits

0x95d4,	// (0x0001648c) list_single_touch_menu_pane

0x95ea,	// (0x000164a2) list_single_touch_menu_pane_t1

0x4206,	// (0x000110be) bg_popup_sub_pane_cp7_ParamLimits

0x4206,	// (0x000110be) bg_popup_sub_pane_cp7

0x95f8,	// (0x000164b0) heading_sub_pane

0x9600,	// (0x000164b8) list_touch_info_pane_ParamLimits

0x9600,	// (0x000164b8) list_touch_info_pane

0x960f,	// (0x000164c7) list_single_touch_info_pane_ParamLimits

0x960f,	// (0x000164c7) list_single_touch_info_pane

0x9621,	// (0x000164d9) list_single_touch_info_pane_t1

0x962f,	// (0x000164e7) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x0001c9c2) list_single_touch_info_pane_t

0x5e5f,	// (0x00012d17) bg_popup_heading_pane_cp

0x963d,	// (0x000164f5) heading_sub_pane_t1

0x6dd3,	// (0x00013c8b) bg_popup_preview_window_pane_cp_ParamLimits

0x6dd3,	// (0x00013c8b) bg_popup_preview_window_pane_cp

0x95f8,	// (0x000164b0) heading_preview_pane

0x9600,	// (0x000164b8) list_preview_pane_ParamLimits

0x9600,	// (0x000164b8) list_preview_pane

0x964b,	// (0x00016503) popup_preview_window_g1

0x960f,	// (0x000164c7) list_single_preview_pane_ParamLimits

0x960f,	// (0x000164c7) list_single_preview_pane

0x9653,	// (0x0001650b) list_single_preview_pane_g1

0x965b,	// (0x00016513) list_single_preview_pane_t1

0x9621,	// (0x000164d9) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x0001c9c7) list_single_preview_pane_t

0x9669,	// (0x00016521) bg_popup_heading_pane_cp2_ParamLimits

0x9669,	// (0x00016521) bg_popup_heading_pane_cp2

0x967f,	// (0x00016537) heading_preview_pane_g1

0x9687,	// (0x0001653f) heading_preview_pane_t1_ParamLimits

0x9687,	// (0x0001653f) heading_preview_pane_t1

0x430c,	// (0x000111c4) soft_indicator_pane_t1_ParamLimits

0x49ff,	// (0x000118b7) scroll_pane_ParamLimits

0x5600,	// (0x000124b8) scroll_sc2_left_pane

0x5609,	// (0x000124c1) scroll_sc2_right_pane

0x5628,	// (0x000124e0) scroll_bg_pane_g1_ParamLimits

0x563d,	// (0x000124f5) scroll_bg_pane_g2_ParamLimits

0x5655,	// (0x0001250d) scroll_bg_pane_g3_ParamLimits

0xf6f6,	// (0x0001c5ae) scroll_bg_pane_g_ParamLimits

0x5628,	// (0x000124e0) scroll_handle_pane_g1_ParamLimits

0x5677,	// (0x0001252f) scroll_handle_pane_g2_ParamLimits

0x5655,	// (0x0001250d) scroll_handle_pane_g3_ParamLimits

0xf6fd,	// (0x0001c5b5) scroll_handle_pane_g_ParamLimits

0x620d,	// (0x000130c5) popup_choice_list_window_ParamLimits

0x620d,	// (0x000130c5) popup_choice_list_window

0x6bbf,	// (0x00013a77) choice_list_pane

0x6c7b,	// (0x00013b33) cell_toolbar_pane_t1

0x6ca3,	// (0x00013b5b) toolbar_button_pane_ParamLimits

0x7e30,	// (0x00014ce8) ai_gene_pane_1_t2_ParamLimits

0x7e30,	// (0x00014ce8) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0001c7d1) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0001c7d1) ai_gene_pane_1_t

0x96a4,	// (0x0001655c) scroll_sc2_left_pane_g1

0x96a4,	// (0x0001655c) scroll_sc2_right_pane_g1

0x61dd,	// (0x00013095) bg_popup_sub_pane_cp10

0x96ae,	// (0x00016566) list_choice_list_pane

0x96c7,	// (0x0001657f) list_single_choice_list_pane_ParamLimits

0x96c7,	// (0x0001657f) list_single_choice_list_pane

0x96da,	// (0x00016592) list_single_choice_list_pane_g1

0x530a,	// (0x000121c2) list_single_choice_list_pane_t1_ParamLimits

0x530a,	// (0x000121c2) list_single_choice_list_pane_t1

0x96e2,	// (0x0001659a) choice_list_pane_g1

0x96ea,	// (0x000165a2) choice_list_pane_t1

0x4112,	// (0x00010fca) input_focus_pane_cp11

0x54e1,	// (0x00012399) title_pane_stacon_g2_ParamLimits

0x54e1,	// (0x00012399) title_pane_stacon_g2

0x0002,

0xf6dc,	// (0x0001c594) title_pane_stacon_g_ParamLimits

0xf6dc,	// (0x0001c594) title_pane_stacon_g

0x5e5f,	// (0x00012d17) cursor_press_pane

0xea85,	// (0x0001b93d) popup_fep_hwr_window_ParamLimits

0xea85,	// (0x0001b93d) popup_fep_hwr_window

0x6333,	// (0x000131eb) popup_fep_vkb_window_ParamLimits

0x6333,	// (0x000131eb) popup_fep_vkb_window

0x96f8,	// (0x000165b0) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x0001c9f0) fep_vkb_side_pane_g_ParamLimits

0x3446,	// (0x000102fe) fep_hwr_candidate_pane_ParamLimits

0x3446,	// (0x000102fe) fep_hwr_candidate_pane

0x3470,	// (0x00010328) fep_hwr_side_pane_ParamLimits

0x3470,	// (0x00010328) fep_hwr_side_pane

0x3490,	// (0x00010348) fep_hwr_top_pane_ParamLimits

0x3490,	// (0x00010348) fep_hwr_top_pane

0x34a8,	// (0x00010360) fep_hwr_write_pane_ParamLimits

0x34a8,	// (0x00010360) fep_hwr_write_pane

0xfb38,	// (0x0001c9f0) fep_vkb_side_pane_g

0x9700,	// (0x000165b8) fep_hwr_top_pane_g1

0x9712,	// (0x000165ca) fep_hwr_top_pane_g2

0x34e2,	// (0x0001039a) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x0001c9cc) fep_hwr_top_pane_g

0x34f7,	// (0x000103af) fep_hwr_top_text_pane

0x57ce,	// (0x00012686) fep_hwr_top_text_pane_g1

0x9748,	// (0x00016600) fep_hwr_top_text_pane_t1

0x35ed,	// (0x000104a5) fep_hwr_candidate_pane_g1

0x999b,	// (0x00016853) fep_vkb_keypad_pane_g3_ParamLimits

0x999b,	// (0x00016853) fep_vkb_keypad_pane_g3

0x99c3,	// (0x0001687b) fep_vkb_keypad_pane_g4_ParamLimits

0x99c3,	// (0x0001687b) fep_vkb_keypad_pane_g4

0x9a32,	// (0x000168ea) fep_vkb_bottom_pane_g2_ParamLimits

0x9a32,	// (0x000168ea) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x0001c9f7) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x0001c9f7) fep_vkb_bottom_pane_g

0x96a4,	// (0x0001655c) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x0001ca01) cell_vkb_side_pane_g

0x9abd,	// (0x00016975) cell_vkb_side_pane_t1

0x9acb,	// (0x00016983) cell_vkb_side_pane_t1_copy1

0x96a4,	// (0x0001655c) bg_fep_vkb_candidate_pane_g2

0x9bf7,	// (0x00016aaf) cell_vkb_candidate_pane_ParamLimits

0x9756,	// (0x0001660e) aid_size_cell_vkb_ParamLimits

0x9756,	// (0x0001660e) aid_size_cell_vkb

0x9bf7,	// (0x00016aaf) cell_vkb_candidate_pane

0x3614,	// (0x000104cc) bg_popup_fep_shadow_pane_g1

0x0781,	// (0x0000d639) fep_vkb_bottom_pane_ParamLimits

0x0781,	// (0x0000d639) fep_vkb_bottom_pane

0x981a,	// (0x000166d2) fep_vkb_candidate_pane_ParamLimits

0x981a,	// (0x000166d2) fep_vkb_candidate_pane

0x07a6,	// (0x0000d65e) fep_vkb_keypad_pane_ParamLimits

0x07a6,	// (0x0000d65e) fep_vkb_keypad_pane

0x07e2,	// (0x0000d69a) fep_vkb_side_pane_ParamLimits

0x07e2,	// (0x0000d69a) fep_vkb_side_pane

0x081e,	// (0x0000d6d6) fep_vkb_top_pane_ParamLimits

0x081e,	// (0x0000d6d6) fep_vkb_top_pane

0x98f4,	// (0x000167ac) fep_vkb_top_pane_g1_ParamLimits

0x98f4,	// (0x000167ac) fep_vkb_top_pane_g1

0x9903,	// (0x000167bb) fep_vkb_top_pane_g2_ParamLimits

0x9903,	// (0x000167bb) fep_vkb_top_pane_g2

0x9912,	// (0x000167ca) fep_vkb_top_pane_g3_ParamLimits

0x9912,	// (0x000167ca) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x0001c9e7) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x0001c9e7) fep_vkb_top_pane_g

0x9930,	// (0x000167e8) fep_vkb_top_text_pane_ParamLimits

0x9930,	// (0x000167e8) fep_vkb_top_text_pane

0x085a,	// (0x0000d712) fep_vkb_side_pane_g1_ParamLimits

0x085a,	// (0x0000d712) fep_vkb_side_pane_g1

0x998a,	// (0x00016842) grid_vkb_side_pane_ParamLimits

0x998a,	// (0x00016842) grid_vkb_side_pane

0x361c,	// (0x000104d4) bg_popup_fep_shadow_pane_g2

0x3625,	// (0x000104dd) bg_popup_fep_shadow_pane_g3

0x362d,	// (0x000104e5) bg_popup_fep_shadow_pane_g4

0x3636,	// (0x000104ee) bg_popup_fep_shadow_pane_g5

0x3640,	// (0x000104f8) bg_popup_fep_shadow_pane_g6

0x3648,	// (0x00010500) bg_popup_fep_shadow_pane_g7

0x513d,	// (0x00011ff5) bg_popup_fep_shadow_pane_g8

0x99e1,	// (0x00016899) grid_vkb_keypad_number_pane_ParamLimits

0x99e1,	// (0x00016899) grid_vkb_keypad_number_pane

0x99f1,	// (0x000168a9) grid_vkb_keypad_pane_ParamLimits

0x99f1,	// (0x000168a9) grid_vkb_keypad_pane

0x9a17,	// (0x000168cf) fep_vkb_bottom_pane_g1_ParamLimits

0x9a17,	// (0x000168cf) fep_vkb_bottom_pane_g1

0x9a40,	// (0x000168f8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x9a40,	// (0x000168f8) grid_vkb_keypad_bottom_left_pane

0x9a55,	// (0x0001690d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x9a55,	// (0x0001690d) grid_vkb_keypad_bottom_right_pane

0x9a6a,	// (0x00016922) fep_vkb_top_text_pane_g1

0x08a1,	// (0x0000d759) fep_vkb_top_text_pane_t1

0x08b3,	// (0x0000d76b) cell_vkb_side_pane_ParamLimits

0x08b3,	// (0x0000d76b) cell_vkb_side_pane

0x96a4,	// (0x0001655c) cell_vkb_side_pane_g1

0x9ad9,	// (0x00016991) cell_vkb_keypad_pane_ParamLimits

0x9ad9,	// (0x00016991) cell_vkb_keypad_pane

0x9b4e,	// (0x00016a06) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x0001ca14) bg_popup_fep_shadow_pane_g

0x365a,	// (0x00010512) cell_hwr_side_pane_g1

0x365a,	// (0x00010512) cell_hwr_side_pane_g2

0x9b58,	// (0x00016a10) cell_vkb_keypad_pane_t1

0x08c9,	// (0x0000d781) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x08c9,	// (0x0000d781) cell_vkb_keypad_bottom_left_pane

0x08de,	// (0x0000d796) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x08de,	// (0x0000d796) cell_vkb_keypad_bottom_right_pane

0x96a4,	// (0x0001655c) cell_vkb_keypad_bottom_left_pane_g1

0x96a4,	// (0x0001655c) cell_vkb_keypad_bottom_right_pane_g1

0x9bbc,	// (0x00016a74) cell_vkb_keypad_number_pane_ParamLimits

0x9bbc,	// (0x00016a74) cell_vkb_keypad_number_pane

0x9bdb,	// (0x00016a93) cell_vkb_keypad_number_pane_g1

0x9be5,	// (0x00016a9d) cell_vkb_keypad_number_pane_g2

0x9bee,	// (0x00016aa6) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x0001ca06) cell_vkb_keypad_number_pane_g

0x9b58,	// (0x00016a10) cell_vkb_keypad_number_pane_t1

0x9c12,	// (0x00016aca) fep_vkb_candidate_pane_g1

0x0001,

0xfb6f,	// (0x0001ca27) cell_hwr_side_pane_g

0x9c2b,	// (0x00016ae3) cell_hwr_side_pane_t1

0x3664,	// (0x0001051c) cell_hwr_side_pane_t1_copy1

0x3672,	// (0x0001052a) cell_hwr_candidate_pane_g1

0x36a1,	// (0x00010559) cell_hwr_candidate_pane_t1

0x96a4,	// (0x0001655c) cell_vkb_candidate_pane_g2

0x9c6f,	// (0x00016b27) cell_vkb_candidate_pane_t1

0x340d,	// (0x000102c5) bg_popup_fep_shadow_pane_ParamLimits

0x340d,	// (0x000102c5) bg_popup_fep_shadow_pane

0x34c2,	// (0x0001037a) bg_fep_hwr_top_pane_g4

0x9724,	// (0x000165dc) bg_hwr_side_pane_g1_ParamLimits

0x9724,	// (0x000165dc) bg_hwr_side_pane_g1

0xccd4,	// (0x00019b8c) cell_hwr_side_pane_ParamLimits

0xccd4,	// (0x00019b8c) cell_hwr_side_pane

0x356e,	// (0x00010426) fep_hwr_write_pane_g1_ParamLimits

0x356e,	// (0x00010426) fep_hwr_write_pane_g1

0x357b,	// (0x00010433) fep_hwr_write_pane_g2_ParamLimits

0x357b,	// (0x00010433) fep_hwr_write_pane_g2

0x3588,	// (0x00010440) fep_hwr_write_pane_g3_ParamLimits

0x3588,	// (0x00010440) fep_hwr_write_pane_g3

0xccf4,	// (0x00019bac) fep_hwr_write_pane_g4_ParamLimits

0xccf4,	// (0x00019bac) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x0001c9d3) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x0001c9d3) fep_hwr_write_pane_g

0x34c2,	// (0x0001037a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x34c2,	// (0x0001037a) bg_fep_hwr_candidate_pane_g2

0x35ab,	// (0x00010463) cell_hwr_candidate_pane_ParamLimits

0x35ab,	// (0x00010463) cell_hwr_candidate_pane

0x35ed,	// (0x000104a5) fep_hwr_candidate_pane_g1_ParamLimits

0x9784,	// (0x0001663c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x9784,	// (0x0001663c) bg_popup_fep_shadow_pane_cp2

0x9922,	// (0x000167da) fep_vkb_top_pane_g4_ParamLimits

0x9922,	// (0x000167da) fep_vkb_top_pane_g4

0x9968,	// (0x00016820) fep_vkb_side_pane_g2_ParamLimits

0x9968,	// (0x00016820) fep_vkb_side_pane_g2

0xe3c3,	// (0x0001b27b) list_setting_pane_t4_ParamLimits

0xe3c3,	// (0x0001b27b) list_setting_pane_t4

0xe43d,	// (0x0001b2f5) list_setting_number_pane_t5_ParamLimits

0xe43d,	// (0x0001b2f5) list_setting_number_pane_t5

0xe747,	// (0x0001b5ff) list_double_heading_pane_cp2_ParamLimits

0xe747,	// (0x0001b5ff) list_double_heading_pane_cp2

0x5013,	// (0x00011ecb) list_double_heading_pane_g1_cp2_ParamLimits

0x5013,	// (0x00011ecb) list_double_heading_pane_g1_cp2

0x501f,	// (0x00011ed7) list_double_heading_pane_g2_cp2_ParamLimits

0x501f,	// (0x00011ed7) list_double_heading_pane_g2_cp2

0x9c7d,	// (0x00016b35) list_double_heading_pane_t1_cp2_ParamLimits

0x9c7d,	// (0x00016b35) list_double_heading_pane_t1_cp2

0x9c93,	// (0x00016b4b) list_double_heading_pane_t2_cp2_ParamLimits

0x9c93,	// (0x00016b4b) list_double_heading_pane_t2_cp2

0x40fa,	// (0x00010fb2) aid_value_unit2

0x27a7,	// (0x0000f65f) popup_preview_fixed_window

0x44a9,	// (0x00011361) bg_popup_preview_window_pane_cp02

0x9ca5,	// (0x00016b5d) list_preview_fixed_pane

0x9ceb,	// (0x00016ba3) list_empty_pane_fp_ParamLimits

0x9ceb,	// (0x00016ba3) list_empty_pane_fp

0x9ceb,	// (0x00016ba3) list_single_cale_day_pane_fp_ParamLimits

0x9ceb,	// (0x00016ba3) list_single_cale_day_pane_fp

0x9ceb,	// (0x00016ba3) list_single_graphic_heading_pane_fp_ParamLimits

0x9ceb,	// (0x00016ba3) list_single_graphic_heading_pane_fp

0x9ceb,	// (0x00016ba3) list_single_graphic_pane_fp_ParamLimits

0x9ceb,	// (0x00016ba3) list_single_graphic_pane_fp

0x9ceb,	// (0x00016ba3) list_single_heading_pane_fp_ParamLimits

0x9ceb,	// (0x00016ba3) list_single_heading_pane_fp

0x9ceb,	// (0x00016ba3) list_single_pane_fp_ParamLimits

0x9ceb,	// (0x00016ba3) list_single_pane_fp

0x9d00,	// (0x00016bb8) list_single_pane_fp_g1_ParamLimits

0x9d00,	// (0x00016bb8) list_single_pane_fp_g1

0x5013,	// (0x00011ecb) list_single_pane_fp_g2_ParamLimits

0x5013,	// (0x00011ecb) list_single_pane_fp_g2

0x501f,	// (0x00011ed7) list_single_pane_fp_g3_ParamLimits

0x501f,	// (0x00011ed7) list_single_pane_fp_g3

0x9d0c,	// (0x00016bc4) list_single_pane_fp_g4_ParamLimits

0x9d0c,	// (0x00016bc4) list_single_pane_fp_g4

0x0003,

0xfb82,	// (0x0001ca3a) list_single_pane_fp_g_ParamLimits

0xfb82,	// (0x0001ca3a) list_single_pane_fp_g

0x9d18,	// (0x00016bd0) list_single_pane_fp_t1_ParamLimits

0x9d18,	// (0x00016bd0) list_single_pane_fp_t1

0x9d2f,	// (0x00016be7) list_single_graphic_pane_fp_g1_ParamLimits

0x9d2f,	// (0x00016be7) list_single_graphic_pane_fp_g1

0x9d00,	// (0x00016bb8) list_single_graphic_pane_fp_g2_ParamLimits

0x9d00,	// (0x00016bb8) list_single_graphic_pane_fp_g2

0x5013,	// (0x00011ecb) list_single_graphic_pane_fp_g3_ParamLimits

0x5013,	// (0x00011ecb) list_single_graphic_pane_fp_g3

0x501f,	// (0x00011ed7) list_single_graphic_pane_fp_g4_ParamLimits

0x501f,	// (0x00011ed7) list_single_graphic_pane_fp_g4

0x9d0c,	// (0x00016bc4) list_single_graphic_pane_fp_g5_ParamLimits

0x9d0c,	// (0x00016bc4) list_single_graphic_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001ca43) list_single_graphic_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001ca43) list_single_graphic_pane_fp_g

0x9d3b,	// (0x00016bf3) list_single_graphic_pane_fp_t1_ParamLimits

0x9d3b,	// (0x00016bf3) list_single_graphic_pane_fp_t1

0x9d2f,	// (0x00016be7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9d2f,	// (0x00016be7) list_single_graphic_heading_pane_fp_g1

0x9d00,	// (0x00016bb8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x9d00,	// (0x00016bb8) list_single_graphic_heading_pane_fp_g2

0x5013,	// (0x00011ecb) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5013,	// (0x00011ecb) list_single_graphic_heading_pane_fp_g3

0x501f,	// (0x00011ed7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x501f,	// (0x00011ed7) list_single_graphic_heading_pane_fp_g4

0x9d0c,	// (0x00016bc4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x9d0c,	// (0x00016bc4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001ca43) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001ca43) list_single_graphic_heading_pane_fp_g

0x9d51,	// (0x00016c09) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9d51,	// (0x00016c09) list_single_graphic_heading_pane_fp_t1

0x9d67,	// (0x00016c1f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9d67,	// (0x00016c1f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb96,	// (0x0001ca4e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb96,	// (0x0001ca4e) list_single_graphic_heading_pane_fp_t

0x9d79,	// (0x00016c31) list_single_cale_day_pane_fp_g1_ParamLimits

0x9d79,	// (0x00016c31) list_single_cale_day_pane_fp_g1

0x9db1,	// (0x00016c69) list_single_cale_day_pane_fp_g2_ParamLimits

0x9db1,	// (0x00016c69) list_single_cale_day_pane_fp_g2

0x9dbd,	// (0x00016c75) list_single_cale_day_pane_fp_g3_ParamLimits

0x9dbd,	// (0x00016c75) list_single_cale_day_pane_fp_g3

0x9de5,	// (0x00016c9d) list_single_cale_day_pane_fp_g4_ParamLimits

0x9de5,	// (0x00016c9d) list_single_cale_day_pane_fp_g4

0x9e09,	// (0x00016cc1) list_single_cale_day_pane_fp_g5_ParamLimits

0x9e09,	// (0x00016cc1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9b,	// (0x0001ca53) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9b,	// (0x0001ca53) list_single_cale_day_pane_fp_g

0x9e2d,	// (0x00016ce5) list_single_cale_day_pane_fp_t1_ParamLimits

0x9e2d,	// (0x00016ce5) list_single_cale_day_pane_fp_t1

0x9e53,	// (0x00016d0b) list_single_cale_day_pane_fp_t2_ParamLimits

0x9e53,	// (0x00016d0b) list_single_cale_day_pane_fp_t2

0x9e6c,	// (0x00016d24) list_single_cale_day_pane_fp_t3_ParamLimits

0x9e6c,	// (0x00016d24) list_single_cale_day_pane_fp_t3

0x0002,

0xfba6,	// (0x0001ca5e) list_single_cale_day_pane_fp_t_ParamLimits

0xfba6,	// (0x0001ca5e) list_single_cale_day_pane_fp_t

0x9d00,	// (0x00016bb8) list_empty_pane_fp_g1_ParamLimits

0x9d00,	// (0x00016bb8) list_empty_pane_fp_g1

0x9e85,	// (0x00016d3d) list_empty_pane_fp_t1

0x9e93,	// (0x00016d4b) list_empty_pane_fp_t2

0x0001,

0xfbad,	// (0x0001ca65) list_empty_pane_fp_t

0x9d00,	// (0x00016bb8) list_single_heading_pane_fp_g1_ParamLimits

0x9d00,	// (0x00016bb8) list_single_heading_pane_fp_g1

0x5013,	// (0x00011ecb) list_single_heading_pane_fp_g2_ParamLimits

0x5013,	// (0x00011ecb) list_single_heading_pane_fp_g2

0x501f,	// (0x00011ed7) list_single_heading_pane_fp_g3_ParamLimits

0x501f,	// (0x00011ed7) list_single_heading_pane_fp_g3

0x0002,

0xfbb2,	// (0x0001ca6a) list_single_heading_pane_fp_g_ParamLimits

0xfbb2,	// (0x0001ca6a) list_single_heading_pane_fp_g

0x9ea1,	// (0x00016d59) list_single_heading_pane_fp_t1_ParamLimits

0x9ea1,	// (0x00016d59) list_single_heading_pane_fp_t1

0x9eb3,	// (0x00016d6b) list_single_heading_pane_fp_t2_ParamLimits

0x9eb3,	// (0x00016d6b) list_single_heading_pane_fp_t2

0x0001,

0xfbb9,	// (0x0001ca71) list_single_heading_pane_fp_t_ParamLimits

0xfbb9,	// (0x0001ca71) list_single_heading_pane_fp_t

0x5378,	// (0x00012230) aid_size_cell_fast

0x4419,	// (0x000112d1) soft_indicator_pane_cp1_t1

0x53b5,	// (0x0001226d) cell_app_pane_cp2_ParamLimits

0x53b5,	// (0x0001226d) cell_app_pane_cp2

0x342f,	// (0x000102e7) fep_hwr_candidate_drop_down_list_pane

0x3607,	// (0x000104bf) fep_hwr_candidate_pane_g3_ParamLimits

0x3607,	// (0x000104bf) fep_hwr_candidate_pane_g3

0x1bba,	// (0x0000ea72) fep_hwr_candidate_pane_g4_ParamLimits

0x1bba,	// (0x0000ea72) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x0001c9e0) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x0001c9e0) fep_hwr_candidate_pane_g

0x9809,	// (0x000166c1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x9809,	// (0x000166c1) fep_vkb_candidate_drop_down_list_pane

0x9c1a,	// (0x00016ad2) fep_vkb_candidate_pane_g3

0x9c22,	// (0x00016ada) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x0001ca0d) fep_vkb_candidate_pane_g

0x3672,	// (0x0001052a) cell_hwr_candidate_pane_g1_ParamLimits

0x3680,	// (0x00010538) cell_hwr_candidate_pane_g3_ParamLimits

0x3680,	// (0x00010538) cell_hwr_candidate_pane_g3

0xbd4b,	// (0x00018c03) cell_hwr_candidate_pane_g4_ParamLimits

0xbd4b,	// (0x00018c03) cell_hwr_candidate_pane_g4

0x0002,

0xfb74,	// (0x0001ca2c) cell_hwr_candidate_pane_g_ParamLimits

0xfb74,	// (0x0001ca2c) cell_hwr_candidate_pane_g

0x9c39,	// (0x00016af1) cell_vkb_candidate_pane_g3_ParamLimits

0x9c39,	// (0x00016af1) cell_vkb_candidate_pane_g3

0x9c54,	// (0x00016b0c) cell_vkb_candidate_pane_g4_ParamLimits

0x9c54,	// (0x00016b0c) cell_vkb_candidate_pane_g4

0x9ec9,	// (0x00016d81) cell_app_pane_cp2_g1_ParamLimits

0x9ec9,	// (0x00016d81) cell_app_pane_cp2_g1

0x9ee7,	// (0x00016d9f) cell_app_pane_cp2_g2_ParamLimits

0x9ee7,	// (0x00016d9f) cell_app_pane_cp2_g2

0x0001,

0xfbbe,	// (0x0001ca76) cell_app_pane_cp2_g_ParamLimits

0xfbbe,	// (0x0001ca76) cell_app_pane_cp2_g

0x9ef3,	// (0x00016dab) cell_app_pane_cp2_t1_ParamLimits

0x9ef3,	// (0x00016dab) cell_app_pane_cp2_t1

0x4fed,	// (0x00011ea5) grid_highlight_pane_cp1_ParamLimits

0x4fed,	// (0x00011ea5) grid_highlight_pane_cp1

0x36bf,	// (0x00010577) cell_hwr_candidate_pane_cp1_ParamLimits

0x36bf,	// (0x00010577) cell_hwr_candidate_pane_cp1

0x3672,	// (0x0001052a) fep_hwr_candidate_drop_down_list_pane_g1

0x36de,	// (0x00010596) fep_hwr_candidate_drop_down_list_pane_g2

0x36eb,	// (0x000105a3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0001ca7b) fep_hwr_candidate_drop_down_list_pane_g

0x36f8,	// (0x000105b0) fep_hwr_candidate_drop_down_list_scroll_pane

0x3701,	// (0x000105b9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3701,	// (0x000105b9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x370e,	// (0x000105c6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x370e,	// (0x000105c6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x371b,	// (0x000105d3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x371b,	// (0x000105d3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x3728,	// (0x000105e0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3728,	// (0x000105e0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x3743,	// (0x000105fb) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x3743,	// (0x000105fb) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x375e,	// (0x00010616) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x375e,	// (0x00010616) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x3779,	// (0x00010631) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3779,	// (0x00010631) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3794,	// (0x0001064c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3794,	// (0x0001064c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0001ca82) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0001ca82) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x9f61,	// (0x00016e19) cell_vkb_candidate_pane_cp1_ParamLimits

0x9f61,	// (0x00016e19) cell_vkb_candidate_pane_cp1

0x9922,	// (0x000167da) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x9922,	// (0x000167da) fep_vkb_candidate_drop_down_list_pane_g1

0x9f05,	// (0x00016dbd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x9f05,	// (0x00016dbd) fep_vkb_candidate_drop_down_list_pane_g2

0x9f12,	// (0x00016dca) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x9f12,	// (0x00016dca) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbdb,	// (0x0001ca93) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbdb,	// (0x0001ca93) fep_vkb_candidate_drop_down_list_pane_g

0x9f81,	// (0x00016e39) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x9f81,	// (0x00016e39) fep_vkb_candidate_drop_down_list_scroll_pane

0x9f8e,	// (0x00016e46) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9f8e,	// (0x00016e46) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x9f9b,	// (0x00016e53) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9f9b,	// (0x00016e53) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x9fa7,	// (0x00016e5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9fa7,	// (0x00016e5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x9f1f,	// (0x00016dd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9f1f,	// (0x00016dd7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x9f40,	// (0x00016df8) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9f40,	// (0x00016df8) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x9fb3,	// (0x00016e6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9fb3,	// (0x00016e6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x9fd4,	// (0x00016e8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9fd4,	// (0x00016e8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9ff5,	// (0x00016ead) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9ff5,	// (0x00016ead) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe2,	// (0x0001ca9a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe2,	// (0x0001ca9a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xdd2d,	// (0x0001abe5) title_pane_g1_ParamLimits

0xdd40,	// (0x0001abf8) title_pane_g2_ParamLimits

0xf566,	// (0x0001c41e) title_pane_g_ParamLimits

0x57be,	// (0x00012676) aid_call2_pane

0x57c6,	// (0x0001267e) aid_call_pane

0x57ce,	// (0x00012686) popup_clock_analogue_window_g1

0x57ce,	// (0x00012686) popup_clock_analogue_window_g2

0x2b10,	// (0x0000f9c8) popup_clock_analogue_window_g3

0x2b19,	// (0x0000f9d1) popup_clock_analogue_window_g4

0x411c,	// (0x00010fd4) popup_clock_analogue_window_g5

0x0004,

0xf70b,	// (0x0001c5c3) popup_clock_analogue_window_g

0x2b21,	// (0x0000f9d9) popup_clock_analogue_window_t1

0x2b2f,	// (0x0000f9e7) clock_digital_number_pane_ParamLimits

0x2b2f,	// (0x0000f9e7) clock_digital_number_pane

0x2b3b,	// (0x0000f9f3) clock_digital_number_pane_cp02_ParamLimits

0x2b3b,	// (0x0000f9f3) clock_digital_number_pane_cp02

0x2b47,	// (0x0000f9ff) clock_digital_number_pane_cp03_ParamLimits

0x2b47,	// (0x0000f9ff) clock_digital_number_pane_cp03

0x2b53,	// (0x0000fa0b) clock_digital_number_pane_cp04_ParamLimits

0x2b53,	// (0x0000fa0b) clock_digital_number_pane_cp04

0x2b5f,	// (0x0000fa17) clock_digital_separator_pane_ParamLimits

0x2b5f,	// (0x0000fa17) clock_digital_separator_pane

0x2b6b,	// (0x0000fa23) popup_clock_digital_window_t1_ParamLimits

0x2b6b,	// (0x0000fa23) popup_clock_digital_window_t1

0x411c,	// (0x00010fd4) clock_digital_number_pane_g1

0x411c,	// (0x00010fd4) clock_digital_number_pane_g2

0x0001,

0xf716,	// (0x0001c5ce) clock_digital_number_pane_g

0x411c,	// (0x00010fd4) clock_digital_separator_pane_g1

0x411c,	// (0x00010fd4) clock_digital_separator_pane_g2

0x0001,

0xf716,	// (0x0001c5ce) clock_digital_separator_pane_g

0xf05e,	// (0x0001bf16) aid_fill_nsta_ParamLimits

0xf194,	// (0x0001c04c) indicator_nsta_pane_ParamLimits

0x6a57,	// (0x0001390f) popup_clock_analogue_window

0x6a57,	// (0x0001390f) popup_clock_digital_window

0x5339,	// (0x000121f1) grid_indicator_nsta_pane_ParamLimits

0x903b,	// (0x00015ef3) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x0001c960) clock_nsta_pane_t

0x2ad4,	// (0x0000f98c) aid_size_max_handle

0xc993,	// (0x0001984b) aid_size_min_handle

0x5e5f,	// (0x00012d17) editor_scroll_pane

0xa010,	// (0x00016ec8) ex_editor_pane

0x52e6,	// (0x0001219e) scroll_pane_cp13

0x4a2b,	// (0x000118e3) scroll_pane_cp14

0x57fd,	// (0x000126b5) scroll_pane_cp36

0xe756,	// (0x0001b60e) list_single_graphic_hl_pane_cp2_ParamLimits

0xe756,	// (0x0001b60e) list_single_graphic_hl_pane_cp2

0x03b3,	// (0x0000d26b) list_single_graphic_hl_pane_ParamLimits

0x03b3,	// (0x0000d26b) list_single_graphic_hl_pane

0xa018,	// (0x00016ed0) aid_size_min_hl_cp1

0xa021,	// (0x00016ed9) list_highlight_pane_cp34_ParamLimits

0xa021,	// (0x00016ed9) list_highlight_pane_cp34

0xa032,	// (0x00016eea) list_single_graphic_hl_pane_g1_ParamLimits

0xa032,	// (0x00016eea) list_single_graphic_hl_pane_g1

0x08f9,	// (0x0000d7b1) list_single_graphic_hl_pane_g2_ParamLimits

0x08f9,	// (0x0000d7b1) list_single_graphic_hl_pane_g2

0x08f9,	// (0x0000d7b1) list_single_graphic_hl_pane_g3_ParamLimits

0x08f9,	// (0x0000d7b1) list_single_graphic_hl_pane_g3

0x5dd0,	// (0x00012c88) list_single_graphic_hl_pane_g4_ParamLimits

0x5dd0,	// (0x00012c88) list_single_graphic_hl_pane_g4

0x0905,	// (0x0000d7bd) list_single_graphic_hl_pane_g5_ParamLimits

0x0905,	// (0x0000d7bd) list_single_graphic_hl_pane_g5

0x0004,

0xfbf3,	// (0x0001caab) list_single_graphic_hl_pane_g_ParamLimits

0xfbf3,	// (0x0001caab) list_single_graphic_hl_pane_g

0x0919,	// (0x0000d7d1) list_single_graphic_hl_pane_t1_ParamLimits

0x0919,	// (0x0000d7d1) list_single_graphic_hl_pane_t1

0xa075,	// (0x00016f2d) aid_size_min_hl_cp2

0xa07e,	// (0x00016f36) list_highlight_pane_cp34_cp2_ParamLimits

0xa07e,	// (0x00016f36) list_highlight_pane_cp34_cp2

0xa032,	// (0x00016eea) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xa032,	// (0x00016eea) list_single_graphic_hl_pane_g1_cp2

0xa08b,	// (0x00016f43) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xa08b,	// (0x00016f43) list_single_graphic_hl_pane_g2_cp2

0xa097,	// (0x00016f4f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xa097,	// (0x00016f4f) list_single_graphic_hl_pane_g3_cp2

0x6c25,	// (0x00013add) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6c25,	// (0x00013add) list_single_graphic_hl_pane_g4_cp2

0xa04b,	// (0x00016f03) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xa04b,	// (0x00016f03) list_single_graphic_hl_pane_g5_cp2

0xc9ea,	// (0x000198a2) control_pane_g4_ParamLimits

0xc9ea,	// (0x000198a2) control_pane_g4

0x61dd,	// (0x00013095) bg_popup_sub_pane_cp10_ParamLimits

0x96ae,	// (0x00016566) list_choice_list_pane_ParamLimits

0x96bd,	// (0x00016575) scroll_pane_cp23

0x44a9,	// (0x00011361) bg_popup_preview_window_pane_cp02_ParamLimits

0x9ca5,	// (0x00016b5d) list_preview_fixed_pane_ParamLimits

0x9cbb,	// (0x00016b73) list_preview_fixed_pane_cp_ParamLimits

0x9cbb,	// (0x00016b73) list_preview_fixed_pane_cp

0x9cc7,	// (0x00016b7f) popup_preview_fixed_window_g1_ParamLimits

0x9cc7,	// (0x00016b7f) popup_preview_fixed_window_g1

0x9cd3,	// (0x00016b8b) popup_preview_fixed_window_g2_ParamLimits

0x9cd3,	// (0x00016b8b) popup_preview_fixed_window_g2

0x0002,

0xfb7b,	// (0x0001ca33) popup_preview_fixed_window_g_ParamLimits

0xfb7b,	// (0x0001ca33) popup_preview_fixed_window_g

0x2a48,	// (0x0000f900) aid_navi_side_left_pane_ParamLimits

0x2a5d,	// (0x0000f915) aid_navi_side_right_pane_ParamLimits

0x2a75,	// (0x0000f92d) navi_icon_pane_stacon_ParamLimits

0x2a89,	// (0x0000f941) navi_navi_pane_stacon_ParamLimits

0x2a75,	// (0x0000f92d) navi_text_pane_stacon_ParamLimits

0x4112,	// (0x00010fca) main_text_info_pane

0xa0bb,	// (0x00016f73) listscroll_text_info_pane

0xa0c3,	// (0x00016f7b) list_text_info_pane_ParamLimits

0xa0c3,	// (0x00016f7b) list_text_info_pane

0xa0d2,	// (0x00016f8a) scroll_pane_cp24_ParamLimits

0xa0d2,	// (0x00016f8a) scroll_pane_cp24

0x092f,	// (0x0000d7e7) list_text_info_pane_t1_ParamLimits

0x092f,	// (0x0000d7e7) list_text_info_pane_t1

0xe9f8,	// (0x0001b8b0) popup_fast_swap2_window_ParamLimits

0xe9f8,	// (0x0001b8b0) popup_fast_swap2_window

0xa121,	// (0x00016fd9) aid_size_cell_fast2

0x4112,	// (0x00010fca) bg_popup_window_pane_cp17

0x71d3,	// (0x0001408b) heading_pane_cp2

0x46f5,	// (0x000115ad) listscroll_fast2_pane

0xa12b,	// (0x00016fe3) grid_fast2_pane

0xa135,	// (0x00016fed) listscroll_fast2_pane_g1

0xa13d,	// (0x00016ff5) listscroll_fast2_pane_g2

0x0001,

0xfbfe,	// (0x0001cab6) listscroll_fast2_pane_g

0x52e6,	// (0x0001219e) scroll_pane_cp26

0xa147,	// (0x00016fff) cell_fast2_pane_ParamLimits

0xa147,	// (0x00016fff) cell_fast2_pane

0xa15c,	// (0x00017014) cell_fast2_pane_g1

0xa165,	// (0x0001701d) cell_fast2_pane_g2

0xa16e,	// (0x00017026) cell_fast2_pane_g3

0x0002,

0xfc03,	// (0x0001cabb) cell_fast2_pane_g

0x47e8,	// (0x000116a0) grid_highlight_pane_cp9

0x47fd,	// (0x000116b5) main_eswt_pane_ParamLimits

0x47fd,	// (0x000116b5) main_eswt_pane

0xa0e7,	// (0x00016f9f) list_single_text_info_pane

0xa176,	// (0x0001702e) eswt_ctrl_button_pane

0xa176,	// (0x0001702e) eswt_ctrl_canvas_pane

0xa17e,	// (0x00017036) eswt_ctrl_combo_pane

0xa176,	// (0x0001702e) eswt_ctrl_default_pane

0xa176,	// (0x0001702e) eswt_ctrl_label_pane

0xa186,	// (0x0001703e) eswt_ctrl_wait_pane

0xa18e,	// (0x00017046) eswt_shell_pane

0x4112,	// (0x00010fca) listscroll_eswt_app_pane

0xa1ae,	// (0x00017066) popup_eswt_tasktip_window_ParamLimits

0xa1ae,	// (0x00017066) popup_eswt_tasktip_window

0x6dd3,	// (0x00013c8b) bg_popup_window_pane_cp18

0xa1bf,	// (0x00017077) eswt_control_pane_g1_ParamLimits

0xa1bf,	// (0x00017077) eswt_control_pane_g1

0xa1cc,	// (0x00017084) eswt_control_pane_g2_ParamLimits

0xa1cc,	// (0x00017084) eswt_control_pane_g2

0xa1d9,	// (0x00017091) eswt_control_pane_g3_ParamLimits

0xa1d9,	// (0x00017091) eswt_control_pane_g3

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_ParamLimits

0xa1e6,	// (0x0001709e) eswt_control_pane_g4

0x0003,

0xfc0a,	// (0x0001cac2) eswt_control_pane_g_ParamLimits

0xfc0a,	// (0x0001cac2) eswt_control_pane_g

0x4fed,	// (0x00011ea5) bg_button_pane_ParamLimits

0x4fed,	// (0x00011ea5) bg_button_pane

0x47fd,	// (0x000116b5) common_borders_pane_copy2_ParamLimits

0x47fd,	// (0x000116b5) common_borders_pane_copy2

0xa1f3,	// (0x000170ab) control_button_pane_g1_ParamLimits

0xa1f3,	// (0x000170ab) control_button_pane_g1

0xa1ff,	// (0x000170b7) control_button_pane_g2_ParamLimits

0xa1ff,	// (0x000170b7) control_button_pane_g2

0xa20b,	// (0x000170c3) control_button_pane_g3_ParamLimits

0xa20b,	// (0x000170c3) control_button_pane_g3

0x0002,

0xfc13,	// (0x0001cacb) control_button_pane_g_ParamLimits

0xfc13,	// (0x0001cacb) control_button_pane_g

0xa21f,	// (0x000170d7) control_button_pane_t1

0xa22d,	// (0x000170e5) control_button_pane_t2

0x0001,

0xfc1a,	// (0x0001cad2) control_button_pane_t

0x6caf,	// (0x00013b67) bg_button_pane_g1

0x6cbf,	// (0x00013b77) bg_button_pane_g2

0x6cb7,	// (0x00013b6f) bg_button_pane_g3

0x6ccf,	// (0x00013b87) bg_button_pane_g4

0x6cc7,	// (0x00013b7f) bg_button_pane_g5

0x6cd7,	// (0x00013b8f) bg_button_pane_g6

0x6cdf,	// (0x00013b97) bg_button_pane_g7

0x6cef,	// (0x00013ba7) bg_button_pane_g8

0x6ce7,	// (0x00013b9f) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0001c725) bg_button_pane_g

0x9669,	// (0x00016521) common_borders_pane_ParamLimits

0x9669,	// (0x00016521) common_borders_pane

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy1_ParamLimits

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy1

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy1_ParamLimits

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy1

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy1_ParamLimits

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy1

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy1_ParamLimits

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy1

0x96a4,	// (0x0001655c) bg_eswt_ctrl_canvas_pane_g1

0x9669,	// (0x00016521) common_borders_pane_cp2_ParamLimits

0x9669,	// (0x00016521) common_borders_pane_cp2

0x9669,	// (0x00016521) common_borders_pane_cp3_ParamLimits

0x9669,	// (0x00016521) common_borders_pane_cp3

0xa23b,	// (0x000170f3) separator_horizontal_pane

0xa243,	// (0x000170fb) separator_vertical_pane

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy2_ParamLimits

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy2

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy2_ParamLimits

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy2

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy2_ParamLimits

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy2

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy2_ParamLimits

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy2

0x4112,	// (0x00010fca) common_borders_pane_cp4

0xa24c,	// (0x00017104) separator_horizontal_pane_g1

0xa255,	// (0x0001710d) separator_horizontal_pane_g2

0xa25e,	// (0x00017116) separator_horizontal_pane_g3

0x0002,

0xfc1f,	// (0x0001cad7) separator_horizontal_pane_g

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy3_ParamLimits

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy3

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy3_ParamLimits

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy3

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy3_ParamLimits

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy3

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy3_ParamLimits

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy3

0x4112,	// (0x00010fca) common_borders_pane_cp5

0xa267,	// (0x0001711f) separator_vertical_pane_g1

0xa270,	// (0x00017128) separator_vertical_pane_g2

0xa279,	// (0x00017131) separator_vertical_pane_g3

0x0002,

0xfc26,	// (0x0001cade) separator_vertical_pane_g

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy4_ParamLimits

0xa1bf,	// (0x00017077) eswt_control_pane_g1_copy4

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy4_ParamLimits

0xa1cc,	// (0x00017084) eswt_control_pane_g2_copy4

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy4_ParamLimits

0xa1d9,	// (0x00017091) eswt_control_pane_g3_copy4

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy4_ParamLimits

0xa1e6,	// (0x0001709e) eswt_control_pane_g4_copy4

0x094a,	// (0x0000d802) eswt_ctrl_combo_button_pane

0x0952,	// (0x0000d80a) eswt_ctrl_input_pane

0x095a,	// (0x0000d812) popup_choice_list_window_cp70

0x0962,	// (0x0000d81a) eswt_ctrl_input_pane_t1

0x4112,	// (0x00010fca) input_focus_pane_cp70

0x9669,	// (0x00016521) bg_button_pane_cp70_ParamLimits

0x9669,	// (0x00016521) bg_button_pane_cp70

0x0970,	// (0x0000d828) eswt_ctrl_combo_button_pane_g1

0xa2b0,	// (0x00017168) wait_bar_pane_cp70

0x6dd3,	// (0x00013c8b) bg_popup_window_pane_cp70_ParamLimits

0x6dd3,	// (0x00013c8b) bg_popup_window_pane_cp70

0xa2b8,	// (0x00017170) popup_eswt_tasktip_window_t1

0xa2ce,	// (0x00017186) wait_bar_pane_cp71_ParamLimits

0xa2ce,	// (0x00017186) wait_bar_pane_cp71

0xa2da,	// (0x00017192) grid_eswt_app_pane

0x5600,	// (0x000124b8) scroll_pane_cp70

0x0978,	// (0x0000d830) cell_eswt_app_pane_ParamLimits

0x0978,	// (0x0000d830) cell_eswt_app_pane

0x09a2,	// (0x0000d85a) cell_eswt_app_pane_g1_ParamLimits

0x09a2,	// (0x0000d85a) cell_eswt_app_pane_g1

0x09d1,	// (0x0000d889) cell_eswt_app_pane_g2_ParamLimits

0x09d1,	// (0x0000d889) cell_eswt_app_pane_g2

0x0001,

0xfc2d,	// (0x0001cae5) cell_eswt_app_pane_g_ParamLimits

0xfc2d,	// (0x0001cae5) cell_eswt_app_pane_g

0x09fa,	// (0x0000d8b2) cell_eswt_app_pane_t1_ParamLimits

0x09fa,	// (0x0000d8b2) cell_eswt_app_pane_t1

0xa39d,	// (0x00017255) grid_highlight_pane_cp70_ParamLimits

0xa39d,	// (0x00017255) grid_highlight_pane_cp70

0x5d34,	// (0x00012bec) set_content_pane_g1

0x60ff,	// (0x00012fb7) status_small_volume_pane

0x37af,	// (0x00010667) status_small_volume_pane_g1

0x37b7,	// (0x0001066f) volume_small2_pane

0x37c0,	// (0x00010678) volume_small2_pane_g1

0x37c9,	// (0x00010681) volume_small2_pane_g2

0x37d2,	// (0x0001068a) volume_small2_pane_g3

0x37db,	// (0x00010693) volume_small2_pane_g4

0x37e4,	// (0x0001069c) volume_small2_pane_g5

0x37ed,	// (0x000106a5) volume_small2_pane_g6

0x37f6,	// (0x000106ae) volume_small2_pane_g7

0x37ff,	// (0x000106b7) volume_small2_pane_g8

0x3808,	// (0x000106c0) volume_small2_pane_g9

0x3811,	// (0x000106c9) volume_small2_pane_g10

0x0009,

0xfc32,	// (0x0001caea) volume_small2_pane_g

0x9a6a,	// (0x00016922) fep_vkb_top_text_pane_g1_ParamLimits

0x08a1,	// (0x0000d759) fep_vkb_top_text_pane_t1_ParamLimits

0x9cdf,	// (0x00016b97) popup_preview_fixed_window_g3_ParamLimits

0x9cdf,	// (0x00016b97) popup_preview_fixed_window_g3

0xeff1,	// (0x0001bea9) popup_toolbar_trans_pane

0x020b,	// (0x0000d0c3) aid_height_set_list_ParamLimits

0x8186,	// (0x0001503e) aid_size_parent_ParamLimits

0x61dd,	// (0x00013095) list_highlight_pane_cp2_ParamLimits

0x5d34,	// (0x00012bec) set_content_pane_g1_ParamLimits

0x03c4,	// (0x0000d27c) list_single_image_pane_ParamLimits

0x03c4,	// (0x0000d27c) list_single_image_pane

0x0a2c,	// (0x0000d8e4) aid_size_cell_image_ParamLimits

0x0a2c,	// (0x0000d8e4) aid_size_cell_image

0x0a39,	// (0x0000d8f1) grid_single_image_pane_ParamLimits

0x0a39,	// (0x0000d8f1) grid_single_image_pane

0x4c50,	// (0x00011b08) list_single_image_pane_g1_ParamLimits

0x4c50,	// (0x00011b08) list_single_image_pane_g1

0xa3c4,	// (0x0001727c) list_single_image_pane_g2_ParamLimits

0xa3c4,	// (0x0001727c) list_single_image_pane_g2

0x0001,

0xfc47,	// (0x0001caff) list_single_image_pane_g_ParamLimits

0xfc47,	// (0x0001caff) list_single_image_pane_g

0x4b87,	// (0x00011a3f) list_single_image_pane_t1_ParamLimits

0x4b87,	// (0x00011a3f) list_single_image_pane_t1

0x0a47,	// (0x0000d8ff) cell_image_list_pane_ParamLimits

0x0a47,	// (0x0000d8ff) cell_image_list_pane

0x0a5d,	// (0x0000d915) cell_image_list_pane_g1

0x0a66,	// (0x0000d91e) cell_image_list_pane_g2

0x0001,

0xfc4c,	// (0x0001cb04) cell_image_list_pane_g

0xa3fd,	// (0x000172b5) aid_size_cell_tb_trans_pane

0x4fed,	// (0x00011ea5) bg_tb_trans_pane

0xa40f,	// (0x000172c7) grid_tb_trans_pane

0x6caf,	// (0x00013b67) bg_tb_trans_pane_g1

0x6cbf,	// (0x00013b77) bg_tb_trans_pane_g2

0x6cb7,	// (0x00013b6f) bg_tb_trans_pane_g3

0x6ccf,	// (0x00013b87) bg_tb_trans_pane_g4

0x6cc7,	// (0x00013b7f) bg_tb_trans_pane_g5

0x6cef,	// (0x00013ba7) bg_tb_trans_pane_g6

0x6ce7,	// (0x00013b9f) bg_tb_trans_pane_g7

0x6cd7,	// (0x00013b8f) bg_tb_trans_pane_g8

0x6cdf,	// (0x00013b97) bg_tb_trans_pane_g9

0x0008,

0xfc51,	// (0x0001cb09) bg_tb_trans_pane_g

0xa423,	// (0x000172db) cell_toolbar_trans_pane_ParamLimits

0xa423,	// (0x000172db) cell_toolbar_trans_pane

0x96a4,	// (0x0001655c) cell_toolbar_trans_pane_g1

0x0609,	// (0x0000d4c1) list_form2_midp_pane_t1

0x0617,	// (0x0000d4cf) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x0001c9a6) list_form2_midp_pane_t

0x923b,	// (0x000160f3) scroll_pane_cp51_ParamLimits

0x9446,	// (0x000162fe) form2_midp_wait_pane_g1

0x944f,	// (0x00016307) form2_midp_wait_pane_g2

0x9458,	// (0x00016310) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x0001c9bb) form2_midp_wait_pane_g

0x4206,	// (0x000110be) list_highlight_pane_cp21_ParamLimits

0x94af,	// (0x00016367) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x94be,	// (0x00016376) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x838c,	// (0x00015244) list_single_2graphic_im_pane_ParamLimits

0x838c,	// (0x00015244) list_single_2graphic_im_pane

0x0a6f,	// (0x0000d927) list_single_2graphic_im_pane_g1_ParamLimits

0x0a6f,	// (0x0000d927) list_single_2graphic_im_pane_g1

0x0a80,	// (0x0000d938) list_single_2graphic_im_pane_g2_ParamLimits

0x0a80,	// (0x0000d938) list_single_2graphic_im_pane_g2

0x0a8c,	// (0x0000d944) list_single_2graphic_im_pane_g3_ParamLimits

0x0a8c,	// (0x0000d944) list_single_2graphic_im_pane_g3

0x0003,

0xfc64,	// (0x0001cb1c) list_single_2graphic_im_pane_g_ParamLimits

0xfc64,	// (0x0001cb1c) list_single_2graphic_im_pane_g

0x0aa0,	// (0x0000d958) list_single_2graphic_im_pane_t1_ParamLimits

0x0aa0,	// (0x0000d958) list_single_2graphic_im_pane_t1

0x9ceb,	// (0x00016ba3) list_single_graphic_2heading_pane_fp_ParamLimits

0x9ceb,	// (0x00016ba3) list_single_graphic_2heading_pane_fp

0x9d2f,	// (0x00016be7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9d2f,	// (0x00016be7) list_single_graphic_2heading_pane_fp_g1

0x9d00,	// (0x00016bb8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x9d00,	// (0x00016bb8) list_single_graphic_2heading_pane_fp_g2

0x5013,	// (0x00011ecb) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5013,	// (0x00011ecb) list_single_graphic_2heading_pane_fp_g3

0x501f,	// (0x00011ed7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x501f,	// (0x00011ed7) list_single_graphic_2heading_pane_fp_g4

0x9d0c,	// (0x00016bc4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x9d0c,	// (0x00016bc4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8b,	// (0x0001ca43) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8b,	// (0x0001ca43) list_single_graphic_2heading_pane_fp_g

0xa4b7,	// (0x0001736f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xa4b7,	// (0x0001736f) list_single_graphic_2heading_pane_fp_t1

0x9d67,	// (0x00016c1f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9d67,	// (0x00016c1f) list_single_graphic_2heading_pane_fp_t2

0xa4cd,	// (0x00017385) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xa4cd,	// (0x00017385) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6d,	// (0x0001cb25) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6d,	// (0x0001cb25) list_single_graphic_2heading_pane_fp_t

0x9730,	// (0x000165e8) fep_hwr_write_pane_g5_ParamLimits

0x9730,	// (0x000165e8) fep_hwr_write_pane_g5

0x973c,	// (0x000165f4) fep_hwr_write_pane_g6_ParamLimits

0x973c,	// (0x000165f4) fep_hwr_write_pane_g6

0xa18e,	// (0x00017046) eswt_shell_pane_ParamLimits

0x6dd3,	// (0x00013c8b) bg_popup_window_pane_cp18_ParamLimits

0x80a6,	// (0x00014f5e) heading_pane_cp70

0xa2b8,	// (0x00017170) popup_eswt_tasktip_window_t1_ParamLimits

0xf0b9,	// (0x0001bf71) aid_touch_tab_arrow_left

0xf0cf,	// (0x0001bf87) aid_touch_tab_arrow_right

0xdd58,	// (0x0001ac10) title_pane_g3_ParamLimits

0xdd58,	// (0x0001ac10) title_pane_g3

0x4ecc,	// (0x00011d84) set_value_pane_g1

0xeff1,	// (0x0001bea9) popup_toolbar_trans_pane_ParamLimits

0xa3fd,	// (0x000172b5) aid_size_cell_tb_trans_pane_ParamLimits

0x4fed,	// (0x00011ea5) bg_tb_trans_pane_ParamLimits

0xa40f,	// (0x000172c7) grid_tb_trans_pane_ParamLimits

0x44a9,	// (0x00011361) cont_note_pane_ParamLimits

0x44a9,	// (0x00011361) cont_note_pane

0x47fd,	// (0x000116b5) cont_snote2_single_text_pane_ParamLimits

0x47fd,	// (0x000116b5) cont_snote2_single_text_pane

0x47fd,	// (0x000116b5) cont_snote2_single_graphic_pane_ParamLimits

0x47fd,	// (0x000116b5) cont_snote2_single_graphic_pane

0x73ee,	// (0x000142a6) cont_note_wait_pane_ParamLimits

0x73ee,	// (0x000142a6) cont_note_wait_pane

0x73ee,	// (0x000142a6) cont_note_image_pane_ParamLimits

0x73ee,	// (0x000142a6) cont_note_image_pane

0xa4e3,	// (0x0001739b) popup_note2_window_g1_ParamLimits

0xa4e3,	// (0x0001739b) popup_note2_window_g1

0xa514,	// (0x000173cc) popup_note2_window_t1_ParamLimits

0xa514,	// (0x000173cc) popup_note2_window_t1

0xa559,	// (0x00017411) popup_note2_window_t2_ParamLimits

0xa559,	// (0x00017411) popup_note2_window_t2

0xa59e,	// (0x00017456) popup_note2_window_t3_ParamLimits

0xa59e,	// (0x00017456) popup_note2_window_t3

0xa5e3,	// (0x0001749b) popup_note2_window_t4_ParamLimits

0xa5e3,	// (0x0001749b) popup_note2_window_t4

0x452d,	// (0x000113e5) popup_note2_window_t5_ParamLimits

0x452d,	// (0x000113e5) popup_note2_window_t5

0x0004,

0xfc79,	// (0x0001cb31) popup_note2_window_t_ParamLimits

0xfc79,	// (0x0001cb31) popup_note2_window_t

0xa612,	// (0x000174ca) popup_note2_image_window_g1_ParamLimits

0xa612,	// (0x000174ca) popup_note2_image_window_g1

0xa61e,	// (0x000174d6) popup_note2_image_window_g2_ParamLimits

0xa61e,	// (0x000174d6) popup_note2_image_window_g2

0x0001,

0xfc84,	// (0x0001cb3c) popup_note2_image_window_g_ParamLimits

0xfc84,	// (0x0001cb3c) popup_note2_image_window_g

0xa630,	// (0x000174e8) popup_note2_image_window_t1_ParamLimits

0xa630,	// (0x000174e8) popup_note2_image_window_t1

0xa648,	// (0x00017500) popup_note2_image_window_t2_ParamLimits

0xa648,	// (0x00017500) popup_note2_image_window_t2

0xa660,	// (0x00017518) popup_note2_image_window_t3_ParamLimits

0xa660,	// (0x00017518) popup_note2_image_window_t3

0x0002,

0xfc89,	// (0x0001cb41) popup_note2_image_window_t_ParamLimits

0xfc89,	// (0x0001cb41) popup_note2_image_window_t

0x73fc,	// (0x000142b4) popup_note2_wait_window_g1_ParamLimits

0x73fc,	// (0x000142b4) popup_note2_wait_window_g1

0xa67c,	// (0x00017534) popup_note2_wait_window_g2_ParamLimits

0xa67c,	// (0x00017534) popup_note2_wait_window_g2

0x7414,	// (0x000142cc) popup_note2_wait_window_g3_ParamLimits

0x7414,	// (0x000142cc) popup_note2_wait_window_g3

0x0002,

0xfc90,	// (0x0001cb48) popup_note2_wait_window_g_ParamLimits

0xfc90,	// (0x0001cb48) popup_note2_wait_window_g

0xa688,	// (0x00017540) popup_note2_wait_window_t1_ParamLimits

0xa688,	// (0x00017540) popup_note2_wait_window_t1

0xa6a6,	// (0x0001755e) popup_note2_wait_window_t2_ParamLimits

0xa6a6,	// (0x0001755e) popup_note2_wait_window_t2

0xa6c4,	// (0x0001757c) popup_note2_wait_window_t3_ParamLimits

0xa6c4,	// (0x0001757c) popup_note2_wait_window_t3

0xa6d6,	// (0x0001758e) popup_note2_wait_window_t4_ParamLimits

0xa6d6,	// (0x0001758e) popup_note2_wait_window_t4

0x0003,

0xfc97,	// (0x0001cb4f) popup_note2_wait_window_t_ParamLimits

0xfc97,	// (0x0001cb4f) popup_note2_wait_window_t

0xa6e8,	// (0x000175a0) wait_bar2_pane_ParamLimits

0xa6e8,	// (0x000175a0) wait_bar2_pane

0xa700,	// (0x000175b8) popup_snote2_single_text_window_g1_ParamLimits

0xa700,	// (0x000175b8) popup_snote2_single_text_window_g1

0xa728,	// (0x000175e0) popup_snote2_single_text_window_t1_ParamLimits

0xa728,	// (0x000175e0) popup_snote2_single_text_window_t1

0xa774,	// (0x0001762c) popup_snote2_single_text_window_t2_ParamLimits

0xa774,	// (0x0001762c) popup_snote2_single_text_window_t2

0xa7c0,	// (0x00017678) popup_snote2_single_text_window_t3_ParamLimits

0xa7c0,	// (0x00017678) popup_snote2_single_text_window_t3

0xa801,	// (0x000176b9) popup_snote2_single_text_window_t4_ParamLimits

0xa801,	// (0x000176b9) popup_snote2_single_text_window_t4

0xa837,	// (0x000176ef) popup_snote2_single_text_window_t5_ParamLimits

0xa837,	// (0x000176ef) popup_snote2_single_text_window_t5

0x0004,

0xfca0,	// (0x0001cb58) popup_snote2_single_text_window_t_ParamLimits

0xfca0,	// (0x0001cb58) popup_snote2_single_text_window_t

0xa862,	// (0x0001771a) popup_snote2_single_graphic_window_g1_ParamLimits

0xa862,	// (0x0001771a) popup_snote2_single_graphic_window_g1

0xa88a,	// (0x00017742) popup_snote2_single_graphic_window_g2_ParamLimits

0xa88a,	// (0x00017742) popup_snote2_single_graphic_window_g2

0x0001,

0xfcab,	// (0x0001cb63) popup_snote2_single_graphic_window_g_ParamLimits

0xfcab,	// (0x0001cb63) popup_snote2_single_graphic_window_g

0xa8b2,	// (0x0001776a) popup_snote2_single_graphic_window_t1_ParamLimits

0xa8b2,	// (0x0001776a) popup_snote2_single_graphic_window_t1

0xa8fe,	// (0x000177b6) popup_snote2_single_graphic_window_t2_ParamLimits

0xa8fe,	// (0x000177b6) popup_snote2_single_graphic_window_t2

0xa7c0,	// (0x00017678) popup_snote2_single_graphic_window_t3_ParamLimits

0xa7c0,	// (0x00017678) popup_snote2_single_graphic_window_t3

0xa801,	// (0x000176b9) popup_snote2_single_graphic_window_t4_ParamLimits

0xa801,	// (0x000176b9) popup_snote2_single_graphic_window_t4

0xa837,	// (0x000176ef) popup_snote2_single_graphic_window_t5_ParamLimits

0xa837,	// (0x000176ef) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb0,	// (0x0001cb68) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb0,	// (0x0001cb68) popup_snote2_single_graphic_window_t

0x90fe,	// (0x00015fb6) clock_nsta_pane_cp2_t1

0x90fe,	// (0x00015fb6) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x0001c97c) clock_nsta_pane_cp2_t

0x5007,	// (0x00011ebf) form_field_data_wide_pane_g1_ParamLimits

0x5013,	// (0x00011ecb) form_field_data_wide_pane_g2_ParamLimits

0x5013,	// (0x00011ecb) form_field_data_wide_pane_g2

0x501f,	// (0x00011ed7) form_field_data_wide_pane_g3_ParamLimits

0x501f,	// (0x00011ed7) form_field_data_wide_pane_g3

0x0002,

0xf68e,	// (0x0001c546) form_field_data_wide_pane_g_ParamLimits

0xf68e,	// (0x0001c546) form_field_data_wide_pane_g

0x0542,	// (0x0000d3fa) grid_touch_3_pane_ParamLimits

0x0542,	// (0x0000d3fa) grid_touch_3_pane

0x0ad1,	// (0x0000d989) cell_touch_3_pane_ParamLimits

0x0ad1,	// (0x0000d989) cell_touch_3_pane

0x96a4,	// (0x0001655c) cell_touch_3_pane_g1

0x96a4,	// (0x0001655c) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x0001ca01) cell_touch_3_pane_g

0x455f,	// (0x00011417) cont_query_data_pane

0x4567,	// (0x0001141f) cont_query_data_pane_cp1

0xa978,	// (0x00017830) button_value_adjust_pane_cp7

0xa980,	// (0x00017838) query_popup_pane_cp3

0x58b8,	// (0x00012770) bg_popup_sub_pane_cp22_ParamLimits

0x2b8a,	// (0x0000fa42) navi_navi_volume_pane_cp2

0x2ba5,	// (0x0000fa5d) popup_side_volume_key_window_g2

0x2bb4,	// (0x0000fa6c) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001c5dc) popup_side_volume_key_window_g

0x2bd1,	// (0x0000fa89) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001c5e3) popup_side_volume_key_window_t

0x5bfe,	// (0x00012ab6) popup_side_volume_key_window_ParamLimits

0xe1e0,	// (0x0001b098) list_double_graphic_pane_g4_ParamLimits

0xe1e0,	// (0x0001b098) list_double_graphic_pane_g4

0x03a0,	// (0x0000d258) list_single_2heading_msg_pane_ParamLimits

0x03a0,	// (0x0000d258) list_single_2heading_msg_pane

0x0b1b,	// (0x0000d9d3) list_single_2heading_msg_pane_g1_ParamLimits

0x0b1b,	// (0x0000d9d3) list_single_2heading_msg_pane_g1

0x0b27,	// (0x0000d9df) list_single_2heading_msg_pane_g2_ParamLimits

0x0b27,	// (0x0000d9df) list_single_2heading_msg_pane_g2

0x0b3a,	// (0x0000d9f2) list_single_2heading_msg_pane_g3_ParamLimits

0x0b3a,	// (0x0000d9f2) list_single_2heading_msg_pane_g3

0x0b46,	// (0x0000d9fe) list_single_2heading_msg_pane_g4_ParamLimits

0x0b46,	// (0x0000d9fe) list_single_2heading_msg_pane_g4

0x0003,

0xfcbb,	// (0x0001cb73) list_single_2heading_msg_pane_g_ParamLimits

0xfcbb,	// (0x0001cb73) list_single_2heading_msg_pane_g

0x0b5e,	// (0x0000da16) list_single_2heading_msg_pane_t1_ParamLimits

0x0b5e,	// (0x0000da16) list_single_2heading_msg_pane_t1

0x0b86,	// (0x0000da3e) list_single_2heading_msg_pane_t2_ParamLimits

0x0b86,	// (0x0000da3e) list_single_2heading_msg_pane_t2

0x0bf1,	// (0x0000daa9) list_single_2heading_msg_pane_t3_ParamLimits

0x0bf1,	// (0x0000daa9) list_single_2heading_msg_pane_t3

0xaa6f,	// (0x00017927) list_single_2heading_msg_pane_t4_ParamLimits

0xaa6f,	// (0x00017927) list_single_2heading_msg_pane_t4

0x0003,

0xfcc4,	// (0x0001cb7c) list_single_2heading_msg_pane_t_ParamLimits

0xfcc4,	// (0x0001cb7c) list_single_2heading_msg_pane_t

0x415a,	// (0x00011012) title_pane_g4_ParamLimits

0x415a,	// (0x00011012) title_pane_g4

0x2998,	// (0x0000f850) title_pane_stacon_g3_ParamLimits

0x2998,	// (0x0000f850) title_pane_stacon_g3

0xa47a,	// (0x00017332) list_single_2graphic_im_pane_g4_ParamLimits

0xa47a,	// (0x00017332) list_single_2graphic_im_pane_g4

0x7e4d,	// (0x00014d05) popup_side_volume_key_window_cp

0x8753,	// (0x0001560b) main_idle_act2_pane_t1

0x2fb3,	// (0x0000fe6b) toolbar_button_pane_g10

0xe0c5,	// (0x0001af7d) popup_toolbar_window_cp1

0x90ef,	// (0x00015fa7) clock_nsta_pane_cp_t1

0x90ef,	// (0x00015fa7) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x0001c977) clock_nsta_pane_cp_t

0x2b8a,	// (0x0000fa42) navi_navi_volume_pane_cp2_ParamLimits

0x2b99,	// (0x0000fa51) popup_side_volume_key_window_g1_ParamLimits

0x2ba5,	// (0x0000fa5d) popup_side_volume_key_window_g2_ParamLimits

0x2bb4,	// (0x0000fa6c) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001c5dc) popup_side_volume_key_window_g_ParamLimits

0x341b,	// (0x000102d3) fep_hwr_aid_pane

0x34c2,	// (0x0001037a) bg_fep_hwr_top_pane_g4_ParamLimits

0x9700,	// (0x000165b8) fep_hwr_top_pane_g1_ParamLimits

0x9712,	// (0x000165ca) fep_hwr_top_pane_g2_ParamLimits

0x34e2,	// (0x0001039a) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x0001c9cc) fep_hwr_top_pane_g_ParamLimits

0x34f7,	// (0x000103af) fep_hwr_top_text_pane_ParamLimits

0x7c10,	// (0x00014ac8) aid_touch_tab_arrow_arrow_2

0x7c19,	// (0x00014ad1) aid_touch_tab_arrow_left_2

0x342f,	// (0x000102e7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3466,	// (0x0001031e) fep_hwr_prediction_pane

0x9872,	// (0x0001672a) fep_vkb_prediction_pane

0x0881,	// (0x0000d739) fep_vkb_side_pane_g3_ParamLimits

0x0881,	// (0x0000d739) fep_vkb_side_pane_g3

0x3672,	// (0x0001052a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x36de,	// (0x00010596) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x36eb,	// (0x000105a3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc3,	// (0x0001ca7b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x381a,	// (0x000106d2) fep_hwr_prediction_pane_g1

0x3824,	// (0x000106dc) fep_hwr_prediction_pane_g2

0x382c,	// (0x000106e4) fep_hwr_prediction_pane_g3

0x3834,	// (0x000106ec) fep_hwr_prediction_pane_g4

0x0003,

0xfccd,	// (0x0001cb85) fep_hwr_prediction_pane_g

0xaa94,	// (0x0001794c) fep_vkb_prediction_pane_g1

0xaa9e,	// (0x00017956) fep_vkb_prediction_pane_g2

0xaaa6,	// (0x0001795e) fep_vkb_prediction_pane_g3

0xaaae,	// (0x00017966) fep_vkb_prediction_pane_g4

0x0003,

0xfcd6,	// (0x0001cb8e) fep_vkb_prediction_pane_g

0x329b,	// (0x00010153) slider_set_pane_g3

0x32af,	// (0x00010167) slider_set_pane_g4

0x32c7,	// (0x0001017f) slider_set_pane_g5

0x329b,	// (0x00010153) slider_set_pane_g6

0x32dd,	// (0x00010195) slider_set_pane_g7

0x82eb,	// (0x000151a3) slider_form_pane_g3

0x82f4,	// (0x000151ac) slider_form_pane_g4

0x82fc,	// (0x000151b4) slider_form_pane_g5

0x82eb,	// (0x000151a3) slider_form_pane_g6

0x0356,	// (0x0000d20e) slider_form_pane_g7

0x8a30,	// (0x000158e8) slider_set_pane_vc_g3

0x8a39,	// (0x000158f1) slider_set_pane_vc_g4

0x8a42,	// (0x000158fa) slider_set_pane_vc_g5

0x8a30,	// (0x000158e8) slider_set_pane_vc_g6

0x8a4b,	// (0x00015903) slider_set_pane_vc_g7

0x8a30,	// (0x000158e8) slider_form_pane_vc_g1

0x8a39,	// (0x000158f1) slider_form_pane_vc_g2

0x8a42,	// (0x000158fa) slider_form_pane_vc_g3

0x8a30,	// (0x000158e8) slider_form_pane_vc_g4

0x8df3,	// (0x00015cab) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x0001c950) slider_form_pane_vc_g

0x4112,	// (0x00010fca) main_idle_act3_pane

0xaab6,	// (0x0001796e) ai3_links_pane

0x0c5f,	// (0x0000db17) popup_ai3_data_window_ParamLimits

0x0c5f,	// (0x0000db17) popup_ai3_data_window

0x4112,	// (0x00010fca) grid_ai3_links_pane

0x0c79,	// (0x0000db31) cell_ai3_links_pane_ParamLimits

0x0c79,	// (0x0000db31) cell_ai3_links_pane

0xaaf1,	// (0x000179a9) bg_popup_sub_pane_cp11

0xaafe,	// (0x000179b6) cell_ai3_links_pane_g1

0x4112,	// (0x00010fca) bg_popup_sub_pane_cp12

0xab23,	// (0x000179db) heading_ai3_data_pane

0xab2b,	// (0x000179e3) list_ai3_gene_pane

0xab37,	// (0x000179ef) popup_ai3_data_window_g1

0xab3f,	// (0x000179f7) heading_ai3_data_pane_g1

0xab47,	// (0x000179ff) heading_ai3_data_pane_t1

0xab55,	// (0x00017a0d) list_double_ai3_gene_pane_ParamLimits

0xab55,	// (0x00017a0d) list_double_ai3_gene_pane

0xab62,	// (0x00017a1a) list_single_ai3_gene_pane_ParamLimits

0xab62,	// (0x00017a1a) list_single_ai3_gene_pane

0x9669,	// (0x00016521) list_highlight_pane_cp7_ParamLimits

0x9669,	// (0x00016521) list_highlight_pane_cp7

0xab6f,	// (0x00017a27) list_single_a13_gene_pane_t1_ParamLimits

0xab6f,	// (0x00017a27) list_single_a13_gene_pane_t1

0xab86,	// (0x00017a3e) list_single_ai3_gene_pane_g1

0xab8f,	// (0x00017a47) list_single_ai3_gene_pane_g2

0x0001,

0xfcdf,	// (0x0001cb97) list_single_ai3_gene_pane_g

0xab97,	// (0x00017a4f) list_double_ai3_gene_pane_g1_ParamLimits

0xab97,	// (0x00017a4f) list_double_ai3_gene_pane_g1

0xaba3,	// (0x00017a5b) list_double_ai3_gene_pane_t1_ParamLimits

0xaba3,	// (0x00017a5b) list_double_ai3_gene_pane_t1

0xabbf,	// (0x00017a77) list_double_ai3_gene_pane_t2_ParamLimits

0xabbf,	// (0x00017a77) list_double_ai3_gene_pane_t2

0xabd5,	// (0x00017a8d) list_double_ai3_gene_pane_t3_ParamLimits

0xabd5,	// (0x00017a8d) list_double_ai3_gene_pane_t3

0x0002,

0xfce4,	// (0x0001cb9c) list_double_ai3_gene_pane_t_ParamLimits

0xfce4,	// (0x0001cb9c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa991,	// (0x00017849) aid_size_min_col_2

0x0b05,	// (0x0000d9bd) aid_size_min_msg_ParamLimits

0x0b05,	// (0x0000d9bd) aid_size_min_msg

0x0895,	// (0x0000d74d) fep_vkb_top_text_pane_g2_ParamLimits

0x0895,	// (0x0000d74d) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x0001c9fc) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x0001c9fc) fep_vkb_top_text_pane_g

0x4112,	// (0x00010fca) main_hc_apps_shell_pane

0xabf2,	// (0x00017aaa) grid_hc_apps_pane_ParamLimits

0xabf2,	// (0x00017aaa) grid_hc_apps_pane

0xac01,	// (0x00017ab9) list_hc_apps_pane

0xac09,	// (0x00017ac1) scroll_pane_cp37_ParamLimits

0xac09,	// (0x00017ac1) scroll_pane_cp37

0x0c93,	// (0x0000db4b) cell_hc_apps_pane_ParamLimits

0x0c93,	// (0x0000db4b) cell_hc_apps_pane

0x0d51,	// (0x0000dc09) cell_hc_apps_pane_g1_ParamLimits

0x0d51,	// (0x0000dc09) cell_hc_apps_pane_g1

0xacf4,	// (0x00017bac) cell_hc_apps_pane_g2_ParamLimits

0xacf4,	// (0x00017bac) cell_hc_apps_pane_g2

0xad10,	// (0x00017bc8) cell_hc_apps_pane_g3_ParamLimits

0xad10,	// (0x00017bc8) cell_hc_apps_pane_g3

0x0002,

0xfceb,	// (0x0001cba3) cell_hc_apps_pane_g_ParamLimits

0xfceb,	// (0x0001cba3) cell_hc_apps_pane_g

0x0d7e,	// (0x0000dc36) cell_hc_apps_pane_t1_ParamLimits

0x0d7e,	// (0x0000dc36) cell_hc_apps_pane_t1

0x44a9,	// (0x00011361) grid_highlight_pane_cp10_ParamLimits

0x44a9,	// (0x00011361) grid_highlight_pane_cp10

0x0dbc,	// (0x0000dc74) list_single_hc_apps_pane_ParamLimits

0x0dbc,	// (0x0000dc74) list_single_hc_apps_pane

0x0de9,	// (0x0000dca1) list_single_hc_apps_pane_g1

0x0e02,	// (0x0000dcba) list_single_hc_apps_pane_g2

0x0001,

0xfcf2,	// (0x0001cbaa) list_single_hc_apps_pane_g

0x0e1b,	// (0x0000dcd3) list_single_hc_apps_pane_g2_copy1

0xae1c,	// (0x00017cd4) list_single_hc_apps_pane_t1

0x4206,	// (0x000110be) bg_set_opt_pane_cp_ParamLimits

0x28bf,	// (0x0000f777) setting_slider_pane_t1_ParamLimits

0x28d8,	// (0x0000f790) setting_slider_pane_t2_ParamLimits

0x28f2,	// (0x0000f7aa) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0001c42e) setting_slider_pane_t_ParamLimits

0x290a,	// (0x0000f7c2) slider_set_pane_ParamLimits

0x2e2f,	// (0x0000fce7) control_pane_g5_ParamLimits

0x2e2f,	// (0x0000fce7) control_pane_g5

0x813a,	// (0x00014ff2) slider_set_pane_g1_ParamLimits

0x328f,	// (0x00010147) slider_set_pane_g2_ParamLimits

0x329b,	// (0x00010153) slider_set_pane_g3_ParamLimits

0x32af,	// (0x00010167) slider_set_pane_g4_ParamLimits

0x32c7,	// (0x0001017f) slider_set_pane_g5_ParamLimits

0x329b,	// (0x00010153) slider_set_pane_g6_ParamLimits

0x32dd,	// (0x00010195) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0001c823) slider_set_pane_g_ParamLimits

0x5cdf,	// (0x00012b97) navi_icon_text_pane_ParamLimits

0xf082,	// (0x0001bf3a) aid_fill_nsta_2_ParamLimits

0xf0b9,	// (0x0001bf71) aid_touch_tab_arrow_left_ParamLimits

0xf0cf,	// (0x0001bf87) aid_touch_tab_arrow_right_ParamLimits

0xf16a,	// (0x0001c022) clock_nsta_pane_ParamLimits

0x7bf2,	// (0x00014aaa) navi_icon_pane_g1_ParamLimits

0x7bfe,	// (0x00014ab6) navi_text_pane_t1_ParamLimits

0x91f9,	// (0x000160b1) navi_icon_text_pane_g1_ParamLimits

0x9205,	// (0x000160bd) navi_icon_text_pane_t1_ParamLimits

0x0de9,	// (0x0000dca1) list_single_hc_apps_pane_g1_ParamLimits

0x0e02,	// (0x0000dcba) list_single_hc_apps_pane_g2_ParamLimits

0xfcf2,	// (0x0001cbaa) list_single_hc_apps_pane_g_ParamLimits

0x0e1b,	// (0x0000dcd3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xae1c,	// (0x00017cd4) list_single_hc_apps_pane_t1_ParamLimits

0xc928,	// (0x000197e0) popup_toolbar2_fixed_window_ParamLimits

0xc928,	// (0x000197e0) popup_toolbar2_fixed_window

0xefe7,	// (0x0001be9f) popup_toolbar2_float_window

0x4112,	// (0x00010fca) bg_popup_sub_pane_cp27

0xae4a,	// (0x00017d02) grid_toolbar2_float_pane

0x4112,	// (0x00010fca) bg_popup_sub_pane_cp26

0xae4a,	// (0x00017d02) grid_toolbar2_fixed_pane

0x0e37,	// (0x0000dcef) cell_toolbar2_fixed_pane_ParamLimits

0x0e37,	// (0x0000dcef) cell_toolbar2_fixed_pane

0x0e52,	// (0x0000dd0a) cell_toolbar2_fixed_pane_g1

0xae6b,	// (0x00017d23) toolbar2_fixed_button_pane

0x6caf,	// (0x00013b67) toolbar2_fixed_button_pane_g1

0x6cbf,	// (0x00013b77) toolbar2_fixed_button_pane_g2

0x6cb7,	// (0x00013b6f) toolbar2_fixed_button_pane_g3

0x6ccf,	// (0x00013b87) toolbar2_fixed_button_pane_g4

0x6cc7,	// (0x00013b7f) toolbar2_fixed_button_pane_g5

0x6cd7,	// (0x00013b8f) toolbar2_fixed_button_pane_g6

0x6cdf,	// (0x00013b97) toolbar2_fixed_button_pane_g7

0x6cef,	// (0x00013ba7) toolbar2_fixed_button_pane_g8

0x6ce7,	// (0x00013b9f) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0001c725) toolbar2_fixed_button_pane_g

0xae73,	// (0x00017d2b) cell_toolbar2_float_pane_ParamLimits

0xae73,	// (0x00017d2b) cell_toolbar2_float_pane

0xae84,	// (0x00017d3c) cell_toolbar2_float_pane_g1

0xae6b,	// (0x00017d23) toolbar2_fixed_button_pane_cp

0x076f,	// (0x0000d627) fep_vkb_accented_list_pane_ParamLimits

0x076f,	// (0x0000d627) fep_vkb_accented_list_pane

0x3652,	// (0x0001050a) bg_popup_fep_shadow_pane_g9

0x5e5f,	// (0x00012d17) bg_popup_fep_shadow_pane_cp3

0x52cd,	// (0x00012185) list_accented_list_pane

0xae8d,	// (0x00017d45) list_single_accented_list_pane_ParamLimits

0xae8d,	// (0x00017d45) list_single_accented_list_pane

0x5e5f,	// (0x00012d17) list_highlight_pane_cp10

0xae9e,	// (0x00017d56) list_single_accented_list_pane_t1

0xef11,	// (0x0001bdc9) popup_slider_window_ParamLimits

0xef11,	// (0x0001bdc9) popup_slider_window

0xa988,	// (0x00017840) aid_indentation_list_msg

0x0f4b,	// (0x0000de03) bg_popup_window_pane_cp19

0xafc2,	// (0x00017e7a) popup_slider_window_g1

0xafde,	// (0x00017e96) popup_slider_window_g2

0xaffa,	// (0x00017eb2) popup_slider_window_g3

0x0005,

0xfcf7,	// (0x0001cbaf) popup_slider_window_g

0xb056,	// (0x00017f0e) popup_slider_window_t1

0xb0ca,	// (0x00017f82) small_volume_slider_vertical_pane

0x96a4,	// (0x0001655c) small_volume_slider_vertical_pane_g1

0x96a4,	// (0x0001655c) small_volume_slider_vertical_pane_g2

0xb0e6,	// (0x00017f9e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd09,	// (0x0001cbc1) small_volume_slider_vertical_pane_g

0xc896,	// (0x0001974e) area_side_right_pane_ParamLimits

0xc896,	// (0x0001974e) area_side_right_pane

0xcd09,	// (0x00019bc1) aid_size_side_button_ParamLimits

0xcd09,	// (0x00019bc1) aid_size_side_button

0xcd22,	// (0x00019bda) grid_sctrl_middle_pane_ParamLimits

0xcd22,	// (0x00019bda) grid_sctrl_middle_pane

0x3870,	// (0x00010728) sctrl_sk_bottom_pane

0x3881,	// (0x00010739) sctrl_sk_top_pane

0x3893,	// (0x0001074b) aid_touch_sctrl_top

0x38a0,	// (0x00010758) bg_sctrl_sk_pane_ParamLimits

0x38a0,	// (0x00010758) bg_sctrl_sk_pane

0x38ae,	// (0x00010766) sctrl_sk_top_pane_g1

0x38bb,	// (0x00010773) sctrl_sk_top_pane_t1

0x3893,	// (0x0001074b) aid_touch_sctrl_bottom

0x38a0,	// (0x00010758) bg_sctrl_sk_pane_cp_ParamLimits

0x38a0,	// (0x00010758) bg_sctrl_sk_pane_cp

0x38d6,	// (0x0001078e) sctrl_sk_bottom_pane_g1

0x38bb,	// (0x00010773) sctrl_sk_bottom_pane_t1

0xcd3c,	// (0x00019bf4) cell_sctrl_middle_pane_ParamLimits

0xcd3c,	// (0x00019bf4) cell_sctrl_middle_pane

0xcd4d,	// (0x00019c05) aid_touch_sctrl_middle_ParamLimits

0xcd4d,	// (0x00019c05) aid_touch_sctrl_middle

0xcd5a,	// (0x00019c12) bg_sctrl_middle_pane_ParamLimits

0xcd5a,	// (0x00019c12) bg_sctrl_middle_pane

0x3f43,	// (0x00010dfb) cell_sctrl_middle_pane_g1_ParamLimits

0x3f43,	// (0x00010dfb) cell_sctrl_middle_pane_g1

0xcd68,	// (0x00019c20) cell_sctrl_middle_pane_g2_ParamLimits

0xcd68,	// (0x00019c20) cell_sctrl_middle_pane_g2

0x0001,

0xfd15,	// (0x0001cbcd) cell_sctrl_middle_pane_g_ParamLimits

0xfd15,	// (0x0001cbcd) cell_sctrl_middle_pane_g

0x6caf,	// (0x00013b67) bg_sctrl_middle_pane_g1

0x6cb7,	// (0x00013b6f) bg_sctrl_middle_pane_g2

0x6cbf,	// (0x00013b77) bg_sctrl_middle_pane_g3

0x6cc7,	// (0x00013b7f) bg_sctrl_middle_pane_g4

0x6ccf,	// (0x00013b87) bg_sctrl_middle_pane_g5

0x6cd7,	// (0x00013b8f) bg_sctrl_middle_pane_g6

0x6cdf,	// (0x00013b97) bg_sctrl_middle_pane_g7

0x6ce7,	// (0x00013b9f) bg_sctrl_middle_pane_g8

0x0007,

0xfd1a,	// (0x0001cbd2) bg_sctrl_middle_pane_g

0x6cef,	// (0x00013ba7) bg_sctrl_middle_pane_g8_copy1

0x6caf,	// (0x00013b67) bg_sctrl_sk_pane_g1

0x6cbf,	// (0x00013b77) bg_sctrl_sk_pane_g2

0x6cb7,	// (0x00013b6f) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0001c725) bg_sctrl_sk_pane_g

0x49bb,	// (0x00011873) aid_size_touch_scroll_bar

0x6ccf,	// (0x00013b87) bg_sctrl_sk_pane_g4

0x6cc7,	// (0x00013b7f) bg_sctrl_sk_pane_g5

0x6cd7,	// (0x00013b8f) bg_sctrl_sk_pane_g6

0x6cdf,	// (0x00013b97) bg_sctrl_sk_pane_g7

0x6cef,	// (0x00013ba7) bg_sctrl_sk_pane_g8

0x6ce7,	// (0x00013b9f) bg_sctrl_sk_pane_g9

0x6289,	// (0x00013141) popup_fep_china_hwr2_fs_candidate_window

0xea55,	// (0x0001b90d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xea55,	// (0x0001b90d) popup_fep_china_hwr2_fs_control_window

0x3672,	// (0x0001052a) sctrl_sk_top_pane_g2

0x0001,

0xfd10,	// (0x0001cbc8) sctrl_sk_top_pane_g

0x106e,	// (0x0000df26) aid_fep_china_hwr2_fs_cell_ParamLimits

0x106e,	// (0x0000df26) aid_fep_china_hwr2_fs_cell

0x1082,	// (0x0000df3a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x1082,	// (0x0000df3a) bg_popup_fep_shadow_pane_cp4

0x1099,	// (0x0000df51) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1099,	// (0x0000df51) bg_popup_fep_shadow_pane_cp5

0x10ab,	// (0x0000df63) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x10ab,	// (0x0000df63) popup_fep_china_hwr2_fs_control_bar_grid

0x10bf,	// (0x0000df77) popup_fep_china_hwr2_fs_control_funtion_grid

0xb142,	// (0x00017ffa) aid_fep_china_hwr2_fs_candi_cell

0x4112,	// (0x00010fca) bg_popup_fep_shadow_pane_cp6

0xb14c,	// (0x00018004) popup_fep_china_hwr2_fs_candidate_grid

0x10c7,	// (0x0000df7f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x10c7,	// (0x0000df7f) cell_fep_china_hwr2_fs_funtion_grid

0x96a4,	// (0x0001655c) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xb16e,	// (0x00018026) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xb16e,	// (0x00018026) cell_fep_china_hwr2_fs_funtion_grid_g1

0xb17c,	// (0x00018034) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xb17c,	// (0x00018034) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2b,	// (0x0001cbe3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2b,	// (0x0001cbe3) cell_fep_china_hwr2_fs_funtion_grid_g

0x10df,	// (0x0000df97) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x10df,	// (0x0000df97) cell_fep_china_hwr2_fs_funtion_grid_t1

0x10f4,	// (0x0000dfac) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x10f4,	// (0x0000dfac) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd30,	// (0x0001cbe8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd30,	// (0x0001cbe8) cell_fep_china_hwr2_fs_funtion_grid_t

0xb1c3,	// (0x0001807b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xb1cb,	// (0x00018083) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xb1d3,	// (0x0001808b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd35,	// (0x0001cbed) popup_fep_china_hwr2_fs_control_bar_grid_g

0xb1db,	// (0x00018093) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xb1db,	// (0x00018093) cell_fep_china_hwr2_fs_candidate_grid

0xb1f4,	// (0x000180ac) popup_fep_china_hwr2_fs_candidate_grid_g20

0xb1fc,	// (0x000180b4) popup_fep_china_hwr2_fs_candidate_grid_g21

0x96a4,	// (0x0001655c) cell_fep_china_hwr2_fs_candidate_grid_g1

0x96a4,	// (0x0001655c) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x0001ca01) cell_fep_china_hwr2_fs_candidate_grid_g

0xb204,	// (0x000180bc) cell_fep_china_hwr2_fs_candidate_grid_t1

0x687c,	// (0x00013734) clock_nsta_pane_cp_24_ParamLimits

0x687c,	// (0x00013734) clock_nsta_pane_cp_24

0x68fa,	// (0x000137b2) indicator_nsta_pane_cp_24_ParamLimits

0x68fa,	// (0x000137b2) indicator_nsta_pane_cp_24

0x7a6e,	// (0x00014926) heading_pane_g1

0x0001,

0xf8d2,	// (0x0001c78a) heading_pane_g

0x859c,	// (0x00015454) grid_sct_catagory_button_pane

0x85cc,	// (0x00015484) scroll_pane_cp5_ParamLimits

0x9247,	// (0x000160ff) button_value_adjust_pane_cp5_ParamLimits

0x9247,	// (0x000160ff) button_value_adjust_pane_cp5

0x9343,	// (0x000161fb) form2_midp_time_pane_ParamLimits

0xb212,	// (0x000180ca) cell_sct_catagory_button_pane_ParamLimits

0xb212,	// (0x000180ca) cell_sct_catagory_button_pane

0x9669,	// (0x00016521) bg_button_pane_cp01_ParamLimits

0x9669,	// (0x00016521) bg_button_pane_cp01

0x96a4,	// (0x0001655c) cell_sct_catagory_button_pane_g1

0xef8a,	// (0x0001be42) popup_tb_extension_window

0x1110,	// (0x0000dfc8) aid_size_cell_ext_ParamLimits

0x1110,	// (0x0000dfc8) aid_size_cell_ext

0x47fd,	// (0x000116b5) bg_tb_trans_pane_cp1_ParamLimits

0x47fd,	// (0x000116b5) bg_tb_trans_pane_cp1

0x1136,	// (0x0000dfee) grid_tb_ext_pane_ParamLimits

0x1136,	// (0x0000dfee) grid_tb_ext_pane

0x1174,	// (0x0000e02c) cell_tb_ext_pane_ParamLimits

0x1174,	// (0x0000e02c) cell_tb_ext_pane

0x119c,	// (0x0000e054) cell_tb_ext_pane_g1_ParamLimits

0x119c,	// (0x0000e054) cell_tb_ext_pane_g1

0xb2a8,	// (0x00018160) cell_tb_ext_pane_t1

0x44a9,	// (0x00011361) list_highlight_pane_cp11_ParamLimits

0x44a9,	// (0x00011361) list_highlight_pane_cp11

0x27f2,	// (0x0000f6aa) popup_uni_indicator_window_ParamLimits

0x27f2,	// (0x0000f6aa) popup_uni_indicator_window

0x4fed,	// (0x00011ea5) bg_popup_sub_pane_cp14

0xb2c3,	// (0x0001817b) list_uniindi_pane

0xb2cf,	// (0x00018187) uniindi_top_pane

0x44a9,	// (0x00011361) bg_uniindi_top_pane

0xb2ee,	// (0x000181a6) uniindi_top_pane_g1

0xb304,	// (0x000181bc) uniindi_top_pane_g2

0x0003,

0xfd3c,	// (0x0001cbf4) uniindi_top_pane_g

0xb32e,	// (0x000181e6) uniindi_top_pane_t1

0xb358,	// (0x00018210) list_single_uniindi_pane_ParamLimits

0xb358,	// (0x00018210) list_single_uniindi_pane

0x96a4,	// (0x0001655c) bg_uniindi_top_pane_g1

0xb36b,	// (0x00018223) list_single_uniindi_pane_g1

0xb37e,	// (0x00018236) list_single_uniindi_pane_t1

0x2668,	// (0x0000f520) control_bg_pane

0xb3a3,	// (0x0001825b) bg_sctrl_sk_pane_cp1

0xb3ac,	// (0x00018264) bg_sctrl_sk_pane_cp2

0xb3b5,	// (0x0001826d) control_bg_pane_g1

0xb3be,	// (0x00018276) control_bg_pane_g2

0x0001,

0xfd45,	// (0x0001cbfd) control_bg_pane_g

0x9081,	// (0x00015f39) cell_indicator_nsta_pane_g1_ParamLimits

0x0571,	// (0x0000d429) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x0001c965) cell_indicator_nsta_pane_g_ParamLimits

0x93cb,	// (0x00016283) form2_midp_time_pane_t1_ParamLimits

0xd148,	// (0x0001a000) main_idle_act4_pane_ParamLimits

0xd148,	// (0x0001a000) main_idle_act4_pane

0xef8a,	// (0x0001be42) popup_tb_extension_window_ParamLimits

0x115b,	// (0x0000e013) tb_ext_find_pane_ParamLimits

0x115b,	// (0x0000e013) tb_ext_find_pane

0xb3c7,	// (0x0001827f) ai_gene_pane_1_cp1

0x5f98,	// (0x00012e50) ai_gene_pane_2_cp1

0xb3cf,	// (0x00018287) list_single_idle_plugin_calendar_pane

0xb3d8,	// (0x00018290) list_single_idle_plugin_notification_pane

0xb3e1,	// (0x00018299) list_single_idle_plugin_player_pane

0x11b9,	// (0x0000e071) list_single_idle_plugin_shortcut_pane_ParamLimits

0x11b9,	// (0x0000e071) list_single_idle_plugin_shortcut_pane

0x11e1,	// (0x0000e099) main_idle_act4_pane_t1

0x11f7,	// (0x0000e0af) main_idle_act4_pane_t2

0x0001,

0xfd4a,	// (0x0001cc02) main_idle_act4_pane_t

0x120d,	// (0x0000e0c5) middle_sk_idle_act4_pane_ParamLimits

0x120d,	// (0x0000e0c5) middle_sk_idle_act4_pane

0x1229,	// (0x0000e0e1) popup_clock_digital_analogue_window_cp2

0x1251,	// (0x0000e109) shortcut_wheel_idle_act4_pane_ParamLimits

0x1251,	// (0x0000e109) shortcut_wheel_idle_act4_pane

0x96a4,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g1

0x96a4,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g2

0x96a4,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g3

0x96a4,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g4

0x96a4,	// (0x0001655c) shortcut_wheel_idle_act4_pane_g5

0xb474,	// (0x0001832c) shortcut_wheel_idle_act4_pane_g6

0xb47c,	// (0x00018334) shortcut_wheel_idle_act4_pane_g7

0xb484,	// (0x0001833c) shortcut_wheel_idle_act4_pane_g8

0xb48c,	// (0x00018344) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4f,	// (0x0001cc07) shortcut_wheel_idle_act4_pane_g

0xd156,	// (0x0001a00e) middle_sk_idle_act4_pane_g1_ParamLimits

0xd156,	// (0x0001a00e) middle_sk_idle_act4_pane_g1

0x12ce,	// (0x0000e186) middle_sk_idle_act4_pane_g2_ParamLimits

0x12ce,	// (0x0000e186) middle_sk_idle_act4_pane_g2

0x0001,

0xfd72,	// (0x0001cc2a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd72,	// (0x0001cc2a) middle_sk_idle_act4_pane_g

0x12e6,	// (0x0000e19e) middle_sk_idle_act4_pane_t1_ParamLimits

0x12e6,	// (0x0000e19e) middle_sk_idle_act4_pane_t1

0x1315,	// (0x0000e1cd) grid_ai_shortcut_pane_ParamLimits

0x1315,	// (0x0000e1cd) grid_ai_shortcut_pane

0x1332,	// (0x0000e1ea) list_highlight_pane_cp16_ParamLimits

0x1332,	// (0x0000e1ea) list_highlight_pane_cp16

0x133f,	// (0x0000e1f7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x133f,	// (0x0000e1f7) list_single_idle_plugin_shortcut_pane_g1

0x134b,	// (0x0000e203) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x134b,	// (0x0000e203) list_single_idle_plugin_shortcut_pane_g2

0x1367,	// (0x0000e21f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x1367,	// (0x0000e21f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd77,	// (0x0001cc2f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd77,	// (0x0001cc2f) list_single_idle_plugin_shortcut_pane_g

0x137c,	// (0x0000e234) cell_ai_shortcut_pane_ParamLimits

0x137c,	// (0x0000e234) cell_ai_shortcut_pane

0x1392,	// (0x0000e24a) cell_ai_shortcut_pane_g1_ParamLimits

0x1392,	// (0x0000e24a) cell_ai_shortcut_pane_g1

0xb3c7,	// (0x0001827f) ai_gene_pane_1_cp2

0xb5bc,	// (0x00018474) ai_gene_pane_2_cp2

0xb5c4,	// (0x0001847c) list_highlight_pane_cp15

0xb5cd,	// (0x00018485) list_single_idle_plugin_calendar_pane_g1

0xb5c4,	// (0x0001847c) list_highlight_pane_cp17

0xb5d5,	// (0x0001848d) list_single_idle_plugin_calendar_pane_g1_copy1

0xb5dd,	// (0x00018495) list_single_idle_plugin_player_pane_g1

0x87f5,	// (0x000156ad) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7e,	// (0x0001cc36) list_single_idle_plugin_player_pane_g

0xb5e5,	// (0x0001849d) list_single_idle_plugin_player_pane_t1

0xb5f3,	// (0x000184ab) list_single_idle_plugin_player_pane_t2

0xb601,	// (0x000184b9) list_single_idle_plugin_player_pane_t3

0xb60f,	// (0x000184c7) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd83,	// (0x0001cc3b) list_single_idle_plugin_player_pane_t

0xb61d,	// (0x000184d5) wait_bar_pane_cp15

0xb625,	// (0x000184dd) grid_ai_notification_pane

0x87f5,	// (0x000156ad) list_single_idle_plugin_notification_pane_g1

0x13b4,	// (0x0000e26c) cell_ai_notification_pane_ParamLimits

0x13b4,	// (0x0000e26c) cell_ai_notification_pane

0xb63b,	// (0x000184f3) cell_ai_notification_pane_g1

0xb643,	// (0x000184fb) cell_ai_notification_pane_t1

0x13c1,	// (0x0000e279) tb_ext_find_button_pane

0x13c9,	// (0x0000e281) tb_ext_find_pane_g1

0x13d1,	// (0x0000e289) tb_ext_find_pane_t1

0x57ce,	// (0x00012686) tb_ext_find_button_pane_g1

0xb66f,	// (0x00018527) tb_ext_find_button_pane_g2

0x0001,

0xfd8c,	// (0x0001cc44) tb_ext_find_button_pane_g

0x11e1,	// (0x0000e099) main_idle_act4_pane_t1_ParamLimits

0x11f7,	// (0x0000e0af) main_idle_act4_pane_t2_ParamLimits

0xfd4a,	// (0x0001cc02) main_idle_act4_pane_t_ParamLimits

0x1229,	// (0x0000e0e1) popup_clock_digital_analogue_window_cp2_ParamLimits

0x1241,	// (0x0000e0f9) sat_plugin_idle_act4_pane_ParamLimits

0x1241,	// (0x0000e0f9) sat_plugin_idle_act4_pane

0x13df,	// (0x0000e297) sat_plugin_idle_act4_pane_t1_ParamLimits

0x13df,	// (0x0000e297) sat_plugin_idle_act4_pane_t1

0x13f7,	// (0x0000e2af) sat_plugin_idle_act4_pane_t2_ParamLimits

0x13f7,	// (0x0000e2af) sat_plugin_idle_act4_pane_t2

0x140f,	// (0x0000e2c7) sat_plugin_idle_act4_pane_t3_ParamLimits

0x140f,	// (0x0000e2c7) sat_plugin_idle_act4_pane_t3

0x1427,	// (0x0000e2df) sat_plugin_idle_act4_pane_t4_ParamLimits

0x1427,	// (0x0000e2df) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd91,	// (0x0001cc49) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd91,	// (0x0001cc49) sat_plugin_idle_act4_pane_t

0x272d,	// (0x0000f5e5) popup_battery_window_ParamLimits

0x272d,	// (0x0000f5e5) popup_battery_window

0x44a9,	// (0x00011361) bg_popup_sub_pane_cp25_ParamLimits

0x44a9,	// (0x00011361) bg_popup_sub_pane_cp25

0xb6c4,	// (0x0001857c) popup_battery_window_g1_ParamLimits

0xb6c4,	// (0x0001857c) popup_battery_window_g1

0xb6d0,	// (0x00018588) popup_battery_window_t1_ParamLimits

0xb6d0,	// (0x00018588) popup_battery_window_t1

0xb6e2,	// (0x0001859a) popup_battery_window_t2_ParamLimits

0xb6e2,	// (0x0001859a) popup_battery_window_t2

0x0001,

0xfd9a,	// (0x0001cc52) popup_battery_window_t_ParamLimits

0xfd9a,	// (0x0001cc52) popup_battery_window_t

0xe8e6,	// (0x0001b79e) midp_canvas_pane_ParamLimits

0xe941,	// (0x0001b7f9) midp_keypad_pane_ParamLimits

0xe941,	// (0x0001b7f9) midp_keypad_pane

0x61dd,	// (0x00013095) main_midp_pane_ParamLimits

0x910d,	// (0x00015fc5) signal_pane_g2_cp_ParamLimits

0x143f,	// (0x0000e2f7) aid_size_cell_midp_keypad_ParamLimits

0x143f,	// (0x0000e2f7) aid_size_cell_midp_keypad

0x145d,	// (0x0000e315) midp_keyp_game_grid_pane_ParamLimits

0x145d,	// (0x0000e315) midp_keyp_game_grid_pane

0x1484,	// (0x0000e33c) midp_keyp_rocker_pane_ParamLimits

0x1484,	// (0x0000e33c) midp_keyp_rocker_pane

0x14c5,	// (0x0000e37d) midp_keyp_sk_left_pane_ParamLimits

0x14c5,	// (0x0000e37d) midp_keyp_sk_left_pane

0x1519,	// (0x0000e3d1) midp_keyp_sk_right_pane_ParamLimits

0x1519,	// (0x0000e3d1) midp_keyp_sk_right_pane

0x4112,	// (0x00010fca) bg_button_pane_cp03

0x156d,	// (0x0000e425) midp_keyp_sk_left_pane_g1

0x4112,	// (0x00010fca) bg_button_pane_cp04

0x156d,	// (0x0000e425) midp_keyp_sk_right_pane_g1

0x96a4,	// (0x0001655c) midp_keyp_rocker_pane_g1

0x1576,	// (0x0000e42e) keyp_game_cell_pane_ParamLimits

0x1576,	// (0x0000e42e) keyp_game_cell_pane

0x4112,	// (0x00010fca) bg_button_pane_cp02

0x159a,	// (0x0000e452) keyp_game_cell_pane_g1

0xc8d8,	// (0x00019790) popup_fep_vkb2_window_ParamLimits

0xc8d8,	// (0x00019790) popup_fep_vkb2_window

0xcd74,	// (0x00019c2c) aid_size_cell_vkb2_ParamLimits

0xcd74,	// (0x00019c2c) aid_size_cell_vkb2

0xcdaa,	// (0x00019c62) popup_fep_vkb2_window_g1_ParamLimits

0xcdaa,	// (0x00019c62) popup_fep_vkb2_window_g1

0xcdfa,	// (0x00019cb2) vkb2_area_bottom_pane_ParamLimits

0xcdfa,	// (0x00019cb2) vkb2_area_bottom_pane

0xce4e,	// (0x00019d06) vkb2_area_keypad_pane_ParamLimits

0xce4e,	// (0x00019d06) vkb2_area_keypad_pane

0xce96,	// (0x00019d4e) vkb2_area_top_pane_ParamLimits

0xce96,	// (0x00019d4e) vkb2_area_top_pane

0xcf1c,	// (0x00019dd4) vkb2_top_entry_pane_ParamLimits

0xcf1c,	// (0x00019dd4) vkb2_top_entry_pane

0xcf49,	// (0x00019e01) vkb2_top_grid_left_pane_ParamLimits

0xcf49,	// (0x00019e01) vkb2_top_grid_left_pane

0xcf69,	// (0x00019e21) vkb2_top_grid_right_pane_ParamLimits

0xcf69,	// (0x00019e21) vkb2_top_grid_right_pane

0x3b42,	// (0x000109fa) vkb2_cell_keypad_pane_ParamLimits

0x3b42,	// (0x000109fa) vkb2_cell_keypad_pane

0xcfaf,	// (0x00019e67) vkb2_area_bottom_grid_pane_ParamLimits

0xcfaf,	// (0x00019e67) vkb2_area_bottom_grid_pane

0xcfd9,	// (0x00019e91) vkb2_area_bottom_pane_g1_ParamLimits

0xcfd9,	// (0x00019e91) vkb2_area_bottom_pane_g1

0xcfff,	// (0x00019eb7) vkb2_area_bottom_pane_g2_ParamLimits

0xcfff,	// (0x00019eb7) vkb2_area_bottom_pane_g2

0xd030,	// (0x00019ee8) vkb2_area_bottom_pane_g3_ParamLimits

0xd030,	// (0x00019ee8) vkb2_area_bottom_pane_g3

0x0002,

0xfd9f,	// (0x0001cc57) vkb2_area_bottom_pane_g_ParamLimits

0xfd9f,	// (0x0001cc57) vkb2_area_bottom_pane_g

0x3cec,	// (0x00010ba4) vkb2_top_cell_left_pane_ParamLimits

0x3cec,	// (0x00010ba4) vkb2_top_cell_left_pane

0x18c9,	// (0x0000e781) vkb2_top_entry_pane_g1_ParamLimits

0x18c9,	// (0x0000e781) vkb2_top_entry_pane_g1

0x18d7,	// (0x0000e78f) vkb2_top_entry_pane_t1_ParamLimits

0x18d7,	// (0x0000e78f) vkb2_top_entry_pane_t1

0xb885,	// (0x0001873d) vkb2_top_entry_pane_t2_ParamLimits

0xb885,	// (0x0001873d) vkb2_top_entry_pane_t2

0xb8b7,	// (0x0001876f) vkb2_top_entry_pane_t3_ParamLimits

0xb8b7,	// (0x0001876f) vkb2_top_entry_pane_t3

0x0002,

0xfda6,	// (0x0001cc5e) vkb2_top_entry_pane_t_ParamLimits

0xfda6,	// (0x0001cc5e) vkb2_top_entry_pane_t

0xd09a,	// (0x00019f52) vkb2_top_grid_right_pane_g1_ParamLimits

0xd09a,	// (0x00019f52) vkb2_top_grid_right_pane_g1

0x3d4f,	// (0x00010c07) vkb2_top_grid_right_pane_g2_ParamLimits

0x3d4f,	// (0x00010c07) vkb2_top_grid_right_pane_g2

0x3d67,	// (0x00010c1f) vkb2_top_grid_right_pane_g3_ParamLimits

0x3d67,	// (0x00010c1f) vkb2_top_grid_right_pane_g3

0xd0b0,	// (0x00019f68) vkb2_top_grid_right_pane_g4_ParamLimits

0xd0b0,	// (0x00019f68) vkb2_top_grid_right_pane_g4

0x0003,

0xfdad,	// (0x0001cc65) vkb2_top_grid_right_pane_g_ParamLimits

0xfdad,	// (0x0001cc65) vkb2_top_grid_right_pane_g

0x3d95,	// (0x00010c4d) vkb2_top_cell_left_pane_g1

0x3dac,	// (0x00010c64) vkb2_cell_keypad_pane_g1_ParamLimits

0x3dac,	// (0x00010c64) vkb2_cell_keypad_pane_g1

0xb8db,	// (0x00018793) vkb2_cell_keypad_pane_t1_ParamLimits

0xb8db,	// (0x00018793) vkb2_cell_keypad_pane_t1

0x3dba,	// (0x00010c72) vkb2_cell_bottom_grid_pane_ParamLimits

0x3dba,	// (0x00010c72) vkb2_cell_bottom_grid_pane

0x3df3,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1

0x1272,	// (0x0000e12a) aid_call2_pane_cp02

0x127a,	// (0x0000e132) aid_call_pane_cp02

0x1282,	// (0x0000e13a) clock_digital_number_pane_cp10

0x128a,	// (0x0000e142) clock_digital_number_pane_cp11

0x1292,	// (0x0000e14a) clock_digital_number_pane_cp12

0x129a,	// (0x0000e152) clock_digital_number_pane_cp13

0x12a2,	// (0x0000e15a) clock_digital_separator_pane_cp10

0x57ce,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g1

0x57ce,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g2

0x12aa,	// (0x0000e162) popup_clock_digital_analogue_window_cp2_g3

0x57ce,	// (0x00012686) popup_clock_digital_analogue_window_cp2_g4

0x12aa,	// (0x0000e162) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd62,	// (0x0001cc1a) popup_clock_digital_analogue_window_cp2_g

0x12b2,	// (0x0000e16a) popup_clock_digital_analogue_window_cp2_t1

0x12c0,	// (0x0000e178) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6d,	// (0x0001cc25) popup_clock_digital_analogue_window_cp2_t

0x96a4,	// (0x0001655c) clock_digital_number_pane_cp10_g1

0x96a4,	// (0x0001655c) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001ca01) clock_digital_number_pane_cp10_g

0x96a4,	// (0x0001655c) clock_digital_separator_pane_cp10_g1

0x96a4,	// (0x0001655c) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x0001ca01) clock_digital_separator_pane_cp10_g

0xb310,	// (0x000181c8) uniindi_top_pane_g3

0xb321,	// (0x000181d9) uniindi_top_pane_g4

0x3bcd,	// (0x00010a85) vkb2_row_keypad_pane_ParamLimits

0x3bcd,	// (0x00010a85) vkb2_row_keypad_pane

0x3e0f,	// (0x00010cc7) vkb2_cell_t_keypad_pane_ParamLimits

0x3e0f,	// (0x00010cc7) vkb2_cell_t_keypad_pane

0x3e1f,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3e1f,	// (0x00010cd7) vkb2_cell_t_keypad_pane_cp08

0x3e32,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3e32,	// (0x00010cea) vkb2_cell_t_keypad_pane_cp09

0x3e46,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3e46,	// (0x00010cfe) vkb2_cell_t_keypad_pane_cp01

0x3e57,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3e57,	// (0x00010d0f) vkb2_cell_t_keypad_pane_cp02

0x3e68,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3e68,	// (0x00010d20) vkb2_cell_t_keypad_pane_cp03

0x3e79,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3e79,	// (0x00010d31) vkb2_cell_t_keypad_pane_cp04

0x3e8a,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3e8a,	// (0x00010d42) vkb2_cell_t_keypad_pane_cp05

0x3e9b,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3e9b,	// (0x00010d53) vkb2_cell_t_keypad_pane_cp06

0x3eac,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3eac,	// (0x00010d64) vkb2_cell_t_keypad_pane_cp07

0x3ebd,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3ebd,	// (0x00010d75) vkb2_cell_t_keypad_pane_cp10

0x3672,	// (0x0001052a) vkb2_cell_t_keypad_pane_g1

0xb8f2,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1

0x2668,	// (0x0000f520) popup_grid_graphic2_window

0x193c,	// (0x0000e7f4) aid_size_cell_graphic2_ParamLimits

0x193c,	// (0x0000e7f4) aid_size_cell_graphic2

0x197a,	// (0x0000e832) bg_popup_window_pane_cp21_ParamLimits

0x197a,	// (0x0000e832) bg_popup_window_pane_cp21

0x1988,	// (0x0000e840) graphic2_pages_pane_ParamLimits

0x1988,	// (0x0000e840) graphic2_pages_pane

0x19de,	// (0x0000e896) grid_graphic2_control_pane_ParamLimits

0x19de,	// (0x0000e896) grid_graphic2_control_pane

0x1a26,	// (0x0000e8de) grid_graphic2_pane_ParamLimits

0x1a26,	// (0x0000e8de) grid_graphic2_pane

0x1aad,	// (0x0000e965) cell_graphic2_pane

0x4112,	// (0x00010fca) main_comp_mode_pane

0xab2b,	// (0x000179e3) list_ai3_gene_pane_ParamLimits

0x0f4b,	// (0x0000de03) bg_popup_window_pane_cp19_ParamLimits

0xaf64,	// (0x00017e1c) bg_touch_area_indi_pane_ParamLimits

0xaf64,	// (0x00017e1c) bg_touch_area_indi_pane

0xaf7a,	// (0x00017e32) bg_touch_area_indi_pane_cp01_ParamLimits

0xaf7a,	// (0x00017e32) bg_touch_area_indi_pane_cp01

0xaf90,	// (0x00017e48) bg_touch_area_indi_pane_cp02_ParamLimits

0xaf90,	// (0x00017e48) bg_touch_area_indi_pane_cp02

0xafa8,	// (0x00017e60) bg_touch_area_indi_pane_cp03_ParamLimits

0xafa8,	// (0x00017e60) bg_touch_area_indi_pane_cp03

0xafc2,	// (0x00017e7a) popup_slider_window_g1_ParamLimits

0xafde,	// (0x00017e96) popup_slider_window_g2_ParamLimits

0xaffa,	// (0x00017eb2) popup_slider_window_g3_ParamLimits

0xfcf7,	// (0x0001cbaf) popup_slider_window_g_ParamLimits

0xb056,	// (0x00017f0e) popup_slider_window_t1_ParamLimits

0xb0ca,	// (0x00017f82) small_volume_slider_vertical_pane_ParamLimits

0x1aad,	// (0x0000e965) cell_graphic2_pane_ParamLimits

0x1b0a,	// (0x0000e9c2) bg_button_pane_cp10_ParamLimits

0x1b0a,	// (0x0000e9c2) bg_button_pane_cp10

0x1b1d,	// (0x0000e9d5) bg_button_pane_cp11_ParamLimits

0x1b1d,	// (0x0000e9d5) bg_button_pane_cp11

0x1b30,	// (0x0000e9e8) graphic2_pages_pane_g1_ParamLimits

0x1b30,	// (0x0000e9e8) graphic2_pages_pane_g1

0x1b4b,	// (0x0000ea03) graphic2_pages_pane_g2_ParamLimits

0x1b4b,	// (0x0000ea03) graphic2_pages_pane_g2

0x0001,

0xfdbb,	// (0x0001cc73) graphic2_pages_pane_g_ParamLimits

0xfdbb,	// (0x0001cc73) graphic2_pages_pane_g

0x1b63,	// (0x0000ea1b) graphic2_pages_pane_t1_ParamLimits

0x1b63,	// (0x0000ea1b) graphic2_pages_pane_t1

0x1b7b,	// (0x0000ea33) cell_graphic2_control_pane_ParamLimits

0x1b7b,	// (0x0000ea33) cell_graphic2_control_pane

0x1bad,	// (0x0000ea65) cell_graphic2_pane_g1_ParamLimits

0x1bad,	// (0x0000ea65) cell_graphic2_pane_g1

0xd164,	// (0x0001a01c) cell_graphic2_pane_g2_ParamLimits

0xd164,	// (0x0001a01c) cell_graphic2_pane_g2

0x1bba,	// (0x0000ea72) cell_graphic2_pane_g3_ParamLimits

0x1bba,	// (0x0000ea72) cell_graphic2_pane_g3

0xd171,	// (0x0001a029) cell_graphic2_pane_g4_ParamLimits

0xd171,	// (0x0001a029) cell_graphic2_pane_g4

0x1bc7,	// (0x0000ea7f) cell_graphic2_pane_g5_ParamLimits

0x1bc7,	// (0x0000ea7f) cell_graphic2_pane_g5

0x0004,

0xfdc0,	// (0x0001cc78) cell_graphic2_pane_g_ParamLimits

0xfdc0,	// (0x0001cc78) cell_graphic2_pane_g

0x1be7,	// (0x0000ea9f) cell_graphic2_pane_t1_ParamLimits

0x1be7,	// (0x0000ea9f) cell_graphic2_pane_t1

0x7a62,	// (0x0001491a) grid_highlight_pane_cp11_ParamLimits

0x7a62,	// (0x0001491a) grid_highlight_pane_cp11

0x44a9,	// (0x00011361) bg_button_pane_cp05

0x1c1c,	// (0x0000ead4) cell_graphic2_control_pane_g1

0x96a4,	// (0x0001655c) bg_touch_area_indi_pane_g1

0xbbc2,	// (0x00018a7a) aid_cmod_rocker_key_size

0xbbcc,	// (0x00018a84) aid_cmode_itu_key_size

0xbbd6,	// (0x00018a8e) main_cmode_video_pane

0xbbe0,	// (0x00018a98) main_comp_mode_itu_pane

0xbbec,	// (0x00018aa4) main_comp_mode_rocker_pane

0xbbf8,	// (0x00018ab0) cell_cmode_rocker_pane_ParamLimits

0xbbf8,	// (0x00018ab0) cell_cmode_rocker_pane

0xbc0a,	// (0x00018ac2) cell_cmode_itu_pane_ParamLimits

0xbc0a,	// (0x00018ac2) cell_cmode_itu_pane

0x4fed,	// (0x00011ea5) bg_button_pane_cp06_ParamLimits

0x4fed,	// (0x00011ea5) bg_button_pane_cp06

0x9922,	// (0x000167da) cell_cmode_rocker_pane_g1_ParamLimits

0x9922,	// (0x000167da) cell_cmode_rocker_pane_g1

0xb16e,	// (0x00018026) cell_cmode_rocker_pane_g2_ParamLimits

0xb16e,	// (0x00018026) cell_cmode_rocker_pane_g2

0x0001,

0xfdd0,	// (0x0001cc88) cell_cmode_rocker_pane_g_ParamLimits

0xfdd0,	// (0x0001cc88) cell_cmode_rocker_pane_g

0x4112,	// (0x00010fca) bg_button_pane_cp07

0xbc1f,	// (0x00018ad7) cell_cmode_itu_pane_g1

0xbc28,	// (0x00018ae0) cell_cmode_itu_pane_t1

0xbc36,	// (0x00018aee) cell_cmode_itu_pane_t2

0x0001,

0xfdd5,	// (0x0001cc8d) cell_cmode_itu_pane_t

0xb393,	// (0x0001824b) aid_touch_ctrl_left

0xb39b,	// (0x00018253) aid_touch_ctrl_right

0x4112,	// (0x00010fca) compa_mode_pane

0x1c42,	// (0x0000eafa) aid_cmod_rocker_key_size_cp

0x1c4c,	// (0x0000eb04) aid_cmode_itu_key_size_cp

0xbc58,	// (0x00018b10) compa_mode_pane_g1

0xbc60,	// (0x00018b18) compa_mode_pane_g2

0xbc68,	// (0x00018b20) compa_mode_pane_g3

0x0002,

0xfdda,	// (0x0001cc92) compa_mode_pane_g

0x1c56,	// (0x0000eb0e) main_comp_mode_itu_pane_cp

0x1c5e,	// (0x0000eb16) main_comp_mode_rocker_pane_cp

0x1c66,	// (0x0000eb1e) cell_cmode_itu_pane_cp_ParamLimits

0x1c66,	// (0x0000eb1e) cell_cmode_itu_pane_cp

0x1c7b,	// (0x0000eb33) cell_cmode_rocker_pane_cp_ParamLimits

0x1c7b,	// (0x0000eb33) cell_cmode_rocker_pane_cp

0x4fed,	// (0x00011ea5) bg_button_pane_cp06_cp_ParamLimits

0x4fed,	// (0x00011ea5) bg_button_pane_cp06_cp

0x9922,	// (0x000167da) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x9922,	// (0x000167da) cell_cmode_rocker_pane_g1_cp

0x96a4,	// (0x0001655c) cell_cmode_rocker_pane_g2_cp

0x4112,	// (0x00010fca) bg_button_pane_cp07_cp

0x1c8d,	// (0x0000eb45) cell_cmode_itu_pane_g1_cp

0x1c96,	// (0x0000eb4e) cell_cmode_itu_pane_t1_cp

0x1c96,	// (0x0000eb4e) cell_cmode_itu_pane_t2_cp

0x034c,	// (0x0000d204) settings_code_pane_cp2

0x4206,	// (0x000110be) bg_popup_window_pane_cp3_ParamLimits

0x4683,	// (0x0001153b) heading_pane_cp3_ParamLimits

0x468f,	// (0x00011547) listscroll_popup_graphic_pane_ParamLimits

0x341b,	// (0x000102d3) fep_hwr_aid_pane_ParamLimits

0x3893,	// (0x0001074b) aid_touch_sctrl_top_ParamLimits

0x38ae,	// (0x00010766) sctrl_sk_top_pane_g1_ParamLimits

0x3672,	// (0x0001052a) sctrl_sk_top_pane_g2_ParamLimits

0xfd10,	// (0x0001cbc8) sctrl_sk_top_pane_g_ParamLimits

0x38bb,	// (0x00010773) sctrl_sk_top_pane_t1_ParamLimits

0x3893,	// (0x0001074b) aid_touch_sctrl_bottom_ParamLimits

0x38bb,	// (0x00010773) sctrl_sk_bottom_pane_t1_ParamLimits

0xb2dc,	// (0x00018194) aid_area_touch_clock

0xcede,	// (0x00019d96) aid_vkb2_area_top_pane_cell_ParamLimits

0xcede,	// (0x00019d96) aid_vkb2_area_top_pane_cell

0xcf89,	// (0x00019e41) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf89,	// (0x00019e41) aid_vkb2_area_bottom_pane_cell

0xb83d,	// (0x000186f5) popup_char_count_window

0xbcb5,	// (0x00018b6d) popup_char_count_window_g1

0xbcbe,	// (0x00018b76) popup_char_count_window_g2

0xbcc7,	// (0x00018b7f) popup_char_count_window_g3

0x0002,

0xfde1,	// (0x0001cc99) popup_char_count_window_g

0xbcd0,	// (0x00018b88) popup_char_count_window_t1

0x396a,	// (0x00010822) popup_fep_char_preview_window_ParamLimits

0x396a,	// (0x00010822) popup_fep_char_preview_window

0xcefe,	// (0x00019db6) vkb2_top_candi_pane_ParamLimits

0xcefe,	// (0x00019db6) vkb2_top_candi_pane

0x1ca4,	// (0x0000eb5c) cell_vkb2_top_candi_pane_ParamLimits

0x1ca4,	// (0x0000eb5c) cell_vkb2_top_candi_pane

0x3ed2,	// (0x00010d8a) bg_popup_fep_char_preview_window_ParamLimits

0x3ed2,	// (0x00010d8a) bg_popup_fep_char_preview_window

0x3ee0,	// (0x00010d98) popup_fep_char_preview_window_t1_ParamLimits

0x3ee0,	// (0x00010d98) popup_fep_char_preview_window_t1

0xbd2b,	// (0x00018be3) bg_popup_fep_char_preview_window_g1

0xbd33,	// (0x00018beb) bg_popup_fep_char_preview_window_g2

0xbd3b,	// (0x00018bf3) bg_popup_fep_char_preview_window_g3

0xbd6c,	// (0x00018c24) bg_popup_fep_char_preview_window_g4

0xbd74,	// (0x00018c2c) bg_popup_fep_char_preview_window_g5

0x3f1a,	// (0x00010dd2) bg_popup_fep_char_preview_window_g6

0xbd7c,	// (0x00018c34) bg_popup_fep_char_preview_window_g7

0xbd43,	// (0x00018bfb) bg_popup_fep_char_preview_window_g8

0xbd84,	// (0x00018c3c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde8,	// (0x0001cca0) bg_popup_fep_char_preview_window_g

0x3672,	// (0x0001052a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3672,	// (0x0001052a) cell_vkb2_top_candi_pane_g1

0x3680,	// (0x00010538) cell_vkb2_top_candi_pane_g2_ParamLimits

0x3680,	// (0x00010538) cell_vkb2_top_candi_pane_g2

0xbd4b,	// (0x00018c03) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbd4b,	// (0x00018c03) cell_vkb2_top_candi_pane_g3

0x3f22,	// (0x00010dda) cell_vkb2_top_candi_pane_g4_ParamLimits

0x3f22,	// (0x00010dda) cell_vkb2_top_candi_pane_g4

0x9f40,	// (0x00016df8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9f40,	// (0x00016df8) cell_vkb2_top_candi_pane_g5

0x3f43,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x3f43,	// (0x00010dfb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfb,	// (0x0001ccb3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfb,	// (0x0001ccb3) cell_vkb2_top_candi_pane_g

0x3f51,	// (0x00010e09) cell_vkb2_top_candi_pane_t1

0x327b,	// (0x00010133) aid_size_touch_slider_mark_ParamLimits

0x327b,	// (0x00010133) aid_size_touch_slider_mark

0x19c4,	// (0x0000e87c) grid_graphic2_catg_pane_ParamLimits

0x19c4,	// (0x0000e87c) grid_graphic2_catg_pane

0x1a80,	// (0x0000e938) popup_grid_graphic2_window_t1_ParamLimits

0x1a80,	// (0x0000e938) popup_grid_graphic2_window_t1

0x1a96,	// (0x0000e94e) popup_grid_graphic2_window_t2_ParamLimits

0x1a96,	// (0x0000e94e) popup_grid_graphic2_window_t2

0x0001,

0xfdb6,	// (0x0001cc6e) popup_grid_graphic2_window_t_ParamLimits

0xfdb6,	// (0x0001cc6e) popup_grid_graphic2_window_t

0x44a9,	// (0x00011361) bg_button_pane_cp05_ParamLimits

0x1c1c,	// (0x0000ead4) cell_graphic2_control_pane_g1_ParamLimits

0x1d0a,	// (0x0000ebc2) cell_graphic2_catg_pane_ParamLimits

0x1d0a,	// (0x0000ebc2) cell_graphic2_catg_pane

0x4112,	// (0x00010fca) bg_button_pane_cp12

0x1d1c,	// (0x0000ebd4) cell_graphic2_catg_pane_g1

0xb2a8,	// (0x00018160) cell_tb_ext_pane_t1_ParamLimits

0x3d0c,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3d0c,	// (0x00010bc4) vkb2_top_cell_right_narrow_pane

0x3d24,	// (0x00010bdc) vkb2_top_cell_right_wide_pane_ParamLimits

0x3d24,	// (0x00010bdc) vkb2_top_cell_right_wide_pane

0x340d,	// (0x000102c5) bg_vkb2_func_pane_ParamLimits

0x340d,	// (0x000102c5) bg_vkb2_func_pane

0x3d95,	// (0x00010c4d) vkb2_top_cell_left_pane_g1_ParamLimits

0x340d,	// (0x000102c5) bg_vkb2_fuc_pane_cp03_ParamLimits

0x340d,	// (0x000102c5) bg_vkb2_fuc_pane_cp03

0x3df3,	// (0x00010cab) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x6cb7,	// (0x00013b6f) bg_vkb2_func_pane_g1

0x6cbf,	// (0x00013b77) bg_vkb2_func_pane_g2

0x6ccf,	// (0x00013b87) bg_vkb2_func_pane_g3

0x6cc7,	// (0x00013b7f) bg_vkb2_func_pane_g4

0x6cd7,	// (0x00013b8f) bg_vkb2_func_pane_g5

0x6cdf,	// (0x00013b97) bg_vkb2_func_pane_g6

0x6ce7,	// (0x00013b9f) bg_vkb2_func_pane_g7

0x6cef,	// (0x00013ba7) bg_vkb2_func_pane_g8

0x6caf,	// (0x00013b67) bg_vkb2_func_pane_g9

0x0008,

0xfe08,	// (0x0001ccc0) bg_vkb2_func_pane_g

0x340d,	// (0x000102c5) bg_vkb2_fuc_pane_cp01_ParamLimits

0x340d,	// (0x000102c5) bg_vkb2_fuc_pane_cp01

0x3d95,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3d95,	// (0x00010c4d) vkb2_top_cell_right_wide_pane_g1

0x340d,	// (0x000102c5) bg_vkb2_fuc_pane_cp02_ParamLimits

0x340d,	// (0x000102c5) bg_vkb2_fuc_pane_cp02

0x3df3,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3df3,	// (0x00010cab) vkb2_top_cell_right_narrow_pane_g1

0x0e8b,	// (0x0000dd43) aid_touch_area_decrease_ParamLimits

0x0e8b,	// (0x0000dd43) aid_touch_area_decrease

0x0ebf,	// (0x0000dd77) aid_touch_area_increase_ParamLimits

0x0ebf,	// (0x0000dd77) aid_touch_area_increase

0x0ee7,	// (0x0000dd9f) aid_touch_area_mute_ParamLimits

0x0ee7,	// (0x0000dd9f) aid_touch_area_mute

0x0f17,	// (0x0000ddcf) aid_touch_area_slider_ParamLimits

0x0f17,	// (0x0000ddcf) aid_touch_area_slider

0x0f57,	// (0x0000de0f) popup_slider_window_g4_ParamLimits

0x0f57,	// (0x0000de0f) popup_slider_window_g4

0x0f7f,	// (0x0000de37) popup_slider_window_g5_ParamLimits

0x0f7f,	// (0x0000de37) popup_slider_window_g5

0x0fb3,	// (0x0000de6b) popup_slider_window_g6_ParamLimits

0x0fb3,	// (0x0000de6b) popup_slider_window_g6

0xb084,	// (0x00017f3c) popup_slider_window_t2_ParamLimits

0xb084,	// (0x00017f3c) popup_slider_window_t2

0x0001,

0xfd04,	// (0x0001cbbc) popup_slider_window_t_ParamLimits

0xfd04,	// (0x0001cbbc) popup_slider_window_t

0x0fcf,	// (0x0000de87) slider_pane_ParamLimits

0x0fcf,	// (0x0000de87) slider_pane

0xbda7,	// (0x00018c5f) slider_pane_g1_ParamLimits

0xbda7,	// (0x00018c5f) slider_pane_g1

0xbdbb,	// (0x00018c73) slider_pane_g2_ParamLimits

0xbdbb,	// (0x00018c73) slider_pane_g2

0xbdd1,	// (0x00018c89) slider_pane_g3_ParamLimits

0xbdd1,	// (0x00018c89) slider_pane_g3

0x0003,

0xfe1b,	// (0x0001ccd3) slider_pane_g_ParamLimits

0xfe1b,	// (0x0001ccd3) slider_pane_g

0xefd2,	// (0x0001be8a) popup_tb_float_extension_window_ParamLimits

0xefd2,	// (0x0001be8a) popup_tb_float_extension_window

0xbdfd,	// (0x00018cb5) aid_size_cell_tb_float_ext

0x4112,	// (0x00010fca) bg_popup_sub_window_cp28

0xbe09,	// (0x00018cc1) grid_tb_float_ext_pane

0xbe13,	// (0x00018ccb) cell_tb_float_ext_pane_ParamLimits

0xbe13,	// (0x00018ccb) cell_tb_float_ext_pane

0xbe2d,	// (0x00018ce5) cell_tb_float_ext_pane_g1

0xbe36,	// (0x00018cee) grid_highlight_pane_cp12

0xcce7,	// (0x00019b9f) cell_last_hwr_side_pane_ParamLimits

0xcce7,	// (0x00019b9f) cell_last_hwr_side_pane

0x96a4,	// (0x0001655c) cell_last_hwr_side_pane_g1

0xbe3f,	// (0x00018cf7) cell_last_hwr_side_pane_g2

0x0001,

0xfe24,	// (0x0001ccdc) cell_last_hwr_side_pane_g

0xd065,	// (0x00019f1d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd065,	// (0x00019f1d) vkb2_area_bottom_space_btn_pane

0x3672,	// (0x0001052a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xb8f2,	// (0x000187aa) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x3f51,	// (0x00010e09) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3f70,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3f70,	// (0x00010e28) vkb2_area_bottom_space_btn_pane_g1

0x3faa,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3faa,	// (0x00010e62) vkb2_area_bottom_space_btn_pane_g2

0x3fe0,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3fe0,	// (0x00010e98) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe29,	// (0x0001cce1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe29,	// (0x0001cce1) vkb2_area_bottom_space_btn_pane_g

0x34d0,	// (0x00010388) cel_fep_hwr_func_pane_ParamLimits

0x34d0,	// (0x00010388) cel_fep_hwr_func_pane

0xccbc,	// (0x00019b74) cell_hwr_side_button_pane_ParamLimits

0xccbc,	// (0x00019b74) cell_hwr_side_button_pane

0xb2dc,	// (0x00018194) aid_area_touch_clock_ParamLimits

0x44a9,	// (0x00011361) bg_uniindi_top_pane_ParamLimits

0xb2ee,	// (0x000181a6) uniindi_top_pane_g1_ParamLimits

0xb304,	// (0x000181bc) uniindi_top_pane_g2_ParamLimits

0xb310,	// (0x000181c8) uniindi_top_pane_g3_ParamLimits

0xb321,	// (0x000181d9) uniindi_top_pane_g4_ParamLimits

0xfd3c,	// (0x0001cbf4) uniindi_top_pane_g_ParamLimits

0xb32e,	// (0x000181e6) uniindi_top_pane_t1_ParamLimits

0x44a9,	// (0x00011361) bg_vkb2_func_pane_cp01_ParamLimits

0x44a9,	// (0x00011361) bg_vkb2_func_pane_cp01

0xd17e,	// (0x0001a036) cel_fep_hwr_func_pane_g1_ParamLimits

0xd17e,	// (0x0001a036) cel_fep_hwr_func_pane_g1

0x44a9,	// (0x00011361) bg_vkb2_func_pane_cp02_ParamLimits

0x44a9,	// (0x00011361) bg_vkb2_func_pane_cp02

0xd17e,	// (0x0001a036) cell_hwr_side_button_pane_g1_ParamLimits

0xd17e,	// (0x0001a036) cell_hwr_side_button_pane_g1

0x6af9,	// (0x000139b1) status_pane_g4_ParamLimits

0x6af9,	// (0x000139b1) status_pane_g4

0x6b13,	// (0x000139cb) status_pane_t1

0x93de,	// (0x00016296) form2_midp_gauge_slider_cont_pane

0x93e6,	// (0x0001629e) form2_midp_gauge_slider_pane_t1_ParamLimits

0x0678,	// (0x0000d530) form2_midp_gauge_slider_pane_t2_ParamLimits

0x068a,	// (0x0000d542) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x0001c9b4) form2_midp_gauge_slider_pane_t_ParamLimits

0x941c,	// (0x000162d4) form2_midp_slider_pane_ParamLimits

0x392a,	// (0x000107e2) aid_size_cell_func_vkb2_ParamLimits

0x392a,	// (0x000107e2) aid_size_cell_func_vkb2

0xbde9,	// (0x00018ca1) slider_pane_g4_ParamLimits

0xbde9,	// (0x00018ca1) slider_pane_g4

0xd0c6,	// (0x00019f7e) form2_midp_gauge_slider_pane_t2_cp01

0xd0d4,	// (0x00019f8c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd0d4,	// (0x00019f8c) form2_midp_gauge_slider_pane_t3_cp01

0x4055,	// (0x00010f0d) form2_midp_slider_pane_cp01

0x4112,	// (0x00010fca) navi_smil_pane

0xd1ae,	// (0x0001a066) navi_smil_pane_g1

0xd1b6,	// (0x0001a06e) navi_smil_pane_t1

0xd18c,	// (0x0001a044) form2_midp_slider_pane_g1

0xd195,	// (0x0001a04d) form2_midp_slider_pane_g2

0xd19d,	// (0x0001a055) form2_midp_slider_pane_g3

0xd18c,	// (0x0001a044) form2_midp_slider_pane_g4

0x1d50,	// (0x0000ec08) form2_midp_slider_pane_g5

0x0004,

0xfe32,	// (0x0001ccea) form2_midp_slider_pane_g

0x401a,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x401a,	// (0x00010ed2) vkb2_area_bottom_space_btn_pane_g4

0xf1b5,	// (0x0001c06d) lc0_navi_pane_ParamLimits

0xf1b5,	// (0x0001c06d) lc0_navi_pane

0xf21f,	// (0x0001c0d7) lc0_stat_indi_pane_ParamLimits

0xf21f,	// (0x0001c0d7) lc0_stat_indi_pane

0xf234,	// (0x0001c0ec) ls0_title_pane_ParamLimits

0xf234,	// (0x0001c0ec) ls0_title_pane

0x4fed,	// (0x00011ea5) bg_popup_sub_pane_cp14_ParamLimits

0xb2c3,	// (0x0001817b) list_uniindi_pane_ParamLimits

0xb2cf,	// (0x00018187) uniindi_top_pane_ParamLimits

0xb36b,	// (0x00018223) list_single_uniindi_pane_g1_ParamLimits

0xb37e,	// (0x00018236) list_single_uniindi_pane_t1_ParamLimits

0xd0f1,	// (0x00019fa9) lc0_stat_clock_pane_ParamLimits

0xd0f1,	// (0x00019fa9) lc0_stat_clock_pane

0x1d75,	// (0x0000ec2d) lc0_stat_indi_pane_g1_ParamLimits

0x1d75,	// (0x0000ec2d) lc0_stat_indi_pane_g1

0x1d68,	// (0x0000ec20) lc0_stat_indi_pane_g2_ParamLimits

0x1d68,	// (0x0000ec20) lc0_stat_indi_pane_g2

0x0001,

0xfe3d,	// (0x0001ccf5) lc0_stat_indi_pane_g_ParamLimits

0xfe3d,	// (0x0001ccf5) lc0_stat_indi_pane_g

0xd0fe,	// (0x00019fb6) lc0_uni_indicator_pane_ParamLimits

0xd0fe,	// (0x00019fb6) lc0_uni_indicator_pane

0x1d8f,	// (0x0000ec47) ls0_title_pane_g1_ParamLimits

0x1d8f,	// (0x0000ec47) ls0_title_pane_g1

0x1da3,	// (0x0000ec5b) ls0_title_pane_t1_ParamLimits

0x1da3,	// (0x0000ec5b) ls0_title_pane_t1

0xd10b,	// (0x00019fc3) lc0_uni_indicator_pane_g1_ParamLimits

0xd10b,	// (0x00019fc3) lc0_uni_indicator_pane_g1

0xd1c4,	// (0x0001a07c) lc0_stat_clock_pane_t1

0x4112,	// (0x00010fca) main_ai5_pane

0xd1d2,	// (0x0001a08a) ai5_sk_pane_ParamLimits

0xd1d2,	// (0x0001a08a) ai5_sk_pane

0x1df8,	// (0x0000ecb0) cell_ai5_widget_pane_ParamLimits

0x1df8,	// (0x0000ecb0) cell_ai5_widget_pane

0xd1df,	// (0x0001a097) aid_size_cell_widget_grid

0xd1f3,	// (0x0001a0ab) bg_ai5_widget_pane_ParamLimits

0xd1f3,	// (0x0001a0ab) bg_ai5_widget_pane

0xd23d,	// (0x0001a0f5) cell_ai5_widget_pane_g2

0xd24d,	// (0x0001a105) cell_ai5_widget_pane_g3

0xd26c,	// (0x0001a124) cell_ai5_widget_pane_g4

0xd278,	// (0x0001a130) cell_ai5_widget_pane_g5

0xd284,	// (0x0001a13c) cell_ai5_widget_pane_g6

0xd290,	// (0x0001a148) cell_ai5_widget_pane_g7

0xd2d8,	// (0x0001a190) cell_ai5_widget_pane_t1_ParamLimits

0xd2d8,	// (0x0001a190) cell_ai5_widget_pane_t1

0xd2f5,	// (0x0001a1ad) cell_ai5_widget_pane_t2_ParamLimits

0xd2f5,	// (0x0001a1ad) cell_ai5_widget_pane_t2

0xd30d,	// (0x0001a1c5) cell_ai5_widget_pane_t3_ParamLimits

0xd30d,	// (0x0001a1c5) cell_ai5_widget_pane_t3

0xd325,	// (0x0001a1dd) cell_ai5_widget_pane_t4_ParamLimits

0xd325,	// (0x0001a1dd) cell_ai5_widget_pane_t4

0xd33f,	// (0x0001a1f7) cell_ai5_widget_pane_t5_ParamLimits

0xd33f,	// (0x0001a1f7) cell_ai5_widget_pane_t5

0xd35e,	// (0x0001a216) cell_ai5_widget_pane_t6_ParamLimits

0xd35e,	// (0x0001a216) cell_ai5_widget_pane_t6

0xd370,	// (0x0001a228) cell_ai5_widget_pane_t7_ParamLimits

0xd370,	// (0x0001a228) cell_ai5_widget_pane_t7

0xd389,	// (0x0001a241) cell_ai5_widget_pane_t8_ParamLimits

0xd389,	// (0x0001a241) cell_ai5_widget_pane_t8

0x0009,

0xfe57,	// (0x0001cd0f) cell_ai5_widget_pane_t_ParamLimits

0xfe57,	// (0x0001cd0f) cell_ai5_widget_pane_t

0xd3d5,	// (0x0001a28d) grid_ai5_widget_pane

0x4fed,	// (0x00011ea5) highlight_cell_ai5_widget_pane_ParamLimits

0x4fed,	// (0x00011ea5) highlight_cell_ai5_widget_pane

0x1e62,	// (0x0000ed1a) ai5_sk_left_pane

0x1e6c,	// (0x0000ed24) ai5_sk_middle_pane

0x1e76,	// (0x0000ed2e) ai5_sk_right_pane

0xd3ed,	// (0x0001a2a5) bg_ai5_widget_pane_g1_ParamLimits

0xd3ed,	// (0x0001a2a5) bg_ai5_widget_pane_g1

0xd3f9,	// (0x0001a2b1) bg_ai5_widget_pane_g2_ParamLimits

0xd3f9,	// (0x0001a2b1) bg_ai5_widget_pane_g2

0xd405,	// (0x0001a2bd) bg_ai5_widget_pane_g3_ParamLimits

0xd405,	// (0x0001a2bd) bg_ai5_widget_pane_g3

0xd411,	// (0x0001a2c9) bg_ai5_widget_pane_g4_ParamLimits

0xd411,	// (0x0001a2c9) bg_ai5_widget_pane_g4

0xd41d,	// (0x0001a2d5) bg_ai5_widget_pane_g5_ParamLimits

0xd41d,	// (0x0001a2d5) bg_ai5_widget_pane_g5

0xd429,	// (0x0001a2e1) bg_ai5_widget_pane_g6_ParamLimits

0xd429,	// (0x0001a2e1) bg_ai5_widget_pane_g6

0xd435,	// (0x0001a2ed) bg_ai5_widget_pane_g7_ParamLimits

0xd435,	// (0x0001a2ed) bg_ai5_widget_pane_g7

0xd441,	// (0x0001a2f9) bg_ai5_widget_pane_g8_ParamLimits

0xd441,	// (0x0001a2f9) bg_ai5_widget_pane_g8

0xd44d,	// (0x0001a305) bg_ai5_widget_pane_g9_ParamLimits

0xd44d,	// (0x0001a305) bg_ai5_widget_pane_g9

0x0008,

0xfe6c,	// (0x0001cd24) bg_ai5_widget_pane_g_ParamLimits

0xfe6c,	// (0x0001cd24) bg_ai5_widget_pane_g

0xd480,	// (0x0001a338) cell_shortcut_ai5_widget_pane_ParamLimits

0xd480,	// (0x0001a338) cell_shortcut_ai5_widget_pane

0x42e9,	// (0x000111a1) bg_cell_shortcut_ai5_widget_pane

0xd491,	// (0x0001a349) cell_grid_ai5_widget_pane_g1

0xd49a,	// (0x0001a352) highlight_cell_shortcut_ai5_widget_pane

0x6cb7,	// (0x00013b6f) ai5_sk_left_pane_g1

0xd4a2,	// (0x0001a35a) ai5_sk_left_pane_g2

0xd4aa,	// (0x0001a362) ai5_sk_left_pane_g3

0xd4b2,	// (0x0001a36a) ai5_sk_left_pane_g4

0x0003,

0xfe7f,	// (0x0001cd37) ai5_sk_left_pane_g

0xd4ba,	// (0x0001a372) ai5_sk_left_pane_t1

0x6cbf,	// (0x00013b77) ai5_sk_right_pane_g1

0xd4c8,	// (0x0001a380) ai5_sk_right_pane_g2

0xd4d0,	// (0x0001a388) ai5_sk_right_pane_g3

0xd4d8,	// (0x0001a390) ai5_sk_right_pane_g4

0x0003,

0xfe88,	// (0x0001cd40) ai5_sk_right_pane_g

0xd4e0,	// (0x0001a398) ai5_sk_right_pane_t1

0x6cbf,	// (0x00013b77) ai5_sk_middle_pane_g1

0x6cb7,	// (0x00013b6f) ai5_sk_middle_pane_g2

0x6cd7,	// (0x00013b8f) ai5_sk_middle_pane_g3

0xd4d0,	// (0x0001a388) ai5_sk_middle_pane_g4

0xd4aa,	// (0x0001a362) ai5_sk_middle_pane_g5

0xd4ee,	// (0x0001a3a6) ai5_sk_middle_pane_g6

0x1e80,	// (0x0000ed38) ai5_sk_middle_pane_g7

0x0006,

0xfe91,	// (0x0001cd49) ai5_sk_middle_pane_g

0xf0a1,	// (0x0001bf59) aid_touch_area_size_lc0_ParamLimits

0xf0a1,	// (0x0001bf59) aid_touch_area_size_lc0

0x36a1,	// (0x00010559) cell_hwr_candidate_pane_t1_ParamLimits

0x67e2,	// (0x0001369a) aid_touch_navi_pane

0xf327,	// (0x0001c1df) status_dt_navi_pane_ParamLimits

0xf327,	// (0x0001c1df) status_dt_navi_pane

0xf33f,	// (0x0001c1f7) status_dt_sta_pane_ParamLimits

0xf33f,	// (0x0001c1f7) status_dt_sta_pane

0x1e88,	// (0x0000ed40) dt_sta_controll_pane

0x1e95,	// (0x0000ed4d) dt_sta_indi_pane

0x1ea2,	// (0x0000ed5a) dt_sta_title_pane

0x44a9,	// (0x00011361) bg_dt_sta_indi_pane_ParamLimits

0x44a9,	// (0x00011361) bg_dt_sta_indi_pane

0xd4f6,	// (0x0001a3ae) dt_sta_battery_pane

0xd4fe,	// (0x0001a3b6) dt_sta_indi_pane_g1

0xd507,	// (0x0001a3bf) dt_sta_indi_pane_g2

0xd510,	// (0x0001a3c8) dt_sta_indi_pane_g3

0x0002,

0xfea0,	// (0x0001cd58) dt_sta_indi_pane_g

0xd519,	// (0x0001a3d1) dt_sta_signal_pane

0x4fed,	// (0x00011ea5) bg_dt_sta_title_pane_ParamLimits

0x4fed,	// (0x00011ea5) bg_dt_sta_title_pane

0xd522,	// (0x0001a3da) dt_sta_title_pane_g1

0xd52a,	// (0x0001a3e2) dt_sta_title_pane_t1_ParamLimits

0xd52a,	// (0x0001a3e2) dt_sta_title_pane_t1

0x4112,	// (0x00010fca) bg_dt_sta_control_pane

0xd53f,	// (0x0001a3f7) dt_sta_controll_pane_g1

0xd548,	// (0x0001a400) bg_dt_sta_title_pane_g1

0xd551,	// (0x0001a409) bg_dt_sta_title_pane_g2

0xd55a,	// (0x0001a412) bg_dt_sta_title_pane_g3

0x0002,

0xfea7,	// (0x0001cd5f) bg_dt_sta_title_pane_g

0x96a4,	// (0x0001655c) bg_dt_sta_indi_pane_g1

0xd563,	// (0x0001a41b) dt_sta_signal_pane_g1

0xd56b,	// (0x0001a423) dt_sta_signal_pane_g2

0x0001,

0xfeae,	// (0x0001cd66) dt_sta_signal_pane_g

0xd573,	// (0x0001a42b) dt_sta_battery_pane_g1

0xd57c,	// (0x0001a434) dt_sta_battery_pane_t1

0x96a4,	// (0x0001655c) bg_dt_sta_control_pane_g1

0x58da,	// (0x00012792) fep_china_uni_eep_pane

0x58e2,	// (0x0001279a) fep_china_uni_entry_pane_ParamLimits

0x58f2,	// (0x000127aa) popup_fep_china_uni_window_g1_ParamLimits

0x5902,	// (0x000127ba) popup_fep_china_uni_window_g2_ParamLimits

0x5902,	// (0x000127ba) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001c5e8) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001c5e8) popup_fep_china_uni_window_g

0xd58b,	// (0x0001a443) fep_china_uni_eep_pane_g1

0xd593,	// (0x0001a44b) fep_china_uni_eep_pane_t1

0xd1a5,	// (0x0001a05d) aid_touch_area_size_smil_player

0x692e,	// (0x000137e6) lc0_clock_pane

0x6b07,	// (0x000139bf) status_pane_g5_ParamLimits

0x6b07,	// (0x000139bf) status_pane_g5

0xeb78,	// (0x0001ba30) popup_keymap_window

0x6acd,	// (0x00013985) status_icon_pane

0xd24d,	// (0x0001a105) cell_ai5_widget_pane_g3_ParamLimits

0xd26c,	// (0x0001a124) cell_ai5_widget_pane_g4_ParamLimits

0xd278,	// (0x0001a130) cell_ai5_widget_pane_g5_ParamLimits

0xd29c,	// (0x0001a154) cell_ai5_widget_pane_g8_ParamLimits

0xd29c,	// (0x0001a154) cell_ai5_widget_pane_g8

0xd2b0,	// (0x0001a168) cell_ai5_widget_pane_g9_ParamLimits

0xd2b0,	// (0x0001a168) cell_ai5_widget_pane_g9

0xd2c4,	// (0x0001a17c) cell_ai5_widget_pane_g10_ParamLimits

0xd2c4,	// (0x0001a17c) cell_ai5_widget_pane_g10

0xd5a2,	// (0x0001a45a) status_icon_pane_g1

0x4112,	// (0x00010fca) bg_popup_sub_pane_cp13

0xd5aa,	// (0x0001a462) popup_keymap_window_t1

0xe987,	// (0x0001b83f) control_pane_g6_ParamLimits

0xe987,	// (0x0001b83f) control_pane_g6

0xe994,	// (0x0001b84c) control_pane_g7_ParamLimits

0xe994,	// (0x0001b84c) control_pane_g7

0xe9a1,	// (0x0001b859) control_pane_g8_ParamLimits

0xe9a1,	// (0x0001b859) control_pane_g8

0x1e88,	// (0x0000ed40) dt_sta_controll_pane_ParamLimits

0x1e95,	// (0x0000ed4d) dt_sta_indi_pane_ParamLimits

0x1ea2,	// (0x0000ed5a) dt_sta_title_pane_ParamLimits

0x49c4,	// (0x0001187c) aid_size_touch_scroll_bar_cale

0x2741,	// (0x0000f5f9) popup_discreet_window_ParamLimits

0x2741,	// (0x0000f5f9) popup_discreet_window

0xc91e,	// (0x000197d6) popup_sk_window

0x73ee,	// (0x000142a6) bg_popup_sub_pane_cp28_ParamLimits

0x73ee,	// (0x000142a6) bg_popup_sub_pane_cp28

0xd5b8,	// (0x0001a470) popup_discreet_window_g1_ParamLimits

0xd5b8,	// (0x0001a470) popup_discreet_window_g1

0xd5d8,	// (0x0001a490) popup_discreet_window_t1_ParamLimits

0xd5d8,	// (0x0001a490) popup_discreet_window_t1

0xd5f6,	// (0x0001a4ae) popup_discreet_window_t2_ParamLimits

0xd5f6,	// (0x0001a4ae) popup_discreet_window_t2

0x0002,

0xfeb3,	// (0x0001cd6b) popup_discreet_window_t_ParamLimits

0xfeb3,	// (0x0001cd6b) popup_discreet_window_t

0x408c,	// (0x00010f44) popup_sk_window_g1

0x4096,	// (0x00010f4e) popup_sk_window_g2

0x0001,

0xfeba,	// (0x0001cd72) popup_sk_window_g

0x40a0,	// (0x00010f58) popup_sk_window_t1

0x40ae,	// (0x00010f66) popup_sk_window_t1_copy1

0xd23d,	// (0x0001a0f5) cell_ai5_widget_pane_g2_ParamLimits

0xd39b,	// (0x0001a253) cell_ai5_widget_pane_t9_ParamLimits

0xd39b,	// (0x0001a253) cell_ai5_widget_pane_t9

0x4112,	// (0x00010fca) main_fep_fshwr2_pane

0x1eb4,	// (0x0000ed6c) aid_fshwr2_btn_pane

0x1ebc,	// (0x0000ed74) aid_fshwr2_syb_pane

0x1ec4,	// (0x0000ed7c) aid_fshwr2_txt_pane

0x1ecc,	// (0x0000ed84) fshwr2_func_candi_pane

0x1ed6,	// (0x0000ed8e) fshwr2_hwr_syb_pane

0x1ee4,	// (0x0000ed9c) fshwr2_icf_pane

0x4112,	// (0x00010fca) fshwr2_icf_bg_pane

0x1eee,	// (0x0000eda6) fshwr2_icf_pane_t1_ParamLimits

0x1eee,	// (0x0000eda6) fshwr2_icf_pane_t1

0x96a4,	// (0x0001655c) fshwr2_func_candi_pane_g1

0xd65c,	// (0x0001a514) fshwr2_func_candi_row_pane_ParamLimits

0xd65c,	// (0x0001a514) fshwr2_func_candi_row_pane

0x1f06,	// (0x0000edbe) cell_fshwr2_syb_pane_ParamLimits

0x1f06,	// (0x0000edbe) cell_fshwr2_syb_pane

0x9922,	// (0x000167da) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9922,	// (0x000167da) fshwr2_hwr_syb_pane_g1

0x4112,	// (0x00010fca) bg_popup_call_pane_cp01

0xd66d,	// (0x0001a525) fshwr2_func_candi_cell_pane_ParamLimits

0xd66d,	// (0x0001a525) fshwr2_func_candi_cell_pane

0xd69e,	// (0x0001a556) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd69e,	// (0x0001a556) fshwr2_func_candi_cell_bg_pane

0xd6b8,	// (0x0001a570) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd6b8,	// (0x0001a570) fshwr2_func_candi_cell_pane_g1

0xd6e0,	// (0x0001a598) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd6e0,	// (0x0001a598) fshwr2_func_candi_cell_pane_t1

0x4112,	// (0x00010fca) bg_button_pane_cp08

0x5e5f,	// (0x00012d17) cell_fshwr2_syb_bg_pane

0x1f20,	// (0x0000edd8) cell_fshwr2_syb_bg_pane_g1

0x1f28,	// (0x0000ede0) cell_fshwr2_syb_bg_pane_t1

0x4fed,	// (0x00011ea5) main_tmo_pane

0x7efd,	// (0x00014db5) uni_indicator_pane_g1_ParamLimits

0x7f12,	// (0x00014dca) uni_indicator_pane_g2_ParamLimits

0x7f28,	// (0x00014de0) uni_indicator_pane_g3_ParamLimits

0x7f3e,	// (0x00014df6) uni_indicator_pane_g4_ParamLimits

0x7f3e,	// (0x00014df6) uni_indicator_pane_g4

0x7f52,	// (0x00014e0a) uni_indicator_pane_g5_ParamLimits

0x7f52,	// (0x00014e0a) uni_indicator_pane_g5

0x7f66,	// (0x00014e1e) uni_indicator_pane_g6_ParamLimits

0x7f66,	// (0x00014e1e) uni_indicator_pane_g6

0xf928,	// (0x0001c7e0) uni_indicator_pane_g_ParamLimits

0x0e67,	// (0x0000dd1f) popup_tmo_note_window_ParamLimits

0x0e67,	// (0x0000dd1f) popup_tmo_note_window

0x4112,	// (0x00010fca) fshwr2_bg_pane

0xd6d1,	// (0x0001a589) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd6d1,	// (0x0001a589) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebf,	// (0x0001cd77) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebf,	// (0x0001cd77) fshwr2_func_candi_cell_pane_g

0x96a4,	// (0x0001655c) bg_popup_window_pane_cp01

0xd6f3,	// (0x0001a5ab) bg_popup_window_pane_g1_cp01

0xd6fc,	// (0x0001a5b4) bg_popup_window_pane_cp22_ParamLimits

0xd6fc,	// (0x0001a5b4) bg_popup_window_pane_cp22

0xd70a,	// (0x0001a5c2) listscroll_tmo_link_pane_ParamLimits

0xd70a,	// (0x0001a5c2) listscroll_tmo_link_pane

0xd74a,	// (0x0001a602) popup_tmo_note_window_g1_ParamLimits

0xd74a,	// (0x0001a602) popup_tmo_note_window_g1

0xd757,	// (0x0001a60f) tmo_note_info_pane_ParamLimits

0xd757,	// (0x0001a60f) tmo_note_info_pane

0x1f37,	// (0x0000edef) list_tmo_note_info_pane_g1_ParamLimits

0x1f37,	// (0x0000edef) list_tmo_note_info_pane_g1

0xd771,	// (0x0001a629) list_tmo_note_info_pane_g2_ParamLimits

0xd771,	// (0x0001a629) list_tmo_note_info_pane_g2

0x0001,

0xfec4,	// (0x0001cd7c) list_tmo_note_info_pane_g_ParamLimits

0xfec4,	// (0x0001cd7c) list_tmo_note_info_pane_g

0xd78d,	// (0x0001a645) list_tmo_note_info_text_pane_ParamLimits

0xd78d,	// (0x0001a645) list_tmo_note_info_text_pane

0xd7cf,	// (0x0001a687) list_tmo_link_pane

0xd7dc,	// (0x0001a694) scroll_pane_cp20

0xd7e9,	// (0x0001a6a1) list_single_tmo_link_pane_ParamLimits

0xd7e9,	// (0x0001a6a1) list_single_tmo_link_pane

0xd7f9,	// (0x0001a6b1) list_single_tmo_link_pane_t1

0xd807,	// (0x0001a6bf) list_tmo_note_info_text_pane_t1_ParamLimits

0xd807,	// (0x0001a6bf) list_tmo_note_info_text_pane_t1

0xe5dc,	// (0x0001b494) aid_size_touch_scroll_bar_cp01_ParamLimits

0xe5dc,	// (0x0001b494) aid_size_touch_scroll_bar_cp01

0xe50c,	// (0x0001b3c4) aid_size_touch_slider_marker

0xc90e,	// (0x000197c6) popup_settings_window_ParamLimits

0xc90e,	// (0x000197c6) popup_settings_window

0x6205,	// (0x000130bd) popup_candi_list_indi_window

0x67e2,	// (0x0001369a) aid_touch_navi_pane_ParamLimits

0x3867,	// (0x0001071f) rs_clock_indi_pane

0x3870,	// (0x00010728) sctrl_sk_bottom_pane_ParamLimits

0x3881,	// (0x00010739) sctrl_sk_top_pane_ParamLimits

0x3984,	// (0x0001083c) popup_fep_tooltip_window

0xd1df,	// (0x0001a097) aid_size_cell_widget_grid_ParamLimits

0xd231,	// (0x0001a0e9) cell_ai5_widget_pane_g1_ParamLimits

0xd231,	// (0x0001a0e9) cell_ai5_widget_pane_g1

0xd284,	// (0x0001a13c) cell_ai5_widget_pane_g6_ParamLimits

0xd290,	// (0x0001a148) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe42,	// (0x0001ccfa) cell_ai5_widget_pane_g_ParamLimits

0xfe42,	// (0x0001ccfa) cell_ai5_widget_pane_g

0xd3bf,	// (0x0001a277) cell_ai5_widget_pane_t10_ParamLimits

0xd3bf,	// (0x0001a277) cell_ai5_widget_pane_t10

0xd3d5,	// (0x0001a28d) grid_ai5_widget_pane_ParamLimits

0xd459,	// (0x0001a311) cell_contacts_ai5_widget_pane_ParamLimits

0xd459,	// (0x0001a311) cell_contacts_ai5_widget_pane

0xd60b,	// (0x0001a4c3) popup_discreet_window_t3_ParamLimits

0xd60b,	// (0x0001a4c3) popup_discreet_window_t3

0xd648,	// (0x0001a500) popup_fshwr2_char_preview_window_ParamLimits

0xd648,	// (0x0001a500) popup_fshwr2_char_preview_window

0x1f4e,	// (0x0000ee06) tmo_note_info_pane_t1

0x1f63,	// (0x0000ee1b) tmo_note_info_pane_t2

0x1f7a,	// (0x0000ee32) tmo_note_info_pane_t3

0xd7ab,	// (0x0001a663) tmo_note_info_pane_t4

0xd7bd,	// (0x0001a675) tmo_note_info_pane_t5

0x0004,

0xfec9,	// (0x0001cd81) tmo_note_info_pane_t

0xd7cf,	// (0x0001a687) list_tmo_link_pane_ParamLimits

0xd7dc,	// (0x0001a694) scroll_pane_cp20_ParamLimits

0x4112,	// (0x00010fca) bg_popup_fep_char_preview_window_cp01

0xd820,	// (0x0001a6d8) popup_fshwr2_char_preview_window_t1

0xd82e,	// (0x0001a6e6) popup_candi_list_indi_window_g1

0xd837,	// (0x0001a6ef) bg_cell_contacts_ai5_widget_pane

0xd843,	// (0x0001a6fb) cell_contacts_ai5_widget_pane_g1

0xd857,	// (0x0001a70f) cell_contacts_ai5_widget_pane_g2

0xd866,	// (0x0001a71e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed4,	// (0x0001cd8c) cell_contacts_ai5_widget_pane_g

0xd879,	// (0x0001a731) cell_contacts_ai5_widget_pane_t1

0x4fed,	// (0x00011ea5) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1ff4,	// (0x0000eeac) settings_container_pane

0x5e5f,	// (0x00012d17) listscroll_set_pane_copy1

0x8b78,	// (0x00015a30) scroll_pane_cp121_copy1

0xd88b,	// (0x0001a743) set_content_pane_copy1

0x2000,	// (0x0000eeb8) aid_height_set_list_copy1_ParamLimits

0x2000,	// (0x0000eeb8) aid_height_set_list_copy1

0x8186,	// (0x0001503e) aid_size_parent_copy1_ParamLimits

0x8186,	// (0x0001503e) aid_size_parent_copy1

0x200c,	// (0x0000eec4) button_value_adjust_pane_cp6_copy1_ParamLimits

0x200c,	// (0x0000eec4) button_value_adjust_pane_cp6_copy1

0x61dd,	// (0x00013095) list_highlight_pane_cp2_copy1_ParamLimits

0x61dd,	// (0x00013095) list_highlight_pane_cp2_copy1

0x2020,	// (0x0000eed8) list_set_pane_copy1_ParamLimits

0x2020,	// (0x0000eed8) list_set_pane_copy1

0x1f8f,	// (0x0000ee47) main_pane_set_t1_copy1_ParamLimits

0x1f8f,	// (0x0000ee47) main_pane_set_t1_copy1

0x1fc9,	// (0x0000ee81) main_pane_set_t2_copy1_ParamLimits

0x1fc9,	// (0x0000ee81) main_pane_set_t2_copy1

0x20cd,	// (0x0000ef85) main_pane_set_t3_copy1

0x20db,	// (0x0000ef93) main_pane_set_t4_copy1

0x1fe8,	// (0x0000eea0) set_content_pane_g1_copy1_ParamLimits

0x1fe8,	// (0x0000eea0) set_content_pane_g1_copy1

0x20e9,	// (0x0000efa1) setting_code_pane_copy1

0xd893,	// (0x0001a74b) setting_slider_graphic_pane_copy1

0xd893,	// (0x0001a74b) setting_slider_pane_copy1

0xd893,	// (0x0001a74b) setting_text_pane_copy1

0xd89d,	// (0x0001a755) setting_volume_pane_copy1

0x20f3,	// (0x0000efab) settings_code_pane_cp2_copy1

0x20fb,	// (0x0000efb3) settings_code_pane_cp_copy1_ParamLimits

0x20fb,	// (0x0000efb3) settings_code_pane_cp_copy1

0x210f,	// (0x0000efc7) volume_set_pane_copy1

0x2117,	// (0x0000efcf) volume_set_pane_g10_copy1

0x211f,	// (0x0000efd7) volume_set_pane_g1_copy1

0x2127,	// (0x0000efdf) volume_set_pane_g2_copy1

0x212f,	// (0x0000efe7) volume_set_pane_g3_copy1

0x2137,	// (0x0000efef) volume_set_pane_g4_copy1

0x213f,	// (0x0000eff7) volume_set_pane_g5_copy1

0x2147,	// (0x0000efff) volume_set_pane_g6_copy1

0x214f,	// (0x0000f007) volume_set_pane_g7_copy1

0x2157,	// (0x0000f00f) volume_set_pane_g8_copy1

0x215f,	// (0x0000f017) volume_set_pane_g9_copy1

0x4206,	// (0x000110be) bg_set_opt_pane_cp_copy1_ParamLimits

0x4206,	// (0x000110be) bg_set_opt_pane_cp_copy1

0xd8a6,	// (0x0001a75e) setting_slider_pane_t1_copy1_ParamLimits

0xd8a6,	// (0x0001a75e) setting_slider_pane_t1_copy1

0x2167,	// (0x0000f01f) setting_slider_pane_t2_copy1_ParamLimits

0x2167,	// (0x0000f01f) setting_slider_pane_t2_copy1

0x2181,	// (0x0000f039) setting_slider_pane_t3_copy1_ParamLimits

0x2181,	// (0x0000f039) setting_slider_pane_t3_copy1

0x2199,	// (0x0000f051) slider_set_pane_copy1_ParamLimits

0x2199,	// (0x0000f051) slider_set_pane_copy1

0x5125,	// (0x00011fdd) set_opt_bg_pane_g1_copy2

0x512d,	// (0x00011fe5) set_opt_bg_pane_g2_copy2

0xd8c4,	// (0x0001a77c) set_opt_bg_pane_g3_copy2

0x513d,	// (0x00011ff5) set_opt_bg_pane_g4_copy2

0x5145,	// (0x00011ffd) set_opt_bg_pane_g5_copy2

0x514d,	// (0x00012005) set_opt_bg_pane_g6_copy2

0x21af,	// (0x0000f067) set_opt_bg_pane_g7_copy2

0xd8ce,	// (0x0001a786) set_opt_bg_pane_g8_copy2

0xd8d8,	// (0x0001a790) set_opt_bg_pane_g9_copy2

0x40bc,	// (0x00010f74) aid_size_touch_slider_mark_copy1_ParamLimits

0x40bc,	// (0x00010f74) aid_size_touch_slider_mark_copy1

0xd8e2,	// (0x0001a79a) slider_set_pane_g1_copy1

0x40d0,	// (0x00010f88) slider_set_pane_g2_copy1

0x329b,	// (0x00010153) slider_set_pane_g3_copy1_ParamLimits

0x329b,	// (0x00010153) slider_set_pane_g3_copy1

0x32af,	// (0x00010167) slider_set_pane_g4_copy1_ParamLimits

0x32af,	// (0x00010167) slider_set_pane_g4_copy1

0x32c7,	// (0x0001017f) slider_set_pane_g5_copy1_ParamLimits

0x32c7,	// (0x0001017f) slider_set_pane_g5_copy1

0x329b,	// (0x00010153) slider_set_pane_g6_copy1_ParamLimits

0x329b,	// (0x00010153) slider_set_pane_g6_copy1

0xd132,	// (0x00019fea) slider_set_pane_g7_copy1_ParamLimits

0xd132,	// (0x00019fea) slider_set_pane_g7_copy1

0x4126,	// (0x00010fde) bg_set_opt_pane_cp2_copy1

0xd8eb,	// (0x0001a7a3) setting_slider_graphic_pane_g1_copy1

0x21cd,	// (0x0000f085) setting_slider_graphic_pane_t1_copy1

0x21dd,	// (0x0000f095) setting_slider_graphic_pane_t2_copy1

0x21ed,	// (0x0000f0a5) slider_set_pane_cp_copy1

0xd8fc,	// (0x0001a7b4) input_focus_pane_cp1_copy1

0xd905,	// (0x0001a7bd) list_set_text_pane_copy1

0xd90d,	// (0x0001a7c5) setting_text_pane_g1_copy1

0x425f,	// (0x00011117) set_text_pane_t1_copy1

0xd8fc,	// (0x0001a7b4) input_focus_pane_cp2_copy1

0xd90d,	// (0x0001a7c5) setting_code_pane_g1_copy1

0x21f5,	// (0x0000f0ad) setting_code_pane_t1_copy1

0xe8a4,	// (0x0001b75c) list_set_graphic_pane_copy1

0x4126,	// (0x00010fde) bg_set_opt_pane_cp4_copy1

0xe8b6,	// (0x0001b76e) list_set_graphic_pane_g1_copy1_ParamLimits

0xe8b6,	// (0x0001b76e) list_set_graphic_pane_g1_copy1

0x2203,	// (0x0000f0bb) list_set_graphic_pane_g2_copy1

0xe8ce,	// (0x0001b786) list_set_graphic_pane_t1_copy1_ParamLimits

0xe8ce,	// (0x0001b786) list_set_graphic_pane_t1_copy1

0x96a4,	// (0x0001655c) rs_clock_indi_pane_g1

0xd916,	// (0x0001a7ce) rs_clock_indi_pane_t1

0xd924,	// (0x0001a7dc) rs_indi_pane

0xd92c,	// (0x0001a7e4) rs_indi_pane_g1

0xd935,	// (0x0001a7ed) rs_indi_pane_g2

0xd93e,	// (0x0001a7f6) rs_indi_pane_g3

0x0002,

0xfedb,	// (0x0001cd93) rs_indi_pane_g

0x5e5f,	// (0x00012d17) bg_popup_preview_window_pane_cp03

0xd947,	// (0x0001a7ff) popup_fep_tooltip_window_t1

0xa507,	// (0x000173bf) popup_note2_window_g2_ParamLimits

0xa507,	// (0x000173bf) popup_note2_window_g2

0x0001,

0xfc74,	// (0x0001cb2c) popup_note2_window_g_ParamLimits

0xfc74,	// (0x0001cb2c) popup_note2_window_g

0xaaf1,	// (0x000179a9) bg_popup_sub_pane_cp11_ParamLimits

0xaafe,	// (0x000179b6) cell_ai3_links_pane_g1_ParamLimits

0xab15,	// (0x000179cd) cell_ai3_links_pane_t1

0x425f,	// (0x00011117) set_text_pane_t1_copy1_ParamLimits

0x5d70,	// (0x00012c28) cell_graphic_popup_pane_cp2_ParamLimits

0x5d70,	// (0x00012c28) cell_graphic_popup_pane_cp2

0xd955,	// (0x0001a80d) cell_graphic_popup_pane_g1_cp2

0x47d7,	// (0x0001168f) cell_graphic_popup_pane_g2_cp2

0xd95d,	// (0x0001a815) cell_graphic_popup_pane_g3_cp2

0xd965,	// (0x0001a81d) cell_graphic_popup_pane_t2_cp2

0x47e8,	// (0x000116a0) grid_highlight_pane_cp3_cp2

0x5516,	// (0x000123ce) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4fed,	// (0x00011ea5) main_tmo_pane_ParamLimits

0x0e5b,	// (0x0000dd13) popup_tmo_big_image_note_window

0xd221,	// (0x0001a0d9) cell_ai5_widget_list_pane

0xd229,	// (0x0001a0e1) cell_ai5_widget_lrg_icon_pane

0x1f4e,	// (0x0000ee06) tmo_note_info_pane_t1_ParamLimits

0x1f63,	// (0x0000ee1b) tmo_note_info_pane_t2_ParamLimits

0x1f7a,	// (0x0000ee32) tmo_note_info_pane_t3_ParamLimits

0xd7ab,	// (0x0001a663) tmo_note_info_pane_t4_ParamLimits

0xd7bd,	// (0x0001a675) tmo_note_info_pane_t5_ParamLimits

0xfec9,	// (0x0001cd81) tmo_note_info_pane_t_ParamLimits

0x1ff4,	// (0x0000eeac) settings_container_pane_ParamLimits

0xd8f4,	// (0x0001a7ac) indicator_popup_pane_cp5

0xd8f4,	// (0x0001a7ac) indicator_popup_pane_cp6

0xe8a4,	// (0x0001b75c) list_set_graphic_pane_copy1_ParamLimits

0x4112,	// (0x00010fca) bg_popup_window_pane_cp23

0xd973,	// (0x0001a82b) popup_tmo_big_image_note_window_g1

0xd97d,	// (0x0001a835) popup_tmo_big_image_note_window_t1

0xd98d,	// (0x0001a845) popup_tmo_big_image_note_window_t2

0xd99d,	// (0x0001a855) popup_tmo_big_image_note_window_t3

0x0002,

0xfee2,	// (0x0001cd9a) popup_tmo_big_image_note_window_t

0xd9ad,	// (0x0001a865) cell_ai5_widget_lrg_icon_pane_g1

0xd9b5,	// (0x0001a86d) cell_ai5_widget_lrg_icon_pane_t1

0xd9c3,	// (0x0001a87b) cell_ai5_widget_list_row_pane_ParamLimits

0xd9c3,	// (0x0001a87b) cell_ai5_widget_list_row_pane

0xd9dc,	// (0x0001a894) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xd9dc,	// (0x0001a894) cell_ai5_widget_list_row_pane_g1

0xd9e9,	// (0x0001a8a1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xd9e9,	// (0x0001a8a1) cell_ai5_widget_list_row_pane_t1

0xda01,	// (0x0001a8b9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xda01,	// (0x0001a8b9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee9,	// (0x0001cda1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee9,	// (0x0001cda1) cell_ai5_widget_list_row_pane_t

0x2668,	// (0x0000f520) main_fep_vtchi_ss_pane

0xda13,	// (0x0001a8cb) popup_fep_char_pre_window

0xda1b,	// (0x0001a8d3) popup_fep_ituss_window

0xda35,	// (0x0001a8ed) popup_fep_vkbss_window

0xda53,	// (0x0001a90b) grid_vkbss_keypad_pane_ParamLimits

0xda53,	// (0x0001a90b) grid_vkbss_keypad_pane

0xda63,	// (0x0001a91b) ituss_keypad_pane

0xda79,	// (0x0001a931) aid_vkbss_key_offset_ParamLimits

0xda79,	// (0x0001a931) aid_vkbss_key_offset

0xda85,	// (0x0001a93d) cell_vkbss_key_pane_ParamLimits

0xda85,	// (0x0001a93d) cell_vkbss_key_pane

0xda9b,	// (0x0001a953) bg_cell_vkbss_key_g1_ParamLimits

0xda9b,	// (0x0001a953) bg_cell_vkbss_key_g1

0xdaa7,	// (0x0001a95f) cell_vkbss_key_3p_pane_ParamLimits

0xdaa7,	// (0x0001a95f) cell_vkbss_key_3p_pane

0xdac1,	// (0x0001a979) cell_vkbss_key_g1_ParamLimits

0xdac1,	// (0x0001a979) cell_vkbss_key_g1

0xdadb,	// (0x0001a993) cell_vkbss_key_t1_ParamLimits

0xdadb,	// (0x0001a993) cell_vkbss_key_t1

0xdb06,	// (0x0001a9be) cell_ituss_key_pane_ParamLimits

0xdb06,	// (0x0001a9be) cell_ituss_key_pane

0xdb16,	// (0x0001a9ce) bg_cell_ituss_key_g1_ParamLimits

0xdb16,	// (0x0001a9ce) bg_cell_ituss_key_g1

0xdb22,	// (0x0001a9da) cell_ituss_key_pane_g1_ParamLimits

0xdb22,	// (0x0001a9da) cell_ituss_key_pane_g1

0xdb2e,	// (0x0001a9e6) cell_ituss_key_pane_g2_ParamLimits

0xdb2e,	// (0x0001a9e6) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x0001cda6) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x0001cda6) cell_ituss_key_pane_g

0xdb47,	// (0x0001a9ff) cell_ituss_key_t1_ParamLimits

0xdb47,	// (0x0001a9ff) cell_ituss_key_t1

0xdb75,	// (0x0001aa2d) cell_ituss_key_t2_ParamLimits

0xdb75,	// (0x0001aa2d) cell_ituss_key_t2

0xdba6,	// (0x0001aa5e) cell_ituss_key_t3_ParamLimits

0xdba6,	// (0x0001aa5e) cell_ituss_key_t3

0xdbd7,	// (0x0001aa8f) cell_ituss_key_t4_ParamLimits

0xdbd7,	// (0x0001aa8f) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x0001cdab) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001cdab) cell_ituss_key_t

0xdc08,	// (0x0001aac0) cell_vkbss_key_3p_pane_g1

0xdc10,	// (0x0001aac8) cell_vkbss_key_3p_pane_g2

0xdc18,	// (0x0001aad0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x0001cdb4) cell_vkbss_key_3p_pane_g

0x4112,	// (0x00010fca) bg_popup_fep_char_preview_window_cp02

0xdc20,	// (0x0001aad8) popup_fep_char_pre_window_t1

0x1e58,	// (0x0000ed10) main_ai5_sk_pane

0xd837,	// (0x0001a6ef) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xd843,	// (0x0001a6fb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xd857,	// (0x0001a70f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xd866,	// (0x0001a71e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed4,	// (0x0001cd8c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xd879,	// (0x0001a731) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4fed,	// (0x00011ea5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x220b,	// (0x0000f0c3) main_ai5_sk_pane_g1

0x7227,	// (0x000140df) popup_query_code_window_g1

0xda2a,	// (0x0001a8e2) popup_fep_vkb_icf_pane

0xda3e,	// (0x0001a8f6) popup_fep_vtchi_icf_pane

0x4fed,	// (0x00011ea5) bg_icf_pane

0xda63,	// (0x0001a91b) list_vkb_icf_pane

0x4fed,	// (0x00011ea5) bg_icf_pane_cp01

0xdc4a,	// (0x0001ab02) vtchi_icf_list_pane

0xdc5a,	// (0x0001ab12) list_vkb_icf_pane_t1_ParamLimits

0xdc5a,	// (0x0001ab12) list_vkb_icf_pane_t1

0xdc71,	// (0x0001ab29) vtchi_icf_list_pane_t1_ParamLimits

0xdc71,	// (0x0001ab29) vtchi_icf_list_pane_t1

0xda1b,	// (0x0001a8d3) popup_fep_ituss_window_ParamLimits

0xda3e,	// (0x0001a8f6) popup_fep_vtchi_icf_pane_ParamLimits

0xda63,	// (0x0001a91b) ituss_keypad_pane_ParamLimits

0xda6f,	// (0x0001a927) ituss_sks_pane

0x4fed,	// (0x00011ea5) bg_icf_pane_ParamLimits

0xdc2f,	// (0x0001aae7) icf_edit_indi_pane_ParamLimits

0xdc2f,	// (0x0001aae7) icf_edit_indi_pane

0xda63,	// (0x0001a91b) list_vkb_icf_pane_ParamLimits

0x4fed,	// (0x00011ea5) bg_icf_pane_cp01_ParamLimits

0xdc3e,	// (0x0001aaf6) icf_edit_indi_pane_cp01_ParamLimits

0xdc3e,	// (0x0001aaf6) icf_edit_indi_pane_cp01

0xdc52,	// (0x0001ab0a) vtchi_query_pane

0x9922,	// (0x000167da) icf_edit_indi_pane_g1_ParamLimits

0x9922,	// (0x000167da) icf_edit_indi_pane_g1

0xdc8d,	// (0x0001ab45) icf_edit_indi_pane_g2_ParamLimits

0xdc8d,	// (0x0001ab45) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x0001cdbb) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x0001cdbb) icf_edit_indi_pane_g

0xdc99,	// (0x0001ab51) icf_edit_indi_pane_t1

0xdca7,	// (0x0001ab5f) bg_input_focus_pane_cp042

0x49bb,	// (0x00011873) vtchi_button_pane

0xdcb0,	// (0x0001ab68) vtchi_query_pane_t1

0xdcbe,	// (0x0001ab76) vtchi_query_pane_t2

0xdccc,	// (0x0001ab84) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0001cdc0) vtchi_query_pane_t

0x4112,	// (0x00010fca) bg_button_pane_cp13

0xdcda,	// (0x0001ab92) vtchi_button_pane_g1

0xdce2,	// (0x0001ab9a) ituss_sks_pane_g1

0xdced,	// (0x0001aba5) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0001cdc7) ituss_sks_pane_g

0xdcf5,	// (0x0001abad) ituss_sks_pane_t1

0xdd03,	// (0x0001abbb) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0001cdcc) ituss_sks_pane_t

0x90be,	// (0x00015f76) indicator_nsta_pane_cp_g1

0x90c7,	// (0x00015f7f) indicator_nsta_pane_cp_g2

0x90cf,	// (0x00015f87) indicator_nsta_pane_cp_g3

0x90d7,	// (0x00015f8f) indicator_nsta_pane_cp_g4

0x90df,	// (0x00015f97) indicator_nsta_pane_cp_g5

0x90e7,	// (0x00015f9f) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x0001c96a) indicator_nsta_pane_cp_g

0x1bfe,	// (0x0000eab6) cell_graphic2_pane_t2_ParamLimits

0x1bfe,	// (0x0000eab6) cell_graphic2_pane_t2

0x0001,

0xfdcb,	// (0x0001cc83) cell_graphic2_pane_t_ParamLimits

0xfdcb,	// (0x0001cc83) cell_graphic2_pane_t

0x1c34,	// (0x0000eaec) cell_graphic2_control_pane_t1

0xe7b6,	// (0x0001b66e) signal_pane_g3_ParamLimits

0xe7b6,	// (0x0001b66e) signal_pane_g3

0xe7ca,	// (0x0001b682) signal_pane_g4_ParamLimits

0xe7ca,	// (0x0001b682) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal

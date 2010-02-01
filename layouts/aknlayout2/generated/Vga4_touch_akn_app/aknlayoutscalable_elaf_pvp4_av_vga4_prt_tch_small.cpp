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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001c4d5 };

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
0x5a9c,	// (0x00021f71) Screen

0x5aa8,	// (0x00021f7d) application_window_ParamLimits

0x5aa8,	// (0x00021f7d) application_window

0x363e,	// (0x0001fb13) screen_g1

0x5b04,	// (0x00021fd9) area_bottom_pane_ParamLimits

0x5b04,	// (0x00021fd9) area_bottom_pane

0x5bc4,	// (0x00022099) area_top_pane_ParamLimits

0x5bc4,	// (0x00022099) area_top_pane

0x5c58,	// (0x0002212d) main_pane_ParamLimits

0x5c58,	// (0x0002212d) main_pane

0x37c1,	// (0x0001fc96) misc_graphics

0x951d,	// (0x000259f2) battery_pane_ParamLimits

0x951d,	// (0x000259f2) battery_pane

0xa230,	// (0x00026705) bg_status_flat_pane_g8

0xa238,	// (0x0002670d) bg_status_flat_pane_g9

0x95e5,	// (0x00025aba) context_pane_ParamLimits

0x95e5,	// (0x00025aba) context_pane

0x9709,	// (0x00025bde) navi_pane_ParamLimits

0x9709,	// (0x00025bde) navi_pane

0x9798,	// (0x00025c6d) signal_pane_ParamLimits

0x9798,	// (0x00025c6d) signal_pane

0x0008,

0xf88a,	// (0x0002bd5f) bg_status_flat_pane_g

0x9805,	// (0x00025cda) status_pane_g1_ParamLimits

0x9805,	// (0x00025cda) status_pane_g1

0x9819,	// (0x00025cee) status_pane_g2_ParamLimits

0x9819,	// (0x00025cee) status_pane_g2

0x9825,	// (0x00025cfa) status_pane_g3_ParamLimits

0x9825,	// (0x00025cfa) status_pane_g3

0x0004,

0xf7b8,	// (0x0002bc8d) status_pane_g_ParamLimits

0xf7b8,	// (0x0002bc8d) status_pane_g

0x9859,	// (0x00025d2e) title_pane_ParamLimits

0x9859,	// (0x00025d2e) title_pane

0x9896,	// (0x00025d6b) uni_indicator_pane_ParamLimits

0x9896,	// (0x00025d6b) uni_indicator_pane

0x8e12,	// (0x000252e7) bg_list_pane_ParamLimits

0x8e12,	// (0x000252e7) bg_list_pane

0x8e32,	// (0x00025307) find_pane

0x8e3a,	// (0x0002530f) listscroll_app_pane_ParamLimits

0x8e3a,	// (0x0002530f) listscroll_app_pane

0x8e46,	// (0x0002531b) listscroll_form_pane

0x8e4e,	// (0x00025323) listscroll_gen_pane_ParamLimits

0x8e4e,	// (0x00025323) listscroll_gen_pane

0x8e46,	// (0x0002531b) listscroll_set_pane

0x8087,	// (0x0002455c) main_idle_act_pane

0x8aee,	// (0x00024fc3) main_idle_trad_pane

0x8aee,	// (0x00024fc3) main_list_empty_pane

0x8e74,	// (0x00025349) main_midp_pane

0x8e80,	// (0x00025355) main_pane_g1_ParamLimits

0x8e80,	// (0x00025355) main_pane_g1

0x8e8e,	// (0x00025363) popup_ai_message_window_ParamLimits

0x8e8e,	// (0x00025363) popup_ai_message_window

0x8f3e,	// (0x00025413) popup_fep_china_uni_window_ParamLimits

0x8f3e,	// (0x00025413) popup_fep_china_uni_window

0x8f9e,	// (0x00025473) popup_fep_japan_candidate_window_ParamLimits

0x8f9e,	// (0x00025473) popup_fep_japan_candidate_window

0x8fc8,	// (0x0002549d) popup_fep_japan_predictive_window_ParamLimits

0x8fc8,	// (0x0002549d) popup_fep_japan_predictive_window

0x8ffe,	// (0x000254d3) popup_find_window

0x900b,	// (0x000254e0) popup_grid_graphic_window_ParamLimits

0x900b,	// (0x000254e0) popup_grid_graphic_window

0x9039,	// (0x0002550e) popup_large_graphic_colour_window

0x905f,	// (0x00025534) popup_menu_window_ParamLimits

0x905f,	// (0x00025534) popup_menu_window

0x9229,	// (0x000256fe) popup_note_image_window

0x9213,	// (0x000256e8) popup_note_wait_window_ParamLimits

0x9213,	// (0x000256e8) popup_note_wait_window

0x9213,	// (0x000256e8) popup_note_window_ParamLimits

0x9213,	// (0x000256e8) popup_note_window

0x928f,	// (0x00025764) popup_query_code_window_ParamLimits

0x928f,	// (0x00025764) popup_query_code_window

0x92a5,	// (0x0002577a) popup_query_data_code_window_ParamLimits

0x92a5,	// (0x0002577a) popup_query_data_code_window

0x92c8,	// (0x0002579d) popup_query_data_window_ParamLimits

0x92c8,	// (0x0002579d) popup_query_data_window

0x92ea,	// (0x000257bf) popup_query_sat_info_window_ParamLimits

0x92ea,	// (0x000257bf) popup_query_sat_info_window

0x9329,	// (0x000257fe) popup_snote_single_graphic_window_ParamLimits

0x9329,	// (0x000257fe) popup_snote_single_graphic_window

0x9329,	// (0x000257fe) popup_snote_single_text_window_ParamLimits

0x9329,	// (0x000257fe) popup_snote_single_text_window

0x9340,	// (0x00025815) popup_sub_window_general

0x9486,	// (0x0002595b) popup_window_general_ParamLimits

0x9486,	// (0x0002595b) popup_window_general

0x949f,	// (0x00025974) power_save_pane

0x6cc7,	// (0x0002319c) control_pane_g1_ParamLimits

0x6cc7,	// (0x0002319c) control_pane_g1

0x6cf0,	// (0x000231c5) control_pane_g2_ParamLimits

0x6cf0,	// (0x000231c5) control_pane_g2

0x8dbb,	// (0x00025290) control_pane_g3_ParamLimits

0x8dbb,	// (0x00025290) control_pane_g3

0x0007,

0xf7a0,	// (0x0002bc75) control_pane_g_ParamLimits

0xf7a0,	// (0x0002bc75) control_pane_g

0x6d38,	// (0x0002320d) control_pane_t1_ParamLimits

0x6d38,	// (0x0002320d) control_pane_t1

0x6d8a,	// (0x0002325f) control_pane_t2_ParamLimits

0x6d8a,	// (0x0002325f) control_pane_t2

0x0002,

0xf7b1,	// (0x0002bc86) control_pane_t_ParamLimits

0xf7b1,	// (0x0002bc86) control_pane_t

0x8cdc,	// (0x000251b1) navi_navi_volume_pane_cp1

0x8ce5,	// (0x000251ba) status_small_icon_pane

0x8ced,	// (0x000251c2) status_small_pane_g1_ParamLimits

0x8ced,	// (0x000251c2) status_small_pane_g1

0x8d21,	// (0x000251f6) status_small_pane_g2_ParamLimits

0x8d21,	// (0x000251f6) status_small_pane_g2

0x8d2d,	// (0x00025202) status_small_pane_g3_ParamLimits

0x8d2d,	// (0x00025202) status_small_pane_g3

0x8d39,	// (0x0002520e) status_small_pane_g4_ParamLimits

0x8d39,	// (0x0002520e) status_small_pane_g4

0x8d45,	// (0x0002521a) status_small_pane_g5_ParamLimits

0x8d45,	// (0x0002521a) status_small_pane_g5

0x8d54,	// (0x00025229) status_small_pane_g6_ParamLimits

0x8d54,	// (0x00025229) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002bc64) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002bc64) status_small_pane_g

0x8d84,	// (0x00025259) status_small_pane_t1

0x8da7,	// (0x0002527c) status_small_wait_pane_ParamLimits

0x8da7,	// (0x0002527c) status_small_wait_pane

0x8585,	// (0x00024a5a) aid_levels_signal_ParamLimits

0x8585,	// (0x00024a5a) aid_levels_signal

0x8597,	// (0x00024a6c) signal_pane_g1_ParamLimits

0x8597,	// (0x00024a6c) signal_pane_g1

0x85ac,	// (0x00024a81) signal_pane_g2_ParamLimits

0x85ac,	// (0x00024a81) signal_pane_g2

0x0001,

0xf724,	// (0x0002bbf9) signal_pane_g_ParamLimits

0xf724,	// (0x0002bbf9) signal_pane_g

0x85c1,	// (0x00024a96) context_pane_g1

0x5eaf,	// (0x00022384) title_pane_g1

0x5ed9,	// (0x000223ae) title_pane_t1

0x5f41,	// (0x00022416) title_pane_t2

0x5f67,	// (0x0002243c) title_pane_t3

0x0002,

0xf573,	// (0x0002ba48) title_pane_t

0x98ae,	// (0x00025d83) aid_levels_battery_ParamLimits

0x98ae,	// (0x00025d83) aid_levels_battery

0x98c2,	// (0x00025d97) battery_pane_g1_ParamLimits

0x98c2,	// (0x00025d97) battery_pane_g1

0x98d8,	// (0x00025dad) battery_pane_g2_ParamLimits

0x98d8,	// (0x00025dad) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002bc98) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002bc98) battery_pane_g

0xab80,	// (0x00027055) uni_indicator_pane_g1

0xab95,	// (0x0002706a) uni_indicator_pane_g2

0xabab,	// (0x00027080) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002be07) uni_indicator_pane_g

0x895c,	// (0x00024e31) navi_icon_pane_ParamLimits

0x895c,	// (0x00024e31) navi_icon_pane

0x88a3,	// (0x00024d78) navi_midp_pane

0x8978,	// (0x00024e4d) navi_navi_pane

0x8982,	// (0x00024e57) navi_text_pane_ParamLimits

0x8982,	// (0x00024e57) navi_text_pane

0x363e,	// (0x0001fb13) status_small_wait_pane_g1

0x643b,	// (0x00022910) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0002be02) status_small_wait_pane_g

0xa893,	// (0x00026d68) navi_navi_icon_text_pane

0xa89b,	// (0x00026d70) navi_navi_pane_g1_ParamLimits

0xa89b,	// (0x00026d70) navi_navi_pane_g1

0xa8ad,	// (0x00026d82) navi_navi_pane_g2_ParamLimits

0xa8ad,	// (0x00026d82) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0002bdd0) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0002bdd0) navi_navi_pane_g

0xa8bf,	// (0x00026d94) navi_navi_tabs_pane

0xa8c8,	// (0x00026d9d) navi_navi_text_pane

0xa893,	// (0x00026d68) navi_navi_volume_pane

0xa86c,	// (0x00026d41) navi_text_pane_t1

0xa85d,	// (0x00026d32) navi_icon_pane_g1

0xa7b0,	// (0x00026c85) navi_navi_text_pane_t1

0x70a1,	// (0x00023576) navi_navi_volume_pane_g1

0x70a9,	// (0x0002357e) volume_small_pane

0xa716,	// (0x00026beb) navi_navi_icon_text_pane_g1

0xa71e,	// (0x00026bf3) navi_navi_icon_text_pane_t1

0x8978,	// (0x00024e4d) navi_tabs_2_long_pane

0x8978,	// (0x00024e4d) navi_tabs_2_pane

0x8978,	// (0x00024e4d) navi_tabs_3_long_pane

0x8978,	// (0x00024e4d) navi_tabs_3_pane

0x8978,	// (0x00024e4d) navi_tabs_4_pane

0x7081,	// (0x00023556) tabs_2_active_pane_ParamLimits

0x7081,	// (0x00023556) tabs_2_active_pane

0x7091,	// (0x00023566) tabs_2_passive_pane_ParamLimits

0x7091,	// (0x00023566) tabs_2_passive_pane

0x704f,	// (0x00023524) tabs_3_active_pane_ParamLimits

0x704f,	// (0x00023524) tabs_3_active_pane

0x705f,	// (0x00023534) tabs_3_passive_pane_ParamLimits

0x705f,	// (0x00023534) tabs_3_passive_pane

0x7070,	// (0x00023545) tabs_3_passive_pane_cp_ParamLimits

0x7070,	// (0x00023545) tabs_3_passive_pane_cp

0x7003,	// (0x000234d8) tabs_4_active_pane_ParamLimits

0x7003,	// (0x000234d8) tabs_4_active_pane

0x7016,	// (0x000234eb) tabs_4_passive_pane_ParamLimits

0x7016,	// (0x000234eb) tabs_4_passive_pane

0x7027,	// (0x000234fc) tabs_4_passive_pane_cp_ParamLimits

0x7027,	// (0x000234fc) tabs_4_passive_pane_cp

0x7038,	// (0x0002350d) tabs_4_passive_pane_cp2_ParamLimits

0x7038,	// (0x0002350d) tabs_4_passive_pane_cp2

0x6fdf,	// (0x000234b4) tabs_2_long_active_pane_ParamLimits

0x6fdf,	// (0x000234b4) tabs_2_long_active_pane

0x6ff1,	// (0x000234c6) tabs_2_long_passive_pane_ParamLimits

0x6ff1,	// (0x000234c6) tabs_2_long_passive_pane

0x6fa0,	// (0x00023475) tabs_3_long_active_pane_ParamLimits

0x6fa0,	// (0x00023475) tabs_3_long_active_pane

0x6fb3,	// (0x00023488) tabs_3_long_passive_pane_ParamLimits

0x6fb3,	// (0x00023488) tabs_3_long_passive_pane

0x6fcc,	// (0x000234a1) tabs_3_long_passive_pane_cp_ParamLimits

0x6fcc,	// (0x000234a1) tabs_3_long_passive_pane_cp

0x6f46,	// (0x0002341b) volume_small_pane_g1

0x6f4f,	// (0x00023424) volume_small_pane_g2

0x6f58,	// (0x0002342d) volume_small_pane_g3

0x6f61,	// (0x00023436) volume_small_pane_g4

0x6f6a,	// (0x0002343f) volume_small_pane_g5

0x6f73,	// (0x00023448) volume_small_pane_g6

0x6f7c,	// (0x00023451) volume_small_pane_g7

0x6f85,	// (0x0002345a) volume_small_pane_g8

0x6f8e,	// (0x00023463) volume_small_pane_g9

0x6f97,	// (0x0002346c) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0002bd9c) volume_small_pane_g

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp2_ParamLimits

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp2

0x5f87,	// (0x0002245c) tabs_3_active_pane_g1

0x5f8f,	// (0x00022464) tabs_3_active_pane_t1

0x5f79,	// (0x0002244e) bg_passive_tab_pane_cp2_ParamLimits

0x5f79,	// (0x0002244e) bg_passive_tab_pane_cp2

0x5f87,	// (0x0002245c) tabs_3_passive_pane_g1

0x5f8f,	// (0x00022464) tabs_3_passive_pane_t1

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp3_ParamLimits

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp3

0x5fa1,	// (0x00022476) tabs_4_active_pane_g1

0x5fa9,	// (0x0002247e) tabs_4_active_pane_t1

0x5f79,	// (0x0002244e) bg_passive_tab_pane_cp3_ParamLimits

0x5f79,	// (0x0002244e) bg_passive_tab_pane_cp3

0x5fa1,	// (0x00022476) tabs_4_1_passive_pane_g1

0x5fa9,	// (0x0002247e) tabs_4_1_passive_pane_t1

0x8e74,	// (0x00025349) list_highlight_pane_cp2

0xae0f,	// (0x000272e4) list_set_pane_ParamLimits

0xae0f,	// (0x000272e4) list_set_pane

0xaed7,	// (0x000273ac) main_pane_set_t1_ParamLimits

0xaed7,	// (0x000273ac) main_pane_set_t1

0xaef7,	// (0x000273cc) main_pane_set_t2_ParamLimits

0xaef7,	// (0x000273cc) main_pane_set_t2

0xaf0b,	// (0x000273e0) main_pane_set_t3_ParamLimits

0xaf0b,	// (0x000273e0) main_pane_set_t3

0xaf1f,	// (0x000273f4) main_pane_set_t4_ParamLimits

0xaf1f,	// (0x000273f4) main_pane_set_t4

0x0003,

0xf997,	// (0x0002be6c) main_pane_set_t_ParamLimits

0xf997,	// (0x0002be6c) main_pane_set_t

0xaf3f,	// (0x00027414) setting_code_pane

0xaf49,	// (0x0002741e) setting_slider_graphic_pane

0xaf49,	// (0x0002741e) setting_slider_pane

0xaf49,	// (0x0002741e) setting_text_pane

0xaf49,	// (0x0002741e) setting_volume_pane

0x5fbb,	// (0x00022490) volume_set_pane

0x5f79,	// (0x0002244e) bg_set_opt_pane_cp

0x5fc5,	// (0x0002249a) setting_slider_pane_t1

0x5fdb,	// (0x000224b0) setting_slider_pane_t2

0x5ff5,	// (0x000224ca) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002ba4f) setting_slider_pane_t

0x600d,	// (0x000224e2) slider_set_pane

0x37c1,	// (0x0001fc96) bg_set_opt_pane_cp2

0x6023,	// (0x000224f8) setting_slider_graphic_pane_g1

0x602c,	// (0x00022501) setting_slider_graphic_pane_t1

0x603c,	// (0x00022511) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002ba56) setting_slider_graphic_pane_t

0x604c,	// (0x00022521) slider_set_pane_cp

0x37c1,	// (0x0001fc96) input_focus_pane_cp1

0xadd0,	// (0x000272a5) list_set_text_pane

0x363e,	// (0x0001fb13) setting_text_pane_g1

0x37c1,	// (0x0001fc96) input_focus_pane_cp2

0x363e,	// (0x0001fb13) setting_code_pane_g1

0x6054,	// (0x00022529) setting_code_pane_t1

0x4ac3,	// (0x00020f98) set_text_pane_t1_ParamLimits

0x4ac3,	// (0x00020f98) set_text_pane_t1

0x7ef7,	// (0x000243cc) set_opt_bg_pane_g1

0x7eff,	// (0x000243d4) set_opt_bg_pane_g2

0xada8,	// (0x0002727d) set_opt_bg_pane_g3

0x7f0f,	// (0x000243e4) set_opt_bg_pane_g4

0x7f17,	// (0x000243ec) set_opt_bg_pane_g5

0x7f1f,	// (0x000243f4) set_opt_bg_pane_g6

0xadb2,	// (0x00027287) set_opt_bg_pane_g7

0xadbc,	// (0x00027291) set_opt_bg_pane_g8

0xadc6,	// (0x0002729b) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002be59) set_opt_bg_pane_g

0xad9b,	// (0x00027270) slider_set_pane_g1

0x712a,	// (0x000235ff) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002be4a) slider_set_pane_g

0x70b2,	// (0x00023587) volume_set_pane_g1

0x70bc,	// (0x00023591) volume_set_pane_g2

0x70c6,	// (0x0002359b) volume_set_pane_g3

0x70d0,	// (0x000235a5) volume_set_pane_g4

0x70da,	// (0x000235af) volume_set_pane_g5

0x70e4,	// (0x000235b9) volume_set_pane_g6

0x70ee,	// (0x000235c3) volume_set_pane_g7

0x70f8,	// (0x000235cd) volume_set_pane_g8

0x7102,	// (0x000235d7) volume_set_pane_g9

0x710c,	// (0x000235e1) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0002be22) volume_set_pane_g

0x6062,	// (0x00022537) indicator_pane_ParamLimits

0x6062,	// (0x00022537) indicator_pane

0x606e,	// (0x00022543) main_idle_pane_g2_ParamLimits

0x606e,	// (0x00022543) main_idle_pane_g2

0x6096,	// (0x0002256b) main_pane_idle_g1_ParamLimits

0x6096,	// (0x0002256b) main_pane_idle_g1

0x60a4,	// (0x00022579) popup_clock_digital_analogue_window_ParamLimits

0x60a4,	// (0x00022579) popup_clock_digital_analogue_window

0x60bb,	// (0x00022590) soft_indicator_pane_ParamLimits

0x60bb,	// (0x00022590) soft_indicator_pane

0x60c9,	// (0x0002259e) wallpaper_pane_ParamLimits

0x60c9,	// (0x0002259e) wallpaper_pane

0x363e,	// (0x0001fb13) wallpaper_pane_g1

0x60dd,	// (0x000225b2) indicator_pane_g1_ParamLimits

0x60dd,	// (0x000225b2) indicator_pane_g1

0xb20d,	// (0x000276e2) navi_navi_icon_text_pane_srt_g1

0x60f8,	// (0x000225cd) soft_indicator_pane_t1

0x6112,	// (0x000225e7) aid_ps_area_pane

0x6123,	// (0x000225f8) aid_ps_clock_pane

0x6131,	// (0x00022606) aid_ps_indicator_pane

0x613d,	// (0x00022612) indicator_ps_pane_ParamLimits

0x613d,	// (0x00022612) indicator_ps_pane

0x614c,	// (0x00022621) power_save_pane_g1_ParamLimits

0x614c,	// (0x00022621) power_save_pane_g1

0x6158,	// (0x0002262d) power_save_pane_g2_ParamLimits

0x6158,	// (0x0002262d) power_save_pane_g2

0x5ab8,	// (0x00021f8d) aid_navinavi_width_pane

0x6112,	// (0x000225e7) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002ba5b) power_save_pane_g_ParamLimits

0xf586,	// (0x0002ba5b) power_save_pane_g

0x6166,	// (0x0002263b) power_save_pane_t1_ParamLimits

0x6166,	// (0x0002263b) power_save_pane_t1

0x6123,	// (0x000225f8) aid_ps_clock_pane_ParamLimits

0x6131,	// (0x00022606) aid_ps_indicator_pane_ParamLimits

0x6178,	// (0x0002264d) power_save_pane_t4_ParamLimits

0x6178,	// (0x0002264d) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002ba60) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002ba60) power_save_pane_t

0x61a2,	// (0x00022677) power_save_t3_ParamLimits

0x61a2,	// (0x00022677) power_save_t3

0x618d,	// (0x00022662) power_save_t2_ParamLimits

0x618d,	// (0x00022662) power_save_t2

0x61b7,	// (0x0002268c) indicator_ps_pane_g1

0x61c0,	// (0x00022695) ai_gene_pane_ParamLimits

0x61c0,	// (0x00022695) ai_gene_pane

0x61cc,	// (0x000226a1) ai_links_pane_ParamLimits

0x61cc,	// (0x000226a1) ai_links_pane

0x61d8,	// (0x000226ad) indicator_pane_cp1_ParamLimits

0x61d8,	// (0x000226ad) indicator_pane_cp1

0x61e4,	// (0x000226b9) main_pane_idle_g1_cp_ParamLimits

0x61e4,	// (0x000226b9) main_pane_idle_g1_cp

0x61f0,	// (0x000226c5) popup_ai_links_title_window

0x61f9,	// (0x000226ce) soft_indicator_pane_cp1_ParamLimits

0x61f9,	// (0x000226ce) soft_indicator_pane_cp1

0xab6e,	// (0x00027043) ai_links_pane_g1

0xab77,	// (0x0002704c) grid_ai_links_pane

0xab53,	// (0x00027028) ai_gene_pane_1

0xab5c,	// (0x00027031) ai_gene_pane_2

0xab65,	// (0x0002703a) list_highlight_pane_cp4

0xab33,	// (0x00027008) cell_ai_link_pane_ParamLimits

0xab33,	// (0x00027008) cell_ai_link_pane

0xab2b,	// (0x00027000) cell_ai_link_pane_g1

0x643b,	// (0x00022910) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0002bdfd) cell_ai_link_pane_g

0x37c1,	// (0x0001fc96) grid_highlight_cp2

0x37c1,	// (0x0001fc96) bg_popup_sub_pane_cp1

0x6213,	// (0x000226e8) popup_ai_links_title_window_t1

0xaa77,	// (0x00026f4c) ai_gene_pane_1_g1_ParamLimits

0xaa77,	// (0x00026f4c) ai_gene_pane_1_g1

0xaa83,	// (0x00026f58) ai_gene_pane_1_g2_ParamLimits

0xaa83,	// (0x00026f58) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0002bdf3) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0002bdf3) ai_gene_pane_1_g

0xaa90,	// (0x00026f65) ai_gene_pane_1_t1_ParamLimits

0xaa90,	// (0x00026f65) ai_gene_pane_1_t1

0xaac4,	// (0x00026f99) grid_ai_soft_ind_pane

0xaa62,	// (0x00026f37) ai_gene_pane_2_t1_ParamLimits

0xaa62,	// (0x00026f37) ai_gene_pane_2_t1

0x6222,	// (0x000226f7) main_pane_empty_t1_ParamLimits

0x6222,	// (0x000226f7) main_pane_empty_t1

0x623a,	// (0x0002270f) main_pane_empty_t2_ParamLimits

0x623a,	// (0x0002270f) main_pane_empty_t2

0x624f,	// (0x00022724) main_pane_empty_t3_ParamLimits

0x624f,	// (0x00022724) main_pane_empty_t3

0x6261,	// (0x00022736) main_pane_empty_t4_ParamLimits

0x6261,	// (0x00022736) main_pane_empty_t4

0x6273,	// (0x00022748) main_pane_empty_t5_ParamLimits

0x6273,	// (0x00022748) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002ba65) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002ba65) main_pane_empty_t

0x7f48,	// (0x0002441d) bg_popup_window_pane_ParamLimits

0x7f48,	// (0x0002441d) bg_popup_window_pane

0xa7be,	// (0x00026c93) find_popup_pane_cp2_ParamLimits

0xa7be,	// (0x00026c93) find_popup_pane_cp2

0xa7ca,	// (0x00026c9f) heading_pane_ParamLimits

0xa7ca,	// (0x00026c9f) heading_pane

0x37c1,	// (0x0001fc96) bg_popup_sub_pane

0xa738,	// (0x00026c0d) bg_popup_window_pane_g1_ParamLimits

0xa738,	// (0x00026c0d) bg_popup_window_pane_g1

0xa744,	// (0x00026c19) bg_popup_window_pane_g2_ParamLimits

0xa744,	// (0x00026c19) bg_popup_window_pane_g2

0xa750,	// (0x00026c25) bg_popup_window_pane_g3_ParamLimits

0xa750,	// (0x00026c25) bg_popup_window_pane_g3

0xa75c,	// (0x00026c31) bg_popup_window_pane_g4_ParamLimits

0xa75c,	// (0x00026c31) bg_popup_window_pane_g4

0xa768,	// (0x00026c3d) bg_popup_window_pane_g5_ParamLimits

0xa768,	// (0x00026c3d) bg_popup_window_pane_g5

0xa774,	// (0x00026c49) bg_popup_window_pane_g6_ParamLimits

0xa774,	// (0x00026c49) bg_popup_window_pane_g6

0xa780,	// (0x00026c55) bg_popup_window_pane_g7_ParamLimits

0xa780,	// (0x00026c55) bg_popup_window_pane_g7

0xa78c,	// (0x00026c61) bg_popup_window_pane_g8_ParamLimits

0xa78c,	// (0x00026c61) bg_popup_window_pane_g8

0xa798,	// (0x00026c6d) bg_popup_window_pane_g9_ParamLimits

0xa798,	// (0x00026c6d) bg_popup_window_pane_g9

0xa7a4,	// (0x00026c79) bg_popup_window_pane_g10_ParamLimits

0xa7a4,	// (0x00026c79) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0002bdbb) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0002bdbb) bg_popup_window_pane_g

0xa6cd,	// (0x00026ba2) bg_popup_heading_pane_ParamLimits

0xa6cd,	// (0x00026ba2) bg_popup_heading_pane

0x7170,	// (0x00023645) tabs_4_passive_pane_cp_srt_ParamLimits

0x7170,	// (0x00023645) tabs_4_passive_pane_cp_srt

0x7182,	// (0x00023657) tabs_4_passive_pane_srt_ParamLimits

0xa6e1,	// (0x00026bb6) heading_pane_g2

0x7182,	// (0x00023657) tabs_4_passive_pane_srt

0x8e74,	// (0x00025349) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e74,	// (0x00025349) bg_passive_tab_pane_cp3_srt

0xa6e9,	// (0x00026bbe) heading_pane_t1_ParamLimits

0xa6e9,	// (0x00026bbe) heading_pane_t1

0xa700,	// (0x00026bd5) heading_pane_t2_ParamLimits

0xa700,	// (0x00026bd5) heading_pane_t2

0x0001,

0xf8e1,	// (0x0002bdb6) heading_pane_t_ParamLimits

0xf8e1,	// (0x0002bdb6) heading_pane_t

0xa1f8,	// (0x000266cd) bg_popup_heading_pane_g1

0xa2a7,	// (0x0002677c) bg_popup_heading_pane_g2

0xa2b1,	// (0x00026786) bg_popup_heading_pane_g3

0xa2bb,	// (0x00026790) bg_popup_heading_pane_g4

0xa2c5,	// (0x0002679a) bg_popup_heading_pane_g5

0xa2cf,	// (0x000267a4) bg_popup_heading_pane_g6

0xa2d7,	// (0x000267ac) bg_popup_heading_pane_g7

0xa2df,	// (0x000267b4) bg_popup_heading_pane_g8

0xa2e9,	// (0x000267be) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0002bd72) bg_popup_heading_pane_g

0x99b0,	// (0x00025e85) bg_popup_sub_pane_g1

0x99b8,	// (0x00025e8d) bg_popup_sub_pane_g2

0x99c0,	// (0x00025e95) bg_popup_sub_pane_g3

0x99c8,	// (0x00025e9d) bg_popup_sub_pane_g4

0x99d0,	// (0x00025ea5) bg_popup_sub_pane_g5

0x99d8,	// (0x00025ead) bg_popup_sub_pane_g6

0x99e0,	// (0x00025eb5) bg_popup_sub_pane_g7

0x99e8,	// (0x00025ebd) bg_popup_sub_pane_g8

0x99f0,	// (0x00025ec5) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0002bd4c) bg_popup_sub_pane_g

0x6285,	// (0x0002275a) bg_popup_window_pane_cp5_ParamLimits

0x6285,	// (0x0002275a) bg_popup_window_pane_cp5

0x62a1,	// (0x00022776) popup_note_window_g1_ParamLimits

0x62a1,	// (0x00022776) popup_note_window_g1

0x62ad,	// (0x00022782) popup_note_window_t1_ParamLimits

0x62ad,	// (0x00022782) popup_note_window_t1

0x62c3,	// (0x00022798) popup_note_window_t2_ParamLimits

0x62c3,	// (0x00022798) popup_note_window_t2

0x62d9,	// (0x000227ae) popup_note_window_t3_ParamLimits

0x62d9,	// (0x000227ae) popup_note_window_t3

0x62ef,	// (0x000227c4) popup_note_window_t4_ParamLimits

0x62ef,	// (0x000227c4) popup_note_window_t4

0x6317,	// (0x000227ec) popup_note_window_t5_ParamLimits

0x6317,	// (0x000227ec) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002ba70) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002ba70) popup_note_window_t

0x633b,	// (0x00022810) bg_popup_window_pane_cp6_ParamLimits

0x633b,	// (0x00022810) bg_popup_window_pane_cp6

0xa174,	// (0x00026649) popup_note_image_window_g1_ParamLimits

0xa174,	// (0x00026649) popup_note_image_window_g1

0xa180,	// (0x00026655) popup_note_image_window_g2_ParamLimits

0xa180,	// (0x00026655) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0002bd40) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0002bd40) popup_note_image_window_g

0xa199,	// (0x0002666e) popup_note_image_window_t1_ParamLimits

0xa199,	// (0x0002666e) popup_note_image_window_t1

0xa1b2,	// (0x00026687) popup_note_image_window_t2_ParamLimits

0xa1b2,	// (0x00026687) popup_note_image_window_t2

0xa1cb,	// (0x000266a0) popup_note_image_window_t3_ParamLimits

0xa1cb,	// (0x000266a0) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0002bd45) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0002bd45) popup_note_image_window_t

0xa034,	// (0x00026509) bg_popup_window_pane_cp7_ParamLimits

0xa034,	// (0x00026509) bg_popup_window_pane_cp7

0xa064,	// (0x00026539) popup_note_wait_window_g1_ParamLimits

0xa064,	// (0x00026539) popup_note_wait_window_g1

0xa070,	// (0x00026545) popup_note_wait_window_g2_ParamLimits

0xa070,	// (0x00026545) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0002bd2e) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0002bd2e) popup_note_wait_window_g

0xa088,	// (0x0002655d) popup_note_wait_window_t1_ParamLimits

0xa088,	// (0x0002655d) popup_note_wait_window_t1

0xa0af,	// (0x00026584) popup_note_wait_window_t2_ParamLimits

0xa0af,	// (0x00026584) popup_note_wait_window_t2

0xa0cd,	// (0x000265a2) popup_note_wait_window_t3_ParamLimits

0xa0cd,	// (0x000265a2) popup_note_wait_window_t3

0xa0e0,	// (0x000265b5) popup_note_wait_window_t4_ParamLimits

0xa0e0,	// (0x000265b5) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0002bd35) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0002bd35) popup_note_wait_window_t

0xa105,	// (0x000265da) wait_bar_pane_ParamLimits

0xa105,	// (0x000265da) wait_bar_pane

0x37c1,	// (0x0001fc96) wait_anim_pane

0x37c1,	// (0x0001fc96) wait_border_pane

0x363e,	// (0x0001fb13) wait_anim_pane_g1

0x363e,	// (0x0001fb13) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0002bbf4) wait_anim_pane_g

0x9fd8,	// (0x000264ad) wait_border_pane_g1

0x9fe3,	// (0x000264b8) wait_border_pane_g2

0x9fec,	// (0x000264c1) wait_border_pane_g3

0x0002,

0xf852,	// (0x0002bd27) wait_border_pane_g

0x9e42,	// (0x00026317) bg_popup_window_pane_cp16_ParamLimits

0x9e42,	// (0x00026317) bg_popup_window_pane_cp16

0x9f42,	// (0x00026417) indicator_popup_pane_cp4_ParamLimits

0x9f42,	// (0x00026417) indicator_popup_pane_cp4

0x9f56,	// (0x0002642b) popup_query_data_window_t1_ParamLimits

0x9f56,	// (0x0002642b) popup_query_data_window_t1

0x9f68,	// (0x0002643d) popup_query_data_window_t2_ParamLimits

0x9f68,	// (0x0002643d) popup_query_data_window_t2

0x9f81,	// (0x00026456) popup_query_data_window_t3_ParamLimits

0x9f81,	// (0x00026456) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0002bd20) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0002bd20) popup_query_data_window_t

0x9f9b,	// (0x00026470) query_popup_data_pane_ParamLimits

0x9f9b,	// (0x00026470) query_popup_data_pane

0x9faf,	// (0x00026484) query_popup_data_pane_cp1_ParamLimits

0x9faf,	// (0x00026484) query_popup_data_pane_cp1

0x9e42,	// (0x00026317) bg_popup_window_pane_cp10_ParamLimits

0x9e42,	// (0x00026317) bg_popup_window_pane_cp10

0x9e74,	// (0x00026349) indicator_popup_pane_ParamLimits

0x9e74,	// (0x00026349) indicator_popup_pane

0x9e96,	// (0x0002636b) popup_query_code_window_t1_ParamLimits

0x9e96,	// (0x0002636b) popup_query_code_window_t1

0x9eb0,	// (0x00026385) popup_query_code_window_t2_ParamLimits

0x9eb0,	// (0x00026385) popup_query_code_window_t2

0x9ef9,	// (0x000263ce) popup_query_code_window_t3_ParamLimits

0x9ef9,	// (0x000263ce) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0002bd19) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0002bd19) popup_query_code_window_t

0x9f28,	// (0x000263fd) query_popup_pane_ParamLimits

0x9f28,	// (0x000263fd) query_popup_pane

0x633b,	// (0x00022810) bg_popup_window_pane_cp15_ParamLimits

0x633b,	// (0x00022810) bg_popup_window_pane_cp15

0x635b,	// (0x00022830) indicator_popup_pane_cp1_ParamLimits

0x635b,	// (0x00022830) indicator_popup_pane_cp1

0x636e,	// (0x00022843) indicator_popup_pane_cp2_ParamLimits

0x636e,	// (0x00022843) indicator_popup_pane_cp2

0x6389,	// (0x0002285e) popup_query_data_code_window_g1_ParamLimits

0x6389,	// (0x0002285e) popup_query_data_code_window_g1

0x639c,	// (0x00022871) popup_query_data_code_window_t1_ParamLimits

0x639c,	// (0x00022871) popup_query_data_code_window_t1

0x63ae,	// (0x00022883) popup_query_data_code_window_t2_ParamLimits

0x63ae,	// (0x00022883) popup_query_data_code_window_t2

0x63c0,	// (0x00022895) popup_query_data_code_window_t3_ParamLimits

0x63c0,	// (0x00022895) popup_query_data_code_window_t3

0x63d6,	// (0x000228ab) popup_query_data_code_window_t4_ParamLimits

0x63d6,	// (0x000228ab) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002ba7b) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002ba7b) popup_query_data_code_window_t

0x8918,	// (0x00024ded) list_single_midp_graphic_pane_g3

0x63f0,	// (0x000228c5) query_popup_data_pane_cp2_ParamLimits

0x6403,	// (0x000228d8) query_popup_pane_cp2_ParamLimits

0x6403,	// (0x000228d8) query_popup_pane_cp2

0x37c1,	// (0x0001fc96) bg_popup_window_pane_cp11

0x9e3a,	// (0x0002630f) heading_pane_cp5

0x64f3,	// (0x000229c8) listscroll_popup_info_pane

0x37c1,	// (0x0001fc96) input_focus_pane_cp3

0x641e,	// (0x000228f3) query_popup_pane_t1

0x642c,	// (0x00022901) list_popup_info_pane_ParamLimits

0x642c,	// (0x00022901) list_popup_info_pane

0x643b,	// (0x00022910) listscroll_popup_info_pane_g1

0x6443,	// (0x00022918) scroll_pane_cp7

0x644d,	// (0x00022922) popup_info_list_pane_t1_ParamLimits

0x644d,	// (0x00022922) popup_info_list_pane_t1

0x6467,	// (0x0002293c) popup_info_list_pane_t2_ParamLimits

0x6467,	// (0x0002293c) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002ba84) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002ba84) popup_info_list_pane_t

0x37c1,	// (0x0001fc96) bg_popup_window_pane_cp12

0xb227,	// (0x000276fc) find_popup_pane

0x5f79,	// (0x0002244e) bg_popup_window_pane_cp3

0x6481,	// (0x00022956) heading_pane_cp3

0x648d,	// (0x00022962) listscroll_popup_graphic_pane

0x37c1,	// (0x0001fc96) bg_popup_window_pane_cp4

0x64e9,	// (0x000229be) heading_pane_cp4

0x64f3,	// (0x000229c8) listscroll_popup_colour_pane

0x64fb,	// (0x000229d0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x64fb,	// (0x000229d0) cell_large_graphic_colour_none_popup_pane

0x650f,	// (0x000229e4) grid_large_graphic_colour_popup_pane_ParamLimits

0x650f,	// (0x000229e4) grid_large_graphic_colour_popup_pane

0x653b,	// (0x00022a10) listscroll_popup_colour_pane_g1_ParamLimits

0x653b,	// (0x00022a10) listscroll_popup_colour_pane_g1

0x6552,	// (0x00022a27) listscroll_popup_colour_pane_g2_ParamLimits

0x6552,	// (0x00022a27) listscroll_popup_colour_pane_g2

0x6569,	// (0x00022a3e) listscroll_popup_colour_pane_g3_ParamLimits

0x6569,	// (0x00022a3e) listscroll_popup_colour_pane_g3

0x6579,	// (0x00022a4e) listscroll_popup_colour_pane_g4_ParamLimits

0x6579,	// (0x00022a4e) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002ba89) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002ba89) listscroll_popup_colour_pane_g

0x658d,	// (0x00022a62) scroll_pane_cp6_ParamLimits

0x658d,	// (0x00022a62) scroll_pane_cp6

0x659f,	// (0x00022a74) cell_large_graphic_colour_popup_pane_ParamLimits

0x659f,	// (0x00022a74) cell_large_graphic_colour_popup_pane

0x65c4,	// (0x00022a99) cell_large_graphic_colour_none_popup_pane_t1

0x37c1,	// (0x0001fc96) grid_highlight_pane_cp5

0x65d3,	// (0x00022aa8) cell_large_graphic_colour_popup_pane_g1

0x65db,	// (0x00022ab0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002ba92) cell_large_graphic_colour_popup_pane_g

0x65e3,	// (0x00022ab8) cell_large_graphic_colour_popup_pane_g2_copy1

0x65ec,	// (0x00022ac1) grid_highlight_pane_cp4

0x65f4,	// (0x00022ac9) bg_popup_window_pane_cp8_ParamLimits

0x65f4,	// (0x00022ac9) bg_popup_window_pane_cp8

0x660f,	// (0x00022ae4) popup_snote_single_text_window_g1_ParamLimits

0x660f,	// (0x00022ae4) popup_snote_single_text_window_g1

0x6621,	// (0x00022af6) popup_snote_single_text_window_t1_ParamLimits

0x6621,	// (0x00022af6) popup_snote_single_text_window_t1

0x6634,	// (0x00022b09) popup_snote_single_text_window_t2_ParamLimits

0x6634,	// (0x00022b09) popup_snote_single_text_window_t2

0x6647,	// (0x00022b1c) popup_snote_single_text_window_t3_ParamLimits

0x6647,	// (0x00022b1c) popup_snote_single_text_window_t3

0x6680,	// (0x00022b55) popup_snote_single_text_window_t4_ParamLimits

0x6680,	// (0x00022b55) popup_snote_single_text_window_t4

0x66b4,	// (0x00022b89) popup_snote_single_text_window_t5_ParamLimits

0x66b4,	// (0x00022b89) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002ba97) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002ba97) popup_snote_single_text_window_t

0x66e3,	// (0x00022bb8) bg_popup_window_pane_cp9_ParamLimits

0x66e3,	// (0x00022bb8) bg_popup_window_pane_cp9

0x660f,	// (0x00022ae4) popup_snote_single_graphic_window_g1_ParamLimits

0x660f,	// (0x00022ae4) popup_snote_single_graphic_window_g1

0x66f1,	// (0x00022bc6) popup_snote_single_graphic_window_g2_ParamLimits

0x66f1,	// (0x00022bc6) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002baa2) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002baa2) popup_snote_single_graphic_window_g

0x66fd,	// (0x00022bd2) popup_snote_single_graphic_window_t1_ParamLimits

0x66fd,	// (0x00022bd2) popup_snote_single_graphic_window_t1

0x6710,	// (0x00022be5) popup_snote_single_graphic_window_t2_ParamLimits

0x6710,	// (0x00022be5) popup_snote_single_graphic_window_t2

0x6723,	// (0x00022bf8) popup_snote_single_graphic_window_t3_ParamLimits

0x6723,	// (0x00022bf8) popup_snote_single_graphic_window_t3

0x675c,	// (0x00022c31) popup_snote_single_graphic_window_t4_ParamLimits

0x675c,	// (0x00022c31) popup_snote_single_graphic_window_t4

0x6790,	// (0x00022c65) popup_snote_single_graphic_window_t5_ParamLimits

0x6790,	// (0x00022c65) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002baa7) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002baa7) popup_snote_single_graphic_window_t

0xb165,	// (0x0002763a) grid_graphic_popup_pane_ParamLimits

0xb165,	// (0x0002763a) grid_graphic_popup_pane

0xb193,	// (0x00027668) listscroll_popup_graphic_pane_g1_ParamLimits

0xb193,	// (0x00027668) listscroll_popup_graphic_pane_g1

0xb1a7,	// (0x0002767c) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1a7,	// (0x0002767c) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0002be96) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0002be96) listscroll_popup_graphic_pane_g

0xb1bb,	// (0x00027690) scroll_pane_cp5

0xb10d,	// (0x000275e2) cell_graphic_popup_pane_ParamLimits

0xb10d,	// (0x000275e2) cell_graphic_popup_pane

0xb0ee,	// (0x000275c3) cell_graphic_popup_pane_g1

0xb0f6,	// (0x000275cb) cell_graphic_popup_pane_g2

0x65e3,	// (0x00022ab8) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0002be8f) cell_graphic_popup_pane_g

0xb0ff,	// (0x000275d4) cell_graphic_popup_pane_t2

0x65ec,	// (0x00022ac1) grid_highlight_pane_cp3

0x67d1,	// (0x00022ca6) list_gen_pane_ParamLimits

0x67d1,	// (0x00022ca6) list_gen_pane

0x6803,	// (0x00022cd8) scroll_pane

0xb050,	// (0x00027525) bg_list_pane_g1_ParamLimits

0xb050,	// (0x00027525) bg_list_pane_g1

0xb06b,	// (0x00027540) bg_list_pane_g2_ParamLimits

0xb06b,	// (0x00027540) bg_list_pane_g2

0xb07e,	// (0x00027553) bg_list_pane_g3_ParamLimits

0xb07e,	// (0x00027553) bg_list_pane_g3

0xb090,	// (0x00027565) bg_list_pane_g4_ParamLimits

0xb090,	// (0x00027565) bg_list_pane_g4

0xb0a2,	// (0x00027577) bg_list_pane_g5_ParamLimits

0xb0a2,	// (0x00027577) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0002be84) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0002be84) bg_list_pane_g

0x541b,	// (0x000218f0) list_double2_graphic_large_graphic_pane_ParamLimits

0x541b,	// (0x000218f0) list_double2_graphic_large_graphic_pane

0x541b,	// (0x000218f0) list_double2_graphic_pane_ParamLimits

0x541b,	// (0x000218f0) list_double2_graphic_pane

0x541b,	// (0x000218f0) list_double2_large_graphic_pane_ParamLimits

0x541b,	// (0x000218f0) list_double2_large_graphic_pane

0xafe1,	// (0x000274b6) list_double2_pane_ParamLimits

0xafe1,	// (0x000274b6) list_double2_pane

0x541b,	// (0x000218f0) list_double_graphic_heading_pane_ParamLimits

0x541b,	// (0x000218f0) list_double_graphic_heading_pane

0x541b,	// (0x000218f0) list_double_graphic_pane_ParamLimits

0x541b,	// (0x000218f0) list_double_graphic_pane

0x541b,	// (0x000218f0) list_double_heading_pane_ParamLimits

0x541b,	// (0x000218f0) list_double_heading_pane

0x541b,	// (0x000218f0) list_double_large_graphic_pane_ParamLimits

0x541b,	// (0x000218f0) list_double_large_graphic_pane

0x541b,	// (0x000218f0) list_double_number_pane_ParamLimits

0x541b,	// (0x000218f0) list_double_number_pane

0x541b,	// (0x000218f0) list_double_pane_ParamLimits

0x541b,	// (0x000218f0) list_double_pane

0x541b,	// (0x000218f0) list_double_time_pane_ParamLimits

0x541b,	// (0x000218f0) list_double_time_pane

0x541b,	// (0x000218f0) list_setting_number_pane_ParamLimits

0x541b,	// (0x000218f0) list_setting_number_pane

0x541b,	// (0x000218f0) list_setting_pane_ParamLimits

0x541b,	// (0x000218f0) list_setting_pane

0xb00c,	// (0x000274e1) list_single_2graphic_pane_ParamLimits

0xb00c,	// (0x000274e1) list_single_2graphic_pane

0xb00c,	// (0x000274e1) list_single_graphic_heading_pane_ParamLimits

0xb00c,	// (0x000274e1) list_single_graphic_heading_pane

0xb00c,	// (0x000274e1) list_single_graphic_pane_ParamLimits

0xb00c,	// (0x000274e1) list_single_graphic_pane

0xb00c,	// (0x000274e1) list_single_heading_pane_ParamLimits

0xb00c,	// (0x000274e1) list_single_heading_pane

0x545a,	// (0x0002192f) list_single_large_graphic_pane_ParamLimits

0x545a,	// (0x0002192f) list_single_large_graphic_pane

0xb00c,	// (0x000274e1) list_single_number_heading_pane_ParamLimits

0xb00c,	// (0x000274e1) list_single_number_heading_pane

0xb00c,	// (0x000274e1) list_single_number_pane_ParamLimits

0xb00c,	// (0x000274e1) list_single_number_pane

0xb00c,	// (0x000274e1) list_single_pane_ParamLimits

0xb00c,	// (0x000274e1) list_single_pane

0x37c1,	// (0x0001fc96) list_highlight_pane_cp1

0x4aea,	// (0x00020fbf) list_single_pane_g1_ParamLimits

0x4aea,	// (0x00020fbf) list_single_pane_g1

0x4af6,	// (0x00020fcb) list_single_pane_g2_ParamLimits

0x4af6,	// (0x00020fcb) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002bab9) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002bab9) list_single_pane_g

0x5405,	// (0x000218da) list_single_pane_t1_ParamLimits

0x5405,	// (0x000218da) list_single_pane_t1

0x4aea,	// (0x00020fbf) list_single_number_pane_g1_ParamLimits

0x4aea,	// (0x00020fbf) list_single_number_pane_g1

0x4af6,	// (0x00020fcb) list_single_number_pane_g2_ParamLimits

0x4af6,	// (0x00020fcb) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002bab9) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002bab9) list_single_number_pane_g

0x53af,	// (0x00021884) list_single_number_pane_t1_ParamLimits

0x53af,	// (0x00021884) list_single_number_pane_t1

0x53c5,	// (0x0002189a) list_single_number_pane_t2_ParamLimits

0x53c5,	// (0x0002189a) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0002be45) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0002be45) list_single_number_pane_t

0x4ade,	// (0x00020fb3) list_single_graphic_pane_g1_ParamLimits

0x4ade,	// (0x00020fb3) list_single_graphic_pane_g1

0x4aea,	// (0x00020fbf) list_single_graphic_pane_g2_ParamLimits

0x4aea,	// (0x00020fbf) list_single_graphic_pane_g2

0x4af6,	// (0x00020fcb) list_single_graphic_pane_g3_ParamLimits

0x4af6,	// (0x00020fcb) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002bab2) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002bab2) list_single_graphic_pane_g

0x4b02,	// (0x00020fd7) list_single_graphic_pane_t1_ParamLimits

0x4b02,	// (0x00020fd7) list_single_graphic_pane_t1

0x4aea,	// (0x00020fbf) list_single_heading_pane_g1_ParamLimits

0x4aea,	// (0x00020fbf) list_single_heading_pane_g1

0x4af6,	// (0x00020fcb) list_single_heading_pane_g2_ParamLimits

0x4af6,	// (0x00020fcb) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002bab9) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002bab9) list_single_heading_pane_g

0x4b18,	// (0x00020fed) list_single_heading_pane_t1_ParamLimits

0x4b18,	// (0x00020fed) list_single_heading_pane_t1

0x4b2e,	// (0x00021003) list_single_heading_pane_t2_ParamLimits

0x4b2e,	// (0x00021003) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002babe) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002babe) list_single_heading_pane_t

0x4aea,	// (0x00020fbf) list_single_number_heading_pane_g1_ParamLimits

0x4aea,	// (0x00020fbf) list_single_number_heading_pane_g1

0x4af6,	// (0x00020fcb) list_single_number_heading_pane_g2_ParamLimits

0x4af6,	// (0x00020fcb) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002bab9) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002bab9) list_single_number_heading_pane_g

0x4b18,	// (0x00020fed) list_single_number_heading_pane_t1_ParamLimits

0x4b18,	// (0x00020fed) list_single_number_heading_pane_t1

0x4b40,	// (0x00021015) list_single_number_heading_pane_t2_ParamLimits

0x4b40,	// (0x00021015) list_single_number_heading_pane_t2

0x4b52,	// (0x00021027) list_single_number_heading_pane_t3_ParamLimits

0x4b52,	// (0x00021027) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002bac3) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002bac3) list_single_number_heading_pane_t

0x4b64,	// (0x00021039) list_single_graphic_heading_pane_g1_ParamLimits

0x4b64,	// (0x00021039) list_single_graphic_heading_pane_g1

0x4b70,	// (0x00021045) list_single_graphic_heading_pane_g4_ParamLimits

0x4b70,	// (0x00021045) list_single_graphic_heading_pane_g4

0x4af6,	// (0x00020fcb) list_single_graphic_heading_pane_g5_ParamLimits

0x4af6,	// (0x00020fcb) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002baca) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002baca) list_single_graphic_heading_pane_g

0x4b18,	// (0x00020fed) list_single_graphic_heading_pane_t1_ParamLimits

0x4b18,	// (0x00020fed) list_single_graphic_heading_pane_t1

0x4b81,	// (0x00021056) list_single_graphic_heading_pane_t2_ParamLimits

0x4b81,	// (0x00021056) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002bad1) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002bad1) list_single_graphic_heading_pane_t

0x4b93,	// (0x00021068) list_single_large_graphic_pane_g1_ParamLimits

0x4b93,	// (0x00021068) list_single_large_graphic_pane_g1

0x4aea,	// (0x00020fbf) list_single_large_graphic_pane_g2_ParamLimits

0x4aea,	// (0x00020fbf) list_single_large_graphic_pane_g2

0x4af6,	// (0x00020fcb) list_single_large_graphic_pane_g3_ParamLimits

0x4af6,	// (0x00020fcb) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002bad6) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002bad6) list_single_large_graphic_pane_g

0x9fe3,	// (0x000264b8) wait_border_pane_g2_copy1

0x4b9f,	// (0x00021074) list_single_large_graphic_pane_g4_cp2

0x4b18,	// (0x00020fed) list_single_large_graphic_pane_t1_ParamLimits

0x4b18,	// (0x00020fed) list_single_large_graphic_pane_t1

0x4ba7,	// (0x0002107c) list_double_pane_g1_ParamLimits

0x4ba7,	// (0x0002107c) list_double_pane_g1

0x4bb3,	// (0x00021088) list_double_pane_g2_ParamLimits

0x4bb3,	// (0x00021088) list_double_pane_g2

0x0001,

0xf608,	// (0x0002badd) list_double_pane_g_ParamLimits

0xf608,	// (0x0002badd) list_double_pane_g

0x4bbf,	// (0x00021094) list_double_pane_t1_ParamLimits

0x4bbf,	// (0x00021094) list_double_pane_t1

0x4bd5,	// (0x000210aa) list_double_pane_t2_ParamLimits

0x4bd5,	// (0x000210aa) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002bae2) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002bae2) list_double_pane_t

0x4be7,	// (0x000210bc) list_double2_pane_g1_ParamLimits

0x4be7,	// (0x000210bc) list_double2_pane_g1

0x4bf8,	// (0x000210cd) list_double2_pane_g2_ParamLimits

0x4bf8,	// (0x000210cd) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002bae7) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002bae7) list_double2_pane_g

0x4c04,	// (0x000210d9) list_double2_pane_t1_ParamLimits

0x4c04,	// (0x000210d9) list_double2_pane_t1

0x4c1a,	// (0x000210ef) list_double2_pane_t2_ParamLimits

0x4c1a,	// (0x000210ef) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002baec) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002baec) list_double2_pane_t

0x4ba7,	// (0x0002107c) list_double_number_pane_g1_ParamLimits

0x4ba7,	// (0x0002107c) list_double_number_pane_g1

0x4bb3,	// (0x00021088) list_double_number_pane_g2_ParamLimits

0x4bb3,	// (0x00021088) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0002badd) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0002badd) list_double_number_pane_g

0x4c2c,	// (0x00021101) list_double_number_pane_t1_ParamLimits

0x4c2c,	// (0x00021101) list_double_number_pane_t1

0x4c3e,	// (0x00021113) list_double_number_pane_t2_ParamLimits

0x4c3e,	// (0x00021113) list_double_number_pane_t2

0x4c54,	// (0x00021129) list_double_number_pane_t3_ParamLimits

0x4c54,	// (0x00021129) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002baf1) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002baf1) list_double_number_pane_t

0x4c66,	// (0x0002113b) list_double_graphic_pane_g1_ParamLimits

0x4c66,	// (0x0002113b) list_double_graphic_pane_g1

0x4c72,	// (0x00021147) list_double_graphic_pane_g2_ParamLimits

0x4c72,	// (0x00021147) list_double_graphic_pane_g2

0x4c81,	// (0x00021156) list_double_graphic_pane_g3_ParamLimits

0x4c81,	// (0x00021156) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002baf8) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002baf8) list_double_graphic_pane_g

0x4c99,	// (0x0002116e) list_double_graphic_pane_t1_ParamLimits

0x4c99,	// (0x0002116e) list_double_graphic_pane_t1

0x4caf,	// (0x00021184) list_double_graphic_pane_t2_ParamLimits

0x4caf,	// (0x00021184) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002bb01) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002bb01) list_double_graphic_pane_t

0x4cc1,	// (0x00021196) list_double2_graphic_pane_g1_ParamLimits

0x4cc1,	// (0x00021196) list_double2_graphic_pane_g1

0x4ccd,	// (0x000211a2) list_double2_graphic_pane_g2_ParamLimits

0x4ccd,	// (0x000211a2) list_double2_graphic_pane_g2

0x4cd9,	// (0x000211ae) list_double2_graphic_pane_g3_ParamLimits

0x4cd9,	// (0x000211ae) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002bb06) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002bb06) list_double2_graphic_pane_g

0x4ce5,	// (0x000211ba) list_double2_graphic_pane_t1_ParamLimits

0x4ce5,	// (0x000211ba) list_double2_graphic_pane_t1

0x4cfb,	// (0x000211d0) list_double2_graphic_pane_t2_ParamLimits

0x4cfb,	// (0x000211d0) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002bb0d) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002bb0d) list_double2_graphic_pane_t

0x4d0d,	// (0x000211e2) list_double_large_graphic_pane_g1_ParamLimits

0x4d0d,	// (0x000211e2) list_double_large_graphic_pane_g1

0x4d38,	// (0x0002120d) list_double_large_graphic_pane_g2_ParamLimits

0x4d38,	// (0x0002120d) list_double_large_graphic_pane_g2

0x4bb3,	// (0x00021088) list_double_large_graphic_pane_g3_ParamLimits

0x4bb3,	// (0x00021088) list_double_large_graphic_pane_g3

0x4d49,	// (0x0002121e) list_double_large_graphic_pane_g4_ParamLimits

0x4d49,	// (0x0002121e) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002bb12) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002bb12) list_double_large_graphic_pane_g

0x4d71,	// (0x00021246) list_double_large_graphic_pane_t1_ParamLimits

0x4d71,	// (0x00021246) list_double_large_graphic_pane_t1

0x4d8a,	// (0x0002125f) list_double_large_graphic_pane_t2_ParamLimits

0x4d8a,	// (0x0002125f) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002bb1d) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002bb1d) list_double_large_graphic_pane_t

0x4d9c,	// (0x00021271) list_double2_large_graphic_pane_g1_ParamLimits

0x4d9c,	// (0x00021271) list_double2_large_graphic_pane_g1

0x4da8,	// (0x0002127d) list_double2_large_graphic_pane_g2_ParamLimits

0x4da8,	// (0x0002127d) list_double2_large_graphic_pane_g2

0x4db9,	// (0x0002128e) list_double2_large_graphic_pane_g3_ParamLimits

0x4db9,	// (0x0002128e) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002bb22) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002bb22) list_double2_large_graphic_pane_g

0x4dc5,	// (0x0002129a) list_double2_large_graphic_pane_t1_ParamLimits

0x4dc5,	// (0x0002129a) list_double2_large_graphic_pane_t1

0x4ddb,	// (0x000212b0) list_double2_large_graphic_pane_t2_ParamLimits

0x4ddb,	// (0x000212b0) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002bb29) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002bb29) list_double2_large_graphic_pane_t

0x4ded,	// (0x000212c2) list_double_heading_pane_g1_ParamLimits

0x4ded,	// (0x000212c2) list_double_heading_pane_g1

0x4dfe,	// (0x000212d3) list_double_heading_pane_g2_ParamLimits

0x4dfe,	// (0x000212d3) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002bb2e) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002bb2e) list_double_heading_pane_g

0x4e0a,	// (0x000212df) list_double_heading_pane_t1_ParamLimits

0x4e0a,	// (0x000212df) list_double_heading_pane_t1

0x4e20,	// (0x000212f5) list_double_heading_pane_t2_ParamLimits

0x4e20,	// (0x000212f5) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002bb33) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002bb33) list_double_heading_pane_t

0x4e32,	// (0x00021307) list_double_graphic_heading_pane_g1_ParamLimits

0x4e32,	// (0x00021307) list_double_graphic_heading_pane_g1

0x4ded,	// (0x000212c2) list_double_graphic_heading_pane_g2_ParamLimits

0x4ded,	// (0x000212c2) list_double_graphic_heading_pane_g2

0x4dfe,	// (0x000212d3) list_double_graphic_heading_pane_g3_ParamLimits

0x4dfe,	// (0x000212d3) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002bb38) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002bb38) list_double_graphic_heading_pane_g

0x4e3e,	// (0x00021313) list_double_graphic_heading_pane_t1_ParamLimits

0x4e3e,	// (0x00021313) list_double_graphic_heading_pane_t1

0x4cfb,	// (0x000211d0) list_double_graphic_heading_pane_t2_ParamLimits

0x4cfb,	// (0x000211d0) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002bb3f) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002bb3f) list_double_graphic_heading_pane_t

0x4d38,	// (0x0002120d) list_double_time_pane_g1_ParamLimits

0x4d38,	// (0x0002120d) list_double_time_pane_g1

0x4bb3,	// (0x00021088) list_double_time_pane_g2_ParamLimits

0x4bb3,	// (0x00021088) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0002bb44) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0002bb44) list_double_time_pane_g

0x4e54,	// (0x00021329) list_double_time_pane_t1_ParamLimits

0x4e54,	// (0x00021329) list_double_time_pane_t1

0x4e6a,	// (0x0002133f) list_double_time_pane_t2_ParamLimits

0x4e6a,	// (0x0002133f) list_double_time_pane_t2

0x4e7c,	// (0x00021351) list_double_time_pane_t3_ParamLimits

0x4e7c,	// (0x00021351) list_double_time_pane_t3

0x4e8e,	// (0x00021363) list_double_time_pane_t4_ParamLimits

0x4e8e,	// (0x00021363) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0002bb49) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0002bb49) list_double_time_pane_t

0x4ea0,	// (0x00021375) list_setting_pane_g1_ParamLimits

0x4ea0,	// (0x00021375) list_setting_pane_g1

0x4eac,	// (0x00021381) list_setting_pane_g2_ParamLimits

0x4eac,	// (0x00021381) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0002bb52) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0002bb52) list_setting_pane_g

0x4eb8,	// (0x0002138d) list_setting_pane_t1_ParamLimits

0x4eb8,	// (0x0002138d) list_setting_pane_t1

0x4ed2,	// (0x000213a7) list_setting_pane_t2_ParamLimits

0x4ed2,	// (0x000213a7) list_setting_pane_t2

0x0002,

0xf682,	// (0x0002bb57) list_setting_pane_t_ParamLimits

0xf682,	// (0x0002bb57) list_setting_pane_t

0x4f11,	// (0x000213e6) set_value_pane_cp_ParamLimits

0x4f11,	// (0x000213e6) set_value_pane_cp

0x4f1f,	// (0x000213f4) list_setting_number_pane_g1_ParamLimits

0x4f1f,	// (0x000213f4) list_setting_number_pane_g1

0x4f2b,	// (0x00021400) list_setting_number_pane_g2_ParamLimits

0x4f2b,	// (0x00021400) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0002bb5e) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0002bb5e) list_setting_number_pane_g

0x4f37,	// (0x0002140c) list_setting_number_pane_t1_ParamLimits

0x4f37,	// (0x0002140c) list_setting_number_pane_t1

0x4f50,	// (0x00021425) list_setting_number_pane_t2_ParamLimits

0x4f50,	// (0x00021425) list_setting_number_pane_t2

0x4f6a,	// (0x0002143f) list_setting_number_pane_t3_ParamLimits

0x4f6a,	// (0x0002143f) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0002bb63) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0002bb63) list_setting_number_pane_t

0x4f11,	// (0x000213e6) set_value_pane_ParamLimits

0x4f11,	// (0x000213e6) set_value_pane

0x7e37,	// (0x0002430c) bg_set_opt_pane_ParamLimits

0x7e37,	// (0x0002430c) bg_set_opt_pane

0x4fad,	// (0x00021482) set_value_pane_t1

0x7e58,	// (0x0002432d) slider_set_pane_cp3

0x7e61,	// (0x00024336) volume_small_pane_cp

0x7e6a,	// (0x0002433f) list_form_gen_pane

0x7e73,	// (0x00024348) scroll_pane_cp8

0x4fbb,	// (0x00021490) form_field_data_pane_ParamLimits

0x4fbb,	// (0x00021490) form_field_data_pane

0x4fe1,	// (0x000214b6) form_field_data_wide_pane_ParamLimits

0x4fe1,	// (0x000214b6) form_field_data_wide_pane

0x5008,	// (0x000214dd) form_field_popup_pane_ParamLimits

0x5008,	// (0x000214dd) form_field_popup_pane

0x502a,	// (0x000214ff) form_field_popup_wide_pane_ParamLimits

0x502a,	// (0x000214ff) form_field_popup_wide_pane

0x504b,	// (0x00021520) form_field_slider_pane_ParamLimits

0x504b,	// (0x00021520) form_field_slider_pane

0x505e,	// (0x00021533) form_field_slider_wide_pane_ParamLimits

0x505e,	// (0x00021533) form_field_slider_wide_pane

0x7e84,	// (0x00024359) data_form_pane

0x507b,	// (0x00021550) form_field_data_pane_t1

0x7e90,	// (0x00024365) input_focus_pane

0x7e9e,	// (0x00024373) data_form_wide_pane

0x50a1,	// (0x00021576) form_field_data_wide_pane_t1

0x6601,	// (0x00022ad6) input_focus_pane_cp6

0x50c3,	// (0x00021598) form_field_popup_pane_t1

0x7e90,	// (0x00024365) input_focus_pane_cp7

0x7eca,	// (0x0002439f) list_form_pane

0x50e5,	// (0x000215ba) form_field_popup_wide_pane_t1

0x7e90,	// (0x00024365) input_focus_pane_cp8

0x7ed6,	// (0x000243ab) list_form_wide_pane

0x5102,	// (0x000215d7) form_field_slider_pane_t1_ParamLimits

0x5102,	// (0x000215d7) form_field_slider_pane_t1

0x511a,	// (0x000215ef) form_field_slider_pane_t2_ParamLimits

0x511a,	// (0x000215ef) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0002bb73) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0002bb73) form_field_slider_pane_t

0x6285,	// (0x0002275a) input_focus_pane_cp9_ParamLimits

0x6285,	// (0x0002275a) input_focus_pane_cp9

0x512f,	// (0x00021604) slider_cont_pane_ParamLimits

0x512f,	// (0x00021604) slider_cont_pane

0x7ee5,	// (0x000243ba) form_field_slider_wide_pane_t1_ParamLimits

0x7ee5,	// (0x000243ba) form_field_slider_wide_pane_t1

0x5143,	// (0x00021618) form_field_slider_wide_pane_t2_ParamLimits

0x5143,	// (0x00021618) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0002bb78) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0002bb78) form_field_slider_wide_pane_t

0x6285,	// (0x0002275a) input_focus_pane_cp10_ParamLimits

0x6285,	// (0x0002275a) input_focus_pane_cp10

0x5155,	// (0x0002162a) slider_cont_pane_cp1_ParamLimits

0x5155,	// (0x0002162a) slider_cont_pane_cp1

0x5169,	// (0x0002163e) slider_form_pane_cp

0x7ef7,	// (0x000243cc) input_focus_pane_g1

0x7eff,	// (0x000243d4) input_focus_pane_g2

0x7f07,	// (0x000243dc) input_focus_pane_g3

0x7f0f,	// (0x000243e4) input_focus_pane_g4

0x7f17,	// (0x000243ec) input_focus_pane_g5

0x7f1f,	// (0x000243f4) input_focus_pane_g6

0x7f27,	// (0x000243fc) input_focus_pane_g7

0x7f2f,	// (0x00024404) input_focus_pane_g8

0x7f37,	// (0x0002440c) input_focus_pane_g9

0x363e,	// (0x0001fb13) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0002bb7d) input_focus_pane_g

0x9fec,	// (0x000264c1) wait_border_pane_g3_copy1

0x5171,	// (0x00021646) data_form_pane_t1

0x363e,	// (0x0001fb13) wait_anim_pane_g1_copy1

0x53d7,	// (0x000218ac) data_form_wide_pane_t1

0x518e,	// (0x00021663) list_form_graphic_pane_cp_ParamLimits

0x518e,	// (0x00021663) list_form_graphic_pane_cp

0xaf71,	// (0x00027446) slider_form_pane_g1

0xaf7a,	// (0x0002744f) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0002be75) slider_form_pane_g

0x51a3,	// (0x00021678) list_form_graphic_pane_ParamLimits

0x51a3,	// (0x00021678) list_form_graphic_pane

0x51b5,	// (0x0002168a) list_form_graphic_pane_g1

0x51bd,	// (0x00021692) list_form_graphic_pane_t1_ParamLimits

0x51bd,	// (0x00021692) list_form_graphic_pane_t1

0x5f79,	// (0x0002244e) list_highlight_pane_cp5_ParamLimits

0x5f79,	// (0x0002244e) list_highlight_pane_cp5

0x51d2,	// (0x000216a7) find_pane_g1

0x7f3f,	// (0x00024414) input_find_pane

0x51db,	// (0x000216b0) input_find_pane_g1_ParamLimits

0x51db,	// (0x000216b0) input_find_pane_g1

0x51e7,	// (0x000216bc) input_find_pane_t1_ParamLimits

0x51e7,	// (0x000216bc) input_find_pane_t1

0x51fc,	// (0x000216d1) input_find_pane_t2_ParamLimits

0x51fc,	// (0x000216d1) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0002bb92) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0002bb92) input_find_pane_t

0x7f48,	// (0x0002441d) input_focus_pane_cp5_ParamLimits

0x7f48,	// (0x0002441d) input_focus_pane_cp5

0x7f62,	// (0x00024437) bg_popup_window_pane_cp2_ParamLimits

0x7f62,	// (0x00024437) bg_popup_window_pane_cp2

0x7f6f,	// (0x00024444) listscroll_menu_pane_ParamLimits

0x7f6f,	// (0x00024444) listscroll_menu_pane

0x7f7b,	// (0x00024450) popup_submenu_window_ParamLimits

0x7f7b,	// (0x00024450) popup_submenu_window

0x7fab,	// (0x00024480) find_popup_pane_g1

0x7fb3,	// (0x00024488) input_popup_find_pane_cp

0x7f48,	// (0x0002441d) input_focus_pane_cp4_ParamLimits

0x7f48,	// (0x0002441d) input_focus_pane_cp4

0x7fcb,	// (0x000244a0) input_popup_find_pane_t1_ParamLimits

0x7fcb,	// (0x000244a0) input_popup_find_pane_t1

0x37c1,	// (0x0001fc96) bg_popup_sub_pane_cp

0x7ff9,	// (0x000244ce) listscroll_popup_sub_pane

0x8001,	// (0x000244d6) list_submenu_pane_ParamLimits

0x8001,	// (0x000244d6) list_submenu_pane

0x8012,	// (0x000244e7) scroll_pane_cp4

0x801a,	// (0x000244ef) list_single_popup_submenu_pane_ParamLimits

0x801a,	// (0x000244ef) list_single_popup_submenu_pane

0x802f,	// (0x00024504) list_single_popup_submenu_pane_g1

0x8037,	// (0x0002450c) list_single_popup_submenu_pane_t1_ParamLimits

0x8037,	// (0x0002450c) list_single_popup_submenu_pane_t1

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp1_ParamLimits

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp1

0x804c,	// (0x00024521) tabs_2_active_pane_g1

0x8054,	// (0x00024529) tabs_2_active_pane_t1

0x5f79,	// (0x0002244e) bg_passive_tab_pane_cp1_ParamLimits

0x5f79,	// (0x0002244e) bg_passive_tab_pane_cp1

0x804c,	// (0x00024521) tabs_2_passive_pane_g1

0x8054,	// (0x00024529) tabs_2_passive_pane_t1

0x8066,	// (0x0002453b) bg_active_tab_pane_cp4

0x8074,	// (0x00024549) tabs_2_long_active_pane_t1

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp4

0x08b1,	// (0x0001cd86) list_single_midp_graphic_pane_g4_ParamLimits

0x8066,	// (0x0002453b) bg_active_tab_pane_cp5

0x8093,	// (0x00024568) tabs_3_long_active_pane_t1

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp5

0x08b1,	// (0x0001cd86) list_single_midp_graphic_pane_g4

0x5f79,	// (0x0002244e) bg_popup_window_pane_cp13_ParamLimits

0x5f79,	// (0x0002244e) bg_popup_window_pane_cp13

0x80ae,	// (0x00024583) listscroll_popup_fast_pane_ParamLimits

0x80ae,	// (0x00024583) listscroll_popup_fast_pane

0x80bd,	// (0x00024592) grid_popup_fast_pane_ParamLimits

0x80bd,	// (0x00024592) grid_popup_fast_pane

0x80cf,	// (0x000245a4) scroll_pane_cp9_ParamLimits

0x80cf,	// (0x000245a4) scroll_pane_cp9

0xc8c7,	// (0x00028d9c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8c7,	// (0x00028d9c) list_single_graphic_hl_pane_t1_cp2

0x80f3,	// (0x000245c8) input_focus_pane_cp20_ParamLimits

0x80f3,	// (0x000245c8) input_focus_pane_cp20

0x8101,	// (0x000245d6) query_popup_data_pane_t1_ParamLimits

0x8101,	// (0x000245d6) query_popup_data_pane_t1

0x8114,	// (0x000245e9) query_popup_data_pane_t2_ParamLimits

0x8114,	// (0x000245e9) query_popup_data_pane_t2

0x815a,	// (0x0002462f) query_popup_data_pane_t3_ParamLimits

0x815a,	// (0x0002462f) query_popup_data_pane_t3

0x819b,	// (0x00024670) query_popup_data_pane_t4_ParamLimits

0x819b,	// (0x00024670) query_popup_data_pane_t4

0x81d7,	// (0x000246ac) query_popup_data_pane_t5_ParamLimits

0x81d7,	// (0x000246ac) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0002bb97) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0002bb97) query_popup_data_pane_t

0x7ef7,	// (0x000243cc) bg_set_opt_pane_g1

0x7eff,	// (0x000243d4) bg_set_opt_pane_g2

0x7f07,	// (0x000243dc) bg_set_opt_pane_g3

0x7f0f,	// (0x000243e4) bg_set_opt_pane_g4

0x7f17,	// (0x000243ec) bg_set_opt_pane_g5

0x7f1f,	// (0x000243f4) bg_set_opt_pane_g6

0x7f27,	// (0x000243fc) bg_set_opt_pane_g7

0x7f2f,	// (0x00024404) bg_set_opt_pane_g8

0x7f37,	// (0x0002440c) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0002bba2) bg_set_opt_pane_g

0x6ada,	// (0x00022faf) control_top_pane_stacon_ParamLimits

0x6ada,	// (0x00022faf) control_top_pane_stacon

0x6b2d,	// (0x00023002) signal_pane_stacon_ParamLimits

0x6b2d,	// (0x00023002) signal_pane_stacon

0x8783,	// (0x00024c58) stacon_top_pane_g1_ParamLimits

0x8783,	// (0x00024c58) stacon_top_pane_g1

0x6b52,	// (0x00023027) title_pane_stacon_ParamLimits

0x6b52,	// (0x00023027) title_pane_stacon

0x6b7c,	// (0x00023051) uni_indicator_pane_stacon_ParamLimits

0x6b7c,	// (0x00023051) uni_indicator_pane_stacon

0x6b94,	// (0x00023069) battery_pane_stacon_ParamLimits

0x6b94,	// (0x00023069) battery_pane_stacon

0x6bd8,	// (0x000230ad) control_bottom_pane_stacon_ParamLimits

0x6bd8,	// (0x000230ad) control_bottom_pane_stacon

0x6bfb,	// (0x000230d0) navi_pane_stacon_ParamLimits

0x6bfb,	// (0x000230d0) navi_pane_stacon

0x87a5,	// (0x00024c7a) stacon_bottom_pane_g1_ParamLimits

0x87a5,	// (0x00024c7a) stacon_bottom_pane_g1

0x6837,	// (0x00022d0c) aid_levels_signal_lsc_ParamLimits

0x6837,	// (0x00022d0c) aid_levels_signal_lsc

0x684e,	// (0x00022d23) signal_pane_stacon_g1_ParamLimits

0x684e,	// (0x00022d23) signal_pane_stacon_g1

0x6862,	// (0x00022d37) signal_pane_stacon_g2_ParamLimits

0x6862,	// (0x00022d37) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0002bbb5) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002bbb5) signal_pane_stacon_g

0x6897,	// (0x00022d6c) title_pane_stacon_t1_ParamLimits

0x6897,	// (0x00022d6c) title_pane_stacon_t1

0x821b,	// (0x000246f0) uni_indicator_pane_stacon_g1

0x8225,	// (0x000246fa) uni_indicator_pane_stacon_g2

0x822f,	// (0x00024704) uni_indicator_pane_stacon_g3

0x8239,	// (0x0002470e) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0002bbc1) uni_indicator_pane_stacon_g

0x68bc,	// (0x00022d91) control_top_pane_stacon_g1

0x68c4,	// (0x00022d99) control_top_pane_stacon_t1_ParamLimits

0x68c4,	// (0x00022d99) control_top_pane_stacon_t1

0x68fb,	// (0x00022dd0) aid_levels_battery_lsc_ParamLimits

0x68fb,	// (0x00022dd0) aid_levels_battery_lsc

0x6913,	// (0x00022de8) battery_pane_stacon_g1_ParamLimits

0x6913,	// (0x00022de8) battery_pane_stacon_g1

0x6926,	// (0x00022dfb) battery_pane_stacon_g2_ParamLimits

0x6926,	// (0x00022dfb) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0002bbca) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0002bbca) battery_pane_stacon_g

0x6964,	// (0x00022e39) navi_icon_pane_stacon

0x6978,	// (0x00022e4d) navi_navi_pane_stacon

0x6964,	// (0x00022e39) navi_text_pane_stacon

0x68bc,	// (0x00022d91) control_bottom_pane_stacon_g1

0x698e,	// (0x00022e63) control_bottom_pane_stacon_t1_ParamLimits

0x698e,	// (0x00022e63) control_bottom_pane_stacon_t1

0x825d,	// (0x00024732) grid_app_pane_ParamLimits

0x825d,	// (0x00024732) grid_app_pane

0x8281,	// (0x00024756) scroll_pane_cp15_ParamLimits

0x8281,	// (0x00024756) scroll_pane_cp15

0x8296,	// (0x0002476b) cell_app_pane_ParamLimits

0x8296,	// (0x0002476b) cell_app_pane

0x82c2,	// (0x00024797) cell_app_pane_g1_ParamLimits

0x82c2,	// (0x00024797) cell_app_pane_g1

0x82e6,	// (0x000247bb) cell_app_pane_g2_ParamLimits

0x82e6,	// (0x000247bb) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0002bbcf) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0002bbcf) cell_app_pane_g

0x82f2,	// (0x000247c7) cell_app_pane_t1_ParamLimits

0x82f2,	// (0x000247c7) cell_app_pane_t1

0x8304,	// (0x000247d9) grid_highlight_pane_ParamLimits

0x8304,	// (0x000247d9) grid_highlight_pane

0x7ef7,	// (0x000243cc) cell_highlight_pane_g1

0x7eff,	// (0x000243d4) cell_highlight_pane_g2

0x7f07,	// (0x000243dc) cell_highlight_pane_g3

0x7f0f,	// (0x000243e4) cell_highlight_pane_g4

0x7f17,	// (0x000243ec) cell_highlight_pane_g5

0x7f1f,	// (0x000243f4) cell_highlight_pane_g6

0x7f27,	// (0x000243fc) cell_highlight_pane_g7

0x7f2f,	// (0x00024404) cell_highlight_pane_g8

0x7f37,	// (0x0002440c) cell_highlight_pane_g9

0x363e,	// (0x0001fb13) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0002bb7d) cell_highlight_pane_g

0x8315,	// (0x000247ea) bg_scroll_pane

0x69d8,	// (0x00022ead) scroll_handle_pane

0x835c,	// (0x00024831) scroll_bg_pane_g1

0x8371,	// (0x00024846) scroll_bg_pane_g2

0x8389,	// (0x0002485e) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0002bbd4) scroll_bg_pane_g

0x839e,	// (0x00024873) scroll_handle_focus_pane_ParamLimits

0x839e,	// (0x00024873) scroll_handle_focus_pane

0x835c,	// (0x00024831) scroll_handle_pane_g1

0x83ab,	// (0x00024880) scroll_handle_pane_g2

0x8389,	// (0x0002485e) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0002bbdb) scroll_handle_pane_g

0x7f48,	// (0x0002441d) bg_popup_sub_pane_cp21_ParamLimits

0x7f48,	// (0x0002441d) bg_popup_sub_pane_cp21

0x83bf,	// (0x00024894) popup_fep_japan_predictive_window_t1_ParamLimits

0x83bf,	// (0x00024894) popup_fep_japan_predictive_window_t1

0x83d6,	// (0x000248ab) popup_fep_japan_predictive_window_t2_ParamLimits

0x83d6,	// (0x000248ab) popup_fep_japan_predictive_window_t2

0x8409,	// (0x000248de) popup_fep_japan_predictive_window_t3_ParamLimits

0x8409,	// (0x000248de) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0002bbe2) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0002bbe2) popup_fep_japan_predictive_window_t

0x37c1,	// (0x0001fc96) bg_popup_sub_pane_cp23

0x8440,	// (0x00024915) listscroll_japin_cand_pane

0x8448,	// (0x0002491d) popup_fep_japan_candidate_window_t1

0x8456,	// (0x0002492b) candidate_pane_ParamLimits

0x8456,	// (0x0002492b) candidate_pane

0x8468,	// (0x0002493d) scroll_pane_cp30

0x8472,	// (0x00024947) list_single_popup_jap_candidate_pane_ParamLimits

0x8472,	// (0x00024947) list_single_popup_jap_candidate_pane

0x37c1,	// (0x0001fc96) list_highlight_pane_cp30

0x8486,	// (0x0002495b) list_single_popup_jap_candidate_pane_t1

0x8495,	// (0x0002496a) level_1_signal

0x84a2,	// (0x00024977) level_2_signal

0x84af,	// (0x00024984) level_3_signal

0x84bc,	// (0x00024991) level_4_signal

0x84c9,	// (0x0002499e) level_5_signal

0x84d6,	// (0x000249ab) level_6_signal

0x84e3,	// (0x000249b8) level_7_signal

0x8495,	// (0x0002496a) level_1_battery

0x84a2,	// (0x00024977) level_2_battery

0x84af,	// (0x00024984) level_3_battery

0x84bc,	// (0x00024991) level_4_battery

0x84c9,	// (0x0002499e) level_5_battery

0x84d6,	// (0x000249ab) level_6_battery

0x84e3,	// (0x000249b8) level_7_battery

0x8508,	// (0x000249dd) list_menu_pane_ParamLimits

0x8508,	// (0x000249dd) list_menu_pane

0x8519,	// (0x000249ee) scroll_pane_cp25_ParamLimits

0x8519,	// (0x000249ee) scroll_pane_cp25

0x8532,	// (0x00024a07) list_double2_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00024a07) list_double2_graphic_pane_cp2

0x8532,	// (0x00024a07) list_double2_large_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00024a07) list_double2_large_graphic_pane_cp2

0x8532,	// (0x00024a07) list_double2_pane_cp2_ParamLimits

0x8532,	// (0x00024a07) list_double2_pane_cp2

0x8532,	// (0x00024a07) list_double_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00024a07) list_double_graphic_pane_cp2

0x8532,	// (0x00024a07) list_double_large_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00024a07) list_double_large_graphic_pane_cp2

0x8532,	// (0x00024a07) list_double_number_pane_cp2_ParamLimits

0x8532,	// (0x00024a07) list_double_number_pane_cp2

0x8532,	// (0x00024a07) list_double_pane_cp2_ParamLimits

0x8532,	// (0x00024a07) list_double_pane_cp2

0x8558,	// (0x00024a2d) list_single_2graphic_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_2graphic_pane_cp2

0x8558,	// (0x00024a2d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_graphic_heading_pane_cp2

0x8558,	// (0x00024a2d) list_single_graphic_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_graphic_pane_cp2

0x8558,	// (0x00024a2d) list_single_heading_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_heading_pane_cp2

0x8575,	// (0x00024a4a) list_single_large_graphic_pane_cp2_ParamLimits

0x8575,	// (0x00024a4a) list_single_large_graphic_pane_cp2

0x8558,	// (0x00024a2d) list_single_number_heading_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_number_heading_pane_cp2

0x8558,	// (0x00024a2d) list_single_number_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_number_pane_cp2

0x8558,	// (0x00024a2d) list_single_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_pane_cp2

0x85ca,	// (0x00024a9f) bg_popup_sub_pane_cp22

0x6a8a,	// (0x00022f5f) popup_side_volume_key_window_g1

0x6ab4,	// (0x00022f89) popup_side_volume_key_window_t1

0x6ad2,	// (0x00022fa7) volume_small_pane_cp1

0x6285,	// (0x0002275a) bg_popup_sub_pane_cp24_ParamLimits

0x6285,	// (0x0002275a) bg_popup_sub_pane_cp24

0x85e0,	// (0x00024ab5) fep_china_uni_candidate_pane_ParamLimits

0x85e0,	// (0x00024ab5) fep_china_uni_candidate_pane

0x85f4,	// (0x00024ac9) fep_china_uni_entry_pane

0x8604,	// (0x00024ad9) popup_fep_china_uni_window_g1

0x8620,	// (0x00024af5) fep_china_uni_entry_pane_g1

0x862a,	// (0x00024aff) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002bc0f) fep_china_uni_entry_pane_g

0x8634,	// (0x00024b09) fep_entry_item_pane

0x863e,	// (0x00024b13) fep_candidate_item_pane

0x8646,	// (0x00024b1b) fep_china_uni_candidate_pane_g1

0x8650,	// (0x00024b25) fep_china_uni_candidate_pane_g2

0x8658,	// (0x00024b2d) fep_china_uni_candidate_pane_g3

0x8660,	// (0x00024b35) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002bc14) fep_china_uni_candidate_pane_g

0x363e,	// (0x0001fb13) fep_entry_item_pane_g1

0x866a,	// (0x00024b3f) fep_entry_item_pane_t1_ParamLimits

0x866a,	// (0x00024b3f) fep_entry_item_pane_t1

0x8680,	// (0x00024b55) fep_candidate_item_pane_t1_ParamLimits

0x8680,	// (0x00024b55) fep_candidate_item_pane_t1

0x8695,	// (0x00024b6a) fep_candidate_item_pane_t2_ParamLimits

0x8695,	// (0x00024b6a) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002bc1d) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002bc1d) fep_candidate_item_pane_t

0x5f79,	// (0x0002244e) list_highlight_pane_cp31_ParamLimits

0x5f79,	// (0x0002244e) list_highlight_pane_cp31

0x86a7,	// (0x00024b7c) level_1_signal_lsc

0x86b0,	// (0x00024b85) level_2_signal_lsc

0x86b9,	// (0x00024b8e) level_3_signal_lsc

0x86c2,	// (0x00024b97) level_4_signal_lsc

0x86cb,	// (0x00024ba0) level_5_signal_lsc

0x86d4,	// (0x00024ba9) level_6_signal_lsc

0x86dd,	// (0x00024bb2) level_7_signal_lsc

0x86dd,	// (0x00024bb2) level_1_battery_lsc

0x86e6,	// (0x00024bbb) level_2_battery_lsc

0x86ef,	// (0x00024bc4) level_3_battery_lsc

0x86f8,	// (0x00024bcd) level_4_battery_lsc

0x8701,	// (0x00024bd6) level_5_battery_lsc

0x870a,	// (0x00024bdf) level_6_battery_lsc

0x86a7,	// (0x00024b7c) level_7_battery_lsc

0x8713,	// (0x00024be8) scroll_handle_focus_pane_g1

0x871c,	// (0x00024bf1) scroll_handle_focus_pane_g2

0x8725,	// (0x00024bfa) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002bc22) scroll_handle_focus_pane_g

0x5211,	// (0x000216e6) list_single_2graphic_pane_g1_ParamLimits

0x5211,	// (0x000216e6) list_single_2graphic_pane_g1

0x4b70,	// (0x00021045) list_single_2graphic_pane_g2_ParamLimits

0x4b70,	// (0x00021045) list_single_2graphic_pane_g2

0x4af6,	// (0x00020fcb) list_single_2graphic_pane_g3_ParamLimits

0x4af6,	// (0x00020fcb) list_single_2graphic_pane_g3

0x521d,	// (0x000216f2) list_single_2graphic_pane_g4_ParamLimits

0x521d,	// (0x000216f2) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002bc29) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002bc29) list_single_2graphic_pane_g

0x5229,	// (0x000216fe) list_single_2graphic_pane_t1_ParamLimits

0x5229,	// (0x000216fe) list_single_2graphic_pane_t1

0x5257,	// (0x0002172c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5257,	// (0x0002172c) list_double2_graphic_large_graphic_pane_g1

0x4da8,	// (0x0002127d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4da8,	// (0x0002127d) list_double2_graphic_large_graphic_pane_g2

0x4db9,	// (0x0002128e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4db9,	// (0x0002128e) list_double2_graphic_large_graphic_pane_g3

0x5269,	// (0x0002173e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5269,	// (0x0002173e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002bc32) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002bc32) list_double2_graphic_large_graphic_pane_g

0x5275,	// (0x0002174a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5275,	// (0x0002174a) list_double2_graphic_large_graphic_pane_t1

0x528b,	// (0x00021760) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x528b,	// (0x00021760) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002bc3b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002bc3b) list_double2_graphic_large_graphic_pane_t

0x8867,	// (0x00024d3c) popup_fast_swap_window_ParamLimits

0x8867,	// (0x00024d3c) popup_fast_swap_window

0x8885,	// (0x00024d5a) popup_side_volume_key_window

0x88a3,	// (0x00024d78) stacon_top_pane

0x88ad,	// (0x00024d82) status_pane_ParamLimits

0x88ad,	// (0x00024d82) status_pane

0x88a3,	// (0x00024d78) status_small_pane

0x37c1,	// (0x0001fc96) control_pane

0x37c1,	// (0x0001fc96) stacon_bottom_pane

0x7e73,	// (0x00024348) scroll_pane_cp121

0x7e6a,	// (0x0002433f) set_content_pane

0x872e,	// (0x00024c03) bg_active_tab_pane_g1_cp1

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp1

0x8740,	// (0x00024c15) bg_active_tab_pane_g3_cp1

0x872e,	// (0x00024c03) bg_passive_tab_pane_g1_cp1

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp1

0x8740,	// (0x00024c15) bg_passive_tab_pane_g3_cp1

0x8749,	// (0x00024c1e) bg_active_tab_pane_g1_cp2

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp2

0x8752,	// (0x00024c27) bg_active_tab_pane_g3_cp2

0x8749,	// (0x00024c1e) bg_passive_tab_pane_g1_cp2

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp2

0x8752,	// (0x00024c27) bg_passive_tab_pane_g3_cp2

0x875b,	// (0x00024c30) bg_active_tab_pane_g1_cp3

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp3

0x8764,	// (0x00024c39) bg_active_tab_pane_g3_cp3

0x875b,	// (0x00024c30) bg_passive_tab_pane_g1_cp3

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp3

0x8764,	// (0x00024c39) bg_passive_tab_pane_g3_cp3

0x876d,	// (0x00024c42) bg_active_tab_pane_g1_cp4

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp4

0x8778,	// (0x00024c4d) bg_active_tab_pane_g3_cp4

0x876d,	// (0x00024c42) bg_passive_tab_pane_g1_cp4

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp4

0x8778,	// (0x00024c4d) bg_passive_tab_pane_g3_cp4

0x87c1,	// (0x00024c96) bg_active_tab_pane_g1_cp5

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp5

0x87ca,	// (0x00024c9f) bg_active_tab_pane_g3_cp5

0x87c1,	// (0x00024c96) bg_passive_tab_pane_g1_cp5

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp5

0x87ca,	// (0x00024c9f) bg_passive_tab_pane_g3_cp5

0x87d3,	// (0x00024ca8) list_set_graphic_pane_ParamLimits

0x87d3,	// (0x00024ca8) list_set_graphic_pane

0x37c1,	// (0x0001fc96) bg_set_opt_pane_cp4

0x87e8,	// (0x00024cbd) list_set_graphic_pane_g1_ParamLimits

0x87e8,	// (0x00024cbd) list_set_graphic_pane_g1

0x87f4,	// (0x00024cc9) list_set_graphic_pane_g2_ParamLimits

0x87f4,	// (0x00024cc9) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002bc40) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002bc40) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0002bfaa) volume_small_pane_cp_g

0x8818,	// (0x00024ced) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8818,	// (0x00024ced) list_double2_large_graphic_pane_g1_cp2

0x8826,	// (0x00024cfb) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8826,	// (0x00024cfb) list_double2_large_graphic_pane_g2_cp2

0x8837,	// (0x00024d0c) list_double2_large_graphic_pane_g3_cp2

0x883f,	// (0x00024d14) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x883f,	// (0x00024d14) list_double2_large_graphic_pane_t1_cp2

0x8855,	// (0x00024d2a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8855,	// (0x00024d2a) list_double2_large_graphic_pane_t2_cp2

0xaad6,	// (0x00026fab) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad6,	// (0x00026fab) list_double_large_graphic_pane_g1_cp2

0xaae9,	// (0x00026fbe) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae9,	// (0x00026fbe) list_double_large_graphic_pane_g2_cp2

0x89cb,	// (0x00024ea0) list_double_large_graphic_pane_g3_cp2

0xaafa,	// (0x00026fcf) list_double_large_graphic_pane_g4_cp

0xab02,	// (0x00026fd7) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab02,	// (0x00026fd7) list_double_large_graphic_pane_t1_cp2

0xab19,	// (0x00026fee) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab19,	// (0x00026fee) list_double_large_graphic_pane_t2_cp2

0x88bb,	// (0x00024d90) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88bb,	// (0x00024d90) list_double2_graphic_pane_g1_cp2

0x88c9,	// (0x00024d9e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x88c9,	// (0x00024d9e) list_double2_graphic_pane_g2_cp2

0x88da,	// (0x00024daf) list_double2_graphic_pane_g3_cp2

0x88e4,	// (0x00024db9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x88e4,	// (0x00024db9) list_double2_graphic_pane_t1_cp2

0x88fa,	// (0x00024dcf) list_double2_graphic_pane_t2_cp2_ParamLimits

0x88fa,	// (0x00024dcf) list_double2_graphic_pane_t2_cp2

0x890c,	// (0x00024de1) list_single_number_heading_pane_g1_cp2_ParamLimits

0x890c,	// (0x00024de1) list_single_number_heading_pane_g1_cp2

0x8918,	// (0x00024ded) list_single_number_heading_pane_g2_cp2

0x8920,	// (0x00024df5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8920,	// (0x00024df5) list_single_number_heading_pane_t1_cp2

0x8936,	// (0x00024e0b) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8936,	// (0x00024e0b) list_single_number_heading_pane_t2_cp2

0x894a,	// (0x00024e1f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x894a,	// (0x00024e1f) list_single_number_heading_pane_t3_cp2

0x890c,	// (0x00024de1) list_single_heading_pane_g1_cp2_ParamLimits

0x890c,	// (0x00024de1) list_single_heading_pane_g1_cp2

0x8918,	// (0x00024ded) list_single_heading_pane_g2_cp2

0x8920,	// (0x00024df5) list_single_heading_pane_t1_cp2_ParamLimits

0x8920,	// (0x00024df5) list_single_heading_pane_t1_cp2

0xa8d0,	// (0x00026da5) list_single_heading_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x00026da5) list_single_heading_pane_t2_cp2

0xa812,	// (0x00026ce7) list_double_graphic_pane_g1_cp2_ParamLimits

0xa812,	// (0x00026ce7) list_double_graphic_pane_g1_cp2

0xa81e,	// (0x00026cf3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa81e,	// (0x00026cf3) list_double_graphic_pane_g2_cp2

0xa82d,	// (0x00026d02) list_double_graphic_pane_g3_cp2

0xa835,	// (0x00026d0a) list_double_graphic_pane_t1_cp2_ParamLimits

0xa835,	// (0x00026d0a) list_double_graphic_pane_t1_cp2

0xa84b,	// (0x00026d20) list_double_graphic_pane_t2_cp2_ParamLimits

0xa84b,	// (0x00026d20) list_double_graphic_pane_t2_cp2

0x89bf,	// (0x00024e94) list_double_number_pane_g1_cp2_ParamLimits

0x89bf,	// (0x00024e94) list_double_number_pane_g1_cp2

0x89cb,	// (0x00024ea0) list_double_number_pane_g2_cp2

0xa7d6,	// (0x00026cab) list_double_number_pane_t1_cp2_ParamLimits

0xa7d6,	// (0x00026cab) list_double_number_pane_t1_cp2

0xa7ea,	// (0x00026cbf) list_double_number_pane_t2_cp2_ParamLimits

0xa7ea,	// (0x00026cbf) list_double_number_pane_t2_cp2

0xa800,	// (0x00026cd5) list_double_number_pane_t3_cp2_ParamLimits

0xa800,	// (0x00026cd5) list_double_number_pane_t3_cp2

0xa6bf,	// (0x00026b94) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6bf,	// (0x00026b94) list_single_graphic_pane_g1_cp2

0x8a25,	// (0x00024efa) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a25,	// (0x00024efa) list_single_graphic_pane_g2_cp2

0x8a31,	// (0x00024f06) list_single_graphic_pane_g3_cp2

0xa695,	// (0x00026b6a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x00026b6a) list_single_graphic_pane_t1_cp2

0x8a25,	// (0x00024efa) list_single_number_pane_g1_cp2_ParamLimits

0x8a25,	// (0x00024efa) list_single_number_pane_g1_cp2

0x8a31,	// (0x00024f06) list_single_number_pane_g2_cp2

0xa695,	// (0x00026b6a) list_single_number_pane_t1_cp2_ParamLimits

0xa695,	// (0x00026b6a) list_single_number_pane_t1_cp2

0xa6ab,	// (0x00026b80) list_single_number_pane_t2_cp2_ParamLimits

0xa6ab,	// (0x00026b80) list_single_number_pane_t2_cp2

0x8826,	// (0x00024cfb) list_double2_pane_g1_cp2_ParamLimits

0x8826,	// (0x00024cfb) list_double2_pane_g1_cp2

0x8837,	// (0x00024d0c) list_double2_pane_g2_cp2

0x8997,	// (0x00024e6c) list_double2_pane_t1_cp2_ParamLimits

0x8997,	// (0x00024e6c) list_double2_pane_t1_cp2

0x89ad,	// (0x00024e82) list_double2_pane_t2_cp2_ParamLimits

0x89ad,	// (0x00024e82) list_double2_pane_t2_cp2

0x89bf,	// (0x00024e94) list_double_pane_g1_cp2_ParamLimits

0x89bf,	// (0x00024e94) list_double_pane_g1_cp2

0x89cb,	// (0x00024ea0) list_double_pane_g2_cp2

0x89d3,	// (0x00024ea8) list_double_pane_t1_cp2_ParamLimits

0x89d3,	// (0x00024ea8) list_double_pane_t1_cp2

0x89e9,	// (0x00024ebe) list_double_pane_t2_cp2_ParamLimits

0x89e9,	// (0x00024ebe) list_double_pane_t2_cp2

0x8a15,	// (0x00024eea) list_single_pane_cp2_g3

0x8a25,	// (0x00024efa) list_single_pane_g1_cp2_ParamLimits

0x8a25,	// (0x00024efa) list_single_pane_g1_cp2

0x8a31,	// (0x00024f06) list_single_pane_g2_cp2

0x8a39,	// (0x00024f0e) list_single_pane_t1_cp2_ParamLimits

0x8a39,	// (0x00024f0e) list_single_pane_t1_cp2

0x8a51,	// (0x00024f26) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a51,	// (0x00024f26) list_single_large_graphic_pane_g1_cp2

0x8a5f,	// (0x00024f34) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a5f,	// (0x00024f34) list_single_large_graphic_pane_g2_cp2

0x8a6b,	// (0x00024f40) list_single_large_graphic_pane_g3_cp2

0x8a73,	// (0x00024f48) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a73,	// (0x00024f48) list_single_large_graphic_pane_g4_cp1

0x8a8d,	// (0x00024f62) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a8d,	// (0x00024f62) list_single_large_graphic_pane_t1_cp2

0xa65f,	// (0x00026b34) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa65f,	// (0x00026b34) list_single_graphic_heading_pane_g1_cp2

0xa62c,	// (0x00026b01) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa62c,	// (0x00026b01) list_single_graphic_heading_pane_g4_cp2

0x8a31,	// (0x00024f06) list_single_graphic_heading_pane_g5_cp2

0xa66b,	// (0x00026b40) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa66b,	// (0x00026b40) list_single_graphic_heading_pane_t1_cp2

0xa681,	// (0x00026b56) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa681,	// (0x00026b56) list_single_graphic_heading_pane_t2_cp2

0xa620,	// (0x00026af5) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa620,	// (0x00026af5) list_single_2graphic_pane_g1_cp2

0xa62c,	// (0x00026b01) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa62c,	// (0x00026b01) list_single_2graphic_pane_g2_cp2

0x8a31,	// (0x00024f06) list_single_2graphic_pane_g3_cp2

0xa63d,	// (0x00026b12) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa63d,	// (0x00026b12) list_single_2graphic_pane_g4_cp2

0xa649,	// (0x00026b1e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa649,	// (0x00026b1e) list_single_2graphic_pane_t1_cp2

0x363e,	// (0x0001fb13) list_highlight_pane_g10_cp1

0xa1f8,	// (0x000266cd) list_highlight_pane_g1_cp1

0xa200,	// (0x000266d5) list_highlight_pane_g2_cp1

0xa208,	// (0x000266dd) list_highlight_pane_g3_cp1

0xa210,	// (0x000266e5) list_highlight_pane_g4_cp1

0xa218,	// (0x000266ed) list_highlight_pane_g5_cp1

0xa220,	// (0x000266f5) list_highlight_pane_g6_cp1

0xa228,	// (0x000266fd) list_highlight_pane_g7_cp1

0xa230,	// (0x00026705) list_highlight_pane_g8_cp1

0xa238,	// (0x0002670d) list_highlight_pane_g9_cp1

0xa118,	// (0x000265ed) form_field_slider_pane_t3

0xa126,	// (0x000265fb) form_field_slider_pane_t4

0xa134,	// (0x00026609) slider_form_pane_ParamLimits

0xa134,	// (0x00026609) slider_form_pane

0x37c1,	// (0x0001fc96) control_abbreviations

0x37c1,	// (0x0001fc96) control_conventions

0x37c1,	// (0x0001fc96) control_definitions

0x37c1,	// (0x0001fc96) format_table_attribute

0xa926,	// (0x00026dfb) bg_popup_preview_window_pane_g9

0x37c1,	// (0x0001fc96) format_table_data2

0x37c1,	// (0x0001fc96) format_table_data3

0x37c1,	// (0x0001fc96) format_table_data_example

0x0008,

0x37c1,	// (0x0001fc96) intro_purpose

0xf900,	// (0x0002bdd5) bg_popup_preview_window_pane_g

0x37c1,	// (0x0001fc96) texts_category

0x37c1,	// (0x0001fc96) texts_graphics

0x8aa3,	// (0x00024f78) text_digital

0x8ab2,	// (0x00024f87) text_primary

0x8ac1,	// (0x00024f96) text_primary_small

0x8ad0,	// (0x00024fa5) text_secondary

0x8adf,	// (0x00024fb4) text_title

0xb0c2,	// (0x00027597) bg_passive_tab_pane_g1_cp3_srt

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp3_srt

0xb0cb,	// (0x000275a0) bg_passive_tab_pane_g3_cp3_srt

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp3_srt_ParamLimits

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp3_srt

0xb0d4,	// (0x000275a9) tabs_4_active_pane_srt_g1

0xb0dc,	// (0x000275b1) tabs_4_active_pane_srt_t1_ParamLimits

0xb0dc,	// (0x000275b1) tabs_4_active_pane_srt_t1

0xb0c2,	// (0x00027597) bg_active_tab_pane_g1_cp3_copy1

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp3_copy1

0xb0cb,	// (0x000275a0) bg_active_tab_pane_g3_cp3_copy1

0x5f79,	// (0x0002244e) tabs_2_long_active_pane_srt_ParamLimits

0x5f79,	// (0x0002244e) tabs_2_long_active_pane_srt

0x5f79,	// (0x0002244e) tabs_2_long_passive_pane_srt_ParamLimits

0x5f79,	// (0x0002244e) tabs_2_long_passive_pane_srt

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp4_srt

0xad76,	// (0x0002724b) bg_passive_tab_pane_g1_cp4_srt

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp4_srt

0xad7f,	// (0x00027254) bg_passive_tab_pane_g3_cp4_srt

0x8066,	// (0x0002453b) bg_active_tab_pane_cp4_srt_ParamLimits

0x8066,	// (0x0002453b) bg_active_tab_pane_cp4_srt

0xad88,	// (0x0002725d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad88,	// (0x0002725d) tabs_2_long_active_pane_srt_t1

0xad76,	// (0x0002724b) bg_active_tab_pane_g1_cp4_srt

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp4_srt

0xad7f,	// (0x00027254) bg_active_tab_pane_g3_cp4_srt

0x6285,	// (0x0002275a) tabs_3_long_active_pane_srt_ParamLimits

0x6285,	// (0x0002275a) tabs_3_long_active_pane_srt

0x6285,	// (0x0002275a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6285,	// (0x0002275a) tabs_3_long_passive_pane_cp_srt

0x6285,	// (0x0002275a) tabs_3_long_passive_pane_srt_ParamLimits

0x6285,	// (0x0002275a) tabs_3_long_passive_pane_srt

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp5_srt

0x87c1,	// (0x00024c96) bg_passive_tab_pane_g1_cp5_srt

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp5_srt

0x87ca,	// (0x00024c9f) bg_passive_tab_pane_g3_cp5_srt

0x8066,	// (0x0002453b) bg_active_tab_pane_cp5_srt_ParamLimits

0x8066,	// (0x0002453b) bg_active_tab_pane_cp5_srt

0xad64,	// (0x00027239) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad64,	// (0x00027239) tabs_3_long_active_pane_srt_t1

0x87c1,	// (0x00024c96) bg_active_tab_pane_g1_cp5_srt

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp5_srt

0x87ca,	// (0x00024c9f) bg_active_tab_pane_g3_cp5_srt

0xad56,	// (0x0002722b) navi_text_pane_srt_t1

0xad4e,	// (0x00027223) navi_icon_pane_srt_g1

0x8cb6,	// (0x0002518b) midp_editing_number_pane_srt

0x8aee,	// (0x00024fc3) midp_ticker_pane_srt

0x8cbe,	// (0x00025193) midp_ticker_pane_srt_g1

0x8cc6,	// (0x0002519b) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002bc5f) midp_ticker_pane_srt_g

0x8cce,	// (0x000251a3) midp_ticker_pane_srt_t1

0xad3f,	// (0x00027214) midp_editing_number_pane_t1_copy1

0x8af6,	// (0x00024fcb) listscroll_midp_pane

0x8af6,	// (0x00024fcb) midp_form_pane

0x8b64,	// (0x00025039) midp_info_popup_window_ParamLimits

0x8b64,	// (0x00025039) midp_info_popup_window

0x7f48,	// (0x0002441d) bg_popup_sub_pane_cp50_ParamLimits

0x7f48,	// (0x0002441d) bg_popup_sub_pane_cp50

0x9e2e,	// (0x00026303) listscroll_midp_info_pane_ParamLimits

0x9e2e,	// (0x00026303) listscroll_midp_info_pane

0x9e16,	// (0x000262eb) listscroll_form_midp_pane_ParamLimits

0x9e16,	// (0x000262eb) listscroll_form_midp_pane

0x9e22,	// (0x000262f7) scroll_bar_cp050

0x9df6,	// (0x000262cb) list_midp_pane

0xbb4c,	// (0x00028021) signal_pane_g2_cp

0x9d30,	// (0x00026205) listscroll_midp_info_pane_t1_ParamLimits

0x9d30,	// (0x00026205) listscroll_midp_info_pane_t1

0x9d48,	// (0x0002621d) listscroll_midp_info_pane_t2_ParamLimits

0x9d48,	// (0x0002621d) listscroll_midp_info_pane_t2

0x9d86,	// (0x0002625b) listscroll_midp_info_pane_t3_ParamLimits

0x9d86,	// (0x0002625b) listscroll_midp_info_pane_t3

0x9dc0,	// (0x00026295) listscroll_midp_info_pane_t4_ParamLimits

0x9dc0,	// (0x00026295) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0002bd10) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0002bd10) listscroll_midp_info_pane_t

0x8012,	// (0x000244e7) scroll_pane_cp21

0x9cca,	// (0x0002619f) form_midp_field_choice_group_pane

0x9cd3,	// (0x000261a8) form_midp_field_text_pane

0x9d16,	// (0x000261eb) form_midp_field_time_pane

0x9d1e,	// (0x000261f3) form_midp_gauge_slider_pane

0x9d27,	// (0x000261fc) form_midp_gauge_wait_pane

0x37c1,	// (0x0001fc96) form_midp_image_pane

0x538c,	// (0x00021861) list_single_midp_pane_ParamLimits

0x538c,	// (0x00021861) list_single_midp_pane

0x9c8e,	// (0x00026163) form_midp_field_text_pane_t1

0x9aa2,	// (0x00025f77) input_focus_pane_cp050

0x9cb9,	// (0x0002618e) list_midp_form_text_pane

0x9c5d,	// (0x00026132) form_midp_field_choice_group_pane_t1

0x9c6b,	// (0x00026140) input_focus_pane_cp051

0x9c7f,	// (0x00026154) list_midp_choice_pane

0x37c1,	// (0x0001fc96) status_idle_pane

0x9c41,	// (0x00026116) form_midp_field_time_pane_t1

0x363e,	// (0x0001fb13) wait_anim_pane_g2_copy1

0x9c4f,	// (0x00026124) form_midp_field_time_pane_t2

0x0001,

0x8c14,	// (0x000250e9) aid_navinavi_width_2_pane

0xf836,	// (0x0002bd0b) form_midp_field_time_pane_t

0x37c1,	// (0x0001fc96) input_focus_pane_cp052

0x37c1,	// (0x0001fc96) bg_input_focus_pane_cp040

0x9c01,	// (0x000260d6) form_midp_gauge_slider_pane_t1

0x9c0f,	// (0x000260e4) form_midp_gauge_slider_pane_t2

0x9c1d,	// (0x000260f2) form_midp_gauge_slider_pane_t3

0x9c2b,	// (0x00026100) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0002bd02) form_midp_gauge_slider_pane_t

0x9c39,	// (0x0002610e) form_midp_slider_pane

0x5f79,	// (0x0002244e) bg_input_focus_pane_cp041_ParamLimits

0x5f79,	// (0x0002244e) bg_input_focus_pane_cp041

0x9bce,	// (0x000260a3) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bce,	// (0x000260a3) form_midp_gauge_wait_pane_t1

0x9be0,	// (0x000260b5) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be0,	// (0x000260b5) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0002bcfd) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0002bcfd) form_midp_gauge_wait_pane_t

0x9bf2,	// (0x000260c7) form_midp_wait_pane_ParamLimits

0x9bf2,	// (0x000260c7) form_midp_wait_pane

0x9b96,	// (0x0002606b) form_midp_image_pane_g1

0x9b9f,	// (0x00026074) form_midp_image_pane_t1

0x9bae,	// (0x00026083) form_midp_image_pane_t2

0x9bbd,	// (0x00026092) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0002bcf6) form_midp_image_pane_t

0x9b8d,	// (0x00026062) list_single_midp_pane_g1

0x537d,	// (0x00021852) list_single_midp_pane_t1

0x9b73,	// (0x00026048) list_midp_form_item_pane_ParamLimits

0x9b73,	// (0x00026048) list_midp_form_item_pane

0x8bbc,	// (0x00025091) list_midp_form_item_pane_t1

0x8bcb,	// (0x000250a0) midp_ticker_pane_g1

0x8bd7,	// (0x000250ac) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002bc45) midp_ticker_pane_g

0x8be3,	// (0x000250b8) midp_ticker_pane_t1

0xafbe,	// (0x00027493) midp_editing_number_pane_t1

0xaf9c,	// (0x00027471) midp_editing_number_pane

0xafab,	// (0x00027480) midp_ticker_pane

0xad2f,	// (0x00027204) ai_message_heading_pane

0x37c1,	// (0x0001fc96) bg_popup_window_pane_cp14

0xad37,	// (0x0002720c) listscroll_ai_message_pane

0xacb5,	// (0x0002718a) ai_message_heading_pane_g1_ParamLimits

0xacb5,	// (0x0002718a) ai_message_heading_pane_g1

0xacc1,	// (0x00027196) ai_message_heading_pane_g2_ParamLimits

0xacc1,	// (0x00027196) ai_message_heading_pane_g2

0xaccf,	// (0x000271a4) ai_message_heading_pane_g3_ParamLimits

0xaccf,	// (0x000271a4) ai_message_heading_pane_g3

0xacdb,	// (0x000271b0) ai_message_heading_pane_g4_ParamLimits

0xacdb,	// (0x000271b0) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002be37) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002be37) ai_message_heading_pane_g

0xace7,	// (0x000271bc) ai_message_heading_pane_t1_ParamLimits

0xace7,	// (0x000271bc) ai_message_heading_pane_t1

0xad01,	// (0x000271d6) ai_message_heading_pane_t2_ParamLimits

0xad01,	// (0x000271d6) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0002be40) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0002be40) ai_message_heading_pane_t

0xad15,	// (0x000271ea) bg_popup_heading_pane_cp1_ParamLimits

0xad15,	// (0x000271ea) bg_popup_heading_pane_cp1

0xaca3,	// (0x00027178) list_ai_message_pane_ParamLimits

0xaca3,	// (0x00027178) list_ai_message_pane

0x8012,	// (0x000244e7) scroll_pane_cp10

0xac3f,	// (0x00027114) list_ai_message_pane_g1

0xac47,	// (0x0002711c) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0002be14) list_ai_message_pane_g

0xac4f,	// (0x00027124) list_ai_message_pane_t1_ParamLimits

0xac4f,	// (0x00027124) list_ai_message_pane_t1

0xac64,	// (0x00027139) list_ai_message_pane_t2_ParamLimits

0xac64,	// (0x00027139) list_ai_message_pane_t2

0xac79,	// (0x0002714e) list_ai_message_pane_t3_ParamLimits

0xac79,	// (0x0002714e) list_ai_message_pane_t3

0xac8e,	// (0x00027163) list_ai_message_pane_t4_ParamLimits

0xac8e,	// (0x00027163) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002be19) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002be19) list_ai_message_pane_t

0xac28,	// (0x000270fd) cell_ai_soft_ind_pane_ParamLimits

0xac28,	// (0x000270fd) cell_ai_soft_ind_pane

0x8bf5,	// (0x000250ca) cell_ai_soft_ind_pane_g1_ParamLimits

0x8bf5,	// (0x000250ca) cell_ai_soft_ind_pane_g1

0x37c1,	// (0x0001fc96) grid_highlight_cp1

0x8c02,	// (0x000250d7) text_secondary_cp56_ParamLimits

0x8c02,	// (0x000250d7) text_secondary_cp56

0xabfd,	// (0x000270d2) example_general_pane_ParamLimits

0xabfd,	// (0x000270d2) example_general_pane

0xac09,	// (0x000270de) example_parent_pane_g1_ParamLimits

0xac09,	// (0x000270de) example_parent_pane_g1

0xac15,	// (0x000270ea) example_parent_pane_t1_ParamLimits

0xac15,	// (0x000270ea) example_parent_pane_t1

0x9237,	// (0x0002570c) popup_preview_text_window_ParamLimits

0x9237,	// (0x0002570c) popup_preview_text_window

0x8a1d,	// (0x00024ef2) list_single_pane_cp2_g4

0x633b,	// (0x00022810) bg_popup_preview_window_pane_ParamLimits

0x633b,	// (0x00022810) bg_popup_preview_window_pane

0xa930,	// (0x00026e05) popup_preview_text_window_t1_ParamLimits

0xa930,	// (0x00026e05) popup_preview_text_window_t1

0xa94e,	// (0x00026e23) popup_preview_text_window_t2_ParamLimits

0xa94e,	// (0x00026e23) popup_preview_text_window_t2

0xa997,	// (0x00026e6c) popup_preview_text_window_t3_ParamLimits

0xa997,	// (0x00026e6c) popup_preview_text_window_t3

0xa9dc,	// (0x00026eb1) popup_preview_text_window_t4_ParamLimits

0xa9dc,	// (0x00026eb1) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002bde8) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002bde8) popup_preview_text_window_t

0xaa5a,	// (0x00026f2f) scroll_pane_cp11

0x99b0,	// (0x00025e85) bg_popup_preview_window_pane_g1

0xa8e4,	// (0x00026db9) bg_popup_preview_window_pane_g2

0xa8ee,	// (0x00026dc3) bg_popup_preview_window_pane_g3

0xa8f8,	// (0x00026dcd) bg_popup_preview_window_pane_g4

0xa902,	// (0x00026dd7) bg_popup_preview_window_pane_g5

0xa90c,	// (0x00026de1) bg_popup_preview_window_pane_g6

0xa914,	// (0x00026de9) bg_popup_preview_window_pane_g7

0xa91c,	// (0x00026df1) bg_popup_preview_window_pane_g8

0x5ac4,	// (0x00021f99) aid_popup_width_pane

0x9213,	// (0x000256e8) popup_midp_note_alarm_window_ParamLimits

0x9213,	// (0x000256e8) popup_midp_note_alarm_window

0x7e84,	// (0x00024359) data_form_pane_ParamLimits

0x5071,	// (0x00021546) form_field_data_pane_g1

0x507b,	// (0x00021550) form_field_data_pane_t1_ParamLimits

0x7e90,	// (0x00024365) input_focus_pane_ParamLimits

0x7e9e,	// (0x00024373) data_form_wide_pane_ParamLimits

0x5095,	// (0x0002156a) form_field_data_wide_pane_g1

0x50a1,	// (0x00021576) form_field_data_wide_pane_t1_ParamLimits

0x6601,	// (0x00022ad6) input_focus_pane_cp6_ParamLimits

0x7fbd,	// (0x00024492) input_popup_find_pane_g1_ParamLimits

0x7fbd,	// (0x00024492) input_popup_find_pane_g1

0x6937,	// (0x00022e0c) aid_navi_side_left_pane

0x694c,	// (0x00022e21) aid_navi_side_right_pane

0xa2f3,	// (0x000267c8) bg_popup_window_pane_cp30_ParamLimits

0xa2f3,	// (0x000267c8) bg_popup_window_pane_cp30

0xa36d,	// (0x00026842) popup_midp_note_alarm_window_g1_ParamLimits

0xa36d,	// (0x00026842) popup_midp_note_alarm_window_g1

0xa39d,	// (0x00026872) popup_midp_note_alarm_window_t1_ParamLimits

0xa39d,	// (0x00026872) popup_midp_note_alarm_window_t1

0xa43e,	// (0x00026913) popup_midp_note_alarm_window_t2_ParamLimits

0xa43e,	// (0x00026913) popup_midp_note_alarm_window_t2

0xa4ec,	// (0x000269c1) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ec,	// (0x000269c1) popup_midp_note_alarm_window_t3

0xa51e,	// (0x000269f3) popup_midp_note_alarm_window_t4_ParamLimits

0xa51e,	// (0x000269f3) popup_midp_note_alarm_window_t4

0xa544,	// (0x00026a19) popup_midp_note_alarm_window_t5_ParamLimits

0xa544,	// (0x00026a19) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0002bd85) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0002bd85) popup_midp_note_alarm_window_t

0xa5f0,	// (0x00026ac5) wait_bar_pane_cp1_ParamLimits

0xa5f0,	// (0x00026ac5) wait_bar_pane_cp1

0x37c1,	// (0x0001fc96) wait_anim_pane_copy1

0x37c1,	// (0x0001fc96) wait_border_pane_copy1

0x9fd8,	// (0x000264ad) wait_border_pane_g1_copy1

0x50bb,	// (0x00021590) form_field_popup_pane_g1

0x50c3,	// (0x00021598) form_field_popup_pane_t1_ParamLimits

0x7e90,	// (0x00024365) input_focus_pane_cp7_ParamLimits

0x7eca,	// (0x0002439f) list_form_pane_ParamLimits

0x50dd,	// (0x000215b2) form_field_popup_wide_pane_g1

0x50e5,	// (0x000215ba) form_field_popup_wide_pane_t1_ParamLimits

0x7e90,	// (0x00024365) input_focus_pane_cp8_ParamLimits

0x7ed6,	// (0x000243ab) list_form_wide_pane_ParamLimits

0xb14f,	// (0x00027624) aid_size_cell_graphic_pane

0x5171,	// (0x00021646) data_form_pane_t1_ParamLimits

0x53d7,	// (0x000218ac) data_form_wide_pane_t1_ParamLimits

0x955e,	// (0x00025a33) bg_status_flat_pane

0x5ed9,	// (0x000223ae) title_pane_t1_ParamLimits

0x5f41,	// (0x00022416) title_pane_t2_ParamLimits

0x5f67,	// (0x0002243c) title_pane_t3_ParamLimits

0xf573,	// (0x0002ba48) title_pane_t_ParamLimits

0x8495,	// (0x0002496a) level_1_signal_ParamLimits

0x84a2,	// (0x00024977) level_2_signal_ParamLimits

0x84af,	// (0x00024984) level_3_signal_ParamLimits

0x84bc,	// (0x00024991) level_4_signal_ParamLimits

0x84c9,	// (0x0002499e) level_5_signal_ParamLimits

0x84d6,	// (0x000249ab) level_6_signal_ParamLimits

0x84e3,	// (0x000249b8) level_7_signal_ParamLimits

0x8495,	// (0x0002496a) level_1_battery_ParamLimits

0x84a2,	// (0x00024977) level_2_battery_ParamLimits

0x84af,	// (0x00024984) level_3_battery_ParamLimits

0x84bc,	// (0x00024991) level_4_battery_ParamLimits

0x84c9,	// (0x0002499e) level_5_battery_ParamLimits

0x84d6,	// (0x000249ab) level_6_battery_ParamLimits

0x84e3,	// (0x000249b8) level_7_battery_ParamLimits

0xa1f8,	// (0x000266cd) bg_status_flat_pane_g1

0xa200,	// (0x000266d5) bg_status_flat_pane_g2

0xa208,	// (0x000266dd) bg_status_flat_pane_g3

0xa210,	// (0x000266e5) bg_status_flat_pane_g4

0xa218,	// (0x000266ed) bg_status_flat_pane_g5

0xa220,	// (0x000266f5) bg_status_flat_pane_g6

0xa228,	// (0x000266fd) bg_status_flat_pane_g7

0x5f8f,	// (0x00022464) tabs_3_active_pane_t1_ParamLimits

0x5f8f,	// (0x00022464) tabs_3_passive_pane_t1_ParamLimits

0x5fa9,	// (0x0002247e) tabs_4_active_pane_t1_ParamLimits

0x5fa9,	// (0x0002247e) tabs_4_1_passive_pane_t1_ParamLimits

0x8054,	// (0x00024529) tabs_2_active_pane_t1_ParamLimits

0x8054,	// (0x00024529) tabs_2_passive_pane_t1_ParamLimits

0x8066,	// (0x0002453b) bg_active_tab_pane_cp4_ParamLimits

0x8074,	// (0x00024549) tabs_2_long_active_pane_t1_ParamLimits

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp4_ParamLimits

0x6e8d,	// (0x00023362) list_single_midp_graphic_pane_t1_ParamLimits

0x8066,	// (0x0002453b) bg_active_tab_pane_cp5_ParamLimits

0x8093,	// (0x00024568) tabs_3_long_active_pane_t1_ParamLimits

0x8087,	// (0x0002455c) bg_passive_tab_pane_cp5_ParamLimits

0x6e8d,	// (0x00023362) list_single_midp_graphic_pane_t1

0x955e,	// (0x00025a33) bg_status_flat_pane_ParamLimits

0x9629,	// (0x00025afe) indicator_pane_cp2_ParamLimits

0x9629,	// (0x00025afe) indicator_pane_cp2

0x976b,	// (0x00025c40) navi_pane_srt_ParamLimits

0x976b,	// (0x00025c40) navi_pane_srt

0x978f,	// (0x00025c64) popup_clock_digital_analogue_window_cp1

0x60e9,	// (0x000225be) indicator_pane_t1

0x8aee,	// (0x00024fc3) copy_highlight_pane

0x8aee,	// (0x00024fc3) cursor_graphics_pane

0x8aee,	// (0x00024fc3) graphic_within_text_pane

0x8aee,	// (0x00024fc3) link_highlight_pane

0xaa1d,	// (0x00026ef2) popup_preview_text_window_t5_ParamLimits

0xaa1d,	// (0x00026ef2) popup_preview_text_window_t5

0x8c1e,	// (0x000250f3) cursor_digital_pane

0x8c1e,	// (0x000250f3) cursor_primary_pane

0x8c2f,	// (0x00025104) cursor_primary_small_pane

0x8c37,	// (0x0002510c) cursor_secondary_pane

0x8c3f,	// (0x00025114) cursor_title_pane

0x8c1e,	// (0x000250f3) link_highlight_digital_pane

0x8c26,	// (0x000250fb) link_highlight_primary_pane

0x8c2f,	// (0x00025104) link_highlight_primary_small_pane

0x8c37,	// (0x0002510c) link_highlight_secondary_pane

0x8c3f,	// (0x00025114) link_highlight_title_pane

0x8c1e,	// (0x000250f3) copy_highlight_digital_pane

0x8c1e,	// (0x000250f3) copy_highlight_primary_pane

0x8c2f,	// (0x00025104) copy_highlight_primary_small_pane

0x8c37,	// (0x0002510c) copy_highlight_secondary_pane

0x8c3f,	// (0x00025114) copy_highlight_title_pane

0x8c37,	// (0x0002510c) graphic_text_digital_pane

0xa296,	// (0x0002676b) graphic_text_primary_pane

0xa29f,	// (0x00026774) graphic_text_primary_small_pane

0x8c2f,	// (0x00025104) graphic_text_secondary_pane

0x8c1e,	// (0x000250f3) graphic_text_title_pane

0x8c47,	// (0x0002511c) cursor_primary_pane_g1

0xa288,	// (0x0002675d) cursor_text_primary_t1

0xa270,	// (0x00026745) cursor_primary_small_pane_g1

0xa27a,	// (0x0002674f) cursor_text_primary_small_t1

0xa258,	// (0x0002672d) cursor_primary_small_pane_g1_copy1

0xa262,	// (0x00026737) cursor_text_primary_small_t1_copy1

0xa240,	// (0x00026715) cursor_text_title_t1

0xa24e,	// (0x00026723) cursor_title_pane_g1

0x8c47,	// (0x0002511c) cursor_digital_pane_g1

0x8c51,	// (0x00025126) cursor_text_digital_t1

0x8c5f,	// (0x00025134) link_highlight_primary_pane_g1

0xa1e9,	// (0x000266be) link_highlight_primary_pane_t1

0x8c5f,	// (0x00025134) link_highlight_primary_small_pane_g1

0x8c67,	// (0x0002513c) link_highlight_primary_small_pane_t1

0x8c76,	// (0x0002514b) link_highlight_secondary_pane_g1

0x8c7e,	// (0x00025153) link_highlight_secondary_pane_t1

0xa15d,	// (0x00026632) link_highlight_title_pane_g1

0xa165,	// (0x0002663a) link_highlight_title_pane_t1

0xa146,	// (0x0002661b) link_highlight_digital_pane_g1

0xa14e,	// (0x00026623) link_highlight_digital_pane_t1

0xa00e,	// (0x000264e3) copy_highlight_primary_pane_g1

0xa025,	// (0x000264fa) copy_highlight_primary_pane_t1

0xa00e,	// (0x000264e3) copy_highlight_primary_small_pane_g1

0xa016,	// (0x000264eb) copy_highlight_primary_small_pane_t1

0x8c8d,	// (0x00025162) copy_highlight_secondary_pane_g1

0x8c95,	// (0x0002516a) copy_highlight_secondary_pane_t1

0x9ff7,	// (0x000264cc) copy_highlight_title_pane_g1

0x9fff,	// (0x000264d4) copy_highlight_title_pane_t1

0xa00e,	// (0x000264e3) copy_highlight_digital_pane_g1

0xb31f,	// (0x000277f4) copy_highlight_digital_pane_t1

0xb273,	// (0x00027748) graphic_text_primary_pane_g1

0xb303,	// (0x000277d8) graphic_text_primary_pane_t1

0xb311,	// (0x000277e6) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0002beb4) graphic_text_primary_pane_t

0xb2df,	// (0x000277b4) graphic_text_primary_small_pane_g1

0xb2e7,	// (0x000277bc) graphic_text_primary_small_pane_t1

0xb2f5,	// (0x000277ca) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0002beaf) graphic_text_primary_small_pane_t

0xb2bb,	// (0x00027790) graphic_text_secondary_pane_g1

0xb2c3,	// (0x00027798) graphic_text_secondary_pane_t1

0xb2d1,	// (0x000277a6) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0002beaa) graphic_text_secondary_pane_t

0xb297,	// (0x0002776c) graphic_text_title_pane_g1

0xb29f,	// (0x00027774) graphic_text_title_pane_t1

0xb2ad,	// (0x00027782) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0002bea5) graphic_text_title_pane_t

0xb273,	// (0x00027748) graphic_text_digital_pane_g1

0xb27b,	// (0x00027750) graphic_text_digital_pane_t1

0xb289,	// (0x0002775e) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0002bea0) graphic_text_digital_pane_t

0x5f79,	// (0x0002244e) navi_icon_pane_srt_ParamLimits

0x5f79,	// (0x0002244e) navi_icon_pane_srt

0x37c1,	// (0x0001fc96) navi_midp_pane_srt

0x37c1,	// (0x0001fc96) navi_navi_pane_srt

0x5f79,	// (0x0002244e) navi_text_pane_srt_ParamLimits

0x5f79,	// (0x0002244e) navi_text_pane_srt

0xb23e,	// (0x00027713) navi_navi_icon_text_pane_srt

0xb246,	// (0x0002771b) navi_navi_pane_srt_g1_ParamLimits

0xb246,	// (0x0002771b) navi_navi_pane_srt_g1

0xb258,	// (0x0002772d) navi_navi_pane_srt_g2_ParamLimits

0xb258,	// (0x0002772d) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0002be9b) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0002be9b) navi_navi_pane_srt_g

0xb26a,	// (0x0002773f) navi_navi_tabs_pane_srt

0xb23e,	// (0x00027713) navi_navi_text_pane_srt

0xb23e,	// (0x00027713) navi_navi_volume_pane_srt

0xb22f,	// (0x00027704) navi_navi_text_pane_srt_t1

0x71e7,	// (0x000236bc) navi_navi_volume_pane_srt_g1

0x71ef,	// (0x000236c4) volume_small_pane_srt_ParamLimits

0x71ef,	// (0x000236c4) volume_small_pane_srt

0x6c1e,	// (0x000230f3) volume_small_pane_srt_g1_ParamLimits

0x6c1e,	// (0x000230f3) volume_small_pane_srt_g1

0x6c2e,	// (0x00023103) volume_small_pane_srt_g2_ParamLimits

0x6c2e,	// (0x00023103) volume_small_pane_srt_g2

0x6c3f,	// (0x00023114) volume_small_pane_srt_g3_ParamLimits

0x6c3f,	// (0x00023114) volume_small_pane_srt_g3

0x6c50,	// (0x00023125) volume_small_pane_srt_g4_ParamLimits

0x6c50,	// (0x00023125) volume_small_pane_srt_g4

0x6c61,	// (0x00023136) volume_small_pane_srt_g5_ParamLimits

0x6c61,	// (0x00023136) volume_small_pane_srt_g5

0x6c72,	// (0x00023147) volume_small_pane_srt_g6_ParamLimits

0x6c72,	// (0x00023147) volume_small_pane_srt_g6

0x6c83,	// (0x00023158) volume_small_pane_srt_g7_ParamLimits

0x6c83,	// (0x00023158) volume_small_pane_srt_g7

0x6c94,	// (0x00023169) volume_small_pane_srt_g8_ParamLimits

0x6c94,	// (0x00023169) volume_small_pane_srt_g8

0x6ca5,	// (0x0002317a) volume_small_pane_srt_g9_ParamLimits

0x6ca5,	// (0x0002317a) volume_small_pane_srt_g9

0x6cb6,	// (0x0002318b) volume_small_pane_srt_g10_ParamLimits

0x6cb6,	// (0x0002318b) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002bc4a) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002bc4a) volume_small_pane_srt_g

0x63f0,	// (0x000228c5) query_popup_data_pane_cp2

0xb215,	// (0x000276ea) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb215,	// (0x000276ea) navi_navi_icon_text_pane_srt_t1

0xa296,	// (0x0002676b) navi_tabs_2_long_pane_srt

0xa296,	// (0x0002676b) navi_tabs_2_pane_srt

0xa296,	// (0x0002676b) navi_tabs_3_long_pane_srt

0xa296,	// (0x0002676b) navi_tabs_3_pane_srt

0xa296,	// (0x0002676b) navi_tabs_4_pane_srt

0x71c7,	// (0x0002369c) tabs_2_active_pane_srt_ParamLimits

0x71c7,	// (0x0002369c) tabs_2_active_pane_srt

0x71d7,	// (0x000236ac) tabs_2_passive_pane_srt_ParamLimits

0x71d7,	// (0x000236ac) tabs_2_passive_pane_srt

0x8e74,	// (0x00025349) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e74,	// (0x00025349) bg_passive_tab_pane_cp1_srt

0xb1e1,	// (0x000276b6) bg_passive_tab_pane_g1_cp1_srt

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp1_srt

0xb1ea,	// (0x000276bf) bg_passive_tab_pane_g3_cp1_srt

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp1_srt_ParamLimits

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp1_srt

0xb1f3,	// (0x000276c8) tabs_2_active_pane_srt_g1

0xb1fb,	// (0x000276d0) tabs_2_active_pane_srt_t1_ParamLimits

0xb1fb,	// (0x000276d0) tabs_2_active_pane_srt_t1

0xb1e1,	// (0x000276b6) bg_active_tab_pane_g1_cp1_srt

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp1_srt

0xb1ea,	// (0x000276bf) bg_active_tab_pane_g3_cp1_srt

0x7194,	// (0x00023669) tabs_3_active_pane_srt_ParamLimits

0x7194,	// (0x00023669) tabs_3_active_pane_srt

0x71a5,	// (0x0002367a) tabs_3_passive_pane_cp_srt_ParamLimits

0x71a5,	// (0x0002367a) tabs_3_passive_pane_cp_srt

0x71b6,	// (0x0002368b) tabs_3_passive_pane_srt_ParamLimits

0x71b6,	// (0x0002368b) tabs_3_passive_pane_srt

0x8e74,	// (0x00025349) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e74,	// (0x00025349) bg_passive_tab_pane_cp2_srt

0x8ca4,	// (0x00025179) bg_passive_tab_pane_g1_cp2_srt

0x8737,	// (0x00024c0c) bg_passive_tab_pane_g2_cp2_srt

0x8cad,	// (0x00025182) bg_passive_tab_pane_g3_cp2_srt

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp2_srt_ParamLimits

0x5f79,	// (0x0002244e) bg_active_tab_pane_cp2_srt

0xb1c7,	// (0x0002769c) tabs_3_active_pane_srt_g1

0xb1cf,	// (0x000276a4) tabs_3_active_pane_srt_t1_ParamLimits

0xb1cf,	// (0x000276a4) tabs_3_active_pane_srt_t1

0x8ca4,	// (0x00025179) bg_active_tab_pane_g1_cp2_srt

0x8737,	// (0x00024c0c) bg_active_tab_pane_g2_cp2_srt

0x8cad,	// (0x00025182) bg_active_tab_pane_g3_cp2_srt

0x714c,	// (0x00023621) tabs_4_active_pane_srt_ParamLimits

0x714c,	// (0x00023621) tabs_4_active_pane_srt

0x715e,	// (0x00023633) tabs_4_passive_pane_cp2_srt_ParamLimits

0x715e,	// (0x00023633) tabs_4_passive_pane_cp2_srt

0x8e02,	// (0x000252d7) aid_size_cell_toolbar

0x8087,	// (0x0002455c) main_idle_act_pane_ParamLimits

0x9039,	// (0x0002550e) popup_large_graphic_colour_window_ParamLimits

0x93e0,	// (0x000258b5) popup_toolbar_window_ParamLimits

0x93e0,	// (0x000258b5) popup_toolbar_window

0x5430,	// (0x00021905) list_single_graphic_2heading_pane_ParamLimits

0x5430,	// (0x00021905) list_single_graphic_2heading_pane

0x8243,	// (0x00024718) aid_size_cell_apps_grid_lsc_pane

0x8255,	// (0x0002472a) aid_size_cell_apps_grid_prt_pane

0x8e74,	// (0x00025349) bg_wml_button_pane_cp1_ParamLimits

0x8e74,	// (0x00025349) bg_wml_button_pane_cp1

0x9c8e,	// (0x00026163) form_midp_field_text_pane_t1_ParamLimits

0x9aa2,	// (0x00025f77) input_focus_pane_cp050_ParamLimits

0x9cb9,	// (0x0002618e) list_midp_form_text_pane_ParamLimits

0x9c6b,	// (0x00026140) input_focus_pane_cp051_ParamLimits

0x9c7f,	// (0x00026154) list_midp_choice_pane_ParamLimits

0x9b33,	// (0x00026008) list_single_2graphic_pane_cp3_ParamLimits

0x9b33,	// (0x00026008) list_single_2graphic_pane_cp3

0x9b4c,	// (0x00026021) list_single_midp_graphic_pane_ParamLimits

0x9b4c,	// (0x00026021) list_single_midp_graphic_pane

0x52ad,	// (0x00021782) list_single_graphic_2heading_pane_g1_ParamLimits

0x52ad,	// (0x00021782) list_single_graphic_2heading_pane_g1

0x52b9,	// (0x0002178e) list_single_graphic_2heading_pane_g4_ParamLimits

0x52b9,	// (0x0002178e) list_single_graphic_2heading_pane_g4

0x52c5,	// (0x0002179a) list_single_graphic_2heading_pane_g5_ParamLimits

0x52c5,	// (0x0002179a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002bc9d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002bc9d) list_single_graphic_2heading_pane_g

0x52d1,	// (0x000217a6) list_single_graphic_2heading_pane_t1_ParamLimits

0x52d1,	// (0x000217a6) list_single_graphic_2heading_pane_t1

0x52e5,	// (0x000217ba) list_single_graphic_2heading_pane_t2_ParamLimits

0x52e5,	// (0x000217ba) list_single_graphic_2heading_pane_t2

0x5301,	// (0x000217d6) list_single_graphic_2heading_pane_t3_ParamLimits

0x5301,	// (0x000217d6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002bca4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002bca4) list_single_graphic_2heading_pane_t

0x98ee,	// (0x00025dc3) bg_popup_sub_pane_cp2

0x9918,	// (0x00025ded) grid_toobar_pane

0x6e1d,	// (0x000232f2) cell_toolbar_pane_ParamLimits

0x6e1d,	// (0x000232f2) cell_toolbar_pane

0x9954,	// (0x00025e29) cell_toolbar_pane_g1_ParamLimits

0x9954,	// (0x00025e29) cell_toolbar_pane_g1

0x9968,	// (0x00025e3d) cell_toolbar_pane_g2_ParamLimits

0x9968,	// (0x00025e3d) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0002bcb2) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0002bcb2) cell_toolbar_pane_g

0x998a,	// (0x00025e5f) grid_highlight_pane_cp2_ParamLimits

0x998a,	// (0x00025e5f) grid_highlight_pane_cp2

0x99a4,	// (0x00025e79) toolbar_button_pane

0x99b0,	// (0x00025e85) toolbar_button_pane_g1

0x99b8,	// (0x00025e8d) toolbar_button_pane_g2

0x99c0,	// (0x00025e95) toolbar_button_pane_g3

0x99c8,	// (0x00025e9d) toolbar_button_pane_g4

0x99d0,	// (0x00025ea5) toolbar_button_pane_g5

0x99d8,	// (0x00025ead) toolbar_button_pane_g6

0x99e0,	// (0x00025eb5) toolbar_button_pane_g7

0x99e8,	// (0x00025ebd) toolbar_button_pane_g8

0x99f0,	// (0x00025ec5) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0002bcb7) toolbar_button_pane_g

0x6e55,	// (0x0002332a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6e55,	// (0x0002332a) list_single_2graphic_pane_g1_cp3

0x6e61,	// (0x00023336) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6e61,	// (0x00023336) list_single_2graphic_pane_g2_cp3

0x8918,	// (0x00024ded) list_single_2graphic_pane_g3_cp3

0x08b1,	// (0x0001cd86) list_single_2graphic_pane_g4_cp3_ParamLimits

0x08b1,	// (0x0001cd86) list_single_2graphic_pane_g4_cp3

0x6e72,	// (0x00023347) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6e72,	// (0x00023347) list_single_2graphic_pane_t1_cp3

0x890c,	// (0x00024de1) list_single_midp_graphic_pane_g2_ParamLimits

0x890c,	// (0x00024de1) list_single_midp_graphic_pane_g2

0x8e0a,	// (0x000252df) aid_zoom_text_primary

0x529d,	// (0x00021772) aid_zoom_text_secondary

0x8d61,	// (0x00025236) status_small_pane_g7_ParamLimits

0x8d61,	// (0x00025236) status_small_pane_g7

0x8d84,	// (0x00025259) status_small_pane_t1_ParamLimits

0x5ebc,	// (0x00022391) title_pane_g2

0x0003,

0xf56a,	// (0x0002ba3f) title_pane_g

0x6499,	// (0x0002296e) aid_size_cell_colour_1_pane_ParamLimits

0x6499,	// (0x0002296e) aid_size_cell_colour_1_pane

0x64ad,	// (0x00022982) aid_size_cell_colour_2_pane_ParamLimits

0x64ad,	// (0x00022982) aid_size_cell_colour_2_pane

0x64c1,	// (0x00022996) aid_size_cell_colour_3_pane_ParamLimits

0x64c1,	// (0x00022996) aid_size_cell_colour_3_pane

0x64d5,	// (0x000229aa) aid_size_cell_colour_4_pane_ParamLimits

0x64d5,	// (0x000229aa) aid_size_cell_colour_4_pane

0x6873,	// (0x00022d48) title_pane_stacon_g1_ParamLimits

0x6873,	// (0x00022d48) title_pane_stacon_g1

0xa07c,	// (0x00026551) popup_note_wait_window_g3_ParamLimits

0xa07c,	// (0x00026551) popup_note_wait_window_g3

0xa0f3,	// (0x000265c8) popup_note_wait_window_t5_ParamLimits

0xa0f3,	// (0x000265c8) popup_note_wait_window_t5

0x37c1,	// (0x0001fc96) main_feb_china_hwr_fs_writing_pane

0x8f00,	// (0x000253d5) popup_feb_china_hwr_fs_window_ParamLimits

0x8f00,	// (0x000253d5) popup_feb_china_hwr_fs_window

0x6ea3,	// (0x00023378) aid_size_cell_hwr_fs_ParamLimits

0x6ea3,	// (0x00023378) aid_size_cell_hwr_fs

0x9aa2,	// (0x00025f77) bg_popup_sub_pane_cp3_ParamLimits

0x9aa2,	// (0x00025f77) bg_popup_sub_pane_cp3

0x6eb8,	// (0x0002338d) grid_hwr_fs_pane_ParamLimits

0x6eb8,	// (0x0002338d) grid_hwr_fs_pane

0x6ed0,	// (0x000233a5) linegrid_hwr_fs_pane_ParamLimits

0x6ed0,	// (0x000233a5) linegrid_hwr_fs_pane

0x6ee0,	// (0x000233b5) cell_hwr_fs_pane_ParamLimits

0x6ee0,	// (0x000233b5) cell_hwr_fs_pane

0x9aae,	// (0x00025f83) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aae,	// (0x00025f83) linegrid_hwr_fs_pane_g1

0x9aba,	// (0x00025f8f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9aba,	// (0x00025f8f) linegrid_hwr_fs_pane_g2

0x9acc,	// (0x00025fa1) linegrid_hwr_fs_pane_g3_ParamLimits

0x9acc,	// (0x00025fa1) linegrid_hwr_fs_pane_g3

0x6f04,	// (0x000233d9) linegrid_hwr_fs_pane_g4_ParamLimits

0x6f04,	// (0x000233d9) linegrid_hwr_fs_pane_g4

0x6f22,	// (0x000233f7) linegrid_hwr_fs_pane_g5_ParamLimits

0x6f22,	// (0x000233f7) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0002bce2) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0002bce2) linegrid_hwr_fs_pane_g

0x9ad8,	// (0x00025fad) cell_hwr_fs_pane_g1_ParamLimits

0x9ad8,	// (0x00025fad) cell_hwr_fs_pane_g1

0x9825,	// (0x00025cfa) cell_hwr_fs_pane_g2_ParamLimits

0x9825,	// (0x00025cfa) cell_hwr_fs_pane_g2

0x9aee,	// (0x00025fc3) cell_hwr_fs_pane_g3_ParamLimits

0x9aee,	// (0x00025fc3) cell_hwr_fs_pane_g3

0x9afb,	// (0x00025fd0) cell_hwr_fs_pane_g4_ParamLimits

0x9afb,	// (0x00025fd0) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0002bced) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0002bced) cell_hwr_fs_pane_g

0x6f38,	// (0x0002340d) cell_hwr_fs_pane_t1

0x37c1,	// (0x0001fc96) grid_highlight_pane_cp6

0x37c1,	// (0x0001fc96) main_idle_act2_pane

0x7ff9,	// (0x000244ce) aid_inside_area_popup_secondary

0xa72c,	// (0x00026c01) aid_inside_area_window_primary_ParamLimits

0xa72c,	// (0x00026c01) aid_inside_area_window_primary

0xb32e,	// (0x00027803) ai2_news_ticker_pane

0xb336,	// (0x0002780b) aid_size_cell_ai1_link_ParamLimits

0xb336,	// (0x0002780b) aid_size_cell_ai1_link

0xb350,	// (0x00027825) popup_ai2_data_window_ParamLimits

0xb350,	// (0x00027825) popup_ai2_data_window

0xb36e,	// (0x00027843) popup_ai2_link_window_ParamLimits

0xb36e,	// (0x00027843) popup_ai2_link_window

0x9aa2,	// (0x00025f77) bg_popup_sub_pane_cp4_ParamLimits

0x9aa2,	// (0x00025f77) bg_popup_sub_pane_cp4

0xb384,	// (0x00027859) grid_ai2_link_pane_ParamLimits

0xb384,	// (0x00027859) grid_ai2_link_pane

0xb39b,	// (0x00027870) popup_ai2_link_window_g1_ParamLimits

0xb39b,	// (0x00027870) popup_ai2_link_window_g1

0xb3a7,	// (0x0002787c) popup_ai2_link_window_g2_ParamLimits

0xb3a7,	// (0x0002787c) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0002beb9) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0002beb9) popup_ai2_link_window_g

0xb3b8,	// (0x0002788d) ai2_mp_button_pane

0xb3c0,	// (0x00027895) ai2_mp_volume_pane

0x9c6b,	// (0x00026140) bg_popup_sub_pane_cp5_ParamLimits

0x9c6b,	// (0x00026140) bg_popup_sub_pane_cp5

0xb3c8,	// (0x0002789d) heading_ai2_gene_pane_ParamLimits

0xb3c8,	// (0x0002789d) heading_ai2_gene_pane

0xb3d4,	// (0x000278a9) list_ai2_gene_pane_ParamLimits

0xb3d4,	// (0x000278a9) list_ai2_gene_pane

0xb41c,	// (0x000278f1) cell_ai2_link_pane_ParamLimits

0xb41c,	// (0x000278f1) cell_ai2_link_pane

0xb432,	// (0x00027907) cell_ai2_link_pane_g1

0x37c1,	// (0x0001fc96) grid_highlight_pane_cp7

0x7204,	// (0x000236d9) ai2_mp_volume_pane_g1

0xb505,	// (0x000279da) ai2_mp_volume_pane_g2

0xb47a,	// (0x0002794f) list_ai2_gene_pane_t1

0xb50d,	// (0x000279e2) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0002bed2) ai2_mp_volume_pane_g

0x720c,	// (0x000236e1) volume_small_pane_cp3

0xb515,	// (0x000279ea) aid_size_cell_ai2_button

0xb51d,	// (0x000279f2) grid_ai2_button_pane

0xb526,	// (0x000279fb) cell_ai2_button_pane_ParamLimits

0xb526,	// (0x000279fb) cell_ai2_button_pane

0x363e,	// (0x0001fb13) cell_ai2_button_pane_g1

0x37c1,	// (0x0001fc96) grid_highlight_pane_cp8

0xb4c5,	// (0x0002799a) ai2_gene_pane_t1_ParamLimits

0xb4c5,	// (0x0002799a) ai2_gene_pane_t1

0x8df8,	// (0x000252cd) aid_height_parent_landscape

0xadd8,	// (0x000272ad) aid_height_set_list

0xade9,	// (0x000272be) aid_size_parent

0xb14f,	// (0x00027624) aid_size_cell_graphic_pane_ParamLimits

0xb3e4,	// (0x000278b9) popup_ai2_data_window_g1_ParamLimits

0xb3e4,	// (0x000278b9) popup_ai2_data_window_g1

0xb3f0,	// (0x000278c5) ai2_news_ticker_pane_g1

0xb3f8,	// (0x000278cd) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0002bebe) ai2_news_ticker_pane_g

0xb400,	// (0x000278d5) ai2_news_ticker_pane_t1

0xb40e,	// (0x000278e3) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0002bec3) ai2_news_ticker_pane_t

0xb43b,	// (0x00027910) heading_ai2_gene_pane_g1

0xb443,	// (0x00027918) heading_ai2_gene_pane_t1_ParamLimits

0xb443,	// (0x00027918) heading_ai2_gene_pane_t1

0xb458,	// (0x0002792d) list_highlight_pane_cp6

0xb460,	// (0x00027935) ai2_gene_pane_ParamLimits

0xb460,	// (0x00027935) ai2_gene_pane

0xb488,	// (0x0002795d) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0002bec8) list_ai2_gene_pane_t

0xb496,	// (0x0002796b) list_highlight_pane_cp8_ParamLimits

0xb496,	// (0x0002796b) list_highlight_pane_cp8

0xb4a7,	// (0x0002797c) ai2_gene_pane_g1_ParamLimits

0xb4a7,	// (0x0002797c) ai2_gene_pane_g1

0xb4b9,	// (0x0002798e) ai2_gene_pane_g2_ParamLimits

0xb4b9,	// (0x0002798e) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0002becd) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0002becd) ai2_gene_pane_g

0x6826,	// (0x00022cfb) scroll_pane_cp12

0x6ddc,	// (0x000232b1) control_pane_t3_ParamLimits

0x6ddc,	// (0x000232b1) control_pane_t3

0x8d75,	// (0x0002524a) status_small_pane_g8_ParamLimits

0x8d75,	// (0x0002524a) status_small_pane_g8

0x8ffe,	// (0x000254d3) popup_find_window_ParamLimits

0x9229,	// (0x000256fe) popup_note_image_window_ParamLimits

0x5319,	// (0x000217ee) list_double2_graphic_pane_vc_g1_ParamLimits

0x5319,	// (0x000217ee) list_double2_graphic_pane_vc_g1

0x5325,	// (0x000217fa) list_double2_graphic_pane_vc_g2_ParamLimits

0x5325,	// (0x000217fa) list_double2_graphic_pane_vc_g2

0x5331,	// (0x00021806) list_double2_graphic_pane_vc_g3_ParamLimits

0x5331,	// (0x00021806) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0002bcab) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0002bcab) list_double2_graphic_pane_vc_g

0x533d,	// (0x00021812) list_double2_graphic_pane_vc_t1_ParamLimits

0x533d,	// (0x00021812) list_double2_graphic_pane_vc_t1

0x52b9,	// (0x0002178e) list_single_heading_pane_vc_g1_ParamLimits

0x52b9,	// (0x0002178e) list_single_heading_pane_vc_g1

0x52c5,	// (0x0002179a) list_single_heading_pane_vc_g2_ParamLimits

0x52c5,	// (0x0002179a) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bccc) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bccc) list_single_heading_pane_vc_g

0x5353,	// (0x00021828) list_single_heading_pane_vc_t1_ParamLimits

0x5353,	// (0x00021828) list_single_heading_pane_vc_t1

0x5369,	// (0x0002183e) list_single_heading_pane_vc_t2_ParamLimits

0x5369,	// (0x0002183e) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0002bcd1) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002bcd1) list_single_heading_pane_vc_t

0x99f8,	// (0x00025ecd) list_setting_number_pane_vc_g1_ParamLimits

0x99f8,	// (0x00025ecd) list_setting_number_pane_vc_g1

0x9a04,	// (0x00025ed9) list_setting_number_pane_vc_g2_ParamLimits

0x9a04,	// (0x00025ed9) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0002bcd6) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0002bcd6) list_setting_number_pane_vc_g

0x9a10,	// (0x00025ee5) list_setting_number_pane_vc_t1_ParamLimits

0x9a10,	// (0x00025ee5) list_setting_number_pane_vc_t1

0x9a24,	// (0x00025ef9) list_setting_number_pane_vc_t2_ParamLimits

0x9a24,	// (0x00025ef9) list_setting_number_pane_vc_t2

0x9a40,	// (0x00025f15) list_setting_number_pane_vc_t3_ParamLimits

0x9a40,	// (0x00025f15) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0002bcdb) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0002bcdb) list_setting_number_pane_vc_t

0x9a68,	// (0x00025f3d) set_value_pane_vc_ParamLimits

0x9a68,	// (0x00025f3d) set_value_pane_vc

0x5430,	// (0x00021905) list_double2_graphic_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double2_graphic_pane_vc

0xafcd,	// (0x000274a2) list_double2_large_graphic_pane_vc_ParamLimits

0xafcd,	// (0x000274a2) list_double2_large_graphic_pane_vc

0x5430,	// (0x00021905) list_double2_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double2_pane_vc

0x5430,	// (0x00021905) list_double_graphic_heading_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double_graphic_heading_pane_vc

0x5430,	// (0x00021905) list_double_graphic_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double_graphic_pane_vc

0x5430,	// (0x00021905) list_double_heading_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double_heading_pane_vc

0xafcd,	// (0x000274a2) list_double_large_graphic_pane_vc_ParamLimits

0xafcd,	// (0x000274a2) list_double_large_graphic_pane_vc

0x5430,	// (0x00021905) list_double_number_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double_number_pane_vc

0x5430,	// (0x00021905) list_double_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double_pane_vc

0x5430,	// (0x00021905) list_double_time_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_double_time_pane_vc

0x5430,	// (0x00021905) list_setting_number_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_setting_number_pane_vc

0x5430,	// (0x00021905) list_setting_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_setting_pane_vc

0x5430,	// (0x00021905) list_single_graphic_heading_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_single_graphic_heading_pane_vc

0x5430,	// (0x00021905) list_single_heading_pane_vc_ParamLimits

0x5430,	// (0x00021905) list_single_heading_pane_vc

0xaff5,	// (0x000274ca) list_single_number_heading_pane_vc_ParamLimits

0xaff5,	// (0x000274ca) list_single_number_heading_pane_vc

0x5319,	// (0x000217ee) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5319,	// (0x000217ee) list_double_graphic_heading_pane_vc_g1

0x52b9,	// (0x0002178e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x52b9,	// (0x0002178e) list_double_graphic_heading_pane_vc_g2

0x52c5,	// (0x0002179a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x52c5,	// (0x0002179a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0002bed9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002bed9) list_double_graphic_heading_pane_vc_g

0x5475,	// (0x0002194a) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5475,	// (0x0002194a) list_double_graphic_heading_pane_vc_t1

0x5353,	// (0x00021828) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5353,	// (0x00021828) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002bee0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0002bee0) list_double_graphic_heading_pane_vc_t

0x99f8,	// (0x00025ecd) list_setting_pane_vc_g1_ParamLimits

0x99f8,	// (0x00025ecd) list_setting_pane_vc_g1

0x9a04,	// (0x00025ed9) list_setting_pane_vc_g2_ParamLimits

0x9a04,	// (0x00025ed9) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0002bcd6) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0002bcd6) list_setting_pane_vc_g

0xb7a4,	// (0x00027c79) list_setting_pane_vc_t1_ParamLimits

0xb7a4,	// (0x00027c79) list_setting_pane_vc_t1

0xb7b8,	// (0x00027c8d) list_setting_pane_vc_t2_ParamLimits

0xb7b8,	// (0x00027c8d) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0002bf0e) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0002bf0e) list_setting_pane_vc_t

0x9a68,	// (0x00025f3d) set_value_pane_cp_vc_ParamLimits

0x9a68,	// (0x00025f3d) set_value_pane_cp_vc

0x52b9,	// (0x0002178e) list_single_number_heading_pane_vc_g1_ParamLimits

0x52b9,	// (0x0002178e) list_single_number_heading_pane_vc_g1

0x52c5,	// (0x0002179a) list_single_number_heading_pane_vc_g2_ParamLimits

0x52c5,	// (0x0002179a) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bccc) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bccc) list_single_number_heading_pane_vc_g

0x5353,	// (0x00021828) list_single_number_heading_pane_vc_t1_ParamLimits

0x5353,	// (0x00021828) list_single_number_heading_pane_vc_t1

0x5489,	// (0x0002195e) list_single_number_heading_pane_vc_t2_ParamLimits

0x5489,	// (0x0002195e) list_single_number_heading_pane_vc_t2

0x549d,	// (0x00021972) list_single_number_heading_pane_vc_t3_ParamLimits

0x549d,	// (0x00021972) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0002bf13) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002bf13) list_single_number_heading_pane_vc_t

0x5319,	// (0x000217ee) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5319,	// (0x000217ee) list_single_graphic_heading_pane_vc_g1

0x52b9,	// (0x0002178e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x52b9,	// (0x0002178e) list_single_graphic_heading_pane_vc_g4

0x52c5,	// (0x0002179a) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x52c5,	// (0x0002179a) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x0002bed9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002bed9) list_single_graphic_heading_pane_vc_g

0x5353,	// (0x00021828) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5353,	// (0x00021828) list_single_graphic_heading_pane_vc_t1

0x54af,	// (0x00021984) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x54af,	// (0x00021984) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0002bf1a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0002bf1a) list_single_graphic_heading_pane_vc_t

0x52b9,	// (0x0002178e) list_double2_pane_vc_g1_ParamLimits

0x52b9,	// (0x0002178e) list_double2_pane_vc_g1

0x52c5,	// (0x0002179a) list_double2_pane_vc_g2_ParamLimits

0x52c5,	// (0x0002179a) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bccc) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bccc) list_double2_pane_vc_g

0x54c3,	// (0x00021998) list_double2_pane_vc_t1_ParamLimits

0x54c3,	// (0x00021998) list_double2_pane_vc_t1

0x54d9,	// (0x000219ae) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x54d9,	// (0x000219ae) list_double2_large_graphic_pane_vc_g1

0x54e5,	// (0x000219ba) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x54e5,	// (0x000219ba) list_double2_large_graphic_pane_vc_g2

0x54f1,	// (0x000219c6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x54f1,	// (0x000219c6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0002bf1f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0002bf1f) list_double2_large_graphic_pane_vc_g

0x54fd,	// (0x000219d2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x54fd,	// (0x000219d2) list_double2_large_graphic_pane_vc_t1

0x5513,	// (0x000219e8) list_double_time_pane_vc_g1_ParamLimits

0x5513,	// (0x000219e8) list_double_time_pane_vc_g1

0x551f,	// (0x000219f4) list_double_time_pane_vc_g2_ParamLimits

0x551f,	// (0x000219f4) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0002bf26) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0002bf26) list_double_time_pane_vc_g

0x552b,	// (0x00021a00) list_double_time_pane_vc_t1_ParamLimits

0x552b,	// (0x00021a00) list_double_time_pane_vc_t1

0x5544,	// (0x00021a19) list_double_time_pane_vc_t2_ParamLimits

0x5544,	// (0x00021a19) list_double_time_pane_vc_t2

0x5584,	// (0x00021a59) list_double_time_pane_vc_t3_ParamLimits

0x5584,	// (0x00021a59) list_double_time_pane_vc_t3

0x559c,	// (0x00021a71) list_double_time_pane_vc_t4_ParamLimits

0x559c,	// (0x00021a71) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0002bf2b) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0002bf2b) list_double_time_pane_vc_t

0x52b9,	// (0x0002178e) list_double_pane_vc_g1_ParamLimits

0x52b9,	// (0x0002178e) list_double_pane_vc_g1

0x52c5,	// (0x0002179a) list_double_pane_vc_g2_ParamLimits

0x52c5,	// (0x0002179a) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bccc) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bccc) list_double_pane_vc_g

0x55b0,	// (0x00021a85) list_double_pane_vc_t1_ParamLimits

0x55b0,	// (0x00021a85) list_double_pane_vc_t1

0x55c2,	// (0x00021a97) list_double_pane_vc_t2_ParamLimits

0x55c2,	// (0x00021a97) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0002bf34) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002bf34) list_double_pane_vc_t

0x52b9,	// (0x0002178e) list_double_number_pane_vc_g1_ParamLimits

0x52b9,	// (0x0002178e) list_double_number_pane_vc_g1

0x52c5,	// (0x0002179a) list_double_number_pane_vc_g2_ParamLimits

0x52c5,	// (0x0002179a) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bccc) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bccc) list_double_number_pane_vc_g

0x55da,	// (0x00021aaf) list_double_number_pane_vc_t1_ParamLimits

0x55da,	// (0x00021aaf) list_double_number_pane_vc_t1

0x55ee,	// (0x00021ac3) list_double_number_pane_vc_t2_ParamLimits

0x55ee,	// (0x00021ac3) list_double_number_pane_vc_t2

0x55c2,	// (0x00021a97) list_double_number_pane_vc_t3_ParamLimits

0x55c2,	// (0x00021a97) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0002bf39) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0002bf39) list_double_number_pane_vc_t

0x5600,	// (0x00021ad5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5600,	// (0x00021ad5) list_double_large_graphic_pane_vc_g1

0x560c,	// (0x00021ae1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x560c,	// (0x00021ae1) list_double_large_graphic_pane_vc_g2

0x54f1,	// (0x000219c6) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54f1,	// (0x000219c6) list_double_large_graphic_pane_vc_g3

0x561b,	// (0x00021af0) list_double_large_graphic_pane_vc_g4_ParamLimits

0x561b,	// (0x00021af0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0002bf40) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0002bf40) list_double_large_graphic_pane_vc_g

0x5627,	// (0x00021afc) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5627,	// (0x00021afc) list_double_large_graphic_pane_vc_t1

0x5639,	// (0x00021b0e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5639,	// (0x00021b0e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0002bf49) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0002bf49) list_double_large_graphic_pane_vc_t

0x52b9,	// (0x0002178e) list_double_heading_pane_vc_g1_ParamLimits

0x52b9,	// (0x0002178e) list_double_heading_pane_vc_g1

0x52c5,	// (0x0002179a) list_double_heading_pane_vc_g2_ParamLimits

0x52c5,	// (0x0002179a) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002bccc) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002bccc) list_double_heading_pane_vc_g

0x5652,	// (0x00021b27) list_double_heading_pane_vc_t1_ParamLimits

0x5652,	// (0x00021b27) list_double_heading_pane_vc_t1

0x5353,	// (0x00021828) list_double_heading_pane_vc_t2_ParamLimits

0x5353,	// (0x00021828) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0002bf4e) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0002bf4e) list_double_heading_pane_vc_t

0x5666,	// (0x00021b3b) list_double_graphic_pane_vc_g1_ParamLimits

0x5666,	// (0x00021b3b) list_double_graphic_pane_vc_g1

0x5676,	// (0x00021b4b) list_double_graphic_pane_vc_g2_ParamLimits

0x5676,	// (0x00021b4b) list_double_graphic_pane_vc_g2

0x5685,	// (0x00021b5a) list_double_graphic_pane_vc_g3_ParamLimits

0x5685,	// (0x00021b5a) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0002bf53) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0002bf53) list_double_graphic_pane_vc_g

0x5691,	// (0x00021b66) list_double_graphic_pane_vc_t1_ParamLimits

0x5691,	// (0x00021b66) list_double_graphic_pane_vc_t1

0x55c2,	// (0x00021a97) list_double_graphic_pane_vc_t2_ParamLimits

0x55c2,	// (0x00021a97) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0002bf5a) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0002bf5a) list_double_graphic_pane_vc_t

0x5ad0,	// (0x00021fa5) aid_size_cell_fastswap

0x5ad8,	// (0x00021fad) aid_size_cell_touch_ParamLimits

0x5ad8,	// (0x00021fad) aid_size_cell_touch

0x5d39,	// (0x0002220e) popup_fast_swap_wide_window_ParamLimits

0x5d39,	// (0x0002220e) popup_fast_swap_wide_window

0x5e4f,	// (0x00022324) touch_pane_ParamLimits

0x5e4f,	// (0x00022324) touch_pane

0x7e7c,	// (0x00024351) button_value_adjust_pane_cp2

0x7e7c,	// (0x00024351) button_value_adjust_pane_cp4

0x4fd9,	// (0x000214ae) form_field_data_pane_cp2

0x4ffe,	// (0x000214d3) form_field_data_wide_pane_cp2

0x8315,	// (0x000247ea) bg_scroll_pane_ParamLimits

0x69d8,	// (0x00022ead) scroll_handle_pane_ParamLimits

0x69ec,	// (0x00022ec1) scroll_sc2_down_pane_ParamLimits

0x69ec,	// (0x00022ec1) scroll_sc2_down_pane

0x8346,	// (0x0002481b) scroll_sc2_up_pane_ParamLimits

0x8346,	// (0x0002481b) scroll_sc2_up_pane

0xbc34,	// (0x00028109) grid_wheel_folder_pane_g1_ParamLimits

0xbc34,	// (0x00028109) grid_wheel_folder_pane_g1

0x6bb6,	// (0x0002308b) clock_nsta_pane_cp2_ParamLimits

0x6bb6,	// (0x0002308b) clock_nsta_pane_cp2

0x8af6,	// (0x00024fcb) listscroll_midp_pane_ParamLimits

0x8b02,	// (0x00024fd7) midp_canvas_pane

0x8df0,	// (0x000252c5) nsta_clock_indic_pane

0x8e46,	// (0x0002531b) listscroll_form_pane_vc

0x8e62,	// (0x00025337) listscroll_set_pane_vc_ParamLimits

0x8e62,	// (0x00025337) listscroll_set_pane_vc

0x957a,	// (0x00025a4f) clock_nsta_pane

0x95f7,	// (0x00025acc) indicator_nsta_pane

0x98ee,	// (0x00025dc3) bg_popup_sub_pane_cp2_ParamLimits

0x9902,	// (0x00025dd7) find_pane_cp2_ParamLimits

0x9902,	// (0x00025dd7) find_pane_cp2

0x9918,	// (0x00025ded) grid_toobar_pane_ParamLimits

0x9a76,	// (0x00025f4b) list_form_gen_pane_vc_ParamLimits

0x9a76,	// (0x00025f4b) list_form_gen_pane_vc

0x9a8c,	// (0x00025f61) scroll_pane_cp8_vc_ParamLimits

0x9a8c,	// (0x00025f61) scroll_pane_cp8_vc

0x9b08,	// (0x00025fdd) data_form_wide_pane_vc_ParamLimits

0x9b08,	// (0x00025fdd) data_form_wide_pane_vc

0x9b14,	// (0x00025fe9) form_field_data_wide_pane_vc_g1

0x9b1c,	// (0x00025ff1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b1c,	// (0x00025ff1) form_field_data_wide_pane_vc_t1

0x7e90,	// (0x00024365) input_focus_pane_cp6_vc_ParamLimits

0x7e90,	// (0x00024365) input_focus_pane_cp6_vc

0x9df6,	// (0x000262cb) list_midp_pane_ParamLimits

0x9e02,	// (0x000262d7) scroll_pane_cp16_ParamLimits

0x9e02,	// (0x000262d7) scroll_pane_cp16

0x9e50,	// (0x00026325) button_value_adjust_pane_ParamLimits

0x9e50,	// (0x00026325) button_value_adjust_pane

0xadfb,	// (0x000272d0) button_value_adjust_pane_cp6_ParamLimits

0xadfb,	// (0x000272d0) button_value_adjust_pane_cp6

0xaf55,	// (0x0002742a) settings_code_pane_cp_ParamLimits

0xaf55,	// (0x0002742a) settings_code_pane_cp

0x363e,	// (0x0001fb13) cell_touch_pane_g1

0x363e,	// (0x0001fb13) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0002bbf4) cell_touch_pane_g

0xb538,	// (0x00027a0d) cell_touch_pane_cp_ParamLimits

0xb538,	// (0x00027a0d) cell_touch_pane_cp

0xb548,	// (0x00027a1d) cell_touch_pane_ParamLimits

0xb548,	// (0x00027a1d) cell_touch_pane

0x363e,	// (0x0001fb13) scroll_sc2_down_pane_g1

0x363e,	// (0x0001fb13) scroll_sc2_up_pane_g1

0x37c1,	// (0x0001fc96) bg_set_opt_pane_cp4_vc

0xb559,	// (0x00027a2e) list_set_graphic_pane_vc_g1_ParamLimits

0xb559,	// (0x00027a2e) list_set_graphic_pane_vc_g1

0xb565,	// (0x00027a3a) list_set_graphic_pane_vc_g2_ParamLimits

0xb565,	// (0x00027a3a) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0002bee5) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0002bee5) list_set_graphic_pane_vc_g

0xb571,	// (0x00027a46) text_primary_small_cp13_vc_ParamLimits

0xb571,	// (0x00027a46) text_primary_small_cp13_vc

0xb589,	// (0x00027a5e) list_set_graphic_pane_vc_ParamLimits

0xb589,	// (0x00027a5e) list_set_graphic_pane_vc

0x37c1,	// (0x0001fc96) input_focus_pane_cp2_vc

0x363e,	// (0x0001fb13) setting_code_pane_vc_g1

0xb59d,	// (0x00027a72) setting_code_pane_vc_t1

0xb5ab,	// (0x00027a80) set_text_pane_vc_t1_ParamLimits

0xb5ab,	// (0x00027a80) set_text_pane_vc_t1

0x37c1,	// (0x0001fc96) input_focus_pane_cp1_vc

0xb5c9,	// (0x00027a9e) list_set_text_pane_vc

0x363e,	// (0x0001fb13) setting_text_pane_vc_g1

0x37c1,	// (0x0001fc96) bg_set_opt_pane_cp2_vc

0xb5d3,	// (0x00027aa8) setting_slider_graphic_pane_vc_g1

0xb5db,	// (0x00027ab0) setting_slider_graphic_pane_vc_t1

0xb5e9,	// (0x00027abe) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0002beea) setting_slider_graphic_pane_vc_t

0xb5f7,	// (0x00027acc) slider_set_pane_cp_vc

0xb5ff,	// (0x00027ad4) slider_set_pane_vc_g1

0xb608,	// (0x00027add) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0002beef) slider_set_pane_vc_g

0x7ef7,	// (0x000243cc) set_opt_bg_pane_g1_copy1

0x7eff,	// (0x000243d4) set_opt_bg_pane_g2_copy1

0xb634,	// (0x00027b09) set_opt_bg_pane_g3_copy1

0x7f0f,	// (0x000243e4) set_opt_bg_pane_g4_copy1

0x7f17,	// (0x000243ec) set_opt_bg_pane_g5_copy1

0x7f1f,	// (0x000243f4) set_opt_bg_pane_g6_copy1

0xb63e,	// (0x00027b13) set_opt_bg_pane_g7_copy1

0xb648,	// (0x00027b1d) set_opt_bg_pane_g8_copy1

0xb652,	// (0x00027b27) set_opt_bg_pane_g9_copy1

0x37c1,	// (0x0001fc96) bg_set_opt_pane_cp_vc

0xb65c,	// (0x00027b31) setting_slider_pane_vc_t1

0xb5db,	// (0x00027ab0) setting_slider_pane_vc_t2

0xb5e9,	// (0x00027abe) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0002befe) setting_slider_pane_vc_t

0xb5f7,	// (0x00027acc) slider_set_pane_vc

0x6f46,	// (0x0002341b) volume_set_pane_vc_g1

0x6f4f,	// (0x00023424) volume_set_pane_vc_g2

0x6f58,	// (0x0002342d) volume_set_pane_vc_g3

0x6f61,	// (0x00023436) volume_set_pane_vc_g4

0x6f6a,	// (0x0002343f) volume_set_pane_vc_g5

0x6f73,	// (0x00023448) volume_set_pane_vc_g6

0x6f7c,	// (0x00023451) volume_set_pane_vc_g7

0x6f85,	// (0x0002345a) volume_set_pane_vc_g8

0x6f8e,	// (0x00023463) volume_set_pane_vc_g9

0x6f97,	// (0x0002346c) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0002bd9c) volume_set_pane_vc_g

0xb66b,	// (0x00027b40) volume_set_pane_vc

0xb673,	// (0x00027b48) button_value_adjust_pane_cp1_vc

0xb67d,	// (0x00027b52) list_highlight_pane_cp2_vc

0xb686,	// (0x00027b5b) list_set_pane_vc_ParamLimits

0xb686,	// (0x00027b5b) list_set_pane_vc

0xb732,	// (0x00027c07) main_pane_set_vc_t1_ParamLimits

0xb732,	// (0x00027c07) main_pane_set_vc_t1

0xb747,	// (0x00027c1c) main_pane_set_vc_t2_ParamLimits

0xb747,	// (0x00027c1c) main_pane_set_vc_t2

0xb759,	// (0x00027c2e) main_pane_set_vc_t3_ParamLimits

0xb759,	// (0x00027c2e) main_pane_set_vc_t3

0xb76d,	// (0x00027c42) main_pane_set_vc_t4_ParamLimits

0xb76d,	// (0x00027c42) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0002bf05) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0002bf05) main_pane_set_vc_t

0xb781,	// (0x00027c56) setting_code_pane_vc_ParamLimits

0xb781,	// (0x00027c56) setting_code_pane_vc

0xb792,	// (0x00027c67) setting_slider_graphic_pane_vc

0xb792,	// (0x00027c67) setting_slider_pane_vc

0xb792,	// (0x00027c67) setting_text_pane_vc

0xb792,	// (0x00027c67) setting_volume_pane_vc

0xb79c,	// (0x00027c71) scroll_pane_cp121_vc

0x7e6a,	// (0x0002433f) set_content_pane_vc

0xb7da,	// (0x00027caf) button_value_adjust_pane_g1

0xb7e3,	// (0x00027cb8) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0002bf5f) button_value_adjust_pane_g

0xb7ec,	// (0x00027cc1) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb7ec,	// (0x00027cc1) form_field_slider_wide_pane_vc_t1

0xb800,	// (0x00027cd5) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb800,	// (0x00027cd5) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0002bf64) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0002bf64) form_field_slider_wide_pane_vc_t

0x6285,	// (0x0002275a) input_focus_pane_cp10_vc_ParamLimits

0x6285,	// (0x0002275a) input_focus_pane_cp10_vc

0xb812,	// (0x00027ce7) slider_cont_pane_cp1_vc_ParamLimits

0xb812,	// (0x00027ce7) slider_cont_pane_cp1_vc

0xb5ff,	// (0x00027ad4) slider_form_pane_g1_cp2

0xb608,	// (0x00027add) slider_form_pane_g2_cp2

0xb82b,	// (0x00027d00) form_field_slider_pane_vc_t3

0xb839,	// (0x00027d0e) form_field_slider_pane_vc_t4

0xb847,	// (0x00027d1c) slider_form_pane_vc_ParamLimits

0xb847,	// (0x00027d1c) slider_form_pane_vc

0xb854,	// (0x00027d29) form_field_slider_pane_vc_t1_ParamLimits

0xb854,	// (0x00027d29) form_field_slider_pane_vc_t1

0xb800,	// (0x00027cd5) form_field_slider_pane_vc_t2_ParamLimits

0xb800,	// (0x00027cd5) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002bf74) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002bf74) form_field_slider_pane_vc_t

0x6285,	// (0x0002275a) input_focus_pane_cp9_vc_ParamLimits

0x6285,	// (0x0002275a) input_focus_pane_cp9_vc

0xb870,	// (0x00027d45) slider_cont_pane_vc_ParamLimits

0xb870,	// (0x00027d45) slider_cont_pane_vc

0xb882,	// (0x00027d57) list_form_graphic_pane_cp_vc_ParamLimits

0xb882,	// (0x00027d57) list_form_graphic_pane_cp_vc

0x9b14,	// (0x00025fe9) form_field_popup_wide_pane_vc_g1

0xb897,	// (0x00027d6c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb897,	// (0x00027d6c) form_field_popup_wide_pane_vc_t1

0x7e90,	// (0x00024365) input_focus_pane_cp8_vc_ParamLimits

0x7e90,	// (0x00024365) input_focus_pane_cp8_vc

0xb8ae,	// (0x00027d83) list_form_wide_pane_vc_ParamLimits

0xb8ae,	// (0x00027d83) list_form_wide_pane_vc

0xb8ba,	// (0x00027d8f) list_form_graphic_pane_vc_g1

0xb8c2,	// (0x00027d97) list_form_graphic_pane_vc_t1_ParamLimits

0xb8c2,	// (0x00027d97) list_form_graphic_pane_vc_t1

0x5f79,	// (0x0002244e) list_highlight_pane_cp5_vc_ParamLimits

0x5f79,	// (0x0002244e) list_highlight_pane_cp5_vc

0xb8de,	// (0x00027db3) list_form_graphic_pane_vc_ParamLimits

0xb8de,	// (0x00027db3) list_form_graphic_pane_vc

0x9b14,	// (0x00025fe9) form_field_popup_pane_vc_g1

0xb8f4,	// (0x00027dc9) form_field_popup_pane_vc_t1_ParamLimits

0xb8f4,	// (0x00027dc9) form_field_popup_pane_vc_t1

0x7e90,	// (0x00024365) input_focus_pane_cp7_vc_ParamLimits

0x7e90,	// (0x00024365) input_focus_pane_cp7_vc

0xb90b,	// (0x00027de0) list_form_pane_vc_ParamLimits

0xb90b,	// (0x00027de0) list_form_pane_vc

0xb917,	// (0x00027dec) data_form_pane_vc_t1_ParamLimits

0xb917,	// (0x00027dec) data_form_pane_vc_t1

0x7ef7,	// (0x000243cc) input_focus_pane_vc_g1

0x7eff,	// (0x000243d4) input_focus_pane_vc_g2

0x7f07,	// (0x000243dc) input_focus_pane_vc_g3

0x7f0f,	// (0x000243e4) input_focus_pane_vc_g4

0x7f17,	// (0x000243ec) input_focus_pane_vc_g5

0x7f1f,	// (0x000243f4) input_focus_pane_vc_g6

0x7f27,	// (0x000243fc) input_focus_pane_vc_g7

0x7f2f,	// (0x00024404) input_focus_pane_vc_g8

0x7f37,	// (0x0002440c) input_focus_pane_vc_g9

0x363e,	// (0x0001fb13) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0002bb7d) input_focus_pane_vc_g

0x9b08,	// (0x00025fdd) data_form_pane_vc_ParamLimits

0x9b08,	// (0x00025fdd) data_form_pane_vc

0x9b14,	// (0x00025fe9) form_field_data_pane_vc_g1

0xb934,	// (0x00027e09) form_field_data_pane_vc_t1_ParamLimits

0xb934,	// (0x00027e09) form_field_data_pane_vc_t1

0x7e90,	// (0x00024365) input_focus_pane_vc_ParamLimits

0x7e90,	// (0x00024365) input_focus_pane_vc

0xb94e,	// (0x00027e23) button_value_adjust_pane_cp3_vc

0xb956,	// (0x00027e2b) button_value_adjust_pane_cp5_vc

0xb95e,	// (0x00027e33) form_field_data_pane_vc_ParamLimits

0xb95e,	// (0x00027e33) form_field_data_pane_vc

0xb979,	// (0x00027e4e) form_field_data_pane_vc_cp2

0xb981,	// (0x00027e56) form_field_data_wide_pane_vc_ParamLimits

0xb981,	// (0x00027e56) form_field_data_wide_pane_vc

0xb99b,	// (0x00027e70) form_field_data_wide_pane_vc_cp2

0xb9a3,	// (0x00027e78) form_field_popup_pane_vc_ParamLimits

0xb9a3,	// (0x00027e78) form_field_popup_pane_vc

0xb9be,	// (0x00027e93) form_field_popup_wide_pane_vc_ParamLimits

0xb9be,	// (0x00027e93) form_field_popup_wide_pane_vc

0xb9d8,	// (0x00027ead) form_field_slider_pane_vc_ParamLimits

0xb9d8,	// (0x00027ead) form_field_slider_pane_vc

0xb9eb,	// (0x00027ec0) form_field_slider_wide_pane_vc_ParamLimits

0xb9eb,	// (0x00027ec0) form_field_slider_wide_pane_vc

0xb9fe,	// (0x00027ed3) grid_touch_1_pane_ParamLimits

0xb9fe,	// (0x00027ed3) grid_touch_1_pane

0xba0a,	// (0x00027edf) grid_touch_2_pane_ParamLimits

0xba0a,	// (0x00027edf) grid_touch_2_pane

0x8dbb,	// (0x00025290) touch_pane_g1_ParamLimits

0x8dbb,	// (0x00025290) touch_pane_g1

0xba24,	// (0x00027ef9) cell_app_pane_cp_wide_ParamLimits

0xba24,	// (0x00027ef9) cell_app_pane_cp_wide

0xba35,	// (0x00027f0a) grid_popup_fast_wide_pane_ParamLimits

0xba35,	// (0x00027f0a) grid_popup_fast_wide_pane

0xba49,	// (0x00027f1e) scroll_pane_cp19_ParamLimits

0xba49,	// (0x00027f1e) scroll_pane_cp19

0x37c1,	// (0x0001fc96) bg_popup_window_pane_cp20

0xba5d,	// (0x00027f32) listscroll_popup_fast_wide_pane

0x5f79,	// (0x0002244e) grid_indicator_nsta_pane

0xba65,	// (0x00027f3a) clock_nsta_pane_g1

0xba6e,	// (0x00027f43) clock_nsta_pane_t1

0xba8a,	// (0x00027f5f) cell_indicator_nsta_pane_ParamLimits

0xba8a,	// (0x00027f5f) cell_indicator_nsta_pane

0xbac2,	// (0x00027f97) cell_indicator_nsta_pane_g1

0xbad0,	// (0x00027fa5) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0002bf7e) cell_indicator_nsta_pane_g

0xbae5,	// (0x00027fba) clock_nsta_pane_cp

0xbaed,	// (0x00027fc2) indicator_nsta_pane_cp

0xbaf5,	// (0x00027fca) nsta_clock_indic_pane_g1

0x60d5,	// (0x000225aa) grid_indicator_pane

0x8438,	// (0x0002490d) scroll_pane_cp29

0x6b02,	// (0x00022fd7) indicator_nsta_pane_cp2_ParamLimits

0x6b02,	// (0x00022fd7) indicator_nsta_pane_cp2

0x5f79,	// (0x0002244e) main_apps_wheel_pane

0x9cd3,	// (0x000261a8) form_midp_field_text_pane_ParamLimits

0x9e22,	// (0x000262f7) scroll_bar_cp050_ParamLimits

0xbb5e,	// (0x00028033) cell_indicator_pane_ParamLimits

0xbb5e,	// (0x00028033) cell_indicator_pane

0xbb76,	// (0x0002804b) cell_indicator_pane_g1

0xbb80,	// (0x00028055) grid_wheel_folder_pane_ParamLimits

0xbb80,	// (0x00028055) grid_wheel_folder_pane

0xbb94,	// (0x00028069) list_wheel_apps_pane_ParamLimits

0xbb94,	// (0x00028069) list_wheel_apps_pane

0xbba7,	// (0x0002807c) main_apps_wheel_pane_g1_ParamLimits

0xbba7,	// (0x0002807c) main_apps_wheel_pane_g1

0xbbc3,	// (0x00028098) main_apps_wheel_pane_g2_ParamLimits

0xbbc3,	// (0x00028098) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0002bf9a) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0002bf9a) main_apps_wheel_pane_g

0xbbdf,	// (0x000280b4) main_apps_wheel_pane_t1_ParamLimits

0xbbdf,	// (0x000280b4) main_apps_wheel_pane_t1

0xbc08,	// (0x000280dd) list_wheel_apps_pane_g1

0xbc10,	// (0x000280e5) list_wheel_apps_pane_g2

0xbc18,	// (0x000280ed) list_wheel_apps_pane_g3

0xbc20,	// (0x000280f5) list_wheel_apps_pane_g4

0xbc2a,	// (0x000280ff) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0002bf9f) list_wheel_apps_pane_g

0x896a,	// (0x00024e3f) navi_icon_text_pane

0x94a7,	// (0x0002597c) aid_fill_nsta

0xbc4b,	// (0x00028120) navi_icon_text_pane_g1

0xbc5a,	// (0x0002812f) navi_icon_text_pane_t1

0x8800,	// (0x00024cd5) list_set_graphic_pane_t1_ParamLimits

0x8800,	// (0x00024cd5) list_set_graphic_pane_t1

0xa573,	// (0x00026a48) popup_midp_note_alarm_window_t6_ParamLimits

0xa573,	// (0x00026a48) popup_midp_note_alarm_window_t6

0xa585,	// (0x00026a5a) popup_midp_note_alarm_window_t7_ParamLimits

0xa585,	// (0x00026a5a) popup_midp_note_alarm_window_t7

0xa597,	// (0x00026a6c) popup_midp_note_alarm_window_t8_ParamLimits

0xa597,	// (0x00026a6c) popup_midp_note_alarm_window_t8

0xa5a9,	// (0x00026a7e) popup_midp_note_alarm_window_t9_ParamLimits

0xa5a9,	// (0x00026a7e) popup_midp_note_alarm_window_t9

0xa5bb,	// (0x00026a90) popup_midp_note_alarm_window_t10_ParamLimits

0xa5bb,	// (0x00026a90) popup_midp_note_alarm_window_t10

0xa5cd,	// (0x00026aa2) popup_midp_note_alarm_window_t11_ParamLimits

0xa5cd,	// (0x00026aa2) popup_midp_note_alarm_window_t11

0xa5df,	// (0x00026ab4) scroll_pane_cp17_ParamLimits

0xa5df,	// (0x00026ab4) scroll_pane_cp17

0x6f46,	// (0x0002341b) volume_small_pane_cp_g1

0x7215,	// (0x000236ea) volume_small_pane_cp_g2

0x721e,	// (0x000236f3) volume_small_pane_cp_g3

0x7227,	// (0x000236fc) volume_small_pane_cp_g4

0x7230,	// (0x00023705) volume_small_pane_cp_g5

0x7239,	// (0x0002370e) volume_small_pane_cp_g6

0x7242,	// (0x00023717) volume_small_pane_cp_g7

0x724b,	// (0x00023720) volume_small_pane_cp_g8

0x7254,	// (0x00023729) volume_small_pane_cp_g9

0x725d,	// (0x00023732) volume_small_pane_cp_g10

0x8bcb,	// (0x000250a0) midp_ticker_pane_g1_ParamLimits

0x8bd7,	// (0x000250ac) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002bc45) midp_ticker_pane_g_ParamLimits

0x8be3,	// (0x000250b8) midp_ticker_pane_t1_ParamLimits

0x94bd,	// (0x00025992) aid_fill_nsta_2

0x9e0e,	// (0x000262e3) list_form2_midp_pane

0xaf9c,	// (0x00027471) midp_editing_number_pane_ParamLimits

0xafab,	// (0x00027480) midp_ticker_pane_ParamLimits

0xbc6f,	// (0x00028144) form2_midp_field_pane

0xbc93,	// (0x00028168) scroll_pane_cp51

0xbcb3,	// (0x00028188) form2_midp_button_pane_ParamLimits

0xbcb3,	// (0x00028188) form2_midp_button_pane

0xbcc5,	// (0x0002819a) form2_midp_content_pane_ParamLimits

0xbcc5,	// (0x0002819a) form2_midp_content_pane

0xbcdf,	// (0x000281b4) form2_midp_field_choice_group_pane

0xbce7,	// (0x000281bc) form2_midp_field_pane_g1

0xbcef,	// (0x000281c4) form2_midp_field_pane_g2

0xbcf7,	// (0x000281cc) form2_midp_field_pane_g3

0xbcff,	// (0x000281d4) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0002bfc4) form2_midp_field_pane_g

0xbd07,	// (0x000281dc) form2_midp_gauge_slider_pane

0xbd0f,	// (0x000281e4) form2_midp_gauge_wait_pane

0xbd17,	// (0x000281ec) form2_midp_image_pane_ParamLimits

0xbd17,	// (0x000281ec) form2_midp_image_pane

0xbd32,	// (0x00028207) form2_midp_label_pane_ParamLimits

0xbd32,	// (0x00028207) form2_midp_label_pane

0xbd51,	// (0x00028226) form2_midp_label_pane_cp_ParamLimits

0xbd51,	// (0x00028226) form2_midp_label_pane_cp

0xbd72,	// (0x00028247) form2_midp_string_pane_ParamLimits

0xbd72,	// (0x00028247) form2_midp_string_pane

0x56a3,	// (0x00021b78) form2_midp_text_pane_ParamLimits

0x56a3,	// (0x00021b78) form2_midp_text_pane

0xbd84,	// (0x00028259) form2_midp_time_pane

0xbd94,	// (0x00028269) input_focus_pane_cp51_ParamLimits

0xbd94,	// (0x00028269) input_focus_pane_cp51

0xbdac,	// (0x00028281) form2_midp_label_pane_t1_ParamLimits

0xbdac,	// (0x00028281) form2_midp_label_pane_t1

0x56c4,	// (0x00021b99) form2_mdip_text_pane_t1_ParamLimits

0x56c4,	// (0x00021b99) form2_mdip_text_pane_t1

0x56e8,	// (0x00021bbd) form2_midp_time_pane_t1

0xbdfa,	// (0x000282cf) form2_midp_gauge_slider_pane_t1

0xbe0c,	// (0x000282e1) form2_midp_gauge_slider_pane_t2

0xbe1e,	// (0x000282f3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0002bfcd) form2_midp_gauge_slider_pane_t

0xbe30,	// (0x00028305) form2_midp_slider_pane

0xbe3c,	// (0x00028311) form2_midp_gauge_wait_pane_t1

0xbe4a,	// (0x0002831f) form2_midp_wait_pane_ParamLimits

0xbe4a,	// (0x0002831f) form2_midp_wait_pane

0x9b33,	// (0x00026008) list_single_2graphic_pane_cp4_ParamLimits

0x9b33,	// (0x00026008) list_single_2graphic_pane_cp4

0xbe75,	// (0x0002834a) list_single_midp_graphic_pane_cp_ParamLimits

0xbe75,	// (0x0002834a) list_single_midp_graphic_pane_cp

0x37c1,	// (0x0001fc96) list_highlight_pane_cp20

0xbe99,	// (0x0002836e) list_single_2graphic_pane_g1_cp4

0xb43b,	// (0x00027910) list_single_2graphic_pane_g2_cp4

0xbea1,	// (0x00028376) list_single_2graphic_pane_t1_cp4

0x5f79,	// (0x0002244e) list_highlight_pane_cp21

0xbeb0,	// (0x00028385) list_single_midp_graphic_pane_g4_cp

0xbebf,	// (0x00028394) list_single_midp_graphic_pane_t1_cp

0xbed4,	// (0x000283a9) form2_mdip_string_pane_t1_ParamLimits

0xbed4,	// (0x000283a9) form2_mdip_string_pane_t1

0x37c1,	// (0x0001fc96) bg_wml_button_pane_cp2

0x363e,	// (0x0001fb13) form2_midp_image_pane_g1

0x4d5c,	// (0x00021231) list_double_large_graphic_pane_g5_ParamLimits

0x4d5c,	// (0x00021231) list_double_large_graphic_pane_g5

0x8af6,	// (0x00024fcb) midp_form_pane_ParamLimits

0x5f79,	// (0x0002244e) main_apps_wheel_pane_ParamLimits

0x9251,	// (0x00025726) popup_preview_window_ParamLimits

0x9251,	// (0x00025726) popup_preview_window

0x9438,	// (0x0002590d) popup_touch_info_window_ParamLimits

0x9438,	// (0x0002590d) popup_touch_info_window

0x945a,	// (0x0002592f) popup_touch_menu_window_ParamLimits

0x945a,	// (0x0002592f) popup_touch_menu_window

0x3634,	// (0x0001fb09) bg_popup_sub_pane_cp6

0xbf79,	// (0x0002844e) list_touch_menu_pane

0xbf81,	// (0x00028456) list_single_touch_menu_pane_ParamLimits

0xbf81,	// (0x00028456) list_single_touch_menu_pane

0xbf9c,	// (0x00028471) list_single_touch_menu_pane_t1

0x5f79,	// (0x0002244e) bg_popup_sub_pane_cp7_ParamLimits

0x5f79,	// (0x0002244e) bg_popup_sub_pane_cp7

0xbfaa,	// (0x0002847f) heading_sub_pane

0xbfb2,	// (0x00028487) list_touch_info_pane_ParamLimits

0xbfb2,	// (0x00028487) list_touch_info_pane

0xbfc1,	// (0x00028496) list_single_touch_info_pane_ParamLimits

0xbfc1,	// (0x00028496) list_single_touch_info_pane

0xbfd3,	// (0x000284a8) list_single_touch_info_pane_t1

0xbfe1,	// (0x000284b6) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0002bfdb) list_single_touch_info_pane_t

0x8aee,	// (0x00024fc3) bg_popup_heading_pane_cp

0xbfef,	// (0x000284c4) heading_sub_pane_t1

0x9aa2,	// (0x00025f77) bg_popup_preview_window_pane_cp_ParamLimits

0x9aa2,	// (0x00025f77) bg_popup_preview_window_pane_cp

0xbfaa,	// (0x0002847f) heading_preview_pane

0xbfb2,	// (0x00028487) list_preview_pane_ParamLimits

0xbfb2,	// (0x00028487) list_preview_pane

0xbffd,	// (0x000284d2) popup_preview_window_g1

0xbfc1,	// (0x00028496) list_single_preview_pane_ParamLimits

0xbfc1,	// (0x00028496) list_single_preview_pane

0xc005,	// (0x000284da) list_single_preview_pane_g1

0xc00d,	// (0x000284e2) list_single_preview_pane_t1

0xbfd3,	// (0x000284a8) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0002bfe0) list_single_preview_pane_t

0xc01b,	// (0x000284f0) bg_popup_heading_pane_cp2_ParamLimits

0xc01b,	// (0x000284f0) bg_popup_heading_pane_cp2

0xc031,	// (0x00028506) heading_preview_pane_g1

0xc039,	// (0x0002850e) heading_preview_pane_t1_ParamLimits

0xc039,	// (0x0002850e) heading_preview_pane_t1

0x60f8,	// (0x000225cd) soft_indicator_pane_t1_ParamLimits

0x6803,	// (0x00022cd8) scroll_pane_ParamLimits

0x8334,	// (0x00024809) scroll_sc2_left_pane

0x833d,	// (0x00024812) scroll_sc2_right_pane

0x835c,	// (0x00024831) scroll_bg_pane_g1_ParamLimits

0x8371,	// (0x00024846) scroll_bg_pane_g2_ParamLimits

0x8389,	// (0x0002485e) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0002bbd4) scroll_bg_pane_g_ParamLimits

0x835c,	// (0x00024831) scroll_handle_pane_g1_ParamLimits

0x83ab,	// (0x00024880) scroll_handle_pane_g2_ParamLimits

0x8389,	// (0x0002485e) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0002bbdb) scroll_handle_pane_g_ParamLimits

0x8e9c,	// (0x00025371) popup_choice_list_window_ParamLimits

0x8e9c,	// (0x00025371) popup_choice_list_window

0x98fa,	// (0x00025dcf) choice_list_pane

0x997c,	// (0x00025e51) cell_toolbar_pane_t1

0x99a4,	// (0x00025e79) toolbar_button_pane_ParamLimits

0xaaaf,	// (0x00026f84) ai_gene_pane_1_t2_ParamLimits

0xaaaf,	// (0x00026f84) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002bdf8) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002bdf8) ai_gene_pane_1_t

0xc056,	// (0x0002852b) scroll_sc2_left_pane_g1

0xc056,	// (0x0002852b) scroll_sc2_right_pane_g1

0x8e74,	// (0x00025349) bg_popup_sub_pane_cp10

0xc060,	// (0x00028535) list_choice_list_pane

0xc077,	// (0x0002854c) list_single_choice_list_pane_ParamLimits

0xc077,	// (0x0002854c) list_single_choice_list_pane

0xc08b,	// (0x00028560) list_single_choice_list_pane_g1

0xc093,	// (0x00028568) list_single_choice_list_pane_t1_ParamLimits

0xc093,	// (0x00028568) list_single_choice_list_pane_t1

0xc0a8,	// (0x0002857d) choice_list_pane_g1

0xc0b0,	// (0x00028585) choice_list_pane_t1

0x3634,	// (0x0001fb09) input_focus_pane_cp11

0x820e,	// (0x000246e3) title_pane_stacon_g2_ParamLimits

0x820e,	// (0x000246e3) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0002bbba) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002bbba) title_pane_stacon_g

0x8aee,	// (0x00024fc3) cursor_press_pane

0x8f52,	// (0x00025427) popup_fep_hwr_window_ParamLimits

0x8f52,	// (0x00025427) popup_fep_hwr_window

0x8fdc,	// (0x000254b1) popup_fep_vkb_window_ParamLimits

0x8fdc,	// (0x000254b1) popup_fep_vkb_window

0xc0be,	// (0x00028593) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002c009) fep_vkb_side_pane_g_ParamLimits

0x7291,	// (0x00023766) fep_hwr_candidate_pane_ParamLimits

0x7291,	// (0x00023766) fep_hwr_candidate_pane

0x72bb,	// (0x00023790) fep_hwr_side_pane_ParamLimits

0x72bb,	// (0x00023790) fep_hwr_side_pane

0x72dd,	// (0x000237b2) fep_hwr_top_pane_ParamLimits

0x72dd,	// (0x000237b2) fep_hwr_top_pane

0x72f5,	// (0x000237ca) fep_hwr_write_pane_ParamLimits

0x72f5,	// (0x000237ca) fep_hwr_write_pane

0xfb34,	// (0x0002c009) fep_vkb_side_pane_g

0xc0c6,	// (0x0002859b) fep_hwr_top_pane_g1

0xc0d8,	// (0x000285ad) fep_hwr_top_pane_g2

0x7321,	// (0x000237f6) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0002bfe5) fep_hwr_top_pane_g

0x7336,	// (0x0002380b) fep_hwr_top_text_pane

0x8500,	// (0x000249d5) fep_hwr_top_text_pane_g1

0xc10e,	// (0x000285e3) fep_hwr_top_text_pane_t1

0x7440,	// (0x00023915) fep_hwr_candidate_pane_g1

0xc359,	// (0x0002882e) fep_vkb_keypad_pane_g3_ParamLimits

0xc359,	// (0x0002882e) fep_vkb_keypad_pane_g3

0xc385,	// (0x0002885a) fep_vkb_keypad_pane_g4_ParamLimits

0xc385,	// (0x0002885a) fep_vkb_keypad_pane_g4

0xc3fc,	// (0x000288d1) fep_vkb_bottom_pane_g2_ParamLimits

0xc3fc,	// (0x000288d1) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0002c010) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0002c010) fep_vkb_bottom_pane_g

0xc056,	// (0x0002852b) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002c01a) cell_vkb_side_pane_g

0xc487,	// (0x0002895c) cell_vkb_side_pane_t1

0xc495,	// (0x0002896a) cell_vkb_side_pane_t1_copy1

0xc056,	// (0x0002852b) bg_fep_vkb_candidate_pane_g2

0xc5d9,	// (0x00028aae) cell_vkb_candidate_pane_ParamLimits

0xc11c,	// (0x000285f1) aid_size_cell_vkb_ParamLimits

0xc11c,	// (0x000285f1) aid_size_cell_vkb

0xc5d9,	// (0x00028aae) cell_vkb_candidate_pane

0x745a,	// (0x0002392f) bg_popup_fep_shadow_pane_g1

0xc1ae,	// (0x00028683) fep_vkb_bottom_pane_ParamLimits

0xc1ae,	// (0x00028683) fep_vkb_bottom_pane

0xc1eb,	// (0x000286c0) fep_vkb_candidate_pane_ParamLimits

0xc1eb,	// (0x000286c0) fep_vkb_candidate_pane

0xc207,	// (0x000286dc) fep_vkb_keypad_pane_ParamLimits

0xc207,	// (0x000286dc) fep_vkb_keypad_pane

0xc23a,	// (0x0002870f) fep_vkb_side_pane_ParamLimits

0xc23a,	// (0x0002870f) fep_vkb_side_pane

0xc276,	// (0x0002874b) fep_vkb_top_pane_ParamLimits

0xc276,	// (0x0002874b) fep_vkb_top_pane

0xc2b2,	// (0x00028787) fep_vkb_top_pane_g1_ParamLimits

0xc2b2,	// (0x00028787) fep_vkb_top_pane_g1

0xc2c1,	// (0x00028796) fep_vkb_top_pane_g2_ParamLimits

0xc2c1,	// (0x00028796) fep_vkb_top_pane_g2

0xc2d0,	// (0x000287a5) fep_vkb_top_pane_g3_ParamLimits

0xc2d0,	// (0x000287a5) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0002c000) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0002c000) fep_vkb_top_pane_g

0xc2ee,	// (0x000287c3) fep_vkb_top_text_pane_ParamLimits

0xc2ee,	// (0x000287c3) fep_vkb_top_text_pane

0xc2ff,	// (0x000287d4) fep_vkb_side_pane_g1_ParamLimits

0xc2ff,	// (0x000287d4) fep_vkb_side_pane_g1

0xc348,	// (0x0002881d) grid_vkb_side_pane_ParamLimits

0xc348,	// (0x0002881d) grid_vkb_side_pane

0x7462,	// (0x00023937) bg_popup_fep_shadow_pane_g2

0x746b,	// (0x00023940) bg_popup_fep_shadow_pane_g3

0x7473,	// (0x00023948) bg_popup_fep_shadow_pane_g4

0x747c,	// (0x00023951) bg_popup_fep_shadow_pane_g5

0x7486,	// (0x0002395b) bg_popup_fep_shadow_pane_g6

0x748e,	// (0x00023963) bg_popup_fep_shadow_pane_g7

0x7f17,	// (0x000243ec) bg_popup_fep_shadow_pane_g8

0xc3a7,	// (0x0002887c) grid_vkb_keypad_number_pane_ParamLimits

0xc3a7,	// (0x0002887c) grid_vkb_keypad_number_pane

0xc3bb,	// (0x00028890) grid_vkb_keypad_pane_ParamLimits

0xc3bb,	// (0x00028890) grid_vkb_keypad_pane

0xc3e1,	// (0x000288b6) fep_vkb_bottom_pane_g1_ParamLimits

0xc3e1,	// (0x000288b6) fep_vkb_bottom_pane_g1

0xc40a,	// (0x000288df) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc40a,	// (0x000288df) grid_vkb_keypad_bottom_left_pane

0xc41f,	// (0x000288f4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc41f,	// (0x000288f4) grid_vkb_keypad_bottom_right_pane

0xc434,	// (0x00028909) fep_vkb_top_text_pane_g1

0xc44f,	// (0x00028924) fep_vkb_top_text_pane_t1

0xc464,	// (0x00028939) cell_vkb_side_pane_ParamLimits

0xc464,	// (0x00028939) cell_vkb_side_pane

0xc056,	// (0x0002852b) cell_vkb_side_pane_g1

0xc4a3,	// (0x00028978) cell_vkb_keypad_pane_ParamLimits

0xc4a3,	// (0x00028978) cell_vkb_keypad_pane

0xc530,	// (0x00028a05) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0002c02d) bg_popup_fep_shadow_pane_g

0xc056,	// (0x0002852b) cell_hwr_side_pane_g1

0xc056,	// (0x0002852b) cell_hwr_side_pane_g2

0xc53a,	// (0x00028a0f) cell_vkb_keypad_pane_t1

0xc548,	// (0x00028a1d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc548,	// (0x00028a1d) cell_vkb_keypad_bottom_left_pane

0xc565,	// (0x00028a3a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc565,	// (0x00028a3a) cell_vkb_keypad_bottom_right_pane

0xc056,	// (0x0002852b) cell_vkb_keypad_bottom_left_pane_g1

0xc056,	// (0x0002852b) cell_vkb_keypad_bottom_right_pane_g1

0xc59e,	// (0x00028a73) cell_vkb_keypad_number_pane_ParamLimits

0xc59e,	// (0x00028a73) cell_vkb_keypad_number_pane

0xc5bd,	// (0x00028a92) cell_vkb_keypad_number_pane_g1

0xc5c7,	// (0x00028a9c) cell_vkb_keypad_number_pane_g2

0xc5d0,	// (0x00028aa5) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0002c01f) cell_vkb_keypad_number_pane_g

0xc53a,	// (0x00028a0f) cell_vkb_keypad_number_pane_t1

0xc5fa,	// (0x00028acf) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0002c01a) cell_hwr_side_pane_g

0xc613,	// (0x00028ae8) cell_hwr_side_pane_t1

0x74a0,	// (0x00023975) cell_hwr_side_pane_t1_copy1

0xc2e0,	// (0x000287b5) cell_hwr_candidate_pane_g1

0x74ae,	// (0x00023983) cell_hwr_candidate_pane_t1

0xc056,	// (0x0002852b) cell_vkb_candidate_pane_g2

0xc699,	// (0x00028b6e) cell_vkb_candidate_pane_t1

0x0a7a,	// (0x0001cf4f) bg_popup_fep_shadow_pane_ParamLimits

0x0a7a,	// (0x0001cf4f) bg_popup_fep_shadow_pane

0x12aa,	// (0x0001d77f) bg_fep_hwr_top_pane_g4

0xc0ea,	// (0x000285bf) bg_hwr_side_pane_g1_ParamLimits

0xc0ea,	// (0x000285bf) bg_hwr_side_pane_g1

0x7374,	// (0x00023849) cell_hwr_side_pane_ParamLimits

0x7374,	// (0x00023849) cell_hwr_side_pane

0x73b1,	// (0x00023886) fep_hwr_write_pane_g1_ParamLimits

0x73b1,	// (0x00023886) fep_hwr_write_pane_g1

0x73be,	// (0x00023893) fep_hwr_write_pane_g2_ParamLimits

0x73be,	// (0x00023893) fep_hwr_write_pane_g2

0x73cb,	// (0x000238a0) fep_hwr_write_pane_g3_ParamLimits

0x73cb,	// (0x000238a0) fep_hwr_write_pane_g3

0x73d9,	// (0x000238ae) fep_hwr_write_pane_g4_ParamLimits

0x73d9,	// (0x000238ae) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002bfec) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002bfec) fep_hwr_write_pane_g

0x12aa,	// (0x0001d77f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x12aa,	// (0x0001d77f) bg_fep_hwr_candidate_pane_g2

0x73ee,	// (0x000238c3) cell_hwr_candidate_pane_ParamLimits

0x73ee,	// (0x000238c3) cell_hwr_candidate_pane

0x7440,	// (0x00023915) fep_hwr_candidate_pane_g1_ParamLimits

0xc14a,	// (0x0002861f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc14a,	// (0x0002861f) bg_popup_fep_shadow_pane_cp2

0xc2e0,	// (0x000287b5) fep_vkb_top_pane_g4_ParamLimits

0xc2e0,	// (0x000287b5) fep_vkb_top_pane_g4

0xc326,	// (0x000287fb) fep_vkb_side_pane_g2_ParamLimits

0xc326,	// (0x000287fb) fep_vkb_side_pane_g2

0x4ee6,	// (0x000213bb) list_setting_pane_t4_ParamLimits

0x4ee6,	// (0x000213bb) list_setting_pane_t4

0x4f82,	// (0x00021457) list_setting_number_pane_t5_ParamLimits

0x4f82,	// (0x00021457) list_setting_number_pane_t5

0x8542,	// (0x00024a17) list_double_heading_pane_cp2_ParamLimits

0x8542,	// (0x00024a17) list_double_heading_pane_cp2

0x7eaa,	// (0x0002437f) list_double_heading_pane_g1_cp2_ParamLimits

0x7eaa,	// (0x0002437f) list_double_heading_pane_g1_cp2

0x7eb6,	// (0x0002438b) list_double_heading_pane_g2_cp2_ParamLimits

0x7eb6,	// (0x0002438b) list_double_heading_pane_g2_cp2

0xc6a7,	// (0x00028b7c) list_double_heading_pane_t1_cp2_ParamLimits

0xc6a7,	// (0x00028b7c) list_double_heading_pane_t1_cp2

0xc6bd,	// (0x00028b92) list_double_heading_pane_t2_cp2_ParamLimits

0xc6bd,	// (0x00028b92) list_double_heading_pane_t2_cp2

0x362c,	// (0x0001fb01) aid_value_unit2

0x5d97,	// (0x0002226c) popup_preview_fixed_window

0x6293,	// (0x00022768) bg_popup_preview_window_pane_cp02

0xc6cf,	// (0x00028ba4) list_preview_fixed_pane

0xc715,	// (0x00028bea) list_empty_pane_fp_ParamLimits

0xc715,	// (0x00028bea) list_empty_pane_fp

0xc715,	// (0x00028bea) list_single_cale_day_pane_fp_ParamLimits

0xc715,	// (0x00028bea) list_single_cale_day_pane_fp

0xc715,	// (0x00028bea) list_single_graphic_heading_pane_fp_ParamLimits

0xc715,	// (0x00028bea) list_single_graphic_heading_pane_fp

0xc715,	// (0x00028bea) list_single_graphic_pane_fp_ParamLimits

0xc715,	// (0x00028bea) list_single_graphic_pane_fp

0xc715,	// (0x00028bea) list_single_heading_pane_fp_ParamLimits

0xc715,	// (0x00028bea) list_single_heading_pane_fp

0xc715,	// (0x00028bea) list_single_pane_fp_ParamLimits

0xc715,	// (0x00028bea) list_single_pane_fp

0xc72e,	// (0x00028c03) list_single_pane_fp_g1_ParamLimits

0xc72e,	// (0x00028c03) list_single_pane_fp_g1

0x56fb,	// (0x00021bd0) list_single_pane_fp_g2_ParamLimits

0x56fb,	// (0x00021bd0) list_single_pane_fp_g2

0x5707,	// (0x00021bdc) list_single_pane_fp_g3_ParamLimits

0x5707,	// (0x00021bdc) list_single_pane_fp_g3

0xc73a,	// (0x00028c0f) list_single_pane_fp_g4_ParamLimits

0xc73a,	// (0x00028c0f) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0002c04e) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0002c04e) list_single_pane_fp_g

0x571b,	// (0x00021bf0) list_single_pane_fp_t1_ParamLimits

0x571b,	// (0x00021bf0) list_single_pane_fp_t1

0x5732,	// (0x00021c07) list_single_graphic_pane_fp_g1_ParamLimits

0x5732,	// (0x00021c07) list_single_graphic_pane_fp_g1

0xc72e,	// (0x00028c03) list_single_graphic_pane_fp_g2_ParamLimits

0xc72e,	// (0x00028c03) list_single_graphic_pane_fp_g2

0x56fb,	// (0x00021bd0) list_single_graphic_pane_fp_g3_ParamLimits

0x56fb,	// (0x00021bd0) list_single_graphic_pane_fp_g3

0x5707,	// (0x00021bdc) list_single_graphic_pane_fp_g4_ParamLimits

0x5707,	// (0x00021bdc) list_single_graphic_pane_fp_g4

0xc73a,	// (0x00028c0f) list_single_graphic_pane_fp_g5_ParamLimits

0xc73a,	// (0x00028c0f) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0002c057) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0002c057) list_single_graphic_pane_fp_g

0x573e,	// (0x00021c13) list_single_graphic_pane_fp_t1_ParamLimits

0x573e,	// (0x00021c13) list_single_graphic_pane_fp_t1

0x5732,	// (0x00021c07) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5732,	// (0x00021c07) list_single_graphic_heading_pane_fp_g1

0xc72e,	// (0x00028c03) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc72e,	// (0x00028c03) list_single_graphic_heading_pane_fp_g2

0x56fb,	// (0x00021bd0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x56fb,	// (0x00021bd0) list_single_graphic_heading_pane_fp_g3

0x5707,	// (0x00021bdc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5707,	// (0x00021bdc) list_single_graphic_heading_pane_fp_g4

0xc73a,	// (0x00028c0f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc73a,	// (0x00028c0f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002c057) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002c057) list_single_graphic_heading_pane_fp_g

0x5754,	// (0x00021c29) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5754,	// (0x00021c29) list_single_graphic_heading_pane_fp_t1

0x576a,	// (0x00021c3f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x576a,	// (0x00021c3f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0002c062) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002c062) list_single_graphic_heading_pane_fp_t

0x577c,	// (0x00021c51) list_single_cale_day_pane_fp_g1_ParamLimits

0x577c,	// (0x00021c51) list_single_cale_day_pane_fp_g1

0xc746,	// (0x00028c1b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc746,	// (0x00028c1b) list_single_cale_day_pane_fp_g2

0x57b4,	// (0x00021c89) list_single_cale_day_pane_fp_g3_ParamLimits

0x57b4,	// (0x00021c89) list_single_cale_day_pane_fp_g3

0x57dc,	// (0x00021cb1) list_single_cale_day_pane_fp_g4_ParamLimits

0x57dc,	// (0x00021cb1) list_single_cale_day_pane_fp_g4

0x5800,	// (0x00021cd5) list_single_cale_day_pane_fp_g5_ParamLimits

0x5800,	// (0x00021cd5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0002c067) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0002c067) list_single_cale_day_pane_fp_g

0x5824,	// (0x00021cf9) list_single_cale_day_pane_fp_t1_ParamLimits

0x5824,	// (0x00021cf9) list_single_cale_day_pane_fp_t1

0x584a,	// (0x00021d1f) list_single_cale_day_pane_fp_t2_ParamLimits

0x584a,	// (0x00021d1f) list_single_cale_day_pane_fp_t2

0x5863,	// (0x00021d38) list_single_cale_day_pane_fp_t3_ParamLimits

0x5863,	// (0x00021d38) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0002c072) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0002c072) list_single_cale_day_pane_fp_t

0xc72e,	// (0x00028c03) list_empty_pane_fp_g1_ParamLimits

0xc72e,	// (0x00028c03) list_empty_pane_fp_g1

0x587c,	// (0x00021d51) list_empty_pane_fp_t1

0x588a,	// (0x00021d5f) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0002c079) list_empty_pane_fp_t

0xc72e,	// (0x00028c03) list_single_heading_pane_fp_g1_ParamLimits

0xc72e,	// (0x00028c03) list_single_heading_pane_fp_g1

0x56fb,	// (0x00021bd0) list_single_heading_pane_fp_g2_ParamLimits

0x56fb,	// (0x00021bd0) list_single_heading_pane_fp_g2

0x5707,	// (0x00021bdc) list_single_heading_pane_fp_g3_ParamLimits

0x5707,	// (0x00021bdc) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0002c07e) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002c07e) list_single_heading_pane_fp_g

0x5898,	// (0x00021d6d) list_single_heading_pane_fp_t1_ParamLimits

0x5898,	// (0x00021d6d) list_single_heading_pane_fp_t1

0x58aa,	// (0x00021d7f) list_single_heading_pane_fp_t2_ParamLimits

0x58aa,	// (0x00021d7f) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0002c085) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0002c085) list_single_heading_pane_fp_t

0x80a5,	// (0x0002457a) aid_size_cell_fast

0x6205,	// (0x000226da) soft_indicator_pane_cp1_t1

0x80e2,	// (0x000245b7) cell_app_pane_cp2_ParamLimits

0x80e2,	// (0x000245b7) cell_app_pane_cp2

0x727a,	// (0x0002374f) fep_hwr_candidate_drop_down_list_pane

0x12b8,	// (0x0001d78d) fep_hwr_candidate_pane_g3_ParamLimits

0x12b8,	// (0x0001d78d) fep_hwr_candidate_pane_g3

0x12c5,	// (0x0001d79a) fep_hwr_candidate_pane_g4_ParamLimits

0x12c5,	// (0x0001d79a) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002bff9) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002bff9) fep_hwr_candidate_pane_g

0xc1da,	// (0x000286af) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1da,	// (0x000286af) fep_vkb_candidate_drop_down_list_pane

0xc602,	// (0x00028ad7) fep_vkb_candidate_pane_g3

0xc60a,	// (0x00028adf) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0002c026) fep_vkb_candidate_pane_g

0xc2e0,	// (0x000287b5) cell_hwr_candidate_pane_g1_ParamLimits

0xc621,	// (0x00028af6) cell_hwr_candidate_pane_g3_ParamLimits

0xc621,	// (0x00028af6) cell_hwr_candidate_pane_g3

0xc642,	// (0x00028b17) cell_hwr_candidate_pane_g4_ParamLimits

0xc642,	// (0x00028b17) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0002c040) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0002c040) cell_hwr_candidate_pane_g

0xc663,	// (0x00028b38) cell_vkb_candidate_pane_g3_ParamLimits

0xc663,	// (0x00028b38) cell_vkb_candidate_pane_g3

0xc67e,	// (0x00028b53) cell_vkb_candidate_pane_g4_ParamLimits

0xc67e,	// (0x00028b53) cell_vkb_candidate_pane_g4

0xc752,	// (0x00028c27) cell_app_pane_cp2_g1_ParamLimits

0xc752,	// (0x00028c27) cell_app_pane_cp2_g1

0xc770,	// (0x00028c45) cell_app_pane_cp2_g2_ParamLimits

0xc770,	// (0x00028c45) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0002c08a) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0002c08a) cell_app_pane_cp2_g

0xc77c,	// (0x00028c51) cell_app_pane_cp2_t1_ParamLimits

0xc77c,	// (0x00028c51) cell_app_pane_cp2_t1

0x7e90,	// (0x00024365) grid_highlight_pane_cp1_ParamLimits

0x7e90,	// (0x00024365) grid_highlight_pane_cp1

0x74cc,	// (0x000239a1) cell_hwr_candidate_pane_cp1_ParamLimits

0x74cc,	// (0x000239a1) cell_hwr_candidate_pane_cp1

0xc2e0,	// (0x000287b5) fep_hwr_candidate_drop_down_list_pane_g1

0xc78e,	// (0x00028c63) fep_hwr_candidate_drop_down_list_pane_g2

0xc79b,	// (0x00028c70) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002c08f) fep_hwr_candidate_drop_down_list_pane_g

0x74f0,	// (0x000239c5) fep_hwr_candidate_drop_down_list_scroll_pane

0x74f9,	// (0x000239ce) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x74f9,	// (0x000239ce) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7506,	// (0x000239db) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7506,	// (0x000239db) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7513,	// (0x000239e8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7513,	// (0x000239e8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc663,	// (0x00028b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc663,	// (0x00028b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc67e,	// (0x00028b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc67e,	// (0x00028b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7520,	// (0x000239f5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7520,	// (0x000239f5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x753b,	// (0x00023a10) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x753b,	// (0x00023a10) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7556,	// (0x00023a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7556,	// (0x00023a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0002c096) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0002c096) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7a8,	// (0x00028c7d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7a8,	// (0x00028c7d) cell_vkb_candidate_pane_cp1

0xc2e0,	// (0x000287b5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) fep_vkb_candidate_drop_down_list_pane_g1

0xc78e,	// (0x00028c63) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc78e,	// (0x00028c63) fep_vkb_candidate_drop_down_list_pane_g2

0xc79b,	// (0x00028c70) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc79b,	// (0x00028c70) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002c08f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0002c08f) fep_vkb_candidate_drop_down_list_pane_g

0xc7ce,	// (0x00028ca3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7ce,	// (0x00028ca3) fep_vkb_candidate_drop_down_list_scroll_pane

0xc7db,	// (0x00028cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc7db,	// (0x00028cb0) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7e8,	// (0x00028cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7e8,	// (0x00028cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7f4,	// (0x00028cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7f4,	// (0x00028cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc621,	// (0x00028af6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc621,	// (0x00028af6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc642,	// (0x00028b17) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc642,	// (0x00028b17) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc800,	// (0x00028cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc800,	// (0x00028cd5) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc821,	// (0x00028cf6) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc821,	// (0x00028cf6) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc842,	// (0x00028d17) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc842,	// (0x00028d17) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0002c0a7) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0002c0a7) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5eaf,	// (0x00022384) title_pane_g1_ParamLimits

0x5ebc,	// (0x00022391) title_pane_g2_ParamLimits

0xf56a,	// (0x0002ba3f) title_pane_g_ParamLimits

0x84f0,	// (0x000249c5) aid_call2_pane

0x84f8,	// (0x000249cd) aid_call_pane

0x8500,	// (0x000249d5) popup_clock_analogue_window_g1

0x8500,	// (0x000249d5) popup_clock_analogue_window_g2

0x6a01,	// (0x00022ed6) popup_clock_analogue_window_g3

0x6a0a,	// (0x00022edf) popup_clock_analogue_window_g4

0x363e,	// (0x0001fb13) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0002bbe9) popup_clock_analogue_window_g

0x6a12,	// (0x00022ee7) popup_clock_analogue_window_t1

0x6a20,	// (0x00022ef5) clock_digital_number_pane_ParamLimits

0x6a20,	// (0x00022ef5) clock_digital_number_pane

0x6a2c,	// (0x00022f01) clock_digital_number_pane_cp02_ParamLimits

0x6a2c,	// (0x00022f01) clock_digital_number_pane_cp02

0x6a38,	// (0x00022f0d) clock_digital_number_pane_cp03_ParamLimits

0x6a38,	// (0x00022f0d) clock_digital_number_pane_cp03

0x6a44,	// (0x00022f19) clock_digital_number_pane_cp04_ParamLimits

0x6a44,	// (0x00022f19) clock_digital_number_pane_cp04

0x6a50,	// (0x00022f25) clock_digital_separator_pane_ParamLimits

0x6a50,	// (0x00022f25) clock_digital_separator_pane

0x6a5c,	// (0x00022f31) popup_clock_digital_window_t1_ParamLimits

0x6a5c,	// (0x00022f31) popup_clock_digital_window_t1

0x363e,	// (0x0001fb13) clock_digital_number_pane_g1

0x363e,	// (0x0001fb13) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0002bbf4) clock_digital_number_pane_g

0x363e,	// (0x0001fb13) clock_digital_separator_pane_g1

0x363e,	// (0x0001fb13) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0002bbf4) clock_digital_separator_pane_g

0x94a7,	// (0x0002597c) aid_fill_nsta_ParamLimits

0x95f7,	// (0x00025acc) indicator_nsta_pane_ParamLimits

0x9787,	// (0x00025c5c) popup_clock_analogue_window

0x9787,	// (0x00025c5c) popup_clock_digital_window

0x5f79,	// (0x0002244e) grid_indicator_nsta_pane_ParamLimits

0xba7c,	// (0x00027f51) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002bf79) clock_nsta_pane_t

0x69c5,	// (0x00022e9a) aid_size_max_handle

0x69cf,	// (0x00022ea4) aid_size_min_handle

0x8aee,	// (0x00024fc3) editor_scroll_pane

0xc85d,	// (0x00028d32) ex_editor_pane

0x8012,	// (0x000244e7) scroll_pane_cp13

0x682f,	// (0x00022d04) scroll_pane_cp14

0x852a,	// (0x000249ff) scroll_pane_cp36

0x8558,	// (0x00024a2d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8558,	// (0x00024a2d) list_single_graphic_hl_pane_cp2

0x5445,	// (0x0002191a) list_single_graphic_hl_pane_ParamLimits

0x5445,	// (0x0002191a) list_single_graphic_hl_pane

0x58c0,	// (0x00021d95) aid_size_min_hl_cp1

0xc865,	// (0x00028d3a) list_highlight_pane_cp34_ParamLimits

0xc865,	// (0x00028d3a) list_highlight_pane_cp34

0xc876,	// (0x00028d4b) list_single_graphic_hl_pane_g1_ParamLimits

0xc876,	// (0x00028d4b) list_single_graphic_hl_pane_g1

0x58c9,	// (0x00021d9e) list_single_graphic_hl_pane_g2_ParamLimits

0x58c9,	// (0x00021d9e) list_single_graphic_hl_pane_g2

0x58c9,	// (0x00021d9e) list_single_graphic_hl_pane_g3_ParamLimits

0x58c9,	// (0x00021d9e) list_single_graphic_hl_pane_g3

0x52b9,	// (0x0002178e) list_single_graphic_hl_pane_g4_ParamLimits

0x52b9,	// (0x0002178e) list_single_graphic_hl_pane_g4

0x58d5,	// (0x00021daa) list_single_graphic_hl_pane_g5_ParamLimits

0x58d5,	// (0x00021daa) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x0002c0b8) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x0002c0b8) list_single_graphic_hl_pane_g

0x58e9,	// (0x00021dbe) list_single_graphic_hl_pane_t1_ParamLimits

0x58e9,	// (0x00021dbe) list_single_graphic_hl_pane_t1

0xc883,	// (0x00028d58) aid_size_min_hl_cp2

0xc88c,	// (0x00028d61) list_highlight_pane_cp34_cp2_ParamLimits

0xc88c,	// (0x00028d61) list_highlight_pane_cp34_cp2

0xc876,	// (0x00028d4b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc876,	// (0x00028d4b) list_single_graphic_hl_pane_g1_cp2

0xc899,	// (0x00028d6e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc899,	// (0x00028d6e) list_single_graphic_hl_pane_g2_cp2

0xc8a5,	// (0x00028d7a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8a5,	// (0x00028d7a) list_single_graphic_hl_pane_g3_cp2

0x7571,	// (0x00023a46) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7571,	// (0x00023a46) list_single_graphic_hl_pane_g4_cp2

0xc8b3,	// (0x00028d88) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8b3,	// (0x00028d88) list_single_graphic_hl_pane_g5_cp2

0x6d15,	// (0x000231ea) control_pane_g4_ParamLimits

0x6d15,	// (0x000231ea) control_pane_g4

0x8e74,	// (0x00025349) bg_popup_sub_pane_cp10_ParamLimits

0xc060,	// (0x00028535) list_choice_list_pane_ParamLimits

0xc06f,	// (0x00028544) scroll_pane_cp23

0x6293,	// (0x00022768) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6cf,	// (0x00028ba4) list_preview_fixed_pane_ParamLimits

0xc6e5,	// (0x00028bba) list_preview_fixed_pane_cp_ParamLimits

0xc6e5,	// (0x00028bba) list_preview_fixed_pane_cp

0xc6f1,	// (0x00028bc6) popup_preview_fixed_window_g1_ParamLimits

0xc6f1,	// (0x00028bc6) popup_preview_fixed_window_g1

0xc6fd,	// (0x00028bd2) popup_preview_fixed_window_g2_ParamLimits

0xc6fd,	// (0x00028bd2) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0002c047) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0002c047) popup_preview_fixed_window_g

0x6937,	// (0x00022e0c) aid_navi_side_left_pane_ParamLimits

0x694c,	// (0x00022e21) aid_navi_side_right_pane_ParamLimits

0x6964,	// (0x00022e39) navi_icon_pane_stacon_ParamLimits

0x6978,	// (0x00022e4d) navi_navi_pane_stacon_ParamLimits

0x6964,	// (0x00022e39) navi_text_pane_stacon_ParamLimits

0x3634,	// (0x0001fb09) main_text_info_pane

0xc8dd,	// (0x00028db2) listscroll_text_info_pane

0xc8e5,	// (0x00028dba) list_text_info_pane_ParamLimits

0xc8e5,	// (0x00028dba) list_text_info_pane

0xc8f4,	// (0x00028dc9) scroll_pane_cp24_ParamLimits

0xc8f4,	// (0x00028dc9) scroll_pane_cp24

0xc912,	// (0x00028de7) list_text_info_pane_t1_ParamLimits

0xc912,	// (0x00028de7) list_text_info_pane_t1

0x8eba,	// (0x0002538f) popup_fast_swap2_window_ParamLimits

0x8eba,	// (0x0002538f) popup_fast_swap2_window

0xc937,	// (0x00028e0c) aid_size_cell_fast2

0x3634,	// (0x0001fb09) bg_popup_window_pane_cp17

0x9e3a,	// (0x0002630f) heading_pane_cp2

0x64f3,	// (0x000229c8) listscroll_fast2_pane

0xc941,	// (0x00028e16) grid_fast2_pane

0xc94b,	// (0x00028e20) listscroll_fast2_pane_g1

0xc955,	// (0x00028e2a) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x0002c0c3) listscroll_fast2_pane_g

0x8012,	// (0x000244e7) scroll_pane_cp26

0xc95f,	// (0x00028e34) cell_fast2_pane_ParamLimits

0xc95f,	// (0x00028e34) cell_fast2_pane

0xc976,	// (0x00028e4b) cell_fast2_pane_g1

0xc97f,	// (0x00028e54) cell_fast2_pane_g2

0xc988,	// (0x00028e5d) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x0002c0c8) cell_fast2_pane_g

0x65ec,	// (0x00022ac1) grid_highlight_pane_cp9

0x6601,	// (0x00022ad6) main_eswt_pane_ParamLimits

0x6601,	// (0x00022ad6) main_eswt_pane

0xc909,	// (0x00028dde) list_single_text_info_pane

0xc990,	// (0x00028e65) eswt_ctrl_button_pane

0xc990,	// (0x00028e65) eswt_ctrl_canvas_pane

0xc998,	// (0x00028e6d) eswt_ctrl_combo_pane

0xc990,	// (0x00028e65) eswt_ctrl_default_pane

0xc990,	// (0x00028e65) eswt_ctrl_label_pane

0xc9a0,	// (0x00028e75) eswt_ctrl_wait_pane

0xc9a8,	// (0x00028e7d) eswt_shell_pane

0x3634,	// (0x0001fb09) listscroll_eswt_app_pane

0xc9c8,	// (0x00028e9d) popup_eswt_tasktip_window_ParamLimits

0xc9c8,	// (0x00028e9d) popup_eswt_tasktip_window

0x9aa2,	// (0x00025f77) bg_popup_window_pane_cp18

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_ParamLimits

0xc9d9,	// (0x00028eae) eswt_control_pane_g1

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_ParamLimits

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_ParamLimits

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3

0xca00,	// (0x00028ed5) eswt_control_pane_g4_ParamLimits

0xca00,	// (0x00028ed5) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0002c0cf) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0002c0cf) eswt_control_pane_g

0x7e90,	// (0x00024365) bg_button_pane_ParamLimits

0x7e90,	// (0x00024365) bg_button_pane

0x6601,	// (0x00022ad6) common_borders_pane_copy2_ParamLimits

0x6601,	// (0x00022ad6) common_borders_pane_copy2

0xca0d,	// (0x00028ee2) control_button_pane_g1_ParamLimits

0xca0d,	// (0x00028ee2) control_button_pane_g1

0xca19,	// (0x00028eee) control_button_pane_g2_ParamLimits

0xca19,	// (0x00028eee) control_button_pane_g2

0xca25,	// (0x00028efa) control_button_pane_g3_ParamLimits

0xca25,	// (0x00028efa) control_button_pane_g3

0x0002,

0xfc03,	// (0x0002c0d8) control_button_pane_g_ParamLimits

0xfc03,	// (0x0002c0d8) control_button_pane_g

0xca39,	// (0x00028f0e) control_button_pane_t1

0xca47,	// (0x00028f1c) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0002c0df) control_button_pane_t

0x99b0,	// (0x00025e85) bg_button_pane_g1

0x99b8,	// (0x00025e8d) bg_button_pane_g2

0x99c0,	// (0x00025e95) bg_button_pane_g3

0x99c8,	// (0x00025e9d) bg_button_pane_g4

0x99d0,	// (0x00025ea5) bg_button_pane_g5

0x99d8,	// (0x00025ead) bg_button_pane_g6

0x99e0,	// (0x00025eb5) bg_button_pane_g7

0x99e8,	// (0x00025ebd) bg_button_pane_g8

0x99f0,	// (0x00025ec5) bg_button_pane_g9

0x0008,

0xf877,	// (0x0002bd4c) bg_button_pane_g

0xc01b,	// (0x000284f0) common_borders_pane_ParamLimits

0xc01b,	// (0x000284f0) common_borders_pane

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy1_ParamLimits

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy1

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy1_ParamLimits

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy1

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy1_ParamLimits

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy1

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy1_ParamLimits

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy1

0xc056,	// (0x0002852b) bg_eswt_ctrl_canvas_pane_g1

0xc01b,	// (0x000284f0) common_borders_pane_cp2_ParamLimits

0xc01b,	// (0x000284f0) common_borders_pane_cp2

0xc01b,	// (0x000284f0) common_borders_pane_cp3_ParamLimits

0xc01b,	// (0x000284f0) common_borders_pane_cp3

0xca55,	// (0x00028f2a) separator_horizontal_pane

0xca5d,	// (0x00028f32) separator_vertical_pane

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy2_ParamLimits

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy2

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy2_ParamLimits

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy2

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy2_ParamLimits

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy2

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy2_ParamLimits

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy2

0x3634,	// (0x0001fb09) common_borders_pane_cp4

0xca66,	// (0x00028f3b) separator_horizontal_pane_g1

0xca6f,	// (0x00028f44) separator_horizontal_pane_g2

0xca78,	// (0x00028f4d) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x0002c0e4) separator_horizontal_pane_g

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy3_ParamLimits

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy3

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy3_ParamLimits

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy3

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy3_ParamLimits

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy3

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy3_ParamLimits

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy3

0x3634,	// (0x0001fb09) common_borders_pane_cp5

0xca81,	// (0x00028f56) separator_vertical_pane_g1

0xca8a,	// (0x00028f5f) separator_vertical_pane_g2

0xca93,	// (0x00028f68) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0002c0eb) separator_vertical_pane_g

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy4_ParamLimits

0xc9d9,	// (0x00028eae) eswt_control_pane_g1_copy4

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy4_ParamLimits

0xc9e6,	// (0x00028ebb) eswt_control_pane_g2_copy4

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy4_ParamLimits

0xc9f3,	// (0x00028ec8) eswt_control_pane_g3_copy4

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy4_ParamLimits

0xca00,	// (0x00028ed5) eswt_control_pane_g4_copy4

0xca9c,	// (0x00028f71) eswt_ctrl_combo_button_pane

0xcaa4,	// (0x00028f79) eswt_ctrl_input_pane

0xcaac,	// (0x00028f81) popup_choice_list_window_cp70

0xcab4,	// (0x00028f89) eswt_ctrl_input_pane_t1

0x3634,	// (0x0001fb09) input_focus_pane_cp70

0xc01b,	// (0x000284f0) bg_button_pane_cp70_ParamLimits

0xc01b,	// (0x000284f0) bg_button_pane_cp70

0xcac2,	// (0x00028f97) eswt_ctrl_combo_button_pane_g1

0xcaca,	// (0x00028f9f) wait_bar_pane_cp70

0x9aa2,	// (0x00025f77) bg_popup_window_pane_cp70_ParamLimits

0x9aa2,	// (0x00025f77) bg_popup_window_pane_cp70

0xcad2,	// (0x00028fa7) popup_eswt_tasktip_window_t1

0xcae8,	// (0x00028fbd) wait_bar_pane_cp71_ParamLimits

0xcae8,	// (0x00028fbd) wait_bar_pane_cp71

0xcaf4,	// (0x00028fc9) grid_eswt_app_pane

0x833d,	// (0x00024812) scroll_pane_cp70

0xcafd,	// (0x00028fd2) cell_eswt_app_pane_ParamLimits

0xcafd,	// (0x00028fd2) cell_eswt_app_pane

0xcb2f,	// (0x00029004) cell_eswt_app_pane_g1_ParamLimits

0xcb2f,	// (0x00029004) cell_eswt_app_pane_g1

0xcb5e,	// (0x00029033) cell_eswt_app_pane_g2_ParamLimits

0xcb5e,	// (0x00029033) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0002c0f2) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0002c0f2) cell_eswt_app_pane_g

0xcb87,	// (0x0002905c) cell_eswt_app_pane_t1_ParamLimits

0xcb87,	// (0x0002905c) cell_eswt_app_pane_t1

0xcbb9,	// (0x0002908e) grid_highlight_pane_cp70_ParamLimits

0xcbb9,	// (0x0002908e) grid_highlight_pane_cp70

0xaf33,	// (0x00027408) set_content_pane_g1

0x8d9e,	// (0x00025273) status_small_volume_pane

0x757d,	// (0x00023a52) status_small_volume_pane_g1

0x7585,	// (0x00023a5a) volume_small2_pane

0x758e,	// (0x00023a63) volume_small2_pane_g1

0x7597,	// (0x00023a6c) volume_small2_pane_g2

0x75a0,	// (0x00023a75) volume_small2_pane_g3

0x75a9,	// (0x00023a7e) volume_small2_pane_g4

0x75b2,	// (0x00023a87) volume_small2_pane_g5

0x75bb,	// (0x00023a90) volume_small2_pane_g6

0x75c4,	// (0x00023a99) volume_small2_pane_g7

0x75cd,	// (0x00023aa2) volume_small2_pane_g8

0x75d6,	// (0x00023aab) volume_small2_pane_g9

0x75df,	// (0x00023ab4) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x0002c0f7) volume_small2_pane_g

0xc434,	// (0x00028909) fep_vkb_top_text_pane_g1_ParamLimits

0xc44f,	// (0x00028924) fep_vkb_top_text_pane_t1_ParamLimits

0xc709,	// (0x00028bde) popup_preview_fixed_window_g3_ParamLimits

0xc709,	// (0x00028bde) popup_preview_fixed_window_g3

0x93cb,	// (0x000258a0) popup_toolbar_trans_pane

0xadd8,	// (0x000272ad) aid_height_set_list_ParamLimits

0xade9,	// (0x000272be) aid_size_parent_ParamLimits

0x8e74,	// (0x00025349) list_highlight_pane_cp2_ParamLimits

0xaf33,	// (0x00027408) set_content_pane_g1_ParamLimits

0xb03c,	// (0x00027511) list_single_image_pane_ParamLimits

0xb03c,	// (0x00027511) list_single_image_pane

0xcbc5,	// (0x0002909a) aid_size_cell_image_ParamLimits

0xcbc5,	// (0x0002909a) aid_size_cell_image

0xcbd2,	// (0x000290a7) grid_single_image_pane_ParamLimits

0xcbd2,	// (0x000290a7) grid_single_image_pane

0x7eaa,	// (0x0002437f) list_single_image_pane_g1_ParamLimits

0x7eaa,	// (0x0002437f) list_single_image_pane_g1

0x7eb6,	// (0x0002438b) list_single_image_pane_g2_ParamLimits

0x7eb6,	// (0x0002438b) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0002c10c) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0002c10c) list_single_image_pane_g

0xcbe0,	// (0x000290b5) list_single_image_pane_t1_ParamLimits

0xcbe0,	// (0x000290b5) list_single_image_pane_t1

0xcbf6,	// (0x000290cb) cell_image_list_pane_ParamLimits

0xcbf6,	// (0x000290cb) cell_image_list_pane

0xcc0c,	// (0x000290e1) cell_image_list_pane_g1

0xcc15,	// (0x000290ea) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0002c111) cell_image_list_pane_g

0xcc1e,	// (0x000290f3) aid_size_cell_tb_trans_pane

0x7e90,	// (0x00024365) bg_tb_trans_pane

0xcc30,	// (0x00029105) grid_tb_trans_pane

0x99b0,	// (0x00025e85) bg_tb_trans_pane_g1

0x99b8,	// (0x00025e8d) bg_tb_trans_pane_g2

0x99c0,	// (0x00025e95) bg_tb_trans_pane_g3

0x99c8,	// (0x00025e9d) bg_tb_trans_pane_g4

0x99d0,	// (0x00025ea5) bg_tb_trans_pane_g5

0x99e8,	// (0x00025ebd) bg_tb_trans_pane_g6

0x99f0,	// (0x00025ec5) bg_tb_trans_pane_g7

0x99d8,	// (0x00025ead) bg_tb_trans_pane_g8

0x99e0,	// (0x00025eb5) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0002c116) bg_tb_trans_pane_g

0xcc44,	// (0x00029119) cell_toolbar_trans_pane_ParamLimits

0xcc44,	// (0x00029119) cell_toolbar_trans_pane

0xc056,	// (0x0002852b) cell_toolbar_trans_pane_g1

0xbc77,	// (0x0002814c) list_form2_midp_pane_t1

0xbc85,	// (0x0002815a) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0002bfbf) list_form2_midp_pane_t

0xbc93,	// (0x00028168) scroll_pane_cp51_ParamLimits

0xbe5a,	// (0x0002832f) form2_midp_wait_pane_g1

0xbe63,	// (0x00028338) form2_midp_wait_pane_g2

0xbe6c,	// (0x00028341) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0002bfd4) form2_midp_wait_pane_g

0x5f79,	// (0x0002244e) list_highlight_pane_cp21_ParamLimits

0xbeb0,	// (0x00028385) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbebf,	// (0x00028394) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaff5,	// (0x000274ca) list_single_2graphic_im_pane_ParamLimits

0xaff5,	// (0x000274ca) list_single_2graphic_im_pane

0xcc6a,	// (0x0002913f) list_single_2graphic_im_pane_g1_ParamLimits

0xcc6a,	// (0x0002913f) list_single_2graphic_im_pane_g1

0xcc7b,	// (0x00029150) list_single_2graphic_im_pane_g2_ParamLimits

0xcc7b,	// (0x00029150) list_single_2graphic_im_pane_g2

0xcc87,	// (0x0002915c) list_single_2graphic_im_pane_g3_ParamLimits

0xcc87,	// (0x0002915c) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x0002c129) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x0002c129) list_single_2graphic_im_pane_g

0xcca7,	// (0x0002917c) list_single_2graphic_im_pane_t1_ParamLimits

0xcca7,	// (0x0002917c) list_single_2graphic_im_pane_t1

0xc715,	// (0x00028bea) list_single_graphic_2heading_pane_fp_ParamLimits

0xc715,	// (0x00028bea) list_single_graphic_2heading_pane_fp

0x5732,	// (0x00021c07) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5732,	// (0x00021c07) list_single_graphic_2heading_pane_fp_g1

0xc72e,	// (0x00028c03) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc72e,	// (0x00028c03) list_single_graphic_2heading_pane_fp_g2

0x56fb,	// (0x00021bd0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x56fb,	// (0x00021bd0) list_single_graphic_2heading_pane_fp_g3

0x5707,	// (0x00021bdc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5707,	// (0x00021bdc) list_single_graphic_2heading_pane_fp_g4

0xc73a,	// (0x00028c0f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc73a,	// (0x00028c0f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002c057) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002c057) list_single_graphic_2heading_pane_fp_g

0x58ff,	// (0x00021dd4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x58ff,	// (0x00021dd4) list_single_graphic_2heading_pane_fp_t1

0x576a,	// (0x00021c3f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x576a,	// (0x00021c3f) list_single_graphic_2heading_pane_fp_t2

0x5915,	// (0x00021dea) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5915,	// (0x00021dea) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0002c132) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0002c132) list_single_graphic_2heading_pane_fp_t

0xc0f6,	// (0x000285cb) fep_hwr_write_pane_g5_ParamLimits

0xc0f6,	// (0x000285cb) fep_hwr_write_pane_g5

0xc102,	// (0x000285d7) fep_hwr_write_pane_g6_ParamLimits

0xc102,	// (0x000285d7) fep_hwr_write_pane_g6

0xc9a8,	// (0x00028e7d) eswt_shell_pane_ParamLimits

0x9aa2,	// (0x00025f77) bg_popup_window_pane_cp18_ParamLimits

0xad2f,	// (0x00027204) heading_pane_cp70

0xcad2,	// (0x00028fa7) popup_eswt_tasktip_window_t1_ParamLimits

0x94fe,	// (0x000259d3) aid_touch_tab_arrow_left

0x950d,	// (0x000259e2) aid_touch_tab_arrow_right

0x5ecd,	// (0x000223a2) title_pane_g3_ParamLimits

0x5ecd,	// (0x000223a2) title_pane_g3

0x7e4f,	// (0x00024324) set_value_pane_g1

0x93cb,	// (0x000258a0) popup_toolbar_trans_pane_ParamLimits

0xcc1e,	// (0x000290f3) aid_size_cell_tb_trans_pane_ParamLimits

0x7e90,	// (0x00024365) bg_tb_trans_pane_ParamLimits

0xcc30,	// (0x00029105) grid_tb_trans_pane_ParamLimits

0x6293,	// (0x00022768) cont_note_pane_ParamLimits

0x6293,	// (0x00022768) cont_note_pane

0x6601,	// (0x00022ad6) cont_snote2_single_text_pane_ParamLimits

0x6601,	// (0x00022ad6) cont_snote2_single_text_pane

0x6601,	// (0x00022ad6) cont_snote2_single_graphic_pane_ParamLimits

0x6601,	// (0x00022ad6) cont_snote2_single_graphic_pane

0xa056,	// (0x0002652b) cont_note_wait_pane_ParamLimits

0xa056,	// (0x0002652b) cont_note_wait_pane

0xa056,	// (0x0002652b) cont_note_image_pane_ParamLimits

0xa056,	// (0x0002652b) cont_note_image_pane

0xccd8,	// (0x000291ad) popup_note2_window_g1_ParamLimits

0xccd8,	// (0x000291ad) popup_note2_window_g1

0xcd09,	// (0x000291de) popup_note2_window_t1_ParamLimits

0xcd09,	// (0x000291de) popup_note2_window_t1

0xcd4e,	// (0x00029223) popup_note2_window_t2_ParamLimits

0xcd4e,	// (0x00029223) popup_note2_window_t2

0xcd93,	// (0x00029268) popup_note2_window_t3_ParamLimits

0xcd93,	// (0x00029268) popup_note2_window_t3

0xcdd8,	// (0x000292ad) popup_note2_window_t4_ParamLimits

0xcdd8,	// (0x000292ad) popup_note2_window_t4

0x6317,	// (0x000227ec) popup_note2_window_t5_ParamLimits

0x6317,	// (0x000227ec) popup_note2_window_t5

0x0004,

0xfc69,	// (0x0002c13e) popup_note2_window_t_ParamLimits

0xfc69,	// (0x0002c13e) popup_note2_window_t

0xce07,	// (0x000292dc) popup_note2_image_window_g1_ParamLimits

0xce07,	// (0x000292dc) popup_note2_image_window_g1

0xce13,	// (0x000292e8) popup_note2_image_window_g2_ParamLimits

0xce13,	// (0x000292e8) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x0002c149) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x0002c149) popup_note2_image_window_g

0xce25,	// (0x000292fa) popup_note2_image_window_t1_ParamLimits

0xce25,	// (0x000292fa) popup_note2_image_window_t1

0xce3d,	// (0x00029312) popup_note2_image_window_t2_ParamLimits

0xce3d,	// (0x00029312) popup_note2_image_window_t2

0xce55,	// (0x0002932a) popup_note2_image_window_t3_ParamLimits

0xce55,	// (0x0002932a) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x0002c14e) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x0002c14e) popup_note2_image_window_t

0xa064,	// (0x00026539) popup_note2_wait_window_g1_ParamLimits

0xa064,	// (0x00026539) popup_note2_wait_window_g1

0xce71,	// (0x00029346) popup_note2_wait_window_g2_ParamLimits

0xce71,	// (0x00029346) popup_note2_wait_window_g2

0xa07c,	// (0x00026551) popup_note2_wait_window_g3_ParamLimits

0xa07c,	// (0x00026551) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x0002c155) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x0002c155) popup_note2_wait_window_g

0xce7d,	// (0x00029352) popup_note2_wait_window_t1_ParamLimits

0xce7d,	// (0x00029352) popup_note2_wait_window_t1

0xce9b,	// (0x00029370) popup_note2_wait_window_t2_ParamLimits

0xce9b,	// (0x00029370) popup_note2_wait_window_t2

0xceb9,	// (0x0002938e) popup_note2_wait_window_t3_ParamLimits

0xceb9,	// (0x0002938e) popup_note2_wait_window_t3

0xcecb,	// (0x000293a0) popup_note2_wait_window_t4_ParamLimits

0xcecb,	// (0x000293a0) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002c15c) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002c15c) popup_note2_wait_window_t

0xcedd,	// (0x000293b2) wait_bar2_pane_ParamLimits

0xcedd,	// (0x000293b2) wait_bar2_pane

0xcef5,	// (0x000293ca) popup_snote2_single_text_window_g1_ParamLimits

0xcef5,	// (0x000293ca) popup_snote2_single_text_window_g1

0xcf1d,	// (0x000293f2) popup_snote2_single_text_window_t1_ParamLimits

0xcf1d,	// (0x000293f2) popup_snote2_single_text_window_t1

0xcf69,	// (0x0002943e) popup_snote2_single_text_window_t2_ParamLimits

0xcf69,	// (0x0002943e) popup_snote2_single_text_window_t2

0xcfb5,	// (0x0002948a) popup_snote2_single_text_window_t3_ParamLimits

0xcfb5,	// (0x0002948a) popup_snote2_single_text_window_t3

0xcff6,	// (0x000294cb) popup_snote2_single_text_window_t4_ParamLimits

0xcff6,	// (0x000294cb) popup_snote2_single_text_window_t4

0xd02c,	// (0x00029501) popup_snote2_single_text_window_t5_ParamLimits

0xd02c,	// (0x00029501) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002c165) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002c165) popup_snote2_single_text_window_t

0xd057,	// (0x0002952c) popup_snote2_single_graphic_window_g1_ParamLimits

0xd057,	// (0x0002952c) popup_snote2_single_graphic_window_g1

0xd07f,	// (0x00029554) popup_snote2_single_graphic_window_g2_ParamLimits

0xd07f,	// (0x00029554) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002c170) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002c170) popup_snote2_single_graphic_window_g

0xd0a7,	// (0x0002957c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0a7,	// (0x0002957c) popup_snote2_single_graphic_window_t1

0xd0f3,	// (0x000295c8) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0f3,	// (0x000295c8) popup_snote2_single_graphic_window_t2

0xcfb5,	// (0x0002948a) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfb5,	// (0x0002948a) popup_snote2_single_graphic_window_t3

0xcff6,	// (0x000294cb) popup_snote2_single_graphic_window_t4_ParamLimits

0xcff6,	// (0x000294cb) popup_snote2_single_graphic_window_t4

0xd02c,	// (0x00029501) popup_snote2_single_graphic_window_t5_ParamLimits

0xd02c,	// (0x00029501) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002c175) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002c175) popup_snote2_single_graphic_window_t

0xbb3d,	// (0x00028012) clock_nsta_pane_cp2_t1

0xbb3d,	// (0x00028012) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0002bf95) clock_nsta_pane_cp2_t

0x5095,	// (0x0002156a) form_field_data_wide_pane_g1_ParamLimits

0x7eaa,	// (0x0002437f) form_field_data_wide_pane_g2_ParamLimits

0x7eaa,	// (0x0002437f) form_field_data_wide_pane_g2

0x7eb6,	// (0x0002438b) form_field_data_wide_pane_g3_ParamLimits

0x7eb6,	// (0x0002438b) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0002bb6c) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0002bb6c) form_field_data_wide_pane_g

0xba18,	// (0x00027eed) grid_touch_3_pane_ParamLimits

0xba18,	// (0x00027eed) grid_touch_3_pane

0xd13f,	// (0x00029614) cell_touch_3_pane_ParamLimits

0xd13f,	// (0x00029614) cell_touch_3_pane

0xc056,	// (0x0002852b) cell_touch_3_pane_g1

0xc056,	// (0x0002852b) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002c01a) cell_touch_3_pane_g

0x6349,	// (0x0002281e) cont_query_data_pane

0x6351,	// (0x00022826) cont_query_data_pane_cp1

0xd172,	// (0x00029647) button_value_adjust_pane_cp7

0xd17a,	// (0x0002964f) query_popup_pane_cp3

0x85ca,	// (0x00024a9f) bg_popup_sub_pane_cp22_ParamLimits

0x6a7b,	// (0x00022f50) navi_navi_volume_pane_cp2

0x6a96,	// (0x00022f6b) popup_side_volume_key_window_g2

0x6aa5,	// (0x00022f7a) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002bbfe) popup_side_volume_key_window_g

0x6ac2,	// (0x00022f97) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002bc05) popup_side_volume_key_window_t

0x8885,	// (0x00024d5a) popup_side_volume_key_window_ParamLimits

0x4c8d,	// (0x00021162) list_double_graphic_pane_g4_ParamLimits

0x4c8d,	// (0x00021162) list_double_graphic_pane_g4

0xb024,	// (0x000274f9) list_single_2heading_msg_pane_ParamLimits

0xb024,	// (0x000274f9) list_single_2heading_msg_pane

0x5935,	// (0x00021e0a) list_single_2heading_msg_pane_g1_ParamLimits

0x5935,	// (0x00021e0a) list_single_2heading_msg_pane_g1

0x4aea,	// (0x00020fbf) list_single_2heading_msg_pane_g2_ParamLimits

0x4aea,	// (0x00020fbf) list_single_2heading_msg_pane_g2

0x5941,	// (0x00021e16) list_single_2heading_msg_pane_g3_ParamLimits

0x5941,	// (0x00021e16) list_single_2heading_msg_pane_g3

0x594d,	// (0x00021e22) list_single_2heading_msg_pane_g4_ParamLimits

0x594d,	// (0x00021e22) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002c180) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002c180) list_single_2heading_msg_pane_g

0x5965,	// (0x00021e3a) list_single_2heading_msg_pane_t1_ParamLimits

0x5965,	// (0x00021e3a) list_single_2heading_msg_pane_t1

0x598d,	// (0x00021e62) list_single_2heading_msg_pane_t2_ParamLimits

0x598d,	// (0x00021e62) list_single_2heading_msg_pane_t2

0x59c1,	// (0x00021e96) list_single_2heading_msg_pane_t3_ParamLimits

0x59c1,	// (0x00021e96) list_single_2heading_msg_pane_t3

0x59fa,	// (0x00021ecf) list_single_2heading_msg_pane_t4_ParamLimits

0x59fa,	// (0x00021ecf) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002c189) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002c189) list_single_2heading_msg_pane_t

0x37cb,	// (0x0001fca0) title_pane_g4_ParamLimits

0x37cb,	// (0x0001fca0) title_pane_g4

0x6887,	// (0x00022d5c) title_pane_stacon_g3_ParamLimits

0x6887,	// (0x00022d5c) title_pane_stacon_g3

0xcc9b,	// (0x00029170) list_single_2graphic_im_pane_g4_ParamLimits

0xcc9b,	// (0x00029170) list_single_2graphic_im_pane_g4

0xaacc,	// (0x00026fa1) popup_side_volume_key_window_cp

0xb342,	// (0x00027817) main_idle_act2_pane_t1

0x6e4d,	// (0x00023322) toolbar_button_pane_g10

0x67f9,	// (0x00022cce) popup_toolbar_window_cp1

0xbb2e,	// (0x00028003) clock_nsta_pane_cp_t1

0xbb2e,	// (0x00028003) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0002bf90) clock_nsta_pane_cp_t

0x6a7b,	// (0x00022f50) navi_navi_volume_pane_cp2_ParamLimits

0x6a8a,	// (0x00022f5f) popup_side_volume_key_window_g1_ParamLimits

0x6a96,	// (0x00022f6b) popup_side_volume_key_window_g2_ParamLimits

0x6aa5,	// (0x00022f7a) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002bbfe) popup_side_volume_key_window_g_ParamLimits

0x7266,	// (0x0002373b) fep_hwr_aid_pane

0x12aa,	// (0x0001d77f) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c6,	// (0x0002859b) fep_hwr_top_pane_g1_ParamLimits

0xc0d8,	// (0x000285ad) fep_hwr_top_pane_g2_ParamLimits

0x7321,	// (0x000237f6) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0002bfe5) fep_hwr_top_pane_g_ParamLimits

0x7336,	// (0x0002380b) fep_hwr_top_text_pane_ParamLimits

0xa881,	// (0x00026d56) aid_touch_tab_arrow_arrow_2

0xa88a,	// (0x00026d5f) aid_touch_tab_arrow_left_2

0x727a,	// (0x0002374f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x72b1,	// (0x00023786) fep_hwr_prediction_pane

0xc22e,	// (0x00028703) fep_vkb_prediction_pane

0xc334,	// (0x00028809) fep_vkb_side_pane_g3_ParamLimits

0xc334,	// (0x00028809) fep_vkb_side_pane_g3

0xc2e0,	// (0x000287b5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc78e,	// (0x00028c63) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc79b,	// (0x00028c70) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0002c08f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1a1,	// (0x00029676) fep_hwr_prediction_pane_g1

0x75e8,	// (0x00023abd) fep_hwr_prediction_pane_g2

0x75f0,	// (0x00023ac5) fep_hwr_prediction_pane_g3

0x75f8,	// (0x00023acd) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002c192) fep_hwr_prediction_pane_g

0xd1a1,	// (0x00029676) fep_vkb_prediction_pane_g1

0xd1ab,	// (0x00029680) fep_vkb_prediction_pane_g2

0xd1b3,	// (0x00029688) fep_vkb_prediction_pane_g3

0xd1bb,	// (0x00029690) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002c19b) fep_vkb_prediction_pane_g

0xb6f0,	// (0x00027bc5) slider_set_pane_g3

0xb704,	// (0x00027bd9) slider_set_pane_g4

0xb71c,	// (0x00027bf1) slider_set_pane_g5

0xb6f0,	// (0x00027bc5) slider_set_pane_g6

0x7136,	// (0x0002360b) slider_set_pane_g7

0xaf7a,	// (0x0002744f) slider_form_pane_g3

0xaf83,	// (0x00027458) slider_form_pane_g4

0xaf8b,	// (0x00027460) slider_form_pane_g5

0xaf7a,	// (0x0002744f) slider_form_pane_g6

0xaf93,	// (0x00027468) slider_form_pane_g7

0xb610,	// (0x00027ae5) slider_set_pane_vc_g3

0xb619,	// (0x00027aee) slider_set_pane_vc_g4

0xb622,	// (0x00027af7) slider_set_pane_vc_g5

0xb610,	// (0x00027ae5) slider_set_pane_vc_g6

0xb62b,	// (0x00027b00) slider_set_pane_vc_g7

0xb610,	// (0x00027ae5) slider_form_pane_vc_g1

0xb619,	// (0x00027aee) slider_form_pane_vc_g2

0xb622,	// (0x00027af7) slider_form_pane_vc_g3

0xb610,	// (0x00027ae5) slider_form_pane_vc_g4

0xb822,	// (0x00027cf7) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002bf69) slider_form_pane_vc_g

0x3634,	// (0x0001fb09) main_idle_act3_pane

0xd1c3,	// (0x00029698) ai3_links_pane

0xd1cc,	// (0x000296a1) popup_ai3_data_window_ParamLimits

0xd1cc,	// (0x000296a1) popup_ai3_data_window

0x3634,	// (0x0001fb09) grid_ai3_links_pane

0xd1ea,	// (0x000296bf) cell_ai3_links_pane_ParamLimits

0xd1ea,	// (0x000296bf) cell_ai3_links_pane

0xd204,	// (0x000296d9) bg_popup_sub_pane_cp11

0xd211,	// (0x000296e6) cell_ai3_links_pane_g1

0x3634,	// (0x0001fb09) bg_popup_sub_pane_cp12

0xd236,	// (0x0002970b) heading_ai3_data_pane

0xd23e,	// (0x00029713) list_ai3_gene_pane

0xd24a,	// (0x0002971f) popup_ai3_data_window_g1

0xd252,	// (0x00029727) heading_ai3_data_pane_g1

0xd25a,	// (0x0002972f) heading_ai3_data_pane_t1

0xd268,	// (0x0002973d) list_double_ai3_gene_pane_ParamLimits

0xd268,	// (0x0002973d) list_double_ai3_gene_pane

0xd275,	// (0x0002974a) list_single_ai3_gene_pane_ParamLimits

0xd275,	// (0x0002974a) list_single_ai3_gene_pane

0xc01b,	// (0x000284f0) list_highlight_pane_cp7_ParamLimits

0xc01b,	// (0x000284f0) list_highlight_pane_cp7

0xd282,	// (0x00029757) list_single_a13_gene_pane_t1_ParamLimits

0xd282,	// (0x00029757) list_single_a13_gene_pane_t1

0xd299,	// (0x0002976e) list_single_ai3_gene_pane_g1

0xd2a2,	// (0x00029777) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002c1a4) list_single_ai3_gene_pane_g

0xd2aa,	// (0x0002977f) list_double_ai3_gene_pane_g1_ParamLimits

0xd2aa,	// (0x0002977f) list_double_ai3_gene_pane_g1

0xd2b6,	// (0x0002978b) list_double_ai3_gene_pane_t1_ParamLimits

0xd2b6,	// (0x0002978b) list_double_ai3_gene_pane_t1

0xd2d2,	// (0x000297a7) list_double_ai3_gene_pane_t2_ParamLimits

0xd2d2,	// (0x000297a7) list_double_ai3_gene_pane_t2

0xd2e7,	// (0x000297bc) list_double_ai3_gene_pane_t3_ParamLimits

0xd2e7,	// (0x000297bc) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002c1a9) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002c1a9) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x592b,	// (0x00021e00) aid_size_min_col_2

0xd18b,	// (0x00029660) aid_size_min_msg_ParamLimits

0xd18b,	// (0x00029660) aid_size_min_msg

0xc440,	// (0x00028915) fep_vkb_top_text_pane_g2_ParamLimits

0xc440,	// (0x00028915) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0002c015) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0002c015) fep_vkb_top_text_pane_g

0x3634,	// (0x0001fb09) main_hc_apps_shell_pane

0xd304,	// (0x000297d9) grid_hc_apps_pane_ParamLimits

0xd304,	// (0x000297d9) grid_hc_apps_pane

0xd313,	// (0x000297e8) list_hc_apps_pane

0xd31b,	// (0x000297f0) scroll_pane_cp37_ParamLimits

0xd31b,	// (0x000297f0) scroll_pane_cp37

0xd327,	// (0x000297fc) cell_hc_apps_pane_ParamLimits

0xd327,	// (0x000297fc) cell_hc_apps_pane

0xd3df,	// (0x000298b4) cell_hc_apps_pane_g1_ParamLimits

0xd3df,	// (0x000298b4) cell_hc_apps_pane_g1

0xd410,	// (0x000298e5) cell_hc_apps_pane_g2_ParamLimits

0xd410,	// (0x000298e5) cell_hc_apps_pane_g2

0xd42c,	// (0x00029901) cell_hc_apps_pane_g3_ParamLimits

0xd42c,	// (0x00029901) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002c1b0) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002c1b0) cell_hc_apps_pane_g

0xd44e,	// (0x00029923) cell_hc_apps_pane_t1_ParamLimits

0xd44e,	// (0x00029923) cell_hc_apps_pane_t1

0x6293,	// (0x00022768) grid_highlight_pane_cp10_ParamLimits

0x6293,	// (0x00022768) grid_highlight_pane_cp10

0xd48e,	// (0x00029963) list_single_hc_apps_pane_ParamLimits

0xd48e,	// (0x00029963) list_single_hc_apps_pane

0xd4cd,	// (0x000299a2) list_single_hc_apps_pane_g1

0x5a1f,	// (0x00021ef4) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002c1b7) list_single_hc_apps_pane_g

0x5a38,	// (0x00021f0d) list_single_hc_apps_pane_g2_copy1

0x5a54,	// (0x00021f29) list_single_hc_apps_pane_t1

0x5f79,	// (0x0002244e) bg_set_opt_pane_cp_ParamLimits

0x5fc5,	// (0x0002249a) setting_slider_pane_t1_ParamLimits

0x5fdb,	// (0x000224b0) setting_slider_pane_t2_ParamLimits

0x5ff5,	// (0x000224ca) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002ba4f) setting_slider_pane_t_ParamLimits

0x600d,	// (0x000224e2) slider_set_pane_ParamLimits

0x6d29,	// (0x000231fe) control_pane_g5_ParamLimits

0x6d29,	// (0x000231fe) control_pane_g5

0xad9b,	// (0x00027270) slider_set_pane_g1_ParamLimits

0x712a,	// (0x000235ff) slider_set_pane_g2_ParamLimits

0xb6f0,	// (0x00027bc5) slider_set_pane_g3_ParamLimits

0xb704,	// (0x00027bd9) slider_set_pane_g4_ParamLimits

0xb71c,	// (0x00027bf1) slider_set_pane_g5_ParamLimits

0xb6f0,	// (0x00027bc5) slider_set_pane_g6_ParamLimits

0x7136,	// (0x0002360b) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002be4a) slider_set_pane_g_ParamLimits

0x896a,	// (0x00024e3f) navi_icon_text_pane_ParamLimits

0x94bd,	// (0x00025992) aid_fill_nsta_2_ParamLimits

0x94fe,	// (0x000259d3) aid_touch_tab_arrow_left_ParamLimits

0x950d,	// (0x000259e2) aid_touch_tab_arrow_right_ParamLimits

0x957a,	// (0x00025a4f) clock_nsta_pane_ParamLimits

0xa85d,	// (0x00026d32) navi_icon_pane_g1_ParamLimits

0xa86c,	// (0x00026d41) navi_text_pane_t1_ParamLimits

0xbc4b,	// (0x00028120) navi_icon_text_pane_g1_ParamLimits

0xbc5a,	// (0x0002812f) navi_icon_text_pane_t1_ParamLimits

0xd4cd,	// (0x000299a2) list_single_hc_apps_pane_g1_ParamLimits

0x5a1f,	// (0x00021ef4) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002c1b7) list_single_hc_apps_pane_g_ParamLimits

0x5a38,	// (0x00021f0d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a54,	// (0x00021f29) list_single_hc_apps_pane_t1_ParamLimits

0x5dc3,	// (0x00022298) popup_toolbar2_fixed_window_ParamLimits

0x5dc3,	// (0x00022298) popup_toolbar2_fixed_window

0x93c1,	// (0x00025896) popup_toolbar2_float_window

0x3634,	// (0x0001fb09) bg_popup_sub_pane_cp27

0xd4e6,	// (0x000299bb) grid_toolbar2_float_pane

0x3634,	// (0x0001fb09) bg_popup_sub_pane_cp26

0xd4e6,	// (0x000299bb) grid_toolbar2_fixed_pane

0xd4ee,	// (0x000299c3) cell_toolbar2_fixed_pane_ParamLimits

0xd4ee,	// (0x000299c3) cell_toolbar2_fixed_pane

0xd4fe,	// (0x000299d3) cell_toolbar2_fixed_pane_g1

0xd507,	// (0x000299dc) toolbar2_fixed_button_pane

0x99b0,	// (0x00025e85) toolbar2_fixed_button_pane_g1

0x99b8,	// (0x00025e8d) toolbar2_fixed_button_pane_g2

0x99c0,	// (0x00025e95) toolbar2_fixed_button_pane_g3

0x99c8,	// (0x00025e9d) toolbar2_fixed_button_pane_g4

0x99d0,	// (0x00025ea5) toolbar2_fixed_button_pane_g5

0x99d8,	// (0x00025ead) toolbar2_fixed_button_pane_g6

0x99e0,	// (0x00025eb5) toolbar2_fixed_button_pane_g7

0x99e8,	// (0x00025ebd) toolbar2_fixed_button_pane_g8

0x99f0,	// (0x00025ec5) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0002bd4c) toolbar2_fixed_button_pane_g

0xd50f,	// (0x000299e4) cell_toolbar2_float_pane_ParamLimits

0xd50f,	// (0x000299e4) cell_toolbar2_float_pane

0xd520,	// (0x000299f5) cell_toolbar2_float_pane_g1

0xd507,	// (0x000299dc) toolbar2_fixed_button_pane_cp

0xc19c,	// (0x00028671) fep_vkb_accented_list_pane_ParamLimits

0xc19c,	// (0x00028671) fep_vkb_accented_list_pane

0x7498,	// (0x0002396d) bg_popup_fep_shadow_pane_g9

0x8aee,	// (0x00024fc3) bg_popup_fep_shadow_pane_cp3

0x7ff9,	// (0x000244ce) list_accented_list_pane

0xd529,	// (0x000299fe) list_single_accented_list_pane_ParamLimits

0xd529,	// (0x000299fe) list_single_accented_list_pane

0x8aee,	// (0x00024fc3) list_highlight_pane_cp10

0xd53a,	// (0x00029a0f) list_single_accented_list_pane_t1

0x9307,	// (0x000257dc) popup_slider_window_ParamLimits

0x9307,	// (0x000257dc) popup_slider_window

0xd182,	// (0x00029657) aid_indentation_list_msg

0xd606,	// (0x00029adb) bg_popup_window_pane_cp19

0xd674,	// (0x00029b49) popup_slider_window_g1

0xd690,	// (0x00029b65) popup_slider_window_g2

0xd6ac,	// (0x00029b81) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002c1bc) popup_slider_window_g

0xd708,	// (0x00029bdd) popup_slider_window_t1

0xd77c,	// (0x00029c51) small_volume_slider_vertical_pane

0xc056,	// (0x0002852b) small_volume_slider_vertical_pane_g1

0xc056,	// (0x0002852b) small_volume_slider_vertical_pane_g2

0xd798,	// (0x00029c6d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002c1ce) small_volume_slider_vertical_pane_g

0x5b7b,	// (0x00022050) area_side_right_pane_ParamLimits

0x5b7b,	// (0x00022050) area_side_right_pane

0x7600,	// (0x00023ad5) aid_size_side_button_ParamLimits

0x7600,	// (0x00023ad5) aid_size_side_button

0x7614,	// (0x00023ae9) grid_sctrl_middle_pane_ParamLimits

0x7614,	// (0x00023ae9) grid_sctrl_middle_pane

0x7634,	// (0x00023b09) sctrl_sk_bottom_pane

0x7645,	// (0x00023b1a) sctrl_sk_top_pane

0x7657,	// (0x00023b2c) aid_touch_sctrl_top

0x6293,	// (0x00022768) bg_sctrl_sk_pane_ParamLimits

0x6293,	// (0x00022768) bg_sctrl_sk_pane

0x7664,	// (0x00023b39) sctrl_sk_top_pane_g1

0x7671,	// (0x00023b46) sctrl_sk_top_pane_t1

0x7657,	// (0x00023b2c) aid_touch_sctrl_bottom

0x6293,	// (0x00022768) bg_sctrl_sk_pane_cp_ParamLimits

0x6293,	// (0x00022768) bg_sctrl_sk_pane_cp

0x768c,	// (0x00023b61) sctrl_sk_bottom_pane_g1

0x7671,	// (0x00023b46) sctrl_sk_bottom_pane_t1

0x7695,	// (0x00023b6a) cell_sctrl_middle_pane_ParamLimits

0x7695,	// (0x00023b6a) cell_sctrl_middle_pane

0x76b2,	// (0x00023b87) aid_touch_sctrl_middle_ParamLimits

0x76b2,	// (0x00023b87) aid_touch_sctrl_middle

0x7e90,	// (0x00024365) bg_sctrl_middle_pane_ParamLimits

0x7e90,	// (0x00024365) bg_sctrl_middle_pane

0xc2e0,	// (0x000287b5) cell_sctrl_middle_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) cell_sctrl_middle_pane_g1

0x76c4,	// (0x00023b99) cell_sctrl_middle_pane_g2_ParamLimits

0x76c4,	// (0x00023b99) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002c1da) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002c1da) cell_sctrl_middle_pane_g

0x99b0,	// (0x00025e85) bg_sctrl_middle_pane_g1

0x99b8,	// (0x00025e8d) bg_sctrl_middle_pane_g2

0x99c0,	// (0x00025e95) bg_sctrl_middle_pane_g3

0x99c8,	// (0x00025e9d) bg_sctrl_middle_pane_g4

0x99d0,	// (0x00025ea5) bg_sctrl_middle_pane_g5

0x99d8,	// (0x00025ead) bg_sctrl_middle_pane_g6

0x99e0,	// (0x00025eb5) bg_sctrl_middle_pane_g7

0x99e8,	// (0x00025ebd) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002c1df) bg_sctrl_middle_pane_g

0x99f0,	// (0x00025ec5) bg_sctrl_middle_pane_g8_copy1

0x99b0,	// (0x00025e85) bg_sctrl_sk_pane_g1

0x99b8,	// (0x00025e8d) bg_sctrl_sk_pane_g2

0x99c0,	// (0x00025e95) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0002bd4c) bg_sctrl_sk_pane_g

0x67bf,	// (0x00022c94) aid_size_touch_scroll_bar

0x99c8,	// (0x00025e9d) bg_sctrl_sk_pane_g4

0x99d0,	// (0x00025ea5) bg_sctrl_sk_pane_g5

0x99d8,	// (0x00025ead) bg_sctrl_sk_pane_g6

0x99e0,	// (0x00025eb5) bg_sctrl_sk_pane_g7

0x99e8,	// (0x00025ebd) bg_sctrl_sk_pane_g8

0x99f0,	// (0x00025ec5) bg_sctrl_sk_pane_g9

0x8f1e,	// (0x000253f3) popup_fep_china_hwr2_fs_candidate_window

0x8f28,	// (0x000253fd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f28,	// (0x000253fd) popup_fep_china_hwr2_fs_control_window

0xc2e0,	// (0x000287b5) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002c1d5) sctrl_sk_top_pane_g

0xd7a1,	// (0x00029c76) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7a1,	// (0x00029c76) aid_fep_china_hwr2_fs_cell

0xd7b4,	// (0x00029c89) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7b4,	// (0x00029c89) bg_popup_fep_shadow_pane_cp4

0xd7cd,	// (0x00029ca2) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7cd,	// (0x00029ca2) bg_popup_fep_shadow_pane_cp5

0xd7df,	// (0x00029cb4) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7df,	// (0x00029cb4) popup_fep_china_hwr2_fs_control_bar_grid

0xd7ef,	// (0x00029cc4) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7f7,	// (0x00029ccc) aid_fep_china_hwr2_fs_candi_cell

0x3634,	// (0x0001fb09) bg_popup_fep_shadow_pane_cp6

0xd801,	// (0x00029cd6) popup_fep_china_hwr2_fs_candidate_grid

0xd80b,	// (0x00029ce0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd80b,	// (0x00029ce0) cell_fep_china_hwr2_fs_funtion_grid

0xc056,	// (0x0002852b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd823,	// (0x00029cf8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd823,	// (0x00029cf8) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd831,	// (0x00029d06) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd831,	// (0x00029d06) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002c1f0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002c1f0) cell_fep_china_hwr2_fs_funtion_grid_g

0xd847,	// (0x00029d1c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd847,	// (0x00029d1c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd85c,	// (0x00029d31) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd85c,	// (0x00029d31) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002c1f5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002c1f5) cell_fep_china_hwr2_fs_funtion_grid_t

0xd878,	// (0x00029d4d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd880,	// (0x00029d55) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd888,	// (0x00029d5d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002c1fa) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd890,	// (0x00029d65) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd890,	// (0x00029d65) cell_fep_china_hwr2_fs_candidate_grid

0xd8af,	// (0x00029d84) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8b7,	// (0x00029d8c) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc056,	// (0x0002852b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc056,	// (0x0002852b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002c01a) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8bf,	// (0x00029d94) cell_fep_china_hwr2_fs_candidate_grid_t1

0x958d,	// (0x00025a62) clock_nsta_pane_cp_24_ParamLimits

0x958d,	// (0x00025a62) clock_nsta_pane_cp_24

0x960d,	// (0x00025ae2) indicator_nsta_pane_cp_24_ParamLimits

0x960d,	// (0x00025ae2) indicator_nsta_pane_cp_24

0xa6d9,	// (0x00026bae) heading_pane_g1

0x0001,

0xf8dc,	// (0x0002bdb1) heading_pane_g

0xb189,	// (0x0002765e) grid_sct_catagory_button_pane

0xb1bb,	// (0x00027690) scroll_pane_cp5_ParamLimits

0xbc9f,	// (0x00028174) button_value_adjust_pane_cp5_ParamLimits

0xbc9f,	// (0x00028174) button_value_adjust_pane_cp5

0xbd84,	// (0x00028259) form2_midp_time_pane_ParamLimits

0xd8cd,	// (0x00029da2) cell_sct_catagory_button_pane_ParamLimits

0xd8cd,	// (0x00029da2) cell_sct_catagory_button_pane

0xc01b,	// (0x000284f0) bg_button_pane_cp01_ParamLimits

0xc01b,	// (0x000284f0) bg_button_pane_cp01

0xc056,	// (0x0002852b) cell_sct_catagory_button_pane_g1

0x9348,	// (0x0002581d) popup_tb_extension_window

0xd8df,	// (0x00029db4) aid_size_cell_ext_ParamLimits

0xd8df,	// (0x00029db4) aid_size_cell_ext

0x6293,	// (0x00022768) bg_tb_trans_pane_cp1_ParamLimits

0x6293,	// (0x00022768) bg_tb_trans_pane_cp1

0xd8ff,	// (0x00029dd4) grid_tb_ext_pane_ParamLimits

0xd8ff,	// (0x00029dd4) grid_tb_ext_pane

0xd92f,	// (0x00029e04) cell_tb_ext_pane_ParamLimits

0xd92f,	// (0x00029e04) cell_tb_ext_pane

0xd946,	// (0x00029e1b) cell_tb_ext_pane_g1_ParamLimits

0xd946,	// (0x00029e1b) cell_tb_ext_pane_g1

0xd963,	// (0x00029e38) cell_tb_ext_pane_t1

0x6293,	// (0x00022768) list_highlight_pane_cp11_ParamLimits

0x6293,	// (0x00022768) list_highlight_pane_cp11

0x5de2,	// (0x000222b7) popup_uni_indicator_window_ParamLimits

0x5de2,	// (0x000222b7) popup_uni_indicator_window

0x7e90,	// (0x00024365) bg_popup_sub_pane_cp14

0xd97e,	// (0x00029e53) list_uniindi_pane

0xd98a,	// (0x00029e5f) uniindi_top_pane

0x6293,	// (0x00022768) bg_uniindi_top_pane

0xd9ab,	// (0x00029e80) uniindi_top_pane_g1

0xd9c1,	// (0x00029e96) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002c201) uniindi_top_pane_g

0xd9eb,	// (0x00029ec0) uniindi_top_pane_t1

0xda17,	// (0x00029eec) list_single_uniindi_pane_ParamLimits

0xda17,	// (0x00029eec) list_single_uniindi_pane

0xc056,	// (0x0002852b) bg_uniindi_top_pane_g1

0xda29,	// (0x00029efe) list_single_uniindi_pane_g1

0xda3c,	// (0x00029f11) list_single_uniindi_pane_t1

0x3634,	// (0x0001fb09) control_bg_pane

0xda61,	// (0x00029f36) bg_sctrl_sk_pane_cp1

0xda6a,	// (0x00029f3f) bg_sctrl_sk_pane_cp2

0xda73,	// (0x00029f48) control_bg_pane_g1

0xda7c,	// (0x00029f51) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002c20a) control_bg_pane_g

0xbac2,	// (0x00027f97) cell_indicator_nsta_pane_g1_ParamLimits

0xbad0,	// (0x00027fa5) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0002bf7e) cell_indicator_nsta_pane_g_ParamLimits

0x56e8,	// (0x00021bbd) form2_midp_time_pane_t1_ParamLimits

0x6601,	// (0x00022ad6) main_idle_act4_pane_ParamLimits

0x6601,	// (0x00022ad6) main_idle_act4_pane

0x9348,	// (0x0002581d) popup_tb_extension_window_ParamLimits

0xd921,	// (0x00029df6) tb_ext_find_pane_ParamLimits

0xd921,	// (0x00029df6) tb_ext_find_pane

0xda85,	// (0x00029f5a) ai_gene_pane_1_cp1

0x8c37,	// (0x0002510c) ai_gene_pane_2_cp1

0xda8d,	// (0x00029f62) list_single_idle_plugin_calendar_pane

0xda96,	// (0x00029f6b) list_single_idle_plugin_notification_pane

0xda9f,	// (0x00029f74) list_single_idle_plugin_player_pane

0xdaa8,	// (0x00029f7d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdaa8,	// (0x00029f7d) list_single_idle_plugin_shortcut_pane

0xdaca,	// (0x00029f9f) main_idle_act4_pane_t1

0xdadc,	// (0x00029fb1) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002c20f) main_idle_act4_pane_t

0xdaee,	// (0x00029fc3) middle_sk_idle_act4_pane_ParamLimits

0xdaee,	// (0x00029fc3) middle_sk_idle_act4_pane

0xdb04,	// (0x00029fd9) popup_clock_digital_analogue_window_cp2

0xdb1e,	// (0x00029ff3) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb1e,	// (0x00029ff3) shortcut_wheel_idle_act4_pane

0xc056,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g1

0xc056,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g2

0xc056,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g3

0xc056,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g4

0xc056,	// (0x0002852b) shortcut_wheel_idle_act4_pane_g5

0xdb32,	// (0x0002a007) shortcut_wheel_idle_act4_pane_g6

0xdb3a,	// (0x0002a00f) shortcut_wheel_idle_act4_pane_g7

0xdb42,	// (0x0002a017) shortcut_wheel_idle_act4_pane_g8

0xdb4a,	// (0x0002a01f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002c214) shortcut_wheel_idle_act4_pane_g

0xc2e0,	// (0x000287b5) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) middle_sk_idle_act4_pane_g1

0xdbae,	// (0x0002a083) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbae,	// (0x0002a083) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002c237) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002c237) middle_sk_idle_act4_pane_g

0xdbba,	// (0x0002a08f) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbba,	// (0x0002a08f) middle_sk_idle_act4_pane_t1

0xdbd7,	// (0x0002a0ac) grid_ai_shortcut_pane_ParamLimits

0xdbd7,	// (0x0002a0ac) grid_ai_shortcut_pane

0xdbf0,	// (0x0002a0c5) list_highlight_pane_cp16_ParamLimits

0xdbf0,	// (0x0002a0c5) list_highlight_pane_cp16

0xdbfd,	// (0x0002a0d2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbfd,	// (0x0002a0d2) list_single_idle_plugin_shortcut_pane_g1

0xdc09,	// (0x0002a0de) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc09,	// (0x0002a0de) list_single_idle_plugin_shortcut_pane_g2

0xdc23,	// (0x0002a0f8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc23,	// (0x0002a0f8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002c23c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002c23c) list_single_idle_plugin_shortcut_pane_g

0xdc36,	// (0x0002a10b) cell_ai_shortcut_pane_ParamLimits

0xdc36,	// (0x0002a10b) cell_ai_shortcut_pane

0xdc59,	// (0x0002a12e) cell_ai_shortcut_pane_g1_ParamLimits

0xdc59,	// (0x0002a12e) cell_ai_shortcut_pane_g1

0xda85,	// (0x00029f5a) ai_gene_pane_1_cp2

0xdc7b,	// (0x0002a150) ai_gene_pane_2_cp2

0xdc83,	// (0x0002a158) list_highlight_pane_cp15

0xdc8c,	// (0x0002a161) list_single_idle_plugin_calendar_pane_g1

0xdc83,	// (0x0002a158) list_highlight_pane_cp17

0xdc94,	// (0x0002a169) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc9c,	// (0x0002a171) list_single_idle_plugin_player_pane_g1

0xb3f0,	// (0x000278c5) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002c243) list_single_idle_plugin_player_pane_g

0xdca4,	// (0x0002a179) list_single_idle_plugin_player_pane_t1

0xdcb2,	// (0x0002a187) list_single_idle_plugin_player_pane_t2

0xdcc0,	// (0x0002a195) list_single_idle_plugin_player_pane_t3

0xdcce,	// (0x0002a1a3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002c248) list_single_idle_plugin_player_pane_t

0xdcdc,	// (0x0002a1b1) wait_bar_pane_cp15

0xdce4,	// (0x0002a1b9) grid_ai_notification_pane

0xb3f0,	// (0x000278c5) list_single_idle_plugin_notification_pane_g1

0xdced,	// (0x0002a1c2) cell_ai_notification_pane_ParamLimits

0xdced,	// (0x0002a1c2) cell_ai_notification_pane

0xdcfa,	// (0x0002a1cf) cell_ai_notification_pane_g1

0xdd02,	// (0x0002a1d7) cell_ai_notification_pane_t1

0xdd10,	// (0x0002a1e5) tb_ext_find_button_pane

0xdd18,	// (0x0002a1ed) tb_ext_find_pane_g1

0xdd20,	// (0x0002a1f5) tb_ext_find_pane_t1

0x8500,	// (0x000249d5) tb_ext_find_button_pane_g1

0xdd2e,	// (0x0002a203) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002c251) tb_ext_find_button_pane_g

0xdaca,	// (0x00029f9f) main_idle_act4_pane_t1_ParamLimits

0xdadc,	// (0x00029fb1) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002c20f) main_idle_act4_pane_t_ParamLimits

0xdb04,	// (0x00029fd9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb12,	// (0x00029fe7) sat_plugin_idle_act4_pane_ParamLimits

0xdb12,	// (0x00029fe7) sat_plugin_idle_act4_pane

0xdd37,	// (0x0002a20c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd37,	// (0x0002a20c) sat_plugin_idle_act4_pane_t1

0xdd4a,	// (0x0002a21f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd4a,	// (0x0002a21f) sat_plugin_idle_act4_pane_t2

0xdd5d,	// (0x0002a232) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd5d,	// (0x0002a232) sat_plugin_idle_act4_pane_t3

0xdd70,	// (0x0002a245) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd70,	// (0x0002a245) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002c256) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002c256) sat_plugin_idle_act4_pane_t

0x5d13,	// (0x000221e8) popup_battery_window_ParamLimits

0x5d13,	// (0x000221e8) popup_battery_window

0x6293,	// (0x00022768) bg_popup_sub_pane_cp25_ParamLimits

0x6293,	// (0x00022768) bg_popup_sub_pane_cp25

0xdd83,	// (0x0002a258) popup_battery_window_g1_ParamLimits

0xdd83,	// (0x0002a258) popup_battery_window_g1

0xdd8f,	// (0x0002a264) popup_battery_window_t1_ParamLimits

0xdd8f,	// (0x0002a264) popup_battery_window_t1

0xdda1,	// (0x0002a276) popup_battery_window_t2_ParamLimits

0xdda1,	// (0x0002a276) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002c25f) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002c25f) popup_battery_window_t

0x8b02,	// (0x00024fd7) midp_canvas_pane_ParamLimits

0x8b79,	// (0x0002504e) midp_keypad_pane_ParamLimits

0x8b79,	// (0x0002504e) midp_keypad_pane

0x8e74,	// (0x00025349) main_midp_pane_ParamLimits

0xbb4c,	// (0x00028021) signal_pane_g2_cp_ParamLimits

0xddbe,	// (0x0002a293) aid_size_cell_midp_keypad_ParamLimits

0xddbe,	// (0x0002a293) aid_size_cell_midp_keypad

0xddd8,	// (0x0002a2ad) midp_keyp_game_grid_pane_ParamLimits

0xddd8,	// (0x0002a2ad) midp_keyp_game_grid_pane

0xddf8,	// (0x0002a2cd) midp_keyp_rocker_pane_ParamLimits

0xddf8,	// (0x0002a2cd) midp_keyp_rocker_pane

0xde27,	// (0x0002a2fc) midp_keyp_sk_left_pane_ParamLimits

0xde27,	// (0x0002a2fc) midp_keyp_sk_left_pane

0xde81,	// (0x0002a356) midp_keyp_sk_right_pane_ParamLimits

0xde81,	// (0x0002a356) midp_keyp_sk_right_pane

0x3634,	// (0x0001fb09) bg_button_pane_cp03

0xdedb,	// (0x0002a3b0) midp_keyp_sk_left_pane_g1

0x3634,	// (0x0001fb09) bg_button_pane_cp04

0xdedb,	// (0x0002a3b0) midp_keyp_sk_right_pane_g1

0xc056,	// (0x0002852b) midp_keyp_rocker_pane_g1

0xdee4,	// (0x0002a3b9) keyp_game_cell_pane_ParamLimits

0xdee4,	// (0x0002a3b9) keyp_game_cell_pane

0x3634,	// (0x0001fb09) bg_button_pane_cp02

0xdef7,	// (0x0002a3cc) keyp_game_cell_pane_g1

0x5d5d,	// (0x00022232) popup_fep_vkb2_window_ParamLimits

0x5d5d,	// (0x00022232) popup_fep_vkb2_window

0x76e6,	// (0x00023bbb) aid_size_cell_vkb2_ParamLimits

0x76e6,	// (0x00023bbb) aid_size_cell_vkb2

0x7732,	// (0x00023c07) popup_fep_vkb2_window_g1_ParamLimits

0x7732,	// (0x00023c07) popup_fep_vkb2_window_g1

0x777a,	// (0x00023c4f) vkb2_area_bottom_pane_ParamLimits

0x777a,	// (0x00023c4f) vkb2_area_bottom_pane

0x77ce,	// (0x00023ca3) vkb2_area_keypad_pane_ParamLimits

0x77ce,	// (0x00023ca3) vkb2_area_keypad_pane

0x7814,	// (0x00023ce9) vkb2_area_top_pane_ParamLimits

0x7814,	// (0x00023ce9) vkb2_area_top_pane

0x788e,	// (0x00023d63) vkb2_top_entry_pane_ParamLimits

0x788e,	// (0x00023d63) vkb2_top_entry_pane

0x78b8,	// (0x00023d8d) vkb2_top_grid_left_pane_ParamLimits

0x78b8,	// (0x00023d8d) vkb2_top_grid_left_pane

0x78d6,	// (0x00023dab) vkb2_top_grid_right_pane_ParamLimits

0x78d6,	// (0x00023dab) vkb2_top_grid_right_pane

0x78f4,	// (0x00023dc9) vkb2_cell_keypad_pane_ParamLimits

0x78f4,	// (0x00023dc9) vkb2_cell_keypad_pane

0x79aa,	// (0x00023e7f) vkb2_area_bottom_grid_pane_ParamLimits

0x79aa,	// (0x00023e7f) vkb2_area_bottom_grid_pane

0x79d0,	// (0x00023ea5) vkb2_area_bottom_pane_g1_ParamLimits

0x79d0,	// (0x00023ea5) vkb2_area_bottom_pane_g1

0x79f4,	// (0x00023ec9) vkb2_area_bottom_pane_g2_ParamLimits

0x79f4,	// (0x00023ec9) vkb2_area_bottom_pane_g2

0x7a22,	// (0x00023ef7) vkb2_area_bottom_pane_g3_ParamLimits

0x7a22,	// (0x00023ef7) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002c264) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002c264) vkb2_area_bottom_pane_g

0x7a83,	// (0x00023f58) vkb2_top_cell_left_pane_ParamLimits

0x7a83,	// (0x00023f58) vkb2_top_cell_left_pane

0xdf08,	// (0x0002a3dd) vkb2_top_entry_pane_g1_ParamLimits

0xdf08,	// (0x0002a3dd) vkb2_top_entry_pane_g1

0xdf16,	// (0x0002a3eb) vkb2_top_entry_pane_t1_ParamLimits

0xdf16,	// (0x0002a3eb) vkb2_top_entry_pane_t1

0xdf2e,	// (0x0002a403) vkb2_top_entry_pane_t2_ParamLimits

0xdf2e,	// (0x0002a403) vkb2_top_entry_pane_t2

0xdf46,	// (0x0002a41b) vkb2_top_entry_pane_t3_ParamLimits

0xdf46,	// (0x0002a41b) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002c26b) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002c26b) vkb2_top_entry_pane_t

0x7ad0,	// (0x00023fa5) vkb2_top_grid_right_pane_g1_ParamLimits

0x7ad0,	// (0x00023fa5) vkb2_top_grid_right_pane_g1

0x7ae6,	// (0x00023fbb) vkb2_top_grid_right_pane_g2_ParamLimits

0x7ae6,	// (0x00023fbb) vkb2_top_grid_right_pane_g2

0x7afe,	// (0x00023fd3) vkb2_top_grid_right_pane_g3_ParamLimits

0x7afe,	// (0x00023fd3) vkb2_top_grid_right_pane_g3

0x7b16,	// (0x00023feb) vkb2_top_grid_right_pane_g4_ParamLimits

0x7b16,	// (0x00023feb) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002c272) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002c272) vkb2_top_grid_right_pane_g

0x7b2c,	// (0x00024001) vkb2_top_cell_left_pane_g1

0x7b43,	// (0x00024018) vkb2_cell_keypad_pane_g1_ParamLimits

0x7b43,	// (0x00024018) vkb2_cell_keypad_pane_g1

0xdf5c,	// (0x0002a431) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf5c,	// (0x0002a431) vkb2_cell_keypad_pane_t1

0x7b67,	// (0x0002403c) vkb2_cell_bottom_grid_pane_ParamLimits

0x7b67,	// (0x0002403c) vkb2_cell_bottom_grid_pane

0x7ba0,	// (0x00024075) vkb2_cell_bottom_grid_pane_g1

0xdb52,	// (0x0002a027) aid_call2_pane_cp02

0xdb5a,	// (0x0002a02f) aid_call_pane_cp02

0xdb62,	// (0x0002a037) clock_digital_number_pane_cp10

0xdb6a,	// (0x0002a03f) clock_digital_number_pane_cp11

0xdb72,	// (0x0002a047) clock_digital_number_pane_cp12

0xdb7a,	// (0x0002a04f) clock_digital_number_pane_cp13

0xdb82,	// (0x0002a057) clock_digital_separator_pane_cp10

0x8500,	// (0x000249d5) popup_clock_digital_analogue_window_cp2_g1

0x8500,	// (0x000249d5) popup_clock_digital_analogue_window_cp2_g2

0xdb8a,	// (0x0002a05f) popup_clock_digital_analogue_window_cp2_g3

0x8500,	// (0x000249d5) popup_clock_digital_analogue_window_cp2_g4

0xdb8a,	// (0x0002a05f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002c227) popup_clock_digital_analogue_window_cp2_g

0xdb92,	// (0x0002a067) popup_clock_digital_analogue_window_cp2_t1

0xdba0,	// (0x0002a075) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002c232) popup_clock_digital_analogue_window_cp2_t

0xc056,	// (0x0002852b) clock_digital_number_pane_cp10_g1

0xc056,	// (0x0002852b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002c01a) clock_digital_number_pane_cp10_g

0xc056,	// (0x0002852b) clock_digital_separator_pane_cp10_g1

0xc056,	// (0x0002852b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002c01a) clock_digital_separator_pane_cp10_g

0xd9cd,	// (0x00029ea2) uniindi_top_pane_g3

0xd9de,	// (0x00029eb3) uniindi_top_pane_g4

0x7964,	// (0x00023e39) vkb2_row_keypad_pane_ParamLimits

0x7964,	// (0x00023e39) vkb2_row_keypad_pane

0x7bbc,	// (0x00024091) vkb2_cell_t_keypad_pane_ParamLimits

0x7bbc,	// (0x00024091) vkb2_cell_t_keypad_pane

0x7bcc,	// (0x000240a1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7bcc,	// (0x000240a1) vkb2_cell_t_keypad_pane_cp08

0x7be1,	// (0x000240b6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7be1,	// (0x000240b6) vkb2_cell_t_keypad_pane_cp09

0x7bf5,	// (0x000240ca) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7bf5,	// (0x000240ca) vkb2_cell_t_keypad_pane_cp01

0x7c06,	// (0x000240db) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7c06,	// (0x000240db) vkb2_cell_t_keypad_pane_cp02

0x7c17,	// (0x000240ec) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7c17,	// (0x000240ec) vkb2_cell_t_keypad_pane_cp03

0x7c28,	// (0x000240fd) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7c28,	// (0x000240fd) vkb2_cell_t_keypad_pane_cp04

0x7c39,	// (0x0002410e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7c39,	// (0x0002410e) vkb2_cell_t_keypad_pane_cp05

0x7c4a,	// (0x0002411f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7c4a,	// (0x0002411f) vkb2_cell_t_keypad_pane_cp06

0x7c5d,	// (0x00024132) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7c5d,	// (0x00024132) vkb2_cell_t_keypad_pane_cp07

0x7c72,	// (0x00024147) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7c72,	// (0x00024147) vkb2_cell_t_keypad_pane_cp10

0xc2e0,	// (0x000287b5) vkb2_cell_t_keypad_pane_g1

0xdf73,	// (0x0002a448) vkb2_cell_t_keypad_pane_t1

0x3634,	// (0x0001fb09) popup_grid_graphic2_window

0xdf85,	// (0x0002a45a) aid_size_cell_graphic2_ParamLimits

0xdf85,	// (0x0002a45a) aid_size_cell_graphic2

0xdfbd,	// (0x0002a492) bg_popup_window_pane_cp21_ParamLimits

0xdfbd,	// (0x0002a492) bg_popup_window_pane_cp21

0xdfcb,	// (0x0002a4a0) graphic2_pages_pane_ParamLimits

0xdfcb,	// (0x0002a4a0) graphic2_pages_pane

0xe011,	// (0x0002a4e6) grid_graphic2_control_pane_ParamLimits

0xe011,	// (0x0002a4e6) grid_graphic2_control_pane

0xe04f,	// (0x0002a524) grid_graphic2_pane_ParamLimits

0xe04f,	// (0x0002a524) grid_graphic2_pane

0xe0c5,	// (0x0002a59a) cell_graphic2_pane

0x3634,	// (0x0001fb09) main_comp_mode_pane

0xd23e,	// (0x00029713) list_ai3_gene_pane_ParamLimits

0xd606,	// (0x00029adb) bg_popup_window_pane_cp19_ParamLimits

0xd612,	// (0x00029ae7) bg_touch_area_indi_pane_ParamLimits

0xd612,	// (0x00029ae7) bg_touch_area_indi_pane

0xd628,	// (0x00029afd) bg_touch_area_indi_pane_cp01_ParamLimits

0xd628,	// (0x00029afd) bg_touch_area_indi_pane_cp01

0xd640,	// (0x00029b15) bg_touch_area_indi_pane_cp02_ParamLimits

0xd640,	// (0x00029b15) bg_touch_area_indi_pane_cp02

0xd65a,	// (0x00029b2f) bg_touch_area_indi_pane_cp03_ParamLimits

0xd65a,	// (0x00029b2f) bg_touch_area_indi_pane_cp03

0xd674,	// (0x00029b49) popup_slider_window_g1_ParamLimits

0xd690,	// (0x00029b65) popup_slider_window_g2_ParamLimits

0xd6ac,	// (0x00029b81) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002c1bc) popup_slider_window_g_ParamLimits

0xd708,	// (0x00029bdd) popup_slider_window_t1_ParamLimits

0xd77c,	// (0x00029c51) small_volume_slider_vertical_pane_ParamLimits

0xe0c5,	// (0x0002a59a) cell_graphic2_pane_ParamLimits

0xe117,	// (0x0002a5ec) bg_button_pane_cp10_ParamLimits

0xe117,	// (0x0002a5ec) bg_button_pane_cp10

0xe12c,	// (0x0002a601) bg_button_pane_cp11_ParamLimits

0xe12c,	// (0x0002a601) bg_button_pane_cp11

0xe141,	// (0x0002a616) graphic2_pages_pane_g1_ParamLimits

0xe141,	// (0x0002a616) graphic2_pages_pane_g1

0xe15c,	// (0x0002a631) graphic2_pages_pane_g2_ParamLimits

0xe15c,	// (0x0002a631) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002c280) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002c280) graphic2_pages_pane_g

0xe174,	// (0x0002a649) graphic2_pages_pane_t1_ParamLimits

0xe174,	// (0x0002a649) graphic2_pages_pane_t1

0xe18a,	// (0x0002a65f) cell_graphic2_control_pane_ParamLimits

0xe18a,	// (0x0002a65f) cell_graphic2_control_pane

0xe1a4,	// (0x0002a679) cell_graphic2_pane_g1_ParamLimits

0xe1a4,	// (0x0002a679) cell_graphic2_pane_g1

0xe1b1,	// (0x0002a686) cell_graphic2_pane_g2_ParamLimits

0xe1b1,	// (0x0002a686) cell_graphic2_pane_g2

0xe1be,	// (0x0002a693) cell_graphic2_pane_g3_ParamLimits

0xe1be,	// (0x0002a693) cell_graphic2_pane_g3

0xe1cb,	// (0x0002a6a0) cell_graphic2_pane_g4_ParamLimits

0xe1cb,	// (0x0002a6a0) cell_graphic2_pane_g4

0xe1d8,	// (0x0002a6ad) cell_graphic2_pane_g5_ParamLimits

0xe1d8,	// (0x0002a6ad) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002c285) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002c285) cell_graphic2_pane_g

0xe1f3,	// (0x0002a6c8) cell_graphic2_pane_t1_ParamLimits

0xe1f3,	// (0x0002a6c8) cell_graphic2_pane_t1

0x9aa2,	// (0x00025f77) grid_highlight_pane_cp11_ParamLimits

0x9aa2,	// (0x00025f77) grid_highlight_pane_cp11

0x6293,	// (0x00022768) bg_button_pane_cp05

0xe21c,	// (0x0002a6f1) cell_graphic2_control_pane_g1

0xc056,	// (0x0002852b) bg_touch_area_indi_pane_g1

0xe244,	// (0x0002a719) aid_cmod_rocker_key_size

0xe24e,	// (0x0002a723) aid_cmode_itu_key_size

0xe258,	// (0x0002a72d) main_cmode_video_pane

0xe262,	// (0x0002a737) main_comp_mode_itu_pane

0xe26e,	// (0x0002a743) main_comp_mode_rocker_pane

0xe27a,	// (0x0002a74f) cell_cmode_rocker_pane_ParamLimits

0xe27a,	// (0x0002a74f) cell_cmode_rocker_pane

0xe28e,	// (0x0002a763) cell_cmode_itu_pane_ParamLimits

0xe28e,	// (0x0002a763) cell_cmode_itu_pane

0x7e90,	// (0x00024365) bg_button_pane_cp06_ParamLimits

0x7e90,	// (0x00024365) bg_button_pane_cp06

0xc2e0,	// (0x000287b5) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) cell_cmode_rocker_pane_g1

0xd823,	// (0x00029cf8) cell_cmode_rocker_pane_g2_ParamLimits

0xd823,	// (0x00029cf8) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002c295) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002c295) cell_cmode_rocker_pane_g

0x3634,	// (0x0001fb09) bg_button_pane_cp07

0xe2a5,	// (0x0002a77a) cell_cmode_itu_pane_g1

0xe2ae,	// (0x0002a783) cell_cmode_itu_pane_t1

0xe2bc,	// (0x0002a791) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002c29a) cell_cmode_itu_pane_t

0xda51,	// (0x00029f26) aid_touch_ctrl_left

0xda59,	// (0x00029f2e) aid_touch_ctrl_right

0x3634,	// (0x0001fb09) compa_mode_pane

0xe2ca,	// (0x0002a79f) aid_cmod_rocker_key_size_cp

0xe2d4,	// (0x0002a7a9) aid_cmode_itu_key_size_cp

0xe2de,	// (0x0002a7b3) compa_mode_pane_g1

0xe2e6,	// (0x0002a7bb) compa_mode_pane_g2

0xe2ee,	// (0x0002a7c3) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002c29f) compa_mode_pane_g

0xe2f6,	// (0x0002a7cb) main_comp_mode_itu_pane_cp

0xe2fe,	// (0x0002a7d3) main_comp_mode_rocker_pane_cp

0xe306,	// (0x0002a7db) cell_cmode_itu_pane_cp_ParamLimits

0xe306,	// (0x0002a7db) cell_cmode_itu_pane_cp

0xe31b,	// (0x0002a7f0) cell_cmode_rocker_pane_cp_ParamLimits

0xe31b,	// (0x0002a7f0) cell_cmode_rocker_pane_cp

0x7e90,	// (0x00024365) bg_button_pane_cp06_cp_ParamLimits

0x7e90,	// (0x00024365) bg_button_pane_cp06_cp

0xc2e0,	// (0x000287b5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e0,	// (0x000287b5) cell_cmode_rocker_pane_g1_cp

0xc056,	// (0x0002852b) cell_cmode_rocker_pane_g2_cp

0x3634,	// (0x0001fb09) bg_button_pane_cp07_cp

0xe32d,	// (0x0002a802) cell_cmode_itu_pane_g1_cp

0xe336,	// (0x0002a80b) cell_cmode_itu_pane_t1_cp

0xe336,	// (0x0002a80b) cell_cmode_itu_pane_t2_cp

0xaf69,	// (0x0002743e) settings_code_pane_cp2

0x5f79,	// (0x0002244e) bg_popup_window_pane_cp3_ParamLimits

0x6481,	// (0x00022956) heading_pane_cp3_ParamLimits

0x648d,	// (0x00022962) listscroll_popup_graphic_pane_ParamLimits

0x7266,	// (0x0002373b) fep_hwr_aid_pane_ParamLimits

0x7657,	// (0x00023b2c) aid_touch_sctrl_top_ParamLimits

0x7664,	// (0x00023b39) sctrl_sk_top_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002c1d5) sctrl_sk_top_pane_g_ParamLimits

0x7671,	// (0x00023b46) sctrl_sk_top_pane_t1_ParamLimits

0x7657,	// (0x00023b2c) aid_touch_sctrl_bottom_ParamLimits

0x7671,	// (0x00023b46) sctrl_sk_bottom_pane_t1_ParamLimits

0xd997,	// (0x00029e6c) aid_area_touch_clock

0x7856,	// (0x00023d2b) aid_vkb2_area_top_pane_cell_ParamLimits

0x7856,	// (0x00023d2b) aid_vkb2_area_top_pane_cell

0x7986,	// (0x00023e5b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7986,	// (0x00023e5b) aid_vkb2_area_bottom_pane_cell

0xdf00,	// (0x0002a3d5) popup_char_count_window

0xe344,	// (0x0002a819) popup_char_count_window_g1

0xe34d,	// (0x0002a822) popup_char_count_window_g2

0xe356,	// (0x0002a82b) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002c2a6) popup_char_count_window_g

0xe35f,	// (0x0002a834) popup_char_count_window_t1

0x7710,	// (0x00023be5) popup_fep_char_preview_window_ParamLimits

0x7710,	// (0x00023be5) popup_fep_char_preview_window

0x7874,	// (0x00023d49) vkb2_top_candi_pane_ParamLimits

0x7874,	// (0x00023d49) vkb2_top_candi_pane

0xe36d,	// (0x0002a842) cell_vkb2_top_candi_pane_ParamLimits

0xe36d,	// (0x0002a842) cell_vkb2_top_candi_pane

0xa056,	// (0x0002652b) bg_popup_fep_char_preview_window_ParamLimits

0xa056,	// (0x0002652b) bg_popup_fep_char_preview_window

0x7c87,	// (0x0002415c) popup_fep_char_preview_window_t1_ParamLimits

0x7c87,	// (0x0002415c) popup_fep_char_preview_window_t1

0xe3be,	// (0x0002a893) bg_popup_fep_char_preview_window_g1

0xe3c6,	// (0x0002a89b) bg_popup_fep_char_preview_window_g2

0xe3ce,	// (0x0002a8a3) bg_popup_fep_char_preview_window_g3

0xe3d6,	// (0x0002a8ab) bg_popup_fep_char_preview_window_g4

0xe3de,	// (0x0002a8b3) bg_popup_fep_char_preview_window_g5

0x7cc1,	// (0x00024196) bg_popup_fep_char_preview_window_g6

0xe3e6,	// (0x0002a8bb) bg_popup_fep_char_preview_window_g7

0xe3ee,	// (0x0002a8c3) bg_popup_fep_char_preview_window_g8

0xe3f6,	// (0x0002a8cb) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002c2ad) bg_popup_fep_char_preview_window_g

0xc2e0,	// (0x000287b5) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) cell_vkb2_top_candi_pane_g1

0xc621,	// (0x00028af6) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc621,	// (0x00028af6) cell_vkb2_top_candi_pane_g2

0xc642,	// (0x00028b17) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc642,	// (0x00028b17) cell_vkb2_top_candi_pane_g3

0x7cc9,	// (0x0002419e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7cc9,	// (0x0002419e) cell_vkb2_top_candi_pane_g4

0xe3fe,	// (0x0002a8d3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3fe,	// (0x0002a8d3) cell_vkb2_top_candi_pane_g5

0xd823,	// (0x00029cf8) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd823,	// (0x00029cf8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002c2c0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002c2c0) cell_vkb2_top_candi_pane_g

0x7cea,	// (0x000241bf) cell_vkb2_top_candi_pane_t1

0x7116,	// (0x000235eb) aid_size_touch_slider_mark_ParamLimits

0x7116,	// (0x000235eb) aid_size_touch_slider_mark

0xe001,	// (0x0002a4d6) grid_graphic2_catg_pane_ParamLimits

0xe001,	// (0x0002a4d6) grid_graphic2_catg_pane

0xe09f,	// (0x0002a574) popup_grid_graphic2_window_t1_ParamLimits

0xe09f,	// (0x0002a574) popup_grid_graphic2_window_t1

0xe0b1,	// (0x0002a586) popup_grid_graphic2_window_t2_ParamLimits

0xe0b1,	// (0x0002a586) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002c27b) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002c27b) popup_grid_graphic2_window_t

0x6293,	// (0x00022768) bg_button_pane_cp05_ParamLimits

0xe21c,	// (0x0002a6f1) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0002a8f4) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0002a8f4) cell_graphic2_catg_pane

0x3634,	// (0x0001fb09) bg_button_pane_cp12

0xe431,	// (0x0002a906) cell_graphic2_catg_pane_g1

0xd963,	// (0x00029e38) cell_tb_ext_pane_t1_ParamLimits

0x7aa3,	// (0x00023f78) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7aa3,	// (0x00023f78) vkb2_top_cell_right_narrow_pane

0x7abb,	// (0x00023f90) vkb2_top_cell_right_wide_pane_ParamLimits

0x7abb,	// (0x00023f90) vkb2_top_cell_right_wide_pane

0x0a7a,	// (0x0001cf4f) bg_vkb2_func_pane_ParamLimits

0x0a7a,	// (0x0001cf4f) bg_vkb2_func_pane

0x7b2c,	// (0x00024001) vkb2_top_cell_left_pane_g1_ParamLimits

0x0a7a,	// (0x0001cf4f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0a7a,	// (0x0001cf4f) bg_vkb2_fuc_pane_cp03

0x7ba0,	// (0x00024075) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99b8,	// (0x00025e8d) bg_vkb2_func_pane_g1

0x99c0,	// (0x00025e95) bg_vkb2_func_pane_g2

0x99d0,	// (0x00025ea5) bg_vkb2_func_pane_g3

0x99c8,	// (0x00025e9d) bg_vkb2_func_pane_g4

0x99d8,	// (0x00025ead) bg_vkb2_func_pane_g5

0x99e0,	// (0x00025eb5) bg_vkb2_func_pane_g6

0x99e8,	// (0x00025ebd) bg_vkb2_func_pane_g7

0x99f0,	// (0x00025ec5) bg_vkb2_func_pane_g8

0x99b0,	// (0x00025e85) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002c2cd) bg_vkb2_func_pane_g

0x0a7a,	// (0x0001cf4f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0a7a,	// (0x0001cf4f) bg_vkb2_fuc_pane_cp01

0x7b2c,	// (0x00024001) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7b2c,	// (0x00024001) vkb2_top_cell_right_wide_pane_g1

0x0a7a,	// (0x0001cf4f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0a7a,	// (0x0001cf4f) bg_vkb2_fuc_pane_cp02

0x7ba0,	// (0x00024075) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7ba0,	// (0x00024075) vkb2_top_cell_right_narrow_pane_g1

0xd584,	// (0x00029a59) aid_touch_area_decrease_ParamLimits

0xd584,	// (0x00029a59) aid_touch_area_decrease

0xd5a8,	// (0x00029a7d) aid_touch_area_increase_ParamLimits

0xd5a8,	// (0x00029a7d) aid_touch_area_increase

0xd5b4,	// (0x00029a89) aid_touch_area_mute_ParamLimits

0xd5b4,	// (0x00029a89) aid_touch_area_mute

0xd5d8,	// (0x00029aad) aid_touch_area_slider_ParamLimits

0xd5d8,	// (0x00029aad) aid_touch_area_slider

0xd6c8,	// (0x00029b9d) popup_slider_window_g4_ParamLimits

0xd6c8,	// (0x00029b9d) popup_slider_window_g4

0xd6d4,	// (0x00029ba9) popup_slider_window_g5_ParamLimits

0xd6d4,	// (0x00029ba9) popup_slider_window_g5

0xd6f6,	// (0x00029bcb) popup_slider_window_g6_ParamLimits

0xd6f6,	// (0x00029bcb) popup_slider_window_g6

0xd736,	// (0x00029c0b) popup_slider_window_t2_ParamLimits

0xd736,	// (0x00029c0b) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002c1c9) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002c1c9) popup_slider_window_t

0xd74e,	// (0x00029c23) slider_pane_ParamLimits

0xd74e,	// (0x00029c23) slider_pane

0xe43a,	// (0x0002a90f) slider_pane_g1_ParamLimits

0xe43a,	// (0x0002a90f) slider_pane_g1

0xe44e,	// (0x0002a923) slider_pane_g2_ParamLimits

0xe44e,	// (0x0002a923) slider_pane_g2

0xe464,	// (0x0002a939) slider_pane_g3_ParamLimits

0xe464,	// (0x0002a939) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002c2e0) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002c2e0) slider_pane_g

0x93aa,	// (0x0002587f) popup_tb_float_extension_window_ParamLimits

0x93aa,	// (0x0002587f) popup_tb_float_extension_window

0xe490,	// (0x0002a965) aid_size_cell_tb_float_ext

0x3634,	// (0x0001fb09) bg_popup_sub_window_cp28

0xe49c,	// (0x0002a971) grid_tb_float_ext_pane

0xe4a8,	// (0x0002a97d) cell_tb_float_ext_pane_ParamLimits

0xe4a8,	// (0x0002a97d) cell_tb_float_ext_pane

0xe4c4,	// (0x0002a999) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0002a9a2) grid_highlight_pane_cp12

0x739f,	// (0x00023874) cell_last_hwr_side_pane_ParamLimits

0x739f,	// (0x00023874) cell_last_hwr_side_pane

0xc056,	// (0x0002852b) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0002a9ab) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002c2e9) cell_last_hwr_side_pane_g

0x7a52,	// (0x00023f27) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7a52,	// (0x00023f27) vkb2_area_bottom_space_btn_pane

0xc2e0,	// (0x000287b5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf73,	// (0x0002a448) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7cea,	// (0x000241bf) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7d08,	// (0x000241dd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7d08,	// (0x000241dd) vkb2_area_bottom_space_btn_pane_g1

0x7d42,	// (0x00024217) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7d42,	// (0x00024217) vkb2_area_bottom_space_btn_pane_g2

0x7d78,	// (0x0002424d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d78,	// (0x0002424d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002c2ee) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002c2ee) vkb2_area_bottom_space_btn_pane_g

0x730f,	// (0x000237e4) cel_fep_hwr_func_pane_ParamLimits

0x730f,	// (0x000237e4) cel_fep_hwr_func_pane

0x734b,	// (0x00023820) cell_hwr_side_button_pane_ParamLimits

0x734b,	// (0x00023820) cell_hwr_side_button_pane

0xd997,	// (0x00029e6c) aid_area_touch_clock_ParamLimits

0x6293,	// (0x00022768) bg_uniindi_top_pane_ParamLimits

0xd9ab,	// (0x00029e80) uniindi_top_pane_g1_ParamLimits

0xd9c1,	// (0x00029e96) uniindi_top_pane_g2_ParamLimits

0xd9cd,	// (0x00029ea2) uniindi_top_pane_g3_ParamLimits

0xd9de,	// (0x00029eb3) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002c201) uniindi_top_pane_g_ParamLimits

0xd9eb,	// (0x00029ec0) uniindi_top_pane_t1_ParamLimits

0x6293,	// (0x00022768) bg_vkb2_func_pane_cp01_ParamLimits

0x6293,	// (0x00022768) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0002a9b4) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0002a9b4) cel_fep_hwr_func_pane_g1

0x6293,	// (0x00022768) bg_vkb2_func_pane_cp02_ParamLimits

0x6293,	// (0x00022768) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0002a9b4) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0002a9b4) cell_hwr_side_button_pane_g1

0x9831,	// (0x00025d06) status_pane_g4_ParamLimits

0x9831,	// (0x00025d06) status_pane_g4

0x984b,	// (0x00025d20) status_pane_t1

0xbdf2,	// (0x000282c7) form2_midp_gauge_slider_cont_pane

0xbdfa,	// (0x000282cf) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe0c,	// (0x000282e1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe1e,	// (0x000282f3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0002bfcd) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe30,	// (0x00028305) form2_midp_slider_pane_ParamLimits

0x76d8,	// (0x00023bad) aid_size_cell_func_vkb2_ParamLimits

0x76d8,	// (0x00023bad) aid_size_cell_func_vkb2

0xe47c,	// (0x0002a951) slider_pane_g4_ParamLimits

0xe47c,	// (0x0002a951) slider_pane_g4

0x7dc2,	// (0x00024297) form2_midp_gauge_slider_pane_t2_cp01

0x7dd0,	// (0x000242a5) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7dd0,	// (0x000242a5) form2_midp_gauge_slider_pane_t3_cp01

0x7ded,	// (0x000242c2) form2_midp_slider_pane_cp01

0x3634,	// (0x0001fb09) navi_smil_pane

0xe518,	// (0x0002a9ed) navi_smil_pane_g1

0xe520,	// (0x0002a9f5) navi_smil_pane_t1

0xe4ed,	// (0x0002a9c2) form2_midp_slider_pane_g1

0xe4f6,	// (0x0002a9cb) form2_midp_slider_pane_g2

0xe4fe,	// (0x0002a9d3) form2_midp_slider_pane_g3

0xe4ed,	// (0x0002a9c2) form2_midp_slider_pane_g4

0xe506,	// (0x0002a9db) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002c2f7) form2_midp_slider_pane_g

0x7db2,	// (0x00024287) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7db2,	// (0x00024287) vkb2_area_bottom_space_btn_pane_g4

0x9649,	// (0x00025b1e) lc0_navi_pane_ParamLimits

0x9649,	// (0x00025b1e) lc0_navi_pane

0x96c5,	// (0x00025b9a) lc0_stat_indi_pane_ParamLimits

0x96c5,	// (0x00025b9a) lc0_stat_indi_pane

0x96dc,	// (0x00025bb1) ls0_title_pane_ParamLimits

0x96dc,	// (0x00025bb1) ls0_title_pane

0x7e90,	// (0x00024365) bg_popup_sub_pane_cp14_ParamLimits

0xd97e,	// (0x00029e53) list_uniindi_pane_ParamLimits

0xd98a,	// (0x00029e5f) uniindi_top_pane_ParamLimits

0xda29,	// (0x00029efe) list_single_uniindi_pane_g1_ParamLimits

0xda3c,	// (0x00029f11) list_single_uniindi_pane_t1_ParamLimits

0x7df6,	// (0x000242cb) lc0_stat_clock_pane_ParamLimits

0x7df6,	// (0x000242cb) lc0_stat_clock_pane

0xe52e,	// (0x0002aa03) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0002aa03) lc0_stat_indi_pane_g1

0xe53b,	// (0x0002aa10) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0002aa10) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002c302) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002c302) lc0_stat_indi_pane_g

0x7e03,	// (0x000242d8) lc0_uni_indicator_pane_ParamLimits

0x7e03,	// (0x000242d8) lc0_uni_indicator_pane

0xe548,	// (0x0002aa1d) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0002aa1d) ls0_title_pane_g1

0xe55c,	// (0x0002aa31) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0002aa31) ls0_title_pane_t1

0x7e10,	// (0x000242e5) lc0_uni_indicator_pane_g1_ParamLimits

0x7e10,	// (0x000242e5) lc0_uni_indicator_pane_g1

0xe592,	// (0x0002aa67) lc0_stat_clock_pane_t1

0x3634,	// (0x0001fb09) main_ai5_pane

0xe5a0,	// (0x0002aa75) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0002aa75) ai5_sk_pane

0xe5ad,	// (0x0002aa82) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0002aa82) cell_ai5_widget_pane

0xe623,	// (0x0002aaf8) aid_size_cell_widget_grid

0xe637,	// (0x0002ab0c) bg_ai5_widget_pane_ParamLimits

0xe637,	// (0x0002ab0c) bg_ai5_widget_pane

0xe65f,	// (0x0002ab34) cell_ai5_widget_pane_g2

0xe66f,	// (0x0002ab44) cell_ai5_widget_pane_g3

0xe68e,	// (0x0002ab63) cell_ai5_widget_pane_g4

0xe69a,	// (0x0002ab6f) cell_ai5_widget_pane_g5

0xe6a6,	// (0x0002ab7b) cell_ai5_widget_pane_g6

0xe6b4,	// (0x0002ab89) cell_ai5_widget_pane_g7

0xe6fc,	// (0x0002abd1) cell_ai5_widget_pane_t1_ParamLimits

0xe6fc,	// (0x0002abd1) cell_ai5_widget_pane_t1

0xe719,	// (0x0002abee) cell_ai5_widget_pane_t2_ParamLimits

0xe719,	// (0x0002abee) cell_ai5_widget_pane_t2

0xe731,	// (0x0002ac06) cell_ai5_widget_pane_t3_ParamLimits

0xe731,	// (0x0002ac06) cell_ai5_widget_pane_t3

0xe749,	// (0x0002ac1e) cell_ai5_widget_pane_t4_ParamLimits

0xe749,	// (0x0002ac1e) cell_ai5_widget_pane_t4

0xe763,	// (0x0002ac38) cell_ai5_widget_pane_t5_ParamLimits

0xe763,	// (0x0002ac38) cell_ai5_widget_pane_t5

0xe782,	// (0x0002ac57) cell_ai5_widget_pane_t6_ParamLimits

0xe782,	// (0x0002ac57) cell_ai5_widget_pane_t6

0xe794,	// (0x0002ac69) cell_ai5_widget_pane_t7_ParamLimits

0xe794,	// (0x0002ac69) cell_ai5_widget_pane_t7

0xe7ad,	// (0x0002ac82) cell_ai5_widget_pane_t8_ParamLimits

0xe7ad,	// (0x0002ac82) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002c31c) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002c31c) cell_ai5_widget_pane_t

0xe7f9,	// (0x0002acce) grid_ai5_widget_pane

0x7e90,	// (0x00024365) highlight_cell_ai5_widget_pane_ParamLimits

0x7e90,	// (0x00024365) highlight_cell_ai5_widget_pane

0xe810,	// (0x0002ace5) ai5_sk_left_pane

0xe81a,	// (0x0002acef) ai5_sk_middle_pane

0xe824,	// (0x0002acf9) ai5_sk_right_pane

0xe82e,	// (0x0002ad03) bg_ai5_widget_pane_g1_ParamLimits

0xe82e,	// (0x0002ad03) bg_ai5_widget_pane_g1

0xe83a,	// (0x0002ad0f) bg_ai5_widget_pane_g2_ParamLimits

0xe83a,	// (0x0002ad0f) bg_ai5_widget_pane_g2

0xe846,	// (0x0002ad1b) bg_ai5_widget_pane_g3_ParamLimits

0xe846,	// (0x0002ad1b) bg_ai5_widget_pane_g3

0xe852,	// (0x0002ad27) bg_ai5_widget_pane_g4_ParamLimits

0xe852,	// (0x0002ad27) bg_ai5_widget_pane_g4

0xe85e,	// (0x0002ad33) bg_ai5_widget_pane_g5_ParamLimits

0xe85e,	// (0x0002ad33) bg_ai5_widget_pane_g5

0xe86a,	// (0x0002ad3f) bg_ai5_widget_pane_g6_ParamLimits

0xe86a,	// (0x0002ad3f) bg_ai5_widget_pane_g6

0xe876,	// (0x0002ad4b) bg_ai5_widget_pane_g7_ParamLimits

0xe876,	// (0x0002ad4b) bg_ai5_widget_pane_g7

0xe882,	// (0x0002ad57) bg_ai5_widget_pane_g8_ParamLimits

0xe882,	// (0x0002ad57) bg_ai5_widget_pane_g8

0xe88e,	// (0x0002ad63) bg_ai5_widget_pane_g9_ParamLimits

0xe88e,	// (0x0002ad63) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002c331) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002c331) bg_ai5_widget_pane_g

0xe8b5,	// (0x0002ad8a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b5,	// (0x0002ad8a) cell_shortcut_ai5_widget_pane

0x60d5,	// (0x000225aa) bg_cell_shortcut_ai5_widget_pane

0xe8c7,	// (0x0002ad9c) cell_grid_ai5_widget_pane_g1

0xe8d0,	// (0x0002ada5) highlight_cell_shortcut_ai5_widget_pane

0x99c0,	// (0x00025e95) ai5_sk_left_pane_g1

0xe8d8,	// (0x0002adad) ai5_sk_left_pane_g2

0xe8e0,	// (0x0002adb5) ai5_sk_left_pane_g3

0xe8e8,	// (0x0002adbd) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002c344) ai5_sk_left_pane_g

0xe8f0,	// (0x0002adc5) ai5_sk_left_pane_t1

0x99b8,	// (0x00025e8d) ai5_sk_right_pane_g1

0xe8fe,	// (0x0002add3) ai5_sk_right_pane_g2

0xe906,	// (0x0002addb) ai5_sk_right_pane_g3

0xe90e,	// (0x0002ade3) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002c34d) ai5_sk_right_pane_g

0xe916,	// (0x0002adeb) ai5_sk_right_pane_t1

0x99b8,	// (0x00025e8d) ai5_sk_middle_pane_g1

0x99c0,	// (0x00025e95) ai5_sk_middle_pane_g2

0x99d8,	// (0x00025ead) ai5_sk_middle_pane_g3

0xe906,	// (0x0002addb) ai5_sk_middle_pane_g4

0xe8e0,	// (0x0002adb5) ai5_sk_middle_pane_g5

0xe924,	// (0x0002adf9) ai5_sk_middle_pane_g6

0xe92c,	// (0x0002ae01) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002c356) ai5_sk_middle_pane_g

0x94cb,	// (0x000259a0) aid_touch_area_size_lc0_ParamLimits

0x94cb,	// (0x000259a0) aid_touch_area_size_lc0

0x74ae,	// (0x00023983) cell_hwr_candidate_pane_t1_ParamLimits

0x94e9,	// (0x000259be) aid_touch_navi_pane

0x97db,	// (0x00025cb0) status_dt_navi_pane_ParamLimits

0x97db,	// (0x00025cb0) status_dt_navi_pane

0x97e8,	// (0x00025cbd) status_dt_sta_pane_ParamLimits

0x97e8,	// (0x00025cbd) status_dt_sta_pane

0xe934,	// (0x0002ae09) dt_sta_controll_pane

0xe941,	// (0x0002ae16) dt_sta_indi_pane

0xe952,	// (0x0002ae27) dt_sta_title_pane

0x6293,	// (0x00022768) bg_dt_sta_indi_pane_ParamLimits

0x6293,	// (0x00022768) bg_dt_sta_indi_pane

0xe965,	// (0x0002ae3a) dt_sta_battery_pane

0xe96d,	// (0x0002ae42) dt_sta_indi_pane_g1

0xe976,	// (0x0002ae4b) dt_sta_indi_pane_g2

0xe97f,	// (0x0002ae54) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002c365) dt_sta_indi_pane_g

0xe988,	// (0x0002ae5d) dt_sta_signal_pane

0x7e90,	// (0x00024365) bg_dt_sta_title_pane_ParamLimits

0x7e90,	// (0x00024365) bg_dt_sta_title_pane

0xe991,	// (0x0002ae66) dt_sta_title_pane_g1

0xe999,	// (0x0002ae6e) dt_sta_title_pane_t1_ParamLimits

0xe999,	// (0x0002ae6e) dt_sta_title_pane_t1

0x3634,	// (0x0001fb09) bg_dt_sta_control_pane

0xe9ae,	// (0x0002ae83) dt_sta_controll_pane_g1

0xe9b7,	// (0x0002ae8c) bg_dt_sta_title_pane_g1

0xe9c0,	// (0x0002ae95) bg_dt_sta_title_pane_g2

0xe9c9,	// (0x0002ae9e) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002c36c) bg_dt_sta_title_pane_g

0xc056,	// (0x0002852b) bg_dt_sta_indi_pane_g1

0xe9d2,	// (0x0002aea7) dt_sta_signal_pane_g1

0xe9da,	// (0x0002aeaf) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002c373) dt_sta_signal_pane_g

0xe9e2,	// (0x0002aeb7) dt_sta_battery_pane_g1

0xe9eb,	// (0x0002aec0) dt_sta_battery_pane_t1

0xc056,	// (0x0002852b) bg_dt_sta_control_pane_g1

0x85ec,	// (0x00024ac1) fep_china_uni_eep_pane

0x85f4,	// (0x00024ac9) fep_china_uni_entry_pane_ParamLimits

0x8604,	// (0x00024ad9) popup_fep_china_uni_window_g1_ParamLimits

0x8614,	// (0x00024ae9) popup_fep_china_uni_window_g2_ParamLimits

0x8614,	// (0x00024ae9) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002bc0a) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002bc0a) popup_fep_china_uni_window_g

0xe9fa,	// (0x0002aecf) fep_china_uni_eep_pane_g1

0xea02,	// (0x0002aed7) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0002a9e4) aid_touch_area_size_smil_player

0x9641,	// (0x00025b16) lc0_clock_pane

0x983f,	// (0x00025d14) status_pane_g5_ParamLimits

0x983f,	// (0x00025d14) status_pane_g5

0x902f,	// (0x00025504) popup_keymap_window

0x97fd,	// (0x00025cd2) status_icon_pane

0xe66f,	// (0x0002ab44) cell_ai5_widget_pane_g3_ParamLimits

0xe68e,	// (0x0002ab63) cell_ai5_widget_pane_g4_ParamLimits

0xe69a,	// (0x0002ab6f) cell_ai5_widget_pane_g5_ParamLimits

0xe6c0,	// (0x0002ab95) cell_ai5_widget_pane_g8_ParamLimits

0xe6c0,	// (0x0002ab95) cell_ai5_widget_pane_g8

0xe6d4,	// (0x0002aba9) cell_ai5_widget_pane_g9_ParamLimits

0xe6d4,	// (0x0002aba9) cell_ai5_widget_pane_g9

0xe6e8,	// (0x0002abbd) cell_ai5_widget_pane_g10_ParamLimits

0xe6e8,	// (0x0002abbd) cell_ai5_widget_pane_g10

0xea11,	// (0x0002aee6) status_icon_pane_g1

0x3634,	// (0x0001fb09) bg_popup_sub_pane_cp13

0xea19,	// (0x0002aeee) popup_keymap_window_t1

0x8dc9,	// (0x0002529e) control_pane_g6_ParamLimits

0x8dc9,	// (0x0002529e) control_pane_g6

0x8dd6,	// (0x000252ab) control_pane_g7_ParamLimits

0x8dd6,	// (0x000252ab) control_pane_g7

0x8de3,	// (0x000252b8) control_pane_g8_ParamLimits

0x8de3,	// (0x000252b8) control_pane_g8

0xe934,	// (0x0002ae09) dt_sta_controll_pane_ParamLimits

0xe941,	// (0x0002ae16) dt_sta_indi_pane_ParamLimits

0xe952,	// (0x0002ae27) dt_sta_title_pane_ParamLimits

0x67c8,	// (0x00022c9d) aid_size_touch_scroll_bar_cale

0x5d2b,	// (0x00022200) popup_discreet_window_ParamLimits

0x5d2b,	// (0x00022200) popup_discreet_window

0x5db9,	// (0x0002228e) popup_sk_window

0xa056,	// (0x0002652b) bg_popup_sub_pane_cp28_ParamLimits

0xa056,	// (0x0002652b) bg_popup_sub_pane_cp28

0xea27,	// (0x0002aefc) popup_discreet_window_g1_ParamLimits

0xea27,	// (0x0002aefc) popup_discreet_window_g1

0xea47,	// (0x0002af1c) popup_discreet_window_t1_ParamLimits

0xea47,	// (0x0002af1c) popup_discreet_window_t1

0xea65,	// (0x0002af3a) popup_discreet_window_t2_ParamLimits

0xea65,	// (0x0002af3a) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002c378) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002c378) popup_discreet_window_t

0x7e23,	// (0x000242f8) popup_sk_window_g1

0x7e2d,	// (0x00024302) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002c37f) popup_sk_window_g

0xeab7,	// (0x0002af8c) popup_sk_window_t1

0xeac5,	// (0x0002af9a) popup_sk_window_t1_copy1

0xe65f,	// (0x0002ab34) cell_ai5_widget_pane_g2_ParamLimits

0xe7bf,	// (0x0002ac94) cell_ai5_widget_pane_t9_ParamLimits

0xe7bf,	// (0x0002ac94) cell_ai5_widget_pane_t9

0x3634,	// (0x0001fb09) main_fep_fshwr2_pane

0xead3,	// (0x0002afa8) aid_fshwr2_btn_pane

0xeadb,	// (0x0002afb0) aid_fshwr2_syb_pane

0xeae3,	// (0x0002afb8) aid_fshwr2_txt_pane

0xeaeb,	// (0x0002afc0) fshwr2_func_candi_pane

0xeaf5,	// (0x0002afca) fshwr2_hwr_syb_pane

0xeaff,	// (0x0002afd4) fshwr2_icf_pane

0x3634,	// (0x0001fb09) fshwr2_icf_bg_pane

0xeb21,	// (0x0002aff6) fshwr2_icf_pane_t1_ParamLimits

0xeb21,	// (0x0002aff6) fshwr2_icf_pane_t1

0xc056,	// (0x0002852b) fshwr2_func_candi_pane_g1

0xeb38,	// (0x0002b00d) fshwr2_func_candi_row_pane_ParamLimits

0xeb38,	// (0x0002b00d) fshwr2_func_candi_row_pane

0xeb49,	// (0x0002b01e) cell_fshwr2_syb_pane_ParamLimits

0xeb49,	// (0x0002b01e) cell_fshwr2_syb_pane

0xc2e0,	// (0x000287b5) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) fshwr2_hwr_syb_pane_g1

0x3634,	// (0x0001fb09) bg_popup_call_pane_cp01

0xeb63,	// (0x0002b038) fshwr2_func_candi_cell_pane_ParamLimits

0xeb63,	// (0x0002b038) fshwr2_func_candi_cell_pane

0xeb95,	// (0x0002b06a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb95,	// (0x0002b06a) fshwr2_func_candi_cell_bg_pane

0xebaf,	// (0x0002b084) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaf,	// (0x0002b084) fshwr2_func_candi_cell_pane_g1

0xebcf,	// (0x0002b0a4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebcf,	// (0x0002b0a4) fshwr2_func_candi_cell_pane_t1

0x3634,	// (0x0001fb09) bg_button_pane_cp08

0x8aee,	// (0x00024fc3) cell_fshwr2_syb_bg_pane

0xebe2,	// (0x0002b0b7) cell_fshwr2_syb_bg_pane_g1

0xebea,	// (0x0002b0bf) cell_fshwr2_syb_bg_pane_t1

0x7e90,	// (0x00024365) main_tmo_pane

0xab80,	// (0x00027055) uni_indicator_pane_g1_ParamLimits

0xab95,	// (0x0002706a) uni_indicator_pane_g2_ParamLimits

0xabab,	// (0x00027080) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x00027096) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x00027096) uni_indicator_pane_g4

0xabd5,	// (0x000270aa) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x000270aa) uni_indicator_pane_g5

0xabe9,	// (0x000270be) uni_indicator_pane_g6_ParamLimits

0xabe9,	// (0x000270be) uni_indicator_pane_g6

0xf932,	// (0x0002be07) uni_indicator_pane_g_ParamLimits

0xd554,	// (0x00029a29) popup_tmo_note_window_ParamLimits

0xd554,	// (0x00029a29) popup_tmo_note_window

0x3634,	// (0x0001fb09) fshwr2_bg_pane

0xebc0,	// (0x0002b095) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc0,	// (0x0002b095) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002c384) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002c384) fshwr2_func_candi_cell_pane_g

0xc056,	// (0x0002852b) bg_popup_window_pane_cp01

0xebf9,	// (0x0002b0ce) bg_popup_window_pane_g1_cp01

0xec02,	// (0x0002b0d7) bg_popup_window_pane_cp22_ParamLimits

0xec02,	// (0x0002b0d7) bg_popup_window_pane_cp22

0xec10,	// (0x0002b0e5) listscroll_tmo_link_pane_ParamLimits

0xec10,	// (0x0002b0e5) listscroll_tmo_link_pane

0xec50,	// (0x0002b125) popup_tmo_note_window_g1_ParamLimits

0xec50,	// (0x0002b125) popup_tmo_note_window_g1

0xec5d,	// (0x0002b132) tmo_note_info_pane_ParamLimits

0xec5d,	// (0x0002b132) tmo_note_info_pane

0xec77,	// (0x0002b14c) list_tmo_note_info_pane_g1_ParamLimits

0xec77,	// (0x0002b14c) list_tmo_note_info_pane_g1

0xec8e,	// (0x0002b163) list_tmo_note_info_pane_g2_ParamLimits

0xec8e,	// (0x0002b163) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002c389) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002c389) list_tmo_note_info_pane_g

0xecaa,	// (0x0002b17f) list_tmo_note_info_text_pane_ParamLimits

0xecaa,	// (0x0002b17f) list_tmo_note_info_text_pane

0xed2f,	// (0x0002b204) list_tmo_link_pane

0xed3c,	// (0x0002b211) scroll_pane_cp20

0xed49,	// (0x0002b21e) list_single_tmo_link_pane_ParamLimits

0xed49,	// (0x0002b21e) list_single_tmo_link_pane

0xed59,	// (0x0002b22e) list_single_tmo_link_pane_t1

0xed67,	// (0x0002b23c) list_tmo_note_info_text_pane_t1_ParamLimits

0xed67,	// (0x0002b23c) list_tmo_note_info_text_pane_t1

0x7f56,	// (0x0002442b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f56,	// (0x0002442b) aid_size_touch_scroll_bar_cp01

0x50fa,	// (0x000215cf) aid_size_touch_slider_marker

0x5da1,	// (0x00022276) popup_settings_window_ParamLimits

0x5da1,	// (0x00022276) popup_settings_window

0x52a5,	// (0x0002177a) popup_candi_list_indi_window

0x94e9,	// (0x000259be) aid_touch_navi_pane_ParamLimits

0x762b,	// (0x00023b00) rs_clock_indi_pane

0x7634,	// (0x00023b09) sctrl_sk_bottom_pane_ParamLimits

0x7645,	// (0x00023b1a) sctrl_sk_top_pane_ParamLimits

0x772a,	// (0x00023bff) popup_fep_tooltip_window

0xe623,	// (0x0002aaf8) aid_size_cell_widget_grid_ParamLimits

0xe653,	// (0x0002ab28) cell_ai5_widget_pane_g1_ParamLimits

0xe653,	// (0x0002ab28) cell_ai5_widget_pane_g1

0xe6a6,	// (0x0002ab7b) cell_ai5_widget_pane_g6_ParamLimits

0xe6b4,	// (0x0002ab89) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002c307) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002c307) cell_ai5_widget_pane_g

0xe7e3,	// (0x0002acb8) cell_ai5_widget_pane_t10_ParamLimits

0xe7e3,	// (0x0002acb8) cell_ai5_widget_pane_t10

0xe7f9,	// (0x0002acce) grid_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0002ad6f) cell_contacts_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0002ad6f) cell_contacts_ai5_widget_pane

0xea7a,	// (0x0002af4f) popup_discreet_window_t3_ParamLimits

0xea7a,	// (0x0002af4f) popup_discreet_window_t3

0xeb09,	// (0x0002afde) popup_fshwr2_char_preview_window_ParamLimits

0xeb09,	// (0x0002afde) popup_fshwr2_char_preview_window

0xecc8,	// (0x0002b19d) tmo_note_info_pane_t1

0xecdd,	// (0x0002b1b2) tmo_note_info_pane_t2

0xecf6,	// (0x0002b1cb) tmo_note_info_pane_t3

0xed0b,	// (0x0002b1e0) tmo_note_info_pane_t4

0xed1d,	// (0x0002b1f2) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002c38e) tmo_note_info_pane_t

0xed2f,	// (0x0002b204) list_tmo_link_pane_ParamLimits

0xed3c,	// (0x0002b211) scroll_pane_cp20_ParamLimits

0x3634,	// (0x0001fb09) bg_popup_fep_char_preview_window_cp01

0xed80,	// (0x0002b255) popup_fshwr2_char_preview_window_t1

0xed8e,	// (0x0002b263) popup_candi_list_indi_window_g1

0xed97,	// (0x0002b26c) bg_cell_contacts_ai5_widget_pane

0xeda3,	// (0x0002b278) cell_contacts_ai5_widget_pane_g1

0xedb7,	// (0x0002b28c) cell_contacts_ai5_widget_pane_g2

0xedc6,	// (0x0002b29b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002c399) cell_contacts_ai5_widget_pane_g

0xedd9,	// (0x0002b2ae) cell_contacts_ai5_widget_pane_t1

0x7e90,	// (0x00024365) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee53,	// (0x0002b328) settings_container_pane

0x8aee,	// (0x00024fc3) listscroll_set_pane_copy1

0xb79c,	// (0x00027c71) scroll_pane_cp121_copy1

0xee5f,	// (0x0002b334) set_content_pane_copy1

0xee67,	// (0x0002b33c) aid_height_set_list_copy1_ParamLimits

0xee67,	// (0x0002b33c) aid_height_set_list_copy1

0xade9,	// (0x000272be) aid_size_parent_copy1_ParamLimits

0xade9,	// (0x000272be) aid_size_parent_copy1

0xee73,	// (0x0002b348) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee73,	// (0x0002b348) button_value_adjust_pane_cp6_copy1

0x8e74,	// (0x00025349) list_highlight_pane_cp2_copy1_ParamLimits

0x8e74,	// (0x00025349) list_highlight_pane_cp2_copy1

0xee87,	// (0x0002b35c) list_set_pane_copy1_ParamLimits

0xee87,	// (0x0002b35c) list_set_pane_copy1

0xedee,	// (0x0002b2c3) main_pane_set_t1_copy1_ParamLimits

0xedee,	// (0x0002b2c3) main_pane_set_t1_copy1

0xee28,	// (0x0002b2fd) main_pane_set_t2_copy1_ParamLimits

0xee28,	// (0x0002b2fd) main_pane_set_t2_copy1

0xef4e,	// (0x0002b423) main_pane_set_t3_copy1

0xef5c,	// (0x0002b431) main_pane_set_t4_copy1

0xee47,	// (0x0002b31c) set_content_pane_g1_copy1_ParamLimits

0xee47,	// (0x0002b31c) set_content_pane_g1_copy1

0xef6a,	// (0x0002b43f) setting_code_pane_copy1

0xef74,	// (0x0002b449) setting_slider_graphic_pane_copy1

0xef74,	// (0x0002b449) setting_slider_pane_copy1

0xef74,	// (0x0002b449) setting_text_pane_copy1

0xef7e,	// (0x0002b453) setting_volume_pane_copy1

0xef87,	// (0x0002b45c) settings_code_pane_cp2_copy1

0xef8f,	// (0x0002b464) settings_code_pane_cp_copy1_ParamLimits

0xef8f,	// (0x0002b464) settings_code_pane_cp_copy1

0xefa3,	// (0x0002b478) volume_set_pane_copy1

0xefaf,	// (0x0002b484) volume_set_pane_g10_copy1

0xefbb,	// (0x0002b490) volume_set_pane_g1_copy1

0xefc5,	// (0x0002b49a) volume_set_pane_g2_copy1

0xefcf,	// (0x0002b4a4) volume_set_pane_g3_copy1

0xefd9,	// (0x0002b4ae) volume_set_pane_g4_copy1

0xefe3,	// (0x0002b4b8) volume_set_pane_g5_copy1

0xefed,	// (0x0002b4c2) volume_set_pane_g6_copy1

0xeff7,	// (0x0002b4cc) volume_set_pane_g7_copy1

0xf001,	// (0x0002b4d6) volume_set_pane_g8_copy1

0xf00b,	// (0x0002b4e0) volume_set_pane_g9_copy1

0x5f79,	// (0x0002244e) bg_set_opt_pane_cp_copy1_ParamLimits

0x5f79,	// (0x0002244e) bg_set_opt_pane_cp_copy1

0xf015,	// (0x0002b4ea) setting_slider_pane_t1_copy1_ParamLimits

0xf015,	// (0x0002b4ea) setting_slider_pane_t1_copy1

0xf033,	// (0x0002b508) setting_slider_pane_t2_copy1_ParamLimits

0xf033,	// (0x0002b508) setting_slider_pane_t2_copy1

0xf04d,	// (0x0002b522) setting_slider_pane_t3_copy1_ParamLimits

0xf04d,	// (0x0002b522) setting_slider_pane_t3_copy1

0xf065,	// (0x0002b53a) slider_set_pane_copy1_ParamLimits

0xf065,	// (0x0002b53a) slider_set_pane_copy1

0x7ef7,	// (0x000243cc) set_opt_bg_pane_g1_copy2

0x7eff,	// (0x000243d4) set_opt_bg_pane_g2_copy2

0xf07b,	// (0x0002b550) set_opt_bg_pane_g3_copy2

0x7f0f,	// (0x000243e4) set_opt_bg_pane_g4_copy2

0x7f17,	// (0x000243ec) set_opt_bg_pane_g5_copy2

0x7f1f,	// (0x000243f4) set_opt_bg_pane_g6_copy2

0xf085,	// (0x0002b55a) set_opt_bg_pane_g7_copy2

0xf08f,	// (0x0002b564) set_opt_bg_pane_g8_copy2

0xf099,	// (0x0002b56e) set_opt_bg_pane_g9_copy2

0xf0a3,	// (0x0002b578) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a3,	// (0x0002b578) aid_size_touch_slider_mark_copy1

0xf0b7,	// (0x0002b58c) slider_set_pane_g1_copy1

0xf0c0,	// (0x0002b595) slider_set_pane_g2_copy1

0xb6f0,	// (0x00027bc5) slider_set_pane_g3_copy1_ParamLimits

0xb6f0,	// (0x00027bc5) slider_set_pane_g3_copy1

0xb704,	// (0x00027bd9) slider_set_pane_g4_copy1_ParamLimits

0xb704,	// (0x00027bd9) slider_set_pane_g4_copy1

0xb71c,	// (0x00027bf1) slider_set_pane_g5_copy1_ParamLimits

0xb71c,	// (0x00027bf1) slider_set_pane_g5_copy1

0xb6f0,	// (0x00027bc5) slider_set_pane_g6_copy1_ParamLimits

0xb6f0,	// (0x00027bc5) slider_set_pane_g6_copy1

0xf0c8,	// (0x0002b59d) slider_set_pane_g7_copy1_ParamLimits

0xf0c8,	// (0x0002b59d) slider_set_pane_g7_copy1

0x37c1,	// (0x0001fc96) bg_set_opt_pane_cp2_copy1

0xf0de,	// (0x0002b5b3) setting_slider_graphic_pane_g1_copy1

0xf0e7,	// (0x0002b5bc) setting_slider_graphic_pane_t1_copy1

0xf0f7,	// (0x0002b5cc) setting_slider_graphic_pane_t2_copy1

0xf107,	// (0x0002b5dc) slider_set_pane_cp_copy1

0xf117,	// (0x0002b5ec) input_focus_pane_cp1_copy1

0xf120,	// (0x0002b5f5) list_set_text_pane_copy1

0xf128,	// (0x0002b5fd) setting_text_pane_g1_copy1

0x5a82,	// (0x00021f57) set_text_pane_t1_copy1

0xf117,	// (0x0002b5ec) input_focus_pane_cp2_copy1

0xf128,	// (0x0002b5fd) setting_code_pane_g1_copy1

0xf131,	// (0x0002b606) setting_code_pane_t1_copy1

0xf13f,	// (0x0002b614) list_set_graphic_pane_copy1

0x37c1,	// (0x0001fc96) bg_set_opt_pane_cp4_copy1

0x87e8,	// (0x00024cbd) list_set_graphic_pane_g1_copy1_ParamLimits

0x87e8,	// (0x00024cbd) list_set_graphic_pane_g1_copy1

0xf151,	// (0x0002b626) list_set_graphic_pane_g2_copy1

0x8800,	// (0x00024cd5) list_set_graphic_pane_t1_copy1_ParamLimits

0x8800,	// (0x00024cd5) list_set_graphic_pane_t1_copy1

0xc056,	// (0x0002852b) rs_clock_indi_pane_g1

0xf159,	// (0x0002b62e) rs_clock_indi_pane_t1

0xf167,	// (0x0002b63c) rs_indi_pane

0xf16f,	// (0x0002b644) rs_indi_pane_g1

0xf178,	// (0x0002b64d) rs_indi_pane_g2

0xf181,	// (0x0002b656) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002c3a0) rs_indi_pane_g

0x8aee,	// (0x00024fc3) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x0002b65f) popup_fep_tooltip_window_t1

0xccfc,	// (0x000291d1) popup_note2_window_g2_ParamLimits

0xccfc,	// (0x000291d1) popup_note2_window_g2

0x0001,

0xfc64,	// (0x0002c139) popup_note2_window_g_ParamLimits

0xfc64,	// (0x0002c139) popup_note2_window_g

0xd204,	// (0x000296d9) bg_popup_sub_pane_cp11_ParamLimits

0xd211,	// (0x000296e6) cell_ai3_links_pane_g1_ParamLimits

0xd228,	// (0x000296fd) cell_ai3_links_pane_t1

0x5a82,	// (0x00021f57) set_text_pane_t1_copy1_ParamLimits

0x89fb,	// (0x00024ed0) cell_graphic_popup_pane_cp2_ParamLimits

0x89fb,	// (0x00024ed0) cell_graphic_popup_pane_cp2

0xf198,	// (0x0002b66d) cell_graphic_popup_pane_g1_cp2

0x65db,	// (0x00022ab0) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x0002b675) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x0002b67d) cell_graphic_popup_pane_t2_cp2

0x65ec,	// (0x00022ac1) grid_highlight_pane_cp3_cp2

0x8243,	// (0x00024718) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7e90,	// (0x00024365) main_tmo_pane_ParamLimits

0xd548,	// (0x00029a1d) popup_tmo_big_image_note_window

0xe643,	// (0x0002ab18) cell_ai5_widget_list_pane

0xe64b,	// (0x0002ab20) cell_ai5_widget_lrg_icon_pane

0xecc8,	// (0x0002b19d) tmo_note_info_pane_t1_ParamLimits

0xecdd,	// (0x0002b1b2) tmo_note_info_pane_t2_ParamLimits

0xecf6,	// (0x0002b1cb) tmo_note_info_pane_t3_ParamLimits

0xed0b,	// (0x0002b1e0) tmo_note_info_pane_t4_ParamLimits

0xed1d,	// (0x0002b1f2) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002c38e) tmo_note_info_pane_t_ParamLimits

0xee53,	// (0x0002b328) settings_container_pane_ParamLimits

0xf10f,	// (0x0002b5e4) indicator_popup_pane_cp5

0xf10f,	// (0x0002b5e4) indicator_popup_pane_cp6

0xf13f,	// (0x0002b614) list_set_graphic_pane_copy1_ParamLimits

0x3634,	// (0x0001fb09) bg_popup_window_pane_cp23

0xf1b6,	// (0x0002b68b) popup_tmo_big_image_note_window_g1

0xf1c2,	// (0x0002b697) popup_tmo_big_image_note_window_t1

0xf1d2,	// (0x0002b6a7) popup_tmo_big_image_note_window_t2

0xf1e2,	// (0x0002b6b7) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002c3a7) popup_tmo_big_image_note_window_t

0xf1f2,	// (0x0002b6c7) cell_ai5_widget_lrg_icon_pane_g1

0xf1fa,	// (0x0002b6cf) cell_ai5_widget_lrg_icon_pane_t1

0xf208,	// (0x0002b6dd) cell_ai5_widget_list_row_pane_ParamLimits

0xf208,	// (0x0002b6dd) cell_ai5_widget_list_row_pane

0xf221,	// (0x0002b6f6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf221,	// (0x0002b6f6) cell_ai5_widget_list_row_pane_g1

0xf22e,	// (0x0002b703) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22e,	// (0x0002b703) cell_ai5_widget_list_row_pane_t1

0xf246,	// (0x0002b71b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf246,	// (0x0002b71b) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed9,	// (0x0002c3ae) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002c3ae) cell_ai5_widget_list_row_pane_t

0x3634,	// (0x0001fb09) main_fep_vtchi_ss_pane

0xf258,	// (0x0002b72d) popup_fep_char_pre_window

0xf260,	// (0x0002b735) popup_fep_ituss_window

0xf281,	// (0x0002b756) popup_fep_vkbss_window

0xf2a2,	// (0x0002b777) grid_vkbss_keypad_pane_ParamLimits

0xf2a2,	// (0x0002b777) grid_vkbss_keypad_pane

0xf2b2,	// (0x0002b787) ituss_keypad_pane

0xf2ca,	// (0x0002b79f) aid_vkbss_key_offset_ParamLimits

0xf2ca,	// (0x0002b79f) aid_vkbss_key_offset

0xf2d6,	// (0x0002b7ab) cell_vkbss_key_pane_ParamLimits

0xf2d6,	// (0x0002b7ab) cell_vkbss_key_pane

0xf2ec,	// (0x0002b7c1) bg_cell_vkbss_key_g1_ParamLimits

0xf2ec,	// (0x0002b7c1) bg_cell_vkbss_key_g1

0xf2f8,	// (0x0002b7cd) cell_vkbss_key_3p_pane_ParamLimits

0xf2f8,	// (0x0002b7cd) cell_vkbss_key_3p_pane

0xf312,	// (0x0002b7e7) cell_vkbss_key_g1_ParamLimits

0xf312,	// (0x0002b7e7) cell_vkbss_key_g1

0xf32c,	// (0x0002b801) cell_vkbss_key_t1_ParamLimits

0xf32c,	// (0x0002b801) cell_vkbss_key_t1

0xf357,	// (0x0002b82c) cell_ituss_key_pane_ParamLimits

0xf357,	// (0x0002b82c) cell_ituss_key_pane

0xf367,	// (0x0002b83c) bg_cell_ituss_key_g1_ParamLimits

0xf367,	// (0x0002b83c) bg_cell_ituss_key_g1

0xf373,	// (0x0002b848) cell_ituss_key_pane_g1_ParamLimits

0xf373,	// (0x0002b848) cell_ituss_key_pane_g1

0xf37f,	// (0x0002b854) cell_ituss_key_pane_g2_ParamLimits

0xf37f,	// (0x0002b854) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x0002c3b3) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0002c3b3) cell_ituss_key_pane_g

0xf398,	// (0x0002b86d) cell_ituss_key_t1_ParamLimits

0xf398,	// (0x0002b86d) cell_ituss_key_t1

0xf3c6,	// (0x0002b89b) cell_ituss_key_t2_ParamLimits

0xf3c6,	// (0x0002b89b) cell_ituss_key_t2

0xf3f7,	// (0x0002b8cc) cell_ituss_key_t3_ParamLimits

0xf3f7,	// (0x0002b8cc) cell_ituss_key_t3

0xf428,	// (0x0002b8fd) cell_ituss_key_t4_ParamLimits

0xf428,	// (0x0002b8fd) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x0002c3b8) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0002c3b8) cell_ituss_key_t

0xf459,	// (0x0002b92e) cell_vkbss_key_3p_pane_g1

0xf461,	// (0x0002b936) cell_vkbss_key_3p_pane_g2

0xf469,	// (0x0002b93e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0002c3c1) cell_vkbss_key_3p_pane_g

0x3634,	// (0x0001fb09) bg_popup_fep_char_preview_window_cp02

0xf471,	// (0x0002b946) popup_fep_char_pre_window_t1

0xe619,	// (0x0002aaee) main_ai5_sk_pane

0xed97,	// (0x0002b26c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda3,	// (0x0002b278) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb7,	// (0x0002b28c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc6,	// (0x0002b29b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002c399) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd9,	// (0x0002b2ae) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7e90,	// (0x00024365) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf480,	// (0x0002b955) main_ai5_sk_pane_g1

0x9e8e,	// (0x00026363) popup_query_code_window_g1

0xf276,	// (0x0002b74b) popup_fep_vkb_icf_pane

0xf28c,	// (0x0002b761) popup_fep_vtchi_icf_pane

0x7e90,	// (0x00024365) bg_icf_pane

0xf498,	// (0x0002b96d) list_vkb_icf_pane

0x7e90,	// (0x00024365) bg_icf_pane_cp01

0xf4b0,	// (0x0002b985) vtchi_icf_list_pane

0xf4c0,	// (0x0002b995) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0002b995) list_vkb_icf_pane_t1

0xf4d7,	// (0x0002b9ac) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0002b9ac) vtchi_icf_list_pane_t1

0xf260,	// (0x0002b735) popup_fep_ituss_window_ParamLimits

0xf28c,	// (0x0002b761) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b2,	// (0x0002b787) ituss_keypad_pane_ParamLimits

0xf2c1,	// (0x0002b796) ituss_sks_pane

0x7e90,	// (0x00024365) bg_icf_pane_ParamLimits

0xf489,	// (0x0002b95e) icf_edit_indi_pane_ParamLimits

0xf489,	// (0x0002b95e) icf_edit_indi_pane

0xf498,	// (0x0002b96d) list_vkb_icf_pane_ParamLimits

0x7e90,	// (0x00024365) bg_icf_pane_cp01_ParamLimits

0xf4a4,	// (0x0002b979) icf_edit_indi_pane_cp01_ParamLimits

0xf4a4,	// (0x0002b979) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0002b98d) vtchi_query_pane

0xc2e0,	// (0x000287b5) icf_edit_indi_pane_g1_ParamLimits

0xc2e0,	// (0x000287b5) icf_edit_indi_pane_g1

0xf4f0,	// (0x0002b9c5) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0002b9c5) icf_edit_indi_pane_g2

0x0001,

0xfef3,	// (0x0002c3c8) icf_edit_indi_pane_g_ParamLimits

0xfef3,	// (0x0002c3c8) icf_edit_indi_pane_g

0xf4fc,	// (0x0002b9d1) icf_edit_indi_pane_t1

0xf50a,	// (0x0002b9df) bg_input_focus_pane_cp042

0x67bf,	// (0x00022c94) vtchi_button_pane

0xf513,	// (0x0002b9e8) vtchi_query_pane_t1

0xf521,	// (0x0002b9f6) vtchi_query_pane_t2

0xf52f,	// (0x0002ba04) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0002c3cd) vtchi_query_pane_t

0x3634,	// (0x0001fb09) bg_button_pane_cp13

0xf53d,	// (0x0002ba12) vtchi_button_pane_g1

0xda73,	// (0x00029f48) ituss_sks_pane_g1

0xf545,	// (0x0002ba1a) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0002c3d4) ituss_sks_pane_g

0xf54e,	// (0x0002ba23) ituss_sks_pane_t1

0xf55c,	// (0x0002ba31) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0002c3d9) ituss_sks_pane_t

0xbafd,	// (0x00027fd2) indicator_nsta_pane_cp_g1

0xbb06,	// (0x00027fdb) indicator_nsta_pane_cp_g2

0xbb0e,	// (0x00027fe3) indicator_nsta_pane_cp_g3

0xbb16,	// (0x00027feb) indicator_nsta_pane_cp_g4

0xbb1e,	// (0x00027ff3) indicator_nsta_pane_cp_g5

0xbb26,	// (0x00027ffb) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0002bf83) indicator_nsta_pane_cp_g

0xe209,	// (0x0002a6de) cell_graphic2_pane_t2_ParamLimits

0xe209,	// (0x0002a6de) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002c290) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002c290) cell_graphic2_pane_t

0xe236,	// (0x0002a70b) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

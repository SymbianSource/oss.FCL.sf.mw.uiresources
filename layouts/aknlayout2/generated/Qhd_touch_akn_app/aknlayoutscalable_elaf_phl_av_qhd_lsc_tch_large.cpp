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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003ea25 };

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
0xd0d1,	// (0x0004baf6) Screen

0xd0dd,	// (0x0004bb02) application_window_ParamLimits

0xd0dd,	// (0x0004bb02) application_window

0x37e4,	// (0x00042209) screen_g1

0xbf54,	// (0x0004a979) area_bottom_pane_ParamLimits

0xbf54,	// (0x0004a979) area_bottom_pane

0x129f,	// (0x0003fcc4) area_top_pane_ParamLimits

0x129f,	// (0x0003fcc4) area_top_pane

0x1333,	// (0x0003fd58) main_pane_ParamLimits

0x1333,	// (0x0003fd58) main_pane

0x37ee,	// (0x00042213) misc_graphics

0xd819,	// (0x0004c23e) battery_pane_ParamLimits

0xd819,	// (0x0004c23e) battery_pane

0x5e7e,	// (0x000448a3) bg_status_flat_pane_g8

0x5e86,	// (0x000448ab) bg_status_flat_pane_g9

0x5272,	// (0x00043c97) context_pane_ParamLimits

0x5272,	// (0x00043c97) context_pane

0xd984,	// (0x0004c3a9) navi_pane_ParamLimits

0xd984,	// (0x0004c3a9) navi_pane

0xda02,	// (0x0004c427) signal_pane_ParamLimits

0xda02,	// (0x0004c427) signal_pane

0x0008,

0xf879,	// (0x0004e29e) bg_status_flat_pane_g

0xda92,	// (0x0004c4b7) status_pane_g1_ParamLimits

0xda92,	// (0x0004c4b7) status_pane_g1

0xdaa8,	// (0x0004c4cd) status_pane_g2_ParamLimits

0xdaa8,	// (0x0004c4cd) status_pane_g2

0x5499,	// (0x00043ebe) status_pane_g3_ParamLimits

0x5499,	// (0x00043ebe) status_pane_g3

0x0004,

0xf7a5,	// (0x0004e1ca) status_pane_g_ParamLimits

0xf7a5,	// (0x0004e1ca) status_pane_g

0xdab4,	// (0x0004c4d9) title_pane_ParamLimits

0xdab4,	// (0x0004c4d9) title_pane

0xdb17,	// (0x0004c53c) uni_indicator_pane_ParamLimits

0xdb17,	// (0x0004c53c) uni_indicator_pane

0x50d4,	// (0x00043af9) bg_list_pane_ParamLimits

0x50d4,	// (0x00043af9) bg_list_pane

0xd78c,	// (0x0004c1b1) find_pane

0xc30f,	// (0x0004ad34) listscroll_app_pane_ParamLimits

0xc30f,	// (0x0004ad34) listscroll_app_pane

0x5100,	// (0x00043b25) listscroll_form_pane

0xc31f,	// (0x0004ad44) listscroll_gen_pane_ParamLimits

0xc31f,	// (0x0004ad44) listscroll_gen_pane

0x1cec,	// (0x00040711) listscroll_set_pane

0x69ff,	// (0x00045424) main_idle_act_pane

0x4dd0,	// (0x000437f5) main_idle_trad_pane

0x4dd0,	// (0x000437f5) main_list_empty_pane

0x511a,	// (0x00043b3f) main_midp_pane

0x5126,	// (0x00043b4b) main_pane_g1_ParamLimits

0x5126,	// (0x00043b4b) main_pane_g1

0xc333,	// (0x0004ad58) popup_ai_message_window_ParamLimits

0xc333,	// (0x0004ad58) popup_ai_message_window

0xc3c4,	// (0x0004ade9) popup_fep_china_uni_window_ParamLimits

0xc3c4,	// (0x0004ade9) popup_fep_china_uni_window

0x1df6,	// (0x0004081b) popup_fep_japan_candidate_window_ParamLimits

0x1df6,	// (0x0004081b) popup_fep_japan_candidate_window

0x1e16,	// (0x0004083b) popup_fep_japan_predictive_window_ParamLimits

0x1e16,	// (0x0004083b) popup_fep_japan_predictive_window

0xc420,	// (0x0004ae45) popup_find_window

0xc43d,	// (0x0004ae62) popup_grid_graphic_window_ParamLimits

0xc43d,	// (0x0004ae62) popup_grid_graphic_window

0x1e7d,	// (0x000408a2) popup_large_graphic_colour_window

0xc4db,	// (0x0004af00) popup_menu_window_ParamLimits

0xc4db,	// (0x0004af00) popup_menu_window

0xc6ad,	// (0x0004b0d2) popup_note_image_window

0xc673,	// (0x0004b098) popup_note_wait_window_ParamLimits

0xc673,	// (0x0004b098) popup_note_wait_window

0xc6c5,	// (0x0004b0ea) popup_note_window_ParamLimits

0xc6c5,	// (0x0004b0ea) popup_note_window

0xc76b,	// (0x0004b190) popup_query_code_window_ParamLimits

0xc76b,	// (0x0004b190) popup_query_code_window

0x20c5,	// (0x00040aea) popup_query_data_code_window_ParamLimits

0x20c5,	// (0x00040aea) popup_query_data_code_window

0xc7a5,	// (0x0004b1ca) popup_query_data_window_ParamLimits

0xc7a5,	// (0x0004b1ca) popup_query_data_window

0xc827,	// (0x0004b24c) popup_query_sat_info_window_ParamLimits

0xc827,	// (0x0004b24c) popup_query_sat_info_window

0xc8be,	// (0x0004b2e3) popup_snote_single_graphic_window_ParamLimits

0xc8be,	// (0x0004b2e3) popup_snote_single_graphic_window

0xc8be,	// (0x0004b2e3) popup_snote_single_text_window_ParamLimits

0xc8be,	// (0x0004b2e3) popup_snote_single_text_window

0x214c,	// (0x00040b71) popup_sub_window_general

0x227c,	// (0x00040ca1) popup_window_general_ParamLimits

0x227c,	// (0x00040ca1) popup_window_general

0x5134,	// (0x00043b59) power_save_pane

0xc194,	// (0x0004abb9) control_pane_g1_ParamLimits

0xc194,	// (0x0004abb9) control_pane_g1

0xc1bd,	// (0x0004abe2) control_pane_g2_ParamLimits

0xc1bd,	// (0x0004abe2) control_pane_g2

0x5097,	// (0x00043abc) control_pane_g3_ParamLimits

0x5097,	// (0x00043abc) control_pane_g3

0x0007,

0xf78d,	// (0x0004e1b2) control_pane_g_ParamLimits

0xf78d,	// (0x0004e1b2) control_pane_g

0xc1fe,	// (0x0004ac23) control_pane_t1_ParamLimits

0xc1fe,	// (0x0004ac23) control_pane_t1

0xc264,	// (0x0004ac89) control_pane_t2_ParamLimits

0xc264,	// (0x0004ac89) control_pane_t2

0x0002,

0xf79e,	// (0x0004e1c3) control_pane_t_ParamLimits

0xf79e,	// (0x0004e1c3) control_pane_t

0xd6be,	// (0x0004c0e3) navi_navi_volume_pane_cp1

0xd6c6,	// (0x0004c0eb) status_small_icon_pane

0x4fcc,	// (0x000439f1) status_small_pane_g1_ParamLimits

0x4fcc,	// (0x000439f1) status_small_pane_g1

0xd6ce,	// (0x0004c0f3) status_small_pane_g2_ParamLimits

0xd6ce,	// (0x0004c0f3) status_small_pane_g2

0xd6da,	// (0x0004c0ff) status_small_pane_g3_ParamLimits

0xd6da,	// (0x0004c0ff) status_small_pane_g3

0xd6e6,	// (0x0004c10b) status_small_pane_g4_ParamLimits

0xd6e6,	// (0x0004c10b) status_small_pane_g4

0xd6f2,	// (0x0004c117) status_small_pane_g5_ParamLimits

0xd6f2,	// (0x0004c117) status_small_pane_g5

0xd700,	// (0x0004c125) status_small_pane_g6_ParamLimits

0xd700,	// (0x0004c125) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004e1a1) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004e1a1) status_small_pane_g

0xd72f,	// (0x0004c154) status_small_pane_t1

0xd751,	// (0x0004c176) status_small_wait_pane_ParamLimits

0xd751,	// (0x0004c176) status_small_wait_pane

0xd589,	// (0x0004bfae) aid_levels_signal_ParamLimits

0xd589,	// (0x0004bfae) aid_levels_signal

0xd5a1,	// (0x0004bfc6) signal_pane_g1_ParamLimits

0xd5a1,	// (0x0004bfc6) signal_pane_g1

0xd5bc,	// (0x0004bfe1) signal_pane_g2_ParamLimits

0xd5bc,	// (0x0004bfe1) signal_pane_g2

0x0003,

0xf70d,	// (0x0004e132) signal_pane_g_ParamLimits

0xf70d,	// (0x0004e132) signal_pane_g

0x48a4,	// (0x000432c9) context_pane_g1

0xd0ed,	// (0x0004bb12) title_pane_g1

0xd124,	// (0x0004bb49) title_pane_t1

0x3896,	// (0x000422bb) title_pane_t2

0x38bc,	// (0x000422e1) title_pane_t3

0x0002,

0xf557,	// (0x0004df7c) title_pane_t

0xdb3f,	// (0x0004c564) aid_levels_battery_ParamLimits

0xdb3f,	// (0x0004c564) aid_levels_battery

0xdb5b,	// (0x0004c580) battery_pane_g1_ParamLimits

0xdb5b,	// (0x0004c580) battery_pane_g1

0xdb78,	// (0x0004c59d) battery_pane_g2_ParamLimits

0xdb78,	// (0x0004c59d) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004e1d5) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004e1d5) battery_pane_g

0xdd39,	// (0x0004c75e) uni_indicator_pane_g1

0xdd4f,	// (0x0004c774) uni_indicator_pane_g2

0xdd65,	// (0x0004c78a) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004e346) uni_indicator_pane_g

0x4c42,	// (0x00043667) navi_icon_pane_ParamLimits

0x4c42,	// (0x00043667) navi_icon_pane

0x4b80,	// (0x000435a5) navi_midp_pane

0x4c5e,	// (0x00043683) navi_navi_pane

0x4c68,	// (0x0004368d) navi_text_pane_ParamLimits

0x4c68,	// (0x0004368d) navi_text_pane

0x37e4,	// (0x00042209) status_small_wait_pane_g1

0x3ceb,	// (0x00042710) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004e341) status_small_wait_pane_g

0x64d9,	// (0x00044efe) navi_navi_icon_text_pane

0x64e1,	// (0x00044f06) navi_navi_pane_g1_ParamLimits

0x64e1,	// (0x00044f06) navi_navi_pane_g1

0x64f3,	// (0x00044f18) navi_navi_pane_g2_ParamLimits

0x64f3,	// (0x00044f18) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004e30f) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004e30f) navi_navi_pane_g

0x6505,	// (0x00044f2a) navi_navi_tabs_pane

0x650e,	// (0x00044f33) navi_navi_text_pane

0x64d9,	// (0x00044efe) navi_navi_volume_pane

0x64b5,	// (0x00044eda) navi_text_pane_t1

0x64a9,	// (0x00044ece) navi_icon_pane_g1

0x63fc,	// (0x00044e21) navi_navi_text_pane_t1

0x2534,	// (0x00040f59) navi_navi_volume_pane_g1

0x253c,	// (0x00040f61) volume_small_pane

0x6362,	// (0x00044d87) navi_navi_icon_text_pane_g1

0x636a,	// (0x00044d8f) navi_navi_icon_text_pane_t1

0x4c5e,	// (0x00043683) navi_tabs_2_long_pane

0x4c5e,	// (0x00043683) navi_tabs_2_pane

0x4c5e,	// (0x00043683) navi_tabs_3_long_pane

0x4c5e,	// (0x00043683) navi_tabs_3_pane

0x4c5e,	// (0x00043683) navi_tabs_4_pane

0x2514,	// (0x00040f39) tabs_2_active_pane_ParamLimits

0x2514,	// (0x00040f39) tabs_2_active_pane

0x2524,	// (0x00040f49) tabs_2_passive_pane_ParamLimits

0x2524,	// (0x00040f49) tabs_2_passive_pane

0x24e2,	// (0x00040f07) tabs_3_active_pane_ParamLimits

0x24e2,	// (0x00040f07) tabs_3_active_pane

0x24f2,	// (0x00040f17) tabs_3_passive_pane_ParamLimits

0x24f2,	// (0x00040f17) tabs_3_passive_pane

0x2503,	// (0x00040f28) tabs_3_passive_pane_cp_ParamLimits

0x2503,	// (0x00040f28) tabs_3_passive_pane_cp

0x249e,	// (0x00040ec3) tabs_4_active_pane_ParamLimits

0x249e,	// (0x00040ec3) tabs_4_active_pane

0x24af,	// (0x00040ed4) tabs_4_passive_pane_ParamLimits

0x24af,	// (0x00040ed4) tabs_4_passive_pane

0x24c0,	// (0x00040ee5) tabs_4_passive_pane_cp_ParamLimits

0x24c0,	// (0x00040ee5) tabs_4_passive_pane_cp

0x24d1,	// (0x00040ef6) tabs_4_passive_pane_cp2_ParamLimits

0x24d1,	// (0x00040ef6) tabs_4_passive_pane_cp2

0x247a,	// (0x00040e9f) tabs_2_long_active_pane_ParamLimits

0x247a,	// (0x00040e9f) tabs_2_long_active_pane

0x248c,	// (0x00040eb1) tabs_2_long_passive_pane_ParamLimits

0x248c,	// (0x00040eb1) tabs_2_long_passive_pane

0x243b,	// (0x00040e60) tabs_3_long_active_pane_ParamLimits

0x243b,	// (0x00040e60) tabs_3_long_active_pane

0x244e,	// (0x00040e73) tabs_3_long_passive_pane_ParamLimits

0x244e,	// (0x00040e73) tabs_3_long_passive_pane

0x2467,	// (0x00040e8c) tabs_3_long_passive_pane_cp_ParamLimits

0x2467,	// (0x00040e8c) tabs_3_long_passive_pane_cp

0x23e1,	// (0x00040e06) volume_small_pane_g1

0x23ea,	// (0x00040e0f) volume_small_pane_g2

0x23f3,	// (0x00040e18) volume_small_pane_g3

0x23fc,	// (0x00040e21) volume_small_pane_g4

0x2405,	// (0x00040e2a) volume_small_pane_g5

0x240e,	// (0x00040e33) volume_small_pane_g6

0x2417,	// (0x00040e3c) volume_small_pane_g7

0x2420,	// (0x00040e45) volume_small_pane_g8

0x2429,	// (0x00040e4e) volume_small_pane_g9

0x2432,	// (0x00040e57) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004e2db) volume_small_pane_g

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp2_ParamLimits

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp2

0x38dc,	// (0x00042301) tabs_3_active_pane_g1

0xd1b0,	// (0x0004bbd5) tabs_3_active_pane_t1

0x3b49,	// (0x0004256e) bg_passive_tab_pane_cp2_ParamLimits

0x3b49,	// (0x0004256e) bg_passive_tab_pane_cp2

0x38dc,	// (0x00042301) tabs_3_passive_pane_g1

0xd1b0,	// (0x0004bbd5) tabs_3_passive_pane_t1

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp3_ParamLimits

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp3

0x38f6,	// (0x0004231b) tabs_4_active_pane_g1

0xd1c2,	// (0x0004bbe7) tabs_4_active_pane_t1

0x3b49,	// (0x0004256e) bg_passive_tab_pane_cp3_ParamLimits

0x3b49,	// (0x0004256e) bg_passive_tab_pane_cp3

0x38f6,	// (0x0004231b) tabs_4_1_passive_pane_g1

0xd1c2,	// (0x0004bbe7) tabs_4_1_passive_pane_t1

0x511a,	// (0x00043b3f) list_highlight_pane_cp2

0xddeb,	// (0x0004c810) list_set_pane_ParamLimits

0xddeb,	// (0x0004c810) list_set_pane

0xde85,	// (0x0004c8aa) main_pane_set_t1_ParamLimits

0xde85,	// (0x0004c8aa) main_pane_set_t1

0xdea5,	// (0x0004c8ca) main_pane_set_t2_ParamLimits

0xdea5,	// (0x0004c8ca) main_pane_set_t2

0xdeb9,	// (0x0004c8de) main_pane_set_t3_ParamLimits

0xdeb9,	// (0x0004c8de) main_pane_set_t3

0xdecb,	// (0x0004c8f0) main_pane_set_t4_ParamLimits

0xdecb,	// (0x0004c8f0) main_pane_set_t4

0x0003,

0xf986,	// (0x0004e3ab) main_pane_set_t_ParamLimits

0xf986,	// (0x0004e3ab) main_pane_set_t

0xdedd,	// (0x0004c902) setting_code_pane

0xdee7,	// (0x0004c90c) setting_slider_graphic_pane

0xdee7,	// (0x0004c90c) setting_slider_pane

0xdee7,	// (0x0004c90c) setting_text_pane

0xdee7,	// (0x0004c90c) setting_volume_pane

0x1582,	// (0x0003ffa7) volume_set_pane

0x38ce,	// (0x000422f3) bg_set_opt_pane_cp

0x158a,	// (0x0003ffaf) setting_slider_pane_t1

0x15a3,	// (0x0003ffc8) setting_slider_pane_t2

0x15bd,	// (0x0003ffe2) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004df83) setting_slider_pane_t

0x15d5,	// (0x0003fffa) slider_set_pane

0x37ee,	// (0x00042213) bg_set_opt_pane_cp2

0x3910,	// (0x00042335) setting_slider_graphic_pane_g1

0x15eb,	// (0x00040010) setting_slider_graphic_pane_t1

0x15fb,	// (0x00040020) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004df8a) setting_slider_graphic_pane_t

0x160b,	// (0x00040030) slider_set_pane_cp

0x37ee,	// (0x00042213) input_focus_pane_cp1

0x69e6,	// (0x0004540b) list_set_text_pane

0x37e4,	// (0x00042209) setting_text_pane_g1

0x37ee,	// (0x00042213) input_focus_pane_cp2

0x37e4,	// (0x00042209) setting_code_pane_g1

0x3919,	// (0x0004233e) setting_code_pane_t1

0x01ec,	// (0x0003ec11) set_text_pane_t1_ParamLimits

0x01ec,	// (0x0003ec11) set_text_pane_t1

0x4195,	// (0x00042bba) set_opt_bg_pane_g1

0x419d,	// (0x00042bc2) set_opt_bg_pane_g2

0x69c0,	// (0x000453e5) set_opt_bg_pane_g3

0x41ad,	// (0x00042bd2) set_opt_bg_pane_g4

0x41b5,	// (0x00042bda) set_opt_bg_pane_g5

0x41bd,	// (0x00042be2) set_opt_bg_pane_g6

0x69ca,	// (0x000453ef) set_opt_bg_pane_g7

0x69d2,	// (0x000453f7) set_opt_bg_pane_g8

0x69dc,	// (0x00045401) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004e398) set_opt_bg_pane_g

0x69b3,	// (0x000453d8) slider_set_pane_g1

0x25a9,	// (0x00040fce) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004e389) slider_set_pane_g

0x2545,	// (0x00040f6a) volume_set_pane_g1

0x254d,	// (0x00040f72) volume_set_pane_g2

0x2555,	// (0x00040f7a) volume_set_pane_g3

0x255d,	// (0x00040f82) volume_set_pane_g4

0x2565,	// (0x00040f8a) volume_set_pane_g5

0x256d,	// (0x00040f92) volume_set_pane_g6

0x2575,	// (0x00040f9a) volume_set_pane_g7

0x257d,	// (0x00040fa2) volume_set_pane_g8

0x2585,	// (0x00040faa) volume_set_pane_g9

0x258d,	// (0x00040fb2) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004e361) volume_set_pane_g

0xd1d4,	// (0x0004bbf9) indicator_pane_ParamLimits

0xd1d4,	// (0x0004bbf9) indicator_pane

0xd1fc,	// (0x0004bc21) main_idle_pane_g2_ParamLimits

0xd1fc,	// (0x0004bc21) main_idle_pane_g2

0xd234,	// (0x0004bc59) main_pane_idle_g1_ParamLimits

0xd234,	// (0x0004bc59) main_pane_idle_g1

0x3968,	// (0x0004238d) popup_clock_digital_analogue_window_ParamLimits

0x3968,	// (0x0004238d) popup_clock_digital_analogue_window

0xd25b,	// (0x0004bc80) soft_indicator_pane_ParamLimits

0xd25b,	// (0x0004bc80) soft_indicator_pane

0xd275,	// (0x0004bc9a) wallpaper_pane_ParamLimits

0xd275,	// (0x0004bc9a) wallpaper_pane

0x37e4,	// (0x00042209) wallpaper_pane_g1

0xd287,	// (0x0004bcac) indicator_pane_g1_ParamLimits

0xd287,	// (0x0004bcac) indicator_pane_g1

0x6d95,	// (0x000457ba) navi_navi_icon_text_pane_srt_g1

0x39ba,	// (0x000423df) soft_indicator_pane_t1

0x39d4,	// (0x000423f9) aid_ps_area_pane

0xd29d,	// (0x0004bcc2) aid_ps_clock_pane

0x39f3,	// (0x00042418) aid_ps_indicator_pane

0x39ff,	// (0x00042424) indicator_ps_pane_ParamLimits

0x39ff,	// (0x00042424) indicator_ps_pane

0x3a0e,	// (0x00042433) power_save_pane_g1_ParamLimits

0x3a0e,	// (0x00042433) power_save_pane_g1

0x3a1a,	// (0x0004243f) power_save_pane_g2_ParamLimits

0x3a1a,	// (0x0004243f) power_save_pane_g2

0x1193,	// (0x0003fbb8) aid_navinavi_width_pane

0x39d4,	// (0x000423f9) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004df8f) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004df8f) power_save_pane_g

0x3a28,	// (0x0004244d) power_save_pane_t1_ParamLimits

0x3a28,	// (0x0004244d) power_save_pane_t1

0xd29d,	// (0x0004bcc2) aid_ps_clock_pane_ParamLimits

0x39f3,	// (0x00042418) aid_ps_indicator_pane_ParamLimits

0x3a3a,	// (0x0004245f) power_save_pane_t4_ParamLimits

0x3a3a,	// (0x0004245f) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004df94) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004df94) power_save_pane_t

0x3a64,	// (0x00042489) power_save_t3_ParamLimits

0x3a64,	// (0x00042489) power_save_t3

0x3a4f,	// (0x00042474) power_save_t2_ParamLimits

0x3a4f,	// (0x00042474) power_save_t2

0x3a79,	// (0x0004249e) indicator_ps_pane_g1

0xd2ab,	// (0x0004bcd0) ai_gene_pane_ParamLimits

0xd2ab,	// (0x0004bcd0) ai_gene_pane

0xd2c2,	// (0x0004bce7) ai_links_pane_ParamLimits

0xd2c2,	// (0x0004bce7) ai_links_pane

0xd2da,	// (0x0004bcff) indicator_pane_cp1_ParamLimits

0xd2da,	// (0x0004bcff) indicator_pane_cp1

0xd2e9,	// (0x0004bd0e) main_pane_idle_g1_cp_ParamLimits

0xd2e9,	// (0x0004bd0e) main_pane_idle_g1_cp

0x3ab2,	// (0x000424d7) popup_ai_links_title_window

0xd301,	// (0x0004bd26) soft_indicator_pane_cp1_ParamLimits

0xd301,	// (0x0004bd26) soft_indicator_pane_cp1

0x67a2,	// (0x000451c7) ai_links_pane_g1

0x67ab,	// (0x000451d0) grid_ai_links_pane

0xdd30,	// (0x0004c755) ai_gene_pane_1

0x6790,	// (0x000451b5) ai_gene_pane_2

0x6799,	// (0x000451be) list_highlight_pane_cp4

0xdd0c,	// (0x0004c731) cell_ai_link_pane_ParamLimits

0xdd0c,	// (0x0004c731) cell_ai_link_pane

0x6761,	// (0x00045186) cell_ai_link_pane_g1

0x3ceb,	// (0x00042710) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004e33c) cell_ai_link_pane_g

0x37ee,	// (0x00042213) grid_highlight_cp2

0x37ee,	// (0x00042213) bg_popup_sub_pane_cp1

0x3ad5,	// (0x000424fa) popup_ai_links_title_window_t1

0x66af,	// (0x000450d4) ai_gene_pane_1_g1_ParamLimits

0x66af,	// (0x000450d4) ai_gene_pane_1_g1

0x66bb,	// (0x000450e0) ai_gene_pane_1_g2_ParamLimits

0x66bb,	// (0x000450e0) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004e332) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004e332) ai_gene_pane_1_g

0x66c8,	// (0x000450ed) ai_gene_pane_1_t1_ParamLimits

0x66c8,	// (0x000450ed) ai_gene_pane_1_t1

0x66fc,	// (0x00045121) grid_ai_soft_ind_pane

0x669a,	// (0x000450bf) ai_gene_pane_2_t1_ParamLimits

0x669a,	// (0x000450bf) ai_gene_pane_2_t1

0xd315,	// (0x0004bd3a) main_pane_empty_t1_ParamLimits

0xd315,	// (0x0004bd3a) main_pane_empty_t1

0xd32d,	// (0x0004bd52) main_pane_empty_t2_ParamLimits

0xd32d,	// (0x0004bd52) main_pane_empty_t2

0xd342,	// (0x0004bd67) main_pane_empty_t3_ParamLimits

0xd342,	// (0x0004bd67) main_pane_empty_t3

0xd354,	// (0x0004bd79) main_pane_empty_t4_ParamLimits

0xd354,	// (0x0004bd79) main_pane_empty_t4

0xd366,	// (0x0004bd8b) main_pane_empty_t5_ParamLimits

0xd366,	// (0x0004bd8b) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004df99) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004df99) main_pane_empty_t

0x41e6,	// (0x00042c0b) bg_popup_window_pane_ParamLimits

0x41e6,	// (0x00042c0b) bg_popup_window_pane

0x640a,	// (0x00044e2f) find_popup_pane_cp2_ParamLimits

0x640a,	// (0x00044e2f) find_popup_pane_cp2

0x6416,	// (0x00044e3b) heading_pane_ParamLimits

0x6416,	// (0x00044e3b) heading_pane

0x37ee,	// (0x00042213) bg_popup_sub_pane

0xdc8d,	// (0x0004c6b2) bg_popup_window_pane_g1_ParamLimits

0xdc8d,	// (0x0004c6b2) bg_popup_window_pane_g1

0xdc9c,	// (0x0004c6c1) bg_popup_window_pane_g2_ParamLimits

0xdc9c,	// (0x0004c6c1) bg_popup_window_pane_g2

0xdca8,	// (0x0004c6cd) bg_popup_window_pane_g3_ParamLimits

0xdca8,	// (0x0004c6cd) bg_popup_window_pane_g3

0xdcb4,	// (0x0004c6d9) bg_popup_window_pane_g4_ParamLimits

0xdcb4,	// (0x0004c6d9) bg_popup_window_pane_g4

0xdcc3,	// (0x0004c6e8) bg_popup_window_pane_g5_ParamLimits

0xdcc3,	// (0x0004c6e8) bg_popup_window_pane_g5

0xdcd3,	// (0x0004c6f8) bg_popup_window_pane_g6_ParamLimits

0xdcd3,	// (0x0004c6f8) bg_popup_window_pane_g6

0xdcdf,	// (0x0004c704) bg_popup_window_pane_g7_ParamLimits

0xdcdf,	// (0x0004c704) bg_popup_window_pane_g7

0xdcee,	// (0x0004c713) bg_popup_window_pane_g8_ParamLimits

0xdcee,	// (0x0004c713) bg_popup_window_pane_g8

0xdcfd,	// (0x0004c722) bg_popup_window_pane_g9_ParamLimits

0xdcfd,	// (0x0004c722) bg_popup_window_pane_g9

0x63f0,	// (0x00044e15) bg_popup_window_pane_g10_ParamLimits

0x63f0,	// (0x00044e15) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004e2fa) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004e2fa) bg_popup_window_pane_g

0x6319,	// (0x00044d3e) bg_popup_heading_pane_ParamLimits

0x6319,	// (0x00044d3e) bg_popup_heading_pane

0x26c7,	// (0x000410ec) tabs_4_passive_pane_cp_srt_ParamLimits

0x26c7,	// (0x000410ec) tabs_4_passive_pane_cp_srt

0x26d9,	// (0x000410fe) tabs_4_passive_pane_srt_ParamLimits

0x632d,	// (0x00044d52) heading_pane_g2

0x26d9,	// (0x000410fe) tabs_4_passive_pane_srt

0x5698,	// (0x000440bd) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5698,	// (0x000440bd) bg_passive_tab_pane_cp3_srt

0x6335,	// (0x00044d5a) heading_pane_t1_ParamLimits

0x6335,	// (0x00044d5a) heading_pane_t1

0x634c,	// (0x00044d71) heading_pane_t2_ParamLimits

0x634c,	// (0x00044d71) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004e2f5) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004e2f5) heading_pane_t

0x5e46,	// (0x0004486b) bg_popup_heading_pane_g1

0x5ef5,	// (0x0004491a) bg_popup_heading_pane_g2

0x5eff,	// (0x00044924) bg_popup_heading_pane_g3

0x5f09,	// (0x0004492e) bg_popup_heading_pane_g4

0x5f13,	// (0x00044938) bg_popup_heading_pane_g5

0x5f1d,	// (0x00044942) bg_popup_heading_pane_g6

0x5f25,	// (0x0004494a) bg_popup_heading_pane_g7

0x5f2d,	// (0x00044952) bg_popup_heading_pane_g8

0x5f37,	// (0x0004495c) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004e2b1) bg_popup_heading_pane_g

0x5624,	// (0x00044049) bg_popup_sub_pane_g1

0x562c,	// (0x00044051) bg_popup_sub_pane_g2

0x5634,	// (0x00044059) bg_popup_sub_pane_g3

0x563c,	// (0x00044061) bg_popup_sub_pane_g4

0x5644,	// (0x00044069) bg_popup_sub_pane_g5

0x564c,	// (0x00044071) bg_popup_sub_pane_g6

0x5654,	// (0x00044079) bg_popup_sub_pane_g7

0x565c,	// (0x00044081) bg_popup_sub_pane_g8

0x5664,	// (0x00044089) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004e28b) bg_popup_sub_pane_g

0x3b49,	// (0x0004256e) bg_popup_window_pane_cp5_ParamLimits

0x3b49,	// (0x0004256e) bg_popup_window_pane_cp5

0x3b65,	// (0x0004258a) popup_note_window_g1_ParamLimits

0x3b65,	// (0x0004258a) popup_note_window_g1

0x3b71,	// (0x00042596) popup_note_window_t1_ParamLimits

0x3b71,	// (0x00042596) popup_note_window_t1

0x3b87,	// (0x000425ac) popup_note_window_t2_ParamLimits

0x3b87,	// (0x000425ac) popup_note_window_t2

0x3b9d,	// (0x000425c2) popup_note_window_t3_ParamLimits

0x3b9d,	// (0x000425c2) popup_note_window_t3

0x3bb3,	// (0x000425d8) popup_note_window_t4_ParamLimits

0x3bb3,	// (0x000425d8) popup_note_window_t4

0x3bdb,	// (0x00042600) popup_note_window_t5_ParamLimits

0x3bdb,	// (0x00042600) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004dfa4) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004dfa4) popup_note_window_t

0x3bff,	// (0x00042624) bg_popup_window_pane_cp6_ParamLimits

0x3bff,	// (0x00042624) bg_popup_window_pane_cp6

0x5dc2,	// (0x000447e7) popup_note_image_window_g1_ParamLimits

0x5dc2,	// (0x000447e7) popup_note_image_window_g1

0x5dce,	// (0x000447f3) popup_note_image_window_g2_ParamLimits

0x5dce,	// (0x000447f3) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004e27f) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004e27f) popup_note_image_window_g

0x5de7,	// (0x0004480c) popup_note_image_window_t1_ParamLimits

0x5de7,	// (0x0004480c) popup_note_image_window_t1

0x5e00,	// (0x00044825) popup_note_image_window_t2_ParamLimits

0x5e00,	// (0x00044825) popup_note_image_window_t2

0x5e19,	// (0x0004483e) popup_note_image_window_t3_ParamLimits

0x5e19,	// (0x0004483e) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004e284) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004e284) popup_note_image_window_t

0x5c83,	// (0x000446a8) bg_popup_window_pane_cp7_ParamLimits

0x5c83,	// (0x000446a8) bg_popup_window_pane_cp7

0x5cb3,	// (0x000446d8) popup_note_wait_window_g1_ParamLimits

0x5cb3,	// (0x000446d8) popup_note_wait_window_g1

0x5cbf,	// (0x000446e4) popup_note_wait_window_g2_ParamLimits

0x5cbf,	// (0x000446e4) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004e26d) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004e26d) popup_note_wait_window_g

0x5cd7,	// (0x000446fc) popup_note_wait_window_t1_ParamLimits

0x5cd7,	// (0x000446fc) popup_note_wait_window_t1

0x5cfe,	// (0x00044723) popup_note_wait_window_t2_ParamLimits

0x5cfe,	// (0x00044723) popup_note_wait_window_t2

0x5d1b,	// (0x00044740) popup_note_wait_window_t3_ParamLimits

0x5d1b,	// (0x00044740) popup_note_wait_window_t3

0x5d2e,	// (0x00044753) popup_note_wait_window_t4_ParamLimits

0x5d2e,	// (0x00044753) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004e274) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004e274) popup_note_wait_window_t

0x5d53,	// (0x00044778) wait_bar_pane_ParamLimits

0x5d53,	// (0x00044778) wait_bar_pane

0x37ee,	// (0x00042213) wait_anim_pane

0x37ee,	// (0x00042213) wait_border_pane

0x37e4,	// (0x00042209) wait_anim_pane_g1

0x37e4,	// (0x00042209) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004e12d) wait_anim_pane_g

0x5c27,	// (0x0004464c) wait_border_pane_g1

0x5c32,	// (0x00044657) wait_border_pane_g2

0x5c3b,	// (0x00044660) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004e266) wait_border_pane_g

0x5a92,	// (0x000444b7) bg_popup_window_pane_cp16_ParamLimits

0x5a92,	// (0x000444b7) bg_popup_window_pane_cp16

0x5b92,	// (0x000445b7) indicator_popup_pane_cp4_ParamLimits

0x5b92,	// (0x000445b7) indicator_popup_pane_cp4

0x5ba6,	// (0x000445cb) popup_query_data_window_t1_ParamLimits

0x5ba6,	// (0x000445cb) popup_query_data_window_t1

0x5bb8,	// (0x000445dd) popup_query_data_window_t2_ParamLimits

0x5bb8,	// (0x000445dd) popup_query_data_window_t2

0x5bd1,	// (0x000445f6) popup_query_data_window_t3_ParamLimits

0x5bd1,	// (0x000445f6) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004e25f) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004e25f) popup_query_data_window_t

0x5beb,	// (0x00044610) query_popup_data_pane_ParamLimits

0x5beb,	// (0x00044610) query_popup_data_pane

0x5bff,	// (0x00044624) query_popup_data_pane_cp1_ParamLimits

0x5bff,	// (0x00044624) query_popup_data_pane_cp1

0x5a92,	// (0x000444b7) bg_popup_window_pane_cp10_ParamLimits

0x5a92,	// (0x000444b7) bg_popup_window_pane_cp10

0x5ac4,	// (0x000444e9) indicator_popup_pane_ParamLimits

0x5ac4,	// (0x000444e9) indicator_popup_pane

0x5ae6,	// (0x0004450b) popup_query_code_window_t1_ParamLimits

0x5ae6,	// (0x0004450b) popup_query_code_window_t1

0x5b00,	// (0x00044525) popup_query_code_window_t2_ParamLimits

0x5b00,	// (0x00044525) popup_query_code_window_t2

0x5b49,	// (0x0004456e) popup_query_code_window_t3_ParamLimits

0x5b49,	// (0x0004456e) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004e258) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004e258) popup_query_code_window_t

0x5b78,	// (0x0004459d) query_popup_pane_ParamLimits

0x5b78,	// (0x0004459d) query_popup_pane

0x3bff,	// (0x00042624) bg_popup_window_pane_cp15_ParamLimits

0x3bff,	// (0x00042624) bg_popup_window_pane_cp15

0x3c1d,	// (0x00042642) indicator_popup_pane_cp1_ParamLimits

0x3c1d,	// (0x00042642) indicator_popup_pane_cp1

0x3c30,	// (0x00042655) indicator_popup_pane_cp2_ParamLimits

0x3c30,	// (0x00042655) indicator_popup_pane_cp2

0x3c43,	// (0x00042668) popup_query_data_code_window_g1_ParamLimits

0x3c43,	// (0x00042668) popup_query_data_code_window_g1

0x3c56,	// (0x0004267b) popup_query_data_code_window_t1_ParamLimits

0x3c56,	// (0x0004267b) popup_query_data_code_window_t1

0x3c68,	// (0x0004268d) popup_query_data_code_window_t2_ParamLimits

0x3c68,	// (0x0004268d) popup_query_data_code_window_t2

0x3c7a,	// (0x0004269f) popup_query_data_code_window_t3_ParamLimits

0x3c7a,	// (0x0004269f) popup_query_data_code_window_t3

0x3c90,	// (0x000426b5) popup_query_data_code_window_t4_ParamLimits

0x3c90,	// (0x000426b5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004dfaf) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004dfaf) popup_query_data_code_window_t

0x22f2,	// (0x00040d17) list_single_midp_graphic_pane_g3

0x3ca8,	// (0x000426cd) query_popup_data_pane_cp2_ParamLimits

0x3cbb,	// (0x000426e0) query_popup_pane_cp2_ParamLimits

0x3cbb,	// (0x000426e0) query_popup_pane_cp2

0x37ee,	// (0x00042213) bg_popup_window_pane_cp11

0x5a8a,	// (0x000444af) heading_pane_cp5

0x3da6,	// (0x000427cb) listscroll_popup_info_pane

0x37ee,	// (0x00042213) input_focus_pane_cp3

0x3cce,	// (0x000426f3) query_popup_pane_t1

0x3cdc,	// (0x00042701) list_popup_info_pane_ParamLimits

0x3cdc,	// (0x00042701) list_popup_info_pane

0x3ceb,	// (0x00042710) listscroll_popup_info_pane_g1

0x3cf3,	// (0x00042718) scroll_pane_cp7

0x3cfd,	// (0x00042722) popup_info_list_pane_t1_ParamLimits

0x3cfd,	// (0x00042722) popup_info_list_pane_t1

0x3d17,	// (0x0004273c) popup_info_list_pane_t2_ParamLimits

0x3d17,	// (0x0004273c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004dfb8) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004dfb8) popup_info_list_pane_t

0x37ee,	// (0x00042213) bg_popup_window_pane_cp12

0x6daf,	// (0x000457d4) find_popup_pane

0x38ce,	// (0x000422f3) bg_popup_window_pane_cp3

0x3d31,	// (0x00042756) heading_pane_cp3

0x3d3d,	// (0x00042762) listscroll_popup_graphic_pane

0x37ee,	// (0x00042213) bg_popup_window_pane_cp4

0xd3c8,	// (0x0004bded) heading_pane_cp4

0x3da6,	// (0x000427cb) listscroll_popup_colour_pane

0x3dae,	// (0x000427d3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3dae,	// (0x000427d3) cell_large_graphic_colour_none_popup_pane

0xd3d0,	// (0x0004bdf5) grid_large_graphic_colour_popup_pane_ParamLimits

0xd3d0,	// (0x0004bdf5) grid_large_graphic_colour_popup_pane

0x3dee,	// (0x00042813) listscroll_popup_colour_pane_g1_ParamLimits

0x3dee,	// (0x00042813) listscroll_popup_colour_pane_g1

0x3e05,	// (0x0004282a) listscroll_popup_colour_pane_g2_ParamLimits

0x3e05,	// (0x0004282a) listscroll_popup_colour_pane_g2

0x3e1c,	// (0x00042841) listscroll_popup_colour_pane_g3_ParamLimits

0x3e1c,	// (0x00042841) listscroll_popup_colour_pane_g3

0xd3f4,	// (0x0004be19) listscroll_popup_colour_pane_g4_ParamLimits

0xd3f4,	// (0x0004be19) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004dfbd) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004dfbd) listscroll_popup_colour_pane_g

0x3e40,	// (0x00042865) scroll_pane_cp6_ParamLimits

0x3e40,	// (0x00042865) scroll_pane_cp6

0xd404,	// (0x0004be29) cell_large_graphic_colour_popup_pane_ParamLimits

0xd404,	// (0x0004be29) cell_large_graphic_colour_popup_pane

0x3e71,	// (0x00042896) cell_large_graphic_colour_none_popup_pane_t1

0x37ee,	// (0x00042213) grid_highlight_pane_cp5

0x3e80,	// (0x000428a5) cell_large_graphic_colour_popup_pane_g1

0x3e88,	// (0x000428ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004dfc6) cell_large_graphic_colour_popup_pane_g

0x3e90,	// (0x000428b5) cell_large_graphic_colour_popup_pane_g2_copy1

0x3e99,	// (0x000428be) grid_highlight_pane_cp4

0x3ea1,	// (0x000428c6) bg_popup_window_pane_cp8_ParamLimits

0x3ea1,	// (0x000428c6) bg_popup_window_pane_cp8

0x3ebc,	// (0x000428e1) popup_snote_single_text_window_g1_ParamLimits

0x3ebc,	// (0x000428e1) popup_snote_single_text_window_g1

0x3ece,	// (0x000428f3) popup_snote_single_text_window_t1_ParamLimits

0x3ece,	// (0x000428f3) popup_snote_single_text_window_t1

0x3ee1,	// (0x00042906) popup_snote_single_text_window_t2_ParamLimits

0x3ee1,	// (0x00042906) popup_snote_single_text_window_t2

0x3ef4,	// (0x00042919) popup_snote_single_text_window_t3_ParamLimits

0x3ef4,	// (0x00042919) popup_snote_single_text_window_t3

0x3f2d,	// (0x00042952) popup_snote_single_text_window_t4_ParamLimits

0x3f2d,	// (0x00042952) popup_snote_single_text_window_t4

0x3f61,	// (0x00042986) popup_snote_single_text_window_t5_ParamLimits

0x3f61,	// (0x00042986) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004dfcb) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004dfcb) popup_snote_single_text_window_t

0x3f90,	// (0x000429b5) bg_popup_window_pane_cp9_ParamLimits

0x3f90,	// (0x000429b5) bg_popup_window_pane_cp9

0x3ebc,	// (0x000428e1) popup_snote_single_graphic_window_g1_ParamLimits

0x3ebc,	// (0x000428e1) popup_snote_single_graphic_window_g1

0x3f9e,	// (0x000429c3) popup_snote_single_graphic_window_g2_ParamLimits

0x3f9e,	// (0x000429c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004dfd6) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004dfd6) popup_snote_single_graphic_window_g

0x3faa,	// (0x000429cf) popup_snote_single_graphic_window_t1_ParamLimits

0x3faa,	// (0x000429cf) popup_snote_single_graphic_window_t1

0x3fbd,	// (0x000429e2) popup_snote_single_graphic_window_t2_ParamLimits

0x3fbd,	// (0x000429e2) popup_snote_single_graphic_window_t2

0x3fd0,	// (0x000429f5) popup_snote_single_graphic_window_t3_ParamLimits

0x3fd0,	// (0x000429f5) popup_snote_single_graphic_window_t3

0x4009,	// (0x00042a2e) popup_snote_single_graphic_window_t4_ParamLimits

0x4009,	// (0x00042a2e) popup_snote_single_graphic_window_t4

0x403d,	// (0x00042a62) popup_snote_single_graphic_window_t5_ParamLimits

0x403d,	// (0x00042a62) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004dfdb) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004dfdb) popup_snote_single_graphic_window_t

0x6cf1,	// (0x00045716) grid_graphic_popup_pane_ParamLimits

0x6cf1,	// (0x00045716) grid_graphic_popup_pane

0x6d1b,	// (0x00045740) listscroll_popup_graphic_pane_g1_ParamLimits

0x6d1b,	// (0x00045740) listscroll_popup_graphic_pane_g1

0xdff6,	// (0x0004ca1b) listscroll_popup_graphic_pane_g2_ParamLimits

0xdff6,	// (0x0004ca1b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004e3d5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004e3d5) listscroll_popup_graphic_pane_g

0x6d43,	// (0x00045768) scroll_pane_cp5

0xdf9b,	// (0x0004c9c0) cell_graphic_popup_pane_ParamLimits

0xdf9b,	// (0x0004c9c0) cell_graphic_popup_pane

0x6c71,	// (0x00045696) cell_graphic_popup_pane_g1

0x6c79,	// (0x0004569e) cell_graphic_popup_pane_g2

0x3e90,	// (0x000428b5) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004e3ce) cell_graphic_popup_pane_g

0x6c82,	// (0x000456a7) cell_graphic_popup_pane_t2

0x3e99,	// (0x000428be) grid_highlight_pane_cp3

0x407e,	// (0x00042aa3) list_gen_pane_ParamLimits

0x407e,	// (0x00042aa3) list_gen_pane

0x40b0,	// (0x00042ad5) scroll_pane

0xdf52,	// (0x0004c977) bg_list_pane_g1_ParamLimits

0xdf52,	// (0x0004c977) bg_list_pane_g1

0x6be6,	// (0x0004560b) bg_list_pane_g2_ParamLimits

0x6be6,	// (0x0004560b) bg_list_pane_g2

0x6bfb,	// (0x00045620) bg_list_pane_g3_ParamLimits

0x6bfb,	// (0x00045620) bg_list_pane_g3

0x6c0f,	// (0x00045634) bg_list_pane_g4_ParamLimits

0x6c0f,	// (0x00045634) bg_list_pane_g4

0xdf6f,	// (0x0004c994) bg_list_pane_g5_ParamLimits

0xdf6f,	// (0x0004c994) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004e3c3) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004e3c3) bg_list_pane_g

0xdf1a,	// (0x0004c93f) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double2_graphic_large_graphic_pane

0xdf1a,	// (0x0004c93f) list_double2_graphic_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double2_graphic_pane

0xdf1a,	// (0x0004c93f) list_double2_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double2_large_graphic_pane

0xdf1a,	// (0x0004c93f) list_double2_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double2_pane

0xdf1a,	// (0x0004c93f) list_double_graphic_heading_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double_graphic_heading_pane

0xdf1a,	// (0x0004c93f) list_double_graphic_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double_graphic_pane

0xdf1a,	// (0x0004c93f) list_double_heading_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double_heading_pane

0xdf1a,	// (0x0004c93f) list_double_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double_large_graphic_pane

0xdf1a,	// (0x0004c93f) list_double_number_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double_number_pane

0xdf1a,	// (0x0004c93f) list_double_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double_pane

0xdf1a,	// (0x0004c93f) list_double_time_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_double_time_pane

0xdf1a,	// (0x0004c93f) list_setting_number_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_setting_number_pane

0xdf1a,	// (0x0004c93f) list_setting_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_setting_pane

0xdf2c,	// (0x0004c951) list_single_2graphic_pane_ParamLimits

0xdf2c,	// (0x0004c951) list_single_2graphic_pane

0xdf2c,	// (0x0004c951) list_single_graphic_heading_pane_ParamLimits

0xdf2c,	// (0x0004c951) list_single_graphic_heading_pane

0xdf2c,	// (0x0004c951) list_single_graphic_pane_ParamLimits

0xdf2c,	// (0x0004c951) list_single_graphic_pane

0xdf2c,	// (0x0004c951) list_single_heading_pane_ParamLimits

0xdf2c,	// (0x0004c951) list_single_heading_pane

0xdf1a,	// (0x0004c93f) list_single_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0004c93f) list_single_large_graphic_pane

0xdf2c,	// (0x0004c951) list_single_number_heading_pane_ParamLimits

0xdf2c,	// (0x0004c951) list_single_number_heading_pane

0xdf2c,	// (0x0004c951) list_single_number_pane_ParamLimits

0xdf2c,	// (0x0004c951) list_single_number_pane

0xdf2c,	// (0x0004c951) list_single_pane_ParamLimits

0xdf2c,	// (0x0004c951) list_single_pane

0x37ee,	// (0x00042213) list_highlight_pane_cp1

0x4d09,	// (0x0004372e) list_single_pane_g1_ParamLimits

0x4d09,	// (0x0004372e) list_single_pane_g1

0x22c1,	// (0x00040ce6) list_single_pane_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_single_pane_g

0x0c3d,	// (0x0003f662) list_single_pane_t1_ParamLimits

0x0c3d,	// (0x0003f662) list_single_pane_t1

0x4d09,	// (0x0004372e) list_single_number_pane_g1_ParamLimits

0x4d09,	// (0x0004372e) list_single_number_pane_g1

0x22c1,	// (0x00040ce6) list_single_number_pane_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_single_number_pane_g

0x09ce,	// (0x0003f3f3) list_single_number_pane_t1_ParamLimits

0x09ce,	// (0x0003f3f3) list_single_number_pane_t1

0xbd99,	// (0x0004a7be) list_single_number_pane_t2_ParamLimits

0xbd99,	// (0x0004a7be) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004e384) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004e384) list_single_number_pane_t

0xb74d,	// (0x0004a172) list_single_graphic_pane_g1_ParamLimits

0xb74d,	// (0x0004a172) list_single_graphic_pane_g1

0x4d09,	// (0x0004372e) list_single_graphic_pane_g2_ParamLimits

0x4d09,	// (0x0004372e) list_single_graphic_pane_g2

0x22c1,	// (0x00040ce6) list_single_graphic_pane_g3_ParamLimits

0x22c1,	// (0x00040ce6) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004dfe6) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004dfe6) list_single_graphic_pane_g

0xb759,	// (0x0004a17e) list_single_graphic_pane_t1_ParamLimits

0xb759,	// (0x0004a17e) list_single_graphic_pane_t1

0xb76f,	// (0x0004a194) list_single_heading_pane_g1_ParamLimits

0xb76f,	// (0x0004a194) list_single_heading_pane_g1

0x22c1,	// (0x00040ce6) list_single_heading_pane_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004dfed) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004dfed) list_single_heading_pane_g

0xb782,	// (0x0004a1a7) list_single_heading_pane_t1_ParamLimits

0xb782,	// (0x0004a1a7) list_single_heading_pane_t1

0xc132,	// (0x0004ab57) list_single_heading_pane_t2_ParamLimits

0xc132,	// (0x0004ab57) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004dff2) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004dff2) list_single_heading_pane_t

0x4d09,	// (0x0004372e) list_single_number_heading_pane_g1_ParamLimits

0x4d09,	// (0x0004372e) list_single_number_heading_pane_g1

0x22c1,	// (0x00040ce6) list_single_number_heading_pane_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_single_number_heading_pane_g

0xb798,	// (0x0004a1bd) list_single_number_heading_pane_t1_ParamLimits

0xb798,	// (0x0004a1bd) list_single_number_heading_pane_t1

0x0c07,	// (0x0003f62c) list_single_number_heading_pane_t2_ParamLimits

0x0c07,	// (0x0003f62c) list_single_number_heading_pane_t2

0x0c19,	// (0x0003f63e) list_single_number_heading_pane_t3_ParamLimits

0x0c19,	// (0x0003f63e) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004dffc) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004dffc) list_single_number_heading_pane_t

0xb7ae,	// (0x0004a1d3) list_single_graphic_heading_pane_g1_ParamLimits

0xb7ae,	// (0x0004a1d3) list_single_graphic_heading_pane_g1

0xc144,	// (0x0004ab69) list_single_graphic_heading_pane_g4_ParamLimits

0xc144,	// (0x0004ab69) list_single_graphic_heading_pane_g4

0x22c1,	// (0x00040ce6) list_single_graphic_heading_pane_g5_ParamLimits

0x22c1,	// (0x00040ce6) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004e003) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004e003) list_single_graphic_heading_pane_g

0xb798,	// (0x0004a1bd) list_single_graphic_heading_pane_t1_ParamLimits

0xb798,	// (0x0004a1bd) list_single_graphic_heading_pane_t1

0xb7c6,	// (0x0004a1eb) list_single_graphic_heading_pane_t2_ParamLimits

0xb7c6,	// (0x0004a1eb) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004e00a) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004e00a) list_single_graphic_heading_pane_t

0x0c53,	// (0x0003f678) list_single_large_graphic_pane_g1_ParamLimits

0x0c53,	// (0x0003f678) list_single_large_graphic_pane_g1

0x0c5f,	// (0x0003f684) list_single_large_graphic_pane_g2_ParamLimits

0x0c5f,	// (0x0003f684) list_single_large_graphic_pane_g2

0x0c6b,	// (0x0003f690) list_single_large_graphic_pane_g3_ParamLimits

0x0c6b,	// (0x0003f690) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004e00f) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004e00f) list_single_large_graphic_pane_g

0x5c32,	// (0x00044657) wait_border_pane_g2_copy1

0x1672,	// (0x00040097) list_single_large_graphic_pane_g4_cp2

0x0c77,	// (0x0003f69c) list_single_large_graphic_pane_t1_ParamLimits

0x0c77,	// (0x0003f69c) list_single_large_graphic_pane_t1

0x4bf4,	// (0x00043619) list_double_pane_g1_ParamLimits

0x4bf4,	// (0x00043619) list_double_pane_g1

0xc155,	// (0x0004ab7a) list_double_pane_g2_ParamLimits

0xc155,	// (0x0004ab7a) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004e016) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004e016) list_double_pane_g

0xb7dc,	// (0x0004a201) list_double_pane_t1_ParamLimits

0xb7dc,	// (0x0004a201) list_double_pane_t1

0xb7f2,	// (0x0004a217) list_double_pane_t2_ParamLimits

0xb7f2,	// (0x0004a217) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004e01b) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004e01b) list_double_pane_t

0xb804,	// (0x0004a229) list_double2_pane_g1_ParamLimits

0xb804,	// (0x0004a229) list_double2_pane_g1

0xb815,	// (0x0004a23a) list_double2_pane_g2_ParamLimits

0xb815,	// (0x0004a23a) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004e020) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004e020) list_double2_pane_g

0xb821,	// (0x0004a246) list_double2_pane_t1_ParamLimits

0xb821,	// (0x0004a246) list_double2_pane_t1

0xb837,	// (0x0004a25c) list_double2_pane_t2_ParamLimits

0xb837,	// (0x0004a25c) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004e025) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004e025) list_double2_pane_t

0x4bf4,	// (0x00043619) list_double_number_pane_g1_ParamLimits

0x4bf4,	// (0x00043619) list_double_number_pane_g1

0xc155,	// (0x0004ab7a) list_double_number_pane_g2_ParamLimits

0xc155,	// (0x0004ab7a) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004e016) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004e016) list_double_number_pane_g

0xb849,	// (0x0004a26e) list_double_number_pane_t1_ParamLimits

0xb849,	// (0x0004a26e) list_double_number_pane_t1

0xb85b,	// (0x0004a280) list_double_number_pane_t2_ParamLimits

0xb85b,	// (0x0004a280) list_double_number_pane_t2

0xb871,	// (0x0004a296) list_double_number_pane_t3_ParamLimits

0xb871,	// (0x0004a296) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004e02a) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004e02a) list_double_number_pane_t

0xb883,	// (0x0004a2a8) list_double_graphic_pane_g1_ParamLimits

0xb883,	// (0x0004a2a8) list_double_graphic_pane_g1

0xb88f,	// (0x0004a2b4) list_double_graphic_pane_g2_ParamLimits

0xb88f,	// (0x0004a2b4) list_double_graphic_pane_g2

0xb89e,	// (0x0004a2c3) list_double_graphic_pane_g3_ParamLimits

0xb89e,	// (0x0004a2c3) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004e031) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004e031) list_double_graphic_pane_g

0xb8aa,	// (0x0004a2cf) list_double_graphic_pane_t1_ParamLimits

0xb8aa,	// (0x0004a2cf) list_double_graphic_pane_t1

0xb8c0,	// (0x0004a2e5) list_double_graphic_pane_t2_ParamLimits

0xb8c0,	// (0x0004a2e5) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004e03a) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004e03a) list_double_graphic_pane_t

0xb8d2,	// (0x0004a2f7) list_double2_graphic_pane_g1_ParamLimits

0xb8d2,	// (0x0004a2f7) list_double2_graphic_pane_g1

0xb8de,	// (0x0004a303) list_double2_graphic_pane_g2_ParamLimits

0xb8de,	// (0x0004a303) list_double2_graphic_pane_g2

0xc16d,	// (0x0004ab92) list_double2_graphic_pane_g3_ParamLimits

0xc16d,	// (0x0004ab92) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004e03f) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004e03f) list_double2_graphic_pane_g

0xb8ea,	// (0x0004a30f) list_double2_graphic_pane_t1_ParamLimits

0xb8ea,	// (0x0004a30f) list_double2_graphic_pane_t1

0xb900,	// (0x0004a325) list_double2_graphic_pane_t2_ParamLimits

0xb900,	// (0x0004a325) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004e046) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004e046) list_double2_graphic_pane_t

0xb912,	// (0x0004a337) list_double_large_graphic_pane_g1_ParamLimits

0xb912,	// (0x0004a337) list_double_large_graphic_pane_g1

0xb931,	// (0x0004a356) list_double_large_graphic_pane_g2_ParamLimits

0xb931,	// (0x0004a356) list_double_large_graphic_pane_g2

0xc155,	// (0x0004ab7a) list_double_large_graphic_pane_g3_ParamLimits

0xc155,	// (0x0004ab7a) list_double_large_graphic_pane_g3

0xb947,	// (0x0004a36c) list_double_large_graphic_pane_g4_ParamLimits

0xb947,	// (0x0004a36c) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004e04b) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004e04b) list_double_large_graphic_pane_g

0xb959,	// (0x0004a37e) list_double_large_graphic_pane_t1_ParamLimits

0xb959,	// (0x0004a37e) list_double_large_graphic_pane_t1

0xb972,	// (0x0004a397) list_double_large_graphic_pane_t2_ParamLimits

0xb972,	// (0x0004a397) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004e056) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004e056) list_double_large_graphic_pane_t

0xb984,	// (0x0004a3a9) list_double2_large_graphic_pane_g1_ParamLimits

0xb984,	// (0x0004a3a9) list_double2_large_graphic_pane_g1

0xb990,	// (0x0004a3b5) list_double2_large_graphic_pane_g2_ParamLimits

0xb990,	// (0x0004a3b5) list_double2_large_graphic_pane_g2

0xc16d,	// (0x0004ab92) list_double2_large_graphic_pane_g3_ParamLimits

0xc16d,	// (0x0004ab92) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004e05b) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004e05b) list_double2_large_graphic_pane_g

0xb9a1,	// (0x0004a3c6) list_double2_large_graphic_pane_t1_ParamLimits

0xb9a1,	// (0x0004a3c6) list_double2_large_graphic_pane_t1

0xb9b7,	// (0x0004a3dc) list_double2_large_graphic_pane_t2_ParamLimits

0xb9b7,	// (0x0004a3dc) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004e062) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004e062) list_double2_large_graphic_pane_t

0xb9c9,	// (0x0004a3ee) list_double_heading_pane_g1_ParamLimits

0xb9c9,	// (0x0004a3ee) list_double_heading_pane_g1

0xb9da,	// (0x0004a3ff) list_double_heading_pane_g2_ParamLimits

0xb9da,	// (0x0004a3ff) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004e067) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004e067) list_double_heading_pane_g

0xb9e6,	// (0x0004a40b) list_double_heading_pane_t1_ParamLimits

0xb9e6,	// (0x0004a40b) list_double_heading_pane_t1

0xb837,	// (0x0004a25c) list_double_heading_pane_t2_ParamLimits

0xb837,	// (0x0004a25c) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004e06c) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004e06c) list_double_heading_pane_t

0xb9fc,	// (0x0004a421) list_double_graphic_heading_pane_g1_ParamLimits

0xb9fc,	// (0x0004a421) list_double_graphic_heading_pane_g1

0xb9c9,	// (0x0004a3ee) list_double_graphic_heading_pane_g2_ParamLimits

0xb9c9,	// (0x0004a3ee) list_double_graphic_heading_pane_g2

0xb9da,	// (0x0004a3ff) list_double_graphic_heading_pane_g3_ParamLimits

0xb9da,	// (0x0004a3ff) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004e071) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004e071) list_double_graphic_heading_pane_g

0xba08,	// (0x0004a42d) list_double_graphic_heading_pane_t1_ParamLimits

0xba08,	// (0x0004a42d) list_double_graphic_heading_pane_t1

0xb900,	// (0x0004a325) list_double_graphic_heading_pane_t2_ParamLimits

0xb900,	// (0x0004a325) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004e078) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004e078) list_double_graphic_heading_pane_t

0xba1e,	// (0x0004a443) list_double_time_pane_g1_ParamLimits

0xba1e,	// (0x0004a443) list_double_time_pane_g1

0xba2f,	// (0x0004a454) list_double_time_pane_g2_ParamLimits

0xba2f,	// (0x0004a454) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004e07d) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004e07d) list_double_time_pane_g

0xba3b,	// (0x0004a460) list_double_time_pane_t1_ParamLimits

0xba3b,	// (0x0004a460) list_double_time_pane_t1

0xba51,	// (0x0004a476) list_double_time_pane_t2_ParamLimits

0xba51,	// (0x0004a476) list_double_time_pane_t2

0xba63,	// (0x0004a488) list_double_time_pane_t3_ParamLimits

0xba63,	// (0x0004a488) list_double_time_pane_t3

0xba75,	// (0x0004a49a) list_double_time_pane_t4_ParamLimits

0xba75,	// (0x0004a49a) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004e082) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004e082) list_double_time_pane_t

0xba87,	// (0x0004a4ac) list_setting_pane_g1_ParamLimits

0xba87,	// (0x0004a4ac) list_setting_pane_g1

0xb815,	// (0x0004a23a) list_setting_pane_g2_ParamLimits

0xb815,	// (0x0004a23a) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004e08b) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004e08b) list_setting_pane_g

0xba93,	// (0x0004a4b8) list_setting_pane_t1_ParamLimits

0xba93,	// (0x0004a4b8) list_setting_pane_t1

0xbaad,	// (0x0004a4d2) list_setting_pane_t2_ParamLimits

0xbaad,	// (0x0004a4d2) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004e090) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004e090) list_setting_pane_t

0xbaec,	// (0x0004a511) set_value_pane_cp_ParamLimits

0xbaec,	// (0x0004a511) set_value_pane_cp

0xbaf8,	// (0x0004a51d) list_setting_number_pane_g1_ParamLimits

0xbaf8,	// (0x0004a51d) list_setting_number_pane_g1

0xbb04,	// (0x0004a529) list_setting_number_pane_g2_ParamLimits

0xbb04,	// (0x0004a529) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004e097) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004e097) list_setting_number_pane_g

0xbb10,	// (0x0004a535) list_setting_number_pane_t1_ParamLimits

0xbb10,	// (0x0004a535) list_setting_number_pane_t1

0xbb29,	// (0x0004a54e) list_setting_number_pane_t2_ParamLimits

0xbb29,	// (0x0004a54e) list_setting_number_pane_t2

0xbb43,	// (0x0004a568) list_setting_number_pane_t3_ParamLimits

0xbb43,	// (0x0004a568) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004e09c) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004e09c) list_setting_number_pane_t

0xbaec,	// (0x0004a511) set_value_pane_ParamLimits

0xbaec,	// (0x0004a511) set_value_pane

0x40f0,	// (0x00042b15) bg_set_opt_pane_ParamLimits

0x40f0,	// (0x00042b15) bg_set_opt_pane

0x065f,	// (0x0003f084) set_value_pane_t1

0x4111,	// (0x00042b36) slider_set_pane_cp3

0x411a,	// (0x00042b3f) volume_small_pane_cp

0x4123,	// (0x00042b48) list_form_gen_pane

0x412c,	// (0x00042b51) scroll_pane_cp8

0xbb86,	// (0x0004a5ab) form_field_data_pane_ParamLimits

0xbb86,	// (0x0004a5ab) form_field_data_pane

0xbb9d,	// (0x0004a5c2) form_field_data_wide_pane_ParamLimits

0xbb9d,	// (0x0004a5c2) form_field_data_wide_pane

0xbbbd,	// (0x0004a5e2) form_field_popup_pane_ParamLimits

0xbbbd,	// (0x0004a5e2) form_field_popup_pane

0xbbd5,	// (0x0004a5fa) form_field_popup_wide_pane_ParamLimits

0xbbd5,	// (0x0004a5fa) form_field_popup_wide_pane

0x06fb,	// (0x0003f120) form_field_slider_pane_ParamLimits

0x06fb,	// (0x0003f120) form_field_slider_pane

0x070e,	// (0x0003f133) form_field_slider_wide_pane_ParamLimits

0x070e,	// (0x0003f133) form_field_slider_wide_pane

0x413d,	// (0x00042b62) data_form_pane

0xbbf6,	// (0x0004a61b) form_field_data_pane_t1

0x4149,	// (0x00042b6e) input_focus_pane

0x0743,	// (0x0003f168) data_form_wide_pane

0x0760,	// (0x0003f185) form_field_data_wide_pane_t1

0x3eae,	// (0x000428d3) input_focus_pane_cp6

0xbc10,	// (0x0004a635) form_field_popup_pane_t1

0x4149,	// (0x00042b6e) input_focus_pane_cp7

0x416b,	// (0x00042b90) list_form_pane

0x07a2,	// (0x0003f1c7) form_field_popup_wide_pane_t1

0x4149,	// (0x00042b6e) input_focus_pane_cp8

0x4177,	// (0x00042b9c) list_form_wide_pane

0xbc32,	// (0x0004a657) form_field_slider_pane_t1_ParamLimits

0xbc32,	// (0x0004a657) form_field_slider_pane_t1

0xbc4a,	// (0x0004a66f) form_field_slider_pane_t2_ParamLimits

0xbc4a,	// (0x0004a66f) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004e0ac) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004e0ac) form_field_slider_pane_t

0x3b49,	// (0x0004256e) input_focus_pane_cp9_ParamLimits

0x3b49,	// (0x0004256e) input_focus_pane_cp9

0xbc5f,	// (0x0004a684) slider_cont_pane_ParamLimits

0xbc5f,	// (0x0004a684) slider_cont_pane

0x4183,	// (0x00042ba8) form_field_slider_wide_pane_t1_ParamLimits

0x4183,	// (0x00042ba8) form_field_slider_wide_pane_t1

0x07fe,	// (0x0003f223) form_field_slider_wide_pane_t2_ParamLimits

0x07fe,	// (0x0003f223) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004e0b1) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004e0b1) form_field_slider_wide_pane_t

0x3b49,	// (0x0004256e) input_focus_pane_cp10_ParamLimits

0x3b49,	// (0x0004256e) input_focus_pane_cp10

0xbc73,	// (0x0004a698) slider_cont_pane_cp1_ParamLimits

0xbc73,	// (0x0004a698) slider_cont_pane_cp1

0xbc87,	// (0x0004a6ac) slider_form_pane_cp

0x4195,	// (0x00042bba) input_focus_pane_g1

0x419d,	// (0x00042bc2) input_focus_pane_g2

0x41a5,	// (0x00042bca) input_focus_pane_g3

0x41ad,	// (0x00042bd2) input_focus_pane_g4

0x41b5,	// (0x00042bda) input_focus_pane_g5

0x41bd,	// (0x00042be2) input_focus_pane_g6

0x41c5,	// (0x00042bea) input_focus_pane_g7

0x41cd,	// (0x00042bf2) input_focus_pane_g8

0x41d5,	// (0x00042bfa) input_focus_pane_g9

0x37e4,	// (0x00042209) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004e0b6) input_focus_pane_g

0x5c3b,	// (0x00044660) wait_border_pane_g3_copy1

0xbc8f,	// (0x0004a6b4) data_form_pane_t1

0x37e4,	// (0x00042209) wait_anim_pane_g1_copy1

0xbdab,	// (0x0004a7d0) data_form_wide_pane_t1

0xbca8,	// (0x0004a6cd) list_form_graphic_pane_cp_ParamLimits

0xbca8,	// (0x0004a6cd) list_form_graphic_pane_cp

0x6b5b,	// (0x00045580) slider_form_pane_g1

0x6b64,	// (0x00045589) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004e3b4) slider_form_pane_g

0xbcb9,	// (0x0004a6de) list_form_graphic_pane_ParamLimits

0xbcb9,	// (0x0004a6de) list_form_graphic_pane

0x087c,	// (0x0003f2a1) list_form_graphic_pane_g1

0x0884,	// (0x0003f2a9) list_form_graphic_pane_t1_ParamLimits

0x0884,	// (0x0003f2a9) list_form_graphic_pane_t1

0x38ce,	// (0x000422f3) list_highlight_pane_cp5_ParamLimits

0x38ce,	// (0x000422f3) list_highlight_pane_cp5

0xbccb,	// (0x0004a6f0) find_pane_g1

0x41dd,	// (0x00042c02) input_find_pane

0xbcd4,	// (0x0004a6f9) input_find_pane_g1_ParamLimits

0xbcd4,	// (0x0004a6f9) input_find_pane_g1

0xbce0,	// (0x0004a705) input_find_pane_t1_ParamLimits

0xbce0,	// (0x0004a705) input_find_pane_t1

0xbcf5,	// (0x0004a71a) input_find_pane_t2_ParamLimits

0xbcf5,	// (0x0004a71a) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004e0cb) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004e0cb) input_find_pane_t

0x41e6,	// (0x00042c0b) input_focus_pane_cp5_ParamLimits

0x41e6,	// (0x00042c0b) input_focus_pane_cp5

0x4200,	// (0x00042c25) bg_popup_window_pane_cp2_ParamLimits

0x4200,	// (0x00042c25) bg_popup_window_pane_cp2

0x420d,	// (0x00042c32) listscroll_menu_pane_ParamLimits

0x420d,	// (0x00042c32) listscroll_menu_pane

0xd439,	// (0x0004be5e) popup_submenu_window_ParamLimits

0xd439,	// (0x0004be5e) popup_submenu_window

0x4245,	// (0x00042c6a) find_popup_pane_g1

0x424d,	// (0x00042c72) input_popup_find_pane_cp

0x41e6,	// (0x00042c0b) input_focus_pane_cp4_ParamLimits

0x41e6,	// (0x00042c0b) input_focus_pane_cp4

0x4263,	// (0x00042c88) input_popup_find_pane_t1_ParamLimits

0x4263,	// (0x00042c88) input_popup_find_pane_t1

0x37ee,	// (0x00042213) bg_popup_sub_pane_cp

0x4291,	// (0x00042cb6) listscroll_popup_sub_pane

0x4299,	// (0x00042cbe) list_submenu_pane_ParamLimits

0x4299,	// (0x00042cbe) list_submenu_pane

0x42aa,	// (0x00042ccf) scroll_pane_cp4

0x42b2,	// (0x00042cd7) list_single_popup_submenu_pane_ParamLimits

0x42b2,	// (0x00042cd7) list_single_popup_submenu_pane

0x42c6,	// (0x00042ceb) list_single_popup_submenu_pane_g1

0x42ce,	// (0x00042cf3) list_single_popup_submenu_pane_t1_ParamLimits

0x42ce,	// (0x00042cf3) list_single_popup_submenu_pane_t1

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp1_ParamLimits

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp1

0x42e3,	// (0x00042d08) tabs_2_active_pane_g1

0xd473,	// (0x0004be98) tabs_2_active_pane_t1

0x3b49,	// (0x0004256e) bg_passive_tab_pane_cp1_ParamLimits

0x3b49,	// (0x0004256e) bg_passive_tab_pane_cp1

0x42e3,	// (0x00042d08) tabs_2_passive_pane_g1

0xd473,	// (0x0004be98) tabs_2_passive_pane_t1

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp4

0xd485,	// (0x0004beaa) tabs_2_long_active_pane_t1

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp4

0x196c,	// (0x00040391) list_single_midp_graphic_pane_g4_ParamLimits

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp5

0xd498,	// (0x0004bebd) tabs_3_long_active_pane_t1

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp5

0x196c,	// (0x00040391) list_single_midp_graphic_pane_g4

0x38ce,	// (0x000422f3) bg_popup_window_pane_cp13_ParamLimits

0x38ce,	// (0x000422f3) bg_popup_window_pane_cp13

0x4345,	// (0x00042d6a) listscroll_popup_fast_pane_ParamLimits

0x4345,	// (0x00042d6a) listscroll_popup_fast_pane

0x4354,	// (0x00042d79) grid_popup_fast_pane_ParamLimits

0x4354,	// (0x00042d79) grid_popup_fast_pane

0x4366,	// (0x00042d8b) scroll_pane_cp9_ParamLimits

0x4366,	// (0x00042d8b) scroll_pane_cp9

0x83f5,	// (0x00046e1a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x83f5,	// (0x00046e1a) list_single_graphic_hl_pane_t1_cp2

0x438a,	// (0x00042daf) input_focus_pane_cp20_ParamLimits

0x438a,	// (0x00042daf) input_focus_pane_cp20

0x4398,	// (0x00042dbd) query_popup_data_pane_t1_ParamLimits

0x4398,	// (0x00042dbd) query_popup_data_pane_t1

0x43ab,	// (0x00042dd0) query_popup_data_pane_t2_ParamLimits

0x43ab,	// (0x00042dd0) query_popup_data_pane_t2

0x43f1,	// (0x00042e16) query_popup_data_pane_t3_ParamLimits

0x43f1,	// (0x00042e16) query_popup_data_pane_t3

0x4432,	// (0x00042e57) query_popup_data_pane_t4_ParamLimits

0x4432,	// (0x00042e57) query_popup_data_pane_t4

0x446e,	// (0x00042e93) query_popup_data_pane_t5_ParamLimits

0x446e,	// (0x00042e93) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004e0d0) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004e0d0) query_popup_data_pane_t

0x4195,	// (0x00042bba) bg_set_opt_pane_g1

0x419d,	// (0x00042bc2) bg_set_opt_pane_g2

0x41a5,	// (0x00042bca) bg_set_opt_pane_g3

0x41ad,	// (0x00042bd2) bg_set_opt_pane_g4

0x41b5,	// (0x00042bda) bg_set_opt_pane_g5

0x41bd,	// (0x00042be2) bg_set_opt_pane_g6

0x41c5,	// (0x00042bea) bg_set_opt_pane_g7

0x41cd,	// (0x00042bf2) bg_set_opt_pane_g8

0x41d5,	// (0x00042bfa) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004e0db) bg_set_opt_pane_g

0x1978,	// (0x0004039d) control_top_pane_stacon_ParamLimits

0x1978,	// (0x0004039d) control_top_pane_stacon

0x19cb,	// (0x000403f0) signal_pane_stacon_ParamLimits

0x19cb,	// (0x000403f0) signal_pane_stacon

0x4a5e,	// (0x00043483) stacon_top_pane_g1_ParamLimits

0x4a5e,	// (0x00043483) stacon_top_pane_g1

0x19f0,	// (0x00040415) title_pane_stacon_ParamLimits

0x19f0,	// (0x00040415) title_pane_stacon

0x1a1a,	// (0x0004043f) uni_indicator_pane_stacon_ParamLimits

0x1a1a,	// (0x0004043f) uni_indicator_pane_stacon

0x1a2f,	// (0x00040454) battery_pane_stacon_ParamLimits

0x1a2f,	// (0x00040454) battery_pane_stacon

0x1a73,	// (0x00040498) control_bottom_pane_stacon_ParamLimits

0x1a73,	// (0x00040498) control_bottom_pane_stacon

0x1a96,	// (0x000404bb) navi_pane_stacon_ParamLimits

0x1a96,	// (0x000404bb) navi_pane_stacon

0x4a80,	// (0x000434a5) stacon_bottom_pane_g1_ParamLimits

0x4a80,	// (0x000434a5) stacon_bottom_pane_g1

0x16bf,	// (0x000400e4) aid_levels_signal_lsc_ParamLimits

0x16bf,	// (0x000400e4) aid_levels_signal_lsc

0x16d5,	// (0x000400fa) signal_pane_stacon_g1_ParamLimits

0x16d5,	// (0x000400fa) signal_pane_stacon_g1

0x16e9,	// (0x0004010e) signal_pane_stacon_g2_ParamLimits

0x16e9,	// (0x0004010e) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004e0ee) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004e0ee) signal_pane_stacon_g

0x171e,	// (0x00040143) title_pane_stacon_t1_ParamLimits

0x171e,	// (0x00040143) title_pane_stacon_t1

0x44b2,	// (0x00042ed7) uni_indicator_pane_stacon_g1

0x44bc,	// (0x00042ee1) uni_indicator_pane_stacon_g2

0x44c6,	// (0x00042eeb) uni_indicator_pane_stacon_g3

0x44d0,	// (0x00042ef5) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004e0fa) uni_indicator_pane_stacon_g

0x1743,	// (0x00040168) control_top_pane_stacon_g1

0x174b,	// (0x00040170) control_top_pane_stacon_t1_ParamLimits

0x174b,	// (0x00040170) control_top_pane_stacon_t1

0x1782,	// (0x000401a7) aid_levels_battery_lsc_ParamLimits

0x1782,	// (0x000401a7) aid_levels_battery_lsc

0x1799,	// (0x000401be) battery_pane_stacon_g1_ParamLimits

0x1799,	// (0x000401be) battery_pane_stacon_g1

0x17ac,	// (0x000401d1) battery_pane_stacon_g2_ParamLimits

0x17ac,	// (0x000401d1) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004e103) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004e103) battery_pane_stacon_g

0x17ea,	// (0x0004020f) navi_icon_pane_stacon

0x17fe,	// (0x00040223) navi_navi_pane_stacon

0x17ea,	// (0x0004020f) navi_text_pane_stacon

0x1743,	// (0x00040168) control_bottom_pane_stacon_g1

0x1812,	// (0x00040237) control_bottom_pane_stacon_t1_ParamLimits

0x1812,	// (0x00040237) control_bottom_pane_stacon_t1

0xd4aa,	// (0x0004becf) grid_app_pane_ParamLimits

0xd4aa,	// (0x0004becf) grid_app_pane

0xd4e2,	// (0x0004bf07) scroll_pane_cp15_ParamLimits

0xd4e2,	// (0x0004bf07) scroll_pane_cp15

0xd4f7,	// (0x0004bf1c) cell_app_pane_ParamLimits

0xd4f7,	// (0x0004bf1c) cell_app_pane

0xd53c,	// (0x0004bf61) cell_app_pane_g1_ParamLimits

0xd53c,	// (0x0004bf61) cell_app_pane_g1

0x4573,	// (0x00042f98) cell_app_pane_g2_ParamLimits

0x4573,	// (0x00042f98) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004e108) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004e108) cell_app_pane_g

0xd560,	// (0x0004bf85) cell_app_pane_t1_ParamLimits

0xd560,	// (0x0004bf85) cell_app_pane_t1

0x4596,	// (0x00042fbb) grid_highlight_pane_ParamLimits

0x4596,	// (0x00042fbb) grid_highlight_pane

0x4195,	// (0x00042bba) cell_highlight_pane_g1

0x419d,	// (0x00042bc2) cell_highlight_pane_g2

0x41a5,	// (0x00042bca) cell_highlight_pane_g3

0x41ad,	// (0x00042bd2) cell_highlight_pane_g4

0x41b5,	// (0x00042bda) cell_highlight_pane_g5

0x41bd,	// (0x00042be2) cell_highlight_pane_g6

0x41c5,	// (0x00042bea) cell_highlight_pane_g7

0x41cd,	// (0x00042bf2) cell_highlight_pane_g8

0x41d5,	// (0x00042bfa) cell_highlight_pane_g9

0x37e4,	// (0x00042209) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004e0b6) cell_highlight_pane_g

0x45a7,	// (0x00042fcc) bg_scroll_pane

0x185c,	// (0x00040281) scroll_handle_pane

0x45ee,	// (0x00043013) scroll_bg_pane_g1

0x4603,	// (0x00043028) scroll_bg_pane_g2

0x461b,	// (0x00043040) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004e10d) scroll_bg_pane_g

0x4630,	// (0x00043055) scroll_handle_focus_pane_ParamLimits

0x4630,	// (0x00043055) scroll_handle_focus_pane

0x45ee,	// (0x00043013) scroll_handle_pane_g1

0x463d,	// (0x00043062) scroll_handle_pane_g2

0x461b,	// (0x00043040) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004e114) scroll_handle_pane_g

0x41e6,	// (0x00042c0b) bg_popup_sub_pane_cp21_ParamLimits

0x41e6,	// (0x00042c0b) bg_popup_sub_pane_cp21

0x4651,	// (0x00043076) popup_fep_japan_predictive_window_t1_ParamLimits

0x4651,	// (0x00043076) popup_fep_japan_predictive_window_t1

0x466b,	// (0x00043090) popup_fep_japan_predictive_window_t2_ParamLimits

0x466b,	// (0x00043090) popup_fep_japan_predictive_window_t2

0x469e,	// (0x000430c3) popup_fep_japan_predictive_window_t3_ParamLimits

0x469e,	// (0x000430c3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004e11b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004e11b) popup_fep_japan_predictive_window_t

0x37ee,	// (0x00042213) bg_popup_sub_pane_cp23

0x46d5,	// (0x000430fa) listscroll_japin_cand_pane

0x46dd,	// (0x00043102) popup_fep_japan_candidate_window_t1

0x46eb,	// (0x00043110) candidate_pane_ParamLimits

0x46eb,	// (0x00043110) candidate_pane

0x46fd,	// (0x00043122) scroll_pane_cp30

0x4705,	// (0x0004312a) list_single_popup_jap_candidate_pane_ParamLimits

0x4705,	// (0x0004312a) list_single_popup_jap_candidate_pane

0x37ee,	// (0x00042213) list_highlight_pane_cp30

0x471a,	// (0x0004313f) list_single_popup_jap_candidate_pane_t1

0x4729,	// (0x0004314e) level_1_signal

0x473b,	// (0x00043160) level_2_signal

0x474e,	// (0x00043173) level_3_signal

0x4761,	// (0x00043186) level_4_signal

0x4774,	// (0x00043199) level_5_signal

0x4787,	// (0x000431ac) level_6_signal

0x479a,	// (0x000431bf) level_7_signal

0x4729,	// (0x0004314e) level_1_battery

0x473b,	// (0x00043160) level_2_battery

0x474e,	// (0x00043173) level_3_battery

0x4761,	// (0x00043186) level_4_battery

0x4774,	// (0x00043199) level_5_battery

0x4787,	// (0x000431ac) level_6_battery

0x479a,	// (0x000431bf) level_7_battery

0x47c5,	// (0x000431ea) list_menu_pane_ParamLimits

0x47c5,	// (0x000431ea) list_menu_pane

0x47db,	// (0x00043200) scroll_pane_cp25_ParamLimits

0x47db,	// (0x00043200) scroll_pane_cp25

0x47f4,	// (0x00043219) list_double2_graphic_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double2_graphic_pane_cp2

0x47f4,	// (0x00043219) list_double2_large_graphic_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double2_large_graphic_pane_cp2

0x47f4,	// (0x00043219) list_double2_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double2_pane_cp2

0x47f4,	// (0x00043219) list_double_graphic_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double_graphic_pane_cp2

0x47f4,	// (0x00043219) list_double_large_graphic_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double_large_graphic_pane_cp2

0x47f4,	// (0x00043219) list_double_number_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double_number_pane_cp2

0x47f4,	// (0x00043219) list_double_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double_pane_cp2

0xd577,	// (0x0004bf9c) list_single_2graphic_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_2graphic_pane_cp2

0xd577,	// (0x0004bf9c) list_single_graphic_heading_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_graphic_heading_pane_cp2

0xd577,	// (0x0004bf9c) list_single_graphic_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_graphic_pane_cp2

0xd577,	// (0x0004bf9c) list_single_heading_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_heading_pane_cp2

0x4831,	// (0x00043256) list_single_large_graphic_pane_cp2_ParamLimits

0x4831,	// (0x00043256) list_single_large_graphic_pane_cp2

0xd577,	// (0x0004bf9c) list_single_number_heading_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_number_heading_pane_cp2

0xd577,	// (0x0004bf9c) list_single_number_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_number_pane_cp2

0xd577,	// (0x0004bf9c) list_single_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_pane_cp2

0x48ad,	// (0x000432d2) bg_popup_sub_pane_cp22

0x190e,	// (0x00040333) popup_side_volume_key_window_g1

0x1938,	// (0x0004035d) popup_side_volume_key_window_t1

0x1954,	// (0x00040379) volume_small_pane_cp1

0x3b49,	// (0x0004256e) bg_popup_sub_pane_cp24_ParamLimits

0x3b49,	// (0x0004256e) bg_popup_sub_pane_cp24

0x48c3,	// (0x000432e8) fep_china_uni_candidate_pane_ParamLimits

0x48c3,	// (0x000432e8) fep_china_uni_candidate_pane

0x48d7,	// (0x000432fc) fep_china_uni_entry_pane

0x48e7,	// (0x0004330c) popup_fep_china_uni_window_g1

0x4903,	// (0x00043328) fep_china_uni_entry_pane_g1

0x490b,	// (0x00043330) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004e14c) fep_china_uni_entry_pane_g

0x4913,	// (0x00043338) fep_entry_item_pane

0x491d,	// (0x00043342) fep_candidate_item_pane

0x4925,	// (0x0004334a) fep_china_uni_candidate_pane_g1

0x492d,	// (0x00043352) fep_china_uni_candidate_pane_g2

0x4935,	// (0x0004335a) fep_china_uni_candidate_pane_g3

0x493d,	// (0x00043362) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004e151) fep_china_uni_candidate_pane_g

0x37e4,	// (0x00042209) fep_entry_item_pane_g1

0x4945,	// (0x0004336a) fep_entry_item_pane_t1_ParamLimits

0x4945,	// (0x0004336a) fep_entry_item_pane_t1

0x495b,	// (0x00043380) fep_candidate_item_pane_t1_ParamLimits

0x495b,	// (0x00043380) fep_candidate_item_pane_t1

0x4970,	// (0x00043395) fep_candidate_item_pane_t2_ParamLimits

0x4970,	// (0x00043395) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004e15a) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004e15a) fep_candidate_item_pane_t

0x38ce,	// (0x000422f3) list_highlight_pane_cp31_ParamLimits

0x38ce,	// (0x000422f3) list_highlight_pane_cp31

0x4982,	// (0x000433a7) level_1_signal_lsc

0x498b,	// (0x000433b0) level_2_signal_lsc

0x4994,	// (0x000433b9) level_3_signal_lsc

0x499d,	// (0x000433c2) level_4_signal_lsc

0x49a6,	// (0x000433cb) level_5_signal_lsc

0x49af,	// (0x000433d4) level_6_signal_lsc

0x49b8,	// (0x000433dd) level_7_signal_lsc

0x49b8,	// (0x000433dd) level_1_battery_lsc

0x49c1,	// (0x000433e6) level_2_battery_lsc

0x49ca,	// (0x000433ef) level_3_battery_lsc

0x49d3,	// (0x000433f8) level_4_battery_lsc

0x49dc,	// (0x00043401) level_5_battery_lsc

0x49e5,	// (0x0004340a) level_6_battery_lsc

0x4982,	// (0x000433a7) level_7_battery_lsc

0x49ee,	// (0x00043413) scroll_handle_focus_pane_g1

0x49f7,	// (0x0004341c) scroll_handle_focus_pane_g2

0x4a00,	// (0x00043425) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004e15f) scroll_handle_focus_pane_g

0xbd0a,	// (0x0004a72f) list_single_2graphic_pane_g1_ParamLimits

0xbd0a,	// (0x0004a72f) list_single_2graphic_pane_g1

0xc144,	// (0x0004ab69) list_single_2graphic_pane_g2_ParamLimits

0xc144,	// (0x0004ab69) list_single_2graphic_pane_g2

0x22c1,	// (0x00040ce6) list_single_2graphic_pane_g3_ParamLimits

0x22c1,	// (0x00040ce6) list_single_2graphic_pane_g3

0xbd16,	// (0x0004a73b) list_single_2graphic_pane_g4_ParamLimits

0xbd16,	// (0x0004a73b) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004e166) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004e166) list_single_2graphic_pane_g

0xbd22,	// (0x0004a747) list_single_2graphic_pane_t1_ParamLimits

0xbd22,	// (0x0004a747) list_single_2graphic_pane_t1

0xc182,	// (0x0004aba7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc182,	// (0x0004aba7) list_double2_graphic_large_graphic_pane_g1

0xb990,	// (0x0004a3b5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb990,	// (0x0004a3b5) list_double2_graphic_large_graphic_pane_g2

0xc16d,	// (0x0004ab92) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc16d,	// (0x0004ab92) list_double2_graphic_large_graphic_pane_g3

0xbd50,	// (0x0004a775) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd50,	// (0x0004a775) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004e16f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004e16f) list_double2_graphic_large_graphic_pane_g

0xbd5c,	// (0x0004a781) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd5c,	// (0x0004a781) list_double2_graphic_large_graphic_pane_t1

0xbd72,	// (0x0004a797) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd72,	// (0x0004a797) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004e178) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004e178) list_double2_graphic_large_graphic_pane_t

0x4b48,	// (0x0004356d) popup_fast_swap_window_ParamLimits

0x4b48,	// (0x0004356d) popup_fast_swap_window

0x4b64,	// (0x00043589) popup_side_volume_key_window

0x4b80,	// (0x000435a5) stacon_top_pane

0x4b8a,	// (0x000435af) status_pane_ParamLimits

0x4b8a,	// (0x000435af) status_pane

0xd604,	// (0x0004c029) status_small_pane

0x37ee,	// (0x00042213) control_pane

0x37ee,	// (0x00042213) stacon_bottom_pane

0x412c,	// (0x00042b51) scroll_pane_cp121

0x4123,	// (0x00042b48) set_content_pane

0x4a09,	// (0x0004342e) bg_active_tab_pane_g1_cp1

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp1

0x4a1b,	// (0x00043440) bg_active_tab_pane_g3_cp1

0x4a09,	// (0x0004342e) bg_passive_tab_pane_g1_cp1

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp1

0x4a1b,	// (0x00043440) bg_passive_tab_pane_g3_cp1

0x4a24,	// (0x00043449) bg_active_tab_pane_g1_cp2

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp2

0x4a2d,	// (0x00043452) bg_active_tab_pane_g3_cp2

0x4a24,	// (0x00043449) bg_passive_tab_pane_g1_cp2

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp2

0x4a2d,	// (0x00043452) bg_passive_tab_pane_g3_cp2

0x4a36,	// (0x0004345b) bg_active_tab_pane_g1_cp3

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp3

0x4a3f,	// (0x00043464) bg_active_tab_pane_g3_cp3

0x4a36,	// (0x0004345b) bg_passive_tab_pane_g1_cp3

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp3

0x4a3f,	// (0x00043464) bg_passive_tab_pane_g3_cp3

0x4a48,	// (0x0004346d) bg_active_tab_pane_g1_cp4

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp4

0x4a53,	// (0x00043478) bg_active_tab_pane_g3_cp4

0x4a48,	// (0x0004346d) bg_passive_tab_pane_g1_cp4

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp4

0x4a53,	// (0x00043478) bg_passive_tab_pane_g3_cp4

0x4a9c,	// (0x000434c1) bg_active_tab_pane_g1_cp5

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp5

0x4aa5,	// (0x000434ca) bg_active_tab_pane_g3_cp5

0x4a9c,	// (0x000434c1) bg_passive_tab_pane_g1_cp5

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp5

0x4aa5,	// (0x000434ca) bg_passive_tab_pane_g3_cp5

0x7103,	// (0x00045b28) list_set_graphic_pane_ParamLimits

0x7103,	// (0x00045b28) list_set_graphic_pane

0x37ee,	// (0x00042213) bg_set_opt_pane_cp4

0x4acb,	// (0x000434f0) list_set_graphic_pane_g1_ParamLimits

0x4acb,	// (0x000434f0) list_set_graphic_pane_g1

0x4ad7,	// (0x000434fc) list_set_graphic_pane_g2_ParamLimits

0x4ad7,	// (0x000434fc) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004e17d) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004e17d) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0004e4e6) volume_small_pane_cp_g

0x4afb,	// (0x00043520) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4afb,	// (0x00043520) list_double2_large_graphic_pane_g1_cp2

0x4b07,	// (0x0004352c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4b07,	// (0x0004352c) list_double2_large_graphic_pane_g2_cp2

0x4b18,	// (0x0004353d) list_double2_large_graphic_pane_g3_cp2

0x4b20,	// (0x00043545) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4b20,	// (0x00043545) list_double2_large_graphic_pane_t1_cp2

0x4b36,	// (0x0004355b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4b36,	// (0x0004355b) list_double2_large_graphic_pane_t2_cp2

0x670e,	// (0x00045133) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x670e,	// (0x00045133) list_double_large_graphic_pane_g1_cp2

0x671f,	// (0x00045144) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x671f,	// (0x00045144) list_double_large_graphic_pane_g2_cp2

0x4cb1,	// (0x000436d6) list_double_large_graphic_pane_g3_cp2

0x6730,	// (0x00045155) list_double_large_graphic_pane_g4_cp

0x6738,	// (0x0004515d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6738,	// (0x0004515d) list_double_large_graphic_pane_t1_cp2

0x674f,	// (0x00045174) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x674f,	// (0x00045174) list_double_large_graphic_pane_t2_cp2

0x4ba3,	// (0x000435c8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4ba3,	// (0x000435c8) list_double2_graphic_pane_g1_cp2

0x4bb1,	// (0x000435d6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4bb1,	// (0x000435d6) list_double2_graphic_pane_g2_cp2

0x4bc2,	// (0x000435e7) list_double2_graphic_pane_g3_cp2

0x4bcc,	// (0x000435f1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4bcc,	// (0x000435f1) list_double2_graphic_pane_t1_cp2

0x4be2,	// (0x00043607) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4be2,	// (0x00043607) list_double2_graphic_pane_t2_cp2

0x4bf4,	// (0x00043619) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4bf4,	// (0x00043619) list_single_number_heading_pane_g1_cp2

0x4c00,	// (0x00043625) list_single_number_heading_pane_g2_cp2

0x4c08,	// (0x0004362d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4c08,	// (0x0004362d) list_single_number_heading_pane_t1_cp2

0x4c1e,	// (0x00043643) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4c1e,	// (0x00043643) list_single_number_heading_pane_t2_cp2

0x4c30,	// (0x00043655) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4c30,	// (0x00043655) list_single_number_heading_pane_t3_cp2

0x4bf4,	// (0x00043619) list_single_heading_pane_g1_cp2_ParamLimits

0x4bf4,	// (0x00043619) list_single_heading_pane_g1_cp2

0x4c00,	// (0x00043625) list_single_heading_pane_g2_cp2

0x4c08,	// (0x0004362d) list_single_heading_pane_t1_cp2_ParamLimits

0x4c08,	// (0x0004362d) list_single_heading_pane_t1_cp2

0x6516,	// (0x00044f3b) list_single_heading_pane_t2_cp2_ParamLimits

0x6516,	// (0x00044f3b) list_single_heading_pane_t2_cp2

0x645e,	// (0x00044e83) list_double_graphic_pane_g1_cp2_ParamLimits

0x645e,	// (0x00044e83) list_double_graphic_pane_g1_cp2

0x646a,	// (0x00044e8f) list_double_graphic_pane_g2_cp2_ParamLimits

0x646a,	// (0x00044e8f) list_double_graphic_pane_g2_cp2

0x6479,	// (0x00044e9e) list_double_graphic_pane_g3_cp2

0x6481,	// (0x00044ea6) list_double_graphic_pane_t1_cp2_ParamLimits

0x6481,	// (0x00044ea6) list_double_graphic_pane_t1_cp2

0x6497,	// (0x00044ebc) list_double_graphic_pane_t2_cp2_ParamLimits

0x6497,	// (0x00044ebc) list_double_graphic_pane_t2_cp2

0x4ca5,	// (0x000436ca) list_double_number_pane_g1_cp2_ParamLimits

0x4ca5,	// (0x000436ca) list_double_number_pane_g1_cp2

0x4cb1,	// (0x000436d6) list_double_number_pane_g2_cp2

0x6422,	// (0x00044e47) list_double_number_pane_t1_cp2_ParamLimits

0x6422,	// (0x00044e47) list_double_number_pane_t1_cp2

0x6436,	// (0x00044e5b) list_double_number_pane_t2_cp2_ParamLimits

0x6436,	// (0x00044e5b) list_double_number_pane_t2_cp2

0x644c,	// (0x00044e71) list_double_number_pane_t3_cp2_ParamLimits

0x644c,	// (0x00044e71) list_double_number_pane_t3_cp2

0x630b,	// (0x00044d30) list_single_graphic_pane_g1_cp2_ParamLimits

0x630b,	// (0x00044d30) list_single_graphic_pane_g1_cp2

0x4d09,	// (0x0004372e) list_single_graphic_pane_g2_cp2_ParamLimits

0x4d09,	// (0x0004372e) list_single_graphic_pane_g2_cp2

0x4d15,	// (0x0004373a) list_single_graphic_pane_g3_cp2

0x62e1,	// (0x00044d06) list_single_graphic_pane_t1_cp2_ParamLimits

0x62e1,	// (0x00044d06) list_single_graphic_pane_t1_cp2

0x4d09,	// (0x0004372e) list_single_number_pane_g1_cp2_ParamLimits

0x4d09,	// (0x0004372e) list_single_number_pane_g1_cp2

0x4d15,	// (0x0004373a) list_single_number_pane_g2_cp2

0x62e1,	// (0x00044d06) list_single_number_pane_t1_cp2_ParamLimits

0x62e1,	// (0x00044d06) list_single_number_pane_t1_cp2

0x62f7,	// (0x00044d1c) list_single_number_pane_t2_cp2_ParamLimits

0x62f7,	// (0x00044d1c) list_single_number_pane_t2_cp2

0x4b07,	// (0x0004352c) list_double2_pane_g1_cp2_ParamLimits

0x4b07,	// (0x0004352c) list_double2_pane_g1_cp2

0x4b18,	// (0x0004353d) list_double2_pane_g2_cp2

0x4c7d,	// (0x000436a2) list_double2_pane_t1_cp2_ParamLimits

0x4c7d,	// (0x000436a2) list_double2_pane_t1_cp2

0x4c93,	// (0x000436b8) list_double2_pane_t2_cp2_ParamLimits

0x4c93,	// (0x000436b8) list_double2_pane_t2_cp2

0x4ca5,	// (0x000436ca) list_double_pane_g1_cp2_ParamLimits

0x4ca5,	// (0x000436ca) list_double_pane_g1_cp2

0x4cb1,	// (0x000436d6) list_double_pane_g2_cp2

0x4cb9,	// (0x000436de) list_double_pane_t1_cp2_ParamLimits

0x4cb9,	// (0x000436de) list_double_pane_t1_cp2

0x4ccf,	// (0x000436f4) list_double_pane_t2_cp2_ParamLimits

0x4ccf,	// (0x000436f4) list_double_pane_t2_cp2

0x4cf9,	// (0x0004371e) list_single_pane_cp2_g3

0x4d09,	// (0x0004372e) list_single_pane_g1_cp2_ParamLimits

0x4d09,	// (0x0004372e) list_single_pane_g1_cp2

0x4d15,	// (0x0004373a) list_single_pane_g2_cp2

0x4d1d,	// (0x00043742) list_single_pane_t1_cp2_ParamLimits

0x4d1d,	// (0x00043742) list_single_pane_t1_cp2

0x4d35,	// (0x0004375a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4d35,	// (0x0004375a) list_single_large_graphic_pane_g1_cp2

0x4d41,	// (0x00043766) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4d41,	// (0x00043766) list_single_large_graphic_pane_g2_cp2

0x4d4d,	// (0x00043772) list_single_large_graphic_pane_g3_cp2

0x4d55,	// (0x0004377a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4d55,	// (0x0004377a) list_single_large_graphic_pane_g4_cp1

0x4d6f,	// (0x00043794) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4d6f,	// (0x00043794) list_single_large_graphic_pane_t1_cp2

0x62ad,	// (0x00044cd2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x62ad,	// (0x00044cd2) list_single_graphic_heading_pane_g1_cp2

0x627a,	// (0x00044c9f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x627a,	// (0x00044c9f) list_single_graphic_heading_pane_g4_cp2

0x4d15,	// (0x0004373a) list_single_graphic_heading_pane_g5_cp2

0x62b9,	// (0x00044cde) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x62b9,	// (0x00044cde) list_single_graphic_heading_pane_t1_cp2

0x62cf,	// (0x00044cf4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x62cf,	// (0x00044cf4) list_single_graphic_heading_pane_t2_cp2

0x626e,	// (0x00044c93) list_single_2graphic_pane_g1_cp2_ParamLimits

0x626e,	// (0x00044c93) list_single_2graphic_pane_g1_cp2

0x627a,	// (0x00044c9f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x627a,	// (0x00044c9f) list_single_2graphic_pane_g2_cp2

0x4d15,	// (0x0004373a) list_single_2graphic_pane_g3_cp2

0x628b,	// (0x00044cb0) list_single_2graphic_pane_g4_cp2_ParamLimits

0x628b,	// (0x00044cb0) list_single_2graphic_pane_g4_cp2

0x6297,	// (0x00044cbc) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6297,	// (0x00044cbc) list_single_2graphic_pane_t1_cp2

0x37e4,	// (0x00042209) list_highlight_pane_g10_cp1

0x5e46,	// (0x0004486b) list_highlight_pane_g1_cp1

0x5e4e,	// (0x00044873) list_highlight_pane_g2_cp1

0x5e56,	// (0x0004487b) list_highlight_pane_g3_cp1

0x5e5e,	// (0x00044883) list_highlight_pane_g4_cp1

0x5e66,	// (0x0004488b) list_highlight_pane_g5_cp1

0x5e6e,	// (0x00044893) list_highlight_pane_g6_cp1

0x5e76,	// (0x0004489b) list_highlight_pane_g7_cp1

0x5e7e,	// (0x000448a3) list_highlight_pane_g8_cp1

0x5e86,	// (0x000448ab) list_highlight_pane_g9_cp1

0xdc44,	// (0x0004c669) form_field_slider_pane_t3

0xdc52,	// (0x0004c677) form_field_slider_pane_t4

0x5d82,	// (0x000447a7) slider_form_pane_ParamLimits

0x5d82,	// (0x000447a7) slider_form_pane

0x37ee,	// (0x00042213) control_abbreviations

0x37ee,	// (0x00042213) control_conventions

0x37ee,	// (0x00042213) control_definitions

0x37ee,	// (0x00042213) format_table_attribute

0x6560,	// (0x00044f85) bg_popup_preview_window_pane_g9

0x37ee,	// (0x00042213) format_table_data2

0x37ee,	// (0x00042213) format_table_data3

0x37ee,	// (0x00042213) format_table_data_example

0x0008,

0x37ee,	// (0x00042213) intro_purpose

0xf8ef,	// (0x0004e314) bg_popup_preview_window_pane_g

0x37ee,	// (0x00042213) texts_category

0x37ee,	// (0x00042213) texts_graphics

0x4d85,	// (0x000437aa) text_digital

0x4d94,	// (0x000437b9) text_primary

0x4da3,	// (0x000437c8) text_primary_small

0x4db2,	// (0x000437d7) text_secondary

0x4dc1,	// (0x000437e6) text_title

0x6c45,	// (0x0004566a) bg_passive_tab_pane_g1_cp3_srt

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp3_srt

0x6c4e,	// (0x00045673) bg_passive_tab_pane_g3_cp3_srt

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp3_srt_ParamLimits

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp3_srt

0x6c57,	// (0x0004567c) tabs_4_active_pane_srt_g1

0xdf85,	// (0x0004c9aa) tabs_4_active_pane_srt_t1_ParamLimits

0xdf85,	// (0x0004c9aa) tabs_4_active_pane_srt_t1

0x6c45,	// (0x0004566a) bg_active_tab_pane_g1_cp3_copy1

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp3_copy1

0x6c4e,	// (0x00045673) bg_active_tab_pane_g3_cp3_copy1

0x38ce,	// (0x000422f3) tabs_2_long_active_pane_srt_ParamLimits

0x38ce,	// (0x000422f3) tabs_2_long_active_pane_srt

0x38ce,	// (0x000422f3) tabs_2_long_passive_pane_srt_ParamLimits

0x38ce,	// (0x000422f3) tabs_2_long_passive_pane_srt

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp4_srt

0x698e,	// (0x000453b3) bg_passive_tab_pane_g1_cp4_srt

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp4_srt

0x6997,	// (0x000453bc) bg_passive_tab_pane_g3_cp4_srt

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp4_srt_ParamLimits

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp4_srt

0xddaf,	// (0x0004c7d4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddaf,	// (0x0004c7d4) tabs_2_long_active_pane_srt_t1

0x698e,	// (0x000453b3) bg_active_tab_pane_g1_cp4_srt

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp4_srt

0x6997,	// (0x000453bc) bg_active_tab_pane_g3_cp4_srt

0x3b49,	// (0x0004256e) tabs_3_long_active_pane_srt_ParamLimits

0x3b49,	// (0x0004256e) tabs_3_long_active_pane_srt

0x3b49,	// (0x0004256e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3b49,	// (0x0004256e) tabs_3_long_passive_pane_cp_srt

0x3b49,	// (0x0004256e) tabs_3_long_passive_pane_srt_ParamLimits

0x3b49,	// (0x0004256e) tabs_3_long_passive_pane_srt

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp5_srt

0x4a9c,	// (0x000434c1) bg_passive_tab_pane_g1_cp5_srt

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp5_srt

0x4aa5,	// (0x000434ca) bg_passive_tab_pane_g3_cp5_srt

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp5_srt_ParamLimits

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp5_srt

0xdd99,	// (0x0004c7be) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd99,	// (0x0004c7be) tabs_3_long_active_pane_srt_t1

0x4a9c,	// (0x000434c1) bg_active_tab_pane_g1_cp5_srt

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp5_srt

0x4aa5,	// (0x000434ca) bg_active_tab_pane_g3_cp5_srt

0x696e,	// (0x00045393) navi_text_pane_srt_t1

0x6966,	// (0x0004538b) navi_icon_pane_srt_g1

0x4f96,	// (0x000439bb) midp_editing_number_pane_srt

0x4dd0,	// (0x000437f5) midp_ticker_pane_srt

0x4f9e,	// (0x000439c3) midp_ticker_pane_srt_g1

0x4fa6,	// (0x000439cb) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004e19c) midp_ticker_pane_srt_g

0x4fae,	// (0x000439d3) midp_ticker_pane_srt_t1

0x6957,	// (0x0004537c) midp_editing_number_pane_t1_copy1

0xd60f,	// (0x0004c034) listscroll_midp_pane

0xd60f,	// (0x0004c034) midp_form_pane

0x4e48,	// (0x0004386d) midp_info_popup_window_ParamLimits

0x4e48,	// (0x0004386d) midp_info_popup_window

0x41e6,	// (0x00042c0b) bg_popup_sub_pane_cp50_ParamLimits

0x41e6,	// (0x00042c0b) bg_popup_sub_pane_cp50

0x5a7e,	// (0x000444a3) listscroll_midp_info_pane_ParamLimits

0x5a7e,	// (0x000444a3) listscroll_midp_info_pane

0x5a5e,	// (0x00044483) listscroll_form_midp_pane_ParamLimits

0x5a5e,	// (0x00044483) listscroll_form_midp_pane

0x5a6a,	// (0x0004448f) scroll_bar_cp050

0x5a5e,	// (0x00044483) list_midp_pane

0x7688,	// (0x000460ad) signal_pane_g2_cp

0x5978,	// (0x0004439d) listscroll_midp_info_pane_t1_ParamLimits

0x5978,	// (0x0004439d) listscroll_midp_info_pane_t1

0x5990,	// (0x000443b5) listscroll_midp_info_pane_t2_ParamLimits

0x5990,	// (0x000443b5) listscroll_midp_info_pane_t2

0x59ce,	// (0x000443f3) listscroll_midp_info_pane_t3_ParamLimits

0x59ce,	// (0x000443f3) listscroll_midp_info_pane_t3

0x5a08,	// (0x0004442d) listscroll_midp_info_pane_t4_ParamLimits

0x5a08,	// (0x0004442d) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004e24f) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004e24f) listscroll_midp_info_pane_t

0x42aa,	// (0x00042ccf) scroll_pane_cp21

0x5916,	// (0x0004433b) form_midp_field_choice_group_pane

0x591f,	// (0x00044344) form_midp_field_text_pane

0x595e,	// (0x00044383) form_midp_field_time_pane

0x5966,	// (0x0004438b) form_midp_gauge_slider_pane

0x596f,	// (0x00044394) form_midp_gauge_wait_pane

0x37ee,	// (0x00042213) form_midp_image_pane

0xbd84,	// (0x0004a7a9) list_single_midp_pane_ParamLimits

0xbd84,	// (0x0004a7a9) list_single_midp_pane

0xdc23,	// (0x0004c648) form_midp_field_text_pane_t1

0x5698,	// (0x000440bd) input_focus_pane_cp050

0x5905,	// (0x0004432a) list_midp_form_text_pane

0x5894,	// (0x000442b9) form_midp_field_choice_group_pane_t1

0x58a2,	// (0x000442c7) input_focus_pane_cp051

0x58b6,	// (0x000442db) list_midp_choice_pane

0x37ee,	// (0x00042213) status_idle_pane

0x5878,	// (0x0004429d) form_midp_field_time_pane_t1

0x37e4,	// (0x00042209) wait_anim_pane_g2_copy1

0x5886,	// (0x000442ab) form_midp_field_time_pane_t2

0x0001,

0x4ef6,	// (0x0004391b) aid_navinavi_width_2_pane

0xf825,	// (0x0004e24a) form_midp_field_time_pane_t

0x37ee,	// (0x00042213) input_focus_pane_cp052

0x37ee,	// (0x00042213) bg_input_focus_pane_cp040

0x5838,	// (0x0004425d) form_midp_gauge_slider_pane_t1

0x5846,	// (0x0004426b) form_midp_gauge_slider_pane_t2

0xdc07,	// (0x0004c62c) form_midp_gauge_slider_pane_t3

0xdc15,	// (0x0004c63a) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004e241) form_midp_gauge_slider_pane_t

0x5870,	// (0x00044295) form_midp_slider_pane

0x38ce,	// (0x000422f3) bg_input_focus_pane_cp041_ParamLimits

0x38ce,	// (0x000422f3) bg_input_focus_pane_cp041

0x5805,	// (0x0004422a) form_midp_gauge_wait_pane_t1_ParamLimits

0x5805,	// (0x0004422a) form_midp_gauge_wait_pane_t1

0x5817,	// (0x0004423c) form_midp_gauge_wait_pane_t2_ParamLimits

0x5817,	// (0x0004423c) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004e23c) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004e23c) form_midp_gauge_wait_pane_t

0x5829,	// (0x0004424e) form_midp_wait_pane_ParamLimits

0x5829,	// (0x0004424e) form_midp_wait_pane

0x57cf,	// (0x000441f4) form_midp_image_pane_g1

0x57d8,	// (0x000441fd) form_midp_image_pane_t1

0x57e7,	// (0x0004420c) form_midp_image_pane_t2

0x57f6,	// (0x0004421b) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004e235) form_midp_image_pane_t

0x57c6,	// (0x000441eb) list_single_midp_pane_g1

0x0a78,	// (0x0003f49d) list_single_midp_pane_t1

0xdbf3,	// (0x0004c618) list_midp_form_item_pane_ParamLimits

0xdbf3,	// (0x0004c618) list_midp_form_item_pane

0x4e9e,	// (0x000438c3) list_midp_form_item_pane_t1

0x4ead,	// (0x000438d2) midp_ticker_pane_g1

0x4eb9,	// (0x000438de) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004e182) midp_ticker_pane_g

0x4ec5,	// (0x000438ea) midp_ticker_pane_t1

0x6ba8,	// (0x000455cd) midp_editing_number_pane_t1

0x6b86,	// (0x000455ab) midp_editing_number_pane

0x6b95,	// (0x000455ba) midp_ticker_pane

0x6947,	// (0x0004536c) ai_message_heading_pane

0x37ee,	// (0x00042213) bg_popup_window_pane_cp14

0x694f,	// (0x00045374) listscroll_ai_message_pane

0x68d1,	// (0x000452f6) ai_message_heading_pane_g1_ParamLimits

0x68d1,	// (0x000452f6) ai_message_heading_pane_g1

0x68dd,	// (0x00045302) ai_message_heading_pane_g2_ParamLimits

0x68dd,	// (0x00045302) ai_message_heading_pane_g2

0x68e9,	// (0x0004530e) ai_message_heading_pane_g3_ParamLimits

0x68e9,	// (0x0004530e) ai_message_heading_pane_g3

0x68f5,	// (0x0004531a) ai_message_heading_pane_g4_ParamLimits

0x68f5,	// (0x0004531a) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004e376) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004e376) ai_message_heading_pane_g

0x6901,	// (0x00045326) ai_message_heading_pane_t1_ParamLimits

0x6901,	// (0x00045326) ai_message_heading_pane_t1

0x691b,	// (0x00045340) ai_message_heading_pane_t2_ParamLimits

0x691b,	// (0x00045340) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004e37f) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004e37f) ai_message_heading_pane_t

0x692d,	// (0x00045352) bg_popup_heading_pane_cp1_ParamLimits

0x692d,	// (0x00045352) bg_popup_heading_pane_cp1

0x68bf,	// (0x000452e4) list_ai_message_pane_ParamLimits

0x68bf,	// (0x000452e4) list_ai_message_pane

0x42aa,	// (0x00042ccf) scroll_pane_cp10

0x685b,	// (0x00045280) list_ai_message_pane_g1

0x6863,	// (0x00045288) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004e353) list_ai_message_pane_g

0x686b,	// (0x00045290) list_ai_message_pane_t1_ParamLimits

0x686b,	// (0x00045290) list_ai_message_pane_t1

0x6880,	// (0x000452a5) list_ai_message_pane_t2_ParamLimits

0x6880,	// (0x000452a5) list_ai_message_pane_t2

0x6895,	// (0x000452ba) list_ai_message_pane_t3_ParamLimits

0x6895,	// (0x000452ba) list_ai_message_pane_t3

0x68aa,	// (0x000452cf) list_ai_message_pane_t4_ParamLimits

0x68aa,	// (0x000452cf) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004e358) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004e358) list_ai_message_pane_t

0xdd78,	// (0x0004c79d) cell_ai_soft_ind_pane_ParamLimits

0xdd78,	// (0x0004c79d) cell_ai_soft_ind_pane

0x4ed7,	// (0x000438fc) cell_ai_soft_ind_pane_g1_ParamLimits

0x4ed7,	// (0x000438fc) cell_ai_soft_ind_pane_g1

0x37ee,	// (0x00042213) grid_highlight_cp1

0x4ee4,	// (0x00043909) text_secondary_cp56_ParamLimits

0x4ee4,	// (0x00043909) text_secondary_cp56

0x681b,	// (0x00045240) example_general_pane_ParamLimits

0x681b,	// (0x00045240) example_general_pane

0x6827,	// (0x0004524c) example_parent_pane_g1_ParamLimits

0x6827,	// (0x0004524c) example_parent_pane_g1

0x6833,	// (0x00045258) example_parent_pane_t1_ParamLimits

0x6833,	// (0x00045258) example_parent_pane_t1

0xc6f7,	// (0x0004b11c) popup_preview_text_window_ParamLimits

0xc6f7,	// (0x0004b11c) popup_preview_text_window

0x4d01,	// (0x00043726) list_single_pane_cp2_g4

0x3bff,	// (0x00042624) bg_popup_preview_window_pane_ParamLimits

0x3bff,	// (0x00042624) bg_popup_preview_window_pane

0x6568,	// (0x00044f8d) popup_preview_text_window_t1_ParamLimits

0x6568,	// (0x00044f8d) popup_preview_text_window_t1

0x6586,	// (0x00044fab) popup_preview_text_window_t2_ParamLimits

0x6586,	// (0x00044fab) popup_preview_text_window_t2

0x65cf,	// (0x00044ff4) popup_preview_text_window_t3_ParamLimits

0x65cf,	// (0x00044ff4) popup_preview_text_window_t3

0x6614,	// (0x00045039) popup_preview_text_window_t4_ParamLimits

0x6614,	// (0x00045039) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004e327) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004e327) popup_preview_text_window_t

0x6692,	// (0x000450b7) scroll_pane_cp11

0x5624,	// (0x00044049) bg_popup_preview_window_pane_g1

0x6528,	// (0x00044f4d) bg_popup_preview_window_pane_g2

0x6530,	// (0x00044f55) bg_popup_preview_window_pane_g3

0x6538,	// (0x00044f5d) bg_popup_preview_window_pane_g4

0x6540,	// (0x00044f65) bg_popup_preview_window_pane_g5

0x6548,	// (0x00044f6d) bg_popup_preview_window_pane_g6

0x6550,	// (0x00044f75) bg_popup_preview_window_pane_g7

0x6558,	// (0x00044f7d) bg_popup_preview_window_pane_g8

0x119f,	// (0x0003fbc4) aid_popup_width_pane

0xc673,	// (0x0004b098) popup_midp_note_alarm_window_ParamLimits

0xc673,	// (0x0004b098) popup_midp_note_alarm_window

0x413d,	// (0x00042b62) data_form_pane_ParamLimits

0xbbec,	// (0x0004a611) form_field_data_pane_g1

0xbbf6,	// (0x0004a61b) form_field_data_pane_t1_ParamLimits

0x4149,	// (0x00042b6e) input_focus_pane_ParamLimits

0x0743,	// (0x0003f168) data_form_wide_pane_ParamLimits

0x0754,	// (0x0003f179) form_field_data_wide_pane_g1

0x0760,	// (0x0003f185) form_field_data_wide_pane_t1_ParamLimits

0x3eae,	// (0x000428d3) input_focus_pane_cp6_ParamLimits

0xd465,	// (0x0004be8a) input_popup_find_pane_g1_ParamLimits

0xd465,	// (0x0004be8a) input_popup_find_pane_g1

0x17bd,	// (0x000401e2) aid_navi_side_left_pane

0x17d2,	// (0x000401f7) aid_navi_side_right_pane

0x5f41,	// (0x00044966) bg_popup_window_pane_cp30_ParamLimits

0x5f41,	// (0x00044966) bg_popup_window_pane_cp30

0x5fbb,	// (0x000449e0) popup_midp_note_alarm_window_g1_ParamLimits

0x5fbb,	// (0x000449e0) popup_midp_note_alarm_window_g1

0x5feb,	// (0x00044a10) popup_midp_note_alarm_window_t1_ParamLimits

0x5feb,	// (0x00044a10) popup_midp_note_alarm_window_t1

0x608c,	// (0x00044ab1) popup_midp_note_alarm_window_t2_ParamLimits

0x608c,	// (0x00044ab1) popup_midp_note_alarm_window_t2

0x613a,	// (0x00044b5f) popup_midp_note_alarm_window_t3_ParamLimits

0x613a,	// (0x00044b5f) popup_midp_note_alarm_window_t3

0x616c,	// (0x00044b91) popup_midp_note_alarm_window_t4_ParamLimits

0x616c,	// (0x00044b91) popup_midp_note_alarm_window_t4

0x6192,	// (0x00044bb7) popup_midp_note_alarm_window_t5_ParamLimits

0x6192,	// (0x00044bb7) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004e2c4) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004e2c4) popup_midp_note_alarm_window_t

0x623e,	// (0x00044c63) wait_bar_pane_cp1_ParamLimits

0x623e,	// (0x00044c63) wait_bar_pane_cp1

0x37ee,	// (0x00042213) wait_anim_pane_copy1

0x37ee,	// (0x00042213) wait_border_pane_copy1

0x5c27,	// (0x0004464c) wait_border_pane_g1_copy1

0x077a,	// (0x0003f19f) form_field_popup_pane_g1

0xbc10,	// (0x0004a635) form_field_popup_pane_t1_ParamLimits

0x4149,	// (0x00042b6e) input_focus_pane_cp7_ParamLimits

0x416b,	// (0x00042b90) list_form_pane_ParamLimits

0x079a,	// (0x0003f1bf) form_field_popup_wide_pane_g1

0x07a2,	// (0x0003f1c7) form_field_popup_wide_pane_t1_ParamLimits

0x4149,	// (0x00042b6e) input_focus_pane_cp8_ParamLimits

0x4177,	// (0x00042b9c) list_form_wide_pane_ParamLimits

0xdfde,	// (0x0004ca03) aid_size_cell_graphic_pane

0xbc8f,	// (0x0004a6b4) data_form_pane_t1_ParamLimits

0xbdab,	// (0x0004a7d0) data_form_wide_pane_t1_ParamLimits

0xd878,	// (0x0004c29d) bg_status_flat_pane

0xd124,	// (0x0004bb49) title_pane_t1_ParamLimits

0x3896,	// (0x000422bb) title_pane_t2_ParamLimits

0x38bc,	// (0x000422e1) title_pane_t3_ParamLimits

0xf557,	// (0x0004df7c) title_pane_t_ParamLimits

0x4729,	// (0x0004314e) level_1_signal_ParamLimits

0x473b,	// (0x00043160) level_2_signal_ParamLimits

0x474e,	// (0x00043173) level_3_signal_ParamLimits

0x4761,	// (0x00043186) level_4_signal_ParamLimits

0x4774,	// (0x00043199) level_5_signal_ParamLimits

0x4787,	// (0x000431ac) level_6_signal_ParamLimits

0x479a,	// (0x000431bf) level_7_signal_ParamLimits

0x4729,	// (0x0004314e) level_1_battery_ParamLimits

0x473b,	// (0x00043160) level_2_battery_ParamLimits

0x474e,	// (0x00043173) level_3_battery_ParamLimits

0x4761,	// (0x00043186) level_4_battery_ParamLimits

0x4774,	// (0x00043199) level_5_battery_ParamLimits

0x4787,	// (0x000431ac) level_6_battery_ParamLimits

0x479a,	// (0x000431bf) level_7_battery_ParamLimits

0x5e46,	// (0x0004486b) bg_status_flat_pane_g1

0x5e4e,	// (0x00044873) bg_status_flat_pane_g2

0x5e56,	// (0x0004487b) bg_status_flat_pane_g3

0x5e5e,	// (0x00044883) bg_status_flat_pane_g4

0x5e66,	// (0x0004488b) bg_status_flat_pane_g5

0x5e6e,	// (0x00044893) bg_status_flat_pane_g6

0x5e76,	// (0x0004489b) bg_status_flat_pane_g7

0xd1b0,	// (0x0004bbd5) tabs_3_active_pane_t1_ParamLimits

0xd1b0,	// (0x0004bbd5) tabs_3_passive_pane_t1_ParamLimits

0xd1c2,	// (0x0004bbe7) tabs_4_active_pane_t1_ParamLimits

0xd1c2,	// (0x0004bbe7) tabs_4_1_passive_pane_t1_ParamLimits

0xd473,	// (0x0004be98) tabs_2_active_pane_t1_ParamLimits

0xd473,	// (0x0004be98) tabs_2_passive_pane_t1_ParamLimits

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp4_ParamLimits

0xd485,	// (0x0004beaa) tabs_2_long_active_pane_t1_ParamLimits

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp4_ParamLimits

0x2316,	// (0x00040d3b) list_single_midp_graphic_pane_t1_ParamLimits

0x38ce,	// (0x000422f3) bg_active_tab_pane_cp5_ParamLimits

0xd498,	// (0x0004bebd) tabs_3_long_active_pane_t1_ParamLimits

0x511a,	// (0x00043b3f) bg_passive_tab_pane_cp5_ParamLimits

0x2316,	// (0x00040d3b) list_single_midp_graphic_pane_t1

0xd878,	// (0x0004c29d) bg_status_flat_pane_ParamLimits

0x52b4,	// (0x00043cd9) indicator_pane_cp2_ParamLimits

0x52b4,	// (0x00043cd9) indicator_pane_cp2

0xd9f6,	// (0x0004c41b) navi_pane_srt_ParamLimits

0xd9f6,	// (0x0004c41b) navi_pane_srt

0x5403,	// (0x00043e28) popup_clock_digital_analogue_window_cp1

0x39ab,	// (0x000423d0) indicator_pane_t1

0x4dd0,	// (0x000437f5) copy_highlight_pane

0x4dd0,	// (0x000437f5) cursor_graphics_pane

0x4dd0,	// (0x000437f5) graphic_within_text_pane

0x4dd0,	// (0x000437f5) link_highlight_pane

0x6655,	// (0x0004507a) popup_preview_text_window_t5_ParamLimits

0x6655,	// (0x0004507a) popup_preview_text_window_t5

0x4efe,	// (0x00043923) cursor_digital_pane

0x4efe,	// (0x00043923) cursor_primary_pane

0x4f0f,	// (0x00043934) cursor_primary_small_pane

0x4f17,	// (0x0004393c) cursor_secondary_pane

0x4f1f,	// (0x00043944) cursor_title_pane

0x4efe,	// (0x00043923) link_highlight_digital_pane

0x4f06,	// (0x0004392b) link_highlight_primary_pane

0x4f0f,	// (0x00043934) link_highlight_primary_small_pane

0x4f17,	// (0x0004393c) link_highlight_secondary_pane

0x4f1f,	// (0x00043944) link_highlight_title_pane

0x4efe,	// (0x00043923) copy_highlight_digital_pane

0x4efe,	// (0x00043923) copy_highlight_primary_pane

0x4f0f,	// (0x00043934) copy_highlight_primary_small_pane

0x4f17,	// (0x0004393c) copy_highlight_secondary_pane

0x4f1f,	// (0x00043944) copy_highlight_title_pane

0x4f17,	// (0x0004393c) graphic_text_digital_pane

0x5ee4,	// (0x00044909) graphic_text_primary_pane

0x5eed,	// (0x00044912) graphic_text_primary_small_pane

0x4f0f,	// (0x00043934) graphic_text_secondary_pane

0x4efe,	// (0x00043923) graphic_text_title_pane

0xd6b4,	// (0x0004c0d9) cursor_primary_pane_g1

0x5ed6,	// (0x000448fb) cursor_text_primary_t1

0xdc74,	// (0x0004c699) cursor_primary_small_pane_g1

0x5ec8,	// (0x000448ed) cursor_text_primary_small_t1

0xdc6a,	// (0x0004c68f) cursor_primary_small_pane_g1_copy1

0x5eb0,	// (0x000448d5) cursor_text_primary_small_t1_copy1

0x5e8e,	// (0x000448b3) cursor_text_title_t1

0xdc60,	// (0x0004c685) cursor_title_pane_g1

0xd6b4,	// (0x0004c0d9) cursor_digital_pane_g1

0x4f31,	// (0x00043956) cursor_text_digital_t1

0x4f56,	// (0x0004397b) link_highlight_primary_pane_g1

0x5e37,	// (0x0004485c) link_highlight_primary_pane_t1

0x4f3f,	// (0x00043964) link_highlight_primary_small_pane_g1

0x4f47,	// (0x0004396c) link_highlight_primary_small_pane_t1

0x4f56,	// (0x0004397b) link_highlight_secondary_pane_g1

0x4f5e,	// (0x00043983) link_highlight_secondary_pane_t1

0x5dab,	// (0x000447d0) link_highlight_title_pane_g1

0x5db3,	// (0x000447d8) link_highlight_title_pane_t1

0x5d94,	// (0x000447b9) link_highlight_digital_pane_g1

0x5d9c,	// (0x000447c1) link_highlight_digital_pane_t1

0x5c6c,	// (0x00044691) copy_highlight_primary_pane_g1

0x5c74,	// (0x00044699) copy_highlight_primary_pane_t1

0x5c46,	// (0x0004466b) copy_highlight_primary_small_pane_g1

0x5c5d,	// (0x00044682) copy_highlight_primary_small_pane_t1

0x4f6d,	// (0x00043992) copy_highlight_secondary_pane_g1

0x4f75,	// (0x0004399a) copy_highlight_secondary_pane_t1

0x5c46,	// (0x0004466b) copy_highlight_title_pane_g1

0x5c4e,	// (0x00044673) copy_highlight_title_pane_t1

0x5c6c,	// (0x00044691) copy_highlight_digital_pane_g1

0x6ea7,	// (0x000458cc) copy_highlight_digital_pane_t1

0x6dfb,	// (0x00045820) graphic_text_primary_pane_g1

0x6e8b,	// (0x000458b0) graphic_text_primary_pane_t1

0x6e99,	// (0x000458be) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004e3f3) graphic_text_primary_pane_t

0x6e67,	// (0x0004588c) graphic_text_primary_small_pane_g1

0x6e6f,	// (0x00045894) graphic_text_primary_small_pane_t1

0x6e7d,	// (0x000458a2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004e3ee) graphic_text_primary_small_pane_t

0x6e43,	// (0x00045868) graphic_text_secondary_pane_g1

0x6e4b,	// (0x00045870) graphic_text_secondary_pane_t1

0x6e59,	// (0x0004587e) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004e3e9) graphic_text_secondary_pane_t

0x6e1f,	// (0x00045844) graphic_text_title_pane_g1

0x6e27,	// (0x0004584c) graphic_text_title_pane_t1

0x6e35,	// (0x0004585a) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004e3e4) graphic_text_title_pane_t

0x6dfb,	// (0x00045820) graphic_text_digital_pane_g1

0x6e03,	// (0x00045828) graphic_text_digital_pane_t1

0x6e11,	// (0x00045836) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004e3df) graphic_text_digital_pane_t

0x38ce,	// (0x000422f3) navi_icon_pane_srt_ParamLimits

0x38ce,	// (0x000422f3) navi_icon_pane_srt

0x37ee,	// (0x00042213) navi_midp_pane_srt

0x37ee,	// (0x00042213) navi_navi_pane_srt

0x38ce,	// (0x000422f3) navi_text_pane_srt_ParamLimits

0x38ce,	// (0x000422f3) navi_text_pane_srt

0x6dc6,	// (0x000457eb) navi_navi_icon_text_pane_srt

0x6dce,	// (0x000457f3) navi_navi_pane_srt_g1_ParamLimits

0x6dce,	// (0x000457f3) navi_navi_pane_srt_g1

0x6de0,	// (0x00045805) navi_navi_pane_srt_g2_ParamLimits

0x6de0,	// (0x00045805) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004e3da) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004e3da) navi_navi_pane_srt_g

0x6df2,	// (0x00045817) navi_navi_tabs_pane_srt

0x6dc6,	// (0x000457eb) navi_navi_text_pane_srt

0x6dc6,	// (0x000457eb) navi_navi_volume_pane_srt

0x6db7,	// (0x000457dc) navi_navi_text_pane_srt_t1

0x273e,	// (0x00041163) navi_navi_volume_pane_srt_g1

0x2746,	// (0x0004116b) volume_small_pane_srt_ParamLimits

0x2746,	// (0x0004116b) volume_small_pane_srt

0x1ab9,	// (0x000404de) volume_small_pane_srt_g1_ParamLimits

0x1ab9,	// (0x000404de) volume_small_pane_srt_g1

0x1ac9,	// (0x000404ee) volume_small_pane_srt_g2_ParamLimits

0x1ac9,	// (0x000404ee) volume_small_pane_srt_g2

0x1ada,	// (0x000404ff) volume_small_pane_srt_g3_ParamLimits

0x1ada,	// (0x000404ff) volume_small_pane_srt_g3

0x1aeb,	// (0x00040510) volume_small_pane_srt_g4_ParamLimits

0x1aeb,	// (0x00040510) volume_small_pane_srt_g4

0x1afc,	// (0x00040521) volume_small_pane_srt_g5_ParamLimits

0x1afc,	// (0x00040521) volume_small_pane_srt_g5

0x1b0d,	// (0x00040532) volume_small_pane_srt_g6_ParamLimits

0x1b0d,	// (0x00040532) volume_small_pane_srt_g6

0x1b1e,	// (0x00040543) volume_small_pane_srt_g7_ParamLimits

0x1b1e,	// (0x00040543) volume_small_pane_srt_g7

0x1b2f,	// (0x00040554) volume_small_pane_srt_g8_ParamLimits

0x1b2f,	// (0x00040554) volume_small_pane_srt_g8

0x1b40,	// (0x00040565) volume_small_pane_srt_g9_ParamLimits

0x1b40,	// (0x00040565) volume_small_pane_srt_g9

0x1b51,	// (0x00040576) volume_small_pane_srt_g10_ParamLimits

0x1b51,	// (0x00040576) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004e187) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004e187) volume_small_pane_srt_g

0x3ca8,	// (0x000426cd) query_popup_data_pane_cp2

0x6d9d,	// (0x000457c2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d9d,	// (0x000457c2) navi_navi_icon_text_pane_srt_t1

0x5ee4,	// (0x00044909) navi_tabs_2_long_pane_srt

0x5ee4,	// (0x00044909) navi_tabs_2_pane_srt

0x5ee4,	// (0x00044909) navi_tabs_3_long_pane_srt

0x5ee4,	// (0x00044909) navi_tabs_3_pane_srt

0x5ee4,	// (0x00044909) navi_tabs_4_pane_srt

0x271e,	// (0x00041143) tabs_2_active_pane_srt_ParamLimits

0x271e,	// (0x00041143) tabs_2_active_pane_srt

0x272e,	// (0x00041153) tabs_2_passive_pane_srt_ParamLimits

0x272e,	// (0x00041153) tabs_2_passive_pane_srt

0x5698,	// (0x000440bd) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5698,	// (0x000440bd) bg_passive_tab_pane_cp1_srt

0x6d69,	// (0x0004578e) bg_passive_tab_pane_g1_cp1_srt

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp1_srt

0x6d72,	// (0x00045797) bg_passive_tab_pane_g3_cp1_srt

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp1_srt_ParamLimits

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp1_srt

0x6d7b,	// (0x000457a0) tabs_2_active_pane_srt_g1

0xe020,	// (0x0004ca45) tabs_2_active_pane_srt_t1_ParamLimits

0xe020,	// (0x0004ca45) tabs_2_active_pane_srt_t1

0x6d69,	// (0x0004578e) bg_active_tab_pane_g1_cp1_srt

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp1_srt

0x6d72,	// (0x00045797) bg_active_tab_pane_g3_cp1_srt

0x26eb,	// (0x00041110) tabs_3_active_pane_srt_ParamLimits

0x26eb,	// (0x00041110) tabs_3_active_pane_srt

0x26fc,	// (0x00041121) tabs_3_passive_pane_cp_srt_ParamLimits

0x26fc,	// (0x00041121) tabs_3_passive_pane_cp_srt

0x270d,	// (0x00041132) tabs_3_passive_pane_srt_ParamLimits

0x270d,	// (0x00041132) tabs_3_passive_pane_srt

0x5698,	// (0x000440bd) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5698,	// (0x000440bd) bg_passive_tab_pane_cp2_srt

0x4f84,	// (0x000439a9) bg_passive_tab_pane_g1_cp2_srt

0x4a12,	// (0x00043437) bg_passive_tab_pane_g2_cp2_srt

0x4f8d,	// (0x000439b2) bg_passive_tab_pane_g3_cp2_srt

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp2_srt_ParamLimits

0x3b49,	// (0x0004256e) bg_active_tab_pane_cp2_srt

0x6d4f,	// (0x00045774) tabs_3_active_pane_srt_g1

0xe00a,	// (0x0004ca2f) tabs_3_active_pane_srt_t1_ParamLimits

0xe00a,	// (0x0004ca2f) tabs_3_active_pane_srt_t1

0x4f84,	// (0x000439a9) bg_active_tab_pane_g1_cp2_srt

0x4a12,	// (0x00043437) bg_active_tab_pane_g2_cp2_srt

0x4f8d,	// (0x000439b2) bg_active_tab_pane_g3_cp2_srt

0x26a3,	// (0x000410c8) tabs_4_active_pane_srt_ParamLimits

0x26a3,	// (0x000410c8) tabs_4_active_pane_srt

0x26b5,	// (0x000410da) tabs_4_passive_pane_cp2_srt_ParamLimits

0x26b5,	// (0x000410da) tabs_4_passive_pane_cp2_srt

0x1cc0,	// (0x000406e5) aid_size_cell_toolbar

0x69ff,	// (0x00045424) main_idle_act_pane_ParamLimits

0x1e7d,	// (0x000408a2) popup_large_graphic_colour_window_ParamLimits

0xc983,	// (0x0004b3a8) popup_toolbar_window_ParamLimits

0xc983,	// (0x0004b3a8) popup_toolbar_window

0x6bb7,	// (0x000455dc) list_single_graphic_2heading_pane_ParamLimits

0x6bb7,	// (0x000455dc) list_single_graphic_2heading_pane

0x44da,	// (0x00042eff) aid_size_cell_apps_grid_lsc_pane

0x44ec,	// (0x00042f11) aid_size_cell_apps_grid_prt_pane

0x511a,	// (0x00043b3f) bg_wml_button_pane_cp1_ParamLimits

0x511a,	// (0x00043b3f) bg_wml_button_pane_cp1

0xdc23,	// (0x0004c648) form_midp_field_text_pane_t1_ParamLimits

0x5698,	// (0x000440bd) input_focus_pane_cp050_ParamLimits

0x5905,	// (0x0004432a) list_midp_form_text_pane_ParamLimits

0x58a2,	// (0x000442c7) input_focus_pane_cp051_ParamLimits

0x58b6,	// (0x000442db) list_midp_choice_pane_ParamLimits

0xdbc1,	// (0x0004c5e6) list_single_2graphic_pane_cp3_ParamLimits

0xdbc1,	// (0x0004c5e6) list_single_2graphic_pane_cp3

0xdbd4,	// (0x0004c5f9) list_single_midp_graphic_pane_ParamLimits

0xdbd4,	// (0x0004c5f9) list_single_midp_graphic_pane

0x0956,	// (0x0003f37b) list_single_graphic_2heading_pane_g1_ParamLimits

0x0956,	// (0x0003f37b) list_single_graphic_2heading_pane_g1

0x0962,	// (0x0003f387) list_single_graphic_2heading_pane_g4_ParamLimits

0x0962,	// (0x0003f387) list_single_graphic_2heading_pane_g4

0x096e,	// (0x0003f393) list_single_graphic_2heading_pane_g5_ParamLimits

0x096e,	// (0x0003f393) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004e1da) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004e1da) list_single_graphic_2heading_pane_g

0x097a,	// (0x0003f39f) list_single_graphic_2heading_pane_t1_ParamLimits

0x097a,	// (0x0003f39f) list_single_graphic_2heading_pane_t1

0x098e,	// (0x0003f3b3) list_single_graphic_2heading_pane_t2_ParamLimits

0x098e,	// (0x0003f3b3) list_single_graphic_2heading_pane_t2

0x09aa,	// (0x0003f3cf) list_single_graphic_2heading_pane_t3_ParamLimits

0x09aa,	// (0x0003f3cf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004e1e1) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004e1e1) list_single_graphic_2heading_pane_t

0x5562,	// (0x00043f87) bg_popup_sub_pane_cp2

0x558c,	// (0x00043fb1) grid_toobar_pane

0x2291,	// (0x00040cb6) cell_toolbar_pane_ParamLimits

0x2291,	// (0x00040cb6) cell_toolbar_pane

0x55c8,	// (0x00043fed) cell_toolbar_pane_g1_ParamLimits

0x55c8,	// (0x00043fed) cell_toolbar_pane_g1

0x55dc,	// (0x00044001) cell_toolbar_pane_g2_ParamLimits

0x55dc,	// (0x00044001) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004e1ef) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004e1ef) cell_toolbar_pane_g

0x55fe,	// (0x00044023) grid_highlight_pane_cp2_ParamLimits

0x55fe,	// (0x00044023) grid_highlight_pane_cp2

0x5618,	// (0x0004403d) toolbar_button_pane

0x5624,	// (0x00044049) toolbar_button_pane_g1

0x562c,	// (0x00044051) toolbar_button_pane_g2

0x5634,	// (0x00044059) toolbar_button_pane_g3

0x563c,	// (0x00044061) toolbar_button_pane_g4

0x5644,	// (0x00044069) toolbar_button_pane_g5

0x564c,	// (0x00044071) toolbar_button_pane_g6

0x5654,	// (0x00044079) toolbar_button_pane_g7

0x565c,	// (0x00044081) toolbar_button_pane_g8

0x5664,	// (0x00044089) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004e1f4) toolbar_button_pane_g

0x22d5,	// (0x00040cfa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x22d5,	// (0x00040cfa) list_single_2graphic_pane_g1_cp3

0xc9db,	// (0x0004b400) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc9db,	// (0x0004b400) list_single_2graphic_pane_g2_cp3

0x22f2,	// (0x00040d17) list_single_2graphic_pane_g3_cp3

0x196c,	// (0x00040391) list_single_2graphic_pane_g4_cp3_ParamLimits

0x196c,	// (0x00040391) list_single_2graphic_pane_g4_cp3

0x22fa,	// (0x00040d1f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x22fa,	// (0x00040d1f) list_single_2graphic_pane_t1_cp3

0x58f9,	// (0x0004431e) list_single_midp_graphic_pane_g2_ParamLimits

0x58f9,	// (0x0004431e) list_single_midp_graphic_pane_g2

0x0946,	// (0x0003f36b) aid_zoom_text_primary

0x1cc8,	// (0x000406ed) aid_zoom_text_secondary

0xd70c,	// (0x0004c131) status_small_pane_g7_ParamLimits

0xd70c,	// (0x0004c131) status_small_pane_g7

0xd72f,	// (0x0004c154) status_small_pane_t1_ParamLimits

0xd100,	// (0x0004bb25) title_pane_g2

0x0003,

0xf54e,	// (0x0004df73) title_pane_g

0xd378,	// (0x0004bd9d) aid_size_cell_colour_1_pane_ParamLimits

0xd378,	// (0x0004bd9d) aid_size_cell_colour_1_pane

0xd38c,	// (0x0004bdb1) aid_size_cell_colour_2_pane_ParamLimits

0xd38c,	// (0x0004bdb1) aid_size_cell_colour_2_pane

0xd3a0,	// (0x0004bdc5) aid_size_cell_colour_3_pane_ParamLimits

0xd3a0,	// (0x0004bdc5) aid_size_cell_colour_3_pane

0xd3b4,	// (0x0004bdd9) aid_size_cell_colour_4_pane_ParamLimits

0xd3b4,	// (0x0004bdd9) aid_size_cell_colour_4_pane

0x16fa,	// (0x0004011f) title_pane_stacon_g1_ParamLimits

0x16fa,	// (0x0004011f) title_pane_stacon_g1

0x5ccb,	// (0x000446f0) popup_note_wait_window_g3_ParamLimits

0x5ccb,	// (0x000446f0) popup_note_wait_window_g3

0x5d41,	// (0x00044766) popup_note_wait_window_t5_ParamLimits

0x5d41,	// (0x00044766) popup_note_wait_window_t5

0x37ee,	// (0x00042213) main_feb_china_hwr_fs_writing_pane

0xc38b,	// (0x0004adb0) popup_feb_china_hwr_fs_window_ParamLimits

0xc38b,	// (0x0004adb0) popup_feb_china_hwr_fs_window

0xc9ec,	// (0x0004b411) aid_size_cell_hwr_fs_ParamLimits

0xc9ec,	// (0x0004b411) aid_size_cell_hwr_fs

0x5698,	// (0x000440bd) bg_popup_sub_pane_cp3_ParamLimits

0x5698,	// (0x000440bd) bg_popup_sub_pane_cp3

0xca01,	// (0x0004b426) grid_hwr_fs_pane_ParamLimits

0xca01,	// (0x0004b426) grid_hwr_fs_pane

0x2371,	// (0x00040d96) linegrid_hwr_fs_pane_ParamLimits

0x2371,	// (0x00040d96) linegrid_hwr_fs_pane

0xca19,	// (0x0004b43e) cell_hwr_fs_pane_ParamLimits

0xca19,	// (0x0004b43e) cell_hwr_fs_pane

0x56a4,	// (0x000440c9) linegrid_hwr_fs_pane_g1_ParamLimits

0x56a4,	// (0x000440c9) linegrid_hwr_fs_pane_g1

0xdb95,	// (0x0004c5ba) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb95,	// (0x0004c5ba) linegrid_hwr_fs_pane_g2

0x56c2,	// (0x000440e7) linegrid_hwr_fs_pane_g3_ParamLimits

0x56c2,	// (0x000440e7) linegrid_hwr_fs_pane_g3

0x23a3,	// (0x00040dc8) linegrid_hwr_fs_pane_g4_ParamLimits

0x23a3,	// (0x00040dc8) linegrid_hwr_fs_pane_g4

0x23bd,	// (0x00040de2) linegrid_hwr_fs_pane_g5_ParamLimits

0x23bd,	// (0x00040de2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004e21a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004e21a) linegrid_hwr_fs_pane_g

0x56ce,	// (0x000440f3) cell_hwr_fs_pane_g1_ParamLimits

0x56ce,	// (0x000440f3) cell_hwr_fs_pane_g1

0x5499,	// (0x00043ebe) cell_hwr_fs_pane_g2_ParamLimits

0x5499,	// (0x00043ebe) cell_hwr_fs_pane_g2

0xdba7,	// (0x0004c5cc) cell_hwr_fs_pane_g3_ParamLimits

0xdba7,	// (0x0004c5cc) cell_hwr_fs_pane_g3

0xdbb4,	// (0x0004c5d9) cell_hwr_fs_pane_g4_ParamLimits

0xdbb4,	// (0x0004c5d9) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0004e225) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004e225) cell_hwr_fs_pane_g

0xca3f,	// (0x0004b464) cell_hwr_fs_pane_t1

0x37ee,	// (0x00042213) grid_highlight_pane_cp6

0x37ee,	// (0x00042213) main_idle_act2_pane

0x4291,	// (0x00042cb6) aid_inside_area_popup_secondary

0xdc7e,	// (0x0004c6a3) aid_inside_area_window_primary_ParamLimits

0xdc7e,	// (0x0004c6a3) aid_inside_area_window_primary

0x6eb6,	// (0x000458db) ai2_news_ticker_pane

0x6ebe,	// (0x000458e3) aid_size_cell_ai1_link_ParamLimits

0x6ebe,	// (0x000458e3) aid_size_cell_ai1_link

0xe036,	// (0x0004ca5b) popup_ai2_data_window_ParamLimits

0xe036,	// (0x0004ca5b) popup_ai2_data_window

0x6eee,	// (0x00045913) popup_ai2_link_window_ParamLimits

0x6eee,	// (0x00045913) popup_ai2_link_window

0x5698,	// (0x000440bd) bg_popup_sub_pane_cp4_ParamLimits

0x5698,	// (0x000440bd) bg_popup_sub_pane_cp4

0x6f02,	// (0x00045927) grid_ai2_link_pane_ParamLimits

0x6f02,	// (0x00045927) grid_ai2_link_pane

0x6f19,	// (0x0004593e) popup_ai2_link_window_g1_ParamLimits

0x6f19,	// (0x0004593e) popup_ai2_link_window_g1

0x6f25,	// (0x0004594a) popup_ai2_link_window_g2_ParamLimits

0x6f25,	// (0x0004594a) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004e3f8) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004e3f8) popup_ai2_link_window_g

0x6f34,	// (0x00045959) ai2_mp_button_pane

0x6f3c,	// (0x00045961) ai2_mp_volume_pane

0x58a2,	// (0x000442c7) bg_popup_sub_pane_cp5_ParamLimits

0x58a2,	// (0x000442c7) bg_popup_sub_pane_cp5

0x6f44,	// (0x00045969) heading_ai2_gene_pane_ParamLimits

0x6f44,	// (0x00045969) heading_ai2_gene_pane

0x6f50,	// (0x00045975) list_ai2_gene_pane_ParamLimits

0x6f50,	// (0x00045975) list_ai2_gene_pane

0x6f98,	// (0x000459bd) cell_ai2_link_pane_ParamLimits

0x6f98,	// (0x000459bd) cell_ai2_link_pane

0x6fae,	// (0x000459d3) cell_ai2_link_pane_g1

0x37ee,	// (0x00042213) grid_highlight_pane_cp7

0x275b,	// (0x00041180) ai2_mp_volume_pane_g1

0x707e,	// (0x00045aa3) ai2_mp_volume_pane_g2

0xe060,	// (0x0004ca85) list_ai2_gene_pane_t1

0x7086,	// (0x00045aab) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004e411) ai2_mp_volume_pane_g

0x2763,	// (0x00041188) volume_small_pane_cp3

0x708e,	// (0x00045ab3) aid_size_cell_ai2_button

0x7096,	// (0x00045abb) grid_ai2_button_pane

0x709f,	// (0x00045ac4) cell_ai2_button_pane_ParamLimits

0x709f,	// (0x00045ac4) cell_ai2_button_pane

0x37e4,	// (0x00042209) cell_ai2_button_pane_g1

0x37ee,	// (0x00042213) grid_highlight_pane_cp8

0x703e,	// (0x00045a63) ai2_gene_pane_t1_ParamLimits

0x703e,	// (0x00045a63) ai2_gene_pane_t1

0xc305,	// (0x0004ad2a) aid_height_parent_landscape

0xddc6,	// (0x0004c7eb) aid_height_set_list

0x69ff,	// (0x00045424) aid_size_parent

0xdfde,	// (0x0004ca03) aid_size_cell_graphic_pane_ParamLimits

0x6f60,	// (0x00045985) popup_ai2_data_window_g1_ParamLimits

0x6f60,	// (0x00045985) popup_ai2_data_window_g1

0x6f6c,	// (0x00045991) ai2_news_ticker_pane_g1

0x6f74,	// (0x00045999) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004e3fd) ai2_news_ticker_pane_g

0x6f7c,	// (0x000459a1) ai2_news_ticker_pane_t1

0x6f8a,	// (0x000459af) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004e402) ai2_news_ticker_pane_t

0x6fb7,	// (0x000459dc) heading_ai2_gene_pane_g1

0x6fbf,	// (0x000459e4) heading_ai2_gene_pane_t1_ParamLimits

0x6fbf,	// (0x000459e4) heading_ai2_gene_pane_t1

0x6fd4,	// (0x000459f9) list_highlight_pane_cp6

0xe04a,	// (0x0004ca6f) ai2_gene_pane_ParamLimits

0xe04a,	// (0x0004ca6f) ai2_gene_pane

0xe06e,	// (0x0004ca93) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004e407) list_ai2_gene_pane_t

0x700f,	// (0x00045a34) list_highlight_pane_cp8_ParamLimits

0x700f,	// (0x00045a34) list_highlight_pane_cp8

0x7020,	// (0x00045a45) ai2_gene_pane_g1_ParamLimits

0x7020,	// (0x00045a45) ai2_gene_pane_g1

0x7032,	// (0x00045a57) ai2_gene_pane_g2_ParamLimits

0x7032,	// (0x00045a57) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004e40c) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004e40c) ai2_gene_pane_g

0x40d3,	// (0x00042af8) scroll_pane_cp12

0xc2c2,	// (0x0004ace7) control_pane_t3_ParamLimits

0xc2c2,	// (0x0004ace7) control_pane_t3

0xd720,	// (0x0004c145) status_small_pane_g8_ParamLimits

0xd720,	// (0x0004c145) status_small_pane_g8

0xc420,	// (0x0004ae45) popup_find_window_ParamLimits

0xc6ad,	// (0x0004b0d2) popup_note_image_window_ParamLimits

0x09c2,	// (0x0003f3e7) list_double2_graphic_pane_vc_g1_ParamLimits

0x09c2,	// (0x0003f3e7) list_double2_graphic_pane_vc_g1

0x4d09,	// (0x0004372e) list_double2_graphic_pane_vc_g2_ParamLimits

0x4d09,	// (0x0004372e) list_double2_graphic_pane_vc_g2

0x22c1,	// (0x00040ce6) list_double2_graphic_pane_vc_g3_ParamLimits

0x22c1,	// (0x00040ce6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004e1e8) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e1e8) list_double2_graphic_pane_vc_g

0x09ce,	// (0x0003f3f3) list_double2_graphic_pane_vc_t1_ParamLimits

0x09ce,	// (0x0003f3f3) list_double2_graphic_pane_vc_t1

0x4d09,	// (0x0004372e) list_single_heading_pane_vc_g1_ParamLimits

0x4d09,	// (0x0004372e) list_single_heading_pane_vc_g1

0x22c1,	// (0x00040ce6) list_single_heading_pane_vc_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_single_heading_pane_vc_g

0x09e4,	// (0x0003f409) list_single_heading_pane_vc_t1_ParamLimits

0x09e4,	// (0x0003f409) list_single_heading_pane_vc_t1

0x09fa,	// (0x0003f41f) list_single_heading_pane_vc_t2_ParamLimits

0x09fa,	// (0x0003f41f) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004e209) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004e209) list_single_heading_pane_vc_t

0x232c,	// (0x00040d51) list_setting_number_pane_vc_g1_ParamLimits

0x232c,	// (0x00040d51) list_setting_number_pane_vc_g1

0x2338,	// (0x00040d5d) list_setting_number_pane_vc_g2_ParamLimits

0x2338,	// (0x00040d5d) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004e20e) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004e20e) list_setting_number_pane_vc_g

0x0a0c,	// (0x0003f431) list_setting_number_pane_vc_t1_ParamLimits

0x0a0c,	// (0x0003f431) list_setting_number_pane_vc_t1

0x0a20,	// (0x0003f445) list_setting_number_pane_vc_t2_ParamLimits

0x0a20,	// (0x0003f445) list_setting_number_pane_vc_t2

0x0a3c,	// (0x0003f461) list_setting_number_pane_vc_t3_ParamLimits

0x0a3c,	// (0x0003f461) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0004e213) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0004e213) list_setting_number_pane_vc_t

0x0a68,	// (0x0003f48d) set_value_pane_vc_ParamLimits

0x0a68,	// (0x0003f48d) set_value_pane_vc

0x6bb7,	// (0x000455dc) list_double2_graphic_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double2_graphic_pane_vc

0x0b1f,	// (0x0003f544) list_double2_large_graphic_pane_vc_ParamLimits

0x0b1f,	// (0x0003f544) list_double2_large_graphic_pane_vc

0x6bb7,	// (0x000455dc) list_double2_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double2_pane_vc

0x6bb7,	// (0x000455dc) list_double_graphic_heading_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double_graphic_heading_pane_vc

0x6bb7,	// (0x000455dc) list_double_graphic_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double_graphic_pane_vc

0x6bb7,	// (0x000455dc) list_double_heading_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double_heading_pane_vc

0x0b30,	// (0x0003f555) list_double_large_graphic_pane_vc_ParamLimits

0x0b30,	// (0x0003f555) list_double_large_graphic_pane_vc

0x6bb7,	// (0x000455dc) list_double_number_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double_number_pane_vc

0x6bb7,	// (0x000455dc) list_double_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double_pane_vc

0x6bb7,	// (0x000455dc) list_double_time_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_double_time_pane_vc

0x6bb7,	// (0x000455dc) list_setting_number_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_setting_number_pane_vc

0x6bb7,	// (0x000455dc) list_setting_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_setting_pane_vc

0x6bb7,	// (0x000455dc) list_single_graphic_heading_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_single_graphic_heading_pane_vc

0x6bb7,	// (0x000455dc) list_single_heading_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_single_heading_pane_vc

0x6bb7,	// (0x000455dc) list_single_number_heading_pane_vc_ParamLimits

0x6bb7,	// (0x000455dc) list_single_number_heading_pane_vc

0x09c2,	// (0x0003f3e7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x09c2,	// (0x0003f3e7) list_double_graphic_heading_pane_vc_g1

0x4d09,	// (0x0004372e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4d09,	// (0x0004372e) list_double_graphic_heading_pane_vc_g2

0x22c1,	// (0x00040ce6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x22c1,	// (0x00040ce6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004e1e8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e1e8) list_double_graphic_heading_pane_vc_g

0x0b7f,	// (0x0003f5a4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0b7f,	// (0x0003f5a4) list_double_graphic_heading_pane_vc_t1

0x0b9b,	// (0x0003f5c0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0b9b,	// (0x0003f5c0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004e418) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004e418) list_double_graphic_heading_pane_vc_t

0x232c,	// (0x00040d51) list_setting_pane_vc_g1_ParamLimits

0x232c,	// (0x00040d51) list_setting_pane_vc_g1

0x2338,	// (0x00040d5d) list_setting_pane_vc_g2_ParamLimits

0x2338,	// (0x00040d5d) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004e20e) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004e20e) list_setting_pane_vc_g

0x0bb9,	// (0x0003f5de) list_setting_pane_vc_t1_ParamLimits

0x0bb9,	// (0x0003f5de) list_setting_pane_vc_t1

0x0bd5,	// (0x0003f5fa) list_setting_pane_vc_t2_ParamLimits

0x0bd5,	// (0x0003f5fa) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0004e446) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0004e446) list_setting_pane_vc_t

0x0a68,	// (0x0003f48d) set_value_pane_cp_vc_ParamLimits

0x0a68,	// (0x0003f48d) set_value_pane_cp_vc

0x4d09,	// (0x0004372e) list_single_number_heading_pane_vc_g1_ParamLimits

0x4d09,	// (0x0004372e) list_single_number_heading_pane_vc_g1

0x22c1,	// (0x00040ce6) list_single_number_heading_pane_vc_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_single_number_heading_pane_vc_g

0x0bf1,	// (0x0003f616) list_single_number_heading_pane_vc_t1_ParamLimits

0x0bf1,	// (0x0003f616) list_single_number_heading_pane_vc_t1

0x0c07,	// (0x0003f62c) list_single_number_heading_pane_vc_t2_ParamLimits

0x0c07,	// (0x0003f62c) list_single_number_heading_pane_vc_t2

0x0c19,	// (0x0003f63e) list_single_number_heading_pane_vc_t3_ParamLimits

0x0c19,	// (0x0003f63e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0004e44b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0004e44b) list_single_number_heading_pane_vc_t

0x09c2,	// (0x0003f3e7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x09c2,	// (0x0003f3e7) list_single_graphic_heading_pane_vc_g1

0x4d09,	// (0x0004372e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4d09,	// (0x0004372e) list_single_graphic_heading_pane_vc_g4

0x22c1,	// (0x00040ce6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x22c1,	// (0x00040ce6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004e1e8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004e1e8) list_single_graphic_heading_pane_vc_g

0x0bf1,	// (0x0003f616) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0bf1,	// (0x0003f616) list_single_graphic_heading_pane_vc_t1

0x0c2b,	// (0x0003f650) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0c2b,	// (0x0003f650) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0004e452) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0004e452) list_single_graphic_heading_pane_vc_t

0x4d09,	// (0x0004372e) list_double2_pane_vc_g1_ParamLimits

0x4d09,	// (0x0004372e) list_double2_pane_vc_g1

0x22c1,	// (0x00040ce6) list_double2_pane_vc_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_double2_pane_vc_g

0x0c3d,	// (0x0003f662) list_double2_pane_vc_t1_ParamLimits

0x0c3d,	// (0x0003f662) list_double2_pane_vc_t1

0x0c53,	// (0x0003f678) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0c53,	// (0x0003f678) list_double2_large_graphic_pane_vc_g1

0x0c5f,	// (0x0003f684) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0c5f,	// (0x0003f684) list_double2_large_graphic_pane_vc_g2

0x0c6b,	// (0x0003f690) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0c6b,	// (0x0003f690) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004e00f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004e00f) list_double2_large_graphic_pane_vc_g

0x0c77,	// (0x0003f69c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0c77,	// (0x0003f69c) list_double2_large_graphic_pane_vc_t1

0x276c,	// (0x00041191) list_double_time_pane_vc_g1_ParamLimits

0x276c,	// (0x00041191) list_double_time_pane_vc_g1

0x2778,	// (0x0004119d) list_double_time_pane_vc_g2_ParamLimits

0x2778,	// (0x0004119d) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0004e457) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0004e457) list_double_time_pane_vc_g

0x0c8d,	// (0x0003f6b2) list_double_time_pane_vc_t1_ParamLimits

0x0c8d,	// (0x0003f6b2) list_double_time_pane_vc_t1

0x0cb1,	// (0x0003f6d6) list_double_time_pane_vc_t2_ParamLimits

0x0cb1,	// (0x0003f6d6) list_double_time_pane_vc_t2

0x0d00,	// (0x0003f725) list_double_time_pane_vc_t3_ParamLimits

0x0d00,	// (0x0003f725) list_double_time_pane_vc_t3

0x0d12,	// (0x0003f737) list_double_time_pane_vc_t4_ParamLimits

0x0d12,	// (0x0003f737) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0004e45c) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0004e45c) list_double_time_pane_vc_t

0x4d09,	// (0x0004372e) list_double_pane_vc_g1_ParamLimits

0x4d09,	// (0x0004372e) list_double_pane_vc_g1

0x22c1,	// (0x00040ce6) list_double_pane_vc_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_double_pane_vc_g

0x0d26,	// (0x0003f74b) list_double_pane_vc_t1_ParamLimits

0x0d26,	// (0x0003f74b) list_double_pane_vc_t1

0x0d3a,	// (0x0003f75f) list_double_pane_vc_t2_ParamLimits

0x0d3a,	// (0x0003f75f) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0004e465) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0004e465) list_double_pane_vc_t

0x4d09,	// (0x0004372e) list_double_number_pane_vc_g1_ParamLimits

0x4d09,	// (0x0004372e) list_double_number_pane_vc_g1

0x22c1,	// (0x00040ce6) list_double_number_pane_vc_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_double_number_pane_vc_g

0x0d52,	// (0x0003f777) list_double_number_pane_vc_t1_ParamLimits

0x0d52,	// (0x0003f777) list_double_number_pane_vc_t1

0x0d64,	// (0x0003f789) list_double_number_pane_vc_t2_ParamLimits

0x0d64,	// (0x0003f789) list_double_number_pane_vc_t2

0x0d78,	// (0x0003f79d) list_double_number_pane_vc_t3_ParamLimits

0x0d78,	// (0x0003f79d) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0004e46a) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0004e46a) list_double_number_pane_vc_t

0x0d90,	// (0x0003f7b5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0d90,	// (0x0003f7b5) list_double_large_graphic_pane_vc_g1

0x0db2,	// (0x0003f7d7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0db2,	// (0x0003f7d7) list_double_large_graphic_pane_vc_g2

0x0dc6,	// (0x0003f7eb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0dc6,	// (0x0003f7eb) list_double_large_graphic_pane_vc_g3

0x0dd5,	// (0x0003f7fa) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0dd5,	// (0x0003f7fa) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0004e471) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0004e471) list_double_large_graphic_pane_vc_g

0x0de1,	// (0x0003f806) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0de1,	// (0x0003f806) list_double_large_graphic_pane_vc_t1

0x0dfd,	// (0x0003f822) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0dfd,	// (0x0003f822) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0004e47a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0004e47a) list_double_large_graphic_pane_vc_t

0x4d09,	// (0x0004372e) list_double_heading_pane_vc_g1_ParamLimits

0x4d09,	// (0x0004372e) list_double_heading_pane_vc_g1

0x22c1,	// (0x00040ce6) list_double_heading_pane_vc_g2_ParamLimits

0x22c1,	// (0x00040ce6) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004dff7) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004dff7) list_double_heading_pane_vc_g

0x0e1f,	// (0x0003f844) list_double_heading_pane_vc_t1_ParamLimits

0x0e1f,	// (0x0003f844) list_double_heading_pane_vc_t1

0x0e33,	// (0x0003f858) list_double_heading_pane_vc_t2_ParamLimits

0x0e33,	// (0x0003f858) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004e47f) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004e47f) list_double_heading_pane_vc_t

0x0e4b,	// (0x0003f870) list_double_graphic_pane_vc_g1_ParamLimits

0x0e4b,	// (0x0003f870) list_double_graphic_pane_vc_g1

0x2784,	// (0x000411a9) list_double_graphic_pane_vc_g2_ParamLimits

0x2784,	// (0x000411a9) list_double_graphic_pane_vc_g2

0x4d09,	// (0x0004372e) list_double_graphic_pane_vc_g3_ParamLimits

0x4d09,	// (0x0004372e) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0004e484) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0004e484) list_double_graphic_pane_vc_g

0x0e57,	// (0x0003f87c) list_double_graphic_pane_vc_t1_ParamLimits

0x0e57,	// (0x0003f87c) list_double_graphic_pane_vc_t1

0x0e81,	// (0x0003f8a6) list_double_graphic_pane_vc_t2_ParamLimits

0x0e81,	// (0x0003f8a6) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0004e48d) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0004e48d) list_double_graphic_pane_vc_t

0x11ab,	// (0x0003fbd0) aid_size_cell_fastswap

0xbf2c,	// (0x0004a951) aid_size_cell_touch_ParamLimits

0xbf2c,	// (0x0004a951) aid_size_cell_touch

0x140e,	// (0x0003fe33) popup_fast_swap_wide_window_ParamLimits

0x140e,	// (0x0003fe33) popup_fast_swap_wide_window

0xc0dc,	// (0x0004ab01) touch_pane_ParamLimits

0xc0dc,	// (0x0004ab01) touch_pane

0x4135,	// (0x00042b5a) button_value_adjust_pane_cp2

0x066d,	// (0x0003f092) button_value_adjust_pane_cp4

0x0691,	// (0x0003f0b6) form_field_data_pane_cp2

0xbbb3,	// (0x0004a5d8) form_field_data_wide_pane_cp2

0x45a7,	// (0x00042fcc) bg_scroll_pane_ParamLimits

0x185c,	// (0x00040281) scroll_handle_pane_ParamLimits

0x1870,	// (0x00040295) scroll_sc2_down_pane_ParamLimits

0x1870,	// (0x00040295) scroll_sc2_down_pane

0x45d8,	// (0x00042ffd) scroll_sc2_up_pane_ParamLimits

0x45d8,	// (0x00042ffd) scroll_sc2_up_pane

0xe18e,	// (0x0004cbb3) grid_wheel_folder_pane_g1_ParamLimits

0xe18e,	// (0x0004cbb3) grid_wheel_folder_pane_g1

0x1a51,	// (0x00040476) clock_nsta_pane_cp2_ParamLimits

0x1a51,	// (0x00040476) clock_nsta_pane_cp2

0xd60f,	// (0x0004c034) listscroll_midp_pane_ParamLimits

0xd61b,	// (0x0004c040) midp_canvas_pane

0x50cc,	// (0x00043af1) nsta_clock_indic_pane

0x5100,	// (0x00043b25) listscroll_form_pane_vc

0x5108,	// (0x00043b2d) listscroll_set_pane_vc_ParamLimits

0x5108,	// (0x00043b2d) listscroll_set_pane_vc

0xd8a0,	// (0x0004c2c5) clock_nsta_pane

0xd8ca,	// (0x0004c2ef) indicator_nsta_pane

0x5562,	// (0x00043f87) bg_popup_sub_pane_cp2_ParamLimits

0x5576,	// (0x00043f9b) find_pane_cp2_ParamLimits

0x5576,	// (0x00043f9b) find_pane_cp2

0x558c,	// (0x00043fb1) grid_toobar_pane_ParamLimits

0x566c,	// (0x00044091) list_form_gen_pane_vc_ParamLimits

0x566c,	// (0x00044091) list_form_gen_pane_vc

0x5682,	// (0x000440a7) scroll_pane_cp8_vc_ParamLimits

0x5682,	// (0x000440a7) scroll_pane_cp8_vc

0x56fe,	// (0x00044123) data_form_wide_pane_vc_ParamLimits

0x56fe,	// (0x00044123) data_form_wide_pane_vc

0x570a,	// (0x0004412f) form_field_data_wide_pane_vc_g1

0x5712,	// (0x00044137) form_field_data_wide_pane_vc_t1_ParamLimits

0x5712,	// (0x00044137) form_field_data_wide_pane_vc_t1

0x4149,	// (0x00042b6e) input_focus_pane_cp6_vc_ParamLimits

0x4149,	// (0x00042b6e) input_focus_pane_cp6_vc

0x5a5e,	// (0x00044483) list_midp_pane_ParamLimits

0x6d43,	// (0x00045768) scroll_pane_cp16_ParamLimits

0x6d43,	// (0x00045768) scroll_pane_cp16

0x5aa0,	// (0x000444c5) button_value_adjust_pane_ParamLimits

0x5aa0,	// (0x000444c5) button_value_adjust_pane

0xddd7,	// (0x0004c7fc) button_value_adjust_pane_cp6_ParamLimits

0xddd7,	// (0x0004c7fc) button_value_adjust_pane_cp6

0xdef1,	// (0x0004c916) settings_code_pane_cp_ParamLimits

0xdef1,	// (0x0004c916) settings_code_pane_cp

0x37e4,	// (0x00042209) cell_touch_pane_g1

0x37e4,	// (0x00042209) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004e12d) cell_touch_pane_g

0xe07c,	// (0x0004caa1) cell_touch_pane_cp_ParamLimits

0xe07c,	// (0x0004caa1) cell_touch_pane_cp

0xe098,	// (0x0004cabd) cell_touch_pane_ParamLimits

0xe098,	// (0x0004cabd) cell_touch_pane

0x37e4,	// (0x00042209) scroll_sc2_down_pane_g1

0x37e4,	// (0x00042209) scroll_sc2_up_pane_g1

0x37ee,	// (0x00042213) bg_set_opt_pane_cp4_vc

0x70d3,	// (0x00045af8) list_set_graphic_pane_vc_g1_ParamLimits

0x70d3,	// (0x00045af8) list_set_graphic_pane_vc_g1

0x70df,	// (0x00045b04) list_set_graphic_pane_vc_g2_ParamLimits

0x70df,	// (0x00045b04) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004e41d) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004e41d) list_set_graphic_pane_vc_g

0x70eb,	// (0x00045b10) text_primary_small_cp13_vc_ParamLimits

0x70eb,	// (0x00045b10) text_primary_small_cp13_vc

0x7103,	// (0x00045b28) list_set_graphic_pane_vc_ParamLimits

0x7103,	// (0x00045b28) list_set_graphic_pane_vc

0x37ee,	// (0x00042213) input_focus_pane_cp2_vc

0x37e4,	// (0x00042209) setting_code_pane_vc_g1

0x3919,	// (0x0004233e) setting_code_pane_vc_t1

0x7115,	// (0x00045b3a) set_text_pane_vc_t1_ParamLimits

0x7115,	// (0x00045b3a) set_text_pane_vc_t1

0x37ee,	// (0x00042213) input_focus_pane_cp1_vc

0x7131,	// (0x00045b56) list_set_text_pane_vc

0x37e4,	// (0x00042209) setting_text_pane_vc_g1

0x37ee,	// (0x00042213) bg_set_opt_pane_cp2_vc

0x3910,	// (0x00042335) setting_slider_graphic_pane_vc_g1

0x713b,	// (0x00045b60) setting_slider_graphic_pane_vc_t1

0x714b,	// (0x00045b70) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004e422) setting_slider_graphic_pane_vc_t

0x715b,	// (0x00045b80) slider_set_pane_cp_vc

0x7163,	// (0x00045b88) slider_set_pane_vc_g1

0x716c,	// (0x00045b91) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004e427) slider_set_pane_vc_g

0x4195,	// (0x00042bba) set_opt_bg_pane_g1_copy1

0x419d,	// (0x00042bc2) set_opt_bg_pane_g2_copy1

0x7198,	// (0x00045bbd) set_opt_bg_pane_g3_copy1

0x41ad,	// (0x00042bd2) set_opt_bg_pane_g4_copy1

0x41b5,	// (0x00042bda) set_opt_bg_pane_g5_copy1

0x41bd,	// (0x00042be2) set_opt_bg_pane_g6_copy1

0x71a2,	// (0x00045bc7) set_opt_bg_pane_g7_copy1

0x71aa,	// (0x00045bcf) set_opt_bg_pane_g8_copy1

0x71b4,	// (0x00045bd9) set_opt_bg_pane_g9_copy1

0x37ee,	// (0x00042213) bg_set_opt_pane_cp_vc

0x71be,	// (0x00045be3) setting_slider_pane_vc_t1

0x71cd,	// (0x00045bf2) setting_slider_pane_vc_t2

0x71dd,	// (0x00045c02) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004e436) setting_slider_pane_vc_t

0x71ed,	// (0x00045c12) slider_set_pane_vc

0x23e1,	// (0x00040e06) volume_set_pane_vc_g1

0x23ea,	// (0x00040e0f) volume_set_pane_vc_g2

0x23f3,	// (0x00040e18) volume_set_pane_vc_g3

0x23fc,	// (0x00040e21) volume_set_pane_vc_g4

0x2405,	// (0x00040e2a) volume_set_pane_vc_g5

0x240e,	// (0x00040e33) volume_set_pane_vc_g6

0x2417,	// (0x00040e3c) volume_set_pane_vc_g7

0x2420,	// (0x00040e45) volume_set_pane_vc_g8

0x2429,	// (0x00040e4e) volume_set_pane_vc_g9

0x2432,	// (0x00040e57) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0004e2db) volume_set_pane_vc_g

0x71f5,	// (0x00045c1a) volume_set_pane_vc

0x71fd,	// (0x00045c22) button_value_adjust_pane_cp1_vc

0x7207,	// (0x00045c2c) list_highlight_pane_cp2_vc

0x7210,	// (0x00045c35) list_set_pane_vc_ParamLimits

0x7210,	// (0x00045c35) list_set_pane_vc

0x726e,	// (0x00045c93) main_pane_set_vc_t1_ParamLimits

0x726e,	// (0x00045c93) main_pane_set_vc_t1

0x7283,	// (0x00045ca8) main_pane_set_vc_t2_ParamLimits

0x7283,	// (0x00045ca8) main_pane_set_vc_t2

0x7295,	// (0x00045cba) main_pane_set_vc_t3_ParamLimits

0x7295,	// (0x00045cba) main_pane_set_vc_t3

0x72a9,	// (0x00045cce) main_pane_set_vc_t4_ParamLimits

0x72a9,	// (0x00045cce) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0004e43d) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0004e43d) main_pane_set_vc_t

0x72bd,	// (0x00045ce2) setting_code_pane_vc_ParamLimits

0x72bd,	// (0x00045ce2) setting_code_pane_vc

0x72ce,	// (0x00045cf3) setting_slider_graphic_pane_vc

0x72ce,	// (0x00045cf3) setting_slider_pane_vc

0x72ce,	// (0x00045cf3) setting_text_pane_vc

0x72ce,	// (0x00045cf3) setting_volume_pane_vc

0x72d8,	// (0x00045cfd) scroll_pane_cp121_vc

0x4123,	// (0x00042b48) set_content_pane_vc

0x72e0,	// (0x00045d05) button_value_adjust_pane_g1

0x72e9,	// (0x00045d0e) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0004e492) button_value_adjust_pane_g

0x72f2,	// (0x00045d17) form_field_slider_wide_pane_vc_t1_ParamLimits

0x72f2,	// (0x00045d17) form_field_slider_wide_pane_vc_t1

0x7306,	// (0x00045d2b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7306,	// (0x00045d2b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0004e497) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004e497) form_field_slider_wide_pane_vc_t

0x3b49,	// (0x0004256e) input_focus_pane_cp10_vc_ParamLimits

0x3b49,	// (0x0004256e) input_focus_pane_cp10_vc

0x7334,	// (0x00045d59) slider_cont_pane_cp1_vc_ParamLimits

0x7334,	// (0x00045d59) slider_cont_pane_cp1_vc

0x7346,	// (0x00045d6b) slider_form_pane_g1_cp2

0x716c,	// (0x00045b91) slider_form_pane_g2_cp2

0x7373,	// (0x00045d98) form_field_slider_pane_vc_t3

0x7381,	// (0x00045da6) form_field_slider_pane_vc_t4

0x738f,	// (0x00045db4) slider_form_pane_vc_ParamLimits

0x738f,	// (0x00045db4) slider_form_pane_vc

0x739c,	// (0x00045dc1) form_field_slider_pane_vc_t1_ParamLimits

0x739c,	// (0x00045dc1) form_field_slider_pane_vc_t1

0x7306,	// (0x00045d2b) form_field_slider_pane_vc_t2_ParamLimits

0x7306,	// (0x00045d2b) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0004e4a9) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0004e4a9) form_field_slider_pane_vc_t

0x3b49,	// (0x0004256e) input_focus_pane_cp9_vc_ParamLimits

0x3b49,	// (0x0004256e) input_focus_pane_cp9_vc

0x73b8,	// (0x00045ddd) slider_cont_pane_vc_ParamLimits

0x73b8,	// (0x00045ddd) slider_cont_pane_vc

0x73cc,	// (0x00045df1) list_form_graphic_pane_cp_vc_ParamLimits

0x73cc,	// (0x00045df1) list_form_graphic_pane_cp_vc

0x570a,	// (0x0004412f) form_field_popup_wide_pane_vc_g1

0x73e1,	// (0x00045e06) form_field_popup_wide_pane_vc_t1_ParamLimits

0x73e1,	// (0x00045e06) form_field_popup_wide_pane_vc_t1

0x4149,	// (0x00042b6e) input_focus_pane_cp8_vc_ParamLimits

0x4149,	// (0x00042b6e) input_focus_pane_cp8_vc

0x7426,	// (0x00045e4b) list_form_wide_pane_vc_ParamLimits

0x7426,	// (0x00045e4b) list_form_wide_pane_vc

0x7432,	// (0x00045e57) list_form_graphic_pane_vc_g1

0x743a,	// (0x00045e5f) list_form_graphic_pane_vc_t1_ParamLimits

0x743a,	// (0x00045e5f) list_form_graphic_pane_vc_t1

0x38ce,	// (0x000422f3) list_highlight_pane_cp5_vc_ParamLimits

0x38ce,	// (0x000422f3) list_highlight_pane_cp5_vc

0x7456,	// (0x00045e7b) list_form_graphic_pane_vc_ParamLimits

0x7456,	// (0x00045e7b) list_form_graphic_pane_vc

0x570a,	// (0x0004412f) form_field_popup_pane_vc_g1

0x746c,	// (0x00045e91) form_field_popup_pane_vc_t1_ParamLimits

0x746c,	// (0x00045e91) form_field_popup_pane_vc_t1

0x4149,	// (0x00042b6e) input_focus_pane_cp7_vc_ParamLimits

0x4149,	// (0x00042b6e) input_focus_pane_cp7_vc

0x7483,	// (0x00045ea8) list_form_pane_vc_ParamLimits

0x7483,	// (0x00045ea8) list_form_pane_vc

0x748f,	// (0x00045eb4) data_form_pane_vc_t1_ParamLimits

0x748f,	// (0x00045eb4) data_form_pane_vc_t1

0x4195,	// (0x00042bba) input_focus_pane_vc_g1

0x419d,	// (0x00042bc2) input_focus_pane_vc_g2

0x41a5,	// (0x00042bca) input_focus_pane_vc_g3

0x41ad,	// (0x00042bd2) input_focus_pane_vc_g4

0x41b5,	// (0x00042bda) input_focus_pane_vc_g5

0x41bd,	// (0x00042be2) input_focus_pane_vc_g6

0x41c5,	// (0x00042bea) input_focus_pane_vc_g7

0x41cd,	// (0x00042bf2) input_focus_pane_vc_g8

0x41d5,	// (0x00042bfa) input_focus_pane_vc_g9

0x37e4,	// (0x00042209) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004e0b6) input_focus_pane_vc_g

0x56fe,	// (0x00044123) data_form_pane_vc_ParamLimits

0x56fe,	// (0x00044123) data_form_pane_vc

0x570a,	// (0x0004412f) form_field_data_pane_vc_g1

0x74aa,	// (0x00045ecf) form_field_data_pane_vc_t1_ParamLimits

0x74aa,	// (0x00045ecf) form_field_data_pane_vc_t1

0x4149,	// (0x00042b6e) input_focus_pane_vc_ParamLimits

0x4149,	// (0x00042b6e) input_focus_pane_vc

0x74c4,	// (0x00045ee9) button_value_adjust_pane_cp3_vc

0x74cc,	// (0x00045ef1) button_value_adjust_pane_cp5_vc

0x74d4,	// (0x00045ef9) form_field_data_pane_vc_ParamLimits

0x74d4,	// (0x00045ef9) form_field_data_pane_vc

0x74eb,	// (0x00045f10) form_field_data_pane_vc_cp2

0x74f3,	// (0x00045f18) form_field_data_wide_pane_vc_ParamLimits

0x74f3,	// (0x00045f18) form_field_data_wide_pane_vc

0x7509,	// (0x00045f2e) form_field_data_wide_pane_vc_cp2

0x7511,	// (0x00045f36) form_field_popup_pane_vc_ParamLimits

0x7511,	// (0x00045f36) form_field_popup_pane_vc

0x7528,	// (0x00045f4d) form_field_popup_wide_pane_vc_ParamLimits

0x7528,	// (0x00045f4d) form_field_popup_wide_pane_vc

0x753e,	// (0x00045f63) form_field_slider_pane_vc_ParamLimits

0x753e,	// (0x00045f63) form_field_slider_pane_vc

0x7551,	// (0x00045f76) form_field_slider_wide_pane_vc_ParamLimits

0x7551,	// (0x00045f76) form_field_slider_wide_pane_vc

0xe0b6,	// (0x0004cadb) grid_touch_1_pane_ParamLimits

0xe0b6,	// (0x0004cadb) grid_touch_1_pane

0xe0ca,	// (0x0004caef) grid_touch_2_pane_ParamLimits

0xe0ca,	// (0x0004caef) grid_touch_2_pane

0x761f,	// (0x00046044) touch_pane_g1_ParamLimits

0x761f,	// (0x00046044) touch_pane_g1

0x7588,	// (0x00045fad) cell_app_pane_cp_wide_ParamLimits

0x7588,	// (0x00045fad) cell_app_pane_cp_wide

0x7599,	// (0x00045fbe) grid_popup_fast_wide_pane_ParamLimits

0x7599,	// (0x00045fbe) grid_popup_fast_wide_pane

0x75ad,	// (0x00045fd2) scroll_pane_cp19_ParamLimits

0x75ad,	// (0x00045fd2) scroll_pane_cp19

0x37ee,	// (0x00042213) bg_popup_window_pane_cp20

0x75c1,	// (0x00045fe6) listscroll_popup_fast_wide_pane

0x42fd,	// (0x00042d22) grid_indicator_nsta_pane

0x75c9,	// (0x00045fee) clock_nsta_pane_g1

0x75d2,	// (0x00045ff7) clock_nsta_pane_t1

0xe0f4,	// (0x0004cb19) cell_indicator_nsta_pane_ParamLimits

0xe0f4,	// (0x0004cb19) cell_indicator_nsta_pane

0x761f,	// (0x00046044) cell_indicator_nsta_pane_g1

0xe10b,	// (0x0004cb30) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0004e4ba) cell_indicator_nsta_pane_g

0x763a,	// (0x0004605f) clock_nsta_pane_cp

0x7642,	// (0x00046067) indicator_nsta_pane_cp

0x764a,	// (0x0004606f) nsta_clock_indic_pane_g1

0x3997,	// (0x000423bc) grid_indicator_pane

0x46cd,	// (0x000430f2) scroll_pane_cp29

0x19a0,	// (0x000403c5) indicator_nsta_pane_cp2_ParamLimits

0x19a0,	// (0x000403c5) indicator_nsta_pane_cp2

0x38ce,	// (0x000422f3) main_apps_wheel_pane

0x591f,	// (0x00044344) form_midp_field_text_pane_ParamLimits

0x5a6a,	// (0x0004448f) scroll_bar_cp050_ParamLimits

0x769a,	// (0x000460bf) cell_indicator_pane_ParamLimits

0x769a,	// (0x000460bf) cell_indicator_pane

0x76b1,	// (0x000460d6) cell_indicator_pane_g1

0xe118,	// (0x0004cb3d) grid_wheel_folder_pane_ParamLimits

0xe118,	// (0x0004cb3d) grid_wheel_folder_pane

0xe126,	// (0x0004cb4b) list_wheel_apps_pane_ParamLimits

0xe126,	// (0x0004cb4b) list_wheel_apps_pane

0xe134,	// (0x0004cb59) main_apps_wheel_pane_g1_ParamLimits

0xe134,	// (0x0004cb59) main_apps_wheel_pane_g1

0xe140,	// (0x0004cb65) main_apps_wheel_pane_g2_ParamLimits

0xe140,	// (0x0004cb65) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0004e4d6) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0004e4d6) main_apps_wheel_pane_g

0xe14e,	// (0x0004cb73) main_apps_wheel_pane_t1_ParamLimits

0xe14e,	// (0x0004cb73) main_apps_wheel_pane_t1

0xe162,	// (0x0004cb87) list_wheel_apps_pane_g1

0xe16a,	// (0x0004cb8f) list_wheel_apps_pane_g2

0xe172,	// (0x0004cb97) list_wheel_apps_pane_g3

0xe17a,	// (0x0004cb9f) list_wheel_apps_pane_g4

0xe184,	// (0x0004cba9) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0004e4db) list_wheel_apps_pane_g

0x4c50,	// (0x00043675) navi_icon_text_pane

0xd794,	// (0x0004c1b9) aid_fill_nsta

0x7776,	// (0x0004619b) navi_icon_text_pane_g1

0x7782,	// (0x000461a7) navi_icon_text_pane_t1

0x4ae3,	// (0x00043508) list_set_graphic_pane_t1_ParamLimits

0x4ae3,	// (0x00043508) list_set_graphic_pane_t1

0x61c1,	// (0x00044be6) popup_midp_note_alarm_window_t6_ParamLimits

0x61c1,	// (0x00044be6) popup_midp_note_alarm_window_t6

0x61d3,	// (0x00044bf8) popup_midp_note_alarm_window_t7_ParamLimits

0x61d3,	// (0x00044bf8) popup_midp_note_alarm_window_t7

0x61e5,	// (0x00044c0a) popup_midp_note_alarm_window_t8_ParamLimits

0x61e5,	// (0x00044c0a) popup_midp_note_alarm_window_t8

0x61f7,	// (0x00044c1c) popup_midp_note_alarm_window_t9_ParamLimits

0x61f7,	// (0x00044c1c) popup_midp_note_alarm_window_t9

0x6209,	// (0x00044c2e) popup_midp_note_alarm_window_t10_ParamLimits

0x6209,	// (0x00044c2e) popup_midp_note_alarm_window_t10

0x621b,	// (0x00044c40) popup_midp_note_alarm_window_t11_ParamLimits

0x621b,	// (0x00044c40) popup_midp_note_alarm_window_t11

0x622d,	// (0x00044c52) scroll_pane_cp17_ParamLimits

0x622d,	// (0x00044c52) scroll_pane_cp17

0x23e1,	// (0x00040e06) volume_small_pane_cp_g1

0x27a1,	// (0x000411c6) volume_small_pane_cp_g2

0x27aa,	// (0x000411cf) volume_small_pane_cp_g3

0x27b3,	// (0x000411d8) volume_small_pane_cp_g4

0x27bc,	// (0x000411e1) volume_small_pane_cp_g5

0x27c5,	// (0x000411ea) volume_small_pane_cp_g6

0x27ce,	// (0x000411f3) volume_small_pane_cp_g7

0x27d7,	// (0x000411fc) volume_small_pane_cp_g8

0x27e0,	// (0x00041205) volume_small_pane_cp_g9

0x27e9,	// (0x0004120e) volume_small_pane_cp_g10

0x4ead,	// (0x000438d2) midp_ticker_pane_g1_ParamLimits

0x4eb9,	// (0x000438de) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004e182) midp_ticker_pane_g_ParamLimits

0x4ec5,	// (0x000438ea) midp_ticker_pane_t1_ParamLimits

0xd7b8,	// (0x0004c1dd) aid_fill_nsta_2

0x5a56,	// (0x0004447b) list_form2_midp_pane

0x6b86,	// (0x000455ab) midp_editing_number_pane_ParamLimits

0x6b95,	// (0x000455ba) midp_ticker_pane_ParamLimits

0x7794,	// (0x000461b9) form2_midp_field_pane

0x77b8,	// (0x000461dd) scroll_pane_cp51

0x77d8,	// (0x000461fd) form2_midp_button_pane_ParamLimits

0x77d8,	// (0x000461fd) form2_midp_button_pane

0x77ea,	// (0x0004620f) form2_midp_content_pane_ParamLimits

0x77ea,	// (0x0004620f) form2_midp_content_pane

0x7804,	// (0x00046229) form2_midp_field_choice_group_pane

0x780c,	// (0x00046231) form2_midp_field_pane_g1

0x7814,	// (0x00046239) form2_midp_field_pane_g2

0x781c,	// (0x00046241) form2_midp_field_pane_g3

0x7824,	// (0x00046249) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0004e500) form2_midp_field_pane_g

0x782c,	// (0x00046251) form2_midp_gauge_slider_pane

0x7834,	// (0x00046259) form2_midp_gauge_wait_pane

0x783c,	// (0x00046261) form2_midp_image_pane_ParamLimits

0x783c,	// (0x00046261) form2_midp_image_pane

0x7857,	// (0x0004627c) form2_midp_label_pane_ParamLimits

0x7857,	// (0x0004627c) form2_midp_label_pane

0xe1b7,	// (0x0004cbdc) form2_midp_label_pane_cp_ParamLimits

0xe1b7,	// (0x0004cbdc) form2_midp_label_pane_cp

0x7891,	// (0x000462b6) form2_midp_string_pane_ParamLimits

0x7891,	// (0x000462b6) form2_midp_string_pane

0xbdd7,	// (0x0004a7fc) form2_midp_text_pane_ParamLimits

0xbdd7,	// (0x0004a7fc) form2_midp_text_pane

0x78a3,	// (0x000462c8) form2_midp_time_pane

0x78b3,	// (0x000462d8) input_focus_pane_cp51_ParamLimits

0x78b3,	// (0x000462d8) input_focus_pane_cp51

0x78cb,	// (0x000462f0) form2_midp_label_pane_t1_ParamLimits

0x78cb,	// (0x000462f0) form2_midp_label_pane_t1

0xbdf0,	// (0x0004a815) form2_mdip_text_pane_t1_ParamLimits

0xbdf0,	// (0x0004a815) form2_mdip_text_pane_t1

0x0ee8,	// (0x0003f90d) form2_midp_time_pane_t1

0x7914,	// (0x00046339) form2_midp_gauge_slider_pane_t1

0xe1d6,	// (0x0004cbfb) form2_midp_gauge_slider_pane_t2

0xe1e8,	// (0x0004cc0d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0004e509) form2_midp_gauge_slider_pane_t

0x794a,	// (0x0004636f) form2_midp_slider_pane

0x7956,	// (0x0004637b) form2_midp_gauge_wait_pane_t1

0x7964,	// (0x00046389) form2_midp_wait_pane_ParamLimits

0x7964,	// (0x00046389) form2_midp_wait_pane

0xe1fa,	// (0x0004cc1f) list_single_2graphic_pane_cp4_ParamLimits

0xe1fa,	// (0x0004cc1f) list_single_2graphic_pane_cp4

0xdbd4,	// (0x0004c5f9) list_single_midp_graphic_pane_cp_ParamLimits

0xdbd4,	// (0x0004c5f9) list_single_midp_graphic_pane_cp

0x37ee,	// (0x00042213) list_highlight_pane_cp20

0x79bf,	// (0x000463e4) list_single_2graphic_pane_g1_cp4

0x79c7,	// (0x000463ec) list_single_2graphic_pane_g2_cp4

0x79cf,	// (0x000463f4) list_single_2graphic_pane_t1_cp4

0x38ce,	// (0x000422f3) list_highlight_pane_cp21

0x79de,	// (0x00046403) list_single_midp_graphic_pane_g4_cp

0x79ed,	// (0x00046412) list_single_midp_graphic_pane_t1_cp

0xe20e,	// (0x0004cc33) form2_mdip_string_pane_t1_ParamLimits

0xe20e,	// (0x0004cc33) form2_mdip_string_pane_t1

0x37ee,	// (0x00042213) bg_wml_button_pane_cp2

0x37e4,	// (0x00042209) form2_midp_image_pane_g1

0x1692,	// (0x000400b7) list_double_large_graphic_pane_g5_ParamLimits

0x1692,	// (0x000400b7) list_double_large_graphic_pane_g5

0xd60f,	// (0x0004c034) midp_form_pane_ParamLimits

0x38ce,	// (0x000422f3) main_apps_wheel_pane_ParamLimits

0xc72b,	// (0x0004b150) popup_preview_window_ParamLimits

0xc72b,	// (0x0004b150) popup_preview_window

0x223c,	// (0x00040c61) popup_touch_info_window_ParamLimits

0x223c,	// (0x00040c61) popup_touch_info_window

0x225a,	// (0x00040c7f) popup_touch_menu_window_ParamLimits

0x225a,	// (0x00040c7f) popup_touch_menu_window

0x37da,	// (0x000421ff) bg_popup_sub_pane_cp6

0x7aec,	// (0x00046511) list_touch_menu_pane

0x7af4,	// (0x00046519) list_single_touch_menu_pane_ParamLimits

0x7af4,	// (0x00046519) list_single_touch_menu_pane

0x7b0a,	// (0x0004652f) list_single_touch_menu_pane_t1

0x38ce,	// (0x000422f3) bg_popup_sub_pane_cp7_ParamLimits

0x38ce,	// (0x000422f3) bg_popup_sub_pane_cp7

0x7b18,	// (0x0004653d) heading_sub_pane

0x7b20,	// (0x00046545) list_touch_info_pane_ParamLimits

0x7b20,	// (0x00046545) list_touch_info_pane

0x7b2f,	// (0x00046554) list_single_touch_info_pane_ParamLimits

0x7b2f,	// (0x00046554) list_single_touch_info_pane

0x7b41,	// (0x00046566) list_single_touch_info_pane_t1

0x7b4f,	// (0x00046574) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0004e517) list_single_touch_info_pane_t

0x4dd0,	// (0x000437f5) bg_popup_heading_pane_cp

0x7b5d,	// (0x00046582) heading_sub_pane_t1

0x5698,	// (0x000440bd) bg_popup_preview_window_pane_cp_ParamLimits

0x5698,	// (0x000440bd) bg_popup_preview_window_pane_cp

0x7b18,	// (0x0004653d) heading_preview_pane

0x7b20,	// (0x00046545) list_preview_pane_ParamLimits

0x7b20,	// (0x00046545) list_preview_pane

0x7b6b,	// (0x00046590) popup_preview_window_g1

0x7b2f,	// (0x00046554) list_single_preview_pane_ParamLimits

0x7b2f,	// (0x00046554) list_single_preview_pane

0x7b73,	// (0x00046598) list_single_preview_pane_g1

0x7b7b,	// (0x000465a0) list_single_preview_pane_t1

0x7b41,	// (0x00046566) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0004e51c) list_single_preview_pane_t

0x7b89,	// (0x000465ae) bg_popup_heading_pane_cp2_ParamLimits

0x7b89,	// (0x000465ae) bg_popup_heading_pane_cp2

0x7b9f,	// (0x000465c4) heading_preview_pane_g1

0x7ba7,	// (0x000465cc) heading_preview_pane_t1_ParamLimits

0x7ba7,	// (0x000465cc) heading_preview_pane_t1

0x39ba,	// (0x000423df) soft_indicator_pane_t1_ParamLimits

0x40b0,	// (0x00042ad5) scroll_pane_ParamLimits

0x45c6,	// (0x00042feb) scroll_sc2_left_pane

0x45cf,	// (0x00042ff4) scroll_sc2_right_pane

0x45ee,	// (0x00043013) scroll_bg_pane_g1_ParamLimits

0x4603,	// (0x00043028) scroll_bg_pane_g2_ParamLimits

0x461b,	// (0x00043040) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004e10d) scroll_bg_pane_g_ParamLimits

0x45ee,	// (0x00043013) scroll_handle_pane_g1_ParamLimits

0x463d,	// (0x00043062) scroll_handle_pane_g2_ParamLimits

0x461b,	// (0x00043040) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004e114) scroll_handle_pane_g_ParamLimits

0x1d02,	// (0x00040727) popup_choice_list_window_ParamLimits

0x1d02,	// (0x00040727) popup_choice_list_window

0x556e,	// (0x00043f93) choice_list_pane

0x55f0,	// (0x00044015) cell_toolbar_pane_t1

0x5618,	// (0x0004403d) toolbar_button_pane_ParamLimits

0x66e7,	// (0x0004510c) ai_gene_pane_1_t2_ParamLimits

0x66e7,	// (0x0004510c) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004e337) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004e337) ai_gene_pane_1_t

0x7bc4,	// (0x000465e9) scroll_sc2_left_pane_g1

0x7bc4,	// (0x000465e9) scroll_sc2_right_pane_g1

0x511a,	// (0x00043b3f) bg_popup_sub_pane_cp10

0x7bce,	// (0x000465f3) list_choice_list_pane

0x7be7,	// (0x0004660c) list_single_choice_list_pane_ParamLimits

0x7be7,	// (0x0004660c) list_single_choice_list_pane

0x7bfa,	// (0x0004661f) list_single_choice_list_pane_g1

0x42ce,	// (0x00042cf3) list_single_choice_list_pane_t1_ParamLimits

0x42ce,	// (0x00042cf3) list_single_choice_list_pane_t1

0x7c02,	// (0x00046627) choice_list_pane_g1

0x7c0a,	// (0x0004662f) choice_list_pane_t1

0x37da,	// (0x000421ff) input_focus_pane_cp11

0x44a5,	// (0x00042eca) title_pane_stacon_g2_ParamLimits

0x44a5,	// (0x00042eca) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004e0f3) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004e0f3) title_pane_stacon_g

0x4dd0,	// (0x000437f5) cursor_press_pane

0xc3d8,	// (0x0004adfd) popup_fep_hwr_window_ParamLimits

0xc3d8,	// (0x0004adfd) popup_fep_hwr_window

0x1e28,	// (0x0004084d) popup_fep_vkb_window_ParamLimits

0x1e28,	// (0x0004084d) popup_fep_vkb_window

0x7c18,	// (0x0004663d) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0004e545) fep_vkb_side_pane_g_ParamLimits

0x282b,	// (0x00041250) fep_hwr_candidate_pane_ParamLimits

0x282b,	// (0x00041250) fep_hwr_candidate_pane

0x2855,	// (0x0004127a) fep_hwr_side_pane_ParamLimits

0x2855,	// (0x0004127a) fep_hwr_side_pane

0x2875,	// (0x0004129a) fep_hwr_top_pane_ParamLimits

0x2875,	// (0x0004129a) fep_hwr_top_pane

0x288d,	// (0x000412b2) fep_hwr_write_pane_ParamLimits

0x288d,	// (0x000412b2) fep_hwr_write_pane

0xfb20,	// (0x0004e545) fep_vkb_side_pane_g

0x7c20,	// (0x00046645) fep_hwr_top_pane_g1

0x7c32,	// (0x00046657) fep_hwr_top_pane_g2

0x28b9,	// (0x000412de) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0004e521) fep_hwr_top_pane_g

0x28ce,	// (0x000412f3) fep_hwr_top_text_pane

0x47bd,	// (0x000431e2) fep_hwr_top_text_pane_g1

0x7c68,	// (0x0004668d) fep_hwr_top_text_pane_t1

0x29c4,	// (0x000413e9) fep_hwr_candidate_pane_g1

0x7ebb,	// (0x000468e0) fep_vkb_keypad_pane_g3_ParamLimits

0x7ebb,	// (0x000468e0) fep_vkb_keypad_pane_g3

0x7ee3,	// (0x00046908) fep_vkb_keypad_pane_g4_ParamLimits

0x7ee3,	// (0x00046908) fep_vkb_keypad_pane_g4

0x7f52,	// (0x00046977) fep_vkb_bottom_pane_g2_ParamLimits

0x7f52,	// (0x00046977) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0004e54c) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0004e54c) fep_vkb_bottom_pane_g

0x7bc4,	// (0x000465e9) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0004e556) cell_vkb_side_pane_g

0x7fdd,	// (0x00046a02) cell_vkb_side_pane_t1

0x7feb,	// (0x00046a10) cell_vkb_side_pane_t1_copy1

0x7bc4,	// (0x000465e9) bg_fep_vkb_candidate_pane_g2

0x8117,	// (0x00046b3c) cell_vkb_candidate_pane_ParamLimits

0x7c76,	// (0x0004669b) aid_size_cell_vkb_ParamLimits

0x7c76,	// (0x0004669b) aid_size_cell_vkb

0x8117,	// (0x00046b3c) cell_vkb_candidate_pane

0x29de,	// (0x00041403) bg_popup_fep_shadow_pane_g1

0xe2b7,	// (0x0004ccdc) fep_vkb_bottom_pane_ParamLimits

0xe2b7,	// (0x0004ccdc) fep_vkb_bottom_pane

0x7d3a,	// (0x0004675f) fep_vkb_candidate_pane_ParamLimits

0x7d3a,	// (0x0004675f) fep_vkb_candidate_pane

0xe2dc,	// (0x0004cd01) fep_vkb_keypad_pane_ParamLimits

0xe2dc,	// (0x0004cd01) fep_vkb_keypad_pane

0xe318,	// (0x0004cd3d) fep_vkb_side_pane_ParamLimits

0xe318,	// (0x0004cd3d) fep_vkb_side_pane

0xe354,	// (0x0004cd79) fep_vkb_top_pane_ParamLimits

0xe354,	// (0x0004cd79) fep_vkb_top_pane

0x7e14,	// (0x00046839) fep_vkb_top_pane_g1_ParamLimits

0x7e14,	// (0x00046839) fep_vkb_top_pane_g1

0x7e23,	// (0x00046848) fep_vkb_top_pane_g2_ParamLimits

0x7e23,	// (0x00046848) fep_vkb_top_pane_g2

0x7e32,	// (0x00046857) fep_vkb_top_pane_g3_ParamLimits

0x7e32,	// (0x00046857) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0004e53c) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0004e53c) fep_vkb_top_pane_g

0x7e50,	// (0x00046875) fep_vkb_top_text_pane_ParamLimits

0x7e50,	// (0x00046875) fep_vkb_top_text_pane

0xe390,	// (0x0004cdb5) fep_vkb_side_pane_g1_ParamLimits

0xe390,	// (0x0004cdb5) fep_vkb_side_pane_g1

0x7eaa,	// (0x000468cf) grid_vkb_side_pane_ParamLimits

0x7eaa,	// (0x000468cf) grid_vkb_side_pane

0x29e6,	// (0x0004140b) bg_popup_fep_shadow_pane_g2

0x29ef,	// (0x00041414) bg_popup_fep_shadow_pane_g3

0x29f7,	// (0x0004141c) bg_popup_fep_shadow_pane_g4

0x2a00,	// (0x00041425) bg_popup_fep_shadow_pane_g5

0x2a0a,	// (0x0004142f) bg_popup_fep_shadow_pane_g6

0x2a12,	// (0x00041437) bg_popup_fep_shadow_pane_g7

0x41b5,	// (0x00042bda) bg_popup_fep_shadow_pane_g8

0x7f01,	// (0x00046926) grid_vkb_keypad_number_pane_ParamLimits

0x7f01,	// (0x00046926) grid_vkb_keypad_number_pane

0x7f11,	// (0x00046936) grid_vkb_keypad_pane_ParamLimits

0x7f11,	// (0x00046936) grid_vkb_keypad_pane

0x7f37,	// (0x0004695c) fep_vkb_bottom_pane_g1_ParamLimits

0x7f37,	// (0x0004695c) fep_vkb_bottom_pane_g1

0x7f60,	// (0x00046985) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7f60,	// (0x00046985) grid_vkb_keypad_bottom_left_pane

0x7f75,	// (0x0004699a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7f75,	// (0x0004699a) grid_vkb_keypad_bottom_right_pane

0x7f8a,	// (0x000469af) fep_vkb_top_text_pane_g1

0xe3d7,	// (0x0004cdfc) fep_vkb_top_text_pane_t1

0xe3e9,	// (0x0004ce0e) cell_vkb_side_pane_ParamLimits

0xe3e9,	// (0x0004ce0e) cell_vkb_side_pane

0x7bc4,	// (0x000465e9) cell_vkb_side_pane_g1

0x7ff9,	// (0x00046a1e) cell_vkb_keypad_pane_ParamLimits

0x7ff9,	// (0x00046a1e) cell_vkb_keypad_pane

0x806e,	// (0x00046a93) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0004e569) bg_popup_fep_shadow_pane_g

0x7bc4,	// (0x000465e9) cell_hwr_side_pane_g1

0x7bc4,	// (0x000465e9) cell_hwr_side_pane_g2

0x8078,	// (0x00046a9d) cell_vkb_keypad_pane_t1

0xe3ff,	// (0x0004ce24) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3ff,	// (0x0004ce24) cell_vkb_keypad_bottom_left_pane

0xe414,	// (0x0004ce39) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe414,	// (0x0004ce39) cell_vkb_keypad_bottom_right_pane

0x7bc4,	// (0x000465e9) cell_vkb_keypad_bottom_left_pane_g1

0x7bc4,	// (0x000465e9) cell_vkb_keypad_bottom_right_pane_g1

0x80dc,	// (0x00046b01) cell_vkb_keypad_number_pane_ParamLimits

0x80dc,	// (0x00046b01) cell_vkb_keypad_number_pane

0x80fb,	// (0x00046b20) cell_vkb_keypad_number_pane_g1

0x8105,	// (0x00046b2a) cell_vkb_keypad_number_pane_g2

0x810e,	// (0x00046b33) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0004e55b) cell_vkb_keypad_number_pane_g

0x8078,	// (0x00046a9d) cell_vkb_keypad_number_pane_t1

0x8132,	// (0x00046b57) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0004e556) cell_hwr_side_pane_g

0x814b,	// (0x00046b70) cell_hwr_side_pane_t1

0x2a24,	// (0x00041449) cell_hwr_side_pane_t1_copy1

0x7e42,	// (0x00046867) cell_hwr_candidate_pane_g1

0x2a32,	// (0x00041457) cell_hwr_candidate_pane_t1

0x7bc4,	// (0x000465e9) cell_vkb_candidate_pane_g2

0x81d1,	// (0x00046bf6) cell_vkb_candidate_pane_t1

0x27f2,	// (0x00041217) bg_popup_fep_shadow_pane_ParamLimits

0x27f2,	// (0x00041217) bg_popup_fep_shadow_pane

0xe27d,	// (0x0004cca2) bg_fep_hwr_top_pane_g4

0x7c44,	// (0x00046669) bg_hwr_side_pane_g1_ParamLimits

0x7c44,	// (0x00046669) bg_hwr_side_pane_g1

0xca87,	// (0x0004b4ac) cell_hwr_side_pane_ParamLimits

0xca87,	// (0x0004b4ac) cell_hwr_side_pane

0x2945,	// (0x0004136a) fep_hwr_write_pane_g1_ParamLimits

0x2945,	// (0x0004136a) fep_hwr_write_pane_g1

0x2952,	// (0x00041377) fep_hwr_write_pane_g2_ParamLimits

0x2952,	// (0x00041377) fep_hwr_write_pane_g2

0x295f,	// (0x00041384) fep_hwr_write_pane_g3_ParamLimits

0x295f,	// (0x00041384) fep_hwr_write_pane_g3

0xcaa7,	// (0x0004b4cc) fep_hwr_write_pane_g4_ParamLimits

0xcaa7,	// (0x0004b4cc) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0004e528) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0004e528) fep_hwr_write_pane_g

0xe27d,	// (0x0004cca2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe27d,	// (0x0004cca2) bg_fep_hwr_candidate_pane_g2

0x2982,	// (0x000413a7) cell_hwr_candidate_pane_ParamLimits

0x2982,	// (0x000413a7) cell_hwr_candidate_pane

0x29c4,	// (0x000413e9) fep_hwr_candidate_pane_g1_ParamLimits

0x7ca4,	// (0x000466c9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7ca4,	// (0x000466c9) bg_popup_fep_shadow_pane_cp2

0x7e42,	// (0x00046867) fep_vkb_top_pane_g4_ParamLimits

0x7e42,	// (0x00046867) fep_vkb_top_pane_g4

0x7e88,	// (0x000468ad) fep_vkb_side_pane_g2_ParamLimits

0x7e88,	// (0x000468ad) fep_vkb_side_pane_g2

0xbac1,	// (0x0004a4e6) list_setting_pane_t4_ParamLimits

0xbac1,	// (0x0004a4e6) list_setting_pane_t4

0xbb5b,	// (0x0004a580) list_setting_number_pane_t5_ParamLimits

0xbb5b,	// (0x0004a580) list_setting_number_pane_t5

0x47f4,	// (0x00043219) list_double_heading_pane_cp2_ParamLimits

0x47f4,	// (0x00043219) list_double_heading_pane_cp2

0x40e4,	// (0x00042b09) list_double_heading_pane_g1_cp2_ParamLimits

0x40e4,	// (0x00042b09) list_double_heading_pane_g1_cp2

0x4157,	// (0x00042b7c) list_double_heading_pane_g2_cp2_ParamLimits

0x4157,	// (0x00042b7c) list_double_heading_pane_g2_cp2

0x81df,	// (0x00046c04) list_double_heading_pane_t1_cp2_ParamLimits

0x81df,	// (0x00046c04) list_double_heading_pane_t1_cp2

0x81f5,	// (0x00046c1a) list_double_heading_pane_t2_cp2_ParamLimits

0x81f5,	// (0x00046c1a) list_double_heading_pane_t2_cp2

0x37c2,	// (0x000421e7) aid_value_unit2

0x1468,	// (0x0003fe8d) popup_preview_fixed_window

0x3b57,	// (0x0004257c) bg_popup_preview_window_pane_cp02

0x8207,	// (0x00046c2c) list_preview_fixed_pane

0x824d,	// (0x00046c72) list_empty_pane_fp_ParamLimits

0x824d,	// (0x00046c72) list_empty_pane_fp

0x824d,	// (0x00046c72) list_single_cale_day_pane_fp_ParamLimits

0x824d,	// (0x00046c72) list_single_cale_day_pane_fp

0x824d,	// (0x00046c72) list_single_graphic_heading_pane_fp_ParamLimits

0x824d,	// (0x00046c72) list_single_graphic_heading_pane_fp

0x824d,	// (0x00046c72) list_single_graphic_pane_fp_ParamLimits

0x824d,	// (0x00046c72) list_single_graphic_pane_fp

0x824d,	// (0x00046c72) list_single_heading_pane_fp_ParamLimits

0x824d,	// (0x00046c72) list_single_heading_pane_fp

0x824d,	// (0x00046c72) list_single_pane_fp_ParamLimits

0x824d,	// (0x00046c72) list_single_pane_fp

0x8262,	// (0x00046c87) list_single_pane_fp_g1_ParamLimits

0x8262,	// (0x00046c87) list_single_pane_fp_g1

0x40e4,	// (0x00042b09) list_single_pane_fp_g2_ParamLimits

0x40e4,	// (0x00042b09) list_single_pane_fp_g2

0x4157,	// (0x00042b7c) list_single_pane_fp_g3_ParamLimits

0x4157,	// (0x00042b7c) list_single_pane_fp_g3

0x826e,	// (0x00046c93) list_single_pane_fp_g4_ParamLimits

0x826e,	// (0x00046c93) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0004e58a) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0004e58a) list_single_pane_fp_g

0x0efb,	// (0x0003f920) list_single_pane_fp_t1_ParamLimits

0x0efb,	// (0x0003f920) list_single_pane_fp_t1

0x0f12,	// (0x0003f937) list_single_graphic_pane_fp_g1_ParamLimits

0x0f12,	// (0x0003f937) list_single_graphic_pane_fp_g1

0x8262,	// (0x00046c87) list_single_graphic_pane_fp_g2_ParamLimits

0x8262,	// (0x00046c87) list_single_graphic_pane_fp_g2

0x40e4,	// (0x00042b09) list_single_graphic_pane_fp_g3_ParamLimits

0x40e4,	// (0x00042b09) list_single_graphic_pane_fp_g3

0x4157,	// (0x00042b7c) list_single_graphic_pane_fp_g4_ParamLimits

0x4157,	// (0x00042b7c) list_single_graphic_pane_fp_g4

0x826e,	// (0x00046c93) list_single_graphic_pane_fp_g5_ParamLimits

0x826e,	// (0x00046c93) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e593) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e593) list_single_graphic_pane_fp_g

0x0f1e,	// (0x0003f943) list_single_graphic_pane_fp_t1_ParamLimits

0x0f1e,	// (0x0003f943) list_single_graphic_pane_fp_t1

0x0f12,	// (0x0003f937) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0f12,	// (0x0003f937) list_single_graphic_heading_pane_fp_g1

0x8262,	// (0x00046c87) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8262,	// (0x00046c87) list_single_graphic_heading_pane_fp_g2

0x40e4,	// (0x00042b09) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x40e4,	// (0x00042b09) list_single_graphic_heading_pane_fp_g3

0x4157,	// (0x00042b7c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4157,	// (0x00042b7c) list_single_graphic_heading_pane_fp_g4

0x826e,	// (0x00046c93) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x826e,	// (0x00046c93) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e593) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e593) list_single_graphic_heading_pane_fp_g

0x0f34,	// (0x0003f959) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0f34,	// (0x0003f959) list_single_graphic_heading_pane_fp_t1

0x0f4a,	// (0x0003f96f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0f4a,	// (0x0003f96f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0004e59e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0004e59e) list_single_graphic_heading_pane_fp_t

0x0f5c,	// (0x0003f981) list_single_cale_day_pane_fp_g1_ParamLimits

0x0f5c,	// (0x0003f981) list_single_cale_day_pane_fp_g1

0x827a,	// (0x00046c9f) list_single_cale_day_pane_fp_g2_ParamLimits

0x827a,	// (0x00046c9f) list_single_cale_day_pane_fp_g2

0x2a50,	// (0x00041475) list_single_cale_day_pane_fp_g3_ParamLimits

0x2a50,	// (0x00041475) list_single_cale_day_pane_fp_g3

0x2a78,	// (0x0004149d) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a78,	// (0x0004149d) list_single_cale_day_pane_fp_g4

0x2a9c,	// (0x000414c1) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a9c,	// (0x000414c1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004e5a3) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004e5a3) list_single_cale_day_pane_fp_g

0x0f94,	// (0x0003f9b9) list_single_cale_day_pane_fp_t1_ParamLimits

0x0f94,	// (0x0003f9b9) list_single_cale_day_pane_fp_t1

0x0fba,	// (0x0003f9df) list_single_cale_day_pane_fp_t2_ParamLimits

0x0fba,	// (0x0003f9df) list_single_cale_day_pane_fp_t2

0x0fd3,	// (0x0003f9f8) list_single_cale_day_pane_fp_t3_ParamLimits

0x0fd3,	// (0x0003f9f8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0004e5ae) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0004e5ae) list_single_cale_day_pane_fp_t

0x8262,	// (0x00046c87) list_empty_pane_fp_g1_ParamLimits

0x8262,	// (0x00046c87) list_empty_pane_fp_g1

0x0fec,	// (0x0003fa11) list_empty_pane_fp_t1

0x0ffa,	// (0x0003fa1f) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0004e5b5) list_empty_pane_fp_t

0x8262,	// (0x00046c87) list_single_heading_pane_fp_g1_ParamLimits

0x8262,	// (0x00046c87) list_single_heading_pane_fp_g1

0x40e4,	// (0x00042b09) list_single_heading_pane_fp_g2_ParamLimits

0x40e4,	// (0x00042b09) list_single_heading_pane_fp_g2

0x4157,	// (0x00042b7c) list_single_heading_pane_fp_g3_ParamLimits

0x4157,	// (0x00042b7c) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0004e5ba) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0004e5ba) list_single_heading_pane_fp_g

0x1008,	// (0x0003fa2d) list_single_heading_pane_fp_t1_ParamLimits

0x1008,	// (0x0003fa2d) list_single_heading_pane_fp_t1

0x101a,	// (0x0003fa3f) list_single_heading_pane_fp_t2_ParamLimits

0x101a,	// (0x0003fa3f) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004e5c1) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0004e5c1) list_single_heading_pane_fp_t

0x433c,	// (0x00042d61) aid_size_cell_fast

0x3ac7,	// (0x000424ec) soft_indicator_pane_cp1_t1

0x4379,	// (0x00042d9e) cell_app_pane_cp2_ParamLimits

0x4379,	// (0x00042d9e) cell_app_pane_cp2

0x2814,	// (0x00041239) fep_hwr_candidate_drop_down_list_pane

0xe28b,	// (0x0004ccb0) fep_hwr_candidate_pane_g3_ParamLimits

0xe28b,	// (0x0004ccb0) fep_hwr_candidate_pane_g3

0xe298,	// (0x0004ccbd) fep_hwr_candidate_pane_g4_ParamLimits

0xe298,	// (0x0004ccbd) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0004e535) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0004e535) fep_hwr_candidate_pane_g

0x7d29,	// (0x0004674e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7d29,	// (0x0004674e) fep_vkb_candidate_drop_down_list_pane

0x813a,	// (0x00046b5f) fep_vkb_candidate_pane_g3

0x8142,	// (0x00046b67) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004e562) fep_vkb_candidate_pane_g

0x7e42,	// (0x00046867) cell_hwr_candidate_pane_g1_ParamLimits

0x818f,	// (0x00046bb4) cell_hwr_candidate_pane_g3_ParamLimits

0x818f,	// (0x00046bb4) cell_hwr_candidate_pane_g3

0x81b0,	// (0x00046bd5) cell_hwr_candidate_pane_g4_ParamLimits

0x81b0,	// (0x00046bd5) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0004e57c) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0004e57c) cell_hwr_candidate_pane_g

0x8159,	// (0x00046b7e) cell_vkb_candidate_pane_g3_ParamLimits

0x8159,	// (0x00046b7e) cell_vkb_candidate_pane_g3

0x8174,	// (0x00046b99) cell_vkb_candidate_pane_g4_ParamLimits

0x8174,	// (0x00046b99) cell_vkb_candidate_pane_g4

0x8286,	// (0x00046cab) cell_app_pane_cp2_g1_ParamLimits

0x8286,	// (0x00046cab) cell_app_pane_cp2_g1

0x82a4,	// (0x00046cc9) cell_app_pane_cp2_g2_ParamLimits

0x82a4,	// (0x00046cc9) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0004e5c6) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0004e5c6) cell_app_pane_cp2_g

0x82b0,	// (0x00046cd5) cell_app_pane_cp2_t1_ParamLimits

0x82b0,	// (0x00046cd5) cell_app_pane_cp2_t1

0x4149,	// (0x00042b6e) grid_highlight_pane_cp1_ParamLimits

0x4149,	// (0x00042b6e) grid_highlight_pane_cp1

0x2ac0,	// (0x000414e5) cell_hwr_candidate_pane_cp1_ParamLimits

0x2ac0,	// (0x000414e5) cell_hwr_candidate_pane_cp1

0x7e42,	// (0x00046867) fep_hwr_candidate_drop_down_list_pane_g1

0x82c2,	// (0x00046ce7) fep_hwr_candidate_drop_down_list_pane_g2

0x82cf,	// (0x00046cf4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004e5cb) fep_hwr_candidate_drop_down_list_pane_g

0x2adf,	// (0x00041504) fep_hwr_candidate_drop_down_list_scroll_pane

0x2ae8,	// (0x0004150d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2ae8,	// (0x0004150d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2af5,	// (0x0004151a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2af5,	// (0x0004151a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2b02,	// (0x00041527) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2b02,	// (0x00041527) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8159,	// (0x00046b7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8159,	// (0x00046b7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8174,	// (0x00046b99) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8174,	// (0x00046b99) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2b0f,	// (0x00041534) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2b0f,	// (0x00041534) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2b2a,	// (0x0004154f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2b2a,	// (0x0004154f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2b45,	// (0x0004156a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2b45,	// (0x0004156a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0004e5d2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0004e5d2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x82dc,	// (0x00046d01) cell_vkb_candidate_pane_cp1_ParamLimits

0x82dc,	// (0x00046d01) cell_vkb_candidate_pane_cp1

0x7e42,	// (0x00046867) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7e42,	// (0x00046867) fep_vkb_candidate_drop_down_list_pane_g1

0x82c2,	// (0x00046ce7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x82c2,	// (0x00046ce7) fep_vkb_candidate_drop_down_list_pane_g2

0x82cf,	// (0x00046cf4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x82cf,	// (0x00046cf4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004e5cb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0004e5cb) fep_vkb_candidate_drop_down_list_pane_g

0x82fc,	// (0x00046d21) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x82fc,	// (0x00046d21) fep_vkb_candidate_drop_down_list_scroll_pane

0x8309,	// (0x00046d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8309,	// (0x00046d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8316,	// (0x00046d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8316,	// (0x00046d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8322,	// (0x00046d47) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8322,	// (0x00046d47) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x818f,	// (0x00046bb4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x818f,	// (0x00046bb4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x81b0,	// (0x00046bd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x81b0,	// (0x00046bd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x832e,	// (0x00046d53) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x832e,	// (0x00046d53) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x834f,	// (0x00046d74) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x834f,	// (0x00046d74) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8370,	// (0x00046d95) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8370,	// (0x00046d95) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0004e5e3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0004e5e3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0ed,	// (0x0004bb12) title_pane_g1_ParamLimits

0xd100,	// (0x0004bb25) title_pane_g2_ParamLimits

0xf54e,	// (0x0004df73) title_pane_g_ParamLimits

0x47ad,	// (0x000431d2) aid_call2_pane

0x47b5,	// (0x000431da) aid_call_pane

0x47bd,	// (0x000431e2) popup_clock_analogue_window_g1

0x47bd,	// (0x000431e2) popup_clock_analogue_window_g2

0x1885,	// (0x000402aa) popup_clock_analogue_window_g3

0x188e,	// (0x000402b3) popup_clock_analogue_window_g4

0x37e4,	// (0x00042209) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004e122) popup_clock_analogue_window_g

0x1896,	// (0x000402bb) popup_clock_analogue_window_t1

0x18a4,	// (0x000402c9) clock_digital_number_pane_ParamLimits

0x18a4,	// (0x000402c9) clock_digital_number_pane

0x18b0,	// (0x000402d5) clock_digital_number_pane_cp02_ParamLimits

0x18b0,	// (0x000402d5) clock_digital_number_pane_cp02

0x18bc,	// (0x000402e1) clock_digital_number_pane_cp03_ParamLimits

0x18bc,	// (0x000402e1) clock_digital_number_pane_cp03

0x18c8,	// (0x000402ed) clock_digital_number_pane_cp04_ParamLimits

0x18c8,	// (0x000402ed) clock_digital_number_pane_cp04

0x18d4,	// (0x000402f9) clock_digital_separator_pane_ParamLimits

0x18d4,	// (0x000402f9) clock_digital_separator_pane

0x18e0,	// (0x00040305) popup_clock_digital_window_t1_ParamLimits

0x18e0,	// (0x00040305) popup_clock_digital_window_t1

0x37e4,	// (0x00042209) clock_digital_number_pane_g1

0x37e4,	// (0x00042209) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004e12d) clock_digital_number_pane_g

0x37e4,	// (0x00042209) clock_digital_separator_pane_g1

0x37e4,	// (0x00042209) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004e12d) clock_digital_separator_pane_g

0xd794,	// (0x0004c1b9) aid_fill_nsta_ParamLimits

0xd8ca,	// (0x0004c2ef) indicator_nsta_pane_ParamLimits

0x53fb,	// (0x00043e20) popup_clock_analogue_window

0x53fb,	// (0x00043e20) popup_clock_digital_window

0x42fd,	// (0x00042d22) grid_indicator_nsta_pane_ParamLimits

0x75e0,	// (0x00046005) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0004e4b5) clock_nsta_pane_t

0x1849,	// (0x0004026e) aid_size_max_handle

0xc179,	// (0x0004ab9e) aid_size_min_handle

0x4dd0,	// (0x000437f5) editor_scroll_pane

0x838b,	// (0x00046db0) ex_editor_pane

0x42aa,	// (0x00042ccf) scroll_pane_cp13

0x40dc,	// (0x00042b01) scroll_pane_cp14

0x47ec,	// (0x00043211) scroll_pane_cp36

0xd577,	// (0x0004bf9c) list_single_graphic_hl_pane_cp2_ParamLimits

0xd577,	// (0x0004bf9c) list_single_graphic_hl_pane_cp2

0xca4d,	// (0x0004b472) list_single_graphic_hl_pane_ParamLimits

0xca4d,	// (0x0004b472) list_single_graphic_hl_pane

0x1030,	// (0x0003fa55) aid_size_min_hl_cp1

0x8393,	// (0x00046db8) list_highlight_pane_cp34_ParamLimits

0x8393,	// (0x00046db8) list_highlight_pane_cp34

0x83a4,	// (0x00046dc9) list_single_graphic_hl_pane_g1_ParamLimits

0x83a4,	// (0x00046dc9) list_single_graphic_hl_pane_g1

0xbe09,	// (0x0004a82e) list_single_graphic_hl_pane_g2_ParamLimits

0xbe09,	// (0x0004a82e) list_single_graphic_hl_pane_g2

0xbe09,	// (0x0004a82e) list_single_graphic_hl_pane_g3_ParamLimits

0xbe09,	// (0x0004a82e) list_single_graphic_hl_pane_g3

0x4d41,	// (0x00043766) list_single_graphic_hl_pane_g4_ParamLimits

0x4d41,	// (0x00043766) list_single_graphic_hl_pane_g4

0x2b60,	// (0x00041585) list_single_graphic_hl_pane_g5_ParamLimits

0x2b60,	// (0x00041585) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0004e5f4) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0004e5f4) list_single_graphic_hl_pane_g

0xbe15,	// (0x0004a83a) list_single_graphic_hl_pane_t1_ParamLimits

0xbe15,	// (0x0004a83a) list_single_graphic_hl_pane_t1

0x83b1,	// (0x00046dd6) aid_size_min_hl_cp2

0x83ba,	// (0x00046ddf) list_highlight_pane_cp34_cp2_ParamLimits

0x83ba,	// (0x00046ddf) list_highlight_pane_cp34_cp2

0x83a4,	// (0x00046dc9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x83a4,	// (0x00046dc9) list_single_graphic_hl_pane_g1_cp2

0x83c7,	// (0x00046dec) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x83c7,	// (0x00046dec) list_single_graphic_hl_pane_g2_cp2

0x83d3,	// (0x00046df8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x83d3,	// (0x00046df8) list_single_graphic_hl_pane_g3_cp2

0x798f,	// (0x000463b4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x798f,	// (0x000463b4) list_single_graphic_hl_pane_g4_cp2

0x83e1,	// (0x00046e06) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x83e1,	// (0x00046e06) list_single_graphic_hl_pane_g5_cp2

0xc1e6,	// (0x0004ac0b) control_pane_g4_ParamLimits

0xc1e6,	// (0x0004ac0b) control_pane_g4

0x511a,	// (0x00043b3f) bg_popup_sub_pane_cp10_ParamLimits

0x7bce,	// (0x000465f3) list_choice_list_pane_ParamLimits

0x7bdd,	// (0x00046602) scroll_pane_cp23

0x3b57,	// (0x0004257c) bg_popup_preview_window_pane_cp02_ParamLimits

0x8207,	// (0x00046c2c) list_preview_fixed_pane_ParamLimits

0x821d,	// (0x00046c42) list_preview_fixed_pane_cp_ParamLimits

0x821d,	// (0x00046c42) list_preview_fixed_pane_cp

0x8229,	// (0x00046c4e) popup_preview_fixed_window_g1_ParamLimits

0x8229,	// (0x00046c4e) popup_preview_fixed_window_g1

0x8235,	// (0x00046c5a) popup_preview_fixed_window_g2_ParamLimits

0x8235,	// (0x00046c5a) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0004e583) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0004e583) popup_preview_fixed_window_g

0x17bd,	// (0x000401e2) aid_navi_side_left_pane_ParamLimits

0x17d2,	// (0x000401f7) aid_navi_side_right_pane_ParamLimits

0x17ea,	// (0x0004020f) navi_icon_pane_stacon_ParamLimits

0x17fe,	// (0x00040223) navi_navi_pane_stacon_ParamLimits

0x17ea,	// (0x0004020f) navi_text_pane_stacon_ParamLimits

0x37da,	// (0x000421ff) main_text_info_pane

0x840b,	// (0x00046e30) listscroll_text_info_pane

0x8413,	// (0x00046e38) list_text_info_pane_ParamLimits

0x8413,	// (0x00046e38) list_text_info_pane

0x8422,	// (0x00046e47) scroll_pane_cp24_ParamLimits

0x8422,	// (0x00046e47) scroll_pane_cp24

0xe42f,	// (0x0004ce54) list_text_info_pane_t1_ParamLimits

0xe42f,	// (0x0004ce54) list_text_info_pane_t1

0xc34b,	// (0x0004ad70) popup_fast_swap2_window_ParamLimits

0xc34b,	// (0x0004ad70) popup_fast_swap2_window

0x8471,	// (0x00046e96) aid_size_cell_fast2

0x37da,	// (0x000421ff) bg_popup_window_pane_cp17

0x5a8a,	// (0x000444af) heading_pane_cp2

0x3da6,	// (0x000427cb) listscroll_fast2_pane

0x847b,	// (0x00046ea0) grid_fast2_pane

0x8485,	// (0x00046eaa) listscroll_fast2_pane_g1

0x848d,	// (0x00046eb2) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0004e5ff) listscroll_fast2_pane_g

0x42aa,	// (0x00042ccf) scroll_pane_cp26

0x8497,	// (0x00046ebc) cell_fast2_pane_ParamLimits

0x8497,	// (0x00046ebc) cell_fast2_pane

0x84ac,	// (0x00046ed1) cell_fast2_pane_g1

0x84b5,	// (0x00046eda) cell_fast2_pane_g2

0x84be,	// (0x00046ee3) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0004e604) cell_fast2_pane_g

0x3e99,	// (0x000428be) grid_highlight_pane_cp9

0x3eae,	// (0x000428d3) main_eswt_pane_ParamLimits

0x3eae,	// (0x000428d3) main_eswt_pane

0x8437,	// (0x00046e5c) list_single_text_info_pane

0x84c6,	// (0x00046eeb) eswt_ctrl_button_pane

0x84c6,	// (0x00046eeb) eswt_ctrl_canvas_pane

0x84ce,	// (0x00046ef3) eswt_ctrl_combo_pane

0x84c6,	// (0x00046eeb) eswt_ctrl_default_pane

0x84c6,	// (0x00046eeb) eswt_ctrl_label_pane

0x84d6,	// (0x00046efb) eswt_ctrl_wait_pane

0x84de,	// (0x00046f03) eswt_shell_pane

0x37da,	// (0x000421ff) listscroll_eswt_app_pane

0x84fe,	// (0x00046f23) popup_eswt_tasktip_window_ParamLimits

0x84fe,	// (0x00046f23) popup_eswt_tasktip_window

0x5698,	// (0x000440bd) bg_popup_window_pane_cp18

0x850f,	// (0x00046f34) eswt_control_pane_g1_ParamLimits

0x850f,	// (0x00046f34) eswt_control_pane_g1

0x851c,	// (0x00046f41) eswt_control_pane_g2_ParamLimits

0x851c,	// (0x00046f41) eswt_control_pane_g2

0x8529,	// (0x00046f4e) eswt_control_pane_g3_ParamLimits

0x8529,	// (0x00046f4e) eswt_control_pane_g3

0x8536,	// (0x00046f5b) eswt_control_pane_g4_ParamLimits

0x8536,	// (0x00046f5b) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0004e60b) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0004e60b) eswt_control_pane_g

0x4149,	// (0x00042b6e) bg_button_pane_ParamLimits

0x4149,	// (0x00042b6e) bg_button_pane

0x3eae,	// (0x000428d3) common_borders_pane_copy2_ParamLimits

0x3eae,	// (0x000428d3) common_borders_pane_copy2

0x8543,	// (0x00046f68) control_button_pane_g1_ParamLimits

0x8543,	// (0x00046f68) control_button_pane_g1

0x854f,	// (0x00046f74) control_button_pane_g2_ParamLimits

0x854f,	// (0x00046f74) control_button_pane_g2

0x855b,	// (0x00046f80) control_button_pane_g3_ParamLimits

0x855b,	// (0x00046f80) control_button_pane_g3

0x0002,

0xfbef,	// (0x0004e614) control_button_pane_g_ParamLimits

0xfbef,	// (0x0004e614) control_button_pane_g

0x856f,	// (0x00046f94) control_button_pane_t1

0x857d,	// (0x00046fa2) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0004e61b) control_button_pane_t

0x5624,	// (0x00044049) bg_button_pane_g1

0x562c,	// (0x00044051) bg_button_pane_g2

0x5634,	// (0x00044059) bg_button_pane_g3

0x563c,	// (0x00044061) bg_button_pane_g4

0x5644,	// (0x00044069) bg_button_pane_g5

0x564c,	// (0x00044071) bg_button_pane_g6

0x5654,	// (0x00044079) bg_button_pane_g7

0x565c,	// (0x00044081) bg_button_pane_g8

0x5664,	// (0x00044089) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004e28b) bg_button_pane_g

0x7b89,	// (0x000465ae) common_borders_pane_ParamLimits

0x7b89,	// (0x000465ae) common_borders_pane

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy1_ParamLimits

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy1

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy1_ParamLimits

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy1

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy1_ParamLimits

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy1

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy1_ParamLimits

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy1

0x7bc4,	// (0x000465e9) bg_eswt_ctrl_canvas_pane_g1

0x7b89,	// (0x000465ae) common_borders_pane_cp2_ParamLimits

0x7b89,	// (0x000465ae) common_borders_pane_cp2

0x7b89,	// (0x000465ae) common_borders_pane_cp3_ParamLimits

0x7b89,	// (0x000465ae) common_borders_pane_cp3

0x858b,	// (0x00046fb0) separator_horizontal_pane

0x8593,	// (0x00046fb8) separator_vertical_pane

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy2_ParamLimits

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy2

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy2_ParamLimits

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy2

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy2_ParamLimits

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy2

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy2_ParamLimits

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy2

0x37da,	// (0x000421ff) common_borders_pane_cp4

0x859c,	// (0x00046fc1) separator_horizontal_pane_g1

0x85a5,	// (0x00046fca) separator_horizontal_pane_g2

0x85ae,	// (0x00046fd3) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0004e620) separator_horizontal_pane_g

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy3_ParamLimits

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy3

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy3_ParamLimits

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy3

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy3_ParamLimits

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy3

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy3_ParamLimits

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy3

0x37da,	// (0x000421ff) common_borders_pane_cp5

0x85b7,	// (0x00046fdc) separator_vertical_pane_g1

0x85c0,	// (0x00046fe5) separator_vertical_pane_g2

0x85c9,	// (0x00046fee) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0004e627) separator_vertical_pane_g

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy4_ParamLimits

0x850f,	// (0x00046f34) eswt_control_pane_g1_copy4

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy4_ParamLimits

0x851c,	// (0x00046f41) eswt_control_pane_g2_copy4

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy4_ParamLimits

0x8529,	// (0x00046f4e) eswt_control_pane_g3_copy4

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy4_ParamLimits

0x8536,	// (0x00046f5b) eswt_control_pane_g4_copy4

0xe44a,	// (0x0004ce6f) eswt_ctrl_combo_button_pane

0xe452,	// (0x0004ce77) eswt_ctrl_input_pane

0xe45a,	// (0x0004ce7f) popup_choice_list_window_cp70

0xe462,	// (0x0004ce87) eswt_ctrl_input_pane_t1

0x37da,	// (0x000421ff) input_focus_pane_cp70

0x7b89,	// (0x000465ae) bg_button_pane_cp70_ParamLimits

0x7b89,	// (0x000465ae) bg_button_pane_cp70

0xe470,	// (0x0004ce95) eswt_ctrl_combo_button_pane_g1

0x8600,	// (0x00047025) wait_bar_pane_cp70

0x5698,	// (0x000440bd) bg_popup_window_pane_cp70_ParamLimits

0x5698,	// (0x000440bd) bg_popup_window_pane_cp70

0x8608,	// (0x0004702d) popup_eswt_tasktip_window_t1

0x861e,	// (0x00047043) wait_bar_pane_cp71_ParamLimits

0x861e,	// (0x00047043) wait_bar_pane_cp71

0x862a,	// (0x0004704f) grid_eswt_app_pane

0x45cf,	// (0x00042ff4) scroll_pane_cp70

0xe478,	// (0x0004ce9d) cell_eswt_app_pane_ParamLimits

0xe478,	// (0x0004ce9d) cell_eswt_app_pane

0xe4a2,	// (0x0004cec7) cell_eswt_app_pane_g1_ParamLimits

0xe4a2,	// (0x0004cec7) cell_eswt_app_pane_g1

0xe4d1,	// (0x0004cef6) cell_eswt_app_pane_g2_ParamLimits

0xe4d1,	// (0x0004cef6) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0004e62e) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0004e62e) cell_eswt_app_pane_g

0xe4fa,	// (0x0004cf1f) cell_eswt_app_pane_t1_ParamLimits

0xe4fa,	// (0x0004cf1f) cell_eswt_app_pane_t1

0x86ed,	// (0x00047112) grid_highlight_pane_cp70_ParamLimits

0x86ed,	// (0x00047112) grid_highlight_pane_cp70

0x4ca5,	// (0x000436ca) set_content_pane_g1

0xd749,	// (0x0004c16e) status_small_volume_pane

0x2b74,	// (0x00041599) status_small_volume_pane_g1

0x2b7c,	// (0x000415a1) volume_small2_pane

0x2b85,	// (0x000415aa) volume_small2_pane_g1

0x2b8e,	// (0x000415b3) volume_small2_pane_g2

0x2b97,	// (0x000415bc) volume_small2_pane_g3

0x2ba0,	// (0x000415c5) volume_small2_pane_g4

0x2ba9,	// (0x000415ce) volume_small2_pane_g5

0x2bb2,	// (0x000415d7) volume_small2_pane_g6

0x2bbb,	// (0x000415e0) volume_small2_pane_g7

0x2bc4,	// (0x000415e9) volume_small2_pane_g8

0x2bcd,	// (0x000415f2) volume_small2_pane_g9

0x2bd6,	// (0x000415fb) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0004e633) volume_small2_pane_g

0x7f8a,	// (0x000469af) fep_vkb_top_text_pane_g1_ParamLimits

0xe3d7,	// (0x0004cdfc) fep_vkb_top_text_pane_t1_ParamLimits

0x8241,	// (0x00046c66) popup_preview_fixed_window_g3_ParamLimits

0x8241,	// (0x00046c66) popup_preview_fixed_window_g3

0xc96e,	// (0x0004b393) popup_toolbar_trans_pane

0xddc6,	// (0x0004c7eb) aid_height_set_list_ParamLimits

0x69ff,	// (0x00045424) aid_size_parent_ParamLimits

0x511a,	// (0x00043b3f) list_highlight_pane_cp2_ParamLimits

0x4ca5,	// (0x000436ca) set_content_pane_g1_ParamLimits

0xca5e,	// (0x0004b483) list_single_image_pane_ParamLimits

0xca5e,	// (0x0004b483) list_single_image_pane

0xe52c,	// (0x0004cf51) aid_size_cell_image_ParamLimits

0xe52c,	// (0x0004cf51) aid_size_cell_image

0xe539,	// (0x0004cf5e) grid_single_image_pane_ParamLimits

0xe539,	// (0x0004cf5e) grid_single_image_pane

0x58f9,	// (0x0004431e) list_single_image_pane_g1_ParamLimits

0x58f9,	// (0x0004431e) list_single_image_pane_g1

0x8712,	// (0x00047137) list_single_image_pane_g2_ParamLimits

0x8712,	// (0x00047137) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0004e648) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0004e648) list_single_image_pane_g

0x8726,	// (0x0004714b) list_single_image_pane_t1_ParamLimits

0x8726,	// (0x0004714b) list_single_image_pane_t1

0xe547,	// (0x0004cf6c) cell_image_list_pane_ParamLimits

0xe547,	// (0x0004cf6c) cell_image_list_pane

0xe55d,	// (0x0004cf82) cell_image_list_pane_g1

0xe566,	// (0x0004cf8b) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0004e64d) cell_image_list_pane_g

0x8762,	// (0x00047187) aid_size_cell_tb_trans_pane

0x4149,	// (0x00042b6e) bg_tb_trans_pane

0x8774,	// (0x00047199) grid_tb_trans_pane

0x5624,	// (0x00044049) bg_tb_trans_pane_g1

0x562c,	// (0x00044051) bg_tb_trans_pane_g2

0x5634,	// (0x00044059) bg_tb_trans_pane_g3

0x563c,	// (0x00044061) bg_tb_trans_pane_g4

0x5644,	// (0x00044069) bg_tb_trans_pane_g5

0x565c,	// (0x00044081) bg_tb_trans_pane_g6

0x5664,	// (0x00044089) bg_tb_trans_pane_g7

0x564c,	// (0x00044071) bg_tb_trans_pane_g8

0x5654,	// (0x00044079) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0004e652) bg_tb_trans_pane_g

0x8788,	// (0x000471ad) cell_toolbar_trans_pane_ParamLimits

0x8788,	// (0x000471ad) cell_toolbar_trans_pane

0x7bc4,	// (0x000465e9) cell_toolbar_trans_pane_g1

0xe19b,	// (0x0004cbc0) list_form2_midp_pane_t1

0xe1a9,	// (0x0004cbce) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0004e4fb) list_form2_midp_pane_t

0x77b8,	// (0x000461dd) scroll_pane_cp51_ParamLimits

0x7974,	// (0x00046399) form2_midp_wait_pane_g1

0x797d,	// (0x000463a2) form2_midp_wait_pane_g2

0x7986,	// (0x000463ab) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0004e510) form2_midp_wait_pane_g

0x38ce,	// (0x000422f3) list_highlight_pane_cp21_ParamLimits

0x79de,	// (0x00046403) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x79ed,	// (0x00046412) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6bb7,	// (0x000455dc) list_single_2graphic_im_pane_ParamLimits

0x6bb7,	// (0x000455dc) list_single_2graphic_im_pane

0xe56f,	// (0x0004cf94) list_single_2graphic_im_pane_g1_ParamLimits

0xe56f,	// (0x0004cf94) list_single_2graphic_im_pane_g1

0xe580,	// (0x0004cfa5) list_single_2graphic_im_pane_g2_ParamLimits

0xe580,	// (0x0004cfa5) list_single_2graphic_im_pane_g2

0xe58c,	// (0x0004cfb1) list_single_2graphic_im_pane_g3_ParamLimits

0xe58c,	// (0x0004cfb1) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0004e665) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0004e665) list_single_2graphic_im_pane_g

0xe5a0,	// (0x0004cfc5) list_single_2graphic_im_pane_t1_ParamLimits

0xe5a0,	// (0x0004cfc5) list_single_2graphic_im_pane_t1

0x824d,	// (0x00046c72) list_single_graphic_2heading_pane_fp_ParamLimits

0x824d,	// (0x00046c72) list_single_graphic_2heading_pane_fp

0x0f12,	// (0x0003f937) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0f12,	// (0x0003f937) list_single_graphic_2heading_pane_fp_g1

0x8262,	// (0x00046c87) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8262,	// (0x00046c87) list_single_graphic_2heading_pane_fp_g2

0x40e4,	// (0x00042b09) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x40e4,	// (0x00042b09) list_single_graphic_2heading_pane_fp_g3

0x4157,	// (0x00042b7c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4157,	// (0x00042b7c) list_single_graphic_2heading_pane_fp_g4

0x826e,	// (0x00046c93) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x826e,	// (0x00046c93) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004e593) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004e593) list_single_graphic_2heading_pane_fp_g

0x105b,	// (0x0003fa80) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x105b,	// (0x0003fa80) list_single_graphic_2heading_pane_fp_t1

0x0f4a,	// (0x0003f96f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0f4a,	// (0x0003f96f) list_single_graphic_2heading_pane_fp_t2

0x1071,	// (0x0003fa96) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x1071,	// (0x0003fa96) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0004e66e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0004e66e) list_single_graphic_2heading_pane_fp_t

0x7c50,	// (0x00046675) fep_hwr_write_pane_g5_ParamLimits

0x7c50,	// (0x00046675) fep_hwr_write_pane_g5

0x7c5c,	// (0x00046681) fep_hwr_write_pane_g6_ParamLimits

0x7c5c,	// (0x00046681) fep_hwr_write_pane_g6

0x84de,	// (0x00046f03) eswt_shell_pane_ParamLimits

0x5698,	// (0x000440bd) bg_popup_window_pane_cp18_ParamLimits

0x6947,	// (0x0004536c) heading_pane_cp70

0x8608,	// (0x0004702d) popup_eswt_tasktip_window_t1_ParamLimits

0xd7ef,	// (0x0004c214) aid_touch_tab_arrow_left

0xd805,	// (0x0004c22a) aid_touch_tab_arrow_right

0xd118,	// (0x0004bb3d) title_pane_g3_ParamLimits

0xd118,	// (0x0004bb3d) title_pane_g3

0x4108,	// (0x00042b2d) set_value_pane_g1

0xc96e,	// (0x0004b393) popup_toolbar_trans_pane_ParamLimits

0x8762,	// (0x00047187) aid_size_cell_tb_trans_pane_ParamLimits

0x4149,	// (0x00042b6e) bg_tb_trans_pane_ParamLimits

0x8774,	// (0x00047199) grid_tb_trans_pane_ParamLimits

0x3b57,	// (0x0004257c) cont_note_pane_ParamLimits

0x3b57,	// (0x0004257c) cont_note_pane

0x3eae,	// (0x000428d3) cont_snote2_single_text_pane_ParamLimits

0x3eae,	// (0x000428d3) cont_snote2_single_text_pane

0x3eae,	// (0x000428d3) cont_snote2_single_graphic_pane_ParamLimits

0x3eae,	// (0x000428d3) cont_snote2_single_graphic_pane

0x5ca5,	// (0x000446ca) cont_note_wait_pane_ParamLimits

0x5ca5,	// (0x000446ca) cont_note_wait_pane

0x5ca5,	// (0x000446ca) cont_note_image_pane_ParamLimits

0x5ca5,	// (0x000446ca) cont_note_image_pane

0x881c,	// (0x00047241) popup_note2_window_g1_ParamLimits

0x881c,	// (0x00047241) popup_note2_window_g1

0x884d,	// (0x00047272) popup_note2_window_t1_ParamLimits

0x884d,	// (0x00047272) popup_note2_window_t1

0x8892,	// (0x000472b7) popup_note2_window_t2_ParamLimits

0x8892,	// (0x000472b7) popup_note2_window_t2

0x88d7,	// (0x000472fc) popup_note2_window_t3_ParamLimits

0x88d7,	// (0x000472fc) popup_note2_window_t3

0x891c,	// (0x00047341) popup_note2_window_t4_ParamLimits

0x891c,	// (0x00047341) popup_note2_window_t4

0x3bdb,	// (0x00042600) popup_note2_window_t5_ParamLimits

0x3bdb,	// (0x00042600) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0004e67a) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0004e67a) popup_note2_window_t

0x894b,	// (0x00047370) popup_note2_image_window_g1_ParamLimits

0x894b,	// (0x00047370) popup_note2_image_window_g1

0x8957,	// (0x0004737c) popup_note2_image_window_g2_ParamLimits

0x8957,	// (0x0004737c) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0004e685) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0004e685) popup_note2_image_window_g

0x8969,	// (0x0004738e) popup_note2_image_window_t1_ParamLimits

0x8969,	// (0x0004738e) popup_note2_image_window_t1

0x8981,	// (0x000473a6) popup_note2_image_window_t2_ParamLimits

0x8981,	// (0x000473a6) popup_note2_image_window_t2

0x8999,	// (0x000473be) popup_note2_image_window_t3_ParamLimits

0x8999,	// (0x000473be) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0004e68a) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0004e68a) popup_note2_image_window_t

0x5cb3,	// (0x000446d8) popup_note2_wait_window_g1_ParamLimits

0x5cb3,	// (0x000446d8) popup_note2_wait_window_g1

0x89b5,	// (0x000473da) popup_note2_wait_window_g2_ParamLimits

0x89b5,	// (0x000473da) popup_note2_wait_window_g2

0x5ccb,	// (0x000446f0) popup_note2_wait_window_g3_ParamLimits

0x5ccb,	// (0x000446f0) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0004e691) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0004e691) popup_note2_wait_window_g

0x89c1,	// (0x000473e6) popup_note2_wait_window_t1_ParamLimits

0x89c1,	// (0x000473e6) popup_note2_wait_window_t1

0x89df,	// (0x00047404) popup_note2_wait_window_t2_ParamLimits

0x89df,	// (0x00047404) popup_note2_wait_window_t2

0x89fd,	// (0x00047422) popup_note2_wait_window_t3_ParamLimits

0x89fd,	// (0x00047422) popup_note2_wait_window_t3

0x8a0f,	// (0x00047434) popup_note2_wait_window_t4_ParamLimits

0x8a0f,	// (0x00047434) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0004e698) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0004e698) popup_note2_wait_window_t

0x8a21,	// (0x00047446) wait_bar2_pane_ParamLimits

0x8a21,	// (0x00047446) wait_bar2_pane

0x8a39,	// (0x0004745e) popup_snote2_single_text_window_g1_ParamLimits

0x8a39,	// (0x0004745e) popup_snote2_single_text_window_g1

0x8a61,	// (0x00047486) popup_snote2_single_text_window_t1_ParamLimits

0x8a61,	// (0x00047486) popup_snote2_single_text_window_t1

0x8aad,	// (0x000474d2) popup_snote2_single_text_window_t2_ParamLimits

0x8aad,	// (0x000474d2) popup_snote2_single_text_window_t2

0x8af9,	// (0x0004751e) popup_snote2_single_text_window_t3_ParamLimits

0x8af9,	// (0x0004751e) popup_snote2_single_text_window_t3

0x8b3a,	// (0x0004755f) popup_snote2_single_text_window_t4_ParamLimits

0x8b3a,	// (0x0004755f) popup_snote2_single_text_window_t4

0x8b70,	// (0x00047595) popup_snote2_single_text_window_t5_ParamLimits

0x8b70,	// (0x00047595) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0004e6a1) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0004e6a1) popup_snote2_single_text_window_t

0x8b9b,	// (0x000475c0) popup_snote2_single_graphic_window_g1_ParamLimits

0x8b9b,	// (0x000475c0) popup_snote2_single_graphic_window_g1

0x8bc3,	// (0x000475e8) popup_snote2_single_graphic_window_g2_ParamLimits

0x8bc3,	// (0x000475e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0004e6ac) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0004e6ac) popup_snote2_single_graphic_window_g

0x8beb,	// (0x00047610) popup_snote2_single_graphic_window_t1_ParamLimits

0x8beb,	// (0x00047610) popup_snote2_single_graphic_window_t1

0x8c37,	// (0x0004765c) popup_snote2_single_graphic_window_t2_ParamLimits

0x8c37,	// (0x0004765c) popup_snote2_single_graphic_window_t2

0x8af9,	// (0x0004751e) popup_snote2_single_graphic_window_t3_ParamLimits

0x8af9,	// (0x0004751e) popup_snote2_single_graphic_window_t3

0x8b3a,	// (0x0004755f) popup_snote2_single_graphic_window_t4_ParamLimits

0x8b3a,	// (0x0004755f) popup_snote2_single_graphic_window_t4

0x8b70,	// (0x00047595) popup_snote2_single_graphic_window_t5_ParamLimits

0x8b70,	// (0x00047595) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0004e6b1) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0004e6b1) popup_snote2_single_graphic_window_t

0x7679,	// (0x0004609e) clock_nsta_pane_cp2_t1

0x7679,	// (0x0004609e) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0004e4d1) clock_nsta_pane_cp2_t

0x0754,	// (0x0003f179) form_field_data_wide_pane_g1_ParamLimits

0x40e4,	// (0x00042b09) form_field_data_wide_pane_g2_ParamLimits

0x40e4,	// (0x00042b09) form_field_data_wide_pane_g2

0x4157,	// (0x00042b7c) form_field_data_wide_pane_g3_ParamLimits

0x4157,	// (0x00042b7c) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004e0a5) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004e0a5) form_field_data_wide_pane_g

0xe0de,	// (0x0004cb03) grid_touch_3_pane_ParamLimits

0xe0de,	// (0x0004cb03) grid_touch_3_pane

0xe5d1,	// (0x0004cff6) cell_touch_3_pane_ParamLimits

0xe5d1,	// (0x0004cff6) cell_touch_3_pane

0x7bc4,	// (0x000465e9) cell_touch_3_pane_g1

0x7bc4,	// (0x000465e9) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0004e556) cell_touch_3_pane_g

0x3c0d,	// (0x00042632) cont_query_data_pane

0x3c15,	// (0x0004263a) cont_query_data_pane_cp1

0x8cb1,	// (0x000476d6) button_value_adjust_pane_cp7

0x8cb9,	// (0x000476de) query_popup_pane_cp3

0x48ad,	// (0x000432d2) bg_popup_sub_pane_cp22_ParamLimits

0x18ff,	// (0x00040324) navi_navi_volume_pane_cp2

0x191a,	// (0x0004033f) popup_side_volume_key_window_g2

0x1929,	// (0x0004034e) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004e13b) popup_side_volume_key_window_g

0x1946,	// (0x0004036b) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004e142) popup_side_volume_key_window_t

0x4b64,	// (0x00043589) popup_side_volume_key_window_ParamLimits

0xc161,	// (0x0004ab86) list_double_graphic_pane_g4_ParamLimits

0xc161,	// (0x0004ab86) list_double_graphic_pane_g4

0xdf3f,	// (0x0004c964) list_single_2heading_msg_pane_ParamLimits

0xdf3f,	// (0x0004c964) list_single_2heading_msg_pane

0xcabc,	// (0x0004b4e1) list_single_2heading_msg_pane_g1_ParamLimits

0xcabc,	// (0x0004b4e1) list_single_2heading_msg_pane_g1

0xcac8,	// (0x0004b4ed) list_single_2heading_msg_pane_g2_ParamLimits

0xcac8,	// (0x0004b4ed) list_single_2heading_msg_pane_g2

0xcadb,	// (0x0004b500) list_single_2heading_msg_pane_g3_ParamLimits

0xcadb,	// (0x0004b500) list_single_2heading_msg_pane_g3

0xcae7,	// (0x0004b50c) list_single_2heading_msg_pane_g4_ParamLimits

0xcae7,	// (0x0004b50c) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0004e6bc) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0004e6bc) list_single_2heading_msg_pane_g

0xbe2b,	// (0x0004a850) list_single_2heading_msg_pane_t1_ParamLimits

0xbe2b,	// (0x0004a850) list_single_2heading_msg_pane_t1

0xbe53,	// (0x0004a878) list_single_2heading_msg_pane_t2_ParamLimits

0xbe53,	// (0x0004a878) list_single_2heading_msg_pane_t2

0xbebe,	// (0x0004a8e3) list_single_2heading_msg_pane_t3_ParamLimits

0xbebe,	// (0x0004a8e3) list_single_2heading_msg_pane_t3

0x1126,	// (0x0003fb4b) list_single_2heading_msg_pane_t4_ParamLimits

0x1126,	// (0x0003fb4b) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0004e6c5) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0004e6c5) list_single_2heading_msg_pane_t

0x3822,	// (0x00042247) title_pane_g4_ParamLimits

0x3822,	// (0x00042247) title_pane_g4

0x170e,	// (0x00040133) title_pane_stacon_g3_ParamLimits

0x170e,	// (0x00040133) title_pane_stacon_g3

0x87df,	// (0x00047204) list_single_2graphic_im_pane_g4_ParamLimits

0x87df,	// (0x00047204) list_single_2graphic_im_pane_g4

0x6704,	// (0x00045129) popup_side_volume_key_window_cp

0x6eca,	// (0x000458ef) main_idle_act2_pane_t1

0x22cd,	// (0x00040cf2) toolbar_button_pane_g10

0xd423,	// (0x0004be48) popup_toolbar_window_cp1

0x766a,	// (0x0004608f) clock_nsta_pane_cp_t1

0x766a,	// (0x0004608f) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0004e4cc) clock_nsta_pane_cp_t

0x18ff,	// (0x00040324) navi_navi_volume_pane_cp2_ParamLimits

0x190e,	// (0x00040333) popup_side_volume_key_window_g1_ParamLimits

0x191a,	// (0x0004033f) popup_side_volume_key_window_g2_ParamLimits

0x1929,	// (0x0004034e) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004e13b) popup_side_volume_key_window_g_ParamLimits

0x2800,	// (0x00041225) fep_hwr_aid_pane

0xe27d,	// (0x0004cca2) bg_fep_hwr_top_pane_g4_ParamLimits

0x7c20,	// (0x00046645) fep_hwr_top_pane_g1_ParamLimits

0x7c32,	// (0x00046657) fep_hwr_top_pane_g2_ParamLimits

0x28b9,	// (0x000412de) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0004e521) fep_hwr_top_pane_g_ParamLimits

0x28ce,	// (0x000412f3) fep_hwr_top_text_pane_ParamLimits

0x64c7,	// (0x00044eec) aid_touch_tab_arrow_arrow_2

0x64d0,	// (0x00044ef5) aid_touch_tab_arrow_left_2

0x2814,	// (0x00041239) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x284b,	// (0x00041270) fep_hwr_prediction_pane

0x7d92,	// (0x000467b7) fep_vkb_prediction_pane

0xe3b7,	// (0x0004cddc) fep_vkb_side_pane_g3_ParamLimits

0xe3b7,	// (0x0004cddc) fep_vkb_side_pane_g3

0x7e42,	// (0x00046867) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x82c2,	// (0x00046ce7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x82cf,	// (0x00046cf4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0004e5cb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8cde,	// (0x00047703) fep_hwr_prediction_pane_g1

0x2c03,	// (0x00041628) fep_hwr_prediction_pane_g2

0x2c0b,	// (0x00041630) fep_hwr_prediction_pane_g3

0x2c13,	// (0x00041638) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0004e6ce) fep_hwr_prediction_pane_g

0x8cde,	// (0x00047703) fep_vkb_prediction_pane_g1

0x8ce8,	// (0x0004770d) fep_vkb_prediction_pane_g2

0x8cf0,	// (0x00047715) fep_vkb_prediction_pane_g3

0x8cf8,	// (0x0004771d) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0004e6d7) fep_vkb_prediction_pane_g

0x25b5,	// (0x00040fda) slider_set_pane_g3

0x25c9,	// (0x00040fee) slider_set_pane_g4

0x25e1,	// (0x00041006) slider_set_pane_g5

0x25b5,	// (0x00040fda) slider_set_pane_g6

0x25f7,	// (0x0004101c) slider_set_pane_g7

0x6b64,	// (0x00045589) slider_form_pane_g3

0x6b6d,	// (0x00045592) slider_form_pane_g4

0x6b75,	// (0x0004559a) slider_form_pane_g5

0x6b64,	// (0x00045589) slider_form_pane_g6

0xdf11,	// (0x0004c936) slider_form_pane_g7

0x7174,	// (0x00045b99) slider_set_pane_vc_g3

0x717d,	// (0x00045ba2) slider_set_pane_vc_g4

0x7186,	// (0x00045bab) slider_set_pane_vc_g5

0x7174,	// (0x00045b99) slider_set_pane_vc_g6

0x718f,	// (0x00045bb4) slider_set_pane_vc_g7

0x734f,	// (0x00045d74) slider_form_pane_vc_g1

0x7358,	// (0x00045d7d) slider_form_pane_vc_g2

0x7361,	// (0x00045d86) slider_form_pane_vc_g3

0x734f,	// (0x00045d74) slider_form_pane_vc_g4

0x736a,	// (0x00045d8f) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0004e49e) slider_form_pane_vc_g

0x37da,	// (0x000421ff) main_idle_act3_pane

0x8d00,	// (0x00047725) ai3_links_pane

0xe619,	// (0x0004d03e) popup_ai3_data_window_ParamLimits

0xe619,	// (0x0004d03e) popup_ai3_data_window

0x37da,	// (0x000421ff) grid_ai3_links_pane

0xe633,	// (0x0004d058) cell_ai3_links_pane_ParamLimits

0xe633,	// (0x0004d058) cell_ai3_links_pane

0x8d3b,	// (0x00047760) bg_popup_sub_pane_cp11

0x8d48,	// (0x0004776d) cell_ai3_links_pane_g1

0x37da,	// (0x000421ff) bg_popup_sub_pane_cp12

0x8d6d,	// (0x00047792) heading_ai3_data_pane

0x8d75,	// (0x0004779a) list_ai3_gene_pane

0x8d81,	// (0x000477a6) popup_ai3_data_window_g1

0x8d89,	// (0x000477ae) heading_ai3_data_pane_g1

0x8d91,	// (0x000477b6) heading_ai3_data_pane_t1

0x8d9f,	// (0x000477c4) list_double_ai3_gene_pane_ParamLimits

0x8d9f,	// (0x000477c4) list_double_ai3_gene_pane

0x8dac,	// (0x000477d1) list_single_ai3_gene_pane_ParamLimits

0x8dac,	// (0x000477d1) list_single_ai3_gene_pane

0x7b89,	// (0x000465ae) list_highlight_pane_cp7_ParamLimits

0x7b89,	// (0x000465ae) list_highlight_pane_cp7

0x8db9,	// (0x000477de) list_single_a13_gene_pane_t1_ParamLimits

0x8db9,	// (0x000477de) list_single_a13_gene_pane_t1

0x8dd0,	// (0x000477f5) list_single_ai3_gene_pane_g1

0x8dd9,	// (0x000477fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0004e6e0) list_single_ai3_gene_pane_g

0x8de1,	// (0x00047806) list_double_ai3_gene_pane_g1_ParamLimits

0x8de1,	// (0x00047806) list_double_ai3_gene_pane_g1

0x8ded,	// (0x00047812) list_double_ai3_gene_pane_t1_ParamLimits

0x8ded,	// (0x00047812) list_double_ai3_gene_pane_t1

0x8e09,	// (0x0004782e) list_double_ai3_gene_pane_t2_ParamLimits

0x8e09,	// (0x0004782e) list_double_ai3_gene_pane_t2

0x8e1f,	// (0x00047844) list_double_ai3_gene_pane_t3_ParamLimits

0x8e1f,	// (0x00047844) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0004e6e5) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0004e6e5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1087,	// (0x0003faac) aid_size_min_col_2

0xe603,	// (0x0004d028) aid_size_min_msg_ParamLimits

0xe603,	// (0x0004d028) aid_size_min_msg

0xe3cb,	// (0x0004cdf0) fep_vkb_top_text_pane_g2_ParamLimits

0xe3cb,	// (0x0004cdf0) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0004e551) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0004e551) fep_vkb_top_text_pane_g

0x37da,	// (0x000421ff) main_hc_apps_shell_pane

0x8e3c,	// (0x00047861) grid_hc_apps_pane_ParamLimits

0x8e3c,	// (0x00047861) grid_hc_apps_pane

0x8e4b,	// (0x00047870) list_hc_apps_pane

0x8e53,	// (0x00047878) scroll_pane_cp37_ParamLimits

0x8e53,	// (0x00047878) scroll_pane_cp37

0xe64d,	// (0x0004d072) cell_hc_apps_pane_ParamLimits

0xe64d,	// (0x0004d072) cell_hc_apps_pane

0xe70b,	// (0x0004d130) cell_hc_apps_pane_g1_ParamLimits

0xe70b,	// (0x0004d130) cell_hc_apps_pane_g1

0x8f3e,	// (0x00047963) cell_hc_apps_pane_g2_ParamLimits

0x8f3e,	// (0x00047963) cell_hc_apps_pane_g2

0x8f5a,	// (0x0004797f) cell_hc_apps_pane_g3_ParamLimits

0x8f5a,	// (0x0004797f) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0004e6ec) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0004e6ec) cell_hc_apps_pane_g

0xe738,	// (0x0004d15d) cell_hc_apps_pane_t1_ParamLimits

0xe738,	// (0x0004d15d) cell_hc_apps_pane_t1

0x3b57,	// (0x0004257c) grid_highlight_pane_cp10_ParamLimits

0x3b57,	// (0x0004257c) grid_highlight_pane_cp10

0xe776,	// (0x0004d19b) list_single_hc_apps_pane_ParamLimits

0xe776,	// (0x0004d19b) list_single_hc_apps_pane

0xe7a3,	// (0x0004d1c8) list_single_hc_apps_pane_g1

0xcaff,	// (0x0004b524) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0004e6f3) list_single_hc_apps_pane_g

0xcb18,	// (0x0004b53d) list_single_hc_apps_pane_g2_copy1

0x114b,	// (0x0003fb70) list_single_hc_apps_pane_t1

0x38ce,	// (0x000422f3) bg_set_opt_pane_cp_ParamLimits

0x158a,	// (0x0003ffaf) setting_slider_pane_t1_ParamLimits

0x15a3,	// (0x0003ffc8) setting_slider_pane_t2_ParamLimits

0x15bd,	// (0x0003ffe2) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004df83) setting_slider_pane_t_ParamLimits

0x15d5,	// (0x0003fffa) slider_set_pane_ParamLimits

0x1bc4,	// (0x000405e9) control_pane_g5_ParamLimits

0x1bc4,	// (0x000405e9) control_pane_g5

0x69b3,	// (0x000453d8) slider_set_pane_g1_ParamLimits

0x25a9,	// (0x00040fce) slider_set_pane_g2_ParamLimits

0x25b5,	// (0x00040fda) slider_set_pane_g3_ParamLimits

0x25c9,	// (0x00040fee) slider_set_pane_g4_ParamLimits

0x25e1,	// (0x00041006) slider_set_pane_g5_ParamLimits

0x25b5,	// (0x00040fda) slider_set_pane_g6_ParamLimits

0x25f7,	// (0x0004101c) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004e389) slider_set_pane_g_ParamLimits

0x4c50,	// (0x00043675) navi_icon_text_pane_ParamLimits

0xd7b8,	// (0x0004c1dd) aid_fill_nsta_2_ParamLimits

0xd7ef,	// (0x0004c214) aid_touch_tab_arrow_left_ParamLimits

0xd805,	// (0x0004c22a) aid_touch_tab_arrow_right_ParamLimits

0xd8a0,	// (0x0004c2c5) clock_nsta_pane_ParamLimits

0x64a9,	// (0x00044ece) navi_icon_pane_g1_ParamLimits

0x64b5,	// (0x00044eda) navi_text_pane_t1_ParamLimits

0x7776,	// (0x0004619b) navi_icon_text_pane_g1_ParamLimits

0x7782,	// (0x000461a7) navi_icon_text_pane_t1_ParamLimits

0xe7a3,	// (0x0004d1c8) list_single_hc_apps_pane_g1_ParamLimits

0xcaff,	// (0x0004b524) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0004e6f3) list_single_hc_apps_pane_g_ParamLimits

0xcb18,	// (0x0004b53d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x114b,	// (0x0003fb70) list_single_hc_apps_pane_t1_ParamLimits

0xc062,	// (0x0004aa87) popup_toolbar2_fixed_window_ParamLimits

0xc062,	// (0x0004aa87) popup_toolbar2_fixed_window

0xc964,	// (0x0004b389) popup_toolbar2_float_window

0x37da,	// (0x000421ff) bg_popup_sub_pane_cp27

0x9031,	// (0x00047a56) grid_toolbar2_float_pane

0x37da,	// (0x000421ff) bg_popup_sub_pane_cp26

0x9031,	// (0x00047a56) grid_toolbar2_fixed_pane

0xe7bc,	// (0x0004d1e1) cell_toolbar2_fixed_pane_ParamLimits

0xe7bc,	// (0x0004d1e1) cell_toolbar2_fixed_pane

0xe7d6,	// (0x0004d1fb) cell_toolbar2_fixed_pane_g1

0x9052,	// (0x00047a77) toolbar2_fixed_button_pane

0x5624,	// (0x00044049) toolbar2_fixed_button_pane_g1

0x562c,	// (0x00044051) toolbar2_fixed_button_pane_g2

0x5634,	// (0x00044059) toolbar2_fixed_button_pane_g3

0x563c,	// (0x00044061) toolbar2_fixed_button_pane_g4

0x5644,	// (0x00044069) toolbar2_fixed_button_pane_g5

0x564c,	// (0x00044071) toolbar2_fixed_button_pane_g6

0x5654,	// (0x00044079) toolbar2_fixed_button_pane_g7

0x565c,	// (0x00044081) toolbar2_fixed_button_pane_g8

0x5664,	// (0x00044089) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004e28b) toolbar2_fixed_button_pane_g

0x905a,	// (0x00047a7f) cell_toolbar2_float_pane_ParamLimits

0x905a,	// (0x00047a7f) cell_toolbar2_float_pane

0x906b,	// (0x00047a90) cell_toolbar2_float_pane_g1

0x9052,	// (0x00047a77) toolbar2_fixed_button_pane_cp

0xe2a5,	// (0x0004ccca) fep_vkb_accented_list_pane_ParamLimits

0xe2a5,	// (0x0004ccca) fep_vkb_accented_list_pane

0x2a1c,	// (0x00041441) bg_popup_fep_shadow_pane_g9

0x4dd0,	// (0x000437f5) bg_popup_fep_shadow_pane_cp3

0x4291,	// (0x00042cb6) list_accented_list_pane

0x9074,	// (0x00047a99) list_single_accented_list_pane_ParamLimits

0x9074,	// (0x00047a99) list_single_accented_list_pane

0x4dd0,	// (0x000437f5) list_highlight_pane_cp10

0x9085,	// (0x00047aaa) list_single_accented_list_pane_t1

0xc88e,	// (0x0004b2b3) popup_slider_window_ParamLimits

0xc88e,	// (0x0004b2b3) popup_slider_window

0x8cc1,	// (0x000476e6) aid_indentation_list_msg

0xe8cf,	// (0x0004d2f4) bg_popup_window_pane_cp19

0x91a9,	// (0x00047bce) popup_slider_window_g1

0x91c5,	// (0x00047bea) popup_slider_window_g2

0x91e1,	// (0x00047c06) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0004e6f8) popup_slider_window_g

0x923d,	// (0x00047c62) popup_slider_window_t1

0x92b1,	// (0x00047cd6) small_volume_slider_vertical_pane

0x7bc4,	// (0x000465e9) small_volume_slider_vertical_pane_g1

0x7bc4,	// (0x000465e9) small_volume_slider_vertical_pane_g2

0x92cd,	// (0x00047cf2) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0004e70a) small_volume_slider_vertical_pane_g

0xbfd0,	// (0x0004a9f5) area_side_right_pane_ParamLimits

0xbfd0,	// (0x0004a9f5) area_side_right_pane

0xcb34,	// (0x0004b559) aid_size_side_button_ParamLimits

0xcb34,	// (0x0004b559) aid_size_side_button

0xcb4d,	// (0x0004b572) grid_sctrl_middle_pane_ParamLimits

0xcb4d,	// (0x0004b572) grid_sctrl_middle_pane

0x2c83,	// (0x000416a8) sctrl_sk_bottom_pane

0x2c94,	// (0x000416b9) sctrl_sk_top_pane

0x2ca6,	// (0x000416cb) aid_touch_sctrl_top

0x3b57,	// (0x0004257c) bg_sctrl_sk_pane_ParamLimits

0x3b57,	// (0x0004257c) bg_sctrl_sk_pane

0x2cb3,	// (0x000416d8) sctrl_sk_top_pane_g1

0x2cc0,	// (0x000416e5) sctrl_sk_top_pane_t1

0x2ca6,	// (0x000416cb) aid_touch_sctrl_bottom

0x3b57,	// (0x0004257c) bg_sctrl_sk_pane_cp_ParamLimits

0x3b57,	// (0x0004257c) bg_sctrl_sk_pane_cp

0x2cdb,	// (0x00041700) sctrl_sk_bottom_pane_g1

0x2cc0,	// (0x000416e5) sctrl_sk_bottom_pane_t1

0xcb67,	// (0x0004b58c) cell_sctrl_middle_pane_ParamLimits

0xcb67,	// (0x0004b58c) cell_sctrl_middle_pane

0xcb78,	// (0x0004b59d) aid_touch_sctrl_middle_ParamLimits

0xcb78,	// (0x0004b59d) aid_touch_sctrl_middle

0xcb85,	// (0x0004b5aa) bg_sctrl_middle_pane_ParamLimits

0xcb85,	// (0x0004b5aa) bg_sctrl_middle_pane

0x9355,	// (0x00047d7a) cell_sctrl_middle_pane_g1_ParamLimits

0x9355,	// (0x00047d7a) cell_sctrl_middle_pane_g1

0xcb93,	// (0x0004b5b8) cell_sctrl_middle_pane_g2_ParamLimits

0xcb93,	// (0x0004b5b8) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0004e716) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0004e716) cell_sctrl_middle_pane_g

0x5624,	// (0x00044049) bg_sctrl_middle_pane_g1

0x562c,	// (0x00044051) bg_sctrl_middle_pane_g2

0x5634,	// (0x00044059) bg_sctrl_middle_pane_g3

0x563c,	// (0x00044061) bg_sctrl_middle_pane_g4

0x5644,	// (0x00044069) bg_sctrl_middle_pane_g5

0x564c,	// (0x00044071) bg_sctrl_middle_pane_g6

0x5654,	// (0x00044079) bg_sctrl_middle_pane_g7

0x565c,	// (0x00044081) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0004e71b) bg_sctrl_middle_pane_g

0x5664,	// (0x00044089) bg_sctrl_middle_pane_g8_copy1

0x5624,	// (0x00044049) bg_sctrl_sk_pane_g1

0x562c,	// (0x00044051) bg_sctrl_sk_pane_g2

0x5634,	// (0x00044059) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004e28b) bg_sctrl_sk_pane_g

0x406c,	// (0x00042a91) aid_size_touch_scroll_bar

0x563c,	// (0x00044061) bg_sctrl_sk_pane_g4

0x5644,	// (0x00044069) bg_sctrl_sk_pane_g5

0x564c,	// (0x00044071) bg_sctrl_sk_pane_g6

0x5654,	// (0x00044079) bg_sctrl_sk_pane_g7

0x565c,	// (0x00044081) bg_sctrl_sk_pane_g8

0x5664,	// (0x00044089) bg_sctrl_sk_pane_g9

0x1d7e,	// (0x000407a3) popup_fep_china_hwr2_fs_candidate_window

0xc3a8,	// (0x0004adcd) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc3a8,	// (0x0004adcd) popup_fep_china_hwr2_fs_control_window

0x7e42,	// (0x00046867) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0004e711) sctrl_sk_top_pane_g

0xe987,	// (0x0004d3ac) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe987,	// (0x0004d3ac) aid_fep_china_hwr2_fs_cell

0xe99b,	// (0x0004d3c0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe99b,	// (0x0004d3c0) bg_popup_fep_shadow_pane_cp4

0xe9b2,	// (0x0004d3d7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe9b2,	// (0x0004d3d7) bg_popup_fep_shadow_pane_cp5

0xe9c4,	// (0x0004d3e9) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe9c4,	// (0x0004d3e9) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d8,	// (0x0004d3fd) popup_fep_china_hwr2_fs_control_funtion_grid

0x9329,	// (0x00047d4e) aid_fep_china_hwr2_fs_candi_cell

0x37da,	// (0x000421ff) bg_popup_fep_shadow_pane_cp6

0x9333,	// (0x00047d58) popup_fep_china_hwr2_fs_candidate_grid

0xe9e0,	// (0x0004d405) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9e0,	// (0x0004d405) cell_fep_china_hwr2_fs_funtion_grid

0x7bc4,	// (0x000465e9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9355,	// (0x00047d7a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9355,	// (0x00047d7a) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9363,	// (0x00047d88) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9363,	// (0x00047d88) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0004e72c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0004e72c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9f8,	// (0x0004d41d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9f8,	// (0x0004d41d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xea0d,	// (0x0004d432) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xea0d,	// (0x0004d432) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0004e731) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0004e731) cell_fep_china_hwr2_fs_funtion_grid_t

0x93aa,	// (0x00047dcf) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x93b2,	// (0x00047dd7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x93ba,	// (0x00047ddf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0004e736) popup_fep_china_hwr2_fs_control_bar_grid_g

0x93c2,	// (0x00047de7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x93c2,	// (0x00047de7) cell_fep_china_hwr2_fs_candidate_grid

0x93db,	// (0x00047e00) popup_fep_china_hwr2_fs_candidate_grid_g20

0x93e3,	// (0x00047e08) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7bc4,	// (0x000465e9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7bc4,	// (0x000465e9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0004e556) cell_fep_china_hwr2_fs_candidate_grid_g

0x93eb,	// (0x00047e10) cell_fep_china_hwr2_fs_candidate_grid_t1

0x521a,	// (0x00043c3f) clock_nsta_pane_cp_24_ParamLimits

0x521a,	// (0x00043c3f) clock_nsta_pane_cp_24

0x5298,	// (0x00043cbd) indicator_nsta_pane_cp_24_ParamLimits

0x5298,	// (0x00043cbd) indicator_nsta_pane_cp_24

0x6325,	// (0x00044d4a) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004e2f0) heading_pane_g

0x6d13,	// (0x00045738) grid_sct_catagory_button_pane

0x6d43,	// (0x00045768) scroll_pane_cp5_ParamLimits

0x77c4,	// (0x000461e9) button_value_adjust_pane_cp5_ParamLimits

0x77c4,	// (0x000461e9) button_value_adjust_pane_cp5

0x78a3,	// (0x000462c8) form2_midp_time_pane_ParamLimits

0x93f9,	// (0x00047e1e) cell_sct_catagory_button_pane_ParamLimits

0x93f9,	// (0x00047e1e) cell_sct_catagory_button_pane

0x7b89,	// (0x000465ae) bg_button_pane_cp01_ParamLimits

0x7b89,	// (0x000465ae) bg_button_pane_cp01

0x7bc4,	// (0x000465e9) cell_sct_catagory_button_pane_g1

0xc907,	// (0x0004b32c) popup_tb_extension_window

0xea29,	// (0x0004d44e) aid_size_cell_ext_ParamLimits

0xea29,	// (0x0004d44e) aid_size_cell_ext

0x3eae,	// (0x000428d3) bg_tb_trans_pane_cp1_ParamLimits

0x3eae,	// (0x000428d3) bg_tb_trans_pane_cp1

0xea4f,	// (0x0004d474) grid_tb_ext_pane_ParamLimits

0xea4f,	// (0x0004d474) grid_tb_ext_pane

0xea8a,	// (0x0004d4af) cell_tb_ext_pane_ParamLimits

0xea8a,	// (0x0004d4af) cell_tb_ext_pane

0xeab2,	// (0x0004d4d7) cell_tb_ext_pane_g1_ParamLimits

0xeab2,	// (0x0004d4d7) cell_tb_ext_pane_g1

0x948d,	// (0x00047eb2) cell_tb_ext_pane_t1

0x3b57,	// (0x0004257c) list_highlight_pane_cp11_ParamLimits

0x3b57,	// (0x0004257c) list_highlight_pane_cp11

0xc077,	// (0x0004aa9c) popup_uni_indicator_window_ParamLimits

0xc077,	// (0x0004aa9c) popup_uni_indicator_window

0x4149,	// (0x00042b6e) bg_popup_sub_pane_cp14

0x94a8,	// (0x00047ecd) list_uniindi_pane

0x94b4,	// (0x00047ed9) uniindi_top_pane

0x3b57,	// (0x0004257c) bg_uniindi_top_pane

0x94d3,	// (0x00047ef8) uniindi_top_pane_g1

0x94e9,	// (0x00047f0e) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0004e73d) uniindi_top_pane_g

0x9513,	// (0x00047f38) uniindi_top_pane_t1

0x953d,	// (0x00047f62) list_single_uniindi_pane_ParamLimits

0x953d,	// (0x00047f62) list_single_uniindi_pane

0x7bc4,	// (0x000465e9) bg_uniindi_top_pane_g1

0x9550,	// (0x00047f75) list_single_uniindi_pane_g1

0x9563,	// (0x00047f88) list_single_uniindi_pane_t1

0x37da,	// (0x000421ff) control_bg_pane

0x9588,	// (0x00047fad) bg_sctrl_sk_pane_cp1

0x9591,	// (0x00047fb6) bg_sctrl_sk_pane_cp2

0x959a,	// (0x00047fbf) control_bg_pane_g1

0x95a3,	// (0x00047fc8) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0004e746) control_bg_pane_g

0x761f,	// (0x00046044) cell_indicator_nsta_pane_g1_ParamLimits

0xe10b,	// (0x0004cb30) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0004e4ba) cell_indicator_nsta_pane_g_ParamLimits

0x0ee8,	// (0x0003f90d) form2_midp_time_pane_t1_ParamLimits

0x27f2,	// (0x00041217) main_idle_act4_pane_ParamLimits

0x27f2,	// (0x00041217) main_idle_act4_pane

0xc907,	// (0x0004b32c) popup_tb_extension_window_ParamLimits

0xea71,	// (0x0004d496) tb_ext_find_pane_ParamLimits

0xea71,	// (0x0004d496) tb_ext_find_pane

0x95ac,	// (0x00047fd1) ai_gene_pane_1_cp1

0x4f17,	// (0x0004393c) ai_gene_pane_2_cp1

0x95b4,	// (0x00047fd9) list_single_idle_plugin_calendar_pane

0x95bd,	// (0x00047fe2) list_single_idle_plugin_notification_pane

0x95c6,	// (0x00047feb) list_single_idle_plugin_player_pane

0xeacf,	// (0x0004d4f4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeacf,	// (0x0004d4f4) list_single_idle_plugin_shortcut_pane

0xeaf7,	// (0x0004d51c) main_idle_act4_pane_t1

0xeb0d,	// (0x0004d532) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0004e74b) main_idle_act4_pane_t

0xeb23,	// (0x0004d548) middle_sk_idle_act4_pane_ParamLimits

0xeb23,	// (0x0004d548) middle_sk_idle_act4_pane

0xeb3f,	// (0x0004d564) popup_clock_digital_analogue_window_cp2

0xeb67,	// (0x0004d58c) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb67,	// (0x0004d58c) shortcut_wheel_idle_act4_pane

0x7bc4,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g1

0x7bc4,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g2

0x7bc4,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g3

0x7bc4,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g4

0x7bc4,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g5

0x9659,	// (0x0004807e) shortcut_wheel_idle_act4_pane_g6

0x9661,	// (0x00048086) shortcut_wheel_idle_act4_pane_g7

0x9669,	// (0x0004808e) shortcut_wheel_idle_act4_pane_g8

0x9671,	// (0x00048096) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004e750) shortcut_wheel_idle_act4_pane_g

0xe27d,	// (0x0004cca2) middle_sk_idle_act4_pane_g1_ParamLimits

0xe27d,	// (0x0004cca2) middle_sk_idle_act4_pane_g1

0xebe4,	// (0x0004d609) middle_sk_idle_act4_pane_g2_ParamLimits

0xebe4,	// (0x0004d609) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0004e773) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0004e773) middle_sk_idle_act4_pane_g

0xebfc,	// (0x0004d621) middle_sk_idle_act4_pane_t1_ParamLimits

0xebfc,	// (0x0004d621) middle_sk_idle_act4_pane_t1

0xec2b,	// (0x0004d650) grid_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0004d650) grid_ai_shortcut_pane

0xec48,	// (0x0004d66d) list_highlight_pane_cp16_ParamLimits

0xec48,	// (0x0004d66d) list_highlight_pane_cp16

0xec55,	// (0x0004d67a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec55,	// (0x0004d67a) list_single_idle_plugin_shortcut_pane_g1

0xec61,	// (0x0004d686) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec61,	// (0x0004d686) list_single_idle_plugin_shortcut_pane_g2

0xec7d,	// (0x0004d6a2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec7d,	// (0x0004d6a2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0004e778) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0004e778) list_single_idle_plugin_shortcut_pane_g

0xec92,	// (0x0004d6b7) cell_ai_shortcut_pane_ParamLimits

0xec92,	// (0x0004d6b7) cell_ai_shortcut_pane

0xeca8,	// (0x0004d6cd) cell_ai_shortcut_pane_g1_ParamLimits

0xeca8,	// (0x0004d6cd) cell_ai_shortcut_pane_g1

0x95ac,	// (0x00047fd1) ai_gene_pane_1_cp2

0x97a1,	// (0x000481c6) ai_gene_pane_2_cp2

0x97a9,	// (0x000481ce) list_highlight_pane_cp15

0x97b2,	// (0x000481d7) list_single_idle_plugin_calendar_pane_g1

0x97a9,	// (0x000481ce) list_highlight_pane_cp17

0x97ba,	// (0x000481df) list_single_idle_plugin_calendar_pane_g1_copy1

0x97c2,	// (0x000481e7) list_single_idle_plugin_player_pane_g1

0x6f6c,	// (0x00045991) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004e77f) list_single_idle_plugin_player_pane_g

0x97ca,	// (0x000481ef) list_single_idle_plugin_player_pane_t1

0x97d8,	// (0x000481fd) list_single_idle_plugin_player_pane_t2

0x97e6,	// (0x0004820b) list_single_idle_plugin_player_pane_t3

0x97f4,	// (0x00048219) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0004e784) list_single_idle_plugin_player_pane_t

0x9802,	// (0x00048227) wait_bar_pane_cp15

0x980a,	// (0x0004822f) grid_ai_notification_pane

0x6f6c,	// (0x00045991) list_single_idle_plugin_notification_pane_g1

0xecca,	// (0x0004d6ef) cell_ai_notification_pane_ParamLimits

0xecca,	// (0x0004d6ef) cell_ai_notification_pane

0x9820,	// (0x00048245) cell_ai_notification_pane_g1

0x9828,	// (0x0004824d) cell_ai_notification_pane_t1

0xecd7,	// (0x0004d6fc) tb_ext_find_button_pane

0xecdf,	// (0x0004d704) tb_ext_find_pane_g1

0xece7,	// (0x0004d70c) tb_ext_find_pane_t1

0x47bd,	// (0x000431e2) tb_ext_find_button_pane_g1

0x9854,	// (0x00048279) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0004e78d) tb_ext_find_button_pane_g

0xeaf7,	// (0x0004d51c) main_idle_act4_pane_t1_ParamLimits

0xeb0d,	// (0x0004d532) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0004e74b) main_idle_act4_pane_t_ParamLimits

0xeb3f,	// (0x0004d564) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb57,	// (0x0004d57c) sat_plugin_idle_act4_pane_ParamLimits

0xeb57,	// (0x0004d57c) sat_plugin_idle_act4_pane

0xecf5,	// (0x0004d71a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xecf5,	// (0x0004d71a) sat_plugin_idle_act4_pane_t1

0xed0d,	// (0x0004d732) sat_plugin_idle_act4_pane_t2_ParamLimits

0xed0d,	// (0x0004d732) sat_plugin_idle_act4_pane_t2

0xed25,	// (0x0004d74a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xed25,	// (0x0004d74a) sat_plugin_idle_act4_pane_t3

0xed3d,	// (0x0004d762) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed3d,	// (0x0004d762) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0004e792) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0004e792) sat_plugin_idle_act4_pane_t

0x13ee,	// (0x0003fe13) popup_battery_window_ParamLimits

0x13ee,	// (0x0003fe13) popup_battery_window

0x3b57,	// (0x0004257c) bg_popup_sub_pane_cp25_ParamLimits

0x3b57,	// (0x0004257c) bg_popup_sub_pane_cp25

0x98a9,	// (0x000482ce) popup_battery_window_g1_ParamLimits

0x98a9,	// (0x000482ce) popup_battery_window_g1

0x98b5,	// (0x000482da) popup_battery_window_t1_ParamLimits

0x98b5,	// (0x000482da) popup_battery_window_t1

0x98c7,	// (0x000482ec) popup_battery_window_t2_ParamLimits

0x98c7,	// (0x000482ec) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0004e79b) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0004e79b) popup_battery_window_t

0xd61b,	// (0x0004c040) midp_canvas_pane_ParamLimits

0xd678,	// (0x0004c09d) midp_keypad_pane_ParamLimits

0xd678,	// (0x0004c09d) midp_keypad_pane

0x511a,	// (0x00043b3f) main_midp_pane_ParamLimits

0x7688,	// (0x000460ad) signal_pane_g2_cp_ParamLimits

0xed55,	// (0x0004d77a) aid_size_cell_midp_keypad_ParamLimits

0xed55,	// (0x0004d77a) aid_size_cell_midp_keypad

0xed73,	// (0x0004d798) midp_keyp_game_grid_pane_ParamLimits

0xed73,	// (0x0004d798) midp_keyp_game_grid_pane

0xed9a,	// (0x0004d7bf) midp_keyp_rocker_pane_ParamLimits

0xed9a,	// (0x0004d7bf) midp_keyp_rocker_pane

0xedeb,	// (0x0004d810) midp_keyp_sk_left_pane_ParamLimits

0xedeb,	// (0x0004d810) midp_keyp_sk_left_pane

0xee3f,	// (0x0004d864) midp_keyp_sk_right_pane_ParamLimits

0xee3f,	// (0x0004d864) midp_keyp_sk_right_pane

0x37da,	// (0x000421ff) bg_button_pane_cp03

0xee93,	// (0x0004d8b8) midp_keyp_sk_left_pane_g1

0x37da,	// (0x000421ff) bg_button_pane_cp04

0xee93,	// (0x0004d8b8) midp_keyp_sk_right_pane_g1

0x7bc4,	// (0x000465e9) midp_keyp_rocker_pane_g1

0xee9c,	// (0x0004d8c1) keyp_game_cell_pane_ParamLimits

0xee9c,	// (0x0004d8c1) keyp_game_cell_pane

0x37da,	// (0x000421ff) bg_button_pane_cp02

0xeec0,	// (0x0004d8e5) keyp_game_cell_pane_g1

0xc012,	// (0x0004aa37) popup_fep_vkb2_window_ParamLimits

0xc012,	// (0x0004aa37) popup_fep_vkb2_window

0xcb9f,	// (0x0004b5c4) aid_size_cell_vkb2_ParamLimits

0xcb9f,	// (0x0004b5c4) aid_size_cell_vkb2

0xcbd5,	// (0x0004b5fa) popup_fep_vkb2_window_g1_ParamLimits

0xcbd5,	// (0x0004b5fa) popup_fep_vkb2_window_g1

0xcc25,	// (0x0004b64a) vkb2_area_bottom_pane_ParamLimits

0xcc25,	// (0x0004b64a) vkb2_area_bottom_pane

0xcc79,	// (0x0004b69e) vkb2_area_keypad_pane_ParamLimits

0xcc79,	// (0x0004b69e) vkb2_area_keypad_pane

0xccc1,	// (0x0004b6e6) vkb2_area_top_pane_ParamLimits

0xccc1,	// (0x0004b6e6) vkb2_area_top_pane

0xcd47,	// (0x0004b76c) vkb2_top_entry_pane_ParamLimits

0xcd47,	// (0x0004b76c) vkb2_top_entry_pane

0xcd74,	// (0x0004b799) vkb2_top_grid_left_pane_ParamLimits

0xcd74,	// (0x0004b799) vkb2_top_grid_left_pane

0xcd94,	// (0x0004b7b9) vkb2_top_grid_right_pane_ParamLimits

0xcd94,	// (0x0004b7b9) vkb2_top_grid_right_pane

0x2f39,	// (0x0004195e) vkb2_cell_keypad_pane_ParamLimits

0x2f39,	// (0x0004195e) vkb2_cell_keypad_pane

0xcdda,	// (0x0004b7ff) vkb2_area_bottom_grid_pane_ParamLimits

0xcdda,	// (0x0004b7ff) vkb2_area_bottom_grid_pane

0xce04,	// (0x0004b829) vkb2_area_bottom_pane_g1_ParamLimits

0xce04,	// (0x0004b829) vkb2_area_bottom_pane_g1

0xce2a,	// (0x0004b84f) vkb2_area_bottom_pane_g2_ParamLimits

0xce2a,	// (0x0004b84f) vkb2_area_bottom_pane_g2

0xce5b,	// (0x0004b880) vkb2_area_bottom_pane_g3_ParamLimits

0xce5b,	// (0x0004b880) vkb2_area_bottom_pane_g3

0x0002,

0x006c,	// (0x0003ea91) vkb2_area_bottom_pane_g_ParamLimits

0x006c,	// (0x0003ea91) vkb2_area_bottom_pane_g

0x30e3,	// (0x00041b08) vkb2_top_cell_left_pane_ParamLimits

0x30e3,	// (0x00041b08) vkb2_top_cell_left_pane

0xeec9,	// (0x0004d8ee) vkb2_top_entry_pane_g1_ParamLimits

0xeec9,	// (0x0004d8ee) vkb2_top_entry_pane_g1

0xeed7,	// (0x0004d8fc) vkb2_top_entry_pane_t1_ParamLimits

0xeed7,	// (0x0004d8fc) vkb2_top_entry_pane_t1

0x9a78,	// (0x0004849d) vkb2_top_entry_pane_t2_ParamLimits

0x9a78,	// (0x0004849d) vkb2_top_entry_pane_t2

0x9aaa,	// (0x000484cf) vkb2_top_entry_pane_t3_ParamLimits

0x9aaa,	// (0x000484cf) vkb2_top_entry_pane_t3

0x0002,

0xfd7b,	// (0x0004e7a0) vkb2_top_entry_pane_t_ParamLimits

0xfd7b,	// (0x0004e7a0) vkb2_top_entry_pane_t

0xcec5,	// (0x0004b8ea) vkb2_top_grid_right_pane_g1_ParamLimits

0xcec5,	// (0x0004b8ea) vkb2_top_grid_right_pane_g1

0x3146,	// (0x00041b6b) vkb2_top_grid_right_pane_g2_ParamLimits

0x3146,	// (0x00041b6b) vkb2_top_grid_right_pane_g2

0x315e,	// (0x00041b83) vkb2_top_grid_right_pane_g3_ParamLimits

0x315e,	// (0x00041b83) vkb2_top_grid_right_pane_g3

0xcedb,	// (0x0004b900) vkb2_top_grid_right_pane_g4_ParamLimits

0xcedb,	// (0x0004b900) vkb2_top_grid_right_pane_g4

0x0003,

0xfd82,	// (0x0004e7a7) vkb2_top_grid_right_pane_g_ParamLimits

0xfd82,	// (0x0004e7a7) vkb2_top_grid_right_pane_g

0x318c,	// (0x00041bb1) vkb2_top_cell_left_pane_g1

0x31a3,	// (0x00041bc8) vkb2_cell_keypad_pane_g1_ParamLimits

0x31a3,	// (0x00041bc8) vkb2_cell_keypad_pane_g1

0x9ace,	// (0x000484f3) vkb2_cell_keypad_pane_t1_ParamLimits

0x9ace,	// (0x000484f3) vkb2_cell_keypad_pane_t1

0x31b1,	// (0x00041bd6) vkb2_cell_bottom_grid_pane_ParamLimits

0x31b1,	// (0x00041bd6) vkb2_cell_bottom_grid_pane

0x31ea,	// (0x00041c0f) vkb2_cell_bottom_grid_pane_g1

0xeb88,	// (0x0004d5ad) aid_call2_pane_cp02

0xeb90,	// (0x0004d5b5) aid_call_pane_cp02

0xeb98,	// (0x0004d5bd) clock_digital_number_pane_cp10

0xeba0,	// (0x0004d5c5) clock_digital_number_pane_cp11

0xeba8,	// (0x0004d5cd) clock_digital_number_pane_cp12

0xebb0,	// (0x0004d5d5) clock_digital_number_pane_cp13

0xebb8,	// (0x0004d5dd) clock_digital_separator_pane_cp10

0x47bd,	// (0x000431e2) popup_clock_digital_analogue_window_cp2_g1

0x47bd,	// (0x000431e2) popup_clock_digital_analogue_window_cp2_g2

0xebc0,	// (0x0004d5e5) popup_clock_digital_analogue_window_cp2_g3

0x47bd,	// (0x000431e2) popup_clock_digital_analogue_window_cp2_g4

0xebc0,	// (0x0004d5e5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004e763) popup_clock_digital_analogue_window_cp2_g

0xebc8,	// (0x0004d5ed) popup_clock_digital_analogue_window_cp2_t1

0xebd6,	// (0x0004d5fb) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0004e76e) popup_clock_digital_analogue_window_cp2_t

0x7bc4,	// (0x000465e9) clock_digital_number_pane_cp10_g1

0x7bc4,	// (0x000465e9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004e556) clock_digital_number_pane_cp10_g

0x7bc4,	// (0x000465e9) clock_digital_separator_pane_cp10_g1

0x7bc4,	// (0x000465e9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004e556) clock_digital_separator_pane_cp10_g

0x94f5,	// (0x00047f1a) uniindi_top_pane_g3

0x9506,	// (0x00047f2b) uniindi_top_pane_g4

0x2fc4,	// (0x000419e9) vkb2_row_keypad_pane_ParamLimits

0x2fc4,	// (0x000419e9) vkb2_row_keypad_pane

0x3206,	// (0x00041c2b) vkb2_cell_t_keypad_pane_ParamLimits

0x3206,	// (0x00041c2b) vkb2_cell_t_keypad_pane

0x3216,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3216,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp08

0x3229,	// (0x00041c4e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3229,	// (0x00041c4e) vkb2_cell_t_keypad_pane_cp09

0x323d,	// (0x00041c62) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x323d,	// (0x00041c62) vkb2_cell_t_keypad_pane_cp01

0x324e,	// (0x00041c73) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x324e,	// (0x00041c73) vkb2_cell_t_keypad_pane_cp02

0x325f,	// (0x00041c84) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x325f,	// (0x00041c84) vkb2_cell_t_keypad_pane_cp03

0x3270,	// (0x00041c95) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3270,	// (0x00041c95) vkb2_cell_t_keypad_pane_cp04

0x3281,	// (0x00041ca6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3281,	// (0x00041ca6) vkb2_cell_t_keypad_pane_cp05

0x3292,	// (0x00041cb7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3292,	// (0x00041cb7) vkb2_cell_t_keypad_pane_cp06

0x32a3,	// (0x00041cc8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x32a3,	// (0x00041cc8) vkb2_cell_t_keypad_pane_cp07

0x32b4,	// (0x00041cd9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x32b4,	// (0x00041cd9) vkb2_cell_t_keypad_pane_cp10

0x7e42,	// (0x00046867) vkb2_cell_t_keypad_pane_g1

0x9ae5,	// (0x0004850a) vkb2_cell_t_keypad_pane_t1

0x37da,	// (0x000421ff) popup_grid_graphic2_window

0xef10,	// (0x0004d935) aid_size_cell_graphic2_ParamLimits

0xef10,	// (0x0004d935) aid_size_cell_graphic2

0xef4e,	// (0x0004d973) bg_popup_window_pane_cp21_ParamLimits

0xef4e,	// (0x0004d973) bg_popup_window_pane_cp21

0xef5c,	// (0x0004d981) graphic2_pages_pane_ParamLimits

0xef5c,	// (0x0004d981) graphic2_pages_pane

0xefb2,	// (0x0004d9d7) grid_graphic2_control_pane_ParamLimits

0xefb2,	// (0x0004d9d7) grid_graphic2_control_pane

0xeffa,	// (0x0004da1f) grid_graphic2_pane_ParamLimits

0xeffa,	// (0x0004da1f) grid_graphic2_pane

0xf08e,	// (0x0004dab3) cell_graphic2_pane

0x37da,	// (0x000421ff) main_comp_mode_pane

0x8d75,	// (0x0004779a) list_ai3_gene_pane_ParamLimits

0xe8cf,	// (0x0004d2f4) bg_popup_window_pane_cp19_ParamLimits

0x914b,	// (0x00047b70) bg_touch_area_indi_pane_ParamLimits

0x914b,	// (0x00047b70) bg_touch_area_indi_pane

0x9161,	// (0x00047b86) bg_touch_area_indi_pane_cp01_ParamLimits

0x9161,	// (0x00047b86) bg_touch_area_indi_pane_cp01

0x9177,	// (0x00047b9c) bg_touch_area_indi_pane_cp02_ParamLimits

0x9177,	// (0x00047b9c) bg_touch_area_indi_pane_cp02

0x918f,	// (0x00047bb4) bg_touch_area_indi_pane_cp03_ParamLimits

0x918f,	// (0x00047bb4) bg_touch_area_indi_pane_cp03

0x91a9,	// (0x00047bce) popup_slider_window_g1_ParamLimits

0x91c5,	// (0x00047bea) popup_slider_window_g2_ParamLimits

0x91e1,	// (0x00047c06) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0004e6f8) popup_slider_window_g_ParamLimits

0x923d,	// (0x00047c62) popup_slider_window_t1_ParamLimits

0x92b1,	// (0x00047cd6) small_volume_slider_vertical_pane_ParamLimits

0xf08e,	// (0x0004dab3) cell_graphic2_pane_ParamLimits

0xf0e9,	// (0x0004db0e) bg_button_pane_cp10_ParamLimits

0xf0e9,	// (0x0004db0e) bg_button_pane_cp10

0xf0fc,	// (0x0004db21) bg_button_pane_cp11_ParamLimits

0xf0fc,	// (0x0004db21) bg_button_pane_cp11

0xf10f,	// (0x0004db34) graphic2_pages_pane_g1_ParamLimits

0xf10f,	// (0x0004db34) graphic2_pages_pane_g1

0xf12a,	// (0x0004db4f) graphic2_pages_pane_g2_ParamLimits

0xf12a,	// (0x0004db4f) graphic2_pages_pane_g2

0x0001,

0x0088,	// (0x0003eaad) graphic2_pages_pane_g_ParamLimits

0x0088,	// (0x0003eaad) graphic2_pages_pane_g

0xf142,	// (0x0004db67) graphic2_pages_pane_t1_ParamLimits

0xf142,	// (0x0004db67) graphic2_pages_pane_t1

0xf15a,	// (0x0004db7f) cell_graphic2_control_pane_ParamLimits

0xf15a,	// (0x0004db7f) cell_graphic2_control_pane

0xf18c,	// (0x0004dbb1) cell_graphic2_pane_g1_ParamLimits

0xf18c,	// (0x0004dbb1) cell_graphic2_pane_g1

0xe28b,	// (0x0004ccb0) cell_graphic2_pane_g2_ParamLimits

0xe28b,	// (0x0004ccb0) cell_graphic2_pane_g2

0xf054,	// (0x0004da79) cell_graphic2_pane_g3_ParamLimits

0xf054,	// (0x0004da79) cell_graphic2_pane_g3

0xe298,	// (0x0004ccbd) cell_graphic2_pane_g4_ParamLimits

0xe298,	// (0x0004ccbd) cell_graphic2_pane_g4

0xf199,	// (0x0004dbbe) cell_graphic2_pane_g5_ParamLimits

0xf199,	// (0x0004dbbe) cell_graphic2_pane_g5

0x0004,

0xfd8b,	// (0x0004e7b0) cell_graphic2_pane_g_ParamLimits

0xfd8b,	// (0x0004e7b0) cell_graphic2_pane_g

0xf1b9,	// (0x0004dbde) cell_graphic2_pane_t1_ParamLimits

0xf1b9,	// (0x0004dbde) cell_graphic2_pane_t1

0x6319,	// (0x00044d3e) grid_highlight_pane_cp11_ParamLimits

0x6319,	// (0x00044d3e) grid_highlight_pane_cp11

0x3b57,	// (0x0004257c) bg_button_pane_cp05

0xf202,	// (0x0004dc27) cell_graphic2_control_pane_g1

0x7bc4,	// (0x000465e9) bg_touch_area_indi_pane_g1

0x9dc1,	// (0x000487e6) aid_cmod_rocker_key_size

0x9dcb,	// (0x000487f0) aid_cmode_itu_key_size

0x9dd5,	// (0x000487fa) main_cmode_video_pane

0x9ddf,	// (0x00048804) main_comp_mode_itu_pane

0x9deb,	// (0x00048810) main_comp_mode_rocker_pane

0x9df7,	// (0x0004881c) cell_cmode_rocker_pane_ParamLimits

0x9df7,	// (0x0004881c) cell_cmode_rocker_pane

0x9e09,	// (0x0004882e) cell_cmode_itu_pane_ParamLimits

0x9e09,	// (0x0004882e) cell_cmode_itu_pane

0x4149,	// (0x00042b6e) bg_button_pane_cp06_ParamLimits

0x4149,	// (0x00042b6e) bg_button_pane_cp06

0x7e42,	// (0x00046867) cell_cmode_rocker_pane_g1_ParamLimits

0x7e42,	// (0x00046867) cell_cmode_rocker_pane_g1

0x9355,	// (0x00047d7a) cell_cmode_rocker_pane_g2_ParamLimits

0x9355,	// (0x00047d7a) cell_cmode_rocker_pane_g2

0x0001,

0xfd96,	// (0x0004e7bb) cell_cmode_rocker_pane_g_ParamLimits

0xfd96,	// (0x0004e7bb) cell_cmode_rocker_pane_g

0x37da,	// (0x000421ff) bg_button_pane_cp07

0x9e1e,	// (0x00048843) cell_cmode_itu_pane_g1

0x9e27,	// (0x0004884c) cell_cmode_itu_pane_t1

0x9e35,	// (0x0004885a) cell_cmode_itu_pane_t2

0x0001,

0xfd9b,	// (0x0004e7c0) cell_cmode_itu_pane_t

0x9578,	// (0x00047f9d) aid_touch_ctrl_left

0x9580,	// (0x00047fa5) aid_touch_ctrl_right

0x37da,	// (0x000421ff) compa_mode_pane

0xf226,	// (0x0004dc4b) aid_cmod_rocker_key_size_cp

0xf230,	// (0x0004dc55) aid_cmode_itu_key_size_cp

0x9e57,	// (0x0004887c) compa_mode_pane_g1

0x9e5f,	// (0x00048884) compa_mode_pane_g2

0x9e67,	// (0x0004888c) compa_mode_pane_g3

0x0002,

0xfda0,	// (0x0004e7c5) compa_mode_pane_g

0xf23a,	// (0x0004dc5f) main_comp_mode_itu_pane_cp

0xf242,	// (0x0004dc67) main_comp_mode_rocker_pane_cp

0xf24a,	// (0x0004dc6f) cell_cmode_itu_pane_cp_ParamLimits

0xf24a,	// (0x0004dc6f) cell_cmode_itu_pane_cp

0xf25f,	// (0x0004dc84) cell_cmode_rocker_pane_cp_ParamLimits

0xf25f,	// (0x0004dc84) cell_cmode_rocker_pane_cp

0x4149,	// (0x00042b6e) bg_button_pane_cp06_cp_ParamLimits

0x4149,	// (0x00042b6e) bg_button_pane_cp06_cp

0x7e42,	// (0x00046867) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7e42,	// (0x00046867) cell_cmode_rocker_pane_g1_cp

0x7bc4,	// (0x000465e9) cell_cmode_rocker_pane_g2_cp

0x37da,	// (0x000421ff) bg_button_pane_cp07_cp

0xf271,	// (0x0004dc96) cell_cmode_itu_pane_g1_cp

0xf27a,	// (0x0004dc9f) cell_cmode_itu_pane_t1_cp

0xf27a,	// (0x0004dc9f) cell_cmode_itu_pane_t2_cp

0xdf07,	// (0x0004c92c) settings_code_pane_cp2

0x38ce,	// (0x000422f3) bg_popup_window_pane_cp3_ParamLimits

0x3d31,	// (0x00042756) heading_pane_cp3_ParamLimits

0x3d3d,	// (0x00042762) listscroll_popup_graphic_pane_ParamLimits

0x2800,	// (0x00041225) fep_hwr_aid_pane_ParamLimits

0x2ca6,	// (0x000416cb) aid_touch_sctrl_top_ParamLimits

0x2cb3,	// (0x000416d8) sctrl_sk_top_pane_g1_ParamLimits

0x7e42,	// (0x00046867) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0004e711) sctrl_sk_top_pane_g_ParamLimits

0x2cc0,	// (0x000416e5) sctrl_sk_top_pane_t1_ParamLimits

0x2ca6,	// (0x000416cb) aid_touch_sctrl_bottom_ParamLimits

0x2cc0,	// (0x000416e5) sctrl_sk_bottom_pane_t1_ParamLimits

0x94c1,	// (0x00047ee6) aid_area_touch_clock

0xcd09,	// (0x0004b72e) aid_vkb2_area_top_pane_cell_ParamLimits

0xcd09,	// (0x0004b72e) aid_vkb2_area_top_pane_cell

0xcdb4,	// (0x0004b7d9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcdb4,	// (0x0004b7d9) aid_vkb2_area_bottom_pane_cell

0x9a30,	// (0x00048455) popup_char_count_window

0x9eb4,	// (0x000488d9) popup_char_count_window_g1

0x9ebd,	// (0x000488e2) popup_char_count_window_g2

0x9ec6,	// (0x000488eb) popup_char_count_window_g3

0x0002,

0xfda7,	// (0x0004e7cc) popup_char_count_window_g

0x9ecf,	// (0x000488f4) popup_char_count_window_t1

0x2d61,	// (0x00041786) popup_fep_char_preview_window_ParamLimits

0x2d61,	// (0x00041786) popup_fep_char_preview_window

0xcd29,	// (0x0004b74e) vkb2_top_candi_pane_ParamLimits

0xcd29,	// (0x0004b74e) vkb2_top_candi_pane

0xf288,	// (0x0004dcad) cell_vkb2_top_candi_pane_ParamLimits

0xf288,	// (0x0004dcad) cell_vkb2_top_candi_pane

0x5ca5,	// (0x000446ca) bg_popup_fep_char_preview_window_ParamLimits

0x5ca5,	// (0x000446ca) bg_popup_fep_char_preview_window

0x32c9,	// (0x00041cee) popup_fep_char_preview_window_t1_ParamLimits

0x32c9,	// (0x00041cee) popup_fep_char_preview_window_t1

0x9f2a,	// (0x0004894f) bg_popup_fep_char_preview_window_g1

0x9f32,	// (0x00048957) bg_popup_fep_char_preview_window_g2

0x9f3a,	// (0x0004895f) bg_popup_fep_char_preview_window_g3

0x9f42,	// (0x00048967) bg_popup_fep_char_preview_window_g4

0x9f4a,	// (0x0004896f) bg_popup_fep_char_preview_window_g5

0x3303,	// (0x00041d28) bg_popup_fep_char_preview_window_g6

0x9f52,	// (0x00048977) bg_popup_fep_char_preview_window_g7

0x9f5a,	// (0x0004897f) bg_popup_fep_char_preview_window_g8

0x9f62,	// (0x00048987) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdae,	// (0x0004e7d3) bg_popup_fep_char_preview_window_g

0x7e42,	// (0x00046867) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e42,	// (0x00046867) cell_vkb2_top_candi_pane_g1

0x818f,	// (0x00046bb4) cell_vkb2_top_candi_pane_g2_ParamLimits

0x818f,	// (0x00046bb4) cell_vkb2_top_candi_pane_g2

0x81b0,	// (0x00046bd5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x81b0,	// (0x00046bd5) cell_vkb2_top_candi_pane_g3

0x330b,	// (0x00041d30) cell_vkb2_top_candi_pane_g4_ParamLimits

0x330b,	// (0x00041d30) cell_vkb2_top_candi_pane_g4

0x9f6a,	// (0x0004898f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9f6a,	// (0x0004898f) cell_vkb2_top_candi_pane_g5

0x9355,	// (0x00047d7a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9355,	// (0x00047d7a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc1,	// (0x0004e7e6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc1,	// (0x0004e7e6) cell_vkb2_top_candi_pane_g

0x332c,	// (0x00041d51) cell_vkb2_top_candi_pane_t1

0x2595,	// (0x00040fba) aid_size_touch_slider_mark_ParamLimits

0x2595,	// (0x00040fba) aid_size_touch_slider_mark

0xef98,	// (0x0004d9bd) grid_graphic2_catg_pane_ParamLimits

0xef98,	// (0x0004d9bd) grid_graphic2_catg_pane

0xf061,	// (0x0004da86) popup_grid_graphic2_window_t1_ParamLimits

0xf061,	// (0x0004da86) popup_grid_graphic2_window_t1

0xf077,	// (0x0004da9c) popup_grid_graphic2_window_t2_ParamLimits

0xf077,	// (0x0004da9c) popup_grid_graphic2_window_t2

0x0001,

0x0083,	// (0x0003eaa8) popup_grid_graphic2_window_t_ParamLimits

0x0083,	// (0x0003eaa8) popup_grid_graphic2_window_t

0x3b57,	// (0x0004257c) bg_button_pane_cp05_ParamLimits

0xf202,	// (0x0004dc27) cell_graphic2_control_pane_g1_ParamLimits

0xf2ee,	// (0x0004dd13) cell_graphic2_catg_pane_ParamLimits

0xf2ee,	// (0x0004dd13) cell_graphic2_catg_pane

0x37da,	// (0x000421ff) bg_button_pane_cp12

0xf300,	// (0x0004dd25) cell_graphic2_catg_pane_g1

0x948d,	// (0x00047eb2) cell_tb_ext_pane_t1_ParamLimits

0x3103,	// (0x00041b28) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3103,	// (0x00041b28) vkb2_top_cell_right_narrow_pane

0x311b,	// (0x00041b40) vkb2_top_cell_right_wide_pane_ParamLimits

0x311b,	// (0x00041b40) vkb2_top_cell_right_wide_pane

0x27f2,	// (0x00041217) bg_vkb2_func_pane_ParamLimits

0x27f2,	// (0x00041217) bg_vkb2_func_pane

0x318c,	// (0x00041bb1) vkb2_top_cell_left_pane_g1_ParamLimits

0x27f2,	// (0x00041217) bg_vkb2_fuc_pane_cp03_ParamLimits

0x27f2,	// (0x00041217) bg_vkb2_fuc_pane_cp03

0x31ea,	// (0x00041c0f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x562c,	// (0x00044051) bg_vkb2_func_pane_g1

0x5634,	// (0x00044059) bg_vkb2_func_pane_g2

0x5644,	// (0x00044069) bg_vkb2_func_pane_g3

0x563c,	// (0x00044061) bg_vkb2_func_pane_g4

0x564c,	// (0x00044071) bg_vkb2_func_pane_g5

0x5654,	// (0x00044079) bg_vkb2_func_pane_g6

0x565c,	// (0x00044081) bg_vkb2_func_pane_g7

0x5664,	// (0x00044089) bg_vkb2_func_pane_g8

0x5624,	// (0x00044049) bg_vkb2_func_pane_g9

0x0008,

0xfdce,	// (0x0004e7f3) bg_vkb2_func_pane_g

0x27f2,	// (0x00041217) bg_vkb2_fuc_pane_cp01_ParamLimits

0x27f2,	// (0x00041217) bg_vkb2_fuc_pane_cp01

0x318c,	// (0x00041bb1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x318c,	// (0x00041bb1) vkb2_top_cell_right_wide_pane_g1

0x27f2,	// (0x00041217) bg_vkb2_fuc_pane_cp02_ParamLimits

0x27f2,	// (0x00041217) bg_vkb2_fuc_pane_cp02

0x31ea,	// (0x00041c0f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x31ea,	// (0x00041c0f) vkb2_top_cell_right_narrow_pane_g1

0xe80f,	// (0x0004d234) aid_touch_area_decrease_ParamLimits

0xe80f,	// (0x0004d234) aid_touch_area_decrease

0xe843,	// (0x0004d268) aid_touch_area_increase_ParamLimits

0xe843,	// (0x0004d268) aid_touch_area_increase

0xe86b,	// (0x0004d290) aid_touch_area_mute_ParamLimits

0xe86b,	// (0x0004d290) aid_touch_area_mute

0xe89b,	// (0x0004d2c0) aid_touch_area_slider_ParamLimits

0xe89b,	// (0x0004d2c0) aid_touch_area_slider

0xe8db,	// (0x0004d300) popup_slider_window_g4_ParamLimits

0xe8db,	// (0x0004d300) popup_slider_window_g4

0xe903,	// (0x0004d328) popup_slider_window_g5_ParamLimits

0xe903,	// (0x0004d328) popup_slider_window_g5

0xe937,	// (0x0004d35c) popup_slider_window_g6_ParamLimits

0xe937,	// (0x0004d35c) popup_slider_window_g6

0x926b,	// (0x00047c90) popup_slider_window_t2_ParamLimits

0x926b,	// (0x00047c90) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0004e705) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0004e705) popup_slider_window_t

0xe953,	// (0x0004d378) slider_pane_ParamLimits

0xe953,	// (0x0004d378) slider_pane

0x9fa6,	// (0x000489cb) slider_pane_g1_ParamLimits

0x9fa6,	// (0x000489cb) slider_pane_g1

0x9fba,	// (0x000489df) slider_pane_g2_ParamLimits

0x9fba,	// (0x000489df) slider_pane_g2

0x9fd0,	// (0x000489f5) slider_pane_g3_ParamLimits

0x9fd0,	// (0x000489f5) slider_pane_g3

0x0003,

0xfde1,	// (0x0004e806) slider_pane_g_ParamLimits

0xfde1,	// (0x0004e806) slider_pane_g

0xc94f,	// (0x0004b374) popup_tb_float_extension_window_ParamLimits

0xc94f,	// (0x0004b374) popup_tb_float_extension_window

0x9ffc,	// (0x00048a21) aid_size_cell_tb_float_ext

0x37da,	// (0x000421ff) bg_popup_sub_window_cp28

0xa008,	// (0x00048a2d) grid_tb_float_ext_pane

0xa012,	// (0x00048a37) cell_tb_float_ext_pane_ParamLimits

0xa012,	// (0x00048a37) cell_tb_float_ext_pane

0xa02c,	// (0x00048a51) cell_tb_float_ext_pane_g1

0xa035,	// (0x00048a5a) grid_highlight_pane_cp12

0xca9a,	// (0x0004b4bf) cell_last_hwr_side_pane_ParamLimits

0xca9a,	// (0x0004b4bf) cell_last_hwr_side_pane

0x7bc4,	// (0x000465e9) cell_last_hwr_side_pane_g1

0xa03e,	// (0x00048a63) cell_last_hwr_side_pane_g2

0x0001,

0xfdea,	// (0x0004e80f) cell_last_hwr_side_pane_g

0xce90,	// (0x0004b8b5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce90,	// (0x0004b8b5) vkb2_area_bottom_space_btn_pane

0x7e42,	// (0x00046867) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9ae5,	// (0x0004850a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x332c,	// (0x00041d51) cell_vkb2_top_candi_pane_t1_ParamLimits

0x334b,	// (0x00041d70) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x334b,	// (0x00041d70) vkb2_area_bottom_space_btn_pane_g1

0x3385,	// (0x00041daa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x3385,	// (0x00041daa) vkb2_area_bottom_space_btn_pane_g2

0x33bb,	// (0x00041de0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x33bb,	// (0x00041de0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdef,	// (0x0004e814) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdef,	// (0x0004e814) vkb2_area_bottom_space_btn_pane_g

0x28a7,	// (0x000412cc) cel_fep_hwr_func_pane_ParamLimits

0x28a7,	// (0x000412cc) cel_fep_hwr_func_pane

0xca6f,	// (0x0004b494) cell_hwr_side_button_pane_ParamLimits

0xca6f,	// (0x0004b494) cell_hwr_side_button_pane

0x94c1,	// (0x00047ee6) aid_area_touch_clock_ParamLimits

0x3b57,	// (0x0004257c) bg_uniindi_top_pane_ParamLimits

0x94d3,	// (0x00047ef8) uniindi_top_pane_g1_ParamLimits

0x94e9,	// (0x00047f0e) uniindi_top_pane_g2_ParamLimits

0x94f5,	// (0x00047f1a) uniindi_top_pane_g3_ParamLimits

0x9506,	// (0x00047f2b) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0004e73d) uniindi_top_pane_g_ParamLimits

0x9513,	// (0x00047f38) uniindi_top_pane_t1_ParamLimits

0x3b57,	// (0x0004257c) bg_vkb2_func_pane_cp01_ParamLimits

0x3b57,	// (0x0004257c) bg_vkb2_func_pane_cp01

0xa047,	// (0x00048a6c) cel_fep_hwr_func_pane_g1_ParamLimits

0xa047,	// (0x00048a6c) cel_fep_hwr_func_pane_g1

0x3b57,	// (0x0004257c) bg_vkb2_func_pane_cp02_ParamLimits

0x3b57,	// (0x0004257c) bg_vkb2_func_pane_cp02

0xa047,	// (0x00048a6c) cell_hwr_side_button_pane_g1_ParamLimits

0xa047,	// (0x00048a6c) cell_hwr_side_button_pane_g1

0x54a5,	// (0x00043eca) status_pane_g4_ParamLimits

0x54a5,	// (0x00043eca) status_pane_g4

0x54bf,	// (0x00043ee4) status_pane_t1

0x790c,	// (0x00046331) form2_midp_gauge_slider_cont_pane

0x7914,	// (0x00046339) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1d6,	// (0x0004cbfb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1e8,	// (0x0004cc0d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0004e509) form2_midp_gauge_slider_pane_t_ParamLimits

0x794a,	// (0x0004636f) form2_midp_slider_pane_ParamLimits

0x2d21,	// (0x00041746) aid_size_cell_func_vkb2_ParamLimits

0x2d21,	// (0x00041746) aid_size_cell_func_vkb2

0x9fe8,	// (0x00048a0d) slider_pane_g4_ParamLimits

0x9fe8,	// (0x00048a0d) slider_pane_g4

0xcef1,	// (0x0004b916) form2_midp_gauge_slider_pane_t2_cp01

0xceff,	// (0x0004b924) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xceff,	// (0x0004b924) form2_midp_gauge_slider_pane_t3_cp01

0x3430,	// (0x00041e55) form2_midp_slider_pane_cp01

0x37da,	// (0x000421ff) navi_smil_pane

0xa080,	// (0x00048aa5) navi_smil_pane_g1

0xa088,	// (0x00048aad) navi_smil_pane_t1

0xa055,	// (0x00048a7a) form2_midp_slider_pane_g1

0xa05e,	// (0x00048a83) form2_midp_slider_pane_g2

0xa066,	// (0x00048a8b) form2_midp_slider_pane_g3

0xa055,	// (0x00048a7a) form2_midp_slider_pane_g4

0xf309,	// (0x0004dd2e) form2_midp_slider_pane_g5

0x0004,

0xfdf8,	// (0x0004e81d) form2_midp_slider_pane_g

0x33f5,	// (0x00041e1a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x33f5,	// (0x00041e1a) vkb2_area_bottom_space_btn_pane_g4

0xd8eb,	// (0x0004c310) lc0_navi_pane_ParamLimits

0xd8eb,	// (0x0004c310) lc0_navi_pane

0xd955,	// (0x0004c37a) lc0_stat_indi_pane_ParamLimits

0xd955,	// (0x0004c37a) lc0_stat_indi_pane

0xd96a,	// (0x0004c38f) ls0_title_pane_ParamLimits

0xd96a,	// (0x0004c38f) ls0_title_pane

0x4149,	// (0x00042b6e) bg_popup_sub_pane_cp14_ParamLimits

0x94a8,	// (0x00047ecd) list_uniindi_pane_ParamLimits

0x94b4,	// (0x00047ed9) uniindi_top_pane_ParamLimits

0x9550,	// (0x00047f75) list_single_uniindi_pane_g1_ParamLimits

0x9563,	// (0x00047f88) list_single_uniindi_pane_t1_ParamLimits

0xcf1c,	// (0x0004b941) lc0_stat_clock_pane_ParamLimits

0xcf1c,	// (0x0004b941) lc0_stat_clock_pane

0xf314,	// (0x0004dd39) lc0_stat_indi_pane_g1_ParamLimits

0xf314,	// (0x0004dd39) lc0_stat_indi_pane_g1

0xf321,	// (0x0004dd46) lc0_stat_indi_pane_g2_ParamLimits

0xf321,	// (0x0004dd46) lc0_stat_indi_pane_g2

0x0001,

0x010a,	// (0x0003eb2f) lc0_stat_indi_pane_g_ParamLimits

0x010a,	// (0x0003eb2f) lc0_stat_indi_pane_g

0xcf29,	// (0x0004b94e) lc0_uni_indicator_pane_ParamLimits

0xcf29,	// (0x0004b94e) lc0_uni_indicator_pane

0xf32e,	// (0x0004dd53) ls0_title_pane_g1_ParamLimits

0xf32e,	// (0x0004dd53) ls0_title_pane_g1

0xf342,	// (0x0004dd67) ls0_title_pane_t1_ParamLimits

0xf342,	// (0x0004dd67) ls0_title_pane_t1

0xcf36,	// (0x0004b95b) lc0_uni_indicator_pane_g1_ParamLimits

0xcf36,	// (0x0004b95b) lc0_uni_indicator_pane_g1

0xa0fa,	// (0x00048b1f) lc0_stat_clock_pane_t1

0x37da,	// (0x000421ff) main_ai5_pane

0xa108,	// (0x00048b2d) ai5_sk_pane_ParamLimits

0xa108,	// (0x00048b2d) ai5_sk_pane

0xf370,	// (0x0004dd95) cell_ai5_widget_pane_ParamLimits

0xf370,	// (0x0004dd95) cell_ai5_widget_pane

0xa1c7,	// (0x00048bec) aid_size_cell_widget_grid

0xa1dd,	// (0x00048c02) bg_ai5_widget_pane_ParamLimits

0xa1dd,	// (0x00048c02) bg_ai5_widget_pane

0xa251,	// (0x00048c76) cell_ai5_widget_pane_g2

0xa261,	// (0x00048c86) cell_ai5_widget_pane_g3

0xa278,	// (0x00048c9d) cell_ai5_widget_pane_g4

0xa284,	// (0x00048ca9) cell_ai5_widget_pane_g5

0xa290,	// (0x00048cb5) cell_ai5_widget_pane_g6

0xa29c,	// (0x00048cc1) cell_ai5_widget_pane_g7

0xa2e4,	// (0x00048d09) cell_ai5_widget_pane_t1_ParamLimits

0xa2e4,	// (0x00048d09) cell_ai5_widget_pane_t1

0xa301,	// (0x00048d26) cell_ai5_widget_pane_t2_ParamLimits

0xa301,	// (0x00048d26) cell_ai5_widget_pane_t2

0xa319,	// (0x00048d3e) cell_ai5_widget_pane_t3_ParamLimits

0xa319,	// (0x00048d3e) cell_ai5_widget_pane_t3

0xa331,	// (0x00048d56) cell_ai5_widget_pane_t4_ParamLimits

0xa331,	// (0x00048d56) cell_ai5_widget_pane_t4

0xa34e,	// (0x00048d73) cell_ai5_widget_pane_t5_ParamLimits

0xa34e,	// (0x00048d73) cell_ai5_widget_pane_t5

0xa36d,	// (0x00048d92) cell_ai5_widget_pane_t6_ParamLimits

0xa36d,	// (0x00048d92) cell_ai5_widget_pane_t6

0xa37f,	// (0x00048da4) cell_ai5_widget_pane_t7_ParamLimits

0xa37f,	// (0x00048da4) cell_ai5_widget_pane_t7

0xa398,	// (0x00048dbd) cell_ai5_widget_pane_t8_ParamLimits

0xa398,	// (0x00048dbd) cell_ai5_widget_pane_t8

0x0009,

0xfe18,	// (0x0004e83d) cell_ai5_widget_pane_t_ParamLimits

0xfe18,	// (0x0004e83d) cell_ai5_widget_pane_t

0xa3ec,	// (0x00048e11) grid_ai5_widget_pane

0x4149,	// (0x00042b6e) highlight_cell_ai5_widget_pane_ParamLimits

0x4149,	// (0x00042b6e) highlight_cell_ai5_widget_pane

0xf3d6,	// (0x0004ddfb) ai5_sk_left_pane

0xf3e0,	// (0x0004de05) ai5_sk_middle_pane

0xf3ea,	// (0x0004de0f) ai5_sk_right_pane

0xa421,	// (0x00048e46) bg_ai5_widget_pane_g1_ParamLimits

0xa421,	// (0x00048e46) bg_ai5_widget_pane_g1

0xa42d,	// (0x00048e52) bg_ai5_widget_pane_g2_ParamLimits

0xa42d,	// (0x00048e52) bg_ai5_widget_pane_g2

0xa439,	// (0x00048e5e) bg_ai5_widget_pane_g3_ParamLimits

0xa439,	// (0x00048e5e) bg_ai5_widget_pane_g3

0xa445,	// (0x00048e6a) bg_ai5_widget_pane_g4_ParamLimits

0xa445,	// (0x00048e6a) bg_ai5_widget_pane_g4

0xa451,	// (0x00048e76) bg_ai5_widget_pane_g5_ParamLimits

0xa451,	// (0x00048e76) bg_ai5_widget_pane_g5

0xa45d,	// (0x00048e82) bg_ai5_widget_pane_g6_ParamLimits

0xa45d,	// (0x00048e82) bg_ai5_widget_pane_g6

0xa469,	// (0x00048e8e) bg_ai5_widget_pane_g7_ParamLimits

0xa469,	// (0x00048e8e) bg_ai5_widget_pane_g7

0xa475,	// (0x00048e9a) bg_ai5_widget_pane_g8_ParamLimits

0xa475,	// (0x00048e9a) bg_ai5_widget_pane_g8

0xa481,	// (0x00048ea6) bg_ai5_widget_pane_g9_ParamLimits

0xa481,	// (0x00048ea6) bg_ai5_widget_pane_g9

0x0008,

0xfe2d,	// (0x0004e852) bg_ai5_widget_pane_g_ParamLimits

0xfe2d,	// (0x0004e852) bg_ai5_widget_pane_g

0xa4b3,	// (0x00048ed8) cell_shortcut_ai5_widget_pane_ParamLimits

0xa4b3,	// (0x00048ed8) cell_shortcut_ai5_widget_pane

0x4dd0,	// (0x000437f5) bg_cell_shortcut_ai5_widget_pane

0xa4c4,	// (0x00048ee9) cell_grid_ai5_widget_pane_g1

0x4dd0,	// (0x000437f5) highlight_cell_shortcut_ai5_widget_pane

0x5634,	// (0x00044059) ai5_sk_left_pane_g1

0xa4cd,	// (0x00048ef2) ai5_sk_left_pane_g2

0xa4d5,	// (0x00048efa) ai5_sk_left_pane_g3

0xa4dd,	// (0x00048f02) ai5_sk_left_pane_g4

0x0003,

0xfe40,	// (0x0004e865) ai5_sk_left_pane_g

0xa4e5,	// (0x00048f0a) ai5_sk_left_pane_t1

0x562c,	// (0x00044051) ai5_sk_right_pane_g1

0xa4f3,	// (0x00048f18) ai5_sk_right_pane_g2

0xa4fb,	// (0x00048f20) ai5_sk_right_pane_g3

0xa503,	// (0x00048f28) ai5_sk_right_pane_g4

0x0003,

0xfe49,	// (0x0004e86e) ai5_sk_right_pane_g

0xa50b,	// (0x00048f30) ai5_sk_right_pane_t1

0x562c,	// (0x00044051) ai5_sk_middle_pane_g1

0x5634,	// (0x00044059) ai5_sk_middle_pane_g2

0x564c,	// (0x00044071) ai5_sk_middle_pane_g3

0xa4fb,	// (0x00048f20) ai5_sk_middle_pane_g4

0xa4d5,	// (0x00048efa) ai5_sk_middle_pane_g5

0xa519,	// (0x00048f3e) ai5_sk_middle_pane_g6

0xf3f4,	// (0x0004de19) ai5_sk_middle_pane_g7

0x0006,

0xfe52,	// (0x0004e877) ai5_sk_middle_pane_g

0xd7d7,	// (0x0004c1fc) aid_touch_area_size_lc0_ParamLimits

0xd7d7,	// (0x0004c1fc) aid_touch_area_size_lc0

0x2a32,	// (0x00041457) cell_hwr_candidate_pane_t1_ParamLimits

0x517c,	// (0x00043ba1) aid_touch_navi_pane

0xda63,	// (0x0004c488) status_dt_navi_pane_ParamLimits

0xda63,	// (0x0004c488) status_dt_navi_pane

0xda7b,	// (0x0004c4a0) status_dt_sta_pane_ParamLimits

0xda7b,	// (0x0004c4a0) status_dt_sta_pane

0xf3fc,	// (0x0004de21) dt_sta_controll_pane

0xf409,	// (0x0004de2e) dt_sta_indi_pane

0xf416,	// (0x0004de3b) dt_sta_title_pane

0x3b57,	// (0x0004257c) bg_dt_sta_indi_pane_ParamLimits

0x3b57,	// (0x0004257c) bg_dt_sta_indi_pane

0xf428,	// (0x0004de4d) dt_sta_battery_pane

0xf430,	// (0x0004de55) dt_sta_indi_pane_g1

0xa56b,	// (0x00048f90) dt_sta_indi_pane_g2

0xa574,	// (0x00048f99) dt_sta_indi_pane_g3

0x0002,

0xfe61,	// (0x0004e886) dt_sta_indi_pane_g

0xa57d,	// (0x00048fa2) dt_sta_signal_pane

0x4149,	// (0x00042b6e) bg_dt_sta_title_pane_ParamLimits

0x4149,	// (0x00042b6e) bg_dt_sta_title_pane

0xa586,	// (0x00048fab) dt_sta_title_pane_g1

0xa58e,	// (0x00048fb3) dt_sta_title_pane_t1_ParamLimits

0xa58e,	// (0x00048fb3) dt_sta_title_pane_t1

0x37da,	// (0x000421ff) bg_dt_sta_control_pane

0xf439,	// (0x0004de5e) dt_sta_controll_pane_g1

0xa5ac,	// (0x00048fd1) bg_dt_sta_title_pane_g1

0xa5b5,	// (0x00048fda) bg_dt_sta_title_pane_g2

0xa5be,	// (0x00048fe3) bg_dt_sta_title_pane_g3

0x0002,

0xfe68,	// (0x0004e88d) bg_dt_sta_title_pane_g

0x7bc4,	// (0x000465e9) bg_dt_sta_indi_pane_g1

0xa5c7,	// (0x00048fec) dt_sta_signal_pane_g1

0xa5cf,	// (0x00048ff4) dt_sta_signal_pane_g2

0x0001,

0xfe6f,	// (0x0004e894) dt_sta_signal_pane_g

0xa5d7,	// (0x00048ffc) dt_sta_battery_pane_g1

0xa5e0,	// (0x00049005) dt_sta_battery_pane_t1

0x7bc4,	// (0x000465e9) bg_dt_sta_control_pane_g1

0x48cf,	// (0x000432f4) fep_china_uni_eep_pane

0x48d7,	// (0x000432fc) fep_china_uni_entry_pane_ParamLimits

0x48e7,	// (0x0004330c) popup_fep_china_uni_window_g1_ParamLimits

0x48f7,	// (0x0004331c) popup_fep_china_uni_window_g2_ParamLimits

0x48f7,	// (0x0004331c) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004e147) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004e147) popup_fep_china_uni_window_g

0xa5ef,	// (0x00049014) fep_china_uni_eep_pane_g1

0xa5f7,	// (0x0004901c) fep_china_uni_eep_pane_t1

0xa077,	// (0x00048a9c) aid_touch_area_size_smil_player

0x52cc,	// (0x00043cf1) lc0_clock_pane

0x54b3,	// (0x00043ed8) status_pane_g5_ParamLimits

0x54b3,	// (0x00043ed8) status_pane_g5

0xc4d1,	// (0x0004aef6) popup_keymap_window

0x5471,	// (0x00043e96) status_icon_pane

0xa261,	// (0x00048c86) cell_ai5_widget_pane_g3_ParamLimits

0xa278,	// (0x00048c9d) cell_ai5_widget_pane_g4_ParamLimits

0xa284,	// (0x00048ca9) cell_ai5_widget_pane_g5_ParamLimits

0xa2a8,	// (0x00048ccd) cell_ai5_widget_pane_g8_ParamLimits

0xa2a8,	// (0x00048ccd) cell_ai5_widget_pane_g8

0xa2bc,	// (0x00048ce1) cell_ai5_widget_pane_g9_ParamLimits

0xa2bc,	// (0x00048ce1) cell_ai5_widget_pane_g9

0xa2d0,	// (0x00048cf5) cell_ai5_widget_pane_g10_ParamLimits

0xa2d0,	// (0x00048cf5) cell_ai5_widget_pane_g10

0xa606,	// (0x0004902b) status_icon_pane_g1

0x37da,	// (0x000421ff) bg_popup_sub_pane_cp13

0xa60e,	// (0x00049033) popup_keymap_window_t1

0xd765,	// (0x0004c18a) control_pane_g6_ParamLimits

0xd765,	// (0x0004c18a) control_pane_g6

0xd772,	// (0x0004c197) control_pane_g7_ParamLimits

0xd772,	// (0x0004c197) control_pane_g7

0xd77f,	// (0x0004c1a4) control_pane_g8_ParamLimits

0xd77f,	// (0x0004c1a4) control_pane_g8

0xf3fc,	// (0x0004de21) dt_sta_controll_pane_ParamLimits

0xf409,	// (0x0004de2e) dt_sta_indi_pane_ParamLimits

0xf416,	// (0x0004de3b) dt_sta_title_pane_ParamLimits

0x4075,	// (0x00042a9a) aid_size_touch_scroll_bar_cale

0x1402,	// (0x0003fe27) popup_discreet_window_ParamLimits

0x1402,	// (0x0003fe27) popup_discreet_window

0xc058,	// (0x0004aa7d) popup_sk_window

0x5ca5,	// (0x000446ca) bg_popup_sub_pane_cp28_ParamLimits

0x5ca5,	// (0x000446ca) bg_popup_sub_pane_cp28

0xa61c,	// (0x00049041) popup_discreet_window_g1_ParamLimits

0xa61c,	// (0x00049041) popup_discreet_window_g1

0xa63c,	// (0x00049061) popup_discreet_window_t1_ParamLimits

0xa63c,	// (0x00049061) popup_discreet_window_t1

0xa65a,	// (0x0004907f) popup_discreet_window_t2_ParamLimits

0xa65a,	// (0x0004907f) popup_discreet_window_t2

0x0002,

0xfe74,	// (0x0004e899) popup_discreet_window_t_ParamLimits

0xfe74,	// (0x0004e899) popup_discreet_window_t

0x3467,	// (0x00041e8c) popup_sk_window_g1

0x3471,	// (0x00041e96) popup_sk_window_g2

0x0001,

0xfe7b,	// (0x0004e8a0) popup_sk_window_g

0x3479,	// (0x00041e9e) popup_sk_window_t1

0x3487,	// (0x00041eac) popup_sk_window_t1_copy1

0xa251,	// (0x00048c76) cell_ai5_widget_pane_g2_ParamLimits

0xa3aa,	// (0x00048dcf) cell_ai5_widget_pane_t9_ParamLimits

0xa3aa,	// (0x00048dcf) cell_ai5_widget_pane_t9

0x37da,	// (0x000421ff) main_fep_fshwr2_pane

0xcf5d,	// (0x0004b982) aid_fshwr2_btn_pane

0xcf6e,	// (0x0004b993) aid_fshwr2_syb_pane

0xcf7f,	// (0x0004b9a4) aid_fshwr2_txt_pane

0xcf8b,	// (0x0004b9b0) fshwr2_func_candi_pane

0xcfaa,	// (0x0004b9cf) fshwr2_hwr_syb_pane

0xcfc5,	// (0x0004b9ea) fshwr2_icf_pane

0x37da,	// (0x000421ff) fshwr2_icf_bg_pane

0x3507,	// (0x00041f2c) fshwr2_icf_pane_t1_ParamLimits

0x3507,	// (0x00041f2c) fshwr2_icf_pane_t1

0x47bd,	// (0x000431e2) fshwr2_func_candi_pane_g1

0xf442,	// (0x0004de67) fshwr2_func_candi_row_pane_ParamLimits

0xf442,	// (0x0004de67) fshwr2_func_candi_row_pane

0xcff1,	// (0x0004ba16) cell_fshwr2_syb_pane_ParamLimits

0xcff1,	// (0x0004ba16) cell_fshwr2_syb_pane

0x7e42,	// (0x00046867) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7e42,	// (0x00046867) fshwr2_hwr_syb_pane_g1

0x37da,	// (0x000421ff) bg_popup_call_pane_cp01

0xd007,	// (0x0004ba2c) fshwr2_func_candi_cell_pane_ParamLimits

0xd007,	// (0x0004ba2c) fshwr2_func_candi_cell_pane

0xf465,	// (0x0004de8a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf465,	// (0x0004de8a) fshwr2_func_candi_cell_bg_pane

0xd052,	// (0x0004ba77) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd052,	// (0x0004ba77) fshwr2_func_candi_cell_pane_g1

0xd089,	// (0x0004baae) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd089,	// (0x0004baae) fshwr2_func_candi_cell_pane_t1

0x37da,	// (0x000421ff) bg_button_pane_cp08

0xa6c8,	// (0x000490ed) cell_fshwr2_syb_bg_pane

0xd0a4,	// (0x0004bac9) cell_fshwr2_syb_bg_pane_g1

0xd0ac,	// (0x0004bad1) cell_fshwr2_syb_bg_pane_t1

0x4149,	// (0x00042b6e) main_tmo_pane

0xdd39,	// (0x0004c75e) uni_indicator_pane_g1_ParamLimits

0xdd4f,	// (0x0004c774) uni_indicator_pane_g2_ParamLimits

0xdd65,	// (0x0004c78a) uni_indicator_pane_g3_ParamLimits

0x67f3,	// (0x00045218) uni_indicator_pane_g4_ParamLimits

0x67f3,	// (0x00045218) uni_indicator_pane_g4

0x6807,	// (0x0004522c) uni_indicator_pane_g5_ParamLimits

0x6807,	// (0x0004522c) uni_indicator_pane_g5

0x6807,	// (0x0004522c) uni_indicator_pane_g6_ParamLimits

0x6807,	// (0x0004522c) uni_indicator_pane_g6

0xf921,	// (0x0004e346) uni_indicator_pane_g_ParamLimits

0xe7eb,	// (0x0004d210) popup_tmo_note_window_ParamLimits

0xe7eb,	// (0x0004d210) popup_tmo_note_window

0x4149,	// (0x00042b6e) fshwr2_bg_pane

0xd07a,	// (0x0004ba9f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd07a,	// (0x0004ba9f) fshwr2_func_candi_cell_pane_g2

0x0001,

0x018c,	// (0x0003ebb1) fshwr2_func_candi_cell_pane_g_ParamLimits

0x018c,	// (0x0003ebb1) fshwr2_func_candi_cell_pane_g

0x7bc4,	// (0x000465e9) bg_popup_window_pane_cp01

0x35d2,	// (0x00041ff7) bg_popup_window_pane_g1_cp01

0xa6d0,	// (0x000490f5) bg_popup_window_pane_cp22_ParamLimits

0xa6d0,	// (0x000490f5) bg_popup_window_pane_cp22

0xa6de,	// (0x00049103) listscroll_tmo_link_pane_ParamLimits

0xa6de,	// (0x00049103) listscroll_tmo_link_pane

0xa71e,	// (0x00049143) popup_tmo_note_window_g1_ParamLimits

0xa71e,	// (0x00049143) popup_tmo_note_window_g1

0xa72b,	// (0x00049150) tmo_note_info_pane_ParamLimits

0xa72b,	// (0x00049150) tmo_note_info_pane

0xf471,	// (0x0004de96) list_tmo_note_info_pane_g1_ParamLimits

0xf471,	// (0x0004de96) list_tmo_note_info_pane_g1

0xa75c,	// (0x00049181) list_tmo_note_info_pane_g2_ParamLimits

0xa75c,	// (0x00049181) list_tmo_note_info_pane_g2

0x0001,

0xfe80,	// (0x0004e8a5) list_tmo_note_info_pane_g_ParamLimits

0xfe80,	// (0x0004e8a5) list_tmo_note_info_pane_g

0xa778,	// (0x0004919d) list_tmo_note_info_text_pane_ParamLimits

0xa778,	// (0x0004919d) list_tmo_note_info_text_pane

0xa7f9,	// (0x0004921e) list_tmo_link_pane

0xa806,	// (0x0004922b) scroll_pane_cp20

0xa813,	// (0x00049238) list_single_tmo_link_pane_ParamLimits

0xa813,	// (0x00049238) list_single_tmo_link_pane

0xa823,	// (0x00049248) list_single_tmo_link_pane_t1

0xa831,	// (0x00049256) list_tmo_note_info_text_pane_t1_ParamLimits

0xa831,	// (0x00049256) list_tmo_note_info_text_pane_t1

0xd42d,	// (0x0004be52) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd42d,	// (0x0004be52) aid_size_touch_scroll_bar_cp01

0xbc2a,	// (0x0004a64f) aid_size_touch_slider_marker

0xc048,	// (0x0004aa6d) popup_settings_window_ParamLimits

0xc048,	// (0x0004aa6d) popup_settings_window

0x094e,	// (0x0003f373) popup_candi_list_indi_window

0x517c,	// (0x00043ba1) aid_touch_navi_pane_ParamLimits

0x2c7a,	// (0x0004169f) rs_clock_indi_pane

0x2c83,	// (0x000416a8) sctrl_sk_bottom_pane_ParamLimits

0x2c94,	// (0x000416b9) sctrl_sk_top_pane_ParamLimits

0x2d7b,	// (0x000417a0) popup_fep_tooltip_window

0xa1c7,	// (0x00048bec) aid_size_cell_widget_grid_ParamLimits

0xa23c,	// (0x00048c61) cell_ai5_widget_pane_g1_ParamLimits

0xa23c,	// (0x00048c61) cell_ai5_widget_pane_g1

0xa290,	// (0x00048cb5) cell_ai5_widget_pane_g6_ParamLimits

0xa29c,	// (0x00048cc1) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe03,	// (0x0004e828) cell_ai5_widget_pane_g_ParamLimits

0xfe03,	// (0x0004e828) cell_ai5_widget_pane_g

0xa3ce,	// (0x00048df3) cell_ai5_widget_pane_t10_ParamLimits

0xa3ce,	// (0x00048df3) cell_ai5_widget_pane_t10

0xa3ec,	// (0x00048e11) grid_ai5_widget_pane_ParamLimits

0xa48d,	// (0x00048eb2) cell_contacts_ai5_widget_pane_ParamLimits

0xa48d,	// (0x00048eb2) cell_contacts_ai5_widget_pane

0xa66f,	// (0x00049094) popup_discreet_window_t3_ParamLimits

0xa66f,	// (0x00049094) popup_discreet_window_t3

0xcfdd,	// (0x0004ba02) popup_fshwr2_char_preview_window_ParamLimits

0xcfdd,	// (0x0004ba02) popup_fshwr2_char_preview_window

0xf488,	// (0x0004dead) tmo_note_info_pane_t1

0xf49d,	// (0x0004dec2) tmo_note_info_pane_t2

0xf4b4,	// (0x0004ded9) tmo_note_info_pane_t3

0xa7d5,	// (0x000491fa) tmo_note_info_pane_t4

0xa7e7,	// (0x0004920c) tmo_note_info_pane_t5

0x0004,

0xfe85,	// (0x0004e8aa) tmo_note_info_pane_t

0xa7f9,	// (0x0004921e) list_tmo_link_pane_ParamLimits

0xa806,	// (0x0004922b) scroll_pane_cp20_ParamLimits

0x37da,	// (0x000421ff) bg_popup_fep_char_preview_window_cp01

0xa84a,	// (0x0004926f) popup_fshwr2_char_preview_window_t1

0xa858,	// (0x0004927d) popup_candi_list_indi_window_g1

0xa861,	// (0x00049286) bg_cell_contacts_ai5_widget_pane

0xa86d,	// (0x00049292) cell_contacts_ai5_widget_pane_g1

0x82a4,	// (0x00046cc9) cell_contacts_ai5_widget_pane_g2

0xa882,	// (0x000492a7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe90,	// (0x0004e8b5) cell_contacts_ai5_widget_pane_g

0xa88e,	// (0x000492b3) cell_contacts_ai5_widget_pane_t1

0x4149,	// (0x00042b6e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa905,	// (0x0004932a) settings_container_pane

0x4dd0,	// (0x000437f5) listscroll_set_pane_copy1

0x72d8,	// (0x00045cfd) scroll_pane_cp121_copy1

0x5a56,	// (0x0004447b) set_content_pane_copy1

0xa911,	// (0x00049336) aid_height_set_list_copy1_ParamLimits

0xa911,	// (0x00049336) aid_height_set_list_copy1

0x69ff,	// (0x00045424) aid_size_parent_copy1_ParamLimits

0x69ff,	// (0x00045424) aid_size_parent_copy1

0xa91d,	// (0x00049342) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa91d,	// (0x00049342) button_value_adjust_pane_cp6_copy1

0x511a,	// (0x00043b3f) list_highlight_pane_cp2_copy1_ParamLimits

0x511a,	// (0x00043b3f) list_highlight_pane_cp2_copy1

0xa931,	// (0x00049356) list_set_pane_copy1_ParamLimits

0xa931,	// (0x00049356) list_set_pane_copy1

0xa8a0,	// (0x000492c5) main_pane_set_t1_copy1_ParamLimits

0xa8a0,	// (0x000492c5) main_pane_set_t1_copy1

0xa8da,	// (0x000492ff) main_pane_set_t2_copy1_ParamLimits

0xa8da,	// (0x000492ff) main_pane_set_t2_copy1

0xa9de,	// (0x00049403) main_pane_set_t3_copy1

0xa9ec,	// (0x00049411) main_pane_set_t4_copy1

0xa8f9,	// (0x0004931e) set_content_pane_g1_copy1_ParamLimits

0xa8f9,	// (0x0004931e) set_content_pane_g1_copy1

0xa9fa,	// (0x0004941f) setting_code_pane_copy1

0xaa02,	// (0x00049427) setting_slider_graphic_pane_copy1

0xaa02,	// (0x00049427) setting_slider_pane_copy1

0xaa02,	// (0x00049427) setting_text_pane_copy1

0xaa02,	// (0x00049427) setting_volume_pane_copy1

0xa9fa,	// (0x0004941f) settings_code_pane_cp2_copy1

0xaa0a,	// (0x0004942f) settings_code_pane_cp_copy1_ParamLimits

0xaa0a,	// (0x0004942f) settings_code_pane_cp_copy1

0x35db,	// (0x00042000) volume_set_pane_copy1

0xaa1e,	// (0x00049443) volume_set_pane_g10_copy1

0xaa26,	// (0x0004944b) volume_set_pane_g1_copy1

0xaa2e,	// (0x00049453) volume_set_pane_g2_copy1

0xaa36,	// (0x0004945b) volume_set_pane_g3_copy1

0xaa3e,	// (0x00049463) volume_set_pane_g4_copy1

0xaa46,	// (0x0004946b) volume_set_pane_g5_copy1

0xaa4e,	// (0x00049473) volume_set_pane_g6_copy1

0xaa56,	// (0x0004947b) volume_set_pane_g7_copy1

0xaa5e,	// (0x00049483) volume_set_pane_g8_copy1

0xaa66,	// (0x0004948b) volume_set_pane_g9_copy1

0x38ce,	// (0x000422f3) bg_set_opt_pane_cp_copy1_ParamLimits

0x38ce,	// (0x000422f3) bg_set_opt_pane_cp_copy1

0x35e3,	// (0x00042008) setting_slider_pane_t1_copy1_ParamLimits

0x35e3,	// (0x00042008) setting_slider_pane_t1_copy1

0x3601,	// (0x00042026) setting_slider_pane_t2_copy1_ParamLimits

0x3601,	// (0x00042026) setting_slider_pane_t2_copy1

0x361b,	// (0x00042040) setting_slider_pane_t3_copy1_ParamLimits

0x361b,	// (0x00042040) setting_slider_pane_t3_copy1

0x3633,	// (0x00042058) slider_set_pane_copy1_ParamLimits

0x3633,	// (0x00042058) slider_set_pane_copy1

0x4195,	// (0x00042bba) set_opt_bg_pane_g1_copy2

0x419d,	// (0x00042bc2) set_opt_bg_pane_g2_copy2

0xaa6e,	// (0x00049493) set_opt_bg_pane_g3_copy2

0x41ad,	// (0x00042bd2) set_opt_bg_pane_g4_copy2

0x41b5,	// (0x00042bda) set_opt_bg_pane_g5_copy2

0x41bd,	// (0x00042be2) set_opt_bg_pane_g6_copy2

0xaa78,	// (0x0004949d) set_opt_bg_pane_g7_copy2

0xaa80,	// (0x000494a5) set_opt_bg_pane_g8_copy2

0xaa8a,	// (0x000494af) set_opt_bg_pane_g9_copy2

0x3649,	// (0x0004206e) aid_size_touch_slider_mark_copy1_ParamLimits

0x3649,	// (0x0004206e) aid_size_touch_slider_mark_copy1

0xaa94,	// (0x000494b9) slider_set_pane_g1_copy1

0x365d,	// (0x00042082) slider_set_pane_g2_copy1

0x25b5,	// (0x00040fda) slider_set_pane_g3_copy1_ParamLimits

0x25b5,	// (0x00040fda) slider_set_pane_g3_copy1

0x25c9,	// (0x00040fee) slider_set_pane_g4_copy1_ParamLimits

0x25c9,	// (0x00040fee) slider_set_pane_g4_copy1

0x25e1,	// (0x00041006) slider_set_pane_g5_copy1_ParamLimits

0x25e1,	// (0x00041006) slider_set_pane_g5_copy1

0x25b5,	// (0x00040fda) slider_set_pane_g6_copy1_ParamLimits

0x25b5,	// (0x00040fda) slider_set_pane_g6_copy1

0x3665,	// (0x0004208a) slider_set_pane_g7_copy1_ParamLimits

0x3665,	// (0x0004208a) slider_set_pane_g7_copy1

0x37ee,	// (0x00042213) bg_set_opt_pane_cp2_copy1

0xaa9d,	// (0x000494c2) setting_slider_graphic_pane_g1_copy1

0xaaa6,	// (0x000494cb) setting_slider_graphic_pane_t1_copy1

0xaab6,	// (0x000494db) setting_slider_graphic_pane_t2_copy1

0xaac6,	// (0x000494eb) slider_set_pane_cp_copy1

0xaad6,	// (0x000494fb) input_focus_pane_cp1_copy1

0xaadf,	// (0x00049504) list_set_text_pane_copy1

0xaae7,	// (0x0004950c) setting_text_pane_g1_copy1

0x1179,	// (0x0003fb9e) set_text_pane_t1_copy1

0xaad6,	// (0x000494fb) input_focus_pane_cp2_copy1

0xaae7,	// (0x0004950c) setting_code_pane_g1_copy1

0xaaf0,	// (0x00049515) setting_code_pane_t1_copy1

0xaafe,	// (0x00049523) list_set_graphic_pane_copy1

0x37ee,	// (0x00042213) bg_set_opt_pane_cp4_copy1

0x4acb,	// (0x000434f0) list_set_graphic_pane_g1_copy1_ParamLimits

0x4acb,	// (0x000434f0) list_set_graphic_pane_g1_copy1

0xab11,	// (0x00049536) list_set_graphic_pane_g2_copy1

0x4ae3,	// (0x00043508) list_set_graphic_pane_t1_copy1_ParamLimits

0x4ae3,	// (0x00043508) list_set_graphic_pane_t1_copy1

0x7bc4,	// (0x000465e9) rs_clock_indi_pane_g1

0xab19,	// (0x0004953e) rs_clock_indi_pane_t1

0xab27,	// (0x0004954c) rs_indi_pane

0xab2f,	// (0x00049554) rs_indi_pane_g1

0xab38,	// (0x0004955d) rs_indi_pane_g2

0xab41,	// (0x00049566) rs_indi_pane_g3

0x0002,

0xfe97,	// (0x0004e8bc) rs_indi_pane_g

0x4dd0,	// (0x000437f5) bg_popup_preview_window_pane_cp03

0xab4a,	// (0x0004956f) popup_fep_tooltip_window_t1

0x8840,	// (0x00047265) popup_note2_window_g2_ParamLimits

0x8840,	// (0x00047265) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0004e675) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0004e675) popup_note2_window_g

0x8d3b,	// (0x00047760) bg_popup_sub_pane_cp11_ParamLimits

0x8d48,	// (0x0004776d) cell_ai3_links_pane_g1_ParamLimits

0x8d5f,	// (0x00047784) cell_ai3_links_pane_t1

0x1179,	// (0x0003fb9e) set_text_pane_t1_copy1_ParamLimits

0x4ce1,	// (0x00043706) cell_graphic_popup_pane_cp2_ParamLimits

0x4ce1,	// (0x00043706) cell_graphic_popup_pane_cp2

0xab58,	// (0x0004957d) cell_graphic_popup_pane_g1_cp2

0x3e88,	// (0x000428ad) cell_graphic_popup_pane_g2_cp2

0xab60,	// (0x00049585) cell_graphic_popup_pane_g3_cp2

0xab68,	// (0x0004958d) cell_graphic_popup_pane_t2_cp2

0x3e99,	// (0x000428be) grid_highlight_pane_cp3_cp2

0x44da,	// (0x00042eff) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4149,	// (0x00042b6e) main_tmo_pane_ParamLimits

0xe7df,	// (0x0004d204) popup_tmo_big_image_note_window

0xa22b,	// (0x00048c50) cell_ai5_widget_list_pane

0xa233,	// (0x00048c58) cell_ai5_widget_lrg_icon_pane

0xf488,	// (0x0004dead) tmo_note_info_pane_t1_ParamLimits

0xf49d,	// (0x0004dec2) tmo_note_info_pane_t2_ParamLimits

0xf4b4,	// (0x0004ded9) tmo_note_info_pane_t3_ParamLimits

0xa7d5,	// (0x000491fa) tmo_note_info_pane_t4_ParamLimits

0xa7e7,	// (0x0004920c) tmo_note_info_pane_t5_ParamLimits

0xfe85,	// (0x0004e8aa) tmo_note_info_pane_t_ParamLimits

0xa905,	// (0x0004932a) settings_container_pane_ParamLimits

0xaace,	// (0x000494f3) indicator_popup_pane_cp5

0xaace,	// (0x000494f3) indicator_popup_pane_cp6

0xaafe,	// (0x00049523) list_set_graphic_pane_copy1_ParamLimits

0x37da,	// (0x000421ff) bg_popup_window_pane_cp23

0xab76,	// (0x0004959b) popup_tmo_big_image_note_window_g1

0xab80,	// (0x000495a5) popup_tmo_big_image_note_window_t1

0xab90,	// (0x000495b5) popup_tmo_big_image_note_window_t2

0xaba0,	// (0x000495c5) popup_tmo_big_image_note_window_t3

0x0002,

0xfe9e,	// (0x0004e8c3) popup_tmo_big_image_note_window_t

0x7bc4,	// (0x000465e9) cell_ai5_widget_lrg_icon_pane_g1

0xabb0,	// (0x000495d5) cell_ai5_widget_lrg_icon_pane_t1

0xabbe,	// (0x000495e3) cell_ai5_widget_list_row_pane_ParamLimits

0xabbe,	// (0x000495e3) cell_ai5_widget_list_row_pane

0xabd5,	// (0x000495fa) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xabd5,	// (0x000495fa) cell_ai5_widget_list_row_pane_g1

0xabe2,	// (0x00049607) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xabe2,	// (0x00049607) cell_ai5_widget_list_row_pane_t1

0xac13,	// (0x00049638) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xac13,	// (0x00049638) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea5,	// (0x0004e8ca) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea5,	// (0x0004e8ca) cell_ai5_widget_list_row_pane_t

0x37da,	// (0x000421ff) main_fep_vtchi_ss_pane

0xac57,	// (0x0004967c) popup_fep_char_pre_window

0xac5f,	// (0x00049684) popup_fep_ituss_window

0xf4c9,	// (0x0004deee) popup_fep_vkbss_window

0xf4d6,	// (0x0004defb) grid_vkbss_keypad_pane_ParamLimits

0xf4d6,	// (0x0004defb) grid_vkbss_keypad_pane

0xacb6,	// (0x000496db) ituss_keypad_pane

0x3687,	// (0x000420ac) aid_vkbss_key_offset_ParamLimits

0x3687,	// (0x000420ac) aid_vkbss_key_offset

0xd0bb,	// (0x0004bae0) cell_vkbss_key_pane_ParamLimits

0xd0bb,	// (0x0004bae0) cell_vkbss_key_pane

0xacc5,	// (0x000496ea) bg_cell_vkbss_key_g1_ParamLimits

0xacc5,	// (0x000496ea) bg_cell_vkbss_key_g1

0xf4e6,	// (0x0004df0b) cell_vkbss_key_3p_pane_ParamLimits

0xf4e6,	// (0x0004df0b) cell_vkbss_key_3p_pane

0xf500,	// (0x0004df25) cell_vkbss_key_g1_ParamLimits

0xf500,	// (0x0004df25) cell_vkbss_key_g1

0xf51a,	// (0x0004df3f) cell_vkbss_key_t1_ParamLimits

0xf51a,	// (0x0004df3f) cell_vkbss_key_t1

0x36a9,	// (0x000420ce) cell_ituss_key_pane_ParamLimits

0x36a9,	// (0x000420ce) cell_ituss_key_pane

0xad24,	// (0x00049749) bg_cell_ituss_key_g1_ParamLimits

0xad24,	// (0x00049749) bg_cell_ituss_key_g1

0xad30,	// (0x00049755) cell_ituss_key_pane_g1_ParamLimits

0xad30,	// (0x00049755) cell_ituss_key_pane_g1

0x36ba,	// (0x000420df) cell_ituss_key_pane_g2_ParamLimits

0x36ba,	// (0x000420df) cell_ituss_key_pane_g2

0x0002,

0xfeac,	// (0x0004e8d1) cell_ituss_key_pane_g_ParamLimits

0xfeac,	// (0x0004e8d1) cell_ituss_key_pane_g

0x36e6,	// (0x0004210b) cell_ituss_key_t1_ParamLimits

0x36e6,	// (0x0004210b) cell_ituss_key_t1

0x3720,	// (0x00042145) cell_ituss_key_t2_ParamLimits

0x3720,	// (0x00042145) cell_ituss_key_t2

0x3751,	// (0x00042176) cell_ituss_key_t3_ParamLimits

0x3751,	// (0x00042176) cell_ituss_key_t3

0x3720,	// (0x00042145) cell_ituss_key_t4_ParamLimits

0x3720,	// (0x00042145) cell_ituss_key_t4

0x0004,

0xfeb3,	// (0x0004e8d8) cell_ituss_key_t_ParamLimits

0xfeb3,	// (0x0004e8d8) cell_ituss_key_t

0xad5c,	// (0x00049781) cell_vkbss_key_3p_pane_g1

0xad64,	// (0x00049789) cell_vkbss_key_3p_pane_g2

0xad6c,	// (0x00049791) cell_vkbss_key_3p_pane_g3

0x0002,

0xfebe,	// (0x0004e8e3) cell_vkbss_key_3p_pane_g

0x37da,	// (0x000421ff) bg_popup_fep_char_preview_window_cp02

0x3794,	// (0x000421b9) popup_fep_char_pre_window_t1

0xf3cc,	// (0x0004ddf1) main_ai5_sk_pane

0xa861,	// (0x00049286) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa86d,	// (0x00049292) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x82a4,	// (0x00046cc9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa882,	// (0x000492a7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe90,	// (0x0004e8b5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa88e,	// (0x000492b3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4149,	// (0x00042b6e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0004df6a) main_ai5_sk_pane_g1

0x5ade,	// (0x00044503) popup_query_code_window_g1

0xac75,	// (0x0004969a) popup_fep_vkb_icf_pane

0xac94,	// (0x000496b9) popup_fep_vtchi_icf_pane

0xad7d,	// (0x000497a2) bg_icf_pane

0xad89,	// (0x000497ae) list_vkb_icf_pane

0xad98,	// (0x000497bd) bg_icf_pane_cp01

0xadab,	// (0x000497d0) vtchi_icf_list_pane

0xadbb,	// (0x000497e0) list_vkb_icf_pane_t1_ParamLimits

0xadbb,	// (0x000497e0) list_vkb_icf_pane_t1

0xadd1,	// (0x000497f6) vtchi_icf_list_pane_t1_ParamLimits

0xadd1,	// (0x000497f6) vtchi_icf_list_pane_t1

0xac5f,	// (0x00049684) popup_fep_ituss_window_ParamLimits

0xac94,	// (0x000496b9) popup_fep_vtchi_icf_pane_ParamLimits

0xacb6,	// (0x000496db) ituss_keypad_pane_ParamLimits

0x367b,	// (0x000420a0) ituss_sks_pane

0xad7d,	// (0x000497a2) bg_icf_pane_ParamLimits

0xac3b,	// (0x00049660) icf_edit_indi_pane_ParamLimits

0xac3b,	// (0x00049660) icf_edit_indi_pane

0xad89,	// (0x000497ae) list_vkb_icf_pane_ParamLimits

0xad98,	// (0x000497bd) bg_icf_pane_cp01_ParamLimits

0xac4a,	// (0x0004966f) icf_edit_indi_pane_cp01_ParamLimits

0xac4a,	// (0x0004966f) icf_edit_indi_pane_cp01

0xadb3,	// (0x000497d8) vtchi_query_pane

0x7e42,	// (0x00046867) icf_edit_indi_pane_g1_ParamLimits

0x7e42,	// (0x00046867) icf_edit_indi_pane_g1

0xae42,	// (0x00049867) icf_edit_indi_pane_g2_ParamLimits

0xae42,	// (0x00049867) icf_edit_indi_pane_g2

0x0001,

0xfed6,	// (0x0004e8fb) icf_edit_indi_pane_g_ParamLimits

0xfed6,	// (0x0004e8fb) icf_edit_indi_pane_g

0xae51,	// (0x00049876) icf_edit_indi_pane_t1

0xadeb,	// (0x00049810) bg_input_focus_pane_cp042

0x406c,	// (0x00042a91) vtchi_button_pane

0xadf4,	// (0x00049819) vtchi_query_pane_t1

0xae02,	// (0x00049827) vtchi_query_pane_t2

0xae10,	// (0x00049835) vtchi_query_pane_t3

0x0002,

0xfec5,	// (0x0004e8ea) vtchi_query_pane_t

0x37da,	// (0x000421ff) bg_button_pane_cp13

0xae1e,	// (0x00049843) vtchi_button_pane_g1

0x37a3,	// (0x000421c8) ituss_sks_pane_g1

0x37ae,	// (0x000421d3) ituss_sks_pane_g2

0x0001,

0xfecc,	// (0x0004e8f1) ituss_sks_pane_g

0xae26,	// (0x0004984b) ituss_sks_pane_t1

0xae34,	// (0x00049859) ituss_sks_pane_t2

0x0001,

0xfed1,	// (0x0004e8f6) ituss_sks_pane_t

0x7652,	// (0x00046077) indicator_nsta_pane_cp_g1

0x765a,	// (0x0004607f) indicator_nsta_pane_cp_g2

0x7662,	// (0x00046087) indicator_nsta_pane_cp_g3

0x7652,	// (0x00046077) indicator_nsta_pane_cp_g4

0x765a,	// (0x0004607f) indicator_nsta_pane_cp_g5

0x7662,	// (0x00046087) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0004e4bf) indicator_nsta_pane_cp_g

0xf1e4,	// (0x0004dc09) cell_graphic2_pane_t2_ParamLimits

0xf1e4,	// (0x0004dc09) cell_graphic2_pane_t2

0x0001,

0x0098,	// (0x0003eabd) cell_graphic2_pane_t_ParamLimits

0x0098,	// (0x0003eabd) cell_graphic2_pane_t

0xf218,	// (0x0004dc3d) cell_graphic2_control_pane_t1

0xd5d8,	// (0x0004bffd) signal_pane_g3_ParamLimits

0xd5d8,	// (0x0004bffd) signal_pane_g3

0xd5ec,	// (0x0004c011) signal_pane_g4_ParamLimits

0xd5ec,	// (0x0004c011) signal_pane_g4

0xac25,	// (0x0004964a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xac25,	// (0x0004964a) cell_ai5_widget_list_row_pane_t3

0xad4a,	// (0x0004976f) cell_ituss_key_pane_t1_ParamLimits

0xad4a,	// (0x0004976f) cell_ituss_key_pane_t1

0x5729,	// (0x0004414e) form_field_data_wide_pane_vc_t2_ParamLimits

0x5729,	// (0x0004414e) form_field_data_wide_pane_vc_t2

0x573d,	// (0x00044162) form_field_data_wide_pane_vc_t3_ParamLimits

0x573d,	// (0x00044162) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004e22e) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004e22e) form_field_data_wide_pane_vc_t

0x731a,	// (0x00045d3f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x731a,	// (0x00045d3f) form_field_slider_wide_pane_vc_t3

0x73f8,	// (0x00045e1d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x73f8,	// (0x00045e1d) form_field_popup_wide_pane_vc_t2

0x740f,	// (0x00045e34) form_field_popup_wide_pane_vc_t3_ParamLimits

0x740f,	// (0x00045e34) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0004e4ae) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004e4ae) form_field_popup_wide_pane_vc_t

0xcf5d,	// (0x0004b982) aid_fshwr2_btn_pane_ParamLimits

0xcf6e,	// (0x0004b993) aid_fshwr2_syb_pane_ParamLimits

0xcf7f,	// (0x0004b9a4) aid_fshwr2_txt_pane_ParamLimits

0x4149,	// (0x00042b6e) fshwr2_bg_pane_ParamLimits

0xcf8b,	// (0x0004b9b0) fshwr2_func_candi_pane_ParamLimits

0xcfaa,	// (0x0004b9cf) fshwr2_hwr_syb_pane_ParamLimits

0xcfc5,	// (0x0004b9ea) fshwr2_icf_pane_ParamLimits

0x2795,	// (0x000411ba) list_double_graphic_pane_vc_g4_ParamLimits

0x2795,	// (0x000411ba) list_double_graphic_pane_vc_g4

0x36da,	// (0x000420ff) cell_ituss_key_pane_g3_ParamLimits

0x36da,	// (0x000420ff) cell_ituss_key_pane_g3

0x3782,	// (0x000421a7) cell_ituss_key_t5_ParamLimits

0x3782,	// (0x000421a7) cell_ituss_key_t5

0xf4c9,	// (0x0004deee) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

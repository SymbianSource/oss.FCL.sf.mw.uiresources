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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002fb45 };

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
0xb1c5,	// (0x0003ad0a) Screen

0xb1d1,	// (0x0003ad16) application_window_ParamLimits

0xb1d1,	// (0x0003ad16) application_window

0x2935,	// (0x0003247a) screen_g1

0xb209,	// (0x0003ad4e) area_bottom_pane_ParamLimits

0xb209,	// (0x0003ad4e) area_bottom_pane

0xf2d4,	// (0x0003ee19) area_top_pane_ParamLimits

0xf2d4,	// (0x0003ee19) area_top_pane

0xf3e6,	// (0x0003ef2b) main_pane_ParamLimits

0xf3e6,	// (0x0003ef2b) main_pane

0x293f,	// (0x00032484) misc_graphics

0xd2da,	// (0x0003ce1f) battery_pane_ParamLimits

0xd2da,	// (0x0003ce1f) battery_pane

0x55e1,	// (0x00035126) bg_status_flat_pane_g8

0x55e9,	// (0x0003512e) bg_status_flat_pane_g9

0x49eb,	// (0x00034530) context_pane_ParamLimits

0x49eb,	// (0x00034530) context_pane

0xd445,	// (0x0003cf8a) navi_pane_ParamLimits

0xd445,	// (0x0003cf8a) navi_pane

0xd4bd,	// (0x0003d002) signal_pane_ParamLimits

0xd4bd,	// (0x0003d002) signal_pane

0x0008,

0xf87a,	// (0x0003f3bf) bg_status_flat_pane_g

0xd54d,	// (0x0003d092) status_pane_g1_ParamLimits

0xd54d,	// (0x0003d092) status_pane_g1

0xd563,	// (0x0003d0a8) status_pane_g2_ParamLimits

0xd563,	// (0x0003d0a8) status_pane_g2

0x4c04,	// (0x00034749) status_pane_g3_ParamLimits

0x4c04,	// (0x00034749) status_pane_g3

0x0004,

0xf7a6,	// (0x0003f2eb) status_pane_g_ParamLimits

0xf7a6,	// (0x0003f2eb) status_pane_g

0xd56f,	// (0x0003d0b4) title_pane_ParamLimits

0xd56f,	// (0x0003d0b4) title_pane

0xd5d2,	// (0x0003d117) uni_indicator_pane_ParamLimits

0xd5d2,	// (0x0003d117) uni_indicator_pane

0x4851,	// (0x00034396) bg_list_pane_ParamLimits

0x4851,	// (0x00034396) bg_list_pane

0xd241,	// (0x0003cd86) find_pane

0xd249,	// (0x0003cd8e) listscroll_app_pane_ParamLimits

0xd249,	// (0x0003cd8e) listscroll_app_pane

0x487d,	// (0x000343c2) listscroll_form_pane

0xbc10,	// (0x0003b755) listscroll_gen_pane_ParamLimits

0xbc10,	// (0x0003b755) listscroll_gen_pane

0x487d,	// (0x000343c2) listscroll_set_pane

0x6184,	// (0x00035cc9) main_idle_act_pane

0x4557,	// (0x0003409c) main_idle_trad_pane

0x4557,	// (0x0003409c) main_list_empty_pane

0x4897,	// (0x000343dc) main_midp_pane

0x48a3,	// (0x000343e8) main_pane_g1_ParamLimits

0x48a3,	// (0x000343e8) main_pane_g1

0xbc24,	// (0x0003b769) popup_ai_message_window_ParamLimits

0xbc24,	// (0x0003b769) popup_ai_message_window

0xbcb5,	// (0x0003b7fa) popup_fep_china_uni_window_ParamLimits

0xbcb5,	// (0x0003b7fa) popup_fep_china_uni_window

0x0f38,	// (0x00030a7d) popup_fep_japan_candidate_window_ParamLimits

0x0f38,	// (0x00030a7d) popup_fep_japan_candidate_window

0x0f58,	// (0x00030a9d) popup_fep_japan_predictive_window_ParamLimits

0x0f58,	// (0x00030a9d) popup_fep_japan_predictive_window

0xbd11,	// (0x0003b856) popup_find_window

0xbd2e,	// (0x0003b873) popup_grid_graphic_window_ParamLimits

0xbd2e,	// (0x0003b873) popup_grid_graphic_window

0x0fbd,	// (0x00030b02) popup_large_graphic_colour_window

0xbdc6,	// (0x0003b90b) popup_menu_window_ParamLimits

0xbdc6,	// (0x0003b90b) popup_menu_window

0xbf98,	// (0x0003badd) popup_note_image_window

0xbf5e,	// (0x0003baa3) popup_note_wait_window_ParamLimits

0xbf5e,	// (0x0003baa3) popup_note_wait_window

0xbfb0,	// (0x0003baf5) popup_note_window_ParamLimits

0xbfb0,	// (0x0003baf5) popup_note_window

0xc056,	// (0x0003bb9b) popup_query_code_window_ParamLimits

0xc056,	// (0x0003bb9b) popup_query_code_window

0x1205,	// (0x00030d4a) popup_query_data_code_window_ParamLimits

0x1205,	// (0x00030d4a) popup_query_data_code_window

0xc090,	// (0x0003bbd5) popup_query_data_window_ParamLimits

0xc090,	// (0x0003bbd5) popup_query_data_window

0xc112,	// (0x0003bc57) popup_query_sat_info_window_ParamLimits

0xc112,	// (0x0003bc57) popup_query_sat_info_window

0xc1a9,	// (0x0003bcee) popup_snote_single_graphic_window_ParamLimits

0xc1a9,	// (0x0003bcee) popup_snote_single_graphic_window

0xc1a9,	// (0x0003bcee) popup_snote_single_text_window_ParamLimits

0xc1a9,	// (0x0003bcee) popup_snote_single_text_window

0x128c,	// (0x00030dd1) popup_sub_window_general

0x13bc,	// (0x00030f01) popup_window_general_ParamLimits

0x13bc,	// (0x00030f01) popup_window_general

0x48b1,	// (0x000343f6) power_save_pane

0xba9f,	// (0x0003b5e4) control_pane_g1_ParamLimits

0xba9f,	// (0x0003b5e4) control_pane_g1

0xbac8,	// (0x0003b60d) control_pane_g2_ParamLimits

0xbac8,	// (0x0003b60d) control_pane_g2

0x4814,	// (0x00034359) control_pane_g3_ParamLimits

0x4814,	// (0x00034359) control_pane_g3

0x0007,

0xf78e,	// (0x0003f2d3) control_pane_g_ParamLimits

0xf78e,	// (0x0003f2d3) control_pane_g

0xbb09,	// (0x0003b64e) control_pane_t1_ParamLimits

0xbb09,	// (0x0003b64e) control_pane_t1

0xbb67,	// (0x0003b6ac) control_pane_t2_ParamLimits

0xbb67,	// (0x0003b6ac) control_pane_t2

0x0002,

0xf79f,	// (0x0003f2e4) control_pane_t_ParamLimits

0xf79f,	// (0x0003f2e4) control_pane_t

0x4735,	// (0x0003427a) navi_navi_volume_pane_cp1

0x473e,	// (0x00034283) status_small_icon_pane

0x4746,	// (0x0003428b) status_small_pane_g1_ParamLimits

0x4746,	// (0x0003428b) status_small_pane_g1

0x477a,	// (0x000342bf) status_small_pane_g2_ParamLimits

0x477a,	// (0x000342bf) status_small_pane_g2

0x4786,	// (0x000342cb) status_small_pane_g3_ParamLimits

0x4786,	// (0x000342cb) status_small_pane_g3

0x4792,	// (0x000342d7) status_small_pane_g4_ParamLimits

0x4792,	// (0x000342d7) status_small_pane_g4

0x479e,	// (0x000342e3) status_small_pane_g5_ParamLimits

0x479e,	// (0x000342e3) status_small_pane_g5

0x47ad,	// (0x000342f2) status_small_pane_g6_ParamLimits

0x47ad,	// (0x000342f2) status_small_pane_g6

0x0007,

0xf77d,	// (0x0003f2c2) status_small_pane_g_ParamLimits

0xf77d,	// (0x0003f2c2) status_small_pane_g

0x47dd,	// (0x00034322) status_small_pane_t1

0x4800,	// (0x00034345) status_small_wait_pane_ParamLimits

0x4800,	// (0x00034345) status_small_wait_pane

0xd016,	// (0x0003cb5b) aid_levels_signal_ParamLimits

0xd016,	// (0x0003cb5b) aid_levels_signal

0xd02e,	// (0x0003cb73) signal_pane_g1_ParamLimits

0xd02e,	// (0x0003cb73) signal_pane_g1

0xd049,	// (0x0003cb8e) signal_pane_g2_ParamLimits

0xd049,	// (0x0003cb8e) signal_pane_g2

0x0003,

0xf70e,	// (0x0003f253) signal_pane_g_ParamLimits

0xf70e,	// (0x0003f253) signal_pane_g

0x4036,	// (0x00033b7b) context_pane_g1

0xb382,	// (0x0003aec7) title_pane_g1

0xb3b9,	// (0x0003aefe) title_pane_t1

0x29e7,	// (0x0003252c) title_pane_t2

0x2a0d,	// (0x00032552) title_pane_t3

0x0002,

0xf55d,	// (0x0003f0a2) title_pane_t

0xd5fa,	// (0x0003d13f) aid_levels_battery_ParamLimits

0xd5fa,	// (0x0003d13f) aid_levels_battery

0xd616,	// (0x0003d15b) battery_pane_g1_ParamLimits

0xd616,	// (0x0003d15b) battery_pane_g1

0xd633,	// (0x0003d178) battery_pane_g2_ParamLimits

0xd633,	// (0x0003d178) battery_pane_g2

0x0001,

0xf7b1,	// (0x0003f2f6) battery_pane_g_ParamLimits

0xf7b1,	// (0x0003f2f6) battery_pane_g

0xd8df,	// (0x0003d424) uni_indicator_pane_g1

0xd8f4,	// (0x0003d439) uni_indicator_pane_g2

0x5f4e,	// (0x00035a93) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0003f467) uni_indicator_pane_g

0x43c9,	// (0x00033f0e) navi_icon_pane_ParamLimits

0x43c9,	// (0x00033f0e) navi_icon_pane

0x4312,	// (0x00033e57) navi_midp_pane

0x43e5,	// (0x00033f2a) navi_navi_pane

0x43ef,	// (0x00033f34) navi_text_pane_ParamLimits

0x43ef,	// (0x00033f34) navi_text_pane

0x2935,	// (0x0003247a) status_small_wait_pane_g1

0x347f,	// (0x00032fc4) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0003f462) status_small_wait_pane_g

0xd846,	// (0x0003d38b) navi_navi_icon_text_pane

0xd84e,	// (0x0003d393) navi_navi_pane_g1_ParamLimits

0xd84e,	// (0x0003d393) navi_navi_pane_g1

0xd860,	// (0x0003d3a5) navi_navi_pane_g2_ParamLimits

0xd860,	// (0x0003d3a5) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0003f430) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0003f430) navi_navi_pane_g

0x5c74,	// (0x000357b9) navi_navi_tabs_pane

0xd872,	// (0x0003d3b7) navi_navi_text_pane

0xd846,	// (0x0003d38b) navi_navi_volume_pane

0x5c24,	// (0x00035769) navi_text_pane_t1

0x5c18,	// (0x0003575d) navi_icon_pane_g1

0x5b6b,	// (0x000356b0) navi_navi_text_pane_t1

0xc489,	// (0x0003bfce) navi_navi_volume_pane_g1

0xc491,	// (0x0003bfd6) volume_small_pane

0xd78e,	// (0x0003d2d3) navi_navi_icon_text_pane_g1

0xd796,	// (0x0003d2db) navi_navi_icon_text_pane_t1

0x43e5,	// (0x00033f2a) navi_tabs_2_long_pane

0x43e5,	// (0x00033f2a) navi_tabs_2_pane

0x43e5,	// (0x00033f2a) navi_tabs_3_long_pane

0x43e5,	// (0x00033f2a) navi_tabs_3_pane

0x43e5,	// (0x00033f2a) navi_tabs_4_pane

0xc469,	// (0x0003bfae) tabs_2_active_pane_ParamLimits

0xc469,	// (0x0003bfae) tabs_2_active_pane

0xc479,	// (0x0003bfbe) tabs_2_passive_pane_ParamLimits

0xc479,	// (0x0003bfbe) tabs_2_passive_pane

0xc437,	// (0x0003bf7c) tabs_3_active_pane_ParamLimits

0xc437,	// (0x0003bf7c) tabs_3_active_pane

0xc447,	// (0x0003bf8c) tabs_3_passive_pane_ParamLimits

0xc447,	// (0x0003bf8c) tabs_3_passive_pane

0xc458,	// (0x0003bf9d) tabs_3_passive_pane_cp_ParamLimits

0xc458,	// (0x0003bf9d) tabs_3_passive_pane_cp

0xc3f3,	// (0x0003bf38) tabs_4_active_pane_ParamLimits

0xc3f3,	// (0x0003bf38) tabs_4_active_pane

0xc404,	// (0x0003bf49) tabs_4_passive_pane_ParamLimits

0xc404,	// (0x0003bf49) tabs_4_passive_pane

0xc415,	// (0x0003bf5a) tabs_4_passive_pane_cp_ParamLimits

0xc415,	// (0x0003bf5a) tabs_4_passive_pane_cp

0xc426,	// (0x0003bf6b) tabs_4_passive_pane_cp2_ParamLimits

0xc426,	// (0x0003bf6b) tabs_4_passive_pane_cp2

0xc3d3,	// (0x0003bf18) tabs_2_long_active_pane_ParamLimits

0xc3d3,	// (0x0003bf18) tabs_2_long_active_pane

0xc3e3,	// (0x0003bf28) tabs_2_long_passive_pane_ParamLimits

0xc3e3,	// (0x0003bf28) tabs_2_long_passive_pane

0xc3a0,	// (0x0003bee5) tabs_3_long_active_pane_ParamLimits

0xc3a0,	// (0x0003bee5) tabs_3_long_active_pane

0xc3b1,	// (0x0003bef6) tabs_3_long_passive_pane_ParamLimits

0xc3b1,	// (0x0003bef6) tabs_3_long_passive_pane

0xc3c2,	// (0x0003bf07) tabs_3_long_passive_pane_cp_ParamLimits

0xc3c2,	// (0x0003bf07) tabs_3_long_passive_pane_cp

0x1632,	// (0x00031177) volume_small_pane_g1

0xc34f,	// (0x0003be94) volume_small_pane_g2

0xc358,	// (0x0003be9d) volume_small_pane_g3

0xc361,	// (0x0003bea6) volume_small_pane_g4

0xc36a,	// (0x0003beaf) volume_small_pane_g5

0xc373,	// (0x0003beb8) volume_small_pane_g6

0xc37c,	// (0x0003bec1) volume_small_pane_g7

0xc385,	// (0x0003beca) volume_small_pane_g8

0xc38e,	// (0x0003bed3) volume_small_pane_g9

0xc397,	// (0x0003bedc) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0003f3fc) volume_small_pane_g

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp2_ParamLimits

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp2

0xb445,	// (0x0003af8a) tabs_3_active_pane_g1

0xb44d,	// (0x0003af92) tabs_3_active_pane_t1

0x2c9a,	// (0x000327df) bg_passive_tab_pane_cp2_ParamLimits

0x2c9a,	// (0x000327df) bg_passive_tab_pane_cp2

0xb445,	// (0x0003af8a) tabs_3_passive_pane_g1

0xb44d,	// (0x0003af92) tabs_3_passive_pane_t1

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp3_ParamLimits

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp3

0xb45f,	// (0x0003afa4) tabs_4_active_pane_g1

0xb467,	// (0x0003afac) tabs_4_active_pane_t1

0x2c9a,	// (0x000327df) bg_passive_tab_pane_cp3_ParamLimits

0x2c9a,	// (0x000327df) bg_passive_tab_pane_cp3

0xb45f,	// (0x0003afa4) tabs_4_1_passive_pane_g1

0xb467,	// (0x0003afac) tabs_4_1_passive_pane_t1

0x4897,	// (0x000343dc) list_highlight_pane_cp2

0xd97d,	// (0x0003d4c2) list_set_pane_ParamLimits

0xd97d,	// (0x0003d4c2) list_set_pane

0xda17,	// (0x0003d55c) main_pane_set_t1_ParamLimits

0xda17,	// (0x0003d55c) main_pane_set_t1

0xda37,	// (0x0003d57c) main_pane_set_t2_ParamLimits

0xda37,	// (0x0003d57c) main_pane_set_t2

0xda4b,	// (0x0003d590) main_pane_set_t3_ParamLimits

0xda4b,	// (0x0003d590) main_pane_set_t3

0xda5d,	// (0x0003d5a2) main_pane_set_t4_ParamLimits

0xda5d,	// (0x0003d5a2) main_pane_set_t4

0x0003,

0xf987,	// (0x0003f4cc) main_pane_set_t_ParamLimits

0xf987,	// (0x0003f4cc) main_pane_set_t

0xda6f,	// (0x0003d5b4) setting_code_pane

0xda79,	// (0x0003d5be) setting_slider_graphic_pane

0xda79,	// (0x0003d5be) setting_slider_pane

0xda79,	// (0x0003d5be) setting_text_pane

0xda79,	// (0x0003d5be) setting_volume_pane

0x0008,	// (0x0002fb4d) volume_set_pane

0x2a1f,	// (0x00032564) bg_set_opt_pane_cp

0x0010,	// (0x0002fb55) setting_slider_pane_t1

0x0029,	// (0x0002fb6e) setting_slider_pane_t2

0x0043,	// (0x0002fb88) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003f0a9) setting_slider_pane_t

0x005b,	// (0x0002fba0) slider_set_pane

0x293f,	// (0x00032484) bg_set_opt_pane_cp2

0x2a61,	// (0x000325a6) setting_slider_graphic_pane_g1

0x0071,	// (0x0002fbb6) setting_slider_graphic_pane_t1

0x0081,	// (0x0002fbc6) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003f0b0) setting_slider_graphic_pane_t

0x0091,	// (0x0002fbd6) slider_set_pane_cp

0x293f,	// (0x00032484) input_focus_pane_cp1

0x616b,	// (0x00035cb0) list_set_text_pane

0x2935,	// (0x0003247a) setting_text_pane_g1

0x293f,	// (0x00032484) input_focus_pane_cp2

0x2935,	// (0x0003247a) setting_code_pane_g1

0x2a6a,	// (0x000325af) setting_code_pane_t1

0xef4f,	// (0x0003ea94) set_text_pane_t1_ParamLimits

0xef4f,	// (0x0003ea94) set_text_pane_t1

0x3929,	// (0x0003346e) set_opt_bg_pane_g1

0x3931,	// (0x00033476) set_opt_bg_pane_g2

0x6145,	// (0x00035c8a) set_opt_bg_pane_g3

0x3941,	// (0x00033486) set_opt_bg_pane_g4

0x3949,	// (0x0003348e) set_opt_bg_pane_g5

0x3951,	// (0x00033496) set_opt_bg_pane_g6

0x614f,	// (0x00035c94) set_opt_bg_pane_g7

0x6157,	// (0x00035c9c) set_opt_bg_pane_g8

0x6161,	// (0x00035ca6) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0003f4b9) set_opt_bg_pane_g

0x6138,	// (0x00035c7d) slider_set_pane_g1

0x1822,	// (0x00031367) slider_set_pane_g2

0x0006,

0xf965,	// (0x0003f4aa) slider_set_pane_g

0x1796,	// (0x000312db) volume_set_pane_g1

0x179e,	// (0x000312e3) volume_set_pane_g2

0x17a6,	// (0x000312eb) volume_set_pane_g3

0x17ae,	// (0x000312f3) volume_set_pane_g4

0x17b6,	// (0x000312fb) volume_set_pane_g5

0x17be,	// (0x00031303) volume_set_pane_g6

0x17c6,	// (0x0003130b) volume_set_pane_g7

0x17ce,	// (0x00031313) volume_set_pane_g8

0x17d6,	// (0x0003131b) volume_set_pane_g9

0x17de,	// (0x00031323) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0003f482) volume_set_pane_g

0xb479,	// (0x0003afbe) indicator_pane_ParamLimits

0xb479,	// (0x0003afbe) indicator_pane

0xcc6f,	// (0x0003c7b4) main_idle_pane_g2_ParamLimits

0xcc6f,	// (0x0003c7b4) main_idle_pane_g2

0xcca7,	// (0x0003c7ec) main_pane_idle_g1_ParamLimits

0xcca7,	// (0x0003c7ec) main_pane_idle_g1

0x2ab9,	// (0x000325fe) popup_clock_digital_analogue_window_ParamLimits

0x2ab9,	// (0x000325fe) popup_clock_digital_analogue_window

0xccce,	// (0x0003c813) soft_indicator_pane_ParamLimits

0xccce,	// (0x0003c813) soft_indicator_pane

0xcce8,	// (0x0003c82d) wallpaper_pane_ParamLimits

0xcce8,	// (0x0003c82d) wallpaper_pane

0x2935,	// (0x0003247a) wallpaper_pane_g1

0xccfa,	// (0x0003c83f) indicator_pane_g1_ParamLimits

0xccfa,	// (0x0003c83f) indicator_pane_g1

0x6545,	// (0x0003608a) navi_navi_icon_text_pane_srt_g1

0x2b0b,	// (0x00032650) soft_indicator_pane_t1

0x2b25,	// (0x0003266a) aid_ps_area_pane

0xcd10,	// (0x0003c855) aid_ps_clock_pane

0x2b44,	// (0x00032689) aid_ps_indicator_pane

0x2b50,	// (0x00032695) indicator_ps_pane_ParamLimits

0x2b50,	// (0x00032695) indicator_ps_pane

0x2b5f,	// (0x000326a4) power_save_pane_g1_ParamLimits

0x2b5f,	// (0x000326a4) power_save_pane_g1

0x2b6b,	// (0x000326b0) power_save_pane_g2_ParamLimits

0x2b6b,	// (0x000326b0) power_save_pane_g2

0xf2b4,	// (0x0003edf9) aid_navinavi_width_pane

0x2b25,	// (0x0003266a) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003f0b5) power_save_pane_g_ParamLimits

0xf570,	// (0x0003f0b5) power_save_pane_g

0x2b79,	// (0x000326be) power_save_pane_t1_ParamLimits

0x2b79,	// (0x000326be) power_save_pane_t1

0xcd10,	// (0x0003c855) aid_ps_clock_pane_ParamLimits

0x2b44,	// (0x00032689) aid_ps_indicator_pane_ParamLimits

0x2b8b,	// (0x000326d0) power_save_pane_t4_ParamLimits

0x2b8b,	// (0x000326d0) power_save_pane_t4

0x0001,

0xf575,	// (0x0003f0ba) power_save_pane_t_ParamLimits

0xf575,	// (0x0003f0ba) power_save_pane_t

0x2bb5,	// (0x000326fa) power_save_t3_ParamLimits

0x2bb5,	// (0x000326fa) power_save_t3

0x2ba0,	// (0x000326e5) power_save_t2_ParamLimits

0x2ba0,	// (0x000326e5) power_save_t2

0x2bca,	// (0x0003270f) indicator_ps_pane_g1

0xcd1e,	// (0x0003c863) ai_gene_pane_ParamLimits

0xcd1e,	// (0x0003c863) ai_gene_pane

0xcd35,	// (0x0003c87a) ai_links_pane_ParamLimits

0xcd35,	// (0x0003c87a) ai_links_pane

0xcd4d,	// (0x0003c892) indicator_pane_cp1_ParamLimits

0xcd4d,	// (0x0003c892) indicator_pane_cp1

0xcd5c,	// (0x0003c8a1) main_pane_idle_g1_cp_ParamLimits

0xcd5c,	// (0x0003c8a1) main_pane_idle_g1_cp

0x2c03,	// (0x00032748) popup_ai_links_title_window

0xcd74,	// (0x0003c8b9) soft_indicator_pane_cp1_ParamLimits

0xcd74,	// (0x0003c8b9) soft_indicator_pane_cp1

0x5f11,	// (0x00035a56) ai_links_pane_g1

0x5f1a,	// (0x00035a5f) grid_ai_links_pane

0xd8d6,	// (0x0003d41b) ai_gene_pane_1

0x5eff,	// (0x00035a44) ai_gene_pane_2

0x5f08,	// (0x00035a4d) list_highlight_pane_cp4

0xd8b2,	// (0x0003d3f7) cell_ai_link_pane_ParamLimits

0xd8b2,	// (0x0003d3f7) cell_ai_link_pane

0x5ed0,	// (0x00035a15) cell_ai_link_pane_g1

0x347f,	// (0x00032fc4) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0003f45d) cell_ai_link_pane_g

0x293f,	// (0x00032484) grid_highlight_cp2

0x293f,	// (0x00032484) bg_popup_sub_pane_cp1

0x2c26,	// (0x0003276b) popup_ai_links_title_window_t1

0x5e1e,	// (0x00035963) ai_gene_pane_1_g1_ParamLimits

0x5e1e,	// (0x00035963) ai_gene_pane_1_g1

0x5e2a,	// (0x0003596f) ai_gene_pane_1_g2_ParamLimits

0x5e2a,	// (0x0003596f) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0003f453) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0003f453) ai_gene_pane_1_g

0x5e37,	// (0x0003597c) ai_gene_pane_1_t1_ParamLimits

0x5e37,	// (0x0003597c) ai_gene_pane_1_t1

0x5e6b,	// (0x000359b0) grid_ai_soft_ind_pane

0x5e09,	// (0x0003594e) ai_gene_pane_2_t1_ParamLimits

0x5e09,	// (0x0003594e) ai_gene_pane_2_t1

0xcd88,	// (0x0003c8cd) main_pane_empty_t1_ParamLimits

0xcd88,	// (0x0003c8cd) main_pane_empty_t1

0xcda0,	// (0x0003c8e5) main_pane_empty_t2_ParamLimits

0xcda0,	// (0x0003c8e5) main_pane_empty_t2

0xcdb5,	// (0x0003c8fa) main_pane_empty_t3_ParamLimits

0xcdb5,	// (0x0003c8fa) main_pane_empty_t3

0xcdc7,	// (0x0003c90c) main_pane_empty_t4_ParamLimits

0xcdc7,	// (0x0003c90c) main_pane_empty_t4

0xcdd9,	// (0x0003c91e) main_pane_empty_t5_ParamLimits

0xcdd9,	// (0x0003c91e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003f0bf) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003f0bf) main_pane_empty_t

0x397a,	// (0x000334bf) bg_popup_window_pane_ParamLimits

0x397a,	// (0x000334bf) bg_popup_window_pane

0x5b79,	// (0x000356be) find_popup_pane_cp2_ParamLimits

0x5b79,	// (0x000356be) find_popup_pane_cp2

0x5b85,	// (0x000356ca) heading_pane_ParamLimits

0x5b85,	// (0x000356ca) heading_pane

0x293f,	// (0x00032484) bg_popup_sub_pane

0xd7b3,	// (0x0003d2f8) bg_popup_window_pane_g1_ParamLimits

0xd7b3,	// (0x0003d2f8) bg_popup_window_pane_g1

0xd7c2,	// (0x0003d307) bg_popup_window_pane_g2_ParamLimits

0xd7c2,	// (0x0003d307) bg_popup_window_pane_g2

0xd7ce,	// (0x0003d313) bg_popup_window_pane_g3_ParamLimits

0xd7ce,	// (0x0003d313) bg_popup_window_pane_g3

0xd7da,	// (0x0003d31f) bg_popup_window_pane_g4_ParamLimits

0xd7da,	// (0x0003d31f) bg_popup_window_pane_g4

0xd7e9,	// (0x0003d32e) bg_popup_window_pane_g5_ParamLimits

0xd7e9,	// (0x0003d32e) bg_popup_window_pane_g5

0xd7f9,	// (0x0003d33e) bg_popup_window_pane_g6_ParamLimits

0xd7f9,	// (0x0003d33e) bg_popup_window_pane_g6

0xd805,	// (0x0003d34a) bg_popup_window_pane_g7_ParamLimits

0xd805,	// (0x0003d34a) bg_popup_window_pane_g7

0xd814,	// (0x0003d359) bg_popup_window_pane_g8_ParamLimits

0xd814,	// (0x0003d359) bg_popup_window_pane_g8

0xd823,	// (0x0003d368) bg_popup_window_pane_g9_ParamLimits

0xd823,	// (0x0003d368) bg_popup_window_pane_g9

0x5b5f,	// (0x000356a4) bg_popup_window_pane_g10_ParamLimits

0x5b5f,	// (0x000356a4) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0003f41b) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0003f41b) bg_popup_window_pane_g

0x5a88,	// (0x000355cd) bg_popup_heading_pane_ParamLimits

0x5a88,	// (0x000355cd) bg_popup_heading_pane

0x198b,	// (0x000314d0) tabs_4_passive_pane_cp_srt_ParamLimits

0x198b,	// (0x000314d0) tabs_4_passive_pane_cp_srt

0x199d,	// (0x000314e2) tabs_4_passive_pane_srt_ParamLimits

0x5a9c,	// (0x000355e1) heading_pane_g2

0x199d,	// (0x000314e2) tabs_4_passive_pane_srt

0x4e03,	// (0x00034948) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4e03,	// (0x00034948) bg_passive_tab_pane_cp3_srt

0x5aa4,	// (0x000355e9) heading_pane_t1_ParamLimits

0x5aa4,	// (0x000355e9) heading_pane_t1

0x5abb,	// (0x00035600) heading_pane_t2_ParamLimits

0x5abb,	// (0x00035600) heading_pane_t2

0x0001,

0xf8d1,	// (0x0003f416) heading_pane_t_ParamLimits

0xf8d1,	// (0x0003f416) heading_pane_t

0x55a9,	// (0x000350ee) bg_popup_heading_pane_g1

0x5658,	// (0x0003519d) bg_popup_heading_pane_g2

0x5662,	// (0x000351a7) bg_popup_heading_pane_g3

0x566c,	// (0x000351b1) bg_popup_heading_pane_g4

0x5676,	// (0x000351bb) bg_popup_heading_pane_g5

0x5680,	// (0x000351c5) bg_popup_heading_pane_g6

0x5688,	// (0x000351cd) bg_popup_heading_pane_g7

0x5690,	// (0x000351d5) bg_popup_heading_pane_g8

0x569a,	// (0x000351df) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0003f3d2) bg_popup_heading_pane_g

0x4d8f,	// (0x000348d4) bg_popup_sub_pane_g1

0x4d9f,	// (0x000348e4) bg_popup_sub_pane_g2

0x4d97,	// (0x000348dc) bg_popup_sub_pane_g3

0x4daf,	// (0x000348f4) bg_popup_sub_pane_g4

0x4da7,	// (0x000348ec) bg_popup_sub_pane_g5

0x4db7,	// (0x000348fc) bg_popup_sub_pane_g6

0x4dbf,	// (0x00034904) bg_popup_sub_pane_g7

0x4dcf,	// (0x00034914) bg_popup_sub_pane_g8

0x4dc7,	// (0x0003490c) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0003f3ac) bg_popup_sub_pane_g

0x2c9a,	// (0x000327df) bg_popup_window_pane_cp5_ParamLimits

0x2c9a,	// (0x000327df) bg_popup_window_pane_cp5

0x2cb6,	// (0x000327fb) popup_note_window_g1_ParamLimits

0x2cb6,	// (0x000327fb) popup_note_window_g1

0x2cc2,	// (0x00032807) popup_note_window_t1_ParamLimits

0x2cc2,	// (0x00032807) popup_note_window_t1

0x2cd8,	// (0x0003281d) popup_note_window_t2_ParamLimits

0x2cd8,	// (0x0003281d) popup_note_window_t2

0x2cee,	// (0x00032833) popup_note_window_t3_ParamLimits

0x2cee,	// (0x00032833) popup_note_window_t3

0x2d04,	// (0x00032849) popup_note_window_t4_ParamLimits

0x2d04,	// (0x00032849) popup_note_window_t4

0x2d2c,	// (0x00032871) popup_note_window_t5_ParamLimits

0x2d2c,	// (0x00032871) popup_note_window_t5

0x0004,

0xf585,	// (0x0003f0ca) popup_note_window_t_ParamLimits

0xf585,	// (0x0003f0ca) popup_note_window_t

0x2d50,	// (0x00032895) bg_popup_window_pane_cp6_ParamLimits

0x2d50,	// (0x00032895) bg_popup_window_pane_cp6

0x5525,	// (0x0003506a) popup_note_image_window_g1_ParamLimits

0x5525,	// (0x0003506a) popup_note_image_window_g1

0x5531,	// (0x00035076) popup_note_image_window_g2_ParamLimits

0x5531,	// (0x00035076) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0003f3a0) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0003f3a0) popup_note_image_window_g

0x554a,	// (0x0003508f) popup_note_image_window_t1_ParamLimits

0x554a,	// (0x0003508f) popup_note_image_window_t1

0x5563,	// (0x000350a8) popup_note_image_window_t2_ParamLimits

0x5563,	// (0x000350a8) popup_note_image_window_t2

0x557c,	// (0x000350c1) popup_note_image_window_t3_ParamLimits

0x557c,	// (0x000350c1) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0003f3a5) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0003f3a5) popup_note_image_window_t

0x53e6,	// (0x00034f2b) bg_popup_window_pane_cp7_ParamLimits

0x53e6,	// (0x00034f2b) bg_popup_window_pane_cp7

0x5416,	// (0x00034f5b) popup_note_wait_window_g1_ParamLimits

0x5416,	// (0x00034f5b) popup_note_wait_window_g1

0x5422,	// (0x00034f67) popup_note_wait_window_g2_ParamLimits

0x5422,	// (0x00034f67) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0003f38e) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0003f38e) popup_note_wait_window_g

0x543a,	// (0x00034f7f) popup_note_wait_window_t1_ParamLimits

0x543a,	// (0x00034f7f) popup_note_wait_window_t1

0x5461,	// (0x00034fa6) popup_note_wait_window_t2_ParamLimits

0x5461,	// (0x00034fa6) popup_note_wait_window_t2

0x547e,	// (0x00034fc3) popup_note_wait_window_t3_ParamLimits

0x547e,	// (0x00034fc3) popup_note_wait_window_t3

0x5491,	// (0x00034fd6) popup_note_wait_window_t4_ParamLimits

0x5491,	// (0x00034fd6) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0003f395) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0003f395) popup_note_wait_window_t

0x54b6,	// (0x00034ffb) wait_bar_pane_ParamLimits

0x54b6,	// (0x00034ffb) wait_bar_pane

0x293f,	// (0x00032484) wait_anim_pane

0x293f,	// (0x00032484) wait_border_pane

0x2935,	// (0x0003247a) wait_anim_pane_g1

0x2935,	// (0x0003247a) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003f24e) wait_anim_pane_g

0x538a,	// (0x00034ecf) wait_border_pane_g1

0x5395,	// (0x00034eda) wait_border_pane_g2

0x539e,	// (0x00034ee3) wait_border_pane_g3

0x0002,

0xf842,	// (0x0003f387) wait_border_pane_g

0x51f5,	// (0x00034d3a) bg_popup_window_pane_cp16_ParamLimits

0x51f5,	// (0x00034d3a) bg_popup_window_pane_cp16

0x52f5,	// (0x00034e3a) indicator_popup_pane_cp4_ParamLimits

0x52f5,	// (0x00034e3a) indicator_popup_pane_cp4

0x5309,	// (0x00034e4e) popup_query_data_window_t1_ParamLimits

0x5309,	// (0x00034e4e) popup_query_data_window_t1

0x531b,	// (0x00034e60) popup_query_data_window_t2_ParamLimits

0x531b,	// (0x00034e60) popup_query_data_window_t2

0x5334,	// (0x00034e79) popup_query_data_window_t3_ParamLimits

0x5334,	// (0x00034e79) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0003f380) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0003f380) popup_query_data_window_t

0x534e,	// (0x00034e93) query_popup_data_pane_ParamLimits

0x534e,	// (0x00034e93) query_popup_data_pane

0x5362,	// (0x00034ea7) query_popup_data_pane_cp1_ParamLimits

0x5362,	// (0x00034ea7) query_popup_data_pane_cp1

0x51f5,	// (0x00034d3a) bg_popup_window_pane_cp10_ParamLimits

0x51f5,	// (0x00034d3a) bg_popup_window_pane_cp10

0x5227,	// (0x00034d6c) indicator_popup_pane_ParamLimits

0x5227,	// (0x00034d6c) indicator_popup_pane

0x5249,	// (0x00034d8e) popup_query_code_window_t1_ParamLimits

0x5249,	// (0x00034d8e) popup_query_code_window_t1

0x5263,	// (0x00034da8) popup_query_code_window_t2_ParamLimits

0x5263,	// (0x00034da8) popup_query_code_window_t2

0x52ac,	// (0x00034df1) popup_query_code_window_t3_ParamLimits

0x52ac,	// (0x00034df1) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0003f379) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0003f379) popup_query_code_window_t

0x52db,	// (0x00034e20) query_popup_pane_ParamLimits

0x52db,	// (0x00034e20) query_popup_pane

0x2d50,	// (0x00032895) bg_popup_window_pane_cp15_ParamLimits

0x2d50,	// (0x00032895) bg_popup_window_pane_cp15

0x2d6e,	// (0x000328b3) indicator_popup_pane_cp1_ParamLimits

0x2d6e,	// (0x000328b3) indicator_popup_pane_cp1

0x2d81,	// (0x000328c6) indicator_popup_pane_cp2_ParamLimits

0x2d81,	// (0x000328c6) indicator_popup_pane_cp2

0x2d94,	// (0x000328d9) popup_query_data_code_window_g1_ParamLimits

0x2d94,	// (0x000328d9) popup_query_data_code_window_g1

0x2da7,	// (0x000328ec) popup_query_data_code_window_t1_ParamLimits

0x2da7,	// (0x000328ec) popup_query_data_code_window_t1

0x2db9,	// (0x000328fe) popup_query_data_code_window_t2_ParamLimits

0x2db9,	// (0x000328fe) popup_query_data_code_window_t2

0x2dcb,	// (0x00032910) popup_query_data_code_window_t3_ParamLimits

0x2dcb,	// (0x00032910) popup_query_data_code_window_t3

0x2de1,	// (0x00032926) popup_query_data_code_window_t4_ParamLimits

0x2de1,	// (0x00032926) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003f0d5) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003f0d5) popup_query_data_code_window_t

0x1460,	// (0x00030fa5) list_single_midp_graphic_pane_g3

0x2df9,	// (0x0003293e) query_popup_data_pane_cp2_ParamLimits

0x2e0c,	// (0x00032951) query_popup_pane_cp2_ParamLimits

0x2e0c,	// (0x00032951) query_popup_pane_cp2

0x293f,	// (0x00032484) bg_popup_window_pane_cp11

0x51ed,	// (0x00034d32) heading_pane_cp5

0x3537,	// (0x0003307c) listscroll_popup_info_pane

0x293f,	// (0x00032484) input_focus_pane_cp3

0x2e1f,	// (0x00032964) query_popup_pane_t1

0x2e2d,	// (0x00032972) list_popup_info_pane_ParamLimits

0x2e2d,	// (0x00032972) list_popup_info_pane

0x347f,	// (0x00032fc4) listscroll_popup_info_pane_g1

0x3487,	// (0x00032fcc) scroll_pane_cp7

0x3491,	// (0x00032fd6) popup_info_list_pane_t1_ParamLimits

0x3491,	// (0x00032fd6) popup_info_list_pane_t1

0x34ab,	// (0x00032ff0) popup_info_list_pane_t2_ParamLimits

0x34ab,	// (0x00032ff0) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003f0de) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003f0de) popup_info_list_pane_t

0x293f,	// (0x00032484) bg_popup_window_pane_cp12

0x655f,	// (0x000360a4) find_popup_pane

0x2a1f,	// (0x00032564) bg_popup_window_pane_cp3

0x34c5,	// (0x0003300a) heading_pane_cp3

0x34d1,	// (0x00033016) listscroll_popup_graphic_pane

0x293f,	// (0x00032484) bg_popup_window_pane_cp4

0xce3b,	// (0x0003c980) heading_pane_cp4

0x3537,	// (0x0003307c) listscroll_popup_colour_pane

0x353f,	// (0x00033084) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x353f,	// (0x00033084) cell_large_graphic_colour_none_popup_pane

0xce43,	// (0x0003c988) grid_large_graphic_colour_popup_pane_ParamLimits

0xce43,	// (0x0003c988) grid_large_graphic_colour_popup_pane

0x357f,	// (0x000330c4) listscroll_popup_colour_pane_g1_ParamLimits

0x357f,	// (0x000330c4) listscroll_popup_colour_pane_g1

0x3596,	// (0x000330db) listscroll_popup_colour_pane_g2_ParamLimits

0x3596,	// (0x000330db) listscroll_popup_colour_pane_g2

0x35ad,	// (0x000330f2) listscroll_popup_colour_pane_g3_ParamLimits

0x35ad,	// (0x000330f2) listscroll_popup_colour_pane_g3

0xce67,	// (0x0003c9ac) listscroll_popup_colour_pane_g4_ParamLimits

0xce67,	// (0x0003c9ac) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003f0e3) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003f0e3) listscroll_popup_colour_pane_g

0x35d1,	// (0x00033116) scroll_pane_cp6_ParamLimits

0x35d1,	// (0x00033116) scroll_pane_cp6

0xce77,	// (0x0003c9bc) cell_large_graphic_colour_popup_pane_ParamLimits

0xce77,	// (0x0003c9bc) cell_large_graphic_colour_popup_pane

0x3602,	// (0x00033147) cell_large_graphic_colour_none_popup_pane_t1

0x293f,	// (0x00032484) grid_highlight_pane_cp5

0x3611,	// (0x00033156) cell_large_graphic_colour_popup_pane_g1

0x3619,	// (0x0003315e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003f0ec) cell_large_graphic_colour_popup_pane_g

0x3621,	// (0x00033166) cell_large_graphic_colour_popup_pane_g2_copy1

0x362a,	// (0x0003316f) grid_highlight_pane_cp4

0x3632,	// (0x00033177) bg_popup_window_pane_cp8_ParamLimits

0x3632,	// (0x00033177) bg_popup_window_pane_cp8

0x364d,	// (0x00033192) popup_snote_single_text_window_g1_ParamLimits

0x364d,	// (0x00033192) popup_snote_single_text_window_g1

0x365f,	// (0x000331a4) popup_snote_single_text_window_t1_ParamLimits

0x365f,	// (0x000331a4) popup_snote_single_text_window_t1

0x3672,	// (0x000331b7) popup_snote_single_text_window_t2_ParamLimits

0x3672,	// (0x000331b7) popup_snote_single_text_window_t2

0x3685,	// (0x000331ca) popup_snote_single_text_window_t3_ParamLimits

0x3685,	// (0x000331ca) popup_snote_single_text_window_t3

0x36be,	// (0x00033203) popup_snote_single_text_window_t4_ParamLimits

0x36be,	// (0x00033203) popup_snote_single_text_window_t4

0x36f2,	// (0x00033237) popup_snote_single_text_window_t5_ParamLimits

0x36f2,	// (0x00033237) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003f0f1) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003f0f1) popup_snote_single_text_window_t

0x3721,	// (0x00033266) bg_popup_window_pane_cp9_ParamLimits

0x3721,	// (0x00033266) bg_popup_window_pane_cp9

0x364d,	// (0x00033192) popup_snote_single_graphic_window_g1_ParamLimits

0x364d,	// (0x00033192) popup_snote_single_graphic_window_g1

0x372f,	// (0x00033274) popup_snote_single_graphic_window_g2_ParamLimits

0x372f,	// (0x00033274) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003f0fc) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003f0fc) popup_snote_single_graphic_window_g

0x373b,	// (0x00033280) popup_snote_single_graphic_window_t1_ParamLimits

0x373b,	// (0x00033280) popup_snote_single_graphic_window_t1

0x374e,	// (0x00033293) popup_snote_single_graphic_window_t2_ParamLimits

0x374e,	// (0x00033293) popup_snote_single_graphic_window_t2

0x3761,	// (0x000332a6) popup_snote_single_graphic_window_t3_ParamLimits

0x3761,	// (0x000332a6) popup_snote_single_graphic_window_t3

0x379a,	// (0x000332df) popup_snote_single_graphic_window_t4_ParamLimits

0x379a,	// (0x000332df) popup_snote_single_graphic_window_t4

0x37ce,	// (0x00033313) popup_snote_single_graphic_window_t5_ParamLimits

0x37ce,	// (0x00033313) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003f101) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003f101) popup_snote_single_graphic_window_t

0x64a3,	// (0x00035fe8) grid_graphic_popup_pane_ParamLimits

0x64a3,	// (0x00035fe8) grid_graphic_popup_pane

0x64cb,	// (0x00036010) listscroll_popup_graphic_pane_g1_ParamLimits

0x64cb,	// (0x00036010) listscroll_popup_graphic_pane_g1

0xdb6a,	// (0x0003d6af) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb6a,	// (0x0003d6af) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0003f4f6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0003f4f6) listscroll_popup_graphic_pane_g

0x64f3,	// (0x00036038) scroll_pane_cp5

0xdb2d,	// (0x0003d672) cell_graphic_popup_pane_ParamLimits

0xdb2d,	// (0x0003d672) cell_graphic_popup_pane

0x642d,	// (0x00035f72) cell_graphic_popup_pane_g1

0x6435,	// (0x00035f7a) cell_graphic_popup_pane_g2

0x3621,	// (0x00033166) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0003f4ef) cell_graphic_popup_pane_g

0x643e,	// (0x00035f83) cell_graphic_popup_pane_t2

0x362a,	// (0x0003316f) grid_highlight_pane_cp3

0x380f,	// (0x00033354) list_gen_pane_ParamLimits

0x380f,	// (0x00033354) list_gen_pane

0x3841,	// (0x00033386) scroll_pane

0xdae4,	// (0x0003d629) bg_list_pane_g1_ParamLimits

0xdae4,	// (0x0003d629) bg_list_pane_g1

0x63a2,	// (0x00035ee7) bg_list_pane_g2_ParamLimits

0x63a2,	// (0x00035ee7) bg_list_pane_g2

0x63b7,	// (0x00035efc) bg_list_pane_g3_ParamLimits

0x63b7,	// (0x00035efc) bg_list_pane_g3

0x63cb,	// (0x00035f10) bg_list_pane_g4_ParamLimits

0x63cb,	// (0x00035f10) bg_list_pane_g4

0xdb01,	// (0x0003d646) bg_list_pane_g5_ParamLimits

0xdb01,	// (0x0003d646) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0003f4e4) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0003f4e4) bg_list_pane_g

0xdaac,	// (0x0003d5f1) list_double2_graphic_large_graphic_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double2_graphic_large_graphic_pane

0xdaac,	// (0x0003d5f1) list_double2_graphic_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double2_graphic_pane

0xdaac,	// (0x0003d5f1) list_double2_large_graphic_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double2_large_graphic_pane

0xdaac,	// (0x0003d5f1) list_double2_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double2_pane

0xdaac,	// (0x0003d5f1) list_double_graphic_heading_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double_graphic_heading_pane

0xdaac,	// (0x0003d5f1) list_double_graphic_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double_graphic_pane

0xdaac,	// (0x0003d5f1) list_double_heading_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double_heading_pane

0xdaac,	// (0x0003d5f1) list_double_large_graphic_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double_large_graphic_pane

0xdaac,	// (0x0003d5f1) list_double_number_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double_number_pane

0xdaac,	// (0x0003d5f1) list_double_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double_pane

0xdaac,	// (0x0003d5f1) list_double_time_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_double_time_pane

0xdaac,	// (0x0003d5f1) list_setting_number_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_setting_number_pane

0xdaac,	// (0x0003d5f1) list_setting_pane_ParamLimits

0xdaac,	// (0x0003d5f1) list_setting_pane

0xdabe,	// (0x0003d603) list_single_2graphic_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_2graphic_pane

0xdabe,	// (0x0003d603) list_single_graphic_heading_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_graphic_heading_pane

0xdabe,	// (0x0003d603) list_single_graphic_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_graphic_pane

0xdabe,	// (0x0003d603) list_single_heading_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_heading_pane

0xdabe,	// (0x0003d603) list_single_large_graphic_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_large_graphic_pane

0xdabe,	// (0x0003d603) list_single_number_heading_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_number_heading_pane

0xdabe,	// (0x0003d603) list_single_number_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_number_pane

0xdabe,	// (0x0003d603) list_single_pane_ParamLimits

0xdabe,	// (0x0003d603) list_single_pane

0x293f,	// (0x00032484) list_highlight_pane_cp1

0x140d,	// (0x00030f52) list_single_pane_g1_ParamLimits

0x140d,	// (0x00030f52) list_single_pane_g1

0x1419,	// (0x00030f5e) list_single_pane_g2_ParamLimits

0x1419,	// (0x00030f5e) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003f113) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003f113) list_single_pane_g

0x2e92,	// (0x000329d7) list_single_pane_t1_ParamLimits

0x2e92,	// (0x000329d7) list_single_pane_t1

0x140d,	// (0x00030f52) list_single_number_pane_g1_ParamLimits

0x140d,	// (0x00030f52) list_single_number_pane_g1

0x1419,	// (0x00030f5e) list_single_number_pane_g2_ParamLimits

0x1419,	// (0x00030f5e) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003f113) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003f113) list_single_number_pane_g

0x1425,	// (0x00030f6a) list_single_number_pane_t1_ParamLimits

0x1425,	// (0x00030f6a) list_single_number_pane_t1

0xc49a,	// (0x0003bfdf) list_single_number_pane_t2_ParamLimits

0xc49a,	// (0x0003bfdf) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0003f4a5) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0003f4a5) list_single_number_pane_t

0xb4a1,	// (0x0003afe6) list_single_graphic_pane_g1_ParamLimits

0xb4a1,	// (0x0003afe6) list_single_graphic_pane_g1

0x140d,	// (0x00030f52) list_single_graphic_pane_g2_ParamLimits

0x140d,	// (0x00030f52) list_single_graphic_pane_g2

0x1419,	// (0x00030f5e) list_single_graphic_pane_g3_ParamLimits

0x1419,	// (0x00030f5e) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003f10c) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003f10c) list_single_graphic_pane_g

0xb4ad,	// (0x0003aff2) list_single_graphic_pane_t1_ParamLimits

0xb4ad,	// (0x0003aff2) list_single_graphic_pane_t1

0x140d,	// (0x00030f52) list_single_heading_pane_g1_ParamLimits

0x140d,	// (0x00030f52) list_single_heading_pane_g1

0x1419,	// (0x00030f5e) list_single_heading_pane_g2_ParamLimits

0x1419,	// (0x00030f5e) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f113) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f113) list_single_heading_pane_g

0x2eb4,	// (0x000329f9) list_single_heading_pane_t1_ParamLimits

0x2eb4,	// (0x000329f9) list_single_heading_pane_t1

0xb4c3,	// (0x0003b008) list_single_heading_pane_t2_ParamLimits

0xb4c3,	// (0x0003b008) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003f118) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003f118) list_single_heading_pane_t

0x140d,	// (0x00030f52) list_single_number_heading_pane_g1_ParamLimits

0x140d,	// (0x00030f52) list_single_number_heading_pane_g1

0x1419,	// (0x00030f5e) list_single_number_heading_pane_g2_ParamLimits

0x1419,	// (0x00030f5e) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003f113) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003f113) list_single_number_heading_pane_g

0x2eb4,	// (0x000329f9) list_single_number_heading_pane_t1_ParamLimits

0x2eb4,	// (0x000329f9) list_single_number_heading_pane_t1

0xb4d5,	// (0x0003b01a) list_single_number_heading_pane_t2_ParamLimits

0xb4d5,	// (0x0003b01a) list_single_number_heading_pane_t2

0x2e6c,	// (0x000329b1) list_single_number_heading_pane_t3_ParamLimits

0x2e6c,	// (0x000329b1) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003f11d) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003f11d) list_single_number_heading_pane_t

0x1401,	// (0x00030f46) list_single_graphic_heading_pane_g1_ParamLimits

0x1401,	// (0x00030f46) list_single_graphic_heading_pane_g1

0xb4e7,	// (0x0003b02c) list_single_graphic_heading_pane_g4_ParamLimits

0xb4e7,	// (0x0003b02c) list_single_graphic_heading_pane_g4

0x1419,	// (0x00030f5e) list_single_graphic_heading_pane_g5_ParamLimits

0x1419,	// (0x00030f5e) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003f124) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003f124) list_single_graphic_heading_pane_g

0x2eb4,	// (0x000329f9) list_single_graphic_heading_pane_t1_ParamLimits

0x2eb4,	// (0x000329f9) list_single_graphic_heading_pane_t1

0xb4f8,	// (0x0003b03d) list_single_graphic_heading_pane_t2_ParamLimits

0xb4f8,	// (0x0003b03d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003f12b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003f12b) list_single_graphic_heading_pane_t

0x2ea8,	// (0x000329ed) list_single_large_graphic_pane_g1_ParamLimits

0x2ea8,	// (0x000329ed) list_single_large_graphic_pane_g1

0x140d,	// (0x00030f52) list_single_large_graphic_pane_g2_ParamLimits

0x140d,	// (0x00030f52) list_single_large_graphic_pane_g2

0x1419,	// (0x00030f5e) list_single_large_graphic_pane_g3_ParamLimits

0x1419,	// (0x00030f5e) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003f130) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003f130) list_single_large_graphic_pane_g

0x5395,	// (0x00034eda) wait_border_pane_g2_copy1

0xb50a,	// (0x0003b04f) list_single_large_graphic_pane_g4_cp2

0x2eb4,	// (0x000329f9) list_single_large_graphic_pane_t1_ParamLimits

0x2eb4,	// (0x000329f9) list_single_large_graphic_pane_t1

0xb512,	// (0x0003b057) list_double_pane_g1_ParamLimits

0xb512,	// (0x0003b057) list_double_pane_g1

0xb51e,	// (0x0003b063) list_double_pane_g2_ParamLimits

0xb51e,	// (0x0003b063) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003f137) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003f137) list_double_pane_g

0xb52a,	// (0x0003b06f) list_double_pane_t1_ParamLimits

0xb52a,	// (0x0003b06f) list_double_pane_t1

0xb540,	// (0x0003b085) list_double_pane_t2_ParamLimits

0xb540,	// (0x0003b085) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003f13c) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003f13c) list_double_pane_t

0xb552,	// (0x0003b097) list_double2_pane_g1_ParamLimits

0xb552,	// (0x0003b097) list_double2_pane_g1

0xb563,	// (0x0003b0a8) list_double2_pane_g2_ParamLimits

0xb563,	// (0x0003b0a8) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003f141) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003f141) list_double2_pane_g

0xb56f,	// (0x0003b0b4) list_double2_pane_t1_ParamLimits

0xb56f,	// (0x0003b0b4) list_double2_pane_t1

0xb585,	// (0x0003b0ca) list_double2_pane_t2_ParamLimits

0xb585,	// (0x0003b0ca) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003f146) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003f146) list_double2_pane_t

0xb512,	// (0x0003b057) list_double_number_pane_g1_ParamLimits

0xb512,	// (0x0003b057) list_double_number_pane_g1

0xb51e,	// (0x0003b063) list_double_number_pane_g2_ParamLimits

0xb51e,	// (0x0003b063) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003f137) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003f137) list_double_number_pane_g

0xb597,	// (0x0003b0dc) list_double_number_pane_t1_ParamLimits

0xb597,	// (0x0003b0dc) list_double_number_pane_t1

0xb5a9,	// (0x0003b0ee) list_double_number_pane_t2_ParamLimits

0xb5a9,	// (0x0003b0ee) list_double_number_pane_t2

0xb5bf,	// (0x0003b104) list_double_number_pane_t3_ParamLimits

0xb5bf,	// (0x0003b104) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003f14b) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003f14b) list_double_number_pane_t

0xb5d1,	// (0x0003b116) list_double_graphic_pane_g1_ParamLimits

0xb5d1,	// (0x0003b116) list_double_graphic_pane_g1

0xb5dd,	// (0x0003b122) list_double_graphic_pane_g2_ParamLimits

0xb5dd,	// (0x0003b122) list_double_graphic_pane_g2

0xb5ec,	// (0x0003b131) list_double_graphic_pane_g3_ParamLimits

0xb5ec,	// (0x0003b131) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003f152) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003f152) list_double_graphic_pane_g

0xb604,	// (0x0003b149) list_double_graphic_pane_t1_ParamLimits

0xb604,	// (0x0003b149) list_double_graphic_pane_t1

0xb61a,	// (0x0003b15f) list_double_graphic_pane_t2_ParamLimits

0xb61a,	// (0x0003b15f) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003f15b) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003f15b) list_double_graphic_pane_t

0x03d1,	// (0x0002ff16) list_double2_graphic_pane_g1_ParamLimits

0x03d1,	// (0x0002ff16) list_double2_graphic_pane_g1

0x30ec,	// (0x00032c31) list_double2_graphic_pane_g2_ParamLimits

0x30ec,	// (0x00032c31) list_double2_graphic_pane_g2

0xb563,	// (0x0003b0a8) list_double2_graphic_pane_g3_ParamLimits

0xb563,	// (0x0003b0a8) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003f160) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003f160) list_double2_graphic_pane_g

0xb62c,	// (0x0003b171) list_double2_graphic_pane_t1_ParamLimits

0xb62c,	// (0x0003b171) list_double2_graphic_pane_t1

0xb642,	// (0x0003b187) list_double2_graphic_pane_t2_ParamLimits

0xb642,	// (0x0003b187) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003f167) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003f167) list_double2_graphic_pane_t

0xb654,	// (0x0003b199) list_double_large_graphic_pane_g1_ParamLimits

0xb654,	// (0x0003b199) list_double_large_graphic_pane_g1

0xb67f,	// (0x0003b1c4) list_double_large_graphic_pane_g2_ParamLimits

0xb67f,	// (0x0003b1c4) list_double_large_graphic_pane_g2

0xb51e,	// (0x0003b063) list_double_large_graphic_pane_g3_ParamLimits

0xb51e,	// (0x0003b063) list_double_large_graphic_pane_g3

0xb690,	// (0x0003b1d5) list_double_large_graphic_pane_g4_ParamLimits

0xb690,	// (0x0003b1d5) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003f16c) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003f16c) list_double_large_graphic_pane_g

0xb6a3,	// (0x0003b1e8) list_double_large_graphic_pane_t1_ParamLimits

0xb6a3,	// (0x0003b1e8) list_double_large_graphic_pane_t1

0xb6bc,	// (0x0003b201) list_double_large_graphic_pane_t2_ParamLimits

0xb6bc,	// (0x0003b201) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003f177) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003f177) list_double_large_graphic_pane_t

0xb6ce,	// (0x0003b213) list_double2_large_graphic_pane_g1_ParamLimits

0xb6ce,	// (0x0003b213) list_double2_large_graphic_pane_g1

0xb552,	// (0x0003b097) list_double2_large_graphic_pane_g2_ParamLimits

0xb552,	// (0x0003b097) list_double2_large_graphic_pane_g2

0xb563,	// (0x0003b0a8) list_double2_large_graphic_pane_g3_ParamLimits

0xb563,	// (0x0003b0a8) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003f17c) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003f17c) list_double2_large_graphic_pane_g

0xb6da,	// (0x0003b21f) list_double2_large_graphic_pane_t1_ParamLimits

0xb6da,	// (0x0003b21f) list_double2_large_graphic_pane_t1

0xb6f0,	// (0x0003b235) list_double2_large_graphic_pane_t2_ParamLimits

0xb6f0,	// (0x0003b235) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003f183) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003f183) list_double2_large_graphic_pane_t

0xb702,	// (0x0003b247) list_double_heading_pane_g1_ParamLimits

0xb702,	// (0x0003b247) list_double_heading_pane_g1

0x019c,	// (0x0002fce1) list_double_heading_pane_g2_ParamLimits

0x019c,	// (0x0002fce1) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003f188) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003f188) list_double_heading_pane_g

0xb713,	// (0x0003b258) list_double_heading_pane_t1_ParamLimits

0xb713,	// (0x0003b258) list_double_heading_pane_t1

0xb585,	// (0x0003b0ca) list_double_heading_pane_t2_ParamLimits

0xb585,	// (0x0003b0ca) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003f18d) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003f18d) list_double_heading_pane_t

0x03d1,	// (0x0002ff16) list_double_graphic_heading_pane_g1_ParamLimits

0x03d1,	// (0x0002ff16) list_double_graphic_heading_pane_g1

0xb702,	// (0x0003b247) list_double_graphic_heading_pane_g2_ParamLimits

0xb702,	// (0x0003b247) list_double_graphic_heading_pane_g2

0x019c,	// (0x0002fce1) list_double_graphic_heading_pane_g3_ParamLimits

0x019c,	// (0x0002fce1) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003f192) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003f192) list_double_graphic_heading_pane_g

0xb729,	// (0x0003b26e) list_double_graphic_heading_pane_t1_ParamLimits

0xb729,	// (0x0003b26e) list_double_graphic_heading_pane_t1

0xb642,	// (0x0003b187) list_double_graphic_heading_pane_t2_ParamLimits

0xb642,	// (0x0003b187) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003f199) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003f199) list_double_graphic_heading_pane_t

0xb67f,	// (0x0003b1c4) list_double_time_pane_g1_ParamLimits

0xb67f,	// (0x0003b1c4) list_double_time_pane_g1

0xb51e,	// (0x0003b063) list_double_time_pane_g2_ParamLimits

0xb51e,	// (0x0003b063) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003f19e) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003f19e) list_double_time_pane_g

0xb73f,	// (0x0003b284) list_double_time_pane_t1_ParamLimits

0xb73f,	// (0x0003b284) list_double_time_pane_t1

0xb755,	// (0x0003b29a) list_double_time_pane_t2_ParamLimits

0xb755,	// (0x0003b29a) list_double_time_pane_t2

0xb767,	// (0x0003b2ac) list_double_time_pane_t3_ParamLimits

0xb767,	// (0x0003b2ac) list_double_time_pane_t3

0xb779,	// (0x0003b2be) list_double_time_pane_t4_ParamLimits

0xb779,	// (0x0003b2be) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0003f1a3) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0003f1a3) list_double_time_pane_t

0xb78b,	// (0x0003b2d0) list_setting_pane_g1_ParamLimits

0xb78b,	// (0x0003b2d0) list_setting_pane_g1

0xb797,	// (0x0003b2dc) list_setting_pane_g2_ParamLimits

0xb797,	// (0x0003b2dc) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003f1ac) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003f1ac) list_setting_pane_g

0xb7a3,	// (0x0003b2e8) list_setting_pane_t1_ParamLimits

0xb7a3,	// (0x0003b2e8) list_setting_pane_t1

0xb7bd,	// (0x0003b302) list_setting_pane_t2_ParamLimits

0xb7bd,	// (0x0003b302) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0003f1b1) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0003f1b1) list_setting_pane_t

0xb7fc,	// (0x0003b341) set_value_pane_cp_ParamLimits

0xb7fc,	// (0x0003b341) set_value_pane_cp

0xb808,	// (0x0003b34d) list_setting_number_pane_g1_ParamLimits

0xb808,	// (0x0003b34d) list_setting_number_pane_g1

0xb814,	// (0x0003b359) list_setting_number_pane_g2_ParamLimits

0xb814,	// (0x0003b359) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0003f1b8) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0003f1b8) list_setting_number_pane_g

0xb820,	// (0x0003b365) list_setting_number_pane_t1_ParamLimits

0xb820,	// (0x0003b365) list_setting_number_pane_t1

0xb839,	// (0x0003b37e) list_setting_number_pane_t2_ParamLimits

0xb839,	// (0x0003b37e) list_setting_number_pane_t2

0xb853,	// (0x0003b398) list_setting_number_pane_t3_ParamLimits

0xb853,	// (0x0003b398) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003f1bd) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003f1bd) list_setting_number_pane_t

0xb7fc,	// (0x0003b341) set_value_pane_ParamLimits

0xb7fc,	// (0x0003b341) set_value_pane

0x3875,	// (0x000333ba) bg_set_opt_pane_ParamLimits

0x3875,	// (0x000333ba) bg_set_opt_pane

0x0532,	// (0x00030077) set_value_pane_t1

0x3896,	// (0x000333db) slider_set_pane_cp3

0x389f,	// (0x000333e4) volume_small_pane_cp

0x38a8,	// (0x000333ed) list_form_gen_pane

0x38b1,	// (0x000333f6) scroll_pane_cp8

0xb896,	// (0x0003b3db) form_field_data_pane_ParamLimits

0xb896,	// (0x0003b3db) form_field_data_pane

0xb8ad,	// (0x0003b3f2) form_field_data_wide_pane_ParamLimits

0xb8ad,	// (0x0003b3f2) form_field_data_wide_pane

0xb8cd,	// (0x0003b412) form_field_popup_pane_ParamLimits

0xb8cd,	// (0x0003b412) form_field_popup_pane

0xb8e5,	// (0x0003b42a) form_field_popup_wide_pane_ParamLimits

0xb8e5,	// (0x0003b42a) form_field_popup_wide_pane

0x05c6,	// (0x0003010b) form_field_slider_pane_ParamLimits

0x05c6,	// (0x0003010b) form_field_slider_pane

0x05d9,	// (0x0003011e) form_field_slider_wide_pane_ParamLimits

0x05d9,	// (0x0003011e) form_field_slider_wide_pane

0x38c2,	// (0x00033407) data_form_pane

0xb906,	// (0x0003b44b) form_field_data_pane_t1

0x38ce,	// (0x00033413) input_focus_pane

0x060e,	// (0x00030153) data_form_wide_pane

0x062b,	// (0x00030170) form_field_data_wide_pane_t1

0x363f,	// (0x00033184) input_focus_pane_cp6

0xb920,	// (0x0003b465) form_field_popup_pane_t1

0x38ce,	// (0x00033413) input_focus_pane_cp7

0x38fc,	// (0x00033441) list_form_pane

0x066d,	// (0x000301b2) form_field_popup_wide_pane_t1

0x38ce,	// (0x00033413) input_focus_pane_cp8

0x3908,	// (0x0003344d) list_form_wide_pane

0xb942,	// (0x0003b487) form_field_slider_pane_t1_ParamLimits

0xb942,	// (0x0003b487) form_field_slider_pane_t1

0xb95a,	// (0x0003b49f) form_field_slider_pane_t2_ParamLimits

0xb95a,	// (0x0003b49f) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003f1cd) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003f1cd) form_field_slider_pane_t

0x2c9a,	// (0x000327df) input_focus_pane_cp9_ParamLimits

0x2c9a,	// (0x000327df) input_focus_pane_cp9

0xb96f,	// (0x0003b4b4) slider_cont_pane_ParamLimits

0xb96f,	// (0x0003b4b4) slider_cont_pane

0x3917,	// (0x0003345c) form_field_slider_wide_pane_t1_ParamLimits

0x3917,	// (0x0003345c) form_field_slider_wide_pane_t1

0x06c9,	// (0x0003020e) form_field_slider_wide_pane_t2_ParamLimits

0x06c9,	// (0x0003020e) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0003f1d2) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0003f1d2) form_field_slider_wide_pane_t

0x2c9a,	// (0x000327df) input_focus_pane_cp10_ParamLimits

0x2c9a,	// (0x000327df) input_focus_pane_cp10

0xb983,	// (0x0003b4c8) slider_cont_pane_cp1_ParamLimits

0xb983,	// (0x0003b4c8) slider_cont_pane_cp1

0xb997,	// (0x0003b4dc) slider_form_pane_cp

0x3929,	// (0x0003346e) input_focus_pane_g1

0x3931,	// (0x00033476) input_focus_pane_g2

0x3939,	// (0x0003347e) input_focus_pane_g3

0x3941,	// (0x00033486) input_focus_pane_g4

0x3949,	// (0x0003348e) input_focus_pane_g5

0x3951,	// (0x00033496) input_focus_pane_g6

0x3959,	// (0x0003349e) input_focus_pane_g7

0x3961,	// (0x000334a6) input_focus_pane_g8

0x3969,	// (0x000334ae) input_focus_pane_g9

0x2935,	// (0x0003247a) input_focus_pane_g10

0x0009,

0xf692,	// (0x0003f1d7) input_focus_pane_g

0x539e,	// (0x00034ee3) wait_border_pane_g3_copy1

0xb99f,	// (0x0003b4e4) data_form_pane_t1

0x2935,	// (0x0003247a) wait_anim_pane_g1_copy1

0xc4ac,	// (0x0003bff1) data_form_wide_pane_t1

0xb9b9,	// (0x0003b4fe) list_form_graphic_pane_cp_ParamLimits

0xb9b9,	// (0x0003b4fe) list_form_graphic_pane_cp

0x62e0,	// (0x00035e25) slider_form_pane_g1

0x62e9,	// (0x00035e2e) slider_form_pane_g2

0x0006,

0xf990,	// (0x0003f4d5) slider_form_pane_g

0xb9b9,	// (0x0003b4fe) list_form_graphic_pane_ParamLimits

0xb9b9,	// (0x0003b4fe) list_form_graphic_pane

0x0747,	// (0x0003028c) list_form_graphic_pane_g1

0x074f,	// (0x00030294) list_form_graphic_pane_t1_ParamLimits

0x074f,	// (0x00030294) list_form_graphic_pane_t1

0x2a1f,	// (0x00032564) list_highlight_pane_cp5_ParamLimits

0x2a1f,	// (0x00032564) list_highlight_pane_cp5

0xb9cb,	// (0x0003b510) find_pane_g1

0x3971,	// (0x000334b6) input_find_pane

0xb9d4,	// (0x0003b519) input_find_pane_g1_ParamLimits

0xb9d4,	// (0x0003b519) input_find_pane_g1

0xb9e0,	// (0x0003b525) input_find_pane_t1_ParamLimits

0xb9e0,	// (0x0003b525) input_find_pane_t1

0xb9f5,	// (0x0003b53a) input_find_pane_t2_ParamLimits

0xb9f5,	// (0x0003b53a) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003f1ec) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003f1ec) input_find_pane_t

0x397a,	// (0x000334bf) input_focus_pane_cp5_ParamLimits

0x397a,	// (0x000334bf) input_focus_pane_cp5

0x3994,	// (0x000334d9) bg_popup_window_pane_cp2_ParamLimits

0x3994,	// (0x000334d9) bg_popup_window_pane_cp2

0x39a1,	// (0x000334e6) listscroll_menu_pane_ParamLimits

0x39a1,	// (0x000334e6) listscroll_menu_pane

0xceac,	// (0x0003c9f1) popup_submenu_window_ParamLimits

0xceac,	// (0x0003c9f1) popup_submenu_window

0x39d9,	// (0x0003351e) find_popup_pane_g1

0x39e1,	// (0x00033526) input_popup_find_pane_cp

0x397a,	// (0x000334bf) input_focus_pane_cp4_ParamLimits

0x397a,	// (0x000334bf) input_focus_pane_cp4

0x39f7,	// (0x0003353c) input_popup_find_pane_t1_ParamLimits

0x39f7,	// (0x0003353c) input_popup_find_pane_t1

0x293f,	// (0x00032484) bg_popup_sub_pane_cp

0x3a25,	// (0x0003356a) listscroll_popup_sub_pane

0x3a2d,	// (0x00033572) list_submenu_pane_ParamLimits

0x3a2d,	// (0x00033572) list_submenu_pane

0x3a3e,	// (0x00033583) scroll_pane_cp4

0x3a46,	// (0x0003358b) list_single_popup_submenu_pane_ParamLimits

0x3a46,	// (0x0003358b) list_single_popup_submenu_pane

0x3a5a,	// (0x0003359f) list_single_popup_submenu_pane_g1

0x3a62,	// (0x000335a7) list_single_popup_submenu_pane_t1_ParamLimits

0x3a62,	// (0x000335a7) list_single_popup_submenu_pane_t1

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp1_ParamLimits

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp1

0xcee6,	// (0x0003ca2b) tabs_2_active_pane_g1

0xceee,	// (0x0003ca33) tabs_2_active_pane_t1

0x2c9a,	// (0x000327df) bg_passive_tab_pane_cp1_ParamLimits

0x2c9a,	// (0x000327df) bg_passive_tab_pane_cp1

0xcee6,	// (0x0003ca2b) tabs_2_passive_pane_g1

0xceee,	// (0x0003ca33) tabs_2_passive_pane_t1

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp4

0xcf00,	// (0x0003ca45) tabs_2_long_active_pane_t1

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp4

0x1468,	// (0x00030fad) list_single_midp_graphic_pane_g4_ParamLimits

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp5

0xcf13,	// (0x0003ca58) tabs_3_long_active_pane_t1

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp5

0x1468,	// (0x00030fad) list_single_midp_graphic_pane_g4

0x2a1f,	// (0x00032564) bg_popup_window_pane_cp13_ParamLimits

0x2a1f,	// (0x00032564) bg_popup_window_pane_cp13

0x3ad9,	// (0x0003361e) listscroll_popup_fast_pane_ParamLimits

0x3ad9,	// (0x0003361e) listscroll_popup_fast_pane

0x3ae8,	// (0x0003362d) grid_popup_fast_pane_ParamLimits

0x3ae8,	// (0x0003362d) grid_popup_fast_pane

0x3afa,	// (0x0003363f) scroll_pane_cp9_ParamLimits

0x3afa,	// (0x0003363f) scroll_pane_cp9

0x7c1a,	// (0x0003775f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7c1a,	// (0x0003775f) list_single_graphic_hl_pane_t1_cp2

0x3b1e,	// (0x00033663) input_focus_pane_cp20_ParamLimits

0x3b1e,	// (0x00033663) input_focus_pane_cp20

0x3b2c,	// (0x00033671) query_popup_data_pane_t1_ParamLimits

0x3b2c,	// (0x00033671) query_popup_data_pane_t1

0x3b3f,	// (0x00033684) query_popup_data_pane_t2_ParamLimits

0x3b3f,	// (0x00033684) query_popup_data_pane_t2

0x3b85,	// (0x000336ca) query_popup_data_pane_t3_ParamLimits

0x3b85,	// (0x000336ca) query_popup_data_pane_t3

0x3bc6,	// (0x0003370b) query_popup_data_pane_t4_ParamLimits

0x3bc6,	// (0x0003370b) query_popup_data_pane_t4

0x3c02,	// (0x00033747) query_popup_data_pane_t5_ParamLimits

0x3c02,	// (0x00033747) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0003f1f1) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0003f1f1) query_popup_data_pane_t

0x3929,	// (0x0003346e) bg_set_opt_pane_g1

0x3931,	// (0x00033476) bg_set_opt_pane_g2

0x3939,	// (0x0003347e) bg_set_opt_pane_g3

0x3941,	// (0x00033486) bg_set_opt_pane_g4

0x3949,	// (0x0003348e) bg_set_opt_pane_g5

0x3951,	// (0x00033496) bg_set_opt_pane_g6

0x3959,	// (0x0003349e) bg_set_opt_pane_g7

0x3961,	// (0x000334a6) bg_set_opt_pane_g8

0x3969,	// (0x000334ae) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003f1fc) bg_set_opt_pane_g

0x0aca,	// (0x0003060f) control_top_pane_stacon_ParamLimits

0x0aca,	// (0x0003060f) control_top_pane_stacon

0x0b1d,	// (0x00030662) signal_pane_stacon_ParamLimits

0x0b1d,	// (0x00030662) signal_pane_stacon

0x41f0,	// (0x00033d35) stacon_top_pane_g1_ParamLimits

0x41f0,	// (0x00033d35) stacon_top_pane_g1

0x0b42,	// (0x00030687) title_pane_stacon_ParamLimits

0x0b42,	// (0x00030687) title_pane_stacon

0x0b6c,	// (0x000306b1) uni_indicator_pane_stacon_ParamLimits

0x0b6c,	// (0x000306b1) uni_indicator_pane_stacon

0x0b81,	// (0x000306c6) battery_pane_stacon_ParamLimits

0x0b81,	// (0x000306c6) battery_pane_stacon

0x0bc5,	// (0x0003070a) control_bottom_pane_stacon_ParamLimits

0x0bc5,	// (0x0003070a) control_bottom_pane_stacon

0x0be8,	// (0x0003072d) navi_pane_stacon_ParamLimits

0x0be8,	// (0x0003072d) navi_pane_stacon

0x4212,	// (0x00033d57) stacon_bottom_pane_g1_ParamLimits

0x4212,	// (0x00033d57) stacon_bottom_pane_g1

0x07a3,	// (0x000302e8) aid_levels_signal_lsc_ParamLimits

0x07a3,	// (0x000302e8) aid_levels_signal_lsc

0x07b9,	// (0x000302fe) signal_pane_stacon_g1_ParamLimits

0x07b9,	// (0x000302fe) signal_pane_stacon_g1

0x07cd,	// (0x00030312) signal_pane_stacon_g2_ParamLimits

0x07cd,	// (0x00030312) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003f20f) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003f20f) signal_pane_stacon_g

0x0802,	// (0x00030347) title_pane_stacon_t1_ParamLimits

0x0802,	// (0x00030347) title_pane_stacon_t1

0x3c46,	// (0x0003378b) uni_indicator_pane_stacon_g1

0x3c50,	// (0x00033795) uni_indicator_pane_stacon_g2

0x3c5a,	// (0x0003379f) uni_indicator_pane_stacon_g3

0x3c64,	// (0x000337a9) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003f21b) uni_indicator_pane_stacon_g

0x0827,	// (0x0003036c) control_top_pane_stacon_g1

0x082f,	// (0x00030374) control_top_pane_stacon_t1_ParamLimits

0x082f,	// (0x00030374) control_top_pane_stacon_t1

0x0866,	// (0x000303ab) aid_levels_battery_lsc_ParamLimits

0x0866,	// (0x000303ab) aid_levels_battery_lsc

0x087d,	// (0x000303c2) battery_pane_stacon_g1_ParamLimits

0x087d,	// (0x000303c2) battery_pane_stacon_g1

0x0890,	// (0x000303d5) battery_pane_stacon_g2_ParamLimits

0x0890,	// (0x000303d5) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0003f224) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0003f224) battery_pane_stacon_g

0x08ce,	// (0x00030413) navi_icon_pane_stacon

0x08e2,	// (0x00030427) navi_navi_pane_stacon

0x08ce,	// (0x00030413) navi_text_pane_stacon

0x0827,	// (0x0003036c) control_bottom_pane_stacon_g1

0x08f6,	// (0x0003043b) control_bottom_pane_stacon_t1_ParamLimits

0x08f6,	// (0x0003043b) control_bottom_pane_stacon_t1

0xcf25,	// (0x0003ca6a) grid_app_pane_ParamLimits

0xcf25,	// (0x0003ca6a) grid_app_pane

0xcf5d,	// (0x0003caa2) scroll_pane_cp15_ParamLimits

0xcf5d,	// (0x0003caa2) scroll_pane_cp15

0xcf76,	// (0x0003cabb) cell_app_pane_ParamLimits

0xcf76,	// (0x0003cabb) cell_app_pane

0xcfbb,	// (0x0003cb00) cell_app_pane_g1_ParamLimits

0xcfbb,	// (0x0003cb00) cell_app_pane_g1

0x3d05,	// (0x0003384a) cell_app_pane_g2_ParamLimits

0x3d05,	// (0x0003384a) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0003f229) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0003f229) cell_app_pane_g

0xcfdb,	// (0x0003cb20) cell_app_pane_t1_ParamLimits

0xcfdb,	// (0x0003cb20) cell_app_pane_t1

0x3d28,	// (0x0003386d) grid_highlight_pane_ParamLimits

0x3d28,	// (0x0003386d) grid_highlight_pane

0x3929,	// (0x0003346e) cell_highlight_pane_g1

0x3931,	// (0x00033476) cell_highlight_pane_g2

0x3939,	// (0x0003347e) cell_highlight_pane_g3

0x3941,	// (0x00033486) cell_highlight_pane_g4

0x3949,	// (0x0003348e) cell_highlight_pane_g5

0x3951,	// (0x00033496) cell_highlight_pane_g6

0x3959,	// (0x0003349e) cell_highlight_pane_g7

0x3961,	// (0x000334a6) cell_highlight_pane_g8

0x3969,	// (0x000334ae) cell_highlight_pane_g9

0x2935,	// (0x0003247a) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0003f1d7) cell_highlight_pane_g

0x3d39,	// (0x0003387e) bg_scroll_pane

0x0940,	// (0x00030485) scroll_handle_pane

0x3d80,	// (0x000338c5) scroll_bg_pane_g1

0x3d95,	// (0x000338da) scroll_bg_pane_g2

0x3dad,	// (0x000338f2) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003f22e) scroll_bg_pane_g

0x3dc2,	// (0x00033907) scroll_handle_focus_pane_ParamLimits

0x3dc2,	// (0x00033907) scroll_handle_focus_pane

0x3d80,	// (0x000338c5) scroll_handle_pane_g1

0x3dcf,	// (0x00033914) scroll_handle_pane_g2

0x3dad,	// (0x000338f2) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0003f235) scroll_handle_pane_g

0x397a,	// (0x000334bf) bg_popup_sub_pane_cp21_ParamLimits

0x397a,	// (0x000334bf) bg_popup_sub_pane_cp21

0x3de3,	// (0x00033928) popup_fep_japan_predictive_window_t1_ParamLimits

0x3de3,	// (0x00033928) popup_fep_japan_predictive_window_t1

0x3dfd,	// (0x00033942) popup_fep_japan_predictive_window_t2_ParamLimits

0x3dfd,	// (0x00033942) popup_fep_japan_predictive_window_t2

0x3e30,	// (0x00033975) popup_fep_japan_predictive_window_t3_ParamLimits

0x3e30,	// (0x00033975) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003f23c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003f23c) popup_fep_japan_predictive_window_t

0x293f,	// (0x00032484) bg_popup_sub_pane_cp23

0x3e67,	// (0x000339ac) listscroll_japin_cand_pane

0x3e6f,	// (0x000339b4) popup_fep_japan_candidate_window_t1

0x3e7d,	// (0x000339c2) candidate_pane_ParamLimits

0x3e7d,	// (0x000339c2) candidate_pane

0x3e8f,	// (0x000339d4) scroll_pane_cp30

0x3e97,	// (0x000339dc) list_single_popup_jap_candidate_pane_ParamLimits

0x3e97,	// (0x000339dc) list_single_popup_jap_candidate_pane

0x293f,	// (0x00032484) list_highlight_pane_cp30

0x3eac,	// (0x000339f1) list_single_popup_jap_candidate_pane_t1

0x3ebb,	// (0x00033a00) level_1_signal

0x3ecd,	// (0x00033a12) level_2_signal

0x3ee0,	// (0x00033a25) level_3_signal

0x3ef3,	// (0x00033a38) level_4_signal

0x3f06,	// (0x00033a4b) level_5_signal

0x3f19,	// (0x00033a5e) level_6_signal

0x3f2c,	// (0x00033a71) level_7_signal

0x3ebb,	// (0x00033a00) level_1_battery

0x3ecd,	// (0x00033a12) level_2_battery

0x3ee0,	// (0x00033a25) level_3_battery

0x3ef3,	// (0x00033a38) level_4_battery

0x3f06,	// (0x00033a4b) level_5_battery

0x3f19,	// (0x00033a5e) level_6_battery

0x3f2c,	// (0x00033a71) level_7_battery

0x3f57,	// (0x00033a9c) list_menu_pane_ParamLimits

0x3f57,	// (0x00033a9c) list_menu_pane

0x3f6d,	// (0x00033ab2) scroll_pane_cp25_ParamLimits

0x3f6d,	// (0x00033ab2) scroll_pane_cp25

0x3f86,	// (0x00033acb) list_double2_graphic_pane_cp2_ParamLimits

0x3f86,	// (0x00033acb) list_double2_graphic_pane_cp2

0x3f86,	// (0x00033acb) list_double2_large_graphic_pane_cp2_ParamLimits

0x3f86,	// (0x00033acb) list_double2_large_graphic_pane_cp2

0x3f86,	// (0x00033acb) list_double2_pane_cp2_ParamLimits

0x3f86,	// (0x00033acb) list_double2_pane_cp2

0x3f86,	// (0x00033acb) list_double_graphic_pane_cp2_ParamLimits

0x3f86,	// (0x00033acb) list_double_graphic_pane_cp2

0x3f86,	// (0x00033acb) list_double_large_graphic_pane_cp2_ParamLimits

0x3f86,	// (0x00033acb) list_double_large_graphic_pane_cp2

0x3f86,	// (0x00033acb) list_double_number_pane_cp2_ParamLimits

0x3f86,	// (0x00033acb) list_double_number_pane_cp2

0x3f86,	// (0x00033acb) list_double_pane_cp2_ParamLimits

0x3f86,	// (0x00033acb) list_double_pane_cp2

0xd003,	// (0x0003cb48) list_single_2graphic_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_2graphic_pane_cp2

0xd003,	// (0x0003cb48) list_single_graphic_heading_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_graphic_heading_pane_cp2

0xd003,	// (0x0003cb48) list_single_graphic_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_graphic_pane_cp2

0xd003,	// (0x0003cb48) list_single_heading_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_heading_pane_cp2

0x3fc3,	// (0x00033b08) list_single_large_graphic_pane_cp2_ParamLimits

0x3fc3,	// (0x00033b08) list_single_large_graphic_pane_cp2

0xd003,	// (0x0003cb48) list_single_number_heading_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_number_heading_pane_cp2

0xd003,	// (0x0003cb48) list_single_number_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_number_pane_cp2

0xd003,	// (0x0003cb48) list_single_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_pane_cp2

0x403f,	// (0x00033b84) bg_popup_sub_pane_cp22

0x09f2,	// (0x00030537) popup_side_volume_key_window_g1

0x0a1c,	// (0x00030561) popup_side_volume_key_window_t1

0x0a38,	// (0x0003057d) volume_small_pane_cp1

0x2c9a,	// (0x000327df) bg_popup_sub_pane_cp24_ParamLimits

0x2c9a,	// (0x000327df) bg_popup_sub_pane_cp24

0x4055,	// (0x00033b9a) fep_china_uni_candidate_pane_ParamLimits

0x4055,	// (0x00033b9a) fep_china_uni_candidate_pane

0x4069,	// (0x00033bae) fep_china_uni_entry_pane

0x4079,	// (0x00033bbe) popup_fep_china_uni_window_g1

0x4095,	// (0x00033bda) fep_china_uni_entry_pane_g1

0x409d,	// (0x00033be2) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0003f26d) fep_china_uni_entry_pane_g

0x40a5,	// (0x00033bea) fep_entry_item_pane

0x40af,	// (0x00033bf4) fep_candidate_item_pane

0x40b7,	// (0x00033bfc) fep_china_uni_candidate_pane_g1

0x40bf,	// (0x00033c04) fep_china_uni_candidate_pane_g2

0x40c7,	// (0x00033c0c) fep_china_uni_candidate_pane_g3

0x40cf,	// (0x00033c14) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0003f272) fep_china_uni_candidate_pane_g

0x2935,	// (0x0003247a) fep_entry_item_pane_g1

0x40d7,	// (0x00033c1c) fep_entry_item_pane_t1_ParamLimits

0x40d7,	// (0x00033c1c) fep_entry_item_pane_t1

0x40ed,	// (0x00033c32) fep_candidate_item_pane_t1_ParamLimits

0x40ed,	// (0x00033c32) fep_candidate_item_pane_t1

0x4102,	// (0x00033c47) fep_candidate_item_pane_t2_ParamLimits

0x4102,	// (0x00033c47) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0003f27b) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0003f27b) fep_candidate_item_pane_t

0x2a1f,	// (0x00032564) list_highlight_pane_cp31_ParamLimits

0x2a1f,	// (0x00032564) list_highlight_pane_cp31

0x4114,	// (0x00033c59) level_1_signal_lsc

0x411d,	// (0x00033c62) level_2_signal_lsc

0x4126,	// (0x00033c6b) level_3_signal_lsc

0x412f,	// (0x00033c74) level_4_signal_lsc

0x4138,	// (0x00033c7d) level_5_signal_lsc

0x4141,	// (0x00033c86) level_6_signal_lsc

0x414a,	// (0x00033c8f) level_7_signal_lsc

0x414a,	// (0x00033c8f) level_1_battery_lsc

0x4153,	// (0x00033c98) level_2_battery_lsc

0x415c,	// (0x00033ca1) level_3_battery_lsc

0x4165,	// (0x00033caa) level_4_battery_lsc

0x416e,	// (0x00033cb3) level_5_battery_lsc

0x4177,	// (0x00033cbc) level_6_battery_lsc

0x4114,	// (0x00033c59) level_7_battery_lsc

0x4180,	// (0x00033cc5) scroll_handle_focus_pane_g1

0x4189,	// (0x00033cce) scroll_handle_focus_pane_g2

0x4192,	// (0x00033cd7) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0003f280) scroll_handle_focus_pane_g

0xba13,	// (0x0003b558) list_single_2graphic_pane_g1_ParamLimits

0xba13,	// (0x0003b558) list_single_2graphic_pane_g1

0xb4e7,	// (0x0003b02c) list_single_2graphic_pane_g2_ParamLimits

0xb4e7,	// (0x0003b02c) list_single_2graphic_pane_g2

0x1419,	// (0x00030f5e) list_single_2graphic_pane_g3_ParamLimits

0x1419,	// (0x00030f5e) list_single_2graphic_pane_g3

0xba1f,	// (0x0003b564) list_single_2graphic_pane_g4_ParamLimits

0xba1f,	// (0x0003b564) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0003f287) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0003f287) list_single_2graphic_pane_g

0xba2b,	// (0x0003b570) list_single_2graphic_pane_t1_ParamLimits

0xba2b,	// (0x0003b570) list_single_2graphic_pane_t1

0xba59,	// (0x0003b59e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xba59,	// (0x0003b59e) list_double2_graphic_large_graphic_pane_g1

0xb552,	// (0x0003b097) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb552,	// (0x0003b097) list_double2_graphic_large_graphic_pane_g2

0xb563,	// (0x0003b0a8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb563,	// (0x0003b0a8) list_double2_graphic_large_graphic_pane_g3

0xba6b,	// (0x0003b5b0) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xba6b,	// (0x0003b5b0) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0003f290) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0003f290) list_double2_graphic_large_graphic_pane_g

0xba77,	// (0x0003b5bc) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xba77,	// (0x0003b5bc) list_double2_graphic_large_graphic_pane_t1

0xba8d,	// (0x0003b5d2) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xba8d,	// (0x0003b5d2) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0003f299) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0003f299) list_double2_graphic_large_graphic_pane_t

0x42da,	// (0x00033e1f) popup_fast_swap_window_ParamLimits

0x42da,	// (0x00033e1f) popup_fast_swap_window

0x42f6,	// (0x00033e3b) popup_side_volume_key_window

0x4312,	// (0x00033e57) stacon_top_pane

0x431c,	// (0x00033e61) status_pane_ParamLimits

0x431c,	// (0x00033e61) status_pane

0x4312,	// (0x00033e57) status_small_pane

0x293f,	// (0x00032484) control_pane

0x293f,	// (0x00032484) stacon_bottom_pane

0x38b1,	// (0x000333f6) scroll_pane_cp121

0x38a8,	// (0x000333ed) set_content_pane

0x41b6,	// (0x00033cfb) bg_active_tab_pane_g1_cp1

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp1

0x41bf,	// (0x00033d04) bg_active_tab_pane_g3_cp1

0x41b6,	// (0x00033cfb) bg_passive_tab_pane_g1_cp1

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp1

0x41bf,	// (0x00033d04) bg_passive_tab_pane_g3_cp1

0xd091,	// (0x0003cbd6) bg_active_tab_pane_g1_cp2

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp2

0xd09a,	// (0x0003cbdf) bg_active_tab_pane_g3_cp2

0xd091,	// (0x0003cbd6) bg_passive_tab_pane_g1_cp2

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp2

0xd09a,	// (0x0003cbdf) bg_passive_tab_pane_g3_cp2

0xd0a3,	// (0x0003cbe8) bg_active_tab_pane_g1_cp3

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp3

0xd0ac,	// (0x0003cbf1) bg_active_tab_pane_g3_cp3

0xd0a3,	// (0x0003cbe8) bg_passive_tab_pane_g1_cp3

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp3

0xd0ac,	// (0x0003cbf1) bg_passive_tab_pane_g3_cp3

0xd0b5,	// (0x0003cbfa) bg_active_tab_pane_g1_cp4

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp4

0xd0be,	// (0x0003cc03) bg_active_tab_pane_g3_cp4

0xd0b5,	// (0x0003cbfa) bg_passive_tab_pane_g1_cp4

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp4

0xd0be,	// (0x0003cc03) bg_passive_tab_pane_g3_cp4

0x422e,	// (0x00033d73) bg_active_tab_pane_g1_cp5

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp5

0x4237,	// (0x00033d7c) bg_active_tab_pane_g3_cp5

0x422e,	// (0x00033d73) bg_passive_tab_pane_g1_cp5

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp5

0x4237,	// (0x00033d7c) bg_passive_tab_pane_g3_cp5

0x68b3,	// (0x000363f8) list_set_graphic_pane_ParamLimits

0x68b3,	// (0x000363f8) list_set_graphic_pane

0x293f,	// (0x00032484) bg_set_opt_pane_cp4

0xd0c7,	// (0x0003cc0c) list_set_graphic_pane_g1_ParamLimits

0xd0c7,	// (0x0003cc0c) list_set_graphic_pane_g1

0xd0d3,	// (0x0003cc18) list_set_graphic_pane_g2_ParamLimits

0xd0d3,	// (0x0003cc18) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003f29e) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003f29e) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0003f61a) volume_small_pane_cp_g

0xd0f7,	// (0x0003cc3c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd0f7,	// (0x0003cc3c) list_double2_large_graphic_pane_g1_cp2

0xd105,	// (0x0003cc4a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd105,	// (0x0003cc4a) list_double2_large_graphic_pane_g2_cp2

0x42aa,	// (0x00033def) list_double2_large_graphic_pane_g3_cp2

0x42b2,	// (0x00033df7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x42b2,	// (0x00033df7) list_double2_large_graphic_pane_t1_cp2

0x42c8,	// (0x00033e0d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x42c8,	// (0x00033e0d) list_double2_large_graphic_pane_t2_cp2

0xd88e,	// (0x0003d3d3) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd88e,	// (0x0003d3d3) list_double_large_graphic_pane_g1_cp2

0xd8a1,	// (0x0003d3e6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd8a1,	// (0x0003d3e6) list_double_large_graphic_pane_g2_cp2

0x4438,	// (0x00033f7d) list_double_large_graphic_pane_g3_cp2

0x5e9f,	// (0x000359e4) list_double_large_graphic_pane_g4_cp

0x5ea7,	// (0x000359ec) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5ea7,	// (0x000359ec) list_double_large_graphic_pane_t1_cp2

0x5ebe,	// (0x00035a03) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5ebe,	// (0x00035a03) list_double_large_graphic_pane_t2_cp2

0xd116,	// (0x0003cc5b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd116,	// (0x0003cc5b) list_double2_graphic_pane_g1_cp2

0xd124,	// (0x0003cc69) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd124,	// (0x0003cc69) list_double2_graphic_pane_g2_cp2

0xd135,	// (0x0003cc7a) list_double2_graphic_pane_g3_cp2

0x4353,	// (0x00033e98) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4353,	// (0x00033e98) list_double2_graphic_pane_t1_cp2

0x4369,	// (0x00033eae) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4369,	// (0x00033eae) list_double2_graphic_pane_t2_cp2

0x437b,	// (0x00033ec0) list_single_number_heading_pane_g1_cp2_ParamLimits

0x437b,	// (0x00033ec0) list_single_number_heading_pane_g1_cp2

0x4387,	// (0x00033ecc) list_single_number_heading_pane_g2_cp2

0x438f,	// (0x00033ed4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x438f,	// (0x00033ed4) list_single_number_heading_pane_t1_cp2

0xd13f,	// (0x0003cc84) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd13f,	// (0x0003cc84) list_single_number_heading_pane_t2_cp2

0x43b7,	// (0x00033efc) list_single_number_heading_pane_t3_cp2_ParamLimits

0x43b7,	// (0x00033efc) list_single_number_heading_pane_t3_cp2

0x437b,	// (0x00033ec0) list_single_heading_pane_g1_cp2_ParamLimits

0x437b,	// (0x00033ec0) list_single_heading_pane_g1_cp2

0x4387,	// (0x00033ecc) list_single_heading_pane_g2_cp2

0x438f,	// (0x00033ed4) list_single_heading_pane_t1_cp2_ParamLimits

0x438f,	// (0x00033ed4) list_single_heading_pane_t1_cp2

0xd87a,	// (0x0003d3bf) list_single_heading_pane_t2_cp2_ParamLimits

0xd87a,	// (0x0003d3bf) list_single_heading_pane_t2_cp2

0x5bcd,	// (0x00035712) list_double_graphic_pane_g1_cp2_ParamLimits

0x5bcd,	// (0x00035712) list_double_graphic_pane_g1_cp2

0x5bd9,	// (0x0003571e) list_double_graphic_pane_g2_cp2_ParamLimits

0x5bd9,	// (0x0003571e) list_double_graphic_pane_g2_cp2

0x5be8,	// (0x0003572d) list_double_graphic_pane_g3_cp2

0x5bf0,	// (0x00035735) list_double_graphic_pane_t1_cp2_ParamLimits

0x5bf0,	// (0x00035735) list_double_graphic_pane_t1_cp2

0x5c06,	// (0x0003574b) list_double_graphic_pane_t2_cp2_ParamLimits

0x5c06,	// (0x0003574b) list_double_graphic_pane_t2_cp2

0x442c,	// (0x00033f71) list_double_number_pane_g1_cp2_ParamLimits

0x442c,	// (0x00033f71) list_double_number_pane_g1_cp2

0x4438,	// (0x00033f7d) list_double_number_pane_g2_cp2

0xd832,	// (0x0003d377) list_double_number_pane_t1_cp2_ParamLimits

0xd832,	// (0x0003d377) list_double_number_pane_t1_cp2

0x5ba5,	// (0x000356ea) list_double_number_pane_t2_cp2_ParamLimits

0x5ba5,	// (0x000356ea) list_double_number_pane_t2_cp2

0x5bbb,	// (0x00035700) list_double_number_pane_t3_cp2_ParamLimits

0x5bbb,	// (0x00035700) list_double_number_pane_t3_cp2

0xd780,	// (0x0003d2c5) list_single_graphic_pane_g1_cp2_ParamLimits

0xd780,	// (0x0003d2c5) list_single_graphic_pane_g1_cp2

0x4490,	// (0x00033fd5) list_single_graphic_pane_g2_cp2_ParamLimits

0x4490,	// (0x00033fd5) list_single_graphic_pane_g2_cp2

0x449c,	// (0x00033fe1) list_single_graphic_pane_g3_cp2

0x5a50,	// (0x00035595) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a50,	// (0x00035595) list_single_graphic_pane_t1_cp2

0x4490,	// (0x00033fd5) list_single_number_pane_g1_cp2_ParamLimits

0x4490,	// (0x00033fd5) list_single_number_pane_g1_cp2

0x449c,	// (0x00033fe1) list_single_number_pane_g2_cp2

0x5a50,	// (0x00035595) list_single_number_pane_t1_cp2_ParamLimits

0x5a50,	// (0x00035595) list_single_number_pane_t1_cp2

0xd76c,	// (0x0003d2b1) list_single_number_pane_t2_cp2_ParamLimits

0xd76c,	// (0x0003d2b1) list_single_number_pane_t2_cp2

0xd105,	// (0x0003cc4a) list_double2_pane_g1_cp2_ParamLimits

0xd105,	// (0x0003cc4a) list_double2_pane_g1_cp2

0x42aa,	// (0x00033def) list_double2_pane_g2_cp2

0x4404,	// (0x00033f49) list_double2_pane_t1_cp2_ParamLimits

0x4404,	// (0x00033f49) list_double2_pane_t1_cp2

0x441a,	// (0x00033f5f) list_double2_pane_t2_cp2_ParamLimits

0x441a,	// (0x00033f5f) list_double2_pane_t2_cp2

0x442c,	// (0x00033f71) list_double_pane_g1_cp2_ParamLimits

0x442c,	// (0x00033f71) list_double_pane_g1_cp2

0x4438,	// (0x00033f7d) list_double_pane_g2_cp2

0x4440,	// (0x00033f85) list_double_pane_t1_cp2_ParamLimits

0x4440,	// (0x00033f85) list_double_pane_t1_cp2

0x4456,	// (0x00033f9b) list_double_pane_t2_cp2_ParamLimits

0x4456,	// (0x00033f9b) list_double_pane_t2_cp2

0x4480,	// (0x00033fc5) list_single_pane_cp2_g3

0x4490,	// (0x00033fd5) list_single_pane_g1_cp2_ParamLimits

0x4490,	// (0x00033fd5) list_single_pane_g1_cp2

0x449c,	// (0x00033fe1) list_single_pane_g2_cp2

0x44a4,	// (0x00033fe9) list_single_pane_t1_cp2_ParamLimits

0x44a4,	// (0x00033fe9) list_single_pane_t1_cp2

0xd16b,	// (0x0003ccb0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd16b,	// (0x0003ccb0) list_single_large_graphic_pane_g1_cp2

0x44c8,	// (0x0003400d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x44c8,	// (0x0003400d) list_single_large_graphic_pane_g2_cp2

0x44d4,	// (0x00034019) list_single_large_graphic_pane_g3_cp2

0x44dc,	// (0x00034021) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x44dc,	// (0x00034021) list_single_large_graphic_pane_g4_cp1

0x44f6,	// (0x0003403b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x44f6,	// (0x0003403b) list_single_large_graphic_pane_t1_cp2

0x5a1c,	// (0x00035561) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5a1c,	// (0x00035561) list_single_graphic_heading_pane_g1_cp2

0xd747,	// (0x0003d28c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd747,	// (0x0003d28c) list_single_graphic_heading_pane_g4_cp2

0x449c,	// (0x00033fe1) list_single_graphic_heading_pane_g5_cp2

0x5a28,	// (0x0003556d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5a28,	// (0x0003556d) list_single_graphic_heading_pane_t1_cp2

0xd758,	// (0x0003d29d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd758,	// (0x0003d29d) list_single_graphic_heading_pane_t2_cp2

0x59dd,	// (0x00035522) list_single_2graphic_pane_g1_cp2_ParamLimits

0x59dd,	// (0x00035522) list_single_2graphic_pane_g1_cp2

0xd747,	// (0x0003d28c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd747,	// (0x0003d28c) list_single_2graphic_pane_g2_cp2

0x449c,	// (0x00033fe1) list_single_2graphic_pane_g3_cp2

0x59fa,	// (0x0003553f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x59fa,	// (0x0003553f) list_single_2graphic_pane_g4_cp2

0x5a06,	// (0x0003554b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5a06,	// (0x0003554b) list_single_2graphic_pane_t1_cp2

0x2935,	// (0x0003247a) list_highlight_pane_g10_cp1

0x55a9,	// (0x000350ee) list_highlight_pane_g1_cp1

0x55b1,	// (0x000350f6) list_highlight_pane_g2_cp1

0x55b9,	// (0x000350fe) list_highlight_pane_g3_cp1

0x55c1,	// (0x00035106) list_highlight_pane_g4_cp1

0x55c9,	// (0x0003510e) list_highlight_pane_g5_cp1

0x55d1,	// (0x00035116) list_highlight_pane_g6_cp1

0x55d9,	// (0x0003511e) list_highlight_pane_g7_cp1

0x55e1,	// (0x00035126) list_highlight_pane_g8_cp1

0x55e9,	// (0x0003512e) list_highlight_pane_g9_cp1

0xd70d,	// (0x0003d252) form_field_slider_pane_t3

0xd71b,	// (0x0003d260) form_field_slider_pane_t4

0x54e5,	// (0x0003502a) slider_form_pane_ParamLimits

0x54e5,	// (0x0003502a) slider_form_pane

0x293f,	// (0x00032484) control_abbreviations

0x293f,	// (0x00032484) control_conventions

0x293f,	// (0x00032484) control_definitions

0x293f,	// (0x00032484) format_table_attribute

0x5ccf,	// (0x00035814) bg_popup_preview_window_pane_g9

0x293f,	// (0x00032484) format_table_data2

0x293f,	// (0x00032484) format_table_data3

0x293f,	// (0x00032484) format_table_data_example

0x0008,

0x293f,	// (0x00032484) intro_purpose

0xf8f0,	// (0x0003f435) bg_popup_preview_window_pane_g

0x293f,	// (0x00032484) texts_category

0x293f,	// (0x00032484) texts_graphics

0x450c,	// (0x00034051) text_digital

0x451b,	// (0x00034060) text_primary

0x452a,	// (0x0003406f) text_primary_small

0x4539,	// (0x0003407e) text_secondary

0x4548,	// (0x0003408d) text_title

0x6401,	// (0x00035f46) bg_passive_tab_pane_g1_cp3_srt

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp3_srt

0x640a,	// (0x00035f4f) bg_passive_tab_pane_g3_cp3_srt

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp3_srt_ParamLimits

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp3_srt

0x6413,	// (0x00035f58) tabs_4_active_pane_srt_g1

0xdb17,	// (0x0003d65c) tabs_4_active_pane_srt_t1_ParamLimits

0xdb17,	// (0x0003d65c) tabs_4_active_pane_srt_t1

0x6401,	// (0x00035f46) bg_active_tab_pane_g1_cp3_copy1

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp3_copy1

0x640a,	// (0x00035f4f) bg_active_tab_pane_g3_cp3_copy1

0x2a1f,	// (0x00032564) tabs_2_long_active_pane_srt_ParamLimits

0x2a1f,	// (0x00032564) tabs_2_long_active_pane_srt

0x2a1f,	// (0x00032564) tabs_2_long_passive_pane_srt_ParamLimits

0x2a1f,	// (0x00032564) tabs_2_long_passive_pane_srt

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp4_srt

0x6113,	// (0x00035c58) bg_passive_tab_pane_g1_cp4_srt

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp4_srt

0x611c,	// (0x00035c61) bg_passive_tab_pane_g3_cp4_srt

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp4_srt_ParamLimits

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp4_srt

0xd941,	// (0x0003d486) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd941,	// (0x0003d486) tabs_2_long_active_pane_srt_t1

0x6113,	// (0x00035c58) bg_active_tab_pane_g1_cp4_srt

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp4_srt

0x611c,	// (0x00035c61) bg_active_tab_pane_g3_cp4_srt

0x2c9a,	// (0x000327df) tabs_3_long_active_pane_srt_ParamLimits

0x2c9a,	// (0x000327df) tabs_3_long_active_pane_srt

0x2c9a,	// (0x000327df) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2c9a,	// (0x000327df) tabs_3_long_passive_pane_cp_srt

0x2c9a,	// (0x000327df) tabs_3_long_passive_pane_srt_ParamLimits

0x2c9a,	// (0x000327df) tabs_3_long_passive_pane_srt

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp5_srt

0x422e,	// (0x00033d73) bg_passive_tab_pane_g1_cp5_srt

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp5_srt

0x4237,	// (0x00033d7c) bg_passive_tab_pane_g3_cp5_srt

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp5_srt_ParamLimits

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp5_srt

0xd92b,	// (0x0003d470) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd92b,	// (0x0003d470) tabs_3_long_active_pane_srt_t1

0x422e,	// (0x00033d73) bg_active_tab_pane_g1_cp5_srt

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp5_srt

0x4237,	// (0x00033d7c) bg_active_tab_pane_g3_cp5_srt

0x60f3,	// (0x00035c38) navi_text_pane_srt_t1

0x60eb,	// (0x00035c30) navi_icon_pane_srt_g1

0x470f,	// (0x00034254) midp_editing_number_pane_srt

0x4557,	// (0x0003409c) midp_ticker_pane_srt

0x4717,	// (0x0003425c) midp_ticker_pane_srt_g1

0x471f,	// (0x00034264) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003f2bd) midp_ticker_pane_srt_g

0x4727,	// (0x0003426c) midp_ticker_pane_srt_t1

0x60dc,	// (0x00035c21) midp_editing_number_pane_t1_copy1

0x4897,	// (0x000343dc) listscroll_midp_pane

0x4897,	// (0x000343dc) midp_form_pane

0x45c1,	// (0x00034106) midp_info_popup_window_ParamLimits

0x45c1,	// (0x00034106) midp_info_popup_window

0x397a,	// (0x000334bf) bg_popup_sub_pane_cp50_ParamLimits

0x397a,	// (0x000334bf) bg_popup_sub_pane_cp50

0x51e1,	// (0x00034d26) listscroll_midp_info_pane_ParamLimits

0x51e1,	// (0x00034d26) listscroll_midp_info_pane

0x51c9,	// (0x00034d0e) listscroll_form_midp_pane_ParamLimits

0x51c9,	// (0x00034d0e) listscroll_form_midp_pane

0x51d5,	// (0x00034d1a) scroll_bar_cp050

0xd701,	// (0x0003d246) list_midp_pane

0x6e93,	// (0x000369d8) signal_pane_g2_cp

0x50e3,	// (0x00034c28) listscroll_midp_info_pane_t1_ParamLimits

0x50e3,	// (0x00034c28) listscroll_midp_info_pane_t1

0x50fb,	// (0x00034c40) listscroll_midp_info_pane_t2_ParamLimits

0x50fb,	// (0x00034c40) listscroll_midp_info_pane_t2

0x5139,	// (0x00034c7e) listscroll_midp_info_pane_t3_ParamLimits

0x5139,	// (0x00034c7e) listscroll_midp_info_pane_t3

0x5173,	// (0x00034cb8) listscroll_midp_info_pane_t4_ParamLimits

0x5173,	// (0x00034cb8) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0003f370) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0003f370) listscroll_midp_info_pane_t

0x3a3e,	// (0x00033583) scroll_pane_cp21

0x5081,	// (0x00034bc6) form_midp_field_choice_group_pane

0x508a,	// (0x00034bcf) form_midp_field_text_pane

0x50c9,	// (0x00034c0e) form_midp_field_time_pane

0x50d1,	// (0x00034c16) form_midp_gauge_slider_pane

0x50da,	// (0x00034c1f) form_midp_gauge_wait_pane

0x293f,	// (0x00032484) form_midp_image_pane

0xc338,	// (0x0003be7d) list_single_midp_pane_ParamLimits

0xc338,	// (0x0003be7d) list_single_midp_pane

0xd6df,	// (0x0003d224) form_midp_field_text_pane_t1

0x4e03,	// (0x00034948) input_focus_pane_cp050

0x5070,	// (0x00034bb5) list_midp_form_text_pane

0x5008,	// (0x00034b4d) form_midp_field_choice_group_pane_t1

0x5016,	// (0x00034b5b) input_focus_pane_cp051

0x502a,	// (0x00034b6f) list_midp_choice_pane

0x293f,	// (0x00032484) status_idle_pane

0x4fec,	// (0x00034b31) form_midp_field_time_pane_t1

0x2935,	// (0x0003247a) wait_anim_pane_g2_copy1

0x4ffa,	// (0x00034b3f) form_midp_field_time_pane_t2

0x0001,

0x466f,	// (0x000341b4) aid_navinavi_width_2_pane

0xf826,	// (0x0003f36b) form_midp_field_time_pane_t

0x293f,	// (0x00032484) input_focus_pane_cp052

0x293f,	// (0x00032484) bg_input_focus_pane_cp040

0x4fac,	// (0x00034af1) form_midp_gauge_slider_pane_t1

0x4fba,	// (0x00034aff) form_midp_gauge_slider_pane_t2

0xd6c3,	// (0x0003d208) form_midp_gauge_slider_pane_t3

0xd6d1,	// (0x0003d216) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0003f362) form_midp_gauge_slider_pane_t

0x4fe4,	// (0x00034b29) form_midp_slider_pane

0x2a1f,	// (0x00032564) bg_input_focus_pane_cp041_ParamLimits

0x2a1f,	// (0x00032564) bg_input_focus_pane_cp041

0x4f79,	// (0x00034abe) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f79,	// (0x00034abe) form_midp_gauge_wait_pane_t1

0x4f8b,	// (0x00034ad0) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f8b,	// (0x00034ad0) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0003f35d) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0003f35d) form_midp_gauge_wait_pane_t

0x4f9d,	// (0x00034ae2) form_midp_wait_pane_ParamLimits

0x4f9d,	// (0x00034ae2) form_midp_wait_pane

0x4f43,	// (0x00034a88) form_midp_image_pane_g1

0x4f4c,	// (0x00034a91) form_midp_image_pane_t1

0x4f5b,	// (0x00034aa0) form_midp_image_pane_t2

0x4f6a,	// (0x00034aaf) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0003f356) form_midp_image_pane_t

0x4f3a,	// (0x00034a7f) list_single_midp_pane_g1

0x15f1,	// (0x00031136) list_single_midp_pane_t1

0xd6ae,	// (0x0003d1f3) list_midp_form_item_pane_ParamLimits

0xd6ae,	// (0x0003d1f3) list_midp_form_item_pane

0x4617,	// (0x0003415c) list_midp_form_item_pane_t1

0x4626,	// (0x0003416b) midp_ticker_pane_g1

0x4632,	// (0x00034177) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0003f2a3) midp_ticker_pane_g

0x463e,	// (0x00034183) midp_ticker_pane_t1

0x632d,	// (0x00035e72) midp_editing_number_pane_t1

0x630b,	// (0x00035e50) midp_editing_number_pane

0x631a,	// (0x00035e5f) midp_ticker_pane

0x60cc,	// (0x00035c11) ai_message_heading_pane

0x293f,	// (0x00032484) bg_popup_window_pane_cp14

0x60d4,	// (0x00035c19) listscroll_ai_message_pane

0x6056,	// (0x00035b9b) ai_message_heading_pane_g1_ParamLimits

0x6056,	// (0x00035b9b) ai_message_heading_pane_g1

0x6062,	// (0x00035ba7) ai_message_heading_pane_g2_ParamLimits

0x6062,	// (0x00035ba7) ai_message_heading_pane_g2

0x606e,	// (0x00035bb3) ai_message_heading_pane_g3_ParamLimits

0x606e,	// (0x00035bb3) ai_message_heading_pane_g3

0x607a,	// (0x00035bbf) ai_message_heading_pane_g4_ParamLimits

0x607a,	// (0x00035bbf) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0003f497) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0003f497) ai_message_heading_pane_g

0x6086,	// (0x00035bcb) ai_message_heading_pane_t1_ParamLimits

0x6086,	// (0x00035bcb) ai_message_heading_pane_t1

0x60a0,	// (0x00035be5) ai_message_heading_pane_t2_ParamLimits

0x60a0,	// (0x00035be5) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0003f4a0) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0003f4a0) ai_message_heading_pane_t

0x60b2,	// (0x00035bf7) bg_popup_heading_pane_cp1_ParamLimits

0x60b2,	// (0x00035bf7) bg_popup_heading_pane_cp1

0x6044,	// (0x00035b89) list_ai_message_pane_ParamLimits

0x6044,	// (0x00035b89) list_ai_message_pane

0x3a3e,	// (0x00033583) scroll_pane_cp10

0x5fe0,	// (0x00035b25) list_ai_message_pane_g1

0x5fe8,	// (0x00035b2d) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0003f474) list_ai_message_pane_g

0x5ff0,	// (0x00035b35) list_ai_message_pane_t1_ParamLimits

0x5ff0,	// (0x00035b35) list_ai_message_pane_t1

0x6005,	// (0x00035b4a) list_ai_message_pane_t2_ParamLimits

0x6005,	// (0x00035b4a) list_ai_message_pane_t2

0x601a,	// (0x00035b5f) list_ai_message_pane_t3_ParamLimits

0x601a,	// (0x00035b5f) list_ai_message_pane_t3

0x602f,	// (0x00035b74) list_ai_message_pane_t4_ParamLimits

0x602f,	// (0x00035b74) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0003f479) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0003f479) list_ai_message_pane_t

0xd90a,	// (0x0003d44f) cell_ai_soft_ind_pane_ParamLimits

0xd90a,	// (0x0003d44f) cell_ai_soft_ind_pane

0x4650,	// (0x00034195) cell_ai_soft_ind_pane_g1_ParamLimits

0x4650,	// (0x00034195) cell_ai_soft_ind_pane_g1

0x293f,	// (0x00032484) grid_highlight_cp1

0x465d,	// (0x000341a2) text_secondary_cp56_ParamLimits

0x465d,	// (0x000341a2) text_secondary_cp56

0x5fa0,	// (0x00035ae5) example_general_pane_ParamLimits

0x5fa0,	// (0x00035ae5) example_general_pane

0x5fac,	// (0x00035af1) example_parent_pane_g1_ParamLimits

0x5fac,	// (0x00035af1) example_parent_pane_g1

0x5fb8,	// (0x00035afd) example_parent_pane_t1_ParamLimits

0x5fb8,	// (0x00035afd) example_parent_pane_t1

0xbfe2,	// (0x0003bb27) popup_preview_text_window_ParamLimits

0xbfe2,	// (0x0003bb27) popup_preview_text_window

0x4488,	// (0x00033fcd) list_single_pane_cp2_g4

0x2d50,	// (0x00032895) bg_popup_preview_window_pane_ParamLimits

0x2d50,	// (0x00032895) bg_popup_preview_window_pane

0x5cd7,	// (0x0003581c) popup_preview_text_window_t1_ParamLimits

0x5cd7,	// (0x0003581c) popup_preview_text_window_t1

0x5cf5,	// (0x0003583a) popup_preview_text_window_t2_ParamLimits

0x5cf5,	// (0x0003583a) popup_preview_text_window_t2

0x5d3e,	// (0x00035883) popup_preview_text_window_t3_ParamLimits

0x5d3e,	// (0x00035883) popup_preview_text_window_t3

0x5d83,	// (0x000358c8) popup_preview_text_window_t4_ParamLimits

0x5d83,	// (0x000358c8) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0003f448) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0003f448) popup_preview_text_window_t

0x5e01,	// (0x00035946) scroll_pane_cp11

0x4d8f,	// (0x000348d4) bg_popup_preview_window_pane_g1

0x5c97,	// (0x000357dc) bg_popup_preview_window_pane_g2

0x5c9f,	// (0x000357e4) bg_popup_preview_window_pane_g3

0x5ca7,	// (0x000357ec) bg_popup_preview_window_pane_g4

0x5caf,	// (0x000357f4) bg_popup_preview_window_pane_g5

0x5cb7,	// (0x000357fc) bg_popup_preview_window_pane_g6

0x5cbf,	// (0x00035804) bg_popup_preview_window_pane_g7

0x5cc7,	// (0x0003580c) bg_popup_preview_window_pane_g8

0xf2c0,	// (0x0003ee05) aid_popup_width_pane

0xbf5e,	// (0x0003baa3) popup_midp_note_alarm_window_ParamLimits

0xbf5e,	// (0x0003baa3) popup_midp_note_alarm_window

0x38c2,	// (0x00033407) data_form_pane_ParamLimits

0xb8fc,	// (0x0003b441) form_field_data_pane_g1

0xb906,	// (0x0003b44b) form_field_data_pane_t1_ParamLimits

0x38ce,	// (0x00033413) input_focus_pane_ParamLimits

0x060e,	// (0x00030153) data_form_wide_pane_ParamLimits

0x061f,	// (0x00030164) form_field_data_wide_pane_g1

0x062b,	// (0x00030170) form_field_data_wide_pane_t1_ParamLimits

0x363f,	// (0x00033184) input_focus_pane_cp6_ParamLimits

0xced8,	// (0x0003ca1d) input_popup_find_pane_g1_ParamLimits

0xced8,	// (0x0003ca1d) input_popup_find_pane_g1

0x08a1,	// (0x000303e6) aid_navi_side_left_pane

0x08b6,	// (0x000303fb) aid_navi_side_right_pane

0x56a4,	// (0x000351e9) bg_popup_window_pane_cp30_ParamLimits

0x56a4,	// (0x000351e9) bg_popup_window_pane_cp30

0x572a,	// (0x0003526f) popup_midp_note_alarm_window_g1_ParamLimits

0x572a,	// (0x0003526f) popup_midp_note_alarm_window_g1

0x575a,	// (0x0003529f) popup_midp_note_alarm_window_t1_ParamLimits

0x575a,	// (0x0003529f) popup_midp_note_alarm_window_t1

0x57fb,	// (0x00035340) popup_midp_note_alarm_window_t2_ParamLimits

0x57fb,	// (0x00035340) popup_midp_note_alarm_window_t2

0x58a9,	// (0x000353ee) popup_midp_note_alarm_window_t3_ParamLimits

0x58a9,	// (0x000353ee) popup_midp_note_alarm_window_t3

0x58db,	// (0x00035420) popup_midp_note_alarm_window_t4_ParamLimits

0x58db,	// (0x00035420) popup_midp_note_alarm_window_t4

0x5901,	// (0x00035446) popup_midp_note_alarm_window_t5_ParamLimits

0x5901,	// (0x00035446) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0003f3e5) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0003f3e5) popup_midp_note_alarm_window_t

0x59ad,	// (0x000354f2) wait_bar_pane_cp1_ParamLimits

0x59ad,	// (0x000354f2) wait_bar_pane_cp1

0x293f,	// (0x00032484) wait_anim_pane_copy1

0x293f,	// (0x00032484) wait_border_pane_copy1

0x538a,	// (0x00034ecf) wait_border_pane_g1_copy1

0x0645,	// (0x0003018a) form_field_popup_pane_g1

0xb920,	// (0x0003b465) form_field_popup_pane_t1_ParamLimits

0x38ce,	// (0x00033413) input_focus_pane_cp7_ParamLimits

0x38fc,	// (0x00033441) list_form_pane_ParamLimits

0x0665,	// (0x000301aa) form_field_popup_wide_pane_g1

0x066d,	// (0x000301b2) form_field_popup_wide_pane_t1_ParamLimits

0x38ce,	// (0x00033413) input_focus_pane_cp8_ParamLimits

0x3908,	// (0x0003344d) list_form_wide_pane_ParamLimits

0x648d,	// (0x00035fd2) aid_size_cell_graphic_pane

0xb99f,	// (0x0003b4e4) data_form_pane_t1_ParamLimits

0xc4ac,	// (0x0003bff1) data_form_wide_pane_t1_ParamLimits

0xd339,	// (0x0003ce7e) bg_status_flat_pane

0xb3b9,	// (0x0003aefe) title_pane_t1_ParamLimits

0x29e7,	// (0x0003252c) title_pane_t2_ParamLimits

0x2a0d,	// (0x00032552) title_pane_t3_ParamLimits

0xf55d,	// (0x0003f0a2) title_pane_t_ParamLimits

0x3ebb,	// (0x00033a00) level_1_signal_ParamLimits

0x3ecd,	// (0x00033a12) level_2_signal_ParamLimits

0x3ee0,	// (0x00033a25) level_3_signal_ParamLimits

0x3ef3,	// (0x00033a38) level_4_signal_ParamLimits

0x3f06,	// (0x00033a4b) level_5_signal_ParamLimits

0x3f19,	// (0x00033a5e) level_6_signal_ParamLimits

0x3f2c,	// (0x00033a71) level_7_signal_ParamLimits

0x3ebb,	// (0x00033a00) level_1_battery_ParamLimits

0x3ecd,	// (0x00033a12) level_2_battery_ParamLimits

0x3ee0,	// (0x00033a25) level_3_battery_ParamLimits

0x3ef3,	// (0x00033a38) level_4_battery_ParamLimits

0x3f06,	// (0x00033a4b) level_5_battery_ParamLimits

0x3f19,	// (0x00033a5e) level_6_battery_ParamLimits

0x3f2c,	// (0x00033a71) level_7_battery_ParamLimits

0x55a9,	// (0x000350ee) bg_status_flat_pane_g1

0x55b1,	// (0x000350f6) bg_status_flat_pane_g2

0x55b9,	// (0x000350fe) bg_status_flat_pane_g3

0x55c1,	// (0x00035106) bg_status_flat_pane_g4

0x55c9,	// (0x0003510e) bg_status_flat_pane_g5

0x55d1,	// (0x00035116) bg_status_flat_pane_g6

0x55d9,	// (0x0003511e) bg_status_flat_pane_g7

0xb44d,	// (0x0003af92) tabs_3_active_pane_t1_ParamLimits

0xb44d,	// (0x0003af92) tabs_3_passive_pane_t1_ParamLimits

0xb467,	// (0x0003afac) tabs_4_active_pane_t1_ParamLimits

0xb467,	// (0x0003afac) tabs_4_1_passive_pane_t1_ParamLimits

0xceee,	// (0x0003ca33) tabs_2_active_pane_t1_ParamLimits

0xceee,	// (0x0003ca33) tabs_2_passive_pane_t1_ParamLimits

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp4_ParamLimits

0xcf00,	// (0x0003ca45) tabs_2_long_active_pane_t1_ParamLimits

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp4_ParamLimits

0x14c8,	// (0x0003100d) list_single_midp_graphic_pane_t1_ParamLimits

0x2a1f,	// (0x00032564) bg_active_tab_pane_cp5_ParamLimits

0xcf13,	// (0x0003ca58) tabs_3_long_active_pane_t1_ParamLimits

0x4897,	// (0x000343dc) bg_passive_tab_pane_cp5_ParamLimits

0x14c8,	// (0x0003100d) list_single_midp_graphic_pane_t1

0xd339,	// (0x0003ce7e) bg_status_flat_pane_ParamLimits

0x4a2d,	// (0x00034572) indicator_pane_cp2_ParamLimits

0x4a2d,	// (0x00034572) indicator_pane_cp2

0xd4b1,	// (0x0003cff6) navi_pane_srt_ParamLimits

0xd4b1,	// (0x0003cff6) navi_pane_srt

0x4b76,	// (0x000346bb) popup_clock_digital_analogue_window_cp1

0x2afc,	// (0x00032641) indicator_pane_t1

0x4557,	// (0x0003409c) copy_highlight_pane

0x4557,	// (0x0003409c) cursor_graphics_pane

0x4557,	// (0x0003409c) graphic_within_text_pane

0x4557,	// (0x0003409c) link_highlight_pane

0x5dc4,	// (0x00035909) popup_preview_text_window_t5_ParamLimits

0x5dc4,	// (0x00035909) popup_preview_text_window_t5

0x4677,	// (0x000341bc) cursor_digital_pane

0x4677,	// (0x000341bc) cursor_primary_pane

0x4688,	// (0x000341cd) cursor_primary_small_pane

0x4690,	// (0x000341d5) cursor_secondary_pane

0x4698,	// (0x000341dd) cursor_title_pane

0x4677,	// (0x000341bc) link_highlight_digital_pane

0x467f,	// (0x000341c4) link_highlight_primary_pane

0x4688,	// (0x000341cd) link_highlight_primary_small_pane

0x4690,	// (0x000341d5) link_highlight_secondary_pane

0x4698,	// (0x000341dd) link_highlight_title_pane

0x4677,	// (0x000341bc) copy_highlight_digital_pane

0x4677,	// (0x000341bc) copy_highlight_primary_pane

0x4688,	// (0x000341cd) copy_highlight_primary_small_pane

0x4690,	// (0x000341d5) copy_highlight_secondary_pane

0x4698,	// (0x000341dd) copy_highlight_title_pane

0x4690,	// (0x000341d5) graphic_text_digital_pane

0x5647,	// (0x0003518c) graphic_text_primary_pane

0x5650,	// (0x00035195) graphic_text_primary_small_pane

0x4688,	// (0x000341cd) graphic_text_secondary_pane

0x4677,	// (0x000341bc) graphic_text_title_pane

0xd210,	// (0x0003cd55) cursor_primary_pane_g1

0x5639,	// (0x0003517e) cursor_text_primary_t1

0xd73d,	// (0x0003d282) cursor_primary_small_pane_g1

0x562b,	// (0x00035170) cursor_text_primary_small_t1

0xd733,	// (0x0003d278) cursor_primary_small_pane_g1_copy1

0x5613,	// (0x00035158) cursor_text_primary_small_t1_copy1

0x55f1,	// (0x00035136) cursor_text_title_t1

0xd729,	// (0x0003d26e) cursor_title_pane_g1

0xd210,	// (0x0003cd55) cursor_digital_pane_g1

0x46aa,	// (0x000341ef) cursor_text_digital_t1

0x46cf,	// (0x00034214) link_highlight_primary_pane_g1

0x559a,	// (0x000350df) link_highlight_primary_pane_t1

0x46b8,	// (0x000341fd) link_highlight_primary_small_pane_g1

0x46c0,	// (0x00034205) link_highlight_primary_small_pane_t1

0x46cf,	// (0x00034214) link_highlight_secondary_pane_g1

0x46d7,	// (0x0003421c) link_highlight_secondary_pane_t1

0x550e,	// (0x00035053) link_highlight_title_pane_g1

0x5516,	// (0x0003505b) link_highlight_title_pane_t1

0x54f7,	// (0x0003503c) link_highlight_digital_pane_g1

0x54ff,	// (0x00035044) link_highlight_digital_pane_t1

0x53cf,	// (0x00034f14) copy_highlight_primary_pane_g1

0x53d7,	// (0x00034f1c) copy_highlight_primary_pane_t1

0x53a9,	// (0x00034eee) copy_highlight_primary_small_pane_g1

0x53c0,	// (0x00034f05) copy_highlight_primary_small_pane_t1

0x46e6,	// (0x0003422b) copy_highlight_secondary_pane_g1

0x46ee,	// (0x00034233) copy_highlight_secondary_pane_t1

0x53a9,	// (0x00034eee) copy_highlight_title_pane_g1

0x53b1,	// (0x00034ef6) copy_highlight_title_pane_t1

0x53cf,	// (0x00034f14) copy_highlight_digital_pane_g1

0x6657,	// (0x0003619c) copy_highlight_digital_pane_t1

0x65ab,	// (0x000360f0) graphic_text_primary_pane_g1

0x663b,	// (0x00036180) graphic_text_primary_pane_t1

0x6649,	// (0x0003618e) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0003f514) graphic_text_primary_pane_t

0x6617,	// (0x0003615c) graphic_text_primary_small_pane_g1

0x661f,	// (0x00036164) graphic_text_primary_small_pane_t1

0x662d,	// (0x00036172) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0003f50f) graphic_text_primary_small_pane_t

0x65f3,	// (0x00036138) graphic_text_secondary_pane_g1

0x65fb,	// (0x00036140) graphic_text_secondary_pane_t1

0x6609,	// (0x0003614e) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0003f50a) graphic_text_secondary_pane_t

0x65cf,	// (0x00036114) graphic_text_title_pane_g1

0x65d7,	// (0x0003611c) graphic_text_title_pane_t1

0x65e5,	// (0x0003612a) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0003f505) graphic_text_title_pane_t

0x65ab,	// (0x000360f0) graphic_text_digital_pane_g1

0x65b3,	// (0x000360f8) graphic_text_digital_pane_t1

0x65c1,	// (0x00036106) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0003f500) graphic_text_digital_pane_t

0x2a1f,	// (0x00032564) navi_icon_pane_srt_ParamLimits

0x2a1f,	// (0x00032564) navi_icon_pane_srt

0x293f,	// (0x00032484) navi_midp_pane_srt

0x293f,	// (0x00032484) navi_navi_pane_srt

0x2a1f,	// (0x00032564) navi_text_pane_srt_ParamLimits

0x2a1f,	// (0x00032564) navi_text_pane_srt

0x6576,	// (0x000360bb) navi_navi_icon_text_pane_srt

0x657e,	// (0x000360c3) navi_navi_pane_srt_g1_ParamLimits

0x657e,	// (0x000360c3) navi_navi_pane_srt_g1

0x6590,	// (0x000360d5) navi_navi_pane_srt_g2_ParamLimits

0x6590,	// (0x000360d5) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0003f4fb) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0003f4fb) navi_navi_pane_srt_g

0x65a2,	// (0x000360e7) navi_navi_tabs_pane_srt

0x6576,	// (0x000360bb) navi_navi_text_pane_srt

0x6576,	// (0x000360bb) navi_navi_volume_pane_srt

0x6567,	// (0x000360ac) navi_navi_text_pane_srt_t1

0x1a02,	// (0x00031547) navi_navi_volume_pane_srt_g1

0x1a0a,	// (0x0003154f) volume_small_pane_srt_ParamLimits

0x1a0a,	// (0x0003154f) volume_small_pane_srt

0x0c0b,	// (0x00030750) volume_small_pane_srt_g1_ParamLimits

0x0c0b,	// (0x00030750) volume_small_pane_srt_g1

0x0c1b,	// (0x00030760) volume_small_pane_srt_g2_ParamLimits

0x0c1b,	// (0x00030760) volume_small_pane_srt_g2

0x0c2c,	// (0x00030771) volume_small_pane_srt_g3_ParamLimits

0x0c2c,	// (0x00030771) volume_small_pane_srt_g3

0x0c3d,	// (0x00030782) volume_small_pane_srt_g4_ParamLimits

0x0c3d,	// (0x00030782) volume_small_pane_srt_g4

0x0c4e,	// (0x00030793) volume_small_pane_srt_g5_ParamLimits

0x0c4e,	// (0x00030793) volume_small_pane_srt_g5

0x0c5f,	// (0x000307a4) volume_small_pane_srt_g6_ParamLimits

0x0c5f,	// (0x000307a4) volume_small_pane_srt_g6

0x0c70,	// (0x000307b5) volume_small_pane_srt_g7_ParamLimits

0x0c70,	// (0x000307b5) volume_small_pane_srt_g7

0x0c81,	// (0x000307c6) volume_small_pane_srt_g8_ParamLimits

0x0c81,	// (0x000307c6) volume_small_pane_srt_g8

0x0c92,	// (0x000307d7) volume_small_pane_srt_g9_ParamLimits

0x0c92,	// (0x000307d7) volume_small_pane_srt_g9

0x0ca3,	// (0x000307e8) volume_small_pane_srt_g10_ParamLimits

0x0ca3,	// (0x000307e8) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0003f2a8) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0003f2a8) volume_small_pane_srt_g

0x2df9,	// (0x0003293e) query_popup_data_pane_cp2

0x654d,	// (0x00036092) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x654d,	// (0x00036092) navi_navi_icon_text_pane_srt_t1

0x5647,	// (0x0003518c) navi_tabs_2_long_pane_srt

0x5647,	// (0x0003518c) navi_tabs_2_pane_srt

0x5647,	// (0x0003518c) navi_tabs_3_long_pane_srt

0x5647,	// (0x0003518c) navi_tabs_3_pane_srt

0x5647,	// (0x0003518c) navi_tabs_4_pane_srt

0x19e2,	// (0x00031527) tabs_2_active_pane_srt_ParamLimits

0x19e2,	// (0x00031527) tabs_2_active_pane_srt

0x19f2,	// (0x00031537) tabs_2_passive_pane_srt_ParamLimits

0x19f2,	// (0x00031537) tabs_2_passive_pane_srt

0x4e03,	// (0x00034948) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4e03,	// (0x00034948) bg_passive_tab_pane_cp1_srt

0x6519,	// (0x0003605e) bg_passive_tab_pane_g1_cp1_srt

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp1_srt

0x6522,	// (0x00036067) bg_passive_tab_pane_g3_cp1_srt

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp1_srt_ParamLimits

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp1_srt

0x652b,	// (0x00036070) tabs_2_active_pane_srt_g1

0xdb94,	// (0x0003d6d9) tabs_2_active_pane_srt_t1_ParamLimits

0xdb94,	// (0x0003d6d9) tabs_2_active_pane_srt_t1

0x6519,	// (0x0003605e) bg_active_tab_pane_g1_cp1_srt

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp1_srt

0x6522,	// (0x00036067) bg_active_tab_pane_g3_cp1_srt

0x19af,	// (0x000314f4) tabs_3_active_pane_srt_ParamLimits

0x19af,	// (0x000314f4) tabs_3_active_pane_srt

0x19c0,	// (0x00031505) tabs_3_passive_pane_cp_srt_ParamLimits

0x19c0,	// (0x00031505) tabs_3_passive_pane_cp_srt

0x19d1,	// (0x00031516) tabs_3_passive_pane_srt_ParamLimits

0x19d1,	// (0x00031516) tabs_3_passive_pane_srt

0x4e03,	// (0x00034948) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4e03,	// (0x00034948) bg_passive_tab_pane_cp2_srt

0x46fd,	// (0x00034242) bg_passive_tab_pane_g1_cp2_srt

0x41a4,	// (0x00033ce9) bg_passive_tab_pane_g2_cp2_srt

0x4706,	// (0x0003424b) bg_passive_tab_pane_g3_cp2_srt

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp2_srt_ParamLimits

0x2c9a,	// (0x000327df) bg_active_tab_pane_cp2_srt

0x64ff,	// (0x00036044) tabs_3_active_pane_srt_g1

0xdb7e,	// (0x0003d6c3) tabs_3_active_pane_srt_t1_ParamLimits

0xdb7e,	// (0x0003d6c3) tabs_3_active_pane_srt_t1

0x46fd,	// (0x00034242) bg_active_tab_pane_g1_cp2_srt

0x41a4,	// (0x00033ce9) bg_active_tab_pane_g2_cp2_srt

0x4706,	// (0x0003424b) bg_active_tab_pane_g3_cp2_srt

0x1967,	// (0x000314ac) tabs_4_active_pane_srt_ParamLimits

0x1967,	// (0x000314ac) tabs_4_active_pane_srt

0x1979,	// (0x000314be) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1979,	// (0x000314be) tabs_4_passive_pane_cp2_srt

0x0e08,	// (0x0003094d) aid_size_cell_toolbar

0x6184,	// (0x00035cc9) main_idle_act_pane_ParamLimits

0x0fbd,	// (0x00030b02) popup_large_graphic_colour_window_ParamLimits

0xc26e,	// (0x0003bdb3) popup_toolbar_window_ParamLimits

0xc26e,	// (0x0003bdb3) popup_toolbar_window

0x633c,	// (0x00035e81) list_single_graphic_2heading_pane_ParamLimits

0x633c,	// (0x00035e81) list_single_graphic_2heading_pane

0x3c6e,	// (0x000337b3) aid_size_cell_apps_grid_lsc_pane

0x3c80,	// (0x000337c5) aid_size_cell_apps_grid_prt_pane

0x4897,	// (0x000343dc) bg_wml_button_pane_cp1_ParamLimits

0x4897,	// (0x000343dc) bg_wml_button_pane_cp1

0xd6df,	// (0x0003d224) form_midp_field_text_pane_t1_ParamLimits

0x4e03,	// (0x00034948) input_focus_pane_cp050_ParamLimits

0x5070,	// (0x00034bb5) list_midp_form_text_pane_ParamLimits

0x5016,	// (0x00034b5b) input_focus_pane_cp051_ParamLimits

0x502a,	// (0x00034b6f) list_midp_choice_pane_ParamLimits

0xd67c,	// (0x0003d1c1) list_single_2graphic_pane_cp3_ParamLimits

0xd67c,	// (0x0003d1c1) list_single_2graphic_pane_cp3

0xd68f,	// (0x0003d1d4) list_single_midp_graphic_pane_ParamLimits

0xd68f,	// (0x0003d1d4) list_single_midp_graphic_pane

0xf370,	// (0x0003eeb5) list_single_graphic_2heading_pane_g1_ParamLimits

0xf370,	// (0x0003eeb5) list_single_graphic_2heading_pane_g1

0xf37c,	// (0x0003eec1) list_single_graphic_2heading_pane_g4_ParamLimits

0xf37c,	// (0x0003eec1) list_single_graphic_2heading_pane_g4

0xf388,	// (0x0003eecd) list_single_graphic_2heading_pane_g5_ParamLimits

0xf388,	// (0x0003eecd) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0003f2fb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0003f2fb) list_single_graphic_2heading_pane_g

0xf394,	// (0x0003eed9) list_single_graphic_2heading_pane_t1_ParamLimits

0xf394,	// (0x0003eed9) list_single_graphic_2heading_pane_t1

0xf3a8,	// (0x0003eeed) list_single_graphic_2heading_pane_t2_ParamLimits

0xf3a8,	// (0x0003eeed) list_single_graphic_2heading_pane_t2

0xf3c4,	// (0x0003ef09) list_single_graphic_2heading_pane_t3_ParamLimits

0xf3c4,	// (0x0003ef09) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0003f302) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0003f302) list_single_graphic_2heading_pane_t

0x4ccd,	// (0x00034812) bg_popup_sub_pane_cp2

0x4cf7,	// (0x0003483c) grid_toobar_pane

0x13d1,	// (0x00030f16) cell_toolbar_pane_ParamLimits

0x13d1,	// (0x00030f16) cell_toolbar_pane

0x4d33,	// (0x00034878) cell_toolbar_pane_g1_ParamLimits

0x4d33,	// (0x00034878) cell_toolbar_pane_g1

0x4d47,	// (0x0003488c) cell_toolbar_pane_g2_ParamLimits

0x4d47,	// (0x0003488c) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0003f310) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0003f310) cell_toolbar_pane_g

0x4d69,	// (0x000348ae) grid_highlight_pane_cp2_ParamLimits

0x4d69,	// (0x000348ae) grid_highlight_pane_cp2

0x4d83,	// (0x000348c8) toolbar_button_pane

0x4d8f,	// (0x000348d4) toolbar_button_pane_g1

0x4d97,	// (0x000348dc) toolbar_button_pane_g2

0x4d9f,	// (0x000348e4) toolbar_button_pane_g3

0x4da7,	// (0x000348ec) toolbar_button_pane_g4

0x4daf,	// (0x000348f4) toolbar_button_pane_g5

0x4db7,	// (0x000348fc) toolbar_button_pane_g6

0x4dbf,	// (0x00034904) toolbar_button_pane_g7

0x4dc7,	// (0x0003490c) toolbar_button_pane_g8

0x4dcf,	// (0x00034914) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0003f315) toolbar_button_pane_g

0x1443,	// (0x00030f88) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1443,	// (0x00030f88) list_single_2graphic_pane_g1_cp3

0xc2c6,	// (0x0003be0b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc2c6,	// (0x0003be0b) list_single_2graphic_pane_g2_cp3

0x1460,	// (0x00030fa5) list_single_2graphic_pane_g3_cp3

0x1468,	// (0x00030fad) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1468,	// (0x00030fad) list_single_2graphic_pane_g4_cp3

0x1474,	// (0x00030fb9) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1474,	// (0x00030fb9) list_single_2graphic_pane_t1_cp3

0x14bc,	// (0x00031001) list_single_midp_graphic_pane_g2_ParamLimits

0x14bc,	// (0x00031001) list_single_midp_graphic_pane_g2

0x0e10,	// (0x00030955) aid_zoom_text_primary

0xf368,	// (0x0003eead) aid_zoom_text_secondary

0x47ba,	// (0x000342ff) status_small_pane_g7_ParamLimits

0x47ba,	// (0x000342ff) status_small_pane_g7

0x47dd,	// (0x00034322) status_small_pane_t1_ParamLimits

0xb395,	// (0x0003aeda) title_pane_g2

0x0003,

0xf554,	// (0x0003f099) title_pane_g

0xcdeb,	// (0x0003c930) aid_size_cell_colour_1_pane_ParamLimits

0xcdeb,	// (0x0003c930) aid_size_cell_colour_1_pane

0xcdff,	// (0x0003c944) aid_size_cell_colour_2_pane_ParamLimits

0xcdff,	// (0x0003c944) aid_size_cell_colour_2_pane

0xce13,	// (0x0003c958) aid_size_cell_colour_3_pane_ParamLimits

0xce13,	// (0x0003c958) aid_size_cell_colour_3_pane

0xce27,	// (0x0003c96c) aid_size_cell_colour_4_pane_ParamLimits

0xce27,	// (0x0003c96c) aid_size_cell_colour_4_pane

0x07de,	// (0x00030323) title_pane_stacon_g1_ParamLimits

0x07de,	// (0x00030323) title_pane_stacon_g1

0x542e,	// (0x00034f73) popup_note_wait_window_g3_ParamLimits

0x542e,	// (0x00034f73) popup_note_wait_window_g3

0x54a4,	// (0x00034fe9) popup_note_wait_window_t5_ParamLimits

0x54a4,	// (0x00034fe9) popup_note_wait_window_t5

0x293f,	// (0x00032484) main_feb_china_hwr_fs_writing_pane

0xbc7c,	// (0x0003b7c1) popup_feb_china_hwr_fs_window_ParamLimits

0xbc7c,	// (0x0003b7c1) popup_feb_china_hwr_fs_window

0xc2d7,	// (0x0003be1c) aid_size_cell_hwr_fs_ParamLimits

0xc2d7,	// (0x0003be1c) aid_size_cell_hwr_fs

0x4e03,	// (0x00034948) bg_popup_sub_pane_cp3_ParamLimits

0x4e03,	// (0x00034948) bg_popup_sub_pane_cp3

0xc2ec,	// (0x0003be31) grid_hwr_fs_pane_ParamLimits

0xc2ec,	// (0x0003be31) grid_hwr_fs_pane

0x1581,	// (0x000310c6) linegrid_hwr_fs_pane_ParamLimits

0x1581,	// (0x000310c6) linegrid_hwr_fs_pane

0xc304,	// (0x0003be49) cell_hwr_fs_pane_ParamLimits

0xc304,	// (0x0003be49) cell_hwr_fs_pane

0x4e0f,	// (0x00034954) linegrid_hwr_fs_pane_g1_ParamLimits

0x4e0f,	// (0x00034954) linegrid_hwr_fs_pane_g1

0xd650,	// (0x0003d195) linegrid_hwr_fs_pane_g2_ParamLimits

0xd650,	// (0x0003d195) linegrid_hwr_fs_pane_g2

0x4e2d,	// (0x00034972) linegrid_hwr_fs_pane_g3_ParamLimits

0x4e2d,	// (0x00034972) linegrid_hwr_fs_pane_g3

0x15b3,	// (0x000310f8) linegrid_hwr_fs_pane_g4_ParamLimits

0x15b3,	// (0x000310f8) linegrid_hwr_fs_pane_g4

0x15cd,	// (0x00031112) linegrid_hwr_fs_pane_g5_ParamLimits

0x15cd,	// (0x00031112) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0003f33b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003f33b) linegrid_hwr_fs_pane_g

0x4e39,	// (0x0003497e) cell_hwr_fs_pane_g1_ParamLimits

0x4e39,	// (0x0003497e) cell_hwr_fs_pane_g1

0x4c04,	// (0x00034749) cell_hwr_fs_pane_g2_ParamLimits

0x4c04,	// (0x00034749) cell_hwr_fs_pane_g2

0xd662,	// (0x0003d1a7) cell_hwr_fs_pane_g3_ParamLimits

0xd662,	// (0x0003d1a7) cell_hwr_fs_pane_g3

0xd66f,	// (0x0003d1b4) cell_hwr_fs_pane_g4_ParamLimits

0xd66f,	// (0x0003d1b4) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0003f346) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0003f346) cell_hwr_fs_pane_g

0xc32a,	// (0x0003be6f) cell_hwr_fs_pane_t1

0x293f,	// (0x00032484) grid_highlight_pane_cp6

0x293f,	// (0x00032484) main_idle_act2_pane

0x3a25,	// (0x0003356a) aid_inside_area_popup_secondary

0xd7a4,	// (0x0003d2e9) aid_inside_area_window_primary_ParamLimits

0xd7a4,	// (0x0003d2e9) aid_inside_area_window_primary

0x6666,	// (0x000361ab) ai2_news_ticker_pane

0x666e,	// (0x000361b3) aid_size_cell_ai1_link_ParamLimits

0x666e,	// (0x000361b3) aid_size_cell_ai1_link

0xdbaa,	// (0x0003d6ef) popup_ai2_data_window_ParamLimits

0xdbaa,	// (0x0003d6ef) popup_ai2_data_window

0x669e,	// (0x000361e3) popup_ai2_link_window_ParamLimits

0x669e,	// (0x000361e3) popup_ai2_link_window

0x4e03,	// (0x00034948) bg_popup_sub_pane_cp4_ParamLimits

0x4e03,	// (0x00034948) bg_popup_sub_pane_cp4

0x66b2,	// (0x000361f7) grid_ai2_link_pane_ParamLimits

0x66b2,	// (0x000361f7) grid_ai2_link_pane

0x66c9,	// (0x0003620e) popup_ai2_link_window_g1_ParamLimits

0x66c9,	// (0x0003620e) popup_ai2_link_window_g1

0x66d5,	// (0x0003621a) popup_ai2_link_window_g2_ParamLimits

0x66d5,	// (0x0003621a) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0003f519) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0003f519) popup_ai2_link_window_g

0x66e4,	// (0x00036229) ai2_mp_button_pane

0x66ec,	// (0x00036231) ai2_mp_volume_pane

0x5016,	// (0x00034b5b) bg_popup_sub_pane_cp5_ParamLimits

0x5016,	// (0x00034b5b) bg_popup_sub_pane_cp5

0x66f4,	// (0x00036239) heading_ai2_gene_pane_ParamLimits

0x66f4,	// (0x00036239) heading_ai2_gene_pane

0x6700,	// (0x00036245) list_ai2_gene_pane_ParamLimits

0x6700,	// (0x00036245) list_ai2_gene_pane

0x6748,	// (0x0003628d) cell_ai2_link_pane_ParamLimits

0x6748,	// (0x0003628d) cell_ai2_link_pane

0x675e,	// (0x000362a3) cell_ai2_link_pane_g1

0x293f,	// (0x00032484) grid_highlight_pane_cp7

0x1a1f,	// (0x00031564) ai2_mp_volume_pane_g1

0x682e,	// (0x00036373) ai2_mp_volume_pane_g2

0xdbd4,	// (0x0003d719) list_ai2_gene_pane_t1

0x6836,	// (0x0003637b) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0003f532) ai2_mp_volume_pane_g

0x1a27,	// (0x0003156c) volume_small_pane_cp3

0x683e,	// (0x00036383) aid_size_cell_ai2_button

0x6846,	// (0x0003638b) grid_ai2_button_pane

0x684f,	// (0x00036394) cell_ai2_button_pane_ParamLimits

0x684f,	// (0x00036394) cell_ai2_button_pane

0x2935,	// (0x0003247a) cell_ai2_button_pane_g1

0x293f,	// (0x00032484) grid_highlight_pane_cp8

0x67ee,	// (0x00036333) ai2_gene_pane_t1_ParamLimits

0x67ee,	// (0x00036333) ai2_gene_pane_t1

0xbc06,	// (0x0003b74b) aid_height_parent_landscape

0xd958,	// (0x0003d49d) aid_height_set_list

0x6184,	// (0x00035cc9) aid_size_parent

0x648d,	// (0x00035fd2) aid_size_cell_graphic_pane_ParamLimits

0x6710,	// (0x00036255) popup_ai2_data_window_g1_ParamLimits

0x6710,	// (0x00036255) popup_ai2_data_window_g1

0x671c,	// (0x00036261) ai2_news_ticker_pane_g1

0x6724,	// (0x00036269) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0003f51e) ai2_news_ticker_pane_g

0x672c,	// (0x00036271) ai2_news_ticker_pane_t1

0x673a,	// (0x0003627f) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0003f523) ai2_news_ticker_pane_t

0x6767,	// (0x000362ac) heading_ai2_gene_pane_g1

0x676f,	// (0x000362b4) heading_ai2_gene_pane_t1_ParamLimits

0x676f,	// (0x000362b4) heading_ai2_gene_pane_t1

0x6784,	// (0x000362c9) list_highlight_pane_cp6

0xdbbe,	// (0x0003d703) ai2_gene_pane_ParamLimits

0xdbbe,	// (0x0003d703) ai2_gene_pane

0xdbe2,	// (0x0003d727) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0003f528) list_ai2_gene_pane_t

0x67bf,	// (0x00036304) list_highlight_pane_cp8_ParamLimits

0x67bf,	// (0x00036304) list_highlight_pane_cp8

0x67d0,	// (0x00036315) ai2_gene_pane_g1_ParamLimits

0x67d0,	// (0x00036315) ai2_gene_pane_g1

0x67e2,	// (0x00036327) ai2_gene_pane_g2_ParamLimits

0x67e2,	// (0x00036327) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0003f52d) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0003f52d) ai2_gene_pane_g

0x3864,	// (0x000333a9) scroll_pane_cp12

0xbbc5,	// (0x0003b70a) control_pane_t3_ParamLimits

0xbbc5,	// (0x0003b70a) control_pane_t3

0x47ce,	// (0x00034313) status_small_pane_g8_ParamLimits

0x47ce,	// (0x00034313) status_small_pane_g8

0xbd11,	// (0x0003b856) popup_find_window_ParamLimits

0xbf98,	// (0x0003badd) popup_note_image_window_ParamLimits

0x1401,	// (0x00030f46) list_double2_graphic_pane_vc_g1_ParamLimits

0x1401,	// (0x00030f46) list_double2_graphic_pane_vc_g1

0x140d,	// (0x00030f52) list_double2_graphic_pane_vc_g2_ParamLimits

0x140d,	// (0x00030f52) list_double2_graphic_pane_vc_g2

0x1419,	// (0x00030f5e) list_double2_graphic_pane_vc_g3_ParamLimits

0x1419,	// (0x00030f5e) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003f309) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003f309) list_double2_graphic_pane_vc_g

0x1425,	// (0x00030f6a) list_double2_graphic_pane_vc_t1_ParamLimits

0x1425,	// (0x00030f6a) list_double2_graphic_pane_vc_t1

0x140d,	// (0x00030f52) list_single_heading_pane_vc_g1_ParamLimits

0x140d,	// (0x00030f52) list_single_heading_pane_vc_g1

0x1419,	// (0x00030f5e) list_single_heading_pane_vc_g2_ParamLimits

0x1419,	// (0x00030f5e) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003f113) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003f113) list_single_heading_pane_vc_g

0x1490,	// (0x00030fd5) list_single_heading_pane_vc_t1_ParamLimits

0x1490,	// (0x00030fd5) list_single_heading_pane_vc_t1

0x14a8,	// (0x00030fed) list_single_heading_pane_vc_t2_ParamLimits

0x14a8,	// (0x00030fed) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0003f32a) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0003f32a) list_single_heading_pane_vc_t

0x14de,	// (0x00031023) list_setting_number_pane_vc_g1_ParamLimits

0x14de,	// (0x00031023) list_setting_number_pane_vc_g1

0x14ea,	// (0x0003102f) list_setting_number_pane_vc_g2_ParamLimits

0x14ea,	// (0x0003102f) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003f32f) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003f32f) list_setting_number_pane_vc_g

0x14f6,	// (0x0003103b) list_setting_number_pane_vc_t1_ParamLimits

0x14f6,	// (0x0003103b) list_setting_number_pane_vc_t1

0x150a,	// (0x0003104f) list_setting_number_pane_vc_t2_ParamLimits

0x150a,	// (0x0003104f) list_setting_number_pane_vc_t2

0x1526,	// (0x0003106b) list_setting_number_pane_vc_t3_ParamLimits

0x1526,	// (0x0003106b) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0003f334) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0003f334) list_setting_number_pane_vc_t

0x1544,	// (0x00031089) set_value_pane_vc_ParamLimits

0x1544,	// (0x00031089) set_value_pane_vc

0x633c,	// (0x00035e81) list_double2_graphic_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double2_graphic_pane_vc

0x633c,	// (0x00035e81) list_double2_large_graphic_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double2_large_graphic_pane_vc

0x633c,	// (0x00035e81) list_double2_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double2_pane_vc

0x633c,	// (0x00035e81) list_double_graphic_heading_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double_graphic_heading_pane_vc

0x633c,	// (0x00035e81) list_double_graphic_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double_graphic_pane_vc

0x633c,	// (0x00035e81) list_double_heading_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double_heading_pane_vc

0x633c,	// (0x00035e81) list_double_large_graphic_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double_large_graphic_pane_vc

0x633c,	// (0x00035e81) list_double_number_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double_number_pane_vc

0x633c,	// (0x00035e81) list_double_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double_pane_vc

0x633c,	// (0x00035e81) list_double_time_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_double_time_pane_vc

0x633c,	// (0x00035e81) list_setting_number_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_setting_number_pane_vc

0x633c,	// (0x00035e81) list_setting_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_setting_pane_vc

0x633c,	// (0x00035e81) list_single_graphic_heading_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_single_graphic_heading_pane_vc

0x633c,	// (0x00035e81) list_single_heading_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_single_heading_pane_vc

0x633c,	// (0x00035e81) list_single_number_heading_pane_vc_ParamLimits

0x633c,	// (0x00035e81) list_single_number_heading_pane_vc

0x1401,	// (0x00030f46) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1401,	// (0x00030f46) list_double_graphic_heading_pane_vc_g1

0x140d,	// (0x00030f52) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x140d,	// (0x00030f52) list_double_graphic_heading_pane_vc_g2

0x1419,	// (0x00030f5e) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x1419,	// (0x00030f5e) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003f309) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003f309) list_double_graphic_heading_pane_vc_g

0x1a30,	// (0x00031575) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1a30,	// (0x00031575) list_double_graphic_heading_pane_vc_t1

0x1a4c,	// (0x00031591) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x1a4c,	// (0x00031591) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x0003f539) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x0003f539) list_double_graphic_heading_pane_vc_t

0x14de,	// (0x00031023) list_setting_pane_vc_g1_ParamLimits

0x14de,	// (0x00031023) list_setting_pane_vc_g1

0x14ea,	// (0x0003102f) list_setting_pane_vc_g2_ParamLimits

0x14ea,	// (0x0003102f) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003f32f) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003f32f) list_setting_pane_vc_g

0x1a6a,	// (0x000315af) list_setting_pane_vc_t1_ParamLimits

0x1a6a,	// (0x000315af) list_setting_pane_vc_t1

0x2e3c,	// (0x00032981) list_setting_pane_vc_t2_ParamLimits

0x2e3c,	// (0x00032981) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x0003f57c) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x0003f57c) list_setting_pane_vc_t

0x1544,	// (0x00031089) set_value_pane_cp_vc_ParamLimits

0x1544,	// (0x00031089) set_value_pane_cp_vc

0x140d,	// (0x00030f52) list_single_number_heading_pane_vc_g1_ParamLimits

0x140d,	// (0x00030f52) list_single_number_heading_pane_vc_g1

0x1419,	// (0x00030f5e) list_single_number_heading_pane_vc_g2_ParamLimits

0x1419,	// (0x00030f5e) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003f113) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003f113) list_single_number_heading_pane_vc_g

0x1490,	// (0x00030fd5) list_single_number_heading_pane_vc_t1_ParamLimits

0x1490,	// (0x00030fd5) list_single_number_heading_pane_vc_t1

0x2e58,	// (0x0003299d) list_single_number_heading_pane_vc_t2_ParamLimits

0x2e58,	// (0x0003299d) list_single_number_heading_pane_vc_t2

0x2e6c,	// (0x000329b1) list_single_number_heading_pane_vc_t3_ParamLimits

0x2e6c,	// (0x000329b1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x0003f581) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0003f581) list_single_number_heading_pane_vc_t

0x1401,	// (0x00030f46) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1401,	// (0x00030f46) list_single_graphic_heading_pane_vc_g1

0x140d,	// (0x00030f52) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x140d,	// (0x00030f52) list_single_graphic_heading_pane_vc_g4

0x1419,	// (0x00030f5e) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1419,	// (0x00030f5e) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x0003f309) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003f309) list_single_graphic_heading_pane_vc_g

0x1490,	// (0x00030fd5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x1490,	// (0x00030fd5) list_single_graphic_heading_pane_vc_t1

0x2e7e,	// (0x000329c3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2e7e,	// (0x000329c3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0003f588) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003f588) list_single_graphic_heading_pane_vc_t

0x140d,	// (0x00030f52) list_double2_pane_vc_g1_ParamLimits

0x140d,	// (0x00030f52) list_double2_pane_vc_g1

0x1419,	// (0x00030f5e) list_double2_pane_vc_g2_ParamLimits

0x1419,	// (0x00030f5e) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003f113) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003f113) list_double2_pane_vc_g

0x2e92,	// (0x000329d7) list_double2_pane_vc_t1_ParamLimits

0x2e92,	// (0x000329d7) list_double2_pane_vc_t1

0x2ea8,	// (0x000329ed) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2ea8,	// (0x000329ed) list_double2_large_graphic_pane_vc_g1

0x140d,	// (0x00030f52) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x140d,	// (0x00030f52) list_double2_large_graphic_pane_vc_g2

0x1419,	// (0x00030f5e) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1419,	// (0x00030f5e) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0003f130) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0003f130) list_double2_large_graphic_pane_vc_g

0x2eb4,	// (0x000329f9) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2eb4,	// (0x000329f9) list_double2_large_graphic_pane_vc_t1

0x2eca,	// (0x00032a0f) list_double_time_pane_vc_g1_ParamLimits

0x2eca,	// (0x00032a0f) list_double_time_pane_vc_g1

0x2ed6,	// (0x00032a1b) list_double_time_pane_vc_g2_ParamLimits

0x2ed6,	// (0x00032a1b) list_double_time_pane_vc_g2

0x0001,

0xfa48,	// (0x0003f58d) list_double_time_pane_vc_g_ParamLimits

0xfa48,	// (0x0003f58d) list_double_time_pane_vc_g

0x2ee2,	// (0x00032a27) list_double_time_pane_vc_t1_ParamLimits

0x2ee2,	// (0x00032a27) list_double_time_pane_vc_t1

0x2f06,	// (0x00032a4b) list_double_time_pane_vc_t2_ParamLimits

0x2f06,	// (0x00032a4b) list_double_time_pane_vc_t2

0x2f55,	// (0x00032a9a) list_double_time_pane_vc_t3_ParamLimits

0x2f55,	// (0x00032a9a) list_double_time_pane_vc_t3

0x2f67,	// (0x00032aac) list_double_time_pane_vc_t4_ParamLimits

0x2f67,	// (0x00032aac) list_double_time_pane_vc_t4

0x0003,

0xfa4d,	// (0x0003f592) list_double_time_pane_vc_t_ParamLimits

0xfa4d,	// (0x0003f592) list_double_time_pane_vc_t

0x140d,	// (0x00030f52) list_double_pane_vc_g1_ParamLimits

0x140d,	// (0x00030f52) list_double_pane_vc_g1

0x1419,	// (0x00030f5e) list_double_pane_vc_g2_ParamLimits

0x1419,	// (0x00030f5e) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003f113) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003f113) list_double_pane_vc_g

0x2f7b,	// (0x00032ac0) list_double_pane_vc_t1_ParamLimits

0x2f7b,	// (0x00032ac0) list_double_pane_vc_t1

0x2f8f,	// (0x00032ad4) list_double_pane_vc_t2_ParamLimits

0x2f8f,	// (0x00032ad4) list_double_pane_vc_t2

0x0001,

0xfa56,	// (0x0003f59b) list_double_pane_vc_t_ParamLimits

0xfa56,	// (0x0003f59b) list_double_pane_vc_t

0x140d,	// (0x00030f52) list_double_number_pane_vc_g1_ParamLimits

0x140d,	// (0x00030f52) list_double_number_pane_vc_g1

0x1419,	// (0x00030f5e) list_double_number_pane_vc_g2_ParamLimits

0x1419,	// (0x00030f5e) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003f113) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003f113) list_double_number_pane_vc_g

0x2fa7,	// (0x00032aec) list_double_number_pane_vc_t1_ParamLimits

0x2fa7,	// (0x00032aec) list_double_number_pane_vc_t1

0x2fbb,	// (0x00032b00) list_double_number_pane_vc_t2_ParamLimits

0x2fbb,	// (0x00032b00) list_double_number_pane_vc_t2

0x2fcf,	// (0x00032b14) list_double_number_pane_vc_t3_ParamLimits

0x2fcf,	// (0x00032b14) list_double_number_pane_vc_t3

0x0002,

0xfa5b,	// (0x0003f5a0) list_double_number_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003f5a0) list_double_number_pane_vc_t

0x2fe7,	// (0x00032b2c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2fe7,	// (0x00032b2c) list_double_large_graphic_pane_vc_g1

0x2ff8,	// (0x00032b3d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2ff8,	// (0x00032b3d) list_double_large_graphic_pane_vc_g2

0x1419,	// (0x00030f5e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1419,	// (0x00030f5e) list_double_large_graphic_pane_vc_g3

0x3007,	// (0x00032b4c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3007,	// (0x00032b4c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa62,	// (0x0003f5a7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x0003f5a7) list_double_large_graphic_pane_vc_g

0x3013,	// (0x00032b58) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3013,	// (0x00032b58) list_double_large_graphic_pane_vc_t1

0x302c,	// (0x00032b71) list_double_large_graphic_pane_vc_t2_ParamLimits

0x302c,	// (0x00032b71) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x0003f5b0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x0003f5b0) list_double_large_graphic_pane_vc_t

0x140d,	// (0x00030f52) list_double_heading_pane_vc_g1_ParamLimits

0x140d,	// (0x00030f52) list_double_heading_pane_vc_g1

0x1419,	// (0x00030f5e) list_double_heading_pane_vc_g2_ParamLimits

0x1419,	// (0x00030f5e) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003f113) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003f113) list_double_heading_pane_vc_g

0x3045,	// (0x00032b8a) list_double_heading_pane_vc_t1_ParamLimits

0x3045,	// (0x00032b8a) list_double_heading_pane_vc_t1

0x1490,	// (0x00030fd5) list_double_heading_pane_vc_t2_ParamLimits

0x1490,	// (0x00030fd5) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x0003f5b5) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x0003f5b5) list_double_heading_pane_vc_t

0x1401,	// (0x00030f46) list_double_graphic_pane_vc_g1_ParamLimits

0x1401,	// (0x00030f46) list_double_graphic_pane_vc_g1

0x3059,	// (0x00032b9e) list_double_graphic_pane_vc_g2_ParamLimits

0x3059,	// (0x00032b9e) list_double_graphic_pane_vc_g2

0x3068,	// (0x00032bad) list_double_graphic_pane_vc_g3_ParamLimits

0x3068,	// (0x00032bad) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x0003f5ba) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x0003f5ba) list_double_graphic_pane_vc_g

0x3074,	// (0x00032bb9) list_double_graphic_pane_vc_t1_ParamLimits

0x3074,	// (0x00032bb9) list_double_graphic_pane_vc_t1

0x3088,	// (0x00032bcd) list_double_graphic_pane_vc_t2_ParamLimits

0x3088,	// (0x00032bcd) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x0003f5c1) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x0003f5c1) list_double_graphic_pane_vc_t

0xf2cc,	// (0x0003ee11) aid_size_cell_fastswap

0xb1e1,	// (0x0003ad26) aid_size_cell_touch_ParamLimits

0xb1e1,	// (0x0003ad26) aid_size_cell_touch

0xf4c1,	// (0x0003f006) popup_fast_swap_wide_window_ParamLimits

0xf4c1,	// (0x0003f006) popup_fast_swap_wide_window

0xb32c,	// (0x0003ae71) touch_pane_ParamLimits

0xb32c,	// (0x0003ae71) touch_pane

0x38ba,	// (0x000333ff) button_value_adjust_pane_cp2

0x0540,	// (0x00030085) button_value_adjust_pane_cp4

0x0560,	// (0x000300a5) form_field_data_pane_cp2

0xb8c3,	// (0x0003b408) form_field_data_wide_pane_cp2

0x3d39,	// (0x0003387e) bg_scroll_pane_ParamLimits

0x0940,	// (0x00030485) scroll_handle_pane_ParamLimits

0x0954,	// (0x00030499) scroll_sc2_down_pane_ParamLimits

0x0954,	// (0x00030499) scroll_sc2_down_pane

0x3d6a,	// (0x000338af) scroll_sc2_up_pane_ParamLimits

0x3d6a,	// (0x000338af) scroll_sc2_up_pane

0xdd0c,	// (0x0003d851) grid_wheel_folder_pane_g1_ParamLimits

0xdd0c,	// (0x0003d851) grid_wheel_folder_pane_g1

0x0ba3,	// (0x000306e8) clock_nsta_pane_cp2_ParamLimits

0x0ba3,	// (0x000306e8) clock_nsta_pane_cp2

0x4897,	// (0x000343dc) listscroll_midp_pane_ParamLimits

0xd179,	// (0x0003ccbe) midp_canvas_pane

0x4849,	// (0x0003438e) nsta_clock_indic_pane

0x487d,	// (0x000343c2) listscroll_form_pane_vc

0x4885,	// (0x000343ca) listscroll_set_pane_vc_ParamLimits

0x4885,	// (0x000343ca) listscroll_set_pane_vc

0xd361,	// (0x0003cea6) clock_nsta_pane

0xd38b,	// (0x0003ced0) indicator_nsta_pane

0x4ccd,	// (0x00034812) bg_popup_sub_pane_cp2_ParamLimits

0x4ce1,	// (0x00034826) find_pane_cp2_ParamLimits

0x4ce1,	// (0x00034826) find_pane_cp2

0x4cf7,	// (0x0003483c) grid_toobar_pane_ParamLimits

0x4dd7,	// (0x0003491c) list_form_gen_pane_vc_ParamLimits

0x4dd7,	// (0x0003491c) list_form_gen_pane_vc

0x4ded,	// (0x00034932) scroll_pane_cp8_vc_ParamLimits

0x4ded,	// (0x00034932) scroll_pane_cp8_vc

0x4e69,	// (0x000349ae) data_form_wide_pane_vc_ParamLimits

0x4e69,	// (0x000349ae) data_form_wide_pane_vc

0x4e75,	// (0x000349ba) form_field_data_wide_pane_vc_g1

0x4e7d,	// (0x000349c2) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e7d,	// (0x000349c2) form_field_data_wide_pane_vc_t1

0x38ce,	// (0x00033413) input_focus_pane_cp6_vc_ParamLimits

0x38ce,	// (0x00033413) input_focus_pane_cp6_vc

0xd701,	// (0x0003d246) list_midp_pane_ParamLimits

0x64f3,	// (0x00036038) scroll_pane_cp16_ParamLimits

0x64f3,	// (0x00036038) scroll_pane_cp16

0x5203,	// (0x00034d48) button_value_adjust_pane_ParamLimits

0x5203,	// (0x00034d48) button_value_adjust_pane

0xd969,	// (0x0003d4ae) button_value_adjust_pane_cp6_ParamLimits

0xd969,	// (0x0003d4ae) button_value_adjust_pane_cp6

0xda83,	// (0x0003d5c8) settings_code_pane_cp_ParamLimits

0xda83,	// (0x0003d5c8) settings_code_pane_cp

0x2935,	// (0x0003247a) cell_touch_pane_g1

0x2935,	// (0x0003247a) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003f24e) cell_touch_pane_g

0xdbf0,	// (0x0003d735) cell_touch_pane_cp_ParamLimits

0xdbf0,	// (0x0003d735) cell_touch_pane_cp

0xdc0c,	// (0x0003d751) cell_touch_pane_ParamLimits

0xdc0c,	// (0x0003d751) cell_touch_pane

0x2935,	// (0x0003247a) scroll_sc2_down_pane_g1

0x2935,	// (0x0003247a) scroll_sc2_up_pane_g1

0x293f,	// (0x00032484) bg_set_opt_pane_cp4_vc

0x6883,	// (0x000363c8) list_set_graphic_pane_vc_g1_ParamLimits

0x6883,	// (0x000363c8) list_set_graphic_pane_vc_g1

0x688f,	// (0x000363d4) list_set_graphic_pane_vc_g2_ParamLimits

0x688f,	// (0x000363d4) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x0003f53e) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x0003f53e) list_set_graphic_pane_vc_g

0x689b,	// (0x000363e0) text_primary_small_cp13_vc_ParamLimits

0x689b,	// (0x000363e0) text_primary_small_cp13_vc

0x68b3,	// (0x000363f8) list_set_graphic_pane_vc_ParamLimits

0x68b3,	// (0x000363f8) list_set_graphic_pane_vc

0x293f,	// (0x00032484) input_focus_pane_cp2_vc

0x2935,	// (0x0003247a) setting_code_pane_vc_g1

0x2a6a,	// (0x000325af) setting_code_pane_vc_t1

0x68c5,	// (0x0003640a) set_text_pane_vc_t1_ParamLimits

0x68c5,	// (0x0003640a) set_text_pane_vc_t1

0x293f,	// (0x00032484) input_focus_pane_cp1_vc

0x68e1,	// (0x00036426) list_set_text_pane_vc

0x2935,	// (0x0003247a) setting_text_pane_vc_g1

0x293f,	// (0x00032484) bg_set_opt_pane_cp2_vc

0x2a61,	// (0x000325a6) setting_slider_graphic_pane_vc_g1

0x68eb,	// (0x00036430) setting_slider_graphic_pane_vc_t1

0x68fb,	// (0x00036440) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x0003f543) setting_slider_graphic_pane_vc_t

0x690b,	// (0x00036450) slider_set_pane_cp_vc

0x6913,	// (0x00036458) slider_set_pane_vc_g1

0x691c,	// (0x00036461) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x0003f548) slider_set_pane_vc_g

0x3929,	// (0x0003346e) set_opt_bg_pane_g1_copy1

0x3931,	// (0x00033476) set_opt_bg_pane_g2_copy1

0x6948,	// (0x0003648d) set_opt_bg_pane_g3_copy1

0x3941,	// (0x00033486) set_opt_bg_pane_g4_copy1

0x3949,	// (0x0003348e) set_opt_bg_pane_g5_copy1

0x3951,	// (0x00033496) set_opt_bg_pane_g6_copy1

0x6952,	// (0x00036497) set_opt_bg_pane_g7_copy1

0x695a,	// (0x0003649f) set_opt_bg_pane_g8_copy1

0x6964,	// (0x000364a9) set_opt_bg_pane_g9_copy1

0x293f,	// (0x00032484) bg_set_opt_pane_cp_vc

0x696e,	// (0x000364b3) setting_slider_pane_vc_t1

0x697d,	// (0x000364c2) setting_slider_pane_vc_t2

0x698d,	// (0x000364d2) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x0003f557) setting_slider_pane_vc_t

0x699d,	// (0x000364e2) slider_set_pane_vc

0x1632,	// (0x00031177) volume_set_pane_vc_g1

0x163b,	// (0x00031180) volume_set_pane_vc_g2

0x1644,	// (0x00031189) volume_set_pane_vc_g3

0x164d,	// (0x00031192) volume_set_pane_vc_g4

0x1656,	// (0x0003119b) volume_set_pane_vc_g5

0x165f,	// (0x000311a4) volume_set_pane_vc_g6

0x1668,	// (0x000311ad) volume_set_pane_vc_g7

0x1671,	// (0x000311b6) volume_set_pane_vc_g8

0x167a,	// (0x000311bf) volume_set_pane_vc_g9

0x1683,	// (0x000311c8) volume_set_pane_vc_g10

0x0009,

0xfa19,	// (0x0003f55e) volume_set_pane_vc_g

0x69a5,	// (0x000364ea) volume_set_pane_vc

0x69ad,	// (0x000364f2) button_value_adjust_pane_cp1_vc

0x69b7,	// (0x000364fc) list_highlight_pane_cp2_vc

0x69c0,	// (0x00036505) list_set_pane_vc_ParamLimits

0x69c0,	// (0x00036505) list_set_pane_vc

0x6a1e,	// (0x00036563) main_pane_set_vc_t1_ParamLimits

0x6a1e,	// (0x00036563) main_pane_set_vc_t1

0x6a33,	// (0x00036578) main_pane_set_vc_t2_ParamLimits

0x6a33,	// (0x00036578) main_pane_set_vc_t2

0x6a45,	// (0x0003658a) main_pane_set_vc_t3_ParamLimits

0x6a45,	// (0x0003658a) main_pane_set_vc_t3

0x6a59,	// (0x0003659e) main_pane_set_vc_t4_ParamLimits

0x6a59,	// (0x0003659e) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x0003f573) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x0003f573) main_pane_set_vc_t

0x6a6d,	// (0x000365b2) setting_code_pane_vc_ParamLimits

0x6a6d,	// (0x000365b2) setting_code_pane_vc

0x6a7e,	// (0x000365c3) setting_slider_graphic_pane_vc

0x6a7e,	// (0x000365c3) setting_slider_pane_vc

0x6a7e,	// (0x000365c3) setting_text_pane_vc

0x6a7e,	// (0x000365c3) setting_volume_pane_vc

0x6a88,	// (0x000365cd) scroll_pane_cp121_vc

0x38a8,	// (0x000333ed) set_content_pane_vc

0x6a90,	// (0x000365d5) button_value_adjust_pane_g1

0x6a99,	// (0x000365de) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x0003f5c6) button_value_adjust_pane_g

0x6aa2,	// (0x000365e7) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6aa2,	// (0x000365e7) form_field_slider_wide_pane_vc_t1

0x6ab6,	// (0x000365fb) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6ab6,	// (0x000365fb) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x0003f5cb) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x0003f5cb) form_field_slider_wide_pane_vc_t

0x2c9a,	// (0x000327df) input_focus_pane_cp10_vc_ParamLimits

0x2c9a,	// (0x000327df) input_focus_pane_cp10_vc

0x6ae4,	// (0x00036629) slider_cont_pane_cp1_vc_ParamLimits

0x6ae4,	// (0x00036629) slider_cont_pane_cp1_vc

0x6af6,	// (0x0003663b) slider_form_pane_g1_cp2

0x691c,	// (0x00036461) slider_form_pane_g2_cp2

0x6b23,	// (0x00036668) form_field_slider_pane_vc_t3

0x6b31,	// (0x00036676) form_field_slider_pane_vc_t4

0x6b3f,	// (0x00036684) slider_form_pane_vc_ParamLimits

0x6b3f,	// (0x00036684) slider_form_pane_vc

0x6b4c,	// (0x00036691) form_field_slider_pane_vc_t1_ParamLimits

0x6b4c,	// (0x00036691) form_field_slider_pane_vc_t1

0x6ab6,	// (0x000365fb) form_field_slider_pane_vc_t2_ParamLimits

0x6ab6,	// (0x000365fb) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x0003f5dd) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x0003f5dd) form_field_slider_pane_vc_t

0x2c9a,	// (0x000327df) input_focus_pane_cp9_vc_ParamLimits

0x2c9a,	// (0x000327df) input_focus_pane_cp9_vc

0x6b68,	// (0x000366ad) slider_cont_pane_vc_ParamLimits

0x6b68,	// (0x000366ad) slider_cont_pane_vc

0x6b7c,	// (0x000366c1) list_form_graphic_pane_cp_vc_ParamLimits

0x6b7c,	// (0x000366c1) list_form_graphic_pane_cp_vc

0x4e75,	// (0x000349ba) form_field_popup_wide_pane_vc_g1

0x6b91,	// (0x000366d6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b91,	// (0x000366d6) form_field_popup_wide_pane_vc_t1

0x38ce,	// (0x00033413) input_focus_pane_cp8_vc_ParamLimits

0x38ce,	// (0x00033413) input_focus_pane_cp8_vc

0x6bd6,	// (0x0003671b) list_form_wide_pane_vc_ParamLimits

0x6bd6,	// (0x0003671b) list_form_wide_pane_vc

0x6be2,	// (0x00036727) list_form_graphic_pane_vc_g1

0x6bea,	// (0x0003672f) list_form_graphic_pane_vc_t1_ParamLimits

0x6bea,	// (0x0003672f) list_form_graphic_pane_vc_t1

0x2a1f,	// (0x00032564) list_highlight_pane_cp5_vc_ParamLimits

0x2a1f,	// (0x00032564) list_highlight_pane_cp5_vc

0x6c06,	// (0x0003674b) list_form_graphic_pane_vc_ParamLimits

0x6c06,	// (0x0003674b) list_form_graphic_pane_vc

0x4e75,	// (0x000349ba) form_field_popup_pane_vc_g1

0x6c1c,	// (0x00036761) form_field_popup_pane_vc_t1_ParamLimits

0x6c1c,	// (0x00036761) form_field_popup_pane_vc_t1

0x38ce,	// (0x00033413) input_focus_pane_cp7_vc_ParamLimits

0x38ce,	// (0x00033413) input_focus_pane_cp7_vc

0x6c33,	// (0x00036778) list_form_pane_vc_ParamLimits

0x6c33,	// (0x00036778) list_form_pane_vc

0x6c3f,	// (0x00036784) data_form_pane_vc_t1_ParamLimits

0x6c3f,	// (0x00036784) data_form_pane_vc_t1

0x3929,	// (0x0003346e) input_focus_pane_vc_g1

0x3931,	// (0x00033476) input_focus_pane_vc_g2

0x3939,	// (0x0003347e) input_focus_pane_vc_g3

0x3941,	// (0x00033486) input_focus_pane_vc_g4

0x3949,	// (0x0003348e) input_focus_pane_vc_g5

0x3951,	// (0x00033496) input_focus_pane_vc_g6

0x3959,	// (0x0003349e) input_focus_pane_vc_g7

0x3961,	// (0x000334a6) input_focus_pane_vc_g8

0x3969,	// (0x000334ae) input_focus_pane_vc_g9

0x2935,	// (0x0003247a) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0003f1d7) input_focus_pane_vc_g

0x4e69,	// (0x000349ae) data_form_pane_vc_ParamLimits

0x4e69,	// (0x000349ae) data_form_pane_vc

0x4e75,	// (0x000349ba) form_field_data_pane_vc_g1

0x6c5a,	// (0x0003679f) form_field_data_pane_vc_t1_ParamLimits

0x6c5a,	// (0x0003679f) form_field_data_pane_vc_t1

0x38ce,	// (0x00033413) input_focus_pane_vc_ParamLimits

0x38ce,	// (0x00033413) input_focus_pane_vc

0x6c74,	// (0x000367b9) button_value_adjust_pane_cp3_vc

0x6c7c,	// (0x000367c1) button_value_adjust_pane_cp5_vc

0x6c84,	// (0x000367c9) form_field_data_pane_vc_ParamLimits

0x6c84,	// (0x000367c9) form_field_data_pane_vc

0x6c9b,	// (0x000367e0) form_field_data_pane_vc_cp2

0x6ca3,	// (0x000367e8) form_field_data_wide_pane_vc_ParamLimits

0x6ca3,	// (0x000367e8) form_field_data_wide_pane_vc

0x6cb9,	// (0x000367fe) form_field_data_wide_pane_vc_cp2

0x6cc1,	// (0x00036806) form_field_popup_pane_vc_ParamLimits

0x6cc1,	// (0x00036806) form_field_popup_pane_vc

0x6cd8,	// (0x0003681d) form_field_popup_wide_pane_vc_ParamLimits

0x6cd8,	// (0x0003681d) form_field_popup_wide_pane_vc

0x6cee,	// (0x00036833) form_field_slider_pane_vc_ParamLimits

0x6cee,	// (0x00036833) form_field_slider_pane_vc

0x6d01,	// (0x00036846) form_field_slider_wide_pane_vc_ParamLimits

0x6d01,	// (0x00036846) form_field_slider_wide_pane_vc

0xdc2a,	// (0x0003d76f) grid_touch_1_pane_ParamLimits

0xdc2a,	// (0x0003d76f) grid_touch_1_pane

0xdc3e,	// (0x0003d783) grid_touch_2_pane_ParamLimits

0xdc3e,	// (0x0003d783) grid_touch_2_pane

0x6e18,	// (0x0003695d) touch_pane_g1_ParamLimits

0x6e18,	// (0x0003695d) touch_pane_g1

0x6d38,	// (0x0003687d) cell_app_pane_cp_wide_ParamLimits

0x6d38,	// (0x0003687d) cell_app_pane_cp_wide

0x6d49,	// (0x0003688e) grid_popup_fast_wide_pane_ParamLimits

0x6d49,	// (0x0003688e) grid_popup_fast_wide_pane

0x6d5d,	// (0x000368a2) scroll_pane_cp19_ParamLimits

0x6d5d,	// (0x000368a2) scroll_pane_cp19

0x293f,	// (0x00032484) bg_popup_window_pane_cp20

0x6d71,	// (0x000368b6) listscroll_popup_fast_wide_pane

0x3a91,	// (0x000335d6) grid_indicator_nsta_pane

0x6d79,	// (0x000368be) clock_nsta_pane_g1

0x6d82,	// (0x000368c7) clock_nsta_pane_t1

0xdc68,	// (0x0003d7ad) cell_indicator_nsta_pane_ParamLimits

0xdc68,	// (0x0003d7ad) cell_indicator_nsta_pane

0x6e18,	// (0x0003695d) cell_indicator_nsta_pane_g1

0xdc81,	// (0x0003d7c6) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0003f5ee) cell_indicator_nsta_pane_g

0x6e3c,	// (0x00036981) clock_nsta_pane_cp

0x6e44,	// (0x00036989) indicator_nsta_pane_cp

0x6e4c,	// (0x00036991) nsta_clock_indic_pane_g1

0x2ae8,	// (0x0003262d) grid_indicator_pane

0x3e5f,	// (0x000339a4) scroll_pane_cp29

0x0af2,	// (0x00030637) indicator_nsta_pane_cp2_ParamLimits

0x0af2,	// (0x00030637) indicator_nsta_pane_cp2

0x2a1f,	// (0x00032564) main_apps_wheel_pane

0x508a,	// (0x00034bcf) form_midp_field_text_pane_ParamLimits

0x51d5,	// (0x00034d1a) scroll_bar_cp050_ParamLimits

0x6ea5,	// (0x000369ea) cell_indicator_pane_ParamLimits

0x6ea5,	// (0x000369ea) cell_indicator_pane

0x6ebc,	// (0x00036a01) cell_indicator_pane_g1

0xdc96,	// (0x0003d7db) grid_wheel_folder_pane_ParamLimits

0xdc96,	// (0x0003d7db) grid_wheel_folder_pane

0xdca4,	// (0x0003d7e9) list_wheel_apps_pane_ParamLimits

0xdca4,	// (0x0003d7e9) list_wheel_apps_pane

0xdcb2,	// (0x0003d7f7) main_apps_wheel_pane_g1_ParamLimits

0xdcb2,	// (0x0003d7f7) main_apps_wheel_pane_g1

0xdcbe,	// (0x0003d803) main_apps_wheel_pane_g2_ParamLimits

0xdcbe,	// (0x0003d803) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0003f60a) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0003f60a) main_apps_wheel_pane_g

0xdccc,	// (0x0003d811) main_apps_wheel_pane_t1_ParamLimits

0xdccc,	// (0x0003d811) main_apps_wheel_pane_t1

0xdce0,	// (0x0003d825) list_wheel_apps_pane_g1

0xdce8,	// (0x0003d82d) list_wheel_apps_pane_g2

0xdcf0,	// (0x0003d835) list_wheel_apps_pane_g3

0xdcf8,	// (0x0003d83d) list_wheel_apps_pane_g4

0xdd02,	// (0x0003d847) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0003f60f) list_wheel_apps_pane_g

0x43d7,	// (0x00033f1c) navi_icon_text_pane

0xd255,	// (0x0003cd9a) aid_fill_nsta

0xdd19,	// (0x0003d85e) navi_icon_text_pane_g1

0x6f8d,	// (0x00036ad2) navi_icon_text_pane_t1

0xd0df,	// (0x0003cc24) list_set_graphic_pane_t1_ParamLimits

0xd0df,	// (0x0003cc24) list_set_graphic_pane_t1

0x5930,	// (0x00035475) popup_midp_note_alarm_window_t6_ParamLimits

0x5930,	// (0x00035475) popup_midp_note_alarm_window_t6

0x5942,	// (0x00035487) popup_midp_note_alarm_window_t7_ParamLimits

0x5942,	// (0x00035487) popup_midp_note_alarm_window_t7

0x5954,	// (0x00035499) popup_midp_note_alarm_window_t8_ParamLimits

0x5954,	// (0x00035499) popup_midp_note_alarm_window_t8

0x5966,	// (0x000354ab) popup_midp_note_alarm_window_t9_ParamLimits

0x5966,	// (0x000354ab) popup_midp_note_alarm_window_t9

0x5978,	// (0x000354bd) popup_midp_note_alarm_window_t10_ParamLimits

0x5978,	// (0x000354bd) popup_midp_note_alarm_window_t10

0x598a,	// (0x000354cf) popup_midp_note_alarm_window_t11_ParamLimits

0x598a,	// (0x000354cf) popup_midp_note_alarm_window_t11

0x599c,	// (0x000354e1) scroll_pane_cp17_ParamLimits

0x599c,	// (0x000354e1) scroll_pane_cp17

0x1632,	// (0x00031177) volume_small_pane_cp_g1

0x1a86,	// (0x000315cb) volume_small_pane_cp_g2

0x1a8f,	// (0x000315d4) volume_small_pane_cp_g3

0x1a98,	// (0x000315dd) volume_small_pane_cp_g4

0x1aa1,	// (0x000315e6) volume_small_pane_cp_g5

0x1aaa,	// (0x000315ef) volume_small_pane_cp_g6

0x1ab3,	// (0x000315f8) volume_small_pane_cp_g7

0x1abc,	// (0x00031601) volume_small_pane_cp_g8

0x1ac5,	// (0x0003160a) volume_small_pane_cp_g9

0x1ace,	// (0x00031613) volume_small_pane_cp_g10

0x4626,	// (0x0003416b) midp_ticker_pane_g1_ParamLimits

0x4632,	// (0x00034177) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0003f2a3) midp_ticker_pane_g_ParamLimits

0x463e,	// (0x00034183) midp_ticker_pane_t1_ParamLimits

0xd279,	// (0x0003cdbe) aid_fill_nsta_2

0x51c1,	// (0x00034d06) list_form2_midp_pane

0x630b,	// (0x00035e50) midp_editing_number_pane_ParamLimits

0x631a,	// (0x00035e5f) midp_ticker_pane_ParamLimits

0x6f9f,	// (0x00036ae4) form2_midp_field_pane

0x6fc3,	// (0x00036b08) scroll_pane_cp51

0x6fe3,	// (0x00036b28) form2_midp_button_pane_ParamLimits

0x6fe3,	// (0x00036b28) form2_midp_button_pane

0x6ff5,	// (0x00036b3a) form2_midp_content_pane_ParamLimits

0x6ff5,	// (0x00036b3a) form2_midp_content_pane

0x700f,	// (0x00036b54) form2_midp_field_choice_group_pane

0x7017,	// (0x00036b5c) form2_midp_field_pane_g1

0x701f,	// (0x00036b64) form2_midp_field_pane_g2

0x7027,	// (0x00036b6c) form2_midp_field_pane_g3

0x702f,	// (0x00036b74) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0003f634) form2_midp_field_pane_g

0x7037,	// (0x00036b7c) form2_midp_gauge_slider_pane

0x703f,	// (0x00036b84) form2_midp_gauge_wait_pane

0x7047,	// (0x00036b8c) form2_midp_image_pane_ParamLimits

0x7047,	// (0x00036b8c) form2_midp_image_pane

0x7062,	// (0x00036ba7) form2_midp_label_pane_ParamLimits

0x7062,	// (0x00036ba7) form2_midp_label_pane

0xdd41,	// (0x0003d886) form2_midp_label_pane_cp_ParamLimits

0xdd41,	// (0x0003d886) form2_midp_label_pane_cp

0x709c,	// (0x00036be1) form2_midp_string_pane_ParamLimits

0x709c,	// (0x00036be1) form2_midp_string_pane

0xc4fc,	// (0x0003c041) form2_midp_text_pane_ParamLimits

0xc4fc,	// (0x0003c041) form2_midp_text_pane

0x70ae,	// (0x00036bf3) form2_midp_time_pane

0x70be,	// (0x00036c03) input_focus_pane_cp51_ParamLimits

0x70be,	// (0x00036c03) input_focus_pane_cp51

0x70d6,	// (0x00036c1b) form2_midp_label_pane_t1_ParamLimits

0x70d6,	// (0x00036c1b) form2_midp_label_pane_t1

0xc515,	// (0x0003c05a) form2_mdip_text_pane_t1_ParamLimits

0xc515,	// (0x0003c05a) form2_mdip_text_pane_t1

0x30d9,	// (0x00032c1e) form2_midp_time_pane_t1

0x711f,	// (0x00036c64) form2_midp_gauge_slider_pane_t1

0xdd60,	// (0x0003d8a5) form2_midp_gauge_slider_pane_t2

0xdd72,	// (0x0003d8b7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0003f63d) form2_midp_gauge_slider_pane_t

0x7155,	// (0x00036c9a) form2_midp_slider_pane

0x7161,	// (0x00036ca6) form2_midp_gauge_wait_pane_t1

0x716f,	// (0x00036cb4) form2_midp_wait_pane_ParamLimits

0x716f,	// (0x00036cb4) form2_midp_wait_pane

0xdd84,	// (0x0003d8c9) list_single_2graphic_pane_cp4_ParamLimits

0xdd84,	// (0x0003d8c9) list_single_2graphic_pane_cp4

0xd68f,	// (0x0003d1d4) list_single_midp_graphic_pane_cp_ParamLimits

0xd68f,	// (0x0003d1d4) list_single_midp_graphic_pane_cp

0x293f,	// (0x00032484) list_highlight_pane_cp20

0x71c9,	// (0x00036d0e) list_single_2graphic_pane_g1_cp4

0x71d1,	// (0x00036d16) list_single_2graphic_pane_g2_cp4

0x71d9,	// (0x00036d1e) list_single_2graphic_pane_t1_cp4

0x2a1f,	// (0x00032564) list_highlight_pane_cp21

0x71e8,	// (0x00036d2d) list_single_midp_graphic_pane_g4_cp

0x71f7,	// (0x00036d3c) list_single_midp_graphic_pane_t1_cp

0xdd98,	// (0x0003d8dd) form2_mdip_string_pane_t1_ParamLimits

0xdd98,	// (0x0003d8dd) form2_mdip_string_pane_t1

0x293f,	// (0x00032484) bg_wml_button_pane_cp2

0x2935,	// (0x0003247a) form2_midp_image_pane_g1

0x032a,	// (0x0002fe6f) list_double_large_graphic_pane_g5_ParamLimits

0x032a,	// (0x0002fe6f) list_double_large_graphic_pane_g5

0x4897,	// (0x000343dc) midp_form_pane_ParamLimits

0x2a1f,	// (0x00032564) main_apps_wheel_pane_ParamLimits

0xc016,	// (0x0003bb5b) popup_preview_window_ParamLimits

0xc016,	// (0x0003bb5b) popup_preview_window

0x137c,	// (0x00030ec1) popup_touch_info_window_ParamLimits

0x137c,	// (0x00030ec1) popup_touch_info_window

0x139a,	// (0x00030edf) popup_touch_menu_window_ParamLimits

0x139a,	// (0x00030edf) popup_touch_menu_window

0x292b,	// (0x00032470) bg_popup_sub_pane_cp6

0x7305,	// (0x00036e4a) list_touch_menu_pane

0x730d,	// (0x00036e52) list_single_touch_menu_pane_ParamLimits

0x730d,	// (0x00036e52) list_single_touch_menu_pane

0x7323,	// (0x00036e68) list_single_touch_menu_pane_t1

0x2a1f,	// (0x00032564) bg_popup_sub_pane_cp7_ParamLimits

0x2a1f,	// (0x00032564) bg_popup_sub_pane_cp7

0x7331,	// (0x00036e76) heading_sub_pane

0x7339,	// (0x00036e7e) list_touch_info_pane_ParamLimits

0x7339,	// (0x00036e7e) list_touch_info_pane

0x7348,	// (0x00036e8d) list_single_touch_info_pane_ParamLimits

0x7348,	// (0x00036e8d) list_single_touch_info_pane

0x735a,	// (0x00036e9f) list_single_touch_info_pane_t1

0x7368,	// (0x00036ead) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0003f64b) list_single_touch_info_pane_t

0x4557,	// (0x0003409c) bg_popup_heading_pane_cp

0x7376,	// (0x00036ebb) heading_sub_pane_t1

0x4e03,	// (0x00034948) bg_popup_preview_window_pane_cp_ParamLimits

0x4e03,	// (0x00034948) bg_popup_preview_window_pane_cp

0x7331,	// (0x00036e76) heading_preview_pane

0x7339,	// (0x00036e7e) list_preview_pane_ParamLimits

0x7339,	// (0x00036e7e) list_preview_pane

0x7384,	// (0x00036ec9) popup_preview_window_g1

0x7348,	// (0x00036e8d) list_single_preview_pane_ParamLimits

0x7348,	// (0x00036e8d) list_single_preview_pane

0x738c,	// (0x00036ed1) list_single_preview_pane_g1

0x7394,	// (0x00036ed9) list_single_preview_pane_t1

0x735a,	// (0x00036e9f) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0003f650) list_single_preview_pane_t

0x73a2,	// (0x00036ee7) bg_popup_heading_pane_cp2_ParamLimits

0x73a2,	// (0x00036ee7) bg_popup_heading_pane_cp2

0x73b8,	// (0x00036efd) heading_preview_pane_g1

0x73c0,	// (0x00036f05) heading_preview_pane_t1_ParamLimits

0x73c0,	// (0x00036f05) heading_preview_pane_t1

0x2b0b,	// (0x00032650) soft_indicator_pane_t1_ParamLimits

0x3841,	// (0x00033386) scroll_pane_ParamLimits

0x3d58,	// (0x0003389d) scroll_sc2_left_pane

0x3d61,	// (0x000338a6) scroll_sc2_right_pane

0x3d80,	// (0x000338c5) scroll_bg_pane_g1_ParamLimits

0x3d95,	// (0x000338da) scroll_bg_pane_g2_ParamLimits

0x3dad,	// (0x000338f2) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003f22e) scroll_bg_pane_g_ParamLimits

0x3d80,	// (0x000338c5) scroll_handle_pane_g1_ParamLimits

0x3dcf,	// (0x00033914) scroll_handle_pane_g2_ParamLimits

0x3dad,	// (0x000338f2) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0003f235) scroll_handle_pane_g_ParamLimits

0x0e44,	// (0x00030989) popup_choice_list_window_ParamLimits

0x0e44,	// (0x00030989) popup_choice_list_window

0x4cd9,	// (0x0003481e) choice_list_pane

0x4d5b,	// (0x000348a0) cell_toolbar_pane_t1

0x4d83,	// (0x000348c8) toolbar_button_pane_ParamLimits

0x5e56,	// (0x0003599b) ai_gene_pane_1_t2_ParamLimits

0x5e56,	// (0x0003599b) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0003f458) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0003f458) ai_gene_pane_1_t

0x73dd,	// (0x00036f22) scroll_sc2_left_pane_g1

0x73dd,	// (0x00036f22) scroll_sc2_right_pane_g1

0x4897,	// (0x000343dc) bg_popup_sub_pane_cp10

0x73e7,	// (0x00036f2c) list_choice_list_pane

0x7400,	// (0x00036f45) list_single_choice_list_pane_ParamLimits

0x7400,	// (0x00036f45) list_single_choice_list_pane

0x7413,	// (0x00036f58) list_single_choice_list_pane_g1

0x3a62,	// (0x000335a7) list_single_choice_list_pane_t1_ParamLimits

0x3a62,	// (0x000335a7) list_single_choice_list_pane_t1

0x741b,	// (0x00036f60) choice_list_pane_g1

0x7423,	// (0x00036f68) choice_list_pane_t1

0x292b,	// (0x00032470) input_focus_pane_cp11

0x3c39,	// (0x0003377e) title_pane_stacon_g2_ParamLimits

0x3c39,	// (0x0003377e) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0003f214) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003f214) title_pane_stacon_g

0x4557,	// (0x0003409c) cursor_press_pane

0xbcc9,	// (0x0003b80e) popup_fep_hwr_window_ParamLimits

0xbcc9,	// (0x0003b80e) popup_fep_hwr_window

0x0f6a,	// (0x00030aaf) popup_fep_vkb_window_ParamLimits

0x0f6a,	// (0x00030aaf) popup_fep_vkb_window

0x7431,	// (0x00036f76) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0003f679) fep_vkb_side_pane_g_ParamLimits

0x1b10,	// (0x00031655) fep_hwr_candidate_pane_ParamLimits

0x1b10,	// (0x00031655) fep_hwr_candidate_pane

0x1b3a,	// (0x0003167f) fep_hwr_side_pane_ParamLimits

0x1b3a,	// (0x0003167f) fep_hwr_side_pane

0x1b5a,	// (0x0003169f) fep_hwr_top_pane_ParamLimits

0x1b5a,	// (0x0003169f) fep_hwr_top_pane

0x1b72,	// (0x000316b7) fep_hwr_write_pane_ParamLimits

0x1b72,	// (0x000316b7) fep_hwr_write_pane

0xfb34,	// (0x0003f679) fep_vkb_side_pane_g

0x7439,	// (0x00036f7e) fep_hwr_top_pane_g1

0x744b,	// (0x00036f90) fep_hwr_top_pane_g2

0x1bac,	// (0x000316f1) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0003f655) fep_hwr_top_pane_g

0x1bc1,	// (0x00031706) fep_hwr_top_text_pane

0x3f4f,	// (0x00033a94) fep_hwr_top_text_pane_g1

0x7481,	// (0x00036fc6) fep_hwr_top_text_pane_t1

0x1cb7,	// (0x000317fc) fep_hwr_candidate_pane_g1

0x76d4,	// (0x00037219) fep_vkb_keypad_pane_g3_ParamLimits

0x76d4,	// (0x00037219) fep_vkb_keypad_pane_g3

0x76fc,	// (0x00037241) fep_vkb_keypad_pane_g4_ParamLimits

0x76fc,	// (0x00037241) fep_vkb_keypad_pane_g4

0x776b,	// (0x000372b0) fep_vkb_bottom_pane_g2_ParamLimits

0x776b,	// (0x000372b0) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0003f680) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0003f680) fep_vkb_bottom_pane_g

0x73dd,	// (0x00036f22) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0003f68a) cell_vkb_side_pane_g

0x77f6,	// (0x0003733b) cell_vkb_side_pane_t1

0x7804,	// (0x00037349) cell_vkb_side_pane_t1_copy1

0x73dd,	// (0x00036f22) bg_fep_vkb_candidate_pane_g2

0x7930,	// (0x00037475) cell_vkb_candidate_pane_ParamLimits

0x748f,	// (0x00036fd4) aid_size_cell_vkb_ParamLimits

0x748f,	// (0x00036fd4) aid_size_cell_vkb

0x7930,	// (0x00037475) cell_vkb_candidate_pane

0x1cde,	// (0x00031823) bg_popup_fep_shadow_pane_g1

0xde1c,	// (0x0003d961) fep_vkb_bottom_pane_ParamLimits

0xde1c,	// (0x0003d961) fep_vkb_bottom_pane

0x7553,	// (0x00037098) fep_vkb_candidate_pane_ParamLimits

0x7553,	// (0x00037098) fep_vkb_candidate_pane

0xde41,	// (0x0003d986) fep_vkb_keypad_pane_ParamLimits

0xde41,	// (0x0003d986) fep_vkb_keypad_pane

0xde7d,	// (0x0003d9c2) fep_vkb_side_pane_ParamLimits

0xde7d,	// (0x0003d9c2) fep_vkb_side_pane

0xdeb9,	// (0x0003d9fe) fep_vkb_top_pane_ParamLimits

0xdeb9,	// (0x0003d9fe) fep_vkb_top_pane

0x762d,	// (0x00037172) fep_vkb_top_pane_g1_ParamLimits

0x762d,	// (0x00037172) fep_vkb_top_pane_g1

0x763c,	// (0x00037181) fep_vkb_top_pane_g2_ParamLimits

0x763c,	// (0x00037181) fep_vkb_top_pane_g2

0x764b,	// (0x00037190) fep_vkb_top_pane_g3_ParamLimits

0x764b,	// (0x00037190) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0003f670) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0003f670) fep_vkb_top_pane_g

0x7669,	// (0x000371ae) fep_vkb_top_text_pane_ParamLimits

0x7669,	// (0x000371ae) fep_vkb_top_text_pane

0xdef5,	// (0x0003da3a) fep_vkb_side_pane_g1_ParamLimits

0xdef5,	// (0x0003da3a) fep_vkb_side_pane_g1

0x76c3,	// (0x00037208) grid_vkb_side_pane_ParamLimits

0x76c3,	// (0x00037208) grid_vkb_side_pane

0x1ce6,	// (0x0003182b) bg_popup_fep_shadow_pane_g2

0x1cef,	// (0x00031834) bg_popup_fep_shadow_pane_g3

0x1cf7,	// (0x0003183c) bg_popup_fep_shadow_pane_g4

0x1d00,	// (0x00031845) bg_popup_fep_shadow_pane_g5

0x1d0a,	// (0x0003184f) bg_popup_fep_shadow_pane_g6

0x1d12,	// (0x00031857) bg_popup_fep_shadow_pane_g7

0x3941,	// (0x00033486) bg_popup_fep_shadow_pane_g8

0x771a,	// (0x0003725f) grid_vkb_keypad_number_pane_ParamLimits

0x771a,	// (0x0003725f) grid_vkb_keypad_number_pane

0x772a,	// (0x0003726f) grid_vkb_keypad_pane_ParamLimits

0x772a,	// (0x0003726f) grid_vkb_keypad_pane

0x7750,	// (0x00037295) fep_vkb_bottom_pane_g1_ParamLimits

0x7750,	// (0x00037295) fep_vkb_bottom_pane_g1

0x7779,	// (0x000372be) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7779,	// (0x000372be) grid_vkb_keypad_bottom_left_pane

0x778e,	// (0x000372d3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x778e,	// (0x000372d3) grid_vkb_keypad_bottom_right_pane

0x77a3,	// (0x000372e8) fep_vkb_top_text_pane_g1

0xdf3c,	// (0x0003da81) fep_vkb_top_text_pane_t1

0xdf4e,	// (0x0003da93) cell_vkb_side_pane_ParamLimits

0xdf4e,	// (0x0003da93) cell_vkb_side_pane

0x73dd,	// (0x00036f22) cell_vkb_side_pane_g1

0x7812,	// (0x00037357) cell_vkb_keypad_pane_ParamLimits

0x7812,	// (0x00037357) cell_vkb_keypad_pane

0x7887,	// (0x000373cc) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0003f69d) bg_popup_fep_shadow_pane_g

0x1d24,	// (0x00031869) cell_hwr_side_pane_g1

0x1d24,	// (0x00031869) cell_hwr_side_pane_g2

0x7891,	// (0x000373d6) cell_vkb_keypad_pane_t1

0xdf64,	// (0x0003daa9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf64,	// (0x0003daa9) cell_vkb_keypad_bottom_left_pane

0xdf79,	// (0x0003dabe) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf79,	// (0x0003dabe) cell_vkb_keypad_bottom_right_pane

0x73dd,	// (0x00036f22) cell_vkb_keypad_bottom_left_pane_g1

0x73dd,	// (0x00036f22) cell_vkb_keypad_bottom_right_pane_g1

0x78f5,	// (0x0003743a) cell_vkb_keypad_number_pane_ParamLimits

0x78f5,	// (0x0003743a) cell_vkb_keypad_number_pane

0x7914,	// (0x00037459) cell_vkb_keypad_number_pane_g1

0x791e,	// (0x00037463) cell_vkb_keypad_number_pane_g2

0x7927,	// (0x0003746c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0003f68f) cell_vkb_keypad_number_pane_g

0x7891,	// (0x000373d6) cell_vkb_keypad_number_pane_t1

0x794b,	// (0x00037490) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0003f6b0) cell_hwr_side_pane_g

0x7964,	// (0x000374a9) cell_hwr_side_pane_t1

0x1d2e,	// (0x00031873) cell_hwr_side_pane_t1_copy1

0x1d3c,	// (0x00031881) cell_hwr_candidate_pane_g1

0x1d6b,	// (0x000318b0) cell_hwr_candidate_pane_t1

0x73dd,	// (0x00036f22) cell_vkb_candidate_pane_g2

0x79d5,	// (0x0003751a) cell_vkb_candidate_pane_t1

0x1ad7,	// (0x0003161c) bg_popup_fep_shadow_pane_ParamLimits

0x1ad7,	// (0x0003161c) bg_popup_fep_shadow_pane

0x1b8c,	// (0x000316d1) bg_fep_hwr_top_pane_g4

0x745d,	// (0x00036fa2) bg_hwr_side_pane_g1_ParamLimits

0x745d,	// (0x00036fa2) bg_hwr_side_pane_g1

0xc54a,	// (0x0003c08f) cell_hwr_side_pane_ParamLimits

0xc54a,	// (0x0003c08f) cell_hwr_side_pane

0x1c38,	// (0x0003177d) fep_hwr_write_pane_g1_ParamLimits

0x1c38,	// (0x0003177d) fep_hwr_write_pane_g1

0x1c45,	// (0x0003178a) fep_hwr_write_pane_g2_ParamLimits

0x1c45,	// (0x0003178a) fep_hwr_write_pane_g2

0x1c52,	// (0x00031797) fep_hwr_write_pane_g3_ParamLimits

0x1c52,	// (0x00031797) fep_hwr_write_pane_g3

0xc56a,	// (0x0003c0af) fep_hwr_write_pane_g4_ParamLimits

0xc56a,	// (0x0003c0af) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0003f65c) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0003f65c) fep_hwr_write_pane_g

0x1b8c,	// (0x000316d1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1b8c,	// (0x000316d1) bg_fep_hwr_candidate_pane_g2

0x1c75,	// (0x000317ba) cell_hwr_candidate_pane_ParamLimits

0x1c75,	// (0x000317ba) cell_hwr_candidate_pane

0x1cb7,	// (0x000317fc) fep_hwr_candidate_pane_g1_ParamLimits

0x74bd,	// (0x00037002) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x74bd,	// (0x00037002) bg_popup_fep_shadow_pane_cp2

0x765b,	// (0x000371a0) fep_vkb_top_pane_g4_ParamLimits

0x765b,	// (0x000371a0) fep_vkb_top_pane_g4

0x76a1,	// (0x000371e6) fep_vkb_side_pane_g2_ParamLimits

0x76a1,	// (0x000371e6) fep_vkb_side_pane_g2

0xb7d1,	// (0x0003b316) list_setting_pane_t4_ParamLimits

0xb7d1,	// (0x0003b316) list_setting_pane_t4

0xb86b,	// (0x0003b3b0) list_setting_number_pane_t5_ParamLimits

0xb86b,	// (0x0003b3b0) list_setting_number_pane_t5

0xcff2,	// (0x0003cb37) list_double_heading_pane_cp2_ParamLimits

0xcff2,	// (0x0003cb37) list_double_heading_pane_cp2

0x38dc,	// (0x00033421) list_double_heading_pane_g1_cp2_ParamLimits

0x38dc,	// (0x00033421) list_double_heading_pane_g1_cp2

0x38e8,	// (0x0003342d) list_double_heading_pane_g2_cp2_ParamLimits

0x38e8,	// (0x0003342d) list_double_heading_pane_g2_cp2

0x79e3,	// (0x00037528) list_double_heading_pane_t1_cp2_ParamLimits

0x79e3,	// (0x00037528) list_double_heading_pane_t1_cp2

0x79f9,	// (0x0003753e) list_double_heading_pane_t2_cp2_ParamLimits

0x79f9,	// (0x0003753e) list_double_heading_pane_t2_cp2

0x2913,	// (0x00032458) aid_value_unit2

0xf4e5,	// (0x0003f02a) popup_preview_fixed_window

0x2ca8,	// (0x000327ed) bg_popup_preview_window_pane_cp02

0x7a0b,	// (0x00037550) list_preview_fixed_pane

0x7a51,	// (0x00037596) list_empty_pane_fp_ParamLimits

0x7a51,	// (0x00037596) list_empty_pane_fp

0x7a51,	// (0x00037596) list_single_cale_day_pane_fp_ParamLimits

0x7a51,	// (0x00037596) list_single_cale_day_pane_fp

0x7a51,	// (0x00037596) list_single_graphic_heading_pane_fp_ParamLimits

0x7a51,	// (0x00037596) list_single_graphic_heading_pane_fp

0x7a51,	// (0x00037596) list_single_graphic_pane_fp_ParamLimits

0x7a51,	// (0x00037596) list_single_graphic_pane_fp

0x7a51,	// (0x00037596) list_single_heading_pane_fp_ParamLimits

0x7a51,	// (0x00037596) list_single_heading_pane_fp

0x7a51,	// (0x00037596) list_single_pane_fp_ParamLimits

0x7a51,	// (0x00037596) list_single_pane_fp

0x7a66,	// (0x000375ab) list_single_pane_fp_g1_ParamLimits

0x7a66,	// (0x000375ab) list_single_pane_fp_g1

0x30ec,	// (0x00032c31) list_single_pane_fp_g2_ParamLimits

0x30ec,	// (0x00032c31) list_single_pane_fp_g2

0x30f8,	// (0x00032c3d) list_single_pane_fp_g3_ParamLimits

0x30f8,	// (0x00032c3d) list_single_pane_fp_g3

0x7a72,	// (0x000375b7) list_single_pane_fp_g4_ParamLimits

0x7a72,	// (0x000375b7) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0003f6c3) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003f6c3) list_single_pane_fp_g

0x310c,	// (0x00032c51) list_single_pane_fp_t1_ParamLimits

0x310c,	// (0x00032c51) list_single_pane_fp_t1

0x3123,	// (0x00032c68) list_single_graphic_pane_fp_g1_ParamLimits

0x3123,	// (0x00032c68) list_single_graphic_pane_fp_g1

0x7a66,	// (0x000375ab) list_single_graphic_pane_fp_g2_ParamLimits

0x7a66,	// (0x000375ab) list_single_graphic_pane_fp_g2

0x30ec,	// (0x00032c31) list_single_graphic_pane_fp_g3_ParamLimits

0x30ec,	// (0x00032c31) list_single_graphic_pane_fp_g3

0x30f8,	// (0x00032c3d) list_single_graphic_pane_fp_g4_ParamLimits

0x30f8,	// (0x00032c3d) list_single_graphic_pane_fp_g4

0x7a72,	// (0x000375b7) list_single_graphic_pane_fp_g5_ParamLimits

0x7a72,	// (0x000375b7) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0003f6cc) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0003f6cc) list_single_graphic_pane_fp_g

0x312f,	// (0x00032c74) list_single_graphic_pane_fp_t1_ParamLimits

0x312f,	// (0x00032c74) list_single_graphic_pane_fp_t1

0x3123,	// (0x00032c68) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3123,	// (0x00032c68) list_single_graphic_heading_pane_fp_g1

0x7a66,	// (0x000375ab) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a66,	// (0x000375ab) list_single_graphic_heading_pane_fp_g2

0x30ec,	// (0x00032c31) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x30ec,	// (0x00032c31) list_single_graphic_heading_pane_fp_g3

0x30f8,	// (0x00032c3d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x30f8,	// (0x00032c3d) list_single_graphic_heading_pane_fp_g4

0x7a72,	// (0x000375b7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a72,	// (0x000375b7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003f6cc) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003f6cc) list_single_graphic_heading_pane_fp_g

0x3145,	// (0x00032c8a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3145,	// (0x00032c8a) list_single_graphic_heading_pane_fp_t1

0x315b,	// (0x00032ca0) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x315b,	// (0x00032ca0) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0003f6d7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0003f6d7) list_single_graphic_heading_pane_fp_t

0x316d,	// (0x00032cb2) list_single_cale_day_pane_fp_g1_ParamLimits

0x316d,	// (0x00032cb2) list_single_cale_day_pane_fp_g1

0x7a7e,	// (0x000375c3) list_single_cale_day_pane_fp_g2_ParamLimits

0x7a7e,	// (0x000375c3) list_single_cale_day_pane_fp_g2

0x31a5,	// (0x00032cea) list_single_cale_day_pane_fp_g3_ParamLimits

0x31a5,	// (0x00032cea) list_single_cale_day_pane_fp_g3

0x31cd,	// (0x00032d12) list_single_cale_day_pane_fp_g4_ParamLimits

0x31cd,	// (0x00032d12) list_single_cale_day_pane_fp_g4

0x31f1,	// (0x00032d36) list_single_cale_day_pane_fp_g5_ParamLimits

0x31f1,	// (0x00032d36) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0003f6dc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0003f6dc) list_single_cale_day_pane_fp_g

0x3215,	// (0x00032d5a) list_single_cale_day_pane_fp_t1_ParamLimits

0x3215,	// (0x00032d5a) list_single_cale_day_pane_fp_t1

0x323b,	// (0x00032d80) list_single_cale_day_pane_fp_t2_ParamLimits

0x323b,	// (0x00032d80) list_single_cale_day_pane_fp_t2

0x3254,	// (0x00032d99) list_single_cale_day_pane_fp_t3_ParamLimits

0x3254,	// (0x00032d99) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0003f6e7) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0003f6e7) list_single_cale_day_pane_fp_t

0x7a66,	// (0x000375ab) list_empty_pane_fp_g1_ParamLimits

0x7a66,	// (0x000375ab) list_empty_pane_fp_g1

0x326d,	// (0x00032db2) list_empty_pane_fp_t1

0x327b,	// (0x00032dc0) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0003f6ee) list_empty_pane_fp_t

0x7a66,	// (0x000375ab) list_single_heading_pane_fp_g1_ParamLimits

0x7a66,	// (0x000375ab) list_single_heading_pane_fp_g1

0x30ec,	// (0x00032c31) list_single_heading_pane_fp_g2_ParamLimits

0x30ec,	// (0x00032c31) list_single_heading_pane_fp_g2

0x30f8,	// (0x00032c3d) list_single_heading_pane_fp_g3_ParamLimits

0x30f8,	// (0x00032c3d) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0003f6f3) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0003f6f3) list_single_heading_pane_fp_g

0x3289,	// (0x00032dce) list_single_heading_pane_fp_t1_ParamLimits

0x3289,	// (0x00032dce) list_single_heading_pane_fp_t1

0x329b,	// (0x00032de0) list_single_heading_pane_fp_t2_ParamLimits

0x329b,	// (0x00032de0) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0003f6fa) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0003f6fa) list_single_heading_pane_fp_t

0x3ad0,	// (0x00033615) aid_size_cell_fast

0x2c18,	// (0x0003275d) soft_indicator_pane_cp1_t1

0x3b0d,	// (0x00033652) cell_app_pane_cp2_ParamLimits

0x3b0d,	// (0x00033652) cell_app_pane_cp2

0x1af9,	// (0x0003163e) fep_hwr_candidate_drop_down_list_pane

0x1cd1,	// (0x00031816) fep_hwr_candidate_pane_g3_ParamLimits

0x1cd1,	// (0x00031816) fep_hwr_candidate_pane_g3

0xe37a,	// (0x0003debf) fep_hwr_candidate_pane_g4_ParamLimits

0xe37a,	// (0x0003debf) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0003f669) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0003f669) fep_hwr_candidate_pane_g

0x7542,	// (0x00037087) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7542,	// (0x00037087) fep_vkb_candidate_drop_down_list_pane

0x7953,	// (0x00037498) fep_vkb_candidate_pane_g3

0x795b,	// (0x000374a0) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0003f696) fep_vkb_candidate_pane_g

0x1d3c,	// (0x00031881) cell_hwr_candidate_pane_g1_ParamLimits

0x1d4a,	// (0x0003188f) cell_hwr_candidate_pane_g3_ParamLimits

0x1d4a,	// (0x0003188f) cell_hwr_candidate_pane_g3

0x9079,	// (0x00038bbe) cell_hwr_candidate_pane_g4_ParamLimits

0x9079,	// (0x00038bbe) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0003f6b5) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0003f6b5) cell_hwr_candidate_pane_g

0x799f,	// (0x000374e4) cell_vkb_candidate_pane_g3_ParamLimits

0x799f,	// (0x000374e4) cell_vkb_candidate_pane_g3

0x79ba,	// (0x000374ff) cell_vkb_candidate_pane_g4_ParamLimits

0x79ba,	// (0x000374ff) cell_vkb_candidate_pane_g4

0x7a8a,	// (0x000375cf) cell_app_pane_cp2_g1_ParamLimits

0x7a8a,	// (0x000375cf) cell_app_pane_cp2_g1

0x7aa8,	// (0x000375ed) cell_app_pane_cp2_g2_ParamLimits

0x7aa8,	// (0x000375ed) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0003f6ff) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0003f6ff) cell_app_pane_cp2_g

0x7ab4,	// (0x000375f9) cell_app_pane_cp2_t1_ParamLimits

0x7ab4,	// (0x000375f9) cell_app_pane_cp2_t1

0x38ce,	// (0x00033413) grid_highlight_pane_cp1_ParamLimits

0x38ce,	// (0x00033413) grid_highlight_pane_cp1

0x1d89,	// (0x000318ce) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d89,	// (0x000318ce) cell_hwr_candidate_pane_cp1

0x1d3c,	// (0x00031881) fep_hwr_candidate_drop_down_list_pane_g1

0x1da8,	// (0x000318ed) fep_hwr_candidate_drop_down_list_pane_g2

0x1db5,	// (0x000318fa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0003f704) fep_hwr_candidate_drop_down_list_pane_g

0x1dc2,	// (0x00031907) fep_hwr_candidate_drop_down_list_scroll_pane

0x1dcb,	// (0x00031910) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1dcb,	// (0x00031910) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1dd8,	// (0x0003191d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1dd8,	// (0x0003191d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1de5,	// (0x0003192a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1de5,	// (0x0003192a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1df2,	// (0x00031937) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1df2,	// (0x00031937) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e0d,	// (0x00031952) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e0d,	// (0x00031952) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e28,	// (0x0003196d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e28,	// (0x0003196d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e43,	// (0x00031988) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e43,	// (0x00031988) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e5e,	// (0x000319a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e5e,	// (0x000319a3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0003f70b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0003f70b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ac6,	// (0x0003760b) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ac6,	// (0x0003760b) cell_vkb_candidate_pane_cp1

0x765b,	// (0x000371a0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x765b,	// (0x000371a0) fep_vkb_candidate_drop_down_list_pane_g1

0x7ae6,	// (0x0003762b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ae6,	// (0x0003762b) fep_vkb_candidate_drop_down_list_pane_g2

0x7af3,	// (0x00037638) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7af3,	// (0x00037638) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0003f71c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0003f71c) fep_vkb_candidate_drop_down_list_pane_g

0x7b00,	// (0x00037645) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7b00,	// (0x00037645) fep_vkb_candidate_drop_down_list_scroll_pane

0x7b0d,	// (0x00037652) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7b0d,	// (0x00037652) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7b1a,	// (0x0003765f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7b1a,	// (0x0003765f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7b26,	// (0x0003766b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b26,	// (0x0003766b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7972,	// (0x000374b7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7972,	// (0x000374b7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b32,	// (0x00037677) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b32,	// (0x00037677) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7b53,	// (0x00037698) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b53,	// (0x00037698) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b74,	// (0x000376b9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b74,	// (0x000376b9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b95,	// (0x000376da) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b95,	// (0x000376da) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0003f723) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0003f723) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb382,	// (0x0003aec7) title_pane_g1_ParamLimits

0xb395,	// (0x0003aeda) title_pane_g2_ParamLimits

0xf554,	// (0x0003f099) title_pane_g_ParamLimits

0x3f3f,	// (0x00033a84) aid_call2_pane

0x3f47,	// (0x00033a8c) aid_call_pane

0x3f4f,	// (0x00033a94) popup_clock_analogue_window_g1

0x3f4f,	// (0x00033a94) popup_clock_analogue_window_g2

0x0969,	// (0x000304ae) popup_clock_analogue_window_g3

0x0972,	// (0x000304b7) popup_clock_analogue_window_g4

0x2935,	// (0x0003247a) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0003f243) popup_clock_analogue_window_g

0x097a,	// (0x000304bf) popup_clock_analogue_window_t1

0x0988,	// (0x000304cd) clock_digital_number_pane_ParamLimits

0x0988,	// (0x000304cd) clock_digital_number_pane

0x0994,	// (0x000304d9) clock_digital_number_pane_cp02_ParamLimits

0x0994,	// (0x000304d9) clock_digital_number_pane_cp02

0x09a0,	// (0x000304e5) clock_digital_number_pane_cp03_ParamLimits

0x09a0,	// (0x000304e5) clock_digital_number_pane_cp03

0x09ac,	// (0x000304f1) clock_digital_number_pane_cp04_ParamLimits

0x09ac,	// (0x000304f1) clock_digital_number_pane_cp04

0x09b8,	// (0x000304fd) clock_digital_separator_pane_ParamLimits

0x09b8,	// (0x000304fd) clock_digital_separator_pane

0x09c4,	// (0x00030509) popup_clock_digital_window_t1_ParamLimits

0x09c4,	// (0x00030509) popup_clock_digital_window_t1

0x2935,	// (0x0003247a) clock_digital_number_pane_g1

0x2935,	// (0x0003247a) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003f24e) clock_digital_number_pane_g

0x2935,	// (0x0003247a) clock_digital_separator_pane_g1

0x2935,	// (0x0003247a) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003f24e) clock_digital_separator_pane_g

0xd255,	// (0x0003cd9a) aid_fill_nsta_ParamLimits

0xd38b,	// (0x0003ced0) indicator_nsta_pane_ParamLimits

0x4b6e,	// (0x000346b3) popup_clock_analogue_window

0x4b6e,	// (0x000346b3) popup_clock_digital_window

0x3a91,	// (0x000335d6) grid_indicator_nsta_pane_ParamLimits

0x6d90,	// (0x000368d5) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0003f5e9) clock_nsta_pane_t

0x092d,	// (0x00030472) aid_size_max_handle

0xba0a,	// (0x0003b54f) aid_size_min_handle

0x4557,	// (0x0003409c) editor_scroll_pane

0x7bb0,	// (0x000376f5) ex_editor_pane

0x3a3e,	// (0x00033583) scroll_pane_cp13

0x386d,	// (0x000333b2) scroll_pane_cp14

0x3f7e,	// (0x00033ac3) scroll_pane_cp36

0xd003,	// (0x0003cb48) list_single_graphic_hl_pane_cp2_ParamLimits

0xd003,	// (0x0003cb48) list_single_graphic_hl_pane_cp2

0xc4d8,	// (0x0003c01d) list_single_graphic_hl_pane_ParamLimits

0xc4d8,	// (0x0003c01d) list_single_graphic_hl_pane

0x32b1,	// (0x00032df6) aid_size_min_hl_cp1

0x7bb8,	// (0x000376fd) list_highlight_pane_cp34_ParamLimits

0x7bb8,	// (0x000376fd) list_highlight_pane_cp34

0x7bc9,	// (0x0003770e) list_single_graphic_hl_pane_g1_ParamLimits

0x7bc9,	// (0x0003770e) list_single_graphic_hl_pane_g1

0xc57f,	// (0x0003c0c4) list_single_graphic_hl_pane_g2_ParamLimits

0xc57f,	// (0x0003c0c4) list_single_graphic_hl_pane_g2

0xc57f,	// (0x0003c0c4) list_single_graphic_hl_pane_g3_ParamLimits

0xc57f,	// (0x0003c0c4) list_single_graphic_hl_pane_g3

0xc58b,	// (0x0003c0d0) list_single_graphic_hl_pane_g4_ParamLimits

0xc58b,	// (0x0003c0d0) list_single_graphic_hl_pane_g4

0xc597,	// (0x0003c0dc) list_single_graphic_hl_pane_g5_ParamLimits

0xc597,	// (0x0003c0dc) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0003f734) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0003f734) list_single_graphic_hl_pane_g

0xc5ab,	// (0x0003c0f0) list_single_graphic_hl_pane_t1_ParamLimits

0xc5ab,	// (0x0003c0f0) list_single_graphic_hl_pane_t1

0x7bd6,	// (0x0003771b) aid_size_min_hl_cp2

0x7bdf,	// (0x00037724) list_highlight_pane_cp34_cp2_ParamLimits

0x7bdf,	// (0x00037724) list_highlight_pane_cp34_cp2

0x7bc9,	// (0x0003770e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7bc9,	// (0x0003770e) list_single_graphic_hl_pane_g1_cp2

0x7bec,	// (0x00037731) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7bec,	// (0x00037731) list_single_graphic_hl_pane_g2_cp2

0xdf94,	// (0x0003dad9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdf94,	// (0x0003dad9) list_single_graphic_hl_pane_g3_cp2

0x7993,	// (0x000374d8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7993,	// (0x000374d8) list_single_graphic_hl_pane_g4_cp2

0x7c06,	// (0x0003774b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7c06,	// (0x0003774b) list_single_graphic_hl_pane_g5_cp2

0xbaf1,	// (0x0003b636) control_pane_g4_ParamLimits

0xbaf1,	// (0x0003b636) control_pane_g4

0x4897,	// (0x000343dc) bg_popup_sub_pane_cp10_ParamLimits

0x73e7,	// (0x00036f2c) list_choice_list_pane_ParamLimits

0x73f6,	// (0x00036f3b) scroll_pane_cp23

0x2ca8,	// (0x000327ed) bg_popup_preview_window_pane_cp02_ParamLimits

0x7a0b,	// (0x00037550) list_preview_fixed_pane_ParamLimits

0x7a21,	// (0x00037566) list_preview_fixed_pane_cp_ParamLimits

0x7a21,	// (0x00037566) list_preview_fixed_pane_cp

0x7a2d,	// (0x00037572) popup_preview_fixed_window_g1_ParamLimits

0x7a2d,	// (0x00037572) popup_preview_fixed_window_g1

0x7a39,	// (0x0003757e) popup_preview_fixed_window_g2_ParamLimits

0x7a39,	// (0x0003757e) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0003f6bc) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0003f6bc) popup_preview_fixed_window_g

0x08a1,	// (0x000303e6) aid_navi_side_left_pane_ParamLimits

0x08b6,	// (0x000303fb) aid_navi_side_right_pane_ParamLimits

0x08ce,	// (0x00030413) navi_icon_pane_stacon_ParamLimits

0x08e2,	// (0x00030427) navi_navi_pane_stacon_ParamLimits

0x08ce,	// (0x00030413) navi_text_pane_stacon_ParamLimits

0xf3dc,	// (0x0003ef21) main_text_info_pane

0x7c30,	// (0x00037775) listscroll_text_info_pane

0x7c38,	// (0x0003777d) list_text_info_pane_ParamLimits

0x7c38,	// (0x0003777d) list_text_info_pane

0x7c47,	// (0x0003778c) scroll_pane_cp24_ParamLimits

0x7c47,	// (0x0003778c) scroll_pane_cp24

0xdfa2,	// (0x0003dae7) list_text_info_pane_t1_ParamLimits

0xdfa2,	// (0x0003dae7) list_text_info_pane_t1

0xbc3c,	// (0x0003b781) popup_fast_swap2_window_ParamLimits

0xbc3c,	// (0x0003b781) popup_fast_swap2_window

0x7c96,	// (0x000377db) aid_size_cell_fast2

0x292b,	// (0x00032470) bg_popup_window_pane_cp17

0x51ed,	// (0x00034d32) heading_pane_cp2

0x3537,	// (0x0003307c) listscroll_fast2_pane

0x7ca0,	// (0x000377e5) grid_fast2_pane

0x7caa,	// (0x000377ef) listscroll_fast2_pane_g1

0x7cb2,	// (0x000377f7) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0003f73f) listscroll_fast2_pane_g

0x3a3e,	// (0x00033583) scroll_pane_cp26

0x7cbc,	// (0x00037801) cell_fast2_pane_ParamLimits

0x7cbc,	// (0x00037801) cell_fast2_pane

0x7cd1,	// (0x00037816) cell_fast2_pane_g1

0x7cda,	// (0x0003781f) cell_fast2_pane_g2

0x7ce3,	// (0x00037828) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0003f744) cell_fast2_pane_g

0x362a,	// (0x0003316f) grid_highlight_pane_cp9

0x0e20,	// (0x00030965) main_eswt_pane_ParamLimits

0x0e20,	// (0x00030965) main_eswt_pane

0x7c5c,	// (0x000377a1) list_single_text_info_pane

0x7ceb,	// (0x00037830) eswt_ctrl_button_pane

0x7ceb,	// (0x00037830) eswt_ctrl_canvas_pane

0x7cf3,	// (0x00037838) eswt_ctrl_combo_pane

0x7ceb,	// (0x00037830) eswt_ctrl_default_pane

0x7ceb,	// (0x00037830) eswt_ctrl_label_pane

0x7cfb,	// (0x00037840) eswt_ctrl_wait_pane

0x7d03,	// (0x00037848) eswt_shell_pane

0x292b,	// (0x00032470) listscroll_eswt_app_pane

0x7d23,	// (0x00037868) popup_eswt_tasktip_window_ParamLimits

0x7d23,	// (0x00037868) popup_eswt_tasktip_window

0x4e03,	// (0x00034948) bg_popup_window_pane_cp18

0x7d34,	// (0x00037879) eswt_control_pane_g1_ParamLimits

0x7d34,	// (0x00037879) eswt_control_pane_g1

0x7d41,	// (0x00037886) eswt_control_pane_g2_ParamLimits

0x7d41,	// (0x00037886) eswt_control_pane_g2

0x7d4e,	// (0x00037893) eswt_control_pane_g3_ParamLimits

0x7d4e,	// (0x00037893) eswt_control_pane_g3

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_ParamLimits

0x7d5b,	// (0x000378a0) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0003f74b) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0003f74b) eswt_control_pane_g

0x38ce,	// (0x00033413) bg_button_pane_ParamLimits

0x38ce,	// (0x00033413) bg_button_pane

0x363f,	// (0x00033184) common_borders_pane_copy2_ParamLimits

0x363f,	// (0x00033184) common_borders_pane_copy2

0x7d68,	// (0x000378ad) control_button_pane_g1_ParamLimits

0x7d68,	// (0x000378ad) control_button_pane_g1

0x7d74,	// (0x000378b9) control_button_pane_g2_ParamLimits

0x7d74,	// (0x000378b9) control_button_pane_g2

0x7d80,	// (0x000378c5) control_button_pane_g3_ParamLimits

0x7d80,	// (0x000378c5) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0003f754) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0003f754) control_button_pane_g

0x7d94,	// (0x000378d9) control_button_pane_t1

0x7da2,	// (0x000378e7) control_button_pane_t2

0x0001,

0xfc16,	// (0x0003f75b) control_button_pane_t

0x4d8f,	// (0x000348d4) bg_button_pane_g1

0x4d9f,	// (0x000348e4) bg_button_pane_g2

0x4d97,	// (0x000348dc) bg_button_pane_g3

0x4daf,	// (0x000348f4) bg_button_pane_g4

0x4da7,	// (0x000348ec) bg_button_pane_g5

0x4db7,	// (0x000348fc) bg_button_pane_g6

0x4dbf,	// (0x00034904) bg_button_pane_g7

0x4dcf,	// (0x00034914) bg_button_pane_g8

0x4dc7,	// (0x0003490c) bg_button_pane_g9

0x0008,

0xf867,	// (0x0003f3ac) bg_button_pane_g

0x73a2,	// (0x00036ee7) common_borders_pane_ParamLimits

0x73a2,	// (0x00036ee7) common_borders_pane

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy1_ParamLimits

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy1

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy1_ParamLimits

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy1

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy1_ParamLimits

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy1

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy1_ParamLimits

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy1

0x73dd,	// (0x00036f22) bg_eswt_ctrl_canvas_pane_g1

0x73a2,	// (0x00036ee7) common_borders_pane_cp2_ParamLimits

0x73a2,	// (0x00036ee7) common_borders_pane_cp2

0x73a2,	// (0x00036ee7) common_borders_pane_cp3_ParamLimits

0x73a2,	// (0x00036ee7) common_borders_pane_cp3

0x7db0,	// (0x000378f5) separator_horizontal_pane

0x7db8,	// (0x000378fd) separator_vertical_pane

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy2_ParamLimits

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy2

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy2_ParamLimits

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy2

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy2_ParamLimits

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy2

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy2_ParamLimits

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy2

0x292b,	// (0x00032470) common_borders_pane_cp4

0x7dc1,	// (0x00037906) separator_horizontal_pane_g1

0x7dca,	// (0x0003790f) separator_horizontal_pane_g2

0x7dd3,	// (0x00037918) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0003f760) separator_horizontal_pane_g

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy3_ParamLimits

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy3

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy3_ParamLimits

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy3

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy3_ParamLimits

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy3

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy3_ParamLimits

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy3

0x292b,	// (0x00032470) common_borders_pane_cp5

0x7ddc,	// (0x00037921) separator_vertical_pane_g1

0x7de5,	// (0x0003792a) separator_vertical_pane_g2

0x7dee,	// (0x00037933) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0003f767) separator_vertical_pane_g

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy4_ParamLimits

0x7d34,	// (0x00037879) eswt_control_pane_g1_copy4

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy4_ParamLimits

0x7d41,	// (0x00037886) eswt_control_pane_g2_copy4

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy4_ParamLimits

0x7d4e,	// (0x00037893) eswt_control_pane_g3_copy4

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy4_ParamLimits

0x7d5b,	// (0x000378a0) eswt_control_pane_g4_copy4

0xdfbd,	// (0x0003db02) eswt_ctrl_combo_button_pane

0xdfc5,	// (0x0003db0a) eswt_ctrl_input_pane

0xdfcd,	// (0x0003db12) popup_choice_list_window_cp70

0xdfd5,	// (0x0003db1a) eswt_ctrl_input_pane_t1

0x292b,	// (0x00032470) input_focus_pane_cp70

0x73a2,	// (0x00036ee7) bg_button_pane_cp70_ParamLimits

0x73a2,	// (0x00036ee7) bg_button_pane_cp70

0xdfe3,	// (0x0003db28) eswt_ctrl_combo_button_pane_g1

0x7e25,	// (0x0003796a) wait_bar_pane_cp70

0x4e03,	// (0x00034948) bg_popup_window_pane_cp70_ParamLimits

0x4e03,	// (0x00034948) bg_popup_window_pane_cp70

0x7e2d,	// (0x00037972) popup_eswt_tasktip_window_t1

0x7e43,	// (0x00037988) wait_bar_pane_cp71_ParamLimits

0x7e43,	// (0x00037988) wait_bar_pane_cp71

0x7e4f,	// (0x00037994) grid_eswt_app_pane

0x3d58,	// (0x0003389d) scroll_pane_cp70

0xdfeb,	// (0x0003db30) cell_eswt_app_pane_ParamLimits

0xdfeb,	// (0x0003db30) cell_eswt_app_pane

0xe015,	// (0x0003db5a) cell_eswt_app_pane_g1_ParamLimits

0xe015,	// (0x0003db5a) cell_eswt_app_pane_g1

0xe044,	// (0x0003db89) cell_eswt_app_pane_g2_ParamLimits

0xe044,	// (0x0003db89) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0003f76e) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0003f76e) cell_eswt_app_pane_g

0xe06d,	// (0x0003dbb2) cell_eswt_app_pane_t1_ParamLimits

0xe06d,	// (0x0003dbb2) cell_eswt_app_pane_t1

0x7f12,	// (0x00037a57) grid_highlight_pane_cp70_ParamLimits

0x7f12,	// (0x00037a57) grid_highlight_pane_cp70

0x442c,	// (0x00033f71) set_content_pane_g1

0x47f7,	// (0x0003433c) status_small_volume_pane

0x1e79,	// (0x000319be) status_small_volume_pane_g1

0x1e81,	// (0x000319c6) volume_small2_pane

0x1e8a,	// (0x000319cf) volume_small2_pane_g1

0x1e93,	// (0x000319d8) volume_small2_pane_g2

0x1e9c,	// (0x000319e1) volume_small2_pane_g3

0x1ea5,	// (0x000319ea) volume_small2_pane_g4

0x1eae,	// (0x000319f3) volume_small2_pane_g5

0x1eb7,	// (0x000319fc) volume_small2_pane_g6

0x1ec0,	// (0x00031a05) volume_small2_pane_g7

0x1ec9,	// (0x00031a0e) volume_small2_pane_g8

0x1ed2,	// (0x00031a17) volume_small2_pane_g9

0x1edb,	// (0x00031a20) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0003f773) volume_small2_pane_g

0x77a3,	// (0x000372e8) fep_vkb_top_text_pane_g1_ParamLimits

0xdf3c,	// (0x0003da81) fep_vkb_top_text_pane_t1_ParamLimits

0x7a45,	// (0x0003758a) popup_preview_fixed_window_g3_ParamLimits

0x7a45,	// (0x0003758a) popup_preview_fixed_window_g3

0xc259,	// (0x0003bd9e) popup_toolbar_trans_pane

0xd958,	// (0x0003d49d) aid_height_set_list_ParamLimits

0x6184,	// (0x00035cc9) aid_size_parent_ParamLimits

0x4897,	// (0x000343dc) list_highlight_pane_cp2_ParamLimits

0x442c,	// (0x00033f71) set_content_pane_g1_ParamLimits

0xc4ea,	// (0x0003c02f) list_single_image_pane_ParamLimits

0xc4ea,	// (0x0003c02f) list_single_image_pane

0xe09f,	// (0x0003dbe4) aid_size_cell_image_ParamLimits

0xe09f,	// (0x0003dbe4) aid_size_cell_image

0xe0ac,	// (0x0003dbf1) grid_single_image_pane_ParamLimits

0xe0ac,	// (0x0003dbf1) grid_single_image_pane

0x571e,	// (0x00035263) list_single_image_pane_g1_ParamLimits

0x571e,	// (0x00035263) list_single_image_pane_g1

0x7f37,	// (0x00037a7c) list_single_image_pane_g2_ParamLimits

0x7f37,	// (0x00037a7c) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0003f788) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0003f788) list_single_image_pane_g

0x7f4b,	// (0x00037a90) list_single_image_pane_t1_ParamLimits

0x7f4b,	// (0x00037a90) list_single_image_pane_t1

0xe0ba,	// (0x0003dbff) cell_image_list_pane_ParamLimits

0xe0ba,	// (0x0003dbff) cell_image_list_pane

0xe0d0,	// (0x0003dc15) cell_image_list_pane_g1

0xe0d9,	// (0x0003dc1e) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0003f78d) cell_image_list_pane_g

0x7f87,	// (0x00037acc) aid_size_cell_tb_trans_pane

0x38ce,	// (0x00033413) bg_tb_trans_pane

0x7f99,	// (0x00037ade) grid_tb_trans_pane

0x4d8f,	// (0x000348d4) bg_tb_trans_pane_g1

0x4d9f,	// (0x000348e4) bg_tb_trans_pane_g2

0x4d97,	// (0x000348dc) bg_tb_trans_pane_g3

0x4daf,	// (0x000348f4) bg_tb_trans_pane_g4

0x4da7,	// (0x000348ec) bg_tb_trans_pane_g5

0x4dcf,	// (0x00034914) bg_tb_trans_pane_g6

0x4dc7,	// (0x0003490c) bg_tb_trans_pane_g7

0x4db7,	// (0x000348fc) bg_tb_trans_pane_g8

0x4dbf,	// (0x00034904) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0003f792) bg_tb_trans_pane_g

0x7fad,	// (0x00037af2) cell_toolbar_trans_pane_ParamLimits

0x7fad,	// (0x00037af2) cell_toolbar_trans_pane

0x73dd,	// (0x00036f22) cell_toolbar_trans_pane_g1

0xdd25,	// (0x0003d86a) list_form2_midp_pane_t1

0xdd33,	// (0x0003d878) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0003f62f) list_form2_midp_pane_t

0x6fc3,	// (0x00036b08) scroll_pane_cp51_ParamLimits

0x717f,	// (0x00036cc4) form2_midp_wait_pane_g1

0x7188,	// (0x00036ccd) form2_midp_wait_pane_g2

0x7191,	// (0x00036cd6) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0003f644) form2_midp_wait_pane_g

0x2a1f,	// (0x00032564) list_highlight_pane_cp21_ParamLimits

0x71e8,	// (0x00036d2d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x71f7,	// (0x00036d3c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x633c,	// (0x00035e81) list_single_2graphic_im_pane_ParamLimits

0x633c,	// (0x00035e81) list_single_2graphic_im_pane

0xe0e2,	// (0x0003dc27) list_single_2graphic_im_pane_g1_ParamLimits

0xe0e2,	// (0x0003dc27) list_single_2graphic_im_pane_g1

0xe0f3,	// (0x0003dc38) list_single_2graphic_im_pane_g2_ParamLimits

0xe0f3,	// (0x0003dc38) list_single_2graphic_im_pane_g2

0xe0ff,	// (0x0003dc44) list_single_2graphic_im_pane_g3_ParamLimits

0xe0ff,	// (0x0003dc44) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0003f7a5) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0003f7a5) list_single_2graphic_im_pane_g

0xe113,	// (0x0003dc58) list_single_2graphic_im_pane_t1_ParamLimits

0xe113,	// (0x0003dc58) list_single_2graphic_im_pane_t1

0x7a51,	// (0x00037596) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a51,	// (0x00037596) list_single_graphic_2heading_pane_fp

0x3123,	// (0x00032c68) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3123,	// (0x00032c68) list_single_graphic_2heading_pane_fp_g1

0x7a66,	// (0x000375ab) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a66,	// (0x000375ab) list_single_graphic_2heading_pane_fp_g2

0x30ec,	// (0x00032c31) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x30ec,	// (0x00032c31) list_single_graphic_2heading_pane_fp_g3

0x30f8,	// (0x00032c3d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x30f8,	// (0x00032c3d) list_single_graphic_2heading_pane_fp_g4

0x7a72,	// (0x000375b7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a72,	// (0x000375b7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003f6cc) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003f6cc) list_single_graphic_2heading_pane_fp_g

0x32fc,	// (0x00032e41) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x32fc,	// (0x00032e41) list_single_graphic_2heading_pane_fp_t1

0x315b,	// (0x00032ca0) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x315b,	// (0x00032ca0) list_single_graphic_2heading_pane_fp_t2

0x3312,	// (0x00032e57) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3312,	// (0x00032e57) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0003f7ae) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0003f7ae) list_single_graphic_2heading_pane_fp_t

0x7469,	// (0x00036fae) fep_hwr_write_pane_g5_ParamLimits

0x7469,	// (0x00036fae) fep_hwr_write_pane_g5

0x7475,	// (0x00036fba) fep_hwr_write_pane_g6_ParamLimits

0x7475,	// (0x00036fba) fep_hwr_write_pane_g6

0x7d03,	// (0x00037848) eswt_shell_pane_ParamLimits

0x4e03,	// (0x00034948) bg_popup_window_pane_cp18_ParamLimits

0x60cc,	// (0x00035c11) heading_pane_cp70

0x7e2d,	// (0x00037972) popup_eswt_tasktip_window_t1_ParamLimits

0xd2b0,	// (0x0003cdf5) aid_touch_tab_arrow_left

0xd2c6,	// (0x0003ce0b) aid_touch_tab_arrow_right

0xb3ad,	// (0x0003aef2) title_pane_g3_ParamLimits

0xb3ad,	// (0x0003aef2) title_pane_g3

0x388d,	// (0x000333d2) set_value_pane_g1

0xc259,	// (0x0003bd9e) popup_toolbar_trans_pane_ParamLimits

0x7f87,	// (0x00037acc) aid_size_cell_tb_trans_pane_ParamLimits

0x38ce,	// (0x00033413) bg_tb_trans_pane_ParamLimits

0x7f99,	// (0x00037ade) grid_tb_trans_pane_ParamLimits

0x2ca8,	// (0x000327ed) cont_note_pane_ParamLimits

0x2ca8,	// (0x000327ed) cont_note_pane

0x363f,	// (0x00033184) cont_snote2_single_text_pane_ParamLimits

0x363f,	// (0x00033184) cont_snote2_single_text_pane

0x363f,	// (0x00033184) cont_snote2_single_graphic_pane_ParamLimits

0x363f,	// (0x00033184) cont_snote2_single_graphic_pane

0x5408,	// (0x00034f4d) cont_note_wait_pane_ParamLimits

0x5408,	// (0x00034f4d) cont_note_wait_pane

0x5408,	// (0x00034f4d) cont_note_image_pane_ParamLimits

0x5408,	// (0x00034f4d) cont_note_image_pane

0x8041,	// (0x00037b86) popup_note2_window_g1_ParamLimits

0x8041,	// (0x00037b86) popup_note2_window_g1

0x8072,	// (0x00037bb7) popup_note2_window_t1_ParamLimits

0x8072,	// (0x00037bb7) popup_note2_window_t1

0x80b7,	// (0x00037bfc) popup_note2_window_t2_ParamLimits

0x80b7,	// (0x00037bfc) popup_note2_window_t2

0x80fc,	// (0x00037c41) popup_note2_window_t3_ParamLimits

0x80fc,	// (0x00037c41) popup_note2_window_t3

0x8141,	// (0x00037c86) popup_note2_window_t4_ParamLimits

0x8141,	// (0x00037c86) popup_note2_window_t4

0x2d2c,	// (0x00032871) popup_note2_window_t5_ParamLimits

0x2d2c,	// (0x00032871) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003f7ba) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003f7ba) popup_note2_window_t

0x8170,	// (0x00037cb5) popup_note2_image_window_g1_ParamLimits

0x8170,	// (0x00037cb5) popup_note2_image_window_g1

0x817c,	// (0x00037cc1) popup_note2_image_window_g2_ParamLimits

0x817c,	// (0x00037cc1) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0003f7c5) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0003f7c5) popup_note2_image_window_g

0x818e,	// (0x00037cd3) popup_note2_image_window_t1_ParamLimits

0x818e,	// (0x00037cd3) popup_note2_image_window_t1

0x81a6,	// (0x00037ceb) popup_note2_image_window_t2_ParamLimits

0x81a6,	// (0x00037ceb) popup_note2_image_window_t2

0x81be,	// (0x00037d03) popup_note2_image_window_t3_ParamLimits

0x81be,	// (0x00037d03) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003f7ca) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003f7ca) popup_note2_image_window_t

0x5416,	// (0x00034f5b) popup_note2_wait_window_g1_ParamLimits

0x5416,	// (0x00034f5b) popup_note2_wait_window_g1

0x81da,	// (0x00037d1f) popup_note2_wait_window_g2_ParamLimits

0x81da,	// (0x00037d1f) popup_note2_wait_window_g2

0x542e,	// (0x00034f73) popup_note2_wait_window_g3_ParamLimits

0x542e,	// (0x00034f73) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0003f7d1) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0003f7d1) popup_note2_wait_window_g

0x81e6,	// (0x00037d2b) popup_note2_wait_window_t1_ParamLimits

0x81e6,	// (0x00037d2b) popup_note2_wait_window_t1

0x8204,	// (0x00037d49) popup_note2_wait_window_t2_ParamLimits

0x8204,	// (0x00037d49) popup_note2_wait_window_t2

0x8222,	// (0x00037d67) popup_note2_wait_window_t3_ParamLimits

0x8222,	// (0x00037d67) popup_note2_wait_window_t3

0x8234,	// (0x00037d79) popup_note2_wait_window_t4_ParamLimits

0x8234,	// (0x00037d79) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003f7d8) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003f7d8) popup_note2_wait_window_t

0x8246,	// (0x00037d8b) wait_bar2_pane_ParamLimits

0x8246,	// (0x00037d8b) wait_bar2_pane

0x825e,	// (0x00037da3) popup_snote2_single_text_window_g1_ParamLimits

0x825e,	// (0x00037da3) popup_snote2_single_text_window_g1

0x8286,	// (0x00037dcb) popup_snote2_single_text_window_t1_ParamLimits

0x8286,	// (0x00037dcb) popup_snote2_single_text_window_t1

0x82d2,	// (0x00037e17) popup_snote2_single_text_window_t2_ParamLimits

0x82d2,	// (0x00037e17) popup_snote2_single_text_window_t2

0x831e,	// (0x00037e63) popup_snote2_single_text_window_t3_ParamLimits

0x831e,	// (0x00037e63) popup_snote2_single_text_window_t3

0x835f,	// (0x00037ea4) popup_snote2_single_text_window_t4_ParamLimits

0x835f,	// (0x00037ea4) popup_snote2_single_text_window_t4

0x8395,	// (0x00037eda) popup_snote2_single_text_window_t5_ParamLimits

0x8395,	// (0x00037eda) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003f7e1) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003f7e1) popup_snote2_single_text_window_t

0x83c0,	// (0x00037f05) popup_snote2_single_graphic_window_g1_ParamLimits

0x83c0,	// (0x00037f05) popup_snote2_single_graphic_window_g1

0x83e8,	// (0x00037f2d) popup_snote2_single_graphic_window_g2_ParamLimits

0x83e8,	// (0x00037f2d) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003f7ec) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003f7ec) popup_snote2_single_graphic_window_g

0x8410,	// (0x00037f55) popup_snote2_single_graphic_window_t1_ParamLimits

0x8410,	// (0x00037f55) popup_snote2_single_graphic_window_t1

0x845c,	// (0x00037fa1) popup_snote2_single_graphic_window_t2_ParamLimits

0x845c,	// (0x00037fa1) popup_snote2_single_graphic_window_t2

0x831e,	// (0x00037e63) popup_snote2_single_graphic_window_t3_ParamLimits

0x831e,	// (0x00037e63) popup_snote2_single_graphic_window_t3

0x835f,	// (0x00037ea4) popup_snote2_single_graphic_window_t4_ParamLimits

0x835f,	// (0x00037ea4) popup_snote2_single_graphic_window_t4

0x8395,	// (0x00037eda) popup_snote2_single_graphic_window_t5_ParamLimits

0x8395,	// (0x00037eda) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003f7f1) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003f7f1) popup_snote2_single_graphic_window_t

0x6e84,	// (0x000369c9) clock_nsta_pane_cp2_t1

0x6e84,	// (0x000369c9) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0003f605) clock_nsta_pane_cp2_t

0x061f,	// (0x00030164) form_field_data_wide_pane_g1_ParamLimits

0x38dc,	// (0x00033421) form_field_data_wide_pane_g2_ParamLimits

0x38dc,	// (0x00033421) form_field_data_wide_pane_g2

0x38e8,	// (0x0003342d) form_field_data_wide_pane_g3_ParamLimits

0x38e8,	// (0x0003342d) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0003f1c6) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0003f1c6) form_field_data_wide_pane_g

0xdc52,	// (0x0003d797) grid_touch_3_pane_ParamLimits

0xdc52,	// (0x0003d797) grid_touch_3_pane

0xe144,	// (0x0003dc89) cell_touch_3_pane_ParamLimits

0xe144,	// (0x0003dc89) cell_touch_3_pane

0x73dd,	// (0x00036f22) cell_touch_3_pane_g1

0x73dd,	// (0x00036f22) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0003f68a) cell_touch_3_pane_g

0x2d5e,	// (0x000328a3) cont_query_data_pane

0x2d66,	// (0x000328ab) cont_query_data_pane_cp1

0x84d6,	// (0x0003801b) button_value_adjust_pane_cp7

0x84de,	// (0x00038023) query_popup_pane_cp3

0x403f,	// (0x00033b84) bg_popup_sub_pane_cp22_ParamLimits

0x09e3,	// (0x00030528) navi_navi_volume_pane_cp2

0x09fe,	// (0x00030543) popup_side_volume_key_window_g2

0x0a0d,	// (0x00030552) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0003f25c) popup_side_volume_key_window_g

0x0a2a,	// (0x0003056f) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0003f263) popup_side_volume_key_window_t

0x42f6,	// (0x00033e3b) popup_side_volume_key_window_ParamLimits

0xb5f8,	// (0x0003b13d) list_double_graphic_pane_g4_ParamLimits

0xb5f8,	// (0x0003b13d) list_double_graphic_pane_g4

0xdad1,	// (0x0003d616) list_single_2heading_msg_pane_ParamLimits

0xdad1,	// (0x0003d616) list_single_2heading_msg_pane

0xc5c1,	// (0x0003c106) list_single_2heading_msg_pane_g1_ParamLimits

0xc5c1,	// (0x0003c106) list_single_2heading_msg_pane_g1

0xc5cd,	// (0x0003c112) list_single_2heading_msg_pane_g2_ParamLimits

0xc5cd,	// (0x0003c112) list_single_2heading_msg_pane_g2

0xc5e0,	// (0x0003c125) list_single_2heading_msg_pane_g3_ParamLimits

0xc5e0,	// (0x0003c125) list_single_2heading_msg_pane_g3

0xc5ec,	// (0x0003c131) list_single_2heading_msg_pane_g4_ParamLimits

0xc5ec,	// (0x0003c131) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003f7fc) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003f7fc) list_single_2heading_msg_pane_g

0xc604,	// (0x0003c149) list_single_2heading_msg_pane_t1_ParamLimits

0xc604,	// (0x0003c149) list_single_2heading_msg_pane_t1

0xc62c,	// (0x0003c171) list_single_2heading_msg_pane_t2_ParamLimits

0xc62c,	// (0x0003c171) list_single_2heading_msg_pane_t2

0xc697,	// (0x0003c1dc) list_single_2heading_msg_pane_t3_ParamLimits

0xc697,	// (0x0003c1dc) list_single_2heading_msg_pane_t3

0x33f7,	// (0x00032f3c) list_single_2heading_msg_pane_t4_ParamLimits

0x33f7,	// (0x00032f3c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003f805) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003f805) list_single_2heading_msg_pane_t

0x2973,	// (0x000324b8) title_pane_g4_ParamLimits

0x2973,	// (0x000324b8) title_pane_g4

0x07f2,	// (0x00030337) title_pane_stacon_g3_ParamLimits

0x07f2,	// (0x00030337) title_pane_stacon_g3

0x8004,	// (0x00037b49) list_single_2graphic_im_pane_g4_ParamLimits

0x8004,	// (0x00037b49) list_single_2graphic_im_pane_g4

0x5e73,	// (0x000359b8) popup_side_volume_key_window_cp

0x667a,	// (0x000361bf) main_idle_act2_pane_t1

0x143b,	// (0x00030f80) toolbar_button_pane_g10

0xce96,	// (0x0003c9db) popup_toolbar_window_cp1

0x6e75,	// (0x000369ba) clock_nsta_pane_cp_t1

0x6e75,	// (0x000369ba) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0003f600) clock_nsta_pane_cp_t

0x09e3,	// (0x00030528) navi_navi_volume_pane_cp2_ParamLimits

0x09f2,	// (0x00030537) popup_side_volume_key_window_g1_ParamLimits

0x09fe,	// (0x00030543) popup_side_volume_key_window_g2_ParamLimits

0x0a0d,	// (0x00030552) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0003f25c) popup_side_volume_key_window_g_ParamLimits

0x1ae5,	// (0x0003162a) fep_hwr_aid_pane

0x1b8c,	// (0x000316d1) bg_fep_hwr_top_pane_g4_ParamLimits

0x7439,	// (0x00036f7e) fep_hwr_top_pane_g1_ParamLimits

0x744b,	// (0x00036f90) fep_hwr_top_pane_g2_ParamLimits

0x1bac,	// (0x000316f1) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0003f655) fep_hwr_top_pane_g_ParamLimits

0x1bc1,	// (0x00031706) fep_hwr_top_text_pane_ParamLimits

0x5c36,	// (0x0003577b) aid_touch_tab_arrow_arrow_2

0x5c3f,	// (0x00035784) aid_touch_tab_arrow_left_2

0x1af9,	// (0x0003163e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1b30,	// (0x00031675) fep_hwr_prediction_pane

0x75ab,	// (0x000370f0) fep_vkb_prediction_pane

0xdf1c,	// (0x0003da61) fep_vkb_side_pane_g3_ParamLimits

0xdf1c,	// (0x0003da61) fep_vkb_side_pane_g3

0x1d3c,	// (0x00031881) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1da8,	// (0x000318ed) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1db5,	// (0x000318fa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0003f704) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1ee4,	// (0x00031a29) fep_hwr_prediction_pane_g1

0x1eee,	// (0x00031a33) fep_hwr_prediction_pane_g2

0x1ef6,	// (0x00031a3b) fep_hwr_prediction_pane_g3

0x1efe,	// (0x00031a43) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003f80e) fep_hwr_prediction_pane_g

0x8503,	// (0x00038048) fep_vkb_prediction_pane_g1

0x850d,	// (0x00038052) fep_vkb_prediction_pane_g2

0x8515,	// (0x0003805a) fep_vkb_prediction_pane_g3

0x851d,	// (0x00038062) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003f817) fep_vkb_prediction_pane_g

0x182e,	// (0x00031373) slider_set_pane_g3

0x1842,	// (0x00031387) slider_set_pane_g4

0x185a,	// (0x0003139f) slider_set_pane_g5

0x182e,	// (0x00031373) slider_set_pane_g6

0x1870,	// (0x000313b5) slider_set_pane_g7

0x62e9,	// (0x00035e2e) slider_form_pane_g3

0x62f2,	// (0x00035e37) slider_form_pane_g4

0x62fa,	// (0x00035e3f) slider_form_pane_g5

0x62e9,	// (0x00035e2e) slider_form_pane_g6

0xdaa3,	// (0x0003d5e8) slider_form_pane_g7

0x6924,	// (0x00036469) slider_set_pane_vc_g3

0x692d,	// (0x00036472) slider_set_pane_vc_g4

0x6936,	// (0x0003647b) slider_set_pane_vc_g5

0x6924,	// (0x00036469) slider_set_pane_vc_g6

0x693f,	// (0x00036484) slider_set_pane_vc_g7

0x6aff,	// (0x00036644) slider_form_pane_vc_g1

0x6b08,	// (0x0003664d) slider_form_pane_vc_g2

0x6b11,	// (0x00036656) slider_form_pane_vc_g3

0x6aff,	// (0x00036644) slider_form_pane_vc_g4

0x6b1a,	// (0x0003665f) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x0003f5d2) slider_form_pane_vc_g

0xf3dc,	// (0x0003ef21) main_idle_act3_pane

0x8525,	// (0x0003806a) ai3_links_pane

0xe18c,	// (0x0003dcd1) popup_ai3_data_window_ParamLimits

0xe18c,	// (0x0003dcd1) popup_ai3_data_window

0x292b,	// (0x00032470) grid_ai3_links_pane

0xe1a6,	// (0x0003dceb) cell_ai3_links_pane_ParamLimits

0xe1a6,	// (0x0003dceb) cell_ai3_links_pane

0x8560,	// (0x000380a5) bg_popup_sub_pane_cp11

0x856d,	// (0x000380b2) cell_ai3_links_pane_g1

0x292b,	// (0x00032470) bg_popup_sub_pane_cp12

0x8592,	// (0x000380d7) heading_ai3_data_pane

0x859a,	// (0x000380df) list_ai3_gene_pane

0x85a6,	// (0x000380eb) popup_ai3_data_window_g1

0x85ae,	// (0x000380f3) heading_ai3_data_pane_g1

0x85b6,	// (0x000380fb) heading_ai3_data_pane_t1

0x85c4,	// (0x00038109) list_double_ai3_gene_pane_ParamLimits

0x85c4,	// (0x00038109) list_double_ai3_gene_pane

0x85d1,	// (0x00038116) list_single_ai3_gene_pane_ParamLimits

0x85d1,	// (0x00038116) list_single_ai3_gene_pane

0x73a2,	// (0x00036ee7) list_highlight_pane_cp7_ParamLimits

0x73a2,	// (0x00036ee7) list_highlight_pane_cp7

0x85de,	// (0x00038123) list_single_a13_gene_pane_t1_ParamLimits

0x85de,	// (0x00038123) list_single_a13_gene_pane_t1

0x85f5,	// (0x0003813a) list_single_ai3_gene_pane_g1

0x85fe,	// (0x00038143) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003f820) list_single_ai3_gene_pane_g

0x8606,	// (0x0003814b) list_double_ai3_gene_pane_g1_ParamLimits

0x8606,	// (0x0003814b) list_double_ai3_gene_pane_g1

0x8612,	// (0x00038157) list_double_ai3_gene_pane_t1_ParamLimits

0x8612,	// (0x00038157) list_double_ai3_gene_pane_t1

0x862e,	// (0x00038173) list_double_ai3_gene_pane_t2_ParamLimits

0x862e,	// (0x00038173) list_double_ai3_gene_pane_t2

0x8644,	// (0x00038189) list_double_ai3_gene_pane_t3_ParamLimits

0x8644,	// (0x00038189) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003f825) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003f825) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3328,	// (0x00032e6d) aid_size_min_col_2

0xe176,	// (0x0003dcbb) aid_size_min_msg_ParamLimits

0xe176,	// (0x0003dcbb) aid_size_min_msg

0xdf30,	// (0x0003da75) fep_vkb_top_text_pane_g2_ParamLimits

0xdf30,	// (0x0003da75) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0003f685) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0003f685) fep_vkb_top_text_pane_g

0xf3dc,	// (0x0003ef21) main_hc_apps_shell_pane

0x8661,	// (0x000381a6) grid_hc_apps_pane_ParamLimits

0x8661,	// (0x000381a6) grid_hc_apps_pane

0x8670,	// (0x000381b5) list_hc_apps_pane

0x8678,	// (0x000381bd) scroll_pane_cp37_ParamLimits

0x8678,	// (0x000381bd) scroll_pane_cp37

0xe1c0,	// (0x0003dd05) cell_hc_apps_pane_ParamLimits

0xe1c0,	// (0x0003dd05) cell_hc_apps_pane

0xe27e,	// (0x0003ddc3) cell_hc_apps_pane_g1_ParamLimits

0xe27e,	// (0x0003ddc3) cell_hc_apps_pane_g1

0x8763,	// (0x000382a8) cell_hc_apps_pane_g2_ParamLimits

0x8763,	// (0x000382a8) cell_hc_apps_pane_g2

0x877f,	// (0x000382c4) cell_hc_apps_pane_g3_ParamLimits

0x877f,	// (0x000382c4) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003f82c) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003f82c) cell_hc_apps_pane_g

0xe2ab,	// (0x0003ddf0) cell_hc_apps_pane_t1_ParamLimits

0xe2ab,	// (0x0003ddf0) cell_hc_apps_pane_t1

0x2ca8,	// (0x000327ed) grid_highlight_pane_cp10_ParamLimits

0x2ca8,	// (0x000327ed) grid_highlight_pane_cp10

0xe2e9,	// (0x0003de2e) list_single_hc_apps_pane_ParamLimits

0xe2e9,	// (0x0003de2e) list_single_hc_apps_pane

0xe316,	// (0x0003de5b) list_single_hc_apps_pane_g1

0xc705,	// (0x0003c24a) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003f833) list_single_hc_apps_pane_g

0xc71e,	// (0x0003c263) list_single_hc_apps_pane_g2_copy1

0xc73a,	// (0x0003c27f) list_single_hc_apps_pane_t1

0x2a1f,	// (0x00032564) bg_set_opt_pane_cp_ParamLimits

0x0010,	// (0x0002fb55) setting_slider_pane_t1_ParamLimits

0x0029,	// (0x0002fb6e) setting_slider_pane_t2_ParamLimits

0x0043,	// (0x0002fb88) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003f0a9) setting_slider_pane_t_ParamLimits

0x005b,	// (0x0002fba0) slider_set_pane_ParamLimits

0x0d16,	// (0x0003085b) control_pane_g5_ParamLimits

0x0d16,	// (0x0003085b) control_pane_g5

0x6138,	// (0x00035c7d) slider_set_pane_g1_ParamLimits

0x1822,	// (0x00031367) slider_set_pane_g2_ParamLimits

0x182e,	// (0x00031373) slider_set_pane_g3_ParamLimits

0x1842,	// (0x00031387) slider_set_pane_g4_ParamLimits

0x185a,	// (0x0003139f) slider_set_pane_g5_ParamLimits

0x182e,	// (0x00031373) slider_set_pane_g6_ParamLimits

0x1870,	// (0x000313b5) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0003f4aa) slider_set_pane_g_ParamLimits

0x43d7,	// (0x00033f1c) navi_icon_text_pane_ParamLimits

0xd279,	// (0x0003cdbe) aid_fill_nsta_2_ParamLimits

0xd2b0,	// (0x0003cdf5) aid_touch_tab_arrow_left_ParamLimits

0xd2c6,	// (0x0003ce0b) aid_touch_tab_arrow_right_ParamLimits

0xd361,	// (0x0003cea6) clock_nsta_pane_ParamLimits

0x5c18,	// (0x0003575d) navi_icon_pane_g1_ParamLimits

0x5c24,	// (0x00035769) navi_text_pane_t1_ParamLimits

0xdd19,	// (0x0003d85e) navi_icon_text_pane_g1_ParamLimits

0x6f8d,	// (0x00036ad2) navi_icon_text_pane_t1_ParamLimits

0xe316,	// (0x0003de5b) list_single_hc_apps_pane_g1_ParamLimits

0xc705,	// (0x0003c24a) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003f833) list_single_hc_apps_pane_g_ParamLimits

0xc71e,	// (0x0003c263) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc73a,	// (0x0003c27f) list_single_hc_apps_pane_t1_ParamLimits

0xb317,	// (0x0003ae5c) popup_toolbar2_fixed_window_ParamLimits

0xb317,	// (0x0003ae5c) popup_toolbar2_fixed_window

0xc24f,	// (0x0003bd94) popup_toolbar2_float_window

0x292b,	// (0x00032470) bg_popup_sub_pane_cp27

0x8856,	// (0x0003839b) grid_toolbar2_float_pane

0x292b,	// (0x00032470) bg_popup_sub_pane_cp26

0x8856,	// (0x0003839b) grid_toolbar2_fixed_pane

0xe32f,	// (0x0003de74) cell_toolbar2_fixed_pane_ParamLimits

0xe32f,	// (0x0003de74) cell_toolbar2_fixed_pane

0xe349,	// (0x0003de8e) cell_toolbar2_fixed_pane_g1

0x8877,	// (0x000383bc) toolbar2_fixed_button_pane

0x4d8f,	// (0x000348d4) toolbar2_fixed_button_pane_g1

0x4d9f,	// (0x000348e4) toolbar2_fixed_button_pane_g2

0x4d97,	// (0x000348dc) toolbar2_fixed_button_pane_g3

0x4daf,	// (0x000348f4) toolbar2_fixed_button_pane_g4

0x4da7,	// (0x000348ec) toolbar2_fixed_button_pane_g5

0x4db7,	// (0x000348fc) toolbar2_fixed_button_pane_g6

0x4dbf,	// (0x00034904) toolbar2_fixed_button_pane_g7

0x4dcf,	// (0x00034914) toolbar2_fixed_button_pane_g8

0x4dc7,	// (0x0003490c) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0003f3ac) toolbar2_fixed_button_pane_g

0x887f,	// (0x000383c4) cell_toolbar2_float_pane_ParamLimits

0x887f,	// (0x000383c4) cell_toolbar2_float_pane

0x8890,	// (0x000383d5) cell_toolbar2_float_pane_g1

0x8877,	// (0x000383bc) toolbar2_fixed_button_pane_cp

0xde0a,	// (0x0003d94f) fep_vkb_accented_list_pane_ParamLimits

0xde0a,	// (0x0003d94f) fep_vkb_accented_list_pane

0x1d1c,	// (0x00031861) bg_popup_fep_shadow_pane_g9

0x4557,	// (0x0003409c) bg_popup_fep_shadow_pane_cp3

0x3a25,	// (0x0003356a) list_accented_list_pane

0x8899,	// (0x000383de) list_single_accented_list_pane_ParamLimits

0x8899,	// (0x000383de) list_single_accented_list_pane

0x4557,	// (0x0003409c) list_highlight_pane_cp10

0x88aa,	// (0x000383ef) list_single_accented_list_pane_t1

0xc179,	// (0x0003bcbe) popup_slider_window_ParamLimits

0xc179,	// (0x0003bcbe) popup_slider_window

0x84e6,	// (0x0003802b) aid_indentation_list_msg

0xe477,	// (0x0003dfbc) bg_popup_window_pane_cp19

0x89ce,	// (0x00038513) popup_slider_window_g1

0x89ea,	// (0x0003852f) popup_slider_window_g2

0x8a06,	// (0x0003854b) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003f838) popup_slider_window_g

0x8a62,	// (0x000385a7) popup_slider_window_t1

0x8ad6,	// (0x0003861b) small_volume_slider_vertical_pane

0x73dd,	// (0x00036f22) small_volume_slider_vertical_pane_g1

0x73dd,	// (0x00036f22) small_volume_slider_vertical_pane_g2

0x8af2,	// (0x00038637) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003f84a) small_volume_slider_vertical_pane_g

0xb285,	// (0x0003adca) area_side_right_pane_ParamLimits

0xb285,	// (0x0003adca) area_side_right_pane

0xc768,	// (0x0003c2ad) aid_size_side_button_ParamLimits

0xc768,	// (0x0003c2ad) aid_size_side_button

0xc781,	// (0x0003c2c6) grid_sctrl_middle_pane_ParamLimits

0xc781,	// (0x0003c2c6) grid_sctrl_middle_pane

0x1f39,	// (0x00031a7e) sctrl_sk_bottom_pane

0x1f4a,	// (0x00031a8f) sctrl_sk_top_pane

0x1f5c,	// (0x00031aa1) aid_touch_sctrl_top

0x1f69,	// (0x00031aae) bg_sctrl_sk_pane_ParamLimits

0x1f69,	// (0x00031aae) bg_sctrl_sk_pane

0x1f77,	// (0x00031abc) sctrl_sk_top_pane_g1

0x1f84,	// (0x00031ac9) sctrl_sk_top_pane_t1

0x1f5c,	// (0x00031aa1) aid_touch_sctrl_bottom

0x1f69,	// (0x00031aae) bg_sctrl_sk_pane_cp_ParamLimits

0x1f69,	// (0x00031aae) bg_sctrl_sk_pane_cp

0x1f9f,	// (0x00031ae4) sctrl_sk_bottom_pane_g1

0x1f84,	// (0x00031ac9) sctrl_sk_bottom_pane_t1

0xc79b,	// (0x0003c2e0) cell_sctrl_middle_pane_ParamLimits

0xc79b,	// (0x0003c2e0) cell_sctrl_middle_pane

0xc7ac,	// (0x0003c2f1) aid_touch_sctrl_middle_ParamLimits

0xc7ac,	// (0x0003c2f1) aid_touch_sctrl_middle

0xc7b9,	// (0x0003c2fe) bg_sctrl_middle_pane_ParamLimits

0xc7b9,	// (0x0003c2fe) bg_sctrl_middle_pane

0x260c,	// (0x00032151) cell_sctrl_middle_pane_g1_ParamLimits

0x260c,	// (0x00032151) cell_sctrl_middle_pane_g1

0xc7c7,	// (0x0003c30c) cell_sctrl_middle_pane_g2_ParamLimits

0xc7c7,	// (0x0003c30c) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003f856) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003f856) cell_sctrl_middle_pane_g

0x4d8f,	// (0x000348d4) bg_sctrl_middle_pane_g1

0x4d97,	// (0x000348dc) bg_sctrl_middle_pane_g2

0x4d9f,	// (0x000348e4) bg_sctrl_middle_pane_g3

0x4da7,	// (0x000348ec) bg_sctrl_middle_pane_g4

0x4daf,	// (0x000348f4) bg_sctrl_middle_pane_g5

0x4db7,	// (0x000348fc) bg_sctrl_middle_pane_g6

0x4dbf,	// (0x00034904) bg_sctrl_middle_pane_g7

0x4dc7,	// (0x0003490c) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003f85b) bg_sctrl_middle_pane_g

0x4dcf,	// (0x00034914) bg_sctrl_middle_pane_g8_copy1

0x4d8f,	// (0x000348d4) bg_sctrl_sk_pane_g1

0x4d9f,	// (0x000348e4) bg_sctrl_sk_pane_g2

0x4d97,	// (0x000348dc) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0003f3ac) bg_sctrl_sk_pane_g

0x37fd,	// (0x00033342) aid_size_touch_scroll_bar

0x4daf,	// (0x000348f4) bg_sctrl_sk_pane_g4

0x4da7,	// (0x000348ec) bg_sctrl_sk_pane_g5

0x4db7,	// (0x000348fc) bg_sctrl_sk_pane_g6

0x4dbf,	// (0x00034904) bg_sctrl_sk_pane_g7

0x4dcf,	// (0x00034914) bg_sctrl_sk_pane_g8

0x4dc7,	// (0x0003490c) bg_sctrl_sk_pane_g9

0x0ec0,	// (0x00030a05) popup_fep_china_hwr2_fs_candidate_window

0xbc99,	// (0x0003b7de) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbc99,	// (0x0003b7de) popup_fep_china_hwr2_fs_control_window

0x1d3c,	// (0x00031881) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003f851) sctrl_sk_top_pane_g

0xe52f,	// (0x0003e074) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe52f,	// (0x0003e074) aid_fep_china_hwr2_fs_cell

0xe543,	// (0x0003e088) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe543,	// (0x0003e088) bg_popup_fep_shadow_pane_cp4

0xe55a,	// (0x0003e09f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe55a,	// (0x0003e09f) bg_popup_fep_shadow_pane_cp5

0xe56c,	// (0x0003e0b1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe56c,	// (0x0003e0b1) popup_fep_china_hwr2_fs_control_bar_grid

0xe580,	// (0x0003e0c5) popup_fep_china_hwr2_fs_control_funtion_grid

0x8b4e,	// (0x00038693) aid_fep_china_hwr2_fs_candi_cell

0x292b,	// (0x00032470) bg_popup_fep_shadow_pane_cp6

0x8b58,	// (0x0003869d) popup_fep_china_hwr2_fs_candidate_grid

0xe588,	// (0x0003e0cd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe588,	// (0x0003e0cd) cell_fep_china_hwr2_fs_funtion_grid

0x73dd,	// (0x00036f22) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8b7a,	// (0x000386bf) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8b7a,	// (0x000386bf) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8b88,	// (0x000386cd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8b88,	// (0x000386cd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003f86c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003f86c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5a0,	// (0x0003e0e5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5a0,	// (0x0003e0e5) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe5b5,	// (0x0003e0fa) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe5b5,	// (0x0003e0fa) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003f871) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003f871) cell_fep_china_hwr2_fs_funtion_grid_t

0x8bcf,	// (0x00038714) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8bd7,	// (0x0003871c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8bdf,	// (0x00038724) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003f876) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8be7,	// (0x0003872c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8be7,	// (0x0003872c) cell_fep_china_hwr2_fs_candidate_grid

0x8c00,	// (0x00038745) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8c08,	// (0x0003874d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x73dd,	// (0x00036f22) cell_fep_china_hwr2_fs_candidate_grid_g1

0x73dd,	// (0x00036f22) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0003f68a) cell_fep_china_hwr2_fs_candidate_grid_g

0x8c10,	// (0x00038755) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4993,	// (0x000344d8) clock_nsta_pane_cp_24_ParamLimits

0x4993,	// (0x000344d8) clock_nsta_pane_cp_24

0x4a11,	// (0x00034556) indicator_nsta_pane_cp_24_ParamLimits

0x4a11,	// (0x00034556) indicator_nsta_pane_cp_24

0x5a94,	// (0x000355d9) heading_pane_g1

0x0001,

0xf8cc,	// (0x0003f411) heading_pane_g

0x64c3,	// (0x00036008) grid_sct_catagory_button_pane

0x64f3,	// (0x00036038) scroll_pane_cp5_ParamLimits

0x6fcf,	// (0x00036b14) button_value_adjust_pane_cp5_ParamLimits

0x6fcf,	// (0x00036b14) button_value_adjust_pane_cp5

0x70ae,	// (0x00036bf3) form2_midp_time_pane_ParamLimits

0x8c1e,	// (0x00038763) cell_sct_catagory_button_pane_ParamLimits

0x8c1e,	// (0x00038763) cell_sct_catagory_button_pane

0x73a2,	// (0x00036ee7) bg_button_pane_cp01_ParamLimits

0x73a2,	// (0x00036ee7) bg_button_pane_cp01

0x73dd,	// (0x00036f22) cell_sct_catagory_button_pane_g1

0xc1f2,	// (0x0003bd37) popup_tb_extension_window

0xe5d1,	// (0x0003e116) aid_size_cell_ext_ParamLimits

0xe5d1,	// (0x0003e116) aid_size_cell_ext

0x363f,	// (0x00033184) bg_tb_trans_pane_cp1_ParamLimits

0x363f,	// (0x00033184) bg_tb_trans_pane_cp1

0xe5f7,	// (0x0003e13c) grid_tb_ext_pane_ParamLimits

0xe5f7,	// (0x0003e13c) grid_tb_ext_pane

0xe632,	// (0x0003e177) cell_tb_ext_pane_ParamLimits

0xe632,	// (0x0003e177) cell_tb_ext_pane

0xe65a,	// (0x0003e19f) cell_tb_ext_pane_g1_ParamLimits

0xe65a,	// (0x0003e19f) cell_tb_ext_pane_g1

0x8cb2,	// (0x000387f7) cell_tb_ext_pane_t1

0x2ca8,	// (0x000327ed) list_highlight_pane_cp11_ParamLimits

0x2ca8,	// (0x000327ed) list_highlight_pane_cp11

0xf4ef,	// (0x0003f034) popup_uni_indicator_window_ParamLimits

0xf4ef,	// (0x0003f034) popup_uni_indicator_window

0x38ce,	// (0x00033413) bg_popup_sub_pane_cp14

0x8ccd,	// (0x00038812) list_uniindi_pane

0x8cd9,	// (0x0003881e) uniindi_top_pane

0x2ca8,	// (0x000327ed) bg_uniindi_top_pane

0x8cf8,	// (0x0003883d) uniindi_top_pane_g1

0x8d0e,	// (0x00038853) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003f87d) uniindi_top_pane_g

0x8d38,	// (0x0003887d) uniindi_top_pane_t1

0x8d62,	// (0x000388a7) list_single_uniindi_pane_ParamLimits

0x8d62,	// (0x000388a7) list_single_uniindi_pane

0x73dd,	// (0x00036f22) bg_uniindi_top_pane_g1

0x8d75,	// (0x000388ba) list_single_uniindi_pane_g1

0x8d88,	// (0x000388cd) list_single_uniindi_pane_t1

0xf3dc,	// (0x0003ef21) control_bg_pane

0x8dad,	// (0x000388f2) bg_sctrl_sk_pane_cp1

0x8db6,	// (0x000388fb) bg_sctrl_sk_pane_cp2

0x8dbf,	// (0x00038904) control_bg_pane_g1

0x8dc8,	// (0x0003890d) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003f886) control_bg_pane_g

0x6e18,	// (0x0003695d) cell_indicator_nsta_pane_g1_ParamLimits

0xdc81,	// (0x0003d7c6) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0003f5ee) cell_indicator_nsta_pane_g_ParamLimits

0x30d9,	// (0x00032c1e) form2_midp_time_pane_t1_ParamLimits

0x1ad7,	// (0x0003161c) main_idle_act4_pane_ParamLimits

0x1ad7,	// (0x0003161c) main_idle_act4_pane

0xc1f2,	// (0x0003bd37) popup_tb_extension_window_ParamLimits

0xe619,	// (0x0003e15e) tb_ext_find_pane_ParamLimits

0xe619,	// (0x0003e15e) tb_ext_find_pane

0x8dd1,	// (0x00038916) ai_gene_pane_1_cp1

0x4690,	// (0x000341d5) ai_gene_pane_2_cp1

0x8dd9,	// (0x0003891e) list_single_idle_plugin_calendar_pane

0x8de2,	// (0x00038927) list_single_idle_plugin_notification_pane

0x8deb,	// (0x00038930) list_single_idle_plugin_player_pane

0xe677,	// (0x0003e1bc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe677,	// (0x0003e1bc) list_single_idle_plugin_shortcut_pane

0xe69f,	// (0x0003e1e4) main_idle_act4_pane_t1

0xe6b5,	// (0x0003e1fa) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003f88b) main_idle_act4_pane_t

0xe6cb,	// (0x0003e210) middle_sk_idle_act4_pane_ParamLimits

0xe6cb,	// (0x0003e210) middle_sk_idle_act4_pane

0xe6e7,	// (0x0003e22c) popup_clock_digital_analogue_window_cp2

0xe70f,	// (0x0003e254) shortcut_wheel_idle_act4_pane_ParamLimits

0xe70f,	// (0x0003e254) shortcut_wheel_idle_act4_pane

0x73dd,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g1

0x73dd,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g2

0x73dd,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g3

0x73dd,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g4

0x73dd,	// (0x00036f22) shortcut_wheel_idle_act4_pane_g5

0x8e7e,	// (0x000389c3) shortcut_wheel_idle_act4_pane_g6

0x8e86,	// (0x000389cb) shortcut_wheel_idle_act4_pane_g7

0x8e8e,	// (0x000389d3) shortcut_wheel_idle_act4_pane_g8

0x8e96,	// (0x000389db) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003f890) shortcut_wheel_idle_act4_pane_g

0xe352,	// (0x0003de97) middle_sk_idle_act4_pane_g1_ParamLimits

0xe352,	// (0x0003de97) middle_sk_idle_act4_pane_g1

0xe78c,	// (0x0003e2d1) middle_sk_idle_act4_pane_g2_ParamLimits

0xe78c,	// (0x0003e2d1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003f8b3) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003f8b3) middle_sk_idle_act4_pane_g

0xe7a4,	// (0x0003e2e9) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7a4,	// (0x0003e2e9) middle_sk_idle_act4_pane_t1

0xe7d3,	// (0x0003e318) grid_ai_shortcut_pane_ParamLimits

0xe7d3,	// (0x0003e318) grid_ai_shortcut_pane

0xe7f0,	// (0x0003e335) list_highlight_pane_cp16_ParamLimits

0xe7f0,	// (0x0003e335) list_highlight_pane_cp16

0xe7fd,	// (0x0003e342) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe7fd,	// (0x0003e342) list_single_idle_plugin_shortcut_pane_g1

0xe809,	// (0x0003e34e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe809,	// (0x0003e34e) list_single_idle_plugin_shortcut_pane_g2

0xe825,	// (0x0003e36a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe825,	// (0x0003e36a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003f8b8) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003f8b8) list_single_idle_plugin_shortcut_pane_g

0xe83a,	// (0x0003e37f) cell_ai_shortcut_pane_ParamLimits

0xe83a,	// (0x0003e37f) cell_ai_shortcut_pane

0xe850,	// (0x0003e395) cell_ai_shortcut_pane_g1_ParamLimits

0xe850,	// (0x0003e395) cell_ai_shortcut_pane_g1

0x8dd1,	// (0x00038916) ai_gene_pane_1_cp2

0x8fc6,	// (0x00038b0b) ai_gene_pane_2_cp2

0x8fce,	// (0x00038b13) list_highlight_pane_cp15

0x8fd7,	// (0x00038b1c) list_single_idle_plugin_calendar_pane_g1

0x8fce,	// (0x00038b13) list_highlight_pane_cp17

0x8fdf,	// (0x00038b24) list_single_idle_plugin_calendar_pane_g1_copy1

0x8fe7,	// (0x00038b2c) list_single_idle_plugin_player_pane_g1

0x671c,	// (0x00036261) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003f8bf) list_single_idle_plugin_player_pane_g

0x8fef,	// (0x00038b34) list_single_idle_plugin_player_pane_t1

0x8ffd,	// (0x00038b42) list_single_idle_plugin_player_pane_t2

0x900b,	// (0x00038b50) list_single_idle_plugin_player_pane_t3

0x9019,	// (0x00038b5e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003f8c4) list_single_idle_plugin_player_pane_t

0x9027,	// (0x00038b6c) wait_bar_pane_cp15

0x902f,	// (0x00038b74) grid_ai_notification_pane

0x671c,	// (0x00036261) list_single_idle_plugin_notification_pane_g1

0xe872,	// (0x0003e3b7) cell_ai_notification_pane_ParamLimits

0xe872,	// (0x0003e3b7) cell_ai_notification_pane

0x9045,	// (0x00038b8a) cell_ai_notification_pane_g1

0x904d,	// (0x00038b92) cell_ai_notification_pane_t1

0xe87f,	// (0x0003e3c4) tb_ext_find_button_pane

0xe887,	// (0x0003e3cc) tb_ext_find_pane_g1

0xe88f,	// (0x0003e3d4) tb_ext_find_pane_t1

0x3f4f,	// (0x00033a94) tb_ext_find_button_pane_g1

0x909a,	// (0x00038bdf) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003f8cd) tb_ext_find_button_pane_g

0xe69f,	// (0x0003e1e4) main_idle_act4_pane_t1_ParamLimits

0xe6b5,	// (0x0003e1fa) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003f88b) main_idle_act4_pane_t_ParamLimits

0xe6e7,	// (0x0003e22c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe6ff,	// (0x0003e244) sat_plugin_idle_act4_pane_ParamLimits

0xe6ff,	// (0x0003e244) sat_plugin_idle_act4_pane

0xe89d,	// (0x0003e3e2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe89d,	// (0x0003e3e2) sat_plugin_idle_act4_pane_t1

0xe8b5,	// (0x0003e3fa) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe8b5,	// (0x0003e3fa) sat_plugin_idle_act4_pane_t2

0xe8cd,	// (0x0003e412) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8cd,	// (0x0003e412) sat_plugin_idle_act4_pane_t3

0xe8e5,	// (0x0003e42a) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8e5,	// (0x0003e42a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003f8d2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003f8d2) sat_plugin_idle_act4_pane_t

0xf4a1,	// (0x0003efe6) popup_battery_window_ParamLimits

0xf4a1,	// (0x0003efe6) popup_battery_window

0x2ca8,	// (0x000327ed) bg_popup_sub_pane_cp25_ParamLimits

0x2ca8,	// (0x000327ed) bg_popup_sub_pane_cp25

0x90ef,	// (0x00038c34) popup_battery_window_g1_ParamLimits

0x90ef,	// (0x00038c34) popup_battery_window_g1

0x90fb,	// (0x00038c40) popup_battery_window_t1_ParamLimits

0x90fb,	// (0x00038c40) popup_battery_window_t1

0x910d,	// (0x00038c52) popup_battery_window_t2_ParamLimits

0x910d,	// (0x00038c52) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003f8db) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003f8db) popup_battery_window_t

0xd179,	// (0x0003ccbe) midp_canvas_pane_ParamLimits

0xd1d4,	// (0x0003cd19) midp_keypad_pane_ParamLimits

0xd1d4,	// (0x0003cd19) midp_keypad_pane

0x4897,	// (0x000343dc) main_midp_pane_ParamLimits

0x6e93,	// (0x000369d8) signal_pane_g2_cp_ParamLimits

0xe8fd,	// (0x0003e442) aid_size_cell_midp_keypad_ParamLimits

0xe8fd,	// (0x0003e442) aid_size_cell_midp_keypad

0xe91b,	// (0x0003e460) midp_keyp_game_grid_pane_ParamLimits

0xe91b,	// (0x0003e460) midp_keyp_game_grid_pane

0xe942,	// (0x0003e487) midp_keyp_rocker_pane_ParamLimits

0xe942,	// (0x0003e487) midp_keyp_rocker_pane

0xe98b,	// (0x0003e4d0) midp_keyp_sk_left_pane_ParamLimits

0xe98b,	// (0x0003e4d0) midp_keyp_sk_left_pane

0xe9dd,	// (0x0003e522) midp_keyp_sk_right_pane_ParamLimits

0xe9dd,	// (0x0003e522) midp_keyp_sk_right_pane

0x292b,	// (0x00032470) bg_button_pane_cp03

0xea2f,	// (0x0003e574) midp_keyp_sk_left_pane_g1

0x292b,	// (0x00032470) bg_button_pane_cp04

0xea2f,	// (0x0003e574) midp_keyp_sk_right_pane_g1

0x73dd,	// (0x00036f22) midp_keyp_rocker_pane_g1

0xea38,	// (0x0003e57d) keyp_game_cell_pane_ParamLimits

0xea38,	// (0x0003e57d) keyp_game_cell_pane

0x292b,	// (0x00032470) bg_button_pane_cp02

0xea5c,	// (0x0003e5a1) keyp_game_cell_pane_g1

0xb2c7,	// (0x0003ae0c) popup_fep_vkb2_window_ParamLimits

0xb2c7,	// (0x0003ae0c) popup_fep_vkb2_window

0xc7d3,	// (0x0003c318) aid_size_cell_vkb2_ParamLimits

0xc7d3,	// (0x0003c318) aid_size_cell_vkb2

0xc809,	// (0x0003c34e) popup_fep_vkb2_window_g1_ParamLimits

0xc809,	// (0x0003c34e) popup_fep_vkb2_window_g1

0xc859,	// (0x0003c39e) vkb2_area_bottom_pane_ParamLimits

0xc859,	// (0x0003c39e) vkb2_area_bottom_pane

0xc8ad,	// (0x0003c3f2) vkb2_area_keypad_pane_ParamLimits

0xc8ad,	// (0x0003c3f2) vkb2_area_keypad_pane

0xc8f5,	// (0x0003c43a) vkb2_area_top_pane_ParamLimits

0xc8f5,	// (0x0003c43a) vkb2_area_top_pane

0xc97b,	// (0x0003c4c0) vkb2_top_entry_pane_ParamLimits

0xc97b,	// (0x0003c4c0) vkb2_top_entry_pane

0xc9a8,	// (0x0003c4ed) vkb2_top_grid_left_pane_ParamLimits

0xc9a8,	// (0x0003c4ed) vkb2_top_grid_left_pane

0xc9c8,	// (0x0003c50d) vkb2_top_grid_right_pane_ParamLimits

0xc9c8,	// (0x0003c50d) vkb2_top_grid_right_pane

0x220b,	// (0x00031d50) vkb2_cell_keypad_pane_ParamLimits

0x220b,	// (0x00031d50) vkb2_cell_keypad_pane

0xca0e,	// (0x0003c553) vkb2_area_bottom_grid_pane_ParamLimits

0xca0e,	// (0x0003c553) vkb2_area_bottom_grid_pane

0xca38,	// (0x0003c57d) vkb2_area_bottom_pane_g1_ParamLimits

0xca38,	// (0x0003c57d) vkb2_area_bottom_pane_g1

0xca5e,	// (0x0003c5a3) vkb2_area_bottom_pane_g2_ParamLimits

0xca5e,	// (0x0003c5a3) vkb2_area_bottom_pane_g2

0xca8f,	// (0x0003c5d4) vkb2_area_bottom_pane_g3_ParamLimits

0xca8f,	// (0x0003c5d4) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003f8e0) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003f8e0) vkb2_area_bottom_pane_g

0x23b5,	// (0x00031efa) vkb2_top_cell_left_pane_ParamLimits

0x23b5,	// (0x00031efa) vkb2_top_cell_left_pane

0xea65,	// (0x0003e5aa) vkb2_top_entry_pane_g1_ParamLimits

0xea65,	// (0x0003e5aa) vkb2_top_entry_pane_g1

0xea73,	// (0x0003e5b8) vkb2_top_entry_pane_t1_ParamLimits

0xea73,	// (0x0003e5b8) vkb2_top_entry_pane_t1

0x92b6,	// (0x00038dfb) vkb2_top_entry_pane_t2_ParamLimits

0x92b6,	// (0x00038dfb) vkb2_top_entry_pane_t2

0x92e8,	// (0x00038e2d) vkb2_top_entry_pane_t3_ParamLimits

0x92e8,	// (0x00038e2d) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003f8e7) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003f8e7) vkb2_top_entry_pane_t

0xcaf9,	// (0x0003c63e) vkb2_top_grid_right_pane_g1_ParamLimits

0xcaf9,	// (0x0003c63e) vkb2_top_grid_right_pane_g1

0x2418,	// (0x00031f5d) vkb2_top_grid_right_pane_g2_ParamLimits

0x2418,	// (0x00031f5d) vkb2_top_grid_right_pane_g2

0x2430,	// (0x00031f75) vkb2_top_grid_right_pane_g3_ParamLimits

0x2430,	// (0x00031f75) vkb2_top_grid_right_pane_g3

0xcb0f,	// (0x0003c654) vkb2_top_grid_right_pane_g4_ParamLimits

0xcb0f,	// (0x0003c654) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003f8ee) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003f8ee) vkb2_top_grid_right_pane_g

0x245e,	// (0x00031fa3) vkb2_top_cell_left_pane_g1

0x2475,	// (0x00031fba) vkb2_cell_keypad_pane_g1_ParamLimits

0x2475,	// (0x00031fba) vkb2_cell_keypad_pane_g1

0x930c,	// (0x00038e51) vkb2_cell_keypad_pane_t1_ParamLimits

0x930c,	// (0x00038e51) vkb2_cell_keypad_pane_t1

0x2483,	// (0x00031fc8) vkb2_cell_bottom_grid_pane_ParamLimits

0x2483,	// (0x00031fc8) vkb2_cell_bottom_grid_pane

0x24bc,	// (0x00032001) vkb2_cell_bottom_grid_pane_g1

0xe730,	// (0x0003e275) aid_call2_pane_cp02

0xe738,	// (0x0003e27d) aid_call_pane_cp02

0xe740,	// (0x0003e285) clock_digital_number_pane_cp10

0xe748,	// (0x0003e28d) clock_digital_number_pane_cp11

0xe750,	// (0x0003e295) clock_digital_number_pane_cp12

0xe758,	// (0x0003e29d) clock_digital_number_pane_cp13

0xe760,	// (0x0003e2a5) clock_digital_separator_pane_cp10

0x3f4f,	// (0x00033a94) popup_clock_digital_analogue_window_cp2_g1

0x3f4f,	// (0x00033a94) popup_clock_digital_analogue_window_cp2_g2

0xe768,	// (0x0003e2ad) popup_clock_digital_analogue_window_cp2_g3

0x3f4f,	// (0x00033a94) popup_clock_digital_analogue_window_cp2_g4

0xe768,	// (0x0003e2ad) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003f8a3) popup_clock_digital_analogue_window_cp2_g

0xe770,	// (0x0003e2b5) popup_clock_digital_analogue_window_cp2_t1

0xe77e,	// (0x0003e2c3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003f8ae) popup_clock_digital_analogue_window_cp2_t

0x73dd,	// (0x00036f22) clock_digital_number_pane_cp10_g1

0x73dd,	// (0x00036f22) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003f68a) clock_digital_number_pane_cp10_g

0x73dd,	// (0x00036f22) clock_digital_separator_pane_cp10_g1

0x73dd,	// (0x00036f22) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003f68a) clock_digital_separator_pane_cp10_g

0x8d1a,	// (0x0003885f) uniindi_top_pane_g3

0x8d2b,	// (0x00038870) uniindi_top_pane_g4

0x2296,	// (0x00031ddb) vkb2_row_keypad_pane_ParamLimits

0x2296,	// (0x00031ddb) vkb2_row_keypad_pane

0x24d8,	// (0x0003201d) vkb2_cell_t_keypad_pane_ParamLimits

0x24d8,	// (0x0003201d) vkb2_cell_t_keypad_pane

0x24e8,	// (0x0003202d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x24e8,	// (0x0003202d) vkb2_cell_t_keypad_pane_cp08

0x24fb,	// (0x00032040) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x24fb,	// (0x00032040) vkb2_cell_t_keypad_pane_cp09

0x250f,	// (0x00032054) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x250f,	// (0x00032054) vkb2_cell_t_keypad_pane_cp01

0x2520,	// (0x00032065) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2520,	// (0x00032065) vkb2_cell_t_keypad_pane_cp02

0x2531,	// (0x00032076) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2531,	// (0x00032076) vkb2_cell_t_keypad_pane_cp03

0x2542,	// (0x00032087) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2542,	// (0x00032087) vkb2_cell_t_keypad_pane_cp04

0x2553,	// (0x00032098) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2553,	// (0x00032098) vkb2_cell_t_keypad_pane_cp05

0x2564,	// (0x000320a9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2564,	// (0x000320a9) vkb2_cell_t_keypad_pane_cp06

0x2575,	// (0x000320ba) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2575,	// (0x000320ba) vkb2_cell_t_keypad_pane_cp07

0x2586,	// (0x000320cb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2586,	// (0x000320cb) vkb2_cell_t_keypad_pane_cp10

0x1d3c,	// (0x00031881) vkb2_cell_t_keypad_pane_g1

0x9323,	// (0x00038e68) vkb2_cell_t_keypad_pane_t1

0xf3dc,	// (0x0003ef21) popup_grid_graphic2_window

0xeaac,	// (0x0003e5f1) aid_size_cell_graphic2_ParamLimits

0xeaac,	// (0x0003e5f1) aid_size_cell_graphic2

0xeaea,	// (0x0003e62f) bg_popup_window_pane_cp21_ParamLimits

0xeaea,	// (0x0003e62f) bg_popup_window_pane_cp21

0xeaf8,	// (0x0003e63d) graphic2_pages_pane_ParamLimits

0xeaf8,	// (0x0003e63d) graphic2_pages_pane

0xeb4e,	// (0x0003e693) grid_graphic2_control_pane_ParamLimits

0xeb4e,	// (0x0003e693) grid_graphic2_control_pane

0xeb96,	// (0x0003e6db) grid_graphic2_pane_ParamLimits

0xeb96,	// (0x0003e6db) grid_graphic2_pane

0xec1d,	// (0x0003e762) cell_graphic2_pane

0xf3dc,	// (0x0003ef21) main_comp_mode_pane

0x859a,	// (0x000380df) list_ai3_gene_pane_ParamLimits

0xe477,	// (0x0003dfbc) bg_popup_window_pane_cp19_ParamLimits

0x8970,	// (0x000384b5) bg_touch_area_indi_pane_ParamLimits

0x8970,	// (0x000384b5) bg_touch_area_indi_pane

0x8986,	// (0x000384cb) bg_touch_area_indi_pane_cp01_ParamLimits

0x8986,	// (0x000384cb) bg_touch_area_indi_pane_cp01

0x899c,	// (0x000384e1) bg_touch_area_indi_pane_cp02_ParamLimits

0x899c,	// (0x000384e1) bg_touch_area_indi_pane_cp02

0x89b4,	// (0x000384f9) bg_touch_area_indi_pane_cp03_ParamLimits

0x89b4,	// (0x000384f9) bg_touch_area_indi_pane_cp03

0x89ce,	// (0x00038513) popup_slider_window_g1_ParamLimits

0x89ea,	// (0x0003852f) popup_slider_window_g2_ParamLimits

0x8a06,	// (0x0003854b) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003f838) popup_slider_window_g_ParamLimits

0x8a62,	// (0x000385a7) popup_slider_window_t1_ParamLimits

0x8ad6,	// (0x0003861b) small_volume_slider_vertical_pane_ParamLimits

0xec1d,	// (0x0003e762) cell_graphic2_pane_ParamLimits

0xec7a,	// (0x0003e7bf) bg_button_pane_cp10_ParamLimits

0xec7a,	// (0x0003e7bf) bg_button_pane_cp10

0xec8d,	// (0x0003e7d2) bg_button_pane_cp11_ParamLimits

0xec8d,	// (0x0003e7d2) bg_button_pane_cp11

0xeca0,	// (0x0003e7e5) graphic2_pages_pane_g1_ParamLimits

0xeca0,	// (0x0003e7e5) graphic2_pages_pane_g1

0xecbb,	// (0x0003e800) graphic2_pages_pane_g2_ParamLimits

0xecbb,	// (0x0003e800) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003f8fc) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003f8fc) graphic2_pages_pane_g

0xecd3,	// (0x0003e818) graphic2_pages_pane_t1_ParamLimits

0xecd3,	// (0x0003e818) graphic2_pages_pane_t1

0xeceb,	// (0x0003e830) cell_graphic2_control_pane_ParamLimits

0xeceb,	// (0x0003e830) cell_graphic2_control_pane

0xed1d,	// (0x0003e862) cell_graphic2_pane_g1_ParamLimits

0xed1d,	// (0x0003e862) cell_graphic2_pane_g1

0xe360,	// (0x0003dea5) cell_graphic2_pane_g2_ParamLimits

0xe360,	// (0x0003dea5) cell_graphic2_pane_g2

0xe37a,	// (0x0003debf) cell_graphic2_pane_g3_ParamLimits

0xe37a,	// (0x0003debf) cell_graphic2_pane_g3

0xe36d,	// (0x0003deb2) cell_graphic2_pane_g4_ParamLimits

0xe36d,	// (0x0003deb2) cell_graphic2_pane_g4

0xed2a,	// (0x0003e86f) cell_graphic2_pane_g5_ParamLimits

0xed2a,	// (0x0003e86f) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003f901) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003f901) cell_graphic2_pane_g

0xed4a,	// (0x0003e88f) cell_graphic2_pane_t1_ParamLimits

0xed4a,	// (0x0003e88f) cell_graphic2_pane_t1

0x5a88,	// (0x000355cd) grid_highlight_pane_cp11_ParamLimits

0x5a88,	// (0x000355cd) grid_highlight_pane_cp11

0x2ca8,	// (0x000327ed) bg_button_pane_cp05

0xed7f,	// (0x0003e8c4) cell_graphic2_control_pane_g1

0x73dd,	// (0x00036f22) bg_touch_area_indi_pane_g1

0x95f3,	// (0x00039138) aid_cmod_rocker_key_size

0x95fd,	// (0x00039142) aid_cmode_itu_key_size

0x9607,	// (0x0003914c) main_cmode_video_pane

0x9611,	// (0x00039156) main_comp_mode_itu_pane

0x961d,	// (0x00039162) main_comp_mode_rocker_pane

0x9629,	// (0x0003916e) cell_cmode_rocker_pane_ParamLimits

0x9629,	// (0x0003916e) cell_cmode_rocker_pane

0x963b,	// (0x00039180) cell_cmode_itu_pane_ParamLimits

0x963b,	// (0x00039180) cell_cmode_itu_pane

0x38ce,	// (0x00033413) bg_button_pane_cp06_ParamLimits

0x38ce,	// (0x00033413) bg_button_pane_cp06

0x765b,	// (0x000371a0) cell_cmode_rocker_pane_g1_ParamLimits

0x765b,	// (0x000371a0) cell_cmode_rocker_pane_g1

0x8b7a,	// (0x000386bf) cell_cmode_rocker_pane_g2_ParamLimits

0x8b7a,	// (0x000386bf) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003f911) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003f911) cell_cmode_rocker_pane_g

0x292b,	// (0x00032470) bg_button_pane_cp07

0x9650,	// (0x00039195) cell_cmode_itu_pane_g1

0x9659,	// (0x0003919e) cell_cmode_itu_pane_t1

0x9667,	// (0x000391ac) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003f916) cell_cmode_itu_pane_t

0x8d9d,	// (0x000388e2) aid_touch_ctrl_left

0x8da5,	// (0x000388ea) aid_touch_ctrl_right

0x292b,	// (0x00032470) compa_mode_pane

0xeda5,	// (0x0003e8ea) aid_cmod_rocker_key_size_cp

0xedaf,	// (0x0003e8f4) aid_cmode_itu_key_size_cp

0x9689,	// (0x000391ce) compa_mode_pane_g1

0x9691,	// (0x000391d6) compa_mode_pane_g2

0x9699,	// (0x000391de) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003f91b) compa_mode_pane_g

0xedb9,	// (0x0003e8fe) main_comp_mode_itu_pane_cp

0xedc1,	// (0x0003e906) main_comp_mode_rocker_pane_cp

0xedc9,	// (0x0003e90e) cell_cmode_itu_pane_cp_ParamLimits

0xedc9,	// (0x0003e90e) cell_cmode_itu_pane_cp

0xedde,	// (0x0003e923) cell_cmode_rocker_pane_cp_ParamLimits

0xedde,	// (0x0003e923) cell_cmode_rocker_pane_cp

0x38ce,	// (0x00033413) bg_button_pane_cp06_cp_ParamLimits

0x38ce,	// (0x00033413) bg_button_pane_cp06_cp

0x765b,	// (0x000371a0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x765b,	// (0x000371a0) cell_cmode_rocker_pane_g1_cp

0x73dd,	// (0x00036f22) cell_cmode_rocker_pane_g2_cp

0x292b,	// (0x00032470) bg_button_pane_cp07_cp

0xedf0,	// (0x0003e935) cell_cmode_itu_pane_g1_cp

0xedf9,	// (0x0003e93e) cell_cmode_itu_pane_t1_cp

0xedf9,	// (0x0003e93e) cell_cmode_itu_pane_t2_cp

0xda99,	// (0x0003d5de) settings_code_pane_cp2

0x2a1f,	// (0x00032564) bg_popup_window_pane_cp3_ParamLimits

0x34c5,	// (0x0003300a) heading_pane_cp3_ParamLimits

0x34d1,	// (0x00033016) listscroll_popup_graphic_pane_ParamLimits

0x1ae5,	// (0x0003162a) fep_hwr_aid_pane_ParamLimits

0x1f5c,	// (0x00031aa1) aid_touch_sctrl_top_ParamLimits

0x1f77,	// (0x00031abc) sctrl_sk_top_pane_g1_ParamLimits

0x1d3c,	// (0x00031881) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003f851) sctrl_sk_top_pane_g_ParamLimits

0x1f84,	// (0x00031ac9) sctrl_sk_top_pane_t1_ParamLimits

0x1f5c,	// (0x00031aa1) aid_touch_sctrl_bottom_ParamLimits

0x1f84,	// (0x00031ac9) sctrl_sk_bottom_pane_t1_ParamLimits

0x8ce6,	// (0x0003882b) aid_area_touch_clock

0xc93d,	// (0x0003c482) aid_vkb2_area_top_pane_cell_ParamLimits

0xc93d,	// (0x0003c482) aid_vkb2_area_top_pane_cell

0xc9e8,	// (0x0003c52d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc9e8,	// (0x0003c52d) aid_vkb2_area_bottom_pane_cell

0x926e,	// (0x00038db3) popup_char_count_window

0x96e6,	// (0x0003922b) popup_char_count_window_g1

0x96ef,	// (0x00039234) popup_char_count_window_g2

0x96f8,	// (0x0003923d) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003f922) popup_char_count_window_g

0x9701,	// (0x00039246) popup_char_count_window_t1

0x2033,	// (0x00031b78) popup_fep_char_preview_window_ParamLimits

0x2033,	// (0x00031b78) popup_fep_char_preview_window

0xc95d,	// (0x0003c4a2) vkb2_top_candi_pane_ParamLimits

0xc95d,	// (0x0003c4a2) vkb2_top_candi_pane

0xee07,	// (0x0003e94c) cell_vkb2_top_candi_pane_ParamLimits

0xee07,	// (0x0003e94c) cell_vkb2_top_candi_pane

0x259b,	// (0x000320e0) bg_popup_fep_char_preview_window_ParamLimits

0x259b,	// (0x000320e0) bg_popup_fep_char_preview_window

0x25a9,	// (0x000320ee) popup_fep_char_preview_window_t1_ParamLimits

0x25a9,	// (0x000320ee) popup_fep_char_preview_window_t1

0x975c,	// (0x000392a1) bg_popup_fep_char_preview_window_g1

0x9764,	// (0x000392a9) bg_popup_fep_char_preview_window_g2

0x976c,	// (0x000392b1) bg_popup_fep_char_preview_window_g3

0x9774,	// (0x000392b9) bg_popup_fep_char_preview_window_g4

0x977c,	// (0x000392c1) bg_popup_fep_char_preview_window_g5

0x25e3,	// (0x00032128) bg_popup_fep_char_preview_window_g6

0x9784,	// (0x000392c9) bg_popup_fep_char_preview_window_g7

0x978c,	// (0x000392d1) bg_popup_fep_char_preview_window_g8

0x9794,	// (0x000392d9) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003f929) bg_popup_fep_char_preview_window_g

0x1d3c,	// (0x00031881) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1d3c,	// (0x00031881) cell_vkb2_top_candi_pane_g1

0x1d4a,	// (0x0003188f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1d4a,	// (0x0003188f) cell_vkb2_top_candi_pane_g2

0x9079,	// (0x00038bbe) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9079,	// (0x00038bbe) cell_vkb2_top_candi_pane_g3

0x25eb,	// (0x00032130) cell_vkb2_top_candi_pane_g4_ParamLimits

0x25eb,	// (0x00032130) cell_vkb2_top_candi_pane_g4

0x7b32,	// (0x00037677) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b32,	// (0x00037677) cell_vkb2_top_candi_pane_g5

0x260c,	// (0x00032151) cell_vkb2_top_candi_pane_g6_ParamLimits

0x260c,	// (0x00032151) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003f93c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003f93c) cell_vkb2_top_candi_pane_g

0x261a,	// (0x0003215f) cell_vkb2_top_candi_pane_t1

0x180e,	// (0x00031353) aid_size_touch_slider_mark_ParamLimits

0x180e,	// (0x00031353) aid_size_touch_slider_mark

0xeb34,	// (0x0003e679) grid_graphic2_catg_pane_ParamLimits

0xeb34,	// (0x0003e679) grid_graphic2_catg_pane

0xebf0,	// (0x0003e735) popup_grid_graphic2_window_t1_ParamLimits

0xebf0,	// (0x0003e735) popup_grid_graphic2_window_t1

0xec06,	// (0x0003e74b) popup_grid_graphic2_window_t2_ParamLimits

0xec06,	// (0x0003e74b) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003f8f7) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003f8f7) popup_grid_graphic2_window_t

0x2ca8,	// (0x000327ed) bg_button_pane_cp05_ParamLimits

0xed7f,	// (0x0003e8c4) cell_graphic2_control_pane_g1_ParamLimits

0xee6d,	// (0x0003e9b2) cell_graphic2_catg_pane_ParamLimits

0xee6d,	// (0x0003e9b2) cell_graphic2_catg_pane

0x292b,	// (0x00032470) bg_button_pane_cp12

0xee7f,	// (0x0003e9c4) cell_graphic2_catg_pane_g1

0x8cb2,	// (0x000387f7) cell_tb_ext_pane_t1_ParamLimits

0x23d5,	// (0x00031f1a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x23d5,	// (0x00031f1a) vkb2_top_cell_right_narrow_pane

0x23ed,	// (0x00031f32) vkb2_top_cell_right_wide_pane_ParamLimits

0x23ed,	// (0x00031f32) vkb2_top_cell_right_wide_pane

0x1ad7,	// (0x0003161c) bg_vkb2_func_pane_ParamLimits

0x1ad7,	// (0x0003161c) bg_vkb2_func_pane

0x245e,	// (0x00031fa3) vkb2_top_cell_left_pane_g1_ParamLimits

0x1ad7,	// (0x0003161c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1ad7,	// (0x0003161c) bg_vkb2_fuc_pane_cp03

0x24bc,	// (0x00032001) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4d97,	// (0x000348dc) bg_vkb2_func_pane_g1

0x4d9f,	// (0x000348e4) bg_vkb2_func_pane_g2

0x4daf,	// (0x000348f4) bg_vkb2_func_pane_g3

0x4da7,	// (0x000348ec) bg_vkb2_func_pane_g4

0x4db7,	// (0x000348fc) bg_vkb2_func_pane_g5

0x4dbf,	// (0x00034904) bg_vkb2_func_pane_g6

0x4dc7,	// (0x0003490c) bg_vkb2_func_pane_g7

0x4dcf,	// (0x00034914) bg_vkb2_func_pane_g8

0x4d8f,	// (0x000348d4) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003f949) bg_vkb2_func_pane_g

0x1ad7,	// (0x0003161c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1ad7,	// (0x0003161c) bg_vkb2_fuc_pane_cp01

0x245e,	// (0x00031fa3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x245e,	// (0x00031fa3) vkb2_top_cell_right_wide_pane_g1

0x1ad7,	// (0x0003161c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1ad7,	// (0x0003161c) bg_vkb2_fuc_pane_cp02

0x24bc,	// (0x00032001) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x24bc,	// (0x00032001) vkb2_top_cell_right_narrow_pane_g1

0xe3b7,	// (0x0003defc) aid_touch_area_decrease_ParamLimits

0xe3b7,	// (0x0003defc) aid_touch_area_decrease

0xe3eb,	// (0x0003df30) aid_touch_area_increase_ParamLimits

0xe3eb,	// (0x0003df30) aid_touch_area_increase

0xe413,	// (0x0003df58) aid_touch_area_mute_ParamLimits

0xe413,	// (0x0003df58) aid_touch_area_mute

0xe443,	// (0x0003df88) aid_touch_area_slider_ParamLimits

0xe443,	// (0x0003df88) aid_touch_area_slider

0xe483,	// (0x0003dfc8) popup_slider_window_g4_ParamLimits

0xe483,	// (0x0003dfc8) popup_slider_window_g4

0xe4ab,	// (0x0003dff0) popup_slider_window_g5_ParamLimits

0xe4ab,	// (0x0003dff0) popup_slider_window_g5

0xe4df,	// (0x0003e024) popup_slider_window_g6_ParamLimits

0xe4df,	// (0x0003e024) popup_slider_window_g6

0x8a90,	// (0x000385d5) popup_slider_window_t2_ParamLimits

0x8a90,	// (0x000385d5) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003f845) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003f845) popup_slider_window_t

0xe4fb,	// (0x0003e040) slider_pane_ParamLimits

0xe4fb,	// (0x0003e040) slider_pane

0x97b7,	// (0x000392fc) slider_pane_g1_ParamLimits

0x97b7,	// (0x000392fc) slider_pane_g1

0x97cb,	// (0x00039310) slider_pane_g2_ParamLimits

0x97cb,	// (0x00039310) slider_pane_g2

0x97e1,	// (0x00039326) slider_pane_g3_ParamLimits

0x97e1,	// (0x00039326) slider_pane_g3

0x0003,

0xfe17,	// (0x0003f95c) slider_pane_g_ParamLimits

0xfe17,	// (0x0003f95c) slider_pane_g

0xc23a,	// (0x0003bd7f) popup_tb_float_extension_window_ParamLimits

0xc23a,	// (0x0003bd7f) popup_tb_float_extension_window

0x980d,	// (0x00039352) aid_size_cell_tb_float_ext

0x292b,	// (0x00032470) bg_popup_sub_window_cp28

0x9819,	// (0x0003935e) grid_tb_float_ext_pane

0x9823,	// (0x00039368) cell_tb_float_ext_pane_ParamLimits

0x9823,	// (0x00039368) cell_tb_float_ext_pane

0x983d,	// (0x00039382) cell_tb_float_ext_pane_g1

0x9846,	// (0x0003938b) grid_highlight_pane_cp12

0xc55d,	// (0x0003c0a2) cell_last_hwr_side_pane_ParamLimits

0xc55d,	// (0x0003c0a2) cell_last_hwr_side_pane

0x73dd,	// (0x00036f22) cell_last_hwr_side_pane_g1

0x984f,	// (0x00039394) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003f965) cell_last_hwr_side_pane_g

0xcac4,	// (0x0003c609) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcac4,	// (0x0003c609) vkb2_area_bottom_space_btn_pane

0x1d3c,	// (0x00031881) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9323,	// (0x00038e68) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x261a,	// (0x0003215f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2639,	// (0x0003217e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2639,	// (0x0003217e) vkb2_area_bottom_space_btn_pane_g1

0x2673,	// (0x000321b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2673,	// (0x000321b8) vkb2_area_bottom_space_btn_pane_g2

0x26a9,	// (0x000321ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x26a9,	// (0x000321ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003f96a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003f96a) vkb2_area_bottom_space_btn_pane_g

0x1b9a,	// (0x000316df) cel_fep_hwr_func_pane_ParamLimits

0x1b9a,	// (0x000316df) cel_fep_hwr_func_pane

0xc532,	// (0x0003c077) cell_hwr_side_button_pane_ParamLimits

0xc532,	// (0x0003c077) cell_hwr_side_button_pane

0x8ce6,	// (0x0003882b) aid_area_touch_clock_ParamLimits

0x2ca8,	// (0x000327ed) bg_uniindi_top_pane_ParamLimits

0x8cf8,	// (0x0003883d) uniindi_top_pane_g1_ParamLimits

0x8d0e,	// (0x00038853) uniindi_top_pane_g2_ParamLimits

0x8d1a,	// (0x0003885f) uniindi_top_pane_g3_ParamLimits

0x8d2b,	// (0x00038870) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003f87d) uniindi_top_pane_g_ParamLimits

0x8d38,	// (0x0003887d) uniindi_top_pane_t1_ParamLimits

0x2ca8,	// (0x000327ed) bg_vkb2_func_pane_cp01_ParamLimits

0x2ca8,	// (0x000327ed) bg_vkb2_func_pane_cp01

0x9858,	// (0x0003939d) cel_fep_hwr_func_pane_g1_ParamLimits

0x9858,	// (0x0003939d) cel_fep_hwr_func_pane_g1

0x2ca8,	// (0x000327ed) bg_vkb2_func_pane_cp02_ParamLimits

0x2ca8,	// (0x000327ed) bg_vkb2_func_pane_cp02

0x9858,	// (0x0003939d) cell_hwr_side_button_pane_g1_ParamLimits

0x9858,	// (0x0003939d) cell_hwr_side_button_pane_g1

0x4c10,	// (0x00034755) status_pane_g4_ParamLimits

0x4c10,	// (0x00034755) status_pane_g4

0x4c2a,	// (0x0003476f) status_pane_t1

0x7117,	// (0x00036c5c) form2_midp_gauge_slider_cont_pane

0x711f,	// (0x00036c64) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd60,	// (0x0003d8a5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd72,	// (0x0003d8b7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0003f63d) form2_midp_gauge_slider_pane_t_ParamLimits

0x7155,	// (0x00036c9a) form2_midp_slider_pane_ParamLimits

0x1ff3,	// (0x00031b38) aid_size_cell_func_vkb2_ParamLimits

0x1ff3,	// (0x00031b38) aid_size_cell_func_vkb2

0x97f9,	// (0x0003933e) slider_pane_g4_ParamLimits

0x97f9,	// (0x0003933e) slider_pane_g4

0xcb25,	// (0x0003c66a) form2_midp_gauge_slider_pane_t2_cp01

0xcb33,	// (0x0003c678) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcb33,	// (0x0003c678) form2_midp_gauge_slider_pane_t3_cp01

0x271e,	// (0x00032263) form2_midp_slider_pane_cp01

0x292b,	// (0x00032470) navi_smil_pane

0x9891,	// (0x000393d6) navi_smil_pane_g1

0x9899,	// (0x000393de) navi_smil_pane_t1

0x9866,	// (0x000393ab) form2_midp_slider_pane_g1

0x986f,	// (0x000393b4) form2_midp_slider_pane_g2

0x9877,	// (0x000393bc) form2_midp_slider_pane_g3

0x9866,	// (0x000393ab) form2_midp_slider_pane_g4

0xee88,	// (0x0003e9cd) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003f973) form2_midp_slider_pane_g

0x26e3,	// (0x00032228) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x26e3,	// (0x00032228) vkb2_area_bottom_space_btn_pane_g4

0xd3ac,	// (0x0003cef1) lc0_navi_pane_ParamLimits

0xd3ac,	// (0x0003cef1) lc0_navi_pane

0xd416,	// (0x0003cf5b) lc0_stat_indi_pane_ParamLimits

0xd416,	// (0x0003cf5b) lc0_stat_indi_pane

0xd42b,	// (0x0003cf70) ls0_title_pane_ParamLimits

0xd42b,	// (0x0003cf70) ls0_title_pane

0x38ce,	// (0x00033413) bg_popup_sub_pane_cp14_ParamLimits

0x8ccd,	// (0x00038812) list_uniindi_pane_ParamLimits

0x8cd9,	// (0x0003881e) uniindi_top_pane_ParamLimits

0x8d75,	// (0x000388ba) list_single_uniindi_pane_g1_ParamLimits

0x8d88,	// (0x000388cd) list_single_uniindi_pane_t1_ParamLimits

0xcb50,	// (0x0003c695) lc0_stat_clock_pane_ParamLimits

0xcb50,	// (0x0003c695) lc0_stat_clock_pane

0xee93,	// (0x0003e9d8) lc0_stat_indi_pane_g1_ParamLimits

0xee93,	// (0x0003e9d8) lc0_stat_indi_pane_g1

0xeea0,	// (0x0003e9e5) lc0_stat_indi_pane_g2_ParamLimits

0xeea0,	// (0x0003e9e5) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003f97e) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003f97e) lc0_stat_indi_pane_g

0xcb5d,	// (0x0003c6a2) lc0_uni_indicator_pane_ParamLimits

0xcb5d,	// (0x0003c6a2) lc0_uni_indicator_pane

0xeead,	// (0x0003e9f2) ls0_title_pane_g1_ParamLimits

0xeead,	// (0x0003e9f2) ls0_title_pane_g1

0xeec1,	// (0x0003ea06) ls0_title_pane_t1_ParamLimits

0xeec1,	// (0x0003ea06) ls0_title_pane_t1

0xcb6a,	// (0x0003c6af) lc0_uni_indicator_pane_g1_ParamLimits

0xcb6a,	// (0x0003c6af) lc0_uni_indicator_pane_g1

0x990b,	// (0x00039450) lc0_stat_clock_pane_t1

0xf3dc,	// (0x0003ef21) main_ai5_pane

0x9919,	// (0x0003945e) ai5_sk_pane_ParamLimits

0x9919,	// (0x0003945e) ai5_sk_pane

0xeeef,	// (0x0003ea34) cell_ai5_widget_pane_ParamLimits

0xeeef,	// (0x0003ea34) cell_ai5_widget_pane

0x99dc,	// (0x00039521) aid_size_cell_widget_grid

0x99f2,	// (0x00039537) bg_ai5_widget_pane_ParamLimits

0x99f2,	// (0x00039537) bg_ai5_widget_pane

0x9a5c,	// (0x000395a1) cell_ai5_widget_pane_g2

0x9a6c,	// (0x000395b1) cell_ai5_widget_pane_g3

0x9a8b,	// (0x000395d0) cell_ai5_widget_pane_g4

0x9a97,	// (0x000395dc) cell_ai5_widget_pane_g5

0x9aa3,	// (0x000395e8) cell_ai5_widget_pane_g6

0x9aaf,	// (0x000395f4) cell_ai5_widget_pane_g7

0x9af7,	// (0x0003963c) cell_ai5_widget_pane_t1_ParamLimits

0x9af7,	// (0x0003963c) cell_ai5_widget_pane_t1

0x9b14,	// (0x00039659) cell_ai5_widget_pane_t2_ParamLimits

0x9b14,	// (0x00039659) cell_ai5_widget_pane_t2

0x9b2c,	// (0x00039671) cell_ai5_widget_pane_t3_ParamLimits

0x9b2c,	// (0x00039671) cell_ai5_widget_pane_t3

0x9b44,	// (0x00039689) cell_ai5_widget_pane_t4_ParamLimits

0x9b44,	// (0x00039689) cell_ai5_widget_pane_t4

0x9b5e,	// (0x000396a3) cell_ai5_widget_pane_t5_ParamLimits

0x9b5e,	// (0x000396a3) cell_ai5_widget_pane_t5

0x9b7d,	// (0x000396c2) cell_ai5_widget_pane_t6_ParamLimits

0x9b7d,	// (0x000396c2) cell_ai5_widget_pane_t6

0x9b8f,	// (0x000396d4) cell_ai5_widget_pane_t7_ParamLimits

0x9b8f,	// (0x000396d4) cell_ai5_widget_pane_t7

0x9ba8,	// (0x000396ed) cell_ai5_widget_pane_t8_ParamLimits

0x9ba8,	// (0x000396ed) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003f998) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003f998) cell_ai5_widget_pane_t

0x9bf4,	// (0x00039739) grid_ai5_widget_pane

0x38ce,	// (0x00033413) highlight_cell_ai5_widget_pane_ParamLimits

0x38ce,	// (0x00033413) highlight_cell_ai5_widget_pane

0xef74,	// (0x0003eab9) ai5_sk_left_pane

0xef7e,	// (0x0003eac3) ai5_sk_middle_pane

0xef88,	// (0x0003eacd) ai5_sk_right_pane

0x9c2a,	// (0x0003976f) bg_ai5_widget_pane_g1_ParamLimits

0x9c2a,	// (0x0003976f) bg_ai5_widget_pane_g1

0x9c36,	// (0x0003977b) bg_ai5_widget_pane_g2_ParamLimits

0x9c36,	// (0x0003977b) bg_ai5_widget_pane_g2

0x9c42,	// (0x00039787) bg_ai5_widget_pane_g3_ParamLimits

0x9c42,	// (0x00039787) bg_ai5_widget_pane_g3

0x9c4e,	// (0x00039793) bg_ai5_widget_pane_g4_ParamLimits

0x9c4e,	// (0x00039793) bg_ai5_widget_pane_g4

0x9c5a,	// (0x0003979f) bg_ai5_widget_pane_g5_ParamLimits

0x9c5a,	// (0x0003979f) bg_ai5_widget_pane_g5

0x9c66,	// (0x000397ab) bg_ai5_widget_pane_g6_ParamLimits

0x9c66,	// (0x000397ab) bg_ai5_widget_pane_g6

0x9c72,	// (0x000397b7) bg_ai5_widget_pane_g7_ParamLimits

0x9c72,	// (0x000397b7) bg_ai5_widget_pane_g7

0x9c7e,	// (0x000397c3) bg_ai5_widget_pane_g8_ParamLimits

0x9c7e,	// (0x000397c3) bg_ai5_widget_pane_g8

0x9c8a,	// (0x000397cf) bg_ai5_widget_pane_g9_ParamLimits

0x9c8a,	// (0x000397cf) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003f9ad) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003f9ad) bg_ai5_widget_pane_g

0x9cbd,	// (0x00039802) cell_shortcut_ai5_widget_pane_ParamLimits

0x9cbd,	// (0x00039802) cell_shortcut_ai5_widget_pane

0x4557,	// (0x0003409c) bg_cell_shortcut_ai5_widget_pane

0x9cce,	// (0x00039813) cell_grid_ai5_widget_pane_g1

0x9cd7,	// (0x0003981c) highlight_cell_shortcut_ai5_widget_pane

0x4d97,	// (0x000348dc) ai5_sk_left_pane_g1

0x9cdf,	// (0x00039824) ai5_sk_left_pane_g2

0x9ce7,	// (0x0003982c) ai5_sk_left_pane_g3

0x9cef,	// (0x00039834) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003f9c0) ai5_sk_left_pane_g

0x9cf7,	// (0x0003983c) ai5_sk_left_pane_t1

0x4d9f,	// (0x000348e4) ai5_sk_right_pane_g1

0x9d05,	// (0x0003984a) ai5_sk_right_pane_g2

0x9d0d,	// (0x00039852) ai5_sk_right_pane_g3

0x9d15,	// (0x0003985a) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003f9c9) ai5_sk_right_pane_g

0x9d1d,	// (0x00039862) ai5_sk_right_pane_t1

0x4d9f,	// (0x000348e4) ai5_sk_middle_pane_g1

0x4d97,	// (0x000348dc) ai5_sk_middle_pane_g2

0x4db7,	// (0x000348fc) ai5_sk_middle_pane_g3

0x9d0d,	// (0x00039852) ai5_sk_middle_pane_g4

0x9ce7,	// (0x0003982c) ai5_sk_middle_pane_g5

0x9d2b,	// (0x00039870) ai5_sk_middle_pane_g6

0xef92,	// (0x0003ead7) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003f9d2) ai5_sk_middle_pane_g

0xd298,	// (0x0003cddd) aid_touch_area_size_lc0_ParamLimits

0xd298,	// (0x0003cddd) aid_touch_area_size_lc0

0x1d6b,	// (0x000318b0) cell_hwr_candidate_pane_t1_ParamLimits

0x48f9,	// (0x0003443e) aid_touch_navi_pane

0xd51e,	// (0x0003d063) status_dt_navi_pane_ParamLimits

0xd51e,	// (0x0003d063) status_dt_navi_pane

0xd536,	// (0x0003d07b) status_dt_sta_pane_ParamLimits

0xd536,	// (0x0003d07b) status_dt_sta_pane

0xef9a,	// (0x0003eadf) dt_sta_controll_pane

0xefa7,	// (0x0003eaec) dt_sta_indi_pane

0xefb4,	// (0x0003eaf9) dt_sta_title_pane

0x2ca8,	// (0x000327ed) bg_dt_sta_indi_pane_ParamLimits

0x2ca8,	// (0x000327ed) bg_dt_sta_indi_pane

0xefc6,	// (0x0003eb0b) dt_sta_battery_pane

0xefce,	// (0x0003eb13) dt_sta_indi_pane_g1

0x9d7d,	// (0x000398c2) dt_sta_indi_pane_g2

0x9d86,	// (0x000398cb) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003f9e1) dt_sta_indi_pane_g

0x9d8f,	// (0x000398d4) dt_sta_signal_pane

0x38ce,	// (0x00033413) bg_dt_sta_title_pane_ParamLimits

0x38ce,	// (0x00033413) bg_dt_sta_title_pane

0x9d98,	// (0x000398dd) dt_sta_title_pane_g1

0x9da0,	// (0x000398e5) dt_sta_title_pane_t1_ParamLimits

0x9da0,	// (0x000398e5) dt_sta_title_pane_t1

0x292b,	// (0x00032470) bg_dt_sta_control_pane

0xefd7,	// (0x0003eb1c) dt_sta_controll_pane_g1

0x9dbe,	// (0x00039903) bg_dt_sta_title_pane_g1

0x9dc7,	// (0x0003990c) bg_dt_sta_title_pane_g2

0x9dd0,	// (0x00039915) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003f9e8) bg_dt_sta_title_pane_g

0x73dd,	// (0x00036f22) bg_dt_sta_indi_pane_g1

0x9dd9,	// (0x0003991e) dt_sta_signal_pane_g1

0x9de1,	// (0x00039926) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003f9ef) dt_sta_signal_pane_g

0x9de9,	// (0x0003992e) dt_sta_battery_pane_g1

0x9df2,	// (0x00039937) dt_sta_battery_pane_t1

0x73dd,	// (0x00036f22) bg_dt_sta_control_pane_g1

0x4061,	// (0x00033ba6) fep_china_uni_eep_pane

0x4069,	// (0x00033bae) fep_china_uni_entry_pane_ParamLimits

0x4079,	// (0x00033bbe) popup_fep_china_uni_window_g1_ParamLimits

0x4089,	// (0x00033bce) popup_fep_china_uni_window_g2_ParamLimits

0x4089,	// (0x00033bce) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0003f268) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0003f268) popup_fep_china_uni_window_g

0x9e01,	// (0x00039946) fep_china_uni_eep_pane_g1

0x9e09,	// (0x0003994e) fep_china_uni_eep_pane_t1

0x9888,	// (0x000393cd) aid_touch_area_size_smil_player

0x4a45,	// (0x0003458a) lc0_clock_pane

0x4c1e,	// (0x00034763) status_pane_g5_ParamLimits

0x4c1e,	// (0x00034763) status_pane_g5

0xbdbc,	// (0x0003b901) popup_keymap_window

0x4be4,	// (0x00034729) status_icon_pane

0x9a6c,	// (0x000395b1) cell_ai5_widget_pane_g3_ParamLimits

0x9a8b,	// (0x000395d0) cell_ai5_widget_pane_g4_ParamLimits

0x9a97,	// (0x000395dc) cell_ai5_widget_pane_g5_ParamLimits

0x9abb,	// (0x00039600) cell_ai5_widget_pane_g8_ParamLimits

0x9abb,	// (0x00039600) cell_ai5_widget_pane_g8

0x9acf,	// (0x00039614) cell_ai5_widget_pane_g9_ParamLimits

0x9acf,	// (0x00039614) cell_ai5_widget_pane_g9

0x9ae3,	// (0x00039628) cell_ai5_widget_pane_g10_ParamLimits

0x9ae3,	// (0x00039628) cell_ai5_widget_pane_g10

0x9e18,	// (0x0003995d) status_icon_pane_g1

0x292b,	// (0x00032470) bg_popup_sub_pane_cp13

0x9e20,	// (0x00039965) popup_keymap_window_t1

0xd21a,	// (0x0003cd5f) control_pane_g6_ParamLimits

0xd21a,	// (0x0003cd5f) control_pane_g6

0xd227,	// (0x0003cd6c) control_pane_g7_ParamLimits

0xd227,	// (0x0003cd6c) control_pane_g7

0xd234,	// (0x0003cd79) control_pane_g8_ParamLimits

0xd234,	// (0x0003cd79) control_pane_g8

0xef9a,	// (0x0003eadf) dt_sta_controll_pane_ParamLimits

0xefa7,	// (0x0003eaec) dt_sta_indi_pane_ParamLimits

0xefb4,	// (0x0003eaf9) dt_sta_title_pane_ParamLimits

0x3806,	// (0x0003334b) aid_size_touch_scroll_bar_cale

0xf4b5,	// (0x0003effa) popup_discreet_window_ParamLimits

0xf4b5,	// (0x0003effa) popup_discreet_window

0xb30d,	// (0x0003ae52) popup_sk_window

0x5408,	// (0x00034f4d) bg_popup_sub_pane_cp28_ParamLimits

0x5408,	// (0x00034f4d) bg_popup_sub_pane_cp28

0x9e2e,	// (0x00039973) popup_discreet_window_g1_ParamLimits

0x9e2e,	// (0x00039973) popup_discreet_window_g1

0x9e4e,	// (0x00039993) popup_discreet_window_t1_ParamLimits

0x9e4e,	// (0x00039993) popup_discreet_window_t1

0x9e6c,	// (0x000399b1) popup_discreet_window_t2_ParamLimits

0x9e6c,	// (0x000399b1) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003f9f4) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003f9f4) popup_discreet_window_t

0x2755,	// (0x0003229a) popup_sk_window_g1

0x275f,	// (0x000322a4) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003f9fb) popup_sk_window_g

0x2769,	// (0x000322ae) popup_sk_window_t1

0x2777,	// (0x000322bc) popup_sk_window_t1_copy1

0x9a5c,	// (0x000395a1) cell_ai5_widget_pane_g2_ParamLimits

0x9bba,	// (0x000396ff) cell_ai5_widget_pane_t9_ParamLimits

0x9bba,	// (0x000396ff) cell_ai5_widget_pane_t9

0x292b,	// (0x00032470) main_fep_fshwr2_pane

0xcb91,	// (0x0003c6d6) aid_fshwr2_btn_pane

0xcba0,	// (0x0003c6e5) aid_fshwr2_syb_pane

0xcbb2,	// (0x0003c6f7) aid_fshwr2_txt_pane

0xcbc1,	// (0x0003c706) fshwr2_func_candi_pane

0xcbd2,	// (0x0003c717) fshwr2_hwr_syb_pane

0xcbed,	// (0x0003c732) fshwr2_icf_pane

0x292b,	// (0x00032470) fshwr2_icf_bg_pane

0xefe0,	// (0x0003eb25) fshwr2_icf_pane_t1_ParamLimits

0xefe0,	// (0x0003eb25) fshwr2_icf_pane_t1

0x73dd,	// (0x00036f22) fshwr2_func_candi_pane_g1

0x9ed5,	// (0x00039a1a) fshwr2_func_candi_row_pane_ParamLimits

0x9ed5,	// (0x00039a1a) fshwr2_func_candi_row_pane

0xeff8,	// (0x0003eb3d) cell_fshwr2_syb_pane_ParamLimits

0xeff8,	// (0x0003eb3d) cell_fshwr2_syb_pane

0x765b,	// (0x000371a0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x765b,	// (0x000371a0) fshwr2_hwr_syb_pane_g1

0x292b,	// (0x00032470) bg_popup_call_pane_cp01

0x9f00,	// (0x00039a45) fshwr2_func_candi_cell_pane_ParamLimits

0x9f00,	// (0x00039a45) fshwr2_func_candi_cell_pane

0x9f31,	// (0x00039a76) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f31,	// (0x00039a76) fshwr2_func_candi_cell_bg_pane

0x9f4b,	// (0x00039a90) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f4b,	// (0x00039a90) fshwr2_func_candi_cell_pane_g1

0x9f73,	// (0x00039ab8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f73,	// (0x00039ab8) fshwr2_func_candi_cell_pane_t1

0x292b,	// (0x00032470) bg_button_pane_cp08

0x4557,	// (0x0003409c) cell_fshwr2_syb_bg_pane

0xf012,	// (0x0003eb57) cell_fshwr2_syb_bg_pane_g1

0xf01a,	// (0x0003eb5f) cell_fshwr2_syb_bg_pane_t1

0x38ce,	// (0x00033413) main_tmo_pane

0xd8df,	// (0x0003d424) uni_indicator_pane_g1_ParamLimits

0xd8f4,	// (0x0003d439) uni_indicator_pane_g2_ParamLimits

0x5f4e,	// (0x00035a93) uni_indicator_pane_g3_ParamLimits

0x5f64,	// (0x00035aa9) uni_indicator_pane_g4_ParamLimits

0x5f64,	// (0x00035aa9) uni_indicator_pane_g4

0x5f78,	// (0x00035abd) uni_indicator_pane_g5_ParamLimits

0x5f78,	// (0x00035abd) uni_indicator_pane_g5

0x5f8c,	// (0x00035ad1) uni_indicator_pane_g6_ParamLimits

0x5f8c,	// (0x00035ad1) uni_indicator_pane_g6

0xf922,	// (0x0003f467) uni_indicator_pane_g_ParamLimits

0xe393,	// (0x0003ded8) popup_tmo_note_window_ParamLimits

0xe393,	// (0x0003ded8) popup_tmo_note_window

0x1fd5,	// (0x00031b1a) fshwr2_bg_pane

0x9f64,	// (0x00039aa9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f64,	// (0x00039aa9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003fa00) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003fa00) fshwr2_func_candi_cell_pane_g

0x73dd,	// (0x00036f22) bg_popup_window_pane_cp01

0x9f9d,	// (0x00039ae2) bg_popup_window_pane_g1_cp01

0x9fa6,	// (0x00039aeb) bg_popup_window_pane_cp22_ParamLimits

0x9fa6,	// (0x00039aeb) bg_popup_window_pane_cp22

0x9fb4,	// (0x00039af9) listscroll_tmo_link_pane_ParamLimits

0x9fb4,	// (0x00039af9) listscroll_tmo_link_pane

0x9ff4,	// (0x00039b39) popup_tmo_note_window_g1_ParamLimits

0x9ff4,	// (0x00039b39) popup_tmo_note_window_g1

0xa001,	// (0x00039b46) tmo_note_info_pane_ParamLimits

0xa001,	// (0x00039b46) tmo_note_info_pane

0xf029,	// (0x0003eb6e) list_tmo_note_info_pane_g1_ParamLimits

0xf029,	// (0x0003eb6e) list_tmo_note_info_pane_g1

0xa032,	// (0x00039b77) list_tmo_note_info_pane_g2_ParamLimits

0xa032,	// (0x00039b77) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003fa05) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003fa05) list_tmo_note_info_pane_g

0xa04e,	// (0x00039b93) list_tmo_note_info_text_pane_ParamLimits

0xa04e,	// (0x00039b93) list_tmo_note_info_text_pane

0xa0cf,	// (0x00039c14) list_tmo_link_pane

0xa0dc,	// (0x00039c21) scroll_pane_cp20

0xa0e9,	// (0x00039c2e) list_single_tmo_link_pane_ParamLimits

0xa0e9,	// (0x00039c2e) list_single_tmo_link_pane

0xa0f9,	// (0x00039c3e) list_single_tmo_link_pane_t1

0xa107,	// (0x00039c4c) list_tmo_note_info_text_pane_t1_ParamLimits

0xa107,	// (0x00039c4c) list_tmo_note_info_text_pane_t1

0xcea0,	// (0x0003c9e5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcea0,	// (0x0003c9e5) aid_size_touch_scroll_bar_cp01

0xb93a,	// (0x0003b47f) aid_size_touch_slider_marker

0xb2fd,	// (0x0003ae42) popup_settings_window_ParamLimits

0xb2fd,	// (0x0003ae42) popup_settings_window

0x0e3c,	// (0x00030981) popup_candi_list_indi_window

0x48f9,	// (0x0003443e) aid_touch_navi_pane_ParamLimits

0x1f30,	// (0x00031a75) rs_clock_indi_pane

0x1f39,	// (0x00031a7e) sctrl_sk_bottom_pane_ParamLimits

0x1f4a,	// (0x00031a8f) sctrl_sk_top_pane_ParamLimits

0x204d,	// (0x00031b92) popup_fep_tooltip_window

0x99dc,	// (0x00039521) aid_size_cell_widget_grid_ParamLimits

0x9a50,	// (0x00039595) cell_ai5_widget_pane_g1_ParamLimits

0x9a50,	// (0x00039595) cell_ai5_widget_pane_g1

0x9aa3,	// (0x000395e8) cell_ai5_widget_pane_g6_ParamLimits

0x9aaf,	// (0x000395f4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003f983) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003f983) cell_ai5_widget_pane_g

0x9bde,	// (0x00039723) cell_ai5_widget_pane_t10_ParamLimits

0x9bde,	// (0x00039723) cell_ai5_widget_pane_t10

0x9bf4,	// (0x00039739) grid_ai5_widget_pane_ParamLimits

0x9c96,	// (0x000397db) cell_contacts_ai5_widget_pane_ParamLimits

0x9c96,	// (0x000397db) cell_contacts_ai5_widget_pane

0x9e81,	// (0x000399c6) popup_discreet_window_t3_ParamLimits

0x9e81,	// (0x000399c6) popup_discreet_window_t3

0x27ef,	// (0x00032334) popup_fshwr2_char_preview_window_ParamLimits

0x27ef,	// (0x00032334) popup_fshwr2_char_preview_window

0xf040,	// (0x0003eb85) tmo_note_info_pane_t1

0xf055,	// (0x0003eb9a) tmo_note_info_pane_t2

0xf06c,	// (0x0003ebb1) tmo_note_info_pane_t3

0xa0ab,	// (0x00039bf0) tmo_note_info_pane_t4

0xa0bd,	// (0x00039c02) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003fa0a) tmo_note_info_pane_t

0xa0cf,	// (0x00039c14) list_tmo_link_pane_ParamLimits

0xa0dc,	// (0x00039c21) scroll_pane_cp20_ParamLimits

0x292b,	// (0x00032470) bg_popup_fep_char_preview_window_cp01

0xa120,	// (0x00039c65) popup_fshwr2_char_preview_window_t1

0xa12e,	// (0x00039c73) popup_candi_list_indi_window_g1

0xa137,	// (0x00039c7c) bg_cell_contacts_ai5_widget_pane

0xa143,	// (0x00039c88) cell_contacts_ai5_widget_pane_g1

0xa157,	// (0x00039c9c) cell_contacts_ai5_widget_pane_g2

0xa163,	// (0x00039ca8) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003fa15) cell_contacts_ai5_widget_pane_g

0xa176,	// (0x00039cbb) cell_contacts_ai5_widget_pane_t1

0x38ce,	// (0x00033413) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0e6,	// (0x0003ec2b) settings_container_pane

0x4557,	// (0x0003409c) listscroll_set_pane_copy1

0x6a88,	// (0x000365cd) scroll_pane_cp121_copy1

0xa1f9,	// (0x00039d3e) set_content_pane_copy1

0xf0f2,	// (0x0003ec37) aid_height_set_list_copy1_ParamLimits

0xf0f2,	// (0x0003ec37) aid_height_set_list_copy1

0x6184,	// (0x00035cc9) aid_size_parent_copy1_ParamLimits

0x6184,	// (0x00035cc9) aid_size_parent_copy1

0xf0fe,	// (0x0003ec43) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0fe,	// (0x0003ec43) button_value_adjust_pane_cp6_copy1

0x4897,	// (0x000343dc) list_highlight_pane_cp2_copy1_ParamLimits

0x4897,	// (0x000343dc) list_highlight_pane_cp2_copy1

0xf112,	// (0x0003ec57) list_set_pane_copy1_ParamLimits

0xf112,	// (0x0003ec57) list_set_pane_copy1

0xf081,	// (0x0003ebc6) main_pane_set_t1_copy1_ParamLimits

0xf081,	// (0x0003ebc6) main_pane_set_t1_copy1

0xf0bb,	// (0x0003ec00) main_pane_set_t2_copy1_ParamLimits

0xf0bb,	// (0x0003ec00) main_pane_set_t2_copy1

0xf1bf,	// (0x0003ed04) main_pane_set_t3_copy1

0xf1cd,	// (0x0003ed12) main_pane_set_t4_copy1

0xf0da,	// (0x0003ec1f) set_content_pane_g1_copy1_ParamLimits

0xf0da,	// (0x0003ec1f) set_content_pane_g1_copy1

0xf1db,	// (0x0003ed20) setting_code_pane_copy1

0xa2f2,	// (0x00039e37) setting_slider_graphic_pane_copy1

0xa2f2,	// (0x00039e37) setting_slider_pane_copy1

0xa2f2,	// (0x00039e37) setting_text_pane_copy1

0xa2f2,	// (0x00039e37) setting_volume_pane_copy1

0xf1db,	// (0x0003ed20) settings_code_pane_cp2_copy1

0xf1e3,	// (0x0003ed28) settings_code_pane_cp_copy1_ParamLimits

0xf1e3,	// (0x0003ed28) settings_code_pane_cp_copy1

0xcc05,	// (0x0003c74a) volume_set_pane_copy1

0xf1f7,	// (0x0003ed3c) volume_set_pane_g10_copy1

0xf1ff,	// (0x0003ed44) volume_set_pane_g1_copy1

0xf207,	// (0x0003ed4c) volume_set_pane_g2_copy1

0xf20f,	// (0x0003ed54) volume_set_pane_g3_copy1

0xf217,	// (0x0003ed5c) volume_set_pane_g4_copy1

0xf21f,	// (0x0003ed64) volume_set_pane_g5_copy1

0xf227,	// (0x0003ed6c) volume_set_pane_g6_copy1

0xf22f,	// (0x0003ed74) volume_set_pane_g7_copy1

0xf237,	// (0x0003ed7c) volume_set_pane_g8_copy1

0xf23f,	// (0x0003ed84) volume_set_pane_g9_copy1

0x2a1f,	// (0x00032564) bg_set_opt_pane_cp_copy1_ParamLimits

0x2a1f,	// (0x00032564) bg_set_opt_pane_cp_copy1

0x280b,	// (0x00032350) setting_slider_pane_t1_copy1_ParamLimits

0x280b,	// (0x00032350) setting_slider_pane_t1_copy1

0xcc0d,	// (0x0003c752) setting_slider_pane_t2_copy1_ParamLimits

0xcc0d,	// (0x0003c752) setting_slider_pane_t2_copy1

0xcc27,	// (0x0003c76c) setting_slider_pane_t3_copy1_ParamLimits

0xcc27,	// (0x0003c76c) setting_slider_pane_t3_copy1

0xcc3f,	// (0x0003c784) slider_set_pane_copy1_ParamLimits

0xcc3f,	// (0x0003c784) slider_set_pane_copy1

0x3929,	// (0x0003346e) set_opt_bg_pane_g1_copy2

0x3931,	// (0x00033476) set_opt_bg_pane_g2_copy2

0xa35e,	// (0x00039ea3) set_opt_bg_pane_g3_copy2

0x3941,	// (0x00033486) set_opt_bg_pane_g4_copy2

0x3949,	// (0x0003348e) set_opt_bg_pane_g5_copy2

0x3951,	// (0x00033496) set_opt_bg_pane_g6_copy2

0xf247,	// (0x0003ed8c) set_opt_bg_pane_g7_copy2

0xa370,	// (0x00039eb5) set_opt_bg_pane_g8_copy2

0xa37a,	// (0x00039ebf) set_opt_bg_pane_g9_copy2

0xa384,	// (0x00039ec9) aid_size_touch_slider_mark_copy1_ParamLimits

0xa384,	// (0x00039ec9) aid_size_touch_slider_mark_copy1

0xa398,	// (0x00039edd) slider_set_pane_g1_copy1

0xa3a1,	// (0x00039ee6) slider_set_pane_g2_copy1

0x6dd6,	// (0x0003691b) slider_set_pane_g3_copy1_ParamLimits

0x6dd6,	// (0x0003691b) slider_set_pane_g3_copy1

0x6dea,	// (0x0003692f) slider_set_pane_g4_copy1_ParamLimits

0x6dea,	// (0x0003692f) slider_set_pane_g4_copy1

0x6e02,	// (0x00036947) slider_set_pane_g5_copy1_ParamLimits

0x6e02,	// (0x00036947) slider_set_pane_g5_copy1

0x6dd6,	// (0x0003691b) slider_set_pane_g6_copy1_ParamLimits

0x6dd6,	// (0x0003691b) slider_set_pane_g6_copy1

0xf24f,	// (0x0003ed94) slider_set_pane_g7_copy1_ParamLimits

0xf24f,	// (0x0003ed94) slider_set_pane_g7_copy1

0x293f,	// (0x00032484) bg_set_opt_pane_cp2_copy1

0xa3bf,	// (0x00039f04) setting_slider_graphic_pane_g1_copy1

0xf265,	// (0x0003edaa) setting_slider_graphic_pane_t1_copy1

0xf275,	// (0x0003edba) setting_slider_graphic_pane_t2_copy1

0xf285,	// (0x0003edca) slider_set_pane_cp_copy1

0xa3f8,	// (0x00039f3d) input_focus_pane_cp1_copy1

0xa401,	// (0x00039f46) list_set_text_pane_copy1

0xa409,	// (0x00039f4e) setting_text_pane_g1_copy1

0xcc55,	// (0x0003c79a) set_text_pane_t1_copy1

0xa3f8,	// (0x00039f3d) input_focus_pane_cp2_copy1

0xa409,	// (0x00039f4e) setting_code_pane_g1_copy1

0xf28d,	// (0x0003edd2) setting_code_pane_t1_copy1

0x68b3,	// (0x000363f8) list_set_graphic_pane_copy1

0x293f,	// (0x00032484) bg_set_opt_pane_cp4_copy1

0xd0c7,	// (0x0003cc0c) list_set_graphic_pane_g1_copy1_ParamLimits

0xd0c7,	// (0x0003cc0c) list_set_graphic_pane_g1_copy1

0xf29b,	// (0x0003ede0) list_set_graphic_pane_g2_copy1

0xd0df,	// (0x0003cc24) list_set_graphic_pane_t1_copy1_ParamLimits

0xd0df,	// (0x0003cc24) list_set_graphic_pane_t1_copy1

0x73dd,	// (0x00036f22) rs_clock_indi_pane_g1

0xa43a,	// (0x00039f7f) rs_clock_indi_pane_t1

0xa448,	// (0x00039f8d) rs_indi_pane

0xa450,	// (0x00039f95) rs_indi_pane_g1

0xa459,	// (0x00039f9e) rs_indi_pane_g2

0xa462,	// (0x00039fa7) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003fa1c) rs_indi_pane_g

0x4557,	// (0x0003409c) bg_popup_preview_window_pane_cp03

0xa46b,	// (0x00039fb0) popup_fep_tooltip_window_t1

0x8065,	// (0x00037baa) popup_note2_window_g2_ParamLimits

0x8065,	// (0x00037baa) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0003f7b5) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0003f7b5) popup_note2_window_g

0x8560,	// (0x000380a5) bg_popup_sub_pane_cp11_ParamLimits

0x856d,	// (0x000380b2) cell_ai3_links_pane_g1_ParamLimits

0x8584,	// (0x000380c9) cell_ai3_links_pane_t1

0xcc55,	// (0x0003c79a) set_text_pane_t1_copy1_ParamLimits

0xd153,	// (0x0003cc98) cell_graphic_popup_pane_cp2_ParamLimits

0xd153,	// (0x0003cc98) cell_graphic_popup_pane_cp2

0xf2a3,	// (0x0003ede8) cell_graphic_popup_pane_g1_cp2

0x3619,	// (0x0003315e) cell_graphic_popup_pane_g2_cp2

0xa481,	// (0x00039fc6) cell_graphic_popup_pane_g3_cp2

0xa489,	// (0x00039fce) cell_graphic_popup_pane_t2_cp2

0x362a,	// (0x0003316f) grid_highlight_pane_cp3_cp2

0x3c6e,	// (0x000337b3) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x38ce,	// (0x00033413) main_tmo_pane_ParamLimits

0xe387,	// (0x0003decc) popup_tmo_big_image_note_window

0x9a40,	// (0x00039585) cell_ai5_widget_list_pane

0x9a48,	// (0x0003958d) cell_ai5_widget_lrg_icon_pane

0xf040,	// (0x0003eb85) tmo_note_info_pane_t1_ParamLimits

0xf055,	// (0x0003eb9a) tmo_note_info_pane_t2_ParamLimits

0xf06c,	// (0x0003ebb1) tmo_note_info_pane_t3_ParamLimits

0xa0ab,	// (0x00039bf0) tmo_note_info_pane_t4_ParamLimits

0xa0bd,	// (0x00039c02) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003fa0a) tmo_note_info_pane_t_ParamLimits

0xf0e6,	// (0x0003ec2b) settings_container_pane_ParamLimits

0xa3f0,	// (0x00039f35) indicator_popup_pane_cp5

0xa3f0,	// (0x00039f35) indicator_popup_pane_cp6

0x68b3,	// (0x000363f8) list_set_graphic_pane_copy1_ParamLimits

0x292b,	// (0x00032470) bg_popup_window_pane_cp23

0xa497,	// (0x00039fdc) popup_tmo_big_image_note_window_g1

0xa4a1,	// (0x00039fe6) popup_tmo_big_image_note_window_t1

0xa4b1,	// (0x00039ff6) popup_tmo_big_image_note_window_t2

0xa4c1,	// (0x0003a006) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003fa23) popup_tmo_big_image_note_window_t

0xa4d1,	// (0x0003a016) cell_ai5_widget_lrg_icon_pane_g1

0xa4d9,	// (0x0003a01e) cell_ai5_widget_lrg_icon_pane_t1

0xa4e7,	// (0x0003a02c) cell_ai5_widget_list_row_pane_ParamLimits

0xa4e7,	// (0x0003a02c) cell_ai5_widget_list_row_pane

0xa4ff,	// (0x0003a044) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa4ff,	// (0x0003a044) cell_ai5_widget_list_row_pane_g1

0xa50c,	// (0x0003a051) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa50c,	// (0x0003a051) cell_ai5_widget_list_row_pane_t1

0xa524,	// (0x0003a069) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa524,	// (0x0003a069) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0003fa2a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003fa2a) cell_ai5_widget_list_row_pane_t

0xf3dc,	// (0x0003ef21) main_fep_vtchi_ss_pane

0x2880,	// (0x000323c5) popup_fep_char_pre_window

0x2888,	// (0x000323cd) popup_fep_ituss_window

0x28a9,	// (0x000323ee) popup_fep_vkbss_window

0xa54c,	// (0x0003a091) grid_vkbss_keypad_pane_ParamLimits

0xa54c,	// (0x0003a091) grid_vkbss_keypad_pane

0xa55c,	// (0x0003a0a1) ituss_keypad_pane

0x28d4,	// (0x00032419) aid_vkbss_key_offset_ParamLimits

0x28d4,	// (0x00032419) aid_vkbss_key_offset

0x28e0,	// (0x00032425) cell_vkbss_key_pane_ParamLimits

0x28e0,	// (0x00032425) cell_vkbss_key_pane

0xa56c,	// (0x0003a0b1) bg_cell_vkbss_key_g1_ParamLimits

0xa56c,	// (0x0003a0b1) bg_cell_vkbss_key_g1

0xa578,	// (0x0003a0bd) cell_vkbss_key_3p_pane_ParamLimits

0xa578,	// (0x0003a0bd) cell_vkbss_key_3p_pane

0xa592,	// (0x0003a0d7) cell_vkbss_key_g1_ParamLimits

0xa592,	// (0x0003a0d7) cell_vkbss_key_g1

0xa5ac,	// (0x0003a0f1) cell_vkbss_key_t1_ParamLimits

0xa5ac,	// (0x0003a0f1) cell_vkbss_key_t1

0x28f6,	// (0x0003243b) cell_ituss_key_pane_ParamLimits

0x28f6,	// (0x0003243b) cell_ituss_key_pane

0xa5d7,	// (0x0003a11c) bg_cell_ituss_key_g1_ParamLimits

0xa5d7,	// (0x0003a11c) bg_cell_ituss_key_g1

0xa5e3,	// (0x0003a128) cell_ituss_key_pane_g1_ParamLimits

0xa5e3,	// (0x0003a128) cell_ituss_key_pane_g1

0xa5fd,	// (0x0003a142) cell_ituss_key_pane_g2_ParamLimits

0xa5fd,	// (0x0003a142) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x0003fa31) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0003fa31) cell_ituss_key_pane_g

0xa62b,	// (0x0003a170) cell_ituss_key_t1_ParamLimits

0xa62b,	// (0x0003a170) cell_ituss_key_t1

0xa661,	// (0x0003a1a6) cell_ituss_key_t2_ParamLimits

0xa661,	// (0x0003a1a6) cell_ituss_key_t2

0xa692,	// (0x0003a1d7) cell_ituss_key_t3_ParamLimits

0xa692,	// (0x0003a1d7) cell_ituss_key_t3

0xa6cc,	// (0x0003a211) cell_ituss_key_t4_ParamLimits

0xa6cc,	// (0x0003a211) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x0003fa36) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0003fa36) cell_ituss_key_t

0xa706,	// (0x0003a24b) cell_vkbss_key_3p_pane_g1

0xa70e,	// (0x0003a253) cell_vkbss_key_3p_pane_g2

0xa716,	// (0x0003a25b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0003fa3f) cell_vkbss_key_3p_pane_g

0x292b,	// (0x00032470) bg_popup_fep_char_preview_window_cp02

0xa71e,	// (0x0003a263) popup_fep_char_pre_window_t1

0xef6a,	// (0x0003eaaf) main_ai5_sk_pane

0xa137,	// (0x00039c7c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa143,	// (0x00039c88) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa157,	// (0x00039c9c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa163,	// (0x00039ca8) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003fa15) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa176,	// (0x00039cbb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x38ce,	// (0x00033413) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2ab,	// (0x0003edf0) main_ai5_sk_pane_g1

0x5241,	// (0x00034d86) popup_query_code_window_g1

0x289e,	// (0x000323e3) popup_fep_vkb_icf_pane

0x28b2,	// (0x000323f7) popup_fep_vtchi_icf_pane

0x38ce,	// (0x00033413) bg_icf_pane

0xa736,	// (0x0003a27b) list_vkb_icf_pane

0x38ce,	// (0x00033413) bg_icf_pane_cp01

0xa742,	// (0x0003a287) vtchi_icf_list_pane

0xa753,	// (0x0003a298) list_vkb_icf_pane_t1_ParamLimits

0xa753,	// (0x0003a298) list_vkb_icf_pane_t1

0xa769,	// (0x0003a2ae) vtchi_icf_list_pane_t1_ParamLimits

0xa769,	// (0x0003a2ae) vtchi_icf_list_pane_t1

0x2888,	// (0x000323cd) popup_fep_ituss_window_ParamLimits

0x28b2,	// (0x000323f7) popup_fep_vtchi_icf_pane_ParamLimits

0xa55c,	// (0x0003a0a1) ituss_keypad_pane_ParamLimits

0x28c8,	// (0x0003240d) ituss_sks_pane

0x38ce,	// (0x00033413) bg_icf_pane_ParamLimits

0x2871,	// (0x000323b6) icf_edit_indi_pane_ParamLimits

0x2871,	// (0x000323b6) icf_edit_indi_pane

0xa736,	// (0x0003a27b) list_vkb_icf_pane_ParamLimits

0x38ce,	// (0x00033413) bg_icf_pane_cp01_ParamLimits

0x2871,	// (0x000323b6) icf_edit_indi_pane_cp01_ParamLimits

0x2871,	// (0x000323b6) icf_edit_indi_pane_cp01

0xa74a,	// (0x0003a28f) vtchi_query_pane

0x765b,	// (0x000371a0) icf_edit_indi_pane_g1_ParamLimits

0x765b,	// (0x000371a0) icf_edit_indi_pane_g1

0xa7ee,	// (0x0003a333) icf_edit_indi_pane_g2_ParamLimits

0xa7ee,	// (0x0003a333) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0003fa57) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0003fa57) icf_edit_indi_pane_g

0xa7fd,	// (0x0003a342) icf_edit_indi_pane_t1

0xa784,	// (0x0003a2c9) bg_input_focus_pane_cp042

0x37fd,	// (0x00033342) vtchi_button_pane

0xa78d,	// (0x0003a2d2) vtchi_query_pane_t1

0xa79b,	// (0x0003a2e0) vtchi_query_pane_t2

0xa7a9,	// (0x0003a2ee) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0003fa46) vtchi_query_pane_t

0x292b,	// (0x00032470) bg_button_pane_cp13

0xa7b7,	// (0x0003a2fc) vtchi_button_pane_g1

0xa7bf,	// (0x0003a304) ituss_sks_pane_g1

0xa7ca,	// (0x0003a30f) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0003fa4d) ituss_sks_pane_g

0xa7d2,	// (0x0003a317) ituss_sks_pane_t1

0xa7e0,	// (0x0003a325) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0003fa52) ituss_sks_pane_t

0x6e54,	// (0x00036999) indicator_nsta_pane_cp_g1

0x6e5d,	// (0x000369a2) indicator_nsta_pane_cp_g2

0x6e65,	// (0x000369aa) indicator_nsta_pane_cp_g3

0x6e6d,	// (0x000369b2) indicator_nsta_pane_cp_g4

0x6e6d,	// (0x000369b2) indicator_nsta_pane_cp_g5

0x6e6d,	// (0x000369b2) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0003f5f3) indicator_nsta_pane_cp_g

0xed61,	// (0x0003e8a6) cell_graphic2_pane_t2_ParamLimits

0xed61,	// (0x0003e8a6) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003f90c) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003f90c) cell_graphic2_pane_t

0xed97,	// (0x0003e8dc) cell_graphic2_control_pane_t1

0xd065,	// (0x0003cbaa) signal_pane_g3_ParamLimits

0xd065,	// (0x0003cbaa) signal_pane_g3

0xd079,	// (0x0003cbbe) signal_pane_g4_ParamLimits

0xd079,	// (0x0003cbbe) signal_pane_g4

0xa536,	// (0x0003a07b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa536,	// (0x0003a07b) cell_ai5_widget_list_row_pane_t3

0xa619,	// (0x0003a15e) cell_ituss_key_pane_t1_ParamLimits

0xa619,	// (0x0003a15e) cell_ituss_key_pane_t1

0x4e94,	// (0x000349d9) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e94,	// (0x000349d9) form_field_data_wide_pane_vc_t2

0x4ea8,	// (0x000349ed) form_field_data_wide_pane_vc_t3_ParamLimits

0x4ea8,	// (0x000349ed) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0003f34f) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0003f34f) form_field_data_wide_pane_vc_t

0x6aca,	// (0x0003660f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6aca,	// (0x0003660f) form_field_slider_wide_pane_vc_t3

0x6ba8,	// (0x000366ed) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6ba8,	// (0x000366ed) form_field_popup_wide_pane_vc_t2

0x6bbf,	// (0x00036704) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6bbf,	// (0x00036704) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x0003f5e2) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x0003f5e2) form_field_popup_wide_pane_vc_t

0xcb91,	// (0x0003c6d6) aid_fshwr2_btn_pane_ParamLimits

0xcba0,	// (0x0003c6e5) aid_fshwr2_syb_pane_ParamLimits

0xcbb2,	// (0x0003c6f7) aid_fshwr2_txt_pane_ParamLimits

0x1fd5,	// (0x00031b1a) fshwr2_bg_pane_ParamLimits

0xcbc1,	// (0x0003c706) fshwr2_func_candi_pane_ParamLimits

0xcbd2,	// (0x0003c717) fshwr2_hwr_syb_pane_ParamLimits

0xcbed,	// (0x0003c732) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
